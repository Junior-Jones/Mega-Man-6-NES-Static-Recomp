#include "mm6_static_core.h"
#include "mm6_v09_sha256.h"

#include <algorithm>
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

namespace {
int checks=0, failures=0;
void req(bool ok,const char* msg){++checks;if(!ok){++failures;std::fprintf(stderr,"FAIL %s\n",msg);}}
std::vector<std::uint8_t> read_all(const char* path){std::ifstream f(path,std::ios::binary);return {std::istreambuf_iterator<char>(f),{}};}
std::string hex32(const std::array<std::uint8_t,32>& h){static const char* d="0123456789abcdef";std::string s;for(auto b:h){s.push_back(d[b>>4]);s.push_back(d[b&15]);}return s;}
std::vector<std::uint8_t> snapshot(MM6StaticCore* c){size_t n=0;req(mm6_static_core_snapshot_save(c,nullptr,0,&n)==1,"snapshot query");req(n>148,"snapshot size");std::vector<std::uint8_t> s(n);size_t w=0;req(mm6_static_core_snapshot_save(c,s.data(),s.size(),&w)==1,"snapshot save");req(w==n,"snapshot written size");return s;}

struct HookState{int before=0,bus=0,frame=0,frontier=0;bool stop_before=false;bool stop_bus=false;bool reentry=false;int reentry_snapshot=-1;int reentry_advance=-1;};
MM6HookAction hook_cb(MM6StaticCore* core,const MM6HookEvent* e,void* user){auto* s=static_cast<HookState*>(user);if(!s||!e)return MM6_HOOK_CONTINUE;switch(e->kind){case MM6_HOOK_BEFORE_INSTRUCTION:++s->before;break;case MM6_HOOK_BUS_EVENT:++s->bus;break;case MM6_HOOK_FRAME:++s->frame;break;case MM6_HOOK_FRONTIER:++s->frontier;break;}
  if(s->reentry){s->reentry_snapshot=static_cast<int>(mm6_static_core_snapshot_size(core));MM6FrameResult r{};s->reentry_advance=mm6_static_core_advance_frame(core,0,0,1,&r);s->reentry=false;}
  if(e->kind==MM6_HOOK_BEFORE_INSTRUCTION&&s->stop_before)return MM6_HOOK_STOP;
  if(e->kind==MM6_HOOK_BUS_EVENT&&s->stop_bus)return MM6_HOOK_STOP;
  return MM6_HOOK_CONTINUE;
}

struct FrameCapture{MM6FrameResult result{};std::vector<std::uint32_t> frame;std::vector<std::int16_t> audio;};
FrameCapture advance_capture(MM6StaticCore* c,std::uint8_t p1,std::uint8_t p2){FrameCapture x;x.frame.resize(MM6_FRAME_PIXELS);req(mm6_static_core_advance_frame(c,p1,p2,1000000,&x.result)==1,"advance frame call");req(x.result.completed==1&&x.result.trap==MM6_CORE_TRAP_NONE,"frame completed without trap");req(mm6_static_core_frame_copy_bgra(c,x.frame.data(),x.frame.size())==1,"frame copy");const auto n=mm6_static_core_audio_available(c);req(n<=4096,"bounded audio");x.audio.resize(n);req(mm6_static_core_audio_read(c,x.audio.data(),x.audio.size())==n,"audio read exact");return x;}
}

