#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800CF4C8
void f_800CF4C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF4C8
  c->r[0]=c->lr; // 800CF4CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF4D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF4D4
  c->r[31]=0u+0x805D0000u; // 800CF4D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CF4DC
  c->r[30]=c->r[3]|c->r[3]; // 800CF4E0
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CF4E4
  c->lr=0x800CF4ECu; f_80045264(c); // 800CF4E8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800CF4EC
  cmpu(c,0,c->r[0],0x00000025u); // 800CF4F0
  if (crb(c,2)) { goto L_800CF50C; } // 800CF4F4
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CF4F8
  c->lr=0x800CF500u; f_80045264(c); // 800CF4FC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800CF500
  cmpu(c,0,c->r[0],0x00000026u); // 800CF504
  if (!crb(c,2)) { goto L_800CF554; } // 800CF508
L_800CF50C:;
  c->r[3]=0u+0x805D0000u; // 800CF50C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800CF510
  c->lr=0x800CF518u; f_80037AF0(c); // 800CF514
  cmpu(c,0,c->r[3],c->r[30]); // 800CF518
  if (!crb(c,2)) { goto L_800CF554; } // 800CF51C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800CF520
  cmps(c,0,(int32_t)c->r[0],101); // 800CF524
  if (crb(c,2)) { goto L_800CF554; } // 800CF528
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800CF52C
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800CF530
  if (!crb(c,2)) { goto L_800CF554; } // 800CF534
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF538
  c->r[3]=c->r[30]|c->r[30]; // 800CF53C
  c->r[4]=0u+0x00000065u; // 800CF540
  c->r[5]=0u+0x00000000u; // 800CF544
  c->r[6]=0u+0x00000000u; // 800CF548
  c->r[7]=0u+0x00000000u; // 800CF54C
  c->lr=0x800CF554u; f_801F4D44(c); // 800CF550
L_800CF554:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF554
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF558
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CF55C
  c->lr=c->r[0]; // 800CF560
  c->r[1]=c->r[1]+0x00000010u; // 800CF564
  return; // 800CF568
}

// fn_800CF56C
void f_800CF56C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF56C
  c->r[0]=c->lr; // 800CF570
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CF574
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800CF578
  c->r[31]=0u+0x803D0000u; // 800CF57C
  c->r[31]=c->r[31]+0x00001968u; // 800CF580
  W32(c->r[1]+0x00000038u,c->r[30]); // 800CF584
  c->r[30]=c->r[3]|c->r[3]; // 800CF588
  c->lr=0x800CF590u; f_801F4F28(c); // 800CF58C
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800CF590
  cmps(c,0,(int32_t)c->r[0],102); // 800CF594
  if (crb(c,2)) { goto L_800CF61C; } // 800CF598
  if (!crb(c,0)) { goto L_800CF5B0; } // 800CF59C
  cmps(c,0,(int32_t)c->r[0],100); // 800CF5A0
  if (crb(c,2)) { goto L_800CF5BC; } // 800CF5A4
  if (!crb(c,0)) { goto L_800CF5EC; } // 800CF5A8
  goto L_800CF678; // 800CF5AC
L_800CF5B0:;
  cmps(c,0,(int32_t)c->r[0],104); // 800CF5B0
  if (!crb(c,0)) { goto L_800CF678; } // 800CF5B4
  goto L_800CF64C; // 800CF5B8
L_800CF5BC:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800CF5BC
  c->r[5]=c->r[31]+0x0000000Cu; // 800CF5C0
  c->r[3]=c->r[30]|c->r[30]; // 800CF5C4
  c->r[4]=c->r[1]+0x0000002Cu; // 800CF5C8
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800CF5CC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CF5D0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CF5D4
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800CF5D8
  W32(c->r[1]+0x00000030u,c->r[6]); // 800CF5DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CF5E0
  c->lr=0x800CF5E8u; f_800CF1B4(c); // 800CF5E4
  goto L_800CF678; // 800CF5E8
L_800CF5EC:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800CF5EC
  c->r[5]=c->r[31]+0x00000018u; // 800CF5F0
  c->r[3]=c->r[30]|c->r[30]; // 800CF5F4
  c->r[4]=c->r[1]+0x00000020u; // 800CF5F8
  c->r[7]=R32(c->r[31]+0x00000018u); // 800CF5FC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CF600
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CF604
  W32(c->r[1]+0x00000020u,c->r[7]); // 800CF608
  W32(c->r[1]+0x00000024u,c->r[6]); // 800CF60C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800CF610
  c->lr=0x800CF618u; f_800CF1B4(c); // 800CF614
  goto L_800CF678; // 800CF618
L_800CF61C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800CF61C
  c->r[5]=c->r[31]+0x00000024u; // 800CF620
  c->r[3]=c->r[30]|c->r[30]; // 800CF624
  c->r[4]=c->r[1]+0x00000014u; // 800CF628
  c->r[7]=R32(c->r[31]+0x00000024u); // 800CF62C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CF630
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CF634
  W32(c->r[1]+0x00000014u,c->r[7]); // 800CF638
  W32(c->r[1]+0x00000018u,c->r[6]); // 800CF63C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CF640
  c->lr=0x800CF648u; f_800CF1B4(c); // 800CF644
  goto L_800CF678; // 800CF648
L_800CF64C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800CF64C
  c->r[5]=c->r[31]+0x00000030u; // 800CF650
  c->r[3]=c->r[30]|c->r[30]; // 800CF654
  c->r[4]=c->r[1]+0x00000008u; // 800CF658
  c->r[7]=R32(c->r[31]+0x00000030u); // 800CF65C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CF660
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CF664
  W32(c->r[1]+0x00000008u,c->r[7]); // 800CF668
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800CF66C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CF670
  c->lr=0x800CF678u; f_800CF1B4(c); // 800CF674
L_800CF678:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800CF678
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800CF67C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800CF680
  c->lr=c->r[0]; // 800CF684
  c->r[1]=c->r[1]+0x00000040u; // 800CF688
  return; // 800CF68C
}

// fn_800CF690
void f_800CF690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF690
  c->r[0]=c->lr; // 800CF694
  c->r[6]=c->r[4]|c->r[4]; // 800CF698
  c->r[5]=0u+0x00000000u; // 800CF69C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF6A0
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800CF6A4
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800CF6A8
  if (crb(c,2)) { goto L_800CF6B4; } // 800CF6AC
  c->r[5]=0u+0x00000001u; // 800CF6B0
L_800CF6B4:;
  c->r[0]=R8(c->r[3]+0x00000078u); // 800CF6B4
  cmpu(c,0,c->r[0],0x00000001u); // 800CF6B8
  if (!crb(c,2)) { goto L_800CF6C4; } // 800CF6BC
  c->r[5]=0u+0x00000002u; // 800CF6C0
L_800CF6C4:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CF6C4
  c->r[3]=c->r[6]|c->r[6]; // 800CF6C8
  c->lr=0x800CF6D0u; f_80250BF4(c); // 800CF6CC
  cmps(c,0,(int32_t)c->r[3],0); // 800CF6D0
  if (crb(c,2)) { goto L_800CF6E0; } // 800CF6D4
  c->r[3]=0u+0x00000000u; // 800CF6D8
  goto L_800CF6E4; // 800CF6DC
L_800CF6E0:;
  c->r[3]=0u+0xFFFFFFFFu; // 800CF6E0
L_800CF6E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF6E4
  c->lr=c->r[0]; // 800CF6E8
  c->r[1]=c->r[1]+0x00000010u; // 800CF6EC
  return; // 800CF6F0
}

// fn_800CF6F4
void f_800CF6F4(Ctx* __restrict c) {
  W8(c->r[3]+0x00000078u,c->r[4]); // 800CF6F4
  return; // 800CF6F8
}

// fn_800CF6FC
void f_800CF6FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF6FC
  c->r[0]=c->lr; // 800CF700
  c->r[7]=0u+0x803D0000u; // 800CF704
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF708
  c->r[4]=c->r[1]+0x00000008u; // 800CF70C
  {uint32_t ea=c->r[7]+0x000019A4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CF710
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CF714
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CF718
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CF71C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800CF720
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CF724
  c->lr=0x800CF72Cu; f_800CF1B4(c); // 800CF728
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF72C
  c->lr=c->r[0]; // 800CF730
  c->r[1]=c->r[1]+0x00000020u; // 800CF734
  return; // 800CF738
}

// fn_800CF73C
void f_800CF73C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF73C
  c->r[0]=c->lr; // 800CF740
  c->r[5]=0u+0x80620000u; // 800CF744
  c->r[4]=0u+0x00000002u; // 800CF748
  W32(c->r[1]+0x00000094u,c->r[0]); // 800CF74C
  c->r[5]=c->r[5]+0x00007688u; // 800CF750
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800CF754
  W32(c->r[1]+0x00000088u,c->r[30]); // 800CF758
  c->r[30]=c->r[3]|c->r[3]; // 800CF75C
  c->r[3]=R32(c->r[5]+0x00000014u); // 800CF760
  c->lr=0x800CF768u; f_80037670(c); // 800CF764
  cmps(c,0,(int32_t)c->r[3],0); // 800CF768
  if (!crb(c,2)) { goto L_800CF7D8; } // 800CF76C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CF770
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800CF774
  cmps(c,0,(int32_t)c->r[0],0); // 800CF778
  if (!crb(c,2)) { goto L_800CF7D8; } // 800CF77C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800CF780
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800CF784
  if (crb(c,2)) { goto L_800CF7D8; } // 800CF788
  {uint32_t ea=c->r[2]+0xFFFFA0B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF78C
  c->r[3]=c->r[1]+0x00000008u; // 800CF790
  c->r[4]=c->r[30]+0x0000002Cu; // 800CF794
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800CF798
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800CF79C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800CF7A0
  c->lr=0x800CF7A8u; f_800361A0(c); // 800CF7A4
  c->r[31]=0u+0x80550000u; // 800CF7A8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF7AC
  c->r[31]=c->r[31]+0x00003D60u; // 800CF7B0
  c->r[5]=c->r[30]|c->r[30]; // 800CF7B4
  c->r[3]=c->r[31]+0x00000010u; // 800CF7B8
  c->r[6]=c->r[1]+0x00000008u; // 800CF7BC
  c->r[7]=c->r[1]+0x00000020u; // 800CF7C0
  c->r[4]=0u+0x000001FFu; // 800CF7C4
  c->lr=0x800CF7CCu; f_80226910(c); // 800CF7C8
  c->r[3]=c->r[31]+0x00000010u; // 800CF7CC
  c->r[4]=c->r[1]+0x00000020u; // 800CF7D0
  c->lr=0x800CF7D8u; f_80226D68(c); // 800CF7D4
L_800CF7D8:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800CF7D8
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800CF7DC
  c->r[30]=R32(c->r[1]+0x00000088u); // 800CF7E0
  c->lr=c->r[0]; // 800CF7E4
  c->r[1]=c->r[1]+0x00000090u; // 800CF7E8
  return; // 800CF7EC
}

// fn_800CF7F0
void f_800CF7F0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800CF7F0
  c->r[0]=c->r[0]|0x00000001u; // 800CF7F4
  W32(c->r[3]+0x00000074u,c->r[0]); // 800CF7F8
  return; // 800CF7FC
}

// fn_800CF800
void f_800CF800(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800CF800
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800CF804
  return; // 800CF808
}

// fn_800CF80C
void f_800CF80C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800CF80C
  c->r[0]=c->r[0]|0x00000002u; // 800CF810
  W32(c->r[3]+0x00000074u,c->r[0]); // 800CF814
  return; // 800CF818
}

// fn_800CF81C
void f_800CF81C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800CF81C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800CF820
  W32(c->r[3]+0x00000074u,c->r[0]); // 800CF824
  return; // 800CF828
}

// fn_800CF82C
void f_800CF82C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800CF82C
  c->r[3]=rotl(c->r[0],31)&0x00000001u; // 800CF830
  return; // 800CF834
}

// fn_800CF838
void f_800CF838(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800CF838
  W8(c->r[3]+0x0000007Bu,c->r[4]); // 800CF83C
  c->r[0]=c->r[0]|0x00000004u; // 800CF840
  W32(c->r[3]+0x00000074u,c->r[0]); // 800CF844
  return; // 800CF848
}

// fn_800CF84C
void f_800CF84C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800CF84C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800CF850
  W32(c->r[3]+0x00000074u,c->r[0]); // 800CF854
  return; // 800CF858
}

// fn_800CF85C
void f_800CF85C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800CF85C
  cmps(c,0,(int32_t)c->r[5],0); // 800CF860
  W8(c->r[3]+0x0000007Au,c->r[4]); // 800CF864
  c->r[0]=c->r[0]|0x00000008u; // 800CF868
  W32(c->r[3]+0x00000074u,c->r[0]); // 800CF86C
  if (crb(c,2)) { goto L_800CF880; } // 800CF870
  c->r[0]=c->r[0]|0x00000080u; // 800CF874
  W32(c->r[3]+0x00000074u,c->r[0]); // 800CF878
  return; // 800CF87C
L_800CF880:;
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800CF880
  W32(c->r[3]+0x00000074u,c->r[0]); // 800CF884
  return; // 800CF888
}

// fn_800CF88C
void f_800CF88C(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000074u); // 800CF88C
  c->r[0]=R8(c->r[3]+0x00000099u); // 800CF890
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF7u; // 800CF894
  c->r[4]=rotl(c->r[4],0)&0xFFFFFF7Fu; // 800CF898
  cmpu(c,0,c->r[0],0x000000FFu); // 800CF89C
  W32(c->r[3]+0x00000074u,c->r[4]); // 800CF8A0
  if (crb(c,2)) return; // 800CF8A4
  c->r[4]=0u+0x0000001Eu; // 800CF8A8
  c->r[3]=c->r[3]+0x0000000Cu; // 800CF8AC
  f_80036430(c); return; // 800CF8B0
  return; // 800CF8B4
}

// fn_800CF8B8
void f_800CF8B8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800CF8B8
  c->r[0]=c->r[0]|0x00000040u; // 800CF8BC
  W32(c->r[3]+0x00000074u,c->r[0]); // 800CF8C0
  return; // 800CF8C4
}

// fn_800CF8C8
void f_800CF8C8(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000074u); // 800CF8C8
  c->r[0]=R8(c->r[3]+0x0000009Bu); // 800CF8CC
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFBFu; // 800CF8D0
  cmpu(c,0,c->r[0],0x000000FFu); // 800CF8D4
  W32(c->r[3]+0x00000074u,c->r[4]); // 800CF8D8
  if (crb(c,2)) return; // 800CF8DC
  c->r[4]=0u+0x0000001Eu; // 800CF8E0
  c->r[3]=c->r[3]+0x00000010u; // 800CF8E4
  f_80036430(c); return; // 800CF8E8
  return; // 800CF8EC
}

// fn_800CF8F0
void f_800CF8F0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800CF8F0
  c->r[0]=c->r[0]|0x00000010u; // 800CF8F4
  W32(c->r[3]+0x00000074u,c->r[0]); // 800CF8F8
  return; // 800CF8FC
}

// fn_800CF900
void f_800CF900(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800CF900
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800CF904
  W32(c->r[3]+0x00000074u,c->r[0]); // 800CF908
  return; // 800CF90C
}

// fn_800CF910
void f_800CF910(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800CF910
  c->r[3]=rotl(c->r[0],28)&0x00000001u; // 800CF914
  return; // 800CF918
}

// fn_800CF91C
void f_800CF91C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800CF91C
  c->r[3]=rotl(c->r[0],24)&0x00000001u; // 800CF920
  return; // 800CF924
}

// fn_800CF928
void f_800CF928(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF928
  c->r[0]=c->lr; // 800CF92C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF930
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF934
  c->r[31]=c->r[3]|c->r[3]; // 800CF938
  c->r[3]=c->r[3]+0x00000210u; // 800CF93C
  c->lr=0x800CF944u; f_8004BAD4(c); // 800CF940
  cmps(c,0,(int32_t)c->r[3],0); // 800CF944
  if (crb(c,2)) { goto L_800CF9CC; } // 800CF948
  c->r[0]=R32(c->r[31]+0x00000210u); // 800CF94C
  c->r[4]=c->r[31]|c->r[31]; // 800CF950
  c->r[3]=c->r[31]+0x00000210u; // 800CF954
  c->r[0]=c->r[0]|0xAA800000u; // 800CF958
  W32(c->r[31]+0x00000210u,c->r[0]); // 800CF95C
  c->lr=0x800CF964u; f_80043E44(c); // 800CF960
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF964
  c->r[3]=c->r[31]+0x00000210u; // 800CF968
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CF96C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CF970
  c->lr=0x800CF978u; f_80043E34(c); // 800CF974
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CF978
  c->r[4]=0u+0x803A0000u; // 800CF97C
  c->r[4]=c->r[4]+0xFFFFDEA0u; // 800CF980
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CF984
  c->r[4]=c->r[4]+0x00000022u; // 800CF988
  c->lr=0x800CF990u; f_80256EC4(c); // 800CF98C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CF990
  c->r[5]=c->r[3]|c->r[3]; // 800CF994
  c->r[3]=c->r[31]+0x00000210u; // 800CF998
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800CF99C
  c->lr=0x800CF9A4u; f_8004BAC8(c); // 800CF9A0
  {uint32_t ea=c->r[2]+0xFFFFA0C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF9A4
  c->r[3]=c->r[31]+0x00000210u; // 800CF9A8
  c->f[2]=c->f[1]; // 800CF9AC
  c->f[3]=c->f[1]; // 800CF9B0
  c->lr=0x800CF9B8u; f_80043E24(c); // 800CF9B4
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF9B8
  c->r[3]=c->r[31]+0x00000210u; // 800CF9BC
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CF9C0
  c->f[3]=c->f[1]; // 800CF9C4
  c->lr=0x800CF9CCu; f_8005D58C(c); // 800CF9C8
L_800CF9CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF9CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF9D0
  c->lr=c->r[0]; // 800CF9D4
  c->r[1]=c->r[1]+0x00000010u; // 800CF9D8
  return; // 800CF9DC
}

// fn_800CF9E0
void f_800CF9E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF9E0
  c->r[0]=c->lr; // 800CF9E4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800CF9E8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800CF9EC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800CF9F0
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800CF9F4
  c->r[31]=0u+0x803A0000u; // 800CF9F8
  c->r[31]=c->r[31]+0xFFFFDDA0u; // 800CF9FC
  W32(c->r[1]+0x00000078u,c->r[30]); // 800CFA00
  c->r[30]=c->r[3]|c->r[3]; // 800CFA04
  c->r[3]=c->r[3]+0x00000210u; // 800CFA08
  c->lr=0x800CFA10u; f_80221698(c); // 800CFA0C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CFA10
  cmps(c,0,(int32_t)c->r[3],0); // 800CFA14
  if (crb(c,2)) { goto L_800CFA38; } // 800CFA18
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800CFA1C
  cmps(c,0,(int32_t)c->r[0],0); // 800CFA20
  if (crb(c,2)) { goto L_800CFA38; } // 800CFA24
  c->r[0]=R32(c->r[30]+0x00000210u); // 800CFA28
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800CFA2C
  W32(c->r[30]+0x00000210u,c->r[0]); // 800CFA30
  goto L_800CFC74; // 800CFA34
L_800CFA38:;
  c->r[0]=R32(c->r[30]+0x00000210u); // 800CFA38
  c->r[7]=c->r[31]+0x000000B4u; // 800CFA3C
  c->r[6]=c->r[31]+0x000000C0u; // 800CFA40
  c->r[3]=c->r[1]+0x00000020u; // 800CFA44
  c->r[0]=c->r[0]|0x80000000u; // 800CFA48
  c->r[4]=c->r[1]+0x00000014u; // 800CFA4C
  W32(c->r[30]+0x00000210u,c->r[0]); // 800CFA50
  c->r[5]=c->r[1]+0x00000038u; // 800CFA54
  c->r[11]=R32(c->r[31]+0x000000B4u); // 800CFA58
  c->r[10]=R32(c->r[7]+0x00000004u); // 800CFA5C
  c->r[9]=R32(c->r[7]+0x00000008u); // 800CFA60
  c->r[8]=R32(c->r[31]+0x000000C0u); // 800CFA64
  c->r[7]=R32(c->r[6]+0x00000004u); // 800CFA68
  c->r[0]=R32(c->r[6]+0x00000008u); // 800CFA6C
  W32(c->r[1]+0x00000020u,c->r[11]); // 800CFA70
  W32(c->r[1]+0x00000024u,c->r[10]); // 800CFA74
  {uint32_t ea=c->r[1]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 800CFA78
  W32(c->r[1]+0x00000028u,c->r[9]); // 800CFA7C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 800CFA80
  W32(c->r[1]+0x00000014u,c->r[8]); // 800CFA84
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 800CFA88
  W32(c->r[1]+0x00000018u,c->r[7]); // 800CFA8C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CFA90
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CFA94
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CFA98
  c->r[6]=R32(c->r[30]+0x00000394u); // 800CFA9C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CFAA0
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFAA4
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 800CFAA8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800CFAAC
  c->r[6]=R32(c->r[30]+0x00000394u); // 800CFAB0
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFAB4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800CFAB8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800CFABC
  c->r[6]=R32(c->r[30]+0x00000394u); // 800CFAC0
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFAC4
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800CFAC8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800CFACC
  c->r[6]=R32(c->r[30]+0x00000394u); // 800CFAD0
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFAD4
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800CFAD8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800CFADC
  c->r[6]=R32(c->r[30]+0x00000394u); // 800CFAE0
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFAE4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800CFAE8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800CFAEC
  c->r[6]=R32(c->r[30]+0x00000394u); // 800CFAF0
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFAF4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CFAF8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800CFAFC
  c->lr=0x800CFB04u; f_80296A70(c); // 800CFB00
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CFB04
  c->r[4]=0u+0x803A0000u; // 800CFB08
  c->r[4]=c->r[4]+0xFFFFDEA0u; // 800CFB0C
  c->r[5]=c->r[1]+0x00000048u; // 800CFB10
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CFB14
  c->r[4]=c->r[4]+0x00000022u; // 800CFB18
  c->r[6]=0u+0x00000001u; // 800CFB1C
  c->lr=0x800CFB24u; f_80257018(c); // 800CFB20
  c->r[4]=c->r[1]+0x00000020u; // 800CFB24
  c->r[3]=c->r[1]+0x00000048u; // 800CFB28
  c->r[5]=c->r[4]|c->r[4]; // 800CFB2C
  c->lr=0x800CFB34u; f_80296750(c); // 800CFB30
  c->r[4]=c->r[1]+0x00000014u; // 800CFB34
  c->r[3]=c->r[1]+0x00000048u; // 800CFB38
  c->r[5]=c->r[4]|c->r[4]; // 800CFB3C
  c->lr=0x800CFB44u; f_80296750(c); // 800CFB40
  c->r[3]=c->r[1]+0x00000020u; // 800CFB44
  c->r[4]=c->r[1]+0x00000014u; // 800CFB48
  c->r[5]=c->r[1]+0x0000002Cu; // 800CFB4C
  c->lr=0x800CFB54u; f_80296A70(c); // 800CFB50
  c->r[4]=c->r[31]+0x000000CCu; // 800CFB54
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFB58
  c->r[6]=R32(c->r[31]+0x000000CCu); // 800CFB5C
  c->r[3]=c->r[1]+0x00000038u; // 800CFB60
  c->r[5]=R32(c->r[4]+0x00000004u); // 800CFB64
  c->r[0]=R32(c->r[4]+0x00000008u); // 800CFB68
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800CFB6C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CFB70
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800CFB74
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CFB78
  c->lr=0x800CFB80u; f_80296B0C(c); // 800CFB7C
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CFB80
  fcmp(c,0,c->f[3],c->f[1]); // 800CFB84
  if (crb(c,2)) { goto L_800CFBF8; } // 800CFB88
  c->r[3]=c->r[1]+0x00000038u; // 800CFB8C
  c->lr=0x800CFB94u; f_80296B0C(c); // 800CFB90
  c->f[31]=c->f[1]; // 800CFB94
  c->r[3]=c->r[1]+0x0000002Cu; // 800CFB98
  c->lr=0x800CFBA0u; f_80296B0C(c); // 800CFB9C
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[31]); // 800CFBA0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFBA4
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CFBA8
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CFBAC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800CFBB0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800CFBB4
  c->lr=0x800CFBBCu; f_8005C22C(c); // 800CFBB8
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFBBC
  fcmp(c,0,c->f[1],c->f[0]); // 800CFBC0
  if (!crb(c,1)) { goto L_800CFBDC; } // 800CFBC4
  {uint32_t ea=c->r[2]+0xFFFFA0D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CFBC8
  {uint32_t ea=c->r[2]+0xFFFFA0D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFBCC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CFBD0
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 800CFBD4
  goto L_800CFC08; // 800CFBD8
L_800CFBDC:;
  {uint32_t ea=c->r[2]+0xFFFFA0D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFBDC
  {uint32_t ea=c->r[2]+0xFFFFA0D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CFBE0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800CFBE4
  {uint32_t ea=c->r[2]+0xFFFFA0D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFBE8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800CFBEC
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 800CFBF0
  goto L_800CFC08; // 800CFBF4
L_800CFBF8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFBF8
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CFBFC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800CFC00
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800CFC04
L_800CFC08:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CFC08
  {uint32_t ea=c->r[2]+0xFFFFA0FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFC0C
  fcmp(c,0,c->f[1],c->f[0]); // 800CFC10
  if (!crb(c,0)) { goto L_800CFC1C; } // 800CFC14
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800CFC18
L_800CFC1C:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CFC1C
  c->r[3]=c->r[30]+0x00000210u; // 800CFC20
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CFC24
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800CFC28
  {uint32_t ea=c->r[4]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFC2C
  c->f[3]=c->f[1]; // 800CFC30
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800CFC34
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[0]); // 800CFC38
  {uint32_t ea=c->r[4]+0x00000078u; c->f[5]=c->ps1[5]=RF32(ea);} // 800CFC3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 800CFC40
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFC44
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 800CFC48
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[7]);} // 800CFC4C
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800CFC50
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 800CFC54
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800CFC58
  c->lr=0x800CFC60u; f_8005D58C(c); // 800CFC5C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CFC60
  c->r[3]=c->r[30]+0x00000210u; // 800CFC64
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CFC68
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CFC6C
  c->lr=0x800CFC74u; f_80043E24(c); // 800CFC70
L_800CFC74:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800CFC74
  c->r[0]=R32(c->r[1]+0x00000094u); // 800CFC78
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800CFC7C
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800CFC80
  c->r[30]=R32(c->r[1]+0x00000078u); // 800CFC84
  c->lr=c->r[0]; // 800CFC88
  c->r[1]=c->r[1]+0x00000090u; // 800CFC8C
  return; // 800CFC90
}

// fn_800CFC94
void f_800CFC94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFC94
  c->r[0]=c->lr; // 800CFC98
  cmps(c,0,(int32_t)c->r[3],0); // 800CFC9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFCA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFCA4
  c->r[31]=c->r[4]|c->r[4]; // 800CFCA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CFCAC
  c->r[30]=c->r[3]|c->r[3]; // 800CFCB0
  if (crb(c,2)) { goto L_800CFCD0; } // 800CFCB4
  c->r[4]=0u+0x00000000u; // 800CFCB8
  c->lr=0x800CFCC0u; f_8026A06C(c); // 800CFCBC
  cmps(c,0,(int32_t)c->r[31],0); // 800CFCC0
  if (!crb(c,1)) { goto L_800CFCD0; } // 800CFCC4
  c->r[3]=c->r[30]|c->r[30]; // 800CFCC8
  c->lr=0x800CFCD0u; f_8026A268(c); // 800CFCCC
L_800CFCD0:;
  c->r[3]=c->r[30]|c->r[30]; // 800CFCD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFCD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CFCD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFCDC
  c->lr=c->r[0]; // 800CFCE0
  c->r[1]=c->r[1]+0x00000010u; // 800CFCE4
  return; // 800CFCE8
}

// fn_800CFCEC
void f_800CFCEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFCEC
  c->r[0]=c->lr; // 800CFCF0
  c->r[4]=0u+0x00000000u; // 800CFCF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CFCF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CFCFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CFD00
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CFD04
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CFD08
  c->r[28]=c->r[3]|c->r[3]; // 800CFD0C
  c->lr=0x800CFD14u; f_801F57D0(c); // 800CFD10
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800CFD14
  c->r[3]=c->r[28]|c->r[28]; // 800CFD18
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800CFD1C
  c->ctr=c->r[12]; // 800CFD20
  if (true) { c->lr=0x800CFD28u; dispatch(c,c->ctr); } // 800CFD24
  c->r[3]=c->r[28]|c->r[28]; // 800CFD28
  c->lr=0x800CFD30u; f_801F4B94(c); // 800CFD2C
  c->r[3]=0u+0x00000003u; // 800CFD30
  c->r[0]=0u+0x00000032u; // 800CFD34
  W8(c->r[28]+0x0000006Cu,c->r[3]); // 800CFD38
  c->r[3]=c->r[28]|c->r[28]; // 800CFD3C
  c->r[4]=R32(c->r[28]+0x00000394u); // 800CFD40
  W8(c->r[28]+0x0000006Du,c->r[0]); // 800CFD44
  c->lr=0x800CFD4Cu; f_801F58BC(c); // 800CFD48
  c->r[3]=R32(c->r[28]+0x00000394u); // 800CFD4C
  c->r[29]=0u+0x00000001u; // 800CFD50
  c->r[30]=0u+0x803A0000u; // 800CFD54
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800CFD58
  c->r[4]=c->r[30]+0xFFFFDEDCu; // 800CFD5C
  c->r[3]=R32(c->r[28]+0x00000394u); // 800CFD60
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CFD64
  c->lr=0x800CFD6Cu; f_80256EC4(c); // 800CFD68
  c->r[6]=R32(c->r[28]+0x00000394u); // 800CFD6C
  c->r[5]=0u+0x805D0000u; // 800CFD70
  c->r[4]=c->r[28]+0x0000002Cu; // 800CFD74
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800CFD78
  c->r[3]=c->r[5]+0x000078B0u; // 800CFD7C
  c->lr=0x800CFD84u; f_802351CC(c); // 800CFD80
  c->r[4]=R32(c->r[28]+0x00000394u); // 800CFD84
  c->r[31]=0u+0x00000000u; // 800CFD88
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFD8C
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800CFD90
  c->r[0]=R16(c->r[28]+0x000003BEu); // 800CFD94
  W8(c->r[28]+0x0000006Fu,c->r[29]); // 800CFD98
  c->r[0]=c->r[0]|0x00000804u; // 800CFD9C
  c->r[3]=R32(c->r[28]+0x00000394u); // 800CFDA0
  W16(c->r[28]+0x000003BEu,c->r[0]); // 800CFDA4
  {uint32_t ea=c->r[28]+0x000003F8u; WF32(ea,c->f[0]);} // 800CFDA8
  W8(c->r[28]+0x00000029u,c->r[31]); // 800CFDAC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CFDB0
  c->lr=0x800CFDB8u; f_802501B0(c); // 800CFDB4
  c->r[3]=c->r[28]|c->r[28]; // 800CFDB8
  c->lr=0x800CFDC0u; f_801F56F4(c); // 800CFDBC
  W8(c->r[28]+0x00000074u,c->r[31]); // 800CFDC0
  c->r[3]=c->r[30]+0xFFFFDEDCu; // 800CFDC4
  c->r[5]=R32(c->r[28]+0x00000394u); // 800CFDC8
  c->r[4]=c->r[3]+0x00000009u; // 800CFDCC
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800CFDD0
  c->lr=0x800CFDD8u; f_80256EC4(c); // 800CFDD4
  W8(c->r[28]+0x00000076u,c->r[3]); // 800CFDD8
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)112); // 800CFDDC
  W32(c->r[28]+0x00000444u,c->r[29]); // 800CFDE0
  c->lr=0x800CFDE8u; f_8024E174(c); // 800CFDE4
  W32(c->r[28]+0x00000438u,c->r[3]); // 800CFDE8
  c->r[3]=c->r[28]|c->r[28]; // 800CFDEC
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800CFDF0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CFDF4
  c->ctr=c->r[12]; // 800CFDF8
  if (true) { c->lr=0x800CFE00u; dispatch(c,c->ctr); } // 800CFDFC
  c->r[3]=c->r[28]|c->r[28]; // 800CFE00
  c->lr=0x800CFE08u; f_800D0C08(c); // 800CFE04
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CFE08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CFE0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CFE10
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CFE14
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CFE18
  c->lr=c->r[0]; // 800CFE1C
  c->r[1]=c->r[1]+0x00000020u; // 800CFE20
  return; // 800CFE24
}

// fn_800CFE28
void f_800CFE28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFE28
  c->r[0]=c->lr; // 800CFE2C
  c->r[4]=0u+0x000000E1u; // 800CFE30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFE34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFE38
  c->r[31]=c->r[3]|c->r[3]; // 800CFE3C
  c->r[3]=c->r[3]+0x00000210u; // 800CFE40
  c->lr=0x800CFE48u; f_80221630(c); // 800CFE44
  cmps(c,0,(int32_t)c->r[3],0); // 800CFE48
  if (!crb(c,2)) { goto L_800CFE58; } // 800CFE4C
  c->r[3]=0u+0x00000000u; // 800CFE50
  goto L_800CFE74; // 800CFE54
L_800CFE58:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CFE58
  c->r[3]=0u+0x000004B1u; // 800CFE5C
  c->r[5]=0u+0x00000000u; // 800CFE60
  c->r[4]=c->r[4]+0x0000010Cu; // 800CFE64
  c->lr=0x800CFE6Cu; f_8024EE50(c); // 800CFE68
  c->r[0]=cntlz(c->r[3]); // 800CFE6C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CFE70
L_800CFE74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFE74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFE78
  c->lr=c->r[0]; // 800CFE7C
  c->r[1]=c->r[1]+0x00000010u; // 800CFE80
  return; // 800CFE84
}

// fn_800CFE88
void f_800CFE88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFE88
  c->r[0]=c->lr; // 800CFE8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFE90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFE94
  c->r[31]=c->r[3]|c->r[3]; // 800CFE98
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800CFE9C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800CFEA0
  c->ctr=c->r[12]; // 800CFEA4
  if (true) { c->lr=0x800CFEACu; dispatch(c,c->ctr); } // 800CFEA8
  c->r[3]=c->r[31]|c->r[31]; // 800CFEAC
  c->lr=0x800CFEB4u; f_801F4C0C(c); // 800CFEB0
  c->r[3]=c->r[31]|c->r[31]; // 800CFEB4
  c->lr=0x800CFEBCu; f_800D0B70(c); // 800CFEB8
  c->r[3]=c->r[31]|c->r[31]; // 800CFEBC
  c->lr=0x800CFEC4u; f_801F56F4(c); // 800CFEC0
  c->r[3]=c->r[31]|c->r[31]; // 800CFEC4
  c->lr=0x800CFECCu; f_800D0CAC(c); // 800CFEC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFECC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFED0
  c->lr=c->r[0]; // 800CFED4
  c->r[1]=c->r[1]+0x00000010u; // 800CFED8
  return; // 800CFEDC
}

// fn_800CFEE0
void f_800CFEE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFEE0
  c->r[0]=c->lr; // 800CFEE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CFEE8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CFEEC
  c->r[31]=c->r[3]|c->r[3]; // 800CFEF0
  c->lr=0x800CFEF8u; f_801F4F28(c); // 800CFEF4
  c->r[8]=R32(c->r[31]+0x000003C0u); // 800CFEF8
  cmps(c,0,(int32_t)c->r[8],101); // 800CFEFC
  if (crb(c,2)) { goto L_800CFF20; } // 800CFF00
  if (!crb(c,0)) { goto L_800CFF14; } // 800CFF04
  cmps(c,0,(int32_t)c->r[8],100); // 800CFF08
  if (!crb(c,0)) { goto L_800CFF98; } // 800CFF0C
  goto L_800CFFC4; // 800CFF10
L_800CFF14:;
  cmps(c,0,(int32_t)c->r[8],103); // 800CFF14
  if (!crb(c,0)) { goto L_800CFFC4; } // 800CFF18
  goto L_800CFF80; // 800CFF1C
L_800CFF20:;
  c->r[4]=R16(c->r[31]+0x000003BEu); // 800CFF20
  c->r[0]=0u+0x00000001u; // 800CFF24
  c->r[7]=R32(c->r[31]+0x00000394u); // 800CFF28
  c->r[3]=c->r[31]+0x0000002Cu; // 800CFF2C
  c->r[6]=rotl(c->r[4],0)&0xFFFFDFFFu; // 800CFF30
  W8(c->r[31]+0x00000075u,c->r[0]); // 800CFF34
  c->r[4]=c->r[31]+0x00000060u; // 800CFF38
  c->r[5]=c->r[7]+0x00000074u; // 800CFF3C
  W16(c->r[31]+0x000003BEu,c->r[6]); // 800CFF40
  c->r[6]=c->r[7]+0x000000B0u; // 800CFF44
  c->r[7]=0u+0x00000000u; // 800CFF48
  W16(c->r[31]+0x000003BCu,c->r[8]); // 800CFF4C
  c->lr=0x800CFF54u; f_8002BE64(c); // 800CFF50
  c->r[7]=0u+0x803D0000u; // 800CFF54
  {uint32_t ea=c->r[7]+0x00001AF0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CFF58
  c->r[3]=c->r[31]|c->r[31]; // 800CFF5C
  c->r[4]=c->r[1]+0x00000014u; // 800CFF60
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CFF64
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CFF68
  W32(c->r[1]+0x00000014u,c->r[6]); // 800CFF6C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800CFF70
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CFF74
  c->lr=0x800CFF7Cu; f_800CFFD8(c); // 800CFF78
  goto L_800CFFC4; // 800CFF7C
L_800CFF80:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CFF80
  c->r[3]=c->r[31]|c->r[31]; // 800CFF84
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CFF88
  c->ctr=c->r[12]; // 800CFF8C
  if (true) { c->lr=0x800CFF94u; dispatch(c,c->ctr); } // 800CFF90
  goto L_800CFFC4; // 800CFF94
L_800CFF98:;
  W16(c->r[31]+0x000003BCu,c->r[8]); // 800CFF98
  c->r[7]=0u+0x803D0000u; // 800CFF9C
  c->r[3]=c->r[31]|c->r[31]; // 800CFFA0
  c->r[4]=c->r[1]+0x00000008u; // 800CFFA4
  {uint32_t ea=c->r[7]+0x00001AFCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800CFFA8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CFFAC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CFFB0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CFFB4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800CFFB8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CFFBC
  c->lr=0x800CFFC4u; f_800CFFD8(c); // 800CFFC0
L_800CFFC4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CFFC4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CFFC8
  c->lr=c->r[0]; // 800CFFCC
  c->r[1]=c->r[1]+0x00000030u; // 800CFFD0
  return; // 800CFFD4
}

// fn_800CFFD8
void f_800CFFD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFFD8
  c->r[0]=c->lr; // 800CFFDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFFE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFFE4
  c->r[31]=c->r[4]|c->r[4]; // 800CFFE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CFFEC
  c->r[30]=c->r[3]|c->r[3]; // 800CFFF0
  c->r[3]=c->r[31]|c->r[31]; // 800CFFF4
  c->lr=0x800CFFFCu; f_802B9FDC(c); // 800CFFF8
  cmps(c,0,(int32_t)c->r[3],0); // 800CFFFC
  if (crb(c,2)) { goto L_800D001C; } // 800D0000
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D0004
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D0008
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D000C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D0010
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D0014
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D0018
L_800D001C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D001C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0020
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D0024
  c->lr=c->r[0]; // 800D0028
  c->r[1]=c->r[1]+0x00000010u; // 800D002C
  return; // 800D0030
}

// fn_800D0034
void f_800D0034(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0034
  c->r[0]=c->lr; // 800D0038
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D003C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800D0040
  c->r[31]=c->r[3]|c->r[3]; // 800D0044
  W32(c->r[1]+0x00000058u,c->r[30]); // 800D0048
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D004C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D0050
  c->lr=0x800D0058u; f_802501B0(c); // 800D0054
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D0058
  c->r[3]=c->r[31]|c->r[31]; // 800D005C
  c->lr=0x800D0064u; f_801F5418(c); // 800D0060
  cmps(c,0,(int32_t)c->r[3],0); // 800D0064
  if (!crb(c,0)) { goto L_800D0150; } // 800D0068
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800D006C
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0070
  {uint32_t ea=c->r[2]+0xFFFFA10Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0074
  c->r[0]=c->r[0]|0x00000880u; // 800D0078
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800D007C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0080
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800D0084
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800D0088
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D008C
  c->lr=0x800D0094u; f_8025037C(c); // 800D0090
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D0094
  c->r[3]=c->r[1]+0x00000038u; // 800D0098
  c->r[4]=c->r[31]+0x00000060u; // 800D009C
  c->r[5]=c->r[1]+0x00000044u; // 800D00A0
  c->r[6]=c->r[6]+0x000000B0u; // 800D00A4
  c->r[7]=0u+0x00000000u; // 800D00A8
  c->lr=0x800D00B0u; f_8002BE64(c); // 800D00AC
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800D00B0
  c->r[3]=0u+0x805D0000u; // 800D00B4
  c->r[0]=R32(c->r[31]+0x00000030u); // 800D00B8
  c->r[3]=c->r[3]+0x00003F6Cu; // 800D00BC
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D00C0
  c->r[4]=c->r[31]|c->r[31]; // 800D00C4
  W32(c->r[1]+0x00000020u,c->r[5]); // 800D00C8
  c->r[7]=c->r[1]+0x00000020u; // 800D00CC
  c->r[6]=0u+0x00000022u; // 800D00D0
  c->r[8]=0u+0x00000000u; // 800D00D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D00D8
  c->r[0]=R32(c->r[31]+0x00000034u); // 800D00DC
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D00E0
  c->r[3]=R32(c->r[31]+0x00000438u); // 800D00E4
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D00E8
  c->lr=0x800D00F0u; f_801FA6A4(c); // 800D00EC
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D00F0
  c->r[6]=0u+0x803A0000u; // 800D00F4
  {uint32_t ea=c->r[2]+0xFFFFA110u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D00F8
  c->r[5]=c->r[31]+0x00000044u; // 800D00FC
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0100
  c->r[6]=c->r[6]+0xFFFFDED0u; // 800D0104
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800D0108
  c->r[3]=R32(c->r[31]+0x00000438u); // 800D010C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800D0110
  c->r[4]=0u+0x00000000u; // 800D0114
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 800D0118
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800D011C
  c->lr=0x800D0124u; f_801FBEC0(c); // 800D0120
  c->r[7]=0u+0x803D0000u; // 800D0124
  {uint32_t ea=c->r[7]+0x00001B08u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D0128
  c->r[3]=c->r[31]|c->r[31]; // 800D012C
  c->r[4]=c->r[1]+0x00000014u; // 800D0130
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D0134
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D0138
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D013C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D0140
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D0144
  c->lr=0x800D014Cu; f_800CFFD8(c); // 800D0148
  goto L_800D0194; // 800D014C
L_800D0150:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0150
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800D0154
  cmps(c,0,(int32_t)c->r[0],0); // 800D0158
  if (crb(c,2)) { goto L_800D0194; } // 800D015C
  c->r[3]=c->r[31]|c->r[31]; // 800D0160
  c->lr=0x800D0168u; f_801F5B14(c); // 800D0164
  c->r[30]=0u+0x805D0000u; // 800D0168
  c->r[3]=c->r[30]+0x00003F6Cu; // 800D016C
  c->lr=0x800D0174u; f_800447E4(c); // 800D0170
  cmpu(c,0,c->r[3],0x00000001u); // 800D0174
  if (!crb(c,2)) { goto L_800D0188; } // 800D0178
  c->r[0]=0u+0x00000000u; // 800D017C
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800D0180
  goto L_800D0194; // 800D0184
L_800D0188:;
  c->r[3]=c->r[30]+0x00003F6Cu; // 800D0188
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800D018C
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800D0190
L_800D0194:;
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0194
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0198
  fcmp(c,0,c->f[2],c->f[1]); // 800D019C
  if (crb(c,2)) { goto L_800D0258; } // 800D01A0
  fcmp(c,0,c->f[1],c->f[2]); // 800D01A4
  if (!crb(c,1)) { goto L_800D01CC; } // 800D01A8
  {uint32_t ea=c->r[2]+0xFFFFA114u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01AC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D01B0
  fcmp(c,0,c->f[0],c->f[2]); // 800D01B4
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D01B8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D01BC
  if (!crb(c,2)) { goto L_800D01E8; } // 800D01C0
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[2]);} // 800D01C4
  goto L_800D01E8; // 800D01C8
L_800D01CC:;
  {uint32_t ea=c->r[2]+0xFFFFA114u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01CC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D01D0
  fcmp(c,0,c->f[0],c->f[2]); // 800D01D4
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D01D8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D01DC
  if (!crb(c,2)) { goto L_800D01E8; } // 800D01E0
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[2]);} // 800D01E4
L_800D01E8:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01E8
  c->r[5]=c->r[1]+0x0000002Cu; // 800D01EC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D01F0
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800D01F4
  c->r[4]=R8(c->r[31]+0x00000076u); // 800D01F8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D01FC
  c->lr=0x800D0204u; f_8025EA54(c); // 800D0200
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0204
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0208
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D020C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0210
  fcmp(c,0,c->f[1],c->f[0]); // 800D0214
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800D0218
  if (!crb(c,0)) { goto L_800D022C; } // 800D021C
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0220
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D0224
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800D0228
L_800D022C:;
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 800D022C
  c->r[5]=c->r[1]+0x00000008u; // 800D0230
  c->r[3]=R32(c->r[1]+0x00000030u); // 800D0234
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D0238
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D023C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D0240
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D0244
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0248
  c->r[4]=R8(c->r[31]+0x00000076u); // 800D024C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D0250
  c->lr=0x800D0258u; f_8025E9C0(c); // 800D0254
L_800D0258:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D0258
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800D025C
  c->r[30]=R32(c->r[1]+0x00000058u); // 800D0260
  c->lr=c->r[0]; // 800D0264
  c->r[1]=c->r[1]+0x00000060u; // 800D0268
  return; // 800D026C
}

// fn_800D0270
void f_800D0270(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0270
  c->r[0]=c->lr; // 800D0274
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D0278
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D027C
  c->r[31]=c->r[3]|c->r[3]; // 800D0280
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D0284
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D0288
  c->lr=0x800D0290u; f_802501B0(c); // 800D028C
  c->r[3]=0u+0x805D0000u; // 800D0290
  c->r[3]=c->r[3]+0x00003F6Cu; // 800D0294
  c->lr=0x800D029Cu; f_80037AF0(c); // 800D0298
  cmpu(c,0,c->r[3],c->r[31]); // 800D029C
  if (!crb(c,2)) { goto L_800D0310; } // 800D02A0
  c->r[0]=0u+0x00000001u; // 800D02A4
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D02A8
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800D02AC
  c->r[3]=c->r[31]|c->r[31]; // 800D02B0
  c->f[2]=c->f[1]; // 800D02B4
  c->r[4]=0u+0x00000000u; // 800D02B8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D02BC
  c->r[5]=0u+0x00000001u; // 800D02C0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D02C4
  c->ctr=c->r[12]; // 800D02C8
  if (true) { c->lr=0x800D02D0u; dispatch(c,c->ctr); } // 800D02CC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D02D0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D02D4
  c->lr=0x800D02DCu; f_802501B0(c); // 800D02D8
  c->r[7]=0u+0x803D0000u; // 800D02DC
  {uint32_t ea=c->r[7]+0x00001B14u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D02E0
  c->r[3]=c->r[31]|c->r[31]; // 800D02E4
  c->r[4]=c->r[1]+0x00000014u; // 800D02E8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D02EC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D02F0
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D02F4
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D02F8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D02FC
  c->lr=0x800D0304u; f_800CFFD8(c); // 800D0300
  c->r[3]=c->r[31]|c->r[31]; // 800D0304
  c->lr=0x800D030Cu; f_800D0034(c); // 800D0308
  goto L_800D03A8; // 800D030C
L_800D0310:;
  c->r[3]=R32(c->r[31]+0x00000438u); // 800D0310
  c->r[4]=0u+0x00000000u; // 800D0314
  c->lr=0x800D031Cu; f_801FAF00(c); // 800D0318
  cmps(c,0,(int32_t)c->r[3],0); // 800D031C
  if (!crb(c,2)) { goto L_800D0388; } // 800D0320
  c->r[3]=c->r[31]|c->r[31]; // 800D0324
  c->r[4]=0u+0x00000027u; // 800D0328
  c->lr=0x800D0330u; f_801F5AB4(c); // 800D032C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D0330
  c->r[3]=c->r[31]+0x0000002Cu; // 800D0334
  c->r[4]=c->r[4]+0x0000005Cu; // 800D0338
  c->lr=0x800D0340u; f_800361A0(c); // 800D033C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D0340
  c->r[3]=c->r[31]+0x00000060u; // 800D0344
  c->r[4]=c->r[4]+0x00000068u; // 800D0348
  c->lr=0x800D0350u; f_800361A0(c); // 800D034C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0350
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D0354
  c->lr=0x800D035Cu; f_8025037C(c); // 800D0358
  c->r[7]=0u+0x803D0000u; // 800D035C
  {uint32_t ea=c->r[7]+0x00001B20u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D0360
  c->r[3]=c->r[31]|c->r[31]; // 800D0364
  c->r[4]=c->r[1]+0x00000008u; // 800D0368
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D036C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D0370
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D0374
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D0378
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D037C
  c->lr=0x800D0384u; f_800CFFD8(c); // 800D0380
  goto L_800D03A8; // 800D0384
L_800D0388:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D0388
  c->r[3]=c->r[31]+0x0000002Cu; // 800D038C
  c->r[4]=c->r[4]+0x0000005Cu; // 800D0390
  c->lr=0x800D0398u; f_800361A0(c); // 800D0394
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D0398
  c->r[3]=c->r[31]+0x00000060u; // 800D039C
  c->r[4]=c->r[4]+0x00000068u; // 800D03A0
  c->lr=0x800D03A8u; f_800361A0(c); // 800D03A4
L_800D03A8:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D03A8
  c->r[3]=c->r[31]+0x0000002Cu; // 800D03AC
  c->r[4]=c->r[4]+0x0000005Cu; // 800D03B0
  c->lr=0x800D03B8u; f_800361A0(c); // 800D03B4
  c->r[3]=c->r[31]|c->r[31]; // 800D03B8
  c->r[4]=0u+0x00000000u; // 800D03BC
  c->lr=0x800D03C4u; f_801F7C00(c); // 800D03C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D03C4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D03C8
  c->lr=c->r[0]; // 800D03CC
  c->r[1]=c->r[1]+0x00000030u; // 800D03D0
  return; // 800D03D4
}

// fn_800D03D8
void f_800D03D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D03D8
  c->r[0]=c->lr; // 800D03DC
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D03E0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800D03E4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800D03E8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800D03EC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 800D03F0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800D03F4
  c->r[31]=c->r[3]|c->r[3]; // 800D03F8
  c->r[4]=R16(c->r[3]+0x000003BEu); // 800D03FC
  c->r[0]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[0]); // 800D0400
  if (crb(c,2)) { goto L_800D0438; } // 800D0404
  c->r[0]=rotl(c->r[4],0)&0x00007FFFu; // 800D0408
  c->r[7]=0u+0x803D0000u; // 800D040C
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800D0410
  c->r[4]=c->r[1]+0x00000020u; // 800D0414
  {uint32_t ea=c->r[7]+0x00001B2Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800D0418
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D041C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D0420
  W32(c->r[1]+0x00000020u,c->r[6]); // 800D0424
  W32(c->r[1]+0x00000024u,c->r[5]); // 800D0428
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D042C
  c->lr=0x800D0434u; f_800CFFD8(c); // 800D0430
  goto L_800D0690; // 800D0434
L_800D0438:;
  c->r[3]=0u+0x80620000u; // 800D0438
  c->r[3]=c->r[3]+0x000079C0u; // 800D043C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0440
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0444
  c->f[1]=-c->f[1]; // 800D0448
  c->f[2]=-c->f[0]; // 800D044C
  c->lr=0x800D0454u; f_8005C22C(c); // 800D0450
  c->f[2]=-c->f[1]; // 800D0454
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0458
  fcmp(c,0,c->f[2],c->f[0]); // 800D045C
  if (!crb(c,1)) { goto L_800D0478; } // 800D0460
  {uint32_t ea=c->r[2]+0xFFFFA11Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0464
  {uint32_t ea=c->r[2]+0xFFFFA120u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0468
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800D046C
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800D0470
  goto L_800D0490; // 800D0474
L_800D0478:;
  {uint32_t ea=c->r[2]+0xFFFFA11Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0478
  {uint32_t ea=c->r[2]+0xFFFFA120u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D047C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0480
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0484
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800D0488
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 800D048C
L_800D0490:;
  {uint32_t ea=c->r[2]+0xFFFFA11Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0490
  fcmp(c,0,c->f[31],c->f[0]); // 800D0494
  if (!crb(c,1)) { goto L_800D04A4; } // 800D0498
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D049C
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800D04A0
L_800D04A4:;
  c->r[0]=R8(c->r[31]+0x00000075u); // 800D04A4
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[30]=c->ps1[30]=RF32(ea);} // 800D04A8
  cmps(c,0,(int32_t)c->r[0],0); // 800D04AC
  if (crb(c,2)) { goto L_800D04C8; } // 800D04B0
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D04B4
  c->r[0]=0u+0x00000000u; // 800D04B8
  W8(c->r[31]+0x00000075u,c->r[0]); // 800D04BC
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D04C0
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[31]);} // 800D04C4
L_800D04C8:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D04C8
  {uint32_t ea=c->r[2]+0xFFFFA11Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D04CC
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[1]); // 800D04D0
  fcmp(c,0,c->f[31],c->f[0]); // 800D04D4
  if (!crb(c,1)) { goto L_800D04E8; } // 800D04D8
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D04DC
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800D04E0
  goto L_800D04FC; // 800D04E4
L_800D04E8:;
  {uint32_t ea=c->r[2]+0xFFFFA124u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D04E8
  fcmp(c,0,c->f[31],c->f[0]); // 800D04EC
  if (!crb(c,0)) { goto L_800D04FC; } // 800D04F0
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D04F4
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 800D04F8
L_800D04FC:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D04FC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800D0500
  c->lr=0x800D0508u; f_8003EA88(c); // 800D0504
  {uint32_t ea=c->r[2]+0xFFFFA114u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0508
  fcmp(c,0,c->f[1],c->f[2]); // 800D050C
  if (!crb(c,1)) { goto L_800D0538; } // 800D0510
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0514
  fcmp(c,0,c->f[31],c->f[0]); // 800D0518
  if (!crb(c,0)) { goto L_800D052C; } // 800D051C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800D0520
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D0524
  goto L_800D053C; // 800D0528
L_800D052C:;
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800D052C
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D0530
  goto L_800D053C; // 800D0534
L_800D0538:;
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[31]);} // 800D0538
L_800D053C:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D053C
  {uint32_t ea=c->r[2]+0xFFFFA128u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0540
  fcmp(c,0,c->f[1],c->f[0]); // 800D0544
  if (!crb(c,0)) { goto L_800D0554; } // 800D0548
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D054C
  goto L_800D05BC; // 800D0550
L_800D0554:;
  {uint32_t ea=c->r[2]+0xFFFFA12Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0554
  fcmp(c,0,c->f[1],c->f[0]); // 800D0558
  if (!crb(c,1)) { goto L_800D05BC; } // 800D055C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800D0560
  c->r[3]=c->r[31]|c->r[31]; // 800D0564
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0568
  c->r[4]=0u+0x00000001u; // 800D056C
  c->r[0]=c->r[0]|0x00006000u; // 800D0570
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D0574
  c->f[2]=c->f[1]; // 800D0578
  c->r[5]=0u+0x00000001u; // 800D057C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800D0580
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D0584
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D0588
  c->ctr=c->r[12]; // 800D058C
  if (true) { c->lr=0x800D0594u; dispatch(c,c->ctr); } // 800D0590
  c->r[7]=0u+0x803D0000u; // 800D0594
  {uint32_t ea=c->r[7]+0x00001B38u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D0598
  c->r[3]=c->r[31]|c->r[31]; // 800D059C
  c->r[4]=c->r[1]+0x00000014u; // 800D05A0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D05A4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D05A8
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D05AC
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D05B0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D05B4
  c->lr=0x800D05BCu; f_800CFFD8(c); // 800D05B8
L_800D05BC:;
  {uint32_t ea=c->r[2]+0xFFFFA130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D05BC
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D05C0
  c->f[0]=c->ps1[0]=S(c->f[30]/c->f[1]); // 800D05C4
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800D05C8
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D05CC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D05D0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[1]);} // 800D05D4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[0]);} // 800D05D8
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800D05DC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D05E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800D05E4
  if (crb(c,2)) { goto L_800D0614; } // 800D05E8
  c->r[0]=R8(c->r[31]+0x00000029u); // 800D05EC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D05F0
  if (crb(c,2)) { goto L_800D0614; } // 800D05F4
  W8(c->r[31]+0x00000029u,c->r[3]); // 800D05F8
  c->r[3]=c->r[31]|c->r[31]; // 800D05FC
  c->r[4]=0u+0x00000004u; // 800D0600
  c->r[5]=0u+0x0000001Du; // 800D0604
  c->r[6]=0u+0x00000001u; // 800D0608
  c->r[7]=0u+0x00000001u; // 800D060C
  c->lr=0x800D0614u; f_8017900C(c); // 800D0610
L_800D0614:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0614
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D0618
  c->lr=0x800D0620u; f_802501B0(c); // 800D061C
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0620
  c->r[5]=c->r[1]+0x0000002Cu; // 800D0624
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0628
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800D062C
  c->r[4]=R8(c->r[31]+0x00000076u); // 800D0630
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D0634
  c->lr=0x800D063Cu; f_8025EA54(c); // 800D0638
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D063C
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0640
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0644
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0648
  fcmp(c,0,c->f[1],c->f[0]); // 800D064C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800D0650
  if (!crb(c,0)) { goto L_800D0664; } // 800D0654
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0658
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D065C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800D0660
L_800D0664:;
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 800D0664
  c->r[5]=c->r[1]+0x00000008u; // 800D0668
  c->r[3]=R32(c->r[1]+0x00000030u); // 800D066C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D0670
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D0674
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D0678
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D067C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0680
  c->r[4]=R8(c->r[31]+0x00000076u); // 800D0684
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D0688
  c->lr=0x800D0690u; f_8025E9C0(c); // 800D068C
L_800D0690:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800D0690
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800D0694
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 800D0698
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 800D069C
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D06A0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800D06A4
  c->lr=c->r[0]; // 800D06A8
  c->r[1]=c->r[1]+0x00000070u; // 800D06AC
  return; // 800D06B0
}

// fn_800D06B4
void f_800D06B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D06B4
  c->r[0]=c->lr; // 800D06B8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D06BC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D06C0
  c->r[31]=c->r[3]|c->r[3]; // 800D06C4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D06C8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D06CC
  c->lr=0x800D06D4u; f_802501B0(c); // 800D06D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D06D4
  if (crb(c,2)) { goto L_800D0764; } // 800D06D8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800D06DC
  c->r[5]=c->r[1]+0x0000002Cu; // 800D06E0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D06E4
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800D06E8
  c->r[4]=R8(c->r[31]+0x00000076u); // 800D06EC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800D06F0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D06F4
  c->lr=0x800D06FCu; f_8025EA54(c); // 800D06F8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D06FC
  c->r[3]=c->r[31]|c->r[31]; // 800D0700
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0704
  c->r[4]=0u+0x00000000u; // 800D0708
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D070C
  c->r[5]=0u+0x00000001u; // 800D0710
  c->f[2]=c->f[1]; // 800D0714
  c->ctr=c->r[12]; // 800D0718
  if (true) { c->lr=0x800D0720u; dispatch(c,c->ctr); } // 800D071C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0720
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D0724
  c->lr=0x800D072Cu; f_802501B0(c); // 800D0728
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D072C
  c->r[7]=0u+0x803D0000u; // 800D0730
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0734
  c->r[3]=c->r[31]|c->r[31]; // 800D0738
  c->r[4]=c->r[1]+0x00000014u; // 800D073C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D0740
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D0744
  {uint32_t ea=c->r[7]+0x00001B44u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D0748
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D074C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D0750
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D0754
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D0758
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D075C
  c->lr=0x800D0764u; f_800CFFD8(c); // 800D0760
L_800D0764:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0764
  c->r[5]=c->r[1]+0x00000020u; // 800D0768
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D076C
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800D0770
  c->r[4]=R8(c->r[31]+0x00000076u); // 800D0774
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D0778
  c->lr=0x800D0780u; f_8025EA54(c); // 800D077C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0780
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0784
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0788
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D078C
  fcmp(c,0,c->f[1],c->f[0]); // 800D0790
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 800D0794
  if (!crb(c,0)) { goto L_800D07A8; } // 800D0798
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D079C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D07A0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800D07A4
L_800D07A8:;
  c->r[4]=R32(c->r[1]+0x00000020u); // 800D07A8
  c->r[5]=c->r[1]+0x00000008u; // 800D07AC
  c->r[3]=R32(c->r[1]+0x00000024u); // 800D07B0
  c->r[0]=R32(c->r[1]+0x00000028u); // 800D07B4
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D07B8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D07BC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D07C0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D07C4
  c->r[4]=R8(c->r[31]+0x00000076u); // 800D07C8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D07CC
  c->lr=0x800D07D4u; f_8025E9C0(c); // 800D07D0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D07D4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D07D8
  c->lr=c->r[0]; // 800D07DC
  c->r[1]=c->r[1]+0x00000040u; // 800D07E0
  return; // 800D07E4
}

// fn_800D07E8
void f_800D07E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D07E8
  c->r[0]=c->lr; // 800D07EC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D07F0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D07F4
  c->r[31]=c->r[3]|c->r[3]; // 800D07F8
  c->r[4]=R16(c->r[3]+0x000003BEu); // 800D07FC
  c->r[0]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[0]); // 800D0800
  if (crb(c,2)) { goto L_800D0838; } // 800D0804
  c->r[0]=rotl(c->r[4],0)&0x00007FFFu; // 800D0808
  c->r[7]=0u+0x803D0000u; // 800D080C
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800D0810
  c->r[4]=c->r[1]+0x00000014u; // 800D0814
  {uint32_t ea=c->r[7]+0x00001B50u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D0818
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D081C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D0820
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D0824
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D0828
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D082C
  c->lr=0x800D0834u; f_800CFFD8(c); // 800D0830
  goto L_800D08B4; // 800D0834
L_800D0838:;
  c->r[3]=R32(c->r[3]+0x00000394u); // 800D0838
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D083C
  c->lr=0x800D0844u; f_802501B0(c); // 800D0840
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0844
  c->r[5]=c->r[1]+0x00000020u; // 800D0848
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D084C
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800D0850
  c->r[4]=R8(c->r[31]+0x00000076u); // 800D0854
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D0858
  c->lr=0x800D0860u; f_8025EA54(c); // 800D085C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0860
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0864
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0868
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D086C
  fcmp(c,0,c->f[1],c->f[0]); // 800D0870
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 800D0874
  if (!crb(c,0)) { goto L_800D0888; } // 800D0878
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D087C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D0880
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800D0884
L_800D0888:;
  c->r[4]=R32(c->r[1]+0x00000020u); // 800D0888
  c->r[5]=c->r[1]+0x00000008u; // 800D088C
  c->r[3]=R32(c->r[1]+0x00000024u); // 800D0890
  c->r[0]=R32(c->r[1]+0x00000028u); // 800D0894
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D0898
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D089C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D08A0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D08A4
  c->r[4]=R8(c->r[31]+0x00000076u); // 800D08A8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D08AC
  c->lr=0x800D08B4u; f_8025E9C0(c); // 800D08B0
L_800D08B4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D08B4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D08B8
  c->lr=c->r[0]; // 800D08BC
  c->r[1]=c->r[1]+0x00000040u; // 800D08C0
  return; // 800D08C4
}

// fn_800D08C8
void f_800D08C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D08C8
  c->r[0]=c->lr; // 800D08CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D08D0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D08D4
  c->r[31]=c->r[3]|c->r[3]; // 800D08D8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D08DC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D08E0
  c->lr=0x800D08E8u; f_802501B0(c); // 800D08E4
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D08E8
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D08EC
  fcmp(c,0,c->f[2],c->f[1]); // 800D08F0
  if (crb(c,2)) { goto L_800D09B0; } // 800D08F4
  fcmp(c,0,c->f[1],c->f[2]); // 800D08F8
  if (!crb(c,1)) { goto L_800D0920; } // 800D08FC
  {uint32_t ea=c->r[2]+0xFFFFA114u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0900
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D0904
  fcmp(c,0,c->f[0],c->f[2]); // 800D0908
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D090C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D0910
  if (!crb(c,2)) { goto L_800D093C; } // 800D0914
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[2]);} // 800D0918
  goto L_800D093C; // 800D091C
L_800D0920:;
  {uint32_t ea=c->r[2]+0xFFFFA114u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0920
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D0924
  fcmp(c,0,c->f[0],c->f[2]); // 800D0928
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D092C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D0930
  if (!crb(c,2)) { goto L_800D093C; } // 800D0934
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[2]);} // 800D0938
L_800D093C:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D093C
  c->r[5]=c->r[1]+0x00000014u; // 800D0940
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0944
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800D0948
  c->r[4]=R8(c->r[31]+0x00000076u); // 800D094C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D0950
  c->lr=0x800D0958u; f_8025EA54(c); // 800D0954
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0958
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D095C
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0960
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0964
  fcmp(c,0,c->f[1],c->f[0]); // 800D0968
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800D096C
  if (!crb(c,0)) { goto L_800D0980; } // 800D0970
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0974
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D0978
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800D097C
L_800D0980:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 800D0980
  c->r[5]=c->r[1]+0x00000008u; // 800D0984
  c->r[3]=R32(c->r[1]+0x00000018u); // 800D0988
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800D098C
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D0990
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D0994
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D0998
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D099C
  c->r[4]=R8(c->r[31]+0x00000076u); // 800D09A0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D09A4
  c->lr=0x800D09ACu; f_8025E9C0(c); // 800D09A8
  goto L_800D09C4; // 800D09AC
L_800D09B0:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D09B0
  c->r[3]=c->r[31]|c->r[31]; // 800D09B4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D09B8
  c->ctr=c->r[12]; // 800D09BC
  if (true) { c->lr=0x800D09C4u; dispatch(c,c->ctr); } // 800D09C0
L_800D09C4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D09C4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D09C8
  c->lr=c->r[0]; // 800D09CC
  c->r[1]=c->r[1]+0x00000030u; // 800D09D0
  return; // 800D09D4
}

// fn_800D09D8
void f_800D09D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D09D8
  c->r[0]=c->lr; // 800D09DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D09E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D09E4
  c->r[31]=c->r[3]|c->r[3]; // 800D09E8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D09EC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D09F0
  c->lr=0x800D09F8u; f_802501B0(c); // 800D09F4
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D09F8
  c->r[3]=c->r[31]+0x0000002Cu; // 800D09FC
  c->r[4]=c->r[31]+0x00000060u; // 800D0A00
  c->r[7]=0u+0x00000000u; // 800D0A04
  c->r[5]=c->r[6]+0x00000074u; // 800D0A08
  c->r[6]=c->r[6]+0x000000B0u; // 800D0A0C
  c->lr=0x800D0A14u; f_8002BE64(c); // 800D0A10
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D0A14
  c->r[6]=0u+0x00000000u; // 800D0A18
  c->r[0]=0u+0x00000001u; // 800D0A1C
  c->r[3]=c->r[31]+0x0000002Cu; // 800D0A20
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800D0A24
  c->r[4]=c->r[31]+0x000003CCu; // 800D0A28
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D0A2C
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800D0A30
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800D0A34
  c->lr=0x800D0A3Cu; f_800361A0(c); // 800D0A38
  c->r[3]=c->r[31]+0x00000060u; // 800D0A3C
  c->r[4]=c->r[31]+0x000003D8u; // 800D0A40
  c->lr=0x800D0A48u; f_800361A0(c); // 800D0A44
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D0A48
  c->r[3]=c->r[31]|c->r[31]; // 800D0A4C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D0A50
  c->ctr=c->r[12]; // 800D0A54
  if (true) { c->lr=0x800D0A5Cu; dispatch(c,c->ctr); } // 800D0A58
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0A5C
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0A60
  fcmp(c,0,c->f[1],c->f[0]); // 800D0A64
  if (!crb(c,0)) { goto L_800D0A84; } // 800D0A68
  c->r[3]=c->r[31]|c->r[31]; // 800D0A6C
  c->r[4]=0u+0x00000027u; // 800D0A70
  c->lr=0x800D0A78u; f_801F5AB4(c); // 800D0A74
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800D0A78
  c->r[0]=c->r[0]|0x00000080u; // 800D0A7C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800D0A80
L_800D0A84:;
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0A84
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0A88
  fcmp(c,0,c->f[1],c->f[0]); // 800D0A8C
  if (!crb(c,1)) { goto L_800D0AA0; } // 800D0A90
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800D0A94
  c->r[0]=rotl(c->r[0],0)&0xFFFFF7FFu; // 800D0A98
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800D0A9C
L_800D0AA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0AA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0AA4
  c->lr=c->r[0]; // 800D0AA8
  c->r[1]=c->r[1]+0x00000010u; // 800D0AAC
  return; // 800D0AB0
}

// fn_800D0AB4
void f_800D0AB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0AB4
  c->r[0]=c->lr; // 800D0AB8
  c->r[6]=c->r[4]|c->r[4]; // 800D0ABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0AC0
  c->r[0]=R8(c->r[3]+0x00000074u); // 800D0AC4
  cmps(c,0,(int32_t)c->r[0],1); // 800D0AC8
  if (crb(c,2)) { goto L_800D0AEC; } // 800D0ACC
  if (!crb(c,0)) { goto L_800D0AD8; } // 800D0AD0
  goto L_800D0AE4; // 800D0AD4
L_800D0AD8:;
  cmps(c,0,(int32_t)c->r[0],3); // 800D0AD8
  if (!crb(c,0)) { goto L_800D0AE4; } // 800D0ADC
  goto L_800D0AF4; // 800D0AE0
L_800D0AE4:;
  c->r[5]=0u+0x00000000u; // 800D0AE4
  goto L_800D0AF8; // 800D0AE8
L_800D0AEC:;
  c->r[5]=0u+0x00000001u; // 800D0AEC
  goto L_800D0AF8; // 800D0AF0
L_800D0AF4:;
  c->r[5]=0u+0x00000002u; // 800D0AF4
L_800D0AF8:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D0AF8
  c->r[3]=c->r[6]|c->r[6]; // 800D0AFC
  c->lr=0x800D0B04u; f_80250BF4(c); // 800D0B00
  c->r[0]=cntlz(c->r[3]); // 800D0B04
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D0B08
  c->r[3]=0u-c->r[0]; // 800D0B0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0B10
  c->lr=c->r[0]; // 800D0B14
  c->r[1]=c->r[1]+0x00000010u; // 800D0B18
  return; // 800D0B1C
}

// fn_800D0B20
void f_800D0B20(Ctx* __restrict c) {
  W8(c->r[3]+0x00000074u,c->r[4]); // 800D0B20
  return; // 800D0B24
}

// fn_800D0B28
void f_800D0B28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0B28
  c->r[0]=c->lr; // 800D0B2C
  c->r[7]=0u+0x803D0000u; // 800D0B30
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0B34
  c->r[0]=0u+0x00000000u; // 800D0B38
  c->r[4]=c->r[1]+0x00000008u; // 800D0B3C
  W16(c->r[3]+0x000003BCu,c->r[0]); // 800D0B40
  {uint32_t ea=c->r[7]+0x00001B5Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800D0B44
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D0B48
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D0B4C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D0B50
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D0B54
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D0B58
  c->lr=0x800D0B60u; f_800CFFD8(c); // 800D0B5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0B60
  c->lr=c->r[0]; // 800D0B64
  c->r[1]=c->r[1]+0x00000020u; // 800D0B68
  return; // 800D0B6C
}

// fn_800D0B70
void f_800D0B70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0B70
  c->r[0]=c->lr; // 800D0B74
  c->r[5]=0u+0x80620000u; // 800D0B78
  c->r[4]=0u+0x00000002u; // 800D0B7C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D0B80
  c->r[5]=c->r[5]+0x00007688u; // 800D0B84
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800D0B88
  W32(c->r[1]+0x00000068u,c->r[30]); // 800D0B8C
  c->r[30]=c->r[3]|c->r[3]; // 800D0B90
  c->r[3]=R32(c->r[5]+0x00000014u); // 800D0B94
  c->lr=0x800D0B9Cu; f_80037670(c); // 800D0B98
  cmps(c,0,(int32_t)c->r[3],0); // 800D0B9C
  if (!crb(c,2)) { goto L_800D0BE8; } // 800D0BA0
  c->r[3]=0u+0x805D0000u; // 800D0BA4
  c->r[3]=c->r[3]+0x00003F6Cu; // 800D0BA8
  c->lr=0x800D0BB0u; f_80037AF0(c); // 800D0BAC
  cmpu(c,0,c->r[3],c->r[30]); // 800D0BB0
  if (crb(c,2)) { goto L_800D0BE8; } // 800D0BB4
  c->r[31]=0u+0x80550000u; // 800D0BB8
  {uint32_t ea=c->r[2]+0xFFFFA134u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0BBC
  c->r[31]=c->r[31]+0x00003D60u; // 800D0BC0
  c->r[5]=c->r[30]|c->r[30]; // 800D0BC4
  c->r[3]=c->r[31]+0x00000010u; // 800D0BC8
  c->r[6]=c->r[30]+0x0000002Cu; // 800D0BCC
  c->r[7]=c->r[1]+0x00000008u; // 800D0BD0
  c->r[4]=0u+0x000001FFu; // 800D0BD4
  c->lr=0x800D0BDCu; f_80226910(c); // 800D0BD8
  c->r[3]=c->r[31]+0x00000010u; // 800D0BDC
  c->r[4]=c->r[1]+0x00000008u; // 800D0BE0
  c->lr=0x800D0BE8u; f_80226D68(c); // 800D0BE4
L_800D0BE8:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D0BE8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800D0BEC
  c->r[30]=R32(c->r[1]+0x00000068u); // 800D0BF0
  c->lr=c->r[0]; // 800D0BF4
  c->r[1]=c->r[1]+0x00000070u; // 800D0BF8
  return; // 800D0BFC
}

// fn_800D0C00
void f_800D0C00(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0C00
  return; // 800D0C04
}

// fn_800D0C08
void f_800D0C08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0C08
  c->r[0]=c->lr; // 800D0C0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0C10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0C14
  c->r[31]=c->r[3]|c->r[3]; // 800D0C18
  c->r[3]=c->r[3]+0x00000210u; // 800D0C1C
  c->lr=0x800D0C24u; f_8004BAD4(c); // 800D0C20
  cmps(c,0,(int32_t)c->r[3],0); // 800D0C24
  if (crb(c,2)) { goto L_800D0C98; } // 800D0C28
  c->r[0]=R32(c->r[31]+0x00000210u); // 800D0C2C
  c->r[4]=c->r[31]|c->r[31]; // 800D0C30
  c->r[3]=c->r[31]+0x00000210u; // 800D0C34
  c->r[0]=c->r[0]|0xAA000000u; // 800D0C38
  W32(c->r[31]+0x00000210u,c->r[0]); // 800D0C3C
  c->lr=0x800D0C44u; f_80043E44(c); // 800D0C40
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0C44
  c->r[3]=c->r[31]+0x00000210u; // 800D0C48
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0C4C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D0C50
  c->lr=0x800D0C58u; f_80043E34(c); // 800D0C54
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0C58
  c->r[4]=0u+0x803A0000u; // 800D0C5C
  c->r[4]=c->r[4]+0xFFFFDEDCu; // 800D0C60
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D0C64
  c->r[4]=c->r[4]+0x00000010u; // 800D0C68
  c->lr=0x800D0C70u; f_80256EC4(c); // 800D0C6C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D0C70
  c->r[5]=c->r[3]|c->r[3]; // 800D0C74
  c->r[3]=c->r[31]+0x00000210u; // 800D0C78
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800D0C7C
  c->lr=0x800D0C84u; f_8004BAC8(c); // 800D0C80
  {uint32_t ea=c->r[2]+0xFFFFA138u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0C84
  c->r[3]=c->r[31]+0x00000210u; // 800D0C88
  c->f[2]=c->f[1]; // 800D0C8C
  c->f[3]=c->f[1]; // 800D0C90
  c->lr=0x800D0C98u; f_80043E24(c); // 800D0C94
L_800D0C98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0C98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0C9C
  c->lr=c->r[0]; // 800D0CA0
  c->r[1]=c->r[1]+0x00000010u; // 800D0CA4
  return; // 800D0CA8
}

// fn_800D0CAC
void f_800D0CAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0CAC
  c->r[0]=c->lr; // 800D0CB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0CB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0CB8
  c->r[31]=c->r[3]|c->r[3]; // 800D0CBC
  c->r[3]=c->r[3]+0x00000210u; // 800D0CC0
  c->lr=0x800D0CC8u; f_80221698(c); // 800D0CC4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0CC8
  cmps(c,0,(int32_t)c->r[3],0); // 800D0CCC
  if (crb(c,2)) { goto L_800D0CF0; } // 800D0CD0
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800D0CD4
  cmps(c,0,(int32_t)c->r[0],0); // 800D0CD8
  if (crb(c,2)) { goto L_800D0CF0; } // 800D0CDC
  c->r[0]=R32(c->r[31]+0x00000210u); // 800D0CE0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800D0CE4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800D0CE8
  goto L_800D0CFC; // 800D0CEC
L_800D0CF0:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800D0CF0
  c->r[0]=c->r[0]|0x80000000u; // 800D0CF4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800D0CF8
L_800D0CFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0CFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0D00
  c->lr=c->r[0]; // 800D0D04
  c->r[1]=c->r[1]+0x00000010u; // 800D0D08
  return; // 800D0D0C
}

// fn_800D0D10
void f_800D0D10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0D10
  c->r[0]=c->lr; // 800D0D14
  cmps(c,0,(int32_t)c->r[3],0); // 800D0D18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0D1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0D20
  c->r[31]=c->r[4]|c->r[4]; // 800D0D24
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D0D28
  c->r[30]=c->r[3]|c->r[3]; // 800D0D2C
  if (crb(c,2)) { goto L_800D0D4C; } // 800D0D30
  c->r[4]=0u+0x00000000u; // 800D0D34
  c->lr=0x800D0D3Cu; f_8026A06C(c); // 800D0D38
  cmps(c,0,(int32_t)c->r[31],0); // 800D0D3C
  if (!crb(c,1)) { goto L_800D0D4C; } // 800D0D40
  c->r[3]=c->r[30]|c->r[30]; // 800D0D44
  c->lr=0x800D0D4Cu; f_8026A268(c); // 800D0D48
L_800D0D4C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D0D4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0D50
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D0D54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0D58
  c->lr=c->r[0]; // 800D0D5C
  c->r[1]=c->r[1]+0x00000010u; // 800D0D60
  return; // 800D0D64
}

// fn_800D0D68
void f_800D0D68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0D68
  c->r[0]=c->lr; // 800D0D6C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D0D70
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800D0D74
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800D0D78
  c->r[4]=0u+0x00000000u; // 800D0D7C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D0D80
  c->r[31]=c->r[3]|c->r[3]; // 800D0D84
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D0D88
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D0D8C
  c->lr=0x800D0D94u; f_801F57D0(c); // 800D0D90
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D0D94
  c->r[3]=c->r[31]|c->r[31]; // 800D0D98
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D0D9C
  c->ctr=c->r[12]; // 800D0DA0
  if (true) { c->lr=0x800D0DA8u; dispatch(c,c->ctr); } // 800D0DA4
  c->r[3]=c->r[31]|c->r[31]; // 800D0DA8
  c->lr=0x800D0DB0u; f_801F4B94(c); // 800D0DAC
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800D0DB0
  c->r[4]=0u+0x00000003u; // 800D0DB4
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0DB8
  c->r[5]=0u+0x00000033u; // 800D0DBC
  c->r[0]=c->r[0]|0x00000800u; // 800D0DC0
  c->r[3]=0u+0x80550000u; // 800D0DC4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800D0DC8
  c->f[3]=c->f[1]; // 800D0DCC
  W8(c->r[31]+0x0000006Cu,c->r[4]); // 800D0DD0
  c->r[3]=c->r[3]+0x00003D60u; // 800D0DD4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D0DD8
  c->r[4]=c->r[31]+0x0000002Cu; // 800D0DDC
  W8(c->r[31]+0x0000006Du,c->r[5]); // 800D0DE0
  {uint32_t ea=c->r[2]+0xFFFFA14Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0DE4
  c->r[5]=c->r[31]+0x00000030u; // 800D0DE8
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800D0DEC
  c->r[6]=0u+0x00000000u; // 800D0DF0
  c->r[7]=0u+0x00000000u; // 800D0DF4
  c->lr=0x800D0DFCu; f_801D5488(c); // 800D0DF8
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0DFC
  c->r[3]=c->r[31]|c->r[31]; // 800D0E00
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D0E04
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800D0E08
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D0E0C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800D0E10
  c->lr=0x800D0E18u; f_801F58BC(c); // 800D0E14
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D0E18
  c->r[29]=0u+0x00000001u; // 800D0E1C
  c->r[3]=0u+0x805D0000u; // 800D0E20
  c->r[4]=c->r[31]+0x0000002Cu; // 800D0E24
  W8(c->r[5]+0x0000001Cu,c->r[29]); // 800D0E28
  c->r[3]=c->r[3]+0x000078B0u; // 800D0E2C
  c->lr=0x800D0E34u; f_802351CC(c); // 800D0E30
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D0E34
  c->r[30]=0u+0x803A0000u; // 800D0E38
  c->r[30]=c->r[30]+0xFFFFDFCCu; // 800D0E3C
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800D0E40
  c->r[4]=c->r[30]+0x0000004Fu; // 800D0E44
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0E48
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D0E4C
  c->lr=0x800D0E54u; f_80256EC4(c); // 800D0E50
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D0E54
  c->r[4]=0u+0x00000000u; // 800D0E58
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0E5C
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800D0E60
  c->f[2]=c->f[1]; // 800D0E64
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D0E68
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800D0E6C
  c->r[5]=R32(c->r[5]+0x00000034u); // 800D0E70
  c->lr=0x800D0E78u; f_8024FEAC(c); // 800D0E74
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0E78
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D0E7C
  c->lr=0x800D0E84u; f_802501B0(c); // 800D0E80
  c->r[8]=0u+0x803A0000u; // 800D0E84
  {uint32_t ea=c->r[8]+0xFFFFDF38u; c->r[7]=R32(ea); c->r[8]=ea;} // 800D0E88
  c->r[4]=c->r[30]+0x00000058u; // 800D0E8C
  c->r[5]=c->r[1]+0x00000008u; // 800D0E90
  c->r[6]=R32(c->r[8]+0x00000004u); // 800D0E94
  c->r[3]=R32(c->r[8]+0x00000008u); // 800D0E98
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 800D0E9C
  W32(c->r[1]+0x00000008u,c->r[7]); // 800D0EA0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800D0EA4
  W32(c->r[1]+0x00000010u,c->r[3]); // 800D0EA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0EAC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0EB0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D0EB4
  c->lr=0x800D0EBCu; f_8025892C(c); // 800D0EB8
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0EBC
  c->r[3]=c->r[31]+0x0000000Cu; // 800D0EC0
  c->lr=0x800D0EC8u; f_80037668(c); // 800D0EC4
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800D0EC8
  c->r[3]=c->r[31]|c->r[31]; // 800D0ECC
  c->lr=0x800D0ED4u; f_801F56F4(c); // 800D0ED0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D0ED4
  c->r[3]=c->r[31]|c->r[31]; // 800D0ED8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D0EDC
  c->ctr=c->r[12]; // 800D0EE0
  if (true) { c->lr=0x800D0EE8u; dispatch(c,c->ctr); } // 800D0EE4
  c->r[4]=0u+0x000000FFu; // 800D0EE8
  c->r[0]=0u+0x00000000u; // 800D0EEC
  W8(c->r[31]+0x00000078u,c->r[4]); // 800D0EF0
  c->r[3]=c->r[31]|c->r[31]; // 800D0EF4
  W8(c->r[31]+0x00000079u,c->r[4]); // 800D0EF8
  W8(c->r[31]+0x0000007Au,c->r[4]); // 800D0EFC
  W8(c->r[31]+0x0000007Bu,c->r[4]); // 800D0F00
  W32(c->r[31]+0x00000088u,c->r[0]); // 800D0F04
  c->lr=0x800D0F0Cu; f_800D25BC(c); // 800D0F08
  c->r[3]=c->r[31]|c->r[31]; // 800D0F0C
  c->lr=0x800D0F14u; f_800D26F8(c); // 800D0F10
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)112); // 800D0F14
  W32(c->r[31]+0x00000444u,c->r[29]); // 800D0F18
  c->lr=0x800D0F20u; f_8024E174(c); // 800D0F1C
  W32(c->r[31]+0x00000438u,c->r[3]); // 800D0F20
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800D0F24
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800D0F28
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D0F2C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D0F30
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D0F34
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D0F38
  c->lr=c->r[0]; // 800D0F3C
  c->r[1]=c->r[1]+0x00000040u; // 800D0F40
  return; // 800D0F44
}

// fn_800D0F48
void f_800D0F48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0F48
  c->r[0]=c->lr; // 800D0F4C
  W32(c->r[1]+0x00000114u,c->r[0]); // 800D0F50
  c->r[11]=c->r[1]+0x00000110u; // 800D0F54
  c->lr=0x800D0F5Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D0F58
  c->r[28]=0u+0x805D0000u; // 800D0F5C
  c->r[31]=c->r[3]|c->r[3]; // 800D0F60
  c->r[3]=c->r[28]+0x00003F6Cu; // 800D0F64
  c->lr=0x800D0F6Cu; f_80045264(c); // 800D0F68
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800D0F6C
  cmpu(c,0,c->r[0],0x00000028u); // 800D0F70
  if (crb(c,2)) { goto L_800D0F8C; } // 800D0F74
  c->r[3]=c->r[28]+0x00003F6Cu; // 800D0F78
  c->lr=0x800D0F80u; f_80045264(c); // 800D0F7C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800D0F80
  cmpu(c,0,c->r[0],0x00000029u); // 800D0F84
  if (!crb(c,2)) { goto L_800D0FC8; } // 800D0F88
L_800D0F8C:;
  c->r[3]=0u+0x805D0000u; // 800D0F8C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800D0F90
  c->lr=0x800D0F98u; f_80037AF0(c); // 800D0F94
  cmpu(c,0,c->r[3],c->r[31]); // 800D0F98
  if (!crb(c,2)) { goto L_800D0FC8; } // 800D0F9C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800D0FA0
  cmps(c,0,(int32_t)c->r[0],101); // 800D0FA4
  if (crb(c,2)) { goto L_800D0FC8; } // 800D0FA8
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0FAC
  c->r[3]=c->r[31]|c->r[31]; // 800D0FB0
  c->r[4]=0u+0x00000065u; // 800D0FB4
  c->r[5]=0u+0x00000000u; // 800D0FB8
  c->r[6]=0u+0x00000000u; // 800D0FBC
  c->r[7]=0u+0x00000000u; // 800D0FC0
  c->lr=0x800D0FC8u; f_801F4D44(c); // 800D0FC4
L_800D0FC8:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D0FC8
  c->r[3]=c->r[31]|c->r[31]; // 800D0FCC
  c->r[12]=R32(c->r[12]+0x00000068u); // 800D0FD0
  c->ctr=c->r[12]; // 800D0FD4
  if (true) { c->lr=0x800D0FDCu; dispatch(c,c->ctr); } // 800D0FD8
  c->r[3]=c->r[31]|c->r[31]; // 800D0FDC
  c->lr=0x800D0FE4u; f_801F4C0C(c); // 800D0FE0
  c->r[3]=c->r[31]|c->r[31]; // 800D0FE4
  c->lr=0x800D0FECu; f_800D1C64(c); // 800D0FE8
  c->r[3]=c->r[31]|c->r[31]; // 800D0FEC
  c->lr=0x800D0FF4u; f_801F56F4(c); // 800D0FF0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D0FF4
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800D0FF8
  cmps(c,0,(int32_t)c->r[0],0); // 800D0FFC
  if (crb(c,2)) { goto L_800D1068; } // 800D1000
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800D1004
  cmps(c,0,(int32_t)c->r[0],0); // 800D1008
  if (crb(c,2)) { goto L_800D1068; } // 800D100C
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800D1010
  cmps(c,0,(int32_t)c->r[0],0); // 800D1014
  if (crb(c,2)) { goto L_800D1034; } // 800D1018
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800D101C
  cmps(c,0,(int32_t)c->r[0],0); // 800D1020
  if (!crb(c,2)) { goto L_800D1034; } // 800D1024
  c->r[4]=c->r[3]+0x000000B0u; // 800D1028
  c->lr=0x800D1030u; f_80250F18(c); // 800D102C
  goto L_800D1050; // 800D1030
L_800D1034:;
  c->r[3]=c->r[3]+0x0000005Cu; // 800D1034
  c->r[4]=c->r[31]+0x0000002Cu; // 800D1038
  c->lr=0x800D1040u; f_800361A0(c); // 800D103C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D1040
  c->r[4]=c->r[31]+0x00000060u; // 800D1044
  c->r[3]=c->r[3]+0x00000068u; // 800D1048
  c->lr=0x800D1050u; f_800361A0(c); // 800D104C
L_800D1050:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D1050
  c->r[3]=c->r[31]|c->r[31]; // 800D1054
  c->lr=0x800D105Cu; f_801F58FC(c); // 800D1058
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D105C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D1060
  c->lr=0x800D1068u; f_8025037C(c); // 800D1064
L_800D1068:;
  c->r[0]=R8(c->r[31]+0x00000078u); // 800D1068
  cmpu(c,0,c->r[0],0x000000FFu); // 800D106C
  if (crb(c,2)) { goto L_800D10C0; } // 800D1070
  c->r[3]=c->r[31]+0x0000000Cu; // 800D1074
  c->r[4]=0u+0x00000000u; // 800D1078
  c->lr=0x800D1080u; f_800366DC(c); // 800D107C
  c->r[3]=c->r[31]+0x0000000Cu; // 800D1080
  c->r[4]=0u+0x00002706u; // 800D1084
  c->lr=0x800D108Cu; f_800395D0(c); // 800D1088
  cmps(c,0,(int32_t)c->r[3],0); // 800D108C
  if (crb(c,2)) { goto L_800D10A0; } // 800D1090
  c->r[3]=c->r[31]|c->r[31]; // 800D1094
  c->lr=0x800D109Cu; f_800D1F90(c); // 800D1098
  goto L_800D10C0; // 800D109C
L_800D10A0:;
  c->r[3]=0u+0x80550000u; // 800D10A0
  c->r[4]=R8(c->r[31]+0x00000078u); // 800D10A4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D10A8
  c->lr=0x800D10B0u; f_8018D900(c); // 800D10AC
  cmps(c,0,(int32_t)c->r[3],0); // 800D10B0
  if (!crb(c,2)) { goto L_800D10C0; } // 800D10B4
  c->r[3]=c->r[31]|c->r[31]; // 800D10B8
  c->lr=0x800D10C0u; f_800D1F90(c); // 800D10BC
L_800D10C0:;
  c->r[0]=R8(c->r[31]+0x0000007Bu); // 800D10C0
  cmpu(c,0,c->r[0],0x000000FFu); // 800D10C4
  if (crb(c,2)) { goto L_800D1118; } // 800D10C8
  c->r[3]=c->r[31]+0x00000010u; // 800D10CC
  c->r[4]=0u+0x00000000u; // 800D10D0
  c->lr=0x800D10D8u; f_800366DC(c); // 800D10D4
  c->r[3]=c->r[31]+0x00000010u; // 800D10D8
  c->r[4]=0u+0x000000B9u; // 800D10DC
  c->lr=0x800D10E4u; f_800395D0(c); // 800D10E0
  cmps(c,0,(int32_t)c->r[3],0); // 800D10E4
  if (crb(c,2)) { goto L_800D10F8; } // 800D10E8
  c->r[0]=0u+0x000000FFu; // 800D10EC
  W8(c->r[31]+0x0000007Bu,c->r[0]); // 800D10F0
  goto L_800D1118; // 800D10F4
L_800D10F8:;
  c->r[3]=0u+0x80550000u; // 800D10F8
  c->r[4]=R8(c->r[31]+0x0000007Bu); // 800D10FC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D1100
  c->lr=0x800D1108u; f_8018D900(c); // 800D1104
  cmps(c,0,(int32_t)c->r[3],0); // 800D1108
  if (!crb(c,2)) { goto L_800D1118; } // 800D110C
  c->r[0]=0u+0x000000FFu; // 800D1110
  W8(c->r[31]+0x0000007Bu,c->r[0]); // 800D1114
L_800D1118:;
  c->r[5]=0u+0x803A0000u; // 800D1118
  {uint32_t ea=c->r[5]+0xFFFFDF48u; c->r[6]=R32(ea); c->r[5]=ea;} // 800D111C
  c->r[3]=0u+0x803A0000u; // 800D1120
  c->r[0]=0u+0x00000000u; // 800D1124
  c->r[3]=c->r[3]+0xFFFFDFCCu; // 800D1128
  c->r[7]=R32(c->r[5]+0x00000004u); // 800D112C
  c->r[4]=c->r[3]+0x0000005Eu; // 800D1130
  c->r[3]=R32(c->r[5]+0x00000008u); // 800D1134
  W32(c->r[1]+0x000000B0u,c->r[6]); // 800D1138
  c->r[5]=c->r[1]+0x000000C8u; // 800D113C
  c->r[6]=0u+0x00000001u; // 800D1140
  W32(c->r[1]+0x000000B4u,c->r[7]); // 800D1144
  W32(c->r[1]+0x000000B8u,c->r[3]); // 800D1148
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800D114C
  W32(c->r[1]+0x000000A8u,c->r[0]); // 800D1150
  W32(c->r[1]+0x000000ACu,c->r[0]); // 800D1154
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D1158
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D115C
  c->lr=0x800D1164u; f_80257018(c); // 800D1160
  c->r[3]=c->r[1]+0x000000BCu; // 800D1164
  c->r[4]=c->r[1]+0x000000A4u; // 800D1168
  c->r[5]=c->r[1]+0x00000098u; // 800D116C
  c->r[6]=c->r[1]+0x000000C8u; // 800D1170
  c->r[7]=0u+0x00000000u; // 800D1174
  c->lr=0x800D117Cu; f_8002BE64(c); // 800D1178
  c->r[4]=0u+0x803A0000u; // 800D117C
  c->r[3]=c->r[1]+0x000000A4u; // 800D1180
  c->r[4]=c->r[4]+0xFFFFDEF8u; // 800D1184
  c->lr=0x800D118Cu; f_800361A0(c); // 800D1188
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D118C
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 800D1190
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 800D1194
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 800D1198
  c->r[0]=R8(c->r[31]+0x00000078u); // 800D119C
  cmpu(c,0,c->r[0],0x000000FFu); // 800D11A0
  if (crb(c,2)) { goto L_800D12C8; } // 800D11A4
  c->r[30]=R32(c->r[1]+0x00000098u); // 800D11A8
  c->r[28]=0u+0x80550000u; // 800D11AC
  c->r[29]=R32(c->r[1]+0x0000009Cu); // 800D11B0
  c->r[3]=c->r[28]+0xFFFFC848u; // 800D11B4
  c->r[12]=R32(c->r[1]+0x000000A0u); // 800D11B8
  c->r[5]=c->r[1]+0x0000008Cu; // 800D11BC
  c->r[11]=R32(c->r[1]+0x000000A4u); // 800D11C0
  c->r[6]=c->r[1]+0x00000080u; // 800D11C4
  c->r[10]=R32(c->r[1]+0x000000A8u); // 800D11C8
  c->r[7]=c->r[1]+0x00000074u; // 800D11CC
  c->r[9]=R32(c->r[1]+0x000000ACu); // 800D11D0
  c->r[8]=R32(c->r[1]+0x000000BCu); // 800D11D4
  c->r[4]=R32(c->r[1]+0x000000C0u); // 800D11D8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800D11DC
  W32(c->r[1]+0x00000074u,c->r[30]); // 800D11E0
  W32(c->r[1]+0x00000078u,c->r[29]); // 800D11E4
  W32(c->r[1]+0x0000007Cu,c->r[12]); // 800D11E8
  W32(c->r[1]+0x00000080u,c->r[11]); // 800D11EC
  W32(c->r[1]+0x00000084u,c->r[10]); // 800D11F0
  W32(c->r[1]+0x00000088u,c->r[9]); // 800D11F4
  W32(c->r[1]+0x0000008Cu,c->r[8]); // 800D11F8
  W32(c->r[1]+0x00000090u,c->r[4]); // 800D11FC
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D1200
  c->r[4]=R8(c->r[31]+0x00000078u); // 800D1204
  c->lr=0x800D120Cu; f_8018DD04(c); // 800D1208
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800D120C
  cmps(c,0,(int32_t)c->r[0],0); // 800D1210
  if (crb(c,2)) { goto L_800D12B8; } // 800D1214
  c->r[4]=R8(c->r[31]+0x00000078u); // 800D1218
  c->r[3]=c->r[28]+0xFFFFC848u; // 800D121C
  c->r[5]=0u+0x00000000u; // 800D1220
  c->lr=0x800D1228u; f_8018E2D4(c); // 800D1224
  c->r[28]=0u+0x803D0000u; // 800D1228
  c->r[27]=0u+0x00000000u; // 800D122C
  c->r[28]=c->r[28]+0x00001C00u; // 800D1230
  c->r[29]=0u+0x805D0000u; // 800D1234
L_800D1238:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D1238
  c->r[30]=rotl(c->r[27],2)&0x000003FCu; // 800D123C
  c->r[3]=c->r[29]+0x000078B0u; // 800D1240
  c->r[6]=c->r[1]+0x000000BCu; // 800D1244
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D1248
  c->r[4]=0u+0x00000000u; // 800D124C
  c->r[0]=c->r[30]+c->r[0]; // 800D1250
  c->r[7]=0u+0x00000000u; // 800D1254
  c->r[5]=R32(c->r[28]+c->r[0]); // 800D1258
  c->lr=0x800D1260u; f_80233DE0(c); // 800D125C
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D1260
  c->r[3]=c->r[29]+0x000078B0u; // 800D1264
  c->r[6]=c->r[1]+0x000000BCu; // 800D1268
  c->r[4]=0u+0x00000001u; // 800D126C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D1270
  c->r[7]=0u+0x00000000u; // 800D1274
  c->r[0]=c->r[30]+c->r[0]; // 800D1278
  c->r[5]=R32(c->r[28]+c->r[0]); // 800D127C
  c->lr=0x800D1284u; f_80233DE0(c); // 800D1280
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D1284
  c->r[3]=c->r[29]+0x000078B0u; // 800D1288
  c->r[6]=c->r[1]+0x000000BCu; // 800D128C
  c->r[4]=0u+0x00000002u; // 800D1290
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D1294
  c->r[7]=0u+0x00000000u; // 800D1298
  c->r[0]=c->r[30]+c->r[0]; // 800D129C
  c->r[5]=R32(c->r[28]+c->r[0]); // 800D12A0
  c->lr=0x800D12A8u; f_80233DE0(c); // 800D12A4
  c->r[27]=c->r[27]+0x00000001u; // 800D12A8
  cmpu(c,0,c->r[27],0x00000004u); // 800D12AC
  if (crb(c,0)) { IRQCHK(c); goto L_800D1238; } // 800D12B0
  goto L_800D12C8; // 800D12B4
L_800D12B8:;
  c->r[4]=R8(c->r[31]+0x00000078u); // 800D12B8
  c->r[3]=c->r[28]+0xFFFFC848u; // 800D12BC
  c->r[5]=0u+0x00000001u; // 800D12C0
  c->lr=0x800D12C8u; f_8018E2D4(c); // 800D12C4
L_800D12C8:;
  c->r[0]=R8(c->r[31]+0x00000079u); // 800D12C8
  cmpu(c,0,c->r[0],0x000000FFu); // 800D12CC
  if (crb(c,2)) { goto L_800D13A8; } // 800D12D0
  c->r[4]=c->r[1]+0x000000B0u; // 800D12D4
  c->r[3]=c->r[1]+0x000000C8u; // 800D12D8
  c->r[5]=c->r[4]|c->r[4]; // 800D12DC
  c->lr=0x800D12E4u; f_80296750(c); // 800D12E0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D12E4
  c->r[28]=0u+0x80550000u; // 800D12E8
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D12EC
  c->r[3]=c->r[28]+0xFFFFC848u; // 800D12F0
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D12F4
  c->r[5]=c->r[1]+0x00000068u; // 800D12F8
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 800D12FC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1300
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1304
  c->r[6]=c->r[1]+0x0000005Cu; // 800D1308
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D130C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800D1310
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D1314
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[4]);} // 800D1318
  c->r[30]=R32(c->r[1]+0x00000098u); // 800D131C
  c->r[7]=c->r[1]+0x00000050u; // 800D1320
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[2]);} // 800D1324
  c->r[29]=R32(c->r[1]+0x0000009Cu); // 800D1328
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 800D132C
  c->r[12]=R32(c->r[1]+0x000000A0u); // 800D1330
  c->r[11]=R32(c->r[1]+0x000000A4u); // 800D1334
  c->r[10]=R32(c->r[1]+0x000000A8u); // 800D1338
  c->r[9]=R32(c->r[1]+0x000000ACu); // 800D133C
  c->r[8]=R32(c->r[1]+0x000000B0u); // 800D1340
  c->r[4]=R32(c->r[1]+0x000000B4u); // 800D1344
  c->r[0]=R32(c->r[1]+0x000000B8u); // 800D1348
  W32(c->r[1]+0x00000050u,c->r[30]); // 800D134C
  W32(c->r[1]+0x00000054u,c->r[29]); // 800D1350
  W32(c->r[1]+0x00000058u,c->r[12]); // 800D1354
  W32(c->r[1]+0x0000005Cu,c->r[11]); // 800D1358
  W32(c->r[1]+0x00000060u,c->r[10]); // 800D135C
  W32(c->r[1]+0x00000064u,c->r[9]); // 800D1360
  W32(c->r[1]+0x00000068u,c->r[8]); // 800D1364
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 800D1368
  W32(c->r[1]+0x00000070u,c->r[0]); // 800D136C
  c->r[4]=R8(c->r[31]+0x00000079u); // 800D1370
  c->lr=0x800D1378u; f_8018DD04(c); // 800D1374
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800D1378
  cmps(c,0,(int32_t)c->r[0],0); // 800D137C
  if (crb(c,2)) { goto L_800D1398; } // 800D1380
  c->r[4]=R8(c->r[31]+0x00000079u); // 800D1384
  c->r[3]=c->r[28]+0xFFFFC848u; // 800D1388
  c->r[5]=0u+0x00000000u; // 800D138C
  c->lr=0x800D1394u; f_8018E2D4(c); // 800D1390
  goto L_800D13A8; // 800D1394
L_800D1398:;
  c->r[4]=R8(c->r[31]+0x00000079u); // 800D1398
  c->r[3]=c->r[28]+0xFFFFC848u; // 800D139C
  c->r[5]=0u+0x00000001u; // 800D13A0
  c->lr=0x800D13A8u; f_8018E2D4(c); // 800D13A4
L_800D13A8:;
  c->r[0]=R8(c->r[31]+0x0000007Au); // 800D13A8
  cmpu(c,0,c->r[0],0x000000FFu); // 800D13AC
  if (crb(c,2)) { goto L_800D1448; } // 800D13B0
  c->r[30]=R32(c->r[1]+0x00000098u); // 800D13B4
  c->r[28]=0u+0x80550000u; // 800D13B8
  c->r[29]=R32(c->r[1]+0x0000009Cu); // 800D13BC
  c->r[3]=c->r[28]+0xFFFFC848u; // 800D13C0
  c->r[12]=R32(c->r[1]+0x000000A0u); // 800D13C4
  c->r[5]=c->r[1]+0x00000044u; // 800D13C8
  c->r[11]=R32(c->r[1]+0x000000A4u); // 800D13CC
  c->r[6]=c->r[1]+0x00000038u; // 800D13D0
  c->r[10]=R32(c->r[1]+0x000000A8u); // 800D13D4
  c->r[7]=c->r[1]+0x0000002Cu; // 800D13D8
  c->r[9]=R32(c->r[1]+0x000000ACu); // 800D13DC
  c->r[8]=R32(c->r[1]+0x000000BCu); // 800D13E0
  c->r[4]=R32(c->r[1]+0x000000C0u); // 800D13E4
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800D13E8
  W32(c->r[1]+0x0000002Cu,c->r[30]); // 800D13EC
  W32(c->r[1]+0x00000030u,c->r[29]); // 800D13F0
  W32(c->r[1]+0x00000034u,c->r[12]); // 800D13F4
  W32(c->r[1]+0x00000038u,c->r[11]); // 800D13F8
  W32(c->r[1]+0x0000003Cu,c->r[10]); // 800D13FC
  W32(c->r[1]+0x00000040u,c->r[9]); // 800D1400
  W32(c->r[1]+0x00000044u,c->r[8]); // 800D1404
  W32(c->r[1]+0x00000048u,c->r[4]); // 800D1408
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800D140C
  c->r[4]=R8(c->r[31]+0x0000007Au); // 800D1410
  c->lr=0x800D1418u; f_8018DD04(c); // 800D1414
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800D1418
  cmps(c,0,(int32_t)c->r[0],0); // 800D141C
  if (crb(c,2)) { goto L_800D1438; } // 800D1420
  c->r[4]=R8(c->r[31]+0x0000007Au); // 800D1424
  c->r[3]=c->r[28]+0xFFFFC848u; // 800D1428
  c->r[5]=0u+0x00000000u; // 800D142C
  c->lr=0x800D1434u; f_8018E2D4(c); // 800D1430
  goto L_800D1448; // 800D1434
L_800D1438:;
  c->r[4]=R8(c->r[31]+0x0000007Au); // 800D1438
  c->r[3]=c->r[28]+0xFFFFC848u; // 800D143C
  c->r[5]=0u+0x00000001u; // 800D1440
  c->lr=0x800D1448u; f_8018E2D4(c); // 800D1444
L_800D1448:;
  c->r[0]=R8(c->r[31]+0x0000007Bu); // 800D1448
  cmpu(c,0,c->r[0],0x000000FFu); // 800D144C
  if (crb(c,2)) { goto L_800D14E8; } // 800D1450
  c->r[28]=R32(c->r[1]+0x00000098u); // 800D1454
  c->r[30]=0u+0x80550000u; // 800D1458
  c->r[29]=R32(c->r[1]+0x0000009Cu); // 800D145C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800D1460
  c->r[12]=R32(c->r[1]+0x000000A0u); // 800D1464
  c->r[5]=c->r[1]+0x00000020u; // 800D1468
  c->r[11]=R32(c->r[1]+0x000000A4u); // 800D146C
  c->r[6]=c->r[1]+0x00000014u; // 800D1470
  c->r[10]=R32(c->r[1]+0x000000A8u); // 800D1474
  c->r[7]=c->r[1]+0x00000008u; // 800D1478
  c->r[9]=R32(c->r[1]+0x000000ACu); // 800D147C
  c->r[8]=R32(c->r[1]+0x000000BCu); // 800D1480
  c->r[4]=R32(c->r[1]+0x000000C0u); // 800D1484
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800D1488
  W32(c->r[1]+0x00000008u,c->r[28]); // 800D148C
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 800D1490
  W32(c->r[1]+0x00000010u,c->r[12]); // 800D1494
  W32(c->r[1]+0x00000014u,c->r[11]); // 800D1498
  W32(c->r[1]+0x00000018u,c->r[10]); // 800D149C
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800D14A0
  W32(c->r[1]+0x00000020u,c->r[8]); // 800D14A4
  W32(c->r[1]+0x00000024u,c->r[4]); // 800D14A8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D14AC
  c->r[4]=R8(c->r[31]+0x0000007Bu); // 800D14B0
  c->lr=0x800D14B8u; f_8018DD04(c); // 800D14B4
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800D14B8
  cmps(c,0,(int32_t)c->r[0],0); // 800D14BC
  if (crb(c,2)) { goto L_800D14D8; } // 800D14C0
  c->r[4]=R8(c->r[31]+0x0000007Bu); // 800D14C4
  c->r[3]=c->r[30]+0xFFFFC848u; // 800D14C8
  c->r[5]=0u+0x00000000u; // 800D14CC
  c->lr=0x800D14D4u; f_8018E2D4(c); // 800D14D0
  goto L_800D14E8; // 800D14D4
L_800D14D8:;
  c->r[4]=R8(c->r[31]+0x0000007Bu); // 800D14D8
  c->r[3]=c->r[30]+0xFFFFC848u; // 800D14DC
  c->r[5]=0u+0x00000001u; // 800D14E0
  c->lr=0x800D14E8u; f_8018E2D4(c); // 800D14E4
L_800D14E8:;
  c->r[4]=R32(c->r[31]+0x00000088u); // 800D14E8
  cmps(c,0,(int32_t)c->r[4],0); // 800D14EC
  if (crb(c,2)) { goto L_800D1504; } // 800D14F0
  c->r[3]=0u+0x805D0000u; // 800D14F4
  c->r[5]=c->r[1]+0x000000BCu; // 800D14F8
  c->r[3]=c->r[3]+0x00006D70u; // 800D14FC
  c->lr=0x800D1504u; f_8022AFB4(c); // 800D1500
L_800D1504:;
  c->r[3]=c->r[31]|c->r[31]; // 800D1504
  c->lr=0x800D150Cu; f_800D27B0(c); // 800D1508
  c->r[11]=c->r[1]+0x00000110u; // 800D150C
  c->lr=0x800D1514u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D1510
  c->r[0]=R32(c->r[1]+0x00000114u); // 800D1514
  c->lr=c->r[0]; // 800D1518
  c->r[1]=c->r[1]+0x00000110u; // 800D151C
  return; // 800D1520
}

// fn_800D1524
void f_800D1524(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1524
  c->r[0]=c->lr; // 800D1528
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D152C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1530
  c->r[31]=c->r[3]|c->r[3]; // 800D1534
  c->r[4]=R8(c->r[3]+0x00000078u); // 800D1538
  cmpu(c,0,c->r[4],0x000000FFu); // 800D153C
  if (crb(c,2)) { goto L_800D1550; } // 800D1540
  c->r[3]=0u+0x80550000u; // 800D1544
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D1548
  c->lr=0x800D1550u; f_8018D694(c); // 800D154C
L_800D1550:;
  c->r[4]=R8(c->r[31]+0x00000079u); // 800D1550
  cmpu(c,0,c->r[4],0x000000FFu); // 800D1554
  if (crb(c,2)) { goto L_800D1568; } // 800D1558
  c->r[3]=0u+0x80550000u; // 800D155C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D1560
  c->lr=0x800D1568u; f_8018D694(c); // 800D1564
L_800D1568:;
  c->r[4]=R8(c->r[31]+0x0000007Au); // 800D1568
  cmpu(c,0,c->r[4],0x000000FFu); // 800D156C
  if (crb(c,2)) { goto L_800D1580; } // 800D1570
  c->r[3]=0u+0x80550000u; // 800D1574
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D1578
  c->lr=0x800D1580u; f_8018D694(c); // 800D157C
L_800D1580:;
  c->r[4]=R8(c->r[31]+0x0000007Bu); // 800D1580
  cmpu(c,0,c->r[4],0x000000FFu); // 800D1584
  if (crb(c,2)) { goto L_800D1598; } // 800D1588
  c->r[3]=0u+0x80550000u; // 800D158C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D1590
  c->lr=0x800D1598u; f_8018D694(c); // 800D1594
L_800D1598:;
  c->r[3]=c->r[31]|c->r[31]; // 800D1598
  c->lr=0x800D15A0u; f_801F4C78(c); // 800D159C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D15A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D15A4
  c->lr=c->r[0]; // 800D15A8
  c->r[1]=c->r[1]+0x00000010u; // 800D15AC
  return; // 800D15B0
}

// fn_800D15B4
void f_800D15B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D15B4
  c->r[0]=c->lr; // 800D15B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D15BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D15C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D15C4
  c->r[30]=c->r[3]|c->r[3]; // 800D15C8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D15CC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D15D0
  c->lr=0x800D15D8u; f_802501B0(c); // 800D15D4
  c->r[3]=c->r[30]|c->r[30]; // 800D15D8
  c->r[4]=0u+0x00000000u; // 800D15DC
  c->lr=0x800D15E4u; f_801F5244(c); // 800D15E0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D15E4
  c->r[3]=c->r[30]+0x0000002Cu; // 800D15E8
  c->r[4]=c->r[4]+0x0000005Cu; // 800D15EC
  c->lr=0x800D15F4u; f_800361A0(c); // 800D15F0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D15F4
  c->r[3]=c->r[30]|c->r[30]; // 800D15F8
  c->lr=0x800D1600u; f_801F5418(c); // 800D15FC
  cmps(c,0,(int32_t)c->r[3],0); // 800D1600
  if (!crb(c,0)) { goto L_800D1650; } // 800D1604
  c->r[4]=R16(c->r[30]+0x000003BEu); // 800D1608
  c->r[3]=0u+0x00000001u; // 800D160C
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800D1610
  c->r[7]=0u+0x803D0000u; // 800D1614
  c->r[4]=c->r[4]|0x00000080u; // 800D1618
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800D161C
  c->r[3]=c->r[30]|c->r[30]; // 800D1620
  W16(c->r[30]+0x000003BEu,c->r[4]); // 800D1624
  c->r[4]=c->r[1]+0x00000008u; // 800D1628
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800D162C
  {uint32_t ea=c->r[7]+0x00001C20u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D1630
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D1634
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D1638
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D163C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D1640
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D1644
  c->lr=0x800D164Cu; f_800D169C(c); // 800D1648
  goto L_800D1684; // 800D164C
L_800D1650:;
  c->r[31]=0u+0x805D0000u; // 800D1650
  c->r[3]=c->r[31]+0x00003F6Cu; // 800D1654
  c->lr=0x800D165Cu; f_800447E4(c); // 800D1658
  cmpu(c,0,c->r[3],0x00000001u); // 800D165C
  if (!crb(c,2)) { goto L_800D1670; } // 800D1660
  c->r[0]=0u+0x00000000u; // 800D1664
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800D1668
  goto L_800D167C; // 800D166C
L_800D1670:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800D1670
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800D1674
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800D1678
L_800D167C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D167C
  c->lr=0x800D1684u; f_801F5B14(c); // 800D1680
L_800D1684:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1684
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D1688
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D168C
  c->lr=c->r[0]; // 800D1690
  c->r[1]=c->r[1]+0x00000020u; // 800D1694
  return; // 800D1698
}

// fn_800D169C
void f_800D169C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D169C
  c->r[0]=c->lr; // 800D16A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D16A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D16A8
  c->r[31]=c->r[4]|c->r[4]; // 800D16AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D16B0
  c->r[30]=c->r[3]|c->r[3]; // 800D16B4
  c->r[3]=c->r[31]|c->r[31]; // 800D16B8
  c->lr=0x800D16C0u; f_802B9FDC(c); // 800D16BC
  cmps(c,0,(int32_t)c->r[3],0); // 800D16C0
  if (crb(c,2)) { goto L_800D16E0; } // 800D16C4
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D16C8
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D16CC
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D16D0
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D16D4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D16D8
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D16DC
L_800D16E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D16E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D16E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D16E8
  c->lr=c->r[0]; // 800D16EC
  c->r[1]=c->r[1]+0x00000010u; // 800D16F0
  return; // 800D16F4
}

// fn_800D16F8
void f_800D16F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D16F8
  c->r[0]=c->lr; // 800D16FC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D1700
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800D1704
  c->r[31]=c->r[3]|c->r[3]; // 800D1708
  W32(c->r[1]+0x00000048u,c->r[30]); // 800D170C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D1710
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D1714
  c->lr=0x800D171Cu; f_802501B0(c); // 800D1718
  c->r[3]=c->r[31]+0x00000038u; // 800D171C
  c->r[4]=c->r[31]+0x0000002Cu; // 800D1720
  c->lr=0x800D1728u; f_800361A0(c); // 800D1724
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1728
  c->r[3]=0u+0x80550000u; // 800D172C
  c->r[3]=c->r[3]+0x00003D60u; // 800D1730
  c->r[4]=c->r[31]+0x00000038u; // 800D1734
  c->f[2]=c->f[1]; // 800D1738
  c->r[5]=c->r[1]+0x00000008u; // 800D173C
  c->f[3]=c->f[1]; // 800D1740
  c->r[6]=0u+0x00000000u; // 800D1744
  c->r[7]=0u+0x00000000u; // 800D1748
  c->lr=0x800D1750u; f_801D5488(c); // 800D174C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D1750
  c->r[3]=c->r[31]+0x00000060u; // 800D1754
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1758
  c->r[4]=c->r[5]+0x00000068u; // 800D175C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800D1760
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1764
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800D1768
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D176C
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800D1770
  c->lr=0x800D1778u; f_800361A0(c); // 800D1774
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D1778
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D177C
  c->lr=0x800D1784u; f_802501B0(c); // 800D1780
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800D1784
  c->r[0]=0u+0x00000001u; // 800D1788
  {uint32_t ea=c->r[2]+0xFFFFA150u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D178C
  c->r[4]=c->r[31]+0x0000002Cu; // 800D1790
  {uint32_t ea=c->r[2]+0xFFFFA154u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1794
  c->r[3]=c->r[3]|0x00002000u; // 800D1798
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800D179C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D17A0
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800D17A4
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800D17A8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800D17AC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D17B0
  c->r[3]=c->r[3]+0x0000005Cu; // 800D17B4
  c->lr=0x800D17BCu; f_800361A0(c); // 800D17B8
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D17BC
  c->r[4]=0u+0x00000040u; // 800D17C0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D17C4
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800D17C8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D17CC
  c->r[3]=c->r[3]+0x0000001Cu; // 800D17D0
  c->lr=0x800D17D8u; f_802518A4(c); // 800D17D4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D17D8
  c->r[4]=0u+0x00000006u; // 800D17DC
  c->r[3]=c->r[3]+0x0000001Cu; // 800D17E0
  c->lr=0x800D17E8u; f_80251824(c); // 800D17E4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D17E8
  c->r[3]=c->r[31]|c->r[31]; // 800D17EC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D17F0
  c->r[5]=0u+0x00000000u; // 800D17F4
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D17F8
  c->r[6]=0u+0x00000001u; // 800D17FC
  {uint32_t ea=c->r[2]+0xFFFFA158u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1800
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1804
  c->ctr=c->r[12]; // 800D1808
  if (true) { c->lr=0x800D1810u; dispatch(c,c->ctr); } // 800D180C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D1810
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D1814
  c->lr=0x800D181Cu; f_802501B0(c); // 800D1818
  c->r[3]=c->r[31]|c->r[31]; // 800D181C
  c->lr=0x800D1824u; f_80037B04(c); // 800D1820
  cmps(c,0,(int32_t)c->r[3],0); // 800D1824
  if (crb(c,2)) { goto L_800D183C; } // 800D1828
  c->r[3]=c->r[31]|c->r[31]; // 800D182C
  c->lr=0x800D1834u; f_800D1F90(c); // 800D1830
  c->r[3]=c->r[31]|c->r[31]; // 800D1834
  c->lr=0x800D183Cu; f_80050680(c); // 800D1838
L_800D183C:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D183C
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800D1840
  cmps(c,0,(int32_t)c->r[0],0); // 800D1844
  if (crb(c,2)) { goto L_800D19C0; } // 800D1848
  c->r[3]=c->r[3]+0x00000068u; // 800D184C
  c->r[4]=c->r[31]+0x00000060u; // 800D1850
  c->lr=0x800D1858u; f_800361A0(c); // 800D1854
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D1858
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D185C
  c->lr=0x800D1864u; f_8025037C(c); // 800D1860
  c->r[30]=0u+0x805D0000u; // 800D1864
  c->r[3]=c->r[30]+0x00003F6Cu; // 800D1868
  c->lr=0x800D1870u; f_800447F0(c); // 800D186C
  c->r[0]=rotl(c->r[3],0)&0x00001000u; cr0(c,c->r[0]); // 800D1870
  if (crb(c,2)) { goto L_800D1938; } // 800D1874
  {uint32_t ea=c->r[2]+0xFFFFA15Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1878
  c->r[4]=0u+0x0000005Au; // 800D187C
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D1880
  {uint32_t ea=c->r[2]+0xFFFFA160u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1884
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D1888
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 800D188C
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[3]);} // 800D1890
  c->r[3]=c->r[3]+0x000000B0u; // 800D1894
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[3]);} // 800D1898
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[2]);} // 800D189C
  c->lr=0x800D18A4u; f_80295FBC(c); // 800D18A0
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D18A4
  c->r[3]=c->r[1]+0x00000030u; // 800D18A8
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D18AC
  c->r[4]=c->r[31]+0x00000060u; // 800D18B0
  c->r[5]=c->r[1]+0x0000003Cu; // 800D18B4
  c->r[7]=0u+0x00000000u; // 800D18B8
  {uint32_t ea=c->r[6]+0x000000BCu; WF32(ea,c->f[0]);} // 800D18BC
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D18C0
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D18C4
  {uint32_t ea=c->r[6]+0x000000CCu; WF32(ea,c->f[0]);} // 800D18C8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D18CC
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D18D0
  {uint32_t ea=c->r[6]+0x000000DCu; WF32(ea,c->f[0]);} // 800D18D4
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D18D8
  c->r[6]=c->r[6]+0x000000B0u; // 800D18DC
  c->lr=0x800D18E4u; f_8002BE64(c); // 800D18E0
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800D18E4
  c->r[3]=c->r[30]+0x00003F6Cu; // 800D18E8
  c->r[0]=R32(c->r[31]+0x00000030u); // 800D18EC
  c->r[4]=c->r[31]|c->r[31]; // 800D18F0
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D18F4
  c->r[7]=c->r[1]+0x00000024u; // 800D18F8
  W32(c->r[1]+0x00000024u,c->r[5]); // 800D18FC
  c->r[6]=0u+0x00000024u; // 800D1900
  c->r[8]=0u+0x00000000u; // 800D1904
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D1908
  c->r[0]=R32(c->r[31]+0x00000034u); // 800D190C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800D1910
  c->r[3]=R32(c->r[31]+0x00000438u); // 800D1914
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D1918
  c->lr=0x800D1920u; f_801FA6A4(c); // 800D191C
  c->r[3]=R32(c->r[31]+0x00000438u); // 800D1920
  c->lr=0x800D1928u; f_801FCBEC(c); // 800D1924
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800D1928
  c->r[0]=c->r[0]|0x00000004u; // 800D192C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800D1930
  goto L_800D19A8; // 800D1934
L_800D1938:;
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D1938
  c->r[3]=c->r[1]+0x00000030u; // 800D193C
  c->r[4]=c->r[31]+0x00000060u; // 800D1940
  c->r[5]=c->r[1]+0x0000003Cu; // 800D1944
  c->r[6]=c->r[6]+0x000000B0u; // 800D1948
  c->r[7]=0u+0x00000000u; // 800D194C
  c->lr=0x800D1954u; f_8002BE64(c); // 800D1950
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800D1954
  c->r[3]=c->r[30]+0x00003F6Cu; // 800D1958
  c->r[0]=R32(c->r[31]+0x00000030u); // 800D195C
  c->r[4]=c->r[31]|c->r[31]; // 800D1960
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1964
  c->r[7]=c->r[1]+0x00000018u; // 800D1968
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D196C
  c->r[6]=0u+0x00000024u; // 800D1970
  c->r[8]=0u+0x00000000u; // 800D1974
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D1978
  c->r[0]=R32(c->r[31]+0x00000034u); // 800D197C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800D1980
  c->r[3]=R32(c->r[31]+0x00000438u); // 800D1984
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D1988
  c->lr=0x800D1990u; f_801FA6A4(c); // 800D198C
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800D1990
  cmps(c,0,(int32_t)c->r[0],0); // 800D1994
  if (crb(c,2)) { goto L_800D19A8; } // 800D1998
  c->r[3]=c->r[31]+0x00000044u; // 800D199C
  c->r[4]=c->r[31]+0x000003CCu; // 800D19A0
  c->lr=0x800D19A8u; f_800361A0(c); // 800D19A4
L_800D19A8:;
  c->r[6]=0u+0x803A0000u; // 800D19A8
  c->r[3]=R32(c->r[31]+0x00000438u); // 800D19AC
  c->r[5]=c->r[31]+0x00000044u; // 800D19B0
  c->r[4]=0u+0x00000000u; // 800D19B4
  c->r[6]=c->r[6]+0xFFFFDEF8u; // 800D19B8
  c->lr=0x800D19C0u; f_801FBEC0(c); // 800D19BC
L_800D19C0:;
  c->r[3]=c->r[31]|c->r[31]; // 800D19C0
  c->r[4]=0u+0x00000000u; // 800D19C4
  c->lr=0x800D19CCu; f_801F7C00(c); // 800D19C8
  c->r[7]=0u+0x803D0000u; // 800D19CC
  {uint32_t ea=c->r[7]+0x00001C2Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800D19D0
  c->r[3]=c->r[31]|c->r[31]; // 800D19D4
  c->r[4]=c->r[1]+0x0000000Cu; // 800D19D8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D19DC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D19E0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800D19E4
  W32(c->r[1]+0x00000010u,c->r[5]); // 800D19E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D19EC
  c->lr=0x800D19F4u; f_800D169C(c); // 800D19F0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D19F4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800D19F8
  c->r[30]=R32(c->r[1]+0x00000048u); // 800D19FC
  c->lr=c->r[0]; // 800D1A00
  c->r[1]=c->r[1]+0x00000050u; // 800D1A04
  return; // 800D1A08
}

// fn_800D1A0C
void f_800D1A0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1A0C
  c->r[0]=c->lr; // 800D1A10
  c->r[4]=0u+0x00000000u; // 800D1A14
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1A18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D1A1C
  c->r[31]=c->r[3]|c->r[3]; // 800D1A20
  c->r[3]=R32(c->r[3]+0x00000438u); // 800D1A24
  c->lr=0x800D1A2Cu; f_801FAF00(c); // 800D1A28
  cmps(c,0,(int32_t)c->r[3],0); // 800D1A2C
  if (!crb(c,2)) { goto L_800D1AE8; } // 800D1A30
  c->r[3]=c->r[31]|c->r[31]; // 800D1A34
  c->r[4]=0u+0x00000028u; // 800D1A38
  c->lr=0x800D1A40u; f_801F5AB4(c); // 800D1A3C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800D1A40
  c->r[3]=c->r[31]+0x0000002Cu; // 800D1A44
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1A48
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800D1A4C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D1A50
  c->r[0]=c->r[0]|0x00000004u; // 800D1A54
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800D1A58
  c->r[4]=c->r[4]+0x0000005Cu; // 800D1A5C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800D1A60
  c->lr=0x800D1A68u; f_800361A0(c); // 800D1A64
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D1A68
  c->r[3]=c->r[31]+0x00000060u; // 800D1A6C
  c->r[4]=c->r[4]+0x00000068u; // 800D1A70
  c->lr=0x800D1A78u; f_800361A0(c); // 800D1A74
  c->r[3]=R32(c->r[31]+0x00000438u); // 800D1A78
  c->lr=0x800D1A80u; f_8004457C(c); // 800D1A7C
  cmpu(c,0,c->r[3],0x00000001u); // 800D1A80
  if (!crb(c,2)) { goto L_800D1A94; } // 800D1A84
  c->r[0]=0u+0x0000001Au; // 800D1A88
  W16(c->r[31]+0x000003B8u,c->r[0]); // 800D1A8C
  goto L_800D1AC4; // 800D1A90
L_800D1A94:;
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800D1A94
  c->r[3]=0u+0x805D0000u; // 800D1A98
  c->r[0]=R32(c->r[31]+0x00000030u); // 800D1A9C
  c->r[3]=c->r[3]+0x00006CF8u; // 800D1AA0
  c->r[4]=c->r[1]+0x00000008u; // 800D1AA4
  c->r[5]=0u+0x00040000u; // 800D1AA8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D1AAC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D1AB0
  c->r[0]=R32(c->r[31]+0x00000034u); // 800D1AB4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D1AB8
  c->lr=0x800D1AC0u; f_802236F8(c); // 800D1ABC
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800D1AC0
L_800D1AC4:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D1AC4
  c->r[3]=c->r[31]|c->r[31]; // 800D1AC8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D1ACC
  c->ctr=c->r[12]; // 800D1AD0
  if (true) { c->lr=0x800D1AD8u; dispatch(c,c->ctr); } // 800D1AD4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D1AD8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D1ADC
  c->lr=0x800D1AE4u; f_8025037C(c); // 800D1AE0
  goto L_800D1B08; // 800D1AE4
L_800D1AE8:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D1AE8
  c->r[3]=c->r[31]+0x0000002Cu; // 800D1AEC
  c->r[4]=c->r[4]+0x0000005Cu; // 800D1AF0
  c->lr=0x800D1AF8u; f_800361A0(c); // 800D1AF4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D1AF8
  c->r[3]=c->r[31]+0x00000060u; // 800D1AFC
  c->r[4]=c->r[4]+0x00000068u; // 800D1B00
  c->lr=0x800D1B08u; f_800361A0(c); // 800D1B04
L_800D1B08:;
  c->r[3]=c->r[31]|c->r[31]; // 800D1B08
  c->r[4]=0u+0x00000000u; // 800D1B0C
  c->lr=0x800D1B14u; f_801F7C00(c); // 800D1B10
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1B14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D1B18
  c->lr=c->r[0]; // 800D1B1C
  c->r[1]=c->r[1]+0x00000020u; // 800D1B20
  return; // 800D1B24
}

// fn_800D1B28
void f_800D1B28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1B28
  c->r[0]=c->lr; // 800D1B2C
  c->r[5]=0u+0x00000000u; // 800D1B30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1B34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1B38
  c->r[31]=c->r[3]|c->r[3]; // 800D1B3C
  c->r[3]=0u+0x000004D1u; // 800D1B40
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D1B44
  c->r[4]=c->r[4]+0x0000010Cu; // 800D1B48
  c->lr=0x800D1B50u; f_8024EE50(c); // 800D1B4C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1B50
  if (crb(c,2)) { goto L_800D1B60; } // 800D1B54
  c->r[3]=0u+0x00000000u; // 800D1B58
  goto L_800D1B6C; // 800D1B5C
L_800D1B60:;
  c->r[3]=c->r[31]+0x00000210u; // 800D1B60
  c->r[4]=0u+0x000000E1u; // 800D1B64
  c->lr=0x800D1B6Cu; f_80221630(c); // 800D1B68
L_800D1B6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1B6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1B70
  c->lr=c->r[0]; // 800D1B74
  c->r[1]=c->r[1]+0x00000010u; // 800D1B78
  return; // 800D1B7C
}

// fn_800D1B80
void f_800D1B80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1B80
  c->r[0]=c->lr; // 800D1B84
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D1B88
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D1B8C
  c->r[31]=c->r[3]|c->r[3]; // 800D1B90
  c->lr=0x800D1B98u; f_801F4F28(c); // 800D1B94
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800D1B98
  cmps(c,0,(int32_t)c->r[0],101); // 800D1B9C
  if (crb(c,2)) { goto L_800D1BE4; } // 800D1BA0
  if (!crb(c,0)) { goto L_800D1C10; } // 800D1BA4
  cmps(c,0,(int32_t)c->r[0],100); // 800D1BA8
  if (!crb(c,0)) { goto L_800D1BB4; } // 800D1BAC
  goto L_800D1C10; // 800D1BB0
L_800D1BB4:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800D1BB4
  c->r[7]=0u+0x803D0000u; // 800D1BB8
  c->r[3]=c->r[31]|c->r[31]; // 800D1BBC
  c->r[4]=c->r[1]+0x00000014u; // 800D1BC0
  {uint32_t ea=c->r[7]+0x00001C38u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D1BC4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D1BC8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D1BCC
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D1BD0
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D1BD4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D1BD8
  c->lr=0x800D1BE0u; f_800D169C(c); // 800D1BDC
  goto L_800D1C10; // 800D1BE0
L_800D1BE4:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800D1BE4
  c->r[7]=0u+0x803D0000u; // 800D1BE8
  c->r[3]=c->r[31]|c->r[31]; // 800D1BEC
  c->r[4]=c->r[1]+0x00000008u; // 800D1BF0
  {uint32_t ea=c->r[7]+0x00001C44u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D1BF4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D1BF8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D1BFC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D1C00
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D1C04
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D1C08
  c->lr=0x800D1C10u; f_800D169C(c); // 800D1C0C
L_800D1C10:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D1C10
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D1C14
  c->lr=c->r[0]; // 800D1C18
  c->r[1]=c->r[1]+0x00000030u; // 800D1C1C
  return; // 800D1C20
}

// fn_800D1C24
void f_800D1C24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1C24
  c->r[0]=c->lr; // 800D1C28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1C2C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800D1C30
  c->r[5]=c->r[3]+c->r[0]; // 800D1C34
  c->r[3]=c->r[4]|c->r[4]; // 800D1C38
  c->r[4]=R32(c->r[5]+0x00000394u); // 800D1C3C
  c->r[5]=0u+0x00000000u; // 800D1C40
  c->lr=0x800D1C48u; f_80250BF4(c); // 800D1C44
  c->r[0]=cntlz(c->r[3]); // 800D1C48
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D1C4C
  c->r[3]=0u-c->r[0]; // 800D1C50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1C54
  c->lr=c->r[0]; // 800D1C58
  c->r[1]=c->r[1]+0x00000010u; // 800D1C5C
  return; // 800D1C60
}

// fn_800D1C64
void f_800D1C64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1C64
  c->r[0]=c->lr; // 800D1C68
  c->r[5]=0u+0x80620000u; // 800D1C6C
  c->r[4]=0u+0x00000002u; // 800D1C70
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D1C74
  c->r[5]=c->r[5]+0x00007688u; // 800D1C78
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800D1C7C
  W32(c->r[1]+0x00000088u,c->r[30]); // 800D1C80
  c->r[30]=c->r[3]|c->r[3]; // 800D1C84
  c->r[3]=R32(c->r[5]+0x00000014u); // 800D1C88
  c->lr=0x800D1C90u; f_80037670(c); // 800D1C8C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1C90
  if (!crb(c,2)) { goto L_800D1CF8; } // 800D1C94
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D1C98
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800D1C9C
  cmps(c,0,(int32_t)c->r[0],0); // 800D1CA0
  if (!crb(c,2)) { goto L_800D1CF8; } // 800D1CA4
  {uint32_t ea=c->r[2]+0xFFFFA164u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1CA8
  c->r[3]=c->r[1]+0x00000008u; // 800D1CAC
  {uint32_t ea=c->r[2]+0xFFFFA168u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1CB0
  c->r[4]=c->r[30]+0x0000002Cu; // 800D1CB4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 800D1CB8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800D1CBC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800D1CC0
  c->lr=0x800D1CC8u; f_800361A0(c); // 800D1CC4
  c->r[31]=0u+0x80550000u; // 800D1CC8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1CCC
  c->r[31]=c->r[31]+0x00003D60u; // 800D1CD0
  c->r[5]=c->r[30]|c->r[30]; // 800D1CD4
  c->r[3]=c->r[31]+0x00000010u; // 800D1CD8
  c->r[6]=c->r[1]+0x00000008u; // 800D1CDC
  c->r[7]=c->r[1]+0x00000020u; // 800D1CE0
  c->r[4]=0u+0x000001FFu; // 800D1CE4
  c->lr=0x800D1CECu; f_80226910(c); // 800D1CE8
  c->r[3]=c->r[31]+0x00000010u; // 800D1CEC
  c->r[4]=c->r[1]+0x00000020u; // 800D1CF0
  c->lr=0x800D1CF8u; f_80226D68(c); // 800D1CF4
L_800D1CF8:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D1CF8
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800D1CFC
  c->r[30]=R32(c->r[1]+0x00000088u); // 800D1D00
  c->lr=c->r[0]; // 800D1D04
  c->r[1]=c->r[1]+0x00000090u; // 800D1D08
  return; // 800D1D0C
}

// fn_800D1D10
void f_800D1D10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1D10
  c->r[0]=c->lr; // 800D1D14
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800D1D18
  c->r[11]=c->r[1]+0x000000B0u; // 800D1D1C
  c->lr=0x800D1D24u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D1D20
  c->r[0]=R8(c->r[3]+0x00000078u); // 800D1D24
  c->r[31]=c->r[3]|c->r[3]; // 800D1D28
  cmpu(c,0,c->r[0],0x000000FFu); // 800D1D2C
  if (!crb(c,2)) { goto L_800D1F78; } // 800D1D30
  c->r[5]=0u+0x803A0000u; // 800D1D34
  {uint32_t ea=c->r[5]+0xFFFFDF54u; c->r[6]=R32(ea); c->r[5]=ea;} // 800D1D38
  c->r[0]=0u+0x00000000u; // 800D1D3C
  c->r[30]=0u+0x803A0000u; // 800D1D40
  c->r[8]=R32(c->r[5]+0x00000004u); // 800D1D44
  c->r[30]=c->r[30]+0xFFFFDFCCu; // 800D1D48
  c->r[7]=R32(c->r[5]+0x00000008u); // 800D1D4C
  c->r[4]=c->r[30]+0x0000005Eu; // 800D1D50
  W32(c->r[1]+0x00000044u,c->r[6]); // 800D1D54
  c->r[5]=c->r[1]+0x00000060u; // 800D1D58
  c->r[6]=0u+0x00000001u; // 800D1D5C
  W32(c->r[1]+0x00000048u,c->r[8]); // 800D1D60
  W32(c->r[1]+0x0000004Cu,c->r[7]); // 800D1D64
  c->r[3]=R32(c->r[3]+0x00000394u); // 800D1D68
  W32(c->r[1]+0x00000038u,c->r[0]); // 800D1D6C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D1D70
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800D1D74
  W32(c->r[1]+0x00000040u,c->r[0]); // 800D1D78
  c->lr=0x800D1D80u; f_80257018(c); // 800D1D7C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D1D80
  c->r[29]=0u+0x80550000u; // 800D1D84
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1D88
  c->r[3]=c->r[29]+0xFFFFC848u; // 800D1D8C
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1D90
  c->r[4]=c->r[30]+0x00000065u; // 800D1D94
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1D98
  c->r[5]=0u+0x00000000u; // 800D1D9C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[3]);} // 800D1DA0
  c->r[6]=0u+0x00000000u; // 800D1DA4
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[2]);} // 800D1DA8
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 800D1DAC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 800D1DB0
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800D1DB4
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 800D1DB8
  c->lr=0x800D1DC0u; f_8018D3E4(c); // 800D1DBC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800D1DC0
  W8(c->r[31]+0x00000078u,c->r[3]); // 800D1DC4
  cmpu(c,0,c->r[0],0x000000FFu); // 800D1DC8
  if (crb(c,2)) { goto L_800D1E14; } // 800D1DCC
  c->r[10]=R32(c->r[1]+0x00000038u); // 800D1DD0
  c->r[3]=c->r[29]+0xFFFFC848u; // 800D1DD4
  c->r[9]=R32(c->r[1]+0x0000003Cu); // 800D1DD8
  c->r[5]=c->r[1]+0x0000002Cu; // 800D1DDC
  c->r[8]=R32(c->r[1]+0x00000040u); // 800D1DE0
  c->r[6]=c->r[1]+0x00000020u; // 800D1DE4
  c->r[7]=R32(c->r[1]+0x00000050u); // 800D1DE8
  c->r[4]=R32(c->r[1]+0x00000054u); // 800D1DEC
  c->r[0]=R32(c->r[1]+0x00000058u); // 800D1DF0
  W32(c->r[1]+0x00000020u,c->r[10]); // 800D1DF4
  W32(c->r[1]+0x00000024u,c->r[9]); // 800D1DF8
  W32(c->r[1]+0x00000028u,c->r[8]); // 800D1DFC
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800D1E00
  W32(c->r[1]+0x00000030u,c->r[4]); // 800D1E04
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D1E08
  c->r[4]=R8(c->r[31]+0x00000078u); // 800D1E0C
  c->lr=0x800D1E14u; f_8018DBD0(c); // 800D1E10
L_800D1E14:;
  c->r[4]=0u+0x803A0000u; // 800D1E14
  c->r[29]=0u+0x80550000u; // 800D1E18
  c->r[4]=c->r[4]+0xFFFFDFCCu; // 800D1E1C
  c->r[5]=0u+0x00000004u; // 800D1E20
  c->r[3]=c->r[29]+0xFFFFC848u; // 800D1E24
  c->r[6]=0u+0x00000000u; // 800D1E28
  c->r[4]=c->r[4]+0x00000069u; // 800D1E2C
  c->lr=0x800D1E34u; f_8018D3E4(c); // 800D1E30
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800D1E34
  W8(c->r[31]+0x00000079u,c->r[3]); // 800D1E38
  cmpu(c,0,c->r[0],0x000000FFu); // 800D1E3C
  if (crb(c,2)) { goto L_800D1EC8; } // 800D1E40
  c->r[4]=c->r[1]+0x00000044u; // 800D1E44
  c->r[3]=c->r[1]+0x00000060u; // 800D1E48
  c->r[5]=c->r[4]|c->r[4]; // 800D1E4C
  c->lr=0x800D1E54u; f_80296750(c); // 800D1E50
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1E54
  c->r[3]=c->r[29]+0xFFFFC848u; // 800D1E58
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1E5C
  c->r[5]=c->r[1]+0x00000014u; // 800D1E60
  {uint32_t ea=c->r[1]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D1E64
  c->r[6]=c->r[1]+0x00000008u; // 800D1E68
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 800D1E6C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1E70
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1E74
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1E78
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800D1E7C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[4]);} // 800D1E80
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D1E84
  c->r[10]=R32(c->r[1]+0x00000038u); // 800D1E88
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 800D1E8C
  c->r[9]=R32(c->r[1]+0x0000003Cu); // 800D1E90
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800D1E94
  c->r[8]=R32(c->r[1]+0x00000040u); // 800D1E98
  c->r[7]=R32(c->r[1]+0x00000044u); // 800D1E9C
  c->r[4]=R32(c->r[1]+0x00000048u); // 800D1EA0
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800D1EA4
  W32(c->r[1]+0x00000008u,c->r[10]); // 800D1EA8
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 800D1EAC
  W32(c->r[1]+0x00000010u,c->r[8]); // 800D1EB0
  W32(c->r[1]+0x00000014u,c->r[7]); // 800D1EB4
  W32(c->r[1]+0x00000018u,c->r[4]); // 800D1EB8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D1EBC
  c->r[4]=R8(c->r[31]+0x00000079u); // 800D1EC0
  c->lr=0x800D1EC8u; f_8018DBD0(c); // 800D1EC4
L_800D1EC8:;
  c->r[3]=c->r[31]|c->r[31]; // 800D1EC8
  c->r[4]=0u+0x00000004u; // 800D1ECC
  c->r[5]=0u+0x00000005u; // 800D1ED0
  c->r[6]=0u+0x00000001u; // 800D1ED4
  c->r[7]=0u+0x00000001u; // 800D1ED8
  c->lr=0x800D1EE0u; f_8017900C(c); // 800D1EDC
  c->r[30]=0u+0x803D0000u; // 800D1EE0
  W32(c->r[31]+0x00000088u,c->r[3]); // 800D1EE4
  c->r[30]=c->r[30]+0x00001C00u; // 800D1EE8
  c->r[27]=0u+0x00000000u; // 800D1EEC
  c->r[29]=0u+0x805D0000u; // 800D1EF0
L_800D1EF4:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D1EF4
  c->r[28]=rotl(c->r[27],2)&0x000003FCu; // 800D1EF8
  c->r[3]=c->r[29]+0x000078B0u; // 800D1EFC
  c->r[4]=0u+0x00000000u; // 800D1F00
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D1F04
  c->r[6]=0u+0x00000001u; // 800D1F08
  c->r[0]=c->r[28]+c->r[0]; // 800D1F0C
  c->r[5]=R32(c->r[30]+c->r[0]); // 800D1F10
  c->lr=0x800D1F18u; f_80234260(c); // 800D1F14
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D1F18
  c->r[3]=c->r[29]+0x000078B0u; // 800D1F1C
  c->r[4]=0u+0x00000001u; // 800D1F20
  c->r[6]=0u+0x00000001u; // 800D1F24
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D1F28
  c->r[0]=c->r[28]+c->r[0]; // 800D1F2C
  c->r[5]=R32(c->r[30]+c->r[0]); // 800D1F30
  c->lr=0x800D1F38u; f_80234260(c); // 800D1F34
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D1F38
  c->r[3]=c->r[29]+0x000078B0u; // 800D1F3C
  c->r[4]=0u+0x00000002u; // 800D1F40
  c->r[6]=0u+0x00000001u; // 800D1F44
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D1F48
  c->r[0]=c->r[28]+c->r[0]; // 800D1F4C
  c->r[5]=R32(c->r[30]+c->r[0]); // 800D1F50
  c->lr=0x800D1F58u; f_80234260(c); // 800D1F54
  c->r[27]=c->r[27]+0x00000001u; // 800D1F58
  cmpu(c,0,c->r[27],0x00000004u); // 800D1F5C
  if (crb(c,0)) { IRQCHK(c); goto L_800D1EF4; } // 800D1F60
  c->r[3]=c->r[31]|c->r[31]; // 800D1F64
  c->lr=0x800D1F6Cu; f_800AFE14(c); // 800D1F68
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1F6C
  c->r[3]=c->r[31]+0x0000000Cu; // 800D1F70
  c->lr=0x800D1F78u; f_80037668(c); // 800D1F74
L_800D1F78:;
  c->r[11]=c->r[1]+0x000000B0u; // 800D1F78
  c->lr=0x800D1F80u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D1F7C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800D1F80
  c->lr=c->r[0]; // 800D1F84
  c->r[1]=c->r[1]+0x000000B0u; // 800D1F88
  return; // 800D1F8C
}

// fn_800D1F90
void f_800D1F90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1F90
  c->r[0]=c->lr; // 800D1F94
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D1F98
  c->r[11]=c->r[1]+0x00000030u; // 800D1F9C
  c->lr=0x800D1FA4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D1FA0
  c->r[31]=c->r[3]|c->r[3]; // 800D1FA4
  c->lr=0x800D1FACu; f_80037B04(c); // 800D1FA8
  cmps(c,0,(int32_t)c->r[3],0); // 800D1FAC
  if (crb(c,2)) { goto L_800D218C; } // 800D1FB0
  c->r[4]=R8(c->r[31]+0x00000078u); // 800D1FB4
  cmpu(c,0,c->r[4],0x000000FFu); // 800D1FB8
  if (crb(c,2)) { goto L_800D1FCC; } // 800D1FBC
  c->r[3]=0u+0x80550000u; // 800D1FC0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D1FC4
  c->lr=0x800D1FCCu; f_8018D694(c); // 800D1FC8
L_800D1FCC:;
  c->r[4]=R8(c->r[31]+0x00000079u); // 800D1FCC
  cmpu(c,0,c->r[4],0x000000FFu); // 800D1FD0
  if (crb(c,2)) { goto L_800D1FE4; } // 800D1FD4
  c->r[3]=0u+0x80550000u; // 800D1FD8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D1FDC
  c->lr=0x800D1FE4u; f_8018D694(c); // 800D1FE0
L_800D1FE4:;
  c->r[4]=0u+0x803A0000u; // 800D1FE4
  c->r[3]=0u+0x80550000u; // 800D1FE8
  c->r[4]=c->r[4]+0xFFFFDFCCu; // 800D1FEC
  c->r[5]=0u+0x00000000u; // 800D1FF0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D1FF4
  c->r[6]=0u+0x00000000u; // 800D1FF8
  c->r[4]=c->r[4]+0x0000006Du; // 800D1FFC
  c->lr=0x800D2004u; f_8018D3E4(c); // 800D2000
  W8(c->r[31]+0x0000007Bu,c->r[3]); // 800D2004
  c->r[3]=c->r[31]+0x00000010u; // 800D2008
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D200C
  c->lr=0x800D2014u; f_80037668(c); // 800D2010
  c->r[3]=0u+0x805D0000u; // 800D2014
  c->r[4]=R32(c->r[31]+0x00000088u); // 800D2018
  c->r[3]=c->r[3]+0x00006D70u; // 800D201C
  c->lr=0x800D2024u; f_8022B034(c); // 800D2020
  c->r[0]=0u+0x00000000u; // 800D2024
  c->r[30]=0u+0x803D0000u; // 800D2028
  W32(c->r[31]+0x00000088u,c->r[0]); // 800D202C
  c->r[30]=c->r[30]+0x00001C00u; // 800D2030
  c->r[27]=0u+0x00000000u; // 800D2034
  c->r[29]=0u+0x805D0000u; // 800D2038
L_800D203C:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D203C
  c->r[28]=rotl(c->r[27],2)&0x000003FCu; // 800D2040
  c->r[3]=c->r[29]+0x000078B0u; // 800D2044
  c->r[4]=0u+0x00000000u; // 800D2048
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D204C
  c->r[6]=0u+0x00000000u; // 800D2050
  c->r[0]=c->r[28]+c->r[0]; // 800D2054
  c->r[5]=R32(c->r[30]+c->r[0]); // 800D2058
  c->lr=0x800D2060u; f_80234260(c); // 800D205C
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D2060
  c->r[3]=c->r[29]+0x000078B0u; // 800D2064
  c->r[4]=0u+0x00000001u; // 800D2068
  c->r[6]=0u+0x00000000u; // 800D206C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D2070
  c->r[0]=c->r[28]+c->r[0]; // 800D2074
  c->r[5]=R32(c->r[30]+c->r[0]); // 800D2078
  c->lr=0x800D2080u; f_80234260(c); // 800D207C
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D2080
  c->r[3]=c->r[29]+0x000078B0u; // 800D2084
  c->r[4]=0u+0x00000002u; // 800D2088
  c->r[6]=0u+0x00000000u; // 800D208C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D2090
  c->r[0]=c->r[28]+c->r[0]; // 800D2094
  c->r[5]=R32(c->r[30]+c->r[0]); // 800D2098
  c->lr=0x800D20A0u; f_80234260(c); // 800D209C
  c->r[27]=c->r[27]+0x00000001u; // 800D20A0
  cmpu(c,0,c->r[27],0x00000004u); // 800D20A4
  if (crb(c,0)) { IRQCHK(c); goto L_800D203C; } // 800D20A8
  c->r[8]=0u+0x803A0000u; // 800D20AC
  {uint32_t ea=c->r[8]+0xFFFFDF60u; c->r[7]=R32(ea); c->r[8]=ea;} // 800D20B0
  c->r[3]=0u+0x803A0000u; // 800D20B4
  c->r[5]=c->r[1]+0x00000008u; // 800D20B8
  c->r[3]=c->r[3]+0xFFFFDFCCu; // 800D20BC
  c->r[6]=R32(c->r[8]+0x00000004u); // 800D20C0
  c->r[4]=c->r[3]+0x00000058u; // 800D20C4
  c->r[3]=R32(c->r[8]+0x00000008u); // 800D20C8
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 800D20CC
  W32(c->r[1]+0x00000008u,c->r[7]); // 800D20D0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800D20D4
  W32(c->r[1]+0x00000010u,c->r[3]); // 800D20D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D20DC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D20E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D20E4
  c->lr=0x800D20ECu; f_8025892C(c); // 800D20E8
  c->r[0]=0u+0x000000FFu; // 800D20EC
  c->r[3]=c->r[31]|c->r[31]; // 800D20F0
  W8(c->r[31]+0x00000078u,c->r[0]); // 800D20F4
  W8(c->r[31]+0x00000079u,c->r[0]); // 800D20F8
  c->lr=0x800D2100u; f_80050680(c); // 800D20FC
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2100
  c->r[3]=c->r[31]+0x0000000Cu; // 800D2104
  c->lr=0x800D210Cu; f_80037668(c); // 800D2108
  c->r[31]=0u+0x80620000u; // 800D210C
  c->r[4]=0u+0x00000003u; // 800D2110
  c->r[31]=c->r[31]+0x00007688u; // 800D2114
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D2118
  c->lr=0x800D2120u; f_80083604(c); // 800D211C
  cmps(c,0,(int32_t)c->r[3],0); // 800D2120
  if (crb(c,2)) { goto L_800D214C; } // 800D2124
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D2128
  c->r[4]=0u+0x00000003u; // 800D212C
  c->lr=0x800D2134u; f_8008358C(c); // 800D2130
  cmps(c,0,(int32_t)c->r[3],0); // 800D2134
  if (!crb(c,2)) { goto L_800D214C; } // 800D2138
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D213C
  c->r[4]=0u+0x00000003u; // 800D2140
  c->r[5]=0u+0x00002710u; // 800D2144
  c->lr=0x800D214Cu; f_80083504(c); // 800D2148
L_800D214C:;
  c->r[31]=0u+0x80620000u; // 800D214C
  c->r[4]=0u+0x00000004u; // 800D2150
  c->r[31]=c->r[31]+0x00007688u; // 800D2154
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D2158
  c->lr=0x800D2160u; f_80083604(c); // 800D215C
  cmps(c,0,(int32_t)c->r[3],0); // 800D2160
  if (crb(c,2)) { goto L_800D218C; } // 800D2164
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D2168
  c->r[4]=0u+0x00000004u; // 800D216C
  c->lr=0x800D2174u; f_8008358C(c); // 800D2170
  cmps(c,0,(int32_t)c->r[3],0); // 800D2174
  if (!crb(c,2)) { goto L_800D218C; } // 800D2178
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D217C
  c->r[4]=0u+0x00000004u; // 800D2180
  c->r[5]=0u+0x000061A8u; // 800D2184
  c->lr=0x800D218Cu; f_80083504(c); // 800D2188
L_800D218C:;
  c->r[11]=c->r[1]+0x00000030u; // 800D218C
  c->lr=0x800D2194u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D2190
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D2194
  c->lr=c->r[0]; // 800D2198
  c->r[1]=c->r[1]+0x00000030u; // 800D219C
  return; // 800D21A0
}

// fn_800D21A4
void f_800D21A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D21A4
  c->r[0]=c->lr; // 800D21A8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800D21AC
  c->r[11]=c->r[1]+0x000000B0u; // 800D21B0
  c->lr=0x800D21B8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D21B4
  c->r[31]=c->r[3]|c->r[3]; // 800D21B8
  c->lr=0x800D21C0u; f_80037B04(c); // 800D21BC
  cmps(c,0,(int32_t)c->r[3],0); // 800D21C0
  if (crb(c,2)) { goto L_800D2440; } // 800D21C4
  c->r[4]=R8(c->r[31]+0x00000078u); // 800D21C8
  cmpu(c,0,c->r[4],0x000000FFu); // 800D21CC
  if (crb(c,2)) { goto L_800D21E0; } // 800D21D0
  c->r[3]=0u+0x80550000u; // 800D21D4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D21D8
  c->lr=0x800D21E0u; f_8018D694(c); // 800D21DC
L_800D21E0:;
  c->r[4]=R8(c->r[31]+0x00000079u); // 800D21E0
  cmpu(c,0,c->r[4],0x000000FFu); // 800D21E4
  if (crb(c,2)) { goto L_800D21F8; } // 800D21E8
  c->r[3]=0u+0x80550000u; // 800D21EC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D21F0
  c->lr=0x800D21F8u; f_8018D694(c); // 800D21F4
L_800D21F8:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D21F8
  c->r[30]=0u+0x803A0000u; // 800D21FC
  c->r[30]=c->r[30]+0xFFFFDFCCu; // 800D2200
  c->r[5]=c->r[1]+0x00000068u; // 800D2204
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2208
  c->r[4]=c->r[30]+0x0000005Eu; // 800D220C
  c->r[6]=0u+0x00000001u; // 800D2210
  c->lr=0x800D2218u; f_80257018(c); // 800D2214
  c->r[3]=c->r[1]+0x00000058u; // 800D2218
  c->r[4]=c->r[1]+0x0000004Cu; // 800D221C
  c->r[5]=c->r[1]+0x00000040u; // 800D2220
  c->r[6]=c->r[1]+0x00000068u; // 800D2224
  c->r[7]=0u+0x00000000u; // 800D2228
  c->lr=0x800D2230u; f_8002BE64(c); // 800D222C
  c->r[4]=0u+0x803A0000u; // 800D2230
  c->r[3]=c->r[1]+0x0000004Cu; // 800D2234
  c->r[4]=c->r[4]+0xFFFFDEF8u; // 800D2238
  c->lr=0x800D2240u; f_800361A0(c); // 800D223C
  c->r[29]=0u+0x80550000u; // 800D2240
  c->r[4]=c->r[30]+0x00000071u; // 800D2244
  c->r[3]=c->r[29]+0xFFFFC848u; // 800D2248
  c->r[5]=0u+0x00000000u; // 800D224C
  c->r[6]=0u+0x00000000u; // 800D2250
  c->lr=0x800D2258u; f_8018D3E4(c); // 800D2254
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800D2258
  W8(c->r[31]+0x00000078u,c->r[3]); // 800D225C
  cmpu(c,0,c->r[0],0x000000FFu); // 800D2260
  if (crb(c,2)) { goto L_800D22C8; } // 800D2264
  c->r[30]=R32(c->r[1]+0x00000040u); // 800D2268
  c->r[3]=c->r[29]+0xFFFFC848u; // 800D226C
  c->r[29]=R32(c->r[1]+0x00000044u); // 800D2270
  c->r[5]=c->r[1]+0x00000020u; // 800D2274
  c->r[12]=R32(c->r[1]+0x00000048u); // 800D2278
  c->r[6]=c->r[1]+0x00000014u; // 800D227C
  c->r[11]=R32(c->r[1]+0x0000004Cu); // 800D2280
  c->r[7]=c->r[1]+0x00000008u; // 800D2284
  c->r[10]=R32(c->r[1]+0x00000050u); // 800D2288
  c->r[9]=R32(c->r[1]+0x00000054u); // 800D228C
  c->r[8]=R32(c->r[1]+0x00000058u); // 800D2290
  c->r[4]=R32(c->r[1]+0x0000005Cu); // 800D2294
  c->r[0]=R32(c->r[1]+0x00000060u); // 800D2298
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D229C
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 800D22A0
  W32(c->r[1]+0x00000010u,c->r[12]); // 800D22A4
  W32(c->r[1]+0x00000014u,c->r[11]); // 800D22A8
  W32(c->r[1]+0x00000018u,c->r[10]); // 800D22AC
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800D22B0
  W32(c->r[1]+0x00000020u,c->r[8]); // 800D22B4
  W32(c->r[1]+0x00000024u,c->r[4]); // 800D22B8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D22BC
  c->r[4]=R8(c->r[31]+0x00000078u); // 800D22C0
  c->lr=0x800D22C8u; f_8018DD04(c); // 800D22C4
L_800D22C8:;
  c->r[3]=0u+0x805D0000u; // 800D22C8
  c->r[4]=R32(c->r[31]+0x00000088u); // 800D22CC
  c->r[3]=c->r[3]+0x00006D70u; // 800D22D0
  c->lr=0x800D22D8u; f_8022B034(c); // 800D22D4
  c->r[0]=0u+0x00000000u; // 800D22D8
  c->r[30]=0u+0x803D0000u; // 800D22DC
  W32(c->r[31]+0x00000088u,c->r[0]); // 800D22E0
  c->r[30]=c->r[30]+0x00001C00u; // 800D22E4
  c->r[27]=0u+0x00000000u; // 800D22E8
  c->r[29]=0u+0x805D0000u; // 800D22EC
L_800D22F0:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D22F0
  c->r[28]=rotl(c->r[27],2)&0x000003FCu; // 800D22F4
  c->r[3]=c->r[29]+0x000078B0u; // 800D22F8
  c->r[4]=0u+0x00000000u; // 800D22FC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D2300
  c->r[6]=0u+0x00000000u; // 800D2304
  c->r[0]=c->r[28]+c->r[0]; // 800D2308
  c->r[5]=R32(c->r[30]+c->r[0]); // 800D230C
  c->lr=0x800D2314u; f_80234260(c); // 800D2310
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D2314
  c->r[3]=c->r[29]+0x000078B0u; // 800D2318
  c->r[4]=0u+0x00000001u; // 800D231C
  c->r[6]=0u+0x00000000u; // 800D2320
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D2324
  c->r[0]=c->r[28]+c->r[0]; // 800D2328
  c->r[5]=R32(c->r[30]+c->r[0]); // 800D232C
  c->lr=0x800D2334u; f_80234260(c); // 800D2330
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D2334
  c->r[3]=c->r[29]+0x000078B0u; // 800D2338
  c->r[4]=0u+0x00000002u; // 800D233C
  c->r[6]=0u+0x00000000u; // 800D2340
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D2344
  c->r[0]=c->r[28]+c->r[0]; // 800D2348
  c->r[5]=R32(c->r[30]+c->r[0]); // 800D234C
  c->lr=0x800D2354u; f_80234260(c); // 800D2350
  c->r[27]=c->r[27]+0x00000001u; // 800D2354
  cmpu(c,0,c->r[27],0x00000004u); // 800D2358
  if (crb(c,0)) { IRQCHK(c); goto L_800D22F0; } // 800D235C
  c->r[8]=0u+0x803A0000u; // 800D2360
  {uint32_t ea=c->r[8]+0xFFFFDF70u; c->r[7]=R32(ea); c->r[8]=ea;} // 800D2364
  c->r[3]=0u+0x803A0000u; // 800D2368
  c->r[5]=c->r[1]+0x00000030u; // 800D236C
  c->r[3]=c->r[3]+0xFFFFDFCCu; // 800D2370
  c->r[6]=R32(c->r[8]+0x00000004u); // 800D2374
  c->r[4]=c->r[3]+0x00000058u; // 800D2378
  c->r[3]=R32(c->r[8]+0x00000008u); // 800D237C
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 800D2380
  W32(c->r[1]+0x00000030u,c->r[7]); // 800D2384
  W32(c->r[1]+0x00000034u,c->r[6]); // 800D2388
  W32(c->r[1]+0x00000038u,c->r[3]); // 800D238C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800D2390
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D2394
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2398
  c->lr=0x800D23A0u; f_8025892C(c); // 800D239C
  c->r[0]=0u+0x000000FFu; // 800D23A0
  c->r[3]=c->r[31]|c->r[31]; // 800D23A4
  W8(c->r[31]+0x00000078u,c->r[0]); // 800D23A8
  W8(c->r[31]+0x00000079u,c->r[0]); // 800D23AC
  c->lr=0x800D23B4u; f_80050680(c); // 800D23B0
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D23B4
  c->r[3]=c->r[31]+0x0000000Cu; // 800D23B8
  c->lr=0x800D23C0u; f_80037668(c); // 800D23BC
  c->r[31]=0u+0x80620000u; // 800D23C0
  c->r[4]=0u+0x00000003u; // 800D23C4
  c->r[31]=c->r[31]+0x00007688u; // 800D23C8
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D23CC
  c->lr=0x800D23D4u; f_80083604(c); // 800D23D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D23D4
  if (crb(c,2)) { goto L_800D2400; } // 800D23D8
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D23DC
  c->r[4]=0u+0x00000003u; // 800D23E0
  c->lr=0x800D23E8u; f_8008358C(c); // 800D23E4
  cmps(c,0,(int32_t)c->r[3],0); // 800D23E8
  if (!crb(c,2)) { goto L_800D2400; } // 800D23EC
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D23F0
  c->r[4]=0u+0x00000003u; // 800D23F4
  c->r[5]=0u+0x00002710u; // 800D23F8
  c->lr=0x800D2400u; f_80083504(c); // 800D23FC
L_800D2400:;
  c->r[31]=0u+0x80620000u; // 800D2400
  c->r[4]=0u+0x00000004u; // 800D2404
  c->r[31]=c->r[31]+0x00007688u; // 800D2408
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D240C
  c->lr=0x800D2414u; f_80083604(c); // 800D2410
  cmps(c,0,(int32_t)c->r[3],0); // 800D2414
  if (crb(c,2)) { goto L_800D2440; } // 800D2418
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D241C
  c->r[4]=0u+0x00000004u; // 800D2420
  c->lr=0x800D2428u; f_8008358C(c); // 800D2424
  cmps(c,0,(int32_t)c->r[3],0); // 800D2428
  if (!crb(c,2)) { goto L_800D2440; } // 800D242C
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D2430
  c->r[4]=0u+0x00000004u; // 800D2434
  c->r[5]=0u+0x000061A8u; // 800D2438
  c->lr=0x800D2440u; f_80083504(c); // 800D243C
L_800D2440:;
  c->r[11]=c->r[1]+0x000000B0u; // 800D2440
  c->lr=0x800D2448u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D2444
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800D2448
  c->lr=c->r[0]; // 800D244C
  c->r[1]=c->r[1]+0x000000B0u; // 800D2450
  return; // 800D2454
}

// fn_800D2458
void f_800D2458(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2458
  c->r[0]=c->lr; // 800D245C
  cmps(c,0,(int32_t)c->r[4],0); // 800D2460
  W32(c->r[1]+0x00000084u,c->r[0]); // 800D2464
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800D2468
  W32(c->r[1]+0x00000078u,c->r[30]); // 800D246C
  W32(c->r[1]+0x00000074u,c->r[29]); // 800D2470
  c->r[29]=c->r[3]|c->r[3]; // 800D2474
  if (crb(c,2)) { goto L_800D2568; } // 800D2478
  c->lr=0x800D2480u; f_80037B04(c); // 800D247C
  cmps(c,0,(int32_t)c->r[3],0); // 800D2480
  if (!crb(c,2)) { goto L_800D25A0; } // 800D2484
  c->r[0]=R8(c->r[29]+0x0000007Au); // 800D2488
  cmpu(c,0,c->r[0],0x000000FFu); // 800D248C
  if (!crb(c,2)) { goto L_800D25A0; } // 800D2490
  c->r[3]=R32(c->r[29]+0x00000394u); // 800D2494
  c->r[0]=0u+0x00000000u; // 800D2498
  c->r[30]=0u+0x803A0000u; // 800D249C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800D24A0
  c->r[30]=c->r[30]+0xFFFFDFCCu; // 800D24A4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D24A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D24AC
  c->r[4]=c->r[30]+0x0000005Eu; // 800D24B0
  c->r[5]=c->r[1]+0x00000038u; // 800D24B4
  c->r[6]=0u+0x00000001u; // 800D24B8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D24BC
  c->lr=0x800D24C4u; f_80257018(c); // 800D24C0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D24C4
  c->r[31]=0u+0x80550000u; // 800D24C8
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D24CC
  c->r[3]=c->r[31]+0xFFFFC848u; // 800D24D0
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D24D4
  c->r[4]=c->r[30]+0x00000075u; // 800D24D8
  {uint32_t ea=c->r[1]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D24DC
  c->r[5]=0u+0x00000000u; // 800D24E0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[3]);} // 800D24E4
  c->r[6]=0u+0x00000000u; // 800D24E8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 800D24EC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 800D24F0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800D24F4
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800D24F8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 800D24FC
  c->lr=0x800D2504u; f_8018D3E4(c); // 800D2500
  W8(c->r[29]+0x0000007Au,c->r[3]); // 800D2504
  c->r[3]=c->r[29]|c->r[29]; // 800D2508
  c->r[4]=0u+0x00000004u; // 800D250C
  c->r[5]=0u+0x0000003Cu; // 800D2510
  c->r[6]=0u+0x00000001u; // 800D2514
  c->r[7]=0u+0x00000001u; // 800D2518
  c->lr=0x800D2520u; f_8017900C(c); // 800D251C
  c->r[10]=R32(c->r[1]+0x00000020u); // 800D2520
  c->r[3]=c->r[31]+0xFFFFC848u; // 800D2524
  c->r[9]=R32(c->r[1]+0x00000024u); // 800D2528
  c->r[5]=c->r[1]+0x00000014u; // 800D252C
  c->r[8]=R32(c->r[1]+0x00000028u); // 800D2530
  c->r[6]=c->r[1]+0x00000008u; // 800D2534
  c->r[7]=R32(c->r[1]+0x0000002Cu); // 800D2538
  c->r[4]=R32(c->r[1]+0x00000030u); // 800D253C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D2540
  W32(c->r[1]+0x00000008u,c->r[10]); // 800D2544
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 800D2548
  W32(c->r[1]+0x00000010u,c->r[8]); // 800D254C
  W32(c->r[1]+0x00000014u,c->r[7]); // 800D2550
  W32(c->r[1]+0x00000018u,c->r[4]); // 800D2554
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D2558
  c->r[4]=R8(c->r[29]+0x0000007Au); // 800D255C
  c->lr=0x800D2564u; f_8018DBD0(c); // 800D2560
  goto L_800D25A0; // 800D2564
L_800D2568:;
  c->r[0]=R8(c->r[3]+0x0000007Au); // 800D2568
  cmpu(c,0,c->r[0],0x000000FFu); // 800D256C
  if (crb(c,2)) { goto L_800D25A0; } // 800D2570
  c->r[4]=0u+0x00000004u; // 800D2574
  c->r[5]=0u+0x0000003Du; // 800D2578
  c->r[6]=0u+0x00000001u; // 800D257C
  c->r[7]=0u+0x00000001u; // 800D2580
  c->lr=0x800D2588u; f_8017900C(c); // 800D2584
  c->r[3]=0u+0x80550000u; // 800D2588
  c->r[4]=R8(c->r[29]+0x0000007Au); // 800D258C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D2590
  c->lr=0x800D2598u; f_8018D738(c); // 800D2594
  c->r[0]=0u+0x000000FFu; // 800D2598
  W8(c->r[29]+0x0000007Au,c->r[0]); // 800D259C
L_800D25A0:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800D25A0
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800D25A4
  c->r[30]=R32(c->r[1]+0x00000078u); // 800D25A8
  c->r[29]=R32(c->r[1]+0x00000074u); // 800D25AC
  c->lr=c->r[0]; // 800D25B0
  c->r[1]=c->r[1]+0x00000080u; // 800D25B4
  return; // 800D25B8
}

// fn_800D25BC
void f_800D25BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D25BC
  c->r[0]=c->lr; // 800D25C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D25C4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D25C8
  c->r[31]=0u+0x803D0000u; // 800D25CC
  c->r[27]=c->r[3]|c->r[3]; // 800D25D0
  c->r[28]=0u+0x00000000u; // 800D25D4
  c->r[31]=c->r[31]+0x00001C00u; // 800D25D8
  c->r[30]=0u+0x805D0000u; // 800D25DC
L_800D25E0:;
  c->r[0]=R8(c->r[27]+0x0000006Eu); // 800D25E0
  c->r[29]=rotl(c->r[28],2)&0x000003FCu; // 800D25E4
  c->r[3]=c->r[30]+0x000078B0u; // 800D25E8
  c->r[4]=0u+0x00000000u; // 800D25EC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D25F0
  c->r[6]=0u+0x00000000u; // 800D25F4
  c->r[0]=c->r[29]+c->r[0]; // 800D25F8
  c->r[5]=R32(c->r[31]+c->r[0]); // 800D25FC
  c->lr=0x800D2604u; f_80234260(c); // 800D2600
  c->r[0]=R8(c->r[27]+0x0000006Eu); // 800D2604
  c->r[3]=c->r[30]+0x000078B0u; // 800D2608
  c->r[4]=0u+0x00000001u; // 800D260C
  c->r[6]=0u+0x00000000u; // 800D2610
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D2614
  c->r[0]=c->r[29]+c->r[0]; // 800D2618
  c->r[5]=R32(c->r[31]+c->r[0]); // 800D261C
  c->lr=0x800D2624u; f_80234260(c); // 800D2620
  c->r[0]=R8(c->r[27]+0x0000006Eu); // 800D2624
  c->r[3]=c->r[30]+0x000078B0u; // 800D2628
  c->r[4]=0u+0x00000002u; // 800D262C
  c->r[6]=0u+0x00000000u; // 800D2630
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D2634
  c->r[0]=c->r[29]+c->r[0]; // 800D2638
  c->r[5]=R32(c->r[31]+c->r[0]); // 800D263C
  c->lr=0x800D2644u; f_80234260(c); // 800D2640
  c->r[28]=c->r[28]+0x00000001u; // 800D2644
  cmpu(c,0,c->r[28],0x00000004u); // 800D2648
  if (crb(c,0)) { IRQCHK(c); goto L_800D25E0; } // 800D264C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2650
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2654
  c->lr=c->r[0]; // 800D2658
  c->r[1]=c->r[1]+0x00000020u; // 800D265C
  return; // 800D2660
}

// fn_800D2664
void f_800D2664(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2664
  c->r[0]=c->lr; // 800D2668
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D266C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2670
  c->r[31]=c->r[3]|c->r[3]; // 800D2674
  c->r[0]=R32(c->r[3]+0x00000088u); // 800D2678
  cmps(c,0,(int32_t)c->r[0],0); // 800D267C
  if (!crb(c,2)) { goto L_800D269C; } // 800D2680
  c->r[4]=0u+0x00000004u; // 800D2684
  c->r[5]=0u+0x00000005u; // 800D2688
  c->r[6]=0u+0x00000001u; // 800D268C
  c->r[7]=0u+0x00000001u; // 800D2690
  c->lr=0x800D2698u; f_8017900C(c); // 800D2694
  W32(c->r[31]+0x00000088u,c->r[3]); // 800D2698
L_800D269C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D269C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D26A0
  c->lr=c->r[0]; // 800D26A4
  c->r[1]=c->r[1]+0x00000010u; // 800D26A8
  return; // 800D26AC
}

// fn_800D26B0
void f_800D26B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D26B0
  c->r[0]=c->lr; // 800D26B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D26B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D26BC
  c->r[31]=c->r[3]|c->r[3]; // 800D26C0
  c->r[4]=R32(c->r[3]+0x00000088u); // 800D26C4
  cmps(c,0,(int32_t)c->r[4],0); // 800D26C8
  if (crb(c,2)) { goto L_800D26DC; } // 800D26CC
  c->r[3]=0u+0x805D0000u; // 800D26D0
  c->r[3]=c->r[3]+0x00006D70u; // 800D26D4
  c->lr=0x800D26DCu; f_8022B034(c); // 800D26D8
L_800D26DC:;
  c->r[0]=0u+0x00000000u; // 800D26DC
  W32(c->r[31]+0x00000088u,c->r[0]); // 800D26E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D26E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D26E8
  c->lr=c->r[0]; // 800D26EC
  c->r[1]=c->r[1]+0x00000010u; // 800D26F0
  return; // 800D26F4
}

// fn_800D26F8
void f_800D26F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D26F8
  c->r[0]=c->lr; // 800D26FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2700
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2704
  c->r[31]=c->r[3]|c->r[3]; // 800D2708
  c->r[3]=c->r[3]+0x00000210u; // 800D270C
  c->lr=0x800D2714u; f_8004BAD4(c); // 800D2710
  cmps(c,0,(int32_t)c->r[3],0); // 800D2714
  if (crb(c,2)) { goto L_800D279C; } // 800D2718
  c->r[0]=R32(c->r[31]+0x00000210u); // 800D271C
  c->r[4]=c->r[31]|c->r[31]; // 800D2720
  c->r[3]=c->r[31]+0x00000210u; // 800D2724
  c->r[0]=c->r[0]|0xAA800000u; // 800D2728
  W32(c->r[31]+0x00000210u,c->r[0]); // 800D272C
  c->lr=0x800D2734u; f_80043E44(c); // 800D2730
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2734
  c->r[3]=c->r[31]+0x00000210u; // 800D2738
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D273C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2740
  c->lr=0x800D2748u; f_80043E34(c); // 800D2744
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D2748
  c->r[4]=0u+0x803A0000u; // 800D274C
  c->r[4]=c->r[4]+0xFFFFDFCCu; // 800D2750
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2754
  c->r[4]=c->r[4]+0x00000079u; // 800D2758
  c->lr=0x800D2760u; f_80256EC4(c); // 800D275C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D2760
  c->r[5]=c->r[3]|c->r[3]; // 800D2764
  c->r[3]=c->r[31]+0x00000210u; // 800D2768
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800D276C
  c->lr=0x800D2774u; f_8004BAC8(c); // 800D2770
  {uint32_t ea=c->r[2]+0xFFFFA16Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2774
  c->r[3]=c->r[31]+0x00000210u; // 800D2778
  c->f[2]=c->f[1]; // 800D277C
  c->f[3]=c->f[1]; // 800D2780
  c->lr=0x800D2788u; f_80043E24(c); // 800D2784
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2788
  c->r[3]=c->r[31]+0x00000210u; // 800D278C
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D2790
  c->f[3]=c->f[1]; // 800D2794
  c->lr=0x800D279Cu; f_8005D58C(c); // 800D2798
L_800D279C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D279C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D27A0
  c->lr=c->r[0]; // 800D27A4
  c->r[1]=c->r[1]+0x00000010u; // 800D27A8
  return; // 800D27AC
}

// fn_800D27B0
void f_800D27B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D27B0
  c->r[0]=c->lr; // 800D27B4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D27B8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800D27BC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800D27C0
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800D27C4
  c->r[31]=0u+0x803A0000u; // 800D27C8
  c->r[31]=c->r[31]+0xFFFFDEF8u; // 800D27CC
  W32(c->r[1]+0x00000078u,c->r[30]); // 800D27D0
  c->r[30]=c->r[3]|c->r[3]; // 800D27D4
  c->r[3]=c->r[3]+0x00000210u; // 800D27D8
  c->lr=0x800D27E0u; f_80221698(c); // 800D27DC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D27E0
  cmps(c,0,(int32_t)c->r[3],0); // 800D27E4
  if (crb(c,2)) { goto L_800D2808; } // 800D27E8
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800D27EC
  cmps(c,0,(int32_t)c->r[0],0); // 800D27F0
  if (crb(c,2)) { goto L_800D2808; } // 800D27F4
  c->r[0]=R32(c->r[30]+0x00000210u); // 800D27F8
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800D27FC
  W32(c->r[30]+0x00000210u,c->r[0]); // 800D2800
  goto L_800D2A44; // 800D2804
L_800D2808:;
  c->r[0]=R32(c->r[30]+0x00000210u); // 800D2808
  c->r[7]=c->r[31]+0x00000088u; // 800D280C
  c->r[6]=c->r[31]+0x00000094u; // 800D2810
  c->r[3]=c->r[1]+0x00000020u; // 800D2814
  c->r[0]=c->r[0]|0x80000000u; // 800D2818
  c->r[4]=c->r[1]+0x00000014u; // 800D281C
  W32(c->r[30]+0x00000210u,c->r[0]); // 800D2820
  c->r[5]=c->r[1]+0x00000038u; // 800D2824
  c->r[11]=R32(c->r[31]+0x00000088u); // 800D2828
  c->r[10]=R32(c->r[7]+0x00000004u); // 800D282C
  c->r[9]=R32(c->r[7]+0x00000008u); // 800D2830
  c->r[8]=R32(c->r[31]+0x00000094u); // 800D2834
  c->r[7]=R32(c->r[6]+0x00000004u); // 800D2838
  c->r[0]=R32(c->r[6]+0x00000008u); // 800D283C
  W32(c->r[1]+0x00000020u,c->r[11]); // 800D2840
  W32(c->r[1]+0x00000024u,c->r[10]); // 800D2844
  {uint32_t ea=c->r[1]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 800D2848
  W32(c->r[1]+0x00000028u,c->r[9]); // 800D284C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D2850
  W32(c->r[1]+0x00000014u,c->r[8]); // 800D2854
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D2858
  W32(c->r[1]+0x00000018u,c->r[7]); // 800D285C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2860
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D2864
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D2868
  c->r[6]=R32(c->r[30]+0x00000394u); // 800D286C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2870
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2874
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 800D2878
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800D287C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800D2880
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2884
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800D2888
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800D288C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800D2890
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2894
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800D2898
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800D289C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800D28A0
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D28A4
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800D28A8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800D28AC
  c->r[6]=R32(c->r[30]+0x00000394u); // 800D28B0
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D28B4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800D28B8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800D28BC
  c->r[6]=R32(c->r[30]+0x00000394u); // 800D28C0
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D28C4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800D28C8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800D28CC
  c->lr=0x800D28D4u; f_80296A70(c); // 800D28D0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D28D4
  c->r[4]=0u+0x803A0000u; // 800D28D8
  c->r[4]=c->r[4]+0xFFFFDFCCu; // 800D28DC
  c->r[5]=c->r[1]+0x00000048u; // 800D28E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D28E4
  c->r[4]=c->r[4]+0x00000079u; // 800D28E8
  c->r[6]=0u+0x00000001u; // 800D28EC
  c->lr=0x800D28F4u; f_80257018(c); // 800D28F0
  c->r[4]=c->r[1]+0x00000020u; // 800D28F4
  c->r[3]=c->r[1]+0x00000048u; // 800D28F8
  c->r[5]=c->r[4]|c->r[4]; // 800D28FC
  c->lr=0x800D2904u; f_80296750(c); // 800D2900
  c->r[4]=c->r[1]+0x00000014u; // 800D2904
  c->r[3]=c->r[1]+0x00000048u; // 800D2908
  c->r[5]=c->r[4]|c->r[4]; // 800D290C
  c->lr=0x800D2914u; f_80296750(c); // 800D2910
  c->r[3]=c->r[1]+0x00000020u; // 800D2914
  c->r[4]=c->r[1]+0x00000014u; // 800D2918
  c->r[5]=c->r[1]+0x0000002Cu; // 800D291C
  c->lr=0x800D2924u; f_80296A70(c); // 800D2920
  c->r[4]=c->r[31]+0x000000A0u; // 800D2924
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2928
  c->r[6]=R32(c->r[31]+0x000000A0u); // 800D292C
  c->r[3]=c->r[1]+0x00000038u; // 800D2930
  c->r[5]=R32(c->r[4]+0x00000004u); // 800D2934
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D2938
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800D293C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D2940
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D2944
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D2948
  c->lr=0x800D2950u; f_80296B0C(c); // 800D294C
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2950
  fcmp(c,0,c->f[3],c->f[1]); // 800D2954
  if (crb(c,2)) { goto L_800D29C8; } // 800D2958
  c->r[3]=c->r[1]+0x00000038u; // 800D295C
  c->lr=0x800D2964u; f_80296B0C(c); // 800D2960
  c->f[31]=c->f[1]; // 800D2964
  c->r[3]=c->r[1]+0x0000002Cu; // 800D2968
  c->lr=0x800D2970u; f_80296B0C(c); // 800D296C
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[31]); // 800D2970
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2974
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2978
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D297C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800D2980
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800D2984
  c->lr=0x800D298Cu; f_8005C22C(c); // 800D2988
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D298C
  fcmp(c,0,c->f[1],c->f[0]); // 800D2990
  if (!crb(c,1)) { goto L_800D29AC; } // 800D2994
  {uint32_t ea=c->r[2]+0xFFFFA170u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D2998
  {uint32_t ea=c->r[2]+0xFFFFA174u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D299C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800D29A0
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 800D29A4
  goto L_800D29D8; // 800D29A8
L_800D29AC:;
  {uint32_t ea=c->r[2]+0xFFFFA170u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D29AC
  {uint32_t ea=c->r[2]+0xFFFFA174u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D29B0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800D29B4
  {uint32_t ea=c->r[2]+0xFFFFA178u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D29B8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800D29BC
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 800D29C0
  goto L_800D29D8; // 800D29C4
L_800D29C8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D29C8
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D29CC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800D29D0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800D29D4
L_800D29D8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D29D8
  {uint32_t ea=c->r[2]+0xFFFFA17Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D29DC
  fcmp(c,0,c->f[1],c->f[0]); // 800D29E0
  if (!crb(c,0)) { goto L_800D29EC; } // 800D29E4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800D29E8
L_800D29EC:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D29EC
  c->r[3]=c->r[30]+0x00000210u; // 800D29F0
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D29F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D29F8
  {uint32_t ea=c->r[4]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D29FC
  c->f[3]=c->f[1]; // 800D2A00
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800D2A04
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[0]); // 800D2A08
  {uint32_t ea=c->r[4]+0x00000078u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D2A0C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D2A10
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2A14
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 800D2A18
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[7]);} // 800D2A1C
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800D2A20
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 800D2A24
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800D2A28
  c->lr=0x800D2A30u; f_8005D58C(c); // 800D2A2C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2A30
  c->r[3]=c->r[30]+0x00000210u; // 800D2A34
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D2A38
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2A3C
  c->lr=0x800D2A44u; f_80043E24(c); // 800D2A40
L_800D2A44:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800D2A44
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D2A48
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800D2A4C
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800D2A50
  c->r[30]=R32(c->r[1]+0x00000078u); // 800D2A54
  c->lr=c->r[0]; // 800D2A58
  c->r[1]=c->r[1]+0x00000090u; // 800D2A5C
  return; // 800D2A60
}

// fn_800D2A64
void f_800D2A64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2A64
  c->r[0]=c->lr; // 800D2A68
  cmps(c,0,(int32_t)c->r[3],0); // 800D2A6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2A70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2A74
  c->r[31]=c->r[4]|c->r[4]; // 800D2A78
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D2A7C
  c->r[30]=c->r[3]|c->r[3]; // 800D2A80
  if (crb(c,2)) { goto L_800D2AA0; } // 800D2A84
  c->r[4]=0u+0x00000000u; // 800D2A88
  c->lr=0x800D2A90u; f_8026A06C(c); // 800D2A8C
  cmps(c,0,(int32_t)c->r[31],0); // 800D2A90
  if (!crb(c,1)) { goto L_800D2AA0; } // 800D2A94
  c->r[3]=c->r[30]|c->r[30]; // 800D2A98
  c->lr=0x800D2AA0u; f_8026A268(c); // 800D2A9C
L_800D2AA0:;
  c->r[3]=c->r[30]|c->r[30]; // 800D2AA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D2AA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D2AA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2AAC
  c->lr=c->r[0]; // 800D2AB0
  c->r[1]=c->r[1]+0x00000010u; // 800D2AB4
  return; // 800D2AB8
}

// fn_800D2ABC
void f_800D2ABC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2ABC
  c->r[0]=c->lr; // 800D2AC0
  c->r[4]=0u+0x00000000u; // 800D2AC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D2AC8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D2ACC
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D2AD0
  c->r[30]=c->r[3]|c->r[3]; // 800D2AD4
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D2AD8
  c->lr=0x800D2AE0u; f_801F57D0(c); // 800D2ADC
  c->r[3]=c->r[30]|c->r[30]; // 800D2AE0
  c->r[4]=0u+0x00000001u; // 800D2AE4
  c->lr=0x800D2AECu; f_801F57D0(c); // 800D2AE8
  c->r[3]=c->r[30]|c->r[30]; // 800D2AEC
  c->r[4]=0u+0x00000002u; // 800D2AF0
  c->lr=0x800D2AF8u; f_801F57D0(c); // 800D2AF4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D2AF8
  c->r[3]=c->r[30]|c->r[30]; // 800D2AFC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D2B00
  c->ctr=c->r[12]; // 800D2B04
  if (true) { c->lr=0x800D2B0Cu; dispatch(c,c->ctr); } // 800D2B08
  c->r[3]=c->r[30]|c->r[30]; // 800D2B0C
  c->lr=0x800D2B14u; f_801F4B94(c); // 800D2B10
  c->r[3]=0u+0x00000003u; // 800D2B14
  c->r[0]=0u+0x00000034u; // 800D2B18
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800D2B1C
  c->r[3]=c->r[30]|c->r[30]; // 800D2B20
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D2B24
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800D2B28
  c->lr=0x800D2B30u; f_801F58BC(c); // 800D2B2C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D2B30
  c->r[31]=0u+0x00000000u; // 800D2B34
  c->r[29]=0u+0x803A0000u; // 800D2B38
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800D2B3C
  c->r[4]=c->r[29]+0xFFFFE074u; // 800D2B40
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D2B44
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2B48
  c->lr=0x800D2B50u; f_80256EC4(c); // 800D2B4C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800D2B50
  c->r[4]=0u+0x0000000Cu; // 800D2B54
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2B58
  c->r[5]=0u+0x00000000u; // 800D2B5C
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800D2B60
  c->r[3]=c->r[30]|c->r[30]; // 800D2B64
  c->f[2]=c->f[1]; // 800D2B68
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D2B6C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D2B70
  c->ctr=c->r[12]; // 800D2B74
  if (true) { c->lr=0x800D2B7Cu; dispatch(c,c->ctr); } // 800D2B78
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2B7C
  c->r[4]=0u+0x00000000u; // 800D2B80
  c->r[5]=R32(c->r[30]+0x00000394u); // 800D2B84
  c->f[2]=c->f[1]; // 800D2B88
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800D2B8C
  c->r[5]=R32(c->r[5]+0x00000034u); // 800D2B90
  c->lr=0x800D2B98u; f_8024FEAC(c); // 800D2B94
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D2B98
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2B9C
  c->lr=0x800D2BA4u; f_802501B0(c); // 800D2BA0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D2BA4
  c->r[3]=c->r[30]|c->r[30]; // 800D2BA8
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800D2BAC
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D2BB0
  c->lr=0x800D2BB8u; f_801F58BC(c); // 800D2BB4
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D2BB8
  c->r[4]=c->r[29]+0xFFFFE074u; // 800D2BBC
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800D2BC0
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D2BC4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2BC8
  c->lr=0x800D2BD0u; f_80256EC4(c); // 800D2BCC
  c->r[5]=R32(c->r[30]+0x00000398u); // 800D2BD0
  c->r[4]=0u+0x00000000u; // 800D2BD4
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2BD8
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800D2BDC
  c->f[2]=c->f[1]; // 800D2BE0
  c->r[5]=R32(c->r[30]+0x00000398u); // 800D2BE4
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800D2BE8
  c->r[5]=R32(c->r[5]+0x00000034u); // 800D2BEC
  c->lr=0x800D2BF4u; f_8024FEAC(c); // 800D2BF0
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D2BF4
  c->r[4]=0u+0x00000001u; // 800D2BF8
  c->r[3]=c->r[3]+0x0000001Cu; // 800D2BFC
  c->lr=0x800D2C04u; f_80251824(c); // 800D2C00
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D2C04
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2C08
  c->lr=0x800D2C10u; f_802501B0(c); // 800D2C0C
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D2C10
  c->r[3]=c->r[30]|c->r[30]; // 800D2C14
  c->r[5]=0u+0x00000001u; // 800D2C18
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800D2C1C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D2C20
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D2C24
  c->r[12]=R32(c->r[12]+0x00000038u); // 800D2C28
  c->ctr=c->r[12]; // 800D2C2C
  if (true) { c->lr=0x800D2C34u; dispatch(c,c->ctr); } // 800D2C30
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D2C34
  c->r[29]=c->r[29]+0xFFFFE074u; // 800D2C38
  c->r[4]=c->r[29]+0x00000009u; // 800D2C3C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2C40
  c->lr=0x800D2C48u; f_80256EC4(c); // 800D2C44
  W8(c->r[30]+0x00000098u,c->r[3]); // 800D2C48
  c->r[4]=c->r[29]+0x00000013u; // 800D2C4C
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D2C50
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2C54
  c->lr=0x800D2C5Cu; f_80256EC4(c); // 800D2C58
  W8(c->r[30]+0x00000099u,c->r[3]); // 800D2C5C
  c->r[4]=c->r[29]+0x0000001Du; // 800D2C60
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D2C64
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2C68
  c->lr=0x800D2C70u; f_80256EC4(c); // 800D2C6C
  W8(c->r[30]+0x0000009Au,c->r[3]); // 800D2C70
  c->r[3]=c->r[30]|c->r[30]; // 800D2C74
  c->lr=0x800D2C7Cu; f_800D4B84(c); // 800D2C78
  c->r[3]=c->r[30]|c->r[30]; // 800D2C7C
  c->lr=0x800D2C84u; f_800D4C7C(c); // 800D2C80
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800D2C84
  c->r[3]=c->r[30]|c->r[30]; // 800D2C88
  c->lr=0x800D2C90u; f_801F58BC(c); // 800D2C8C
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800D2C90
  c->r[4]=c->r[29]|c->r[29]; // 800D2C94
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800D2C98
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800D2C9C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2CA0
  c->lr=0x800D2CA8u; f_80256EC4(c); // 800D2CA4
  c->r[5]=R32(c->r[30]+0x0000039Cu); // 800D2CA8
  c->r[4]=0u+0x00000021u; // 800D2CAC
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2CB0
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800D2CB4
  c->f[2]=c->f[1]; // 800D2CB8
  c->r[5]=R32(c->r[30]+0x0000039Cu); // 800D2CBC
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800D2CC0
  c->r[5]=R32(c->r[5]+0x00000034u); // 800D2CC4
  c->lr=0x800D2CCCu; f_8024FEAC(c); // 800D2CC8
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800D2CCC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2CD0
  c->lr=0x800D2CD8u; f_802501B0(c); // 800D2CD4
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800D2CD8
  c->r[3]=c->r[30]|c->r[30]; // 800D2CDC
  c->r[5]=0u+0x00000002u; // 800D2CE0
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800D2CE4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D2CE8
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D2CEC
  c->r[12]=R32(c->r[12]+0x00000038u); // 800D2CF0
  c->ctr=c->r[12]; // 800D2CF4
  if (true) { c->lr=0x800D2CFCu; dispatch(c,c->ctr); } // 800D2CF8
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800D2CFC
  c->r[4]=0u+0x000000FFu; // 800D2D00
  c->r[3]=0u+0x00000001u; // 800D2D04
  W8(c->r[30]+0x00000028u,c->r[31]); // 800D2D08
  cmps(c,0,(int32_t)c->r[0],0); // 800D2D0C
  W8(c->r[30]+0x0000009Bu,c->r[31]); // 800D2D10
  W8(c->r[30]+0x0000009Cu,c->r[31]); // 800D2D14
  W8(c->r[30]+0x0000009Du,c->r[31]); // 800D2D18
  W8(c->r[30]+0x0000009Eu,c->r[4]); // 800D2D1C
  W8(c->r[30]+0x0000009Fu,c->r[31]); // 800D2D20
  W8(c->r[30]+0x000000A0u,c->r[31]); // 800D2D24
  W8(c->r[30]+0x000000A1u,c->r[31]); // 800D2D28
  W8(c->r[30]+0x000000A2u,c->r[31]); // 800D2D2C
  W8(c->r[30]+0x000000A3u,c->r[31]); // 800D2D30
  W8(c->r[30]+0x000000A4u,c->r[31]); // 800D2D34
  W8(c->r[30]+0x000000A6u,c->r[31]); // 800D2D38
  W8(c->r[30]+0x000000A7u,c->r[31]); // 800D2D3C
  W8(c->r[30]+0x000000A8u,c->r[31]); // 800D2D40
  W8(c->r[30]+0x000000A9u,c->r[31]); // 800D2D44
  W8(c->r[30]+0x000000A5u,c->r[3]); // 800D2D48
  if (crb(c,2)) { goto L_800D2D54; } // 800D2D4C
  W8(c->r[30]+0x000000A5u,c->r[3]); // 800D2D50
L_800D2D54:;
  c->r[0]=0u+0x00000000u; // 800D2D54
  c->r[3]=c->r[30]|c->r[30]; // 800D2D58
  W8(c->r[30]+0x000000AAu,c->r[0]); // 800D2D5C
  W8(c->r[30]+0x000000ABu,c->r[0]); // 800D2D60
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800D2D64
  c->lr=0x800D2D6Cu; f_801F56F4(c); // 800D2D68
  c->r[7]=0u+0x803D0000u; // 800D2D6C
  {uint32_t ea=c->r[7]+0x00001CE8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D2D70
  c->r[3]=c->r[30]|c->r[30]; // 800D2D74
  c->r[4]=c->r[1]+0x00000008u; // 800D2D78
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D2D7C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D2D80
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D2D84
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D2D88
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D2D8C
  c->lr=0x800D2D94u; f_800D2DB0(c); // 800D2D90
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D2D94
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D2D98
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D2D9C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D2DA0
  c->lr=c->r[0]; // 800D2DA4
  c->r[1]=c->r[1]+0x00000030u; // 800D2DA8
  return; // 800D2DAC
}

// fn_800D2DB0
void f_800D2DB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2DB0
  c->r[0]=c->lr; // 800D2DB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2DBC
  c->r[31]=c->r[4]|c->r[4]; // 800D2DC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D2DC4
  c->r[30]=c->r[3]|c->r[3]; // 800D2DC8
  c->r[3]=c->r[31]|c->r[31]; // 800D2DCC
  c->lr=0x800D2DD4u; f_802B9FDC(c); // 800D2DD0
  cmps(c,0,(int32_t)c->r[3],0); // 800D2DD4
  if (crb(c,2)) { goto L_800D2DF4; } // 800D2DD8
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D2DDC
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D2DE0
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D2DE4
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D2DE8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D2DEC
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D2DF0
L_800D2DF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2DF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D2DF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D2DFC
  c->lr=c->r[0]; // 800D2E00
  c->r[1]=c->r[1]+0x00000010u; // 800D2E04
  return; // 800D2E08
}

// fn_800D2E0C
void f_800D2E0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2E0C
  c->r[0]=c->lr; // 800D2E10
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D2E14
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D2E18
  c->r[31]=c->r[3]|c->r[3]; // 800D2E1C
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800D2E20
  c->r[4]=R32(c->r[3]+0x0000039Cu); // 800D2E24
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800D2E28
  c->r[4]=R32(c->r[3]+0x00000398u); // 800D2E2C
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800D2E30
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D2E34
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800D2E38
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800D2E3C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800D2E40
  c->ctr=c->r[12]; // 800D2E44
  if (true) { c->lr=0x800D2E4Cu; dispatch(c,c->ctr); } // 800D2E48
  c->r[3]=c->r[31]|c->r[31]; // 800D2E4C
  c->lr=0x800D2E54u; f_801F4C0C(c); // 800D2E50
  c->r[3]=c->r[31]|c->r[31]; // 800D2E54
  c->lr=0x800D2E5Cu; f_800D4B80(c); // 800D2E58
  c->r[3]=c->r[31]|c->r[31]; // 800D2E5C
  c->lr=0x800D2E64u; f_801F56F4(c); // 800D2E60
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D2E64
  c->r[4]=c->r[3]+0x000000B0u; // 800D2E68
  c->lr=0x800D2E70u; f_80250F18(c); // 800D2E6C
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D2E70
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2E74
  c->lr=0x800D2E7Cu; f_8025037C(c); // 800D2E78
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D2E7C
  c->r[4]=c->r[3]+0x000000B0u; // 800D2E80
  c->lr=0x800D2E88u; f_80250F18(c); // 800D2E84
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D2E88
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2E8C
  c->lr=0x800D2E94u; f_802501B0(c); // 800D2E90
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D2E94
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2E98
  c->lr=0x800D2EA0u; f_8025037C(c); // 800D2E9C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D2EA0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D2EA4
  c->lr=0x800D2EACu; f_802501B0(c); // 800D2EA8
  c->r[0]=R8(c->r[31]+0x0000009Eu); // 800D2EAC
  cmpu(c,0,c->r[0],0x000000FFu); // 800D2EB0
  if (crb(c,2)) { goto L_800D2F68; } // 800D2EB4
  c->r[6]=0u+0x803A0000u; // 800D2EB8
  {uint32_t ea=c->r[6]+0xFFFFE05Cu; c->r[10]=R32(ea); c->r[6]=ea;} // 800D2EBC
  c->r[3]=0u+0x803A0000u; // 800D2EC0
  {uint32_t ea=c->r[3]+0xFFFFE050u; c->r[7]=R32(ea); c->r[3]=ea;} // 800D2EC4
  c->r[9]=R32(c->r[6]+0x00000004u); // 800D2EC8
  c->r[4]=c->r[1]+0x0000002Cu; // 800D2ECC
  c->r[8]=R32(c->r[6]+0x00000008u); // 800D2ED0
  c->r[5]=c->r[4]|c->r[4]; // 800D2ED4
  W32(c->r[1]+0x0000002Cu,c->r[10]); // 800D2ED8
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D2EDC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D2EE0
  W32(c->r[1]+0x00000030u,c->r[9]); // 800D2EE4
  W32(c->r[1]+0x00000034u,c->r[8]); // 800D2EE8
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D2EEC
  W32(c->r[1]+0x00000020u,c->r[7]); // 800D2EF0
  c->r[3]=c->r[3]+0x000000B0u; // 800D2EF4
  W32(c->r[1]+0x00000024u,c->r[6]); // 800D2EF8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D2EFC
  c->lr=0x800D2F04u; f_80296750(c); // 800D2F00
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D2F04
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2F08
  cmpu(c,0,c->r[0],0x00000001u); // 800D2F0C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800D2F10
  if (!crb(c,2)) { goto L_800D2F20; } // 800D2F14
  {uint32_t ea=c->r[2]+0xFFFFA18Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2F18
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800D2F1C
L_800D2F20:;
  c->r[10]=R32(c->r[1]+0x00000020u); // 800D2F20
  c->r[3]=0u+0x80550000u; // 800D2F24
  c->r[9]=R32(c->r[1]+0x00000024u); // 800D2F28
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D2F2C
  c->r[8]=R32(c->r[1]+0x00000028u); // 800D2F30
  c->r[5]=c->r[1]+0x00000014u; // 800D2F34
  c->r[7]=R32(c->r[1]+0x0000002Cu); // 800D2F38
  c->r[6]=c->r[1]+0x00000008u; // 800D2F3C
  c->r[4]=R32(c->r[1]+0x00000030u); // 800D2F40
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D2F44
  W32(c->r[1]+0x00000008u,c->r[10]); // 800D2F48
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 800D2F4C
  W32(c->r[1]+0x00000010u,c->r[8]); // 800D2F50
  W32(c->r[1]+0x00000014u,c->r[7]); // 800D2F54
  W32(c->r[1]+0x00000018u,c->r[4]); // 800D2F58
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D2F5C
  c->r[4]=R8(c->r[31]+0x0000009Eu); // 800D2F60
  c->lr=0x800D2F68u; f_8018DBD0(c); // 800D2F64
L_800D2F68:;
  c->r[0]=R8(c->r[31]+0x000000A3u); // 800D2F68
  cmps(c,0,(int32_t)c->r[0],0); // 800D2F6C
  if (crb(c,2)) { goto L_800D2F84; } // 800D2F70
  c->r[0]=0u+0x00000000u; // 800D2F74
  c->r[3]=c->r[31]|c->r[31]; // 800D2F78
  W8(c->r[31]+0x000000A3u,c->r[0]); // 800D2F7C
  c->lr=0x800D2F84u; f_800D4D60(c); // 800D2F80
L_800D2F84:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D2F84
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D2F88
  c->lr=c->r[0]; // 800D2F8C
  c->r[1]=c->r[1]+0x00000040u; // 800D2F90
  return; // 800D2F94
}

// fn_800D2F98
void f_800D2F98(Ctx* __restrict c) {
  f_801F50B4(c); return; // 800D2F98
}

// fn_800D2F9C
void f_800D2F9C(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800D2F9C
}

// fn_800D2FA0
void f_800D2FA0(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800D2FA0
}

// fn_800D2FA4
void f_800D2FA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2FA4
  c->r[0]=c->lr; // 800D2FA8
  c->r[5]=0u+0x00000000u; // 800D2FAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2FB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2FB4
  c->r[31]=c->r[3]|c->r[3]; // 800D2FB8
  c->r[3]=0u+0x000000CAu; // 800D2FBC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D2FC0
  c->r[4]=c->r[4]+0x0000010Cu; // 800D2FC4
  c->lr=0x800D2FCCu; f_8024EE50(c); // 800D2FC8
  cmps(c,0,(int32_t)c->r[3],0); // 800D2FCC
  if (crb(c,2)) { goto L_800D2FDC; } // 800D2FD0
  c->r[3]=0u+0x00000000u; // 800D2FD4
  goto L_800D308C; // 800D2FD8
L_800D2FDC:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800D2FDC
  c->r[3]=0u+0x00000504u; // 800D2FE0
  c->r[5]=0u+0x00000000u; // 800D2FE4
  c->r[4]=c->r[4]+0x0000010Cu; // 800D2FE8
  c->lr=0x800D2FF0u; f_8024EE50(c); // 800D2FEC
  cmps(c,0,(int32_t)c->r[3],0); // 800D2FF0
  if (crb(c,2)) { goto L_800D3000; } // 800D2FF4
  c->r[3]=0u+0x00000000u; // 800D2FF8
  goto L_800D308C; // 800D2FFC
L_800D3000:;
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800D3000
  c->r[3]=0u+0x000000C9u; // 800D3004
  c->r[5]=0u+0x00000000u; // 800D3008
  c->r[4]=c->r[4]+0x0000010Cu; // 800D300C
  c->lr=0x800D3014u; f_8024EE50(c); // 800D3010
  cmps(c,0,(int32_t)c->r[3],0); // 800D3014
  if (crb(c,2)) { goto L_800D3024; } // 800D3018
  c->r[3]=0u+0x00000000u; // 800D301C
  goto L_800D308C; // 800D3020
L_800D3024:;
  c->r[3]=c->r[31]+0x00000210u; // 800D3024
  c->r[4]=0u+0x000000E1u; // 800D3028
  c->lr=0x800D3030u; f_80221630(c); // 800D302C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3030
  if (crb(c,2)) { goto L_800D3080; } // 800D3034
  c->r[0]=R32(c->r[31]+0x00000210u); // 800D3038
  c->r[4]=c->r[31]|c->r[31]; // 800D303C
  c->r[3]=c->r[31]+0x00000210u; // 800D3040
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800D3044
  c->r[0]=c->r[0]|0x28000000u; // 800D3048
  W32(c->r[31]+0x00000210u,c->r[0]); // 800D304C
  c->lr=0x800D3054u; f_80043E44(c); // 800D3050
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3054
  c->r[3]=c->r[31]+0x00000210u; // 800D3058
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D305C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D3060
  c->lr=0x800D3068u; f_80043E34(c); // 800D3064
  {uint32_t ea=c->r[2]+0xFFFFA190u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3068
  c->r[3]=c->r[31]+0x00000210u; // 800D306C
  {uint32_t ea=c->r[2]+0xFFFFA194u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D3070
  c->f[3]=c->f[1]; // 800D3074
  c->lr=0x800D307Cu; f_80043E24(c); // 800D3078
  goto L_800D3088; // 800D307C
L_800D3080:;
  c->r[3]=0u+0x00000000u; // 800D3080
  goto L_800D308C; // 800D3084
L_800D3088:;
  c->r[3]=0u+0x00000001u; // 800D3088
L_800D308C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D308C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3090
  c->lr=c->r[0]; // 800D3094
  c->r[1]=c->r[1]+0x00000010u; // 800D3098
  return; // 800D309C
}

// fn_800D30A0
void f_800D30A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D30A0
  c->r[0]=c->lr; // 800D30A4
  c->r[7]=0u+0x803D0000u; // 800D30A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D30AC
  c->r[4]=c->r[1]+0x00000008u; // 800D30B0
  {uint32_t ea=c->r[7]+0x00001CF4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D30B4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D30B8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D30BC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D30C0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D30C4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D30C8
  c->lr=0x800D30D0u; f_800D2DB0(c); // 800D30CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D30D0
  c->lr=c->r[0]; // 800D30D4
  c->r[1]=c->r[1]+0x00000020u; // 800D30D8
  return; // 800D30DC
}

// fn_800D30E0
void f_800D30E0(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800D30E0
  cmps(c,0,(int32_t)c->r[0],0); // 800D30E4
  if (!crb(c,2)) { goto L_800D30F0; } // 800D30E8
  f_800D30F4(c); return; // 800D30EC
L_800D30F0:;
  f_800D3E38(c); return; // 800D30F0
}

// fn_800D30F4
void f_800D30F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D30F4
  c->r[0]=c->lr; // 800D30F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D30FC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D3100
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D3104
  c->r[30]=c->r[3]|c->r[3]; // 800D3108
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D310C
  c->lr=0x800D3114u; f_8024E040(c); // 800D3110
  c->r[3]=0u+0x805D0000u; // 800D3114
  c->r[4]=c->r[1]+0x00000008u; // 800D3118
  c->r[3]=c->r[3]+0x00003E0Cu; // 800D311C
  c->lr=0x800D3124u; f_801F93AC(c); // 800D3120
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D3124
  c->r[31]=c->r[3]|c->r[3]; // 800D3128
  cmps(c,0,(int32_t)c->r[0],0); // 800D312C
  if (crb(c,2)) { goto L_800D31A8; } // 800D3130
  c->r[0]=R8(c->r[30]+0x000000A8u); // 800D3134
  c->r[29]=0u+0x00000000u; // 800D3138
  W8(c->r[30]+0x000000A6u,c->r[29]); // 800D313C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3140
  if (crb(c,2)) { goto L_800D31A8; } // 800D3144
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800D3148
  c->lr=0x800D3150u; f_80035554(c); // 800D314C
  c->r[3]=R8(c->r[30]+0x000000A9u); // 800D3150
  c->r[0]=0u+0x43300000u; // 800D3154
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D3158
  {uint32_t ea=c->r[2]+0xFFFFA1A8u; c->f[2]=RF64(ea);} // 800D315C
  W32(c->r[1]+0x00000014u,c->r[3]); // 800D3160
  c->r[0]=R8(c->r[30]+0x000000A8u); // 800D3164
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800D3168
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800D316C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D3170
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D3174
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 800D3178
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 800D317C
  c->r[3]=rotl(c->r[4],0)&0x000000FFu; // 800D3180
  W8(c->r[30]+0x000000A9u,c->r[4]); // 800D3184
  cmpu(c,0,c->r[3],c->r[0]); // 800D3188
  if (crb(c,0)) { goto L_800D31A0; } // 800D318C
  W8(c->r[30]+0x000000A7u,c->r[29]); // 800D3190
  W8(c->r[30]+0x000000A9u,c->r[29]); // 800D3194
  W8(c->r[30]+0x000000A8u,c->r[29]); // 800D3198
  goto L_800D31A8; // 800D319C
L_800D31A0:;
  c->r[0]=0u+0x00000001u; // 800D31A0
  W8(c->r[30]+0x000000A6u,c->r[0]); // 800D31A4
L_800D31A8:;
  c->r[3]=R8(c->r[30]+0x000000A2u); // 800D31A8
  c->r[0]=0u+0x00000000u; // 800D31AC
  W8(c->r[30]+0x000000A4u,c->r[0]); // 800D31B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D31B4
  if (crb(c,2)) { goto L_800D31C4; } // 800D31B8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D31BC
  W8(c->r[30]+0x000000A2u,c->r[0]); // 800D31C0
L_800D31C4:;
  c->r[3]=c->r[30]+0x0000000Cu; // 800D31C4
  c->r[4]=0u+0x00000000u; // 800D31C8
  c->lr=0x800D31D0u; f_80038BCC(c); // 800D31CC
  cmps(c,0,(int32_t)c->r[3],0); // 800D31D0
  if (crb(c,2)) { goto L_800D31E0; } // 800D31D4
  c->r[3]=c->r[30]+0x0000000Cu; // 800D31D8
  c->lr=0x800D31E0u; f_8003E468(c); // 800D31DC
L_800D31E0:;
  c->r[0]=R8(c->r[30]+0x0000009Bu); // 800D31E0
  cmps(c,0,(int32_t)c->r[0],0); // 800D31E4
  if (crb(c,2)) { goto L_800D3B0C; } // 800D31E8
  c->r[0]=R8(c->r[30]+0x00000028u); // 800D31EC
  cmps(c,0,(int32_t)c->r[0],0); // 800D31F0
  if (!crb(c,2)) { goto L_800D3258; } // 800D31F4
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 800D31F8
  cmps(c,0,(int32_t)c->r[0],2); // 800D31FC
  if (crb(c,2)) { goto L_800D3238; } // 800D3200
  if (!crb(c,0)) { goto L_800D3258; } // 800D3204
  cmps(c,0,(int32_t)c->r[0],1); // 800D3208
  if (!crb(c,0)) { goto L_800D3214; } // 800D320C
  goto L_800D3258; // 800D3210
L_800D3214:;
  c->r[0]=R8(c->r[30]+0x000000A0u); // 800D3214
  cmps(c,0,(int32_t)c->r[0],0); // 800D3218
  if (!crb(c,2)) { goto L_800D322C; } // 800D321C
  c->r[0]=0u+0x00000001u; // 800D3220
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D3224
  goto L_800D3258; // 800D3228
L_800D322C:;
  c->r[0]=0u+0x00000003u; // 800D322C
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D3230
  goto L_800D3258; // 800D3234
L_800D3238:;
  c->r[0]=R8(c->r[30]+0x000000A0u); // 800D3238
  cmpu(c,0,c->r[0],0x00000002u); // 800D323C
  if (!crb(c,0)) { goto L_800D3250; } // 800D3240
  c->r[0]=0u+0x00000002u; // 800D3244
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D3248
  goto L_800D3258; // 800D324C
L_800D3250:;
  c->r[0]=0u+0x00000003u; // 800D3250
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D3254
L_800D3258:;
  c->r[0]=R8(c->r[30]+0x0000009Cu); // 800D3258
  cmps(c,0,(int32_t)c->r[0],2); // 800D325C
  if (crb(c,2)) { goto L_800D3610; } // 800D3260
  if (!crb(c,0)) { goto L_800D3278; } // 800D3264
  cmps(c,0,(int32_t)c->r[0],0); // 800D3268
  if (crb(c,2)) { goto L_800D3284; } // 800D326C
  if (!crb(c,0)) { goto L_800D32CC; } // 800D3270
  goto L_800D3DB8; // 800D3274
L_800D3278:;
  cmps(c,0,(int32_t)c->r[0],4); // 800D3278
  if (!crb(c,0)) { goto L_800D3DB8; } // 800D327C
  goto L_800D38F0; // 800D3280
L_800D3284:;
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D3284
  c->r[3]=0u+0x00000000u; // 800D3288
  W8(c->r[30]+0x00000028u,c->r[3]); // 800D328C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3290
  W8(c->r[30]+0x000000A2u,c->r[3]); // 800D3294
  if (crb(c,2)) { goto L_800D32A8; } // 800D3298
  W8(c->r[30]+0x0000009Du,c->r[3]); // 800D329C
  c->r[3]=0u+0x00000000u; // 800D32A0
  c->lr=0x800D32A8u; f_80269A6C(c); // 800D32A4
L_800D32A8:;
  c->r[4]=R8(c->r[30]+0x0000009Eu); // 800D32A8
  cmpu(c,0,c->r[4],0x000000FFu); // 800D32AC
  if (crb(c,2)) { goto L_800D3DB8; } // 800D32B0
  c->r[3]=0u+0x80550000u; // 800D32B4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D32B8
  c->lr=0x800D32C0u; f_8018D738(c); // 800D32BC
  c->r[0]=0u+0x000000FFu; // 800D32C0
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800D32C4
  goto L_800D3DB8; // 800D32C8
L_800D32CC:;
  c->r[3]=R8(c->r[30]+0x00000028u); // 800D32CC
  cmps(c,0,(int32_t)c->r[3],1); // 800D32D0
  if (crb(c,2)) { goto L_800D33C8; } // 800D32D4
  if (!crb(c,0)) { goto L_800D3DB8; } // 800D32D8
  cmps(c,0,(int32_t)c->r[3],0); // 800D32DC
  if (!crb(c,0)) { goto L_800D32E8; } // 800D32E0
  goto L_800D3DB8; // 800D32E4
L_800D32E8:;
  c->r[0]=0u+0x00000010u; // 800D32E8
  c->r[3]=c->r[3]+0x00000001u; // 800D32EC
  W8(c->r[30]+0x00000028u,c->r[3]); // 800D32F0
  c->r[3]=0u+0x00000000u; // 800D32F4
  c->r[4]=0u+0x00000003u; // 800D32F8
  c->r[5]=0u+0x0000000Cu; // 800D32FC
  W8(c->r[30]+0x000000A1u,c->r[0]); // 800D3300
  W8(c->r[30]+0x000000A2u,c->r[0]); // 800D3304
  c->lr=0x800D330Cu; f_8027C0C8(c); // 800D3308
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D330C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3310
  if (crb(c,2)) { goto L_800D3334; } // 800D3314
  c->r[4]=0u+0x00000001u; // 800D3318
  c->r[3]=0u+0x00000000u; // 800D331C
  c->r[0]=0u+0x0000001Cu; // 800D3320
  W8(c->r[30]+0x000000A6u,c->r[4]); // 800D3324
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800D3328
  W8(c->r[30]+0x000000A8u,c->r[0]); // 800D332C
  W8(c->r[30]+0x000000A7u,c->r[4]); // 800D3330
L_800D3334:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3334
  c->r[4]=0u+0x0000000Bu; // 800D3338
  c->r[5]=0u+0x00000012u; // 800D333C
  c->r[6]=0u+0x00000001u; // 800D3340
  c->r[7]=0u+0x00000001u; // 800D3344
  c->lr=0x800D334Cu; f_8017900C(c); // 800D3348
  c->r[0]=R8(c->r[30]+0x0000009Fu); // 800D334C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3350
  if (crb(c,2)) { goto L_800D3370; } // 800D3354
  c->r[3]=c->r[30]|c->r[30]; // 800D3358
  c->r[4]=0u+0x0000000Bu; // 800D335C
  c->r[5]=0u+0x00000011u; // 800D3360
  c->r[6]=0u+0x00000001u; // 800D3364
  c->r[7]=0u+0x00000001u; // 800D3368
  c->lr=0x800D3370u; f_8017900C(c); // 800D336C
L_800D3370:;
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D3370
  cmps(c,0,(int32_t)c->r[0],0); // 800D3374
  if (!crb(c,2)) { goto L_800D338C; } // 800D3378
  c->r[0]=0u+0x00000001u; // 800D337C
  c->r[3]=0u+0x00000007u; // 800D3380
  W8(c->r[30]+0x0000009Du,c->r[0]); // 800D3384
  c->lr=0x800D338Cu; f_80269AD0(c); // 800D3388
L_800D338C:;
  c->r[0]=R8(c->r[30]+0x0000009Eu); // 800D338C
  cmpu(c,0,c->r[0],0x000000FFu); // 800D3390
  if (!crb(c,2)) { goto L_800D33C8; } // 800D3394
  c->r[0]=R8(c->r[30]+0x0000009Fu); // 800D3398
  cmps(c,0,(int32_t)c->r[0],0); // 800D339C
  if (crb(c,2)) { goto L_800D33C8; } // 800D33A0
  c->r[4]=0u+0x803A0000u; // 800D33A4
  c->r[3]=0u+0x80550000u; // 800D33A8
  c->r[4]=c->r[4]+0xFFFFE074u; // 800D33AC
  c->r[5]=0u+0x00000000u; // 800D33B0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D33B4
  c->r[6]=0u+0x00000000u; // 800D33B8
  c->r[4]=c->r[4]+0x00000020u; // 800D33BC
  c->lr=0x800D33C4u; f_8018D3E4(c); // 800D33C0
  W8(c->r[30]+0x0000009Eu,c->r[3]); // 800D33C4
L_800D33C8:;
  c->r[0]=R8(c->r[30]+0x000000A2u); // 800D33C8
  cmps(c,0,(int32_t)c->r[0],0); // 800D33CC
  if (!crb(c,2)) { goto L_800D33E4; } // 800D33D0
  c->r[0]=0u+0x00000000u; // 800D33D4
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D33D8
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D33DC
  goto L_800D3DB8; // 800D33E0
L_800D33E4:;
  c->r[0]=R8(c->r[30]+0x000000A0u); // 800D33E4
  cmps(c,0,(int32_t)c->r[0],0); // 800D33E8
  if (crb(c,2)) { goto L_800D3520; } // 800D33EC
  c->r[0]=0u+0x00000003u; // 800D33F0
  c->r[3]=0u+0x00000000u; // 800D33F4
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D33F8
  c->r[4]=0u+0x00000006u; // 800D33FC
  c->r[5]=0u+0x00000010u; // 800D3400
  c->lr=0x800D3408u; f_8027C0C8(c); // 800D3404
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D3408
  cmps(c,0,(int32_t)c->r[0],0); // 800D340C
  if (crb(c,2)) { goto L_800D3430; } // 800D3410
  c->r[4]=0u+0x00000001u; // 800D3414
  c->r[3]=0u+0x00000000u; // 800D3418
  c->r[0]=0u+0x0000001Eu; // 800D341C
  W8(c->r[30]+0x000000A6u,c->r[4]); // 800D3420
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800D3424
  W8(c->r[30]+0x000000A8u,c->r[0]); // 800D3428
  W8(c->r[30]+0x000000A7u,c->r[4]); // 800D342C
L_800D3430:;
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D3430
  cmps(c,0,(int32_t)c->r[0],0); // 800D3434
  if (!crb(c,2)) { goto L_800D344C; } // 800D3438
  c->r[0]=0u+0x00000001u; // 800D343C
  c->r[3]=0u+0x00000007u; // 800D3440
  W8(c->r[30]+0x0000009Du,c->r[0]); // 800D3444
  c->lr=0x800D344Cu; f_80269AD0(c); // 800D3448
L_800D344C:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D344C
  c->r[3]=c->r[30]|c->r[30]; // 800D3450
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D3454
  c->r[5]=0u+0x00000011u; // 800D3458
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D345C
  c->r[6]=0u+0x00000000u; // 800D3460
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3464
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D3468
  c->ctr=c->r[12]; // 800D346C
  if (true) { c->lr=0x800D3474u; dispatch(c,c->ctr); } // 800D3470
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D3474
  c->r[3]=c->r[30]|c->r[30]; // 800D3478
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D347C
  c->r[5]=0u+0x00000001u; // 800D3480
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D3484
  c->r[6]=0u+0x00000000u; // 800D3488
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D348C
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D3490
  c->ctr=c->r[12]; // 800D3494
  if (true) { c->lr=0x800D349Cu; dispatch(c,c->ctr); } // 800D3498
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D349C
  c->r[3]=c->r[30]|c->r[30]; // 800D34A0
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800D34A4
  c->r[5]=0u+0x00000030u; // 800D34A8
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D34AC
  c->r[6]=0u+0x00000000u; // 800D34B0
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D34B4
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D34B8
  c->ctr=c->r[12]; // 800D34BC
  if (true) { c->lr=0x800D34C4u; dispatch(c,c->ctr); } // 800D34C0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D34C4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D34C8
  c->lr=0x800D34D0u; f_802501B0(c); // 800D34CC
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D34D0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D34D4
  c->lr=0x800D34DCu; f_802501B0(c); // 800D34D8
  c->r[4]=R8(c->r[30]+0x0000009Eu); // 800D34DC
  cmpu(c,0,c->r[4],0x000000FFu); // 800D34E0
  if (crb(c,2)) { goto L_800D34FC; } // 800D34E4
  c->r[3]=0u+0x80550000u; // 800D34E8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D34EC
  c->lr=0x800D34F4u; f_8018D738(c); // 800D34F0
  c->r[0]=0u+0x000000FFu; // 800D34F4
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800D34F8
L_800D34FC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D34FC
  c->r[4]=0u+0x0000000Bu; // 800D3500
  c->r[5]=0u+0x00000013u; // 800D3504
  c->r[6]=0u+0x00000001u; // 800D3508
  c->r[7]=0u+0x00000001u; // 800D350C
  c->lr=0x800D3514u; f_8017900C(c); // 800D3510
  c->r[0]=0u+0x00000001u; // 800D3514
  W8(c->r[30]+0x000000A3u,c->r[0]); // 800D3518
  goto L_800D3DB8; // 800D351C
L_800D3520:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3520
  c->lr=0x800D3528u; f_800D4B84(c); // 800D3524
  {uint32_t ea=c->r[30]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D3528
  {uint32_t ea=c->r[2]+0xFFFFA19Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D352C
  {uint32_t ea=c->r[2]+0xFFFFA1A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3530
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D3534
  fcmp(c,0,c->f[1],c->f[0]); // 800D3538
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800D353C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D3540
  if (!crb(c,2)) { goto L_800D3550; } // 800D3544
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D3548
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800D354C
L_800D3550:;
  {uint32_t ea=c->r[30]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D3550
  {uint32_t ea=c->r[2]+0xFFFFA1A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3554
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3558
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800D355C
  fcmp(c,0,c->f[1],c->f[0]); // 800D3560
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800D3564
  if (!crb(c,0)) { goto L_800D3578; } // 800D3568
  {uint32_t ea=c->r[2]+0xFFFFA1A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D356C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D3570
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 800D3574
L_800D3578:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3578
  c->lr=0x800D3580u; f_800D4BD0(c); // 800D357C
  c->r[3]=c->r[30]|c->r[30]; // 800D3580
  c->lr=0x800D3588u; f_800D4D04(c); // 800D3584
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D3588
  cmps(c,0,(int32_t)c->r[0],0); // 800D358C
  if (crb(c,2)) { goto L_800D359C; } // 800D3590
  c->r[0]=0u+0x00000001u; // 800D3594
  W8(c->r[30]+0x000000A6u,c->r[0]); // 800D3598
L_800D359C:;
  c->r[3]=R8(c->r[30]+0x000000A2u); // 800D359C
  cmpu(c,0,c->r[3],0x00000004u); // 800D35A0
  if (!crb(c,0)) { goto L_800D3DB8; } // 800D35A4
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 800D35A8
  cmpu(c,0,c->r[0],0x00000001u); // 800D35AC
  if (!crb(c,2)) { goto L_800D3DB8; } // 800D35B0
  c->r[0]=R8(c->r[30]+0x000000A1u); // 800D35B4
  c->r[3]=c->r[3]+0x00000005u; // 800D35B8
  W8(c->r[30]+0x000000A2u,c->r[3]); // 800D35BC
  cmps(c,0,(int32_t)c->r[0],0); // 800D35C0
  if (!crb(c,2)) { goto L_800D3DB8; } // 800D35C4
  c->r[0]=0u+0x0000000Au; // 800D35C8
  c->r[3]=c->r[30]|c->r[30]; // 800D35CC
  W8(c->r[30]+0x000000A1u,c->r[0]); // 800D35D0
  c->r[4]=0u+0x0000000Bu; // 800D35D4
  c->r[5]=0u+0x00000012u; // 800D35D8
  c->r[6]=0u+0x00000001u; // 800D35DC
  c->r[7]=0u+0x00000001u; // 800D35E0
  c->lr=0x800D35E8u; f_8017900C(c); // 800D35E4
  c->r[0]=R8(c->r[30]+0x0000009Fu); // 800D35E8
  cmps(c,0,(int32_t)c->r[0],0); // 800D35EC
  if (crb(c,2)) { goto L_800D3DB8; } // 800D35F0
  c->r[3]=c->r[30]|c->r[30]; // 800D35F4
  c->r[4]=0u+0x0000000Bu; // 800D35F8
  c->r[5]=0u+0x00000011u; // 800D35FC
  c->r[6]=0u+0x00000001u; // 800D3600
  c->r[7]=0u+0x00000001u; // 800D3604
  c->lr=0x800D360Cu; f_8017900C(c); // 800D3608
  goto L_800D3DB8; // 800D360C
L_800D3610:;
  c->r[3]=R8(c->r[30]+0x00000028u); // 800D3610
  cmps(c,0,(int32_t)c->r[3],1); // 800D3614
  if (crb(c,2)) { goto L_800D36CC; } // 800D3618
  if (!crb(c,0)) { goto L_800D3DB8; } // 800D361C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3620
  if (!crb(c,0)) { goto L_800D362C; } // 800D3624
  goto L_800D3DB8; // 800D3628
L_800D362C:;
  c->r[0]=0u+0x00000010u; // 800D362C
  c->r[3]=c->r[3]+0x00000001u; // 800D3630
  W8(c->r[30]+0x00000028u,c->r[3]); // 800D3634
  c->r[3]=0u+0x00000000u; // 800D3638
  c->r[4]=0u+0x00000000u; // 800D363C
  c->r[5]=0u+0x00000008u; // 800D3640
  W8(c->r[30]+0x000000A1u,c->r[0]); // 800D3644
  W8(c->r[30]+0x000000A2u,c->r[0]); // 800D3648
  c->lr=0x800D3650u; f_8027C0C8(c); // 800D364C
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D3650
  cmps(c,0,(int32_t)c->r[0],0); // 800D3654
  if (crb(c,2)) { goto L_800D3678; } // 800D3658
  c->r[4]=0u+0x00000001u; // 800D365C
  c->r[3]=0u+0x00000000u; // 800D3660
  c->r[0]=0u+0x00000014u; // 800D3664
  W8(c->r[30]+0x000000A6u,c->r[4]); // 800D3668
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800D366C
  W8(c->r[30]+0x000000A8u,c->r[0]); // 800D3670
  W8(c->r[30]+0x000000A7u,c->r[4]); // 800D3674
L_800D3678:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3678
  c->r[4]=0u+0x0000000Bu; // 800D367C
  c->r[5]=0u+0x00000012u; // 800D3680
  c->r[6]=0u+0x00000001u; // 800D3684
  c->r[7]=0u+0x00000001u; // 800D3688
  c->lr=0x800D3690u; f_8017900C(c); // 800D368C
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D3690
  cmps(c,0,(int32_t)c->r[0],0); // 800D3694
  if (crb(c,2)) { goto L_800D36AC; } // 800D3698
  c->r[0]=0u+0x00000000u; // 800D369C
  c->r[3]=0u+0x00000000u; // 800D36A0
  W8(c->r[30]+0x0000009Du,c->r[0]); // 800D36A4
  c->lr=0x800D36ACu; f_80269A6C(c); // 800D36A8
L_800D36AC:;
  c->r[4]=R8(c->r[30]+0x0000009Eu); // 800D36AC
  cmpu(c,0,c->r[4],0x000000FFu); // 800D36B0
  if (crb(c,2)) { goto L_800D36CC; } // 800D36B4
  c->r[3]=0u+0x80550000u; // 800D36B8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D36BC
  c->lr=0x800D36C4u; f_8018D738(c); // 800D36C0
  c->r[0]=0u+0x000000FFu; // 800D36C4
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800D36C8
L_800D36CC:;
  c->r[0]=R8(c->r[30]+0x000000A2u); // 800D36CC
  cmps(c,0,(int32_t)c->r[0],0); // 800D36D0
  if (!crb(c,2)) { goto L_800D36E8; } // 800D36D4
  c->r[0]=0u+0x00000000u; // 800D36D8
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D36DC
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D36E0
  goto L_800D3DB8; // 800D36E4
L_800D36E8:;
  c->r[0]=R8(c->r[30]+0x000000A0u); // 800D36E8
  cmpu(c,0,c->r[0],0x00000002u); // 800D36EC
  if (!crb(c,2)) { goto L_800D3824; } // 800D36F0
  c->r[0]=0u+0x00000003u; // 800D36F4
  c->r[3]=0u+0x00000000u; // 800D36F8
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D36FC
  c->r[4]=0u+0x00000006u; // 800D3700
  c->r[5]=0u+0x00000010u; // 800D3704
  c->lr=0x800D370Cu; f_8027C0C8(c); // 800D3708
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D370C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3710
  if (crb(c,2)) { goto L_800D3734; } // 800D3714
  c->r[4]=0u+0x00000001u; // 800D3718
  c->r[3]=0u+0x00000000u; // 800D371C
  c->r[0]=0u+0x0000001Eu; // 800D3720
  W8(c->r[30]+0x000000A6u,c->r[4]); // 800D3724
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800D3728
  W8(c->r[30]+0x000000A8u,c->r[0]); // 800D372C
  W8(c->r[30]+0x000000A7u,c->r[4]); // 800D3730
L_800D3734:;
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D3734
  cmps(c,0,(int32_t)c->r[0],0); // 800D3738
  if (!crb(c,2)) { goto L_800D3750; } // 800D373C
  c->r[0]=0u+0x00000001u; // 800D3740
  c->r[3]=0u+0x00000007u; // 800D3744
  W8(c->r[30]+0x0000009Du,c->r[0]); // 800D3748
  c->lr=0x800D3750u; f_80269AD0(c); // 800D374C
L_800D3750:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D3750
  c->r[3]=c->r[30]|c->r[30]; // 800D3754
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D3758
  c->r[5]=0u+0x00000011u; // 800D375C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D3760
  c->r[6]=0u+0x00000000u; // 800D3764
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3768
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D376C
  c->ctr=c->r[12]; // 800D3770
  if (true) { c->lr=0x800D3778u; dispatch(c,c->ctr); } // 800D3774
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D3778
  c->r[3]=c->r[30]|c->r[30]; // 800D377C
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D3780
  c->r[5]=0u+0x00000001u; // 800D3784
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D3788
  c->r[6]=0u+0x00000000u; // 800D378C
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3790
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D3794
  c->ctr=c->r[12]; // 800D3798
  if (true) { c->lr=0x800D37A0u; dispatch(c,c->ctr); } // 800D379C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D37A0
  c->r[3]=c->r[30]|c->r[30]; // 800D37A4
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800D37A8
  c->r[5]=0u+0x00000030u; // 800D37AC
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D37B0
  c->r[6]=0u+0x00000000u; // 800D37B4
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D37B8
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D37BC
  c->ctr=c->r[12]; // 800D37C0
  if (true) { c->lr=0x800D37C8u; dispatch(c,c->ctr); } // 800D37C4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D37C8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D37CC
  c->lr=0x800D37D4u; f_802501B0(c); // 800D37D0
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D37D4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D37D8
  c->lr=0x800D37E0u; f_802501B0(c); // 800D37DC
  c->r[4]=R8(c->r[30]+0x0000009Eu); // 800D37E0
  cmpu(c,0,c->r[4],0x000000FFu); // 800D37E4
  if (crb(c,2)) { goto L_800D3800; } // 800D37E8
  c->r[3]=0u+0x80550000u; // 800D37EC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D37F0
  c->lr=0x800D37F8u; f_8018D738(c); // 800D37F4
  c->r[0]=0u+0x000000FFu; // 800D37F8
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800D37FC
L_800D3800:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3800
  c->r[4]=0u+0x0000000Bu; // 800D3804
  c->r[5]=0u+0x00000013u; // 800D3808
  c->r[6]=0u+0x00000001u; // 800D380C
  c->r[7]=0u+0x00000001u; // 800D3810
  c->lr=0x800D3818u; f_8017900C(c); // 800D3814
  c->r[0]=0u+0x00000001u; // 800D3818
  W8(c->r[30]+0x000000A3u,c->r[0]); // 800D381C
  goto L_800D3DB8; // 800D3820
L_800D3824:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3824
  c->lr=0x800D382Cu; f_800D4B84(c); // 800D3828
  {uint32_t ea=c->r[30]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D382C
  {uint32_t ea=c->r[2]+0xFFFFA19Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3830
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3834
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800D3838
  fcmp(c,0,c->f[1],c->f[0]); // 800D383C
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800D3840
  if (!crb(c,0)) { goto L_800D3854; } // 800D3844
  {uint32_t ea=c->r[2]+0xFFFFA1A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3848
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D384C
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800D3850
L_800D3854:;
  {uint32_t ea=c->r[30]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D3854
  {uint32_t ea=c->r[2]+0xFFFFA1A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3858
  {uint32_t ea=c->r[2]+0xFFFFA1A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D385C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D3860
  fcmp(c,0,c->f[1],c->f[0]); // 800D3864
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800D3868
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D386C
  if (!crb(c,2)) { goto L_800D387C; } // 800D3870
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D3874
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 800D3878
L_800D387C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D387C
  c->lr=0x800D3884u; f_800D4BD0(c); // 800D3880
  c->r[3]=c->r[30]|c->r[30]; // 800D3884
  c->lr=0x800D388Cu; f_800D4D04(c); // 800D3888
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D388C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3890
  if (crb(c,2)) { goto L_800D38A0; } // 800D3894
  c->r[0]=0u+0x00000001u; // 800D3898
  W8(c->r[30]+0x000000A6u,c->r[0]); // 800D389C
L_800D38A0:;
  c->r[3]=R8(c->r[30]+0x000000A2u); // 800D38A0
  cmpu(c,0,c->r[3],0x00000004u); // 800D38A4
  if (!crb(c,0)) { goto L_800D3DB8; } // 800D38A8
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 800D38AC
  cmpu(c,0,c->r[0],0x00000002u); // 800D38B0
  if (!crb(c,2)) { goto L_800D3DB8; } // 800D38B4
  c->r[0]=R8(c->r[30]+0x000000A1u); // 800D38B8
  c->r[3]=c->r[3]+0x00000005u; // 800D38BC
  W8(c->r[30]+0x000000A2u,c->r[3]); // 800D38C0
  cmps(c,0,(int32_t)c->r[0],0); // 800D38C4
  if (!crb(c,2)) { goto L_800D3DB8; } // 800D38C8
  c->r[0]=0u+0x0000000Au; // 800D38CC
  c->r[3]=c->r[30]|c->r[30]; // 800D38D0
  W8(c->r[30]+0x000000A1u,c->r[0]); // 800D38D4
  c->r[4]=0u+0x0000000Bu; // 800D38D8
  c->r[5]=0u+0x00000012u; // 800D38DC
  c->r[6]=0u+0x00000001u; // 800D38E0
  c->r[7]=0u+0x00000001u; // 800D38E4
  c->lr=0x800D38ECu; f_8017900C(c); // 800D38E8
  goto L_800D3DB8; // 800D38EC
L_800D38F0:;
  c->r[3]=R8(c->r[30]+0x00000028u); // 800D38F0
  cmps(c,0,(int32_t)c->r[3],1); // 800D38F4
  if (crb(c,2)) { goto L_800D3A20; } // 800D38F8
  if (!crb(c,0)) { goto L_800D3DB8; } // 800D38FC
  cmps(c,0,(int32_t)c->r[3],0); // 800D3900
  if (!crb(c,0)) { goto L_800D390C; } // 800D3904
  goto L_800D3DB8; // 800D3908
L_800D390C:;
  c->r[0]=c->r[3]+0x00000001u; // 800D390C
  c->r[3]=0u+0x00000000u; // 800D3910
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D3914
  c->r[4]=0u+0x00000006u; // 800D3918
  c->r[5]=0u+0x00000010u; // 800D391C
  c->lr=0x800D3924u; f_8027C0C8(c); // 800D3920
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D3924
  cmps(c,0,(int32_t)c->r[0],0); // 800D3928
  if (crb(c,2)) { goto L_800D394C; } // 800D392C
  c->r[4]=0u+0x00000001u; // 800D3930
  c->r[3]=0u+0x00000000u; // 800D3934
  c->r[0]=0u+0x0000001Eu; // 800D3938
  W8(c->r[30]+0x000000A6u,c->r[4]); // 800D393C
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800D3940
  W8(c->r[30]+0x000000A8u,c->r[0]); // 800D3944
  W8(c->r[30]+0x000000A7u,c->r[4]); // 800D3948
L_800D394C:;
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D394C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3950
  if (!crb(c,2)) { goto L_800D3968; } // 800D3954
  c->r[0]=0u+0x00000001u; // 800D3958
  c->r[3]=0u+0x00000007u; // 800D395C
  W8(c->r[30]+0x0000009Du,c->r[0]); // 800D3960
  c->lr=0x800D3968u; f_80269AD0(c); // 800D3964
L_800D3968:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D3968
  c->r[3]=c->r[30]|c->r[30]; // 800D396C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D3970
  c->r[5]=0u+0x00000011u; // 800D3974
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D3978
  c->r[6]=0u+0x00000000u; // 800D397C
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3980
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D3984
  c->ctr=c->r[12]; // 800D3988
  if (true) { c->lr=0x800D3990u; dispatch(c,c->ctr); } // 800D398C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D3990
  c->r[3]=c->r[30]|c->r[30]; // 800D3994
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D3998
  c->r[5]=0u+0x00000001u; // 800D399C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D39A0
  c->r[6]=0u+0x00000000u; // 800D39A4
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D39A8
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D39AC
  c->ctr=c->r[12]; // 800D39B0
  if (true) { c->lr=0x800D39B8u; dispatch(c,c->ctr); } // 800D39B4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D39B8
  c->r[3]=c->r[30]|c->r[30]; // 800D39BC
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800D39C0
  c->r[5]=0u+0x00000030u; // 800D39C4
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D39C8
  c->r[6]=0u+0x00000000u; // 800D39CC
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D39D0
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D39D4
  c->ctr=c->r[12]; // 800D39D8
  if (true) { c->lr=0x800D39E0u; dispatch(c,c->ctr); } // 800D39DC
  c->r[4]=R8(c->r[30]+0x0000009Eu); // 800D39E0
  cmpu(c,0,c->r[4],0x000000FFu); // 800D39E4
  if (crb(c,2)) { goto L_800D3A00; } // 800D39E8
  c->r[3]=0u+0x80550000u; // 800D39EC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D39F0
  c->lr=0x800D39F8u; f_8018D738(c); // 800D39F4
  c->r[0]=0u+0x000000FFu; // 800D39F8
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800D39FC
L_800D3A00:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3A00
  c->r[4]=0u+0x0000000Bu; // 800D3A04
  c->r[5]=0u+0x00000013u; // 800D3A08
  c->r[6]=0u+0x00000001u; // 800D3A0C
  c->r[7]=0u+0x00000001u; // 800D3A10
  c->lr=0x800D3A18u; f_8017900C(c); // 800D3A14
  c->r[0]=0u+0x00000001u; // 800D3A18
  W8(c->r[30]+0x000000A3u,c->r[0]); // 800D3A1C
L_800D3A20:;
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D3A20
  cmps(c,0,(int32_t)c->r[0],0); // 800D3A24
  if (crb(c,2)) { goto L_800D3A34; } // 800D3A28
  c->r[0]=0u+0x00000001u; // 800D3A2C
  W8(c->r[30]+0x000000A6u,c->r[0]); // 800D3A30
L_800D3A34:;
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D3A34
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D3A38
  c->lr=0x800D3A40u; f_802501B0(c); // 800D3A3C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D3A40
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D3A44
  c->lr=0x800D3A4Cu; f_802501B0(c); // 800D3A48
  cmps(c,0,(int32_t)c->r[3],0); // 800D3A4C
  if (crb(c,2)) { goto L_800D3DB8; } // 800D3A50
  c->r[3]=c->r[30]+0x0000000Cu; // 800D3A54
  c->r[4]=0u+0x00000000u; // 800D3A58
  c->lr=0x800D3A60u; f_8003D828(c); // 800D3A5C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3A60
  if (crb(c,2)) { goto L_800D3A7C; } // 800D3A64
  c->r[0]=0u+0x00000001u; // 800D3A68
  c->r[3]=c->r[30]+0x0000000Cu; // 800D3A6C
  W8(c->r[30]+0x000000A4u,c->r[0]); // 800D3A70
  c->r[4]=0u+0x0000012Cu; // 800D3A74
  c->lr=0x800D3A7Cu; f_80036430(c); // 800D3A78
L_800D3A7C:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D3A7C
  c->r[3]=c->r[30]|c->r[30]; // 800D3A80
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3A84
  c->r[5]=0u+0x0000000Cu; // 800D3A88
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D3A8C
  c->r[6]=0u+0x00000001u; // 800D3A90
  c->f[2]=c->f[1]; // 800D3A94
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D3A98
  c->ctr=c->r[12]; // 800D3A9C
  if (true) { c->lr=0x800D3AA4u; dispatch(c,c->ctr); } // 800D3AA0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D3AA4
  c->r[3]=c->r[30]|c->r[30]; // 800D3AA8
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3AAC
  c->r[5]=0u+0x00000000u; // 800D3AB0
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D3AB4
  c->r[6]=0u+0x00000001u; // 800D3AB8
  c->f[2]=c->f[1]; // 800D3ABC
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D3AC0
  c->ctr=c->r[12]; // 800D3AC4
  if (true) { c->lr=0x800D3ACCu; dispatch(c,c->ctr); } // 800D3AC8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D3ACC
  c->r[3]=c->r[30]|c->r[30]; // 800D3AD0
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3AD4
  c->r[5]=0u+0x00000021u; // 800D3AD8
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D3ADC
  c->r[6]=0u+0x00000001u; // 800D3AE0
  c->f[2]=c->f[1]; // 800D3AE4
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800D3AE8
  c->ctr=c->r[12]; // 800D3AEC
  if (true) { c->lr=0x800D3AF4u; dispatch(c,c->ctr); } // 800D3AF0
  c->r[3]=0u+0x00000000u; // 800D3AF4
  c->lr=0x800D3AFCu; f_80269A6C(c); // 800D3AF8
  c->r[0]=0u+0x00000000u; // 800D3AFC
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D3B00
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D3B04
  goto L_800D3DB8; // 800D3B08
L_800D3B0C:;
  c->r[3]=R8(c->r[30]+0x0000009Cu); // 800D3B0C
  cmps(c,0,(int32_t)c->r[3],3); // 800D3B10
  if (crb(c,2)) { goto L_800D3C94; } // 800D3B14
  if (!crb(c,0)) { goto L_800D3D7C; } // 800D3B18
  cmps(c,0,(int32_t)c->r[3],0); // 800D3B1C
  if (crb(c,2)) { goto L_800D3B2C; } // 800D3B20
  if (!crb(c,0)) { goto L_800D3B3C; } // 800D3B24
  goto L_800D3D7C; // 800D3B28
L_800D3B2C:;
  c->r[0]=0u+0x00000000u; // 800D3B2C
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D3B30
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D3B34
  goto L_800D3D7C; // 800D3B38
L_800D3B3C:;
  c->r[0]=R8(c->r[30]+0x000000A2u); // 800D3B3C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3B40
  if (!crb(c,2)) { goto L_800D3B58; } // 800D3B44
  c->r[0]=0u+0x00000000u; // 800D3B48
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D3B4C
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D3B50
  goto L_800D3D7C; // 800D3B54
L_800D3B58:;
  c->r[0]=R8(c->r[30]+0x000000A0u); // 800D3B58
  cmpu(c,0,c->r[0],c->r[3]); // 800D3B5C
  if (crb(c,0)) { goto L_800D3D7C; } // 800D3B60
  c->r[0]=0u+0x00000003u; // 800D3B64
  c->r[3]=0u+0x00000000u; // 800D3B68
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D3B6C
  c->r[4]=0u+0x00000006u; // 800D3B70
  c->r[5]=0u+0x00000010u; // 800D3B74
  c->lr=0x800D3B7Cu; f_8027C0C8(c); // 800D3B78
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D3B7C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3B80
  if (crb(c,2)) { goto L_800D3BA4; } // 800D3B84
  c->r[4]=0u+0x00000001u; // 800D3B88
  c->r[3]=0u+0x00000000u; // 800D3B8C
  c->r[0]=0u+0x0000001Eu; // 800D3B90
  W8(c->r[30]+0x000000A6u,c->r[4]); // 800D3B94
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800D3B98
  W8(c->r[30]+0x000000A8u,c->r[0]); // 800D3B9C
  W8(c->r[30]+0x000000A7u,c->r[4]); // 800D3BA0
L_800D3BA4:;
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D3BA4
  cmps(c,0,(int32_t)c->r[0],0); // 800D3BA8
  if (!crb(c,2)) { goto L_800D3BC0; } // 800D3BAC
  c->r[0]=0u+0x00000001u; // 800D3BB0
  c->r[3]=0u+0x00000007u; // 800D3BB4
  W8(c->r[30]+0x0000009Du,c->r[0]); // 800D3BB8
  c->lr=0x800D3BC0u; f_80269AD0(c); // 800D3BBC
L_800D3BC0:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D3BC0
  c->r[3]=c->r[30]|c->r[30]; // 800D3BC4
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D3BC8
  c->r[5]=0u+0x00000011u; // 800D3BCC
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D3BD0
  c->r[6]=0u+0x00000000u; // 800D3BD4
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3BD8
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D3BDC
  c->ctr=c->r[12]; // 800D3BE0
  if (true) { c->lr=0x800D3BE8u; dispatch(c,c->ctr); } // 800D3BE4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D3BE8
  c->r[3]=c->r[30]|c->r[30]; // 800D3BEC
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D3BF0
  c->r[5]=0u+0x00000001u; // 800D3BF4
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D3BF8
  c->r[6]=0u+0x00000000u; // 800D3BFC
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3C00
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D3C04
  c->ctr=c->r[12]; // 800D3C08
  if (true) { c->lr=0x800D3C10u; dispatch(c,c->ctr); } // 800D3C0C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D3C10
  c->r[3]=c->r[30]|c->r[30]; // 800D3C14
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800D3C18
  c->r[5]=0u+0x00000030u; // 800D3C1C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D3C20
  c->r[6]=0u+0x00000000u; // 800D3C24
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3C28
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D3C2C
  c->ctr=c->r[12]; // 800D3C30
  if (true) { c->lr=0x800D3C38u; dispatch(c,c->ctr); } // 800D3C34
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D3C38
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D3C3C
  c->lr=0x800D3C44u; f_802501B0(c); // 800D3C40
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D3C44
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D3C48
  c->lr=0x800D3C50u; f_802501B0(c); // 800D3C4C
  c->r[4]=R8(c->r[30]+0x0000009Eu); // 800D3C50
  cmpu(c,0,c->r[4],0x000000FFu); // 800D3C54
  if (crb(c,2)) { goto L_800D3C70; } // 800D3C58
  c->r[3]=0u+0x80550000u; // 800D3C5C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D3C60
  c->lr=0x800D3C68u; f_8018D738(c); // 800D3C64
  c->r[0]=0u+0x000000FFu; // 800D3C68
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800D3C6C
L_800D3C70:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3C70
  c->r[4]=0u+0x0000000Bu; // 800D3C74
  c->r[5]=0u+0x00000013u; // 800D3C78
  c->r[6]=0u+0x00000001u; // 800D3C7C
  c->r[7]=0u+0x00000001u; // 800D3C80
  c->lr=0x800D3C88u; f_8017900C(c); // 800D3C84
  c->r[0]=0u+0x00000001u; // 800D3C88
  W8(c->r[30]+0x000000A3u,c->r[0]); // 800D3C8C
  goto L_800D3D7C; // 800D3C90
L_800D3C94:;
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D3C94
  cmps(c,0,(int32_t)c->r[0],0); // 800D3C98
  if (crb(c,2)) { goto L_800D3CA8; } // 800D3C9C
  c->r[0]=0u+0x00000001u; // 800D3CA0
  W8(c->r[30]+0x000000A6u,c->r[0]); // 800D3CA4
L_800D3CA8:;
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D3CA8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D3CAC
  c->lr=0x800D3CB4u; f_802501B0(c); // 800D3CB0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D3CB4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D3CB8
  c->lr=0x800D3CC0u; f_802501B0(c); // 800D3CBC
  cmps(c,0,(int32_t)c->r[3],0); // 800D3CC0
  if (crb(c,2)) { goto L_800D3D7C; } // 800D3CC4
  c->r[3]=c->r[30]+0x0000000Cu; // 800D3CC8
  c->r[4]=0u+0x00000000u; // 800D3CCC
  c->lr=0x800D3CD4u; f_8003D828(c); // 800D3CD0
  cmps(c,0,(int32_t)c->r[3],0); // 800D3CD4
  if (crb(c,2)) { goto L_800D3CF0; } // 800D3CD8
  c->r[0]=0u+0x00000001u; // 800D3CDC
  c->r[3]=c->r[30]+0x0000000Cu; // 800D3CE0
  W8(c->r[30]+0x000000A4u,c->r[0]); // 800D3CE4
  c->r[4]=0u+0x0000012Cu; // 800D3CE8
  c->lr=0x800D3CF0u; f_80036430(c); // 800D3CEC
L_800D3CF0:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D3CF0
  c->r[3]=c->r[30]|c->r[30]; // 800D3CF4
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3CF8
  c->r[5]=0u+0x0000000Cu; // 800D3CFC
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D3D00
  c->r[6]=0u+0x00000001u; // 800D3D04
  c->f[2]=c->f[1]; // 800D3D08
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D3D0C
  c->ctr=c->r[12]; // 800D3D10
  if (true) { c->lr=0x800D3D18u; dispatch(c,c->ctr); } // 800D3D14
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D3D18
  c->r[3]=c->r[30]|c->r[30]; // 800D3D1C
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3D20
  c->r[5]=0u+0x00000000u; // 800D3D24
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D3D28
  c->r[6]=0u+0x00000001u; // 800D3D2C
  c->f[2]=c->f[1]; // 800D3D30
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D3D34
  c->ctr=c->r[12]; // 800D3D38
  if (true) { c->lr=0x800D3D40u; dispatch(c,c->ctr); } // 800D3D3C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D3D40
  c->r[3]=c->r[30]|c->r[30]; // 800D3D44
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3D48
  c->r[5]=0u+0x00000021u; // 800D3D4C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D3D50
  c->r[6]=0u+0x00000001u; // 800D3D54
  c->f[2]=c->f[1]; // 800D3D58
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800D3D5C
  c->ctr=c->r[12]; // 800D3D60
  if (true) { c->lr=0x800D3D68u; dispatch(c,c->ctr); } // 800D3D64
  c->r[3]=0u+0x00000000u; // 800D3D68
  c->lr=0x800D3D70u; f_80269A6C(c); // 800D3D6C
  c->r[0]=0u+0x00000000u; // 800D3D70
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D3D74
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D3D78
L_800D3D7C:;
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D3D7C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3D80
  if (crb(c,2)) { goto L_800D3D98; } // 800D3D84
  c->r[0]=0u+0x00000000u; // 800D3D88
  c->r[3]=0u+0x00000000u; // 800D3D8C
  W8(c->r[30]+0x0000009Du,c->r[0]); // 800D3D90
  c->lr=0x800D3D98u; f_80269A6C(c); // 800D3D94
L_800D3D98:;
  c->r[4]=R8(c->r[30]+0x0000009Eu); // 800D3D98
  cmpu(c,0,c->r[4],0x000000FFu); // 800D3D9C
  if (crb(c,2)) { goto L_800D3DB8; } // 800D3DA0
  c->r[3]=0u+0x80550000u; // 800D3DA4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D3DA8
  c->lr=0x800D3DB0u; f_8018D738(c); // 800D3DAC
  c->r[0]=0u+0x000000FFu; // 800D3DB0
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800D3DB4
L_800D3DB8:;
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D3DB8
  cmps(c,0,(int32_t)c->r[0],0); // 800D3DBC
  if (crb(c,2)) { goto L_800D3E08; } // 800D3DC0
  c->r[0]=R8(c->r[30]+0x000000A6u); // 800D3DC4
  cmps(c,0,(int32_t)c->r[0],0); // 800D3DC8
  if (crb(c,2)) { goto L_800D3E08; } // 800D3DCC
  c->r[0]=R8(c->r[30]+0x000000A7u); // 800D3DD0
  cmps(c,0,(int32_t)c->r[0],0); // 800D3DD4
  if (!crb(c,2)) { goto L_800D3E08; } // 800D3DD8
  c->r[0]=R8(c->r[30]+0x000000A8u); // 800D3DDC
  cmps(c,0,(int32_t)c->r[0],0); // 800D3DE0
  if (!crb(c,2)) { goto L_800D3E08; } // 800D3DE4
  c->r[3]=0u+0x00000000u; // 800D3DE8
  c->r[0]=0u+0x0000000Cu; // 800D3DEC
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800D3DF0
  c->r[3]=0u+0x00000000u; // 800D3DF4
  c->r[4]=0u+0x00000002u; // 800D3DF8
  c->r[5]=0u+0x00000008u; // 800D3DFC
  W8(c->r[30]+0x000000A8u,c->r[0]); // 800D3E00
  c->lr=0x800D3E08u; f_8027C0C8(c); // 800D3E04
L_800D3E08:;
  c->r[3]=R8(c->r[30]+0x000000A1u); // 800D3E08
  cmps(c,0,(int32_t)c->r[3],0); // 800D3E0C
  if (crb(c,2)) { goto L_800D3E1C; } // 800D3E10
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D3E14
  W8(c->r[30]+0x000000A1u,c->r[0]); // 800D3E18
L_800D3E1C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D3E1C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D3E20
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D3E24
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D3E28
  c->lr=c->r[0]; // 800D3E2C
  c->r[1]=c->r[1]+0x00000030u; // 800D3E30
  return; // 800D3E34
}

// fn_800D3E38
void f_800D3E38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3E38
  c->r[0]=c->lr; // 800D3E3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D3E40
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D3E44
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D3E48
  c->r[30]=c->r[3]|c->r[3]; // 800D3E4C
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D3E50
  c->lr=0x800D3E58u; f_8024E040(c); // 800D3E54
  c->r[3]=0u+0x805D0000u; // 800D3E58
  c->r[4]=c->r[1]+0x00000008u; // 800D3E5C
  c->r[3]=c->r[3]+0x00003E0Cu; // 800D3E60
  c->lr=0x800D3E68u; f_801F93AC(c); // 800D3E64
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D3E68
  c->r[31]=c->r[3]|c->r[3]; // 800D3E6C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3E70
  if (crb(c,2)) { goto L_800D3EEC; } // 800D3E74
  c->r[0]=R8(c->r[30]+0x000000A8u); // 800D3E78
  c->r[29]=0u+0x00000000u; // 800D3E7C
  W8(c->r[30]+0x000000A6u,c->r[29]); // 800D3E80
  cmps(c,0,(int32_t)c->r[0],0); // 800D3E84
  if (crb(c,2)) { goto L_800D3EEC; } // 800D3E88
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800D3E8C
  c->lr=0x800D3E94u; f_80035554(c); // 800D3E90
  c->r[3]=R8(c->r[30]+0x000000A9u); // 800D3E94
  c->r[0]=0u+0x43300000u; // 800D3E98
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D3E9C
  {uint32_t ea=c->r[2]+0xFFFFA1A8u; c->f[2]=RF64(ea);} // 800D3EA0
  W32(c->r[1]+0x00000014u,c->r[3]); // 800D3EA4
  c->r[0]=R8(c->r[30]+0x000000A8u); // 800D3EA8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800D3EAC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800D3EB0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D3EB4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D3EB8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 800D3EBC
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 800D3EC0
  c->r[3]=rotl(c->r[4],0)&0x000000FFu; // 800D3EC4
  W8(c->r[30]+0x000000A9u,c->r[4]); // 800D3EC8
  cmpu(c,0,c->r[3],c->r[0]); // 800D3ECC
  if (crb(c,0)) { goto L_800D3EE4; } // 800D3ED0
  W8(c->r[30]+0x000000A7u,c->r[29]); // 800D3ED4
  W8(c->r[30]+0x000000A9u,c->r[29]); // 800D3ED8
  W8(c->r[30]+0x000000A8u,c->r[29]); // 800D3EDC
  goto L_800D3EEC; // 800D3EE0
L_800D3EE4:;
  c->r[0]=0u+0x00000001u; // 800D3EE4
  W8(c->r[30]+0x000000A6u,c->r[0]); // 800D3EE8
L_800D3EEC:;
  c->r[3]=R8(c->r[30]+0x000000A2u); // 800D3EEC
  c->r[0]=0u+0x00000000u; // 800D3EF0
  W8(c->r[30]+0x000000A4u,c->r[0]); // 800D3EF4
  cmps(c,0,(int32_t)c->r[3],0); // 800D3EF8
  if (crb(c,2)) { goto L_800D3F08; } // 800D3EFC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D3F00
  W8(c->r[30]+0x000000A2u,c->r[0]); // 800D3F04
L_800D3F08:;
  c->r[3]=c->r[30]+0x0000000Cu; // 800D3F08
  c->r[4]=0u+0x00000000u; // 800D3F0C
  c->lr=0x800D3F14u; f_80038BCC(c); // 800D3F10
  cmps(c,0,(int32_t)c->r[3],0); // 800D3F14
  if (crb(c,2)) { goto L_800D3F24; } // 800D3F18
  c->r[3]=c->r[30]+0x0000000Cu; // 800D3F1C
  c->lr=0x800D3F24u; f_8003E468(c); // 800D3F20
L_800D3F24:;
  c->r[0]=R8(c->r[30]+0x0000009Bu); // 800D3F24
  cmps(c,0,(int32_t)c->r[0],0); // 800D3F28
  if (crb(c,2)) { goto L_800D4854; } // 800D3F2C
  c->r[0]=R8(c->r[30]+0x00000028u); // 800D3F30
  cmps(c,0,(int32_t)c->r[0],0); // 800D3F34
  if (!crb(c,2)) { goto L_800D404C; } // 800D3F38
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 800D3F3C
  cmps(c,0,(int32_t)c->r[0],2); // 800D3F40
  if (crb(c,2)) { goto L_800D3FCC; } // 800D3F44
  if (!crb(c,0)) { goto L_800D4040; } // 800D3F48
  cmps(c,0,(int32_t)c->r[0],1); // 800D3F4C
  if (!crb(c,0)) { goto L_800D3F58; } // 800D3F50
  goto L_800D4040; // 800D3F54
L_800D3F58:;
  c->r[0]=R8(c->r[30]+0x000000AAu); // 800D3F58
  c->r[3]=0u+0x00000000u; // 800D3F5C
  W8(c->r[30]+0x000000ABu,c->r[3]); // 800D3F60
  cmpu(c,0,c->r[0],0x00000008u); // 800D3F64
  if (!crb(c,1)) { goto L_800D3F90; } // 800D3F68
  c->r[0]=R8(c->r[30]+0x000000A0u); // 800D3F6C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3F70
  if (!crb(c,2)) { goto L_800D3F84; } // 800D3F74
  c->r[0]=0u+0x00000001u; // 800D3F78
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D3F7C
  goto L_800D404C; // 800D3F80
L_800D3F84:;
  c->r[0]=0u+0x00000003u; // 800D3F84
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D3F88
  goto L_800D404C; // 800D3F8C
L_800D3F90:;
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800D3F90
  c->lr=0x800D3F98u; f_80035554(c); // 800D3F94
  c->r[3]=R8(c->r[30]+0x000000AAu); // 800D3F98
  c->r[0]=0u+0x43300000u; // 800D3F9C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800D3FA0
  {uint32_t ea=c->r[2]+0xFFFFA1A8u; c->f[2]=RF64(ea);} // 800D3FA4
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800D3FA8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800D3FAC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800D3FB0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D3FB4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D3FB8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D3FBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3FC0
  W8(c->r[30]+0x000000AAu,c->r[0]); // 800D3FC4
  goto L_800D404C; // 800D3FC8
L_800D3FCC:;
  c->r[0]=R8(c->r[30]+0x000000ABu); // 800D3FCC
  c->r[3]=0u+0x00000000u; // 800D3FD0
  W8(c->r[30]+0x000000AAu,c->r[3]); // 800D3FD4
  cmpu(c,0,c->r[0],0x00000004u); // 800D3FD8
  if (!crb(c,1)) { goto L_800D4004; } // 800D3FDC
  c->r[0]=R8(c->r[30]+0x000000A0u); // 800D3FE0
  cmpu(c,0,c->r[0],0x00000002u); // 800D3FE4
  if (!crb(c,0)) { goto L_800D3FF8; } // 800D3FE8
  c->r[0]=0u+0x00000002u; // 800D3FEC
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D3FF0
  goto L_800D404C; // 800D3FF4
L_800D3FF8:;
  c->r[0]=0u+0x00000003u; // 800D3FF8
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D3FFC
  goto L_800D404C; // 800D4000
L_800D4004:;
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800D4004
  c->lr=0x800D400Cu; f_80035554(c); // 800D4008
  c->r[3]=R8(c->r[30]+0x000000ABu); // 800D400C
  c->r[0]=0u+0x43300000u; // 800D4010
  W32(c->r[1]+0x00000018u,c->r[0]); // 800D4014
  {uint32_t ea=c->r[2]+0xFFFFA1A8u; c->f[2]=RF64(ea);} // 800D4018
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800D401C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800D4020
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800D4024
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D4028
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D402C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D4030
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4034
  W8(c->r[30]+0x000000ABu,c->r[0]); // 800D4038
  goto L_800D404C; // 800D403C
L_800D4040:;
  c->r[0]=0u+0x00000000u; // 800D4040
  W8(c->r[30]+0x000000AAu,c->r[0]); // 800D4044
  W8(c->r[30]+0x000000ABu,c->r[0]); // 800D4048
L_800D404C:;
  c->r[0]=R8(c->r[30]+0x0000009Cu); // 800D404C
  cmps(c,0,(int32_t)c->r[0],2); // 800D4050
  if (crb(c,2)) { goto L_800D4430; } // 800D4054
  if (!crb(c,0)) { goto L_800D406C; } // 800D4058
  cmps(c,0,(int32_t)c->r[0],0); // 800D405C
  if (crb(c,2)) { goto L_800D4078; } // 800D4060
  if (!crb(c,0)) { goto L_800D40C0; } // 800D4064
  goto L_800D4B00; // 800D4068
L_800D406C:;
  cmps(c,0,(int32_t)c->r[0],4); // 800D406C
  if (!crb(c,0)) { goto L_800D4B00; } // 800D4070
  goto L_800D4638; // 800D4074
L_800D4078:;
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D4078
  c->r[3]=0u+0x00000000u; // 800D407C
  W8(c->r[30]+0x00000028u,c->r[3]); // 800D4080
  cmps(c,0,(int32_t)c->r[0],0); // 800D4084
  W8(c->r[30]+0x000000A2u,c->r[3]); // 800D4088
  if (crb(c,2)) { goto L_800D409C; } // 800D408C
  W8(c->r[30]+0x0000009Du,c->r[3]); // 800D4090
  c->r[3]=0u+0x00000000u; // 800D4094
  c->lr=0x800D409Cu; f_80269A6C(c); // 800D4098
L_800D409C:;
  c->r[4]=R8(c->r[30]+0x0000009Eu); // 800D409C
  cmpu(c,0,c->r[4],0x000000FFu); // 800D40A0
  if (crb(c,2)) { goto L_800D4B00; } // 800D40A4
  c->r[3]=0u+0x80550000u; // 800D40A8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D40AC
  c->lr=0x800D40B4u; f_8018D738(c); // 800D40B0
  c->r[0]=0u+0x000000FFu; // 800D40B4
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800D40B8
  goto L_800D4B00; // 800D40BC
L_800D40C0:;
  c->r[3]=R8(c->r[30]+0x00000028u); // 800D40C0
  cmps(c,0,(int32_t)c->r[3],1); // 800D40C4
  if (crb(c,2)) { goto L_800D41BC; } // 800D40C8
  if (!crb(c,0)) { goto L_800D4B00; } // 800D40CC
  cmps(c,0,(int32_t)c->r[3],0); // 800D40D0
  if (!crb(c,0)) { goto L_800D40DC; } // 800D40D4
  goto L_800D4B00; // 800D40D8
L_800D40DC:;
  c->r[0]=0u+0x00000010u; // 800D40DC
  c->r[3]=c->r[3]+0x00000001u; // 800D40E0
  W8(c->r[30]+0x00000028u,c->r[3]); // 800D40E4
  c->r[3]=0u+0x00000000u; // 800D40E8
  c->r[4]=0u+0x00000003u; // 800D40EC
  c->r[5]=0u+0x0000000Cu; // 800D40F0
  W8(c->r[30]+0x000000A1u,c->r[0]); // 800D40F4
  W8(c->r[30]+0x000000A2u,c->r[0]); // 800D40F8
  c->lr=0x800D4100u; f_8027C0C8(c); // 800D40FC
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D4100
  cmps(c,0,(int32_t)c->r[0],0); // 800D4104
  if (crb(c,2)) { goto L_800D4128; } // 800D4108
  c->r[4]=0u+0x00000001u; // 800D410C
  c->r[3]=0u+0x00000000u; // 800D4110
  c->r[0]=0u+0x0000001Cu; // 800D4114
  W8(c->r[30]+0x000000A6u,c->r[4]); // 800D4118
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800D411C
  W8(c->r[30]+0x000000A8u,c->r[0]); // 800D4120
  W8(c->r[30]+0x000000A7u,c->r[4]); // 800D4124
L_800D4128:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4128
  c->r[4]=0u+0x0000000Bu; // 800D412C
  c->r[5]=0u+0x00000012u; // 800D4130
  c->r[6]=0u+0x00000001u; // 800D4134
  c->r[7]=0u+0x00000001u; // 800D4138
  c->lr=0x800D4140u; f_8017900C(c); // 800D413C
  c->r[0]=R8(c->r[30]+0x0000009Fu); // 800D4140
  cmps(c,0,(int32_t)c->r[0],0); // 800D4144
  if (crb(c,2)) { goto L_800D4164; } // 800D4148
  c->r[3]=c->r[30]|c->r[30]; // 800D414C
  c->r[4]=0u+0x0000000Bu; // 800D4150
  c->r[5]=0u+0x00000011u; // 800D4154
  c->r[6]=0u+0x00000001u; // 800D4158
  c->r[7]=0u+0x00000001u; // 800D415C
  c->lr=0x800D4164u; f_8017900C(c); // 800D4160
L_800D4164:;
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D4164
  cmps(c,0,(int32_t)c->r[0],0); // 800D4168
  if (!crb(c,2)) { goto L_800D4180; } // 800D416C
  c->r[0]=0u+0x00000001u; // 800D4170
  c->r[3]=0u+0x00000007u; // 800D4174
  W8(c->r[30]+0x0000009Du,c->r[0]); // 800D4178
  c->lr=0x800D4180u; f_80269AD0(c); // 800D417C
L_800D4180:;
  c->r[0]=R8(c->r[30]+0x0000009Eu); // 800D4180
  cmpu(c,0,c->r[0],0x000000FFu); // 800D4184
  if (!crb(c,2)) { goto L_800D41BC; } // 800D4188
  c->r[0]=R8(c->r[30]+0x0000009Fu); // 800D418C
  cmps(c,0,(int32_t)c->r[0],0); // 800D4190
  if (crb(c,2)) { goto L_800D41BC; } // 800D4194
  c->r[4]=0u+0x803A0000u; // 800D4198
  c->r[3]=0u+0x80550000u; // 800D419C
  c->r[4]=c->r[4]+0xFFFFE074u; // 800D41A0
  c->r[5]=0u+0x00000000u; // 800D41A4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D41A8
  c->r[6]=0u+0x00000000u; // 800D41AC
  c->r[4]=c->r[4]+0x00000024u; // 800D41B0
  c->lr=0x800D41B8u; f_8018D3E4(c); // 800D41B4
  W8(c->r[30]+0x0000009Eu,c->r[3]); // 800D41B8
L_800D41BC:;
  c->r[0]=R8(c->r[30]+0x000000A2u); // 800D41BC
  cmps(c,0,(int32_t)c->r[0],0); // 800D41C0
  if (!crb(c,2)) { goto L_800D41D8; } // 800D41C4
  c->r[0]=0u+0x00000000u; // 800D41C8
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D41CC
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D41D0
  goto L_800D4B00; // 800D41D4
L_800D41D8:;
  c->r[0]=R8(c->r[30]+0x000000A0u); // 800D41D8
  cmps(c,0,(int32_t)c->r[0],0); // 800D41DC
  if (crb(c,2)) { goto L_800D4314; } // 800D41E0
  c->r[0]=0u+0x00000003u; // 800D41E4
  c->r[3]=0u+0x00000000u; // 800D41E8
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D41EC
  c->r[4]=0u+0x00000006u; // 800D41F0
  c->r[5]=0u+0x00000010u; // 800D41F4
  c->lr=0x800D41FCu; f_8027C0C8(c); // 800D41F8
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D41FC
  cmps(c,0,(int32_t)c->r[0],0); // 800D4200
  if (crb(c,2)) { goto L_800D4224; } // 800D4204
  c->r[4]=0u+0x00000001u; // 800D4208
  c->r[3]=0u+0x00000000u; // 800D420C
  c->r[0]=0u+0x0000001Eu; // 800D4210
  W8(c->r[30]+0x000000A6u,c->r[4]); // 800D4214
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800D4218
  W8(c->r[30]+0x000000A8u,c->r[0]); // 800D421C
  W8(c->r[30]+0x000000A7u,c->r[4]); // 800D4220
L_800D4224:;
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D4224
  cmps(c,0,(int32_t)c->r[0],0); // 800D4228
  if (!crb(c,2)) { goto L_800D4240; } // 800D422C
  c->r[0]=0u+0x00000001u; // 800D4230
  c->r[3]=0u+0x00000007u; // 800D4234
  W8(c->r[30]+0x0000009Du,c->r[0]); // 800D4238
  c->lr=0x800D4240u; f_80269AD0(c); // 800D423C
L_800D4240:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D4240
  c->r[3]=c->r[30]|c->r[30]; // 800D4244
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D4248
  c->r[5]=0u+0x00000011u; // 800D424C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D4250
  c->r[6]=0u+0x00000000u; // 800D4254
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4258
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D425C
  c->ctr=c->r[12]; // 800D4260
  if (true) { c->lr=0x800D4268u; dispatch(c,c->ctr); } // 800D4264
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D4268
  c->r[3]=c->r[30]|c->r[30]; // 800D426C
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D4270
  c->r[5]=0u+0x00000001u; // 800D4274
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D4278
  c->r[6]=0u+0x00000000u; // 800D427C
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4280
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D4284
  c->ctr=c->r[12]; // 800D4288
  if (true) { c->lr=0x800D4290u; dispatch(c,c->ctr); } // 800D428C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D4290
  c->r[3]=c->r[30]|c->r[30]; // 800D4294
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800D4298
  c->r[5]=0u+0x00000030u; // 800D429C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D42A0
  c->r[6]=0u+0x00000000u; // 800D42A4
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D42A8
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D42AC
  c->ctr=c->r[12]; // 800D42B0
  if (true) { c->lr=0x800D42B8u; dispatch(c,c->ctr); } // 800D42B4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D42B8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D42BC
  c->lr=0x800D42C4u; f_802501B0(c); // 800D42C0
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D42C4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D42C8
  c->lr=0x800D42D0u; f_802501B0(c); // 800D42CC
  c->r[4]=R8(c->r[30]+0x0000009Eu); // 800D42D0
  cmpu(c,0,c->r[4],0x000000FFu); // 800D42D4
  if (crb(c,2)) { goto L_800D42F0; } // 800D42D8
  c->r[3]=0u+0x80550000u; // 800D42DC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D42E0
  c->lr=0x800D42E8u; f_8018D738(c); // 800D42E4
  c->r[0]=0u+0x000000FFu; // 800D42E8
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800D42EC
L_800D42F0:;
  c->r[3]=c->r[30]|c->r[30]; // 800D42F0
  c->r[4]=0u+0x0000000Bu; // 800D42F4
  c->r[5]=0u+0x00000013u; // 800D42F8
  c->r[6]=0u+0x00000001u; // 800D42FC
  c->r[7]=0u+0x00000001u; // 800D4300
  c->lr=0x800D4308u; f_8017900C(c); // 800D4304
  c->r[0]=0u+0x00000001u; // 800D4308
  W8(c->r[30]+0x000000A3u,c->r[0]); // 800D430C
  goto L_800D4B00; // 800D4310
L_800D4314:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4314
  c->lr=0x800D431Cu; f_800D4B84(c); // 800D4318
  {uint32_t ea=c->r[30]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D431C
  c->r[29]=0u+0x00000000u; // 800D4320
  {uint32_t ea=c->r[2]+0xFFFFA19Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4324
  {uint32_t ea=c->r[2]+0xFFFFA1A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4328
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D432C
  fcmp(c,0,c->f[1],c->f[0]); // 800D4330
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800D4334
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D4338
  if (!crb(c,2)) { goto L_800D4344; } // 800D433C
  c->r[29]=0u+0x00000001u; // 800D4340
L_800D4344:;
  {uint32_t ea=c->r[30]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D4344
  {uint32_t ea=c->r[2]+0xFFFFA1A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4348
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D434C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800D4350
  fcmp(c,0,c->f[1],c->f[0]); // 800D4354
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800D4358
  if (!crb(c,0)) { goto L_800D436C; } // 800D435C
  {uint32_t ea=c->r[2]+0xFFFFA1A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4360
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D4364
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 800D4368
L_800D436C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D436C
  c->lr=0x800D4374u; f_800D4BD0(c); // 800D4370
  c->r[3]=c->r[30]|c->r[30]; // 800D4374
  c->lr=0x800D437Cu; f_800D4D04(c); // 800D4378
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D437C
  cmps(c,0,(int32_t)c->r[0],0); // 800D4380
  if (crb(c,2)) { goto L_800D4390; } // 800D4384
  c->r[0]=0u+0x00000001u; // 800D4388
  W8(c->r[30]+0x000000A6u,c->r[0]); // 800D438C
L_800D4390:;
  c->r[3]=R8(c->r[30]+0x000000A2u); // 800D4390
  cmpu(c,0,c->r[3],0x00000004u); // 800D4394
  if (!crb(c,0)) { goto L_800D43F4; } // 800D4398
  c->r[0]=R8(c->r[30]+0x000000A1u); // 800D439C
  c->r[3]=c->r[3]+0x00000005u; // 800D43A0
  W8(c->r[30]+0x000000A2u,c->r[3]); // 800D43A4
  cmps(c,0,(int32_t)c->r[0],0); // 800D43A8
  if (!crb(c,2)) { goto L_800D43F4; } // 800D43AC
  c->r[0]=0u+0x0000000Au; // 800D43B0
  c->r[3]=c->r[30]|c->r[30]; // 800D43B4
  W8(c->r[30]+0x000000A1u,c->r[0]); // 800D43B8
  c->r[4]=0u+0x0000000Bu; // 800D43BC
  c->r[5]=0u+0x00000012u; // 800D43C0
  c->r[6]=0u+0x00000001u; // 800D43C4
  c->r[7]=0u+0x00000001u; // 800D43C8
  c->lr=0x800D43D0u; f_8017900C(c); // 800D43CC
  c->r[0]=R8(c->r[30]+0x0000009Fu); // 800D43D0
  cmps(c,0,(int32_t)c->r[0],0); // 800D43D4
  if (crb(c,2)) { goto L_800D43F4; } // 800D43D8
  c->r[3]=c->r[30]|c->r[30]; // 800D43DC
  c->r[4]=0u+0x0000000Bu; // 800D43E0
  c->r[5]=0u+0x00000011u; // 800D43E4
  c->r[6]=0u+0x00000001u; // 800D43E8
  c->r[7]=0u+0x00000001u; // 800D43EC
  c->lr=0x800D43F4u; f_8017900C(c); // 800D43F0
L_800D43F4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D43F4
  if (crb(c,2)) { goto L_800D4B00; } // 800D43F8
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 800D43FC
  cmpu(c,0,c->r[0],0x00000001u); // 800D4400
  if (crb(c,2)) { goto L_800D441C; } // 800D4404
  {uint32_t ea=c->r[2]+0xFFFFA1A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4408
  c->r[0]=0u+0x00000000u; // 800D440C
  W8(c->r[30]+0x000000A2u,c->r[0]); // 800D4410
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800D4414
  goto L_800D4B00; // 800D4418
L_800D441C:;
  {uint32_t ea=c->r[30]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D441C
  {uint32_t ea=c->r[2]+0xFFFFA1A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4420
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D4424
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800D4428
  goto L_800D4B00; // 800D442C
L_800D4430:;
  c->r[3]=R8(c->r[30]+0x00000028u); // 800D4430
  cmps(c,0,(int32_t)c->r[3],1); // 800D4434
  if (crb(c,2)) { goto L_800D44EC; } // 800D4438
  if (!crb(c,0)) { goto L_800D4B00; } // 800D443C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4440
  if (!crb(c,0)) { goto L_800D444C; } // 800D4444
  goto L_800D4B00; // 800D4448
L_800D444C:;
  c->r[0]=0u+0x00000010u; // 800D444C
  c->r[3]=c->r[3]+0x00000001u; // 800D4450
  W8(c->r[30]+0x00000028u,c->r[3]); // 800D4454
  c->r[3]=0u+0x00000000u; // 800D4458
  c->r[4]=0u+0x00000000u; // 800D445C
  c->r[5]=0u+0x00000008u; // 800D4460
  W8(c->r[30]+0x000000A1u,c->r[0]); // 800D4464
  W8(c->r[30]+0x000000A2u,c->r[0]); // 800D4468
  c->lr=0x800D4470u; f_8027C0C8(c); // 800D446C
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D4470
  cmps(c,0,(int32_t)c->r[0],0); // 800D4474
  if (crb(c,2)) { goto L_800D4498; } // 800D4478
  c->r[4]=0u+0x00000001u; // 800D447C
  c->r[3]=0u+0x00000000u; // 800D4480
  c->r[0]=0u+0x00000014u; // 800D4484
  W8(c->r[30]+0x000000A6u,c->r[4]); // 800D4488
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800D448C
  W8(c->r[30]+0x000000A8u,c->r[0]); // 800D4490
  W8(c->r[30]+0x000000A7u,c->r[4]); // 800D4494
L_800D4498:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4498
  c->r[4]=0u+0x0000000Bu; // 800D449C
  c->r[5]=0u+0x00000012u; // 800D44A0
  c->r[6]=0u+0x00000001u; // 800D44A4
  c->r[7]=0u+0x00000001u; // 800D44A8
  c->lr=0x800D44B0u; f_8017900C(c); // 800D44AC
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D44B0
  cmps(c,0,(int32_t)c->r[0],0); // 800D44B4
  if (crb(c,2)) { goto L_800D44CC; } // 800D44B8
  c->r[0]=0u+0x00000000u; // 800D44BC
  c->r[3]=0u+0x00000000u; // 800D44C0
  W8(c->r[30]+0x0000009Du,c->r[0]); // 800D44C4
  c->lr=0x800D44CCu; f_80269A6C(c); // 800D44C8
L_800D44CC:;
  c->r[4]=R8(c->r[30]+0x0000009Eu); // 800D44CC
  cmpu(c,0,c->r[4],0x000000FFu); // 800D44D0
  if (crb(c,2)) { goto L_800D44EC; } // 800D44D4
  c->r[3]=0u+0x80550000u; // 800D44D8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D44DC
  c->lr=0x800D44E4u; f_8018D738(c); // 800D44E0
  c->r[0]=0u+0x000000FFu; // 800D44E4
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800D44E8
L_800D44EC:;
  c->r[0]=R8(c->r[30]+0x000000A2u); // 800D44EC
  cmps(c,0,(int32_t)c->r[0],0); // 800D44F0
  if (!crb(c,2)) { goto L_800D4508; } // 800D44F4
  c->r[0]=0u+0x00000000u; // 800D44F8
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D44FC
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D4500
  goto L_800D4B00; // 800D4504
L_800D4508:;
  c->r[0]=0u+0x00000003u; // 800D4508
  c->r[3]=0u+0x00000000u; // 800D450C
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D4510
  c->r[4]=0u+0x00000006u; // 800D4514
  c->r[5]=0u+0x00000010u; // 800D4518
  c->lr=0x800D4520u; f_8027C0C8(c); // 800D451C
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D4520
  cmps(c,0,(int32_t)c->r[0],0); // 800D4524
  if (crb(c,2)) { goto L_800D4548; } // 800D4528
  c->r[4]=0u+0x00000001u; // 800D452C
  c->r[3]=0u+0x00000000u; // 800D4530
  c->r[0]=0u+0x0000001Eu; // 800D4534
  W8(c->r[30]+0x000000A6u,c->r[4]); // 800D4538
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800D453C
  W8(c->r[30]+0x000000A8u,c->r[0]); // 800D4540
  W8(c->r[30]+0x000000A7u,c->r[4]); // 800D4544
L_800D4548:;
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D4548
  cmps(c,0,(int32_t)c->r[0],0); // 800D454C
  if (!crb(c,2)) { goto L_800D4564; } // 800D4550
  c->r[0]=0u+0x00000001u; // 800D4554
  c->r[3]=0u+0x00000007u; // 800D4558
  W8(c->r[30]+0x0000009Du,c->r[0]); // 800D455C
  c->lr=0x800D4564u; f_80269AD0(c); // 800D4560
L_800D4564:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D4564
  c->r[3]=c->r[30]|c->r[30]; // 800D4568
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D456C
  c->r[5]=0u+0x00000011u; // 800D4570
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D4574
  c->r[6]=0u+0x00000000u; // 800D4578
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D457C
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D4580
  c->ctr=c->r[12]; // 800D4584
  if (true) { c->lr=0x800D458Cu; dispatch(c,c->ctr); } // 800D4588
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D458C
  c->r[3]=c->r[30]|c->r[30]; // 800D4590
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D4594
  c->r[5]=0u+0x00000001u; // 800D4598
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D459C
  c->r[6]=0u+0x00000000u; // 800D45A0
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D45A4
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D45A8
  c->ctr=c->r[12]; // 800D45AC
  if (true) { c->lr=0x800D45B4u; dispatch(c,c->ctr); } // 800D45B0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D45B4
  c->r[3]=c->r[30]|c->r[30]; // 800D45B8
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800D45BC
  c->r[5]=0u+0x00000030u; // 800D45C0
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D45C4
  c->r[6]=0u+0x00000000u; // 800D45C8
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D45CC
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D45D0
  c->ctr=c->r[12]; // 800D45D4
  if (true) { c->lr=0x800D45DCu; dispatch(c,c->ctr); } // 800D45D8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D45DC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D45E0
  c->lr=0x800D45E8u; f_802501B0(c); // 800D45E4
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D45E8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D45EC
  c->lr=0x800D45F4u; f_802501B0(c); // 800D45F0
  c->r[4]=R8(c->r[30]+0x0000009Eu); // 800D45F4
  cmpu(c,0,c->r[4],0x000000FFu); // 800D45F8
  if (crb(c,2)) { goto L_800D4614; } // 800D45FC
  c->r[3]=0u+0x80550000u; // 800D4600
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D4604
  c->lr=0x800D460Cu; f_8018D738(c); // 800D4608
  c->r[0]=0u+0x000000FFu; // 800D460C
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800D4610
L_800D4614:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4614
  c->r[4]=0u+0x0000000Bu; // 800D4618
  c->r[5]=0u+0x00000013u; // 800D461C
  c->r[6]=0u+0x00000001u; // 800D4620
  c->r[7]=0u+0x00000001u; // 800D4624
  c->lr=0x800D462Cu; f_8017900C(c); // 800D4628
  c->r[0]=0u+0x00000001u; // 800D462C
  W8(c->r[30]+0x000000A3u,c->r[0]); // 800D4630
  goto L_800D4B00; // 800D4634
L_800D4638:;
  c->r[3]=R8(c->r[30]+0x00000028u); // 800D4638
  cmps(c,0,(int32_t)c->r[3],1); // 800D463C
  if (crb(c,2)) { goto L_800D4768; } // 800D4640
  if (!crb(c,0)) { goto L_800D4B00; } // 800D4644
  cmps(c,0,(int32_t)c->r[3],0); // 800D4648
  if (!crb(c,0)) { goto L_800D4654; } // 800D464C
  goto L_800D4B00; // 800D4650
L_800D4654:;
  c->r[0]=c->r[3]+0x00000001u; // 800D4654
  c->r[3]=0u+0x00000000u; // 800D4658
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D465C
  c->r[4]=0u+0x00000006u; // 800D4660
  c->r[5]=0u+0x00000010u; // 800D4664
  c->lr=0x800D466Cu; f_8027C0C8(c); // 800D4668
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D466C
  cmps(c,0,(int32_t)c->r[0],0); // 800D4670
  if (crb(c,2)) { goto L_800D4694; } // 800D4674
  c->r[4]=0u+0x00000001u; // 800D4678
  c->r[3]=0u+0x00000000u; // 800D467C
  c->r[0]=0u+0x0000001Eu; // 800D4680
  W8(c->r[30]+0x000000A6u,c->r[4]); // 800D4684
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800D4688
  W8(c->r[30]+0x000000A8u,c->r[0]); // 800D468C
  W8(c->r[30]+0x000000A7u,c->r[4]); // 800D4690
L_800D4694:;
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D4694
  cmps(c,0,(int32_t)c->r[0],0); // 800D4698
  if (!crb(c,2)) { goto L_800D46B0; } // 800D469C
  c->r[0]=0u+0x00000001u; // 800D46A0
  c->r[3]=0u+0x00000007u; // 800D46A4
  W8(c->r[30]+0x0000009Du,c->r[0]); // 800D46A8
  c->lr=0x800D46B0u; f_80269AD0(c); // 800D46AC
L_800D46B0:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D46B0
  c->r[3]=c->r[30]|c->r[30]; // 800D46B4
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D46B8
  c->r[5]=0u+0x00000011u; // 800D46BC
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D46C0
  c->r[6]=0u+0x00000000u; // 800D46C4
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D46C8
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D46CC
  c->ctr=c->r[12]; // 800D46D0
  if (true) { c->lr=0x800D46D8u; dispatch(c,c->ctr); } // 800D46D4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D46D8
  c->r[3]=c->r[30]|c->r[30]; // 800D46DC
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D46E0
  c->r[5]=0u+0x00000001u; // 800D46E4
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D46E8
  c->r[6]=0u+0x00000000u; // 800D46EC
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D46F0
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D46F4
  c->ctr=c->r[12]; // 800D46F8
  if (true) { c->lr=0x800D4700u; dispatch(c,c->ctr); } // 800D46FC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D4700
  c->r[3]=c->r[30]|c->r[30]; // 800D4704
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800D4708
  c->r[5]=0u+0x00000030u; // 800D470C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D4710
  c->r[6]=0u+0x00000000u; // 800D4714
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4718
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D471C
  c->ctr=c->r[12]; // 800D4720
  if (true) { c->lr=0x800D4728u; dispatch(c,c->ctr); } // 800D4724
  c->r[4]=R8(c->r[30]+0x0000009Eu); // 800D4728
  cmpu(c,0,c->r[4],0x000000FFu); // 800D472C
  if (crb(c,2)) { goto L_800D4748; } // 800D4730
  c->r[3]=0u+0x80550000u; // 800D4734
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D4738
  c->lr=0x800D4740u; f_8018D738(c); // 800D473C
  c->r[0]=0u+0x000000FFu; // 800D4740
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800D4744
L_800D4748:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4748
  c->r[4]=0u+0x0000000Bu; // 800D474C
  c->r[5]=0u+0x00000013u; // 800D4750
  c->r[6]=0u+0x00000001u; // 800D4754
  c->r[7]=0u+0x00000001u; // 800D4758
  c->lr=0x800D4760u; f_8017900C(c); // 800D475C
  c->r[0]=0u+0x00000001u; // 800D4760
  W8(c->r[30]+0x000000A3u,c->r[0]); // 800D4764
L_800D4768:;
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D4768
  cmps(c,0,(int32_t)c->r[0],0); // 800D476C
  if (crb(c,2)) { goto L_800D477C; } // 800D4770
  c->r[0]=0u+0x00000001u; // 800D4774
  W8(c->r[30]+0x000000A6u,c->r[0]); // 800D4778
L_800D477C:;
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D477C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D4780
  c->lr=0x800D4788u; f_802501B0(c); // 800D4784
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D4788
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D478C
  c->lr=0x800D4794u; f_802501B0(c); // 800D4790
  cmps(c,0,(int32_t)c->r[3],0); // 800D4794
  if (crb(c,2)) { goto L_800D4B00; } // 800D4798
  c->r[3]=c->r[30]+0x0000000Cu; // 800D479C
  c->r[4]=0u+0x00000000u; // 800D47A0
  c->lr=0x800D47A8u; f_8003D828(c); // 800D47A4
  cmps(c,0,(int32_t)c->r[3],0); // 800D47A8
  if (crb(c,2)) { goto L_800D47C4; } // 800D47AC
  c->r[0]=0u+0x00000001u; // 800D47B0
  c->r[3]=c->r[30]+0x0000000Cu; // 800D47B4
  W8(c->r[30]+0x000000A4u,c->r[0]); // 800D47B8
  c->r[4]=0u+0x0000012Cu; // 800D47BC
  c->lr=0x800D47C4u; f_80036430(c); // 800D47C0
L_800D47C4:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D47C4
  c->r[3]=c->r[30]|c->r[30]; // 800D47C8
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D47CC
  c->r[5]=0u+0x0000000Cu; // 800D47D0
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D47D4
  c->r[6]=0u+0x00000001u; // 800D47D8
  c->f[2]=c->f[1]; // 800D47DC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D47E0
  c->ctr=c->r[12]; // 800D47E4
  if (true) { c->lr=0x800D47ECu; dispatch(c,c->ctr); } // 800D47E8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D47EC
  c->r[3]=c->r[30]|c->r[30]; // 800D47F0
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D47F4
  c->r[5]=0u+0x00000000u; // 800D47F8
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D47FC
  c->r[6]=0u+0x00000001u; // 800D4800
  c->f[2]=c->f[1]; // 800D4804
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D4808
  c->ctr=c->r[12]; // 800D480C
  if (true) { c->lr=0x800D4814u; dispatch(c,c->ctr); } // 800D4810
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D4814
  c->r[3]=c->r[30]|c->r[30]; // 800D4818
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D481C
  c->r[5]=0u+0x00000021u; // 800D4820
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D4824
  c->r[6]=0u+0x00000001u; // 800D4828
  c->f[2]=c->f[1]; // 800D482C
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800D4830
  c->ctr=c->r[12]; // 800D4834
  if (true) { c->lr=0x800D483Cu; dispatch(c,c->ctr); } // 800D4838
  c->r[3]=0u+0x00000000u; // 800D483C
  c->lr=0x800D4844u; f_80269A6C(c); // 800D4840
  c->r[0]=0u+0x00000000u; // 800D4844
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D4848
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D484C
  goto L_800D4B00; // 800D4850
L_800D4854:;
  c->r[3]=R8(c->r[30]+0x0000009Cu); // 800D4854
  cmps(c,0,(int32_t)c->r[3],3); // 800D4858
  if (crb(c,2)) { goto L_800D49DC; } // 800D485C
  if (!crb(c,0)) { goto L_800D4AC4; } // 800D4860
  cmps(c,0,(int32_t)c->r[3],0); // 800D4864
  if (crb(c,2)) { goto L_800D4874; } // 800D4868
  if (!crb(c,0)) { goto L_800D4884; } // 800D486C
  goto L_800D4AC4; // 800D4870
L_800D4874:;
  c->r[0]=0u+0x00000000u; // 800D4874
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D4878
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D487C
  goto L_800D4AC4; // 800D4880
L_800D4884:;
  c->r[0]=R8(c->r[30]+0x000000A2u); // 800D4884
  cmps(c,0,(int32_t)c->r[0],0); // 800D4888
  if (!crb(c,2)) { goto L_800D48A0; } // 800D488C
  c->r[0]=0u+0x00000000u; // 800D4890
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D4894
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D4898
  goto L_800D4AC4; // 800D489C
L_800D48A0:;
  c->r[0]=R8(c->r[30]+0x000000A0u); // 800D48A0
  cmpu(c,0,c->r[0],c->r[3]); // 800D48A4
  if (crb(c,0)) { goto L_800D4AC4; } // 800D48A8
  c->r[0]=0u+0x00000003u; // 800D48AC
  c->r[3]=0u+0x00000000u; // 800D48B0
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D48B4
  c->r[4]=0u+0x00000006u; // 800D48B8
  c->r[5]=0u+0x00000010u; // 800D48BC
  c->lr=0x800D48C4u; f_8027C0C8(c); // 800D48C0
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D48C4
  cmps(c,0,(int32_t)c->r[0],0); // 800D48C8
  if (crb(c,2)) { goto L_800D48EC; } // 800D48CC
  c->r[4]=0u+0x00000001u; // 800D48D0
  c->r[3]=0u+0x00000000u; // 800D48D4
  c->r[0]=0u+0x0000001Eu; // 800D48D8
  W8(c->r[30]+0x000000A6u,c->r[4]); // 800D48DC
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800D48E0
  W8(c->r[30]+0x000000A8u,c->r[0]); // 800D48E4
  W8(c->r[30]+0x000000A7u,c->r[4]); // 800D48E8
L_800D48EC:;
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D48EC
  cmps(c,0,(int32_t)c->r[0],0); // 800D48F0
  if (!crb(c,2)) { goto L_800D4908; } // 800D48F4
  c->r[0]=0u+0x00000001u; // 800D48F8
  c->r[3]=0u+0x00000007u; // 800D48FC
  W8(c->r[30]+0x0000009Du,c->r[0]); // 800D4900
  c->lr=0x800D4908u; f_80269AD0(c); // 800D4904
L_800D4908:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D4908
  c->r[3]=c->r[30]|c->r[30]; // 800D490C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D4910
  c->r[5]=0u+0x00000011u; // 800D4914
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D4918
  c->r[6]=0u+0x00000000u; // 800D491C
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4920
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D4924
  c->ctr=c->r[12]; // 800D4928
  if (true) { c->lr=0x800D4930u; dispatch(c,c->ctr); } // 800D492C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D4930
  c->r[3]=c->r[30]|c->r[30]; // 800D4934
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D4938
  c->r[5]=0u+0x00000001u; // 800D493C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D4940
  c->r[6]=0u+0x00000000u; // 800D4944
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4948
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D494C
  c->ctr=c->r[12]; // 800D4950
  if (true) { c->lr=0x800D4958u; dispatch(c,c->ctr); } // 800D4954
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D4958
  c->r[3]=c->r[30]|c->r[30]; // 800D495C
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800D4960
  c->r[5]=0u+0x00000030u; // 800D4964
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D4968
  c->r[6]=0u+0x00000000u; // 800D496C
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4970
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D4974
  c->ctr=c->r[12]; // 800D4978
  if (true) { c->lr=0x800D4980u; dispatch(c,c->ctr); } // 800D497C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D4980
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D4984
  c->lr=0x800D498Cu; f_802501B0(c); // 800D4988
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D498C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D4990
  c->lr=0x800D4998u; f_802501B0(c); // 800D4994
  c->r[4]=R8(c->r[30]+0x0000009Eu); // 800D4998
  cmpu(c,0,c->r[4],0x000000FFu); // 800D499C
  if (crb(c,2)) { goto L_800D49B8; } // 800D49A0
  c->r[3]=0u+0x80550000u; // 800D49A4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D49A8
  c->lr=0x800D49B0u; f_8018D738(c); // 800D49AC
  c->r[0]=0u+0x000000FFu; // 800D49B0
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800D49B4
L_800D49B8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D49B8
  c->r[4]=0u+0x0000000Bu; // 800D49BC
  c->r[5]=0u+0x00000013u; // 800D49C0
  c->r[6]=0u+0x00000001u; // 800D49C4
  c->r[7]=0u+0x00000001u; // 800D49C8
  c->lr=0x800D49D0u; f_8017900C(c); // 800D49CC
  c->r[0]=0u+0x00000001u; // 800D49D0
  W8(c->r[30]+0x000000A3u,c->r[0]); // 800D49D4
  goto L_800D4AC4; // 800D49D8
L_800D49DC:;
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D49DC
  cmps(c,0,(int32_t)c->r[0],0); // 800D49E0
  if (crb(c,2)) { goto L_800D49F0; } // 800D49E4
  c->r[0]=0u+0x00000001u; // 800D49E8
  W8(c->r[30]+0x000000A6u,c->r[0]); // 800D49EC
L_800D49F0:;
  c->r[3]=R32(c->r[30]+0x00000398u); // 800D49F0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D49F4
  c->lr=0x800D49FCu; f_802501B0(c); // 800D49F8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D49FC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D4A00
  c->lr=0x800D4A08u; f_802501B0(c); // 800D4A04
  cmps(c,0,(int32_t)c->r[3],0); // 800D4A08
  if (crb(c,2)) { goto L_800D4AC4; } // 800D4A0C
  c->r[3]=c->r[30]+0x0000000Cu; // 800D4A10
  c->r[4]=0u+0x00000000u; // 800D4A14
  c->lr=0x800D4A1Cu; f_8003D828(c); // 800D4A18
  cmps(c,0,(int32_t)c->r[3],0); // 800D4A1C
  if (crb(c,2)) { goto L_800D4A38; } // 800D4A20
  c->r[0]=0u+0x00000001u; // 800D4A24
  c->r[3]=c->r[30]+0x0000000Cu; // 800D4A28
  W8(c->r[30]+0x000000A4u,c->r[0]); // 800D4A2C
  c->r[4]=0u+0x0000012Cu; // 800D4A30
  c->lr=0x800D4A38u; f_80036430(c); // 800D4A34
L_800D4A38:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D4A38
  c->r[3]=c->r[30]|c->r[30]; // 800D4A3C
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4A40
  c->r[5]=0u+0x0000000Cu; // 800D4A44
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D4A48
  c->r[6]=0u+0x00000001u; // 800D4A4C
  c->f[2]=c->f[1]; // 800D4A50
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D4A54
  c->ctr=c->r[12]; // 800D4A58
  if (true) { c->lr=0x800D4A60u; dispatch(c,c->ctr); } // 800D4A5C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D4A60
  c->r[3]=c->r[30]|c->r[30]; // 800D4A64
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4A68
  c->r[5]=0u+0x00000000u; // 800D4A6C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D4A70
  c->r[6]=0u+0x00000001u; // 800D4A74
  c->f[2]=c->f[1]; // 800D4A78
  c->r[4]=R32(c->r[30]+0x00000398u); // 800D4A7C
  c->ctr=c->r[12]; // 800D4A80
  if (true) { c->lr=0x800D4A88u; dispatch(c,c->ctr); } // 800D4A84
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D4A88
  c->r[3]=c->r[30]|c->r[30]; // 800D4A8C
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4A90
  c->r[5]=0u+0x00000021u; // 800D4A94
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D4A98
  c->r[6]=0u+0x00000001u; // 800D4A9C
  c->f[2]=c->f[1]; // 800D4AA0
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800D4AA4
  c->ctr=c->r[12]; // 800D4AA8
  if (true) { c->lr=0x800D4AB0u; dispatch(c,c->ctr); } // 800D4AAC
  c->r[3]=0u+0x00000000u; // 800D4AB0
  c->lr=0x800D4AB8u; f_80269A6C(c); // 800D4AB4
  c->r[0]=0u+0x00000000u; // 800D4AB8
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D4ABC
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 800D4AC0
L_800D4AC4:;
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800D4AC4
  cmps(c,0,(int32_t)c->r[0],0); // 800D4AC8
  if (crb(c,2)) { goto L_800D4AE0; } // 800D4ACC
  c->r[0]=0u+0x00000000u; // 800D4AD0
  c->r[3]=0u+0x00000000u; // 800D4AD4
  W8(c->r[30]+0x0000009Du,c->r[0]); // 800D4AD8
  c->lr=0x800D4AE0u; f_80269A6C(c); // 800D4ADC
L_800D4AE0:;
  c->r[4]=R8(c->r[30]+0x0000009Eu); // 800D4AE0
  cmpu(c,0,c->r[4],0x000000FFu); // 800D4AE4
  if (crb(c,2)) { goto L_800D4B00; } // 800D4AE8
  c->r[3]=0u+0x80550000u; // 800D4AEC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D4AF0
  c->lr=0x800D4AF8u; f_8018D738(c); // 800D4AF4
  c->r[0]=0u+0x000000FFu; // 800D4AF8
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800D4AFC
L_800D4B00:;
  c->r[0]=R8(c->r[30]+0x000000A5u); // 800D4B00
  cmps(c,0,(int32_t)c->r[0],0); // 800D4B04
  if (crb(c,2)) { goto L_800D4B50; } // 800D4B08
  c->r[0]=R8(c->r[30]+0x000000A6u); // 800D4B0C
  cmps(c,0,(int32_t)c->r[0],0); // 800D4B10
  if (crb(c,2)) { goto L_800D4B50; } // 800D4B14
  c->r[0]=R8(c->r[30]+0x000000A7u); // 800D4B18
  cmps(c,0,(int32_t)c->r[0],0); // 800D4B1C
  if (!crb(c,2)) { goto L_800D4B50; } // 800D4B20
  c->r[0]=R8(c->r[30]+0x000000A8u); // 800D4B24
  cmps(c,0,(int32_t)c->r[0],0); // 800D4B28
  if (!crb(c,2)) { goto L_800D4B50; } // 800D4B2C
  c->r[3]=0u+0x00000000u; // 800D4B30
  c->r[0]=0u+0x0000000Cu; // 800D4B34
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800D4B38
  c->r[3]=0u+0x00000000u; // 800D4B3C
  c->r[4]=0u+0x00000002u; // 800D4B40
  c->r[5]=0u+0x00000008u; // 800D4B44
  W8(c->r[30]+0x000000A8u,c->r[0]); // 800D4B48
  c->lr=0x800D4B50u; f_8027C0C8(c); // 800D4B4C
L_800D4B50:;
  c->r[3]=R8(c->r[30]+0x000000A1u); // 800D4B50
  cmps(c,0,(int32_t)c->r[3],0); // 800D4B54
  if (crb(c,2)) { goto L_800D4B64; } // 800D4B58
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D4B5C
  W8(c->r[30]+0x000000A1u,c->r[0]); // 800D4B60
L_800D4B64:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D4B64
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D4B68
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D4B6C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D4B70
  c->lr=c->r[0]; // 800D4B74
  c->r[1]=c->r[1]+0x00000030u; // 800D4B78
  return; // 800D4B7C
}

// fn_800D4B80
void f_800D4B80(Ctx* __restrict c) {
  return; // 800D4B80
}

// fn_800D4B84
void f_800D4B84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4B84
  c->r[0]=c->lr; // 800D4B88
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D4B8C
  c->r[5]=c->r[1]+0x00000030u; // 800D4B90
  c->r[6]=R32(c->r[3]+0x00000398u); // 800D4B94
  c->r[4]=R8(c->r[3]+0x00000098u); // 800D4B98
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800D4B9C
  c->r[6]=0u+0x00000000u; // 800D4BA0
  c->lr=0x800D4BA8u; f_80257074(c); // 800D4BA4
  c->r[3]=c->r[1]+0x00000020u; // 800D4BA8
  c->r[4]=c->r[1]+0x00000014u; // 800D4BAC
  c->r[5]=c->r[1]+0x00000008u; // 800D4BB0
  c->r[6]=c->r[1]+0x00000030u; // 800D4BB4
  c->r[7]=0u+0x00000000u; // 800D4BB8
  c->lr=0x800D4BC0u; f_8002BE64(c); // 800D4BBC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D4BC0
  c->lr=c->r[0]; // 800D4BC4
  c->r[1]=c->r[1]+0x00000060u; // 800D4BC8
  return; // 800D4BCC
}

// fn_800D4BD0
void f_800D4BD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4BD0
  c->r[0]=c->lr; // 800D4BD4
  c->r[6]=0u+0x00000000u; // 800D4BD8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D4BDC
  c->r[5]=c->r[1]+0x00000014u; // 800D4BE0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D4BE4
  c->r[31]=c->r[3]|c->r[3]; // 800D4BE8
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4BEC
  W32(c->r[1]+0x00000020u,c->r[6]); // 800D4BF0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800D4BF4
  c->r[0]=R32(c->r[1]+0x00000020u); // 800D4BF8
  W32(c->r[1]+0x00000018u,c->r[6]); // 800D4BFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4C00
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800D4C04
  c->r[3]=R32(c->r[3]+0x00000398u); // 800D4C08
  W32(c->r[1]+0x00000024u,c->r[6]); // 800D4C0C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D4C10
  W32(c->r[1]+0x00000028u,c->r[6]); // 800D4C14
  c->r[4]=R8(c->r[31]+0x00000098u); // 800D4C18
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800D4C1C
  W32(c->r[1]+0x00000030u,c->r[6]); // 800D4C20
  W32(c->r[1]+0x00000034u,c->r[6]); // 800D4C24
  c->lr=0x800D4C2Cu; f_8025E9C0(c); // 800D4C28
  {uint32_t ea=c->r[2]+0xFFFFA1A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4C2C
  c->r[5]=c->r[1]+0x00000008u; // 800D4C30
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4C34
  c->r[3]=R32(c->r[1]+0x00000030u); // 800D4C38
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D4C3C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D4C40
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D4C44
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800D4C48
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800D4C4C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D4C50
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D4C54
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D4C58
  c->r[4]=R8(c->r[31]+0x00000099u); // 800D4C5C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D4C60
  c->lr=0x800D4C68u; f_8025E9C0(c); // 800D4C64
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D4C68
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D4C6C
  c->lr=c->r[0]; // 800D4C70
  c->r[1]=c->r[1]+0x00000040u; // 800D4C74
  return; // 800D4C78
}

// fn_800D4C7C
void f_800D4C7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4C7C
  c->r[0]=c->lr; // 800D4C80
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D4C84
  c->r[5]=c->r[1]+0x00000030u; // 800D4C88
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800D4C8C
  c->r[31]=c->r[3]|c->r[3]; // 800D4C90
  c->r[6]=R32(c->r[3]+0x00000398u); // 800D4C94
  c->r[4]=R8(c->r[3]+0x0000009Au); // 800D4C98
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800D4C9C
  c->r[6]=0u+0x00000000u; // 800D4CA0
  c->lr=0x800D4CA8u; f_80257074(c); // 800D4CA4
  c->r[3]=c->r[1]+0x00000020u; // 800D4CA8
  c->r[4]=c->r[1]+0x00000014u; // 800D4CAC
  c->r[5]=c->r[1]+0x00000008u; // 800D4CB0
  c->r[6]=c->r[1]+0x00000030u; // 800D4CB4
  c->r[7]=0u+0x00000000u; // 800D4CB8
  c->lr=0x800D4CC0u; f_8002BE64(c); // 800D4CBC
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D4CC0
  c->r[5]=c->r[1]+0x00000030u; // 800D4CC4
  c->r[4]=R8(c->r[31]+0x0000009Au); // 800D4CC8
  c->r[6]=0u+0x00000001u; // 800D4CCC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D4CD0
  c->lr=0x800D4CD8u; f_80257074(c); // 800D4CD4
  c->r[3]=c->r[31]+0x00000074u; // 800D4CD8
  c->r[4]=c->r[1]+0x00000020u; // 800D4CDC
  c->r[5]=c->r[1]+0x00000008u; // 800D4CE0
  c->r[6]=c->r[1]+0x00000030u; // 800D4CE4
  c->r[7]=0u+0x00000000u; // 800D4CE8
  c->lr=0x800D4CF0u; f_8002BE64(c); // 800D4CEC
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D4CF0
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800D4CF4
  c->lr=c->r[0]; // 800D4CF8
  c->r[1]=c->r[1]+0x00000070u; // 800D4CFC
  return; // 800D4D00
}

// fn_800D4D04
void f_800D4D04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4D04
  c->r[0]=c->lr; // 800D4D08
  c->r[4]=0u+0x00000000u; // 800D4D0C
  c->r[6]=c->r[3]|c->r[3]; // 800D4D10
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4D14
  c->r[5]=c->r[1]+0x00000008u; // 800D4D18
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4D1C
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800D4D20
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800D4D24
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800D4D28
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D4D2C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D4D30
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D4D34
  c->r[3]=R32(c->r[3]+0x00000398u); // 800D4D38
  W32(c->r[1]+0x00000014u,c->r[4]); // 800D4D3C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D4D40
  W32(c->r[1]+0x00000018u,c->r[4]); // 800D4D44
  c->r[4]=R8(c->r[6]+0x0000009Au); // 800D4D48
  c->lr=0x800D4D50u; f_8025E9C0(c); // 800D4D4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4D50
  c->lr=c->r[0]; // 800D4D54
  c->r[1]=c->r[1]+0x00000020u; // 800D4D58
  return; // 800D4D5C
}

// fn_800D4D60
void f_800D4D60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4D60
  c->r[0]=c->lr; // 800D4D64
  c->r[4]=0u+0x803A0000u; // 800D4D68
  c->r[5]=0u+0x00000000u; // 800D4D6C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D4D70
  c->r[4]=c->r[4]+0xFFFFE074u; // 800D4D74
  c->r[4]=c->r[4]+0x00000028u; // 800D4D78
  c->r[6]=0u+0x00000000u; // 800D4D7C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D4D80
  c->r[31]=0u+0x80550000u; // 800D4D84
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D4D88
  W32(c->r[1]+0x00000034u,c->r[29]); // 800D4D8C
  c->r[29]=c->r[3]|c->r[3]; // 800D4D90
  c->r[3]=c->r[31]+0xFFFFC848u; // 800D4D94
  c->lr=0x800D4D9Cu; f_8018D3E4(c); // 800D4D98
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 800D4D9C
  cmpu(c,0,c->r[30],0x000000FFu); // 800D4DA0
  if (crb(c,2)) { goto L_800D4E20; } // 800D4DA4
  c->r[7]=0u+0x803A0000u; // 800D4DA8
  {uint32_t ea=c->r[7]+0xFFFFE068u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D4DAC
  c->r[4]=c->r[1]+0x00000020u; // 800D4DB0
  c->r[3]=R32(c->r[7]+0x00000004u); // 800D4DB4
  c->r[5]=c->r[4]|c->r[4]; // 800D4DB8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D4DBC
  W32(c->r[1]+0x00000020u,c->r[6]); // 800D4DC0
  W32(c->r[1]+0x00000024u,c->r[3]); // 800D4DC4
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D4DC8
  c->r[3]=R32(c->r[29]+0x00000398u); // 800D4DCC
  c->r[3]=c->r[3]+0x000000B0u; // 800D4DD0
  c->lr=0x800D4DD8u; f_80296750(c); // 800D4DD4
  c->r[5]=0u+0x803A0000u; // 800D4DD8
  {uint32_t ea=c->r[5]+0xFFFFE050u; c->r[11]=R32(ea); c->r[5]=ea;} // 800D4DDC
  c->r[8]=R32(c->r[1]+0x00000020u); // 800D4DE0
  c->r[4]=c->r[30]|c->r[30]; // 800D4DE4
  c->r[7]=R32(c->r[1]+0x00000024u); // 800D4DE8
  c->r[3]=c->r[31]+0xFFFFC848u; // 800D4DEC
  c->r[10]=R32(c->r[5]+0x00000004u); // 800D4DF0
  c->r[6]=c->r[1]+0x00000008u; // 800D4DF4
  c->r[9]=R32(c->r[5]+0x00000008u); // 800D4DF8
  c->r[5]=c->r[1]+0x00000014u; // 800D4DFC
  c->r[0]=R32(c->r[1]+0x00000028u); // 800D4E00
  W32(c->r[1]+0x00000008u,c->r[11]); // 800D4E04
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 800D4E08
  W32(c->r[1]+0x00000010u,c->r[9]); // 800D4E0C
  W32(c->r[1]+0x00000014u,c->r[8]); // 800D4E10
  W32(c->r[1]+0x00000018u,c->r[7]); // 800D4E14
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D4E18
  c->lr=0x800D4E20u; f_8018DBD0(c); // 800D4E1C
L_800D4E20:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D4E20
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D4E24
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D4E28
  c->r[29]=R32(c->r[1]+0x00000034u); // 800D4E2C
  c->lr=c->r[0]; // 800D4E30
  c->r[1]=c->r[1]+0x00000040u; // 800D4E34
  return; // 800D4E38
}

// fn_800D4E3C
void f_800D4E3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4E3C
  c->r[0]=c->lr; // 800D4E40
  cmps(c,0,(int32_t)c->r[3],0); // 800D4E44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4E48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4E4C
  c->r[31]=c->r[4]|c->r[4]; // 800D4E50
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D4E54
  c->r[30]=c->r[3]|c->r[3]; // 800D4E58
  if (crb(c,2)) { goto L_800D4E78; } // 800D4E5C
  c->r[4]=0u+0x00000000u; // 800D4E60
  c->lr=0x800D4E68u; f_8026A06C(c); // 800D4E64
  cmps(c,0,(int32_t)c->r[31],0); // 800D4E68
  if (!crb(c,1)) { goto L_800D4E78; } // 800D4E6C
  c->r[3]=c->r[30]|c->r[30]; // 800D4E70
  c->lr=0x800D4E78u; f_8026A268(c); // 800D4E74
L_800D4E78:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4E78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4E7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4E80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4E84
  c->lr=c->r[0]; // 800D4E88
  c->r[1]=c->r[1]+0x00000010u; // 800D4E8C
  return; // 800D4E90
}

// fn_800D4E94
void f_800D4E94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4E94
  c->r[0]=c->lr; // 800D4E98
  c->r[4]=0u+0x00000000u; // 800D4E9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4EA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D4EA4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D4EA8
  c->r[30]=c->r[3]|c->r[3]; // 800D4EAC
  c->lr=0x800D4EB4u; f_801F57D0(c); // 800D4EB0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D4EB4
  c->r[3]=c->r[30]|c->r[30]; // 800D4EB8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D4EBC
  c->ctr=c->r[12]; // 800D4EC0
  if (true) { c->lr=0x800D4EC8u; dispatch(c,c->ctr); } // 800D4EC4
  c->r[3]=c->r[30]|c->r[30]; // 800D4EC8
  c->lr=0x800D4ED0u; f_801F4B94(c); // 800D4ECC
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800D4ED0
  c->r[4]=0u+0x00000003u; // 800D4ED4
  c->r[3]=0u+0x00000035u; // 800D4ED8
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800D4EDC
  c->r[0]=c->r[0]|0x00000810u; // 800D4EE0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D4EE4
  W8(c->r[30]+0x0000006Du,c->r[3]); // 800D4EE8
  c->r[3]=c->r[30]|c->r[30]; // 800D4EEC
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800D4EF0
  c->lr=0x800D4EF8u; f_801F58BC(c); // 800D4EF4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D4EF8
  c->r[31]=0u+0x00000001u; // 800D4EFC
  c->r[4]=0u+0x803A0000u; // 800D4F00
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800D4F04
  c->r[4]=c->r[4]+0xFFFFE0C8u; // 800D4F08
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D4F0C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D4F10
  c->lr=0x800D4F18u; f_80256EC4(c); // 800D4F14
  c->r[6]=R32(c->r[30]+0x00000394u); // 800D4F18
  c->r[4]=0u+0x00000000u; // 800D4F1C
  {uint32_t ea=c->r[2]+0xFFFFA1B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4F20
  c->r[5]=0u+0x00000000u; // 800D4F24
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800D4F28
  c->r[3]=c->r[30]|c->r[30]; // 800D4F2C
  c->f[2]=c->f[1]; // 800D4F30
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D4F34
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D4F38
  c->ctr=c->r[12]; // 800D4F3C
  if (true) { c->lr=0x800D4F44u; dispatch(c,c->ctr); } // 800D4F40
  {uint32_t ea=c->r[2]+0xFFFFA1B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4F44
  c->r[4]=0u+0x00000000u; // 800D4F48
  c->r[5]=R32(c->r[30]+0x00000394u); // 800D4F4C
  c->f[2]=c->f[1]; // 800D4F50
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800D4F54
  c->r[5]=R32(c->r[5]+0x00000034u); // 800D4F58
  c->lr=0x800D4F60u; f_8024FEAC(c); // 800D4F5C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D4F60
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D4F64
  c->lr=0x800D4F6Cu; f_802501B0(c); // 800D4F68
  c->r[3]=0u+0x805D0000u; // 800D4F6C
  c->r[4]=c->r[30]+0x0000002Cu; // 800D4F70
  c->r[3]=c->r[3]+0x000078B0u; // 800D4F74
  c->lr=0x800D4F7Cu; f_802351CC(c); // 800D4F78
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D4F7C
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800D4F80
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800D4F84
  W32(c->r[30]+0x00000444u,c->r[31]); // 800D4F88
  c->lr=0x800D4F90u; f_8024E174(c); // 800D4F8C
  W32(c->r[30]+0x00000438u,c->r[3]); // 800D4F90
  c->r[3]=c->r[30]|c->r[30]; // 800D4F94
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800D4F98
  c->lr=0x800D4FA0u; f_801F56F4(c); // 800D4F9C
  c->r[7]=0u+0x803D0000u; // 800D4FA0
  {uint32_t ea=c->r[7]+0x00001D98u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D4FA4
  c->r[3]=c->r[30]|c->r[30]; // 800D4FA8
  c->r[4]=c->r[1]+0x00000008u; // 800D4FAC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D4FB0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D4FB4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D4FB8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D4FBC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D4FC0
  c->lr=0x800D4FC8u; f_800D4FE0(c); // 800D4FC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4FC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4FCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D4FD0
  c->lr=c->r[0]; // 800D4FD4
  c->r[1]=c->r[1]+0x00000020u; // 800D4FD8
  return; // 800D4FDC
}

// fn_800D4FE0
void f_800D4FE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4FE0
  c->r[0]=c->lr; // 800D4FE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4FE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4FEC
  c->r[31]=c->r[4]|c->r[4]; // 800D4FF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D4FF4
  c->r[30]=c->r[3]|c->r[3]; // 800D4FF8
  c->r[3]=c->r[31]|c->r[31]; // 800D4FFC
  c->lr=0x800D5004u; f_802B9FDC(c); // 800D5000
  cmps(c,0,(int32_t)c->r[3],0); // 800D5004
  if (crb(c,2)) { goto L_800D5024; } // 800D5008
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D500C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D5010
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D5014
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D5018
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D501C
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D5020
L_800D5024:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5024
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5028
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D502C
  c->lr=c->r[0]; // 800D5030
  c->r[1]=c->r[1]+0x00000010u; // 800D5034
  return; // 800D5038
}

// fn_800D503C
void f_800D503C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D503C
  c->r[0]=c->lr; // 800D5040
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5044
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5048
  c->r[31]=c->r[3]|c->r[3]; // 800D504C
  c->lr=0x800D5054u; f_800D50BC(c); // 800D5050
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D5054
  c->r[3]=c->r[31]|c->r[31]; // 800D5058
  c->r[12]=R32(c->r[12]+0x00000068u); // 800D505C
  c->ctr=c->r[12]; // 800D5060
  if (true) { c->lr=0x800D5068u; dispatch(c,c->ctr); } // 800D5064
  c->r[3]=c->r[31]|c->r[31]; // 800D5068
  c->lr=0x800D5070u; f_801F4C0C(c); // 800D506C
  c->r[3]=c->r[31]+0x00000210u; // 800D5070
  c->lr=0x800D5078u; f_80221698(c); // 800D5074
  c->r[3]=c->r[31]|c->r[31]; // 800D5078
  c->lr=0x800D5080u; f_800D5830(c); // 800D507C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D5080
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800D5084
  cmps(c,0,(int32_t)c->r[0],0); // 800D5088
  if (crb(c,2)) { goto L_800D509C; } // 800D508C
  c->r[0]=R32(c->r[31]+0x00000210u); // 800D5090
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800D5094
  W32(c->r[31]+0x00000210u,c->r[0]); // 800D5098
L_800D509C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D509C
  c->lr=0x800D50A4u; f_801F56F4(c); // 800D50A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D50A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D50A8
  c->lr=c->r[0]; // 800D50AC
  c->r[1]=c->r[1]+0x00000010u; // 800D50B0
  return; // 800D50B4
}

// fn_800D50B8
void f_800D50B8(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800D50B8
}

// fn_800D50BC
void f_800D50BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D50BC
  c->r[0]=c->lr; // 800D50C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D50C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D50C8
  c->r[31]=0u+0x805D0000u; // 800D50CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D50D0
  c->r[30]=c->r[3]|c->r[3]; // 800D50D4
  c->r[3]=c->r[31]+0x00003F6Cu; // 800D50D8
  c->lr=0x800D50E0u; f_80045264(c); // 800D50DC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800D50E0
  cmpu(c,0,c->r[0],0x0000002Bu); // 800D50E4
  if (!crb(c,2)) { goto L_800D5168; } // 800D50E8
  c->r[3]=c->r[31]+0x00003F6Cu; // 800D50EC
  c->lr=0x800D50F4u; f_80037AF0(c); // 800D50F0
  cmpu(c,0,c->r[3],c->r[30]); // 800D50F4
  if (!crb(c,2)) { goto L_800D5168; } // 800D50F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800D50FC
  cmps(c,0,(int32_t)c->r[0],101); // 800D5100
  if (crb(c,2)) { goto L_800D5168; } // 800D5104
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800D5108
  c->r[4]=0u+0x00000065u; // 800D510C
  W16(c->r[30]+0x000003BCu,c->r[4]); // 800D5110
  c->r[3]=c->r[30]|c->r[30]; // 800D5114
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800D5118
  {uint32_t ea=c->r[2]+0xFFFFA1B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D511C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800D5120
  c->r[4]=0u+0x00000000u; // 800D5124
  c->f[2]=c->f[1]; // 800D5128
  c->r[5]=0u+0x00000001u; // 800D512C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D5130
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D5134
  c->ctr=c->r[12]; // 800D5138
  if (true) { c->lr=0x800D5140u; dispatch(c,c->ctr); } // 800D513C
  c->r[7]=0u+0x803D0000u; // 800D5140
  {uint32_t ea=c->r[7]+0x00001DA4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D5144
  c->r[3]=c->r[30]|c->r[30]; // 800D5148
  c->r[4]=c->r[1]+0x00000008u; // 800D514C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D5150
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D5154
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D5158
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D515C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D5160
  c->lr=0x800D5168u; f_800D4FE0(c); // 800D5164
L_800D5168:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5168
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D516C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D5170
  c->lr=c->r[0]; // 800D5174
  c->r[1]=c->r[1]+0x00000020u; // 800D5178
  return; // 800D517C
}

// fn_800D5180
void f_800D5180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5180
  c->r[0]=c->lr; // 800D5184
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D5188
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D518C
  c->r[31]=0u+0x803D0000u; // 800D5190
  c->r[31]=c->r[31]+0x00001D98u; // 800D5194
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D5198
  c->r[30]=c->r[3]|c->r[3]; // 800D519C
  c->lr=0x800D51A4u; f_801F4F28(c); // 800D51A0
  c->r[3]=R32(c->r[30]+0x000003C0u); // 800D51A4
  cmps(c,0,(int32_t)c->r[3],101); // 800D51A8
  if (crb(c,2)) { goto L_800D5208; } // 800D51AC
  if (!crb(c,0)) { goto L_800D51C0; } // 800D51B0
  cmps(c,0,(int32_t)c->r[3],100); // 800D51B4
  if (!crb(c,0)) { goto L_800D51CC; } // 800D51B8
  goto L_800D527C; // 800D51BC
L_800D51C0:;
  cmps(c,0,(int32_t)c->r[3],103); // 800D51C0
  if (!crb(c,0)) { goto L_800D527C; } // 800D51C4
  goto L_800D5244; // 800D51C8
L_800D51CC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800D51CC
  cmps(c,0,(int32_t)c->r[0],100); // 800D51D0
  if (crb(c,2)) { goto L_800D527C; } // 800D51D4
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800D51D8
  c->r[5]=c->r[31]+0x00000018u; // 800D51DC
  c->r[3]=c->r[30]|c->r[30]; // 800D51E0
  c->r[4]=c->r[1]+0x00000020u; // 800D51E4
  c->r[7]=R32(c->r[31]+0x00000018u); // 800D51E8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800D51EC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D51F0
  W32(c->r[1]+0x00000020u,c->r[7]); // 800D51F4
  W32(c->r[1]+0x00000024u,c->r[6]); // 800D51F8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D51FC
  c->lr=0x800D5204u; f_800D4FE0(c); // 800D5200
  goto L_800D527C; // 800D5204
L_800D5208:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800D5208
  cmps(c,0,(int32_t)c->r[0],101); // 800D520C
  if (crb(c,2)) { goto L_800D527C; } // 800D5210
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800D5214
  c->r[5]=c->r[31]+0x00000024u; // 800D5218
  c->r[3]=c->r[30]|c->r[30]; // 800D521C
  c->r[4]=c->r[1]+0x00000014u; // 800D5220
  c->r[7]=R32(c->r[31]+0x00000024u); // 800D5224
  c->r[6]=R32(c->r[5]+0x00000004u); // 800D5228
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D522C
  W32(c->r[1]+0x00000014u,c->r[7]); // 800D5230
  W32(c->r[1]+0x00000018u,c->r[6]); // 800D5234
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D5238
  c->lr=0x800D5240u; f_800D4FE0(c); // 800D523C
  goto L_800D527C; // 800D5240
L_800D5244:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800D5244
  cmps(c,0,(int32_t)c->r[0],102); // 800D5248
  if (crb(c,2)) { goto L_800D527C; } // 800D524C
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800D5250
  c->r[5]=c->r[31]+0x00000030u; // 800D5254
  c->r[3]=c->r[30]|c->r[30]; // 800D5258
  c->r[4]=c->r[1]+0x00000008u; // 800D525C
  c->r[7]=R32(c->r[31]+0x00000030u); // 800D5260
  c->r[6]=R32(c->r[5]+0x00000004u); // 800D5264
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D5268
  W32(c->r[1]+0x00000008u,c->r[7]); // 800D526C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800D5270
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D5274
  c->lr=0x800D527Cu; f_800D4FE0(c); // 800D5278
L_800D527C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D527C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D5280
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D5284
  c->lr=c->r[0]; // 800D5288
  c->r[1]=c->r[1]+0x00000040u; // 800D528C
  return; // 800D5290
}

// fn_800D5294
void f_800D5294(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5294
  c->r[0]=c->lr; // 800D5298
  c->r[5]=0u+0x00000000u; // 800D529C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D52A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D52A4
  c->r[31]=c->r[3]|c->r[3]; // 800D52A8
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800D52AC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D52B0
  c->r[3]=c->r[2]+0xFFFFA1C0u; // 800D52B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D52B8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800D52BC
  c->r[4]=c->r[4]+0x0000010Cu; // 800D52C0
  c->lr=0x800D52C8u; f_8024EE50(c); // 800D52C4
  cmps(c,0,(int32_t)c->r[3],0); // 800D52C8
  if (crb(c,2)) { goto L_800D52D8; } // 800D52CC
  c->r[3]=0u+0x00000000u; // 800D52D0
  goto L_800D533C; // 800D52D4
L_800D52D8:;
  c->r[3]=c->r[31]+0x00000210u; // 800D52D8
  c->r[4]=0u+0x000000E1u; // 800D52DC
  c->lr=0x800D52E4u; f_80221630(c); // 800D52E0
  cmps(c,0,(int32_t)c->r[3],0); // 800D52E4
  if (crb(c,2)) { goto L_800D5330; } // 800D52E8
  c->r[0]=R32(c->r[31]+0x00000210u); // 800D52EC
  c->r[4]=c->r[31]|c->r[31]; // 800D52F0
  c->r[3]=c->r[31]+0x00000210u; // 800D52F4
  c->r[0]=c->r[0]|0xA8000000u; // 800D52F8
  W32(c->r[31]+0x00000210u,c->r[0]); // 800D52FC
  c->lr=0x800D5304u; f_80043E44(c); // 800D5300
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5304
  c->r[3]=c->r[31]+0x00000210u; // 800D5308
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D530C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D5310
  c->lr=0x800D5318u; f_80043E34(c); // 800D5314
  {uint32_t ea=c->r[2]+0xFFFFA1C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5318
  c->r[3]=c->r[31]+0x00000210u; // 800D531C
  {uint32_t ea=c->r[2]+0xFFFFA1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D5320
  c->f[3]=c->f[1]; // 800D5324
  c->lr=0x800D532Cu; f_80043E24(c); // 800D5328
  goto L_800D5338; // 800D532C
L_800D5330:;
  c->r[3]=0u+0x00000000u; // 800D5330
  goto L_800D533C; // 800D5334
L_800D5338:;
  c->r[3]=0u+0x00000001u; // 800D5338
L_800D533C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D533C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5340
  c->lr=c->r[0]; // 800D5344
  c->r[1]=c->r[1]+0x00000010u; // 800D5348
  return; // 800D534C
}

// fn_800D5350
void f_800D5350(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5350
  c->r[0]=c->lr; // 800D5354
  c->r[7]=0u+0x803D0000u; // 800D5358
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D535C
  c->r[4]=c->r[1]+0x00000008u; // 800D5360
  {uint32_t ea=c->r[7]+0x00001DD4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D5364
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D5368
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D536C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D5370
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D5374
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D5378
  c->lr=0x800D5380u; f_800D4FE0(c); // 800D537C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5380
  c->lr=c->r[0]; // 800D5384
  c->r[1]=c->r[1]+0x00000020u; // 800D5388
  return; // 800D538C
}

// fn_800D5390
void f_800D5390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5390
  c->r[0]=c->lr; // 800D5394
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D539C
  c->r[31]=c->r[3]|c->r[3]; // 800D53A0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D53A4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D53A8
  c->lr=0x800D53B0u; f_802501B0(c); // 800D53AC
  c->r[3]=c->r[31]|c->r[31]; // 800D53B0
  c->r[4]=0u+0x00000000u; // 800D53B4
  c->lr=0x800D53BCu; f_801F5244(c); // 800D53B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D53BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D53C0
  c->lr=c->r[0]; // 800D53C4
  c->r[1]=c->r[1]+0x00000010u; // 800D53C8
  return; // 800D53CC
}

// fn_800D53D0
void f_800D53D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D53D0
  c->r[0]=c->lr; // 800D53D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D53D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D53DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D53E0
  c->r[30]=c->r[3]|c->r[3]; // 800D53E4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D53E8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D53EC
  c->lr=0x800D53F4u; f_802501B0(c); // 800D53F0
  c->r[3]=c->r[30]|c->r[30]; // 800D53F4
  c->r[4]=0u+0x00000000u; // 800D53F8
  c->lr=0x800D5400u; f_801F5244(c); // 800D53FC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D5400
  c->r[4]=0u+0x803A0000u; // 800D5404
  c->r[4]=c->r[4]+0xFFFFE0B0u; // 800D5408
  c->r[5]=c->r[30]+0x0000002Cu; // 800D540C
  c->r[3]=c->r[3]+0x000000B0u; // 800D5410
  c->lr=0x800D5418u; f_80296750(c); // 800D5414
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D5418
  c->r[3]=c->r[30]|c->r[30]; // 800D541C
  c->lr=0x800D5424u; f_801F5418(c); // 800D5420
  cmps(c,0,(int32_t)c->r[3],0); // 800D5424
  if (!crb(c,0)) { goto L_800D5474; } // 800D5428
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800D542C
  c->r[3]=0u+0x00000001u; // 800D5430
  c->r[4]=0u+0x00000064u; // 800D5434
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800D5438
  c->r[0]=c->r[0]|0x00000080u; // 800D543C
  c->r[7]=0u+0x803D0000u; // 800D5440
  W16(c->r[30]+0x000003BCu,c->r[4]); // 800D5444
  c->r[3]=c->r[30]|c->r[30]; // 800D5448
  c->r[4]=c->r[1]+0x00000008u; // 800D544C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800D5450
  {uint32_t ea=c->r[7]+0x00001DE0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D5454
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D5458
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D545C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D5460
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D5464
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D5468
  c->lr=0x800D5470u; f_800D4FE0(c); // 800D546C
  goto L_800D54A8; // 800D5470
L_800D5474:;
  c->r[31]=0u+0x805D0000u; // 800D5474
  c->r[3]=c->r[31]+0x00003F6Cu; // 800D5478
  c->lr=0x800D5480u; f_800447E4(c); // 800D547C
  cmpu(c,0,c->r[3],0x00000001u); // 800D5480
  if (!crb(c,2)) { goto L_800D5494; } // 800D5484
  c->r[0]=0u+0x00000000u; // 800D5488
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800D548C
  goto L_800D54A0; // 800D5490
L_800D5494:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800D5494
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800D5498
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800D549C
L_800D54A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800D54A0
  c->lr=0x800D54A8u; f_801F5B14(c); // 800D54A4
L_800D54A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D54A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D54AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D54B0
  c->lr=c->r[0]; // 800D54B4
  c->r[1]=c->r[1]+0x00000020u; // 800D54B8
  return; // 800D54BC
}

// fn_800D54C0
void f_800D54C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D54C0
  c->r[0]=c->lr; // 800D54C4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D54C8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800D54CC
  W32(c->r[1]+0x00000048u,c->r[30]); // 800D54D0
  c->r[30]=c->r[3]|c->r[3]; // 800D54D4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D54D8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D54DC
  c->lr=0x800D54E4u; f_802501B0(c); // 800D54E0
  c->r[3]=c->r[30]+0x00000038u; // 800D54E4
  c->r[4]=c->r[30]+0x0000002Cu; // 800D54E8
  c->lr=0x800D54F0u; f_800361A0(c); // 800D54EC
  {uint32_t ea=c->r[2]+0xFFFFA1B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D54F0
  c->r[3]=0u+0x80550000u; // 800D54F4
  c->r[3]=c->r[3]+0x00003D60u; // 800D54F8
  c->r[4]=c->r[30]+0x00000038u; // 800D54FC
  c->f[2]=c->f[1]; // 800D5500
  c->r[5]=c->r[1]+0x00000008u; // 800D5504
  c->f[3]=c->f[1]; // 800D5508
  c->r[6]=0u+0x00000000u; // 800D550C
  c->r[7]=0u+0x00000000u; // 800D5510
  c->lr=0x800D5518u; f_801D5488(c); // 800D5514
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D5518
  c->r[3]=c->r[30]+0x00000060u; // 800D551C
  c->r[4]=c->r[4]+0x00000068u; // 800D5520
  c->lr=0x800D5528u; f_800361A0(c); // 800D5524
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D5528
  c->r[31]=0u+0x803A0000u; // 800D552C
  c->r[4]=c->r[31]+0xFFFFE0B0u; // 800D5530
  c->r[5]=c->r[30]+0x0000002Cu; // 800D5534
  c->r[3]=c->r[3]+0x000000B0u; // 800D5538
  c->lr=0x800D5540u; f_80296750(c); // 800D553C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D5540
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D5544
  c->lr=0x800D554Cu; f_802501B0(c); // 800D5548
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800D554C
  c->r[0]=0u+0x00000001u; // 800D5550
  {uint32_t ea=c->r[2]+0xFFFFA1D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5554
  c->r[4]=c->r[30]+0x0000002Cu; // 800D5558
  {uint32_t ea=c->r[2]+0xFFFFA1D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D555C
  c->r[3]=c->r[3]|0x00002000u; // 800D5560
  W16(c->r[30]+0x000003BEu,c->r[3]); // 800D5564
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D5568
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800D556C
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 800D5570
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800D5574
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D5578
  c->r[3]=c->r[3]+0x0000005Cu; // 800D557C
  c->lr=0x800D5584u; f_800361A0(c); // 800D5580
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5584
  c->r[4]=0u+0x00000040u; // 800D5588
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D558C
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800D5590
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D5594
  c->r[3]=c->r[3]+0x0000001Cu; // 800D5598
  c->lr=0x800D55A0u; f_802518A4(c); // 800D559C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D55A0
  c->r[4]=0u+0x00000006u; // 800D55A4
  c->r[3]=c->r[3]+0x0000001Cu; // 800D55A8
  c->lr=0x800D55B0u; f_80251824(c); // 800D55AC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D55B0
  c->r[3]=c->r[30]|c->r[30]; // 800D55B4
  {uint32_t ea=c->r[2]+0xFFFFA1B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D55B8
  c->r[4]=0u+0x00000000u; // 800D55BC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D55C0
  c->r[5]=0u+0x00000001u; // 800D55C4
  c->f[2]=c->f[1]; // 800D55C8
  c->ctr=c->r[12]; // 800D55CC
  if (true) { c->lr=0x800D55D4u; dispatch(c,c->ctr); } // 800D55D0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D55D4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D55D8
  c->lr=0x800D55E0u; f_802501B0(c); // 800D55DC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D55E0
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800D55E4
  cmps(c,0,(int32_t)c->r[0],0); // 800D55E8
  if (crb(c,2)) { goto L_800D5678; } // 800D55EC
  c->r[3]=c->r[3]+0x00000068u; // 800D55F0
  c->r[4]=c->r[30]+0x00000060u; // 800D55F4
  c->lr=0x800D55FCu; f_800361A0(c); // 800D55F8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D55FC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D5600
  c->lr=0x800D5608u; f_8025037C(c); // 800D5604
  c->r[6]=R32(c->r[30]+0x00000394u); // 800D5608
  c->r[3]=c->r[1]+0x00000024u; // 800D560C
  c->r[4]=c->r[30]+0x00000060u; // 800D5610
  c->r[5]=c->r[1]+0x00000030u; // 800D5614
  c->r[6]=c->r[6]+0x000000B0u; // 800D5618
  c->r[7]=0u+0x00000000u; // 800D561C
  c->lr=0x800D5624u; f_8002BE64(c); // 800D5620
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 800D5624
  c->r[3]=0u+0x805D0000u; // 800D5628
  c->r[0]=R32(c->r[30]+0x00000030u); // 800D562C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800D5630
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5634
  c->r[4]=c->r[30]|c->r[30]; // 800D5638
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D563C
  c->r[7]=c->r[1]+0x00000018u; // 800D5640
  c->r[6]=0u+0x00000025u; // 800D5644
  c->r[8]=0u+0x00000000u; // 800D5648
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D564C
  c->r[0]=R32(c->r[30]+0x00000034u); // 800D5650
  W32(c->r[1]+0x00000020u,c->r[0]); // 800D5654
  c->r[3]=R32(c->r[30]+0x00000438u); // 800D5658
  c->r[5]=R32(c->r[30]+0x00000394u); // 800D565C
  c->lr=0x800D5664u; f_801FA6A4(c); // 800D5660
  c->r[3]=R32(c->r[30]+0x00000438u); // 800D5664
  c->r[5]=c->r[30]+0x00000044u; // 800D5668
  c->r[6]=c->r[31]+0xFFFFE0B0u; // 800D566C
  c->r[4]=0u+0x00000000u; // 800D5670
  c->lr=0x800D5678u; f_801FBEC0(c); // 800D5674
L_800D5678:;
  c->r[3]=c->r[30]|c->r[30]; // 800D5678
  c->r[4]=0u+0x00000000u; // 800D567C
  c->lr=0x800D5684u; f_801F7C00(c); // 800D5680
  c->r[7]=0u+0x803D0000u; // 800D5684
  {uint32_t ea=c->r[7]+0x00001DECu; c->r[6]=R32(ea); c->r[7]=ea;} // 800D5688
  c->r[3]=c->r[30]|c->r[30]; // 800D568C
  c->r[4]=c->r[1]+0x0000000Cu; // 800D5690
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D5694
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D5698
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800D569C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800D56A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D56A4
  c->lr=0x800D56ACu; f_800D4FE0(c); // 800D56A8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D56AC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800D56B0
  c->r[30]=R32(c->r[1]+0x00000048u); // 800D56B4
  c->lr=c->r[0]; // 800D56B8
  c->r[1]=c->r[1]+0x00000050u; // 800D56BC
  return; // 800D56C0
}

// fn_800D56C4
void f_800D56C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D56C4
  c->r[0]=c->lr; // 800D56C8
  c->r[4]=0u+0x00000000u; // 800D56CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D56D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D56D4
  c->r[31]=c->r[3]|c->r[3]; // 800D56D8
  c->r[3]=R32(c->r[3]+0x00000438u); // 800D56DC
  c->lr=0x800D56E4u; f_801FAF00(c); // 800D56E0
  cmps(c,0,(int32_t)c->r[3],0); // 800D56E4
  if (!crb(c,2)) { goto L_800D577C; } // 800D56E8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800D56EC
  c->r[3]=c->r[31]+0x0000002Cu; // 800D56F0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D56F4
  c->r[0]=c->r[0]|0x00000004u; // 800D56F8
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800D56FC
  c->r[4]=c->r[4]+0x0000005Cu; // 800D5700
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800D5704
  c->lr=0x800D570Cu; f_800361A0(c); // 800D5708
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D570C
  c->r[3]=c->r[31]+0x00000060u; // 800D5710
  c->r[4]=c->r[4]+0x00000068u; // 800D5714
  c->lr=0x800D571Cu; f_800361A0(c); // 800D5718
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800D571C
  c->r[3]=0u+0x805D0000u; // 800D5720
  c->r[0]=R32(c->r[31]+0x00000030u); // 800D5724
  c->r[3]=c->r[3]+0x00006CF8u; // 800D5728
  c->r[4]=c->r[1]+0x00000008u; // 800D572C
  c->r[5]=0u+0x00040000u; // 800D5730
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D5734
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D5738
  c->r[0]=R32(c->r[31]+0x00000034u); // 800D573C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D5740
  c->lr=0x800D5748u; f_802236F8(c); // 800D5744
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800D5748
  c->r[3]=c->r[31]|c->r[31]; // 800D574C
  c->r[4]=0u+0x0000002Bu; // 800D5750
  c->lr=0x800D5758u; f_801F5AB4(c); // 800D5754
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D5758
  c->r[3]=c->r[31]|c->r[31]; // 800D575C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D5760
  c->ctr=c->r[12]; // 800D5764
  if (true) { c->lr=0x800D576Cu; dispatch(c,c->ctr); } // 800D5768
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D576C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D5770
  c->lr=0x800D5778u; f_8025037C(c); // 800D5774
  goto L_800D579C; // 800D5778
L_800D577C:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D577C
  c->r[3]=c->r[31]+0x0000002Cu; // 800D5780
  c->r[4]=c->r[4]+0x0000005Cu; // 800D5784
  c->lr=0x800D578Cu; f_800361A0(c); // 800D5788
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D578C
  c->r[3]=c->r[31]+0x00000060u; // 800D5790
  c->r[4]=c->r[4]+0x00000068u; // 800D5794
  c->lr=0x800D579Cu; f_800361A0(c); // 800D5798
L_800D579C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D579C
  c->r[4]=0u+0x00000000u; // 800D57A0
  c->lr=0x800D57A8u; f_801F7C00(c); // 800D57A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D57A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D57AC
  c->lr=c->r[0]; // 800D57B0
  c->r[1]=c->r[1]+0x00000020u; // 800D57B4
  return; // 800D57B8
}

// fn_800D57BC
void f_800D57BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D57BC
  c->r[0]=c->lr; // 800D57C0
  {uint32_t ea=c->r[2]+0xFFFFA1B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D57C4
  c->r[4]=0u+0x00000000u; // 800D57C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D57CC
  c->r[5]=0u+0x00000001u; // 800D57D0
  c->f[2]=c->f[1]; // 800D57D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D57D8
  c->r[31]=c->r[3]|c->r[3]; // 800D57DC
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800D57E0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800D57E4
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800D57E8
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800D57EC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D57F0
  c->ctr=c->r[12]; // 800D57F4
  if (true) { c->lr=0x800D57FCu; dispatch(c,c->ctr); } // 800D57F8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D57FC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D5800
  c->lr=0x800D5808u; f_802501B0(c); // 800D5804
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D5808
  c->r[3]=c->r[31]|c->r[31]; // 800D580C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D5810
  c->ctr=c->r[12]; // 800D5814
  if (true) { c->lr=0x800D581Cu; dispatch(c,c->ctr); } // 800D5818
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D581C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5820
  c->lr=c->r[0]; // 800D5824
  c->r[1]=c->r[1]+0x00000010u; // 800D5828
  return; // 800D582C
}

// fn_800D5830
void f_800D5830(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5830
  c->r[0]=c->lr; // 800D5834
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D5838
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800D583C
  W32(c->r[1]+0x00000088u,c->r[30]); // 800D5840
  c->r[30]=c->r[3]|c->r[3]; // 800D5844
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D5848
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800D584C
  cmps(c,0,(int32_t)c->r[0],0); // 800D5850
  if (!crb(c,2)) { goto L_800D58F4; } // 800D5854
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800D5858
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 800D585C
  cmps(c,0,(int32_t)c->r[0],128); // 800D5860
  if (!crb(c,2)) { goto L_800D588C; } // 800D5864
  c->r[3]=0u+0x80620000u; // 800D5868
  c->r[3]=c->r[3]+0x00007688u; // 800D586C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800D5870
  cmps(c,0,(int32_t)c->r[3],0); // 800D5874
  if (crb(c,2)) { goto L_800D588C; } // 800D5878
  c->r[4]=0u+0x00000002u; // 800D587C
  c->lr=0x800D5884u; f_80037670(c); // 800D5880
  cmps(c,0,(int32_t)c->r[3],0); // 800D5884
  if (!crb(c,2)) { goto L_800D58F4; } // 800D5888
L_800D588C:;
  c->r[6]=0u+0x803A0000u; // 800D588C
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800D5890
  c->r[6]=c->r[6]+0xFFFFE0BCu; // 800D5894
  c->r[0]=R32(c->r[30]+0x00000030u); // 800D5898
  c->r[4]=R32(c->r[6]+0x00000004u); // 800D589C
  c->r[31]=0u+0x80550000u; // 800D58A0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D58A4
  c->r[31]=c->r[31]+0x00003D60u; // 800D58A8
  c->r[9]=R32(c->r[6]+0x00000000u); // 800D58AC
  c->r[5]=c->r[30]|c->r[30]; // 800D58B0
  c->r[8]=R32(c->r[6]+0x00000008u); // 800D58B4
  c->r[3]=c->r[31]+0x00000010u; // 800D58B8
  W32(c->r[1]+0x00000018u,c->r[4]); // 800D58BC
  c->r[6]=c->r[1]+0x00000008u; // 800D58C0
  c->r[7]=c->r[1]+0x00000020u; // 800D58C4
  c->r[4]=0u+0x000001FFu; // 800D58C8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D58CC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D58D0
  c->r[0]=R32(c->r[30]+0x00000034u); // 800D58D4
  W32(c->r[1]+0x00000014u,c->r[9]); // 800D58D8
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800D58DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D58E0
  c->lr=0x800D58E8u; f_80226910(c); // 800D58E4
  c->r[3]=c->r[31]+0x00000010u; // 800D58E8
  c->r[4]=c->r[1]+0x00000020u; // 800D58EC
  c->lr=0x800D58F4u; f_80226D68(c); // 800D58F0
L_800D58F4:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D58F4
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800D58F8
  c->r[30]=R32(c->r[1]+0x00000088u); // 800D58FC
  c->lr=c->r[0]; // 800D5900
  c->r[1]=c->r[1]+0x00000090u; // 800D5904
  return; // 800D5908
}

// fn_800D590C
void f_800D590C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D590C
  c->r[0]=c->lr; // 800D5910
  cmps(c,0,(int32_t)c->r[3],0); // 800D5914
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5918
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D591C
  c->r[31]=c->r[4]|c->r[4]; // 800D5920
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D5924
  c->r[30]=c->r[3]|c->r[3]; // 800D5928
  if (crb(c,2)) { goto L_800D5948; } // 800D592C
  c->r[4]=0u+0x00000000u; // 800D5930
  c->lr=0x800D5938u; f_8026A06C(c); // 800D5934
  cmps(c,0,(int32_t)c->r[31],0); // 800D5938
  if (!crb(c,1)) { goto L_800D5948; } // 800D593C
  c->r[3]=c->r[30]|c->r[30]; // 800D5940
  c->lr=0x800D5948u; f_8026A268(c); // 800D5944
L_800D5948:;
  c->r[3]=c->r[30]|c->r[30]; // 800D5948
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D594C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D5950
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5954
  c->lr=c->r[0]; // 800D5958
  c->r[1]=c->r[1]+0x00000010u; // 800D595C
  return; // 800D5960
}

// fn_800D5964
void f_800D5964(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5964
  c->r[0]=c->lr; // 800D5968
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D596C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800D5970
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800D5974
  c->r[4]=0u+0x00000000u; // 800D5978
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D597C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D5980
  c->r[30]=c->r[3]|c->r[3]; // 800D5984
  c->lr=0x800D598Cu; f_801F57D0(c); // 800D5988
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D598C
  c->r[3]=c->r[30]|c->r[30]; // 800D5990
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D5994
  c->ctr=c->r[12]; // 800D5998
  if (true) { c->lr=0x800D59A0u; dispatch(c,c->ctr); } // 800D599C
  c->r[3]=c->r[30]|c->r[30]; // 800D59A0
  c->lr=0x800D59A8u; f_801F4B94(c); // 800D59A4
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800D59A8
  c->r[4]=0u+0x00000003u; // 800D59AC
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D59B0
  c->r[5]=0u+0x00000036u; // 800D59B4
  c->r[0]=c->r[0]|0x00000004u; // 800D59B8
  c->r[3]=0u+0x80550000u; // 800D59BC
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800D59C0
  c->f[3]=c->f[1]; // 800D59C4
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800D59C8
  c->r[3]=c->r[3]+0x00003D60u; // 800D59CC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D59D0
  c->r[4]=c->r[30]+0x0000002Cu; // 800D59D4
  W8(c->r[30]+0x0000006Du,c->r[5]); // 800D59D8
  {uint32_t ea=c->r[2]+0xFFFFA1E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D59DC
  c->r[5]=c->r[30]+0x00000030u; // 800D59E0
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800D59E4
  c->r[6]=0u+0x00000000u; // 800D59E8
  c->r[7]=0u+0x00000000u; // 800D59EC
  c->lr=0x800D59F4u; f_801D5488(c); // 800D59F0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D59F4
  c->r[3]=c->r[30]|c->r[30]; // 800D59F8
  c->lr=0x800D5A00u; f_801F58BC(c); // 800D59FC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D5A00
  c->r[31]=0u+0x00000001u; // 800D5A04
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800D5A08
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5A0C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D5A10
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800D5A14
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D5A18
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800D5A1C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D5A20
  c->lr=0x800D5A28u; f_802501B0(c); // 800D5A24
  c->r[3]=0u+0x805D0000u; // 800D5A28
  c->r[4]=c->r[30]+0x0000002Cu; // 800D5A2C
  c->r[3]=c->r[3]+0x000078B0u; // 800D5A30
  c->lr=0x800D5A38u; f_802351CC(c); // 800D5A34
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D5A38
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800D5A3C
  c->r[3]=c->r[13]+0xFFFFAB38u; // 800D5A40
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800D5A44
  c->lr=0x800D5A4Cu; f_80211724(c); // 800D5A48
  c->r[4]=rotl(c->r[3],0)&0x00000003u; // 800D5A4C
  c->r[0]=0u+0x43300000u; // 800D5A50
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D5A54
  c->r[3]=c->r[30]|c->r[30]; // 800D5A58
  {uint32_t ea=c->r[2]+0xFFFFA1F0u; c->f[2]=RF64(ea);} // 800D5A5C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D5A60
  {uint32_t ea=c->r[2]+0xFFFFA1E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5A64
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D5A68
  W32(c->r[30]+0x00000074u,c->r[4]); // 800D5A6C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D5A70
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D5A74
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[0]);} // 800D5A78
  c->lr=0x800D5A80u; f_801F56F4(c); // 800D5A7C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D5A80
  c->r[3]=c->r[30]|c->r[30]; // 800D5A84
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D5A88
  c->ctr=c->r[12]; // 800D5A8C
  if (true) { c->lr=0x800D5A94u; dispatch(c,c->ctr); } // 800D5A90
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800D5A94
  W32(c->r[30]+0x00000444u,c->r[31]); // 800D5A98
  c->lr=0x800D5AA0u; f_8024E174(c); // 800D5A9C
  W32(c->r[30]+0x00000438u,c->r[3]); // 800D5AA0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800D5AA4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800D5AA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D5AAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D5AB0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D5AB4
  c->lr=c->r[0]; // 800D5AB8
  c->r[1]=c->r[1]+0x00000030u; // 800D5ABC
  return; // 800D5AC0
}

// fn_800D5AC4
void f_800D5AC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5AC4
  c->r[0]=c->lr; // 800D5AC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5ACC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5AD0
  c->r[31]=c->r[3]|c->r[3]; // 800D5AD4
  c->lr=0x800D5ADCu; f_800D6254(c); // 800D5AD8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D5ADC
  c->r[3]=c->r[31]|c->r[31]; // 800D5AE0
  c->r[12]=R32(c->r[12]+0x00000068u); // 800D5AE4
  c->ctr=c->r[12]; // 800D5AE8
  if (true) { c->lr=0x800D5AF0u; dispatch(c,c->ctr); } // 800D5AEC
  c->r[3]=c->r[31]|c->r[31]; // 800D5AF0
  c->lr=0x800D5AF8u; f_801F4C0C(c); // 800D5AF4
  c->r[3]=c->r[31]|c->r[31]; // 800D5AF8
  c->lr=0x800D5B00u; f_800D642C(c); // 800D5AFC
  c->r[3]=c->r[31]|c->r[31]; // 800D5B00
  c->lr=0x800D5B08u; f_801F56F4(c); // 800D5B04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5B08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5B0C
  c->lr=c->r[0]; // 800D5B10
  c->r[1]=c->r[1]+0x00000010u; // 800D5B14
  return; // 800D5B18
}

// fn_800D5B1C
void f_800D5B1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5B1C
  c->r[0]=c->lr; // 800D5B20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5B24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5B28
  c->r[31]=c->r[3]|c->r[3]; // 800D5B2C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D5B30
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D5B34
  c->lr=0x800D5B3Cu; f_802501B0(c); // 800D5B38
  c->r[3]=c->r[31]|c->r[31]; // 800D5B3C
  c->r[4]=0u+0x00000000u; // 800D5B40
  c->lr=0x800D5B48u; f_801F5244(c); // 800D5B44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5B48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5B4C
  c->lr=c->r[0]; // 800D5B50
  c->r[1]=c->r[1]+0x00000010u; // 800D5B54
  return; // 800D5B58
}

// fn_800D5B5C
void f_800D5B5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5B5C
  c->r[0]=c->lr; // 800D5B60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5B64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5B68
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D5B6C
  c->r[30]=c->r[3]|c->r[3]; // 800D5B70
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D5B74
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D5B78
  c->lr=0x800D5B80u; f_802501B0(c); // 800D5B7C
  c->r[3]=c->r[30]|c->r[30]; // 800D5B80
  c->r[4]=0u+0x00000000u; // 800D5B84
  c->lr=0x800D5B8Cu; f_801F5244(c); // 800D5B88
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D5B8C
  c->r[3]=c->r[30]+0x0000002Cu; // 800D5B90
  c->r[4]=c->r[4]+0x0000005Cu; // 800D5B94
  c->lr=0x800D5B9Cu; f_800361A0(c); // 800D5B98
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D5B9C
  c->r[3]=c->r[30]|c->r[30]; // 800D5BA0
  c->lr=0x800D5BA8u; f_801F5418(c); // 800D5BA4
  cmps(c,0,(int32_t)c->r[3],0); // 800D5BA8
  if (!crb(c,0)) { goto L_800D5BD8; } // 800D5BAC
  c->r[0]=0u+0x00000001u; // 800D5BB0
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5BB4
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800D5BB8
  c->r[3]=c->r[30]|c->r[30]; // 800D5BBC
  c->r[4]=0u+0x00000064u; // 800D5BC0
  c->r[5]=0u+0x00000000u; // 800D5BC4
  c->r[6]=0u+0x00000000u; // 800D5BC8
  c->r[7]=0u+0x00000000u; // 800D5BCC
  c->lr=0x800D5BD4u; f_801F4D44(c); // 800D5BD0
  goto L_800D5C04; // 800D5BD4
L_800D5BD8:;
  c->r[31]=0u+0x805D0000u; // 800D5BD8
  c->r[3]=c->r[31]+0x00003F6Cu; // 800D5BDC
  c->lr=0x800D5BE4u; f_800447E4(c); // 800D5BE0
  cmpu(c,0,c->r[3],0x00000001u); // 800D5BE4
  if (!crb(c,2)) { goto L_800D5BF8; } // 800D5BE8
  c->r[0]=0u+0x00000000u; // 800D5BEC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800D5BF0
  goto L_800D5C04; // 800D5BF4
L_800D5BF8:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800D5BF8
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800D5BFC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800D5C00
L_800D5C04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5C04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5C08
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D5C0C
  c->lr=c->r[0]; // 800D5C10
  c->r[1]=c->r[1]+0x00000010u; // 800D5C14
  return; // 800D5C18
}

// fn_800D5C1C
void f_800D5C1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5C1C
  c->r[0]=c->lr; // 800D5C20
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D5C24
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800D5C28
  c->r[31]=c->r[3]|c->r[3]; // 800D5C2C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D5C30
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D5C34
  c->lr=0x800D5C3Cu; f_802501B0(c); // 800D5C38
  c->r[3]=c->r[31]+0x00000038u; // 800D5C3C
  c->r[4]=c->r[31]+0x0000002Cu; // 800D5C40
  c->lr=0x800D5C48u; f_800361A0(c); // 800D5C44
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5C48
  c->r[3]=0u+0x80550000u; // 800D5C4C
  c->r[3]=c->r[3]+0x00003D60u; // 800D5C50
  c->r[4]=c->r[31]+0x00000038u; // 800D5C54
  c->f[2]=c->f[1]; // 800D5C58
  c->r[5]=c->r[1]+0x00000008u; // 800D5C5C
  c->f[3]=c->f[1]; // 800D5C60
  c->r[6]=0u+0x00000000u; // 800D5C64
  c->r[7]=0u+0x00000000u; // 800D5C68
  c->lr=0x800D5C70u; f_801D5488(c); // 800D5C6C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D5C70
  c->r[3]=c->r[31]+0x00000060u; // 800D5C74
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5C78
  c->r[4]=c->r[5]+0x00000068u; // 800D5C7C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800D5C80
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5C84
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800D5C88
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5C8C
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800D5C90
  c->lr=0x800D5C98u; f_800361A0(c); // 800D5C94
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D5C98
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D5C9C
  c->lr=0x800D5CA4u; f_802501B0(c); // 800D5CA0
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800D5CA4
  c->r[0]=0u+0x00000001u; // 800D5CA8
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5CAC
  c->r[4]=c->r[31]+0x0000002Cu; // 800D5CB0
  {uint32_t ea=c->r[2]+0xFFFFA1F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5CB4
  c->r[3]=c->r[3]|0x00002000u; // 800D5CB8
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800D5CBC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D5CC0
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 800D5CC4
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800D5CC8
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[1]);} // 800D5CCC
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[1]);} // 800D5CD0
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800D5CD4
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[1]);} // 800D5CD8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800D5CDC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D5CE0
  c->r[3]=c->r[3]+0x0000005Cu; // 800D5CE4
  c->lr=0x800D5CECu; f_800361A0(c); // 800D5CE8
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5CEC
  c->r[4]=0u+0x00000040u; // 800D5CF0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D5CF4
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800D5CF8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D5CFC
  c->r[3]=c->r[3]+0x0000001Cu; // 800D5D00
  c->lr=0x800D5D08u; f_802518A4(c); // 800D5D04
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D5D08
  c->r[4]=0u+0x00000006u; // 800D5D0C
  c->r[3]=c->r[3]+0x0000001Cu; // 800D5D10
  c->lr=0x800D5D18u; f_80251824(c); // 800D5D14
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D5D18
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D5D1C
  c->lr=0x800D5D24u; f_802501B0(c); // 800D5D20
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D5D24
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800D5D28
  cmps(c,0,(int32_t)c->r[0],0); // 800D5D2C
  if (crb(c,2)) { goto L_800D5DC0; } // 800D5D30
  c->r[3]=c->r[3]+0x00000068u; // 800D5D34
  c->r[4]=c->r[31]+0x00000060u; // 800D5D38
  c->lr=0x800D5D40u; f_800361A0(c); // 800D5D3C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D5D40
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D5D44
  c->lr=0x800D5D4Cu; f_8025037C(c); // 800D5D48
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D5D4C
  c->r[3]=c->r[1]+0x00000024u; // 800D5D50
  c->r[4]=c->r[31]+0x00000060u; // 800D5D54
  c->r[5]=c->r[1]+0x00000030u; // 800D5D58
  c->r[6]=c->r[6]+0x000000B0u; // 800D5D5C
  c->r[7]=0u+0x00000000u; // 800D5D60
  c->lr=0x800D5D68u; f_8002BE64(c); // 800D5D64
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800D5D68
  c->r[3]=0u+0x805D0000u; // 800D5D6C
  c->r[0]=R32(c->r[31]+0x00000030u); // 800D5D70
  c->r[3]=c->r[3]+0x00003F6Cu; // 800D5D74
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5D78
  c->r[4]=c->r[31]|c->r[31]; // 800D5D7C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D5D80
  c->r[7]=c->r[1]+0x00000018u; // 800D5D84
  c->r[6]=0u+0x00000019u; // 800D5D88
  c->r[8]=0u+0x00000000u; // 800D5D8C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D5D90
  c->r[0]=R32(c->r[31]+0x00000034u); // 800D5D94
  W32(c->r[1]+0x00000020u,c->r[0]); // 800D5D98
  c->r[3]=R32(c->r[31]+0x00000438u); // 800D5D9C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D5DA0
  c->lr=0x800D5DA8u; f_801FA6A4(c); // 800D5DA4
  c->r[6]=0u+0x803A0000u; // 800D5DA8
  c->r[3]=R32(c->r[31]+0x00000438u); // 800D5DAC
  c->r[5]=c->r[31]+0x00000044u; // 800D5DB0
  c->r[4]=0u+0x00000000u; // 800D5DB4
  c->r[6]=c->r[6]+0xFFFFE0D8u; // 800D5DB8
  c->lr=0x800D5DC0u; f_801FBEC0(c); // 800D5DBC
L_800D5DC0:;
  c->r[7]=0u+0x803D0000u; // 800D5DC0
  {uint32_t ea=c->r[7]+0x00001F48u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D5DC4
  c->r[3]=c->r[31]|c->r[31]; // 800D5DC8
  c->r[4]=c->r[1]+0x0000000Cu; // 800D5DCC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D5DD0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D5DD4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800D5DD8
  W32(c->r[1]+0x00000010u,c->r[5]); // 800D5DDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5DE0
  c->lr=0x800D5DE8u; f_800D5DFC(c); // 800D5DE4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D5DE8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800D5DEC
  c->lr=c->r[0]; // 800D5DF0
  c->r[1]=c->r[1]+0x00000050u; // 800D5DF4
  return; // 800D5DF8
}

// fn_800D5DFC
void f_800D5DFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5DFC
  c->r[0]=c->lr; // 800D5E00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5E04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5E08
  c->r[31]=c->r[4]|c->r[4]; // 800D5E0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D5E10
  c->r[30]=c->r[3]|c->r[3]; // 800D5E14
  c->r[3]=c->r[31]|c->r[31]; // 800D5E18
  c->lr=0x800D5E20u; f_802B9FDC(c); // 800D5E1C
  cmps(c,0,(int32_t)c->r[3],0); // 800D5E20
  if (crb(c,2)) { goto L_800D5E40; } // 800D5E24
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D5E28
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D5E2C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D5E30
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D5E34
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D5E38
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D5E3C
L_800D5E40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5E40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5E44
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D5E48
  c->lr=c->r[0]; // 800D5E4C
  c->r[1]=c->r[1]+0x00000010u; // 800D5E50
  return; // 800D5E54
}

// fn_800D5E58
void f_800D5E58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5E58
  c->r[0]=c->lr; // 800D5E5C
  c->r[4]=0u+0x00000000u; // 800D5E60
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5E64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D5E68
  c->r[31]=c->r[3]|c->r[3]; // 800D5E6C
  c->r[3]=R32(c->r[3]+0x00000438u); // 800D5E70
  c->lr=0x800D5E78u; f_801FAF00(c); // 800D5E74
  cmps(c,0,(int32_t)c->r[3],0); // 800D5E78
  if (!crb(c,2)) { goto L_800D5F04; } // 800D5E7C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800D5E80
  c->r[3]=c->r[31]+0x0000002Cu; // 800D5E84
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D5E88
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800D5E8C
  c->r[0]=c->r[0]|0x00000004u; // 800D5E90
  c->r[4]=c->r[4]+0x0000005Cu; // 800D5E94
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800D5E98
  c->lr=0x800D5EA0u; f_800361A0(c); // 800D5E9C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D5EA0
  c->r[3]=c->r[31]+0x00000060u; // 800D5EA4
  c->r[4]=c->r[4]+0x00000068u; // 800D5EA8
  c->lr=0x800D5EB0u; f_800361A0(c); // 800D5EAC
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800D5EB0
  c->r[3]=0u+0x805D0000u; // 800D5EB4
  c->r[0]=R32(c->r[31]+0x00000030u); // 800D5EB8
  c->r[3]=c->r[3]+0x00006CF8u; // 800D5EBC
  c->r[4]=c->r[1]+0x00000008u; // 800D5EC0
  c->r[5]=0u+0x00040000u; // 800D5EC4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D5EC8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D5ECC
  c->r[0]=R32(c->r[31]+0x00000034u); // 800D5ED0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D5ED4
  c->lr=0x800D5EDCu; f_802236F8(c); // 800D5ED8
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800D5EDC
  c->r[3]=c->r[31]|c->r[31]; // 800D5EE0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D5EE4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D5EE8
  c->ctr=c->r[12]; // 800D5EEC
  if (true) { c->lr=0x800D5EF4u; dispatch(c,c->ctr); } // 800D5EF0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D5EF4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D5EF8
  c->lr=0x800D5F00u; f_8025037C(c); // 800D5EFC
  goto L_800D5F24; // 800D5F00
L_800D5F04:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D5F04
  c->r[3]=c->r[31]+0x0000002Cu; // 800D5F08
  c->r[4]=c->r[4]+0x0000005Cu; // 800D5F0C
  c->lr=0x800D5F14u; f_800361A0(c); // 800D5F10
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D5F14
  c->r[3]=c->r[31]+0x00000060u; // 800D5F18
  c->r[4]=c->r[4]+0x00000068u; // 800D5F1C
  c->lr=0x800D5F24u; f_800361A0(c); // 800D5F20
L_800D5F24:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5F24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D5F28
  c->lr=c->r[0]; // 800D5F2C
  c->r[1]=c->r[1]+0x00000020u; // 800D5F30
  return; // 800D5F34
}

// fn_800D5F38
void f_800D5F38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5F38
  c->r[0]=c->lr; // 800D5F3C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D5F40
  c->r[11]=c->r[1]+0x00000070u; // 800D5F44
  c->lr=0x800D5F4Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D5F48
  c->r[4]=0u+0x803A0000u; // 800D5F4C
  {uint32_t ea=c->r[4]+0xFFFFE0E8u; c->r[25]=R32(ea); c->r[4]=ea;} // 800D5F50
  c->r[6]=0u+0x803A0000u; // 800D5F54
  {uint32_t ea=c->r[6]+0xFFFFE118u; c->r[5]=R32(ea); c->r[6]=ea;} // 800D5F58
  c->r[26]=R32(c->r[4]+0x00000004u); // 800D5F5C
  c->r[31]=c->r[3]|c->r[3]; // 800D5F60
  c->r[27]=R32(c->r[4]+0x00000008u); // 800D5F64
  c->r[28]=R32(c->r[4]+0x0000000Cu); // 800D5F68
  c->r[29]=R32(c->r[4]+0x00000010u); // 800D5F6C
  c->r[30]=R32(c->r[4]+0x00000014u); // 800D5F70
  c->r[12]=R32(c->r[4]+0x00000018u); // 800D5F74
  c->r[11]=R32(c->r[4]+0x0000001Cu); // 800D5F78
  c->r[10]=R32(c->r[4]+0x00000020u); // 800D5F7C
  c->r[9]=R32(c->r[4]+0x00000024u); // 800D5F80
  c->r[8]=R32(c->r[4]+0x00000028u); // 800D5F84
  c->r[7]=R32(c->r[4]+0x0000002Cu); // 800D5F88
  c->r[4]=R32(c->r[6]+0x00000004u); // 800D5F8C
  c->r[0]=R32(c->r[6]+0x00000008u); // 800D5F90
  W32(c->r[1]+0x00000018u,c->r[25]); // 800D5F94
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 800D5F98
  W32(c->r[1]+0x00000020u,c->r[27]); // 800D5F9C
  W32(c->r[1]+0x00000024u,c->r[28]); // 800D5FA0
  W32(c->r[1]+0x00000028u,c->r[29]); // 800D5FA4
  W32(c->r[1]+0x0000002Cu,c->r[30]); // 800D5FA8
  W32(c->r[1]+0x00000030u,c->r[12]); // 800D5FAC
  W32(c->r[1]+0x00000034u,c->r[11]); // 800D5FB0
  W32(c->r[1]+0x00000038u,c->r[10]); // 800D5FB4
  W32(c->r[1]+0x0000003Cu,c->r[9]); // 800D5FB8
  W32(c->r[1]+0x00000040u,c->r[8]); // 800D5FBC
  W32(c->r[1]+0x00000044u,c->r[7]); // 800D5FC0
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D5FC4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D5FC8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D5FCC
  c->r[3]=R32(c->r[3]+0x00000394u); // 800D5FD0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D5FD4
  c->lr=0x800D5FDCu; f_802501B0(c); // 800D5FD8
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D5FDC
  c->r[3]=c->r[31]+0x0000002Cu; // 800D5FE0
  c->r[4]=c->r[31]+0x00000060u; // 800D5FE4
  c->r[7]=0u+0x00000000u; // 800D5FE8
  c->r[5]=c->r[6]+0x00000074u; // 800D5FEC
  c->r[6]=c->r[6]+0x000000B0u; // 800D5FF0
  c->lr=0x800D5FF8u; f_8002BE64(c); // 800D5FF4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D5FF8
  c->r[0]=0u+0x00000000u; // 800D5FFC
  {uint32_t ea=c->r[2]+0xFFFFA1FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6000
  c->r[5]=0u+0x00000001u; // 800D6004
  W8(c->r[3]+0x0000014Cu,c->r[0]); // 800D6008
  c->r[4]=c->r[1]+0x00000018u; // 800D600C
  c->r[3]=c->r[31]+0x0000002Cu; // 800D6010
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D6014
  W8(c->r[6]+0x0000014Du,c->r[0]); // 800D6018
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D601C
  {uint32_t ea=c->r[6]+0x00000074u; WF32(ea,c->f[0]);} // 800D6020
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D6024
  {uint32_t ea=c->r[6]+0x00000078u; WF32(ea,c->f[0]);} // 800D6028
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D602C
  {uint32_t ea=c->r[6]+0x0000007Cu; WF32(ea,c->f[0]);} // 800D6030
  c->r[6]=R16(c->r[31]+0x000003BEu); // 800D6034
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800D6038
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 800D603C
  W8(c->r[31]+0x0000006Fu,c->r[5]); // 800D6040
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800D6044
  c->r[5]=c->r[6]|0x00000004u; // 800D6048
  W16(c->r[31]+0x000003BEu,c->r[5]); // 800D604C
  c->r[4]=c->r[4]+c->r[0]; // 800D6050
  c->lr=0x800D6058u; f_800361A0(c); // 800D6054
  c->r[5]=R32(c->r[31]+0x00000074u); // 800D6058
  c->r[0]=0u+0x43300000u; // 800D605C
  W32(c->r[1]+0x00000048u,c->r[0]); // 800D6060
  c->r[3]=c->r[31]+0x00000060u; // 800D6064
  {uint32_t ea=c->r[2]+0xFFFFA1F0u; c->f[2]=RF64(ea);} // 800D6068
  c->r[4]=c->r[1]+0x00000008u; // 800D606C
  W32(c->r[1]+0x0000004Cu,c->r[5]); // 800D6070
  {uint32_t ea=c->r[2]+0xFFFFA1E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6074
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 800D6078
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D607C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D6080
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800D6084
  c->lr=0x800D608Cu; f_800361A0(c); // 800D6088
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D608C
  c->r[3]=c->r[31]|c->r[31]; // 800D6090
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D6094
  c->ctr=c->r[12]; // 800D6098
  if (true) { c->lr=0x800D60A0u; dispatch(c,c->ctr); } // 800D609C
  c->r[11]=c->r[1]+0x00000070u; // 800D60A0
  c->lr=0x800D60A8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D60A4
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D60A8
  c->lr=c->r[0]; // 800D60AC
  c->r[1]=c->r[1]+0x00000070u; // 800D60B0
  return; // 800D60B4
}

// fn_800D60B8
void f_800D60B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D60B8
  c->r[0]=c->lr; // 800D60BC
  c->r[12]=0u+0x803A0000u; // 800D60C0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D60C4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D60C8
  c->r[31]=c->r[3]|c->r[3]; // 800D60CC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D60D0
  c->r[30]=0u+0x00000000u; // 800D60D4
  {uint32_t ea=c->r[12]+0xFFFFE124u; c->r[11]=R32(ea); c->r[12]=ea;} // 800D60D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D60DC
  c->r[10]=R32(c->r[12]+0x00000004u); // 800D60E0
  c->r[9]=R32(c->r[12]+0x00000008u); // 800D60E4
  c->r[8]=R32(c->r[12]+0x0000000Cu); // 800D60E8
  c->r[7]=R32(c->r[12]+0x00000010u); // 800D60EC
  c->r[6]=R32(c->r[12]+0x00000014u); // 800D60F0
  c->r[5]=R32(c->r[12]+0x00000018u); // 800D60F4
  c->r[4]=R32(c->r[12]+0x0000001Cu); // 800D60F8
  c->r[0]=R32(c->r[12]+0x00000020u); // 800D60FC
  W32(c->r[1]+0x00000014u,c->r[11]); // 800D6100
  W32(c->r[1]+0x00000018u,c->r[10]); // 800D6104
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800D6108
  W32(c->r[1]+0x00000020u,c->r[8]); // 800D610C
  W32(c->r[1]+0x00000024u,c->r[7]); // 800D6110
  W32(c->r[1]+0x00000028u,c->r[6]); // 800D6114
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 800D6118
  W32(c->r[1]+0x00000030u,c->r[4]); // 800D611C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D6120
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800D6124
  W32(c->r[1]+0x00000010u,c->r[30]); // 800D6128
  c->r[3]=R32(c->r[3]+0x00000394u); // 800D612C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D6130
  c->lr=0x800D6138u; f_802501B0(c); // 800D6134
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D6138
  c->r[3]=c->r[31]+0x0000002Cu; // 800D613C
  c->r[4]=c->r[31]+0x00000060u; // 800D6140
  c->r[7]=0u+0x00000000u; // 800D6144
  c->r[5]=c->r[6]+0x00000074u; // 800D6148
  c->r[6]=c->r[6]+0x000000B0u; // 800D614C
  c->lr=0x800D6154u; f_8002BE64(c); // 800D6150
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D6154
  c->r[5]=0u+0x00000001u; // 800D6158
  {uint32_t ea=c->r[2]+0xFFFFA1FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D615C
  c->r[4]=c->r[1]+0x00000014u; // 800D6160
  W8(c->r[3]+0x0000014Cu,c->r[30]); // 800D6164
  c->r[3]=c->r[31]+0x0000002Cu; // 800D6168
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D616C
  W8(c->r[6]+0x0000014Du,c->r[30]); // 800D6170
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D6174
  {uint32_t ea=c->r[6]+0x00000074u; WF32(ea,c->f[0]);} // 800D6178
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D617C
  {uint32_t ea=c->r[6]+0x00000078u; WF32(ea,c->f[0]);} // 800D6180
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D6184
  {uint32_t ea=c->r[6]+0x0000007Cu; WF32(ea,c->f[0]);} // 800D6188
  c->r[6]=R16(c->r[31]+0x000003BEu); // 800D618C
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800D6190
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 800D6194
  W8(c->r[31]+0x0000006Fu,c->r[5]); // 800D6198
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800D619C
  c->r[5]=c->r[6]|0x00000004u; // 800D61A0
  W16(c->r[31]+0x000003BEu,c->r[5]); // 800D61A4
  c->r[4]=c->r[4]+c->r[0]; // 800D61A8
  c->lr=0x800D61B0u; f_800361A0(c); // 800D61AC
  c->r[3]=c->r[31]+0x00000060u; // 800D61B0
  c->r[4]=c->r[1]+0x00000008u; // 800D61B4
  c->lr=0x800D61BCu; f_800361A0(c); // 800D61B8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D61BC
  c->r[3]=c->r[31]|c->r[31]; // 800D61C0
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D61C4
  c->r[4]=0u+0x00000001u; // 800D61C8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D61CC
  c->r[5]=0u+0x00000001u; // 800D61D0
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D61D4
  c->ctr=c->r[12]; // 800D61D8
  if (true) { c->lr=0x800D61E0u; dispatch(c,c->ctr); } // 800D61DC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D61E0
  c->r[3]=c->r[31]|c->r[31]; // 800D61E4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D61E8
  c->ctr=c->r[12]; // 800D61EC
  if (true) { c->lr=0x800D61F4u; dispatch(c,c->ctr); } // 800D61F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D61F4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D61F8
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D61FC
  c->lr=c->r[0]; // 800D6200
  c->r[1]=c->r[1]+0x00000040u; // 800D6204
  return; // 800D6208
}

// fn_800D620C
void f_800D620C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D620C
  c->r[0]=c->lr; // 800D6210
  c->r[6]=0u+0x803D0000u; // 800D6214
  c->r[5]=0u+0x00000000u; // 800D6218
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D621C
  c->r[6]=c->r[6]+0x00001F38u; // 800D6220
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800D6224
  c->r[3]=R32(c->r[3]+0x00000394u); // 800D6228
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D622C
  c->r[4]=c->r[3]+0x0000010Cu; // 800D6230
  c->r[3]=R32(c->r[6]+c->r[0]); // 800D6234
  c->lr=0x800D623Cu; f_8024EE50(c); // 800D6238
  c->r[0]=cntlz(c->r[3]); // 800D623C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D6240
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6244
  c->lr=c->r[0]; // 800D6248
  c->r[1]=c->r[1]+0x00000010u; // 800D624C
  return; // 800D6250
}

// fn_800D6254
void f_800D6254(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800D6254
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800D6258
  if (crb(c,2)) return; // 800D625C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000003BCu); // 800D6260
  cmps(c,0,(int32_t)c->r[0],101); // 800D6264
  if (crb(c,2)) return; // 800D6268
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D626C
  c->r[4]=0u+0x00000065u; // 800D6270
  c->r[5]=0u+0x00000000u; // 800D6274
  c->r[6]=0u+0x00000000u; // 800D6278
  c->r[7]=0u+0x00000000u; // 800D627C
  f_801F4D44(c); return; // 800D6280
  return; // 800D6284
}

// fn_800D6288
void f_800D6288(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6288
  c->r[0]=c->lr; // 800D628C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D6290
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D6294
  c->r[31]=0u+0x803D0000u; // 800D6298
  c->r[31]=c->r[31]+0x00001F38u; // 800D629C
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D62A0
  c->r[30]=c->r[3]|c->r[3]; // 800D62A4
  c->lr=0x800D62ACu; f_801F4F28(c); // 800D62A8
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800D62AC
  cmps(c,0,(int32_t)c->r[0],102); // 800D62B0
  if (crb(c,2)) { goto L_800D6338; } // 800D62B4
  if (!crb(c,0)) { goto L_800D62CC; } // 800D62B8
  cmps(c,0,(int32_t)c->r[0],100); // 800D62BC
  if (crb(c,2)) { goto L_800D62D8; } // 800D62C0
  if (!crb(c,0)) { goto L_800D6308; } // 800D62C4
  goto L_800D6394; // 800D62C8
L_800D62CC:;
  cmps(c,0,(int32_t)c->r[0],104); // 800D62CC
  if (!crb(c,0)) { goto L_800D6394; } // 800D62D0
  goto L_800D6368; // 800D62D4
L_800D62D8:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800D62D8
  c->r[5]=c->r[31]+0x0000001Cu; // 800D62DC
  c->r[3]=c->r[30]|c->r[30]; // 800D62E0
  c->r[4]=c->r[1]+0x0000002Cu; // 800D62E4
  c->r[7]=R32(c->r[31]+0x0000001Cu); // 800D62E8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800D62EC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D62F0
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800D62F4
  W32(c->r[1]+0x00000030u,c->r[6]); // 800D62F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D62FC
  c->lr=0x800D6304u; f_800D5DFC(c); // 800D6300
  goto L_800D6394; // 800D6304
L_800D6308:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800D6308
  c->r[5]=c->r[31]+0x00000028u; // 800D630C
  c->r[3]=c->r[30]|c->r[30]; // 800D6310
  c->r[4]=c->r[1]+0x00000020u; // 800D6314
  c->r[7]=R32(c->r[31]+0x00000028u); // 800D6318
  c->r[6]=R32(c->r[5]+0x00000004u); // 800D631C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D6320
  W32(c->r[1]+0x00000020u,c->r[7]); // 800D6324
  W32(c->r[1]+0x00000024u,c->r[6]); // 800D6328
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D632C
  c->lr=0x800D6334u; f_800D5DFC(c); // 800D6330
  goto L_800D6394; // 800D6334
L_800D6338:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800D6338
  c->r[5]=c->r[31]+0x00000034u; // 800D633C
  c->r[3]=c->r[30]|c->r[30]; // 800D6340
  c->r[4]=c->r[1]+0x00000014u; // 800D6344
  c->r[7]=R32(c->r[31]+0x00000034u); // 800D6348
  c->r[6]=R32(c->r[5]+0x00000004u); // 800D634C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D6350
  W32(c->r[1]+0x00000014u,c->r[7]); // 800D6354
  W32(c->r[1]+0x00000018u,c->r[6]); // 800D6358
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D635C
  c->lr=0x800D6364u; f_800D5DFC(c); // 800D6360
  goto L_800D6394; // 800D6364
L_800D6368:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800D6368
  c->r[5]=c->r[31]+0x00000040u; // 800D636C
  c->r[3]=c->r[30]|c->r[30]; // 800D6370
  c->r[4]=c->r[1]+0x00000008u; // 800D6374
  c->r[7]=R32(c->r[31]+0x00000040u); // 800D6378
  c->r[6]=R32(c->r[5]+0x00000004u); // 800D637C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D6380
  W32(c->r[1]+0x00000008u,c->r[7]); // 800D6384
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800D6388
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D638C
  c->lr=0x800D6394u; f_800D5DFC(c); // 800D6390
L_800D6394:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D6394
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D6398
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D639C
  c->lr=c->r[0]; // 800D63A0
  c->r[1]=c->r[1]+0x00000040u; // 800D63A4
  return; // 800D63A8
}

// fn_800D63AC
void f_800D63AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D63AC
  c->r[0]=c->lr; // 800D63B0
  c->r[5]=c->r[3]|c->r[3]; // 800D63B4
  c->r[3]=c->r[4]|c->r[4]; // 800D63B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D63BC
  c->r[0]=R32(c->r[5]+0x00000074u); // 800D63C0
  c->r[4]=R32(c->r[5]+0x00000394u); // 800D63C4
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800D63C8
  c->lr=0x800D63D0u; f_80250BF4(c); // 800D63CC
  c->r[0]=cntlz(c->r[3]); // 800D63D0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D63D4
  c->r[3]=0u-c->r[0]; // 800D63D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D63DC
  c->lr=c->r[0]; // 800D63E0
  c->r[1]=c->r[1]+0x00000010u; // 800D63E4
  return; // 800D63E8
}

// fn_800D63EC
void f_800D63EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D63EC
  c->r[0]=c->lr; // 800D63F0
  c->r[7]=0u+0x803D0000u; // 800D63F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D63F8
  c->r[4]=c->r[1]+0x00000008u; // 800D63FC
  {uint32_t ea=c->r[7]+0x00001F84u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D6400
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D6404
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D6408
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D640C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D6410
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D6414
  c->lr=0x800D641Cu; f_800D5DFC(c); // 800D6418
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D641C
  c->lr=c->r[0]; // 800D6420
  c->r[1]=c->r[1]+0x00000020u; // 800D6424
  return; // 800D6428
}

// fn_800D642C
void f_800D642C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D642C
  c->r[0]=c->lr; // 800D6430
  c->r[5]=0u+0x80620000u; // 800D6434
  c->r[4]=0u+0x00000002u; // 800D6438
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D643C
  c->r[5]=c->r[5]+0x00007688u; // 800D6440
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800D6444
  W32(c->r[1]+0x00000088u,c->r[30]); // 800D6448
  c->r[30]=c->r[3]|c->r[3]; // 800D644C
  c->r[3]=R32(c->r[5]+0x00000014u); // 800D6450
  c->lr=0x800D6458u; f_80037670(c); // 800D6454
  cmps(c,0,(int32_t)c->r[3],0); // 800D6458
  if (crb(c,2)) { goto L_800D64D0; } // 800D645C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D6460
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800D6464
  cmps(c,0,(int32_t)c->r[0],0); // 800D6468
  if (!crb(c,2)) { goto L_800D64D0; } // 800D646C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800D6470
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800D6474
  if (crb(c,2)) { goto L_800D64D0; } // 800D6478
  {uint32_t ea=c->r[2]+0xFFFFA204u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D647C
  c->r[3]=c->r[1]+0x00000008u; // 800D6480
  c->r[4]=c->r[30]+0x0000002Cu; // 800D6484
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800D6488
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800D648C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800D6490
  c->lr=0x800D6498u; f_800361A0(c); // 800D6494
  c->r[3]=R8(c->r[30]+0x0000006Eu); // 800D6498
  c->r[31]=0u+0x80550000u; // 800D649C
  c->r[31]=c->r[31]+0x00003D60u; // 800D64A0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D64A4
  c->r[0]=c->r[3]+0x00000109u; // 800D64A8
  c->r[5]=c->r[30]|c->r[30]; // 800D64AC
  c->r[3]=c->r[31]+0x00000010u; // 800D64B0
  c->r[6]=c->r[1]+0x00000008u; // 800D64B4
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800D64B8
  c->r[7]=c->r[1]+0x00000020u; // 800D64BC
  c->lr=0x800D64C4u; f_80226910(c); // 800D64C0
  c->r[3]=c->r[31]+0x00000010u; // 800D64C4
  c->r[4]=c->r[1]+0x00000020u; // 800D64C8
  c->lr=0x800D64D0u; f_80226D68(c); // 800D64CC
L_800D64D0:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D64D0
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800D64D4
  c->r[30]=R32(c->r[1]+0x00000088u); // 800D64D8
  c->lr=c->r[0]; // 800D64DC
  c->r[1]=c->r[1]+0x00000090u; // 800D64E0
  return; // 800D64E4
}

// fn_800D64E8
void f_800D64E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D64E8
  c->r[0]=c->lr; // 800D64EC
  cmps(c,0,(int32_t)c->r[3],0); // 800D64F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D64F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D64F8
  c->r[31]=c->r[4]|c->r[4]; // 800D64FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D6500
  c->r[30]=c->r[3]|c->r[3]; // 800D6504
  if (crb(c,2)) { goto L_800D6524; } // 800D6508
  c->r[4]=0u+0x00000000u; // 800D650C
  c->lr=0x800D6514u; f_8026A06C(c); // 800D6510
  cmps(c,0,(int32_t)c->r[31],0); // 800D6514
  if (!crb(c,1)) { goto L_800D6524; } // 800D6518
  c->r[3]=c->r[30]|c->r[30]; // 800D651C
  c->lr=0x800D6524u; f_8026A268(c); // 800D6520
L_800D6524:;
  c->r[3]=c->r[30]|c->r[30]; // 800D6524
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6528
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D652C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6530
  c->lr=c->r[0]; // 800D6534
  c->r[1]=c->r[1]+0x00000010u; // 800D6538
  return; // 800D653C
}

// fn_800D6540
void f_800D6540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6540
  c->r[0]=c->lr; // 800D6544
  c->r[4]=0u+0x00000000u; // 800D6548
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D654C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6550
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D6554
  c->r[30]=c->r[3]|c->r[3]; // 800D6558
  c->lr=0x800D6560u; f_801F57D0(c); // 800D655C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D6560
  c->r[3]=c->r[30]|c->r[30]; // 800D6564
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D6568
  c->ctr=c->r[12]; // 800D656C
  if (true) { c->lr=0x800D6574u; dispatch(c,c->ctr); } // 800D6570
  c->r[3]=c->r[30]|c->r[30]; // 800D6574
  c->lr=0x800D657Cu; f_801F4B94(c); // 800D6578
  c->r[3]=0u+0x00000003u; // 800D657C
  c->r[0]=0u+0x00000037u; // 800D6580
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800D6584
  c->r[3]=c->r[30]|c->r[30]; // 800D6588
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D658C
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800D6590
  c->lr=0x800D6598u; f_801F58BC(c); // 800D6594
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D6598
  c->r[31]=0u+0x00000001u; // 800D659C
  c->r[4]=0u+0x803A0000u; // 800D65A0
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800D65A4
  c->r[4]=c->r[4]+0xFFFFE154u; // 800D65A8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D65AC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D65B0
  c->lr=0x800D65B8u; f_80256EC4(c); // 800D65B4
  c->r[6]=R32(c->r[30]+0x00000394u); // 800D65B8
  c->r[5]=0u+0x805D0000u; // 800D65BC
  c->r[4]=c->r[30]+0x0000002Cu; // 800D65C0
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800D65C4
  c->r[3]=c->r[5]+0x000078B0u; // 800D65C8
  c->lr=0x800D65D0u; f_802351CC(c); // 800D65CC
  c->r[5]=R32(c->r[30]+0x00000394u); // 800D65D0
  c->r[4]=0u+0x00000000u; // 800D65D4
  {uint32_t ea=c->r[2]+0xFFFFA210u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D65D8
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800D65DC
  c->r[3]=c->r[30]|c->r[30]; // 800D65E0
  c->f[2]=c->f[1]; // 800D65E4
  c->r[5]=0u+0x00000001u; // 800D65E8
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800D65EC
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800D65F0
  c->r[0]=c->r[0]|0x00000804u; // 800D65F4
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800D65F8
  {uint32_t ea=c->r[30]+0x000003F8u; WF32(ea,c->f[1]);} // 800D65FC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D6600
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D6604
  c->ctr=c->r[12]; // 800D6608
  if (true) { c->lr=0x800D6610u; dispatch(c,c->ctr); } // 800D660C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D6610
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D6614
  c->lr=0x800D661Cu; f_802501B0(c); // 800D6618
  c->r[3]=c->r[30]|c->r[30]; // 800D661C
  c->lr=0x800D6624u; f_801F56F4(c); // 800D6620
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800D6624
  W32(c->r[30]+0x00000444u,c->r[31]); // 800D6628
  c->lr=0x800D6630u; f_8024E174(c); // 800D662C
  W32(c->r[30]+0x00000438u,c->r[3]); // 800D6630
  c->r[3]=c->r[30]|c->r[30]; // 800D6634
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D6638
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D663C
  c->ctr=c->r[12]; // 800D6640
  if (true) { c->lr=0x800D6648u; dispatch(c,c->ctr); } // 800D6644
  c->r[3]=c->r[30]|c->r[30]; // 800D6648
  c->lr=0x800D6650u; f_800D6F84(c); // 800D664C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6650
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6654
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D6658
  c->lr=c->r[0]; // 800D665C
  c->r[1]=c->r[1]+0x00000010u; // 800D6660
  return; // 800D6664
}

// fn_800D6668
void f_800D6668(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6668
  c->r[0]=c->lr; // 800D666C
  c->r[4]=0u+0x000000E1u; // 800D6670
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6674
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6678
  c->r[31]=c->r[3]|c->r[3]; // 800D667C
  c->r[3]=c->r[3]+0x00000210u; // 800D6680
  c->lr=0x800D6688u; f_80221630(c); // 800D6684
  cmps(c,0,(int32_t)c->r[3],0); // 800D6688
  if (!crb(c,2)) { goto L_800D6698; } // 800D668C
  c->r[3]=0u+0x00000000u; // 800D6690
  goto L_800D66B4; // 800D6694
L_800D6698:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D6698
  c->r[3]=0u+0x000004A5u; // 800D669C
  c->r[5]=0u+0x00000000u; // 800D66A0
  c->r[4]=c->r[4]+0x0000010Cu; // 800D66A4
  c->lr=0x800D66ACu; f_8024EE50(c); // 800D66A8
  c->r[0]=cntlz(c->r[3]); // 800D66AC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D66B0
L_800D66B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D66B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D66B8
  c->lr=c->r[0]; // 800D66BC
  c->r[1]=c->r[1]+0x00000010u; // 800D66C0
  return; // 800D66C4
}

// fn_800D66C8
void f_800D66C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D66C8
  c->r[0]=c->lr; // 800D66CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D66D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D66D4
  c->r[31]=c->r[3]|c->r[3]; // 800D66D8
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800D66DC
  c->r[12]=R32(c->r[12]+0x00000068u); // 800D66E0
  c->ctr=c->r[12]; // 800D66E4
  if (true) { c->lr=0x800D66ECu; dispatch(c,c->ctr); } // 800D66E8
  c->r[3]=c->r[31]|c->r[31]; // 800D66EC
  c->lr=0x800D66F4u; f_801F4C0C(c); // 800D66F0
  c->r[3]=c->r[31]|c->r[31]; // 800D66F4
  c->lr=0x800D66FCu; f_800D6EDC(c); // 800D66F8
  c->r[3]=c->r[31]|c->r[31]; // 800D66FC
  c->lr=0x800D6704u; f_801F56F4(c); // 800D6700
  c->r[3]=c->r[31]|c->r[31]; // 800D6704
  c->lr=0x800D670Cu; f_800D7028(c); // 800D6708
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D670C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6710
  c->lr=c->r[0]; // 800D6714
  c->r[1]=c->r[1]+0x00000010u; // 800D6718
  return; // 800D671C
}

// fn_800D6720
void f_800D6720(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6720
  c->r[0]=c->lr; // 800D6724
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D6728
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D672C
  c->r[31]=0u+0x803D0000u; // 800D6730
  c->r[31]=c->r[31]+0x000020D0u; // 800D6734
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D6738
  c->r[30]=c->r[3]|c->r[3]; // 800D673C
  c->lr=0x800D6744u; f_801F4F28(c); // 800D6740
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800D6744
  cmps(c,0,(int32_t)c->r[0],102); // 800D6748
  if (crb(c,2)) { goto L_800D67F8; } // 800D674C
  if (!crb(c,0)) { goto L_800D6764; } // 800D6750
  cmps(c,0,(int32_t)c->r[0],100); // 800D6754
  if (crb(c,2)) { goto L_800D6774; } // 800D6758
  if (!crb(c,0)) { goto L_800D67E0; } // 800D675C
  goto L_800D6878; // 800D6760
L_800D6764:;
  cmps(c,0,(int32_t)c->r[0],104); // 800D6764
  if (crb(c,2)) { goto L_800D6858; } // 800D6768
  if (!crb(c,0)) { goto L_800D6878; } // 800D676C
  goto L_800D6828; // 800D6770
L_800D6774:;
  c->r[0]=0u+0x00000001u; // 800D6774
  c->r[5]=R32(c->r[30]+0x00000394u); // 800D6778
  W8(c->r[30]+0x00000080u,c->r[0]); // 800D677C
  c->r[0]=0u+0x00000000u; // 800D6780
  c->r[3]=c->r[30]+0x0000002Cu; // 800D6784
  c->r[4]=c->r[30]+0x00000060u; // 800D6788
  W8(c->r[5]+0x0000014Cu,c->r[0]); // 800D678C
  c->r[7]=0u+0x00000000u; // 800D6790
  c->r[5]=R32(c->r[30]+0x00000394u); // 800D6794
  W8(c->r[5]+0x0000014Du,c->r[0]); // 800D6798
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800D679C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800D67A0
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800D67A4
  c->r[5]=c->r[6]+0x00000074u; // 800D67A8
  c->r[6]=c->r[6]+0x000000B0u; // 800D67AC
  c->lr=0x800D67B4u; f_8002BE64(c); // 800D67B0
  c->r[4]=c->r[31]+0x00000000u; // 800D67B4
  c->r[6]=R32(c->r[31]+0x00000000u); // 800D67B8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800D67BC
  c->r[3]=c->r[30]|c->r[30]; // 800D67C0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D67C4
  c->r[4]=c->r[1]+0x00000020u; // 800D67C8
  W32(c->r[1]+0x00000020u,c->r[6]); // 800D67CC
  W32(c->r[1]+0x00000024u,c->r[5]); // 800D67D0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D67D4
  c->lr=0x800D67DCu; f_800D6890(c); // 800D67D8
  goto L_800D6878; // 800D67DC
L_800D67E0:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D67E0
  c->r[3]=c->r[30]|c->r[30]; // 800D67E4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D67E8
  c->ctr=c->r[12]; // 800D67EC
  if (true) { c->lr=0x800D67F4u; dispatch(c,c->ctr); } // 800D67F0
  goto L_800D6878; // 800D67F4
L_800D67F8:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800D67F8
  c->r[5]=c->r[31]+0x0000000Cu; // 800D67FC
  c->r[3]=c->r[30]|c->r[30]; // 800D6800
  c->r[4]=c->r[1]+0x00000014u; // 800D6804
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800D6808
  c->r[6]=R32(c->r[5]+0x00000004u); // 800D680C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D6810
  W32(c->r[1]+0x00000014u,c->r[7]); // 800D6814
  W32(c->r[1]+0x00000018u,c->r[6]); // 800D6818
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D681C
  c->lr=0x800D6824u; f_800D6890(c); // 800D6820
  goto L_800D6878; // 800D6824
L_800D6828:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800D6828
  c->r[5]=c->r[31]+0x00000018u; // 800D682C
  c->r[3]=c->r[30]|c->r[30]; // 800D6830
  c->r[4]=c->r[1]+0x00000008u; // 800D6834
  c->r[7]=R32(c->r[31]+0x00000018u); // 800D6838
  c->r[6]=R32(c->r[5]+0x00000004u); // 800D683C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D6840
  W32(c->r[1]+0x00000008u,c->r[7]); // 800D6844
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800D6848
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D684C
  c->lr=0x800D6854u; f_800D6890(c); // 800D6850
  goto L_800D6878; // 800D6854
L_800D6858:;
  c->r[3]=c->r[30]|c->r[30]; // 800D6858
  c->r[4]=0u+0x00000018u; // 800D685C
  c->lr=0x800D6864u; f_801F5AB4(c); // 800D6860
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D6864
  c->r[3]=c->r[30]|c->r[30]; // 800D6868
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D686C
  c->ctr=c->r[12]; // 800D6870
  if (true) { c->lr=0x800D6878u; dispatch(c,c->ctr); } // 800D6874
L_800D6878:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D6878
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D687C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D6880
  c->lr=c->r[0]; // 800D6884
  c->r[1]=c->r[1]+0x00000040u; // 800D6888
  return; // 800D688C
}

// fn_800D6890
void f_800D6890(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6890
  c->r[0]=c->lr; // 800D6894
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6898
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D689C
  c->r[31]=c->r[4]|c->r[4]; // 800D68A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D68A4
  c->r[30]=c->r[3]|c->r[3]; // 800D68A8
  c->r[3]=c->r[31]|c->r[31]; // 800D68AC
  c->lr=0x800D68B4u; f_802B9FDC(c); // 800D68B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D68B4
  if (crb(c,2)) { goto L_800D68D4; } // 800D68B8
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D68BC
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D68C0
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D68C4
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D68C8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D68CC
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D68D0
L_800D68D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D68D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D68D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D68DC
  c->lr=c->r[0]; // 800D68E0
  c->r[1]=c->r[1]+0x00000010u; // 800D68E4
  return; // 800D68E8
}

// fn_800D68EC
void f_800D68EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D68EC
  c->r[0]=c->lr; // 800D68F0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D68F4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D68F8
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D68FC
  c->r[30]=c->r[3]|c->r[3]; // 800D6900
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D6904
  c->lr=0x800D690Cu; f_801F5418(c); // 800D6908
  cmps(c,0,(int32_t)c->r[3],0); // 800D690C
  if (!crb(c,0)) { goto L_800D69F8; } // 800D6910
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800D6914
  {uint32_t ea=c->r[2]+0xFFFFA210u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6918
  {uint32_t ea=c->r[2]+0xFFFFA214u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D691C
  c->r[0]=c->r[0]|0x00000080u; // 800D6920
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800D6924
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D6928
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800D692C
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 800D6930
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D6934
  c->lr=0x800D693Cu; f_8025037C(c); // 800D6938
  c->r[6]=R32(c->r[30]+0x00000394u); // 800D693C
  c->r[3]=c->r[1]+0x00000020u; // 800D6940
  c->r[4]=c->r[30]+0x00000060u; // 800D6944
  c->r[5]=c->r[1]+0x0000002Cu; // 800D6948
  c->r[6]=c->r[6]+0x000000B0u; // 800D694C
  c->r[7]=0u+0x00000000u; // 800D6950
  c->lr=0x800D6958u; f_8002BE64(c); // 800D6954
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 800D6958
  c->r[3]=0u+0x805D0000u; // 800D695C
  c->r[0]=R32(c->r[30]+0x00000030u); // 800D6960
  c->r[3]=c->r[3]+0x00003F6Cu; // 800D6964
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6968
  c->r[4]=c->r[30]|c->r[30]; // 800D696C
  W32(c->r[1]+0x00000014u,c->r[5]); // 800D6970
  c->r[7]=c->r[1]+0x00000014u; // 800D6974
  c->r[6]=0u+0x00000017u; // 800D6978
  c->r[8]=0u+0x00000000u; // 800D697C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800D6980
  c->r[0]=R32(c->r[30]+0x00000034u); // 800D6984
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D6988
  c->r[3]=R32(c->r[30]+0x00000438u); // 800D698C
  c->r[5]=R32(c->r[30]+0x00000394u); // 800D6990
  c->lr=0x800D6998u; f_801FA6A4(c); // 800D6994
  {uint32_t ea=c->r[30]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6998
  c->r[6]=0u+0x803A0000u; // 800D699C
  {uint32_t ea=c->r[2]+0xFFFFA218u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D69A0
  c->r[5]=c->r[30]+0x00000044u; // 800D69A4
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D69A8
  c->r[6]=c->r[6]+0xFFFFE148u; // 800D69AC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800D69B0
  c->r[3]=R32(c->r[30]+0x00000438u); // 800D69B4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800D69B8
  c->r[4]=0u+0x00000000u; // 800D69BC
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800D69C0
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800D69C4
  c->lr=0x800D69CCu; f_801FBEC0(c); // 800D69C8
  c->r[7]=0u+0x803D0000u; // 800D69CC
  {uint32_t ea=c->r[7]+0x000020F4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D69D0
  c->r[3]=c->r[30]|c->r[30]; // 800D69D4
  c->r[4]=c->r[1]+0x00000008u; // 800D69D8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D69DC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D69E0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D69E4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D69E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D69EC
  c->lr=0x800D69F4u; f_800D6890(c); // 800D69F0
  goto L_800D6A3C; // 800D69F4
L_800D69F8:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D69F8
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800D69FC
  cmps(c,0,(int32_t)c->r[0],0); // 800D6A00
  if (crb(c,2)) { goto L_800D6A3C; } // 800D6A04
  c->r[3]=c->r[30]|c->r[30]; // 800D6A08
  c->lr=0x800D6A10u; f_801F5B14(c); // 800D6A0C
  c->r[31]=0u+0x805D0000u; // 800D6A10
  c->r[3]=c->r[31]+0x00003F6Cu; // 800D6A14
  c->lr=0x800D6A1Cu; f_800447E4(c); // 800D6A18
  cmpu(c,0,c->r[3],0x00000001u); // 800D6A1C
  if (!crb(c,2)) { goto L_800D6A30; } // 800D6A20
  c->r[0]=0u+0x00000000u; // 800D6A24
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800D6A28
  goto L_800D6A3C; // 800D6A2C
L_800D6A30:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800D6A30
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800D6A34
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800D6A38
L_800D6A3C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D6A3C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D6A40
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D6A44
  c->lr=c->r[0]; // 800D6A48
  c->r[1]=c->r[1]+0x00000040u; // 800D6A4C
  return; // 800D6A50
}

// fn_800D6A54
void f_800D6A54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6A54
  c->r[0]=c->lr; // 800D6A58
  c->r[4]=0u+0x805D0000u; // 800D6A5C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D6A60
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D6A64
  c->r[31]=c->r[3]|c->r[3]; // 800D6A68
  c->r[3]=c->r[4]+0x00003F6Cu; // 800D6A6C
  c->lr=0x800D6A74u; f_80037AF0(c); // 800D6A70
  cmpu(c,0,c->r[3],c->r[31]); // 800D6A74
  if (!crb(c,2)) { goto L_800D6AE8; } // 800D6A78
  c->r[0]=0u+0x00000001u; // 800D6A7C
  {uint32_t ea=c->r[2]+0xFFFFA210u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6A80
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800D6A84
  c->r[3]=c->r[31]|c->r[31]; // 800D6A88
  c->f[2]=c->f[1]; // 800D6A8C
  c->r[4]=0u+0x00000000u; // 800D6A90
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D6A94
  c->r[5]=0u+0x00000001u; // 800D6A98
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D6A9C
  c->ctr=c->r[12]; // 800D6AA0
  if (true) { c->lr=0x800D6AA8u; dispatch(c,c->ctr); } // 800D6AA4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D6AA8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D6AAC
  c->lr=0x800D6AB4u; f_802501B0(c); // 800D6AB0
  c->r[7]=0u+0x803D0000u; // 800D6AB4
  {uint32_t ea=c->r[7]+0x00002100u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D6AB8
  c->r[3]=c->r[31]|c->r[31]; // 800D6ABC
  c->r[4]=c->r[1]+0x00000014u; // 800D6AC0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D6AC4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D6AC8
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D6ACC
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D6AD0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D6AD4
  c->lr=0x800D6ADCu; f_800D6890(c); // 800D6AD8
  c->r[3]=c->r[31]|c->r[31]; // 800D6ADC
  c->lr=0x800D6AE4u; f_800D68EC(c); // 800D6AE0
  goto L_800D6B80; // 800D6AE4
L_800D6AE8:;
  c->r[3]=R32(c->r[31]+0x00000438u); // 800D6AE8
  c->r[4]=0u+0x00000000u; // 800D6AEC
  c->lr=0x800D6AF4u; f_801FAF00(c); // 800D6AF0
  cmps(c,0,(int32_t)c->r[3],0); // 800D6AF4
  if (!crb(c,2)) { goto L_800D6B60; } // 800D6AF8
  c->r[3]=c->r[31]|c->r[31]; // 800D6AFC
  c->r[4]=0u+0x00000018u; // 800D6B00
  c->lr=0x800D6B08u; f_801F5AB4(c); // 800D6B04
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D6B08
  c->r[3]=c->r[31]+0x0000002Cu; // 800D6B0C
  c->r[4]=c->r[4]+0x0000005Cu; // 800D6B10
  c->lr=0x800D6B18u; f_800361A0(c); // 800D6B14
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D6B18
  c->r[3]=c->r[31]+0x00000060u; // 800D6B1C
  c->r[4]=c->r[4]+0x00000068u; // 800D6B20
  c->lr=0x800D6B28u; f_800361A0(c); // 800D6B24
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D6B28
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D6B2C
  c->lr=0x800D6B34u; f_8025037C(c); // 800D6B30
  c->r[7]=0u+0x803D0000u; // 800D6B34
  {uint32_t ea=c->r[7]+0x0000210Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800D6B38
  c->r[3]=c->r[31]|c->r[31]; // 800D6B3C
  c->r[4]=c->r[1]+0x00000008u; // 800D6B40
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D6B44
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D6B48
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D6B4C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D6B50
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D6B54
  c->lr=0x800D6B5Cu; f_800D6890(c); // 800D6B58
  goto L_800D6B80; // 800D6B5C
L_800D6B60:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D6B60
  c->r[3]=c->r[31]+0x0000002Cu; // 800D6B64
  c->r[4]=c->r[4]+0x0000005Cu; // 800D6B68
  c->lr=0x800D6B70u; f_800361A0(c); // 800D6B6C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D6B70
  c->r[3]=c->r[31]+0x00000060u; // 800D6B74
  c->r[4]=c->r[4]+0x00000068u; // 800D6B78
  c->lr=0x800D6B80u; f_800361A0(c); // 800D6B7C
L_800D6B80:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D6B80
  c->r[3]=c->r[31]+0x0000002Cu; // 800D6B84
  c->r[4]=c->r[4]+0x0000005Cu; // 800D6B88
  c->lr=0x800D6B90u; f_800361A0(c); // 800D6B8C
  c->r[3]=c->r[31]|c->r[31]; // 800D6B90
  c->r[4]=0u+0x00000000u; // 800D6B94
  c->lr=0x800D6B9Cu; f_801F7C00(c); // 800D6B98
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D6B9C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D6BA0
  c->lr=c->r[0]; // 800D6BA4
  c->r[1]=c->r[1]+0x00000030u; // 800D6BA8
  return; // 800D6BAC
}

// fn_800D6BB0
void f_800D6BB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6BB0
  c->r[0]=c->lr; // 800D6BB4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D6BB8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800D6BBC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800D6BC0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800D6BC4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800D6BC8
  c->r[4]=0u+0x80620000u; // 800D6BCC
  c->r[4]=c->r[4]+0x000079C0u; // 800D6BD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6BD4
  c->r[31]=c->r[3]|c->r[3]; // 800D6BD8
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6BDC
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6BE0
  c->f[1]=-c->f[1]; // 800D6BE4
  c->f[2]=-c->f[0]; // 800D6BE8
  c->lr=0x800D6BF0u; f_8005C22C(c); // 800D6BEC
  c->f[2]=-c->f[1]; // 800D6BF0
  {uint32_t ea=c->r[2]+0xFFFFA210u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6BF4
  fcmp(c,0,c->f[2],c->f[0]); // 800D6BF8
  if (!crb(c,1)) { goto L_800D6C14; } // 800D6BFC
  {uint32_t ea=c->r[2]+0xFFFFA21Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6C00
  {uint32_t ea=c->r[2]+0xFFFFA220u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6C04
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800D6C08
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800D6C0C
  goto L_800D6C2C; // 800D6C10
L_800D6C14:;
  {uint32_t ea=c->r[2]+0xFFFFA21Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6C14
  {uint32_t ea=c->r[2]+0xFFFFA220u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6C18
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D6C1C
  {uint32_t ea=c->r[2]+0xFFFFA224u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6C20
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800D6C24
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 800D6C28
L_800D6C2C:;
  {uint32_t ea=c->r[2]+0xFFFFA21Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6C2C
  fcmp(c,0,c->f[31],c->f[0]); // 800D6C30
  if (!crb(c,1)) { goto L_800D6C40; } // 800D6C34
  {uint32_t ea=c->r[2]+0xFFFFA224u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6C38
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800D6C3C
L_800D6C40:;
  c->r[0]=R8(c->r[31]+0x00000080u); // 800D6C40
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[30]=c->ps1[30]=RF32(ea);} // 800D6C44
  cmps(c,0,(int32_t)c->r[0],0); // 800D6C48
  if (crb(c,2)) { goto L_800D6C64; } // 800D6C4C
  {uint32_t ea=c->r[2]+0xFFFFA210u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6C50
  c->r[0]=0u+0x00000000u; // 800D6C54
  W8(c->r[31]+0x00000080u,c->r[0]); // 800D6C58
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D6C5C
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[31]);} // 800D6C60
L_800D6C64:;
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6C64
  {uint32_t ea=c->r[2]+0xFFFFA21Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6C68
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[1]); // 800D6C6C
  fcmp(c,0,c->f[31],c->f[0]); // 800D6C70
  if (!crb(c,1)) { goto L_800D6C84; } // 800D6C74
  {uint32_t ea=c->r[2]+0xFFFFA224u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6C78
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800D6C7C
  goto L_800D6C98; // 800D6C80
L_800D6C84:;
  {uint32_t ea=c->r[2]+0xFFFFA228u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6C84
  fcmp(c,0,c->f[31],c->f[0]); // 800D6C88
  if (!crb(c,0)) { goto L_800D6C98; } // 800D6C8C
  {uint32_t ea=c->r[2]+0xFFFFA224u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6C90
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 800D6C94
L_800D6C98:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6C98
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800D6C9C
  c->lr=0x800D6CA4u; f_8003EA88(c); // 800D6CA0
  {uint32_t ea=c->r[2]+0xFFFFA22Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6CA4
  fcmp(c,0,c->f[1],c->f[2]); // 800D6CA8
  if (!crb(c,1)) { goto L_800D6CD4; } // 800D6CAC
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6CB0
  fcmp(c,0,c->f[31],c->f[0]); // 800D6CB4
  if (!crb(c,0)) { goto L_800D6CC8; } // 800D6CB8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800D6CBC
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D6CC0
  goto L_800D6CD8; // 800D6CC4
L_800D6CC8:;
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800D6CC8
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D6CCC
  goto L_800D6CD8; // 800D6CD0
L_800D6CD4:;
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[31]);} // 800D6CD4
L_800D6CD8:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6CD8
  {uint32_t ea=c->r[2]+0xFFFFA230u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6CDC
  fcmp(c,0,c->f[1],c->f[0]); // 800D6CE0
  if (!crb(c,1)) { goto L_800D6CF0; } // 800D6CE4
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D6CE8
  goto L_800D6D0C; // 800D6CEC
L_800D6CF0:;
  {uint32_t ea=c->r[2]+0xFFFFA234u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6CF0
  fcmp(c,0,c->f[1],c->f[0]); // 800D6CF4
  if (!crb(c,0)) { goto L_800D6D0C; } // 800D6CF8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800D6CFC
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800D6D00
  c->r[0]=c->r[0]|0x00004000u; // 800D6D04
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800D6D08
L_800D6D0C:;
  {uint32_t ea=c->r[2]+0xFFFFA238u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6D0C
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6D10
  c->f[0]=c->ps1[0]=S(c->f[30]/c->f[1]); // 800D6D14
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800D6D18
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D6D1C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D6D20
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D6D24
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D6D28
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D6D2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6D30
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800D6D34
  if (crb(c,2)) { goto L_800D6D64; } // 800D6D38
  c->r[0]=R8(c->r[31]+0x00000029u); // 800D6D3C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D6D40
  if (crb(c,2)) { goto L_800D6D64; } // 800D6D44
  W8(c->r[31]+0x00000029u,c->r[3]); // 800D6D48
  c->r[3]=c->r[31]|c->r[31]; // 800D6D4C
  c->r[4]=0u+0x00000004u; // 800D6D50
  c->r[5]=0u+0x0000000Du; // 800D6D54
  c->r[6]=0u+0x00000001u; // 800D6D58
  c->r[7]=0u+0x00000001u; // 800D6D5C
  c->lr=0x800D6D64u; f_8017900C(c); // 800D6D60
L_800D6D64:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D6D64
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D6D68
  c->lr=0x800D6D70u; f_802501B0(c); // 800D6D6C
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6D70
  {uint32_t ea=c->r[2]+0xFFFFA23Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6D74
  {uint32_t ea=c->r[2]+0xFFFFA210u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6D78
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800D6D7C
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[2]);} // 800D6D80
  fcmp(c,0,c->f[1],c->f[0]); // 800D6D84
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[1]);} // 800D6D88
  if (!crb(c,0)) { goto L_800D6D9C; } // 800D6D8C
  {uint32_t ea=c->r[2]+0xFFFFA224u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6D90
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D6D94
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800D6D98
L_800D6D9C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800D6D9C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800D6DA0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800D6DA4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800D6DA8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D6DAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6DB0
  c->lr=c->r[0]; // 800D6DB4
  c->r[1]=c->r[1]+0x00000040u; // 800D6DB8
  return; // 800D6DBC
}

// fn_800D6DC0
void f_800D6DC0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800D6DC0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D6DC4
  f_802501B0(c); return; // 800D6DC8
}

// fn_800D6DCC
void f_800D6DCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6DCC
  c->r[0]=c->lr; // 800D6DD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6DD4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6DD8
  c->r[31]=c->r[3]|c->r[3]; // 800D6DDC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D6DE0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D6DE4
  c->lr=0x800D6DECu; f_802501B0(c); // 800D6DE8
  c->r[3]=c->r[31]+0x00000044u; // 800D6DEC
  c->r[4]=c->r[31]+0x000003CCu; // 800D6DF0
  c->lr=0x800D6DF8u; f_800361A0(c); // 800D6DF4
  {uint32_t ea=c->r[2]+0xFFFFA210u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6DF8
  c->r[7]=0u+0x803D0000u; // 800D6DFC
  {uint32_t ea=c->r[2]+0xFFFFA214u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6E00
  c->r[3]=c->r[31]|c->r[31]; // 800D6E04
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[1]);} // 800D6E08
  c->r[4]=c->r[1]+0x00000008u; // 800D6E0C
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800D6E10
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[1]);} // 800D6E14
  {uint32_t ea=c->r[7]+0x00002118u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D6E18
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D6E1C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D6E20
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D6E24
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D6E28
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D6E2C
  c->lr=0x800D6E34u; f_800D6890(c); // 800D6E30
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6E34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6E38
  c->lr=c->r[0]; // 800D6E3C
  c->r[1]=c->r[1]+0x00000020u; // 800D6E40
  return; // 800D6E44
}

// fn_800D6E48
void f_800D6E48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6E48
  c->r[0]=c->lr; // 800D6E4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6E50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6E54
  c->r[31]=c->r[3]|c->r[3]; // 800D6E58
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D6E5C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D6E60
  c->lr=0x800D6E68u; f_802501B0(c); // 800D6E64
  c->r[3]=c->r[31]|c->r[31]; // 800D6E68
  c->lr=0x800D6E70u; f_80178D1C(c); // 800D6E6C
  c->r[3]=c->r[31]|c->r[31]; // 800D6E70
  c->lr=0x800D6E78u; f_80178D9C(c); // 800D6E74
  c->r[3]=c->r[31]|c->r[31]; // 800D6E78
  c->lr=0x800D6E80u; f_80178E98(c); // 800D6E7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6E80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6E84
  c->lr=c->r[0]; // 800D6E88
  c->r[1]=c->r[1]+0x00000010u; // 800D6E8C
  return; // 800D6E90
}

// fn_800D6E94
void f_800D6E94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6E94
  c->r[0]=c->lr; // 800D6E98
  c->r[7]=0u+0x803D0000u; // 800D6E9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6EA0
  c->r[0]=0u+0x00000000u; // 800D6EA4
  c->r[4]=c->r[1]+0x00000008u; // 800D6EA8
  W16(c->r[3]+0x000003BCu,c->r[0]); // 800D6EAC
  {uint32_t ea=c->r[7]+0x00002124u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D6EB0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D6EB4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D6EB8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D6EBC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D6EC0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D6EC4
  c->lr=0x800D6ECCu; f_800D6890(c); // 800D6EC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6ECC
  c->lr=c->r[0]; // 800D6ED0
  c->r[1]=c->r[1]+0x00000020u; // 800D6ED4
  return; // 800D6ED8
}

// fn_800D6EDC
void f_800D6EDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6EDC
  c->r[0]=c->lr; // 800D6EE0
  c->r[4]=0u+0x805D0000u; // 800D6EE4
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D6EE8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800D6EEC
  W32(c->r[1]+0x00000068u,c->r[30]); // 800D6EF0
  c->r[30]=c->r[3]|c->r[3]; // 800D6EF4
  c->r[3]=c->r[4]+0x00003F6Cu; // 800D6EF8
  c->lr=0x800D6F00u; f_80037AF0(c); // 800D6EFC
  cmpu(c,0,c->r[3],c->r[30]); // 800D6F00
  if (crb(c,2)) { goto L_800D6F6C; } // 800D6F04
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800D6F08
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 800D6F0C
  cmps(c,0,(int32_t)c->r[0],128); // 800D6F10
  if (!crb(c,2)) { goto L_800D6F3C; } // 800D6F14
  c->r[3]=0u+0x80620000u; // 800D6F18
  c->r[3]=c->r[3]+0x00007688u; // 800D6F1C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800D6F20
  cmps(c,0,(int32_t)c->r[3],0); // 800D6F24
  if (crb(c,2)) { goto L_800D6F3C; } // 800D6F28
  c->r[4]=0u+0x00000002u; // 800D6F2C
  c->lr=0x800D6F34u; f_80037670(c); // 800D6F30
  cmps(c,0,(int32_t)c->r[3],0); // 800D6F34
  if (!crb(c,2)) { goto L_800D6F6C; } // 800D6F38
L_800D6F3C:;
  c->r[31]=0u+0x80550000u; // 800D6F3C
  {uint32_t ea=c->r[2]+0xFFFFA240u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6F40
  c->r[31]=c->r[31]+0x00003D60u; // 800D6F44
  c->r[5]=c->r[30]|c->r[30]; // 800D6F48
  c->r[3]=c->r[31]+0x00000010u; // 800D6F4C
  c->r[6]=c->r[30]+0x0000002Cu; // 800D6F50
  c->r[7]=c->r[1]+0x00000008u; // 800D6F54
  c->r[4]=0u+0x000001FFu; // 800D6F58
  c->lr=0x800D6F60u; f_80226910(c); // 800D6F5C
  c->r[3]=c->r[31]+0x00000010u; // 800D6F60
  c->r[4]=c->r[1]+0x00000008u; // 800D6F64
  c->lr=0x800D6F6Cu; f_80226D68(c); // 800D6F68
L_800D6F6C:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D6F6C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800D6F70
  c->r[30]=R32(c->r[1]+0x00000068u); // 800D6F74
  c->lr=c->r[0]; // 800D6F78
  c->r[1]=c->r[1]+0x00000070u; // 800D6F7C
  return; // 800D6F80
}

// fn_800D6F84
void f_800D6F84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6F84
  c->r[0]=c->lr; // 800D6F88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6F8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6F90
  c->r[31]=c->r[3]|c->r[3]; // 800D6F94
  c->r[3]=c->r[3]+0x00000210u; // 800D6F98
  c->lr=0x800D6FA0u; f_8004BAD4(c); // 800D6F9C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6FA0
  if (crb(c,2)) { goto L_800D7014; } // 800D6FA4
  c->r[0]=R32(c->r[31]+0x00000210u); // 800D6FA8
  c->r[4]=c->r[31]|c->r[31]; // 800D6FAC
  c->r[3]=c->r[31]+0x00000210u; // 800D6FB0
  c->r[0]=c->r[0]|0xAA000000u; // 800D6FB4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800D6FB8
  c->lr=0x800D6FC0u; f_80043E44(c); // 800D6FBC
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6FC0
  c->r[3]=c->r[31]+0x00000210u; // 800D6FC4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6FC8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D6FCC
  c->lr=0x800D6FD4u; f_80043E34(c); // 800D6FD0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D6FD4
  c->r[4]=0u+0x803A0000u; // 800D6FD8
  c->r[4]=c->r[4]+0xFFFFE154u; // 800D6FDC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D6FE0
  c->r[4]=c->r[4]+0x00000009u; // 800D6FE4
  c->lr=0x800D6FECu; f_80256EC4(c); // 800D6FE8
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D6FEC
  c->r[5]=c->r[3]|c->r[3]; // 800D6FF0
  c->r[3]=c->r[31]+0x00000210u; // 800D6FF4
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800D6FF8
  c->lr=0x800D7000u; f_8004BAC8(c); // 800D6FFC
  {uint32_t ea=c->r[2]+0xFFFFA244u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7000
  c->r[3]=c->r[31]+0x00000210u; // 800D7004
  c->f[2]=c->f[1]; // 800D7008
  c->f[3]=c->f[1]; // 800D700C
  c->lr=0x800D7014u; f_80043E24(c); // 800D7010
L_800D7014:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7014
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7018
  c->lr=c->r[0]; // 800D701C
  c->r[1]=c->r[1]+0x00000010u; // 800D7020
  return; // 800D7024
}

// fn_800D7028
void f_800D7028(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7028
  c->r[0]=c->lr; // 800D702C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7030
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7034
  c->r[31]=c->r[3]|c->r[3]; // 800D7038
  c->r[3]=c->r[3]+0x00000210u; // 800D703C
  c->lr=0x800D7044u; f_80221698(c); // 800D7040
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D7044
  cmps(c,0,(int32_t)c->r[3],0); // 800D7048
  if (crb(c,2)) { goto L_800D706C; } // 800D704C
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800D7050
  cmps(c,0,(int32_t)c->r[0],0); // 800D7054
  if (crb(c,2)) { goto L_800D706C; } // 800D7058
  c->r[0]=R32(c->r[31]+0x00000210u); // 800D705C
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800D7060
  W32(c->r[31]+0x00000210u,c->r[0]); // 800D7064
  goto L_800D7078; // 800D7068
L_800D706C:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800D706C
  c->r[0]=c->r[0]|0x80000000u; // 800D7070
  W32(c->r[31]+0x00000210u,c->r[0]); // 800D7074
L_800D7078:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7078
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D707C
  c->lr=c->r[0]; // 800D7080
  c->r[1]=c->r[1]+0x00000010u; // 800D7084
  return; // 800D7088
}

// fn_800D708C
void f_800D708C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D708C
  c->r[0]=c->lr; // 800D7090
  cmps(c,0,(int32_t)c->r[3],0); // 800D7094
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7098
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D709C
  c->r[31]=c->r[4]|c->r[4]; // 800D70A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D70A4
  c->r[30]=c->r[3]|c->r[3]; // 800D70A8
  if (crb(c,2)) { goto L_800D70C8; } // 800D70AC
  c->r[4]=0u+0x00000000u; // 800D70B0
  c->lr=0x800D70B8u; f_8026A06C(c); // 800D70B4
  cmps(c,0,(int32_t)c->r[31],0); // 800D70B8
  if (!crb(c,1)) { goto L_800D70C8; } // 800D70BC
  c->r[3]=c->r[30]|c->r[30]; // 800D70C0
  c->lr=0x800D70C8u; f_8026A268(c); // 800D70C4
L_800D70C8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D70C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D70CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D70D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D70D4
  c->lr=c->r[0]; // 800D70D8
  c->r[1]=c->r[1]+0x00000010u; // 800D70DC
  return; // 800D70E0
}

// fn_800D70E4
void f_800D70E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D70E4
  c->r[0]=c->lr; // 800D70E8
  c->r[4]=0u+0x00000000u; // 800D70EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D70F0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D70F4
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D70F8
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D70FC
  W32(c->r[1]+0x00000020u,c->r[28]); // 800D7100
  c->r[28]=c->r[3]|c->r[3]; // 800D7104
  c->lr=0x800D710Cu; f_801F57D0(c); // 800D7108
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800D710C
  c->r[3]=c->r[28]|c->r[28]; // 800D7110
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D7114
  c->ctr=c->r[12]; // 800D7118
  if (true) { c->lr=0x800D7120u; dispatch(c,c->ctr); } // 800D711C
  c->r[3]=c->r[28]|c->r[28]; // 800D7120
  c->lr=0x800D7128u; f_801F4B94(c); // 800D7124
  c->r[3]=0u+0x00000003u; // 800D7128
  c->r[0]=0u+0x00000038u; // 800D712C
  W8(c->r[28]+0x0000006Cu,c->r[3]); // 800D7130
  c->r[3]=c->r[28]|c->r[28]; // 800D7134
  c->r[4]=R32(c->r[28]+0x00000394u); // 800D7138
  W8(c->r[28]+0x0000006Du,c->r[0]); // 800D713C
  c->lr=0x800D7144u; f_801F58BC(c); // 800D7140
  c->r[3]=R32(c->r[28]+0x00000394u); // 800D7144
  c->r[29]=0u+0x00000001u; // 800D7148
  c->r[30]=0u+0x803A0000u; // 800D714C
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800D7150
  c->r[4]=c->r[30]+0xFFFFE168u; // 800D7154
  c->r[3]=R32(c->r[28]+0x00000394u); // 800D7158
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D715C
  c->lr=0x800D7164u; f_80256EC4(c); // 800D7160
  c->r[6]=R32(c->r[28]+0x00000394u); // 800D7164
  c->r[4]=0u+0x00000000u; // 800D7168
  {uint32_t ea=c->r[2]+0xFFFFA250u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D716C
  c->r[5]=0u+0x00000000u; // 800D7170
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800D7174
  c->r[3]=c->r[28]|c->r[28]; // 800D7178
  c->f[2]=c->f[1]; // 800D717C
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800D7180
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D7184
  c->ctr=c->r[12]; // 800D7188
  if (true) { c->lr=0x800D7190u; dispatch(c,c->ctr); } // 800D718C
  {uint32_t ea=c->r[2]+0xFFFFA250u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7190
  c->r[4]=0u+0x00000000u; // 800D7194
  c->r[5]=R32(c->r[28]+0x00000394u); // 800D7198
  c->f[2]=c->f[1]; // 800D719C
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800D71A0
  c->r[5]=R32(c->r[5]+0x00000034u); // 800D71A4
  c->lr=0x800D71ACu; f_8024FEAC(c); // 800D71A8
  c->r[3]=R32(c->r[28]+0x00000394u); // 800D71AC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D71B0
  c->lr=0x800D71B8u; f_802501B0(c); // 800D71B4
  c->r[4]=R32(c->r[28]+0x00000394u); // 800D71B8
  c->r[31]=0u+0x00000000u; // 800D71BC
  {uint32_t ea=c->r[2]+0xFFFFA250u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D71C0
  c->r[3]=c->r[30]+0xFFFFE168u; // 800D71C4
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800D71C8
  c->r[4]=c->r[3]+0x00000009u; // 800D71CC
  W8(c->r[28]+0x0000007Cu,c->r[31]); // 800D71D0
  c->r[3]=R32(c->r[28]+0x00000394u); // 800D71D4
  W8(c->r[28]+0x0000007Du,c->r[29]); // 800D71D8
  {uint32_t ea=c->r[28]+0x00000074u; WF32(ea,c->f[0]);} // 800D71DC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D71E0
  c->lr=0x800D71E8u; f_80256EC4(c); // 800D71E4
  W8(c->r[28]+0x0000007Eu,c->r[3]); // 800D71E8
  c->r[3]=c->r[28]|c->r[28]; // 800D71EC
  W8(c->r[28]+0x00000080u,c->r[31]); // 800D71F0
  W8(c->r[28]+0x0000006Fu,c->r[29]); // 800D71F4
  c->lr=0x800D71FCu; f_801F56F4(c); // 800D71F8
  c->r[7]=0u+0x803D0000u; // 800D71FC
  {uint32_t ea=c->r[7]+0x00002270u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D7200
  c->r[3]=c->r[28]|c->r[28]; // 800D7204
  c->r[4]=c->r[1]+0x00000008u; // 800D7208
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D720C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D7210
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D7214
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D7218
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D721C
  c->lr=0x800D7224u; f_800D7244(c); // 800D7220
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D7224
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D7228
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D722C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D7230
  c->r[28]=R32(c->r[1]+0x00000020u); // 800D7234
  c->lr=c->r[0]; // 800D7238
  c->r[1]=c->r[1]+0x00000030u; // 800D723C
  return; // 800D7240
}

// fn_800D7244
void f_800D7244(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7244
  c->r[0]=c->lr; // 800D7248
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D724C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7250
  c->r[31]=c->r[4]|c->r[4]; // 800D7254
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D7258
  c->r[30]=c->r[3]|c->r[3]; // 800D725C
  c->r[3]=c->r[31]|c->r[31]; // 800D7260
  c->lr=0x800D7268u; f_802B9FDC(c); // 800D7264
  cmps(c,0,(int32_t)c->r[3],0); // 800D7268
  if (crb(c,2)) { goto L_800D7288; } // 800D726C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D7270
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D7274
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D7278
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D727C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D7280
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D7284
L_800D7288:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7288
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D728C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D7290
  c->lr=c->r[0]; // 800D7294
  c->r[1]=c->r[1]+0x00000010u; // 800D7298
  return; // 800D729C
}

// fn_800D72A0
void f_800D72A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D72A0
  c->r[0]=c->lr; // 800D72A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D72A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D72AC
  c->r[31]=c->r[3]|c->r[3]; // 800D72B0
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800D72B4
  c->r[12]=R32(c->r[12]+0x00000068u); // 800D72B8
  c->ctr=c->r[12]; // 800D72BC
  if (true) { c->lr=0x800D72C4u; dispatch(c,c->ctr); } // 800D72C0
  c->r[3]=c->r[31]|c->r[31]; // 800D72C4
  c->lr=0x800D72CCu; f_801F4C0C(c); // 800D72C8
  c->r[3]=c->r[31]+0x00000210u; // 800D72CC
  c->lr=0x800D72D4u; f_80221698(c); // 800D72D0
  c->r[3]=c->r[31]|c->r[31]; // 800D72D4
  c->lr=0x800D72DCu; f_800D75E0(c); // 800D72D8
  c->r[3]=c->r[31]|c->r[31]; // 800D72DC
  c->lr=0x800D72E4u; f_801F56F4(c); // 800D72E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D72E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D72E8
  c->lr=c->r[0]; // 800D72EC
  c->r[1]=c->r[1]+0x00000010u; // 800D72F0
  return; // 800D72F4
}

// fn_800D72F8
void f_800D72F8(Ctx* __restrict c) {
  f_801F50B4(c); return; // 800D72F8
}

// fn_800D72FC
void f_800D72FC(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800D72FC
}

// fn_800D7300
void f_800D7300(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800D7300
}

// fn_800D7304
void f_800D7304(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7304
  c->r[0]=c->lr; // 800D7308
  c->r[5]=0u+0x00000000u; // 800D730C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7310
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7314
  c->r[31]=c->r[3]|c->r[3]; // 800D7318
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800D731C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D7320
  c->r[3]=c->r[2]+0xFFFFA258u; // 800D7324
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D7328
  c->r[3]=R32(c->r[3]+c->r[0]); // 800D732C
  c->r[4]=c->r[4]+0x0000010Cu; // 800D7330
  c->lr=0x800D7338u; f_8024EE50(c); // 800D7334
  cmps(c,0,(int32_t)c->r[3],0); // 800D7338
  if (crb(c,2)) { goto L_800D7348; } // 800D733C
  c->r[3]=0u+0x00000000u; // 800D7340
  goto L_800D73B0; // 800D7344
L_800D7348:;
  c->r[3]=c->r[31]+0x00000210u; // 800D7348
  c->r[4]=0u+0x000000E1u; // 800D734C
  c->lr=0x800D7354u; f_80221630(c); // 800D7350
  cmps(c,0,(int32_t)c->r[3],0); // 800D7354
  if (crb(c,2)) { goto L_800D73A4; } // 800D7358
  c->r[0]=R32(c->r[31]+0x00000210u); // 800D735C
  c->r[4]=c->r[31]|c->r[31]; // 800D7360
  c->r[3]=c->r[31]+0x00000210u; // 800D7364
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800D7368
  c->r[0]=c->r[0]|0x28000000u; // 800D736C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800D7370
  c->lr=0x800D7378u; f_80043E44(c); // 800D7374
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7378
  c->r[3]=c->r[31]+0x00000210u; // 800D737C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7380
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D7384
  c->lr=0x800D738Cu; f_80043E34(c); // 800D7388
  {uint32_t ea=c->r[2]+0xFFFFA260u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D738C
  c->r[3]=c->r[31]+0x00000210u; // 800D7390
  {uint32_t ea=c->r[2]+0xFFFFA264u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7394
  c->f[3]=c->f[1]; // 800D7398
  c->lr=0x800D73A0u; f_80043E24(c); // 800D739C
  goto L_800D73AC; // 800D73A0
L_800D73A4:;
  c->r[3]=0u+0x00000000u; // 800D73A4
  goto L_800D73B0; // 800D73A8
L_800D73AC:;
  c->r[3]=0u+0x00000001u; // 800D73AC
L_800D73B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D73B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D73B4
  c->lr=c->r[0]; // 800D73B8
  c->r[1]=c->r[1]+0x00000010u; // 800D73BC
  return; // 800D73C0
}

// fn_800D73C4
void f_800D73C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D73C4
  c->r[0]=c->lr; // 800D73C8
  c->r[7]=0u+0x803D0000u; // 800D73CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D73D0
  c->r[4]=c->r[1]+0x00000008u; // 800D73D4
  {uint32_t ea=c->r[7]+0x0000227Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800D73D8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D73DC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D73E0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D73E4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D73E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D73EC
  c->lr=0x800D73F4u; f_800D7244(c); // 800D73F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D73F4
  c->lr=c->r[0]; // 800D73F8
  c->r[1]=c->r[1]+0x00000020u; // 800D73FC
  return; // 800D7400
}

// fn_800D7404
void f_800D7404(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7404
  c->r[0]=c->lr; // 800D7408
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D740C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D7410
  c->r[31]=c->r[3]|c->r[3]; // 800D7414
  c->r[0]=R8(c->r[3]+0x0000007Cu); // 800D7418
  cmps(c,0,(int32_t)c->r[0],0); // 800D741C
  if (crb(c,2)) { goto L_800D7578; } // 800D7420
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800D7424
  cmps(c,0,(int32_t)c->r[0],0); // 800D7428
  if (crb(c,2)) { goto L_800D7458; } // 800D742C
  c->r[0]=R8(c->r[3]+0x00000080u); // 800D7430
  cmpu(c,0,c->r[0],0x00000014u); // 800D7434
  if (!crb(c,0)) { goto L_800D7458; } // 800D7438
  c->r[0]=0u+0x0000002Eu; // 800D743C
  c->r[4]=0u+0x00000004u; // 800D7440
  W8(c->r[3]+0x00000080u,c->r[0]); // 800D7444
  c->r[5]=0u+0x00000005u; // 800D7448
  c->r[6]=0u+0x00000001u; // 800D744C
  c->r[7]=0u+0x00000001u; // 800D7450
  c->lr=0x800D7458u; f_8017900C(c); // 800D7454
L_800D7458:;
  c->r[0]=R8(c->r[31]+0x0000007Cu); // 800D7458
  cmps(c,0,(int32_t)c->r[0],2); // 800D745C
  if (crb(c,2)) { goto L_800D74D8; } // 800D7460
  if (!crb(c,0)) { goto L_800D7538; } // 800D7464
  cmps(c,0,(int32_t)c->r[0],1); // 800D7468
  if (!crb(c,0)) { goto L_800D7474; } // 800D746C
  goto L_800D7538; // 800D7470
L_800D7474:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D7474
  cmps(c,0,(int32_t)c->r[0],0); // 800D7478
  if (crb(c,2)) { goto L_800D74AC; } // 800D747C
  {uint32_t ea=c->r[31]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7480
  {uint32_t ea=c->r[2]+0xFFFFA268u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7484
  {uint32_t ea=c->r[2]+0xFFFFA26Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7488
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D748C
  fcmp(c,0,c->f[1],c->f[0]); // 800D7490
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[1]);} // 800D7494
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D7498
  if (!crb(c,2)) { goto L_800D7538; } // 800D749C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D74A0
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800D74A4
  goto L_800D7538; // 800D74A8
L_800D74AC:;
  {uint32_t ea=c->r[31]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D74AC
  {uint32_t ea=c->r[2]+0xFFFFA270u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D74B0
  {uint32_t ea=c->r[2]+0xFFFFA250u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D74B4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800D74B8
  fcmp(c,0,c->f[1],c->f[0]); // 800D74BC
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[1]);} // 800D74C0
  if (!crb(c,0)) { goto L_800D7538; } // 800D74C4
  {uint32_t ea=c->r[2]+0xFFFFA26Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D74C8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D74CC
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800D74D0
  goto L_800D7538; // 800D74D4
L_800D74D8:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800D74D8
  cmps(c,0,(int32_t)c->r[0],0); // 800D74DC
  if (crb(c,2)) { goto L_800D7510; } // 800D74E0
  {uint32_t ea=c->r[31]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D74E4
  {uint32_t ea=c->r[2]+0xFFFFA268u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D74E8
  {uint32_t ea=c->r[2]+0xFFFFA250u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D74EC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800D74F0
  fcmp(c,0,c->f[1],c->f[0]); // 800D74F4
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[1]);} // 800D74F8
  if (!crb(c,0)) { goto L_800D7538; } // 800D74FC
  {uint32_t ea=c->r[2]+0xFFFFA26Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7500
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D7504
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800D7508
  goto L_800D7538; // 800D750C
L_800D7510:;
  {uint32_t ea=c->r[31]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7510
  {uint32_t ea=c->r[2]+0xFFFFA270u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7514
  {uint32_t ea=c->r[2]+0xFFFFA26Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7518
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D751C
  fcmp(c,0,c->f[1],c->f[0]); // 800D7520
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[1]);} // 800D7524
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D7528
  if (!crb(c,2)) { goto L_800D7538; } // 800D752C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D7530
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800D7534
L_800D7538:;
  c->r[4]=0u+0x00000000u; // 800D7538
  {uint32_t ea=c->r[31]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D753C
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800D7540
  c->r[5]=c->r[1]+0x00000008u; // 800D7544
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800D7548
  W8(c->r[31]+0x0000007Cu,c->r[4]); // 800D754C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800D7550
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D7554
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D7558
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D755C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D7560
  W32(c->r[1]+0x00000014u,c->r[4]); // 800D7564
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D7568
  W32(c->r[1]+0x00000018u,c->r[4]); // 800D756C
  c->r[4]=R8(c->r[31]+0x0000007Eu); // 800D7570
  c->lr=0x800D7578u; f_8025E9C0(c); // 800D7574
L_800D7578:;
  c->r[0]=R8(c->r[31]+0x00000080u); // 800D7578
  cmps(c,0,(int32_t)c->r[0],0); // 800D757C
  if (crb(c,2)) { goto L_800D75CC; } // 800D7580
  c->lr=0x800D7588u; f_8024E040(c); // 800D7584
  c->r[3]=R8(c->r[31]+0x00000080u); // 800D7588
  c->r[0]=0u+0x43300000u; // 800D758C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800D7590
  {uint32_t ea=c->r[2]+0xFFFFA278u; c->f[2]=RF64(ea);} // 800D7594
  W32(c->r[1]+0x00000024u,c->r[3]); // 800D7598
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800D759C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800D75A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D75A4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D75A8
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800D75AC
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800D75B0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800D75B4
  W8(c->r[31]+0x00000080u,c->r[3]); // 800D75B8
  cmpu(c,0,c->r[0],0x0000002Eu); // 800D75BC
  if (!crb(c,1)) { goto L_800D75CC; } // 800D75C0
  c->r[0]=0u+0x00000000u; // 800D75C4
  W8(c->r[31]+0x00000080u,c->r[0]); // 800D75C8
L_800D75CC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D75CC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D75D0
  c->lr=c->r[0]; // 800D75D4
  c->r[1]=c->r[1]+0x00000040u; // 800D75D8
  return; // 800D75DC
}

// fn_800D75E0
void f_800D75E0(Ctx* __restrict c) {
  return; // 800D75E0
}

// fn_800D75E4
void f_800D75E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D75E4
  c->r[0]=c->lr; // 800D75E8
  cmps(c,0,(int32_t)c->r[3],0); // 800D75EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D75F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D75F4
  c->r[31]=c->r[4]|c->r[4]; // 800D75F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D75FC
  c->r[30]=c->r[3]|c->r[3]; // 800D7600
  if (crb(c,2)) { goto L_800D7620; } // 800D7604
  c->r[4]=0u+0x00000000u; // 800D7608
  c->lr=0x800D7610u; f_8026A06C(c); // 800D760C
  cmps(c,0,(int32_t)c->r[31],0); // 800D7610
  if (!crb(c,1)) { goto L_800D7620; } // 800D7614
  c->r[3]=c->r[30]|c->r[30]; // 800D7618
  c->lr=0x800D7620u; f_8026A268(c); // 800D761C
L_800D7620:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7620
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7624
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D7628
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D762C
  c->lr=c->r[0]; // 800D7630
  c->r[1]=c->r[1]+0x00000010u; // 800D7634
  return; // 800D7638
}

// fn_800D763C
void f_800D763C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D763C
  c->r[0]=c->lr; // 800D7640
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D7644
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800D7648
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800D764C
  c->r[4]=0u+0x00000000u; // 800D7650
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D7654
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D7658
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D765C
  c->r[29]=c->r[3]|c->r[3]; // 800D7660
  c->lr=0x800D7668u; f_801F57D0(c); // 800D7664
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800D7668
  c->r[3]=c->r[29]|c->r[29]; // 800D766C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D7670
  c->ctr=c->r[12]; // 800D7674
  if (true) { c->lr=0x800D767Cu; dispatch(c,c->ctr); } // 800D7678
  c->r[3]=c->r[29]|c->r[29]; // 800D767C
  c->lr=0x800D7684u; f_801F4B94(c); // 800D7680
  c->r[0]=R16(c->r[29]+0x000003BEu); // 800D7684
  c->r[4]=0u+0x00000003u; // 800D7688
  {uint32_t ea=c->r[2]+0xFFFFA288u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D768C
  c->r[5]=0u+0x00000039u; // 800D7690
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800D7694
  c->r[3]=0u+0x80550000u; // 800D7698
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800D769C
  c->f[3]=c->f[1]; // 800D76A0
  W8(c->r[29]+0x0000006Cu,c->r[4]); // 800D76A4
  c->r[3]=c->r[3]+0x00003D60u; // 800D76A8
  {uint32_t ea=c->r[29]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D76AC
  c->r[4]=c->r[29]+0x0000002Cu; // 800D76B0
  W8(c->r[29]+0x0000006Du,c->r[5]); // 800D76B4
  {uint32_t ea=c->r[2]+0xFFFFA28Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D76B8
  c->r[5]=c->r[29]+0x00000030u; // 800D76BC
  W16(c->r[29]+0x000003BEu,c->r[0]); // 800D76C0
  c->r[6]=0u+0x00000000u; // 800D76C4
  c->r[7]=0u+0x00000000u; // 800D76C8
  c->lr=0x800D76D0u; f_801D5488(c); // 800D76CC
  c->r[4]=R32(c->r[29]+0x00000394u); // 800D76D0
  c->r[3]=c->r[29]|c->r[29]; // 800D76D4
  c->lr=0x800D76DCu; f_801F58BC(c); // 800D76D8
  c->r[3]=R32(c->r[29]+0x00000394u); // 800D76DC
  c->r[30]=0u+0x00000001u; // 800D76E0
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800D76E4
  {uint32_t ea=c->r[29]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D76E8
  c->r[3]=R32(c->r[29]+0x00000394u); // 800D76EC
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800D76F0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D76F4
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 800D76F8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D76FC
  c->lr=0x800D7704u; f_802501B0(c); // 800D7700
  c->r[4]=R32(c->r[29]+0x00000394u); // 800D7704
  c->r[31]=0u+0x00000000u; // 800D7708
  c->r[3]=c->r[29]|c->r[29]; // 800D770C
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800D7710
  W8(c->r[29]+0x0000006Fu,c->r[30]); // 800D7714
  c->lr=0x800D771Cu; f_801F56F4(c); // 800D7718
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800D771C
  c->r[3]=c->r[29]|c->r[29]; // 800D7720
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D7724
  c->ctr=c->r[12]; // 800D7728
  if (true) { c->lr=0x800D7730u; dispatch(c,c->ctr); } // 800D772C
  W32(c->r[29]+0x00000078u,c->r[31]); // 800D7730
  c->r[4]=0u+0x803A0000u; // 800D7734
  c->r[3]=R32(c->r[29]+0x00000394u); // 800D7738
  c->r[4]=c->r[4]+0xFFFFE1A4u; // 800D773C
  W8(c->r[29]+0x0000007Cu,c->r[31]); // 800D7740
  W8(c->r[29]+0x0000007Du,c->r[31]); // 800D7744
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D7748
  c->lr=0x800D7750u; f_80256EC4(c); // 800D774C
  W8(c->r[29]+0x0000007Eu,c->r[3]); // 800D7750
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800D7754
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800D7758
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D775C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D7760
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D7764
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D7768
  c->lr=c->r[0]; // 800D776C
  c->r[1]=c->r[1]+0x00000030u; // 800D7770
  return; // 800D7774
}

// fn_800D7778
void f_800D7778(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7778
  c->r[0]=c->lr; // 800D777C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7780
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7784
  c->r[31]=c->r[3]|c->r[3]; // 800D7788
  c->lr=0x800D7790u; f_800D7E08(c); // 800D778C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D7790
  c->r[3]=c->r[31]|c->r[31]; // 800D7794
  c->r[12]=R32(c->r[12]+0x00000068u); // 800D7798
  c->ctr=c->r[12]; // 800D779C
  if (true) { c->lr=0x800D77A4u; dispatch(c,c->ctr); } // 800D77A0
  c->r[3]=c->r[31]|c->r[31]; // 800D77A4
  c->lr=0x800D77ACu; f_801F4C0C(c); // 800D77A8
  c->r[3]=c->r[31]|c->r[31]; // 800D77AC
  c->lr=0x800D77B4u; f_800D7FFC(c); // 800D77B0
  c->r[3]=c->r[31]|c->r[31]; // 800D77B4
  c->lr=0x800D77BCu; f_801F56F4(c); // 800D77B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D77BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D77C0
  c->lr=c->r[0]; // 800D77C4
  c->r[1]=c->r[1]+0x00000010u; // 800D77C8
  return; // 800D77CC
}

// fn_800D77D0
void f_800D77D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D77D0
  c->r[0]=c->lr; // 800D77D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D77D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D77DC
  c->r[31]=c->r[3]|c->r[3]; // 800D77E0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D77E4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D77E8
  c->lr=0x800D77F0u; f_802501B0(c); // 800D77EC
  c->r[3]=c->r[31]|c->r[31]; // 800D77F0
  c->r[4]=0u+0x00000000u; // 800D77F4
  c->lr=0x800D77FCu; f_801F5244(c); // 800D77F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D77FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7800
  c->lr=c->r[0]; // 800D7804
  c->r[1]=c->r[1]+0x00000010u; // 800D7808
  return; // 800D780C
}

// fn_800D7810
void f_800D7810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7810
  c->r[0]=c->lr; // 800D7814
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D781C
  c->r[31]=c->r[3]|c->r[3]; // 800D7820
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D7824
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D7828
  c->lr=0x800D7830u; f_802501B0(c); // 800D782C
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D7830
  c->r[3]=c->r[31]+0x0000002Cu; // 800D7834
  c->r[4]=c->r[31]+0x00000060u; // 800D7838
  c->r[7]=0u+0x00000000u; // 800D783C
  c->r[5]=c->r[6]+0x00000074u; // 800D7840
  c->r[6]=c->r[6]+0x000000B0u; // 800D7844
  c->lr=0x800D784Cu; f_8002BE64(c); // 800D7848
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D784C
  c->r[6]=0u+0x00000000u; // 800D7850
  {uint32_t ea=c->r[2]+0xFFFFA290u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7854
  c->r[0]=0u+0x00000001u; // 800D7858
  W8(c->r[3]+0x0000014Cu,c->r[6]); // 800D785C
  c->r[3]=c->r[31]+0x0000002Cu; // 800D7860
  c->r[4]=c->r[31]+0x000003CCu; // 800D7864
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D7868
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800D786C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D7870
  {uint32_t ea=c->r[5]+0x00000074u; WF32(ea,c->f[0]);} // 800D7874
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D7878
  {uint32_t ea=c->r[5]+0x00000078u; WF32(ea,c->f[0]);} // 800D787C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D7880
  {uint32_t ea=c->r[5]+0x0000007Cu; WF32(ea,c->f[0]);} // 800D7884
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800D7888
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800D788C
  c->r[0]=c->r[5]|0x00000004u; // 800D7890
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800D7894
  c->lr=0x800D789Cu; f_800361A0(c); // 800D7898
  c->r[3]=c->r[31]+0x00000060u; // 800D789C
  c->r[4]=c->r[31]+0x000003D8u; // 800D78A0
  c->lr=0x800D78A8u; f_800361A0(c); // 800D78A4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D78A8
  c->r[3]=c->r[31]|c->r[31]; // 800D78AC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D78B0
  c->ctr=c->r[12]; // 800D78B4
  if (true) { c->lr=0x800D78BCu; dispatch(c,c->ctr); } // 800D78B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D78BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D78C0
  c->lr=c->r[0]; // 800D78C4
  c->r[1]=c->r[1]+0x00000010u; // 800D78C8
  return; // 800D78CC
}

// fn_800D78D0
void f_800D78D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D78D0
  c->r[0]=c->lr; // 800D78D4
  {uint32_t ea=c->r[2]+0xFFFFA294u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D78D8
  c->r[4]=0u+0x00000004u; // 800D78DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D78E0
  c->r[5]=0u+0x00000022u; // 800D78E4
  c->r[6]=0u+0x00000001u; // 800D78E8
  c->r[7]=0u+0x00000001u; // 800D78EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D78F0
  c->r[31]=c->r[3]|c->r[3]; // 800D78F4
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800D78F8
  {uint32_t ea=c->r[3]+0x00000068u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D78FC
  {uint32_t ea=c->r[3]+0x000003C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D7900
  c->r[0]=c->r[0]|0x00000001u; // 800D7904
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7908
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D790C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7910
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800D7914
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[5]);} // 800D7918
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[4]);} // 800D791C
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[3]);} // 800D7920
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[2]);} // 800D7924
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[1]);} // 800D7928
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 800D792C
  c->lr=0x800D7934u; f_8017900C(c); // 800D7930
  c->r[7]=0u+0x803D0000u; // 800D7934
  {uint32_t ea=c->r[7]+0x0000232Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800D7938
  c->r[3]=c->r[31]|c->r[31]; // 800D793C
  c->r[4]=c->r[1]+0x00000008u; // 800D7940
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D7944
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D7948
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D794C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D7950
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D7954
  c->lr=0x800D795Cu; f_800D7970(c); // 800D7958
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D795C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D7960
  c->lr=c->r[0]; // 800D7964
  c->r[1]=c->r[1]+0x00000020u; // 800D7968
  return; // 800D796C
}

// fn_800D7970
void f_800D7970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7970
  c->r[0]=c->lr; // 800D7974
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D797C
  c->r[31]=c->r[4]|c->r[4]; // 800D7980
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D7984
  c->r[30]=c->r[3]|c->r[3]; // 800D7988
  c->r[3]=c->r[31]|c->r[31]; // 800D798C
  c->lr=0x800D7994u; f_802B9FDC(c); // 800D7990
  cmps(c,0,(int32_t)c->r[3],0); // 800D7994
  if (crb(c,2)) { goto L_800D79B4; } // 800D7998
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D799C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D79A0
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D79A4
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D79A8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D79AC
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D79B0
L_800D79B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D79B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D79B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D79BC
  c->lr=c->r[0]; // 800D79C0
  c->r[1]=c->r[1]+0x00000010u; // 800D79C4
  return; // 800D79C8
}

// fn_800D79CC
void f_800D79CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D79CC
  c->r[0]=c->lr; // 800D79D0
  c->r[4]=0u+0x803A0000u; // 800D79D4
  {uint32_t ea=c->r[4]+0xFFFFE180u; c->r[9]=R32(ea); c->r[4]=ea;} // 800D79D8
  W32(c->r[1]+0x00000084u,c->r[0]); // 800D79DC
  c->r[6]=0u+0x803A0000u; // 800D79E0
  c->r[8]=R32(c->r[4]+0x00000004u); // 800D79E4
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800D79E8
  c->r[31]=0u+0x00000000u; // 800D79EC
  c->r[7]=R32(c->r[4]+0x00000008u); // 800D79F0
  W32(c->r[1]+0x00000078u,c->r[30]); // 800D79F4
  c->r[30]=c->r[3]|c->r[3]; // 800D79F8
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800D79FC
  {uint32_t ea=c->r[6]+0xFFFFE18Cu; c->r[5]=R32(ea); c->r[6]=ea;} // 800D7A00
  W32(c->r[1]+0x00000008u,c->r[9]); // 800D7A04
  c->r[4]=R32(c->r[6]+0x00000004u); // 800D7A08
  c->r[0]=R32(c->r[6]+0x00000008u); // 800D7A0C
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 800D7A10
  W32(c->r[1]+0x00000010u,c->r[7]); // 800D7A14
  W32(c->r[1]+0x00000038u,c->r[9]); // 800D7A18
  W32(c->r[1]+0x0000003Cu,c->r[8]); // 800D7A1C
  W32(c->r[1]+0x00000040u,c->r[7]); // 800D7A20
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 800D7A24
  W32(c->r[1]+0x00000030u,c->r[4]); // 800D7A28
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D7A2C
  W32(c->r[1]+0x00000020u,c->r[9]); // 800D7A30
  W32(c->r[1]+0x00000024u,c->r[8]); // 800D7A34
  W32(c->r[1]+0x00000028u,c->r[7]); // 800D7A38
  c->lr=0x800D7A40u; f_80035554(c); // 800D7A3C
  {uint32_t ea=c->r[30]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7A40
  {uint32_t ea=c->r[2]+0xFFFFA288u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7A44
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800D7A48
  fcmp(c,0,c->f[1],c->f[0]); // 800D7A4C
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[1]);} // 800D7A50
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D7A54
  if (!crb(c,2)) { goto L_800D7A64; } // 800D7A58
  c->r[31]=0u+0x00000001u; // 800D7A5C
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[0]);} // 800D7A60
L_800D7A64:;
  {uint32_t ea=c->r[30]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7A64
  c->r[3]=c->r[1]+0x00000048u; // 800D7A68
  {uint32_t ea=c->r[2]+0xFFFFA294u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7A6C
  c->r[4]=c->r[1]+0x00000020u; // 800D7A70
  {uint32_t ea=c->r[2]+0xFFFFA290u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7A74
  c->r[5]=c->r[1]+0x0000002Cu; // 800D7A78
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 800D7A7C
  {uint32_t ea=c->r[2]+0xFFFFA298u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7A80
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D7A84
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D7A88
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800D7A8C
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7A90
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800D7A94
  c->lr=0x800D7A9Cu; f_80251390(c); // 800D7A98
  c->r[4]=c->r[1]+0x00000038u; // 800D7A9C
  c->r[3]=c->r[1]+0x00000048u; // 800D7AA0
  c->r[5]=c->r[4]|c->r[4]; // 800D7AA4
  c->lr=0x800D7AACu; f_80296750(c); // 800D7AA8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7AAC
  c->r[3]=c->r[30]+0x0000002Cu; // 800D7AB0
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7AB4
  c->r[4]=c->r[1]+0x00000038u; // 800D7AB8
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7ABC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D7AC0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7AC4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800D7AC8
  {uint32_t ea=c->r[30]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7ACC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800D7AD0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D7AD4
  {uint32_t ea=c->r[30]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7AD8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D7ADC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800D7AE0
  c->lr=0x800D7AE8u; f_800361A0(c); // 800D7AE4
  cmps(c,0,(int32_t)c->r[31],0); // 800D7AE8
  if (crb(c,2)) { goto L_800D7B38; } // 800D7AEC
  c->r[3]=c->r[30]|c->r[30]; // 800D7AF0
  c->r[4]=0u+0x00000004u; // 800D7AF4
  c->r[5]=0u+0x00000023u; // 800D7AF8
  c->r[6]=0u+0x00000001u; // 800D7AFC
  c->r[7]=0u+0x00000001u; // 800D7B00
  c->lr=0x800D7B08u; f_8017900C(c); // 800D7B04
  {uint32_t ea=c->r[2]+0xFFFFA294u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7B08
  c->r[7]=0u+0x803D0000u; // 800D7B0C
  c->r[3]=c->r[30]|c->r[30]; // 800D7B10
  c->r[4]=c->r[1]+0x00000014u; // 800D7B14
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[0]);} // 800D7B18
  {uint32_t ea=c->r[7]+0x00002338u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D7B1C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D7B20
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D7B24
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D7B28
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D7B2C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D7B30
  c->lr=0x800D7B38u; f_800D7970(c); // 800D7B34
L_800D7B38:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800D7B38
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800D7B3C
  c->r[30]=R32(c->r[1]+0x00000078u); // 800D7B40
  c->lr=c->r[0]; // 800D7B44
  c->r[1]=c->r[1]+0x00000080u; // 800D7B48
  return; // 800D7B4C
}

// fn_800D7B50
void f_800D7B50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7B50
  c->r[0]=c->lr; // 800D7B54
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7B58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D7B5C
  c->r[31]=0u+0x00000000u; // 800D7B60
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D7B64
  c->r[30]=c->r[3]|c->r[3]; // 800D7B68
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800D7B6C
  c->lr=0x800D7B74u; f_80035554(c); // 800D7B70
  {uint32_t ea=c->r[30]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7B74
  {uint32_t ea=c->r[2]+0xFFFFA288u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7B78
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800D7B7C
  fcmp(c,0,c->f[1],c->f[0]); // 800D7B80
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[1]);} // 800D7B84
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D7B88
  if (!crb(c,2)) { goto L_800D7B98; } // 800D7B8C
  c->r[31]=0u+0x00000001u; // 800D7B90
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[0]);} // 800D7B94
L_800D7B98:;
  {uint32_t ea=c->r[30]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7B98
  {uint32_t ea=c->r[2]+0xFFFFA294u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7B9C
  {uint32_t ea=c->r[2]+0xFFFFA290u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D7BA0
  c->f[5]=c->ps1[5]=S(c->f[1]/c->f[0]); // 800D7BA4
  {uint32_t ea=c->r[30]+0x00000084u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D7BA8
  {uint32_t ea=c->r[30]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7BAC
  {uint32_t ea=c->r[2]+0xFFFFA29Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7BB0
  {uint32_t ea=c->r[2]+0xFFFFA288u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7BB4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[5]); // 800D7BB8
  c->f[1]=c->ps1[1]=S(std::fma(c->f[4],c->f[3],c->f[1])); // 800D7BBC
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[1]);} // 800D7BC0
  goto L_800D7BD4; // 800D7BC4
L_800D7BC8:;
  {uint32_t ea=c->r[30]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7BC8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800D7BCC
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[1]);} // 800D7BD0
L_800D7BD4:;
  {uint32_t ea=c->r[30]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7BD4
  fcmp(c,0,c->f[1],c->f[0]); // 800D7BD8
  if (crb(c,0)) { IRQCHK(c); goto L_800D7BC8; } // 800D7BDC
  {uint32_t ea=c->r[2]+0xFFFFA29Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7BE0
  goto L_800D7BF4; // 800D7BE4
L_800D7BE8:;
  {uint32_t ea=c->r[30]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7BE8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D7BEC
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[0]);} // 800D7BF0
L_800D7BF4:;
  {uint32_t ea=c->r[30]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7BF4
  fcmp(c,0,c->f[0],c->f[1]); // 800D7BF8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D7BFC
  if (crb(c,2)) { IRQCHK(c); goto L_800D7BE8; } // 800D7C00
  cmps(c,0,(int32_t)c->r[31],0); // 800D7C04
  if (crb(c,2)) { goto L_800D7C3C; } // 800D7C08
  {uint32_t ea=c->r[2]+0xFFFFA294u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7C0C
  c->r[7]=0u+0x803D0000u; // 800D7C10
  c->r[3]=c->r[30]|c->r[30]; // 800D7C14
  c->r[4]=c->r[1]+0x00000008u; // 800D7C18
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[0]);} // 800D7C1C
  {uint32_t ea=c->r[7]+0x00002344u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D7C20
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D7C24
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D7C28
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D7C2C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D7C30
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D7C34
  c->lr=0x800D7C3Cu; f_800D7970(c); // 800D7C38
L_800D7C3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7C3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D7C40
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D7C44
  c->lr=c->r[0]; // 800D7C48
  c->r[1]=c->r[1]+0x00000020u; // 800D7C4C
  return; // 800D7C50
}

// fn_800D7C54
void f_800D7C54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7C54
  c->r[0]=c->lr; // 800D7C58
  c->r[4]=0u+0x803A0000u; // 800D7C5C
  {uint32_t ea=c->r[4]+0xFFFFE180u; c->r[9]=R32(ea); c->r[4]=ea;} // 800D7C60
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D7C64
  c->r[6]=0u+0x803A0000u; // 800D7C68
  c->r[8]=R32(c->r[4]+0x00000004u); // 800D7C6C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800D7C70
  c->r[31]=0u+0x00000000u; // 800D7C74
  c->r[7]=R32(c->r[4]+0x00000008u); // 800D7C78
  W32(c->r[1]+0x00000068u,c->r[30]); // 800D7C7C
  c->r[30]=c->r[3]|c->r[3]; // 800D7C80
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800D7C84
  {uint32_t ea=c->r[6]+0xFFFFE198u; c->r[5]=R32(ea); c->r[6]=ea;} // 800D7C88
  W32(c->r[1]+0x00000008u,c->r[9]); // 800D7C8C
  c->r[4]=R32(c->r[6]+0x00000004u); // 800D7C90
  c->r[0]=R32(c->r[6]+0x00000008u); // 800D7C94
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 800D7C98
  W32(c->r[1]+0x00000010u,c->r[7]); // 800D7C9C
  W32(c->r[1]+0x0000002Cu,c->r[9]); // 800D7CA0
  W32(c->r[1]+0x00000030u,c->r[8]); // 800D7CA4
  W32(c->r[1]+0x00000034u,c->r[7]); // 800D7CA8
  W32(c->r[1]+0x00000020u,c->r[5]); // 800D7CAC
  W32(c->r[1]+0x00000024u,c->r[4]); // 800D7CB0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D7CB4
  W32(c->r[1]+0x00000014u,c->r[9]); // 800D7CB8
  W32(c->r[1]+0x00000018u,c->r[8]); // 800D7CBC
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 800D7CC0
  c->lr=0x800D7CC8u; f_80035554(c); // 800D7CC4
  {uint32_t ea=c->r[30]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7CC8
  {uint32_t ea=c->r[2]+0xFFFFA288u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7CCC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800D7CD0
  fcmp(c,0,c->f[1],c->f[0]); // 800D7CD4
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[1]);} // 800D7CD8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D7CDC
  if (!crb(c,2)) { goto L_800D7CEC; } // 800D7CE0
  c->r[31]=0u+0x00000001u; // 800D7CE4
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[0]);} // 800D7CE8
L_800D7CEC:;
  {uint32_t ea=c->r[30]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7CEC
  c->r[3]=c->r[1]+0x00000038u; // 800D7CF0
  {uint32_t ea=c->r[2]+0xFFFFA294u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7CF4
  c->r[4]=c->r[1]+0x00000014u; // 800D7CF8
  {uint32_t ea=c->r[2]+0xFFFFA298u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7CFC
  c->r[5]=c->r[1]+0x00000020u; // 800D7D00
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800D7D04
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D7D08
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800D7D0C
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7D10
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800D7D14
  c->lr=0x800D7D1Cu; f_80251390(c); // 800D7D18
  c->r[4]=c->r[1]+0x0000002Cu; // 800D7D1C
  c->r[3]=c->r[1]+0x00000038u; // 800D7D20
  c->r[5]=c->r[4]|c->r[4]; // 800D7D24
  c->lr=0x800D7D2Cu; f_80296750(c); // 800D7D28
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7D2C
  c->r[3]=c->r[30]+0x0000002Cu; // 800D7D30
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7D34
  c->r[4]=c->r[1]+0x0000002Cu; // 800D7D38
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7D3C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D7D40
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7D44
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800D7D48
  {uint32_t ea=c->r[30]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7D4C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800D7D50
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800D7D54
  {uint32_t ea=c->r[30]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7D58
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D7D5C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800D7D60
  c->lr=0x800D7D68u; f_800361A0(c); // 800D7D64
  cmps(c,0,(int32_t)c->r[31],0); // 800D7D68
  if (crb(c,2)) { goto L_800D7DA8; } // 800D7D6C
  c->r[3]=c->r[30]|c->r[30]; // 800D7D70
  c->r[4]=0u+0x00000004u; // 800D7D74
  c->r[5]=0u+0x00000021u; // 800D7D78
  c->r[6]=0u+0x00000001u; // 800D7D7C
  c->r[7]=0u+0x00000001u; // 800D7D80
  c->lr=0x800D7D88u; f_8017900C(c); // 800D7D84
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800D7D88
  c->r[3]=c->r[30]|c->r[30]; // 800D7D8C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 800D7D90
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800D7D94
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D7D98
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D7D9C
  c->ctr=c->r[12]; // 800D7DA0
  if (true) { c->lr=0x800D7DA8u; dispatch(c,c->ctr); } // 800D7DA4
L_800D7DA8:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D7DA8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800D7DAC
  c->r[30]=R32(c->r[1]+0x00000068u); // 800D7DB0
  c->lr=c->r[0]; // 800D7DB4
  c->r[1]=c->r[1]+0x00000070u; // 800D7DB8
  return; // 800D7DBC
}

// fn_800D7DC0
void f_800D7DC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7DC0
  c->r[0]=c->lr; // 800D7DC4
  c->r[6]=0u+0x803D0000u; // 800D7DC8
  c->r[5]=0u+0x00000000u; // 800D7DCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7DD0
  c->r[6]=c->r[6]+0x00002320u; // 800D7DD4
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800D7DD8
  c->r[3]=R32(c->r[3]+0x00000394u); // 800D7DDC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D7DE0
  c->r[4]=c->r[3]+0x0000010Cu; // 800D7DE4
  c->r[3]=R32(c->r[6]+c->r[0]); // 800D7DE8
  c->lr=0x800D7DF0u; f_8024EE50(c); // 800D7DEC
  c->r[0]=cntlz(c->r[3]); // 800D7DF0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D7DF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7DF8
  c->lr=c->r[0]; // 800D7DFC
  c->r[1]=c->r[1]+0x00000010u; // 800D7E00
  return; // 800D7E04
}

// fn_800D7E08
void f_800D7E08(Ctx* __restrict c) {
  return; // 800D7E08
}

// fn_800D7E0C
void f_800D7E0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7E0C
  c->r[0]=c->lr; // 800D7E10
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D7E14
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D7E18
  c->r[31]=c->r[3]|c->r[3]; // 800D7E1C
  c->lr=0x800D7E24u; f_801F4F28(c); // 800D7E20
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800D7E24
  cmps(c,0,(int32_t)c->r[0],102); // 800D7E28
  if (crb(c,2)) { goto L_800D7E70; } // 800D7E2C
  if (!crb(c,0)) { goto L_800D7E9C; } // 800D7E30
  cmps(c,0,(int32_t)c->r[0],101); // 800D7E34
  if (!crb(c,0)) { goto L_800D7E40; } // 800D7E38
  goto L_800D7E9C; // 800D7E3C
L_800D7E40:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800D7E40
  c->r[7]=0u+0x803D0000u; // 800D7E44
  c->r[3]=c->r[31]|c->r[31]; // 800D7E48
  c->r[4]=c->r[1]+0x00000014u; // 800D7E4C
  {uint32_t ea=c->r[7]+0x00002350u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D7E50
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D7E54
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D7E58
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D7E5C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D7E60
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D7E64
  c->lr=0x800D7E6Cu; f_800D7970(c); // 800D7E68
  goto L_800D7E9C; // 800D7E6C
L_800D7E70:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800D7E70
  c->r[7]=0u+0x803D0000u; // 800D7E74
  c->r[3]=c->r[31]|c->r[31]; // 800D7E78
  c->r[4]=c->r[1]+0x00000008u; // 800D7E7C
  {uint32_t ea=c->r[7]+0x0000235Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800D7E80
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D7E84
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D7E88
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D7E8C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D7E90
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D7E94
  c->lr=0x800D7E9Cu; f_800D7970(c); // 800D7E98
L_800D7E9C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D7E9C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D7EA0
  c->lr=c->r[0]; // 800D7EA4
  c->r[1]=c->r[1]+0x00000030u; // 800D7EA8
  return; // 800D7EAC
}

// fn_800D7EB0
void f_800D7EB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7EB0
  c->r[0]=c->lr; // 800D7EB4
  {uint32_t ea=c->r[2]+0xFFFFA29Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7EB8
  c->r[5]=0u+0x00000000u; // 800D7EBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7EC0
  c->r[0]=c->r[4]|c->r[4]; // 800D7EC4
  {uint32_t ea=c->r[3]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7EC8
  fcmp(c,0,c->f[2],c->f[1]); // 800D7ECC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D7ED0
  if (!crb(c,2)) { goto L_800D7EE0; } // 800D7ED4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 800D7ED8
  goto L_800D7EF0; // 800D7EDC
L_800D7EE0:;
  {uint32_t ea=c->r[2]+0xFFFFA288u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7EE0
  fcmp(c,0,c->f[2],c->f[0]); // 800D7EE4
  if (!crb(c,0)) { goto L_800D7EF0; } // 800D7EE8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 800D7EEC
L_800D7EF0:;
  {uint32_t ea=c->r[2]+0xFFFFA288u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7EF0
  fcmp(c,0,c->f[2],c->f[0]); // 800D7EF4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D7EF8
  if (!crb(c,2)) { goto L_800D7F10; } // 800D7EFC
  {uint32_t ea=c->r[2]+0xFFFFA2A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7F00
  fcmp(c,0,c->f[2],c->f[0]); // 800D7F04
  if (!crb(c,0)) { goto L_800D7F10; } // 800D7F08
  c->r[5]=0u+0x00000000u; // 800D7F0C
L_800D7F10:;
  {uint32_t ea=c->r[2]+0xFFFFA2A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7F10
  fcmp(c,0,c->f[2],c->f[0]); // 800D7F14
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D7F18
  if (!crb(c,2)) { goto L_800D7F30; } // 800D7F1C
  {uint32_t ea=c->r[2]+0xFFFFA2A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7F20
  fcmp(c,0,c->f[2],c->f[0]); // 800D7F24
  if (!crb(c,0)) { goto L_800D7F30; } // 800D7F28
  c->r[5]=0u+0x00000001u; // 800D7F2C
L_800D7F30:;
  {uint32_t ea=c->r[2]+0xFFFFA2A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7F30
  fcmp(c,0,c->f[2],c->f[0]); // 800D7F34
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D7F38
  if (!crb(c,2)) { goto L_800D7F50; } // 800D7F3C
  {uint32_t ea=c->r[2]+0xFFFFA2A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7F40
  fcmp(c,0,c->f[2],c->f[0]); // 800D7F44
  if (!crb(c,0)) { goto L_800D7F50; } // 800D7F48
  c->r[5]=0u+0x00000002u; // 800D7F4C
L_800D7F50:;
  {uint32_t ea=c->r[2]+0xFFFFA2A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7F50
  fcmp(c,0,c->f[2],c->f[0]); // 800D7F54
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D7F58
  if (!crb(c,2)) { goto L_800D7F70; } // 800D7F5C
  {uint32_t ea=c->r[2]+0xFFFFA2ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7F60
  fcmp(c,0,c->f[2],c->f[0]); // 800D7F64
  if (!crb(c,0)) { goto L_800D7F70; } // 800D7F68
  c->r[5]=0u+0x00000003u; // 800D7F6C
L_800D7F70:;
  {uint32_t ea=c->r[2]+0xFFFFA2ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7F70
  fcmp(c,0,c->f[2],c->f[0]); // 800D7F74
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D7F78
  if (!crb(c,2)) { goto L_800D7F94; } // 800D7F7C
  {uint32_t ea=c->r[2]+0xFFFFA29Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7F80
  fcmp(c,0,c->f[2],c->f[0]); // 800D7F84
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D7F88
  if (!crb(c,2)) { goto L_800D7F94; } // 800D7F8C
  c->r[5]=0u+0x00000000u; // 800D7F90
L_800D7F94:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D7F94
  c->r[3]=c->r[0]|c->r[0]; // 800D7F98
  c->lr=0x800D7FA0u; f_80250BF4(c); // 800D7F9C
  c->r[0]=cntlz(c->r[3]); // 800D7FA0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D7FA4
  c->r[3]=0u-c->r[0]; // 800D7FA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7FAC
  c->lr=c->r[0]; // 800D7FB0
  c->r[1]=c->r[1]+0x00000010u; // 800D7FB4
  return; // 800D7FB8
}

// fn_800D7FBC
void f_800D7FBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7FBC
  c->r[0]=c->lr; // 800D7FC0
  c->r[7]=0u+0x803D0000u; // 800D7FC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7FC8
  c->r[4]=c->r[1]+0x00000008u; // 800D7FCC
  {uint32_t ea=c->r[7]+0x00002368u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D7FD0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D7FD4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D7FD8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D7FDC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D7FE0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D7FE4
  c->lr=0x800D7FECu; f_800D7970(c); // 800D7FE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7FEC
  c->lr=c->r[0]; // 800D7FF0
  c->r[1]=c->r[1]+0x00000020u; // 800D7FF4
  return; // 800D7FF8
}

// fn_800D7FFC
void f_800D7FFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7FFC
  c->r[0]=c->lr; // 800D8000
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D8004
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800D8008
  W32(c->r[1]+0x00000088u,c->r[30]); // 800D800C
  c->r[30]=c->r[3]|c->r[3]; // 800D8010
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D8014
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800D8018
  cmps(c,0,(int32_t)c->r[0],0); // 800D801C
  if (!crb(c,2)) { goto L_800D807C; } // 800D8020
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800D8024
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800D8028
  if (crb(c,2)) { goto L_800D807C; } // 800D802C
  {uint32_t ea=c->r[2]+0xFFFFA2B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8030
  c->r[3]=c->r[1]+0x00000008u; // 800D8034
  c->r[4]=c->r[30]+0x0000002Cu; // 800D8038
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800D803C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800D8040
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800D8044
  c->lr=0x800D804Cu; f_800361A0(c); // 800D8048
  c->r[31]=0u+0x80550000u; // 800D804C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8050
  c->r[31]=c->r[31]+0x00003D60u; // 800D8054
  c->r[5]=c->r[30]|c->r[30]; // 800D8058
  c->r[3]=c->r[31]+0x00000010u; // 800D805C
  c->r[6]=c->r[1]+0x00000008u; // 800D8060
  c->r[7]=c->r[1]+0x00000020u; // 800D8064
  c->r[4]=0u+0x000001FFu; // 800D8068
  c->lr=0x800D8070u; f_80226910(c); // 800D806C
  c->r[3]=c->r[31]+0x00000010u; // 800D8070
  c->r[4]=c->r[1]+0x00000020u; // 800D8074
  c->lr=0x800D807Cu; f_80226D68(c); // 800D8078
L_800D807C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D807C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800D8080
  c->r[30]=R32(c->r[1]+0x00000088u); // 800D8084
  c->lr=c->r[0]; // 800D8088
  c->r[1]=c->r[1]+0x00000090u; // 800D808C
  return; // 800D8090
}

// fn_800D8094
void f_800D8094(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8094
  c->r[0]=c->lr; // 800D8098
  cmps(c,0,(int32_t)c->r[3],0); // 800D809C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D80A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D80A4
  c->r[31]=c->r[4]|c->r[4]; // 800D80A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D80AC
  c->r[30]=c->r[3]|c->r[3]; // 800D80B0
  if (crb(c,2)) { goto L_800D80D0; } // 800D80B4
  c->r[4]=0u+0x00000000u; // 800D80B8
  c->lr=0x800D80C0u; f_8026A06C(c); // 800D80BC
  cmps(c,0,(int32_t)c->r[31],0); // 800D80C0
  if (!crb(c,1)) { goto L_800D80D0; } // 800D80C4
  c->r[3]=c->r[30]|c->r[30]; // 800D80C8
  c->lr=0x800D80D0u; f_8026A268(c); // 800D80CC
L_800D80D0:;
  c->r[3]=c->r[30]|c->r[30]; // 800D80D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D80D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D80D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D80DC
  c->lr=c->r[0]; // 800D80E0
  c->r[1]=c->r[1]+0x00000010u; // 800D80E4
  return; // 800D80E8
}

// fn_800D80EC
void f_800D80EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D80EC
  c->r[0]=c->lr; // 800D80F0
  c->r[4]=0u+0x00000000u; // 800D80F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D80F8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D80FC
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D8100
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D8104
  W32(c->r[1]+0x00000020u,c->r[28]); // 800D8108
  c->r[28]=c->r[3]|c->r[3]; // 800D810C
  c->lr=0x800D8114u; f_801F57D0(c); // 800D8110
  c->r[3]=c->r[28]|c->r[28]; // 800D8114
  c->r[4]=0u+0x00000001u; // 800D8118
  c->lr=0x800D8120u; f_801F57D0(c); // 800D811C
  c->r[3]=c->r[28]|c->r[28]; // 800D8120
  c->r[4]=0u+0x00000002u; // 800D8124
  c->lr=0x800D812Cu; f_801F57D0(c); // 800D8128
  c->r[3]=c->r[28]|c->r[28]; // 800D812C
  c->r[4]=0u+0x00000003u; // 800D8130
  c->lr=0x800D8138u; f_801F57D0(c); // 800D8134
  c->r[3]=c->r[28]|c->r[28]; // 800D8138
  c->r[4]=0u+0x00000004u; // 800D813C
  c->lr=0x800D8144u; f_801F57D0(c); // 800D8140
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800D8144
  c->r[3]=c->r[28]|c->r[28]; // 800D8148
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D814C
  c->ctr=c->r[12]; // 800D8150
  if (true) { c->lr=0x800D8158u; dispatch(c,c->ctr); } // 800D8154
  c->r[3]=c->r[28]|c->r[28]; // 800D8158
  c->lr=0x800D8160u; f_801F4B94(c); // 800D815C
  c->r[29]=0u+0x00000000u; // 800D8160
  c->r[3]=0u+0x00000003u; // 800D8164
  c->r[5]=0u+0x0000003Au; // 800D8168
  c->r[0]=0u+0x000000FFu; // 800D816C
  W8(c->r[28]+0x0000006Cu,c->r[3]); // 800D8170
  c->r[3]=c->r[28]|c->r[28]; // 800D8174
  c->r[4]=R32(c->r[28]+0x00000394u); // 800D8178
  W8(c->r[28]+0x0000006Du,c->r[5]); // 800D817C
  W8(c->r[28]+0x00000074u,c->r[0]); // 800D8180
  W16(c->r[28]+0x00000076u,c->r[29]); // 800D8184
  W16(c->r[28]+0x00000078u,c->r[29]); // 800D8188
  W16(c->r[28]+0x0000007Au,c->r[29]); // 800D818C
  W16(c->r[28]+0x0000007Cu,c->r[29]); // 800D8190
  c->lr=0x800D8198u; f_801F58BC(c); // 800D8194
  c->r[3]=R32(c->r[28]+0x00000394u); // 800D8198
  c->r[30]=0u+0x00000001u; // 800D819C
  c->r[31]=0u+0x803A0000u; // 800D81A0
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800D81A4
  c->r[4]=c->r[31]+0xFFFFE1BCu; // 800D81A8
  c->r[3]=R32(c->r[28]+0x00000394u); // 800D81AC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D81B0
  c->lr=0x800D81B8u; f_80256EC4(c); // 800D81B4
  c->r[5]=R32(c->r[28]+0x00000394u); // 800D81B8
  c->r[4]=0u+0x00000002u; // 800D81BC
  {uint32_t ea=c->r[2]+0xFFFFA2C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D81C0
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800D81C4
  c->f[2]=c->f[1]; // 800D81C8
  c->r[5]=R32(c->r[28]+0x00000394u); // 800D81CC
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800D81D0
  c->r[5]=R32(c->r[5]+0x00000034u); // 800D81D4
  c->lr=0x800D81DCu; f_8024FEAC(c); // 800D81D8
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800D81DC
  c->r[3]=c->r[28]|c->r[28]; // 800D81E0
  {uint32_t ea=c->r[2]+0xFFFFA2C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D81E4
  c->r[5]=0u+0x00000002u; // 800D81E8
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D81EC
  c->r[6]=0u+0x00000001u; // 800D81F0
  c->f[2]=c->f[1]; // 800D81F4
  c->r[4]=R32(c->r[28]+0x00000394u); // 800D81F8
  c->ctr=c->r[12]; // 800D81FC
  if (true) { c->lr=0x800D8204u; dispatch(c,c->ctr); } // 800D8200
  c->r[3]=R32(c->r[28]+0x00000394u); // 800D8204
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8208
  c->lr=0x800D8210u; f_802501B0(c); // 800D820C
  c->r[4]=R32(c->r[28]+0x00000394u); // 800D8210
  c->r[3]=c->r[28]|c->r[28]; // 800D8214
  W8(c->r[4]+0x0000001Du,c->r[29]); // 800D8218
  c->r[4]=R32(c->r[28]+0x00000398u); // 800D821C
  c->lr=0x800D8224u; f_801F58BC(c); // 800D8220
  c->r[3]=R32(c->r[28]+0x00000398u); // 800D8224
  c->r[4]=c->r[31]+0xFFFFE1BCu; // 800D8228
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800D822C
  c->r[3]=R32(c->r[28]+0x00000398u); // 800D8230
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8234
  c->lr=0x800D823Cu; f_80256EC4(c); // 800D8238
  c->r[5]=R32(c->r[28]+0x00000398u); // 800D823C
  c->r[4]=0u+0x00000000u; // 800D8240
  {uint32_t ea=c->r[2]+0xFFFFA2C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8244
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800D8248
  c->f[2]=c->f[1]; // 800D824C
  c->r[5]=R32(c->r[28]+0x00000398u); // 800D8250
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800D8254
  c->r[5]=R32(c->r[5]+0x00000034u); // 800D8258
  c->lr=0x800D8260u; f_8024FEAC(c); // 800D825C
  c->r[3]=R32(c->r[28]+0x00000398u); // 800D8260
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8264
  c->lr=0x800D826Cu; f_802501B0(c); // 800D8268
  c->r[4]=R32(c->r[28]+0x00000398u); // 800D826C
  c->r[3]=c->r[28]|c->r[28]; // 800D8270
  W8(c->r[4]+0x0000001Du,c->r[29]); // 800D8274
  c->r[4]=R32(c->r[28]+0x0000039Cu); // 800D8278
  c->lr=0x800D8280u; f_801F58BC(c); // 800D827C
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800D8280
  c->r[4]=c->r[31]+0xFFFFE1BCu; // 800D8284
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800D8288
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800D828C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8290
  c->lr=0x800D8298u; f_80256EC4(c); // 800D8294
  c->r[5]=R32(c->r[28]+0x0000039Cu); // 800D8298
  c->r[4]=0u+0x00000000u; // 800D829C
  {uint32_t ea=c->r[2]+0xFFFFA2C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D82A0
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800D82A4
  c->f[2]=c->f[1]; // 800D82A8
  c->r[5]=R32(c->r[28]+0x0000039Cu); // 800D82AC
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800D82B0
  c->r[5]=R32(c->r[5]+0x00000034u); // 800D82B4
  c->lr=0x800D82BCu; f_8024FEAC(c); // 800D82B8
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800D82BC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D82C0
  c->lr=0x800D82C8u; f_802501B0(c); // 800D82C4
  c->r[4]=R32(c->r[28]+0x0000039Cu); // 800D82C8
  c->r[3]=c->r[28]|c->r[28]; // 800D82CC
  W8(c->r[4]+0x0000001Du,c->r[29]); // 800D82D0
  c->r[4]=R32(c->r[28]+0x000003A0u); // 800D82D4
  c->lr=0x800D82DCu; f_801F58BC(c); // 800D82D8
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800D82DC
  c->r[4]=c->r[31]+0xFFFFE1BCu; // 800D82E0
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800D82E4
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800D82E8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D82EC
  c->lr=0x800D82F4u; f_80256EC4(c); // 800D82F0
  c->r[5]=R32(c->r[28]+0x000003A0u); // 800D82F4
  c->r[4]=0u+0x00000000u; // 800D82F8
  {uint32_t ea=c->r[2]+0xFFFFA2C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D82FC
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800D8300
  c->f[2]=c->f[1]; // 800D8304
  c->r[5]=R32(c->r[28]+0x000003A0u); // 800D8308
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800D830C
  c->r[5]=R32(c->r[5]+0x00000034u); // 800D8310
  c->lr=0x800D8318u; f_8024FEAC(c); // 800D8314
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800D8318
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D831C
  c->lr=0x800D8324u; f_802501B0(c); // 800D8320
  c->r[4]=R32(c->r[28]+0x000003A0u); // 800D8324
  c->r[3]=c->r[28]|c->r[28]; // 800D8328
  W8(c->r[4]+0x0000001Du,c->r[29]); // 800D832C
  c->r[4]=R32(c->r[28]+0x000003A4u); // 800D8330
  c->lr=0x800D8338u; f_801F58BC(c); // 800D8334
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800D8338
  c->r[4]=c->r[31]+0xFFFFE1BCu; // 800D833C
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800D8340
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800D8344
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8348
  c->lr=0x800D8350u; f_80256EC4(c); // 800D834C
  c->r[5]=R32(c->r[28]+0x000003A4u); // 800D8350
  c->r[4]=0u+0x00000000u; // 800D8354
  {uint32_t ea=c->r[2]+0xFFFFA2C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8358
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800D835C
  c->f[2]=c->f[1]; // 800D8360
  c->r[5]=R32(c->r[28]+0x000003A4u); // 800D8364
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800D8368
  c->r[5]=R32(c->r[5]+0x00000034u); // 800D836C
  c->lr=0x800D8374u; f_8024FEAC(c); // 800D8370
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800D8374
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8378
  c->lr=0x800D8380u; f_802501B0(c); // 800D837C
  c->r[4]=R32(c->r[28]+0x000003A4u); // 800D8380
  c->r[3]=c->r[28]|c->r[28]; // 800D8384
  W8(c->r[4]+0x0000001Du,c->r[29]); // 800D8388
  W8(c->r[28]+0x0000006Fu,c->r[30]); // 800D838C
  c->lr=0x800D8394u; f_801F56F4(c); // 800D8390
  c->r[7]=0u+0x803D0000u; // 800D8394
  {uint32_t ea=c->r[7]+0x00002410u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D8398
  c->r[3]=c->r[28]|c->r[28]; // 800D839C
  c->r[4]=c->r[1]+0x00000008u; // 800D83A0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D83A4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D83A8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D83AC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D83B0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D83B4
  c->lr=0x800D83BCu; f_800D83DC(c); // 800D83B8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D83BC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D83C0
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D83C4
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D83C8
  c->r[28]=R32(c->r[1]+0x00000020u); // 800D83CC
  c->lr=c->r[0]; // 800D83D0
  c->r[1]=c->r[1]+0x00000030u; // 800D83D4
  return; // 800D83D8
}

// fn_800D83DC
void f_800D83DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D83DC
  c->r[0]=c->lr; // 800D83E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D83E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D83E8
  c->r[31]=c->r[4]|c->r[4]; // 800D83EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D83F0
  c->r[30]=c->r[3]|c->r[3]; // 800D83F4
  c->r[3]=c->r[31]|c->r[31]; // 800D83F8
  c->lr=0x800D8400u; f_802B9FDC(c); // 800D83FC
  cmps(c,0,(int32_t)c->r[3],0); // 800D8400
  if (crb(c,2)) { goto L_800D8420; } // 800D8404
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D8408
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D840C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D8410
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D8414
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D8418
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D841C
L_800D8420:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8420
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8424
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D8428
  c->lr=c->r[0]; // 800D842C
  c->r[1]=c->r[1]+0x00000010u; // 800D8430
  return; // 800D8434
}

// fn_800D8438
void f_800D8438(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8438
  c->r[0]=c->lr; // 800D843C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D8440
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800D8444
  c->r[31]=c->r[3]|c->r[3]; // 800D8448
  c->r[0]=R8(c->r[3]+0x00000074u); // 800D844C
  cmps(c,0,(int32_t)c->r[0],2); // 800D8450
  if (crb(c,2)) { goto L_800D84EC; } // 800D8454
  if (!crb(c,0)) { goto L_800D846C; } // 800D8458
  cmps(c,0,(int32_t)c->r[0],0); // 800D845C
  if (crb(c,2)) { goto L_800D84A0; } // 800D8460
  if (!crb(c,0)) { goto L_800D847C; } // 800D8464
  goto L_800D85E4; // 800D8468
L_800D846C:;
  cmps(c,0,(int32_t)c->r[0],4); // 800D846C
  if (crb(c,2)) { goto L_800D8594; } // 800D8470
  if (!crb(c,0)) { goto L_800D85E4; } // 800D8474
  goto L_800D8540; // 800D8478
L_800D847C:;
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800D847C
  c->r[5]=0u+0x00000003u; // 800D8480
  {uint32_t ea=c->r[2]+0xFFFFA2C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8484
  c->r[6]=0u+0x00000001u; // 800D8488
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D848C
  c->f[2]=c->f[1]; // 800D8490
  c->r[4]=R32(c->r[3]+0x00000394u); // 800D8494
  c->ctr=c->r[12]; // 800D8498
  if (true) { c->lr=0x800D84A0u; dispatch(c,c->ctr); } // 800D849C
L_800D84A0:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D84A0
  c->r[5]=0u+0x00000001u; // 800D84A4
  c->r[0]=0u+0x00000000u; // 800D84A8
  c->r[4]=c->r[31]+0x0000002Cu; // 800D84AC
  W8(c->r[3]+0x0000001Cu,c->r[5]); // 800D84B0
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D84B4
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800D84B8
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D84BC
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800D84C0
  c->r[3]=R32(c->r[31]+0x000003A0u); // 800D84C4
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800D84C8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D84CC
  c->r[3]=c->r[3]+0x0000005Cu; // 800D84D0
  c->lr=0x800D84D8u; f_800361A0(c); // 800D84D4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D84D8
  c->r[4]=c->r[31]+0x00000060u; // 800D84DC
  c->r[3]=c->r[3]+0x00000068u; // 800D84E0
  c->lr=0x800D84E8u; f_800361A0(c); // 800D84E4
  goto L_800D85E4; // 800D84E8
L_800D84EC:;
  c->r[5]=R32(c->r[3]+0x00000394u); // 800D84EC
  c->r[6]=0u+0x00000000u; // 800D84F0
  c->r[0]=0u+0x00000001u; // 800D84F4
  c->r[4]=c->r[31]+0x0000002Cu; // 800D84F8
  W8(c->r[5]+0x0000001Cu,c->r[6]); // 800D84FC
  c->r[5]=R32(c->r[3]+0x00000398u); // 800D8500
  W8(c->r[5]+0x0000001Cu,c->r[0]); // 800D8504
  c->r[5]=R32(c->r[3]+0x0000039Cu); // 800D8508
  W8(c->r[5]+0x0000001Cu,c->r[6]); // 800D850C
  c->r[5]=R32(c->r[3]+0x000003A0u); // 800D8510
  W8(c->r[5]+0x0000001Cu,c->r[6]); // 800D8514
  c->r[5]=R32(c->r[3]+0x000003A4u); // 800D8518
  W8(c->r[5]+0x0000001Cu,c->r[0]); // 800D851C
  c->r[3]=R32(c->r[3]+0x00000398u); // 800D8520
  c->r[3]=c->r[3]+0x0000005Cu; // 800D8524
  c->lr=0x800D852Cu; f_800361A0(c); // 800D8528
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D852C
  c->r[4]=c->r[31]+0x00000060u; // 800D8530
  c->r[3]=c->r[3]+0x00000068u; // 800D8534
  c->lr=0x800D853Cu; f_800361A0(c); // 800D8538
  goto L_800D85E4; // 800D853C
L_800D8540:;
  c->r[5]=R32(c->r[3]+0x00000394u); // 800D8540
  c->r[6]=0u+0x00000000u; // 800D8544
  c->r[0]=0u+0x00000001u; // 800D8548
  c->r[4]=c->r[31]+0x0000002Cu; // 800D854C
  W8(c->r[5]+0x0000001Cu,c->r[6]); // 800D8550
  c->r[5]=R32(c->r[3]+0x00000398u); // 800D8554
  W8(c->r[5]+0x0000001Cu,c->r[6]); // 800D8558
  c->r[5]=R32(c->r[3]+0x0000039Cu); // 800D855C
  W8(c->r[5]+0x0000001Cu,c->r[0]); // 800D8560
  c->r[5]=R32(c->r[3]+0x000003A0u); // 800D8564
  W8(c->r[5]+0x0000001Cu,c->r[6]); // 800D8568
  c->r[5]=R32(c->r[3]+0x000003A4u); // 800D856C
  W8(c->r[5]+0x0000001Cu,c->r[0]); // 800D8570
  c->r[3]=R32(c->r[3]+0x0000039Cu); // 800D8574
  c->r[3]=c->r[3]+0x0000005Cu; // 800D8578
  c->lr=0x800D8580u; f_800361A0(c); // 800D857C
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8580
  c->r[4]=c->r[31]+0x00000060u; // 800D8584
  c->r[3]=c->r[3]+0x00000068u; // 800D8588
  c->lr=0x800D8590u; f_800361A0(c); // 800D858C
  goto L_800D85E4; // 800D8590
L_800D8594:;
  c->r[5]=R32(c->r[3]+0x00000394u); // 800D8594
  c->r[6]=0u+0x00000000u; // 800D8598
  c->r[0]=0u+0x00000001u; // 800D859C
  c->r[4]=c->r[31]+0x0000002Cu; // 800D85A0
  W8(c->r[5]+0x0000001Cu,c->r[6]); // 800D85A4
  c->r[5]=R32(c->r[3]+0x00000398u); // 800D85A8
  W8(c->r[5]+0x0000001Cu,c->r[6]); // 800D85AC
  c->r[5]=R32(c->r[3]+0x0000039Cu); // 800D85B0
  W8(c->r[5]+0x0000001Cu,c->r[6]); // 800D85B4
  c->r[5]=R32(c->r[3]+0x000003A0u); // 800D85B8
  W8(c->r[5]+0x0000001Cu,c->r[0]); // 800D85BC
  c->r[5]=R32(c->r[3]+0x000003A4u); // 800D85C0
  W8(c->r[5]+0x0000001Cu,c->r[6]); // 800D85C4
  c->r[3]=R32(c->r[3]+0x000003A0u); // 800D85C8
  c->r[3]=c->r[3]+0x0000005Cu; // 800D85CC
  c->lr=0x800D85D4u; f_800361A0(c); // 800D85D0
  c->r[3]=R32(c->r[31]+0x000003A0u); // 800D85D4
  c->r[4]=c->r[31]+0x00000060u; // 800D85D8
  c->r[3]=c->r[3]+0x00000068u; // 800D85DC
  c->lr=0x800D85E4u; f_800361A0(c); // 800D85E0
L_800D85E4:;
  c->r[0]=R8(c->r[31]+0x00000074u); // 800D85E4
  cmpu(c,0,c->r[0],0x000000FFu); // 800D85E8
  if (crb(c,2)) { goto L_800D860C; } // 800D85EC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D85F0
  c->r[3]=c->r[31]|c->r[31]; // 800D85F4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D85F8
  c->ctr=c->r[12]; // 800D85FC
  if (true) { c->lr=0x800D8604u; dispatch(c,c->ctr); } // 800D8600
  c->r[0]=0u+0x000000FFu; // 800D8604
  W8(c->r[31]+0x00000074u,c->r[0]); // 800D8608
L_800D860C:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D860C
  c->r[3]=c->r[31]|c->r[31]; // 800D8610
  c->r[12]=R32(c->r[12]+0x00000068u); // 800D8614
  c->ctr=c->r[12]; // 800D8618
  if (true) { c->lr=0x800D8620u; dispatch(c,c->ctr); } // 800D861C
  c->r[3]=c->r[31]|c->r[31]; // 800D8620
  c->lr=0x800D8628u; f_801F4C0C(c); // 800D8624
  c->r[3]=c->r[31]+0x00000210u; // 800D8628
  c->lr=0x800D8630u; f_80221698(c); // 800D862C
  c->r[3]=c->r[31]|c->r[31]; // 800D8630
  c->lr=0x800D8638u; f_800D8A6C(c); // 800D8634
  c->r[3]=c->r[31]|c->r[31]; // 800D8638
  c->lr=0x800D8640u; f_801F56F4(c); // 800D863C
  c->r[3]=R32(c->r[31]+0x000003A0u); // 800D8640
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800D8644
  cmps(c,0,(int32_t)c->r[0],0); // 800D8648
  if (crb(c,2)) { goto L_800D86A0; } // 800D864C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8650
  c->lr=0x800D8658u; f_802501B0(c); // 800D8654
  c->r[3]=c->r[31]|c->r[31]; // 800D8658
  c->r[4]=0u+0x00000003u; // 800D865C
  c->lr=0x800D8664u; f_801F5244(c); // 800D8660
  c->r[3]=R32(c->r[31]+0x000003A0u); // 800D8664
  c->r[4]=c->r[31]+0x0000002Cu; // 800D8668
  c->r[3]=c->r[3]+0x0000005Cu; // 800D866C
  c->lr=0x800D8674u; f_800361A0(c); // 800D8670
  c->r[3]=R32(c->r[31]+0x000003A0u); // 800D8674
  c->r[4]=c->r[31]+0x00000060u; // 800D8678
  c->r[3]=c->r[3]+0x00000068u; // 800D867C
  c->lr=0x800D8684u; f_800361A0(c); // 800D8680
  c->r[4]=R32(c->r[31]+0x000003A0u); // 800D8684
  c->r[3]=c->r[31]|c->r[31]; // 800D8688
  c->lr=0x800D8690u; f_801F58FC(c); // 800D868C
  c->r[3]=R32(c->r[31]+0x000003A0u); // 800D8690
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8694
  c->lr=0x800D869Cu; f_8025037C(c); // 800D8698
  goto L_800D8844; // 800D869C
L_800D86A0:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D86A0
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800D86A4
  cmps(c,0,(int32_t)c->r[0],0); // 800D86A8
  if (crb(c,2)) { goto L_800D8700; } // 800D86AC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D86B0
  c->lr=0x800D86B8u; f_802501B0(c); // 800D86B4
  c->r[3]=c->r[31]|c->r[31]; // 800D86B8
  c->r[4]=0u+0x00000001u; // 800D86BC
  c->lr=0x800D86C4u; f_801F5244(c); // 800D86C0
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D86C4
  c->r[4]=c->r[31]+0x0000002Cu; // 800D86C8
  c->r[3]=c->r[3]+0x0000005Cu; // 800D86CC
  c->lr=0x800D86D4u; f_800361A0(c); // 800D86D0
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D86D4
  c->r[4]=c->r[31]+0x00000060u; // 800D86D8
  c->r[3]=c->r[3]+0x00000068u; // 800D86DC
  c->lr=0x800D86E4u; f_800361A0(c); // 800D86E0
  c->r[4]=R32(c->r[31]+0x00000398u); // 800D86E4
  c->r[3]=c->r[31]|c->r[31]; // 800D86E8
  c->lr=0x800D86F0u; f_801F58FC(c); // 800D86EC
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D86F0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D86F4
  c->lr=0x800D86FCu; f_8025037C(c); // 800D86F8
  goto L_800D8844; // 800D86FC
L_800D8700:;
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8700
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800D8704
  cmps(c,0,(int32_t)c->r[0],0); // 800D8708
  if (crb(c,2)) { goto L_800D8844; } // 800D870C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8710
  c->lr=0x800D8718u; f_802501B0(c); // 800D8714
  c->r[3]=c->r[31]|c->r[31]; // 800D8718
  c->r[4]=0u+0x00000002u; // 800D871C
  c->lr=0x800D8724u; f_801F5244(c); // 800D8720
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8724
  c->r[4]=c->r[31]+0x0000002Cu; // 800D8728
  c->r[3]=c->r[3]+0x0000005Cu; // 800D872C
  c->lr=0x800D8734u; f_800361A0(c); // 800D8730
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8734
  c->r[4]=c->r[31]+0x00000060u; // 800D8738
  c->r[3]=c->r[3]+0x00000068u; // 800D873C
  c->lr=0x800D8744u; f_800361A0(c); // 800D8740
  c->r[0]=R16(c->r[31]+0x00000078u); // 800D8744
  cmps(c,0,(int32_t)c->r[0],0); // 800D8748
  if (!crb(c,2)) { goto L_800D8760; } // 800D874C
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800D8750
  c->r[3]=c->r[31]|c->r[31]; // 800D8754
  c->lr=0x800D875Cu; f_801F58FC(c); // 800D8758
  goto L_800D8838; // 800D875C
L_800D8760:;
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8760
  c->r[4]=c->r[31]+0x0000002Cu; // 800D8764
  c->r[3]=c->r[3]+0x0000005Cu; // 800D8768
  c->lr=0x800D8770u; f_800361A0(c); // 800D876C
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8770
  c->r[4]=c->r[31]+0x00000060u; // 800D8774
  c->r[3]=c->r[3]+0x00000068u; // 800D8778
  c->lr=0x800D8780u; f_800361A0(c); // 800D877C
  c->r[3]=R16(c->r[31]+0x0000007Au); // 800D8780
  c->r[3]=c->r[3]+0x0000003Cu; // 800D8784
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800D8788
  W16(c->r[31]+0x0000007Au,c->r[3]); // 800D878C
  cmpu(c,0,c->r[0],0x00000168u); // 800D8790
  if (crb(c,0)) { goto L_800D87A0; } // 800D8794
  c->r[0]=0u+0x00000000u; // 800D8798
  W16(c->r[31]+0x0000007Au,c->r[0]); // 800D879C
L_800D87A0:;
  c->r[6]=0u+0x803A0000u; // 800D87A0
  {uint32_t ea=c->r[6]+0xFFFFE1B0u; c->r[5]=R32(ea); c->r[6]=ea;} // 800D87A4
  c->r[3]=0u+0x00000000u; // 800D87A8
  c->r[4]=R32(c->r[6]+0x00000004u); // 800D87AC
  c->r[0]=R32(c->r[6]+0x00000008u); // 800D87B0
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D87B4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D87B8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D87BC
  c->lr=0x800D87C4u; f_80262C68(c); // 800D87C0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D87C4
  c->r[3]=c->r[1]+0x00000018u; // 800D87C8
  {uint32_t ea=c->r[2]+0xFFFFA2C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D87CC
  c->r[4]=0u+0x00000059u; // 800D87D0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800D87D4
  c->lr=0x800D87DCu; f_80295FBC(c); // 800D87D8
  c->r[3]=R16(c->r[31]+0x0000007Au); // 800D87DC
  c->r[0]=0u+0x43300000u; // 800D87E0
  W32(c->r[1]+0x00000048u,c->r[0]); // 800D87E4
  {uint32_t ea=c->r[2]+0xFFFFA2D8u; c->f[1]=RF64(ea);} // 800D87E8
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800D87EC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800D87F0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800D87F4
  c->lr=0x800D87FCu; f_80036010(c); // 800D87F8
  {uint32_t ea=c->r[2]+0xFFFFA2C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D87FC
  c->r[4]=c->r[1]+0x00000008u; // 800D8800
  {uint32_t ea=c->r[2]+0xFFFFA2C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8804
  c->r[5]=c->r[4]|c->r[4]; // 800D8808
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800D880C
  c->r[3]=c->r[1]+0x00000018u; // 800D8810
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D8814
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800D8818
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800D881C
  c->lr=0x800D8824u; f_80296750(c); // 800D8820
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8824
  c->r[4]=c->r[1]+0x00000008u; // 800D8828
  c->r[3]=c->r[3]+0x0000005Cu; // 800D882C
  c->r[5]=c->r[3]|c->r[3]; // 800D8830
  c->lr=0x800D8838u; f_80296A4C(c); // 800D8834
L_800D8838:;
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8838
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D883C
  c->lr=0x800D8844u; f_8025037C(c); // 800D8840
L_800D8844:;
  c->r[3]=R32(c->r[31]+0x000003A4u); // 800D8844
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800D8848
  cmps(c,0,(int32_t)c->r[0],0); // 800D884C
  if (crb(c,2)) { goto L_800D88F4; } // 800D8850
  c->r[3]=c->r[3]+0x0000005Cu; // 800D8854
  c->r[4]=c->r[31]+0x0000002Cu; // 800D8858
  c->lr=0x800D8860u; f_800361A0(c); // 800D885C
  c->r[3]=R32(c->r[31]+0x000003A4u); // 800D8860
  c->r[4]=c->r[31]+0x00000060u; // 800D8864
  c->r[3]=c->r[3]+0x00000068u; // 800D8868
  c->lr=0x800D8870u; f_800361A0(c); // 800D886C
  c->r[0]=R16(c->r[31]+0x00000078u); // 800D8870
  cmps(c,0,(int32_t)c->r[0],0); // 800D8874
  if (!crb(c,2)) { goto L_800D888C; } // 800D8878
  c->r[4]=R32(c->r[31]+0x000003A4u); // 800D887C
  c->r[3]=c->r[31]|c->r[31]; // 800D8880
  c->lr=0x800D8888u; f_801F58FC(c); // 800D8884
  goto L_800D88B0; // 800D8888
L_800D888C:;
  c->r[3]=R32(c->r[31]+0x000003A4u); // 800D888C
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800D8890
  c->r[3]=c->r[3]+0x0000005Cu; // 800D8894
  c->r[4]=c->r[4]+0x0000005Cu; // 800D8898
  c->lr=0x800D88A0u; f_800361A0(c); // 800D889C
  c->r[3]=R32(c->r[31]+0x000003A4u); // 800D88A0
  c->r[4]=c->r[31]+0x00000060u; // 800D88A4
  c->r[3]=c->r[3]+0x00000068u; // 800D88A8
  c->lr=0x800D88B0u; f_800361A0(c); // 800D88AC
L_800D88B0:;
  c->r[3]=R16(c->r[31]+0x0000007Cu); // 800D88B0
  c->r[0]=0u+0x43300000u; // 800D88B4
  W32(c->r[1]+0x00000048u,c->r[0]); // 800D88B8
  {uint32_t ea=c->r[2]+0xFFFFA2D8u; c->f[3]=RF64(ea);} // 800D88BC
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800D88C0
  c->r[4]=R32(c->r[31]+0x000003A4u); // 800D88C4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=RF64(ea);} // 800D88C8
  {uint32_t ea=c->r[2]+0xFFFFA2CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D88CC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800D88D0
  {uint32_t ea=c->r[2]+0xFFFFA2D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D88D4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800D88D8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800D88DC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800D88E0
  c->lr=0x800D88E8u; f_802519A8(c); // 800D88E4
  c->r[3]=R32(c->r[31]+0x000003A4u); // 800D88E8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D88EC
  c->lr=0x800D88F4u; f_8025037C(c); // 800D88F0
L_800D88F4:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D88F4
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800D88F8
  c->lr=c->r[0]; // 800D88FC
  c->r[1]=c->r[1]+0x00000060u; // 800D8900
  return; // 800D8904
}

// fn_800D8908
void f_800D8908(Ctx* __restrict c) {
  f_801F50B4(c); return; // 800D8908
}

// fn_800D890C
void f_800D890C(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800D890C
}

// fn_800D8910
void f_800D8910(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800D8910
}

// fn_800D8914
void f_800D8914(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8914
  c->r[0]=c->lr; // 800D8918
  c->r[5]=0u+0x00000000u; // 800D891C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8920
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8924
  c->r[31]=c->r[3]|c->r[3]; // 800D8928
  c->r[3]=0u+0x00000284u; // 800D892C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D8930
  c->r[4]=c->r[4]+0x0000010Cu; // 800D8934
  c->lr=0x800D893Cu; f_8024EE50(c); // 800D8938
  cmps(c,0,(int32_t)c->r[3],0); // 800D893C
  if (crb(c,2)) { goto L_800D894C; } // 800D8940
  c->r[3]=0u+0x00000000u; // 800D8944
  goto L_800D89D4; // 800D8948
L_800D894C:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800D894C
  c->r[3]=0u+0x00000285u; // 800D8950
  c->r[5]=0u+0x00000000u; // 800D8954
  c->r[4]=c->r[4]+0x0000010Cu; // 800D8958
  c->lr=0x800D8960u; f_8024EE50(c); // 800D895C
  cmps(c,0,(int32_t)c->r[3],0); // 800D8960
  if (crb(c,2)) { goto L_800D8970; } // 800D8964
  c->r[3]=0u+0x00000000u; // 800D8968
  goto L_800D89D4; // 800D896C
L_800D8970:;
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800D8970
  c->r[3]=0u+0x00000286u; // 800D8974
  c->r[5]=0u+0x00000000u; // 800D8978
  c->r[4]=c->r[4]+0x0000010Cu; // 800D897C
  c->lr=0x800D8984u; f_8024EE50(c); // 800D8980
  cmps(c,0,(int32_t)c->r[3],0); // 800D8984
  if (crb(c,2)) { goto L_800D8994; } // 800D8988
  c->r[3]=0u+0x00000000u; // 800D898C
  goto L_800D89D4; // 800D8990
L_800D8994:;
  c->r[4]=R32(c->r[31]+0x000003A0u); // 800D8994
  c->r[3]=0u+0x00000287u; // 800D8998
  c->r[5]=0u+0x00000000u; // 800D899C
  c->r[4]=c->r[4]+0x0000010Cu; // 800D89A0
  c->lr=0x800D89A8u; f_8024EE50(c); // 800D89A4
  cmps(c,0,(int32_t)c->r[3],0); // 800D89A8
  if (crb(c,2)) { goto L_800D89B8; } // 800D89AC
  c->r[3]=0u+0x00000000u; // 800D89B0
  goto L_800D89D4; // 800D89B4
L_800D89B8:;
  c->r[4]=R32(c->r[31]+0x000003A4u); // 800D89B8
  c->r[3]=0u+0x00000522u; // 800D89BC
  c->r[5]=0u+0x00000000u; // 800D89C0
  c->r[4]=c->r[4]+0x0000010Cu; // 800D89C4
  c->lr=0x800D89CCu; f_8024EE50(c); // 800D89C8
  c->r[0]=cntlz(c->r[3]); // 800D89CC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D89D0
L_800D89D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D89D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D89D8
  c->lr=c->r[0]; // 800D89DC
  c->r[1]=c->r[1]+0x00000010u; // 800D89E0
  return; // 800D89E4
}

// fn_800D89E8
void f_800D89E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D89E8
  c->r[0]=c->lr; // 800D89EC
  c->r[7]=0u+0x803D0000u; // 800D89F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D89F4
  c->r[4]=c->r[1]+0x00000008u; // 800D89F8
  {uint32_t ea=c->r[7]+0x0000241Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800D89FC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D8A00
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D8A04
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D8A08
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D8A0C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D8A10
  c->lr=0x800D8A18u; f_800D83DC(c); // 800D8A14
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D8A18
  c->lr=c->r[0]; // 800D8A1C
  c->r[1]=c->r[1]+0x00000020u; // 800D8A20
  return; // 800D8A24
}

// fn_800D8A28
void f_800D8A28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8A28
  c->r[0]=c->lr; // 800D8A2C
  {uint32_t ea=c->r[2]+0xFFFFA2D8u; c->f[1]=RF64(ea);} // 800D8A30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8A34
  c->r[0]=0u+0x43300000u; // 800D8A38
  c->r[4]=R16(c->r[3]+0x00000076u); // 800D8A3C
  c->r[3]=R32(c->r[3]+0x00000394u); // 800D8A40
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D8A44
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8A48
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D8A4C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800D8A50
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800D8A54
  c->lr=0x800D8A5Cu; f_802519A8(c); // 800D8A58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8A5C
  c->lr=c->r[0]; // 800D8A60
  c->r[1]=c->r[1]+0x00000010u; // 800D8A64
  return; // 800D8A68
}

// fn_800D8A6C
void f_800D8A6C(Ctx* __restrict c) {
  return; // 800D8A6C
}

// fn_800D8A70
void f_800D8A70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8A70
  c->r[0]=c->lr; // 800D8A74
  cmps(c,0,(int32_t)c->r[3],0); // 800D8A78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8A7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8A80
  c->r[31]=c->r[4]|c->r[4]; // 800D8A84
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D8A88
  c->r[30]=c->r[3]|c->r[3]; // 800D8A8C
  if (crb(c,2)) { goto L_800D8AAC; } // 800D8A90
  c->r[4]=0u+0x00000000u; // 800D8A94
  c->lr=0x800D8A9Cu; f_8026A06C(c); // 800D8A98
  cmps(c,0,(int32_t)c->r[31],0); // 800D8A9C
  if (!crb(c,1)) { goto L_800D8AAC; } // 800D8AA0
  c->r[3]=c->r[30]|c->r[30]; // 800D8AA4
  c->lr=0x800D8AACu; f_8026A268(c); // 800D8AA8
L_800D8AAC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D8AAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8AB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D8AB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8AB8
  c->lr=c->r[0]; // 800D8ABC
  c->r[1]=c->r[1]+0x00000010u; // 800D8AC0
  return; // 800D8AC4
}

// fn_800D8AC8
void f_800D8AC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8AC8
  c->r[0]=c->lr; // 800D8ACC
  c->r[4]=0u+0x00000000u; // 800D8AD0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D8AD4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D8AD8
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D8ADC
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D8AE0
  c->r[29]=c->r[3]|c->r[3]; // 800D8AE4
  W32(c->r[1]+0x00000020u,c->r[28]); // 800D8AE8
  c->lr=0x800D8AF0u; f_801F57D0(c); // 800D8AEC
  c->r[3]=c->r[29]|c->r[29]; // 800D8AF0
  c->r[4]=0u+0x00000001u; // 800D8AF4
  c->lr=0x800D8AFCu; f_801F57D0(c); // 800D8AF8
  c->r[3]=c->r[29]|c->r[29]; // 800D8AFC
  c->r[4]=0u+0x00000002u; // 800D8B00
  c->lr=0x800D8B08u; f_801F57D0(c); // 800D8B04
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800D8B08
  c->r[3]=c->r[29]|c->r[29]; // 800D8B0C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D8B10
  c->ctr=c->r[12]; // 800D8B14
  if (true) { c->lr=0x800D8B1Cu; dispatch(c,c->ctr); } // 800D8B18
  c->r[3]=c->r[29]|c->r[29]; // 800D8B1C
  c->lr=0x800D8B24u; f_801F4B94(c); // 800D8B20
  c->r[30]=0u+0x00000000u; // 800D8B24
  c->r[3]=0u+0x00000003u; // 800D8B28
  c->r[5]=0u+0x0000003Bu; // 800D8B2C
  c->r[0]=0u+0x000000FFu; // 800D8B30
  W8(c->r[29]+0x0000006Cu,c->r[3]); // 800D8B34
  c->r[3]=c->r[29]|c->r[29]; // 800D8B38
  c->r[4]=R32(c->r[29]+0x00000394u); // 800D8B3C
  W8(c->r[29]+0x0000006Du,c->r[5]); // 800D8B40
  W8(c->r[29]+0x00000074u,c->r[0]); // 800D8B44
  W16(c->r[29]+0x00000078u,c->r[30]); // 800D8B48
  W16(c->r[29]+0x0000007Au,c->r[30]); // 800D8B4C
  c->lr=0x800D8B54u; f_801F58BC(c); // 800D8B50
  c->r[3]=R32(c->r[29]+0x00000394u); // 800D8B54
  c->r[31]=0u+0x00000001u; // 800D8B58
  c->r[28]=0u+0x803A0000u; // 800D8B5C
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800D8B60
  c->r[4]=c->r[28]+0xFFFFE1D4u; // 800D8B64
  c->r[3]=R32(c->r[29]+0x00000394u); // 800D8B68
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8B6C
  c->lr=0x800D8B74u; f_80256EC4(c); // 800D8B70
  c->r[5]=R32(c->r[29]+0x00000394u); // 800D8B74
  c->r[4]=0u+0x00000000u; // 800D8B78
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8B7C
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800D8B80
  c->f[2]=c->f[1]; // 800D8B84
  c->r[5]=R32(c->r[29]+0x00000394u); // 800D8B88
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800D8B8C
  c->r[5]=R32(c->r[5]+0x00000034u); // 800D8B90
  c->lr=0x800D8B98u; f_8024FEAC(c); // 800D8B94
  c->r[3]=R32(c->r[29]+0x00000394u); // 800D8B98
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8B9C
  c->lr=0x800D8BA4u; f_802501B0(c); // 800D8BA0
  c->r[4]=R32(c->r[29]+0x00000394u); // 800D8BA4
  c->r[3]=c->r[29]|c->r[29]; // 800D8BA8
  W8(c->r[4]+0x0000001Du,c->r[30]); // 800D8BAC
  c->r[4]=R32(c->r[29]+0x00000398u); // 800D8BB0
  c->lr=0x800D8BB8u; f_801F58BC(c); // 800D8BB4
  c->r[3]=R32(c->r[29]+0x00000398u); // 800D8BB8
  c->r[4]=c->r[28]+0xFFFFE1D4u; // 800D8BBC
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800D8BC0
  c->r[3]=R32(c->r[29]+0x00000398u); // 800D8BC4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8BC8
  c->lr=0x800D8BD0u; f_80256EC4(c); // 800D8BCC
  c->r[5]=R32(c->r[29]+0x00000398u); // 800D8BD0
  c->r[4]=0u+0x00000000u; // 800D8BD4
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8BD8
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800D8BDC
  c->f[2]=c->f[1]; // 800D8BE0
  c->r[5]=R32(c->r[29]+0x00000398u); // 800D8BE4
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800D8BE8
  c->r[5]=R32(c->r[5]+0x00000034u); // 800D8BEC
  c->lr=0x800D8BF4u; f_8024FEAC(c); // 800D8BF0
  c->r[3]=R32(c->r[29]+0x00000398u); // 800D8BF4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8BF8
  c->lr=0x800D8C00u; f_802501B0(c); // 800D8BFC
  c->r[4]=R32(c->r[29]+0x00000398u); // 800D8C00
  c->r[3]=c->r[29]|c->r[29]; // 800D8C04
  W8(c->r[4]+0x0000001Du,c->r[30]); // 800D8C08
  c->r[4]=R32(c->r[29]+0x0000039Cu); // 800D8C0C
  c->lr=0x800D8C14u; f_801F58BC(c); // 800D8C10
  c->r[3]=R32(c->r[29]+0x0000039Cu); // 800D8C14
  c->r[4]=c->r[28]+0xFFFFE1D4u; // 800D8C18
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800D8C1C
  c->r[3]=R32(c->r[29]+0x0000039Cu); // 800D8C20
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8C24
  c->lr=0x800D8C2Cu; f_80256EC4(c); // 800D8C28
  c->r[5]=R32(c->r[29]+0x0000039Cu); // 800D8C2C
  c->r[4]=0u+0x00000000u; // 800D8C30
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8C34
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800D8C38
  c->f[2]=c->f[1]; // 800D8C3C
  c->r[5]=R32(c->r[29]+0x0000039Cu); // 800D8C40
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800D8C44
  c->r[5]=R32(c->r[5]+0x00000034u); // 800D8C48
  c->lr=0x800D8C50u; f_8024FEAC(c); // 800D8C4C
  c->r[3]=R32(c->r[29]+0x0000039Cu); // 800D8C50
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8C54
  c->lr=0x800D8C5Cu; f_802501B0(c); // 800D8C58
  c->r[5]=R32(c->r[29]+0x0000039Cu); // 800D8C5C
  c->r[4]=c->r[28]+0xFFFFE1D4u; // 800D8C60
  c->r[3]=0u+0x80550000u; // 800D8C64
  c->r[6]=0u+0x00000000u; // 800D8C68
  W8(c->r[5]+0x0000001Du,c->r[30]); // 800D8C6C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800D8C70
  c->r[4]=c->r[4]+0x00000009u; // 800D8C74
  c->r[5]=0u+0x00000000u; // 800D8C78
  c->lr=0x800D8C80u; f_8018D3E4(c); // 800D8C7C
  W16(c->r[29]+0x00000076u,c->r[3]); // 800D8C80
  c->r[3]=c->r[29]|c->r[29]; // 800D8C84
  W8(c->r[29]+0x0000006Fu,c->r[31]); // 800D8C88
  c->lr=0x800D8C90u; f_801F56F4(c); // 800D8C8C
  c->r[7]=0u+0x803D0000u; // 800D8C90
  {uint32_t ea=c->r[7]+0x000024C0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D8C94
  c->r[3]=c->r[29]|c->r[29]; // 800D8C98
  c->r[4]=c->r[1]+0x00000008u; // 800D8C9C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D8CA0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D8CA4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D8CA8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D8CAC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D8CB0
  c->lr=0x800D8CB8u; f_800D8CD8(c); // 800D8CB4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D8CB8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D8CBC
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D8CC0
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D8CC4
  c->r[28]=R32(c->r[1]+0x00000020u); // 800D8CC8
  c->lr=c->r[0]; // 800D8CCC
  c->r[1]=c->r[1]+0x00000030u; // 800D8CD0
  return; // 800D8CD4
}

// fn_800D8CD8
void f_800D8CD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8CD8
  c->r[0]=c->lr; // 800D8CDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8CE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8CE4
  c->r[31]=c->r[4]|c->r[4]; // 800D8CE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D8CEC
  c->r[30]=c->r[3]|c->r[3]; // 800D8CF0
  c->r[3]=c->r[31]|c->r[31]; // 800D8CF4
  c->lr=0x800D8CFCu; f_802B9FDC(c); // 800D8CF8
  cmps(c,0,(int32_t)c->r[3],0); // 800D8CFC
  if (crb(c,2)) { goto L_800D8D1C; } // 800D8D00
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D8D04
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D8D08
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D8D0C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D8D10
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D8D14
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D8D18
L_800D8D1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8D1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8D20
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D8D24
  c->lr=c->r[0]; // 800D8D28
  c->r[1]=c->r[1]+0x00000010u; // 800D8D2C
  return; // 800D8D30
}

// fn_800D8D34
void f_800D8D34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8D34
  c->r[0]=c->lr; // 800D8D38
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800D8D3C
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800D8D40
  c->r[31]=c->r[3]|c->r[3]; // 800D8D44
  W32(c->r[1]+0x000000A8u,c->r[30]); // 800D8D48
  c->r[0]=R8(c->r[3]+0x00000074u); // 800D8D4C
  cmps(c,0,(int32_t)c->r[0],3); // 800D8D50
  if (crb(c,2)) { goto L_800D8E60; } // 800D8D54
  if (!crb(c,0)) { goto L_800D8D70; } // 800D8D58
  cmps(c,0,(int32_t)c->r[0],2); // 800D8D5C
  if (!crb(c,0)) { goto L_800D8DE8; } // 800D8D60
  cmps(c,0,(int32_t)c->r[0],0); // 800D8D64
  if (!crb(c,0)) { goto L_800D8D7C; } // 800D8D68
  goto L_800D8F4C; // 800D8D6C
L_800D8D70:;
  cmps(c,0,(int32_t)c->r[0],5); // 800D8D70
  if (!crb(c,0)) { goto L_800D8F4C; } // 800D8D74
  goto L_800D8ED8; // 800D8D78
L_800D8D7C:;
  c->r[5]=R32(c->r[3]+0x00000394u); // 800D8D7C
  c->r[6]=0u+0x00000001u; // 800D8D80
  c->r[0]=0u+0x00000000u; // 800D8D84
  c->r[4]=c->r[31]+0x0000002Cu; // 800D8D88
  W8(c->r[5]+0x0000001Cu,c->r[6]); // 800D8D8C
  c->r[5]=R32(c->r[3]+0x00000398u); // 800D8D90
  W8(c->r[5]+0x0000001Cu,c->r[0]); // 800D8D94
  c->r[5]=R32(c->r[3]+0x0000039Cu); // 800D8D98
  W8(c->r[5]+0x0000001Cu,c->r[0]); // 800D8D9C
  c->r[3]=R32(c->r[3]+0x00000394u); // 800D8DA0
  c->r[3]=c->r[3]+0x0000005Cu; // 800D8DA4
  c->lr=0x800D8DACu; f_800361A0(c); // 800D8DA8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D8DAC
  c->r[4]=c->r[31]+0x00000060u; // 800D8DB0
  c->r[3]=c->r[3]+0x00000068u; // 800D8DB4
  c->lr=0x800D8DBCu; f_800361A0(c); // 800D8DB8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D8DBC
  c->r[3]=c->r[31]|c->r[31]; // 800D8DC0
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8DC4
  c->r[5]=0u+0x00000000u; // 800D8DC8
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D8DCC
  c->r[6]=0u+0x00000001u; // 800D8DD0
  c->f[2]=c->f[1]; // 800D8DD4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D8DD8
  c->ctr=c->r[12]; // 800D8DDC
  if (true) { c->lr=0x800D8DE4u; dispatch(c,c->ctr); } // 800D8DE0
  goto L_800D8F4C; // 800D8DE4
L_800D8DE8:;
  c->r[4]=0u+0x00000014u; // 800D8DE8
  c->r[3]=c->r[3]+0x0000000Cu; // 800D8DEC
  c->lr=0x800D8DF4u; f_80036430(c); // 800D8DF0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D8DF4
  c->r[5]=0u+0x00000000u; // 800D8DF8
  c->r[0]=0u+0x00000001u; // 800D8DFC
  c->r[4]=c->r[31]+0x0000002Cu; // 800D8E00
  W8(c->r[3]+0x0000001Cu,c->r[5]); // 800D8E04
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D8E08
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800D8E0C
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8E10
  W8(c->r[3]+0x0000001Cu,c->r[5]); // 800D8E14
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D8E18
  c->r[3]=c->r[3]+0x0000005Cu; // 800D8E1C
  c->lr=0x800D8E24u; f_800361A0(c); // 800D8E20
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D8E24
  c->r[4]=c->r[31]+0x00000060u; // 800D8E28
  c->r[3]=c->r[3]+0x00000068u; // 800D8E2C
  c->lr=0x800D8E34u; f_800361A0(c); // 800D8E30
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D8E34
  c->r[3]=c->r[31]|c->r[31]; // 800D8E38
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8E3C
  c->r[5]=0u+0x00000000u; // 800D8E40
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D8E44
  c->r[6]=0u+0x00000001u; // 800D8E48
  c->f[2]=c->f[1]; // 800D8E4C
  c->r[4]=R32(c->r[31]+0x00000398u); // 800D8E50
  c->ctr=c->r[12]; // 800D8E54
  if (true) { c->lr=0x800D8E5Cu; dispatch(c,c->ctr); } // 800D8E58
  goto L_800D8F4C; // 800D8E5C
L_800D8E60:;
  c->r[4]=0u+0x00000014u; // 800D8E60
  c->r[3]=c->r[3]+0x0000000Cu; // 800D8E64
  c->lr=0x800D8E6Cu; f_80036430(c); // 800D8E68
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D8E6C
  c->r[5]=0u+0x00000000u; // 800D8E70
  c->r[0]=0u+0x00000001u; // 800D8E74
  c->r[4]=c->r[31]+0x0000002Cu; // 800D8E78
  W8(c->r[3]+0x0000001Cu,c->r[5]); // 800D8E7C
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D8E80
  W8(c->r[3]+0x0000001Cu,c->r[5]); // 800D8E84
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8E88
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800D8E8C
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8E90
  c->r[3]=c->r[3]+0x0000005Cu; // 800D8E94
  c->lr=0x800D8E9Cu; f_800361A0(c); // 800D8E98
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8E9C
  c->r[4]=c->r[31]+0x00000060u; // 800D8EA0
  c->r[3]=c->r[3]+0x00000068u; // 800D8EA4
  c->lr=0x800D8EACu; f_800361A0(c); // 800D8EA8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D8EAC
  c->r[3]=c->r[31]|c->r[31]; // 800D8EB0
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8EB4
  c->r[5]=0u+0x00000000u; // 800D8EB8
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D8EBC
  c->r[6]=0u+0x00000001u; // 800D8EC0
  c->f[2]=c->f[1]; // 800D8EC4
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800D8EC8
  c->ctr=c->r[12]; // 800D8ECC
  if (true) { c->lr=0x800D8ED4u; dispatch(c,c->ctr); } // 800D8ED0
  goto L_800D8F4C; // 800D8ED4
L_800D8ED8:;
  c->r[4]=0u+0x00000014u; // 800D8ED8
  c->r[3]=c->r[3]+0x0000000Cu; // 800D8EDC
  c->lr=0x800D8EE4u; f_80036430(c); // 800D8EE0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D8EE4
  c->r[5]=0u+0x00000000u; // 800D8EE8
  c->r[0]=0u+0x00000001u; // 800D8EEC
  c->r[4]=c->r[31]+0x0000002Cu; // 800D8EF0
  W8(c->r[3]+0x0000001Cu,c->r[5]); // 800D8EF4
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D8EF8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800D8EFC
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8F00
  W8(c->r[3]+0x0000001Cu,c->r[5]); // 800D8F04
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D8F08
  c->r[3]=c->r[3]+0x0000005Cu; // 800D8F0C
  c->lr=0x800D8F14u; f_800361A0(c); // 800D8F10
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D8F14
  c->r[4]=c->r[31]+0x00000060u; // 800D8F18
  c->r[3]=c->r[3]+0x00000068u; // 800D8F1C
  c->lr=0x800D8F24u; f_800361A0(c); // 800D8F20
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D8F24
  c->r[3]=c->r[31]|c->r[31]; // 800D8F28
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8F2C
  c->r[5]=0u+0x00000001u; // 800D8F30
  c->r[12]=R32(c->r[12]+0x00000064u); // 800D8F34
  c->r[6]=0u+0x00000001u; // 800D8F38
  c->f[2]=c->f[1]; // 800D8F3C
  c->r[4]=R32(c->r[31]+0x00000398u); // 800D8F40
  c->ctr=c->r[12]; // 800D8F44
  if (true) { c->lr=0x800D8F4Cu; dispatch(c,c->ctr); } // 800D8F48
L_800D8F4C:;
  c->r[0]=R8(c->r[31]+0x00000074u); // 800D8F4C
  cmpu(c,0,c->r[0],0x000000FFu); // 800D8F50
  if (crb(c,2)) { goto L_800D8F74; } // 800D8F54
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D8F58
  c->r[3]=c->r[31]|c->r[31]; // 800D8F5C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D8F60
  c->ctr=c->r[12]; // 800D8F64
  if (true) { c->lr=0x800D8F6Cu; dispatch(c,c->ctr); } // 800D8F68
  c->r[0]=0u+0x000000FFu; // 800D8F6C
  W8(c->r[31]+0x00000074u,c->r[0]); // 800D8F70
L_800D8F74:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D8F74
  c->r[3]=c->r[31]|c->r[31]; // 800D8F78
  c->r[12]=R32(c->r[12]+0x00000068u); // 800D8F7C
  c->ctr=c->r[12]; // 800D8F80
  if (true) { c->lr=0x800D8F88u; dispatch(c,c->ctr); } // 800D8F84
  c->r[3]=c->r[31]|c->r[31]; // 800D8F88
  c->lr=0x800D8F90u; f_801F4C0C(c); // 800D8F8C
  c->r[3]=c->r[31]+0x00000210u; // 800D8F90
  c->lr=0x800D8F98u; f_80221698(c); // 800D8F94
  c->r[3]=c->r[31]|c->r[31]; // 800D8F98
  c->lr=0x800D8FA0u; f_800D93D0(c); // 800D8F9C
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8FA0
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800D8FA4
  cmps(c,0,(int32_t)c->r[0],0); // 800D8FA8
  if (crb(c,2)) { goto L_800D9018; } // 800D8FAC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8FB0
  c->lr=0x800D8FB8u; f_802501B0(c); // 800D8FB4
  c->r[3]=c->r[31]|c->r[31]; // 800D8FB8
  c->r[4]=0u+0x00000002u; // 800D8FBC
  c->lr=0x800D8FC4u; f_801F5244(c); // 800D8FC0
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8FC4
  c->r[4]=c->r[31]+0x0000002Cu; // 800D8FC8
  c->r[3]=c->r[3]+0x0000005Cu; // 800D8FCC
  c->lr=0x800D8FD4u; f_800361A0(c); // 800D8FD0
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8FD4
  c->r[4]=c->r[31]+0x00000060u; // 800D8FD8
  c->r[3]=c->r[3]+0x00000068u; // 800D8FDC
  c->lr=0x800D8FE4u; f_800361A0(c); // 800D8FE0
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800D8FE4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D8FE8
  c->lr=0x800D8FF0u; f_8025037C(c); // 800D8FEC
  c->r[3]=c->r[31]|c->r[31]; // 800D8FF0
  c->r[4]=0u+0x00000002u; // 800D8FF4
  c->lr=0x800D8FFCu; f_800453A4(c); // 800D8FF8
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800D8FFC
  if (crb(c,2)) { goto L_800D91A4; } // 800D9000
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9004
  c->r[3]=0u+0x00000008u; // 800D9008
  c->r[4]=0u+0x00000000u; // 800D900C
  c->lr=0x800D9014u; f_802445B8(c); // 800D9010
  goto L_800D91A4; // 800D9014
L_800D9018:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D9018
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800D901C
  cmps(c,0,(int32_t)c->r[0],0); // 800D9020
  if (crb(c,2)) { goto L_800D9090; } // 800D9024
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D9028
  c->lr=0x800D9030u; f_802501B0(c); // 800D902C
  c->r[3]=c->r[31]|c->r[31]; // 800D9030
  c->r[4]=0u+0x00000001u; // 800D9034
  c->lr=0x800D903Cu; f_801F5244(c); // 800D9038
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D903C
  c->r[4]=c->r[31]+0x0000002Cu; // 800D9040
  c->r[3]=c->r[3]+0x0000005Cu; // 800D9044
  c->lr=0x800D904Cu; f_800361A0(c); // 800D9048
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D904C
  c->r[4]=c->r[31]+0x00000060u; // 800D9050
  c->r[3]=c->r[3]+0x00000068u; // 800D9054
  c->lr=0x800D905Cu; f_800361A0(c); // 800D9058
  c->r[3]=R32(c->r[31]+0x00000398u); // 800D905C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D9060
  c->lr=0x800D9068u; f_8025037C(c); // 800D9064
  c->r[3]=c->r[31]|c->r[31]; // 800D9068
  c->r[4]=0u+0x00000001u; // 800D906C
  c->lr=0x800D9074u; f_800453A4(c); // 800D9070
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800D9074
  if (crb(c,2)) { goto L_800D91A4; } // 800D9078
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D907C
  c->r[3]=0u+0x00000006u; // 800D9080
  c->r[4]=0u+0x00000000u; // 800D9084
  c->lr=0x800D908Cu; f_802445B8(c); // 800D9088
  goto L_800D91A4; // 800D908C
L_800D9090:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D9090
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D9094
  c->lr=0x800D909Cu; f_802501B0(c); // 800D9098
  c->r[3]=c->r[31]|c->r[31]; // 800D909C
  c->r[4]=0u+0x00000000u; // 800D90A0
  c->lr=0x800D90A8u; f_801F5244(c); // 800D90A4
  c->r[0]=R16(c->r[31]+0x00000078u); // 800D90A8
  cmps(c,0,(int32_t)c->r[0],0); // 800D90AC
  if (!crb(c,2)) { goto L_800D90C0; } // 800D90B0
  c->r[3]=c->r[31]|c->r[31]; // 800D90B4
  c->lr=0x800D90BCu; f_801F56F4(c); // 800D90B8
  goto L_800D91A4; // 800D90BC
L_800D90C0:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D90C0
  c->r[4]=c->r[31]+0x0000002Cu; // 800D90C4
  c->r[3]=c->r[3]+0x0000005Cu; // 800D90C8
  c->lr=0x800D90D0u; f_800361A0(c); // 800D90CC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D90D0
  c->r[4]=c->r[31]+0x00000060u; // 800D90D4
  c->r[3]=c->r[3]+0x00000068u; // 800D90D8
  c->lr=0x800D90E0u; f_800361A0(c); // 800D90DC
  c->r[3]=R16(c->r[31]+0x0000007Au); // 800D90E0
  c->r[3]=c->r[3]+0x0000003Cu; // 800D90E4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800D90E8
  W16(c->r[31]+0x0000007Au,c->r[3]); // 800D90EC
  cmpu(c,0,c->r[0],0x00000168u); // 800D90F0
  if (crb(c,0)) { goto L_800D9100; } // 800D90F4
  c->r[0]=0u+0x00000000u; // 800D90F8
  W16(c->r[31]+0x0000007Au,c->r[0]); // 800D90FC
L_800D9100:;
  c->r[6]=0u+0x803A0000u; // 800D9100
  {uint32_t ea=c->r[6]+0xFFFFE1C8u; c->r[5]=R32(ea); c->r[6]=ea;} // 800D9104
  c->r[3]=0u+0x00000000u; // 800D9108
  c->r[4]=R32(c->r[6]+0x00000004u); // 800D910C
  c->r[0]=R32(c->r[6]+0x00000008u); // 800D9110
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 800D9114
  W32(c->r[1]+0x00000030u,c->r[4]); // 800D9118
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D911C
  c->lr=0x800D9124u; f_80262C68(c); // 800D9120
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9124
  c->r[3]=c->r[1]+0x00000068u; // 800D9128
  {uint32_t ea=c->r[2]+0xFFFFA2ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D912C
  c->r[4]=0u+0x00000059u; // 800D9130
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800D9134
  c->lr=0x800D913Cu; f_80295FBC(c); // 800D9138
  c->r[3]=R16(c->r[31]+0x0000007Au); // 800D913C
  c->r[0]=0u+0x43300000u; // 800D9140
  W32(c->r[1]+0x00000098u,c->r[0]); // 800D9144
  {uint32_t ea=c->r[2]+0xFFFFA300u; c->f[1]=RF64(ea);} // 800D9148
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 800D914C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 800D9150
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800D9154
  c->lr=0x800D915Cu; f_80036010(c); // 800D9158
  {uint32_t ea=c->r[2]+0xFFFFA2F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D915C
  c->r[4]=c->r[1]+0x0000002Cu; // 800D9160
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9164
  c->r[5]=c->r[4]|c->r[4]; // 800D9168
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800D916C
  c->r[3]=c->r[1]+0x00000068u; // 800D9170
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800D9174
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 800D9178
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800D917C
  c->lr=0x800D9184u; f_80296750(c); // 800D9180
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D9184
  c->r[4]=c->r[1]+0x0000002Cu; // 800D9188
  c->r[3]=c->r[3]+0x0000005Cu; // 800D918C
  c->r[5]=c->r[3]|c->r[3]; // 800D9190
  c->lr=0x800D9198u; f_80296A4C(c); // 800D9194
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D9198
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D919C
  c->lr=0x800D91A4u; f_8025037C(c); // 800D91A0
L_800D91A4:;
  c->r[0]=R16(c->r[31]+0x00000076u); // 800D91A4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800D91A8
  if (crb(c,2)) { goto L_800D92DC; } // 800D91AC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D91B0
  c->r[4]=0u+0x803A0000u; // 800D91B4
  c->r[4]=c->r[4]+0xFFFFE1D4u; // 800D91B8
  c->r[5]=c->r[1]+0x00000038u; // 800D91BC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D91C0
  c->r[6]=0u+0x00000001u; // 800D91C4
  c->lr=0x800D91CCu; f_80257018(c); // 800D91C8
  c->r[30]=0u+0x803A0000u; // 800D91CC
  c->r[3]=c->r[1]+0x00000038u; // 800D91D0
  c->r[4]=c->r[30]+0xFFFFE1C8u; // 800D91D4
  c->r[5]=c->r[1]+0x00000020u; // 800D91D8
  c->lr=0x800D91E0u; f_80296750(c); // 800D91DC
  c->r[4]=c->r[30]+0xFFFFE1C8u; // 800D91E0
  c->r[7]=R32(c->r[1]+0x00000020u); // 800D91E4
  c->r[10]=R32(c->r[4]+0x00000000u); // 800D91E8
  c->r[30]=0u+0x80550000u; // 800D91EC
  c->r[9]=R32(c->r[4]+0x00000004u); // 800D91F0
  c->r[3]=c->r[30]+0xFFFFC848u; // 800D91F4
  c->r[8]=R32(c->r[4]+0x00000008u); // 800D91F8
  c->r[5]=c->r[1]+0x00000014u; // 800D91FC
  c->r[4]=R32(c->r[1]+0x00000024u); // 800D9200
  c->r[6]=c->r[1]+0x00000008u; // 800D9204
  c->r[0]=R32(c->r[1]+0x00000028u); // 800D9208
  W32(c->r[1]+0x00000008u,c->r[10]); // 800D920C
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 800D9210
  W32(c->r[1]+0x00000010u,c->r[8]); // 800D9214
  W32(c->r[1]+0x00000014u,c->r[7]); // 800D9218
  W32(c->r[1]+0x00000018u,c->r[4]); // 800D921C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D9220
  c->r[4]=R16(c->r[31]+0x00000076u); // 800D9224
  c->lr=0x800D922Cu; f_8018DBD0(c); // 800D9228
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D922C
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800D9230
  cmps(c,0,(int32_t)c->r[0],0); // 800D9234
  if (!crb(c,2)) { goto L_800D92DC; } // 800D9238
  c->r[3]=c->r[31]+0x0000000Cu; // 800D923C
  c->lr=0x800D9244u; f_8003E460(c); // 800D9240
  c->r[0]=0u+0x43300000u; // 800D9244
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 800D9248
  {uint32_t ea=c->r[2]+0xFFFFA300u; c->f[3]=RF64(ea);} // 800D924C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800D9250
  W32(c->r[1]+0x00000098u,c->r[0]); // 800D9254
  {uint32_t ea=c->r[2]+0xFFFFA2F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9258
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 800D925C
  {uint32_t ea=c->r[2]+0xFFFFA2F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9260
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800D9264
  c->r[4]=R16(c->r[31]+0x00000076u); // 800D9268
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800D926C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800D9270
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D9274
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[0]);} // 800D9278
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800D927C
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800D9280
  c->lr=0x800D9288u; f_8018E500(c); // 800D9284
  c->r[3]=c->r[31]+0x0000000Cu; // 800D9288
  c->lr=0x800D9290u; f_8003E460(c); // 800D928C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9290
  if (crb(c,2)) { goto L_800D92DC; } // 800D9294
  c->r[3]=c->r[31]+0x0000000Cu; // 800D9298
  c->r[4]=0u+0x00000000u; // 800D929C
  c->lr=0x800D92A4u; f_8003D794(c); // 800D92A0
  c->r[3]=c->r[31]+0x0000000Cu; // 800D92A4
  c->r[4]=0u+0x00000000u; // 800D92A8
  c->lr=0x800D92B0u; f_8003D750(c); // 800D92AC
  cmps(c,0,(int32_t)c->r[3],0); // 800D92B0
  if (crb(c,2)) { goto L_800D92DC; } // 800D92B4
  c->r[3]=c->r[31]+0x0000000Cu; // 800D92B8
  c->r[4]=0u+0x00000000u; // 800D92BC
  c->lr=0x800D92C4u; f_80036430(c); // 800D92C0
  c->r[4]=R16(c->r[31]+0x00000076u); // 800D92C4
  c->r[3]=c->r[30]+0xFFFFC848u; // 800D92C8
  c->lr=0x800D92D0u; f_8018D694(c); // 800D92CC
  c->r[3]=0u+0x00010000u; // 800D92D0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D92D4
  W16(c->r[31]+0x00000076u,c->r[0]); // 800D92D8
L_800D92DC:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800D92DC
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800D92E0
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800D92E4
  c->lr=c->r[0]; // 800D92E8
  c->r[1]=c->r[1]+0x000000B0u; // 800D92EC
  return; // 800D92F0
}

// fn_800D92F4
void f_800D92F4(Ctx* __restrict c) {
  f_801F50B4(c); return; // 800D92F4
}

// fn_800D92F8
void f_800D92F8(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800D92F8
}

// fn_800D92FC
void f_800D92FC(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800D92FC
}

// fn_800D9300
void f_800D9300(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9300
  c->r[0]=c->lr; // 800D9304
  c->r[5]=0u+0x00000000u; // 800D9308
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D930C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9310
  c->r[31]=c->r[3]|c->r[3]; // 800D9314
  c->r[3]=0u+0x00000280u; // 800D9318
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D931C
  c->r[4]=c->r[4]+0x0000010Cu; // 800D9320
  c->lr=0x800D9328u; f_8024EE50(c); // 800D9324
  cmps(c,0,(int32_t)c->r[3],0); // 800D9328
  if (crb(c,2)) { goto L_800D9338; } // 800D932C
  c->r[3]=0u+0x00000000u; // 800D9330
  goto L_800D9378; // 800D9334
L_800D9338:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800D9338
  c->r[3]=0u+0x00000288u; // 800D933C
  c->r[5]=0u+0x00000000u; // 800D9340
  c->r[4]=c->r[4]+0x0000010Cu; // 800D9344
  c->lr=0x800D934Cu; f_8024EE50(c); // 800D9348
  cmps(c,0,(int32_t)c->r[3],0); // 800D934C
  if (crb(c,2)) { goto L_800D935C; } // 800D9350
  c->r[3]=0u+0x00000000u; // 800D9354
  goto L_800D9378; // 800D9358
L_800D935C:;
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800D935C
  c->r[3]=0u+0x00000289u; // 800D9360
  c->r[5]=0u+0x00000000u; // 800D9364
  c->r[4]=c->r[4]+0x0000010Cu; // 800D9368
  c->lr=0x800D9370u; f_8024EE50(c); // 800D936C
  c->r[0]=cntlz(c->r[3]); // 800D9370
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D9374
L_800D9378:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9378
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D937C
  c->lr=c->r[0]; // 800D9380
  c->r[1]=c->r[1]+0x00000010u; // 800D9384
  return; // 800D9388
}

// fn_800D938C
void f_800D938C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D938C
  c->r[0]=c->lr; // 800D9390
  c->r[7]=0u+0x803D0000u; // 800D9394
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9398
  c->r[4]=c->r[1]+0x00000008u; // 800D939C
  {uint32_t ea=c->r[7]+0x000024CCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800D93A0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D93A4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D93A8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D93AC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D93B0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D93B4
  c->lr=0x800D93BCu; f_800D8CD8(c); // 800D93B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D93BC
  c->lr=c->r[0]; // 800D93C0
  c->r[1]=c->r[1]+0x00000020u; // 800D93C4
  return; // 800D93C8
}

// fn_800D93CC
void f_800D93CC(Ctx* __restrict c) {
  return; // 800D93CC
}

// fn_800D93D0
void f_800D93D0(Ctx* __restrict c) {
  return; // 800D93D0
}

// fn_800D93D4
void f_800D93D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D93D4
  c->r[0]=c->lr; // 800D93D8
  cmps(c,0,(int32_t)c->r[3],0); // 800D93DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D93E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D93E4
  c->r[31]=c->r[4]|c->r[4]; // 800D93E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D93EC
  c->r[30]=c->r[3]|c->r[3]; // 800D93F0
  if (crb(c,2)) { goto L_800D9410; } // 800D93F4
  c->r[4]=0u+0x00000000u; // 800D93F8
  c->lr=0x800D9400u; f_8026A06C(c); // 800D93FC
  cmps(c,0,(int32_t)c->r[31],0); // 800D9400
  if (!crb(c,1)) { goto L_800D9410; } // 800D9404
  c->r[3]=c->r[30]|c->r[30]; // 800D9408
  c->lr=0x800D9410u; f_8026A268(c); // 800D940C
L_800D9410:;
  c->r[3]=c->r[30]|c->r[30]; // 800D9410
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9414
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D9418
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D941C
  c->lr=c->r[0]; // 800D9420
  c->r[1]=c->r[1]+0x00000010u; // 800D9424
  return; // 800D9428
}

// fn_800D942C
void f_800D942C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D942C
  c->r[0]=c->lr; // 800D9430
  c->r[4]=0u+0x00000000u; // 800D9434
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D9438
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D943C
  c->r[31]=c->r[3]|c->r[3]; // 800D9440
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D9444
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D9448
  c->lr=0x800D9450u; f_801F57D0(c); // 800D944C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D9450
  c->r[3]=c->r[31]|c->r[31]; // 800D9454
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D9458
  c->ctr=c->r[12]; // 800D945C
  if (true) { c->lr=0x800D9464u; dispatch(c,c->ctr); } // 800D9460
  c->r[3]=c->r[31]|c->r[31]; // 800D9464
  c->lr=0x800D946Cu; f_801F4B94(c); // 800D9468
  c->r[5]=R16(c->r[31]+0x000000B4u); // 800D946C
  c->r[3]=0u+0x00000003u; // 800D9470
  c->r[0]=0u+0x0000003Cu; // 800D9474
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800D9478
  c->r[5]=c->r[5]|0x00001000u; // 800D947C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800D9480
  W16(c->r[31]+0x000000B4u,c->r[5]); // 800D9484
  c->r[3]=c->r[31]|c->r[31]; // 800D9488
  W8(c->r[31]+0x0000006Du,c->r[0]); // 800D948C
  c->lr=0x800D9494u; f_801F58BC(c); // 800D9490
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D9494
  c->r[29]=0u+0x00000001u; // 800D9498
  c->r[30]=0u+0x803A0000u; // 800D949C
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800D94A0
  c->r[4]=c->r[30]+0xFFFFE1E8u; // 800D94A4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D94A8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D94AC
  c->lr=0x800D94B4u; f_80256EC4(c); // 800D94B0
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D94B4
  c->r[5]=0u+0x805D0000u; // 800D94B8
  c->r[4]=c->r[31]+0x0000002Cu; // 800D94BC
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800D94C0
  c->r[3]=c->r[5]+0x000078B0u; // 800D94C4
  c->lr=0x800D94CCu; f_802351CC(c); // 800D94C8
  c->r[5]=R32(c->r[31]+0x00000394u); // 800D94CC
  c->r[4]=c->r[30]+0xFFFFE1E8u; // 800D94D0
  {uint32_t ea=c->r[2]+0xFFFFA310u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D94D4
  c->r[0]=0u+0x00000000u; // 800D94D8
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800D94DC
  c->r[4]=c->r[4]+0x00000009u; // 800D94E0
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800D94E4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D94E8
  W32(c->r[31]+0x00000078u,c->r[0]); // 800D94EC
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800D94F0
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800D94F4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D94F8
  c->lr=0x800D9500u; f_80256EC4(c); // 800D94FC
  W8(c->r[31]+0x00000074u,c->r[3]); // 800D9500
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800D9504
  c->r[6]=R32(c->r[31]+0x00000394u); // 800D9508
  c->r[5]=c->r[1]+0x00000014u; // 800D950C
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800D9510
  c->lr=0x800D9518u; f_8025EB7C(c); // 800D9514
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9518
  c->r[5]=c->r[1]+0x00000008u; // 800D951C
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9520
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9524
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800D9528
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800D952C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800D9530
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9534
  c->r[3]=R32(c->r[1]+0x00000014u); // 800D9538
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D953C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D9540
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D9544
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800D9548
  c->r[0]=R32(c->r[1]+0x00000018u); // 800D954C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D9550
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D9554
  c->r[4]=R8(c->r[31]+0x00000074u); // 800D9558
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D955C
  c->lr=0x800D9564u; f_8025EAE8(c); // 800D9560
  c->r[3]=c->r[31]|c->r[31]; // 800D9564
  c->lr=0x800D956Cu; f_801F56F4(c); // 800D9568
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D956C
  c->r[3]=c->r[31]|c->r[31]; // 800D9570
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D9574
  c->ctr=c->r[12]; // 800D9578
  if (true) { c->lr=0x800D9580u; dispatch(c,c->ctr); } // 800D957C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D9580
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D9584
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D9588
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D958C
  c->lr=c->r[0]; // 800D9590
  c->r[1]=c->r[1]+0x00000030u; // 800D9594
  return; // 800D9598
}

// fn_800D959C
void f_800D959C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D959C
  c->r[0]=c->lr; // 800D95A0
  c->r[4]=c->r[3]|c->r[3]; // 800D95A4
  c->r[3]=0u+0x0000034Du; // 800D95A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D95AC
  c->r[5]=0u+0x00000000u; // 800D95B0
  c->r[4]=R32(c->r[4]+0x00000394u); // 800D95B4
  c->r[4]=c->r[4]+0x0000010Cu; // 800D95B8
  c->lr=0x800D95C0u; f_8024EE50(c); // 800D95BC
  c->r[0]=cntlz(c->r[3]); // 800D95C0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D95C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D95C8
  c->lr=c->r[0]; // 800D95CC
  c->r[1]=c->r[1]+0x00000010u; // 800D95D0
  return; // 800D95D4
}

// fn_800D95D8
void f_800D95D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D95D8
  c->r[0]=c->lr; // 800D95DC
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D95E0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800D95E4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800D95E8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800D95EC
  c->r[31]=c->r[3]|c->r[3]; // 800D95F0
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800D95F4
  c->r[12]=R32(c->r[12]+0x00000068u); // 800D95F8
  c->ctr=c->r[12]; // 800D95FC
  if (true) { c->lr=0x800D9604u; dispatch(c,c->ctr); } // 800D9600
  c->r[3]=c->r[31]|c->r[31]; // 800D9604
  c->lr=0x800D960Cu; f_801F4C0C(c); // 800D9608
  c->r[0]=R32(c->r[31]+0x00000078u); // 800D960C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800D9610
  if (crb(c,2)) { goto L_800D97A8; } // 800D9614
  {uint32_t ea=c->r[2]+0xFFFFA314u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9618
  c->r[3]=0u+0x80620000u; // 800D961C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9620
  c->r[3]=c->r[3]+0x00007688u; // 800D9624
  {uint32_t ea=c->r[2]+0xFFFFA318u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9628
  c->r[4]=0u+0x00000002u; // 800D962C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800D9630
  c->r[3]=R32(c->r[3]+0x00000014u); // 800D9634
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800D9638
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D963C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D9640
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D9644
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9648
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800D964C
  c->lr=0x800D9654u; f_80037670(c); // 800D9650
  cmps(c,0,(int32_t)c->r[3],0); // 800D9654
  if (crb(c,2)) { goto L_800D9674; } // 800D9658
  c->r[3]=0u+0x805D0000u; // 800D965C
  c->r[4]=c->r[1]+0x0000002Cu; // 800D9660
  c->r[3]=c->r[3]+0x00003F6Cu; // 800D9664
  c->r[5]=0u+0x00000000u; // 800D9668
  c->lr=0x800D9670u; f_8020C9AC(c); // 800D966C
  goto L_800D9688; // 800D9670
L_800D9674:;
  c->r[4]=0u+0x805D0000u; // 800D9674
  c->r[3]=c->r[1]+0x0000002Cu; // 800D9678
  c->r[4]=c->r[4]+0x00003F6Cu; // 800D967C
  c->r[4]=c->r[4]+0x0000002Cu; // 800D9680
  c->lr=0x800D9688u; f_800361A0(c); // 800D9684
L_800D9688:;
  c->r[3]=c->r[1]+0x0000002Cu; // 800D9688
  c->r[4]=c->r[1]+0x00000038u; // 800D968C
  c->r[5]=c->r[1]+0x00000020u; // 800D9690
  c->lr=0x800D9698u; f_80296A70(c); // 800D9694
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9698
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D969C
  c->lr=0x800D96A4u; f_8005C22C(c); // 800D96A0
  {uint32_t ea=c->r[2]+0xFFFFA310u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D96A4
  fcmp(c,0,c->f[1],c->f[0]); // 800D96A8
  if (!crb(c,1)) { goto L_800D96C4; } // 800D96AC
  {uint32_t ea=c->r[2]+0xFFFFA31Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D96B0
  {uint32_t ea=c->r[2]+0xFFFFA320u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D96B4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800D96B8
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800D96BC
  goto L_800D96DC; // 800D96C0
L_800D96C4:;
  {uint32_t ea=c->r[2]+0xFFFFA31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D96C4
  {uint32_t ea=c->r[2]+0xFFFFA320u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D96C8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800D96CC
  {uint32_t ea=c->r[2]+0xFFFFA324u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D96D0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800D96D4
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 800D96D8
L_800D96DC:;
  {uint32_t ea=c->r[2]+0xFFFFA31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D96DC
  fcmp(c,0,c->f[31],c->f[0]); // 800D96E0
  if (!crb(c,1)) { goto L_800D96F0; } // 800D96E4
  {uint32_t ea=c->r[2]+0xFFFFA324u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D96E8
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800D96EC
L_800D96F0:;
  {uint32_t ea=c->r[2]+0xFFFFA328u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D96F0
  fcmp(c,0,c->f[31],c->f[0]); // 800D96F4
  if (!crb(c,0)) { goto L_800D9700; } // 800D96F8
  c->f[31]=c->f[0]; // 800D96FC
L_800D9700:;
  {uint32_t ea=c->r[2]+0xFFFFA32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9700
  fcmp(c,0,c->f[31],c->f[0]); // 800D9704
  if (!crb(c,1)) { goto L_800D9710; } // 800D9708
  c->f[31]=c->f[0]; // 800D970C
L_800D9710:;
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9710
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9714
  c->lr=0x800D971Cu; f_8005C22C(c); // 800D9718
  {uint32_t ea=c->r[2]+0xFFFFA310u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D971C
  fcmp(c,0,c->f[1],c->f[0]); // 800D9720
  if (!crb(c,1)) { goto L_800D973C; } // 800D9724
  {uint32_t ea=c->r[2]+0xFFFFA31Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9728
  {uint32_t ea=c->r[2]+0xFFFFA320u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D972C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800D9730
  c->f[4]=c->ps1[4]=S(c->f[1]/c->f[0]); // 800D9734
  goto L_800D9754; // 800D9738
L_800D973C:;
  {uint32_t ea=c->r[2]+0xFFFFA31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D973C
  {uint32_t ea=c->r[2]+0xFFFFA320u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9740
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800D9744
  {uint32_t ea=c->r[2]+0xFFFFA324u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9748
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800D974C
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[1]); // 800D9750
L_800D9754:;
  {uint32_t ea=c->r[2]+0xFFFFA31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9754
  fcmp(c,0,c->f[4],c->f[0]); // 800D9758
  if (!crb(c,1)) { goto L_800D9768; } // 800D975C
  {uint32_t ea=c->r[2]+0xFFFFA324u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9760
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800D9764
L_800D9768:;
  {uint32_t ea=c->r[2]+0xFFFFA328u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9768
  fcmp(c,0,c->f[4],c->f[0]); // 800D976C
  if (!crb(c,0)) { goto L_800D9778; } // 800D9770
  c->f[4]=c->f[0]; // 800D9774
L_800D9778:;
  {uint32_t ea=c->r[2]+0xFFFFA32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9778
  fcmp(c,0,c->f[4],c->f[0]); // 800D977C
  if (!crb(c,1)) { goto L_800D9788; } // 800D9780
  c->f[4]=c->f[0]; // 800D9784
L_800D9788:;
  {uint32_t ea=c->r[2]+0xFFFFA32Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9788
  {uint32_t ea=c->r[2]+0xFFFFA330u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D978C
  c->f[3]=c->ps1[3]=S(c->f[31]/c->f[1]); // 800D9790
  {uint32_t ea=c->r[2]+0xFFFFA334u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9794
  c->f[1]=c->ps1[1]=S(c->f[4]/c->f[1]); // 800D9798
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800D979C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 800D97A0
  goto L_800D97B0; // 800D97A4
L_800D97A8:;
  {uint32_t ea=c->r[2]+0xFFFFA310u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D97A8
  c->f[3]=c->f[2]; // 800D97AC
L_800D97B0:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D97B0
  fcmp(c,0,c->f[1],c->f[2]); // 800D97B4
  if (!crb(c,1)) { goto L_800D97D8; } // 800D97B8
  {uint32_t ea=c->r[2]+0xFFFFA338u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D97BC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D97C0
  fcmp(c,0,c->f[0],c->f[2]); // 800D97C4
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800D97C8
  if (!crb(c,0)) { goto L_800D97F4; } // 800D97CC
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[2]);} // 800D97D0
  goto L_800D97F4; // 800D97D4
L_800D97D8:;
  if (!crb(c,0)) { goto L_800D97F4; } // 800D97D8
  {uint32_t ea=c->r[2]+0xFFFFA338u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D97DC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D97E0
  fcmp(c,0,c->f[0],c->f[2]); // 800D97E4
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800D97E8
  if (!crb(c,1)) { goto L_800D97F4; } // 800D97EC
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[2]);} // 800D97F0
L_800D97F4:;
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D97F4
  fcmp(c,0,c->f[1],c->f[3]); // 800D97F8
  if (!crb(c,1)) { goto L_800D981C; } // 800D97FC
  {uint32_t ea=c->r[2]+0xFFFFA338u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9800
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D9804
  fcmp(c,0,c->f[0],c->f[3]); // 800D9808
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800D980C
  if (!crb(c,0)) { goto L_800D9838; } // 800D9810
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[3]);} // 800D9814
  goto L_800D9838; // 800D9818
L_800D981C:;
  if (!crb(c,0)) { goto L_800D9838; } // 800D981C
  {uint32_t ea=c->r[2]+0xFFFFA338u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9820
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D9824
  fcmp(c,0,c->f[0],c->f[3]); // 800D9828
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800D982C
  if (!crb(c,0)) { goto L_800D9838; } // 800D9830
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[3]);} // 800D9834
L_800D9838:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D9838
  c->r[5]=c->r[1]+0x00000014u; // 800D983C
  c->r[4]=R8(c->r[31]+0x00000074u); // 800D9840
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D9844
  c->lr=0x800D984Cu; f_8025EB7C(c); // 800D9848
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D984C
  c->r[5]=c->r[1]+0x00000008u; // 800D9850
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9854
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9858
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800D985C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800D9860
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800D9864
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9868
  c->r[3]=R32(c->r[1]+0x00000014u); // 800D986C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D9870
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D9874
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D9878
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800D987C
  c->r[0]=R32(c->r[1]+0x00000018u); // 800D9880
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D9884
  c->r[3]=R32(c->r[31]+0x00000394u); // 800D9888
  c->r[4]=R8(c->r[31]+0x00000074u); // 800D988C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D9890
  c->lr=0x800D9898u; f_8025EAE8(c); // 800D9894
  c->r[3]=c->r[31]|c->r[31]; // 800D9898
  c->lr=0x800D98A0u; f_801F56F4(c); // 800D989C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800D98A0
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D98A4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800D98A8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800D98AC
  c->lr=c->r[0]; // 800D98B0
  c->r[1]=c->r[1]+0x00000060u; // 800D98B4
  return; // 800D98B8
}

// fn_800D98BC
void f_800D98BC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800D98BC
  c->r[0]=c->r[0]|0x00000001u; // 800D98C0
  W32(c->r[3]+0x00000078u,c->r[0]); // 800D98C4
  return; // 800D98C8
}

// fn_800D98CC
void f_800D98CC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800D98CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800D98D0
  W32(c->r[3]+0x00000078u,c->r[0]); // 800D98D4
  return; // 800D98D8
}

// fn_800D98DC
void f_800D98DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D98DC
  c->r[0]=c->lr; // 800D98E0
  cmps(c,0,(int32_t)c->r[3],0); // 800D98E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D98E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D98EC
  c->r[31]=c->r[4]|c->r[4]; // 800D98F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D98F4
  c->r[30]=c->r[3]|c->r[3]; // 800D98F8
  if (crb(c,2)) { goto L_800D9918; } // 800D98FC
  c->r[4]=0u+0x00000000u; // 800D9900
  c->lr=0x800D9908u; f_8026A06C(c); // 800D9904
  cmps(c,0,(int32_t)c->r[31],0); // 800D9908
  if (!crb(c,1)) { goto L_800D9918; } // 800D990C
  c->r[3]=c->r[30]|c->r[30]; // 800D9910
  c->lr=0x800D9918u; f_8026A268(c); // 800D9914
L_800D9918:;
  c->r[3]=c->r[30]|c->r[30]; // 800D9918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D991C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D9920
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9924
  c->lr=c->r[0]; // 800D9928
  c->r[1]=c->r[1]+0x00000010u; // 800D992C
  return; // 800D9930
}

// fn_800D9934
void f_800D9934(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9934
  c->r[0]=c->lr; // 800D9938
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D993C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800D9940
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800D9944
  c->r[4]=0u+0x00000000u; // 800D9948
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D994C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D9950
  c->r[30]=c->r[3]|c->r[3]; // 800D9954
  c->lr=0x800D995Cu; f_801F57D0(c); // 800D9958
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D995C
  c->r[3]=c->r[30]|c->r[30]; // 800D9960
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D9964
  c->ctr=c->r[12]; // 800D9968
  if (true) { c->lr=0x800D9970u; dispatch(c,c->ctr); } // 800D996C
  c->r[3]=c->r[30]|c->r[30]; // 800D9970
  c->lr=0x800D9978u; f_801F4B94(c); // 800D9974
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800D9978
  c->r[5]=0u+0x00000003u; // 800D997C
  {uint32_t ea=c->r[2]+0xFFFFA348u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9980
  c->r[4]=0u+0x0000003Du; // 800D9984
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800D9988
  c->r[3]=0u+0x80550000u; // 800D998C
  W8(c->r[30]+0x0000006Cu,c->r[5]); // 800D9990
  c->f[3]=c->f[1]; // 800D9994
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D9998
  c->r[3]=c->r[3]+0x00003D60u; // 800D999C
  W8(c->r[30]+0x0000006Du,c->r[4]); // 800D99A0
  c->r[4]=c->r[30]+0x0000002Cu; // 800D99A4
  {uint32_t ea=c->r[2]+0xFFFFA34Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D99A8
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800D99AC
  c->r[5]=c->r[30]+0x00000030u; // 800D99B0
  c->r[6]=0u+0x00000000u; // 800D99B4
  c->r[7]=0u+0x00000000u; // 800D99B8
  c->lr=0x800D99C0u; f_801D5488(c); // 800D99BC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800D99C0
  c->r[3]=c->r[30]|c->r[30]; // 800D99C4
  c->lr=0x800D99CCu; f_801F58BC(c); // 800D99C8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D99CC
  c->r[31]=0u+0x00000001u; // 800D99D0
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800D99D4
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D99D8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D99DC
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800D99E0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D99E4
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800D99E8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D99EC
  c->lr=0x800D99F4u; f_802501B0(c); // 800D99F0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800D99F4
  c->r[4]=0u+0x00000000u; // 800D99F8
  {uint32_t ea=c->r[2]+0xFFFFA348u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D99FC
  c->r[0]=0u+0x000000FFu; // 800D9A00
  W8(c->r[3]+0x0000001Du,c->r[4]); // 800D9A04
  c->r[3]=c->r[30]|c->r[30]; // 800D9A08
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800D9A0C
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[0]);} // 800D9A10
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 800D9A14
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 800D9A18
  W8(c->r[30]+0x00000084u,c->r[0]); // 800D9A1C
  W8(c->r[30]+0x00000085u,c->r[0]); // 800D9A20
  W8(c->r[30]+0x00000086u,c->r[0]); // 800D9A24
  c->lr=0x800D9A2Cu; f_801F56F4(c); // 800D9A28
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800D9A2C
  c->r[3]=c->r[30]|c->r[30]; // 800D9A30
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D9A34
  c->ctr=c->r[12]; // 800D9A38
  if (true) { c->lr=0x800D9A40u; dispatch(c,c->ctr); } // 800D9A3C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800D9A40
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D9A44
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800D9A48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9A4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D9A50
  c->lr=c->r[0]; // 800D9A54
  c->r[1]=c->r[1]+0x00000020u; // 800D9A58
  return; // 800D9A5C
}

// fn_800D9A60
void f_800D9A60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9A60
  c->r[0]=c->lr; // 800D9A64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9A68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9A6C
  c->r[31]=c->r[3]|c->r[3]; // 800D9A70
  c->lr=0x800D9A78u; f_800D9E90(c); // 800D9A74
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800D9A78
  c->r[3]=c->r[31]|c->r[31]; // 800D9A7C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800D9A80
  c->ctr=c->r[12]; // 800D9A84
  if (true) { c->lr=0x800D9A8Cu; dispatch(c,c->ctr); } // 800D9A88
  c->r[3]=c->r[31]|c->r[31]; // 800D9A8C
  c->lr=0x800D9A94u; f_801F4C0C(c); // 800D9A90
  c->r[4]=R8(c->r[31]+0x00000084u); // 800D9A94
  cmpu(c,0,c->r[4],0x000000FFu); // 800D9A98
  if (crb(c,2)) { goto L_800D9AB4; } // 800D9A9C
  c->r[3]=0u+0x80550000u; // 800D9AA0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800D9AA4
  c->lr=0x800D9AACu; f_8019C920(c); // 800D9AA8
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9AAC
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 800D9AB0
L_800D9AB4:;
  c->r[4]=R8(c->r[31]+0x00000085u); // 800D9AB4
  cmpu(c,0,c->r[4],0x000000FFu); // 800D9AB8
  if (crb(c,2)) { goto L_800D9AD4; } // 800D9ABC
  c->r[3]=0u+0x80550000u; // 800D9AC0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800D9AC4
  c->lr=0x800D9ACCu; f_8019C920(c); // 800D9AC8
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9ACC
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 800D9AD0
L_800D9AD4:;
  c->r[4]=R8(c->r[31]+0x00000086u); // 800D9AD4
  cmpu(c,0,c->r[4],0x000000FFu); // 800D9AD8
  if (crb(c,2)) { goto L_800D9AF4; } // 800D9ADC
  c->r[3]=0u+0x80550000u; // 800D9AE0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800D9AE4
  c->lr=0x800D9AECu; f_8019C920(c); // 800D9AE8
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9AEC
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 800D9AF0
L_800D9AF4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D9AF4
  c->lr=0x800D9AFCu; f_801F56F4(c); // 800D9AF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9AFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9B00
  c->lr=c->r[0]; // 800D9B04
  c->r[1]=c->r[1]+0x00000010u; // 800D9B08
  return; // 800D9B0C
}

// fn_800D9B10
void f_800D9B10(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800D9B10
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800D9B14
  f_802501B0(c); return; // 800D9B18
}

// fn_800D9B1C
void f_800D9B1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9B1C
  c->r[0]=c->lr; // 800D9B20
  c->r[4]=c->r[3]|c->r[3]; // 800D9B24
  c->r[3]=0u+0x000002CEu; // 800D9B28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9B2C
  c->r[5]=0u+0x00000000u; // 800D9B30
  c->r[4]=R32(c->r[4]+0x00000394u); // 800D9B34
  c->r[4]=c->r[4]+0x0000010Cu; // 800D9B38
  c->lr=0x800D9B40u; f_8024EE50(c); // 800D9B3C
  c->r[0]=cntlz(c->r[3]); // 800D9B40
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D9B44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9B48
  c->lr=c->r[0]; // 800D9B4C
  c->r[1]=c->r[1]+0x00000010u; // 800D9B50
  return; // 800D9B54
}

// fn_800D9B58
void f_800D9B58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9B58
  c->r[0]=c->lr; // 800D9B5C
  cmps(c,0,(int32_t)c->r[4],2); // 800D9B60
  c->r[6]=c->r[3]|c->r[3]; // 800D9B64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9B68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9B6C
  c->r[31]=c->r[5]|c->r[5]; // 800D9B70
  if (crb(c,2)) { goto L_800D9BC8; } // 800D9B74
  if (!crb(c,0)) { goto L_800D9B8C; } // 800D9B78
  cmps(c,0,(int32_t)c->r[4],0); // 800D9B7C
  if (crb(c,2)) { goto L_800D9B98; } // 800D9B80
  if (!crb(c,0)) { goto L_800D9BB0; } // 800D9B84
  goto L_800D9BF4; // 800D9B88
L_800D9B8C:;
  cmps(c,0,(int32_t)c->r[4],4); // 800D9B8C
  if (!crb(c,0)) { goto L_800D9BF4; } // 800D9B90
  goto L_800D9BE0; // 800D9B94
L_800D9B98:;
  c->r[3]=0u+0x80550000u; // 800D9B98
  c->r[4]=R8(c->r[6]+0x00000084u); // 800D9B9C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800D9BA0
  c->lr=0x800D9BA8u; f_8019C920(c); // 800D9BA4
  c->r[4]=c->r[3]|c->r[3]; // 800D9BA8
  goto L_800D9BF4; // 800D9BAC
L_800D9BB0:;
  c->r[3]=0u+0x80550000u; // 800D9BB0
  c->r[4]=R8(c->r[6]+0x00000085u); // 800D9BB4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800D9BB8
  c->lr=0x800D9BC0u; f_8019C920(c); // 800D9BBC
  c->r[4]=c->r[3]|c->r[3]; // 800D9BC0
  goto L_800D9BF4; // 800D9BC4
L_800D9BC8:;
  c->r[3]=0u+0x80550000u; // 800D9BC8
  c->r[4]=R8(c->r[6]+0x00000086u); // 800D9BCC
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800D9BD0
  c->lr=0x800D9BD8u; f_8019C920(c); // 800D9BD4
  c->r[4]=c->r[3]|c->r[3]; // 800D9BD8
  goto L_800D9BF4; // 800D9BDC
L_800D9BE0:;
  c->r[3]=0u+0x80550000u; // 800D9BE0
  c->r[4]=R8(c->r[6]+0x00000087u); // 800D9BE4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800D9BE8
  c->lr=0x800D9BF0u; f_8019C920(c); // 800D9BEC
  c->r[4]=c->r[3]|c->r[3]; // 800D9BF0
L_800D9BF4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D9BF4
  c->r[4]=c->r[4]+0x0000002Cu; // 800D9BF8
  c->lr=0x800D9C00u; f_800361A0(c); // 800D9BFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9C00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9C04
  c->lr=c->r[0]; // 800D9C08
  c->r[1]=c->r[1]+0x00000010u; // 800D9C0C
  return; // 800D9C10
}

// fn_800D9C14
void f_800D9C14(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],1); // 800D9C14
  if (crb(c,2)) { goto L_800D9C40; } // 800D9C18
  if (!crb(c,0)) { goto L_800D9C2C; } // 800D9C1C
  cmps(c,0,(int32_t)c->r[4],0); // 800D9C20
  if (!crb(c,0)) { goto L_800D9C38; } // 800D9C24
  return; // 800D9C28
L_800D9C2C:;
  cmps(c,0,(int32_t)c->r[4],3); // 800D9C2C
  if (!crb(c,0)) return; // 800D9C30
  goto L_800D9C48; // 800D9C34
L_800D9C38:;
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[1]);} // 800D9C38
  return; // 800D9C3C
L_800D9C40:;
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 800D9C40
  return; // 800D9C44
L_800D9C48:;
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[1]);} // 800D9C48
  return; // 800D9C4C
}

// fn_800D9C50
void f_800D9C50(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],1); // 800D9C50
  if (crb(c,2)) { goto L_800D9C80; } // 800D9C54
  if (!crb(c,0)) { goto L_800D9C68; } // 800D9C58
  cmps(c,0,(int32_t)c->r[4],0); // 800D9C5C
  if (!crb(c,0)) { goto L_800D9C74; } // 800D9C60
  return; // 800D9C64
L_800D9C68:;
  cmps(c,0,(int32_t)c->r[4],3); // 800D9C68
  if (!crb(c,0)) return; // 800D9C6C
  goto L_800D9C8C; // 800D9C70
L_800D9C74:;
  {uint32_t ea=c->r[3]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9C74
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800D9C78
  return; // 800D9C7C
L_800D9C80:;
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9C80
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800D9C84
  return; // 800D9C88
L_800D9C8C:;
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9C8C
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800D9C90
  return; // 800D9C94
}

// fn_800D9C98
void f_800D9C98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9C98
  c->r[0]=c->lr; // 800D9C9C
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D9CA0
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800D9CA4
  W32(c->r[1]+0x00000088u,c->r[30]); // 800D9CA8
  c->r[30]=0u+0x803A0000u; // 800D9CAC
  c->r[30]=c->r[30]+0xFFFFE1F8u; // 800D9CB0
  W32(c->r[1]+0x00000084u,c->r[29]); // 800D9CB4
  c->r[29]=c->r[3]|c->r[3]; // 800D9CB8
  W32(c->r[1]+0x00000080u,c->r[28]); // 800D9CBC
  W8(c->r[3]+0x00000084u,c->r[4]); // 800D9CC0
  c->r[4]=0u+0x803A0000u; // 800D9CC4
  c->r[8]=R32(c->r[3]+0x00000394u); // 800D9CC8
  c->r[4]=c->r[4]+0xFFFFE28Cu; // 800D9CCC
  W8(c->r[3]+0x00000086u,c->r[5]); // 800D9CD0
  c->r[5]=c->r[1]+0x00000048u; // 800D9CD4
  W8(c->r[3]+0x00000085u,c->r[6]); // 800D9CD8
  c->r[6]=0u+0x00000001u; // 800D9CDC
  W8(c->r[3]+0x00000087u,c->r[7]); // 800D9CE0
  c->r[3]=R32(c->r[8]+0x0000010Cu); // 800D9CE4
  c->lr=0x800D9CECu; f_80257018(c); // 800D9CE8
  c->r[31]=0u+0x80550000u; // 800D9CEC
  c->r[4]=R8(c->r[29]+0x00000084u); // 800D9CF0
  c->r[3]=c->r[31]+0xFFFFCE54u; // 800D9CF4
  c->lr=0x800D9CFCu; f_8019C920(c); // 800D9CF8
  c->r[4]=c->r[30]+0x0000003Cu; // 800D9CFC
  c->r[6]=R32(c->r[30]+0x0000003Cu); // 800D9D00
  c->r[5]=R32(c->r[4]+0x00000004u); // 800D9D04
  c->r[28]=c->r[3]|c->r[3]; // 800D9D08
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D9D0C
  c->r[3]=c->r[1]+0x00000038u; // 800D9D10
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800D9D14
  c->r[4]=c->r[1]+0x0000002Cu; // 800D9D18
  W32(c->r[1]+0x00000030u,c->r[5]); // 800D9D1C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D9D20
  c->lr=0x800D9D28u; f_800361A0(c); // 800D9D24
  c->r[4]=c->r[1]+0x00000038u; // 800D9D28
  c->r[3]=c->r[1]+0x00000048u; // 800D9D2C
  c->r[5]=c->r[4]|c->r[4]; // 800D9D30
  c->lr=0x800D9D38u; f_80296750(c); // 800D9D34
  c->r[3]=c->r[28]+0x0000002Cu; // 800D9D38
  c->r[4]=c->r[1]+0x00000038u; // 800D9D3C
  c->lr=0x800D9D44u; f_800361A0(c); // 800D9D40
  c->r[3]=c->r[28]+0x00000060u; // 800D9D44
  c->r[4]=c->r[29]+0x00000060u; // 800D9D48
  c->lr=0x800D9D50u; f_800361A0(c); // 800D9D4C
  c->r[4]=R8(c->r[29]+0x00000086u); // 800D9D50
  c->r[3]=c->r[31]+0xFFFFCE54u; // 800D9D54
  c->lr=0x800D9D5Cu; f_8019C920(c); // 800D9D58
  c->r[4]=c->r[30]+0x00000048u; // 800D9D5C
  c->r[6]=R32(c->r[30]+0x00000048u); // 800D9D60
  c->r[5]=R32(c->r[4]+0x00000004u); // 800D9D64
  c->r[28]=c->r[3]|c->r[3]; // 800D9D68
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D9D6C
  c->r[3]=c->r[1]+0x00000038u; // 800D9D70
  W32(c->r[1]+0x00000020u,c->r[6]); // 800D9D74
  c->r[4]=c->r[1]+0x00000020u; // 800D9D78
  W32(c->r[1]+0x00000024u,c->r[5]); // 800D9D7C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D9D80
  c->lr=0x800D9D88u; f_800361A0(c); // 800D9D84
  c->r[4]=c->r[1]+0x00000038u; // 800D9D88
  c->r[3]=c->r[1]+0x00000048u; // 800D9D8C
  c->r[5]=c->r[4]|c->r[4]; // 800D9D90
  c->lr=0x800D9D98u; f_80296750(c); // 800D9D94
  c->r[3]=c->r[28]+0x0000002Cu; // 800D9D98
  c->r[4]=c->r[1]+0x00000038u; // 800D9D9C
  c->lr=0x800D9DA4u; f_800361A0(c); // 800D9DA0
  c->r[3]=c->r[28]+0x00000060u; // 800D9DA4
  c->r[4]=c->r[29]+0x00000060u; // 800D9DA8
  c->lr=0x800D9DB0u; f_800361A0(c); // 800D9DAC
  c->r[4]=R8(c->r[29]+0x00000085u); // 800D9DB0
  c->r[3]=c->r[31]+0xFFFFCE54u; // 800D9DB4
  c->lr=0x800D9DBCu; f_8019C920(c); // 800D9DB8
  c->r[4]=c->r[30]+0x00000054u; // 800D9DBC
  c->r[6]=R32(c->r[30]+0x00000054u); // 800D9DC0
  c->r[5]=R32(c->r[4]+0x00000004u); // 800D9DC4
  c->r[28]=c->r[3]|c->r[3]; // 800D9DC8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D9DCC
  c->r[3]=c->r[1]+0x00000038u; // 800D9DD0
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D9DD4
  c->r[4]=c->r[1]+0x00000014u; // 800D9DD8
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D9DDC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D9DE0
  c->lr=0x800D9DE8u; f_800361A0(c); // 800D9DE4
  c->r[4]=c->r[1]+0x00000038u; // 800D9DE8
  c->r[3]=c->r[1]+0x00000048u; // 800D9DEC
  c->r[5]=c->r[4]|c->r[4]; // 800D9DF0
  c->lr=0x800D9DF8u; f_80296750(c); // 800D9DF4
  c->r[3]=c->r[28]+0x0000002Cu; // 800D9DF8
  c->r[4]=c->r[1]+0x00000038u; // 800D9DFC
  c->lr=0x800D9E04u; f_800361A0(c); // 800D9E00
  c->r[3]=c->r[28]+0x00000060u; // 800D9E04
  c->r[4]=c->r[29]+0x00000060u; // 800D9E08
  c->lr=0x800D9E10u; f_800361A0(c); // 800D9E0C
  c->r[4]=R8(c->r[29]+0x00000087u); // 800D9E10
  c->r[3]=c->r[31]+0xFFFFCE54u; // 800D9E14
  c->lr=0x800D9E1Cu; f_8019C920(c); // 800D9E18
  c->r[4]=c->r[30]+0x00000060u; // 800D9E1C
  c->r[6]=R32(c->r[30]+0x00000060u); // 800D9E20
  c->r[5]=R32(c->r[4]+0x00000004u); // 800D9E24
  c->r[30]=c->r[3]|c->r[3]; // 800D9E28
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D9E2C
  c->r[3]=c->r[1]+0x00000038u; // 800D9E30
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D9E34
  c->r[4]=c->r[1]+0x00000008u; // 800D9E38
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D9E3C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D9E40
  c->lr=0x800D9E48u; f_800361A0(c); // 800D9E44
  c->r[4]=c->r[1]+0x00000038u; // 800D9E48
  c->r[3]=c->r[1]+0x00000048u; // 800D9E4C
  c->r[5]=c->r[4]|c->r[4]; // 800D9E50
  c->lr=0x800D9E58u; f_80296750(c); // 800D9E54
  c->r[3]=c->r[30]+0x0000002Cu; // 800D9E58
  c->r[4]=c->r[1]+0x00000038u; // 800D9E5C
  c->lr=0x800D9E64u; f_800361A0(c); // 800D9E60
  c->r[3]=c->r[30]+0x00000060u; // 800D9E64
  c->r[4]=c->r[29]+0x00000060u; // 800D9E68
  c->lr=0x800D9E70u; f_800361A0(c); // 800D9E6C
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D9E70
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800D9E74
  c->r[30]=R32(c->r[1]+0x00000088u); // 800D9E78
  c->r[29]=R32(c->r[1]+0x00000084u); // 800D9E7C
  c->r[28]=R32(c->r[1]+0x00000080u); // 800D9E80
  c->lr=c->r[0]; // 800D9E84
  c->r[1]=c->r[1]+0x00000090u; // 800D9E88
  return; // 800D9E8C
}

// fn_800D9E90
void f_800D9E90(Ctx* __restrict c) {
  return; // 800D9E90
}

// fn_800D9E94
void f_800D9E94(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800D9E94
}

// fn_800D9E98
void f_800D9E98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9E98
  c->r[0]=c->lr; // 800D9E9C
  c->r[7]=0u+0x803D0000u; // 800D9EA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9EA4
  c->r[4]=c->r[1]+0x00000008u; // 800D9EA8
  {uint32_t ea=c->r[7]+0x00002608u; c->r[6]=R32(ea); c->r[7]=ea;} // 800D9EAC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800D9EB0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D9EB4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D9EB8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D9EBC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D9EC0
  c->lr=0x800D9EC8u; f_800D9ED8(c); // 800D9EC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D9EC8
  c->lr=c->r[0]; // 800D9ECC
  c->r[1]=c->r[1]+0x00000020u; // 800D9ED0
  return; // 800D9ED4
}

// fn_800D9ED8
void f_800D9ED8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9ED8
  c->r[0]=c->lr; // 800D9EDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9EE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9EE4
  c->r[31]=c->r[4]|c->r[4]; // 800D9EE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D9EEC
  c->r[30]=c->r[3]|c->r[3]; // 800D9EF0
  c->r[3]=c->r[31]|c->r[31]; // 800D9EF4
  c->lr=0x800D9EFCu; f_802B9FDC(c); // 800D9EF8
  cmps(c,0,(int32_t)c->r[3],0); // 800D9EFC
  if (crb(c,2)) { goto L_800D9F1C; } // 800D9F00
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D9F04
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D9F08
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D9F0C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D9F10
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D9F14
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D9F18
L_800D9F1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9F1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9F20
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D9F24
  c->lr=c->r[0]; // 800D9F28
  c->r[1]=c->r[1]+0x00000010u; // 800D9F2C
  return; // 800D9F30
}

// fn_800D9F34
void f_800D9F34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9F34
  c->r[0]=c->lr; // 800D9F38
  cmps(c,0,(int32_t)c->r[3],0); // 800D9F3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9F40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9F44
  c->r[31]=c->r[4]|c->r[4]; // 800D9F48
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D9F4C
  c->r[30]=c->r[3]|c->r[3]; // 800D9F50
  if (crb(c,2)) { goto L_800D9F70; } // 800D9F54
  c->r[4]=0u+0x00000000u; // 800D9F58
  c->lr=0x800D9F60u; f_8026A06C(c); // 800D9F5C
  cmps(c,0,(int32_t)c->r[31],0); // 800D9F60
  if (!crb(c,1)) { goto L_800D9F70; } // 800D9F64
  c->r[3]=c->r[30]|c->r[30]; // 800D9F68
  c->lr=0x800D9F70u; f_8026A268(c); // 800D9F6C
L_800D9F70:;
  c->r[3]=c->r[30]|c->r[30]; // 800D9F70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9F74
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D9F78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9F7C
  c->lr=c->r[0]; // 800D9F80
  c->r[1]=c->r[1]+0x00000010u; // 800D9F84
  return; // 800D9F88
}

// fn_800D9F8C
void f_800D9F8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9F8C
  c->r[0]=c->lr; // 800D9F90
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800D9F94
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800D9F98
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800D9F9C
  c->r[11]=c->r[1]+0x000000A0u; // 800D9FA0
  c->lr=0x800D9FA8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D9FA4
  c->r[29]=0u+0x803A0000u; // 800D9FA8
  c->r[28]=c->r[3]|c->r[3]; // 800D9FAC
  c->r[29]=c->r[29]+0xFFFFE298u; // 800D9FB0
  c->r[4]=0u+0x00000000u; // 800D9FB4
  c->lr=0x800D9FBCu; f_801F57D0(c); // 800D9FB8
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800D9FBC
  c->r[3]=c->r[28]|c->r[28]; // 800D9FC0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D9FC4
  c->ctr=c->r[12]; // 800D9FC8
  if (true) { c->lr=0x800D9FD0u; dispatch(c,c->ctr); } // 800D9FCC
  c->r[3]=c->r[28]|c->r[28]; // 800D9FD0
  c->lr=0x800D9FD8u; f_801F4B94(c); // 800D9FD4
  c->r[30]=0u+0x00000000u; // 800D9FD8
  c->r[3]=0u+0x00000003u; // 800D9FDC
  c->r[0]=0u+0x0000003Eu; // 800D9FE0
  W8(c->r[28]+0x0000006Cu,c->r[3]); // 800D9FE4
  c->r[4]=R32(c->r[28]+0x00000394u); // 800D9FE8
  c->r[3]=c->r[28]|c->r[28]; // 800D9FEC
  W8(c->r[28]+0x0000006Du,c->r[0]); // 800D9FF0
  W8(c->r[28]+0x00000089u,c->r[30]); // 800D9FF4
  W32(c->r[28]+0x00000078u,c->r[30]); // 800D9FF8
  c->lr=0x800DA000u; f_801F58BC(c); // 800D9FFC
  c->r[3]=R32(c->r[28]+0x00000394u); // 800DA000
  c->r[31]=0u+0x00000001u; // 800DA004
  c->r[4]=0u+0x803A0000u; // 800DA008
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800DA00C
  c->r[4]=c->r[4]+0xFFFFE348u; // 800DA010
  c->r[3]=R32(c->r[28]+0x00000394u); // 800DA014
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DA018
  c->lr=0x800DA020u; f_80256EC4(c); // 800DA01C
  c->r[6]=R32(c->r[28]+0x00000394u); // 800DA020
  c->r[4]=0u+0x00000000u; // 800DA024
  {uint32_t ea=c->r[2]+0xFFFFA358u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA028
  c->r[5]=0u+0x00000000u; // 800DA02C
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800DA030
  c->r[3]=c->r[28]|c->r[28]; // 800DA034
  c->f[2]=c->f[1]; // 800DA038
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800DA03C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800DA040
  c->ctr=c->r[12]; // 800DA044
  if (true) { c->lr=0x800DA04Cu; dispatch(c,c->ctr); } // 800DA048
  {uint32_t ea=c->r[2]+0xFFFFA358u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA04C
  c->r[4]=0u+0x00000000u; // 800DA050
  c->r[5]=R32(c->r[28]+0x00000394u); // 800DA054
  c->f[2]=c->f[1]; // 800DA058
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800DA05C
  c->r[5]=R32(c->r[5]+0x00000034u); // 800DA060
  c->lr=0x800DA068u; f_8024FEAC(c); // 800DA064
  c->r[3]=R32(c->r[28]+0x00000394u); // 800DA068
  c->r[4]=0u+0x00000001u; // 800DA06C
  c->r[3]=c->r[3]+0x0000001Cu; // 800DA070
  c->lr=0x800DA078u; f_80251824(c); // 800DA074
  c->r[3]=R32(c->r[28]+0x00000394u); // 800DA078
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DA07C
  c->lr=0x800DA084u; f_802501B0(c); // 800DA080
  c->r[3]=0u+0x00000030u; // 800DA084
  c->lr=0x800DA08Cu; f_8024E174(c); // 800DA088
  W32(c->r[28]+0x00000074u,c->r[3]); // 800DA08C
  c->r[3]=c->r[28]|c->r[28]; // 800DA090
  c->lr=0x800DA098u; f_800DA704(c); // 800DA094
  c->r[6]=R32(c->r[28]+0x00000074u); // 800DA098
  c->r[3]=c->r[28]+0x00000038u; // 800DA09C
  c->r[4]=c->r[28]+0x00000060u; // 800DA0A0
  c->r[5]=c->r[1]+0x00000038u; // 800DA0A4
  c->r[7]=0u+0x00000000u; // 800DA0A8
  c->lr=0x800DA0B0u; f_8002BE64(c); // 800DA0AC
  c->r[3]=R32(c->r[28]+0x00000074u); // 800DA0B0
  c->r[4]=c->r[1]+0x00000048u; // 800DA0B4
  c->lr=0x800DA0BCu; f_80295B14(c); // 800DA0B8
  c->r[5]=c->r[29]+0x00000058u; // 800DA0BC
  {uint32_t ea=c->r[2]+0xFFFFA358u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA0C0
  c->r[7]=R32(c->r[29]+0x00000058u); // 800DA0C4
  c->r[3]=c->r[1]+0x00000038u; // 800DA0C8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800DA0CC
  c->r[4]=c->r[1]+0x0000002Cu; // 800DA0D0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DA0D4
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800DA0D8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 800DA0DC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800DA0E0
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800DA0E4
  W32(c->r[1]+0x00000030u,c->r[6]); // 800DA0E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DA0EC
  c->lr=0x800DA0F4u; f_800361A0(c); // 800DA0F0
  c->r[4]=c->r[1]+0x00000038u; // 800DA0F4
  c->r[3]=c->r[1]+0x00000048u; // 800DA0F8
  c->r[5]=c->r[4]|c->r[4]; // 800DA0FC
  c->lr=0x800DA104u; f_80296750(c); // 800DA100
  c->r[3]=c->r[28]+0x00000038u; // 800DA104
  c->r[4]=c->r[1]+0x00000038u; // 800DA108
  c->r[5]=c->r[3]|c->r[3]; // 800DA10C
  c->lr=0x800DA114u; f_80296A4C(c); // 800DA110
  {uint32_t ea=c->r[28]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA114
  c->r[5]=c->r[29]+0x00000064u; // 800DA118
  {uint32_t ea=c->r[2]+0xFFFFA360u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA11C
  c->r[3]=c->r[28]+0x00000044u; // 800DA120
  {uint32_t ea=c->r[2]+0xFFFFA35Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA124
  c->r[4]=c->r[1]+0x00000020u; // 800DA128
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800DA12C
  {uint32_t ea=c->r[2]+0xFFFFA358u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA130
  {uint32_t ea=c->r[28]+0x00000060u; WF32(ea,c->f[2]);} // 800DA134
  {uint32_t ea=c->r[28]+0x00000068u; WF32(ea,c->f[1]);} // 800DA138
  {uint32_t ea=c->r[28]+0x00000080u; WF32(ea,c->f[0]);} // 800DA13C
  c->r[7]=R32(c->r[29]+0x00000064u); // 800DA140
  c->r[6]=R32(c->r[5]+0x00000004u); // 800DA144
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DA148
  W32(c->r[1]+0x00000020u,c->r[7]); // 800DA14C
  W32(c->r[1]+0x00000024u,c->r[6]); // 800DA150
  W32(c->r[1]+0x00000028u,c->r[0]); // 800DA154
  c->lr=0x800DA15Cu; f_800361A0(c); // 800DA158
  c->r[3]=R32(c->r[28]+0x00000394u); // 800DA15C
  c->r[4]=c->r[28]+0x00000038u; // 800DA160
  c->r[3]=c->r[3]+0x0000005Cu; // 800DA164
  c->lr=0x800DA16Cu; f_800361A0(c); // 800DA168
  c->r[3]=R32(c->r[28]+0x00000394u); // 800DA16C
  c->r[4]=c->r[28]+0x00000060u; // 800DA170
  c->r[3]=c->r[3]+0x00000068u; // 800DA174
  c->lr=0x800DA17Cu; f_800361A0(c); // 800DA178
  c->r[4]=R32(c->r[28]+0x00000394u); // 800DA17C
  c->r[3]=0u+0x805D0000u; // 800DA180
  c->r[3]=c->r[3]+0x000078B0u; // 800DA184
  c->r[4]=c->r[4]+0x0000005Cu; // 800DA188
  c->lr=0x800DA190u; f_802351CC(c); // 800DA18C
  c->r[4]=R32(c->r[28]+0x00000394u); // 800DA190
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800DA194
  c->r[3]=c->r[29]+0x00000040u; // 800DA198
  c->r[4]=c->r[3]+0x0000000Cu; // 800DA19C
  c->lr=0x800DA1A4u; f_80296CAC(c); // 800DA1A0
  c->f[31]=c->f[1]; // 800DA1A4
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)392); // 800DA1A8
  W32(c->r[28]+0x00000448u,c->r[31]); // 800DA1AC
  c->lr=0x800DA1B4u; f_8024E174(c); // 800DA1B0
  {uint32_t ea=c->r[2]+0xFFFFA364u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA1B4
  c->r[4]=0u+0x0000001Bu; // 800DA1B8
  {uint32_t ea=c->r[2]+0xFFFFA368u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA1BC
  c->r[5]=0u+0x00000002u; // 800DA1C0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 800DA1C4
  W32(c->r[28]+0x0000043Cu,c->r[3]); // 800DA1C8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800DA1CC
  c->lr=0x800DA1D4u; f_8017F624(c); // 800DA1D0
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800DA1D4
  {uint32_t ea=c->r[2]+0xFFFFA36Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA1D8
  c->lr=0x800DA1E0u; f_800B276C(c); // 800DA1DC
  W32(c->r[1]+0x00000014u,c->r[30]); // 800DA1E0
  c->r[3]=c->r[1]+0x00000038u; // 800DA1E4
  c->r[4]=c->r[1]+0x00000014u; // 800DA1E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DA1EC
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 800DA1F0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 800DA1F4
  c->lr=0x800DA1FCu; f_800361A0(c); // 800DA1F8
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800DA1FC
  c->r[5]=c->r[1]+0x00000038u; // 800DA200
  c->r[4]=0u+0x0000001Au; // 800DA204
  c->lr=0x800DA20Cu; f_800B26E8(c); // 800DA208
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800DA20C
  c->r[4]=R32(c->r[28]+0x00000074u); // 800DA210
  c->lr=0x800DA218u; f_801801A8(c); // 800DA214
  c->r[23]=0u+0x00000001u; // 800DA218
L_800DA21C:;
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800DA21C
  c->r[4]=c->r[23]|c->r[23]; // 800DA220
  c->r[5]=0u+0x00000000u; // 800DA224
  c->lr=0x800DA22Cu; f_800B26A4(c); // 800DA228
  c->r[23]=c->r[23]+0x00000001u; // 800DA22C
  cmps(c,0,(int32_t)c->r[23],26); // 800DA230
  if (crb(c,0)) { IRQCHK(c); goto L_800DA21C; } // 800DA234
  c->r[23]=0u+0x00000000u; // 800DA238
L_800DA23C:;
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800DA23C
  c->r[5]=c->r[23]|c->r[23]; // 800DA240
  c->r[4]=c->r[23]+0x00000001u; // 800DA244
  c->lr=0x800DA24Cu; f_800B2648(c); // 800DA248
  c->r[4]=addc(c,~c->r[23],0x00000019u,1); // 800DA24C
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800DA250
  c->r[5]=addc(c,~c->r[23],0x0000001Au,1); // 800DA254
  c->lr=0x800DA25Cu; f_800B2648(c); // 800DA258
  c->r[23]=c->r[23]+0x00000001u; // 800DA25C
  cmps(c,0,(int32_t)c->r[23],13); // 800DA260
  if (crb(c,0)) { IRQCHK(c); goto L_800DA23C; } // 800DA264
  c->r[3]=0u+0x00000068u; // 800DA268
  c->lr=0x800DA270u; f_8024E174(c); // 800DA26C
  c->r[4]=0u+0x2AAB0000u; // 800DA270
  W32(c->r[28]+0x0000007Cu,c->r[3]); // 800DA274
  c->r[24]=c->r[3]|c->r[3]; // 800DA278
  c->r[23]=0u+0x00000000u; // 800DA27C
  c->r[26]=c->r[4]+0xFFFFAAABu; // 800DA280
  c->r[31]=0u+0x00000001u; // 800DA284
  c->r[27]=0u+0x00000002u; // 800DA288
  c->r[30]=0u+0x805D0000u; // 800DA28C
L_800DA290:;
  c->r[3]=0u+0x00000450u; // 800DA290
  c->lr=0x800DA298u; f_8026A1A4(c); // 800DA294
  cmps(c,0,(int32_t)c->r[3],0); // 800DA298
  c->r[25]=c->r[3]|c->r[3]; // 800DA29C
  if (crb(c,2)) { goto L_800DA2A8; } // 800DA2A0
  c->lr=0x800DA2A8u; f_800B260C(c); // 800DA2A4
L_800DA2A8:;
  cmps(c,0,(int32_t)c->r[25],0); // 800DA2A8
  if (crb(c,2)) { goto L_800DA38C; } // 800DA2AC
  c->r[4]=c->r[23]+0x00000001u; // 800DA2B0
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[26]*(int64_t)(int32_t)c->r[4])>>32); // 800DA2B4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800DA2B8
  c->r[0]=c->r[3]+c->r[0]; // 800DA2BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 800DA2C0
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 800DA2C4
  if (!crb(c,2)) { goto L_800DA2D4; } // 800DA2C8
  W8(c->r[25]+0x0000006Eu,c->r[27]); // 800DA2CC
  goto L_800DA2D8; // 800DA2D0
L_800DA2D4:;
  W8(c->r[25]+0x0000006Eu,c->r[31]); // 800DA2D4
L_800DA2D8:;
  c->r[12]=R32(c->r[25]+0x000000B0u); // 800DA2D8
  c->r[3]=c->r[25]|c->r[25]; // 800DA2DC
  c->r[12]=R32(c->r[12]+0x00000014u); // 800DA2E0
  c->ctr=c->r[12]; // 800DA2E4
  if (true) { c->lr=0x800DA2ECu; dispatch(c,c->ctr); } // 800DA2E8
  c->r[4]=R32(c->r[28]+0x00000394u); // 800DA2EC
  c->r[3]=c->r[30]+0x000078B0u; // 800DA2F0
  c->r[4]=c->r[4]+0x0000005Cu; // 800DA2F4
  c->lr=0x800DA2FCu; f_802351CC(c); // 800DA2F8
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 800DA2FC
  c->r[3]=c->r[25]|c->r[25]; // 800DA300
  c->r[4]=0u+0x00000000u; // 800DA304
  c->lr=0x800DA30Cu; f_80039840(c); // 800DA308
  c->lr=0x800DA310u; f_80251620(c); // 800DA30C
  W8(c->r[3]+0x00000001u,c->r[29]); // 800DA310
  c->r[3]=c->r[28]|c->r[28]; // 800DA314
  W32(c->r[24]+0x00000000u,c->r[25]); // 800DA318
  c->lr=0x800DA320u; f_800DA820(c); // 800DA31C
  c->r[25]=0u+0x00000000u; // 800DA320
L_800DA324:;
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800DA324
  c->r[4]=R32(c->r[28]+0x00000074u); // 800DA328
  c->lr=0x800DA330u; f_8017FC44(c); // 800DA32C
  c->r[25]=c->r[25]+0x00000001u; // 800DA330
  cmps(c,0,(int32_t)c->r[25],16); // 800DA334
  if (crb(c,0)) { IRQCHK(c); goto L_800DA324; } // 800DA338
  c->r[3]=c->r[28]|c->r[28]; // 800DA33C
  c->lr=0x800DA344u; f_800DA9F4(c); // 800DA340
  c->r[23]=c->r[23]+0x00000001u; // 800DA344
  c->r[24]=c->r[24]+0x00000004u; // 800DA348
  cmps(c,0,(int32_t)c->r[23],26); // 800DA34C
  if (crb(c,0)) { IRQCHK(c); goto L_800DA290; } // 800DA350
  c->r[0]=0u+0x00000001u; // 800DA354
  c->r[3]=c->r[28]|c->r[28]; // 800DA358
  W8(c->r[28]+0x0000006Fu,c->r[0]); // 800DA35C
  c->lr=0x800DA364u; f_801F56F4(c); // 800DA360
  c->r[7]=0u+0x803D0000u; // 800DA364
  {uint32_t ea=c->r[7]+0x000026B0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800DA368
  c->r[3]=c->r[28]|c->r[28]; // 800DA36C
  c->r[4]=c->r[1]+0x00000008u; // 800DA370
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DA374
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DA378
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DA37C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DA380
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DA384
  c->lr=0x800DA38Cu; f_800DA3AC(c); // 800DA388
L_800DA38C:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800DA38C
  c->r[11]=c->r[1]+0x000000A0u; // 800DA390
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800DA394
  c->lr=0x800DA39Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DA398
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800DA39C
  c->lr=c->r[0]; // 800DA3A0
  c->r[1]=c->r[1]+0x000000B0u; // 800DA3A4
  return; // 800DA3A8
}

// fn_800DA3AC
void f_800DA3AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA3AC
  c->r[0]=c->lr; // 800DA3B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA3B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DA3B8
  c->r[31]=c->r[4]|c->r[4]; // 800DA3BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DA3C0
  c->r[30]=c->r[3]|c->r[3]; // 800DA3C4
  c->r[3]=c->r[31]|c->r[31]; // 800DA3C8
  c->lr=0x800DA3D0u; f_802B9FDC(c); // 800DA3CC
  cmps(c,0,(int32_t)c->r[3],0); // 800DA3D0
  if (crb(c,2)) { goto L_800DA3F0; } // 800DA3D4
  c->r[3]=R32(c->r[31]+0x00000000u); // 800DA3D8
  c->r[0]=R32(c->r[31]+0x00000004u); // 800DA3DC
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800DA3E0
  W32(c->r[30]+0x00000020u,c->r[0]); // 800DA3E4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800DA3E8
  W32(c->r[30]+0x00000024u,c->r[0]); // 800DA3EC
L_800DA3F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA3F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DA3F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DA3F8
  c->lr=c->r[0]; // 800DA3FC
  c->r[1]=c->r[1]+0x00000010u; // 800DA400
  return; // 800DA404
}

// fn_800DA408
void f_800DA408(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA408
  c->r[0]=c->lr; // 800DA40C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA410
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DA414
  c->r[31]=c->r[3]|c->r[3]; // 800DA418
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800DA41C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800DA420
  c->ctr=c->r[12]; // 800DA424
  if (true) { c->lr=0x800DA42Cu; dispatch(c,c->ctr); } // 800DA428
  c->r[3]=c->r[31]|c->r[31]; // 800DA42C
  c->lr=0x800DA434u; f_801F4C0C(c); // 800DA430
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA434
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DA438
  c->lr=c->r[0]; // 800DA43C
  c->r[1]=c->r[1]+0x00000010u; // 800DA440
  return; // 800DA444
}

// fn_800DA448
void f_800DA448(Ctx* __restrict c) {
  f_801F50B4(c); return; // 800DA448
}

// fn_800DA44C
void f_800DA44C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA44C
  c->r[0]=c->lr; // 800DA450
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA454
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DA458
  c->r[31]=c->r[3]|c->r[3]; // 800DA45C
  c->r[3]=R32(c->r[3]+0x00000074u); // 800DA460
  c->lr=0x800DA468u; f_8024E190(c); // 800DA464
  c->r[3]=R32(c->r[31]+0x0000007Cu); // 800DA468
  c->lr=0x800DA470u; f_8024E190(c); // 800DA46C
  c->r[3]=c->r[31]|c->r[31]; // 800DA470
  c->lr=0x800DA478u; f_801F4C78(c); // 800DA474
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA478
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DA47C
  c->lr=c->r[0]; // 800DA480
  c->r[1]=c->r[1]+0x00000010u; // 800DA484
  return; // 800DA488
}

// fn_800DA48C
void f_800DA48C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA48C
  c->r[0]=c->lr; // 800DA490
  c->r[4]=c->r[3]|c->r[3]; // 800DA494
  c->r[3]=0u+0x00000501u; // 800DA498
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA49C
  c->r[5]=0u+0x00000000u; // 800DA4A0
  c->r[4]=R32(c->r[4]+0x00000394u); // 800DA4A4
  c->r[4]=c->r[4]+0x0000010Cu; // 800DA4A8
  c->lr=0x800DA4B0u; f_8024EE50(c); // 800DA4AC
  c->r[0]=cntlz(c->r[3]); // 800DA4B0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DA4B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA4B8
  c->lr=c->r[0]; // 800DA4BC
  c->r[1]=c->r[1]+0x00000010u; // 800DA4C0
  return; // 800DA4C4
}

// fn_800DA4C8
void f_800DA4C8(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800DA4C8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800DA4CC
  c->ctr=c->r[12]; // 800DA4D0
  if (true) { dispatch(c,c->ctr); return; } // 800DA4D4
}

// fn_800DA4D8
void f_800DA4D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA4D8
  c->r[0]=c->lr; // 800DA4DC
  W32(c->r[1]+0x00000084u,c->r[0]); // 800DA4E0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800DA4E4
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800DA4E8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800DA4EC
  W32(c->r[1]+0x00000068u,c->r[30]); // 800DA4F0
  c->r[30]=c->r[3]|c->r[3]; // 800DA4F4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DA4F8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DA4FC
  c->lr=0x800DA504u; f_802501B0(c); // 800DA500
  {uint32_t ea=c->r[30]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA504
  {uint32_t ea=c->r[2]+0xFFFFA358u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA508
  fcmp(c,0,c->f[1],c->f[0]); // 800DA50C
  if (crb(c,2)) { goto L_800DA61C; } // 800DA510
  c->r[0]=R8(c->r[30]+0x00000089u); // 800DA514
  cmps(c,0,(int32_t)c->r[0],0); // 800DA518
  if (!crb(c,2)) { goto L_800DA618; } // 800DA51C
  {uint32_t ea=c->r[30]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA520
  {uint32_t ea=c->r[2]+0xFFFFA370u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA524
  fcmp(c,0,c->f[1],c->f[0]); // 800DA528
  if (!crb(c,0)) { goto L_800DA53C; } // 800DA52C
  {uint32_t ea=c->r[2]+0xFFFFA374u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA530
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DA534
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 800DA538
L_800DA53C:;
  c->r[3]=R32(c->r[30]+0x00000044u); // 800DA53C
  c->r[4]=c->r[1]+0x00000038u; // 800DA540
  c->r[0]=R32(c->r[30]+0x00000048u); // 800DA544
  {uint32_t ea=c->r[2]+0xFFFFA378u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DA548
  W32(c->r[1]+0x00000014u,c->r[3]); // 800DA54C
  {uint32_t ea=c->r[2]+0xFFFFA37Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA550
  W32(c->r[1]+0x00000018u,c->r[0]); // 800DA554
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 800DA558
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800DA55C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800DA560
  c->r[3]=R32(c->r[30]+0x00000074u); // 800DA564
  c->lr=0x800DA56Cu; f_80295B14(c); // 800DA568
  {uint32_t ea=c->r[2]+0xFFFFA358u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA56C
  c->r[3]=c->r[1]+0x00000038u; // 800DA570
  c->r[4]=c->r[1]+0x00000014u; // 800DA574
  c->r[5]=c->r[1]+0x00000008u; // 800DA578
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 800DA57C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800DA580
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800DA584
  c->lr=0x800DA58Cu; f_80296750(c); // 800DA588
  c->r[3]=c->r[30]+0x00000038u; // 800DA58C
  c->r[4]=c->r[1]+0x00000008u; // 800DA590
  c->r[5]=c->r[3]|c->r[3]; // 800DA594
  c->lr=0x800DA59Cu; f_80296A4C(c); // 800DA598
  c->r[31]=0u+0x803A0000u; // 800DA59C
  c->r[3]=c->r[30]+0x00000038u; // 800DA5A0
  c->r[31]=c->r[31]+0xFFFFE2D8u; // 800DA5A4
  c->r[5]=c->r[1]+0x00000020u; // 800DA5A8
  c->r[4]=c->r[31]+0x0000000Cu; // 800DA5AC
  c->lr=0x800DA5B4u; f_80296A70(c); // 800DA5B0
  c->r[3]=c->r[31]|c->r[31]; // 800DA5B4
  c->r[4]=c->r[31]+0x0000000Cu; // 800DA5B8
  c->r[5]=c->r[1]+0x0000002Cu; // 800DA5BC
  c->lr=0x800DA5C4u; f_80296A70(c); // 800DA5C0
  c->r[3]=c->r[1]+0x00000020u; // 800DA5C4
  c->r[4]=c->r[3]|c->r[3]; // 800DA5C8
  c->lr=0x800DA5D0u; f_80296B50(c); // 800DA5CC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[31]); // 800DA5D0
  fcmp(c,0,c->f[1],c->f[0]); // 800DA5D4
  if (!crb(c,0)) { goto L_800DA61C; } // 800DA5D8
  c->r[5]=R8(c->r[30]+0x00000089u); // 800DA5DC
  c->r[3]=c->r[1]+0x0000002Cu; // 800DA5E0
  c->r[4]=c->r[3]|c->r[3]; // 800DA5E4
  c->r[0]=c->r[5]+0x00000001u; // 800DA5E8
  W8(c->r[30]+0x00000089u,c->r[0]); // 800DA5EC
  c->lr=0x800DA5F4u; f_80296AB0(c); // 800DA5F0
  c->f[1]=c->f[31]; // 800DA5F4
  c->r[3]=c->r[1]+0x0000002Cu; // 800DA5F8
  c->r[4]=c->r[3]|c->r[3]; // 800DA5FC
  c->lr=0x800DA604u; f_80296A94(c); // 800DA600
  c->r[3]=c->r[31]+0x0000000Cu; // 800DA604
  c->r[4]=c->r[1]+0x0000002Cu; // 800DA608
  c->r[5]=c->r[30]+0x00000038u; // 800DA60C
  c->lr=0x800DA614u; f_80296A4C(c); // 800DA610
  goto L_800DA61C; // 800DA614
L_800DA618:;
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800DA618
L_800DA61C:;
  c->r[4]=0u+0x803A0000u; // 800DA61C
  c->r[3]=c->r[30]+0x00000060u; // 800DA620
  c->r[4]=c->r[4]+0xFFFFE298u; // 800DA624
  c->lr=0x800DA62Cu; f_800361A0(c); // 800DA628
  {uint32_t ea=c->r[2]+0xFFFFA35Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA62C
  c->r[4]=c->r[30]+0x00000060u; // 800DA630
  {uint32_t ea=c->r[30]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA634
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DA638
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 800DA63C
  c->r[3]=c->r[3]+0x00000068u; // 800DA640
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[0]);} // 800DA644
  c->lr=0x800DA64Cu; f_800361A0(c); // 800DA648
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DA64C
  c->r[4]=c->r[30]+0x00000038u; // 800DA650
  c->r[3]=c->r[3]+0x0000005Cu; // 800DA654
  c->lr=0x800DA65Cu; f_800361A0(c); // 800DA658
  c->r[3]=c->r[30]|c->r[30]; // 800DA65C
  c->lr=0x800DA664u; f_800DA820(c); // 800DA660
  c->r[3]=R32(c->r[30]+0x0000043Cu); // 800DA664
  c->r[4]=R32(c->r[30]+0x00000078u); // 800DA668
  c->lr=0x800DA670u; f_800B2E70(c); // 800DA66C
  c->r[31]=0u+0x00000000u; // 800DA670
L_800DA674:;
  c->r[3]=R32(c->r[30]+0x0000043Cu); // 800DA674
  c->r[4]=R32(c->r[30]+0x00000074u); // 800DA678
  c->lr=0x800DA680u; f_8017FC44(c); // 800DA67C
  c->r[31]=c->r[31]+0x00000001u; // 800DA680
  cmps(c,0,(int32_t)c->r[31],16); // 800DA684
  if (crb(c,0)) { IRQCHK(c); goto L_800DA674; } // 800DA688
  c->r[3]=c->r[30]|c->r[30]; // 800DA68C
  c->lr=0x800DA694u; f_800DA9F4(c); // 800DA690
  c->r[3]=c->r[30]|c->r[30]; // 800DA694
  c->lr=0x800DA69Cu; f_800DAB88(c); // 800DA698
  c->r[3]=c->r[30]|c->r[30]; // 800DA69C
  c->lr=0x800DA6A4u; f_801F56F4(c); // 800DA6A0
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800DA6A4
  c->r[0]=R32(c->r[1]+0x00000084u); // 800DA6A8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800DA6AC
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800DA6B0
  c->r[30]=R32(c->r[1]+0x00000068u); // 800DA6B4
  c->lr=c->r[0]; // 800DA6B8
  c->r[1]=c->r[1]+0x00000080u; // 800DA6BC
  return; // 800DA6C0
}

// fn_800DA6C4
void f_800DA6C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA6C4
  c->r[0]=c->lr; // 800DA6C8
  c->r[7]=0u+0x803D0000u; // 800DA6CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA6D0
  c->r[4]=c->r[1]+0x00000008u; // 800DA6D4
  {uint32_t ea=c->r[7]+0x000026BCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800DA6D8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DA6DC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DA6E0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DA6E4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DA6E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DA6EC
  c->lr=0x800DA6F4u; f_800DA3AC(c); // 800DA6F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA6F4
  c->lr=c->r[0]; // 800DA6F8
  c->r[1]=c->r[1]+0x00000020u; // 800DA6FC
  return; // 800DA700
}

// fn_800DA704
void f_800DA704(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA704
  c->r[0]=c->lr; // 800DA708
  W32(c->r[1]+0x00000084u,c->r[0]); // 800DA70C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800DA710
  W32(c->r[1]+0x00000078u,c->r[30]); // 800DA714
  W32(c->r[1]+0x00000074u,c->r[29]); // 800DA718
  c->r[29]=c->r[3]|c->r[3]; // 800DA71C
  c->r[3]=R32(c->r[3]+0x00000074u); // 800DA720
  c->lr=0x800DA728u; f_80295AE8(c); // 800DA724
  c->r[30]=0u+0x803A0000u; // 800DA728
  c->r[5]=c->r[1]+0x0000002Cu; // 800DA72C
  c->r[31]=c->r[30]+0xFFFFE2D8u; // 800DA730
  c->r[4]=c->r[31]|c->r[31]; // 800DA734
  c->r[3]=c->r[31]+0x0000000Cu; // 800DA738
  c->lr=0x800DA740u; f_80296A70(c); // 800DA73C
  c->r[7]=0u+0x803A0000u; // 800DA740
  {uint32_t ea=c->r[7]+0xFFFFE308u; c->r[6]=R32(ea); c->r[7]=ea;} // 800DA744
  c->r[3]=c->r[1]+0x00000020u; // 800DA748
  c->r[4]=c->r[1]+0x00000008u; // 800DA74C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DA750
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DA754
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DA758
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DA75C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DA760
  c->lr=0x800DA768u; f_800361A0(c); // 800DA764
  c->r[3]=c->r[1]+0x0000002Cu; // 800DA768
  c->lr=0x800DA770u; f_80296B0C(c); // 800DA76C
  c->r[3]=c->r[1]+0x0000002Cu; // 800DA770
  c->r[4]=c->r[3]|c->r[3]; // 800DA774
  c->lr=0x800DA77Cu; f_80296AB0(c); // 800DA778
  c->r[3]=c->r[1]+0x0000002Cu; // 800DA77C
  c->r[4]=c->r[1]+0x00000020u; // 800DA780
  c->r[5]=c->r[1]+0x00000014u; // 800DA784
  c->lr=0x800DA78Cu; f_80296B70(c); // 800DA788
  c->r[3]=c->r[1]+0x00000014u; // 800DA78C
  c->r[4]=c->r[1]+0x0000002Cu; // 800DA790
  c->r[5]=c->r[1]+0x00000020u; // 800DA794
  c->lr=0x800DA79Cu; f_80296B70(c); // 800DA798
  c->r[3]=R32(c->r[29]+0x00000074u); // 800DA79C
  c->r[4]=c->r[1]+0x00000038u; // 800DA7A0
  c->lr=0x800DA7A8u; f_80295B14(c); // 800DA7A4
  c->r[3]=c->r[1]+0x00000038u; // 800DA7A8
  c->r[4]=c->r[1]+0x0000002Cu; // 800DA7AC
  c->lr=0x800DA7B4u; f_800361A0(c); // 800DA7B0
  c->r[3]=c->r[1]+0x00000048u; // 800DA7B4
  c->r[4]=c->r[1]+0x00000020u; // 800DA7B8
  c->lr=0x800DA7C0u; f_800361A0(c); // 800DA7BC
  c->r[3]=c->r[1]+0x00000058u; // 800DA7C0
  c->r[4]=c->r[1]+0x00000014u; // 800DA7C4
  c->lr=0x800DA7CCu; f_800361A0(c); // 800DA7C8
  c->r[3]=c->r[1]+0x00000038u; // 800DA7CC
  c->r[4]=c->r[3]|c->r[3]; // 800DA7D0
  c->lr=0x800DA7D8u; f_80295DAC(c); // 800DA7D4
  {uint32_t ea=c->r[30]+0xFFFFE2D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA7D8
  c->r[3]=c->r[1]+0x00000038u; // 800DA7DC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA7E0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA7E4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 800DA7E8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800DA7EC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 800DA7F0
  c->r[4]=R32(c->r[29]+0x00000074u); // 800DA7F4
  c->lr=0x800DA7FCu; f_80295B14(c); // 800DA7F8
  c->r[0]=R32(c->r[1]+0x00000084u); // 800DA7FC
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800DA800
  c->r[30]=R32(c->r[1]+0x00000078u); // 800DA804
  c->r[29]=R32(c->r[1]+0x00000074u); // 800DA808
  c->lr=c->r[0]; // 800DA80C
  c->r[1]=c->r[1]+0x00000080u; // 800DA810
  return; // 800DA814
}

// fn_800DA818
void f_800DA818(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000089u); // 800DA818
  return; // 800DA81C
}

// fn_800DA820
void f_800DA820(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA820
  c->r[0]=c->lr; // 800DA824
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800DA828
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800DA82C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800DA830
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 800DA834
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 800DA838
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 800DA83C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 800DA840
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 800DA844
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 800DA848
  c->r[5]=c->r[1]+0x00000034u; // 800DA84C
  c->r[4]=0u+0x00000000u; // 800DA850
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800DA854
  W32(c->r[1]+0x00000058u,c->r[30]); // 800DA858
  W32(c->r[1]+0x00000054u,c->r[29]); // 800DA85C
  W32(c->r[1]+0x00000050u,c->r[28]); // 800DA860
  c->r[28]=c->r[3]|c->r[3]; // 800DA864
  c->r[3]=R32(c->r[3]+0x0000043Cu); // 800DA868
  c->lr=0x800DA870u; f_800B31F4(c); // 800DA86C
  {uint32_t ea=c->r[2]+0xFFFFA358u; c->f[29]=c->ps1[29]=RF32(ea);} // 800DA870
  c->r[30]=0u+0x00000001u; // 800DA874
L_800DA878:;
  c->r[3]=c->r[1]+0x00000028u; // 800DA878
  c->r[4]=c->r[1]+0x00000034u; // 800DA87C
  c->lr=0x800DA884u; f_800361A0(c); // 800DA880
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800DA884
  c->r[4]=c->r[30]|c->r[30]; // 800DA888
  c->r[5]=c->r[1]+0x00000034u; // 800DA88C
  c->lr=0x800DA894u; f_800B31F4(c); // 800DA890
  c->r[3]=c->r[1]+0x00000034u; // 800DA894
  c->r[4]=c->r[1]+0x00000028u; // 800DA898
  c->r[5]=c->r[1]+0x0000001Cu; // 800DA89C
  c->lr=0x800DA8A4u; f_80296A70(c); // 800DA8A0
  c->r[3]=c->r[1]+0x0000001Cu; // 800DA8A4
  c->r[4]=c->r[1]+0x00000010u; // 800DA8A8
  c->lr=0x800DA8B0u; f_80296AB0(c); // 800DA8AC
  c->r[3]=c->r[28]+0x00000038u; // 800DA8B0
  c->r[4]=c->r[1]+0x00000028u; // 800DA8B4
  c->r[5]=c->r[1]+0x0000001Cu; // 800DA8B8
  c->lr=0x800DA8C0u; f_80296A70(c); // 800DA8BC
  c->r[3]=c->r[1]+0x00000010u; // 800DA8C0
  c->r[4]=c->r[1]+0x0000001Cu; // 800DA8C4
  c->lr=0x800DA8CCu; f_80296B50(c); // 800DA8C8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800DA8CC
  c->r[3]=c->r[28]+0x00000038u; // 800DA8D0
  c->r[4]=c->r[1]+0x00000034u; // 800DA8D4
  c->r[5]=c->r[1]+0x0000001Cu; // 800DA8D8
  c->lr=0x800DA8E0u; f_80296A70(c); // 800DA8DC
  c->r[3]=c->r[1]+0x00000010u; // 800DA8E0
  c->r[4]=c->r[1]+0x0000001Cu; // 800DA8E4
  c->lr=0x800DA8ECu; f_80296B50(c); // 800DA8E8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800DA8EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DA8F0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800DA8F4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[0]); // 800DA8F8
  fcmp(c,0,c->f[1],c->f[29]); // 800DA8FC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DA900
  if (!crb(c,2)) { goto L_800DA9A8; } // 800DA904
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800DA908
  c->r[31]=0u+0x43300000u; // 800DA90C
  W32(c->r[1]+0x00000044u,c->r[30]); // 800DA910
  c->r[29]=0u+0x00000000u; // 800DA914
  {uint32_t ea=c->r[2]+0xFFFFA388u; c->f[2]=RF64(ea);} // 800DA918
  c->f[28]=c->ps1[28]=S(c->f[3]/c->f[0]); // 800DA91C
  W32(c->r[1]+0x00000040u,c->r[31]); // 800DA920
  {uint32_t ea=c->r[2]+0xFFFFA368u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA924
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 800DA928
  W32(c->r[28]+0x00000078u,c->r[30]); // 800DA92C
  {uint32_t ea=c->r[2]+0xFFFFA390u; c->f[30]=RF64(ea);} // 800DA930
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800DA934
  {uint32_t ea=c->r[2]+0xFFFFA380u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DA938
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[1]); // 800DA93C
  c->f[29]=c->ps1[29]=S(c->f[0]-c->f[28]); // 800DA940
L_800DA944:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[30]); // 800DA944
  if (!crb(c,1)) { goto L_800DA96C; } // 800DA948
  c->r[0]=addc(c,~c->r[29],0x0000001Au,1); // 800DA94C
  W32(c->r[1]+0x00000040u,c->r[31]); // 800DA950
  c->r[0]=c->r[0]^0x80000000u; // 800DA954
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DA958
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 800DA95C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800DA960
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[29]); // 800DA964
  goto L_800DA984; // 800DA968
L_800DA96C:;
  c->r[0]=c->r[29]^0x80000000u; // 800DA96C
  W32(c->r[1]+0x00000048u,c->r[31]); // 800DA970
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800DA974
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800DA978
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800DA97C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[28]); // 800DA980
L_800DA984:;
  {uint32_t ea=c->r[13]+0xFFFF8520u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA984
  c->r[4]=c->r[29]|c->r[29]; // 800DA988
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800DA98C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[0],c->f[31])); // 800DA990
  c->lr=0x800DA998u; f_800B31BC(c); // 800DA994
  c->r[29]=c->r[29]+0x00000001u; // 800DA998
  cmps(c,0,(int32_t)c->r[29],26); // 800DA99C
  if (crb(c,0)) { IRQCHK(c); goto L_800DA944; } // 800DA9A0
  goto L_800DA9B4; // 800DA9A4
L_800DA9A8:;
  c->r[30]=c->r[30]+0x00000001u; // 800DA9A8
  cmps(c,0,(int32_t)c->r[30],27); // 800DA9AC
  if (crb(c,0)) { IRQCHK(c); goto L_800DA878; } // 800DA9B0
L_800DA9B4:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800DA9B4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800DA9B8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 800DA9BC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 800DA9C0
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 800DA9C4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 800DA9C8
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,28,ea,0,0);} // 800DA9CC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 800DA9D0
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800DA9D4
  c->r[30]=R32(c->r[1]+0x00000058u); // 800DA9D8
  c->r[29]=R32(c->r[1]+0x00000054u); // 800DA9DC
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800DA9E0
  c->r[28]=R32(c->r[1]+0x00000050u); // 800DA9E4
  c->lr=c->r[0]; // 800DA9E8
  c->r[1]=c->r[1]+0x000000A0u; // 800DA9EC
  return; // 800DA9F0
}

// fn_800DA9F4
void f_800DA9F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA9F4
  c->r[0]=c->lr; // 800DA9F8
  W32(c->r[1]+0x00000074u,c->r[0]); // 800DA9FC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800DAA00
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800DAA04
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800DAA08
  W32(c->r[1]+0x00000058u,c->r[30]); // 800DAA0C
  c->r[30]=c->r[3]|c->r[3]; // 800DAA10
  c->lr=0x800DAA18u; f_800DA818(c); // 800DAA14
  cmps(c,0,(int32_t)c->r[3],0); // 800DAA18
  if (!crb(c,2)) { goto L_800DAB28; } // 800DAA1C
  c->r[3]=R32(c->r[30]+0x0000043Cu); // 800DAA20
  c->r[5]=c->r[1]+0x0000004Cu; // 800DAA24
  c->r[4]=0u+0x00000000u; // 800DAA28
  c->lr=0x800DAA30u; f_800B31F4(c); // 800DAA2C
  {uint32_t ea=c->r[2]+0xFFFFA358u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DAA30
  c->r[31]=0u+0x00000001u; // 800DAA34
L_800DAA38:;
  c->r[3]=c->r[1]+0x00000040u; // 800DAA38
  c->r[4]=c->r[1]+0x0000004Cu; // 800DAA3C
  c->lr=0x800DAA44u; f_800361A0(c); // 800DAA40
  c->r[3]=R32(c->r[30]+0x0000043Cu); // 800DAA44
  c->r[4]=c->r[31]|c->r[31]; // 800DAA48
  c->r[5]=c->r[1]+0x0000004Cu; // 800DAA4C
  c->lr=0x800DAA54u; f_800B31F4(c); // 800DAA50
  c->r[3]=c->r[1]+0x0000004Cu; // 800DAA54
  c->r[4]=c->r[1]+0x00000040u; // 800DAA58
  c->r[5]=c->r[1]+0x00000034u; // 800DAA5C
  c->lr=0x800DAA64u; f_80296A70(c); // 800DAA60
  c->r[3]=c->r[1]+0x00000034u; // 800DAA64
  c->r[4]=c->r[1]+0x0000001Cu; // 800DAA68
  c->lr=0x800DAA70u; f_80296AB0(c); // 800DAA6C
  c->r[3]=c->r[30]+0x00000038u; // 800DAA70
  c->r[4]=c->r[1]+0x00000040u; // 800DAA74
  c->r[5]=c->r[1]+0x00000028u; // 800DAA78
  c->lr=0x800DAA80u; f_80296A70(c); // 800DAA7C
  c->r[3]=c->r[1]+0x0000001Cu; // 800DAA80
  c->r[4]=c->r[1]+0x00000028u; // 800DAA84
  c->lr=0x800DAA8Cu; f_80296B50(c); // 800DAA88
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800DAA8C
  c->r[3]=c->r[30]+0x00000038u; // 800DAA90
  c->r[4]=c->r[1]+0x0000004Cu; // 800DAA94
  c->r[5]=c->r[1]+0x00000028u; // 800DAA98
  c->lr=0x800DAAA0u; f_80296A70(c); // 800DAA9C
  c->r[3]=c->r[1]+0x0000001Cu; // 800DAAA0
  c->r[4]=c->r[1]+0x00000028u; // 800DAAA4
  c->lr=0x800DAAACu; f_80296B50(c); // 800DAAA8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800DAAAC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DAAB0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800DAAB4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 800DAAB8
  fcmp(c,0,c->f[1],c->f[31]); // 800DAABC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DAAC0
  if (!crb(c,2)) { goto L_800DAB1C; } // 800DAAC4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800DAAC8
  c->r[3]=c->r[1]+0x00000034u; // 800DAACC
  c->r[4]=c->r[1]+0x00000028u; // 800DAAD0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[0]); // 800DAAD4
  c->lr=0x800DAADCu; f_80296A94(c); // 800DAAD8
  c->r[3]=c->r[1]+0x00000040u; // 800DAADC
  c->r[4]=c->r[1]+0x00000028u; // 800DAAE0
  c->r[5]=c->r[3]|c->r[3]; // 800DAAE4
  c->lr=0x800DAAECu; f_80296A4C(c); // 800DAAE8
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DAAEC
  c->r[3]=c->r[30]|c->r[30]; // 800DAAF0
  c->r[5]=R32(c->r[30]+0x00000038u); // 800DAAF4
  c->r[4]=c->r[1]+0x00000010u; // 800DAAF8
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 800DAAFC
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800DAB00
  W32(c->r[1]+0x00000010u,c->r[5]); // 800DAB04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAB08
  c->r[0]=R32(c->r[30]+0x00000040u); // 800DAB0C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800DAB10
  c->lr=0x800DAB18u; f_800DAB48(c); // 800DAB14
  goto L_800DAB28; // 800DAB18
L_800DAB1C:;
  c->r[31]=c->r[31]+0x00000001u; // 800DAB1C
  cmps(c,0,(int32_t)c->r[31],27); // 800DAB20
  if (crb(c,0)) { IRQCHK(c); goto L_800DAA38; } // 800DAB24
L_800DAB28:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800DAB28
  c->r[0]=R32(c->r[1]+0x00000074u); // 800DAB2C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800DAB30
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800DAB34
  c->r[30]=R32(c->r[1]+0x00000058u); // 800DAB38
  c->lr=c->r[0]; // 800DAB3C
  c->r[1]=c->r[1]+0x00000070u; // 800DAB40
  return; // 800DAB44
}

// fn_800DAB48
void f_800DAB48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAB48
  c->r[0]=c->lr; // 800DAB4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAB50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DAB54
  c->r[31]=c->r[3]|c->r[3]; // 800DAB58
  c->r[3]=c->r[3]+0x0000002Cu; // 800DAB5C
  c->lr=0x800DAB64u; f_800361A0(c); // 800DAB60
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DAB64
  {uint32_t ea=c->r[2]+0xFFFFA37Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DAB68
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DAB6C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800DAB70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DAB74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAB78
  c->lr=c->r[0]; // 800DAB7C
  c->r[1]=c->r[1]+0x00000010u; // 800DAB80
  return; // 800DAB84
}

// fn_800DAB88
void f_800DAB88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAB88
  c->r[0]=c->lr; // 800DAB8C
  W32(c->r[1]+0x00000154u,c->r[0]); // 800DAB90
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[31]);} // 800DAB94
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,31,ea,0,0);} // 800DAB98
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[30]);} // 800DAB9C
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,30,ea,0,0);} // 800DABA0
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[29]);} // 800DABA4
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,29,ea,0,0);} // 800DABA8
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[28]);} // 800DABAC
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,28,ea,0,0);} // 800DABB0
  c->r[11]=c->r[1]+0x00000110u; // 800DABB4
  c->lr=0x800DABBCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DABB8
  c->r[25]=c->r[3]|c->r[3]; // 800DABBC
  c->r[26]=R32(c->r[3]+0x0000007Cu); // 800DABC0
  c->r[3]=R32(c->r[3]+0x0000043Cu); // 800DABC4
  c->r[4]=c->r[1]+0x00000090u; // 800DABC8
  c->r[5]=0u+0x00000000u; // 800DABCC
  c->lr=0x800DABD4u; f_800B35E0(c); // 800DABD0
  c->r[3]=c->r[1]+0x00000054u; // 800DABD4
  c->r[4]=c->r[1]+0x0000003Cu; // 800DABD8
  c->r[5]=c->r[1]+0x00000024u; // 800DABDC
  c->r[6]=c->r[1]+0x00000090u; // 800DABE0
  c->r[7]=0u+0x00000000u; // 800DABE4
  c->lr=0x800DABECu; f_8002BE64(c); // 800DABE8
  c->r[29]=0u+0x803A0000u; // 800DABEC
  {uint32_t ea=c->r[2]+0xFFFFA3A0u; c->f[29]=c->ps1[29]=RF32(ea);} // 800DABF0
  {uint32_t ea=c->r[2]+0xFFFFA3A4u; c->f[30]=c->ps1[30]=RF32(ea);} // 800DABF4
  c->r[29]=c->r[29]+0xFFFFE314u; // 800DABF8
  {uint32_t ea=c->r[2]+0xFFFFA3A8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DABFC
  c->r[27]=0u+0x00000000u; // 800DAC00
  c->r[31]=0u+0x00000000u; // 800DAC04
  c->r[30]=0u+0x00000001u; // 800DAC08
L_800DAC0C:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 800DAC0C
  c->r[4]=0u+0x00000000u; // 800DAC10
  c->lr=0x800DAC18u; f_80039840(c); // 800DAC14
  cmps(c,0,(int32_t)c->r[3],0); // 800DAC18
  if (crb(c,2)) { goto L_800DADE4; } // 800DAC1C
  c->lr=0x800DAC24u; f_80251620(c); // 800DAC20
  c->r[28]=c->r[3]|c->r[3]; // 800DAC24
  c->r[3]=c->r[1]+0x00000090u; // 800DAC28
  c->r[4]=c->r[1]+0x000000C0u; // 800DAC2C
  c->lr=0x800DAC34u; f_80295DAC(c); // 800DAC30
  c->r[3]=c->r[1]+0x00000048u; // 800DAC34
  c->r[4]=c->r[1]+0x00000054u; // 800DAC38
  c->lr=0x800DAC40u; f_800361A0(c); // 800DAC3C
  c->r[3]=c->r[1]+0x00000030u; // 800DAC40
  c->r[4]=c->r[1]+0x0000003Cu; // 800DAC44
  c->lr=0x800DAC4Cu; f_800361A0(c); // 800DAC48
  c->r[3]=R32(c->r[25]+0x0000043Cu); // 800DAC4C
  c->r[4]=c->r[1]+0x00000090u; // 800DAC50
  c->r[5]=c->r[27]+0x00000001u; // 800DAC54
  c->lr=0x800DAC5Cu; f_800B35E0(c); // 800DAC58
  c->r[3]=c->r[1]+0x00000054u; // 800DAC5C
  c->r[4]=c->r[1]+0x0000003Cu; // 800DAC60
  c->r[5]=c->r[1]+0x00000024u; // 800DAC64
  c->r[6]=c->r[1]+0x00000090u; // 800DAC68
  c->r[7]=0u+0x00000000u; // 800DAC6C
  c->lr=0x800DAC74u; f_8002BE64(c); // 800DAC70
  c->r[3]=c->r[1]+0x00000054u; // 800DAC74
  c->r[4]=c->r[1]+0x00000048u; // 800DAC78
  c->r[5]=c->r[1]+0x00000018u; // 800DAC7C
  c->lr=0x800DAC84u; f_80296A70(c); // 800DAC80
  c->r[3]=c->r[1]+0x00000018u; // 800DAC84
  c->lr=0x800DAC8Cu; f_80296B0C(c); // 800DAC88
  c->f[28]=c->f[1]; // 800DAC8C
  c->r[3]=c->r[1]+0x00000018u; // 800DAC90
  {uint32_t ea=c->r[2]+0xFFFFA398u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DAC94
  c->r[4]=c->r[3]|c->r[3]; // 800DAC98
  c->lr=0x800DACA0u; f_80296A94(c); // 800DAC9C
  c->r[3]=c->r[1]+0x00000048u; // 800DACA0
  c->r[4]=c->r[1]+0x00000018u; // 800DACA4
  c->r[5]=c->r[3]|c->r[3]; // 800DACA8
  c->lr=0x800DACB0u; f_80296A4C(c); // 800DACAC
  c->r[3]=c->r[1]+0x00000018u; // 800DACB0
  c->r[4]=c->r[3]|c->r[3]; // 800DACB4
  c->lr=0x800DACBCu; f_80296AB0(c); // 800DACB8
  c->r[3]=c->r[1]+0x00000030u; // 800DACBC
  c->r[4]=c->r[1]+0x000000D0u; // 800DACC0
  c->lr=0x800DACC8u; f_800361A0(c); // 800DACC4
  c->r[3]=c->r[1]+0x00000018u; // 800DACC8
  c->r[4]=c->r[1]+0x00000030u; // 800DACCC
  c->r[5]=c->r[1]+0x00000024u; // 800DACD0
  c->lr=0x800DACD8u; f_80296B70(c); // 800DACD4
  c->r[3]=c->r[1]+0x00000024u; // 800DACD8
  c->r[4]=c->r[1]+0x00000018u; // 800DACDC
  c->r[5]=c->r[1]+0x00000030u; // 800DACE0
  c->lr=0x800DACE8u; f_80296B70(c); // 800DACE4
  c->r[3]=c->r[1]+0x000000C0u; // 800DACE8
  c->r[4]=c->r[1]+0x00000018u; // 800DACEC
  c->lr=0x800DACF4u; f_800361A0(c); // 800DACF0
  c->r[3]=c->r[1]+0x000000D0u; // 800DACF4
  c->r[4]=c->r[1]+0x00000030u; // 800DACF8
  c->lr=0x800DAD00u; f_800361A0(c); // 800DACFC
  c->r[3]=c->r[1]+0x000000E0u; // 800DAD00
  c->r[4]=c->r[1]+0x00000024u; // 800DAD04
  c->lr=0x800DAD0Cu; f_800361A0(c); // 800DAD08
  c->r[3]=c->r[1]+0x000000C0u; // 800DAD0C
  c->r[4]=c->r[3]|c->r[3]; // 800DAD10
  c->lr=0x800DAD18u; f_80295DAC(c); // 800DAD14
  {uint32_t ea=c->r[2]+0xFFFFA39Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DAD18
  c->r[3]=c->r[1]+0x00000060u; // 800DAD1C
  c->r[4]=0u+0x00000058u; // 800DAD20
  c->lr=0x800DAD28u; f_80295FBC(c); // 800DAD24
  c->r[3]=c->r[1]+0x000000C0u; // 800DAD28
  c->r[4]=c->r[1]+0x00000060u; // 800DAD2C
  c->r[5]=c->r[3]|c->r[3]; // 800DAD30
  c->lr=0x800DAD38u; f_80295B48(c); // 800DAD34
  c->r[3]=c->r[1]+0x00000018u; // 800DAD38
  c->r[4]=c->r[1]+0x00000030u; // 800DAD3C
  c->r[5]=c->r[1]+0x00000024u; // 800DAD40
  c->r[6]=c->r[1]+0x000000C0u; // 800DAD44
  c->r[7]=0u+0x00000000u; // 800DAD48
  c->lr=0x800DAD50u; f_8002BE64(c); // 800DAD4C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DAD50
  c->r[3]=c->r[28]+0x00000040u; // 800DAD54
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DAD58
  c->r[4]=c->r[1]+0x00000048u; // 800DAD5C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[29]); // 800DAD60
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800DAD64
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 800DAD68
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800DAD6C
  c->lr=0x800DAD74u; f_800361A0(c); // 800DAD70
  c->r[3]=c->r[28]+0x0000004Cu; // 800DAD74
  c->r[4]=c->r[1]+0x00000030u; // 800DAD78
  c->lr=0x800DAD80u; f_800361A0(c); // 800DAD7C
  c->r[0]=R32(c->r[29]+0x00000000u); // 800DAD80
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[31]); // 800DAD84
  c->r[5]=R32(c->r[29]+0x00000004u); // 800DAD88
  c->r[3]=c->r[28]+0x00000058u; // 800DAD8C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DAD90
  c->r[4]=c->r[1]+0x00000008u; // 800DAD94
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DAD98
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DAD9C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DADA0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800DADA4
  c->lr=0x800DADACu; f_800361A0(c); // 800DADA8
  c->r[3]=R32(c->r[26]+0x00000000u); // 800DADAC
  c->r[4]=c->r[1]+0x00000048u; // 800DADB0
  c->r[3]=c->r[3]+0x0000002Cu; // 800DADB4
  c->lr=0x800DADBCu; f_800361A0(c); // 800DADB8
  c->r[3]=R32(c->r[26]+0x00000000u); // 800DADBC
  c->r[4]=c->r[1]+0x00000030u; // 800DADC0
  c->r[3]=c->r[3]+0x00000060u; // 800DADC4
  c->lr=0x800DADCCu; f_800361A0(c); // 800DADC8
  c->r[0]=R8(c->r[25]+0x0000006Fu); // 800DADCC
  cmps(c,0,(int32_t)c->r[0],0); // 800DADD0
  if (crb(c,2)) { goto L_800DADE0; } // 800DADD4
  W8(c->r[28]+0x00000000u,c->r[30]); // 800DADD8
  goto L_800DADE4; // 800DADDC
L_800DADE0:;
  W8(c->r[28]+0x00000000u,c->r[31]); // 800DADE0
L_800DADE4:;
  c->r[27]=c->r[27]+0x00000001u; // 800DADE4
  c->r[26]=c->r[26]+0x00000004u; // 800DADE8
  cmps(c,0,(int32_t)c->r[27],26); // 800DADEC
  if (crb(c,0)) { IRQCHK(c); goto L_800DAC0C; } // 800DADF0
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,31,ea,0,0);} // 800DADF4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[31]=RF64(ea);} // 800DADF8
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,30,ea,0,0);} // 800DADFC
  {uint32_t ea=c->r[1]+0x00000130u; c->f[30]=RF64(ea);} // 800DAE00
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,29,ea,0,0);} // 800DAE04
  {uint32_t ea=c->r[1]+0x00000120u; c->f[29]=RF64(ea);} // 800DAE08
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,28,ea,0,0);} // 800DAE0C
  c->r[11]=c->r[1]+0x00000110u; // 800DAE10
  {uint32_t ea=c->r[1]+0x00000110u; c->f[28]=RF64(ea);} // 800DAE14
  c->lr=0x800DAE1Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DAE18
  c->r[0]=R32(c->r[1]+0x00000154u); // 800DAE1C
  c->lr=c->r[0]; // 800DAE20
  c->r[1]=c->r[1]+0x00000150u; // 800DAE24
  return; // 800DAE28
}

// fn_800DAE2C
void f_800DAE2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAE2C
  c->r[0]=c->lr; // 800DAE30
  cmps(c,0,(int32_t)c->r[3],0); // 800DAE34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAE38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DAE3C
  c->r[31]=c->r[4]|c->r[4]; // 800DAE40
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DAE44
  c->r[30]=c->r[3]|c->r[3]; // 800DAE48
  if (crb(c,2)) { goto L_800DAE68; } // 800DAE4C
  c->r[4]=0u+0x00000000u; // 800DAE50
  c->lr=0x800DAE58u; f_8026A06C(c); // 800DAE54
  cmps(c,0,(int32_t)c->r[31],0); // 800DAE58
  if (!crb(c,1)) { goto L_800DAE68; } // 800DAE5C
  c->r[3]=c->r[30]|c->r[30]; // 800DAE60
  c->lr=0x800DAE68u; f_8026A268(c); // 800DAE64
L_800DAE68:;
  c->r[3]=c->r[30]|c->r[30]; // 800DAE68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DAE6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DAE70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAE74
  c->lr=c->r[0]; // 800DAE78
  c->r[1]=c->r[1]+0x00000010u; // 800DAE7C
  return; // 800DAE80
}

// fn_800DAE84
void f_800DAE84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAE84
  c->r[0]=c->lr; // 800DAE88
  c->r[4]=0u+0x00000000u; // 800DAE8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAE90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DAE94
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DAE98
  c->r[30]=c->r[3]|c->r[3]; // 800DAE9C
  c->lr=0x800DAEA4u; f_801F57D0(c); // 800DAEA0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800DAEA4
  c->r[3]=c->r[30]|c->r[30]; // 800DAEA8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800DAEAC
  c->ctr=c->r[12]; // 800DAEB0
  if (true) { c->lr=0x800DAEB8u; dispatch(c,c->ctr); } // 800DAEB4
  c->r[3]=c->r[30]|c->r[30]; // 800DAEB8
  c->lr=0x800DAEC0u; f_801F4B94(c); // 800DAEBC
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800DAEC0
  c->r[4]=0u+0x00000003u; // 800DAEC4
  c->r[3]=0u+0x0000003Fu; // 800DAEC8
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800DAECC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800DAED0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DAED4
  W8(c->r[30]+0x0000006Du,c->r[3]); // 800DAED8
  c->r[3]=c->r[30]|c->r[30]; // 800DAEDC
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800DAEE0
  c->lr=0x800DAEE8u; f_801F58BC(c); // 800DAEE4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DAEE8
  c->r[31]=0u+0x00000001u; // 800DAEEC
  c->r[4]=0u+0x803A0000u; // 800DAEF0
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800DAEF4
  c->r[4]=c->r[4]+0xFFFFE358u; // 800DAEF8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DAEFC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DAF00
  c->lr=0x800DAF08u; f_80256EC4(c); // 800DAF04
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DAF08
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800DAF0C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DAF10
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DAF14
  c->lr=0x800DAF1Cu; f_802501B0(c); // 800DAF18
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DAF1C
  c->r[0]=0u+0x00000000u; // 800DAF20
  c->r[3]=c->r[30]|c->r[30]; // 800DAF24
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800DAF28
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800DAF2C
  c->lr=0x800DAF34u; f_801F56F4(c); // 800DAF30
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800DAF34
  c->r[3]=c->r[30]|c->r[30]; // 800DAF38
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DAF3C
  c->ctr=c->r[12]; // 800DAF40
  if (true) { c->lr=0x800DAF48u; dispatch(c,c->ctr); } // 800DAF44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAF48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DAF4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DAF50
  c->lr=c->r[0]; // 800DAF54
  c->r[1]=c->r[1]+0x00000010u; // 800DAF58
  return; // 800DAF5C
}

// fn_800DAF60
void f_800DAF60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAF60
  c->r[0]=c->lr; // 800DAF64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAF68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DAF6C
  c->r[31]=c->r[3]|c->r[3]; // 800DAF70
  c->lr=0x800DAF78u; f_800DB004(c); // 800DAF74
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DAF78
  c->r[3]=c->r[31]|c->r[31]; // 800DAF7C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800DAF80
  c->ctr=c->r[12]; // 800DAF84
  if (true) { c->lr=0x800DAF8Cu; dispatch(c,c->ctr); } // 800DAF88
  c->r[3]=c->r[31]|c->r[31]; // 800DAF8C
  c->lr=0x800DAF94u; f_801F4C0C(c); // 800DAF90
  c->r[3]=c->r[31]|c->r[31]; // 800DAF94
  c->lr=0x800DAF9Cu; f_801F56F4(c); // 800DAF98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAF9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DAFA0
  c->lr=c->r[0]; // 800DAFA4
  c->r[1]=c->r[1]+0x00000010u; // 800DAFA8
  return; // 800DAFAC
}

// fn_800DAFB0
void f_800DAFB0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800DAFB0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DAFB4
  f_802501B0(c); return; // 800DAFB8
}

// fn_800DAFBC
void f_800DAFBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAFBC
  c->r[0]=c->lr; // 800DAFC0
  c->r[6]=0u+0x803D0000u; // 800DAFC4
  c->r[5]=0u+0x00000000u; // 800DAFC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAFCC
  c->r[6]=c->r[6]+0x00002760u; // 800DAFD0
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800DAFD4
  c->r[3]=R32(c->r[3]+0x00000394u); // 800DAFD8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DAFDC
  c->r[4]=c->r[3]+0x0000010Cu; // 800DAFE0
  c->r[3]=R32(c->r[6]+c->r[0]); // 800DAFE4
  c->lr=0x800DAFECu; f_8024EE50(c); // 800DAFE8
  c->r[0]=cntlz(c->r[3]); // 800DAFEC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DAFF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAFF4
  c->lr=c->r[0]; // 800DAFF8
  c->r[1]=c->r[1]+0x00000010u; // 800DAFFC
  return; // 800DB000
}

// fn_800DB004
void f_800DB004(Ctx* __restrict c) {
  return; // 800DB004
}

// fn_800DB008
void f_800DB008(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800DB008
}

// fn_800DB00C
void f_800DB00C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB00C
  c->r[0]=c->lr; // 800DB010
  c->r[7]=0u+0x803D0000u; // 800DB014
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB018
  c->r[4]=c->r[1]+0x00000008u; // 800DB01C
  {uint32_t ea=c->r[7]+0x0000276Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800DB020
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DB024
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DB028
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DB02C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DB030
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DB034
  c->lr=0x800DB03Cu; f_800DB04C(c); // 800DB038
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB03C
  c->lr=c->r[0]; // 800DB040
  c->r[1]=c->r[1]+0x00000020u; // 800DB044
  return; // 800DB048
}

// fn_800DB04C
void f_800DB04C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB04C
  c->r[0]=c->lr; // 800DB050
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB054
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB058
  c->r[31]=c->r[4]|c->r[4]; // 800DB05C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DB060
  c->r[30]=c->r[3]|c->r[3]; // 800DB064
  c->r[3]=c->r[31]|c->r[31]; // 800DB068
  c->lr=0x800DB070u; f_802B9FDC(c); // 800DB06C
  cmps(c,0,(int32_t)c->r[3],0); // 800DB070
  if (crb(c,2)) { goto L_800DB090; } // 800DB074
  c->r[3]=R32(c->r[31]+0x00000000u); // 800DB078
  c->r[0]=R32(c->r[31]+0x00000004u); // 800DB07C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800DB080
  W32(c->r[30]+0x00000020u,c->r[0]); // 800DB084
  c->r[0]=R32(c->r[31]+0x00000008u); // 800DB088
  W32(c->r[30]+0x00000024u,c->r[0]); // 800DB08C
L_800DB090:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB090
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB094
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DB098
  c->lr=c->r[0]; // 800DB09C
  c->r[1]=c->r[1]+0x00000010u; // 800DB0A0
  return; // 800DB0A4
}

// fn_800DB0A8
void f_800DB0A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB0A8
  c->r[0]=c->lr; // 800DB0AC
  cmps(c,0,(int32_t)c->r[3],0); // 800DB0B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB0B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB0B8
  c->r[31]=c->r[4]|c->r[4]; // 800DB0BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DB0C0
  c->r[30]=c->r[3]|c->r[3]; // 800DB0C4
  if (crb(c,2)) { goto L_800DB0E4; } // 800DB0C8
  c->r[4]=0u+0x00000000u; // 800DB0CC
  c->lr=0x800DB0D4u; f_8026A06C(c); // 800DB0D0
  cmps(c,0,(int32_t)c->r[31],0); // 800DB0D4
  if (!crb(c,1)) { goto L_800DB0E4; } // 800DB0D8
  c->r[3]=c->r[30]|c->r[30]; // 800DB0DC
  c->lr=0x800DB0E4u; f_8026A268(c); // 800DB0E0
L_800DB0E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB0E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB0E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DB0EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB0F0
  c->lr=c->r[0]; // 800DB0F4
  c->r[1]=c->r[1]+0x00000010u; // 800DB0F8
  return; // 800DB0FC
}

// fn_800DB100
void f_800DB100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB100
  c->r[0]=c->lr; // 800DB104
  c->r[4]=0u+0x00000000u; // 800DB108
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB10C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DB110
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DB114
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DB118
  W32(c->r[1]+0x00000010u,c->r[28]); // 800DB11C
  c->r[28]=c->r[3]|c->r[3]; // 800DB120
  c->lr=0x800DB128u; f_801F57D0(c); // 800DB124
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800DB128
  c->r[3]=c->r[28]|c->r[28]; // 800DB12C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800DB130
  c->ctr=c->r[12]; // 800DB134
  if (true) { c->lr=0x800DB13Cu; dispatch(c,c->ctr); } // 800DB138
  c->r[3]=c->r[28]|c->r[28]; // 800DB13C
  c->lr=0x800DB144u; f_801F4B94(c); // 800DB140
  c->r[0]=R16(c->r[28]+0x000003BEu); // 800DB144
  c->r[4]=0u+0x00000003u; // 800DB148
  c->r[3]=0u+0x00000040u; // 800DB14C
  W8(c->r[28]+0x0000006Cu,c->r[4]); // 800DB150
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800DB154
  c->r[4]=R32(c->r[28]+0x00000394u); // 800DB158
  W8(c->r[28]+0x0000006Du,c->r[3]); // 800DB15C
  c->r[3]=c->r[28]|c->r[28]; // 800DB160
  W16(c->r[28]+0x000003BEu,c->r[0]); // 800DB164
  c->lr=0x800DB16Cu; f_801F58BC(c); // 800DB168
  c->r[3]=R32(c->r[28]+0x00000394u); // 800DB16C
  c->r[29]=0u+0x00000001u; // 800DB170
  c->r[30]=0u+0x803A0000u; // 800DB174
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800DB178
  c->r[4]=c->r[30]+0xFFFFE368u; // 800DB17C
  c->r[3]=R32(c->r[28]+0x00000394u); // 800DB180
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DB184
  c->lr=0x800DB18Cu; f_80256EC4(c); // 800DB188
  c->r[4]=R32(c->r[28]+0x00000394u); // 800DB18C
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800DB190
  c->r[3]=R32(c->r[28]+0x00000394u); // 800DB194
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DB198
  c->lr=0x800DB1A0u; f_802501B0(c); // 800DB19C
  c->r[4]=R32(c->r[28]+0x00000394u); // 800DB1A0
  c->r[31]=0u+0x00000000u; // 800DB1A4
  c->r[3]=c->r[30]+0xFFFFE368u; // 800DB1A8
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800DB1AC
  c->r[4]=c->r[3]+0x00000009u; // 800DB1B0
  W8(c->r[28]+0x0000006Fu,c->r[29]); // 800DB1B4
  c->r[3]=R32(c->r[28]+0x00000394u); // 800DB1B8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DB1BC
  c->lr=0x800DB1C4u; f_80256EC4(c); // 800DB1C0
  c->r[0]=0u+0x000000FFu; // 800DB1C4
  W32(c->r[28]+0x00000074u,c->r[3]); // 800DB1C8
  c->r[3]=c->r[28]|c->r[28]; // 800DB1CC
  W8(c->r[28]+0x00000078u,c->r[31]); // 800DB1D0
  W32(c->r[28]+0x00000088u,c->r[0]); // 800DB1D4
  c->lr=0x800DB1DCu; f_801F56F4(c); // 800DB1D8
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800DB1DC
  c->r[3]=c->r[28]|c->r[28]; // 800DB1E0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DB1E4
  c->ctr=c->r[12]; // 800DB1E8
  if (true) { c->lr=0x800DB1F0u; dispatch(c,c->ctr); } // 800DB1EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB1F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DB1F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DB1F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DB1FC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800DB200
  c->lr=c->r[0]; // 800DB204
  c->r[1]=c->r[1]+0x00000020u; // 800DB208
  return; // 800DB20C
}

// fn_800DB210
void f_800DB210(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB210
  c->r[0]=c->lr; // 800DB214
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB218
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB21C
  c->r[31]=c->r[3]|c->r[3]; // 800DB220
  c->lr=0x800DB228u; f_800DB2F8(c); // 800DB224
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DB228
  c->r[3]=c->r[31]|c->r[31]; // 800DB22C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800DB230
  c->ctr=c->r[12]; // 800DB234
  if (true) { c->lr=0x800DB23Cu; dispatch(c,c->ctr); } // 800DB238
  c->r[3]=c->r[31]|c->r[31]; // 800DB23C
  c->lr=0x800DB244u; f_801F4C0C(c); // 800DB240
  c->r[3]=c->r[31]|c->r[31]; // 800DB244
  c->lr=0x800DB24Cu; f_801F56F4(c); // 800DB248
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB24C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB250
  c->lr=c->r[0]; // 800DB254
  c->r[1]=c->r[1]+0x00000010u; // 800DB258
  return; // 800DB25C
}

// fn_800DB260
void f_800DB260(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800DB260
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DB264
  f_802501B0(c); return; // 800DB268
}

// fn_800DB26C
void f_800DB26C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB26C
  c->r[0]=c->lr; // 800DB270
  c->r[5]=0u+0x00000000u; // 800DB274
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB278
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800DB27C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DB280
  c->r[3]=c->r[13]+0xFFFF8538u; // 800DB284
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DB288
  c->r[3]=R32(c->r[3]+c->r[0]); // 800DB28C
  c->r[4]=c->r[4]+0x0000010Cu; // 800DB290
  c->lr=0x800DB298u; f_8024EE50(c); // 800DB294
  c->r[0]=cntlz(c->r[3]); // 800DB298
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DB29C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB2A0
  c->lr=c->r[0]; // 800DB2A4
  c->r[1]=c->r[1]+0x00000010u; // 800DB2A8
  return; // 800DB2AC
}

// fn_800DB2B0
void f_800DB2B0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800DB2B0
  W32(c->r[3]+0x00000088u,c->r[4]); // 800DB2B4
  W8(c->r[3]+0x00000078u,c->r[0]); // 800DB2B8
  return; // 800DB2BC
}

// fn_800DB2C0
void f_800DB2C0(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 800DB2C0
  c->r[0]=0u+0x000000FFu; // 800DB2C4
  W8(c->r[3]+0x00000078u,c->r[4]); // 800DB2C8
  W32(c->r[3]+0x00000088u,c->r[0]); // 800DB2CC
  return; // 800DB2D0
}

// fn_800DB2D4
void f_800DB2D4(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000078u); // 800DB2D4
  cmps(c,0,(int32_t)c->r[0],0); // 800DB2D8
  if (crb(c,2)) { goto L_800DB2EC; } // 800DB2DC
  c->r[0]=R32(c->r[3]+0x00000088u); // 800DB2E0
  W8(c->r[4]+0x00000000u,c->r[0]); // 800DB2E4
  return; // 800DB2E8
L_800DB2EC:;
  c->r[0]=0u+0x000000FFu; // 800DB2EC
  W8(c->r[4]+0x00000000u,c->r[0]); // 800DB2F0
  return; // 800DB2F4
}

// fn_800DB2F8
void f_800DB2F8(Ctx* __restrict c) {
  return; // 800DB2F8
}

// fn_800DB2FC
void f_800DB2FC(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800DB2FC
}

// fn_800DB300
void f_800DB300(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB300
  c->r[0]=c->lr; // 800DB304
  c->r[7]=0u+0x803D0000u; // 800DB308
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB30C
  c->r[4]=c->r[1]+0x00000008u; // 800DB310
  {uint32_t ea=c->r[7]+0x00002810u; c->r[6]=R32(ea); c->r[7]=ea;} // 800DB314
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DB318
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DB31C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DB320
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DB324
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DB328
  c->lr=0x800DB330u; f_800DB340(c); // 800DB32C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB330
  c->lr=c->r[0]; // 800DB334
  c->r[1]=c->r[1]+0x00000020u; // 800DB338
  return; // 800DB33C
}

// fn_800DB340
void f_800DB340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB340
  c->r[0]=c->lr; // 800DB344
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB348
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB34C
  c->r[31]=c->r[4]|c->r[4]; // 800DB350
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DB354
  c->r[30]=c->r[3]|c->r[3]; // 800DB358
  c->r[3]=c->r[31]|c->r[31]; // 800DB35C
  c->lr=0x800DB364u; f_802B9FDC(c); // 800DB360
  cmps(c,0,(int32_t)c->r[3],0); // 800DB364
  if (crb(c,2)) { goto L_800DB384; } // 800DB368
  c->r[3]=R32(c->r[31]+0x00000000u); // 800DB36C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800DB370
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800DB374
  W32(c->r[30]+0x00000020u,c->r[0]); // 800DB378
  c->r[0]=R32(c->r[31]+0x00000008u); // 800DB37C
  W32(c->r[30]+0x00000024u,c->r[0]); // 800DB380
L_800DB384:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB384
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB388
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DB38C
  c->lr=c->r[0]; // 800DB390
  c->r[1]=c->r[1]+0x00000010u; // 800DB394
  return; // 800DB398
}

// fn_800DB39C
void f_800DB39C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB39C
  c->r[0]=c->lr; // 800DB3A0
  cmps(c,0,(int32_t)c->r[3],0); // 800DB3A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB3A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB3AC
  c->r[31]=c->r[4]|c->r[4]; // 800DB3B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DB3B4
  c->r[30]=c->r[3]|c->r[3]; // 800DB3B8
  if (crb(c,2)) { goto L_800DB3D8; } // 800DB3BC
  c->r[4]=0u+0x00000000u; // 800DB3C0
  c->lr=0x800DB3C8u; f_8026A06C(c); // 800DB3C4
  cmps(c,0,(int32_t)c->r[31],0); // 800DB3C8
  if (!crb(c,1)) { goto L_800DB3D8; } // 800DB3CC
  c->r[3]=c->r[30]|c->r[30]; // 800DB3D0
  c->lr=0x800DB3D8u; f_8026A268(c); // 800DB3D4
L_800DB3D8:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB3D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB3DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DB3E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB3E4
  c->lr=c->r[0]; // 800DB3E8
  c->r[1]=c->r[1]+0x00000010u; // 800DB3EC
  return; // 800DB3F0
}

// fn_800DB3F4
void f_800DB3F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB3F4
  c->r[0]=c->lr; // 800DB3F8
  c->r[4]=0u+0x00000000u; // 800DB3FC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DB400
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800DB404
  c->r[31]=c->r[3]|c->r[3]; // 800DB408
  W32(c->r[1]+0x00000048u,c->r[30]); // 800DB40C
  W32(c->r[1]+0x00000044u,c->r[29]); // 800DB410
  c->lr=0x800DB418u; f_801F57D0(c); // 800DB414
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DB418
  c->r[3]=c->r[31]|c->r[31]; // 800DB41C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800DB420
  c->ctr=c->r[12]; // 800DB424
  if (true) { c->lr=0x800DB42Cu; dispatch(c,c->ctr); } // 800DB428
  c->r[3]=c->r[31]|c->r[31]; // 800DB42C
  c->lr=0x800DB434u; f_801F4B94(c); // 800DB430
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DB434
  c->r[4]=0u+0x00000003u; // 800DB438
  c->r[3]=0u+0x00000041u; // 800DB43C
  W8(c->r[31]+0x0000006Cu,c->r[4]); // 800DB440
  c->r[0]=c->r[0]|0x00000800u; // 800DB444
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DB448
  W8(c->r[31]+0x0000006Du,c->r[3]); // 800DB44C
  c->r[3]=c->r[31]|c->r[31]; // 800DB450
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800DB454
  c->lr=0x800DB45Cu; f_801F58BC(c); // 800DB458
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DB45C
  c->r[30]=0u+0x00000001u; // 800DB460
  c->r[29]=0u+0x803A0000u; // 800DB464
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800DB468
  c->r[4]=c->r[29]+0xFFFFE384u; // 800DB46C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DB470
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DB474
  c->lr=0x800DB47Cu; f_80256EC4(c); // 800DB478
  c->r[6]=R32(c->r[31]+0x00000394u); // 800DB47C
  c->r[5]=0u+0x805D0000u; // 800DB480
  c->r[4]=c->r[31]+0x0000002Cu; // 800DB484
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800DB488
  c->r[3]=c->r[5]+0x000078B0u; // 800DB48C
  c->lr=0x800DB494u; f_802351CC(c); // 800DB490
  c->r[5]=R32(c->r[31]+0x00000394u); // 800DB494
  c->r[4]=0u+0x00000000u; // 800DB498
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800DB49C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DB4A0
  W8(c->r[31]+0x0000006Fu,c->r[30]); // 800DB4A4
  c->r[0]=c->r[0]|0x00000004u; // 800DB4A8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DB4AC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800DB4B0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DB4B4
  c->lr=0x800DB4BCu; f_80259C78(c); // 800DB4B8
  {uint32_t ea=c->r[2]+0xFFFFA3C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB4BC
  c->r[3]=c->r[31]|c->r[31]; // 800DB4C0
  W8(c->r[31]+0x00000081u,c->r[30]); // 800DB4C4
  c->r[4]=0u+0x00000000u; // 800DB4C8
  c->f[2]=c->f[1]; // 800DB4CC
  c->r[5]=0u+0x00000001u; // 800DB4D0
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[1]);} // 800DB4D4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DB4D8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800DB4DC
  c->ctr=c->r[12]; // 800DB4E0
  if (true) { c->lr=0x800DB4E8u; dispatch(c,c->ctr); } // 800DB4E4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DB4E8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DB4EC
  c->lr=0x800DB4F4u; f_802501B0(c); // 800DB4F0
  c->r[3]=c->r[31]|c->r[31]; // 800DB4F4
  c->lr=0x800DB4FCu; f_801F56F4(c); // 800DB4F8
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)112); // 800DB4FC
  W32(c->r[31]+0x00000444u,c->r[30]); // 800DB500
  c->lr=0x800DB508u; f_8024E174(c); // 800DB504
  W32(c->r[31]+0x00000438u,c->r[3]); // 800DB508
  c->r[3]=c->r[31]|c->r[31]; // 800DB50C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DB510
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DB514
  c->ctr=c->r[12]; // 800DB518
  if (true) { c->lr=0x800DB520u; dispatch(c,c->ctr); } // 800DB51C
  c->r[30]=c->r[29]+0xFFFFE384u; // 800DB520
  c->r[29]=0u+0x80550000u; // 800DB524
  c->r[3]=c->r[29]+0xFFFFC848u; // 800DB528
  c->r[5]=0u+0x00000000u; // 800DB52C
  c->r[4]=c->r[30]+0x00000009u; // 800DB530
  c->r[6]=0u+0x00000000u; // 800DB534
  c->lr=0x800DB53Cu; f_8018D3E4(c); // 800DB538
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800DB53C
  W8(c->r[31]+0x00000083u,c->r[3]); // 800DB540
  cmpu(c,0,c->r[0],0x000000FFu); // 800DB544
  if (crb(c,2)) { goto L_800DB574; } // 800DB548
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DB54C
  c->r[4]=c->r[30]+0x0000000Du; // 800DB550
  c->r[5]=c->r[1]+0x00000008u; // 800DB554
  c->r[6]=0u+0x00000001u; // 800DB558
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DB55C
  c->lr=0x800DB564u; f_80257018(c); // 800DB560
  c->r[4]=R8(c->r[31]+0x00000083u); // 800DB564
  c->r[3]=c->r[29]+0xFFFFC848u; // 800DB568
  c->r[5]=c->r[1]+0x00000008u; // 800DB56C
  c->lr=0x800DB574u; f_8018DEB8(c); // 800DB570
L_800DB574:;
  c->r[3]=c->r[31]|c->r[31]; // 800DB574
  c->lr=0x800DB57Cu; f_800DC12C(c); // 800DB578
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DB57C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800DB580
  c->r[30]=R32(c->r[1]+0x00000048u); // 800DB584
  c->r[29]=R32(c->r[1]+0x00000044u); // 800DB588
  c->lr=c->r[0]; // 800DB58C
  c->r[1]=c->r[1]+0x00000050u; // 800DB590
  return; // 800DB594
}

// fn_800DB598
void f_800DB598(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB598
  c->r[0]=c->lr; // 800DB59C
  c->r[4]=0u+0x000000E1u; // 800DB5A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB5A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB5A8
  c->r[31]=c->r[3]|c->r[3]; // 800DB5AC
  c->r[3]=c->r[3]+0x00000210u; // 800DB5B0
  c->lr=0x800DB5B8u; f_80221630(c); // 800DB5B4
  cmps(c,0,(int32_t)c->r[3],0); // 800DB5B8
  if (!crb(c,2)) { goto L_800DB5C8; } // 800DB5BC
  c->r[3]=0u+0x00000000u; // 800DB5C0
  goto L_800DB5E4; // 800DB5C4
L_800DB5C8:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DB5C8
  c->r[3]=0u+0x000004C7u; // 800DB5CC
  c->r[5]=0u+0x00000000u; // 800DB5D0
  c->r[4]=c->r[4]+0x0000010Cu; // 800DB5D4
  c->lr=0x800DB5DCu; f_8024EE50(c); // 800DB5D8
  c->r[0]=cntlz(c->r[3]); // 800DB5DC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DB5E0
L_800DB5E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB5E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB5E8
  c->lr=c->r[0]; // 800DB5EC
  c->r[1]=c->r[1]+0x00000010u; // 800DB5F0
  return; // 800DB5F4
}

// fn_800DB5F8
void f_800DB5F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB5F8
  c->r[0]=c->lr; // 800DB5FC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DB600
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800DB604
  W32(c->r[1]+0x00000038u,c->r[30]); // 800DB608
  c->r[30]=c->r[3]|c->r[3]; // 800DB60C
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800DB610
  c->r[12]=R32(c->r[12]+0x00000068u); // 800DB614
  c->ctr=c->r[12]; // 800DB618
  if (true) { c->lr=0x800DB620u; dispatch(c,c->ctr); } // 800DB61C
  c->r[3]=c->r[30]|c->r[30]; // 800DB620
  c->lr=0x800DB628u; f_801F4C0C(c); // 800DB624
  c->r[3]=c->r[30]|c->r[30]; // 800DB628
  c->lr=0x800DB630u; f_800DC084(c); // 800DB62C
  c->r[3]=c->r[30]|c->r[30]; // 800DB630
  c->lr=0x800DB638u; f_801F56F4(c); // 800DB634
  c->r[0]=R8(c->r[30]+0x00000083u); // 800DB638
  cmpu(c,0,c->r[0],0x000000FFu); // 800DB63C
  if (crb(c,2)) { goto L_800DB6A8; } // 800DB640
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DB644
  c->r[4]=0u+0x803A0000u; // 800DB648
  c->r[4]=c->r[4]+0xFFFFE384u; // 800DB64C
  c->r[5]=c->r[1]+0x00000008u; // 800DB650
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DB654
  c->r[4]=c->r[4]+0x0000000Du; // 800DB658
  c->r[6]=0u+0x00000001u; // 800DB65C
  c->lr=0x800DB664u; f_80257018(c); // 800DB660
  c->r[31]=0u+0x80550000u; // 800DB664
  c->r[4]=R8(c->r[30]+0x00000083u); // 800DB668
  c->r[3]=c->r[31]+0xFFFFC848u; // 800DB66C
  c->r[5]=c->r[1]+0x00000008u; // 800DB670
  c->lr=0x800DB678u; f_8018DEB8(c); // 800DB674
  c->r[0]=R8(c->r[30]+0x0000006Fu); // 800DB678
  cmps(c,0,(int32_t)c->r[0],0); // 800DB67C
  if (!crb(c,2)) { goto L_800DB698; } // 800DB680
  c->r[4]=R8(c->r[30]+0x00000083u); // 800DB684
  c->r[3]=c->r[31]+0xFFFFC848u; // 800DB688
  c->r[5]=0u+0x00000001u; // 800DB68C
  c->lr=0x800DB694u; f_8018E2D4(c); // 800DB690
  goto L_800DB6A8; // 800DB694
L_800DB698:;
  c->r[4]=R8(c->r[30]+0x00000083u); // 800DB698
  c->r[3]=c->r[31]+0xFFFFC848u; // 800DB69C
  c->r[5]=0u+0x00000000u; // 800DB6A0
  c->lr=0x800DB6A8u; f_8018E2D4(c); // 800DB6A4
L_800DB6A8:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB6A8
  c->lr=0x800DB6B0u; f_800DC1D0(c); // 800DB6AC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DB6B0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DB6B4
  c->r[30]=R32(c->r[1]+0x00000038u); // 800DB6B8
  c->lr=c->r[0]; // 800DB6BC
  c->r[1]=c->r[1]+0x00000040u; // 800DB6C0
  return; // 800DB6C4
}

// fn_800DB6C8
void f_800DB6C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB6C8
  c->r[0]=c->lr; // 800DB6CC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DB6D0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800DB6D4
  c->r[31]=0u+0x803D0000u; // 800DB6D8
  c->r[31]=c->r[31]+0x000028B8u; // 800DB6DC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800DB6E0
  c->r[30]=c->r[3]|c->r[3]; // 800DB6E4
  c->lr=0x800DB6ECu; f_801F4F28(c); // 800DB6E8
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800DB6EC
  cmps(c,0,(int32_t)c->r[0],102); // 800DB6F0
  if (crb(c,2)) { goto L_800DB7A0; } // 800DB6F4
  if (!crb(c,0)) { goto L_800DB70C; } // 800DB6F8
  cmps(c,0,(int32_t)c->r[0],100); // 800DB6FC
  if (crb(c,2)) { goto L_800DB71C; } // 800DB700
  if (!crb(c,0)) { goto L_800DB788; } // 800DB704
  goto L_800DB82C; // 800DB708
L_800DB70C:;
  cmps(c,0,(int32_t)c->r[0],104); // 800DB70C
  if (crb(c,2)) { goto L_800DB800; } // 800DB710
  if (!crb(c,0)) { goto L_800DB82C; } // 800DB714
  goto L_800DB7D0; // 800DB718
L_800DB71C:;
  c->r[0]=0u+0x00000001u; // 800DB71C
  c->r[5]=R32(c->r[30]+0x00000394u); // 800DB720
  W8(c->r[30]+0x00000080u,c->r[0]); // 800DB724
  c->r[0]=0u+0x00000000u; // 800DB728
  c->r[3]=c->r[30]+0x0000002Cu; // 800DB72C
  c->r[4]=c->r[30]+0x00000060u; // 800DB730
  W8(c->r[5]+0x0000014Cu,c->r[0]); // 800DB734
  c->r[7]=0u+0x00000000u; // 800DB738
  c->r[5]=R32(c->r[30]+0x00000394u); // 800DB73C
  W8(c->r[5]+0x0000014Du,c->r[0]); // 800DB740
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800DB744
  c->r[6]=R32(c->r[30]+0x00000394u); // 800DB748
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800DB74C
  c->r[5]=c->r[6]+0x00000074u; // 800DB750
  c->r[6]=c->r[6]+0x000000B0u; // 800DB754
  c->lr=0x800DB75Cu; f_8002BE64(c); // 800DB758
  c->r[4]=c->r[31]+0x00000000u; // 800DB75C
  c->r[6]=R32(c->r[31]+0x00000000u); // 800DB760
  c->r[5]=R32(c->r[4]+0x00000004u); // 800DB764
  c->r[3]=c->r[30]|c->r[30]; // 800DB768
  c->r[0]=R32(c->r[4]+0x00000008u); // 800DB76C
  c->r[4]=c->r[1]+0x0000002Cu; // 800DB770
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800DB774
  W32(c->r[1]+0x00000030u,c->r[5]); // 800DB778
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DB77C
  c->lr=0x800DB784u; f_800DB844(c); // 800DB780
  goto L_800DB82C; // 800DB784
L_800DB788:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800DB788
  c->r[3]=c->r[30]|c->r[30]; // 800DB78C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DB790
  c->ctr=c->r[12]; // 800DB794
  if (true) { c->lr=0x800DB79Cu; dispatch(c,c->ctr); } // 800DB798
  goto L_800DB82C; // 800DB79C
L_800DB7A0:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800DB7A0
  c->r[5]=c->r[31]+0x0000000Cu; // 800DB7A4
  c->r[3]=c->r[30]|c->r[30]; // 800DB7A8
  c->r[4]=c->r[1]+0x00000020u; // 800DB7AC
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800DB7B0
  c->r[6]=R32(c->r[5]+0x00000004u); // 800DB7B4
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DB7B8
  W32(c->r[1]+0x00000020u,c->r[7]); // 800DB7BC
  W32(c->r[1]+0x00000024u,c->r[6]); // 800DB7C0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800DB7C4
  c->lr=0x800DB7CCu; f_800DB844(c); // 800DB7C8
  goto L_800DB82C; // 800DB7CC
L_800DB7D0:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800DB7D0
  c->r[5]=c->r[31]+0x00000018u; // 800DB7D4
  c->r[3]=c->r[30]|c->r[30]; // 800DB7D8
  c->r[4]=c->r[1]+0x00000014u; // 800DB7DC
  c->r[7]=R32(c->r[31]+0x00000018u); // 800DB7E0
  c->r[6]=R32(c->r[5]+0x00000004u); // 800DB7E4
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DB7E8
  W32(c->r[1]+0x00000014u,c->r[7]); // 800DB7EC
  W32(c->r[1]+0x00000018u,c->r[6]); // 800DB7F0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800DB7F4
  c->lr=0x800DB7FCu; f_800DB844(c); // 800DB7F8
  goto L_800DB82C; // 800DB7FC
L_800DB800:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800DB800
  c->r[5]=c->r[31]+0x00000024u; // 800DB804
  c->r[3]=c->r[30]|c->r[30]; // 800DB808
  c->r[4]=c->r[1]+0x00000008u; // 800DB80C
  c->r[7]=R32(c->r[31]+0x00000024u); // 800DB810
  c->r[6]=R32(c->r[5]+0x00000004u); // 800DB814
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DB818
  W32(c->r[1]+0x00000008u,c->r[7]); // 800DB81C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800DB820
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DB824
  c->lr=0x800DB82Cu; f_800DB844(c); // 800DB828
L_800DB82C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DB82C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DB830
  c->r[30]=R32(c->r[1]+0x00000038u); // 800DB834
  c->lr=c->r[0]; // 800DB838
  c->r[1]=c->r[1]+0x00000040u; // 800DB83C
  return; // 800DB840
}

// fn_800DB844
void f_800DB844(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB844
  c->r[0]=c->lr; // 800DB848
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB84C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB850
  c->r[31]=c->r[4]|c->r[4]; // 800DB854
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DB858
  c->r[30]=c->r[3]|c->r[3]; // 800DB85C
  c->r[3]=c->r[31]|c->r[31]; // 800DB860
  c->lr=0x800DB868u; f_802B9FDC(c); // 800DB864
  cmps(c,0,(int32_t)c->r[3],0); // 800DB868
  if (crb(c,2)) { goto L_800DB888; } // 800DB86C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800DB870
  c->r[0]=R32(c->r[31]+0x00000004u); // 800DB874
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800DB878
  W32(c->r[30]+0x00000020u,c->r[0]); // 800DB87C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800DB880
  W32(c->r[30]+0x00000024u,c->r[0]); // 800DB884
L_800DB888:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB888
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB88C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DB890
  c->lr=c->r[0]; // 800DB894
  c->r[1]=c->r[1]+0x00000010u; // 800DB898
  return; // 800DB89C
}

// fn_800DB8A0
void f_800DB8A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB8A0
  c->r[0]=c->lr; // 800DB8A4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DB8A8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800DB8AC
  c->r[31]=c->r[3]|c->r[3]; // 800DB8B0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800DB8B4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DB8B8
  c->lr=0x800DB8C0u; f_801F5418(c); // 800DB8BC
  cmps(c,0,(int32_t)c->r[3],0); // 800DB8C0
  if (!crb(c,0)) { goto L_800DB9AC; } // 800DB8C4
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DB8C8
  {uint32_t ea=c->r[2]+0xFFFFA3C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB8CC
  {uint32_t ea=c->r[2]+0xFFFFA3CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB8D0
  c->r[0]=c->r[0]|0x00000080u; // 800DB8D4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800DB8D8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DB8DC
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800DB8E0
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800DB8E4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DB8E8
  c->lr=0x800DB8F0u; f_8025037C(c); // 800DB8EC
  c->r[6]=R32(c->r[31]+0x00000394u); // 800DB8F0
  c->r[3]=c->r[1]+0x00000020u; // 800DB8F4
  c->r[4]=c->r[31]+0x00000060u; // 800DB8F8
  c->r[5]=c->r[1]+0x0000002Cu; // 800DB8FC
  c->r[6]=c->r[6]+0x000000B0u; // 800DB900
  c->r[7]=0u+0x00000000u; // 800DB904
  c->lr=0x800DB90Cu; f_8002BE64(c); // 800DB908
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800DB90C
  c->r[3]=0u+0x805D0000u; // 800DB910
  c->r[0]=R32(c->r[31]+0x00000030u); // 800DB914
  c->r[3]=c->r[3]+0x00003F6Cu; // 800DB918
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB91C
  c->r[4]=c->r[31]|c->r[31]; // 800DB920
  W32(c->r[1]+0x00000014u,c->r[5]); // 800DB924
  c->r[7]=c->r[1]+0x00000014u; // 800DB928
  c->r[6]=0u+0x0000002Au; // 800DB92C
  c->r[8]=0u+0x00000000u; // 800DB930
  W32(c->r[1]+0x00000018u,c->r[0]); // 800DB934
  c->r[0]=R32(c->r[31]+0x00000034u); // 800DB938
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800DB93C
  c->r[3]=R32(c->r[31]+0x00000438u); // 800DB940
  c->r[5]=R32(c->r[31]+0x00000394u); // 800DB944
  c->lr=0x800DB94Cu; f_801FA6A4(c); // 800DB948
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB94C
  c->r[6]=0u+0x803A0000u; // 800DB950
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DB954
  c->r[5]=c->r[31]+0x00000044u; // 800DB958
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB95C
  c->r[6]=c->r[6]+0xFFFFE378u; // 800DB960
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800DB964
  c->r[3]=R32(c->r[31]+0x00000438u); // 800DB968
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800DB96C
  c->r[4]=0u+0x00000000u; // 800DB970
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 800DB974
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DB978
  c->lr=0x800DB980u; f_801FBEC0(c); // 800DB97C
  c->r[7]=0u+0x803D0000u; // 800DB980
  {uint32_t ea=c->r[7]+0x000028E8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800DB984
  c->r[3]=c->r[31]|c->r[31]; // 800DB988
  c->r[4]=c->r[1]+0x00000008u; // 800DB98C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DB990
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DB994
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DB998
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DB99C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DB9A0
  c->lr=0x800DB9A8u; f_800DB844(c); // 800DB9A4
  goto L_800DBA64; // 800DB9A8
L_800DB9AC:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DB9AC
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800DB9B0
  cmps(c,0,(int32_t)c->r[0],0); // 800DB9B4
  if (crb(c,2)) { goto L_800DBA64; } // 800DB9B8
  c->r[3]=c->r[31]|c->r[31]; // 800DB9BC
  c->lr=0x800DB9C4u; f_801F5B14(c); // 800DB9C0
  c->r[30]=0u+0x805D0000u; // 800DB9C4
  c->r[3]=c->r[30]+0x00003F6Cu; // 800DB9C8
  c->lr=0x800DB9D0u; f_800447E4(c); // 800DB9CC
  cmpu(c,0,c->r[3],0x00000001u); // 800DB9D0
  if (!crb(c,2)) { goto L_800DB9E4; } // 800DB9D4
  c->r[0]=0u+0x00000000u; // 800DB9D8
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800DB9DC
  goto L_800DB9F0; // 800DB9E0
L_800DB9E4:;
  c->r[3]=c->r[30]+0x00003F6Cu; // 800DB9E4
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800DB9E8
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800DB9EC
L_800DB9F0:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 800DB9F0
  cmps(c,0,(int32_t)c->r[0],0); // 800DB9F4
  if (crb(c,2)) { goto L_800DBA64; } // 800DB9F8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DB9FC
  c->r[4]=0u+0x00000001u; // 800DBA00
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DBA04
  c->lr=0x800DBA0Cu; f_80259C78(c); // 800DBA08
  c->r[0]=0u+0x00000000u; // 800DBA0C
  {uint32_t ea=c->r[2]+0xFFFFA3C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBA10
  W8(c->r[31]+0x00000081u,c->r[0]); // 800DBA14
  c->r[3]=c->r[31]|c->r[31]; // 800DBA18
  c->f[2]=c->f[1]; // 800DBA1C
  c->r[4]=0u+0x00000000u; // 800DBA20
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DBA24
  c->r[5]=0u+0x00000001u; // 800DBA28
  c->r[12]=R32(c->r[12]+0x00000048u); // 800DBA2C
  c->ctr=c->r[12]; // 800DBA30
  if (true) { c->lr=0x800DBA38u; dispatch(c,c->ctr); } // 800DBA34
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DBA38
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DBA3C
  c->lr=0x800DBA44u; f_802501B0(c); // 800DBA40
  c->r[4]=R8(c->r[31]+0x00000083u); // 800DBA44
  cmpu(c,0,c->r[4],0x000000FFu); // 800DBA48
  if (crb(c,2)) { goto L_800DBA64; } // 800DBA4C
  c->r[3]=0u+0x80550000u; // 800DBA50
  c->r[3]=c->r[3]+0xFFFFC848u; // 800DBA54
  c->lr=0x800DBA5Cu; f_8018D694(c); // 800DBA58
  c->r[0]=0u+0x000000FFu; // 800DBA5C
  W8(c->r[31]+0x00000083u,c->r[0]); // 800DBA60
L_800DBA64:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DBA64
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DBA68
  c->r[30]=R32(c->r[1]+0x00000038u); // 800DBA6C
  c->lr=c->r[0]; // 800DBA70
  c->r[1]=c->r[1]+0x00000040u; // 800DBA74
  return; // 800DBA78
}

// fn_800DBA7C
void f_800DBA7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBA7C
  c->r[0]=c->lr; // 800DBA80
  c->r[4]=0u+0x805D0000u; // 800DBA84
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DBA88
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800DBA8C
  c->r[31]=c->r[3]|c->r[3]; // 800DBA90
  c->r[3]=c->r[4]+0x00003F6Cu; // 800DBA94
  c->lr=0x800DBA9Cu; f_80037AF0(c); // 800DBA98
  cmpu(c,0,c->r[3],c->r[31]); // 800DBA9C
  if (!crb(c,2)) { goto L_800DBAE0; } // 800DBAA0
  c->r[0]=0u+0x00000001u; // 800DBAA4
  c->r[7]=0u+0x803D0000u; // 800DBAA8
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800DBAAC
  c->r[3]=c->r[31]|c->r[31]; // 800DBAB0
  c->r[4]=c->r[1]+0x00000020u; // 800DBAB4
  {uint32_t ea=c->r[7]+0x000028F4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800DBAB8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DBABC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DBAC0
  W32(c->r[1]+0x00000020u,c->r[6]); // 800DBAC4
  W32(c->r[1]+0x00000024u,c->r[5]); // 800DBAC8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800DBACC
  c->lr=0x800DBAD4u; f_800DB844(c); // 800DBAD0
  c->r[3]=c->r[31]|c->r[31]; // 800DBAD4
  c->lr=0x800DBADCu; f_800DB8A0(c); // 800DBAD8
  goto L_800DBBA8; // 800DBADC
L_800DBAE0:;
  c->r[3]=R32(c->r[31]+0x00000438u); // 800DBAE0
  c->r[4]=0u+0x00000000u; // 800DBAE4
  c->lr=0x800DBAECu; f_801FAF00(c); // 800DBAE8
  cmps(c,0,(int32_t)c->r[3],0); // 800DBAEC
  if (!crb(c,2)) { goto L_800DBB88; } // 800DBAF0
  c->r[3]=c->r[31]|c->r[31]; // 800DBAF4
  c->r[4]=0u+0x0000002Du; // 800DBAF8
  c->lr=0x800DBB00u; f_801F5AB4(c); // 800DBAFC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DBB00
  c->r[3]=c->r[31]+0x0000002Cu; // 800DBB04
  c->r[4]=c->r[4]+0x0000005Cu; // 800DBB08
  c->lr=0x800DBB10u; f_800361A0(c); // 800DBB0C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DBB10
  c->r[3]=c->r[31]+0x00000060u; // 800DBB14
  c->r[4]=c->r[4]+0x00000068u; // 800DBB18
  c->lr=0x800DBB20u; f_800361A0(c); // 800DBB1C
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800DBB20
  c->r[3]=0u+0x805D0000u; // 800DBB24
  c->r[0]=R32(c->r[31]+0x00000030u); // 800DBB28
  c->r[3]=c->r[3]+0x00006CF8u; // 800DBB2C
  c->r[4]=c->r[1]+0x00000014u; // 800DBB30
  c->r[5]=0u+0x00040000u; // 800DBB34
  W32(c->r[1]+0x00000014u,c->r[6]); // 800DBB38
  W32(c->r[1]+0x00000018u,c->r[0]); // 800DBB3C
  c->r[0]=R32(c->r[31]+0x00000034u); // 800DBB40
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800DBB44
  c->lr=0x800DBB4Cu; f_802236F8(c); // 800DBB48
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800DBB4C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DBB50
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DBB54
  c->lr=0x800DBB5Cu; f_8025037C(c); // 800DBB58
  c->r[7]=0u+0x803D0000u; // 800DBB5C
  {uint32_t ea=c->r[7]+0x00002900u; c->r[6]=R32(ea); c->r[7]=ea;} // 800DBB60
  c->r[3]=c->r[31]|c->r[31]; // 800DBB64
  c->r[4]=c->r[1]+0x00000008u; // 800DBB68
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DBB6C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DBB70
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DBB74
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DBB78
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DBB7C
  c->lr=0x800DBB84u; f_800DB844(c); // 800DBB80
  goto L_800DBBA8; // 800DBB84
L_800DBB88:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DBB88
  c->r[3]=c->r[31]+0x0000002Cu; // 800DBB8C
  c->r[4]=c->r[4]+0x0000005Cu; // 800DBB90
  c->lr=0x800DBB98u; f_800361A0(c); // 800DBB94
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DBB98
  c->r[3]=c->r[31]+0x00000060u; // 800DBB9C
  c->r[4]=c->r[4]+0x00000068u; // 800DBBA0
  c->lr=0x800DBBA8u; f_800361A0(c); // 800DBBA4
L_800DBBA8:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DBBA8
  c->r[3]=c->r[31]+0x0000002Cu; // 800DBBAC
  c->r[4]=c->r[4]+0x0000005Cu; // 800DBBB0
  c->lr=0x800DBBB8u; f_800361A0(c); // 800DBBB4
  c->r[3]=c->r[31]|c->r[31]; // 800DBBB8
  c->r[4]=0u+0x00000000u; // 800DBBBC
  c->lr=0x800DBBC4u; f_801F7C00(c); // 800DBBC0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DBBC4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DBBC8
  c->lr=c->r[0]; // 800DBBCC
  c->r[1]=c->r[1]+0x00000040u; // 800DBBD0
  return; // 800DBBD4
}

// fn_800DBBD8
void f_800DBBD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBBD8
  c->r[0]=c->lr; // 800DBBDC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DBBE0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800DBBE4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800DBBE8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800DBBEC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800DBBF0
  c->r[4]=0u+0x80620000u; // 800DBBF4
  c->r[4]=c->r[4]+0x000079C0u; // 800DBBF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DBBFC
  c->r[31]=c->r[3]|c->r[3]; // 800DBC00
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBC04
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBC08
  c->f[1]=-c->f[1]; // 800DBC0C
  c->f[2]=-c->f[0]; // 800DBC10
  c->lr=0x800DBC18u; f_8005C22C(c); // 800DBC14
  c->f[2]=-c->f[1]; // 800DBC18
  {uint32_t ea=c->r[2]+0xFFFFA3C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBC1C
  fcmp(c,0,c->f[2],c->f[0]); // 800DBC20
  if (!crb(c,1)) { goto L_800DBC3C; } // 800DBC24
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBC28
  {uint32_t ea=c->r[2]+0xFFFFA3D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBC2C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800DBC30
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800DBC34
  goto L_800DBC54; // 800DBC38
L_800DBC3C:;
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBC3C
  {uint32_t ea=c->r[2]+0xFFFFA3D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBC40
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800DBC44
  {uint32_t ea=c->r[2]+0xFFFFA3DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBC48
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800DBC4C
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 800DBC50
L_800DBC54:;
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBC54
  fcmp(c,0,c->f[31],c->f[0]); // 800DBC58
  if (!crb(c,1)) { goto L_800DBC68; } // 800DBC5C
  {uint32_t ea=c->r[2]+0xFFFFA3DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBC60
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800DBC64
L_800DBC68:;
  c->r[0]=R8(c->r[31]+0x00000080u); // 800DBC68
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[30]=c->ps1[30]=RF32(ea);} // 800DBC6C
  cmps(c,0,(int32_t)c->r[0],0); // 800DBC70
  if (crb(c,2)) { goto L_800DBC8C; } // 800DBC74
  {uint32_t ea=c->r[2]+0xFFFFA3C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBC78
  c->r[0]=0u+0x00000000u; // 800DBC7C
  W8(c->r[31]+0x00000080u,c->r[0]); // 800DBC80
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800DBC84
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[31]);} // 800DBC88
L_800DBC8C:;
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBC8C
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBC90
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[1]); // 800DBC94
  fcmp(c,0,c->f[31],c->f[0]); // 800DBC98
  if (!crb(c,1)) { goto L_800DBCAC; } // 800DBC9C
  {uint32_t ea=c->r[2]+0xFFFFA3DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBCA0
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800DBCA4
  goto L_800DBCC0; // 800DBCA8
L_800DBCAC:;
  {uint32_t ea=c->r[2]+0xFFFFA3E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBCAC
  fcmp(c,0,c->f[31],c->f[0]); // 800DBCB0
  if (!crb(c,0)) { goto L_800DBCC0; } // 800DBCB4
  {uint32_t ea=c->r[2]+0xFFFFA3DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBCB8
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 800DBCBC
L_800DBCC0:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBCC0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800DBCC4
  c->lr=0x800DBCCCu; f_8003EA88(c); // 800DBCC8
  {uint32_t ea=c->r[2]+0xFFFFA3E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DBCCC
  fcmp(c,0,c->f[1],c->f[2]); // 800DBCD0
  if (!crb(c,1)) { goto L_800DBCFC; } // 800DBCD4
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBCD8
  fcmp(c,0,c->f[31],c->f[0]); // 800DBCDC
  if (!crb(c,0)) { goto L_800DBCF0; } // 800DBCE0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800DBCE4
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800DBCE8
  goto L_800DBD00; // 800DBCEC
L_800DBCF0:;
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800DBCF0
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800DBCF4
  goto L_800DBD00; // 800DBCF8
L_800DBCFC:;
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[31]);} // 800DBCFC
L_800DBD00:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBD00
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBD04
  fcmp(c,0,c->f[1],c->f[0]); // 800DBD08
  if (!crb(c,1)) { goto L_800DBD18; } // 800DBD0C
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800DBD10
  goto L_800DBD34; // 800DBD14
L_800DBD18:;
  {uint32_t ea=c->r[2]+0xFFFFA3ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBD18
  fcmp(c,0,c->f[1],c->f[0]); // 800DBD1C
  if (!crb(c,0)) { goto L_800DBD34; } // 800DBD20
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DBD24
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800DBD28
  c->r[0]=c->r[0]|0x00004000u; // 800DBD2C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800DBD30
L_800DBD34:;
  {uint32_t ea=c->r[2]+0xFFFFA3F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBD34
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DBD38
  c->f[0]=c->ps1[0]=S(c->f[30]/c->f[1]); // 800DBD3C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800DBD40
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800DBD44
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800DBD48
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800DBD4C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800DBD50
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800DBD54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBD58
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800DBD5C
  if (crb(c,2)) { goto L_800DBD8C; } // 800DBD60
  c->r[0]=R8(c->r[31]+0x00000029u); // 800DBD64
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800DBD68
  if (crb(c,2)) { goto L_800DBD8C; } // 800DBD6C
  W8(c->r[31]+0x00000029u,c->r[3]); // 800DBD70
  c->r[3]=c->r[31]|c->r[31]; // 800DBD74
  c->r[4]=0u+0x00000004u; // 800DBD78
  c->r[5]=0u+0x00000033u; // 800DBD7C
  c->r[6]=0u+0x00000001u; // 800DBD80
  c->r[7]=0u+0x00000001u; // 800DBD84
  c->lr=0x800DBD8Cu; f_8017900C(c); // 800DBD88
L_800DBD8C:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DBD8C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DBD90
  c->lr=0x800DBD98u; f_802501B0(c); // 800DBD94
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBD98
  {uint32_t ea=c->r[2]+0xFFFFA3C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBD9C
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[1]);} // 800DBDA0
  fcmp(c,0,c->f[1],c->f[0]); // 800DBDA4
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[1]);} // 800DBDA8
  if (!crb(c,0)) { goto L_800DBDBC; } // 800DBDAC
  {uint32_t ea=c->r[2]+0xFFFFA3DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBDB0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DBDB4
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800DBDB8
L_800DBDBC:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800DBDBC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800DBDC0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800DBDC4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800DBDC8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DBDCC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DBDD0
  c->lr=c->r[0]; // 800DBDD4
  c->r[1]=c->r[1]+0x00000040u; // 800DBDD8
  return; // 800DBDDC
}

// fn_800DBDE0
void f_800DBDE0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800DBDE0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DBDE4
  f_802501B0(c); return; // 800DBDE8
}

// fn_800DBDEC
void f_800DBDEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBDEC
  c->r[0]=c->lr; // 800DBDF0
  {uint32_t ea=c->r[2]+0xFFFFA3C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBDF4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DBDF8
  {uint32_t ea=c->r[2]+0xFFFFA3CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBDFC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800DBE00
  c->r[31]=c->r[3]|c->r[3]; // 800DBE04
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 800DBE08
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DBE0C
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 800DBE10
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DBE14
  c->lr=0x800DBE1Cu; f_8025037C(c); // 800DBE18
  c->r[6]=R32(c->r[31]+0x00000394u); // 800DBE1C
  c->r[3]=c->r[1]+0x00000020u; // 800DBE20
  c->r[4]=c->r[31]+0x00000060u; // 800DBE24
  c->r[5]=c->r[1]+0x0000002Cu; // 800DBE28
  c->r[6]=c->r[6]+0x000000B0u; // 800DBE2C
  c->r[7]=0u+0x00000000u; // 800DBE30
  c->lr=0x800DBE38u; f_8002BE64(c); // 800DBE34
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800DBE38
  c->r[3]=0u+0x805D0000u; // 800DBE3C
  c->r[0]=R32(c->r[31]+0x00000030u); // 800DBE40
  c->r[3]=c->r[3]+0x00003F6Cu; // 800DBE44
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBE48
  c->r[4]=c->r[31]|c->r[31]; // 800DBE4C
  W32(c->r[1]+0x00000014u,c->r[5]); // 800DBE50
  c->r[7]=c->r[1]+0x00000014u; // 800DBE54
  c->r[6]=0u+0x0000002Au; // 800DBE58
  c->r[8]=0u+0x00000000u; // 800DBE5C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800DBE60
  c->r[0]=R32(c->r[31]+0x00000034u); // 800DBE64
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800DBE68
  c->r[3]=R32(c->r[31]+0x00000438u); // 800DBE6C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800DBE70
  c->lr=0x800DBE78u; f_801FA6A4(c); // 800DBE74
  c->r[3]=c->r[31]+0x00000044u; // 800DBE78
  c->r[4]=c->r[31]+0x000003CCu; // 800DBE7C
  c->lr=0x800DBE84u; f_800361A0(c); // 800DBE80
  c->r[6]=0u+0x803A0000u; // 800DBE84
  c->r[3]=R32(c->r[31]+0x00000438u); // 800DBE88
  c->r[5]=c->r[31]+0x00000044u; // 800DBE8C
  c->r[4]=0u+0x00000000u; // 800DBE90
  c->r[6]=c->r[6]+0xFFFFE378u; // 800DBE94
  c->lr=0x800DBE9Cu; f_801FBEC0(c); // 800DBE98
  c->r[0]=0u+0x00000000u; // 800DBE9C
  c->r[7]=0u+0x803D0000u; // 800DBEA0
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800DBEA4
  c->r[3]=c->r[31]|c->r[31]; // 800DBEA8
  c->r[4]=c->r[1]+0x00000008u; // 800DBEAC
  {uint32_t ea=c->r[7]+0x0000290Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800DBEB0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DBEB4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DBEB8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DBEBC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DBEC0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DBEC4
  c->lr=0x800DBECCu; f_800DB844(c); // 800DBEC8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DBECC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DBED0
  c->lr=c->r[0]; // 800DBED4
  c->r[1]=c->r[1]+0x00000040u; // 800DBED8
  return; // 800DBEDC
}

// fn_800DBEE0
void f_800DBEE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBEE0
  c->r[0]=c->lr; // 800DBEE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBEE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBEEC
  c->r[31]=c->r[3]|c->r[3]; // 800DBEF0
  c->r[5]=R32(c->r[3]+0x000003C4u); // 800DBEF4
  c->r[0]=c->r[5]+0x00000000u; // 800DBEF8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800DBEFC
  if (crb(c,2)) { goto L_800DBF24; } // 800DBF00
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800DBF04
  c->r[6]=0u+0x00000000u; // 800DBF08
  {uint32_t ea=c->r[2]+0xFFFFA3C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBF0C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800DBF10
  c->f[2]=c->f[1]; // 800DBF14
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DBF18
  c->ctr=c->r[12]; // 800DBF1C
  if (true) { c->lr=0x800DBF24u; dispatch(c,c->ctr); } // 800DBF20
L_800DBF24:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DBF24
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DBF28
  c->lr=0x800DBF30u; f_802501B0(c); // 800DBF2C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DBF30
  c->r[5]=0u+0x00000000u; // 800DBF34
  c->r[3]=0u+0x00000001u; // 800DBF38
  W8(c->r[4]+0x0000014Cu,c->r[5]); // 800DBF3C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DBF40
  W8(c->r[4]+0x0000014Du,c->r[5]); // 800DBF44
  c->r[0]=R8(c->r[31]+0x00000082u); // 800DBF48
  W8(c->r[31]+0x0000006Fu,c->r[3]); // 800DBF4C
  cmpu(c,0,c->r[0],0x00000001u); // 800DBF50
  if (crb(c,2)) { goto L_800DBF5C; } // 800DBF54
  W8(c->r[31]+0x00000082u,c->r[5]); // 800DBF58
L_800DBF5C:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800DBF5C
  c->r[4]=c->r[31]+0x000003CCu; // 800DBF60
  c->lr=0x800DBF68u; f_800361A0(c); // 800DBF64
  c->r[3]=c->r[31]+0x00000060u; // 800DBF68
  c->r[4]=c->r[31]+0x000003D8u; // 800DBF6C
  c->lr=0x800DBF74u; f_800361A0(c); // 800DBF70
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DBF74
  c->r[3]=c->r[31]|c->r[31]; // 800DBF78
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DBF7C
  c->ctr=c->r[12]; // 800DBF80
  if (true) { c->lr=0x800DBF88u; dispatch(c,c->ctr); } // 800DBF84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBF88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBF8C
  c->lr=c->r[0]; // 800DBF90
  c->r[1]=c->r[1]+0x00000010u; // 800DBF94
  return; // 800DBF98
}

// fn_800DBF9C
void f_800DBF9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBF9C
  c->r[0]=c->lr; // 800DBFA0
  c->r[6]=c->r[4]|c->r[4]; // 800DBFA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBFA8
  c->r[0]=R8(c->r[3]+0x00000082u); // 800DBFAC
  cmps(c,0,(int32_t)c->r[0],2); // 800DBFB0
  if (crb(c,2)) { goto L_800DBFD8; } // 800DBFB4
  if (!crb(c,0)) { goto L_800DBFCC; } // 800DBFB8
  cmps(c,0,(int32_t)c->r[0],0); // 800DBFBC
  if (crb(c,2)) { goto L_800DBFD8; } // 800DBFC0
  if (!crb(c,0)) { goto L_800DBFE0; } // 800DBFC4
  goto L_800DBFD8; // 800DBFC8
L_800DBFCC:;
  cmps(c,0,(int32_t)c->r[0],4); // 800DBFCC
  if (!crb(c,0)) { goto L_800DBFD8; } // 800DBFD0
  goto L_800DBFE0; // 800DBFD4
L_800DBFD8:;
  c->r[5]=0u+0x00000000u; // 800DBFD8
  goto L_800DBFE4; // 800DBFDC
L_800DBFE0:;
  c->r[5]=0u+0x00000001u; // 800DBFE0
L_800DBFE4:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DBFE4
  c->r[3]=c->r[6]|c->r[6]; // 800DBFE8
  c->lr=0x800DBFF0u; f_80250BF4(c); // 800DBFEC
  cmps(c,0,(int32_t)c->r[3],0); // 800DBFF0
  if (crb(c,2)) { goto L_800DC000; } // 800DBFF4
  c->r[3]=0u+0x00000000u; // 800DBFF8
  goto L_800DC004; // 800DBFFC
L_800DC000:;
  c->r[3]=0u+0xFFFFFFFFu; // 800DC000
L_800DC004:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC004
  c->lr=c->r[0]; // 800DC008
  c->r[1]=c->r[1]+0x00000010u; // 800DC00C
  return; // 800DC010
}

// fn_800DC014
void f_800DC014(Ctx* __restrict c) {
  W8(c->r[3]+0x00000082u,c->r[4]); // 800DC014
  return; // 800DC018
}

// fn_800DC01C
void f_800DC01C(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800DC01C
  c->r[0]=c->r[0]|0x00000010u; // 800DC020
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800DC024
  return; // 800DC028
}

// fn_800DC02C
void f_800DC02C(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800DC02C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800DC030
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800DC034
  return; // 800DC038
}

// fn_800DC03C
void f_800DC03C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC03C
  c->r[0]=c->lr; // 800DC040
  c->r[7]=0u+0x803D0000u; // 800DC044
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC048
  c->r[0]=0u+0x00000000u; // 800DC04C
  c->r[4]=c->r[1]+0x00000008u; // 800DC050
  W16(c->r[3]+0x000003BCu,c->r[0]); // 800DC054
  {uint32_t ea=c->r[7]+0x00002918u; c->r[6]=R32(ea); c->r[7]=ea;} // 800DC058
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DC05C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DC060
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DC064
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DC068
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DC06C
  c->lr=0x800DC074u; f_800DB844(c); // 800DC070
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC074
  c->lr=c->r[0]; // 800DC078
  c->r[1]=c->r[1]+0x00000020u; // 800DC07C
  return; // 800DC080
}

// fn_800DC084
void f_800DC084(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC084
  c->r[0]=c->lr; // 800DC088
  c->r[4]=0u+0x805D0000u; // 800DC08C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800DC090
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800DC094
  W32(c->r[1]+0x00000068u,c->r[30]); // 800DC098
  c->r[30]=c->r[3]|c->r[3]; // 800DC09C
  c->r[3]=c->r[4]+0x00003F6Cu; // 800DC0A0
  c->lr=0x800DC0A8u; f_80037AF0(c); // 800DC0A4
  cmpu(c,0,c->r[3],c->r[30]); // 800DC0A8
  if (crb(c,2)) { goto L_800DC114; } // 800DC0AC
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800DC0B0
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 800DC0B4
  cmps(c,0,(int32_t)c->r[0],128); // 800DC0B8
  if (!crb(c,2)) { goto L_800DC0E4; } // 800DC0BC
  c->r[3]=0u+0x80620000u; // 800DC0C0
  c->r[3]=c->r[3]+0x00007688u; // 800DC0C4
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DC0C8
  cmps(c,0,(int32_t)c->r[3],0); // 800DC0CC
  if (crb(c,2)) { goto L_800DC0E4; } // 800DC0D0
  c->r[4]=0u+0x00000002u; // 800DC0D4
  c->lr=0x800DC0DCu; f_80037670(c); // 800DC0D8
  cmps(c,0,(int32_t)c->r[3],0); // 800DC0DC
  if (!crb(c,2)) { goto L_800DC114; } // 800DC0E0
L_800DC0E4:;
  c->r[31]=0u+0x80550000u; // 800DC0E4
  {uint32_t ea=c->r[2]+0xFFFFA3F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC0E8
  c->r[31]=c->r[31]+0x00003D60u; // 800DC0EC
  c->r[5]=c->r[30]|c->r[30]; // 800DC0F0
  c->r[3]=c->r[31]+0x00000010u; // 800DC0F4
  c->r[6]=c->r[30]+0x0000002Cu; // 800DC0F8
  c->r[7]=c->r[1]+0x00000008u; // 800DC0FC
  c->r[4]=0u+0x000001FFu; // 800DC100
  c->lr=0x800DC108u; f_80226910(c); // 800DC104
  c->r[3]=c->r[31]+0x00000010u; // 800DC108
  c->r[4]=c->r[1]+0x00000008u; // 800DC10C
  c->lr=0x800DC114u; f_80226D68(c); // 800DC110
L_800DC114:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800DC114
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800DC118
  c->r[30]=R32(c->r[1]+0x00000068u); // 800DC11C
  c->lr=c->r[0]; // 800DC120
  c->r[1]=c->r[1]+0x00000070u; // 800DC124
  return; // 800DC128
}

// fn_800DC12C
void f_800DC12C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC12C
  c->r[0]=c->lr; // 800DC130
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC134
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC138
  c->r[31]=c->r[3]|c->r[3]; // 800DC13C
  c->r[3]=c->r[3]+0x00000210u; // 800DC140
  c->lr=0x800DC148u; f_8004BAD4(c); // 800DC144
  cmps(c,0,(int32_t)c->r[3],0); // 800DC148
  if (crb(c,2)) { goto L_800DC1BC; } // 800DC14C
  c->r[0]=R32(c->r[31]+0x00000210u); // 800DC150
  c->r[4]=c->r[31]|c->r[31]; // 800DC154
  c->r[3]=c->r[31]+0x00000210u; // 800DC158
  c->r[0]=c->r[0]|0xAA000000u; // 800DC15C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800DC160
  c->lr=0x800DC168u; f_80043E44(c); // 800DC164
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC168
  c->r[3]=c->r[31]+0x00000210u; // 800DC16C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DC170
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DC174
  c->lr=0x800DC17Cu; f_80043E34(c); // 800DC178
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DC17C
  c->r[4]=0u+0x803A0000u; // 800DC180
  c->r[4]=c->r[4]+0xFFFFE384u; // 800DC184
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DC188
  c->r[4]=c->r[4]+0x0000000Du; // 800DC18C
  c->lr=0x800DC194u; f_80256EC4(c); // 800DC190
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DC194
  c->r[5]=c->r[3]|c->r[3]; // 800DC198
  c->r[3]=c->r[31]+0x00000210u; // 800DC19C
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800DC1A0
  c->lr=0x800DC1A8u; f_8004BAC8(c); // 800DC1A4
  {uint32_t ea=c->r[2]+0xFFFFA3F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC1A8
  c->r[3]=c->r[31]+0x00000210u; // 800DC1AC
  c->f[2]=c->f[1]; // 800DC1B0
  c->f[3]=c->f[1]; // 800DC1B4
  c->lr=0x800DC1BCu; f_80043E24(c); // 800DC1B8
L_800DC1BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC1BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC1C0
  c->lr=c->r[0]; // 800DC1C4
  c->r[1]=c->r[1]+0x00000010u; // 800DC1C8
  return; // 800DC1CC
}

// fn_800DC1D0
void f_800DC1D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC1D0
  c->r[0]=c->lr; // 800DC1D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC1D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DC1DC
  c->r[31]=c->r[3]|c->r[3]; // 800DC1E0
  c->r[3]=c->r[3]+0x00000210u; // 800DC1E4
  c->lr=0x800DC1ECu; f_80221698(c); // 800DC1E8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DC1EC
  cmps(c,0,(int32_t)c->r[3],0); // 800DC1F0
  if (crb(c,2)) { goto L_800DC214; } // 800DC1F4
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800DC1F8
  cmps(c,0,(int32_t)c->r[0],0); // 800DC1FC
  if (crb(c,2)) { goto L_800DC214; } // 800DC200
  c->r[0]=R32(c->r[31]+0x00000210u); // 800DC204
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800DC208
  W32(c->r[31]+0x00000210u,c->r[0]); // 800DC20C
  goto L_800DC260; // 800DC210
L_800DC214:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800DC214
  c->r[3]=c->r[1]+0x00000008u; // 800DC218
  c->r[6]=R32(c->r[31]+0x00000394u); // 800DC21C
  c->r[4]=c->r[3]|c->r[3]; // 800DC220
  c->r[0]=c->r[0]|0x80000000u; // 800DC224
  {uint32_t ea=c->r[2]+0xFFFFA3F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC228
  W32(c->r[31]+0x00000210u,c->r[0]); // 800DC22C
  c->r[5]=R32(c->r[6]+0x00000074u); // 800DC230
  c->r[0]=R32(c->r[6]+0x00000078u); // 800DC234
  W32(c->r[1]+0x00000008u,c->r[5]); // 800DC238
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DC23C
  c->r[0]=R32(c->r[6]+0x0000007Cu); // 800DC240
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DC244
  c->lr=0x800DC24Cu; f_80296A94(c); // 800DC248
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC24C
  c->r[3]=c->r[31]+0x00000210u; // 800DC250
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DC254
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DC258
  c->lr=0x800DC260u; f_80043E24(c); // 800DC25C
L_800DC260:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC260
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DC264
  c->lr=c->r[0]; // 800DC268
  c->r[1]=c->r[1]+0x00000020u; // 800DC26C
  return; // 800DC270
}

// fn_800DC274
void f_800DC274(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC274
  c->r[0]=c->lr; // 800DC278
  cmps(c,0,(int32_t)c->r[3],0); // 800DC27C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC280
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC284
  c->r[31]=c->r[4]|c->r[4]; // 800DC288
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DC28C
  c->r[30]=c->r[3]|c->r[3]; // 800DC290
  if (crb(c,2)) { goto L_800DC2B0; } // 800DC294
  c->r[4]=0u+0x00000000u; // 800DC298
  c->lr=0x800DC2A0u; f_8026A06C(c); // 800DC29C
  cmps(c,0,(int32_t)c->r[31],0); // 800DC2A0
  if (!crb(c,1)) { goto L_800DC2B0; } // 800DC2A4
  c->r[3]=c->r[30]|c->r[30]; // 800DC2A8
  c->lr=0x800DC2B0u; f_8026A268(c); // 800DC2AC
L_800DC2B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC2B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC2B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DC2B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC2BC
  c->lr=c->r[0]; // 800DC2C0
  c->r[1]=c->r[1]+0x00000010u; // 800DC2C4
  return; // 800DC2C8
}

// fn_800DC2CC
void f_800DC2CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC2CC
  c->r[0]=c->lr; // 800DC2D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC2D4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800DC2D8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800DC2DC
  c->r[4]=0u+0x00000000u; // 800DC2E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC2E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DC2E8
  c->r[30]=c->r[3]|c->r[3]; // 800DC2EC
  c->lr=0x800DC2F4u; f_801F57D0(c); // 800DC2F0
  c->r[3]=c->r[30]|c->r[30]; // 800DC2F4
  c->r[4]=0u+0x00000001u; // 800DC2F8
  c->lr=0x800DC300u; f_801F57D0(c); // 800DC2FC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800DC300
  c->r[3]=c->r[30]|c->r[30]; // 800DC304
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800DC308
  c->ctr=c->r[12]; // 800DC30C
  if (true) { c->lr=0x800DC314u; dispatch(c,c->ctr); } // 800DC310
  c->r[3]=c->r[30]|c->r[30]; // 800DC314
  c->lr=0x800DC31Cu; f_801F4B94(c); // 800DC318
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800DC31C
  c->r[5]=0u+0x00000003u; // 800DC320
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC324
  c->r[4]=0u+0x00000042u; // 800DC328
  c->r[7]=c->r[0]|0x00004804u; // 800DC32C
  c->r[31]=0u+0x00000001u; // 800DC330
  c->r[0]=0u+0x00000000u; // 800DC334
  c->r[3]=0u+0x80550000u; // 800DC338
  W8(c->r[30]+0x0000006Cu,c->r[5]); // 800DC33C
  c->f[3]=c->f[1]; // 800DC340
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DC344
  c->r[3]=c->r[3]+0x00003D60u; // 800DC348
  W8(c->r[30]+0x0000006Du,c->r[4]); // 800DC34C
  c->r[4]=c->r[30]+0x0000002Cu; // 800DC350
  {uint32_t ea=c->r[2]+0xFFFFA40Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DC354
  W16(c->r[30]+0x000003BEu,c->r[7]); // 800DC358
  c->r[5]=c->r[30]+0x00000030u; // 800DC35C
  c->r[6]=0u+0x00000000u; // 800DC360
  c->r[7]=0u+0x00000000u; // 800DC364
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800DC368
  W8(c->r[30]+0x00000074u,c->r[0]); // 800DC36C
  c->lr=0x800DC374u; f_801D5488(c); // 800DC370
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DC374
  c->r[3]=c->r[30]|c->r[30]; // 800DC378
  c->lr=0x800DC380u; f_801F58BC(c); // 800DC37C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DC380
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800DC384
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC388
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DC38C
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800DC390
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DC394
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800DC398
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DC39C
  c->lr=0x800DC3A4u; f_802501B0(c); // 800DC3A0
  c->r[3]=0u+0x805D0000u; // 800DC3A4
  c->r[4]=c->r[30]+0x0000002Cu; // 800DC3A8
  c->r[3]=c->r[3]+0x000078B0u; // 800DC3AC
  c->lr=0x800DC3B4u; f_802351CC(c); // 800DC3B0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DC3B4
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800DC3B8
  c->r[3]=c->r[30]|c->r[30]; // 800DC3BC
  c->r[4]=R32(c->r[30]+0x00000398u); // 800DC3C0
  c->lr=0x800DC3C8u; f_801F58BC(c); // 800DC3C4
  c->r[3]=R32(c->r[30]+0x00000398u); // 800DC3C8
  c->r[4]=0u+0x803A0000u; // 800DC3CC
  c->r[4]=c->r[4]+0xFFFFE3ACu; // 800DC3D0
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800DC3D4
  c->r[3]=R32(c->r[30]+0x00000398u); // 800DC3D8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DC3DC
  c->lr=0x800DC3E4u; f_80256EC4(c); // 800DC3E0
  c->r[4]=R32(c->r[30]+0x00000398u); // 800DC3E4
  c->r[5]=0u+0x00000000u; // 800DC3E8
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800DC3EC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DC3F0
  c->r[3]=R32(c->r[30]+0x00000398u); // 800DC3F4
  c->r[0]=R8(c->r[4]+0x0000001Du); // 800DC3F8
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800DC3FC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DC400
  c->r[4]=R32(c->r[30]+0x00000398u); // 800DC404
  c->lr=0x800DC40Cu; f_80250BF4(c); // 800DC408
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800DC40C
  c->r[3]=c->r[30]|c->r[30]; // 800DC410
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC414
  c->r[5]=0u+0x00000000u; // 800DC418
  c->r[12]=R32(c->r[12]+0x00000064u); // 800DC41C
  c->r[6]=0u+0x00000001u; // 800DC420
  c->f[2]=c->f[1]; // 800DC424
  c->r[4]=R32(c->r[30]+0x00000398u); // 800DC428
  c->ctr=c->r[12]; // 800DC42C
  if (true) { c->lr=0x800DC434u; dispatch(c,c->ctr); } // 800DC430
  c->r[3]=c->r[30]|c->r[30]; // 800DC434
  c->lr=0x800DC43Cu; f_801F56F4(c); // 800DC438
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800DC43C
  c->r[3]=c->r[30]|c->r[30]; // 800DC440
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DC444
  c->ctr=c->r[12]; // 800DC448
  if (true) { c->lr=0x800DC450u; dispatch(c,c->ctr); } // 800DC44C
  c->r[3]=c->r[30]|c->r[30]; // 800DC450
  c->lr=0x800DC458u; f_800DCE1C(c); // 800DC454
  c->r[3]=c->r[30]|c->r[30]; // 800DC458
  c->lr=0x800DC460u; f_800DCF08(c); // 800DC45C
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800DC460
  W32(c->r[30]+0x00000444u,c->r[31]); // 800DC464
  c->lr=0x800DC46Cu; f_8024E174(c); // 800DC468
  W32(c->r[30]+0x00000438u,c->r[3]); // 800DC46C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800DC470
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800DC474
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC478
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DC47C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC480
  c->lr=c->r[0]; // 800DC484
  c->r[1]=c->r[1]+0x00000020u; // 800DC488
  return; // 800DC48C
}

// fn_800DC490
void f_800DC490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC490
  c->r[0]=c->lr; // 800DC494
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC498
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC49C
  c->r[31]=c->r[3]|c->r[3]; // 800DC4A0
  c->lr=0x800DC4A8u; f_800DCB14(c); // 800DC4A4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DC4A8
  c->r[3]=c->r[31]|c->r[31]; // 800DC4AC
  c->r[12]=R32(c->r[12]+0x00000068u); // 800DC4B0
  c->ctr=c->r[12]; // 800DC4B4
  if (true) { c->lr=0x800DC4BCu; dispatch(c,c->ctr); } // 800DC4B8
  c->r[3]=c->r[31]|c->r[31]; // 800DC4BC
  c->lr=0x800DC4C4u; f_801F4C0C(c); // 800DC4C0
  c->r[3]=c->r[31]|c->r[31]; // 800DC4C4
  c->lr=0x800DC4CCu; f_800DCD54(c); // 800DC4C8
  c->r[3]=c->r[31]|c->r[31]; // 800DC4CC
  c->lr=0x800DC4D4u; f_801F56F4(c); // 800DC4D0
  c->r[4]=R32(c->r[31]+0x00000398u); // 800DC4D4
  cmps(c,0,(int32_t)c->r[4],0); // 800DC4D8
  if (crb(c,2)) { goto L_800DC534; } // 800DC4DC
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 800DC4E0
  cmps(c,0,(int32_t)c->r[0],0); // 800DC4E4
  if (crb(c,2)) { goto L_800DC534; } // 800DC4E8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DC4EC
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800DC4F0
  if (!crb(c,2)) { goto L_800DC504; } // 800DC4F4
  c->r[0]=0u+0x00000000u; // 800DC4F8
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800DC4FC
  goto L_800DC510; // 800DC500
L_800DC504:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DC504
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800DC508
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800DC50C
L_800DC510:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800DC510
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DC514
  c->lr=0x800DC51Cu; f_802501B0(c); // 800DC518
  c->r[3]=R32(c->r[31]+0x00000398u); // 800DC51C
  c->r[4]=c->r[3]+0x000000B0u; // 800DC520
  c->lr=0x800DC528u; f_80250F18(c); // 800DC524
  c->r[3]=R32(c->r[31]+0x00000398u); // 800DC528
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DC52C
  c->lr=0x800DC534u; f_8025037C(c); // 800DC530
L_800DC534:;
  c->r[3]=c->r[31]|c->r[31]; // 800DC534
  c->lr=0x800DC53Cu; f_800DCFAC(c); // 800DC538
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC53C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC540
  c->lr=c->r[0]; // 800DC544
  c->r[1]=c->r[1]+0x00000010u; // 800DC548
  return; // 800DC54C
}

// fn_800DC550
void f_800DC550(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC550
  c->r[0]=c->lr; // 800DC554
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC55C
  c->r[31]=c->r[3]|c->r[3]; // 800DC560
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DC564
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DC568
  c->lr=0x800DC570u; f_802501B0(c); // 800DC56C
  c->r[3]=c->r[31]|c->r[31]; // 800DC570
  c->r[4]=0u+0x00000000u; // 800DC574
  c->lr=0x800DC57Cu; f_801F5244(c); // 800DC578
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC57C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC580
  c->lr=c->r[0]; // 800DC584
  c->r[1]=c->r[1]+0x00000010u; // 800DC588
  return; // 800DC58C
}

// fn_800DC590
void f_800DC590(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC590
  c->r[0]=c->lr; // 800DC594
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC598
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC59C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DC5A0
  c->r[30]=c->r[3]|c->r[3]; // 800DC5A4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DC5A8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DC5AC
  c->lr=0x800DC5B4u; f_802501B0(c); // 800DC5B0
  c->r[3]=c->r[30]|c->r[30]; // 800DC5B4
  c->r[4]=0u+0x00000000u; // 800DC5B8
  c->lr=0x800DC5C0u; f_801F5244(c); // 800DC5BC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DC5C0
  c->r[3]=c->r[30]+0x0000002Cu; // 800DC5C4
  c->r[4]=c->r[4]+0x0000005Cu; // 800DC5C8
  c->lr=0x800DC5D0u; f_800361A0(c); // 800DC5CC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DC5D0
  c->r[3]=c->r[30]|c->r[30]; // 800DC5D4
  c->lr=0x800DC5DCu; f_801F5418(c); // 800DC5D8
  cmps(c,0,(int32_t)c->r[3],0); // 800DC5DC
  if (!crb(c,0)) { goto L_800DC62C; } // 800DC5E0
  c->r[4]=R16(c->r[30]+0x000003BEu); // 800DC5E4
  c->r[3]=0u+0x00000001u; // 800DC5E8
  c->r[0]=R8(c->r[30]+0x00000074u); // 800DC5EC
  c->r[4]=c->r[4]|0x00000080u; // 800DC5F0
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800DC5F4
  cmpu(c,0,c->r[0],0x00000001u); // 800DC5F8
  W16(c->r[30]+0x000003BEu,c->r[4]); // 800DC5FC
  if (crb(c,2)) { goto L_800DC60C; } // 800DC600
  c->r[0]=0u+0x00000000u; // 800DC604
  W8(c->r[30]+0x00000074u,c->r[0]); // 800DC608
L_800DC60C:;
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC60C
  c->r[3]=c->r[30]|c->r[30]; // 800DC610
  c->r[4]=0u+0x00000064u; // 800DC614
  c->r[5]=0u+0x00000000u; // 800DC618
  c->r[6]=0u+0x00000000u; // 800DC61C
  c->r[7]=0u+0x00000000u; // 800DC620
  c->lr=0x800DC628u; f_801F4D44(c); // 800DC624
  goto L_800DC660; // 800DC628
L_800DC62C:;
  c->r[31]=0u+0x805D0000u; // 800DC62C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800DC630
  c->lr=0x800DC638u; f_800447E4(c); // 800DC634
  cmpu(c,0,c->r[3],0x00000001u); // 800DC638
  if (!crb(c,2)) { goto L_800DC64C; } // 800DC63C
  c->r[0]=0u+0x00000000u; // 800DC640
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800DC644
  goto L_800DC658; // 800DC648
L_800DC64C:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800DC64C
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800DC650
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800DC654
L_800DC658:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC658
  c->lr=0x800DC660u; f_801F5B14(c); // 800DC65C
L_800DC660:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC660
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC664
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DC668
  c->lr=c->r[0]; // 800DC66C
  c->r[1]=c->r[1]+0x00000010u; // 800DC670
  return; // 800DC674
}

// fn_800DC678
void f_800DC678(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC678
  c->r[0]=c->lr; // 800DC67C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DC680
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800DC684
  c->r[31]=c->r[3]|c->r[3]; // 800DC688
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DC68C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DC690
  c->lr=0x800DC698u; f_802501B0(c); // 800DC694
  c->r[3]=c->r[31]+0x00000038u; // 800DC698
  c->r[4]=c->r[31]+0x0000002Cu; // 800DC69C
  c->lr=0x800DC6A4u; f_800361A0(c); // 800DC6A0
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC6A4
  c->r[3]=0u+0x80550000u; // 800DC6A8
  c->r[3]=c->r[3]+0x00003D60u; // 800DC6AC
  c->r[4]=c->r[31]+0x00000038u; // 800DC6B0
  c->f[2]=c->f[1]; // 800DC6B4
  c->r[5]=c->r[1]+0x00000008u; // 800DC6B8
  c->f[3]=c->f[1]; // 800DC6BC
  c->r[6]=0u+0x00000000u; // 800DC6C0
  c->r[7]=0u+0x00000000u; // 800DC6C4
  c->lr=0x800DC6CCu; f_801D5488(c); // 800DC6C8
  c->r[5]=R32(c->r[31]+0x00000394u); // 800DC6CC
  c->r[3]=c->r[31]+0x00000060u; // 800DC6D0
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC6D4
  c->r[4]=c->r[5]+0x00000068u; // 800DC6D8
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800DC6DC
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC6E0
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800DC6E4
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC6E8
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800DC6EC
  c->lr=0x800DC6F4u; f_800361A0(c); // 800DC6F0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DC6F4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DC6F8
  c->lr=0x800DC700u; f_802501B0(c); // 800DC6FC
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800DC700
  c->r[0]=0u+0x00000001u; // 800DC704
  {uint32_t ea=c->r[2]+0xFFFFA410u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC708
  c->r[4]=c->r[31]+0x0000002Cu; // 800DC70C
  {uint32_t ea=c->r[2]+0xFFFFA414u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC710
  c->r[3]=c->r[3]|0x00002000u; // 800DC714
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800DC718
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DC71C
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800DC720
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800DC724
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800DC728
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DC72C
  c->r[3]=c->r[3]+0x0000005Cu; // 800DC730
  c->lr=0x800DC738u; f_800361A0(c); // 800DC734
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC738
  c->r[4]=0u+0x00000040u; // 800DC73C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DC740
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800DC744
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DC748
  c->r[3]=c->r[3]+0x0000001Cu; // 800DC74C
  c->lr=0x800DC754u; f_802518A4(c); // 800DC750
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DC754
  c->r[4]=0u+0x00000006u; // 800DC758
  c->r[3]=c->r[3]+0x0000001Cu; // 800DC75C
  c->lr=0x800DC764u; f_80251824(c); // 800DC760
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DC764
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DC768
  c->lr=0x800DC770u; f_802501B0(c); // 800DC76C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DC770
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800DC774
  cmps(c,0,(int32_t)c->r[0],0); // 800DC778
  if (crb(c,2)) { goto L_800DC824; } // 800DC77C
  c->r[3]=c->r[3]+0x00000068u; // 800DC780
  c->r[4]=c->r[31]+0x00000060u; // 800DC784
  c->lr=0x800DC78Cu; f_800361A0(c); // 800DC788
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DC78C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DC790
  c->lr=0x800DC798u; f_8025037C(c); // 800DC794
  c->r[6]=R32(c->r[31]+0x00000394u); // 800DC798
  c->r[3]=c->r[1]+0x00000024u; // 800DC79C
  c->r[4]=c->r[31]+0x00000060u; // 800DC7A0
  c->r[5]=c->r[1]+0x00000030u; // 800DC7A4
  c->r[6]=c->r[6]+0x000000B0u; // 800DC7A8
  c->r[7]=0u+0x00000000u; // 800DC7AC
  c->lr=0x800DC7B4u; f_8002BE64(c); // 800DC7B0
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800DC7B4
  c->r[3]=0u+0x805D0000u; // 800DC7B8
  c->r[0]=R32(c->r[31]+0x00000030u); // 800DC7BC
  c->r[3]=c->r[3]+0x00003F6Cu; // 800DC7C0
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC7C4
  c->r[4]=c->r[31]|c->r[31]; // 800DC7C8
  W32(c->r[1]+0x00000018u,c->r[5]); // 800DC7CC
  c->r[7]=c->r[1]+0x00000018u; // 800DC7D0
  c->r[6]=0u+0x0000002Bu; // 800DC7D4
  c->r[8]=0u+0x00000000u; // 800DC7D8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800DC7DC
  c->r[0]=R32(c->r[31]+0x00000034u); // 800DC7E0
  W32(c->r[1]+0x00000020u,c->r[0]); // 800DC7E4
  c->r[3]=R32(c->r[31]+0x00000438u); // 800DC7E8
  c->r[5]=R32(c->r[31]+0x00000394u); // 800DC7EC
  c->lr=0x800DC7F4u; f_801FA6A4(c); // 800DC7F0
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800DC7F4
  cmps(c,0,(int32_t)c->r[0],0); // 800DC7F8
  if (crb(c,2)) { goto L_800DC80C; } // 800DC7FC
  c->r[3]=c->r[31]+0x00000044u; // 800DC800
  c->r[4]=c->r[31]+0x000003CCu; // 800DC804
  c->lr=0x800DC80Cu; f_800361A0(c); // 800DC808
L_800DC80C:;
  c->r[6]=0u+0x803A0000u; // 800DC80C
  c->r[3]=R32(c->r[31]+0x00000438u); // 800DC810
  c->r[5]=c->r[31]+0x00000044u; // 800DC814
  c->r[4]=0u+0x00000000u; // 800DC818
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 800DC81C
  c->lr=0x800DC824u; f_801FBEC0(c); // 800DC820
L_800DC824:;
  c->r[3]=c->r[31]|c->r[31]; // 800DC824
  c->r[4]=0u+0x00000000u; // 800DC828
  c->lr=0x800DC830u; f_801F7C00(c); // 800DC82C
  c->r[7]=0u+0x803D0000u; // 800DC830
  {uint32_t ea=c->r[7]+0x00002AA8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800DC834
  c->r[3]=c->r[31]|c->r[31]; // 800DC838
  c->r[4]=c->r[1]+0x0000000Cu; // 800DC83C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DC840
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DC844
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800DC848
  W32(c->r[1]+0x00000010u,c->r[5]); // 800DC84C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC850
  c->lr=0x800DC858u; f_800DC86C(c); // 800DC854
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DC858
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800DC85C
  c->lr=c->r[0]; // 800DC860
  c->r[1]=c->r[1]+0x00000050u; // 800DC864
  return; // 800DC868
}

// fn_800DC86C
void f_800DC86C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC86C
  c->r[0]=c->lr; // 800DC870
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC874
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC878
  c->r[31]=c->r[4]|c->r[4]; // 800DC87C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DC880
  c->r[30]=c->r[3]|c->r[3]; // 800DC884
  c->r[3]=c->r[31]|c->r[31]; // 800DC888
  c->lr=0x800DC890u; f_802B9FDC(c); // 800DC88C
  cmps(c,0,(int32_t)c->r[3],0); // 800DC890
  if (crb(c,2)) { goto L_800DC8B0; } // 800DC894
  c->r[3]=R32(c->r[31]+0x00000000u); // 800DC898
  c->r[0]=R32(c->r[31]+0x00000004u); // 800DC89C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800DC8A0
  W32(c->r[30]+0x00000020u,c->r[0]); // 800DC8A4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800DC8A8
  W32(c->r[30]+0x00000024u,c->r[0]); // 800DC8AC
L_800DC8B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC8B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC8B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DC8B8
  c->lr=c->r[0]; // 800DC8BC
  c->r[1]=c->r[1]+0x00000010u; // 800DC8C0
  return; // 800DC8C4
}

// fn_800DC8C8
void f_800DC8C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC8C8
  c->r[0]=c->lr; // 800DC8CC
  c->r[4]=0u+0x00000000u; // 800DC8D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC8D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DC8D8
  c->r[31]=c->r[3]|c->r[3]; // 800DC8DC
  c->r[3]=R32(c->r[3]+0x00000438u); // 800DC8E0
  c->lr=0x800DC8E8u; f_801FAF00(c); // 800DC8E4
  cmps(c,0,(int32_t)c->r[3],0); // 800DC8E8
  if (!crb(c,2)) { goto L_800DC990; } // 800DC8EC
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800DC8F0
  c->r[4]=c->r[13]+0xFFFF8550u; // 800DC8F4
  c->r[3]=c->r[31]|c->r[31]; // 800DC8F8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800DC8FC
  c->r[0]=R16(c->r[4]+c->r[0]); // 800DC900
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800DC904
  c->lr=0x800DC90Cu; f_801F5AB4(c); // 800DC908
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DC90C
  c->r[3]=c->r[31]+0x0000002Cu; // 800DC910
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DC914
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800DC918
  c->r[0]=c->r[0]|0x00000004u; // 800DC91C
  c->r[4]=c->r[4]+0x0000005Cu; // 800DC920
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800DC924
  c->lr=0x800DC92Cu; f_800361A0(c); // 800DC928
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DC92C
  c->r[3]=c->r[31]+0x00000060u; // 800DC930
  c->r[4]=c->r[4]+0x00000068u; // 800DC934
  c->lr=0x800DC93Cu; f_800361A0(c); // 800DC938
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800DC93C
  c->r[3]=0u+0x805D0000u; // 800DC940
  c->r[0]=R32(c->r[31]+0x00000030u); // 800DC944
  c->r[3]=c->r[3]+0x00006CF8u; // 800DC948
  c->r[4]=c->r[1]+0x00000008u; // 800DC94C
  c->r[5]=0u+0x00040000u; // 800DC950
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DC954
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DC958
  c->r[0]=R32(c->r[31]+0x00000034u); // 800DC95C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DC960
  c->lr=0x800DC968u; f_802236F8(c); // 800DC964
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800DC968
  c->r[3]=c->r[31]|c->r[31]; // 800DC96C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DC970
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DC974
  c->ctr=c->r[12]; // 800DC978
  if (true) { c->lr=0x800DC980u; dispatch(c,c->ctr); } // 800DC97C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DC980
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DC984
  c->lr=0x800DC98Cu; f_8025037C(c); // 800DC988
  goto L_800DC9B0; // 800DC98C
L_800DC990:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DC990
  c->r[3]=c->r[31]+0x0000002Cu; // 800DC994
  c->r[4]=c->r[4]+0x0000005Cu; // 800DC998
  c->lr=0x800DC9A0u; f_800361A0(c); // 800DC99C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DC9A0
  c->r[3]=c->r[31]+0x00000060u; // 800DC9A4
  c->r[4]=c->r[4]+0x00000068u; // 800DC9A8
  c->lr=0x800DC9B0u; f_800361A0(c); // 800DC9AC
L_800DC9B0:;
  c->r[3]=c->r[31]|c->r[31]; // 800DC9B0
  c->r[4]=0u+0x00000000u; // 800DC9B4
  c->lr=0x800DC9BCu; f_801F7C00(c); // 800DC9B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC9BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DC9C0
  c->lr=c->r[0]; // 800DC9C4
  c->r[1]=c->r[1]+0x00000020u; // 800DC9C8
  return; // 800DC9CC
}

// fn_800DC9D0
void f_800DC9D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC9D0
  c->r[0]=c->lr; // 800DC9D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC9D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC9DC
  c->r[31]=c->r[3]|c->r[3]; // 800DC9E0
  c->r[5]=R32(c->r[3]+0x000003C4u); // 800DC9E4
  c->r[0]=c->r[5]+0x00000000u; // 800DC9E8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800DC9EC
  if (crb(c,2)) { goto L_800DCA14; } // 800DC9F0
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800DC9F4
  c->r[6]=0u+0x00000000u; // 800DC9F8
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC9FC
  c->r[12]=R32(c->r[12]+0x00000064u); // 800DCA00
  c->f[2]=c->f[1]; // 800DCA04
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DCA08
  c->ctr=c->r[12]; // 800DCA0C
  if (true) { c->lr=0x800DCA14u; dispatch(c,c->ctr); } // 800DCA10
L_800DCA14:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DCA14
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DCA18
  c->lr=0x800DCA20u; f_802501B0(c); // 800DCA1C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DCA20
  c->r[5]=0u+0x00000000u; // 800DCA24
  c->r[3]=0u+0x00000001u; // 800DCA28
  W8(c->r[4]+0x0000014Cu,c->r[5]); // 800DCA2C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DCA30
  W8(c->r[4]+0x0000014Du,c->r[5]); // 800DCA34
  c->r[4]=R16(c->r[31]+0x000003BEu); // 800DCA38
  c->r[0]=R8(c->r[31]+0x00000074u); // 800DCA3C
  c->r[4]=rotl(c->r[4],0)&0xFFFFDFFFu; // 800DCA40
  W8(c->r[31]+0x0000006Fu,c->r[3]); // 800DCA44
  cmpu(c,0,c->r[0],0x00000001u); // 800DCA48
  W16(c->r[31]+0x000003BEu,c->r[4]); // 800DCA4C
  if (crb(c,2)) { goto L_800DCA58; } // 800DCA50
  W8(c->r[31]+0x00000074u,c->r[5]); // 800DCA54
L_800DCA58:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800DCA58
  c->r[4]=c->r[31]+0x000003CCu; // 800DCA5C
  c->lr=0x800DCA64u; f_800361A0(c); // 800DCA60
  c->r[3]=c->r[31]+0x00000060u; // 800DCA64
  c->r[4]=c->r[31]+0x000003D8u; // 800DCA68
  c->lr=0x800DCA70u; f_800361A0(c); // 800DCA6C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DCA70
  c->r[3]=c->r[31]|c->r[31]; // 800DCA74
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DCA78
  c->ctr=c->r[12]; // 800DCA7C
  if (true) { c->lr=0x800DCA84u; dispatch(c,c->ctr); } // 800DCA80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCA84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCA88
  c->lr=c->r[0]; // 800DCA8C
  c->r[1]=c->r[1]+0x00000010u; // 800DCA90
  return; // 800DCA94
}

// fn_800DCA98
void f_800DCA98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCA98
  c->r[0]=c->lr; // 800DCA9C
  c->r[5]=0u+0x00000000u; // 800DCAA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCAA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCAA8
  c->r[31]=c->r[3]|c->r[3]; // 800DCAAC
  c->r[3]=0u+0x000004D9u; // 800DCAB0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DCAB4
  c->r[4]=c->r[4]+0x0000010Cu; // 800DCAB8
  c->lr=0x800DCAC0u; f_8024EE50(c); // 800DCABC
  cmps(c,0,(int32_t)c->r[3],0); // 800DCAC0
  if (crb(c,2)) { goto L_800DCAD0; } // 800DCAC4
  c->r[3]=0u+0x00000000u; // 800DCAC8
  goto L_800DCB00; // 800DCACC
L_800DCAD0:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800DCAD0
  c->r[3]=0u+0x000004C1u; // 800DCAD4
  c->r[5]=0u+0x00000000u; // 800DCAD8
  c->r[4]=c->r[4]+0x0000010Cu; // 800DCADC
  c->lr=0x800DCAE4u; f_8024EE50(c); // 800DCAE0
  cmps(c,0,(int32_t)c->r[3],0); // 800DCAE4
  if (crb(c,2)) { goto L_800DCAF4; } // 800DCAE8
  c->r[3]=0u+0x00000000u; // 800DCAEC
  goto L_800DCB00; // 800DCAF0
L_800DCAF4:;
  c->r[3]=c->r[31]+0x00000210u; // 800DCAF4
  c->r[4]=0u+0x000000E1u; // 800DCAF8
  c->lr=0x800DCB00u; f_80221630(c); // 800DCAFC
L_800DCB00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCB00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCB04
  c->lr=c->r[0]; // 800DCB08
  c->r[1]=c->r[1]+0x00000010u; // 800DCB0C
  return; // 800DCB10
}

// fn_800DCB14
void f_800DCB14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCB14
  c->r[0]=c->lr; // 800DCB18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCB1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCB20
  c->r[31]=0u+0x805D0000u; // 800DCB24
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DCB28
  c->r[30]=c->r[3]|c->r[3]; // 800DCB2C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800DCB30
  c->lr=0x800DCB38u; f_80045264(c); // 800DCB34
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800DCB38
  c->r[4]=c->r[13]+0xFFFF8550u; // 800DCB3C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800DCB40
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800DCB44
  c->r[0]=R16(c->r[4]+c->r[0]); // 800DCB48
  cmpu(c,0,c->r[0],c->r[3]); // 800DCB4C
  if (!crb(c,2)) { goto L_800DCB8C; } // 800DCB50
  c->r[3]=c->r[31]+0x00003F6Cu; // 800DCB54
  c->lr=0x800DCB5Cu; f_80037AF0(c); // 800DCB58
  cmpu(c,0,c->r[3],c->r[30]); // 800DCB5C
  if (!crb(c,2)) { goto L_800DCB8C; } // 800DCB60
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800DCB64
  cmps(c,0,(int32_t)c->r[0],101); // 800DCB68
  if (crb(c,2)) { goto L_800DCB8C; } // 800DCB6C
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DCB70
  c->r[3]=c->r[30]|c->r[30]; // 800DCB74
  c->r[4]=0u+0x00000065u; // 800DCB78
  c->r[5]=0u+0x00000000u; // 800DCB7C
  c->r[6]=0u+0x00000000u; // 800DCB80
  c->r[7]=0u+0x00000000u; // 800DCB84
  c->lr=0x800DCB8Cu; f_801F4D44(c); // 800DCB88
L_800DCB8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCB8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCB90
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DCB94
  c->lr=c->r[0]; // 800DCB98
  c->r[1]=c->r[1]+0x00000010u; // 800DCB9C
  return; // 800DCBA0
}

// fn_800DCBA4
void f_800DCBA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCBA4
  c->r[0]=c->lr; // 800DCBA8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DCBAC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800DCBB0
  c->r[31]=0u+0x803D0000u; // 800DCBB4
  c->r[31]=c->r[31]+0x00002A68u; // 800DCBB8
  W32(c->r[1]+0x00000038u,c->r[30]); // 800DCBBC
  c->r[30]=c->r[3]|c->r[3]; // 800DCBC0
  c->lr=0x800DCBC8u; f_801F4F28(c); // 800DCBC4
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800DCBC8
  cmps(c,0,(int32_t)c->r[0],101); // 800DCBCC
  if (crb(c,2)) { goto L_800DCC20; } // 800DCBD0
  if (!crb(c,0)) { goto L_800DCBE4; } // 800DCBD4
  cmps(c,0,(int32_t)c->r[0],100); // 800DCBD8
  if (!crb(c,0)) { goto L_800DCBF0; } // 800DCBDC
  goto L_800DCC7C; // 800DCBE0
L_800DCBE4:;
  cmps(c,0,(int32_t)c->r[0],103); // 800DCBE4
  if (!crb(c,0)) { goto L_800DCC7C; } // 800DCBE8
  goto L_800DCC50; // 800DCBEC
L_800DCBF0:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800DCBF0
  c->r[5]=c->r[31]+0x0000004Cu; // 800DCBF4
  c->r[3]=c->r[30]|c->r[30]; // 800DCBF8
  c->r[4]=c->r[1]+0x00000020u; // 800DCBFC
  c->r[7]=R32(c->r[31]+0x0000004Cu); // 800DCC00
  c->r[6]=R32(c->r[5]+0x00000004u); // 800DCC04
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DCC08
  W32(c->r[1]+0x00000020u,c->r[7]); // 800DCC0C
  W32(c->r[1]+0x00000024u,c->r[6]); // 800DCC10
  W32(c->r[1]+0x00000028u,c->r[0]); // 800DCC14
  c->lr=0x800DCC1Cu; f_800DC86C(c); // 800DCC18
  goto L_800DCC7C; // 800DCC1C
L_800DCC20:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800DCC20
  c->r[5]=c->r[31]+0x00000058u; // 800DCC24
  c->r[3]=c->r[30]|c->r[30]; // 800DCC28
  c->r[4]=c->r[1]+0x00000014u; // 800DCC2C
  c->r[7]=R32(c->r[31]+0x00000058u); // 800DCC30
  c->r[6]=R32(c->r[5]+0x00000004u); // 800DCC34
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DCC38
  W32(c->r[1]+0x00000014u,c->r[7]); // 800DCC3C
  W32(c->r[1]+0x00000018u,c->r[6]); // 800DCC40
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800DCC44
  c->lr=0x800DCC4Cu; f_800DC86C(c); // 800DCC48
  goto L_800DCC7C; // 800DCC4C
L_800DCC50:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800DCC50
  c->r[5]=c->r[31]+0x00000064u; // 800DCC54
  c->r[3]=c->r[30]|c->r[30]; // 800DCC58
  c->r[4]=c->r[1]+0x00000008u; // 800DCC5C
  c->r[7]=R32(c->r[31]+0x00000064u); // 800DCC60
  c->r[6]=R32(c->r[5]+0x00000004u); // 800DCC64
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DCC68
  W32(c->r[1]+0x00000008u,c->r[7]); // 800DCC6C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800DCC70
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DCC74
  c->lr=0x800DCC7Cu; f_800DC86C(c); // 800DCC78
L_800DCC7C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DCC7C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DCC80
  c->r[30]=R32(c->r[1]+0x00000038u); // 800DCC84
  c->lr=c->r[0]; // 800DCC88
  c->r[1]=c->r[1]+0x00000040u; // 800DCC8C
  return; // 800DCC90
}

// fn_800DCC94
void f_800DCC94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCC94
  c->r[0]=c->lr; // 800DCC98
  c->r[6]=c->r[4]|c->r[4]; // 800DCC9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCCA0
  c->r[0]=R8(c->r[3]+0x00000074u); // 800DCCA4
  cmps(c,0,(int32_t)c->r[0],1); // 800DCCA8
  if (crb(c,2)) { goto L_800DCCB8; } // 800DCCAC
  c->r[5]=0u+0x00000000u; // 800DCCB0
  goto L_800DCCBC; // 800DCCB4
L_800DCCB8:;
  c->r[5]=0u+0x00000001u; // 800DCCB8
L_800DCCBC:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DCCBC
  c->r[3]=c->r[6]|c->r[6]; // 800DCCC0
  c->lr=0x800DCCC8u; f_80250BF4(c); // 800DCCC4
  cmps(c,0,(int32_t)c->r[3],0); // 800DCCC8
  if (crb(c,2)) { goto L_800DCCD8; } // 800DCCCC
  c->r[3]=0u+0x00000000u; // 800DCCD0
  goto L_800DCCDC; // 800DCCD4
L_800DCCD8:;
  c->r[3]=0u+0xFFFFFFFFu; // 800DCCD8
L_800DCCDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCCDC
  c->lr=c->r[0]; // 800DCCE0
  c->r[1]=c->r[1]+0x00000010u; // 800DCCE4
  return; // 800DCCE8
}

// fn_800DCCEC
void f_800DCCEC(Ctx* __restrict c) {
  W8(c->r[3]+0x00000074u,c->r[4]); // 800DCCEC
  return; // 800DCCF0
}

// fn_800DCCF4
void f_800DCCF4(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800DCCF4
  c->r[0]=c->r[0]|0x00000010u; // 800DCCF8
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800DCCFC
  return; // 800DCD00
}

// fn_800DCD04
void f_800DCD04(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800DCD04
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800DCD08
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800DCD0C
  return; // 800DCD10
}

// fn_800DCD14
void f_800DCD14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCD14
  c->r[0]=c->lr; // 800DCD18
  c->r[7]=0u+0x803D0000u; // 800DCD1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DCD20
  c->r[4]=c->r[1]+0x00000008u; // 800DCD24
  {uint32_t ea=c->r[7]+0x00002AD8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800DCD28
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DCD2C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DCD30
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DCD34
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DCD38
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DCD3C
  c->lr=0x800DCD44u; f_800DC86C(c); // 800DCD40
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DCD44
  c->lr=c->r[0]; // 800DCD48
  c->r[1]=c->r[1]+0x00000020u; // 800DCD4C
  return; // 800DCD50
}

// fn_800DCD54
void f_800DCD54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCD54
  c->r[0]=c->lr; // 800DCD58
  W32(c->r[1]+0x00000094u,c->r[0]); // 800DCD5C
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800DCD60
  W32(c->r[1]+0x00000088u,c->r[30]); // 800DCD64
  c->r[30]=c->r[3]|c->r[3]; // 800DCD68
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DCD6C
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800DCD70
  cmps(c,0,(int32_t)c->r[0],0); // 800DCD74
  if (!crb(c,2)) { goto L_800DCE04; } // 800DCD78
  c->r[3]=R16(c->r[3]+0x000003BEu); // 800DCD7C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800DCD80
  if (crb(c,2)) { goto L_800DCE04; } // 800DCD84
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800DCD88
  cmps(c,0,(int32_t)c->r[0],128); // 800DCD8C
  if (!crb(c,2)) { goto L_800DCDB8; } // 800DCD90
  c->r[3]=0u+0x80620000u; // 800DCD94
  c->r[3]=c->r[3]+0x00007688u; // 800DCD98
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DCD9C
  cmps(c,0,(int32_t)c->r[3],0); // 800DCDA0
  if (crb(c,2)) { goto L_800DCDB8; } // 800DCDA4
  c->r[4]=0u+0x00000002u; // 800DCDA8
  c->lr=0x800DCDB0u; f_80037670(c); // 800DCDAC
  cmps(c,0,(int32_t)c->r[3],0); // 800DCDB0
  if (!crb(c,2)) { goto L_800DCE04; } // 800DCDB4
L_800DCDB8:;
  {uint32_t ea=c->r[2]+0xFFFFA418u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DCDB8
  c->r[3]=c->r[1]+0x00000008u; // 800DCDBC
  c->r[4]=c->r[30]+0x0000002Cu; // 800DCDC0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800DCDC4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800DCDC8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800DCDCC
  c->lr=0x800DCDD4u; f_800361A0(c); // 800DCDD0
  c->r[31]=0u+0x80550000u; // 800DCDD4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DCDD8
  c->r[31]=c->r[31]+0x00003D60u; // 800DCDDC
  c->r[5]=c->r[30]|c->r[30]; // 800DCDE0
  c->r[3]=c->r[31]+0x00000010u; // 800DCDE4
  c->r[6]=c->r[1]+0x00000008u; // 800DCDE8
  c->r[7]=c->r[1]+0x00000020u; // 800DCDEC
  c->r[4]=0u+0x000001FFu; // 800DCDF0
  c->lr=0x800DCDF8u; f_80226910(c); // 800DCDF4
  c->r[3]=c->r[31]+0x00000010u; // 800DCDF8
  c->r[4]=c->r[1]+0x00000020u; // 800DCDFC
  c->lr=0x800DCE04u; f_80226D68(c); // 800DCE00
L_800DCE04:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800DCE04
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800DCE08
  c->r[30]=R32(c->r[1]+0x00000088u); // 800DCE0C
  c->lr=c->r[0]; // 800DCE10
  c->r[1]=c->r[1]+0x00000090u; // 800DCE14
  return; // 800DCE18
}

// fn_800DCE1C
void f_800DCE1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCE1C
  c->r[0]=c->lr; // 800DCE20
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DCE24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DCE28
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DCE2C
  c->r[30]=c->r[3]|c->r[3]; // 800DCE30
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DCE34
  cmps(c,0,(int32_t)c->r[4],0); // 800DCE38
  if (crb(c,2)) { goto L_800DCEF0; } // 800DCE3C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DCE40
  cmps(c,0,(int32_t)c->r[3],0); // 800DCE44
  if (crb(c,2)) { goto L_800DCEF0; } // 800DCE48
  c->r[31]=0u+0x803A0000u; // 800DCE4C
  c->r[5]=c->r[1]+0x00000008u; // 800DCE50
  c->r[31]=c->r[31]+0xFFFFE3ACu; // 800DCE54
  c->r[4]=c->r[31]+0x00000009u; // 800DCE58
  c->lr=0x800DCE60u; f_80258A38(c); // 800DCE5C
  {uint32_t ea=c->r[2]+0xFFFFA41Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DCE60
  c->r[4]=c->r[31]+0x00000009u; // 800DCE64
  c->r[5]=c->r[1]+0x00000008u; // 800DCE68
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800DCE6C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DCE70
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DCE74
  c->lr=0x800DCE7Cu; f_8025892C(c); // 800DCE78
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DCE7C
  c->r[4]=c->r[31]+0x00000019u; // 800DCE80
  c->r[5]=c->r[1]+0x00000008u; // 800DCE84
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DCE88
  c->lr=0x800DCE90u; f_80258A38(c); // 800DCE8C
  {uint32_t ea=c->r[2]+0xFFFFA41Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DCE90
  c->r[4]=c->r[31]+0x00000019u; // 800DCE94
  c->r[5]=c->r[1]+0x00000008u; // 800DCE98
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800DCE9C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DCEA0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DCEA4
  c->lr=0x800DCEACu; f_8025892C(c); // 800DCEA8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DCEAC
  c->r[4]=c->r[31]+0x00000029u; // 800DCEB0
  c->r[5]=c->r[1]+0x00000008u; // 800DCEB4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DCEB8
  c->lr=0x800DCEC0u; f_80258A38(c); // 800DCEBC
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800DCEC0
  c->r[4]=0u+0x803D0000u; // 800DCEC4
  c->r[4]=c->r[4]+0x00002A68u; // 800DCEC8
  c->r[3]=c->r[1]+0x00000008u; // 800DCECC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800DCED0
  c->r[4]=c->r[4]+c->r[0]; // 800DCED4
  c->lr=0x800DCEDCu; f_8004F9F8(c); // 800DCED8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DCEDC
  c->r[4]=c->r[31]+0x00000029u; // 800DCEE0
  c->r[5]=c->r[1]+0x00000008u; // 800DCEE4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DCEE8
  c->lr=0x800DCEF0u; f_8025892C(c); // 800DCEEC
L_800DCEF0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DCEF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DCEF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DCEF8
  c->lr=c->r[0]; // 800DCEFC
  c->r[1]=c->r[1]+0x00000020u; // 800DCF00
  return; // 800DCF04
}

// fn_800DCF08
void f_800DCF08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCF08
  c->r[0]=c->lr; // 800DCF0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCF10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCF14
  c->r[31]=c->r[3]|c->r[3]; // 800DCF18
  c->r[3]=c->r[3]+0x00000210u; // 800DCF1C
  c->lr=0x800DCF24u; f_8004BAD4(c); // 800DCF20
  cmps(c,0,(int32_t)c->r[3],0); // 800DCF24
  if (crb(c,2)) { goto L_800DCF98; } // 800DCF28
  c->r[0]=R32(c->r[31]+0x00000210u); // 800DCF2C
  c->r[4]=c->r[31]|c->r[31]; // 800DCF30
  c->r[3]=c->r[31]+0x00000210u; // 800DCF34
  c->r[0]=c->r[0]|0xAA000000u; // 800DCF38
  W32(c->r[31]+0x00000210u,c->r[0]); // 800DCF3C
  c->lr=0x800DCF44u; f_80043E44(c); // 800DCF40
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DCF44
  c->r[3]=c->r[31]+0x00000210u; // 800DCF48
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DCF4C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DCF50
  c->lr=0x800DCF58u; f_80043E34(c); // 800DCF54
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DCF58
  c->r[4]=0u+0x803A0000u; // 800DCF5C
  c->r[4]=c->r[4]+0xFFFFE3ACu; // 800DCF60
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DCF64
  c->r[4]=c->r[4]+0x00000042u; // 800DCF68
  c->lr=0x800DCF70u; f_80256EC4(c); // 800DCF6C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DCF70
  c->r[5]=c->r[3]|c->r[3]; // 800DCF74
  c->r[3]=c->r[31]+0x00000210u; // 800DCF78
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800DCF7C
  c->lr=0x800DCF84u; f_8004BAC8(c); // 800DCF80
  {uint32_t ea=c->r[2]+0xFFFFA420u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DCF84
  c->r[3]=c->r[31]+0x00000210u; // 800DCF88
  c->f[2]=c->f[1]; // 800DCF8C
  c->f[3]=c->f[1]; // 800DCF90
  c->lr=0x800DCF98u; f_80043E24(c); // 800DCF94
L_800DCF98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCF98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCF9C
  c->lr=c->r[0]; // 800DCFA0
  c->r[1]=c->r[1]+0x00000010u; // 800DCFA4
  return; // 800DCFA8
}

// fn_800DCFAC
void f_800DCFAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCFAC
  c->r[0]=c->lr; // 800DCFB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCFB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCFB8
  c->r[31]=c->r[3]|c->r[3]; // 800DCFBC
  c->r[3]=c->r[3]+0x00000210u; // 800DCFC0
  c->lr=0x800DCFC8u; f_80221698(c); // 800DCFC4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DCFC8
  cmps(c,0,(int32_t)c->r[3],0); // 800DCFCC
  if (crb(c,2)) { goto L_800DCFF0; } // 800DCFD0
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800DCFD4
  cmps(c,0,(int32_t)c->r[0],0); // 800DCFD8
  if (crb(c,2)) { goto L_800DCFF0; } // 800DCFDC
  c->r[0]=R32(c->r[31]+0x00000210u); // 800DCFE0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800DCFE4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800DCFE8
  goto L_800DCFFC; // 800DCFEC
L_800DCFF0:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800DCFF0
  c->r[0]=c->r[0]|0x80000000u; // 800DCFF4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800DCFF8
L_800DCFFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCFFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD000
  c->lr=c->r[0]; // 800DD004
  c->r[1]=c->r[1]+0x00000010u; // 800DD008
  return; // 800DD00C
}

// fn_800DD010
void f_800DD010(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD010
  c->r[0]=c->lr; // 800DD014
  cmps(c,0,(int32_t)c->r[3],0); // 800DD018
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD01C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD020
  c->r[31]=c->r[4]|c->r[4]; // 800DD024
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD028
  c->r[30]=c->r[3]|c->r[3]; // 800DD02C
  if (crb(c,2)) { goto L_800DD04C; } // 800DD030
  c->r[4]=0u+0x00000000u; // 800DD034
  c->lr=0x800DD03Cu; f_8026A06C(c); // 800DD038
  cmps(c,0,(int32_t)c->r[31],0); // 800DD03C
  if (!crb(c,1)) { goto L_800DD04C; } // 800DD040
  c->r[3]=c->r[30]|c->r[30]; // 800DD044
  c->lr=0x800DD04Cu; f_8026A268(c); // 800DD048
L_800DD04C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DD04C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD050
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD054
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD058
  c->lr=c->r[0]; // 800DD05C
  c->r[1]=c->r[1]+0x00000010u; // 800DD060
  return; // 800DD064
}

// fn_800DD068
void f_800DD068(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD068
  c->r[0]=c->lr; // 800DD06C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD070
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800DD074
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800DD078
  c->r[4]=0u+0x00000000u; // 800DD07C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD080
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD084
  c->r[30]=c->r[3]|c->r[3]; // 800DD088
  c->lr=0x800DD090u; f_801F57D0(c); // 800DD08C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800DD090
  c->r[3]=c->r[30]|c->r[30]; // 800DD094
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800DD098
  c->ctr=c->r[12]; // 800DD09C
  if (true) { c->lr=0x800DD0A4u; dispatch(c,c->ctr); } // 800DD0A0
  c->r[3]=c->r[30]|c->r[30]; // 800DD0A4
  c->lr=0x800DD0ACu; f_801F4B94(c); // 800DD0A8
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800DD0AC
  c->r[9]=0u+0x00000000u; // 800DD0B0
  {uint32_t ea=c->r[2]+0xFFFFA434u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD0B4
  c->r[0]=0u+0x000000FFu; // 800DD0B8
  c->r[3]=c->r[3]|0x00004804u; // 800DD0BC
  {uint32_t ea=c->r[2]+0xFFFFA430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD0C0
  c->r[7]=rotl(c->r[3],0)&0x00007FFFu; // 800DD0C4
  c->r[8]=c->r[9]|0x00000010u; // 800DD0C8
  c->r[5]=0u+0x00000003u; // 800DD0CC
  c->r[4]=0u+0x00000043u; // 800DD0D0
  c->r[31]=0u+0x00000001u; // 800DD0D4
  c->r[3]=0u+0x80550000u; // 800DD0D8
  W8(c->r[30]+0x0000006Cu,c->r[5]); // 800DD0DC
  c->f[3]=c->f[1]; // 800DD0E0
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DD0E4
  c->r[3]=c->r[3]+0x00003D60u; // 800DD0E8
  W8(c->r[30]+0x0000006Du,c->r[4]); // 800DD0EC
  c->r[4]=c->r[30]+0x0000002Cu; // 800DD0F0
  {uint32_t ea=c->r[2]+0xFFFFA438u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DD0F4
  W16(c->r[30]+0x000003BEu,c->r[7]); // 800DD0F8
  c->r[5]=c->r[30]+0x00000030u; // 800DD0FC
  c->r[6]=0u+0x00000000u; // 800DD100
  c->r[7]=0u+0x00000000u; // 800DD104
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800DD108
  W8(c->r[30]+0x00000074u,c->r[9]); // 800DD10C
  W32(c->r[30]+0x00000078u,c->r[8]); // 800DD110
  W8(c->r[30]+0x00000075u,c->r[0]); // 800DD114
  W8(c->r[30]+0x00000076u,c->r[0]); // 800DD118
  W16(c->r[30]+0x00000098u,c->r[9]); // 800DD11C
  W16(c->r[30]+0x0000009Au,c->r[9]); // 800DD120
  W8(c->r[30]+0x00000090u,c->r[9]); // 800DD124
  W8(c->r[30]+0x00000091u,c->r[9]); // 800DD128
  W8(c->r[30]+0x00000092u,c->r[9]); // 800DD12C
  W8(c->r[30]+0x00000093u,c->r[9]); // 800DD130
  W8(c->r[30]+0x00000094u,c->r[0]); // 800DD134
  W8(c->r[30]+0x00000095u,c->r[0]); // 800DD138
  W8(c->r[30]+0x00000096u,c->r[0]); // 800DD13C
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 800DD140
  W8(c->r[30]+0x00000028u,c->r[9]); // 800DD144
  c->lr=0x800DD14Cu; f_801D5488(c); // 800DD148
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DD14C
  c->r[3]=c->r[30]|c->r[30]; // 800DD150
  c->lr=0x800DD158u; f_801F58BC(c); // 800DD154
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DD158
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800DD15C
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD160
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DD164
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800DD168
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DD16C
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800DD170
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DD174
  c->lr=0x800DD17Cu; f_802501B0(c); // 800DD178
  c->r[3]=0u+0x805D0000u; // 800DD17C
  c->r[4]=c->r[30]+0x0000002Cu; // 800DD180
  c->r[3]=c->r[3]+0x000078B0u; // 800DD184
  c->lr=0x800DD18Cu; f_802351CC(c); // 800DD188
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DD18C
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800DD190
  c->r[3]=c->r[30]|c->r[30]; // 800DD194
  c->lr=0x800DD19Cu; f_801F56F4(c); // 800DD198
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800DD19C
  c->r[3]=c->r[30]|c->r[30]; // 800DD1A0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DD1A4
  c->ctr=c->r[12]; // 800DD1A8
  if (true) { c->lr=0x800DD1B0u; dispatch(c,c->ctr); } // 800DD1AC
  c->r[3]=c->r[30]|c->r[30]; // 800DD1B0
  c->lr=0x800DD1B8u; f_800DDD6C(c); // 800DD1B4
  c->r[3]=c->r[30]|c->r[30]; // 800DD1B8
  c->lr=0x800DD1C0u; f_800DF100(c); // 800DD1BC
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800DD1C0
  W32(c->r[30]+0x00000444u,c->r[31]); // 800DD1C4
  c->lr=0x800DD1CCu; f_8024E174(c); // 800DD1C8
  W32(c->r[30]+0x00000438u,c->r[3]); // 800DD1CC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800DD1D0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800DD1D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD1D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD1DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DD1E0
  c->lr=c->r[0]; // 800DD1E4
  c->r[1]=c->r[1]+0x00000020u; // 800DD1E8
  return; // 800DD1EC
}

// fn_800DD1F0
void f_800DD1F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD1F0
  c->r[0]=c->lr; // 800DD1F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD1F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD1FC
  c->r[31]=c->r[3]|c->r[3]; // 800DD200
  c->lr=0x800DD208u; f_800DDA5C(c); // 800DD204
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DD208
  c->r[3]=c->r[31]|c->r[31]; // 800DD20C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800DD210
  c->ctr=c->r[12]; // 800DD214
  if (true) { c->lr=0x800DD21Cu; dispatch(c,c->ctr); } // 800DD218
  c->r[3]=c->r[31]|c->r[31]; // 800DD21C
  c->lr=0x800DD224u; f_801F4C0C(c); // 800DD220
  c->r[3]=c->r[31]|c->r[31]; // 800DD224
  c->lr=0x800DD22Cu; f_800DDCA4(c); // 800DD228
  c->r[3]=c->r[31]|c->r[31]; // 800DD22C
  c->lr=0x800DD234u; f_801F56F4(c); // 800DD230
  c->r[3]=c->r[31]|c->r[31]; // 800DD234
  c->lr=0x800DD23Cu; f_800DDF7C(c); // 800DD238
  c->r[3]=c->r[31]|c->r[31]; // 800DD23C
  c->lr=0x800DD244u; f_800DF1A4(c); // 800DD240
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD244
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD248
  c->lr=c->r[0]; // 800DD24C
  c->r[1]=c->r[1]+0x00000010u; // 800DD250
  return; // 800DD254
}

// fn_800DD258
void f_800DD258(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD258
  c->r[0]=c->lr; // 800DD25C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD260
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD264
  c->r[31]=c->r[3]|c->r[3]; // 800DD268
  c->r[4]=R8(c->r[3]+0x00000075u); // 800DD26C
  cmpu(c,0,c->r[4],0x000000FFu); // 800DD270
  if (crb(c,2)) { goto L_800DD28C; } // 800DD274
  c->r[3]=0u+0x80550000u; // 800DD278
  c->r[3]=c->r[3]+0xFFFFC848u; // 800DD27C
  c->lr=0x800DD284u; f_8018D694(c); // 800DD280
  c->r[0]=0u+0x000000FFu; // 800DD284
  W8(c->r[31]+0x00000075u,c->r[0]); // 800DD288
L_800DD28C:;
  c->r[4]=R8(c->r[31]+0x00000076u); // 800DD28C
  cmpu(c,0,c->r[4],0x000000FFu); // 800DD290
  if (crb(c,2)) { goto L_800DD2AC; } // 800DD294
  c->r[3]=0u+0x80550000u; // 800DD298
  c->r[3]=c->r[3]+0xFFFFC848u; // 800DD29C
  c->lr=0x800DD2A4u; f_8018D694(c); // 800DD2A0
  c->r[0]=0u+0x000000FFu; // 800DD2A4
  W8(c->r[31]+0x00000076u,c->r[0]); // 800DD2A8
L_800DD2AC:;
  c->r[3]=c->r[31]|c->r[31]; // 800DD2AC
  c->lr=0x800DD2B4u; f_801F4C78(c); // 800DD2B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD2B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD2B8
  c->lr=c->r[0]; // 800DD2BC
  c->r[1]=c->r[1]+0x00000010u; // 800DD2C0
  return; // 800DD2C4
}

// fn_800DD2C8
void f_800DD2C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD2C8
  c->r[0]=c->lr; // 800DD2CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD2D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD2D4
  c->r[31]=c->r[3]|c->r[3]; // 800DD2D8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DD2DC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DD2E0
  c->lr=0x800DD2E8u; f_802501B0(c); // 800DD2E4
  c->r[3]=c->r[31]|c->r[31]; // 800DD2E8
  c->r[4]=0u+0x00000000u; // 800DD2EC
  c->lr=0x800DD2F4u; f_801F5244(c); // 800DD2F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD2F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD2F8
  c->lr=c->r[0]; // 800DD2FC
  c->r[1]=c->r[1]+0x00000010u; // 800DD300
  return; // 800DD304
}

// fn_800DD308
void f_800DD308(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD308
  c->r[0]=c->lr; // 800DD30C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD310
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD314
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD318
  c->r[30]=c->r[3]|c->r[3]; // 800DD31C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DD320
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DD324
  c->lr=0x800DD32Cu; f_802501B0(c); // 800DD328
  c->r[3]=c->r[30]|c->r[30]; // 800DD32C
  c->r[4]=0u+0x00000000u; // 800DD330
  c->lr=0x800DD338u; f_801F5244(c); // 800DD334
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DD338
  c->r[3]=c->r[30]+0x0000002Cu; // 800DD33C
  c->r[4]=c->r[4]+0x0000005Cu; // 800DD340
  c->lr=0x800DD348u; f_800361A0(c); // 800DD344
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DD348
  c->r[3]=c->r[30]|c->r[30]; // 800DD34C
  c->lr=0x800DD354u; f_801F5418(c); // 800DD350
  cmps(c,0,(int32_t)c->r[3],0); // 800DD354
  if (!crb(c,0)) { goto L_800DD3A4; } // 800DD358
  c->r[4]=R16(c->r[30]+0x000003BEu); // 800DD35C
  c->r[3]=0u+0x00000001u; // 800DD360
  c->r[0]=R8(c->r[30]+0x00000074u); // 800DD364
  c->r[4]=c->r[4]|0x00000080u; // 800DD368
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800DD36C
  cmpu(c,0,c->r[0],0x00000001u); // 800DD370
  W16(c->r[30]+0x000003BEu,c->r[4]); // 800DD374
  if (crb(c,2)) { goto L_800DD384; } // 800DD378
  c->r[0]=0u+0x00000000u; // 800DD37C
  W8(c->r[30]+0x00000074u,c->r[0]); // 800DD380
L_800DD384:;
  {uint32_t ea=c->r[2]+0xFFFFA434u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD384
  c->r[3]=c->r[30]|c->r[30]; // 800DD388
  c->r[4]=0u+0x00000064u; // 800DD38C
  c->r[5]=0u+0x00000000u; // 800DD390
  c->r[6]=0u+0x00000000u; // 800DD394
  c->r[7]=0u+0x00000000u; // 800DD398
  c->lr=0x800DD3A0u; f_801F4D44(c); // 800DD39C
  goto L_800DD3D8; // 800DD3A0
L_800DD3A4:;
  c->r[31]=0u+0x805D0000u; // 800DD3A4
  c->r[3]=c->r[31]+0x00003F6Cu; // 800DD3A8
  c->lr=0x800DD3B0u; f_800447E4(c); // 800DD3AC
  cmpu(c,0,c->r[3],0x00000001u); // 800DD3B0
  if (!crb(c,2)) { goto L_800DD3C4; } // 800DD3B4
  c->r[0]=0u+0x00000000u; // 800DD3B8
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800DD3BC
  goto L_800DD3D0; // 800DD3C0
L_800DD3C4:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800DD3C4
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800DD3C8
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800DD3CC
L_800DD3D0:;
  c->r[3]=c->r[30]|c->r[30]; // 800DD3D0
  c->lr=0x800DD3D8u; f_801F5B14(c); // 800DD3D4
L_800DD3D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD3D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD3DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD3E0
  c->lr=c->r[0]; // 800DD3E4
  c->r[1]=c->r[1]+0x00000010u; // 800DD3E8
  return; // 800DD3EC
}

// fn_800DD3F0
void f_800DD3F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD3F0
  c->r[0]=c->lr; // 800DD3F4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DD3F8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800DD3FC
  c->r[31]=c->r[3]|c->r[3]; // 800DD400
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DD404
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DD408
  c->lr=0x800DD410u; f_802501B0(c); // 800DD40C
  c->r[3]=c->r[31]+0x00000038u; // 800DD410
  c->r[4]=c->r[31]+0x0000002Cu; // 800DD414
  c->lr=0x800DD41Cu; f_800361A0(c); // 800DD418
  {uint32_t ea=c->r[2]+0xFFFFA434u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD41C
  c->r[3]=0u+0x80550000u; // 800DD420
  c->r[3]=c->r[3]+0x00003D60u; // 800DD424
  c->r[4]=c->r[31]+0x00000038u; // 800DD428
  c->f[2]=c->f[1]; // 800DD42C
  c->r[5]=c->r[1]+0x00000008u; // 800DD430
  c->f[3]=c->f[1]; // 800DD434
  c->r[6]=0u+0x00000000u; // 800DD438
  c->r[7]=0u+0x00000000u; // 800DD43C
  c->lr=0x800DD444u; f_801D5488(c); // 800DD440
  c->r[5]=R32(c->r[31]+0x00000394u); // 800DD444
  c->r[3]=c->r[31]+0x00000060u; // 800DD448
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD44C
  c->r[4]=c->r[5]+0x00000068u; // 800DD450
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800DD454
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD458
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800DD45C
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD460
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800DD464
  c->lr=0x800DD46Cu; f_800361A0(c); // 800DD468
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DD46C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DD470
  c->lr=0x800DD478u; f_802501B0(c); // 800DD474
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800DD478
  c->r[0]=0u+0x00000001u; // 800DD47C
  {uint32_t ea=c->r[2]+0xFFFFA43Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD480
  c->r[4]=c->r[31]+0x0000002Cu; // 800DD484
  {uint32_t ea=c->r[2]+0xFFFFA440u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD488
  c->r[3]=c->r[3]|0x00002000u; // 800DD48C
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800DD490
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DD494
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800DD498
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800DD49C
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800DD4A0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DD4A4
  c->r[3]=c->r[3]+0x0000005Cu; // 800DD4A8
  c->lr=0x800DD4B0u; f_800361A0(c); // 800DD4AC
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD4B0
  c->r[4]=0u+0x00000040u; // 800DD4B4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DD4B8
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800DD4BC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DD4C0
  c->r[3]=c->r[3]+0x0000001Cu; // 800DD4C4
  c->lr=0x800DD4CCu; f_802518A4(c); // 800DD4C8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DD4CC
  c->r[4]=0u+0x00000006u; // 800DD4D0
  c->r[3]=c->r[3]+0x0000001Cu; // 800DD4D4
  c->lr=0x800DD4DCu; f_80251824(c); // 800DD4D8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DD4DC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DD4E0
  c->lr=0x800DD4E8u; f_802501B0(c); // 800DD4E4
  c->r[0]=0u+0x00000000u; // 800DD4E8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DD4EC
  W8(c->r[31]+0x00000077u,c->r[0]); // 800DD4F0
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800DD4F4
  cmps(c,0,(int32_t)c->r[0],0); // 800DD4F8
  if (crb(c,2)) { goto L_800DD5A4; } // 800DD4FC
  c->r[3]=c->r[3]+0x00000068u; // 800DD500
  c->r[4]=c->r[31]+0x00000060u; // 800DD504
  c->lr=0x800DD50Cu; f_800361A0(c); // 800DD508
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DD50C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DD510
  c->lr=0x800DD518u; f_8025037C(c); // 800DD514
  c->r[6]=R32(c->r[31]+0x00000394u); // 800DD518
  c->r[3]=c->r[1]+0x00000024u; // 800DD51C
  c->r[4]=c->r[31]+0x00000060u; // 800DD520
  c->r[5]=c->r[1]+0x00000030u; // 800DD524
  c->r[6]=c->r[6]+0x000000B0u; // 800DD528
  c->r[7]=0u+0x00000000u; // 800DD52C
  c->lr=0x800DD534u; f_8002BE64(c); // 800DD530
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800DD534
  c->r[3]=0u+0x805D0000u; // 800DD538
  c->r[0]=R32(c->r[31]+0x00000030u); // 800DD53C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800DD540
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD544
  c->r[4]=c->r[31]|c->r[31]; // 800DD548
  W32(c->r[1]+0x00000018u,c->r[5]); // 800DD54C
  c->r[7]=c->r[1]+0x00000018u; // 800DD550
  c->r[6]=0u+0x0000002Cu; // 800DD554
  c->r[8]=0u+0x00000000u; // 800DD558
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800DD55C
  c->r[0]=R32(c->r[31]+0x00000034u); // 800DD560
  W32(c->r[1]+0x00000020u,c->r[0]); // 800DD564
  c->r[3]=R32(c->r[31]+0x00000438u); // 800DD568
  c->r[5]=R32(c->r[31]+0x00000394u); // 800DD56C
  c->lr=0x800DD574u; f_801FA6A4(c); // 800DD570
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800DD574
  cmps(c,0,(int32_t)c->r[0],0); // 800DD578
  if (crb(c,2)) { goto L_800DD58C; } // 800DD57C
  c->r[3]=c->r[31]+0x00000044u; // 800DD580
  c->r[4]=c->r[31]+0x000003CCu; // 800DD584
  c->lr=0x800DD58Cu; f_800361A0(c); // 800DD588
L_800DD58C:;
  c->r[6]=0u+0x803A0000u; // 800DD58C
  c->r[3]=R32(c->r[31]+0x00000438u); // 800DD590
  c->r[5]=c->r[31]+0x00000044u; // 800DD594
  c->r[4]=0u+0x00000000u; // 800DD598
  c->r[6]=c->r[6]+0xFFFFE3F8u; // 800DD59C
  c->lr=0x800DD5A4u; f_801FBEC0(c); // 800DD5A0
L_800DD5A4:;
  c->r[3]=c->r[31]|c->r[31]; // 800DD5A4
  c->r[4]=0u+0x00000000u; // 800DD5A8
  c->lr=0x800DD5B0u; f_801F7C00(c); // 800DD5AC
  c->r[7]=0u+0x803D0000u; // 800DD5B0
  {uint32_t ea=c->r[7]+0x00002C48u; c->r[6]=R32(ea); c->r[7]=ea;} // 800DD5B4
  c->r[3]=c->r[31]|c->r[31]; // 800DD5B8
  c->r[4]=c->r[1]+0x0000000Cu; // 800DD5BC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DD5C0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DD5C4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800DD5C8
  W32(c->r[1]+0x00000010u,c->r[5]); // 800DD5CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD5D0
  c->lr=0x800DD5D8u; f_800DD5EC(c); // 800DD5D4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DD5D8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800DD5DC
  c->lr=c->r[0]; // 800DD5E0
  c->r[1]=c->r[1]+0x00000050u; // 800DD5E4
  return; // 800DD5E8
}

// fn_800DD5EC
void f_800DD5EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD5EC
  c->r[0]=c->lr; // 800DD5F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD5F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD5F8
  c->r[31]=c->r[4]|c->r[4]; // 800DD5FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD600
  c->r[30]=c->r[3]|c->r[3]; // 800DD604
  c->r[3]=c->r[31]|c->r[31]; // 800DD608
  c->lr=0x800DD610u; f_802B9FDC(c); // 800DD60C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD610
  if (crb(c,2)) { goto L_800DD630; } // 800DD614
  c->r[3]=R32(c->r[31]+0x00000000u); // 800DD618
  c->r[0]=R32(c->r[31]+0x00000004u); // 800DD61C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800DD620
  W32(c->r[30]+0x00000020u,c->r[0]); // 800DD624
  c->r[0]=R32(c->r[31]+0x00000008u); // 800DD628
  W32(c->r[30]+0x00000024u,c->r[0]); // 800DD62C
L_800DD630:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD630
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD634
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD638
  c->lr=c->r[0]; // 800DD63C
  c->r[1]=c->r[1]+0x00000010u; // 800DD640
  return; // 800DD644
}

// fn_800DD648
void f_800DD648(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD648
  c->r[0]=c->lr; // 800DD64C
  c->r[4]=0u+0x00000000u; // 800DD650
  W32(c->r[1]+0x00000094u,c->r[0]); // 800DD654
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800DD658
  c->r[31]=c->r[3]|c->r[3]; // 800DD65C
  W32(c->r[1]+0x00000088u,c->r[30]); // 800DD660
  W32(c->r[1]+0x00000084u,c->r[29]); // 800DD664
  c->r[3]=R32(c->r[3]+0x00000438u); // 800DD668
  c->lr=0x800DD670u; f_801FAF00(c); // 800DD66C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD670
  if (!crb(c,2)) { goto L_800DD72C; } // 800DD674
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DD678
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800DD67C
  if (crb(c,2)) { goto L_800DD694; } // 800DD680
  c->r[3]=c->r[31]|c->r[31]; // 800DD684
  c->r[4]=0u+0x00000032u; // 800DD688
  c->lr=0x800DD690u; f_801F5AB4(c); // 800DD68C
  goto L_800DD6A0; // 800DD690
L_800DD694:;
  c->r[3]=c->r[31]|c->r[31]; // 800DD694
  c->r[4]=0u+0x0000003Au; // 800DD698
  c->lr=0x800DD6A0u; f_801F5AB4(c); // 800DD69C
L_800DD6A0:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DD6A0
  c->r[5]=0u+0x00000000u; // 800DD6A4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DD6A8
  c->r[3]=c->r[31]+0x0000002Cu; // 800DD6AC
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800DD6B0
  W8(c->r[31]+0x00000077u,c->r[5]); // 800DD6B4
  c->r[0]=c->r[0]|0x00000004u; // 800DD6B8
  c->r[4]=c->r[4]+0x0000005Cu; // 800DD6BC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800DD6C0
  c->lr=0x800DD6C8u; f_800361A0(c); // 800DD6C4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DD6C8
  c->r[3]=c->r[31]+0x00000060u; // 800DD6CC
  c->r[4]=c->r[4]+0x00000068u; // 800DD6D0
  c->lr=0x800DD6D8u; f_800361A0(c); // 800DD6D4
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800DD6D8
  c->r[3]=0u+0x805D0000u; // 800DD6DC
  c->r[0]=R32(c->r[31]+0x00000030u); // 800DD6E0
  c->r[3]=c->r[3]+0x00006CF8u; // 800DD6E4
  c->r[4]=c->r[1]+0x00000038u; // 800DD6E8
  c->r[5]=0u+0x00040000u; // 800DD6EC
  W32(c->r[1]+0x00000038u,c->r[6]); // 800DD6F0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800DD6F4
  c->r[0]=R32(c->r[31]+0x00000034u); // 800DD6F8
  W32(c->r[1]+0x00000040u,c->r[0]); // 800DD6FC
  c->lr=0x800DD704u; f_802236F8(c); // 800DD700
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800DD704
  c->r[3]=c->r[31]|c->r[31]; // 800DD708
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DD70C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DD710
  c->ctr=c->r[12]; // 800DD714
  if (true) { c->lr=0x800DD71Cu; dispatch(c,c->ctr); } // 800DD718
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DD71C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DD720
  c->lr=0x800DD728u; f_8025037C(c); // 800DD724
  goto L_800DD90C; // 800DD728
L_800DD72C:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DD72C
  c->r[3]=c->r[31]+0x0000002Cu; // 800DD730
  c->r[4]=c->r[4]+0x0000005Cu; // 800DD734
  c->lr=0x800DD73Cu; f_800361A0(c); // 800DD738
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DD73C
  c->r[3]=c->r[31]+0x00000060u; // 800DD740
  c->r[4]=c->r[4]+0x00000068u; // 800DD744
  c->lr=0x800DD74Cu; f_800361A0(c); // 800DD748
  c->r[3]=R32(c->r[31]+0x00000438u); // 800DD74C
  c->lr=0x800DD754u; f_80050BE4(c); // 800DD750
  cmps(c,0,(int32_t)c->r[3],0); // 800DD754
  if (crb(c,2)) { goto L_800DD90C; } // 800DD758
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DD75C
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800DD760
  if (!crb(c,2)) { goto L_800DD90C; } // 800DD764
  c->r[0]=R8(c->r[31]+0x00000077u); // 800DD768
  cmps(c,0,(int32_t)c->r[0],0); // 800DD76C
  if (!crb(c,2)) { goto L_800DD90C; } // 800DD770
  c->r[0]=R8(c->r[31]+0x00000094u); // 800DD774
  c->r[3]=0u+0x00000001u; // 800DD778
  W8(c->r[31]+0x00000077u,c->r[3]); // 800DD77C
  cmps(c,0,(int32_t)c->r[0],5); // 800DD780
  if (crb(c,2)) { goto L_800DD860; } // 800DD784
  if (!crb(c,0)) { goto L_800DD8DC; } // 800DD788
  cmps(c,0,(int32_t)c->r[0],0); // 800DD78C
  if (!crb(c,0)) { goto L_800DD798; } // 800DD790
  goto L_800DD8DC; // 800DD794
L_800DD798:;
  c->r[30]=0u+0x80550000u; // 800DD798
  c->r[4]=0u+0x803A0000u; // 800DD79C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DD7A0
  c->r[5]=0u+0x00000000u; // 800DD7A4
  c->r[4]=c->r[4]+0xFFFFE434u; // 800DD7A8
  c->r[6]=0u+0x00000000u; // 800DD7AC
  c->lr=0x800DD7B4u; f_8018D3E4(c); // 800DD7B0
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 800DD7B4
  cmpu(c,0,c->r[29],0x000000FFu); // 800DD7B8
  if (crb(c,2)) { goto L_800DD8DC; } // 800DD7BC
  c->r[9]=R32(c->r[31]+0x0000002Cu); // 800DD7C0
  c->r[0]=0u+0x00000000u; // 800DD7C4
  c->r[8]=R32(c->r[31]+0x00000030u); // 800DD7C8
  c->r[4]=c->r[29]|c->r[29]; // 800DD7CC
  c->r[7]=R32(c->r[31]+0x00000034u); // 800DD7D0
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DD7D4
  W32(c->r[1]+0x00000068u,c->r[9]); // 800DD7D8
  c->r[5]=c->r[1]+0x0000002Cu; // 800DD7DC
  c->r[6]=c->r[1]+0x00000020u; // 800DD7E0
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 800DD7E4
  W32(c->r[1]+0x00000070u,c->r[7]); // 800DD7E8
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800DD7EC
  W32(c->r[1]+0x00000060u,c->r[0]); // 800DD7F0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800DD7F4
  W32(c->r[1]+0x00000020u,c->r[0]); // 800DD7F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD7FC
  W32(c->r[1]+0x00000028u,c->r[0]); // 800DD800
  W32(c->r[1]+0x0000002Cu,c->r[9]); // 800DD804
  W32(c->r[1]+0x00000030u,c->r[8]); // 800DD808
  W32(c->r[1]+0x00000034u,c->r[7]); // 800DD80C
  c->lr=0x800DD814u; f_8018DBD0(c); // 800DD810
  c->r[4]=R8(c->r[31]+0x00000094u); // 800DD814
  c->r[5]=0u+0x803D0000u; // 800DD818
  c->r[8]=0u+0x803D0000u; // 800DD81C
  c->r[3]=c->r[31]|c->r[31]; // 800DD820
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800DD824
  c->r[5]=c->r[5]+0x00002C28u; // 800DD828
  c->r[0]=c->r[0]-c->r[4]; // 800DD82C
  c->r[8]=c->r[8]+0x00002C38u; // 800DD830
  c->r[4]=c->r[5]+c->r[0]; // 800DD834
  c->r[5]=R8(c->r[5]+c->r[0]); // 800DD838
  c->r[10]=c->r[8]+c->r[0]; // 800DD83C
  c->r[6]=R8(c->r[4]+0x00000001u); // 800DD840
  c->r[7]=R8(c->r[4]+0x00000002u); // 800DD844
  c->r[4]=c->r[29]|c->r[29]; // 800DD848
  c->r[9]=R8(c->r[10]+0x00000001u); // 800DD84C
  c->r[8]=R8(c->r[8]+c->r[0]); // 800DD850
  c->r[10]=R8(c->r[10]+0x00000002u); // 800DD854
  c->lr=0x800DD85Cu; f_800DECC8(c); // 800DD858
  goto L_800DD8DC; // 800DD85C
L_800DD860:;
  c->r[4]=0u+0x803A0000u; // 800DD860
  c->r[30]=0u+0x80550000u; // 800DD864
  c->r[4]=c->r[4]+0xFFFFE434u; // 800DD868
  c->r[5]=0u+0x00000000u; // 800DD86C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DD870
  c->r[6]=0u+0x00000000u; // 800DD874
  c->r[4]=c->r[4]+0x00000004u; // 800DD878
  c->lr=0x800DD880u; f_8018D3E4(c); // 800DD87C
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800DD880
  cmpu(c,0,c->r[4],0x000000FFu); // 800DD884
  if (crb(c,2)) { goto L_800DD8DC; } // 800DD888
  c->r[9]=R32(c->r[31]+0x0000002Cu); // 800DD88C
  c->r[0]=0u+0x00000000u; // 800DD890
  c->r[8]=R32(c->r[31]+0x00000030u); // 800DD894
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DD898
  c->r[7]=R32(c->r[31]+0x00000034u); // 800DD89C
  c->r[5]=c->r[1]+0x00000014u; // 800DD8A0
  W32(c->r[1]+0x00000050u,c->r[9]); // 800DD8A4
  c->r[6]=c->r[1]+0x00000008u; // 800DD8A8
  W32(c->r[1]+0x00000054u,c->r[8]); // 800DD8AC
  W32(c->r[1]+0x00000058u,c->r[7]); // 800DD8B0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DD8B4
  W32(c->r[1]+0x00000048u,c->r[0]); // 800DD8B8
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800DD8BC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DD8C0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DD8C4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DD8C8
  W32(c->r[1]+0x00000014u,c->r[9]); // 800DD8CC
  W32(c->r[1]+0x00000018u,c->r[8]); // 800DD8D0
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 800DD8D4
  c->lr=0x800DD8DCu; f_8018DBD0(c); // 800DD8D8
L_800DD8DC:;
  c->r[5]=R32(c->r[31]+0x00000078u); // 800DD8DC
  c->r[3]=c->r[31]|c->r[31]; // 800DD8E0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DD8E4
  c->r[4]=0u+0x00000004u; // 800DD8E8
  c->r[6]=c->r[5]|0x00000100u; // 800DD8EC
  c->r[5]=0u+0x00000034u; // 800DD8F0
  c->r[0]=c->r[0]|0x00008000u; // 800DD8F4
  W32(c->r[31]+0x00000078u,c->r[6]); // 800DD8F8
  c->r[6]=0u+0x00000001u; // 800DD8FC
  c->r[7]=0u+0x00000001u; // 800DD900
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800DD904
  c->lr=0x800DD90Cu; f_8017900C(c); // 800DD908
L_800DD90C:;
  c->r[3]=c->r[31]|c->r[31]; // 800DD90C
  c->r[4]=0u+0x00000000u; // 800DD910
  c->lr=0x800DD918u; f_801F7C00(c); // 800DD914
  c->r[0]=R32(c->r[1]+0x00000094u); // 800DD918
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800DD91C
  c->r[30]=R32(c->r[1]+0x00000088u); // 800DD920
  c->r[29]=R32(c->r[1]+0x00000084u); // 800DD924
  c->lr=c->r[0]; // 800DD928
  c->r[1]=c->r[1]+0x00000090u; // 800DD92C
  return; // 800DD930
}

// fn_800DD934
void f_800DD934(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD934
  c->r[0]=c->lr; // 800DD938
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD93C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD940
  c->r[31]=c->r[3]|c->r[3]; // 800DD944
  c->r[5]=R32(c->r[3]+0x000003C4u); // 800DD948
  c->r[0]=c->r[5]+0x00000000u; // 800DD94C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800DD950
  if (crb(c,2)) { goto L_800DD978; } // 800DD954
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800DD958
  c->r[6]=0u+0x00000000u; // 800DD95C
  {uint32_t ea=c->r[2]+0xFFFFA434u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD960
  c->r[12]=R32(c->r[12]+0x00000064u); // 800DD964
  c->f[2]=c->f[1]; // 800DD968
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DD96C
  c->ctr=c->r[12]; // 800DD970
  if (true) { c->lr=0x800DD978u; dispatch(c,c->ctr); } // 800DD974
L_800DD978:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DD978
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DD97C
  c->lr=0x800DD984u; f_802501B0(c); // 800DD980
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DD984
  c->r[5]=0u+0x00000000u; // 800DD988
  c->r[3]=0u+0x00000001u; // 800DD98C
  W8(c->r[4]+0x0000014Cu,c->r[5]); // 800DD990
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DD994
  W8(c->r[4]+0x0000014Du,c->r[5]); // 800DD998
  c->r[4]=R16(c->r[31]+0x000003BEu); // 800DD99C
  c->r[0]=R8(c->r[31]+0x00000074u); // 800DD9A0
  c->r[4]=rotl(c->r[4],0)&0xFFFFDFFFu; // 800DD9A4
  W8(c->r[31]+0x0000006Fu,c->r[3]); // 800DD9A8
  cmpu(c,0,c->r[0],0x00000001u); // 800DD9AC
  W16(c->r[31]+0x000003BEu,c->r[4]); // 800DD9B0
  if (crb(c,2)) { goto L_800DD9BC; } // 800DD9B4
  W8(c->r[31]+0x00000074u,c->r[5]); // 800DD9B8
L_800DD9BC:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800DD9BC
  c->r[4]=c->r[31]+0x000003CCu; // 800DD9C0
  c->lr=0x800DD9C8u; f_800361A0(c); // 800DD9C4
  c->r[3]=c->r[31]+0x00000060u; // 800DD9C8
  c->r[4]=c->r[31]+0x000003D8u; // 800DD9CC
  c->lr=0x800DD9D4u; f_800361A0(c); // 800DD9D0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DD9D4
  c->r[3]=c->r[31]|c->r[31]; // 800DD9D8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DD9DC
  c->ctr=c->r[12]; // 800DD9E0
  if (true) { c->lr=0x800DD9E8u; dispatch(c,c->ctr); } // 800DD9E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD9E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD9EC
  c->lr=c->r[0]; // 800DD9F0
  c->r[1]=c->r[1]+0x00000010u; // 800DD9F4
  return; // 800DD9F8
}

// fn_800DD9FC
void f_800DD9FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD9FC
  c->r[0]=c->lr; // 800DDA00
  c->r[4]=0u+0x000000E1u; // 800DDA04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDA08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDA0C
  c->r[31]=c->r[3]|c->r[3]; // 800DDA10
  c->r[3]=c->r[3]+0x00000210u; // 800DDA14
  c->lr=0x800DDA1Cu; f_80221630(c); // 800DDA18
  cmps(c,0,(int32_t)c->r[3],0); // 800DDA1C
  if (!crb(c,2)) { goto L_800DDA2C; } // 800DDA20
  c->r[3]=0u+0x00000000u; // 800DDA24
  goto L_800DDA48; // 800DDA28
L_800DDA2C:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DDA2C
  c->r[3]=0u+0x000004DAu; // 800DDA30
  c->r[5]=0u+0x00000000u; // 800DDA34
  c->r[4]=c->r[4]+0x0000010Cu; // 800DDA38
  c->lr=0x800DDA40u; f_8024EE50(c); // 800DDA3C
  c->r[0]=cntlz(c->r[3]); // 800DDA40
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DDA44
L_800DDA48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDA48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDA4C
  c->lr=c->r[0]; // 800DDA50
  c->r[1]=c->r[1]+0x00000010u; // 800DDA54
  return; // 800DDA58
}

// fn_800DDA5C
void f_800DDA5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDA5C
  c->r[0]=c->lr; // 800DDA60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDA64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDA68
  c->r[31]=0u+0x805D0000u; // 800DDA6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DDA70
  c->r[30]=c->r[3]|c->r[3]; // 800DDA74
  c->r[3]=c->r[31]+0x00003F6Cu; // 800DDA78
  c->lr=0x800DDA80u; f_80045264(c); // 800DDA7C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800DDA80
  cmpu(c,0,c->r[0],0x00000032u); // 800DDA84
  if (crb(c,2)) { goto L_800DDAA0; } // 800DDA88
  c->r[3]=c->r[31]+0x00003F6Cu; // 800DDA8C
  c->lr=0x800DDA94u; f_80045264(c); // 800DDA90
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800DDA94
  cmpu(c,0,c->r[0],0x0000003Au); // 800DDA98
  if (!crb(c,2)) { goto L_800DDADC; } // 800DDA9C
L_800DDAA0:;
  c->r[3]=0u+0x805D0000u; // 800DDAA0
  c->r[3]=c->r[3]+0x00003F6Cu; // 800DDAA4
  c->lr=0x800DDAACu; f_80037AF0(c); // 800DDAA8
  cmpu(c,0,c->r[3],c->r[30]); // 800DDAAC
  if (!crb(c,2)) { goto L_800DDADC; } // 800DDAB0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800DDAB4
  cmps(c,0,(int32_t)c->r[0],101); // 800DDAB8
  if (crb(c,2)) { goto L_800DDADC; } // 800DDABC
  {uint32_t ea=c->r[2]+0xFFFFA434u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDAC0
  c->r[3]=c->r[30]|c->r[30]; // 800DDAC4
  c->r[4]=0u+0x00000065u; // 800DDAC8
  c->r[5]=0u+0x00000000u; // 800DDACC
  c->r[6]=0u+0x00000000u; // 800DDAD0
  c->r[7]=0u+0x00000000u; // 800DDAD4
  c->lr=0x800DDADCu; f_801F4D44(c); // 800DDAD8
L_800DDADC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDADC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDAE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DDAE4
  c->lr=c->r[0]; // 800DDAE8
  c->r[1]=c->r[1]+0x00000010u; // 800DDAEC
  return; // 800DDAF0
}

// fn_800DDAF4
void f_800DDAF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDAF4
  c->r[0]=c->lr; // 800DDAF8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DDAFC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800DDB00
  c->r[31]=0u+0x803D0000u; // 800DDB04
  c->r[31]=c->r[31]+0x00002C28u; // 800DDB08
  W32(c->r[1]+0x00000038u,c->r[30]); // 800DDB0C
  c->r[30]=c->r[3]|c->r[3]; // 800DDB10
  c->lr=0x800DDB18u; f_801F4F28(c); // 800DDB14
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800DDB18
  cmps(c,0,(int32_t)c->r[0],101); // 800DDB1C
  if (crb(c,2)) { goto L_800DDB70; } // 800DDB20
  if (!crb(c,0)) { goto L_800DDB34; } // 800DDB24
  cmps(c,0,(int32_t)c->r[0],100); // 800DDB28
  if (!crb(c,0)) { goto L_800DDB40; } // 800DDB2C
  goto L_800DDBCC; // 800DDB30
L_800DDB34:;
  cmps(c,0,(int32_t)c->r[0],103); // 800DDB34
  if (!crb(c,0)) { goto L_800DDBCC; } // 800DDB38
  goto L_800DDBA0; // 800DDB3C
L_800DDB40:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800DDB40
  c->r[5]=c->r[31]+0x0000002Cu; // 800DDB44
  c->r[3]=c->r[30]|c->r[30]; // 800DDB48
  c->r[4]=c->r[1]+0x00000020u; // 800DDB4C
  c->r[7]=R32(c->r[31]+0x0000002Cu); // 800DDB50
  c->r[6]=R32(c->r[5]+0x00000004u); // 800DDB54
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DDB58
  W32(c->r[1]+0x00000020u,c->r[7]); // 800DDB5C
  W32(c->r[1]+0x00000024u,c->r[6]); // 800DDB60
  W32(c->r[1]+0x00000028u,c->r[0]); // 800DDB64
  c->lr=0x800DDB6Cu; f_800DD5EC(c); // 800DDB68
  goto L_800DDBCC; // 800DDB6C
L_800DDB70:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800DDB70
  c->r[5]=c->r[31]+0x00000038u; // 800DDB74
  c->r[3]=c->r[30]|c->r[30]; // 800DDB78
  c->r[4]=c->r[1]+0x00000014u; // 800DDB7C
  c->r[7]=R32(c->r[31]+0x00000038u); // 800DDB80
  c->r[6]=R32(c->r[5]+0x00000004u); // 800DDB84
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DDB88
  W32(c->r[1]+0x00000014u,c->r[7]); // 800DDB8C
  W32(c->r[1]+0x00000018u,c->r[6]); // 800DDB90
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800DDB94
  c->lr=0x800DDB9Cu; f_800DD5EC(c); // 800DDB98
  goto L_800DDBCC; // 800DDB9C
L_800DDBA0:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800DDBA0
  c->r[5]=c->r[31]+0x00000044u; // 800DDBA4
  c->r[3]=c->r[30]|c->r[30]; // 800DDBA8
  c->r[4]=c->r[1]+0x00000008u; // 800DDBAC
  c->r[7]=R32(c->r[31]+0x00000044u); // 800DDBB0
  c->r[6]=R32(c->r[5]+0x00000004u); // 800DDBB4
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DDBB8
  W32(c->r[1]+0x00000008u,c->r[7]); // 800DDBBC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800DDBC0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DDBC4
  c->lr=0x800DDBCCu; f_800DD5EC(c); // 800DDBC8
L_800DDBCC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DDBCC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DDBD0
  c->r[30]=R32(c->r[1]+0x00000038u); // 800DDBD4
  c->lr=c->r[0]; // 800DDBD8
  c->r[1]=c->r[1]+0x00000040u; // 800DDBDC
  return; // 800DDBE0
}

// fn_800DDBE4
void f_800DDBE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDBE4
  c->r[0]=c->lr; // 800DDBE8
  c->r[6]=c->r[4]|c->r[4]; // 800DDBEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDBF0
  c->r[0]=R8(c->r[3]+0x00000074u); // 800DDBF4
  cmps(c,0,(int32_t)c->r[0],1); // 800DDBF8
  if (crb(c,2)) { goto L_800DDC08; } // 800DDBFC
  c->r[5]=0u+0x00000000u; // 800DDC00
  goto L_800DDC0C; // 800DDC04
L_800DDC08:;
  c->r[5]=0u+0x00000001u; // 800DDC08
L_800DDC0C:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DDC0C
  c->r[3]=c->r[6]|c->r[6]; // 800DDC10
  c->lr=0x800DDC18u; f_80250BF4(c); // 800DDC14
  cmps(c,0,(int32_t)c->r[3],0); // 800DDC18
  if (crb(c,2)) { goto L_800DDC28; } // 800DDC1C
  c->r[3]=0u+0x00000000u; // 800DDC20
  goto L_800DDC2C; // 800DDC24
L_800DDC28:;
  c->r[3]=0u+0xFFFFFFFFu; // 800DDC28
L_800DDC2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDC2C
  c->lr=c->r[0]; // 800DDC30
  c->r[1]=c->r[1]+0x00000010u; // 800DDC34
  return; // 800DDC38
}

// fn_800DDC3C
void f_800DDC3C(Ctx* __restrict c) {
  W8(c->r[3]+0x00000074u,c->r[4]); // 800DDC3C
  return; // 800DDC40
}

// fn_800DDC44
void f_800DDC44(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800DDC44
  c->r[0]=c->r[0]|0x00000010u; // 800DDC48
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800DDC4C
  return; // 800DDC50
}

// fn_800DDC54
void f_800DDC54(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800DDC54
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800DDC58
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800DDC5C
  return; // 800DDC60
}

// fn_800DDC64
void f_800DDC64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDC64
  c->r[0]=c->lr; // 800DDC68
  c->r[7]=0u+0x803D0000u; // 800DDC6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DDC70
  c->r[4]=c->r[1]+0x00000008u; // 800DDC74
  {uint32_t ea=c->r[7]+0x00002C78u; c->r[6]=R32(ea); c->r[7]=ea;} // 800DDC78
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DDC7C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DDC80
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DDC84
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DDC88
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DDC8C
  c->lr=0x800DDC94u; f_800DD5EC(c); // 800DDC90
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DDC94
  c->lr=c->r[0]; // 800DDC98
  c->r[1]=c->r[1]+0x00000020u; // 800DDC9C
  return; // 800DDCA0
}

// fn_800DDCA4
void f_800DDCA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDCA4
  c->r[0]=c->lr; // 800DDCA8
  W32(c->r[1]+0x00000094u,c->r[0]); // 800DDCAC
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800DDCB0
  W32(c->r[1]+0x00000088u,c->r[30]); // 800DDCB4
  c->r[30]=c->r[3]|c->r[3]; // 800DDCB8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DDCBC
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800DDCC0
  cmps(c,0,(int32_t)c->r[0],0); // 800DDCC4
  if (!crb(c,2)) { goto L_800DDD54; } // 800DDCC8
  c->r[3]=R16(c->r[3]+0x000003BEu); // 800DDCCC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800DDCD0
  if (crb(c,2)) { goto L_800DDD54; } // 800DDCD4
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800DDCD8
  cmps(c,0,(int32_t)c->r[0],128); // 800DDCDC
  if (!crb(c,2)) { goto L_800DDD08; } // 800DDCE0
  c->r[3]=0u+0x80620000u; // 800DDCE4
  c->r[3]=c->r[3]+0x00007688u; // 800DDCE8
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DDCEC
  cmps(c,0,(int32_t)c->r[3],0); // 800DDCF0
  if (crb(c,2)) { goto L_800DDD08; } // 800DDCF4
  c->r[4]=0u+0x00000002u; // 800DDCF8
  c->lr=0x800DDD00u; f_80037670(c); // 800DDCFC
  cmps(c,0,(int32_t)c->r[3],0); // 800DDD00
  if (!crb(c,2)) { goto L_800DDD54; } // 800DDD04
L_800DDD08:;
  {uint32_t ea=c->r[2]+0xFFFFA444u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDD08
  c->r[3]=c->r[1]+0x00000008u; // 800DDD0C
  c->r[4]=c->r[30]+0x0000002Cu; // 800DDD10
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800DDD14
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800DDD18
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800DDD1C
  c->lr=0x800DDD24u; f_800361A0(c); // 800DDD20
  c->r[31]=0u+0x80550000u; // 800DDD24
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDD28
  c->r[31]=c->r[31]+0x00003D60u; // 800DDD2C
  c->r[5]=c->r[30]|c->r[30]; // 800DDD30
  c->r[3]=c->r[31]+0x00000010u; // 800DDD34
  c->r[6]=c->r[1]+0x00000008u; // 800DDD38
  c->r[7]=c->r[1]+0x00000020u; // 800DDD3C
  c->r[4]=0u+0x000001FFu; // 800DDD40
  c->lr=0x800DDD48u; f_80226910(c); // 800DDD44
  c->r[3]=c->r[31]+0x00000010u; // 800DDD48
  c->r[4]=c->r[1]+0x00000020u; // 800DDD4C
  c->lr=0x800DDD54u; f_80226D68(c); // 800DDD50
L_800DDD54:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800DDD54
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800DDD58
  c->r[30]=R32(c->r[1]+0x00000088u); // 800DDD5C
  c->lr=c->r[0]; // 800DDD60
  c->r[1]=c->r[1]+0x00000090u; // 800DDD64
  return; // 800DDD68
}

// fn_800DDD6C
void f_800DDD6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDD6C
  c->r[0]=c->lr; // 800DDD70
  c->r[5]=0u+0x00000000u; // 800DDD74
  c->r[6]=0u+0x00000000u; // 800DDD78
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800DDD7C
  W32(c->r[1]+0x000000BCu,c->r[31]); // 800DDD80
  c->r[31]=0u+0x80550000u; // 800DDD84
  W32(c->r[1]+0x000000B8u,c->r[30]); // 800DDD88
  c->r[30]=0u+0x803A0000u; // 800DDD8C
  c->r[30]=c->r[30]+0xFFFFE434u; // 800DDD90
  W32(c->r[1]+0x000000B4u,c->r[29]); // 800DDD94
  c->r[29]=c->r[3]|c->r[3]; // 800DDD98
  c->r[3]=c->r[31]+0xFFFFC848u; // 800DDD9C
  c->r[4]=c->r[30]+0x00000008u; // 800DDDA0
  c->lr=0x800DDDA8u; f_8018D3E4(c); // 800DDDA4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800DDDA8
  W8(c->r[29]+0x00000075u,c->r[3]); // 800DDDAC
  cmpu(c,0,c->r[0],0x000000FFu); // 800DDDB0
  if (crb(c,2)) { goto L_800DDE90; } // 800DDDB4
  c->r[3]=R32(c->r[29]+0x00000394u); // 800DDDB8
  c->r[4]=c->r[30]+0x0000000Cu; // 800DDDBC
  c->r[5]=c->r[1]+0x00000080u; // 800DDDC0
  c->r[6]=0u+0x00000001u; // 800DDDC4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DDDC8
  c->lr=0x800DDDD0u; f_80257018(c); // 800DDDCC
  c->r[3]=c->r[1]+0x00000050u; // 800DDDD0
  c->lr=0x800DDDD8u; f_80295AE8(c); // 800DDDD4
  {uint32_t ea=c->r[2]+0xFFFFA448u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDDD8
  c->r[3]=c->r[1]+0x00000050u; // 800DDDDC
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDDE0
  c->f[3]=c->f[1]; // 800DDDE4
  c->lr=0x800DDDECu; f_80296294(c); // 800DDDE8
  c->r[4]=c->r[1]+0x00000050u; // 800DDDEC
  c->r[3]=c->r[1]+0x00000080u; // 800DDDF0
  c->r[5]=c->r[4]|c->r[4]; // 800DDDF4
  c->lr=0x800DDDFCu; f_80295B48(c); // 800DDDF8
  c->r[8]=0u+0x803A0000u; // 800DDDFC
  {uint32_t ea=c->r[8]+0xFFFFE404u; c->r[7]=R32(ea); c->r[8]=ea;} // 800DDE00
  c->r[4]=c->r[1]+0x00000014u; // 800DDE04
  c->r[3]=c->r[1]+0x00000080u; // 800DDE08
  c->r[6]=R32(c->r[8]+0x00000004u); // 800DDE0C
  c->r[5]=c->r[4]|c->r[4]; // 800DDE10
  c->r[0]=R32(c->r[8]+0x00000008u); // 800DDE14
  W32(c->r[1]+0x00000014u,c->r[7]); // 800DDE18
  W32(c->r[1]+0x00000018u,c->r[6]); // 800DDE1C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800DDE20
  c->lr=0x800DDE28u; f_80296750(c); // 800DDE24
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DDE28
  c->r[3]=c->r[31]+0xFFFFC848u; // 800DDE2C
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDE30
  c->r[5]=c->r[1]+0x00000050u; // 800DDE34
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDE38
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[1]); // 800DDE3C
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDE40
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDE44
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 800DDE48
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDE4C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800DDE50
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800DDE54
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDE58
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDE5C
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 800DDE60
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 800DDE64
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800DDE68
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[4]);} // 800DDE6C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 800DDE70
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800DDE74
  c->r[4]=R8(c->r[29]+0x00000075u); // 800DDE78
  c->lr=0x800DDE80u; f_8018DEB8(c); // 800DDE7C
  c->r[4]=R8(c->r[29]+0x00000075u); // 800DDE80
  c->r[3]=c->r[31]+0xFFFFC848u; // 800DDE84
  c->r[5]=0u+0x00000001u; // 800DDE88
  c->lr=0x800DDE90u; f_8018E2D4(c); // 800DDE8C
L_800DDE90:;
  c->r[31]=0u+0x803A0000u; // 800DDE90
  c->r[30]=0u+0x80550000u; // 800DDE94
  c->r[31]=c->r[31]+0xFFFFE434u; // 800DDE98
  c->r[5]=0u+0x00000000u; // 800DDE9C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DDEA0
  c->r[6]=0u+0x00000000u; // 800DDEA4
  c->r[4]=c->r[31]+0x00000015u; // 800DDEA8
  c->lr=0x800DDEB0u; f_8018D3E4(c); // 800DDEAC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800DDEB0
  W8(c->r[29]+0x00000076u,c->r[3]); // 800DDEB4
  cmpu(c,0,c->r[0],0x000000FFu); // 800DDEB8
  if (crb(c,2)) { goto L_800DDF60; } // 800DDEBC
  c->r[3]=R32(c->r[29]+0x00000394u); // 800DDEC0
  c->r[4]=c->r[31]+0x0000000Cu; // 800DDEC4
  c->r[5]=c->r[1]+0x00000020u; // 800DDEC8
  c->r[6]=0u+0x00000001u; // 800DDECC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DDED0
  c->lr=0x800DDED8u; f_80257018(c); // 800DDED4
  c->r[8]=0u+0x803A0000u; // 800DDED8
  {uint32_t ea=c->r[8]+0xFFFFE410u; c->r[7]=R32(ea); c->r[8]=ea;} // 800DDEDC
  c->r[4]=c->r[1]+0x00000008u; // 800DDEE0
  c->r[3]=c->r[1]+0x00000020u; // 800DDEE4
  c->r[6]=R32(c->r[8]+0x00000004u); // 800DDEE8
  c->r[5]=c->r[4]|c->r[4]; // 800DDEEC
  c->r[0]=R32(c->r[8]+0x00000008u); // 800DDEF0
  W32(c->r[1]+0x00000008u,c->r[7]); // 800DDEF4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800DDEF8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DDEFC
  c->lr=0x800DDF04u; f_80296750(c); // 800DDF00
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDF04
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DDF08
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800DDF0C
  c->r[5]=c->r[1]+0x00000020u; // 800DDF10
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDF14
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 800DDF18
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800DDF1C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDF20
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDF24
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800DDF28
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800DDF2C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800DDF30
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800DDF34
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 800DDF38
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DDF3C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 800DDF40
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DDF44
  c->r[4]=R8(c->r[29]+0x00000076u); // 800DDF48
  c->lr=0x800DDF50u; f_8018DEB8(c); // 800DDF4C
  c->r[4]=R8(c->r[29]+0x00000076u); // 800DDF50
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DDF54
  c->r[5]=0u+0x00000001u; // 800DDF58
  c->lr=0x800DDF60u; f_8018E2D4(c); // 800DDF5C
L_800DDF60:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800DDF60
  c->r[31]=R32(c->r[1]+0x000000BCu); // 800DDF64
  c->r[30]=R32(c->r[1]+0x000000B8u); // 800DDF68
  c->r[29]=R32(c->r[1]+0x000000B4u); // 800DDF6C
  c->lr=c->r[0]; // 800DDF70
  c->r[1]=c->r[1]+0x000000C0u; // 800DDF74
  return; // 800DDF78
}

// fn_800DDF7C
void f_800DDF7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDF7C
  c->r[0]=c->lr; // 800DDF80
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800DDF84
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800DDF88
  c->r[31]=c->r[3]|c->r[3]; // 800DDF8C
  W32(c->r[1]+0x000000C8u,c->r[30]); // 800DDF90
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DDF94
  c->r[0]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[0]); // 800DDF98
  if (crb(c,2)) { goto L_800DDFE0; } // 800DDF9C
  c->r[5]=0u+0x00000000u; // 800DDFA0
  {uint32_t ea=c->r[2]+0xFFFFA430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDFA4
  c->r[0]=0u+0x000000FFu; // 800DDFA8
  W16(c->r[3]+0x00000098u,c->r[5]); // 800DDFAC
  c->r[4]=c->r[5]|0x00000010u; // 800DDFB0
  W32(c->r[3]+0x00000078u,c->r[4]); // 800DDFB4
  W16(c->r[3]+0x0000009Au,c->r[5]); // 800DDFB8
  W8(c->r[3]+0x00000090u,c->r[5]); // 800DDFBC
  W8(c->r[3]+0x00000091u,c->r[5]); // 800DDFC0
  W8(c->r[3]+0x00000092u,c->r[5]); // 800DDFC4
  W8(c->r[3]+0x00000093u,c->r[5]); // 800DDFC8
  W8(c->r[3]+0x00000094u,c->r[0]); // 800DDFCC
  W8(c->r[3]+0x00000095u,c->r[0]); // 800DDFD0
  W8(c->r[3]+0x00000096u,c->r[0]); // 800DDFD4
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800DDFD8
  W8(c->r[3]+0x00000028u,c->r[5]); // 800DDFDC
L_800DDFE0:;
  c->r[4]=R32(c->r[3]+0x00000078u); // 800DDFE0
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 800DDFE4
  if (crb(c,2)) { goto L_800DE018; } // 800DDFE8
  c->r[0]=rotl(c->r[4],0)&0xFFFFFDFFu; // 800DDFEC
  c->r[5]=0u+0x000000FFu; // 800DDFF0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800DDFF4
  c->r[4]=0u+0x00000005u; // 800DDFF8
  c->r[6]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800DDFFC
  W16(c->r[3]+0x0000009Au,c->r[5]); // 800DE000
  c->r[0]=0u+0x0000000Au; // 800DE004
  c->r[6]=c->r[6]|0x00000040u; // 800DE008
  W8(c->r[3]+0x00000094u,c->r[4]); // 800DE00C
  W32(c->r[3]+0x00000078u,c->r[6]); // 800DE010
  W8(c->r[3]+0x00000028u,c->r[0]); // 800DE014
L_800DE018:;
  c->r[5]=R8(c->r[3]+0x00000028u); // 800DE018
  cmpu(c,0,c->r[5],0x0000000Cu); // 800DE01C
  if (crb(c,1)) { goto L_800DE804; } // 800DE020
  c->r[4]=0u+0x803D0000u; // 800DE024
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800DE028
  c->r[4]=c->r[4]+0x00002C84u; // 800DE02C
  c->r[4]=R32(c->r[4]+c->r[0]); // 800DE030
  c->ctr=c->r[4]; // 800DE034
  if (true) { switch (c->ctr) { case 0x800DE03Cu: goto L_800DE03C; case 0x800DE0ECu: goto L_800DE0EC; case 0x800DE174u: goto L_800DE174; case 0x800DE1CCu: goto L_800DE1CC; case 0x800DE2C4u: goto L_800DE2C4; case 0x800DE31Cu: goto L_800DE31C; case 0x800DE418u: goto L_800DE418; case 0x800DE470u: goto L_800DE470; case 0x800DE56Cu: goto L_800DE56C; case 0x800DE5C8u: goto L_800DE5C8; case 0x800DE6C4u: goto L_800DE6C4; case 0x800DE710u: goto L_800DE710; case 0x800DE7B8u: goto L_800DE7B8; default: break; } dispatch(c,c->ctr); return; } // 800DE038
L_800DE03C:;
  c->r[4]=R32(c->r[3]+0x00000078u); // 800DE03C
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800DE040
  if (crb(c,2)) { goto L_800DE804; } // 800DE044
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFFEu; // 800DE048
  c->r[4]=R8(c->r[3]+0x00000095u); // 800DE04C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800DE050
  {uint32_t ea=c->r[2]+0xFFFFA430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE054
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DE058
  c->r[11]=c->r[0]|0x00000020u; // 800DE05C
  c->r[6]=0u+0x00000000u; // 800DE060
  c->r[0]=c->r[1]+0x00000010u; // 800DE064
  W16(c->r[3]+0x00000098u,c->r[6]); // 800DE068
  c->r[5]=c->r[4]|c->r[4]; // 800DE06C
  {uint32_t ea=c->r[2]+0xFFFFA448u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE070
  c->r[6]=c->r[1]+0x00000015u; // 800DE074
  W8(c->r[3]+0x00000096u,c->r[4]); // 800DE078
  c->r[7]=c->r[1]+0x00000014u; // 800DE07C
  c->r[8]=c->r[1]+0x00000013u; // 800DE080
  c->r[9]=c->r[1]+0x00000012u; // 800DE084
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800DE088
  c->r[10]=c->r[1]+0x00000011u; // 800DE08C
  W32(c->r[3]+0x00000078u,c->r[11]); // 800DE090
  c->r[3]=c->r[31]|c->r[31]; // 800DE094
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DE098
  c->lr=0x800DE0A0u; f_800DED78(c); // 800DE09C
  c->r[4]=R8(c->r[31]+0x00000075u); // 800DE0A0
  c->r[3]=c->r[31]|c->r[31]; // 800DE0A4
  c->r[5]=R8(c->r[1]+0x00000015u); // 800DE0A8
  c->r[6]=R8(c->r[1]+0x00000014u); // 800DE0AC
  c->r[7]=R8(c->r[1]+0x00000013u); // 800DE0B0
  c->r[8]=R8(c->r[1]+0x00000012u); // 800DE0B4
  c->r[9]=R8(c->r[1]+0x00000011u); // 800DE0B8
  c->r[10]=R8(c->r[1]+0x00000010u); // 800DE0BC
  c->lr=0x800DE0C4u; f_800DEBDC(c); // 800DE0C0
  c->r[3]=c->r[31]|c->r[31]; // 800DE0C4
  c->r[4]=0u+0x00000004u; // 800DE0C8
  c->r[5]=0u+0x0000000Fu; // 800DE0CC
  c->r[6]=0u+0x00000001u; // 800DE0D0
  c->r[7]=0u+0x00000001u; // 800DE0D4
  c->lr=0x800DE0DCu; f_8017900C(c); // 800DE0D8
  c->r[3]=R8(c->r[31]+0x00000028u); // 800DE0DC
  c->r[0]=c->r[3]+0x00000001u; // 800DE0E0
  W8(c->r[31]+0x00000028u,c->r[0]); // 800DE0E4
  goto L_800DE804; // 800DE0E8
L_800DE0EC:;
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE0EC
  {uint32_t ea=c->r[2]+0xFFFFA430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE0F0
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DE0F4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800DE0F8
  {uint32_t ea=c->r[2]+0xFFFFA44Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE0FC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800DE100
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DE104
  fcmp(c,0,c->f[1],c->f[0]); // 800DE108
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 800DE10C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800DE110
  if (!crb(c,2)) { goto L_800DE150; } // 800DE114
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800DE118
  c->r[3]=c->r[31]|c->r[31]; // 800DE11C
  c->r[4]=R8(c->r[31]+0x00000095u); // 800DE120
  c->lr=0x800DE128u; f_800DEF44(c); // 800DE124
  c->r[0]=R32(c->r[31]+0x00000078u); // 800DE128
  c->r[5]=0u+0x000000FFu; // 800DE12C
  c->r[6]=R8(c->r[31]+0x00000095u); // 800DE130
  c->r[4]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800DE134
  c->r[3]=R8(c->r[31]+0x00000028u); // 800DE138
  W8(c->r[31]+0x00000094u,c->r[6]); // 800DE13C
  c->r[0]=c->r[3]+0x00000001u; // 800DE140
  W8(c->r[31]+0x00000095u,c->r[5]); // 800DE144
  W32(c->r[31]+0x00000078u,c->r[4]); // 800DE148
  W8(c->r[31]+0x00000028u,c->r[0]); // 800DE14C
L_800DE150:;
  c->r[3]=R16(c->r[31]+0x00000098u); // 800DE150
  c->r[3]=c->r[3]+0x00000019u; // 800DE154
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800DE158
  W16(c->r[31]+0x00000098u,c->r[3]); // 800DE15C
  cmpu(c,0,c->r[0],0x000000FFu); // 800DE160
  if (!crb(c,1)) { goto L_800DE804; } // 800DE164
  c->r[0]=0u+0x000000FFu; // 800DE168
  W16(c->r[31]+0x00000098u,c->r[0]); // 800DE16C
  goto L_800DE804; // 800DE170
L_800DE174:;
  c->r[4]=R32(c->r[3]+0x00000078u); // 800DE174
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800DE178
  if (crb(c,2)) { goto L_800DE1AC; } // 800DE17C
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFFEu; // 800DE180
  c->r[4]=0u+0x00000004u; // 800DE184
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DE188
  c->r[3]=c->r[31]|c->r[31]; // 800DE18C
  c->r[5]=0u+0x00000010u; // 800DE190
  c->r[6]=0u+0x00000001u; // 800DE194
  c->r[7]=0u+0x00000001u; // 800DE198
  c->lr=0x800DE1A0u; f_8017900C(c); // 800DE19C
  c->r[3]=R8(c->r[31]+0x00000028u); // 800DE1A0
  c->r[0]=c->r[3]+0x00000001u; // 800DE1A4
  W8(c->r[31]+0x00000028u,c->r[0]); // 800DE1A8
L_800DE1AC:;
  c->r[3]=R32(c->r[31]+0x00000078u); // 800DE1AC
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800DE1B0
  if (crb(c,2)) { goto L_800DE804; } // 800DE1B4
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFDu; // 800DE1B8
  c->r[0]=0u+0x0000000Bu; // 800DE1BC
  W32(c->r[31]+0x00000078u,c->r[3]); // 800DE1C0
  W8(c->r[31]+0x00000028u,c->r[0]); // 800DE1C4
  goto L_800DE804; // 800DE1C8
L_800DE1CC:;
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE1CC
  {uint32_t ea=c->r[2]+0xFFFFA430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE1D0
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DE1D4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800DE1D8
  {uint32_t ea=c->r[2]+0xFFFFA450u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE1DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800DE1E0
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DE1E4
  fcmp(c,0,c->f[1],c->f[0]); // 800DE1E8
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 800DE1EC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800DE1F0
  if (!crb(c,2)) { goto L_800DE240; } // 800DE1F4
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800DE1F8
  c->r[3]=c->r[31]|c->r[31]; // 800DE1FC
  c->r[4]=R8(c->r[31]+0x00000095u); // 800DE200
  c->lr=0x800DE208u; f_800DEF44(c); // 800DE204
  c->r[3]=R8(c->r[31]+0x00000095u); // 800DE208
  c->r[0]=R8(c->r[31]+0x00000094u); // 800DE20C
  cmpu(c,0,c->r[3],c->r[0]); // 800DE210
  if (crb(c,2)) { goto L_800DE228; } // 800DE214
  c->r[3]=0u+0x00000004u; // 800DE218
  c->r[0]=0u+0x000000FFu; // 800DE21C
  W8(c->r[31]+0x00000094u,c->r[3]); // 800DE220
  W8(c->r[31]+0x00000095u,c->r[0]); // 800DE224
L_800DE228:;
  c->r[0]=R32(c->r[31]+0x00000078u); // 800DE228
  c->r[3]=R8(c->r[31]+0x00000028u); // 800DE22C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800DE230
  c->r[0]=c->r[3]+0x00000001u; // 800DE234
  W32(c->r[31]+0x00000078u,c->r[4]); // 800DE238
  W8(c->r[31]+0x00000028u,c->r[0]); // 800DE23C
L_800DE240:;
  c->r[3]=R8(c->r[31]+0x00000094u); // 800DE240
  c->r[0]=R8(c->r[31]+0x00000095u); // 800DE244
  cmpu(c,0,c->r[0],c->r[3]); // 800DE248
  if (crb(c,2)) { goto L_800DE804; } // 800DE24C
  c->r[0]=c->r[1]+0x00000010u; // 800DE250
  cmpu(c,0,c->r[3],0x00000004u); // 800DE254
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DE258
  c->r[3]=c->r[31]|c->r[31]; // 800DE25C
  c->r[5]=0u+0x00000004u; // 800DE260
  c->r[4]=R8(c->r[31]+0x00000096u); // 800DE264
  if (crb(c,2)) { goto L_800DE280; } // 800DE268
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE26C
  {uint32_t ea=c->r[2]+0xFFFFA44Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE270
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800DE274
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 800DE278
  goto L_800DE284; // 800DE27C
L_800DE280:;
  {uint32_t ea=c->r[2]+0xFFFFA448u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE280
L_800DE284:;
  c->r[6]=c->r[1]+0x00000015u; // 800DE284
  c->r[7]=c->r[1]+0x00000014u; // 800DE288
  c->r[8]=c->r[1]+0x00000013u; // 800DE28C
  c->r[9]=c->r[1]+0x00000012u; // 800DE290
  c->r[10]=c->r[1]+0x00000011u; // 800DE294
  c->lr=0x800DE29Cu; f_800DED78(c); // 800DE298
  c->r[4]=R8(c->r[31]+0x00000075u); // 800DE29C
  c->r[3]=c->r[31]|c->r[31]; // 800DE2A0
  c->r[5]=R8(c->r[1]+0x00000015u); // 800DE2A4
  c->r[6]=R8(c->r[1]+0x00000014u); // 800DE2A8
  c->r[7]=R8(c->r[1]+0x00000013u); // 800DE2AC
  c->r[8]=R8(c->r[1]+0x00000012u); // 800DE2B0
  c->r[9]=R8(c->r[1]+0x00000011u); // 800DE2B4
  c->r[10]=R8(c->r[1]+0x00000010u); // 800DE2B8
  c->lr=0x800DE2C0u; f_800DEBDC(c); // 800DE2BC
  goto L_800DE804; // 800DE2C0
L_800DE2C4:;
  c->r[4]=R32(c->r[3]+0x00000078u); // 800DE2C4
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800DE2C8
  if (crb(c,2)) { goto L_800DE2FC; } // 800DE2CC
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFFEu; // 800DE2D0
  c->r[4]=0u+0x00000004u; // 800DE2D4
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DE2D8
  c->r[3]=c->r[31]|c->r[31]; // 800DE2DC
  c->r[5]=0u+0x00000011u; // 800DE2E0
  c->r[6]=0u+0x00000001u; // 800DE2E4
  c->r[7]=0u+0x00000001u; // 800DE2E8
  c->lr=0x800DE2F0u; f_8017900C(c); // 800DE2EC
  c->r[3]=R8(c->r[31]+0x00000028u); // 800DE2F0
  c->r[0]=c->r[3]+0x00000001u; // 800DE2F4
  W8(c->r[31]+0x00000028u,c->r[0]); // 800DE2F8
L_800DE2FC:;
  c->r[3]=R32(c->r[31]+0x00000078u); // 800DE2FC
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800DE300
  if (crb(c,2)) { goto L_800DE804; } // 800DE304
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFDu; // 800DE308
  c->r[0]=0u+0x0000000Bu; // 800DE30C
  W32(c->r[31]+0x00000078u,c->r[3]); // 800DE310
  W8(c->r[31]+0x00000028u,c->r[0]); // 800DE314
  goto L_800DE804; // 800DE318
L_800DE31C:;
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE31C
  {uint32_t ea=c->r[2]+0xFFFFA430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE320
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DE324
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800DE328
  {uint32_t ea=c->r[2]+0xFFFFA454u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE32C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800DE330
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DE334
  fcmp(c,0,c->f[1],c->f[0]); // 800DE338
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 800DE33C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800DE340
  if (!crb(c,2)) { goto L_800DE390; } // 800DE344
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800DE348
  c->r[3]=c->r[31]|c->r[31]; // 800DE34C
  c->r[4]=R8(c->r[31]+0x00000095u); // 800DE350
  c->lr=0x800DE358u; f_800DEF44(c); // 800DE354
  c->r[3]=R8(c->r[31]+0x00000095u); // 800DE358
  c->r[0]=R8(c->r[31]+0x00000094u); // 800DE35C
  cmpu(c,0,c->r[3],c->r[0]); // 800DE360
  if (crb(c,2)) { goto L_800DE378; } // 800DE364
  c->r[3]=0u+0x00000004u; // 800DE368
  c->r[0]=0u+0x000000FFu; // 800DE36C
  W8(c->r[31]+0x00000094u,c->r[3]); // 800DE370
  W8(c->r[31]+0x00000095u,c->r[0]); // 800DE374
L_800DE378:;
  c->r[0]=R32(c->r[31]+0x00000078u); // 800DE378
  c->r[3]=R8(c->r[31]+0x00000028u); // 800DE37C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800DE380
  c->r[0]=c->r[3]+0x00000001u; // 800DE384
  W32(c->r[31]+0x00000078u,c->r[4]); // 800DE388
  W8(c->r[31]+0x00000028u,c->r[0]); // 800DE38C
L_800DE390:;
  c->r[3]=R8(c->r[31]+0x00000094u); // 800DE390
  c->r[0]=R8(c->r[31]+0x00000095u); // 800DE394
  cmpu(c,0,c->r[0],c->r[3]); // 800DE398
  if (crb(c,2)) { goto L_800DE804; } // 800DE39C
  c->r[0]=c->r[1]+0x00000010u; // 800DE3A0
  cmpu(c,0,c->r[3],0x00000004u); // 800DE3A4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DE3A8
  c->r[3]=c->r[31]|c->r[31]; // 800DE3AC
  c->r[5]=0u+0x00000004u; // 800DE3B0
  c->r[4]=R8(c->r[31]+0x00000096u); // 800DE3B4
  if (crb(c,2)) { goto L_800DE3D4; } // 800DE3B8
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE3BC
  {uint32_t ea=c->r[2]+0xFFFFA450u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE3C0
  {uint32_t ea=c->r[2]+0xFFFFA458u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE3C4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800DE3C8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800DE3CC
  goto L_800DE3D8; // 800DE3D0
L_800DE3D4:;
  {uint32_t ea=c->r[2]+0xFFFFA448u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE3D4
L_800DE3D8:;
  c->r[6]=c->r[1]+0x00000015u; // 800DE3D8
  c->r[7]=c->r[1]+0x00000014u; // 800DE3DC
  c->r[8]=c->r[1]+0x00000013u; // 800DE3E0
  c->r[9]=c->r[1]+0x00000012u; // 800DE3E4
  c->r[10]=c->r[1]+0x00000011u; // 800DE3E8
  c->lr=0x800DE3F0u; f_800DED78(c); // 800DE3EC
  c->r[4]=R8(c->r[31]+0x00000075u); // 800DE3F0
  c->r[3]=c->r[31]|c->r[31]; // 800DE3F4
  c->r[5]=R8(c->r[1]+0x00000015u); // 800DE3F8
  c->r[6]=R8(c->r[1]+0x00000014u); // 800DE3FC
  c->r[7]=R8(c->r[1]+0x00000013u); // 800DE400
  c->r[8]=R8(c->r[1]+0x00000012u); // 800DE404
  c->r[9]=R8(c->r[1]+0x00000011u); // 800DE408
  c->r[10]=R8(c->r[1]+0x00000010u); // 800DE40C
  c->lr=0x800DE414u; f_800DEBDC(c); // 800DE410
  goto L_800DE804; // 800DE414
L_800DE418:;
  c->r[4]=R32(c->r[3]+0x00000078u); // 800DE418
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800DE41C
  if (crb(c,2)) { goto L_800DE450; } // 800DE420
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFFEu; // 800DE424
  c->r[4]=0u+0x00000004u; // 800DE428
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DE42C
  c->r[3]=c->r[31]|c->r[31]; // 800DE430
  c->r[5]=0u+0x00000012u; // 800DE434
  c->r[6]=0u+0x00000001u; // 800DE438
  c->r[7]=0u+0x00000001u; // 800DE43C
  c->lr=0x800DE444u; f_8017900C(c); // 800DE440
  c->r[3]=R8(c->r[31]+0x00000028u); // 800DE444
  c->r[0]=c->r[3]+0x00000001u; // 800DE448
  W8(c->r[31]+0x00000028u,c->r[0]); // 800DE44C
L_800DE450:;
  c->r[3]=R32(c->r[31]+0x00000078u); // 800DE450
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800DE454
  if (crb(c,2)) { goto L_800DE804; } // 800DE458
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFDu; // 800DE45C
  c->r[0]=0u+0x0000000Bu; // 800DE460
  W32(c->r[31]+0x00000078u,c->r[3]); // 800DE464
  W8(c->r[31]+0x00000028u,c->r[0]); // 800DE468
  goto L_800DE804; // 800DE46C
L_800DE470:;
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE470
  {uint32_t ea=c->r[2]+0xFFFFA430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE474
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DE478
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800DE47C
  {uint32_t ea=c->r[2]+0xFFFFA45Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE480
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800DE484
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DE488
  fcmp(c,0,c->f[1],c->f[0]); // 800DE48C
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 800DE490
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800DE494
  if (!crb(c,2)) { goto L_800DE4E4; } // 800DE498
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800DE49C
  c->r[3]=c->r[31]|c->r[31]; // 800DE4A0
  c->r[4]=R8(c->r[31]+0x00000095u); // 800DE4A4
  c->lr=0x800DE4ACu; f_800DEF44(c); // 800DE4A8
  c->r[3]=R8(c->r[31]+0x00000095u); // 800DE4AC
  c->r[0]=R8(c->r[31]+0x00000094u); // 800DE4B0
  cmpu(c,0,c->r[3],c->r[0]); // 800DE4B4
  if (crb(c,2)) { goto L_800DE4CC; } // 800DE4B8
  c->r[3]=0u+0x00000004u; // 800DE4BC
  c->r[0]=0u+0x000000FFu; // 800DE4C0
  W8(c->r[31]+0x00000094u,c->r[3]); // 800DE4C4
  W8(c->r[31]+0x00000095u,c->r[0]); // 800DE4C8
L_800DE4CC:;
  c->r[0]=R32(c->r[31]+0x00000078u); // 800DE4CC
  c->r[3]=R8(c->r[31]+0x00000028u); // 800DE4D0
  c->r[4]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800DE4D4
  c->r[0]=c->r[3]+0x00000001u; // 800DE4D8
  W32(c->r[31]+0x00000078u,c->r[4]); // 800DE4DC
  W8(c->r[31]+0x00000028u,c->r[0]); // 800DE4E0
L_800DE4E4:;
  c->r[3]=R8(c->r[31]+0x00000094u); // 800DE4E4
  c->r[0]=R8(c->r[31]+0x00000095u); // 800DE4E8
  cmpu(c,0,c->r[0],c->r[3]); // 800DE4EC
  if (crb(c,2)) { goto L_800DE804; } // 800DE4F0
  c->r[0]=c->r[1]+0x00000010u; // 800DE4F4
  cmpu(c,0,c->r[3],0x00000004u); // 800DE4F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DE4FC
  c->r[3]=c->r[31]|c->r[31]; // 800DE500
  c->r[5]=0u+0x00000004u; // 800DE504
  c->r[4]=R8(c->r[31]+0x00000096u); // 800DE508
  if (crb(c,2)) { goto L_800DE528; } // 800DE50C
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE510
  {uint32_t ea=c->r[2]+0xFFFFA454u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE514
  {uint32_t ea=c->r[2]+0xFFFFA460u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE518
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800DE51C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800DE520
  goto L_800DE52C; // 800DE524
L_800DE528:;
  {uint32_t ea=c->r[2]+0xFFFFA448u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE528
L_800DE52C:;
  c->r[6]=c->r[1]+0x00000015u; // 800DE52C
  c->r[7]=c->r[1]+0x00000014u; // 800DE530
  c->r[8]=c->r[1]+0x00000013u; // 800DE534
  c->r[9]=c->r[1]+0x00000012u; // 800DE538
  c->r[10]=c->r[1]+0x00000011u; // 800DE53C
  c->lr=0x800DE544u; f_800DED78(c); // 800DE540
  c->r[4]=R8(c->r[31]+0x00000075u); // 800DE544
  c->r[3]=c->r[31]|c->r[31]; // 800DE548
  c->r[5]=R8(c->r[1]+0x00000015u); // 800DE54C
  c->r[6]=R8(c->r[1]+0x00000014u); // 800DE550
  c->r[7]=R8(c->r[1]+0x00000013u); // 800DE554
  c->r[8]=R8(c->r[1]+0x00000012u); // 800DE558
  c->r[9]=R8(c->r[1]+0x00000011u); // 800DE55C
  c->r[10]=R8(c->r[1]+0x00000010u); // 800DE560
  c->lr=0x800DE568u; f_800DEBDC(c); // 800DE564
  goto L_800DE804; // 800DE568
L_800DE56C:;
  c->r[4]=R32(c->r[3]+0x00000078u); // 800DE56C
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800DE570
  if (crb(c,2)) { goto L_800DE5A8; } // 800DE574
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFFEu; // 800DE578
  c->r[4]=0u+0x00000004u; // 800DE57C
  c->r[0]=c->r[0]|0x00000008u; // 800DE580
  c->r[5]=0u+0x00000013u; // 800DE584
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DE588
  c->r[3]=c->r[31]|c->r[31]; // 800DE58C
  c->r[6]=0u+0x00000001u; // 800DE590
  c->r[7]=0u+0x00000001u; // 800DE594
  c->lr=0x800DE59Cu; f_8017900C(c); // 800DE598
  c->r[3]=R8(c->r[31]+0x00000028u); // 800DE59C
  c->r[0]=c->r[3]+0x00000001u; // 800DE5A0
  W8(c->r[31]+0x00000028u,c->r[0]); // 800DE5A4
L_800DE5A8:;
  c->r[3]=R32(c->r[31]+0x00000078u); // 800DE5A8
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800DE5AC
  if (crb(c,2)) { goto L_800DE804; } // 800DE5B0
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFDu; // 800DE5B4
  c->r[0]=0u+0x0000000Bu; // 800DE5B8
  W32(c->r[31]+0x00000078u,c->r[3]); // 800DE5BC
  W8(c->r[31]+0x00000028u,c->r[0]); // 800DE5C0
  goto L_800DE804; // 800DE5C4
L_800DE5C8:;
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE5C8
  {uint32_t ea=c->r[2]+0xFFFFA430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE5CC
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DE5D0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800DE5D4
  {uint32_t ea=c->r[2]+0xFFFFA448u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE5D8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800DE5DC
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DE5E0
  fcmp(c,0,c->f[1],c->f[0]); // 800DE5E4
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 800DE5E8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800DE5EC
  if (!crb(c,2)) { goto L_800DE63C; } // 800DE5F0
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800DE5F4
  c->r[3]=c->r[31]|c->r[31]; // 800DE5F8
  c->r[4]=R8(c->r[31]+0x00000095u); // 800DE5FC
  c->lr=0x800DE604u; f_800DEF44(c); // 800DE600
  c->r[3]=R8(c->r[31]+0x00000095u); // 800DE604
  c->r[0]=R8(c->r[31]+0x00000094u); // 800DE608
  cmpu(c,0,c->r[3],c->r[0]); // 800DE60C
  if (crb(c,2)) { goto L_800DE624; } // 800DE610
  c->r[3]=0u+0x00000004u; // 800DE614
  c->r[0]=0u+0x000000FFu; // 800DE618
  W8(c->r[31]+0x00000094u,c->r[3]); // 800DE61C
  W8(c->r[31]+0x00000095u,c->r[0]); // 800DE620
L_800DE624:;
  c->r[0]=R32(c->r[31]+0x00000078u); // 800DE624
  c->r[3]=R8(c->r[31]+0x00000028u); // 800DE628
  c->r[4]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800DE62C
  c->r[0]=c->r[3]+0x00000001u; // 800DE630
  W32(c->r[31]+0x00000078u,c->r[4]); // 800DE634
  W8(c->r[31]+0x00000028u,c->r[0]); // 800DE638
L_800DE63C:;
  c->r[3]=R8(c->r[31]+0x00000094u); // 800DE63C
  c->r[0]=R8(c->r[31]+0x00000095u); // 800DE640
  cmpu(c,0,c->r[0],c->r[3]); // 800DE644
  if (crb(c,2)) { goto L_800DE804; } // 800DE648
  c->r[0]=c->r[1]+0x00000010u; // 800DE64C
  cmpu(c,0,c->r[3],0x00000004u); // 800DE650
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DE654
  c->r[3]=c->r[31]|c->r[31]; // 800DE658
  c->r[5]=0u+0x00000004u; // 800DE65C
  c->r[4]=R8(c->r[31]+0x00000096u); // 800DE660
  if (crb(c,2)) { goto L_800DE680; } // 800DE664
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE668
  {uint32_t ea=c->r[2]+0xFFFFA45Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE66C
  {uint32_t ea=c->r[2]+0xFFFFA460u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE670
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800DE674
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800DE678
  goto L_800DE684; // 800DE67C
L_800DE680:;
  {uint32_t ea=c->r[2]+0xFFFFA448u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE680
L_800DE684:;
  c->r[6]=c->r[1]+0x00000015u; // 800DE684
  c->r[7]=c->r[1]+0x00000014u; // 800DE688
  c->r[8]=c->r[1]+0x00000013u; // 800DE68C
  c->r[9]=c->r[1]+0x00000012u; // 800DE690
  c->r[10]=c->r[1]+0x00000011u; // 800DE694
  c->lr=0x800DE69Cu; f_800DED78(c); // 800DE698
  c->r[4]=R8(c->r[31]+0x00000075u); // 800DE69C
  c->r[3]=c->r[31]|c->r[31]; // 800DE6A0
  c->r[5]=R8(c->r[1]+0x00000015u); // 800DE6A4
  c->r[6]=R8(c->r[1]+0x00000014u); // 800DE6A8
  c->r[7]=R8(c->r[1]+0x00000013u); // 800DE6AC
  c->r[8]=R8(c->r[1]+0x00000012u); // 800DE6B0
  c->r[9]=R8(c->r[1]+0x00000011u); // 800DE6B4
  c->r[10]=R8(c->r[1]+0x00000010u); // 800DE6B8
  c->lr=0x800DE6C0u; f_800DEBDC(c); // 800DE6BC
  goto L_800DE804; // 800DE6C0
L_800DE6C4:;
  c->r[4]=R32(c->r[3]+0x00000078u); // 800DE6C4
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 800DE6C8
  if (crb(c,2)) { goto L_800DE6E4; } // 800DE6CC
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFDu; // 800DE6D0
  c->r[0]=c->r[5]+0x00000001u; // 800DE6D4
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF7u; // 800DE6D8
  W8(c->r[3]+0x00000028u,c->r[0]); // 800DE6DC
  W32(c->r[3]+0x00000078u,c->r[4]); // 800DE6E0
L_800DE6E4:;
  c->r[4]=R32(c->r[3]+0x00000078u); // 800DE6E4
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 800DE6E8
  if (crb(c,2)) { goto L_800DE804; } // 800DE6EC
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFFBu; // 800DE6F0
  c->r[5]=0u+0x00000000u; // 800DE6F4
  c->r[4]=c->r[0]|0x00000040u; // 800DE6F8
  W16(c->r[3]+0x0000009Au,c->r[5]); // 800DE6FC
  c->r[0]=0u+0x0000000Cu; // 800DE700
  W32(c->r[3]+0x00000078u,c->r[4]); // 800DE704
  W8(c->r[3]+0x00000028u,c->r[0]); // 800DE708
  goto L_800DE804; // 800DE70C
L_800DE710:;
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DE710
  c->r[4]=R16(c->r[3]+0x00000098u); // 800DE714
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800DE718
  cmpu(c,0,c->r[4],0x00000010u); // 800DE71C
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DE720
  if (!crb(c,0)) { goto L_800DE734; } // 800DE724
  c->r[0]=0u+0x00000000u; // 800DE728
  W16(c->r[3]+0x00000098u,c->r[0]); // 800DE72C
  goto L_800DE73C; // 800DE730
L_800DE734:;
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 800DE734
  W16(c->r[3]+0x00000098u,c->r[0]); // 800DE738
L_800DE73C:;
  c->r[0]=R16(c->r[3]+0x00000098u); // 800DE73C
  cmpu(c,0,c->r[0],0x00000010u); // 800DE740
  if (!crb(c,0)) { goto L_800DE754; } // 800DE744
  c->r[0]=0u+0x00000000u; // 800DE748
  W16(c->r[3]+0x0000009Au,c->r[0]); // 800DE74C
  goto L_800DE760; // 800DE750
L_800DE754:;
  c->r[4]=R16(c->r[3]+0x0000009Au); // 800DE754
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 800DE758
  W16(c->r[3]+0x0000009Au,c->r[0]); // 800DE75C
L_800DE760:;
  c->r[0]=R16(c->r[3]+0x00000098u); // 800DE760
  cmps(c,0,(int32_t)c->r[0],0); // 800DE764
  if (!crb(c,2)) { goto L_800DE804; } // 800DE768
  c->r[0]=R16(c->r[3]+0x0000009Au); // 800DE76C
  cmps(c,0,(int32_t)c->r[0],0); // 800DE770
  if (!crb(c,2)) { goto L_800DE804; } // 800DE774
  c->r[5]=R32(c->r[3]+0x00000078u); // 800DE778
  c->r[4]=0u+0x00000000u; // 800DE77C
  c->r[0]=0u+0x000000FFu; // 800DE780
  {uint32_t ea=c->r[2]+0xFFFFA430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE784
  c->r[5]=rotl(c->r[5],0)&0xFFFFFF9Fu; // 800DE788
  W8(c->r[3]+0x00000094u,c->r[0]); // 800DE78C
  c->r[0]=c->r[5]|0x00000010u; // 800DE790
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800DE794
  W8(c->r[3]+0x00000090u,c->r[4]); // 800DE798
  W8(c->r[3]+0x00000091u,c->r[4]); // 800DE79C
  W8(c->r[3]+0x00000092u,c->r[4]); // 800DE7A0
  W8(c->r[3]+0x00000093u,c->r[4]); // 800DE7A4
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800DE7A8
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DE7AC
  W8(c->r[3]+0x00000028u,c->r[4]); // 800DE7B0
  goto L_800DE804; // 800DE7B4
L_800DE7B8:;
  c->r[4]=R16(c->r[3]+0x0000009Au); // 800DE7B8
  c->r[0]=c->r[4]+0x00000001u; // 800DE7BC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800DE7C0
  W16(c->r[3]+0x0000009Au,c->r[0]); // 800DE7C4
  c->r[0]=addc(c,~c->r[4],0x000000FFu,1); // 800DE7C8
  cmpu(c,0,c->r[4],0x000000FFu); // 800DE7CC
  W16(c->r[3]+0x00000098u,c->r[0]); // 800DE7D0
  if (crb(c,0)) { goto L_800DE804; } // 800DE7D4
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DE7D8
  c->r[7]=0u+0x000000FFu; // 800DE7DC
  c->r[6]=0u+0x00000000u; // 800DE7E0
  c->r[5]=0u+0x00000005u; // 800DE7E4
  c->r[4]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800DE7E8
  c->r[0]=0u+0x0000000Au; // 800DE7EC
  W16(c->r[3]+0x0000009Au,c->r[7]); // 800DE7F0
  W16(c->r[3]+0x00000098u,c->r[6]); // 800DE7F4
  W8(c->r[3]+0x00000094u,c->r[5]); // 800DE7F8
  W32(c->r[3]+0x00000078u,c->r[4]); // 800DE7FC
  W8(c->r[3]+0x00000028u,c->r[0]); // 800DE800
L_800DE804:;
  c->r[0]=R32(c->r[31]+0x00000078u); // 800DE804
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800DE808
  if (crb(c,2)) { goto L_800DE820; } // 800DE80C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DE810
  c->r[0]=c->r[0]|0x00004000u; // 800DE814
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800DE818
  goto L_800DE82C; // 800DE81C
L_800DE820:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DE820
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800DE824
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800DE828
L_800DE82C:;
  c->r[0]=R8(c->r[31]+0x00000075u); // 800DE82C
  cmpu(c,0,c->r[0],0x000000FFu); // 800DE830
  if (crb(c,2)) { goto L_800DEA14; } // 800DE834
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DE838
  c->r[4]=0u+0x803A0000u; // 800DE83C
  c->r[4]=c->r[4]+0xFFFFE434u; // 800DE840
  c->r[5]=c->r[1]+0x00000090u; // 800DE844
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DE848
  c->r[4]=c->r[4]+0x0000000Cu; // 800DE84C
  c->r[6]=0u+0x00000001u; // 800DE850
  c->lr=0x800DE858u; f_80257018(c); // 800DE854
  c->r[3]=c->r[1]+0x00000060u; // 800DE858
  c->lr=0x800DE860u; f_80295AE8(c); // 800DE85C
  {uint32_t ea=c->r[2]+0xFFFFA448u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE860
  c->r[3]=c->r[1]+0x00000060u; // 800DE864
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE868
  c->f[3]=c->f[1]; // 800DE86C
  c->lr=0x800DE874u; f_80296294(c); // 800DE870
  c->r[4]=c->r[1]+0x00000060u; // 800DE874
  c->r[3]=c->r[1]+0x00000090u; // 800DE878
  c->r[5]=c->r[4]|c->r[4]; // 800DE87C
  c->lr=0x800DE884u; f_80295B48(c); // 800DE880
  c->r[8]=0u+0x803A0000u; // 800DE884
  {uint32_t ea=c->r[8]+0xFFFFE41Cu; c->r[7]=R32(ea); c->r[8]=ea;} // 800DE888
  c->r[4]=c->r[1]+0x00000024u; // 800DE88C
  c->r[3]=c->r[1]+0x00000090u; // 800DE890
  c->r[6]=R32(c->r[8]+0x00000004u); // 800DE894
  c->r[5]=c->r[4]|c->r[4]; // 800DE898
  c->r[0]=R32(c->r[8]+0x00000008u); // 800DE89C
  W32(c->r[1]+0x00000024u,c->r[7]); // 800DE8A0
  W32(c->r[1]+0x00000028u,c->r[6]); // 800DE8A4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800DE8A8
  c->lr=0x800DE8B0u; f_80296750(c); // 800DE8AC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DE8B0
  c->r[30]=0u+0x80550000u; // 800DE8B4
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE8B8
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DE8BC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE8C0
  c->r[5]=c->r[1]+0x00000060u; // 800DE8C4
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[1]); // 800DE8C8
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE8CC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE8D0
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 800DE8D4
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE8D8
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800DE8DC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800DE8E0
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE8E4
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE8E8
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 800DE8EC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 800DE8F0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800DE8F4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[4]);} // 800DE8F8
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 800DE8FC
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 800DE900
  c->r[4]=R8(c->r[31]+0x00000075u); // 800DE904
  c->lr=0x800DE90Cu; f_8018DEB8(c); // 800DE908
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DE90C
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 800DE910
  cmps(c,0,(int32_t)c->r[0],128); // 800DE914
  if (!crb(c,2)) { goto L_800DE954; } // 800DE918
  c->r[3]=0u+0x80620000u; // 800DE91C
  c->r[3]=c->r[3]+0x00007688u; // 800DE920
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DE924
  cmps(c,0,(int32_t)c->r[3],0); // 800DE928
  if (crb(c,2)) { goto L_800DE954; } // 800DE92C
  c->r[4]=0u+0x00000002u; // 800DE930
  c->lr=0x800DE938u; f_80037670(c); // 800DE934
  cmps(c,0,(int32_t)c->r[3],0); // 800DE938
  if (crb(c,2)) { goto L_800DE954; } // 800DE93C
  c->r[4]=R8(c->r[31]+0x00000075u); // 800DE940
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DE944
  c->r[5]=0u+0x00000001u; // 800DE948
  c->lr=0x800DE950u; f_8018E2D4(c); // 800DE94C
  goto L_800DE9FC; // 800DE950
L_800DE954:;
  c->r[3]=0u+0x80620000u; // 800DE954
  c->r[4]=0u+0x00000026u; // 800DE958
  c->r[3]=c->r[3]+0x00007688u; // 800DE95C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DE960
  c->lr=0x800DE968u; f_80037670(c); // 800DE964
  cmps(c,0,(int32_t)c->r[3],0); // 800DE968
  if (crb(c,2)) { goto L_800DE988; } // 800DE96C
  c->r[3]=0u+0x80550000u; // 800DE970
  c->r[4]=R8(c->r[31]+0x00000075u); // 800DE974
  c->r[3]=c->r[3]+0xFFFFC848u; // 800DE978
  c->r[5]=0u+0x00000001u; // 800DE97C
  c->lr=0x800DE984u; f_8018E2D4(c); // 800DE980
  goto L_800DE9FC; // 800DE984
L_800DE988:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DE988
  cmps(c,0,(int32_t)c->r[3],0); // 800DE98C
  if (crb(c,2)) { goto L_800DE9FC; } // 800DE990
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800DE994
  cmps(c,0,(int32_t)c->r[0],0); // 800DE998
  if (crb(c,2)) { goto L_800DE9E8; } // 800DE99C
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800DE9A0
  cmps(c,0,(int32_t)c->r[0],0); // 800DE9A4
  if (crb(c,2)) { goto L_800DE9E8; } // 800DE9A8
  c->r[0]=R32(c->r[31]+0x00000078u); // 800DE9AC
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DE9B0
  if (crb(c,2)) { goto L_800DE9D0; } // 800DE9B4
  c->r[3]=0u+0x80550000u; // 800DE9B8
  c->r[4]=R8(c->r[31]+0x00000075u); // 800DE9BC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800DE9C0
  c->r[5]=0u+0x00000000u; // 800DE9C4
  c->lr=0x800DE9CCu; f_8018E2D4(c); // 800DE9C8
  goto L_800DE9FC; // 800DE9CC
L_800DE9D0:;
  c->r[3]=0u+0x80550000u; // 800DE9D0
  c->r[4]=R8(c->r[31]+0x00000075u); // 800DE9D4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800DE9D8
  c->r[5]=0u+0x00000001u; // 800DE9DC
  c->lr=0x800DE9E4u; f_8018E2D4(c); // 800DE9E0
  goto L_800DE9FC; // 800DE9E4
L_800DE9E8:;
  c->r[3]=0u+0x80550000u; // 800DE9E8
  c->r[4]=R8(c->r[31]+0x00000075u); // 800DE9EC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800DE9F0
  c->r[5]=0u+0x00000001u; // 800DE9F4
  c->lr=0x800DE9FCu; f_8018E2D4(c); // 800DE9F8
L_800DE9FC:;
  c->r[0]=R16(c->r[31]+0x00000098u); // 800DE9FC
  c->r[3]=0u+0x80550000u; // 800DEA00
  c->r[4]=R8(c->r[31]+0x00000075u); // 800DEA04
  c->r[3]=c->r[3]+0xFFFFC848u; // 800DEA08
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800DEA0C
  c->lr=0x800DEA14u; f_8018EBA0(c); // 800DEA10
L_800DEA14:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 800DEA14
  cmpu(c,0,c->r[0],0x000000FFu); // 800DEA18
  if (crb(c,2)) { goto L_800DEBC4; } // 800DEA1C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DEA20
  c->r[4]=0u+0x803A0000u; // 800DEA24
  c->r[4]=c->r[4]+0xFFFFE434u; // 800DEA28
  c->r[5]=c->r[1]+0x00000030u; // 800DEA2C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DEA30
  c->r[4]=c->r[4]+0x0000000Cu; // 800DEA34
  c->r[6]=0u+0x00000001u; // 800DEA38
  c->lr=0x800DEA40u; f_80257018(c); // 800DEA3C
  c->r[8]=0u+0x803A0000u; // 800DEA40
  {uint32_t ea=c->r[8]+0xFFFFE428u; c->r[7]=R32(ea); c->r[8]=ea;} // 800DEA44
  c->r[4]=c->r[1]+0x00000018u; // 800DEA48
  c->r[3]=c->r[1]+0x00000030u; // 800DEA4C
  c->r[6]=R32(c->r[8]+0x00000004u); // 800DEA50
  c->r[5]=c->r[4]|c->r[4]; // 800DEA54
  c->r[0]=R32(c->r[8]+0x00000008u); // 800DEA58
  W32(c->r[1]+0x00000018u,c->r[7]); // 800DEA5C
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800DEA60
  W32(c->r[1]+0x00000020u,c->r[0]); // 800DEA64
  c->lr=0x800DEA6Cu; f_80296750(c); // 800DEA68
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DEA6C
  c->r[30]=0u+0x80550000u; // 800DEA70
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800DEA74
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DEA78
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DEA7C
  c->r[5]=c->r[1]+0x00000030u; // 800DEA80
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 800DEA84
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800DEA88
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DEA8C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEA90
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800DEA94
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800DEA98
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800DEA9C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800DEAA0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[4]);} // 800DEAA4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DEAA8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[2]);} // 800DEAAC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800DEAB0
  c->r[4]=R8(c->r[31]+0x00000076u); // 800DEAB4
  c->lr=0x800DEABCu; f_8018DEB8(c); // 800DEAB8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DEABC
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 800DEAC0
  cmps(c,0,(int32_t)c->r[0],128); // 800DEAC4
  if (!crb(c,2)) { goto L_800DEB04; } // 800DEAC8
  c->r[3]=0u+0x80620000u; // 800DEACC
  c->r[3]=c->r[3]+0x00007688u; // 800DEAD0
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DEAD4
  cmps(c,0,(int32_t)c->r[3],0); // 800DEAD8
  if (crb(c,2)) { goto L_800DEB04; } // 800DEADC
  c->r[4]=0u+0x00000002u; // 800DEAE0
  c->lr=0x800DEAE8u; f_80037670(c); // 800DEAE4
  cmps(c,0,(int32_t)c->r[3],0); // 800DEAE8
  if (crb(c,2)) { goto L_800DEB04; } // 800DEAEC
  c->r[4]=R8(c->r[31]+0x00000076u); // 800DEAF0
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DEAF4
  c->r[5]=0u+0x00000001u; // 800DEAF8
  c->lr=0x800DEB00u; f_8018E2D4(c); // 800DEAFC
  goto L_800DEBAC; // 800DEB00
L_800DEB04:;
  c->r[3]=0u+0x80620000u; // 800DEB04
  c->r[4]=0u+0x00000026u; // 800DEB08
  c->r[3]=c->r[3]+0x00007688u; // 800DEB0C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DEB10
  c->lr=0x800DEB18u; f_80037670(c); // 800DEB14
  cmps(c,0,(int32_t)c->r[3],0); // 800DEB18
  if (crb(c,2)) { goto L_800DEB38; } // 800DEB1C
  c->r[3]=0u+0x80550000u; // 800DEB20
  c->r[4]=R8(c->r[31]+0x00000076u); // 800DEB24
  c->r[3]=c->r[3]+0xFFFFC848u; // 800DEB28
  c->r[5]=0u+0x00000001u; // 800DEB2C
  c->lr=0x800DEB34u; f_8018E2D4(c); // 800DEB30
  goto L_800DEBAC; // 800DEB34
L_800DEB38:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DEB38
  cmps(c,0,(int32_t)c->r[3],0); // 800DEB3C
  if (crb(c,2)) { goto L_800DEBAC; } // 800DEB40
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800DEB44
  cmps(c,0,(int32_t)c->r[0],0); // 800DEB48
  if (crb(c,2)) { goto L_800DEB98; } // 800DEB4C
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800DEB50
  cmps(c,0,(int32_t)c->r[0],0); // 800DEB54
  if (crb(c,2)) { goto L_800DEB98; } // 800DEB58
  c->r[0]=R32(c->r[31]+0x00000078u); // 800DEB5C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 800DEB60
  if (crb(c,2)) { goto L_800DEB80; } // 800DEB64
  c->r[3]=0u+0x80550000u; // 800DEB68
  c->r[4]=R8(c->r[31]+0x00000076u); // 800DEB6C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800DEB70
  c->r[5]=0u+0x00000000u; // 800DEB74
  c->lr=0x800DEB7Cu; f_8018E2D4(c); // 800DEB78
  goto L_800DEBAC; // 800DEB7C
L_800DEB80:;
  c->r[3]=0u+0x80550000u; // 800DEB80
  c->r[4]=R8(c->r[31]+0x00000076u); // 800DEB84
  c->r[3]=c->r[3]+0xFFFFC848u; // 800DEB88
  c->r[5]=0u+0x00000001u; // 800DEB8C
  c->lr=0x800DEB94u; f_8018E2D4(c); // 800DEB90
  goto L_800DEBAC; // 800DEB94
L_800DEB98:;
  c->r[3]=0u+0x80550000u; // 800DEB98
  c->r[4]=R8(c->r[31]+0x00000076u); // 800DEB9C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800DEBA0
  c->r[5]=0u+0x00000001u; // 800DEBA4
  c->lr=0x800DEBACu; f_8018E2D4(c); // 800DEBA8
L_800DEBAC:;
  c->r[0]=R16(c->r[31]+0x0000009Au); // 800DEBAC
  c->r[3]=0u+0x80550000u; // 800DEBB0
  c->r[4]=R8(c->r[31]+0x00000076u); // 800DEBB4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800DEBB8
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800DEBBC
  c->lr=0x800DEBC4u; f_8018EBA0(c); // 800DEBC0
L_800DEBC4:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800DEBC4
  c->r[31]=R32(c->r[1]+0x000000CCu); // 800DEBC8
  c->r[30]=R32(c->r[1]+0x000000C8u); // 800DEBCC
  c->lr=c->r[0]; // 800DEBD0
  c->r[1]=c->r[1]+0x000000D0u; // 800DEBD4
  return; // 800DEBD8
}

// fn_800DEBDC
void f_800DEBDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEBDC
  c->r[0]=c->lr; // 800DEBE0
  cmpu(c,0,c->r[4],0x000000FFu); // 800DEBE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DEBE8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DEBEC
  c->r[23]=c->r[4]|c->r[4]; // 800DEBF0
  c->r[24]=c->r[5]|c->r[5]; // 800DEBF4
  c->r[25]=c->r[6]|c->r[6]; // 800DEBF8
  c->r[26]=c->r[7]|c->r[7]; // 800DEBFC
  c->r[27]=c->r[8]|c->r[8]; // 800DEC00
  c->r[28]=c->r[9]|c->r[9]; // 800DEC04
  c->r[29]=c->r[10]|c->r[10]; // 800DEC08
  if (crb(c,2)) { goto L_800DECB4; } // 800DEC0C
  c->r[30]=0u+0x80550000u; // 800DEC10
  c->r[8]=0u+0x00000000u; // 800DEC14
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DEC18
  c->lr=0x800DEC20u; f_8018E94C(c); // 800DEC1C
  c->r[31]=0u+0x803A0000u; // 800DEC20
  c->r[5]=c->r[24]|c->r[24]; // 800DEC24
  c->r[31]=c->r[31]+0xFFFFE434u; // 800DEC28
  c->r[6]=c->r[25]|c->r[25]; // 800DEC2C
  c->r[7]=c->r[26]|c->r[26]; // 800DEC30
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DEC34
  c->r[4]=c->r[31]+0x00000008u; // 800DEC38
  c->r[8]=0u+0x00000000u; // 800DEC3C
  c->lr=0x800DEC44u; f_8018EAEC(c); // 800DEC40
  c->r[5]=c->r[24]|c->r[24]; // 800DEC44
  c->r[6]=c->r[25]|c->r[25]; // 800DEC48
  c->r[7]=c->r[26]|c->r[26]; // 800DEC4C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DEC50
  c->r[4]=c->r[31]+0x00000019u; // 800DEC54
  c->r[8]=0u+0x00000000u; // 800DEC58
  c->lr=0x800DEC60u; f_8018EAEC(c); // 800DEC5C
  c->r[4]=c->r[23]|c->r[23]; // 800DEC60
  c->r[5]=c->r[27]|c->r[27]; // 800DEC64
  c->r[6]=c->r[28]|c->r[28]; // 800DEC68
  c->r[7]=c->r[29]|c->r[29]; // 800DEC6C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DEC70
  c->r[8]=0u+0x00000001u; // 800DEC74
  c->lr=0x800DEC7Cu; f_8018E94C(c); // 800DEC78
  c->r[5]=c->r[27]|c->r[27]; // 800DEC7C
  c->r[6]=c->r[28]|c->r[28]; // 800DEC80
  c->r[7]=c->r[29]|c->r[29]; // 800DEC84
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DEC88
  c->r[4]=c->r[31]+0x00000008u; // 800DEC8C
  c->r[8]=0u+0x00000001u; // 800DEC90
  c->lr=0x800DEC98u; f_8018EAEC(c); // 800DEC94
  c->r[5]=c->r[27]|c->r[27]; // 800DEC98
  c->r[6]=c->r[28]|c->r[28]; // 800DEC9C
  c->r[7]=c->r[29]|c->r[29]; // 800DECA0
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DECA4
  c->r[4]=c->r[31]+0x00000019u; // 800DECA8
  c->r[8]=0u+0x00000001u; // 800DECAC
  c->lr=0x800DECB4u; f_8018EAEC(c); // 800DECB0
L_800DECB4:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DECB4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DECB8
  c->lr=c->r[0]; // 800DECBC
  c->r[1]=c->r[1]+0x00000030u; // 800DECC0
  return; // 800DECC4
}

// fn_800DECC8
void f_800DECC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DECC8
  c->r[0]=c->lr; // 800DECCC
  cmpu(c,0,c->r[4],0x000000FFu); // 800DECD0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DECD4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DECD8
  c->r[23]=c->r[4]|c->r[4]; // 800DECDC
  c->r[24]=c->r[5]|c->r[5]; // 800DECE0
  c->r[25]=c->r[6]|c->r[6]; // 800DECE4
  c->r[26]=c->r[7]|c->r[7]; // 800DECE8
  c->r[27]=c->r[8]|c->r[8]; // 800DECEC
  c->r[28]=c->r[9]|c->r[9]; // 800DECF0
  c->r[29]=c->r[10]|c->r[10]; // 800DECF4
  if (crb(c,2)) { goto L_800DED64; } // 800DECF8
  c->r[30]=0u+0x80550000u; // 800DECFC
  c->r[8]=0u+0x00000000u; // 800DED00
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DED04
  c->lr=0x800DED0Cu; f_8018E94C(c); // 800DED08
  c->r[31]=0u+0x803A0000u; // 800DED0C
  c->r[5]=c->r[24]|c->r[24]; // 800DED10
  c->r[6]=c->r[25]|c->r[25]; // 800DED14
  c->r[7]=c->r[26]|c->r[26]; // 800DED18
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DED1C
  c->r[4]=c->r[31]+0xFFFFE434u; // 800DED20
  c->r[8]=0u+0x00000000u; // 800DED24
  c->lr=0x800DED2Cu; f_8018EAEC(c); // 800DED28
  c->r[4]=c->r[23]|c->r[23]; // 800DED2C
  c->r[5]=c->r[27]|c->r[27]; // 800DED30
  c->r[6]=c->r[28]|c->r[28]; // 800DED34
  c->r[7]=c->r[29]|c->r[29]; // 800DED38
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DED3C
  c->r[8]=0u+0x00000001u; // 800DED40
  c->lr=0x800DED48u; f_8018E94C(c); // 800DED44
  c->r[5]=c->r[27]|c->r[27]; // 800DED48
  c->r[6]=c->r[28]|c->r[28]; // 800DED4C
  c->r[7]=c->r[29]|c->r[29]; // 800DED50
  c->r[3]=c->r[30]+0xFFFFC848u; // 800DED54
  c->r[4]=c->r[31]+0xFFFFE434u; // 800DED58
  c->r[8]=0u+0x00000001u; // 800DED5C
  c->lr=0x800DED64u; f_8018EAEC(c); // 800DED60
L_800DED64:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DED64
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DED68
  c->lr=c->r[0]; // 800DED6C
  c->r[1]=c->r[1]+0x00000030u; // 800DED70
  return; // 800DED74
}

// fn_800DED78
void f_800DED78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DED78
  c->r[0]=rotl(c->r[4],2)&0x000003FCu; // 800DED7C
  c->r[3]=rotl(c->r[5],2)&0x000003FCu; // 800DED80
  c->r[12]=0u+0x803D0000u; // 800DED84
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800DED88
  c->r[11]=0u+0x803D0000u; // 800DED8C
  c->r[0]=c->r[0]-c->r[4]; // 800DED90
  c->r[12]=c->r[12]+0x00002C28u; // 800DED94
  W32(c->r[1]+0x00000048u,c->r[30]); // 800DED98
  c->r[3]=c->r[3]-c->r[5]; // 800DED9C
  c->r[30]=0u+0x43300000u; // 800DEDA0
  {uint32_t ea=c->r[2]+0xFFFFA468u; c->f[0]=RF64(ea);} // 800DEDA4
  c->r[5]=R8(c->r[12]+c->r[0]); // 800DEDA8
  c->r[31]=c->r[12]+c->r[0]; // 800DEDAC
  c->r[4]=R8(c->r[12]+c->r[3]); // 800DEDB0
  c->r[12]=c->r[12]+c->r[3]; // 800DEDB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DEDB8
  c->r[11]=c->r[11]+0x00002C38u; // 800DEDBC
  c->r[4]=c->r[4]-c->r[5]; // 800DEDC0
  {uint32_t ea=c->r[2]+0xFFFFA470u; c->f[4]=RF64(ea);} // 800DEDC4
  c->r[4]=c->r[4]^0x80000000u; // 800DEDC8
  W32(c->r[1]+0x00000010u,c->r[30]); // 800DEDCC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800DEDD0
  c->r[4]=R32(c->r[1]+0x00000058u); // 800DEDD4
  W32(c->r[1]+0x00000014u,c->r[5]); // 800DEDD8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800DEDDC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800DEDE0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800DEDE4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800DEDE8
  c->f[2]=c->ps1[2]=S(std::fma(c->f[1],c->f[3],c->f[2])); // 800DEDEC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800DEDF0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 800DEDF4
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 800DEDF8
  W8(c->r[6]+0x00000000u,c->r[5]); // 800DEDFC
  c->r[6]=R8(c->r[31]+0x00000001u); // 800DEE00
  c->r[5]=R8(c->r[12]+0x00000001u); // 800DEE04
  W32(c->r[1]+0x00000014u,c->r[6]); // 800DEE08
  c->r[5]=c->r[5]-c->r[6]; // 800DEE0C
  c->r[5]=c->r[5]^0x80000000u; // 800DEE10
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800DEE14
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DEE18
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800DEE1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800DEE20
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800DEE24
  c->f[2]=c->ps1[2]=S(std::fma(c->f[1],c->f[3],c->f[2])); // 800DEE28
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800DEE2C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 800DEE30
  c->r[5]=R32(c->r[1]+0x00000024u); // 800DEE34
  W8(c->r[7]+0x00000000u,c->r[5]); // 800DEE38
  c->r[6]=R8(c->r[31]+0x00000002u); // 800DEE3C
  c->r[5]=R8(c->r[12]+0x00000002u); // 800DEE40
  W32(c->r[1]+0x00000014u,c->r[6]); // 800DEE44
  c->r[5]=c->r[5]-c->r[6]; // 800DEE48
  c->r[5]=c->r[5]^0x80000000u; // 800DEE4C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800DEE50
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DEE54
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800DEE58
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800DEE5C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800DEE60
  c->f[2]=c->ps1[2]=S(std::fma(c->f[1],c->f[3],c->f[2])); // 800DEE64
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800DEE68
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[2]);} // 800DEE6C
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 800DEE70
  W8(c->r[8]+0x00000000u,c->r[5]); // 800DEE74
  c->r[6]=R8(c->r[11]+c->r[0]); // 800DEE78
  c->r[5]=R8(c->r[11]+c->r[3]); // 800DEE7C
  W32(c->r[1]+0x00000014u,c->r[6]); // 800DEE80
  c->r[5]=c->r[5]-c->r[6]; // 800DEE84
  c->r[5]=c->r[5]^0x80000000u; // 800DEE88
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800DEE8C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DEE90
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800DEE94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800DEE98
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800DEE9C
  c->f[2]=c->ps1[2]=S(std::fma(c->f[1],c->f[3],c->f[2])); // 800DEEA0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800DEEA4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800DEEA8
  c->r[5]=R32(c->r[1]+0x00000034u); // 800DEEAC
  W8(c->r[9]+0x00000000u,c->r[5]); // 800DEEB0
  c->r[5]=c->r[11]+c->r[0]; // 800DEEB4
  c->r[3]=c->r[11]+c->r[3]; // 800DEEB8
  c->r[6]=R8(c->r[5]+0x00000001u); // 800DEEBC
  c->r[0]=R8(c->r[3]+0x00000001u); // 800DEEC0
  W32(c->r[1]+0x00000014u,c->r[6]); // 800DEEC4
  c->r[0]=c->r[0]-c->r[6]; // 800DEEC8
  c->r[0]=c->r[0]^0x80000000u; // 800DEECC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800DEED0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DEED4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800DEED8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800DEEDC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800DEEE0
  c->f[2]=c->ps1[2]=S(std::fma(c->f[1],c->f[3],c->f[2])); // 800DEEE4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800DEEE8
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 800DEEEC
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800DEEF0
  W8(c->r[10]+0x00000000u,c->r[0]); // 800DEEF4
  c->r[5]=R8(c->r[5]+0x00000002u); // 800DEEF8
  c->r[0]=R8(c->r[3]+0x00000002u); // 800DEEFC
  W32(c->r[1]+0x00000014u,c->r[5]); // 800DEF00
  c->r[0]=c->r[0]-c->r[5]; // 800DEF04
  c->r[0]=c->r[0]^0x80000000u; // 800DEF08
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800DEF0C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DEF10
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800DEF14
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800DEF18
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800DEF1C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 800DEF20
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800DEF24
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[0]);} // 800DEF28
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DEF2C
  W8(c->r[4]+0x00000000u,c->r[0]); // 800DEF30
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800DEF34
  c->r[30]=R32(c->r[1]+0x00000048u); // 800DEF38
  c->r[1]=c->r[1]+0x00000050u; // 800DEF3C
  return; // 800DEF40
}

// fn_800DEF44
void f_800DEF44(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000095u); // 800DEF44
  cmps(c,0,(int32_t)c->r[0],2); // 800DEF48
  if (crb(c,2)) { goto L_800DEF90; } // 800DEF4C
  if (!crb(c,0)) { goto L_800DEF64; } // 800DEF50
  cmps(c,0,(int32_t)c->r[0],0); // 800DEF54
  if (crb(c,2)) { goto L_800DEF70; } // 800DEF58
  if (!crb(c,0)) { goto L_800DEF80; } // 800DEF5C
  return; // 800DEF60
L_800DEF64:;
  cmps(c,0,(int32_t)c->r[0],4); // 800DEF64
  if (!crb(c,0)) return; // 800DEF68
  goto L_800DEFA0; // 800DEF6C
L_800DEF70:;
  c->r[4]=R8(c->r[3]+0x00000090u); // 800DEF70
  c->r[0]=c->r[4]+0x00000001u; // 800DEF74
  W8(c->r[3]+0x00000090u,c->r[0]); // 800DEF78
  return; // 800DEF7C
L_800DEF80:;
  c->r[4]=R8(c->r[3]+0x00000091u); // 800DEF80
  c->r[0]=c->r[4]+0x00000001u; // 800DEF84
  W8(c->r[3]+0x00000091u,c->r[0]); // 800DEF88
  return; // 800DEF8C
L_800DEF90:;
  c->r[4]=R8(c->r[3]+0x00000092u); // 800DEF90
  c->r[0]=c->r[4]+0x00000001u; // 800DEF94
  W8(c->r[3]+0x00000092u,c->r[0]); // 800DEF98
  return; // 800DEF9C
L_800DEFA0:;
  c->r[4]=R8(c->r[3]+0x00000093u); // 800DEFA0
  c->r[0]=c->r[4]+0x00000001u; // 800DEFA4
  W8(c->r[3]+0x00000093u,c->r[0]); // 800DEFA8
  return; // 800DEFAC
}

