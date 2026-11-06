#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8033F464
void f_8033F464(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x00000001u; // 8033F464
  c->r[4]=R32(c->r[3]+0x00000000u); // 8033F468
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8033F46C
  c->r[3]=0u+0x00000001u; // 8033F470
  c->r[4]=c->r[4]+c->r[0]; // 8033F474
  c->r[0]=R8(c->r[4]+0x00000004u); // 8033F478
  W8(c->r[5]+0x00000000u,c->r[0]); // 8033F47C
  c->r[0]=R8(c->r[4]+0x00000005u); // 8033F480
  W8(c->r[5]+0x00000001u,c->r[0]); // 8033F484
  c->r[0]=R8(c->r[4]+0x00000006u); // 8033F488
  W8(c->r[5]+0x00000002u,c->r[0]); // 8033F48C
  c->r[0]=R8(c->r[4]+0x00000007u); // 8033F490
  W8(c->r[5]+0x00000003u,c->r[0]); // 8033F494
  return; // 8033F498
}

// fn_8033F49C
void f_8033F49C(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[4],0)&0x00000001u; // 8033F49C
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 8033F4A0
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)20); // 8033F4A4
  c->r[3]=R32(c->r[3]+0x00000000u); // 8033F4A8
  c->r[3]=c->r[3]+c->r[0]; // 8033F4AC
  if (!crb(c,2)) { goto L_8033F4BC; } // 8033F4B0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8033F4B4
  goto L_8033F4C0; // 8033F4B8
L_8033F4BC:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 8033F4BC
L_8033F4C0:;
  cmps(c,0,(int32_t)c->r[5],0); // 8033F4C0
  if (crb(c,2)) { goto L_8033F4D0; } // 8033F4C4
  c->r[0]=rotl(c->r[3],31)&0x00000001u; // 8033F4C8
  W8(c->r[5]+0x00000000u,c->r[0]); // 8033F4CC
L_8033F4D0:;
  cmps(c,0,(int32_t)c->r[6],0); // 8033F4D0
  if (crb(c,2)) { goto L_8033F4E0; } // 8033F4D4
  c->r[0]=rotl(c->r[3],26)&0x00000001u; // 8033F4D8
  W32(c->r[6]+0x00000000u,c->r[0]); // 8033F4DC
L_8033F4E0:;
  cmps(c,0,(int32_t)c->r[7],0); // 8033F4E0
  if (crb(c,2)) { goto L_8033F4F0; } // 8033F4E4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 8033F4E8
  W32(c->r[7]+0x00000000u,c->r[0]); // 8033F4EC
L_8033F4F0:;
  cmps(c,0,(int32_t)c->r[8],0); // 8033F4F0
  c->r[4]=rotl(c->r[3],30)&0x0000000Fu; // 8033F4F4
  c->r[0]=rotl(c->r[3],21)&0x0000000Fu; // 8033F4F8
  if (crb(c,2)) { goto L_8033F50C; } // 8033F4FC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8033F500
  c->r[0]=c->r[4]|c->r[0]; // 8033F504
  W32(c->r[8]+0x00000000u,c->r[0]); // 8033F508
L_8033F50C:;
  c->r[0]=rotl(c->r[3],22)&0x00000001u; cr0(c,c->r[0]); // 8033F50C
  if (!crb(c,2)) { goto L_8033F520; } // 8033F510
  c->r[4]=0u+0x00000000u; // 8033F514
  c->r[0]=0u+0x00000000u; // 8033F518
  goto L_8033F53C; // 8033F51C
L_8033F520:;
  c->r[0]=rotl(c->r[3],23)&0x00000001u; cr0(c,c->r[0]); // 8033F520
  if (!crb(c,2)) { goto L_8033F534; } // 8033F524
  c->r[0]=rotl(c->r[3],25)&0x00000003u; // 8033F528
  c->r[4]=0u+0x00000002u; // 8033F52C
  goto L_8033F53C; // 8033F530
L_8033F534:;
  c->r[4]=0u+0x00000001u; // 8033F534
  c->r[0]=rotl(c->r[3],25)&0x00000003u; // 8033F538
L_8033F53C:;
  cmps(c,0,(int32_t)c->r[9],0); // 8033F53C
  if (crb(c,2)) { goto L_8033F548; } // 8033F540
  W32(c->r[9]+0x00000000u,c->r[0]); // 8033F544
L_8033F548:;
  cmps(c,0,(int32_t)c->r[10],0); // 8033F548
  if (crb(c,2)) { goto L_8033F554; } // 8033F54C
  W32(c->r[10]+0x00000000u,c->r[4]); // 8033F550
L_8033F554:;
  c->r[3]=0u+0x00000001u; // 8033F554
  return; // 8033F558
}

// fn_8033F55C
void f_8033F55C(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000000u); // 8033F55C
  c->r[3]=c->r[4]|c->r[4]; // 8033F560
  c->r[5]=R32(c->r[6]+0x00000000u); // 8033F564
  c->r[0]=R32(c->r[6]+0x00000004u); // 8033F568
  W32(c->r[4]+0x00000000u,c->r[5]); // 8033F56C
  W32(c->r[4]+0x00000004u,c->r[0]); // 8033F570
  c->r[5]=R32(c->r[6]+0x00000008u); // 8033F574
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8033F578
  W32(c->r[4]+0x00000008u,c->r[5]); // 8033F57C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8033F580
  c->r[5]=R32(c->r[6]+0x00000010u); // 8033F584
  c->r[0]=R32(c->r[6]+0x00000014u); // 8033F588
  W32(c->r[4]+0x00000010u,c->r[5]); // 8033F58C
  W32(c->r[4]+0x00000014u,c->r[0]); // 8033F590
  c->r[5]=R32(c->r[6]+0x00000018u); // 8033F594
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 8033F598
  W32(c->r[4]+0x00000018u,c->r[5]); // 8033F59C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8033F5A0
  c->r[5]=R32(c->r[6]+0x00000020u); // 8033F5A4
  c->r[0]=R32(c->r[6]+0x00000024u); // 8033F5A8
  W32(c->r[4]+0x00000020u,c->r[5]); // 8033F5AC
  W32(c->r[4]+0x00000024u,c->r[0]); // 8033F5B0
  return; // 8033F5B4
}

// fn_8033F5B8
void f_8033F5B8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 8033F5B8
  if (crb(c,2)) return; // 8033F5BC
  cmps(c,0,(int32_t)c->r[5],0); // 8033F5C0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8033F5C4
  if (crb(c,2)) { goto L_8033F604; } // 8033F5C8
  cmpu(c,0,c->r[4],0x00000002u); // 8033F5CC
  if (!crb(c,0)) { goto L_8033F5DC; } // 8033F5D0
  c->r[4]=0u+0x00000020u; // 8033F5D4
  f_802B8AE0(c); return; // 8033F5D8
L_8033F5DC:;
  cmpu(c,0,c->r[4],0x00000004u); // 8033F5DC
  if (!crb(c,0)) { goto L_8033F5EC; } // 8033F5E0
  c->r[4]=0u+0x00000040u; // 8033F5E4
  f_802B8AE0(c); return; // 8033F5E8
L_8033F5EC:;
  cmpu(c,0,c->r[4],0x00000008u); // 8033F5EC
  if (!crb(c,0)) { goto L_8033F5FC; } // 8033F5F0
  c->r[4]=0u+0x00000080u; // 8033F5F4
  f_802B8AE0(c); return; // 8033F5F8
L_8033F5FC:;
  c->r[4]=0u+0x000000A0u; // 8033F5FC
  f_802B8AE0(c); return; // 8033F600
L_8033F604:;
  cmpu(c,0,c->r[4],0x00000002u); // 8033F604
  if (!crb(c,0)) { goto L_8033F628; } // 8033F608
  c->r[4]=0u+0xCC010000u; // 8033F60C
  c->r[0]=0u+0x00000040u; // 8033F610
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8033F614
  c->r[0]=0u+0x00000020u; // 8033F618
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8033F61C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8033F620
  return; // 8033F624
L_8033F628:;
  cmpu(c,0,c->r[4],0x00000004u); // 8033F628
  if (!crb(c,0)) { goto L_8033F648; } // 8033F62C
  c->r[4]=0u+0xCC010000u; // 8033F630
  c->r[0]=0u+0x00000040u; // 8033F634
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8033F638
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8033F63C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8033F640
  return; // 8033F644
L_8033F648:;
  cmpu(c,0,c->r[4],0x00000008u); // 8033F648
  if (!crb(c,0)) { goto L_8033F66C; } // 8033F64C
  c->r[4]=0u+0xCC010000u; // 8033F650
  c->r[0]=0u+0x00000040u; // 8033F654
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8033F658
  c->r[0]=0u+0x00000080u; // 8033F65C
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8033F660
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8033F664
  return; // 8033F668
L_8033F66C:;
  c->r[4]=0u+0xCC010000u; // 8033F66C
  c->r[0]=0u+0x00000040u; // 8033F670
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8033F674
  c->r[0]=0u+0x000000A0u; // 8033F678
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8033F67C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8033F680
  return; // 8033F684
}

// Bind__Q34nw4r3g3d6ResMatFQ34nw4r3g3d7ResFile
void f_8033F688(Ctx* __restrict c) {
  trace_call(0x8033F688u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8033F688
  c->r[0]=c->lr; // 8033F68C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8033F690
  c->r[11]=c->r[1]+0x00000030u; // 8033F694
  c->lr=0x8033F69Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8033F698
  c->r[5]=R32(c->r[3]+0x00000000u); // 8033F69C
  c->r[26]=c->r[3]|c->r[3]; // 8033F6A0
  c->r[27]=c->r[4]|c->r[4]; // 8033F6A4
  c->r[28]=0u+0x00000000u; // 8033F6A8
  c->r[31]=R32(c->r[5]+0x0000002Cu); // 8033F6AC
  c->r[29]=0u+0x00000000u; // 8033F6B0
  c->r[30]=0u+0x00000000u; // 8033F6B4
  goto L_8033F724; // 8033F6B8
L_8033F6BC:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 8033F6BC
  c->r[0]=R32(c->r[3]+0x00000030u); // 8033F6C0
  cmps(c,0,(int32_t)c->r[0],0); // 8033F6C4
  if (crb(c,2)) { goto L_8033F6D4; } // 8033F6C8
  c->r[4]=c->r[3]+c->r[0]; // 8033F6CC
  goto L_8033F6D8; // 8033F6D0
L_8033F6D4:;
  c->r[4]=0u+0x00000000u; // 8033F6D4
L_8033F6D8:;
  c->r[3]=c->r[3]+0x00000144u; // 8033F6D8
  c->r[8]=c->r[4]+c->r[30]; // 8033F6DC
  W32(c->r[1]+0x00000008u,c->r[3]); // 8033F6E0
  c->r[3]=c->r[1]+0x00000014u; // 8033F6E4
  c->r[0]=R32(c->r[27]+0x00000000u); // 8033F6E8
  c->r[4]=c->r[1]+0x00000010u; // 8033F6EC
  c->r[7]=R32(c->r[26]+0x00000000u); // 8033F6F0
  c->r[5]=c->r[1]+0x0000000Cu; // 8033F6F4
  c->r[6]=c->r[1]+0x00000008u; // 8033F6F8
  c->r[7]=c->r[7]+0x00000040u; // 8033F6FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 8033F700
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 8033F704
  W32(c->r[1]+0x00000014u,c->r[8]); // 8033F708
  c->lr=0x8033F710u; f_8033FBEC(c); // 8033F70C
  cmps(c,0,(int32_t)c->r[3],0); // 8033F710
  if (crb(c,2)) { goto L_8033F71C; } // 8033F714
  c->r[28]=c->r[28]+0x00000001u; // 8033F718
L_8033F71C:;
  c->r[30]=c->r[30]+0x00000034u; // 8033F71C
  c->r[29]=c->r[29]+0x00000001u; // 8033F720
L_8033F724:;
  cmpu(c,0,c->r[29],c->r[31]); // 8033F724
  if (crb(c,0)) { IRQCHK(c); goto L_8033F6BC; } // 8033F728
  c->r[0]=c->r[31]-c->r[28]; // 8033F72C
  c->r[11]=c->r[1]+0x00000030u; // 8033F730
  c->r[0]=cntlz(c->r[0]); // 8033F734
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8033F738
  c->lr=0x8033F740u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8033F73C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8033F740
  c->lr=c->r[0]; // 8033F744
  c->r[1]=c->r[1]+0x00000030u; // 8033F748
  return; // 8033F74C
}

// Release__Q34nw4r3g3d6ResMatFv
void f_8033F750(Ctx* __restrict c) {
  trace_call(0x8033F750u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 8033F750
  c->r[10]=0u+0x00000000u; // 8033F754
  c->r[5]=0u+0x00000001u; // 8033F758
  c->r[6]=0u+0x00000000u; // 8033F75C
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 8033F760
  c->ctr=c->r[0]; // 8033F764
  cmpu(c,0,c->r[0],0x00000000u); // 8033F768
  if (!crb(c,1)) return; // 8033F76C
L_8033F770:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8033F770
  c->r[0]=R32(c->r[4]+0x00000030u); // 8033F774
  cmps(c,0,(int32_t)c->r[0],0); // 8033F778
  if (crb(c,2)) { goto L_8033F788; } // 8033F77C
  c->r[0]=c->r[4]+c->r[0]; // 8033F780
  goto L_8033F78C; // 8033F784
L_8033F788:;
  c->r[0]=0u+0x00000000u; // 8033F788
L_8033F78C:;
  c->r[9]=c->r[0]+c->r[10]; // 8033F78C
  c->r[7]=addc(c,c->r[4],0x00000040u,0); cr0(c,c->r[7]); // 8033F790
  W32(c->r[9]+0x00000008u,c->r[6]); // 8033F794
  c->r[8]=c->r[4]+0x00000144u; // 8033F798
  W32(c->r[9]+0x0000000Cu,c->r[6]); // 8033F79C
  c->r[0]=R32(c->r[9]+0x00000010u); // 8033F7A0
  if (crb(c,2)) { goto L_8033F7C8; } // 8033F7A4
  cmps(c,0,(int32_t)c->r[0],0); // 8033F7A8
  if (crb(c,0)) { goto L_8033F7C8; } // 8033F7AC
  cmps(c,0,(int32_t)c->r[0],7); // 8033F7B0
  if (crb(c,1)) { goto L_8033F7C8; } // 8033F7B4
  c->r[4]=R32(c->r[7]+0x00000000u); // 8033F7B8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 8033F7BC
  c->r[0]=c->r[4]&~c->r[0]; // 8033F7C0
  W32(c->r[7]+0x00000000u,c->r[0]); // 8033F7C4
L_8033F7C8:;
  cmps(c,0,(int32_t)c->r[8],0); // 8033F7C8
  c->r[0]=R32(c->r[9]+0x00000010u); // 8033F7CC
  if (crb(c,2)) { goto L_8033F7F4; } // 8033F7D0
  cmps(c,0,(int32_t)c->r[0],0); // 8033F7D4
  if (crb(c,0)) { goto L_8033F7F4; } // 8033F7D8
  cmps(c,0,(int32_t)c->r[0],7); // 8033F7DC
  if (crb(c,1)) { goto L_8033F7F4; } // 8033F7E0
  c->r[4]=R32(c->r[8]+0x00000000u); // 8033F7E4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 8033F7E8
  c->r[0]=c->r[4]&~c->r[0]; // 8033F7EC
  W32(c->r[8]+0x00000000u,c->r[0]); // 8033F7F0
L_8033F7F4:;
  c->r[10]=c->r[10]+0x00000034u; // 8033F7F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8033F770; } // 8033F7F8
  return; // 8033F7FC
}

// fn_8033F800
void f_8033F800(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8033F800
  c->r[0]=c->lr; // 8033F804
  W32(c->r[1]+0x00000074u,c->r[0]); // 8033F808
  c->r[11]=c->r[1]+0x00000070u; // 8033F80C
  c->lr=0x8033F814u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8033F810
  c->r[5]=R32(c->r[3]+0x00000000u); // 8033F814
  c->r[24]=c->r[3]|c->r[3]; // 8033F818
  c->r[25]=c->r[4]|c->r[4]; // 8033F81C
  c->r[26]=0u+0x00000000u; // 8033F820
  c->r[29]=R32(c->r[5]+0x0000002Cu); // 8033F824
  c->r[27]=0u+0x00000000u; // 8033F828
  cmps(c,0,(int32_t)c->r[29],0); // 8033F82C
  if (crb(c,2)) { goto L_8033FA60; } // 8033F830
  c->r[28]=0u+0x00000000u; // 8033F834
  c->r[22]=0u+0x00000001u; // 8033F838
  goto L_8033FA58; // 8033F83C
L_8033F840:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 8033F840
  c->r[0]=R32(c->r[3]+0x00000030u); // 8033F844
  cmps(c,0,(int32_t)c->r[0],0); // 8033F848
  if (crb(c,2)) { goto L_8033F858; } // 8033F84C
  c->r[0]=c->r[3]+c->r[0]; // 8033F850
  goto L_8033F85C; // 8033F854
L_8033F858:;
  c->r[0]=0u+0x00000000u; // 8033F858
L_8033F85C:;
  c->r[30]=c->r[0]+c->r[28]; // 8033F85C
  c->r[31]=R32(c->r[25]+0x00000000u); // 8033F860
  c->r[0]=R32(c->r[30]+0x00000008u); // 8033F864
  c->r[23]=c->r[3]+0x00000040u; // 8033F868
  cmps(c,0,(int32_t)c->r[0],0); // 8033F86C
  if (!crb(c,2)) { goto L_8033FA40; } // 8033F870
  c->r[0]=R32(c->r[31]+0x00000014u); // 8033F874
  cmps(c,0,(int32_t)c->r[0],0); // 8033F878
  if (crb(c,2)) { goto L_8033F88C; } // 8033F87C
  c->r[3]=c->r[31]+c->r[0]; // 8033F880
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 8033F884
  goto L_8033F890; // 8033F888
L_8033F88C:;
  c->r[0]=0u+0x00000000u; // 8033F88C
L_8033F890:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8033F890
  cmps(c,0,(int32_t)c->r[3],0); // 8033F894
  if (crb(c,2)) { goto L_8033F8A8; } // 8033F898
  c->r[3]=c->r[30]+c->r[3]; // 8033F89C
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 8033F8A0
  goto L_8033F8AC; // 8033F8A4
L_8033F8A8:;
  c->r[3]=0u+0x00000000u; // 8033F8A8
L_8033F8AC:;
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8033F8AC
  c->r[3]=c->r[1]+0x00000018u; // 8033F8B0
  c->r[4]=c->r[1]+0x0000001Cu; // 8033F8B4
  c->r[21]=0u+0x00000000u; // 8033F8B8
  W32(c->r[1]+0x00000018u,c->r[0]); // 8033F8BC
  c->lr=0x8033F8C4u; f_8033AD78(c); // 8033F8C0
  cmps(c,0,(int32_t)c->r[3],0); // 8033F8C4
  if (crb(c,2)) { goto L_8033F8F8; } // 8033F8C8
  c->r[0]=R32(c->r[30]+0x00000004u); // 8033F8CC
  c->r[3]=0u+0x00000000u; // 8033F8D0
  cmps(c,0,(int32_t)c->r[0],0); // 8033F8D4
  if (crb(c,2)) { goto L_8033F8E8; } // 8033F8D8
  c->r[0]=R32(c->r[31]+0x00000018u); // 8033F8DC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8033F8E0
  if (crb(c,2)) { goto L_8033F8EC; } // 8033F8E4
L_8033F8E8:;
  c->r[3]=0u+0x00000001u; // 8033F8E8
L_8033F8EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8033F8EC
  if (crb(c,2)) { goto L_8033F8F8; } // 8033F8F0
  c->r[21]=0u+0x00000001u; // 8033F8F4
L_8033F8F8:;
  cmps(c,0,(int32_t)c->r[21],0); // 8033F8F8
  if (crb(c,2)) { goto L_8033FA38; } // 8033F8FC
  W32(c->r[1]+0x00000020u,c->r[31]); // 8033F900
  cmps(c,0,(int32_t)c->r[23],0); // 8033F904
  W32(c->r[30]+0x00000008u,c->r[31]); // 8033F908
  c->r[0]=R32(c->r[30]+0x00000010u); // 8033F90C
  if (crb(c,2)) { goto L_8033F934; } // 8033F910
  cmps(c,0,(int32_t)c->r[0],0); // 8033F914
  if (crb(c,0)) { goto L_8033F934; } // 8033F918
  cmps(c,0,(int32_t)c->r[0],7); // 8033F91C
  if (crb(c,1)) { goto L_8033F934; } // 8033F920
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8033F924
  c->r[3]=c->r[23]+c->r[0]; // 8033F928
  c->r[31]=c->r[3]+0x00000004u; // 8033F92C
  goto L_8033F938; // 8033F930
L_8033F934:;
  c->r[31]=0u+0x00000000u; // 8033F934
L_8033F938:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8033F938
  cmps(c,0,(int32_t)c->r[0],0); // 8033F93C
  if (crb(c,2)) { goto L_8033F998; } // 8033F940
  c->r[3]=c->r[1]+0x00000020u; // 8033F944
  c->r[4]=c->r[1]+0x00000034u; // 8033F948
  c->r[5]=c->r[1]+0x00000014u; // 8033F94C
  c->r[6]=c->r[1]+0x00000012u; // 8033F950
  c->r[7]=c->r[1]+0x00000028u; // 8033F954
  c->r[8]=c->r[1]+0x00000030u; // 8033F958
  c->r[9]=c->r[1]+0x0000002Cu; // 8033F95C
  c->r[10]=c->r[1]+0x00000010u; // 8033F960
  c->lr=0x8033F968u; f_8034035C(c); // 8033F964
  c->r[0]=R32(c->r[30]+0x00000014u); // 8033F968
  c->r[3]=c->r[31]|c->r[31]; // 8033F96C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8033F970
  c->r[4]=R32(c->r[1]+0x00000034u); // 8033F974
  c->r[5]=R16(c->r[1]+0x00000014u); // 8033F978
  c->r[6]=R16(c->r[1]+0x00000012u); // 8033F97C
  c->r[7]=R32(c->r[1]+0x00000028u); // 8033F980
  c->r[8]=R32(c->r[30]+0x00000018u); // 8033F984
  c->r[9]=R32(c->r[30]+0x0000001Cu); // 8033F988
  c->r[10]=R8(c->r[1]+0x00000010u); // 8033F98C
  c->lr=0x8033F994u; f_802B6C90(c); // 8033F990
  goto L_8033F9E0; // 8033F994
L_8033F998:;
  c->r[3]=c->r[1]+0x00000020u; // 8033F998
  c->r[4]=c->r[1]+0x00000034u; // 8033F99C
  c->r[5]=c->r[1]+0x00000014u; // 8033F9A0
  c->r[6]=c->r[1]+0x00000012u; // 8033F9A4
  c->r[7]=c->r[1]+0x00000024u; // 8033F9A8
  c->r[8]=c->r[1]+0x00000030u; // 8033F9AC
  c->r[9]=c->r[1]+0x0000002Cu; // 8033F9B0
  c->r[10]=c->r[1]+0x00000010u; // 8033F9B4
  c->lr=0x8033F9BCu; f_803402A0(c); // 8033F9B8
  c->r[4]=R32(c->r[1]+0x00000034u); // 8033F9BC
  c->r[3]=c->r[31]|c->r[31]; // 8033F9C0
  c->r[5]=R16(c->r[1]+0x00000014u); // 8033F9C4
  c->r[6]=R16(c->r[1]+0x00000012u); // 8033F9C8
  c->r[7]=R32(c->r[1]+0x00000024u); // 8033F9CC
  c->r[8]=R32(c->r[30]+0x00000018u); // 8033F9D0
  c->r[9]=R32(c->r[30]+0x0000001Cu); // 8033F9D4
  c->r[10]=R8(c->r[1]+0x00000010u); // 8033F9D8
  c->lr=0x8033F9E0u; f_802B6A84(c); // 8033F9DC
L_8033F9E0:;
  c->r[4]=R32(c->r[30]+0x00000020u); // 8033F9E0
  c->r[3]=c->r[31]|c->r[31]; // 8033F9E4
  c->r[5]=R32(c->r[30]+0x00000024u); // 8033F9E8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8033F9EC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8033F9F0
  {uint32_t ea=c->r[30]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8033F9F4
  c->r[6]=R8(c->r[30]+0x00000030u); // 8033F9F8
  c->r[7]=R8(c->r[30]+0x00000031u); // 8033F9FC
  c->r[8]=R32(c->r[30]+0x0000002Cu); // 8033FA00
  c->lr=0x8033FA08u; f_802B6CD8(c); // 8033FA04
  cmps(c,0,(int32_t)c->r[23],0); // 8033FA08
  c->r[0]=R32(c->r[30]+0x00000010u); // 8033FA0C
  if (crb(c,2)) { goto L_8033FA40; } // 8033FA10
  cmps(c,0,(int32_t)c->r[0],0); // 8033FA14
  if (crb(c,0)) { goto L_8033FA40; } // 8033FA18
  cmps(c,0,(int32_t)c->r[0],7); // 8033FA1C
  if (crb(c,1)) { goto L_8033FA40; } // 8033FA20
  c->r[3]=R32(c->r[23]+0x00000000u); // 8033FA24
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[22]<<((c->r[0])&31)); // 8033FA28
  c->r[0]=c->r[3]|c->r[0]; // 8033FA2C
  W32(c->r[23]+0x00000000u,c->r[0]); // 8033FA30
  goto L_8033FA40; // 8033FA34
L_8033FA38:;
  c->r[0]=0u+0x00000000u; // 8033FA38
  goto L_8033FA44; // 8033FA3C
L_8033FA40:;
  c->r[0]=0u+0x00000001u; // 8033FA40
L_8033FA44:;
  cmps(c,0,(int32_t)c->r[0],0); // 8033FA44
  if (crb(c,2)) { goto L_8033FA50; } // 8033FA48
  c->r[26]=c->r[26]+0x00000001u; // 8033FA4C
L_8033FA50:;
  c->r[28]=c->r[28]+0x00000034u; // 8033FA50
  c->r[27]=c->r[27]+0x00000001u; // 8033FA54
L_8033FA58:;
  cmpu(c,0,c->r[27],c->r[29]); // 8033FA58
  if (crb(c,0)) { IRQCHK(c); goto L_8033F840; } // 8033FA5C
L_8033FA60:;
  c->r[0]=c->r[29]-c->r[26]; // 8033FA60
  c->r[11]=c->r[1]+0x00000070u; // 8033FA64
  c->r[0]=cntlz(c->r[0]); // 8033FA68
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8033FA6C
  c->lr=0x8033FA74u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8033FA70
  c->r[0]=R32(c->r[1]+0x00000074u); // 8033FA74
  c->lr=c->r[0]; // 8033FA78
  c->r[1]=c->r[1]+0x00000070u; // 8033FA7C
  return; // 8033FA80
}

// fn_8033FA84
void f_8033FA84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8033FA84
  c->r[0]=c->lr; // 8033FA88
  W32(c->r[1]+0x00000034u,c->r[0]); // 8033FA8C
  c->r[11]=c->r[1]+0x00000030u; // 8033FA90
  c->lr=0x8033FA98u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8033FA94
  c->r[6]=R32(c->r[3]+0x00000000u); // 8033FA98
  c->r[26]=c->r[3]|c->r[3]; // 8033FA9C
  c->r[27]=c->r[4]|c->r[4]; // 8033FAA0
  c->r[28]=c->r[5]|c->r[5]; // 8033FAA4
  c->r[29]=R32(c->r[6]+0x0000002Cu); // 8033FAA8
  c->r[30]=0u+0x00000000u; // 8033FAAC
  cmps(c,0,(int32_t)c->r[29],0); // 8033FAB0
  if (crb(c,2)) { goto L_8033FB70; } // 8033FAB4
  c->r[31]=0u+0x00000000u; // 8033FAB8
  c->r[25]=0u+0x00000001u; // 8033FABC
  c->r[24]=0u+0x00000000u; // 8033FAC0
  goto L_8033FB68; // 8033FAC4
L_8033FAC8:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 8033FAC8
  c->r[0]=R32(c->r[3]+0x00000030u); // 8033FACC
  cmps(c,0,(int32_t)c->r[0],0); // 8033FAD0
  if (crb(c,2)) { goto L_8033FAE0; } // 8033FAD4
  c->r[0]=c->r[3]+c->r[0]; // 8033FAD8
  goto L_8033FAE4; // 8033FADC
L_8033FAE0:;
  c->r[0]=0u+0x00000000u; // 8033FAE0
L_8033FAE4:;
  c->r[22]=c->r[0]+c->r[31]; // 8033FAE4
  c->r[0]=R32(c->r[31]+c->r[0]); // 8033FAE8
  c->r[23]=c->r[3]+0x00000040u; // 8033FAEC
  cmps(c,0,(int32_t)c->r[0],0); // 8033FAF0
  if (crb(c,2)) { goto L_8033FB04; } // 8033FAF4
  c->r[3]=c->r[22]+c->r[0]; // 8033FAF8
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 8033FAFC
  goto L_8033FB08; // 8033FB00
L_8033FB04:;
  c->r[3]=0u+0x00000000u; // 8033FB04
L_8033FB08:;
  cmps(c,0,(int32_t)c->r[3],0); // 8033FB08
  if (crb(c,2)) { goto L_8033FB60; } // 8033FB0C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8033FB10
  cmpu(c,0,c->r[28],c->r[0]); // 8033FB14
  if (!crb(c,2)) { goto L_8033FB60; } // 8033FB18
  c->r[4]=c->r[27]|c->r[27]; // 8033FB1C
  c->r[3]=c->r[3]+0x00000004u; // 8033FB20
  c->lr=0x8033FB28u; f_802C0BEC(c); // 8033FB24
  cmps(c,0,(int32_t)c->r[3],0); // 8033FB28
  if (!crb(c,2)) { goto L_8033FB60; } // 8033FB2C
  W32(c->r[22]+0x00000008u,c->r[24]); // 8033FB30
  cmps(c,0,(int32_t)c->r[23],0); // 8033FB34
  c->r[0]=R32(c->r[22]+0x00000010u); // 8033FB38
  if (crb(c,2)) { goto L_8033FB60; } // 8033FB3C
  cmps(c,0,(int32_t)c->r[0],0); // 8033FB40
  if (crb(c,0)) { goto L_8033FB60; } // 8033FB44
  cmps(c,0,(int32_t)c->r[0],7); // 8033FB48
  if (crb(c,1)) { goto L_8033FB60; } // 8033FB4C
  c->r[3]=R32(c->r[23]+0x00000000u); // 8033FB50
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[25]<<((c->r[0])&31)); // 8033FB54
  c->r[0]=c->r[3]&~c->r[0]; // 8033FB58
  W32(c->r[23]+0x00000000u,c->r[0]); // 8033FB5C
L_8033FB60:;
  c->r[31]=c->r[31]+0x00000034u; // 8033FB60
  c->r[30]=c->r[30]+0x00000001u; // 8033FB64
L_8033FB68:;
  cmpu(c,0,c->r[30],c->r[29]); // 8033FB68
  if (crb(c,0)) { IRQCHK(c); goto L_8033FAC8; } // 8033FB6C
L_8033FB70:;
  c->r[11]=c->r[1]+0x00000030u; // 8033FB70
  c->lr=0x8033FB78u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8033FB74
  c->r[0]=R32(c->r[1]+0x00000034u); // 8033FB78
  c->lr=c->r[0]; // 8033FB7C
  c->r[1]=c->r[1]+0x00000030u; // 8033FB80
  return; // 8033FB84
}

// Init__Q34nw4r3g3d6ResMatFv
void f_8033FB88(Ctx* __restrict c) {
  trace_call(0x8033FB88u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 8033FB88
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8033FB8C
  cmps(c,0,(int32_t)c->r[0],0); // 8033FB90
  if (crb(c,2)) { goto L_8033FBA0; } // 8033FB94
  c->r[3]=c->r[3]+c->r[0]; // 8033FB98
  goto L_8033FBA4; // 8033FB9C
L_8033FBA0:;
  c->r[3]=0u+0x00000000u; // 8033FBA0
L_8033FBA4:;
  c->r[4]=0u+0x00000180u; // 8033FBA4
  f_8028BC74(c); return; // 8033FBA8
}

// GetResTev__Q34nw4r3g3d6ResMatFv
void f_8033FBAC(Ctx* __restrict c) {
  trace_call(0x8033FBACu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 8033FBAC
  c->r[0]=R32(c->r[3]+0x00000028u); // 8033FBB0
  cmps(c,0,(int32_t)c->r[0],0); // 8033FBB4
  if (crb(c,2)) { goto L_8033FBC4; } // 8033FBB8
  c->r[3]=c->r[3]+c->r[0]; // 8033FBBC
  return; // 8033FBC0
L_8033FBC4:;
  c->r[3]=0u+0x00000000u; // 8033FBC4
  return; // 8033FBC8
}

// GetResTev__Q34nw4r3g3d6ResMatCFv
void f_8033FBCC(Ctx* __restrict c) {
  trace_call(0x8033FBCCu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 8033FBCC
  c->r[0]=R32(c->r[3]+0x00000034u); // 8033FBD0
  cmps(c,0,(int32_t)c->r[0],0); // 8033FBD4
  if (crb(c,2)) { goto L_8033FBE4; } // 8033FBD8
  c->r[3]=c->r[3]+c->r[0]; // 8033FBDC
  return; // 8033FBE0
L_8033FBE4:;
  c->r[3]=0u+0x00000000u; // 8033FBE4
  return; // 8033FBE8
}

// Bind__Q34nw4r3g3d14ResTexPlttInfoFQ34nw4r3g3d7ResFileQ34nw4r3g3d9ResTexObjQ34nw4r3g3d10ResTlutObj
void f_8033FBEC(Ctx* __restrict c) {
  trace_call(0x8033FBECu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8033FBEC
  c->r[0]=c->lr; // 8033FBF0
  W32(c->r[1]+0x00000064u,c->r[0]); // 8033FBF4
  c->r[11]=c->r[1]+0x00000060u; // 8033FBF8
  c->lr=0x8033FC00u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8033FBFC
  c->r[7]=R32(c->r[3]+0x00000000u); // 8033FC00
  c->r[28]=c->r[3]|c->r[3]; // 8033FC04
  c->r[29]=c->r[4]|c->r[4]; // 8033FC08
  c->r[25]=c->r[5]|c->r[5]; // 8033FC0C
  c->r[0]=R32(c->r[7]+0x00000000u); // 8033FC10
  c->r[30]=c->r[6]|c->r[6]; // 8033FC14
  c->r[31]=0u+0x00000001u; // 8033FC18
  cmps(c,0,(int32_t)c->r[0],0); // 8033FC1C
  if (crb(c,2)) { goto L_8033FC30; } // 8033FC20
  c->r[3]=c->r[7]+c->r[0]; // 8033FC24
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 8033FC28
  goto L_8033FC34; // 8033FC2C
L_8033FC30:;
  c->r[0]=0u+0x00000000u; // 8033FC30
L_8033FC34:;
  c->r[3]=R32(c->r[7]+0x00000008u); // 8033FC34
  cmps(c,0,(int32_t)c->r[3],0); // 8033FC38
  if (!crb(c,2)) { goto L_8033FDC0; } // 8033FC3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8033FC40
  c->r[3]=c->r[29]|c->r[29]; // 8033FC44
  c->r[4]=c->r[1]+0x00000034u; // 8033FC48
  c->lr=0x8033FC50u; f_8033B294(c); // 8033FC4C
  cmps(c,0,(int32_t)c->r[3],0); // 8033FC50
  if (crb(c,2)) { goto L_8033FDBC; } // 8033FC54
  c->r[4]=R32(c->r[28]+0x00000000u); // 8033FC58
  c->r[0]=R32(c->r[4]+0x00000004u); // 8033FC5C
  cmps(c,0,(int32_t)c->r[0],0); // 8033FC60
  if (crb(c,2)) { goto L_8033FC74; } // 8033FC64
  c->r[0]=R32(c->r[3]+0x00000018u); // 8033FC68
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8033FC6C
  if (crb(c,2)) { goto L_8033FDBC; } // 8033FC70
L_8033FC74:;
  W32(c->r[1]+0x00000030u,c->r[3]); // 8033FC74
  c->r[27]=R32(c->r[25]+0x00000000u); // 8033FC78
  c->r[25]=R32(c->r[28]+0x00000000u); // 8033FC7C
  cmps(c,0,(int32_t)c->r[27],0); // 8033FC80
  W32(c->r[25]+0x00000008u,c->r[3]); // 8033FC84
  c->r[0]=R32(c->r[25]+0x00000010u); // 8033FC88
  if (crb(c,2)) { goto L_8033FCB0; } // 8033FC8C
  cmps(c,0,(int32_t)c->r[0],0); // 8033FC90
  if (crb(c,0)) { goto L_8033FCB0; } // 8033FC94
  cmps(c,0,(int32_t)c->r[0],7); // 8033FC98
  if (crb(c,1)) { goto L_8033FCB0; } // 8033FC9C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8033FCA0
  c->r[3]=c->r[27]+c->r[0]; // 8033FCA4
  c->r[26]=c->r[3]+0x00000004u; // 8033FCA8
  goto L_8033FCB4; // 8033FCAC
L_8033FCB0:;
  c->r[26]=0u+0x00000000u; // 8033FCB0
L_8033FCB4:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8033FCB4
  c->r[0]=R32(c->r[3]+0x00000004u); // 8033FCB8
  cmps(c,0,(int32_t)c->r[0],0); // 8033FCBC
  if (crb(c,2)) { goto L_8033FD18; } // 8033FCC0
  c->r[3]=c->r[1]+0x00000030u; // 8033FCC4
  c->r[4]=c->r[1]+0x00000018u; // 8033FCC8
  c->r[5]=c->r[1]+0x00000012u; // 8033FCCC
  c->r[6]=c->r[1]+0x00000014u; // 8033FCD0
  c->r[7]=c->r[1]+0x00000024u; // 8033FCD4
  c->r[8]=c->r[1]+0x0000001Cu; // 8033FCD8
  c->r[9]=c->r[1]+0x00000020u; // 8033FCDC
  c->r[10]=c->r[1]+0x00000010u; // 8033FCE0
  c->lr=0x8033FCE8u; f_8034035C(c); // 8033FCE4
  c->r[0]=R32(c->r[25]+0x00000014u); // 8033FCE8
  c->r[3]=c->r[26]|c->r[26]; // 8033FCEC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8033FCF0
  c->r[4]=R32(c->r[1]+0x00000018u); // 8033FCF4
  c->r[5]=R16(c->r[1]+0x00000012u); // 8033FCF8
  c->r[6]=R16(c->r[1]+0x00000014u); // 8033FCFC
  c->r[7]=R32(c->r[1]+0x00000024u); // 8033FD00
  c->r[8]=R32(c->r[25]+0x00000018u); // 8033FD04
  c->r[9]=R32(c->r[25]+0x0000001Cu); // 8033FD08
  c->r[10]=R8(c->r[1]+0x00000010u); // 8033FD0C
  c->lr=0x8033FD14u; f_802B6C90(c); // 8033FD10
  goto L_8033FD60; // 8033FD14
L_8033FD18:;
  c->r[3]=c->r[1]+0x00000030u; // 8033FD18
  c->r[4]=c->r[1]+0x00000018u; // 8033FD1C
  c->r[5]=c->r[1]+0x00000012u; // 8033FD20
  c->r[6]=c->r[1]+0x00000014u; // 8033FD24
  c->r[7]=c->r[1]+0x00000028u; // 8033FD28
  c->r[8]=c->r[1]+0x0000001Cu; // 8033FD2C
  c->r[9]=c->r[1]+0x00000020u; // 8033FD30
  c->r[10]=c->r[1]+0x00000010u; // 8033FD34
  c->lr=0x8033FD3Cu; f_803402A0(c); // 8033FD38
  c->r[4]=R32(c->r[1]+0x00000018u); // 8033FD3C
  c->r[3]=c->r[26]|c->r[26]; // 8033FD40
  c->r[5]=R16(c->r[1]+0x00000012u); // 8033FD44
  c->r[6]=R16(c->r[1]+0x00000014u); // 8033FD48
  c->r[7]=R32(c->r[1]+0x00000028u); // 8033FD4C
  c->r[8]=R32(c->r[25]+0x00000018u); // 8033FD50
  c->r[9]=R32(c->r[25]+0x0000001Cu); // 8033FD54
  c->r[10]=R8(c->r[1]+0x00000010u); // 8033FD58
  c->lr=0x8033FD60u; f_802B6A84(c); // 8033FD5C
L_8033FD60:;
  c->r[4]=R32(c->r[25]+0x00000020u); // 8033FD60
  c->r[3]=c->r[26]|c->r[26]; // 8033FD64
  c->r[5]=R32(c->r[25]+0x00000024u); // 8033FD68
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8033FD6C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8033FD70
  {uint32_t ea=c->r[25]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8033FD74
  c->r[6]=R8(c->r[25]+0x00000030u); // 8033FD78
  c->r[7]=R8(c->r[25]+0x00000031u); // 8033FD7C
  c->r[8]=R32(c->r[25]+0x0000002Cu); // 8033FD80
  c->lr=0x8033FD88u; f_802B6CD8(c); // 8033FD84
  cmps(c,0,(int32_t)c->r[27],0); // 8033FD88
  c->r[4]=R32(c->r[25]+0x00000010u); // 8033FD8C
  if (crb(c,2)) { goto L_8033FDC0; } // 8033FD90
  cmps(c,0,(int32_t)c->r[4],0); // 8033FD94
  if (crb(c,0)) { goto L_8033FDC0; } // 8033FD98
  cmps(c,0,(int32_t)c->r[4],7); // 8033FD9C
  if (crb(c,1)) { goto L_8033FDC0; } // 8033FDA0
  c->r[0]=0u+0x00000001u; // 8033FDA4
  c->r[3]=R32(c->r[27]+0x00000000u); // 8033FDA8
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8033FDAC
  c->r[0]=c->r[3]|c->r[0]; // 8033FDB0
  W32(c->r[27]+0x00000000u,c->r[0]); // 8033FDB4
  goto L_8033FDC0; // 8033FDB8
L_8033FDBC:;
  c->r[31]=0u+0x00000000u; // 8033FDBC
L_8033FDC0:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8033FDC0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8033FDC4
  cmps(c,0,(int32_t)c->r[0],0); // 8033FDC8
  if (!crb(c,2)) { goto L_8033FEAC; } // 8033FDCC
  c->r[0]=R32(c->r[3]+0x00000004u); // 8033FDD0
  cmps(c,0,(int32_t)c->r[0],0); // 8033FDD4
  if (crb(c,2)) { goto L_8033FDE8; } // 8033FDD8
  c->r[3]=c->r[3]+c->r[0]; // 8033FDDC
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 8033FDE0
  goto L_8033FDEC; // 8033FDE4
L_8033FDE8:;
  c->r[0]=0u+0x00000000u; // 8033FDE8
L_8033FDEC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8033FDEC
  if (crb(c,2)) { goto L_8033FEAC; } // 8033FDF0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8033FDF4
  c->r[3]=c->r[29]|c->r[29]; // 8033FDF8
  c->r[4]=c->r[1]+0x0000002Cu; // 8033FDFC
  c->lr=0x8033FE04u; f_8033B220(c); // 8033FE00
  cmps(c,0,(int32_t)c->r[3],0); // 8033FE04
  c->r[7]=c->r[3]|c->r[3]; // 8033FE08
  if (crb(c,2)) { goto L_8033FEA8; } // 8033FE0C
  c->r[25]=R32(c->r[28]+0x00000000u); // 8033FE10
  c->r[28]=R32(c->r[30]+0x00000000u); // 8033FE14
  W32(c->r[25]+0x0000000Cu,c->r[3]); // 8033FE18
  cmps(c,0,(int32_t)c->r[28],0); // 8033FE1C
  c->r[0]=R32(c->r[25]+0x00000010u); // 8033FE20
  if (crb(c,2)) { goto L_8033FE48; } // 8033FE24
  cmps(c,0,(int32_t)c->r[0],0); // 8033FE28
  if (crb(c,0)) { goto L_8033FE48; } // 8033FE2C
  cmps(c,0,(int32_t)c->r[0],7); // 8033FE30
  if (crb(c,1)) { goto L_8033FE48; } // 8033FE34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8033FE38
  c->r[4]=c->r[28]+c->r[0]; // 8033FE3C
  c->r[0]=c->r[4]+0x00000004u; // 8033FE40
  goto L_8033FE4C; // 8033FE44
L_8033FE48:;
  c->r[0]=0u+0x00000000u; // 8033FE48
L_8033FE4C:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 8033FE4C
  c->r[6]=R16(c->r[3]+0x0000001Cu); // 8033FE50
  cmps(c,0,(int32_t)c->r[4],0); // 8033FE54
  c->r[5]=R32(c->r[3]+0x00000018u); // 8033FE58
  c->r[3]=c->r[0]|c->r[0]; // 8033FE5C
  if (crb(c,2)) { goto L_8033FE6C; } // 8033FE60
  c->r[4]=c->r[7]+c->r[4]; // 8033FE64
  goto L_8033FE70; // 8033FE68
L_8033FE6C:;
  c->r[4]=0u+0x00000000u; // 8033FE6C
L_8033FE70:;
  c->lr=0x8033FE74u; f_802B7164(c); // 8033FE70
  cmps(c,0,(int32_t)c->r[28],0); // 8033FE74
  c->r[4]=R32(c->r[25]+0x00000010u); // 8033FE78
  if (crb(c,2)) { goto L_8033FEAC; } // 8033FE7C
  cmps(c,0,(int32_t)c->r[4],0); // 8033FE80
  if (crb(c,0)) { goto L_8033FEAC; } // 8033FE84
  cmps(c,0,(int32_t)c->r[4],7); // 8033FE88
  if (crb(c,1)) { goto L_8033FEAC; } // 8033FE8C
  c->r[0]=0u+0x00000001u; // 8033FE90
  c->r[3]=R32(c->r[28]+0x00000000u); // 8033FE94
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8033FE98
  c->r[0]=c->r[3]|c->r[0]; // 8033FE9C
  W32(c->r[28]+0x00000000u,c->r[0]); // 8033FEA0
  goto L_8033FEAC; // 8033FEA4
L_8033FEA8:;
  c->r[31]=0u+0x00000000u; // 8033FEA8
L_8033FEAC:;
  c->r[11]=c->r[1]+0x00000060u; // 8033FEAC
  c->r[3]=c->r[31]|c->r[31]; // 8033FEB0
  c->lr=0x8033FEB8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8033FEB4
  c->r[0]=R32(c->r[1]+0x00000064u); // 8033FEB8
  c->lr=c->r[0]; // 8033FEBC
  c->r[1]=c->r[1]+0x00000060u; // 8033FEC0
  return; // 8033FEC4
}

// SetArray__Q34nw4r3g3d9ResVtxPosFv
void f_8033FEC8(Ctx* __restrict c) {
  trace_call(0x8033FEC8u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 8033FEC8
  cmps(c,0,(int32_t)c->r[5],0); // 8033FECC
  if (crb(c,2)) return; // 8033FED0
  c->r[0]=R32(c->r[5]+0x00000008u); // 8033FED4
  c->r[3]=0u+0x00000009u; // 8033FED8
  cmps(c,0,(int32_t)c->r[0],0); // 8033FEDC
  if (crb(c,2)) { goto L_8033FEEC; } // 8033FEE0
  c->r[4]=c->r[5]+c->r[0]; // 8033FEE4
  goto L_8033FEF0; // 8033FEE8
L_8033FEEC:;
  c->r[4]=0u+0x00000000u; // 8033FEEC
L_8033FEF0:;
  c->r[5]=R8(c->r[5]+0x0000001Du); // 8033FEF0
  f_802B46EC(c); return; // 8033FEF4
  return; // 8033FEF8
}

// GetArray__Q34nw4r3g3d9ResVtxPosCFPPCvPUc
void f_8033FEFC(Ctx* __restrict c) {
  trace_call(0x8033FEFCu);
  cmps(c,0,(int32_t)c->r[4],0); // 8033FEFC
  if (crb(c,2)) { goto L_8033FF24; } // 8033FF00
  c->r[6]=R32(c->r[3]+0x00000000u); // 8033FF04
  c->r[0]=R32(c->r[6]+0x00000008u); // 8033FF08
  cmps(c,0,(int32_t)c->r[0],0); // 8033FF0C
  if (crb(c,2)) { goto L_8033FF1C; } // 8033FF10
  c->r[0]=c->r[6]+c->r[0]; // 8033FF14
  goto L_8033FF20; // 8033FF18
L_8033FF1C:;
  c->r[0]=0u+0x00000000u; // 8033FF1C
L_8033FF20:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 8033FF20
L_8033FF24:;
  cmps(c,0,(int32_t)c->r[5],0); // 8033FF24
  if (crb(c,2)) return; // 8033FF28
  c->r[3]=R32(c->r[3]+0x00000000u); // 8033FF2C
  c->r[0]=R8(c->r[3]+0x0000001Du); // 8033FF30
  W8(c->r[5]+0x00000000u,c->r[0]); // 8033FF34
  return; // 8033FF38
}

// CopyTo__Q34nw4r3g3d9ResVtxPosCFPv
void f_8033FF3C(Ctx* __restrict c) {
  trace_call(0x8033FF3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8033FF3C
  c->r[0]=c->lr; // 8033FF40
  c->r[5]=R32(c->r[3]+0x00000000u); // 8033FF44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8033FF48
  cmps(c,0,(int32_t)c->r[5],0); // 8033FF4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8033FF50
  W32(c->r[1]+0x00000008u,c->r[30]); // 8033FF54
  c->r[30]=c->r[4]|c->r[4]; // 8033FF58
  if (crb(c,2)) { goto L_8033FF80; } // 8033FF5C
  c->r[31]=R32(c->r[5]+0x00000000u); // 8033FF60
  c->r[4]=c->r[5]|c->r[5]; // 8033FF64
  c->r[3]=c->r[30]|c->r[30]; // 8033FF68
  c->r[5]=c->r[31]|c->r[31]; // 8033FF6C
  c->lr=0x8033FF74u; f_8034AC0C(c); // 8033FF70
  c->r[3]=c->r[30]|c->r[30]; // 8033FF74
  c->r[4]=c->r[31]|c->r[31]; // 8033FF78
  c->lr=0x8033FF80u; f_8028BC18(c); // 8033FF7C
L_8033FF80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8033FF80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8033FF84
  c->r[30]=R32(c->r[1]+0x00000008u); // 8033FF88
  c->lr=c->r[0]; // 8033FF8C
  c->r[1]=c->r[1]+0x00000010u; // 8033FF90
  return; // 8033FF94
}

// SetArray__Q34nw4r3g3d9ResVtxNrmFv
void f_8033FF98(Ctx* __restrict c) {
  trace_call(0x8033FF98u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 8033FF98
  cmps(c,0,(int32_t)c->r[5],0); // 8033FF9C
  if (crb(c,2)) return; // 8033FFA0
  c->r[0]=R32(c->r[5]+0x00000008u); // 8033FFA4
  c->r[3]=0u+0x0000000Au; // 8033FFA8
  cmps(c,0,(int32_t)c->r[0],0); // 8033FFAC
  if (crb(c,2)) { goto L_8033FFBC; } // 8033FFB0
  c->r[4]=c->r[5]+c->r[0]; // 8033FFB4
  goto L_8033FFC0; // 8033FFB8
L_8033FFBC:;
  c->r[4]=0u+0x00000000u; // 8033FFBC
L_8033FFC0:;
  c->r[5]=R8(c->r[5]+0x0000001Du); // 8033FFC0
  f_802B46EC(c); return; // 8033FFC4
  return; // 8033FFC8
}

// GetArray__Q34nw4r3g3d9ResVtxNrmCFPPCvPUc
void f_8033FFCC(Ctx* __restrict c) {
  trace_call(0x8033FFCCu);
  cmps(c,0,(int32_t)c->r[4],0); // 8033FFCC
  if (crb(c,2)) { goto L_8033FFF4; } // 8033FFD0
  c->r[6]=R32(c->r[3]+0x00000000u); // 8033FFD4
  c->r[0]=R32(c->r[6]+0x00000008u); // 8033FFD8
  cmps(c,0,(int32_t)c->r[0],0); // 8033FFDC
  if (crb(c,2)) { goto L_8033FFEC; } // 8033FFE0
  c->r[0]=c->r[6]+c->r[0]; // 8033FFE4
  goto L_8033FFF0; // 8033FFE8
L_8033FFEC:;
  c->r[0]=0u+0x00000000u; // 8033FFEC
L_8033FFF0:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 8033FFF0
L_8033FFF4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8033FFF4
  if (crb(c,2)) return; // 8033FFF8
  c->r[3]=R32(c->r[3]+0x00000000u); // 8033FFFC
  c->r[0]=R8(c->r[3]+0x0000001Du); // 80340000
  W8(c->r[5]+0x00000000u,c->r[0]); // 80340004
  return; // 80340008
}

// CopyTo__Q34nw4r3g3d9ResVtxNrmCFPv
void f_8034000C(Ctx* __restrict c) {
  trace_call(0x8034000Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034000C
  c->r[0]=c->lr; // 80340010
  c->r[5]=R32(c->r[3]+0x00000000u); // 80340014
  W32(c->r[1]+0x00000014u,c->r[0]); // 80340018
  cmps(c,0,(int32_t)c->r[5],0); // 8034001C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80340020
  W32(c->r[1]+0x00000008u,c->r[30]); // 80340024
  c->r[30]=c->r[4]|c->r[4]; // 80340028
  if (crb(c,2)) { goto L_80340050; } // 8034002C
  c->r[31]=R32(c->r[5]+0x00000000u); // 80340030
  c->r[4]=c->r[5]|c->r[5]; // 80340034
  c->r[3]=c->r[30]|c->r[30]; // 80340038
  c->r[5]=c->r[31]|c->r[31]; // 8034003C
  c->lr=0x80340044u; f_8034AC0C(c); // 80340040
  c->r[3]=c->r[30]|c->r[30]; // 80340044
  c->r[4]=c->r[31]|c->r[31]; // 80340048
  c->lr=0x80340050u; f_8028BC18(c); // 8034004C
L_80340050:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80340050
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80340054
  c->r[30]=R32(c->r[1]+0x00000008u); // 80340058
  c->lr=c->r[0]; // 8034005C
  c->r[1]=c->r[1]+0x00000010u; // 80340060
  return; // 80340064
}

// SetArray__Q34nw4r3g3d9ResVtxClrF7_GXAttr
void f_80340068(Ctx* __restrict c) {
  trace_call(0x80340068u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 80340068
  cmps(c,0,(int32_t)c->r[5],0); // 8034006C
  if (crb(c,2)) return; // 80340070
  c->r[0]=c->r[4]+0xFFFFFFF5u; // 80340074
  cmpu(c,0,c->r[0],0x00000001u); // 80340078
  if (crb(c,1)) return; // 8034007C
  c->r[0]=R32(c->r[5]+0x00000008u); // 80340080
  c->r[3]=c->r[4]|c->r[4]; // 80340084
  cmps(c,0,(int32_t)c->r[0],0); // 80340088
  if (crb(c,2)) { goto L_80340098; } // 8034008C
  c->r[4]=c->r[5]+c->r[0]; // 80340090
  goto L_8034009C; // 80340094
L_80340098:;
  c->r[4]=0u+0x00000000u; // 80340098
L_8034009C:;
  c->r[5]=R8(c->r[5]+0x0000001Cu); // 8034009C
  f_802B46EC(c); return; // 803400A0
  return; // 803400A4
}

// GetArray__Q34nw4r3g3d9ResVtxClrCFPPCvPUc
void f_803400A8(Ctx* __restrict c) {
  trace_call(0x803400A8u);
  cmps(c,0,(int32_t)c->r[4],0); // 803400A8
  if (crb(c,2)) { goto L_803400D0; } // 803400AC
  c->r[6]=R32(c->r[3]+0x00000000u); // 803400B0
  c->r[0]=R32(c->r[6]+0x00000008u); // 803400B4
  cmps(c,0,(int32_t)c->r[0],0); // 803400B8
  if (crb(c,2)) { goto L_803400C8; } // 803400BC
  c->r[0]=c->r[6]+c->r[0]; // 803400C0
  goto L_803400CC; // 803400C4
L_803400C8:;
  c->r[0]=0u+0x00000000u; // 803400C8
L_803400CC:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 803400CC
L_803400D0:;
  cmps(c,0,(int32_t)c->r[5],0); // 803400D0
  if (crb(c,2)) return; // 803400D4
  c->r[3]=R32(c->r[3]+0x00000000u); // 803400D8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 803400DC
  W8(c->r[5]+0x00000000u,c->r[0]); // 803400E0
  return; // 803400E4
}

// CopyTo__Q34nw4r3g3d9ResVtxClrCFPv
void f_803400E8(Ctx* __restrict c) {
  trace_call(0x803400E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803400E8
  c->r[0]=c->lr; // 803400EC
  c->r[5]=R32(c->r[3]+0x00000000u); // 803400F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803400F4
  cmps(c,0,(int32_t)c->r[5],0); // 803400F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803400FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80340100
  c->r[30]=c->r[4]|c->r[4]; // 80340104
  if (crb(c,2)) { goto L_8034012C; } // 80340108
  c->r[31]=R32(c->r[5]+0x00000000u); // 8034010C
  c->r[4]=c->r[5]|c->r[5]; // 80340110
  c->r[3]=c->r[30]|c->r[30]; // 80340114
  c->r[5]=c->r[31]|c->r[31]; // 80340118
  c->lr=0x80340120u; f_8034AC0C(c); // 8034011C
  c->r[3]=c->r[30]|c->r[30]; // 80340120
  c->r[4]=c->r[31]|c->r[31]; // 80340124
  c->lr=0x8034012Cu; f_8028BC18(c); // 80340128
L_8034012C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034012C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80340130
  c->r[30]=R32(c->r[1]+0x00000008u); // 80340134
  c->lr=c->r[0]; // 80340138
  c->r[1]=c->r[1]+0x00000010u; // 8034013C
  return; // 80340140
}

// GetArray__Q34nw4r3g3d14ResVtxTexCoordCFPPCvPUc
void f_80340144(Ctx* __restrict c) {
  trace_call(0x80340144u);
  cmps(c,0,(int32_t)c->r[4],0); // 80340144
  if (crb(c,2)) { goto L_8034016C; } // 80340148
  c->r[6]=R32(c->r[3]+0x00000000u); // 8034014C
  c->r[0]=R32(c->r[6]+0x00000008u); // 80340150
  cmps(c,0,(int32_t)c->r[0],0); // 80340154
  if (crb(c,2)) { goto L_80340164; } // 80340158
  c->r[0]=c->r[6]+c->r[0]; // 8034015C
  goto L_80340168; // 80340160
L_80340164:;
  c->r[0]=0u+0x00000000u; // 80340164
L_80340168:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 80340168
L_8034016C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8034016C
  if (crb(c,2)) return; // 80340170
  c->r[3]=R32(c->r[3]+0x00000000u); // 80340174
  c->r[0]=R8(c->r[3]+0x0000001Du); // 80340178
  W8(c->r[5]+0x00000000u,c->r[0]); // 8034017C
  return; // 80340180
}

// SetArray__Q34nw4r3g3d12ResVtxFurPosFUs
void f_80340184(Ctx* __restrict c) {
  trace_call(0x80340184u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 80340184
  cmps(c,0,(int32_t)c->r[6],0); // 80340188
  if (crb(c,2)) return; // 8034018C
  c->r[7]=R32(c->r[6]+0x00000008u); // 80340190
  c->r[3]=0u+0x00000000u; // 80340194
  c->r[5]=0u+0x00000000u; // 80340198
  cmps(c,0,(int32_t)c->r[7],0); // 8034019C
  if (crb(c,2)) { goto L_803401B4; } // 803401A0
  c->r[0]=R32(c->r[6]+0x00000020u); // 803401A4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803401A8
  if (!crb(c,0)) { goto L_803401B4; } // 803401AC
  c->r[5]=0u+0x00000001u; // 803401B0
L_803401B4:;
  cmps(c,0,(int32_t)c->r[5],0); // 803401B4
  if (crb(c,2)) { goto L_803401C8; } // 803401B8
  cmps(c,0,(int32_t)c->r[4],0); // 803401BC
  if (crb(c,0)) { goto L_803401C8; } // 803401C0
  c->r[3]=0u+0x00000001u; // 803401C4
L_803401C8:;
  cmps(c,0,(int32_t)c->r[3],0); // 803401C8
  c->r[3]=0u+0x00000009u; // 803401CC
  if (crb(c,2)) { goto L_803401E8; } // 803401D0
  c->r[5]=R32(c->r[6]+0x00000024u); // 803401D4
  c->r[0]=c->r[6]+c->r[7]; // 803401D8
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 803401DC
  c->r[4]=c->r[4]+c->r[0]; // 803401E0
  goto L_803401EC; // 803401E4
L_803401E8:;
  c->r[4]=0u+0x00000000u; // 803401E8
L_803401EC:;
  c->r[5]=R8(c->r[6]+0x0000001Du); // 803401EC
  f_802B46EC(c); return; // 803401F0
  return; // 803401F4
}

// DCStore__Q34nw4r3g3d9ResVtxPosFb
void f_803401F8(Ctx* __restrict c) {
  trace_call(0x803401F8u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 803401F8
  cmps(c,0,(int32_t)c->r[4],0); // 803401FC
  c->r[4]=R32(c->r[3]+0x00000000u); // 80340200
  if (crb(c,2)) { goto L_8034020C; } // 80340204
  f_8028BC18(c); return; // 80340208
L_8034020C:;
  f_8028BC74(c); return; // 8034020C
}

// DCStore__Q34nw4r3g3d9ResVtxNrmFb
void f_80340210(Ctx* __restrict c) {
  trace_call(0x80340210u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80340210
  cmps(c,0,(int32_t)c->r[4],0); // 80340214
  c->r[4]=R32(c->r[3]+0x00000000u); // 80340218
  if (crb(c,2)) { goto L_80340224; } // 8034021C
  f_8028BC18(c); return; // 80340220
L_80340224:;
  f_8028BC74(c); return; // 80340224
}

// DCStore__Q34nw4r3g3d9ResVtxPosFb_80340228
void f_80340228(Ctx* __restrict c) {
  trace_call(0x80340228u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80340228
  cmps(c,0,(int32_t)c->r[4],0); // 8034022C
  c->r[4]=R32(c->r[3]+0x00000000u); // 80340230
  if (crb(c,2)) { goto L_8034023C; } // 80340234
  f_8028BC18(c); return; // 80340238
L_8034023C:;
  f_8028BC74(c); return; // 8034023C
}

// DCStore__Q34nw4r3g3d9ResVtxNrmFb_80340240
void f_80340240(Ctx* __restrict c) {
  trace_call(0x80340240u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80340240
  cmps(c,0,(int32_t)c->r[4],0); // 80340244
  c->r[4]=R32(c->r[3]+0x00000000u); // 80340248
  if (crb(c,2)) { goto L_80340254; } // 8034024C
  f_8028BC18(c); return; // 80340250
L_80340254:;
  f_8028BC74(c); return; // 80340254
}

// DCStore__Q34nw4r3g3d9ResVtxClrFb
void f_80340258(Ctx* __restrict c) {
  trace_call(0x80340258u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80340258
  cmps(c,0,(int32_t)c->r[4],0); // 8034025C
  c->r[4]=R32(c->r[3]+0x00000000u); // 80340260
  if (crb(c,2)) { goto L_8034026C; } // 80340264
  f_8028BC18(c); return; // 80340268
L_8034026C:;
  f_8028BC74(c); return; // 8034026C
}

// DCStore__Q34nw4r3g3d14ResVtxTexCoordFb
void f_80340270(Ctx* __restrict c) {
  trace_call(0x80340270u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80340270
  cmps(c,0,(int32_t)c->r[4],0); // 80340274
  c->r[4]=R32(c->r[3]+0x00000000u); // 80340278
  if (crb(c,2)) { goto L_80340284; } // 8034027C
  f_8028BC18(c); return; // 80340280
L_80340284:;
  f_8028BC74(c); return; // 80340284
}

// DCStore__Q34nw4r3g3d7ResPlttFb
void f_80340288(Ctx* __restrict c) {
  trace_call(0x80340288u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80340288
  cmps(c,0,(int32_t)c->r[4],0); // 8034028C
  c->r[4]=R32(c->r[3]+0x00000004u); // 80340290
  if (crb(c,2)) { goto L_8034029C; } // 80340294
  f_8028BC18(c); return; // 80340298
L_8034029C:;
  f_8028BC74(c); return; // 8034029C
}

// GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc
void f_803402A0(Ctx* __restrict c) {
  trace_call(0x803402A0u);
  c->r[11]=R32(c->r[3]+0x00000000u); // 803402A0
  c->r[0]=R32(c->r[11]+0x00000018u); // 803402A4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803402A8
  if (crb(c,2)) { goto L_803402B8; } // 803402AC
  c->r[3]=0u+0x00000000u; // 803402B0
  return; // 803402B4
L_803402B8:;
  cmps(c,0,(int32_t)c->r[4],0); // 803402B8
  if (crb(c,2)) { goto L_803402DC; } // 803402BC
  c->r[0]=R32(c->r[11]+0x00000010u); // 803402C0
  cmps(c,0,(int32_t)c->r[0],0); // 803402C4
  if (crb(c,2)) { goto L_803402D4; } // 803402C8
  c->r[0]=c->r[11]+c->r[0]; // 803402CC
  goto L_803402D8; // 803402D0
L_803402D4:;
  c->r[0]=0u+0x00000000u; // 803402D4
L_803402D8:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 803402D8
L_803402DC:;
  cmps(c,0,(int32_t)c->r[5],0); // 803402DC
  if (crb(c,2)) { goto L_803402F0; } // 803402E0
  c->r[4]=R32(c->r[3]+0x00000000u); // 803402E4
  c->r[0]=R16(c->r[4]+0x0000001Cu); // 803402E8
  W16(c->r[5]+0x00000000u,c->r[0]); // 803402EC
L_803402F0:;
  cmps(c,0,(int32_t)c->r[6],0); // 803402F0
  if (crb(c,2)) { goto L_80340304; } // 803402F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 803402F8
  c->r[0]=R16(c->r[3]+0x0000001Eu); // 803402FC
  W16(c->r[6]+0x00000000u,c->r[0]); // 80340300
L_80340304:;
  cmps(c,0,(int32_t)c->r[7],0); // 80340304
  if (crb(c,2)) { goto L_80340314; } // 80340308
  c->r[0]=R32(c->r[11]+0x00000020u); // 8034030C
  W32(c->r[7]+0x00000000u,c->r[0]); // 80340310
L_80340314:;
  cmps(c,0,(int32_t)c->r[8],0); // 80340314
  if (crb(c,2)) { goto L_80340324; } // 80340318
  {uint32_t ea=c->r[11]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034031C
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 80340320
L_80340324:;
  cmps(c,0,(int32_t)c->r[9],0); // 80340324
  if (crb(c,2)) { goto L_80340334; } // 80340328
  {uint32_t ea=c->r[11]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034032C
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[0]);} // 80340330
L_80340334:;
  cmps(c,0,(int32_t)c->r[10],0); // 80340334
  if (crb(c,2)) { goto L_80340354; } // 80340338
  c->r[3]=R32(c->r[11]+0x00000024u); // 8034033C
  c->r[0]=c->r[3]^0x00000001u; // 80340340
  c->r[0]=cntlz(c->r[0]); // 80340344
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80340348
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8034034C
  W8(c->r[10]+0x00000000u,c->r[0]); // 80340350
L_80340354:;
  c->r[3]=0u+0x00000001u; // 80340354
  return; // 80340358
}

// GetTexObjCIParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP11_GXCITexFmtPfPfPUc
void f_8034035C(Ctx* __restrict c) {
  trace_call(0x8034035Cu);
  c->r[11]=R32(c->r[3]+0x00000000u); // 8034035C
  c->r[0]=R32(c->r[11]+0x00000018u); // 80340360
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80340364
  if (!crb(c,2)) { goto L_80340374; } // 80340368
  c->r[3]=0u+0x00000000u; // 8034036C
  return; // 80340370
L_80340374:;
  cmps(c,0,(int32_t)c->r[4],0); // 80340374
  if (crb(c,2)) { goto L_80340398; } // 80340378
  c->r[0]=R32(c->r[11]+0x00000010u); // 8034037C
  cmps(c,0,(int32_t)c->r[0],0); // 80340380
  if (crb(c,2)) { goto L_80340390; } // 80340384
  c->r[0]=c->r[11]+c->r[0]; // 80340388
  goto L_80340394; // 8034038C
L_80340390:;
  c->r[0]=0u+0x00000000u; // 80340390
L_80340394:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 80340394
L_80340398:;
  cmps(c,0,(int32_t)c->r[5],0); // 80340398
  if (crb(c,2)) { goto L_803403AC; } // 8034039C
  c->r[4]=R32(c->r[3]+0x00000000u); // 803403A0
  c->r[0]=R16(c->r[4]+0x0000001Cu); // 803403A4
  W16(c->r[5]+0x00000000u,c->r[0]); // 803403A8
L_803403AC:;
  cmps(c,0,(int32_t)c->r[6],0); // 803403AC
  if (crb(c,2)) { goto L_803403C0; } // 803403B0
  c->r[3]=R32(c->r[3]+0x00000000u); // 803403B4
  c->r[0]=R16(c->r[3]+0x0000001Eu); // 803403B8
  W16(c->r[6]+0x00000000u,c->r[0]); // 803403BC
L_803403C0:;
  cmps(c,0,(int32_t)c->r[7],0); // 803403C0
  if (crb(c,2)) { goto L_803403D0; } // 803403C4
  c->r[0]=R32(c->r[11]+0x00000020u); // 803403C8
  W32(c->r[7]+0x00000000u,c->r[0]); // 803403CC
L_803403D0:;
  cmps(c,0,(int32_t)c->r[8],0); // 803403D0
  if (crb(c,2)) { goto L_803403E0; } // 803403D4
  {uint32_t ea=c->r[11]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803403D8
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 803403DC
L_803403E0:;
  cmps(c,0,(int32_t)c->r[9],0); // 803403E0
  if (crb(c,2)) { goto L_803403F0; } // 803403E4
  {uint32_t ea=c->r[11]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803403E8
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[0]);} // 803403EC
L_803403F0:;
  cmps(c,0,(int32_t)c->r[10],0); // 803403F0
  if (crb(c,2)) { goto L_80340410; } // 803403F4
  c->r[3]=R32(c->r[11]+0x00000024u); // 803403F8
  c->r[0]=c->r[3]^0x00000001u; // 803403FC
  c->r[0]=cntlz(c->r[0]); // 80340400
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80340404
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80340408
  W8(c->r[10]+0x00000000u,c->r[0]); // 8034040C
L_80340410:;
  c->r[3]=0u+0x00000001u; // 80340410
  return; // 80340414
}

// Init__Q34nw4r3g3d6ResTexFv
void f_80340418(Ctx* __restrict c) {
  trace_call(0x80340418u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80340418
  c->r[4]=R32(c->r[3]+0x00000004u); // 8034041C
  f_8028BC48(c); return; // 80340420
}

// PatchChrAnmResult__Q34nw4r3g3d7ResNodeCFPQ34nw4r3g3d12ChrAnmResult
void f_80340424(Ctx* __restrict c) {
  trace_call(0x80340424u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80340424
  c->r[0]=c->lr; // 80340428
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034042C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80340430
  c->r[31]=R32(c->r[3]+0x00000000u); // 80340434
  W32(c->r[1]+0x00000018u,c->r[30]); // 80340438
  cmps(c,0,(int32_t)c->r[31],0); // 8034043C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80340440
  c->r[29]=c->r[4]|c->r[4]; // 80340444
  if (crb(c,2)) { goto L_80340538; } // 80340448
  c->r[30]=R32(c->r[4]+0x00000000u); // 8034044C
  c->r[0]=rotl(c->r[30],0)&0x00000080u; cr0(c,c->r[0]); // 80340450
  if (crb(c,2)) { goto L_80340490; } // 80340454
  c->r[3]=R32(c->r[31]+0x00000014u); // 80340458
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 8034045C
  if (crb(c,2)) { goto L_8034046C; } // 80340460
  c->r[30]=c->r[30]|0x00000018u; // 80340464
  goto L_80340490; // 80340468
L_8034046C:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 8034046C
  if (crb(c,2)) { goto L_80340478; } // 80340470
  c->r[30]=c->r[30]|0x00000010u; // 80340474
L_80340478:;
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80340478
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8034047C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80340480
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 80340484
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80340488
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 8034048C
L_80340490:;
  c->r[0]=rotl(c->r[30],0)&0x00000100u; cr0(c,c->r[0]); // 80340490
  if (crb(c,2)) { goto L_803404D8; } // 80340494
  c->r[0]=R32(c->r[31]+0x00000014u); // 80340498
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8034049C
  if (crb(c,2)) { goto L_803404AC; } // 803404A0
  c->r[30]=c->r[30]|0x00000020u; // 803404A4
  goto L_803404D4; // 803404A8
L_803404AC:;
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 803404AC
  c->r[3]=c->r[4]+0x0000001Cu; // 803404B0
  {uint32_t ea=c->r[2]+0xFFFFEF28u; c->f[0]=c->ps1[0]=RF32(ea);} // 803404B4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 803404B8
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803404BC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 803404C0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 803404C4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803404C8
  c->lr=0x803404D0u; f_8036B1A8(c); // 803404CC
  c->r[30]=rotl(c->r[30],0)&0xFFFFFFDFu; // 803404D0
L_803404D4:;
  c->r[30]=c->r[30]|0x80000000u; // 803404D4
L_803404D8:;
  c->r[0]=rotl(c->r[30],0)&0x00000200u; cr0(c,c->r[0]); // 803404D8
  if (crb(c,2)) { goto L_80340510; } // 803404DC
  c->r[0]=R32(c->r[31]+0x00000014u); // 803404E0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 803404E4
  if (crb(c,2)) { goto L_803404F4; } // 803404E8
  c->r[30]=c->r[30]|0x00000040u; // 803404EC
  goto L_80340510; // 803404F0
L_803404F4:;
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803404F4
  c->r[30]=rotl(c->r[30],0)&0xFFFFFFBFu; // 803404F8
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 803404FC
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80340500
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 80340504
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80340508
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 8034050C
L_80340510:;
  c->r[0]=rotl(c->r[30],0)&0x00000020u; cr0(c,c->r[0]); // 80340510
  if (crb(c,2)) { goto L_80340530; } // 80340514
  c->r[0]=rotl(c->r[30],0)&0x00000040u; cr0(c,c->r[0]); // 80340518
  if (crb(c,2)) { goto L_80340530; } // 8034051C
  c->r[30]=c->r[30]|0x00000004u; // 80340520
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 80340524
  if (crb(c,2)) { goto L_80340530; } // 80340528
  c->r[30]=c->r[30]|0x00000002u; // 8034052C
L_80340530:;
  c->r[0]=rotl(c->r[30],0)&0xFFFFFC7Fu; // 80340530
  W32(c->r[29]+0x00000000u,c->r[0]); // 80340534
L_80340538:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80340538
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034053C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80340540
  c->r[29]=R32(c->r[1]+0x00000014u); // 80340544
  c->lr=c->r[0]; // 80340548
  c->r[1]=c->r[1]+0x00000020u; // 8034054C
  return; // 80340550
}

// CalcChrAnmResult__Q34nw4r3g3d7ResNodeCFPQ34nw4r3g3d12ChrAnmResult
void f_80340554(Ctx* __restrict c) {
  trace_call(0x80340554u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80340554
  c->r[0]=c->lr; // 80340558
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034055C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80340560
  c->r[31]=R32(c->r[3]+0x00000000u); // 80340564
  W32(c->r[1]+0x00000028u,c->r[30]); // 80340568
  cmps(c,0,(int32_t)c->r[31],0); // 8034056C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80340570
  c->r[29]=c->r[4]|c->r[4]; // 80340574
  if (crb(c,2)) { goto L_803406A0; } // 80340578
  c->r[3]=R32(c->r[31]+0x00000014u); // 8034057C
  c->r[30]=0u+0x00000000u; // 80340580
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 80340584
  if (crb(c,2)) { goto L_803405A4; } // 80340588
  {uint32_t ea=c->r[2]+0xFFFFEF2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034058C
  c->r[30]=c->r[30]|0x00000018u; // 80340590
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 80340594
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 80340598
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8034059C
  goto L_803405C8; // 803405A0
L_803405A4:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 803405A4
  if (crb(c,2)) { goto L_803405B0; } // 803405A8
  c->r[30]=c->r[30]|0x00000010u; // 803405AC
L_803405B0:;
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 803405B0
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 803405B4
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 803405B8
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 803405BC
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803405C0
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 803405C4
L_803405C8:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 803405C8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 803405CC
  if (crb(c,2)) { goto L_803405E4; } // 803405D0
  c->r[3]=c->r[4]+0x0000001Cu; // 803405D4
  c->lr=0x803405DCu; f_80295AE8(c); // 803405D8
  c->r[30]=c->r[30]|0x00000020u; // 803405DC
  goto L_8034062C; // 803405E0
L_803405E4:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803405E4
  c->r[3]=c->r[4]+0x0000001Cu; // 803405E8
  {uint32_t ea=c->r[31]+0x00000030u; c->f[5]=c->ps1[5]=RF32(ea);} // 803405EC
  {uint32_t ea=c->r[31]+0x00000034u; c->f[4]=c->ps1[4]=RF32(ea);} // 803405F0
  {uint32_t ea=c->r[2]+0xFFFFEF28u; c->f[0]=c->ps1[0]=RF32(ea);} // 803405F4
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[1]);} // 803405F8
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[5]);} // 803405FC
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[4]);} // 80340600
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 80340604
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80340608
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8034060C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 80340610
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80340614
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80340618
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 8034061C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 80340620
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 80340624
  c->lr=0x8034062Cu; f_8036B1A8(c); // 80340628
L_8034062C:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 8034062C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80340630
  if (crb(c,2)) { goto L_80340640; } // 80340634
  c->r[30]=c->r[30]|0x00000040u; // 80340638
  goto L_80340658; // 8034063C
L_80340640:;
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80340640
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 80340644
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80340648
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 8034064C
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80340650
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 80340654
L_80340658:;
  c->r[0]=rotl(c->r[30],0)&0x00000020u; cr0(c,c->r[0]); // 80340658
  if (crb(c,2)) { goto L_80340678; } // 8034065C
  c->r[0]=rotl(c->r[30],0)&0x00000040u; cr0(c,c->r[0]); // 80340660
  if (crb(c,2)) { goto L_80340678; } // 80340664
  c->r[30]=c->r[30]|0x00000004u; // 80340668
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 8034066C
  if (crb(c,2)) { goto L_80340678; } // 80340670
  c->r[30]=c->r[30]|0x00000002u; // 80340674
L_80340678:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80340678
  c->r[30]=c->r[30]|0x80000000u; // 8034067C
  c->r[30]=c->r[30]|0x00000001u; // 80340680
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 80340684
  if (crb(c,2)) { goto L_80340690; } // 80340688
  c->r[30]=c->r[30]|0x00000400u; // 8034068C
L_80340690:;
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 80340690
  if (crb(c,2)) { goto L_8034069C; } // 80340694
  c->r[30]=c->r[30]|0x00000800u; // 80340698
L_8034069C:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 8034069C
L_803406A0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 803406A0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803406A4
  c->r[30]=R32(c->r[1]+0x00000028u); // 803406A8
  c->r[29]=R32(c->r[1]+0x00000024u); // 803406AC
  c->lr=c->r[0]; // 803406B0
  c->r[1]=c->r[1]+0x00000030u; // 803406B4
  return; // 803406B8
}

// GetResKeyFrameAnmResult__Q34nw4r3g3d6detailFPCQ34nw4r3g3d18ResKeyFrameAnmDataf
void f_803406BC(Ctx* __restrict c) {
  trace_call(0x803406BCu);
  c->r[5]=R16(c->r[3]+0x00000000u); // 803406BC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 803406C0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 803406C4
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803406C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 803406CC
  fcmp(c,0,c->f[1],c->f[2]); // 803406D0
  c->r[4]=c->r[3]+c->r[0]; // 803406D4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803406D8
  if (!crb(c,2)) { goto L_803406E8; } // 803406DC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803406E0
  goto L_803407E0; // 803406E4
L_803406E8:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803406E8
  fcmp(c,0,c->f[0],c->f[1]); // 803406EC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803406F0
  if (!crb(c,2)) { goto L_80340700; } // 803406F4
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803406F8
  goto L_803407E0; // 803406FC
L_80340700:;
  W16(c->r[1]+0x00000008u,c->r[5]); // 80340700
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 80340704
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,1,3);} // 80340708
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034070C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80340710
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80340714
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 80340718
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 8034071C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80340720
  c->r[3]=c->r[3]+c->r[0]; // 80340724
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 80340728
  fcmp(c,0,c->f[1],c->f[0]); // 8034072C
  if (!crb(c,0)) { goto L_80340744; } // 80340730
L_80340734:;
  {uint32_t ea=c->r[3]+0xFFFFFFF4u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 80340734
  fcmp(c,0,c->f[1],c->f[0]); // 80340738
  if (crb(c,0)) { IRQCHK(c); goto L_80340734; } // 8034073C
  goto L_80340758; // 80340740
L_80340744:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 80340744
  fcmp(c,0,c->f[0],c->f[1]); // 80340748
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8034074C
  if (crb(c,2)) { IRQCHK(c); goto L_80340744; } // 80340750
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 80340754
L_80340758:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80340758
  fcmp(c,0,c->f[3],c->f[1]); // 8034075C
  if (!crb(c,2)) { goto L_8034076C; } // 80340760
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80340764
  goto L_803407E0; // 80340768
L_8034076C:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8034076C
  c->f[10]=c->ps1[10]=S(c->f[1]-c->f[3]); // 80340770
  {uint32_t ea=c->r[2]+0xFFFFEF34u; c->f[0]=c->ps1[0]=RF32(ea);} // 80340774
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[3]); // 80340778
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8034077C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 80340780
  {uint32_t ea=c->r[2]+0xFFFFEF38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80340784
  c->f[8]=c->ps1[8]=fres(c->f[11]); // 80340788
  {uint32_t ea=c->r[2]+0xFFFFEF30u; c->f[4]=c->ps1[4]=RF32(ea);} // 8034078C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 80340790
  {uint32_t ea=c->r[3]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 80340794
  {double t0=S(c->f[8]+c->f[8]), t1=S(c->ps1[8]+c->ps1[8]); c->f[9]=t0; c->ps1[9]=t1;} // 80340798
  {double t0=S(c->f[8]*c->f[8]), t1=S(c->ps1[8]*c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 8034079C
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[2]); // 803407A0
  {double t0=S(-std::fma(c->f[11],c->f[8],-c->f[9])), t1=S(-std::fma(c->ps1[11],c->ps1[8],-c->ps1[9])); c->f[8]=t0; c->ps1[8]=t1;} // 803407A4
  c->f[9]=c->ps1[9]=S(c->f[10]*c->f[8]); // 803407A8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[9]); // 803407AC
  c->f[8]=c->ps1[8]=S(c->f[9]-c->f[4]); // 803407B0
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[7]); // 803407B4
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[1]); // 803407B8
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[6]); // 803407BC
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[8]); // 803407C0
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 803407C4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803407C8
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[3]); // 803407CC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803407D0
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[1]); // 803407D4
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 803407D8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 803407DC
L_803407E0:;
  c->r[1]=c->r[1]+0x00000010u; // 803407E0
  return; // 803407E4
}

// GetResColorAnmResult__Q34nw4r3g3d6detailFPCQ34nw4r3g3d21ResColorAnmFramesDataf
void f_803407E8(Ctx* __restrict c) {
  trace_call(0x803407E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803407E8
  c->r[0]=c->lr; // 803407EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803407F0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803407F4
  c->r[31]=c->r[3]|c->r[3]; // 803407F8
  c->r[3]=c->r[1]+0x00000018u; // 803407FC
  c->lr=0x80340804u; f_802C4F68(c); // 80340800
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 80340804
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80340808
  {uint32_t ea=c->r[2]+0xFFFFEF3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034080C
  c->f[2]=c->ps1[2]=S(c->f[2]); // 80340810
  fcmp(c,0,c->f[0],c->f[1]); // 80340814
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80340818
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 8034081C
  c->r[3]=R32(c->r[1]+0x00000024u); // 80340820
  if (!crb(c,2)) { goto L_80340834; } // 80340824
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80340828
  c->r[3]=R32(c->r[31]+c->r[0]); // 8034082C
  goto L_803408D4; // 80340830
L_80340834:;
  c->r[0]=c->r[3]+0x00000001u; // 80340834
  {uint32_t ea=c->r[2]+0xFFFFEF40u; c->f[0]=c->ps1[0]=RF32(ea);} // 80340838
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8034083C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80340840
  c->r[3]=R32(c->r[31]+c->r[3]); // 80340844
  c->r[0]=R32(c->r[31]+c->r[0]); // 80340848
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8034084C
  W32(c->r[1]+0x00000014u,c->r[3]); // 80340850
  W32(c->r[1]+0x00000010u,c->r[0]); // 80340854
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,5);} // 80340858
  c->r[10]=R8(c->r[1]+0x00000014u); // 8034085C
  c->r[0]=R8(c->r[1]+0x00000010u); // 80340860
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 80340864
  c->r[3]=c->r[0]-c->r[10]; // 80340868
  c->r[7]=R8(c->r[1]+0x00000015u); // 8034086C
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[3]); // 80340870
  c->r[0]=R8(c->r[1]+0x00000011u); // 80340874
  c->r[8]=R8(c->r[1]+0x00000016u); // 80340878
  c->r[4]=c->r[0]-c->r[7]; // 8034087C
  c->r[3]=R8(c->r[1]+0x00000012u); // 80340880
  c->r[9]=R8(c->r[1]+0x00000017u); // 80340884
  c->r[0]=R8(c->r[1]+0x00000013u); // 80340888
  c->r[3]=c->r[3]-c->r[8]; // 8034088C
  c->r[5]=sraw(c,c->r[5],15); // 80340890
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[4]); // 80340894
  c->r[0]=c->r[0]-c->r[9]; // 80340898
  c->r[5]=c->r[10]+c->r[5]; // 8034089C
  W8(c->r[1]+0x0000000Cu,c->r[5]); // 803408A0
  c->r[4]=sraw(c,c->r[4],15); // 803408A4
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[3]); // 803408A8
  c->r[4]=c->r[7]+c->r[4]; // 803408AC
  W8(c->r[1]+0x0000000Du,c->r[4]); // 803408B0
  c->r[3]=sraw(c,c->r[3],15); // 803408B4
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 803408B8
  c->r[3]=c->r[8]+c->r[3]; // 803408BC
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 803408C0
  c->r[0]=sraw(c,c->r[0],15); // 803408C4
  c->r[0]=c->r[9]+c->r[0]; // 803408C8
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 803408CC
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 803408D0
L_803408D4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 803408D4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803408D8
  c->lr=c->r[0]; // 803408DC
  c->r[1]=c->r[1]+0x00000030u; // 803408E0
  return; // 803408E4
}

// GetAnmResult__Q34nw4r3g3d9ResAnmVisCFUlf
void f_803408E8(Ctx* __restrict c) {
  trace_call(0x803408E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803408E8
  c->r[0]=c->lr; // 803408EC
  c->r[5]=R32(c->r[3]+0x00000000u); // 803408F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803408F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803408F8
  c->r[0]=R32(c->r[5]+0x00000010u); // 803408FC
  cmps(c,0,(int32_t)c->r[0],0); // 80340900
  if (crb(c,2)) { goto L_80340910; } // 80340904
  c->r[0]=c->r[5]+c->r[0]; // 80340908
  goto L_80340914; // 8034090C
L_80340910:;
  c->r[0]=0u+0x00000000u; // 80340910
L_80340914:;
  cmps(c,0,(int32_t)c->r[0],0); // 80340914
  if (crb(c,2)) { goto L_80340944; } // 80340918
  c->r[4]=c->r[4]+0x00000001u; // 8034091C
  c->r[4]=rotl(c->r[4],4)&0xFFFFFFF0u; // 80340920
  c->r[4]=c->r[0]+c->r[4]; // 80340924
  c->r[4]=R32(c->r[4]+0x00000014u); // 80340928
  cmps(c,0,(int32_t)c->r[4],0); // 8034092C
  if (crb(c,2)) { goto L_8034093C; } // 80340930
  c->r[31]=c->r[0]+c->r[4]; // 80340934
  goto L_80340948; // 80340938
L_8034093C:;
  c->r[31]=0u+0x00000000u; // 8034093C
  goto L_80340948; // 80340940
L_80340944:;
  c->r[31]=0u+0x00000000u; // 80340944
L_80340948:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 80340948
  c->r[3]=R32(c->r[3]+0x00000000u); // 8034094C
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80340950
  if (crb(c,2)) { goto L_80340960; } // 80340954
  c->r[3]=rotl(c->r[4],0)&0x00000001u; // 80340958
  goto L_803409F4; // 8034095C
L_80340960:;
  {uint32_t ea=c->r[2]+0xFFFFEF48u; c->f[0]=c->ps1[0]=RF32(ea);} // 80340960
  fcmp(c,0,c->f[1],c->f[0]); // 80340964
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80340968
  if (!crb(c,2)) { goto L_80340974; } // 8034096C
  goto L_803409B4; // 80340970
L_80340974:;
  c->r[3]=R16(c->r[3]+0x0000001Cu); // 80340974
  c->r[0]=0u+0x43300000u; // 80340978
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034097C
  {uint32_t ea=c->r[2]+0xFFFFEF50u; c->f[2]=RF64(ea);} // 80340980
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80340984
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80340988
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8034098C
  fcmp(c,0,c->f[0],c->f[1]); // 80340990
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80340994
  if (!crb(c,2)) { goto L_803409B0; } // 80340998
  W32(c->r[1]+0x00000014u,c->r[3]); // 8034099C
  W32(c->r[1]+0x00000010u,c->r[0]); // 803409A0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803409A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803409A8
  goto L_803409B4; // 803409AC
L_803409B0:;
  c->f[0]=c->f[1]; // 803409B0
L_803409B4:;
  c->f[1]=c->f[0]; // 803409B4
  c->lr=0x803409BCu; f_802C4C30(c); // 803409B8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803409BC
  c->r[3]=0u+0x80000000u; // 803409C0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803409C4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 803409C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803409CC
  c->r[4]=rotl(c->r[0],29)&0x1FFFFFFCu; // 803409D0
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 803409D4
  c->r[4]=c->r[31]+c->r[4]; // 803409D8
  c->r[4]=R32(c->r[4]+0x00000008u); // 803409DC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 803409E0
  c->r[3]=c->r[4]&c->r[0]; // 803409E4
  c->r[0]=0u-c->r[3]; // 803409E8
  c->r[0]=c->r[0]|c->r[3]; // 803409EC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803409F0
L_803409F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803409F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803409F8
  c->lr=c->r[0]; // 803409FC
  c->r[1]=c->r[1]+0x00000020u; // 80340A00
  return; // 80340A04
}

// GetAnmResult__Q34nw4r3g3d9ResAnmClrCFPQ34nw4r3g3d12ClrAnmResultUlf
void f_80340A08(Ctx* __restrict c) {
  trace_call(0x80340A08u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80340A08
  c->r[0]=c->lr; // 80340A0C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80340A10
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80340A14
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80340A18
  c->r[11]=c->r[1]+0x00000030u; // 80340A1C
  c->lr=0x80340A24u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80340A20
  c->r[6]=R32(c->r[3]+0x00000000u); // 80340A24
  c->r[30]=c->r[4]|c->r[4]; // 80340A28
  c->r[0]=R32(c->r[6]+0x00000010u); // 80340A2C
  cmps(c,0,(int32_t)c->r[0],0); // 80340A30
  if (crb(c,2)) { goto L_80340A40; } // 80340A34
  c->r[0]=c->r[6]+c->r[0]; // 80340A38
  goto L_80340A44; // 80340A3C
L_80340A40:;
  c->r[0]=0u+0x00000000u; // 80340A40
L_80340A44:;
  cmps(c,0,(int32_t)c->r[0],0); // 80340A44
  if (crb(c,2)) { goto L_80340A74; } // 80340A48
  c->r[5]=c->r[5]+0x00000001u; // 80340A4C
  c->r[5]=rotl(c->r[5],4)&0xFFFFFFF0u; // 80340A50
  c->r[5]=c->r[0]+c->r[5]; // 80340A54
  c->r[5]=R32(c->r[5]+0x00000014u); // 80340A58
  cmps(c,0,(int32_t)c->r[5],0); // 80340A5C
  if (crb(c,2)) { goto L_80340A6C; } // 80340A60
  c->r[5]=c->r[0]+c->r[5]; // 80340A64
  goto L_80340A78; // 80340A68
L_80340A6C:;
  c->r[5]=0u+0x00000000u; // 80340A6C
  goto L_80340A78; // 80340A70
L_80340A74:;
  c->r[5]=0u+0x00000000u; // 80340A74
L_80340A78:;
  c->r[31]=R32(c->r[5]+0x00000004u); // 80340A78
  c->r[0]=0u+0x00000000u; // 80340A7C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80340A80
  c->r[27]=c->r[5]+0x00000008u; // 80340A84
  cmps(c,0,(int32_t)c->r[31],0); // 80340A88
  W32(c->r[4]+0x00000000u,c->r[0]); // 80340A8C
  if (crb(c,2)) { goto L_80340B54; } // 80340A90
  {uint32_t ea=c->r[2]+0xFFFFEF58u; c->f[31]=c->ps1[31]=RF32(ea);} // 80340A94
  fcmp(c,0,c->f[1],c->f[31]); // 80340A98
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80340A9C
  if (!crb(c,2)) { goto L_80340AA8; } // 80340AA0
  goto L_80340AE8; // 80340AA4
L_80340AA8:;
  c->r[3]=R16(c->r[3]+0x0000001Cu); // 80340AA8
  c->r[0]=0u+0x43300000u; // 80340AAC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80340AB0
  {uint32_t ea=c->r[2]+0xFFFFEF60u; c->f[2]=RF64(ea);} // 80340AB4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80340AB8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80340ABC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80340AC0
  fcmp(c,0,c->f[0],c->f[1]); // 80340AC4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80340AC8
  if (!crb(c,2)) { goto L_80340AE4; } // 80340ACC
  W32(c->r[1]+0x00000014u,c->r[3]); // 80340AD0
  W32(c->r[1]+0x00000010u,c->r[0]); // 80340AD4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80340AD8
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[2]); // 80340ADC
  goto L_80340AE8; // 80340AE0
L_80340AE4:;
  c->f[31]=c->f[1]; // 80340AE4
L_80340AE8:;
  c->r[28]=c->r[30]|c->r[30]; // 80340AE8
  c->r[26]=0u+0x00000000u; // 80340AEC
  c->r[29]=0u+0x00000001u; // 80340AF0
L_80340AF4:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 80340AF4
  if (crb(c,2)) { goto L_80340B40; } // 80340AF8
  c->r[4]=R32(c->r[30]+0x00000000u); // 80340AFC
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 80340B00
  c->r[3]=((c->r[26])&0x20)?0u:(c->r[29]<<((c->r[26])&31)); // 80340B04
  c->r[0]=c->r[4]|c->r[3]; // 80340B08
  W32(c->r[30]+0x00000000u,c->r[0]); // 80340B0C
  c->r[0]=R32(c->r[27]+0x00000000u); // 80340B10
  W32(c->r[28]+0x00000030u,c->r[0]); // 80340B14
  if (crb(c,2)) { goto L_80340B24; } // 80340B18
  c->r[3]=R32(c->r[27]+0x00000004u); // 80340B1C
  goto L_80340B38; // 80340B20
L_80340B24:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 80340B24
  c->f[1]=c->f[31]; // 80340B28
  c->r[3]=c->r[27]+c->r[0]; // 80340B2C
  c->r[3]=c->r[3]+0x00000004u; // 80340B30
  c->lr=0x80340B38u; f_803407E8(c); // 80340B34
L_80340B38:;
  W32(c->r[28]+0x00000004u,c->r[3]); // 80340B38
  c->r[27]=c->r[27]+0x00000008u; // 80340B3C
L_80340B40:;
  c->r[26]=c->r[26]+0x00000001u; // 80340B40
  c->r[31]=rotl(c->r[31],30)&0x3FFFFFFFu; // 80340B44
  cmps(c,0,(int32_t)c->r[26],11); // 80340B48
  c->r[28]=c->r[28]+0x00000004u; // 80340B4C
  if (crb(c,0)) { IRQCHK(c); goto L_80340AF4; } // 80340B50
L_80340B54:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80340B54
  c->r[11]=c->r[1]+0x00000030u; // 80340B58
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80340B5C
  c->lr=0x80340B64u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80340B60
  c->r[0]=R32(c->r[1]+0x00000044u); // 80340B64
  c->lr=c->r[0]; // 80340B68
  c->r[1]=c->r[1]+0x00000040u; // 80340B6C
  return; // 80340B70
}

// SearchFrame__Q34nw4r3g3d30@unnamed@g3d_resanmtexpat_cpp@FPCQ34nw4r3g3d19ResAnmTexPatAnmDataf
void f_80340B74(Ctx* __restrict c) {
  trace_call(0x80340B74u);
  c->r[5]=R16(c->r[3]+0x00000000u); // 80340B74
  c->r[6]=c->r[3]+0x00000008u; // 80340B78
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80340B7C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80340B80
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80340B84
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80340B88
  fcmp(c,0,c->f[1],c->f[2]); // 80340B8C
  c->r[4]=c->r[3]+c->r[0]; // 80340B90
  c->r[4]=c->r[4]+0x00000008u; // 80340B94
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80340B98
  if (!crb(c,2)) { goto L_80340BA8; } // 80340B9C
  c->r[3]=c->r[6]|c->r[6]; // 80340BA0
  goto L_80340C18; // 80340BA4
L_80340BA8:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80340BA8
  fcmp(c,0,c->f[0],c->f[1]); // 80340BAC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80340BB0
  if (!crb(c,2)) { goto L_80340BC0; } // 80340BB4
  c->r[3]=c->r[4]|c->r[4]; // 80340BB8
  goto L_80340C18; // 80340BBC
L_80340BC0:;
  W16(c->r[1]+0x00000008u,c->r[5]); // 80340BC0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 80340BC4
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,1,3);} // 80340BC8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80340BCC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80340BD0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80340BD4
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 80340BD8
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 80340BDC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80340BE0
  c->r[3]=c->r[3]+c->r[0]; // 80340BE4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 80340BE8
  fcmp(c,0,c->f[1],c->f[0]); // 80340BEC
  if (!crb(c,0)) { goto L_80340C04; } // 80340BF0
L_80340BF4:;
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 80340BF4
  fcmp(c,0,c->f[1],c->f[0]); // 80340BF8
  if (crb(c,0)) { IRQCHK(c); goto L_80340BF4; } // 80340BFC
  goto L_80340C18; // 80340C00
L_80340C04:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 80340C04
  fcmp(c,0,c->f[0],c->f[1]); // 80340C08
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80340C0C
  if (crb(c,2)) { IRQCHK(c); goto L_80340C04; } // 80340C10
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 80340C14
L_80340C18:;
  c->r[1]=c->r[1]+0x00000010u; // 80340C18
  return; // 80340C1C
}

// GetAnmResult__Q34nw4r3g3d12ResAnmTexPatCFPQ34nw4r3g3d15TexPatAnmResultUlf
void f_80340C20(Ctx* __restrict c) {
  trace_call(0x80340C20u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80340C20
  c->r[0]=c->lr; // 80340C24
  W32(c->r[1]+0x00000044u,c->r[0]); // 80340C28
  c->r[11]=c->r[1]+0x00000038u; // 80340C2C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[31]);} // 80340C30
  c->lr=0x80340C38u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80340C34
  c->r[6]=R32(c->r[3]+0x00000000u); // 80340C38
  c->f[31]=c->f[1]; // 80340C3C
  c->r[24]=c->r[4]|c->r[4]; // 80340C40
  c->r[0]=R32(c->r[6]+0x00000010u); // 80340C44
  cmps(c,0,(int32_t)c->r[0],0); // 80340C48
  if (crb(c,2)) { goto L_80340C58; } // 80340C4C
  c->r[0]=c->r[6]+c->r[0]; // 80340C50
  goto L_80340C5C; // 80340C54
L_80340C58:;
  c->r[0]=0u+0x00000000u; // 80340C58
L_80340C5C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80340C5C
  if (crb(c,2)) { goto L_80340C8C; } // 80340C60
  c->r[5]=c->r[5]+0x00000001u; // 80340C64
  c->r[5]=rotl(c->r[5],4)&0xFFFFFFF0u; // 80340C68
  c->r[5]=c->r[0]+c->r[5]; // 80340C6C
  c->r[5]=R32(c->r[5]+0x00000014u); // 80340C70
  cmps(c,0,(int32_t)c->r[5],0); // 80340C74
  if (crb(c,2)) { goto L_80340C84; } // 80340C78
  c->r[31]=c->r[0]+c->r[5]; // 80340C7C
  goto L_80340C90; // 80340C80
L_80340C84:;
  c->r[31]=0u+0x00000000u; // 80340C84
  goto L_80340C90; // 80340C88
L_80340C8C:;
  c->r[31]=0u+0x00000000u; // 80340C8C
L_80340C90:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80340C90
  c->r[27]=c->r[31]+0x00000008u; // 80340C94
  c->r[26]=R32(c->r[31]+0x00000004u); // 80340C98
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80340C9C
  cmps(c,0,(int32_t)c->r[0],0); // 80340CA0
  if (crb(c,2)) { goto L_80340CB0; } // 80340CA4
  c->r[30]=c->r[3]+c->r[0]; // 80340CA8
  goto L_80340CB4; // 80340CAC
L_80340CB0:;
  c->r[30]=0u+0x00000000u; // 80340CB0
L_80340CB4:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 80340CB4
  cmps(c,0,(int32_t)c->r[0],0); // 80340CB8
  if (crb(c,2)) { goto L_80340CC8; } // 80340CBC
  c->r[29]=c->r[3]+c->r[0]; // 80340CC0
  goto L_80340CCC; // 80340CC4
L_80340CC8:;
  c->r[29]=0u+0x00000000u; // 80340CC8
L_80340CCC:;
  c->r[0]=0u+0x00000000u; // 80340CCC
  c->r[28]=c->r[24]|c->r[24]; // 80340CD0
  W8(c->r[4]+0x00000000u,c->r[0]); // 80340CD4
  c->r[25]=0u+0x00000000u; // 80340CD8
  c->r[23]=0u+0x00000001u; // 80340CDC
  W8(c->r[4]+0x00000001u,c->r[0]); // 80340CE0
L_80340CE4:;
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 80340CE4
  if (crb(c,2)) { goto L_80340D70; } // 80340CE8
  c->r[0]=rotl(c->r[26],0)&0x00000002u; cr0(c,c->r[0]); // 80340CEC
  if (crb(c,2)) { goto L_80340D00; } // 80340CF0
  c->r[4]=R16(c->r[27]+0x00000000u); // 80340CF4
  c->r[3]=R16(c->r[27]+0x00000002u); // 80340CF8
  goto L_80340D18; // 80340CFC
L_80340D00:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 80340D00
  c->f[1]=c->f[31]; // 80340D04
  c->r[3]=c->r[0]+c->r[31]; // 80340D08
  c->lr=0x80340D10u; f_80340B74(c); // 80340D0C
  c->r[4]=R16(c->r[3]+0x00000004u); // 80340D10
  c->r[3]=R16(c->r[3]+0x00000006u); // 80340D14
L_80340D18:;
  c->r[0]=rotl(c->r[26],0)&0x00000004u; cr0(c,c->r[0]); // 80340D18
  c->r[5]=((c->r[25])&0x20)?0u:(c->r[23]<<((c->r[25])&31)); // 80340D1C
  if (crb(c,2)) { goto L_80340D44; } // 80340D20
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80340D24
  c->r[0]=R32(c->r[30]+c->r[0]); // 80340D28
  cmps(c,0,(int32_t)c->r[0],0); // 80340D2C
  if (crb(c,2)) { goto L_80340D44; } // 80340D30
  W32(c->r[28]+0x00000004u,c->r[0]); // 80340D34
  c->r[0]=R8(c->r[24]+0x00000000u); // 80340D38
  c->r[0]=c->r[0]|c->r[5]; // 80340D3C
  W8(c->r[24]+0x00000000u,c->r[0]); // 80340D40
L_80340D44:;
  c->r[0]=rotl(c->r[26],0)&0x00000008u; cr0(c,c->r[0]); // 80340D44
  if (crb(c,2)) { goto L_80340D6C; } // 80340D48
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80340D4C
  c->r[0]=R32(c->r[29]+c->r[0]); // 80340D50
  cmps(c,0,(int32_t)c->r[0],0); // 80340D54
  if (crb(c,2)) { goto L_80340D6C; } // 80340D58
  W32(c->r[28]+0x00000024u,c->r[0]); // 80340D5C
  c->r[0]=R8(c->r[24]+0x00000001u); // 80340D60
  c->r[0]=c->r[0]|c->r[5]; // 80340D64
  W8(c->r[24]+0x00000001u,c->r[0]); // 80340D68
L_80340D6C:;
  c->r[27]=c->r[27]+0x00000004u; // 80340D6C
L_80340D70:;
  c->r[25]=c->r[25]+0x00000001u; // 80340D70
  c->r[26]=rotl(c->r[26],28)&0x0FFFFFFFu; // 80340D74
  cmps(c,0,(int32_t)c->r[25],8); // 80340D78
  c->r[28]=c->r[28]+0x00000004u; // 80340D7C
  if (crb(c,0)) { IRQCHK(c); goto L_80340CE4; } // 80340D80
  c->r[11]=c->r[1]+0x00000038u; // 80340D84
  {uint32_t ea=c->r[1]+0x00000038u; c->f[31]=RF64(ea);} // 80340D88
  c->lr=0x80340D90u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80340D8C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80340D90
  c->lr=c->r[0]; // 80340D94
  c->r[1]=c->r[1]+0x00000040u; // 80340D98
  return; // 80340D9C
}

// Bind__Q34nw4r3g3d12ResAnmTexPatFQ34nw4r3g3d7ResFile
void f_80340DA0(Ctx* __restrict c) {
  trace_call(0x80340DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80340DA0
  c->r[0]=c->lr; // 80340DA4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80340DA8
  c->r[11]=c->r[1]+0x00000040u; // 80340DAC
  c->lr=0x80340DB4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80340DB0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80340DB4
  c->r[28]=c->r[4]|c->r[4]; // 80340DB8
  c->r[0]=R32(c->r[3]+0x00000014u); // 80340DBC
  c->r[31]=R16(c->r[3]+0x00000030u); // 80340DC0
  cmps(c,0,(int32_t)c->r[0],0); // 80340DC4
  c->r[30]=R16(c->r[3]+0x00000032u); // 80340DC8
  if (crb(c,2)) { goto L_80340DD8; } // 80340DCC
  c->r[27]=c->r[3]+c->r[0]; // 80340DD0
  goto L_80340DDC; // 80340DD4
L_80340DD8:;
  c->r[27]=0u+0x00000000u; // 80340DD8
L_80340DDC:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 80340DDC
  cmps(c,0,(int32_t)c->r[0],0); // 80340DE0
  if (crb(c,2)) { goto L_80340DF0; } // 80340DE4
  c->r[26]=c->r[3]+c->r[0]; // 80340DE8
  goto L_80340DF4; // 80340DEC
L_80340DF0:;
  c->r[26]=0u+0x00000000u; // 80340DF0
L_80340DF4:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80340DF4
  cmps(c,0,(int32_t)c->r[0],0); // 80340DF8
  if (crb(c,2)) { goto L_80340E08; } // 80340DFC
  c->r[24]=c->r[3]+c->r[0]; // 80340E00
  goto L_80340E0C; // 80340E04
L_80340E08:;
  c->r[24]=0u+0x00000000u; // 80340E08
L_80340E0C:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 80340E0C
  cmps(c,0,(int32_t)c->r[0],0); // 80340E10
  if (crb(c,2)) { goto L_80340E20; } // 80340E14
  c->r[25]=c->r[3]+c->r[0]; // 80340E18
  goto L_80340E24; // 80340E1C
L_80340E20:;
  c->r[25]=0u+0x00000000u; // 80340E20
L_80340E24:;
  c->r[23]=c->r[27]|c->r[27]; // 80340E24
  c->r[29]=0u+0x00000000u; // 80340E28
  c->r[22]=0u+0x00000000u; // 80340E2C
  goto L_80340E80; // 80340E30
L_80340E34:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 80340E34
  cmps(c,0,(int32_t)c->r[0],0); // 80340E38
  if (crb(c,2)) { goto L_80340E48; } // 80340E3C
  c->r[29]=c->r[29]+0x00000001u; // 80340E40
  goto L_80340E74; // 80340E44
L_80340E48:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 80340E48
  c->r[3]=c->r[28]|c->r[28]; // 80340E4C
  c->r[4]=c->r[1]+0x0000000Cu; // 80340E50
  c->r[5]=c->r[27]+c->r[0]; // 80340E54
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 80340E58
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80340E5C
  c->lr=0x80340E64u; f_8033B294(c); // 80340E60
  cmps(c,0,(int32_t)c->r[3],0); // 80340E64
  if (crb(c,2)) { goto L_80340E74; } // 80340E68
  W32(c->r[24]+0x00000000u,c->r[3]); // 80340E6C
  c->r[29]=c->r[29]+0x00000001u; // 80340E70
L_80340E74:;
  c->r[24]=c->r[24]+0x00000004u; // 80340E74
  c->r[23]=c->r[23]+0x00000004u; // 80340E78
  c->r[22]=c->r[22]+0x00000001u; // 80340E7C
L_80340E80:;
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[31]); // 80340E80
  if (crb(c,0)) { IRQCHK(c); goto L_80340E34; } // 80340E84
  c->r[27]=c->r[26]|c->r[26]; // 80340E88
  c->r[22]=0u+0x00000000u; // 80340E8C
  goto L_80340EE0; // 80340E90
L_80340E94:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 80340E94
  cmps(c,0,(int32_t)c->r[0],0); // 80340E98
  if (crb(c,2)) { goto L_80340EA8; } // 80340E9C
  c->r[29]=c->r[29]+0x00000001u; // 80340EA0
  goto L_80340ED4; // 80340EA4
L_80340EA8:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 80340EA8
  c->r[3]=c->r[28]|c->r[28]; // 80340EAC
  c->r[4]=c->r[1]+0x00000008u; // 80340EB0
  c->r[5]=c->r[26]+c->r[0]; // 80340EB4
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 80340EB8
  W32(c->r[1]+0x00000008u,c->r[0]); // 80340EBC
  c->lr=0x80340EC4u; f_8033B220(c); // 80340EC0
  cmps(c,0,(int32_t)c->r[3],0); // 80340EC4
  if (crb(c,2)) { goto L_80340ED4; } // 80340EC8
  W32(c->r[25]+0x00000000u,c->r[3]); // 80340ECC
  c->r[29]=c->r[29]+0x00000001u; // 80340ED0
L_80340ED4:;
  c->r[25]=c->r[25]+0x00000004u; // 80340ED4
  c->r[27]=c->r[27]+0x00000004u; // 80340ED8
  c->r[22]=c->r[22]+0x00000001u; // 80340EDC
L_80340EE0:;
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[30]); // 80340EE0
  if (crb(c,0)) { IRQCHK(c); goto L_80340E94; } // 80340EE4
  c->r[0]=c->r[31]+c->r[30]; // 80340EE8
  c->r[11]=c->r[1]+0x00000040u; // 80340EEC
  c->r[0]=c->r[0]-c->r[29]; // 80340EF0
  c->r[0]=cntlz(c->r[0]); // 80340EF4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80340EF8
  c->lr=0x80340F00u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80340EFC
  c->r[0]=R32(c->r[1]+0x00000044u); // 80340F00
  c->lr=c->r[0]; // 80340F04
  c->r[1]=c->r[1]+0x00000040u; // 80340F08
  return; // 80340F0C
}

// Release__Q34nw4r3g3d12ResAnmTexPatFv
void f_80340F10(Ctx* __restrict c) {
  trace_call(0x80340F10u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 80340F10
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80340F14
  c->r[9]=R16(c->r[4]+0x00000030u); // 80340F18
  cmps(c,0,(int32_t)c->r[0],0); // 80340F1C
  c->r[3]=R16(c->r[4]+0x00000032u); // 80340F20
  if (crb(c,2)) { goto L_80340F30; } // 80340F24
  c->r[5]=c->r[4]+c->r[0]; // 80340F28
  goto L_80340F34; // 80340F2C
L_80340F30:;
  c->r[5]=0u+0x00000000u; // 80340F30
L_80340F34:;
  c->r[0]=R32(c->r[4]+0x00000020u); // 80340F34
  cmps(c,0,(int32_t)c->r[0],0); // 80340F38
  if (crb(c,2)) { goto L_80340F48; } // 80340F3C
  c->r[6]=c->r[4]+c->r[0]; // 80340F40
  goto L_80340F4C; // 80340F44
L_80340F48:;
  c->r[6]=0u+0x00000000u; // 80340F48
L_80340F4C:;
  cmps(c,1,(int32_t)c->r[9],0); // 80340F4C
  c->r[10]=0u+0x00000000u; // 80340F50
  if (!crb(c,5)) { goto L_80340FFC; } // 80340F54
  if (!crb(c,5)) { goto L_80340FFC; } // 80340F58
  cmps(c,0,(int32_t)c->r[9],8); // 80340F5C
  c->r[7]=c->r[9]+0xFFFFFFF8u; // 80340F60
  if (!crb(c,1)) { goto L_80340FD4; } // 80340F64
  c->r[8]=0u+0x00000000u; // 80340F68
  if (crb(c,4)) { goto L_80340F84; } // 80340F6C
  c->r[4]=0u+0x80000000u; // 80340F70
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 80340F74
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 80340F78
  if (crb(c,1)) { goto L_80340F84; } // 80340F7C
  c->r[8]=0u+0x00000001u; // 80340F80
L_80340F84:;
  cmps(c,0,(int32_t)c->r[8],0); // 80340F84
  if (crb(c,2)) { goto L_80340FD4; } // 80340F88
  c->r[0]=c->r[7]+0x00000007u; // 80340F8C
  c->r[8]=c->r[5]|c->r[5]; // 80340F90
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80340F94
  c->r[4]=0u+0x00000000u; // 80340F98
  c->ctr=c->r[0]; // 80340F9C
  cmps(c,0,(int32_t)c->r[7],0); // 80340FA0
  if (!crb(c,1)) { goto L_80340FD4; } // 80340FA4
L_80340FA8:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 80340FA8
  c->r[10]=c->r[10]+0x00000008u; // 80340FAC
  W32(c->r[8]+0x00000004u,c->r[4]); // 80340FB0
  W32(c->r[8]+0x00000008u,c->r[4]); // 80340FB4
  W32(c->r[8]+0x0000000Cu,c->r[4]); // 80340FB8
  W32(c->r[8]+0x00000010u,c->r[4]); // 80340FBC
  W32(c->r[8]+0x00000014u,c->r[4]); // 80340FC0
  W32(c->r[8]+0x00000018u,c->r[4]); // 80340FC4
  W32(c->r[8]+0x0000001Cu,c->r[4]); // 80340FC8
  c->r[8]=c->r[8]+0x00000020u; // 80340FCC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80340FA8; } // 80340FD0
L_80340FD4:;
  c->r[4]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80340FD4
  c->r[0]=c->r[9]-c->r[10]; // 80340FD8
  c->r[5]=c->r[5]+c->r[4]; // 80340FDC
  c->r[4]=0u+0x00000000u; // 80340FE0
  c->ctr=c->r[0]; // 80340FE4
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[9]); // 80340FE8
  if (!crb(c,0)) { goto L_80340FFC; } // 80340FEC
L_80340FF0:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 80340FF0
  c->r[5]=c->r[5]+0x00000004u; // 80340FF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80340FF0; } // 80340FF8
L_80340FFC:;
  cmps(c,1,(int32_t)c->r[3],0); // 80340FFC
  c->r[8]=0u+0x00000000u; // 80341000
  if (!crb(c,5)) return; // 80341004
  if (!crb(c,5)) return; // 80341008
  cmps(c,0,(int32_t)c->r[3],8); // 8034100C
  c->r[5]=c->r[3]+0xFFFFFFF8u; // 80341010
  if (!crb(c,1)) { goto L_80341084; } // 80341014
  c->r[7]=0u+0x00000000u; // 80341018
  if (crb(c,4)) { goto L_80341034; } // 8034101C
  c->r[4]=0u+0x80000000u; // 80341020
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 80341024
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80341028
  if (crb(c,1)) { goto L_80341034; } // 8034102C
  c->r[7]=0u+0x00000001u; // 80341030
L_80341034:;
  cmps(c,0,(int32_t)c->r[7],0); // 80341034
  if (crb(c,2)) { goto L_80341084; } // 80341038
  c->r[0]=c->r[5]+0x00000007u; // 8034103C
  c->r[7]=c->r[6]|c->r[6]; // 80341040
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80341044
  c->r[4]=0u+0x00000000u; // 80341048
  c->ctr=c->r[0]; // 8034104C
  cmps(c,0,(int32_t)c->r[5],0); // 80341050
  if (!crb(c,1)) { goto L_80341084; } // 80341054
L_80341058:;
  W32(c->r[7]+0x00000000u,c->r[4]); // 80341058
  c->r[8]=c->r[8]+0x00000008u; // 8034105C
  W32(c->r[7]+0x00000004u,c->r[4]); // 80341060
  W32(c->r[7]+0x00000008u,c->r[4]); // 80341064
  W32(c->r[7]+0x0000000Cu,c->r[4]); // 80341068
  W32(c->r[7]+0x00000010u,c->r[4]); // 8034106C
  W32(c->r[7]+0x00000014u,c->r[4]); // 80341070
  W32(c->r[7]+0x00000018u,c->r[4]); // 80341074
  W32(c->r[7]+0x0000001Cu,c->r[4]); // 80341078
  c->r[7]=c->r[7]+0x00000020u; // 8034107C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80341058; } // 80341080
L_80341084:;
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80341084
  c->r[0]=c->r[3]-c->r[8]; // 80341088
  c->r[5]=c->r[6]+c->r[4]; // 8034108C
  c->r[4]=0u+0x00000000u; // 80341090
  c->ctr=c->r[0]; // 80341094
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[3]); // 80341098
  if (!crb(c,0)) return; // 8034109C
L_803410A0:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 803410A0
  c->r[5]=c->r[5]+0x00000004u; // 803410A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803410A0; } // 803410A8
  return; // 803410AC
}

// GetAnmResult__Q34nw4r3g3d12ResAnmTexSrtCFPQ34nw4r3g3d15TexSrtAnmResultUlf
void f_803410B0(Ctx* __restrict c) {
  trace_call(0x803410B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803410B0
  c->r[0]=c->lr; // 803410B4
  W32(c->r[1]+0x00000074u,c->r[0]); // 803410B8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 803410BC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 803410C0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 803410C4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 803410C8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 803410CC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 803410D0
  c->r[11]=c->r[1]+0x00000040u; // 803410D4
  c->lr=0x803410DCu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803410D8
  c->r[6]=R32(c->r[3]+0x00000000u); // 803410DC
  c->f[29]=c->f[1]; // 803410E0
  c->r[22]=c->r[4]|c->r[4]; // 803410E4
  c->r[0]=R32(c->r[6]+0x00000010u); // 803410E8
  cmps(c,0,(int32_t)c->r[0],0); // 803410EC
  if (crb(c,2)) { goto L_803410FC; } // 803410F0
  c->r[0]=c->r[6]+c->r[0]; // 803410F4
  goto L_80341100; // 803410F8
L_803410FC:;
  c->r[0]=0u+0x00000000u; // 803410FC
L_80341100:;
  cmps(c,0,(int32_t)c->r[0],0); // 80341100
  if (crb(c,2)) { goto L_80341130; } // 80341104
  c->r[5]=c->r[5]+0x00000001u; // 80341108
  c->r[5]=rotl(c->r[5],4)&0xFFFFFFF0u; // 8034110C
  c->r[5]=c->r[0]+c->r[5]; // 80341110
  c->r[5]=R32(c->r[5]+0x00000014u); // 80341114
  cmps(c,0,(int32_t)c->r[5],0); // 80341118
  if (crb(c,2)) { goto L_80341128; } // 8034111C
  c->r[30]=c->r[0]+c->r[5]; // 80341120
  goto L_80341134; // 80341124
L_80341128:;
  c->r[30]=0u+0x00000000u; // 80341128
  goto L_80341134; // 8034112C
L_80341130:;
  c->r[30]=0u+0x00000000u; // 80341130
L_80341134:;
  c->r[26]=R32(c->r[30]+0x00000004u); // 80341134
  c->r[0]=0u+0x00000000u; // 80341138
  c->r[24]=R32(c->r[30]+0x00000008u); // 8034113C
  c->r[25]=c->r[30]+0x0000000Cu; // 80341140
  c->r[3]=R32(c->r[3]+0x00000000u); // 80341144
  c->r[27]=c->r[4]+0x0000000Cu; // 80341148
  W32(c->r[4]+0x00000000u,c->r[0]); // 8034114C
  c->r[28]=0u+0x00000000u; // 80341150
  {uint32_t ea=c->r[2]+0xFFFFEF68u; c->f[31]=c->ps1[31]=RF32(ea);} // 80341154
  W32(c->r[4]+0x00000004u,c->r[0]); // 80341158
  {uint32_t ea=c->r[2]+0xFFFFEF6Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 8034115C
  c->r[0]=R32(c->r[3]+0x00000020u); // 80341160
  W32(c->r[4]+0x00000008u,c->r[0]); // 80341164
  goto L_803412E8; // 80341168
L_8034116C:;
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 8034116C
  if (crb(c,2)) { goto L_803412DC; } // 80341170
  c->r[0]=R32(c->r[25]+0x00000000u); // 80341174
  c->r[29]=0u+0x00000000u; // 80341178
  c->r[25]=c->r[25]+0x00000004u; // 8034117C
  c->r[31]=R32(c->r[30]+c->r[0]); // 80341180
  c->r[23]=c->r[0]+c->r[30]; // 80341184
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 80341188
  if (!crb(c,2)) { goto L_80341200; } // 8034118C
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 80341190
  c->r[3]=c->r[23]+0x00000004u; // 80341194
  c->r[29]=0u+0x00000001u; // 80341198
  if (crb(c,2)) { goto L_803411A8; } // 8034119C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803411A0
  goto L_803411B8; // 803411A4
L_803411A8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803411A8
  c->f[1]=c->f[29]; // 803411AC
  c->r[3]=c->r[3]+c->r[0]; // 803411B0
  c->lr=0x803411B8u; f_803406BC(c); // 803411B4
L_803411B8:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 803411B8
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 803411BC
  if (crb(c,2)) { goto L_803411D0; } // 803411C0
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803411C4
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[0]);} // 803411C8
  goto L_80341208; // 803411CC
L_803411D0:;
  c->r[0]=rotl(c->r[31],0)&0x00000040u; cr0(c,c->r[0]); // 803411D0
  c->r[3]=c->r[23]+0x00000008u; // 803411D4
  c->r[29]=0u+0x00000002u; // 803411D8
  if (crb(c,2)) { goto L_803411E8; } // 803411DC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803411E0
  goto L_803411F8; // 803411E4
L_803411E8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803411E8
  c->f[1]=c->f[29]; // 803411EC
  c->r[3]=c->r[3]+c->r[0]; // 803411F0
  c->lr=0x803411F8u; f_803406BC(c); // 803411F4
L_803411F8:;
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 803411F8
  goto L_80341208; // 803411FC
L_80341200:;
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[31]);} // 80341200
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[31]);} // 80341204
L_80341208:;
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 80341208
  if (!crb(c,2)) { goto L_80341248; } // 8034120C
  c->r[0]=rotl(c->r[31],0)&0x00000080u; cr0(c,c->r[0]); // 80341210
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80341214
  c->r[29]=c->r[29]+0x00000001u; // 80341218
  c->r[3]=c->r[23]+c->r[0]; // 8034121C
  c->r[3]=c->r[3]+0x00000004u; // 80341220
  if (crb(c,2)) { goto L_80341230; } // 80341224
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341228
  goto L_80341240; // 8034122C
L_80341230:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341230
  c->f[1]=c->f[29]; // 80341234
  c->r[3]=c->r[3]+c->r[0]; // 80341238
  c->lr=0x80341240u; f_803406BC(c); // 8034123C
L_80341240:;
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 80341240
  goto L_8034124C; // 80341244
L_80341248:;
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[30]);} // 80341248
L_8034124C:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 8034124C
  if (!crb(c,2)) { goto L_803412C0; } // 80341250
  c->r[0]=rotl(c->r[31],0)&0x00000100u; cr0(c,c->r[0]); // 80341254
  c->r[21]=rotl(c->r[31],23)&0x00000001u; // 80341258
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8034125C
  c->r[29]=c->r[29]+0x00000001u; // 80341260
  c->r[3]=c->r[23]+c->r[0]; // 80341264
  c->r[3]=c->r[3]+0x00000004u; // 80341268
  if (crb(c,2)) { goto L_80341278; } // 8034126C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341270
  goto L_80341288; // 80341274
L_80341278:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341278
  c->f[1]=c->f[29]; // 8034127C
  c->r[3]=c->r[3]+c->r[0]; // 80341280
  c->lr=0x80341288u; f_803406BC(c); // 80341284
L_80341288:;
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80341288
  cmps(c,0,(int32_t)c->r[21],0); // 8034128C
  c->r[3]=c->r[23]+c->r[0]; // 80341290
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[1]);} // 80341294
  c->r[3]=c->r[3]+0x00000004u; // 80341298
  if (crb(c,2)) { goto L_803412A8; } // 8034129C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803412A0
  goto L_803412B8; // 803412A4
L_803412A8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803412A8
  c->f[1]=c->f[29]; // 803412AC
  c->r[3]=c->r[3]+c->r[0]; // 803412B0
  c->lr=0x803412B8u; f_803406BC(c); // 803412B4
L_803412B8:;
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[1]);} // 803412B8
  goto L_803412C8; // 803412BC
L_803412C0:;
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[30]);} // 803412C0
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[30]);} // 803412C4
L_803412C8:;
  c->r[0]=rotl(c->r[31],0)&0x0000000Fu; // 803412C8
  c->r[3]=R32(c->r[22]+0x00000000u); // 803412CC
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]<<((c->r[28])&31)); // 803412D0
  c->r[0]=c->r[3]|c->r[0]; // 803412D4
  W32(c->r[22]+0x00000000u,c->r[0]); // 803412D8
L_803412DC:;
  c->r[26]=rotl(c->r[26],31)&0x7FFFFFFFu; // 803412DC
  c->r[27]=c->r[27]+0x00000014u; // 803412E0
  c->r[28]=c->r[28]+0x00000004u; // 803412E4
L_803412E8:;
  cmps(c,0,(int32_t)c->r[26],0); // 803412E8
  if (!crb(c,2)) { IRQCHK(c); goto L_8034116C; } // 803412EC
  {uint32_t ea=c->r[2]+0xFFFFEF68u; c->f[30]=c->ps1[30]=RF32(ea);} // 803412F0
  c->r[26]=0u+0x00000000u; // 803412F4
  {uint32_t ea=c->r[2]+0xFFFFEF6Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 803412F8
  c->r[27]=0u+0x00000000u; // 803412FC
  goto L_8034148C; // 80341300
L_80341304:;
  c->r[0]=rotl(c->r[24],0)&0x00000001u; cr0(c,c->r[0]); // 80341304
  if (crb(c,2)) { goto L_80341480; } // 80341308
  c->r[3]=R32(c->r[25]+0x00000000u); // 8034130C
  c->r[0]=c->r[26]+0x00000008u; // 80341310
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80341314
  c->r[28]=0u+0x00000000u; // 80341318
  c->r[29]=R32(c->r[3]+c->r[30]); // 8034131C
  c->r[23]=c->r[3]+c->r[30]; // 80341320
  c->r[25]=c->r[25]+0x00000004u; // 80341324
  c->r[31]=c->r[22]+c->r[0]; // 80341328
  c->r[0]=rotl(c->r[29],0)&0x00000002u; cr0(c,c->r[0]); // 8034132C
  if (!crb(c,2)) { goto L_803413A4; } // 80341330
  c->r[0]=rotl(c->r[29],0)&0x00000020u; cr0(c,c->r[0]); // 80341334
  c->r[3]=c->r[23]+0x00000004u; // 80341338
  c->r[28]=0u+0x00000001u; // 8034133C
  if (crb(c,2)) { goto L_8034134C; } // 80341340
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341344
  goto L_8034135C; // 80341348
L_8034134C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8034134C
  c->f[1]=c->f[29]; // 80341350
  c->r[3]=c->r[3]+c->r[0]; // 80341354
  c->lr=0x8034135Cu; f_803406BC(c); // 80341358
L_8034135C:;
  c->r[0]=rotl(c->r[29],0)&0x00000010u; cr0(c,c->r[0]); // 8034135C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 80341360
  if (crb(c,2)) { goto L_80341374; } // 80341364
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80341368
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 8034136C
  goto L_803413AC; // 80341370
L_80341374:;
  c->r[0]=rotl(c->r[29],0)&0x00000040u; cr0(c,c->r[0]); // 80341374
  c->r[3]=c->r[23]+0x00000008u; // 80341378
  c->r[28]=0u+0x00000002u; // 8034137C
  if (crb(c,2)) { goto L_8034138C; } // 80341380
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341384
  goto L_8034139C; // 80341388
L_8034138C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8034138C
  c->f[1]=c->f[29]; // 80341390
  c->r[3]=c->r[3]+c->r[0]; // 80341394
  c->lr=0x8034139Cu; f_803406BC(c); // 80341398
L_8034139C:;
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[1]);} // 8034139C
  goto L_803413AC; // 803413A0
L_803413A4:;
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[30]);} // 803413A4
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[30]);} // 803413A8
L_803413AC:;
  c->r[0]=rotl(c->r[29],0)&0x00000004u; cr0(c,c->r[0]); // 803413AC
  if (!crb(c,2)) { goto L_803413EC; } // 803413B0
  c->r[0]=rotl(c->r[29],0)&0x00000080u; cr0(c,c->r[0]); // 803413B4
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 803413B8
  c->r[28]=c->r[28]+0x00000001u; // 803413BC
  c->r[3]=c->r[23]+c->r[0]; // 803413C0
  c->r[3]=c->r[3]+0x00000004u; // 803413C4
  if (crb(c,2)) { goto L_803413D4; } // 803413C8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803413CC
  goto L_803413E4; // 803413D0
L_803413D4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803413D4
  c->f[1]=c->f[29]; // 803413D8
  c->r[3]=c->r[3]+c->r[0]; // 803413DC
  c->lr=0x803413E4u; f_803406BC(c); // 803413E0
L_803413E4:;
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[1]);} // 803413E4
  goto L_803413F0; // 803413E8
L_803413EC:;
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[31]);} // 803413EC
L_803413F0:;
  c->r[0]=rotl(c->r[29],0)&0x00000008u; cr0(c,c->r[0]); // 803413F0
  if (!crb(c,2)) { goto L_80341464; } // 803413F4
  c->r[0]=rotl(c->r[29],0)&0x00000100u; cr0(c,c->r[0]); // 803413F8
  c->r[21]=rotl(c->r[29],23)&0x00000001u; // 803413FC
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80341400
  c->r[28]=c->r[28]+0x00000001u; // 80341404
  c->r[3]=c->r[23]+c->r[0]; // 80341408
  c->r[3]=c->r[3]+0x00000004u; // 8034140C
  if (crb(c,2)) { goto L_8034141C; } // 80341410
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341414
  goto L_8034142C; // 80341418
L_8034141C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8034141C
  c->f[1]=c->f[29]; // 80341420
  c->r[3]=c->r[3]+c->r[0]; // 80341424
  c->lr=0x8034142Cu; f_803406BC(c); // 80341428
L_8034142C:;
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8034142C
  cmps(c,0,(int32_t)c->r[21],0); // 80341430
  c->r[3]=c->r[23]+c->r[0]; // 80341434
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 80341438
  c->r[3]=c->r[3]+0x00000004u; // 8034143C
  if (crb(c,2)) { goto L_8034144C; } // 80341440
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341444
  goto L_8034145C; // 80341448
L_8034144C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8034144C
  c->f[1]=c->f[29]; // 80341450
  c->r[3]=c->r[3]+c->r[0]; // 80341454
  c->lr=0x8034145Cu; f_803406BC(c); // 80341458
L_8034145C:;
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 8034145C
  goto L_8034146C; // 80341460
L_80341464:;
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[31]);} // 80341464
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[31]);} // 80341468
L_8034146C:;
  c->r[0]=rotl(c->r[29],0)&0x0000000Fu; // 8034146C
  c->r[3]=R32(c->r[22]+0x00000004u); // 80341470
  c->r[0]=((c->r[27])&0x20)?0u:(c->r[0]<<((c->r[27])&31)); // 80341474
  c->r[0]=c->r[3]|c->r[0]; // 80341478
  W32(c->r[22]+0x00000004u,c->r[0]); // 8034147C
L_80341480:;
  c->r[24]=rotl(c->r[24],31)&0x7FFFFFFFu; // 80341480
  c->r[27]=c->r[27]+0x00000004u; // 80341484
  c->r[26]=c->r[26]+0x00000001u; // 80341488
L_8034148C:;
  cmps(c,0,(int32_t)c->r[24],0); // 8034148C
  if (!crb(c,2)) { IRQCHK(c); goto L_80341304; } // 80341490
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80341494
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 80341498
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 8034149C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 803414A0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 803414A4
  c->r[11]=c->r[1]+0x00000040u; // 803414A8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 803414AC
  c->lr=0x803414B4u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803414B0
  c->r[0]=R32(c->r[1]+0x00000074u); // 803414B4
  c->lr=c->r[0]; // 803414B8
  c->r[1]=c->r[1]+0x00000070u; // 803414BC
  return; // 803414C0
}

// GetAnmScale__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r4math4VEC3PCQ34nw4r3g3d17ResAnmChrNodeDataPCQ44nw4r3g3d17ResAnmChrNodeData7AnmDataf
void f_803414C4(Ctx* __restrict c) {
  trace_call(0x803414C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803414C4
  c->r[0]=c->lr; // 803414C8
  W32(c->r[1]+0x00000054u,c->r[0]); // 803414CC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 803414D0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 803414D4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 803414D8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 803414DC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 803414E0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 803414E4
  c->r[0]=0u+0x04000000u; // 803414E8
  c->f[29]=c->f[1]; // 803414EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803414F0
  c->r[31]=R32(c->r[4]+0x00000004u); // 803414F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803414F8
  c->r[30]=c->r[5]|c->r[5]; // 803414FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80341500
  c->r[29]=c->r[4]|c->r[4]; // 80341504
  W32(c->r[1]+0x00000010u,c->r[28]); // 80341508
  c->r[28]=c->r[3]|c->r[3]; // 8034150C
  c->r[3]=rotl(c->r[31],0)&0x06000000u; // 80341510
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80341514
  if (crb(c,2)) { goto L_80341608; } // 80341518
  if (!crb(c,0)) { goto L_8034153C; } // 8034151C
  c->r[0]=0u+0x02000000u; // 80341520
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80341524
  if (crb(c,2)) { goto L_80341578; } // 80341528
  if (!crb(c,0)) { goto L_80341728; } // 8034152C
  cmps(c,0,(int32_t)c->r[3],0); // 80341530
  if (crb(c,2)) { goto L_8034154C; } // 80341534
  goto L_80341728; // 80341538
L_8034153C:;
  c->r[0]=0u+0x06000000u; // 8034153C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80341540
  if (crb(c,2)) { goto L_80341698; } // 80341544
  goto L_80341728; // 80341548
L_8034154C:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 8034154C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 80341550
  c->r[30]=c->r[5]+0x00000004u; // 80341554
  if (crb(c,2)) { goto L_80341568; } // 80341558
  c->f[30]=c->f[31]; // 8034155C
  c->f[1]=c->f[31]; // 80341560
  goto L_80341734; // 80341564
L_80341568:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 80341568
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034156C
  c->r[30]=c->r[30]+0x00000008u; // 80341570
  goto L_80341734; // 80341574
L_80341578:;
  c->r[0]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[0]); // 80341578
  c->r[3]=c->r[30]|c->r[30]; // 8034157C
  c->r[30]=c->r[5]+0x00000004u; // 80341580
  if (crb(c,2)) { goto L_80341590; } // 80341584
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341588
  goto L_8034159C; // 8034158C
L_80341590:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341590
  c->r[3]=c->r[0]+c->r[4]; // 80341594
  c->lr=0x8034159Cu; f_80341A18(c); // 80341598
L_8034159C:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 8034159C
  c->f[31]=c->f[1]; // 803415A0
  if (crb(c,2)) { goto L_803415B0; } // 803415A4
  c->f[30]=c->f[1]; // 803415A8
  goto L_80341734; // 803415AC
L_803415B0:;
  c->r[0]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[0]); // 803415B0
  c->r[3]=c->r[30]|c->r[30]; // 803415B4
  c->r[30]=c->r[30]+0x00000004u; // 803415B8
  if (crb(c,2)) { goto L_803415C8; } // 803415BC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803415C0
  goto L_803415D8; // 803415C4
L_803415C8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803415C8
  c->f[1]=c->f[29]; // 803415CC
  c->r[3]=c->r[0]+c->r[29]; // 803415D0
  c->lr=0x803415D8u; f_80341A18(c); // 803415D4
L_803415D8:;
  c->r[0]=rotl(c->r[31],0)&0x00008000u; cr0(c,c->r[0]); // 803415D8
  c->f[30]=c->f[1]; // 803415DC
  c->r[3]=c->r[30]|c->r[30]; // 803415E0
  c->r[30]=c->r[30]+0x00000004u; // 803415E4
  if (crb(c,2)) { goto L_803415F4; } // 803415E8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803415EC
  goto L_80341734; // 803415F0
L_803415F4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803415F4
  c->f[1]=c->f[29]; // 803415F8
  c->r[3]=c->r[0]+c->r[29]; // 803415FC
  c->lr=0x80341604u; f_80341A18(c); // 80341600
  goto L_80341734; // 80341604
L_80341608:;
  c->r[0]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[0]); // 80341608
  c->r[3]=c->r[30]|c->r[30]; // 8034160C
  c->r[30]=c->r[5]+0x00000004u; // 80341610
  if (crb(c,2)) { goto L_80341620; } // 80341614
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341618
  goto L_8034162C; // 8034161C
L_80341620:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341620
  c->r[3]=c->r[0]+c->r[4]; // 80341624
  c->lr=0x8034162Cu; f_803418A8(c); // 80341628
L_8034162C:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 8034162C
  c->f[31]=c->f[1]; // 80341630
  if (crb(c,2)) { goto L_80341640; } // 80341634
  c->f[30]=c->f[1]; // 80341638
  goto L_80341734; // 8034163C
L_80341640:;
  c->r[0]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[0]); // 80341640
  c->r[3]=c->r[30]|c->r[30]; // 80341644
  c->r[30]=c->r[30]+0x00000004u; // 80341648
  if (crb(c,2)) { goto L_80341658; } // 8034164C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341650
  goto L_80341668; // 80341654
L_80341658:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341658
  c->f[1]=c->f[29]; // 8034165C
  c->r[3]=c->r[0]+c->r[29]; // 80341660
  c->lr=0x80341668u; f_803418A8(c); // 80341664
L_80341668:;
  c->r[0]=rotl(c->r[31],0)&0x00008000u; cr0(c,c->r[0]); // 80341668
  c->f[30]=c->f[1]; // 8034166C
  c->r[3]=c->r[30]|c->r[30]; // 80341670
  c->r[30]=c->r[30]+0x00000004u; // 80341674
  if (crb(c,2)) { goto L_80341684; } // 80341678
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034167C
  goto L_80341734; // 80341680
L_80341684:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341684
  c->f[1]=c->f[29]; // 80341688
  c->r[3]=c->r[0]+c->r[29]; // 8034168C
  c->lr=0x80341694u; f_803418A8(c); // 80341690
  goto L_80341734; // 80341694
L_80341698:;
  c->r[0]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[0]); // 80341698
  c->r[3]=c->r[30]|c->r[30]; // 8034169C
  c->r[30]=c->r[5]+0x00000004u; // 803416A0
  if (crb(c,2)) { goto L_803416B0; } // 803416A4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803416A8
  goto L_803416BC; // 803416AC
L_803416B0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803416B0
  c->r[3]=c->r[0]+c->r[4]; // 803416B4
  c->lr=0x803416BCu; f_8034177C(c); // 803416B8
L_803416BC:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 803416BC
  c->f[31]=c->f[1]; // 803416C0
  if (crb(c,2)) { goto L_803416D0; } // 803416C4
  c->f[30]=c->f[1]; // 803416C8
  goto L_80341734; // 803416CC
L_803416D0:;
  c->r[0]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[0]); // 803416D0
  c->r[3]=c->r[30]|c->r[30]; // 803416D4
  c->r[30]=c->r[30]+0x00000004u; // 803416D8
  if (crb(c,2)) { goto L_803416E8; } // 803416DC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803416E0
  goto L_803416F8; // 803416E4
L_803416E8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803416E8
  c->f[1]=c->f[29]; // 803416EC
  c->r[3]=c->r[0]+c->r[29]; // 803416F0
  c->lr=0x803416F8u; f_8034177C(c); // 803416F4
L_803416F8:;
  c->r[0]=rotl(c->r[31],0)&0x00008000u; cr0(c,c->r[0]); // 803416F8
  c->f[30]=c->f[1]; // 803416FC
  c->r[3]=c->r[30]|c->r[30]; // 80341700
  c->r[30]=c->r[30]+0x00000004u; // 80341704
  if (crb(c,2)) { goto L_80341714; } // 80341708
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034170C
  goto L_80341734; // 80341710
L_80341714:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341714
  c->f[1]=c->f[29]; // 80341718
  c->r[3]=c->r[0]+c->r[29]; // 8034171C
  c->lr=0x80341724u; f_8034177C(c); // 80341720
  goto L_80341734; // 80341724
L_80341728:;
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[31]=c->ps1[31]=RF32(ea);} // 80341728
  c->f[30]=c->f[31]; // 8034172C
  c->f[1]=c->f[31]; // 80341730
L_80341734:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[31]);} // 80341734
  c->r[3]=c->r[30]|c->r[30]; // 80341738
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[30]);} // 8034173C
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 80341740
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80341744
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80341748
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8034174C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80341750
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 80341754
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 80341758
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034175C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80341760
  c->r[29]=R32(c->r[1]+0x00000014u); // 80341764
  c->r[28]=R32(c->r[1]+0x00000010u); // 80341768
  c->r[0]=R32(c->r[1]+0x00000054u); // 8034176C
  c->lr=c->r[0]; // 80341770
  c->r[1]=c->r[1]+0x00000050u; // 80341774
  return; // 80341778
}

// CalcAnimationFVS<Q44nw4r3g3d27@unnamed@g3d_resanmchr_cpp@46CAnmFmtTraits<Q34nw4r3g3d18ResAnmChrFVS96Data>>__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPCQ34nw4r3g3d16ResAnmChrFVSDataf_f
void f_8034177C(Ctx* __restrict c) {
  trace_call(0x8034177Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034177C
  c->r[5]=c->r[3]+0x00000008u; // 80341780
  c->r[6]=R16(c->r[3]+0x00000000u); // 80341784
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80341788
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 8034178C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80341790
  fcmp(c,0,c->f[1],c->f[0]); // 80341794
  c->r[4]=c->r[3]+c->r[0]; // 80341798
  c->r[4]=c->r[4]+0x00000008u; // 8034179C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803417A0
  if (!crb(c,2)) { goto L_803417B0; } // 803417A4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803417A8
  goto L_803418A0; // 803417AC
L_803417B0:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803417B0
  fcmp(c,0,c->f[0],c->f[1]); // 803417B4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803417B8
  if (!crb(c,2)) { goto L_803417C8; } // 803417BC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803417C0
  goto L_803418A0; // 803417C4
L_803417C8:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803417C8
  W16(c->r[1]+0x00000008u,c->r[6]); // 803417CC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 803417D0
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,1,3);} // 803417D4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803417D8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 803417DC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803417E0
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 803417E4
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 803417E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 803417EC
  c->r[3]=c->r[3]+c->r[0]; // 803417F0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803417F4
  c->r[4]=c->r[3]+0x00000008u; // 803417F8
  fcmp(c,0,c->f[1],c->f[0]); // 803417FC
  if (!crb(c,0)) { goto L_80341814; } // 80341800
L_80341804:;
  {uint32_t ea=c->r[4]+0xFFFFFFF4u; c->f[0]=c->ps1[0]=RF32(ea); c->r[4]=ea;} // 80341804
  fcmp(c,0,c->f[1],c->f[0]); // 80341808
  if (crb(c,0)) { IRQCHK(c); goto L_80341804; } // 8034180C
  goto L_80341828; // 80341810
L_80341814:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea); c->r[4]=ea;} // 80341814
  fcmp(c,0,c->f[0],c->f[1]); // 80341818
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8034181C
  if (crb(c,2)) { IRQCHK(c); goto L_80341814; } // 80341820
  c->r[4]=c->r[4]+0xFFFFFFF4u; // 80341824
L_80341828:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80341828
  fcmp(c,0,c->f[1],c->f[0]); // 8034182C
  if (!crb(c,2)) { goto L_8034183C; } // 80341830
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341834
  goto L_803418A0; // 80341838
L_8034183C:;
  c->f[10]=c->ps1[10]=S(c->f[1]-c->f[0]); // 8034183C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80341840
  {uint32_t ea=c->r[4]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 80341844
  c->f[11]=c->ps1[11]=S(c->f[1]-c->f[0]); // 80341848
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034184C
  {uint32_t ea=c->r[2]+0xFFFFEF78u; c->f[2]=c->ps1[2]=RF32(ea);} // 80341850
  {uint32_t ea=c->r[2]+0xFFFFEF7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80341854
  c->f[0]=c->ps1[0]=S(c->f[7]-c->f[0]); // 80341858
  c->f[6]=c->ps1[6]=fres(c->f[11]); // 8034185C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[9]=c->ps1[9]=RF32(ea);} // 80341860
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[4]=c->ps1[4]=RF32(ea);} // 80341864
  {uint32_t ea=c->r[4]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 80341868
  {double t0=S(c->f[6]+c->f[6]), t1=S(c->ps1[6]+c->ps1[6]); c->f[5]=t0; c->ps1[5]=t1;} // 8034186C
  {double t0=S(c->f[6]*c->f[6]), t1=S(c->ps1[6]*c->ps1[6]); c->f[3]=t0; c->ps1[3]=t1;} // 80341870
  {double t0=S(-std::fma(c->f[11],c->f[3],-c->f[5])), t1=S(-std::fma(c->ps1[11],c->ps1[3],-c->ps1[5])); c->f[6]=t0; c->ps1[6]=t1;} // 80341874
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[6]); // 80341878
  c->f[5]=c->ps1[5]=S(std::fma(c->f[10],c->f[6],-c->f[4])); // 8034187C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],-c->f[1])); // 80341880
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[9]); // 80341884
  c->f[4]=c->ps1[4]=S(c->f[10]*c->f[5]); // 80341888
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8034188C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[5],c->f[8],c->f[2])); // 80341890
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80341894
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[7])); // 80341898
  c->f[1]=c->ps1[1]=S(std::fma(c->f[4],c->f[1],c->f[0])); // 8034189C
L_803418A0:;
  c->r[1]=c->r[1]+0x00000010u; // 803418A0
  return; // 803418A4
}

// CalcAnimationFVS<Q44nw4r3g3d27@unnamed@g3d_resanmchr_cpp@46CAnmFmtTraits<Q34nw4r3g3d18ResAnmChrFVS48Data>>__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPCQ34nw4r3g3d16ResAnmChrFVSDataf_f
void f_803418A8(Ctx* __restrict c) {
  trace_call(0x803418A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803418A8
  c->r[5]=c->r[3]+0x00000010u; // 803418AC
  c->r[6]=R16(c->r[3]+0x00000000u); // 803418B0
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 803418B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 803418B8
  c->r[4]=c->r[3]+c->r[0]; // 803418BC
  c->r[4]=c->r[4]+0x00000010u; // 803418C0
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,6);} // 803418C4
  fcmp(c,0,c->f[1],c->f[0]); // 803418C8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803418CC
  if (!crb(c,2)) { goto L_803418E8; } // 803418D0
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,2,ea,1,3);} // 803418D4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803418D8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803418DC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 803418E0
  goto L_80341A10; // 803418E4
L_803418E8:;
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,1,6);} // 803418E8
  fcmp(c,0,c->f[0],c->f[1]); // 803418EC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803418F0
  if (!crb(c,2)) { goto L_8034190C; } // 803418F4
  {uint32_t ea=c->r[4]+0x00000002u; psq_load(c,2,ea,1,3);} // 803418F8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803418FC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80341900
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80341904
  goto L_80341A10; // 80341908
L_8034190C:;
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,6);} // 8034190C
  W16(c->r[1]+0x0000000Au,c->r[6]); // 80341910
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80341914
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,2,ea,1,3);} // 80341918
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034191C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80341920
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80341924
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 80341928
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 8034192C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 80341930
  c->r[4]=c->r[3]+c->r[0]; // 80341934
  c->r[5]=c->r[4]+0x00000010u; // 80341938
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,1,ea,1,6);} // 8034193C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 80341940
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000000u); // 80341944
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 80341948
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8034194C
  if (!crb(c,0)) { goto L_80341964; } // 80341950
L_80341954:;
  {uint32_t ea=c->r[5]+0xFFFFFFFAu; c->r[0]=(uint32_t)(int32_t)(int16_t)R16(ea); c->r[5]=ea;} // 80341954
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80341958
  if (crb(c,0)) { IRQCHK(c); goto L_80341954; } // 8034195C
  goto L_80341974; // 80341960
L_80341964:;
  {uint32_t ea=c->r[5]+0x00000006u; c->r[0]=(uint32_t)(int32_t)(int16_t)R16(ea); c->r[5]=ea;} // 80341964
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 80341968
  if (!crb(c,1)) { IRQCHK(c); goto L_80341964; } // 8034196C
  c->r[5]=c->r[5]+0xFFFFFFFAu; // 80341970
L_80341974:;
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,6);} // 80341974
  fcmp(c,0,c->f[1],c->f[0]); // 80341978
  if (!crb(c,2)) { goto L_80341994; } // 8034197C
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,2,ea,1,3);} // 80341980
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341984
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80341988
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 8034198C
  goto L_80341A10; // 80341990
L_80341994:;
  c->r[4]=c->r[5]+0x00000006u; // 80341994
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,3,ea,1,3);} // 80341998
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8034199C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803419A0
  c->f[5]=c->ps1[5]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 803419A4
  {uint32_t ea=c->r[5]+0x00000004u; psq_load(c,6,ea,1,7);} // 803419A8
  {uint32_t ea=c->r[4]+0x00000002u; psq_load(c,3,ea,1,3);} // 803419AC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 803419B0
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,7,ea,1,7);} // 803419B4
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,3,ea,1,6);} // 803419B8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,1,6);} // 803419BC
  c->f[10]=c->ps1[10]=S(c->f[1]-c->f[3]); // 803419C0
  {uint32_t ea=c->r[2]+0xFFFFEF78u; c->f[2]=c->ps1[2]=RF32(ea);} // 803419C4
  c->f[11]=c->ps1[11]=S(c->f[4]-c->f[3]); // 803419C8
  {uint32_t ea=c->r[2]+0xFFFFEF7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803419CC
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[0]); // 803419D0
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[4]=c->ps1[4]=RF32(ea);} // 803419D4
  c->f[9]=c->ps1[9]=fres(c->f[11]); // 803419D8
  {double t0=S(c->f[9]+c->f[9]), t1=S(c->ps1[9]+c->ps1[9]); c->f[8]=t0; c->ps1[8]=t1;} // 803419DC
  {double t0=S(c->f[9]*c->f[9]), t1=S(c->ps1[9]*c->ps1[9]); c->f[3]=t0; c->ps1[3]=t1;} // 803419E0
  {double t0=S(-std::fma(c->f[11],c->f[3],-c->f[8])), t1=S(-std::fma(c->ps1[11],c->ps1[3],-c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 803419E4
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[9]); // 803419E8
  c->f[8]=c->ps1[8]=S(std::fma(c->f[10],c->f[9],-c->f[4])); // 803419EC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],-c->f[1])); // 803419F0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[7]); // 803419F4
  c->f[4]=c->ps1[4]=S(c->f[10]*c->f[8]); // 803419F8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803419FC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[8],c->f[6],c->f[2])); // 80341A00
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80341A04
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[5])); // 80341A08
  c->f[1]=c->ps1[1]=S(std::fma(c->f[4],c->f[1],c->f[0])); // 80341A0C
L_80341A10:;
  c->r[1]=c->r[1]+0x00000010u; // 80341A10
  return; // 80341A14
}

// CalcAnimationFVS<Q44nw4r3g3d27@unnamed@g3d_resanmchr_cpp@46CAnmFmtTraits<Q34nw4r3g3d18ResAnmChrFVS32Data>>__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPCQ34nw4r3g3d16ResAnmChrFVSDataf_f
void f_80341A18(Ctx* __restrict c) {
  trace_call(0x80341A18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80341A18
  c->r[5]=c->r[3]+0x00000010u; // 80341A1C
  c->r[6]=R16(c->r[3]+0x00000000u); // 80341A20
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 80341A24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80341A28
  c->r[4]=c->r[3]+c->r[0]; // 80341A2C
  c->r[4]=c->r[4]+0x00000010u; // 80341A30
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,2);} // 80341A34
  fcmp(c,0,c->f[1],c->f[0]); // 80341A38
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80341A3C
  if (!crb(c,2)) { goto L_80341A64; } // 80341A40
  c->r[0]=R32(c->r[5]+0x00000000u); // 80341A44
  c->r[0]=rotl(c->r[0],20)&0x00000FFFu; // 80341A48
  W16(c->r[1]+0x00000016u,c->r[0]); // 80341A4C
  {uint32_t ea=c->r[1]+0x00000016u; psq_load(c,2,ea,1,3);} // 80341A50
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341A54
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80341A58
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80341A5C
  goto L_80341BD0; // 80341A60
L_80341A64:;
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,1,2);} // 80341A64
  fcmp(c,0,c->f[0],c->f[1]); // 80341A68
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80341A6C
  if (!crb(c,2)) { goto L_80341A94; } // 80341A70
  c->r[0]=R32(c->r[4]+0x00000000u); // 80341A74
  c->r[0]=rotl(c->r[0],20)&0x00000FFFu; // 80341A78
  W16(c->r[1]+0x00000014u,c->r[0]); // 80341A7C
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,2,ea,1,3);} // 80341A80
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341A84
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80341A88
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80341A8C
  goto L_80341BD0; // 80341A90
L_80341A94:;
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,2);} // 80341A94
  W16(c->r[1]+0x00000012u,c->r[6]); // 80341A98
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80341A9C
  {uint32_t ea=c->r[1]+0x00000012u; psq_load(c,2,ea,1,3);} // 80341AA0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80341AA4
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80341AA8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80341AAC
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,0,ea,1,3);} // 80341AB0
  c->r[0]=R16(c->r[1]+0x0000001Cu); // 80341AB4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80341AB8
  c->r[4]=c->r[3]+c->r[0]; // 80341ABC
  c->r[6]=c->r[4]+0x00000010u; // 80341AC0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,1,ea,1,2);} // 80341AC4
  c->r[4]=R8(c->r[1]+0x00000018u); // 80341AC8
  c->r[0]=R8(c->r[6]+0x00000000u); // 80341ACC
  cmpu(c,0,c->r[4],c->r[0]); // 80341AD0
  if (!crb(c,0)) { goto L_80341AE8; } // 80341AD4
L_80341AD8:;
  {uint32_t ea=c->r[6]+0xFFFFFFFCu; c->r[0]=R8(ea); c->r[6]=ea;} // 80341AD8
  cmpu(c,0,c->r[4],c->r[0]); // 80341ADC
  if (crb(c,0)) { IRQCHK(c); goto L_80341AD8; } // 80341AE0
  goto L_80341AF8; // 80341AE4
L_80341AE8:;
  {uint32_t ea=c->r[6]+0x00000004u; c->r[0]=R8(ea); c->r[6]=ea;} // 80341AE8
  cmpu(c,0,c->r[0],c->r[4]); // 80341AEC
  if (!crb(c,1)) { IRQCHK(c); goto L_80341AE8; } // 80341AF0
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 80341AF4
L_80341AF8:;
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,1,2);} // 80341AF8
  fcmp(c,0,c->f[1],c->f[0]); // 80341AFC
  if (!crb(c,2)) { goto L_80341B24; } // 80341B00
  c->r[0]=R32(c->r[6]+0x00000000u); // 80341B04
  c->r[0]=rotl(c->r[0],20)&0x00000FFFu; // 80341B08
  W16(c->r[1]+0x00000010u,c->r[0]); // 80341B0C
  {uint32_t ea=c->r[1]+0x00000010u; psq_load(c,2,ea,1,3);} // 80341B10
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341B14
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80341B18
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80341B1C
  goto L_80341BD0; // 80341B20
L_80341B24:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 80341B24
  c->r[5]=c->r[6]+0x00000004u; // 80341B28
  c->r[0]=rotl(c->r[4],20)&0x00000FFFu; // 80341B2C
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 80341B30
  {uint32_t ea=c->r[1]+0x0000000Eu; psq_load(c,3,ea,1,3);} // 80341B34
  c->r[0]=rotl(c->r[4],20)&0xFFF00000u; // 80341B38
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80341B3C
  c->r[0]=sraw(c,c->r[0],20); // 80341B40
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80341B44
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 80341B48
  c->f[5]=c->ps1[5]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 80341B4C
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_load(c,6,ea,1,6);} // 80341B50
  c->r[3]=R32(c->r[6]+0x00000004u); // 80341B54
  c->r[0]=rotl(c->r[3],20)&0x00000FFFu; // 80341B58
  W16(c->r[1]+0x0000000Au,c->r[0]); // 80341B5C
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,3,ea,1,3);} // 80341B60
  c->r[0]=rotl(c->r[3],20)&0xFFF00000u; // 80341B64
  c->r[0]=sraw(c,c->r[0],20); // 80341B68
  W16(c->r[1]+0x00000008u,c->r[0]); // 80341B6C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 80341B70
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,7,ea,1,6);} // 80341B74
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,1,2);} // 80341B78
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,4,ea,1,2);} // 80341B7C
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[0]); // 80341B80
  c->f[10]=c->ps1[10]=S(c->f[1]-c->f[3]); // 80341B84
  {uint32_t ea=c->r[2]+0xFFFFEF78u; c->f[2]=c->ps1[2]=RF32(ea);} // 80341B88
  c->f[11]=c->ps1[11]=S(c->f[4]-c->f[3]); // 80341B8C
  {uint32_t ea=c->r[2]+0xFFFFEF7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80341B90
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[4]=c->ps1[4]=RF32(ea);} // 80341B94
  c->f[9]=c->ps1[9]=fres(c->f[11]); // 80341B98
  {double t0=S(c->f[9]+c->f[9]), t1=S(c->ps1[9]+c->ps1[9]); c->f[8]=t0; c->ps1[8]=t1;} // 80341B9C
  {double t0=S(c->f[9]*c->f[9]), t1=S(c->ps1[9]*c->ps1[9]); c->f[3]=t0; c->ps1[3]=t1;} // 80341BA0
  {double t0=S(-std::fma(c->f[11],c->f[3],-c->f[8])), t1=S(-std::fma(c->ps1[11],c->ps1[3],-c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 80341BA4
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[9]); // 80341BA8
  c->f[8]=c->ps1[8]=S(std::fma(c->f[10],c->f[9],-c->f[4])); // 80341BAC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],-c->f[1])); // 80341BB0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[7]); // 80341BB4
  c->f[4]=c->ps1[4]=S(c->f[10]*c->f[8]); // 80341BB8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80341BBC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[8],c->f[6],c->f[2])); // 80341BC0
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80341BC4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[5])); // 80341BC8
  c->f[1]=c->ps1[1]=S(std::fma(c->f[4],c->f[1],c->f[0])); // 80341BCC
L_80341BD0:;
  c->r[1]=c->r[1]+0x00000020u; // 80341BD0
  return; // 80341BD4
}

// GetAnmRotation__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3RCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataPCQ44nw4r3g3d17ResAnmChrNodeData7AnmDataf
void f_80341BD8(Ctx* __restrict c) {
  trace_call(0x80341BD8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80341BD8
  c->r[0]=c->lr; // 80341BDC
  W32(c->r[1]+0x00000094u,c->r[0]); // 80341BE0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 80341BE4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 80341BE8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 80341BEC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 80341BF0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 80341BF4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 80341BF8
  c->r[11]=c->r[1]+0x00000060u; // 80341BFC
  c->lr=0x80341C04u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80341C00
  c->r[31]=R32(c->r[6]+0x00000004u); // 80341C04
  c->r[9]=0u+0x43300000u; // 80341C08
  c->r[0]=0u+0x18000000u; // 80341C0C
  c->f[29]=c->f[1]; // 80341C10
  c->r[8]=rotl(c->r[31],0)&0x38000000u; // 80341C14
  W32(c->r[1]+0x00000030u,c->r[9]); // 80341C18
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80341C1C
  c->r[27]=c->r[3]|c->r[3]; // 80341C20
  W32(c->r[1]+0x00000038u,c->r[9]); // 80341C24
  c->r[28]=c->r[4]|c->r[4]; // 80341C28
  c->r[29]=c->r[6]|c->r[6]; // 80341C2C
  c->r[30]=c->r[7]|c->r[7]; // 80341C30
  if (crb(c,2)) { goto L_80341DB4; } // 80341C34
  if (!crb(c,0)) { goto L_80341C68; } // 80341C38
  c->r[0]=0u+0x08000000u; // 80341C3C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80341C40
  if (crb(c,2)) { goto L_80341CAC; } // 80341C44
  if (!crb(c,0)) { goto L_80341C58; } // 80341C48
  cmps(c,0,(int32_t)c->r[8],0); // 80341C4C
  if (crb(c,2)) { goto L_80341C98; } // 80341C50
  goto L_803425D0; // 80341C54
L_80341C58:;
  c->r[0]=0u+0x10000000u; // 80341C58
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80341C5C
  if (crb(c,2)) { goto L_80341D30; } // 80341C60
  goto L_803425D0; // 80341C64
L_80341C68:;
  c->r[0]=0u+0x28000000u; // 80341C68
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80341C6C
  if (crb(c,2)) { goto L_8034211C; } // 80341C70
  if (!crb(c,0)) { goto L_80341C88; } // 80341C74
  c->r[0]=0u+0x20000000u; // 80341C78
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80341C7C
  if (crb(c,2)) { goto L_80341E38; } // 80341C80
  goto L_803425D0; // 80341C84
L_80341C88:;
  c->r[0]=0u+0x30000000u; // 80341C88
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80341C8C
  if (crb(c,2)) { goto L_80342418; } // 80341C90
  goto L_803425D0; // 80341C94
L_80341C98:;
  {uint32_t ea=c->r[7]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 80341C98
  c->r[30]=c->r[7]+0x0000000Cu; // 80341C9C
  {uint32_t ea=c->r[7]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 80341CA0
  {uint32_t ea=c->r[7]+0x00000008u; c->f[29]=c->ps1[29]=RF32(ea);} // 80341CA4
  goto L_803425DC; // 80341CA8
L_80341CAC:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 80341CAC
  c->r[3]=c->r[30]|c->r[30]; // 80341CB0
  c->r[30]=c->r[7]+0x00000004u; // 80341CB4
  if (crb(c,2)) { goto L_80341CC4; } // 80341CB8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341CBC
  goto L_80341CD0; // 80341CC0
L_80341CC4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341CC4
  c->r[3]=c->r[0]+c->r[6]; // 80341CC8
  c->lr=0x80341CD0u; f_80341A18(c); // 80341CCC
L_80341CD0:;
  c->r[0]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[0]); // 80341CD0
  c->f[31]=c->f[1]; // 80341CD4
  c->r[3]=c->r[30]|c->r[30]; // 80341CD8
  c->r[30]=c->r[30]+0x00000004u; // 80341CDC
  if (crb(c,2)) { goto L_80341CEC; } // 80341CE0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341CE4
  goto L_80341CFC; // 80341CE8
L_80341CEC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341CEC
  c->f[1]=c->f[29]; // 80341CF0
  c->r[3]=c->r[0]+c->r[29]; // 80341CF4
  c->lr=0x80341CFCu; f_80341A18(c); // 80341CF8
L_80341CFC:;
  c->r[0]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[0]); // 80341CFC
  c->f[30]=c->f[1]; // 80341D00
  c->r[3]=c->r[30]|c->r[30]; // 80341D04
  c->r[30]=c->r[30]+0x00000004u; // 80341D08
  if (crb(c,2)) { goto L_80341D18; } // 80341D0C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341D10
  goto L_80341D28; // 80341D14
L_80341D18:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341D18
  c->f[1]=c->f[29]; // 80341D1C
  c->r[3]=c->r[0]+c->r[29]; // 80341D20
  c->lr=0x80341D28u; f_80341A18(c); // 80341D24
L_80341D28:;
  c->f[29]=c->f[1]; // 80341D28
  goto L_803425DC; // 80341D2C
L_80341D30:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 80341D30
  c->r[3]=c->r[30]|c->r[30]; // 80341D34
  c->r[30]=c->r[7]+0x00000004u; // 80341D38
  if (crb(c,2)) { goto L_80341D48; } // 80341D3C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341D40
  goto L_80341D54; // 80341D44
L_80341D48:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341D48
  c->r[3]=c->r[0]+c->r[6]; // 80341D4C
  c->lr=0x80341D54u; f_803418A8(c); // 80341D50
L_80341D54:;
  c->r[0]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[0]); // 80341D54
  c->f[31]=c->f[1]; // 80341D58
  c->r[3]=c->r[30]|c->r[30]; // 80341D5C
  c->r[30]=c->r[30]+0x00000004u; // 80341D60
  if (crb(c,2)) { goto L_80341D70; } // 80341D64
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341D68
  goto L_80341D80; // 80341D6C
L_80341D70:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341D70
  c->f[1]=c->f[29]; // 80341D74
  c->r[3]=c->r[0]+c->r[29]; // 80341D78
  c->lr=0x80341D80u; f_803418A8(c); // 80341D7C
L_80341D80:;
  c->r[0]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[0]); // 80341D80
  c->f[30]=c->f[1]; // 80341D84
  c->r[3]=c->r[30]|c->r[30]; // 80341D88
  c->r[30]=c->r[30]+0x00000004u; // 80341D8C
  if (crb(c,2)) { goto L_80341D9C; } // 80341D90
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341D94
  goto L_80341DAC; // 80341D98
L_80341D9C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341D9C
  c->f[1]=c->f[29]; // 80341DA0
  c->r[3]=c->r[0]+c->r[29]; // 80341DA4
  c->lr=0x80341DACu; f_803418A8(c); // 80341DA8
L_80341DAC:;
  c->f[29]=c->f[1]; // 80341DAC
  goto L_803425DC; // 80341DB0
L_80341DB4:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 80341DB4
  c->r[3]=c->r[30]|c->r[30]; // 80341DB8
  c->r[30]=c->r[7]+0x00000004u; // 80341DBC
  if (crb(c,2)) { goto L_80341DCC; } // 80341DC0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341DC4
  goto L_80341DD8; // 80341DC8
L_80341DCC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341DCC
  c->r[3]=c->r[0]+c->r[6]; // 80341DD0
  c->lr=0x80341DD8u; f_8034177C(c); // 80341DD4
L_80341DD8:;
  c->r[0]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[0]); // 80341DD8
  c->f[31]=c->f[1]; // 80341DDC
  c->r[3]=c->r[30]|c->r[30]; // 80341DE0
  c->r[30]=c->r[30]+0x00000004u; // 80341DE4
  if (crb(c,2)) { goto L_80341DF4; } // 80341DE8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341DEC
  goto L_80341E04; // 80341DF0
L_80341DF4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341DF4
  c->f[1]=c->f[29]; // 80341DF8
  c->r[3]=c->r[0]+c->r[29]; // 80341DFC
  c->lr=0x80341E04u; f_8034177C(c); // 80341E00
L_80341E04:;
  c->r[0]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[0]); // 80341E04
  c->f[30]=c->f[1]; // 80341E08
  c->r[3]=c->r[30]|c->r[30]; // 80341E0C
  c->r[30]=c->r[30]+0x00000004u; // 80341E10
  if (crb(c,2)) { goto L_80341E20; } // 80341E14
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80341E18
  goto L_80341E30; // 80341E1C
L_80341E20:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80341E20
  c->f[1]=c->f[29]; // 80341E24
  c->r[3]=c->r[0]+c->r[29]; // 80341E28
  c->lr=0x80341E30u; f_8034177C(c); // 80341E2C
L_80341E30:;
  c->f[29]=c->f[1]; // 80341E30
  goto L_803425DC; // 80341E34
L_80341E38:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 80341E38
  c->r[3]=c->r[30]|c->r[30]; // 80341E3C
  c->r[0]=R16(c->r[5]+0x00000000u); // 80341E40
  c->r[30]=c->r[7]+0x00000004u; // 80341E44
  if (crb(c,2)) { goto L_80341E54; } // 80341E48
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 80341E4C
  goto L_80341F30; // 80341E50
L_80341E54:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80341E54
  c->r[4]=c->r[3]+c->r[6]; // 80341E58
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,1,3);} // 80341E5C
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[6]=c->ps1[6]=RF32(ea);} // 80341E60
  c->r[5]=R16(c->r[1]+0x00000028u); // 80341E64
  fcmp(c,0,c->f[29],c->f[6]); // 80341E68
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80341E6C
  if (!crb(c,2)) { goto L_80341E98; } // 80341E70
  c->r[3]=R8(c->r[4]+0x00000008u); // 80341E74
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[4]=RF64(ea);} // 80341E78
  W32(c->r[1]+0x00000034u,c->r[3]); // 80341E7C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80341E80
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=RF64(ea);} // 80341E84
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80341E88
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 80341E8C
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 80341E90
  goto L_80341F30; // 80341E94
L_80341E98:;
  cmpu(c,0,c->r[0],c->r[5]); // 80341E98
  if (crb(c,1)) { goto L_80341EC8; } // 80341E9C
  c->r[3]=c->r[4]+c->r[0]; // 80341EA0
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[4]=RF64(ea);} // 80341EA4
  c->r[3]=R8(c->r[3]+0x00000008u); // 80341EA8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80341EAC
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 80341EB0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80341EB4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 80341EB8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 80341EBC
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 80341EC0
  goto L_80341F30; // 80341EC4
L_80341EC8:;
  W32(c->r[1]+0x00000034u,c->r[5]); // 80341EC8
  c->r[3]=c->r[4]+c->r[5]; // 80341ECC
  c->r[3]=R8(c->r[3]+0x00000008u); // 80341ED0
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[5]=RF64(ea);} // 80341ED4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80341ED8
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 80341EDC
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 80341EE0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80341EE4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 80341EE8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80341EEC
  c->f[4]=c->ps1[4]=S(c->f[29]-c->f[4]); // 80341EF0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 80341EF4
  fcmp(c,0,c->f[6],c->f[4]); // 80341EF8
  c->f[31]=c->ps1[31]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 80341EFC
  if (!crb(c,2)) { goto L_80341F08; } // 80341F00
  goto L_80341F30; // 80341F04
L_80341F08:;
  c->r[3]=c->r[5]+0x00000001u; // 80341F08
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 80341F0C
  c->r[3]=c->r[4]+c->r[3]; // 80341F10
  c->r[3]=R8(c->r[3]+0x00000008u); // 80341F14
  W32(c->r[1]+0x00000034u,c->r[3]); // 80341F18
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80341F1C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 80341F20
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 80341F24
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80341F28
  c->f[31]=c->ps1[31]=S(std::fma(c->f[4],c->f[0],c->f[31])); // 80341F2C
L_80341F30:;
  c->r[3]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[3]); // 80341F30
  c->r[3]=c->r[30]|c->r[30]; // 80341F34
  c->r[30]=c->r[30]+0x00000004u; // 80341F38
  if (crb(c,2)) { goto L_80341F48; } // 80341F3C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 80341F40
  goto L_80342024; // 80341F44
L_80341F48:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80341F48
  c->r[4]=c->r[3]+c->r[6]; // 80341F4C
  {uint32_t ea=c->r[1]+0x00000024u; psq_store(c,1,ea,1,3);} // 80341F50
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[6]=c->ps1[6]=RF32(ea);} // 80341F54
  c->r[5]=R16(c->r[1]+0x00000024u); // 80341F58
  fcmp(c,0,c->f[1],c->f[6]); // 80341F5C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80341F60
  if (!crb(c,2)) { goto L_80341F8C; } // 80341F64
  c->r[3]=R8(c->r[4]+0x00000008u); // 80341F68
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[4]=RF64(ea);} // 80341F6C
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 80341F70
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80341F74
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 80341F78
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80341F7C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 80341F80
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 80341F84
  goto L_80342024; // 80341F88
L_80341F8C:;
  cmpu(c,0,c->r[0],c->r[5]); // 80341F8C
  if (crb(c,1)) { goto L_80341FBC; } // 80341F90
  c->r[3]=c->r[4]+c->r[0]; // 80341F94
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[4]=RF64(ea);} // 80341F98
  c->r[3]=R8(c->r[3]+0x00000008u); // 80341F9C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80341FA0
  W32(c->r[1]+0x00000034u,c->r[3]); // 80341FA4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80341FA8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=RF64(ea);} // 80341FAC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 80341FB0
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 80341FB4
  goto L_80342024; // 80341FB8
L_80341FBC:;
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 80341FBC
  c->r[3]=c->r[4]+c->r[5]; // 80341FC0
  c->r[3]=R8(c->r[3]+0x00000008u); // 80341FC4
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[5]=RF64(ea);} // 80341FC8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 80341FCC
  W32(c->r[1]+0x00000034u,c->r[3]); // 80341FD0
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 80341FD4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80341FD8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80341FDC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80341FE0
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[4]); // 80341FE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 80341FE8
  fcmp(c,0,c->f[6],c->f[4]); // 80341FEC
  c->f[30]=c->ps1[30]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 80341FF0
  if (!crb(c,2)) { goto L_80341FFC; } // 80341FF4
  goto L_80342024; // 80341FF8
L_80341FFC:;
  c->r[3]=c->r[5]+0x00000001u; // 80341FFC
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 80342000
  c->r[3]=c->r[4]+c->r[3]; // 80342004
  c->r[3]=R8(c->r[3]+0x00000008u); // 80342008
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8034200C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 80342010
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 80342014
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 80342018
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8034201C
  c->f[30]=c->ps1[30]=S(std::fma(c->f[4],c->f[0],c->f[30])); // 80342020
L_80342024:;
  c->r[3]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[3]); // 80342024
  c->r[3]=c->r[30]|c->r[30]; // 80342028
  c->r[30]=c->r[30]+0x00000004u; // 8034202C
  if (crb(c,2)) { goto L_8034203C; } // 80342030
  {uint32_t ea=c->r[3]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 80342034
  goto L_803425DC; // 80342038
L_8034203C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8034203C
  c->r[4]=c->r[3]+c->r[6]; // 80342040
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,1,3);} // 80342044
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[6]=c->ps1[6]=RF32(ea);} // 80342048
  c->r[5]=R16(c->r[1]+0x00000020u); // 8034204C
  fcmp(c,0,c->f[1],c->f[6]); // 80342050
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80342054
  if (!crb(c,2)) { goto L_80342080; } // 80342058
  c->r[0]=R8(c->r[4]+0x00000008u); // 8034205C
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[3]=RF64(ea);} // 80342060
  W32(c->r[1]+0x00000034u,c->r[0]); // 80342064
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342068
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=RF64(ea);} // 8034206C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342070
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80342074
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80342078
  goto L_803425DC; // 8034207C
L_80342080:;
  cmpu(c,0,c->r[0],c->r[5]); // 80342080
  if (crb(c,1)) { goto L_803420B0; } // 80342084
  c->r[3]=c->r[4]+c->r[0]; // 80342088
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[3]=RF64(ea);} // 8034208C
  c->r[0]=R8(c->r[3]+0x00000008u); // 80342090
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342094
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80342098
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034209C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 803420A0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 803420A4
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 803420A8
  goto L_803425DC; // 803420AC
L_803420B0:;
  W32(c->r[1]+0x00000034u,c->r[5]); // 803420B0
  c->r[3]=c->r[4]+c->r[5]; // 803420B4
  c->r[0]=R8(c->r[3]+0x00000008u); // 803420B8
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[5]=RF64(ea);} // 803420BC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 803420C0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803420C4
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 803420C8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803420CC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 803420D0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803420D4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 803420D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 803420DC
  fcmp(c,0,c->f[6],c->f[1]); // 803420E0
  c->f[29]=c->ps1[29]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 803420E4
  if (!crb(c,2)) { goto L_803420F0; } // 803420E8
  goto L_803425DC; // 803420EC
L_803420F0:;
  c->r[0]=c->r[5]+0x00000001u; // 803420F0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 803420F4
  c->r[3]=c->r[4]+c->r[0]; // 803420F8
  c->r[0]=R8(c->r[3]+0x00000008u); // 803420FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80342100
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80342104
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 80342108
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 8034210C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 80342110
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[0],c->f[29])); // 80342114
  goto L_803425DC; // 80342118
L_8034211C:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 8034211C
  c->r[3]=c->r[30]|c->r[30]; // 80342120
  c->r[0]=R16(c->r[5]+0x00000000u); // 80342124
  c->r[30]=c->r[7]+0x00000004u; // 80342128
  if (crb(c,2)) { goto L_80342138; } // 8034212C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 80342130
  goto L_8034221C; // 80342134
L_80342138:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80342138
  c->r[4]=c->r[3]+c->r[6]; // 8034213C
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,29,ea,1,3);} // 80342140
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[6]=c->ps1[6]=RF32(ea);} // 80342144
  c->r[5]=R16(c->r[1]+0x0000001Cu); // 80342148
  fcmp(c,0,c->f[29],c->f[6]); // 8034214C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80342150
  if (!crb(c,2)) { goto L_8034217C; } // 80342154
  c->r[3]=R16(c->r[4]+0x00000008u); // 80342158
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[4]=RF64(ea);} // 8034215C
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 80342160
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80342164
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 80342168
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034216C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 80342170
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 80342174
  goto L_8034221C; // 80342178
L_8034217C:;
  cmpu(c,0,c->r[0],c->r[5]); // 8034217C
  if (crb(c,1)) { goto L_803421B0; } // 80342180
  c->r[3]=rotl(c->r[0],1)&0x0001FFFEu; // 80342184
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[4]=RF64(ea);} // 80342188
  c->r[3]=c->r[4]+c->r[3]; // 8034218C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80342190
  c->r[3]=R16(c->r[3]+0x00000008u); // 80342194
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342198
  W32(c->r[1]+0x00000034u,c->r[3]); // 8034219C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=RF64(ea);} // 803421A0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 803421A4
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 803421A8
  goto L_8034221C; // 803421AC
L_803421B0:;
  c->r[3]=rotl(c->r[5],1)&0x0001FFFEu; // 803421B0
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 803421B4
  c->r[3]=c->r[4]+c->r[3]; // 803421B8
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[5]=RF64(ea);} // 803421BC
  c->r[3]=R16(c->r[3]+0x00000008u); // 803421C0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 803421C4
  W32(c->r[1]+0x00000034u,c->r[3]); // 803421C8
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 803421CC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803421D0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 803421D4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803421D8
  c->f[4]=c->ps1[4]=S(c->f[29]-c->f[4]); // 803421DC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 803421E0
  fcmp(c,0,c->f[6],c->f[4]); // 803421E4
  c->f[31]=c->ps1[31]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 803421E8
  if (!crb(c,2)) { goto L_803421F4; } // 803421EC
  goto L_8034221C; // 803421F0
L_803421F4:;
  c->r[3]=c->r[5]+0x00000001u; // 803421F4
  c->r[3]=rotl(c->r[3],1)&0x0001FFFEu; // 803421F8
  c->r[3]=c->r[4]+c->r[3]; // 803421FC
  c->r[3]=R16(c->r[3]+0x00000008u); // 80342200
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 80342204
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 80342208
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 8034220C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 80342210
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80342214
  c->f[31]=c->ps1[31]=S(std::fma(c->f[4],c->f[0],c->f[31])); // 80342218
L_8034221C:;
  c->r[3]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[3]); // 8034221C
  c->r[3]=c->r[30]|c->r[30]; // 80342220
  c->r[30]=c->r[30]+0x00000004u; // 80342224
  if (crb(c,2)) { goto L_80342234; } // 80342228
  {uint32_t ea=c->r[3]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 8034222C
  goto L_80342318; // 80342230
L_80342234:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80342234
  c->r[4]=c->r[3]+c->r[6]; // 80342238
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,1,ea,1,3);} // 8034223C
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[6]=c->ps1[6]=RF32(ea);} // 80342240
  c->r[5]=R16(c->r[1]+0x00000018u); // 80342244
  fcmp(c,0,c->f[1],c->f[6]); // 80342248
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8034224C
  if (!crb(c,2)) { goto L_80342278; } // 80342250
  c->r[3]=R16(c->r[4]+0x00000008u); // 80342254
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[4]=RF64(ea);} // 80342258
  W32(c->r[1]+0x00000034u,c->r[3]); // 8034225C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80342260
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=RF64(ea);} // 80342264
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342268
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8034226C
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 80342270
  goto L_80342318; // 80342274
L_80342278:;
  cmpu(c,0,c->r[0],c->r[5]); // 80342278
  if (crb(c,1)) { goto L_803422AC; } // 8034227C
  c->r[3]=rotl(c->r[0],1)&0x0001FFFEu; // 80342280
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[4]=RF64(ea);} // 80342284
  c->r[3]=c->r[4]+c->r[3]; // 80342288
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8034228C
  c->r[3]=R16(c->r[3]+0x00000008u); // 80342290
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342294
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 80342298
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 8034229C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 803422A0
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 803422A4
  goto L_80342318; // 803422A8
L_803422AC:;
  c->r[3]=rotl(c->r[5],1)&0x0001FFFEu; // 803422AC
  W32(c->r[1]+0x00000034u,c->r[5]); // 803422B0
  c->r[3]=c->r[4]+c->r[3]; // 803422B4
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[5]=RF64(ea);} // 803422B8
  c->r[3]=R16(c->r[3]+0x00000008u); // 803422BC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 803422C0
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 803422C4
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 803422C8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803422CC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 803422D0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803422D4
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[4]); // 803422D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 803422DC
  fcmp(c,0,c->f[6],c->f[4]); // 803422E0
  c->f[30]=c->ps1[30]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 803422E4
  if (!crb(c,2)) { goto L_803422F0; } // 803422E8
  goto L_80342318; // 803422EC
L_803422F0:;
  c->r[3]=c->r[5]+0x00000001u; // 803422F0
  c->r[3]=rotl(c->r[3],1)&0x0001FFFEu; // 803422F4
  c->r[3]=c->r[4]+c->r[3]; // 803422F8
  c->r[3]=R16(c->r[3]+0x00000008u); // 803422FC
  W32(c->r[1]+0x00000034u,c->r[3]); // 80342300
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80342304
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 80342308
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 8034230C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80342310
  c->f[30]=c->ps1[30]=S(std::fma(c->f[4],c->f[0],c->f[30])); // 80342314
L_80342318:;
  c->r[3]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[3]); // 80342318
  c->r[3]=c->r[30]|c->r[30]; // 8034231C
  c->r[30]=c->r[30]+0x00000004u; // 80342320
  if (crb(c,2)) { goto L_80342330; } // 80342324
  {uint32_t ea=c->r[3]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 80342328
  goto L_803425DC; // 8034232C
L_80342330:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80342330
  c->r[4]=c->r[3]+c->r[6]; // 80342334
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,1,ea,1,3);} // 80342338
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[6]=c->ps1[6]=RF32(ea);} // 8034233C
  c->r[5]=R16(c->r[1]+0x00000014u); // 80342340
  fcmp(c,0,c->f[1],c->f[6]); // 80342344
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80342348
  if (!crb(c,2)) { goto L_80342374; } // 8034234C
  c->r[0]=R16(c->r[4]+0x00000008u); // 80342350
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[3]=RF64(ea);} // 80342354
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80342358
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034235C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 80342360
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342364
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80342368
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 8034236C
  goto L_803425DC; // 80342370
L_80342374:;
  cmpu(c,0,c->r[0],c->r[5]); // 80342374
  if (crb(c,1)) { goto L_803423A8; } // 80342378
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 8034237C
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[3]=RF64(ea);} // 80342380
  c->r[3]=c->r[4]+c->r[0]; // 80342384
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342388
  c->r[0]=R16(c->r[3]+0x00000008u); // 8034238C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342390
  W32(c->r[1]+0x00000034u,c->r[0]); // 80342394
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=RF64(ea);} // 80342398
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8034239C
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 803423A0
  goto L_803425DC; // 803423A4
L_803423A8:;
  c->r[0]=rotl(c->r[5],1)&0x0001FFFEu; // 803423A8
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 803423AC
  c->r[3]=c->r[4]+c->r[0]; // 803423B0
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[5]=RF64(ea);} // 803423B4
  c->r[0]=R16(c->r[3]+0x00000008u); // 803423B8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 803423BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803423C0
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 803423C4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803423C8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 803423CC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803423D0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 803423D4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 803423D8
  fcmp(c,0,c->f[6],c->f[1]); // 803423DC
  c->f[29]=c->ps1[29]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 803423E0
  if (!crb(c,2)) { goto L_803423EC; } // 803423E4
  goto L_803425DC; // 803423E8
L_803423EC:;
  c->r[0]=c->r[5]+0x00000001u; // 803423EC
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 803423F0
  c->r[3]=c->r[4]+c->r[0]; // 803423F4
  c->r[0]=R16(c->r[3]+0x00000008u); // 803423F8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803423FC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 80342400
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 80342404
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 80342408
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 8034240C
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[0],c->f[29])); // 80342410
  goto L_803425DC; // 80342414
L_80342418:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 80342418
  c->r[3]=c->r[30]|c->r[30]; // 8034241C
  c->r[0]=R16(c->r[5]+0x00000000u); // 80342420
  c->r[30]=c->r[7]+0x00000004u; // 80342424
  if (crb(c,2)) { goto L_80342434; } // 80342428
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 8034242C
  goto L_803424AC; // 80342430
L_80342434:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80342434
  c->r[4]=c->r[3]+c->r[6]; // 80342438
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,29,ea,1,3);} // 8034243C
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[3]=c->ps1[3]=RF32(ea);} // 80342440
  c->r[5]=R16(c->r[1]+0x00000010u); // 80342444
  fcmp(c,0,c->f[29],c->f[3]); // 80342448
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8034244C
  if (!crb(c,2)) { goto L_8034245C; } // 80342450
  {uint32_t ea=c->r[4]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 80342454
  goto L_803424AC; // 80342458
L_8034245C:;
  cmpu(c,0,c->r[0],c->r[5]); // 8034245C
  if (crb(c,1)) { goto L_80342470; } // 80342460
  c->r[3]=rotl(c->r[0],2)&0x0003FFFCu; // 80342464
  {uint32_t ea=c->r[4]+c->r[3]; c->f[31]=c->ps1[31]=RF32(ea);} // 80342468
  goto L_803424AC; // 8034246C
L_80342470:;
  W32(c->r[1]+0x00000034u,c->r[5]); // 80342470
  c->r[3]=rotl(c->r[5],2)&0x0003FFFCu; // 80342474
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[2]=RF64(ea);} // 80342478
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 8034247C
  {uint32_t ea=c->r[4]+c->r[3]; c->f[31]=c->ps1[31]=RF32(ea);} // 80342480
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80342484
  c->f[2]=c->ps1[2]=S(c->f[29]-c->f[0]); // 80342488
  fcmp(c,0,c->f[3],c->f[2]); // 8034248C
  if (!crb(c,2)) { goto L_80342498; } // 80342490
  goto L_803424AC; // 80342494
L_80342498:;
  c->r[3]=c->r[5]+0x00000001u; // 80342498
  c->r[3]=rotl(c->r[3],2)&0x0003FFFCu; // 8034249C
  {uint32_t ea=c->r[4]+c->r[3]; c->f[0]=c->ps1[0]=RF32(ea);} // 803424A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 803424A4
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[0],c->f[31])); // 803424A8
L_803424AC:;
  c->r[3]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[3]); // 803424AC
  c->r[3]=c->r[30]|c->r[30]; // 803424B0
  c->r[30]=c->r[30]+0x00000004u; // 803424B4
  if (crb(c,2)) { goto L_803424C4; } // 803424B8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 803424BC
  goto L_8034253C; // 803424C0
L_803424C4:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803424C4
  c->r[4]=c->r[3]+c->r[6]; // 803424C8
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,1,ea,1,3);} // 803424CC
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[3]=c->ps1[3]=RF32(ea);} // 803424D0
  c->r[5]=R16(c->r[1]+0x0000000Cu); // 803424D4
  fcmp(c,0,c->f[1],c->f[3]); // 803424D8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803424DC
  if (!crb(c,2)) { goto L_803424EC; } // 803424E0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 803424E4
  goto L_8034253C; // 803424E8
L_803424EC:;
  cmpu(c,0,c->r[0],c->r[5]); // 803424EC
  if (crb(c,1)) { goto L_80342500; } // 803424F0
  c->r[3]=rotl(c->r[0],2)&0x0003FFFCu; // 803424F4
  {uint32_t ea=c->r[4]+c->r[3]; c->f[30]=c->ps1[30]=RF32(ea);} // 803424F8
  goto L_8034253C; // 803424FC
L_80342500:;
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 80342500
  c->r[3]=rotl(c->r[5],2)&0x0003FFFCu; // 80342504
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[2]=RF64(ea);} // 80342508
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8034250C
  {uint32_t ea=c->r[4]+c->r[3]; c->f[30]=c->ps1[30]=RF32(ea);} // 80342510
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80342514
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80342518
  fcmp(c,0,c->f[3],c->f[2]); // 8034251C
  if (!crb(c,2)) { goto L_80342528; } // 80342520
  goto L_8034253C; // 80342524
L_80342528:;
  c->r[3]=c->r[5]+0x00000001u; // 80342528
  c->r[3]=rotl(c->r[3],2)&0x0003FFFCu; // 8034252C
  {uint32_t ea=c->r[4]+c->r[3]; c->f[0]=c->ps1[0]=RF32(ea);} // 80342530
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80342534
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[0],c->f[30])); // 80342538
L_8034253C:;
  c->r[3]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[3]); // 8034253C
  c->r[3]=c->r[30]|c->r[30]; // 80342540
  c->r[30]=c->r[30]+0x00000004u; // 80342544
  if (crb(c,2)) { goto L_80342554; } // 80342548
  {uint32_t ea=c->r[3]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 8034254C
  goto L_803425DC; // 80342550
L_80342554:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80342554
  c->r[3]=c->r[3]+c->r[6]; // 80342558
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,1,ea,1,3);} // 8034255C
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[3]=c->ps1[3]=RF32(ea);} // 80342560
  c->r[4]=R16(c->r[1]+0x00000008u); // 80342564
  fcmp(c,0,c->f[1],c->f[3]); // 80342568
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8034256C
  if (!crb(c,2)) { goto L_8034257C; } // 80342570
  {uint32_t ea=c->r[3]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 80342574
  goto L_803425DC; // 80342578
L_8034257C:;
  cmpu(c,0,c->r[0],c->r[4]); // 8034257C
  if (crb(c,1)) { goto L_80342590; } // 80342580
  c->r[0]=rotl(c->r[0],2)&0x0003FFFCu; // 80342584
  {uint32_t ea=c->r[3]+c->r[0]; c->f[29]=c->ps1[29]=RF32(ea);} // 80342588
  goto L_803425DC; // 8034258C
L_80342590:;
  W32(c->r[1]+0x00000034u,c->r[4]); // 80342590
  c->r[0]=rotl(c->r[4],2)&0x0003FFFCu; // 80342594
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[2]=RF64(ea);} // 80342598
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 8034259C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[29]=c->ps1[29]=RF32(ea);} // 803425A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803425A4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803425A8
  fcmp(c,0,c->f[3],c->f[1]); // 803425AC
  if (!crb(c,2)) { goto L_803425B8; } // 803425B0
  goto L_803425DC; // 803425B4
L_803425B8:;
  c->r[0]=c->r[4]+0x00000001u; // 803425B8
  c->r[0]=rotl(c->r[0],2)&0x0003FFFCu; // 803425BC
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 803425C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 803425C4
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[0],c->f[29])); // 803425C8
  goto L_803425DC; // 803425CC
L_803425D0:;
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[31]=c->ps1[31]=RF32(ea);} // 803425D0
  c->f[30]=c->f[31]; // 803425D4
  c->f[29]=c->f[31]; // 803425D8
L_803425DC:;
  {uint32_t ea=c->r[2]+0xFFFFEF80u; c->f[0]=c->ps1[0]=RF32(ea);} // 803425DC
  c->r[3]=c->r[27]|c->r[27]; // 803425E0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 803425E4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[30]); // 803425E8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[29]); // 803425EC
  c->lr=0x803425F4u; f_8036B1A8(c); // 803425F0
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[31]);} // 803425F4
  c->r[3]=c->r[30]|c->r[30]; // 803425F8
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[30]);} // 803425FC
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[29]);} // 80342600
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 80342604
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 80342608
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8034260C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 80342610
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 80342614
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 80342618
  c->r[11]=c->r[1]+0x00000060u; // 8034261C
  c->lr=0x80342624u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80342620
  c->r[0]=R32(c->r[1]+0x00000094u); // 80342624
  c->lr=c->r[0]; // 80342628
  c->r[1]=c->r[1]+0x00000090u; // 8034262C
  return; // 80342630
}

// GetAnmTranslation__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r4math4VEC3PCQ34nw4r3g3d17ResAnmChrNodeDataPCQ44nw4r3g3d17ResAnmChrNodeData7AnmDataf
void f_80342634(Ctx* __restrict c) {
  trace_call(0x80342634u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80342634
  c->r[0]=c->lr; // 80342638
  W32(c->r[1]+0x00000054u,c->r[0]); // 8034263C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80342640
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80342644
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 80342648
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8034264C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 80342650
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 80342654
  c->f[29]=c->f[1]; // 80342658
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034265C
  c->r[31]=R32(c->r[4]+0x00000004u); // 80342660
  W32(c->r[1]+0x00000018u,c->r[30]); // 80342664
  c->r[30]=c->r[5]|c->r[5]; // 80342668
  c->r[6]=rotl(c->r[31],0)&0xC0000000u; cr0(c,c->r[6]); // 8034266C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80342670
  c->r[29]=c->r[4]|c->r[4]; // 80342674
  W32(c->r[1]+0x00000010u,c->r[28]); // 80342678
  c->r[28]=c->r[3]|c->r[3]; // 8034267C
  if (crb(c,2)) { goto L_803426BC; } // 80342680
  if (!crb(c,0)) { goto L_803426AC; } // 80342684
  c->r[0]=0u+0xC0000000u; // 80342688
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8034268C
  if (crb(c,2)) { goto L_803427D0; } // 80342690
  if (!crb(c,0)) { goto L_80342850; } // 80342694
  c->r[3]=0u+0x80000000u; // 80342698
  c->r[0]=c->r[3]+0x00000001u; // 8034269C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 803426A0
  if (!crb(c,0)) { goto L_80342850; } // 803426A4
  goto L_80342750; // 803426A8
L_803426AC:;
  c->r[0]=0u+0x40000000u; // 803426AC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 803426B0
  if (crb(c,2)) { goto L_803426D0; } // 803426B4
  goto L_80342850; // 803426B8
L_803426BC:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 803426BC
  c->r[30]=c->r[5]+0x0000000Cu; // 803426C0
  {uint32_t ea=c->r[5]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 803426C4
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803426C8
  goto L_8034285C; // 803426CC
L_803426D0:;
  c->r[0]=rotl(c->r[31],0)&0x00080000u; cr0(c,c->r[0]); // 803426D0
  c->r[3]=c->r[30]|c->r[30]; // 803426D4
  c->r[30]=c->r[5]+0x00000004u; // 803426D8
  if (crb(c,2)) { goto L_803426E8; } // 803426DC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803426E0
  goto L_803426F4; // 803426E4
L_803426E8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803426E8
  c->r[3]=c->r[0]+c->r[4]; // 803426EC
  c->lr=0x803426F4u; f_80341A18(c); // 803426F0
L_803426F4:;
  c->r[0]=rotl(c->r[31],0)&0x00100000u; cr0(c,c->r[0]); // 803426F4
  c->f[31]=c->f[1]; // 803426F8
  c->r[3]=c->r[30]|c->r[30]; // 803426FC
  c->r[30]=c->r[30]+0x00000004u; // 80342700
  if (crb(c,2)) { goto L_80342710; } // 80342704
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342708
  goto L_80342720; // 8034270C
L_80342710:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80342710
  c->f[1]=c->f[29]; // 80342714
  c->r[3]=c->r[0]+c->r[29]; // 80342718
  c->lr=0x80342720u; f_80341A18(c); // 8034271C
L_80342720:;
  c->r[0]=rotl(c->r[31],0)&0x00200000u; cr0(c,c->r[0]); // 80342720
  c->f[30]=c->f[1]; // 80342724
  c->r[3]=c->r[30]|c->r[30]; // 80342728
  c->r[30]=c->r[30]+0x00000004u; // 8034272C
  if (crb(c,2)) { goto L_8034273C; } // 80342730
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342734
  goto L_8034285C; // 80342738
L_8034273C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8034273C
  c->f[1]=c->f[29]; // 80342740
  c->r[3]=c->r[0]+c->r[29]; // 80342744
  c->lr=0x8034274Cu; f_80341A18(c); // 80342748
  goto L_8034285C; // 8034274C
L_80342750:;
  c->r[0]=rotl(c->r[31],0)&0x00080000u; cr0(c,c->r[0]); // 80342750
  c->r[3]=c->r[30]|c->r[30]; // 80342754
  c->r[30]=c->r[5]+0x00000004u; // 80342758
  if (crb(c,2)) { goto L_80342768; } // 8034275C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342760
  goto L_80342774; // 80342764
L_80342768:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80342768
  c->r[3]=c->r[0]+c->r[4]; // 8034276C
  c->lr=0x80342774u; f_803418A8(c); // 80342770
L_80342774:;
  c->r[0]=rotl(c->r[31],0)&0x00100000u; cr0(c,c->r[0]); // 80342774
  c->f[31]=c->f[1]; // 80342778
  c->r[3]=c->r[30]|c->r[30]; // 8034277C
  c->r[30]=c->r[30]+0x00000004u; // 80342780
  if (crb(c,2)) { goto L_80342790; } // 80342784
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342788
  goto L_803427A0; // 8034278C
L_80342790:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80342790
  c->f[1]=c->f[29]; // 80342794
  c->r[3]=c->r[0]+c->r[29]; // 80342798
  c->lr=0x803427A0u; f_803418A8(c); // 8034279C
L_803427A0:;
  c->r[0]=rotl(c->r[31],0)&0x00200000u; cr0(c,c->r[0]); // 803427A0
  c->f[30]=c->f[1]; // 803427A4
  c->r[3]=c->r[30]|c->r[30]; // 803427A8
  c->r[30]=c->r[30]+0x00000004u; // 803427AC
  if (crb(c,2)) { goto L_803427BC; } // 803427B0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803427B4
  goto L_8034285C; // 803427B8
L_803427BC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803427BC
  c->f[1]=c->f[29]; // 803427C0
  c->r[3]=c->r[0]+c->r[29]; // 803427C4
  c->lr=0x803427CCu; f_803418A8(c); // 803427C8
  goto L_8034285C; // 803427CC
L_803427D0:;
  c->r[0]=rotl(c->r[31],0)&0x00080000u; cr0(c,c->r[0]); // 803427D0
  c->r[3]=c->r[30]|c->r[30]; // 803427D4
  c->r[30]=c->r[5]+0x00000004u; // 803427D8
  if (crb(c,2)) { goto L_803427E8; } // 803427DC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803427E0
  goto L_803427F4; // 803427E4
L_803427E8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803427E8
  c->r[3]=c->r[0]+c->r[4]; // 803427EC
  c->lr=0x803427F4u; f_8034177C(c); // 803427F0
L_803427F4:;
  c->r[0]=rotl(c->r[31],0)&0x00100000u; cr0(c,c->r[0]); // 803427F4
  c->f[31]=c->f[1]; // 803427F8
  c->r[3]=c->r[30]|c->r[30]; // 803427FC
  c->r[30]=c->r[30]+0x00000004u; // 80342800
  if (crb(c,2)) { goto L_80342810; } // 80342804
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342808
  goto L_80342820; // 8034280C
L_80342810:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80342810
  c->f[1]=c->f[29]; // 80342814
  c->r[3]=c->r[0]+c->r[29]; // 80342818
  c->lr=0x80342820u; f_8034177C(c); // 8034281C
L_80342820:;
  c->r[0]=rotl(c->r[31],0)&0x00200000u; cr0(c,c->r[0]); // 80342820
  c->f[30]=c->f[1]; // 80342824
  c->r[3]=c->r[30]|c->r[30]; // 80342828
  c->r[30]=c->r[30]+0x00000004u; // 8034282C
  if (crb(c,2)) { goto L_8034283C; } // 80342830
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342834
  goto L_8034285C; // 80342838
L_8034283C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8034283C
  c->f[1]=c->f[29]; // 80342840
  c->r[3]=c->r[0]+c->r[29]; // 80342844
  c->lr=0x8034284Cu; f_8034177C(c); // 80342848
  goto L_8034285C; // 8034284C
L_80342850:;
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[31]=c->ps1[31]=RF32(ea);} // 80342850
  c->f[30]=c->f[31]; // 80342854
  c->f[1]=c->f[31]; // 80342858
L_8034285C:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[31]);} // 8034285C
  c->r[3]=c->r[30]|c->r[30]; // 80342860
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[30]);} // 80342864
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 80342868
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8034286C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80342870
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80342874
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80342878
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 8034287C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 80342880
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80342884
  c->r[30]=R32(c->r[1]+0x00000018u); // 80342888
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034288C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80342890
  c->r[0]=R32(c->r[1]+0x00000054u); // 80342894
  c->lr=c->r[0]; // 80342898
  c->r[1]=c->r[1]+0x00000050u; // 8034289C
  return; // 803428A0
}

// GetAnmResult___Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_803428A4(Ctx* __restrict c) {
  trace_call(0x803428A4u);
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[0]=c->ps1[0]=RF32(ea);} // 803428A4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 803428A8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 803428AC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 803428B0
  c->r[3]=c->r[3]+0x0000001Cu; // 803428B4
  f_80295AE8(c); return; // 803428B8
}

// GetAnmResult_T__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_803428BC(Ctx* __restrict c) {
  trace_call(0x803428BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803428BC
  c->r[0]=c->lr; // 803428C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 803428C4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 803428C8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 803428CC
  c->f[31]=c->f[1]; // 803428D0
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[0]=c->ps1[0]=RF32(ea);} // 803428D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803428D8
  c->r[31]=c->r[5]|c->r[5]; // 803428DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803428E0
  c->r[30]=c->r[3]|c->r[3]; // 803428E4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 803428E8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 803428EC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 803428F0
  c->r[3]=c->r[3]+0x0000001Cu; // 803428F4
  c->lr=0x803428FCu; f_80295AE8(c); // 803428F8
  c->f[1]=c->f[31]; // 803428FC
  c->r[4]=c->r[31]|c->r[31]; // 80342900
  c->r[3]=c->r[1]+0x00000008u; // 80342904
  c->r[5]=c->r[31]+0x00000008u; // 80342908
  c->lr=0x80342910u; f_80342634(c); // 8034290C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342910
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 80342914
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80342918
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 8034291C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342920
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 80342924
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80342928
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8034292C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80342930
  c->r[30]=R32(c->r[1]+0x00000018u); // 80342934
  c->r[0]=R32(c->r[1]+0x00000034u); // 80342938
  c->lr=c->r[0]; // 8034293C
  c->r[1]=c->r[1]+0x00000030u; // 80342940
  return; // 80342944
}

// GetAnmResult_R__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_80342948(Ctx* __restrict c) {
  trace_call(0x80342948u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80342948
  c->r[0]=c->lr; // 8034294C
  c->r[6]=c->r[5]|c->r[5]; // 80342950
  c->r[5]=c->r[4]|c->r[4]; // 80342954
  W32(c->r[1]+0x00000014u,c->r[0]); // 80342958
  c->r[4]=c->r[3]+0x00000010u; // 8034295C
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342960
  c->r[7]=c->r[6]+0x00000008u; // 80342964
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80342968
  c->r[31]=c->r[3]|c->r[3]; // 8034296C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80342970
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80342974
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80342978
  c->r[3]=c->r[3]+0x0000001Cu; // 8034297C
  c->lr=0x80342984u; f_80341BD8(c); // 80342980
  c->r[0]=R32(c->r[31]+0x00000000u); // 80342984
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342988
  c->r[0]=c->r[0]|0x80000000u; // 8034298C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80342990
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 80342994
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 80342998
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 8034299C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803429A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803429A4
  c->lr=c->r[0]; // 803429A8
  c->r[1]=c->r[1]+0x00000010u; // 803429AC
  return; // 803429B0
}

// GetAnmResult_S__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_803429B4(Ctx* __restrict c) {
  trace_call(0x803429B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803429B4
  c->r[0]=c->lr; // 803429B8
  c->r[4]=c->r[5]|c->r[5]; // 803429BC
  c->r[5]=c->r[5]+0x00000008u; // 803429C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803429C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803429C8
  c->r[31]=c->r[3]|c->r[3]; // 803429CC
  c->r[3]=c->r[3]+0x00000004u; // 803429D0
  c->lr=0x803429D8u; f_803414C4(c); // 803429D4
  c->r[3]=c->r[31]+0x0000001Cu; // 803429D8
  c->lr=0x803429E0u; f_80295AE8(c); // 803429DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803429E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803429E4
  c->lr=c->r[0]; // 803429E8
  c->r[1]=c->r[1]+0x00000010u; // 803429EC
  return; // 803429F0
}

// GetAnmResult_RT__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_803429F4(Ctx* __restrict c) {
  trace_call(0x803429F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803429F4
  c->r[0]=c->lr; // 803429F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 803429FC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80342A00
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80342A04
  c->f[31]=c->f[1]; // 80342A08
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342A0C
  c->r[7]=c->r[5]+0x00000008u; // 80342A10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80342A14
  c->r[31]=c->r[5]|c->r[5]; // 80342A18
  c->r[5]=c->r[4]|c->r[4]; // 80342A1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80342A20
  c->r[30]=c->r[3]|c->r[3]; // 80342A24
  c->r[6]=c->r[31]|c->r[31]; // 80342A28
  c->r[4]=c->r[3]+0x00000010u; // 80342A2C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80342A30
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80342A34
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80342A38
  c->r[3]=c->r[3]+0x0000001Cu; // 80342A3C
  c->lr=0x80342A44u; f_80341BD8(c); // 80342A40
  c->r[0]=R32(c->r[30]+0x00000000u); // 80342A44
  c->r[5]=c->r[3]|c->r[3]; // 80342A48
  c->f[1]=c->f[31]; // 80342A4C
  c->r[4]=c->r[31]|c->r[31]; // 80342A50
  c->r[0]=c->r[0]|0x80000000u; // 80342A54
  c->r[3]=c->r[1]+0x00000008u; // 80342A58
  W32(c->r[30]+0x00000000u,c->r[0]); // 80342A5C
  c->lr=0x80342A64u; f_80342634(c); // 80342A60
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342A64
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 80342A68
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80342A6C
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 80342A70
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342A74
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 80342A78
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80342A7C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80342A80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80342A84
  c->r[30]=R32(c->r[1]+0x00000018u); // 80342A88
  c->r[0]=R32(c->r[1]+0x00000034u); // 80342A8C
  c->lr=c->r[0]; // 80342A90
  c->r[1]=c->r[1]+0x00000030u; // 80342A94
  return; // 80342A98
}

// GetAnmResult_SR__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_80342A9C(Ctx* __restrict c) {
  trace_call(0x80342A9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80342A9C
  c->r[0]=c->lr; // 80342AA0
  W32(c->r[1]+0x00000034u,c->r[0]); // 80342AA4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80342AA8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80342AAC
  c->f[31]=c->f[1]; // 80342AB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80342AB4
  c->r[31]=c->r[5]|c->r[5]; // 80342AB8
  c->r[5]=c->r[5]+0x00000008u; // 80342ABC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80342AC0
  c->r[30]=c->r[4]|c->r[4]; // 80342AC4
  c->r[4]=c->r[31]|c->r[31]; // 80342AC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80342ACC
  c->r[29]=c->r[3]|c->r[3]; // 80342AD0
  c->r[3]=c->r[3]+0x00000004u; // 80342AD4
  c->lr=0x80342ADCu; f_803414C4(c); // 80342AD8
  c->f[1]=c->f[31]; // 80342ADC
  c->r[7]=c->r[3]|c->r[3]; // 80342AE0
  c->r[5]=c->r[30]|c->r[30]; // 80342AE4
  c->r[6]=c->r[31]|c->r[31]; // 80342AE8
  c->r[3]=c->r[29]+0x0000001Cu; // 80342AEC
  c->r[4]=c->r[29]+0x00000010u; // 80342AF0
  c->lr=0x80342AF8u; f_80341BD8(c); // 80342AF4
  c->r[0]=R32(c->r[29]+0x00000000u); // 80342AF8
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342AFC
  c->r[0]=c->r[0]|0x80000000u; // 80342B00
  W32(c->r[29]+0x00000000u,c->r[0]); // 80342B04
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 80342B08
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 80342B0C
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 80342B10
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80342B14
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80342B18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80342B1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80342B20
  c->r[29]=R32(c->r[1]+0x00000014u); // 80342B24
  c->r[0]=R32(c->r[1]+0x00000034u); // 80342B28
  c->lr=c->r[0]; // 80342B2C
  c->r[1]=c->r[1]+0x00000030u; // 80342B30
  return; // 80342B34
}

// GetAnmResult_ST__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_80342B38(Ctx* __restrict c) {
  trace_call(0x80342B38u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80342B38
  c->r[0]=c->lr; // 80342B3C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80342B40
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80342B44
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80342B48
  c->f[31]=c->f[1]; // 80342B4C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80342B50
  W32(c->r[1]+0x00000028u,c->r[30]); // 80342B54
  c->r[30]=c->r[5]|c->r[5]; // 80342B58
  c->r[4]=c->r[30]|c->r[30]; // 80342B5C
  c->r[5]=c->r[5]+0x00000008u; // 80342B60
  W32(c->r[1]+0x00000024u,c->r[29]); // 80342B64
  c->r[29]=c->r[3]|c->r[3]; // 80342B68
  c->r[3]=c->r[3]+0x00000004u; // 80342B6C
  c->lr=0x80342B74u; f_803414C4(c); // 80342B70
  c->r[31]=c->r[3]|c->r[3]; // 80342B74
  c->r[3]=c->r[29]+0x0000001Cu; // 80342B78
  c->lr=0x80342B80u; f_80295AE8(c); // 80342B7C
  c->f[1]=c->f[31]; // 80342B80
  c->r[4]=c->r[30]|c->r[30]; // 80342B84
  c->r[5]=c->r[31]|c->r[31]; // 80342B88
  c->r[3]=c->r[1]+0x00000008u; // 80342B8C
  c->lr=0x80342B94u; f_80342634(c); // 80342B90
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342B94
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 80342B98
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80342B9C
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 80342BA0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342BA4
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 80342BA8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80342BAC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80342BB0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80342BB4
  c->r[30]=R32(c->r[1]+0x00000028u); // 80342BB8
  c->r[29]=R32(c->r[1]+0x00000024u); // 80342BBC
  c->r[0]=R32(c->r[1]+0x00000044u); // 80342BC0
  c->lr=c->r[0]; // 80342BC4
  c->r[1]=c->r[1]+0x00000040u; // 80342BC8
  return; // 80342BCC
}

// GetAnmResult_SRT__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_80342BD0(Ctx* __restrict c) {
  trace_call(0x80342BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80342BD0
  c->r[0]=c->lr; // 80342BD4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80342BD8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80342BDC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80342BE0
  c->f[31]=c->f[1]; // 80342BE4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80342BE8
  c->r[31]=c->r[5]|c->r[5]; // 80342BEC
  c->r[5]=c->r[5]+0x00000008u; // 80342BF0
  W32(c->r[1]+0x00000028u,c->r[30]); // 80342BF4
  c->r[30]=c->r[4]|c->r[4]; // 80342BF8
  c->r[4]=c->r[31]|c->r[31]; // 80342BFC
  W32(c->r[1]+0x00000024u,c->r[29]); // 80342C00
  c->r[29]=c->r[3]|c->r[3]; // 80342C04
  c->r[3]=c->r[3]+0x00000004u; // 80342C08
  c->lr=0x80342C10u; f_803414C4(c); // 80342C0C
  c->f[1]=c->f[31]; // 80342C10
  c->r[7]=c->r[3]|c->r[3]; // 80342C14
  c->r[5]=c->r[30]|c->r[30]; // 80342C18
  c->r[6]=c->r[31]|c->r[31]; // 80342C1C
  c->r[3]=c->r[29]+0x0000001Cu; // 80342C20
  c->r[4]=c->r[29]+0x00000010u; // 80342C24
  c->lr=0x80342C2Cu; f_80341BD8(c); // 80342C28
  c->f[1]=c->f[31]; // 80342C2C
  c->r[5]=c->r[3]|c->r[3]; // 80342C30
  c->r[4]=c->r[31]|c->r[31]; // 80342C34
  c->r[3]=c->r[1]+0x00000008u; // 80342C38
  c->lr=0x80342C40u; f_80342634(c); // 80342C3C
  c->r[0]=R32(c->r[29]+0x00000000u); // 80342C40
  c->r[0]=c->r[0]|0x80000000u; // 80342C44
  W32(c->r[29]+0x00000000u,c->r[0]); // 80342C48
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342C4C
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 80342C50
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80342C54
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 80342C58
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342C5C
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 80342C60
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80342C64
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80342C68
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80342C6C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80342C70
  c->r[29]=R32(c->r[1]+0x00000024u); // 80342C74
  c->r[0]=R32(c->r[1]+0x00000044u); // 80342C78
  c->lr=c->r[0]; // 80342C7C
  c->r[1]=c->r[1]+0x00000040u; // 80342C80
  return; // 80342C84
}

// GetAnmResult__Q34nw4r3g3d9ResAnmChrCFPQ34nw4r3g3d12ChrAnmResultUlf
void f_80342C88(Ctx* __restrict c) {
  trace_call(0x80342C88u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 80342C88
  c->r[0]=R32(c->r[6]+0x00000010u); // 80342C8C
  cmps(c,0,(int32_t)c->r[0],0); // 80342C90
  if (crb(c,2)) { goto L_80342CA0; } // 80342C94
  c->r[0]=c->r[6]+c->r[0]; // 80342C98
  goto L_80342CA4; // 80342C9C
L_80342CA0:;
  c->r[0]=0u+0x00000000u; // 80342CA0
L_80342CA4:;
  cmps(c,0,(int32_t)c->r[0],0); // 80342CA4
  if (crb(c,2)) { goto L_80342CD4; } // 80342CA8
  c->r[5]=c->r[5]+0x00000001u; // 80342CAC
  c->r[5]=rotl(c->r[5],4)&0xFFFFFFF0u; // 80342CB0
  c->r[5]=c->r[0]+c->r[5]; // 80342CB4
  c->r[5]=R32(c->r[5]+0x00000014u); // 80342CB8
  cmps(c,0,(int32_t)c->r[5],0); // 80342CBC
  if (crb(c,2)) { goto L_80342CCC; } // 80342CC0
  c->r[5]=c->r[0]+c->r[5]; // 80342CC4
  goto L_80342CD8; // 80342CC8
L_80342CCC:;
  c->r[5]=0u+0x00000000u; // 80342CCC
  goto L_80342CD8; // 80342CD0
L_80342CD4:;
  c->r[5]=0u+0x00000000u; // 80342CD4
L_80342CD8:;
  c->r[8]=R32(c->r[5]+0x00000004u); // 80342CD8
  c->r[6]=0u+0x803C0000u; // 80342CDC
  c->r[7]=R32(c->r[3]+0x00000000u); // 80342CE0
  c->r[6]=c->r[6]+0x00004770u; // 80342CE4
  c->r[0]=rotl(c->r[8],12)&0x0000001Cu; // 80342CE8
  c->r[3]=rotl(c->r[8],0)&0x00001FFFu; // 80342CEC
  c->r[12]=R32(c->r[6]+c->r[0]); // 80342CF0
  W32(c->r[4]+0x00000000u,c->r[3]); // 80342CF4
  c->r[3]=c->r[4]|c->r[4]; // 80342CF8
  c->r[4]=c->r[7]+0x0000001Cu; // 80342CFC
  c->ctr=c->r[12]; // 80342D00
  if (true) { dispatch(c,c->ctr); return; } // 80342D04
}

// fn_80342D08
void f_80342D08(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80342D08
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80342D0C
  if (crb(c,2)) { goto L_80342D28; } // 80342D10
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342D14
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80342D18
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 80342D1C
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 80342D20
  return; // 80342D24
L_80342D28:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80342D28
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342D2C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80342D30
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 80342D34
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 80342D38
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 80342D3C
  return; // 80342D40
}

// fn_80342D44
void f_80342D44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80342D44
  c->r[0]=c->lr; // 80342D48
  W32(c->r[1]+0x00000034u,c->r[0]); // 80342D4C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80342D50
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80342D54
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 80342D58
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 80342D5C
  c->r[5]=R32(c->r[3]+0x00000000u); // 80342D60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80342D64
  c->r[31]=c->r[4]|c->r[4]; // 80342D68
  c->r[0]=rotl(c->r[5],0)&0x00000020u; cr0(c,c->r[0]); // 80342D6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80342D70
  c->r[30]=c->r[3]|c->r[3]; // 80342D74
  if (crb(c,2)) { goto L_80342D94; } // 80342D78
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342D7C
  c->r[3]=0u+0x00000001u; // 80342D80
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80342D84
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 80342D88
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 80342D8C
  goto L_80342EB0; // 80342D90
L_80342D94:;
  c->r[0]=rotl(c->r[5],0)&0x80000000u; cr0(c,c->r[0]); // 80342D94
  if (crb(c,2)) { goto L_80342DBC; } // 80342D98
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80342D9C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342DA0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342DA4
  c->r[3]=0u+0x00000001u; // 80342DA8
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 80342DAC
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 80342DB0
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 80342DB4
  goto L_80342EB0; // 80342DB8
L_80342DBC:;
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80342DBC
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342DC0
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[31]=c->ps1[31]=RF32(ea);} // 80342DC4
  c->f[30]=c->ps1[30]=S(-std::fma(c->f[1],c->f[1],-c->f[0])); // 80342DC8
  fcmp(c,0,c->f[30],c->f[31]); // 80342DCC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80342DD0
  if (!crb(c,2)) { goto L_80342DDC; } // 80342DD4
  goto L_80342DE8; // 80342DD8
L_80342DDC:;
  c->f[1]=c->f[30]; // 80342DDC
  c->lr=0x80342DE4u; f_8036AAA4(c); // 80342DE0
  c->f[31]=c->ps1[31]=S(c->f[30]*c->f[1]); // 80342DE4
L_80342DE8:;
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342DE8
  fcmp(c,0,c->f[0],c->f[31]); // 80342DEC
  if (!crb(c,2)) { goto L_80342E5C; } // 80342DF0
  {uint32_t ea=c->r[30]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 80342DF4
  {uint32_t ea=c->r[30]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80342DF8
  {uint32_t ea=c->r[30]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342DFC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342E00
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80342E04
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 80342E08
  c->lr=0x80342E10u; f_8036AD64(c); // 80342E0C
  {uint32_t ea=c->r[30]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80342E10
  {uint32_t ea=c->r[30]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342E14
  {uint32_t ea=c->r[2]+0xFFFFEF90u; c->f[4]=c->ps1[4]=RF32(ea);} // 80342E18
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80342E1C
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80342E20
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[1]); // 80342E24
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342E28
  {uint32_t ea=c->r[2]+0xFFFFEF94u; c->f[4]=c->ps1[4]=RF32(ea);} // 80342E2C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 80342E30
  {uint32_t ea=c->r[2]+0xFFFFEF98u; c->f[3]=c->ps1[3]=RF32(ea);} // 80342E34
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80342E38
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[5]);} // 80342E3C
  c->f[0]=(c->f[0]>=0.0)?c->f[3]:c->f[4]; // 80342E40
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 80342E44
  c->lr=0x80342E4Cu; f_8036AD64(c); // 80342E48
  {uint32_t ea=c->r[2]+0xFFFFEF90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342E4C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80342E50
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 80342E54
  goto L_80342EAC; // 80342E58
L_80342E5C:;
  {uint32_t ea=c->r[30]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80342E5C
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342E60
  c->lr=0x80342E68u; f_8036AD64(c); // 80342E64
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80342E68
  c->f[2]=c->f[31]; // 80342E6C
  {uint32_t ea=c->r[2]+0xFFFFEF90u; c->f[3]=c->ps1[3]=RF32(ea);} // 80342E70
  c->f[0]=-c->f[0]; // 80342E74
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 80342E78
  c->f[1]=c->f[0]; // 80342E7C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[3]);} // 80342E80
  c->lr=0x80342E88u; f_8036AD64(c); // 80342E84
  {uint32_t ea=c->r[2]+0xFFFFEF90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342E88
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80342E8C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80342E90
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80342E94
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 80342E98
  c->lr=0x80342EA0u; f_8036AD64(c); // 80342E9C
  {uint32_t ea=c->r[2]+0xFFFFEF90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342EA0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80342EA4
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 80342EA8
L_80342EAC:;
  c->r[3]=0u+0x00000000u; // 80342EAC
L_80342EB0:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80342EB0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80342EB4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 80342EB8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80342EBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80342EC0
  c->r[0]=R32(c->r[1]+0x00000034u); // 80342EC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80342EC8
  c->lr=c->r[0]; // 80342ECC
  c->r[1]=c->r[1]+0x00000030u; // 80342ED0
  return; // 80342ED4
}

// fn_80342ED8
void f_80342ED8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80342ED8
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80342EDC
  if (crb(c,2)) { goto L_80342EF8; } // 80342EE0
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342EE4
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80342EE8
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 80342EEC
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 80342EF0
  return; // 80342EF4
L_80342EF8:;
  {uint32_t ea=c->r[3]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80342EF8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342EFC
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342F00
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 80342F04
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 80342F08
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 80342F0C
  return; // 80342F10
}

// fn_80342F14
void f_80342F14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80342F14
  c->r[0]=c->lr; // 80342F18
  c->r[5]=R32(c->r[3]+0x00000000u); // 80342F1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80342F20
  c->r[0]=rotl(c->r[5],0)&0x00000020u; cr0(c,c->r[0]); // 80342F24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80342F28
  c->r[31]=c->r[4]|c->r[4]; // 80342F2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80342F30
  c->r[30]=c->r[3]|c->r[3]; // 80342F34
  if (crb(c,2)) { goto L_80342F74; } // 80342F38
  c->r[0]=rotl(c->r[5],0)&0x00000040u; cr0(c,c->r[0]); // 80342F3C
  if (crb(c,2)) { goto L_80342F50; } // 80342F40
  c->r[3]=c->r[31]|c->r[31]; // 80342F44
  c->lr=0x80342F4Cu; f_80295AE8(c); // 80342F48
  goto L_80342FA0; // 80342F4C
L_80342F50:;
  c->r[3]=c->r[31]|c->r[31]; // 80342F50
  c->lr=0x80342F58u; f_80295AE8(c); // 80342F54
  {uint32_t ea=c->r[30]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80342F58
  {uint32_t ea=c->r[30]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80342F5C
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342F60
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[2]);} // 80342F64
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 80342F68
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 80342F6C
  goto L_80342FA0; // 80342F70
L_80342F74:;
  c->r[0]=rotl(c->r[5],0)&0x00000040u; cr0(c,c->r[0]); // 80342F74
  if (crb(c,2)) { goto L_80342F98; } // 80342F78
  c->r[3]=c->r[3]+0x0000001Cu; // 80342F7C
  c->lr=0x80342F84u; f_80295B14(c); // 80342F80
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80342F84
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 80342F88
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 80342F8C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 80342F90
  goto L_80342FA0; // 80342F94
L_80342F98:;
  c->r[3]=c->r[3]+0x0000001Cu; // 80342F98
  c->lr=0x80342FA0u; f_80295B14(c); // 80342F9C
L_80342FA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80342FA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80342FA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80342FA8
  c->lr=c->r[0]; // 80342FAC
  c->r[1]=c->r[1]+0x00000010u; // 80342FB0
  return; // 80342FB4
}

// fn_80342FB8
void f_80342FB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80342FB8
  c->r[0]=c->lr; // 80342FBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80342FC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80342FC4
  c->r[31]=c->r[4]|c->r[4]; // 80342FC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80342FCC
  c->r[30]=c->r[3]|c->r[3]; // 80342FD0
  c->lr=0x80342FD8u; f_80342F14(c); // 80342FD4
  c->r[0]=R32(c->r[30]+0x00000000u); // 80342FD8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80342FDC
  if (!crb(c,2)) { goto L_80342FF4; } // 80342FE0
  c->r[3]=c->r[31]|c->r[31]; // 80342FE4
  c->r[4]=c->r[31]|c->r[31]; // 80342FE8
  c->r[5]=c->r[30]+0x00000004u; // 80342FEC
  c->lr=0x80342FF4u; f_8036B0B0(c); // 80342FF0
L_80342FF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80342FF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80342FF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80342FFC
  c->lr=c->r[0]; // 80343000
  c->r[1]=c->r[1]+0x00000010u; // 80343004
  return; // 80343008
}

// fn_8034300C
void f_8034300C(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034300C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80343010
  fcmp(c,0,c->f[1],c->f[0]); // 80343014
  if (!crb(c,2)) { goto L_80343054; } // 80343018
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034301C
  fcmp(c,0,c->f[1],c->f[0]); // 80343020
  if (!crb(c,2)) { goto L_80343054; } // 80343024
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80343028
  fcmp(c,0,c->f[1],c->f[0]); // 8034302C
  if (!crb(c,2)) { goto L_80343054; } // 80343030
  c->r[0]=R32(c->r[3]+0x00000000u); // 80343034
  c->r[5]=c->r[0]|0x00000018u; // 80343038
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 8034303C
  W32(c->r[3]+0x00000000u,c->r[5]); // 80343040
  if (crb(c,2)) { goto L_80343088; } // 80343044
  c->r[0]=c->r[5]|0x00000002u; // 80343048
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034304C
  goto L_80343088; // 80343050
L_80343054:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 80343054
  c->r[0]=0u+0xFFFFFFE5u; // 80343058
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034305C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343060
  c->r[0]=c->r[5]&c->r[0]; // 80343064
  W32(c->r[3]+0x00000000u,c->r[0]); // 80343068
  fcmp(c,0,c->f[0],c->f[1]); // 8034306C
  if (!crb(c,2)) { goto L_80343088; } // 80343070
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80343074
  fcmp(c,0,c->f[1],c->f[0]); // 80343078
  if (!crb(c,2)) { goto L_80343088; } // 8034307C
  c->r[0]=c->r[0]|0x00000010u; // 80343080
  W32(c->r[3]+0x00000000u,c->r[0]); // 80343084
L_80343088:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80343088
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034308C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80343090
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 80343094
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80343098
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8034309C
  return; // 803430A0
}

// fn_803430A4
void f_803430A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803430A4
  c->r[0]=c->lr; // 803430A8
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[1]=c->ps1[1]=RF32(ea);} // 803430AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803430B0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803430B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803430B8
  c->r[31]=c->r[4]|c->r[4]; // 803430BC
  fcmp(c,0,c->f[1],c->f[0]); // 803430C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803430C4
  c->r[30]=c->r[3]|c->r[3]; // 803430C8
  if (!crb(c,2)) { goto L_80343144; } // 803430CC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803430D0
  fcmp(c,0,c->f[1],c->f[0]); // 803430D4
  if (!crb(c,2)) { goto L_80343144; } // 803430D8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803430DC
  fcmp(c,0,c->f[1],c->f[0]); // 803430E0
  if (!crb(c,2)) { goto L_80343144; } // 803430E4
  c->r[4]=R32(c->r[3]+0x00000000u); // 803430E8
  c->r[5]=0u+0x00000020u; // 803430EC
  c->r[0]=rotl(c->r[4],0)&0x00000040u; cr0(c,c->r[0]); // 803430F0
  if (crb(c,2)) { goto L_80343108; } // 803430F4
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 803430F8
  c->r[5]=c->r[5]|0x00000004u; // 803430FC
  if (crb(c,2)) { goto L_80343108; } // 80343100
  c->r[5]=c->r[5]|0x00000002u; // 80343104
L_80343108:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80343108
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034310C
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343110
  c->r[0]=c->r[0]|c->r[5]; // 80343114
  W32(c->r[3]+0x00000000u,c->r[0]); // 80343118
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 8034311C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 80343120
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 80343124
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80343128
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 8034312C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 80343130
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 80343134
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 80343138
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 8034313C
  goto L_803431C0; // 80343140
L_80343144:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80343144
  {uint32_t ea=c->r[2]+0xFFFFEF80u; c->f[0]=c->ps1[0]=RF32(ea);} // 80343148
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8034314C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343150
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 80343154
  {uint32_t ea=c->r[3]+0x00000048u; c->f[5]=c->ps1[5]=RF32(ea);} // 80343158
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8034315C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 80343160
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80343164
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80343168
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 8034316C
  c->r[3]=c->r[3]+0x0000001Cu; // 80343170
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80343174
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[5]);} // 80343178
  c->lr=0x80343180u; f_8036B1A8(c); // 8034317C
  c->r[3]=R32(c->r[30]+0x00000000u); // 80343180
  c->r[0]=0u+0xFFFFFFD9u; // 80343184
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 80343188
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8034318C
  c->r[0]=c->r[3]&c->r[0]; // 80343190
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80343194
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80343198
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034319C
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803431A0
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[5]);} // 803431A4
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[4]);} // 803431A8
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[3]);} // 803431AC
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[2]);} // 803431B0
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 803431B4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 803431B8
  W32(c->r[30]+0x00000000u,c->r[0]); // 803431BC
L_803431C0:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 803431C0
  c->r[0]=c->r[0]|0x80000000u; // 803431C4
  W32(c->r[30]+0x00000000u,c->r[0]); // 803431C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803431CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803431D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803431D4
  c->lr=c->r[0]; // 803431D8
  c->r[1]=c->r[1]+0x00000020u; // 803431DC
  return; // 803431E0
}

// fn_803431E4
void f_803431E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[1]=c->ps1[1]=RF32(ea);} // 803431E4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803431E8
  fcmp(c,0,c->f[1],c->f[0]); // 803431EC
  if (!crb(c,2)) { goto L_8034323C; } // 803431F0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803431F4
  fcmp(c,0,c->f[1],c->f[0]); // 803431F8
  if (!crb(c,2)) { goto L_8034323C; } // 803431FC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80343200
  fcmp(c,0,c->f[1],c->f[0]); // 80343204
  if (!crb(c,2)) { goto L_8034323C; } // 80343208
  c->r[5]=R32(c->r[3]+0x00000000u); // 8034320C
  c->r[6]=0u+0x00000040u; // 80343210
  c->r[0]=rotl(c->r[5],0)&0x00000020u; cr0(c,c->r[0]); // 80343214
  if (crb(c,2)) { goto L_8034322C; } // 80343218
  c->r[0]=rotl(c->r[5],0)&0x00000008u; cr0(c,c->r[0]); // 8034321C
  c->r[6]=c->r[6]|0x00000004u; // 80343220
  if (crb(c,2)) { goto L_8034322C; } // 80343224
  c->r[6]=c->r[6]|0x00000002u; // 80343228
L_8034322C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8034322C
  c->r[0]=c->r[0]|c->r[6]; // 80343230
  W32(c->r[3]+0x00000000u,c->r[0]); // 80343234
  goto L_8034324C; // 80343238
L_8034323C:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8034323C
  c->r[0]=0u+0xFFFFFFB9u; // 80343240
  c->r[0]=c->r[5]&c->r[0]; // 80343244
  W32(c->r[3]+0x00000000u,c->r[0]); // 80343248
L_8034324C:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8034324C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343250
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80343254
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[2]);} // 80343258
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 8034325C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 80343260
  return; // 80343264
}

// fn_80343268
void f_80343268(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80343268
  c->r[0]=c->lr; // 8034326C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80343270
  c->r[11]=c->r[1]+0x00000030u; // 80343274
  c->lr=0x8034327Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80343278
  c->r[25]=R32(c->r[3]+0x00000000u); // 8034327C
  c->r[28]=c->r[3]|c->r[3]; // 80343280
  c->r[29]=c->r[4]|c->r[4]; // 80343284
  c->r[31]=0u+0x00000000u; // 80343288
  c->r[0]=R32(c->r[25]+0x00000014u); // 8034328C
  c->r[30]=0u+0x00000000u; // 80343290
  cmps(c,0,(int32_t)c->r[0],0); // 80343294
  if (crb(c,2)) { goto L_80343324; } // 80343298
  c->r[3]=c->r[29]|c->r[29]; // 8034329C
  c->lr=0x803432A4u; f_80343D34(c); // 803432A0
  cmps(c,0,(int32_t)c->r[3],0); // 803432A4
  if (crb(c,2)) { goto L_80343324; } // 803432A8
  c->r[4]=R32(c->r[28]+0x00000000u); // 803432AC
  c->r[3]=0u+0x00000001u; // 803432B0
  c->r[31]=0u+0x00000001u; // 803432B4
  c->r[0]=R32(c->r[4]+0x00000014u); // 803432B8
  cmps(c,0,(int32_t)c->r[0],0); // 803432BC
  if (crb(c,2)) { goto L_803432D4; } // 803432C0
  c->r[0]=R16(c->r[4]+0x00000018u); // 803432C4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803432C8
  if (!crb(c,2)) { goto L_803432D4; } // 803432CC
  c->r[3]=0u+0x00000000u; // 803432D0
L_803432D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 803432D4
  if (!crb(c,2)) { goto L_80343320; } // 803432D8
  c->r[0]=R32(c->r[4]+0x00000014u); // 803432DC
  cmps(c,0,(int32_t)c->r[0],0); // 803432E0
  if (crb(c,2)) { goto L_803432F4; } // 803432E4
  c->r[3]=c->r[4]+c->r[0]; // 803432E8
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 803432EC
  goto L_803432F8; // 803432F0
L_803432F4:;
  c->r[0]=0u+0x00000000u; // 803432F4
L_803432F8:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803432F8
  c->r[3]=c->r[29]|c->r[29]; // 803432FC
  c->r[4]=c->r[1]+0x0000000Cu; // 80343300
  c->lr=0x80343308u; f_80343E74(c); // 80343304
  cmps(c,0,(int32_t)c->r[3],0); // 80343308
  if (crb(c,2)) { goto L_80343324; } // 8034330C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80343310
  c->r[30]=0u+0x00000001u; // 80343314
  W16(c->r[25]+0x00000018u,c->r[0]); // 80343318
  goto L_80343324; // 8034331C
L_80343320:;
  c->r[30]=0u+0x00000001u; // 80343320
L_80343324:;
  c->r[3]=c->r[29]|c->r[29]; // 80343324
  c->lr=0x8034332Cu; f_80343D94(c); // 80343328
  cmps(c,0,(int32_t)c->r[3],0); // 8034332C
  if (crb(c,2)) { goto L_803433B0; } // 80343330
  c->r[3]=R32(c->r[28]+0x00000000u); // 80343334
  c->r[26]=c->r[25]+0x0000003Cu; // 80343338
  c->r[24]=0u+0x00000000u; // 8034333C
  c->r[25]=0u+0x00000000u; // 80343340
  c->r[27]=R8(c->r[3]+0x0000001Au); // 80343344
  c->r[31]=c->r[31]+c->r[27]; // 80343348
  goto L_803433A8; // 8034334C
L_80343350:;
  c->r[0]=R16(c->r[26]+0x00000000u); // 80343350
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80343354
  if (crb(c,2)) { goto L_80343364; } // 80343358
  c->r[30]=c->r[30]+0x00000001u; // 8034335C
  goto L_8034339C; // 80343360
L_80343364:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 80343364
  c->r[3]=c->r[29]|c->r[29]; // 80343368
  c->r[4]=c->r[1]+0x00000008u; // 8034336C
  c->r[5]=c->r[5]+0x0000001Cu; // 80343370
  c->r[0]=R32(c->r[5]+c->r[25]); // 80343374
  c->r[5]=c->r[5]+c->r[0]; // 80343378
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 8034337C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80343380
  c->lr=0x80343388u; f_803440A8(c); // 80343384
  cmps(c,0,(int32_t)c->r[3],0); // 80343388
  if (crb(c,2)) { goto L_8034339C; } // 8034338C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80343390
  c->r[30]=c->r[30]+0x00000001u; // 80343394
  W16(c->r[26]+0x00000000u,c->r[0]); // 80343398
L_8034339C:;
  c->r[26]=c->r[26]+0x00000002u; // 8034339C
  c->r[25]=c->r[25]+0x00000004u; // 803433A0
  c->r[24]=c->r[24]+0x00000001u; // 803433A4
L_803433A8:;
  cmpu(c,0,c->r[24],c->r[27]); // 803433A8
  if (crb(c,0)) { IRQCHK(c); goto L_80343350; } // 803433AC
L_803433B0:;
  c->r[0]=c->r[31]-c->r[30]; // 803433B0
  c->r[11]=c->r[1]+0x00000030u; // 803433B4
  c->r[0]=cntlz(c->r[0]); // 803433B8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 803433BC
  c->lr=0x803433C4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803433C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 803433C4
  c->lr=c->r[0]; // 803433C8
  c->r[1]=c->r[1]+0x00000030u; // 803433CC
  return; // 803433D0
}

// GetAnmResult__Q34nw4r3g3d14ResAnmAmbLightCFPQ34nw4r3g3d17AmbLightAnmResultf
void f_803433D4(Ctx* __restrict c) {
  trace_call(0x803433D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803433D4
  c->r[0]=c->lr; // 803433D8
  c->r[5]=R32(c->r[3]+0x00000000u); // 803433DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803433E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803433E4
  c->r[31]=c->r[4]|c->r[4]; // 803433E8
  c->r[0]=R32(c->r[5]+0x00000004u); // 803433EC
  c->r[6]=R32(c->r[5]+0x00000014u); // 803433F0
  cmps(c,0,(int32_t)c->r[0],0); // 803433F4
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 803433F8
  if (crb(c,2)) { goto L_80343408; } // 803433FC
  c->r[3]=c->r[5]+c->r[0]; // 80343400
  goto L_8034340C; // 80343404
L_80343408:;
  c->r[3]=0u+0x00000000u; // 80343408
L_8034340C:;
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034340C
  fcmp(c,0,c->f[1],c->f[0]); // 80343410
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80343414
  if (!crb(c,2)) { goto L_80343420; } // 80343418
  goto L_80343460; // 8034341C
L_80343420:;
  c->r[3]=R16(c->r[3]+0x00000030u); // 80343420
  c->r[0]=0u+0x43300000u; // 80343424
  W32(c->r[1]+0x00000008u,c->r[0]); // 80343428
  {uint32_t ea=c->r[2]+0xFFFFEFA8u; c->f[2]=RF64(ea);} // 8034342C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80343430
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80343434
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80343438
  fcmp(c,0,c->f[0],c->f[1]); // 8034343C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80343440
  if (!crb(c,2)) { goto L_8034345C; } // 80343444
  W32(c->r[1]+0x00000014u,c->r[3]); // 80343448
  W32(c->r[1]+0x00000010u,c->r[0]); // 8034344C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80343450
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80343454
  goto L_80343460; // 80343458
L_8034345C:;
  c->f[0]=c->f[1]; // 8034345C
L_80343460:;
  c->r[0]=rotl(c->r[6],0)&0x00000003u; // 80343460
  cmps(c,0,(int32_t)c->r[7],0); // 80343464
  W32(c->r[4]+0x00000000u,c->r[0]); // 80343468
  if (crb(c,2)) { goto L_80343478; } // 8034346C
  c->r[3]=R32(c->r[5]+0x00000018u); // 80343470
  goto L_8034348C; // 80343474
L_80343478:;
  c->r[0]=R32(c->r[5]+0x00000018u); // 80343478
  c->f[1]=c->f[0]; // 8034347C
  c->r[3]=c->r[5]+c->r[0]; // 80343480
  c->r[3]=c->r[3]+0x00000018u; // 80343484
  c->lr=0x8034348Cu; f_803407E8(c); // 80343488
L_8034348C:;
  W32(c->r[31]+0x00000004u,c->r[3]); // 8034348C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80343490
  c->r[0]=R32(c->r[1]+0x00000024u); // 80343494
  c->lr=c->r[0]; // 80343498
  c->r[1]=c->r[1]+0x00000020u; // 8034349C
  return; // 803434A0
}

// GetAnmResult__Q34nw4r3g3d11ResAnmLightCFPQ34nw4r3g3d14LightAnmResultf
void f_803434A4(Ctx* __restrict c) {
  trace_call(0x803434A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803434A4
  c->r[0]=c->lr; // 803434A8
  W32(c->r[1]+0x00000064u,c->r[0]); // 803434AC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 803434B0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 803434B4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 803434B8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 803434BC
  c->r[11]=c->r[1]+0x00000040u; // 803434C0
  c->lr=0x803434C8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803434C4
  c->r[31]=R32(c->r[3]+0x00000000u); // 803434C8
  c->f[30]=c->f[1]; // 803434CC
  c->r[27]=c->r[4]|c->r[4]; // 803434D0
  c->r[0]=R32(c->r[31]+0x00000004u); // 803434D4
  c->r[30]=R32(c->r[31]+0x0000001Cu); // 803434D8
  cmps(c,0,(int32_t)c->r[0],0); // 803434DC
  if (crb(c,2)) { goto L_803434EC; } // 803434E0
  c->r[3]=c->r[31]+c->r[0]; // 803434E4
  goto L_803434F0; // 803434E8
L_803434EC:;
  c->r[3]=0u+0x00000000u; // 803434EC
L_803434F0:;
  {uint32_t ea=c->r[2]+0xFFFFEFB0u; c->f[31]=c->ps1[31]=RF32(ea);} // 803434F0
  fcmp(c,0,c->f[1],c->f[31]); // 803434F4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803434F8
  if (!crb(c,2)) { goto L_80343504; } // 803434FC
  goto L_80343544; // 80343500
L_80343504:;
  c->r[3]=R16(c->r[3]+0x00000030u); // 80343504
  c->r[0]=0u+0x43300000u; // 80343508
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034350C
  {uint32_t ea=c->r[2]+0xFFFFEFB8u; c->f[2]=RF64(ea);} // 80343510
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80343514
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80343518
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8034351C
  fcmp(c,0,c->f[0],c->f[1]); // 80343520
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80343524
  if (!crb(c,2)) { goto L_80343540; } // 80343528
  W32(c->r[1]+0x00000014u,c->r[3]); // 8034352C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80343530
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80343534
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[2]); // 80343538
  goto L_80343544; // 8034353C
L_80343540:;
  c->f[31]=c->f[30]; // 80343540
L_80343544:;
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 80343544
  c->r[0]=rotl(c->r[30],0)&0x0000003Fu; // 80343548
  W32(c->r[4]+0x00000004u,c->r[0]); // 8034354C
  if (!crb(c,2)) { goto L_803435A0; } // 80343550
  c->f[1]=c->f[31]; // 80343554
  c->lr=0x8034355Cu; f_802C4C30(c); // 80343558
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8034355C
  c->r[0]=R32(c->r[31]+0x00000020u); // 80343560
  c->r[3]=0u+0x80000000u; // 80343564
  c->r[5]=c->r[31]+c->r[0]; // 80343568
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8034356C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 80343570
  c->r[0]=R32(c->r[1]+0x00000014u); // 80343574
  c->r[4]=rotl(c->r[0],29)&0x1FFFFFFCu; // 80343578
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 8034357C
  c->r[4]=c->r[5]+c->r[4]; // 80343580
  c->r[4]=R32(c->r[4]+0x00000020u); // 80343584
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 80343588
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 8034358C
  if (crb(c,2)) { goto L_803435A0; } // 80343590
  c->r[0]=R32(c->r[27]+0x00000004u); // 80343594
  c->r[0]=c->r[0]|0x00000004u; // 80343598
  W32(c->r[27]+0x00000004u,c->r[0]); // 8034359C
L_803435A0:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 803435A0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 803435A4
  if (crb(c,2)) { goto L_80343874; } // 803435A8
  c->r[29]=rotl(c->r[30],0)&0x00000003u; cr0(c,c->r[29]); // 803435AC
  c->r[28]=rotl(c->r[30],29)&0x00000001u; // 803435B0
  c->r[26]=0u+0x00000001u; // 803435B4
  if (!crb(c,2)) { goto L_803435C8; } // 803435B8
  cmps(c,0,(int32_t)c->r[28],0); // 803435BC
  if (!crb(c,2)) { goto L_803435C8; } // 803435C0
  c->r[26]=0u+0x00000000u; // 803435C4
L_803435C8:;
  c->r[0]=rotl(c->r[30],0)&0x00080000u; cr0(c,c->r[0]); // 803435C8
  c->r[25]=rotl(c->r[30],12)&0x00000001u; // 803435CC
  c->r[24]=rotl(c->r[30],11)&0x00000001u; // 803435D0
  c->r[23]=rotl(c->r[30],10)&0x00000001u; // 803435D4
  if (crb(c,2)) { goto L_803435E4; } // 803435D8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 803435DC
  goto L_803435F8; // 803435E0
L_803435E4:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 803435E4
  c->f[1]=c->f[30]; // 803435E8
  c->r[3]=c->r[31]+c->r[0]; // 803435EC
  c->r[3]=c->r[3]+0x00000024u; // 803435F0
  c->lr=0x803435F8u; f_803406BC(c); // 803435F4
L_803435F8:;
  cmps(c,0,(int32_t)c->r[25],0); // 803435F8
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 803435FC
  if (crb(c,2)) { goto L_8034360C; } // 80343600
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343604
  goto L_80343620; // 80343608
L_8034360C:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 8034360C
  c->f[1]=c->f[30]; // 80343610
  c->r[3]=c->r[31]+c->r[0]; // 80343614
  c->r[3]=c->r[3]+0x00000028u; // 80343618
  c->lr=0x80343620u; f_803406BC(c); // 8034361C
L_80343620:;
  cmps(c,0,(int32_t)c->r[24],0); // 80343620
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[1]);} // 80343624
  if (crb(c,2)) { goto L_80343634; } // 80343628
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8034362C
  goto L_80343648; // 80343630
L_80343634:;
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 80343634
  c->f[1]=c->f[30]; // 80343638
  c->r[3]=c->r[31]+c->r[0]; // 8034363C
  c->r[3]=c->r[3]+0x0000002Cu; // 80343640
  c->lr=0x80343648u; f_803406BC(c); // 80343644
L_80343648:;
  cmps(c,0,(int32_t)c->r[23],0); // 80343648
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[1]);} // 8034364C
  if (crb(c,2)) { goto L_8034365C; } // 80343650
  c->r[3]=R32(c->r[31]+0x00000030u); // 80343654
  goto L_80343670; // 80343658
L_8034365C:;
  c->r[0]=R32(c->r[31]+0x00000030u); // 8034365C
  c->f[1]=c->f[31]; // 80343660
  c->r[3]=c->r[31]+c->r[0]; // 80343664
  c->r[3]=c->r[3]+0x00000030u; // 80343668
  c->lr=0x80343670u; f_803407E8(c); // 8034366C
L_80343670:;
  cmps(c,0,(int32_t)c->r[26],0); // 80343670
  W32(c->r[27]+0x00000020u,c->r[3]); // 80343674
  if (crb(c,2)) { goto L_803436FC; } // 80343678
  c->r[0]=rotl(c->r[30],0)&0x01000000u; cr0(c,c->r[0]); // 8034367C
  c->r[23]=rotl(c->r[30],7)&0x00000001u; // 80343680
  c->r[24]=rotl(c->r[30],6)&0x00000001u; // 80343684
  if (crb(c,2)) { goto L_80343694; } // 80343688
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034368C
  goto L_803436A8; // 80343690
L_80343694:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 80343694
  c->f[1]=c->f[30]; // 80343698
  c->r[3]=c->r[31]+c->r[0]; // 8034369C
  c->r[3]=c->r[3]+0x00000034u; // 803436A0
  c->lr=0x803436A8u; f_803406BC(c); // 803436A4
L_803436A8:;
  cmps(c,0,(int32_t)c->r[23],0); // 803436A8
  {uint32_t ea=c->r[27]+0x00000014u; WF32(ea,c->f[1]);} // 803436AC
  if (crb(c,2)) { goto L_803436BC; } // 803436B0
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803436B4
  goto L_803436D0; // 803436B8
L_803436BC:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 803436BC
  c->f[1]=c->f[30]; // 803436C0
  c->r[3]=c->r[31]+c->r[0]; // 803436C4
  c->r[3]=c->r[3]+0x00000038u; // 803436C8
  c->lr=0x803436D0u; f_803406BC(c); // 803436CC
L_803436D0:;
  cmps(c,0,(int32_t)c->r[24],0); // 803436D0
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[1]);} // 803436D4
  if (crb(c,2)) { goto L_803436E4; } // 803436D8
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803436DC
  goto L_803436F8; // 803436E0
L_803436E4:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 803436E4
  c->f[1]=c->f[30]; // 803436E8
  c->r[3]=c->r[31]+c->r[0]; // 803436EC
  c->r[3]=c->r[3]+0x0000003Cu; // 803436F0
  c->lr=0x803436F8u; f_803406BC(c); // 803436F4
L_803436F8:;
  {uint32_t ea=c->r[27]+0x0000001Cu; WF32(ea,c->f[1]);} // 803436F8
L_803436FC:;
  cmps(c,0,(int32_t)c->r[29],1); // 803436FC
  if (crb(c,2)) { goto L_80343810; } // 80343700
  if (!crb(c,0)) { goto L_80343714; } // 80343704
  cmps(c,0,(int32_t)c->r[29],0); // 80343708
  if (!crb(c,0)) { goto L_80343720; } // 8034370C
  goto L_80343810; // 80343710
L_80343714:;
  cmps(c,0,(int32_t)c->r[29],3); // 80343714
  if (!crb(c,0)) { goto L_80343810; } // 80343718
  goto L_80343780; // 8034371C
L_80343720:;
  c->r[0]=rotl(c->r[30],0)&0x10000000u; cr0(c,c->r[0]); // 80343720
  c->r[0]=R32(c->r[31]+0x00000040u); // 80343724
  c->r[23]=rotl(c->r[30],3)&0x00000001u; // 80343728
  W32(c->r[27]+0x00000024u,c->r[0]); // 8034372C
  if (crb(c,2)) { goto L_8034373C; } // 80343730
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343734
  goto L_80343750; // 80343738
L_8034373C:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 8034373C
  c->f[1]=c->f[30]; // 80343740
  c->r[3]=c->r[31]+c->r[0]; // 80343744
  c->r[3]=c->r[3]+0x00000044u; // 80343748
  c->lr=0x80343750u; f_803406BC(c); // 8034374C
L_80343750:;
  cmps(c,0,(int32_t)c->r[23],0); // 80343750
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[1]);} // 80343754
  if (crb(c,2)) { goto L_80343764; } // 80343758
  {uint32_t ea=c->r[31]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034375C
  goto L_80343778; // 80343760
L_80343764:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 80343764
  c->f[1]=c->f[30]; // 80343768
  c->r[3]=c->r[31]+c->r[0]; // 8034376C
  c->r[3]=c->r[3]+0x00000048u; // 80343770
  c->lr=0x80343778u; f_803406BC(c); // 80343774
L_80343778:;
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[1]);} // 80343778
  goto L_80343810; // 8034377C
L_80343780:;
  c->r[3]=R32(c->r[31]+0x00000040u); // 80343780
  c->r[0]=rotl(c->r[30],0)&0x08000000u; cr0(c,c->r[0]); // 80343784
  c->r[23]=rotl(c->r[30],4)&0x00000001u; // 80343788
  c->r[24]=rotl(c->r[30],3)&0x00000001u; // 8034378C
  W32(c->r[27]+0x00000024u,c->r[3]); // 80343790
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 80343794
  W32(c->r[27]+0x00000030u,c->r[0]); // 80343798
  if (crb(c,2)) { goto L_803437A8; } // 8034379C
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 803437A0
  goto L_803437BC; // 803437A4
L_803437A8:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 803437A8
  c->f[1]=c->f[30]; // 803437AC
  c->r[3]=c->r[31]+c->r[0]; // 803437B0
  c->r[3]=c->r[3]+0x00000050u; // 803437B4
  c->lr=0x803437BCu; f_803406BC(c); // 803437B8
L_803437BC:;
  cmps(c,0,(int32_t)c->r[23],0); // 803437BC
  {uint32_t ea=c->r[27]+0x00000034u; WF32(ea,c->f[1]);} // 803437C0
  if (crb(c,2)) { goto L_803437D0; } // 803437C4
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 803437C8
  goto L_803437E4; // 803437CC
L_803437D0:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 803437D0
  c->f[1]=c->f[30]; // 803437D4
  c->r[3]=c->r[31]+c->r[0]; // 803437D8
  c->r[3]=c->r[3]+0x00000044u; // 803437DC
  c->lr=0x803437E4u; f_803406BC(c); // 803437E0
L_803437E4:;
  cmps(c,0,(int32_t)c->r[24],0); // 803437E4
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[1]);} // 803437E8
  if (crb(c,2)) { goto L_803437F8; } // 803437EC
  {uint32_t ea=c->r[31]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 803437F0
  goto L_8034380C; // 803437F4
L_803437F8:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 803437F8
  c->f[1]=c->f[30]; // 803437FC
  c->r[3]=c->r[31]+c->r[0]; // 80343800
  c->r[3]=c->r[3]+0x00000048u; // 80343804
  c->lr=0x8034380Cu; f_803406BC(c); // 80343808
L_8034380C:;
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[1]);} // 8034380C
L_80343810:;
  cmps(c,0,(int32_t)c->r[28],0); // 80343810
  if (crb(c,2)) { goto L_80343874; } // 80343814
  c->r[0]=rotl(c->r[30],0)&0x40000000u; cr0(c,c->r[0]); // 80343818
  c->r[23]=rotl(c->r[30],1)&0x00000001u; // 8034381C
  if (crb(c,2)) { goto L_8034382C; } // 80343820
  c->r[3]=R32(c->r[31]+0x00000054u); // 80343824
  goto L_80343840; // 80343828
L_8034382C:;
  c->r[0]=R32(c->r[31]+0x00000054u); // 8034382C
  c->f[1]=c->f[31]; // 80343830
  c->r[3]=c->r[31]+c->r[0]; // 80343834
  c->r[3]=c->r[3]+0x00000054u; // 80343838
  c->lr=0x80343840u; f_803407E8(c); // 8034383C
L_80343840:;
  cmps(c,0,(int32_t)c->r[23],0); // 80343840
  W32(c->r[27]+0x00000038u,c->r[3]); // 80343844
  if (crb(c,2)) { goto L_80343854; } // 80343848
  {uint32_t ea=c->r[31]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034384C
  goto L_80343868; // 80343850
L_80343854:;
  c->r[0]=R32(c->r[31]+0x00000058u); // 80343854
  c->f[1]=c->f[30]; // 80343858
  c->r[3]=c->r[31]+c->r[0]; // 8034385C
  c->r[3]=c->r[3]+0x00000058u; // 80343860
  c->lr=0x80343868u; f_803406BC(c); // 80343864
L_80343868:;
  {uint32_t ea=c->r[27]+0x0000003Cu; WF32(ea,c->f[1]);} // 80343868
  c->r[0]=R32(c->r[31]+0x00000014u); // 8034386C
  W32(c->r[27]+0x00000000u,c->r[0]); // 80343870
L_80343874:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80343874
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80343878
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 8034387C
  c->r[11]=c->r[1]+0x00000040u; // 80343880
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80343884
  c->lr=0x8034388Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80343888
  c->r[0]=R32(c->r[1]+0x00000064u); // 8034388C
  c->lr=c->r[0]; // 80343890
  c->r[1]=c->r[1]+0x00000060u; // 80343894
  return; // 80343898
}

// GetAnmResult__Q34nw4r3g3d9ResAnmFogCFPQ34nw4r3g3d12FogAnmResultf
void f_8034389C(Ctx* __restrict c) {
  trace_call(0x8034389Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034389C
  c->r[0]=c->lr; // 803438A0
  W32(c->r[1]+0x00000054u,c->r[0]); // 803438A4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 803438A8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 803438AC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 803438B0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 803438B4
  c->f[30]=c->f[1]; // 803438B8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803438BC
  c->r[31]=R32(c->r[3]+0x00000000u); // 803438C0
  W32(c->r[1]+0x00000028u,c->r[30]); // 803438C4
  W32(c->r[1]+0x00000024u,c->r[29]); // 803438C8
  W32(c->r[1]+0x00000020u,c->r[28]); // 803438CC
  c->r[28]=c->r[4]|c->r[4]; // 803438D0
  c->r[0]=R32(c->r[31]+0x00000004u); // 803438D4
  c->r[5]=R32(c->r[31]+0x00000014u); // 803438D8
  cmps(c,0,(int32_t)c->r[0],0); // 803438DC
  if (crb(c,2)) { goto L_803438EC; } // 803438E0
  c->r[3]=c->r[31]+c->r[0]; // 803438E4
  goto L_803438F0; // 803438E8
L_803438EC:;
  c->r[3]=0u+0x00000000u; // 803438EC
L_803438F0:;
  {uint32_t ea=c->r[2]+0xFFFFEFC0u; c->f[31]=c->ps1[31]=RF32(ea);} // 803438F0
  fcmp(c,0,c->f[1],c->f[31]); // 803438F4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803438F8
  if (!crb(c,2)) { goto L_80343904; } // 803438FC
  goto L_80343944; // 80343900
L_80343904:;
  c->r[3]=R16(c->r[3]+0x00000030u); // 80343904
  c->r[0]=0u+0x43300000u; // 80343908
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034390C
  {uint32_t ea=c->r[2]+0xFFFFEFC8u; c->f[2]=RF64(ea);} // 80343910
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80343914
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80343918
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8034391C
  fcmp(c,0,c->f[0],c->f[1]); // 80343920
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80343924
  if (!crb(c,2)) { goto L_80343940; } // 80343928
  W32(c->r[1]+0x00000014u,c->r[3]); // 8034392C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80343930
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80343934
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[2]); // 80343938
  goto L_80343944; // 8034393C
L_80343940:;
  c->f[31]=c->f[30]; // 80343940
L_80343944:;
  c->r[0]=rotl(c->r[5],0)&0x20000000u; cr0(c,c->r[0]); // 80343944
  c->r[0]=R32(c->r[31]+0x00000018u); // 80343948
  c->r[30]=rotl(c->r[5],2)&0x00000001u; // 8034394C
  c->r[29]=rotl(c->r[5],1)&0x00000001u; // 80343950
  W32(c->r[4]+0x00000000u,c->r[0]); // 80343954
  if (crb(c,2)) { goto L_80343964; } // 80343958
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8034395C
  goto L_80343978; // 80343960
L_80343964:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80343964
  c->f[1]=c->f[30]; // 80343968
  c->r[3]=c->r[31]+c->r[0]; // 8034396C
  c->r[3]=c->r[3]+0x0000001Cu; // 80343970
  c->lr=0x80343978u; f_803406BC(c); // 80343974
L_80343978:;
  cmps(c,0,(int32_t)c->r[30],0); // 80343978
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 8034397C
  if (crb(c,2)) { goto L_8034398C; } // 80343980
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343984
  goto L_803439A0; // 80343988
L_8034398C:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 8034398C
  c->f[1]=c->f[30]; // 80343990
  c->r[3]=c->r[31]+c->r[0]; // 80343994
  c->r[3]=c->r[3]+0x00000020u; // 80343998
  c->lr=0x803439A0u; f_803406BC(c); // 8034399C
L_803439A0:;
  cmps(c,0,(int32_t)c->r[29],0); // 803439A0
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 803439A4
  if (crb(c,2)) { goto L_803439B4; } // 803439A8
  c->r[3]=R32(c->r[31]+0x00000024u); // 803439AC
  goto L_803439C8; // 803439B0
L_803439B4:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 803439B4
  c->f[1]=c->f[31]; // 803439B8
  c->r[3]=c->r[31]+c->r[0]; // 803439BC
  c->r[3]=c->r[3]+0x00000024u; // 803439C0
  c->lr=0x803439C8u; f_803407E8(c); // 803439C4
L_803439C8:;
  W32(c->r[28]+0x0000000Cu,c->r[3]); // 803439C8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 803439CC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 803439D0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 803439D4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 803439D8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803439DC
  c->r[30]=R32(c->r[1]+0x00000028u); // 803439E0
  c->r[29]=R32(c->r[1]+0x00000024u); // 803439E4
  c->r[28]=R32(c->r[1]+0x00000020u); // 803439E8
  c->r[0]=R32(c->r[1]+0x00000054u); // 803439EC
  c->lr=c->r[0]; // 803439F0
  c->r[1]=c->r[1]+0x00000050u; // 803439F4
  return; // 803439F8
}

// fn_803439FC
void f_803439FC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 803439FC
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80343A00
  cmps(c,0,(int32_t)c->r[0],0); // 80343A04
  if (crb(c,2)) { goto L_80343A14; } // 80343A08
  c->r[3]=c->r[3]+c->r[0]; // 80343A0C
  return; // 80343A10
L_80343A14:;
  c->r[3]=0u+0x00000000u; // 80343A14
  return; // 80343A18
}

// GetAnmResult__Q34nw4r3g3d12ResAnmCameraCFPQ34nw4r3g3d15CameraAnmResultf
void f_80343A1C(Ctx* __restrict c) {
  trace_call(0x80343A1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80343A1C
  c->r[0]=c->lr; // 80343A20
  W32(c->r[1]+0x00000044u,c->r[0]); // 80343A24
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80343A28
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80343A2C
  c->r[11]=c->r[1]+0x00000030u; // 80343A30
  c->lr=0x80343A38u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80343A34
  c->r[31]=R32(c->r[3]+0x00000000u); // 80343A38
  c->f[31]=c->f[1]; // 80343A3C
  c->r[26]=c->r[4]|c->r[4]; // 80343A40
  c->r[30]=R32(c->r[31]+0x00000018u); // 80343A44
  c->r[3]=rotl(c->r[30],0)&0x00000003u; // 80343A48
  c->r[0]=rotl(c->r[30],0)&0x00020000u; cr0(c,c->r[0]); // 80343A4C
  W32(c->r[4]+0x00000000u,c->r[3]); // 80343A50
  c->r[25]=rotl(c->r[30],14)&0x00000001u; // 80343A54
  c->r[24]=rotl(c->r[30],13)&0x00000001u; // 80343A58
  c->r[23]=rotl(c->r[30],12)&0x00000001u; // 80343A5C
  c->r[0]=R32(c->r[31]+0x00000014u); // 80343A60
  c->r[29]=rotl(c->r[30],11)&0x00000001u; // 80343A64
  c->r[28]=rotl(c->r[30],10)&0x00000001u; // 80343A68
  c->r[27]=rotl(c->r[30],0)&0x00000001u; // 80343A6C
  W32(c->r[4]+0x00000004u,c->r[0]); // 80343A70
  if (crb(c,2)) { goto L_80343A80; } // 80343A74
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343A78
  goto L_80343A90; // 80343A7C
L_80343A80:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 80343A80
  c->r[3]=c->r[31]+c->r[0]; // 80343A84
  c->r[3]=c->r[3]+0x00000020u; // 80343A88
  c->lr=0x80343A90u; f_803406BC(c); // 80343A8C
L_80343A90:;
  cmps(c,0,(int32_t)c->r[25],0); // 80343A90
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[1]);} // 80343A94
  if (crb(c,2)) { goto L_80343AA4; } // 80343A98
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343A9C
  goto L_80343AB8; // 80343AA0
L_80343AA4:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 80343AA4
  c->f[1]=c->f[31]; // 80343AA8
  c->r[3]=c->r[31]+c->r[0]; // 80343AAC
  c->r[3]=c->r[3]+0x00000024u; // 80343AB0
  c->lr=0x80343AB8u; f_803406BC(c); // 80343AB4
L_80343AB8:;
  cmps(c,0,(int32_t)c->r[24],0); // 80343AB8
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[1]);} // 80343ABC
  if (crb(c,2)) { goto L_80343ACC; } // 80343AC0
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343AC4
  goto L_80343AE0; // 80343AC8
L_80343ACC:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 80343ACC
  c->f[1]=c->f[31]; // 80343AD0
  c->r[3]=c->r[31]+c->r[0]; // 80343AD4
  c->r[3]=c->r[3]+0x00000028u; // 80343AD8
  c->lr=0x80343AE0u; f_803406BC(c); // 80343ADC
L_80343AE0:;
  cmps(c,0,(int32_t)c->r[23],0); // 80343AE0
  {uint32_t ea=c->r[26]+0x00000010u; WF32(ea,c->f[1]);} // 80343AE4
  if (crb(c,2)) { goto L_80343AF4; } // 80343AE8
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80343AEC
  goto L_80343B08; // 80343AF0
L_80343AF4:;
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 80343AF4
  c->f[1]=c->f[31]; // 80343AF8
  c->r[3]=c->r[31]+c->r[0]; // 80343AFC
  c->r[3]=c->r[3]+0x0000002Cu; // 80343B00
  c->lr=0x80343B08u; f_803406BC(c); // 80343B04
L_80343B08:;
  cmps(c,0,(int32_t)c->r[29],0); // 80343B08
  {uint32_t ea=c->r[26]+0x00000014u; WF32(ea,c->f[1]);} // 80343B0C
  if (crb(c,2)) { goto L_80343B1C; } // 80343B10
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343B14
  goto L_80343B30; // 80343B18
L_80343B1C:;
  c->r[0]=R32(c->r[31]+0x00000030u); // 80343B1C
  c->f[1]=c->f[31]; // 80343B20
  c->r[3]=c->r[31]+c->r[0]; // 80343B24
  c->r[3]=c->r[3]+0x00000030u; // 80343B28
  c->lr=0x80343B30u; f_803406BC(c); // 80343B2C
L_80343B30:;
  cmps(c,0,(int32_t)c->r[28],0); // 80343B30
  {uint32_t ea=c->r[26]+0x00000018u; WF32(ea,c->f[1]);} // 80343B34
  if (crb(c,2)) { goto L_80343B44; } // 80343B38
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343B3C
  goto L_80343B58; // 80343B40
L_80343B44:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 80343B44
  c->f[1]=c->f[31]; // 80343B48
  c->r[3]=c->r[31]+c->r[0]; // 80343B4C
  c->r[3]=c->r[3]+0x00000034u; // 80343B50
  c->lr=0x80343B58u; f_803406BC(c); // 80343B54
L_80343B58:;
  cmps(c,0,(int32_t)c->r[27],1); // 80343B58
  {uint32_t ea=c->r[26]+0x0000001Cu; WF32(ea,c->f[1]);} // 80343B5C
  if (crb(c,2)) { goto L_80343BF8; } // 80343B60
  if (!crb(c,0)) { goto L_80343CA4; } // 80343B64
  cmps(c,0,(int32_t)c->r[27],0); // 80343B68
  if (!crb(c,0)) { goto L_80343B74; } // 80343B6C
  goto L_80343CA4; // 80343B70
L_80343B74:;
  c->r[0]=rotl(c->r[30],0)&0x20000000u; cr0(c,c->r[0]); // 80343B74
  c->r[23]=rotl(c->r[30],2)&0x00000001u; // 80343B78
  c->r[24]=rotl(c->r[30],1)&0x00000001u; // 80343B7C
  if (crb(c,2)) { goto L_80343B8C; } // 80343B80
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343B84
  goto L_80343BA0; // 80343B88
L_80343B8C:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 80343B8C
  c->f[1]=c->f[31]; // 80343B90
  c->r[3]=c->r[31]+c->r[0]; // 80343B94
  c->r[3]=c->r[3]+0x00000038u; // 80343B98
  c->lr=0x80343BA0u; f_803406BC(c); // 80343B9C
L_80343BA0:;
  cmps(c,0,(int32_t)c->r[23],0); // 80343BA0
  {uint32_t ea=c->r[26]+0x00000020u; WF32(ea,c->f[1]);} // 80343BA4
  if (crb(c,2)) { goto L_80343BB4; } // 80343BA8
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80343BAC
  goto L_80343BC8; // 80343BB0
L_80343BB4:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 80343BB4
  c->f[1]=c->f[31]; // 80343BB8
  c->r[3]=c->r[31]+c->r[0]; // 80343BBC
  c->r[3]=c->r[3]+0x0000003Cu; // 80343BC0
  c->lr=0x80343BC8u; f_803406BC(c); // 80343BC4
L_80343BC8:;
  cmps(c,0,(int32_t)c->r[24],0); // 80343BC8
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[1]);} // 80343BCC
  if (crb(c,2)) { goto L_80343BDC; } // 80343BD0
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343BD4
  goto L_80343BF0; // 80343BD8
L_80343BDC:;
  c->r[0]=R32(c->r[31]+0x00000040u); // 80343BDC
  c->f[1]=c->f[31]; // 80343BE0
  c->r[3]=c->r[31]+c->r[0]; // 80343BE4
  c->r[3]=c->r[3]+0x00000040u; // 80343BE8
  c->lr=0x80343BF0u; f_803406BC(c); // 80343BEC
L_80343BF0:;
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[1]);} // 80343BF0
  goto L_80343CA4; // 80343BF4
L_80343BF8:;
  c->r[0]=rotl(c->r[30],0)&0x02000000u; cr0(c,c->r[0]); // 80343BF8
  c->r[23]=rotl(c->r[30],6)&0x00000001u; // 80343BFC
  c->r[24]=rotl(c->r[30],5)&0x00000001u; // 80343C00
  c->r[25]=rotl(c->r[30],4)&0x00000001u; // 80343C04
  if (crb(c,2)) { goto L_80343C14; } // 80343C08
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343C0C
  goto L_80343C28; // 80343C10
L_80343C14:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 80343C14
  c->f[1]=c->f[31]; // 80343C18
  c->r[3]=c->r[31]+c->r[0]; // 80343C1C
  c->r[3]=c->r[3]+0x00000044u; // 80343C20
  c->lr=0x80343C28u; f_803406BC(c); // 80343C24
L_80343C28:;
  cmps(c,0,(int32_t)c->r[23],0); // 80343C28
  {uint32_t ea=c->r[26]+0x00000020u; WF32(ea,c->f[1]);} // 80343C2C
  if (crb(c,2)) { goto L_80343C3C; } // 80343C30
  {uint32_t ea=c->r[31]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343C34
  goto L_80343C50; // 80343C38
L_80343C3C:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 80343C3C
  c->f[1]=c->f[31]; // 80343C40
  c->r[3]=c->r[31]+c->r[0]; // 80343C44
  c->r[3]=c->r[3]+0x00000048u; // 80343C48
  c->lr=0x80343C50u; f_803406BC(c); // 80343C4C
L_80343C50:;
  cmps(c,0,(int32_t)c->r[24],0); // 80343C50
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[1]);} // 80343C54
  if (crb(c,2)) { goto L_80343C64; } // 80343C58
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80343C5C
  goto L_80343C78; // 80343C60
L_80343C64:;
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 80343C64
  c->f[1]=c->f[31]; // 80343C68
  c->r[3]=c->r[31]+c->r[0]; // 80343C6C
  c->r[3]=c->r[3]+0x0000004Cu; // 80343C70
  c->lr=0x80343C78u; f_803406BC(c); // 80343C74
L_80343C78:;
  cmps(c,0,(int32_t)c->r[25],0); // 80343C78
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[1]);} // 80343C7C
  if (crb(c,2)) { goto L_80343C8C; } // 80343C80
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343C84
  goto L_80343CA0; // 80343C88
L_80343C8C:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 80343C8C
  c->f[1]=c->f[31]; // 80343C90
  c->r[3]=c->r[31]+c->r[0]; // 80343C94
  c->r[3]=c->r[3]+0x00000050u; // 80343C98
  c->lr=0x80343CA0u; f_803406BC(c); // 80343C9C
L_80343CA0:;
  {uint32_t ea=c->r[26]+0x0000002Cu; WF32(ea,c->f[1]);} // 80343CA0
L_80343CA4:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 80343CA4
  cmps(c,0,(int32_t)c->r[0],1); // 80343CA8
  if (crb(c,2)) { goto L_80343CEC; } // 80343CAC
  if (!crb(c,0)) { goto L_80343D14; } // 80343CB0
  cmps(c,0,(int32_t)c->r[0],0); // 80343CB4
  if (!crb(c,0)) { goto L_80343CC0; } // 80343CB8
  goto L_80343D14; // 80343CBC
L_80343CC0:;
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 80343CC0
  if (crb(c,2)) { goto L_80343CD0; } // 80343CC4
  {uint32_t ea=c->r[31]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343CC8
  goto L_80343CE4; // 80343CCC
L_80343CD0:;
  c->r[0]=R32(c->r[31]+0x00000054u); // 80343CD0
  c->f[1]=c->f[31]; // 80343CD4
  c->r[3]=c->r[31]+c->r[0]; // 80343CD8
  c->r[3]=c->r[3]+0x00000054u; // 80343CDC
  c->lr=0x80343CE4u; f_803406BC(c); // 80343CE0
L_80343CE4:;
  {uint32_t ea=c->r[26]+0x00000030u; WF32(ea,c->f[1]);} // 80343CE4
  goto L_80343D14; // 80343CE8
L_80343CEC:;
  c->r[0]=rotl(c->r[30],0)&0x01000000u; cr0(c,c->r[0]); // 80343CEC
  if (crb(c,2)) { goto L_80343CFC; } // 80343CF0
  {uint32_t ea=c->r[31]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 80343CF4
  goto L_80343D10; // 80343CF8
L_80343CFC:;
  c->r[0]=R32(c->r[31]+0x00000058u); // 80343CFC
  c->f[1]=c->f[31]; // 80343D00
  c->r[3]=c->r[31]+c->r[0]; // 80343D04
  c->r[3]=c->r[3]+0x00000058u; // 80343D08
  c->lr=0x80343D10u; f_803406BC(c); // 80343D0C
L_80343D10:;
  {uint32_t ea=c->r[26]+0x00000030u; WF32(ea,c->f[1]);} // 80343D10
L_80343D14:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80343D14
  c->r[11]=c->r[1]+0x00000030u; // 80343D18
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80343D1C
  c->lr=0x80343D24u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80343D20
  c->r[0]=R32(c->r[1]+0x00000044u); // 80343D24
  c->lr=c->r[0]; // 80343D28
  c->r[1]=c->r[1]+0x00000040u; // 80343D2C
  return; // 80343D30
}

// fn_80343D34
void f_80343D34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80343D34
  c->r[0]=c->lr; // 80343D38
  c->r[3]=R32(c->r[3]+0x00000000u); // 80343D3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80343D40
  c->r[0]=R32(c->r[3]+0x00000010u); // 80343D44
  cmps(c,0,(int32_t)c->r[0],0); // 80343D48
  if (crb(c,2)) { goto L_80343D58; } // 80343D4C
  c->r[0]=c->r[3]+c->r[0]; // 80343D50
  goto L_80343D5C; // 80343D54
L_80343D58:;
  c->r[0]=0u+0x00000000u; // 80343D58
L_80343D5C:;
  c->r[3]=0u+0x80540000u; // 80343D5C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80343D60
  c->r[3]=c->r[3]+0x00007960u; // 80343D64
  c->r[4]=c->r[1]+0x00000008u; // 80343D68
  W32(c->r[1]+0x00000008u,c->r[3]); // 80343D6C
  c->r[3]=c->r[1]+0x0000000Cu; // 80343D70
  c->lr=0x80343D78u; f_8033B044(c); // 80343D74
  c->r[0]=0u-c->r[3]; // 80343D78
  c->r[0]=c->r[0]|c->r[3]; // 80343D7C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80343D80
  c->r[0]=R32(c->r[1]+0x00000014u); // 80343D84
  c->lr=c->r[0]; // 80343D88
  c->r[1]=c->r[1]+0x00000010u; // 80343D8C
  return; // 80343D90
}

// fn_80343D94
void f_80343D94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80343D94
  c->r[0]=c->lr; // 80343D98
  c->r[3]=R32(c->r[3]+0x00000000u); // 80343D9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80343DA0
  c->r[0]=R32(c->r[3]+0x00000010u); // 80343DA4
  cmps(c,0,(int32_t)c->r[0],0); // 80343DA8
  if (crb(c,2)) { goto L_80343DB8; } // 80343DAC
  c->r[0]=c->r[3]+c->r[0]; // 80343DB0
  goto L_80343DBC; // 80343DB4
L_80343DB8:;
  c->r[0]=0u+0x00000000u; // 80343DB8
L_80343DBC:;
  c->r[3]=0u+0x80540000u; // 80343DBC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80343DC0
  c->r[3]=c->r[3]+0x00007980u; // 80343DC4
  c->r[4]=c->r[1]+0x00000008u; // 80343DC8
  W32(c->r[1]+0x00000008u,c->r[3]); // 80343DCC
  c->r[3]=c->r[1]+0x0000000Cu; // 80343DD0
  c->lr=0x80343DD8u; f_8033B044(c); // 80343DD4
  c->r[0]=0u-c->r[3]; // 80343DD8
  c->r[0]=c->r[0]|c->r[3]; // 80343DDC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80343DE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80343DE4
  c->lr=c->r[0]; // 80343DE8
  c->r[1]=c->r[1]+0x00000010u; // 80343DEC
  return; // 80343DF0
}

// fn_80343DF4
void f_80343DF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80343DF4
  c->r[0]=c->lr; // 80343DF8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80343DFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80343E00
  c->r[0]=R32(c->r[3]+0x00000010u); // 80343E04
  cmps(c,0,(int32_t)c->r[0],0); // 80343E08
  if (crb(c,2)) { goto L_80343E18; } // 80343E0C
  c->r[0]=c->r[3]+c->r[0]; // 80343E10
  goto L_80343E1C; // 80343E14
L_80343E18:;
  c->r[0]=0u+0x00000000u; // 80343E18
L_80343E1C:;
  c->r[3]=0u+0x80540000u; // 80343E1C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80343E20
  c->r[3]=c->r[3]+0x00007940u; // 80343E24
  c->r[4]=c->r[1]+0x00000008u; // 80343E28
  W32(c->r[1]+0x00000008u,c->r[3]); // 80343E2C
  c->r[3]=c->r[1]+0x0000000Cu; // 80343E30
  c->lr=0x80343E38u; f_8033B044(c); // 80343E34
  cmps(c,0,(int32_t)c->r[3],0); // 80343E38
  if (crb(c,2)) { goto L_80343E60; } // 80343E3C
  c->r[0]=0u-c->r[3]; // 80343E40
  c->r[0]=c->r[0]|c->r[3]; // 80343E44
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80343E48
  if (crb(c,2)) { goto L_80343E58; } // 80343E4C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80343E50
  goto L_80343E64; // 80343E54
L_80343E58:;
  c->r[3]=0u+0x00000000u; // 80343E58
  goto L_80343E64; // 80343E5C
L_80343E60:;
  c->r[3]=0u+0x00000000u; // 80343E60
L_80343E64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80343E64
  c->lr=c->r[0]; // 80343E68
  c->r[1]=c->r[1]+0x00000010u; // 80343E6C
  return; // 80343E70
}

// fn_80343E74
void f_80343E74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80343E74
  c->r[0]=c->lr; // 80343E78
  c->r[3]=R32(c->r[3]+0x00000000u); // 80343E7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80343E80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80343E84
  c->r[31]=c->r[4]|c->r[4]; // 80343E88
  c->r[0]=R32(c->r[3]+0x00000010u); // 80343E8C
  cmps(c,0,(int32_t)c->r[0],0); // 80343E90
  if (crb(c,2)) { goto L_80343EA0; } // 80343E94
  c->r[0]=c->r[3]+c->r[0]; // 80343E98
  goto L_80343EA4; // 80343E9C
L_80343EA0:;
  c->r[0]=0u+0x00000000u; // 80343EA0
L_80343EA4:;
  c->r[3]=0u+0x80540000u; // 80343EA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80343EA8
  c->r[3]=c->r[3]+0x00007960u; // 80343EAC
  c->r[4]=c->r[1]+0x00000010u; // 80343EB0
  W32(c->r[1]+0x00000010u,c->r[3]); // 80343EB4
  c->r[3]=c->r[1]+0x00000014u; // 80343EB8
  c->lr=0x80343EC0u; f_8033B044(c); // 80343EBC
  cmps(c,0,(int32_t)c->r[3],0); // 80343EC0
  if (crb(c,2)) { goto L_80343EE4; } // 80343EC4
  c->r[0]=R32(c->r[31]+0x00000000u); // 80343EC8
  c->r[4]=c->r[1]+0x00000008u; // 80343ECC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80343ED0
  c->r[3]=c->r[1]+0x0000000Cu; // 80343ED4
  W32(c->r[1]+0x00000008u,c->r[0]); // 80343ED8
  c->lr=0x80343EE0u; f_8033B044(c); // 80343EDC
  goto L_80343EE8; // 80343EE0
L_80343EE4:;
  c->r[3]=0u+0x00000000u; // 80343EE4
L_80343EE8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80343EE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80343EEC
  c->lr=c->r[0]; // 80343EF0
  c->r[1]=c->r[1]+0x00000020u; // 80343EF4
  return; // 80343EF8
}

// fn_80343EFC
void f_80343EFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80343EFC
  c->r[0]=c->lr; // 80343F00
  c->r[3]=R32(c->r[3]+0x00000000u); // 80343F04
  W32(c->r[1]+0x00000024u,c->r[0]); // 80343F08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80343F0C
  c->r[31]=c->r[4]|c->r[4]; // 80343F10
  c->r[0]=R32(c->r[3]+0x00000010u); // 80343F14
  cmps(c,0,(int32_t)c->r[0],0); // 80343F18
  if (crb(c,2)) { goto L_80343F28; } // 80343F1C
  c->r[0]=c->r[3]+c->r[0]; // 80343F20
  goto L_80343F2C; // 80343F24
L_80343F28:;
  c->r[0]=0u+0x00000000u; // 80343F28
L_80343F2C:;
  c->r[3]=0u+0x80540000u; // 80343F2C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80343F30
  c->r[3]=c->r[3]+0x00007960u; // 80343F34
  c->r[4]=c->r[1]+0x0000000Cu; // 80343F38
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80343F3C
  c->r[3]=c->r[1]+0x00000008u; // 80343F40
  c->lr=0x80343F48u; f_8033B044(c); // 80343F44
  cmps(c,0,(int32_t)c->r[3],0); // 80343F48
  if (crb(c,2)) { goto L_80343F90; } // 80343F4C
  c->r[0]=0u-c->r[3]; // 80343F50
  c->r[0]=c->r[0]|c->r[3]; // 80343F54
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80343F58
  if (crb(c,2)) { goto L_80343F88; } // 80343F5C
  c->r[0]=c->r[31]+0x00000001u; // 80343F60
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80343F64
  c->r[4]=c->r[3]+c->r[0]; // 80343F68
  c->r[0]=R32(c->r[4]+0x00000014u); // 80343F6C
  cmps(c,0,(int32_t)c->r[0],0); // 80343F70
  if (crb(c,2)) { goto L_80343F80; } // 80343F74
  c->r[3]=c->r[3]+c->r[0]; // 80343F78
  goto L_80343F94; // 80343F7C
L_80343F80:;
  c->r[3]=0u+0x00000000u; // 80343F80
  goto L_80343F94; // 80343F84
L_80343F88:;
  c->r[3]=0u+0x00000000u; // 80343F88
  goto L_80343F94; // 80343F8C
L_80343F90:;
  c->r[3]=0u+0x00000000u; // 80343F90
L_80343F94:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80343F94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80343F98
  c->lr=c->r[0]; // 80343F9C
  c->r[1]=c->r[1]+0x00000020u; // 80343FA0
  return; // 80343FA4
}

// fn_80343FA8
void f_80343FA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80343FA8
  c->r[0]=c->lr; // 80343FAC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80343FB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80343FB4
  c->r[0]=R32(c->r[3]+0x00000010u); // 80343FB8
  cmps(c,0,(int32_t)c->r[0],0); // 80343FBC
  if (crb(c,2)) { goto L_80343FCC; } // 80343FC0
  c->r[0]=c->r[3]+c->r[0]; // 80343FC4
  goto L_80343FD0; // 80343FC8
L_80343FCC:;
  c->r[0]=0u+0x00000000u; // 80343FCC
L_80343FD0:;
  c->r[3]=0u+0x80540000u; // 80343FD0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80343FD4
  c->r[3]=c->r[3]+0x00007960u; // 80343FD8
  c->r[4]=c->r[1]+0x00000008u; // 80343FDC
  W32(c->r[1]+0x00000008u,c->r[3]); // 80343FE0
  c->r[3]=c->r[1]+0x0000000Cu; // 80343FE4
  c->lr=0x80343FECu; f_8033B044(c); // 80343FE8
  cmps(c,0,(int32_t)c->r[3],0); // 80343FEC
  if (crb(c,2)) { goto L_80344014; } // 80343FF0
  c->r[0]=0u-c->r[3]; // 80343FF4
  c->r[0]=c->r[0]|c->r[3]; // 80343FF8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80343FFC
  if (crb(c,2)) { goto L_8034400C; } // 80344000
  c->r[3]=R32(c->r[3]+0x00000004u); // 80344004
  goto L_80344018; // 80344008
L_8034400C:;
  c->r[3]=0u+0x00000000u; // 8034400C
  goto L_80344018; // 80344010
L_80344014:;
  c->r[3]=0u+0x00000000u; // 80344014
L_80344018:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80344018
  c->lr=c->r[0]; // 8034401C
  c->r[1]=c->r[1]+0x00000010u; // 80344020
  return; // 80344024
}

// fn_80344028
void f_80344028(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344028
  c->r[0]=c->lr; // 8034402C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80344030
  W32(c->r[1]+0x00000024u,c->r[0]); // 80344034
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80344038
  c->r[31]=c->r[4]|c->r[4]; // 8034403C
  c->r[0]=R32(c->r[3]+0x00000010u); // 80344040
  cmps(c,0,(int32_t)c->r[0],0); // 80344044
  if (crb(c,2)) { goto L_80344054; } // 80344048
  c->r[0]=c->r[3]+c->r[0]; // 8034404C
  goto L_80344058; // 80344050
L_80344054:;
  c->r[0]=0u+0x00000000u; // 80344054
L_80344058:;
  c->r[3]=0u+0x80540000u; // 80344058
  W32(c->r[1]+0x00000010u,c->r[0]); // 8034405C
  c->r[3]=c->r[3]+0x00007980u; // 80344060
  c->r[4]=c->r[1]+0x0000000Cu; // 80344064
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80344068
  c->r[3]=c->r[1]+0x00000010u; // 8034406C
  c->lr=0x80344074u; f_8033B044(c); // 80344070
  cmps(c,0,(int32_t)c->r[3],0); // 80344074
  if (crb(c,2)) { goto L_80344090; } // 80344078
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034407C
  c->r[4]=c->r[31]|c->r[31]; // 80344080
  c->r[3]=c->r[1]+0x00000008u; // 80344084
  c->lr=0x8034408Cu; f_8033AFC8(c); // 80344088
  goto L_80344094; // 8034408C
L_80344090:;
  c->r[3]=0u+0x00000000u; // 80344090
L_80344094:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80344094
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80344098
  c->lr=c->r[0]; // 8034409C
  c->r[1]=c->r[1]+0x00000020u; // 803440A0
  return; // 803440A4
}

// fn_803440A8
void f_803440A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803440A8
  c->r[0]=c->lr; // 803440AC
  c->r[3]=R32(c->r[3]+0x00000000u); // 803440B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803440B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803440B8
  c->r[31]=c->r[4]|c->r[4]; // 803440BC
  c->r[0]=R32(c->r[3]+0x00000010u); // 803440C0
  cmps(c,0,(int32_t)c->r[0],0); // 803440C4
  if (crb(c,2)) { goto L_803440D4; } // 803440C8
  c->r[0]=c->r[3]+c->r[0]; // 803440CC
  goto L_803440D8; // 803440D0
L_803440D4:;
  c->r[0]=0u+0x00000000u; // 803440D4
L_803440D8:;
  c->r[3]=0u+0x80540000u; // 803440D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803440DC
  c->r[3]=c->r[3]+0x00007980u; // 803440E0
  c->r[4]=c->r[1]+0x00000010u; // 803440E4
  W32(c->r[1]+0x00000010u,c->r[3]); // 803440E8
  c->r[3]=c->r[1]+0x00000014u; // 803440EC
  c->lr=0x803440F4u; f_8033B044(c); // 803440F0
  cmps(c,0,(int32_t)c->r[3],0); // 803440F4
  if (crb(c,2)) { goto L_80344118; } // 803440F8
  c->r[0]=R32(c->r[31]+0x00000000u); // 803440FC
  c->r[4]=c->r[1]+0x00000008u; // 80344100
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80344104
  c->r[3]=c->r[1]+0x0000000Cu; // 80344108
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034410C
  c->lr=0x80344114u; f_8033B044(c); // 80344110
  goto L_8034411C; // 80344114
L_80344118:;
  c->r[3]=0u+0x00000000u; // 80344118
L_8034411C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034411C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80344120
  c->lr=c->r[0]; // 80344124
  c->r[1]=c->r[1]+0x00000020u; // 80344128
  return; // 8034412C
}

// fn_80344130
void f_80344130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344130
  c->r[0]=c->lr; // 80344134
  c->r[3]=R32(c->r[3]+0x00000000u); // 80344138
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034413C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80344140
  c->r[31]=c->r[4]|c->r[4]; // 80344144
  c->r[0]=R32(c->r[3]+0x00000010u); // 80344148
  cmps(c,0,(int32_t)c->r[0],0); // 8034414C
  if (crb(c,2)) { goto L_8034415C; } // 80344150
  c->r[0]=c->r[3]+c->r[0]; // 80344154
  goto L_80344160; // 80344158
L_8034415C:;
  c->r[0]=0u+0x00000000u; // 8034415C
L_80344160:;
  c->r[3]=0u+0x80540000u; // 80344160
  W32(c->r[1]+0x00000008u,c->r[0]); // 80344164
  c->r[3]=c->r[3]+0x00007980u; // 80344168
  c->r[4]=c->r[1]+0x0000000Cu; // 8034416C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80344170
  c->r[3]=c->r[1]+0x00000008u; // 80344174
  c->lr=0x8034417Cu; f_8033B044(c); // 80344178
  cmps(c,0,(int32_t)c->r[3],0); // 8034417C
  if (crb(c,2)) { goto L_803441C4; } // 80344180
  c->r[0]=0u-c->r[3]; // 80344184
  c->r[0]=c->r[0]|c->r[3]; // 80344188
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8034418C
  if (crb(c,2)) { goto L_803441BC; } // 80344190
  c->r[0]=c->r[31]+0x00000001u; // 80344194
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80344198
  c->r[4]=c->r[3]+c->r[0]; // 8034419C
  c->r[0]=R32(c->r[4]+0x00000014u); // 803441A0
  cmps(c,0,(int32_t)c->r[0],0); // 803441A4
  if (crb(c,2)) { goto L_803441B4; } // 803441A8
  c->r[3]=c->r[3]+c->r[0]; // 803441AC
  goto L_803441C8; // 803441B0
L_803441B4:;
  c->r[3]=0u+0x00000000u; // 803441B4
  goto L_803441C8; // 803441B8
L_803441BC:;
  c->r[3]=0u+0x00000000u; // 803441BC
  goto L_803441C8; // 803441C0
L_803441C4:;
  c->r[3]=0u+0x00000000u; // 803441C4
L_803441C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803441C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803441CC
  c->lr=c->r[0]; // 803441D0
  c->r[1]=c->r[1]+0x00000020u; // 803441D4
  return; // 803441D8
}

// fn_803441DC
void f_803441DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803441DC
  c->r[0]=c->lr; // 803441E0
  c->r[3]=R32(c->r[3]+0x00000000u); // 803441E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803441E8
  c->r[0]=R32(c->r[3]+0x00000010u); // 803441EC
  cmps(c,0,(int32_t)c->r[0],0); // 803441F0
  if (crb(c,2)) { goto L_80344200; } // 803441F4
  c->r[0]=c->r[3]+c->r[0]; // 803441F8
  goto L_80344204; // 803441FC
L_80344200:;
  c->r[0]=0u+0x00000000u; // 80344200
L_80344204:;
  c->r[3]=0u+0x80540000u; // 80344204
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80344208
  c->r[3]=c->r[3]+0x00007980u; // 8034420C
  c->r[4]=c->r[1]+0x00000008u; // 80344210
  W32(c->r[1]+0x00000008u,c->r[3]); // 80344214
  c->r[3]=c->r[1]+0x0000000Cu; // 80344218
  c->lr=0x80344220u; f_8033B044(c); // 8034421C
  cmps(c,0,(int32_t)c->r[3],0); // 80344220
  if (crb(c,2)) { goto L_80344248; } // 80344224
  c->r[0]=0u-c->r[3]; // 80344228
  c->r[0]=c->r[0]|c->r[3]; // 8034422C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80344230
  if (crb(c,2)) { goto L_80344240; } // 80344234
  c->r[3]=R32(c->r[3]+0x00000004u); // 80344238
  goto L_8034424C; // 8034423C
L_80344240:;
  c->r[3]=0u+0x00000000u; // 80344240
  goto L_8034424C; // 80344244
L_80344248:;
  c->r[3]=0u+0x00000000u; // 80344248
L_8034424C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034424C
  c->lr=c->r[0]; // 80344250
  c->r[1]=c->r[1]+0x00000010u; // 80344254
  return; // 80344258
}

// fn_8034425C
void f_8034425C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034425C
  c->r[0]=c->lr; // 80344260
  c->r[3]=R32(c->r[3]+0x00000000u); // 80344264
  W32(c->r[1]+0x00000024u,c->r[0]); // 80344268
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034426C
  c->r[31]=c->r[4]|c->r[4]; // 80344270
  c->r[0]=R32(c->r[3]+0x00000010u); // 80344274
  cmps(c,0,(int32_t)c->r[0],0); // 80344278
  if (crb(c,2)) { goto L_80344288; } // 8034427C
  c->r[0]=c->r[3]+c->r[0]; // 80344280
  goto L_8034428C; // 80344284
L_80344288:;
  c->r[0]=0u+0x00000000u; // 80344288
L_8034428C:;
  c->r[3]=0u+0x80540000u; // 8034428C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80344290
  c->r[3]=c->r[3]+0x000079A0u; // 80344294
  c->r[4]=c->r[1]+0x0000000Cu; // 80344298
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8034429C
  c->r[3]=c->r[1]+0x00000008u; // 803442A0
  c->lr=0x803442A8u; f_8033B044(c); // 803442A4
  cmps(c,0,(int32_t)c->r[3],0); // 803442A8
  if (crb(c,2)) { goto L_803442F0; } // 803442AC
  c->r[0]=0u-c->r[3]; // 803442B0
  c->r[0]=c->r[0]|c->r[3]; // 803442B4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 803442B8
  if (crb(c,2)) { goto L_803442E8; } // 803442BC
  c->r[0]=c->r[31]+0x00000001u; // 803442C0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 803442C4
  c->r[4]=c->r[3]+c->r[0]; // 803442C8
  c->r[0]=R32(c->r[4]+0x00000014u); // 803442CC
  cmps(c,0,(int32_t)c->r[0],0); // 803442D0
  if (crb(c,2)) { goto L_803442E0; } // 803442D4
  c->r[3]=c->r[3]+c->r[0]; // 803442D8
  goto L_803442F4; // 803442DC
L_803442E0:;
  c->r[3]=0u+0x00000000u; // 803442E0
  goto L_803442F4; // 803442E4
L_803442E8:;
  c->r[3]=0u+0x00000000u; // 803442E8
  goto L_803442F4; // 803442EC
L_803442F0:;
  c->r[3]=0u+0x00000000u; // 803442F0
L_803442F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803442F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803442F8
  c->lr=c->r[0]; // 803442FC
  c->r[1]=c->r[1]+0x00000020u; // 80344300
  return; // 80344304
}

// fn_80344308
void f_80344308(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344308
  c->r[0]=c->lr; // 8034430C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80344310
  W32(c->r[1]+0x00000014u,c->r[0]); // 80344314
  c->r[0]=R32(c->r[3]+0x00000010u); // 80344318
  cmps(c,0,(int32_t)c->r[0],0); // 8034431C
  if (crb(c,2)) { goto L_8034432C; } // 80344320
  c->r[0]=c->r[3]+c->r[0]; // 80344324
  goto L_80344330; // 80344328
L_8034432C:;
  c->r[0]=0u+0x00000000u; // 8034432C
L_80344330:;
  c->r[3]=0u+0x80540000u; // 80344330
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80344334
  c->r[3]=c->r[3]+0x000079A0u; // 80344338
  c->r[4]=c->r[1]+0x00000008u; // 8034433C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80344340
  c->r[3]=c->r[1]+0x0000000Cu; // 80344344
  c->lr=0x8034434Cu; f_8033B044(c); // 80344348
  cmps(c,0,(int32_t)c->r[3],0); // 8034434C
  if (crb(c,2)) { goto L_80344374; } // 80344350
  c->r[0]=0u-c->r[3]; // 80344354
  c->r[0]=c->r[0]|c->r[3]; // 80344358
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8034435C
  if (crb(c,2)) { goto L_8034436C; } // 80344360
  c->r[3]=R32(c->r[3]+0x00000004u); // 80344364
  goto L_80344378; // 80344368
L_8034436C:;
  c->r[3]=0u+0x00000000u; // 8034436C
  goto L_80344378; // 80344370
L_80344374:;
  c->r[3]=0u+0x00000000u; // 80344374
L_80344378:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80344378
  c->lr=c->r[0]; // 8034437C
  c->r[1]=c->r[1]+0x00000010u; // 80344380
  return; // 80344384
}

// fn_80344388
void f_80344388(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344388
  c->r[0]=c->lr; // 8034438C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80344390
  W32(c->r[1]+0x00000024u,c->r[0]); // 80344394
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80344398
  c->r[31]=c->r[4]|c->r[4]; // 8034439C
  c->r[0]=R32(c->r[3]+0x00000010u); // 803443A0
  cmps(c,0,(int32_t)c->r[0],0); // 803443A4
  if (crb(c,2)) { goto L_803443B4; } // 803443A8
  c->r[0]=c->r[3]+c->r[0]; // 803443AC
  goto L_803443B8; // 803443B0
L_803443B4:;
  c->r[0]=0u+0x00000000u; // 803443B4
L_803443B8:;
  c->r[3]=0u+0x80540000u; // 803443B8
  W32(c->r[1]+0x00000010u,c->r[0]); // 803443BC
  c->r[3]=c->r[3]+0x000079C0u; // 803443C0
  c->r[4]=c->r[1]+0x0000000Cu; // 803443C4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803443C8
  c->r[3]=c->r[1]+0x00000010u; // 803443CC
  c->lr=0x803443D4u; f_8033B044(c); // 803443D0
  cmps(c,0,(int32_t)c->r[3],0); // 803443D4
  if (crb(c,2)) { goto L_803443F0; } // 803443D8
  W32(c->r[1]+0x00000008u,c->r[3]); // 803443DC
  c->r[4]=c->r[31]|c->r[31]; // 803443E0
  c->r[3]=c->r[1]+0x00000008u; // 803443E4
  c->lr=0x803443ECu; f_8033AFC8(c); // 803443E8
  goto L_803443F4; // 803443EC
L_803443F0:;
  c->r[3]=0u+0x00000000u; // 803443F0
L_803443F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803443F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803443F8
  c->lr=c->r[0]; // 803443FC
  c->r[1]=c->r[1]+0x00000020u; // 80344400
  return; // 80344404
}

// fn_80344408
void f_80344408(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344408
  c->r[0]=c->lr; // 8034440C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80344410
  W32(c->r[1]+0x00000024u,c->r[0]); // 80344414
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80344418
  c->r[31]=c->r[4]|c->r[4]; // 8034441C
  c->r[0]=R32(c->r[3]+0x00000010u); // 80344420
  cmps(c,0,(int32_t)c->r[0],0); // 80344424
  if (crb(c,2)) { goto L_80344434; } // 80344428
  c->r[0]=c->r[3]+c->r[0]; // 8034442C
  goto L_80344438; // 80344430
L_80344434:;
  c->r[0]=0u+0x00000000u; // 80344434
L_80344438:;
  c->r[3]=0u+0x80540000u; // 80344438
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034443C
  c->r[3]=c->r[3]+0x000079C0u; // 80344440
  c->r[4]=c->r[1]+0x0000000Cu; // 80344444
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80344448
  c->r[3]=c->r[1]+0x00000008u; // 8034444C
  c->lr=0x80344454u; f_8033B044(c); // 80344450
  cmps(c,0,(int32_t)c->r[3],0); // 80344454
  if (crb(c,2)) { goto L_8034449C; } // 80344458
  c->r[0]=0u-c->r[3]; // 8034445C
  c->r[0]=c->r[0]|c->r[3]; // 80344460
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80344464
  if (crb(c,2)) { goto L_80344494; } // 80344468
  c->r[0]=c->r[31]+0x00000001u; // 8034446C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80344470
  c->r[4]=c->r[3]+c->r[0]; // 80344474
  c->r[0]=R32(c->r[4]+0x00000014u); // 80344478
  cmps(c,0,(int32_t)c->r[0],0); // 8034447C
  if (crb(c,2)) { goto L_8034448C; } // 80344480
  c->r[3]=c->r[3]+c->r[0]; // 80344484
  goto L_803444A0; // 80344488
L_8034448C:;
  c->r[3]=0u+0x00000000u; // 8034448C
  goto L_803444A0; // 80344490
L_80344494:;
  c->r[3]=0u+0x00000000u; // 80344494
  goto L_803444A0; // 80344498
L_8034449C:;
  c->r[3]=0u+0x00000000u; // 8034449C
L_803444A0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803444A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803444A4
  c->lr=c->r[0]; // 803444A8
  c->r[1]=c->r[1]+0x00000020u; // 803444AC
  return; // 803444B0
}

// fn_803444B4
void f_803444B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803444B4
  c->r[0]=c->lr; // 803444B8
  c->r[3]=R32(c->r[3]+0x00000000u); // 803444BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803444C0
  c->r[0]=R32(c->r[3]+0x00000010u); // 803444C4
  cmps(c,0,(int32_t)c->r[0],0); // 803444C8
  if (crb(c,2)) { goto L_803444D8; } // 803444CC
  c->r[0]=c->r[3]+c->r[0]; // 803444D0
  goto L_803444DC; // 803444D4
L_803444D8:;
  c->r[0]=0u+0x00000000u; // 803444D8
L_803444DC:;
  c->r[3]=0u+0x80540000u; // 803444DC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803444E0
  c->r[3]=c->r[3]+0x000079C0u; // 803444E4
  c->r[4]=c->r[1]+0x00000008u; // 803444E8
  W32(c->r[1]+0x00000008u,c->r[3]); // 803444EC
  c->r[3]=c->r[1]+0x0000000Cu; // 803444F0
  c->lr=0x803444F8u; f_8033B044(c); // 803444F4
  cmps(c,0,(int32_t)c->r[3],0); // 803444F8
  if (crb(c,2)) { goto L_80344520; } // 803444FC
  c->r[0]=0u-c->r[3]; // 80344500
  c->r[0]=c->r[0]|c->r[3]; // 80344504
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80344508
  if (crb(c,2)) { goto L_80344518; } // 8034450C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80344510
  goto L_80344524; // 80344514
L_80344518:;
  c->r[3]=0u+0x00000000u; // 80344518
  goto L_80344524; // 8034451C
L_80344520:;
  c->r[3]=0u+0x00000000u; // 80344520
L_80344524:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80344524
  c->lr=c->r[0]; // 80344528
  c->r[1]=c->r[1]+0x00000010u; // 8034452C
  return; // 80344530
}

// fn_80344534
void f_80344534(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 80344534
  c->r[5]=R16(c->r[3]+0x00000038u); // 80344538
  cmpu(c,0,c->r[5],c->r[4]); // 8034453C
  if (crb(c,1)) { goto L_8034454C; } // 80344540
  c->r[3]=0u+0x00000000u; // 80344544
  return; // 80344548
L_8034454C:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 8034454C
  cmps(c,0,(int32_t)c->r[0],0); // 80344550
  if (crb(c,2)) { goto L_80344560; } // 80344554
  c->r[3]=c->r[3]+c->r[0]; // 80344558
  goto L_80344564; // 8034455C
L_80344560:;
  c->r[3]=0u+0x00000000u; // 80344560
L_80344564:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)76); // 80344564
  c->r[3]=c->r[3]+c->r[0]; // 80344568
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8034456C
  cmpu(c,0,c->r[0],c->r[5]); // 80344570
  if (crb(c,0)) return; // 80344574
  c->r[3]=0u+0x00000000u; // 80344578
  return; // 8034457C
}

// fn_80344580
void f_80344580(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 80344580
  c->r[5]=R16(c->r[3]+0x0000003Au); // 80344584
  cmpu(c,0,c->r[5],c->r[4]); // 80344588
  if (crb(c,1)) { goto L_80344598; } // 8034458C
  c->r[3]=0u+0x00000000u; // 80344590
  return; // 80344594
L_80344598:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 80344598
  cmps(c,0,(int32_t)c->r[0],0); // 8034459C
  if (crb(c,2)) { goto L_803445AC; } // 803445A0
  c->r[3]=c->r[3]+c->r[0]; // 803445A4
  goto L_803445B0; // 803445A8
L_803445AC:;
  c->r[3]=0u+0x00000000u; // 803445AC
L_803445B0:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 803445B0
  c->r[3]=c->r[3]+c->r[0]; // 803445B4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 803445B8
  cmpu(c,0,c->r[0],c->r[5]); // 803445BC
  if (crb(c,0)) return; // 803445C0
  c->r[3]=0u+0x00000000u; // 803445C4
  return; // 803445C8
}

// fn_803445CC
void f_803445CC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 803445CC
  c->r[5]=R16(c->r[3]+0x0000003Cu); // 803445D0
  cmpu(c,0,c->r[5],c->r[4]); // 803445D4
  if (crb(c,1)) { goto L_803445E4; } // 803445D8
  c->r[3]=0u+0x00000000u; // 803445DC
  return; // 803445E0
L_803445E4:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 803445E4
  cmps(c,0,(int32_t)c->r[0],0); // 803445E8
  if (crb(c,2)) { goto L_803445F8; } // 803445EC
  c->r[3]=c->r[3]+c->r[0]; // 803445F0
  goto L_803445FC; // 803445F4
L_803445F8:;
  c->r[3]=0u+0x00000000u; // 803445F8
L_803445FC:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)92); // 803445FC
  c->r[3]=c->r[3]+c->r[0]; // 80344600
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80344604
  cmpu(c,0,c->r[0],c->r[5]); // 80344608
  if (crb(c,0)) return; // 8034460C
  c->r[3]=0u+0x00000000u; // 80344610
  return; // 80344614
}

// fn_80344618
void f_80344618(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 80344618
  c->r[5]=R16(c->r[3]+0x0000003Eu); // 8034461C
  cmpu(c,0,c->r[5],c->r[4]); // 80344620
  if (crb(c,1)) { goto L_80344630; } // 80344624
  c->r[3]=0u+0x00000000u; // 80344628
  return; // 8034462C
L_80344630:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 80344630
  cmps(c,0,(int32_t)c->r[0],0); // 80344634
  if (crb(c,2)) { goto L_80344644; } // 80344638
  c->r[3]=c->r[3]+c->r[0]; // 8034463C
  goto L_80344648; // 80344640
L_80344644:;
  c->r[3]=0u+0x00000000u; // 80344644
L_80344648:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)40); // 80344648
  c->r[3]=c->r[3]+c->r[0]; // 8034464C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80344650
  cmpu(c,0,c->r[0],c->r[5]); // 80344654
  if (crb(c,0)) return; // 80344658
  c->r[3]=0u+0x00000000u; // 8034465C
  return; // 80344660
}

// fn_80344664
void f_80344664(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 80344664
  c->r[5]=R16(c->r[3]+0x00000040u); // 80344668
  cmpu(c,0,c->r[5],c->r[4]); // 8034466C
  if (crb(c,1)) { goto L_8034467C; } // 80344670
  c->r[3]=0u+0x00000000u; // 80344674
  return; // 80344678
L_8034467C:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 8034467C
  cmps(c,0,(int32_t)c->r[0],0); // 80344680
  if (crb(c,2)) { goto L_80344690; } // 80344684
  c->r[3]=c->r[3]+c->r[0]; // 80344688
  goto L_80344694; // 8034468C
L_80344690:;
  c->r[3]=0u+0x00000000u; // 80344690
L_80344694:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)92); // 80344694
  c->r[3]=c->r[3]+c->r[0]; // 80344698
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8034469C
  cmpu(c,0,c->r[0],c->r[5]); // 803446A0
  if (crb(c,0)) return; // 803446A4
  c->r[3]=0u+0x00000000u; // 803446A8
  return; // 803446AC
}

// fn_803446B0
void f_803446B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803446B0
  c->r[0]=c->lr; // 803446B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 803446B8
  c->r[11]=c->r[1]+0x00000040u; // 803446BC
  c->lr=0x803446C4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803446C0
  c->r[5]=R32(c->r[3]+0x00000000u); // 803446C4
  c->r[28]=c->r[3]|c->r[3]; // 803446C8
  c->r[29]=c->r[4]|c->r[4]; // 803446CC
  c->r[0]=R32(c->r[5]+0x00000010u); // 803446D0
  cmps(c,0,(int32_t)c->r[0],0); // 803446D4
  if (crb(c,2)) { goto L_803446E4; } // 803446D8
  c->r[0]=c->r[5]+c->r[0]; // 803446DC
  goto L_803446E8; // 803446E0
L_803446E4:;
  c->r[0]=0u+0x00000000u; // 803446E4
L_803446E8:;
  c->r[3]=0u+0x80540000u; // 803446E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 803446EC
  c->r[3]=c->r[3]+0x00007940u; // 803446F0
  c->r[4]=c->r[1]+0x00000014u; // 803446F4
  W32(c->r[1]+0x00000014u,c->r[3]); // 803446F8
  c->r[3]=c->r[1]+0x00000010u; // 803446FC
  c->lr=0x80344704u; f_8033B044(c); // 80344700
  cmps(c,0,(int32_t)c->r[3],0); // 80344704
  if (crb(c,2)) { goto L_8034472C; } // 80344708
  c->r[0]=0u-c->r[3]; // 8034470C
  c->r[0]=c->r[0]|c->r[3]; // 80344710
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80344714
  if (crb(c,2)) { goto L_80344724; } // 80344718
  c->r[26]=R32(c->r[3]+0x00000004u); // 8034471C
  goto L_80344730; // 80344720
L_80344724:;
  c->r[26]=0u+0x00000000u; // 80344724
  goto L_80344730; // 80344728
L_8034472C:;
  c->r[26]=0u+0x00000000u; // 8034472C
L_80344730:;
  c->r[27]=0u+0x80540000u; // 80344730
  c->r[31]=0u+0x00000001u; // 80344734
  c->r[27]=c->r[27]+0x00007940u; // 80344738
  c->r[30]=0u+0x00000000u; // 8034473C
  goto L_803447F8; // 80344740
L_80344744:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 80344744
  c->r[0]=R32(c->r[3]+0x00000010u); // 80344748
  cmps(c,0,(int32_t)c->r[0],0); // 8034474C
  if (crb(c,2)) { goto L_8034475C; } // 80344750
  c->r[0]=c->r[3]+c->r[0]; // 80344754
  goto L_80344760; // 80344758
L_8034475C:;
  c->r[0]=0u+0x00000000u; // 8034475C
L_80344760:;
  W32(c->r[1]+0x00000008u,c->r[27]); // 80344760
  c->r[4]=c->r[1]+0x00000008u; // 80344764
  c->r[3]=c->r[1]+0x0000000Cu; // 80344768
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8034476C
  c->lr=0x80344774u; f_8033B044(c); // 80344770
  cmps(c,0,(int32_t)c->r[3],0); // 80344774
  if (crb(c,2)) { goto L_803447BC; } // 80344778
  c->r[0]=0u-c->r[3]; // 8034477C
  c->r[0]=c->r[0]|c->r[3]; // 80344780
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80344784
  if (crb(c,2)) { goto L_803447B4; } // 80344788
  c->r[0]=c->r[30]+0x00000001u; // 8034478C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80344790
  c->r[4]=c->r[3]+c->r[0]; // 80344794
  c->r[0]=R32(c->r[4]+0x00000014u); // 80344798
  cmps(c,0,(int32_t)c->r[0],0); // 8034479C
  if (crb(c,2)) { goto L_803447AC; } // 803447A0
  c->r[3]=c->r[3]+c->r[0]; // 803447A4
  goto L_803447C0; // 803447A8
L_803447AC:;
  c->r[3]=0u+0x00000000u; // 803447AC
  goto L_803447C0; // 803447B0
L_803447B4:;
  c->r[3]=0u+0x00000000u; // 803447B4
  goto L_803447C0; // 803447B8
L_803447BC:;
  c->r[3]=0u+0x00000000u; // 803447BC
L_803447C0:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 803447C0
  c->r[4]=c->r[1]+0x00000018u; // 803447C4
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 803447C8
  c->r[3]=c->r[1]+0x0000001Cu; // 803447CC
  c->r[25]=0u+0x00000000u; // 803447D0
  W32(c->r[1]+0x00000018u,c->r[0]); // 803447D4
  c->lr=0x803447DCu; f_80343268(c); // 803447D8
  cmps(c,0,(int32_t)c->r[3],0); // 803447DC
  if (crb(c,2)) { goto L_803447F0; } // 803447E0
  cmps(c,0,(int32_t)c->r[31],0); // 803447E4
  if (crb(c,2)) { goto L_803447F0; } // 803447E8
  c->r[25]=0u+0x00000001u; // 803447EC
L_803447F0:;
  c->r[31]=c->r[25]|c->r[25]; // 803447F0
  c->r[30]=c->r[30]+0x00000001u; // 803447F4
L_803447F8:;
  cmpu(c,0,c->r[30],c->r[26]); // 803447F8
  if (crb(c,0)) { IRQCHK(c); goto L_80344744; } // 803447FC
  c->r[11]=c->r[1]+0x00000040u; // 80344800
  c->r[3]=c->r[31]|c->r[31]; // 80344804
  c->lr=0x8034480Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80344808
  c->r[0]=R32(c->r[1]+0x00000044u); // 8034480C
  c->lr=c->r[0]; // 80344810
  c->r[1]=c->r[1]+0x00000040u; // 80344814
  return; // 80344818
}

// fn_8034481C
void f_8034481C(Ctx* __restrict c) {
  c->r[4]=0u+0x00010000u; // 8034481C
  c->r[7]=0u+0x00000000u; // 80344820
  c->r[5]=c->r[4]+0xFFFF8000u; // 80344824
  c->r[6]=0u+0x00000000u; // 80344828
  goto L_80344840; // 8034482C
L_80344830:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 80344830
  c->r[7]=c->r[7]+0x00000001u; // 80344834
  W16(c->r[4]+c->r[6],c->r[5]); // 80344838
  c->r[6]=c->r[6]+0x00000002u; // 8034483C
L_80344840:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80344840
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80344844
  if (crb(c,0)) { IRQCHK(c); goto L_80344830; } // 80344848
  c->r[4]=0u+0x00000004u; // 8034484C
  c->r[5]=0u+0x00000000u; // 80344850
  f_8034A6BC(c); return; // 80344854
}

// fn_80344858
void f_80344858(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80344858
  return; // 8034485C
}

// fn_80344860
void f_80344860(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80344860
  return; // 80344864
}

// fn_80344868
void f_80344868(Ctx* __restrict c) {
  c->r[5]=0u+0x00010000u; // 80344868
  c->r[0]=c->r[5]+0x00000002u; // 8034486C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80344870
  if (crb(c,2)) { goto L_803448B0; } // 80344874
  if (!crb(c,0)) { goto L_80344888; } // 80344878
  cmps(c,0,(int32_t)c->r[4],8); // 8034487C
  if (crb(c,2)) { goto L_80344898; } // 80344880
  return; // 80344884
L_80344888:;
  c->r[0]=c->r[5]+0x00000004u; // 80344888
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8034488C
  if (!crb(c,0)) return; // 80344890
  goto L_803448A4; // 80344894
L_80344898:;
  c->r[4]=0u+0x00000002u; // 80344898
  c->r[5]=0u+0x00000001u; // 8034489C
  f_8034A6BC(c); return; // 803448A0
L_803448A4:;
  c->r[0]=0u+0x00000000u; // 803448A4
  W32(c->r[3]+0x00000004u,c->r[0]); // 803448A8
  return; // 803448AC
L_803448B0:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 803448B0
  return; // 803448B4
}

// fn_803448B8
void f_803448B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803448B8
  c->r[0]=c->lr; // 803448BC
  cmps(c,0,(int32_t)c->r[3],0); // 803448C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803448C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803448C8
  c->r[31]=c->r[3]|c->r[3]; // 803448CC
  if (crb(c,2)) { goto L_803448E0; } // 803448D0
  if (crb(c,2)) { goto L_803448E0; } // 803448D4
  c->r[4]=0u+0x00000000u; // 803448D8
  c->lr=0x803448E0u; f_8034A528(c); // 803448DC
L_803448E0:;
  c->r[3]=c->r[31]|c->r[31]; // 803448E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803448E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803448E8
  c->lr=c->r[0]; // 803448EC
  c->r[1]=c->r[1]+0x00000010u; // 803448F0
  return; // 803448F4
}

// Construct__Q34nw4r3g3d12AnmObjVisResFP12MEMAllocatorPiQ34nw4r3g3d9ResAnmVisQ34nw4r3g3d6ResMdl
void f_803448F8(Ctx* __restrict c) {
  trace_call(0x803448F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803448F8
  c->r[0]=c->lr; // 803448FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80344900
  c->r[0]=R32(c->r[5]+0x00000000u); // 80344904
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80344908
  c->r[31]=c->r[5]|c->r[5]; // 8034490C
  cmps(c,0,(int32_t)c->r[0],0); // 80344910
  W32(c->r[1]+0x00000018u,c->r[30]); // 80344914
  W32(c->r[1]+0x00000014u,c->r[29]); // 80344918
  c->r[29]=c->r[4]|c->r[4]; // 8034491C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80344920
  c->r[28]=c->r[3]|c->r[3]; // 80344924
  if (crb(c,2)) { goto L_80344938; } // 80344928
  c->r[0]=R32(c->r[6]+0x00000000u); // 8034492C
  cmps(c,0,(int32_t)c->r[0],0); // 80344930
  if (!crb(c,2)) { goto L_80344940; } // 80344934
L_80344938:;
  c->r[3]=0u+0x00000000u; // 80344938
  goto L_80344A28; // 8034493C
L_80344940:;
  c->r[3]=c->r[6]|c->r[6]; // 80344940
  c->lr=0x80344948u; f_8033CA88(c); // 80344944
  cmps(c,0,(int32_t)c->r[29],0); // 80344948
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8034494C
  c->r[30]=c->r[3]|c->r[3]; // 80344950
  c->r[4]=c->r[4]+0x00000030u; // 80344954
  if (crb(c,2)) { goto L_80344960; } // 80344958
  W32(c->r[29]+0x00000000u,c->r[4]); // 8034495C
L_80344960:;
  cmps(c,0,(int32_t)c->r[28],0); // 80344960
  if (!crb(c,2)) { goto L_80344970; } // 80344964
  c->r[3]=0u+0x00000000u; // 80344968
  goto L_80344A28; // 8034496C
L_80344970:;
  c->r[3]=c->r[28]|c->r[28]; // 80344970
  c->lr=0x80344978u; f_802CF59C(c); // 80344974
  cmps(c,0,(int32_t)c->r[3],0); // 80344978
  c->r[29]=c->r[3]|c->r[3]; // 8034497C
  if (!crb(c,2)) { goto L_8034498C; } // 80344980
  c->r[3]=0u+0x00000000u; // 80344984
  goto L_80344A28; // 80344988
L_8034498C:;
  c->r[4]=c->r[3]+0x00000030u; // 8034498C
  if (crb(c,2)) { goto L_80344A24; } // 80344990
  c->r[0]=0u+0x00000000u; // 80344994
  c->r[12]=0u+0x80540000u; // 80344998
  W32(c->r[3]+0x00000004u,c->r[0]); // 8034499C
  c->r[12]=c->r[12]+0x00007A24u; // 803449A0
  c->r[31]=R32(c->r[31]+0x00000000u); // 803449A4
  W32(c->r[3]+0x00000008u,c->r[28]); // 803449A8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803449AC
  W32(c->r[3]+0x00000000u,c->r[12]); // 803449B0
  W32(c->r[3]+0x00000010u,c->r[30]); // 803449B4
  W32(c->r[3]+0x00000014u,c->r[4]); // 803449B8
  c->r[12]=R32(c->r[12]+0x00000034u); // 803449BC
  c->ctr=c->r[12]; // 803449C0
  if (true) { c->lr=0x803449C8u; dispatch(c,c->ctr); } // 803449C4
  c->r[4]=R16(c->r[31]+0x0000001Cu); // 803449C8
  c->r[0]=0u+0x43300000u; // 803449CC
  c->r[5]=R32(c->r[31]+0x00000020u); // 803449D0
  c->r[3]=0u+0x80540000u; // 803449D4
  c->r[4]=c->r[4]^0x80000000u; // 803449D8
  {uint32_t ea=c->r[2]+0xFFFFEFD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803449DC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 803449E0
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803449E4
  {uint32_t ea=c->r[2]+0xFFFFEFD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803449E8
  c->r[4]=c->r[13]+0xFFFF8000u; // 803449EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 803449F0
  c->r[3]=c->r[3]+0x000079E0u; // 803449F4
  {uint32_t ea=c->r[2]+0xFFFFEFD8u; c->f[3]=RF64(ea);} // 803449F8
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 803449FC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 80344A00
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 80344A04
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 80344A08
  c->r[0]=R32(c->r[4]+c->r[5]); // 80344A0C
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[1]);} // 80344A10
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[0]);} // 80344A14
  W32(c->r[29]+0x00000028u,c->r[0]); // 80344A18
  W32(c->r[29]+0x00000000u,c->r[3]); // 80344A1C
  W32(c->r[29]+0x0000002Cu,c->r[31]); // 80344A20
L_80344A24:;
  c->r[3]=c->r[29]|c->r[29]; // 80344A24
L_80344A28:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80344A28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80344A2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80344A30
  c->r[29]=R32(c->r[1]+0x00000014u); // 80344A34
  c->r[28]=R32(c->r[1]+0x00000010u); // 80344A38
  c->lr=c->r[0]; // 80344A3C
  c->r[1]=c->r[1]+0x00000020u; // 80344A40
  return; // 80344A44
}

// SetFrame__Q34nw4r3g3d12AnmObjVisResFf
void f_80344A48(Ctx* __restrict c) {
  trace_call(0x80344A48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344A48
  c->r[0]=c->lr; // 80344A4C
  c->f[3]=c->f[1]; // 80344A50
  W32(c->r[1]+0x00000014u,c->r[0]); // 80344A54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80344A58
  c->r[31]=c->r[3]|c->r[3]; // 80344A5C
  c->r[12]=R32(c->r[3]+0x00000028u); // 80344A60
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80344A64
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80344A68
  c->ctr=c->r[12]; // 80344A6C
  if (true) { c->lr=0x80344A74u; dispatch(c,c->ctr); } // 80344A70
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 80344A74
  c->r[3]=c->r[31]|c->r[31]; // 80344A78
  c->r[4]=0u+0x00000008u; // 80344A7C
  c->r[5]=0u+0x00000000u; // 80344A80
  c->r[12]=R32(c->r[31]+0x00000000u); // 80344A84
  c->r[6]=0u+0x00000000u; // 80344A88
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80344A8C
  c->ctr=c->r[12]; // 80344A90
  if (true) { c->lr=0x80344A98u; dispatch(c,c->ctr); } // 80344A94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80344A98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80344A9C
  c->lr=c->r[0]; // 80344AA0
  c->r[1]=c->r[1]+0x00000010u; // 80344AA4
  return; // 80344AA8
}

// fn_80344AAC
void f_80344AAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80344AAC
  return; // 80344AB0
}

// fn_80344AB4
void f_80344AB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 80344AB4
  return; // 80344AB8
}

// fn_80344ABC
void f_80344ABC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80344ABC
  return; // 80344AC0
}

// UpdateFrame__Q34nw4r3g3d12AnmObjVisResFv
void f_80344AC4(Ctx* __restrict c) {
  trace_call(0x80344AC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344AC4
  c->r[0]=c->lr; // 80344AC8
  {uint32_t ea=c->r[2]+0xFFFFEFD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80344ACC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80344AD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80344AD4
  c->r[31]=c->r[3]|c->r[3]; // 80344AD8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80344ADC
  fcmp(c,0,c->f[0],c->f[1]); // 80344AE0
  if (crb(c,2)) { goto L_80344B34; } // 80344AE4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80344AE8
  {uint32_t ea=c->r[13]+0xFFFFAA00u; c->f[1]=c->ps1[1]=RF32(ea);} // 80344AEC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80344AF0
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 80344AF4
  c->r[12]=R32(c->r[3]+0x00000028u); // 80344AF8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80344AFC
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80344B00
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 80344B04
  c->ctr=c->r[12]; // 80344B08
  if (true) { c->lr=0x80344B10u; dispatch(c,c->ctr); } // 80344B0C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 80344B10
  c->r[3]=c->r[31]|c->r[31]; // 80344B14
  c->r[4]=0u+0x00000008u; // 80344B18
  c->r[5]=0u+0x00000000u; // 80344B1C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80344B20
  c->r[6]=0u+0x00000000u; // 80344B24
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80344B28
  c->ctr=c->r[12]; // 80344B2C
  if (true) { c->lr=0x80344B34u; dispatch(c,c->ctr); } // 80344B30
L_80344B34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80344B34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80344B38
  c->lr=c->r[0]; // 80344B3C
  c->r[1]=c->r[1]+0x00000010u; // 80344B40
  return; // 80344B44
}

// fn_80344B48
void f_80344B48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344B48
  c->r[0]=c->lr; // 80344B4C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80344B50
  c->r[11]=c->r[1]+0x00000030u; // 80344B54
  c->lr=0x80344B5Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80344B58
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 80344B5C
  c->r[27]=c->r[3]|c->r[3]; // 80344B60
  c->r[28]=c->r[4]|c->r[4]; // 80344B64
  c->r[30]=0u+0x00000000u; // 80344B68
  c->r[31]=R16(c->r[5]+0x0000001Eu); // 80344B6C
  c->r[29]=0u+0x00000000u; // 80344B70
  cmps(c,0,(int32_t)c->r[31],0); // 80344B74
  if (!crb(c,1)) { goto L_80344C20; } // 80344B78
  goto L_80344C14; // 80344B7C
L_80344B80:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 80344B80
  c->r[0]=R32(c->r[3]+0x00000010u); // 80344B84
  cmps(c,0,(int32_t)c->r[0],0); // 80344B88
  if (crb(c,2)) { goto L_80344B98; } // 80344B8C
  c->r[0]=c->r[3]+c->r[0]; // 80344B90
  goto L_80344B9C; // 80344B94
L_80344B98:;
  c->r[0]=0u+0x00000000u; // 80344B98
L_80344B9C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80344B9C
  if (crb(c,2)) { goto L_80344BC8; } // 80344BA0
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 80344BA4
  c->r[3]=c->r[0]+c->r[3]; // 80344BA8
  c->r[3]=R32(c->r[3]+0x00000024u); // 80344BAC
  cmps(c,0,(int32_t)c->r[3],0); // 80344BB0
  if (crb(c,2)) { goto L_80344BC0; } // 80344BB4
  c->r[5]=c->r[0]+c->r[3]; // 80344BB8
  goto L_80344BCC; // 80344BBC
L_80344BC0:;
  c->r[5]=0u+0x00000000u; // 80344BC0
  goto L_80344BCC; // 80344BC4
L_80344BC8:;
  c->r[5]=0u+0x00000000u; // 80344BC8
L_80344BCC:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80344BCC
  c->r[3]=c->r[28]|c->r[28]; // 80344BD0
  c->r[4]=c->r[1]+0x00000008u; // 80344BD4
  c->r[5]=c->r[0]+c->r[5]; // 80344BD8
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 80344BDC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80344BE0
  c->lr=0x80344BE8u; f_8033C990(c); // 80344BE4
  cmps(c,0,(int32_t)c->r[3],0); // 80344BE8
  if (crb(c,2)) { goto L_80344C10; } // 80344BEC
  c->r[4]=R32(c->r[27]+0x00000014u); // 80344BF0
  if (crb(c,2)) { goto L_80344C00; } // 80344BF4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80344BF8
  goto L_80344C04; // 80344BFC
L_80344C00:;
  c->r[0]=0u+0x00000000u; // 80344C00
L_80344C04:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80344C04
  c->r[30]=0u+0x00000001u; // 80344C08
  W16(c->r[4]+c->r[0],c->r[29]); // 80344C0C
L_80344C10:;
  c->r[29]=c->r[29]+0x00000001u; // 80344C10
L_80344C14:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 80344C14
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 80344C18
  if (crb(c,0)) { IRQCHK(c); goto L_80344B80; } // 80344C1C
L_80344C20:;
  c->r[3]=c->r[27]|c->r[27]; // 80344C20
  c->r[4]=0u+0x00000004u; // 80344C24
  c->r[5]=0u+0x00000001u; // 80344C28
  c->lr=0x80344C30u; f_8034A6BC(c); // 80344C2C
  c->r[11]=c->r[1]+0x00000030u; // 80344C30
  c->r[3]=c->r[30]|c->r[30]; // 80344C34
  c->lr=0x80344C3Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80344C38
  c->r[0]=R32(c->r[1]+0x00000034u); // 80344C3C
  c->lr=c->r[0]; // 80344C40
  c->r[1]=c->r[1]+0x00000030u; // 80344C44
  return; // 80344C48
}

// GetResult__Q34nw4r3g3d12AnmObjVisResFUl
void f_80344C4C(Ctx* __restrict c) {
  trace_call(0x80344C4Cu);
  c->r[5]=R32(c->r[3]+0x00000014u); // 80344C4C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80344C50
  c->r[4]=R16(c->r[5]+c->r[0]); // 80344C54
  c->r[0]=rotl(c->r[4],0)&0x00004000u; cr0(c,c->r[0]); // 80344C58
  if (!crb(c,2)) { goto L_80344C68; } // 80344C5C
  c->r[0]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[0]); // 80344C60
  if (crb(c,2)) { goto L_80344C70; } // 80344C64
L_80344C68:;
  c->r[3]=0u+0x00000001u; // 80344C68
  return; // 80344C6C
L_80344C70:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80344C70
  c->r[3]=c->r[3]+0x0000002Cu; // 80344C74
  f_803408E8(c); return; // 80344C78
  return; // 80344C7C
}

// ApplyVisAnmResult__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjVis
void f_80344C80(Ctx* __restrict c) {
  trace_call(0x80344C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344C80
  c->r[0]=c->lr; // 80344C84
  W32(c->r[1]+0x00000024u,c->r[0]); // 80344C88
  c->r[11]=c->r[1]+0x00000020u; // 80344C8C
  c->lr=0x80344C94u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80344C90
  c->r[26]=c->r[3]|c->r[3]; // 80344C94
  c->r[27]=c->r[4]|c->r[4]; // 80344C98
  c->lr=0x80344CA0u; f_8033CA88(c); // 80344C9C
  c->r[30]=c->r[3]|c->r[3]; // 80344CA0
  c->r[28]=0u+0x00000000u; // 80344CA4
  c->r[29]=0u+0x00000000u; // 80344CA8
  goto L_80344D1C; // 80344CAC
L_80344CB0:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 80344CB0
  c->r[0]=R16(c->r[3]+c->r[29]); // 80344CB4
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 80344CB8
  if (!crb(c,2)) { goto L_80344D14; } // 80344CBC
  c->r[3]=c->r[26]|c->r[26]; // 80344CC0
  c->r[4]=c->r[28]|c->r[28]; // 80344CC4
  c->lr=0x80344CCCu; f_8033CA34(c); // 80344CC8
  c->r[12]=R32(c->r[27]+0x00000000u); // 80344CCC
  c->r[31]=c->r[3]|c->r[3]; // 80344CD0
  c->r[3]=c->r[27]|c->r[27]; // 80344CD4
  c->r[4]=c->r[28]|c->r[28]; // 80344CD8
  c->r[12]=R32(c->r[12]+0x00000038u); // 80344CDC
  c->ctr=c->r[12]; // 80344CE0
  if (true) { c->lr=0x80344CE8u; dispatch(c,c->ctr); } // 80344CE4
  cmps(c,0,(int32_t)c->r[31],0); // 80344CE8
  if (crb(c,2)) { goto L_80344D14; } // 80344CEC
  cmps(c,0,(int32_t)c->r[3],0); // 80344CF0
  if (crb(c,2)) { goto L_80344D08; } // 80344CF4
  c->r[0]=R32(c->r[31]+0x00000014u); // 80344CF8
  c->r[0]=c->r[0]|0x00000100u; // 80344CFC
  W32(c->r[31]+0x00000014u,c->r[0]); // 80344D00
  goto L_80344D14; // 80344D04
L_80344D08:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 80344D08
  c->r[0]=rotl(c->r[0],0)&0xFFFFFEFFu; // 80344D0C
  W32(c->r[31]+0x00000014u,c->r[0]); // 80344D10
L_80344D14:;
  c->r[29]=c->r[29]+0x00000002u; // 80344D14
  c->r[28]=c->r[28]+0x00000001u; // 80344D18
L_80344D1C:;
  cmpu(c,0,c->r[28],c->r[30]); // 80344D1C
  if (crb(c,0)) { IRQCHK(c); goto L_80344CB0; } // 80344D20
  c->r[11]=c->r[1]+0x00000020u; // 80344D24
  c->lr=0x80344D2Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80344D28
  c->r[0]=R32(c->r[1]+0x00000024u); // 80344D2C
  c->lr=c->r[0]; // 80344D30
  c->r[1]=c->r[1]+0x00000020u; // 80344D34
  return; // 80344D38
}

// ApplyVisAnmResult__Q24nw4r3g3dFPUcQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjVis
void f_80344D3C(Ctx* __restrict c) {
  trace_call(0x80344D3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344D3C
  c->r[0]=c->lr; // 80344D40
  W32(c->r[1]+0x00000024u,c->r[0]); // 80344D44
  c->r[11]=c->r[1]+0x00000020u; // 80344D48
  c->lr=0x80344D50u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80344D4C
  c->r[27]=c->r[3]|c->r[3]; // 80344D50
  c->r[3]=c->r[4]|c->r[4]; // 80344D54
  c->r[28]=c->r[5]|c->r[5]; // 80344D58
  c->lr=0x80344D60u; f_8033CA88(c); // 80344D5C
  c->r[31]=c->r[3]|c->r[3]; // 80344D60
  c->r[29]=0u+0x00000000u; // 80344D64
  c->r[30]=0u+0x00000000u; // 80344D68
  goto L_80344DA8; // 80344D6C
L_80344D70:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80344D70
  c->r[0]=R16(c->r[3]+c->r[30]); // 80344D74
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 80344D78
  if (!crb(c,2)) { goto L_80344D9C; } // 80344D7C
  c->r[12]=R32(c->r[28]+0x00000000u); // 80344D80
  c->r[3]=c->r[28]|c->r[28]; // 80344D84
  c->r[4]=c->r[29]|c->r[29]; // 80344D88
  c->r[12]=R32(c->r[12]+0x00000038u); // 80344D8C
  c->ctr=c->r[12]; // 80344D90
  if (true) { c->lr=0x80344D98u; dispatch(c,c->ctr); } // 80344D94
  W8(c->r[27]+0x00000000u,c->r[3]); // 80344D98
L_80344D9C:;
  c->r[30]=c->r[30]+0x00000002u; // 80344D9C
  c->r[29]=c->r[29]+0x00000001u; // 80344DA0
  c->r[27]=c->r[27]+0x00000001u; // 80344DA4
L_80344DA8:;
  cmpu(c,0,c->r[29],c->r[31]); // 80344DA8
  if (crb(c,0)) { IRQCHK(c); goto L_80344D70; } // 80344DAC
  c->r[11]=c->r[1]+0x00000020u; // 80344DB0
  c->lr=0x80344DB8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80344DB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80344DB8
  c->lr=c->r[0]; // 80344DBC
  c->r[1]=c->r[1]+0x00000020u; // 80344DC0
  return; // 80344DC4
}

// fn_80344DC8
void f_80344DC8(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80344DC8
  c->r[0]=R32(c->r[4]+0x00000000u); // 80344DCC
  c->r[3]=c->r[3]+0x000047A0u; // 80344DD0
  cmpu(c,0,c->r[0],c->r[3]); // 80344DD4
  if (!crb(c,2)) { goto L_80344DE4; } // 80344DD8
  c->r[3]=0u+0x00000001u; // 80344DDC
  return; // 80344DE0
L_80344DE4:;
  c->r[3]=0u+0x803C0000u; // 80344DE4
  c->r[0]=R32(c->r[4]+0x00000000u); // 80344DE8
  c->r[3]=c->r[3]+0x00004790u; // 80344DEC
  cmpu(c,0,c->r[0],c->r[3]); // 80344DF0
  if (!crb(c,2)) { goto L_80344E00; } // 80344DF4
  c->r[3]=0u+0x00000001u; // 80344DF8
  return; // 80344DFC
L_80344E00:;
  c->r[3]=0u+0x803C0000u; // 80344E00
  c->r[3]=c->r[3]+0x000048D8u; // 80344E04
  cmpu(c,0,c->r[0],c->r[3]); // 80344E08
  if (!crb(c,2)) { goto L_80344E18; } // 80344E0C
  c->r[3]=0u+0x00000001u; // 80344E10
  return; // 80344E14
L_80344E18:;
  c->r[3]=0u+0x803C0000u; // 80344E18
  c->r[3]=c->r[3]+0x000048C8u; // 80344E1C
  c->r[0]=c->r[3]-c->r[0]; // 80344E20
  c->r[0]=cntlz(c->r[0]); // 80344E24
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80344E28
  return; // 80344E2C
}

// fn_80344E30
void f_80344E30(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80344E30
  c->r[0]=R32(c->r[4]+0x00000000u); // 80344E34
  c->r[3]=c->r[3]+0x00004790u; // 80344E38
  cmpu(c,0,c->r[0],c->r[3]); // 80344E3C
  if (!crb(c,2)) { goto L_80344E4C; } // 80344E40
  c->r[3]=0u+0x00000001u; // 80344E44
  return; // 80344E48
L_80344E4C:;
  c->r[3]=0u+0x803C0000u; // 80344E4C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80344E50
  c->r[3]=c->r[3]+0x000048D8u; // 80344E54
  cmpu(c,0,c->r[0],c->r[3]); // 80344E58
  if (!crb(c,2)) { goto L_80344E68; } // 80344E5C
  c->r[3]=0u+0x00000001u; // 80344E60
  return; // 80344E64
L_80344E68:;
  c->r[3]=0u+0x803C0000u; // 80344E68
  c->r[3]=c->r[3]+0x000048C8u; // 80344E6C
  c->r[0]=c->r[3]-c->r[0]; // 80344E70
  c->r[0]=cntlz(c->r[0]); // 80344E74
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80344E78
  return; // 80344E7C
}

// fn_80344E80
void f_80344E80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344E80
  c->r[0]=c->lr; // 80344E84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80344E88
  c->r[12]=R32(c->r[3]+0x00000000u); // 80344E8C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80344E90
  c->ctr=c->r[12]; // 80344E94
  if (true) { c->lr=0x80344E9Cu; dispatch(c,c->ctr); } // 80344E98
  c->r[0]=R32(c->r[1]+0x00000014u); // 80344E9C
  c->r[3]=c->r[3]+0x00000004u; // 80344EA0
  c->lr=c->r[0]; // 80344EA4
  c->r[1]=c->r[1]+0x00000010u; // 80344EA8
  return; // 80344EAC
}

// fn_80344EB0
void f_80344EB0(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80344EB0
  c->r[3]=c->r[3]+0x000047A0u; // 80344EB4
  return; // 80344EB8
}

// fn_80344EBC
void f_80344EBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344EBC
  c->r[0]=c->lr; // 80344EC0
  cmps(c,0,(int32_t)c->r[3],0); // 80344EC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80344EC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80344ECC
  c->r[31]=c->r[3]|c->r[3]; // 80344ED0
  if (crb(c,2)) { goto L_80344EE8; } // 80344ED4
  if (crb(c,2)) { goto L_80344EE8; } // 80344ED8
  if (crb(c,2)) { goto L_80344EE8; } // 80344EDC
  c->r[4]=0u+0x00000000u; // 80344EE0
  c->lr=0x80344EE8u; f_8034A528(c); // 80344EE4
L_80344EE8:;
  c->r[3]=c->r[31]|c->r[31]; // 80344EE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80344EEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80344EF0
  c->lr=c->r[0]; // 80344EF4
  c->r[1]=c->r[1]+0x00000010u; // 80344EF8
  return; // 80344EFC
}

// fn_80344F00
void f_80344F00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344F00
  c->r[0]=c->lr; // 80344F04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80344F08
  c->r[12]=R32(c->r[3]+0x00000000u); // 80344F0C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80344F10
  c->ctr=c->r[12]; // 80344F14
  if (true) { c->lr=0x80344F1Cu; dispatch(c,c->ctr); } // 80344F18
  c->r[0]=R32(c->r[1]+0x00000014u); // 80344F1C
  c->r[3]=c->r[3]+0x00000004u; // 80344F20
  c->lr=c->r[0]; // 80344F24
  c->r[1]=c->r[1]+0x00000010u; // 80344F28
  return; // 80344F2C
}

// fn_80344F30
void f_80344F30(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80344F30
  c->r[3]=c->r[3]+0x00004790u; // 80344F34
  return; // 80344F38
}

// TestExistence__Q34nw4r3g3d12AnmObjMatClrCFUl
void f_80344F3C(Ctx* __restrict c) {
  trace_call(0x80344F3Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80344F3C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80344F40
  c->r[0]=R16(c->r[3]+c->r[0]); // 80344F44
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 80344F48
  c->r[0]=cntlz(c->r[0]); // 80344F4C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80344F50
  return; // 80344F54
}

// fn_80344F58
void f_80344F58(Ctx* __restrict c) {
  c->r[4]=0u+0x00010000u; // 80344F58
  c->r[7]=0u+0x00000000u; // 80344F5C
  c->r[5]=c->r[4]+0xFFFF8000u; // 80344F60
  c->r[6]=0u+0x00000000u; // 80344F64
  goto L_80344F7C; // 80344F68
L_80344F6C:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 80344F6C
  c->r[7]=c->r[7]+0x00000001u; // 80344F70
  W16(c->r[4]+c->r[6],c->r[5]); // 80344F74
  c->r[6]=c->r[6]+0x00000002u; // 80344F78
L_80344F7C:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80344F7C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80344F80
  if (crb(c,0)) { IRQCHK(c); goto L_80344F6C; } // 80344F84
  c->r[4]=0u+0x00000004u; // 80344F88
  c->r[5]=0u+0x00000000u; // 80344F8C
  f_8034A6BC(c); return; // 80344F90
}

// fn_80344F94
void f_80344F94(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80344F94
  return; // 80344F98
}

// fn_80344F9C
void f_80344F9C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80344F9C
  return; // 80344FA0
}

// fn_80344FA4
void f_80344FA4(Ctx* __restrict c) {
  return; // 80344FA4
}

// fn_80344FA8
void f_80344FA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344FA8
  c->r[0]=c->lr; // 80344FAC
  cmps(c,0,(int32_t)c->r[3],0); // 80344FB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80344FB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80344FB8
  c->r[31]=c->r[3]|c->r[3]; // 80344FBC
  if (crb(c,2)) { goto L_80344FD0; } // 80344FC0
  if (crb(c,2)) { goto L_80344FD0; } // 80344FC4
  c->r[4]=0u+0x00000000u; // 80344FC8
  c->lr=0x80344FD0u; f_8034A528(c); // 80344FCC
L_80344FD0:;
  c->r[3]=c->r[31]|c->r[31]; // 80344FD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80344FD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80344FD8
  c->lr=c->r[0]; // 80344FDC
  c->r[1]=c->r[1]+0x00000010u; // 80344FE0
  return; // 80344FE4
}

// fn_80344FE8
void f_80344FE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80344FE8
  c->r[0]=c->lr; // 80344FEC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80344FF0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80344FF4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80344FF8
  c->r[11]=c->r[1]+0x00000030u; // 80344FFC
  c->lr=0x80345004u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80345000
  c->r[8]=R32(c->r[5]+0x00000000u); // 80345004
  c->r[29]=c->r[3]|c->r[3]; // 80345008
  c->r[25]=c->r[4]|c->r[4]; // 8034500C
  c->r[30]=c->r[5]|c->r[5]; // 80345010
  cmps(c,0,(int32_t)c->r[8],0); // 80345014
  c->r[27]=c->r[7]|c->r[7]; // 80345018
  if (crb(c,2)) { goto L_8034502C; } // 8034501C
  c->r[0]=R32(c->r[6]+0x00000000u); // 80345020
  cmps(c,0,(int32_t)c->r[0],0); // 80345024
  if (!crb(c,2)) { goto L_80345034; } // 80345028
L_8034502C:;
  c->r[3]=0u+0x00000000u; // 8034502C
  goto L_803451B8; // 80345030
L_80345034:;
  c->r[31]=R16(c->r[8]+0x0000001Eu); // 80345034
  c->r[3]=c->r[6]|c->r[6]; // 80345038
  c->lr=0x80345040u; f_8033CF34(c); // 8034503C
  c->r[0]=0u-c->r[27]; // 80345040
  c->r[28]=c->r[3]|c->r[3]; // 80345044
  c->r[4]=c->r[0]|c->r[27]; // 80345048
  cmps(c,0,(int32_t)c->r[25],0); // 8034504C
  c->r[4]=sraw(c,c->r[4],31); // 80345050
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80345054
  c->r[3]=c->r[31]&c->r[4]; // 80345058
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)92); // 8034505C
  c->r[3]=c->r[26]+c->r[0]; // 80345060
  c->r[4]=c->r[3]+0x00000034u; // 80345064
  if (crb(c,2)) { goto L_80345070; } // 80345068
  W32(c->r[25]+0x00000000u,c->r[4]); // 8034506C
L_80345070:;
  cmps(c,0,(int32_t)c->r[29],0); // 80345070
  if (!crb(c,2)) { goto L_80345080; } // 80345074
  c->r[3]=0u+0x00000000u; // 80345078
  goto L_803451B8; // 8034507C
L_80345080:;
  c->r[3]=c->r[29]|c->r[29]; // 80345080
  c->lr=0x80345088u; f_802CF59C(c); // 80345084
  cmps(c,0,(int32_t)c->r[3],0); // 80345088
  c->r[31]=c->r[3]|c->r[3]; // 8034508C
  if (!crb(c,2)) { goto L_8034509C; } // 80345090
  c->r[3]=0u+0x00000000u; // 80345094
  goto L_803451B8; // 80345098
L_8034509C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8034509C
  if (crb(c,2)) { goto L_803450AC; } // 803450A0
  c->r[27]=c->r[3]+0x00000034u; // 803450A4
  goto L_803450B0; // 803450A8
L_803450AC:;
  c->r[27]=0u+0x00000000u; // 803450AC
L_803450B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 803450B0
  c->r[4]=c->r[3]+c->r[26]; // 803450B4
  c->r[5]=c->r[4]+0x00000034u; // 803450B8
  if (crb(c,2)) { goto L_803451B4; } // 803450BC
  c->r[0]=0u+0x00000000u; // 803450C0
  c->r[4]=0u+0x80540000u; // 803450C4
  W32(c->r[3]+0x00000004u,c->r[0]); // 803450C8
  c->r[4]=c->r[4]+0x00007AB0u; // 803450CC
  c->r[30]=R32(c->r[30]+0x00000000u); // 803450D0
  W32(c->r[3]+0x00000008u,c->r[29]); // 803450D4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803450D8
  W32(c->r[3]+0x00000000u,c->r[4]); // 803450DC
  W32(c->r[3]+0x00000010u,c->r[28]); // 803450E0
  W32(c->r[3]+0x00000014u,c->r[5]); // 803450E4
  c->r[3]=c->r[31]|c->r[31]; // 803450E8
  c->r[12]=R32(c->r[31]+0x00000000u); // 803450EC
  c->r[12]=R32(c->r[12]+0x00000034u); // 803450F0
  c->ctr=c->r[12]; // 803450F4
  if (true) { c->lr=0x803450FCu; dispatch(c,c->ctr); } // 803450F8
  c->r[4]=R16(c->r[30]+0x0000001Cu); // 803450FC
  c->r[0]=0u+0x43300000u; // 80345100
  c->r[5]=R32(c->r[30]+0x00000020u); // 80345104
  c->r[3]=0u+0x80540000u; // 80345108
  c->r[4]=c->r[4]^0x80000000u; // 8034510C
  {uint32_t ea=c->r[2]+0xFFFFEFE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80345110
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80345114
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80345118
  {uint32_t ea=c->r[2]+0xFFFFEFE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034511C
  c->r[4]=c->r[13]+0xFFFF8000u; // 80345120
  W32(c->r[1]+0x00000008u,c->r[0]); // 80345124
  c->r[3]=c->r[3]+0x00007A68u; // 80345128
  {uint32_t ea=c->r[2]+0xFFFFEFE8u; c->f[3]=RF64(ea);} // 8034512C
  cmps(c,0,(int32_t)c->r[27],0); // 80345130
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 80345134
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 80345138
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8034513C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 80345140
  c->r[0]=R32(c->r[4]+c->r[5]); // 80345144
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 80345148
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 8034514C
  W32(c->r[31]+0x00000028u,c->r[0]); // 80345150
  W32(c->r[31]+0x00000000u,c->r[3]); // 80345154
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 80345158
  W32(c->r[31]+0x00000030u,c->r[27]); // 8034515C
  if (crb(c,2)) { goto L_803451B4; } // 80345160
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 80345164
  c->r[28]=0u+0x00000000u; // 80345168
  c->r[27]=0u+0x00000000u; // 8034516C
  goto L_803451A8; // 80345170
L_80345174:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80345174
  c->r[3]=R16(c->r[3]+c->r[27]); // 80345178
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8034517C
  if (!crb(c,2)) { goto L_803451A0; } // 80345180
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 80345184
  c->f[1]=c->f[31]; // 80345188
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 8034518C
  c->r[4]=R32(c->r[31]+0x00000030u); // 80345190
  c->r[3]=c->r[31]+0x0000002Cu; // 80345194
  c->r[4]=c->r[4]+c->r[0]; // 80345198
  c->lr=0x803451A0u; f_80340A08(c); // 8034519C
L_803451A0:;
  c->r[27]=c->r[27]+0x00000002u; // 803451A0
  c->r[28]=c->r[28]+0x00000001u; // 803451A4
L_803451A8:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 803451A8
  cmpu(c,0,c->r[28],c->r[0]); // 803451AC
  if (crb(c,0)) { IRQCHK(c); goto L_80345174; } // 803451B0
L_803451B4:;
  c->r[3]=c->r[31]|c->r[31]; // 803451B4
L_803451B8:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 803451B8
  c->r[11]=c->r[1]+0x00000030u; // 803451BC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 803451C0
  c->lr=0x803451C8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803451C4
  c->r[0]=R32(c->r[1]+0x00000044u); // 803451C8
  c->lr=c->r[0]; // 803451CC
  c->r[1]=c->r[1]+0x00000040u; // 803451D0
  return; // 803451D4
}

// fn_803451D8
void f_803451D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803451D8
  c->r[0]=c->lr; // 803451DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803451E0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 803451E4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 803451E8
  c->f[3]=c->f[1]; // 803451EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803451F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803451F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803451F8
  c->r[29]=c->r[3]|c->r[3]; // 803451FC
  c->r[12]=R32(c->r[3]+0x00000028u); // 80345200
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80345204
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80345208
  c->ctr=c->r[12]; // 8034520C
  if (true) { c->lr=0x80345214u; dispatch(c,c->ctr); } // 80345210
  c->r[0]=R32(c->r[29]+0x00000030u); // 80345214
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 80345218
  cmps(c,0,(int32_t)c->r[0],0); // 8034521C
  if (crb(c,2)) { goto L_80345274; } // 80345220
  c->f[31]=c->ps1[31]=S(c->f[1]); // 80345224
  c->r[31]=0u+0x00000000u; // 80345228
  c->r[30]=0u+0x00000000u; // 8034522C
  goto L_80345268; // 80345230
L_80345234:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80345234
  c->r[3]=R16(c->r[3]+c->r[30]); // 80345238
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8034523C
  if (!crb(c,2)) { goto L_80345260; } // 80345240
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 80345244
  c->f[1]=c->f[31]; // 80345248
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 8034524C
  c->r[4]=R32(c->r[29]+0x00000030u); // 80345250
  c->r[3]=c->r[29]+0x0000002Cu; // 80345254
  c->r[4]=c->r[4]+c->r[0]; // 80345258
  c->lr=0x80345260u; f_80340A08(c); // 8034525C
L_80345260:;
  c->r[30]=c->r[30]+0x00000002u; // 80345260
  c->r[31]=c->r[31]+0x00000001u; // 80345264
L_80345268:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80345268
  cmpu(c,0,c->r[31],c->r[0]); // 8034526C
  if (crb(c,0)) { IRQCHK(c); goto L_80345234; } // 80345270
L_80345274:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80345274
  c->r[0]=R32(c->r[1]+0x00000034u); // 80345278
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8034527C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80345280
  c->r[30]=R32(c->r[1]+0x00000018u); // 80345284
  c->r[29]=R32(c->r[1]+0x00000014u); // 80345288
  c->lr=c->r[0]; // 8034528C
  c->r[1]=c->r[1]+0x00000030u; // 80345290
  return; // 80345294
}

// fn_80345298
void f_80345298(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80345298
  return; // 8034529C
}

// fn_803452A0
void f_803452A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803452A0
  c->r[0]=c->lr; // 803452A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 803452A8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 803452AC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 803452B0
  {uint32_t ea=c->r[2]+0xFFFFEFE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803452B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803452B8
  fcmp(c,0,c->f[0],c->f[1]); // 803452BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803452C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803452C4
  c->r[29]=c->r[3]|c->r[3]; // 803452C8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 803452CC
  if (!crb(c,2)) { goto L_80345330; } // 803452D0
  c->r[0]=R32(c->r[3]+0x00000030u); // 803452D4
  cmps(c,0,(int32_t)c->r[0],0); // 803452D8
  if (crb(c,2)) { goto L_80345330; } // 803452DC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 803452E0
  c->r[31]=0u+0x00000000u; // 803452E4
  c->r[30]=0u+0x00000000u; // 803452E8
  goto L_80345324; // 803452EC
L_803452F0:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 803452F0
  c->r[3]=R16(c->r[3]+c->r[30]); // 803452F4
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 803452F8
  if (!crb(c,2)) { goto L_8034531C; } // 803452FC
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 80345300
  c->f[1]=c->f[31]; // 80345304
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 80345308
  c->r[4]=R32(c->r[29]+0x00000030u); // 8034530C
  c->r[3]=c->r[29]+0x0000002Cu; // 80345310
  c->r[4]=c->r[4]+c->r[0]; // 80345314
  c->lr=0x8034531Cu; f_80340A08(c); // 80345318
L_8034531C:;
  c->r[30]=c->r[30]+0x00000002u; // 8034531C
  c->r[31]=c->r[31]+0x00000001u; // 80345320
L_80345324:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80345324
  cmpu(c,0,c->r[31],c->r[0]); // 80345328
  if (crb(c,0)) { IRQCHK(c); goto L_803452F0; } // 8034532C
L_80345330:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80345330
  c->r[0]=R32(c->r[1]+0x00000034u); // 80345334
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80345338
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034533C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80345340
  c->r[29]=R32(c->r[1]+0x00000014u); // 80345344
  c->lr=c->r[0]; // 80345348
  c->r[1]=c->r[1]+0x00000030u; // 8034534C
  return; // 80345350
}

// fn_80345354
void f_80345354(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80345354
  return; // 80345358
}

// fn_8034535C
void f_8034535C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034535C
  c->r[0]=c->lr; // 80345360
  W32(c->r[1]+0x00000034u,c->r[0]); // 80345364
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80345368
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8034536C
  {uint32_t ea=c->r[2]+0xFFFFEFE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80345370
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80345374
  W32(c->r[1]+0x00000018u,c->r[30]); // 80345378
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034537C
  c->r[29]=c->r[3]|c->r[3]; // 80345380
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80345384
  fcmp(c,0,c->f[0],c->f[1]); // 80345388
  if (crb(c,2)) { goto L_80345418; } // 8034538C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80345390
  {uint32_t ea=c->r[13]+0xFFFFAA00u; c->f[1]=c->ps1[1]=RF32(ea);} // 80345394
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80345398
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 8034539C
  c->r[12]=R32(c->r[3]+0x00000028u); // 803453A0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 803453A4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 803453A8
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 803453AC
  c->ctr=c->r[12]; // 803453B0
  if (true) { c->lr=0x803453B8u; dispatch(c,c->ctr); } // 803453B4
  c->r[0]=R32(c->r[29]+0x00000030u); // 803453B8
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 803453BC
  cmps(c,0,(int32_t)c->r[0],0); // 803453C0
  if (crb(c,2)) { goto L_80345418; } // 803453C4
  c->f[31]=c->ps1[31]=S(c->f[1]); // 803453C8
  c->r[31]=0u+0x00000000u; // 803453CC
  c->r[30]=0u+0x00000000u; // 803453D0
  goto L_8034540C; // 803453D4
L_803453D8:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 803453D8
  c->r[3]=R16(c->r[3]+c->r[30]); // 803453DC
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 803453E0
  if (!crb(c,2)) { goto L_80345404; } // 803453E4
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 803453E8
  c->f[1]=c->f[31]; // 803453EC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 803453F0
  c->r[4]=R32(c->r[29]+0x00000030u); // 803453F4
  c->r[3]=c->r[29]+0x0000002Cu; // 803453F8
  c->r[4]=c->r[4]+c->r[0]; // 803453FC
  c->lr=0x80345404u; f_80340A08(c); // 80345400
L_80345404:;
  c->r[30]=c->r[30]+0x00000002u; // 80345404
  c->r[31]=c->r[31]+0x00000001u; // 80345408
L_8034540C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8034540C
  cmpu(c,0,c->r[31],c->r[0]); // 80345410
  if (crb(c,0)) { IRQCHK(c); goto L_803453D8; } // 80345414
L_80345418:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80345418
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034541C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80345420
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80345424
  c->r[30]=R32(c->r[1]+0x00000018u); // 80345428
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034542C
  c->lr=c->r[0]; // 80345430
  c->r[1]=c->r[1]+0x00000030u; // 80345434
  return; // 80345438
}

// fn_8034543C
void f_8034543C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034543C
  c->r[0]=c->lr; // 80345440
  W32(c->r[1]+0x00000034u,c->r[0]); // 80345444
  c->r[11]=c->r[1]+0x00000030u; // 80345448
  c->lr=0x80345450u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034544C
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 80345450
  c->r[27]=c->r[3]|c->r[3]; // 80345454
  c->r[28]=c->r[4]|c->r[4]; // 80345458
  c->r[30]=0u+0x00000000u; // 8034545C
  c->r[31]=R16(c->r[5]+0x0000001Eu); // 80345460
  c->r[29]=0u+0x00000000u; // 80345464
  cmps(c,0,(int32_t)c->r[31],0); // 80345468
  if (!crb(c,1)) { goto L_80345508; } // 8034546C
  goto L_803454FC; // 80345470
L_80345474:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 80345474
  c->r[0]=R32(c->r[3]+0x00000010u); // 80345478
  cmps(c,0,(int32_t)c->r[0],0); // 8034547C
  if (crb(c,2)) { goto L_8034548C; } // 80345480
  c->r[0]=c->r[3]+c->r[0]; // 80345484
  goto L_80345490; // 80345488
L_8034548C:;
  c->r[0]=0u+0x00000000u; // 8034548C
L_80345490:;
  cmps(c,0,(int32_t)c->r[0],0); // 80345490
  if (crb(c,2)) { goto L_803454BC; } // 80345494
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 80345498
  c->r[3]=c->r[0]+c->r[3]; // 8034549C
  c->r[3]=R32(c->r[3]+0x00000024u); // 803454A0
  cmps(c,0,(int32_t)c->r[3],0); // 803454A4
  if (crb(c,2)) { goto L_803454B4; } // 803454A8
  c->r[5]=c->r[0]+c->r[3]; // 803454AC
  goto L_803454C0; // 803454B0
L_803454B4:;
  c->r[5]=0u+0x00000000u; // 803454B4
  goto L_803454C0; // 803454B8
L_803454BC:;
  c->r[5]=0u+0x00000000u; // 803454BC
L_803454C0:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 803454C0
  c->r[3]=c->r[28]|c->r[28]; // 803454C4
  c->r[4]=c->r[1]+0x00000008u; // 803454C8
  c->r[5]=c->r[0]+c->r[5]; // 803454CC
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 803454D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 803454D4
  c->lr=0x803454DCu; f_8033CE3C(c); // 803454D8
  cmps(c,0,(int32_t)c->r[3],0); // 803454DC
  if (crb(c,2)) { goto L_803454F8; } // 803454E0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 803454E4
  c->r[30]=0u+0x00000001u; // 803454E8
  c->r[3]=R32(c->r[27]+0x00000014u); // 803454EC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 803454F0
  W16(c->r[3]+c->r[0],c->r[29]); // 803454F4
L_803454F8:;
  c->r[29]=c->r[29]+0x00000001u; // 803454F8
L_803454FC:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 803454FC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 80345500
  if (crb(c,0)) { IRQCHK(c); goto L_80345474; } // 80345504
L_80345508:;
  c->r[3]=c->r[27]|c->r[27]; // 80345508
  c->r[4]=0u+0x00000004u; // 8034550C
  c->r[5]=0u+0x00000001u; // 80345510
  c->lr=0x80345518u; f_8034A6BC(c); // 80345514
  c->r[11]=c->r[1]+0x00000030u; // 80345518
  c->r[3]=c->r[30]|c->r[30]; // 8034551C
  c->lr=0x80345524u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80345520
  c->r[0]=R32(c->r[1]+0x00000034u); // 80345524
  c->lr=c->r[0]; // 80345528
  c->r[1]=c->r[1]+0x00000030u; // 8034552C
  return; // 80345530
}

// fn_80345534
void f_80345534(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80345534
  c->r[0]=c->lr; // 80345538
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034553C
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 80345540
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80345544
  c->r[31]=c->r[4]|c->r[4]; // 80345548
  c->r[6]=R32(c->r[3]+0x00000014u); // 8034554C
  c->r[5]=R16(c->r[6]+c->r[0]); // 80345550
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 80345554
  if (crb(c,2)) { goto L_8034556C; } // 80345558
  c->r[0]=0u+0x00000000u; // 8034555C
  c->r[3]=c->r[31]|c->r[31]; // 80345560
  W32(c->r[4]+0x00000000u,c->r[0]); // 80345564
  goto L_80345594; // 80345568
L_8034556C:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 8034556C
  cmps(c,0,(int32_t)c->r[6],0); // 80345570
  if (crb(c,2)) { goto L_80345584; } // 80345574
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 80345578
  c->r[3]=c->r[6]+c->r[0]; // 8034557C
  goto L_80345594; // 80345580
L_80345584:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80345584
  c->r[3]=c->r[3]+0x0000002Cu; // 80345588
  c->lr=0x80345590u; f_80340A08(c); // 8034558C
  c->r[3]=c->r[31]|c->r[31]; // 80345590
L_80345594:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80345594
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80345598
  c->lr=c->r[0]; // 8034559C
  c->r[1]=c->r[1]+0x00000010u; // 803455A0
  return; // 803455A4
}

// fn_803455A8
void f_803455A8(Ctx* __restrict c) {
  c->r[5]=0u+0x00010000u; // 803455A8
  c->r[0]=c->r[5]+0x00000002u; // 803455AC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803455B0
  if (crb(c,2)) { goto L_803455F4; } // 803455B4
  if (!crb(c,0)) { goto L_803455C8; } // 803455B8
  cmps(c,0,(int32_t)c->r[4],8); // 803455BC
  if (crb(c,2)) { goto L_803455D8; } // 803455C0
  return; // 803455C4
L_803455C8:;
  c->r[0]=c->r[5]+0x00000004u; // 803455C8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803455CC
  if (!crb(c,0)) return; // 803455D0
  goto L_803455E8; // 803455D4
L_803455D8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 803455D8
  c->r[12]=R32(c->r[12]+0x00000024u); // 803455DC
  c->ctr=c->r[12]; // 803455E0
  if (true) { dispatch(c,c->ctr); return; } // 803455E4
L_803455E8:;
  c->r[0]=0u+0x00000000u; // 803455E8
  W32(c->r[3]+0x00000004u,c->r[0]); // 803455EC
  return; // 803455F0
L_803455F4:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 803455F4
  return; // 803455F8
}

// ApplyClrAnmResult__Q24nw4r3g3dFQ34nw4r3g3d10ResMatChanQ34nw4r3g3d14ResMatTevColorPCQ34nw4r3g3d12ClrAnmResult
void f_803455FC(Ctx* __restrict c) {
  trace_call(0x803455FCu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 803455FC
  c->r[0]=c->lr; // 80345600
  c->r[6]=R32(c->r[5]+0x00000000u); // 80345604
  W32(c->r[1]+0x00000094u,c->r[0]); // 80345608
  c->r[0]=0u+0xFFFFFFFFu; // 8034560C
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 80345610
  c->r[31]=c->r[5]|c->r[5]; // 80345614
  W32(c->r[1]+0x00000088u,c->r[30]); // 80345618
  c->r[30]=c->r[4]|c->r[4]; // 8034561C
  W32(c->r[1]+0x00000084u,c->r[29]); // 80345620
  c->r[29]=c->r[3]|c->r[3]; // 80345624
  W32(c->r[1]+0x00000080u,c->r[28]); // 80345628
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8034562C
  c->r[0]=rotl(c->r[6],0)&0x0000000Fu; cr0(c,c->r[0]); // 80345630
  if (crb(c,2)) { goto L_80345794; } // 80345634
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 80345638
  if (crb(c,2)) { goto L_8034568C; } // 8034563C
  c->r[28]=R32(c->r[3]+0x00000000u); // 80345640
  c->r[3]=c->r[1]+0x00000078u; // 80345644
  c->r[5]=R32(c->r[5]+0x00000030u); // 80345648
  c->r[4]=c->r[1]+0x0000007Cu; // 8034564C
  c->r[0]=R32(c->r[28]+0x00000004u); // 80345650
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 80345654
  c->lr=0x8034565Cu; f_80345B2C(c); // 80345658
  c->r[5]=R32(c->r[31]+0x00000004u); // 8034565C
  c->r[3]=c->r[1]+0x00000074u; // 80345660
  c->r[4]=c->r[1]+0x00000078u; // 80345664
  c->lr=0x8034566Cu; f_80345B3C(c); // 80345668
  c->r[0]=R8(c->r[1]+0x00000074u); // 8034566C
  W8(c->r[28]+0x00000004u,c->r[0]); // 80345670
  c->r[0]=R8(c->r[1]+0x00000075u); // 80345674
  W8(c->r[28]+0x00000005u,c->r[0]); // 80345678
  c->r[0]=R8(c->r[1]+0x00000076u); // 8034567C
  W8(c->r[28]+0x00000006u,c->r[0]); // 80345680
  c->r[0]=R8(c->r[1]+0x00000077u); // 80345684
  W8(c->r[28]+0x00000007u,c->r[0]); // 80345688
L_8034568C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8034568C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80345690
  if (crb(c,2)) { goto L_803456E4; } // 80345694
  c->r[28]=R32(c->r[29]+0x00000000u); // 80345698
  c->r[3]=c->r[1]+0x00000070u; // 8034569C
  c->r[5]=R32(c->r[31]+0x00000038u); // 803456A0
  c->r[4]=c->r[1]+0x0000007Cu; // 803456A4
  c->r[0]=R32(c->r[28]+0x00000008u); // 803456A8
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 803456AC
  c->lr=0x803456B4u; f_80345B2C(c); // 803456B0
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 803456B4
  c->r[3]=c->r[1]+0x0000006Cu; // 803456B8
  c->r[4]=c->r[1]+0x00000070u; // 803456BC
  c->lr=0x803456C4u; f_80345B3C(c); // 803456C0
  c->r[0]=R8(c->r[1]+0x0000006Cu); // 803456C4
  W8(c->r[28]+0x00000008u,c->r[0]); // 803456C8
  c->r[0]=R8(c->r[1]+0x0000006Du); // 803456CC
  W8(c->r[28]+0x00000009u,c->r[0]); // 803456D0
  c->r[0]=R8(c->r[1]+0x0000006Eu); // 803456D4
  W8(c->r[28]+0x0000000Au,c->r[0]); // 803456D8
  c->r[0]=R8(c->r[1]+0x0000006Fu); // 803456DC
  W8(c->r[28]+0x0000000Bu,c->r[0]); // 803456E0
L_803456E4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 803456E4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 803456E8
  if (crb(c,2)) { goto L_8034573C; } // 803456EC
  c->r[28]=R32(c->r[29]+0x00000000u); // 803456F0
  c->r[3]=c->r[1]+0x00000068u; // 803456F4
  c->r[5]=R32(c->r[31]+0x00000034u); // 803456F8
  c->r[4]=c->r[1]+0x0000007Cu; // 803456FC
  c->r[0]=R32(c->r[28]+0x00000018u); // 80345700
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 80345704
  c->lr=0x8034570Cu; f_80345B2C(c); // 80345708
  c->r[5]=R32(c->r[31]+0x00000008u); // 8034570C
  c->r[3]=c->r[1]+0x00000064u; // 80345710
  c->r[4]=c->r[1]+0x00000068u; // 80345714
  c->lr=0x8034571Cu; f_80345B3C(c); // 80345718
  c->r[0]=R8(c->r[1]+0x00000064u); // 8034571C
  W8(c->r[28]+0x00000018u,c->r[0]); // 80345720
  c->r[0]=R8(c->r[1]+0x00000065u); // 80345724
  W8(c->r[28]+0x00000019u,c->r[0]); // 80345728
  c->r[0]=R8(c->r[1]+0x00000066u); // 8034572C
  W8(c->r[28]+0x0000001Au,c->r[0]); // 80345730
  c->r[0]=R8(c->r[1]+0x00000067u); // 80345734
  W8(c->r[28]+0x0000001Bu,c->r[0]); // 80345738
L_8034573C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8034573C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80345740
  if (crb(c,2)) { goto L_80345794; } // 80345744
  c->r[29]=R32(c->r[29]+0x00000000u); // 80345748
  c->r[3]=c->r[1]+0x00000060u; // 8034574C
  c->r[5]=R32(c->r[31]+0x0000003Cu); // 80345750
  c->r[4]=c->r[1]+0x0000007Cu; // 80345754
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 80345758
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8034575C
  c->lr=0x80345764u; f_80345B2C(c); // 80345760
  c->r[5]=R32(c->r[31]+0x00000010u); // 80345764
  c->r[3]=c->r[1]+0x0000005Cu; // 80345768
  c->r[4]=c->r[1]+0x00000060u; // 8034576C
  c->lr=0x80345774u; f_80345B3C(c); // 80345770
  c->r[0]=R8(c->r[1]+0x0000005Cu); // 80345774
  W8(c->r[29]+0x0000001Cu,c->r[0]); // 80345778
  c->r[0]=R8(c->r[1]+0x0000005Du); // 8034577C
  W8(c->r[29]+0x0000001Du,c->r[0]); // 80345780
  c->r[0]=R8(c->r[1]+0x0000005Eu); // 80345784
  W8(c->r[29]+0x0000001Eu,c->r[0]); // 80345788
  c->r[0]=R8(c->r[1]+0x0000005Fu); // 8034578C
  W8(c->r[29]+0x0000001Fu,c->r[0]); // 80345790
L_80345794:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80345794
  c->r[0]=rotl(c->r[3],0)&0x000007F0u; cr0(c,c->r[0]); // 80345798
  if (crb(c,2)) { goto L_80345B0C; } // 8034579C
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 803457A0
  if (crb(c,2)) { goto L_80345818; } // 803457A4
  c->r[3]=c->r[30]|c->r[30]; // 803457A8
  c->r[5]=c->r[1]+0x0000007Cu; // 803457AC
  c->r[4]=0u+0x00000001u; // 803457B0
  c->lr=0x803457B8u; f_8033EB80(c); // 803457B4
  cmps(c,0,(int32_t)c->r[3],0); // 803457B8
  if (!crb(c,2)) { goto L_803457C8; } // 803457BC
  c->r[0]=0u+0x000000FFu; // 803457C0
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 803457C4
L_803457C8:;
  c->r[5]=R32(c->r[31]+0x00000040u); // 803457C8
  c->r[3]=c->r[1]+0x00000054u; // 803457CC
  c->r[4]=c->r[1]+0x0000007Cu; // 803457D0
  c->lr=0x803457D8u; f_80345B2C(c); // 803457D4
  c->r[5]=R32(c->r[31]+0x00000014u); // 803457D8
  c->r[3]=c->r[1]+0x00000050u; // 803457DC
  c->r[4]=c->r[1]+0x00000054u; // 803457E0
  c->lr=0x803457E8u; f_80345B3C(c); // 803457E4
  c->r[8]=R8(c->r[1]+0x00000050u); // 803457E8
  c->r[5]=c->r[1]+0x00000058u; // 803457EC
  c->r[7]=R8(c->r[1]+0x00000051u); // 803457F0
  c->r[3]=c->r[30]|c->r[30]; // 803457F4
  c->r[6]=R8(c->r[1]+0x00000052u); // 803457F8
  c->r[4]=0u+0x00000001u; // 803457FC
  c->r[0]=R8(c->r[1]+0x00000053u); // 80345800
  W8(c->r[1]+0x00000058u,c->r[8]); // 80345804
  W8(c->r[1]+0x00000059u,c->r[7]); // 80345808
  W8(c->r[1]+0x0000005Au,c->r[6]); // 8034580C
  W8(c->r[1]+0x0000005Bu,c->r[0]); // 80345810
  c->lr=0x80345818u; f_8033EC3C(c); // 80345814
L_80345818:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80345818
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 8034581C
  if (crb(c,2)) { goto L_80345894; } // 80345820
  c->r[3]=c->r[30]|c->r[30]; // 80345824
  c->r[5]=c->r[1]+0x0000007Cu; // 80345828
  c->r[4]=0u+0x00000002u; // 8034582C
  c->lr=0x80345834u; f_8033EB80(c); // 80345830
  cmps(c,0,(int32_t)c->r[3],0); // 80345834
  if (!crb(c,2)) { goto L_80345844; } // 80345838
  c->r[0]=0u+0x000000FFu; // 8034583C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 80345840
L_80345844:;
  c->r[5]=R32(c->r[31]+0x00000044u); // 80345844
  c->r[3]=c->r[1]+0x00000048u; // 80345848
  c->r[4]=c->r[1]+0x0000007Cu; // 8034584C
  c->lr=0x80345854u; f_80345B2C(c); // 80345850
  c->r[5]=R32(c->r[31]+0x00000018u); // 80345854
  c->r[3]=c->r[1]+0x00000044u; // 80345858
  c->r[4]=c->r[1]+0x00000048u; // 8034585C
  c->lr=0x80345864u; f_80345B3C(c); // 80345860
  c->r[8]=R8(c->r[1]+0x00000044u); // 80345864
  c->r[5]=c->r[1]+0x0000004Cu; // 80345868
  c->r[7]=R8(c->r[1]+0x00000045u); // 8034586C
  c->r[3]=c->r[30]|c->r[30]; // 80345870
  c->r[6]=R8(c->r[1]+0x00000046u); // 80345874
  c->r[4]=0u+0x00000002u; // 80345878
  c->r[0]=R8(c->r[1]+0x00000047u); // 8034587C
  W8(c->r[1]+0x0000004Cu,c->r[8]); // 80345880
  W8(c->r[1]+0x0000004Du,c->r[7]); // 80345884
  W8(c->r[1]+0x0000004Eu,c->r[6]); // 80345888
  W8(c->r[1]+0x0000004Fu,c->r[0]); // 8034588C
  c->lr=0x80345894u; f_8033EC3C(c); // 80345890
L_80345894:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80345894
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80345898
  if (crb(c,2)) { goto L_80345910; } // 8034589C
  c->r[3]=c->r[30]|c->r[30]; // 803458A0
  c->r[5]=c->r[1]+0x0000007Cu; // 803458A4
  c->r[4]=0u+0x00000003u; // 803458A8
  c->lr=0x803458B0u; f_8033EB80(c); // 803458AC
  cmps(c,0,(int32_t)c->r[3],0); // 803458B0
  if (!crb(c,2)) { goto L_803458C0; } // 803458B4
  c->r[0]=0u+0x000000FFu; // 803458B8
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 803458BC
L_803458C0:;
  c->r[5]=R32(c->r[31]+0x00000048u); // 803458C0
  c->r[3]=c->r[1]+0x0000003Cu; // 803458C4
  c->r[4]=c->r[1]+0x0000007Cu; // 803458C8
  c->lr=0x803458D0u; f_80345B2C(c); // 803458CC
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 803458D0
  c->r[3]=c->r[1]+0x00000038u; // 803458D4
  c->r[4]=c->r[1]+0x0000003Cu; // 803458D8
  c->lr=0x803458E0u; f_80345B3C(c); // 803458DC
  c->r[8]=R8(c->r[1]+0x00000038u); // 803458E0
  c->r[5]=c->r[1]+0x00000040u; // 803458E4
  c->r[7]=R8(c->r[1]+0x00000039u); // 803458E8
  c->r[3]=c->r[30]|c->r[30]; // 803458EC
  c->r[6]=R8(c->r[1]+0x0000003Au); // 803458F0
  c->r[4]=0u+0x00000003u; // 803458F4
  c->r[0]=R8(c->r[1]+0x0000003Bu); // 803458F8
  W8(c->r[1]+0x00000040u,c->r[8]); // 803458FC
  W8(c->r[1]+0x00000041u,c->r[7]); // 80345900
  W8(c->r[1]+0x00000042u,c->r[6]); // 80345904
  W8(c->r[1]+0x00000043u,c->r[0]); // 80345908
  c->lr=0x80345910u; f_8033EC3C(c); // 8034590C
L_80345910:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80345910
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80345914
  if (crb(c,2)) { goto L_8034598C; } // 80345918
  c->r[3]=c->r[30]|c->r[30]; // 8034591C
  c->r[5]=c->r[1]+0x0000007Cu; // 80345920
  c->r[4]=0u+0x00000000u; // 80345924
  c->lr=0x8034592Cu; f_8033ECD0(c); // 80345928
  cmps(c,0,(int32_t)c->r[3],0); // 8034592C
  if (!crb(c,2)) { goto L_8034593C; } // 80345930
  c->r[0]=0u+0x000000FFu; // 80345934
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 80345938
L_8034593C:;
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 8034593C
  c->r[3]=c->r[1]+0x00000030u; // 80345940
  c->r[4]=c->r[1]+0x0000007Cu; // 80345944
  c->lr=0x8034594Cu; f_80345B2C(c); // 80345948
  c->r[5]=R32(c->r[31]+0x00000020u); // 8034594C
  c->r[3]=c->r[1]+0x0000002Cu; // 80345950
  c->r[4]=c->r[1]+0x00000030u; // 80345954
  c->lr=0x8034595Cu; f_80345B3C(c); // 80345958
  c->r[8]=R8(c->r[1]+0x0000002Cu); // 8034595C
  c->r[5]=c->r[1]+0x00000034u; // 80345960
  c->r[7]=R8(c->r[1]+0x0000002Du); // 80345964
  c->r[3]=c->r[30]|c->r[30]; // 80345968
  c->r[6]=R8(c->r[1]+0x0000002Eu); // 8034596C
  c->r[4]=0u+0x00000000u; // 80345970
  c->r[0]=R8(c->r[1]+0x0000002Fu); // 80345974
  W8(c->r[1]+0x00000034u,c->r[8]); // 80345978
  W8(c->r[1]+0x00000035u,c->r[7]); // 8034597C
  W8(c->r[1]+0x00000036u,c->r[6]); // 80345980
  W8(c->r[1]+0x00000037u,c->r[0]); // 80345984
  c->lr=0x8034598Cu; f_8033ED88(c); // 80345988
L_8034598C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8034598C
  c->r[0]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[0]); // 80345990
  if (crb(c,2)) { goto L_80345A08; } // 80345994
  c->r[3]=c->r[30]|c->r[30]; // 80345998
  c->r[5]=c->r[1]+0x0000007Cu; // 8034599C
  c->r[4]=0u+0x00000001u; // 803459A0
  c->lr=0x803459A8u; f_8033ECD0(c); // 803459A4
  cmps(c,0,(int32_t)c->r[3],0); // 803459A8
  if (!crb(c,2)) { goto L_803459B8; } // 803459AC
  c->r[0]=0u+0x000000FFu; // 803459B0
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 803459B4
L_803459B8:;
  c->r[5]=R32(c->r[31]+0x00000050u); // 803459B8
  c->r[3]=c->r[1]+0x00000024u; // 803459BC
  c->r[4]=c->r[1]+0x0000007Cu; // 803459C0
  c->lr=0x803459C8u; f_80345B2C(c); // 803459C4
  c->r[5]=R32(c->r[31]+0x00000024u); // 803459C8
  c->r[3]=c->r[1]+0x00000020u; // 803459CC
  c->r[4]=c->r[1]+0x00000024u; // 803459D0
  c->lr=0x803459D8u; f_80345B3C(c); // 803459D4
  c->r[8]=R8(c->r[1]+0x00000020u); // 803459D8
  c->r[5]=c->r[1]+0x00000028u; // 803459DC
  c->r[7]=R8(c->r[1]+0x00000021u); // 803459E0
  c->r[3]=c->r[30]|c->r[30]; // 803459E4
  c->r[6]=R8(c->r[1]+0x00000022u); // 803459E8
  c->r[4]=0u+0x00000001u; // 803459EC
  c->r[0]=R8(c->r[1]+0x00000023u); // 803459F0
  W8(c->r[1]+0x00000028u,c->r[8]); // 803459F4
  W8(c->r[1]+0x00000029u,c->r[7]); // 803459F8
  W8(c->r[1]+0x0000002Au,c->r[6]); // 803459FC
  W8(c->r[1]+0x0000002Bu,c->r[0]); // 80345A00
  c->lr=0x80345A08u; f_8033ED88(c); // 80345A04
L_80345A08:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80345A08
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 80345A0C
  if (crb(c,2)) { goto L_80345A84; } // 80345A10
  c->r[3]=c->r[30]|c->r[30]; // 80345A14
  c->r[5]=c->r[1]+0x0000007Cu; // 80345A18
  c->r[4]=0u+0x00000002u; // 80345A1C
  c->lr=0x80345A24u; f_8033ECD0(c); // 80345A20
  cmps(c,0,(int32_t)c->r[3],0); // 80345A24
  if (!crb(c,2)) { goto L_80345A34; } // 80345A28
  c->r[0]=0u+0x000000FFu; // 80345A2C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 80345A30
L_80345A34:;
  c->r[5]=R32(c->r[31]+0x00000054u); // 80345A34
  c->r[3]=c->r[1]+0x00000018u; // 80345A38
  c->r[4]=c->r[1]+0x0000007Cu; // 80345A3C
  c->lr=0x80345A44u; f_80345B2C(c); // 80345A40
  c->r[5]=R32(c->r[31]+0x00000028u); // 80345A44
  c->r[3]=c->r[1]+0x00000014u; // 80345A48
  c->r[4]=c->r[1]+0x00000018u; // 80345A4C
  c->lr=0x80345A54u; f_80345B3C(c); // 80345A50
  c->r[8]=R8(c->r[1]+0x00000014u); // 80345A54
  c->r[5]=c->r[1]+0x0000001Cu; // 80345A58
  c->r[7]=R8(c->r[1]+0x00000015u); // 80345A5C
  c->r[3]=c->r[30]|c->r[30]; // 80345A60
  c->r[6]=R8(c->r[1]+0x00000016u); // 80345A64
  c->r[4]=0u+0x00000002u; // 80345A68
  c->r[0]=R8(c->r[1]+0x00000017u); // 80345A6C
  W8(c->r[1]+0x0000001Cu,c->r[8]); // 80345A70
  W8(c->r[1]+0x0000001Du,c->r[7]); // 80345A74
  W8(c->r[1]+0x0000001Eu,c->r[6]); // 80345A78
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 80345A7C
  c->lr=0x80345A84u; f_8033ED88(c); // 80345A80
L_80345A84:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80345A84
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80345A88
  if (crb(c,2)) { goto L_80345B00; } // 80345A8C
  c->r[3]=c->r[30]|c->r[30]; // 80345A90
  c->r[5]=c->r[1]+0x0000007Cu; // 80345A94
  c->r[4]=0u+0x00000003u; // 80345A98
  c->lr=0x80345AA0u; f_8033ECD0(c); // 80345A9C
  cmps(c,0,(int32_t)c->r[3],0); // 80345AA0
  if (!crb(c,2)) { goto L_80345AB0; } // 80345AA4
  c->r[0]=0u+0x000000FFu; // 80345AA8
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 80345AAC
L_80345AB0:;
  c->r[5]=R32(c->r[31]+0x00000058u); // 80345AB0
  c->r[3]=c->r[1]+0x0000000Cu; // 80345AB4
  c->r[4]=c->r[1]+0x0000007Cu; // 80345AB8
  c->lr=0x80345AC0u; f_80345B2C(c); // 80345ABC
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 80345AC0
  c->r[3]=c->r[1]+0x00000008u; // 80345AC4
  c->r[4]=c->r[1]+0x0000000Cu; // 80345AC8
  c->lr=0x80345AD0u; f_80345B3C(c); // 80345ACC
  c->r[8]=R8(c->r[1]+0x00000008u); // 80345AD0
  c->r[5]=c->r[1]+0x00000010u; // 80345AD4
  c->r[7]=R8(c->r[1]+0x00000009u); // 80345AD8
  c->r[3]=c->r[30]|c->r[30]; // 80345ADC
  c->r[6]=R8(c->r[1]+0x0000000Au); // 80345AE0
  c->r[4]=0u+0x00000003u; // 80345AE4
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 80345AE8
  W8(c->r[1]+0x00000010u,c->r[8]); // 80345AEC
  W8(c->r[1]+0x00000011u,c->r[7]); // 80345AF0
  W8(c->r[1]+0x00000012u,c->r[6]); // 80345AF4
  W8(c->r[1]+0x00000013u,c->r[0]); // 80345AF8
  c->lr=0x80345B00u; f_8033ED88(c); // 80345AFC
L_80345B00:;
  c->r[3]=c->r[30]|c->r[30]; // 80345B00
  c->r[4]=0u+0x00000000u; // 80345B04
  c->lr=0x80345B0Cu; f_8033E458(c); // 80345B08
L_80345B0C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 80345B0C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80345B10
  c->r[30]=R32(c->r[1]+0x00000088u); // 80345B14
  c->r[29]=R32(c->r[1]+0x00000084u); // 80345B18
  c->r[28]=R32(c->r[1]+0x00000080u); // 80345B1C
  c->lr=c->r[0]; // 80345B20
  c->r[1]=c->r[1]+0x00000090u; // 80345B24
  return; // 80345B28
}

// __ad__Q34nw4r2ut5ColorCFUl
void f_80345B2C(Ctx* __restrict c) {
  trace_call(0x80345B2Cu);
  c->r[0]=R32(c->r[4]+0x00000000u); // 80345B2C
  c->r[0]=c->r[5]&c->r[0]; // 80345B30
  W32(c->r[3]+0x00000000u,c->r[0]); // 80345B34
  return; // 80345B38
}

// __or__Q34nw4r2ut5ColorCFUl
void f_80345B3C(Ctx* __restrict c) {
  trace_call(0x80345B3Cu);
  c->r[0]=R32(c->r[4]+0x00000000u); // 80345B3C
  c->r[0]=c->r[5]|c->r[0]; // 80345B40
  W32(c->r[3]+0x00000000u,c->r[0]); // 80345B44
  return; // 80345B48
}

// fn_80345B4C
void f_80345B4C(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80345B4C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80345B50
  c->r[3]=c->r[3]+0x000047D0u; // 80345B54
  cmpu(c,0,c->r[0],c->r[3]); // 80345B58
  if (!crb(c,2)) { goto L_80345B68; } // 80345B5C
  c->r[3]=0u+0x00000001u; // 80345B60
  return; // 80345B64
L_80345B68:;
  c->r[3]=0u+0x803C0000u; // 80345B68
  c->r[0]=R32(c->r[4]+0x00000000u); // 80345B6C
  c->r[3]=c->r[3]+0x000047B8u; // 80345B70
  cmpu(c,0,c->r[0],c->r[3]); // 80345B74
  if (!crb(c,2)) { goto L_80345B84; } // 80345B78
  c->r[3]=0u+0x00000001u; // 80345B7C
  return; // 80345B80
L_80345B84:;
  c->r[3]=0u+0x803C0000u; // 80345B84
  c->r[3]=c->r[3]+0x000048D8u; // 80345B88
  cmpu(c,0,c->r[0],c->r[3]); // 80345B8C
  if (!crb(c,2)) { goto L_80345B9C; } // 80345B90
  c->r[3]=0u+0x00000001u; // 80345B94
  return; // 80345B98
L_80345B9C:;
  c->r[3]=0u+0x803C0000u; // 80345B9C
  c->r[3]=c->r[3]+0x000048C8u; // 80345BA0
  c->r[0]=c->r[3]-c->r[0]; // 80345BA4
  c->r[0]=cntlz(c->r[0]); // 80345BA8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80345BAC
  return; // 80345BB0
}

// fn_80345BB4
void f_80345BB4(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80345BB4
  c->r[0]=R32(c->r[4]+0x00000000u); // 80345BB8
  c->r[3]=c->r[3]+0x000047B8u; // 80345BBC
  cmpu(c,0,c->r[0],c->r[3]); // 80345BC0
  if (!crb(c,2)) { goto L_80345BD0; } // 80345BC4
  c->r[3]=0u+0x00000001u; // 80345BC8
  return; // 80345BCC
L_80345BD0:;
  c->r[3]=0u+0x803C0000u; // 80345BD0
  c->r[0]=R32(c->r[4]+0x00000000u); // 80345BD4
  c->r[3]=c->r[3]+0x000048D8u; // 80345BD8
  cmpu(c,0,c->r[0],c->r[3]); // 80345BDC
  if (!crb(c,2)) { goto L_80345BEC; } // 80345BE0
  c->r[3]=0u+0x00000001u; // 80345BE4
  return; // 80345BE8
L_80345BEC:;
  c->r[3]=0u+0x803C0000u; // 80345BEC
  c->r[3]=c->r[3]+0x000048C8u; // 80345BF0
  c->r[0]=c->r[3]-c->r[0]; // 80345BF4
  c->r[0]=cntlz(c->r[0]); // 80345BF8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80345BFC
  return; // 80345C00
}

// fn_80345C04
void f_80345C04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80345C04
  c->r[0]=c->lr; // 80345C08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80345C0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80345C10
  c->r[12]=R32(c->r[12]+0x00000014u); // 80345C14
  c->ctr=c->r[12]; // 80345C18
  if (true) { c->lr=0x80345C20u; dispatch(c,c->ctr); } // 80345C1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80345C20
  c->r[3]=c->r[3]+0x00000004u; // 80345C24
  c->lr=c->r[0]; // 80345C28
  c->r[1]=c->r[1]+0x00000010u; // 80345C2C
  return; // 80345C30
}

// fn_80345C34
void f_80345C34(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80345C34
  c->r[3]=c->r[3]+0x000047D0u; // 80345C38
  return; // 80345C3C
}

// fn_80345C40
void f_80345C40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80345C40
  c->r[0]=c->lr; // 80345C44
  cmps(c,0,(int32_t)c->r[3],0); // 80345C48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80345C4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80345C50
  c->r[31]=c->r[3]|c->r[3]; // 80345C54
  if (crb(c,2)) { goto L_80345C6C; } // 80345C58
  if (crb(c,2)) { goto L_80345C6C; } // 80345C5C
  if (crb(c,2)) { goto L_80345C6C; } // 80345C60
  c->r[4]=0u+0x00000000u; // 80345C64
  c->lr=0x80345C6Cu; f_8034A528(c); // 80345C68
L_80345C6C:;
  c->r[3]=c->r[31]|c->r[31]; // 80345C6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80345C70
  c->r[0]=R32(c->r[1]+0x00000014u); // 80345C74
  c->lr=c->r[0]; // 80345C78
  c->r[1]=c->r[1]+0x00000010u; // 80345C7C
  return; // 80345C80
}

// fn_80345C84
void f_80345C84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80345C84
  c->r[0]=c->lr; // 80345C88
  W32(c->r[1]+0x00000014u,c->r[0]); // 80345C8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80345C90
  c->r[12]=R32(c->r[12]+0x00000014u); // 80345C94
  c->ctr=c->r[12]; // 80345C98
  if (true) { c->lr=0x80345CA0u; dispatch(c,c->ctr); } // 80345C9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80345CA0
  c->r[3]=c->r[3]+0x00000004u; // 80345CA4
  c->lr=c->r[0]; // 80345CA8
  c->r[1]=c->r[1]+0x00000010u; // 80345CAC
  return; // 80345CB0
}

// fn_80345CB4
void f_80345CB4(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80345CB4
  c->r[3]=c->r[3]+0x000047B8u; // 80345CB8
  return; // 80345CBC
}

// fn_80345CC0
void f_80345CC0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000014u); // 80345CC0
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80345CC4
  c->r[0]=R16(c->r[3]+c->r[0]); // 80345CC8
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 80345CCC
  c->r[0]=cntlz(c->r[0]); // 80345CD0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80345CD4
  return; // 80345CD8
}

// fn_80345CDC
void f_80345CDC(Ctx* __restrict c) {
  c->r[4]=0u+0x00010000u; // 80345CDC
  c->r[7]=0u+0x00000000u; // 80345CE0
  c->r[5]=c->r[4]+0xFFFF8000u; // 80345CE4
  c->r[6]=0u+0x00000000u; // 80345CE8
  goto L_80345D00; // 80345CEC
L_80345CF0:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 80345CF0
  c->r[7]=c->r[7]+0x00000001u; // 80345CF4
  W16(c->r[4]+c->r[6],c->r[5]); // 80345CF8
  c->r[6]=c->r[6]+0x00000002u; // 80345CFC
L_80345D00:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80345D00
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80345D04
  if (crb(c,0)) { IRQCHK(c); goto L_80345CF0; } // 80345D08
  c->r[4]=0u+0x00000004u; // 80345D0C
  c->r[5]=0u+0x00000000u; // 80345D10
  f_8034A6BC(c); return; // 80345D14
}

// fn_80345D18
void f_80345D18(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80345D18
  return; // 80345D1C
}

// fn_80345D20
void f_80345D20(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80345D20
  return; // 80345D24
}

// fn_80345D28
void f_80345D28(Ctx* __restrict c) {
  return; // 80345D28
}

// fn_80345D2C
void f_80345D2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80345D2C
  c->r[0]=c->lr; // 80345D30
  cmps(c,0,(int32_t)c->r[3],0); // 80345D34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80345D38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80345D3C
  c->r[31]=c->r[3]|c->r[3]; // 80345D40
  if (crb(c,2)) { goto L_80345D54; } // 80345D44
  if (crb(c,2)) { goto L_80345D54; } // 80345D48
  c->r[4]=0u+0x00000000u; // 80345D4C
  c->lr=0x80345D54u; f_8034A528(c); // 80345D50
L_80345D54:;
  c->r[3]=c->r[31]|c->r[31]; // 80345D54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80345D58
  c->r[0]=R32(c->r[1]+0x00000014u); // 80345D5C
  c->lr=c->r[0]; // 80345D60
  c->r[1]=c->r[1]+0x00000010u; // 80345D64
  return; // 80345D68
}

// fn_80345D6C
void f_80345D6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80345D6C
  c->r[0]=c->lr; // 80345D70
  W32(c->r[1]+0x00000044u,c->r[0]); // 80345D74
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80345D78
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80345D7C
  c->r[11]=c->r[1]+0x00000030u; // 80345D80
  c->lr=0x80345D88u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80345D84
  c->r[8]=R32(c->r[5]+0x00000000u); // 80345D88
  c->r[29]=c->r[3]|c->r[3]; // 80345D8C
  c->r[25]=c->r[4]|c->r[4]; // 80345D90
  c->r[30]=c->r[5]|c->r[5]; // 80345D94
  cmps(c,0,(int32_t)c->r[8],0); // 80345D98
  c->r[27]=c->r[7]|c->r[7]; // 80345D9C
  if (crb(c,2)) { goto L_80345DB0; } // 80345DA0
  c->r[0]=R32(c->r[6]+0x00000000u); // 80345DA4
  cmps(c,0,(int32_t)c->r[0],0); // 80345DA8
  if (!crb(c,2)) { goto L_80345DB8; } // 80345DAC
L_80345DB0:;
  c->r[3]=0u+0x00000000u; // 80345DB0
  goto L_80345F3C; // 80345DB4
L_80345DB8:;
  c->r[31]=R16(c->r[8]+0x0000002Eu); // 80345DB8
  c->r[3]=c->r[6]|c->r[6]; // 80345DBC
  c->lr=0x80345DC4u; f_8033CF34(c); // 80345DC0
  c->r[0]=0u-c->r[27]; // 80345DC4
  c->r[28]=c->r[3]|c->r[3]; // 80345DC8
  c->r[4]=c->r[0]|c->r[27]; // 80345DCC
  cmps(c,0,(int32_t)c->r[25],0); // 80345DD0
  c->r[4]=sraw(c,c->r[4],31); // 80345DD4
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80345DD8
  c->r[3]=c->r[31]&c->r[4]; // 80345DDC
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 80345DE0
  c->r[3]=c->r[26]+c->r[0]; // 80345DE4
  c->r[4]=c->r[3]+0x00000034u; // 80345DE8
  if (crb(c,2)) { goto L_80345DF4; } // 80345DEC
  W32(c->r[25]+0x00000000u,c->r[4]); // 80345DF0
L_80345DF4:;
  cmps(c,0,(int32_t)c->r[29],0); // 80345DF4
  if (!crb(c,2)) { goto L_80345E04; } // 80345DF8
  c->r[3]=0u+0x00000000u; // 80345DFC
  goto L_80345F3C; // 80345E00
L_80345E04:;
  c->r[3]=c->r[29]|c->r[29]; // 80345E04
  c->lr=0x80345E0Cu; f_802CF59C(c); // 80345E08
  cmps(c,0,(int32_t)c->r[3],0); // 80345E0C
  c->r[31]=c->r[3]|c->r[3]; // 80345E10
  if (!crb(c,2)) { goto L_80345E20; } // 80345E14
  c->r[3]=0u+0x00000000u; // 80345E18
  goto L_80345F3C; // 80345E1C
L_80345E20:;
  cmps(c,0,(int32_t)c->r[27],0); // 80345E20
  if (crb(c,2)) { goto L_80345E30; } // 80345E24
  c->r[27]=c->r[3]+0x00000034u; // 80345E28
  goto L_80345E34; // 80345E2C
L_80345E30:;
  c->r[27]=0u+0x00000000u; // 80345E30
L_80345E34:;
  cmps(c,0,(int32_t)c->r[3],0); // 80345E34
  c->r[4]=c->r[3]+c->r[26]; // 80345E38
  c->r[5]=c->r[4]+0x00000034u; // 80345E3C
  if (crb(c,2)) { goto L_80345F38; } // 80345E40
  c->r[0]=0u+0x00000000u; // 80345E44
  c->r[4]=0u+0x80540000u; // 80345E48
  W32(c->r[3]+0x00000004u,c->r[0]); // 80345E4C
  c->r[4]=c->r[4]+0x00007B40u; // 80345E50
  c->r[30]=R32(c->r[30]+0x00000000u); // 80345E54
  W32(c->r[3]+0x00000008u,c->r[29]); // 80345E58
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80345E5C
  W32(c->r[3]+0x00000000u,c->r[4]); // 80345E60
  W32(c->r[3]+0x00000010u,c->r[28]); // 80345E64
  W32(c->r[3]+0x00000014u,c->r[5]); // 80345E68
  c->r[3]=c->r[31]|c->r[31]; // 80345E6C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80345E70
  c->r[12]=R32(c->r[12]+0x00000034u); // 80345E74
  c->ctr=c->r[12]; // 80345E78
  if (true) { c->lr=0x80345E80u; dispatch(c,c->ctr); } // 80345E7C
  c->r[4]=R16(c->r[30]+0x0000002Cu); // 80345E80
  c->r[0]=0u+0x43300000u; // 80345E84
  c->r[5]=R32(c->r[30]+0x00000034u); // 80345E88
  c->r[3]=0u+0x80540000u; // 80345E8C
  c->r[4]=c->r[4]^0x80000000u; // 80345E90
  {uint32_t ea=c->r[2]+0xFFFFEFF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80345E94
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80345E98
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80345E9C
  {uint32_t ea=c->r[2]+0xFFFFEFF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80345EA0
  c->r[4]=c->r[13]+0xFFFF8000u; // 80345EA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 80345EA8
  c->r[3]=c->r[3]+0x00007AF8u; // 80345EAC
  {uint32_t ea=c->r[2]+0xFFFFEFF8u; c->f[3]=RF64(ea);} // 80345EB0
  cmps(c,0,(int32_t)c->r[27],0); // 80345EB4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 80345EB8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 80345EBC
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 80345EC0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 80345EC4
  c->r[0]=R32(c->r[4]+c->r[5]); // 80345EC8
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 80345ECC
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 80345ED0
  W32(c->r[31]+0x00000028u,c->r[0]); // 80345ED4
  W32(c->r[31]+0x00000000u,c->r[3]); // 80345ED8
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 80345EDC
  W32(c->r[31]+0x00000030u,c->r[27]); // 80345EE0
  if (crb(c,2)) { goto L_80345F38; } // 80345EE4
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 80345EE8
  c->r[28]=0u+0x00000000u; // 80345EEC
  c->r[27]=0u+0x00000000u; // 80345EF0
  goto L_80345F2C; // 80345EF4
L_80345EF8:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80345EF8
  c->r[3]=R16(c->r[3]+c->r[27]); // 80345EFC
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 80345F00
  if (!crb(c,2)) { goto L_80345F24; } // 80345F04
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 80345F08
  c->f[1]=c->f[31]; // 80345F0C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 80345F10
  c->r[4]=R32(c->r[31]+0x00000030u); // 80345F14
  c->r[3]=c->r[31]+0x0000002Cu; // 80345F18
  c->r[4]=c->r[4]+c->r[0]; // 80345F1C
  c->lr=0x80345F24u; f_80340C20(c); // 80345F20
L_80345F24:;
  c->r[27]=c->r[27]+0x00000002u; // 80345F24
  c->r[28]=c->r[28]+0x00000001u; // 80345F28
L_80345F2C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 80345F2C
  cmpu(c,0,c->r[28],c->r[0]); // 80345F30
  if (crb(c,0)) { IRQCHK(c); goto L_80345EF8; } // 80345F34
L_80345F38:;
  c->r[3]=c->r[31]|c->r[31]; // 80345F38
L_80345F3C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80345F3C
  c->r[11]=c->r[1]+0x00000030u; // 80345F40
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80345F44
  c->lr=0x80345F4Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80345F48
  c->r[0]=R32(c->r[1]+0x00000044u); // 80345F4C
  c->lr=c->r[0]; // 80345F50
  c->r[1]=c->r[1]+0x00000040u; // 80345F54
  return; // 80345F58
}

// fn_80345F5C
void f_80345F5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80345F5C
  c->r[0]=c->lr; // 80345F60
  W32(c->r[1]+0x00000034u,c->r[0]); // 80345F64
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80345F68
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80345F6C
  c->f[3]=c->f[1]; // 80345F70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80345F74
  W32(c->r[1]+0x00000018u,c->r[30]); // 80345F78
  W32(c->r[1]+0x00000014u,c->r[29]); // 80345F7C
  c->r[29]=c->r[3]|c->r[3]; // 80345F80
  c->r[12]=R32(c->r[3]+0x00000028u); // 80345F84
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80345F88
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80345F8C
  c->ctr=c->r[12]; // 80345F90
  if (true) { c->lr=0x80345F98u; dispatch(c,c->ctr); } // 80345F94
  c->r[0]=R32(c->r[29]+0x00000030u); // 80345F98
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 80345F9C
  cmps(c,0,(int32_t)c->r[0],0); // 80345FA0
  if (crb(c,2)) { goto L_80345FF8; } // 80345FA4
  c->f[31]=c->ps1[31]=S(c->f[1]); // 80345FA8
  c->r[31]=0u+0x00000000u; // 80345FAC
  c->r[30]=0u+0x00000000u; // 80345FB0
  goto L_80345FEC; // 80345FB4
L_80345FB8:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80345FB8
  c->r[3]=R16(c->r[3]+c->r[30]); // 80345FBC
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 80345FC0
  if (!crb(c,2)) { goto L_80345FE4; } // 80345FC4
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 80345FC8
  c->f[1]=c->f[31]; // 80345FCC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 80345FD0
  c->r[4]=R32(c->r[29]+0x00000030u); // 80345FD4
  c->r[3]=c->r[29]+0x0000002Cu; // 80345FD8
  c->r[4]=c->r[4]+c->r[0]; // 80345FDC
  c->lr=0x80345FE4u; f_80340C20(c); // 80345FE0
L_80345FE4:;
  c->r[30]=c->r[30]+0x00000002u; // 80345FE4
  c->r[31]=c->r[31]+0x00000001u; // 80345FE8
L_80345FEC:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80345FEC
  cmpu(c,0,c->r[31],c->r[0]); // 80345FF0
  if (crb(c,0)) { IRQCHK(c); goto L_80345FB8; } // 80345FF4
L_80345FF8:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80345FF8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80345FFC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80346000
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80346004
  c->r[30]=R32(c->r[1]+0x00000018u); // 80346008
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034600C
  c->lr=c->r[0]; // 80346010
  c->r[1]=c->r[1]+0x00000030u; // 80346014
  return; // 80346018
}

// fn_8034601C
void f_8034601C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034601C
  return; // 80346020
}

// fn_80346024
void f_80346024(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80346024
  c->r[0]=c->lr; // 80346028
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034602C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80346030
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80346034
  {uint32_t ea=c->r[2]+0xFFFFEFF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80346038
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034603C
  fcmp(c,0,c->f[0],c->f[1]); // 80346040
  W32(c->r[1]+0x00000018u,c->r[30]); // 80346044
  W32(c->r[1]+0x00000014u,c->r[29]); // 80346048
  c->r[29]=c->r[3]|c->r[3]; // 8034604C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 80346050
  if (!crb(c,2)) { goto L_803460B4; } // 80346054
  c->r[0]=R32(c->r[3]+0x00000030u); // 80346058
  cmps(c,0,(int32_t)c->r[0],0); // 8034605C
  if (crb(c,2)) { goto L_803460B4; } // 80346060
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 80346064
  c->r[31]=0u+0x00000000u; // 80346068
  c->r[30]=0u+0x00000000u; // 8034606C
  goto L_803460A8; // 80346070
L_80346074:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80346074
  c->r[3]=R16(c->r[3]+c->r[30]); // 80346078
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8034607C
  if (!crb(c,2)) { goto L_803460A0; } // 80346080
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 80346084
  c->f[1]=c->f[31]; // 80346088
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 8034608C
  c->r[4]=R32(c->r[29]+0x00000030u); // 80346090
  c->r[3]=c->r[29]+0x0000002Cu; // 80346094
  c->r[4]=c->r[4]+c->r[0]; // 80346098
  c->lr=0x803460A0u; f_80340C20(c); // 8034609C
L_803460A0:;
  c->r[30]=c->r[30]+0x00000002u; // 803460A0
  c->r[31]=c->r[31]+0x00000001u; // 803460A4
L_803460A8:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 803460A8
  cmpu(c,0,c->r[31],c->r[0]); // 803460AC
  if (crb(c,0)) { IRQCHK(c); goto L_80346074; } // 803460B0
L_803460B4:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 803460B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803460B8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 803460BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803460C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803460C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803460C8
  c->lr=c->r[0]; // 803460CC
  c->r[1]=c->r[1]+0x00000030u; // 803460D0
  return; // 803460D4
}

// fn_803460D8
void f_803460D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803460D8
  return; // 803460DC
}

// fn_803460E0
void f_803460E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803460E0
  c->r[0]=c->lr; // 803460E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 803460E8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 803460EC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 803460F0
  {uint32_t ea=c->r[2]+0xFFFFEFF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803460F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803460F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803460FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80346100
  c->r[29]=c->r[3]|c->r[3]; // 80346104
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80346108
  fcmp(c,0,c->f[0],c->f[1]); // 8034610C
  if (crb(c,2)) { goto L_8034619C; } // 80346110
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80346114
  {uint32_t ea=c->r[13]+0xFFFFAA00u; c->f[1]=c->ps1[1]=RF32(ea);} // 80346118
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034611C
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 80346120
  c->r[12]=R32(c->r[3]+0x00000028u); // 80346124
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80346128
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8034612C
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 80346130
  c->ctr=c->r[12]; // 80346134
  if (true) { c->lr=0x8034613Cu; dispatch(c,c->ctr); } // 80346138
  c->r[0]=R32(c->r[29]+0x00000030u); // 8034613C
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 80346140
  cmps(c,0,(int32_t)c->r[0],0); // 80346144
  if (crb(c,2)) { goto L_8034619C; } // 80346148
  c->f[31]=c->ps1[31]=S(c->f[1]); // 8034614C
  c->r[31]=0u+0x00000000u; // 80346150
  c->r[30]=0u+0x00000000u; // 80346154
  goto L_80346190; // 80346158
L_8034615C:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8034615C
  c->r[3]=R16(c->r[3]+c->r[30]); // 80346160
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 80346164
  if (!crb(c,2)) { goto L_80346188; } // 80346168
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8034616C
  c->f[1]=c->f[31]; // 80346170
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 80346174
  c->r[4]=R32(c->r[29]+0x00000030u); // 80346178
  c->r[3]=c->r[29]+0x0000002Cu; // 8034617C
  c->r[4]=c->r[4]+c->r[0]; // 80346180
  c->lr=0x80346188u; f_80340C20(c); // 80346184
L_80346188:;
  c->r[30]=c->r[30]+0x00000002u; // 80346188
  c->r[31]=c->r[31]+0x00000001u; // 8034618C
L_80346190:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80346190
  cmpu(c,0,c->r[31],c->r[0]); // 80346194
  if (crb(c,0)) { IRQCHK(c); goto L_8034615C; } // 80346198
L_8034619C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8034619C
  c->r[0]=R32(c->r[1]+0x00000034u); // 803461A0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 803461A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803461A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803461AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803461B0
  c->lr=c->r[0]; // 803461B4
  c->r[1]=c->r[1]+0x00000030u; // 803461B8
  return; // 803461BC
}

// fn_803461C0
void f_803461C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803461C0
  c->r[0]=c->lr; // 803461C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 803461C8
  c->r[11]=c->r[1]+0x00000030u; // 803461CC
  c->lr=0x803461D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803461D0
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 803461D4
  c->r[27]=c->r[3]|c->r[3]; // 803461D8
  c->r[28]=c->r[4]|c->r[4]; // 803461DC
  c->r[30]=0u+0x00000000u; // 803461E0
  c->r[31]=R16(c->r[5]+0x0000002Eu); // 803461E4
  c->r[29]=0u+0x00000000u; // 803461E8
  cmps(c,0,(int32_t)c->r[31],0); // 803461EC
  if (!crb(c,1)) { goto L_8034628C; } // 803461F0
  goto L_80346280; // 803461F4
L_803461F8:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 803461F8
  c->r[0]=R32(c->r[3]+0x00000010u); // 803461FC
  cmps(c,0,(int32_t)c->r[0],0); // 80346200
  if (crb(c,2)) { goto L_80346210; } // 80346204
  c->r[0]=c->r[3]+c->r[0]; // 80346208
  goto L_80346214; // 8034620C
L_80346210:;
  c->r[0]=0u+0x00000000u; // 80346210
L_80346214:;
  cmps(c,0,(int32_t)c->r[0],0); // 80346214
  if (crb(c,2)) { goto L_80346240; } // 80346218
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 8034621C
  c->r[3]=c->r[0]+c->r[3]; // 80346220
  c->r[3]=R32(c->r[3]+0x00000024u); // 80346224
  cmps(c,0,(int32_t)c->r[3],0); // 80346228
  if (crb(c,2)) { goto L_80346238; } // 8034622C
  c->r[5]=c->r[0]+c->r[3]; // 80346230
  goto L_80346244; // 80346234
L_80346238:;
  c->r[5]=0u+0x00000000u; // 80346238
  goto L_80346244; // 8034623C
L_80346240:;
  c->r[5]=0u+0x00000000u; // 80346240
L_80346244:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80346244
  c->r[3]=c->r[28]|c->r[28]; // 80346248
  c->r[4]=c->r[1]+0x00000008u; // 8034624C
  c->r[5]=c->r[0]+c->r[5]; // 80346250
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 80346254
  W32(c->r[1]+0x00000008u,c->r[0]); // 80346258
  c->lr=0x80346260u; f_8033CE3C(c); // 8034625C
  cmps(c,0,(int32_t)c->r[3],0); // 80346260
  if (crb(c,2)) { goto L_8034627C; } // 80346264
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80346268
  c->r[30]=0u+0x00000001u; // 8034626C
  c->r[3]=R32(c->r[27]+0x00000014u); // 80346270
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80346274
  W16(c->r[3]+c->r[0],c->r[29]); // 80346278
L_8034627C:;
  c->r[29]=c->r[29]+0x00000001u; // 8034627C
L_80346280:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 80346280
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 80346284
  if (crb(c,0)) { IRQCHK(c); goto L_803461F8; } // 80346288
L_8034628C:;
  c->r[3]=c->r[27]|c->r[27]; // 8034628C
  c->r[4]=0u+0x00000004u; // 80346290
  c->r[5]=0u+0x00000001u; // 80346294
  c->lr=0x8034629Cu; f_8034A6BC(c); // 80346298
  c->r[11]=c->r[1]+0x00000030u; // 8034629C
  c->r[3]=c->r[30]|c->r[30]; // 803462A0
  c->lr=0x803462A8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803462A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803462A8
  c->lr=c->r[0]; // 803462AC
  c->r[1]=c->r[1]+0x00000030u; // 803462B0
  return; // 803462B4
}

// fn_803462B8
void f_803462B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803462B8
  c->r[0]=c->lr; // 803462BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803462C0
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 803462C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803462C8
  c->r[31]=c->r[4]|c->r[4]; // 803462CC
  c->r[6]=R32(c->r[3]+0x00000014u); // 803462D0
  c->r[5]=R16(c->r[6]+c->r[0]); // 803462D4
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 803462D8
  if (crb(c,2)) { goto L_803462F4; } // 803462DC
  c->r[0]=0u+0x00000000u; // 803462E0
  c->r[3]=c->r[31]|c->r[31]; // 803462E4
  W8(c->r[4]+0x00000000u,c->r[0]); // 803462E8
  W8(c->r[4]+0x00000001u,c->r[0]); // 803462EC
  goto L_8034631C; // 803462F0
L_803462F4:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 803462F4
  cmps(c,0,(int32_t)c->r[6],0); // 803462F8
  if (crb(c,2)) { goto L_8034630C; } // 803462FC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 80346300
  c->r[3]=c->r[6]+c->r[0]; // 80346304
  goto L_8034631C; // 80346308
L_8034630C:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034630C
  c->r[3]=c->r[3]+0x0000002Cu; // 80346310
  c->lr=0x80346318u; f_80340C20(c); // 80346314
  c->r[3]=c->r[31]|c->r[31]; // 80346318
L_8034631C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034631C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80346320
  c->lr=c->r[0]; // 80346324
  c->r[1]=c->r[1]+0x00000010u; // 80346328
  return; // 8034632C
}

// fn_80346330
void f_80346330(Ctx* __restrict c) {
  c->r[5]=0u+0x00010000u; // 80346330
  c->r[0]=c->r[5]+0x00000002u; // 80346334
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80346338
  if (crb(c,2)) { goto L_8034637C; } // 8034633C
  if (!crb(c,0)) { goto L_80346350; } // 80346340
  cmps(c,0,(int32_t)c->r[4],8); // 80346344
  if (crb(c,2)) { goto L_80346360; } // 80346348
  return; // 8034634C
L_80346350:;
  c->r[0]=c->r[5]+0x00000004u; // 80346350
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80346354
  if (!crb(c,0)) return; // 80346358
  goto L_80346370; // 8034635C
L_80346360:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80346360
  c->r[12]=R32(c->r[12]+0x00000024u); // 80346364
  c->ctr=c->r[12]; // 80346368
  if (true) { dispatch(c,c->ctr); return; } // 8034636C
L_80346370:;
  c->r[0]=0u+0x00000000u; // 80346370
  W32(c->r[3]+0x00000004u,c->r[0]); // 80346374
  return; // 80346378
L_8034637C:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 8034637C
  return; // 80346380
}

// fn_80346384
void f_80346384(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80346384
  c->r[0]=c->lr; // 80346388
  W32(c->r[1]+0x00000074u,c->r[0]); // 8034638C
  c->r[11]=c->r[1]+0x00000070u; // 80346390
  c->lr=0x80346398u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80346394
  c->r[31]=c->r[5]|c->r[5]; // 80346398
  c->r[26]=R8(c->r[5]+0x00000000u); // 8034639C
  c->r[22]=c->r[3]|c->r[3]; // 803463A0
  c->r[30]=c->r[4]|c->r[4]; // 803463A4
  c->r[27]=c->r[31]|c->r[31]; // 803463A8
  c->r[29]=c->r[1]+0x00000024u; // 803463AC
  c->r[28]=0u+0x00000000u; // 803463B0
  goto L_803464F0; // 803463B4
L_803463B8:;
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 803463B8
  if (crb(c,2)) { goto L_803464E4; } // 803463BC
  c->r[0]=R32(c->r[27]+0x00000004u); // 803463C0
  c->r[3]=c->r[22]|c->r[22]; // 803463C4
  c->r[4]=c->r[28]|c->r[28]; // 803463C8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803463CC
  c->lr=0x803463D4u; f_8033E630(c); // 803463D0
  W32(c->r[1]+0x00000008u,c->r[29]); // 803463D4
  c->r[25]=c->r[3]|c->r[3]; // 803463D8
  c->r[4]=c->r[1]+0x00000038u; // 803463DC
  c->r[5]=c->r[1]+0x00000034u; // 803463E0
  c->r[6]=c->r[1]+0x00000030u; // 803463E4
  c->r[7]=c->r[1]+0x0000002Cu; // 803463E8
  c->r[8]=c->r[1]+0x00000028u; // 803463EC
  c->r[9]=c->r[1]+0x00000012u; // 803463F0
  c->r[10]=c->r[1]+0x00000011u; // 803463F4
  c->lr=0x803463FCu; f_802B6EC0(c); // 803463F8
  c->r[3]=c->r[25]|c->r[25]; // 803463FC
  c->lr=0x80346404u; f_802B6E9C(c); // 80346400
  c->r[24]=c->r[3]|c->r[3]; // 80346404
  c->r[3]=c->r[25]|c->r[25]; // 80346408
  c->lr=0x80346410u; f_802B6EA8(c); // 8034640C
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 80346410
  c->r[23]=c->r[3]|c->r[3]; // 80346414
  c->r[0]=R32(c->r[4]+0x00000018u); // 80346418
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8034641C
  if (crb(c,2)) { goto L_80346474; } // 80346420
  c->r[3]=c->r[1]+0x0000003Cu; // 80346424
  c->r[4]=c->r[1]+0x00000020u; // 80346428
  c->r[5]=c->r[1]+0x00000016u; // 8034642C
  c->r[6]=c->r[1]+0x00000014u; // 80346430
  c->r[7]=c->r[1]+0x00000018u; // 80346434
  c->r[8]=c->r[1]+0x00000030u; // 80346438
  c->r[9]=c->r[1]+0x0000002Cu; // 8034643C
  c->r[10]=c->r[1]+0x00000010u; // 80346440
  c->lr=0x80346448u; f_8034035C(c); // 80346444
  W32(c->r[1]+0x00000008u,c->r[28]); // 80346448
  c->r[3]=c->r[25]|c->r[25]; // 8034644C
  c->r[8]=c->r[24]|c->r[24]; // 80346450
  c->r[9]=c->r[23]|c->r[23]; // 80346454
  c->r[4]=R32(c->r[1]+0x00000020u); // 80346458
  c->r[5]=R16(c->r[1]+0x00000016u); // 8034645C
  c->r[6]=R16(c->r[1]+0x00000014u); // 80346460
  c->r[7]=R32(c->r[1]+0x00000018u); // 80346464
  c->r[10]=R8(c->r[1]+0x00000010u); // 80346468
  c->lr=0x80346470u; f_802B6C90(c); // 8034646C
  goto L_803464BC; // 80346470
L_80346474:;
  c->r[3]=c->r[1]+0x0000003Cu; // 80346474
  c->r[4]=c->r[1]+0x00000020u; // 80346478
  c->r[5]=c->r[1]+0x00000016u; // 8034647C
  c->r[6]=c->r[1]+0x00000014u; // 80346480
  c->r[7]=c->r[1]+0x0000001Cu; // 80346484
  c->r[8]=c->r[1]+0x00000030u; // 80346488
  c->r[9]=c->r[1]+0x0000002Cu; // 8034648C
  c->r[10]=c->r[1]+0x00000010u; // 80346490
  c->lr=0x80346498u; f_803402A0(c); // 80346494
  c->r[4]=R32(c->r[1]+0x00000020u); // 80346498
  c->r[3]=c->r[25]|c->r[25]; // 8034649C
  c->r[5]=R16(c->r[1]+0x00000016u); // 803464A0
  c->r[8]=c->r[24]|c->r[24]; // 803464A4
  c->r[6]=R16(c->r[1]+0x00000014u); // 803464A8
  c->r[9]=c->r[23]|c->r[23]; // 803464AC
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 803464B0
  c->r[10]=R8(c->r[1]+0x00000010u); // 803464B4
  c->lr=0x803464BCu; f_802B6A84(c); // 803464B8
L_803464BC:;
  c->r[4]=R32(c->r[1]+0x00000038u); // 803464BC
  c->r[3]=c->r[25]|c->r[25]; // 803464C0
  c->r[5]=R32(c->r[1]+0x00000034u); // 803464C4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 803464C8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803464CC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 803464D0
  c->r[6]=R8(c->r[1]+0x00000012u); // 803464D4
  c->r[7]=R8(c->r[1]+0x00000011u); // 803464D8
  c->r[8]=R32(c->r[1]+0x00000024u); // 803464DC
  c->lr=0x803464E4u; f_802B6CD8(c); // 803464E0
L_803464E4:;
  c->r[26]=rotl(c->r[26],31)&0x7FFFFFFFu; // 803464E4
  c->r[27]=c->r[27]+0x00000004u; // 803464E8
  c->r[28]=c->r[28]+0x00000001u; // 803464EC
L_803464F0:;
  cmps(c,0,(int32_t)c->r[26],0); // 803464F0
  if (!crb(c,2)) { IRQCHK(c); goto L_803463B8; } // 803464F4
  c->r[23]=R8(c->r[31]+0x00000001u); // 803464F8
  c->r[26]=0u+0x00000000u; // 803464FC
  goto L_80346558; // 80346500
L_80346504:;
  c->r[0]=rotl(c->r[23],0)&0x00000001u; cr0(c,c->r[0]); // 80346504
  if (crb(c,2)) { goto L_8034654C; } // 80346508
  c->r[4]=R32(c->r[31]+0x00000024u); // 8034650C
  c->r[0]=R32(c->r[4]+0x00000010u); // 80346510
  cmps(c,0,(int32_t)c->r[0],0); // 80346514
  if (crb(c,2)) { goto L_80346524; } // 80346518
  c->r[28]=c->r[4]+c->r[0]; // 8034651C
  goto L_80346528; // 80346520
L_80346524:;
  c->r[28]=0u+0x00000000u; // 80346524
L_80346528:;
  c->r[27]=R32(c->r[4]+0x00000018u); // 80346528
  c->r[3]=c->r[30]|c->r[30]; // 8034652C
  c->r[29]=R16(c->r[4]+0x0000001Cu); // 80346530
  c->r[4]=c->r[26]|c->r[26]; // 80346534
  c->lr=0x8034653Cu; f_8033E764(c); // 80346538
  c->r[4]=c->r[28]|c->r[28]; // 8034653C
  c->r[5]=c->r[27]|c->r[27]; // 80346540
  c->r[6]=c->r[29]|c->r[29]; // 80346544
  c->lr=0x8034654Cu; f_802B7164(c); // 80346548
L_8034654C:;
  c->r[23]=rotl(c->r[23],31)&0x7FFFFFFFu; // 8034654C
  c->r[31]=c->r[31]+0x00000004u; // 80346550
  c->r[26]=c->r[26]+0x00000001u; // 80346554
L_80346558:;
  cmps(c,0,(int32_t)c->r[23],0); // 80346558
  if (!crb(c,2)) { IRQCHK(c); goto L_80346504; } // 8034655C
  c->r[11]=c->r[1]+0x00000070u; // 80346560
  c->lr=0x80346568u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80346564
  c->r[0]=R32(c->r[1]+0x00000074u); // 80346568
  c->lr=c->r[0]; // 8034656C
  c->r[1]=c->r[1]+0x00000070u; // 80346570
  return; // 80346574
}

// fn_80346578
void f_80346578(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80346578
  c->r[0]=R32(c->r[4]+0x00000000u); // 8034657C
  c->r[3]=c->r[3]+0x00004800u; // 80346580
  cmpu(c,0,c->r[0],c->r[3]); // 80346584
  if (!crb(c,2)) { goto L_80346594; } // 80346588
  c->r[3]=0u+0x00000001u; // 8034658C
  return; // 80346590
L_80346594:;
  c->r[3]=0u+0x803C0000u; // 80346594
  c->r[0]=R32(c->r[4]+0x00000000u); // 80346598
  c->r[3]=c->r[3]+0x000047E8u; // 8034659C
  cmpu(c,0,c->r[0],c->r[3]); // 803465A0
  if (!crb(c,2)) { goto L_803465B0; } // 803465A4
  c->r[3]=0u+0x00000001u; // 803465A8
  return; // 803465AC
L_803465B0:;
  c->r[3]=0u+0x803C0000u; // 803465B0
  c->r[3]=c->r[3]+0x000048D8u; // 803465B4
  cmpu(c,0,c->r[0],c->r[3]); // 803465B8
  if (!crb(c,2)) { goto L_803465C8; } // 803465BC
  c->r[3]=0u+0x00000001u; // 803465C0
  return; // 803465C4
L_803465C8:;
  c->r[3]=0u+0x803C0000u; // 803465C8
  c->r[3]=c->r[3]+0x000048C8u; // 803465CC
  c->r[0]=c->r[3]-c->r[0]; // 803465D0
  c->r[0]=cntlz(c->r[0]); // 803465D4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 803465D8
  return; // 803465DC
}

// fn_803465E0
void f_803465E0(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 803465E0
  c->r[0]=R32(c->r[4]+0x00000000u); // 803465E4
  c->r[3]=c->r[3]+0x000047E8u; // 803465E8
  cmpu(c,0,c->r[0],c->r[3]); // 803465EC
  if (!crb(c,2)) { goto L_803465FC; } // 803465F0
  c->r[3]=0u+0x00000001u; // 803465F4
  return; // 803465F8
L_803465FC:;
  c->r[3]=0u+0x803C0000u; // 803465FC
  c->r[0]=R32(c->r[4]+0x00000000u); // 80346600
  c->r[3]=c->r[3]+0x000048D8u; // 80346604
  cmpu(c,0,c->r[0],c->r[3]); // 80346608
  if (!crb(c,2)) { goto L_80346618; } // 8034660C
  c->r[3]=0u+0x00000001u; // 80346610
  return; // 80346614
L_80346618:;
  c->r[3]=0u+0x803C0000u; // 80346618
  c->r[3]=c->r[3]+0x000048C8u; // 8034661C
  c->r[0]=c->r[3]-c->r[0]; // 80346620
  c->r[0]=cntlz(c->r[0]); // 80346624
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80346628
  return; // 8034662C
}

// fn_80346630
void f_80346630(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80346630
  c->r[0]=c->lr; // 80346634
  W32(c->r[1]+0x00000014u,c->r[0]); // 80346638
  c->r[12]=R32(c->r[3]+0x00000000u); // 8034663C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80346640
  c->ctr=c->r[12]; // 80346644
  if (true) { c->lr=0x8034664Cu; dispatch(c,c->ctr); } // 80346648
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034664C
  c->r[3]=c->r[3]+0x00000004u; // 80346650
  c->lr=c->r[0]; // 80346654
  c->r[1]=c->r[1]+0x00000010u; // 80346658
  return; // 8034665C
}

// fn_80346660
void f_80346660(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80346660
  c->r[3]=c->r[3]+0x00004800u; // 80346664
  return; // 80346668
}

// fn_8034666C
void f_8034666C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034666C
  c->r[0]=c->lr; // 80346670
  cmps(c,0,(int32_t)c->r[3],0); // 80346674
  W32(c->r[1]+0x00000014u,c->r[0]); // 80346678
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034667C
  c->r[31]=c->r[3]|c->r[3]; // 80346680
  if (crb(c,2)) { goto L_80346698; } // 80346684
  if (crb(c,2)) { goto L_80346698; } // 80346688
  if (crb(c,2)) { goto L_80346698; } // 8034668C
  c->r[4]=0u+0x00000000u; // 80346690
  c->lr=0x80346698u; f_8034A528(c); // 80346694
L_80346698:;
  c->r[3]=c->r[31]|c->r[31]; // 80346698
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034669C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803466A0
  c->lr=c->r[0]; // 803466A4
  c->r[1]=c->r[1]+0x00000010u; // 803466A8
  return; // 803466AC
}

// fn_803466B0
void f_803466B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803466B0
  c->r[0]=c->lr; // 803466B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803466B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803466BC
  c->r[12]=R32(c->r[12]+0x00000014u); // 803466C0
  c->ctr=c->r[12]; // 803466C4
  if (true) { c->lr=0x803466CCu; dispatch(c,c->ctr); } // 803466C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803466CC
  c->r[3]=c->r[3]+0x00000004u; // 803466D0
  c->lr=c->r[0]; // 803466D4
  c->r[1]=c->r[1]+0x00000010u; // 803466D8
  return; // 803466DC
}

// fn_803466E0
void f_803466E0(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 803466E0
  c->r[3]=c->r[3]+0x000047E8u; // 803466E4
  return; // 803466E8
}

// fn_803466EC
void f_803466EC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000014u); // 803466EC
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 803466F0
  c->r[0]=R16(c->r[3]+c->r[0]); // 803466F4
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 803466F8
  c->r[0]=cntlz(c->r[0]); // 803466FC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80346700
  return; // 80346704
}

// fn_80346708
void f_80346708(Ctx* __restrict c) {
  c->r[4]=0u+0x00010000u; // 80346708
  c->r[7]=0u+0x00000000u; // 8034670C
  c->r[5]=c->r[4]+0xFFFF8000u; // 80346710
  c->r[6]=0u+0x00000000u; // 80346714
  goto L_8034672C; // 80346718
L_8034671C:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 8034671C
  c->r[7]=c->r[7]+0x00000001u; // 80346720
  W16(c->r[4]+c->r[6],c->r[5]); // 80346724
  c->r[6]=c->r[6]+0x00000002u; // 80346728
L_8034672C:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8034672C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80346730
  if (crb(c,0)) { IRQCHK(c); goto L_8034671C; } // 80346734
  c->r[4]=0u+0x00000004u; // 80346738
  c->r[5]=0u+0x00000000u; // 8034673C
  f_8034A6BC(c); return; // 80346740
}

// fn_80346744
void f_80346744(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80346744
  return; // 80346748
}

// fn_8034674C
void f_8034674C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8034674C
  return; // 80346750
}

// fn_80346754
void f_80346754(Ctx* __restrict c) {
  return; // 80346754
}

// fn_80346758
void f_80346758(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80346758
  c->r[0]=c->lr; // 8034675C
  cmps(c,0,(int32_t)c->r[3],0); // 80346760
  W32(c->r[1]+0x00000014u,c->r[0]); // 80346764
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80346768
  c->r[31]=c->r[3]|c->r[3]; // 8034676C
  if (crb(c,2)) { goto L_80346780; } // 80346770
  if (crb(c,2)) { goto L_80346780; } // 80346774
  c->r[4]=0u+0x00000000u; // 80346778
  c->lr=0x80346780u; f_8034A528(c); // 8034677C
L_80346780:;
  c->r[3]=c->r[31]|c->r[31]; // 80346780
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80346784
  c->r[0]=R32(c->r[1]+0x00000014u); // 80346788
  c->lr=c->r[0]; // 8034678C
  c->r[1]=c->r[1]+0x00000010u; // 80346790
  return; // 80346794
}

// fn_80346798
void f_80346798(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80346798
  c->r[0]=c->lr; // 8034679C
  W32(c->r[1]+0x00000044u,c->r[0]); // 803467A0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 803467A4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 803467A8
  c->r[11]=c->r[1]+0x00000030u; // 803467AC
  c->lr=0x803467B4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803467B0
  c->r[8]=R32(c->r[5]+0x00000000u); // 803467B4
  c->r[29]=c->r[3]|c->r[3]; // 803467B8
  c->r[25]=c->r[4]|c->r[4]; // 803467BC
  c->r[30]=c->r[5]|c->r[5]; // 803467C0
  cmps(c,0,(int32_t)c->r[8],0); // 803467C4
  c->r[27]=c->r[7]|c->r[7]; // 803467C8
  if (crb(c,2)) { goto L_803467DC; } // 803467CC
  c->r[0]=R32(c->r[6]+0x00000000u); // 803467D0
  cmps(c,0,(int32_t)c->r[0],0); // 803467D4
  if (!crb(c,2)) { goto L_803467E4; } // 803467D8
L_803467DC:;
  c->r[3]=0u+0x00000000u; // 803467DC
  goto L_80346968; // 803467E0
L_803467E4:;
  c->r[31]=R16(c->r[8]+0x0000001Eu); // 803467E4
  c->r[3]=c->r[6]|c->r[6]; // 803467E8
  c->lr=0x803467F0u; f_8033CF34(c); // 803467EC
  c->r[0]=0u-c->r[27]; // 803467F0
  c->r[28]=c->r[3]|c->r[3]; // 803467F4
  c->r[4]=c->r[0]|c->r[27]; // 803467F8
  cmps(c,0,(int32_t)c->r[25],0); // 803467FC
  c->r[4]=sraw(c,c->r[4],31); // 80346800
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80346804
  c->r[3]=c->r[31]&c->r[4]; // 80346808
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)232); // 8034680C
  c->r[3]=c->r[26]+c->r[0]; // 80346810
  c->r[4]=c->r[3]+0x00000034u; // 80346814
  if (crb(c,2)) { goto L_80346820; } // 80346818
  W32(c->r[25]+0x00000000u,c->r[4]); // 8034681C
L_80346820:;
  cmps(c,0,(int32_t)c->r[29],0); // 80346820
  if (!crb(c,2)) { goto L_80346830; } // 80346824
  c->r[3]=0u+0x00000000u; // 80346828
  goto L_80346968; // 8034682C
L_80346830:;
  c->r[3]=c->r[29]|c->r[29]; // 80346830
  c->lr=0x80346838u; f_802CF59C(c); // 80346834
  cmps(c,0,(int32_t)c->r[3],0); // 80346838
  c->r[31]=c->r[3]|c->r[3]; // 8034683C
  if (!crb(c,2)) { goto L_8034684C; } // 80346840
  c->r[3]=0u+0x00000000u; // 80346844
  goto L_80346968; // 80346848
L_8034684C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8034684C
  if (crb(c,2)) { goto L_8034685C; } // 80346850
  c->r[27]=c->r[3]+0x00000034u; // 80346854
  goto L_80346860; // 80346858
L_8034685C:;
  c->r[27]=0u+0x00000000u; // 8034685C
L_80346860:;
  cmps(c,0,(int32_t)c->r[3],0); // 80346860
  c->r[4]=c->r[3]+c->r[26]; // 80346864
  c->r[5]=c->r[4]+0x00000034u; // 80346868
  if (crb(c,2)) { goto L_80346964; } // 8034686C
  c->r[0]=0u+0x00000000u; // 80346870
  c->r[4]=0u+0x80540000u; // 80346874
  W32(c->r[3]+0x00000004u,c->r[0]); // 80346878
  c->r[4]=c->r[4]+0x00007BD0u; // 8034687C
  c->r[30]=R32(c->r[30]+0x00000000u); // 80346880
  W32(c->r[3]+0x00000008u,c->r[29]); // 80346884
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80346888
  W32(c->r[3]+0x00000000u,c->r[4]); // 8034688C
  W32(c->r[3]+0x00000010u,c->r[28]); // 80346890
  W32(c->r[3]+0x00000014u,c->r[5]); // 80346894
  c->r[3]=c->r[31]|c->r[31]; // 80346898
  c->r[12]=R32(c->r[31]+0x00000000u); // 8034689C
  c->r[12]=R32(c->r[12]+0x00000034u); // 803468A0
  c->ctr=c->r[12]; // 803468A4
  if (true) { c->lr=0x803468ACu; dispatch(c,c->ctr); } // 803468A8
  c->r[4]=R16(c->r[30]+0x0000001Cu); // 803468AC
  c->r[0]=0u+0x43300000u; // 803468B0
  c->r[5]=R32(c->r[30]+0x00000024u); // 803468B4
  c->r[3]=0u+0x80540000u; // 803468B8
  c->r[4]=c->r[4]^0x80000000u; // 803468BC
  {uint32_t ea=c->r[2]+0xFFFFF000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803468C0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 803468C4
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803468C8
  {uint32_t ea=c->r[2]+0xFFFFF004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803468CC
  c->r[4]=c->r[13]+0xFFFF8000u; // 803468D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 803468D4
  c->r[3]=c->r[3]+0x00007B88u; // 803468D8
  {uint32_t ea=c->r[2]+0xFFFFF008u; c->f[3]=RF64(ea);} // 803468DC
  cmps(c,0,(int32_t)c->r[27],0); // 803468E0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 803468E4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 803468E8
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 803468EC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 803468F0
  c->r[0]=R32(c->r[4]+c->r[5]); // 803468F4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 803468F8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 803468FC
  W32(c->r[31]+0x00000028u,c->r[0]); // 80346900
  W32(c->r[31]+0x00000000u,c->r[3]); // 80346904
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 80346908
  W32(c->r[31]+0x00000030u,c->r[27]); // 8034690C
  if (crb(c,2)) { goto L_80346964; } // 80346910
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 80346914
  c->r[28]=0u+0x00000000u; // 80346918
  c->r[27]=0u+0x00000000u; // 8034691C
  goto L_80346958; // 80346920
L_80346924:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80346924
  c->r[3]=R16(c->r[3]+c->r[27]); // 80346928
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8034692C
  if (!crb(c,2)) { goto L_80346950; } // 80346930
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 80346934
  c->f[1]=c->f[31]; // 80346938
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 8034693C
  c->r[4]=R32(c->r[31]+0x00000030u); // 80346940
  c->r[3]=c->r[31]+0x0000002Cu; // 80346944
  c->r[4]=c->r[4]+c->r[0]; // 80346948
  c->lr=0x80346950u; f_803410B0(c); // 8034694C
L_80346950:;
  c->r[27]=c->r[27]+0x00000002u; // 80346950
  c->r[28]=c->r[28]+0x00000001u; // 80346954
L_80346958:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 80346958
  cmpu(c,0,c->r[28],c->r[0]); // 8034695C
  if (crb(c,0)) { IRQCHK(c); goto L_80346924; } // 80346960
L_80346964:;
  c->r[3]=c->r[31]|c->r[31]; // 80346964
L_80346968:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80346968
  c->r[11]=c->r[1]+0x00000030u; // 8034696C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80346970
  c->lr=0x80346978u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80346974
  c->r[0]=R32(c->r[1]+0x00000044u); // 80346978
  c->lr=c->r[0]; // 8034697C
  c->r[1]=c->r[1]+0x00000040u; // 80346980
  return; // 80346984
}

// fn_80346988
void f_80346988(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80346988
  c->r[0]=c->lr; // 8034698C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80346990
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80346994
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80346998
  c->f[3]=c->f[1]; // 8034699C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803469A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803469A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803469A8
  c->r[29]=c->r[3]|c->r[3]; // 803469AC
  c->r[12]=R32(c->r[3]+0x00000028u); // 803469B0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 803469B4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 803469B8
  c->ctr=c->r[12]; // 803469BC
  if (true) { c->lr=0x803469C4u; dispatch(c,c->ctr); } // 803469C0
  c->r[0]=R32(c->r[29]+0x00000030u); // 803469C4
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 803469C8
  cmps(c,0,(int32_t)c->r[0],0); // 803469CC
  if (crb(c,2)) { goto L_80346A24; } // 803469D0
  c->f[31]=c->ps1[31]=S(c->f[1]); // 803469D4
  c->r[31]=0u+0x00000000u; // 803469D8
  c->r[30]=0u+0x00000000u; // 803469DC
  goto L_80346A18; // 803469E0
L_803469E4:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 803469E4
  c->r[3]=R16(c->r[3]+c->r[30]); // 803469E8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 803469EC
  if (!crb(c,2)) { goto L_80346A10; } // 803469F0
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 803469F4
  c->f[1]=c->f[31]; // 803469F8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 803469FC
  c->r[4]=R32(c->r[29]+0x00000030u); // 80346A00
  c->r[3]=c->r[29]+0x0000002Cu; // 80346A04
  c->r[4]=c->r[4]+c->r[0]; // 80346A08
  c->lr=0x80346A10u; f_803410B0(c); // 80346A0C
L_80346A10:;
  c->r[30]=c->r[30]+0x00000002u; // 80346A10
  c->r[31]=c->r[31]+0x00000001u; // 80346A14
L_80346A18:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80346A18
  cmpu(c,0,c->r[31],c->r[0]); // 80346A1C
  if (crb(c,0)) { IRQCHK(c); goto L_803469E4; } // 80346A20
L_80346A24:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80346A24
  c->r[0]=R32(c->r[1]+0x00000034u); // 80346A28
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80346A2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80346A30
  c->r[30]=R32(c->r[1]+0x00000018u); // 80346A34
  c->r[29]=R32(c->r[1]+0x00000014u); // 80346A38
  c->lr=c->r[0]; // 80346A3C
  c->r[1]=c->r[1]+0x00000030u; // 80346A40
  return; // 80346A44
}

// fn_80346A48
void f_80346A48(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80346A48
  return; // 80346A4C
}

// fn_80346A50
void f_80346A50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80346A50
  c->r[0]=c->lr; // 80346A54
  W32(c->r[1]+0x00000034u,c->r[0]); // 80346A58
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80346A5C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80346A60
  {uint32_t ea=c->r[2]+0xFFFFF000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80346A64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80346A68
  fcmp(c,0,c->f[0],c->f[1]); // 80346A6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80346A70
  W32(c->r[1]+0x00000014u,c->r[29]); // 80346A74
  c->r[29]=c->r[3]|c->r[3]; // 80346A78
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 80346A7C
  if (!crb(c,2)) { goto L_80346AE0; } // 80346A80
  c->r[0]=R32(c->r[3]+0x00000030u); // 80346A84
  cmps(c,0,(int32_t)c->r[0],0); // 80346A88
  if (crb(c,2)) { goto L_80346AE0; } // 80346A8C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 80346A90
  c->r[31]=0u+0x00000000u; // 80346A94
  c->r[30]=0u+0x00000000u; // 80346A98
  goto L_80346AD4; // 80346A9C
L_80346AA0:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80346AA0
  c->r[3]=R16(c->r[3]+c->r[30]); // 80346AA4
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 80346AA8
  if (!crb(c,2)) { goto L_80346ACC; } // 80346AAC
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 80346AB0
  c->f[1]=c->f[31]; // 80346AB4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 80346AB8
  c->r[4]=R32(c->r[29]+0x00000030u); // 80346ABC
  c->r[3]=c->r[29]+0x0000002Cu; // 80346AC0
  c->r[4]=c->r[4]+c->r[0]; // 80346AC4
  c->lr=0x80346ACCu; f_803410B0(c); // 80346AC8
L_80346ACC:;
  c->r[30]=c->r[30]+0x00000002u; // 80346ACC
  c->r[31]=c->r[31]+0x00000001u; // 80346AD0
L_80346AD4:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80346AD4
  cmpu(c,0,c->r[31],c->r[0]); // 80346AD8
  if (crb(c,0)) { IRQCHK(c); goto L_80346AA0; } // 80346ADC
L_80346AE0:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80346AE0
  c->r[0]=R32(c->r[1]+0x00000034u); // 80346AE4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80346AE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80346AEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80346AF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80346AF4
  c->lr=c->r[0]; // 80346AF8
  c->r[1]=c->r[1]+0x00000030u; // 80346AFC
  return; // 80346B00
}

// fn_80346B04
void f_80346B04(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80346B04
  return; // 80346B08
}

// fn_80346B0C
void f_80346B0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80346B0C
  c->r[0]=c->lr; // 80346B10
  W32(c->r[1]+0x00000034u,c->r[0]); // 80346B14
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80346B18
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80346B1C
  {uint32_t ea=c->r[2]+0xFFFFF000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80346B20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80346B24
  W32(c->r[1]+0x00000018u,c->r[30]); // 80346B28
  W32(c->r[1]+0x00000014u,c->r[29]); // 80346B2C
  c->r[29]=c->r[3]|c->r[3]; // 80346B30
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80346B34
  fcmp(c,0,c->f[0],c->f[1]); // 80346B38
  if (crb(c,2)) { goto L_80346BC8; } // 80346B3C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80346B40
  {uint32_t ea=c->r[13]+0xFFFFAA00u; c->f[1]=c->ps1[1]=RF32(ea);} // 80346B44
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80346B48
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 80346B4C
  c->r[12]=R32(c->r[3]+0x00000028u); // 80346B50
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80346B54
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80346B58
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 80346B5C
  c->ctr=c->r[12]; // 80346B60
  if (true) { c->lr=0x80346B68u; dispatch(c,c->ctr); } // 80346B64
  c->r[0]=R32(c->r[29]+0x00000030u); // 80346B68
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 80346B6C
  cmps(c,0,(int32_t)c->r[0],0); // 80346B70
  if (crb(c,2)) { goto L_80346BC8; } // 80346B74
  c->f[31]=c->ps1[31]=S(c->f[1]); // 80346B78
  c->r[31]=0u+0x00000000u; // 80346B7C
  c->r[30]=0u+0x00000000u; // 80346B80
  goto L_80346BBC; // 80346B84
L_80346B88:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80346B88
  c->r[3]=R16(c->r[3]+c->r[30]); // 80346B8C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 80346B90
  if (!crb(c,2)) { goto L_80346BB4; } // 80346B94
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 80346B98
  c->f[1]=c->f[31]; // 80346B9C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 80346BA0
  c->r[4]=R32(c->r[29]+0x00000030u); // 80346BA4
  c->r[3]=c->r[29]+0x0000002Cu; // 80346BA8
  c->r[4]=c->r[4]+c->r[0]; // 80346BAC
  c->lr=0x80346BB4u; f_803410B0(c); // 80346BB0
L_80346BB4:;
  c->r[30]=c->r[30]+0x00000002u; // 80346BB4
  c->r[31]=c->r[31]+0x00000001u; // 80346BB8
L_80346BBC:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80346BBC
  cmpu(c,0,c->r[31],c->r[0]); // 80346BC0
  if (crb(c,0)) { IRQCHK(c); goto L_80346B88; } // 80346BC4
L_80346BC8:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80346BC8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80346BCC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80346BD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80346BD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80346BD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80346BDC
  c->lr=c->r[0]; // 80346BE0
  c->r[1]=c->r[1]+0x00000030u; // 80346BE4
  return; // 80346BE8
}

// fn_80346BEC
void f_80346BEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80346BEC
  c->r[0]=c->lr; // 80346BF0
  W32(c->r[1]+0x00000034u,c->r[0]); // 80346BF4
  c->r[11]=c->r[1]+0x00000030u; // 80346BF8
  c->lr=0x80346C00u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80346BFC
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 80346C00
  c->r[27]=c->r[3]|c->r[3]; // 80346C04
  c->r[28]=c->r[4]|c->r[4]; // 80346C08
  c->r[30]=0u+0x00000000u; // 80346C0C
  c->r[31]=R16(c->r[5]+0x0000001Eu); // 80346C10
  c->r[29]=0u+0x00000000u; // 80346C14
  cmps(c,0,(int32_t)c->r[31],0); // 80346C18
  if (!crb(c,1)) { goto L_80346CB8; } // 80346C1C
  goto L_80346CAC; // 80346C20
L_80346C24:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 80346C24
  c->r[0]=R32(c->r[3]+0x00000010u); // 80346C28
  cmps(c,0,(int32_t)c->r[0],0); // 80346C2C
  if (crb(c,2)) { goto L_80346C3C; } // 80346C30
  c->r[0]=c->r[3]+c->r[0]; // 80346C34
  goto L_80346C40; // 80346C38
L_80346C3C:;
  c->r[0]=0u+0x00000000u; // 80346C3C
L_80346C40:;
  cmps(c,0,(int32_t)c->r[0],0); // 80346C40
  if (crb(c,2)) { goto L_80346C6C; } // 80346C44
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 80346C48
  c->r[3]=c->r[0]+c->r[3]; // 80346C4C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80346C50
  cmps(c,0,(int32_t)c->r[3],0); // 80346C54
  if (crb(c,2)) { goto L_80346C64; } // 80346C58
  c->r[5]=c->r[0]+c->r[3]; // 80346C5C
  goto L_80346C70; // 80346C60
L_80346C64:;
  c->r[5]=0u+0x00000000u; // 80346C64
  goto L_80346C70; // 80346C68
L_80346C6C:;
  c->r[5]=0u+0x00000000u; // 80346C6C
L_80346C70:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80346C70
  c->r[3]=c->r[28]|c->r[28]; // 80346C74
  c->r[4]=c->r[1]+0x00000008u; // 80346C78
  c->r[5]=c->r[0]+c->r[5]; // 80346C7C
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 80346C80
  W32(c->r[1]+0x00000008u,c->r[0]); // 80346C84
  c->lr=0x80346C8Cu; f_8033CE3C(c); // 80346C88
  cmps(c,0,(int32_t)c->r[3],0); // 80346C8C
  if (crb(c,2)) { goto L_80346CA8; } // 80346C90
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80346C94
  c->r[30]=0u+0x00000001u; // 80346C98
  c->r[3]=R32(c->r[27]+0x00000014u); // 80346C9C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80346CA0
  W16(c->r[3]+c->r[0],c->r[29]); // 80346CA4
L_80346CA8:;
  c->r[29]=c->r[29]+0x00000001u; // 80346CA8
L_80346CAC:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 80346CAC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 80346CB0
  if (crb(c,0)) { IRQCHK(c); goto L_80346C24; } // 80346CB4
L_80346CB8:;
  c->r[3]=c->r[27]|c->r[27]; // 80346CB8
  c->r[4]=0u+0x00000004u; // 80346CBC
  c->r[5]=0u+0x00000001u; // 80346CC0
  c->lr=0x80346CC8u; f_8034A6BC(c); // 80346CC4
  c->r[11]=c->r[1]+0x00000030u; // 80346CC8
  c->r[3]=c->r[30]|c->r[30]; // 80346CCC
  c->lr=0x80346CD4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80346CD0
  c->r[0]=R32(c->r[1]+0x00000034u); // 80346CD4
  c->lr=c->r[0]; // 80346CD8
  c->r[1]=c->r[1]+0x00000030u; // 80346CDC
  return; // 80346CE0
}

// fn_80346CE4
void f_80346CE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80346CE4
  c->r[0]=c->lr; // 80346CE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80346CEC
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 80346CF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80346CF4
  c->r[31]=c->r[4]|c->r[4]; // 80346CF8
  c->r[6]=R32(c->r[3]+0x00000014u); // 80346CFC
  c->r[5]=R16(c->r[6]+c->r[0]); // 80346D00
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 80346D04
  if (crb(c,2)) { goto L_80346D1C; } // 80346D08
  c->r[0]=0u+0x00000000u; // 80346D0C
  c->r[3]=c->r[31]|c->r[31]; // 80346D10
  W32(c->r[4]+0x00000000u,c->r[0]); // 80346D14
  goto L_80346D44; // 80346D18
L_80346D1C:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 80346D1C
  cmps(c,0,(int32_t)c->r[6],0); // 80346D20
  if (crb(c,2)) { goto L_80346D34; } // 80346D24
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 80346D28
  c->r[3]=c->r[6]+c->r[0]; // 80346D2C
  goto L_80346D44; // 80346D30
L_80346D34:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80346D34
  c->r[3]=c->r[3]+0x0000002Cu; // 80346D38
  c->lr=0x80346D40u; f_803410B0(c); // 80346D3C
  c->r[3]=c->r[31]|c->r[31]; // 80346D40
L_80346D44:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80346D44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80346D48
  c->lr=c->r[0]; // 80346D4C
  c->r[1]=c->r[1]+0x00000010u; // 80346D50
  return; // 80346D54
}

// fn_80346D58
void f_80346D58(Ctx* __restrict c) {
  c->r[5]=0u+0x00010000u; // 80346D58
  c->r[0]=c->r[5]+0x00000002u; // 80346D5C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80346D60
  if (crb(c,2)) { goto L_80346DA4; } // 80346D64
  if (!crb(c,0)) { goto L_80346D78; } // 80346D68
  cmps(c,0,(int32_t)c->r[4],8); // 80346D6C
  if (crb(c,2)) { goto L_80346D88; } // 80346D70
  return; // 80346D74
L_80346D78:;
  c->r[0]=c->r[5]+0x00000004u; // 80346D78
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80346D7C
  if (!crb(c,0)) return; // 80346D80
  goto L_80346D98; // 80346D84
L_80346D88:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80346D88
  c->r[12]=R32(c->r[12]+0x00000024u); // 80346D8C
  c->ctr=c->r[12]; // 80346D90
  if (true) { dispatch(c,c->ctr); return; } // 80346D94
L_80346D98:;
  c->r[0]=0u+0x00000000u; // 80346D98
  W32(c->r[3]+0x00000004u,c->r[0]); // 80346D9C
  return; // 80346DA0
L_80346DA4:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 80346DA4
  return; // 80346DA8
}

// fn_80346DAC
void f_80346DAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80346DAC
  c->r[0]=c->lr; // 80346DB0
  W32(c->r[1]+0x00000074u,c->r[0]); // 80346DB4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80346DB8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 80346DBC
  c->r[11]=c->r[1]+0x00000060u; // 80346DC0
  c->lr=0x80346DC8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80346DC4
  c->r[6]=R32(c->r[3]+0x00000000u); // 80346DC8
  c->r[31]=c->r[4]|c->r[4]; // 80346DCC
  c->r[7]=R32(c->r[5]+0x00000000u); // 80346DD0
  c->r[8]=c->r[5]|c->r[5]; // 80346DD4
  c->r[9]=c->r[6]|c->r[6]; // 80346DD8
  c->r[4]=0u+0x0000000Fu; // 80346DDC
  goto L_80346E44; // 80346DE0
L_80346DE4:;
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 80346DE4
  if (crb(c,2)) { goto L_80346E34; } // 80346DE8
  c->r[3]=R32(c->r[5]+0x00000008u); // 80346DEC
  c->r[0]=R32(c->r[5]+0x00000000u); // 80346DF0
  W32(c->r[6]+0x00000004u,c->r[3]); // 80346DF4
  {uint32_t ea=c->r[8]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80346DF8
  c->r[0]=c->r[0]&c->r[4]; // 80346DFC
  {uint32_t ea=c->r[8]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80346E00
  {uint32_t ea=c->r[9]+0x00000008u; WF32(ea,c->f[0]);} // 80346E04
  {uint32_t ea=c->r[8]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80346E08
  {uint32_t ea=c->r[9]+0x0000000Cu; WF32(ea,c->f[1]);} // 80346E0C
  {uint32_t ea=c->r[8]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80346E10
  {uint32_t ea=c->r[9]+0x00000010u; WF32(ea,c->f[0]);} // 80346E14
  {uint32_t ea=c->r[8]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80346E18
  {uint32_t ea=c->r[9]+0x00000014u; WF32(ea,c->f[1]);} // 80346E1C
  {uint32_t ea=c->r[9]+0x00000018u; WF32(ea,c->f[0]);} // 80346E20
  c->r[3]=R32(c->r[6]+0x00000000u); // 80346E24
  c->r[3]=c->r[3]&~c->r[4]; // 80346E28
  c->r[0]=c->r[3]|c->r[0]; // 80346E2C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80346E30
L_80346E34:;
  c->r[7]=rotl(c->r[7],28)&0x0FFFFFFFu; // 80346E34
  c->r[4]=rotl(c->r[4],4)&0xFFFFFFF0u; // 80346E38
  c->r[8]=c->r[8]+0x00000014u; // 80346E3C
  c->r[9]=c->r[9]+0x00000014u; // 80346E40
L_80346E44:;
  cmps(c,0,(int32_t)c->r[7],0); // 80346E44
  if (!crb(c,2)) { IRQCHK(c); goto L_80346DE4; } // 80346E48
  c->r[29]=R32(c->r[5]+0x00000004u); // 80346E4C
  c->r[30]=c->r[5]+0x000000ACu; // 80346E50
  {uint32_t ea=c->r[2]+0xFFFFF010u; c->f[31]=c->ps1[31]=RF32(ea);} // 80346E54
  c->r[28]=0u+0x00000008u; // 80346E58
  goto L_80346F98; // 80346E5C
L_80346E60:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 80346E60
  if (crb(c,2)) { goto L_80346F8C; } // 80346E64
  c->r[5]=c->r[30]|c->r[30]; // 80346E68
  c->r[3]=c->r[1]+0x00000010u; // 80346E6C
  c->r[6]=rotl(c->r[29],0)&0x0000000Fu; // 80346E70
  c->r[4]=0u+0x00000001u; // 80346E74
  c->lr=0x80346E7Cu; f_803512D8(c); // 80346E78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80346E7C
  c->f[1]=std::fabs(c->f[0]); // 80346E80
  fcmp(c,0,c->f[31],c->f[1]); // 80346E84
  if (!crb(c,0)) { goto L_80346E90; } // 80346E88
  goto L_80346E94; // 80346E8C
L_80346E90:;
  c->f[1]=c->f[31]; // 80346E90
L_80346E94:;
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80346E94
  c->f[2]=std::fabs(c->f[0]); // 80346E98
  fcmp(c,0,c->f[1],c->f[2]); // 80346E9C
  if (!crb(c,0)) { goto L_80346EA8; } // 80346EA0
  goto L_80346EAC; // 80346EA4
L_80346EA8:;
  c->f[2]=c->f[1]; // 80346EA8
L_80346EAC:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80346EAC
  c->f[1]=std::fabs(c->f[0]); // 80346EB0
  fcmp(c,0,c->f[2],c->f[1]); // 80346EB4
  if (!crb(c,0)) { goto L_80346EC0; } // 80346EB8
  goto L_80346EC4; // 80346EBC
L_80346EC0:;
  c->f[1]=c->f[2]; // 80346EC0
L_80346EC4:;
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80346EC4
  c->f[2]=std::fabs(c->f[0]); // 80346EC8
  fcmp(c,0,c->f[1],c->f[2]); // 80346ECC
  if (!crb(c,0)) { goto L_80346ED8; } // 80346ED0
  goto L_80346EDC; // 80346ED4
L_80346ED8:;
  c->f[2]=c->f[1]; // 80346ED8
L_80346EDC:;
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80346EDC
  c->f[1]=std::fabs(c->f[0]); // 80346EE0
  fcmp(c,0,c->f[2],c->f[1]); // 80346EE4
  if (!crb(c,0)) { goto L_80346EF0; } // 80346EE8
  goto L_80346EF4; // 80346EEC
L_80346EF0:;
  c->f[1]=c->f[2]; // 80346EF0
L_80346EF4:;
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80346EF4
  c->f[0]=std::fabs(c->f[0]); // 80346EF8
  fcmp(c,0,c->f[1],c->f[0]); // 80346EFC
  if (!crb(c,0)) { goto L_80346F08; } // 80346F00
  goto L_80346F0C; // 80346F04
L_80346F08:;
  c->f[0]=c->f[1]; // 80346F08
L_80346F0C:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80346F0C
  {uint32_t ea=c->r[2]+0xFFFFF018u; c->f[1]=RF64(ea);} // 80346F10
  c->r[0]=R32(c->r[1]+0x00000008u); // 80346F14
  c->r[3]=rotl(c->r[0],9)&0x000000FFu; // 80346F18
  c->r[0]=c->r[3]+0xFFFFFF82u; // 80346F1C
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80346F20
  c->r[3]=0u-c->r[27]; // 80346F24
  c->lr=0x80346F2Cu; f_802C4DFC(c); // 80346F28
  c->f[6]=c->ps1[6]=S(c->f[1]); // 80346F2C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80346F30
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80346F34
  c->r[3]=c->r[31]|c->r[31]; // 80346F38
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80346F3C
  c->r[6]=c->r[27]|c->r[27]; // 80346F40
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[6]); // 80346F44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80346F48
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[6]); // 80346F4C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80346F50
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80346F54
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[6]); // 80346F58
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[6]); // 80346F5C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[5]);} // 80346F60
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 80346F64
  c->r[4]=c->r[28]+0xFFFFFFF9u; // 80346F68
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[6]); // 80346F6C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 80346F70
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 80346F74
  c->r[5]=c->r[1]+0x00000010u; // 80346F78
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 80346F7C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80346F80
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80346F84
  c->lr=0x80346F8Cu; f_8033F2F0(c); // 80346F88
L_80346F8C:;
  c->r[29]=rotl(c->r[29],28)&0x0FFFFFFFu; // 80346F8C
  c->r[30]=c->r[30]+0x00000014u; // 80346F90
  c->r[28]=c->r[28]+0x00000001u; // 80346F94
L_80346F98:;
  cmps(c,0,(int32_t)c->r[29],0); // 80346F98
  if (!crb(c,2)) { IRQCHK(c); goto L_80346E60; } // 80346F9C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80346FA0
  c->r[11]=c->r[1]+0x00000060u; // 80346FA4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 80346FA8
  c->lr=0x80346FB0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80346FAC
  c->r[0]=R32(c->r[1]+0x00000074u); // 80346FB0
  c->lr=c->r[0]; // 80346FB4
  c->r[1]=c->r[1]+0x00000070u; // 80346FB8
  return; // 80346FBC
}

// fn_80346FC0
void f_80346FC0(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80346FC0
  c->r[0]=R32(c->r[4]+0x00000000u); // 80346FC4
  c->r[3]=c->r[3]+0x00004830u; // 80346FC8
  cmpu(c,0,c->r[0],c->r[3]); // 80346FCC
  if (!crb(c,2)) { goto L_80346FDC; } // 80346FD0
  c->r[3]=0u+0x00000001u; // 80346FD4
  return; // 80346FD8
L_80346FDC:;
  c->r[3]=0u+0x803C0000u; // 80346FDC
  c->r[0]=R32(c->r[4]+0x00000000u); // 80346FE0
  c->r[3]=c->r[3]+0x00004818u; // 80346FE4
  cmpu(c,0,c->r[0],c->r[3]); // 80346FE8
  if (!crb(c,2)) { goto L_80346FF8; } // 80346FEC
  c->r[3]=0u+0x00000001u; // 80346FF0
  return; // 80346FF4
L_80346FF8:;
  c->r[3]=0u+0x803C0000u; // 80346FF8
  c->r[3]=c->r[3]+0x000048D8u; // 80346FFC
  cmpu(c,0,c->r[0],c->r[3]); // 80347000
  if (!crb(c,2)) { goto L_80347010; } // 80347004
  c->r[3]=0u+0x00000001u; // 80347008
  return; // 8034700C
L_80347010:;
  c->r[3]=0u+0x803C0000u; // 80347010
  c->r[3]=c->r[3]+0x000048C8u; // 80347014
  c->r[0]=c->r[3]-c->r[0]; // 80347018
  c->r[0]=cntlz(c->r[0]); // 8034701C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80347020
  return; // 80347024
}

// fn_80347028
void f_80347028(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80347028
  c->r[0]=R32(c->r[4]+0x00000000u); // 8034702C
  c->r[3]=c->r[3]+0x00004818u; // 80347030
  cmpu(c,0,c->r[0],c->r[3]); // 80347034
  if (!crb(c,2)) { goto L_80347044; } // 80347038
  c->r[3]=0u+0x00000001u; // 8034703C
  return; // 80347040
L_80347044:;
  c->r[3]=0u+0x803C0000u; // 80347044
  c->r[0]=R32(c->r[4]+0x00000000u); // 80347048
  c->r[3]=c->r[3]+0x000048D8u; // 8034704C
  cmpu(c,0,c->r[0],c->r[3]); // 80347050
  if (!crb(c,2)) { goto L_80347060; } // 80347054
  c->r[3]=0u+0x00000001u; // 80347058
  return; // 8034705C
L_80347060:;
  c->r[3]=0u+0x803C0000u; // 80347060
  c->r[3]=c->r[3]+0x000048C8u; // 80347064
  c->r[0]=c->r[3]-c->r[0]; // 80347068
  c->r[0]=cntlz(c->r[0]); // 8034706C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80347070
  return; // 80347074
}

// fn_80347078
void f_80347078(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80347078
  c->r[0]=c->lr; // 8034707C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80347080
  c->r[12]=R32(c->r[3]+0x00000000u); // 80347084
  c->r[12]=R32(c->r[12]+0x00000014u); // 80347088
  c->ctr=c->r[12]; // 8034708C
  if (true) { c->lr=0x80347094u; dispatch(c,c->ctr); } // 80347090
  c->r[0]=R32(c->r[1]+0x00000014u); // 80347094
  c->r[3]=c->r[3]+0x00000004u; // 80347098
  c->lr=c->r[0]; // 8034709C
  c->r[1]=c->r[1]+0x00000010u; // 803470A0
  return; // 803470A4
}

// fn_803470A8
void f_803470A8(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 803470A8
  c->r[3]=c->r[3]+0x00004830u; // 803470AC
  return; // 803470B0
}

// fn_803470B4
void f_803470B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803470B4
  c->r[0]=c->lr; // 803470B8
  cmps(c,0,(int32_t)c->r[3],0); // 803470BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803470C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803470C4
  c->r[31]=c->r[3]|c->r[3]; // 803470C8
  if (crb(c,2)) { goto L_803470E0; } // 803470CC
  if (crb(c,2)) { goto L_803470E0; } // 803470D0
  if (crb(c,2)) { goto L_803470E0; } // 803470D4
  c->r[4]=0u+0x00000000u; // 803470D8
  c->lr=0x803470E0u; f_8034A528(c); // 803470DC
L_803470E0:;
  c->r[3]=c->r[31]|c->r[31]; // 803470E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803470E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803470E8
  c->lr=c->r[0]; // 803470EC
  c->r[1]=c->r[1]+0x00000010u; // 803470F0
  return; // 803470F4
}

// fn_803470F8
void f_803470F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803470F8
  c->r[0]=c->lr; // 803470FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80347100
  c->r[12]=R32(c->r[3]+0x00000000u); // 80347104
  c->r[12]=R32(c->r[12]+0x00000014u); // 80347108
  c->ctr=c->r[12]; // 8034710C
  if (true) { c->lr=0x80347114u; dispatch(c,c->ctr); } // 80347110
  c->r[0]=R32(c->r[1]+0x00000014u); // 80347114
  c->r[3]=c->r[3]+0x00000004u; // 80347118
  c->lr=c->r[0]; // 8034711C
  c->r[1]=c->r[1]+0x00000010u; // 80347120
  return; // 80347124
}

// fn_80347128
void f_80347128(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80347128
  c->r[3]=c->r[3]+0x00004818u; // 8034712C
  return; // 80347130
}

// fn_80347134
void f_80347134(Ctx* __restrict c) {
  c->r[4]=0u+0x00010000u; // 80347134
  c->r[7]=0u+0x00000000u; // 80347138
  c->r[5]=c->r[4]+0xFFFF8000u; // 8034713C
  c->r[6]=0u+0x00000000u; // 80347140
  goto L_80347158; // 80347144
L_80347148:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 80347148
  c->r[7]=c->r[7]+0x00000001u; // 8034714C
  W16(c->r[4]+c->r[6],c->r[5]); // 80347150
  c->r[6]=c->r[6]+0x00000002u; // 80347154
L_80347158:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80347158
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8034715C
  if (crb(c,0)) { IRQCHK(c); goto L_80347148; } // 80347160
  c->r[4]=0u+0x00000004u; // 80347164
  c->r[5]=0u+0x00000000u; // 80347168
  f_8034A6BC(c); return; // 8034716C
}

// fn_80347170
void f_80347170(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80347170
  return; // 80347174
}

// fn_80347178
void f_80347178(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80347178
  return; // 8034717C
}

// fn_80347180
void f_80347180(Ctx* __restrict c) {
  return; // 80347180
}

// fn_80347184
void f_80347184(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFF020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80347184
  return; // 80347188
}

// fn_8034718C
void f_8034718C(Ctx* __restrict c) {
  return; // 8034718C
}

// fn_80347190
void f_80347190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80347190
  c->r[0]=c->lr; // 80347194
  cmps(c,0,(int32_t)c->r[3],0); // 80347198
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034719C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803471A0
  c->r[31]=c->r[3]|c->r[3]; // 803471A4
  if (crb(c,2)) { goto L_803471B8; } // 803471A8
  if (crb(c,2)) { goto L_803471B8; } // 803471AC
  c->r[4]=0u+0x00000000u; // 803471B0
  c->lr=0x803471B8u; f_8034A528(c); // 803471B4
L_803471B8:;
  c->r[3]=c->r[31]|c->r[31]; // 803471B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803471BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803471C0
  c->lr=c->r[0]; // 803471C4
  c->r[1]=c->r[1]+0x00000010u; // 803471C8
  return; // 803471CC
}

// __dt__Q34nw4r3g3d13AnmObjChrNodeFv
void f_803471D0(Ctx* __restrict c) {
  trace_call(0x803471D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803471D0
  c->r[0]=c->lr; // 803471D4
  cmps(c,0,(int32_t)c->r[3],0); // 803471D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803471DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803471E0
  c->r[31]=c->r[3]|c->r[3]; // 803471E4
  if (crb(c,2)) { goto L_8034721C; } // 803471E8
  c->r[12]=0u+0x80540000u; // 803471EC
  c->r[12]=c->r[12]+0x00007CC8u; // 803471F0
  W32(c->r[3]+0x00000000u,c->r[12]); // 803471F4
  c->r[12]=R32(c->r[12]+0x00000044u); // 803471F8
  c->ctr=c->r[12]; // 803471FC
  if (true) { c->lr=0x80347204u; dispatch(c,c->ctr); } // 80347200
  cmps(c,0,(int32_t)c->r[31],0); // 80347204
  if (crb(c,2)) { goto L_8034721C; } // 80347208
  if (crb(c,2)) { goto L_8034721C; } // 8034720C
  c->r[3]=c->r[31]|c->r[31]; // 80347210
  c->r[4]=0u+0x00000000u; // 80347214
  c->lr=0x8034721Cu; f_8034A528(c); // 80347218
L_8034721C:;
  c->r[3]=c->r[31]|c->r[31]; // 8034721C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80347220
  c->r[0]=R32(c->r[1]+0x00000014u); // 80347224
  c->lr=c->r[0]; // 80347228
  c->r[1]=c->r[1]+0x00000010u; // 8034722C
  return; // 80347230
}

// Attach__Q34nw4r3g3d13AnmObjChrNodeFiPQ34nw4r3g3d12AnmObjChrRes
void f_80347234(Ctx* __restrict c) {
  trace_call(0x80347234u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80347234
  c->r[0]=c->lr; // 80347238
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034723C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80347240
  W32(c->r[1]+0x00000018u,c->r[30]); // 80347244
  c->r[30]=c->r[5]|c->r[5]; // 80347248
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034724C
  c->r[29]=c->r[4]|c->r[4]; // 80347250
  W32(c->r[1]+0x00000010u,c->r[28]); // 80347254
  c->r[28]=c->r[3]|c->r[3]; // 80347258
  c->r[12]=R32(c->r[3]+0x00000000u); // 8034725C
  c->r[12]=R32(c->r[12]+0x00000040u); // 80347260
  c->ctr=c->r[12]; // 80347264
  if (true) { c->lr=0x8034726Cu; dispatch(c,c->ctr); } // 80347268
  c->r[31]=c->r[3]|c->r[3]; // 8034726C
  c->r[6]=0u+0x00000000u; // 80347270
  c->r[7]=0u+0x00000000u; // 80347274
  c->r[5]=0u+0x00000000u; // 80347278
  c->r[4]=0u+0x00000000u; // 8034727C
  goto L_803472A8; // 80347280
L_80347284:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 80347284
  c->r[0]=R16(c->r[3]+c->r[5]); // 80347288
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 8034728C
  if (!crb(c,2)) { goto L_803472A0; } // 80347290
  c->r[3]=R32(c->r[28]+0x00000014u); // 80347294
  c->r[6]=0u+0x00000001u; // 80347298
  W16(c->r[3]+c->r[5],c->r[4]); // 8034729C
L_803472A0:;
  c->r[5]=c->r[5]+0x00000002u; // 803472A0
  c->r[7]=c->r[7]+0x00000001u; // 803472A4
L_803472A8:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 803472A8
  cmpu(c,0,c->r[7],c->r[0]); // 803472AC
  if (crb(c,0)) { IRQCHK(c); goto L_80347284; } // 803472B0
  cmps(c,0,(int32_t)c->r[6],0); // 803472B4
  if (crb(c,2)) { goto L_803472CC; } // 803472B8
  c->r[3]=c->r[28]|c->r[28]; // 803472BC
  c->r[4]=0u+0x00000004u; // 803472C0
  c->r[5]=0u+0x00000001u; // 803472C4
  c->lr=0x803472CCu; f_8034A6BC(c); // 803472C8
L_803472CC:;
  c->r[5]=R32(c->r[28]+0x0000001Cu); // 803472CC
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 803472D0
  c->r[4]=0u+0x00010000u; // 803472D4
  c->r[3]=c->r[30]|c->r[30]; // 803472D8
  W32(c->r[5]+c->r[0],c->r[30]); // 803472DC
  c->r[6]=c->r[28]|c->r[28]; // 803472E0
  c->r[4]=c->r[4]+0x00000002u; // 803472E4
  c->r[5]=0u+0x00000000u; // 803472E8
  c->r[12]=R32(c->r[30]+0x00000000u); // 803472EC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803472F0
  c->ctr=c->r[12]; // 803472F4
  if (true) { c->lr=0x803472FCu; dispatch(c,c->ctr); } // 803472F8
  c->r[3]=c->r[31]|c->r[31]; // 803472FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80347300
  c->r[30]=R32(c->r[1]+0x00000018u); // 80347304
  c->r[29]=R32(c->r[1]+0x00000014u); // 80347308
  c->r[28]=R32(c->r[1]+0x00000010u); // 8034730C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80347310
  c->lr=c->r[0]; // 80347314
  c->r[1]=c->r[1]+0x00000020u; // 80347318
  return; // 8034731C
}

// Detach__Q34nw4r3g3d13AnmObjChrNodeFi
void f_80347320(Ctx* __restrict c) {
  trace_call(0x80347320u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80347320
  c->r[0]=c->lr; // 80347324
  W32(c->r[1]+0x00000024u,c->r[0]); // 80347328
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034732C
  c->r[31]=c->r[3]|c->r[3]; // 80347330
  W32(c->r[1]+0x00000018u,c->r[30]); // 80347334
  W32(c->r[1]+0x00000014u,c->r[29]); // 80347338
  c->r[29]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8034733C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80347340
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 80347344
  c->r[28]=R32(c->r[5]+c->r[29]); // 80347348
  cmps(c,0,(int32_t)c->r[28],0); // 8034734C
  if (crb(c,2)) { goto L_80347414; } // 80347350
  c->r[12]=R32(c->r[28]+0x00000000u); // 80347354
  c->r[30]=0u+0x00010000u; // 80347358
  c->r[3]=c->r[28]|c->r[28]; // 8034735C
  c->r[6]=c->r[31]|c->r[31]; // 80347360
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80347364
  c->r[4]=c->r[30]+0x00000003u; // 80347368
  c->r[5]=0u+0x00000000u; // 8034736C
  c->ctr=c->r[12]; // 80347370
  if (true) { c->lr=0x80347378u; dispatch(c,c->ctr); } // 80347374
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80347378
  c->r[0]=0u+0x00000000u; // 8034737C
  c->r[6]=0u+0x00000000u; // 80347380
  c->r[7]=0u+0x00000000u; // 80347384
  W32(c->r[3]+c->r[29],c->r[0]); // 80347388
  c->r[4]=0u+0x00000000u; // 8034738C
  goto L_803473F0; // 80347390
L_80347394:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 80347394
  c->r[8]=c->r[30]+0xFFFF8000u; // 80347398
  c->r[5]=0u+0x00000000u; // 8034739C
  c->ctr=c->r[0]; // 803473A0
  cmps(c,0,(int32_t)c->r[0],0); // 803473A4
  if (!crb(c,1)) { goto L_803473E0; } // 803473A8
L_803473AC:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 803473AC
  c->r[3]=R32(c->r[3]+c->r[5]); // 803473B0
  cmps(c,0,(int32_t)c->r[3],0); // 803473B4
  if (crb(c,2)) { goto L_803473D8; } // 803473B8
  c->r[0]=R32(c->r[3]+0x00000014u); // 803473BC
  c->r[0]=R16(c->r[4]+c->r[0]); // 803473C0
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 803473C4
  if (!crb(c,2)) { goto L_803473D8; } // 803473C8
  c->r[6]=0u+0x00000001u; // 803473CC
  c->r[8]=0u+0x00000000u; // 803473D0
  goto L_803473E0; // 803473D4
L_803473D8:;
  c->r[5]=c->r[5]+0x00000004u; // 803473D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803473AC; } // 803473DC
L_803473E0:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 803473E0
  c->r[7]=c->r[7]+0x00000001u; // 803473E4
  W16(c->r[3]+c->r[4],c->r[8]); // 803473E8
  c->r[4]=c->r[4]+0x00000002u; // 803473EC
L_803473F0:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 803473F0
  cmpu(c,0,c->r[7],c->r[0]); // 803473F4
  if (crb(c,0)) { IRQCHK(c); goto L_80347394; } // 803473F8
  cmps(c,0,(int32_t)c->r[6],0); // 803473FC
  if (!crb(c,2)) { goto L_80347414; } // 80347400
  c->r[3]=c->r[31]|c->r[31]; // 80347404
  c->r[4]=0u+0x00000004u; // 80347408
  c->r[5]=0u+0x00000000u; // 8034740C
  c->lr=0x80347414u; f_8034A6BC(c); // 80347410
L_80347414:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80347414
  c->r[3]=c->r[28]|c->r[28]; // 80347418
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034741C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80347420
  c->r[28]=R32(c->r[1]+0x00000010u); // 80347424
  c->r[0]=R32(c->r[1]+0x00000024u); // 80347428
  c->lr=c->r[0]; // 8034742C
  c->r[1]=c->r[1]+0x00000020u; // 80347430
  return; // 80347434
}

// DetachAll__Q34nw4r3g3d13AnmObjChrNodeFv
void f_80347438(Ctx* __restrict c) {
  trace_call(0x80347438u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80347438
  c->r[0]=c->lr; // 8034743C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80347440
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80347444
  c->r[31]=0u+0x00000000u; // 80347448
  W32(c->r[1]+0x00000008u,c->r[30]); // 8034744C
  c->r[30]=c->r[3]|c->r[3]; // 80347450
  goto L_80347474; // 80347454
L_80347458:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80347458
  c->r[3]=c->r[30]|c->r[30]; // 8034745C
  c->r[4]=c->r[31]|c->r[31]; // 80347460
  c->r[12]=R32(c->r[12]+0x00000040u); // 80347464
  c->ctr=c->r[12]; // 80347468
  if (true) { c->lr=0x80347470u; dispatch(c,c->ctr); } // 8034746C
  c->r[31]=c->r[31]+0x00000001u; // 80347470
L_80347474:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 80347474
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80347478
  if (crb(c,0)) { IRQCHK(c); goto L_80347458; } // 8034747C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80347480
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80347484
  c->r[30]=R32(c->r[1]+0x00000008u); // 80347488
  c->lr=c->r[0]; // 8034748C
  c->r[1]=c->r[1]+0x00000010u; // 80347490
  return; // 80347494
}

// UpdateFrame__Q34nw4r3g3d13AnmObjChrNodeFv
void f_80347498(Ctx* __restrict c) {
  trace_call(0x80347498u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80347498
  c->r[0]=c->lr; // 8034749C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803474A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803474A4
  c->r[31]=0u+0x00000000u; // 803474A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803474AC
  c->r[30]=0u+0x00000000u; // 803474B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803474B4
  c->r[29]=c->r[3]|c->r[3]; // 803474B8
  goto L_803474E8; // 803474BC
L_803474C0:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 803474C0
  c->r[3]=R32(c->r[3]+c->r[31]); // 803474C4
  cmps(c,0,(int32_t)c->r[3],0); // 803474C8
  if (crb(c,2)) { goto L_803474E0; } // 803474CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803474D0
  c->r[12]=R32(c->r[12]+0x00000024u); // 803474D4
  c->ctr=c->r[12]; // 803474D8
  if (true) { c->lr=0x803474E0u; dispatch(c,c->ctr); } // 803474DC
L_803474E0:;
  c->r[31]=c->r[31]+0x00000004u; // 803474E0
  c->r[30]=c->r[30]+0x00000001u; // 803474E4
L_803474E8:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 803474E8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803474EC
  if (crb(c,0)) { IRQCHK(c); goto L_803474C0; } // 803474F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803474F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803474F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803474FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80347500
  c->lr=c->r[0]; // 80347504
  c->r[1]=c->r[1]+0x00000020u; // 80347508
  return; // 8034750C
}

// fn_80347510
void f_80347510(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80347510
  c->r[0]=c->lr; // 80347514
  W32(c->r[1]+0x00000024u,c->r[0]); // 80347518
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8034751C
  c->f[31]=c->f[1]; // 80347520
  W32(c->r[1]+0x00000014u,c->r[31]); // 80347524
  c->r[31]=0u+0x00000000u; // 80347528
  W32(c->r[1]+0x00000010u,c->r[30]); // 8034752C
  c->r[30]=0u+0x00000000u; // 80347530
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 80347534
  c->r[29]=c->r[3]|c->r[3]; // 80347538
  goto L_8034756C; // 8034753C
L_80347540:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 80347540
  c->r[3]=R32(c->r[3]+c->r[31]); // 80347544
  cmps(c,0,(int32_t)c->r[3],0); // 80347548
  if (crb(c,2)) { goto L_80347564; } // 8034754C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80347550
  c->f[1]=c->f[31]; // 80347554
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80347558
  c->ctr=c->r[12]; // 8034755C
  if (true) { c->lr=0x80347564u; dispatch(c,c->ctr); } // 80347560
L_80347564:;
  c->r[31]=c->r[31]+0x00000004u; // 80347564
  c->r[30]=c->r[30]+0x00000001u; // 80347568
L_8034756C:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 8034756C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80347570
  if (crb(c,0)) { IRQCHK(c); goto L_80347540; } // 80347574
  c->r[0]=R32(c->r[1]+0x00000024u); // 80347578
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8034757C
  c->r[31]=R32(c->r[1]+0x00000014u); // 80347580
  c->r[30]=R32(c->r[1]+0x00000010u); // 80347584
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 80347588
  c->lr=c->r[0]; // 8034758C
  c->r[1]=c->r[1]+0x00000020u; // 80347590
  return; // 80347594
}

// fn_80347598
void f_80347598(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000018u); // 80347598
  c->r[6]=0u+0x00000000u; // 8034759C
  c->r[5]=0u+0x00000000u; // 803475A0
  c->ctr=c->r[0]; // 803475A4
  cmps(c,0,(int32_t)c->r[0],0); // 803475A8
  if (!crb(c,1)) { goto L_803475E4; } // 803475AC
L_803475B0:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 803475B0
  c->r[0]=R32(c->r[4]+c->r[5]); // 803475B4
  cmps(c,0,(int32_t)c->r[0],0); // 803475B8
  if (crb(c,2)) { goto L_803475D8; } // 803475BC
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803475C0
  c->r[3]=R32(c->r[4]+c->r[0]); // 803475C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803475C8
  c->r[12]=R32(c->r[12]+0x00000020u); // 803475CC
  c->ctr=c->r[12]; // 803475D0
  if (true) { dispatch(c,c->ctr); return; } // 803475D4
L_803475D8:;
  c->r[5]=c->r[5]+0x00000004u; // 803475D8
  c->r[6]=c->r[6]+0x00000001u; // 803475DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803475B0; } // 803475E0
L_803475E4:;
  {uint32_t ea=c->r[2]+0xFFFFF020u; c->f[1]=c->ps1[1]=RF32(ea);} // 803475E4
  return; // 803475E8
}

// fn_803475EC
void f_803475EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803475EC
  c->r[0]=c->lr; // 803475F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803475F4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 803475F8
  c->f[31]=c->f[1]; // 803475FC
  W32(c->r[1]+0x00000014u,c->r[31]); // 80347600
  c->r[31]=0u+0x00000000u; // 80347604
  W32(c->r[1]+0x00000010u,c->r[30]); // 80347608
  c->r[30]=0u+0x00000000u; // 8034760C
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 80347610
  c->r[29]=c->r[3]|c->r[3]; // 80347614
  goto L_80347648; // 80347618
L_8034761C:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 8034761C
  c->r[3]=R32(c->r[3]+c->r[31]); // 80347620
  cmps(c,0,(int32_t)c->r[3],0); // 80347624
  if (crb(c,2)) { goto L_80347640; } // 80347628
  c->r[12]=R32(c->r[3]+0x00000000u); // 8034762C
  c->f[1]=c->f[31]; // 80347630
  c->r[12]=R32(c->r[12]+0x00000028u); // 80347634
  c->ctr=c->r[12]; // 80347638
  if (true) { c->lr=0x80347640u; dispatch(c,c->ctr); } // 8034763C
L_80347640:;
  c->r[31]=c->r[31]+0x00000004u; // 80347640
  c->r[30]=c->r[30]+0x00000001u; // 80347644
L_80347648:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 80347648
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8034764C
  if (crb(c,0)) { IRQCHK(c); goto L_8034761C; } // 80347650
  c->r[0]=R32(c->r[1]+0x00000024u); // 80347654
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 80347658
  c->r[31]=R32(c->r[1]+0x00000014u); // 8034765C
  c->r[30]=R32(c->r[1]+0x00000010u); // 80347660
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 80347664
  c->lr=c->r[0]; // 80347668
  c->r[1]=c->r[1]+0x00000020u; // 8034766C
  return; // 80347670
}

// fn_80347674
void f_80347674(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000018u); // 80347674
  c->r[6]=0u+0x00000000u; // 80347678
  c->r[5]=0u+0x00000000u; // 8034767C
  c->ctr=c->r[0]; // 80347680
  cmps(c,0,(int32_t)c->r[0],0); // 80347684
  if (!crb(c,1)) { goto L_803476C0; } // 80347688
L_8034768C:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 8034768C
  c->r[0]=R32(c->r[4]+c->r[5]); // 80347690
  cmps(c,0,(int32_t)c->r[0],0); // 80347694
  if (crb(c,2)) { goto L_803476B4; } // 80347698
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8034769C
  c->r[3]=R32(c->r[4]+c->r[0]); // 803476A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803476A4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 803476A8
  c->ctr=c->r[12]; // 803476AC
  if (true) { dispatch(c,c->ctr); return; } // 803476B0
L_803476B4:;
  c->r[5]=c->r[5]+0x00000004u; // 803476B4
  c->r[6]=c->r[6]+0x00000001u; // 803476B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8034768C; } // 803476BC
L_803476C0:;
  {uint32_t ea=c->r[2]+0xFFFFF024u; c->f[1]=c->ps1[1]=RF32(ea);} // 803476C0
  return; // 803476C4
}

// Bind__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdl
void f_803476C8(Ctx* __restrict c) {
  trace_call(0x803476C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803476C8
  c->r[0]=c->lr; // 803476CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803476D0
  c->r[11]=c->r[1]+0x00000030u; // 803476D4
  c->lr=0x803476DCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803476D8
  c->r[25]=c->r[3]|c->r[3]; // 803476DC
  c->r[26]=c->r[4]|c->r[4]; // 803476E0
  c->r[29]=0u+0x00000000u; // 803476E4
  c->r[28]=0u+0x00000000u; // 803476E8
  c->r[30]=0u+0x00000000u; // 803476EC
  c->r[31]=0u+0x00000000u; // 803476F0
  goto L_80347780; // 803476F4
L_803476F8:;
  c->r[3]=R32(c->r[25]+0x0000001Cu); // 803476F8
  c->r[27]=R32(c->r[3]+c->r[30]); // 803476FC
  cmps(c,0,(int32_t)c->r[27],0); // 80347700
  if (crb(c,2)) { goto L_80347778; } // 80347704
  c->r[0]=R32(c->r[26]+0x00000000u); // 80347708
  c->r[3]=c->r[27]|c->r[27]; // 8034770C
  c->r[4]=c->r[1]+0x00000008u; // 80347710
  W32(c->r[1]+0x00000008u,c->r[0]); // 80347714
  c->r[12]=R32(c->r[27]+0x00000000u); // 80347718
  c->r[12]=R32(c->r[12]+0x00000030u); // 8034771C
  c->ctr=c->r[12]; // 80347720
  if (true) { c->lr=0x80347728u; dispatch(c,c->ctr); } // 80347724
  cmps(c,0,(int32_t)c->r[29],0); // 80347728
  c->r[29]=0u+0x00000000u; // 8034772C
  if (!crb(c,2)) { goto L_8034773C; } // 80347730
  cmps(c,0,(int32_t)c->r[3],0); // 80347734
  if (crb(c,2)) { goto L_80347740; } // 80347738
L_8034773C:;
  c->r[29]=0u+0x00000001u; // 8034773C
L_80347740:;
  c->r[5]=0u+0x00000000u; // 80347740
  c->r[4]=0u+0x00000000u; // 80347744
  goto L_8034776C; // 80347748
L_8034774C:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 8034774C
  c->r[0]=R16(c->r[3]+c->r[4]); // 80347750
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 80347754
  if (!crb(c,2)) { goto L_80347764; } // 80347758
  c->r[3]=R32(c->r[25]+0x00000014u); // 8034775C
  W16(c->r[3]+c->r[4],c->r[31]); // 80347760
L_80347764:;
  c->r[4]=c->r[4]+0x00000002u; // 80347764
  c->r[5]=c->r[5]+0x00000001u; // 80347768
L_8034776C:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 8034776C
  cmpu(c,0,c->r[5],c->r[0]); // 80347770
  if (crb(c,0)) { IRQCHK(c); goto L_8034774C; } // 80347774
L_80347778:;
  c->r[30]=c->r[30]+0x00000004u; // 80347778
  c->r[28]=c->r[28]+0x00000001u; // 8034777C
L_80347780:;
  c->r[0]=R32(c->r[25]+0x00000018u); // 80347780
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80347784
  if (crb(c,0)) { IRQCHK(c); goto L_803476F8; } // 80347788
  c->r[3]=c->r[25]|c->r[25]; // 8034778C
  c->r[4]=0u+0x00000004u; // 80347790
  c->r[5]=0u+0x00000001u; // 80347794
  c->lr=0x8034779Cu; f_8034A6BC(c); // 80347798
  c->r[11]=c->r[1]+0x00000030u; // 8034779C
  c->r[3]=c->r[29]|c->r[29]; // 803477A0
  c->lr=0x803477A8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803477A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803477A8
  c->lr=c->r[0]; // 803477AC
  c->r[1]=c->r[1]+0x00000030u; // 803477B0
  return; // 803477B4
}

// Bind__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_803477B8(Ctx* __restrict c) {
  trace_call(0x803477B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803477B8
  c->r[0]=c->lr; // 803477BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 803477C0
  c->r[11]=c->r[1]+0x00000040u; // 803477C4
  c->lr=0x803477CCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803477C8
  c->r[28]=c->r[3]|c->r[3]; // 803477CC
  c->r[29]=c->r[4]|c->r[4]; // 803477D0
  c->r[30]=c->r[5]|c->r[5]; // 803477D4
  c->r[31]=c->r[6]|c->r[6]; // 803477D8
  c->r[25]=0u+0x00000000u; // 803477DC
  c->r[24]=0u+0x00000000u; // 803477E0
  c->r[26]=0u+0x00000000u; // 803477E4
  c->r[27]=0u+0x00000000u; // 803477E8
  goto L_80347880; // 803477EC
L_803477F0:;
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 803477F0
  c->r[23]=R32(c->r[3]+c->r[26]); // 803477F4
  cmps(c,0,(int32_t)c->r[23],0); // 803477F8
  if (crb(c,2)) { goto L_80347878; } // 803477FC
  c->r[0]=R32(c->r[29]+0x00000000u); // 80347800
  c->r[3]=c->r[23]|c->r[23]; // 80347804
  c->r[5]=c->r[30]|c->r[30]; // 80347808
  c->r[6]=c->r[31]|c->r[31]; // 8034780C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80347810
  c->r[4]=c->r[1]+0x00000008u; // 80347814
  c->r[12]=R32(c->r[23]+0x00000000u); // 80347818
  c->r[12]=R32(c->r[12]+0x00000050u); // 8034781C
  c->ctr=c->r[12]; // 80347820
  if (true) { c->lr=0x80347828u; dispatch(c,c->ctr); } // 80347824
  cmps(c,0,(int32_t)c->r[25],0); // 80347828
  c->r[25]=0u+0x00000000u; // 8034782C
  if (!crb(c,2)) { goto L_8034783C; } // 80347830
  cmps(c,0,(int32_t)c->r[3],0); // 80347834
  if (crb(c,2)) { goto L_80347840; } // 80347838
L_8034783C:;
  c->r[25]=0u+0x00000001u; // 8034783C
L_80347840:;
  c->r[5]=0u+0x00000000u; // 80347840
  c->r[4]=0u+0x00000000u; // 80347844
  goto L_8034786C; // 80347848
L_8034784C:;
  c->r[3]=R32(c->r[23]+0x00000014u); // 8034784C
  c->r[0]=R16(c->r[3]+c->r[4]); // 80347850
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 80347854
  if (!crb(c,2)) { goto L_80347864; } // 80347858
  c->r[3]=R32(c->r[28]+0x00000014u); // 8034785C
  W16(c->r[3]+c->r[4],c->r[27]); // 80347860
L_80347864:;
  c->r[4]=c->r[4]+0x00000002u; // 80347864
  c->r[5]=c->r[5]+0x00000001u; // 80347868
L_8034786C:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 8034786C
  cmpu(c,0,c->r[5],c->r[0]); // 80347870
  if (crb(c,0)) { IRQCHK(c); goto L_8034784C; } // 80347874
L_80347878:;
  c->r[26]=c->r[26]+0x00000004u; // 80347878
  c->r[24]=c->r[24]+0x00000001u; // 8034787C
L_80347880:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 80347880
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 80347884
  if (crb(c,0)) { IRQCHK(c); goto L_803477F0; } // 80347888
  c->r[3]=c->r[28]|c->r[28]; // 8034788C
  c->r[4]=0u+0x00000004u; // 80347890
  c->r[5]=0u+0x00000001u; // 80347894
  c->lr=0x8034789Cu; f_8034A6BC(c); // 80347898
  c->r[11]=c->r[1]+0x00000040u; // 8034789C
  c->r[3]=c->r[25]|c->r[25]; // 803478A0
  c->lr=0x803478A8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803478A4
  c->r[0]=R32(c->r[1]+0x00000044u); // 803478A8
  c->lr=c->r[0]; // 803478AC
  c->r[1]=c->r[1]+0x00000040u; // 803478B0
  return; // 803478B4
}

// Release__Q34nw4r3g3d13AnmObjChrNodeFv
void f_803478B8(Ctx* __restrict c) {
  trace_call(0x803478B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803478B8
  c->r[0]=c->lr; // 803478BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803478C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803478C4
  c->r[31]=0u+0x00000000u; // 803478C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803478CC
  c->r[30]=0u+0x00000000u; // 803478D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803478D4
  c->r[29]=c->r[3]|c->r[3]; // 803478D8
  goto L_80347908; // 803478DC
L_803478E0:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 803478E0
  c->r[3]=R32(c->r[3]+c->r[31]); // 803478E4
  cmps(c,0,(int32_t)c->r[3],0); // 803478E8
  if (crb(c,2)) { goto L_80347900; } // 803478EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803478F0
  c->r[12]=R32(c->r[12]+0x00000034u); // 803478F4
  c->ctr=c->r[12]; // 803478F8
  if (true) { c->lr=0x80347900u; dispatch(c,c->ctr); } // 803478FC
L_80347900:;
  c->r[31]=c->r[31]+0x00000004u; // 80347900
  c->r[30]=c->r[30]+0x00000001u; // 80347904
L_80347908:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 80347908
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8034790C
  if (crb(c,0)) { IRQCHK(c); goto L_803478E0; } // 80347910
  c->r[3]=0u+0x00010000u; // 80347914
  c->r[5]=0u+0x00000000u; // 80347918
  c->r[4]=c->r[3]+0xFFFF8000u; // 8034791C
  c->r[6]=0u+0x00000000u; // 80347920
  goto L_80347938; // 80347924
L_80347928:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80347928
  c->r[5]=c->r[5]+0x00000001u; // 8034792C
  W16(c->r[3]+c->r[6],c->r[4]); // 80347930
  c->r[6]=c->r[6]+0x00000002u; // 80347934
L_80347938:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80347938
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8034793C
  if (crb(c,0)) { IRQCHK(c); goto L_80347928; } // 80347940
  c->r[3]=c->r[29]|c->r[29]; // 80347944
  c->r[4]=0u+0x00000004u; // 80347948
  c->r[5]=0u+0x00000000u; // 8034794C
  c->lr=0x80347954u; f_8034A6BC(c); // 80347950
  c->r[0]=R32(c->r[1]+0x00000024u); // 80347954
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80347958
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034795C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80347960
  c->lr=c->r[0]; // 80347964
  c->r[1]=c->r[1]+0x00000020u; // 80347968
  return; // 8034796C
}

// Release__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_80347970(Ctx* __restrict c) {
  trace_call(0x80347970u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80347970
  c->r[0]=c->lr; // 80347974
  W32(c->r[1]+0x00000034u,c->r[0]); // 80347978
  c->r[11]=c->r[1]+0x00000030u; // 8034797C
  c->lr=0x80347984u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80347980
  c->r[31]=c->r[3]|c->r[3]; // 80347984
  c->r[26]=c->r[4]|c->r[4]; // 80347988
  c->r[27]=c->r[5]|c->r[5]; // 8034798C
  c->r[28]=c->r[6]|c->r[6]; // 80347990
  c->r[29]=0u+0x00000000u; // 80347994
  c->r[30]=0u+0x00000000u; // 80347998
  goto L_803479DC; // 8034799C
L_803479A0:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 803479A0
  c->r[3]=R32(c->r[3]+c->r[30]); // 803479A4
  cmps(c,0,(int32_t)c->r[3],0); // 803479A8
  if (crb(c,2)) { goto L_803479D4; } // 803479AC
  c->r[0]=R32(c->r[26]+0x00000000u); // 803479B0
  c->r[5]=c->r[27]|c->r[27]; // 803479B4
  c->r[6]=c->r[28]|c->r[28]; // 803479B8
  c->r[4]=c->r[1]+0x00000008u; // 803479BC
  W32(c->r[1]+0x00000008u,c->r[0]); // 803479C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803479C4
  c->r[12]=R32(c->r[12]+0x00000054u); // 803479C8
  c->ctr=c->r[12]; // 803479CC
  if (true) { c->lr=0x803479D4u; dispatch(c,c->ctr); } // 803479D0
L_803479D4:;
  c->r[30]=c->r[30]+0x00000004u; // 803479D4
  c->r[29]=c->r[29]+0x00000001u; // 803479D8
L_803479DC:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 803479DC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803479E0
  if (crb(c,0)) { IRQCHK(c); goto L_803479A0; } // 803479E4
  c->r[3]=0u+0x00010000u; // 803479E8
  c->r[5]=0u+0x00000000u; // 803479EC
  c->r[4]=c->r[3]+0xFFFF8000u; // 803479F0
  c->r[6]=0u+0x00000000u; // 803479F4
  goto L_80347A0C; // 803479F8
L_803479FC:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 803479FC
  c->r[5]=c->r[5]+0x00000001u; // 80347A00
  W16(c->r[3]+c->r[6],c->r[4]); // 80347A04
  c->r[6]=c->r[6]+0x00000002u; // 80347A08
L_80347A0C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 80347A0C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80347A10
  if (crb(c,0)) { IRQCHK(c); goto L_803479FC; } // 80347A14
  c->r[3]=c->r[31]|c->r[31]; // 80347A18
  c->r[4]=0u+0x00000004u; // 80347A1C
  c->r[5]=0u+0x00000000u; // 80347A20
  c->lr=0x80347A28u; f_8034A6BC(c); // 80347A24
  c->r[7]=0u+0x00000000u; // 80347A28
  c->r[5]=0u+0x00000000u; // 80347A2C
  c->r[4]=0u+0x00000000u; // 80347A30
  goto L_80347A88; // 80347A34
L_80347A38:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80347A38
  c->r[8]=R32(c->r[3]+c->r[5]); // 80347A3C
  cmps(c,0,(int32_t)c->r[8],0); // 80347A40
  if (crb(c,2)) { goto L_80347A80; } // 80347A44
  c->r[9]=0u+0x00000000u; // 80347A48
  c->r[6]=0u+0x00000000u; // 80347A4C
  goto L_80347A74; // 80347A50
L_80347A54:;
  c->r[3]=R32(c->r[8]+0x00000014u); // 80347A54
  c->r[0]=R16(c->r[3]+c->r[6]); // 80347A58
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 80347A5C
  if (!crb(c,2)) { goto L_80347A6C; } // 80347A60
  c->r[3]=R32(c->r[31]+0x00000014u); // 80347A64
  W16(c->r[3]+c->r[6],c->r[4]); // 80347A68
L_80347A6C:;
  c->r[6]=c->r[6]+0x00000002u; // 80347A6C
  c->r[9]=c->r[9]+0x00000001u; // 80347A70
L_80347A74:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 80347A74
  cmpu(c,0,c->r[9],c->r[0]); // 80347A78
  if (crb(c,0)) { IRQCHK(c); goto L_80347A54; } // 80347A7C
L_80347A80:;
  c->r[5]=c->r[5]+0x00000004u; // 80347A80
  c->r[7]=c->r[7]+0x00000001u; // 80347A84
L_80347A88:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 80347A88
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80347A8C
  if (crb(c,0)) { IRQCHK(c); goto L_80347A38; } // 80347A90
  c->r[11]=c->r[1]+0x00000030u; // 80347A94
  c->lr=0x80347A9Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80347A98
  c->r[0]=R32(c->r[1]+0x00000034u); // 80347A9C
  c->lr=c->r[0]; // 80347AA0
  c->r[1]=c->r[1]+0x00000030u; // 80347AA4
  return; // 80347AA8
}

// G3dProc__Q34nw4r3g3d13AnmObjChrNodeFUlUlPv
void f_80347AAC(Ctx* __restrict c) {
  trace_call(0x80347AACu);
  c->r[5]=0u+0x00010000u; // 80347AAC
  c->r[0]=c->r[5]+0x00000002u; // 80347AB0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80347AB4
  if (crb(c,2)) { goto L_80347B34; } // 80347AB8
  if (!crb(c,0)) { goto L_80347AD0; } // 80347ABC
  c->r[0]=c->r[5]+0x00000001u; // 80347AC0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80347AC4
  if (!crb(c,0)) { goto L_80347AE0; } // 80347AC8
  return; // 80347ACC
L_80347AD0:;
  c->r[0]=c->r[5]+0x00000004u; // 80347AD0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80347AD4
  if (!crb(c,0)) return; // 80347AD8
  goto L_80347B28; // 80347ADC
L_80347AE0:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 80347AE0
  c->r[4]=0u+0x00000000u; // 80347AE4
  c->r[7]=0u+0x00000000u; // 80347AE8
  c->ctr=c->r[0]; // 80347AEC
  cmps(c,0,(int32_t)c->r[0],0); // 80347AF0
  if (!crb(c,1)) return; // 80347AF4
L_80347AF8:;
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 80347AF8
  c->r[0]=R32(c->r[5]+c->r[7]); // 80347AFC
  cmpu(c,0,c->r[0],c->r[6]); // 80347B00
  if (!crb(c,2)) { goto L_80347B18; } // 80347B04
  c->r[12]=R32(c->r[3]+0x00000000u); // 80347B08
  c->r[12]=R32(c->r[12]+0x00000040u); // 80347B0C
  c->ctr=c->r[12]; // 80347B10
  if (true) { dispatch(c,c->ctr); return; } // 80347B14
L_80347B18:;
  c->r[7]=c->r[7]+0x00000004u; // 80347B18
  c->r[4]=c->r[4]+0x00000001u; // 80347B1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80347AF8; } // 80347B20
  return; // 80347B24
L_80347B28:;
  c->r[0]=0u+0x00000000u; // 80347B28
  W32(c->r[3]+0x00000004u,c->r[0]); // 80347B2C
  return; // 80347B30
L_80347B34:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 80347B34
  return; // 80347B38
}

// Construct__Q34nw4r3g3d14AnmObjChrBlendFP12MEMAllocatorPUlQ34nw4r3g3d6ResMdli
void f_80347B3C(Ctx* __restrict c) {
  trace_call(0x80347B3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80347B3C
  c->r[0]=c->lr; // 80347B40
  W32(c->r[1]+0x00000034u,c->r[0]); // 80347B44
  c->r[11]=c->r[1]+0x00000030u; // 80347B48
  c->lr=0x80347B50u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80347B4C
  c->r[0]=R32(c->r[5]+0x00000000u); // 80347B50
  c->r[25]=c->r[3]|c->r[3]; // 80347B54
  c->r[29]=c->r[4]|c->r[4]; // 80347B58
  c->r[30]=c->r[6]|c->r[6]; // 80347B5C
  cmps(c,0,(int32_t)c->r[0],0); // 80347B60
  if (!crb(c,2)) { goto L_80347B70; } // 80347B64
  c->r[3]=0u+0x00000000u; // 80347B68
  goto L_80347C98; // 80347B6C
L_80347B70:;
  c->r[3]=c->r[5]|c->r[5]; // 80347B70
  c->lr=0x80347B78u; f_8033CA88(c); // 80347B74
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80347B78
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80347B7C
  c->r[0]=c->r[4]+0x00000027u; // 80347B80
  c->r[28]=c->r[3]|c->r[3]; // 80347B84
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80347B88
  cmps(c,0,(int32_t)c->r[29],0); // 80347B8C
  c->r[3]=c->r[27]+c->r[5]; // 80347B90
  c->r[0]=c->r[3]+0x00000003u; // 80347B94
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80347B98
  c->r[3]=c->r[26]+c->r[5]; // 80347B9C
  c->r[0]=c->r[3]+0x00000003u; // 80347BA0
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80347BA4
  if (crb(c,2)) { goto L_80347BB0; } // 80347BA8
  W32(c->r[29]+0x00000000u,c->r[4]); // 80347BAC
L_80347BB0:;
  cmps(c,0,(int32_t)c->r[25],0); // 80347BB0
  if (!crb(c,2)) { goto L_80347BC0; } // 80347BB4
  c->r[3]=0u+0x00000000u; // 80347BB8
  goto L_80347C98; // 80347BBC
L_80347BC0:;
  c->r[3]=c->r[25]|c->r[25]; // 80347BC0
  c->lr=0x80347BC8u; f_802CF59C(c); // 80347BC4
  cmps(c,0,(int32_t)c->r[3],0); // 80347BC8
  c->r[31]=c->r[3]|c->r[3]; // 80347BCC
  if (!crb(c,2)) { goto L_80347BDC; } // 80347BD0
  c->r[3]=0u+0x00000000u; // 80347BD4
  goto L_80347C98; // 80347BD8
L_80347BDC:;
  if (crb(c,2)) { goto L_80347C94; } // 80347BDC
  c->r[29]=0u+0x00000000u; // 80347BE0
  c->r[12]=0u+0x80540000u; // 80347BE4
  W32(c->r[3]+0x00000004u,c->r[29]); // 80347BE8
  c->r[12]=c->r[12]+0x00007D20u; // 80347BEC
  c->r[0]=c->r[3]+0x00000024u; // 80347BF0
  W32(c->r[3]+0x00000008u,c->r[25]); // 80347BF4
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 80347BF8
  W32(c->r[3]+0x00000000u,c->r[12]); // 80347BFC
  W32(c->r[3]+0x00000010u,c->r[28]); // 80347C00
  W32(c->r[3]+0x00000014u,c->r[0]); // 80347C04
  c->r[12]=R32(c->r[12]+0x00000034u); // 80347C08
  c->ctr=c->r[12]; // 80347C0C
  if (true) { c->lr=0x80347C14u; dispatch(c,c->ctr); } // 80347C10
  c->r[3]=0u+0x80540000u; // 80347C14
  c->r[0]=c->r[31]+c->r[27]; // 80347C18
  c->r[3]=c->r[3]+0x00007CC8u; // 80347C1C
  c->r[4]=0u+0x00000000u; // 80347C20
  W32(c->r[31]+0x00000000u,c->r[3]); // 80347C24
  c->r[5]=0u+0x00000000u; // 80347C28
  W32(c->r[31]+0x00000018u,c->r[30]); // 80347C2C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80347C30
  goto L_80347C48; // 80347C34
L_80347C38:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80347C38
  c->r[4]=c->r[4]+0x00000001u; // 80347C3C
  W32(c->r[3]+c->r[5],c->r[29]); // 80347C40
  c->r[5]=c->r[5]+0x00000004u; // 80347C44
L_80347C48:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 80347C48
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80347C4C
  if (crb(c,0)) { IRQCHK(c); goto L_80347C38; } // 80347C50
  c->r[3]=0u+0x80540000u; // 80347C54
  c->r[0]=c->r[31]+c->r[26]; // 80347C58
  c->r[3]=c->r[3]+0x00007C70u; // 80347C5C
  {uint32_t ea=c->r[2]+0xFFFFF024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80347C60
  W32(c->r[31]+0x00000000u,c->r[3]); // 80347C64
  c->r[4]=0u+0x00000000u; // 80347C68
  c->r[5]=0u+0x00000000u; // 80347C6C
  W32(c->r[31]+0x00000020u,c->r[0]); // 80347C70
  goto L_80347C88; // 80347C74
L_80347C78:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 80347C78
  c->r[4]=c->r[4]+0x00000001u; // 80347C7C
  {uint32_t ea=c->r[3]+c->r[5]; WF32(ea,c->f[0]);} // 80347C80
  c->r[5]=c->r[5]+0x00000004u; // 80347C84
L_80347C88:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 80347C88
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80347C8C
  if (crb(c,0)) { IRQCHK(c); goto L_80347C78; } // 80347C90
L_80347C94:;
  c->r[3]=c->r[31]|c->r[31]; // 80347C94
L_80347C98:;
  c->r[11]=c->r[1]+0x00000030u; // 80347C98
  c->lr=0x80347CA0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80347C9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80347CA0
  c->lr=c->r[0]; // 80347CA4
  c->r[1]=c->r[1]+0x00000030u; // 80347CA8
  return; // 80347CAC
}

// fn_80347CB0
void f_80347CB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80347CB0
  c->r[0]=c->lr; // 80347CB4
  W32(c->r[1]+0x00000164u,c->r[0]); // 80347CB8
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[31]);} // 80347CBC
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,31,ea,0,0);} // 80347CC0
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[30]);} // 80347CC4
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,30,ea,0,0);} // 80347CC8
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[29]);} // 80347CCC
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,29,ea,0,0);} // 80347CD0
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[28]);} // 80347CD4
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,28,ea,0,0);} // 80347CD8
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[27]);} // 80347CDC
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,27,ea,0,0);} // 80347CE0
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[26]);} // 80347CE4
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,26,ea,0,0);} // 80347CE8
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[25]);} // 80347CEC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,25,ea,0,0);} // 80347CF0
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[24]);} // 80347CF4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,24,ea,0,0);} // 80347CF8
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[23]);} // 80347CFC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,23,ea,0,0);} // 80347D00
  c->r[11]=c->r[1]+0x000000D0u; // 80347D04
  c->lr=0x80347D0Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80347D08
  {uint32_t ea=c->r[2]+0xFFFFF020u; c->f[23]=c->ps1[23]=RF32(ea);} // 80347D0C
  c->r[24]=c->r[3]|c->r[3]; // 80347D10
  c->r[0]=R32(c->r[3]+0x00000018u); // 80347D14
  c->r[25]=c->r[4]|c->r[4]; // 80347D18
  c->r[26]=c->r[5]|c->r[5]; // 80347D1C
  c->f[0]=c->f[23]; // 80347D20
  c->r[28]=rotl(c->r[5],1)&0xFFFFFFFEu; // 80347D24
  c->r[8]=0u+0x00000000u; // 80347D28
  c->r[9]=0u+0x00000000u; // 80347D2C
  c->r[7]=0u+0x00000000u; // 80347D30
  c->ctr=c->r[0]; // 80347D34
  cmps(c,0,(int32_t)c->r[0],0); // 80347D38
  if (!crb(c,1)) { goto L_80347D8C; } // 80347D3C
L_80347D40:;
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 80347D40
  c->r[6]=R32(c->r[3]+0x00000020u); // 80347D44
  c->r[5]=R32(c->r[5]+c->r[7]); // 80347D48
  {uint32_t ea=c->r[6]+c->r[7]; c->f[1]=c->ps1[1]=RF32(ea);} // 80347D4C
  cmps(c,0,(int32_t)c->r[5],0); // 80347D50
  if (crb(c,2)) { goto L_80347D84; } // 80347D54
  fcmp(c,0,c->f[0],c->f[1]); // 80347D58
  if (crb(c,2)) { goto L_80347D84; } // 80347D5C
  c->r[0]=R32(c->r[5]+0x00000014u); // 80347D60
  c->r[0]=R16(c->r[28]+c->r[0]); // 80347D64
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 80347D68
  if (!crb(c,2)) { goto L_80347D84; } // 80347D6C
  cmps(c,0,(int32_t)c->r[8],0); // 80347D70
  c->f[23]=c->ps1[23]=S(c->f[23]+c->f[1]); // 80347D74
  c->r[9]=c->r[9]+0x00000001u; // 80347D78
  if (!crb(c,2)) { goto L_80347D84; } // 80347D7C
  c->r[8]=c->r[5]|c->r[5]; // 80347D80
L_80347D84:;
  c->r[7]=c->r[7]+0x00000004u; // 80347D84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80347D40; } // 80347D88
L_80347D8C:;
  cmps(c,0,(int32_t)c->r[9],0); // 80347D8C
  if (!crb(c,2)) { goto L_80347DA4; } // 80347D90
  c->r[0]=0u+0x00000000u; // 80347D94
  c->r[3]=c->r[25]|c->r[25]; // 80347D98
  W32(c->r[4]+0x00000000u,c->r[0]); // 80347D9C
  goto L_80348290; // 80347DA0
L_80347DA4:;
  cmps(c,0,(int32_t)c->r[9],1); // 80347DA4
  if (!crb(c,2)) { goto L_80347DCC; } // 80347DA8
  c->r[12]=R32(c->r[8]+0x00000000u); // 80347DAC
  c->r[3]=c->r[8]|c->r[8]; // 80347DB0
  c->r[4]=c->r[25]|c->r[25]; // 80347DB4
  c->r[5]=c->r[26]|c->r[26]; // 80347DB8
  c->r[12]=R32(c->r[12]+0x00000038u); // 80347DBC
  c->ctr=c->r[12]; // 80347DC0
  if (true) { c->lr=0x80347DC8u; dispatch(c,c->ctr); } // 80347DC4
  goto L_80348290; // 80347DC8
L_80347DCC:;
  c->r[3]=c->r[24]|c->r[24]; // 80347DCC
  c->r[4]=0u+0x00000008u; // 80347DD0
  c->lr=0x80347DD8u; f_8034A6E4(c); // 80347DD4
  c->r[30]=c->r[3]|c->r[3]; // 80347DD8
  c->r[3]=c->r[24]|c->r[24]; // 80347DDC
  c->r[4]=0u+0x00000010u; // 80347DE0
  c->lr=0x80347DE8u; f_8034A6E4(c); // 80347DE4
  c->f[29]=c->ps1[29]=fres(c->f[23]); // 80347DE8
  {uint32_t ea=c->r[2]+0xFFFFF020u; c->f[28]=c->ps1[28]=RF32(ea);} // 80347DEC
  {uint32_t ea=c->r[2]+0xFFFFF024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80347DF0
  c->r[31]=c->r[3]|c->r[3]; // 80347DF4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[28]);} // 80347DF8
  c->r[0]=0u+0xFFFFFFFFu; // 80347DFC
  {double t0=S(c->f[29]+c->f[29]), t1=S(c->ps1[29]+c->ps1[29]); c->f[2]=t0; c->ps1[2]=t1;} // 80347E00
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[28]);} // 80347E04
  {double t0=S(c->f[29]*c->f[29]), t1=S(c->ps1[29]*c->ps1[29]); c->f[1]=t0; c->ps1[1]=t1;} // 80347E08
  c->r[3]=c->r[25]+0x0000001Cu; // 80347E0C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[28]);} // 80347E10
  c->f[27]=c->f[28]; // 80347E14
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80347E18
  c->f[26]=c->f[28]; // 80347E1C
  c->f[25]=c->f[28]; // 80347E20
  {double t0=S(-std::fma(c->f[23],c->f[1],-c->f[2])), t1=S(-std::fma(c->ps1[23],c->ps1[1],-c->ps1[2])); c->f[29]=t0; c->ps1[29]=t1;} // 80347E24
  W32(c->r[25]+0x00000000u,c->r[0]); // 80347E28
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[28]);} // 80347E2C
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[28]);} // 80347E30
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[28]);} // 80347E34
  c->lr=0x80347E3Cu; f_8036B090(c); // 80347E38
  {uint32_t ea=c->r[2]+0xFFFFF020u; c->f[30]=c->ps1[30]=RF32(ea);} // 80347E3C
  c->r[27]=0u+0x00000000u; // 80347E40
  {uint32_t ea=c->r[2]+0xFFFFF024u; c->f[31]=c->ps1[31]=RF32(ea);} // 80347E44
  c->r[29]=0u+0x00000000u; // 80347E48
  goto L_80348134; // 80347E4C
L_80347E50:;
  c->r[3]=R32(c->r[24]+0x0000001Cu); // 80347E50
  c->r[4]=R32(c->r[24]+0x00000020u); // 80347E54
  c->r[3]=R32(c->r[3]+c->r[29]); // 80347E58
  {uint32_t ea=c->r[4]+c->r[29]; c->f[24]=c->ps1[24]=RF32(ea);} // 80347E5C
  cmps(c,0,(int32_t)c->r[3],0); // 80347E60
  if (crb(c,2)) { goto L_8034812C; } // 80347E64
  fcmp(c,0,c->f[30],c->f[24]); // 80347E68
  if (crb(c,2)) { goto L_8034812C; } // 80347E6C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80347E70
  c->r[0]=R16(c->r[28]+c->r[0]); // 80347E74
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 80347E78
  if (!crb(c,2)) { goto L_8034812C; } // 80347E7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80347E80
  c->r[5]=c->r[26]|c->r[26]; // 80347E84
  c->r[4]=c->r[1]+0x0000005Cu; // 80347E88
  c->r[12]=R32(c->r[12]+0x00000038u); // 80347E8C
  c->ctr=c->r[12]; // 80347E90
  if (true) { c->lr=0x80347E98u; dispatch(c,c->ctr); } // 80347E94
  cmps(c,0,(int32_t)c->r[31],0); // 80347E98
  c->f[23]=c->ps1[23]=S(c->f[24]*c->f[29]); // 80347E9C
  c->r[22]=R32(c->r[3]+0x00000000u); // 80347EA0
  c->r[23]=c->r[3]|c->r[3]; // 80347EA4
  if (crb(c,2)) { goto L_80347F18; } // 80347EA8
  c->r[0]=rotl(c->r[22],0)&0x00000008u; cr0(c,c->r[0]); // 80347EAC
  if (!crb(c,2)) { goto L_80347F84; } // 80347EB0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80347EB4
  fcmp(c,0,c->f[1],c->f[30]); // 80347EB8
  if (!crb(c,1)) { goto L_80347EC8; } // 80347EBC
  c->lr=0x80347EC4u; f_8036AA18(c); // 80347EC0
  goto L_80347ECC; // 80347EC4
L_80347EC8:;
  {uint32_t ea=c->r[2]+0xFFFFF028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80347EC8
L_80347ECC:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 80347ECC
  {uint32_t ea=c->r[23]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80347ED0
  fcmp(c,0,c->f[1],c->f[30]); // 80347ED4
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[0]); // 80347ED8
  if (!crb(c,1)) { goto L_80347EE8; } // 80347EDC
  c->lr=0x80347EE4u; f_8036AA18(c); // 80347EE0
  goto L_80347EEC; // 80347EE4
L_80347EE8:;
  {uint32_t ea=c->r[2]+0xFFFFF028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80347EE8
L_80347EEC:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 80347EEC
  {uint32_t ea=c->r[23]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80347EF0
  fcmp(c,0,c->f[1],c->f[30]); // 80347EF4
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 80347EF8
  if (!crb(c,1)) { goto L_80347F08; } // 80347EFC
  c->lr=0x80347F04u; f_8036AA18(c); // 80347F00
  goto L_80347F0C; // 80347F04
L_80347F08:;
  {uint32_t ea=c->r[2]+0xFFFFF028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80347F08
L_80347F0C:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 80347F0C
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[0]); // 80347F10
  goto L_80347F84; // 80347F14
L_80347F18:;
  c->r[0]=rotl(c->r[22],0)&0x00000008u; cr0(c,c->r[0]); // 80347F18
  if (!crb(c,2)) { goto L_80347F60; } // 80347F1C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80347F20
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80347F24
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[23]); // 80347F28
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80347F2C
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80347F30
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 80347F34
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[2]);} // 80347F38
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80347F3C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 80347F40
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80347F44
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 80347F48
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80347F4C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 80347F50
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80347F54
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[0]);} // 80347F58
  goto L_80347F84; // 80347F5C
L_80347F60:;
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80347F60
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80347F64
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80347F68
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[23]); // 80347F6C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[23]); // 80347F70
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[23]); // 80347F74
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[2]);} // 80347F78
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 80347F7C
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[0]);} // 80347F80
L_80347F84:;
  cmps(c,0,(int32_t)c->r[30],0); // 80347F84
  if (crb(c,2)) { goto L_80347FE0; } // 80347F88
  c->r[0]=rotl(c->r[22],0)&0x00000020u; cr0(c,c->r[0]); // 80347F8C
  if (!crb(c,2)) { goto L_80347FA4; } // 80347F90
  c->r[3]=c->r[1]+0x00000018u; // 80347F94
  c->r[4]=c->r[23]+0x0000001Cu; // 80347F98
  c->lr=0x80347FA0u; f_80296D00(c); // 80347F9C
  goto L_80347FB4; // 80347FA0
L_80347FA4:;
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[30]);} // 80347FA4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[30]);} // 80347FA8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[30]);} // 80347FAC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[31]);} // 80347FB0
L_80347FB4:;
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[24]); // 80347FB4
  c->r[3]=c->r[1]+0x00000028u; // 80347FB8
  c->r[5]=c->r[3]|c->r[3]; // 80347FBC
  c->r[4]=c->r[1]+0x00000018u; // 80347FC0
  c->f[0]=c->ps1[0]=fres(c->f[25]); // 80347FC4
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80347FC8
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80347FCC
  {double t0=S(-std::fma(c->f[25],c->f[0],-c->f[1])), t1=S(-std::fma(c->ps1[25],c->ps1[0],-c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 80347FD0
  c->f[1]=c->ps1[1]=S(c->f[24]*c->f[0]); // 80347FD4
  c->lr=0x80347FDCu; f_80296ECC(c); // 80347FD8
  goto L_803480DC; // 80347FDC
L_80347FE0:;
  c->r[0]=rotl(c->r[22],0)&0x00000020u; cr0(c,c->r[0]); // 80347FE0
  if (!crb(c,2)) { goto L_803480B4; } // 80347FE4
  cmps(c,0,(int32_t)c->r[27],0); // 80347FE8
  if (!crb(c,2)) { goto L_80348038; } // 80347FEC
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80347FF0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80347FF4
  {uint32_t ea=c->r[23]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80347FF8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80347FFC
  {uint32_t ea=c->r[23]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80348000
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80348004
  {uint32_t ea=c->r[23]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80348008
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8034800C
  {uint32_t ea=c->r[23]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80348010
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 80348014
  {uint32_t ea=c->r[23]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80348018
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8034801C
  {uint32_t ea=c->r[23]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80348020
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 80348024
  {uint32_t ea=c->r[23]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80348028
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8034802C
  {uint32_t ea=c->r[23]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80348030
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80348034
L_80348038:;
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80348038
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034803C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 80348040
  {uint32_t ea=c->r[25]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 80348044
  {uint32_t ea=c->r[25]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80348048
  {uint32_t ea=c->r[25]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8034804C
  c->f[5]=c->ps1[5]=S(c->f[0]+c->f[1]); // 80348050
  {uint32_t ea=c->r[25]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80348054
  {uint32_t ea=c->r[25]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80348058
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[5]);} // 8034805C
  {uint32_t ea=c->r[23]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 80348060
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[23]); // 80348064
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 80348068
  {uint32_t ea=c->r[25]+0x00000020u; WF32(ea,c->f[4]);} // 8034806C
  {uint32_t ea=c->r[23]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 80348070
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[23]); // 80348074
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 80348078
  {uint32_t ea=c->r[25]+0x00000024u; WF32(ea,c->f[3]);} // 8034807C
  {uint32_t ea=c->r[23]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80348080
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[23]); // 80348084
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 80348088
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[2]);} // 8034808C
  {uint32_t ea=c->r[23]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80348090
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 80348094
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80348098
  {uint32_t ea=c->r[25]+0x00000030u; WF32(ea,c->f[1]);} // 8034809C
  {uint32_t ea=c->r[23]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 803480A0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 803480A4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803480A8
  {uint32_t ea=c->r[25]+0x00000034u; WF32(ea,c->f[0]);} // 803480AC
  goto L_803480DC; // 803480B0
L_803480B4:;
  cmps(c,0,(int32_t)c->r[27],0); // 803480B4
  if (!crb(c,2)) { goto L_803480C4; } // 803480B8
  c->r[3]=c->r[1]+0x00000038u; // 803480BC
  c->lr=0x803480C4u; f_8036AF70(c); // 803480C0
L_803480C4:;
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803480C4
  {uint32_t ea=c->r[25]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 803480C8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[23]); // 803480CC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[23]); // 803480D0
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[1]);} // 803480D4
  {uint32_t ea=c->r[25]+0x00000030u; WF32(ea,c->f[0]);} // 803480D8
L_803480DC:;
  c->r[0]=rotl(c->r[22],0)&0x00000040u; cr0(c,c->r[0]); // 803480DC
  if (!crb(c,2)) { goto L_80348120; } // 803480E0
  {uint32_t ea=c->r[23]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803480E4
  {uint32_t ea=c->r[25]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 803480E8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[23]); // 803480EC
  {uint32_t ea=c->r[25]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803480F0
  {uint32_t ea=c->r[25]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 803480F4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 803480F8
  {uint32_t ea=c->r[25]+0x00000028u; WF32(ea,c->f[2]);} // 803480FC
  {uint32_t ea=c->r[23]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 80348100
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 80348104
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80348108
  {uint32_t ea=c->r[25]+0x00000038u; WF32(ea,c->f[1]);} // 8034810C
  {uint32_t ea=c->r[23]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80348110
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 80348114
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80348118
  {uint32_t ea=c->r[25]+0x00000048u; WF32(ea,c->f[0]);} // 8034811C
L_80348120:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 80348120
  c->r[0]=c->r[0]&c->r[22]; // 80348124
  W32(c->r[25]+0x00000000u,c->r[0]); // 80348128
L_8034812C:;
  c->r[29]=c->r[29]+0x00000004u; // 8034812C
  c->r[27]=c->r[27]+0x00000001u; // 80348130
L_80348134:;
  c->r[0]=R32(c->r[24]+0x00000018u); // 80348134
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80348138
  if (crb(c,0)) { IRQCHK(c); goto L_80347E50; } // 8034813C
  cmps(c,0,(int32_t)c->r[31],0); // 80348140
  if (crb(c,2)) { goto L_8034816C; } // 80348144
  c->f[1]=c->f[28]; // 80348148
  c->lr=0x80348150u; f_8036A98C(c); // 8034814C
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[1]);} // 80348150
  c->f[1]=c->f[27]; // 80348154
  c->lr=0x8034815Cu; f_8036A98C(c); // 80348158
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 8034815C
  c->f[1]=c->f[26]; // 80348160
  c->lr=0x80348168u; f_8036A98C(c); // 80348164
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[1]);} // 80348168
L_8034816C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8034816C
  if (crb(c,2)) { goto L_803481B4; } // 80348170
  {uint32_t ea=c->r[25]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80348174
  c->r[3]=c->r[25]+0x0000001Cu; // 80348178
  {uint32_t ea=c->r[25]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034817C
  c->r[4]=c->r[1]+0x00000028u; // 80348180
  {uint32_t ea=c->r[25]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80348184
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80348188
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8034818C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80348190
  c->lr=0x80348198u; f_80296314(c); // 80348194
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80348198
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8034819C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803481A0
  {uint32_t ea=c->r[25]+0x00000028u; WF32(ea,c->f[2]);} // 803481A4
  {uint32_t ea=c->r[25]+0x00000038u; WF32(ea,c->f[1]);} // 803481A8
  {uint32_t ea=c->r[25]+0x00000048u; WF32(ea,c->f[0]);} // 803481AC
  goto L_80348280; // 803481B0
L_803481B4:;
  c->r[22]=c->r[25]+0x0000001Cu; // 803481B4
  c->r[23]=c->r[25]+0x0000002Cu; // 803481B8
  c->r[24]=c->r[25]+0x0000003Cu; // 803481BC
  c->r[3]=c->r[22]|c->r[22]; // 803481C0
  c->r[4]=c->r[23]|c->r[23]; // 803481C4
  c->r[5]=c->r[24]|c->r[24]; // 803481C8
  c->lr=0x803481D0u; f_80296B70(c); // 803481CC
  {uint32_t ea=c->r[22]+0x00000000u; psq_load(c,2,ea,0,0);} // 803481D0
  {uint32_t ea=c->r[22]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803481D4
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803481D8
  {uint32_t ea=c->r[2]+0xFFFFF020u; c->f[0]=c->ps1[0]=RF32(ea);} // 803481DC
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 803481E0
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803481E4
  fcmp(c,0,c->f[0],c->f[1]); // 803481E8
  if (crb(c,2)) { goto L_8034820C; } // 803481EC
  {uint32_t ea=c->r[24]+0x00000000u; psq_load(c,2,ea,0,0);} // 803481F0
  {uint32_t ea=c->r[24]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803481F4
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803481F8
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 803481FC
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80348200
  fcmp(c,0,c->f[0],c->f[1]); // 80348204
  if (!crb(c,2)) { goto L_80348258; } // 80348208
L_8034820C:;
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034820C
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[0]);} // 80348210
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80348214
  {uint32_t ea=c->r[25]+0x00000020u; WF32(ea,c->f[0]);} // 80348218
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034821C
  {uint32_t ea=c->r[25]+0x00000024u; WF32(ea,c->f[0]);} // 80348220
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80348224
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[0]);} // 80348228
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034822C
  {uint32_t ea=c->r[25]+0x00000030u; WF32(ea,c->f[0]);} // 80348230
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80348234
  {uint32_t ea=c->r[25]+0x00000034u; WF32(ea,c->f[0]);} // 80348238
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034823C
  {uint32_t ea=c->r[25]+0x0000003Cu; WF32(ea,c->f[0]);} // 80348240
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80348244
  {uint32_t ea=c->r[25]+0x00000040u; WF32(ea,c->f[0]);} // 80348248
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034824C
  {uint32_t ea=c->r[25]+0x00000044u; WF32(ea,c->f[0]);} // 80348250
  goto L_80348280; // 80348254
L_80348258:;
  c->r[3]=c->r[22]|c->r[22]; // 80348258
  c->r[4]=c->r[22]|c->r[22]; // 8034825C
  c->lr=0x80348264u; f_80296AB0(c); // 80348260
  c->r[3]=c->r[24]|c->r[24]; // 80348264
  c->r[4]=c->r[24]|c->r[24]; // 80348268
  c->lr=0x80348270u; f_80296AB0(c); // 8034826C
  c->r[3]=c->r[24]|c->r[24]; // 80348270
  c->r[4]=c->r[22]|c->r[22]; // 80348274
  c->r[5]=c->r[23]|c->r[23]; // 80348278
  c->lr=0x80348280u; f_80296B70(c); // 8034827C
L_80348280:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 80348280
  c->r[3]=c->r[25]|c->r[25]; // 80348284
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 80348288
  W32(c->r[25]+0x00000000u,c->r[0]); // 8034828C
L_80348290:;
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,31,ea,0,0);} // 80348290
  {uint32_t ea=c->r[1]+0x00000150u; c->f[31]=RF64(ea);} // 80348294
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,30,ea,0,0);} // 80348298
  {uint32_t ea=c->r[1]+0x00000140u; c->f[30]=RF64(ea);} // 8034829C
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,29,ea,0,0);} // 803482A0
  {uint32_t ea=c->r[1]+0x00000130u; c->f[29]=RF64(ea);} // 803482A4
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,28,ea,0,0);} // 803482A8
  {uint32_t ea=c->r[1]+0x00000120u; c->f[28]=RF64(ea);} // 803482AC
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,27,ea,0,0);} // 803482B0
  {uint32_t ea=c->r[1]+0x00000110u; c->f[27]=RF64(ea);} // 803482B4
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,26,ea,0,0);} // 803482B8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[26]=RF64(ea);} // 803482BC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,25,ea,0,0);} // 803482C0
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[25]=RF64(ea);} // 803482C4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,24,ea,0,0);} // 803482C8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[24]=RF64(ea);} // 803482CC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,23,ea,0,0);} // 803482D0
  c->r[11]=c->r[1]+0x000000D0u; // 803482D4
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[23]=RF64(ea);} // 803482D8
  c->lr=0x803482E0u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803482DC
  c->r[0]=R32(c->r[1]+0x00000164u); // 803482E0
  c->lr=c->r[0]; // 803482E4
  c->r[1]=c->r[1]+0x00000160u; // 803482E8
  return; // 803482EC
}

// fn_803482F0
void f_803482F0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 803482F0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803482F4
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[1]);} // 803482F8
  return; // 803482FC
}

// fn_80348300
void f_80348300(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 80348300
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80348304
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80348308
  return; // 8034830C
}

// fn_80348310
void f_80348310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80348310
  c->r[0]=c->lr; // 80348314
  W32(c->r[1]+0x00000044u,c->r[0]); // 80348318
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8034831C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80348320
  c->r[11]=c->r[1]+0x00000030u; // 80348324
  c->lr=0x8034832Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80348328
  c->r[8]=R32(c->r[5]+0x00000000u); // 8034832C
  c->r[29]=c->r[3]|c->r[3]; // 80348330
  c->r[25]=c->r[4]|c->r[4]; // 80348334
  c->r[30]=c->r[5]|c->r[5]; // 80348338
  cmps(c,0,(int32_t)c->r[8],0); // 8034833C
  c->r[27]=c->r[7]|c->r[7]; // 80348340
  if (crb(c,2)) { goto L_80348354; } // 80348344
  c->r[0]=R32(c->r[6]+0x00000000u); // 80348348
  cmps(c,0,(int32_t)c->r[0],0); // 8034834C
  if (!crb(c,2)) { goto L_8034835C; } // 80348350
L_80348354:;
  c->r[3]=0u+0x00000000u; // 80348354
  goto L_803484E0; // 80348358
L_8034835C:;
  c->r[31]=R16(c->r[8]+0x0000001Eu); // 8034835C
  c->r[3]=c->r[6]|c->r[6]; // 80348360
  c->lr=0x80348368u; f_8033CA88(c); // 80348364
  c->r[0]=0u-c->r[27]; // 80348368
  c->r[28]=c->r[3]|c->r[3]; // 8034836C
  c->r[4]=c->r[0]|c->r[27]; // 80348370
  cmps(c,0,(int32_t)c->r[25],0); // 80348374
  c->r[4]=sraw(c,c->r[4],31); // 80348378
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8034837C
  c->r[3]=c->r[31]&c->r[4]; // 80348380
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)76); // 80348384
  c->r[3]=c->r[26]+c->r[0]; // 80348388
  c->r[4]=c->r[3]+0x00000034u; // 8034838C
  if (crb(c,2)) { goto L_80348398; } // 80348390
  W32(c->r[25]+0x00000000u,c->r[4]); // 80348394
L_80348398:;
  cmps(c,0,(int32_t)c->r[29],0); // 80348398
  if (!crb(c,2)) { goto L_803483A8; } // 8034839C
  c->r[3]=0u+0x00000000u; // 803483A0
  goto L_803484E0; // 803483A4
L_803483A8:;
  c->r[3]=c->r[29]|c->r[29]; // 803483A8
  c->lr=0x803483B0u; f_802CF59C(c); // 803483AC
  cmps(c,0,(int32_t)c->r[3],0); // 803483B0
  c->r[31]=c->r[3]|c->r[3]; // 803483B4
  if (!crb(c,2)) { goto L_803483C4; } // 803483B8
  c->r[3]=0u+0x00000000u; // 803483BC
  goto L_803484E0; // 803483C0
L_803483C4:;
  cmps(c,0,(int32_t)c->r[27],0); // 803483C4
  if (crb(c,2)) { goto L_803483D4; } // 803483C8
  c->r[27]=c->r[3]+0x00000034u; // 803483CC
  goto L_803483D8; // 803483D0
L_803483D4:;
  c->r[27]=0u+0x00000000u; // 803483D4
L_803483D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 803483D8
  c->r[4]=c->r[3]+c->r[26]; // 803483DC
  c->r[5]=c->r[4]+0x00000034u; // 803483E0
  if (crb(c,2)) { goto L_803484DC; } // 803483E4
  c->r[0]=0u+0x00000000u; // 803483E8
  c->r[4]=0u+0x80540000u; // 803483EC
  W32(c->r[3]+0x00000004u,c->r[0]); // 803483F0
  c->r[4]=c->r[4]+0x00007D20u; // 803483F4
  c->r[30]=R32(c->r[30]+0x00000000u); // 803483F8
  W32(c->r[3]+0x00000008u,c->r[29]); // 803483FC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80348400
  W32(c->r[3]+0x00000000u,c->r[4]); // 80348404
  W32(c->r[3]+0x00000010u,c->r[28]); // 80348408
  W32(c->r[3]+0x00000014u,c->r[5]); // 8034840C
  c->r[3]=c->r[31]|c->r[31]; // 80348410
  c->r[12]=R32(c->r[31]+0x00000000u); // 80348414
  c->r[12]=R32(c->r[12]+0x00000034u); // 80348418
  c->ctr=c->r[12]; // 8034841C
  if (true) { c->lr=0x80348424u; dispatch(c,c->ctr); } // 80348420
  c->r[4]=R16(c->r[30]+0x0000001Cu); // 80348424
  c->r[0]=0u+0x43300000u; // 80348428
  c->r[5]=R32(c->r[30]+0x00000020u); // 8034842C
  c->r[3]=0u+0x80540000u; // 80348430
  c->r[4]=c->r[4]^0x80000000u; // 80348434
  {uint32_t ea=c->r[2]+0xFFFFF020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80348438
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8034843C
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80348440
  {uint32_t ea=c->r[2]+0xFFFFF024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80348444
  c->r[4]=c->r[13]+0xFFFF8000u; // 80348448
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034844C
  c->r[3]=c->r[3]+0x00007C18u; // 80348450
  {uint32_t ea=c->r[2]+0xFFFFF030u; c->f[3]=RF64(ea);} // 80348454
  cmps(c,0,(int32_t)c->r[27],0); // 80348458
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 8034845C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 80348460
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 80348464
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 80348468
  c->r[0]=R32(c->r[4]+c->r[5]); // 8034846C
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 80348470
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 80348474
  W32(c->r[31]+0x00000028u,c->r[0]); // 80348478
  W32(c->r[31]+0x00000000u,c->r[3]); // 8034847C
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 80348480
  W32(c->r[31]+0x00000030u,c->r[27]); // 80348484
  if (crb(c,2)) { goto L_803484DC; } // 80348488
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 8034848C
  c->r[28]=0u+0x00000000u; // 80348490
  c->r[27]=0u+0x00000000u; // 80348494
  goto L_803484D0; // 80348498
L_8034849C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8034849C
  c->r[3]=R16(c->r[3]+c->r[27]); // 803484A0
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 803484A4
  if (!crb(c,2)) { goto L_803484C8; } // 803484A8
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 803484AC
  c->f[1]=c->f[31]; // 803484B0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 803484B4
  c->r[4]=R32(c->r[31]+0x00000030u); // 803484B8
  c->r[3]=c->r[31]+0x0000002Cu; // 803484BC
  c->r[4]=c->r[4]+c->r[0]; // 803484C0
  c->lr=0x803484C8u; f_80342C88(c); // 803484C4
L_803484C8:;
  c->r[27]=c->r[27]+0x00000002u; // 803484C8
  c->r[28]=c->r[28]+0x00000001u; // 803484CC
L_803484D0:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 803484D0
  cmpu(c,0,c->r[28],c->r[0]); // 803484D4
  if (crb(c,0)) { IRQCHK(c); goto L_8034849C; } // 803484D8
L_803484DC:;
  c->r[3]=c->r[31]|c->r[31]; // 803484DC
L_803484E0:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 803484E0
  c->r[11]=c->r[1]+0x00000030u; // 803484E4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 803484E8
  c->lr=0x803484F0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803484EC
  c->r[0]=R32(c->r[1]+0x00000044u); // 803484F0
  c->lr=c->r[0]; // 803484F4
  c->r[1]=c->r[1]+0x00000040u; // 803484F8
  return; // 803484FC
}

// fn_80348500
void f_80348500(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80348500
  c->r[0]=c->lr; // 80348504
  W32(c->r[1]+0x00000034u,c->r[0]); // 80348508
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8034850C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80348510
  c->f[3]=c->f[1]; // 80348514
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80348518
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034851C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80348520
  c->r[29]=c->r[3]|c->r[3]; // 80348524
  c->r[12]=R32(c->r[3]+0x00000028u); // 80348528
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034852C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80348530
  c->ctr=c->r[12]; // 80348534
  if (true) { c->lr=0x8034853Cu; dispatch(c,c->ctr); } // 80348538
  c->r[0]=R32(c->r[29]+0x00000030u); // 8034853C
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 80348540
  cmps(c,0,(int32_t)c->r[0],0); // 80348544
  if (crb(c,2)) { goto L_8034859C; } // 80348548
  c->f[31]=c->ps1[31]=S(c->f[1]); // 8034854C
  c->r[31]=0u+0x00000000u; // 80348550
  c->r[30]=0u+0x00000000u; // 80348554
  goto L_80348590; // 80348558
L_8034855C:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8034855C
  c->r[3]=R16(c->r[3]+c->r[30]); // 80348560
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 80348564
  if (!crb(c,2)) { goto L_80348588; } // 80348568
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8034856C
  c->f[1]=c->f[31]; // 80348570
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 80348574
  c->r[4]=R32(c->r[29]+0x00000030u); // 80348578
  c->r[3]=c->r[29]+0x0000002Cu; // 8034857C
  c->r[4]=c->r[4]+c->r[0]; // 80348580
  c->lr=0x80348588u; f_80342C88(c); // 80348584
L_80348588:;
  c->r[30]=c->r[30]+0x00000002u; // 80348588
  c->r[31]=c->r[31]+0x00000001u; // 8034858C
L_80348590:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80348590
  cmpu(c,0,c->r[31],c->r[0]); // 80348594
  if (crb(c,0)) { IRQCHK(c); goto L_8034855C; } // 80348598
L_8034859C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8034859C
  c->r[0]=R32(c->r[1]+0x00000034u); // 803485A0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 803485A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803485A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803485AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803485B0
  c->lr=c->r[0]; // 803485B4
  c->r[1]=c->r[1]+0x00000030u; // 803485B8
  return; // 803485BC
}

// fn_803485C0
void f_803485C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803485C0
  return; // 803485C4
}

// fn_803485C8
void f_803485C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803485C8
  c->r[0]=c->lr; // 803485CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803485D0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 803485D4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 803485D8
  {uint32_t ea=c->r[2]+0xFFFFF020u; c->f[0]=c->ps1[0]=RF32(ea);} // 803485DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803485E0
  fcmp(c,0,c->f[0],c->f[1]); // 803485E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803485E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803485EC
  c->r[29]=c->r[3]|c->r[3]; // 803485F0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 803485F4
  if (!crb(c,2)) { goto L_80348658; } // 803485F8
  c->r[0]=R32(c->r[3]+0x00000030u); // 803485FC
  cmps(c,0,(int32_t)c->r[0],0); // 80348600
  if (crb(c,2)) { goto L_80348658; } // 80348604
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 80348608
  c->r[31]=0u+0x00000000u; // 8034860C
  c->r[30]=0u+0x00000000u; // 80348610
  goto L_8034864C; // 80348614
L_80348618:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80348618
  c->r[3]=R16(c->r[3]+c->r[30]); // 8034861C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 80348620
  if (!crb(c,2)) { goto L_80348644; } // 80348624
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 80348628
  c->f[1]=c->f[31]; // 8034862C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 80348630
  c->r[4]=R32(c->r[29]+0x00000030u); // 80348634
  c->r[3]=c->r[29]+0x0000002Cu; // 80348638
  c->r[4]=c->r[4]+c->r[0]; // 8034863C
  c->lr=0x80348644u; f_80342C88(c); // 80348640
L_80348644:;
  c->r[30]=c->r[30]+0x00000002u; // 80348644
  c->r[31]=c->r[31]+0x00000001u; // 80348648
L_8034864C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8034864C
  cmpu(c,0,c->r[31],c->r[0]); // 80348650
  if (crb(c,0)) { IRQCHK(c); goto L_80348618; } // 80348654
L_80348658:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80348658
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034865C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80348660
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80348664
  c->r[30]=R32(c->r[1]+0x00000018u); // 80348668
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034866C
  c->lr=c->r[0]; // 80348670
  c->r[1]=c->r[1]+0x00000030u; // 80348674
  return; // 80348678
}

// fn_8034867C
void f_8034867C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8034867C
  return; // 80348680
}

// fn_80348684
void f_80348684(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80348684
  c->r[0]=c->lr; // 80348688
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034868C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80348690
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80348694
  {uint32_t ea=c->r[2]+0xFFFFF020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80348698
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034869C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803486A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803486A4
  c->r[29]=c->r[3]|c->r[3]; // 803486A8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803486AC
  fcmp(c,0,c->f[0],c->f[1]); // 803486B0
  if (crb(c,2)) { goto L_80348740; } // 803486B4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803486B8
  {uint32_t ea=c->r[13]+0xFFFFAA00u; c->f[1]=c->ps1[1]=RF32(ea);} // 803486BC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803486C0
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 803486C4
  c->r[12]=R32(c->r[3]+0x00000028u); // 803486C8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 803486CC
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 803486D0
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 803486D4
  c->ctr=c->r[12]; // 803486D8
  if (true) { c->lr=0x803486E0u; dispatch(c,c->ctr); } // 803486DC
  c->r[0]=R32(c->r[29]+0x00000030u); // 803486E0
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 803486E4
  cmps(c,0,(int32_t)c->r[0],0); // 803486E8
  if (crb(c,2)) { goto L_80348740; } // 803486EC
  c->f[31]=c->ps1[31]=S(c->f[1]); // 803486F0
  c->r[31]=0u+0x00000000u; // 803486F4
  c->r[30]=0u+0x00000000u; // 803486F8
  goto L_80348734; // 803486FC
L_80348700:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80348700
  c->r[3]=R16(c->r[3]+c->r[30]); // 80348704
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 80348708
  if (!crb(c,2)) { goto L_8034872C; } // 8034870C
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 80348710
  c->f[1]=c->f[31]; // 80348714
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 80348718
  c->r[4]=R32(c->r[29]+0x00000030u); // 8034871C
  c->r[3]=c->r[29]+0x0000002Cu; // 80348720
  c->r[4]=c->r[4]+c->r[0]; // 80348724
  c->lr=0x8034872Cu; f_80342C88(c); // 80348728
L_8034872C:;
  c->r[30]=c->r[30]+0x00000002u; // 8034872C
  c->r[31]=c->r[31]+0x00000001u; // 80348730
L_80348734:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80348734
  cmpu(c,0,c->r[31],c->r[0]); // 80348738
  if (crb(c,0)) { IRQCHK(c); goto L_80348700; } // 8034873C
L_80348740:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80348740
  c->r[0]=R32(c->r[1]+0x00000034u); // 80348744
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80348748
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034874C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80348750
  c->r[29]=R32(c->r[1]+0x00000014u); // 80348754
  c->lr=c->r[0]; // 80348758
  c->r[1]=c->r[1]+0x00000030u; // 8034875C
  return; // 80348760
}

// fn_80348764
void f_80348764(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80348764
  c->r[0]=c->lr; // 80348768
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034876C
  c->r[11]=c->r[1]+0x00000030u; // 80348770
  c->lr=0x80348778u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80348774
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 80348778
  c->r[27]=c->r[3]|c->r[3]; // 8034877C
  c->r[28]=c->r[4]|c->r[4]; // 80348780
  c->r[30]=0u+0x00000000u; // 80348784
  c->r[31]=R16(c->r[5]+0x0000001Eu); // 80348788
  c->r[29]=0u+0x00000000u; // 8034878C
  cmps(c,0,(int32_t)c->r[31],0); // 80348790
  if (!crb(c,1)) { goto L_8034883C; } // 80348794
  goto L_80348830; // 80348798
L_8034879C:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 8034879C
  c->r[0]=R32(c->r[3]+0x00000010u); // 803487A0
  cmps(c,0,(int32_t)c->r[0],0); // 803487A4
  if (crb(c,2)) { goto L_803487B4; } // 803487A8
  c->r[0]=c->r[3]+c->r[0]; // 803487AC
  goto L_803487B8; // 803487B0
L_803487B4:;
  c->r[0]=0u+0x00000000u; // 803487B4
L_803487B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 803487B8
  if (crb(c,2)) { goto L_803487E4; } // 803487BC
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 803487C0
  c->r[3]=c->r[0]+c->r[3]; // 803487C4
  c->r[3]=R32(c->r[3]+0x00000024u); // 803487C8
  cmps(c,0,(int32_t)c->r[3],0); // 803487CC
  if (crb(c,2)) { goto L_803487DC; } // 803487D0
  c->r[5]=c->r[0]+c->r[3]; // 803487D4
  goto L_803487E8; // 803487D8
L_803487DC:;
  c->r[5]=0u+0x00000000u; // 803487DC
  goto L_803487E8; // 803487E0
L_803487E4:;
  c->r[5]=0u+0x00000000u; // 803487E4
L_803487E8:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 803487E8
  c->r[3]=c->r[28]|c->r[28]; // 803487EC
  c->r[4]=c->r[1]+0x00000008u; // 803487F0
  c->r[5]=c->r[0]+c->r[5]; // 803487F4
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 803487F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 803487FC
  c->lr=0x80348804u; f_8033C990(c); // 80348800
  cmps(c,0,(int32_t)c->r[3],0); // 80348804
  if (crb(c,2)) { goto L_8034882C; } // 80348808
  c->r[4]=R32(c->r[27]+0x00000014u); // 8034880C
  if (crb(c,2)) { goto L_8034881C; } // 80348810
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80348814
  goto L_80348820; // 80348818
L_8034881C:;
  c->r[0]=0u+0x00000000u; // 8034881C
L_80348820:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80348820
  c->r[30]=0u+0x00000001u; // 80348824
  W16(c->r[4]+c->r[0],c->r[29]); // 80348828
L_8034882C:;
  c->r[29]=c->r[29]+0x00000001u; // 8034882C
L_80348830:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 80348830
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 80348834
  if (crb(c,0)) { IRQCHK(c); goto L_8034879C; } // 80348838
L_8034883C:;
  c->r[3]=c->r[27]|c->r[27]; // 8034883C
  c->r[4]=0u+0x00000004u; // 80348840
  c->r[5]=0u+0x00000001u; // 80348844
  c->lr=0x8034884Cu; f_8034A6BC(c); // 80348848
  c->r[11]=c->r[1]+0x00000030u; // 8034884C
  c->r[3]=c->r[30]|c->r[30]; // 80348850
  c->lr=0x80348858u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80348854
  c->r[0]=R32(c->r[1]+0x00000034u); // 80348858
  c->lr=c->r[0]; // 8034885C
  c->r[1]=c->r[1]+0x00000030u; // 80348860
  return; // 80348864
}

// Bind__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_80348868(Ctx* __restrict c) {
  trace_call(0x80348868u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80348868
  c->r[0]=c->lr; // 8034886C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80348870
  c->r[11]=c->r[1]+0x00000040u; // 80348874
  c->lr=0x8034887Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80348878
  cmps(c,0,(int32_t)c->r[6],1); // 8034887C
  c->r[28]=c->r[3]|c->r[3]; // 80348880
  c->r[29]=c->r[4]|c->r[4]; // 80348884
  c->r[30]=c->r[5]|c->r[5]; // 80348888
  c->r[31]=0u+0x00000000u; // 8034888C
  if (crb(c,2)) { goto L_803488A4; } // 80348890
  if (!crb(c,0)) { goto L_80348A34; } // 80348894
  cmps(c,0,(int32_t)c->r[6],0); // 80348898
  if (!crb(c,0)) { goto L_803489C4; } // 8034889C
  goto L_80348A34; // 803488A0
L_803488A4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 803488A4
  c->r[4]=c->r[30]|c->r[30]; // 803488A8
  c->r[3]=c->r[1]+0x00000018u; // 803488AC
  W32(c->r[1]+0x00000018u,c->r[0]); // 803488B0
  c->lr=0x803488B8u; f_8033CA34(c); // 803488B4
  c->r[0]=R32(c->r[3]+0x00000064u); // 803488B8
  cmps(c,0,(int32_t)c->r[0],0); // 803488BC
  if (crb(c,2)) { goto L_803488CC; } // 803488C0
  c->r[4]=c->r[3]+c->r[0]; // 803488C4
  goto L_8034890C; // 803488C8
L_803488CC:;
  c->r[4]=0u+0x00000000u; // 803488CC
  goto L_8034890C; // 803488D0
L_803488D4:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 803488D4
  cmps(c,0,(int32_t)c->r[0],0); // 803488D8
  if (crb(c,2)) { goto L_803488E8; } // 803488DC
  c->r[3]=c->r[3]+c->r[0]; // 803488E0
  goto L_803488EC; // 803488E4
L_803488E8:;
  c->r[3]=0u+0x00000000u; // 803488E8
L_803488EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 803488EC
  if (crb(c,2)) { goto L_80348914; } // 803488F0
  c->r[0]=R32(c->r[3]+0x00000064u); // 803488F4
  cmps(c,0,(int32_t)c->r[0],0); // 803488F8
  if (crb(c,2)) { goto L_80348908; } // 803488FC
  c->r[4]=c->r[3]+c->r[0]; // 80348900
  goto L_8034890C; // 80348904
L_80348908:;
  c->r[4]=0u+0x00000000u; // 80348908
L_8034890C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8034890C
  if (crb(c,2)) { IRQCHK(c); goto L_803488D4; } // 80348910
L_80348914:;
  cmps(c,0,(int32_t)c->r[4],0); // 80348914
  if (crb(c,2)) { goto L_80348930; } // 80348918
  if (crb(c,2)) { goto L_80348928; } // 8034891C
  c->r[27]=R32(c->r[4]+0x0000000Cu); // 80348920
  goto L_8034893C; // 80348924
L_80348928:;
  c->r[27]=0u+0x00000000u; // 80348928
  goto L_8034893C; // 8034892C
L_80348930:;
  c->r[3]=c->r[1]+0x00000018u; // 80348930
  c->lr=0x80348938u; f_8033CA88(c); // 80348934
  c->r[27]=c->r[3]|c->r[3]; // 80348938
L_8034893C:;
  c->r[26]=rotl(c->r[30],1)&0xFFFFFFFEu; // 8034893C
  goto L_803489B8; // 80348940
L_80348944:;
  c->r[3]=c->r[29]|c->r[29]; // 80348944
  c->r[4]=c->r[30]|c->r[30]; // 80348948
  c->lr=0x80348950u; f_8033CA34(c); // 8034894C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80348950
  cmps(c,0,(int32_t)c->r[0],0); // 80348954
  if (crb(c,2)) { goto L_80348968; } // 80348958
  c->r[3]=c->r[3]+c->r[0]; // 8034895C
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 80348960
  goto L_8034896C; // 80348964
L_80348968:;
  c->r[0]=0u+0x00000000u; // 80348968
L_8034896C:;
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 8034896C
  c->r[3]=R32(c->r[4]+0x00000010u); // 80348970
  cmps(c,0,(int32_t)c->r[3],0); // 80348974
  if (crb(c,2)) { goto L_80348984; } // 80348978
  c->r[5]=c->r[4]+c->r[3]; // 8034897C
  goto L_80348988; // 80348980
L_80348984:;
  c->r[5]=0u+0x00000000u; // 80348984
L_80348988:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 80348988
  c->r[3]=c->r[1]+0x00000010u; // 8034898C
  c->r[4]=c->r[1]+0x00000014u; // 80348990
  W32(c->r[1]+0x00000010u,c->r[5]); // 80348994
  c->lr=0x8034899Cu; f_8033B0AC(c); // 80348998
  cmps(c,0,(int32_t)c->r[3],-1); // 8034899C
  if (crb(c,2)) { goto L_803489B0; } // 803489A0
  c->r[4]=R32(c->r[28]+0x00000014u); // 803489A4
  c->r[31]=0u+0x00000001u; // 803489A8
  W16(c->r[4]+c->r[26],c->r[3]); // 803489AC
L_803489B0:;
  c->r[26]=c->r[26]+0x00000002u; // 803489B0
  c->r[30]=c->r[30]+0x00000001u; // 803489B4
L_803489B8:;
  cmpu(c,0,c->r[30],c->r[27]); // 803489B8
  if (crb(c,0)) { IRQCHK(c); goto L_80348944; } // 803489BC
  goto L_80348A34; // 803489C0
L_803489C4:;
  c->r[3]=c->r[29]|c->r[29]; // 803489C4
  c->r[4]=c->r[30]|c->r[30]; // 803489C8
  c->lr=0x803489D0u; f_8033CA34(c); // 803489CC
  c->r[0]=R32(c->r[3]+0x00000008u); // 803489D0
  cmps(c,0,(int32_t)c->r[0],0); // 803489D4
  if (crb(c,2)) { goto L_803489E8; } // 803489D8
  c->r[3]=c->r[3]+c->r[0]; // 803489DC
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 803489E0
  goto L_803489EC; // 803489E4
L_803489E8:;
  c->r[0]=0u+0x00000000u; // 803489E8
L_803489EC:;
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 803489EC
  c->r[3]=R32(c->r[4]+0x00000010u); // 803489F0
  cmps(c,0,(int32_t)c->r[3],0); // 803489F4
  if (crb(c,2)) { goto L_80348A04; } // 803489F8
  c->r[5]=c->r[4]+c->r[3]; // 803489FC
  goto L_80348A08; // 80348A00
L_80348A04:;
  c->r[5]=0u+0x00000000u; // 80348A04
L_80348A08:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80348A08
  c->r[3]=c->r[1]+0x00000008u; // 80348A0C
  c->r[4]=c->r[1]+0x0000000Cu; // 80348A10
  W32(c->r[1]+0x00000008u,c->r[5]); // 80348A14
  c->lr=0x80348A1Cu; f_8033B0AC(c); // 80348A18
  cmps(c,0,(int32_t)c->r[3],-1); // 80348A1C
  if (crb(c,2)) { goto L_80348A34; } // 80348A20
  c->r[4]=R32(c->r[28]+0x00000014u); // 80348A24
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80348A28
  c->r[31]=0u+0x00000001u; // 80348A2C
  W16(c->r[4]+c->r[0],c->r[3]); // 80348A30
L_80348A34:;
  c->r[3]=c->r[28]|c->r[28]; // 80348A34
  c->r[4]=0u+0x00000004u; // 80348A38
  c->r[5]=0u+0x00000001u; // 80348A3C
  c->lr=0x80348A44u; f_8034A6BC(c); // 80348A40
  c->r[11]=c->r[1]+0x00000040u; // 80348A44
  c->r[3]=c->r[31]|c->r[31]; // 80348A48
  c->lr=0x80348A50u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80348A4C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80348A50
  c->lr=c->r[0]; // 80348A54
  c->r[1]=c->r[1]+0x00000040u; // 80348A58
  return; // 80348A5C
}

// Release__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_80348A60(Ctx* __restrict c) {
  trace_call(0x80348A60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80348A60
  c->r[0]=c->lr; // 80348A64
  cmps(c,0,(int32_t)c->r[6],1); // 80348A68
  W32(c->r[1]+0x00000024u,c->r[0]); // 80348A6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80348A70
  c->r[31]=c->r[5]|c->r[5]; // 80348A74
  W32(c->r[1]+0x00000018u,c->r[30]); // 80348A78
  c->r[30]=c->r[3]|c->r[3]; // 80348A7C
  if (crb(c,2)) { goto L_80348A94; } // 80348A80
  if (!crb(c,0)) { goto L_80348C14; } // 80348A84
  cmps(c,0,(int32_t)c->r[6],0); // 80348A88
  if (!crb(c,0)) { goto L_80348C00; } // 80348A8C
  goto L_80348C14; // 80348A90
L_80348A94:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80348A94
  c->r[4]=c->r[31]|c->r[31]; // 80348A98
  c->r[3]=c->r[1]+0x00000008u; // 80348A9C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80348AA0
  c->lr=0x80348AA8u; f_8033CA34(c); // 80348AA4
  c->r[0]=R32(c->r[3]+0x00000064u); // 80348AA8
  cmps(c,0,(int32_t)c->r[0],0); // 80348AAC
  if (crb(c,2)) { goto L_80348ABC; } // 80348AB0
  c->r[4]=c->r[3]+c->r[0]; // 80348AB4
  goto L_80348AFC; // 80348AB8
L_80348ABC:;
  c->r[4]=0u+0x00000000u; // 80348ABC
  goto L_80348AFC; // 80348AC0
L_80348AC4:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80348AC4
  cmps(c,0,(int32_t)c->r[0],0); // 80348AC8
  if (crb(c,2)) { goto L_80348AD8; } // 80348ACC
  c->r[3]=c->r[3]+c->r[0]; // 80348AD0
  goto L_80348ADC; // 80348AD4
L_80348AD8:;
  c->r[3]=0u+0x00000000u; // 80348AD8
L_80348ADC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80348ADC
  if (crb(c,2)) { goto L_80348B04; } // 80348AE0
  c->r[0]=R32(c->r[3]+0x00000064u); // 80348AE4
  cmps(c,0,(int32_t)c->r[0],0); // 80348AE8
  if (crb(c,2)) { goto L_80348AF8; } // 80348AEC
  c->r[4]=c->r[3]+c->r[0]; // 80348AF0
  goto L_80348AFC; // 80348AF4
L_80348AF8:;
  c->r[4]=0u+0x00000000u; // 80348AF8
L_80348AFC:;
  cmps(c,0,(int32_t)c->r[4],0); // 80348AFC
  if (crb(c,2)) { IRQCHK(c); goto L_80348AC4; } // 80348B00
L_80348B04:;
  cmps(c,0,(int32_t)c->r[4],0); // 80348B04
  if (crb(c,2)) { goto L_80348B20; } // 80348B08
  if (crb(c,2)) { goto L_80348B18; } // 80348B0C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80348B10
  goto L_80348B28; // 80348B14
L_80348B18:;
  c->r[3]=0u+0x00000000u; // 80348B18
  goto L_80348B28; // 80348B1C
L_80348B20:;
  c->r[3]=c->r[1]+0x00000008u; // 80348B20
  c->lr=0x80348B28u; f_8033CA88(c); // 80348B24
L_80348B28:;
  cmpu(c,1,c->r[31],c->r[3]); // 80348B28
  if (!crb(c,4)) { goto L_80348C14; } // 80348B2C
  c->r[0]=c->r[3]-c->r[31]; // 80348B30
  c->r[6]=c->r[3]+0xFFFFFFF8u; // 80348B34
  cmpu(c,0,c->r[0],0x00000008u); // 80348B38
  if (!crb(c,1)) { goto L_80348BD0; } // 80348B3C
  if (crb(c,5)) { goto L_80348BD0; } // 80348B40
  c->r[0]=c->r[6]+0x00000007u; // 80348B44
  c->r[4]=0u+0x00010000u; // 80348B48
  c->r[0]=c->r[0]-c->r[31]; // 80348B4C
  c->r[7]=rotl(c->r[31],1)&0xFFFFFFFEu; // 80348B50
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80348B54
  c->r[5]=c->r[4]+0xFFFF8000u; // 80348B58
  c->ctr=c->r[0]; // 80348B5C
  cmpu(c,0,c->r[31],c->r[6]); // 80348B60
  if (!crb(c,0)) { goto L_80348BD0; } // 80348B64
L_80348B68:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 80348B68
  c->r[31]=c->r[31]+0x00000008u; // 80348B6C
  W16(c->r[4]+c->r[7],c->r[5]); // 80348B70
  c->r[0]=R32(c->r[30]+0x00000014u); // 80348B74
  c->r[4]=c->r[0]+c->r[7]; // 80348B78
  W16(c->r[4]+0x00000002u,c->r[5]); // 80348B7C
  c->r[0]=R32(c->r[30]+0x00000014u); // 80348B80
  c->r[4]=c->r[0]+c->r[7]; // 80348B84
  W16(c->r[4]+0x00000004u,c->r[5]); // 80348B88
  c->r[0]=R32(c->r[30]+0x00000014u); // 80348B8C
  c->r[4]=c->r[0]+c->r[7]; // 80348B90
  W16(c->r[4]+0x00000006u,c->r[5]); // 80348B94
  c->r[0]=R32(c->r[30]+0x00000014u); // 80348B98
  c->r[4]=c->r[0]+c->r[7]; // 80348B9C
  W16(c->r[4]+0x00000008u,c->r[5]); // 80348BA0
  c->r[0]=R32(c->r[30]+0x00000014u); // 80348BA4
  c->r[4]=c->r[0]+c->r[7]; // 80348BA8
  W16(c->r[4]+0x0000000Au,c->r[5]); // 80348BAC
  c->r[0]=R32(c->r[30]+0x00000014u); // 80348BB0
  c->r[4]=c->r[0]+c->r[7]; // 80348BB4
  W16(c->r[4]+0x0000000Cu,c->r[5]); // 80348BB8
  c->r[0]=R32(c->r[30]+0x00000014u); // 80348BBC
  c->r[4]=c->r[0]+c->r[7]; // 80348BC0
  c->r[7]=c->r[7]+0x00000010u; // 80348BC4
  W16(c->r[4]+0x0000000Eu,c->r[5]); // 80348BC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80348B68; } // 80348BCC
L_80348BD0:;
  c->r[4]=0u+0x00010000u; // 80348BD0
  c->r[0]=c->r[3]-c->r[31]; // 80348BD4
  c->r[5]=rotl(c->r[31],1)&0xFFFFFFFEu; // 80348BD8
  c->r[4]=c->r[4]+0xFFFF8000u; // 80348BDC
  c->ctr=c->r[0]; // 80348BE0
  cmpu(c,0,c->r[31],c->r[3]); // 80348BE4
  if (!crb(c,0)) { goto L_80348C14; } // 80348BE8
L_80348BEC:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 80348BEC
  W16(c->r[3]+c->r[5],c->r[4]); // 80348BF0
  c->r[5]=c->r[5]+0x00000002u; // 80348BF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80348BEC; } // 80348BF8
  goto L_80348C14; // 80348BFC
L_80348C00:;
  c->r[4]=0u+0x00010000u; // 80348C00
  c->r[3]=R32(c->r[3]+0x00000014u); // 80348C04
  c->r[4]=c->r[4]+0xFFFF8000u; // 80348C08
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 80348C0C
  W16(c->r[3]+c->r[0],c->r[4]); // 80348C10
L_80348C14:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80348C14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80348C18
  c->r[30]=R32(c->r[1]+0x00000018u); // 80348C1C
  c->lr=c->r[0]; // 80348C20
  c->r[1]=c->r[1]+0x00000020u; // 80348C24
  return; // 80348C28
}

// fn_80348C2C
void f_80348C2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80348C2C
  c->r[0]=c->lr; // 80348C30
  W32(c->r[1]+0x00000014u,c->r[0]); // 80348C34
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 80348C38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80348C3C
  c->r[31]=c->r[4]|c->r[4]; // 80348C40
  c->r[6]=R32(c->r[3]+0x00000014u); // 80348C44
  c->r[5]=R16(c->r[6]+c->r[0]); // 80348C48
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 80348C4C
  if (crb(c,2)) { goto L_80348C64; } // 80348C50
  c->r[0]=0u+0x00000000u; // 80348C54
  c->r[3]=c->r[31]|c->r[31]; // 80348C58
  W32(c->r[4]+0x00000000u,c->r[0]); // 80348C5C
  goto L_80348C8C; // 80348C60
L_80348C64:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 80348C64
  cmps(c,0,(int32_t)c->r[6],0); // 80348C68
  if (crb(c,2)) { goto L_80348C7C; } // 80348C6C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 80348C70
  c->r[3]=c->r[6]+c->r[0]; // 80348C74
  goto L_80348C8C; // 80348C78
L_80348C7C:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80348C7C
  c->r[3]=c->r[3]+0x0000002Cu; // 80348C80
  c->lr=0x80348C88u; f_80342C88(c); // 80348C84
  c->r[3]=c->r[31]|c->r[31]; // 80348C88
L_80348C8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80348C8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80348C90
  c->lr=c->r[0]; // 80348C94
  c->r[1]=c->r[1]+0x00000010u; // 80348C98
  return; // 80348C9C
}

// fn_80348CA0
void f_80348CA0(Ctx* __restrict c) {
  c->r[5]=0u+0x00010000u; // 80348CA0
  c->r[0]=c->r[5]+0x00000002u; // 80348CA4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80348CA8
  if (crb(c,2)) { goto L_80348CEC; } // 80348CAC
  if (!crb(c,0)) { goto L_80348CC0; } // 80348CB0
  cmps(c,0,(int32_t)c->r[4],8); // 80348CB4
  if (crb(c,2)) { goto L_80348CD0; } // 80348CB8
  return; // 80348CBC
L_80348CC0:;
  c->r[0]=c->r[5]+0x00000004u; // 80348CC0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80348CC4
  if (!crb(c,0)) return; // 80348CC8
  goto L_80348CE0; // 80348CCC
L_80348CD0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80348CD0
  c->r[12]=R32(c->r[12]+0x00000024u); // 80348CD4
  c->ctr=c->r[12]; // 80348CD8
  if (true) { dispatch(c,c->ctr); return; } // 80348CDC
L_80348CE0:;
  c->r[0]=0u+0x00000000u; // 80348CE0
  W32(c->r[3]+0x00000004u,c->r[0]); // 80348CE4
  return; // 80348CE8
L_80348CEC:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 80348CEC
  return; // 80348CF0
}

// fn_80348CF4
void f_80348CF4(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80348CF4
  c->r[0]=R32(c->r[4]+0x00000000u); // 80348CF8
  c->r[3]=c->r[3]+0x00004880u; // 80348CFC
  cmpu(c,0,c->r[0],c->r[3]); // 80348D00
  if (!crb(c,2)) { goto L_80348D10; } // 80348D04
  c->r[3]=0u+0x00000001u; // 80348D08
  return; // 80348D0C
L_80348D10:;
  c->r[3]=0u+0x803C0000u; // 80348D10
  c->r[0]=R32(c->r[4]+0x00000000u); // 80348D14
  c->r[3]=c->r[3]+0x00004848u; // 80348D18
  cmpu(c,0,c->r[0],c->r[3]); // 80348D1C
  if (!crb(c,2)) { goto L_80348D2C; } // 80348D20
  c->r[3]=0u+0x00000001u; // 80348D24
  return; // 80348D28
L_80348D2C:;
  c->r[3]=0u+0x803C0000u; // 80348D2C
  c->r[3]=c->r[3]+0x000048D8u; // 80348D30
  cmpu(c,0,c->r[0],c->r[3]); // 80348D34
  if (!crb(c,2)) { goto L_80348D44; } // 80348D38
  c->r[3]=0u+0x00000001u; // 80348D3C
  return; // 80348D40
L_80348D44:;
  c->r[3]=0u+0x803C0000u; // 80348D44
  c->r[3]=c->r[3]+0x000048C8u; // 80348D48
  c->r[0]=c->r[3]-c->r[0]; // 80348D4C
  c->r[0]=cntlz(c->r[0]); // 80348D50
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80348D54
  return; // 80348D58
}

// fn_80348D5C
void f_80348D5C(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80348D5C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80348D60
  c->r[3]=c->r[3]+0x00004848u; // 80348D64
  cmpu(c,0,c->r[0],c->r[3]); // 80348D68
  if (!crb(c,2)) { goto L_80348D78; } // 80348D6C
  c->r[3]=0u+0x00000001u; // 80348D70
  return; // 80348D74
L_80348D78:;
  c->r[3]=0u+0x803C0000u; // 80348D78
  c->r[0]=R32(c->r[4]+0x00000000u); // 80348D7C
  c->r[3]=c->r[3]+0x000048D8u; // 80348D80
  cmpu(c,0,c->r[0],c->r[3]); // 80348D84
  if (!crb(c,2)) { goto L_80348D94; } // 80348D88
  c->r[3]=0u+0x00000001u; // 80348D8C
  return; // 80348D90
L_80348D94:;
  c->r[3]=0u+0x803C0000u; // 80348D94
  c->r[3]=c->r[3]+0x000048C8u; // 80348D98
  c->r[0]=c->r[3]-c->r[0]; // 80348D9C
  c->r[0]=cntlz(c->r[0]); // 80348DA0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80348DA4
  return; // 80348DA8
}

// fn_80348DAC
void f_80348DAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80348DAC
  c->r[0]=c->lr; // 80348DB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80348DB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80348DB8
  c->r[12]=R32(c->r[12]+0x00000014u); // 80348DBC
  c->ctr=c->r[12]; // 80348DC0
  if (true) { c->lr=0x80348DC8u; dispatch(c,c->ctr); } // 80348DC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80348DC8
  c->r[3]=c->r[3]+0x00000004u; // 80348DCC
  c->lr=c->r[0]; // 80348DD0
  c->r[1]=c->r[1]+0x00000010u; // 80348DD4
  return; // 80348DD8
}

// fn_80348DDC
void f_80348DDC(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80348DDC
  c->r[3]=c->r[3]+0x00004880u; // 80348DE0
  return; // 80348DE4
}

// fn_80348DE8
void f_80348DE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80348DE8
  c->r[0]=c->lr; // 80348DEC
  cmps(c,0,(int32_t)c->r[3],0); // 80348DF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80348DF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80348DF8
  c->r[31]=c->r[3]|c->r[3]; // 80348DFC
  if (crb(c,2)) { goto L_80348E14; } // 80348E00
  if (crb(c,2)) { goto L_80348E14; } // 80348E04
  if (crb(c,2)) { goto L_80348E14; } // 80348E08
  c->r[4]=0u+0x00000000u; // 80348E0C
  c->lr=0x80348E14u; f_8034A528(c); // 80348E10
L_80348E14:;
  c->r[3]=c->r[31]|c->r[31]; // 80348E14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80348E18
  c->r[0]=R32(c->r[1]+0x00000014u); // 80348E1C
  c->lr=c->r[0]; // 80348E20
  c->r[1]=c->r[1]+0x00000010u; // 80348E24
  return; // 80348E28
}

// IsDerivedFrom__Q34nw4r3g3d14AnmObjChrBlendCFQ44nw4r3g3d6G3dObj7TypeObj
void f_80348E2C(Ctx* __restrict c) {
  trace_call(0x80348E2Cu);
  c->r[5]=0u+0x803C0000u; // 80348E2C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80348E30
  c->r[5]=c->r[5]+0x00004848u; // 80348E34
  c->r[3]=c->r[5]+0x00000024u; // 80348E38
  cmpu(c,0,c->r[0],c->r[3]); // 80348E3C
  if (!crb(c,2)) { goto L_80348E4C; } // 80348E40
  c->r[3]=0u+0x00000001u; // 80348E44
  return; // 80348E48
L_80348E4C:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 80348E4C
  c->r[0]=c->r[5]+0x00000010u; // 80348E50
  cmpu(c,0,c->r[4],c->r[0]); // 80348E54
  if (!crb(c,2)) { goto L_80348E64; } // 80348E58
  c->r[3]=0u+0x00000001u; // 80348E5C
  return; // 80348E60
L_80348E64:;
  c->r[0]=c->r[5]+0x00000000u; // 80348E64
  cmpu(c,0,c->r[4],c->r[0]); // 80348E68
  if (!crb(c,2)) { goto L_80348E78; } // 80348E6C
  c->r[3]=0u+0x00000001u; // 80348E70
  return; // 80348E74
L_80348E78:;
  c->r[3]=0u+0x803C0000u; // 80348E78
  c->r[3]=c->r[3]+0x000048D8u; // 80348E7C
  cmpu(c,0,c->r[4],c->r[3]); // 80348E80
  if (!crb(c,2)) { goto L_80348E90; } // 80348E84
  c->r[3]=0u+0x00000001u; // 80348E88
  return; // 80348E8C
L_80348E90:;
  c->r[3]=0u+0x803C0000u; // 80348E90
  c->r[3]=c->r[3]+0x000048C8u; // 80348E94
  c->r[0]=c->r[3]-c->r[4]; // 80348E98
  c->r[0]=cntlz(c->r[0]); // 80348E9C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80348EA0
  return; // 80348EA4
}

// fn_80348EA8
void f_80348EA8(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80348EA8
  c->r[0]=R32(c->r[4]+0x00000000u); // 80348EAC
  c->r[3]=c->r[3]+0x00004858u; // 80348EB0
  cmpu(c,0,c->r[0],c->r[3]); // 80348EB4
  if (!crb(c,2)) { goto L_80348EC4; } // 80348EB8
  c->r[3]=0u+0x00000001u; // 80348EBC
  return; // 80348EC0
L_80348EC4:;
  c->r[3]=0u+0x803C0000u; // 80348EC4
  c->r[0]=R32(c->r[4]+0x00000000u); // 80348EC8
  c->r[3]=c->r[3]+0x00004848u; // 80348ECC
  cmpu(c,0,c->r[0],c->r[3]); // 80348ED0
  if (!crb(c,2)) { goto L_80348EE0; } // 80348ED4
  c->r[3]=0u+0x00000001u; // 80348ED8
  return; // 80348EDC
L_80348EE0:;
  c->r[3]=0u+0x803C0000u; // 80348EE0
  c->r[3]=c->r[3]+0x000048D8u; // 80348EE4
  cmpu(c,0,c->r[0],c->r[3]); // 80348EE8
  if (!crb(c,2)) { goto L_80348EF8; } // 80348EEC
  c->r[3]=0u+0x00000001u; // 80348EF0
  return; // 80348EF4
L_80348EF8:;
  c->r[3]=0u+0x803C0000u; // 80348EF8
  c->r[3]=c->r[3]+0x000048C8u; // 80348EFC
  c->r[0]=c->r[3]-c->r[0]; // 80348F00
  c->r[0]=cntlz(c->r[0]); // 80348F04
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80348F08
  return; // 80348F0C
}

// fn_80348F10
void f_80348F10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80348F10
  c->r[0]=c->lr; // 80348F14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80348F18
  c->r[12]=R32(c->r[3]+0x00000000u); // 80348F1C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80348F20
  c->ctr=c->r[12]; // 80348F24
  if (true) { c->lr=0x80348F2Cu; dispatch(c,c->ctr); } // 80348F28
  c->r[0]=R32(c->r[1]+0x00000014u); // 80348F2C
  c->r[3]=c->r[3]+0x00000004u; // 80348F30
  c->lr=c->r[0]; // 80348F34
  c->r[1]=c->r[1]+0x00000010u; // 80348F38
  return; // 80348F3C
}

// fn_80348F40
void f_80348F40(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80348F40
  c->r[3]=c->r[3]+0x0000486Cu; // 80348F44
  return; // 80348F48
}

// __dt__Q34nw4r3g3d14AnmObjChrBlendFv
void f_80348F4C(Ctx* __restrict c) {
  trace_call(0x80348F4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80348F4C
  c->r[0]=c->lr; // 80348F50
  cmps(c,0,(int32_t)c->r[3],0); // 80348F54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80348F58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80348F5C
  c->r[31]=c->r[3]|c->r[3]; // 80348F60
  if (crb(c,2)) { goto L_80348F9C; } // 80348F64
  if (crb(c,2)) { goto L_80348F9C; } // 80348F68
  c->r[12]=0u+0x80540000u; // 80348F6C
  c->r[12]=c->r[12]+0x00007CC8u; // 80348F70
  W32(c->r[3]+0x00000000u,c->r[12]); // 80348F74
  c->r[12]=R32(c->r[12]+0x00000044u); // 80348F78
  c->ctr=c->r[12]; // 80348F7C
  if (true) { c->lr=0x80348F84u; dispatch(c,c->ctr); } // 80348F80
  cmps(c,0,(int32_t)c->r[31],0); // 80348F84
  if (crb(c,2)) { goto L_80348F9C; } // 80348F88
  if (crb(c,2)) { goto L_80348F9C; } // 80348F8C
  c->r[3]=c->r[31]|c->r[31]; // 80348F90
  c->r[4]=0u+0x00000000u; // 80348F94
  c->lr=0x80348F9Cu; f_8034A528(c); // 80348F98
L_80348F9C:;
  c->r[3]=c->r[31]|c->r[31]; // 80348F9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80348FA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80348FA4
  c->lr=c->r[0]; // 80348FA8
  c->r[1]=c->r[1]+0x00000010u; // 80348FAC
  return; // 80348FB0
}

// fn_80348FB4
void f_80348FB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80348FB4
  c->r[0]=c->lr; // 80348FB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80348FBC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80348FC0
  c->r[12]=R32(c->r[12]+0x00000014u); // 80348FC4
  c->ctr=c->r[12]; // 80348FC8
  if (true) { c->lr=0x80348FD0u; dispatch(c,c->ctr); } // 80348FCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80348FD0
  c->r[3]=c->r[3]+0x00000004u; // 80348FD4
  c->lr=c->r[0]; // 80348FD8
  c->r[1]=c->r[1]+0x00000010u; // 80348FDC
  return; // 80348FE0
}

// fn_80348FE4
void f_80348FE4(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80348FE4
  c->r[3]=c->r[3]+0x00004858u; // 80348FE8
  return; // 80348FEC
}

// fn_80348FF0
void f_80348FF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80348FF0
  c->r[0]=c->lr; // 80348FF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80348FF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80348FFC
  c->r[12]=R32(c->r[12]+0x00000014u); // 80349000
  c->ctr=c->r[12]; // 80349004
  if (true) { c->lr=0x8034900Cu; dispatch(c,c->ctr); } // 80349008
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034900C
  c->r[3]=c->r[3]+0x00000004u; // 80349010
  c->lr=c->r[0]; // 80349014
  c->r[1]=c->r[1]+0x00000010u; // 80349018
  return; // 8034901C
}

// fn_80349020
void f_80349020(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 80349020
  c->r[3]=c->r[3]+0x00004848u; // 80349024
  return; // 80349028
}

// TestExistence__Q34nw4r3g3d9AnmObjShpCFUl
void f_8034902C(Ctx* __restrict c) {
  trace_call(0x8034902Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8034902C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80349030
  c->r[0]=R16(c->r[3]+c->r[0]); // 80349034
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 80349038
  c->r[0]=cntlz(c->r[0]); // 8034903C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80349040
  return; // 80349044
}

// fn_80349048
void f_80349048(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80349048
  c->r[0]=c->lr; // 8034904C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80349050
  c->r[0]=R32(c->r[4]+0x00000004u); // 80349054
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80349058
  c->r[31]=c->r[4]|c->r[4]; // 8034905C
  W32(c->r[1]+0x00000048u,c->r[30]); // 80349060
  c->r[30]=c->r[3]|c->r[3]; // 80349064
  W32(c->r[1]+0x00000044u,c->r[29]); // 80349068
  c->r[29]=rotl(c->r[0],0)&0x00000003u; // 8034906C
  c->lr=0x80349074u; f_8035EE64(c); // 80349070
  cmps(c,0,(int32_t)c->r[29],1); // 80349074
  if (crb(c,2)) { goto L_80349114; } // 80349078
  if (!crb(c,0)) { goto L_8034908C; } // 8034907C
  cmps(c,0,(int32_t)c->r[29],0); // 80349080
  if (!crb(c,0)) { goto L_80349098; } // 80349084
  goto L_80349270; // 80349088
L_8034908C:;
  cmps(c,0,(int32_t)c->r[29],3); // 8034908C
  if (!crb(c,0)) { goto L_80349270; } // 80349090
  goto L_803491CC; // 80349094
L_80349098:;
  c->r[7]=R8(c->r[31]+0x00000020u); // 80349098
  c->r[4]=c->r[1]+0x00000010u; // 8034909C
  c->r[6]=R8(c->r[31]+0x00000021u); // 803490A0
  c->r[3]=c->r[30]|c->r[30]; // 803490A4
  c->r[5]=R8(c->r[31]+0x00000022u); // 803490A8
  c->r[0]=R8(c->r[31]+0x00000023u); // 803490AC
  W8(c->r[1]+0x00000010u,c->r[7]); // 803490B0
  W8(c->r[1]+0x00000011u,c->r[6]); // 803490B4
  W8(c->r[1]+0x00000012u,c->r[5]); // 803490B8
  W8(c->r[1]+0x00000013u,c->r[0]); // 803490BC
  c->lr=0x803490C4u; f_8035EE78(c); // 803490C0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803490C4
  c->r[3]=c->r[30]|c->r[30]; // 803490C8
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803490CC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 803490D0
  c->lr=0x803490D8u; f_8035EEC0(c); // 803490D4
  {uint32_t ea=c->r[2]+0xFFFFF038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803490D8
  c->r[3]=c->r[30]|c->r[30]; // 803490DC
  c->r[4]=0u+0x00000000u; // 803490E0
  c->lr=0x803490E8u; f_8035EF3C(c); // 803490E4
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 803490E8
  c->r[3]=c->r[30]|c->r[30]; // 803490EC
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803490F0
  c->r[4]=R32(c->r[31]+0x00000024u); // 803490F4
  c->lr=0x803490FCu; f_8035EFBC(c); // 803490F8
  {uint32_t ea=c->r[2]+0xFFFFF038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803490FC
  c->r[3]=c->r[30]|c->r[30]; // 80349100
  c->f[2]=c->f[1]; // 80349104
  c->f[3]=c->f[1]; // 80349108
  c->lr=0x80349110u; f_8035EEFC(c); // 8034910C
  goto L_80349270; // 80349110
L_80349114:;
  {uint32_t ea=c->r[31]+0x00000014u; psq_load(c,0,ea,0,0);} // 80349114
  c->r[4]=c->r[1]+0x0000000Cu; // 80349118
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,0,0);} // 8034911C
  c->r[3]=c->r[30]|c->r[30]; // 80349120
  c->r[7]=R8(c->r[31]+0x00000020u); // 80349124
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 80349128
  c->r[6]=R8(c->r[31]+0x00000021u); // 8034912C
  c->r[5]=R8(c->r[31]+0x00000022u); // 80349130
  c->r[0]=R8(c->r[31]+0x00000023u); // 80349134
  {double t0=c->f[2], t1=c->ps1[2]; c->f[4]=t0; c->ps1[4]=t1;} // 80349138
  {uint32_t ea=c->r[31]+0x0000001Cu; psq_load(c,0,ea,1,0);} // 8034913C
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,1,0);} // 80349140
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_store(c,2,ea,0,0);} // 80349144
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 80349148
  {uint32_t ea=c->r[2]+0xFFFFF03Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8034914C
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 80349150
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 80349154
  {uint32_t ea=c->r[1]+0x00000034u; psq_store(c,2,ea,1,0);} // 80349158
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 8034915C
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 80349160
  W8(c->r[1]+0x0000000Du,c->r[6]); // 80349164
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,1,0);} // 80349168
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 8034916C
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80349170
  c->lr=0x80349178u; f_8035EE78(c); // 80349174
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349178
  c->r[3]=c->r[30]|c->r[30]; // 8034917C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80349180
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80349184
  c->lr=0x8034918Cu; f_8035EEC0(c); // 80349188
  {uint32_t ea=c->r[2]+0xFFFFF038u; c->f[2]=c->ps1[2]=RF32(ea);} // 8034918C
  c->r[3]=c->r[30]|c->r[30]; // 80349190
  {uint32_t ea=c->r[2]+0xFFFFF040u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349194
  c->f[3]=c->f[2]; // 80349198
  c->lr=0x803491A0u; f_8035EF7C(c); // 8034919C
  {uint32_t ea=c->r[2]+0xFFFFF038u; c->f[2]=c->ps1[2]=RF32(ea);} // 803491A0
  c->r[3]=c->r[30]|c->r[30]; // 803491A4
  {uint32_t ea=c->r[2]+0xFFFFF040u; c->f[1]=c->ps1[1]=RF32(ea);} // 803491A8
  c->f[3]=c->f[2]; // 803491AC
  c->lr=0x803491B4u; f_8035EFFC(c); // 803491B0
  {uint32_t ea=c->r[2]+0xFFFFF038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803491B4
  c->r[3]=c->r[30]|c->r[30]; // 803491B8
  c->f[2]=c->f[1]; // 803491BC
  c->f[3]=c->f[1]; // 803491C0
  c->lr=0x803491C8u; f_8035EEFC(c); // 803491C4
  goto L_80349270; // 803491C8
L_803491CC:;
  {uint32_t ea=c->r[31]+0x00000014u; psq_load(c,0,ea,0,0);} // 803491CC
  c->r[3]=c->r[1]+0x00000014u; // 803491D0
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,0,0);} // 803491D4
  c->r[4]=c->r[3]|c->r[3]; // 803491D8
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 803491DC
  {uint32_t ea=c->r[31]+0x0000001Cu; psq_load(c,0,ea,1,0);} // 803491E0
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,1,0);} // 803491E4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 803491E8
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 803491EC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,2,ea,1,0);} // 803491F0
  c->lr=0x803491F8u; f_80296AB0(c); // 803491F4
  c->r[7]=R8(c->r[31]+0x00000020u); // 803491F8
  c->r[4]=c->r[1]+0x00000008u; // 803491FC
  c->r[6]=R8(c->r[31]+0x00000021u); // 80349200
  c->r[3]=c->r[30]|c->r[30]; // 80349204
  c->r[5]=R8(c->r[31]+0x00000022u); // 80349208
  c->r[0]=R8(c->r[31]+0x00000023u); // 8034920C
  W8(c->r[1]+0x00000008u,c->r[7]); // 80349210
  W8(c->r[1]+0x00000009u,c->r[6]); // 80349214
  W8(c->r[1]+0x0000000Au,c->r[5]); // 80349218
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8034921C
  c->lr=0x80349224u; f_8035EE78(c); // 80349220
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349224
  c->r[3]=c->r[30]|c->r[30]; // 80349228
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8034922C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80349230
  c->lr=0x80349238u; f_8035EEC0(c); // 80349234
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349238
  c->r[3]=c->r[30]|c->r[30]; // 8034923C
  c->r[4]=R32(c->r[31]+0x00000030u); // 80349240
  c->lr=0x80349248u; f_8035EF3C(c); // 80349244
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349248
  c->r[3]=c->r[30]|c->r[30]; // 8034924C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80349250
  c->r[4]=R32(c->r[31]+0x00000024u); // 80349254
  c->lr=0x8034925Cu; f_8035EFBC(c); // 80349258
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034925C
  c->r[3]=c->r[30]|c->r[30]; // 80349260
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80349264
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80349268
  c->lr=0x80349270u; f_8035EEFC(c); // 8034926C
L_80349270:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 80349270
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80349274
  if (!crb(c,2)) { goto L_80349288; } // 80349278
  c->r[0]=R32(c->r[30]+0x00000000u); // 8034927C
  c->r[0]=c->r[0]|0x00000010u; // 80349280
  W32(c->r[30]+0x00000000u,c->r[0]); // 80349284
L_80349288:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 80349288
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 8034928C
  if (!crb(c,2)) { goto L_803492A0; } // 80349290
  c->r[0]=R32(c->r[30]+0x00000000u); // 80349294
  c->r[0]=c->r[0]|0x00000020u; // 80349298
  W32(c->r[30]+0x00000000u,c->r[0]); // 8034929C
L_803492A0:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 803492A0
  c->r[0]=c->r[0]|0x00000004u; // 803492A4
  W32(c->r[30]+0x00000000u,c->r[0]); // 803492A8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 803492AC
  c->r[30]=R32(c->r[1]+0x00000048u); // 803492B0
  c->r[29]=R32(c->r[1]+0x00000044u); // 803492B4
  c->r[0]=R32(c->r[1]+0x00000054u); // 803492B8
  c->lr=c->r[0]; // 803492BC
  c->r[1]=c->r[1]+0x00000050u; // 803492C0
  return; // 803492C4
}

// fn_803492C8
void f_803492C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803492C8
  c->r[0]=c->lr; // 803492CC
  W32(c->r[1]+0x00000064u,c->r[0]); // 803492D0
  c->r[11]=c->r[1]+0x00000060u; // 803492D4
  c->lr=0x803492DCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803492D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803492DC
  c->r[28]=c->r[3]|c->r[3]; // 803492E0
  c->r[29]=c->r[4]|c->r[4]; // 803492E4
  c->r[12]=R32(c->r[12]+0x00000050u); // 803492E8
  c->ctr=c->r[12]; // 803492EC
  if (true) { c->lr=0x803492F4u; dispatch(c,c->ctr); } // 803492F0
  W32(c->r[1]+0x00000024u,c->r[3]); // 803492F4
  c->r[3]=c->r[28]|c->r[28]; // 803492F8
  c->r[12]=R32(c->r[28]+0x00000000u); // 803492FC
  c->r[12]=R32(c->r[12]+0x00000054u); // 80349300
  c->ctr=c->r[12]; // 80349304
  if (true) { c->lr=0x8034930Cu; dispatch(c,c->ctr); } // 80349308
  W32(c->r[1]+0x00000020u,c->r[3]); // 8034930C
  c->r[3]=c->r[28]|c->r[28]; // 80349310
  c->r[12]=R32(c->r[28]+0x00000000u); // 80349314
  c->r[12]=R32(c->r[12]+0x00000058u); // 80349318
  c->ctr=c->r[12]; // 8034931C
  if (true) { c->lr=0x80349324u; dispatch(c,c->ctr); } // 80349320
  c->r[0]=R32(c->r[1]+0x00000024u); // 80349324
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80349328
  cmps(c,0,(int32_t)c->r[0],0); // 8034932C
  if (crb(c,2)) { goto L_803493A0; } // 80349330
  c->r[4]=R16(c->r[29]+0x00000002u); // 80349334
  c->r[3]=c->r[1]+0x00000024u; // 80349338
  cmpu(c,0,c->r[4],c->r[0]); // 8034933C
  W32(c->r[1]+0x00000018u,c->r[4]); // 80349340
  if (!crb(c,0)) { goto L_8034934C; } // 80349344
  c->r[3]=c->r[1]+0x00000018u; // 80349348
L_8034934C:;
  c->r[27]=R32(c->r[3]+0x00000000u); // 8034934C
  c->r[30]=0u+0x00000000u; // 80349350
  goto L_80349398; // 80349354
L_80349358:;
  c->r[4]=c->r[29]|c->r[29]; // 80349358
  c->r[5]=c->r[30]|c->r[30]; // 8034935C
  c->r[3]=c->r[1]+0x00000030u; // 80349360
  c->lr=0x80349368u; f_802592D8(c); // 80349364
  c->r[4]=R32(c->r[1]+0x00000030u); // 80349368
  c->r[3]=c->r[28]|c->r[28]; // 8034936C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80349370
  c->r[5]=c->r[30]|c->r[30]; // 80349374
  W32(c->r[1]+0x00000028u,c->r[4]); // 80349378
  c->r[4]=c->r[1]+0x00000028u; // 8034937C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80349380
  c->r[12]=R32(c->r[28]+0x00000000u); // 80349384
  c->r[12]=R32(c->r[12]+0x00000064u); // 80349388
  c->ctr=c->r[12]; // 8034938C
  if (true) { c->lr=0x80349394u; dispatch(c,c->ctr); } // 80349390
  c->r[30]=c->r[30]+0x00000001u; // 80349394
L_80349398:;
  cmpu(c,0,c->r[30],c->r[27]); // 80349398
  if (crb(c,0)) { IRQCHK(c); goto L_80349358; } // 8034939C
L_803493A0:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 803493A0
  cmps(c,0,(int32_t)c->r[0],0); // 803493A4
  if (crb(c,2)) { goto L_80349408; } // 803493A8
  c->r[4]=R16(c->r[29]+0x00000000u); // 803493AC
  c->r[3]=c->r[1]+0x00000020u; // 803493B0
  c->r[27]=R32(c->r[29]+0x00000008u); // 803493B4
  cmpu(c,0,c->r[4],c->r[0]); // 803493B8
  W32(c->r[1]+0x00000014u,c->r[4]); // 803493BC
  if (!crb(c,0)) { goto L_803493C8; } // 803493C0
  c->r[3]=c->r[1]+0x00000014u; // 803493C4
L_803493C8:;
  c->r[30]=R32(c->r[3]+0x00000000u); // 803493C8
  c->r[31]=0u+0x00000000u; // 803493CC
  goto L_80349400; // 803493D0
L_803493D4:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 803493D4
  c->r[4]=c->r[28]|c->r[28]; // 803493D8
  c->r[5]=c->r[31]|c->r[31]; // 803493DC
  c->r[3]=c->r[1]+0x00000008u; // 803493E0
  c->r[12]=R32(c->r[12]+0x00000068u); // 803493E4
  c->ctr=c->r[12]; // 803493E8
  if (true) { c->lr=0x803493F0u; dispatch(c,c->ctr); } // 803493EC
  c->r[0]=R32(c->r[1]+0x00000008u); // 803493F0
  c->r[31]=c->r[31]+0x00000001u; // 803493F4
  W32(c->r[27]+0x00000000u,c->r[0]); // 803493F8
  c->r[27]=c->r[27]+0x00000004u; // 803493FC
L_80349400:;
  cmpu(c,0,c->r[31],c->r[30]); // 80349400
  if (crb(c,0)) { IRQCHK(c); goto L_803493D4; } // 80349404
L_80349408:;
  c->r[27]=R32(c->r[1]+0x0000001Cu); // 80349408
  cmps(c,0,(int32_t)c->r[27],0); // 8034940C
  if (crb(c,2)) { goto L_803495C4; } // 80349410
  c->r[31]=R32(c->r[29]+0x00000004u); // 80349414
  c->r[3]=c->r[28]|c->r[28]; // 80349418
  c->r[29]=R16(c->r[29]+0x00000000u); // 8034941C
  W32(c->r[1]+0x00000010u,c->r[29]); // 80349420
  c->r[12]=R32(c->r[28]+0x00000000u); // 80349424
  c->r[12]=R32(c->r[12]+0x00000044u); // 80349428
  c->ctr=c->r[12]; // 8034942C
  if (true) { c->lr=0x80349434u; dispatch(c,c->ctr); } // 80349430
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 80349434
  c->r[0]=c->r[27]+c->r[3]; // 80349438
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8034943C
  c->r[3]=c->r[1]+0x0000001Cu; // 80349440
  cmpu(c,0,c->r[29],c->r[4]); // 80349444
  if (!crb(c,0)) { goto L_80349450; } // 80349448
  c->r[3]=c->r[1]+0x00000010u; // 8034944C
L_80349450:;
  cmpu(c,0,c->r[29],c->r[0]); // 80349450
  c->r[30]=R32(c->r[3]+0x00000000u); // 80349454
  c->r[3]=c->r[1]+0x0000000Cu; // 80349458
  if (!crb(c,0)) { goto L_80349464; } // 8034945C
  c->r[3]=c->r[1]+0x00000010u; // 80349460
L_80349464:;
  cmps(c,0,(int32_t)c->r[30],0); // 80349464
  c->r[29]=R32(c->r[3]+0x00000000u); // 80349468
  c->r[5]=0u+0x00000000u; // 8034946C
  if (crb(c,2)) { goto L_80349530; } // 80349470
  cmpu(c,0,c->r[30],0x00000008u); // 80349474
  c->r[3]=c->r[30]+0xFFFFFFF8u; // 80349478
  if (!crb(c,1)) { goto L_80349504; } // 8034947C
  c->r[0]=c->r[3]+0x00000007u; // 80349480
  c->r[4]=c->r[31]|c->r[31]; // 80349484
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80349488
  c->ctr=c->r[0]; // 8034948C
  cmpu(c,0,c->r[3],0x00000000u); // 80349490
  if (!crb(c,1)) { goto L_80349504; } // 80349494
L_80349498:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80349498
  c->r[5]=c->r[5]+0x00000008u; // 8034949C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 803494A0
  W32(c->r[4]+0x00000000u,c->r[0]); // 803494A4
  c->r[0]=R32(c->r[4]+0x00000044u); // 803494A8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 803494AC
  W32(c->r[4]+0x00000044u,c->r[0]); // 803494B0
  c->r[0]=R32(c->r[4]+0x00000088u); // 803494B4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 803494B8
  W32(c->r[4]+0x00000088u,c->r[0]); // 803494BC
  c->r[0]=R32(c->r[4]+0x000000CCu); // 803494C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 803494C4
  W32(c->r[4]+0x000000CCu,c->r[0]); // 803494C8
  c->r[0]=R32(c->r[4]+0x00000110u); // 803494CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 803494D0
  W32(c->r[4]+0x00000110u,c->r[0]); // 803494D4
  c->r[0]=R32(c->r[4]+0x00000154u); // 803494D8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 803494DC
  W32(c->r[4]+0x00000154u,c->r[0]); // 803494E0
  c->r[0]=R32(c->r[4]+0x00000198u); // 803494E4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 803494E8
  W32(c->r[4]+0x00000198u,c->r[0]); // 803494EC
  c->r[0]=R32(c->r[4]+0x000001DCu); // 803494F0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 803494F4
  W32(c->r[4]+0x000001DCu,c->r[0]); // 803494F8
  c->r[4]=c->r[4]+0x00000220u; // 803494FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80349498; } // 80349500
L_80349504:;
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 80349504
  c->r[0]=c->r[30]-c->r[5]; // 80349508
  c->r[3]=c->r[31]+c->r[3]; // 8034950C
  c->ctr=c->r[0]; // 80349510
  cmpu(c,0,c->r[5],c->r[30]); // 80349514
  if (!crb(c,0)) { goto L_80349530; } // 80349518
L_8034951C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8034951C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80349520
  W32(c->r[3]+0x00000000u,c->r[0]); // 80349524
  c->r[3]=c->r[3]+0x00000044u; // 80349528
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8034951C; } // 8034952C
L_80349530:;
  c->r[27]=c->r[31]|c->r[31]; // 80349530
  c->r[26]=0u+0x00000000u; // 80349534
  goto L_803495BC; // 80349538
L_8034953C:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 8034953C
  c->r[25]=0u+0x00000000u; // 80349540
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80349544
  if (!crb(c,2)) { goto L_803495B4; } // 80349548
  c->r[12]=R32(c->r[28]+0x00000000u); // 8034954C
  c->r[3]=c->r[28]|c->r[28]; // 80349550
  c->r[4]=c->r[26]|c->r[26]; // 80349554
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 80349558
  c->ctr=c->r[12]; // 8034955C
  if (true) { c->lr=0x80349564u; dispatch(c,c->ctr); } // 80349560
  cmps(c,0,(int32_t)c->r[3],0); // 80349564
  if (crb(c,2)) { goto L_80349594; } // 80349568
  c->r[12]=R32(c->r[28]+0x00000000u); // 8034956C
  c->r[3]=c->r[28]|c->r[28]; // 80349570
  c->r[4]=c->r[26]|c->r[26]; // 80349574
  c->r[12]=R32(c->r[12]+0x00000078u); // 80349578
  c->ctr=c->r[12]; // 8034957C
  if (true) { c->lr=0x80349584u; dispatch(c,c->ctr); } // 80349580
  cmpu(c,0,c->r[3],c->r[29]); // 80349584
  if (!crb(c,0)) { goto L_80349594; } // 80349588
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 8034958C
  c->r[25]=c->r[31]+c->r[0]; // 80349590
L_80349594:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 80349594
  c->r[3]=c->r[28]|c->r[28]; // 80349598
  c->r[4]=c->r[27]|c->r[27]; // 8034959C
  c->r[5]=c->r[25]|c->r[25]; // 803495A0
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 803495A4
  c->r[6]=c->r[26]|c->r[26]; // 803495A8
  c->ctr=c->r[12]; // 803495AC
  if (true) { c->lr=0x803495B4u; dispatch(c,c->ctr); } // 803495B0
L_803495B4:;
  c->r[27]=c->r[27]+0x00000044u; // 803495B4
  c->r[26]=c->r[26]+0x00000001u; // 803495B8
L_803495BC:;
  cmpu(c,0,c->r[26],c->r[30]); // 803495BC
  if (crb(c,0)) { IRQCHK(c); goto L_8034953C; } // 803495C0
L_803495C4:;
  c->r[11]=c->r[1]+0x00000060u; // 803495C4
  c->lr=0x803495CCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803495C8
  c->r[0]=R32(c->r[1]+0x00000064u); // 803495CC
  c->lr=c->r[0]; // 803495D0
  c->r[1]=c->r[1]+0x00000060u; // 803495D4
  return; // 803495D8
}

// fn_803495DC
void f_803495DC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 803495DC
  return; // 803495E0
}

// fn_803495E4
void f_803495E4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 803495E4
  return; // 803495E8
}

// fn_803495EC
void f_803495EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803495EC
  c->r[0]=c->lr; // 803495F0
  cmps(c,0,(int32_t)c->r[3],0); // 803495F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803495F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803495FC
  c->r[31]=c->r[3]|c->r[3]; // 80349600
  if (crb(c,2)) { goto L_80349610; } // 80349604
  c->r[4]=0u+0x00000000u; // 80349608
  c->lr=0x80349610u; f_8034A528(c); // 8034960C
L_80349610:;
  c->r[3]=c->r[31]|c->r[31]; // 80349610
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80349614
  c->r[0]=R32(c->r[1]+0x00000014u); // 80349618
  c->lr=c->r[0]; // 8034961C
  c->r[1]=c->r[1]+0x00000010u; // 80349620
  return; // 80349624
}

// fn_80349628
void f_80349628(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000020u; // 80349628
  f_80343DF4(c); return; // 8034962C
}

// fn_80349630
void f_80349630(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000020u; // 80349630
  f_80343FA8(c); return; // 80349634
}

// fn_80349638
void f_80349638(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000020u; // 80349638
  f_803441DC(c); return; // 8034963C
}

// fn_80349640
void f_80349640(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 80349640
  c->r[3]=R16(c->r[3]+0x00000032u); // 80349644
  return; // 80349648
}

// fn_8034964C
void f_8034964C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 8034964C
  c->r[3]=R16(c->r[3]+0x00000038u); // 80349650
  return; // 80349654
}

// fn_80349658
void f_80349658(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 80349658
  c->r[3]=R16(c->r[3]+0x0000003Au); // 8034965C
  return; // 80349660
}

// fn_80349664
void f_80349664(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 80349664
  c->r[3]=R16(c->r[3]+0x0000003Cu); // 80349668
  return; // 8034966C
}

// fn_80349670
void f_80349670(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 80349670
  c->r[3]=R16(c->r[3]+0x0000003Eu); // 80349674
  return; // 80349678
}

// fn_8034967C
void f_8034967C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 8034967C
  c->r[3]=R16(c->r[3]+0x00000040u); // 80349680
  return; // 80349684
}

// fn_80349688
void f_80349688(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80349688
  c->r[0]=c->lr; // 8034968C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80349690
  c->r[11]=c->r[1]+0x00000040u; // 80349694
  c->lr=0x8034969Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80349698
  c->r[0]=R32(c->r[5]+0x00000000u); // 8034969C
  c->r[29]=c->r[3]|c->r[3]; // 803496A0
  c->r[30]=c->r[4]|c->r[4]; // 803496A4
  c->r[31]=c->r[5]|c->r[5]; // 803496A8
  cmps(c,0,(int32_t)c->r[0],0); // 803496AC
  c->r[22]=c->r[6]|c->r[6]; // 803496B0
  if (!crb(c,2)) { goto L_803496C0; } // 803496B4
  c->r[3]=0u+0x00000000u; // 803496B8
  goto L_80349804; // 803496BC
L_803496C0:;
  cmps(c,0,(int32_t)c->r[6],0); // 803496C0
  if (crb(c,2)) { goto L_803496D8; } // 803496C4
  c->r[3]=c->r[31]|c->r[31]; // 803496C8
  c->lr=0x803496D0u; f_80343FA8(c); // 803496CC
  c->r[26]=c->r[3]|c->r[3]; // 803496D0
  goto L_803496DC; // 803496D4
L_803496D8:;
  c->r[26]=0u+0x00000000u; // 803496D8
L_803496DC:;
  cmps(c,0,(int32_t)c->r[22],0); // 803496DC
  if (crb(c,2)) { goto L_803496F4; } // 803496E0
  c->r[3]=c->r[31]|c->r[31]; // 803496E4
  c->lr=0x803496ECu; f_803441DC(c); // 803496E8
  c->r[27]=c->r[3]|c->r[3]; // 803496EC
  goto L_803496F8; // 803496F0
L_803496F4:;
  c->r[27]=0u+0x00000000u; // 803496F4
L_803496F8:;
  cmps(c,0,(int32_t)c->r[22],0); // 803496F8
  if (crb(c,2)) { goto L_80349710; } // 803496FC
  c->r[3]=c->r[31]|c->r[31]; // 80349700
  c->lr=0x80349708u; f_80344308(c); // 80349704
  c->r[28]=c->r[3]|c->r[3]; // 80349708
  goto L_80349714; // 8034970C
L_80349710:;
  c->r[28]=0u+0x00000000u; // 80349710
L_80349714:;
  cmps(c,0,(int32_t)c->r[22],0); // 80349714
  if (crb(c,2)) { goto L_80349728; } // 80349718
  c->r[3]=c->r[31]|c->r[31]; // 8034971C
  c->lr=0x80349724u; f_803444B4(c); // 80349720
  goto L_8034972C; // 80349724
L_80349728:;
  c->r[3]=0u+0x00000000u; // 80349728
L_8034972C:;
  c->r[25]=rotl(c->r[26],3)&0xFFFFFFF8u; // 8034972C
  c->r[24]=rotl(c->r[27],6)&0xFFFFFFC0u; // 80349730
  c->r[0]=c->r[25]+0x0000003Bu; // 80349734
  c->r[23]=rotl(c->r[28],4)&0xFFFFFFF0u; // 80349738
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8034973C
  cmps(c,0,(int32_t)c->r[30],0); // 80349740
  c->r[4]=c->r[26]+c->r[24]; // 80349744
  c->r[0]=c->r[4]+0x00000003u; // 80349748
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8034974C
  c->r[4]=c->r[27]+c->r[23]; // 80349750
  c->r[0]=c->r[4]+0x00000003u; // 80349754
  c->r[22]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 80349758
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8034975C
  c->r[3]=c->r[28]+c->r[22]; // 80349760
  c->r[0]=c->r[3]+0x00000003u; // 80349764
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80349768
  if (crb(c,2)) { goto L_80349774; } // 8034976C
  W32(c->r[30]+0x00000000u,c->r[4]); // 80349770
L_80349774:;
  cmps(c,0,(int32_t)c->r[29],0); // 80349774
  if (!crb(c,2)) { goto L_80349784; } // 80349778
  c->r[3]=0u+0x00000000u; // 8034977C
  goto L_80349804; // 80349780
L_80349784:;
  c->r[3]=c->r[29]|c->r[29]; // 80349784
  c->lr=0x8034978Cu; f_802CF59C(c); // 80349788
  cmps(c,0,(int32_t)c->r[3],0); // 8034978C
  if (!crb(c,2)) { goto L_8034979C; } // 80349790
  c->r[3]=0u+0x00000000u; // 80349794
  goto L_80349804; // 80349798
L_8034979C:;
  if (crb(c,2)) { goto L_80349804; } // 8034979C
  cmps(c,0,(int32_t)c->r[22],0); // 803497A0
  if (crb(c,2)) { goto L_803497B0; } // 803497A4
  c->r[9]=c->r[3]+c->r[28]; // 803497A8
  goto L_803497B4; // 803497AC
L_803497B0:;
  c->r[9]=0u+0x00000000u; // 803497B0
L_803497B4:;
  cmps(c,0,(int32_t)c->r[23],0); // 803497B4
  if (crb(c,2)) { goto L_803497C4; } // 803497B8
  c->r[8]=c->r[3]+c->r[27]; // 803497BC
  goto L_803497C8; // 803497C0
L_803497C4:;
  c->r[8]=0u+0x00000000u; // 803497C4
L_803497C8:;
  cmps(c,0,(int32_t)c->r[24],0); // 803497C8
  if (crb(c,2)) { goto L_803497D8; } // 803497CC
  c->r[7]=c->r[3]+c->r[26]; // 803497D0
  goto L_803497DC; // 803497D4
L_803497D8:;
  c->r[7]=0u+0x00000000u; // 803497D8
L_803497DC:;
  cmps(c,0,(int32_t)c->r[25],0); // 803497DC
  if (crb(c,2)) { goto L_803497EC; } // 803497E0
  c->r[6]=c->r[3]+0x00000038u; // 803497E4
  goto L_803497F0; // 803497E8
L_803497EC:;
  c->r[6]=0u+0x00000000u; // 803497EC
L_803497F0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 803497F0
  c->r[4]=c->r[29]|c->r[29]; // 803497F4
  c->r[5]=c->r[1]+0x00000008u; // 803497F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 803497FC
  c->lr=0x80349804u; f_8034981C(c); // 80349800
L_80349804:;
  c->r[11]=c->r[1]+0x00000040u; // 80349804
  c->lr=0x8034980Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80349808
  c->r[0]=R32(c->r[1]+0x00000044u); // 8034980C
  c->lr=c->r[0]; // 80349810
  c->r[1]=c->r[1]+0x00000040u; // 80349814
  return; // 80349818
}

// fn_8034981C
void f_8034981C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034981C
  c->r[0]=c->lr; // 80349820
  c->r[12]=0u+0x80540000u; // 80349824
  c->r[10]=0u+0x80540000u; // 80349828
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034982C
  c->r[0]=0u+0x43300000u; // 80349830
  c->r[12]=c->r[12]+0x00007E08u; // 80349834
  {uint32_t ea=c->r[2]+0xFFFFF048u; c->f[3]=RF64(ea);} // 80349838
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034983C
  c->r[31]=0u+0x00000000u; // 80349840
  c->r[11]=c->r[13]+0xFFFF8000u; // 80349844
  {uint32_t ea=c->r[2]+0xFFFFF038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349848
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034984C
  cmps(c,0,(int32_t)c->r[6],0); // 80349850
  c->r[30]=R32(c->r[5]+0x00000000u); // 80349854
  c->r[10]=c->r[10]+0x00007D78u; // 80349858
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034985C
  c->r[29]=c->r[3]|c->r[3]; // 80349860
  {uint32_t ea=c->r[2]+0xFFFFF040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80349864
  W32(c->r[3]+0x00000004u,c->r[31]); // 80349868
  W32(c->r[3]+0x00000008u,c->r[4]); // 8034986C
  W32(c->r[3]+0x00000000u,c->r[12]); // 80349870
  c->r[4]=R16(c->r[30]+0x00000030u); // 80349874
  c->r[12]=R32(c->r[30]+0x00000034u); // 80349878
  c->r[4]=c->r[4]^0x80000000u; // 8034987C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80349880
  c->r[0]=rotl(c->r[12],2)&0xFFFFFFFCu; // 80349884
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80349888
  c->r[4]=R32(c->r[11]+c->r[0]); // 8034988C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 80349890
  c->r[0]=R32(c->r[5]+0x00000000u); // 80349894
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80349898
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 8034989C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 803498A0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 803498A4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 803498A8
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 803498AC
  W32(c->r[3]+0x00000000u,c->r[10]); // 803498B0
  W32(c->r[3]+0x00000020u,c->r[0]); // 803498B4
  W32(c->r[3]+0x00000024u,c->r[31]); // 803498B8
  W32(c->r[3]+0x00000028u,c->r[6]); // 803498BC
  W32(c->r[3]+0x0000002Cu,c->r[7]); // 803498C0
  W32(c->r[3]+0x00000030u,c->r[8]); // 803498C4
  W32(c->r[3]+0x00000034u,c->r[9]); // 803498C8
  if (!crb(c,2)) { goto L_803498E8; } // 803498CC
  cmps(c,0,(int32_t)c->r[7],0); // 803498D0
  if (!crb(c,2)) { goto L_803498E8; } // 803498D4
  cmps(c,0,(int32_t)c->r[8],0); // 803498D8
  if (!crb(c,2)) { goto L_803498E8; } // 803498DC
  cmps(c,0,(int32_t)c->r[9],0); // 803498E0
  if (crb(c,2)) { goto L_803498F4; } // 803498E4
L_803498E8:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 803498E8
  c->r[0]=c->r[0]|0x00000001u; // 803498EC
  W32(c->r[3]+0x00000024u,c->r[0]); // 803498F0
L_803498F4:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 803498F4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803498F8
  if (crb(c,2)) { goto L_80349908; } // 803498FC
  c->r[3]=c->r[29]|c->r[29]; // 80349900
  c->lr=0x80349908u; f_8034A2B4(c); // 80349904
L_80349908:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80349908
  c->r[3]=c->r[29]|c->r[29]; // 8034990C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80349910
  c->r[29]=R32(c->r[1]+0x00000014u); // 80349914
  c->r[0]=R32(c->r[1]+0x00000024u); // 80349918
  c->lr=c->r[0]; // 8034991C
  c->r[1]=c->r[1]+0x00000020u; // 80349920
  return; // 80349924
}

// fn_80349928
void f_80349928(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80349928
  c->r[0]=c->lr; // 8034992C
  cmps(c,0,(int32_t)c->r[3],0); // 80349930
  W32(c->r[1]+0x00000014u,c->r[0]); // 80349934
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80349938
  c->r[31]=c->r[3]|c->r[3]; // 8034993C
  if (crb(c,2)) { goto L_80349950; } // 80349940
  if (crb(c,2)) { goto L_80349950; } // 80349944
  c->r[4]=0u+0x00000000u; // 80349948
  c->lr=0x80349950u; f_8034A528(c); // 8034994C
L_80349950:;
  c->r[3]=c->r[31]|c->r[31]; // 80349950
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80349954
  c->r[0]=R32(c->r[1]+0x00000014u); // 80349958
  c->lr=c->r[0]; // 8034995C
  c->r[1]=c->r[1]+0x00000010u; // 80349960
  return; // 80349964
}

// fn_80349968
void f_80349968(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80349968
  c->r[0]=c->lr; // 8034996C
  c->f[3]=c->f[1]; // 80349970
  W32(c->r[1]+0x00000014u,c->r[0]); // 80349974
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80349978
  c->r[31]=c->r[3]|c->r[3]; // 8034997C
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80349980
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349984
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80349988
  c->ctr=c->r[12]; // 8034998C
  if (true) { c->lr=0x80349994u; dispatch(c,c->ctr); } // 80349990
  c->r[0]=R32(c->r[31]+0x00000024u); // 80349994
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 80349998
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8034999C
  if (crb(c,2)) { goto L_803499AC; } // 803499A0
  c->r[3]=c->r[31]|c->r[31]; // 803499A4
  c->lr=0x803499ACu; f_8034A2B4(c); // 803499A8
L_803499AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803499AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803499B0
  c->lr=c->r[0]; // 803499B4
  c->r[1]=c->r[1]+0x00000010u; // 803499B8
  return; // 803499BC
}

// fn_803499C0
void f_803499C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803499C0
  return; // 803499C4
}

// fn_803499C8
void f_803499C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFF038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803499C8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 803499CC
  fcmp(c,0,c->f[0],c->f[1]); // 803499D0
  if (!crb(c,2)) return; // 803499D4
  c->r[0]=R32(c->r[3]+0x00000024u); // 803499D8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803499DC
  if (crb(c,2)) return; // 803499E0
  f_8034A2B4(c); return; // 803499E4
  return; // 803499E8
}

// fn_803499EC
void f_803499EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803499EC
  return; // 803499F0
}

// fn_803499F4
void f_803499F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803499F4
  c->r[0]=c->lr; // 803499F8
  {uint32_t ea=c->r[2]+0xFFFFF038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803499FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80349A00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80349A04
  c->r[31]=c->r[3]|c->r[3]; // 80349A08
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349A0C
  fcmp(c,0,c->f[0],c->f[1]); // 80349A10
  if (crb(c,2)) { goto L_80349A58; } // 80349A14
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80349A18
  {uint32_t ea=c->r[13]+0xFFFFAA00u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349A1C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80349A20
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 80349A24
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80349A28
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349A2C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80349A30
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 80349A34
  c->ctr=c->r[12]; // 80349A38
  if (true) { c->lr=0x80349A40u; dispatch(c,c->ctr); } // 80349A3C
  c->r[0]=R32(c->r[31]+0x00000024u); // 80349A40
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 80349A44
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80349A48
  if (crb(c,2)) { goto L_80349A58; } // 80349A4C
  c->r[3]=c->r[31]|c->r[31]; // 80349A50
  c->lr=0x80349A58u; f_8034A2B4(c); // 80349A54
L_80349A58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80349A58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80349A5C
  c->lr=c->r[0]; // 80349A60
  c->r[1]=c->r[1]+0x00000010u; // 80349A64
  return; // 80349A68
}

// fn_80349A6C
void f_80349A6C(Ctx* __restrict c) {
  c->r[5]=0u+0x00010000u; // 80349A6C
  c->r[0]=c->r[5]+0x00000002u; // 80349A70
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80349A74
  if (crb(c,2)) { goto L_80349AB8; } // 80349A78
  if (!crb(c,0)) { goto L_80349A8C; } // 80349A7C
  cmps(c,0,(int32_t)c->r[4],8); // 80349A80
  if (crb(c,2)) { goto L_80349A9C; } // 80349A84
  return; // 80349A88
L_80349A8C:;
  c->r[0]=c->r[5]+0x00000004u; // 80349A8C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80349A90
  if (!crb(c,0)) return; // 80349A94
  goto L_80349AAC; // 80349A98
L_80349A9C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80349A9C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80349AA0
  c->ctr=c->r[12]; // 80349AA4
  if (true) { dispatch(c,c->ctr); return; } // 80349AA8
L_80349AAC:;
  c->r[0]=0u+0x00000000u; // 80349AAC
  W32(c->r[3]+0x00000004u,c->r[0]); // 80349AB0
  return; // 80349AB4
L_80349AB8:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 80349AB8
  return; // 80349ABC
}

// fn_80349AC0
void f_80349AC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80349AC0
  c->r[0]=c->lr; // 80349AC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80349AC8
  c->r[11]=c->r[1]+0x00000030u; // 80349ACC
  c->lr=0x80349AD4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80349AD0
  c->r[24]=c->r[3]|c->r[3]; // 80349AD4
  c->r[25]=c->r[4]|c->r[4]; // 80349AD8
  c->r[4]=c->r[5]|c->r[5]; // 80349ADC
  c->r[3]=c->r[3]+0x00000020u; // 80349AE0
  c->lr=0x80349AE8u; f_80344534(c); // 80349AE4
  cmps(c,0,(int32_t)c->r[3],0); // 80349AE8
  c->r[30]=c->r[3]|c->r[3]; // 80349AEC
  if (!crb(c,2)) { goto L_80349AFC; } // 80349AF0
  c->r[3]=0u+0x00000000u; // 80349AF4
  goto L_80349BE0; // 80349AF8
L_80349AFC:;
  c->r[26]=R8(c->r[3]+0x0000001Au); // 80349AFC
  c->r[28]=0u+0x00000007u; // 80349B00
  c->r[27]=0u+0x00000000u; // 80349B04
  cmps(c,0,(int32_t)c->r[26],0); // 80349B08
  if (crb(c,2)) { goto L_80349B9C; } // 80349B0C
  c->r[29]=c->r[30]|c->r[30]; // 80349B10
  goto L_80349B7C; // 80349B14
L_80349B18:;
  c->r[4]=R16(c->r[29]+0x0000003Cu); // 80349B18
  cmpu(c,0,c->r[4],0x0000FFFFu); // 80349B1C
  if (crb(c,2)) { goto L_80349B64; } // 80349B20
  c->r[3]=c->r[24]+0x00000020u; // 80349B24
  c->lr=0x80349B2Cu; f_80344130(c); // 80349B28
  c->r[31]=c->r[3]|c->r[3]; // 80349B2C
  c->r[3]=c->r[25]|c->r[25]; // 80349B30
  c->r[5]=R32(c->r[31]+0x00000010u); // 80349B34
  c->r[4]=c->r[27]|c->r[27]; // 80349B38
  c->lr=0x80349B40u; f_8035F814(c); // 80349B3C
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80349B40
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80349B44
  if (crb(c,2)) { goto L_80349B74; } // 80349B48
  c->r[5]=R32(c->r[31]+0x00000014u); // 80349B4C
  c->r[4]=c->r[28]|c->r[28]; // 80349B50
  c->r[3]=c->r[25]|c->r[25]; // 80349B54
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 80349B58
  c->lr=0x80349B60u; f_8035F814(c); // 80349B5C
  goto L_80349B74; // 80349B60
L_80349B64:;
  c->r[3]=c->r[25]|c->r[25]; // 80349B64
  c->r[4]=c->r[27]|c->r[27]; // 80349B68
  c->r[5]=0u+0xFFFFFFFFu; // 80349B6C
  c->lr=0x80349B74u; f_8035F814(c); // 80349B70
L_80349B74:;
  c->r[29]=c->r[29]+0x00000002u; // 80349B74
  c->r[27]=c->r[27]+0x00000001u; // 80349B78
L_80349B7C:;
  cmpu(c,0,c->r[27],c->r[26]); // 80349B7C
  if (crb(c,0)) { IRQCHK(c); goto L_80349B18; } // 80349B80
  goto L_80349B9C; // 80349B84
L_80349B88:;
  c->r[3]=c->r[25]|c->r[25]; // 80349B88
  c->r[4]=c->r[26]|c->r[26]; // 80349B8C
  c->r[5]=0u+0xFFFFFFFFu; // 80349B90
  c->lr=0x80349B98u; f_8035F814(c); // 80349B94
  c->r[26]=c->r[26]+0x00000001u; // 80349B98
L_80349B9C:;
  cmpu(c,0,c->r[26],c->r[28]); // 80349B9C
  if (!crb(c,1)) { IRQCHK(c); goto L_80349B88; } // 80349BA0
  c->r[0]=R32(c->r[30]+0x00000014u); // 80349BA4
  cmps(c,0,(int32_t)c->r[0],0); // 80349BA8
  if (crb(c,2)) { goto L_80349BD0; } // 80349BAC
  c->r[4]=R16(c->r[30]+0x00000018u); // 80349BB0
  c->r[3]=c->r[24]+0x00000020u; // 80349BB4
  c->lr=0x80349BBCu; f_80343EFC(c); // 80349BB8
  c->r[4]=c->r[3]|c->r[3]; // 80349BBC
  c->r[3]=c->r[25]|c->r[25]; // 80349BC0
  c->r[4]=R32(c->r[4]+0x00000010u); // 80349BC4
  c->lr=0x80349BCCu; f_8035F884(c); // 80349BC8
  goto L_80349BDC; // 80349BCC
L_80349BD0:;
  c->r[3]=c->r[25]|c->r[25]; // 80349BD0
  c->r[4]=0u+0xFFFFFFFFu; // 80349BD4
  c->lr=0x80349BDCu; f_8035F884(c); // 80349BD8
L_80349BDC:;
  c->r[3]=0u+0x00000001u; // 80349BDC
L_80349BE0:;
  c->r[11]=c->r[1]+0x00000030u; // 80349BE0
  c->lr=0x80349BE8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80349BE4
  c->r[0]=R32(c->r[1]+0x00000034u); // 80349BE8
  c->lr=c->r[0]; // 80349BEC
  c->r[1]=c->r[1]+0x00000030u; // 80349BF0
  return; // 80349BF4
}

// fn_80349BF8
void f_80349BF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80349BF8
  c->r[0]=c->lr; // 80349BFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80349C00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80349C04
  c->r[31]=c->r[3]|c->r[3]; // 80349C08
  c->r[3]=c->r[4]|c->r[4]; // 80349C0C
  c->r[12]=R32(c->r[4]+0x00000000u); // 80349C10
  c->r[4]=c->r[1]+0x00000008u; // 80349C14
  c->r[12]=R32(c->r[12]+0x00000080u); // 80349C18
  c->ctr=c->r[12]; // 80349C1C
  if (true) { c->lr=0x80349C24u; dispatch(c,c->ctr); } // 80349C20
  c->r[4]=R32(c->r[3]+0x00000000u); // 80349C24
  c->r[3]=R32(c->r[3]+0x00000004u); // 80349C28
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 80349C2C
  if (!crb(c,2)) { goto L_80349C3C; } // 80349C30
  c->r[0]=0u+0xFFFFFF00u; // 80349C34
  c->r[3]=c->r[3]|c->r[0]; // 80349C38
L_80349C3C:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80349C3C
  if (!crb(c,2)) { goto L_80349C48; } // 80349C40
  c->r[3]=c->r[3]|0x000000FFu; // 80349C44
L_80349C48:;
  W32(c->r[31]+0x00000000u,c->r[3]); // 80349C48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80349C4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80349C50
  c->lr=c->r[0]; // 80349C54
  c->r[1]=c->r[1]+0x00000020u; // 80349C58
  return; // 80349C5C
}

// fn_80349C60
void f_80349C60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80349C60
  c->r[0]=c->lr; // 80349C64
  W32(c->r[1]+0x00000074u,c->r[0]); // 80349C68
  c->r[0]=0u+0xFFFFFFFFu; // 80349C6C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80349C70
  c->r[31]=c->r[5]|c->r[5]; // 80349C74
  c->r[5]=c->r[6]|c->r[6]; // 80349C78
  W32(c->r[1]+0x00000068u,c->r[30]); // 80349C7C
  W32(c->r[1]+0x00000064u,c->r[29]); // 80349C80
  c->r[29]=c->r[4]|c->r[4]; // 80349C84
  c->r[4]=c->r[1]+0x00000018u; // 80349C88
  W32(c->r[1]+0x00000038u,c->r[0]); // 80349C8C
  W32(c->r[1]+0x00000050u,c->r[0]); // 80349C90
  c->r[12]=R32(c->r[3]+0x00000000u); // 80349C94
  c->r[12]=R32(c->r[12]+0x00000084u); // 80349C98
  c->ctr=c->r[12]; // 80349C9C
  if (true) { c->lr=0x80349CA4u; dispatch(c,c->ctr); } // 80349CA0
  c->r[0]=R32(c->r[3]+0x00000004u); // 80349CA4
  c->r[30]=c->r[3]|c->r[3]; // 80349CA8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80349CAC
  if (crb(c,2)) { goto L_80349DAC; } // 80349CB0
  cmps(c,0,(int32_t)c->r[29],0); // 80349CB4
  if (crb(c,2)) { goto L_80349CC8; } // 80349CB8
  c->r[3]=c->r[29]|c->r[29]; // 80349CBC
  c->r[4]=c->r[30]|c->r[30]; // 80349CC0
  c->lr=0x80349CC8u; f_80349048(c); // 80349CC4
L_80349CC8:;
  cmps(c,0,(int32_t)c->r[31],0); // 80349CC8
  if (crb(c,2)) { goto L_80349DD4; } // 80349CCC
  c->r[0]=R32(c->r[30]+0x00000004u); // 80349CD0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80349CD4
  if (crb(c,2)) { goto L_80349D9C; } // 80349CD8
  {uint32_t ea=c->r[30]+0x00000014u; psq_load(c,1,ea,0,0);} // 80349CDC
  c->r[3]=c->r[1]+0x0000000Cu; // 80349CE0
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,0,ea,0,0);} // 80349CE4
  c->r[4]=c->r[3]|c->r[3]; // 80349CE8
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80349CEC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 80349CF0
  {uint32_t ea=c->r[30]+0x0000001Cu; psq_load(c,1,ea,1,0);} // 80349CF4
  {uint32_t ea=c->r[30]+0x00000010u; psq_load(c,0,ea,1,0);} // 80349CF8
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80349CFC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 80349D00
  c->lr=0x80349D08u; f_80296AB0(c); // 80349D04
  c->r[3]=c->r[31]|c->r[31]; // 80349D08
  c->lr=0x80349D10u; f_8035EE64(c); // 80349D0C
  c->r[0]=R8(c->r[30]+0x00000038u); // 80349D10
  c->r[4]=c->r[1]+0x00000008u; // 80349D14
  c->r[3]=c->r[31]|c->r[31]; // 80349D18
  W8(c->r[1]+0x00000008u,c->r[0]); // 80349D1C
  c->r[0]=R8(c->r[30]+0x00000039u); // 80349D20
  W8(c->r[1]+0x00000009u,c->r[0]); // 80349D24
  c->r[0]=R8(c->r[30]+0x0000003Au); // 80349D28
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80349D2C
  c->r[0]=R8(c->r[30]+0x0000003Bu); // 80349D30
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80349D34
  c->lr=0x80349D3Cu; f_8035EE78(c); // 80349D38
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80349D3C
  c->r[3]=c->r[31]|c->r[31]; // 80349D40
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80349D44
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 80349D48
  c->lr=0x80349D50u; f_8035F03C(c); // 80349D4C
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80349D50
  c->r[3]=c->r[31]|c->r[31]; // 80349D54
  c->lr=0x80349D5Cu; f_8035F07C(c); // 80349D58
  c->r[0]=R32(c->r[30]+0x00000004u); // 80349D5C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80349D60
  if (!crb(c,2)) { goto L_80349D74; } // 80349D64
  c->r[0]=R32(c->r[31]+0x00000000u); // 80349D68
  c->r[0]=c->r[0]|0x00000010u; // 80349D6C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80349D70
L_80349D74:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80349D74
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80349D78
  if (!crb(c,2)) { goto L_80349D8C; } // 80349D7C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80349D80
  c->r[0]=c->r[0]|0x00000020u; // 80349D84
  W32(c->r[31]+0x00000000u,c->r[0]); // 80349D88
L_80349D8C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80349D8C
  c->r[0]=c->r[0]|0x00000004u; // 80349D90
  W32(c->r[31]+0x00000000u,c->r[0]); // 80349D94
  goto L_80349DD4; // 80349D98
L_80349D9C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80349D9C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80349DA0
  W32(c->r[31]+0x00000000u,c->r[0]); // 80349DA4
  goto L_80349DD4; // 80349DA8
L_80349DAC:;
  cmps(c,0,(int32_t)c->r[29],0); // 80349DAC
  if (crb(c,2)) { goto L_80349DC0; } // 80349DB0
  c->r[0]=R32(c->r[29]+0x00000000u); // 80349DB4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80349DB8
  W32(c->r[29]+0x00000000u,c->r[0]); // 80349DBC
L_80349DC0:;
  cmps(c,0,(int32_t)c->r[31],0); // 80349DC0
  if (crb(c,2)) { goto L_80349DD4; } // 80349DC4
  c->r[0]=R32(c->r[31]+0x00000000u); // 80349DC8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80349DCC
  W32(c->r[31]+0x00000000u,c->r[0]); // 80349DD0
L_80349DD4:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 80349DD4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 80349DD8
  c->r[30]=R32(c->r[1]+0x00000068u); // 80349DDC
  c->r[29]=R32(c->r[1]+0x00000064u); // 80349DE0
  c->lr=c->r[0]; // 80349DE4
  c->r[1]=c->r[1]+0x00000070u; // 80349DE8
  return; // 80349DEC
}

// fn_80349DF0
void f_80349DF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80349DF0
  c->r[0]=c->lr; // 80349DF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80349DF8
  c->r[0]=0u+0xFFFFFFFFu; // 80349DFC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80349E00
  c->r[31]=c->r[4]|c->r[4]; // 80349E04
  c->r[4]=c->r[1]+0x00000010u; // 80349E08
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80349E0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80349E10
  c->r[12]=R32(c->r[12]+0x00000088u); // 80349E14
  c->ctr=c->r[12]; // 80349E18
  if (true) { c->lr=0x80349E20u; dispatch(c,c->ctr); } // 80349E1C
  c->r[4]=R32(c->r[31]+0x00000000u); // 80349E20
  c->r[0]=R32(c->r[3]+0x00000000u); // 80349E24
  cmps(c,0,(int32_t)c->r[4],0); // 80349E28
  if (crb(c,2)) { goto L_80349E34; } // 80349E2C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80349E30
L_80349E34:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 80349E34
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349E38
  cmps(c,0,(int32_t)c->r[4],0); // 80349E3C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80349E40
  if (crb(c,2)) { goto L_80349E50; } // 80349E44
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 80349E48
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 80349E4C
L_80349E50:;
  c->r[7]=R32(c->r[31]+0x00000000u); // 80349E50
  c->r[6]=R8(c->r[3]+0x0000000Cu); // 80349E54
  c->r[5]=R8(c->r[3]+0x0000000Du); // 80349E58
  cmps(c,0,(int32_t)c->r[7],0); // 80349E5C
  c->r[4]=R8(c->r[3]+0x0000000Eu); // 80349E60
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 80349E64
  W8(c->r[1]+0x00000008u,c->r[6]); // 80349E68
  W8(c->r[1]+0x00000009u,c->r[5]); // 80349E6C
  W8(c->r[1]+0x0000000Au,c->r[4]); // 80349E70
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80349E74
  if (crb(c,2)) { goto L_80349E8C; } // 80349E78
  W8(c->r[7]+0x00000014u,c->r[6]); // 80349E7C
  W8(c->r[7]+0x00000015u,c->r[5]); // 80349E80
  W8(c->r[7]+0x00000016u,c->r[4]); // 80349E84
  W8(c->r[7]+0x00000017u,c->r[0]); // 80349E88
L_80349E8C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80349E8C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80349E90
  c->lr=c->r[0]; // 80349E94
  c->r[1]=c->r[1]+0x00000030u; // 80349E98
  return; // 80349E9C
}

// fn_80349EA0
void f_80349EA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80349EA0
  c->r[0]=c->lr; // 80349EA4
  W32(c->r[1]+0x00000094u,c->r[0]); // 80349EA8
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 80349EAC
  W32(c->r[1]+0x00000088u,c->r[30]); // 80349EB0
  c->r[30]=c->r[4]|c->r[4]; // 80349EB4
  c->r[4]=c->r[1]+0x0000004Cu; // 80349EB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80349EBC
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 80349EC0
  c->ctr=c->r[12]; // 80349EC4
  if (true) { c->lr=0x80349ECCu; dispatch(c,c->ctr); } // 80349EC8
  c->r[0]=R32(c->r[3]+0x00000000u); // 80349ECC
  c->r[31]=c->r[3]|c->r[3]; // 80349ED0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80349ED4
  if (!crb(c,2)) { goto L_80349EE4; } // 80349ED8
  c->r[3]=0u+0x00000000u; // 80349EDC
  goto L_80349FE8; // 80349EE0
L_80349EE4:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80349EE4
  cmps(c,0,(int32_t)c->r[0],1); // 80349EE8
  if (crb(c,2)) { goto L_80349F1C; } // 80349EEC
  if (!crb(c,0)) { goto L_80349F48; } // 80349EF0
  cmps(c,0,(int32_t)c->r[0],0); // 80349EF4
  if (!crb(c,0)) { goto L_80349F00; } // 80349EF8
  goto L_80349F48; // 80349EFC
L_80349F00:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349F00
  c->r[3]=c->r[30]|c->r[30]; // 80349F04
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80349F08
  {uint32_t ea=c->r[31]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80349F0C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80349F10
  c->lr=0x80349F18u; f_80353F50(c); // 80349F14
  goto L_80349F48; // 80349F18
L_80349F1C:;
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80349F1C
  {uint32_t ea=c->r[2]+0xFFFFF050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349F20
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80349F24
  c->r[3]=c->r[30]|c->r[30]; // 80349F28
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80349F2C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[5]=c->ps1[5]=RF32(ea);} // 80349F30
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80349F34
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 80349F38
  c->f[2]=-c->f[1]; // 80349F3C
  c->f[3]=-c->f[4]; // 80349F40
  c->lr=0x80349F48u; f_80353F88(c); // 80349F44
L_80349F48:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80349F48
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80349F4C
  cmps(c,0,(int32_t)c->r[0],1); // 80349F50
  if (crb(c,2)) { goto L_80349F98; } // 80349F54
  if (!crb(c,0)) { goto L_80349FCC; } // 80349F58
  cmps(c,0,(int32_t)c->r[0],0); // 80349F5C
  if (!crb(c,0)) { goto L_80349F68; } // 80349F60
  goto L_80349FCC; // 80349F64
L_80349F68:;
  c->r[0]=0u+0x00000001u; // 80349F68
  W32(c->r[1]+0x00000020u,c->r[0]); // 80349F6C
  {uint32_t ea=c->r[31]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80349F70
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349F74
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80349F78
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 80349F7C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80349F80
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80349F84
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 80349F88
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 80349F8C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80349F90
  goto L_80349FCC; // 80349F94
L_80349F98:;
  c->r[0]=0u+0x00000002u; // 80349F98
  W32(c->r[1]+0x00000020u,c->r[0]); // 80349F9C
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80349FA0
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80349FA4
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349FA8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80349FAC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80349FB0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 80349FB4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 80349FB8
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80349FBC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 80349FC0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 80349FC4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 80349FC8
L_80349FCC:;
  c->r[3]=c->r[30]|c->r[30]; // 80349FCC
  c->r[4]=c->r[31]+0x00000008u; // 80349FD0
  c->lr=0x80349FD8u; f_80353B90(c); // 80349FD4
  c->r[3]=c->r[30]|c->r[30]; // 80349FD8
  c->r[4]=c->r[1]+0x00000020u; // 80349FDC
  c->lr=0x80349FE4u; f_80353C34(c); // 80349FE0
  c->r[3]=0u+0x00000001u; // 80349FE4
L_80349FE8:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 80349FE8
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80349FEC
  c->r[30]=R32(c->r[1]+0x00000088u); // 80349FF0
  c->lr=c->r[0]; // 80349FF4
  c->r[1]=c->r[1]+0x00000090u; // 80349FF8
  return; // 80349FFC
}

// fn_8034A000
void f_8034A000(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A000
  c->r[0]=c->lr; // 8034A004
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034A008
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034A00C
  c->r[31]=c->r[4]|c->r[4]; // 8034A010
  c->r[4]=c->r[5]|c->r[5]; // 8034A014
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034A018
  c->r[30]=c->r[3]|c->r[3]; // 8034A01C
  c->r[3]=c->r[3]+0x00000020u; // 8034A020
  c->lr=0x8034A028u; f_80344580(c); // 8034A024
  cmps(c,0,(int32_t)c->r[3],0); // 8034A028
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034A02C
  if (!crb(c,2)) { goto L_8034A04C; } // 8034A030
  c->r[3]=0u+0x00000000u; // 8034A034
  c->r[0]=0u+0xFFFFFFFFu; // 8034A038
  W32(c->r[31]+0x00000000u,c->r[3]); // 8034A03C
  c->r[3]=c->r[31]|c->r[31]; // 8034A040
  W32(c->r[31]+0x00000004u,c->r[0]); // 8034A044
  goto L_8034A07C; // 8034A048
L_8034A04C:;
  c->r[4]=R32(c->r[30]+0x00000028u); // 8034A04C
  cmps(c,0,(int32_t)c->r[4],0); // 8034A050
  if (crb(c,2)) { goto L_8034A068; } // 8034A054
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8034A058
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8034A05C
  c->r[3]=c->r[4]+c->r[0]; // 8034A060
  goto L_8034A07C; // 8034A064
L_8034A068:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8034A068
  c->r[4]=c->r[31]|c->r[31]; // 8034A06C
  c->r[3]=c->r[1]+0x00000008u; // 8034A070
  c->lr=0x8034A078u; f_803433D4(c); // 8034A074
  c->r[3]=c->r[31]|c->r[31]; // 8034A078
L_8034A07C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034A07C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034A080
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034A084
  c->lr=c->r[0]; // 8034A088
  c->r[1]=c->r[1]+0x00000020u; // 8034A08C
  return; // 8034A090
}

// fn_8034A094
void f_8034A094(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A094
  c->r[0]=c->lr; // 8034A098
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034A09C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034A0A0
  c->r[31]=c->r[4]|c->r[4]; // 8034A0A4
  c->r[4]=c->r[5]|c->r[5]; // 8034A0A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034A0AC
  c->r[30]=c->r[3]|c->r[3]; // 8034A0B0
  c->r[3]=c->r[3]+0x00000020u; // 8034A0B4
  c->lr=0x8034A0BCu; f_803445CC(c); // 8034A0B8
  cmps(c,0,(int32_t)c->r[3],0); // 8034A0BC
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034A0C0
  if (!crb(c,2)) { goto L_8034A0D8; } // 8034A0C4
  c->r[0]=0u+0x00000000u; // 8034A0C8
  c->r[3]=c->r[31]|c->r[31]; // 8034A0CC
  W32(c->r[31]+0x00000004u,c->r[0]); // 8034A0D0
  goto L_8034A108; // 8034A0D4
L_8034A0D8:;
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 8034A0D8
  cmps(c,0,(int32_t)c->r[4],0); // 8034A0DC
  if (crb(c,2)) { goto L_8034A0F4; } // 8034A0E0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8034A0E4
  c->r[0]=rotl(c->r[0],6)&0xFFFFFFC0u; // 8034A0E8
  c->r[3]=c->r[4]+c->r[0]; // 8034A0EC
  goto L_8034A108; // 8034A0F0
L_8034A0F4:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8034A0F4
  c->r[4]=c->r[31]|c->r[31]; // 8034A0F8
  c->r[3]=c->r[1]+0x00000008u; // 8034A0FC
  c->lr=0x8034A104u; f_803434A4(c); // 8034A100
  c->r[3]=c->r[31]|c->r[31]; // 8034A104
L_8034A108:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034A108
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034A10C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034A110
  c->lr=c->r[0]; // 8034A114
  c->r[1]=c->r[1]+0x00000020u; // 8034A118
  return; // 8034A11C
}

// fn_8034A120
void f_8034A120(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A120
  c->r[0]=c->lr; // 8034A124
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034A128
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034A12C
  c->r[31]=c->r[4]|c->r[4]; // 8034A130
  c->r[4]=c->r[5]|c->r[5]; // 8034A134
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034A138
  c->r[30]=c->r[3]|c->r[3]; // 8034A13C
  c->r[3]=c->r[3]+0x00000020u; // 8034A140
  c->lr=0x8034A148u; f_80344618(c); // 8034A144
  cmps(c,0,(int32_t)c->r[3],0); // 8034A148
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034A14C
  if (!crb(c,2)) { goto L_8034A164; } // 8034A150
  c->r[0]=0u+0x00000000u; // 8034A154
  c->r[3]=c->r[31]|c->r[31]; // 8034A158
  W32(c->r[31]+0x00000000u,c->r[0]); // 8034A15C
  goto L_8034A194; // 8034A160
L_8034A164:;
  c->r[4]=R32(c->r[30]+0x00000030u); // 8034A164
  cmps(c,0,(int32_t)c->r[4],0); // 8034A168
  if (crb(c,2)) { goto L_8034A180; } // 8034A16C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8034A170
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8034A174
  c->r[3]=c->r[4]+c->r[0]; // 8034A178
  goto L_8034A194; // 8034A17C
L_8034A180:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8034A180
  c->r[4]=c->r[31]|c->r[31]; // 8034A184
  c->r[3]=c->r[1]+0x00000008u; // 8034A188
  c->lr=0x8034A190u; f_8034389C(c); // 8034A18C
  c->r[3]=c->r[31]|c->r[31]; // 8034A190
L_8034A194:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034A194
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034A198
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034A19C
  c->lr=c->r[0]; // 8034A1A0
  c->r[1]=c->r[1]+0x00000020u; // 8034A1A4
  return; // 8034A1A8
}

// fn_8034A1AC
void f_8034A1AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A1AC
  c->r[0]=c->lr; // 8034A1B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034A1B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034A1B8
  c->r[31]=c->r[4]|c->r[4]; // 8034A1BC
  c->r[4]=c->r[5]|c->r[5]; // 8034A1C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034A1C4
  c->r[30]=c->r[3]|c->r[3]; // 8034A1C8
  c->r[3]=c->r[3]+0x00000020u; // 8034A1CC
  c->lr=0x8034A1D4u; f_80344664(c); // 8034A1D0
  cmps(c,0,(int32_t)c->r[3],0); // 8034A1D4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034A1D8
  if (!crb(c,2)) { goto L_8034A1F0; } // 8034A1DC
  c->r[0]=0u+0x00000000u; // 8034A1E0
  c->r[3]=c->r[31]|c->r[31]; // 8034A1E4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8034A1E8
  goto L_8034A220; // 8034A1EC
L_8034A1F0:;
  c->r[4]=R32(c->r[30]+0x00000034u); // 8034A1F0
  cmps(c,0,(int32_t)c->r[4],0); // 8034A1F4
  if (crb(c,2)) { goto L_8034A20C; } // 8034A1F8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8034A1FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8034A200
  c->r[3]=c->r[4]+c->r[0]; // 8034A204
  goto L_8034A220; // 8034A208
L_8034A20C:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8034A20C
  c->r[4]=c->r[31]|c->r[31]; // 8034A210
  c->r[3]=c->r[1]+0x00000008u; // 8034A214
  c->lr=0x8034A21Cu; f_80343A1C(c); // 8034A218
  c->r[3]=c->r[31]|c->r[31]; // 8034A21C
L_8034A220:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034A220
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034A224
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034A228
  c->lr=c->r[0]; // 8034A22C
  c->r[1]=c->r[1]+0x00000020u; // 8034A230
  return; // 8034A234
}

// fn_8034A238
void f_8034A238(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A238
  c->r[0]=c->lr; // 8034A23C
  c->r[3]=c->r[3]+0x00000020u; // 8034A240
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034A244
  c->lr=0x8034A24Cu; f_803445CC(c); // 8034A248
  cmps(c,0,(int32_t)c->r[3],0); // 8034A24C
  if (crb(c,2)) { goto L_8034A25C; } // 8034A250
  c->r[3]=R32(c->r[3]+0x00000014u); // 8034A254
  goto L_8034A260; // 8034A258
L_8034A25C:;
  c->r[3]=0u+0xFFFFFFFFu; // 8034A25C
L_8034A260:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034A260
  c->lr=c->r[0]; // 8034A264
  c->r[1]=c->r[1]+0x00000010u; // 8034A268
  return; // 8034A26C
}

// fn_8034A270
void f_8034A270(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A270
  c->r[0]=c->lr; // 8034A274
  c->r[3]=c->r[3]+0x00000020u; // 8034A278
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034A27C
  c->lr=0x8034A284u; f_803445CC(c); // 8034A280
  cmps(c,0,(int32_t)c->r[3],0); // 8034A284
  c->r[4]=0u+0x00000000u; // 8034A288
  if (crb(c,2)) { goto L_8034A2A0; } // 8034A28C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8034A290
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8034A294
  if (crb(c,2)) { goto L_8034A2A0; } // 8034A298
  c->r[4]=0u+0x00000001u; // 8034A29C
L_8034A2A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034A2A0
  c->r[3]=c->r[4]|c->r[4]; // 8034A2A4
  c->lr=c->r[0]; // 8034A2A8
  c->r[1]=c->r[1]+0x00000010u; // 8034A2AC
  return; // 8034A2B0
}

// fn_8034A2B4
void f_8034A2B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A2B4
  c->r[0]=c->lr; // 8034A2B8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8034A2BC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8034A2C0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8034A2C4
  c->r[11]=c->r[1]+0x00000040u; // 8034A2C8
  c->lr=0x8034A2D0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034A2CC
  c->r[25]=c->r[3]|c->r[3]; // 8034A2D0
  c->r[3]=c->r[3]+0x00000020u; // 8034A2D4
  c->lr=0x8034A2DCu; f_80343FA8(c); // 8034A2D8
  c->r[28]=c->r[3]|c->r[3]; // 8034A2DC
  c->r[3]=c->r[25]+0x00000020u; // 8034A2E0
  c->lr=0x8034A2E8u; f_803441DC(c); // 8034A2E4
  c->r[29]=c->r[3]|c->r[3]; // 8034A2E8
  c->r[3]=c->r[25]+0x00000020u; // 8034A2EC
  c->lr=0x8034A2F4u; f_80344308(c); // 8034A2F0
  c->r[30]=c->r[3]|c->r[3]; // 8034A2F4
  c->r[3]=c->r[25]+0x00000020u; // 8034A2F8
  c->lr=0x8034A300u; f_803444B4(c); // 8034A2FC
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8034A300
  c->r[31]=c->r[3]|c->r[3]; // 8034A304
  c->r[26]=0u+0x00000000u; // 8034A308
  c->r[27]=0u+0x00000000u; // 8034A30C
  goto L_8034A340; // 8034A310
L_8034A314:;
  c->r[4]=c->r[26]|c->r[26]; // 8034A314
  c->r[3]=c->r[25]+0x00000020u; // 8034A318
  c->lr=0x8034A320u; f_80343EFC(c); // 8034A31C
  W32(c->r[1]+0x00000014u,c->r[3]); // 8034A320
  c->f[1]=c->f[31]; // 8034A324
  c->r[3]=c->r[1]+0x00000014u; // 8034A328
  c->r[0]=R32(c->r[25]+0x00000028u); // 8034A32C
  c->r[4]=c->r[0]+c->r[27]; // 8034A330
  c->lr=0x8034A338u; f_803433D4(c); // 8034A334
  c->r[27]=c->r[27]+0x00000008u; // 8034A338
  c->r[26]=c->r[26]+0x00000001u; // 8034A33C
L_8034A340:;
  cmpu(c,0,c->r[26],c->r[28]); // 8034A340
  if (crb(c,0)) { IRQCHK(c); goto L_8034A314; } // 8034A344
  c->r[26]=0u+0x00000000u; // 8034A348
  c->r[28]=0u+0x00000000u; // 8034A34C
  goto L_8034A380; // 8034A350
L_8034A354:;
  c->r[4]=c->r[26]|c->r[26]; // 8034A354
  c->r[3]=c->r[25]+0x00000020u; // 8034A358
  c->lr=0x8034A360u; f_80344130(c); // 8034A35C
  W32(c->r[1]+0x00000010u,c->r[3]); // 8034A360
  c->f[1]=c->f[31]; // 8034A364
  c->r[3]=c->r[1]+0x00000010u; // 8034A368
  c->r[0]=R32(c->r[25]+0x0000002Cu); // 8034A36C
  c->r[4]=c->r[0]+c->r[28]; // 8034A370
  c->lr=0x8034A378u; f_803434A4(c); // 8034A374
  c->r[28]=c->r[28]+0x00000040u; // 8034A378
  c->r[26]=c->r[26]+0x00000001u; // 8034A37C
L_8034A380:;
  cmpu(c,0,c->r[26],c->r[29]); // 8034A380
  if (crb(c,0)) { IRQCHK(c); goto L_8034A354; } // 8034A384
  c->r[26]=0u+0x00000000u; // 8034A388
  c->r[28]=0u+0x00000000u; // 8034A38C
  goto L_8034A3C0; // 8034A390
L_8034A394:;
  c->r[4]=c->r[26]|c->r[26]; // 8034A394
  c->r[3]=c->r[25]+0x00000020u; // 8034A398
  c->lr=0x8034A3A0u; f_8034425C(c); // 8034A39C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8034A3A0
  c->f[1]=c->f[31]; // 8034A3A4
  c->r[3]=c->r[1]+0x0000000Cu; // 8034A3A8
  c->r[0]=R32(c->r[25]+0x00000030u); // 8034A3AC
  c->r[4]=c->r[0]+c->r[28]; // 8034A3B0
  c->lr=0x8034A3B8u; f_8034389C(c); // 8034A3B4
  c->r[28]=c->r[28]+0x00000010u; // 8034A3B8
  c->r[26]=c->r[26]+0x00000001u; // 8034A3BC
L_8034A3C0:;
  cmpu(c,0,c->r[26],c->r[30]); // 8034A3C0
  if (crb(c,0)) { IRQCHK(c); goto L_8034A394; } // 8034A3C4
  c->r[26]=0u+0x00000000u; // 8034A3C8
  c->r[28]=0u+0x00000000u; // 8034A3CC
  goto L_8034A400; // 8034A3D0
L_8034A3D4:;
  c->r[4]=c->r[26]|c->r[26]; // 8034A3D4
  c->r[3]=c->r[25]+0x00000020u; // 8034A3D8
  c->lr=0x8034A3E0u; f_80344408(c); // 8034A3DC
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034A3E0
  c->f[1]=c->f[31]; // 8034A3E4
  c->r[3]=c->r[1]+0x00000008u; // 8034A3E8
  c->r[0]=R32(c->r[25]+0x00000034u); // 8034A3EC
  c->r[4]=c->r[0]+c->r[28]; // 8034A3F0
  c->lr=0x8034A3F8u; f_80343A1C(c); // 8034A3F4
  c->r[28]=c->r[28]+0x00000034u; // 8034A3F8
  c->r[26]=c->r[26]+0x00000001u; // 8034A3FC
L_8034A400:;
  cmpu(c,0,c->r[26],c->r[31]); // 8034A400
  if (crb(c,0)) { IRQCHK(c); goto L_8034A3D4; } // 8034A404
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8034A408
  c->r[11]=c->r[1]+0x00000040u; // 8034A40C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8034A410
  c->lr=0x8034A418u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034A414
  c->r[0]=R32(c->r[1]+0x00000054u); // 8034A418
  c->lr=c->r[0]; // 8034A41C
  c->r[1]=c->r[1]+0x00000050u; // 8034A420
  return; // 8034A424
}

// fn_8034A428
void f_8034A428(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 8034A428
  c->r[0]=R32(c->r[4]+0x00000000u); // 8034A42C
  c->r[3]=c->r[3]+0x000048B8u; // 8034A430
  cmpu(c,0,c->r[0],c->r[3]); // 8034A434
  if (!crb(c,2)) { goto L_8034A444; } // 8034A438
  c->r[3]=0u+0x00000001u; // 8034A43C
  return; // 8034A440
L_8034A444:;
  c->r[3]=0u+0x803C0000u; // 8034A444
  c->r[0]=R32(c->r[4]+0x00000000u); // 8034A448
  c->r[3]=c->r[3]+0x000048A8u; // 8034A44C
  cmpu(c,0,c->r[0],c->r[3]); // 8034A450
  if (!crb(c,2)) { goto L_8034A460; } // 8034A454
  c->r[3]=0u+0x00000001u; // 8034A458
  return; // 8034A45C
L_8034A460:;
  c->r[3]=0u+0x803C0000u; // 8034A460
  c->r[3]=c->r[3]+0x000048C8u; // 8034A464
  c->r[0]=c->r[3]-c->r[0]; // 8034A468
  c->r[0]=cntlz(c->r[0]); // 8034A46C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8034A470
  return; // 8034A474
}

// fn_8034A478
void f_8034A478(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 8034A478
  c->r[0]=R32(c->r[4]+0x00000000u); // 8034A47C
  c->r[3]=c->r[3]+0x000048A8u; // 8034A480
  cmpu(c,0,c->r[0],c->r[3]); // 8034A484
  if (!crb(c,2)) { goto L_8034A494; } // 8034A488
  c->r[3]=0u+0x00000001u; // 8034A48C
  return; // 8034A490
L_8034A494:;
  c->r[3]=0u+0x803C0000u; // 8034A494
  c->r[0]=R32(c->r[4]+0x00000000u); // 8034A498
  c->r[3]=c->r[3]+0x000048C8u; // 8034A49C
  c->r[0]=c->r[3]-c->r[0]; // 8034A4A0
  c->r[0]=cntlz(c->r[0]); // 8034A4A4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8034A4A8
  return; // 8034A4AC
}

// fn_8034A4B0
void f_8034A4B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A4B0
  c->r[0]=c->lr; // 8034A4B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034A4B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8034A4BC
  c->r[12]=R32(c->r[12]+0x00000014u); // 8034A4C0
  c->ctr=c->r[12]; // 8034A4C4
  if (true) { c->lr=0x8034A4CCu; dispatch(c,c->ctr); } // 8034A4C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034A4CC
  c->r[3]=c->r[3]+0x00000004u; // 8034A4D0
  c->lr=c->r[0]; // 8034A4D4
  c->r[1]=c->r[1]+0x00000010u; // 8034A4D8
  return; // 8034A4DC
}

// fn_8034A4E0
void f_8034A4E0(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 8034A4E0
  c->r[3]=c->r[3]+0x000048B8u; // 8034A4E4
  return; // 8034A4E8
}

// fn_8034A4EC
void f_8034A4EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A4EC
  c->r[0]=c->lr; // 8034A4F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034A4F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8034A4F8
  c->r[12]=R32(c->r[12]+0x00000014u); // 8034A4FC
  c->ctr=c->r[12]; // 8034A500
  if (true) { c->lr=0x8034A508u; dispatch(c,c->ctr); } // 8034A504
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034A508
  c->r[3]=c->r[3]+0x00000004u; // 8034A50C
  c->lr=c->r[0]; // 8034A510
  c->r[1]=c->r[1]+0x00000010u; // 8034A514
  return; // 8034A518
}

// fn_8034A51C
void f_8034A51C(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 8034A51C
  c->r[3]=c->r[3]+0x000048A8u; // 8034A520
  return; // 8034A524
}

// fn_8034A528
void f_8034A528(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A528
  c->r[0]=c->lr; // 8034A52C
  cmps(c,0,(int32_t)c->r[3],0); // 8034A530
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034A534
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034A538
  c->r[31]=c->r[3]|c->r[3]; // 8034A53C
  if (crb(c,2)) { goto L_8034A55C; } // 8034A540
  c->r[5]=0u+0x80540000u; // 8034A544
  c->r[4]=c->r[31]|c->r[31]; // 8034A548
  c->r[5]=c->r[5]+0x00007E98u; // 8034A54C
  W32(c->r[3]+0x00000000u,c->r[5]); // 8034A550
  c->r[3]=R32(c->r[3]+0x00000008u); // 8034A554
  c->lr=0x8034A55Cu; f_802CF5AC(c); // 8034A558
L_8034A55C:;
  c->r[3]=c->r[31]|c->r[31]; // 8034A55C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034A560
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034A564
  c->lr=c->r[0]; // 8034A568
  c->r[1]=c->r[1]+0x00000010u; // 8034A56C
  return; // 8034A570
}

// Destroy__Q34nw4r3g3d6G3dObjFv
void f_8034A574(Ctx* __restrict c) {
  trace_call(0x8034A574u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A574
  c->r[0]=c->lr; // 8034A578
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034A57C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034A580
  c->r[31]=c->r[3]|c->r[3]; // 8034A584
  c->r[0]=R32(c->r[3]+0x00000004u); // 8034A588
  cmps(c,0,(int32_t)c->r[0],0); // 8034A58C
  if (crb(c,2)) { goto L_8034A5B8; } // 8034A590
  c->r[3]=c->r[0]|c->r[0]; // 8034A594
  c->r[4]=0u+0x00010000u; // 8034A598
  c->r[12]=R32(c->r[3]+0x00000000u); // 8034A59C
  c->r[6]=c->r[31]|c->r[31]; // 8034A5A0
  c->r[4]=c->r[4]+0x00000001u; // 8034A5A4
  c->r[5]=0u+0x00000000u; // 8034A5A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8034A5AC
  c->ctr=c->r[12]; // 8034A5B0
  if (true) { c->lr=0x8034A5B8u; dispatch(c,c->ctr); } // 8034A5B4
L_8034A5B8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034A5B8
  if (crb(c,2)) { goto L_8034A5D8; } // 8034A5BC
  c->r[12]=R32(c->r[31]+0x00000000u); // 8034A5C0
  c->r[3]=c->r[31]|c->r[31]; // 8034A5C4
  c->r[4]=0u+0x00000001u; // 8034A5C8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8034A5CC
  c->ctr=c->r[12]; // 8034A5D0
  if (true) { c->lr=0x8034A5D8u; dispatch(c,c->ctr); } // 8034A5D4
L_8034A5D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034A5D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034A5DC
  c->lr=c->r[0]; // 8034A5E0
  c->r[1]=c->r[1]+0x00000010u; // 8034A5E4
  return; // 8034A5E8
}

// fn_8034A5EC
void f_8034A5EC(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 8034A5EC
  c->r[0]=R32(c->r[4]+0x00000000u); // 8034A5F0
  c->r[3]=c->r[3]+0x000048C8u; // 8034A5F4
  c->r[0]=c->r[3]-c->r[0]; // 8034A5F8
  c->r[0]=cntlz(c->r[0]); // 8034A5FC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8034A600
  return; // 8034A604
}

// fn_8034A608
void f_8034A608(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A608
  c->r[0]=c->lr; // 8034A60C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034A610
  c->r[12]=R32(c->r[3]+0x00000000u); // 8034A614
  c->r[12]=R32(c->r[12]+0x00000014u); // 8034A618
  c->ctr=c->r[12]; // 8034A61C
  if (true) { c->lr=0x8034A624u; dispatch(c,c->ctr); } // 8034A620
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034A624
  c->r[3]=c->r[3]+0x00000004u; // 8034A628
  c->lr=c->r[0]; // 8034A62C
  c->r[1]=c->r[1]+0x00000010u; // 8034A630
  return; // 8034A634
}

// fn_8034A638
void f_8034A638(Ctx* __restrict c) {
  c->r[3]=0u+0x803C0000u; // 8034A638
  c->r[3]=c->r[3]+0x000048C8u; // 8034A63C
  return; // 8034A640
}

// PlayPolicy_Onetime__Q24nw4r3g3dFfff
void f_8034A644(Ctx* __restrict c) {
  trace_call(0x8034A644u);
  c->f[1]=c->f[3]; // 8034A644
  return; // 8034A648
}

// PlayPolicy_Loop__Q24nw4r3g3dFfff
void f_8034A64C(Ctx* __restrict c) {
  trace_call(0x8034A64Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A64C
  c->r[0]=c->lr; // 8034A650
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034A654
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8034A658
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8034A65C
  {uint32_t ea=c->r[2]+0xFFFFF058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034A660
  c->f[31]=c->ps1[31]=S(c->f[2]-c->f[1]); // 8034A664
  fcmp(c,0,c->f[3],c->f[0]); // 8034A668
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8034A66C
  if (!crb(c,2)) { goto L_8034A688; } // 8034A670
  c->f[1]=c->f[3]; // 8034A674
  c->f[2]=c->f[31]; // 8034A678
  c->lr=0x8034A680u; f_802C51C0(c); // 8034A67C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8034A680
  goto L_8034A6A4; // 8034A684
L_8034A688:;
  c->f[2]=c->f[31]; // 8034A688
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[31]); // 8034A68C
  c->lr=0x8034A694u; f_802C51C0(c); // 8034A690
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8034A694
  {uint32_t ea=c->r[2]+0xFFFFF058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034A698
  c->f[0]=(c->f[1]>=0.0)?c->f[0]:c->f[31]; // 8034A69C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8034A6A0
L_8034A6A4:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8034A6A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034A6A8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8034A6AC
  c->lr=c->r[0]; // 8034A6B0
  c->r[1]=c->r[1]+0x00000020u; // 8034A6B4
  return; // 8034A6B8
}

// SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
void f_8034A6BC(Ctx* __restrict c) {
  trace_call(0x8034A6BCu);
  cmps(c,0,(int32_t)c->r[5],0); // 8034A6BC
  if (crb(c,2)) { goto L_8034A6D4; } // 8034A6C0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8034A6C4
  c->r[0]=c->r[0]|c->r[4]; // 8034A6C8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8034A6CC
  return; // 8034A6D0
L_8034A6D4:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8034A6D4
  c->r[0]=c->r[0]&~c->r[4]; // 8034A6D8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8034A6DC
  return; // 8034A6E0
}

// TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag
void f_8034A6E4(Ctx* __restrict c) {
  trace_call(0x8034A6E4u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8034A6E4
  c->r[3]=c->r[0]&c->r[4]; // 8034A6E8
  c->r[0]=0u-c->r[3]; // 8034A6EC
  c->r[0]=c->r[0]|c->r[3]; // 8034A6F0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8034A6F4
  return; // 8034A6F8
}

// GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode
void f_8034A6FC(Ctx* __restrict c) {
  trace_call(0x8034A6FCu);
  c->r[10]=0u+0xCC010000u; // 8034A6FC
  c->r[11]=0u+0x00000061u; // 8034A700
  c->r[9]=0u+0xFE080000u; // 8034A704
  c->r[8]=c->r[2]+0xFFFFF060u; // 8034A708
  c->r[7]=R8(c->r[8]+c->r[7]); // 8034A70C
  c->r[9]=c->r[9]+0xFFFFFC3Fu; // 8034A710
  W8(c->r[10]+0xFFFF8000u,c->r[11]); // 8034A714
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8034A718
  c->r[0]=rotl(c->r[4],4)&0x00000FF0u; // 8034A71C
  c->r[8]=rotl(c->r[6],16)&0x00FF0000u; // 8034A720
  c->r[6]=rotl(c->r[7],14)&0xFFFFC000u; // 8034A724
  W32(c->r[10]+0xFFFF8000u,c->r[9]); // 8034A728
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 8034A72C
  c->r[0]=c->r[3]|c->r[0]; // 8034A730
  c->r[0]=c->r[5]|c->r[0]; // 8034A734
  c->r[6]=c->r[8]|c->r[6]; // 8034A738
  c->r[0]=c->r[6]|c->r[0]; // 8034A73C
  W8(c->r[10]+0xFFFF8000u,c->r[11]); // 8034A740
  c->r[7]=0u+0x00000010u; // 8034A744
  c->r[6]=0u+0x00000000u; // 8034A748
  W32(c->r[10]+0xFFFF8000u,c->r[0]); // 8034A74C
  c->r[5]=0u+0x00001009u; // 8034A750
  c->r[0]=0u+0x0000103Fu; // 8034A754
  W8(c->r[10]+0xFFFF8000u,c->r[7]); // 8034A758
  W16(c->r[10]+0xFFFF8000u,c->r[6]); // 8034A75C
  W16(c->r[10]+0xFFFF8000u,c->r[5]); // 8034A760
  W32(c->r[10]+0xFFFF8000u,c->r[4]); // 8034A764
  W8(c->r[10]+0xFFFF8000u,c->r[7]); // 8034A768
  W16(c->r[10]+0xFFFF8000u,c->r[6]); // 8034A76C
  W16(c->r[10]+0xFFFF8000u,c->r[0]); // 8034A770
  W32(c->r[10]+0xFFFF8000u,c->r[3]); // 8034A774
  return; // 8034A778
}

// GDSetCullMode__Q34nw4r3g3d4fifoF11_GXCullMode
void f_8034A77C(Ctx* __restrict c) {
  trace_call(0x8034A77Cu);
  c->r[5]=0u+0xCC010000u; // 8034A77C
  c->r[6]=0u+0x00000061u; // 8034A780
  c->r[4]=0u+0xFE010000u; // 8034A784
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8034A788
  c->r[0]=c->r[4]+0xFFFFC000u; // 8034A78C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8034A790
  c->r[4]=c->r[2]+0xFFFFF060u; // 8034A794
  c->r[0]=R8(c->r[4]+c->r[3]); // 8034A798
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8034A79C
  c->r[0]=rotl(c->r[0],14)&0xFFFFC000u; // 8034A7A0
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8034A7A4
  return; // 8034A7A8
}

// GDSetTexCoordScale2__Q34nw4r3g3d4fifoF13_GXTexCoordIDUsUcUcUsUcUc
void f_8034A7AC(Ctx* __restrict c) {
  trace_call(0x8034A7ACu);
  c->r[11]=0u+0xCC010000u; // 8034A7AC
  c->r[12]=0u+0x00000061u; // 8034A7B0
  c->r[10]=0u+0xFE040000u; // 8034A7B4
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 8034A7B8
  c->r[0]=c->r[10]+0xFFFFFFFFu; // 8034A7BC
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8034A7C0
  c->r[10]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8034A7C4
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 8034A7C8
  c->r[3]=rotl(c->r[5],16)&0x00FF0000u; // 8034A7CC
  c->r[5]=rotl(c->r[6],17)&0x01FE0000u; // 8034A7D0
  c->r[3]=c->r[4]|c->r[3]; // 8034A7D4
  c->r[0]=c->r[10]+0x00000030u; // 8034A7D8
  c->r[3]=c->r[5]|c->r[3]; // 8034A7DC
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 8034A7E0
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 8034A7E4
  c->r[4]=c->r[7]+0xFFFFFFFFu; // 8034A7E8
  c->r[0]=c->r[3]|c->r[0]; // 8034A7EC
  c->r[3]=rotl(c->r[8],16)&0x00FF0000u; // 8034A7F0
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 8034A7F4
  c->r[0]=c->r[10]+0x00000031u; // 8034A7F8
  c->r[5]=rotl(c->r[9],17)&0x01FE0000u; // 8034A7FC
  c->r[3]=c->r[4]|c->r[3]; // 8034A800
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 8034A804
  c->r[3]=c->r[5]|c->r[3]; // 8034A808
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 8034A80C
  c->r[0]=c->r[3]|c->r[0]; // 8034A810
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 8034A814
  return; // 8034A818
}

// GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34
void f_8034A81C(Ctx* __restrict c) {
  trace_call(0x8034A81Cu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8034A81C
  c->r[5]=0u+0x00000000u; // 8034A820
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8034A824
  c->f[5]=std::fabs(c->f[2]); // 8034A828
  {uint32_t ea=c->r[2]+0xFFFFF064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034A82C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8034A830
  c->f[9]=std::fabs(c->f[3]); // 8034A834
  {uint32_t ea=c->r[4]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 8034A838
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 8034A83C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 8034A840
  fcmp(c,0,c->f[5],c->f[0]); // 8034A844
  c->f[10]=std::fabs(c->f[6]); // 8034A848
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A84C
  c->f[11]=std::fabs(c->f[4]); // 8034A850
  c->f[12]=std::fabs(c->f[7]); // 8034A854
  c->f[13]=std::fabs(c->f[8]); // 8034A858
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8034A85C
  if (crb(c,2)) { goto L_8034A8A0; } // 8034A860
  fcmp(c,0,c->f[9],c->f[0]); // 8034A864
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8034A868
  if (crb(c,2)) { goto L_8034A8A0; } // 8034A86C
  fcmp(c,0,c->f[10],c->f[0]); // 8034A870
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8034A874
  if (crb(c,2)) { goto L_8034A8A0; } // 8034A878
  fcmp(c,0,c->f[11],c->f[0]); // 8034A87C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8034A880
  if (crb(c,2)) { goto L_8034A8A0; } // 8034A884
  fcmp(c,0,c->f[12],c->f[0]); // 8034A888
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8034A88C
  if (crb(c,2)) { goto L_8034A8A0; } // 8034A890
  fcmp(c,0,c->f[13],c->f[0]); // 8034A894
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8034A898
  if (!crb(c,2)) { goto L_8034A934; } // 8034A89C
L_8034A8A0:;
  {uint32_t ea=c->r[2]+0xFFFFF068u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034A8A0
  {uint32_t ea=c->r[2]+0xFFFFF064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034A8A4
L_8034A8A8:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8034A8A8
  cmps(c,0,(int32_t)c->r[0],46); // 8034A8AC
  if (!crb(c,0)) { goto L_8034A9DC; } // 8034A8B0
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 8034A8B4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 8034A8B8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 8034A8BC
  fcmp(c,0,c->f[5],c->f[0]); // 8034A8C0
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 8034A8C4
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 8034A8C8
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 8034A8CC
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[1]); // 8034A8D0
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[1]); // 8034A8D4
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[1]); // 8034A8D8
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[1]); // 8034A8DC
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[1]); // 8034A8E0
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[1]); // 8034A8E4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8034A8E8
  c->r[5]=c->r[5]+0x00000001u; // 8034A8EC
  if (crb(c,2)) { IRQCHK(c); goto L_8034A8A8; } // 8034A8F0
  fcmp(c,0,c->f[9],c->f[0]); // 8034A8F4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8034A8F8
  if (crb(c,2)) { IRQCHK(c); goto L_8034A8A8; } // 8034A8FC
  fcmp(c,0,c->f[10],c->f[0]); // 8034A900
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8034A904
  if (crb(c,2)) { IRQCHK(c); goto L_8034A8A8; } // 8034A908
  fcmp(c,0,c->f[11],c->f[0]); // 8034A90C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8034A910
  if (crb(c,2)) { IRQCHK(c); goto L_8034A8A8; } // 8034A914
  fcmp(c,0,c->f[12],c->f[0]); // 8034A918
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8034A91C
  if (crb(c,2)) { IRQCHK(c); goto L_8034A8A8; } // 8034A920
  fcmp(c,0,c->f[13],c->f[0]); // 8034A924
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8034A928
  if (crb(c,2)) { IRQCHK(c); goto L_8034A8A8; } // 8034A92C
  goto L_8034A9DC; // 8034A930
L_8034A934:;
  {uint32_t ea=c->r[2]+0xFFFFF068u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034A934
  fcmp(c,0,c->f[5],c->f[1]); // 8034A938
  if (!crb(c,0)) { goto L_8034A9DC; } // 8034A93C
  fcmp(c,0,c->f[9],c->f[1]); // 8034A940
  if (!crb(c,0)) { goto L_8034A9DC; } // 8034A944
  fcmp(c,0,c->f[10],c->f[1]); // 8034A948
  if (!crb(c,0)) { goto L_8034A9DC; } // 8034A94C
  fcmp(c,0,c->f[11],c->f[1]); // 8034A950
  if (!crb(c,0)) { goto L_8034A9DC; } // 8034A954
  fcmp(c,0,c->f[12],c->f[1]); // 8034A958
  if (!crb(c,0)) { goto L_8034A9DC; } // 8034A95C
  fcmp(c,0,c->f[13],c->f[1]); // 8034A960
  if (!crb(c,0)) { goto L_8034A9DC; } // 8034A964
  {uint32_t ea=c->r[2]+0xFFFFF06Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034A968
L_8034A96C:;
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 8034A96C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8034A970
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 8034A974
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 8034A978
  fcmp(c,0,c->f[5],c->f[1]); // 8034A97C
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[0]); // 8034A980
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 8034A984
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 8034A988
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 8034A98C
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 8034A990
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 8034A994
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[0]); // 8034A998
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[0]); // 8034A99C
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[0]); // 8034A9A0
  if (!crb(c,0)) { goto L_8034A9DC; } // 8034A9A4
  fcmp(c,0,c->f[9],c->f[1]); // 8034A9A8
  if (!crb(c,0)) { goto L_8034A9DC; } // 8034A9AC
  fcmp(c,0,c->f[10],c->f[1]); // 8034A9B0
  if (!crb(c,0)) { goto L_8034A9DC; } // 8034A9B4
  fcmp(c,0,c->f[11],c->f[1]); // 8034A9B8
  if (!crb(c,0)) { goto L_8034A9DC; } // 8034A9BC
  fcmp(c,0,c->f[12],c->f[1]); // 8034A9C0
  if (!crb(c,0)) { goto L_8034A9DC; } // 8034A9C4
  fcmp(c,0,c->f[13],c->f[1]); // 8034A9C8
  if (!crb(c,0)) { goto L_8034A9DC; } // 8034A9CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8034A9D0
  cmps(c,0,(int32_t)c->r[0],-17); // 8034A9D4
  if (crb(c,1)) { IRQCHK(c); goto L_8034A96C; } // 8034A9D8
L_8034A9DC:;
  {uint32_t ea=c->r[2]+0xFFFFF070u; c->f[5]=c->ps1[5]=RF32(ea);} // 8034A9DC
  c->r[9]=c->r[5]+0x00000011u; // 8034A9E0
  c->r[0]=c->r[3]+0x00000006u; // 8034A9E4
  c->r[7]=0u+0xCC010000u; // 8034A9E8
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 8034A9EC
  c->r[5]=rotl(c->r[9],22)&0x00C00000u; // 8034A9F0
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[4]); // 8034A9F4
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 8034A9F8
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[3]); // 8034A9FC
  c->r[8]=0u+0x00000061u; // 8034AA00
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8034AA04
  c->r[0]=c->r[3]+0x00000007u; // 8034AA08
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8034AA0C
  c->r[6]=rotl(c->r[9],20)&0x00C00000u; // 8034AA10
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[7]); // 8034AA14
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8034AA18
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[2]);} // 8034AA1C
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8034AA20
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8034AA24
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[4]);} // 8034AA28
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[6]); // 8034AA2C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[8]); // 8034AA30
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8034AA34
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034AA38
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8034AA3C
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 8034AA40
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 8034AA44
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 8034AA48
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8034AA4C
  c->r[0]=c->r[5]|c->r[0]; // 8034AA50
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 8034AA54
  c->r[0]=c->r[3]+0x00000008u; // 8034AA58
  c->r[4]=rotl(c->r[9],18)&0x00C00000u; // 8034AA5C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 8034AA60
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8034AA64
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 8034AA68
  c->r[3]=R32(c->r[1]+0x00000024u); // 8034AA6C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8034AA70
  c->r[5]=rotl(c->r[3],11)&0x003FF800u; // 8034AA74
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8034AA78
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 8034AA7C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8034AA80
  c->r[5]=c->r[6]|c->r[5]; // 8034AA84
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 8034AA88
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 8034AA8C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034AA90
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 8034AA94
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 8034AA98
  c->r[0]=(rotl(c->r[3],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 8034AA9C
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 8034AAA0
  c->r[0]=c->r[4]|c->r[0]; // 8034AAA4
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 8034AAA8
  c->r[1]=c->r[1]+0x00000040u; // 8034AAAC
  return; // 8034AAB0
}

// GDResetCurrentMtx__Q34nw4r3g3d4fifoFv
void f_8034AAB4(Ctx* __restrict c) {
  trace_call(0x8034AAB4u);
  c->r[8]=0u+0xCC010000u; // 8034AAB4
  c->r[9]=0u+0x00000008u; // 8034AAB8
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 8034AABC
  c->r[0]=0u+0x00000030u; // 8034AAC0
  c->r[4]=0u+0x3CF40000u; // 8034AAC4
  c->r[3]=0u+0x00F40000u; // 8034AAC8
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 8034AACC
  c->r[7]=c->r[4]+0xFFFFCF00u; // 8034AAD0
  c->r[5]=c->r[3]+0xFFFFCF3Cu; // 8034AAD4
  c->r[6]=0u+0x00000040u; // 8034AAD8
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 8034AADC
  c->r[4]=0u+0x00000010u; // 8034AAE0
  c->r[3]=0u+0x00000001u; // 8034AAE4
  c->r[0]=0u+0x00001018u; // 8034AAE8
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 8034AAEC
  W8(c->r[8]+0xFFFF8000u,c->r[6]); // 8034AAF0
  W32(c->r[8]+0xFFFF8000u,c->r[5]); // 8034AAF4
  W8(c->r[8]+0xFFFF8000u,c->r[4]); // 8034AAF8
  W16(c->r[8]+0xFFFF8000u,c->r[3]); // 8034AAFC
  W16(c->r[8]+0xFFFF8000u,c->r[0]); // 8034AB00
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 8034AB04
  W32(c->r[8]+0xFFFF8000u,c->r[5]); // 8034AB08
  return; // 8034AB0C
}

// GDSetCurrentMtx__Q34nw4r3g3d4fifoFPCUl
void f_8034AB10(Ctx* __restrict c) {
  trace_call(0x8034AB10u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 8034AB10
  c->r[5]=0u+0xCC010000u; // 8034AB14
  c->r[0]=0u+0x00000010u; // 8034AB18
  c->r[6]=R32(c->r[3]+0x00000004u); // 8034AB1C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8034AB20
  c->r[4]=0u+0x00000001u; // 8034AB24
  c->r[8]=R32(c->r[3]+0x00000008u); // 8034AB28
  c->r[7]=rotl(c->r[7],6)&0xFFFFFFC0u; // 8034AB2C
  c->r[6]=rotl(c->r[6],12)&0xFFFFF000u; // 8034AB30
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 8034AB34
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 8034AB38
  c->r[6]=c->r[7]|c->r[6]; // 8034AB3C
  c->r[0]=0u+0x00001018u; // 8034AB40
  c->r[8]=rotl(c->r[8],18)&0xFFFC0000u; // 8034AB44
  c->r[10]=rotl(c->r[9],24)&0xFF000000u; // 8034AB48
  c->r[4]=R32(c->r[3]+0x00000014u); // 8034AB4C
  c->r[9]=c->r[8]|c->r[6]; // 8034AB50
  c->r[7]=R32(c->r[3]+0x00000018u); // 8034AB54
  c->r[6]=R32(c->r[3]+0x00000010u); // 8034AB58
  c->r[9]=c->r[10]|c->r[9]; // 8034AB5C
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 8034AB60
  c->r[3]=rotl(c->r[4],6)&0xFFFFFFC0u; // 8034AB64
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 8034AB68
  c->r[0]=c->r[6]|c->r[3]; // 8034AB6C
  c->r[4]=rotl(c->r[7],12)&0xFFFFF000u; // 8034AB70
  c->r[3]=rotl(c->r[8],18)&0xFFFC0000u; // 8034AB74
  c->r[0]=c->r[4]|c->r[0]; // 8034AB78
  W32(c->r[5]+0xFFFF8000u,c->r[9]); // 8034AB7C
  c->r[0]=c->r[3]|c->r[0]; // 8034AB80
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8034AB84
  return; // 8034AB88
}

// GDLoadTexMtxImm3x3__Q34nw4r3g3d4fifoFRCQ34nw4r4math5MTX33Ul
void f_8034AB8C(Ctx* __restrict c) {
  trace_call(0x8034AB8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034AB8C
  c->r[0]=c->lr; // 8034AB90
  {uint32_t ea=c->r[2]+0xFFFFF074u; c->f[6]=c->ps1[6]=RF32(ea);} // 8034AB94
  c->r[5]=0u+0x00000000u; // 8034AB98
  W32(c->r[1]+0x00000044u,c->r[0]); // 8034AB9C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 8034ABA0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 8034ABA4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 8034ABA8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8034ABAC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 8034ABB0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 8034ABB4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8034ABB8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8034ABBC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034ABC0
  c->r[3]=c->r[1]+0x00000008u; // 8034ABC4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[9]);} // 8034ABC8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[8]);} // 8034ABCC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[7]);} // 8034ABD0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 8034ABD4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 8034ABD8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 8034ABDC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 8034ABE0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[6]);} // 8034ABE4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 8034ABE8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8034ABEC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8034ABF0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[6]);} // 8034ABF4
  c->lr=0x8034ABFCu; f_802B8DB0(c); // 8034ABF8
  c->r[0]=R32(c->r[1]+0x00000044u); // 8034ABFC
  c->lr=c->r[0]; // 8034AC00
  c->r[1]=c->r[1]+0x00000040u; // 8034AC04
  return; // 8034AC08
}

// Copy32ByteBlocks__Q34nw4r3g3d6detailFPvPCvUl
void f_8034AC0C(Ctx* __restrict c) {
  trace_call(0x8034AC0Cu);
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; cr0(c,c->r[5]); // 8034AC0C
  if (crb(c,2)) return; // 8034AC10
  c->r[0]=rotl(c->r[5],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 8034AC14
  c->ctr=c->r[0]; // 8034AC18
  if (crb(c,2)) { goto L_8034ACB4; } // 8034AC1C
L_8034AC20:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 8034AC20
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=RF64(ea);} // 8034AC24
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 8034AC28
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=RF64(ea);} // 8034AC2C
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[1]);} // 8034AC30
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 8034AC34
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 8034AC38
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=RF64(ea);} // 8034AC3C
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[1]);} // 8034AC40
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=RF64(ea);} // 8034AC44
  {uint32_t ea=c->r[3]+0x00000020u; WF64(ea,c->f[0]);} // 8034AC48
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=RF64(ea);} // 8034AC4C
  {uint32_t ea=c->r[3]+0x00000028u; WF64(ea,c->f[1]);} // 8034AC50
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=RF64(ea);} // 8034AC54
  {uint32_t ea=c->r[3]+0x00000030u; WF64(ea,c->f[0]);} // 8034AC58
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=RF64(ea);} // 8034AC5C
  {uint32_t ea=c->r[3]+0x00000038u; WF64(ea,c->f[1]);} // 8034AC60
  {uint32_t ea=c->r[4]+0x00000048u; c->f[1]=RF64(ea);} // 8034AC64
  {uint32_t ea=c->r[3]+0x00000040u; WF64(ea,c->f[0]);} // 8034AC68
  {uint32_t ea=c->r[4]+0x00000050u; c->f[0]=RF64(ea);} // 8034AC6C
  {uint32_t ea=c->r[3]+0x00000048u; WF64(ea,c->f[1]);} // 8034AC70
  {uint32_t ea=c->r[4]+0x00000058u; c->f[1]=RF64(ea);} // 8034AC74
  {uint32_t ea=c->r[3]+0x00000050u; WF64(ea,c->f[0]);} // 8034AC78
  {uint32_t ea=c->r[4]+0x00000060u; c->f[0]=RF64(ea);} // 8034AC7C
  {uint32_t ea=c->r[3]+0x00000058u; WF64(ea,c->f[1]);} // 8034AC80
  {uint32_t ea=c->r[4]+0x00000068u; c->f[1]=RF64(ea);} // 8034AC84
  {uint32_t ea=c->r[3]+0x00000060u; WF64(ea,c->f[0]);} // 8034AC88
  {uint32_t ea=c->r[4]+0x00000070u; c->f[0]=RF64(ea);} // 8034AC8C
  {uint32_t ea=c->r[3]+0x00000068u; WF64(ea,c->f[1]);} // 8034AC90
  {uint32_t ea=c->r[4]+0x00000078u; c->f[1]=RF64(ea);} // 8034AC94
  c->r[4]=c->r[4]+0x00000080u; // 8034AC98
  {uint32_t ea=c->r[3]+0x00000070u; WF64(ea,c->f[0]);} // 8034AC9C
  {uint32_t ea=c->r[3]+0x00000078u; WF64(ea,c->f[1]);} // 8034ACA0
  c->r[3]=c->r[3]+0x00000080u; // 8034ACA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8034AC20; } // 8034ACA8
  c->r[5]=c->r[5]&0x00000003u; cr0(c,c->r[5]); // 8034ACAC
  if (crb(c,2)) return; // 8034ACB0
L_8034ACB4:;
  c->ctr=c->r[5]; // 8034ACB4
L_8034ACB8:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 8034ACB8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=RF64(ea);} // 8034ACBC
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 8034ACC0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=RF64(ea);} // 8034ACC4
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[1]);} // 8034ACC8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 8034ACCC
  c->r[4]=c->r[4]+0x00000020u; // 8034ACD0
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 8034ACD4
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[1]);} // 8034ACD8
  c->r[3]=c->r[3]+0x00000020u; // 8034ACDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8034ACB8; } // 8034ACE0
  return; // 8034ACE4
}

// ZeroMemory32ByteBlocks__Q34nw4r3g3d6detailFPvUl
void f_8034ACE8(Ctx* __restrict c) {
  trace_call(0x8034ACE8u);
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; cr0(c,c->r[4]); // 8034ACE8
  {uint32_t ea=c->r[2]+0xFFFFF078u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034ACEC
  if (crb(c,2)) return; // 8034ACF0
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 8034ACF4
  c->ctr=c->r[0]; // 8034ACF8
  if (crb(c,2)) { goto L_8034AD90; } // 8034ACFC
L_8034AD00:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 8034AD00
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 8034AD04
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 8034AD08
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 8034AD0C
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 8034AD10
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,0,ea,0,0);} // 8034AD14
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,0,ea,0,0);} // 8034AD18
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,0,ea,0,0);} // 8034AD1C
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,0,ea,0,0);} // 8034AD20
  {uint32_t ea=c->r[3]+0x00000048u; psq_store(c,0,ea,0,0);} // 8034AD24
  {uint32_t ea=c->r[3]+0x00000050u; psq_store(c,0,ea,0,0);} // 8034AD28
  {uint32_t ea=c->r[3]+0x00000058u; psq_store(c,0,ea,0,0);} // 8034AD2C
  {uint32_t ea=c->r[3]+0x00000060u; psq_store(c,0,ea,0,0);} // 8034AD30
  {uint32_t ea=c->r[3]+0x00000068u; psq_store(c,0,ea,0,0);} // 8034AD34
  {uint32_t ea=c->r[3]+0x00000070u; psq_store(c,0,ea,0,0);} // 8034AD38
  {uint32_t ea=c->r[3]+0x00000078u; psq_store(c,0,ea,0,0);} // 8034AD3C
  {uint32_t ea=c->r[3]+0x00000080u; psq_store(c,0,ea,0,0);} // 8034AD40
  {uint32_t ea=c->r[3]+0x00000088u; psq_store(c,0,ea,0,0);} // 8034AD44
  {uint32_t ea=c->r[3]+0x00000090u; psq_store(c,0,ea,0,0);} // 8034AD48
  {uint32_t ea=c->r[3]+0x00000098u; psq_store(c,0,ea,0,0);} // 8034AD4C
  {uint32_t ea=c->r[3]+0x000000A0u; psq_store(c,0,ea,0,0);} // 8034AD50
  {uint32_t ea=c->r[3]+0x000000A8u; psq_store(c,0,ea,0,0);} // 8034AD54
  {uint32_t ea=c->r[3]+0x000000B0u; psq_store(c,0,ea,0,0);} // 8034AD58
  {uint32_t ea=c->r[3]+0x000000B8u; psq_store(c,0,ea,0,0);} // 8034AD5C
  {uint32_t ea=c->r[3]+0x000000C0u; psq_store(c,0,ea,0,0);} // 8034AD60
  {uint32_t ea=c->r[3]+0x000000C8u; psq_store(c,0,ea,0,0);} // 8034AD64
  {uint32_t ea=c->r[3]+0x000000D0u; psq_store(c,0,ea,0,0);} // 8034AD68
  {uint32_t ea=c->r[3]+0x000000D8u; psq_store(c,0,ea,0,0);} // 8034AD6C
  {uint32_t ea=c->r[3]+0x000000E0u; psq_store(c,0,ea,0,0);} // 8034AD70
  {uint32_t ea=c->r[3]+0x000000E8u; psq_store(c,0,ea,0,0);} // 8034AD74
  {uint32_t ea=c->r[3]+0x000000F0u; psq_store(c,0,ea,0,0);} // 8034AD78
  {uint32_t ea=c->r[3]+0x000000F8u; psq_store(c,0,ea,0,0);} // 8034AD7C
  c->r[3]=c->r[3]+0x00000100u; // 8034AD80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8034AD00; } // 8034AD84
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 8034AD88
  if (crb(c,2)) return; // 8034AD8C
L_8034AD90:;
  c->ctr=c->r[4]; // 8034AD90
L_8034AD94:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 8034AD94
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 8034AD98
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 8034AD9C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 8034ADA0
  c->r[3]=c->r[3]+0x00000020u; // 8034ADA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8034AD94; } // 8034ADA8
  return; // 8034ADAC
}

// EnvironmentMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_8034ADB0(Ctx* __restrict c) {
  trace_call(0x8034ADB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034ADB0
  c->r[0]=c->lr; // 8034ADB4
  cmps(c,0,(int32_t)c->r[3],0); // 8034ADB8
  W32(c->r[1]+0x00000064u,c->r[0]); // 8034ADBC
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8034ADC0
  c->r[31]=c->r[3]|c->r[3]; // 8034ADC4
  W32(c->r[1]+0x00000058u,c->r[30]); // 8034ADC8
  W32(c->r[1]+0x00000054u,c->r[29]); // 8034ADCC
  if (crb(c,2)) { goto L_8034B178; } // 8034ADD0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8034ADD4
  cmps(c,1,(int32_t)c->r[0],0); // 8034ADD8
  if (crb(c,4)) { goto L_8034AE8C; } // 8034ADDC
  cmps(c,0,(int32_t)c->r[0],32); // 8034ADE0
  if (!crb(c,0)) { goto L_8034AE8C; } // 8034ADE4
  if (!crb(c,0)) { goto L_8034AE08; } // 8034ADE8
  if (crb(c,4)) { goto L_8034AE08; } // 8034ADEC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8034ADF0
  c->r[3]=0u+0x806C0000u; // 8034ADF4
  c->r[3]=c->r[3]+0xFFFFD8E0u; // 8034ADF8
  c->r[3]=c->r[3]+c->r[0]; // 8034ADFC
  c->r[29]=c->r[3]+0x00000034u; // 8034AE00
  goto L_8034AE0C; // 8034AE04
L_8034AE08:;
  c->r[29]=0u+0x00000000u; // 8034AE08
L_8034AE0C:;
  c->r[30]=0u+0x806C0000u; // 8034AE0C
  c->r[0]=R16(c->r[30]+0xFFFFD8E0u); // 8034AE10
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8034AE14
  if (!crb(c,2)) { goto L_8034AE44; } // 8034AE18
  c->r[3]=c->r[30]+0xFFFFD8E0u; // 8034AE1C
  c->r[0]=R16(c->r[3]+0x00000002u); // 8034AE20
  c->r[4]=c->r[3]+0x00000004u; // 8034AE24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8034AE28
  c->r[3]=c->r[3]+c->r[0]; // 8034AE2C
  c->r[3]=c->r[3]+0x00000034u; // 8034AE30
  c->lr=0x8034AE38u; f_80295DFC(c); // 8034AE34
  c->r[0]=R16(c->r[30]+0xFFFFD8E0u); // 8034AE38
  c->r[0]=c->r[0]|0x00000001u; // 8034AE3C
  W16(c->r[30]+0xFFFFD8E0u,c->r[0]); // 8034AE40
L_8034AE44:;
  c->r[30]=0u+0x806C0000u; // 8034AE44
  c->r[3]=c->r[29]|c->r[29]; // 8034AE48
  c->r[30]=c->r[30]+0xFFFFD8E0u; // 8034AE4C
  c->r[5]=c->r[31]|c->r[31]; // 8034AE50
  c->r[4]=c->r[30]+0x00000004u; // 8034AE54
  c->lr=0x8034AE5Cu; f_80295B48(c); // 8034AE58
  {uint32_t ea=c->r[2]+0xFFFFF084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034AE5C
  c->r[4]=c->r[31]|c->r[31]; // 8034AE60
  c->r[5]=c->r[31]|c->r[31]; // 8034AE64
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 8034AE68
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8034AE6C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 8034AE70
  c->r[0]=R16(c->r[30]+0x00000002u); // 8034AE74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8034AE78
  c->r[3]=c->r[30]+c->r[0]; // 8034AE7C
  c->r[3]=c->r[3]+0x00001434u; // 8034AE80
  c->lr=0x8034AE88u; f_80295B48(c); // 8034AE84
  goto L_8034B178; // 8034AE88
L_8034AE8C:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8034AE8C
  cmps(c,1,(int32_t)c->r[0],0); // 8034AE90
  if (crb(c,4)) { goto L_8034B158; } // 8034AE94
  cmps(c,0,(int32_t)c->r[0],128); // 8034AE98
  if (!crb(c,0)) { goto L_8034B158; } // 8034AE9C
  if (crb(c,4)) { goto L_8034AEC0; } // 8034AEA0
  if (!crb(c,0)) { goto L_8034AEC0; } // 8034AEA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 8034AEA8
  c->r[3]=0u+0x806C0000u; // 8034AEAC
  c->r[3]=c->r[3]+0xFFFFAEB4u; // 8034AEB0
  c->r[3]=c->r[3]+c->r[0]; // 8034AEB4
  c->r[3]=c->r[3]+0x0000002Cu; // 8034AEB8
  goto L_8034AEC4; // 8034AEBC
L_8034AEC0:;
  c->r[3]=0u+0x00000000u; // 8034AEC0
L_8034AEC4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8034AEC4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8034AEC8
  if (crb(c,2)) { goto L_8034B158; } // 8034AECC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 8034AED0
  if (crb(c,0)) { goto L_8034AEF8; } // 8034AED4
  cmps(c,0,(int32_t)c->r[0],128); // 8034AED8
  if (!crb(c,0)) { goto L_8034AEF8; } // 8034AEDC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 8034AEE0
  c->r[3]=0u+0x806C0000u; // 8034AEE4
  c->r[3]=c->r[3]+0xFFFFAEB4u; // 8034AEE8
  c->r[3]=c->r[3]+c->r[0]; // 8034AEEC
  c->r[29]=c->r[3]+0x0000002Cu; // 8034AEF0
  goto L_8034AEFC; // 8034AEF4
L_8034AEF8:;
  c->r[29]=0u+0x00000000u; // 8034AEF8
L_8034AEFC:;
  c->r[3]=c->r[29]|c->r[29]; // 8034AEFC
  c->r[4]=c->r[1]+0x00000038u; // 8034AF00
  c->lr=0x8034AF08u; f_8035F0F8(c); // 8034AF04
  c->r[30]=0u+0x806C0000u; // 8034AF08
  c->r[0]=R16(c->r[30]+0xFFFFD8E0u); // 8034AF0C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8034AF10
  if (!crb(c,2)) { goto L_8034AF40; } // 8034AF14
  c->r[3]=c->r[30]+0xFFFFD8E0u; // 8034AF18
  c->r[0]=R16(c->r[3]+0x00000002u); // 8034AF1C
  c->r[4]=c->r[3]+0x00000004u; // 8034AF20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8034AF24
  c->r[3]=c->r[3]+c->r[0]; // 8034AF28
  c->r[3]=c->r[3]+0x00000034u; // 8034AF2C
  c->lr=0x8034AF34u; f_80295DFC(c); // 8034AF30
  c->r[0]=R16(c->r[30]+0xFFFFD8E0u); // 8034AF34
  c->r[0]=c->r[0]|0x00000001u; // 8034AF38
  W16(c->r[30]+0xFFFFD8E0u,c->r[0]); // 8034AF3C
L_8034AF40:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 8034AF40
  c->r[3]=0u+0x806C0000u; // 8034AF44
  c->r[3]=c->r[3]+0xFFFFD8E0u; // 8034AF48
  c->r[4]=0u+0x00000000u; // 8034AF4C
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 8034AF50
  c->r[30]=c->r[3]+0x00000004u; // 8034AF54
  if (!crb(c,2)) { goto L_8034AF68; } // 8034AF58
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 8034AF5C
  if (!crb(c,2)) { goto L_8034AF68; } // 8034AF60
  c->r[4]=0u+0x00000001u; // 8034AF64
L_8034AF68:;
  cmps(c,0,(int32_t)c->r[4],0); // 8034AF68
  if (!crb(c,2)) { goto L_8034AF98; } // 8034AF6C
  {uint32_t ea=c->r[2]+0xFFFFF084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034AF70
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034AF74
  fcmp(c,0,c->f[1],c->f[0]); // 8034AF78
  if (!crb(c,2)) { goto L_8034B018; } // 8034AF7C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034AF80
  fcmp(c,0,c->f[1],c->f[0]); // 8034AF84
  if (!crb(c,2)) { goto L_8034B018; } // 8034AF88
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034AF8C
  fcmp(c,0,c->f[1],c->f[0]); // 8034AF90
  if (!crb(c,2)) { goto L_8034B018; } // 8034AF94
L_8034AF98:;
  c->r[3]=c->r[29]|c->r[29]; // 8034AF98
  c->r[4]=c->r[1]+0x00000038u; // 8034AF9C
  c->lr=0x8034AFA4u; f_8035F0DC(c); // 8034AFA0
  c->r[3]=c->r[1]+0x00000038u; // 8034AFA4
  c->r[4]=c->r[30]|c->r[30]; // 8034AFA8
  c->r[5]=c->r[3]|c->r[3]; // 8034AFAC
  c->lr=0x8034AFB4u; f_8036B2F4(c); // 8034AFB0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034AFB4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 8034AFB8
  c->f[6]=-c->f[0]; // 8034AFBC
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8034AFC0
  c->f[4]=-c->f[2]; // 8034AFC4
  {uint32_t ea=c->r[2]+0xFFFFF084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034AFC8
  c->f[5]=-c->f[1]; // 8034AFCC
  c->f[3]=c->ps1[3]=S(c->f[6]); // 8034AFD0
  c->f[1]=c->ps1[1]=S(c->f[4]); // 8034AFD4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 8034AFD8
  c->f[2]=c->ps1[2]=S(c->f[5]); // 8034AFDC
  fcmp(c,0,c->f[0],c->f[3]); // 8034AFE0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 8034AFE4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 8034AFE8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 8034AFEC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 8034AFF0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 8034AFF4
  if (!crb(c,2)) { goto L_8034B028; } // 8034AFF8
  fcmp(c,0,c->f[0],c->f[2]); // 8034AFFC
  if (!crb(c,2)) { goto L_8034B028; } // 8034B000
  fcmp(c,0,c->f[0],c->f[1]); // 8034B004
  if (!crb(c,2)) { goto L_8034B028; } // 8034B008
  {uint32_t ea=c->r[2]+0xFFFFF088u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B00C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8034B010
  goto L_8034B028; // 8034B014
L_8034B018:;
  c->r[3]=c->r[1]+0x00000038u; // 8034B018
  c->r[4]=c->r[30]|c->r[30]; // 8034B01C
  c->r[5]=c->r[3]|c->r[3]; // 8034B020
  c->lr=0x8034B028u; f_8036B2F4(c); // 8034B024
L_8034B028:;
  c->r[3]=c->r[1]+0x00000038u; // 8034B028
  c->r[4]=c->r[3]|c->r[3]; // 8034B02C
  c->lr=0x8034B034u; f_80296AB0(c); // 8034B030
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034B034
  {uint32_t ea=c->r[2]+0xFFFFF08Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B038
  c->f[1]=std::fabs(c->f[1]); // 8034B03C
  fcmp(c,0,c->f[1],c->f[0]); // 8034B040
  if (!crb(c,0)) { goto L_8034B08C; } // 8034B044
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034B048
  c->f[1]=std::fabs(c->f[1]); // 8034B04C
  fcmp(c,0,c->f[1],c->f[0]); // 8034B050
  if (!crb(c,0)) { goto L_8034B08C; } // 8034B054
  {uint32_t ea=c->r[2]+0xFFFFF084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034B058
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B05C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 8034B060
  fcmp(c,0,c->f[0],c->f[1]); // 8034B064
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8034B068
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8034B06C
  if (!crb(c,2)) { goto L_8034B080; } // 8034B070
  {uint32_t ea=c->r[2]+0xFFFFF088u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B074
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8034B078
  goto L_8034B0A0; // 8034B07C
L_8034B080:;
  {uint32_t ea=c->r[2]+0xFFFFF090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B080
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8034B084
  goto L_8034B0A0; // 8034B088
L_8034B08C:;
  {uint32_t ea=c->r[2]+0xFFFFF084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034B08C
  {uint32_t ea=c->r[2]+0xFFFFF090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B090
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 8034B094
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8034B098
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8034B09C
L_8034B0A0:;
  c->r[3]=c->r[1]+0x00000038u; // 8034B0A0
  c->r[4]=c->r[1]+0x0000002Cu; // 8034B0A4
  c->r[5]=c->r[1]+0x00000020u; // 8034B0A8
  c->lr=0x8034B0B0u; f_80296B70(c); // 8034B0AC
  c->r[3]=c->r[1]+0x00000020u; // 8034B0B0
  c->r[4]=c->r[3]|c->r[3]; // 8034B0B4
  c->lr=0x8034B0BCu; f_80296AB0(c); // 8034B0B8
  c->r[3]=c->r[1]+0x00000020u; // 8034B0BC
  c->r[4]=c->r[1]+0x00000038u; // 8034B0C0
  c->r[5]=c->r[1]+0x00000014u; // 8034B0C4
  c->lr=0x8034B0CCu; f_80296B70(c); // 8034B0C8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B0CC
  c->r[3]=c->r[31]|c->r[31]; // 8034B0D0
  c->r[4]=c->r[30]|c->r[30]; // 8034B0D4
  c->r[5]=c->r[31]|c->r[31]; // 8034B0D8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 8034B0DC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B0E0
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 8034B0E4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B0E8
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 8034B0EC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B0F0
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 8034B0F4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B0F8
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 8034B0FC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B100
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 8034B104
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B108
  c->f[0]=-c->f[0]; // 8034B10C
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 8034B110
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B114
  c->f[0]=-c->f[0]; // 8034B118
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 8034B11C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B120
  c->f[0]=-c->f[0]; // 8034B124
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 8034B128
  c->lr=0x8034B130u; f_80295B48(c); // 8034B12C
  {uint32_t ea=c->r[2]+0xFFFFF084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B130
  c->r[3]=0u+0x803C0000u; // 8034B134
  c->r[4]=c->r[31]|c->r[31]; // 8034B138
  c->r[5]=c->r[31]|c->r[31]; // 8034B13C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 8034B140
  c->r[3]=c->r[3]+0x000048E8u; // 8034B144
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8034B148
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 8034B14C
  c->lr=0x8034B154u; f_80295B48(c); // 8034B150
  goto L_8034B178; // 8034B154
L_8034B158:;
  c->r[3]=0u+0x806C0000u; // 8034B158
  c->r[4]=c->r[31]|c->r[31]; // 8034B15C
  c->r[3]=c->r[3]+0xFFFFD8E0u; // 8034B160
  c->r[0]=R16(c->r[3]+0x00000002u); // 8034B164
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8034B168
  c->r[3]=c->r[3]+c->r[0]; // 8034B16C
  c->r[3]=c->r[3]+0x00001434u; // 8034B170
  c->lr=0x8034B178u; f_80295B14(c); // 8034B174
L_8034B178:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 8034B178
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8034B17C
  c->r[30]=R32(c->r[1]+0x00000058u); // 8034B180
  c->r[29]=R32(c->r[1]+0x00000054u); // 8034B184
  c->lr=c->r[0]; // 8034B188
  c->r[1]=c->r[1]+0x00000060u; // 8034B18C
  return; // 8034B190
}

// ProjectionMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_8034B194(Ctx* __restrict c) {
  trace_call(0x8034B194u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034B194
  c->r[0]=c->lr; // 8034B198
  cmps(c,0,(int32_t)c->r[3],0); // 8034B19C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034B1A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034B1A4
  c->r[31]=c->r[3]|c->r[3]; // 8034B1A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034B1AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034B1B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8034B1B4
  c->r[28]=c->r[4]|c->r[4]; // 8034B1B8
  if (crb(c,2)) { goto L_8034B2A0; } // 8034B1BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8034B1C0
  cmps(c,1,(int32_t)c->r[0],0); // 8034B1C4
  if (crb(c,4)) { goto L_8034B280; } // 8034B1C8
  cmps(c,0,(int32_t)c->r[0],32); // 8034B1CC
  if (!crb(c,0)) { goto L_8034B280; } // 8034B1D0
  if (!crb(c,0)) { goto L_8034B1F4; } // 8034B1D4
  if (crb(c,4)) { goto L_8034B1F4; } // 8034B1D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8034B1DC
  c->r[3]=0u+0x806C0000u; // 8034B1E0
  c->r[3]=c->r[3]+0xFFFFD8E0u; // 8034B1E4
  c->r[3]=c->r[3]+c->r[0]; // 8034B1E8
  c->r[29]=c->r[3]+0x00000034u; // 8034B1EC
  goto L_8034B1F8; // 8034B1F0
L_8034B1F4:;
  c->r[29]=0u+0x00000000u; // 8034B1F4
L_8034B1F8:;
  c->r[30]=0u+0x806C0000u; // 8034B1F8
  c->r[0]=R16(c->r[30]+0xFFFFD8E0u); // 8034B1FC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8034B200
  if (!crb(c,2)) { goto L_8034B230; } // 8034B204
  c->r[3]=c->r[30]+0xFFFFD8E0u; // 8034B208
  c->r[0]=R16(c->r[3]+0x00000002u); // 8034B20C
  c->r[4]=c->r[3]+0x00000004u; // 8034B210
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8034B214
  c->r[3]=c->r[3]+c->r[0]; // 8034B218
  c->r[3]=c->r[3]+0x00000034u; // 8034B21C
  c->lr=0x8034B224u; f_80295DFC(c); // 8034B220
  c->r[0]=R16(c->r[30]+0xFFFFD8E0u); // 8034B224
  c->r[0]=c->r[0]|0x00000001u; // 8034B228
  W16(c->r[30]+0xFFFFD8E0u,c->r[0]); // 8034B22C
L_8034B230:;
  c->r[30]=0u+0x806C0000u; // 8034B230
  c->r[3]=c->r[29]|c->r[29]; // 8034B234
  c->r[30]=c->r[30]+0xFFFFD8E0u; // 8034B238
  c->r[5]=c->r[31]|c->r[31]; // 8034B23C
  c->r[4]=c->r[30]+0x00000004u; // 8034B240
  c->lr=0x8034B248u; f_80295B48(c); // 8034B244
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 8034B248
  cmps(c,0,(int32_t)c->r[0],32); // 8034B24C
  if (!crb(c,0)) { goto L_8034B26C; } // 8034B250
  cmps(c,0,(int32_t)c->r[0],0); // 8034B254
  if (crb(c,0)) { goto L_8034B26C; } // 8034B258
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8034B25C
  c->r[3]=c->r[30]+c->r[0]; // 8034B260
  c->r[3]=c->r[3]+0x00000E34u; // 8034B264
  goto L_8034B270; // 8034B268
L_8034B26C:;
  c->r[3]=0u+0x00000000u; // 8034B26C
L_8034B270:;
  c->r[4]=c->r[31]|c->r[31]; // 8034B270
  c->r[5]=c->r[31]|c->r[31]; // 8034B274
  c->lr=0x8034B27Cu; f_80295B48(c); // 8034B278
  goto L_8034B2A0; // 8034B27C
L_8034B280:;
  c->r[3]=0u+0x806C0000u; // 8034B280
  c->r[4]=c->r[31]|c->r[31]; // 8034B284
  c->r[3]=c->r[3]+0xFFFFD8E0u; // 8034B288
  c->r[0]=R16(c->r[3]+0x00000002u); // 8034B28C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8034B290
  c->r[3]=c->r[3]+c->r[0]; // 8034B294
  c->r[3]=c->r[3]+0x00000E34u; // 8034B298
  c->lr=0x8034B2A0u; f_80295B14(c); // 8034B29C
L_8034B2A0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034B2A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034B2A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034B2A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034B2AC
  c->r[28]=R32(c->r[1]+0x00000010u); // 8034B2B0
  c->lr=c->r[0]; // 8034B2B4
  c->r[1]=c->r[1]+0x00000020u; // 8034B2B8
  return; // 8034B2BC
}

// EnvironmentSpecularMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_8034B2C0(Ctx* __restrict c) {
  trace_call(0x8034B2C0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034B2C0
  c->r[0]=c->lr; // 8034B2C4
  cmps(c,0,(int32_t)c->r[3],0); // 8034B2C8
  W32(c->r[1]+0x00000094u,c->r[0]); // 8034B2CC
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8034B2D0
  W32(c->r[1]+0x00000088u,c->r[30]); // 8034B2D4
  c->r[30]=c->r[5]|c->r[5]; // 8034B2D8
  W32(c->r[1]+0x00000084u,c->r[29]); // 8034B2DC
  c->r[29]=c->r[4]|c->r[4]; // 8034B2E0
  W32(c->r[1]+0x00000080u,c->r[28]); // 8034B2E4
  c->r[28]=c->r[3]|c->r[3]; // 8034B2E8
  if (crb(c,2)) { goto L_8034B6EC; } // 8034B2EC
  c->r[31]=0u+0x806C0000u; // 8034B2F0
  c->r[4]=c->r[31]+0xFFFFD8E0u; // 8034B2F4
  c->r[0]=R16(c->r[31]+0xFFFFD8E0u); // 8034B2F8
  c->r[3]=R16(c->r[4]+0x00000002u); // 8034B2FC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8034B300
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 8034B304
  c->r[3]=c->r[4]+c->r[0]; // 8034B308
  c->r[3]=c->r[3]+0x00000034u; // 8034B30C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8034B310
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034B314
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B318
  c->f[2]=-c->f[2]; // 8034B31C
  c->f[1]=-c->f[1]; // 8034B320
  c->f[0]=-c->f[0]; // 8034B324
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 8034B328
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 8034B32C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8034B330
  if (!crb(c,2)) { goto L_8034B34C; } // 8034B334
  c->r[4]=c->r[4]+0x00000004u; // 8034B338
  c->lr=0x8034B340u; f_80295DFC(c); // 8034B33C
  c->r[0]=R16(c->r[31]+0xFFFFD8E0u); // 8034B340
  c->r[0]=c->r[0]|0x00000001u; // 8034B344
  W16(c->r[31]+0xFFFFD8E0u,c->r[0]); // 8034B348
L_8034B34C:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 8034B34C
  c->r[3]=0u+0x806C0000u; // 8034B350
  cmps(c,1,(int32_t)c->r[0],0); // 8034B354
  c->r[3]=c->r[3]+0xFFFFD8E0u; // 8034B358
  c->r[31]=c->r[3]+0x00000004u; // 8034B35C
  if (crb(c,4)) { goto L_8034B57C; } // 8034B360
  cmps(c,0,(int32_t)c->r[0],128); // 8034B364
  if (!crb(c,0)) { goto L_8034B57C; } // 8034B368
  if (crb(c,4)) { goto L_8034B38C; } // 8034B36C
  if (!crb(c,0)) { goto L_8034B38C; } // 8034B370
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 8034B374
  c->r[3]=0u+0x806C0000u; // 8034B378
  c->r[3]=c->r[3]+0xFFFFAEB4u; // 8034B37C
  c->r[3]=c->r[3]+c->r[0]; // 8034B380
  c->r[3]=c->r[3]+0x0000002Cu; // 8034B384
  goto L_8034B390; // 8034B388
L_8034B38C:;
  c->r[3]=0u+0x00000000u; // 8034B38C
L_8034B390:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8034B390
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8034B394
  if (crb(c,2)) { goto L_8034B57C; } // 8034B398
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; cr0(c,c->r[0]); // 8034B39C
  if (crb(c,0)) { goto L_8034B3C4; } // 8034B3A0
  cmps(c,0,(int32_t)c->r[0],128); // 8034B3A4
  if (!crb(c,0)) { goto L_8034B3C4; } // 8034B3A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 8034B3AC
  c->r[3]=0u+0x806C0000u; // 8034B3B0
  c->r[3]=c->r[3]+0xFFFFAEB4u; // 8034B3B4
  c->r[3]=c->r[3]+c->r[0]; // 8034B3B8
  c->r[29]=c->r[3]+0x0000002Cu; // 8034B3BC
  goto L_8034B3C8; // 8034B3C0
L_8034B3C4:;
  c->r[29]=0u+0x00000000u; // 8034B3C4
L_8034B3C8:;
  c->r[3]=c->r[29]|c->r[29]; // 8034B3C8
  c->r[4]=c->r[1]+0x00000044u; // 8034B3CC
  c->lr=0x8034B3D4u; f_8035F0F8(c); // 8034B3D0
  c->r[4]=R32(c->r[29]+0x00000000u); // 8034B3D4
  c->r[3]=0u+0x00000000u; // 8034B3D8
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 8034B3DC
  if (!crb(c,2)) { goto L_8034B3F0; } // 8034B3E0
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 8034B3E4
  if (!crb(c,2)) { goto L_8034B3F0; } // 8034B3E8
  c->r[3]=0u+0x00000001u; // 8034B3EC
L_8034B3F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8034B3F0
  if (!crb(c,2)) { goto L_8034B420; } // 8034B3F4
  {uint32_t ea=c->r[2]+0xFFFFF084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034B3F8
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B3FC
  fcmp(c,0,c->f[1],c->f[0]); // 8034B400
  if (!crb(c,2)) { goto L_8034B4A0; } // 8034B404
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B408
  fcmp(c,0,c->f[1],c->f[0]); // 8034B40C
  if (!crb(c,2)) { goto L_8034B4A0; } // 8034B410
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B414
  fcmp(c,0,c->f[1],c->f[0]); // 8034B418
  if (!crb(c,2)) { goto L_8034B4A0; } // 8034B41C
L_8034B420:;
  c->r[3]=c->r[29]|c->r[29]; // 8034B420
  c->r[4]=c->r[1]+0x00000044u; // 8034B424
  c->lr=0x8034B42Cu; f_8035F0DC(c); // 8034B428
  c->r[3]=c->r[1]+0x00000044u; // 8034B42C
  c->r[4]=c->r[31]|c->r[31]; // 8034B430
  c->r[5]=c->r[3]|c->r[3]; // 8034B434
  c->lr=0x8034B43Cu; f_8036B2F4(c); // 8034B438
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B43C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8034B440
  c->f[6]=-c->f[0]; // 8034B444
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034B448
  c->f[4]=-c->f[2]; // 8034B44C
  {uint32_t ea=c->r[2]+0xFFFFF084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B450
  c->f[5]=-c->f[1]; // 8034B454
  c->f[3]=c->ps1[3]=S(c->f[6]); // 8034B458
  c->f[1]=c->ps1[1]=S(c->f[4]); // 8034B45C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 8034B460
  c->f[2]=c->ps1[2]=S(c->f[5]); // 8034B464
  fcmp(c,0,c->f[0],c->f[3]); // 8034B468
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 8034B46C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 8034B470
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 8034B474
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 8034B478
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 8034B47C
  if (!crb(c,2)) { goto L_8034B4B0; } // 8034B480
  fcmp(c,0,c->f[0],c->f[2]); // 8034B484
  if (!crb(c,2)) { goto L_8034B4B0; } // 8034B488
  fcmp(c,0,c->f[0],c->f[1]); // 8034B48C
  if (!crb(c,2)) { goto L_8034B4B0; } // 8034B490
  {uint32_t ea=c->r[2]+0xFFFFF088u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B494
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 8034B498
  goto L_8034B4B0; // 8034B49C
L_8034B4A0:;
  c->r[3]=c->r[1]+0x00000044u; // 8034B4A0
  c->r[4]=c->r[31]|c->r[31]; // 8034B4A4
  c->r[5]=c->r[3]|c->r[3]; // 8034B4A8
  c->lr=0x8034B4B0u; f_8036B2F4(c); // 8034B4AC
L_8034B4B0:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 8034B4B0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8034B4B4
  if (!crb(c,2)) { goto L_8034B4D0; } // 8034B4B8
  c->r[3]=c->r[1]+0x00000050u; // 8034B4BC
  c->r[4]=c->r[1]+0x00000044u; // 8034B4C0
  c->r[5]=c->r[1]+0x00000068u; // 8034B4C4
  c->lr=0x8034B4CCu; f_80296BAC(c); // 8034B4C8
  goto L_8034B50C; // 8034B4CC
L_8034B4D0:;
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B4D0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034B4D4
  c->f[2]=-c->f[0]; // 8034B4D8
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B4DC
  c->f[3]=-c->f[1]; // 8034B4E0
  c->f[4]=-c->f[0]; // 8034B4E4
  c->f[0]=c->ps1[0]=S(c->f[2]); // 8034B4E8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 8034B4EC
  c->f[1]=c->ps1[1]=S(c->f[3]); // 8034B4F0
  c->f[2]=c->ps1[2]=S(c->f[4]); // 8034B4F4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 8034B4F8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 8034B4FC
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 8034B500
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 8034B504
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8034B508
L_8034B50C:;
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034B50C
  {uint32_t ea=c->r[2]+0xFFFFF08Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B510
  c->f[1]=std::fabs(c->f[1]); // 8034B514
  fcmp(c,0,c->f[1],c->f[0]); // 8034B518
  if (!crb(c,0)) { goto L_8034B564; } // 8034B51C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034B520
  c->f[1]=std::fabs(c->f[1]); // 8034B524
  fcmp(c,0,c->f[1],c->f[0]); // 8034B528
  if (!crb(c,0)) { goto L_8034B564; } // 8034B52C
  {uint32_t ea=c->r[2]+0xFFFFF084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034B530
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B534
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 8034B538
  fcmp(c,0,c->f[0],c->f[1]); // 8034B53C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 8034B540
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8034B544
  if (!crb(c,2)) { goto L_8034B558; } // 8034B548
  {uint32_t ea=c->r[2]+0xFFFFF088u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B54C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8034B550
  goto L_8034B628; // 8034B554
L_8034B558:;
  {uint32_t ea=c->r[2]+0xFFFFF090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B558
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8034B55C
  goto L_8034B628; // 8034B560
L_8034B564:;
  {uint32_t ea=c->r[2]+0xFFFFF084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034B564
  {uint32_t ea=c->r[2]+0xFFFFF090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B568
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8034B56C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 8034B570
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 8034B574
  goto L_8034B628; // 8034B578
L_8034B57C:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 8034B57C
  cmps(c,1,(int32_t)c->r[0],0); // 8034B580
  if (crb(c,4)) { goto L_8034B604; } // 8034B584
  cmps(c,0,(int32_t)c->r[0],32); // 8034B588
  if (!crb(c,0)) { goto L_8034B604; } // 8034B58C
  if (!crb(c,0)) { goto L_8034B5B0; } // 8034B590
  if (crb(c,4)) { goto L_8034B5B0; } // 8034B594
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8034B598
  c->r[3]=0u+0x806C0000u; // 8034B59C
  c->r[3]=c->r[3]+0xFFFFD8E0u; // 8034B5A0
  c->r[3]=c->r[3]+c->r[0]; // 8034B5A4
  c->r[6]=c->r[3]+0x00000034u; // 8034B5A8
  goto L_8034B5B4; // 8034B5AC
L_8034B5B0:;
  c->r[6]=0u+0x00000000u; // 8034B5B0
L_8034B5B4:;
  {uint32_t ea=c->r[6]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B5B4
  c->r[3]=c->r[1]+0x00000050u; // 8034B5B8
  c->r[4]=c->r[1]+0x00000038u; // 8034B5BC
  c->r[5]=c->r[1]+0x00000068u; // 8034B5C0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 8034B5C4
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B5C8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 8034B5CC
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B5D0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8034B5D4
  {uint32_t ea=c->r[6]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 8034B5D8
  {uint32_t ea=c->r[6]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8034B5DC
  {uint32_t ea=c->r[6]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B5E0
  c->f[2]=-c->f[2]; // 8034B5E4
  c->f[1]=-c->f[1]; // 8034B5E8
  c->f[0]=-c->f[0]; // 8034B5EC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 8034B5F0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8034B5F4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 8034B5F8
  c->lr=0x8034B600u; f_80296BAC(c); // 8034B5FC
  goto L_8034B628; // 8034B600
L_8034B604:;
  c->r[3]=0u+0x806C0000u; // 8034B604
  c->r[4]=c->r[28]|c->r[28]; // 8034B608
  c->r[3]=c->r[3]+0xFFFFD8E0u; // 8034B60C
  c->r[0]=R16(c->r[3]+0x00000002u); // 8034B610
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8034B614
  c->r[3]=c->r[3]+c->r[0]; // 8034B618
  c->r[3]=c->r[3]+0x00001434u; // 8034B61C
  c->lr=0x8034B624u; f_80295B14(c); // 8034B620
  goto L_8034B6EC; // 8034B624
L_8034B628:;
  c->r[3]=c->r[1]+0x00000068u; // 8034B628
  c->r[4]=c->r[3]|c->r[3]; // 8034B62C
  c->lr=0x8034B634u; f_80296AB0(c); // 8034B630
  c->r[3]=c->r[1]+0x0000005Cu; // 8034B634
  c->r[4]=c->r[1]+0x00000068u; // 8034B638
  c->r[5]=c->r[1]+0x0000002Cu; // 8034B63C
  c->lr=0x8034B644u; f_80296B70(c); // 8034B640
  c->r[3]=c->r[1]+0x0000002Cu; // 8034B644
  c->r[4]=c->r[3]|c->r[3]; // 8034B648
  c->lr=0x8034B650u; f_80296AB0(c); // 8034B64C
  c->r[3]=c->r[1]+0x00000068u; // 8034B650
  c->r[4]=c->r[1]+0x0000002Cu; // 8034B654
  c->r[5]=c->r[1]+0x00000020u; // 8034B658
  c->lr=0x8034B660u; f_80296B70(c); // 8034B65C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B660
  c->r[3]=c->r[28]|c->r[28]; // 8034B664
  c->r[4]=c->r[31]|c->r[31]; // 8034B668
  c->r[5]=c->r[28]|c->r[28]; // 8034B66C
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 8034B670
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B674
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 8034B678
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B67C
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 8034B680
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B684
  {uint32_t ea=c->r[28]+0x00000010u; WF32(ea,c->f[0]);} // 8034B688
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B68C
  {uint32_t ea=c->r[28]+0x00000014u; WF32(ea,c->f[0]);} // 8034B690
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B694
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[0]);} // 8034B698
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B69C
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[0]);} // 8034B6A0
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B6A4
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[0]);} // 8034B6A8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B6AC
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 8034B6B0
  c->lr=0x8034B6B8u; f_80295B48(c); // 8034B6B4
  {uint32_t ea=c->r[2]+0xFFFFF084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8034B6B8
  c->r[3]=0u+0x806C0000u; // 8034B6BC
  c->r[3]=c->r[3]+0xFFFFD8E0u; // 8034B6C0
  c->r[4]=c->r[28]|c->r[28]; // 8034B6C4
  {uint32_t ea=c->r[28]+0x0000002Cu; WF32(ea,c->f[0]);} // 8034B6C8
  c->r[5]=c->r[28]|c->r[28]; // 8034B6CC
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 8034B6D0
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 8034B6D4
  c->r[0]=R16(c->r[3]+0x00000002u); // 8034B6D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8034B6DC
  c->r[3]=c->r[3]+c->r[0]; // 8034B6E0
  c->r[3]=c->r[3]+0x00001434u; // 8034B6E4
  c->lr=0x8034B6ECu; f_80295B48(c); // 8034B6E8
L_8034B6EC:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8034B6EC
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8034B6F0
  c->r[30]=R32(c->r[1]+0x00000088u); // 8034B6F4
  c->r[29]=R32(c->r[1]+0x00000084u); // 8034B6F8
  c->r[28]=R32(c->r[1]+0x00000080u); // 8034B6FC
  c->lr=c->r[0]; // 8034B700
  c->r[1]=c->r[1]+0x00000090u; // 8034B704
  return; // 8034B708
}