int main(int argc,char**argv){if(argc!=2){std::fprintf(stderr,"rom path required\n");return 2;}auto rom=read_all(argv[1]);req(rom.size()==MM6_NES_ROM_BYTES,"exact ROM bytes");
  req(hex32(mm6_v09_sha256(nullptr,0))=="e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855","sha empty");const std::string abc="abc";req(hex32(mm6_v09_sha256(reinterpret_cast<const std::uint8_t*>(abc.data()),abc.size()))=="ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad","sha abc");const std::string fox="The quick brown fox jumps over the lazy dog";req(hex32(mm6_v09_sha256(reinterpret_cast<const std::uint8_t*>(fox.data()),fox.size()))=="d7a8fbb307d7809469ca9abcb0082e4f8d5651e46d3cdb762d02d0bf37c9e592","sha fox");
  MM6StaticCore* a=mm6_static_core_create();MM6StaticCore* b=mm6_static_core_create();req(a&&b,"create cores");req(mm6_static_core_reset(a,rom.data(),rom.size())==1,"exact ROM reset A");req(mm6_static_core_reset(b,rom.data(),rom.size())==1,"exact ROM reset B");
  auto bad=rom;bad[0]^=1;req(mm6_static_core_reset(b,bad.data(),bad.size())==0,"reject bad header");bad=rom;bad[1000]^=1;req(mm6_static_core_reset(b,bad.data(),bad.size())==0,"reject changed payload");req(mm6_static_core_reset(b,rom.data(),rom.size()-1)==0,"reject truncated ROM");req(mm6_static_core_reset(b,rom.data(),rom.size())==1,"restore B exact ROM");
  auto caller=rom;MM6StaticCore* owned=mm6_static_core_create();req(mm6_static_core_reset(owned,caller.data(),caller.size())==1,"owned ROM reset");std::fill(caller.begin()+16,caller.end(),0xA5u);auto oc=advance_capture(owned,0,0);auto bc=advance_capture(b,0,0);req(oc.frame==bc.frame,"ROM copied into core-owned storage");req(oc.audio==bc.audio,"core-owned ROM audio equality");
  req(oc.result.executed_instructions>0&&oc.result.executed_instructions<1000000,"bounded translated frame steps");req(oc.result.player1_buttons==0&&oc.result.player2_buttons==0,"frame input echo");req(mm6_static_core_trap(owned)==MM6_CORE_TRAP_NONE,"no trap after frame");req(std::string(mm6_static_core_trap_name(MM6_CORE_TRAP_STEP_LIMIT))=="step_limit","trap name");
  std::vector<std::uint32_t> tiny(10);req(mm6_static_core_frame_copy_bgra(owned,tiny.data(),tiny.size())==0,"reject short frame buffer");std::vector<std::uint8_t> indexed(MM6_FRAME_PIXELS);req(mm6_static_core_frame_copy_indexed(owned,indexed.data(),indexed.size())==1,"indexed frame copy");

  req(mm6_static_core_reset(a,rom.data(),rom.size())==1,"reset A for hook tests");HookState hs{};hs.stop_before=true;hs.reentry=true;MM6HookFilter hf{MM6_HOOK_BEFORE_INSTRUCTION,-1,0,0xFFFF,0,0xFFFF};mm6_static_core_set_hook(a,&hf,hook_cb,&hs);MM6FrameResult hr{};req(mm6_static_core_advance_frame(a,1,2,100,&hr)==1,"before-hook advance");req(hr.stopped==1&&hr.executed_instructions==0,"before hook stops before instruction");req(hs.before==1,"before hook count");req(hs.reentry_snapshot==0&&hs.reentry_advance==0,"hook reentry rejected");mm6_static_core_clear_hook(a);
  hs={};hs.stop_bus=true;hf=MM6HookFilter{MM6_HOOK_BUS_EVENT,-1,0,0xFFFF,0,0xFFFF};mm6_static_core_set_hook(a,&hf,hook_cb,&hs);req(mm6_static_core_advance_frame(a,3,4,100,&hr)==1,"bus-hook advance");req(hr.stopped==1&&hr.executed_instructions==1,"bus stop latched to instruction boundary");req(hs.bus>=1,"bus hooks observed");mm6_static_core_clear_hook(a);
  hs={};hf=MM6HookFilter{MM6_HOOK_FRAME,-1,0,0xFFFF,0,0xFFFF};mm6_static_core_set_hook(a,&hf,hook_cb,&hs);auto hc=advance_capture(a,0x81,0x42);req(hs.frame==1,"one frame hook");req(hc.result.player1_buttons==0x81&&hc.result.player2_buttons==0x42,"controller masks cross public boundary");mm6_static_core_clear_hook(a);

  auto s0=snapshot(a);req(mm6_static_core_snapshot_size(a)==s0.size(),"snapshot size API consistent");auto ref_before=snapshot(a);
  auto atomic=[&](std::vector<std::uint8_t> badsnap,const char* name){req(mm6_static_core_snapshot_load(a,badsnap.data(),badsnap.size())==0,name);req(snapshot(a)==ref_before,"failed load atomic");};
  auto q=s0;q[0]^=1;atomic(q,"reject snapshot magic");q=s0;q[8]^=1;atomic(q,"reject snapshot version");q=s0;q[12]^=1;atomic(q,"reject snapshot ROM identity");q=s0;q[44]^=1;atomic(q,"reject snapshot profile");q=s0;q[76]^=1;atomic(q,"reject snapshot core identity");q=s0;q[116]^=1;atomic(q,"reject snapshot payload hash");q=s0;q.back()^=1;atomic(q,"reject snapshot corruption");q=s0;q.push_back(0);atomic(q,"reject snapshot trailing data");q=s0;q.pop_back();atomic(q,"reject snapshot truncation");
  req(mm6_static_core_snapshot_load(a,s0.data(),s0.size())==1,"snapshot load roundtrip");req(mm6_static_core_audio_available(a)==0,"snapshot load clears queued PCM");req(snapshot(a)==s0,"snapshot reserialize exact");
  MM6StaticCore* c=mm6_static_core_create();req(c!=nullptr,"create continuation core");req(mm6_static_core_reset(c,rom.data(),rom.size())==1,"reset continuation core");req(mm6_static_core_snapshot_load(c,s0.data(),s0.size())==1,"load snapshot into second core");auto ca=advance_capture(a,0x11,0x22);auto cc=advance_capture(c,0x11,0x22);req(ca.result.program_counter==cc.result.program_counter,"snapshot deterministic PC continuation");req(ca.result.end_frame==cc.result.end_frame,"snapshot deterministic frame continuation");req(ca.result.executed_instructions==cc.result.executed_instructions,"snapshot deterministic step continuation");req(ca.frame==cc.frame,"snapshot deterministic video continuation");req(ca.audio==cc.audio,"snapshot deterministic audio continuation");
  mm6_static_core_audio_clear(a);req(mm6_static_core_audio_available(a)==0,"audio clear");
  MM6FrameResult lim{};req(mm6_static_core_advance_frame(a,0,0,1,&lim)==1,"step-limit call");req(lim.trap==MM6_CORE_TRAP_STEP_LIMIT&&lim.executed_instructions==1,"step limit reports boundary trap");

  mm6_static_core_destroy(c);mm6_static_core_destroy(owned);mm6_static_core_destroy(b);mm6_static_core_destroy(a);
  std::printf("V09_PUBLIC checks=%d failures=%d one_frame_steps=%llu snapshot_bytes=%zu\n",checks,failures,static_cast<unsigned long long>(oc.result.executed_instructions),s0.size());return failures?1:0;}
