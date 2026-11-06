#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800FB3A4
void f_800FB3A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB3A4
  c->r[0]=c->lr; // 800FB3A8
  c->r[4]=0u+0x00000000u; // 800FB3AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB3B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB3B4
  c->r[31]=c->r[3]|c->r[3]; // 800FB3B8
  c->lr=0x800FB3C0u; f_800453A4(c); // 800FB3BC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FB3C0
  if (crb(c,2)) { goto L_800FB430; } // 800FB3C4
  c->r[3]=c->r[31]|c->r[31]; // 800FB3C8
  c->r[4]=0u+0x00000000u; // 800FB3CC
  c->lr=0x800FB3D4u; f_800453A4(c); // 800FB3D0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800FB3D4
  if (crb(c,2)) { goto L_800FB430; } // 800FB3D8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FB3DC
  c->r[0]=R32(c->r[3]+0x00000030u); // 800FB3E0
  cmps(c,0,(int32_t)c->r[0],2); // 800FB3E4
  if (crb(c,2)) { goto L_800FB418; } // 800FB3E8
  if (!crb(c,0)) { goto L_800FB430; } // 800FB3EC
  cmps(c,0,(int32_t)c->r[0],1); // 800FB3F0
  if (!crb(c,0)) { goto L_800FB3FC; } // 800FB3F4
  goto L_800FB430; // 800FB3F8
L_800FB3FC:;
  c->r[3]=c->r[31]|c->r[31]; // 800FB3FC
  c->r[4]=0u+0x00000004u; // 800FB400
  c->r[5]=0u+0x0000000Au; // 800FB404
  c->r[6]=0u+0x00000001u; // 800FB408
  c->r[7]=0u+0x00000001u; // 800FB40C
  c->lr=0x800FB414u; f_8017900C(c); // 800FB410
  goto L_800FB430; // 800FB414
L_800FB418:;
  c->r[3]=c->r[31]|c->r[31]; // 800FB418
  c->r[4]=0u+0x00000004u; // 800FB41C
  c->r[5]=0u+0x0000000Bu; // 800FB420
  c->r[6]=0u+0x00000001u; // 800FB424
  c->r[7]=0u+0x00000001u; // 800FB428
  c->lr=0x800FB430u; f_8017900C(c); // 800FB42C
L_800FB430:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB430
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB434
  c->lr=c->r[0]; // 800FB438
  c->r[1]=c->r[1]+0x00000010u; // 800FB43C
  return; // 800FB440
}

// fn_800FB444
void f_800FB444(Ctx* __restrict c) {
  return; // 800FB444
}

// fn_800FB448
void f_800FB448(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800FB448
}

// fn_800FB44C
void f_800FB44C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB44C
  c->r[0]=c->lr; // 800FB450
  cmps(c,0,(int32_t)c->r[3],0); // 800FB454
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB458
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB45C
  c->r[31]=c->r[4]|c->r[4]; // 800FB460
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FB464
  c->r[30]=c->r[3]|c->r[3]; // 800FB468
  if (crb(c,2)) { goto L_800FB488; } // 800FB46C
  c->r[4]=0u+0x00000000u; // 800FB470
  c->lr=0x800FB478u; f_8026A06C(c); // 800FB474
  cmps(c,0,(int32_t)c->r[31],0); // 800FB478
  if (!crb(c,1)) { goto L_800FB488; } // 800FB47C
  c->r[3]=c->r[30]|c->r[30]; // 800FB480
  c->lr=0x800FB488u; f_8026A268(c); // 800FB484
L_800FB488:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB488
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB48C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FB490
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB494
  c->lr=c->r[0]; // 800FB498
  c->r[1]=c->r[1]+0x00000010u; // 800FB49C
  return; // 800FB4A0
}

// fn_800FB4A4
void f_800FB4A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB4A4
  c->r[0]=c->lr; // 800FB4A8
  c->r[4]=0u+0x00000000u; // 800FB4AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB4B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FB4B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FB4B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FB4BC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FB4C0
  c->r[28]=c->r[3]|c->r[3]; // 800FB4C4
  c->lr=0x800FB4CCu; f_801F57D0(c); // 800FB4C8
  c->r[3]=c->r[28]|c->r[28]; // 800FB4CC
  c->r[4]=0u+0x00000001u; // 800FB4D0
  c->lr=0x800FB4D8u; f_801F57D0(c); // 800FB4D4
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800FB4D8
  c->r[3]=c->r[28]|c->r[28]; // 800FB4DC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800FB4E0
  c->ctr=c->r[12]; // 800FB4E4
  if (true) { c->lr=0x800FB4ECu; dispatch(c,c->ctr); } // 800FB4E8
  c->r[3]=c->r[28]|c->r[28]; // 800FB4EC
  c->lr=0x800FB4F4u; f_801F4B94(c); // 800FB4F0
  c->r[3]=0u+0x00000003u; // 800FB4F4
  c->r[0]=0u+0x0000006Cu; // 800FB4F8
  W8(c->r[28]+0x0000006Cu,c->r[3]); // 800FB4FC
  c->r[3]=c->r[28]|c->r[28]; // 800FB500
  c->r[4]=R32(c->r[28]+0x00000394u); // 800FB504
  W8(c->r[28]+0x0000006Du,c->r[0]); // 800FB508
  c->lr=0x800FB510u; f_801F58BC(c); // 800FB50C
  c->r[3]=R32(c->r[28]+0x00000394u); // 800FB510
  c->r[29]=0u+0x00000001u; // 800FB514
  c->r[30]=0u+0x803A0000u; // 800FB518
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800FB51C
  c->r[4]=c->r[30]+0xFFFFF290u; // 800FB520
  c->r[3]=R32(c->r[28]+0x00000394u); // 800FB524
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FB528
  c->lr=0x800FB530u; f_80256EC4(c); // 800FB52C
  c->r[6]=R32(c->r[28]+0x00000394u); // 800FB530
  c->r[4]=0u+0x00000002u; // 800FB534
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FB538
  c->r[5]=0u+0x00000001u; // 800FB53C
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800FB540
  c->r[3]=c->r[28]|c->r[28]; // 800FB544
  c->f[2]=c->f[1]; // 800FB548
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800FB54C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FB550
  c->ctr=c->r[12]; // 800FB554
  if (true) { c->lr=0x800FB55Cu; dispatch(c,c->ctr); } // 800FB558
  c->r[3]=R32(c->r[28]+0x00000394u); // 800FB55C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FB560
  c->lr=0x800FB568u; f_802501B0(c); // 800FB564
  c->r[4]=R32(c->r[28]+0x00000394u); // 800FB568
  c->r[3]=c->r[28]|c->r[28]; // 800FB56C
  W8(c->r[4]+0x0000001Du,c->r[29]); // 800FB570
  c->r[4]=R32(c->r[28]+0x00000398u); // 800FB574
  c->lr=0x800FB57Cu; f_801F58BC(c); // 800FB578
  c->r[3]=R32(c->r[28]+0x00000398u); // 800FB57C
  c->r[31]=0u+0x00000000u; // 800FB580
  c->r[4]=c->r[30]+0xFFFFF290u; // 800FB584
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800FB588
  c->r[3]=R32(c->r[28]+0x00000398u); // 800FB58C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FB590
  c->lr=0x800FB598u; f_80256EC4(c); // 800FB594
  c->r[6]=R32(c->r[28]+0x00000398u); // 800FB598
  c->r[4]=0u+0x00000000u; // 800FB59C
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FB5A0
  c->r[5]=0u+0x00000001u; // 800FB5A4
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800FB5A8
  c->r[3]=c->r[28]|c->r[28]; // 800FB5AC
  c->f[2]=c->f[1]; // 800FB5B0
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800FB5B4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FB5B8
  c->ctr=c->r[12]; // 800FB5BC
  if (true) { c->lr=0x800FB5C4u; dispatch(c,c->ctr); } // 800FB5C0
  c->r[3]=R32(c->r[28]+0x00000398u); // 800FB5C4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FB5C8
  c->lr=0x800FB5D0u; f_802501B0(c); // 800FB5CC
  c->r[3]=R32(c->r[28]+0x00000398u); // 800FB5D0
  c->r[0]=0u+0x000000FFu; // 800FB5D4
  W8(c->r[3]+0x0000001Du,c->r[29]); // 800FB5D8
  c->r[3]=c->r[28]|c->r[28]; // 800FB5DC
  W8(c->r[28]+0x0000006Fu,c->r[31]); // 800FB5E0
  W8(c->r[28]+0x00000076u,c->r[0]); // 800FB5E4
  W8(c->r[28]+0x00000077u,c->r[0]); // 800FB5E8
  W8(c->r[28]+0x00000084u,c->r[31]); // 800FB5EC
  W16(c->r[28]+0x00000080u,c->r[31]); // 800FB5F0
  c->lr=0x800FB5F8u; f_801F56F4(c); // 800FB5F4
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800FB5F8
  c->r[3]=c->r[28]|c->r[28]; // 800FB5FC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800FB600
  c->ctr=c->r[12]; // 800FB604
  if (true) { c->lr=0x800FB60Cu; dispatch(c,c->ctr); } // 800FB608
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FB60C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FB610
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FB614
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FB618
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FB61C
  c->lr=c->r[0]; // 800FB620
  c->r[1]=c->r[1]+0x00000020u; // 800FB624
  return; // 800FB628
}

// fn_800FB62C
void f_800FB62C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB62C
  c->r[0]=c->lr; // 800FB630
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB634
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB638
  c->r[31]=c->r[3]|c->r[3]; // 800FB63C
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FB640
  c->r[12]=R32(c->r[12]+0x00000068u); // 800FB644
  c->ctr=c->r[12]; // 800FB648
  if (true) { c->lr=0x800FB650u; dispatch(c,c->ctr); } // 800FB64C
  c->r[3]=c->r[31]|c->r[31]; // 800FB650
  c->lr=0x800FB658u; f_801F4C0C(c); // 800FB654
  c->r[3]=c->r[31]|c->r[31]; // 800FB658
  c->lr=0x800FB660u; f_800FBA38(c); // 800FB65C
  c->r[0]=R8(c->r[31]+0x00000084u); // 800FB660
  cmps(c,0,(int32_t)c->r[0],0); // 800FB664
  if (crb(c,2)) { goto L_800FB6A0; } // 800FB668
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800FB66C
  cmps(c,0,(int32_t)c->r[0],113); // 800FB670
  if (crb(c,2)) { goto L_800FB6A0; } // 800FB674
  cmps(c,0,(int32_t)c->r[0],115); // 800FB678
  if (crb(c,2)) { goto L_800FB6A0; } // 800FB67C
  c->r[0]=0u+0x00000000u; // 800FB680
  c->r[3]=c->r[31]|c->r[31]; // 800FB684
  W8(c->r[31]+0x00000084u,c->r[0]); // 800FB688
  c->r[4]=0u+0x00000004u; // 800FB68C
  c->r[5]=0u+0x00000019u; // 800FB690
  c->r[6]=0u+0x00000001u; // 800FB694
  c->r[7]=0u+0x00000001u; // 800FB698
  c->lr=0x800FB6A0u; f_8017900C(c); // 800FB69C
L_800FB6A0:;
  c->r[3]=c->r[31]|c->r[31]; // 800FB6A0
  c->lr=0x800FB6A8u; f_801F56F4(c); // 800FB6A4
  c->r[3]=R32(c->r[31]+0x00000398u); // 800FB6A8
  cmps(c,0,(int32_t)c->r[3],0); // 800FB6AC
  if (crb(c,2)) { goto L_800FB6EC; } // 800FB6B0
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800FB6B4
  cmps(c,0,(int32_t)c->r[0],0); // 800FB6B8
  if (crb(c,2)) { goto L_800FB6EC; } // 800FB6BC
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800FB6C0
  cmps(c,0,(int32_t)c->r[0],0); // 800FB6C4
  if (crb(c,2)) { goto L_800FB6E0; } // 800FB6C8
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800FB6CC
  cmps(c,0,(int32_t)c->r[0],0); // 800FB6D0
  if (!crb(c,2)) { goto L_800FB6E0; } // 800FB6D4
  c->r[4]=c->r[3]+0x000000B0u; // 800FB6D8
  c->lr=0x800FB6E0u; f_80250F18(c); // 800FB6DC
L_800FB6E0:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800FB6E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FB6E4
  c->lr=0x800FB6ECu; f_8025037C(c); // 800FB6E8
L_800FB6EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB6EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB6F0
  c->lr=c->r[0]; // 800FB6F4
  c->r[1]=c->r[1]+0x00000010u; // 800FB6F8
  return; // 800FB6FC
}

// fn_800FB700
void f_800FB700(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB700
  c->r[0]=c->lr; // 800FB704
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB708
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB70C
  c->r[31]=c->r[3]|c->r[3]; // 800FB710
  c->r[4]=R8(c->r[3]+0x00000076u); // 800FB714
  cmpu(c,0,c->r[4],0x000000FFu); // 800FB718
  if (crb(c,2)) { goto L_800FB734; } // 800FB71C
  c->r[3]=0u+0x80550000u; // 800FB720
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FB724
  c->lr=0x800FB72Cu; f_8018D694(c); // 800FB728
  c->r[0]=0u+0x000000FFu; // 800FB72C
  W8(c->r[31]+0x00000076u,c->r[0]); // 800FB730
L_800FB734:;
  c->r[4]=R8(c->r[31]+0x00000077u); // 800FB734
  cmpu(c,0,c->r[4],0x000000FFu); // 800FB738
  if (crb(c,2)) { goto L_800FB754; } // 800FB73C
  c->r[3]=0u+0x80550000u; // 800FB740
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FB744
  c->lr=0x800FB74Cu; f_8018D694(c); // 800FB748
  c->r[0]=0u+0x000000FFu; // 800FB74C
  W8(c->r[31]+0x00000077u,c->r[0]); // 800FB750
L_800FB754:;
  c->r[4]=R8(c->r[31]+0x00000082u); // 800FB754
  cmpu(c,0,c->r[4],0x000000FFu); // 800FB758
  if (crb(c,2)) { goto L_800FB774; } // 800FB75C
  c->r[3]=0u+0x80550000u; // 800FB760
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FB764
  c->lr=0x800FB76Cu; f_8018D694(c); // 800FB768
  c->r[0]=0u+0x000000FFu; // 800FB76C
  W8(c->r[31]+0x00000082u,c->r[0]); // 800FB770
L_800FB774:;
  c->r[4]=R8(c->r[31]+0x00000083u); // 800FB774
  cmpu(c,0,c->r[4],0x000000FFu); // 800FB778
  if (crb(c,2)) { goto L_800FB794; } // 800FB77C
  c->r[3]=0u+0x80550000u; // 800FB780
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FB784
  c->lr=0x800FB78Cu; f_8018D694(c); // 800FB788
  c->r[0]=0u+0x000000FFu; // 800FB78C
  W8(c->r[31]+0x00000083u,c->r[0]); // 800FB790
L_800FB794:;
  c->r[3]=c->r[31]|c->r[31]; // 800FB794
  c->lr=0x800FB79Cu; f_801F4C78(c); // 800FB798
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB79C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB7A0
  c->lr=c->r[0]; // 800FB7A4
  c->r[1]=c->r[1]+0x00000010u; // 800FB7A8
  return; // 800FB7AC
}

// fn_800FB7B0
void f_800FB7B0(Ctx* __restrict c) {
  f_801F50B4(c); return; // 800FB7B0
}

// fn_800FB7B4
void f_800FB7B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB7B4
  c->r[0]=c->lr; // 800FB7B8
  c->r[5]=0u+0x80620000u; // 800FB7BC
  c->r[4]=0u+0x00000011u; // 800FB7C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB7C4
  c->r[5]=c->r[5]+0x00007688u; // 800FB7C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB7CC
  c->r[31]=c->r[3]|c->r[3]; // 800FB7D0
  c->r[3]=R32(c->r[5]+0x00000014u); // 800FB7D4
  c->lr=0x800FB7DCu; f_8003DCAC(c); // 800FB7D8
  c->r[3]=c->r[31]|c->r[31]; // 800FB7DC
  c->lr=0x800FB7E4u; f_801F4F28(c); // 800FB7E0
  c->r[4]=R32(c->r[31]+0x000003C0u); // 800FB7E4
  c->r[0]=c->r[4]+0xFFFFFF9Cu; // 800FB7E8
  cmpu(c,0,c->r[0],0x00000012u); // 800FB7EC
  if (crb(c,1)) { goto L_800FB958; } // 800FB7F0
  c->r[3]=0u+0x803D0000u; // 800FB7F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FB7F8
  c->r[3]=c->r[3]+0x00005970u; // 800FB7FC
  c->r[3]=R32(c->r[3]+c->r[0]); // 800FB800
  c->ctr=c->r[3]; // 800FB804
  if (true) { switch (c->ctr) { case 0x800FB80Cu: goto L_800FB80C; case 0x800FB81Cu: goto L_800FB81C; case 0x800FB82Cu: goto L_800FB82C; case 0x800FB83Cu: goto L_800FB83C; case 0x800FB84Cu: goto L_800FB84C; case 0x800FB868u: goto L_800FB868; case 0x800FB884u: goto L_800FB884; case 0x800FB8A0u: goto L_800FB8A0; case 0x800FB8BCu: goto L_800FB8BC; case 0x800FB8CCu: goto L_800FB8CC; case 0x800FB8DCu: goto L_800FB8DC; case 0x800FB8ECu: goto L_800FB8EC; case 0x800FB8FCu: goto L_800FB8FC; case 0x800FB90Cu: goto L_800FB90C; case 0x800FB928u: goto L_800FB928; case 0x800FB938u: goto L_800FB938; case 0x800FB958u: goto L_800FB958; default: break; } dispatch(c,c->ctr); return; } // 800FB808
L_800FB80C:;
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB80C
  c->r[3]=c->r[31]|c->r[31]; // 800FB810
  c->lr=0x800FB818u; f_800FC0D4(c); // 800FB814
  goto L_800FB958; // 800FB818
L_800FB81C:;
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB81C
  c->r[3]=c->r[31]|c->r[31]; // 800FB820
  c->lr=0x800FB828u; f_800FC190(c); // 800FB824
  goto L_800FB958; // 800FB828
L_800FB82C:;
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB82C
  c->r[3]=c->r[31]|c->r[31]; // 800FB830
  c->lr=0x800FB838u; f_800FC20C(c); // 800FB834
  goto L_800FB958; // 800FB838
L_800FB83C:;
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB83C
  c->r[3]=c->r[31]|c->r[31]; // 800FB840
  c->lr=0x800FB848u; f_800FC3E8(c); // 800FB844
  goto L_800FB958; // 800FB848
L_800FB84C:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800FB84C
  c->r[3]=c->r[31]|c->r[31]; // 800FB850
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB854
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800FB858
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800FB85C
  c->lr=0x800FB864u; f_800FDB58(c); // 800FB860
  goto L_800FB958; // 800FB864
L_800FB868:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800FB868
  c->r[3]=c->r[31]|c->r[31]; // 800FB86C
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB870
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800FB874
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800FB878
  c->lr=0x800FB880u; f_800FDBC4(c); // 800FB87C
  goto L_800FB958; // 800FB880
L_800FB884:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800FB884
  c->r[3]=c->r[31]|c->r[31]; // 800FB888
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB88C
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800FB890
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800FB894
  c->lr=0x800FB89Cu; f_800FDC38(c); // 800FB898
  goto L_800FB958; // 800FB89C
L_800FB8A0:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800FB8A0
  c->r[3]=c->r[31]|c->r[31]; // 800FB8A4
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB8A8
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800FB8AC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800FB8B0
  c->lr=0x800FB8B8u; f_800FDD50(c); // 800FB8B4
  goto L_800FB958; // 800FB8B8
L_800FB8BC:;
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB8BC
  c->r[3]=c->r[31]|c->r[31]; // 800FB8C0
  c->lr=0x800FB8C8u; f_800FC288(c); // 800FB8C4
  goto L_800FB958; // 800FB8C8
L_800FB8CC:;
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB8CC
  c->r[3]=c->r[31]|c->r[31]; // 800FB8D0
  c->lr=0x800FB8D8u; f_800FC4AC(c); // 800FB8D4
  goto L_800FB958; // 800FB8D8
L_800FB8DC:;
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB8DC
  c->r[3]=c->r[31]|c->r[31]; // 800FB8E0
  c->lr=0x800FB8E8u; f_800FC5E0(c); // 800FB8E4
  goto L_800FB958; // 800FB8E8
L_800FB8EC:;
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB8EC
  c->r[3]=c->r[31]|c->r[31]; // 800FB8F0
  c->lr=0x800FB8F8u; f_800FC718(c); // 800FB8F4
  goto L_800FB958; // 800FB8F8
L_800FB8FC:;
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB8FC
  c->r[3]=c->r[31]|c->r[31]; // 800FB900
  c->lr=0x800FB908u; f_800FC564(c); // 800FB904
  goto L_800FB958; // 800FB908
L_800FB90C:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800FB90C
  c->r[3]=c->r[31]|c->r[31]; // 800FB910
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB914
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800FB918
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800FB91C
  c->lr=0x800FB924u; f_800FDDBC(c); // 800FB920
  goto L_800FB958; // 800FB924
L_800FB928:;
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800FB928
  c->r[3]=c->r[31]|c->r[31]; // 800FB92C
  c->lr=0x800FB934u; f_800FC680(c); // 800FB930
  goto L_800FB958; // 800FB934
L_800FB938:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FB938
  c->r[3]=c->r[31]|c->r[31]; // 800FB93C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800FB940
  c->ctr=c->r[12]; // 800FB944
  if (true) { c->lr=0x800FB94Cu; dispatch(c,c->ctr); } // 800FB948
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FB94C
  c->r[0]=0u+0x00000000u; // 800FB950
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800FB954
L_800FB958:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB958
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB95C
  c->lr=c->r[0]; // 800FB960
  c->r[1]=c->r[1]+0x00000010u; // 800FB964
  return; // 800FB968
}

// fn_800FB96C
void f_800FB96C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB96C
  c->r[0]=c->lr; // 800FB970
  c->r[5]=0u+0x00000000u; // 800FB974
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB97C
  c->r[31]=c->r[3]|c->r[3]; // 800FB980
  c->r[3]=0u+0x000000CCu; // 800FB984
  c->r[4]=R32(c->r[31]+0x00000394u); // 800FB988
  c->r[4]=c->r[4]+0x0000010Cu; // 800FB98C
  c->lr=0x800FB994u; f_8024EE50(c); // 800FB990
  cmps(c,0,(int32_t)c->r[3],0); // 800FB994
  if (crb(c,2)) { goto L_800FB9A4; } // 800FB998
  c->r[3]=0u+0x00000000u; // 800FB99C
  goto L_800FB9D0; // 800FB9A0
L_800FB9A4:;
  c->r[3]=0u+0x80620000u; // 800FB9A4
  c->r[3]=c->r[3]+0x00007688u; // 800FB9A8
  c->r[3]=R32(c->r[3]+0x00000014u); // 800FB9AC
  c->lr=0x800FB9B4u; f_800A0614(c); // 800FB9B0
  c->r[4]=R32(c->r[31]+0x00000398u); // 800FB9B4
  c->r[5]=c->r[3]|c->r[3]; // 800FB9B8
  c->r[3]=0u+0x0000047Du; // 800FB9BC
  c->r[4]=c->r[4]+0x0000010Cu; // 800FB9C0
  c->lr=0x800FB9C8u; f_8024EE50(c); // 800FB9C4
  c->r[0]=cntlz(c->r[3]); // 800FB9C8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800FB9CC
L_800FB9D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB9D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB9D4
  c->lr=c->r[0]; // 800FB9D8
  c->r[1]=c->r[1]+0x00000010u; // 800FB9DC
  return; // 800FB9E0
}

// fn_800FB9E4
void f_800FB9E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB9E4
  c->r[0]=c->lr; // 800FB9E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB9EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FB9F0
  c->r[31]=c->r[3]|c->r[3]; // 800FB9F4
  c->lr=0x800FB9FCu; f_801F51B8(c); // 800FB9F8
  c->r[7]=0u+0x803D0000u; // 800FB9FC
  {uint32_t ea=c->r[7]+0x000059BCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800FBA00
  c->r[3]=c->r[31]|c->r[31]; // 800FBA04
  c->r[4]=c->r[1]+0x00000008u; // 800FBA08
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FBA0C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FBA10
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FBA14
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FBA18
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FBA1C
  c->lr=0x800FBA24u; f_800A19A8(c); // 800FBA20
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FBA24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FBA28
  c->lr=c->r[0]; // 800FBA2C
  c->r[1]=c->r[1]+0x00000020u; // 800FBA30
  return; // 800FBA34
}

// fn_800FBA38
void f_800FBA38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBA38
  c->r[0]=c->lr; // 800FBA3C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800FBA40
  W32(c->r[1]+0x000000DCu,c->r[31]); // 800FBA44
  c->r[31]=c->r[3]|c->r[3]; // 800FBA48
  W32(c->r[1]+0x000000D8u,c->r[30]); // 800FBA4C
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800FBA50
  cmps(c,0,(int32_t)c->r[0],0); // 800FBA54
  if (!crb(c,2)) { goto L_800FBAE0; } // 800FBA58
  c->r[4]=R8(c->r[3]+0x00000076u); // 800FBA5C
  cmpu(c,0,c->r[4],0x000000FFu); // 800FBA60
  if (crb(c,2)) { goto L_800FBA7C; } // 800FBA64
  c->r[3]=0u+0x80550000u; // 800FBA68
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBA6C
  c->lr=0x800FBA74u; f_8018D738(c); // 800FBA70
  c->r[0]=0u+0x000000FFu; // 800FBA74
  W8(c->r[31]+0x00000076u,c->r[0]); // 800FBA78
L_800FBA7C:;
  c->r[4]=R8(c->r[31]+0x00000077u); // 800FBA7C
  cmpu(c,0,c->r[4],0x000000FFu); // 800FBA80
  if (crb(c,2)) { goto L_800FBA9C; } // 800FBA84
  c->r[3]=0u+0x80550000u; // 800FBA88
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBA8C
  c->lr=0x800FBA94u; f_8018D738(c); // 800FBA90
  c->r[0]=0u+0x000000FFu; // 800FBA94
  W8(c->r[31]+0x00000077u,c->r[0]); // 800FBA98
L_800FBA9C:;
  c->r[4]=R8(c->r[31]+0x00000082u); // 800FBA9C
  cmpu(c,0,c->r[4],0x000000FFu); // 800FBAA0
  if (crb(c,2)) { goto L_800FBABC; } // 800FBAA4
  c->r[3]=0u+0x80550000u; // 800FBAA8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBAAC
  c->lr=0x800FBAB4u; f_8018D738(c); // 800FBAB0
  c->r[0]=0u+0x000000FFu; // 800FBAB4
  W8(c->r[31]+0x00000082u,c->r[0]); // 800FBAB8
L_800FBABC:;
  c->r[4]=R8(c->r[31]+0x00000083u); // 800FBABC
  cmpu(c,0,c->r[4],0x000000FFu); // 800FBAC0
  if (crb(c,2)) { goto L_800FBE6C; } // 800FBAC4
  c->r[3]=0u+0x80550000u; // 800FBAC8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBACC
  c->lr=0x800FBAD4u; f_8018D738(c); // 800FBAD0
  c->r[0]=0u+0x000000FFu; // 800FBAD4
  W8(c->r[31]+0x00000083u,c->r[0]); // 800FBAD8
  goto L_800FBE6C; // 800FBADC
L_800FBAE0:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FBAE0
  c->r[0]=R32(c->r[4]+0x00000030u); // 800FBAE4
  cmps(c,0,(int32_t)c->r[0],26); // 800FBAE8
  if (!crb(c,2)) { goto L_800FBB84; } // 800FBAEC
  c->r[3]=0u+0x80550000u; // 800FBAF0
  c->r[4]=0u+0x00000044u; // 800FBAF4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FBAF8
  c->lr=0x800FBB00u; f_8019C920(c); // 800FBAFC
  cmps(c,0,(int32_t)c->r[3],0); // 800FBB00
  c->r[30]=c->r[3]|c->r[3]; // 800FBB04
  if (crb(c,2)) { goto L_800FBBA4; } // 800FBB08
  c->r[0]=R8(c->r[31]+0x00000076u); // 800FBB0C
  cmpu(c,0,c->r[0],0x000000FFu); // 800FBB10
  if (!crb(c,2)) { goto L_800FBB3C; } // 800FBB14
  c->r[4]=0u+0x803A0000u; // 800FBB18
  c->r[3]=0u+0x80550000u; // 800FBB1C
  c->r[4]=c->r[4]+0xFFFFF290u; // 800FBB20
  c->r[5]=0u+0x00000000u; // 800FBB24
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBB28
  c->r[6]=0u+0x00000000u; // 800FBB2C
  c->r[4]=c->r[4]+0x00000009u; // 800FBB30
  c->lr=0x800FBB38u; f_8018D3E4(c); // 800FBB34
  W8(c->r[31]+0x00000076u,c->r[3]); // 800FBB38
L_800FBB3C:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 800FBB3C
  cmpu(c,0,c->r[0],0x000000FFu); // 800FBB40
  if (crb(c,2)) { goto L_800FBBA4; } // 800FBB44
  c->r[3]=c->r[30]|c->r[30]; // 800FBB48
  c->r[4]=0u+0x00000000u; // 800FBB4C
  c->lr=0x800FBB54u; f_80039840(c); // 800FBB50
  c->r[4]=0u+0x803A0000u; // 800FBB54
  c->r[5]=c->r[1]+0x000000A0u; // 800FBB58
  c->r[4]=c->r[4]+0xFFFFF290u; // 800FBB5C
  c->r[6]=0u+0x00000001u; // 800FBB60
  c->r[4]=c->r[4]+0x0000000Du; // 800FBB64
  c->lr=0x800FBB6Cu; f_80257018(c); // 800FBB68
  c->r[3]=0u+0x80550000u; // 800FBB6C
  c->r[4]=R8(c->r[31]+0x00000076u); // 800FBB70
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBB74
  c->r[5]=c->r[1]+0x000000A0u; // 800FBB78
  c->lr=0x800FBB80u; f_8018DEB8(c); // 800FBB7C
  goto L_800FBBA4; // 800FBB80
L_800FBB84:;
  c->r[4]=R8(c->r[3]+0x00000076u); // 800FBB84
  cmpu(c,0,c->r[4],0x000000FFu); // 800FBB88
  if (crb(c,2)) { goto L_800FBBA4; } // 800FBB8C
  c->r[3]=0u+0x80550000u; // 800FBB90
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBB94
  c->lr=0x800FBB9Cu; f_8018D738(c); // 800FBB98
  c->r[0]=0u+0x000000FFu; // 800FBB9C
  W8(c->r[31]+0x00000076u,c->r[0]); // 800FBBA0
L_800FBBA4:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FBBA4
  c->r[0]=R32(c->r[3]+0x00000030u); // 800FBBA8
  cmps(c,0,(int32_t)c->r[0],21); // 800FBBAC
  if (crb(c,2)) { goto L_800FBBBC; } // 800FBBB0
  cmps(c,0,(int32_t)c->r[0],7); // 800FBBB4
  if (!crb(c,2)) { goto L_800FBC6C; } // 800FBBB8
L_800FBBBC:;
  c->r[0]=R8(c->r[31]+0x00000077u); // 800FBBBC
  cmpu(c,0,c->r[0],0x000000FFu); // 800FBBC0
  if (!crb(c,2)) { goto L_800FBBF4; } // 800FBBC4
  c->r[0]=0u+0x000000FFu; // 800FBBC8
  c->r[4]=0u+0x803A0000u; // 800FBBCC
  c->r[4]=c->r[4]+0xFFFFF290u; // 800FBBD0
  c->r[3]=0u+0x80550000u; // 800FBBD4
  W16(c->r[31]+0x00000080u,c->r[0]); // 800FBBD8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBBDC
  c->r[4]=c->r[4]+0x00000016u; // 800FBBE0
  c->r[5]=0u+0x00000004u; // 800FBBE4
  c->r[6]=0u+0x00000000u; // 800FBBE8
  c->lr=0x800FBBF0u; f_8018D3E4(c); // 800FBBEC
  W8(c->r[31]+0x00000077u,c->r[3]); // 800FBBF0
L_800FBBF4:;
  c->r[0]=R8(c->r[31]+0x00000077u); // 800FBBF4
  cmpu(c,0,c->r[0],0x000000FFu); // 800FBBF8
  if (crb(c,2)) { goto L_800FBCC0; } // 800FBBFC
  c->r[3]=R16(c->r[31]+0x00000080u); // 800FBC00
  c->r[3]=c->r[3]+0x00000009u; // 800FBC04
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800FBC08
  W16(c->r[31]+0x00000080u,c->r[3]); // 800FBC0C
  cmpu(c,0,c->r[0],0x000000FFu); // 800FBC10
  if (!crb(c,1)) { goto L_800FBC20; } // 800FBC14
  c->r[0]=0u+0x000000FFu; // 800FBC18
  W16(c->r[31]+0x00000080u,c->r[0]); // 800FBC1C
L_800FBC20:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FBC20
  c->r[4]=0u+0x803A0000u; // 800FBC24
  c->r[4]=c->r[4]+0xFFFFF290u; // 800FBC28
  c->r[5]=c->r[1]+0x00000070u; // 800FBC2C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FBC30
  c->r[4]=c->r[4]+0x0000000Du; // 800FBC34
  c->r[6]=0u+0x00000001u; // 800FBC38
  c->lr=0x800FBC40u; f_80257018(c); // 800FBC3C
  c->r[30]=0u+0x80550000u; // 800FBC40
  c->r[4]=R8(c->r[31]+0x00000077u); // 800FBC44
  c->r[3]=c->r[30]+0xFFFFC848u; // 800FBC48
  c->r[5]=c->r[1]+0x00000070u; // 800FBC4C
  c->lr=0x800FBC54u; f_8018DEB8(c); // 800FBC50
  c->r[0]=R16(c->r[31]+0x00000080u); // 800FBC54
  c->r[3]=c->r[30]+0xFFFFC848u; // 800FBC58
  c->r[4]=R8(c->r[31]+0x00000077u); // 800FBC5C
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800FBC60
  c->lr=0x800FBC68u; f_8018EBA0(c); // 800FBC64
  goto L_800FBCC0; // 800FBC68
L_800FBC6C:;
  c->r[4]=R8(c->r[31]+0x00000077u); // 800FBC6C
  cmpu(c,0,c->r[4],0x000000FFu); // 800FBC70
  if (crb(c,2)) { goto L_800FBCC0; } // 800FBC74
  c->r[3]=R16(c->r[31]+0x00000080u); // 800FBC78
  c->r[0]=c->r[3]+0xFFFFFFF7u; // 800FBC7C
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 800FBC80
  W16(c->r[31]+0x00000080u,c->r[0]); // 800FBC84
  cmpu(c,0,c->r[5],0x00000009u); // 800FBC88
  if (!crb(c,0)) { goto L_800FBCB0; } // 800FBC8C
  c->r[3]=0u+0x80550000u; // 800FBC90
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBC94
  c->lr=0x800FBC9Cu; f_8018D694(c); // 800FBC98
  c->r[3]=0u+0x000000FFu; // 800FBC9C
  c->r[0]=0u+0x00000000u; // 800FBCA0
  W8(c->r[31]+0x00000077u,c->r[3]); // 800FBCA4
  W16(c->r[31]+0x00000080u,c->r[0]); // 800FBCA8
  goto L_800FBCC0; // 800FBCAC
L_800FBCB0:;
  c->r[3]=0u+0x80550000u; // 800FBCB0
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 800FBCB4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBCB8
  c->lr=0x800FBCC0u; f_8018EBA0(c); // 800FBCBC
L_800FBCC0:;
  c->r[3]=0u+0x80550000u; // 800FBCC0
  c->r[4]=0u+0x00000043u; // 800FBCC4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FBCC8
  c->lr=0x800FBCD0u; f_8019C920(c); // 800FBCCC
  cmps(c,0,(int32_t)c->r[3],0); // 800FBCD0
  c->r[30]=c->r[3]|c->r[3]; // 800FBCD4
  if (crb(c,2)) { goto L_800FBE6C; } // 800FBCD8
  c->r[4]=c->r[1]+0x00000008u; // 800FBCDC
  c->r[5]=0u+0x00000000u; // 800FBCE0
  c->lr=0x800FBCE8u; f_8007C6C8(c); // 800FBCE4
  c->r[3]=R32(c->r[1]+0x00000008u); // 800FBCE8
  c->r[0]=R32(c->r[3]+0x00000030u); // 800FBCEC
  cmps(c,0,(int32_t)c->r[0],3); // 800FBCF0
  if (crb(c,2)) { goto L_800FBD18; } // 800FBCF4
  cmps(c,0,(int32_t)c->r[0],2); // 800FBCF8
  if (!crb(c,2)) { goto L_800FBD90; } // 800FBCFC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FBD00
  {uint32_t ea=c->r[2]+0xFFFFAAECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FBD04
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FBD08
  fcmp(c,0,c->f[1],c->f[0]); // 800FBD0C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800FBD10
  if (!crb(c,2)) { goto L_800FBD90; } // 800FBD14
L_800FBD18:;
  c->r[0]=R8(c->r[31]+0x00000082u); // 800FBD18
  cmpu(c,0,c->r[0],0x000000FFu); // 800FBD1C
  if (!crb(c,2)) { goto L_800FBD48; } // 800FBD20
  c->r[4]=0u+0x803A0000u; // 800FBD24
  c->r[3]=0u+0x80550000u; // 800FBD28
  c->r[4]=c->r[4]+0xFFFFF290u; // 800FBD2C
  c->r[5]=0u+0x00000000u; // 800FBD30
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBD34
  c->r[6]=0u+0x00000000u; // 800FBD38
  c->r[4]=c->r[4]+0x0000001Au; // 800FBD3C
  c->lr=0x800FBD44u; f_8018D3E4(c); // 800FBD40
  W8(c->r[31]+0x00000082u,c->r[3]); // 800FBD44
L_800FBD48:;
  c->r[0]=R8(c->r[31]+0x00000082u); // 800FBD48
  cmpu(c,0,c->r[0],0x000000FFu); // 800FBD4C
  if (crb(c,2)) { goto L_800FBDB0; } // 800FBD50
  c->r[3]=c->r[30]|c->r[30]; // 800FBD54
  c->r[4]=0u+0x00000000u; // 800FBD58
  c->lr=0x800FBD60u; f_80039840(c); // 800FBD5C
  c->r[4]=0u+0x803A0000u; // 800FBD60
  c->r[5]=c->r[1]+0x00000040u; // 800FBD64
  c->r[4]=c->r[4]+0xFFFFF290u; // 800FBD68
  c->r[6]=0u+0x00000001u; // 800FBD6C
  c->r[4]=c->r[4]+0x0000001Eu; // 800FBD70
  c->lr=0x800FBD78u; f_80257018(c); // 800FBD74
  c->r[3]=0u+0x80550000u; // 800FBD78
  c->r[4]=R8(c->r[31]+0x00000082u); // 800FBD7C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBD80
  c->r[5]=c->r[1]+0x00000040u; // 800FBD84
  c->lr=0x800FBD8Cu; f_8018DEB8(c); // 800FBD88
  goto L_800FBDB0; // 800FBD8C
L_800FBD90:;
  c->r[4]=R8(c->r[31]+0x00000082u); // 800FBD90
  cmpu(c,0,c->r[4],0x000000FFu); // 800FBD94
  if (crb(c,2)) { goto L_800FBDB0; } // 800FBD98
  c->r[3]=0u+0x80550000u; // 800FBD9C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBDA0
  c->lr=0x800FBDA8u; f_8018D738(c); // 800FBDA4
  c->r[0]=0u+0x000000FFu; // 800FBDA8
  W8(c->r[31]+0x00000082u,c->r[0]); // 800FBDAC
L_800FBDB0:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FBDB0
  {uint32_t ea=c->r[2]+0xFFFFAAF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FBDB4
  fcmp(c,0,c->f[1],c->f[0]); // 800FBDB8
  if (!crb(c,1)) { goto L_800FBE4C; } // 800FBDBC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800FBDC0
  c->r[3]=R32(c->r[3]+0x00000030u); // 800FBDC4
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 800FBDC8
  cmpu(c,0,c->r[0],0x00000001u); // 800FBDCC
  if (crb(c,1)) { goto L_800FBE4C; } // 800FBDD0
  c->r[0]=R8(c->r[31]+0x00000083u); // 800FBDD4
  cmpu(c,0,c->r[0],0x000000FFu); // 800FBDD8
  if (!crb(c,2)) { goto L_800FBE04; } // 800FBDDC
  c->r[4]=0u+0x803A0000u; // 800FBDE0
  c->r[3]=0u+0x80550000u; // 800FBDE4
  c->r[4]=c->r[4]+0xFFFFF290u; // 800FBDE8
  c->r[5]=0u+0x00000000u; // 800FBDEC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBDF0
  c->r[6]=0u+0x00000000u; // 800FBDF4
  c->r[4]=c->r[4]+0x00000026u; // 800FBDF8
  c->lr=0x800FBE00u; f_8018D3E4(c); // 800FBDFC
  W8(c->r[31]+0x00000083u,c->r[3]); // 800FBE00
L_800FBE04:;
  c->r[0]=R8(c->r[31]+0x00000083u); // 800FBE04
  cmpu(c,0,c->r[0],0x000000FFu); // 800FBE08
  if (crb(c,2)) { goto L_800FBE6C; } // 800FBE0C
  c->r[3]=c->r[30]|c->r[30]; // 800FBE10
  c->r[4]=0u+0x00000000u; // 800FBE14
  c->lr=0x800FBE1Cu; f_80039840(c); // 800FBE18
  c->r[4]=0u+0x803A0000u; // 800FBE1C
  c->r[5]=c->r[1]+0x00000010u; // 800FBE20
  c->r[4]=c->r[4]+0xFFFFF290u; // 800FBE24
  c->r[6]=0u+0x00000001u; // 800FBE28
  c->r[4]=c->r[4]+0x0000001Eu; // 800FBE2C
  c->lr=0x800FBE34u; f_80257018(c); // 800FBE30
  c->r[3]=0u+0x80550000u; // 800FBE34
  c->r[4]=R8(c->r[31]+0x00000083u); // 800FBE38
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBE3C
  c->r[5]=c->r[1]+0x00000010u; // 800FBE40
  c->lr=0x800FBE48u; f_8018DEB8(c); // 800FBE44
  goto L_800FBE6C; // 800FBE48
L_800FBE4C:;
  c->r[4]=R8(c->r[31]+0x00000083u); // 800FBE4C
  cmpu(c,0,c->r[4],0x000000FFu); // 800FBE50
  if (crb(c,2)) { goto L_800FBE6C; } // 800FBE54
  c->r[3]=0u+0x80550000u; // 800FBE58
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FBE5C
  c->lr=0x800FBE64u; f_8018D738(c); // 800FBE60
  c->r[0]=0u+0x000000FFu; // 800FBE64
  W8(c->r[31]+0x00000083u,c->r[0]); // 800FBE68
L_800FBE6C:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800FBE6C
  c->r[31]=R32(c->r[1]+0x000000DCu); // 800FBE70
  c->r[30]=R32(c->r[1]+0x000000D8u); // 800FBE74
  c->lr=c->r[0]; // 800FBE78
  c->r[1]=c->r[1]+0x000000E0u; // 800FBE7C
  return; // 800FBE80
}

// fn_800FBE84
void f_800FBE84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBE84
  c->r[0]=c->lr; // 800FBE88
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FBE8C
  c->r[0]=0u+0x0000000Au; // 800FBE90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FBE94
  c->r[31]=c->r[4]|c->r[4]; // 800FBE98
  c->r[4]=c->r[5]|c->r[5]; // 800FBE9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FBEA0
  c->r[30]=c->r[3]|c->r[3]; // 800FBEA4
  W8(c->r[3]+0x00000074u,c->r[0]); // 800FBEA8
  c->r[3]=c->r[3]+0x000003ECu; // 800FBEAC
  c->lr=0x800FBEB4u; f_800361A0(c); // 800FBEB0
  cmpu(c,0,c->r[31],0x0000FFFFu); // 800FBEB4
  if (crb(c,2)) { goto L_800FBEE0; } // 800FBEB8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FBEBC
  c->r[3]=c->r[30]|c->r[30]; // 800FBEC0
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FBEC4
  c->r[4]=c->r[31]|c->r[31]; // 800FBEC8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FBECC
  c->r[5]=0u+0x00000001u; // 800FBED0
  c->f[2]=c->f[1]; // 800FBED4
  c->ctr=c->r[12]; // 800FBED8
  if (true) { c->lr=0x800FBEE0u; dispatch(c,c->ctr); } // 800FBEDC
L_800FBEE0:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FBEE0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FBEE4
  c->lr=0x800FBEECu; f_802501B0(c); // 800FBEE8
  {uint32_t ea=c->r[2]+0xFFFFAAF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FBEEC
  c->r[0]=0u+0x00000001u; // 800FBEF0
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FBEF4
  c->r[7]=0u+0x803D0000u; // 800FBEF8
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800FBEFC
  c->r[3]=c->r[30]|c->r[30]; // 800FBF00
  c->r[4]=c->r[1]+0x00000008u; // 800FBF04
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800FBF08
  {uint32_t ea=c->r[30]+0x000003F8u; WF32(ea,c->f[0]);} // 800FBF0C
  {uint32_t ea=c->r[7]+0x000059C8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FBF10
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FBF14
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FBF18
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FBF1C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FBF20
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FBF24
  c->lr=0x800FBF2Cu; f_800FBF44(c); // 800FBF28
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FBF2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FBF30
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FBF34
  c->lr=c->r[0]; // 800FBF38
  c->r[1]=c->r[1]+0x00000020u; // 800FBF3C
  return; // 800FBF40
}

// fn_800FBF44
void f_800FBF44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBF44
  c->r[0]=c->lr; // 800FBF48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBF4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FBF50
  c->r[31]=c->r[4]|c->r[4]; // 800FBF54
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FBF58
  c->r[30]=c->r[3]|c->r[3]; // 800FBF5C
  c->r[3]=c->r[31]|c->r[31]; // 800FBF60
  c->lr=0x800FBF68u; f_802B9FDC(c); // 800FBF64
  cmps(c,0,(int32_t)c->r[3],0); // 800FBF68
  if (crb(c,2)) { goto L_800FBF88; } // 800FBF6C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800FBF70
  c->r[0]=R32(c->r[31]+0x00000004u); // 800FBF74
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800FBF78
  W32(c->r[30]+0x00000020u,c->r[0]); // 800FBF7C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800FBF80
  W32(c->r[30]+0x00000024u,c->r[0]); // 800FBF84
L_800FBF88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBF88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FBF8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FBF90
  c->lr=c->r[0]; // 800FBF94
  c->r[1]=c->r[1]+0x00000010u; // 800FBF98
  return; // 800FBF9C
}

// fn_800FBFA0
void f_800FBFA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBFA0
  c->r[0]=c->lr; // 800FBFA4
  c->r[5]=0u+0x80550000u; // 800FBFA8
  c->r[6]=0u+0x00000000u; // 800FBFAC
  W32(c->r[1]+0x00000094u,c->r[0]); // 800FBFB0
  c->r[0]=0u+0x0000000Au; // 800FBFB4
  c->r[5]=c->r[5]+0x00003D60u; // 800FBFB8
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800FBFBC
  c->r[31]=c->r[4]|c->r[4]; // 800FBFC0
  c->r[4]=c->r[1]+0x00000030u; // 800FBFC4
  W32(c->r[1]+0x00000088u,c->r[30]); // 800FBFC8
  c->r[30]=c->r[3]|c->r[3]; // 800FBFCC
  W8(c->r[3]+0x00000074u,c->r[0]); // 800FBFD0
  c->r[3]=c->r[5]+0x00000010u; // 800FBFD4
  c->r[5]=c->r[1]+0x00000024u; // 800FBFD8
  c->lr=0x800FBFE0u; f_801D4470(c); // 800FBFDC
  c->r[3]=c->r[1]+0x00000024u; // 800FBFE0
  c->r[4]=c->r[1]+0x00000030u; // 800FBFE4
  c->r[5]=c->r[1]+0x00000018u; // 800FBFE8
  c->lr=0x800FBFF0u; f_80296A70(c); // 800FBFEC
  c->r[3]=c->r[1]+0x00000018u; // 800FBFF0
  c->r[4]=c->r[3]|c->r[3]; // 800FBFF4
  c->lr=0x800FBFFCu; f_80296AB0(c); // 800FBFF8
  c->r[3]=c->r[1]+0x00000018u; // 800FBFFC
  {uint32_t ea=c->r[2]+0xFFFFAAF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC000
  c->r[4]=c->r[3]|c->r[3]; // 800FC004
  c->lr=0x800FC00Cu; f_80296A94(c); // 800FC008
  c->r[3]=c->r[1]+0x00000030u; // 800FC00C
  c->r[4]=c->r[1]+0x00000018u; // 800FC010
  c->r[5]=c->r[30]+0x000003ECu; // 800FC014
  c->lr=0x800FC01Cu; f_80296A4C(c); // 800FC018
  cmpu(c,0,c->r[31],0x0000FFFFu); // 800FC01C
  if (crb(c,2)) { goto L_800FC048; } // 800FC020
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FC024
  c->r[3]=c->r[30]|c->r[30]; // 800FC028
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC02C
  c->r[4]=c->r[31]|c->r[31]; // 800FC030
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FC034
  c->r[5]=0u+0x00000001u; // 800FC038
  c->f[2]=c->f[1]; // 800FC03C
  c->ctr=c->r[12]; // 800FC040
  if (true) { c->lr=0x800FC048u; dispatch(c,c->ctr); } // 800FC044
L_800FC048:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FC048
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FC04C
  c->lr=0x800FC054u; f_802501B0(c); // 800FC050
  c->r[3]=c->r[1]+0x00000040u; // 800FC054
  c->lr=0x800FC05Cu; f_8003601C(c); // 800FC058
  c->r[3]=0u+0x00000000u; // 800FC05C
  c->lr=0x800FC064u; f_802627F4(c); // 800FC060
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FC064
  c->r[3]=c->r[1]+0x00000008u; // 800FC068
  c->r[4]=c->r[1]+0x00000040u; // 800FC06C
  c->lr=0x800FC074u; f_80354204(c); // 800FC070
  {uint32_t ea=c->r[2]+0xFFFFAAFCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FC074
  c->r[0]=0u+0x00000001u; // 800FC078
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC07C
  c->r[7]=0u+0x803D0000u; // 800FC080
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC084
  c->r[3]=c->r[30]|c->r[30]; // 800FC088
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800FC08C
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800FC090
  c->r[4]=c->r[1]+0x0000000Cu; // 800FC094
  {uint32_t ea=c->r[30]+0x000003F8u; WF32(ea,c->f[0]);} // 800FC098
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800FC09C
  {uint32_t ea=c->r[7]+0x000059D4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FC0A0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FC0A4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FC0A8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800FC0AC
  W32(c->r[1]+0x00000010u,c->r[5]); // 800FC0B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC0B4
  c->lr=0x800FC0BCu; f_800FBF44(c); // 800FC0B8
  c->r[0]=R32(c->r[1]+0x00000094u); // 800FC0BC
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800FC0C0
  c->r[30]=R32(c->r[1]+0x00000088u); // 800FC0C4
  c->lr=c->r[0]; // 800FC0C8
  c->r[1]=c->r[1]+0x00000090u; // 800FC0CC
  return; // 800FC0D0
}

// fn_800FC0D4
void f_800FC0D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC0D4
  c->r[0]=c->lr; // 800FC0D8
  W32(c->r[1]+0x00000074u,c->r[0]); // 800FC0DC
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800FC0E0
  c->r[31]=c->r[3]|c->r[3]; // 800FC0E4
  c->lr=0x800FC0ECu; f_800FE5BC(c); // 800FC0E8
  c->r[3]=0u+0x80550000u; // 800FC0EC
  c->r[4]=0u+0x00000026u; // 800FC0F0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FC0F4
  c->lr=0x800FC0FCu; f_8019C920(c); // 800FC0F8
  c->r[4]=0u+0x00000000u; // 800FC0FC
  c->lr=0x800FC104u; f_80039840(c); // 800FC100
  c->r[4]=0u+0x803A0000u; // 800FC104
  c->r[5]=c->r[1]+0x00000030u; // 800FC108
  c->r[4]=c->r[4]+0xFFFFF290u; // 800FC10C
  c->r[6]=0u+0x00000001u; // 800FC110
  c->r[4]=c->r[4]+0x0000002Au; // 800FC114
  c->lr=0x800FC11Cu; f_80257018(c); // 800FC118
  {uint32_t ea=c->r[2]+0xFFFFAB00u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FC11C
  c->r[3]=c->r[1]+0x00000030u; // 800FC120
  {uint32_t ea=c->r[2]+0xFFFFAB04u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC124
  c->r[4]=c->r[1]+0x00000020u; // 800FC128
  {uint32_t ea=c->r[2]+0xFFFFAB08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC12C
  c->r[5]=c->r[1]+0x00000014u; // 800FC130
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 800FC134
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 800FC138
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800FC13C
  c->lr=0x800FC144u; f_80296750(c); // 800FC140
  c->r[0]=0u+0x00000001u; // 800FC144
  c->r[3]=c->r[31]|c->r[31]; // 800FC148
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800FC14C
  c->r[5]=c->r[1]+0x00000008u; // 800FC150
  c->r[4]=0u+0x00000002u; // 800FC154
  c->r[7]=R32(c->r[1]+0x00000014u); // 800FC158
  c->r[6]=R32(c->r[1]+0x00000018u); // 800FC15C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800FC160
  W32(c->r[1]+0x00000008u,c->r[7]); // 800FC164
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800FC168
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FC16C
  c->lr=0x800FC174u; f_800FBE84(c); // 800FC170
  c->r[0]=0u+0x00000000u; // 800FC174
  W8(c->r[31]+0x00000028u,c->r[0]); // 800FC178
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800FC17C
  c->r[0]=R32(c->r[1]+0x00000074u); // 800FC180
  c->lr=c->r[0]; // 800FC184
  c->r[1]=c->r[1]+0x00000070u; // 800FC188
  return; // 800FC18C
}

// fn_800FC190
void f_800FC190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC190
  c->r[0]=c->lr; // 800FC194
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FC198
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FC19C
  c->r[31]=c->r[3]|c->r[3]; // 800FC1A0
  c->lr=0x800FC1A8u; f_800FE5BC(c); // 800FC1A4
  {uint32_t ea=c->r[2]+0xFFFFAB0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FC1A8
  c->r[0]=0u+0x00000001u; // 800FC1AC
  {uint32_t ea=c->r[2]+0xFFFFAB10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC1B0
  c->r[3]=c->r[31]|c->r[31]; // 800FC1B4
  {uint32_t ea=c->r[2]+0xFFFFAB14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC1B8
  c->r[5]=c->r[1]+0x00000008u; // 800FC1BC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 800FC1C0
  c->r[4]=0u+0x00000002u; // 800FC1C4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800FC1C8
  c->r[7]=R32(c->r[1]+0x00000014u); // 800FC1CC
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800FC1D0
  c->r[6]=R32(c->r[1]+0x00000018u); // 800FC1D4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800FC1D8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800FC1DC
  W32(c->r[1]+0x00000008u,c->r[7]); // 800FC1E0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800FC1E4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FC1E8
  c->lr=0x800FC1F0u; f_800FBE84(c); // 800FC1EC
  c->r[0]=0u+0x00000000u; // 800FC1F0
  W8(c->r[31]+0x00000028u,c->r[0]); // 800FC1F4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FC1F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FC1FC
  c->lr=c->r[0]; // 800FC200
  c->r[1]=c->r[1]+0x00000030u; // 800FC204
  return; // 800FC208
}

// fn_800FC20C
void f_800FC20C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC20C
  c->r[0]=c->lr; // 800FC210
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FC214
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FC218
  c->r[31]=c->r[3]|c->r[3]; // 800FC21C
  c->lr=0x800FC224u; f_800FE5BC(c); // 800FC220
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FC224
  c->r[0]=0u+0x00000001u; // 800FC228
  {uint32_t ea=c->r[2]+0xFFFFAB1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC22C
  c->r[3]=c->r[31]|c->r[31]; // 800FC230
  {uint32_t ea=c->r[2]+0xFFFFAB20u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC234
  c->r[5]=c->r[1]+0x00000008u; // 800FC238
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 800FC23C
  c->r[4]=0u+0x00000002u; // 800FC240
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800FC244
  c->r[7]=R32(c->r[1]+0x00000014u); // 800FC248
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800FC24C
  c->r[6]=R32(c->r[1]+0x00000018u); // 800FC250
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800FC254
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800FC258
  W32(c->r[1]+0x00000008u,c->r[7]); // 800FC25C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800FC260
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FC264
  c->lr=0x800FC26Cu; f_800FBE84(c); // 800FC268
  c->r[0]=0u+0x00000000u; // 800FC26C
  W8(c->r[31]+0x00000028u,c->r[0]); // 800FC270
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FC274
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FC278
  c->lr=c->r[0]; // 800FC27C
  c->r[1]=c->r[1]+0x00000030u; // 800FC280
  return; // 800FC284
}

// fn_800FC288
void f_800FC288(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC288
  c->r[0]=c->lr; // 800FC28C
  c->r[4]=0u+0x00000000u; // 800FC290
  c->r[5]=0u+0xFFFFFFFFu; // 800FC294
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FC298
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FC29C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800FC2A0
  W32(c->r[1]+0x00000024u,c->r[29]); // 800FC2A4
  c->r[29]=c->r[3]|c->r[3]; // 800FC2A8
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FC2AC
  c->r[12]=R32(c->r[12]+0x00000044u); // 800FC2B0
  c->ctr=c->r[12]; // 800FC2B4
  if (true) { c->lr=0x800FC2BCu; dispatch(c,c->ctr); } // 800FC2B8
  c->r[3]=0u+0x80550000u; // 800FC2BC
  c->r[4]=0u+0x00000043u; // 800FC2C0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FC2C4
  c->lr=0x800FC2CCu; f_8019C920(c); // 800FC2C8
  c->r[30]=c->r[3]|c->r[3]; // 800FC2CC
  c->r[4]=c->r[1]+0x00000008u; // 800FC2D0
  c->r[5]=0u+0x00000000u; // 800FC2D4
  c->lr=0x800FC2DCu; f_8007C6C8(c); // 800FC2D8
  c->r[5]=R32(c->r[1]+0x00000008u); // 800FC2DC
  c->r[31]=0u+0x00000000u; // 800FC2E0
  c->r[3]=c->r[30]|c->r[30]; // 800FC2E4
  c->r[4]=c->r[29]|c->r[29]; // 800FC2E8
  W8(c->r[5]+0x0000014Cu,c->r[31]); // 800FC2EC
  c->r[5]=0u+0x00000000u; // 800FC2F0
  c->r[6]=0u+0x00000000u; // 800FC2F4
  c->r[7]=0u+0x00000000u; // 800FC2F8
  c->r[8]=R32(c->r[1]+0x00000008u); // 800FC2FC
  W8(c->r[8]+0x0000014Du,c->r[31]); // 800FC300
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FC304
  c->r[12]=R32(c->r[12]+0x00000040u); // 800FC308
  c->ctr=c->r[12]; // 800FC30C
  if (true) { c->lr=0x800FC314u; dispatch(c,c->ctr); } // 800FC310
  {uint32_t ea=c->r[2]+0xFFFFAB24u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC314
  c->r[3]=c->r[30]|c->r[30]; // 800FC318
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC31C
  c->r[4]=0u+0x00000001u; // 800FC320
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800FC324
  c->r[5]=0u+0x00000001u; // 800FC328
  {uint32_t ea=c->r[2]+0xFFFFAB28u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC32C
  c->f[2]=c->f[1]; // 800FC330
  {uint32_t ea=c->r[2]+0xFFFFAB2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800FC334
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800FC338
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC33C
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[3]);} // 800FC340
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 800FC344
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[0]);} // 800FC348
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[1]);} // 800FC34C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FC350
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FC354
  c->ctr=c->r[12]; // 800FC358
  if (true) { c->lr=0x800FC360u; dispatch(c,c->ctr); } // 800FC35C
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800FC360
  c->r[3]=c->r[29]|c->r[29]; // 800FC364
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC368
  c->r[4]=0u+0x00000021u; // 800FC36C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FC370
  c->r[5]=0u+0x00000000u; // 800FC374
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FC378
  c->ctr=c->r[12]; // 800FC37C
  if (true) { c->lr=0x800FC384u; dispatch(c,c->ctr); } // 800FC380
  {uint32_t ea=c->r[2]+0xFFFFAB38u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC384
  c->r[3]=c->r[29]+0x0000000Cu; // 800FC388
  W8(c->r[29]+0x00000028u,c->r[31]); // 800FC38C
  c->r[4]=0u+0x0000003Cu; // 800FC390
  W8(c->r[29]+0x00000075u,c->r[31]); // 800FC394
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[0]);} // 800FC398
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[0]);} // 800FC39C
  c->lr=0x800FC3A4u; f_80036430(c); // 800FC3A0
  c->r[7]=0u+0x803D0000u; // 800FC3A4
  {uint32_t ea=c->r[7]+0x000059E0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FC3A8
  c->r[3]=c->r[29]|c->r[29]; // 800FC3AC
  c->r[4]=c->r[1]+0x0000000Cu; // 800FC3B0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FC3B4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FC3B8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800FC3BC
  W32(c->r[1]+0x00000010u,c->r[5]); // 800FC3C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC3C4
  c->lr=0x800FC3CCu; f_800FBF44(c); // 800FC3C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FC3CC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FC3D0
  c->r[30]=R32(c->r[1]+0x00000028u); // 800FC3D4
  c->r[29]=R32(c->r[1]+0x00000024u); // 800FC3D8
  c->lr=c->r[0]; // 800FC3DC
  c->r[1]=c->r[1]+0x00000030u; // 800FC3E0
  return; // 800FC3E4
}

// fn_800FC3E8
void f_800FC3E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC3E8
  c->r[0]=c->lr; // 800FC3EC
  W32(c->r[1]+0x00000064u,c->r[0]); // 800FC3F0
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800FC3F4
  c->r[31]=c->r[3]|c->r[3]; // 800FC3F8
  c->lr=0x800FC400u; f_800FE5BC(c); // 800FC3FC
  c->r[3]=0u+0x80550000u; // 800FC400
  c->r[4]=0u+0x00000027u; // 800FC404
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FC408
  c->lr=0x800FC410u; f_8019C920(c); // 800FC40C
  c->r[4]=0u+0x00000000u; // 800FC410
  c->lr=0x800FC418u; f_80039840(c); // 800FC414
  c->r[4]=0u+0x803A0000u; // 800FC418
  c->r[5]=c->r[1]+0x00000020u; // 800FC41C
  c->r[4]=c->r[4]+0xFFFFF290u; // 800FC420
  c->r[6]=0u+0x00000001u; // 800FC424
  c->r[4]=c->r[4]+0x0000000Du; // 800FC428
  c->lr=0x800FC430u; f_80257018(c); // 800FC42C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC430
  c->r[0]=0u+0x00000001u; // 800FC434
  {uint32_t ea=c->r[2]+0xFFFFAB3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC438
  c->r[3]=c->r[31]|c->r[31]; // 800FC43C
  {uint32_t ea=c->r[2]+0xFFFFAB40u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FC440
  c->r[5]=c->r[1]+0x00000008u; // 800FC444
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 800FC448
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FC44C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC450
  c->r[4]=0u+0x00000002u; // 800FC454
  {uint32_t ea=c->r[2]+0xFFFFAB44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC458
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800FC45C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800FC460
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 800FC464
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 800FC468
  c->r[7]=R32(c->r[1]+0x00000014u); // 800FC46C
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800FC470
  c->r[6]=R32(c->r[1]+0x00000018u); // 800FC474
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800FC478
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800FC47C
  W32(c->r[1]+0x00000008u,c->r[7]); // 800FC480
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800FC484
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FC488
  c->lr=0x800FC490u; f_800FBE84(c); // 800FC48C
  c->r[0]=0u+0x00000000u; // 800FC490
  W8(c->r[31]+0x00000028u,c->r[0]); // 800FC494
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800FC498
  c->r[0]=R32(c->r[1]+0x00000064u); // 800FC49C
  c->lr=c->r[0]; // 800FC4A0
  c->r[1]=c->r[1]+0x00000060u; // 800FC4A4
  return; // 800FC4A8
}

// fn_800FC4AC
void f_800FC4AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC4AC
  c->r[0]=c->lr; // 800FC4B0
  W32(c->r[1]+0x00000074u,c->r[0]); // 800FC4B4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800FC4B8
  c->r[31]=c->r[3]|c->r[3]; // 800FC4BC
  c->lr=0x800FC4C4u; f_800FE5BC(c); // 800FC4C0
  c->r[3]=0u+0x80550000u; // 800FC4C4
  c->r[4]=0u+0x00000010u; // 800FC4C8
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FC4CC
  c->lr=0x800FC4D4u; f_8019C920(c); // 800FC4D0
  c->r[4]=0u+0x00000000u; // 800FC4D4
  c->lr=0x800FC4DCu; f_80039840(c); // 800FC4D8
  c->r[4]=0u+0x803A0000u; // 800FC4DC
  c->r[5]=c->r[1]+0x00000030u; // 800FC4E0
  c->r[4]=c->r[4]+0xFFFFF290u; // 800FC4E4
  c->r[6]=0u+0x00000001u; // 800FC4E8
  c->lr=0x800FC4F0u; f_80257018(c); // 800FC4EC
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FC4F0
  c->r[3]=c->r[1]+0x00000030u; // 800FC4F4
  {uint32_t ea=c->r[2]+0xFFFFAB48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC4F8
  c->r[4]=c->r[1]+0x00000014u; // 800FC4FC
  {uint32_t ea=c->r[2]+0xFFFFAB4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC500
  c->r[5]=c->r[1]+0x00000020u; // 800FC504
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 800FC508
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800FC50C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800FC510
  c->lr=0x800FC518u; f_80296750(c); // 800FC514
  c->r[0]=0u+0x00000001u; // 800FC518
  c->r[3]=c->r[31]|c->r[31]; // 800FC51C
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800FC520
  c->r[5]=c->r[1]+0x00000008u; // 800FC524
  c->r[4]=0u+0x00000002u; // 800FC528
  c->r[7]=R32(c->r[1]+0x00000020u); // 800FC52C
  c->r[6]=R32(c->r[1]+0x00000024u); // 800FC530
  c->r[0]=R32(c->r[1]+0x00000028u); // 800FC534
  W32(c->r[1]+0x00000008u,c->r[7]); // 800FC538
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800FC53C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FC540
  c->lr=0x800FC548u; f_800FBE84(c); // 800FC544
  c->r[0]=0u+0x00000000u; // 800FC548
  W8(c->r[31]+0x00000028u,c->r[0]); // 800FC54C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800FC550
  c->r[0]=R32(c->r[1]+0x00000074u); // 800FC554
  c->lr=c->r[0]; // 800FC558
  c->r[1]=c->r[1]+0x00000070u; // 800FC55C
  return; // 800FC560
}

// fn_800FC564
void f_800FC564(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC564
  c->r[0]=c->lr; // 800FC568
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FC56C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FC570
  c->r[31]=c->r[3]|c->r[3]; // 800FC574
  c->lr=0x800FC57Cu; f_800FE5BC(c); // 800FC578
  {uint32_t ea=c->r[2]+0xFFFFAB50u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FC57C
  c->r[0]=0u+0x00000001u; // 800FC580
  {uint32_t ea=c->r[2]+0xFFFFAB54u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC584
  c->r[3]=c->r[31]|c->r[31]; // 800FC588
  {uint32_t ea=c->r[2]+0xFFFFAB58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC58C
  c->r[5]=c->r[1]+0x00000008u; // 800FC590
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 800FC594
  c->r[4]=0u+0x00000002u; // 800FC598
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800FC59C
  c->r[7]=R32(c->r[1]+0x00000014u); // 800FC5A0
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800FC5A4
  c->r[6]=R32(c->r[1]+0x00000018u); // 800FC5A8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800FC5AC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800FC5B0
  W32(c->r[1]+0x00000008u,c->r[7]); // 800FC5B4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800FC5B8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FC5BC
  c->lr=0x800FC5C4u; f_800FBE84(c); // 800FC5C0
  c->r[0]=0u+0x00000000u; // 800FC5C4
  W8(c->r[31]+0x00000028u,c->r[0]); // 800FC5C8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FC5CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FC5D0
  c->lr=c->r[0]; // 800FC5D4
  c->r[1]=c->r[1]+0x00000030u; // 800FC5D8
  return; // 800FC5DC
}

// fn_800FC5E0
void f_800FC5E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC5E0
  c->r[0]=c->lr; // 800FC5E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FC5E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FC5EC
  c->r[31]=c->r[3]|c->r[3]; // 800FC5F0
  c->lr=0x800FC5F8u; f_800FE5BC(c); // 800FC5F4
  {uint32_t ea=c->r[2]+0xFFFFAAF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC5F8
  c->r[0]=0u+0x00000001u; // 800FC5FC
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC600
  c->r[3]=c->r[31]|c->r[31]; // 800FC604
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800FC608
  c->r[4]=0u+0x00000014u; // 800FC60C
  c->f[2]=c->f[1]; // 800FC610
  c->r[5]=0u+0x00000000u; // 800FC614
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800FC618
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FC61C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FC620
  c->ctr=c->r[12]; // 800FC624
  if (true) { c->lr=0x800FC62Cu; dispatch(c,c->ctr); } // 800FC628
  c->r[3]=c->r[31]|c->r[31]; // 800FC62C
  c->r[4]=0u+0x00000004u; // 800FC630
  c->r[5]=0u+0x00000017u; // 800FC634
  c->r[6]=0u+0x00000001u; // 800FC638
  c->r[7]=0u+0x00000001u; // 800FC63C
  c->lr=0x800FC644u; f_8017900C(c); // 800FC640
  c->r[7]=0u+0x803D0000u; // 800FC644
  {uint32_t ea=c->r[7]+0x000059ECu; c->r[6]=R32(ea); c->r[7]=ea;} // 800FC648
  c->r[3]=c->r[31]|c->r[31]; // 800FC64C
  c->r[4]=c->r[1]+0x00000008u; // 800FC650
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FC654
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FC658
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FC65C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FC660
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FC664
  c->lr=0x800FC66Cu; f_800FBF44(c); // 800FC668
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FC66C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FC670
  c->lr=c->r[0]; // 800FC674
  c->r[1]=c->r[1]+0x00000020u; // 800FC678
  return; // 800FC67C
}

// fn_800FC680
void f_800FC680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC680
  c->r[0]=c->lr; // 800FC684
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC688
  c->r[4]=0u+0x00000007u; // 800FC68C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FC690
  c->r[0]=0u+0x00000001u; // 800FC694
  {uint32_t ea=c->r[2]+0xFFFFAAF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC698
  c->f[2]=c->f[1]; // 800FC69C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FC6A0
  c->r[31]=c->r[3]|c->r[3]; // 800FC6A4
  c->r[5]=0u+0x00000000u; // 800FC6A8
  W8(c->r[3]+0x0000006Fu,c->r[0]); // 800FC6AC
  {uint32_t ea=c->r[3]+0x000003F8u; WF32(ea,c->f[0]);} // 800FC6B0
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FC6B4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FC6B8
  c->ctr=c->r[12]; // 800FC6BC
  if (true) { c->lr=0x800FC6C4u; dispatch(c,c->ctr); } // 800FC6C0
  c->r[3]=c->r[31]|c->r[31]; // 800FC6C4
  c->r[4]=0u+0x00000004u; // 800FC6C8
  c->r[5]=0u+0x0000001Au; // 800FC6CC
  c->r[6]=0u+0x00000001u; // 800FC6D0
  c->r[7]=0u+0x00000001u; // 800FC6D4
  c->lr=0x800FC6DCu; f_8017900C(c); // 800FC6D8
  c->r[7]=0u+0x803D0000u; // 800FC6DC
  {uint32_t ea=c->r[7]+0x000059F8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FC6E0
  c->r[3]=c->r[31]|c->r[31]; // 800FC6E4
  c->r[4]=c->r[1]+0x00000008u; // 800FC6E8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FC6EC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FC6F0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FC6F4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FC6F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FC6FC
  c->lr=0x800FC704u; f_800FBF44(c); // 800FC700
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FC704
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FC708
  c->lr=c->r[0]; // 800FC70C
  c->r[1]=c->r[1]+0x00000020u; // 800FC710
  return; // 800FC714
}

// fn_800FC718
void f_800FC718(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC718
  c->r[0]=c->lr; // 800FC71C
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC720
  c->r[4]=0u+0x00000016u; // 800FC724
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC728
  c->r[5]=0u+0x00000001u; // 800FC72C
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FC730
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FC734
  c->r[31]=c->r[3]|c->r[3]; // 800FC738
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FC73C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FC740
  c->ctr=c->r[12]; // 800FC744
  if (true) { c->lr=0x800FC74Cu; dispatch(c,c->ctr); } // 800FC748
  c->r[3]=0u+0x00010000u; // 800FC74C
  {uint32_t ea=c->r[2]+0xFFFFAB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC750
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FC754
  {uint32_t ea=c->r[2]+0xFFFFAB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FC758
  c->r[3]=c->r[31]|c->r[31]; // 800FC75C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800FC760
  c->lr=0x800FC768u; f_800FBFA0(c); // 800FC764
  c->r[0]=0u+0x00000000u; // 800FC768
  W8(c->r[31]+0x00000028u,c->r[0]); // 800FC76C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FC770
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC774
  c->lr=c->r[0]; // 800FC778
  c->r[1]=c->r[1]+0x00000010u; // 800FC77C
  return; // 800FC780
}

// fn_800FC784
void f_800FC784(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC784
  c->r[0]=c->lr; // 800FC788
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FC78C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FC790
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FC794
  c->r[30]=c->r[3]|c->r[3]; // 800FC798
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FC79C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FC7A0
  c->lr=0x800FC7A8u; f_802501B0(c); // 800FC7A4
  cmps(c,0,(int32_t)c->r[3],0); // 800FC7A8
  if (crb(c,2)) { goto L_800FC818; } // 800FC7AC
  c->r[31]=0u+0x80550000u; // 800FC7B0
  c->r[4]=0u+0x00000026u; // 800FC7B4
  c->r[3]=c->r[31]+0xFFFFCE54u; // 800FC7B8
  c->lr=0x800FC7C0u; f_8019C920(c); // 800FC7BC
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FC7C0
  c->r[4]=c->r[30]|c->r[30]; // 800FC7C4
  c->r[5]=0u+0x00000000u; // 800FC7C8
  c->r[6]=0u+0x00000000u; // 800FC7CC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800FC7D0
  c->r[7]=0u+0x00000000u; // 800FC7D4
  c->ctr=c->r[12]; // 800FC7D8
  if (true) { c->lr=0x800FC7E0u; dispatch(c,c->ctr); } // 800FC7DC
  c->r[3]=c->r[31]+0xFFFFCE54u; // 800FC7E0
  c->r[4]=0u+0x00000026u; // 800FC7E4
  c->lr=0x800FC7ECu; f_8019C920(c); // 800FC7E8
  c->lr=0x800FC7F0u; f_80044404(c); // 800FC7EC
  c->r[7]=0u+0x803D0000u; // 800FC7F0
  {uint32_t ea=c->r[7]+0x00005A04u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FC7F4
  c->r[3]=c->r[30]|c->r[30]; // 800FC7F8
  c->r[4]=c->r[1]+0x00000008u; // 800FC7FC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FC800
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FC804
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FC808
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FC80C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FC810
  c->lr=0x800FC818u; f_800FBF44(c); // 800FC814
L_800FC818:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC818
  c->r[4]=0u+0x00000000u; // 800FC81C
  c->lr=0x800FC824u; f_801F5244(c); // 800FC820
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FC824
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FC828
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FC82C
  c->lr=c->r[0]; // 800FC830
  c->r[1]=c->r[1]+0x00000020u; // 800FC834
  return; // 800FC838
}

// fn_800FC83C
void f_800FC83C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC83C
  c->r[0]=c->lr; // 800FC840
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC844
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FC848
  c->r[31]=c->r[3]|c->r[3]; // 800FC84C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FC850
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FC854
  c->lr=0x800FC85Cu; f_802501B0(c); // 800FC858
  c->r[3]=c->r[31]|c->r[31]; // 800FC85C
  c->r[4]=0u+0x00000000u; // 800FC860
  c->lr=0x800FC868u; f_801F5244(c); // 800FC864
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC868
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FC86C
  c->lr=c->r[0]; // 800FC870
  c->r[1]=c->r[1]+0x00000010u; // 800FC874
  return; // 800FC878
}

// fn_800FC87C
void f_800FC87C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC87C
  c->r[0]=c->lr; // 800FC880
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC884
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FC888
  c->r[31]=c->r[3]|c->r[3]; // 800FC88C
  c->r[4]=R32(c->r[3]+0x00000398u); // 800FC890
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FC894
  c->lr=0x800FC89Cu; f_802501B0(c); // 800FC898
  c->r[3]=R8(c->r[31]+0x00000029u); // 800FC89C
  cmps(c,0,(int32_t)c->r[3],0); // 800FC8A0
  if (!crb(c,2)) { goto L_800FC904; } // 800FC8A4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800FC8A8
  c->r[0]=R32(c->r[4]+0x00000030u); // 800FC8AC
  cmps(c,0,(int32_t)c->r[0],25); // 800FC8B0
  if (!crb(c,2)) { goto L_800FC904; } // 800FC8B4
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC8B8
  {uint32_t ea=c->r[2]+0xFFFFAB64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC8BC
  fcmp(c,0,c->f[1],c->f[0]); // 800FC8C0
  if (!crb(c,1)) { goto L_800FC904; } // 800FC8C4
  c->r[0]=c->r[3]+0x00000001u; // 800FC8C8
  c->r[3]=0u+0x80550000u; // 800FC8CC
  W8(c->r[31]+0x00000029u,c->r[0]); // 800FC8D0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FC8D4
  c->r[4]=0u+0x00000044u; // 800FC8D8
  c->lr=0x800FC8E0u; f_8019C920(c); // 800FC8DC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FC8E0
  c->r[4]=c->r[3]|c->r[3]; // 800FC8E4
  c->r[3]=c->r[31]|c->r[31]; // 800FC8E8
  c->r[5]=0u+0x00000000u; // 800FC8EC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800FC8F0
  c->r[6]=0u+0x00000000u; // 800FC8F4
  c->r[7]=0u+0x00000000u; // 800FC8F8
  c->ctr=c->r[12]; // 800FC8FC
  if (true) { c->lr=0x800FC904u; dispatch(c,c->ctr); } // 800FC900
L_800FC904:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FC904
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FC908
  c->lr=0x800FC910u; f_802501B0(c); // 800FC90C
  cmps(c,0,(int32_t)c->r[3],0); // 800FC910
  if (crb(c,2)) { goto L_800FC95C; } // 800FC914
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FC918
  c->r[3]=c->r[31]|c->r[31]; // 800FC91C
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC920
  c->r[5]=0u+0x00000027u; // 800FC924
  c->r[12]=R32(c->r[12]+0x00000064u); // 800FC928
  c->r[6]=0u+0x00000001u; // 800FC92C
  c->f[2]=c->f[1]; // 800FC930
  c->r[4]=R32(c->r[31]+0x00000398u); // 800FC934
  c->ctr=c->r[12]; // 800FC938
  if (true) { c->lr=0x800FC940u; dispatch(c,c->ctr); } // 800FC93C
  c->r[3]=0u+0x00010000u; // 800FC940
  {uint32_t ea=c->r[2]+0xFFFFAB68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC944
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FC948
  {uint32_t ea=c->r[2]+0xFFFFAB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FC94C
  c->r[3]=c->r[31]|c->r[31]; // 800FC950
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800FC954
  c->lr=0x800FC95Cu; f_800FBFA0(c); // 800FC958
L_800FC95C:;
  c->r[3]=c->r[31]|c->r[31]; // 800FC95C
  c->r[4]=0u+0x00000000u; // 800FC960
  c->lr=0x800FC968u; f_801F5244(c); // 800FC964
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC968
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FC96C
  c->lr=c->r[0]; // 800FC970
  c->r[1]=c->r[1]+0x00000010u; // 800FC974
  return; // 800FC978
}

// fn_800FC97C
void f_800FC97C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC97C
  c->r[0]=c->lr; // 800FC980
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC984
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FC988
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FC98C
  c->r[30]=c->r[3]|c->r[3]; // 800FC990
  c->r[4]=R32(c->r[3]+0x00000398u); // 800FC994
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FC998
  c->lr=0x800FC9A0u; f_802501B0(c); // 800FC99C
  c->r[3]=0u+0x80550000u; // 800FC9A0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FC9A4
  c->lr=0x800FC9ACu; f_8005891C(c); // 800FC9A8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800FC9AC
  cmpu(c,0,c->r[0],0x00000001u); // 800FC9B0
  if (!crb(c,2)) { goto L_800FC9FC; } // 800FC9B4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FC9B8
  c->r[0]=R32(c->r[3]+0x00000030u); // 800FC9BC
  cmps(c,0,(int32_t)c->r[0],24); // 800FC9C0
  if (crb(c,2)) { goto L_800FC9EC; } // 800FC9C4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FC9C8
  c->r[3]=c->r[30]|c->r[30]; // 800FC9CC
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC9D0
  c->r[4]=0u+0x00000018u; // 800FC9D4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FC9D8
  c->r[5]=0u+0x00000000u; // 800FC9DC
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FC9E0
  c->ctr=c->r[12]; // 800FC9E4
  if (true) { c->lr=0x800FC9ECu; dispatch(c,c->ctr); } // 800FC9E8
L_800FC9EC:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FC9EC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FC9F0
  c->lr=0x800FC9F8u; f_802501B0(c); // 800FC9F4
  goto L_800FCB34; // 800FC9F8
L_800FC9FC:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FC9FC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FCA00
  c->lr=0x800FCA08u; f_802501B0(c); // 800FCA04
  cmps(c,0,(int32_t)c->r[3],0); // 800FCA08
  if (crb(c,2)) { goto L_800FCA88; } // 800FCA0C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FCA10
  c->r[0]=R32(c->r[3]+0x00000030u); // 800FCA14
  cmps(c,0,(int32_t)c->r[0],26); // 800FCA18
  if (!crb(c,2)) { goto L_800FCA88; } // 800FCA1C
  c->r[3]=0u+0x80620000u; // 800FCA20
  c->r[4]=0u+0x00000011u; // 800FCA24
  c->r[3]=c->r[3]+0x00007688u; // 800FCA28
  c->r[3]=R32(c->r[3]+0x00000014u); // 800FCA2C
  c->lr=0x800FCA34u; f_80038A08(c); // 800FCA30
  c->r[0]=R8(c->r[30]+0x0000002Au); // 800FCA34
  cmps(c,0,(int32_t)c->r[0],0); // 800FCA38
  if (!crb(c,2)) { goto L_800FCA68; } // 800FCA3C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FCA40
  c->r[3]=c->r[30]|c->r[30]; // 800FCA44
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCA48
  c->r[4]=0u+0x00000018u; // 800FCA4C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FCA50
  c->r[5]=0u+0x00000000u; // 800FCA54
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FCA58
  c->ctr=c->r[12]; // 800FCA5C
  if (true) { c->lr=0x800FCA64u; dispatch(c,c->ctr); } // 800FCA60
  goto L_800FCA88; // 800FCA64
L_800FCA68:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCA68
  c->r[4]=0u+0x00000004u; // 800FCA6C
  c->r[5]=0u+0x00000011u; // 800FCA70
  c->r[6]=0u+0x00000001u; // 800FCA74
  c->r[7]=0u+0x00000001u; // 800FCA78
  c->lr=0x800FCA80u; f_8017900C(c); // 800FCA7C
  c->r[0]=0u+0x00000000u; // 800FCA80
  W8(c->r[30]+0x0000002Au,c->r[0]); // 800FCA84
L_800FCA88:;
  c->r[31]=0u+0x805D0000u; // 800FCA88
  c->r[4]=0u+0x00000001u; // 800FCA8C
  c->r[3]=c->r[31]+0x00003E0Cu; // 800FCA90
  c->lr=0x800FCA98u; f_800FCB4C(c); // 800FCA94
  cmpu(c,0,c->r[3],0x00000001u); // 800FCA98
  if (crb(c,2)) { goto L_800FCAB4; } // 800FCA9C
  c->r[3]=c->r[31]+0x00003E0Cu; // 800FCAA0
  c->r[4]=0u+0x00000002u; // 800FCAA4
  c->lr=0x800FCAACu; f_800FCB4C(c); // 800FCAA8
  cmpu(c,0,c->r[3],0x00000001u); // 800FCAAC
  if (!crb(c,2)) { goto L_800FCB28; } // 800FCAB0
L_800FCAB4:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FCAB4
  c->r[0]=R32(c->r[3]+0x00000030u); // 800FCAB8
  cmps(c,0,(int32_t)c->r[0],26); // 800FCABC
  if (crb(c,2)) { goto L_800FCB0C; } // 800FCAC0
  c->r[0]=0u+0x00000000u; // 800FCAC4
  c->r[3]=c->r[30]|c->r[30]; // 800FCAC8
  W8(c->r[30]+0x0000002Au,c->r[0]); // 800FCACC
  c->r[4]=0u+0x00000004u; // 800FCAD0
  c->r[5]=0u+0x00000011u; // 800FCAD4
  c->r[6]=0u+0x00000001u; // 800FCAD8
  c->r[7]=0u+0x00000001u; // 800FCADC
  c->lr=0x800FCAE4u; f_8017900C(c); // 800FCAE0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FCAE4
  c->r[3]=c->r[30]|c->r[30]; // 800FCAE8
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCAEC
  c->r[4]=0u+0x0000001Au; // 800FCAF0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FCAF4
  c->r[5]=0u+0x00000000u; // 800FCAF8
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FCAFC
  c->ctr=c->r[12]; // 800FCB00
  if (true) { c->lr=0x800FCB08u; dispatch(c,c->ctr); } // 800FCB04
  goto L_800FCB18; // 800FCB08
L_800FCB0C:;
  c->r[3]=R8(c->r[30]+0x0000002Au); // 800FCB0C
  c->r[0]=c->r[3]+0x00000001u; // 800FCB10
  W8(c->r[30]+0x0000002Au,c->r[0]); // 800FCB14
L_800FCB18:;
  c->r[3]=0u+0x00000000u; // 800FCB18
  c->r[4]=0u+0x00000003u; // 800FCB1C
  c->r[5]=0u+0x0000000Cu; // 800FCB20
  c->lr=0x800FCB28u; f_8027C0C8(c); // 800FCB24
L_800FCB28:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCB28
  c->r[4]=0u+0x00000000u; // 800FCB2C
  c->lr=0x800FCB34u; f_801F5244(c); // 800FCB30
L_800FCB34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCB34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FCB38
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FCB3C
  c->lr=c->r[0]; // 800FCB40
  c->r[1]=c->r[1]+0x00000010u; // 800FCB44
  return; // 800FCB48
}

// fn_800FCB4C
void f_800FCB4C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800FCB4C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800FCB50
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 800FCB54
  c->r[3]=c->r[3]&c->r[0]; // 800FCB58
  c->r[0]=0u-c->r[3]; // 800FCB5C
  c->r[0]=c->r[0]|c->r[3]; // 800FCB60
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800FCB64
  return; // 800FCB68
}

// fn_800FCB6C
void f_800FCB6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCB6C
  c->r[0]=c->lr; // 800FCB70
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FCB74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FCB78
  c->r[31]=c->r[3]|c->r[3]; // 800FCB7C
  c->r[4]=R8(c->r[3]+0x00000029u); // 800FCB80
  cmps(c,0,(int32_t)c->r[4],1); // 800FCB84
  if (crb(c,2)) { goto L_800FCC00; } // 800FCB88
  if (!crb(c,0)) { goto L_800FCC40; } // 800FCB8C
  cmps(c,0,(int32_t)c->r[4],0); // 800FCB90
  if (!crb(c,0)) { goto L_800FCB9C; } // 800FCB94
  goto L_800FCC40; // 800FCB98
L_800FCB9C:;
  c->r[5]=R32(c->r[3]+0x00000394u); // 800FCB9C
  c->r[0]=R32(c->r[5]+0x00000030u); // 800FCBA0
  cmps(c,0,(int32_t)c->r[0],28); // 800FCBA4
  if (!crb(c,2)) { goto L_800FCC40; } // 800FCBA8
  {uint32_t ea=c->r[5]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCBAC
  {uint32_t ea=c->r[2]+0xFFFFAB6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCBB0
  fcmp(c,0,c->f[1],c->f[0]); // 800FCBB4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800FCBB8
  if (!crb(c,2)) { goto L_800FCC40; } // 800FCBBC
  c->r[0]=c->r[4]+0x00000001u; // 800FCBC0
  c->r[4]=0u+0x80550000u; // 800FCBC4
  W8(c->r[3]+0x00000029u,c->r[0]); // 800FCBC8
  c->r[3]=c->r[4]+0xFFFFCE54u; // 800FCBCC
  c->r[4]=0u+0x00000043u; // 800FCBD0
  c->lr=0x800FCBD8u; f_8019C920(c); // 800FCBD4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FCBD8
  c->r[4]=c->r[3]|c->r[3]; // 800FCBDC
  c->r[3]=c->r[31]|c->r[31]; // 800FCBE0
  c->r[5]=0u+0x00000000u; // 800FCBE4
  c->r[12]=R32(c->r[12]+0x00000040u); // 800FCBE8
  c->r[6]=0u+0x00000000u; // 800FCBEC
  c->r[7]=0u+0x00000000u; // 800FCBF0
  c->ctr=c->r[12]; // 800FCBF4
  if (true) { c->lr=0x800FCBFCu; dispatch(c,c->ctr); } // 800FCBF8
  goto L_800FCC40; // 800FCBFC
L_800FCC00:;
  c->r[5]=R32(c->r[3]+0x00000394u); // 800FCC00
  c->r[0]=R32(c->r[5]+0x00000030u); // 800FCC04
  cmps(c,0,(int32_t)c->r[0],28); // 800FCC08
  if (!crb(c,2)) { goto L_800FCC40; } // 800FCC0C
  {uint32_t ea=c->r[5]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCC10
  {uint32_t ea=c->r[2]+0xFFFFAB70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCC14
  fcmp(c,0,c->f[1],c->f[0]); // 800FCC18
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800FCC1C
  if (!crb(c,2)) { goto L_800FCC40; } // 800FCC20
  c->r[0]=c->r[4]+0x00000001u; // 800FCC24
  c->r[4]=0u+0x00000004u; // 800FCC28
  W8(c->r[3]+0x00000029u,c->r[0]); // 800FCC2C
  c->r[5]=0u+0x0000001Fu; // 800FCC30
  c->r[6]=0u+0x00000001u; // 800FCC34
  c->r[7]=0u+0x00000001u; // 800FCC38
  c->lr=0x800FCC40u; f_8017900C(c); // 800FCC3C
L_800FCC40:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FCC40
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FCC44
  c->lr=0x800FCC4Cu; f_802501B0(c); // 800FCC48
  cmps(c,0,(int32_t)c->r[3],0); // 800FCC4C
  if (crb(c,2)) { goto L_800FCC7C; } // 800FCC50
  c->r[7]=0u+0x803D0000u; // 800FCC54
  {uint32_t ea=c->r[7]+0x00005A10u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FCC58
  c->r[3]=c->r[31]|c->r[31]; // 800FCC5C
  c->r[4]=c->r[1]+0x00000008u; // 800FCC60
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FCC64
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FCC68
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FCC6C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FCC70
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FCC74
  c->lr=0x800FCC7Cu; f_800FBF44(c); // 800FCC78
L_800FCC7C:;
  c->r[3]=c->r[31]|c->r[31]; // 800FCC7C
  c->r[4]=0u+0x00000000u; // 800FCC80
  c->lr=0x800FCC88u; f_801F5244(c); // 800FCC84
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FCC88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FCC8C
  c->lr=c->r[0]; // 800FCC90
  c->r[1]=c->r[1]+0x00000020u; // 800FCC94
  return; // 800FCC98
}

// fn_800FCC9C
void f_800FCC9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCC9C
  c->r[0]=c->lr; // 800FCCA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCCA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FCCA8
  c->r[31]=c->r[3]|c->r[3]; // 800FCCAC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FCCB0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FCCB4
  c->lr=0x800FCCBCu; f_802501B0(c); // 800FCCB8
  c->r[3]=c->r[31]|c->r[31]; // 800FCCBC
  c->r[4]=0u+0x00000000u; // 800FCCC0
  c->lr=0x800FCCC8u; f_801F5244(c); // 800FCCC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCCC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FCCCC
  c->lr=c->r[0]; // 800FCCD0
  c->r[1]=c->r[1]+0x00000010u; // 800FCCD4
  return; // 800FCCD8
}

// fn_800FCCDC
void f_800FCCDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCCDC
  c->r[0]=c->lr; // 800FCCE0
  c->r[4]=0u+0x805D0000u; // 800FCCE4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FCCE8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800FCCEC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800FCCF0
  c->r[30]=c->r[3]|c->r[3]; // 800FCCF4
  c->r[3]=c->r[4]+0x00003E0Cu; // 800FCCF8
  c->r[4]=c->r[1]+0x00000008u; // 800FCCFC
  W32(c->r[1]+0x00000034u,c->r[29]); // 800FCD00
  c->lr=0x800FCD08u; f_801F93AC(c); // 800FCD04
  c->r[4]=0u+0x80550000u; // 800FCD08
  c->r[29]=rotl(c->r[3],0)&0x0000FFFFu; // 800FCD0C
  c->r[3]=c->r[4]+0xFFFFCE54u; // 800FCD10
  c->r[4]=0u+0x00000043u; // 800FCD14
  c->lr=0x800FCD1Cu; f_8019C920(c); // 800FCD18
  c->r[4]=0u+0x80620000u; // 800FCD1C
  {uint32_t ea=c->r[2]+0xFFFFAB74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCD20
  c->r[4]=c->r[4]+0x000079C0u; // 800FCD24
  c->r[31]=c->r[3]|c->r[3]; // 800FCD28
  {uint32_t ea=c->r[4]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCD2C
  fcmp(c,0,c->f[1],c->f[0]); // 800FCD30
  if (!crb(c,0)) { goto L_800FCD50; } // 800FCD34
  c->r[3]=R8(c->r[30]+0x00000075u); // 800FCD38
  cmpu(c,0,c->r[3],0x0000000Au); // 800FCD3C
  if (!crb(c,0)) { goto L_800FCD58; } // 800FCD40
  c->r[0]=c->r[3]+0x00000001u; // 800FCD44
  W8(c->r[30]+0x00000075u,c->r[0]); // 800FCD48
  goto L_800FCD58; // 800FCD4C
L_800FCD50:;
  c->r[0]=0u+0x00000000u; // 800FCD50
  W8(c->r[30]+0x00000075u,c->r[0]); // 800FCD54
L_800FCD58:;
  c->r[3]=c->r[30]+0x0000000Cu; // 800FCD58
  c->r[4]=0u+0x0000003Cu; // 800FCD5C
  c->lr=0x800FCD64u; f_8004E0A4(c); // 800FCD60
  cmps(c,0,(int32_t)c->r[3],0); // 800FCD64
  if (crb(c,2)) { goto L_800FCD74; } // 800FCD68
  c->r[3]=c->r[30]+0x0000000Cu; // 800FCD6C
  c->lr=0x800FCD74u; f_80038C0C(c); // 800FCD70
L_800FCD74:;
  c->r[3]=c->r[30]+0x0000000Cu; // 800FCD74
  c->r[4]=0u+0x0000003Cu; // 800FCD78
  c->lr=0x800FCD80u; f_8004E0A4(c); // 800FCD7C
  cmps(c,0,(int32_t)c->r[3],0); // 800FCD80
  if (crb(c,2)) { goto L_800FCD98; } // 800FCD84
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCD88
  {uint32_t ea=c->r[2]+0xFFFFAAF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCD8C
  fcmp(c,0,c->f[1],c->f[0]); // 800FCD90
  if (crb(c,0)) { goto L_800FCDBC; } // 800FCD94
L_800FCD98:;
  cmps(c,0,(int32_t)c->r[29],0); // 800FCD98
  if (!crb(c,2)) { goto L_800FCDBC; } // 800FCD9C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FCDA0
  c->r[3]=R32(c->r[3]+0x00000030u); // 800FCDA4
  cmps(c,0,(int32_t)c->r[3],30); // 800FCDA8
  if (!crb(c,2)) { goto L_800FD0C0; } // 800FCDAC
  c->r[0]=R8(c->r[30]+0x00000075u); // 800FCDB0
  cmpu(c,0,c->r[0],0x00000003u); // 800FCDB4
  if (!crb(c,0)) { goto L_800FD0C0; } // 800FCDB8
L_800FCDBC:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FCDBC
  c->r[4]=R32(c->r[3]+0x00000030u); // 800FCDC0
  cmps(c,0,(int32_t)c->r[4],33); // 800FCDC4
  if (crb(c,2)) { goto L_800FCDE4; } // 800FCDC8
  cmps(c,0,(int32_t)c->r[4],32); // 800FCDCC
  if (!crb(c,2)) { goto L_800FCE38; } // 800FCDD0
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCDD4
  {uint32_t ea=c->r[2]+0xFFFFAB78u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCDD8
  fcmp(c,0,c->f[1],c->f[0]); // 800FCDDC
  if (!crb(c,1)) { goto L_800FCE38; } // 800FCDE0
L_800FCDE4:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FCDE4
  c->r[3]=c->r[30]|c->r[30]; // 800FCDE8
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCDEC
  c->r[4]=0u+0x0000001Du; // 800FCDF0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FCDF4
  c->r[5]=0u+0x00000000u; // 800FCDF8
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FCDFC
  c->ctr=c->r[12]; // 800FCE00
  if (true) { c->lr=0x800FCE08u; dispatch(c,c->ctr); } // 800FCE04
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FCE08
  c->r[3]=c->r[31]|c->r[31]; // 800FCE0C
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCE10
  c->r[4]=0u+0x00000002u; // 800FCE14
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FCE18
  c->r[5]=0u+0x00000000u; // 800FCE1C
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FCE20
  c->ctr=c->r[12]; // 800FCE24
  if (true) { c->lr=0x800FCE2Cu; dispatch(c,c->ctr); } // 800FCE28
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCE2C
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[0]);} // 800FCE30
  goto L_800FD368; // 800FCE34
L_800FCE38:;
  c->r[0]=c->r[4]+0xFFFFFFE3u; // 800FCE38
  cmpu(c,0,c->r[0],0x00000001u); // 800FCE3C
  if (crb(c,1)) { goto L_800FCF98; } // 800FCE40
  cmps(c,0,(int32_t)c->r[4],29); // 800FCE44
  if (!crb(c,2)) { goto L_800FCE94; } // 800FCE48
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCE4C
  {uint32_t ea=c->r[2]+0xFFFFAB38u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCE50
  fcmp(c,0,c->f[1],c->f[0]); // 800FCE54
  if (!crb(c,0)) { goto L_800FCE60; } // 800FCE58
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800FCE5C
L_800FCE60:;
  c->r[3]=0u+0x80620000u; // 800FCE60
  {uint32_t ea=c->r[2]+0xFFFFAAFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCE64
  c->r[3]=c->r[3]+0x000079C0u; // 800FCE68
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FCE6C
  fcmp(c,0,c->f[2],c->f[0]); // 800FCE70
  if (!crb(c,1)) { goto L_800FCEAC; } // 800FCE74
  {uint32_t ea=c->r[2]+0xFFFFAB7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCE78
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCE7C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800FCE80
  fcmp(c,0,c->f[0],c->f[1]); // 800FCE84
  if (!crb(c,0)) { goto L_800FCEAC; } // 800FCE88
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800FCE8C
  goto L_800FCEAC; // 800FCE90
L_800FCE94:;
  c->r[3]=0u+0x80620000u; // 800FCE94
  {uint32_t ea=c->r[2]+0xFFFFAB7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCE98
  c->r[3]=c->r[3]+0x000079C0u; // 800FCE9C
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCEA0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800FCEA4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800FCEA8
L_800FCEAC:;
  c->r[3]=c->r[30]+0x0000000Cu; // 800FCEAC
  c->r[4]=0u+0x0000003Cu; // 800FCEB0
  c->lr=0x800FCEB8u; f_8004E0A4(c); // 800FCEB4
  cmps(c,0,(int32_t)c->r[3],0); // 800FCEB8
  if (crb(c,2)) { goto L_800FCEDC; } // 800FCEBC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCEC0
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCEC4
  fcmp(c,0,c->f[1],c->f[0]); // 800FCEC8
  if (!crb(c,0)) { goto L_800FCED8; } // 800FCECC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800FCED0
  goto L_800FCEDC; // 800FCED4
L_800FCED8:;
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[1]);} // 800FCED8
L_800FCEDC:;
  {uint32_t ea=c->r[2]+0xFFFFAB84u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCEDC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCEE0
  {uint32_t ea=c->r[2]+0xFFFFAB80u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FCEE4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[0]); // 800FCEE8
  {uint32_t ea=c->r[30]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCEEC
  {uint32_t ea=c->r[2]+0xFFFFAAF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCEF0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[1],c->f[3])); // 800FCEF4
  fcmp(c,0,c->f[1],c->f[0]); // 800FCEF8
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[1]);} // 800FCEFC
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[1]);} // 800FCF00
  if (!crb(c,1)) { goto L_800FCF68; } // 800FCF04
  c->r[3]=0u+0x80620000u; // 800FCF08
  {uint32_t ea=c->r[2]+0xFFFFAAFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCF0C
  c->r[3]=c->r[3]+0x000079C0u; // 800FCF10
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCF14
  fcmp(c,0,c->f[1],c->f[0]); // 800FCF18
  if (!crb(c,1)) { goto L_800FCF2C; } // 800FCF1C
  c->r[3]=c->r[30]+0x0000000Cu; // 800FCF20
  c->r[4]=0u+0x00000000u; // 800FCF24
  c->lr=0x800FCF2Cu; f_80036430(c); // 800FCF28
L_800FCF2C:;
  c->r[29]=0u+0x80620000u; // 800FCF2C
  c->r[4]=0u+0x0000006Cu; // 800FCF30
  c->r[29]=c->r[29]+0x00007688u; // 800FCF34
  c->r[3]=R32(c->r[29]+0x00000014u); // 800FCF38
  c->lr=0x800FCF40u; f_80038AF4(c); // 800FCF3C
  cmps(c,0,(int32_t)c->r[3],0); // 800FCF40
  if (!crb(c,2)) { goto L_800FCF54; } // 800FCF44
  c->r[3]=R32(c->r[29]+0x00000014u); // 800FCF48
  c->r[4]=0u+0x00000054u; // 800FCF4C
  c->lr=0x800FCF54u; f_80038A08(c); // 800FCF50
L_800FCF54:;
  c->r[3]=0u+0x80620000u; // 800FCF54
  c->r[4]=0u+0x0000006Bu; // 800FCF58
  c->r[3]=c->r[3]+0x00007688u; // 800FCF5C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800FCF60
  c->lr=0x800FCF68u; f_80038A08(c); // 800FCF64
L_800FCF68:;
  {uint32_t ea=c->r[30]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCF68
  c->r[3]=c->r[30]|c->r[30]; // 800FCF6C
  {uint32_t ea=c->r[2]+0xFFFFAB38u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCF70
  c->r[4]=0u+0x00000000u; // 800FCF74
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800FCF78
  c->lr=0x800FCF80u; f_80038A80(c); // 800FCF7C
  {uint32_t ea=c->r[30]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCF80
  c->r[3]=c->r[31]|c->r[31]; // 800FCF84
  {uint32_t ea=c->r[2]+0xFFFFAB38u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCF88
  c->r[4]=0u+0x00000000u; // 800FCF8C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800FCF90
  c->lr=0x800FCF98u; f_80038A80(c); // 800FCF94
L_800FCF98:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FCF98
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FCF9C
  c->lr=0x800FCFA4u; f_802501B0(c); // 800FCFA0
  cmps(c,0,(int32_t)c->r[3],0); // 800FCFA4
  if (crb(c,2)) { goto L_800FD368; } // 800FCFA8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FCFAC
  c->r[0]=R32(c->r[3]+0x00000030u); // 800FCFB0
  cmps(c,0,(int32_t)c->r[0],31); // 800FCFB4
  if (crb(c,2)) { goto L_800FD368; } // 800FCFB8
  if (!crb(c,0)) { goto L_800FCFD0; } // 800FCFBC
  cmps(c,0,(int32_t)c->r[0],29); // 800FCFC0
  if (crb(c,2)) { goto L_800FCFDC; } // 800FCFC4
  if (!crb(c,0)) { goto L_800FD028; } // 800FCFC8
  goto L_800FD368; // 800FCFCC
L_800FCFD0:;
  cmps(c,0,(int32_t)c->r[0],33); // 800FCFD0
  if (!crb(c,0)) { goto L_800FD368; } // 800FCFD4
  goto L_800FD074; // 800FCFD8
L_800FCFDC:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FCFDC
  c->r[3]=c->r[30]|c->r[30]; // 800FCFE0
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCFE4
  c->r[4]=0u+0x0000001Eu; // 800FCFE8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FCFEC
  c->r[5]=0u+0x00000000u; // 800FCFF0
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FCFF4
  c->ctr=c->r[12]; // 800FCFF8
  if (true) { c->lr=0x800FD000u; dispatch(c,c->ctr); } // 800FCFFC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FD000
  c->r[3]=c->r[31]|c->r[31]; // 800FD004
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD008
  c->r[4]=0u+0x00000003u; // 800FD00C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD010
  c->r[5]=0u+0x00000000u; // 800FD014
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD018
  c->ctr=c->r[12]; // 800FD01C
  if (true) { c->lr=0x800FD024u; dispatch(c,c->ctr); } // 800FD020
  goto L_800FD368; // 800FD024
L_800FD028:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FD028
  c->r[3]=c->r[30]|c->r[30]; // 800FD02C
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD030
  c->r[4]=0u+0x0000001Eu; // 800FD034
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD038
  c->r[5]=0u+0x00000000u; // 800FD03C
  c->f[2]=c->f[1]; // 800FD040
  c->ctr=c->r[12]; // 800FD044
  if (true) { c->lr=0x800FD04Cu; dispatch(c,c->ctr); } // 800FD048
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FD04C
  c->r[3]=c->r[31]|c->r[31]; // 800FD050
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD054
  c->r[4]=0u+0x00000003u; // 800FD058
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD05C
  c->r[5]=0u+0x00000000u; // 800FD060
  c->f[2]=c->f[1]; // 800FD064
  c->ctr=c->r[12]; // 800FD068
  if (true) { c->lr=0x800FD070u; dispatch(c,c->ctr); } // 800FD06C
  goto L_800FD368; // 800FD070
L_800FD074:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FD074
  c->r[3]=c->r[30]|c->r[30]; // 800FD078
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD07C
  c->r[4]=0u+0x00000021u; // 800FD080
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD084
  c->r[5]=0u+0x00000000u; // 800FD088
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD08C
  c->ctr=c->r[12]; // 800FD090
  if (true) { c->lr=0x800FD098u; dispatch(c,c->ctr); } // 800FD094
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FD098
  c->r[3]=c->r[31]|c->r[31]; // 800FD09C
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD0A0
  c->r[4]=0u+0x00000001u; // 800FD0A4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD0A8
  c->r[5]=0u+0x00000000u; // 800FD0AC
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD0B0
  c->ctr=c->r[12]; // 800FD0B4
  if (true) { c->lr=0x800FD0BCu; dispatch(c,c->ctr); } // 800FD0B8
  goto L_800FD368; // 800FD0BC
L_800FD0C0:;
  c->r[0]=R8(c->r[30]+0x00000075u); // 800FD0C0
  cmpu(c,0,c->r[0],0x00000003u); // 800FD0C4
  if (!crb(c,1)) { goto L_800FD248; } // 800FD0C8
  cmps(c,0,(int32_t)c->r[3],30); // 800FD0CC
  if (!crb(c,2)) { goto L_800FD248; } // 800FD0D0
  {uint32_t ea=c->r[30]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD0D4
  {uint32_t ea=c->r[2]+0xFFFFAB38u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD0D8
  fcmp(c,0,c->f[1],c->f[0]); // 800FD0DC
  if (!crb(c,1)) { goto L_800FD248; } // 800FD0E0
  c->r[5]=0u+0x80620000u; // 800FD0E4
  c->r[3]=c->r[1]+0x00000018u; // 800FD0E8
  c->r[5]=c->r[5]+0x000079C0u; // 800FD0EC
  {uint32_t ea=c->r[5]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD0F0
  c->r[4]=c->r[3]|c->r[3]; // 800FD0F4
  {uint32_t ea=c->r[5]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD0F8
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD0FC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 800FD100
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 800FD104
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800FD108
  c->lr=0x800FD110u; f_80296AB0(c); // 800FD10C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD110
  c->lr=0x800FD118u; f_8002C1B0(c); // 800FD114
  {uint32_t ea=c->r[2]+0xFFFFAB88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD118
  fcmp(c,0,c->f[1],c->f[0]); // 800FD11C
  if (crb(c,1)) { goto L_800FD138; } // 800FD120
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD124
  c->lr=0x800FD12Cu; f_8002C1B0(c); // 800FD128
  {uint32_t ea=c->r[2]+0xFFFFAB88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD12C
  fcmp(c,0,c->f[1],c->f[0]); // 800FD130
  if (!crb(c,1)) { goto L_800FD248; } // 800FD134
L_800FD138:;
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD138
  {uint32_t ea=c->r[2]+0xFFFFAB8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD13C
  fcmp(c,0,c->f[1],c->f[0]); // 800FD140
  if (!crb(c,1)) { goto L_800FD15C; } // 800FD144
  c->r[3]=0u+0x80620000u; // 800FD148
  c->r[4]=0u+0x00000014u; // 800FD14C
  c->r[3]=c->r[3]+0x00007688u; // 800FD150
  c->r[3]=R32(c->r[3]+0x00000014u); // 800FD154
  c->lr=0x800FD15Cu; f_80038A08(c); // 800FD158
L_800FD15C:;
  c->r[3]=0u+0x80550000u; // 800FD15C
  c->r[4]=0u+0x00000005u; // 800FD160
  c->r[3]=c->r[3]+0x00003D60u; // 800FD164
  c->lr=0x800FD16Cu; f_801D50B8(c); // 800FD168
  c->r[3]=0u+0x80620000u; // 800FD16C
  c->r[4]=0u+0x00000020u; // 800FD170
  c->r[3]=c->r[3]+0x00007688u; // 800FD174
  c->r[3]=R32(c->r[3]+0x00000014u); // 800FD178
  c->lr=0x800FD180u; f_8003DCAC(c); // 800FD17C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800FD180
  c->r[3]=c->r[30]|c->r[30]; // 800FD184
  {uint32_t ea=c->r[2]+0xFFFFAAF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD188
  c->r[4]=0u+0x00000000u; // 800FD18C
  c->r[0]=c->r[0]|0x00002000u; // 800FD190
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800FD194
  c->lr=0x800FD19Cu; f_80038A80(c); // 800FD198
  {uint32_t ea=c->r[2]+0xFFFFAAF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD19C
  c->r[3]=c->r[31]|c->r[31]; // 800FD1A0
  c->r[4]=0u+0x00000000u; // 800FD1A4
  c->lr=0x800FD1ACu; f_80038A80(c); // 800FD1A8
  c->r[3]=c->r[30]|c->r[30]; // 800FD1AC
  c->r[4]=0u+0x00000004u; // 800FD1B0
  c->r[5]=0u+0x00000022u; // 800FD1B4
  c->r[6]=0u+0x00000001u; // 800FD1B8
  c->r[7]=0u+0x00000001u; // 800FD1BC
  c->lr=0x800FD1C4u; f_8017900C(c); // 800FD1C0
  c->r[3]=0u+0x00000000u; // 800FD1C4
  c->r[4]=0u+0x00000003u; // 800FD1C8
  c->r[5]=0u+0x0000000Cu; // 800FD1CC
  c->lr=0x800FD1D4u; f_8027C0C8(c); // 800FD1D0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FD1D4
  c->r[3]=c->r[30]|c->r[30]; // 800FD1D8
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD1DC
  c->r[4]=0u+0x0000001Fu; // 800FD1E0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD1E4
  c->r[5]=0u+0x00000000u; // 800FD1E8
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD1EC
  c->ctr=c->r[12]; // 800FD1F0
  if (true) { c->lr=0x800FD1F8u; dispatch(c,c->ctr); } // 800FD1F4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FD1F8
  c->r[3]=c->r[31]|c->r[31]; // 800FD1FC
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD200
  c->r[4]=0u+0x00000004u; // 800FD204
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD208
  c->r[5]=0u+0x00000000u; // 800FD20C
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD210
  c->ctr=c->r[12]; // 800FD214
  if (true) { c->lr=0x800FD21Cu; dispatch(c,c->ctr); } // 800FD218
  c->r[7]=0u+0x803D0000u; // 800FD21C
  {uint32_t ea=c->r[7]+0x00005A1Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800FD220
  c->r[3]=c->r[30]|c->r[30]; // 800FD224
  c->r[4]=c->r[1]+0x0000000Cu; // 800FD228
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FD22C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FD230
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800FD234
  W32(c->r[1]+0x00000010u,c->r[5]); // 800FD238
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD23C
  c->lr=0x800FD244u; f_800FBF44(c); // 800FD240
  goto L_800FD3E0; // 800FD244
L_800FD248:;
  {uint32_t ea=c->r[2]+0xFFFFAB94u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FD248
  c->r[3]=c->r[30]|c->r[30]; // 800FD24C
  {uint32_t ea=c->r[30]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD250
  c->r[4]=0u+0x00000000u; // 800FD254
  {uint32_t ea=c->r[2]+0xFFFFAB90u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD258
  {uint32_t ea=c->r[2]+0xFFFFAB38u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD25C
  c->f[2]=c->ps1[2]=S(std::fma(c->f[3],c->f[2],c->f[1])); // 800FD260
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[0]); // 800FD264
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[2]);} // 800FD268
  c->lr=0x800FD270u; f_80038A80(c); // 800FD26C
  {uint32_t ea=c->r[30]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD270
  c->r[3]=c->r[31]|c->r[31]; // 800FD274
  {uint32_t ea=c->r[2]+0xFFFFAB38u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD278
  c->r[4]=0u+0x00000000u; // 800FD27C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800FD280
  c->lr=0x800FD288u; f_80038A80(c); // 800FD284
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FD288
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FD28C
  c->lr=0x800FD294u; f_802501B0(c); // 800FD290
  cmps(c,0,(int32_t)c->r[3],0); // 800FD294
  if (crb(c,2)) { goto L_800FD368; } // 800FD298
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FD29C
  c->r[0]=R32(c->r[3]+0x00000030u); // 800FD2A0
  cmps(c,0,(int32_t)c->r[0],31); // 800FD2A4
  if (crb(c,2)) { goto L_800FD310; } // 800FD2A8
  if (!crb(c,0)) { goto L_800FD2BC; } // 800FD2AC
  cmps(c,0,(int32_t)c->r[0],29); // 800FD2B0
  if (!crb(c,0)) { goto L_800FD320; } // 800FD2B4
  goto L_800FD368; // 800FD2B8
L_800FD2BC:;
  cmps(c,0,(int32_t)c->r[0],33); // 800FD2BC
  if (!crb(c,0)) { goto L_800FD368; } // 800FD2C0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FD2C4
  c->r[3]=c->r[30]|c->r[30]; // 800FD2C8
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD2CC
  c->r[4]=0u+0x00000021u; // 800FD2D0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD2D4
  c->r[5]=0u+0x00000000u; // 800FD2D8
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD2DC
  c->ctr=c->r[12]; // 800FD2E0
  if (true) { c->lr=0x800FD2E8u; dispatch(c,c->ctr); } // 800FD2E4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FD2E8
  c->r[3]=c->r[31]|c->r[31]; // 800FD2EC
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD2F0
  c->r[4]=0u+0x00000001u; // 800FD2F4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD2F8
  c->r[5]=0u+0x00000000u; // 800FD2FC
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD300
  c->ctr=c->r[12]; // 800FD304
  if (true) { c->lr=0x800FD30Cu; dispatch(c,c->ctr); } // 800FD308
  goto L_800FD368; // 800FD30C
L_800FD310:;
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800FD310
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800FD314
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800FD318
  goto L_800FD368; // 800FD31C
L_800FD320:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FD320
  c->r[3]=c->r[30]|c->r[30]; // 800FD324
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD328
  c->r[4]=0u+0x00000020u; // 800FD32C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD330
  c->r[5]=0u+0x00000000u; // 800FD334
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD338
  c->ctr=c->r[12]; // 800FD33C
  if (true) { c->lr=0x800FD344u; dispatch(c,c->ctr); } // 800FD340
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FD344
  c->r[3]=c->r[31]|c->r[31]; // 800FD348
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD34C
  c->r[4]=0u+0x00000005u; // 800FD350
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD354
  c->r[5]=0u+0x00000000u; // 800FD358
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD35C
  c->ctr=c->r[12]; // 800FD360
  if (true) { c->lr=0x800FD368u; dispatch(c,c->ctr); } // 800FD364
L_800FD368:;
  c->r[3]=c->r[31]|c->r[31]; // 800FD368
  c->r[4]=0u+0x00000000u; // 800FD36C
  c->lr=0x800FD374u; f_800453A4(c); // 800FD370
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800FD374
  if (crb(c,2)) { goto L_800FD3C0; } // 800FD378
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD37C
  {uint32_t ea=c->r[2]+0xFFFFAB8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD380
  fcmp(c,0,c->f[1],c->f[0]); // 800FD384
  if (!crb(c,1)) { goto L_800FD3A8; } // 800FD388
  c->r[3]=c->r[30]|c->r[30]; // 800FD38C
  c->r[4]=0u+0x00000004u; // 800FD390
  c->r[5]=0u+0x00000021u; // 800FD394
  c->r[6]=0u+0x00000001u; // 800FD398
  c->r[7]=0u+0x00000001u; // 800FD39C
  c->lr=0x800FD3A4u; f_8017900C(c); // 800FD3A0
  goto L_800FD3C0; // 800FD3A4
L_800FD3A8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD3A8
  c->r[4]=0u+0x00000004u; // 800FD3AC
  c->r[5]=0u+0x00000020u; // 800FD3B0
  c->r[6]=0u+0x00000001u; // 800FD3B4
  c->r[7]=0u+0x00000001u; // 800FD3B8
  c->lr=0x800FD3C0u; f_8017900C(c); // 800FD3BC
L_800FD3C0:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FD3C0
  c->r[0]=R32(c->r[3]+0x00000030u); // 800FD3C4
  cmps(c,0,(int32_t)c->r[0],30); // 800FD3C8
  if (!crb(c,2)) { goto L_800FD3E0; } // 800FD3CC
  c->r[3]=0u+0x00000000u; // 800FD3D0
  c->r[4]=0u+0x00000000u; // 800FD3D4
  c->r[5]=0u+0x00000006u; // 800FD3D8
  c->lr=0x800FD3E0u; f_8027C0C8(c); // 800FD3DC
L_800FD3E0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FD3E0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800FD3E4
  c->r[30]=R32(c->r[1]+0x00000038u); // 800FD3E8
  c->r[29]=R32(c->r[1]+0x00000034u); // 800FD3EC
  c->lr=c->r[0]; // 800FD3F0
  c->r[1]=c->r[1]+0x00000040u; // 800FD3F4
  return; // 800FD3F8
}

// fn_800FD3FC
void f_800FD3FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD3FC
  c->r[0]=c->lr; // 800FD400
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD404
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FD408
  c->r[31]=c->r[3]|c->r[3]; // 800FD40C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FD410
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FD414
  c->lr=0x800FD41Cu; f_802501B0(c); // 800FD418
  cmps(c,0,(int32_t)c->r[3],0); // 800FD41C
  if (crb(c,2)) { goto L_800FD430; } // 800FD420
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800FD424
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800FD428
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800FD42C
L_800FD430:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD430
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FD434
  c->lr=c->r[0]; // 800FD438
  c->r[1]=c->r[1]+0x00000010u; // 800FD43C
  return; // 800FD440
}

// fn_800FD444
void f_800FD444(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD444
  c->r[0]=c->lr; // 800FD448
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FD44C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FD450
  c->r[31]=c->r[3]|c->r[3]; // 800FD454
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FD458
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FD45C
  c->lr=0x800FD464u; f_802501B0(c); // 800FD460
  cmps(c,0,(int32_t)c->r[3],0); // 800FD464
  if (crb(c,2)) { goto L_800FD4A8; } // 800FD468
  c->r[3]=0u+0x80550000u; // 800FD46C
  c->r[4]=0u+0x00000027u; // 800FD470
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FD474
  c->lr=0x800FD47Cu; f_8019C920(c); // 800FD478
  c->lr=0x800FD480u; f_80044404(c); // 800FD47C
  c->r[7]=0u+0x803D0000u; // 800FD480
  {uint32_t ea=c->r[7]+0x00005A28u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FD484
  c->r[3]=c->r[31]|c->r[31]; // 800FD488
  c->r[4]=c->r[1]+0x00000008u; // 800FD48C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FD490
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FD494
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FD498
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FD49C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FD4A0
  c->lr=0x800FD4A8u; f_800FBF44(c); // 800FD4A4
L_800FD4A8:;
  c->r[3]=c->r[31]|c->r[31]; // 800FD4A8
  c->r[4]=0u+0x00000000u; // 800FD4AC
  c->lr=0x800FD4B4u; f_801F5244(c); // 800FD4B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FD4B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FD4B8
  c->lr=c->r[0]; // 800FD4BC
  c->r[1]=c->r[1]+0x00000020u; // 800FD4C0
  return; // 800FD4C4
}

// fn_800FD4C8
void f_800FD4C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD4C8
  c->r[0]=c->lr; // 800FD4CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FD4D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FD4D4
  c->r[31]=c->r[3]|c->r[3]; // 800FD4D8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FD4DC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FD4E0
  c->lr=0x800FD4E8u; f_802501B0(c); // 800FD4E4
  cmps(c,0,(int32_t)c->r[3],0); // 800FD4E8
  if (crb(c,2)) { goto L_800FD550; } // 800FD4EC
  c->r[0]=R8(c->r[31]+0x00000084u); // 800FD4F0
  cmps(c,0,(int32_t)c->r[0],0); // 800FD4F4
  if (!crb(c,2)) { goto L_800FD51C; } // 800FD4F8
  c->r[0]=0u+0x00000001u; // 800FD4FC
  c->r[3]=c->r[31]|c->r[31]; // 800FD500
  W8(c->r[31]+0x00000084u,c->r[0]); // 800FD504
  c->r[4]=0u+0x00000004u; // 800FD508
  c->r[5]=0u+0x00000018u; // 800FD50C
  c->r[6]=0u+0x00000001u; // 800FD510
  c->r[7]=0u+0x00000001u; // 800FD514
  c->lr=0x800FD51Cu; f_8017900C(c); // 800FD518
L_800FD51C:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FD51C
  c->r[0]=R32(c->r[3]+0x00000030u); // 800FD520
  cmps(c,0,(int32_t)c->r[0],20); // 800FD524
  if (!crb(c,2)) { goto L_800FD550; } // 800FD528
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FD52C
  c->r[3]=c->r[31]|c->r[31]; // 800FD530
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD534
  c->r[4]=0u+0x00000015u; // 800FD538
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD53C
  c->r[5]=0u+0x00000000u; // 800FD540
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD544
  c->ctr=c->r[12]; // 800FD548
  if (true) { c->lr=0x800FD550u; dispatch(c,c->ctr); } // 800FD54C
L_800FD550:;
  c->r[3]=0u+0x80620000u; // 800FD550
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[8]=c->ps1[8]=RF32(ea);} // 800FD554
  c->r[3]=c->r[3]+0x000079C0u; // 800FD558
  {uint32_t ea=c->r[2]+0xFFFFAB70u; c->f[4]=c->ps1[4]=RF32(ea);} // 800FD55C
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD560
  {uint32_t ea=c->r[3]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FD564
  c->f[2]=-c->f[0]; // 800FD568
  {uint32_t ea=c->r[2]+0xFFFFAB98u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD56C
  {uint32_t ea=c->r[2]+0xFFFFAAF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD570
  c->f[10]=c->ps1[10]=S(c->f[4]*c->f[3]); // 800FD574
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[7]=c->ps1[7]=RF32(ea);} // 800FD578
  c->f[9]=c->ps1[9]=S(std::fma(c->f[4],c->f[2],c->f[1])); // 800FD57C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[7]); // 800FD580
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800FD584
  {uint32_t ea=c->r[31]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FD588
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD58C
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[2]); // 800FD590
  {uint32_t ea=c->r[31]+0x00000060u; c->f[11]=c->ps1[11]=RF32(ea);} // 800FD594
  c->f[4]=c->ps1[4]=S(c->f[9]*c->f[2]); // 800FD598
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD59C
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 800FD5A0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[10]);} // 800FD5A4
  c->f[5]=c->ps1[5]=S(std::fma(c->f[5],c->f[7],c->f[6])); // 800FD5A8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[9]);} // 800FD5AC
  c->f[3]=c->ps1[3]=S(std::fma(c->f[3],c->f[7],c->f[4])); // 800FD5B0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[7],c->f[2])); // 800FD5B4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[8]);} // 800FD5B8
  fcmp(c,0,c->f[11],c->f[0]); // 800FD5BC
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[5]);} // 800FD5C0
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[3]);} // 800FD5C4
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[1]);} // 800FD5C8
  if (!crb(c,1)) { goto L_800FD5D8; } // 800FD5CC
  {uint32_t ea=c->r[2]+0xFFFFAB9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD5D0
  c->f[11]=c->ps1[11]=S(c->f[11]-c->f[0]); // 800FD5D4
L_800FD5D8:;
  {uint32_t ea=c->r[2]+0xFFFFAB94u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD5D8
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD5DC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[11]); // 800FD5E0
  fcmp(c,0,c->f[1],c->f[0]); // 800FD5E4
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[1]);} // 800FD5E8
  if (!crb(c,0)) { goto L_800FD5FC; } // 800FD5EC
  {uint32_t ea=c->r[2]+0xFFFFAB9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD5F0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800FD5F4
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800FD5F8
L_800FD5FC:;
  {uint32_t ea=c->r[31]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FD5FC
  {uint32_t ea=c->r[2]+0xFFFFAB94u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD600
  {uint32_t ea=c->r[2]+0xFFFFABA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD604
  {uint32_t ea=c->r[2]+0xFFFFAB9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD608
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],c->f[1])); // 800FD60C
  fcmp(c,0,c->f[1],c->f[0]); // 800FD610
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[1]);} // 800FD614
  if (!crb(c,1)) { goto L_800FD624; } // 800FD618
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800FD61C
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800FD620
L_800FD624:;
  {uint32_t ea=c->r[31]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD624
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD628
  fcmp(c,0,c->f[2],c->f[0]); // 800FD62C
  if (!crb(c,1)) { goto L_800FD63C; } // 800FD630
  {uint32_t ea=c->r[2]+0xFFFFAB9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD634
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800FD638
L_800FD63C:;
  {uint32_t ea=c->r[2]+0xFFFFAB94u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD63C
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD640
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800FD644
  fcmp(c,0,c->f[1],c->f[0]); // 800FD648
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[1]);} // 800FD64C
  if (!crb(c,0)) { goto L_800FD660; } // 800FD650
  {uint32_t ea=c->r[2]+0xFFFFAB9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD654
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800FD658
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800FD65C
L_800FD660:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD660
  {uint32_t ea=c->r[2]+0xFFFFABA4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD664
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD668
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800FD66C
  fcmp(c,0,c->f[1],c->f[0]); // 800FD670
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[1]);} // 800FD674
  if (!crb(c,0)) { goto L_800FD680; } // 800FD678
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800FD67C
L_800FD680:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FD680
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FD684
  c->lr=c->r[0]; // 800FD688
  c->r[1]=c->r[1]+0x00000020u; // 800FD68C
  return; // 800FD690
}

// fn_800FD694
void f_800FD694(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD694
  c->r[0]=c->lr; // 800FD698
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FD69C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FD6A0
  c->r[31]=c->r[3]|c->r[3]; // 800FD6A4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FD6A8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FD6AC
  c->lr=0x800FD6B4u; f_802501B0(c); // 800FD6B0
  cmps(c,0,(int32_t)c->r[3],0); // 800FD6B4
  if (crb(c,2)) { goto L_800FD784; } // 800FD6B8
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800FD6BC
  cmps(c,0,(int32_t)c->r[0],0); // 800FD6C0
  if (!crb(c,2)) { goto L_800FD728; } // 800FD6C4
  {uint32_t ea=c->r[2]+0xFFFFAAF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD6C8
  c->r[0]=0u+0x00000071u; // 800FD6CC
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD6D0
  c->r[3]=c->r[31]|c->r[31]; // 800FD6D4
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800FD6D8
  c->r[4]=0u+0x00000014u; // 800FD6DC
  c->f[2]=c->f[1]; // 800FD6E0
  c->r[5]=0u+0x00000000u; // 800FD6E4
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800FD6E8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FD6EC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD6F0
  c->ctr=c->r[12]; // 800FD6F4
  if (true) { c->lr=0x800FD6FCu; dispatch(c,c->ctr); } // 800FD6F8
  c->r[7]=0u+0x803D0000u; // 800FD6FC
  {uint32_t ea=c->r[7]+0x00005A34u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FD700
  c->r[3]=c->r[31]|c->r[31]; // 800FD704
  c->r[4]=c->r[1]+0x00000014u; // 800FD708
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FD70C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FD710
  W32(c->r[1]+0x00000014u,c->r[6]); // 800FD714
  W32(c->r[1]+0x00000018u,c->r[5]); // 800FD718
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800FD71C
  c->lr=0x800FD724u; f_800FBF44(c); // 800FD720
  goto L_800FD784; // 800FD724
L_800FD728:;
  c->r[0]=0u+0x00000074u; // 800FD728
  c->r[3]=c->r[31]|c->r[31]; // 800FD72C
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800FD730
  c->r[4]=0u+0x00000017u; // 800FD734
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD738
  c->r[5]=0u+0x00000000u; // 800FD73C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FD740
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD744
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD748
  c->ctr=c->r[12]; // 800FD74C
  if (true) { c->lr=0x800FD754u; dispatch(c,c->ctr); } // 800FD750
  c->r[0]=0u+0x00000000u; // 800FD754
  c->r[7]=0u+0x803D0000u; // 800FD758
  W8(c->r[31]+0x00000029u,c->r[0]); // 800FD75C
  c->r[3]=c->r[31]|c->r[31]; // 800FD760
  c->r[4]=c->r[1]+0x00000008u; // 800FD764
  {uint32_t ea=c->r[7]+0x00005A40u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FD768
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FD76C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FD770
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FD774
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FD778
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FD77C
  c->lr=0x800FD784u; f_800FBF44(c); // 800FD780
L_800FD784:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FD784
  {uint32_t ea=c->r[2]+0xFFFFABA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD788
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD78C
  fcmp(c,0,c->f[1],c->f[0]); // 800FD790
  if (!crb(c,0)) { goto L_800FD7A8; } // 800FD794
  c->r[3]=0u+0x00000000u; // 800FD798
  c->r[4]=0u+0x00000006u; // 800FD79C
  c->r[5]=0u+0x00000010u; // 800FD7A0
  c->lr=0x800FD7A8u; f_8027C0C8(c); // 800FD7A4
L_800FD7A8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FD7A8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FD7AC
  c->lr=c->r[0]; // 800FD7B0
  c->r[1]=c->r[1]+0x00000030u; // 800FD7B4
  return; // 800FD7B8
}

// fn_800FD7BC
void f_800FD7BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD7BC
  c->r[0]=c->lr; // 800FD7C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FD7C4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FD7C8
  c->r[31]=c->r[3]|c->r[3]; // 800FD7CC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FD7D0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FD7D4
  c->lr=0x800FD7DCu; f_802501B0(c); // 800FD7D8
  cmps(c,0,(int32_t)c->r[3],0); // 800FD7DC
  if (crb(c,2)) { goto L_800FD89C; } // 800FD7E0
  c->r[3]=0u+0x80550000u; // 800FD7E4
  c->r[4]=0u+0x00000013u; // 800FD7E8
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FD7EC
  c->lr=0x800FD7F4u; f_8019C920(c); // 800FD7F0
  c->r[3]=c->r[3]+0x0000002Cu; // 800FD7F4
  c->r[4]=c->r[31]+0x0000002Cu; // 800FD7F8
  c->r[5]=c->r[1]+0x00000014u; // 800FD7FC
  c->lr=0x800FD804u; f_80296A70(c); // 800FD800
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD804
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD808
  c->lr=0x800FD810u; f_8005C22C(c); // 800FD80C
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD810
  fcmp(c,0,c->f[1],c->f[0]); // 800FD814
  if (!crb(c,1)) { goto L_800FD834; } // 800FD818
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD81C
  {uint32_t ea=c->r[2]+0xFFFFABACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD820
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800FD824
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800FD828
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800FD82C
  goto L_800FD850; // 800FD830
L_800FD834:;
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD834
  {uint32_t ea=c->r[2]+0xFFFFABACu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD838
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800FD83C
  {uint32_t ea=c->r[2]+0xFFFFAB9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD840
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800FD844
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800FD848
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800FD84C
L_800FD850:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FD850
  c->r[3]=c->r[31]|c->r[31]; // 800FD854
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD858
  c->r[4]=0u+0x00000008u; // 800FD85C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FD860
  c->r[5]=0u+0x00000000u; // 800FD864
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD868
  c->ctr=c->r[12]; // 800FD86C
  if (true) { c->lr=0x800FD874u; dispatch(c,c->ctr); } // 800FD870
  c->r[7]=0u+0x803D0000u; // 800FD874
  {uint32_t ea=c->r[7]+0x00005A4Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800FD878
  c->r[3]=c->r[31]|c->r[31]; // 800FD87C
  c->r[4]=c->r[1]+0x00000008u; // 800FD880
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FD884
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FD888
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FD88C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FD890
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FD894
  c->lr=0x800FD89Cu; f_800FBF44(c); // 800FD898
L_800FD89C:;
  c->r[0]=R8(c->r[31]+0x00000029u); // 800FD89C
  cmps(c,0,(int32_t)c->r[0],0); // 800FD8A0
  if (!crb(c,2)) { goto L_800FD8E4; } // 800FD8A4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FD8A8
  {uint32_t ea=c->r[2]+0xFFFFABB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD8AC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD8B0
  fcmp(c,0,c->f[1],c->f[0]); // 800FD8B4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800FD8B8
  if (!crb(c,2)) { goto L_800FD8E4; } // 800FD8BC
  c->r[3]=c->r[31]|c->r[31]; // 800FD8C0
  c->r[4]=0u+0x00000004u; // 800FD8C4
  c->r[5]=0u+0x0000001Du; // 800FD8C8
  c->r[6]=0u+0x00000001u; // 800FD8CC
  c->r[7]=0u+0x00000001u; // 800FD8D0
  c->lr=0x800FD8D8u; f_8017900C(c); // 800FD8D4
  c->r[3]=R8(c->r[31]+0x00000029u); // 800FD8D8
  c->r[0]=c->r[3]+0x00000001u; // 800FD8DC
  W8(c->r[31]+0x00000029u,c->r[0]); // 800FD8E0
L_800FD8E4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FD8E4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FD8E8
  c->lr=c->r[0]; // 800FD8EC
  c->r[1]=c->r[1]+0x00000030u; // 800FD8F0
  return; // 800FD8F4
}

// fn_800FD8F8
void f_800FD8F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD8F8
  c->r[0]=c->lr; // 800FD8FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FD900
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FD904
  c->r[31]=c->r[3]|c->r[3]; // 800FD908
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FD90C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FD910
  c->lr=0x800FD918u; f_802501B0(c); // 800FD914
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD918
  c->r[3]=c->r[31]|c->r[31]; // 800FD91C
  {uint32_t ea=c->r[2]+0xFFFFABB4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD920
  c->lr=0x800FD928u; f_801F6A20(c); // 800FD924
  {uint32_t ea=c->r[31]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD928
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD92C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800FD930
  c->lr=0x800FD938u; f_8002C1B0(c); // 800FD934
  {uint32_t ea=c->r[2]+0xFFFFAAF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD938
  fcmp(c,0,c->f[1],c->f[0]); // 800FD93C
  if (!crb(c,0)) { goto L_800FD98C; } // 800FD940
  c->r[0]=0u+0x00000075u; // 800FD944
  c->r[3]=c->r[31]|c->r[31]; // 800FD948
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800FD94C
  c->r[4]=0u+0x00000004u; // 800FD950
  c->r[5]=0u+0x0000001Cu; // 800FD954
  c->r[6]=0u+0x00000001u; // 800FD958
  c->r[7]=0u+0x00000001u; // 800FD95C
  c->lr=0x800FD964u; f_8017900C(c); // 800FD960
  c->r[7]=0u+0x803D0000u; // 800FD964
  {uint32_t ea=c->r[7]+0x00005A58u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FD968
  c->r[3]=c->r[31]|c->r[31]; // 800FD96C
  c->r[4]=c->r[1]+0x00000008u; // 800FD970
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FD974
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FD978
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FD97C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FD980
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FD984
  c->lr=0x800FD98Cu; f_800FBF44(c); // 800FD988
L_800FD98C:;
  c->r[3]=0u+0x80550000u; // 800FD98C
  c->r[4]=0u+0x00000012u; // 800FD990
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FD994
  c->lr=0x800FD99Cu; f_8019C920(c); // 800FD998
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD99C
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 800FD9A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FD9A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FD9A8
  c->lr=c->r[0]; // 800FD9AC
  c->r[1]=c->r[1]+0x00000020u; // 800FD9B0
  return; // 800FD9B4
}

// fn_800FD9B8
void f_800FD9B8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800FD9B8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FD9BC
  f_802501B0(c); return; // 800FD9C0
}

// fn_800FD9C4
void f_800FD9C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD9C4
  c->r[0]=c->lr; // 800FD9C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD9CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FD9D0
  c->r[31]=c->r[3]|c->r[3]; // 800FD9D4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FD9D8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FD9DC
  c->lr=0x800FD9E4u; f_802501B0(c); // 800FD9E0
  cmps(c,0,(int32_t)c->r[3],0); // 800FD9E4
  if (crb(c,2)) { goto L_800FDA08; } // 800FD9E8
  c->r[3]=0u+0x00010000u; // 800FD9EC
  {uint32_t ea=c->r[2]+0xFFFFAB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FD9F0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FD9F4
  {uint32_t ea=c->r[2]+0xFFFFAB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FD9F8
  c->r[3]=c->r[31]|c->r[31]; // 800FD9FC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800FDA00
  c->lr=0x800FDA08u; f_800FBFA0(c); // 800FDA04
L_800FDA08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDA08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FDA0C
  c->lr=c->r[0]; // 800FDA10
  c->r[1]=c->r[1]+0x00000010u; // 800FDA14
  return; // 800FDA18
}

// fn_800FDA1C
void f_800FDA1C(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800FDA1C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FDA20
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800FDA24
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800FDA28
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FDA2C
  f_802501B0(c); return; // 800FDA30
}

// fn_800FDA34
void f_800FDA34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDA34
  c->r[0]=c->lr; // 800FDA38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDA3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FDA40
  c->r[31]=c->r[3]|c->r[3]; // 800FDA44
  c->r[4]=R32(c->r[3]+0x00000398u); // 800FDA48
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FDA4C
  c->lr=0x800FDA54u; f_802501B0(c); // 800FDA50
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FDA54
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FDA58
  c->lr=0x800FDA60u; f_802501B0(c); // 800FDA5C
  cmps(c,0,(int32_t)c->r[3],0); // 800FDA60
  if (crb(c,2)) { goto L_800FDAA4; } // 800FDA64
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FDA68
  c->r[3]=c->r[31]|c->r[31]; // 800FDA6C
  c->r[4]=0u+0x00000000u; // 800FDA70
  c->r[5]=0u+0xFFFFFFFFu; // 800FDA74
  c->r[12]=R32(c->r[12]+0x00000044u); // 800FDA78
  c->ctr=c->r[12]; // 800FDA7C
  if (true) { c->lr=0x800FDA84u; dispatch(c,c->ctr); } // 800FDA80
  c->r[4]=R32(c->r[31]+0x00000398u); // 800FDA84
  c->r[0]=0u+0x00000000u; // 800FDA88
  {uint32_t ea=c->r[2]+0xFFFFAB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDA8C
  c->r[3]=c->r[31]|c->r[31]; // 800FDA90
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800FDA94
  c->r[4]=0u+0x00000002u; // 800FDA98
  {uint32_t ea=c->r[2]+0xFFFFAB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FDA9C
  c->lr=0x800FDAA4u; f_800FBFA0(c); // 800FDAA0
L_800FDAA4:;
  c->r[4]=R8(c->r[31]+0x00000029u); // 800FDAA4
  cmps(c,0,(int32_t)c->r[4],0); // 800FDAA8
  if (!crb(c,2)) { goto L_800FDB38; } // 800FDAAC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FDAB0
  {uint32_t ea=c->r[2]+0xFFFFAAF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FDAB4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDAB8
  fcmp(c,0,c->f[1],c->f[0]); // 800FDABC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800FDAC0
  if (!crb(c,2)) { goto L_800FDB38; } // 800FDAC4
  c->r[0]=c->r[4]+0x00000001u; // 800FDAC8
  c->r[3]=c->r[31]|c->r[31]; // 800FDACC
  W8(c->r[31]+0x00000029u,c->r[0]); // 800FDAD0
  c->r[4]=0u+0x00000000u; // 800FDAD4
  c->r[5]=0u+0xFFFFFFFFu; // 800FDAD8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FDADC
  c->r[12]=R32(c->r[12]+0x00000044u); // 800FDAE0
  c->ctr=c->r[12]; // 800FDAE4
  if (true) { c->lr=0x800FDAECu; dispatch(c,c->ctr); } // 800FDAE8
  c->r[3]=0u+0x80550000u; // 800FDAEC
  c->r[4]=0u+0x00000044u; // 800FDAF0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FDAF4
  c->lr=0x800FDAFCu; f_8019C920(c); // 800FDAF8
  {uint32_t ea=c->r[2]+0xFFFFABB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FDAFC
  c->r[5]=0u+0x00000000u; // 800FDB00
  {uint32_t ea=c->r[2]+0xFFFFABBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDB04
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800FDB08
  {uint32_t ea=c->r[2]+0xFFFFABC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FDB0C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 800FDB10
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDB14
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800FDB18
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FDB1C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 800FDB20
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 800FDB24
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 800FDB28
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FDB2C
  c->r[4]=R32(c->r[31]+0x00000398u); // 800FDB30
  c->lr=0x800FDB38u; f_80250BF4(c); // 800FDB34
L_800FDB38:;
  c->r[3]=c->r[31]|c->r[31]; // 800FDB38
  c->r[4]=0u+0x00000000u; // 800FDB3C
  c->lr=0x800FDB44u; f_801F5244(c); // 800FDB40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDB44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FDB48
  c->lr=c->r[0]; // 800FDB4C
  c->r[1]=c->r[1]+0x00000010u; // 800FDB50
  return; // 800FDB54
}

// fn_800FDB58
void f_800FDB58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDB58
  c->r[0]=c->lr; // 800FDB5C
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDB60
  c->r[4]=0u+0x00000004u; // 800FDB64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDB68
  c->r[5]=0u+0x00000001u; // 800FDB6C
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FDB70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FDB74
  c->r[31]=c->r[3]|c->r[3]; // 800FDB78
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FDB7C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FDB80
  c->ctr=c->r[12]; // 800FDB84
  if (true) { c->lr=0x800FDB8Cu; dispatch(c,c->ctr); } // 800FDB88
  c->r[3]=0u+0x00010000u; // 800FDB8C
  {uint32_t ea=c->r[2]+0xFFFFAB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDB90
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FDB94
  {uint32_t ea=c->r[2]+0xFFFFAB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FDB98
  c->r[3]=c->r[31]|c->r[31]; // 800FDB9C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800FDBA0
  c->lr=0x800FDBA8u; f_800FBFA0(c); // 800FDBA4
  c->r[0]=0u+0x00000000u; // 800FDBA8
  W8(c->r[31]+0x00000028u,c->r[0]); // 800FDBAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FDBB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDBB4
  c->lr=c->r[0]; // 800FDBB8
  c->r[1]=c->r[1]+0x00000010u; // 800FDBBC
  return; // 800FDBC0
}

// fn_800FDBC4
void f_800FDBC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDBC4
  c->r[0]=c->lr; // 800FDBC8
  {uint32_t ea=c->r[2]+0xFFFFAB0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FDBCC
  c->r[4]=0u+0x00010000u; // 800FDBD0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FDBD4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800FDBD8
  {uint32_t ea=c->r[2]+0xFFFFAB10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDBDC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800FDBE0
  {uint32_t ea=c->r[2]+0xFFFFAB14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FDBE4
  c->r[5]=c->r[1]+0x00000008u; // 800FDBE8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 800FDBEC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800FDBF0
  c->r[7]=R32(c->r[1]+0x00000014u); // 800FDBF4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FDBF8
  c->r[31]=c->r[3]|c->r[3]; // 800FDBFC
  c->r[6]=R32(c->r[1]+0x00000018u); // 800FDC00
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800FDC04
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800FDC08
  W32(c->r[1]+0x00000008u,c->r[7]); // 800FDC0C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800FDC10
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FDC14
  c->lr=0x800FDC1Cu; f_800FBE84(c); // 800FDC18
  c->r[0]=0u+0x00000000u; // 800FDC1C
  W8(c->r[31]+0x00000028u,c->r[0]); // 800FDC20
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FDC24
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FDC28
  c->lr=c->r[0]; // 800FDC2C
  c->r[1]=c->r[1]+0x00000030u; // 800FDC30
  return; // 800FDC34
}

// fn_800FDC38
void f_800FDC38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDC38
  c->r[0]=c->lr; // 800FDC3C
  c->r[4]=0u+0x80550000u; // 800FDC40
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FDC44
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FDC48
  W32(c->r[1]+0x00000028u,c->r[30]); // 800FDC4C
  W32(c->r[1]+0x00000024u,c->r[29]); // 800FDC50
  c->r[29]=c->r[3]|c->r[3]; // 800FDC54
  c->r[3]=c->r[4]+0xFFFFCE54u; // 800FDC58
  c->r[4]=0u+0x00000043u; // 800FDC5C
  c->lr=0x800FDC64u; f_8019C920(c); // 800FDC60
  {uint32_t ea=c->r[2]+0xFFFFAAF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDC64
  c->r[30]=c->r[3]|c->r[3]; // 800FDC68
  c->r[4]=0u+0x00000000u; // 800FDC6C
  c->lr=0x800FDC74u; f_80038A80(c); // 800FDC70
  {uint32_t ea=c->r[2]+0xFFFFAAF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDC74
  c->r[3]=c->r[29]|c->r[29]; // 800FDC78
  c->r[4]=0u+0x00000000u; // 800FDC7C
  c->lr=0x800FDC84u; f_80038A80(c); // 800FDC80
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FDC84
  c->r[3]=c->r[30]|c->r[30]; // 800FDC88
  c->r[4]=0u+0x00000000u; // 800FDC8C
  c->r[5]=0u+0xFFFFFFFFu; // 800FDC90
  c->r[12]=R32(c->r[12]+0x00000044u); // 800FDC94
  c->ctr=c->r[12]; // 800FDC98
  if (true) { c->lr=0x800FDCA0u; dispatch(c,c->ctr); } // 800FDC9C
  c->r[4]=R32(c->r[29]+0x00000394u); // 800FDCA0
  c->r[31]=0u+0x00000000u; // 800FDCA4
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDCA8
  c->r[3]=c->r[30]|c->r[30]; // 800FDCAC
  W8(c->r[4]+0x0000014Cu,c->r[31]); // 800FDCB0
  c->r[4]=0u+0x00000000u; // 800FDCB4
  {uint32_t ea=c->r[2]+0xFFFFABC4u; c->f[4]=c->ps1[4]=RF32(ea);} // 800FDCB8
  c->f[2]=c->f[1]; // 800FDCBC
  c->r[6]=R32(c->r[29]+0x00000394u); // 800FDCC0
  c->r[5]=0u+0x00000001u; // 800FDCC4
  {uint32_t ea=c->r[2]+0xFFFFABC8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FDCC8
  W8(c->r[6]+0x0000014Du,c->r[31]); // 800FDCCC
  {uint32_t ea=c->r[2]+0xFFFFABCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FDCD0
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[4]);} // 800FDCD4
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[3]);} // 800FDCD8
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800FDCDC
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 800FDCE0
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[1]);} // 800FDCE4
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[1]);} // 800FDCE8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FDCEC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FDCF0
  c->ctr=c->r[12]; // 800FDCF4
  if (true) { c->lr=0x800FDCFCu; dispatch(c,c->ctr); } // 800FDCF8
  c->r[0]=R16(c->r[29]+0x000003BEu); // 800FDCFC
  c->r[7]=0u+0x803D0000u; // 800FDD00
  W8(c->r[29]+0x0000006Fu,c->r[31]); // 800FDD04
  c->r[3]=c->r[29]|c->r[29]; // 800FDD08
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800FDD0C
  c->r[4]=c->r[1]+0x00000008u; // 800FDD10
  W16(c->r[29]+0x000003BEu,c->r[0]); // 800FDD14
  {uint32_t ea=c->r[7]+0x00005A64u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FDD18
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FDD1C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FDD20
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FDD24
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FDD28
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FDD2C
  c->lr=0x800FDD34u; f_800FBF44(c); // 800FDD30
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FDD34
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FDD38
  c->r[30]=R32(c->r[1]+0x00000028u); // 800FDD3C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800FDD40
  c->lr=c->r[0]; // 800FDD44
  c->r[1]=c->r[1]+0x00000030u; // 800FDD48
  return; // 800FDD4C
}

// fn_800FDD50
void f_800FDD50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDD50
  c->r[0]=c->lr; // 800FDD54
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDD58
  c->r[4]=0u+0x0000000Du; // 800FDD5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDD60
  c->r[5]=0u+0x00000001u; // 800FDD64
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FDD68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FDD6C
  c->r[31]=c->r[3]|c->r[3]; // 800FDD70
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FDD74
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FDD78
  c->ctr=c->r[12]; // 800FDD7C
  if (true) { c->lr=0x800FDD84u; dispatch(c,c->ctr); } // 800FDD80
  c->r[3]=0u+0x00010000u; // 800FDD84
  {uint32_t ea=c->r[2]+0xFFFFAB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDD88
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FDD8C
  {uint32_t ea=c->r[2]+0xFFFFAB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FDD90
  c->r[3]=c->r[31]|c->r[31]; // 800FDD94
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800FDD98
  c->lr=0x800FDDA0u; f_800FBFA0(c); // 800FDD9C
  c->r[0]=0u+0x00000000u; // 800FDDA0
  W8(c->r[31]+0x00000028u,c->r[0]); // 800FDDA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FDDA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDDAC
  c->lr=c->r[0]; // 800FDDB0
  c->r[1]=c->r[1]+0x00000010u; // 800FDDB4
  return; // 800FDDB8
}

// fn_800FDDBC
void f_800FDDBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDDBC
  c->r[0]=c->lr; // 800FDDC0
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDDC4
  c->r[4]=0u+0x00000013u; // 800FDDC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDDCC
  c->r[5]=0u+0x00000001u; // 800FDDD0
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FDDD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FDDD8
  c->r[31]=c->r[3]|c->r[3]; // 800FDDDC
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FDDE0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FDDE4
  c->ctr=c->r[12]; // 800FDDE8
  if (true) { c->lr=0x800FDDF0u; dispatch(c,c->ctr); } // 800FDDEC
  c->r[3]=0u+0x00010000u; // 800FDDF0
  {uint32_t ea=c->r[2]+0xFFFFAB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDDF4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FDDF8
  {uint32_t ea=c->r[2]+0xFFFFAB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FDDFC
  c->r[3]=c->r[31]|c->r[31]; // 800FDE00
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800FDE04
  c->lr=0x800FDE0Cu; f_800FBFA0(c); // 800FDE08
  c->r[0]=0u+0x00000000u; // 800FDE0C
  W8(c->r[31]+0x00000028u,c->r[0]); // 800FDE10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FDE14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDE18
  c->lr=c->r[0]; // 800FDE1C
  c->r[1]=c->r[1]+0x00000010u; // 800FDE20
  return; // 800FDE24
}

// fn_800FDE28
void f_800FDE28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDE28
  c->r[0]=c->lr; // 800FDE2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FDE30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FDE34
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FDE38
  c->r[30]=c->r[3]|c->r[3]; // 800FDE3C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000003BCu); // 800FDE40
  cmps(c,0,(int32_t)c->r[0],0); // 800FDE44
  if (crb(c,2)) { goto L_800FDFFC; } // 800FDE48
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FDE4C
  c->r[4]=0u+0x00000000u; // 800FDE50
  c->r[5]=0u+0xFFFFFFFFu; // 800FDE54
  c->r[12]=R32(c->r[12]+0x00000044u); // 800FDE58
  c->ctr=c->r[12]; // 800FDE5C
  if (true) { c->lr=0x800FDE64u; dispatch(c,c->ctr); } // 800FDE60
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800FDE64
  c->r[31]=0u+0x00000000u; // 800FDE68
  c->r[0]=c->r[3]+0xFFFFFF9Cu; // 800FDE6C
  cmpu(c,0,c->r[0],0x0000000Cu); // 800FDE70
  if (crb(c,1)) { goto L_800FDFB0; } // 800FDE74
  c->r[3]=0u+0x803D0000u; // 800FDE78
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FDE7C
  c->r[3]=c->r[3]+0x00005A7Cu; // 800FDE80
  c->r[3]=R32(c->r[3]+c->r[0]); // 800FDE84
  c->ctr=c->r[3]; // 800FDE88
  if (true) { switch (c->ctr) { case 0x800FDE90u: goto L_800FDE90; case 0x800FDED0u: goto L_800FDED0; case 0x800FDF3Cu: goto L_800FDF3C; case 0x800FDF98u: goto L_800FDF98; case 0x800FDFB0u: goto L_800FDFB0; default: break; } dispatch(c,c->ctr); return; } // 800FDE8C
L_800FDE90:;
  c->r[3]=0u+0x80550000u; // 800FDE90
  c->r[4]=0u+0x00000026u; // 800FDE94
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FDE98
  c->lr=0x800FDEA0u; f_8019C920(c); // 800FDE9C
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FDEA0
  c->r[31]=c->r[3]|c->r[3]; // 800FDEA4
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDEA8
  c->r[4]=0u+0x00000000u; // 800FDEAC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FDEB0
  c->r[5]=0u+0x00000000u; // 800FDEB4
  c->f[2]=c->f[1]; // 800FDEB8
  c->ctr=c->r[12]; // 800FDEBC
  if (true) { c->lr=0x800FDEC4u; dispatch(c,c->ctr); } // 800FDEC0
  c->r[3]=c->r[31]|c->r[31]; // 800FDEC4
  c->lr=0x800FDECCu; f_80043AB4(c); // 800FDEC8
  goto L_800FDFB0; // 800FDECC
L_800FDED0:;
  c->r[3]=0u+0x80550000u; // 800FDED0
  c->r[4]=0u+0x00000044u; // 800FDED4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FDED8
  c->lr=0x800FDEE0u; f_8019C920(c); // 800FDEDC
  {uint32_t ea=c->r[2]+0xFFFFABB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FDEE0
  c->r[31]=c->r[3]|c->r[3]; // 800FDEE4
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDEE8
  c->r[4]=0u+0x00000000u; // 800FDEEC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800FDEF0
  c->r[5]=0u+0x00000000u; // 800FDEF4
  {uint32_t ea=c->r[2]+0xFFFFABBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FDEF8
  c->f[2]=c->f[1]; // 800FDEFC
  {uint32_t ea=c->r[2]+0xFFFFABC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FDF00
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800FDF04
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FDF08
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[3]);} // 800FDF0C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 800FDF10
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 800FDF14
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 800FDF18
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FDF1C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FDF20
  c->ctr=c->r[12]; // 800FDF24
  if (true) { c->lr=0x800FDF2Cu; dispatch(c,c->ctr); } // 800FDF28
  c->r[3]=R32(c->r[30]+0x00000398u); // 800FDF2C
  c->r[0]=0u+0x00000000u; // 800FDF30
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800FDF34
  goto L_800FDFB0; // 800FDF38
L_800FDF3C:;
  c->r[3]=0u+0x80550000u; // 800FDF3C
  c->r[4]=0u+0x00000043u; // 800FDF40
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FDF44
  c->lr=0x800FDF4Cu; f_8019C920(c); // 800FDF48
  {uint32_t ea=c->r[2]+0xFFFFABC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FDF4C
  c->r[31]=c->r[3]|c->r[3]; // 800FDF50
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FDF54
  c->r[4]=0u+0x00000000u; // 800FDF58
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800FDF5C
  c->r[5]=0u+0x00000000u; // 800FDF60
  {uint32_t ea=c->r[2]+0xFFFFABC8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FDF64
  c->f[2]=c->f[1]; // 800FDF68
  {uint32_t ea=c->r[2]+0xFFFFABCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FDF6C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 800FDF70
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800FDF74
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 800FDF78
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 800FDF7C
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[1]);} // 800FDF80
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FDF84
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FDF88
  c->ctr=c->r[12]; // 800FDF8C
  if (true) { c->lr=0x800FDF94u; dispatch(c,c->ctr); } // 800FDF90
  goto L_800FDFB0; // 800FDF94
L_800FDF98:;
  c->r[3]=0u+0x80550000u; // 800FDF98
  c->r[4]=0u+0x00000027u; // 800FDF9C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FDFA0
  c->lr=0x800FDFA8u; f_8019C920(c); // 800FDFA4
  c->r[31]=c->r[3]|c->r[3]; // 800FDFA8
  c->lr=0x800FDFB0u; f_80043AB4(c); // 800FDFAC
L_800FDFB0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDFB0
  if (crb(c,2)) { goto L_800FDFD4; } // 800FDFB4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FDFB8
  c->r[3]=c->r[31]|c->r[31]; // 800FDFBC
  c->r[4]=0u+0x00000000u; // 800FDFC0
  c->r[5]=0u+0xFFFFFFFFu; // 800FDFC4
  c->r[12]=R32(c->r[12]+0x00000044u); // 800FDFC8
  c->ctr=c->r[12]; // 800FDFCC
  if (true) { c->lr=0x800FDFD4u; dispatch(c,c->ctr); } // 800FDFD0
L_800FDFD4:;
  c->r[7]=0u+0x803D0000u; // 800FDFD4
  {uint32_t ea=c->r[7]+0x00005A70u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FDFD8
  c->r[3]=c->r[30]|c->r[30]; // 800FDFDC
  c->r[4]=c->r[1]+0x00000008u; // 800FDFE0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FDFE4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FDFE8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FDFEC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FDFF0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FDFF4
  c->lr=0x800FDFFCu; f_800FBF44(c); // 800FDFF8
L_800FDFFC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FDFFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FE000
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FE004
  c->lr=c->r[0]; // 800FE008
  c->r[1]=c->r[1]+0x00000020u; // 800FE00C
  return; // 800FE010
}

// fn_800FE014
void f_800FE014(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE014
  c->r[0]=c->lr; // 800FE018
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800FE01C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800FE020
  c->r[31]=0u+0x803D0000u; // 800FE024
  c->r[31]=c->r[31]+0x00005970u; // 800FE028
  W32(c->r[1]+0x00000098u,c->r[30]); // 800FE02C
  c->r[30]=c->r[3]|c->r[3]; // 800FE030
  W32(c->r[1]+0x00000094u,c->r[29]); // 800FE034
  c->r[4]=R8(c->r[3]+0x00000074u); // 800FE038
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FE03C
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[0]); // 800FE040
  W8(c->r[3]+0x00000074u,c->r[4]); // 800FE044
  if (!crb(c,2)) { goto L_800FE4E8; } // 800FE048
  c->r[29]=0u+0x00000000u; // 800FE04C
  c->r[4]=c->r[30]+0x000003ECu; // 800FE050
  W8(c->r[3]+0x00000029u,c->r[29]); // 800FE054
  W8(c->r[3]+0x0000002Au,c->r[29]); // 800FE058
  c->r[3]=c->r[3]+0x0000002Cu; // 800FE05C
  c->lr=0x800FE064u; f_800361A0(c); // 800FE060
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE064
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FE068
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 800FE06C
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE070
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FE074
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800FE078
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE07C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FE080
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800FE084
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800FE088
  c->r[0]=c->r[3]+0xFFFFFF9Cu; // 800FE08C
  cmpu(c,0,c->r[0],0x0000000Eu); // 800FE090
  if (crb(c,1)) { goto L_800FE594; } // 800FE094
  c->r[3]=0u+0x803D0000u; // 800FE098
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FE09C
  c->r[3]=c->r[3]+0x00005B34u; // 800FE0A0
  c->r[3]=R32(c->r[3]+c->r[0]); // 800FE0A4
  c->ctr=c->r[3]; // 800FE0A8
  if (true) { switch (c->ctr) { case 0x800FE0B0u: goto L_800FE0B0; case 0x800FE130u: goto L_800FE130; case 0x800FE204u: goto L_800FE204; case 0x800FE2B0u: goto L_800FE2B0; case 0x800FE300u: goto L_800FE300; case 0x800FE350u: goto L_800FE350; case 0x800FE38Cu: goto L_800FE38C; case 0x800FE454u: goto L_800FE454; case 0x800FE594u: goto L_800FE594; default: break; } dispatch(c,c->ctr); return; } // 800FE0AC
L_800FE0B0:;
  c->r[3]=0u+0x80550000u; // 800FE0B0
  c->r[4]=0u+0x00000026u; // 800FE0B4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FE0B8
  c->lr=0x800FE0C0u; f_8019C920(c); // 800FE0BC
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FE0C0
  c->r[4]=0u+0x00000001u; // 800FE0C4
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE0C8
  c->r[5]=0u+0x00000001u; // 800FE0CC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FE0D0
  c->f[2]=c->f[1]; // 800FE0D4
  c->ctr=c->r[12]; // 800FE0D8
  if (true) { c->lr=0x800FE0E0u; dispatch(c,c->ctr); } // 800FE0DC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE0E0
  c->r[3]=c->r[30]|c->r[30]; // 800FE0E4
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE0E8
  c->r[4]=0u+0x00000003u; // 800FE0EC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FE0F0
  c->r[5]=0u+0x00000001u; // 800FE0F4
  c->f[2]=c->f[1]; // 800FE0F8
  c->ctr=c->r[12]; // 800FE0FC
  if (true) { c->lr=0x800FE104u; dispatch(c,c->ctr); } // 800FE100
  c->r[4]=c->r[31]+0x00000140u; // 800FE104
  c->r[6]=R32(c->r[31]+0x00000140u); // 800FE108
  c->r[5]=R32(c->r[4]+0x00000004u); // 800FE10C
  c->r[3]=c->r[30]|c->r[30]; // 800FE110
  c->r[0]=R32(c->r[4]+0x00000008u); // 800FE114
  c->r[4]=c->r[1]+0x00000080u; // 800FE118
  W32(c->r[1]+0x00000080u,c->r[6]); // 800FE11C
  W32(c->r[1]+0x00000084u,c->r[5]); // 800FE120
  W32(c->r[1]+0x00000088u,c->r[0]); // 800FE124
  c->lr=0x800FE12Cu; f_800FBF44(c); // 800FE128
  goto L_800FE594; // 800FE12C
L_800FE130:;
  c->r[3]=R8(c->r[30]+0x00000028u); // 800FE130
  cmps(c,0,(int32_t)c->r[3],0); // 800FE134
  if (!crb(c,2)) { goto L_800FE1D8; } // 800FE138
  c->r[0]=c->r[3]+0x00000001u; // 800FE13C
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE140
  W8(c->r[30]+0x00000028u,c->r[0]); // 800FE144
  c->r[3]=c->r[30]|c->r[30]; // 800FE148
  c->f[2]=c->f[1]; // 800FE14C
  c->r[4]=0u+0x00000019u; // 800FE150
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE154
  c->r[5]=0u+0x00000001u; // 800FE158
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FE15C
  c->ctr=c->r[12]; // 800FE160
  if (true) { c->lr=0x800FE168u; dispatch(c,c->ctr); } // 800FE164
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FE168
  c->r[5]=0u+0x00000000u; // 800FE16C
  c->r[4]=R32(c->r[30]+0x00000398u); // 800FE170
  c->lr=0x800FE178u; f_80250BF4(c); // 800FE174
  c->r[4]=R32(c->r[30]+0x00000398u); // 800FE178
  c->r[0]=0u+0x00000001u; // 800FE17C
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE180
  c->r[3]=c->r[30]|c->r[30]; // 800FE184
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800FE188
  c->r[5]=0u+0x00000025u; // 800FE18C
  c->f[2]=c->f[1]; // 800FE190
  c->r[6]=0u+0x00000001u; // 800FE194
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE198
  c->r[4]=R32(c->r[30]+0x00000398u); // 800FE19C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800FE1A0
  c->ctr=c->r[12]; // 800FE1A4
  if (true) { c->lr=0x800FE1ACu; dispatch(c,c->ctr); } // 800FE1A8
  c->r[4]=c->r[31]+0x0000014Cu; // 800FE1AC
  c->r[6]=R32(c->r[31]+0x0000014Cu); // 800FE1B0
  c->r[5]=R32(c->r[4]+0x00000004u); // 800FE1B4
  c->r[3]=c->r[30]|c->r[30]; // 800FE1B8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800FE1BC
  c->r[4]=c->r[1]+0x00000074u; // 800FE1C0
  W32(c->r[1]+0x00000074u,c->r[6]); // 800FE1C4
  W32(c->r[1]+0x00000078u,c->r[5]); // 800FE1C8
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800FE1CC
  c->lr=0x800FE1D4u; f_800FBF44(c); // 800FE1D0
  goto L_800FE594; // 800FE1D4
L_800FE1D8:;
  c->r[4]=c->r[31]+0x00000158u; // 800FE1D8
  c->r[6]=R32(c->r[31]+0x00000158u); // 800FE1DC
  c->r[5]=R32(c->r[4]+0x00000004u); // 800FE1E0
  c->r[3]=c->r[30]|c->r[30]; // 800FE1E4
  c->r[0]=R32(c->r[4]+0x00000008u); // 800FE1E8
  c->r[4]=c->r[1]+0x00000068u; // 800FE1EC
  W32(c->r[1]+0x00000068u,c->r[6]); // 800FE1F0
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 800FE1F4
  W32(c->r[1]+0x00000070u,c->r[0]); // 800FE1F8
  c->lr=0x800FE200u; f_800FBF44(c); // 800FE1FC
  goto L_800FE594; // 800FE200
L_800FE204:;
  c->r[29]=0u+0x80550000u; // 800FE204
  c->r[4]=0u+0x00000043u; // 800FE208
  c->r[3]=c->r[29]+0xFFFFCE54u; // 800FE20C
  c->lr=0x800FE214u; f_8019C920(c); // 800FE210
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FE214
  c->r[4]=0u+0x00000008u; // 800FE218
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE21C
  c->r[5]=0u+0x00000001u; // 800FE220
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FE224
  c->f[2]=c->f[1]; // 800FE228
  c->ctr=c->r[12]; // 800FE22C
  if (true) { c->lr=0x800FE234u; dispatch(c,c->ctr); } // 800FE230
  c->r[3]=c->r[29]+0xFFFFCE54u; // 800FE234
  c->r[4]=0u+0x0000002Cu; // 800FE238
  c->lr=0x800FE240u; f_8019C920(c); // 800FE23C
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FE240
  c->r[4]=0u+0x00000001u; // 800FE244
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE248
  c->r[5]=0u+0x00000001u; // 800FE24C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FE250
  c->f[2]=c->f[1]; // 800FE254
  c->ctr=c->r[12]; // 800FE258
  if (true) { c->lr=0x800FE260u; dispatch(c,c->ctr); } // 800FE25C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE260
  c->r[3]=c->r[30]|c->r[30]; // 800FE264
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE268
  c->r[4]=0u+0x0000001Cu; // 800FE26C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FE270
  c->r[5]=0u+0x00000001u; // 800FE274
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FE278
  c->ctr=c->r[12]; // 800FE27C
  if (true) { c->lr=0x800FE284u; dispatch(c,c->ctr); } // 800FE280
  c->r[4]=c->r[31]+0x00000164u; // 800FE284
  c->r[6]=R32(c->r[31]+0x00000164u); // 800FE288
  c->r[5]=R32(c->r[4]+0x00000004u); // 800FE28C
  c->r[3]=c->r[30]|c->r[30]; // 800FE290
  c->r[0]=R32(c->r[4]+0x00000008u); // 800FE294
  c->r[4]=c->r[1]+0x0000005Cu; // 800FE298
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 800FE29C
  W32(c->r[1]+0x00000060u,c->r[5]); // 800FE2A0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800FE2A4
  c->lr=0x800FE2ACu; f_800FBF44(c); // 800FE2A8
  goto L_800FE594; // 800FE2AC
L_800FE2B0:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE2B0
  c->r[3]=c->r[30]|c->r[30]; // 800FE2B4
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE2B8
  c->r[4]=0u+0x00000006u; // 800FE2BC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FE2C0
  c->r[5]=0u+0x00000001u; // 800FE2C4
  c->f[2]=c->f[1]; // 800FE2C8
  c->ctr=c->r[12]; // 800FE2CC
  if (true) { c->lr=0x800FE2D4u; dispatch(c,c->ctr); } // 800FE2D0
  c->r[4]=c->r[31]+0x00000170u; // 800FE2D4
  c->r[6]=R32(c->r[31]+0x00000170u); // 800FE2D8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800FE2DC
  c->r[3]=c->r[30]|c->r[30]; // 800FE2E0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800FE2E4
  c->r[4]=c->r[1]+0x00000050u; // 800FE2E8
  W32(c->r[1]+0x00000050u,c->r[6]); // 800FE2EC
  W32(c->r[1]+0x00000054u,c->r[5]); // 800FE2F0
  W32(c->r[1]+0x00000058u,c->r[0]); // 800FE2F4
  c->lr=0x800FE2FCu; f_800FBF44(c); // 800FE2F8
  goto L_800FE594; // 800FE2FC
L_800FE300:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE300
  c->r[3]=c->r[30]|c->r[30]; // 800FE304
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE308
  c->r[4]=0u+0x00000011u; // 800FE30C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FE310
  c->r[5]=0u+0x00000001u; // 800FE314
  c->f[2]=c->f[1]; // 800FE318
  c->ctr=c->r[12]; // 800FE31C
  if (true) { c->lr=0x800FE324u; dispatch(c,c->ctr); } // 800FE320
  c->r[4]=c->r[31]+0x0000017Cu; // 800FE324
  c->r[6]=R32(c->r[31]+0x0000017Cu); // 800FE328
  c->r[5]=R32(c->r[4]+0x00000004u); // 800FE32C
  c->r[3]=c->r[30]|c->r[30]; // 800FE330
  c->r[0]=R32(c->r[4]+0x00000008u); // 800FE334
  c->r[4]=c->r[1]+0x00000044u; // 800FE338
  W32(c->r[1]+0x00000044u,c->r[6]); // 800FE33C
  W32(c->r[1]+0x00000048u,c->r[5]); // 800FE340
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800FE344
  c->lr=0x800FE34Cu; f_800FBF44(c); // 800FE348
  goto L_800FE594; // 800FE34C
L_800FE350:;
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800FE350
  c->r[5]=c->r[31]+0x00000188u; // 800FE354
  W8(c->r[30]+0x0000006Fu,c->r[29]); // 800FE358
  c->r[3]=c->r[30]|c->r[30]; // 800FE35C
  c->r[0]=c->r[0]|0x00008000u; // 800FE360
  c->r[4]=c->r[1]+0x00000038u; // 800FE364
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800FE368
  c->r[7]=R32(c->r[31]+0x00000188u); // 800FE36C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800FE370
  c->r[0]=R32(c->r[5]+0x00000008u); // 800FE374
  W32(c->r[1]+0x00000038u,c->r[7]); // 800FE378
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 800FE37C
  W32(c->r[1]+0x00000040u,c->r[0]); // 800FE380
  c->lr=0x800FE388u; f_800FBF44(c); // 800FE384
  goto L_800FE594; // 800FE388
L_800FE38C:;
  c->r[3]=R8(c->r[30]+0x00000028u); // 800FE38C
  cmps(c,0,(int32_t)c->r[3],0); // 800FE390
  if (!crb(c,2)) { goto L_800FE418; } // 800FE394
  c->r[0]=c->r[3]+0x00000001u; // 800FE398
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE39C
  W8(c->r[30]+0x00000028u,c->r[0]); // 800FE3A0
  c->r[3]=c->r[30]|c->r[30]; // 800FE3A4
  c->f[2]=c->f[1]; // 800FE3A8
  c->r[4]=0u+0x0000001Bu; // 800FE3AC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE3B0
  c->r[5]=0u+0x00000001u; // 800FE3B4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FE3B8
  c->ctr=c->r[12]; // 800FE3BC
  if (true) { c->lr=0x800FE3C4u; dispatch(c,c->ctr); } // 800FE3C0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE3C4
  c->r[3]=c->r[30]|c->r[30]; // 800FE3C8
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE3CC
  c->r[5]=0u+0x00000026u; // 800FE3D0
  c->r[12]=R32(c->r[12]+0x00000064u); // 800FE3D4
  c->r[6]=0u+0x00000001u; // 800FE3D8
  c->f[2]=c->f[1]; // 800FE3DC
  c->r[4]=R32(c->r[30]+0x00000398u); // 800FE3E0
  c->ctr=c->r[12]; // 800FE3E4
  if (true) { c->lr=0x800FE3ECu; dispatch(c,c->ctr); } // 800FE3E8
  c->r[4]=c->r[31]+0x00000194u; // 800FE3EC
  c->r[6]=R32(c->r[31]+0x00000194u); // 800FE3F0
  c->r[5]=R32(c->r[4]+0x00000004u); // 800FE3F4
  c->r[3]=c->r[30]|c->r[30]; // 800FE3F8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800FE3FC
  c->r[4]=c->r[1]+0x0000002Cu; // 800FE400
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800FE404
  W32(c->r[1]+0x00000030u,c->r[5]); // 800FE408
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FE40C
  c->lr=0x800FE414u; f_800FBF44(c); // 800FE410
  goto L_800FE594; // 800FE414
L_800FE418:;
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800FE418
  c->r[5]=c->r[31]+0x000001A0u; // 800FE41C
  W8(c->r[30]+0x0000006Fu,c->r[29]); // 800FE420
  c->r[3]=c->r[30]|c->r[30]; // 800FE424
  c->r[0]=c->r[0]|0x00008000u; // 800FE428
  c->r[4]=c->r[1]+0x00000020u; // 800FE42C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800FE430
  c->r[7]=R32(c->r[31]+0x000001A0u); // 800FE434
  c->r[6]=R32(c->r[5]+0x00000004u); // 800FE438
  c->r[0]=R32(c->r[5]+0x00000008u); // 800FE43C
  W32(c->r[1]+0x00000020u,c->r[7]); // 800FE440
  W32(c->r[1]+0x00000024u,c->r[6]); // 800FE444
  W32(c->r[1]+0x00000028u,c->r[0]); // 800FE448
  c->lr=0x800FE450u; f_800FBF44(c); // 800FE44C
  goto L_800FE594; // 800FE450
L_800FE454:;
  c->r[3]=R8(c->r[30]+0x00000028u); // 800FE454
  cmps(c,0,(int32_t)c->r[3],0); // 800FE458
  if (!crb(c,2)) { goto L_800FE4B8; } // 800FE45C
  c->r[0]=c->r[3]+0x00000001u; // 800FE460
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE464
  W8(c->r[30]+0x00000028u,c->r[0]); // 800FE468
  c->r[3]=c->r[30]|c->r[30]; // 800FE46C
  c->f[2]=c->f[1]; // 800FE470
  c->r[4]=0u+0x0000000Cu; // 800FE474
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE478
  c->r[5]=0u+0x00000001u; // 800FE47C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FE480
  c->ctr=c->r[12]; // 800FE484
  if (true) { c->lr=0x800FE48Cu; dispatch(c,c->ctr); } // 800FE488
  c->r[4]=c->r[31]+0x000001ACu; // 800FE48C
  c->r[6]=R32(c->r[31]+0x000001ACu); // 800FE490
  c->r[5]=R32(c->r[4]+0x00000004u); // 800FE494
  c->r[3]=c->r[30]|c->r[30]; // 800FE498
  c->r[0]=R32(c->r[4]+0x00000008u); // 800FE49C
  c->r[4]=c->r[1]+0x00000014u; // 800FE4A0
  W32(c->r[1]+0x00000014u,c->r[6]); // 800FE4A4
  W32(c->r[1]+0x00000018u,c->r[5]); // 800FE4A8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800FE4AC
  c->lr=0x800FE4B4u; f_800FBF44(c); // 800FE4B0
  goto L_800FE594; // 800FE4B4
L_800FE4B8:;
  W8(c->r[30]+0x0000006Fu,c->r[29]); // 800FE4B8
  c->r[5]=c->r[31]+0x000001B8u; // 800FE4BC
  c->r[3]=c->r[30]|c->r[30]; // 800FE4C0
  c->r[4]=c->r[1]+0x00000008u; // 800FE4C4
  c->r[7]=R32(c->r[31]+0x000001B8u); // 800FE4C8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800FE4CC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800FE4D0
  W32(c->r[1]+0x00000008u,c->r[7]); // 800FE4D4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800FE4D8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FE4DC
  c->lr=0x800FE4E4u; f_800FBF44(c); // 800FE4E0
  goto L_800FE594; // 800FE4E4
L_800FE4E8:;
  {uint32_t ea=c->r[3]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE4E8
  {uint32_t ea=c->r[2]+0xFFFFABA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE4EC
  {uint32_t ea=c->r[2]+0xFFFFAAF4u; c->f[8]=c->ps1[8]=RF32(ea);} // 800FE4F0
  c->f[9]=c->ps1[9]=S(c->f[1]+c->f[0]); // 800FE4F4
  {uint32_t ea=c->r[3]+0x000003ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FE4F8
  {uint32_t ea=c->r[3]+0x000003F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE4FC
  {uint32_t ea=c->r[3]+0x000003F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE500
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[2]); // 800FE504
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800FE508
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[9]); // 800FE50C
  {uint32_t ea=c->r[3]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FE510
  c->f[4]=c->ps1[4]=S(c->f[9]*c->f[1]); // 800FE514
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE518
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[0]); // 800FE51C
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE520
  c->f[5]=c->ps1[5]=S(std::fma(c->f[5],c->f[7],c->f[6])); // 800FE524
  {uint32_t ea=c->r[3]+0x000003F8u; WF32(ea,c->f[9]);} // 800FE528
  c->f[3]=c->ps1[3]=S(std::fma(c->f[3],c->f[7],c->f[4])); // 800FE52C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FE530
  c->f[2]=c->ps1[2]=S(std::fma(c->f[1],c->f[7],c->f[2])); // 800FE534
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[5]);} // 800FE538
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[0]); // 800FE53C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 800FE540
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[2]);} // 800FE544
  {uint32_t ea=c->r[4]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE548
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[7],c->f[1])); // 800FE54C
  {uint32_t ea=c->r[4]+0x00000074u; WF32(ea,c->f[0]);} // 800FE550
  {uint32_t ea=c->r[3]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE554
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE558
  c->f[2]=c->ps1[2]=S(c->f[8]-c->f[1]); // 800FE55C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FE560
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800FE564
  {uint32_t ea=c->r[4]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE568
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[2],c->f[1])); // 800FE56C
  {uint32_t ea=c->r[4]+0x00000078u; WF32(ea,c->f[0]);} // 800FE570
  {uint32_t ea=c->r[3]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE574
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE578
  c->f[2]=c->ps1[2]=S(c->f[8]-c->f[1]); // 800FE57C
  c->r[3]=R32(c->r[3]+0x00000394u); // 800FE580
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800FE584
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE588
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[2],c->f[1])); // 800FE58C
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800FE590
L_800FE594:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FE594
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FE598
  c->lr=0x800FE5A0u; f_802501B0(c); // 800FE59C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800FE5A0
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800FE5A4
  c->r[30]=R32(c->r[1]+0x00000098u); // 800FE5A8
  c->r[29]=R32(c->r[1]+0x00000094u); // 800FE5AC
  c->lr=c->r[0]; // 800FE5B0
  c->r[1]=c->r[1]+0x000000A0u; // 800FE5B4
  return; // 800FE5B8
}

// fn_800FE5BC
void f_800FE5BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE5BC
  c->r[0]=c->lr; // 800FE5C0
  c->r[5]=0u+0x80550000u; // 800FE5C4
  {uint32_t ea=c->r[2]+0xFFFFAB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE5C8
  W32(c->r[1]+0x00000084u,c->r[0]); // 800FE5CC
  c->r[5]=c->r[5]+0x00003D60u; // 800FE5D0
  {uint32_t ea=c->r[2]+0xFFFFAB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FE5D4
  c->r[4]=c->r[1]+0x00000024u; // 800FE5D8
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800FE5DC
  c->r[31]=c->r[3]|c->r[3]; // 800FE5E0
  c->r[3]=c->r[5]+0x00000010u; // 800FE5E4
  c->r[5]=c->r[1]+0x00000018u; // 800FE5E8
  c->r[6]=0u+0x00000000u; // 800FE5EC
  c->lr=0x800FE5F4u; f_801D4470(c); // 800FE5F0
  c->r[3]=c->r[1]+0x00000018u; // 800FE5F4
  c->r[4]=c->r[1]+0x00000024u; // 800FE5F8
  c->r[5]=c->r[1]+0x0000000Cu; // 800FE5FC
  c->lr=0x800FE604u; f_80296A70(c); // 800FE600
  c->r[3]=c->r[1]+0x0000000Cu; // 800FE604
  c->r[4]=c->r[3]|c->r[3]; // 800FE608
  c->lr=0x800FE610u; f_80296AB0(c); // 800FE60C
  c->r[3]=c->r[1]+0x0000000Cu; // 800FE610
  {uint32_t ea=c->r[2]+0xFFFFAAF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE614
  c->r[4]=c->r[3]|c->r[3]; // 800FE618
  c->lr=0x800FE620u; f_80296A94(c); // 800FE61C
  c->r[3]=c->r[1]+0x00000024u; // 800FE620
  c->r[4]=c->r[1]+0x0000000Cu; // 800FE624
  c->r[5]=c->r[31]+0x0000002Cu; // 800FE628
  c->lr=0x800FE630u; f_80296A4C(c); // 800FE62C
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE630
  c->r[3]=c->r[1]+0x00000030u; // 800FE634
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE638
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[1]);} // 800FE63C
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800FE640
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[1]);} // 800FE644
  c->lr=0x800FE64Cu; f_8003601C(c); // 800FE648
  c->r[3]=0u+0x00000000u; // 800FE64C
  c->lr=0x800FE654u; f_802627F4(c); // 800FE650
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FE654
  c->r[3]=c->r[1]+0x00000008u; // 800FE658
  c->r[4]=c->r[1]+0x00000030u; // 800FE65C
  c->lr=0x800FE664u; f_80354204(c); // 800FE660
  {uint32_t ea=c->r[2]+0xFFFFAAFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE664
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE668
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FE66C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800FE670
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 800FE674
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FE678
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800FE67C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FE680
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800FE684
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800FE688
  c->r[0]=R32(c->r[1]+0x00000084u); // 800FE68C
  c->lr=c->r[0]; // 800FE690
  c->r[1]=c->r[1]+0x00000080u; // 800FE694
  return; // 800FE698
}

// fn_800FE69C
void f_800FE69C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE69C
  c->r[0]=c->lr; // 800FE6A0
  cmps(c,0,(int32_t)c->r[3],0); // 800FE6A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE6A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FE6AC
  c->r[31]=c->r[4]|c->r[4]; // 800FE6B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FE6B4
  c->r[30]=c->r[3]|c->r[3]; // 800FE6B8
  if (crb(c,2)) { goto L_800FE6D8; } // 800FE6BC
  c->r[4]=0u+0x00000000u; // 800FE6C0
  c->lr=0x800FE6C8u; f_8026A06C(c); // 800FE6C4
  cmps(c,0,(int32_t)c->r[31],0); // 800FE6C8
  if (!crb(c,1)) { goto L_800FE6D8; } // 800FE6CC
  c->r[3]=c->r[30]|c->r[30]; // 800FE6D0
  c->lr=0x800FE6D8u; f_8026A268(c); // 800FE6D4
L_800FE6D8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE6D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FE6DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FE6E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE6E4
  c->lr=c->r[0]; // 800FE6E8
  c->r[1]=c->r[1]+0x00000010u; // 800FE6EC
  return; // 800FE6F0
}

// fn_800FE6F4
void f_800FE6F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE6F4
  c->r[0]=c->lr; // 800FE6F8
  c->r[4]=0u+0x00000000u; // 800FE6FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FE700
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FE704
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FE708
  c->r[30]=c->r[3]|c->r[3]; // 800FE70C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FE710
  c->lr=0x800FE718u; f_801F57D0(c); // 800FE714
  c->r[3]=c->r[30]|c->r[30]; // 800FE718
  c->r[4]=0u+0x00000001u; // 800FE71C
  c->lr=0x800FE724u; f_801F57D0(c); // 800FE720
  c->r[3]=c->r[30]|c->r[30]; // 800FE724
  c->r[4]=0u+0x00000002u; // 800FE728
  c->lr=0x800FE730u; f_801F57D0(c); // 800FE72C
  c->r[3]=c->r[30]|c->r[30]; // 800FE730
  c->r[4]=0u+0x00000004u; // 800FE734
  c->lr=0x800FE73Cu; f_801F57D0(c); // 800FE738
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE73C
  c->r[3]=c->r[30]|c->r[30]; // 800FE740
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800FE744
  c->ctr=c->r[12]; // 800FE748
  if (true) { c->lr=0x800FE750u; dispatch(c,c->ctr); } // 800FE74C
  c->r[3]=c->r[30]|c->r[30]; // 800FE750
  c->lr=0x800FE758u; f_801F4B94(c); // 800FE754
  c->r[3]=0u+0x00000003u; // 800FE758
  c->r[0]=0u+0x0000006Du; // 800FE75C
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800FE760
  c->r[29]=0u+0x803A0000u; // 800FE764
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FE768
  c->r[4]=c->r[29]+0xFFFFF2C8u; // 800FE76C
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800FE770
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FE774
  c->lr=0x800FE77Cu; f_80256EC4(c); // 800FE778
  W8(c->r[30]+0x00000074u,c->r[3]); // 800FE77C
  c->r[29]=c->r[29]+0xFFFFF2C8u; // 800FE780
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FE784
  c->r[4]=c->r[29]+0x00000005u; // 800FE788
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FE78C
  c->lr=0x800FE794u; f_80256EC4(c); // 800FE790
  W8(c->r[30]+0x00000075u,c->r[3]); // 800FE794
  c->r[3]=c->r[30]|c->r[30]; // 800FE798
  c->r[4]=R32(c->r[30]+0x00000398u); // 800FE79C
  c->lr=0x800FE7A4u; f_801F58BC(c); // 800FE7A0
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800FE7A4
  c->r[3]=c->r[30]|c->r[30]; // 800FE7A8
  c->lr=0x800FE7B0u; f_801F58BC(c); // 800FE7AC
  c->r[4]=R32(c->r[30]+0x000003A4u); // 800FE7B0
  c->r[3]=c->r[30]|c->r[30]; // 800FE7B4
  c->lr=0x800FE7BCu; f_801F58BC(c); // 800FE7B8
  c->r[3]=R32(c->r[30]+0x00000398u); // 800FE7BC
  c->r[31]=0u+0x00000001u; // 800FE7C0
  c->r[4]=c->r[29]+0x0000000Cu; // 800FE7C4
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800FE7C8
  c->r[3]=R32(c->r[30]+0x00000398u); // 800FE7CC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FE7D0
  c->lr=0x800FE7D8u; f_80256EC4(c); // 800FE7D4
  c->r[5]=R32(c->r[30]+0x00000398u); // 800FE7D8
  c->r[4]=c->r[29]+0x0000000Cu; // 800FE7DC
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800FE7E0
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800FE7E4
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800FE7E8
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800FE7EC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FE7F0
  c->lr=0x800FE7F8u; f_80256EC4(c); // 800FE7F4
  c->r[5]=R32(c->r[30]+0x0000039Cu); // 800FE7F8
  c->r[4]=c->r[29]+0x0000000Cu; // 800FE7FC
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800FE800
  c->r[3]=R32(c->r[30]+0x000003A4u); // 800FE804
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800FE808
  c->r[3]=R32(c->r[30]+0x000003A4u); // 800FE80C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FE810
  c->lr=0x800FE818u; f_80256EC4(c); // 800FE814
  c->r[4]=R32(c->r[30]+0x000003A4u); // 800FE818
  c->r[5]=0u+0x00000000u; // 800FE81C
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE820
  c->r[6]=0u+0x00000001u; // 800FE824
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800FE828
  c->r[3]=c->r[30]|c->r[30]; // 800FE82C
  c->f[2]=c->f[1]; // 800FE830
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE834
  c->r[4]=R32(c->r[30]+0x00000398u); // 800FE838
  c->r[12]=R32(c->r[12]+0x00000064u); // 800FE83C
  c->ctr=c->r[12]; // 800FE840
  if (true) { c->lr=0x800FE848u; dispatch(c,c->ctr); } // 800FE844
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE848
  c->r[3]=c->r[30]|c->r[30]; // 800FE84C
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE850
  c->r[5]=0u+0x00000000u; // 800FE854
  c->r[12]=R32(c->r[12]+0x00000064u); // 800FE858
  c->r[6]=0u+0x00000001u; // 800FE85C
  c->f[2]=c->f[1]; // 800FE860
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800FE864
  c->ctr=c->r[12]; // 800FE868
  if (true) { c->lr=0x800FE870u; dispatch(c,c->ctr); } // 800FE86C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE870
  c->r[3]=c->r[30]|c->r[30]; // 800FE874
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE878
  c->r[5]=0u+0x00000000u; // 800FE87C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800FE880
  c->r[6]=0u+0x00000001u; // 800FE884
  c->f[2]=c->f[1]; // 800FE888
  c->r[4]=R32(c->r[30]+0x000003A4u); // 800FE88C
  c->ctr=c->r[12]; // 800FE890
  if (true) { c->lr=0x800FE898u; dispatch(c,c->ctr); } // 800FE894
  c->r[3]=R32(c->r[30]+0x00000398u); // 800FE898
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FE89C
  c->lr=0x800FE8A4u; f_802501B0(c); // 800FE8A0
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800FE8A4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FE8A8
  c->lr=0x800FE8B0u; f_802501B0(c); // 800FE8AC
  c->r[3]=R32(c->r[30]+0x000003A4u); // 800FE8B0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FE8B4
  c->lr=0x800FE8BCu; f_802501B0(c); // 800FE8B8
  c->r[4]=R32(c->r[30]+0x00000394u); // 800FE8BC
  c->r[3]=c->r[30]|c->r[30]; // 800FE8C0
  c->lr=0x800FE8C8u; f_801F58BC(c); // 800FE8C4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FE8C8
  c->r[4]=c->r[29]+0x0000000Cu; // 800FE8CC
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800FE8D0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FE8D4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FE8D8
  c->lr=0x800FE8E0u; f_80256EC4(c); // 800FE8DC
  c->r[6]=R32(c->r[30]+0x00000394u); // 800FE8E0
  c->r[4]=0u+0x00000000u; // 800FE8E4
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE8E8
  c->r[5]=0u+0x00000001u; // 800FE8EC
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800FE8F0
  c->r[3]=c->r[30]|c->r[30]; // 800FE8F4
  c->f[2]=c->f[1]; // 800FE8F8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE8FC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FE900
  c->ctr=c->r[12]; // 800FE904
  if (true) { c->lr=0x800FE90Cu; dispatch(c,c->ctr); } // 800FE908
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FE90C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FE910
  c->lr=0x800FE918u; f_802501B0(c); // 800FE914
  c->r[3]=0u+0x805D0000u; // 800FE918
  c->r[4]=c->r[30]+0x0000002Cu; // 800FE91C
  c->r[3]=c->r[3]+0x000078B0u; // 800FE920
  c->lr=0x800FE928u; f_802351CC(c); // 800FE924
  c->r[4]=R32(c->r[30]+0x00000394u); // 800FE928
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE92C
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800FE930
  c->r[3]=c->r[30]|c->r[30]; // 800FE934
  c->r[5]=R32(c->r[30]+0x00000394u); // 800FE938
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800FE93C
  c->r[0]=R8(c->r[5]+0x0000001Du); // 800FE940
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800FE944
  c->r[5]=R32(c->r[30]+0x00000394u); // 800FE948
  c->r[4]=R32(c->r[30]+0x00000398u); // 800FE94C
  c->r[0]=R8(c->r[5]+0x0000001Du); // 800FE950
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800FE954
  c->r[5]=R32(c->r[30]+0x00000394u); // 800FE958
  c->r[4]=R32(c->r[30]+0x000003A4u); // 800FE95C
  c->r[0]=R8(c->r[5]+0x0000001Du); // 800FE960
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800FE964
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800FE968
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[0]);} // 800FE96C
  c->lr=0x800FE974u; f_801F56F4(c); // 800FE970
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FE974
  c->r[3]=c->r[30]|c->r[30]; // 800FE978
  c->r[12]=R32(c->r[12]+0x00000050u); // 800FE97C
  c->ctr=c->r[12]; // 800FE980
  if (true) { c->lr=0x800FE988u; dispatch(c,c->ctr); } // 800FE984
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FE988
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FE98C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FE990
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FE994
  c->lr=c->r[0]; // 800FE998
  c->r[1]=c->r[1]+0x00000020u; // 800FE99C
  return; // 800FE9A0
}

// fn_800FE9A4
void f_800FE9A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE9A4
  c->r[0]=c->lr; // 800FE9A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FE9AC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800FE9B0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800FE9B4
  c->r[30]=c->r[3]|c->r[3]; // 800FE9B8
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FE9BC
  c->r[12]=R32(c->r[12]+0x00000068u); // 800FE9C0
  c->ctr=c->r[12]; // 800FE9C4
  if (true) { c->lr=0x800FE9CCu; dispatch(c,c->ctr); } // 800FE9C8
  c->r[3]=c->r[30]|c->r[30]; // 800FE9CC
  c->lr=0x800FE9D4u; f_801F4C0C(c); // 800FE9D0
  c->r[3]=c->r[30]|c->r[30]; // 800FE9D4
  c->lr=0x800FE9DCu; f_801F56F4(c); // 800FE9D8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FE9DC
  c->r[31]=0u+0x803A0000u; // 800FE9E0
  c->r[4]=c->r[31]+0xFFFFF2C8u; // 800FE9E4
  c->r[5]=c->r[1]+0x00000008u; // 800FE9E8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FE9EC
  c->r[6]=0u+0x00000001u; // 800FE9F0
  c->lr=0x800FE9F8u; f_80257018(c); // 800FE9F4
  c->r[5]=R32(c->r[30]+0x000003A4u); // 800FE9F8
  c->r[6]=c->r[1]+0x00000008u; // 800FE9FC
  c->r[7]=0u+0x00000000u; // 800FEA00
  c->r[3]=c->r[5]+0x0000005Cu; // 800FEA04
  c->r[4]=c->r[5]+0x00000068u; // 800FEA08
  c->r[5]=c->r[5]+0x00000074u; // 800FEA0C
  c->lr=0x800FEA14u; f_8002BE64(c); // 800FEA10
  c->r[6]=R32(c->r[30]+0x00000394u); // 800FEA14
  c->r[3]=c->r[31]+0xFFFFF2C8u; // 800FEA18
  c->r[4]=c->r[3]+0x00000015u; // 800FEA1C
  c->r[5]=c->r[1]+0x00000008u; // 800FEA20
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800FEA24
  c->r[6]=0u+0x00000001u; // 800FEA28
  c->lr=0x800FEA30u; f_80257018(c); // 800FEA2C
  c->r[5]=R32(c->r[30]+0x0000039Cu); // 800FEA30
  c->r[6]=c->r[1]+0x00000008u; // 800FEA34
  c->r[7]=0u+0x00000000u; // 800FEA38
  c->r[3]=c->r[5]+0x0000005Cu; // 800FEA3C
  c->r[4]=c->r[5]+0x00000068u; // 800FEA40
  c->r[5]=c->r[5]+0x00000074u; // 800FEA44
  c->lr=0x800FEA4Cu; f_8002BE64(c); // 800FEA48
  c->r[5]=R32(c->r[30]+0x00000398u); // 800FEA4C
  c->r[6]=c->r[1]+0x00000008u; // 800FEA50
  c->r[7]=0u+0x00000000u; // 800FEA54
  c->r[3]=c->r[5]+0x0000005Cu; // 800FEA58
  c->r[4]=c->r[5]+0x00000068u; // 800FEA5C
  c->r[5]=c->r[5]+0x00000074u; // 800FEA60
  c->lr=0x800FEA68u; f_8002BE64(c); // 800FEA64
  c->r[3]=R32(c->r[30]+0x00000398u); // 800FEA68
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FEA6C
  c->lr=0x800FEA74u; f_802501B0(c); // 800FEA70
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800FEA74
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FEA78
  c->lr=0x800FEA80u; f_802501B0(c); // 800FEA7C
  c->r[3]=R32(c->r[30]+0x000003A4u); // 800FEA80
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FEA84
  c->lr=0x800FEA8Cu; f_802501B0(c); // 800FEA88
  c->r[3]=R32(c->r[30]+0x00000398u); // 800FEA8C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FEA90
  c->lr=0x800FEA98u; f_8025037C(c); // 800FEA94
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800FEA98
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FEA9C
  c->lr=0x800FEAA4u; f_8025037C(c); // 800FEAA0
  c->r[3]=R32(c->r[30]+0x000003A4u); // 800FEAA4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FEAA8
  c->lr=0x800FEAB0u; f_8025037C(c); // 800FEAAC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FEAB0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800FEAB4
  c->r[30]=R32(c->r[1]+0x00000038u); // 800FEAB8
  c->lr=c->r[0]; // 800FEABC
  c->r[1]=c->r[1]+0x00000040u; // 800FEAC0
  return; // 800FEAC4
}

// fn_800FEAC8
void f_800FEAC8(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800FEAC8
}

// fn_800FEACC
void f_800FEACC(Ctx* __restrict c) {
  f_801F50B4(c); return; // 800FEACC
}

// fn_800FEAD0
void f_800FEAD0(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800FEAD0
}

// fn_800FEAD4
void f_800FEAD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEAD4
  c->r[0]=c->lr; // 800FEAD8
  c->r[5]=0u+0x00000000u; // 800FEADC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEAE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FEAE4
  c->r[31]=c->r[3]|c->r[3]; // 800FEAE8
  c->r[3]=0u+0x000003DDu; // 800FEAEC
  c->r[4]=R32(c->r[31]+0x00000398u); // 800FEAF0
  c->r[4]=c->r[4]+0x0000010Cu; // 800FEAF4
  c->lr=0x800FEAFCu; f_8024EE50(c); // 800FEAF8
  cmps(c,0,(int32_t)c->r[3],0); // 800FEAFC
  if (crb(c,2)) { goto L_800FEB0C; } // 800FEB00
  c->r[3]=0u+0x00000000u; // 800FEB04
  goto L_800FEB70; // 800FEB08
L_800FEB0C:;
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800FEB0C
  c->r[3]=0u+0x000003DEu; // 800FEB10
  c->r[5]=0u+0x00000000u; // 800FEB14
  c->r[4]=c->r[4]+0x0000010Cu; // 800FEB18
  c->lr=0x800FEB20u; f_8024EE50(c); // 800FEB1C
  cmps(c,0,(int32_t)c->r[3],0); // 800FEB20
  if (crb(c,2)) { goto L_800FEB30; } // 800FEB24
  c->r[3]=0u+0x00000000u; // 800FEB28
  goto L_800FEB70; // 800FEB2C
L_800FEB30:;
  c->r[4]=R32(c->r[31]+0x000003A4u); // 800FEB30
  c->r[3]=0u+0x000003D6u; // 800FEB34
  c->r[5]=0u+0x00000000u; // 800FEB38
  c->r[4]=c->r[4]+0x0000010Cu; // 800FEB3C
  c->lr=0x800FEB44u; f_8024EE50(c); // 800FEB40
  cmps(c,0,(int32_t)c->r[3],0); // 800FEB44
  if (crb(c,2)) { goto L_800FEB54; } // 800FEB48
  c->r[3]=0u+0x00000000u; // 800FEB4C
  goto L_800FEB70; // 800FEB50
L_800FEB54:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800FEB54
  c->r[3]=0u+0x000003CEu; // 800FEB58
  c->r[5]=0u+0x00000000u; // 800FEB5C
  c->r[4]=c->r[4]+0x0000010Cu; // 800FEB60
  c->lr=0x800FEB68u; f_8024EE50(c); // 800FEB64
  c->r[0]=cntlz(c->r[3]); // 800FEB68
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800FEB6C
L_800FEB70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEB70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FEB74
  c->lr=c->r[0]; // 800FEB78
  c->r[1]=c->r[1]+0x00000010u; // 800FEB7C
  return; // 800FEB80
}

// fn_800FEB84
void f_800FEB84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEB84
  c->r[0]=c->lr; // 800FEB88
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FEB8C
  c->r[4]=0u+0x00000000u; // 800FEB90
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FEB94
  c->r[5]=0u+0x00000001u; // 800FEB98
  c->f[2]=c->f[1]; // 800FEB9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FEBA0
  c->r[31]=c->r[3]|c->r[3]; // 800FEBA4
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FEBA8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FEBAC
  c->ctr=c->r[12]; // 800FEBB0
  if (true) { c->lr=0x800FEBB8u; dispatch(c,c->ctr); } // 800FEBB4
  c->r[3]=c->r[31]|c->r[31]; // 800FEBB8
  c->lr=0x800FEBC0u; f_801F51B8(c); // 800FEBBC
  c->r[7]=0u+0x803D0000u; // 800FEBC0
  {uint32_t ea=c->r[7]+0x00005D38u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FEBC4
  c->r[3]=c->r[31]|c->r[31]; // 800FEBC8
  c->r[4]=c->r[1]+0x00000008u; // 800FEBCC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FEBD0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FEBD4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FEBD8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FEBDC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FEBE0
  c->lr=0x800FEBE8u; f_800FEBFC(c); // 800FEBE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FEBE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FEBEC
  c->lr=c->r[0]; // 800FEBF0
  c->r[1]=c->r[1]+0x00000020u; // 800FEBF4
  return; // 800FEBF8
}

// fn_800FEBFC
void f_800FEBFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEBFC
  c->r[0]=c->lr; // 800FEC00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEC04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FEC08
  c->r[31]=c->r[4]|c->r[4]; // 800FEC0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FEC10
  c->r[30]=c->r[3]|c->r[3]; // 800FEC14
  c->r[3]=c->r[31]|c->r[31]; // 800FEC18
  c->lr=0x800FEC20u; f_802B9FDC(c); // 800FEC1C
  cmps(c,0,(int32_t)c->r[3],0); // 800FEC20
  if (crb(c,2)) { goto L_800FEC40; } // 800FEC24
  c->r[3]=R32(c->r[31]+0x00000000u); // 800FEC28
  c->r[0]=R32(c->r[31]+0x00000004u); // 800FEC2C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800FEC30
  W32(c->r[30]+0x00000020u,c->r[0]); // 800FEC34
  c->r[0]=R32(c->r[31]+0x00000008u); // 800FEC38
  W32(c->r[30]+0x00000024u,c->r[0]); // 800FEC3C
L_800FEC40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEC40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FEC44
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FEC48
  c->lr=c->r[0]; // 800FEC4C
  c->r[1]=c->r[1]+0x00000010u; // 800FEC50
  return; // 800FEC54
}

// fn_800FEC58
void f_800FEC58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEC58
  c->r[0]=c->lr; // 800FEC5C
  W32(c->r[1]+0x00000084u,c->r[0]); // 800FEC60
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800FEC64
  c->r[31]=c->r[3]|c->r[3]; // 800FEC68
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FEC6C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FEC70
  c->lr=0x800FEC78u; f_802501B0(c); // 800FEC74
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800FEC78
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800FEC7C
  if (crb(c,2)) { goto L_800FEE50; } // 800FEC80
  c->r[3]=0u+0x80550000u; // 800FEC84
  c->r[4]=c->r[1]+0x00000038u; // 800FEC88
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FEC8C
  c->lr=0x800FEC94u; f_800FEE64(c); // 800FEC90
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FEC94
  {uint32_t ea=c->r[2]+0xFFFFABDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FEC98
  fcmp(c,0,c->f[1],c->f[0]); // 800FEC9C
  if (!crb(c,0)) { goto L_800FEE50; } // 800FECA0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FECA4
  c->r[4]=0u+0x803A0000u; // 800FECA8
  c->r[4]=c->r[4]+0xFFFFF2C8u; // 800FECAC
  c->r[5]=c->r[1]+0x00000048u; // 800FECB0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FECB4
  c->r[4]=c->r[4]+0x00000005u; // 800FECB8
  c->r[6]=0u+0x00000001u; // 800FECBC
  c->lr=0x800FECC4u; f_80257018(c); // 800FECC0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FECC4
  c->r[3]=c->r[1]+0x00000038u; // 800FECC8
  {uint32_t ea=c->r[1]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FECCC
  c->r[4]=c->r[1]+0x00000020u; // 800FECD0
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FECD4
  c->r[5]=c->r[1]+0x0000002Cu; // 800FECD8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 800FECDC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 800FECE0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800FECE4
  c->lr=0x800FECECu; f_80296A70(c); // 800FECE8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FECEC
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FECF0
  c->lr=0x800FECF8u; f_8005C22C(c); // 800FECF4
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FECF8
  fcmp(c,0,c->f[1],c->f[0]); // 800FECFC
  if (!crb(c,1)) { goto L_800FED1C; } // 800FED00
  {uint32_t ea=c->r[2]+0xFFFFABE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FED04
  {uint32_t ea=c->r[2]+0xFFFFABE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FED08
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800FED0C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800FED10
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800FED14
  goto L_800FED38; // 800FED18
L_800FED1C:;
  {uint32_t ea=c->r[2]+0xFFFFABE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FED1C
  {uint32_t ea=c->r[2]+0xFFFFABE4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FED20
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800FED24
  {uint32_t ea=c->r[2]+0xFFFFABE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FED28
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800FED2C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800FED30
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800FED34
L_800FED38:;
  {uint32_t ea=c->r[31]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FED38
  {uint32_t ea=c->r[2]+0xFFFFABE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FED3C
  {uint32_t ea=c->r[2]+0xFFFFABE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FED40
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800FED44
  fcmp(c,0,c->f[1],c->f[0]); // 800FED48
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[1]);} // 800FED4C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800FED50
  if (!crb(c,2)) { goto L_800FED60; } // 800FED54
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800FED58
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800FED5C
L_800FED60:;
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FED60
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FED64
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 800FED68
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[0],c->f[1])); // 800FED6C
  c->lr=0x800FED74u; f_800689C8(c); // 800FED70
  c->f[2]=c->f[1]; // 800FED74
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FED78
  c->lr=0x800FED80u; f_8005C22C(c); // 800FED7C
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FED80
  fcmp(c,0,c->f[1],c->f[0]); // 800FED84
  if (!crb(c,1)) { goto L_800FEDA4; } // 800FED88
  {uint32_t ea=c->r[2]+0xFFFFABE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FED8C
  {uint32_t ea=c->r[2]+0xFFFFABE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FED90
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 800FED94
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 800FED98
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800FED9C
  goto L_800FEDC0; // 800FEDA0
L_800FEDA4:;
  {uint32_t ea=c->r[2]+0xFFFFABE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FEDA4
  {uint32_t ea=c->r[2]+0xFFFFABE4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FEDA8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 800FEDAC
  {uint32_t ea=c->r[2]+0xFFFFABE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FEDB0
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 800FEDB4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800FEDB8
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800FEDBC
L_800FEDC0:;
  {uint32_t ea=c->r[31]+0x00000080u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FEDC0
  {uint32_t ea=c->r[2]+0xFFFFABECu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FEDC4
  {uint32_t ea=c->r[2]+0xFFFFABE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FEDC8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800FEDCC
  fcmp(c,0,c->f[1],c->f[0]); // 800FEDD0
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[2]);} // 800FEDD4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800FEDD8
  if (!crb(c,2)) { goto L_800FEDE8; } // 800FEDDC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800FEDE0
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800FEDE4
L_800FEDE8:;
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FEDE8
  c->r[5]=c->r[1]+0x00000014u; // 800FEDEC
  c->r[3]=R32(c->r[31]+0x00000080u); // 800FEDF0
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800FEDF4
  c->r[0]=R32(c->r[31]+0x00000084u); // 800FEDF8
  W32(c->r[1]+0x00000014u,c->r[3]); // 800FEDFC
  W32(c->r[1]+0x00000018u,c->r[0]); // 800FEE00
  c->r[0]=R32(c->r[31]+0x00000088u); // 800FEE04
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800FEE08
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FEE0C
  c->r[4]=R8(c->r[31]+0x00000075u); // 800FEE10
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FEE14
  c->lr=0x800FEE1Cu; f_8025E9C0(c); // 800FEE18
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FEE1C
  c->r[5]=c->r[1]+0x00000008u; // 800FEE20
  c->r[0]=R32(c->r[31]+0x00000084u); // 800FEE24
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800FEE28
  c->r[3]=R32(c->r[31]+0x00000080u); // 800FEE2C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FEE30
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800FEE34
  c->r[0]=R32(c->r[31]+0x00000088u); // 800FEE38
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FEE3C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FEE40
  c->r[4]=R8(c->r[31]+0x00000074u); // 800FEE44
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FEE48
  c->lr=0x800FEE50u; f_8025E9C0(c); // 800FEE4C
L_800FEE50:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800FEE50
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800FEE54
  c->lr=c->r[0]; // 800FEE58
  c->r[1]=c->r[1]+0x00000080u; // 800FEE5C
  return; // 800FEE60
}

// fn_800FEE64
void f_800FEE64(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 800FEE64
  c->r[3]=c->r[4]|c->r[4]; // 800FEE68
  c->r[4]=c->r[5]+0x000010C4u; // 800FEE6C
  f_800361A0(c); return; // 800FEE70
}

// fn_800FEE74
void f_800FEE74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEE74
  c->r[0]=c->lr; // 800FEE78
  cmps(c,0,(int32_t)c->r[3],0); // 800FEE7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEE80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FEE84
  c->r[31]=c->r[4]|c->r[4]; // 800FEE88
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FEE8C
  c->r[30]=c->r[3]|c->r[3]; // 800FEE90
  if (crb(c,2)) { goto L_800FEEB0; } // 800FEE94
  c->r[4]=0u+0x00000000u; // 800FEE98
  c->lr=0x800FEEA0u; f_8026A06C(c); // 800FEE9C
  cmps(c,0,(int32_t)c->r[31],0); // 800FEEA0
  if (!crb(c,1)) { goto L_800FEEB0; } // 800FEEA4
  c->r[3]=c->r[30]|c->r[30]; // 800FEEA8
  c->lr=0x800FEEB0u; f_8026A268(c); // 800FEEAC
L_800FEEB0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEEB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FEEB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FEEB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEEBC
  c->lr=c->r[0]; // 800FEEC0
  c->r[1]=c->r[1]+0x00000010u; // 800FEEC4
  return; // 800FEEC8
}

// fn_800FEECC
void f_800FEECC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEECC
  c->r[0]=c->lr; // 800FEED0
  c->r[4]=0u+0x00000000u; // 800FEED4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FEED8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FEEDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FEEE0
  c->r[30]=c->r[3]|c->r[3]; // 800FEEE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FEEE8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FEEEC
  c->lr=0x800FEEF4u; f_801F57D0(c); // 800FEEF0
  c->r[3]=c->r[30]|c->r[30]; // 800FEEF4
  c->r[4]=0u+0x00000001u; // 800FEEF8
  c->lr=0x800FEF00u; f_801F57D0(c); // 800FEEFC
  c->r[3]=c->r[30]|c->r[30]; // 800FEF00
  c->r[4]=0u+0x00000002u; // 800FEF04
  c->lr=0x800FEF0Cu; f_801F57D0(c); // 800FEF08
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FEF0C
  c->r[3]=c->r[30]|c->r[30]; // 800FEF10
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800FEF14
  c->ctr=c->r[12]; // 800FEF18
  if (true) { c->lr=0x800FEF20u; dispatch(c,c->ctr); } // 800FEF1C
  c->r[3]=c->r[30]|c->r[30]; // 800FEF20
  c->lr=0x800FEF28u; f_801F4B94(c); // 800FEF24
  c->r[3]=0u+0x00000003u; // 800FEF28
  c->r[0]=0u+0x0000006Eu; // 800FEF2C
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800FEF30
  c->r[3]=c->r[30]|c->r[30]; // 800FEF34
  c->r[4]=R32(c->r[30]+0x00000394u); // 800FEF38
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800FEF3C
  c->lr=0x800FEF44u; f_801F58BC(c); // 800FEF40
  c->r[4]=R32(c->r[30]+0x00000398u); // 800FEF44
  c->r[3]=c->r[30]|c->r[30]; // 800FEF48
  c->lr=0x800FEF50u; f_801F58BC(c); // 800FEF4C
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800FEF50
  c->r[3]=c->r[30]|c->r[30]; // 800FEF54
  c->lr=0x800FEF5Cu; f_801F58BC(c); // 800FEF58
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FEF5C
  c->r[31]=0u+0x00000001u; // 800FEF60
  c->r[28]=0u+0x803A0000u; // 800FEF64
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800FEF68
  c->r[4]=c->r[28]+0xFFFFF2F0u; // 800FEF6C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FEF70
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FEF74
  c->lr=0x800FEF7Cu; f_80256EC4(c); // 800FEF78
  c->r[5]=R32(c->r[30]+0x00000394u); // 800FEF7C
  c->r[0]=0u+0x00000000u; // 800FEF80
  c->r[4]=c->r[28]+0xFFFFF2F0u; // 800FEF84
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800FEF88
  c->r[3]=R32(c->r[30]+0x00000398u); // 800FEF8C
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800FEF90
  c->r[3]=R32(c->r[30]+0x00000398u); // 800FEF94
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FEF98
  c->lr=0x800FEFA0u; f_80256EC4(c); // 800FEF9C
  c->r[5]=R32(c->r[30]+0x00000398u); // 800FEFA0
  c->r[29]=0u+0x805D0000u; // 800FEFA4
  c->r[4]=c->r[30]+0x0000002Cu; // 800FEFA8
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800FEFAC
  c->r[3]=c->r[29]+0x000078B0u; // 800FEFB0
  c->lr=0x800FEFB8u; f_802351CC(c); // 800FEFB4
  c->r[5]=R32(c->r[30]+0x00000398u); // 800FEFB8
  c->r[4]=c->r[28]+0xFFFFF2F0u; // 800FEFBC
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800FEFC0
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800FEFC4
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800FEFC8
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800FEFCC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FEFD0
  c->lr=0x800FEFD8u; f_80256EC4(c); // 800FEFD4
  c->r[5]=R32(c->r[30]+0x0000039Cu); // 800FEFD8
  c->r[4]=c->r[30]+0x0000002Cu; // 800FEFDC
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800FEFE0
  c->r[3]=c->r[29]+0x000078B0u; // 800FEFE4
  c->lr=0x800FEFECu; f_802351CC(c); // 800FEFE8
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800FEFEC
  {uint32_t ea=c->r[2]+0xFFFFABF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FEFF0
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800FEFF4
  {uint32_t ea=c->r[2]+0xFFFFABFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FEFF8
  c->r[3]=R32(c->r[30]+0x00000398u); // 800FEFFC
  {uint32_t ea=c->r[2]+0xFFFFAC00u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF000
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[2]);} // 800FF004
  c->r[3]=R32(c->r[30]+0x00000398u); // 800FF008
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 800FF00C
  c->r[3]=R32(c->r[30]+0x00000398u); // 800FF010
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 800FF014
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800FF018
  c->r[4]=R32(c->r[30]+0x00000398u); // 800FF01C
  c->r[3]=c->r[3]+0x0000005Cu; // 800FF020
  c->r[4]=c->r[4]+0x0000005Cu; // 800FF024
  c->lr=0x800FF02Cu; f_800361A0(c); // 800FF028
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FF02C
  c->r[3]=c->r[30]|c->r[30]; // 800FF030
  {uint32_t ea=c->r[2]+0xFFFFAC04u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF034
  c->r[4]=0u+0x00000000u; // 800FF038
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FF03C
  c->r[5]=0u+0x00000001u; // 800FF040
  c->f[2]=c->f[1]; // 800FF044
  c->ctr=c->r[12]; // 800FF048
  if (true) { c->lr=0x800FF050u; dispatch(c,c->ctr); } // 800FF04C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FF050
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FF054
  c->lr=0x800FF05Cu; f_802501B0(c); // 800FF058
  c->r[3]=c->r[29]+0x000078B0u; // 800FF05C
  c->r[4]=c->r[30]+0x0000002Cu; // 800FF060
  c->lr=0x800FF068u; f_802351CC(c); // 800FF064
  c->r[4]=R32(c->r[30]+0x00000394u); // 800FF068
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800FF06C
  c->r[3]=c->r[30]|c->r[30]; // 800FF070
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800FF074
  c->lr=0x800FF07Cu; f_801F56F4(c); // 800FF078
  {uint32_t ea=c->r[2]+0xFFFFAC04u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF07C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FF080
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[0]);} // 800FF084
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800FF088
  c->r[4]=R32(c->r[30]+0x00000394u); // 800FF08C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FF090
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF094
  c->lr=0x800FF09Cu; f_802519A8(c); // 800FF098
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FF09C
  c->r[3]=c->r[30]|c->r[30]; // 800FF0A0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800FF0A4
  c->ctr=c->r[12]; // 800FF0A8
  if (true) { c->lr=0x800FF0B0u; dispatch(c,c->ctr); } // 800FF0AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF0B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FF0B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FF0B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FF0BC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FF0C0
  c->lr=c->r[0]; // 800FF0C4
  c->r[1]=c->r[1]+0x00000020u; // 800FF0C8
  return; // 800FF0CC
}

// fn_800FF0D0
void f_800FF0D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF0D0
  c->r[0]=c->lr; // 800FF0D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF0D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF0DC
  c->r[31]=c->r[3]|c->r[3]; // 800FF0E0
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FF0E4
  c->r[12]=R32(c->r[12]+0x00000068u); // 800FF0E8
  c->ctr=c->r[12]; // 800FF0EC
  if (true) { c->lr=0x800FF0F4u; dispatch(c,c->ctr); } // 800FF0F0
  c->r[3]=c->r[31]|c->r[31]; // 800FF0F4
  c->lr=0x800FF0FCu; f_801F4C0C(c); // 800FF0F8
  c->r[3]=0u+0x80620000u; // 800FF0FC
  c->r[4]=0u+0x00000002u; // 800FF100
  c->r[3]=c->r[3]+0x00007688u; // 800FF104
  c->r[3]=R32(c->r[3]+0x00000014u); // 800FF108
  c->lr=0x800FF110u; f_80038AF4(c); // 800FF10C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF110
  if (crb(c,2)) { goto L_800FF150; } // 800FF114
  c->r[3]=R32(c->r[31]+0x00000398u); // 800FF118
  c->r[4]=0u+0x00000001u; // 800FF11C
  c->r[0]=0u+0x00000000u; // 800FF120
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 800FF124
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800FF128
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800FF12C
  c->r[3]=R32(c->r[31]+0x00000398u); // 800FF130
  cmps(c,0,(int32_t)c->r[3],0); // 800FF134
  if (crb(c,2)) { goto L_800FF184; } // 800FF138
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FF13C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF140
  if (crb(c,2)) { goto L_800FF184; } // 800FF144
  c->lr=0x800FF14Cu; f_8025037C(c); // 800FF148
  goto L_800FF184; // 800FF14C
L_800FF150:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800FF150
  c->r[4]=0u+0x00000000u; // 800FF154
  c->r[0]=0u+0x00000001u; // 800FF158
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 800FF15C
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800FF160
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800FF164
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800FF168
  cmps(c,0,(int32_t)c->r[3],0); // 800FF16C
  if (crb(c,2)) { goto L_800FF184; } // 800FF170
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FF174
  cmps(c,0,(int32_t)c->r[3],0); // 800FF178
  if (crb(c,2)) { goto L_800FF184; } // 800FF17C
  c->lr=0x800FF184u; f_8025037C(c); // 800FF180
L_800FF184:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF184
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF188
  c->lr=c->r[0]; // 800FF18C
  c->r[1]=c->r[1]+0x00000010u; // 800FF190
  return; // 800FF194
}

// fn_800FF198
void f_800FF198(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF198
  c->r[0]=c->lr; // 800FF19C
  c->r[5]=0u+0x00000000u; // 800FF1A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF1A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF1A8
  c->r[31]=c->r[3]|c->r[3]; // 800FF1AC
  c->r[3]=0u+0x000003DFu; // 800FF1B0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800FF1B4
  c->r[4]=c->r[4]+0x0000010Cu; // 800FF1B8
  c->lr=0x800FF1C0u; f_8024EE50(c); // 800FF1BC
  cmps(c,0,(int32_t)c->r[3],0); // 800FF1C0
  if (crb(c,2)) { goto L_800FF1D0; } // 800FF1C4
  c->r[3]=0u+0x00000000u; // 800FF1C8
  goto L_800FF210; // 800FF1CC
L_800FF1D0:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800FF1D0
  c->r[3]=0u+0x000003D3u; // 800FF1D4
  c->r[5]=0u+0x00000000u; // 800FF1D8
  c->r[4]=c->r[4]+0x0000010Cu; // 800FF1DC
  c->lr=0x800FF1E4u; f_8024EE50(c); // 800FF1E0
  cmps(c,0,(int32_t)c->r[3],0); // 800FF1E4
  if (crb(c,2)) { goto L_800FF1F4; } // 800FF1E8
  c->r[3]=0u+0x00000000u; // 800FF1EC
  goto L_800FF210; // 800FF1F0
L_800FF1F4:;
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800FF1F4
  c->r[3]=0u+0x000003D4u; // 800FF1F8
  c->r[5]=0u+0x00000000u; // 800FF1FC
  c->r[4]=c->r[4]+0x0000010Cu; // 800FF200
  c->lr=0x800FF208u; f_8024EE50(c); // 800FF204
  c->r[0]=cntlz(c->r[3]); // 800FF208
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800FF20C
L_800FF210:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF210
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF214
  c->lr=c->r[0]; // 800FF218
  c->r[1]=c->r[1]+0x00000010u; // 800FF21C
  return; // 800FF220
}

// fn_800FF224
void f_800FF224(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF224
  c->r[0]=c->lr; // 800FF228
  {uint32_t ea=c->r[2]+0xFFFFAC04u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF22C
  c->r[4]=0u+0x00000000u; // 800FF230
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF234
  c->r[5]=0u+0x00000001u; // 800FF238
  c->f[2]=c->f[1]; // 800FF23C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FF240
  c->r[31]=c->r[3]|c->r[3]; // 800FF244
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FF248
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FF24C
  c->ctr=c->r[12]; // 800FF250
  if (true) { c->lr=0x800FF258u; dispatch(c,c->ctr); } // 800FF254
  c->r[3]=c->r[31]|c->r[31]; // 800FF258
  c->lr=0x800FF260u; f_801F51B8(c); // 800FF25C
  c->r[7]=0u+0x803D0000u; // 800FF260
  {uint32_t ea=c->r[7]+0x00005DE0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FF264
  c->r[3]=c->r[31]|c->r[31]; // 800FF268
  c->r[4]=c->r[1]+0x00000008u; // 800FF26C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FF270
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FF274
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FF278
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FF27C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FF280
  c->lr=0x800FF288u; f_800FF29C(c); // 800FF284
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF288
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FF28C
  c->lr=c->r[0]; // 800FF290
  c->r[1]=c->r[1]+0x00000020u; // 800FF294
  return; // 800FF298
}

// fn_800FF29C
void f_800FF29C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF29C
  c->r[0]=c->lr; // 800FF2A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF2A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF2A8
  c->r[31]=c->r[4]|c->r[4]; // 800FF2AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FF2B0
  c->r[30]=c->r[3]|c->r[3]; // 800FF2B4
  c->r[3]=c->r[31]|c->r[31]; // 800FF2B8
  c->lr=0x800FF2C0u; f_802B9FDC(c); // 800FF2BC
  cmps(c,0,(int32_t)c->r[3],0); // 800FF2C0
  if (crb(c,2)) { goto L_800FF2E0; } // 800FF2C4
  c->r[3]=R32(c->r[31]+0x00000000u); // 800FF2C8
  c->r[0]=R32(c->r[31]+0x00000004u); // 800FF2CC
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800FF2D0
  W32(c->r[30]+0x00000020u,c->r[0]); // 800FF2D4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800FF2D8
  W32(c->r[30]+0x00000024u,c->r[0]); // 800FF2DC
L_800FF2E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF2E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF2E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FF2E8
  c->lr=c->r[0]; // 800FF2EC
  c->r[1]=c->r[1]+0x00000010u; // 800FF2F0
  return; // 800FF2F4
}

// fn_800FF2F8
void f_800FF2F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF2F8
  c->r[0]=c->lr; // 800FF2FC
  c->r[5]=0u+0x80620000u; // 800FF300
  c->r[4]=0u+0x00000002u; // 800FF304
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF308
  c->r[5]=c->r[5]+0x00007688u; // 800FF30C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF310
  c->r[31]=c->r[3]|c->r[3]; // 800FF314
  c->r[3]=R32(c->r[5]+0x00000014u); // 800FF318
  c->lr=0x800FF320u; f_80038AF4(c); // 800FF31C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF320
  if (crb(c,2)) { goto L_800FF370; } // 800FF324
  {uint32_t ea=c->r[31]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF328
  {uint32_t ea=c->r[2]+0xFFFFAC08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF32C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FF330
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800FF334
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[1]);} // 800FF338
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF33C
  fcmp(c,0,c->f[1],c->f[0]); // 800FF340
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800FF344
  if (!crb(c,2)) { goto L_800FF354; } // 800FF348
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800FF34C
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800FF350
L_800FF354:;
  {uint32_t ea=c->r[31]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF354
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FF358
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800FF35C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800FF360
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FF364
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF368
  c->lr=0x800FF370u; f_802519A8(c); // 800FF36C
L_800FF370:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF370
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF374
  c->lr=c->r[0]; // 800FF378
  c->r[1]=c->r[1]+0x00000010u; // 800FF37C
  return; // 800FF380
}

// fn_800FF384
void f_800FF384(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF384
  c->r[0]=c->lr; // 800FF388
  cmps(c,0,(int32_t)c->r[3],0); // 800FF38C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF390
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF394
  c->r[31]=c->r[4]|c->r[4]; // 800FF398
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FF39C
  c->r[30]=c->r[3]|c->r[3]; // 800FF3A0
  if (crb(c,2)) { goto L_800FF3C0; } // 800FF3A4
  c->r[4]=0u+0x00000000u; // 800FF3A8
  c->lr=0x800FF3B0u; f_8026A06C(c); // 800FF3AC
  cmps(c,0,(int32_t)c->r[31],0); // 800FF3B0
  if (!crb(c,1)) { goto L_800FF3C0; } // 800FF3B4
  c->r[3]=c->r[30]|c->r[30]; // 800FF3B8
  c->lr=0x800FF3C0u; f_8026A268(c); // 800FF3BC
L_800FF3C0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF3C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF3C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FF3C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF3CC
  c->lr=c->r[0]; // 800FF3D0
  c->r[1]=c->r[1]+0x00000010u; // 800FF3D4
  return; // 800FF3D8
}

// fn_800FF3DC
void f_800FF3DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF3DC
  c->r[0]=c->lr; // 800FF3E0
  c->r[4]=0u+0x00000000u; // 800FF3E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF3E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FF3EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FF3F0
  c->r[30]=c->r[3]|c->r[3]; // 800FF3F4
  c->lr=0x800FF3FCu; f_801F57D0(c); // 800FF3F8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FF3FC
  c->r[3]=c->r[30]|c->r[30]; // 800FF400
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800FF404
  c->ctr=c->r[12]; // 800FF408
  if (true) { c->lr=0x800FF410u; dispatch(c,c->ctr); } // 800FF40C
  c->r[3]=c->r[30]|c->r[30]; // 800FF410
  c->lr=0x800FF418u; f_801F4B94(c); // 800FF414
  c->r[3]=0u+0x00000003u; // 800FF418
  c->r[0]=0u+0x0000006Fu; // 800FF41C
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800FF420
  c->r[3]=c->r[30]|c->r[30]; // 800FF424
  c->r[4]=R32(c->r[30]+0x00000394u); // 800FF428
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800FF42C
  c->lr=0x800FF434u; f_801F58BC(c); // 800FF430
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FF434
  c->r[31]=0u+0x00000001u; // 800FF438
  c->r[4]=0u+0x803A0000u; // 800FF43C
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800FF440
  c->r[4]=c->r[4]+0xFFFFF310u; // 800FF444
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FF448
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FF44C
  c->lr=0x800FF454u; f_80256EC4(c); // 800FF450
  c->r[6]=R32(c->r[30]+0x00000394u); // 800FF454
  c->r[4]=0u+0x00000001u; // 800FF458
  {uint32_t ea=c->r[2]+0xFFFFAC18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF45C
  c->r[5]=0u+0x00000001u; // 800FF460
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800FF464
  c->r[3]=c->r[30]|c->r[30]; // 800FF468
  c->f[2]=c->f[1]; // 800FF46C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FF470
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FF474
  c->ctr=c->r[12]; // 800FF478
  if (true) { c->lr=0x800FF480u; dispatch(c,c->ctr); } // 800FF47C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FF480
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FF484
  c->lr=0x800FF48Cu; f_802501B0(c); // 800FF488
  c->r[3]=0u+0x805D0000u; // 800FF48C
  c->r[4]=c->r[30]+0x0000002Cu; // 800FF490
  c->r[3]=c->r[3]+0x000078B0u; // 800FF494
  c->lr=0x800FF49Cu; f_802351CC(c); // 800FF498
  c->r[4]=R32(c->r[30]+0x00000394u); // 800FF49C
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800FF4A0
  c->r[3]=c->r[30]|c->r[30]; // 800FF4A4
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800FF4A8
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800FF4AC
  c->r[0]=c->r[0]|0x00000810u; // 800FF4B0
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800FF4B4
  c->lr=0x800FF4BCu; f_801F56F4(c); // 800FF4B8
  {uint32_t ea=c->r[2]+0xFFFFAC1Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800FF4BC
  c->r[3]=0u+0x80620000u; // 800FF4C0
  {uint32_t ea=c->r[2]+0xFFFFAC20u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FF4C4
  c->r[3]=c->r[3]+0x00007688u; // 800FF4C8
  {uint32_t ea=c->r[2]+0xFFFFAC18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF4CC
  c->r[4]=0u+0x00000002u; // 800FF4D0
  {uint32_t ea=c->r[2]+0xFFFFAC24u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF4D4
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[3]);} // 800FF4D8
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[2]);} // 800FF4DC
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800FF4E0
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[0]);} // 800FF4E4
  c->r[3]=R32(c->r[3]+0x00000014u); // 800FF4E8
  c->lr=0x800FF4F0u; f_80038A08(c); // 800FF4EC
  c->r[7]=0u+0x803D0000u; // 800FF4F0
  {uint32_t ea=c->r[7]+0x00005E88u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FF4F4
  c->r[3]=c->r[30]|c->r[30]; // 800FF4F8
  c->r[4]=c->r[1]+0x00000008u; // 800FF4FC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FF500
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FF504
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FF508
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FF50C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FF510
  c->lr=0x800FF518u; f_800FF548(c); // 800FF514
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800FF518
  W32(c->r[30]+0x00000444u,c->r[31]); // 800FF51C
  c->lr=0x800FF524u; f_8024E174(c); // 800FF520
  W32(c->r[30]+0x00000438u,c->r[3]); // 800FF524
  c->r[3]=c->r[30]|c->r[30]; // 800FF528
  c->lr=0x800FF530u; f_800FFB9C(c); // 800FF52C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF530
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FF534
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FF538
  c->lr=c->r[0]; // 800FF53C
  c->r[1]=c->r[1]+0x00000020u; // 800FF540
  return; // 800FF544
}

// fn_800FF548
void f_800FF548(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF548
  c->r[0]=c->lr; // 800FF54C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF550
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF554
  c->r[31]=c->r[4]|c->r[4]; // 800FF558
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FF55C
  c->r[30]=c->r[3]|c->r[3]; // 800FF560
  c->r[3]=c->r[31]|c->r[31]; // 800FF564
  c->lr=0x800FF56Cu; f_802B9FDC(c); // 800FF568
  cmps(c,0,(int32_t)c->r[3],0); // 800FF56C
  if (crb(c,2)) { goto L_800FF58C; } // 800FF570
  c->r[3]=R32(c->r[31]+0x00000000u); // 800FF574
  c->r[0]=R32(c->r[31]+0x00000004u); // 800FF578
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800FF57C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800FF580
  c->r[0]=R32(c->r[31]+0x00000008u); // 800FF584
  W32(c->r[30]+0x00000024u,c->r[0]); // 800FF588
L_800FF58C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF58C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF590
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FF594
  c->lr=c->r[0]; // 800FF598
  c->r[1]=c->r[1]+0x00000010u; // 800FF59C
  return; // 800FF5A0
}

// fn_800FF5A4
void f_800FF5A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF5A4
  c->r[0]=c->lr; // 800FF5A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF5AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF5B0
  c->r[31]=c->r[3]|c->r[3]; // 800FF5B4
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FF5B8
  c->r[12]=R32(c->r[12]+0x00000068u); // 800FF5BC
  c->ctr=c->r[12]; // 800FF5C0
  if (true) { c->lr=0x800FF5C8u; dispatch(c,c->ctr); } // 800FF5C4
  c->r[3]=c->r[31]|c->r[31]; // 800FF5C8
  c->lr=0x800FF5D0u; f_801F4C0C(c); // 800FF5CC
  c->r[3]=c->r[31]|c->r[31]; // 800FF5D0
  c->lr=0x800FF5D8u; f_800FFAA8(c); // 800FF5D4
  c->r[3]=c->r[31]|c->r[31]; // 800FF5D8
  c->lr=0x800FF5E0u; f_801F56F4(c); // 800FF5DC
  c->r[3]=c->r[31]|c->r[31]; // 800FF5E0
  c->lr=0x800FF5E8u; f_800FFC40(c); // 800FF5E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF5E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF5EC
  c->lr=c->r[0]; // 800FF5F0
  c->r[1]=c->r[1]+0x00000010u; // 800FF5F4
  return; // 800FF5F8
}

// fn_800FF5FC
void f_800FF5FC(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800FF5FC
}

// fn_800FF600
void f_800FF600(Ctx* __restrict c) {
  f_801F50B4(c); return; // 800FF600
}

// fn_800FF604
void f_800FF604(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800FF604
}

// fn_800FF608
void f_800FF608(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF608
  c->r[0]=c->lr; // 800FF60C
  c->r[5]=0u+0x00000000u; // 800FF610
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF614
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF618
  c->r[31]=c->r[3]|c->r[3]; // 800FF61C
  c->r[3]=0u+0x000003DBu; // 800FF620
  c->r[4]=R32(c->r[31]+0x00000394u); // 800FF624
  c->r[4]=c->r[4]+0x0000010Cu; // 800FF628
  c->lr=0x800FF630u; f_8024EE50(c); // 800FF62C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF630
  if (crb(c,2)) { goto L_800FF640; } // 800FF634
  c->r[3]=0u+0x00000000u; // 800FF638
  goto L_800FF64C; // 800FF63C
L_800FF640:;
  c->r[3]=c->r[31]+0x00000210u; // 800FF640
  c->r[4]=0u+0x000000E1u; // 800FF644
  c->lr=0x800FF64Cu; f_80221630(c); // 800FF648
L_800FF64C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF64C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF650
  c->lr=c->r[0]; // 800FF654
  c->r[1]=c->r[1]+0x00000010u; // 800FF658
  return; // 800FF65C
}

// fn_800FF660
void f_800FF660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF660
  c->r[0]=c->lr; // 800FF664
  {uint32_t ea=c->r[2]+0xFFFFAC18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF668
  c->r[4]=0u+0x00000000u; // 800FF66C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF670
  c->r[5]=0u+0x00000001u; // 800FF674
  c->f[2]=c->f[1]; // 800FF678
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FF67C
  c->r[31]=c->r[3]|c->r[3]; // 800FF680
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FF684
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FF688
  c->ctr=c->r[12]; // 800FF68C
  if (true) { c->lr=0x800FF694u; dispatch(c,c->ctr); } // 800FF690
  c->r[3]=c->r[31]|c->r[31]; // 800FF694
  c->lr=0x800FF69Cu; f_801F51B8(c); // 800FF698
  c->r[7]=0u+0x803D0000u; // 800FF69C
  {uint32_t ea=c->r[7]+0x00005E94u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FF6A0
  c->r[3]=c->r[31]|c->r[31]; // 800FF6A4
  c->r[4]=c->r[1]+0x00000008u; // 800FF6A8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FF6AC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FF6B0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FF6B4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FF6B8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FF6BC
  c->lr=0x800FF6C4u; f_800FF548(c); // 800FF6C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF6C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FF6C8
  c->lr=c->r[0]; // 800FF6CC
  c->r[1]=c->r[1]+0x00000020u; // 800FF6D0
  return; // 800FF6D4
}

// fn_800FF6D8
void f_800FF6D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF6D8
  c->r[0]=c->lr; // 800FF6DC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FF6E0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800FF6E4
  W32(c->r[1]+0x00000038u,c->r[30]); // 800FF6E8
  c->r[30]=c->r[3]|c->r[3]; // 800FF6EC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FF6F0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FF6F4
  c->lr=0x800FF6FCu; f_802501B0(c); // 800FF6F8
  c->r[4]=R32(c->r[30]+0x00000394u); // 800FF6FC
  c->r[3]=c->r[30]|c->r[30]; // 800FF700
  c->lr=0x800FF708u; f_801F5418(c); // 800FF704
  cmps(c,0,(int32_t)c->r[3],0); // 800FF708
  if (!crb(c,0)) { goto L_800FF7F4; } // 800FF70C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800FF710
  {uint32_t ea=c->r[2]+0xFFFFAC18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF714
  {uint32_t ea=c->r[2]+0xFFFFAC28u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF718
  c->r[0]=c->r[0]|0x00000084u; // 800FF71C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800FF720
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FF724
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800FF728
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 800FF72C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FF730
  c->lr=0x800FF738u; f_8025037C(c); // 800FF734
  c->r[6]=R32(c->r[30]+0x00000394u); // 800FF738
  c->r[3]=c->r[1]+0x00000020u; // 800FF73C
  c->r[4]=c->r[30]+0x00000060u; // 800FF740
  c->r[5]=c->r[1]+0x0000002Cu; // 800FF744
  c->r[6]=c->r[6]+0x000000B0u; // 800FF748
  c->r[7]=0u+0x00000000u; // 800FF74C
  c->lr=0x800FF754u; f_8002BE64(c); // 800FF750
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 800FF754
  c->r[3]=0u+0x805D0000u; // 800FF758
  c->r[0]=R32(c->r[30]+0x00000030u); // 800FF75C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800FF760
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF764
  c->r[4]=c->r[30]|c->r[30]; // 800FF768
  W32(c->r[1]+0x00000014u,c->r[5]); // 800FF76C
  c->r[7]=c->r[1]+0x00000014u; // 800FF770
  c->r[6]=0u+0x00000036u; // 800FF774
  c->r[8]=0u+0x00000000u; // 800FF778
  W32(c->r[1]+0x00000018u,c->r[0]); // 800FF77C
  c->r[0]=R32(c->r[30]+0x00000034u); // 800FF780
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800FF784
  c->r[3]=R32(c->r[30]+0x00000438u); // 800FF788
  c->r[5]=R32(c->r[30]+0x00000394u); // 800FF78C
  c->lr=0x800FF794u; f_801FA6A4(c); // 800FF790
  {uint32_t ea=c->r[30]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF794
  c->r[6]=0u+0x803A0000u; // 800FF798
  {uint32_t ea=c->r[2]+0xFFFFAC2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FF79C
  c->r[5]=c->r[30]+0x00000044u; // 800FF7A0
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF7A4
  c->r[6]=c->r[6]+0xFFFFF300u; // 800FF7A8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800FF7AC
  c->r[3]=R32(c->r[30]+0x00000438u); // 800FF7B0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800FF7B4
  c->r[4]=0u+0x00000000u; // 800FF7B8
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800FF7BC
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800FF7C0
  c->lr=0x800FF7C8u; f_801FBEC0(c); // 800FF7C4
  c->r[7]=0u+0x803D0000u; // 800FF7C8
  {uint32_t ea=c->r[7]+0x00005EA0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FF7CC
  c->r[3]=c->r[30]|c->r[30]; // 800FF7D0
  c->r[4]=c->r[1]+0x00000008u; // 800FF7D4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FF7D8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FF7DC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FF7E0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FF7E4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FF7E8
  c->lr=0x800FF7F0u; f_800FF548(c); // 800FF7EC
  goto L_800FF870; // 800FF7F0
L_800FF7F4:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FF7F4
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800FF7F8
  cmps(c,0,(int32_t)c->r[0],0); // 800FF7FC
  if (crb(c,2)) { goto L_800FF870; } // 800FF800
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FF804
  c->r[3]=c->r[30]|c->r[30]; // 800FF808
  {uint32_t ea=c->r[2]+0xFFFFAC18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF80C
  c->r[4]=0u+0x00000000u; // 800FF810
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FF814
  c->r[5]=0u+0x00000000u; // 800FF818
  c->f[2]=c->f[1]; // 800FF81C
  c->ctr=c->r[12]; // 800FF820
  if (true) { c->lr=0x800FF828u; dispatch(c,c->ctr); } // 800FF824
  c->r[31]=0u+0x805D0000u; // 800FF828
  c->r[3]=c->r[31]+0x00003F6Cu; // 800FF82C
  c->lr=0x800FF834u; f_800447E4(c); // 800FF830
  cmpu(c,0,c->r[3],0x00000001u); // 800FF834
  if (!crb(c,2)) { goto L_800FF858; } // 800FF838
  c->r[3]=c->r[31]+0x00003F6Cu; // 800FF83C
  c->lr=0x800FF844u; f_80037AF0(c); // 800FF840
  cmpu(c,0,c->r[3],c->r[30]); // 800FF844
  if (!crb(c,2)) { goto L_800FF858; } // 800FF848
  c->r[0]=0u+0x00000000u; // 800FF84C
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800FF850
  goto L_800FF868; // 800FF854
L_800FF858:;
  c->r[3]=0u+0x805D0000u; // 800FF858
  c->r[3]=c->r[3]+0x00003F6Cu; // 800FF85C
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800FF860
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800FF864
L_800FF868:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF868
  c->lr=0x800FF870u; f_801F5B14(c); // 800FF86C
L_800FF870:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FF870
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800FF874
  c->r[30]=R32(c->r[1]+0x00000038u); // 800FF878
  c->lr=c->r[0]; // 800FF87C
  c->r[1]=c->r[1]+0x00000040u; // 800FF880
  return; // 800FF884
}

// fn_800FF888
void f_800FF888(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF888
  c->r[0]=c->lr; // 800FF88C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FF890
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FF894
  c->r[31]=c->r[3]|c->r[3]; // 800FF898
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FF89C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FF8A0
  c->lr=0x800FF8A8u; f_802501B0(c); // 800FF8A4
  c->r[3]=0u+0x805D0000u; // 800FF8A8
  c->r[3]=c->r[3]+0x00003F6Cu; // 800FF8AC
  c->lr=0x800FF8B4u; f_80037AF0(c); // 800FF8B0
  cmpu(c,0,c->r[3],c->r[31]); // 800FF8B4
  if (!crb(c,2)) { goto L_800FF910; } // 800FF8B8
  c->r[0]=0u+0x00000001u; // 800FF8BC
  c->r[3]=c->r[31]|c->r[31]; // 800FF8C0
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800FF8C4
  c->r[4]=c->r[31]+0x00000074u; // 800FF8C8
  c->r[5]=c->r[31]+0x00000076u; // 800FF8CC
  c->r[6]=c->r[31]+0x00000078u; // 800FF8D0
  c->r[7]=c->r[31]+0x0000007Au; // 800FF8D4
  c->lr=0x800FF8DCu; f_801F60D0(c); // 800FF8D8
  c->r[7]=0u+0x803D0000u; // 800FF8DC
  {uint32_t ea=c->r[7]+0x00005EACu; c->r[6]=R32(ea); c->r[7]=ea;} // 800FF8E0
  c->r[3]=c->r[31]|c->r[31]; // 800FF8E4
  c->r[4]=c->r[1]+0x00000014u; // 800FF8E8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FF8EC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FF8F0
  W32(c->r[1]+0x00000014u,c->r[6]); // 800FF8F4
  W32(c->r[1]+0x00000018u,c->r[5]); // 800FF8F8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800FF8FC
  c->lr=0x800FF904u; f_800FF548(c); // 800FF900
  c->r[3]=c->r[31]|c->r[31]; // 800FF904
  c->lr=0x800FF90Cu; f_800FF6D8(c); // 800FF908
  goto L_800FF9C4; // 800FF90C
L_800FF910:;
  c->r[3]=R32(c->r[31]+0x00000438u); // 800FF910
  c->r[4]=0u+0x00000000u; // 800FF914
  c->lr=0x800FF91Cu; f_801FAF00(c); // 800FF918
  cmps(c,0,(int32_t)c->r[3],0); // 800FF91C
  if (!crb(c,2)) { goto L_800FF9A4; } // 800FF920
  c->r[3]=c->r[31]|c->r[31]; // 800FF924
  c->r[4]=0u+0x0000004Fu; // 800FF928
  c->lr=0x800FF930u; f_801F5AB4(c); // 800FF92C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800FF930
  c->r[3]=c->r[31]+0x0000002Cu; // 800FF934
  c->r[4]=c->r[4]+0x0000005Cu; // 800FF938
  c->lr=0x800FF940u; f_800361A0(c); // 800FF93C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800FF940
  c->r[3]=c->r[31]+0x00000060u; // 800FF944
  c->r[4]=c->r[4]+0x00000068u; // 800FF948
  c->lr=0x800FF950u; f_800361A0(c); // 800FF94C
  {uint32_t ea=c->r[2]+0xFFFFAC30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF950
  c->r[3]=c->r[31]|c->r[31]; // 800FF954
  c->r[4]=c->r[31]+0x00000074u; // 800FF958
  c->r[5]=c->r[31]+0x00000076u; // 800FF95C
  c->r[6]=c->r[31]+0x00000078u; // 800FF960
  c->r[7]=c->r[31]+0x0000007Au; // 800FF964
  c->lr=0x800FF96Cu; f_801F5EE4(c); // 800FF968
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FF96C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FF970
  c->lr=0x800FF978u; f_8025037C(c); // 800FF974
  c->r[7]=0u+0x803D0000u; // 800FF978
  {uint32_t ea=c->r[7]+0x00005EB8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FF97C
  c->r[3]=c->r[31]|c->r[31]; // 800FF980
  c->r[4]=c->r[1]+0x00000008u; // 800FF984
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FF988
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FF98C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FF990
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FF994
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FF998
  c->lr=0x800FF9A0u; f_800FF548(c); // 800FF99C
  goto L_800FF9C4; // 800FF9A0
L_800FF9A4:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800FF9A4
  c->r[3]=c->r[31]+0x0000002Cu; // 800FF9A8
  c->r[4]=c->r[4]+0x0000005Cu; // 800FF9AC
  c->lr=0x800FF9B4u; f_800361A0(c); // 800FF9B0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800FF9B4
  c->r[3]=c->r[31]+0x00000060u; // 800FF9B8
  c->r[4]=c->r[4]+0x00000068u; // 800FF9BC
  c->lr=0x800FF9C4u; f_800361A0(c); // 800FF9C0
L_800FF9C4:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800FF9C4
  c->r[3]=c->r[31]+0x0000002Cu; // 800FF9C8
  c->r[4]=c->r[4]+0x0000005Cu; // 800FF9CC
  c->lr=0x800FF9D4u; f_800361A0(c); // 800FF9D0
  c->r[3]=c->r[31]|c->r[31]; // 800FF9D4
  c->r[4]=0u+0x00000000u; // 800FF9D8
  c->lr=0x800FF9E0u; f_801F7C00(c); // 800FF9DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FF9E0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FF9E4
  c->lr=c->r[0]; // 800FF9E8
  c->r[1]=c->r[1]+0x00000030u; // 800FF9EC
  return; // 800FF9F0
}

// fn_800FF9F4
void f_800FF9F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF9F4
  c->r[0]=c->lr; // 800FF9F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF9FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FFA00
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FFA04
  c->r[30]=c->r[3]|c->r[3]; // 800FFA08
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FFA0C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FFA10
  c->lr=0x800FFA18u; f_802501B0(c); // 800FFA14
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FFA18
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFA1C
  {uint32_t ea=c->r[2]+0xFFFFAC38u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFA20
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800FFA24
  fcmp(c,0,c->f[1],c->f[0]); // 800FFA28
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[1]);} // 800FFA2C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800FFA30
  if (!crb(c,2)) { goto L_800FFA84; } // 800FFA34
  c->r[31]=0u+0x80620000u; // 800FFA38
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800FFA3C
  c->r[31]=c->r[31]+0x00007688u; // 800FFA40
  c->r[4]=0u+0x00000002u; // 800FFA44
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FFA48
  c->lr=0x800FFA50u; f_8003DCAC(c); // 800FFA4C
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FFA50
  c->r[4]=0u+0x00000007u; // 800FFA54
  c->lr=0x800FFA5Cu; f_8003DCAC(c); // 800FFA58
  c->r[7]=0u+0x803D0000u; // 800FFA5C
  {uint32_t ea=c->r[7]+0x00005EC4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FFA60
  c->r[3]=c->r[30]|c->r[30]; // 800FFA64
  c->r[4]=c->r[1]+0x00000008u; // 800FFA68
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FFA6C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FFA70
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FFA74
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FFA78
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FFA7C
  c->lr=0x800FFA84u; f_800FF548(c); // 800FFA80
L_800FFA84:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FFA84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FFA88
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FFA8C
  c->lr=c->r[0]; // 800FFA90
  c->r[1]=c->r[1]+0x00000020u; // 800FFA94
  return; // 800FFA98
}

// fn_800FFA9C
void f_800FFA9C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800FFA9C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FFAA0
  f_802501B0(c); return; // 800FFAA4
}

// fn_800FFAA8
void f_800FFAA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFAA8
  c->r[0]=c->lr; // 800FFAAC
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800FFAB0
  W32(c->r[1]+0x000000BCu,c->r[31]); // 800FFAB4
  W32(c->r[1]+0x000000B8u,c->r[30]); // 800FFAB8
  c->r[30]=c->r[3]|c->r[3]; // 800FFABC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FFAC0
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800FFAC4
  cmps(c,0,(int32_t)c->r[0],0); // 800FFAC8
  if (!crb(c,2)) { goto L_800FFB84; } // 800FFACC
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800FFAD0
  cmps(c,0,(int32_t)c->r[0],0); // 800FFAD4
  if (crb(c,2)) { goto L_800FFB84; } // 800FFAD8
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800FFADC
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 800FFAE0
  cmps(c,0,(int32_t)c->r[0],128); // 800FFAE4
  if (!crb(c,2)) { goto L_800FFB10; } // 800FFAE8
  c->r[3]=0u+0x80620000u; // 800FFAEC
  c->r[3]=c->r[3]+0x00007688u; // 800FFAF0
  c->r[3]=R32(c->r[3]+0x00000014u); // 800FFAF4
  cmps(c,0,(int32_t)c->r[3],0); // 800FFAF8
  if (crb(c,2)) { goto L_800FFB10; } // 800FFAFC
  c->r[4]=0u+0x00000002u; // 800FFB00
  c->lr=0x800FFB08u; f_80037670(c); // 800FFB04
  cmps(c,0,(int32_t)c->r[3],0); // 800FFB08
  if (!crb(c,2)) { goto L_800FFB84; } // 800FFB0C
L_800FFB10:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FFB10
  c->r[4]=0u+0x803A0000u; // 800FFB14
  c->r[4]=c->r[4]+0xFFFFF310u; // 800FFB18
  c->r[5]=c->r[1]+0x00000020u; // 800FFB1C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FFB20
  c->r[4]=c->r[4]+0x00000009u; // 800FFB24
  c->r[6]=0u+0x00000001u; // 800FFB28
  c->lr=0x800FFB30u; f_80257018(c); // 800FFB2C
  {uint32_t ea=c->r[2]+0xFFFFAC3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFB30
  c->r[31]=0u+0x80550000u; // 800FFB34
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800FFB38
  c->r[31]=c->r[31]+0x00003D60u; // 800FFB3C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FFB40
  c->r[5]=c->r[30]|c->r[30]; // 800FFB44
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFB48
  c->r[3]=c->r[31]+0x00000010u; // 800FFB4C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 800FFB50
  c->r[6]=c->r[1]+0x00000014u; // 800FFB54
  c->r[7]=c->r[1]+0x00000050u; // 800FFB58
  c->r[4]=0u+0x000001FFu; // 800FFB5C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 800FFB60
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800FFB64
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800FFB68
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800FFB6C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 800FFB70
  c->lr=0x800FFB78u; f_80226910(c); // 800FFB74
  c->r[3]=c->r[31]+0x00000010u; // 800FFB78
  c->r[4]=c->r[1]+0x00000050u; // 800FFB7C
  c->lr=0x800FFB84u; f_80226D68(c); // 800FFB80
L_800FFB84:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800FFB84
  c->r[31]=R32(c->r[1]+0x000000BCu); // 800FFB88
  c->r[30]=R32(c->r[1]+0x000000B8u); // 800FFB8C
  c->lr=c->r[0]; // 800FFB90
  c->r[1]=c->r[1]+0x000000C0u; // 800FFB94
  return; // 800FFB98
}

// fn_800FFB9C
void f_800FFB9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFB9C
  c->r[0]=c->lr; // 800FFBA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFBA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFBA8
  c->r[31]=c->r[3]|c->r[3]; // 800FFBAC
  c->r[3]=c->r[3]+0x00000210u; // 800FFBB0
  c->lr=0x800FFBB8u; f_8004BAD4(c); // 800FFBB4
  cmps(c,0,(int32_t)c->r[3],0); // 800FFBB8
  if (crb(c,2)) { goto L_800FFC2C; } // 800FFBBC
  c->r[0]=R32(c->r[31]+0x00000210u); // 800FFBC0
  c->r[4]=c->r[31]|c->r[31]; // 800FFBC4
  c->r[3]=c->r[31]+0x00000210u; // 800FFBC8
  c->r[0]=c->r[0]|0xAA000000u; // 800FFBCC
  W32(c->r[31]+0x00000210u,c->r[0]); // 800FFBD0
  c->lr=0x800FFBD8u; f_80043E44(c); // 800FFBD4
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFBD8
  c->r[3]=c->r[31]+0x00000210u; // 800FFBDC
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FFBE0
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FFBE4
  c->lr=0x800FFBECu; f_80043E34(c); // 800FFBE8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FFBEC
  c->r[4]=0u+0x803A0000u; // 800FFBF0
  c->r[4]=c->r[4]+0xFFFFF310u; // 800FFBF4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FFBF8
  c->r[4]=c->r[4]+0x00000009u; // 800FFBFC
  c->lr=0x800FFC04u; f_80256EC4(c); // 800FFC00
  c->r[4]=R32(c->r[31]+0x00000394u); // 800FFC04
  c->r[5]=c->r[3]|c->r[3]; // 800FFC08
  c->r[3]=c->r[31]+0x00000210u; // 800FFC0C
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800FFC10
  c->lr=0x800FFC18u; f_8004BAC8(c); // 800FFC14
  {uint32_t ea=c->r[2]+0xFFFFAC40u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFC18
  c->r[3]=c->r[31]+0x00000210u; // 800FFC1C
  c->f[2]=c->f[1]; // 800FFC20
  c->f[3]=c->f[1]; // 800FFC24
  c->lr=0x800FFC2Cu; f_80043E24(c); // 800FFC28
L_800FFC2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFC2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFC30
  c->lr=c->r[0]; // 800FFC34
  c->r[1]=c->r[1]+0x00000010u; // 800FFC38
  return; // 800FFC3C
}

// fn_800FFC40
void f_800FFC40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFC40
  c->r[0]=c->lr; // 800FFC44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFC48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFC4C
  c->r[31]=c->r[3]|c->r[3]; // 800FFC50
  c->r[3]=c->r[3]+0x00000210u; // 800FFC54
  c->lr=0x800FFC5Cu; f_80221698(c); // 800FFC58
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FFC5C
  cmps(c,0,(int32_t)c->r[3],0); // 800FFC60
  if (crb(c,2)) { goto L_800FFC84; } // 800FFC64
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800FFC68
  cmps(c,0,(int32_t)c->r[0],0); // 800FFC6C
  if (crb(c,2)) { goto L_800FFC84; } // 800FFC70
  c->r[0]=R32(c->r[31]+0x00000210u); // 800FFC74
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800FFC78
  W32(c->r[31]+0x00000210u,c->r[0]); // 800FFC7C
  goto L_800FFC90; // 800FFC80
L_800FFC84:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800FFC84
  c->r[0]=c->r[0]|0x80000000u; // 800FFC88
  W32(c->r[31]+0x00000210u,c->r[0]); // 800FFC8C
L_800FFC90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFC90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFC94
  c->lr=c->r[0]; // 800FFC98
  c->r[1]=c->r[1]+0x00000010u; // 800FFC9C
  return; // 800FFCA0
}

// fn_800FFCA4
void f_800FFCA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFCA4
  c->r[0]=c->lr; // 800FFCA8
  cmps(c,0,(int32_t)c->r[3],0); // 800FFCAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFCB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFCB4
  c->r[31]=c->r[4]|c->r[4]; // 800FFCB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FFCBC
  c->r[30]=c->r[3]|c->r[3]; // 800FFCC0
  if (crb(c,2)) { goto L_800FFCE0; } // 800FFCC4
  c->r[4]=0u+0x00000000u; // 800FFCC8
  c->lr=0x800FFCD0u; f_8026A06C(c); // 800FFCCC
  cmps(c,0,(int32_t)c->r[31],0); // 800FFCD0
  if (!crb(c,1)) { goto L_800FFCE0; } // 800FFCD4
  c->r[3]=c->r[30]|c->r[30]; // 800FFCD8
  c->lr=0x800FFCE0u; f_8026A268(c); // 800FFCDC
L_800FFCE0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFCE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFCE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FFCE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFCEC
  c->lr=c->r[0]; // 800FFCF0
  c->r[1]=c->r[1]+0x00000010u; // 800FFCF4
  return; // 800FFCF8
}

// fn_800FFCFC
void f_800FFCFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFCFC
  c->r[0]=c->lr; // 800FFD00
  c->r[4]=0u+0x00000000u; // 800FFD04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFD08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFD0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FFD10
  c->r[30]=c->r[3]|c->r[3]; // 800FFD14
  c->lr=0x800FFD1Cu; f_801F57D0(c); // 800FFD18
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FFD1C
  c->r[3]=c->r[30]|c->r[30]; // 800FFD20
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800FFD24
  c->ctr=c->r[12]; // 800FFD28
  if (true) { c->lr=0x800FFD30u; dispatch(c,c->ctr); } // 800FFD2C
  c->r[3]=c->r[30]|c->r[30]; // 800FFD30
  c->lr=0x800FFD38u; f_801F4B94(c); // 800FFD34
  c->r[3]=0u+0x00000003u; // 800FFD38
  c->r[0]=0u+0x00000070u; // 800FFD3C
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800FFD40
  c->r[3]=c->r[30]|c->r[30]; // 800FFD44
  c->r[4]=R32(c->r[30]+0x00000394u); // 800FFD48
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800FFD4C
  c->lr=0x800FFD54u; f_801F58BC(c); // 800FFD50
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FFD54
  c->r[31]=0u+0x00000001u; // 800FFD58
  c->r[4]=0u+0x803A0000u; // 800FFD5C
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800FFD60
  c->r[4]=c->r[4]+0xFFFFF32Cu; // 800FFD64
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FFD68
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FFD6C
  c->lr=0x800FFD74u; f_80256EC4(c); // 800FFD70
  c->r[6]=R32(c->r[30]+0x00000394u); // 800FFD74
  c->r[5]=0u+0x805D0000u; // 800FFD78
  c->r[4]=c->r[30]+0x0000002Cu; // 800FFD7C
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800FFD80
  c->r[3]=c->r[5]+0x000078B0u; // 800FFD84
  c->lr=0x800FFD8Cu; f_802351CC(c); // 800FFD88
  c->r[5]=R32(c->r[30]+0x00000394u); // 800FFD8C
  c->r[4]=0u+0x00000000u; // 800FFD90
  {uint32_t ea=c->r[2]+0xFFFFAC50u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFD94
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800FFD98
  c->r[3]=c->r[30]|c->r[30]; // 800FFD9C
  c->f[2]=c->f[1]; // 800FFDA0
  c->r[5]=0u+0x00000001u; // 800FFDA4
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800FFDA8
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800FFDAC
  c->r[0]=c->r[0]|0x00000804u; // 800FFDB0
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800FFDB4
  {uint32_t ea=c->r[30]+0x000003F8u; WF32(ea,c->f[1]);} // 800FFDB8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FFDBC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FFDC0
  c->ctr=c->r[12]; // 800FFDC4
  if (true) { c->lr=0x800FFDCCu; dispatch(c,c->ctr); } // 800FFDC8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FFDCC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FFDD0
  c->lr=0x800FFDD8u; f_802501B0(c); // 800FFDD4
  c->r[3]=c->r[30]|c->r[30]; // 800FFDD8
  c->lr=0x800FFDE0u; f_801F56F4(c); // 800FFDDC
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800FFDE0
  W32(c->r[30]+0x00000444u,c->r[31]); // 800FFDE4
  c->lr=0x800FFDECu; f_8024E174(c); // 800FFDE8
  W32(c->r[30]+0x00000438u,c->r[3]); // 800FFDEC
  c->r[3]=c->r[30]|c->r[30]; // 800FFDF0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FFDF4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800FFDF8
  c->ctr=c->r[12]; // 800FFDFC
  if (true) { c->lr=0x800FFE04u; dispatch(c,c->ctr); } // 800FFE00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFE04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFE08
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FFE0C
  c->lr=c->r[0]; // 800FFE10
  c->r[1]=c->r[1]+0x00000010u; // 800FFE14
  return; // 800FFE18
}

// fn_800FFE1C
void f_800FFE1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFE1C
  c->r[0]=c->lr; // 800FFE20
  c->r[4]=c->r[3]|c->r[3]; // 800FFE24
  c->r[3]=0u+0x000004A5u; // 800FFE28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFE2C
  c->r[5]=0u+0x00000000u; // 800FFE30
  c->r[4]=R32(c->r[4]+0x00000394u); // 800FFE34
  c->r[4]=c->r[4]+0x0000010Cu; // 800FFE38
  c->lr=0x800FFE40u; f_8024EE50(c); // 800FFE3C
  c->r[0]=cntlz(c->r[3]); // 800FFE40
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800FFE44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFE48
  c->lr=c->r[0]; // 800FFE4C
  c->r[1]=c->r[1]+0x00000010u; // 800FFE50
  return; // 800FFE54
}

// fn_800FFE58
void f_800FFE58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFE58
  c->r[0]=c->lr; // 800FFE5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFE60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFE64
  c->r[31]=c->r[3]|c->r[3]; // 800FFE68
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FFE6C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800FFE70
  c->ctr=c->r[12]; // 800FFE74
  if (true) { c->lr=0x800FFE7Cu; dispatch(c,c->ctr); } // 800FFE78
  c->r[3]=c->r[31]|c->r[31]; // 800FFE7C
  c->lr=0x800FFE84u; f_801F4C0C(c); // 800FFE80
  c->r[3]=c->r[31]|c->r[31]; // 800FFE84
  c->lr=0x800FFE8Cu; f_8010069C(c); // 800FFE88
  c->r[3]=c->r[31]|c->r[31]; // 800FFE8C
  c->lr=0x800FFE94u; f_801F56F4(c); // 800FFE90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFE94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFE98
  c->lr=c->r[0]; // 800FFE9C
  c->r[1]=c->r[1]+0x00000010u; // 800FFEA0
  return; // 800FFEA4
}

// fn_800FFEA8
void f_800FFEA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFEA8
  c->r[0]=c->lr; // 800FFEAC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FFEB0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800FFEB4
  c->r[31]=0u+0x803D0000u; // 800FFEB8
  c->r[31]=c->r[31]+0x00005F68u; // 800FFEBC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800FFEC0
  c->r[30]=c->r[3]|c->r[3]; // 800FFEC4
  c->lr=0x800FFECCu; f_801F4F28(c); // 800FFEC8
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800FFECC
  cmps(c,0,(int32_t)c->r[0],102); // 800FFED0
  if (crb(c,2)) { goto L_800FFF7C; } // 800FFED4
  if (!crb(c,0)) { goto L_800FFEEC; } // 800FFED8
  cmps(c,0,(int32_t)c->r[0],100); // 800FFEDC
  if (crb(c,2)) { goto L_800FFEF8; } // 800FFEE0
  if (!crb(c,0)) { goto L_800FFF64; } // 800FFEE4
  goto L_800FFFD8; // 800FFEE8
L_800FFEEC:;
  cmps(c,0,(int32_t)c->r[0],104); // 800FFEEC
  if (!crb(c,0)) { goto L_800FFFD8; } // 800FFEF0
  goto L_800FFFAC; // 800FFEF4
L_800FFEF8:;
  c->r[0]=0u+0x00000001u; // 800FFEF8
  c->r[5]=R32(c->r[30]+0x00000394u); // 800FFEFC
  W8(c->r[30]+0x00000080u,c->r[0]); // 800FFF00
  c->r[0]=0u+0x00000000u; // 800FFF04
  c->r[3]=c->r[30]+0x0000002Cu; // 800FFF08
  c->r[4]=c->r[30]+0x00000060u; // 800FFF0C
  W8(c->r[5]+0x0000014Cu,c->r[0]); // 800FFF10
  c->r[7]=0u+0x00000000u; // 800FFF14
  c->r[5]=R32(c->r[30]+0x00000394u); // 800FFF18
  W8(c->r[5]+0x0000014Du,c->r[0]); // 800FFF1C
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800FFF20
  c->r[6]=R32(c->r[30]+0x00000394u); // 800FFF24
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800FFF28
  c->r[5]=c->r[6]+0x00000074u; // 800FFF2C
  c->r[6]=c->r[6]+0x000000B0u; // 800FFF30
  c->lr=0x800FFF38u; f_8002BE64(c); // 800FFF34
  c->r[4]=c->r[31]+0x00000000u; // 800FFF38
  c->r[6]=R32(c->r[31]+0x00000000u); // 800FFF3C
  c->r[5]=R32(c->r[4]+0x00000004u); // 800FFF40
  c->r[3]=c->r[30]|c->r[30]; // 800FFF44
  c->r[0]=R32(c->r[4]+0x00000008u); // 800FFF48
  c->r[4]=c->r[1]+0x00000020u; // 800FFF4C
  W32(c->r[1]+0x00000020u,c->r[6]); // 800FFF50
  W32(c->r[1]+0x00000024u,c->r[5]); // 800FFF54
  W32(c->r[1]+0x00000028u,c->r[0]); // 800FFF58
  c->lr=0x800FFF60u; f_800FFFF0(c); // 800FFF5C
  goto L_800FFFD8; // 800FFF60
L_800FFF64:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FFF64
  c->r[3]=c->r[30]|c->r[30]; // 800FFF68
  c->r[12]=R32(c->r[12]+0x00000050u); // 800FFF6C
  c->ctr=c->r[12]; // 800FFF70
  if (true) { c->lr=0x800FFF78u; dispatch(c,c->ctr); } // 800FFF74
  goto L_800FFFD8; // 800FFF78
L_800FFF7C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800FFF7C
  c->r[5]=c->r[31]+0x0000000Cu; // 800FFF80
  c->r[3]=c->r[30]|c->r[30]; // 800FFF84
  c->r[4]=c->r[1]+0x00000014u; // 800FFF88
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800FFF8C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800FFF90
  c->r[0]=R32(c->r[5]+0x00000008u); // 800FFF94
  W32(c->r[1]+0x00000014u,c->r[7]); // 800FFF98
  W32(c->r[1]+0x00000018u,c->r[6]); // 800FFF9C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800FFFA0
  c->lr=0x800FFFA8u; f_800FFFF0(c); // 800FFFA4
  goto L_800FFFD8; // 800FFFA8
L_800FFFAC:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800FFFAC
  c->r[5]=c->r[31]+0x00000018u; // 800FFFB0
  c->r[3]=c->r[30]|c->r[30]; // 800FFFB4
  c->r[4]=c->r[1]+0x00000008u; // 800FFFB8
  c->r[7]=R32(c->r[31]+0x00000018u); // 800FFFBC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800FFFC0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800FFFC4
  W32(c->r[1]+0x00000008u,c->r[7]); // 800FFFC8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800FFFCC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FFFD0
  c->lr=0x800FFFD8u; f_800FFFF0(c); // 800FFFD4
L_800FFFD8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FFFD8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800FFFDC
  c->r[30]=R32(c->r[1]+0x00000038u); // 800FFFE0
  c->lr=c->r[0]; // 800FFFE4
  c->r[1]=c->r[1]+0x00000040u; // 800FFFE8
  return; // 800FFFEC
}

// fn_800FFFF0
void f_800FFFF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFFF0
  c->r[0]=c->lr; // 800FFFF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFFF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFFFC
  c->r[31]=c->r[4]|c->r[4]; // 80100000
  W32(c->r[1]+0x00000008u,c->r[30]); // 80100004
  c->r[30]=c->r[3]|c->r[3]; // 80100008
  c->r[3]=c->r[31]|c->r[31]; // 8010000C
  c->lr=0x80100014u; f_802B9FDC(c); // 80100010
  cmps(c,0,(int32_t)c->r[3],0); // 80100014
  if (crb(c,2)) { goto L_80100034; } // 80100018
  c->r[3]=R32(c->r[31]+0x00000000u); // 8010001C
  c->r[0]=R32(c->r[31]+0x00000004u); // 80100020
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 80100024
  W32(c->r[30]+0x00000020u,c->r[0]); // 80100028
  c->r[0]=R32(c->r[31]+0x00000008u); // 8010002C
  W32(c->r[30]+0x00000024u,c->r[0]); // 80100030
L_80100034:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100034
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100038
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010003C
  c->lr=c->r[0]; // 80100040
  c->r[1]=c->r[1]+0x00000010u; // 80100044
  return; // 80100048
}

// fn_8010004C
void f_8010004C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010004C
  c->r[0]=c->lr; // 80100050
  W32(c->r[1]+0x00000054u,c->r[0]); // 80100054
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80100058
  c->r[31]=c->r[3]|c->r[3]; // 8010005C
  W32(c->r[1]+0x00000048u,c->r[30]); // 80100060
  c->r[4]=R32(c->r[3]+0x00000394u); // 80100064
  c->lr=0x8010006Cu; f_801F5418(c); // 80100068
  cmps(c,0,(int32_t)c->r[3],0); // 8010006C
  if (!crb(c,0)) { goto L_80100188; } // 80100070
  c->r[0]=R16(c->r[31]+0x000003BEu); // 80100074
  {uint32_t ea=c->r[2]+0xFFFFAC50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100078
  {uint32_t ea=c->r[2]+0xFFFFAC54u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010007C
  c->r[0]=c->r[0]|0x00000080u; // 80100080
  W16(c->r[31]+0x000003BEu,c->r[0]); // 80100084
  c->r[3]=R32(c->r[31]+0x00000394u); // 80100088
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 8010008C
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 80100090
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80100094
  c->lr=0x8010009Cu; f_8025037C(c); // 80100098
  c->r[6]=R32(c->r[31]+0x00000394u); // 8010009C
  c->r[3]=c->r[1]+0x0000002Cu; // 801000A0
  c->r[4]=c->r[31]+0x00000060u; // 801000A4
  c->r[5]=c->r[1]+0x00000038u; // 801000A8
  c->r[6]=c->r[6]+0x000000B0u; // 801000AC
  c->r[7]=0u+0x00000000u; // 801000B0
  c->lr=0x801000B8u; f_8002BE64(c); // 801000B4
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 801000B8
  c->r[3]=0u+0x805D0000u; // 801000BC
  c->r[0]=R32(c->r[31]+0x00000030u); // 801000C0
  c->r[3]=c->r[3]+0x00003F6Cu; // 801000C4
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 801000C8
  c->r[4]=c->r[31]|c->r[31]; // 801000CC
  W32(c->r[1]+0x00000020u,c->r[5]); // 801000D0
  c->r[7]=c->r[1]+0x00000020u; // 801000D4
  c->r[6]=0u+0x00000017u; // 801000D8
  c->r[8]=0u+0x00000000u; // 801000DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801000E0
  c->r[0]=R32(c->r[31]+0x00000034u); // 801000E4
  W32(c->r[1]+0x00000028u,c->r[0]); // 801000E8
  c->r[3]=R32(c->r[31]+0x00000438u); // 801000EC
  c->r[5]=R32(c->r[31]+0x00000394u); // 801000F0
  c->lr=0x801000F8u; f_801FA6A4(c); // 801000F4
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 801000F8
  c->r[6]=0u+0x803A0000u; // 801000FC
  {uint32_t ea=c->r[2]+0xFFFFAC58u; c->f[2]=c->ps1[2]=RF32(ea);} // 80100100
  c->r[5]=c->r[31]+0x00000044u; // 80100104
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80100108
  c->r[6]=c->r[6]+0xFFFFF320u; // 8010010C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80100110
  c->r[3]=R32(c->r[31]+0x00000438u); // 80100114
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80100118
  c->r[4]=0u+0x00000000u; // 8010011C
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 80100120
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 80100124
  c->lr=0x8010012Cu; f_801FBEC0(c); // 80100128
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 8010012C
  c->r[3]=0u+0x805D0000u; // 80100130
  c->r[0]=R32(c->r[31]+0x00000030u); // 80100134
  c->r[3]=c->r[3]+0x00006CF8u; // 80100138
  c->r[4]=c->r[1]+0x00000014u; // 8010013C
  c->r[5]=0u+0x00040000u; // 80100140
  W32(c->r[1]+0x00000014u,c->r[6]); // 80100144
  W32(c->r[1]+0x00000018u,c->r[0]); // 80100148
  c->r[0]=R32(c->r[31]+0x00000034u); // 8010014C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80100150
  c->lr=0x80100158u; f_802236F8(c); // 80100154
  W16(c->r[31]+0x000003B8u,c->r[3]); // 80100158
  c->r[7]=0u+0x803D0000u; // 8010015C
  c->r[3]=c->r[31]|c->r[31]; // 80100160
  c->r[4]=c->r[1]+0x00000008u; // 80100164
  {uint32_t ea=c->r[7]+0x00005F8Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 80100168
  c->r[5]=R32(c->r[7]+0x00000004u); // 8010016C
  c->r[0]=R32(c->r[7]+0x00000008u); // 80100170
  W32(c->r[1]+0x00000008u,c->r[6]); // 80100174
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80100178
  W32(c->r[1]+0x00000010u,c->r[0]); // 8010017C
  c->lr=0x80100184u; f_800FFFF0(c); // 80100180
  goto L_801001CC; // 80100184
L_80100188:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80100188
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 8010018C
  cmps(c,0,(int32_t)c->r[0],0); // 80100190
  if (crb(c,2)) { goto L_801001CC; } // 80100194
  c->r[3]=c->r[31]|c->r[31]; // 80100198
  c->lr=0x801001A0u; f_801F5B14(c); // 8010019C
  c->r[30]=0u+0x805D0000u; // 801001A0
  c->r[3]=c->r[30]+0x00003F6Cu; // 801001A4
  c->lr=0x801001ACu; f_800447E4(c); // 801001A8
  cmpu(c,0,c->r[3],0x00000001u); // 801001AC
  if (!crb(c,2)) { goto L_801001C0; } // 801001B0
  c->r[0]=0u+0x00000000u; // 801001B4
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 801001B8
  goto L_801001CC; // 801001BC
L_801001C0:;
  c->r[3]=c->r[30]+0x00003F6Cu; // 801001C0
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 801001C4
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 801001C8
L_801001CC:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801001CC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801001D0
  c->r[30]=R32(c->r[1]+0x00000048u); // 801001D4
  c->lr=c->r[0]; // 801001D8
  c->r[1]=c->r[1]+0x00000050u; // 801001DC
  return; // 801001E0
}

// fn_801001E4
void f_801001E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801001E4
  c->r[0]=c->lr; // 801001E8
  c->r[4]=0u+0x805D0000u; // 801001EC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801001F0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801001F4
  c->r[31]=c->r[3]|c->r[3]; // 801001F8
  c->r[3]=c->r[4]+0x00003F6Cu; // 801001FC
  c->lr=0x80100204u; f_80037AF0(c); // 80100200
  cmpu(c,0,c->r[3],c->r[31]); // 80100204
  if (!crb(c,2)) { goto L_80100278; } // 80100208
  c->r[0]=0u+0x00000001u; // 8010020C
  {uint32_t ea=c->r[2]+0xFFFFAC50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100210
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 80100214
  c->r[3]=c->r[31]|c->r[31]; // 80100218
  c->f[2]=c->f[1]; // 8010021C
  c->r[4]=0u+0x00000000u; // 80100220
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80100224
  c->r[5]=0u+0x00000001u; // 80100228
  c->r[12]=R32(c->r[12]+0x00000048u); // 8010022C
  c->ctr=c->r[12]; // 80100230
  if (true) { c->lr=0x80100238u; dispatch(c,c->ctr); } // 80100234
  c->r[3]=R32(c->r[31]+0x00000394u); // 80100238
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 8010023C
  c->lr=0x80100244u; f_802501B0(c); // 80100240
  c->r[7]=0u+0x803D0000u; // 80100244
  {uint32_t ea=c->r[7]+0x00005F98u; c->r[6]=R32(ea); c->r[7]=ea;} // 80100248
  c->r[3]=c->r[31]|c->r[31]; // 8010024C
  c->r[4]=c->r[1]+0x00000020u; // 80100250
  c->r[5]=R32(c->r[7]+0x00000004u); // 80100254
  c->r[0]=R32(c->r[7]+0x00000008u); // 80100258
  W32(c->r[1]+0x00000020u,c->r[6]); // 8010025C
  W32(c->r[1]+0x00000024u,c->r[5]); // 80100260
  W32(c->r[1]+0x00000028u,c->r[0]); // 80100264
  c->lr=0x8010026Cu; f_800FFFF0(c); // 80100268
  c->r[3]=c->r[31]|c->r[31]; // 8010026C
  c->lr=0x80100274u; f_8010004C(c); // 80100270
  goto L_80100340; // 80100274
L_80100278:;
  c->r[3]=R32(c->r[31]+0x00000438u); // 80100278
  c->r[4]=0u+0x00000000u; // 8010027C
  c->lr=0x80100284u; f_801FAF00(c); // 80100280
  cmps(c,0,(int32_t)c->r[3],0); // 80100284
  if (!crb(c,2)) { goto L_80100320; } // 80100288
  c->r[3]=c->r[31]|c->r[31]; // 8010028C
  c->r[4]=0u+0x00000018u; // 80100290
  c->lr=0x80100298u; f_801F5AB4(c); // 80100294
  c->r[4]=R32(c->r[31]+0x00000394u); // 80100298
  c->r[3]=c->r[31]+0x0000002Cu; // 8010029C
  c->r[4]=c->r[4]+0x0000005Cu; // 801002A0
  c->lr=0x801002A8u; f_800361A0(c); // 801002A4
  c->r[4]=R32(c->r[31]+0x00000394u); // 801002A8
  c->r[3]=c->r[31]+0x00000060u; // 801002AC
  c->r[4]=c->r[4]+0x00000068u; // 801002B0
  c->lr=0x801002B8u; f_800361A0(c); // 801002B4
  c->r[3]=R32(c->r[31]+0x00000394u); // 801002B8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 801002BC
  c->lr=0x801002C4u; f_8025037C(c); // 801002C0
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 801002C4
  c->r[3]=0u+0x805D0000u; // 801002C8
  c->r[0]=R32(c->r[31]+0x00000030u); // 801002CC
  c->r[3]=c->r[3]+0x00006CF8u; // 801002D0
  c->r[4]=c->r[1]+0x00000014u; // 801002D4
  c->r[5]=0u+0x00040000u; // 801002D8
  W32(c->r[1]+0x00000014u,c->r[6]); // 801002DC
  W32(c->r[1]+0x00000018u,c->r[0]); // 801002E0
  c->r[0]=R32(c->r[31]+0x00000034u); // 801002E4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801002E8
  c->lr=0x801002F0u; f_802236F8(c); // 801002EC
  W16(c->r[31]+0x000003B8u,c->r[3]); // 801002F0
  c->r[7]=0u+0x803D0000u; // 801002F4
  c->r[3]=c->r[31]|c->r[31]; // 801002F8
  c->r[4]=c->r[1]+0x00000008u; // 801002FC
  {uint32_t ea=c->r[7]+0x00005FA4u; c->r[6]=R32(ea); c->r[7]=ea;} // 80100300
  c->r[5]=R32(c->r[7]+0x00000004u); // 80100304
  c->r[0]=R32(c->r[7]+0x00000008u); // 80100308
  W32(c->r[1]+0x00000008u,c->r[6]); // 8010030C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80100310
  W32(c->r[1]+0x00000010u,c->r[0]); // 80100314
  c->lr=0x8010031Cu; f_800FFFF0(c); // 80100318
  goto L_80100340; // 8010031C
L_80100320:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 80100320
  c->r[3]=c->r[31]+0x0000002Cu; // 80100324
  c->r[4]=c->r[4]+0x0000005Cu; // 80100328
  c->lr=0x80100330u; f_800361A0(c); // 8010032C
  c->r[4]=R32(c->r[31]+0x00000394u); // 80100330
  c->r[3]=c->r[31]+0x00000060u; // 80100334
  c->r[4]=c->r[4]+0x00000068u; // 80100338
  c->lr=0x80100340u; f_800361A0(c); // 8010033C
L_80100340:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 80100340
  c->r[3]=c->r[31]+0x0000002Cu; // 80100344
  c->r[4]=c->r[4]+0x0000005Cu; // 80100348
  c->lr=0x80100350u; f_800361A0(c); // 8010034C
  c->r[3]=c->r[31]|c->r[31]; // 80100350
  c->r[4]=0u+0x00000000u; // 80100354
  c->lr=0x8010035Cu; f_801F7C00(c); // 80100358
  c->r[0]=R32(c->r[1]+0x00000044u); // 8010035C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80100360
  c->lr=c->r[0]; // 80100364
  c->r[1]=c->r[1]+0x00000040u; // 80100368
  return; // 8010036C
}

// fn_80100370
void f_80100370(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100370
  c->r[0]=c->lr; // 80100374
  W32(c->r[1]+0x00000044u,c->r[0]); // 80100378
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8010037C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80100380
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 80100384
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 80100388
  c->r[4]=0u+0x80620000u; // 8010038C
  c->r[4]=c->r[4]+0x000079C0u; // 80100390
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80100394
  c->r[31]=c->r[3]|c->r[3]; // 80100398
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010039C
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801003A0
  c->f[1]=-c->f[1]; // 801003A4
  c->f[2]=-c->f[0]; // 801003A8
  c->lr=0x801003B0u; f_8005C22C(c); // 801003AC
  c->f[2]=-c->f[1]; // 801003B0
  {uint32_t ea=c->r[2]+0xFFFFAC50u; c->f[0]=c->ps1[0]=RF32(ea);} // 801003B4
  fcmp(c,0,c->f[2],c->f[0]); // 801003B8
  if (!crb(c,1)) { goto L_801003D4; } // 801003BC
  {uint32_t ea=c->r[2]+0xFFFFAC5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801003C0
  {uint32_t ea=c->r[2]+0xFFFFAC60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801003C4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801003C8
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 801003CC
  goto L_801003EC; // 801003D0
L_801003D4:;
  {uint32_t ea=c->r[2]+0xFFFFAC5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801003D4
  {uint32_t ea=c->r[2]+0xFFFFAC60u; c->f[1]=c->ps1[1]=RF32(ea);} // 801003D8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801003DC
  {uint32_t ea=c->r[2]+0xFFFFAC64u; c->f[0]=c->ps1[0]=RF32(ea);} // 801003E0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801003E4
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801003E8
L_801003EC:;
  {uint32_t ea=c->r[2]+0xFFFFAC5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801003EC
  fcmp(c,0,c->f[31],c->f[0]); // 801003F0
  if (!crb(c,1)) { goto L_80100400; } // 801003F4
  {uint32_t ea=c->r[2]+0xFFFFAC64u; c->f[0]=c->ps1[0]=RF32(ea);} // 801003F8
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 801003FC
L_80100400:;
  c->r[0]=R8(c->r[31]+0x00000080u); // 80100400
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[30]=c->ps1[30]=RF32(ea);} // 80100404
  cmps(c,0,(int32_t)c->r[0],0); // 80100408
  if (crb(c,2)) { goto L_80100424; } // 8010040C
  {uint32_t ea=c->r[2]+0xFFFFAC50u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100410
  c->r[0]=0u+0x00000000u; // 80100414
  W8(c->r[31]+0x00000080u,c->r[0]); // 80100418
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 8010041C
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[31]);} // 80100420
L_80100424:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80100424
  {uint32_t ea=c->r[2]+0xFFFFAC5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80100428
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[1]); // 8010042C
  fcmp(c,0,c->f[31],c->f[0]); // 80100430
  if (!crb(c,1)) { goto L_80100444; } // 80100434
  {uint32_t ea=c->r[2]+0xFFFFAC64u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100438
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 8010043C
  goto L_80100458; // 80100440
L_80100444:;
  {uint32_t ea=c->r[2]+0xFFFFAC68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100444
  fcmp(c,0,c->f[31],c->f[0]); // 80100448
  if (!crb(c,0)) { goto L_80100458; } // 8010044C
  {uint32_t ea=c->r[2]+0xFFFFAC64u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100450
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 80100454
L_80100458:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100458
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 8010045C
  c->lr=0x80100464u; f_8003EA88(c); // 80100460
  {uint32_t ea=c->r[2]+0xFFFFAC6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80100464
  fcmp(c,0,c->f[1],c->f[2]); // 80100468
  if (!crb(c,1)) { goto L_80100494; } // 8010046C
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100470
  fcmp(c,0,c->f[31],c->f[0]); // 80100474
  if (!crb(c,0)) { goto L_80100488; } // 80100478
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8010047C
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 80100480
  goto L_80100498; // 80100484
L_80100488:;
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 80100488
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 8010048C
  goto L_80100498; // 80100490
L_80100494:;
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[31]);} // 80100494
L_80100498:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100498
  {uint32_t ea=c->r[2]+0xFFFFAC70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010049C
  fcmp(c,0,c->f[1],c->f[0]); // 801004A0
  if (!crb(c,1)) { goto L_801004B0; } // 801004A4
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 801004A8
  goto L_801004CC; // 801004AC
L_801004B0:;
  {uint32_t ea=c->r[2]+0xFFFFAC74u; c->f[0]=c->ps1[0]=RF32(ea);} // 801004B0
  fcmp(c,0,c->f[1],c->f[0]); // 801004B4
  if (!crb(c,0)) { goto L_801004CC; } // 801004B8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 801004BC
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 801004C0
  c->r[0]=c->r[0]|0x00004000u; // 801004C4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 801004C8
L_801004CC:;
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801004CC
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801004D0
  c->f[0]=c->ps1[0]=S(c->f[30]/c->f[1]); // 801004D4
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801004D8
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801004DC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801004E0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801004E4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801004E8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801004EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801004F0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801004F4
  if (crb(c,2)) { goto L_80100524; } // 801004F8
  c->r[0]=R8(c->r[31]+0x00000029u); // 801004FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80100500
  if (crb(c,2)) { goto L_80100524; } // 80100504
  W8(c->r[31]+0x00000029u,c->r[3]); // 80100508
  c->r[3]=c->r[31]|c->r[31]; // 8010050C
  c->r[4]=0u+0x00000004u; // 80100510
  c->r[5]=0u+0x00000010u; // 80100514
  c->r[6]=0u+0x00000001u; // 80100518
  c->r[7]=0u+0x00000001u; // 8010051C
  c->lr=0x80100524u; f_8017900C(c); // 80100520
L_80100524:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80100524
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80100528
  c->lr=0x80100530u; f_802501B0(c); // 8010052C
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80100530
  {uint32_t ea=c->r[2]+0xFFFFAC7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80100534
  {uint32_t ea=c->r[2]+0xFFFFAC50u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100538
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8010053C
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[2]);} // 80100540
  fcmp(c,0,c->f[1],c->f[0]); // 80100544
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[1]);} // 80100548
  if (!crb(c,0)) { goto L_8010055C; } // 8010054C
  {uint32_t ea=c->r[2]+0xFFFFAC64u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100550
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80100554
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 80100558
L_8010055C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8010055C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80100560
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 80100564
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 80100568
  c->r[0]=R32(c->r[1]+0x00000044u); // 8010056C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80100570
  c->lr=c->r[0]; // 80100574
  c->r[1]=c->r[1]+0x00000040u; // 80100578
  return; // 8010057C
}

// fn_80100580
void f_80100580(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 80100580
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80100584
  f_802501B0(c); return; // 80100588
}

// fn_8010058C
void f_8010058C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010058C
  c->r[0]=c->lr; // 80100590
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100594
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80100598
  c->r[31]=c->r[3]|c->r[3]; // 8010059C
  c->r[4]=R32(c->r[3]+0x00000394u); // 801005A0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 801005A4
  c->lr=0x801005ACu; f_802501B0(c); // 801005A8
  c->r[3]=c->r[31]+0x00000044u; // 801005AC
  c->r[4]=c->r[31]+0x000003CCu; // 801005B0
  c->lr=0x801005B8u; f_800361A0(c); // 801005B4
  {uint32_t ea=c->r[2]+0xFFFFAC50u; c->f[1]=c->ps1[1]=RF32(ea);} // 801005B8
  c->r[7]=0u+0x803D0000u; // 801005BC
  {uint32_t ea=c->r[2]+0xFFFFAC54u; c->f[0]=c->ps1[0]=RF32(ea);} // 801005C0
  c->r[3]=c->r[31]|c->r[31]; // 801005C4
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[1]);} // 801005C8
  c->r[4]=c->r[1]+0x00000008u; // 801005CC
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 801005D0
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[1]);} // 801005D4
  {uint32_t ea=c->r[7]+0x00005FB0u; c->r[6]=R32(ea); c->r[7]=ea;} // 801005D8
  c->r[5]=R32(c->r[7]+0x00000004u); // 801005DC
  c->r[0]=R32(c->r[7]+0x00000008u); // 801005E0
  W32(c->r[1]+0x00000008u,c->r[6]); // 801005E4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801005E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801005EC
  c->lr=0x801005F4u; f_800FFFF0(c); // 801005F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801005F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801005F8
  c->lr=c->r[0]; // 801005FC
  c->r[1]=c->r[1]+0x00000020u; // 80100600
  return; // 80100604
}

// fn_80100608
void f_80100608(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100608
  c->r[0]=c->lr; // 8010060C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100610
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80100614
  c->r[31]=c->r[3]|c->r[3]; // 80100618
  c->r[4]=R32(c->r[3]+0x00000394u); // 8010061C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 80100620
  c->lr=0x80100628u; f_802501B0(c); // 80100624
  c->r[3]=c->r[31]|c->r[31]; // 80100628
  c->lr=0x80100630u; f_80178D1C(c); // 8010062C
  c->r[3]=c->r[31]|c->r[31]; // 80100630
  c->lr=0x80100638u; f_80178D9C(c); // 80100634
  c->r[3]=c->r[31]|c->r[31]; // 80100638
  c->lr=0x80100640u; f_80178E98(c); // 8010063C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100640
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100644
  c->lr=c->r[0]; // 80100648
  c->r[1]=c->r[1]+0x00000010u; // 8010064C
  return; // 80100650
}

// fn_80100654
void f_80100654(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100654
  c->r[0]=c->lr; // 80100658
  c->r[7]=0u+0x803D0000u; // 8010065C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100660
  c->r[0]=0u+0x00000000u; // 80100664
  c->r[4]=c->r[1]+0x00000008u; // 80100668
  W16(c->r[3]+0x000003BCu,c->r[0]); // 8010066C
  {uint32_t ea=c->r[7]+0x00005FBCu; c->r[6]=R32(ea); c->r[7]=ea;} // 80100670
  c->r[5]=R32(c->r[7]+0x00000004u); // 80100674
  c->r[0]=R32(c->r[7]+0x00000008u); // 80100678
  W32(c->r[1]+0x00000008u,c->r[6]); // 8010067C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80100680
  W32(c->r[1]+0x00000010u,c->r[0]); // 80100684
  c->lr=0x8010068Cu; f_800FFFF0(c); // 80100688
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010068C
  c->lr=c->r[0]; // 80100690
  c->r[1]=c->r[1]+0x00000020u; // 80100694
  return; // 80100698
}

// fn_8010069C
void f_8010069C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010069C
  c->r[0]=c->lr; // 801006A0
  c->r[4]=0u+0x805D0000u; // 801006A4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801006A8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801006AC
  W32(c->r[1]+0x00000068u,c->r[30]); // 801006B0
  c->r[30]=c->r[3]|c->r[3]; // 801006B4
  c->r[3]=c->r[4]+0x00003F6Cu; // 801006B8
  c->lr=0x801006C0u; f_80037AF0(c); // 801006BC
  cmpu(c,0,c->r[3],c->r[30]); // 801006C0
  if (crb(c,2)) { goto L_80100738; } // 801006C4
  c->r[0]=R16(c->r[30]+0x000003BEu); // 801006C8
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 801006CC
  cmps(c,0,(int32_t)c->r[0],128); // 801006D0
  if (!crb(c,2)) { goto L_801006FC; } // 801006D4
  c->r[3]=0u+0x80620000u; // 801006D8
  c->r[3]=c->r[3]+0x00007688u; // 801006DC
  c->r[3]=R32(c->r[3]+0x00000014u); // 801006E0
  cmps(c,0,(int32_t)c->r[3],0); // 801006E4
  if (crb(c,2)) { goto L_801006FC; } // 801006E8
  c->r[4]=0u+0x00000002u; // 801006EC
  c->lr=0x801006F4u; f_80037670(c); // 801006F0
  cmps(c,0,(int32_t)c->r[3],0); // 801006F4
  if (!crb(c,2)) { goto L_80100738; } // 801006F8
L_801006FC:;
  c->r[0]=R16(c->r[30]+0x000003BEu); // 801006FC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80100700
  if (crb(c,2)) { goto L_80100738; } // 80100704
  c->r[31]=0u+0x80550000u; // 80100708
  {uint32_t ea=c->r[2]+0xFFFFAC80u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010070C
  c->r[31]=c->r[31]+0x00003D60u; // 80100710
  c->r[5]=c->r[30]|c->r[30]; // 80100714
  c->r[3]=c->r[31]+0x00000010u; // 80100718
  c->r[6]=c->r[30]+0x0000002Cu; // 8010071C
  c->r[7]=c->r[1]+0x00000008u; // 80100720
  c->r[4]=0u+0x000001FFu; // 80100724
  c->lr=0x8010072Cu; f_80226910(c); // 80100728
  c->r[3]=c->r[31]+0x00000010u; // 8010072C
  c->r[4]=c->r[1]+0x00000008u; // 80100730
  c->lr=0x80100738u; f_80226D68(c); // 80100734
L_80100738:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 80100738
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8010073C
  c->r[30]=R32(c->r[1]+0x00000068u); // 80100740
  c->lr=c->r[0]; // 80100744
  c->r[1]=c->r[1]+0x00000070u; // 80100748
  return; // 8010074C
}

// fn_80100750
void f_80100750(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100750
  c->r[0]=c->lr; // 80100754
  cmps(c,0,(int32_t)c->r[3],0); // 80100758
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010075C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80100760
  c->r[31]=c->r[4]|c->r[4]; // 80100764
  W32(c->r[1]+0x00000008u,c->r[30]); // 80100768
  c->r[30]=c->r[3]|c->r[3]; // 8010076C
  if (crb(c,2)) { goto L_8010078C; } // 80100770
  c->r[4]=0u+0x00000000u; // 80100774
  c->lr=0x8010077Cu; f_8026A06C(c); // 80100778
  cmps(c,0,(int32_t)c->r[31],0); // 8010077C
  if (!crb(c,1)) { goto L_8010078C; } // 80100780
  c->r[3]=c->r[30]|c->r[30]; // 80100784
  c->lr=0x8010078Cu; f_8026A268(c); // 80100788
L_8010078C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010078C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100790
  c->r[30]=R32(c->r[1]+0x00000008u); // 80100794
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100798
  c->lr=c->r[0]; // 8010079C
  c->r[1]=c->r[1]+0x00000010u; // 801007A0
  return; // 801007A4
}

// fn_801007A8
void f_801007A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801007A8
  c->r[0]=c->lr; // 801007AC
  c->r[4]=0u+0x00000000u; // 801007B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801007B4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801007B8
  W32(c->r[1]+0x00000028u,c->r[30]); // 801007BC
  c->r[30]=c->r[3]|c->r[3]; // 801007C0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801007C4
  c->lr=0x801007CCu; f_801F57D0(c); // 801007C8
  c->r[3]=c->r[30]|c->r[30]; // 801007CC
  c->r[4]=0u+0x00000001u; // 801007D0
  c->lr=0x801007D8u; f_801F57D0(c); // 801007D4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 801007D8
  c->r[3]=c->r[30]|c->r[30]; // 801007DC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801007E0
  c->ctr=c->r[12]; // 801007E4
  if (true) { c->lr=0x801007ECu; dispatch(c,c->ctr); } // 801007E8
  c->r[3]=c->r[30]|c->r[30]; // 801007EC
  c->lr=0x801007F4u; f_801F4B94(c); // 801007F0
  c->r[3]=0u+0x00000003u; // 801007F4
  c->r[0]=0u+0x00000071u; // 801007F8
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 801007FC
  c->r[3]=c->r[30]|c->r[30]; // 80100800
  c->r[4]=R32(c->r[30]+0x00000394u); // 80100804
  W8(c->r[30]+0x0000006Du,c->r[0]); // 80100808
  c->lr=0x80100810u; f_801F58BC(c); // 8010080C
  c->r[3]=R32(c->r[30]+0x00000394u); // 80100810
  c->r[29]=0u+0x00000001u; // 80100814
  c->r[31]=0u+0x803A0000u; // 80100818
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 8010081C
  c->r[4]=c->r[31]+0xFFFFF3D8u; // 80100820
  c->r[3]=R32(c->r[30]+0x00000394u); // 80100824
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80100828
  c->lr=0x80100830u; f_80256EC4(c); // 8010082C
  c->r[6]=R32(c->r[30]+0x00000394u); // 80100830
  c->r[5]=0u+0x805D0000u; // 80100834
  c->r[4]=c->r[30]+0x0000002Cu; // 80100838
  W32(c->r[6]+0x000000E4u,c->r[3]); // 8010083C
  c->r[3]=c->r[5]+0x000078B0u; // 80100840
  c->lr=0x80100848u; f_802351CC(c); // 80100844
  c->r[5]=R32(c->r[30]+0x00000394u); // 80100848
  c->r[4]=0u+0x00000000u; // 8010084C
  {uint32_t ea=c->r[2]+0xFFFFAC90u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100850
  W8(c->r[5]+0x0000001Du,c->r[3]); // 80100854
  c->r[3]=c->r[30]|c->r[30]; // 80100858
  c->f[2]=c->f[1]; // 8010085C
  c->r[5]=0u+0x00000001u; // 80100860
  c->r[0]=R16(c->r[30]+0x000003BEu); // 80100864
  W8(c->r[30]+0x0000006Fu,c->r[29]); // 80100868
  c->r[0]=c->r[0]|0x00000004u; // 8010086C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 80100870
  c->r[12]=R32(c->r[30]+0x000000B0u); // 80100874
  c->r[12]=R32(c->r[12]+0x00000048u); // 80100878
  c->ctr=c->r[12]; // 8010087C
  if (true) { c->lr=0x80100884u; dispatch(c,c->ctr); } // 80100880
  c->r[3]=R32(c->r[30]+0x00000394u); // 80100884
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80100888
  c->lr=0x80100890u; f_802501B0(c); // 8010088C
  c->r[3]=c->r[30]|c->r[30]; // 80100890
  c->lr=0x80100898u; f_801F56F4(c); // 80100894
  c->r[4]=R32(c->r[30]+0x00000398u); // 80100898
  c->r[3]=c->r[30]|c->r[30]; // 8010089C
  c->lr=0x801008A4u; f_801F58BC(c); // 801008A0
  c->r[3]=R32(c->r[30]+0x00000398u); // 801008A4
  c->r[29]=0u+0x00000000u; // 801008A8
  c->r[4]=c->r[31]+0xFFFFF3D8u; // 801008AC
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 801008B0
  c->r[3]=R32(c->r[30]+0x00000398u); // 801008B4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 801008B8
  c->lr=0x801008C0u; f_80256EC4(c); // 801008BC
  c->r[5]=R32(c->r[30]+0x00000398u); // 801008C0
  c->r[6]=0u+0x803A0000u; // 801008C4
  c->r[4]=c->r[1]+0x00000008u; // 801008C8
  W32(c->r[5]+0x000000E4u,c->r[3]); // 801008CC
  {uint32_t ea=c->r[6]+0xFFFFF374u; c->r[5]=R32(ea); c->r[6]=ea;} // 801008D0
  c->r[3]=R32(c->r[6]+0x00000004u); // 801008D4
  c->r[0]=R32(c->r[6]+0x00000008u); // 801008D8
  W32(c->r[1]+0x00000008u,c->r[5]); // 801008DC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801008E0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801008E4
  c->r[3]=R32(c->r[30]+0x00000398u); // 801008E8
  c->r[3]=c->r[3]+0x00000074u; // 801008EC
  c->lr=0x801008F4u; f_800361A0(c); // 801008F0
  {uint32_t ea=c->r[2]+0xFFFFAC90u; c->f[1]=c->ps1[1]=RF32(ea);} // 801008F4
  c->r[4]=0u+0x000000B6u; // 801008F8
  c->r[5]=R32(c->r[30]+0x00000398u); // 801008FC
  c->f[2]=c->f[1]; // 80100900
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 80100904
  c->r[5]=R32(c->r[5]+0x00000034u); // 80100908
  c->lr=0x80100910u; f_8024FEAC(c); // 8010090C
  c->r[3]=R32(c->r[30]+0x00000398u); // 80100910
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80100914
  c->lr=0x8010091Cu; f_802501B0(c); // 80100918
  c->r[5]=R32(c->r[30]+0x00000394u); // 8010091C
  c->r[3]=c->r[30]|c->r[30]; // 80100920
  c->r[4]=R32(c->r[30]+0x00000398u); // 80100924
  c->r[0]=R8(c->r[5]+0x0000001Du); // 80100928
  W8(c->r[4]+0x0000001Du,c->r[0]); // 8010092C
  W8(c->r[30]+0x00000076u,c->r[29]); // 80100930
  c->r[12]=R32(c->r[30]+0x000000B0u); // 80100934
  c->r[12]=R32(c->r[12]+0x00000050u); // 80100938
  c->ctr=c->r[12]; // 8010093C
  if (true) { c->lr=0x80100944u; dispatch(c,c->ctr); } // 80100940
  {uint32_t ea=c->r[2]+0xFFFFAC90u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100944
  c->r[3]=c->r[30]+0x0000000Cu; // 80100948
  c->lr=0x80100950u; f_80037668(c); // 8010094C
  c->r[3]=R32(c->r[30]+0x00000394u); // 80100950
  c->r[31]=c->r[31]+0xFFFFF3D8u; // 80100954
  c->r[4]=c->r[31]+0x00000009u; // 80100958
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 8010095C
  c->lr=0x80100964u; f_80256EC4(c); // 80100960
  W8(c->r[30]+0x00000074u,c->r[3]); // 80100964
  c->r[4]=c->r[31]|c->r[31]; // 80100968
  c->r[3]=R32(c->r[30]+0x00000398u); // 8010096C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80100970
  c->lr=0x80100978u; f_80256EC4(c); // 80100974
  W8(c->r[30]+0x00000075u,c->r[3]); // 80100978
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8010097C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80100980
  c->r[29]=R32(c->r[1]+0x00000024u); // 80100984
  c->r[0]=R32(c->r[1]+0x00000034u); // 80100988
  c->lr=c->r[0]; // 8010098C
  c->r[1]=c->r[1]+0x00000030u; // 80100990
  return; // 80100994
}

// fn_80100998
void f_80100998(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100998
  c->r[0]=c->lr; // 8010099C
  c->r[5]=0u+0x00000000u; // 801009A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801009A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801009A8
  c->r[31]=c->r[3]|c->r[3]; // 801009AC
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 801009B0
  c->r[4]=R32(c->r[3]+0x00000394u); // 801009B4
  c->r[3]=c->r[13]+0xFFFF8708u; // 801009B8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801009BC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801009C0
  c->r[4]=c->r[4]+0x0000010Cu; // 801009C4
  c->lr=0x801009CCu; f_8024EE50(c); // 801009C8
  cmps(c,0,(int32_t)c->r[3],0); // 801009CC
  if (crb(c,2)) { goto L_801009DC; } // 801009D0
  c->r[3]=0u+0x00000000u; // 801009D4
  goto L_801009F8; // 801009D8
L_801009DC:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 801009DC
  c->r[3]=0u+0x000000C9u; // 801009E0
  c->r[5]=0u+0x00000000u; // 801009E4
  c->r[4]=c->r[4]+0x0000010Cu; // 801009E8
  c->lr=0x801009F0u; f_8024EE50(c); // 801009EC
  c->r[0]=cntlz(c->r[3]); // 801009F0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801009F4
L_801009F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801009F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801009FC
  c->lr=c->r[0]; // 80100A00
  c->r[1]=c->r[1]+0x00000010u; // 80100A04
  return; // 80100A08
}

// fn_80100A0C
void f_80100A0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100A0C
  c->r[0]=c->lr; // 80100A10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100A14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80100A18
  c->r[31]=c->r[3]|c->r[3]; // 80100A1C
  c->lr=0x80100A24u; f_80100B80(c); // 80100A20
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80100A24
  c->r[3]=c->r[31]|c->r[31]; // 80100A28
  c->r[12]=R32(c->r[12]+0x00000068u); // 80100A2C
  c->ctr=c->r[12]; // 80100A30
  if (true) { c->lr=0x80100A38u; dispatch(c,c->ctr); } // 80100A34
  c->r[3]=c->r[31]|c->r[31]; // 80100A38
  c->lr=0x80100A40u; f_801F4C0C(c); // 80100A3C
  c->r[3]=0u+0x805D0000u; // 80100A40
  c->r[3]=c->r[3]+0x00003F6Cu; // 80100A44
  c->lr=0x80100A4Cu; f_80037AF0(c); // 80100A48
  cmpu(c,0,c->r[3],c->r[31]); // 80100A4C
  if (crb(c,2)) { goto L_80100A5C; } // 80100A50
  c->r[3]=c->r[31]|c->r[31]; // 80100A54
  c->lr=0x80100A5Cu; f_80100B88(c); // 80100A58
L_80100A5C:;
  c->r[3]=c->r[31]|c->r[31]; // 80100A5C
  c->lr=0x80100A64u; f_801F56F4(c); // 80100A60
  c->r[3]=c->r[31]|c->r[31]; // 80100A64
  c->lr=0x80100A6Cu; f_80100B8C(c); // 80100A68
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100A6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100A70
  c->lr=c->r[0]; // 80100A74
  c->r[1]=c->r[1]+0x00000010u; // 80100A78
  return; // 80100A7C
}

// fn_80100A80
void f_80100A80(Ctx* __restrict c) {
  f_801F4C78(c); return; // 80100A80
}

// fn_80100A84
void f_80100A84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100A84
  c->r[0]=c->lr; // 80100A88
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100A8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80100A90
  c->r[31]=c->r[3]|c->r[3]; // 80100A94
  c->r[4]=R32(c->r[3]+0x00000394u); // 80100A98
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 80100A9C
  c->lr=0x80100AA4u; f_802501B0(c); // 80100AA0
  c->r[3]=R32(c->r[31]+0x00000398u); // 80100AA4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80100AA8
  c->lr=0x80100AB0u; f_802501B0(c); // 80100AAC
  c->r[3]=c->r[31]|c->r[31]; // 80100AB0
  c->r[4]=0u+0x00000000u; // 80100AB4
  c->lr=0x80100ABCu; f_801F5244(c); // 80100AB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100ABC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100AC0
  c->lr=c->r[0]; // 80100AC4
  c->r[1]=c->r[1]+0x00000010u; // 80100AC8
  return; // 80100ACC
}

// fn_80100AD0
void f_80100AD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100AD0
  c->r[0]=c->lr; // 80100AD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100AD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80100ADC
  c->r[31]=c->r[3]|c->r[3]; // 80100AE0
  c->lr=0x80100AE8u; f_801F51B8(c); // 80100AE4
  c->r[7]=0u+0x803D0000u; // 80100AE8
  {uint32_t ea=c->r[7]+0x00006108u; c->r[6]=R32(ea); c->r[7]=ea;} // 80100AEC
  c->r[3]=c->r[31]|c->r[31]; // 80100AF0
  c->r[4]=c->r[1]+0x00000008u; // 80100AF4
  c->r[5]=R32(c->r[7]+0x00000004u); // 80100AF8
  c->r[0]=R32(c->r[7]+0x00000008u); // 80100AFC
  W32(c->r[1]+0x00000008u,c->r[6]); // 80100B00
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80100B04
  W32(c->r[1]+0x00000010u,c->r[0]); // 80100B08
  c->lr=0x80100B10u; f_80100B24(c); // 80100B0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100B10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80100B14
  c->lr=c->r[0]; // 80100B18
  c->r[1]=c->r[1]+0x00000020u; // 80100B1C
  return; // 80100B20
}

// fn_80100B24
void f_80100B24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100B24
  c->r[0]=c->lr; // 80100B28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100B2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80100B30
  c->r[31]=c->r[4]|c->r[4]; // 80100B34
  W32(c->r[1]+0x00000008u,c->r[30]); // 80100B38
  c->r[30]=c->r[3]|c->r[3]; // 80100B3C
  c->r[3]=c->r[31]|c->r[31]; // 80100B40
  c->lr=0x80100B48u; f_802B9FDC(c); // 80100B44
  cmps(c,0,(int32_t)c->r[3],0); // 80100B48
  if (crb(c,2)) { goto L_80100B68; } // 80100B4C
  c->r[3]=R32(c->r[31]+0x00000000u); // 80100B50
  c->r[0]=R32(c->r[31]+0x00000004u); // 80100B54
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 80100B58
  W32(c->r[30]+0x00000020u,c->r[0]); // 80100B5C
  c->r[0]=R32(c->r[31]+0x00000008u); // 80100B60
  W32(c->r[30]+0x00000024u,c->r[0]); // 80100B64
L_80100B68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100B68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100B6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80100B70
  c->lr=c->r[0]; // 80100B74
  c->r[1]=c->r[1]+0x00000010u; // 80100B78
  return; // 80100B7C
}

// fn_80100B80
void f_80100B80(Ctx* __restrict c) {
  return; // 80100B80
}

// fn_80100B84
void f_80100B84(Ctx* __restrict c) {
  f_801F4F28(c); return; // 80100B84
}

// fn_80100B88
void f_80100B88(Ctx* __restrict c) {
  return; // 80100B88
}

// fn_80100B8C
void f_80100B8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100B8C
  c->r[0]=c->lr; // 80100B90
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80100B94
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 80100B98
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 80100B9C
  c->r[7]=0u+0x803A0000u; // 80100BA0
  c->r[7]=c->r[7]+0xFFFFF338u; // 80100BA4
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80100BA8
  c->r[31]=c->r[3]|c->r[3]; // 80100BAC
  W32(c->r[1]+0x00000098u,c->r[30]); // 80100BB0
  c->r[0]=R16(c->r[3]+0x000003BEu); // 80100BB4
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 80100BB8
  if (crb(c,2)) { goto L_80100DC0; } // 80100BBC
  c->r[4]=R32(c->r[3]+0x00000398u); // 80100BC0
  c->r[0]=R8(c->r[4]+0x0000001Cu); // 80100BC4
  cmps(c,0,(int32_t)c->r[0],0); // 80100BC8
  if (!crb(c,2)) { goto L_80100BE4; } // 80100BCC
  c->r[0]=0u+0x00000001u; // 80100BD0
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 80100BD4
  c->r[0]=R16(c->r[3]+0x000003BEu); // 80100BD8
  c->r[0]=rotl(c->r[0],18)&0x00000001u; // 80100BDC
  W8(c->r[3]+0x00000076u,c->r[0]); // 80100BE0
L_80100BE4:;
  c->r[4]=c->r[7]+0x00000000u; // 80100BE4
  c->r[6]=R32(c->r[7]+0x00000000u); // 80100BE8
  c->r[5]=R32(c->r[4]+0x00000004u); // 80100BEC
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100BF0
  W32(c->r[1]+0x00000050u,c->r[6]); // 80100BF4
  W32(c->r[1]+0x00000054u,c->r[5]); // 80100BF8
  W32(c->r[1]+0x00000058u,c->r[0]); // 80100BFC
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 80100C00
  cmps(c,0,(int32_t)c->r[0],0); // 80100C04
  if (!crb(c,2)) { goto L_80100C78; } // 80100C08
  c->r[0]=R8(c->r[3]+0x00000076u); // 80100C0C
  cmps(c,0,(int32_t)c->r[0],0); // 80100C10
  if (!crb(c,2)) { goto L_80100C48; } // 80100C14
  c->r[4]=c->r[7]+0x00000048u; // 80100C18
  c->r[6]=R32(c->r[7]+0x00000048u); // 80100C1C
  c->r[5]=R32(c->r[4]+0x00000004u); // 80100C20
  c->r[3]=c->r[1]+0x00000050u; // 80100C24
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100C28
  c->r[4]=c->r[1]+0x00000044u; // 80100C2C
  W32(c->r[1]+0x00000044u,c->r[6]); // 80100C30
  W32(c->r[1]+0x00000048u,c->r[5]); // 80100C34
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80100C38
  c->lr=0x80100C40u; f_800361A0(c); // 80100C3C
  {uint32_t ea=c->r[2]+0xFFFFAC94u; c->f[31]=c->ps1[31]=RF32(ea);} // 80100C40
  goto L_80100CE0; // 80100C44
L_80100C48:;
  c->r[4]=c->r[7]+0x00000054u; // 80100C48
  c->r[6]=R32(c->r[7]+0x00000054u); // 80100C4C
  c->r[5]=R32(c->r[4]+0x00000004u); // 80100C50
  c->r[3]=c->r[1]+0x00000050u; // 80100C54
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100C58
  c->r[4]=c->r[1]+0x00000038u; // 80100C5C
  W32(c->r[1]+0x00000038u,c->r[6]); // 80100C60
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 80100C64
  W32(c->r[1]+0x00000040u,c->r[0]); // 80100C68
  c->lr=0x80100C70u; f_800361A0(c); // 80100C6C
  {uint32_t ea=c->r[2]+0xFFFFAC90u; c->f[31]=c->ps1[31]=RF32(ea);} // 80100C70
  goto L_80100CE0; // 80100C74
L_80100C78:;
  c->r[0]=R8(c->r[3]+0x00000076u); // 80100C78
  cmps(c,0,(int32_t)c->r[0],0); // 80100C7C
  if (!crb(c,2)) { goto L_80100CB4; } // 80100C80
  c->r[4]=c->r[7]+0x00000060u; // 80100C84
  c->r[6]=R32(c->r[7]+0x00000060u); // 80100C88
  c->r[5]=R32(c->r[4]+0x00000004u); // 80100C8C
  c->r[3]=c->r[1]+0x00000050u; // 80100C90
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100C94
  c->r[4]=c->r[1]+0x0000002Cu; // 80100C98
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 80100C9C
  W32(c->r[1]+0x00000030u,c->r[5]); // 80100CA0
  W32(c->r[1]+0x00000034u,c->r[0]); // 80100CA4
  c->lr=0x80100CACu; f_800361A0(c); // 80100CA8
  {uint32_t ea=c->r[2]+0xFFFFAC90u; c->f[31]=c->ps1[31]=RF32(ea);} // 80100CAC
  goto L_80100CE0; // 80100CB0
L_80100CB4:;
  c->r[4]=c->r[7]+0x0000006Cu; // 80100CB4
  c->r[6]=R32(c->r[7]+0x0000006Cu); // 80100CB8
  c->r[5]=R32(c->r[4]+0x00000004u); // 80100CBC
  c->r[3]=c->r[1]+0x00000050u; // 80100CC0
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100CC4
  c->r[4]=c->r[1]+0x00000020u; // 80100CC8
  W32(c->r[1]+0x00000020u,c->r[6]); // 80100CCC
  W32(c->r[1]+0x00000024u,c->r[5]); // 80100CD0
  W32(c->r[1]+0x00000028u,c->r[0]); // 80100CD4
  c->lr=0x80100CDCu; f_800361A0(c); // 80100CD8
  {uint32_t ea=c->r[2]+0xFFFFAC94u; c->f[31]=c->ps1[31]=RF32(ea);} // 80100CDC
L_80100CE0:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80100CE0
  c->r[5]=c->r[1]+0x00000060u; // 80100CE4
  c->r[4]=R8(c->r[31]+0x00000074u); // 80100CE8
  c->r[6]=0u+0x00000001u; // 80100CEC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80100CF0
  c->lr=0x80100CF8u; f_80257074(c); // 80100CF4
  c->r[4]=c->r[1]+0x00000050u; // 80100CF8
  c->r[3]=c->r[1]+0x00000060u; // 80100CFC
  c->r[5]=c->r[4]|c->r[4]; // 80100D00
  c->lr=0x80100D08u; f_80296750(c); // 80100D04
  c->r[3]=R32(c->r[31]+0x00000398u); // 80100D08
  c->r[4]=c->r[1]+0x00000050u; // 80100D0C
  c->r[3]=c->r[3]+0x0000005Cu; // 80100D10
  c->lr=0x80100D18u; f_800361A0(c); // 80100D14
  c->r[3]=R32(c->r[31]+0x00000398u); // 80100D18
  c->r[4]=c->r[31]+0x00000060u; // 80100D1C
  c->r[3]=c->r[3]+0x00000068u; // 80100D20
  c->lr=0x80100D28u; f_800361A0(c); // 80100D24
  c->r[3]=R32(c->r[31]+0x00000398u); // 80100D28
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80100D2C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 80100D30
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 80100D34
  c->r[3]=R32(c->r[31]+0x00000398u); // 80100D38
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 80100D3C
  cmps(c,0,(int32_t)c->r[0],0); // 80100D40
  if (crb(c,2)) { goto L_80100D5C; } // 80100D44
  c->r[0]=R8(c->r[3]+0x0000014Du); // 80100D48
  cmps(c,0,(int32_t)c->r[0],0); // 80100D4C
  if (!crb(c,2)) { goto L_80100D5C; } // 80100D50
  c->r[4]=c->r[3]+0x000000B0u; // 80100D54
  c->lr=0x80100D5Cu; f_80250F18(c); // 80100D58
L_80100D5C:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 80100D5C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80100D60
  c->lr=0x80100D68u; f_8025037C(c); // 80100D64
  c->r[6]=R32(c->r[31]+0x00000398u); // 80100D68
  c->r[30]=0u+0x805D0000u; // 80100D6C
  c->r[3]=c->r[30]+0x00003F6Cu; // 80100D70
  c->r[4]=c->r[1]+0x00000014u; // 80100D74
  c->r[5]=R32(c->r[6]+0x0000005Cu); // 80100D78
  c->r[0]=R32(c->r[6]+0x00000060u); // 80100D7C
  W32(c->r[1]+0x00000014u,c->r[5]); // 80100D80
  W32(c->r[1]+0x00000018u,c->r[0]); // 80100D84
  c->r[0]=R32(c->r[6]+0x00000064u); // 80100D88
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80100D8C
  c->lr=0x80100D94u; f_80038D04(c); // 80100D90
  c->r[6]=R32(c->r[31]+0x00000398u); // 80100D94
  c->r[3]=c->r[30]+0x00003F6Cu; // 80100D98
  c->r[4]=c->r[1]+0x00000008u; // 80100D9C
  c->r[5]=R32(c->r[6]+0x00000068u); // 80100DA0
  c->r[0]=R32(c->r[6]+0x0000006Cu); // 80100DA4
  W32(c->r[1]+0x00000008u,c->r[5]); // 80100DA8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80100DAC
  c->r[0]=R32(c->r[6]+0x00000070u); // 80100DB0
  W32(c->r[1]+0x00000010u,c->r[0]); // 80100DB4
  c->lr=0x80100DBCu; f_800BEDA4(c); // 80100DB8
  goto L_80100DD8; // 80100DBC
L_80100DC0:;
  c->r[3]=R32(c->r[3]+0x00000398u); // 80100DC0
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 80100DC4
  cmpu(c,0,c->r[0],0x00000001u); // 80100DC8
  if (!crb(c,2)) { goto L_80100DD8; } // 80100DCC
  c->r[0]=0u+0x00000000u; // 80100DD0
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 80100DD4
L_80100DD8:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 80100DD8
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80100DDC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 80100DE0
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80100DE4
  c->r[30]=R32(c->r[1]+0x00000098u); // 80100DE8
  c->lr=c->r[0]; // 80100DEC
  c->r[1]=c->r[1]+0x000000B0u; // 80100DF0
  return; // 80100DF4
}

// fn_80100DF8
void f_80100DF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100DF8
  c->r[0]=c->lr; // 80100DFC
  cmps(c,0,(int32_t)c->r[3],0); // 80100E00
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100E04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80100E08
  c->r[31]=c->r[4]|c->r[4]; // 80100E0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80100E10
  c->r[30]=c->r[3]|c->r[3]; // 80100E14
  if (crb(c,2)) { goto L_80100E34; } // 80100E18
  c->r[4]=0u+0x00000000u; // 80100E1C
  c->lr=0x80100E24u; f_8026A06C(c); // 80100E20
  cmps(c,0,(int32_t)c->r[31],0); // 80100E24
  if (!crb(c,1)) { goto L_80100E34; } // 80100E28
  c->r[3]=c->r[30]|c->r[30]; // 80100E2C
  c->lr=0x80100E34u; f_8026A268(c); // 80100E30
L_80100E34:;
  c->r[3]=c->r[30]|c->r[30]; // 80100E34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100E38
  c->r[30]=R32(c->r[1]+0x00000008u); // 80100E3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100E40
  c->lr=c->r[0]; // 80100E44
  c->r[1]=c->r[1]+0x00000010u; // 80100E48
  return; // 80100E4C
}

// fn_80100E50
void f_80100E50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100E50
  c->r[0]=c->lr; // 80100E54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100E58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80100E5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80100E60
  c->r[30]=c->r[3]|c->r[3]; // 80100E64
  c->lr=0x80100E6Cu; f_801F4B94(c); // 80100E68
  c->r[3]=0u+0x00000003u; // 80100E6C
  c->r[0]=0u+0x00000072u; // 80100E70
  c->r[31]=0u+0x00000000u; // 80100E74
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 80100E78
  {uint32_t ea=c->r[2]+0xFFFFACA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100E7C
  c->r[3]=c->r[30]+0x0000000Cu; // 80100E80
  W8(c->r[30]+0x0000006Du,c->r[0]); // 80100E84
  W8(c->r[30]+0x00000028u,c->r[31]); // 80100E88
  c->lr=0x80100E90u; f_80037668(c); // 80100E8C
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 80100E90
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 80100E94
  cmps(c,0,(int32_t)c->r[0],1); // 80100E98
  if (crb(c,2)) { goto L_80100EBC; } // 80100E9C
  if (!crb(c,0)) { goto L_80100EC4; } // 80100EA0
  cmps(c,0,(int32_t)c->r[0],0); // 80100EA4
  if (!crb(c,0)) { goto L_80100EB0; } // 80100EA8
  goto L_80100EC4; // 80100EAC
L_80100EB0:;
  c->r[0]=0u+0x00000001u; // 80100EB0
  W32(c->r[30]+0x0000044Cu,c->r[0]); // 80100EB4
  goto L_80100EC4; // 80100EB8
L_80100EBC:;
  c->r[0]=0u+0x0000000Cu; // 80100EBC
  W32(c->r[30]+0x0000044Cu,c->r[0]); // 80100EC0
L_80100EC4:;
  c->r[0]=R32(c->r[30]+0x0000044Cu); // 80100EC4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)1236); // 80100EC8
  c->lr=0x80100ED0u; f_8024E174(c); // 80100ECC
  W32(c->r[30]+0x00000440u,c->r[3]); // 80100ED0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100ED4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80100ED8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100EDC
  c->lr=c->r[0]; // 80100EE0
  c->r[1]=c->r[1]+0x00000010u; // 80100EE4
  return; // 80100EE8
}

// fn_80100EEC
void f_80100EEC(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 80100EEC
  cmps(c,0,(int32_t)c->r[0],1); // 80100EF0
  if (crb(c,2)) { goto L_80100F0C; } // 80100EF4
  if (!crb(c,0)) return; // 80100EF8
  cmps(c,0,(int32_t)c->r[0],0); // 80100EFC
  if (!crb(c,0)) { goto L_80100F08; } // 80100F00
  return; // 80100F04
L_80100F08:;
  f_80100F14(c); return; // 80100F08
L_80100F0C:;
  f_801010BC(c); return; // 80100F0C
  return; // 80100F10
}

// fn_80100F14
void f_80100F14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100F14
  c->r[0]=c->lr; // 80100F18
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100F1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80100F20
  W32(c->r[1]+0x00000018u,c->r[30]); // 80100F24
  c->r[30]=c->r[3]|c->r[3]; // 80100F28
  c->r[31]=R32(c->r[3]+0x00000074u); // 80100F2C
  cmps(c,0,(int32_t)c->r[31],0); // 80100F30
  if (crb(c,2)) { goto L_80101030; } // 80100F34
  c->r[3]=c->r[31]|c->r[31]; // 80100F38
  c->r[4]=c->r[1]+0x00000008u; // 80100F3C
  c->r[5]=0u+0x00000000u; // 80100F40
  c->lr=0x80100F48u; f_8007C6C8(c); // 80100F44
  c->r[0]=R32(c->r[1]+0x00000008u); // 80100F48
  cmps(c,0,(int32_t)c->r[0],0); // 80100F4C
  if (!crb(c,2)) { goto L_80100F78; } // 80100F50
  cmps(c,0,(int32_t)c->r[30],0); // 80100F54
  if (crb(c,2)) { goto L_8010104C; } // 80100F58
  c->r[12]=R32(c->r[30]+0x000000B0u); // 80100F5C
  c->r[3]=c->r[30]|c->r[30]; // 80100F60
  c->r[4]=0u+0x00000001u; // 80100F64
  c->r[12]=R32(c->r[12]+0x00000008u); // 80100F68
  c->ctr=c->r[12]; // 80100F6C
  if (true) { c->lr=0x80100F74u; dispatch(c,c->ctr); } // 80100F70
  goto L_8010104C; // 80100F74
L_80100F78:;
  c->r[3]=c->r[31]|c->r[31]; // 80100F78
  c->r[4]=0u+0x00000000u; // 80100F7C
  c->lr=0x80100F84u; f_80039840(c); // 80100F80
  c->r[4]=R8(c->r[30]+0x00000028u); // 80100F84
  c->r[31]=c->r[3]|c->r[3]; // 80100F88
  cmps(c,0,(int32_t)c->r[4],1); // 80100F8C
  if (crb(c,2)) { goto L_80100FBC; } // 80100F90
  if (!crb(c,0)) { goto L_80100FA4; } // 80100F94
  cmps(c,0,(int32_t)c->r[4],0); // 80100F98
  if (!crb(c,0)) { goto L_80100FB0; } // 80100F9C
  goto L_8010104C; // 80100FA0
L_80100FA4:;
  cmps(c,0,(int32_t)c->r[4],3); // 80100FA4
  if (!crb(c,0)) { goto L_8010104C; } // 80100FA8
  goto L_80100FFC; // 80100FAC
L_80100FB0:;
  c->r[0]=c->r[4]+0x00000001u; // 80100FB0
  W8(c->r[30]+0x00000028u,c->r[0]); // 80100FB4
  goto L_8010104C; // 80100FB8
L_80100FBC:;
  c->r[0]=c->r[4]+0x00000001u; // 80100FBC
  c->r[5]=0u+0x803A0000u; // 80100FC0
  c->r[5]=c->r[5]+0xFFFFF3E8u; // 80100FC4
  W8(c->r[30]+0x00000028u,c->r[0]); // 80100FC8
  c->r[3]=R32(c->r[30]+0x00000440u); // 80100FCC
  c->r[4]=c->r[31]|c->r[31]; // 80100FD0
  c->r[6]=c->r[5]+0x00000009u; // 80100FD4
  c->r[7]=0u+0x00000000u; // 80100FD8
  c->r[8]=0u+0x00000013u; // 80100FDC
  c->lr=0x80100FE4u; f_8022F210(c); // 80100FE0
  c->r[3]=R32(c->r[30]+0x00000440u); // 80100FE4
  {uint32_t ea=c->r[2]+0xFFFFACA4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100FE8
  c->lr=0x80100FF0u; f_8004BE40(c); // 80100FEC
  c->r[3]=R32(c->r[30]+0x00000440u); // 80100FF0
  {uint32_t ea=c->r[2]+0xFFFFACA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100FF4
  c->lr=0x80100FFCu; f_8004BE0C(c); // 80100FF8
L_80100FFC:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 80100FFC
  c->r[3]=R32(c->r[30]+0x00000440u); // 80101000
  c->r[4]=R8(c->r[4]+0x0000001Cu); // 80101004
  c->r[0]=0u-c->r[4]; // 80101008
  c->r[0]=c->r[0]|c->r[4]; // 8010100C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80101010
  c->lr=0x80101018u; f_8005DA20(c); // 80101014
  c->r[3]=R32(c->r[30]+0x00000440u); // 80101018
  c->r[4]=0u+0x00000000u; // 8010101C
  c->lr=0x80101024u; f_8022F3E8(c); // 80101020
  c->r[3]=c->r[31]|c->r[31]; // 80101024
  c->lr=0x8010102Cu; f_8025037C(c); // 80101028
  goto L_8010104C; // 8010102C
L_80101030:;
  cmps(c,0,(int32_t)c->r[3],0); // 80101030
  if (crb(c,2)) { goto L_8010104C; } // 80101034
  c->r[12]=R32(c->r[3]+0x000000B0u); // 80101038
  c->r[4]=0u+0x00000001u; // 8010103C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80101040
  c->ctr=c->r[12]; // 80101044
  if (true) { c->lr=0x8010104Cu; dispatch(c,c->ctr); } // 80101048
L_8010104C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010104C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80101050
  c->r[30]=R32(c->r[1]+0x00000018u); // 80101054
  c->lr=c->r[0]; // 80101058
  c->r[1]=c->r[1]+0x00000020u; // 8010105C
  return; // 80101060
}

// fn_80101064
void f_80101064(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101064
  c->r[0]=c->lr; // 80101068
  cmps(c,0,(int32_t)c->r[3],0); // 8010106C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101070
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80101074
  c->r[31]=c->r[4]|c->r[4]; // 80101078
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010107C
  c->r[30]=c->r[3]|c->r[3]; // 80101080
  if (crb(c,2)) { goto L_801010A0; } // 80101084
  c->r[4]=0u+0x00000000u; // 80101088
  c->lr=0x80101090u; f_8026A06C(c); // 8010108C
  cmps(c,0,(int32_t)c->r[31],0); // 80101090
  if (!crb(c,1)) { goto L_801010A0; } // 80101094
  c->r[3]=c->r[30]|c->r[30]; // 80101098
  c->lr=0x801010A0u; f_8026A268(c); // 8010109C
L_801010A0:;
  c->r[3]=c->r[30]|c->r[30]; // 801010A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801010A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801010A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801010AC
  c->lr=c->r[0]; // 801010B0
  c->r[1]=c->r[1]+0x00000010u; // 801010B4
  return; // 801010B8
}

// fn_801010BC
void f_801010BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801010BC
  c->r[0]=c->lr; // 801010C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801010C4
  c->r[11]=c->r[1]+0x00000030u; // 801010C8
  c->lr=0x801010D0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801010CC
  c->r[0]=R32(c->r[3]+0x00000074u); // 801010D0
  c->r[30]=c->r[3]|c->r[3]; // 801010D4
  cmps(c,0,(int32_t)c->r[0],0); // 801010D8
  if (crb(c,2)) { goto L_801014C0; } // 801010DC
  c->r[3]=c->r[0]|c->r[0]; // 801010E0
  c->r[4]=c->r[1]+0x00000008u; // 801010E4
  c->r[5]=0u+0x00000000u; // 801010E8
  c->lr=0x801010F0u; f_8007C6C8(c); // 801010EC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801010F0
  cmps(c,0,(int32_t)c->r[0],0); // 801010F4
  if (!crb(c,2)) { goto L_80101120; } // 801010F8
  cmps(c,0,(int32_t)c->r[30],0); // 801010FC
  if (crb(c,2)) { goto L_801014DC; } // 80101100
  c->r[12]=R32(c->r[30]+0x000000B0u); // 80101104
  c->r[3]=c->r[30]|c->r[30]; // 80101108
  c->r[4]=0u+0x00000001u; // 8010110C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80101110
  c->ctr=c->r[12]; // 80101114
  if (true) { c->lr=0x8010111Cu; dispatch(c,c->ctr); } // 80101118
  goto L_801014DC; // 8010111C
L_80101120:;
  c->r[3]=R8(c->r[30]+0x00000028u); // 80101120
  cmps(c,0,(int32_t)c->r[3],1); // 80101124
  if (crb(c,2)) { goto L_80101154; } // 80101128
  if (!crb(c,0)) { goto L_8010113C; } // 8010112C
  cmps(c,0,(int32_t)c->r[3],0); // 80101130
  if (!crb(c,0)) { goto L_80101148; } // 80101134
  goto L_801014DC; // 80101138
L_8010113C:;
  cmps(c,0,(int32_t)c->r[3],3); // 8010113C
  if (!crb(c,0)) { goto L_801014DC; } // 80101140
  goto L_8010144C; // 80101144
L_80101148:;
  c->r[0]=c->r[3]+0x00000001u; // 80101148
  W8(c->r[30]+0x00000028u,c->r[0]); // 8010114C
  goto L_801014DC; // 80101150
L_80101154:;
  c->r[0]=c->r[3]+0x00000001u; // 80101154
  c->r[31]=0u+0x803A0000u; // 80101158
  W8(c->r[30]+0x00000028u,c->r[0]); // 8010115C
  c->r[31]=c->r[31]+0xFFFFF3E8u; // 80101160
  c->r[3]=R32(c->r[30]+0x00000440u); // 80101164
  c->r[5]=c->r[31]+0x00000012u; // 80101168
  c->r[4]=R32(c->r[1]+0x00000008u); // 8010116C
  c->r[6]=c->r[31]+0x00000019u; // 80101170
  c->r[7]=0u+0x00000000u; // 80101174
  c->r[8]=0u+0x00000001u; // 80101178
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 8010117C
  c->lr=0x80101184u; f_8022F210(c); // 80101180
  c->r[3]=R32(c->r[30]+0x00000440u); // 80101184
  {uint32_t ea=c->r[2]+0xFFFFACACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80101188
  c->lr=0x80101190u; f_8004BE40(c); // 8010118C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80101190
  c->r[5]=c->r[31]+0x00000020u; // 80101194
  c->r[8]=R32(c->r[30]+0x00000440u); // 80101198
  c->r[6]=c->r[31]+0x00000027u; // 8010119C
  c->r[4]=R32(c->r[3]+0x0000010Cu); // 801011A0
  c->r[7]=0u+0x00000000u; // 801011A4
  c->r[3]=c->r[8]+0x000004D4u; // 801011A8
  c->r[8]=0u+0x00000001u; // 801011AC
  c->lr=0x801011B4u; f_8022F210(c); // 801011B0
  c->r[3]=R32(c->r[30]+0x00000440u); // 801011B4
  {uint32_t ea=c->r[2]+0xFFFFACA4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801011B8
  c->r[3]=c->r[3]+0x000004D4u; // 801011BC
  c->lr=0x801011C4u; f_8004BE40(c); // 801011C0
  c->r[3]=R32(c->r[30]+0x00000440u); // 801011C4
  {uint32_t ea=c->r[2]+0xFFFFACB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801011C8
  c->r[3]=c->r[3]+0x000004D4u; // 801011CC
  c->lr=0x801011D4u; f_8004BE0C(c); // 801011D0
  c->r[3]=R32(c->r[1]+0x00000008u); // 801011D4
  c->r[5]=c->r[31]+0x0000002Eu; // 801011D8
  c->r[8]=R32(c->r[30]+0x00000440u); // 801011DC
  c->r[6]=c->r[31]+0x00000035u; // 801011E0
  c->r[4]=R32(c->r[3]+0x0000010Cu); // 801011E4
  c->r[7]=0u+0x00000000u; // 801011E8
  c->r[3]=c->r[8]+0x000009A8u; // 801011EC
  c->r[8]=0u+0x00000001u; // 801011F0
  c->lr=0x801011F8u; f_8022F210(c); // 801011F4
  c->r[3]=R32(c->r[30]+0x00000440u); // 801011F8
  {uint32_t ea=c->r[2]+0xFFFFACA4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801011FC
  c->r[3]=c->r[3]+0x000009A8u; // 80101200
  c->lr=0x80101208u; f_8004BE40(c); // 80101204
  c->r[3]=R32(c->r[30]+0x00000440u); // 80101208
  {uint32_t ea=c->r[2]+0xFFFFACB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010120C
  c->r[3]=c->r[3]+0x000009A8u; // 80101210
  c->lr=0x80101218u; f_8004BE0C(c); // 80101214
  c->r[3]=R32(c->r[1]+0x00000008u); // 80101218
  c->r[5]=c->r[31]+0x0000003Cu; // 8010121C
  c->r[8]=R32(c->r[30]+0x00000440u); // 80101220
  c->r[6]=c->r[31]+0x00000043u; // 80101224
  c->r[4]=R32(c->r[3]+0x0000010Cu); // 80101228
  c->r[7]=0u+0x00000000u; // 8010122C
  c->r[3]=c->r[8]+0x00000E7Cu; // 80101230
  c->r[8]=0u+0x00000001u; // 80101234
  c->lr=0x8010123Cu; f_8022F210(c); // 80101238
  c->r[3]=R32(c->r[30]+0x00000440u); // 8010123C
  {uint32_t ea=c->r[2]+0xFFFFACACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80101240
  c->r[3]=c->r[3]+0x00000E7Cu; // 80101244
  c->lr=0x8010124Cu; f_8004BE40(c); // 80101248
  c->r[3]=R32(c->r[1]+0x00000008u); // 8010124C
  c->r[5]=c->r[31]+0x00000019u; // 80101250
  c->r[8]=R32(c->r[30]+0x00000440u); // 80101254
  c->r[6]=c->r[31]+0x0000004Au; // 80101258
  c->r[4]=R32(c->r[3]+0x0000010Cu); // 8010125C
  c->r[7]=0u+0x00000001u; // 80101260
  c->r[3]=c->r[8]+0x00001350u; // 80101264
  c->r[8]=0u+0x00000001u; // 80101268
  c->lr=0x80101270u; f_8022F210(c); // 8010126C
  c->r[3]=R32(c->r[30]+0x00000440u); // 80101270
  {uint32_t ea=c->r[2]+0xFFFFACACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80101274
  c->r[3]=c->r[3]+0x00001350u; // 80101278
  c->lr=0x80101280u; f_8004BE40(c); // 8010127C
  c->r[3]=R32(c->r[30]+0x00000440u); // 80101280
  {uint32_t ea=c->r[2]+0xFFFFACA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101284
  c->r[3]=c->r[3]+0x00001350u; // 80101288
  c->lr=0x80101290u; f_8004BE0C(c); // 8010128C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80101290
  c->r[5]=c->r[31]+0x00000027u; // 80101294
  c->r[8]=R32(c->r[30]+0x00000440u); // 80101298
  c->r[6]=c->r[31]+0x00000051u; // 8010129C
  c->r[4]=R32(c->r[3]+0x0000010Cu); // 801012A0
  c->r[7]=0u+0x00000001u; // 801012A4
  c->r[3]=c->r[8]+0x00001824u; // 801012A8
  c->r[8]=0u+0x00000001u; // 801012AC
  c->lr=0x801012B4u; f_8022F210(c); // 801012B0
  c->r[3]=R32(c->r[30]+0x00000440u); // 801012B4
  {uint32_t ea=c->r[2]+0xFFFFACB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801012B8
  c->r[3]=c->r[3]+0x00001824u; // 801012BC
  c->lr=0x801012C4u; f_8004BE40(c); // 801012C0
  c->r[3]=R32(c->r[1]+0x00000008u); // 801012C4
  c->r[5]=c->r[31]+0x00000035u; // 801012C8
  c->r[8]=R32(c->r[30]+0x00000440u); // 801012CC
  c->r[6]=c->r[31]+0x00000058u; // 801012D0
  c->r[4]=R32(c->r[3]+0x0000010Cu); // 801012D4
  c->r[7]=0u+0x00000001u; // 801012D8
  c->r[3]=c->r[8]+0x00001CF8u; // 801012DC
  c->r[8]=0u+0x00000001u; // 801012E0
  c->lr=0x801012E8u; f_8022F210(c); // 801012E4
  c->r[3]=R32(c->r[30]+0x00000440u); // 801012E8
  {uint32_t ea=c->r[2]+0xFFFFACB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801012EC
  c->r[3]=c->r[3]+0x00001CF8u; // 801012F0
  c->lr=0x801012F8u; f_8004BE40(c); // 801012F4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801012F8
  c->r[5]=c->r[31]+0x00000043u; // 801012FC
  c->r[8]=R32(c->r[30]+0x00000440u); // 80101300
  c->r[6]=c->r[31]+0x0000005Fu; // 80101304
  c->r[4]=R32(c->r[3]+0x0000010Cu); // 80101308
  c->r[7]=0u+0x00000001u; // 8010130C
  c->r[3]=c->r[8]+0x000021CCu; // 80101310
  c->r[8]=0u+0x00000001u; // 80101314
  c->lr=0x8010131Cu; f_8022F210(c); // 80101318
  c->r[3]=R32(c->r[30]+0x00000440u); // 8010131C
  {uint32_t ea=c->r[2]+0xFFFFACACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80101320
  c->r[3]=c->r[3]+0x000021CCu; // 80101324
  c->lr=0x8010132Cu; f_8004BE40(c); // 80101328
  c->r[3]=R32(c->r[30]+0x00000440u); // 8010132C
  {uint32_t ea=c->r[2]+0xFFFFACA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101330
  c->r[3]=c->r[3]+0x000021CCu; // 80101334
  c->lr=0x8010133Cu; f_8004BE0C(c); // 80101338
  c->r[3]=R32(c->r[1]+0x00000008u); // 8010133C
  c->r[5]=c->r[31]+0x0000004Au; // 80101340
  c->r[8]=R32(c->r[30]+0x00000440u); // 80101344
  c->r[6]=c->r[31]+0x00000066u; // 80101348
  c->r[4]=R32(c->r[3]+0x0000010Cu); // 8010134C
  c->r[7]=0u+0x00000000u; // 80101350
  c->r[3]=c->r[8]+0x000026A0u; // 80101354
  c->r[8]=0u+0x00000011u; // 80101358
  c->lr=0x80101360u; f_8022F210(c); // 8010135C
  c->r[3]=R32(c->r[30]+0x00000440u); // 80101360
  {uint32_t ea=c->r[2]+0xFFFFACB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101364
  c->r[3]=c->r[3]+0x000026A0u; // 80101368
  c->lr=0x80101370u; f_8004BE40(c); // 8010136C
  c->r[3]=R32(c->r[30]+0x00000440u); // 80101370
  {uint32_t ea=c->r[2]+0xFFFFACB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101374
  c->r[3]=c->r[3]+0x000026A0u; // 80101378
  c->lr=0x80101380u; f_8004BE0C(c); // 8010137C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80101380
  c->r[5]=c->r[31]+0x00000051u; // 80101384
  c->r[8]=R32(c->r[30]+0x00000440u); // 80101388
  c->r[6]=c->r[31]+0x0000006Du; // 8010138C
  c->r[4]=R32(c->r[3]+0x0000010Cu); // 80101390
  c->r[7]=0u+0x00000000u; // 80101394
  c->r[3]=c->r[8]+0x00002B74u; // 80101398
  c->r[8]=0u+0x00000011u; // 8010139C
  c->lr=0x801013A4u; f_8022F210(c); // 801013A0
  c->r[3]=R32(c->r[30]+0x00000440u); // 801013A4
  {uint32_t ea=c->r[2]+0xFFFFACACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801013A8
  c->r[3]=c->r[3]+0x00002B74u; // 801013AC
  c->lr=0x801013B4u; f_8004BE40(c); // 801013B0
  c->r[3]=R32(c->r[30]+0x00000440u); // 801013B4
  {uint32_t ea=c->r[2]+0xFFFFACB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801013B8
  c->r[3]=c->r[3]+0x00002B74u; // 801013BC
  c->lr=0x801013C4u; f_8004BE0C(c); // 801013C0
  c->r[3]=R32(c->r[1]+0x00000008u); // 801013C4
  c->r[5]=c->r[31]+0x00000058u; // 801013C8
  c->r[8]=R32(c->r[30]+0x00000440u); // 801013CC
  c->r[6]=c->r[31]+0x00000074u; // 801013D0
  c->r[4]=R32(c->r[3]+0x0000010Cu); // 801013D4
  c->r[7]=0u+0x00000000u; // 801013D8
  c->r[3]=c->r[8]+0x00003048u; // 801013DC
  c->r[8]=0u+0x00000011u; // 801013E0
  c->lr=0x801013E8u; f_8022F210(c); // 801013E4
  c->r[3]=R32(c->r[30]+0x00000440u); // 801013E8
  {uint32_t ea=c->r[2]+0xFFFFACACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801013EC
  c->r[3]=c->r[3]+0x00003048u; // 801013F0
  c->lr=0x801013F8u; f_8004BE40(c); // 801013F4
  c->r[3]=R32(c->r[30]+0x00000440u); // 801013F8
  {uint32_t ea=c->r[2]+0xFFFFACB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801013FC
  c->r[3]=c->r[3]+0x00003048u; // 80101400
  c->lr=0x80101408u; f_8004BE0C(c); // 80101404
  c->r[3]=R32(c->r[1]+0x00000008u); // 80101408
  c->r[5]=c->r[31]+0x0000005Fu; // 8010140C
  c->r[8]=R32(c->r[30]+0x00000440u); // 80101410
  c->r[6]=c->r[31]+0x0000007Bu; // 80101414
  c->r[4]=R32(c->r[3]+0x0000010Cu); // 80101418
  c->r[7]=0u+0x00000000u; // 8010141C
  c->r[3]=c->r[8]+0x0000351Cu; // 80101420
  c->r[8]=0u+0x00000011u; // 80101424
  c->lr=0x8010142Cu; f_8022F210(c); // 80101428
  c->r[3]=R32(c->r[30]+0x00000440u); // 8010142C
  {uint32_t ea=c->r[2]+0xFFFFACB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101430
  c->r[3]=c->r[3]+0x0000351Cu; // 80101434
  c->lr=0x8010143Cu; f_8004BE40(c); // 80101438
  c->r[3]=R32(c->r[30]+0x00000440u); // 8010143C
  {uint32_t ea=c->r[2]+0xFFFFACB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101440
  c->r[3]=c->r[3]+0x0000351Cu; // 80101444
  c->lr=0x8010144Cu; f_8004BE0C(c); // 80101448
L_8010144C:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8010144C
  c->r[27]=0u+0x00000000u; // 80101450
  c->r[29]=0u+0x00000000u; // 80101454
  c->r[3]=R8(c->r[3]+0x0000001Cu); // 80101458
  c->r[0]=0u-c->r[3]; // 8010145C
  c->r[0]=c->r[0]|c->r[3]; // 80101460
  c->r[28]=rotl(c->r[0],1)&0x00000001u; // 80101464
L_80101468:;
  c->r[31]=(uint32_t)((int32_t)c->r[29]*(int32_t)1236); // 80101468
  c->r[26]=0u+0x00000000u; // 8010146C
L_80101470:;
  c->r[0]=R32(c->r[30]+0x00000440u); // 80101470
  c->r[4]=c->r[28]|c->r[28]; // 80101474
  c->r[3]=c->r[0]+c->r[31]; // 80101478
  c->lr=0x80101480u; f_8005DA20(c); // 8010147C
  c->r[0]=R32(c->r[30]+0x00000440u); // 80101480
  c->r[4]=0u+0x00000000u; // 80101484
  c->r[3]=c->r[0]+c->r[31]; // 80101488
  c->lr=0x80101490u; f_8022F3E8(c); // 8010148C
  c->r[26]=c->r[26]+0x00000001u; // 80101490
  c->r[31]=c->r[31]+0x000004D4u; // 80101494
  cmpu(c,0,c->r[26],0x00000004u); // 80101498
  if (crb(c,0)) { IRQCHK(c); goto L_80101470; } // 8010149C
  c->r[3]=R32(c->r[1]+0x00000008u); // 801014A0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 801014A4
  c->lr=0x801014ACu; f_8025037C(c); // 801014A8
  c->r[27]=c->r[27]+0x00000001u; // 801014AC
  c->r[29]=c->r[29]+0x00000004u; // 801014B0
  cmps(c,0,(int32_t)c->r[27],3); // 801014B4
  if (crb(c,0)) { IRQCHK(c); goto L_80101468; } // 801014B8
  goto L_801014DC; // 801014BC
L_801014C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801014C0
  if (crb(c,2)) { goto L_801014DC; } // 801014C4
  c->r[12]=R32(c->r[3]+0x000000B0u); // 801014C8
  c->r[4]=0u+0x00000001u; // 801014CC
  c->r[12]=R32(c->r[12]+0x00000008u); // 801014D0
  c->ctr=c->r[12]; // 801014D4
  if (true) { c->lr=0x801014DCu; dispatch(c,c->ctr); } // 801014D8
L_801014DC:;
  c->r[11]=c->r[1]+0x00000030u; // 801014DC
  c->lr=0x801014E4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801014E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801014E4
  c->lr=c->r[0]; // 801014E8
  c->r[1]=c->r[1]+0x00000030u; // 801014EC
  return; // 801014F0
}

// fn_801014F4
void f_801014F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801014F4
  c->r[0]=c->lr; // 801014F8
  c->r[4]=0u+0x00000000u; // 801014FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80101500
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80101504
  c->r[31]=c->r[3]|c->r[3]; // 80101508
  W32(c->r[1]+0x00000028u,c->r[30]); // 8010150C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80101510
  c->lr=0x80101518u; f_801F57D0(c); // 80101514
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80101518
  c->r[3]=c->r[31]|c->r[31]; // 8010151C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80101520
  c->ctr=c->r[12]; // 80101524
  if (true) { c->lr=0x8010152Cu; dispatch(c,c->ctr); } // 80101528
  c->r[3]=c->r[31]|c->r[31]; // 8010152C
  c->lr=0x80101534u; f_801F4B94(c); // 80101530
  c->r[3]=0u+0x00000003u; // 80101534
  c->r[0]=0u+0x00000073u; // 80101538
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 8010153C
  c->r[3]=c->r[31]|c->r[31]; // 80101540
  c->r[4]=R32(c->r[31]+0x00000394u); // 80101544
  W8(c->r[31]+0x0000006Du,c->r[0]); // 80101548
  c->lr=0x80101550u; f_801F58BC(c); // 8010154C
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101550
  c->r[30]=0u+0x00000001u; // 80101554
  c->r[29]=0u+0x803A0000u; // 80101558
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 8010155C
  c->r[4]=c->r[29]+0xFFFFF470u; // 80101560
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101564
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101568
  c->lr=0x80101570u; f_80256EC4(c); // 8010156C
  c->r[6]=R32(c->r[31]+0x00000394u); // 80101570
  c->r[5]=0u+0x805D0000u; // 80101574
  c->r[4]=c->r[31]+0x0000002Cu; // 80101578
  W32(c->r[6]+0x000000E4u,c->r[3]); // 8010157C
  c->r[3]=c->r[5]+0x000078B0u; // 80101580
  c->lr=0x80101588u; f_802351CC(c); // 80101584
  c->r[5]=R32(c->r[31]+0x00000394u); // 80101588
  c->r[4]=0u+0x00000000u; // 8010158C
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101590
  W8(c->r[5]+0x0000001Du,c->r[3]); // 80101594
  c->r[3]=c->r[31]|c->r[31]; // 80101598
  c->f[2]=c->f[1]; // 8010159C
  c->r[5]=0u+0x00000001u; // 801015A0
  W8(c->r[31]+0x0000006Fu,c->r[30]); // 801015A4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 801015A8
  c->r[12]=R32(c->r[12]+0x00000048u); // 801015AC
  c->ctr=c->r[12]; // 801015B0
  if (true) { c->lr=0x801015B8u; dispatch(c,c->ctr); } // 801015B4
  c->r[3]=R32(c->r[31]+0x00000394u); // 801015B8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 801015BC
  c->lr=0x801015C4u; f_802501B0(c); // 801015C0
  c->r[30]=0u+0x00000000u; // 801015C4
  c->r[3]=c->r[31]+0x0000000Cu; // 801015C8
  W8(c->r[31]+0x00000028u,c->r[30]); // 801015CC
  c->r[4]=0u+0x00000000u; // 801015D0
  W8(c->r[31]+0x00000029u,c->r[30]); // 801015D4
  c->lr=0x801015DCu; f_80036430(c); // 801015D8
  c->r[3]=c->r[31]+0x00000010u; // 801015DC
  c->r[4]=0u+0x00000000u; // 801015E0
  c->lr=0x801015E8u; f_80036430(c); // 801015E4
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801015E8
  c->r[0]=0u+0x000000FFu; // 801015EC
  {uint32_t ea=c->r[2]+0xFFFFACC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801015F0
  c->r[3]=c->r[29]+0xFFFFF470u; // 801015F4
  W32(c->r[31]+0x00000088u,c->r[30]); // 801015F8
  c->r[4]=c->r[3]+0x00000009u; // 801015FC
  c->r[5]=R32(c->r[31]+0x00000394u); // 80101600
  W8(c->r[31]+0x00000085u,c->r[0]); // 80101604
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[1]);} // 80101608
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 8010160C
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 80101610
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 80101614
  W32(c->r[31]+0x0000008Cu,c->r[30]); // 80101618
  W32(c->r[31]+0x00000090u,c->r[30]); // 8010161C
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 80101620
  c->lr=0x80101628u; f_80256EC4(c); // 80101624
  W8(c->r[31]+0x00000084u,c->r[3]); // 80101628
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 8010162C
  c->r[6]=R32(c->r[31]+0x00000394u); // 80101630
  c->r[5]=c->r[1]+0x00000014u; // 80101634
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 80101638
  c->lr=0x80101640u; f_8025EA54(c); // 8010163C
  {uint32_t ea=c->r[31]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101640
  c->r[5]=c->r[1]+0x00000008u; // 80101644
  c->r[4]=R32(c->r[1]+0x00000014u); // 80101648
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8010164C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80101650
  c->r[3]=R32(c->r[1]+0x00000018u); // 80101654
  W32(c->r[1]+0x00000008u,c->r[4]); // 80101658
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8010165C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80101660
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101664
  c->r[4]=R8(c->r[31]+0x00000084u); // 80101668
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 8010166C
  c->lr=0x80101674u; f_8025E9C0(c); // 80101670
  c->r[3]=c->r[31]|c->r[31]; // 80101674
  c->lr=0x8010167Cu; f_801F56F4(c); // 80101678
  c->r[12]=R32(c->r[31]+0x000000B0u); // 8010167C
  c->r[3]=c->r[31]|c->r[31]; // 80101680
  c->r[12]=R32(c->r[12]+0x00000050u); // 80101684
  c->ctr=c->r[12]; // 80101688
  if (true) { c->lr=0x80101690u; dispatch(c,c->ctr); } // 8010168C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80101690
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80101694
  c->r[30]=R32(c->r[1]+0x00000028u); // 80101698
  c->r[29]=R32(c->r[1]+0x00000024u); // 8010169C
  c->lr=c->r[0]; // 801016A0
  c->r[1]=c->r[1]+0x00000030u; // 801016A4
  return; // 801016A8
}

// fn_801016AC
void f_801016AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801016AC
  c->r[0]=c->lr; // 801016B0
  c->r[4]=c->r[3]|c->r[3]; // 801016B4
  c->r[3]=0u+0x000004DFu; // 801016B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801016BC
  c->r[5]=0u+0x00000000u; // 801016C0
  c->r[4]=R32(c->r[4]+0x00000394u); // 801016C4
  c->r[4]=c->r[4]+0x0000010Cu; // 801016C8
  c->lr=0x801016D0u; f_8024EE50(c); // 801016CC
  c->r[0]=cntlz(c->r[3]); // 801016D0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801016D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801016D8
  c->lr=c->r[0]; // 801016DC
  c->r[1]=c->r[1]+0x00000010u; // 801016E0
  return; // 801016E4
}

// fn_801016E8
void f_801016E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801016E8
  c->r[0]=c->lr; // 801016EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801016F0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801016F4
  c->r[31]=c->r[3]|c->r[3]; // 801016F8
  W32(c->r[1]+0x00000028u,c->r[30]); // 801016FC
  c->r[0]=R8(c->r[3]+0x00000029u); // 80101700
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101704
  cmps(c,0,(int32_t)c->r[0],1); // 80101708
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[1]);} // 8010170C
  if (crb(c,2)) { goto L_80101998; } // 80101710
  if (!crb(c,0)) { goto L_80101AD8; } // 80101714
  cmps(c,0,(int32_t)c->r[0],0); // 80101718
  if (!crb(c,0)) { goto L_80101724; } // 8010171C
  goto L_80101AD8; // 80101720
L_80101724:;
  c->r[0]=R32(c->r[3]+0x00000088u); // 80101724
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80101728
  if (!crb(c,2)) { goto L_801018A8; } // 8010172C
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80101730
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101734
  fcmp(c,0,c->f[2],c->f[1]); // 80101738
  if (!crb(c,1)) { goto L_80101758; } // 8010173C
  {uint32_t ea=c->r[2]+0xFFFFACC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101740
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80101744
  fcmp(c,0,c->f[0],c->f[1]); // 80101748
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 8010174C
  if (!crb(c,0)) { goto L_80101758; } // 80101750
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 80101754
L_80101758:;
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80101758
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010175C
  fcmp(c,0,c->f[2],c->f[1]); // 80101760
  if (!crb(c,0)) { goto L_80101780; } // 80101764
  {uint32_t ea=c->r[2]+0xFFFFACC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101768
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8010176C
  fcmp(c,0,c->f[0],c->f[1]); // 80101770
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 80101774
  if (!crb(c,1)) { goto L_80101780; } // 80101778
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 8010177C
L_80101780:;
  c->r[0]=R8(c->r[3]+0x00000028u); // 80101780
  cmps(c,0,(int32_t)c->r[0],0); // 80101784
  if (crb(c,2)) { goto L_80101794; } // 80101788
  cmpu(c,0,c->r[0],0x0000000Cu); // 8010178C
  if (!crb(c,2)) { goto L_80101AD8; } // 80101790
L_80101794:;
  c->r[4]=0u+0x00000000u; // 80101794
  c->r[3]=c->r[3]+0x0000000Cu; // 80101798
  c->lr=0x801017A0u; f_800366DC(c); // 8010179C
  c->r[3]=c->r[31]+0x0000000Cu; // 801017A0
  c->r[4]=0u+0x0000005Au; // 801017A4
  c->lr=0x801017ACu; f_80038BCC(c); // 801017A8
  cmps(c,0,(int32_t)c->r[3],0); // 801017AC
  if (crb(c,2)) { goto L_80101AD8; } // 801017B0
  c->r[3]=c->r[31]+0x0000000Cu; // 801017B4
  c->r[4]=0u+0x00000000u; // 801017B8
  c->lr=0x801017C0u; f_80036430(c); // 801017BC
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 801017C0
  c->r[3]=c->r[13]+0xFFFFAB38u; // 801017C4
  c->r[0]=c->r[4]+0x00000001u; // 801017C8
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 801017CC
  c->lr=0x801017D4u; f_80211724(c); // 801017D0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801017D4
  if (!crb(c,2)) { goto L_801017E8; } // 801017D8
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 801017DC
  cmpu(c,0,c->r[0],0x0000000Au); // 801017E0
  if (!crb(c,1)) { goto L_80101AD8; } // 801017E4
L_801017E8:;
  c->r[3]=c->r[31]+0x00000010u; // 801017E8
  c->r[4]=0u+0x00000384u; // 801017EC
  c->lr=0x801017F4u; f_80036430(c); // 801017F0
  c->r[0]=R32(c->r[31]+0x00000088u); // 801017F4
  c->r[30]=0u+0x00000000u; // 801017F8
  c->r[4]=R32(c->r[31]+0x00000090u); // 801017FC
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80101800
  c->r[5]=c->r[0]|0x00000001u; // 80101804
  W32(c->r[31]+0x0000008Cu,c->r[30]); // 80101808
  c->r[0]=c->r[4]+0x00000001u; // 8010180C
  W32(c->r[31]+0x00000088u,c->r[5]); // 80101810
  W32(c->r[31]+0x00000090u,c->r[0]); // 80101814
  c->lr=0x8010181Cu; f_80211724(c); // 80101818
  c->r[0]=rotl(c->r[3],0)&0x0000000Fu; // 8010181C
  cmpu(c,0,c->r[0],0x00000004u); // 80101820
  if (!crb(c,0)) { goto L_80101838; } // 80101824
  {uint32_t ea=c->r[2]+0xFFFFACC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101828
  W32(c->r[31]+0x00000090u,c->r[30]); // 8010182C
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 80101830
  goto L_80101868; // 80101834
L_80101838:;
  cmpu(c,0,c->r[0],0x00000008u); // 80101838
  if (!crb(c,0)) { goto L_8010184C; } // 8010183C
  {uint32_t ea=c->r[2]+0xFFFFACCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80101840
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 80101844
  goto L_80101868; // 80101848
L_8010184C:;
  cmpu(c,0,c->r[0],0x0000000Cu); // 8010184C
  if (!crb(c,0)) { goto L_80101860; } // 80101850
  {uint32_t ea=c->r[2]+0xFFFFACD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101854
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 80101858
  goto L_80101868; // 8010185C
L_80101860:;
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101860
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 80101864
L_80101868:;
  c->r[0]=R32(c->r[31]+0x00000090u); // 80101868
  cmpu(c,0,c->r[0],0x00000005u); // 8010186C
  if (!crb(c,1)) { goto L_80101884; } // 80101870
  {uint32_t ea=c->r[2]+0xFFFFACC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101874
  c->r[0]=0u+0x00000000u; // 80101878
  W32(c->r[31]+0x00000090u,c->r[0]); // 8010187C
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 80101880
L_80101884:;
  c->r[0]=R32(c->r[31]+0x00000088u); // 80101884
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80101888
  if (crb(c,2)) { goto L_80101898; } // 8010188C
  c->r[3]=c->r[31]|c->r[31]; // 80101890
  c->lr=0x80101898u; f_8010200C(c); // 80101894
L_80101898:;
  c->r[3]=R8(c->r[31]+0x00000029u); // 80101898
  c->r[0]=c->r[3]+0x00000001u; // 8010189C
  W8(c->r[31]+0x00000029u,c->r[0]); // 801018A0
  goto L_80101AD8; // 801018A4
L_801018A8:;
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801018A8
  fcmp(c,0,c->f[0],c->f[1]); // 801018AC
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 801018B0
  if (!crb(c,2)) { goto L_801018D8; } // 801018B4
  c->r[4]=R32(c->r[3]+0x00000394u); // 801018B8
  c->r[0]=R32(c->r[4]+0x00000030u); // 801018BC
  cmps(c,0,(int32_t)c->r[0],0); // 801018C0
  if (!crb(c,2)) { goto L_801018D8; } // 801018C4
  {uint32_t ea=c->r[2]+0xFFFFACD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801018C8
  c->r[4]=0u+0x00000000u; // 801018CC
  c->lr=0x801018D4u; f_80038A80(c); // 801018D0
  goto L_801018E8; // 801018D4
L_801018D8:;
  {uint32_t ea=c->r[2]+0xFFFFACD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801018D8
  c->r[3]=c->r[31]|c->r[31]; // 801018DC
  c->r[4]=0u+0x00000000u; // 801018E0
  c->lr=0x801018E8u; f_80038A80(c); // 801018E4
L_801018E8:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 801018E8
  c->r[0]=R32(c->r[3]+0x00000030u); // 801018EC
  cmps(c,0,(int32_t)c->r[0],10); // 801018F0
  if (crb(c,2)) { goto L_80101910; } // 801018F4
  if (!crb(c,0)) { goto L_80101920; } // 801018F8
  cmps(c,0,(int32_t)c->r[0],7); // 801018FC
  if (!crb(c,0)) { goto L_80101920; } // 80101900
  cmps(c,0,(int32_t)c->r[0],4); // 80101904
  if (!crb(c,0)) { goto L_80101910; } // 80101908
  goto L_80101920; // 8010190C
L_80101910:;
  {uint32_t ea=c->r[2]+0xFFFFACD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101910
  c->r[3]=c->r[31]|c->r[31]; // 80101914
  c->r[4]=0u+0x00000000u; // 80101918
  c->lr=0x80101920u; f_80038A80(c); // 8010191C
L_80101920:;
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101920
  {uint32_t ea=c->r[31]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101924
  fcmp(c,0,c->f[0],c->f[1]); // 80101928
  if (!crb(c,2)) { goto L_8010193C; } // 8010192C
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 80101930
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 80101934
  goto L_80101AD8; // 80101938
L_8010193C:;
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010193C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80101940
  c->lr=0x80101948u; f_8002C1B0(c); // 80101944
  {uint32_t ea=c->r[2]+0xFFFFACDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80101948
  fcmp(c,0,c->f[1],c->f[0]); // 8010194C
  if (!crb(c,0)) { goto L_80101964; } // 80101950
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101954
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101958
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[1]);} // 8010195C
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 80101960
L_80101964:;
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101964
  {uint32_t ea=c->r[31]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101968
  fcmp(c,0,c->f[1],c->f[0]); // 8010196C
  if (!crb(c,1)) { goto L_8010197C; } // 80101970
  {uint32_t ea=c->r[2]+0xFFFFACDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80101974
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 80101978
L_8010197C:;
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010197C
  {uint32_t ea=c->r[31]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101980
  fcmp(c,0,c->f[1],c->f[0]); // 80101984
  if (!crb(c,0)) { goto L_80101AD8; } // 80101988
  {uint32_t ea=c->r[2]+0xFFFFACE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010198C
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 80101990
  goto L_80101AD8; // 80101994
L_80101998:;
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101998
  fcmp(c,0,c->f[0],c->f[1]); // 8010199C
  if (!crb(c,1)) { goto L_801019C4; } // 801019A0
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801019A4
  {uint32_t ea=c->r[2]+0xFFFFACC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801019A8
  {uint32_t ea=c->r[2]+0xFFFFACE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801019AC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801019B0
  fcmp(c,0,c->f[1],c->f[0]); // 801019B4
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 801019B8
  if (!crb(c,1)) { goto L_801019C4; } // 801019BC
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 801019C0
L_801019C4:;
  {uint32_t ea=c->r[3]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 801019C4
  {uint32_t ea=c->r[3]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 801019C8
  fcmp(c,0,c->f[1],c->f[0]); // 801019CC
  if (!crb(c,0)) { goto L_801019F4; } // 801019D0
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801019D4
  {uint32_t ea=c->r[2]+0xFFFFACC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801019D8
  {uint32_t ea=c->r[2]+0xFFFFACE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801019DC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801019E0
  fcmp(c,0,c->f[1],c->f[0]); // 801019E4
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 801019E8
  if (!crb(c,0)) { goto L_801019F4; } // 801019EC
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 801019F0
L_801019F4:;
  c->r[0]=R32(c->r[3]+0x00000088u); // 801019F4
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801019F8
  if (crb(c,2)) { goto L_80101A0C; } // 801019FC
  c->r[3]=c->r[31]|c->r[31]; // 80101A00
  c->lr=0x80101A08u; f_8010200C(c); // 80101A04
  goto L_80101A14; // 80101A08
L_80101A0C:;
  c->r[3]=c->r[31]|c->r[31]; // 80101A0C
  c->lr=0x80101A14u; f_8010213C(c); // 80101A10
L_80101A14:;
  c->r[3]=R32(c->r[31]+0x00000088u); // 80101A14
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 80101A18
  if (!crb(c,2)) { goto L_80101AD8; } // 80101A1C
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 80101A20
  if (crb(c,2)) { goto L_80101A50; } // 80101A24
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFEu; // 80101A28
  c->r[30]=0u+0x00000000u; // 80101A2C
  W32(c->r[31]+0x0000008Cu,c->r[30]); // 80101A30
  c->r[3]=c->r[31]|c->r[31]; // 80101A34
  W32(c->r[31]+0x00000088u,c->r[0]); // 80101A38
  c->lr=0x80101A40u; f_8010213C(c); // 80101A3C
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101A40
  W8(c->r[31]+0x00000029u,c->r[30]); // 80101A44
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 80101A48
  goto L_80101AD8; // 80101A4C
L_80101A50:;
  c->r[0]=R8(c->r[31]+0x00000028u); // 80101A50
  cmpu(c,0,c->r[0],0x00000002u); // 80101A54
  if (crb(c,2)) { goto L_80101A64; } // 80101A58
  cmpu(c,0,c->r[0],0x0000000Cu); // 80101A5C
  if (!crb(c,2)) { goto L_80101AD8; } // 80101A60
L_80101A64:;
  c->r[3]=c->r[31]+0x0000000Cu; // 80101A64
  c->r[4]=0u+0x00000000u; // 80101A68
  c->lr=0x80101A70u; f_800366DC(c); // 80101A6C
  c->r[3]=c->r[31]+0x0000000Cu; // 80101A70
  c->r[4]=0u+0x000000C8u; // 80101A74
  c->lr=0x80101A7Cu; f_80038BCC(c); // 80101A78
  cmps(c,0,(int32_t)c->r[3],0); // 80101A7C
  if (crb(c,2)) { goto L_80101AD8; } // 80101A80
  c->r[3]=c->r[31]+0x0000000Cu; // 80101A84
  c->r[4]=0u+0x00000000u; // 80101A88
  c->lr=0x80101A90u; f_80036430(c); // 80101A8C
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 80101A90
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80101A94
  c->r[0]=c->r[4]+0x00000001u; // 80101A98
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 80101A9C
  c->lr=0x80101AA4u; f_80211724(c); // 80101AA0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80101AA4
  if (!crb(c,2)) { goto L_80101AB8; } // 80101AA8
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 80101AAC
  cmpu(c,0,c->r[0],0x00000008u); // 80101AB0
  if (!crb(c,1)) { goto L_80101AD8; } // 80101AB4
L_80101AB8:;
  c->r[0]=R32(c->r[31]+0x00000088u); // 80101AB8
  c->r[30]=0u+0x00000000u; // 80101ABC
  W32(c->r[31]+0x0000008Cu,c->r[30]); // 80101AC0
  c->r[3]=c->r[31]|c->r[31]; // 80101AC4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80101AC8
  W32(c->r[31]+0x00000088u,c->r[0]); // 80101ACC
  c->lr=0x80101AD4u; f_8010213C(c); // 80101AD0
  W8(c->r[31]+0x00000029u,c->r[30]); // 80101AD4
L_80101AD8:;
  {uint32_t ea=c->r[31]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 80101AD8
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80101ADC
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101AE0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80101AE4
  fcmp(c,0,c->f[1],c->f[0]); // 80101AE8
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[1]);} // 80101AEC
  if (!crb(c,0)) { goto L_80101AF8; } // 80101AF0
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 80101AF4
L_80101AF8:;
  {uint32_t ea=c->r[31]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101AF8
  {uint32_t ea=c->r[2]+0xFFFFACECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80101AFC
  fcmp(c,0,c->f[1],c->f[0]); // 80101B00
  if (!crb(c,1)) { goto L_80101B0C; } // 80101B04
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 80101B08
L_80101B0C:;
  c->r[3]=R32(c->r[31]+0x00000088u); // 80101B0C
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80101B10
  if (crb(c,2)) { goto L_80101B3C; } // 80101B14
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80101B18
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFDu; // 80101B1C
  W32(c->r[31]+0x00000088u,c->r[0]); // 80101B20
  if (crb(c,2)) { goto L_80101B34; } // 80101B24
  c->r[0]=0u+0x00000007u; // 80101B28
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101B2C
  goto L_80101B3C; // 80101B30
L_80101B34:;
  c->r[0]=0u+0x00000004u; // 80101B34
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101B38
L_80101B3C:;
  c->r[3]=R32(c->r[31]+0x00000088u); // 80101B3C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80101B40
  if (crb(c,2)) { goto L_80101B58; } // 80101B44
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFBu; // 80101B48
  c->r[0]=0u+0x0000000Au; // 80101B4C
  W32(c->r[31]+0x00000088u,c->r[3]); // 80101B50
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101B54
L_80101B58:;
  c->r[0]=R8(c->r[31]+0x00000028u); // 80101B58
  cmpu(c,0,c->r[0],0x0000000Du); // 80101B5C
  if (crb(c,1)) { goto L_80101F4C; } // 80101B60
  c->r[3]=0u+0x803D0000u; // 80101B64
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80101B68
  c->r[3]=c->r[3]+0x00006248u; // 80101B6C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80101B70
  c->ctr=c->r[3]; // 80101B74
  if (true) { switch (c->ctr) { case 0x80101B7Cu: goto L_80101B7C; case 0x80101C24u: goto L_80101C24; case 0x80101CC0u: goto L_80101CC0; case 0x80101D50u: goto L_80101D50; case 0x80101DA0u: goto L_80101DA0; case 0x80101DE0u: goto L_80101DE0; case 0x80101E04u: goto L_80101E04; case 0x80101E14u: goto L_80101E14; case 0x80101E54u: goto L_80101E54; case 0x80101E78u: goto L_80101E78; case 0x80101E88u: goto L_80101E88; case 0x80101EC8u: goto L_80101EC8; case 0x80101EECu: goto L_80101EEC; case 0x80101EFCu: goto L_80101EFC; default: break; } dispatch(c,c->ctr); return; } // 80101B78
L_80101B7C:;
  c->r[0]=R32(c->r[31]+0x00000088u); // 80101B7C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80101B80
  if (crb(c,2)) { goto L_80101BC4; } // 80101B84
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80101B88
  c->r[3]=c->r[31]|c->r[31]; // 80101B8C
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101B90
  c->r[4]=0u+0x0000000Au; // 80101B94
  c->r[12]=R32(c->r[12]+0x00000048u); // 80101B98
  c->r[5]=0u+0x00000001u; // 80101B9C
  c->f[2]=c->f[1]; // 80101BA0
  c->ctr=c->r[12]; // 80101BA4
  if (true) { c->lr=0x80101BACu; dispatch(c,c->ctr); } // 80101BA8
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101BAC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101BB0
  c->lr=0x80101BB8u; f_802501B0(c); // 80101BB4
  c->r[0]=0u+0x0000000Du; // 80101BB8
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101BBC
  goto L_80101F4C; // 80101BC0
L_80101BC4:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101BC4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101BC8
  c->lr=0x80101BD0u; f_802501B0(c); // 80101BCC
  cmps(c,0,(int32_t)c->r[3],0); // 80101BD0
  if (crb(c,2)) { goto L_80101F4C; } // 80101BD4
  c->r[0]=R32(c->r[31]+0x00000088u); // 80101BD8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80101BDC
  if (crb(c,2)) { goto L_80101F4C; } // 80101BE0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80101BE4
  c->r[3]=c->r[31]|c->r[31]; // 80101BE8
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101BEC
  c->r[4]=0u+0x00000001u; // 80101BF0
  c->r[12]=R32(c->r[12]+0x00000048u); // 80101BF4
  c->r[5]=0u+0x00000001u; // 80101BF8
  c->f[2]=c->f[1]; // 80101BFC
  c->ctr=c->r[12]; // 80101C00
  if (true) { c->lr=0x80101C08u; dispatch(c,c->ctr); } // 80101C04
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101C08
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101C0C
  c->lr=0x80101C14u; f_802501B0(c); // 80101C10
  c->r[3]=R8(c->r[31]+0x00000028u); // 80101C14
  c->r[0]=c->r[3]+0x00000001u; // 80101C18
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101C1C
  goto L_80101F4C; // 80101C20
L_80101C24:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101C24
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101C28
  c->lr=0x80101C30u; f_802501B0(c); // 80101C2C
  cmps(c,0,(int32_t)c->r[3],0); // 80101C30
  if (crb(c,2)) { goto L_80101F4C; } // 80101C34
  c->r[0]=R32(c->r[31]+0x00000088u); // 80101C38
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80101C3C
  if (crb(c,2)) { goto L_80101C80; } // 80101C40
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80101C44
  c->r[3]=c->r[31]|c->r[31]; // 80101C48
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101C4C
  c->r[4]=0u+0x00000009u; // 80101C50
  c->r[12]=R32(c->r[12]+0x00000048u); // 80101C54
  c->r[5]=0u+0x00000001u; // 80101C58
  c->f[2]=c->f[1]; // 80101C5C
  c->ctr=c->r[12]; // 80101C60
  if (true) { c->lr=0x80101C68u; dispatch(c,c->ctr); } // 80101C64
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101C68
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101C6C
  c->lr=0x80101C74u; f_802501B0(c); // 80101C70
  c->r[0]=0u+0x00000003u; // 80101C74
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101C78
  goto L_80101F4C; // 80101C7C
L_80101C80:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80101C80
  c->r[3]=c->r[31]|c->r[31]; // 80101C84
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101C88
  c->r[4]=0u+0x00000002u; // 80101C8C
  c->r[12]=R32(c->r[12]+0x00000048u); // 80101C90
  c->r[5]=0u+0x00000001u; // 80101C94
  c->f[2]=c->f[1]; // 80101C98
  c->ctr=c->r[12]; // 80101C9C
  if (true) { c->lr=0x80101CA4u; dispatch(c,c->ctr); } // 80101CA0
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101CA4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101CA8
  c->lr=0x80101CB0u; f_802501B0(c); // 80101CAC
  c->r[3]=R8(c->r[31]+0x00000028u); // 80101CB0
  c->r[0]=c->r[3]+0x00000001u; // 80101CB4
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101CB8
  goto L_80101F4C; // 80101CBC
L_80101CC0:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101CC0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101CC4
  c->lr=0x80101CCCu; f_802501B0(c); // 80101CC8
  cmps(c,0,(int32_t)c->r[3],0); // 80101CCC
  if (crb(c,2)) { goto L_80101F4C; } // 80101CD0
  c->r[3]=R32(c->r[31]+0x00000088u); // 80101CD4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80101CD8
  if (!crb(c,2)) { goto L_80101F4C; } // 80101CDC
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 80101CE0
  if (crb(c,2)) { goto L_80101D10; } // 80101CE4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80101CE8
  c->r[3]=c->r[31]|c->r[31]; // 80101CEC
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101CF0
  c->r[4]=0u+0x00000009u; // 80101CF4
  c->r[12]=R32(c->r[12]+0x00000048u); // 80101CF8
  c->r[5]=0u+0x00000001u; // 80101CFC
  c->f[2]=c->f[1]; // 80101D00
  c->ctr=c->r[12]; // 80101D04
  if (true) { c->lr=0x80101D0Cu; dispatch(c,c->ctr); } // 80101D08
  goto L_80101D34; // 80101D0C
L_80101D10:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80101D10
  c->r[3]=c->r[31]|c->r[31]; // 80101D14
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101D18
  c->r[4]=0u+0x00000003u; // 80101D1C
  c->r[12]=R32(c->r[12]+0x00000048u); // 80101D20
  c->r[5]=0u+0x00000001u; // 80101D24
  c->f[2]=c->f[1]; // 80101D28
  c->ctr=c->r[12]; // 80101D2C
  if (true) { c->lr=0x80101D34u; dispatch(c,c->ctr); } // 80101D30
L_80101D34:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101D34
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101D38
  c->lr=0x80101D40u; f_802501B0(c); // 80101D3C
  c->r[3]=R8(c->r[31]+0x00000028u); // 80101D40
  c->r[0]=c->r[3]+0x00000001u; // 80101D44
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101D48
  goto L_80101F4C; // 80101D4C
L_80101D50:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101D50
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101D54
  c->lr=0x80101D5Cu; f_802501B0(c); // 80101D58
  cmps(c,0,(int32_t)c->r[3],0); // 80101D5C
  if (crb(c,2)) { goto L_80101F4C; } // 80101D60
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80101D64
  c->r[3]=c->r[31]|c->r[31]; // 80101D68
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101D6C
  c->r[4]=0u+0x00000000u; // 80101D70
  c->r[12]=R32(c->r[12]+0x00000048u); // 80101D74
  c->r[5]=0u+0x00000001u; // 80101D78
  c->f[2]=c->f[1]; // 80101D7C
  c->ctr=c->r[12]; // 80101D80
  if (true) { c->lr=0x80101D88u; dispatch(c,c->ctr); } // 80101D84
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101D88
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101D8C
  c->lr=0x80101D94u; f_802501B0(c); // 80101D90
  c->r[0]=0u+0x00000000u; // 80101D94
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101D98
  goto L_80101F4C; // 80101D9C
L_80101DA0:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80101DA0
  c->r[3]=c->r[31]|c->r[31]; // 80101DA4
  {uint32_t ea=c->r[2]+0xFFFFACF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101DA8
  c->r[4]=0u+0x00000004u; // 80101DAC
  c->r[12]=R32(c->r[12]+0x00000048u); // 80101DB0
  c->r[5]=0u+0x00000001u; // 80101DB4
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80101DB8
  c->ctr=c->r[12]; // 80101DBC
  if (true) { c->lr=0x80101DC4u; dispatch(c,c->ctr); } // 80101DC0
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101DC4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101DC8
  c->lr=0x80101DD0u; f_802501B0(c); // 80101DCC
  c->r[3]=R8(c->r[31]+0x00000028u); // 80101DD0
  c->r[0]=c->r[3]+0x00000001u; // 80101DD4
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101DD8
  goto L_80101F4C; // 80101DDC
L_80101DE0:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101DE0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101DE4
  c->lr=0x80101DECu; f_802501B0(c); // 80101DE8
  cmps(c,0,(int32_t)c->r[3],0); // 80101DEC
  if (crb(c,2)) { goto L_80101F4C; } // 80101DF0
  c->r[3]=R8(c->r[31]+0x00000028u); // 80101DF4
  c->r[0]=c->r[3]+0x00000001u; // 80101DF8
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101DFC
  goto L_80101F4C; // 80101E00
L_80101E04:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101E04
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101E08
  c->lr=0x80101E10u; f_802501B0(c); // 80101E0C
  goto L_80101F4C; // 80101E10
L_80101E14:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80101E14
  c->r[3]=c->r[31]|c->r[31]; // 80101E18
  {uint32_t ea=c->r[2]+0xFFFFACF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101E1C
  c->r[4]=0u+0x00000005u; // 80101E20
  c->r[12]=R32(c->r[12]+0x00000048u); // 80101E24
  c->r[5]=0u+0x00000001u; // 80101E28
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80101E2C
  c->ctr=c->r[12]; // 80101E30
  if (true) { c->lr=0x80101E38u; dispatch(c,c->ctr); } // 80101E34
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101E38
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101E3C
  c->lr=0x80101E44u; f_802501B0(c); // 80101E40
  c->r[3]=R8(c->r[31]+0x00000028u); // 80101E44
  c->r[0]=c->r[3]+0x00000001u; // 80101E48
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101E4C
  goto L_80101F4C; // 80101E50
L_80101E54:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101E54
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101E58
  c->lr=0x80101E60u; f_802501B0(c); // 80101E5C
  cmps(c,0,(int32_t)c->r[3],0); // 80101E60
  if (crb(c,2)) { goto L_80101F4C; } // 80101E64
  c->r[3]=R8(c->r[31]+0x00000028u); // 80101E68
  c->r[0]=c->r[3]+0x00000001u; // 80101E6C
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101E70
  goto L_80101F4C; // 80101E74
L_80101E78:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101E78
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101E7C
  c->lr=0x80101E84u; f_802501B0(c); // 80101E80
  goto L_80101F4C; // 80101E84
L_80101E88:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80101E88
  c->r[3]=c->r[31]|c->r[31]; // 80101E8C
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101E90
  c->r[4]=0u+0x00000006u; // 80101E94
  c->r[12]=R32(c->r[12]+0x00000048u); // 80101E98
  c->r[5]=0u+0x00000001u; // 80101E9C
  c->f[2]=c->f[1]; // 80101EA0
  c->ctr=c->r[12]; // 80101EA4
  if (true) { c->lr=0x80101EACu; dispatch(c,c->ctr); } // 80101EA8
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101EAC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101EB0
  c->lr=0x80101EB8u; f_802501B0(c); // 80101EB4
  c->r[3]=R8(c->r[31]+0x00000028u); // 80101EB8
  c->r[0]=c->r[3]+0x00000001u; // 80101EBC
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101EC0
  goto L_80101F4C; // 80101EC4
L_80101EC8:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101EC8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101ECC
  c->lr=0x80101ED4u; f_802501B0(c); // 80101ED0
  cmps(c,0,(int32_t)c->r[3],0); // 80101ED4
  if (crb(c,2)) { goto L_80101F4C; } // 80101ED8
  c->r[3]=R8(c->r[31]+0x00000028u); // 80101EDC
  c->r[0]=c->r[3]+0x00000001u; // 80101EE0
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101EE4
  goto L_80101F4C; // 80101EE8
L_80101EEC:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101EEC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101EF0
  c->lr=0x80101EF8u; f_802501B0(c); // 80101EF4
  goto L_80101F4C; // 80101EF8
L_80101EFC:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101EFC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101F00
  c->lr=0x80101F08u; f_802501B0(c); // 80101F04
  c->r[0]=R32(c->r[31]+0x00000088u); // 80101F08
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80101F0C
  if (!crb(c,2)) { goto L_80101F4C; } // 80101F10
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80101F14
  c->r[3]=c->r[31]|c->r[31]; // 80101F18
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101F1C
  c->r[4]=0u+0x00000000u; // 80101F20
  c->r[12]=R32(c->r[12]+0x00000048u); // 80101F24
  c->r[5]=0u+0x00000001u; // 80101F28
  c->f[2]=c->f[1]; // 80101F2C
  c->ctr=c->r[12]; // 80101F30
  if (true) { c->lr=0x80101F38u; dispatch(c,c->ctr); } // 80101F34
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101F38
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101F3C
  c->lr=0x80101F44u; f_802501B0(c); // 80101F40
  c->r[0]=0u+0x00000000u; // 80101F44
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101F48
L_80101F4C:;
  c->r[3]=c->r[31]|c->r[31]; // 80101F4C
  c->lr=0x80101F54u; f_8010207C(c); // 80101F50
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101F54
  c->r[5]=c->r[1]+0x00000014u; // 80101F58
  c->r[4]=R8(c->r[31]+0x00000084u); // 80101F5C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101F60
  c->lr=0x80101F68u; f_8025EA54(c); // 80101F64
  {uint32_t ea=c->r[31]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101F68
  c->r[5]=c->r[1]+0x00000008u; // 80101F6C
  c->r[4]=R32(c->r[1]+0x00000014u); // 80101F70
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80101F74
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80101F78
  c->r[3]=R32(c->r[1]+0x00000018u); // 80101F7C
  W32(c->r[1]+0x00000008u,c->r[4]); // 80101F80
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80101F84
  W32(c->r[1]+0x00000010u,c->r[0]); // 80101F88
  c->r[3]=R32(c->r[31]+0x00000394u); // 80101F8C
  c->r[4]=R8(c->r[31]+0x00000084u); // 80101F90
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80101F94
  c->lr=0x80101F9Cu; f_8025E9C0(c); // 80101F98
  c->r[3]=c->r[31]|c->r[31]; // 80101F9C
  c->lr=0x80101FA4u; f_801F56F4(c); // 80101FA0
  c->r[0]=R32(c->r[1]+0x00000034u); // 80101FA4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80101FA8
  c->r[30]=R32(c->r[1]+0x00000028u); // 80101FAC
  c->lr=c->r[0]; // 80101FB0
  c->r[1]=c->r[1]+0x00000030u; // 80101FB4
  return; // 80101FB8
}

// fn_80101FBC
void f_80101FBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101FBC
  c->r[0]=c->lr; // 80101FC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101FC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80101FC8
  c->r[31]=c->r[3]|c->r[3]; // 80101FCC
  c->r[4]=R8(c->r[3]+0x00000085u); // 80101FD0
  cmpu(c,0,c->r[4],0x000000FFu); // 80101FD4
  if (crb(c,2)) { goto L_80101FF0; } // 80101FD8
  c->r[3]=0u+0x80550000u; // 80101FDC
  c->r[3]=c->r[3]+0xFFFFC848u; // 80101FE0
  c->lr=0x80101FE8u; f_8018D694(c); // 80101FE4
  c->r[0]=0u+0x000000FFu; // 80101FE8
  W8(c->r[31]+0x00000085u,c->r[0]); // 80101FEC
L_80101FF0:;
  c->r[3]=c->r[31]|c->r[31]; // 80101FF0
  c->lr=0x80101FF8u; f_801F4C78(c); // 80101FF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101FF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80101FFC
  c->lr=c->r[0]; // 80102000
  c->r[1]=c->r[1]+0x00000010u; // 80102004
  return; // 80102008
}

// fn_8010200C
void f_8010200C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010200C
  c->r[0]=c->lr; // 80102010
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102014
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102018
  c->r[31]=c->r[3]|c->r[3]; // 8010201C
  c->r[0]=R8(c->r[3]+0x00000085u); // 80102020
  cmpu(c,0,c->r[0],0x000000FFu); // 80102024
  if (!crb(c,2)) { goto L_80102068; } // 80102028
  c->r[4]=0u+0x803A0000u; // 8010202C
  c->r[3]=0u+0x80550000u; // 80102030
  c->r[4]=c->r[4]+0xFFFFF470u; // 80102034
  c->r[5]=0u+0x00000000u; // 80102038
  c->r[3]=c->r[3]+0xFFFFC848u; // 8010203C
  c->r[6]=0u+0x00000000u; // 80102040
  c->r[4]=c->r[4]+0x00000010u; // 80102044
  c->lr=0x8010204Cu; f_8018D3E4(c); // 80102048
  W8(c->r[31]+0x00000085u,c->r[3]); // 8010204C
  c->r[3]=c->r[31]|c->r[31]; // 80102050
  c->r[4]=0u+0x00000004u; // 80102054
  c->r[5]=0u+0x00000018u; // 80102058
  c->r[6]=0u+0x00000001u; // 8010205C
  c->r[7]=0u+0x00000001u; // 80102060
  c->lr=0x80102068u; f_8017900C(c); // 80102064
L_80102068:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102068
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010206C
  c->lr=c->r[0]; // 80102070
  c->r[1]=c->r[1]+0x00000010u; // 80102074
  return; // 80102078
}

// fn_8010207C
void f_8010207C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010207C
  c->r[0]=c->lr; // 80102080
  c->r[11]=c->r[3]|c->r[3]; // 80102084
  W32(c->r[1]+0x00000044u,c->r[0]); // 80102088
  c->r[0]=R8(c->r[3]+0x00000085u); // 8010208C
  cmpu(c,0,c->r[0],0x000000FFu); // 80102090
  if (crb(c,2)) { goto L_8010212C; } // 80102094
  {uint32_t ea=c->r[2]+0xFFFFACC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102098
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010209C
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[5]=c->ps1[5]=RF32(ea);} // 801020A0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801020A4
  {uint32_t ea=c->r[2]+0xFFFFACECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801020A8
  {uint32_t ea=c->r[2]+0xFFFFACF8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801020AC
  {uint32_t ea=c->r[2]+0xFFFFACFCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801020B0
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801020B4
  fcmp(c,0,c->f[1],c->f[0]); // 801020B8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[5]);} // 801020BC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[4]);} // 801020C0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 801020C4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 801020C8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801020CC
  if (!crb(c,1)) { goto L_801020DC; } // 801020D0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801020D4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801020D8
L_801020DC:;
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801020DC
  c->r[3]=0u+0x80550000u; // 801020E0
  c->r[10]=R32(c->r[1]+0x00000020u); // 801020E4
  c->r[3]=c->r[3]+0xFFFFC848u; // 801020E8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 801020EC
  c->r[5]=c->r[1]+0x00000014u; // 801020F0
  c->r[9]=R32(c->r[1]+0x00000024u); // 801020F4
  c->r[6]=c->r[1]+0x00000008u; // 801020F8
  c->r[8]=R32(c->r[1]+0x00000028u); // 801020FC
  c->r[7]=R32(c->r[1]+0x0000002Cu); // 80102100
  c->r[4]=R32(c->r[1]+0x00000030u); // 80102104
  c->r[0]=R32(c->r[1]+0x00000034u); // 80102108
  W32(c->r[1]+0x00000008u,c->r[10]); // 8010210C
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 80102110
  W32(c->r[1]+0x00000010u,c->r[8]); // 80102114
  W32(c->r[1]+0x00000014u,c->r[7]); // 80102118
  W32(c->r[1]+0x00000018u,c->r[4]); // 8010211C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80102120
  c->r[4]=R8(c->r[11]+0x00000085u); // 80102124
  c->lr=0x8010212Cu; f_8018DBD0(c); // 80102128
L_8010212C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8010212C
  c->lr=c->r[0]; // 80102130
  c->r[1]=c->r[1]+0x00000040u; // 80102134
  return; // 80102138
}

// fn_8010213C
void f_8010213C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010213C
  c->r[0]=c->lr; // 80102140
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102144
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102148
  c->r[31]=c->r[3]|c->r[3]; // 8010214C
  c->r[4]=R8(c->r[3]+0x00000085u); // 80102150
  cmpu(c,0,c->r[4],0x000000FFu); // 80102154
  if (crb(c,2)) { goto L_80102188; } // 80102158
  c->r[3]=0u+0x80550000u; // 8010215C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80102160
  c->lr=0x80102168u; f_8018D738(c); // 80102164
  c->r[0]=0u+0x000000FFu; // 80102168
  c->r[3]=c->r[31]|c->r[31]; // 8010216C
  W8(c->r[31]+0x00000085u,c->r[0]); // 80102170
  c->r[4]=0u+0x00000004u; // 80102174
  c->r[5]=0u+0x00000019u; // 80102178
  c->r[6]=0u+0x00000001u; // 8010217C
  c->r[7]=0u+0x00000001u; // 80102180
  c->lr=0x80102188u; f_8017900C(c); // 80102184
L_80102188:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102188
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010218C
  c->lr=c->r[0]; // 80102190
  c->r[1]=c->r[1]+0x00000010u; // 80102194
  return; // 80102198
}

// fn_8010219C
void f_8010219C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 8010219C
  c->r[0]=c->r[0]|0x00000002u; // 801021A0
  W32(c->r[3]+0x00000088u,c->r[0]); // 801021A4
  return; // 801021A8
}

// fn_801021AC
void f_801021AC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 801021AC
  c->r[0]=c->r[0]|0x00000004u; // 801021B0
  W32(c->r[3]+0x00000088u,c->r[0]); // 801021B4
  return; // 801021B8
}

// fn_801021BC
void f_801021BC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 801021BC
  c->r[0]=c->r[0]|0x00000008u; // 801021C0
  W32(c->r[3]+0x00000088u,c->r[0]); // 801021C4
  return; // 801021C8
}

// fn_801021CC
void f_801021CC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 801021CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801021D0
  W32(c->r[3]+0x00000088u,c->r[0]); // 801021D4
  return; // 801021D8
}

// fn_801021DC
void f_801021DC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 801021DC
  c->r[0]=c->r[0]|0x00000020u; // 801021E0
  W32(c->r[3]+0x00000088u,c->r[0]); // 801021E4
  return; // 801021E8
}

// fn_801021EC
void f_801021EC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 801021EC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 801021F0
  W32(c->r[3]+0x00000088u,c->r[0]); // 801021F4
  return; // 801021F8
}

// fn_801021FC
void f_801021FC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 801021FC
  c->r[0]=c->r[0]|0x00000040u; // 80102200
  W32(c->r[3]+0x00000088u,c->r[0]); // 80102204
  return; // 80102208
}

// fn_8010220C
void f_8010220C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 8010220C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 80102210
  W32(c->r[3]+0x00000088u,c->r[0]); // 80102214
  return; // 80102218
}

// fn_8010221C
void f_8010221C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 8010221C
  c->r[0]=c->r[0]|0x00000010u; // 80102220
  W32(c->r[3]+0x00000088u,c->r[0]); // 80102224
  return; // 80102228
}

// fn_8010222C
void f_8010222C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 8010222C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 80102230
  W32(c->r[3]+0x00000088u,c->r[0]); // 80102234
  return; // 80102238
}

// fn_8010223C
void f_8010223C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010223C
  return; // 80102240
}

// fn_80102244
void f_80102244(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 80102244
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 80102248
  return; // 8010224C
}

// fn_80102250
void f_80102250(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000028u); // 80102250
  return; // 80102254
}

// fn_80102258
void f_80102258(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102258
  return; // 8010225C
}

// fn_80102260
void f_80102260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102260
  c->r[0]=c->lr; // 80102264
  cmps(c,0,(int32_t)c->r[3],0); // 80102268
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010226C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102270
  c->r[31]=c->r[4]|c->r[4]; // 80102274
  W32(c->r[1]+0x00000008u,c->r[30]); // 80102278
  c->r[30]=c->r[3]|c->r[3]; // 8010227C
  if (crb(c,2)) { goto L_8010229C; } // 80102280
  c->r[4]=0u+0x00000000u; // 80102284
  c->lr=0x8010228Cu; f_8026A06C(c); // 80102288
  cmps(c,0,(int32_t)c->r[31],0); // 8010228C
  if (!crb(c,1)) { goto L_8010229C; } // 80102290
  c->r[3]=c->r[30]|c->r[30]; // 80102294
  c->lr=0x8010229Cu; f_8026A268(c); // 80102298
L_8010229C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010229C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801022A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801022A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801022A8
  c->lr=c->r[0]; // 801022AC
  c->r[1]=c->r[1]+0x00000010u; // 801022B0
  return; // 801022B4
}

// fn_801022B8
void f_801022B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801022B8
  c->r[0]=c->lr; // 801022BC
  c->r[4]=0u+0x00000000u; // 801022C0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801022C4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801022C8
  c->r[31]=c->r[3]|c->r[3]; // 801022CC
  W32(c->r[1]+0x00000048u,c->r[30]); // 801022D0
  W32(c->r[1]+0x00000044u,c->r[29]); // 801022D4
  c->lr=0x801022DCu; f_801F57D0(c); // 801022D8
  c->r[3]=c->r[31]|c->r[31]; // 801022DC
  c->r[4]=0u+0x00000001u; // 801022E0
  c->lr=0x801022E8u; f_801F57D0(c); // 801022E4
  c->r[3]=c->r[31]|c->r[31]; // 801022E8
  c->r[4]=0u+0x00000002u; // 801022EC
  c->lr=0x801022F4u; f_801F57D0(c); // 801022F0
  c->r[3]=c->r[31]|c->r[31]; // 801022F4
  c->r[4]=0u+0x00000003u; // 801022F8
  c->lr=0x80102300u; f_801F57D0(c); // 801022FC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80102300
  c->r[3]=c->r[31]|c->r[31]; // 80102304
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80102308
  c->ctr=c->r[12]; // 8010230C
  if (true) { c->lr=0x80102314u; dispatch(c,c->ctr); } // 80102310
  c->r[3]=c->r[31]|c->r[31]; // 80102314
  c->lr=0x8010231Cu; f_801F4B94(c); // 80102318
  c->r[3]=0u+0x00000003u; // 8010231C
  c->r[0]=0u+0x00000074u; // 80102320
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 80102324
  c->r[3]=c->r[31]|c->r[31]; // 80102328
  c->r[4]=R32(c->r[31]+0x00000394u); // 8010232C
  W8(c->r[31]+0x0000006Du,c->r[0]); // 80102330
  c->lr=0x80102338u; f_801F58BC(c); // 80102334
  c->r[3]=R32(c->r[31]+0x00000394u); // 80102338
  c->r[29]=0u+0x00000001u; // 8010233C
  c->r[4]=0u+0x803A0000u; // 80102340
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 80102344
  c->r[4]=c->r[4]+0xFFFFF488u; // 80102348
  c->r[3]=R32(c->r[31]+0x00000394u); // 8010234C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102350
  c->lr=0x80102358u; f_80256EC4(c); // 80102354
  c->r[6]=R32(c->r[31]+0x00000394u); // 80102358
  c->r[5]=0u+0x805D0000u; // 8010235C
  c->r[4]=c->r[31]+0x0000002Cu; // 80102360
  W32(c->r[6]+0x000000E4u,c->r[3]); // 80102364
  c->r[3]=c->r[5]+0x000078B0u; // 80102368
  c->lr=0x80102370u; f_802351CC(c); // 8010236C
  c->r[4]=R32(c->r[31]+0x00000394u); // 80102370
  W8(c->r[4]+0x0000001Du,c->r[3]); // 80102374
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 80102378
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 8010237C
  cmps(c,0,(int32_t)c->r[0],0); // 80102380
  if (!crb(c,2)) { goto L_801023B0; } // 80102384
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80102388
  c->r[3]=c->r[31]|c->r[31]; // 8010238C
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102390
  c->r[4]=0u+0x00000000u; // 80102394
  c->r[12]=R32(c->r[12]+0x00000048u); // 80102398
  c->r[5]=0u+0x00000001u; // 8010239C
  c->f[2]=c->f[1]; // 801023A0
  c->ctr=c->r[12]; // 801023A4
  if (true) { c->lr=0x801023ACu; dispatch(c,c->ctr); } // 801023A8
  goto L_801023E0; // 801023AC
L_801023B0:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 801023B0
  c->r[3]=c->r[31]|c->r[31]; // 801023B4
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[1]=c->ps1[1]=RF32(ea);} // 801023B8
  c->r[4]=0u+0x00000001u; // 801023BC
  c->r[12]=R32(c->r[12]+0x00000048u); // 801023C0
  c->r[5]=0u+0x00000001u; // 801023C4
  c->f[2]=c->f[1]; // 801023C8
  c->ctr=c->r[12]; // 801023CC
  if (true) { c->lr=0x801023D4u; dispatch(c,c->ctr); } // 801023D0
  c->r[3]=R32(c->r[31]+0x00000394u); // 801023D4
  c->r[0]=0u+0x00000000u; // 801023D8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 801023DC
L_801023E0:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 801023E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 801023E4
  c->lr=0x801023ECu; f_802501B0(c); // 801023E8
  c->r[4]=R32(c->r[31]+0x00000398u); // 801023EC
  c->r[3]=c->r[31]|c->r[31]; // 801023F0
  c->lr=0x801023F8u; f_801F58BC(c); // 801023F4
  c->r[3]=R32(c->r[31]+0x00000398u); // 801023F8
  c->r[0]=0u+0x00000001u; // 801023FC
  c->r[4]=0u+0x803A0000u; // 80102400
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 80102404
  c->r[4]=c->r[4]+0xFFFFF488u; // 80102408
  c->r[3]=R32(c->r[31]+0x00000398u); // 8010240C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102410
  c->lr=0x80102418u; f_80256EC4(c); // 80102414
  c->r[4]=R32(c->r[31]+0x00000398u); // 80102418
  c->r[5]=0u+0x00000000u; // 8010241C
  W32(c->r[4]+0x000000E4u,c->r[3]); // 80102420
  c->r[4]=R32(c->r[31]+0x00000394u); // 80102424
  c->r[3]=R32(c->r[31]+0x00000398u); // 80102428
  c->r[0]=R8(c->r[4]+0x0000001Du); // 8010242C
  W8(c->r[3]+0x0000001Du,c->r[0]); // 80102430
  c->r[3]=R32(c->r[31]+0x00000394u); // 80102434
  c->r[4]=R32(c->r[31]+0x00000398u); // 80102438
  c->lr=0x80102440u; f_80250BF4(c); // 8010243C
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 80102440
  cmps(c,0,(int32_t)c->r[0],0); // 80102444
  if (!crb(c,2)) { goto L_80102478; } // 80102448
  c->r[12]=R32(c->r[31]+0x000000B0u); // 8010244C
  c->r[3]=c->r[31]|c->r[31]; // 80102450
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102454
  c->r[5]=0u+0x000001B9u; // 80102458
  c->r[12]=R32(c->r[12]+0x00000064u); // 8010245C
  c->r[6]=0u+0x00000001u; // 80102460
  c->f[2]=c->f[1]; // 80102464
  c->r[4]=R32(c->r[31]+0x00000398u); // 80102468
  c->ctr=c->r[12]; // 8010246C
  if (true) { c->lr=0x80102474u; dispatch(c,c->ctr); } // 80102470
  goto L_801024A0; // 80102474
L_80102478:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80102478
  c->r[3]=c->r[31]|c->r[31]; // 8010247C
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102480
  c->r[5]=0u+0x000001CEu; // 80102484
  c->r[12]=R32(c->r[12]+0x00000064u); // 80102488
  c->r[6]=0u+0x00000001u; // 8010248C
  c->f[2]=c->f[1]; // 80102490
  c->r[4]=R32(c->r[31]+0x00000398u); // 80102494
  c->ctr=c->r[12]; // 80102498
  if (true) { c->lr=0x801024A0u; dispatch(c,c->ctr); } // 8010249C
L_801024A0:;
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 801024A0
  c->r[3]=c->r[31]|c->r[31]; // 801024A4
  c->lr=0x801024ACu; f_801F58BC(c); // 801024A8
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 801024AC
  c->r[0]=0u+0x00000001u; // 801024B0
  c->r[4]=0u+0x803A0000u; // 801024B4
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 801024B8
  c->r[4]=c->r[4]+0xFFFFF488u; // 801024BC
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 801024C0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 801024C4
  c->lr=0x801024CCu; f_80256EC4(c); // 801024C8
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 801024CC
  c->r[5]=0u+0x00000000u; // 801024D0
  W32(c->r[4]+0x000000E4u,c->r[3]); // 801024D4
  c->r[4]=R32(c->r[31]+0x00000394u); // 801024D8
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 801024DC
  c->r[0]=R8(c->r[4]+0x0000001Du); // 801024E0
  W8(c->r[3]+0x0000001Du,c->r[0]); // 801024E4
  c->r[3]=R32(c->r[31]+0x00000394u); // 801024E8
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 801024EC
  c->lr=0x801024F4u; f_80250BF4(c); // 801024F0
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 801024F4
  cmps(c,0,(int32_t)c->r[0],0); // 801024F8
  if (!crb(c,2)) { goto L_8010252C; } // 801024FC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80102500
  c->r[3]=c->r[31]|c->r[31]; // 80102504
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102508
  c->r[5]=0u+0x0000003Eu; // 8010250C
  c->r[12]=R32(c->r[12]+0x00000064u); // 80102510
  c->r[6]=0u+0x00000001u; // 80102514
  c->f[2]=c->f[1]; // 80102518
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 8010251C
  c->ctr=c->r[12]; // 80102520
  if (true) { c->lr=0x80102528u; dispatch(c,c->ctr); } // 80102524
  goto L_80102554; // 80102528
L_8010252C:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 8010252C
  c->r[3]=c->r[31]|c->r[31]; // 80102530
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102534
  c->r[5]=0u+0x0000003Fu; // 80102538
  c->r[12]=R32(c->r[12]+0x00000064u); // 8010253C
  c->r[6]=0u+0x00000001u; // 80102540
  c->f[2]=c->f[1]; // 80102544
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 80102548
  c->ctr=c->r[12]; // 8010254C
  if (true) { c->lr=0x80102554u; dispatch(c,c->ctr); } // 80102550
L_80102554:;
  c->r[4]=R32(c->r[31]+0x000003A0u); // 80102554
  c->r[3]=c->r[31]|c->r[31]; // 80102558
  c->lr=0x80102560u; f_801F58BC(c); // 8010255C
  c->r[3]=R32(c->r[31]+0x000003A0u); // 80102560
  c->r[29]=0u+0x00000000u; // 80102564
  c->r[30]=0u+0x803A0000u; // 80102568
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 8010256C
  c->r[4]=c->r[30]+0xFFFFF488u; // 80102570
  c->r[3]=R32(c->r[31]+0x000003A0u); // 80102574
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102578
  c->lr=0x80102580u; f_80256EC4(c); // 8010257C
  c->r[6]=R32(c->r[31]+0x000003A0u); // 80102580
  c->r[4]=c->r[30]+0xFFFFF488u; // 80102584
  c->r[4]=c->r[4]+0x00000009u; // 80102588
  c->r[5]=c->r[1]+0x00000008u; // 8010258C
  W32(c->r[6]+0x000000E4u,c->r[3]); // 80102590
  c->r[6]=0u+0x00000001u; // 80102594
  c->r[7]=R32(c->r[31]+0x00000394u); // 80102598
  c->r[3]=R32(c->r[31]+0x000003A0u); // 8010259C
  c->r[0]=R8(c->r[7]+0x0000001Du); // 801025A0
  W8(c->r[3]+0x0000001Du,c->r[0]); // 801025A4
  c->r[3]=R32(c->r[31]+0x00000394u); // 801025A8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 801025AC
  c->lr=0x801025B4u; f_80257018(c); // 801025B0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801025B4
  c->r[3]=c->r[31]+0x0000000Cu; // 801025B8
  c->r[5]=R32(c->r[31]+0x000003A0u); // 801025BC
  c->r[4]=0u+0x00000000u; // 801025C0
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801025C4
  {uint32_t ea=c->r[5]+0x0000005Cu; WF32(ea,c->f[1]);} // 801025C8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801025CC
  c->r[5]=R32(c->r[31]+0x000003A0u); // 801025D0
  {uint32_t ea=c->r[5]+0x00000060u; WF32(ea,c->f[1]);} // 801025D4
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801025D8
  c->r[5]=R32(c->r[31]+0x000003A0u); // 801025DC
  {uint32_t ea=c->r[5]+0x00000064u; WF32(ea,c->f[1]);} // 801025E0
  W32(c->r[31]+0x00000074u,c->r[29]); // 801025E4
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 801025E8
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 801025EC
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 801025F0
  W8(c->r[31]+0x00000028u,c->r[29]); // 801025F4
  W8(c->r[31]+0x00000029u,c->r[29]); // 801025F8
  c->lr=0x80102600u; f_80036430(c); // 801025FC
  c->r[3]=c->r[31]+0x00000010u; // 80102600
  c->r[4]=0u+0x00000000u; // 80102604
  c->lr=0x8010260Cu; f_80036430(c); // 80102608
  c->r[3]=c->r[31]+0x00000014u; // 8010260C
  c->r[4]=0u+0x00000000u; // 80102610
  c->lr=0x80102618u; f_80036430(c); // 80102614
  c->r[3]=c->r[31]|c->r[31]; // 80102618
  c->lr=0x80102620u; f_801F56F4(c); // 8010261C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 80102620
  c->r[3]=c->r[31]|c->r[31]; // 80102624
  c->r[12]=R32(c->r[12]+0x00000050u); // 80102628
  c->ctr=c->r[12]; // 8010262C
  if (true) { c->lr=0x80102634u; dispatch(c,c->ctr); } // 80102630
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102634
  W8(c->r[31]+0x0000008Du,c->r[29]); // 80102638
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[0]);} // 8010263C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80102640
  c->r[30]=R32(c->r[1]+0x00000048u); // 80102644
  c->r[29]=R32(c->r[1]+0x00000044u); // 80102648
  c->r[0]=R32(c->r[1]+0x00000054u); // 8010264C
  c->lr=c->r[0]; // 80102650
  c->r[1]=c->r[1]+0x00000050u; // 80102654
  return; // 80102658
}

// fn_8010265C
void f_8010265C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010265C
  c->r[0]=c->lr; // 80102660
  c->r[5]=0u+0x00000000u; // 80102664
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102668
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010266C
  c->r[31]=c->r[3]|c->r[3]; // 80102670
  c->r[3]=0u+0x000004D0u; // 80102674
  c->r[4]=R32(c->r[31]+0x00000394u); // 80102678
  c->r[4]=c->r[4]+0x0000010Cu; // 8010267C
  c->lr=0x80102684u; f_8024EE50(c); // 80102680
  cmps(c,0,(int32_t)c->r[3],0); // 80102684
  if (crb(c,2)) { goto L_80102694; } // 80102688
  c->r[3]=0u+0x00000000u; // 8010268C
  goto L_801026F8; // 80102690
L_80102694:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 80102694
  c->r[3]=0u+0x000000C9u; // 80102698
  c->r[5]=0u+0x00000000u; // 8010269C
  c->r[4]=c->r[4]+0x0000010Cu; // 801026A0
  c->lr=0x801026A8u; f_8024EE50(c); // 801026A4
  cmps(c,0,(int32_t)c->r[3],0); // 801026A8
  if (crb(c,2)) { goto L_801026B8; } // 801026AC
  c->r[3]=0u+0x00000000u; // 801026B0
  goto L_801026F8; // 801026B4
L_801026B8:;
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 801026B8
  c->r[3]=0u+0x000000CAu; // 801026BC
  c->r[5]=0u+0x00000000u; // 801026C0
  c->r[4]=c->r[4]+0x0000010Cu; // 801026C4
  c->lr=0x801026CCu; f_8024EE50(c); // 801026C8
  cmps(c,0,(int32_t)c->r[3],0); // 801026CC
  if (crb(c,2)) { goto L_801026DC; } // 801026D0
  c->r[3]=0u+0x00000000u; // 801026D4
  goto L_801026F8; // 801026D8
L_801026DC:;
  c->r[4]=R32(c->r[31]+0x000003A0u); // 801026DC
  c->r[3]=0u+0x000001B9u; // 801026E0
  c->r[5]=0u+0x00000000u; // 801026E4
  c->r[4]=c->r[4]+0x0000010Cu; // 801026E8
  c->lr=0x801026F0u; f_8024EE50(c); // 801026EC
  c->r[0]=cntlz(c->r[3]); // 801026F0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801026F4
L_801026F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801026F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801026FC
  c->lr=c->r[0]; // 80102700
  c->r[1]=c->r[1]+0x00000010u; // 80102704
  return; // 80102708
}

// fn_8010270C
void f_8010270C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010270C
  c->r[0]=c->lr; // 80102710
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80102714
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80102718
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 8010271C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[30]);} // 80102720
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,30,ea,0,0);} // 80102724
  W32(c->r[1]+0x000000BCu,c->r[31]); // 80102728
  c->r[31]=c->r[3]|c->r[3]; // 8010272C
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 80102730
  cmps(c,0,(int32_t)c->r[0],0); // 80102734
  if (!crb(c,2)) { goto L_80102D70; } // 80102738
  c->r[3]=R32(c->r[3]+0x00000394u); // 8010273C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102740
  c->lr=0x80102748u; f_802501B0(c); // 80102744
  c->r[3]=0u+0x80620000u; // 80102748
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010274C
  c->r[3]=c->r[3]+0x000079C0u; // 80102750
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102754
  {uint32_t ea=c->r[3]+0x00000060u; c->f[31]=c->ps1[31]=RF32(ea);} // 80102758
  fcmp(c,0,c->f[1],c->f[0]); // 8010275C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[30]=c->ps1[30]=RF32(ea);} // 80102760
  if (!crb(c,0)) { goto L_80102770; } // 80102764
  {uint32_t ea=c->r[2]+0xFFFFAD18u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102768
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 8010276C
L_80102770:;
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[30]); // 80102770
  c->f[1]=c->ps1[1]=S(std::fma(c->f[31],c->f[31],c->f[0])); // 80102774
  c->lr=0x8010277Cu; f_800689C8(c); // 80102778
  {uint32_t ea=c->r[2]+0xFFFFAD1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010277C
  fcmp(c,0,c->f[1],c->f[0]); // 80102780
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80102784
  if (!crb(c,2)) { goto L_801027D0; } // 80102788
  c->f[1]=c->f[30]; // 8010278C
  c->f[2]=c->f[31]; // 80102790
  c->lr=0x80102798u; f_8005C22C(c); // 80102794
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102798
  fcmp(c,0,c->f[1],c->f[0]); // 8010279C
  if (!crb(c,1)) { goto L_801027B8; } // 801027A0
  {uint32_t ea=c->r[2]+0xFFFFAD20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801027A4
  {uint32_t ea=c->r[2]+0xFFFFAD24u; c->f[0]=c->ps1[0]=RF32(ea);} // 801027A8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801027AC
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 801027B0
  goto L_801027D0; // 801027B4
L_801027B8:;
  {uint32_t ea=c->r[2]+0xFFFFAD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801027B8
  {uint32_t ea=c->r[2]+0xFFFFAD24u; c->f[2]=c->ps1[2]=RF32(ea);} // 801027BC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801027C0
  {uint32_t ea=c->r[2]+0xFFFFAD28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801027C4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801027C8
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801027CC
L_801027D0:;
  {uint32_t ea=c->r[2]+0xFFFFAD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801027D0
  {uint32_t ea=c->r[2]+0xFFFFAD2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801027D4
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[1]); // 801027D8
  fcmp(c,0,c->f[31],c->f[0]); // 801027DC
  if (!crb(c,1)) { goto L_801027E8; } // 801027E0
  c->f[31]=c->f[0]; // 801027E4
L_801027E8:;
  {uint32_t ea=c->r[2]+0xFFFFAD30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801027E8
  fcmp(c,0,c->f[31],c->f[0]); // 801027EC
  if (!crb(c,0)) { goto L_801027F8; } // 801027F0
  c->f[31]=c->f[0]; // 801027F4
L_801027F8:;
  c->r[0]=R8(c->r[31]+0x00000028u); // 801027F8
  cmps(c,0,(int32_t)c->r[0],2); // 801027FC
  if (crb(c,2)) { goto L_80102884; } // 80102800
  if (!crb(c,0)) { goto L_80102C38; } // 80102804
  cmps(c,0,(int32_t)c->r[0],0); // 80102808
  if (crb(c,2)) { goto L_8010281C; } // 8010280C
  if (!crb(c,0)) { goto L_80102844; } // 80102810
  goto L_80102C38; // 80102814
  goto L_80102C38; // 80102818
L_8010281C:;
  c->r[0]=R32(c->r[31]+0x00000074u); // 8010281C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80102820
  if (crb(c,2)) { goto L_80102C38; } // 80102824
  c->r[3]=c->r[31]+0x0000000Cu; // 80102828
  c->r[4]=0u+0x00000000u; // 8010282C
  c->lr=0x80102834u; f_80036430(c); // 80102830
  c->r[3]=R8(c->r[31]+0x00000028u); // 80102834
  c->r[0]=c->r[3]+0x00000001u; // 80102838
  W8(c->r[31]+0x00000028u,c->r[0]); // 8010283C
  goto L_80102C38; // 80102840
L_80102844:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80102844
  c->r[3]=c->r[31]+0x0000000Cu; // 80102848
  {uint32_t ea=c->r[2]+0xFFFFAD34u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010284C
  c->r[4]=0u+0x00000000u; // 80102850
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80102854
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 80102858
  c->lr=0x80102860u; f_800366DC(c); // 8010285C
  c->r[3]=c->r[31]+0x0000000Cu; // 80102860
  c->r[4]=0u+0x0000003Cu; // 80102864
  c->lr=0x8010286Cu; f_80038BCC(c); // 80102868
  cmps(c,0,(int32_t)c->r[3],0); // 8010286C
  if (crb(c,2)) { goto L_80102C38; } // 80102870
  c->r[3]=R8(c->r[31]+0x00000028u); // 80102874
  c->r[0]=c->r[3]+0x00000001u; // 80102878
  W8(c->r[31]+0x00000028u,c->r[0]); // 8010287C
  goto L_80102C38; // 80102880
L_80102884:;
  {uint32_t ea=c->r[2]+0xFFFFAD2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80102884
  {uint32_t ea=c->r[2]+0xFFFFAD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102888
  c->f[2]=c->ps1[2]=S(c->f[31]/c->f[0]); // 8010288C
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102890
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 80102894
  fcmp(c,0,c->f[2],c->f[0]); // 80102898
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8010289C
  if (!crb(c,2)) { goto L_801028B8; } // 801028A0
  {uint32_t ea=c->r[2]+0xFFFFAD3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801028A4
  fcmp(c,0,c->f[2],c->f[0]); // 801028A8
  if (!crb(c,0)) { goto L_801028C8; } // 801028AC
  c->f[2]=c->f[0]; // 801028B0
  goto L_801028C8; // 801028B4
L_801028B8:;
  {uint32_t ea=c->r[2]+0xFFFFAD40u; c->f[0]=c->ps1[0]=RF32(ea);} // 801028B8
  fcmp(c,0,c->f[2],c->f[0]); // 801028BC
  if (!crb(c,1)) { goto L_801028C8; } // 801028C0
  c->f[2]=c->f[0]; // 801028C4
L_801028C8:;
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801028C8
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801028CC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801028D0
  fcmp(c,0,c->f[1],c->f[0]); // 801028D4
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[1]);} // 801028D8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801028DC
  if (!crb(c,2)) { goto L_80102908; } // 801028E0
  {uint32_t ea=c->r[2]+0xFFFFAD44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801028E4
  fcmp(c,0,c->f[1],c->f[0]); // 801028E8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801028EC
  if (crb(c,2)) { goto L_80102928; } // 801028F0
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801028F4
  {uint32_t ea=c->r[2]+0xFFFFAD48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801028F8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801028FC
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 80102900
  goto L_80102928; // 80102904
L_80102908:;
  {uint32_t ea=c->r[2]+0xFFFFAD4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80102908
  fcmp(c,0,c->f[1],c->f[0]); // 8010290C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80102910
  if (crb(c,2)) { goto L_80102928; } // 80102914
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80102918
  {uint32_t ea=c->r[2]+0xFFFFAD48u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010291C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80102920
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 80102924
L_80102928:;
  {uint32_t ea=c->r[31]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 80102928
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010292C
  {uint32_t ea=c->r[2]+0xFFFFAD4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80102930
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80102934
  fcmp(c,0,c->f[1],c->f[0]); // 80102938
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[1]);} // 8010293C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80102940
  if (!crb(c,2)) { goto L_80102AE0; } // 80102944
  {uint32_t ea=c->r[2]+0xFFFFAD44u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102948
  fcmp(c,0,c->f[1],c->f[0]); // 8010294C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80102950
  if (!crb(c,2)) { goto L_80102AE0; } // 80102954
  c->r[3]=c->r[31]+0x00000010u; // 80102958
  c->r[4]=0u+0x00000000u; // 8010295C
  c->lr=0x80102964u; f_800366DC(c); // 80102960
  c->r[0]=R8(c->r[31]+0x0000008Cu); // 80102964
  c->r[3]=c->r[31]+0x00000010u; // 80102968
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8010296C
  c->r[4]=c->r[4]+0x0000005Au; // 80102970
  c->lr=0x80102978u; f_80038BCC(c); // 80102974
  cmps(c,0,(int32_t)c->r[3],0); // 80102978
  if (crb(c,2)) { goto L_80102A60; } // 8010297C
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80102980
  c->lr=0x80102988u; f_80211724(c); // 80102984
  c->r[0]=rotl(c->r[3],0)&0x0000000Fu; // 80102988
  cmpu(c,0,c->r[0],0x00000004u); // 8010298C
  if (!crb(c,0)) { goto L_801029A4; } // 80102990
  c->r[3]=c->r[31]+0x00000010u; // 80102994
  c->r[4]=0u+0x00000000u; // 80102998
  c->lr=0x801029A0u; f_80103038(c); // 8010299C
  goto L_801029E0; // 801029A0
L_801029A4:;
  cmpu(c,0,c->r[0],0x00000008u); // 801029A4
  if (!crb(c,0)) { goto L_801029BC; } // 801029A8
  c->r[3]=c->r[31]+0x00000010u; // 801029AC
  c->r[4]=0u+0x00000002u; // 801029B0
  c->lr=0x801029B8u; f_80103038(c); // 801029B4
  goto L_801029E0; // 801029B8
L_801029BC:;
  cmpu(c,0,c->r[0],0x0000000Cu); // 801029BC
  if (!crb(c,0)) { goto L_801029D4; } // 801029C0
  c->r[3]=c->r[31]+0x00000010u; // 801029C4
  c->r[4]=0u+0x00000004u; // 801029C8
  c->lr=0x801029D0u; f_80103038(c); // 801029CC
  goto L_801029E0; // 801029D0
L_801029D4:;
  c->r[3]=c->r[31]+0x00000010u; // 801029D4
  c->r[4]=0u+0x00000006u; // 801029D8
  c->lr=0x801029E0u; f_80103038(c); // 801029DC
L_801029E0:;
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801029E0
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801029E4
  fcmp(c,0,c->f[1],c->f[0]); // 801029E8
  if (!crb(c,0)) { goto L_80102A2C; } // 801029EC
  c->r[3]=R8(c->r[31]+0x0000008Cu); // 801029F0
  c->r[0]=0u+0x43300000u; // 801029F4
  W32(c->r[1]+0x000000B0u,c->r[0]); // 801029F8
  {uint32_t ea=c->r[2]+0xFFFFAD70u; c->f[3]=RF64(ea);} // 801029FC
  W32(c->r[1]+0x000000B4u,c->r[3]); // 80102A00
  {uint32_t ea=c->r[2]+0xFFFFAD54u; c->f[2]=c->ps1[2]=RF32(ea);} // 80102A04
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=RF64(ea);} // 80102A08
  {uint32_t ea=c->r[2]+0xFFFFAD50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102A0C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 80102A10
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102A14
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[2],c->f[3],-c->f[1])); // 80102A18
  c->f[1]=-c->f[1]; // 80102A1C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80102A20
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 80102A24
  goto L_80102A60; // 80102A28
L_80102A2C:;
  c->r[3]=R8(c->r[31]+0x0000008Cu); // 80102A2C
  c->r[0]=0u+0x43300000u; // 80102A30
  W32(c->r[1]+0x000000B0u,c->r[0]); // 80102A34
  {uint32_t ea=c->r[2]+0xFFFFAD70u; c->f[3]=RF64(ea);} // 80102A38
  W32(c->r[1]+0x000000B4u,c->r[3]); // 80102A3C
  {uint32_t ea=c->r[2]+0xFFFFAD54u; c->f[2]=c->ps1[2]=RF32(ea);} // 80102A40
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=RF64(ea);} // 80102A44
  {uint32_t ea=c->r[2]+0xFFFFAD50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102A48
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 80102A4C
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102A50
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[2],c->f[3],-c->f[1])); // 80102A54
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80102A58
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 80102A5C
L_80102A60:;
  c->r[4]=R8(c->r[31]+0x0000008Cu); // 80102A60
  c->r[3]=c->r[31]+0x00000010u; // 80102A64
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80102A68
  c->r[4]=c->r[0]+c->r[4]; // 80102A6C
  c->r[4]=c->r[4]+0x0000006Eu; // 80102A70
  c->lr=0x80102A78u; f_80038BCC(c); // 80102A74
  cmps(c,0,(int32_t)c->r[3],0); // 80102A78
  if (crb(c,2)) { goto L_80102AE0; } // 80102A7C
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80102A80
  c->lr=0x80102A88u; f_80211724(c); // 80102A84
  c->r[0]=rotl(c->r[3],0)&0x0000000Fu; // 80102A88
  cmpu(c,0,c->r[0],0x00000004u); // 80102A8C
  if (!crb(c,0)) { goto L_80102AA4; } // 80102A90
  c->r[3]=c->r[31]+0x00000010u; // 80102A94
  c->r[4]=0u+0x00000000u; // 80102A98
  c->lr=0x80102AA0u; f_80036430(c); // 80102A9C
  goto L_80102AE0; // 80102AA0
L_80102AA4:;
  cmpu(c,0,c->r[0],0x00000008u); // 80102AA4
  if (!crb(c,0)) { goto L_80102ABC; } // 80102AA8
  c->r[3]=c->r[31]+0x00000010u; // 80102AAC
  c->r[4]=0u+0x0000000Au; // 80102AB0
  c->lr=0x80102AB8u; f_80036430(c); // 80102AB4
  goto L_80102AE0; // 80102AB8
L_80102ABC:;
  cmpu(c,0,c->r[0],0x0000000Cu); // 80102ABC
  if (!crb(c,0)) { goto L_80102AD4; } // 80102AC0
  c->r[3]=c->r[31]+0x00000010u; // 80102AC4
  c->r[4]=0u+0x00000014u; // 80102AC8
  c->lr=0x80102AD0u; f_80036430(c); // 80102ACC
  goto L_80102AE0; // 80102AD0
L_80102AD4:;
  c->r[3]=c->r[31]+0x00000010u; // 80102AD4
  c->r[4]=0u+0x0000001Eu; // 80102AD8
  c->lr=0x80102AE0u; f_80036430(c); // 80102ADC
L_80102AE0:;
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102AE0
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102AE4
  fcmp(c,0,c->f[0],c->f[1]); // 80102AE8
  if (crb(c,2)) { goto L_80102B18; } // 80102AEC
  fcmp(c,0,c->f[1],c->f[0]); // 80102AF0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80102AF4
  if (!crb(c,2)) { goto L_80102B0C; } // 80102AF8
  {uint32_t ea=c->r[2]+0xFFFFAD58u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102AFC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80102B00
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 80102B04
  goto L_80102B18; // 80102B08
L_80102B0C:;
  {uint32_t ea=c->r[2]+0xFFFFAD58u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102B0C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80102B10
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 80102B14
L_80102B18:;
  {uint32_t ea=c->r[31]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 80102B18
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102B1C
  {uint32_t ea=c->r[2]+0xFFFFAD5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80102B20
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80102B24
  fcmp(c,0,c->f[1],c->f[0]); // 80102B28
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[1]);} // 80102B2C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80102B30
  if (crb(c,2)) { goto L_80102B48; } // 80102B34
  {uint32_t ea=c->r[2]+0xFFFFAD60u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102B38
  fcmp(c,0,c->f[1],c->f[0]); // 80102B3C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80102B40
  if (!crb(c,2)) { goto L_80102B88; } // 80102B44
L_80102B48:;
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102B48
  {uint32_t ea=c->r[2]+0xFFFFAD5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80102B4C
  c->r[3]=R8(c->r[31]+0x0000008Du); // 80102B50
  fcmp(c,0,c->f[1],c->f[0]); // 80102B54
  c->r[0]=c->r[3]+0x00000001u; // 80102B58
  W8(c->r[31]+0x0000008Du,c->r[0]); // 80102B5C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80102B60
  if (!crb(c,2)) { goto L_80102B6C; } // 80102B64
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 80102B68
L_80102B6C:;
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102B6C
  {uint32_t ea=c->r[2]+0xFFFFAD60u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102B70
  fcmp(c,0,c->f[1],c->f[0]); // 80102B74
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80102B78
  if (!crb(c,2)) { goto L_80102B90; } // 80102B7C
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 80102B80
  goto L_80102B90; // 80102B84
L_80102B88:;
  c->r[0]=0u+0x00000000u; // 80102B88
  W8(c->r[31]+0x0000008Du,c->r[0]); // 80102B8C
L_80102B90:;
  c->r[0]=R8(c->r[31]+0x0000008Cu); // 80102B90
  c->r[4]=R8(c->r[31]+0x0000008Du); // 80102B94
  c->r[3]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80102B98
  c->r[0]=c->r[3]+0x00000005u; // 80102B9C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80102BA0
  if (!crb(c,1)) { goto L_80102BBC; } // 80102BA4
  c->r[3]=R32(c->r[31]+0x00000074u); // 80102BA8
  c->r[0]=0u+0x00000004u; // 80102BAC
  W8(c->r[31]+0x00000028u,c->r[0]); // 80102BB0
  c->r[0]=c->r[3]|0x00000004u; // 80102BB4
  W32(c->r[31]+0x00000074u,c->r[0]); // 80102BB8
L_80102BBC:;
  {uint32_t ea=c->r[2]+0xFFFFAD2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80102BBC
  c->f[5]=-c->f[31]; // 80102BC0
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102BC4
  {uint32_t ea=c->r[2]+0xFFFFAD64u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102BC8
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 80102BCC
  {uint32_t ea=c->r[2]+0xFFFFAD5Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 80102BD0
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[1]); // 80102BD4
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80102BD8
  {uint32_t ea=c->r[2]+0xFFFFAD34u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102BDC
  c->f[5]=c->ps1[5]=S(c->f[5]); // 80102BE0
  c->f[6]=c->ps1[6]=S(c->f[3]/c->f[7]); // 80102BE4
  {uint32_t ea=c->r[31]+0x00000090u; c->f[3]=c->ps1[3]=RF32(ea);} // 80102BE8
  {uint32_t ea=c->r[2]+0xFFFFAD68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102BEC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80102BF0
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[6]);} // 80102BF4
  c->f[2]=c->ps1[2]=S(c->f[4]/c->f[7]); // 80102BF8
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 80102BFC
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[6]); // 80102C00
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 80102C04
  fcmp(c,0,c->f[1],c->f[0]); // 80102C08
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[4]);} // 80102C0C
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[2]);} // 80102C10
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80102C14
  if (!crb(c,2)) { goto L_80102C38; } // 80102C18
  c->r[3]=R8(c->r[31]+0x00000028u); // 80102C1C
  c->r[0]=R32(c->r[31]+0x00000074u); // 80102C20
  c->r[3]=c->r[3]+0x00000001u; // 80102C24
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 80102C28
  c->r[0]=c->r[0]|0x00000002u; // 80102C2C
  W8(c->r[31]+0x00000028u,c->r[3]); // 80102C30
  W32(c->r[31]+0x00000074u,c->r[0]); // 80102C34
L_80102C38:;
  c->r[3]=c->r[31]|c->r[31]; // 80102C38
  c->lr=0x80102C40u; f_801F56F4(c); // 80102C3C
  c->r[4]=R32(c->r[31]+0x00000398u); // 80102C40
  cmps(c,0,(int32_t)c->r[4],0); // 80102C44
  if (crb(c,2)) { goto L_80102C88; } // 80102C48
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 80102C4C
  cmps(c,0,(int32_t)c->r[0],0); // 80102C50
  if (crb(c,2)) { goto L_80102C88; } // 80102C54
  c->r[3]=R32(c->r[31]+0x00000394u); // 80102C58
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 80102C5C
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 80102C60
  c->r[3]=R32(c->r[31]+0x00000398u); // 80102C64
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102C68
  c->lr=0x80102C70u; f_802501B0(c); // 80102C6C
  c->r[3]=R32(c->r[31]+0x00000398u); // 80102C70
  c->r[4]=c->r[3]+0x000000B0u; // 80102C74
  c->lr=0x80102C7Cu; f_80250F18(c); // 80102C78
  c->r[3]=R32(c->r[31]+0x00000398u); // 80102C7C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102C80
  c->lr=0x80102C88u; f_8025037C(c); // 80102C84
L_80102C88:;
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 80102C88
  cmps(c,0,(int32_t)c->r[4],0); // 80102C8C
  if (crb(c,2)) { goto L_80102CD0; } // 80102C90
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 80102C94
  cmps(c,0,(int32_t)c->r[0],0); // 80102C98
  if (crb(c,2)) { goto L_80102CD0; } // 80102C9C
  c->r[3]=R32(c->r[31]+0x00000394u); // 80102CA0
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 80102CA4
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 80102CA8
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 80102CAC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102CB0
  c->lr=0x80102CB8u; f_802501B0(c); // 80102CB4
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 80102CB8
  c->r[4]=c->r[3]+0x000000B0u; // 80102CBC
  c->lr=0x80102CC4u; f_80250F18(c); // 80102CC0
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 80102CC4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102CC8
  c->lr=0x80102CD0u; f_8025037C(c); // 80102CCC
L_80102CD0:;
  c->r[3]=R32(c->r[31]+0x000003A0u); // 80102CD0
  cmps(c,0,(int32_t)c->r[3],0); // 80102CD4
  if (crb(c,2)) { goto L_80102F68; } // 80102CD8
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 80102CDC
  cmps(c,0,(int32_t)c->r[0],0); // 80102CE0
  if (crb(c,2)) { goto L_80102F68; } // 80102CE4
  c->r[0]=0u+0x00000000u; // 80102CE8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 80102CEC
  c->r[3]=R32(c->r[31]+0x000003A0u); // 80102CF0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102CF4
  c->lr=0x80102CFCu; f_802501B0(c); // 80102CF8
  c->r[3]=R32(c->r[31]+0x00000394u); // 80102CFC
  c->r[4]=0u+0x803A0000u; // 80102D00
  c->r[4]=c->r[4]+0xFFFFF488u; // 80102D04
  c->r[5]=c->r[1]+0x00000080u; // 80102D08
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102D0C
  c->r[4]=c->r[4]+0x00000009u; // 80102D10
  c->r[6]=0u+0x00000001u; // 80102D14
  c->lr=0x80102D1Cu; f_80257018(c); // 80102D18
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80102D1C
  c->r[3]=R32(c->r[31]+0x000003A0u); // 80102D20
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 80102D24
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80102D28
  c->r[3]=R32(c->r[31]+0x000003A0u); // 80102D2C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 80102D30
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80102D34
  c->r[3]=R32(c->r[31]+0x000003A0u); // 80102D38
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 80102D3C
  c->r[3]=R32(c->r[31]+0x000003A0u); // 80102D40
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102D44
  c->lr=0x80102D4Cu; f_8025037C(c); // 80102D48
  c->r[3]=c->r[1]+0x00000044u; // 80102D4C
  c->r[4]=c->r[1]+0x00000038u; // 80102D50
  c->r[5]=c->r[1]+0x0000002Cu; // 80102D54
  c->r[6]=c->r[1]+0x00000080u; // 80102D58
  c->r[7]=0u+0x00000000u; // 80102D5C
  c->lr=0x80102D64u; f_8002BE64(c); // 80102D60
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102D64
  c->lr=0x80102D6Cu; f_8026678C(c); // 80102D68
  goto L_80102F68; // 80102D6C
L_80102D70:;
  c->r[0]=R8(c->r[3]+0x00000028u); // 80102D70
  cmps(c,0,(int32_t)c->r[0],1); // 80102D74
  if (crb(c,2)) { goto L_80102DC4; } // 80102D78
  if (!crb(c,0)) { goto L_80102E30; } // 80102D7C
  cmps(c,0,(int32_t)c->r[0],0); // 80102D80
  if (!crb(c,0)) { goto L_80102D90; } // 80102D84
  goto L_80102E30; // 80102D88
  goto L_80102E30; // 80102D8C
L_80102D90:;
  c->r[3]=R32(c->r[3]+0x00000394u); // 80102D90
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102D94
  c->lr=0x80102D9Cu; f_802501B0(c); // 80102D98
  c->r[0]=R32(c->r[31]+0x00000074u); // 80102D9C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80102DA0
  if (crb(c,2)) { goto L_80102E30; } // 80102DA4
  c->r[3]=c->r[31]+0x0000000Cu; // 80102DA8
  c->r[4]=0u+0x00000000u; // 80102DAC
  c->lr=0x80102DB4u; f_80036430(c); // 80102DB0
  c->r[3]=R8(c->r[31]+0x00000028u); // 80102DB4
  c->r[0]=c->r[3]+0x00000001u; // 80102DB8
  W8(c->r[31]+0x00000028u,c->r[0]); // 80102DBC
  goto L_80102E30; // 80102DC0
L_80102DC4:;
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80102DC4
  {uint32_t ea=c->r[2]+0xFFFFAD34u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102DC8
  c->r[4]=R32(c->r[3]+0x00000394u); // 80102DCC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80102DD0
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80102DD4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 80102DD8
  c->lr=0x80102DE0u; f_802501B0(c); // 80102DDC
  cmps(c,0,(int32_t)c->r[3],0); // 80102DE0
  if (crb(c,2)) { goto L_80102E00; } // 80102DE4
  c->r[0]=R32(c->r[31]+0x00000074u); // 80102DE8
  c->r[3]=R8(c->r[31]+0x00000028u); // 80102DEC
  c->r[4]=c->r[0]|0x00000004u; // 80102DF0
  c->r[0]=c->r[3]+0x00000001u; // 80102DF4
  W32(c->r[31]+0x00000074u,c->r[4]); // 80102DF8
  W8(c->r[31]+0x00000028u,c->r[0]); // 80102DFC
L_80102E00:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 80102E00
  {uint32_t ea=c->r[2]+0xFFFFAD6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80102E04
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102E08
  fcmp(c,0,c->f[1],c->f[0]); // 80102E0C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80102E10
  if (!crb(c,2)) { goto L_80102E30; } // 80102E14
  c->r[0]=R32(c->r[31]+0x00000074u); // 80102E18
  c->r[3]=R8(c->r[31]+0x00000028u); // 80102E1C
  c->r[4]=c->r[0]|0x00000004u; // 80102E20
  c->r[0]=c->r[3]+0x00000001u; // 80102E24
  W32(c->r[31]+0x00000074u,c->r[4]); // 80102E28
  W8(c->r[31]+0x00000028u,c->r[0]); // 80102E2C
L_80102E30:;
  c->r[3]=c->r[31]|c->r[31]; // 80102E30
  c->lr=0x80102E38u; f_801F56F4(c); // 80102E34
  c->r[3]=R32(c->r[31]+0x00000398u); // 80102E38
  cmps(c,0,(int32_t)c->r[3],0); // 80102E3C
  if (crb(c,2)) { goto L_80102E7C; } // 80102E40
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 80102E44
  cmps(c,0,(int32_t)c->r[0],0); // 80102E48
  if (crb(c,2)) { goto L_80102E7C; } // 80102E4C
  c->r[0]=0u+0x00000001u; // 80102E50
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 80102E54
  c->r[3]=R32(c->r[31]+0x00000398u); // 80102E58
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102E5C
  c->lr=0x80102E64u; f_802501B0(c); // 80102E60
  c->r[3]=R32(c->r[31]+0x00000398u); // 80102E64
  c->r[4]=c->r[3]+0x000000B0u; // 80102E68
  c->lr=0x80102E70u; f_80250F18(c); // 80102E6C
  c->r[3]=R32(c->r[31]+0x00000398u); // 80102E70
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102E74
  c->lr=0x80102E7Cu; f_8025037C(c); // 80102E78
L_80102E7C:;
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 80102E7C
  cmps(c,0,(int32_t)c->r[3],0); // 80102E80
  if (crb(c,2)) { goto L_80102EC0; } // 80102E84
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 80102E88
  cmps(c,0,(int32_t)c->r[0],0); // 80102E8C
  if (crb(c,2)) { goto L_80102EC0; } // 80102E90
  c->r[0]=0u+0x00000001u; // 80102E94
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 80102E98
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 80102E9C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102EA0
  c->lr=0x80102EA8u; f_802501B0(c); // 80102EA4
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 80102EA8
  c->r[4]=c->r[3]+0x000000B0u; // 80102EAC
  c->lr=0x80102EB4u; f_80250F18(c); // 80102EB0
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 80102EB4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102EB8
  c->lr=0x80102EC0u; f_8025037C(c); // 80102EBC
L_80102EC0:;
  c->r[3]=R32(c->r[31]+0x000003A0u); // 80102EC0
  cmps(c,0,(int32_t)c->r[3],0); // 80102EC4
  if (crb(c,2)) { goto L_80102F68; } // 80102EC8
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 80102ECC
  cmps(c,0,(int32_t)c->r[0],0); // 80102ED0
  if (crb(c,2)) { goto L_80102F68; } // 80102ED4
  c->r[0]=0u+0x00000000u; // 80102ED8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 80102EDC
  c->r[3]=R32(c->r[31]+0x000003A0u); // 80102EE0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102EE4
  c->lr=0x80102EECu; f_802501B0(c); // 80102EE8
  c->r[3]=R32(c->r[31]+0x00000394u); // 80102EEC
  c->r[4]=0u+0x803A0000u; // 80102EF0
  c->r[4]=c->r[4]+0xFFFFF488u; // 80102EF4
  c->r[5]=c->r[1]+0x00000050u; // 80102EF8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102EFC
  c->r[4]=c->r[4]+0x00000009u; // 80102F00
  c->r[6]=0u+0x00000001u; // 80102F04
  c->lr=0x80102F0Cu; f_80257018(c); // 80102F08
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80102F0C
  c->r[3]=R32(c->r[31]+0x000003A0u); // 80102F10
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 80102F14
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80102F18
  c->r[3]=R32(c->r[31]+0x000003A0u); // 80102F1C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 80102F20
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80102F24
  c->r[3]=R32(c->r[31]+0x000003A0u); // 80102F28
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 80102F2C
  c->r[3]=R32(c->r[31]+0x000003A0u); // 80102F30
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80102F34
  c->lr=0x80102F3Cu; f_8025037C(c); // 80102F38
  c->r[3]=c->r[1]+0x00000020u; // 80102F3C
  c->r[4]=c->r[1]+0x00000014u; // 80102F40
  c->r[5]=c->r[1]+0x00000008u; // 80102F44
  c->r[6]=c->r[1]+0x00000050u; // 80102F48
  c->r[7]=0u+0x00000000u; // 80102F4C
  c->lr=0x80102F54u; f_8002BE64(c); // 80102F50
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102F54
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 80102F58
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80102F5C
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[1]);} // 80102F60
  c->lr=0x80102F68u; f_8026678C(c); // 80102F64
L_80102F68:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 80102F68
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80102F6C
  if (!crb(c,2)) { goto L_80103014; } // 80102F70
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80102F74
  if (!crb(c,2)) { goto L_80103014; } // 80102F78
  c->r[3]=c->r[31]+0x00000014u; // 80102F7C
  c->r[4]=0u+0x00000000u; // 80102F80
  c->lr=0x80102F88u; f_800366DC(c); // 80102F84
  c->r[3]=c->r[31]+0x00000014u; // 80102F88
  c->r[4]=0u+0x000000A0u; // 80102F8C
  c->lr=0x80102F94u; f_80038BCC(c); // 80102F90
  cmps(c,0,(int32_t)c->r[3],0); // 80102F94
  if (crb(c,2)) { goto L_80103014; } // 80102F98
  c->r[3]=c->r[31]+0x00000014u; // 80102F9C
  c->r[4]=0u+0x00000000u; // 80102FA0
  c->lr=0x80102FA8u; f_80036430(c); // 80102FA4
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80102FA8
  c->lr=0x80102FB0u; f_80211724(c); // 80102FAC
  c->r[0]=rotl(c->r[3],0)&0x0000000Fu; // 80102FB0
  cmpu(c,0,c->r[0],0x00000005u); // 80102FB4
  if (!crb(c,0)) { goto L_80102FD8; } // 80102FB8
  c->r[3]=c->r[31]|c->r[31]; // 80102FBC
  c->r[4]=0u+0x00000005u; // 80102FC0
  c->r[5]=0u+0x0000003Du; // 80102FC4
  c->r[6]=0u+0x00000001u; // 80102FC8
  c->r[7]=0u+0x00000001u; // 80102FCC
  c->lr=0x80102FD4u; f_8017900C(c); // 80102FD0
  goto L_80103014; // 80102FD4
L_80102FD8:;
  cmpu(c,0,c->r[0],0x0000000Au); // 80102FD8
  if (!crb(c,0)) { goto L_80102FFC; } // 80102FDC
  c->r[3]=c->r[31]|c->r[31]; // 80102FE0
  c->r[4]=0u+0x00000005u; // 80102FE4
  c->r[5]=0u+0x0000003Eu; // 80102FE8
  c->r[6]=0u+0x00000001u; // 80102FEC
  c->r[7]=0u+0x00000001u; // 80102FF0
  c->lr=0x80102FF8u; f_8017900C(c); // 80102FF4
  goto L_80103014; // 80102FF8
L_80102FFC:;
  c->r[3]=c->r[31]|c->r[31]; // 80102FFC
  c->r[4]=0u+0x00000005u; // 80103000
  c->r[5]=0u+0x0000003Fu; // 80103004
  c->r[6]=0u+0x00000001u; // 80103008
  c->r[7]=0u+0x00000001u; // 8010300C
  c->lr=0x80103014u; f_8017900C(c); // 80103010
L_80103014:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 80103014
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 80103018
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,30,ea,0,0);} // 8010301C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[30]=RF64(ea);} // 80103020
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80103024
  c->r[31]=R32(c->r[1]+0x000000BCu); // 80103028
  c->lr=c->r[0]; // 8010302C
  c->r[1]=c->r[1]+0x000000E0u; // 80103030
  return; // 80103034
}

// fn_80103038
void f_80103038(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103038
  c->r[0]=c->lr; // 8010303C
  c->r[4]=c->r[4]^0x80000000u; // 80103040
  {uint32_t ea=c->r[2]+0xFFFFAD10u; c->f[2]=RF64(ea);} // 80103044
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103048
  c->r[0]=0u+0x43300000u; // 8010304C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80103050
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103054
  W32(c->r[1]+0x00000008u,c->r[0]); // 80103058
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8010305C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80103060
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80103064
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 80103068
  c->lr=0x80103070u; f_802BA034(c); // 8010306C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103070
  c->lr=c->r[0]; // 80103074
  c->r[1]=c->r[1]+0x00000010u; // 80103078
  return; // 8010307C
}

// fn_80103080
void f_80103080(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 80103080
  W8(c->r[3]+0x0000008Cu,c->r[4]); // 80103084
  c->r[0]=c->r[0]|0x00000001u; // 80103088
  W32(c->r[3]+0x00000074u,c->r[0]); // 8010308C
  return; // 80103090
}

// fn_80103094
void f_80103094(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 80103094
  c->r[3]=rotl(c->r[0],31)&0x00000001u; // 80103098
  return; // 8010309C
}

// fn_801030A0
void f_801030A0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 801030A0
  c->r[3]=rotl(c->r[0],30)&0x00000001u; // 801030A4
  return; // 801030A8
}

// fn_801030AC
void f_801030AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801030AC
  c->r[0]=c->lr; // 801030B0
  cmps(c,0,(int32_t)c->r[3],0); // 801030B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801030B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801030BC
  c->r[31]=c->r[4]|c->r[4]; // 801030C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801030C4
  c->r[30]=c->r[3]|c->r[3]; // 801030C8
  if (crb(c,2)) { goto L_801030E8; } // 801030CC
  c->r[4]=0u+0x00000000u; // 801030D0
  c->lr=0x801030D8u; f_8026A06C(c); // 801030D4
  cmps(c,0,(int32_t)c->r[31],0); // 801030D8
  if (!crb(c,1)) { goto L_801030E8; } // 801030DC
  c->r[3]=c->r[30]|c->r[30]; // 801030E0
  c->lr=0x801030E8u; f_8026A268(c); // 801030E4
L_801030E8:;
  c->r[3]=c->r[30]|c->r[30]; // 801030E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801030EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801030F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801030F4
  c->lr=c->r[0]; // 801030F8
  c->r[1]=c->r[1]+0x00000010u; // 801030FC
  return; // 80103100
}

// fn_80103104
void f_80103104(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103104
  c->r[0]=c->lr; // 80103108
  c->r[4]=0u+0x00000000u; // 8010310C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80103110
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80103114
  W32(c->r[1]+0x00000018u,c->r[30]); // 80103118
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010311C
  c->r[29]=c->r[3]|c->r[3]; // 80103120
  c->lr=0x80103128u; f_801F57D0(c); // 80103124
  c->r[12]=R32(c->r[29]+0x000000B0u); // 80103128
  c->r[3]=c->r[29]|c->r[29]; // 8010312C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80103130
  c->ctr=c->r[12]; // 80103134
  if (true) { c->lr=0x8010313Cu; dispatch(c,c->ctr); } // 80103138
  c->r[3]=c->r[29]|c->r[29]; // 8010313C
  c->lr=0x80103144u; f_801F4B94(c); // 80103140
  c->r[3]=0u+0x00000003u; // 80103144
  c->r[0]=0u+0x00000075u; // 80103148
  W8(c->r[29]+0x0000006Cu,c->r[3]); // 8010314C
  c->r[3]=c->r[29]|c->r[29]; // 80103150
  c->r[4]=R32(c->r[29]+0x00000394u); // 80103154
  W8(c->r[29]+0x0000006Du,c->r[0]); // 80103158
  c->lr=0x80103160u; f_801F58BC(c); // 8010315C
  c->r[3]=R32(c->r[29]+0x00000394u); // 80103160
  c->r[30]=0u+0x00000001u; // 80103164
  c->r[31]=0u+0x803A0000u; // 80103168
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 8010316C
  c->r[4]=c->r[31]+0xFFFFF4A0u; // 80103170
  c->r[3]=R32(c->r[29]+0x00000394u); // 80103174
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80103178
  c->lr=0x80103180u; f_80256EC4(c); // 8010317C
  c->r[6]=R32(c->r[29]+0x00000394u); // 80103180
  c->r[5]=0u+0x805D0000u; // 80103184
  c->r[4]=c->r[29]+0x0000002Cu; // 80103188
  W32(c->r[6]+0x000000E4u,c->r[3]); // 8010318C
  c->r[3]=c->r[5]+0x000078B0u; // 80103190
  c->lr=0x80103198u; f_802351CC(c); // 80103194
  c->r[5]=R32(c->r[29]+0x00000394u); // 80103198
  c->r[4]=c->r[31]+0xFFFFF4A0u; // 8010319C
  c->r[4]=c->r[4]+0x00000009u; // 801031A0
  W8(c->r[5]+0x0000001Du,c->r[3]); // 801031A4
  c->r[3]=R32(c->r[29]+0x00000394u); // 801031A8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 801031AC
  c->lr=0x801031B4u; f_80256EC4(c); // 801031B0
  {uint32_t ea=c->r[2]+0xFFFFAD80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801031B4
  c->r[4]=0u+0x00000000u; // 801031B8
  W8(c->r[29]+0x00000074u,c->r[3]); // 801031BC
  c->r[3]=c->r[29]|c->r[29]; // 801031C0
  c->f[2]=c->f[1]; // 801031C4
  c->r[5]=0u+0x00000001u; // 801031C8
  W8(c->r[29]+0x0000006Fu,c->r[30]); // 801031CC
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[1]);} // 801031D0
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[1]);} // 801031D4
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[1]);} // 801031D8
  c->r[12]=R32(c->r[29]+0x000000B0u); // 801031DC
  c->r[12]=R32(c->r[12]+0x00000048u); // 801031E0
  c->ctr=c->r[12]; // 801031E4
  if (true) { c->lr=0x801031ECu; dispatch(c,c->ctr); } // 801031E8
  c->r[3]=c->r[29]|c->r[29]; // 801031EC
  c->lr=0x801031F4u; f_801F56F4(c); // 801031F0
  c->r[12]=R32(c->r[29]+0x000000B0u); // 801031F4
  c->r[3]=c->r[29]|c->r[29]; // 801031F8
  c->r[12]=R32(c->r[12]+0x00000050u); // 801031FC
  c->ctr=c->r[12]; // 80103200
  if (true) { c->lr=0x80103208u; dispatch(c,c->ctr); } // 80103204
  {uint32_t ea=c->r[2]+0xFFFFAD80u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103208
  c->r[3]=0u+0x00000000u; // 8010320C
  c->r[0]=0u+0x000000FFu; // 80103210
  W8(c->r[29]+0x00000075u,c->r[3]); // 80103214
  {uint32_t ea=c->r[29]+0x00000080u; WF32(ea,c->f[0]);} // 80103218
  W16(c->r[29]+0x0000008Cu,c->r[3]); // 8010321C
  W8(c->r[29]+0x00000076u,c->r[3]); // 80103220
  W16(c->r[29]+0x0000008Eu,c->r[0]); // 80103224
  {uint32_t ea=c->r[29]+0x00000090u; WF32(ea,c->f[0]);} // 80103228
  W8(c->r[29]+0x0000002Au,c->r[3]); // 8010322C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80103230
  c->r[30]=R32(c->r[1]+0x00000018u); // 80103234
  c->r[29]=R32(c->r[1]+0x00000014u); // 80103238
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010323C
  c->lr=c->r[0]; // 80103240
  c->r[1]=c->r[1]+0x00000020u; // 80103244
  return; // 80103248
}

// fn_8010324C
void f_8010324C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010324C
  c->r[0]=c->lr; // 80103250
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103254
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103258
  c->r[31]=c->r[3]|c->r[3]; // 8010325C
  c->r[12]=R32(c->r[3]+0x000000B0u); // 80103260
  c->r[12]=R32(c->r[12]+0x00000068u); // 80103264
  c->ctr=c->r[12]; // 80103268
  if (true) { c->lr=0x80103270u; dispatch(c,c->ctr); } // 8010326C
  c->r[3]=c->r[31]|c->r[31]; // 80103270
  c->lr=0x80103278u; f_801F4C0C(c); // 80103274
  c->r[3]=c->r[31]|c->r[31]; // 80103278
  c->lr=0x80103280u; f_801F56F4(c); // 8010327C
  c->r[3]=R16(c->r[31]+0x000003BEu); // 80103280
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 80103284
  if (crb(c,2)) { goto L_801032B0; } // 80103288
  {uint32_t ea=c->r[2]+0xFFFFAD80u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010328C
  c->r[3]=rotl(c->r[3],0)&0x00007FFFu; // 80103290
  c->r[0]=0u+0x00000000u; // 80103294
  W16(c->r[31]+0x000003BEu,c->r[3]); // 80103298
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 8010329C
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 801032A0
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 801032A4
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 801032A8
  W8(c->r[31]+0x00000075u,c->r[0]); // 801032AC
L_801032B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801032B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801032B4
  c->lr=c->r[0]; // 801032B8
  c->r[1]=c->r[1]+0x00000010u; // 801032BC
  return; // 801032C0
}

// fn_801032C4
void f_801032C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801032C4
  c->r[0]=c->lr; // 801032C8
  W32(c->r[1]+0x00000094u,c->r[0]); // 801032CC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 801032D0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 801032D4
  c->r[11]=c->r[1]+0x00000080u; // 801032D8
  c->lr=0x801032E0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801032DC
  c->r[0]=R16(c->r[3]+0x000003BEu); // 801032E0
  c->r[28]=c->r[3]|c->r[3]; // 801032E4
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 801032E8
  if (crb(c,2)) { goto L_801038CC; } // 801032EC
  c->r[27]=0u+0x80550000u; // 801032F0
  c->r[4]=0u+0x0000000Du; // 801032F4
  c->r[3]=c->r[27]+0xFFFFCE54u; // 801032F8
  c->lr=0x80103300u; f_8019C920(c); // 801032FC
  c->r[4]=0u+0x805D0000u; // 80103300
  c->r[29]=c->r[3]|c->r[3]; // 80103304
  c->r[3]=c->r[4]+0x00003E0Cu; // 80103308
  c->r[4]=c->r[1]+0x00000010u; // 8010330C
  c->lr=0x80103314u; f_801F93AC(c); // 80103310
  c->r[31]=0u+0x80620000u; // 80103314
  c->r[30]=c->r[3]|c->r[3]; // 80103318
  c->r[31]=c->r[31]+0x00007688u; // 8010331C
  c->r[4]=0u+0x00000018u; // 80103320
  c->r[3]=R32(c->r[31]+0x00000014u); // 80103324
  c->lr=0x8010332Cu; f_8003560C(c); // 80103328
  cmpu(c,0,c->r[3],0x00000009u); // 8010332C
  if (crb(c,0)) { goto L_8010335C; } // 80103330
  c->r[3]=R32(c->r[31]+0x00000014u); // 80103334
  c->r[4]=0u+0x00000015u; // 80103338
  c->lr=0x80103340u; f_80038AF4(c); // 8010333C
  cmps(c,0,(int32_t)c->r[3],0); // 80103340
  if (!crb(c,2)) { goto L_8010335C; } // 80103344
  c->r[3]=R32(c->r[31]+0x00000014u); // 80103348
  c->r[4]=0u+0x0000008Au; // 8010334C
  c->lr=0x80103354u; f_80038AF4(c); // 80103350
  cmps(c,0,(int32_t)c->r[3],0); // 80103354
  if (crb(c,2)) { goto L_801033FC; } // 80103358
L_8010335C:;
  c->r[0]=R8(c->r[28]+0x00000075u); // 8010335C
  cmps(c,0,(int32_t)c->r[0],0); // 80103360
  if (!crb(c,2)) { goto L_801033C0; } // 80103364
  c->r[0]=0u+0x00000001u; // 80103368
  {uint32_t ea=c->r[2]+0xFFFFAD80u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010336C
  W8(c->r[28]+0x00000075u,c->r[0]); // 80103370
  c->r[3]=c->r[28]|c->r[28]; // 80103374
  c->f[2]=c->f[1]; // 80103378
  c->r[4]=0u+0x00000001u; // 8010337C
  c->r[12]=R32(c->r[28]+0x000000B0u); // 80103380
  c->r[5]=0u+0x00000001u; // 80103384
  c->r[12]=R32(c->r[12]+0x00000048u); // 80103388
  c->ctr=c->r[12]; // 8010338C
  if (true) { c->lr=0x80103394u; dispatch(c,c->ctr); } // 80103390
  c->r[0]=0u+0x00000064u; // 80103394
  {uint32_t ea=c->r[2]+0xFFFFAD80u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103398
  W16(c->r[28]+0x000003BCu,c->r[0]); // 8010339C
  c->r[3]=c->r[29]|c->r[29]; // 801033A0
  c->f[2]=c->f[1]; // 801033A4
  c->r[4]=0u+0x00000010u; // 801033A8
  c->r[12]=R32(c->r[29]+0x000000B0u); // 801033AC
  c->r[5]=0u+0x00000001u; // 801033B0
  c->r[12]=R32(c->r[12]+0x00000048u); // 801033B4
  c->ctr=c->r[12]; // 801033B8
  if (true) { c->lr=0x801033C0u; dispatch(c,c->ctr); } // 801033BC
L_801033C0:;
  c->r[3]=R32(c->r[28]+0x00000394u); // 801033C0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 801033C4
  c->lr=0x801033CCu; f_802501B0(c); // 801033C8
  cmps(c,0,(int32_t)c->r[3],0); // 801033CC
  if (crb(c,2)) { goto L_8010385C; } // 801033D0
  c->r[12]=R32(c->r[28]+0x000000B0u); // 801033D4
  c->r[3]=c->r[28]|c->r[28]; // 801033D8
  {uint32_t ea=c->r[2]+0xFFFFAD80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801033DC
  c->r[4]=0u+0x00000001u; // 801033E0
  c->r[12]=R32(c->r[12]+0x00000048u); // 801033E4
  c->r[5]=0u+0x00000001u; // 801033E8
  c->f[2]=c->f[1]; // 801033EC
  c->ctr=c->r[12]; // 801033F0
  if (true) { c->lr=0x801033F8u; dispatch(c,c->ctr); } // 801033F4
  goto L_8010385C; // 801033F8
L_801033FC:;
  c->r[3]=c->r[27]+0xFFFFCE54u; // 801033FC
  c->lr=0x80103404u; f_800402C8(c); // 80103400
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80103404
  cmpu(c,0,c->r[0],0x00000003u); // 80103408
  if (!crb(c,2)) { goto L_80103918; } // 8010340C
  c->r[3]=c->r[27]+0xFFFFCE54u; // 80103410
  c->lr=0x80103418u; f_8005891C(c); // 80103414
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80103418
  cmpu(c,0,c->r[0],0x00000003u); // 8010341C
  if (crb(c,2)) { goto L_80103428; } // 80103420
  goto L_80103918; // 80103424
L_80103428:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80103428
  c->r[4]=0u+0x0000001Fu; // 8010342C
  c->lr=0x80103434u; f_80038AF4(c); // 80103430
  c->r[4]=R16(c->r[28]+0x0000008Cu); // 80103434
  c->r[31]=c->r[3]|c->r[3]; // 80103438
  cmpu(c,0,c->r[4],0x0000FFFFu); // 8010343C
  if (crb(c,2)) { goto L_80103534; } // 80103440
  c->r[3]=c->r[4]+0x00000001u; // 80103444
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80103448
  W16(c->r[28]+0x0000008Cu,c->r[3]); // 8010344C
  cmpu(c,0,c->r[0],0x0000001Eu); // 80103450
  if (!crb(c,1)) { goto L_80103464; } // 80103454
  c->r[3]=0u+0x00010000u; // 80103458
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8010345C
  W16(c->r[28]+0x0000008Cu,c->r[0]); // 80103460
L_80103464:;
  c->r[3]=0u+0x00000000u; // 80103464
  c->r[4]=0u+0x00000000u; // 80103468
  c->r[5]=0u+0x00000008u; // 8010346C
  c->lr=0x80103474u; f_8027C0C8(c); // 80103470
  cmpu(c,0,c->r[31],0x00000001u); // 80103474
  if (!crb(c,2)) { goto L_801034D8; } // 80103478
  c->r[0]=R16(c->r[28]+0x0000008Eu); // 8010347C
  cmpu(c,0,c->r[0],0x00000001u); // 80103480
  if (!crb(c,2)) { goto L_801034B0; } // 80103484
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80103488
  {uint32_t ea=c->r[2]+0xFFFFAD84u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010348C
  {uint32_t ea=c->r[2]+0xFFFFAD88u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103490
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80103494
  fcmp(c,0,c->f[1],c->f[0]); // 80103498
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[1]);} // 8010349C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801034A0
  if (!crb(c,2)) { goto L_80103588; } // 801034A4
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[0]);} // 801034A8
  goto L_80103588; // 801034AC
L_801034B0:;
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801034B0
  {uint32_t ea=c->r[2]+0xFFFFAD8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801034B4
  {uint32_t ea=c->r[2]+0xFFFFAD84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801034B8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801034BC
  fcmp(c,0,c->f[1],c->f[0]); // 801034C0
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[1]);} // 801034C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801034C8
  if (!crb(c,2)) { goto L_80103588; } // 801034CC
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[0]);} // 801034D0
  goto L_80103588; // 801034D4
L_801034D8:;
  c->r[0]=R16(c->r[28]+0x0000008Eu); // 801034D8
  cmpu(c,0,c->r[0],0x00000001u); // 801034DC
  if (!crb(c,2)) { goto L_8010350C; } // 801034E0
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801034E4
  {uint32_t ea=c->r[2]+0xFFFFAD84u; c->f[1]=c->ps1[1]=RF32(ea);} // 801034E8
  {uint32_t ea=c->r[2]+0xFFFFAD88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801034EC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801034F0
  fcmp(c,0,c->f[1],c->f[0]); // 801034F4
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[1]);} // 801034F8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801034FC
  if (!crb(c,2)) { goto L_80103588; } // 80103500
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[0]);} // 80103504
  goto L_80103588; // 80103508
L_8010350C:;
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8010350C
  {uint32_t ea=c->r[2]+0xFFFFAD84u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103510
  {uint32_t ea=c->r[2]+0xFFFFAD90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103514
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80103518
  fcmp(c,0,c->f[1],c->f[0]); // 8010351C
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[1]);} // 80103520
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80103524
  if (!crb(c,2)) { goto L_80103588; } // 80103528
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[0]);} // 8010352C
  goto L_80103588; // 80103530
L_80103534:;
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; cr0(c,c->r[3]); // 80103534
  if (crb(c,2)) { goto L_80103578; } // 80103538
  c->r[0]=R16(c->r[28]+0x0000008Eu); // 8010353C
  cmpu(c,0,c->r[3],c->r[0]); // 80103540
  if (crb(c,2)) { goto L_80103554; } // 80103544
  c->r[0]=0u+0x00000000u; // 80103548
  W8(c->r[28]+0x00000076u,c->r[0]); // 8010354C
  goto L_80103574; // 80103550
L_80103554:;
  c->r[3]=R8(c->r[28]+0x00000076u); // 80103554
  c->r[3]=c->r[3]+0x00000001u; // 80103558
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8010355C
  W8(c->r[28]+0x00000076u,c->r[3]); // 80103560
  cmpu(c,0,c->r[0],0x00000004u); // 80103564
  if (crb(c,0)) { goto L_80103574; } // 80103568
  c->r[0]=0u+0x00000000u; // 8010356C
  W16(c->r[28]+0x0000008Cu,c->r[0]); // 80103570
L_80103574:;
  W16(c->r[28]+0x0000008Eu,c->r[30]); // 80103574
L_80103578:;
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80103578
  {uint32_t ea=c->r[2]+0xFFFFAD94u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010357C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80103580
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[0]);} // 80103584
L_80103588:;
  c->r[3]=0u+0x80620000u; // 80103588
  c->r[4]=0u+0x00000015u; // 8010358C
  c->r[3]=c->r[3]+0x00007688u; // 80103590
  c->r[3]=R32(c->r[3]+0x00000014u); // 80103594
  c->lr=0x8010359Cu; f_80038AF4(c); // 80103598
  cmps(c,0,(int32_t)c->r[3],0); // 8010359C
  if (!crb(c,2)) { goto L_801037A4; } // 801035A0
  c->r[3]=0u+0x80550000u; // 801035A4
  c->r[4]=0u+0x0000002Cu; // 801035A8
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801035AC
  c->lr=0x801035B4u; f_8019C920(c); // 801035B0
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801035B4
  c->r[27]=c->r[3]|c->r[3]; // 801035B8
  c->lr=0x801035C0u; f_8002C1B0(c); // 801035BC
  {uint32_t ea=c->r[28]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 801035C0
  cmpu(c,0,c->r[31],0x00000001u); // 801035C4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801035C8
  {uint32_t ea=c->r[28]+0x00000090u; WF32(ea,c->f[0]);} // 801035CC
  if (!crb(c,2)) { goto L_801035DC; } // 801035D0
  {uint32_t ea=c->r[2]+0xFFFFAD98u; c->f[31]=c->ps1[31]=RF32(ea);} // 801035D4
  goto L_801035E0; // 801035D8
L_801035DC:;
  {uint32_t ea=c->r[2]+0xFFFFAD9Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801035DC
L_801035E0:;
  {uint32_t ea=c->r[28]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 801035E0
  fcmp(c,0,c->f[0],c->f[31]); // 801035E4
  if (!crb(c,1)) { goto L_80103610; } // 801035E8
  c->r[3]=c->r[28]|c->r[28]; // 801035EC
  c->r[4]=0u+0x00000004u; // 801035F0
  c->r[5]=0u+0x0000002Au; // 801035F4
  c->r[6]=0u+0x00000001u; // 801035F8
  c->r[7]=0u+0x00000001u; // 801035FC
  c->lr=0x80103604u; f_8017900C(c); // 80103600
  {uint32_t ea=c->r[28]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103604
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80103608
  {uint32_t ea=c->r[28]+0x00000090u; WF32(ea,c->f[0]);} // 8010360C
L_80103610:;
  {uint32_t ea=c->r[28]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103610
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103614
  {uint32_t ea=c->r[2]+0xFFFFAD80u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103618
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 8010361C
  fcmp(c,0,c->f[2],c->f[1]); // 80103620
  {uint32_t ea=c->r[28]+0x00000080u; WF32(ea,c->f[2]);} // 80103624
  if (!crb(c,0)) { goto L_80103634; } // 80103628
  {uint32_t ea=c->r[28]+0x00000080u; WF32(ea,c->f[1]);} // 8010362C
  goto L_80103708; // 80103630
L_80103634:;
  {uint32_t ea=c->r[2]+0xFFFFADA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103634
  fcmp(c,0,c->f[2],c->f[0]); // 80103638
  if (!crb(c,1)) { goto L_80103680; } // 8010363C
  c->r[0]=R16(c->r[28]+0x000003BEu); // 80103640
  cmpu(c,0,c->r[31],0x00000001u); // 80103644
  c->r[0]=c->r[0]|0x00004000u; // 80103648
  W16(c->r[28]+0x000003BEu,c->r[0]); // 8010364C
  if (!crb(c,2)) { goto L_8010365C; } // 80103650
  {uint32_t ea=c->r[28]+0x00000080u; WF32(ea,c->f[0]);} // 80103654
  goto L_80103708; // 80103658
L_8010365C:;
  c->r[3]=0u+0x80620000u; // 8010365C
  {uint32_t ea=c->r[28]+0x00000080u; WF32(ea,c->f[1]);} // 80103660
  c->r[3]=c->r[3]+0x00007688u; // 80103664
  c->r[4]=0u+0x00000020u; // 80103668
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[1]);} // 8010366C
  {uint32_t ea=c->r[28]+0x00000084u; WF32(ea,c->f[1]);} // 80103670
  c->r[3]=R32(c->r[3]+0x00000014u); // 80103674
  c->lr=0x8010367Cu; f_80038A08(c); // 80103678
  goto L_80103708; // 8010367C
L_80103680:;
  cmps(c,0,(int32_t)c->r[27],0); // 80103680
  if (crb(c,2)) { goto L_80103708; } // 80103684
  c->r[12]=R32(c->r[27]+0x000000B0u); // 80103688
  c->f[2]=c->f[1]; // 8010368C
  c->r[3]=c->r[27]|c->r[27]; // 80103690
  c->r[4]=0u+0x00000002u; // 80103694
  c->r[12]=R32(c->r[12]+0x00000048u); // 80103698
  c->r[5]=0u+0x00000000u; // 8010369C
  c->ctr=c->r[12]; // 801036A0
  if (true) { c->lr=0x801036A8u; dispatch(c,c->ctr); } // 801036A4
  c->r[3]=c->r[27]|c->r[27]; // 801036A8
  c->r[4]=c->r[1]+0x0000000Cu; // 801036AC
  c->r[5]=0u+0x00000000u; // 801036B0
  c->lr=0x801036B8u; f_8007C6C8(c); // 801036B4
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801036B8
  {uint32_t ea=c->r[2]+0xFFFFADA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801036BC
  {uint32_t ea=c->r[28]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 801036C0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 801036C4
  {uint32_t ea=c->r[2]+0xFFFFAD80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801036C8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801036CC
  fcmp(c,0,c->f[1],c->f[0]); // 801036D0
  {uint32_t ea=c->r[28]+0x00000084u; WF32(ea,c->f[1]);} // 801036D4
  if (!crb(c,0)) { goto L_801036F0; } // 801036D8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801036DC
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801036E0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801036E4
  {uint32_t ea=c->r[28]+0x00000084u; WF32(ea,c->f[0]);} // 801036E8
  goto L_80103708; // 801036EC
L_801036F0:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801036F0
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801036F4
  fcmp(c,0,c->f[1],c->f[0]); // 801036F8
  if (!crb(c,1)) { goto L_80103708; } // 801036FC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80103700
  {uint32_t ea=c->r[28]+0x00000084u; WF32(ea,c->f[0]);} // 80103704
L_80103708:;
  cmpu(c,0,c->r[31],0x00000001u); // 80103708
  if (!crb(c,2)) { goto L_80103760; } // 8010370C
  c->r[3]=0u+0x80550000u; // 80103710
  c->r[4]=0u+0x00000010u; // 80103714
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80103718
  c->lr=0x80103720u; f_8019C920(c); // 8010371C
  cmps(c,0,(int32_t)c->r[3],0); // 80103720
  if (crb(c,2)) { goto L_80103760; } // 80103724
  {uint32_t ea=c->r[28]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103728
  {uint32_t ea=c->r[2]+0xFFFFADA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010372C
  {uint32_t ea=c->r[2]+0xFFFFADA8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103730
  c->f[4]=c->ps1[4]=S(c->f[1]/c->f[0]); // 80103734
  {uint32_t ea=c->r[2]+0xFFFFAD8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80103738
  {uint32_t ea=c->r[2]+0xFFFFADB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010373C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[3]);} // 80103740
  {uint32_t ea=c->r[2]+0xFFFFADACu; c->f[3]=c->ps1[3]=RF32(ea);} // 80103744
  {uint32_t ea=c->r[2]+0xFFFFADB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103748
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 8010374C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 80103750
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 80103754
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[2],c->f[1])); // 80103758
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8010375C
L_80103760:;
  cmps(c,0,(int32_t)c->r[27],0); // 80103760
  if (crb(c,2)) { goto L_8010377C; } // 80103764
  c->r[3]=c->r[27]|c->r[27]; // 80103768
  c->r[4]=0u+0x00000000u; // 8010376C
  c->lr=0x80103774u; f_80039840(c); // 80103770
  {uint32_t ea=c->r[28]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103774
  c->lr=0x8010377Cu; f_802519A8(c); // 80103778
L_8010377C:;
  c->r[12]=R32(c->r[29]+0x000000B0u); // 8010377C
  c->r[3]=c->r[29]|c->r[29]; // 80103780
  {uint32_t ea=c->r[2]+0xFFFFAD80u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103784
  c->r[4]=0u+0x00000006u; // 80103788
  c->r[12]=R32(c->r[12]+0x00000048u); // 8010378C
  c->r[5]=0u+0x00000000u; // 80103790
  c->f[2]=c->f[1]; // 80103794
  c->ctr=c->r[12]; // 80103798
  if (true) { c->lr=0x801037A0u; dispatch(c,c->ctr); } // 8010379C
  goto L_801037F4; // 801037A0
L_801037A4:;
  c->r[0]=rotl(c->r[30],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801037A4
  if (crb(c,2)) { goto L_801037F4; } // 801037A8
  c->r[12]=R32(c->r[28]+0x000000B0u); // 801037AC
  c->r[3]=c->r[28]|c->r[28]; // 801037B0
  {uint32_t ea=c->r[2]+0xFFFFAD80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801037B4
  c->r[4]=0u+0x00000001u; // 801037B8
  c->r[12]=R32(c->r[12]+0x00000048u); // 801037BC
  c->r[5]=0u+0x00000000u; // 801037C0
  c->f[2]=c->f[1]; // 801037C4
  c->ctr=c->r[12]; // 801037C8
  if (true) { c->lr=0x801037D0u; dispatch(c,c->ctr); } // 801037CC
  c->r[12]=R32(c->r[29]+0x000000B0u); // 801037D0
  c->r[3]=c->r[29]|c->r[29]; // 801037D4
  {uint32_t ea=c->r[2]+0xFFFFAD80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801037D8
  c->r[4]=0u+0x00000010u; // 801037DC
  c->r[12]=R32(c->r[12]+0x00000048u); // 801037E0
  c->r[5]=0u+0x00000000u; // 801037E4
  c->f[2]=c->f[1]; // 801037E8
  c->ctr=c->r[12]; // 801037EC
  if (true) { c->lr=0x801037F4u; dispatch(c,c->ctr); } // 801037F0
L_801037F4:;
  {uint32_t ea=c->r[28]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 801037F4
  {uint32_t ea=c->r[2]+0xFFFFAD9Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801037F8
  {uint32_t ea=c->r[28]+0x00000078u; WF32(ea,c->f[0]);} // 801037FC
  goto L_80103810; // 80103800
L_80103804:;
  {uint32_t ea=c->r[28]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103804
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80103808
  {uint32_t ea=c->r[28]+0x00000078u; WF32(ea,c->f[0]);} // 8010380C
L_80103810:;
  {uint32_t ea=c->r[28]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103810
  fcmp(c,0,c->f[1],c->f[2]); // 80103814
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80103818
  if (crb(c,2)) { IRQCHK(c); goto L_80103804; } // 8010381C
  {uint32_t ea=c->r[2]+0xFFFFAD80u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103820
  c->r[5]=c->r[1]+0x00000014u; // 80103824
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80103828
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8010382C
  c->r[4]=R32(c->r[1]+0x00000020u); // 80103830
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80103834
  c->r[3]=R32(c->r[1]+0x00000024u); // 80103838
  c->r[0]=R32(c->r[1]+0x00000028u); // 8010383C
  W32(c->r[1]+0x00000014u,c->r[4]); // 80103840
  W32(c->r[1]+0x00000018u,c->r[3]); // 80103844
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80103848
  c->r[3]=R32(c->r[28]+0x00000394u); // 8010384C
  c->r[4]=R8(c->r[28]+0x00000074u); // 80103850
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 80103854
  c->lr=0x8010385Cu; f_8025E9C0(c); // 80103858
L_8010385C:;
  c->r[3]=R32(c->r[28]+0x00000394u); // 8010385C
  c->r[4]=0u+0x803A0000u; // 80103860
  c->r[4]=c->r[4]+0xFFFFF4A0u; // 80103864
  c->r[5]=c->r[1]+0x00000030u; // 80103868
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 8010386C
  c->r[4]=c->r[4]+0x00000010u; // 80103870
  c->r[6]=0u+0x00000001u; // 80103874
  c->lr=0x8010387Cu; f_80257018(c); // 80103878
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010387C
  c->r[0]=0u+0x00000001u; // 80103880
  {uint32_t ea=c->r[2]+0xFFFFADB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103884
  {uint32_t ea=c->r[2]+0xFFFFADBCu; c->f[4]=c->ps1[4]=RF32(ea);} // 80103888
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 8010388C
  {uint32_t ea=c->r[2]+0xFFFFADC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103890
  {uint32_t ea=c->r[2]+0xFFFFAD80u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103894
  {uint32_t ea=c->r[2]+0xFFFFAD98u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103898
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[2]);} // 8010389C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801038A0
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 801038A4
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[2]);} // 801038A8
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801038AC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801038B0
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[2]);} // 801038B4
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[1]);} // 801038B8
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[0]);} // 801038BC
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[1]);} // 801038C0
  W8(c->r[29]+0x0000006Fu,c->r[0]); // 801038C4
  goto L_80103918; // 801038C8
L_801038CC:;
  c->r[3]=0u+0x80550000u; // 801038CC
  c->r[4]=0u+0x0000002Cu; // 801038D0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801038D4
  c->lr=0x801038DCu; f_8019C920(c); // 801038D8
  cmps(c,0,(int32_t)c->r[3],0); // 801038DC
  c->r[27]=c->r[3]|c->r[3]; // 801038E0
  if (crb(c,2)) { goto L_80103918; } // 801038E4
  c->r[4]=c->r[1]+0x00000008u; // 801038E8
  c->r[5]=0u+0x00000000u; // 801038EC
  c->lr=0x801038F4u; f_8007C6C8(c); // 801038F0
  c->r[3]=R32(c->r[1]+0x00000008u); // 801038F4
  c->r[0]=R32(c->r[3]+0x00000030u); // 801038F8
  cmps(c,0,(int32_t)c->r[0],2); // 801038FC
  if (!crb(c,2)) { goto L_80103918; } // 80103900
  c->r[3]=c->r[27]|c->r[27]; // 80103904
  c->r[4]=0u+0x00000000u; // 80103908
  c->lr=0x80103910u; f_80039840(c); // 8010390C
  {uint32_t ea=c->r[28]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103910
  c->lr=0x80103918u; f_802519A8(c); // 80103914
L_80103918:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 80103918
  c->r[11]=c->r[1]+0x00000080u; // 8010391C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 80103920
  c->lr=0x80103928u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80103924
  c->r[0]=R32(c->r[1]+0x00000094u); // 80103928
  c->lr=c->r[0]; // 8010392C
  c->r[1]=c->r[1]+0x00000090u; // 80103930
  return; // 80103934
}

// fn_80103938
void f_80103938(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103938
  c->r[0]=c->lr; // 8010393C
  c->r[4]=c->r[3]|c->r[3]; // 80103940
  c->r[3]=0u+0x000003D0u; // 80103944
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103948
  c->r[5]=0u+0x00000000u; // 8010394C
  c->r[4]=R32(c->r[4]+0x00000394u); // 80103950
  c->r[4]=c->r[4]+0x0000010Cu; // 80103954
  c->lr=0x8010395Cu; f_8024EE50(c); // 80103958
  c->r[0]=cntlz(c->r[3]); // 8010395C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80103960
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103964
  c->lr=c->r[0]; // 80103968
  c->r[1]=c->r[1]+0x00000010u; // 8010396C
  return; // 80103970
}

// fn_80103974
void f_80103974(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103974
  c->r[0]=c->lr; // 80103978
  c->r[7]=0u+0x803D0000u; // 8010397C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80103980
  c->r[0]=0u+0x00000000u; // 80103984
  c->r[4]=c->r[1]+0x00000008u; // 80103988
  W16(c->r[3]+0x000003BCu,c->r[0]); // 8010398C
  {uint32_t ea=c->r[7]+0x000063B0u; c->r[6]=R32(ea); c->r[7]=ea;} // 80103990
  c->r[5]=R32(c->r[7]+0x00000004u); // 80103994
  c->r[0]=R32(c->r[7]+0x00000008u); // 80103998
  W32(c->r[1]+0x00000008u,c->r[6]); // 8010399C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801039A0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801039A4
  c->lr=0x801039ACu; f_801039BC(c); // 801039A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801039AC
  c->lr=c->r[0]; // 801039B0
  c->r[1]=c->r[1]+0x00000020u; // 801039B4
  return; // 801039B8
}

// fn_801039BC
void f_801039BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801039BC
  c->r[0]=c->lr; // 801039C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801039C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801039C8
  c->r[31]=c->r[4]|c->r[4]; // 801039CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801039D0
  c->r[30]=c->r[3]|c->r[3]; // 801039D4
  c->r[3]=c->r[31]|c->r[31]; // 801039D8
  c->lr=0x801039E0u; f_802B9FDC(c); // 801039DC
  cmps(c,0,(int32_t)c->r[3],0); // 801039E0
  if (crb(c,2)) { goto L_80103A00; } // 801039E4
  c->r[3]=R32(c->r[31]+0x00000000u); // 801039E8
  c->r[0]=R32(c->r[31]+0x00000004u); // 801039EC
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 801039F0
  W32(c->r[30]+0x00000020u,c->r[0]); // 801039F4
  c->r[0]=R32(c->r[31]+0x00000008u); // 801039F8
  W32(c->r[30]+0x00000024u,c->r[0]); // 801039FC
L_80103A00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103A00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103A04
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103A08
  c->lr=c->r[0]; // 80103A0C
  c->r[1]=c->r[1]+0x00000010u; // 80103A10
  return; // 80103A14
}

// fn_80103A18
void f_80103A18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103A18
  c->r[0]=c->lr; // 80103A1C
  cmps(c,0,(int32_t)c->r[3],0); // 80103A20
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103A24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103A28
  c->r[31]=c->r[4]|c->r[4]; // 80103A2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103A30
  c->r[30]=c->r[3]|c->r[3]; // 80103A34
  if (crb(c,2)) { goto L_80103A54; } // 80103A38
  c->r[4]=0u+0x00000000u; // 80103A3C
  c->lr=0x80103A44u; f_8026A06C(c); // 80103A40
  cmps(c,0,(int32_t)c->r[31],0); // 80103A44
  if (!crb(c,1)) { goto L_80103A54; } // 80103A48
  c->r[3]=c->r[30]|c->r[30]; // 80103A4C
  c->lr=0x80103A54u; f_8026A268(c); // 80103A50
L_80103A54:;
  c->r[3]=c->r[30]|c->r[30]; // 80103A54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103A58
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103A5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103A60
  c->lr=c->r[0]; // 80103A64
  c->r[1]=c->r[1]+0x00000010u; // 80103A68
  return; // 80103A6C
}

// dtor_80103A70
void f_80103A70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103A70
  c->r[0]=c->lr; // 80103A74
  cmps(c,0,(int32_t)c->r[3],0); // 80103A78
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103A7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103A80
  c->r[31]=c->r[3]|c->r[3]; // 80103A84
  if (crb(c,2)) { goto L_80103A98; } // 80103A88
  cmps(c,0,(int32_t)c->r[4],0); // 80103A8C
  if (!crb(c,1)) { goto L_80103A98; } // 80103A90
  c->lr=0x80103A98u; f_800C69B8(c); // 80103A94
L_80103A98:;
  c->r[3]=c->r[31]|c->r[31]; // 80103A98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103A9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103AA0
  c->lr=c->r[0]; // 80103AA4
  c->r[1]=c->r[1]+0x00000010u; // 80103AA8
  return; // 80103AAC
}

// fn_80103AB0
void f_80103AB0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80103AB0
  return; // 80103AB4
}

// fn_80103AB8
void f_80103AB8(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80103AB8
  return; // 80103ABC
}

// fn_80103AC0
void f_80103AC0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80103AC0
  return; // 80103AC4
}

// fn_80103AC8
void f_80103AC8(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80103AC8
  return; // 80103ACC
}

// fn_80103AD0
void f_80103AD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103AD0
  c->r[0]=c->lr; // 80103AD4
  c->r[3]=0u+0x80550000u; // 80103AD8
  c->r[4]=0u+0x00000003u; // 80103ADC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103AE0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80103AE4
  c->lr=0x80103AECu; f_8019C920(c); // 80103AE8
  c->r[4]=0u+0x805D0000u; // 80103AEC
  c->r[5]=c->r[3]|c->r[3]; // 80103AF0
  c->r[3]=c->r[4]+0x00003F6Cu; // 80103AF4
  c->r[4]=0u+0x00000000u; // 80103AF8
  c->lr=0x80103B00u; f_801FEA74(c); // 80103AFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103B00
  c->r[3]=0u+0x00000001u; // 80103B04
  c->lr=c->r[0]; // 80103B08
  c->r[1]=c->r[1]+0x00000010u; // 80103B0C
  return; // 80103B10
}

// fn_80103B14
void f_80103B14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103B14
  c->r[0]=c->lr; // 80103B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103B1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103B20
  c->r[31]=0u+0x80550000u; // 80103B24
  c->r[3]=c->r[31]+0xFFFFCE54u; // 80103B28
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103B2C
  c->r[30]=c->r[5]|c->r[5]; // 80103B30
  c->r[4]=R8(c->r[5]+0x00000003u); // 80103B34
  c->lr=0x80103B3Cu; f_8019C920(c); // 80103B38
  c->r[4]=R8(c->r[30]+0x00000004u); // 80103B3C
  c->r[30]=c->r[3]|c->r[3]; // 80103B40
  c->r[3]=c->r[31]+0xFFFFCE54u; // 80103B44
  c->lr=0x80103B4Cu; f_8019C920(c); // 80103B48
  c->r[12]=R32(c->r[30]+0x000000B0u); // 80103B4C
  c->r[4]=c->r[3]|c->r[3]; // 80103B50
  c->r[3]=c->r[30]|c->r[30]; // 80103B54
  c->r[5]=0u+0x00000000u; // 80103B58
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80103B5C
  c->r[6]=0u+0x00000000u; // 80103B60
  c->ctr=c->r[12]; // 80103B64
  if (true) { c->lr=0x80103B6Cu; dispatch(c,c->ctr); } // 80103B68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103B6C
  c->r[3]=0u+0x00000001u; // 80103B70
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103B74
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103B78
  c->lr=c->r[0]; // 80103B7C
  c->r[1]=c->r[1]+0x00000010u; // 80103B80
  return; // 80103B84
}

// fn_80103B88
void f_80103B88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103B88
  c->r[0]=c->lr; // 80103B8C
  {uint32_t ea=c->r[2]+0xFFFFADD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103B90
  W32(c->r[1]+0x00000144u,c->r[0]); // 80103B94
  {uint32_t ea=c->r[2]+0xFFFFADD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103B98
  W32(c->r[1]+0x0000013Cu,c->r[31]); // 80103B9C
  W32(c->r[1]+0x00000138u,c->r[30]); // 80103BA0
  W32(c->r[1]+0x00000134u,c->r[29]); // 80103BA4
  W32(c->r[1]+0x00000130u,c->r[28]); // 80103BA8
  c->r[0]=R8(c->r[5]+0x00000003u); // 80103BAC
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[1]);} // 80103BB0
  cmps(c,0,(int32_t)c->r[0],1); // 80103BB4
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[1]);} // 80103BB8
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[1]);} // 80103BBC
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 80103BC0
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 80103BC4
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 80103BC8
  if (crb(c,2)) { goto L_80103FAC; } // 80103BCC
  if (!crb(c,0)) { goto L_80103BE0; } // 80103BD0
  cmps(c,0,(int32_t)c->r[0],0); // 80103BD4
  if (!crb(c,0)) { goto L_80103BEC; } // 80103BD8
  goto L_80104128; // 80103BDC
L_80103BE0:;
  cmps(c,0,(int32_t)c->r[0],3); // 80103BE0
  if (!crb(c,0)) { goto L_80104128; } // 80103BE4
  goto L_80104068; // 80103BE8
L_80103BEC:;
  c->r[29]=0u+0x80550000u; // 80103BEC
  c->r[4]=0u+0x803A0000u; // 80103BF0
  c->r[3]=c->r[29]+0xFFFFC848u; // 80103BF4
  c->r[5]=0u+0x00000000u; // 80103BF8
  c->r[4]=c->r[4]+0xFFFFF4FCu; // 80103BFC
  c->r[6]=0u+0x00000000u; // 80103C00
  c->lr=0x80103C08u; f_8018D3E4(c); // 80103C04
  c->r[0]=c->r[3]+0x00010000u; // 80103C08
  c->r[28]=c->r[3]|c->r[3]; // 80103C0C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80103C10
  if (crb(c,2)) { goto L_80103C90; } // 80103C14
  {uint32_t ea=c->r[2]+0xFFFFADD8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103C18
  c->r[3]=c->r[29]+0xFFFFC848u; // 80103C1C
  {uint32_t ea=c->r[2]+0xFFFFADDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80103C20
  c->r[4]=c->r[28]|c->r[28]; // 80103C24
  {uint32_t ea=c->r[2]+0xFFFFADE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103C28
  c->r[5]=c->r[1]+0x000000F8u; // 80103C2C
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[2]);} // 80103C30
  c->r[6]=c->r[1]+0x000000ECu; // 80103C34
  c->r[31]=R32(c->r[1]+0x00000104u); // 80103C38
  c->r[7]=c->r[1]+0x000000E0u; // 80103C3C
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[1]);} // 80103C40
  c->r[30]=R32(c->r[1]+0x00000108u); // 80103C44
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 80103C48
  c->r[29]=R32(c->r[1]+0x0000010Cu); // 80103C4C
  c->r[12]=R32(c->r[1]+0x00000110u); // 80103C50
  c->r[11]=R32(c->r[1]+0x00000114u); // 80103C54
  c->r[10]=R32(c->r[1]+0x00000118u); // 80103C58
  c->r[9]=R32(c->r[1]+0x0000011Cu); // 80103C5C
  c->r[8]=R32(c->r[1]+0x00000120u); // 80103C60
  c->r[0]=R32(c->r[1]+0x00000124u); // 80103C64
  W32(c->r[1]+0x000000E0u,c->r[31]); // 80103C68
  W32(c->r[1]+0x000000E4u,c->r[30]); // 80103C6C
  W32(c->r[1]+0x000000E8u,c->r[29]); // 80103C70
  W32(c->r[1]+0x000000ECu,c->r[12]); // 80103C74
  W32(c->r[1]+0x000000F0u,c->r[11]); // 80103C78
  W32(c->r[1]+0x000000F4u,c->r[10]); // 80103C7C
  W32(c->r[1]+0x000000F8u,c->r[9]); // 80103C80
  W32(c->r[1]+0x000000FCu,c->r[8]); // 80103C84
  W32(c->r[1]+0x00000100u,c->r[0]); // 80103C88
  c->lr=0x80103C90u; f_8018DD04(c); // 80103C8C
L_80103C90:;
  c->r[3]=0u+0x80620000u; // 80103C90
  c->r[5]=c->r[28]|c->r[28]; // 80103C94
  c->r[3]=c->r[3]+0x00007688u; // 80103C98
  c->r[4]=0u+0x00000003u; // 80103C9C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80103CA0
  c->lr=0x80103CA8u; f_80038998(c); // 80103CA4
  c->r[29]=0u+0x80550000u; // 80103CA8
  c->r[4]=0u+0x803A0000u; // 80103CAC
  c->r[3]=c->r[29]+0xFFFFC848u; // 80103CB0
  c->r[5]=0u+0x00000000u; // 80103CB4
  c->r[4]=c->r[4]+0xFFFFF4FCu; // 80103CB8
  c->r[6]=0u+0x00000000u; // 80103CBC
  c->lr=0x80103CC4u; f_8018D3E4(c); // 80103CC0
  c->r[0]=c->r[3]+0x00010000u; // 80103CC4
  c->r[28]=c->r[3]|c->r[3]; // 80103CC8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80103CCC
  if (crb(c,2)) { goto L_80103D4C; } // 80103CD0
  {uint32_t ea=c->r[2]+0xFFFFADE4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103CD4
  c->r[3]=c->r[29]+0xFFFFC848u; // 80103CD8
  {uint32_t ea=c->r[2]+0xFFFFADE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103CDC
  c->r[4]=c->r[28]|c->r[28]; // 80103CE0
  {uint32_t ea=c->r[2]+0xFFFFADECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103CE4
  c->r[5]=c->r[1]+0x000000D4u; // 80103CE8
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[2]);} // 80103CEC
  c->r[6]=c->r[1]+0x000000C8u; // 80103CF0
  c->r[31]=R32(c->r[1]+0x00000104u); // 80103CF4
  c->r[7]=c->r[1]+0x000000BCu; // 80103CF8
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[1]);} // 80103CFC
  c->r[30]=R32(c->r[1]+0x00000108u); // 80103D00
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 80103D04
  c->r[29]=R32(c->r[1]+0x0000010Cu); // 80103D08
  c->r[12]=R32(c->r[1]+0x00000110u); // 80103D0C
  c->r[11]=R32(c->r[1]+0x00000114u); // 80103D10
  c->r[10]=R32(c->r[1]+0x00000118u); // 80103D14
  c->r[9]=R32(c->r[1]+0x0000011Cu); // 80103D18
  c->r[8]=R32(c->r[1]+0x00000120u); // 80103D1C
  c->r[0]=R32(c->r[1]+0x00000124u); // 80103D20
  W32(c->r[1]+0x000000BCu,c->r[31]); // 80103D24
  W32(c->r[1]+0x000000C0u,c->r[30]); // 80103D28
  W32(c->r[1]+0x000000C4u,c->r[29]); // 80103D2C
  W32(c->r[1]+0x000000C8u,c->r[12]); // 80103D30
  W32(c->r[1]+0x000000CCu,c->r[11]); // 80103D34
  W32(c->r[1]+0x000000D0u,c->r[10]); // 80103D38
  W32(c->r[1]+0x000000D4u,c->r[9]); // 80103D3C
  W32(c->r[1]+0x000000D8u,c->r[8]); // 80103D40
  W32(c->r[1]+0x000000DCu,c->r[0]); // 80103D44
  c->lr=0x80103D4Cu; f_8018DD04(c); // 80103D48
L_80103D4C:;
  c->r[3]=0u+0x80620000u; // 80103D4C
  c->r[5]=c->r[28]|c->r[28]; // 80103D50
  c->r[3]=c->r[3]+0x00007688u; // 80103D54
  c->r[4]=0u+0x00000004u; // 80103D58
  c->r[3]=R32(c->r[3]+0x00000014u); // 80103D5C
  c->lr=0x80103D64u; f_80038998(c); // 80103D60
  c->r[29]=0u+0x80550000u; // 80103D64
  c->r[4]=0u+0x803A0000u; // 80103D68
  c->r[3]=c->r[29]+0xFFFFC848u; // 80103D6C
  c->r[5]=0u+0x00000000u; // 80103D70
  c->r[4]=c->r[4]+0xFFFFF4FCu; // 80103D74
  c->r[6]=0u+0x00000000u; // 80103D78
  c->lr=0x80103D80u; f_8018D3E4(c); // 80103D7C
  c->r[0]=c->r[3]+0x00010000u; // 80103D80
  c->r[28]=c->r[3]|c->r[3]; // 80103D84
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80103D88
  if (crb(c,2)) { goto L_80103E08; } // 80103D8C
  {uint32_t ea=c->r[2]+0xFFFFADF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103D90
  c->r[3]=c->r[29]+0xFFFFC848u; // 80103D94
  {uint32_t ea=c->r[2]+0xFFFFADF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103D98
  c->r[4]=c->r[28]|c->r[28]; // 80103D9C
  {uint32_t ea=c->r[2]+0xFFFFADF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103DA0
  c->r[5]=c->r[1]+0x000000B0u; // 80103DA4
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[2]);} // 80103DA8
  c->r[6]=c->r[1]+0x000000A4u; // 80103DAC
  c->r[31]=R32(c->r[1]+0x00000104u); // 80103DB0
  c->r[7]=c->r[1]+0x00000098u; // 80103DB4
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[1]);} // 80103DB8
  c->r[30]=R32(c->r[1]+0x00000108u); // 80103DBC
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 80103DC0
  c->r[29]=R32(c->r[1]+0x0000010Cu); // 80103DC4
  c->r[12]=R32(c->r[1]+0x00000110u); // 80103DC8
  c->r[11]=R32(c->r[1]+0x00000114u); // 80103DCC
  c->r[10]=R32(c->r[1]+0x00000118u); // 80103DD0
  c->r[9]=R32(c->r[1]+0x0000011Cu); // 80103DD4
  c->r[8]=R32(c->r[1]+0x00000120u); // 80103DD8
  c->r[0]=R32(c->r[1]+0x00000124u); // 80103DDC
  W32(c->r[1]+0x00000098u,c->r[31]); // 80103DE0
  W32(c->r[1]+0x0000009Cu,c->r[30]); // 80103DE4
  W32(c->r[1]+0x000000A0u,c->r[29]); // 80103DE8
  W32(c->r[1]+0x000000A4u,c->r[12]); // 80103DEC
  W32(c->r[1]+0x000000A8u,c->r[11]); // 80103DF0
  W32(c->r[1]+0x000000ACu,c->r[10]); // 80103DF4
  W32(c->r[1]+0x000000B0u,c->r[9]); // 80103DF8
  W32(c->r[1]+0x000000B4u,c->r[8]); // 80103DFC
  W32(c->r[1]+0x000000B8u,c->r[0]); // 80103E00
  c->lr=0x80103E08u; f_8018DD04(c); // 80103E04
L_80103E08:;
  c->r[3]=0u+0x80620000u; // 80103E08
  c->r[5]=c->r[28]|c->r[28]; // 80103E0C
  c->r[3]=c->r[3]+0x00007688u; // 80103E10
  c->r[4]=0u+0x00000005u; // 80103E14
  c->r[3]=R32(c->r[3]+0x00000014u); // 80103E18
  c->lr=0x80103E20u; f_80038998(c); // 80103E1C
  c->r[29]=0u+0x80550000u; // 80103E20
  c->r[4]=0u+0x803A0000u; // 80103E24
  c->r[3]=c->r[29]+0xFFFFC848u; // 80103E28
  c->r[5]=0u+0x00000000u; // 80103E2C
  c->r[4]=c->r[4]+0xFFFFF4FCu; // 80103E30
  c->r[6]=0u+0x00000000u; // 80103E34
  c->lr=0x80103E3Cu; f_8018D3E4(c); // 80103E38
  c->r[0]=c->r[3]+0x00010000u; // 80103E3C
  c->r[28]=c->r[3]|c->r[3]; // 80103E40
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80103E44
  if (crb(c,2)) { goto L_80103ECC; } // 80103E48
  {uint32_t ea=c->r[2]+0xFFFFADFCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80103E4C
  c->r[3]=c->r[29]+0xFFFFC848u; // 80103E50
  {uint32_t ea=c->r[2]+0xFFFFAE00u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103E54
  c->r[4]=c->r[28]|c->r[28]; // 80103E58
  {uint32_t ea=c->r[2]+0xFFFFAE04u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103E5C
  c->r[5]=c->r[1]+0x0000008Cu; // 80103E60
  {uint32_t ea=c->r[2]+0xFFFFADF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103E64
  c->r[6]=c->r[1]+0x00000080u; // 80103E68
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[3]);} // 80103E6C
  c->r[7]=c->r[1]+0x00000074u; // 80103E70
  c->r[31]=R32(c->r[1]+0x00000104u); // 80103E74
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[2]);} // 80103E78
  c->r[30]=R32(c->r[1]+0x00000108u); // 80103E7C
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[1]);} // 80103E80
  c->r[29]=R32(c->r[1]+0x0000010Cu); // 80103E84
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 80103E88
  c->r[12]=R32(c->r[1]+0x00000110u); // 80103E8C
  c->r[11]=R32(c->r[1]+0x00000114u); // 80103E90
  c->r[10]=R32(c->r[1]+0x00000118u); // 80103E94
  c->r[9]=R32(c->r[1]+0x0000011Cu); // 80103E98
  c->r[8]=R32(c->r[1]+0x00000120u); // 80103E9C
  c->r[0]=R32(c->r[1]+0x00000124u); // 80103EA0
  W32(c->r[1]+0x00000074u,c->r[31]); // 80103EA4
  W32(c->r[1]+0x00000078u,c->r[30]); // 80103EA8
  W32(c->r[1]+0x0000007Cu,c->r[29]); // 80103EAC
  W32(c->r[1]+0x00000080u,c->r[12]); // 80103EB0
  W32(c->r[1]+0x00000084u,c->r[11]); // 80103EB4
  W32(c->r[1]+0x00000088u,c->r[10]); // 80103EB8
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 80103EBC
  W32(c->r[1]+0x00000090u,c->r[8]); // 80103EC0
  W32(c->r[1]+0x00000094u,c->r[0]); // 80103EC4
  c->lr=0x80103ECCu; f_8018DD04(c); // 80103EC8
L_80103ECC:;
  c->r[3]=0u+0x80620000u; // 80103ECC
  c->r[5]=c->r[28]|c->r[28]; // 80103ED0
  c->r[3]=c->r[3]+0x00007688u; // 80103ED4
  c->r[4]=0u+0x00000006u; // 80103ED8
  c->r[3]=R32(c->r[3]+0x00000014u); // 80103EDC
  c->lr=0x80103EE4u; f_80038998(c); // 80103EE0
  c->r[29]=0u+0x80550000u; // 80103EE4
  c->r[4]=0u+0x803A0000u; // 80103EE8
  c->r[3]=c->r[29]+0xFFFFC848u; // 80103EEC
  c->r[5]=0u+0x00000000u; // 80103EF0
  c->r[4]=c->r[4]+0xFFFFF4FCu; // 80103EF4
  c->r[6]=0u+0x00000000u; // 80103EF8
  c->lr=0x80103F00u; f_8018D3E4(c); // 80103EFC
  c->r[0]=c->r[3]+0x00010000u; // 80103F00
  c->r[28]=c->r[3]|c->r[3]; // 80103F04
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80103F08
  if (crb(c,2)) { goto L_80103F90; } // 80103F0C
  {uint32_t ea=c->r[2]+0xFFFFAE08u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103F10
  c->r[3]=c->r[29]+0xFFFFC848u; // 80103F14
  {uint32_t ea=c->r[2]+0xFFFFAE0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80103F18
  c->r[4]=c->r[28]|c->r[28]; // 80103F1C
  {uint32_t ea=c->r[2]+0xFFFFADECu; c->f[1]=c->ps1[1]=RF32(ea);} // 80103F20
  c->r[5]=c->r[1]+0x00000068u; // 80103F24
  {uint32_t ea=c->r[2]+0xFFFFADD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103F28
  c->r[6]=c->r[1]+0x0000005Cu; // 80103F2C
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[3]);} // 80103F30
  c->r[7]=c->r[1]+0x00000050u; // 80103F34
  c->r[31]=R32(c->r[1]+0x00000104u); // 80103F38
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[2]);} // 80103F3C
  c->r[30]=R32(c->r[1]+0x00000108u); // 80103F40
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[1]);} // 80103F44
  c->r[29]=R32(c->r[1]+0x0000010Cu); // 80103F48
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 80103F4C
  c->r[12]=R32(c->r[1]+0x00000110u); // 80103F50
  c->r[11]=R32(c->r[1]+0x00000114u); // 80103F54
  c->r[10]=R32(c->r[1]+0x00000118u); // 80103F58
  c->r[9]=R32(c->r[1]+0x0000011Cu); // 80103F5C
  c->r[8]=R32(c->r[1]+0x00000120u); // 80103F60
  c->r[0]=R32(c->r[1]+0x00000124u); // 80103F64
  W32(c->r[1]+0x00000050u,c->r[31]); // 80103F68
  W32(c->r[1]+0x00000054u,c->r[30]); // 80103F6C
  W32(c->r[1]+0x00000058u,c->r[29]); // 80103F70
  W32(c->r[1]+0x0000005Cu,c->r[12]); // 80103F74
  W32(c->r[1]+0x00000060u,c->r[11]); // 80103F78
  W32(c->r[1]+0x00000064u,c->r[10]); // 80103F7C
  W32(c->r[1]+0x00000068u,c->r[9]); // 80103F80
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 80103F84
  W32(c->r[1]+0x00000070u,c->r[0]); // 80103F88
  c->lr=0x80103F90u; f_8018DD04(c); // 80103F8C
L_80103F90:;
  c->r[3]=0u+0x80620000u; // 80103F90
  c->r[5]=c->r[28]|c->r[28]; // 80103F94
  c->r[3]=c->r[3]+0x00007688u; // 80103F98
  c->r[4]=0u+0x00000007u; // 80103F9C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80103FA0
  c->lr=0x80103FA8u; f_80038998(c); // 80103FA4
  goto L_80104128; // 80103FA8
L_80103FAC:;
  c->r[4]=0u+0x803A0000u; // 80103FAC
  c->r[29]=0u+0x80550000u; // 80103FB0
  c->r[4]=c->r[4]+0xFFFFF4FCu; // 80103FB4
  c->r[5]=0u+0x00000000u; // 80103FB8
  c->r[3]=c->r[29]+0xFFFFC848u; // 80103FBC
  c->r[6]=0u+0x00000000u; // 80103FC0
  c->r[4]=c->r[4]+0x00000004u; // 80103FC4
  c->lr=0x80103FCCu; f_8018D3E4(c); // 80103FC8
  c->r[0]=c->r[3]+0x00010000u; // 80103FCC
  c->r[28]=c->r[3]|c->r[3]; // 80103FD0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80103FD4
  if (crb(c,2)) { goto L_8010404C; } // 80103FD8
  {uint32_t ea=c->r[2]+0xFFFFADD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103FDC
  c->r[3]=c->r[29]+0xFFFFC848u; // 80103FE0
  c->r[31]=R32(c->r[1]+0x00000104u); // 80103FE4
  c->r[4]=c->r[28]|c->r[28]; // 80103FE8
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 80103FEC
  c->r[5]=c->r[1]+0x00000044u; // 80103FF0
  c->r[30]=R32(c->r[1]+0x00000108u); // 80103FF4
  c->r[6]=c->r[1]+0x00000038u; // 80103FF8
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[0]);} // 80103FFC
  c->r[7]=c->r[1]+0x0000002Cu; // 80104000
  c->r[29]=R32(c->r[1]+0x0000010Cu); // 80104004
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 80104008
  c->r[12]=R32(c->r[1]+0x00000110u); // 8010400C
  c->r[11]=R32(c->r[1]+0x00000114u); // 80104010
  c->r[10]=R32(c->r[1]+0x00000118u); // 80104014
  c->r[9]=R32(c->r[1]+0x0000011Cu); // 80104018
  c->r[8]=R32(c->r[1]+0x00000120u); // 8010401C
  c->r[0]=R32(c->r[1]+0x00000124u); // 80104020
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80104024
  W32(c->r[1]+0x00000030u,c->r[30]); // 80104028
  W32(c->r[1]+0x00000034u,c->r[29]); // 8010402C
  W32(c->r[1]+0x00000038u,c->r[12]); // 80104030
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 80104034
  W32(c->r[1]+0x00000040u,c->r[10]); // 80104038
  W32(c->r[1]+0x00000044u,c->r[9]); // 8010403C
  W32(c->r[1]+0x00000048u,c->r[8]); // 80104040
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80104044
  c->lr=0x8010404Cu; f_8018DD04(c); // 80104048
L_8010404C:;
  c->r[3]=0u+0x80620000u; // 8010404C
  c->r[5]=c->r[28]|c->r[28]; // 80104050
  c->r[3]=c->r[3]+0x00007688u; // 80104054
  c->r[4]=0u+0x00000002u; // 80104058
  c->r[3]=R32(c->r[3]+0x00000014u); // 8010405C
  c->lr=0x80104064u; f_80038998(c); // 80104060
  goto L_80104128; // 80104064
L_80104068:;
  c->r[4]=0u+0x803A0000u; // 80104068
  c->r[29]=0u+0x80550000u; // 8010406C
  c->r[4]=c->r[4]+0xFFFFF4FCu; // 80104070
  c->r[5]=0u+0x00000000u; // 80104074
  c->r[3]=c->r[29]+0xFFFFC848u; // 80104078
  c->r[6]=0u+0x00000000u; // 8010407C
  c->r[4]=c->r[4]+0x00000008u; // 80104080
  c->lr=0x80104088u; f_8018D3E4(c); // 80104084
  c->r[0]=c->r[3]+0x00010000u; // 80104088
  c->r[28]=c->r[3]|c->r[3]; // 8010408C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80104090
  if (crb(c,2)) { goto L_80104110; } // 80104094
  {uint32_t ea=c->r[2]+0xFFFFAE10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80104098
  c->r[3]=c->r[29]+0xFFFFC848u; // 8010409C
  {uint32_t ea=c->r[2]+0xFFFFAE14u; c->f[1]=c->ps1[1]=RF32(ea);} // 801040A0
  c->r[4]=c->r[28]|c->r[28]; // 801040A4
  {uint32_t ea=c->r[2]+0xFFFFADD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801040A8
  c->r[5]=c->r[1]+0x00000020u; // 801040AC
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[2]);} // 801040B0
  c->r[6]=c->r[1]+0x00000014u; // 801040B4
  c->r[29]=R32(c->r[1]+0x00000104u); // 801040B8
  c->r[7]=c->r[1]+0x00000008u; // 801040BC
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[1]);} // 801040C0
  c->r[30]=R32(c->r[1]+0x00000108u); // 801040C4
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 801040C8
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801040CC
  c->r[12]=R32(c->r[1]+0x00000110u); // 801040D0
  c->r[11]=R32(c->r[1]+0x00000114u); // 801040D4
  c->r[10]=R32(c->r[1]+0x00000118u); // 801040D8
  c->r[9]=R32(c->r[1]+0x0000011Cu); // 801040DC
  c->r[8]=R32(c->r[1]+0x00000120u); // 801040E0
  c->r[0]=R32(c->r[1]+0x00000124u); // 801040E4
  W32(c->r[1]+0x00000008u,c->r[29]); // 801040E8
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801040EC
  W32(c->r[1]+0x00000010u,c->r[31]); // 801040F0
  W32(c->r[1]+0x00000014u,c->r[12]); // 801040F4
  W32(c->r[1]+0x00000018u,c->r[11]); // 801040F8
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 801040FC
  W32(c->r[1]+0x00000020u,c->r[9]); // 80104100
  W32(c->r[1]+0x00000024u,c->r[8]); // 80104104
  W32(c->r[1]+0x00000028u,c->r[0]); // 80104108
  c->lr=0x80104110u; f_8018DD04(c); // 8010410C
L_80104110:;
  c->r[3]=0u+0x80620000u; // 80104110
  c->r[5]=c->r[28]|c->r[28]; // 80104114
  c->r[3]=c->r[3]+0x00007688u; // 80104118
  c->r[4]=0u+0x00000008u; // 8010411C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80104120
  c->lr=0x80104128u; f_80038998(c); // 80104124
L_80104128:;
  c->r[31]=R32(c->r[1]+0x0000013Cu); // 80104128
  c->r[3]=0u+0x00000001u; // 8010412C
  c->r[30]=R32(c->r[1]+0x00000138u); // 80104130
  c->r[29]=R32(c->r[1]+0x00000134u); // 80104134
  c->r[28]=R32(c->r[1]+0x00000130u); // 80104138
  c->r[0]=R32(c->r[1]+0x00000144u); // 8010413C
  c->lr=c->r[0]; // 80104140
  c->r[1]=c->r[1]+0x00000140u; // 80104144
  return; // 80104148
}

// fn_8010414C
void f_8010414C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010414C
  c->r[0]=c->lr; // 80104150
  c->r[3]=0u+0x80620000u; // 80104154
  c->r[4]=0u+0x00000002u; // 80104158
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010415C
  c->r[3]=c->r[3]+0x00007688u; // 80104160
  c->r[3]=R32(c->r[3]+0x00000014u); // 80104164
  c->lr=0x8010416Cu; f_8003560C(c); // 80104168
  c->r[0]=c->r[3]+0x00010000u; // 8010416C
  c->r[4]=c->r[3]|c->r[3]; // 80104170
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80104174
  if (crb(c,2)) { goto L_80104188; } // 80104178
  c->r[3]=0u+0x80550000u; // 8010417C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80104180
  c->lr=0x80104188u; f_8018D694(c); // 80104184
L_80104188:;
  c->r[3]=0u+0x80620000u; // 80104188
  c->r[4]=0u+0x00000003u; // 8010418C
  c->r[3]=c->r[3]+0x00007688u; // 80104190
  c->r[3]=R32(c->r[3]+0x00000014u); // 80104194
  c->lr=0x8010419Cu; f_8003560C(c); // 80104198
  c->r[0]=c->r[3]+0x00010000u; // 8010419C
  c->r[4]=c->r[3]|c->r[3]; // 801041A0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801041A4
  if (crb(c,2)) { goto L_801041B8; } // 801041A8
  c->r[3]=0u+0x80550000u; // 801041AC
  c->r[3]=c->r[3]+0xFFFFC848u; // 801041B0
  c->lr=0x801041B8u; f_8018D694(c); // 801041B4
L_801041B8:;
  c->r[3]=0u+0x80620000u; // 801041B8
  c->r[4]=0u+0x00000004u; // 801041BC
  c->r[3]=c->r[3]+0x00007688u; // 801041C0
  c->r[3]=R32(c->r[3]+0x00000014u); // 801041C4
  c->lr=0x801041CCu; f_8003560C(c); // 801041C8
  c->r[0]=c->r[3]+0x00010000u; // 801041CC
  c->r[4]=c->r[3]|c->r[3]; // 801041D0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801041D4
  if (crb(c,2)) { goto L_801041E8; } // 801041D8
  c->r[3]=0u+0x80550000u; // 801041DC
  c->r[3]=c->r[3]+0xFFFFC848u; // 801041E0
  c->lr=0x801041E8u; f_8018D694(c); // 801041E4
L_801041E8:;
  c->r[3]=0u+0x80620000u; // 801041E8
  c->r[4]=0u+0x00000005u; // 801041EC
  c->r[3]=c->r[3]+0x00007688u; // 801041F0
  c->r[3]=R32(c->r[3]+0x00000014u); // 801041F4
  c->lr=0x801041FCu; f_8003560C(c); // 801041F8
  c->r[0]=c->r[3]+0x00010000u; // 801041FC
  c->r[4]=c->r[3]|c->r[3]; // 80104200
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80104204
  if (crb(c,2)) { goto L_80104218; } // 80104208
  c->r[3]=0u+0x80550000u; // 8010420C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80104210
  c->lr=0x80104218u; f_8018D694(c); // 80104214
L_80104218:;
  c->r[3]=0u+0x80620000u; // 80104218
  c->r[4]=0u+0x00000006u; // 8010421C
  c->r[3]=c->r[3]+0x00007688u; // 80104220
  c->r[3]=R32(c->r[3]+0x00000014u); // 80104224
  c->lr=0x8010422Cu; f_8003560C(c); // 80104228
  c->r[0]=c->r[3]+0x00010000u; // 8010422C
  c->r[4]=c->r[3]|c->r[3]; // 80104230
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80104234
  if (crb(c,2)) { goto L_80104248; } // 80104238
  c->r[3]=0u+0x80550000u; // 8010423C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80104240
  c->lr=0x80104248u; f_8018D694(c); // 80104244
L_80104248:;
  c->r[3]=0u+0x80620000u; // 80104248
  c->r[4]=0u+0x00000007u; // 8010424C
  c->r[3]=c->r[3]+0x00007688u; // 80104250
  c->r[3]=R32(c->r[3]+0x00000014u); // 80104254
  c->lr=0x8010425Cu; f_8003560C(c); // 80104258
  c->r[0]=c->r[3]+0x00010000u; // 8010425C
  c->r[4]=c->r[3]|c->r[3]; // 80104260
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80104264
  if (crb(c,2)) { goto L_80104278; } // 80104268
  c->r[3]=0u+0x80550000u; // 8010426C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80104270
  c->lr=0x80104278u; f_8018D694(c); // 80104274
L_80104278:;
  c->r[3]=0u+0x80620000u; // 80104278
  c->r[4]=0u+0x00000008u; // 8010427C
  c->r[3]=c->r[3]+0x00007688u; // 80104280
  c->r[3]=R32(c->r[3]+0x00000014u); // 80104284
  c->lr=0x8010428Cu; f_8003560C(c); // 80104288
  c->r[0]=c->r[3]+0x00010000u; // 8010428C
  c->r[4]=c->r[3]|c->r[3]; // 80104290
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80104294
  if (crb(c,2)) { goto L_801042A8; } // 80104298
  c->r[3]=0u+0x80550000u; // 8010429C
  c->r[3]=c->r[3]+0xFFFFC848u; // 801042A0
  c->lr=0x801042A8u; f_8018D694(c); // 801042A4
L_801042A8:;
  c->r[3]=0u+0x80550000u; // 801042A8
  c->r[4]=0u+0x00000023u; // 801042AC
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801042B0
  c->lr=0x801042B8u; f_8019C920(c); // 801042B4
  {uint32_t ea=c->r[2]+0xFFFFADD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801042B8
  c->r[4]=0u+0x00000009u; // 801042BC
  c->r[5]=0u+0x00000000u; // 801042C0
  c->r[6]=0u+0x00000000u; // 801042C4
  c->r[7]=0u+0x00000000u; // 801042C8
  c->lr=0x801042D0u; f_801F4D44(c); // 801042CC
  c->r[0]=0u+0x00000000u; // 801042D0
  c->r[3]=0u+0x805D0000u; // 801042D4
  W8(c->r[3]+0x000078B0u,c->r[0]); // 801042D8
  c->r[3]=0u+0x00000001u; // 801042DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801042E0
  c->lr=c->r[0]; // 801042E4
  c->r[1]=c->r[1]+0x00000010u; // 801042E8
  return; // 801042EC
}

// fn_801042F0
void f_801042F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801042F0
  c->r[0]=c->lr; // 801042F4
  c->r[3]=0u+0x80550000u; // 801042F8
  c->r[4]=0u+0x00000004u; // 801042FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104300
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80104304
  c->lr=0x8010430Cu; f_8019C920(c); // 80104308
  {uint32_t ea=c->r[2]+0xFFFFAE18u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010430C
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 80104310
  c->r[3]=0u+0x00000001u; // 80104314
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104318
  c->lr=c->r[0]; // 8010431C
  c->r[1]=c->r[1]+0x00000010u; // 80104320
  return; // 80104324
}

// fn_80104328
void f_80104328(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104328
  c->r[0]=c->lr; // 8010432C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80104330
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80104334
  W32(c->r[1]+0x00000048u,c->r[30]); // 80104338
  c->r[30]=0u+0x00000000u; // 8010433C
  c->r[0]=R8(c->r[5]+0x00000003u); // 80104340
  cmps(c,0,(int32_t)c->r[0],2); // 80104344
  if (crb(c,2)) { goto L_801043F0; } // 80104348
  if (!crb(c,0)) { goto L_80104360; } // 8010434C
  cmps(c,0,(int32_t)c->r[0],0); // 80104350
  if (crb(c,2)) { goto L_80104370; } // 80104354
  if (!crb(c,0)) { goto L_801043B0; } // 80104358
  goto L_80104558; // 8010435C
L_80104360:;
  cmps(c,0,(int32_t)c->r[0],4); // 80104360
  if (crb(c,2)) { goto L_8010451C; } // 80104364
  if (!crb(c,0)) { goto L_80104558; } // 80104368
  goto L_801044DC; // 8010436C
L_80104370:;
  c->r[31]=0u+0x80620000u; // 80104370
  c->r[4]=0u+0x00000009u; // 80104374
  c->r[31]=c->r[31]+0x00007688u; // 80104378
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010437C
  c->lr=0x80104384u; f_8003560C(c); // 80104380
  cmps(c,0,(int32_t)c->r[3],0); // 80104384
  if (crb(c,2)) { goto L_80104558; } // 80104388
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010438C
  c->r[4]=0u+0x00000009u; // 80104390
  c->lr=0x80104398u; f_8003560C(c); // 80104394
  c->lr=0x8010439Cu; f_80036974(c); // 80104398
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010439C
  c->r[4]=0u+0x00000009u; // 801043A0
  c->r[5]=0u+0x00000000u; // 801043A4
  c->lr=0x801043ACu; f_80038998(c); // 801043A8
  goto L_80104558; // 801043AC
L_801043B0:;
  {uint32_t ea=c->r[2]+0xFFFFAE1Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801043B0
  c->r[3]=c->r[1]+0x0000002Cu; // 801043B4
  {uint32_t ea=c->r[2]+0xFFFFAE20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801043B8
  {uint32_t ea=c->r[2]+0xFFFFAE24u; c->f[0]=c->ps1[0]=RF32(ea);} // 801043BC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 801043C0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801043C4
  c->r[5]=R32(c->r[1]+0x00000038u); // 801043C8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801043CC
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 801043D0
  c->r[0]=R32(c->r[1]+0x00000040u); // 801043D4
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 801043D8
  W32(c->r[1]+0x00000030u,c->r[4]); // 801043DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801043E0
  c->lr=0x801043E8u; f_80036878(c); // 801043E4
  c->r[30]=c->r[3]|c->r[3]; // 801043E8
  goto L_80104558; // 801043EC
L_801043F0:;
  c->r[3]=0u+0x80620000u; // 801043F0
  c->r[3]=c->r[3]+0x000079C0u; // 801043F4
  c->r[0]=R32(c->r[3]+0x00000008u); // 801043F8
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 801043FC
  if (!crb(c,2)) { goto L_80104434; } // 80104400
  c->r[31]=0u+0x80620000u; // 80104404
  c->r[4]=0u+0x00000001u; // 80104408
  c->r[31]=c->r[31]+0x00007688u; // 8010440C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80104410
  c->lr=0x80104418u; f_80037670(c); // 80104414
  cmps(c,0,(int32_t)c->r[3],0); // 80104418
  if (!crb(c,2)) { goto L_80104434; } // 8010441C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80104420
  c->r[4]=0u+0x00000000u; // 80104424
  c->lr=0x8010442Cu; f_80037670(c); // 80104428
  cmps(c,0,(int32_t)c->r[3],0); // 8010442C
  if (crb(c,2)) { goto L_80104474; } // 80104430
L_80104434:;
  c->r[31]=0u+0x80620000u; // 80104434
  c->r[4]=0u+0x00000009u; // 80104438
  c->r[31]=c->r[31]+0x00007688u; // 8010443C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80104440
  c->lr=0x80104448u; f_8003560C(c); // 80104444
  cmps(c,0,(int32_t)c->r[3],0); // 80104448
  if (crb(c,2)) { goto L_80104558; } // 8010444C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80104450
  c->r[4]=0u+0x00000009u; // 80104454
  c->lr=0x8010445Cu; f_8003560C(c); // 80104458
  c->lr=0x80104460u; f_80036974(c); // 8010445C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80104460
  c->r[4]=0u+0x00000009u; // 80104464
  c->r[5]=0u+0x00000000u; // 80104468
  c->lr=0x80104470u; f_80038998(c); // 8010446C
  goto L_80104558; // 80104470
L_80104474:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80104474
  c->r[4]=0u+0x00000009u; // 80104478
  c->lr=0x80104480u; f_8003560C(c); // 8010447C
  cmps(c,0,(int32_t)c->r[3],0); // 80104480
  if (!crb(c,2)) { goto L_80104558; } // 80104484
  c->lr=0x8010448Cu; f_8024DF44(c); // 80104488
  cmps(c,0,(int32_t)c->r[3],0); // 8010448C
  if (crb(c,2)) { goto L_8010449C; } // 80104490
  {uint32_t ea=c->r[2]+0xFFFFAE28u; c->f[2]=c->ps1[2]=RF32(ea);} // 80104494
  goto L_801044A0; // 80104498
L_8010449C:;
  {uint32_t ea=c->r[2]+0xFFFFAE2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8010449C
L_801044A0:;
  {uint32_t ea=c->r[2]+0xFFFFAE30u; c->f[1]=c->ps1[1]=RF32(ea);} // 801044A0
  c->r[3]=c->r[1]+0x00000020u; // 801044A4
  {uint32_t ea=c->r[2]+0xFFFFADD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801044A8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 801044AC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801044B0
  c->r[5]=R32(c->r[1]+0x00000038u); // 801044B4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801044B8
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 801044BC
  c->r[0]=R32(c->r[1]+0x00000040u); // 801044C0
  W32(c->r[1]+0x00000020u,c->r[5]); // 801044C4
  W32(c->r[1]+0x00000024u,c->r[4]); // 801044C8
  W32(c->r[1]+0x00000028u,c->r[0]); // 801044CC
  c->lr=0x801044D4u; f_80036740(c); // 801044D0
  c->r[30]=c->r[3]|c->r[3]; // 801044D4
  goto L_80104558; // 801044D8
L_801044DC:;
  {uint32_t ea=c->r[2]+0xFFFFAE34u; c->f[2]=c->ps1[2]=RF32(ea);} // 801044DC
  c->r[3]=c->r[1]+0x00000014u; // 801044E0
  {uint32_t ea=c->r[2]+0xFFFFAE38u; c->f[1]=c->ps1[1]=RF32(ea);} // 801044E4
  {uint32_t ea=c->r[2]+0xFFFFAE3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801044E8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 801044EC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801044F0
  c->r[5]=R32(c->r[1]+0x00000038u); // 801044F4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801044F8
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 801044FC
  c->r[0]=R32(c->r[1]+0x00000040u); // 80104500
  W32(c->r[1]+0x00000014u,c->r[5]); // 80104504
  W32(c->r[1]+0x00000018u,c->r[4]); // 80104508
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8010450C
  c->lr=0x80104514u; f_80036878(c); // 80104510
  c->r[30]=c->r[3]|c->r[3]; // 80104514
  goto L_80104558; // 80104518
L_8010451C:;
  {uint32_t ea=c->r[2]+0xFFFFAE40u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010451C
  c->r[3]=c->r[1]+0x00000008u; // 80104520
  {uint32_t ea=c->r[2]+0xFFFFAE44u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104524
  {uint32_t ea=c->r[2]+0xFFFFADD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80104528
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 8010452C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80104530
  c->r[5]=R32(c->r[1]+0x00000038u); // 80104534
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80104538
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 8010453C
  c->r[0]=R32(c->r[1]+0x00000040u); // 80104540
  W32(c->r[1]+0x00000008u,c->r[5]); // 80104544
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80104548
  W32(c->r[1]+0x00000010u,c->r[0]); // 8010454C
  c->lr=0x80104554u; f_80036878(c); // 80104550
  c->r[30]=c->r[3]|c->r[3]; // 80104554
L_80104558:;
  cmps(c,0,(int32_t)c->r[30],0); // 80104558
  if (crb(c,2)) { goto L_80104578; } // 8010455C
  c->r[3]=0u+0x80620000u; // 80104560
  c->r[5]=c->r[30]|c->r[30]; // 80104564
  c->r[3]=c->r[3]+0x00007688u; // 80104568
  c->r[4]=0u+0x00000009u; // 8010456C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80104570
  c->lr=0x80104578u; f_80038998(c); // 80104574
L_80104578:;
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80104578
  c->r[3]=0u+0x00000001u; // 8010457C
  c->r[30]=R32(c->r[1]+0x00000048u); // 80104580
  c->r[0]=R32(c->r[1]+0x00000054u); // 80104584
  c->lr=c->r[0]; // 80104588
  c->r[1]=c->r[1]+0x00000050u; // 8010458C
  return; // 80104590
}

// fn_80104594
void f_80104594(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104594
  c->r[0]=c->lr; // 80104598
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8010459C
  W32(c->r[1]+0x000000BCu,c->r[31]); // 801045A0
  c->r[31]=c->r[5]|c->r[5]; // 801045A4
  W32(c->r[1]+0x000000B8u,c->r[30]); // 801045A8
  W32(c->r[1]+0x000000B4u,c->r[29]); // 801045AC
  c->r[0]=R8(c->r[5]+0x00000003u); // 801045B0
  cmps(c,0,(int32_t)c->r[0],1); // 801045B4
  if (crb(c,2)) { goto L_8010460C; } // 801045B8
  if (!crb(c,0)) { goto L_80104788; } // 801045BC
  cmps(c,0,(int32_t)c->r[0],0); // 801045C0
  if (!crb(c,0)) { goto L_801045CC; } // 801045C4
  goto L_80104788; // 801045C8
L_801045CC:;
  c->r[29]=0u+0x80620000u; // 801045CC
  c->r[4]=0u+0x0000000Au; // 801045D0
  c->r[29]=c->r[29]+0x00007688u; // 801045D4
  c->r[3]=R32(c->r[29]+0x00000014u); // 801045D8
  c->lr=0x801045E0u; f_8003560C(c); // 801045DC
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801045E0
  cmpu(c,0,c->r[4],0x000000FFu); // 801045E4
  if (crb(c,2)) { goto L_80104788; } // 801045E8
  c->r[3]=0u+0x80550000u; // 801045EC
  c->r[3]=c->r[3]+0xFFFFC848u; // 801045F0
  c->lr=0x801045F8u; f_8018D738(c); // 801045F4
  c->r[3]=R32(c->r[29]+0x00000014u); // 801045F8
  c->r[4]=0u+0x0000000Au; // 801045FC
  c->r[5]=0u+0x000000FFu; // 80104600
  c->lr=0x80104608u; f_80038998(c); // 80104604
  goto L_80104788; // 80104608
L_8010460C:;
  c->r[29]=0u+0x80620000u; // 8010460C
  c->r[4]=0u+0x0000000Au; // 80104610
  c->r[29]=c->r[29]+0x00007688u; // 80104614
  c->r[3]=R32(c->r[29]+0x00000014u); // 80104618
  c->lr=0x80104620u; f_8003560C(c); // 8010461C
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 80104620
  cmpu(c,0,c->r[30],0x000000FFu); // 80104624
  if (!crb(c,2)) { goto L_80104668; } // 80104628
  c->r[4]=0u+0x803A0000u; // 8010462C
  c->r[3]=0u+0x80550000u; // 80104630
  c->r[4]=c->r[4]+0xFFFFF4FCu; // 80104634
  c->r[5]=0u+0x00000000u; // 80104638
  c->r[3]=c->r[3]+0xFFFFC848u; // 8010463C
  c->r[6]=0u+0x00000000u; // 80104640
  c->r[4]=c->r[4]+0x0000000Cu; // 80104644
  c->lr=0x8010464Cu; f_8018D3E4(c); // 80104648
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 8010464C
  cmpu(c,0,c->r[30],0x000000FFu); // 80104650
  if (crb(c,2)) { goto L_80104668; } // 80104654
  c->r[3]=R32(c->r[29]+0x00000014u); // 80104658
  c->r[5]=c->r[30]|c->r[30]; // 8010465C
  c->r[4]=0u+0x0000000Au; // 80104660
  c->lr=0x80104668u; f_80038998(c); // 80104664
L_80104668:;
  cmpu(c,0,c->r[30],0x000000FFu); // 80104668
  if (crb(c,2)) { goto L_80104788; } // 8010466C
  c->r[3]=0u+0x805D0000u; // 80104670
  c->r[4]=0u+0x00000000u; // 80104674
  c->r[3]=c->r[3]+0x00003F6Cu; // 80104678
  c->lr=0x80104680u; f_80039840(c); // 8010467C
  c->r[4]=0u+0x803A0000u; // 80104680
  c->r[5]=c->r[1]+0x00000080u; // 80104684
  c->r[4]=c->r[4]+0xFFFFF4FCu; // 80104688
  c->r[6]=0u+0x00000001u; // 8010468C
  c->r[4]=c->r[4]+0x00000010u; // 80104690
  c->lr=0x80104698u; f_80257018(c); // 80104694
  {uint32_t ea=c->r[2]+0xFFFFADD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80104698
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8010469C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801046A0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801046A4
  c->r[0]=R8(c->r[31]+0x00000004u); // 801046A8
  cmps(c,0,(int32_t)c->r[0],0); // 801046AC
  if (crb(c,2)) { goto L_801046F0; } // 801046B0
  c->r[3]=c->r[1]+0x0000002Cu; // 801046B4
  {uint32_t ea=c->r[2]+0xFFFFAE48u; c->f[1]=c->ps1[1]=RF32(ea);} // 801046B8
  c->r[4]=c->r[3]|c->r[3]; // 801046BC
  c->lr=0x801046C4u; f_80296A94(c); // 801046C0
  c->r[3]=c->r[1]+0x00000050u; // 801046C4
  c->lr=0x801046CCu; f_80295AE8(c); // 801046C8
  {uint32_t ea=c->r[2]+0xFFFFADD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801046CC
  c->r[3]=c->r[1]+0x00000050u; // 801046D0
  {uint32_t ea=c->r[2]+0xFFFFAE4Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801046D4
  c->f[2]=c->f[1]; // 801046D8
  c->lr=0x801046E0u; f_80296294(c); // 801046DC
  c->r[3]=c->r[1]+0x00000080u; // 801046E0
  c->r[4]=c->r[1]+0x00000050u; // 801046E4
  c->r[5]=c->r[3]|c->r[3]; // 801046E8
  c->lr=0x801046F0u; f_80295B48(c); // 801046EC
L_801046F0:;
  {uint32_t ea=c->r[2]+0xFFFFADD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801046F0
  c->r[3]=c->r[1]+0x00000080u; // 801046F4
  {uint32_t ea=c->r[2]+0xFFFFAE50u; c->f[0]=c->ps1[0]=RF32(ea);} // 801046F8
  c->r[4]=c->r[1]+0x00000038u; // 801046FC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 80104700
  c->r[5]=c->r[1]+0x00000044u; // 80104704
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80104708
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 8010470C
  c->lr=0x80104714u; f_80296750(c); // 80104710
  {uint32_t ea=c->r[2]+0xFFFFADD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80104714
  c->r[4]=c->r[30]|c->r[30]; // 80104718
  c->r[29]=R32(c->r[1]+0x0000002Cu); // 8010471C
  c->r[3]=0u+0x80550000u; // 80104720
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80104724
  c->r[3]=c->r[3]+0xFFFFC848u; // 80104728
  c->r[30]=R32(c->r[1]+0x00000030u); // 8010472C
  c->r[5]=c->r[1]+0x00000020u; // 80104730
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80104734
  c->r[6]=c->r[1]+0x00000014u; // 80104738
  c->r[31]=R32(c->r[1]+0x00000034u); // 8010473C
  c->r[7]=c->r[1]+0x00000008u; // 80104740
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80104744
  c->r[12]=R32(c->r[1]+0x00000038u); // 80104748
  c->r[11]=R32(c->r[1]+0x0000003Cu); // 8010474C
  c->r[10]=R32(c->r[1]+0x00000040u); // 80104750
  c->r[9]=R32(c->r[1]+0x00000044u); // 80104754
  c->r[8]=R32(c->r[1]+0x00000048u); // 80104758
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8010475C
  W32(c->r[1]+0x00000008u,c->r[29]); // 80104760
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 80104764
  W32(c->r[1]+0x00000010u,c->r[31]); // 80104768
  W32(c->r[1]+0x00000014u,c->r[12]); // 8010476C
  W32(c->r[1]+0x00000018u,c->r[11]); // 80104770
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 80104774
  W32(c->r[1]+0x00000020u,c->r[9]); // 80104778
  W32(c->r[1]+0x00000024u,c->r[8]); // 8010477C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80104780
  c->lr=0x80104788u; f_8018DD04(c); // 80104784
L_80104788:;
  c->r[31]=R32(c->r[1]+0x000000BCu); // 80104788
  c->r[3]=0u+0x00000001u; // 8010478C
  c->r[30]=R32(c->r[1]+0x000000B8u); // 80104790
  c->r[29]=R32(c->r[1]+0x000000B4u); // 80104794
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80104798
  c->lr=c->r[0]; // 8010479C
  c->r[1]=c->r[1]+0x000000C0u; // 801047A0
  return; // 801047A4
}

// fn_801047A8
void f_801047A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801047A8
  c->r[0]=c->lr; // 801047AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801047B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801047B4
  c->r[0]=R8(c->r[5]+0x00000003u); // 801047B8
  cmps(c,0,(int32_t)c->r[0],1); // 801047BC
  if (crb(c,2)) { goto L_80104814; } // 801047C0
  if (!crb(c,0)) { goto L_801047D4; } // 801047C4
  cmps(c,0,(int32_t)c->r[0],0); // 801047C8
  if (!crb(c,0)) { goto L_801047E0; } // 801047CC
  goto L_80104874; // 801047D0
L_801047D4:;
  cmps(c,0,(int32_t)c->r[0],3); // 801047D4
  if (!crb(c,0)) { goto L_80104874; } // 801047D8
  goto L_80104844; // 801047DC
L_801047E0:;
  c->r[4]=0u+0x00010000u; // 801047E0
  c->r[3]=0u+0x00000017u; // 801047E4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801047E8
  c->r[4]=0u+0x00000002u; // 801047EC
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801047F0
  c->lr=0x801047F8u; f_80036C44(c); // 801047F4
  c->r[6]=0u+0x80620000u; // 801047F8
  c->r[5]=c->r[3]|c->r[3]; // 801047FC
  c->r[6]=c->r[6]+0x00007688u; // 80104800
  c->r[4]=0u+0x0000000Cu; // 80104804
  c->r[3]=R32(c->r[6]+0x00000014u); // 80104808
  c->lr=0x80104810u; f_80038998(c); // 8010480C
  goto L_80104874; // 80104810
L_80104814:;
  c->r[3]=0u+0x80620000u; // 80104814
  c->r[4]=0u+0x0000000Cu; // 80104818
  c->r[3]=c->r[3]+0x00007688u; // 8010481C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80104820
  c->lr=0x80104828u; f_8003560C(c); // 80104824
  cmps(c,0,(int32_t)c->r[3],0); // 80104828
  if (crb(c,2)) { goto L_80104874; } // 8010482C
  c->r[4]=0u+0x00010000u; // 80104830
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80104834
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80104838
  c->lr=0x80104840u; f_80036BA8(c); // 8010483C
  goto L_80104874; // 80104840
L_80104844:;
  c->r[31]=0u+0x80620000u; // 80104844
  c->r[4]=0u+0x0000000Cu; // 80104848
  c->r[31]=c->r[31]+0x00007688u; // 8010484C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80104850
  c->lr=0x80104858u; f_8003560C(c); // 80104854
  cmps(c,0,(int32_t)c->r[3],0); // 80104858
  if (crb(c,2)) { goto L_80104874; } // 8010485C
  c->lr=0x80104864u; f_80036D0C(c); // 80104860
  c->r[3]=R32(c->r[31]+0x00000014u); // 80104864
  c->r[4]=0u+0x0000000Cu; // 80104868
  c->r[5]=0u+0x00000000u; // 8010486C
  c->lr=0x80104874u; f_80038998(c); // 80104870
L_80104874:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104874
  c->r[3]=0u+0x00000001u; // 80104878
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010487C
  c->lr=c->r[0]; // 80104880
  c->r[1]=c->r[1]+0x00000010u; // 80104884
  return; // 80104888
}

// fn_8010488C
void f_8010488C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010488C
  c->r[0]=c->lr; // 80104890
  c->r[3]=0u+0x80550000u; // 80104894
  c->r[4]=0u+0x0000000Au; // 80104898
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010489C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801048A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801048A4
  c->lr=0x801048ACu; f_8019C920(c); // 801048A8
  c->r[4]=0u+0x00000000u; // 801048AC
  c->lr=0x801048B4u; f_80039840(c); // 801048B0
  c->r[31]=c->r[3]|c->r[3]; // 801048B4
  c->lr=0x801048BCu; f_80251620(c); // 801048B8
  c->r[5]=c->r[3]|c->r[3]; // 801048BC
  {uint32_t ea=c->r[2]+0xFFFFAE54u; c->f[1]=c->ps1[1]=RF32(ea);} // 801048C0
  {uint32_t ea=c->r[2]+0xFFFFADD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801048C4
  c->r[3]=c->r[31]|c->r[31]; // 801048C8
  {uint32_t ea=c->r[2]+0xFFFFAE58u; c->f[3]=c->ps1[3]=RF32(ea);} // 801048CC
  c->r[4]=0u+0x00000006u; // 801048D0
  c->r[5]=R32(c->r[5]+0x00000018u); // 801048D4
  c->lr=0x801048DCu; f_8024FF40(c); // 801048D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801048DC
  c->r[3]=0u+0x00000001u; // 801048E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801048E4
  c->lr=c->r[0]; // 801048E8
  c->r[1]=c->r[1]+0x00000010u; // 801048EC
  return; // 801048F0
}

// fn_801048F4
void f_801048F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801048F4
  c->r[0]=c->lr; // 801048F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801048FC
  c->lr=0x80104904u; f_80250974(c); // 80104900
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104904
  c->r[3]=0u+0x00000001u; // 80104908
  c->lr=c->r[0]; // 8010490C
  c->r[1]=c->r[1]+0x00000010u; // 80104910
  return; // 80104914
}

// fn_80104918
void f_80104918(Ctx* __restrict c) {
  c->r[5]=R8(c->r[5]+0x00000003u); // 80104918
  c->r[4]=0u+0x805D0000u; // 8010491C
  c->r[3]=0u+0x00000001u; // 80104920
  c->r[0]=0u-c->r[5]; // 80104924
  c->r[0]=c->r[0]|c->r[5]; // 80104928
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8010492C
  W8(c->r[4]+0x000078B0u,c->r[0]); // 80104930
  return; // 80104934
}

// fn_80104938
void f_80104938(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104938
  c->r[0]=c->lr; // 8010493C
  W32(c->r[1]+0x00000084u,c->r[0]); // 80104940
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 80104944
  W32(c->r[1]+0x00000078u,c->r[30]); // 80104948
  W32(c->r[1]+0x00000074u,c->r[29]); // 8010494C
  c->r[29]=c->r[5]|c->r[5]; // 80104950
  c->r[0]=R8(c->r[5]+0x00000003u); // 80104954
  cmps(c,0,(int32_t)c->r[0],4); // 80104958
  if (crb(c,2)) { goto L_80104AEC; } // 8010495C
  if (!crb(c,0)) { goto L_8010497C; } // 80104960
  cmps(c,0,(int32_t)c->r[0],0); // 80104964
  if (crb(c,2)) { goto L_8010498C; } // 80104968
  if (crb(c,0)) { goto L_80104C74; } // 8010496C
  cmps(c,0,(int32_t)c->r[0],3); // 80104970
  if (!crb(c,0)) { goto L_80104AAC; } // 80104974
  goto L_80104A48; // 80104978
L_8010497C:;
  cmps(c,0,(int32_t)c->r[0],6); // 8010497C
  if (crb(c,2)) { goto L_80104BE8; } // 80104980
  if (!crb(c,0)) { goto L_80104C74; } // 80104984
  goto L_80104B2C; // 80104988
L_8010498C:;
  c->r[4]=0u+0x803A0000u; // 8010498C
  c->r[30]=0u+0x80550000u; // 80104990
  c->r[4]=c->r[4]+0xFFFFF4FCu; // 80104994
  c->r[5]=0u+0x00000000u; // 80104998
  c->r[3]=c->r[30]+0xFFFFC848u; // 8010499C
  c->r[6]=0u+0x00000000u; // 801049A0
  c->r[4]=c->r[4]+0x00000014u; // 801049A4
  c->lr=0x801049ACu; f_8018D3E4(c); // 801049A8
  c->r[5]=0u+0x80620000u; // 801049AC
  c->r[31]=c->r[3]|c->r[3]; // 801049B0
  c->r[5]=c->r[5]+0x00007688u; // 801049B4
  c->r[4]=0u+0x00000016u; // 801049B8
  c->r[3]=R32(c->r[5]+0x00000014u); // 801049BC
  c->r[5]=c->r[31]|c->r[31]; // 801049C0
  c->lr=0x801049C8u; f_80038998(c); // 801049C4
  cmps(c,0,(int32_t)c->r[31],-1); // 801049C8
  if (crb(c,2)) { goto L_80104C74; } // 801049CC
  {uint32_t ea=c->r[2]+0xFFFFAE5Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801049D0
  c->r[4]=c->r[31]|c->r[31]; // 801049D4
  {uint32_t ea=c->r[2]+0xFFFFAE60u; c->f[4]=c->ps1[4]=RF32(ea);} // 801049D8
  c->r[3]=c->r[30]+0xFFFFC848u; // 801049DC
  {uint32_t ea=c->r[2]+0xFFFFAE64u; c->f[3]=c->ps1[3]=RF32(ea);} // 801049E0
  c->r[5]=c->r[1]+0x0000002Cu; // 801049E4
  {uint32_t ea=c->r[2]+0xFFFFAE68u; c->f[2]=c->ps1[2]=RF32(ea);} // 801049E8
  c->r[6]=c->r[1]+0x00000020u; // 801049EC
  {uint32_t ea=c->r[2]+0xFFFFAE6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801049F0
  {uint32_t ea=c->r[2]+0xFFFFAE70u; c->f[0]=c->ps1[0]=RF32(ea);} // 801049F4
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[5]);} // 801049F8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[4]);} // 801049FC
  c->r[8]=R32(c->r[1]+0x0000005Cu); // 80104A00
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[3]);} // 80104A04
  c->r[7]=R32(c->r[1]+0x00000060u); // 80104A08
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 80104A0C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80104A10
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 80104A14
  c->r[11]=R32(c->r[1]+0x00000050u); // 80104A18
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80104A1C
  c->r[10]=R32(c->r[1]+0x00000054u); // 80104A20
  c->r[9]=R32(c->r[1]+0x00000058u); // 80104A24
  W32(c->r[1]+0x00000020u,c->r[11]); // 80104A28
  W32(c->r[1]+0x00000024u,c->r[10]); // 80104A2C
  W32(c->r[1]+0x00000028u,c->r[9]); // 80104A30
  W32(c->r[1]+0x0000002Cu,c->r[8]); // 80104A34
  W32(c->r[1]+0x00000030u,c->r[7]); // 80104A38
  W32(c->r[1]+0x00000034u,c->r[0]); // 80104A3C
  c->lr=0x80104A44u; f_8018DBD0(c); // 80104A40
  goto L_80104C74; // 80104A44
L_80104A48:;
  c->r[3]=0u+0x80620000u; // 80104A48
  c->r[4]=0u+0x00000016u; // 80104A4C
  c->r[3]=c->r[3]+0x00007688u; // 80104A50
  c->r[3]=R32(c->r[3]+0x00000014u); // 80104A54
  c->lr=0x80104A5Cu; f_8003560C(c); // 80104A58
  cmps(c,0,(int32_t)c->r[3],-1); // 80104A5C
  c->r[4]=c->r[3]|c->r[3]; // 80104A60
  if (crb(c,2)) { goto L_80104C74; } // 80104A64
  c->r[0]=R8(c->r[29]+0x00000003u); // 80104A68
  cmps(c,0,(int32_t)c->r[0],2); // 80104A6C
  if (crb(c,2)) { goto L_80104A98; } // 80104A70
  if (!crb(c,0)) { goto L_80104C74; } // 80104A74
  cmps(c,0,(int32_t)c->r[0],1); // 80104A78
  if (!crb(c,0)) { goto L_80104A84; } // 80104A7C
  goto L_80104C74; // 80104A80
L_80104A84:;
  c->r[3]=0u+0x80550000u; // 80104A84
  c->r[5]=0u+0x00000001u; // 80104A88
  c->r[3]=c->r[3]+0xFFFFC848u; // 80104A8C
  c->lr=0x80104A94u; f_8018E4F0(c); // 80104A90
  goto L_80104C74; // 80104A94
L_80104A98:;
  c->r[3]=0u+0x80550000u; // 80104A98
  c->r[5]=0u+0x00000096u; // 80104A9C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80104AA0
  c->lr=0x80104AA8u; f_8018E4F0(c); // 80104AA4
  goto L_80104C74; // 80104AA8
L_80104AAC:;
  c->r[30]=0u+0x80620000u; // 80104AAC
  c->r[4]=0u+0x00000016u; // 80104AB0
  c->r[30]=c->r[30]+0x00007688u; // 80104AB4
  c->r[3]=R32(c->r[30]+0x00000014u); // 80104AB8
  c->lr=0x80104AC0u; f_8003560C(c); // 80104ABC
  cmps(c,0,(int32_t)c->r[3],-1); // 80104AC0
  c->r[4]=c->r[3]|c->r[3]; // 80104AC4
  if (crb(c,2)) { goto L_80104C74; } // 80104AC8
  c->r[3]=0u+0x80550000u; // 80104ACC
  c->r[3]=c->r[3]+0xFFFFC848u; // 80104AD0
  c->lr=0x80104AD8u; f_8018D738(c); // 80104AD4
  c->r[3]=R32(c->r[30]+0x00000014u); // 80104AD8
  c->r[4]=0u+0x00000016u; // 80104ADC
  c->r[5]=0u+0xFFFFFFFFu; // 80104AE0
  c->lr=0x80104AE8u; f_80038998(c); // 80104AE4
  goto L_80104C74; // 80104AE8
L_80104AEC:;
  c->r[30]=0u+0x80620000u; // 80104AEC
  c->r[4]=0u+0x00000016u; // 80104AF0
  c->r[30]=c->r[30]+0x00007688u; // 80104AF4
  c->r[3]=R32(c->r[30]+0x00000014u); // 80104AF8
  c->lr=0x80104B00u; f_8003560C(c); // 80104AFC
  cmps(c,0,(int32_t)c->r[3],-1); // 80104B00
  c->r[4]=c->r[3]|c->r[3]; // 80104B04
  if (crb(c,2)) { goto L_80104C74; } // 80104B08
  c->r[3]=0u+0x80550000u; // 80104B0C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80104B10
  c->lr=0x80104B18u; f_8018D694(c); // 80104B14
  c->r[3]=R32(c->r[30]+0x00000014u); // 80104B18
  c->r[4]=0u+0x00000016u; // 80104B1C
  c->r[5]=0u+0xFFFFFFFFu; // 80104B20
  c->lr=0x80104B28u; f_80038998(c); // 80104B24
  goto L_80104C74; // 80104B28
L_80104B2C:;
  c->r[4]=0u+0x803A0000u; // 80104B2C
  c->r[30]=0u+0x80550000u; // 80104B30
  c->r[4]=c->r[4]+0xFFFFF4FCu; // 80104B34
  c->r[5]=0u+0x00000000u; // 80104B38
  c->r[3]=c->r[30]+0xFFFFC848u; // 80104B3C
  c->r[6]=0u+0x00000000u; // 80104B40
  c->r[4]=c->r[4]+0x00000018u; // 80104B44
  c->lr=0x80104B4Cu; f_8018D3E4(c); // 80104B48
  c->r[5]=0u+0x80620000u; // 80104B4C
  c->r[31]=c->r[3]|c->r[3]; // 80104B50
  c->r[5]=c->r[5]+0x00007688u; // 80104B54
  c->r[4]=0u+0x00000016u; // 80104B58
  c->r[3]=R32(c->r[5]+0x00000014u); // 80104B5C
  c->r[5]=c->r[31]|c->r[31]; // 80104B60
  c->lr=0x80104B68u; f_80038998(c); // 80104B64
  cmps(c,0,(int32_t)c->r[31],-1); // 80104B68
  if (crb(c,2)) { goto L_80104C74; } // 80104B6C
  {uint32_t ea=c->r[2]+0xFFFFAE74u; c->f[5]=c->ps1[5]=RF32(ea);} // 80104B70
  c->r[4]=c->r[31]|c->r[31]; // 80104B74
  {uint32_t ea=c->r[2]+0xFFFFAE78u; c->f[4]=c->ps1[4]=RF32(ea);} // 80104B78
  c->r[3]=c->r[30]+0xFFFFC848u; // 80104B7C
  {uint32_t ea=c->r[2]+0xFFFFAE7Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80104B80
  c->r[5]=c->r[1]+0x00000014u; // 80104B84
  {uint32_t ea=c->r[2]+0xFFFFAE80u; c->f[2]=c->ps1[2]=RF32(ea);} // 80104B88
  c->r[6]=c->r[1]+0x00000008u; // 80104B8C
  {uint32_t ea=c->r[2]+0xFFFFADD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104B90
  {uint32_t ea=c->r[2]+0xFFFFAE84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80104B94
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[5]);} // 80104B98
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[4]);} // 80104B9C
  c->r[8]=R32(c->r[1]+0x00000044u); // 80104BA0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[3]);} // 80104BA4
  c->r[7]=R32(c->r[1]+0x00000048u); // 80104BA8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 80104BAC
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 80104BB0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80104BB4
  c->r[11]=R32(c->r[1]+0x00000038u); // 80104BB8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80104BBC
  c->r[10]=R32(c->r[1]+0x0000003Cu); // 80104BC0
  c->r[9]=R32(c->r[1]+0x00000040u); // 80104BC4
  W32(c->r[1]+0x00000008u,c->r[11]); // 80104BC8
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 80104BCC
  W32(c->r[1]+0x00000010u,c->r[9]); // 80104BD0
  W32(c->r[1]+0x00000014u,c->r[8]); // 80104BD4
  W32(c->r[1]+0x00000018u,c->r[7]); // 80104BD8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80104BDC
  c->lr=0x80104BE4u; f_8018DBD0(c); // 80104BE0
  goto L_80104C74; // 80104BE4
L_80104BE8:;
  c->r[30]=0u+0x80620000u; // 80104BE8
  c->r[4]=0u+0x00000016u; // 80104BEC
  c->r[30]=c->r[30]+0x00007688u; // 80104BF0
  c->r[3]=R32(c->r[30]+0x00000014u); // 80104BF4
  c->lr=0x80104BFCu; f_8003560C(c); // 80104BF8
  cmps(c,0,(int32_t)c->r[3],-1); // 80104BFC
  c->r[29]=c->r[3]|c->r[3]; // 80104C00
  if (crb(c,2)) { goto L_80104C74; } // 80104C04
  c->r[3]=R32(c->r[30]+0x00000014u); // 80104C08
  c->r[4]=0u+0x00000018u; // 80104C0C
  c->lr=0x80104C14u; f_8003560C(c); // 80104C10
  cmpu(c,0,c->r[3],0x00000003u); // 80104C14
  c->r[31]=c->r[3]|c->r[3]; // 80104C18
  if (crb(c,1)) { goto L_80104C44; } // 80104C1C
  c->r[3]=0u+0x80550000u; // 80104C20
  c->r[4]=c->r[29]|c->r[29]; // 80104C24
  c->r[3]=c->r[3]+0xFFFFC848u; // 80104C28
  c->lr=0x80104C30u; f_8018D694(c); // 80104C2C
  c->r[3]=R32(c->r[30]+0x00000014u); // 80104C30
  c->r[4]=0u+0x00000016u; // 80104C34
  c->r[5]=0u+0xFFFFFFFFu; // 80104C38
  c->lr=0x80104C40u; f_80038998(c); // 80104C3C
  goto L_80104C74; // 80104C40
L_80104C44:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 80104C44
  c->r[5]=c->r[31]+0xFFFFFFFDu; // 80104C48
  c->r[4]=0u+0x00000018u; // 80104C4C
  c->lr=0x80104C54u; f_80038998(c); // 80104C50
  c->r[0]=c->r[31]+0xFFFFFFFDu; // 80104C54
  c->r[3]=0u+0x80550000u; // 80104C58
  c->r[4]=c->r[29]|c->r[29]; // 80104C5C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80104C60
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 80104C64
  c->lr=0x80104C6Cu; f_8018EBA0(c); // 80104C68
  c->r[3]=0u+0x00000002u; // 80104C6C
  goto L_80104C78; // 80104C70
L_80104C74:;
  c->r[3]=0u+0x00000001u; // 80104C74
L_80104C78:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 80104C78
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 80104C7C
  c->r[30]=R32(c->r[1]+0x00000078u); // 80104C80
  c->r[29]=R32(c->r[1]+0x00000074u); // 80104C84
  c->lr=c->r[0]; // 80104C88
  c->r[1]=c->r[1]+0x00000080u; // 80104C8C
  return; // 80104C90
}

// fn_80104C94
void f_80104C94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104C94
  c->r[0]=c->lr; // 80104C98
  {uint32_t ea=c->r[2]+0xFFFFADD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104C9C
  c->r[3]=0u+0x00000000u; // 80104CA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104CA4
  c->r[4]=0u+0x00000000u; // 80104CA8
  c->r[5]=0u+0x0000003Cu; // 80104CAC
  c->r[6]=0u+0x000001C0u; // 80104CB0
  c->r[7]=0u+0x000000FFu; // 80104CB4
  c->lr=0x80104CBCu; f_8024636C(c); // 80104CB8
  {uint32_t ea=c->r[2]+0xFFFFADD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104CBC
  c->r[3]=0u+0x00000244u; // 80104CC0
  c->r[4]=0u+0x00000000u; // 80104CC4
  c->r[5]=0u+0x00000280u; // 80104CC8
  c->r[6]=0u+0x000001C0u; // 80104CCC
  c->r[7]=0u+0x000000FFu; // 80104CD0
  c->lr=0x80104CD8u; f_8024636C(c); // 80104CD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104CD8
  c->r[3]=0u+0x00000001u; // 80104CDC
  c->lr=c->r[0]; // 80104CE0
  c->r[1]=c->r[1]+0x00000010u; // 80104CE4
  return; // 80104CE8
}

// fn_80104CEC
void f_80104CEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104CEC
  c->r[0]=c->lr; // 80104CF0
  c->r[3]=0u+0x80550000u; // 80104CF4
  c->r[4]=0u+0x0000002Bu; // 80104CF8
  W32(c->r[1]+0x00000044u,c->r[0]); // 80104CFC
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80104D00
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80104D04
  c->lr=0x80104D0Cu; f_8019C920(c); // 80104D08
  c->r[8]=0u+0x803A0000u; // 80104D0C
  {uint32_t ea=c->r[8]+0xFFFFF4D0u; c->r[7]=R32(ea); c->r[8]=ea;} // 80104D10
  c->r[31]=c->r[3]|c->r[3]; // 80104D14
  c->r[3]=c->r[1]+0x00000028u; // 80104D18
  c->r[6]=R32(c->r[8]+0x00000004u); // 80104D1C
  c->r[4]=c->r[1]+0x00000018u; // 80104D20
  c->r[5]=R32(c->r[8]+0x00000008u); // 80104D24
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 80104D28
  W32(c->r[1]+0x00000018u,c->r[7]); // 80104D2C
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 80104D30
  W32(c->r[1]+0x00000020u,c->r[5]); // 80104D34
  W32(c->r[1]+0x00000024u,c->r[0]); // 80104D38
  c->lr=0x80104D40u; f_8004F9F8(c); // 80104D3C
  c->r[3]=c->r[31]|c->r[31]; // 80104D40
  c->r[4]=0u+0x00000000u; // 80104D44
  c->lr=0x80104D4Cu; f_80039840(c); // 80104D48
  c->r[5]=c->r[1]+0x00000028u; // 80104D4C
  c->r[4]=0u+0x00000000u; // 80104D50
  c->lr=0x80104D58u; f_8025892C(c); // 80104D54
  c->r[8]=0u+0x803A0000u; // 80104D58
  {uint32_t ea=c->r[8]+0xFFFFF4E0u; c->r[7]=R32(ea); c->r[8]=ea;} // 80104D5C
  c->r[3]=c->r[1]+0x00000028u; // 80104D60
  c->r[4]=c->r[1]+0x00000008u; // 80104D64
  c->r[6]=R32(c->r[8]+0x00000004u); // 80104D68
  c->r[5]=R32(c->r[8]+0x00000008u); // 80104D6C
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 80104D70
  W32(c->r[1]+0x00000008u,c->r[7]); // 80104D74
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80104D78
  W32(c->r[1]+0x00000010u,c->r[5]); // 80104D7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104D80
  c->lr=0x80104D88u; f_8004F9F8(c); // 80104D84
  c->r[3]=c->r[31]|c->r[31]; // 80104D88
  c->r[4]=0u+0x00000000u; // 80104D8C
  c->lr=0x80104D94u; f_80039840(c); // 80104D90
  c->r[4]=0u+0x803A0000u; // 80104D94
  c->r[5]=c->r[1]+0x00000028u; // 80104D98
  c->r[4]=c->r[4]+0xFFFFF4FCu; // 80104D9C
  c->r[4]=c->r[4]+0x0000001Cu; // 80104DA0
  c->lr=0x80104DA8u; f_8025892C(c); // 80104DA4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80104DA8
  c->r[3]=0u+0x00000001u; // 80104DAC
  c->r[0]=R32(c->r[1]+0x00000044u); // 80104DB0
  c->lr=c->r[0]; // 80104DB4
  c->r[1]=c->r[1]+0x00000040u; // 80104DB8
  return; // 80104DBC
}

// fn_80104DC0
void f_80104DC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104DC0
  c->r[0]=c->lr; // 80104DC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104DC8
  c->r[0]=R8(c->r[5]+0x00000003u); // 80104DCC
  cmps(c,0,(int32_t)c->r[0],0); // 80104DD0
  if (!crb(c,2)) { goto L_80104E14; } // 80104DD4
  c->r[3]=0u+0x805D0000u; // 80104DD8
  c->r[4]=0u+0x00000004u; // 80104DDC
  c->r[3]=c->r[3]+0x00006D70u; // 80104DE0
  c->r[5]=0u+0x00000049u; // 80104DE4
  c->r[6]=0u+0x00000000u; // 80104DE8
  c->r[7]=0u+0x00000000u; // 80104DEC
  c->r[8]=0u+0x00000000u; // 80104DF0
  c->lr=0x80104DF8u; f_8022AC00(c); // 80104DF4
  c->r[6]=0u+0x80620000u; // 80104DF8
  c->r[5]=c->r[3]|c->r[3]; // 80104DFC
  c->r[6]=c->r[6]+0x00007688u; // 80104E00
  c->r[4]=0u+0x00000026u; // 80104E04
  c->r[3]=R32(c->r[6]+0x00000014u); // 80104E08
  c->lr=0x80104E10u; f_80038998(c); // 80104E0C
  goto L_80104E38; // 80104E10
L_80104E14:;
  c->r[3]=0u+0x80620000u; // 80104E14
  c->r[4]=0u+0x00000026u; // 80104E18
  c->r[3]=c->r[3]+0x00007688u; // 80104E1C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80104E20
  c->lr=0x80104E28u; f_8003560C(c); // 80104E24
  c->r[5]=0u+0x805D0000u; // 80104E28
  c->r[4]=c->r[3]|c->r[3]; // 80104E2C
  c->r[3]=c->r[5]+0x00006D70u; // 80104E30
  c->lr=0x80104E38u; f_8022B034(c); // 80104E34
L_80104E38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104E38
  c->r[3]=0u+0x00000001u; // 80104E3C
  c->lr=c->r[0]; // 80104E40
  c->r[1]=c->r[1]+0x00000010u; // 80104E44
  return; // 80104E48
}

// fn_80104E4C
void f_80104E4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104E4C
  c->r[0]=c->lr; // 80104E50
  c->r[3]=0u+0x80620000u; // 80104E54
  c->r[4]=0u+0x00000028u; // 80104E58
  W32(c->r[1]+0x00000024u,c->r[0]); // 80104E5C
  c->r[3]=c->r[3]+0x00007688u; // 80104E60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80104E64
  W32(c->r[1]+0x00000018u,c->r[30]); // 80104E68
  c->r[3]=R32(c->r[3]+0x00000014u); // 80104E6C
  c->lr=0x80104E74u; f_8003560C(c); // 80104E70
  c->r[4]=0u+0x80550000u; // 80104E74
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 80104E78
  c->r[3]=c->r[4]+0xFFFFCE54u; // 80104E7C
  c->r[4]=0u+0x00000000u; // 80104E80
  c->lr=0x80104E88u; f_8019C920(c); // 80104E84
  cmps(c,0,(int32_t)c->r[3],0); // 80104E88
  c->r[30]=c->r[3]|c->r[3]; // 80104E8C
  if (crb(c,2)) { goto L_80104F74; } // 80104E90
  c->r[4]=c->r[1]+0x00000008u; // 80104E94
  c->r[5]=0u+0x00000000u; // 80104E98
  c->lr=0x80104EA0u; f_8007C6C8(c); // 80104E9C
  cmps(c,0,(int32_t)c->r[31],1); // 80104EA0
  if (crb(c,2)) { goto L_80104EFC; } // 80104EA4
  if (!crb(c,0)) { goto L_80104EB8; } // 80104EA8
  cmps(c,0,(int32_t)c->r[31],0); // 80104EAC
  if (!crb(c,0)) { goto L_80104EC4; } // 80104EB0
  goto L_80104F5C; // 80104EB4
L_80104EB8:;
  cmps(c,0,(int32_t)c->r[31],3); // 80104EB8
  if (!crb(c,0)) { goto L_80104F5C; } // 80104EBC
  goto L_80104F34; // 80104EC0
L_80104EC4:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80104EC4
  {uint32_t ea=c->r[2]+0xFFFFAE88u; c->f[0]=c->ps1[0]=RF32(ea);} // 80104EC8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104ECC
  fcmp(c,0,c->f[1],c->f[0]); // 80104ED0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80104ED4
  if (!crb(c,2)) { goto L_80104F5C; } // 80104ED8
  c->r[3]=c->r[30]|c->r[30]; // 80104EDC
  c->r[4]=0u+0x00000002u; // 80104EE0
  c->r[5]=0u+0x00000009u; // 80104EE4
  c->r[6]=0u+0x00000001u; // 80104EE8
  c->r[7]=0u+0x00000001u; // 80104EEC
  c->lr=0x80104EF4u; f_8017900C(c); // 80104EF0
  c->r[31]=c->r[31]+0x00000001u; // 80104EF4
  goto L_80104F5C; // 80104EF8
L_80104EFC:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80104EFC
  {uint32_t ea=c->r[2]+0xFFFFAE54u; c->f[0]=c->ps1[0]=RF32(ea);} // 80104F00
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104F04
  fcmp(c,0,c->f[1],c->f[0]); // 80104F08
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80104F0C
  if (!crb(c,2)) { goto L_80104F5C; } // 80104F10
  c->r[3]=c->r[30]|c->r[30]; // 80104F14
  c->r[4]=0u+0x00000002u; // 80104F18
  c->r[5]=0u+0x00000009u; // 80104F1C
  c->r[6]=0u+0x00000001u; // 80104F20
  c->r[7]=0u+0x00000001u; // 80104F24
  c->lr=0x80104F2Cu; f_8017900C(c); // 80104F28
  c->r[31]=c->r[31]+0x00000001u; // 80104F2C
  goto L_80104F5C; // 80104F30
L_80104F34:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80104F34
  {uint32_t ea=c->r[2]+0xFFFFADD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80104F38
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104F3C
  fcmp(c,0,c->f[1],c->f[0]); // 80104F40
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80104F44
  if (!crb(c,2)) { goto L_80104F5C; } // 80104F48
  {uint32_t ea=c->r[2]+0xFFFFAE58u; c->f[0]=c->ps1[0]=RF32(ea);} // 80104F4C
  fcmp(c,0,c->f[1],c->f[0]); // 80104F50
  if (!crb(c,0)) { goto L_80104F5C; } // 80104F54
  c->r[31]=0u+0x00000000u; // 80104F58
L_80104F5C:;
  c->r[3]=0u+0x80620000u; // 80104F5C
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 80104F60
  c->r[3]=c->r[3]+0x00007688u; // 80104F64
  c->r[4]=0u+0x00000028u; // 80104F68
  c->r[3]=R32(c->r[3]+0x00000014u); // 80104F6C
  c->lr=0x80104F74u; f_80038998(c); // 80104F70
L_80104F74:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80104F74
  c->r[3]=0u+0x00000001u; // 80104F78
  c->r[30]=R32(c->r[1]+0x00000018u); // 80104F7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80104F80
  c->lr=c->r[0]; // 80104F84
  c->r[1]=c->r[1]+0x00000020u; // 80104F88
  return; // 80104F8C
}

// fn_80104F90
void f_80104F90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104F90
  c->r[0]=c->lr; // 80104F94
  c->r[7]=0u+0x803E0000u; // 80104F98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104F9C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80104FA0
  c->r[7]=c->r[7]+0xFFFFAB68u; // 80104FA4
  c->r[4]=c->r[5]|c->r[5]; // 80104FA8
  c->r[5]=c->r[6]|c->r[6]; // 80104FAC
  c->r[12]=c->r[7]+c->r[0]; // 80104FB0
  c->lr=0x80104FB8u; f_802BA00C(c); // 80104FB4
  c->r[0]=c->r[0]|0x00000000u; // 80104FB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104FBC
  c->lr=c->r[0]; // 80104FC0
  c->r[1]=c->r[1]+0x00000010u; // 80104FC4
  return; // 80104FC8
}

// fn_80104FCC
void f_80104FCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104FCC
  c->r[0]=c->lr; // 80104FD0
  c->r[3]=0u+0x80620000u; // 80104FD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104FD8
  c->r[3]=c->r[3]+0x000079C0u; // 80104FDC
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104FE0
  c->lr=0x80104FE8u; f_8002C1B0(c); // 80104FE4
  {uint32_t ea=c->r[2]+0xFFFFAE8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80104FE8
  fcmp(c,0,c->f[1],c->f[0]); // 80104FEC
  c->r[3]=c->cr; // 80104FF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104FF4
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 80104FF8
  c->lr=c->r[0]; // 80104FFC
  c->r[1]=c->r[1]+0x00000010u; // 80105000
  return; // 80105004
}

// fn_80105008
void f_80105008(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105008
  c->r[0]=c->lr; // 8010500C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105010
  c->lr=0x80105018u; f_80265F7C(c); // 80105014
  cmps(c,0,(int32_t)c->r[3],1); // 80105018
  if (!crb(c,2)) { goto L_80105050; } // 8010501C
  c->r[3]=0u+0x80620000u; // 80105020
  c->r[3]=c->r[3]+0x000079C0u; // 80105024
  c->r[0]=R32(c->r[3]+0x00000008u); // 80105028
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 8010502C
  if (crb(c,2)) { goto L_80105050; } // 80105030
  c->r[3]=0u+0x80550000u; // 80105034
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80105038
  c->lr=0x80105040u; f_800ACDD4(c); // 8010503C
  cmpu(c,0,c->r[3],0x00000001u); // 80105040
  if (!crb(c,2)) { goto L_80105050; } // 80105044
  c->r[3]=0u+0x00000001u; // 80105048
  goto L_80105054; // 8010504C
L_80105050:;
  c->r[3]=0u+0x00000000u; // 80105050
L_80105054:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105054
  c->lr=c->r[0]; // 80105058
  c->r[1]=c->r[1]+0x00000010u; // 8010505C
  return; // 80105060
}

// fn_80105064
void f_80105064(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105064
  c->r[0]=c->lr; // 80105068
  c->r[7]=0u+0x803E0000u; // 8010506C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105070
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80105074
  c->r[7]=c->r[7]+0xFFFFAC28u; // 80105078
  c->r[4]=c->r[5]|c->r[5]; // 8010507C
  c->r[5]=c->r[6]|c->r[6]; // 80105080
  c->r[12]=c->r[7]+c->r[0]; // 80105084
  c->lr=0x8010508Cu; f_802BA00C(c); // 80105088
  c->r[0]=c->r[0]|0x00000000u; // 8010508C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105090
  c->lr=c->r[0]; // 80105094
  c->r[1]=c->r[1]+0x00000010u; // 80105098
  return; // 8010509C
}

// fn_801050A0
void f_801050A0(Ctx* __restrict c) {
  return; // 801050A0
}

// fn_801050A4
void f_801050A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801050A4
  c->r[0]=c->lr; // 801050A8
  cmps(c,0,(int32_t)c->r[3],0); // 801050AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801050B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801050B4
  c->r[31]=c->r[4]|c->r[4]; // 801050B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801050BC
  c->r[30]=c->r[3]|c->r[3]; // 801050C0
  if (crb(c,2)) { goto L_801050E0; } // 801050C4
  c->r[4]=0u+0x00000000u; // 801050C8
  c->lr=0x801050D0u; f_80103A70(c); // 801050CC
  cmps(c,0,(int32_t)c->r[31],0); // 801050D0
  if (!crb(c,1)) { goto L_801050E0; } // 801050D4
  c->r[3]=c->r[30]|c->r[30]; // 801050D8
  c->lr=0x801050E0u; f_800C69B8(c); // 801050DC
L_801050E0:;
  c->r[3]=c->r[30]|c->r[30]; // 801050E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801050E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801050E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801050EC
  c->lr=c->r[0]; // 801050F0
  c->r[1]=c->r[1]+0x00000010u; // 801050F4
  return; // 801050F8
}

// fn_801050FC
void f_801050FC(Ctx* __restrict c) {
  c->r[3]=0u+0x803D0000u; // 801050FC
  c->r[3]=c->r[3]+0x00006458u; // 80105100
  return; // 80105104
}

// fn_80105108
void f_80105108(Ctx* __restrict c) {
  c->r[3]=0u+0x803D0000u; // 80105108
  c->r[3]=c->r[3]+0x00006764u; // 8010510C
  return; // 80105110
}

// fn_80105114
void f_80105114(Ctx* __restrict c) {
  c->r[3]=0u+0x803D0000u; // 80105114
  c->r[3]=c->r[3]+0x000069A0u; // 80105118
  return; // 8010511C
}

// fn_80105120
void f_80105120(Ctx* __restrict c) {
  c->r[3]=0u+0x803D0000u; // 80105120
  c->r[3]=c->r[3]+0x00006940u; // 80105124
  return; // 80105128
}

// fn_8010512C
void f_8010512C(Ctx* __restrict c) {
  c->r[3]=0u+0x803D0000u; // 8010512C
  c->r[3]=c->r[3]+0x00006980u; // 80105130
  return; // 80105134
}

// fn_80105138
void f_80105138(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF8740u; // 80105138
  return; // 8010513C
}

// fn_80105140
void f_80105140(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 80105140
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80105144
  c->r[3]=c->r[3]+0xFFFFA1A0u; // 80105148
  c->r[3]=R32(c->r[3]+c->r[0]); // 8010514C
  return; // 80105150
}

// fn_80105154
void f_80105154(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 80105154
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80105158
  c->r[3]=c->r[3]+0xFFFFAB0Cu; // 8010515C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80105160
  return; // 80105164
}

// fn_80105168
void f_80105168(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105168
  c->r[0]=c->lr; // 8010516C
  c->r[5]=0u+0x805D0000u; // 80105170
  c->r[3]=0u+0x80550000u; // 80105174
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105178
  c->r[5]=c->r[5]+0x00003F6Cu; // 8010517C
  c->r[4]=0u+0x00000001u; // 80105180
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80105184
  c->r[0]=R32(c->r[5]+0x00000210u); // 80105188
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 8010518C
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 80105190
  W32(c->r[5]+0x00000210u,c->r[0]); // 80105194
  c->lr=0x8010519Cu; f_8019C920(c); // 80105198
  c->r[0]=R32(c->r[3]+0x00000210u); // 8010519C
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 801051A0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 801051A4
  W32(c->r[3]+0x00000210u,c->r[0]); // 801051A8
  c->r[3]=0u+0x00000001u; // 801051AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801051B0
  c->lr=c->r[0]; // 801051B4
  c->r[1]=c->r[1]+0x00000010u; // 801051B8
  return; // 801051BC
}

// fn_801051C0
void f_801051C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801051C0
  c->r[0]=c->lr; // 801051C4
  c->r[3]=0u+0x80550000u; // 801051C8
  c->r[4]=0u+0x00000005u; // 801051CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801051D0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801051D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801051D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801051DC
  c->lr=0x801051E4u; f_8019C920(c); // 801051E0
  c->r[30]=c->r[3]|c->r[3]; // 801051E4
  c->r[31]=0u+0x805D0000u; // 801051E8
  c->r[5]=c->r[30]|c->r[30]; // 801051EC
  c->r[4]=0u+0x00000000u; // 801051F0
  c->r[3]=c->r[31]+0x00003F6Cu; // 801051F4
  c->lr=0x801051FCu; f_801FEA74(c); // 801051F8
  c->r[4]=c->r[30]|c->r[30]; // 801051FC
  c->r[3]=c->r[31]+0x00003F6Cu; // 80105200
  c->lr=0x80105208u; f_8020C460(c); // 80105204
  c->r[3]=0u+0x80620000u; // 80105208
  c->r[4]=0u+0x00000001u; // 8010520C
  c->r[3]=c->r[3]+0x00007688u; // 80105210
  c->r[3]=R32(c->r[3]+0x00000014u); // 80105214
  c->lr=0x8010521Cu; f_80105238(c); // 80105218
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010521C
  c->r[3]=0u+0x00000001u; // 80105220
  c->r[30]=R32(c->r[1]+0x00000008u); // 80105224
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105228
  c->lr=c->r[0]; // 8010522C
  c->r[1]=c->r[1]+0x00000010u; // 80105230
  return; // 80105234
}

// fn_80105238
void f_80105238(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105238
  c->r[0]=c->lr; // 8010523C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105240
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80105244
  W32(c->r[1]+0x00000008u,c->r[30]); // 80105248
  c->r[30]=c->r[3]|c->r[3]; // 8010524C
  c->lr=0x80105254u; f_801C22E0(c); // 80105250
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80105254
  c->r[31]=c->r[3]|c->r[3]; // 80105258
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8010525C
  if (crb(c,2)) { goto L_801052BC; } // 80105260
  cmpu(c,0,c->r[0],0x00000230u); // 80105264
  if (crb(c,0)) { goto L_80105288; } // 80105268
  c->r[3]=0u+0x803E0000u; // 8010526C
  c->r[5]=0u+0x803E0000u; // 80105270
  c->r[3]=c->r[3]+0xFFFFC260u; // 80105274
  c->r[4]=0u+0x000003B9u; // 80105278
  c->r[5]=c->r[5]+0xFFFFC234u; // 8010527C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80105280
  c->lr=0x80105288u; f_803732A8(c); // 80105284
L_80105288:;
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 80105288
  c->r[5]=rotl(c->r[31],29)&0x00001FFCu; // 8010528C
  c->r[0]=rotl(c->r[31],27)&0xF8000000u; // 80105290
  c->r[4]=0u+0x00000001u; // 80105294
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 80105298
  c->r[6]=c->r[30]+c->r[5]; // 8010529C
  c->r[0]=c->r[0]-c->r[3]; // 801052A0
  c->r[5]=R32(c->r[6]+0x00000A60u); // 801052A4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFFFu; // 801052A8
  c->r[0]=c->r[0]+c->r[3]; // 801052AC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801052B0
  c->r[0]=c->r[5]|c->r[0]; // 801052B4
  W32(c->r[6]+0x00000A60u,c->r[0]); // 801052B8
L_801052BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801052BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801052C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801052C4
  c->lr=c->r[0]; // 801052C8
  c->r[1]=c->r[1]+0x00000010u; // 801052CC
  return; // 801052D0
}

// fn_801052D4
void f_801052D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801052D4
  c->r[0]=c->lr; // 801052D8
  W32(c->r[1]+0x00000054u,c->r[0]); // 801052DC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801052E0
  c->r[31]=c->r[5]|c->r[5]; // 801052E4
  W32(c->r[1]+0x00000048u,c->r[30]); // 801052E8
  W32(c->r[1]+0x00000044u,c->r[29]); // 801052EC
  c->r[0]=R8(c->r[5]+0x00000004u); // 801052F0
  cmpu(c,0,c->r[0],0x00000009u); // 801052F4
  if (crb(c,1)) { goto L_801056DC; } // 801052F8
  c->r[3]=0u+0x803E0000u; // 801052FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80105300
  c->r[3]=c->r[3]+0xFFFFC118u; // 80105304
  c->r[3]=R32(c->r[3]+c->r[0]); // 80105308
  c->ctr=c->r[3]; // 8010530C
  if (true) { switch (c->ctr) { case 0x80105314u: goto L_80105314; case 0x80105398u: goto L_80105398; case 0x801053D8u: goto L_801053D8; case 0x8010543Cu: goto L_8010543C; case 0x80105468u: goto L_80105468; case 0x801054BCu: goto L_801054BC; case 0x801054E8u: goto L_801054E8; case 0x80105510u: goto L_80105510; case 0x80105650u: goto L_80105650; case 0x80105690u: goto L_80105690; default: break; } dispatch(c,c->ctr); return; } // 80105310
L_80105314:;
  c->r[3]=0u+0x000000B4u; // 80105314
  c->lr=0x8010531Cu; f_8023E87C(c); // 80105318
  cmps(c,0,(int32_t)c->r[3],0); // 8010531C
  c->r[30]=c->r[3]|c->r[3]; // 80105320
  if (crb(c,2)) { goto L_8010532C; } // 80105324
  c->lr=0x8010532Cu; f_801056FC(c); // 80105328
L_8010532C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8010532C
  if (crb(c,2)) { goto L_801056DC; } // 80105330
  c->r[0]=0u+0x00000001u; // 80105334
  c->r[4]=0u+0x00000005u; // 80105338
  W8(c->r[30]+0x0000006Cu,c->r[0]); // 8010533C
  c->r[0]=0u+0x00000000u; // 80105340
  {uint32_t ea=c->r[2]+0xFFFFAE90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105344
  c->r[3]=c->r[30]+0x00000038u; // 80105348
  W8(c->r[30]+0x0000006Du,c->r[4]); // 8010534C
  c->r[4]=c->r[30]+0x0000002Cu; // 80105350
  W8(c->r[30]+0x0000006Eu,c->r[0]); // 80105354
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 80105358
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 8010535C
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 80105360
  c->lr=0x80105368u; f_800361A0(c); // 80105364
  c->r[12]=R32(c->r[30]+0x000000B0u); // 80105368
  c->r[3]=c->r[30]|c->r[30]; // 8010536C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80105370
  c->ctr=c->r[12]; // 80105374
  if (true) { c->lr=0x8010537Cu; dispatch(c,c->ctr); } // 80105378
  c->r[3]=0u+0x80620000u; // 8010537C
  c->r[4]=R8(c->r[31]+0x00000003u); // 80105380
  c->r[3]=c->r[3]+0x00007688u; // 80105384
  c->r[5]=c->r[30]|c->r[30]; // 80105388
  c->r[3]=R32(c->r[3]+0x00000014u); // 8010538C
  c->lr=0x80105394u; f_80038998(c); // 80105390
  goto L_801056DC; // 80105394
L_80105398:;
  c->r[30]=0u+0x80620000u; // 80105398
  c->r[4]=R8(c->r[5]+0x00000003u); // 8010539C
  c->r[30]=c->r[30]+0x00007688u; // 801053A0
  c->r[3]=R32(c->r[30]+0x00000014u); // 801053A4
  c->lr=0x801053ACu; f_8003560C(c); // 801053A8
  cmps(c,0,(int32_t)c->r[3],0); // 801053AC
  if (crb(c,2)) { goto L_801056DC; } // 801053B0
  c->r[12]=R32(c->r[3]+0x000000B0u); // 801053B4
  c->r[12]=R32(c->r[12]+0x00000024u); // 801053B8
  c->ctr=c->r[12]; // 801053BC
  if (true) { c->lr=0x801053C4u; dispatch(c,c->ctr); } // 801053C0
  c->r[3]=R32(c->r[30]+0x00000014u); // 801053C4
  c->r[5]=0u+0x00000000u; // 801053C8
  c->r[4]=R8(c->r[31]+0x00000003u); // 801053CC
  c->lr=0x801053D4u; f_80038998(c); // 801053D0
  goto L_801056DC; // 801053D4
L_801053D8:;
  c->r[30]=0u+0x00010000u; // 801053D8
  c->r[3]=0u+0x00000016u; // 801053DC
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 801053E0
  c->r[4]=0u+0x00000002u; // 801053E4
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801053E8
  c->lr=0x801053F0u; f_80036C44(c); // 801053EC
  c->r[5]=0u+0x80620000u; // 801053F0
  c->r[29]=c->r[3]|c->r[3]; // 801053F4
  c->r[5]=c->r[5]+0x00007688u; // 801053F8
  c->r[4]=R8(c->r[31]+0x00000003u); // 801053FC
  c->r[3]=R32(c->r[5]+0x00000014u); // 80105400
  c->r[5]=c->r[29]|c->r[29]; // 80105404
  c->lr=0x8010540Cu; f_80038998(c); // 80105408
  c->r[0]=R8(c->r[31]+0x00000005u); // 8010540C
  cmps(c,0,(int32_t)c->r[0],0); // 80105410
  if (crb(c,2)) { goto L_801056DC; } // 80105414
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 80105418
  c->r[3]=c->r[29]|c->r[29]; // 8010541C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80105420
  c->lr=0x80105428u; f_80036BA8(c); // 80105424
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 80105428
  c->r[3]=c->r[29]|c->r[29]; // 8010542C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80105430
  c->lr=0x80105438u; f_80036BA8(c); // 80105434
  goto L_801056DC; // 80105438
L_8010543C:;
  c->r[30]=0u+0x80620000u; // 8010543C
  c->r[4]=R8(c->r[5]+0x00000003u); // 80105440
  c->r[30]=c->r[30]+0x00007688u; // 80105444
  c->r[3]=R32(c->r[30]+0x00000014u); // 80105448
  c->lr=0x80105450u; f_8003560C(c); // 8010544C
  c->lr=0x80105454u; f_80036D0C(c); // 80105450
  c->r[3]=R32(c->r[30]+0x00000014u); // 80105454
  c->r[5]=0u+0x00000000u; // 80105458
  c->r[4]=R8(c->r[31]+0x00000003u); // 8010545C
  c->lr=0x80105464u; f_80038998(c); // 80105460
  goto L_801056DC; // 80105464
L_80105468:;
  {uint32_t ea=c->r[2]+0xFFFFAE94u; c->f[2]=c->ps1[2]=RF32(ea);} // 80105468
  c->r[3]=c->r[1]+0x00000014u; // 8010546C
  {uint32_t ea=c->r[2]+0xFFFFAE98u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105470
  {uint32_t ea=c->r[2]+0xFFFFAE90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105474
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 80105478
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 8010547C
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 80105480
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80105484
  c->r[4]=R32(c->r[1]+0x00000030u); // 80105488
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010548C
  W32(c->r[1]+0x00000014u,c->r[5]); // 80105490
  W32(c->r[1]+0x00000018u,c->r[4]); // 80105494
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80105498
  c->lr=0x801054A0u; f_80036740(c); // 8010549C
  c->r[6]=0u+0x80620000u; // 801054A0
  c->r[5]=c->r[3]|c->r[3]; // 801054A4
  c->r[6]=c->r[6]+0x00007688u; // 801054A8
  c->r[4]=R8(c->r[31]+0x00000003u); // 801054AC
  c->r[3]=R32(c->r[6]+0x00000014u); // 801054B0
  c->lr=0x801054B8u; f_80038998(c); // 801054B4
  goto L_801056DC; // 801054B8
L_801054BC:;
  c->r[30]=0u+0x80620000u; // 801054BC
  c->r[4]=R8(c->r[5]+0x00000003u); // 801054C0
  c->r[30]=c->r[30]+0x00007688u; // 801054C4
  c->r[3]=R32(c->r[30]+0x00000014u); // 801054C8
  c->lr=0x801054D0u; f_8003560C(c); // 801054CC
  c->lr=0x801054D4u; f_80036974(c); // 801054D0
  c->r[3]=R32(c->r[30]+0x00000014u); // 801054D4
  c->r[5]=0u+0x00000000u; // 801054D8
  c->r[4]=R8(c->r[31]+0x00000003u); // 801054DC
  c->lr=0x801054E4u; f_80038998(c); // 801054E0
  goto L_801056DC; // 801054E4
L_801054E8:;
  c->r[3]=0u+0x80620000u; // 801054E8
  c->r[4]=R8(c->r[5]+0x00000003u); // 801054EC
  c->r[3]=c->r[3]+0x00007688u; // 801054F0
  c->r[3]=R32(c->r[3]+0x00000014u); // 801054F4
  c->lr=0x801054FCu; f_8003560C(c); // 801054F8
  c->r[4]=0u+0x00010000u; // 801054FC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80105500
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80105504
  c->lr=0x8010550Cu; f_80036BA8(c); // 80105508
  goto L_801056DC; // 8010550C
L_80105510:;
  c->r[3]=0u+0x80620000u; // 80105510
  c->r[29]=0u+0x00000000u; // 80105514
  c->r[3]=c->r[3]+0x000079C0u; // 80105518
  c->r[0]=R32(c->r[3]+0x00000008u); // 8010551C
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 80105520
  if (!crb(c,2)) { goto L_80105558; } // 80105524
  c->r[30]=0u+0x80620000u; // 80105528
  c->r[4]=0u+0x00000001u; // 8010552C
  c->r[30]=c->r[30]+0x00007688u; // 80105530
  c->r[3]=R32(c->r[30]+0x00000014u); // 80105534
  c->lr=0x8010553Cu; f_80037670(c); // 80105538
  cmps(c,0,(int32_t)c->r[3],0); // 8010553C
  if (!crb(c,2)) { goto L_80105558; } // 80105540
  c->r[3]=R32(c->r[30]+0x00000014u); // 80105544
  c->r[4]=0u+0x00000000u; // 80105548
  c->lr=0x80105550u; f_80037670(c); // 8010554C
  cmps(c,0,(int32_t)c->r[3],0); // 80105550
  if (crb(c,2)) { goto L_80105598; } // 80105554
L_80105558:;
  c->r[30]=0u+0x80620000u; // 80105558
  c->r[4]=R8(c->r[31]+0x00000003u); // 8010555C
  c->r[30]=c->r[30]+0x00007688u; // 80105560
  c->r[3]=R32(c->r[30]+0x00000014u); // 80105564
  c->lr=0x8010556Cu; f_8003560C(c); // 80105568
  cmps(c,0,(int32_t)c->r[3],0); // 8010556C
  if (crb(c,2)) { goto L_8010562C; } // 80105570
  c->r[3]=R32(c->r[30]+0x00000014u); // 80105574
  c->r[4]=R8(c->r[31]+0x00000003u); // 80105578
  c->lr=0x80105580u; f_8003560C(c); // 8010557C
  c->lr=0x80105584u; f_80036974(c); // 80105580
  c->r[3]=R32(c->r[30]+0x00000014u); // 80105584
  c->r[5]=0u+0x00000000u; // 80105588
  c->r[4]=R8(c->r[31]+0x00000003u); // 8010558C
  c->lr=0x80105594u; f_80038998(c); // 80105590
  goto L_8010562C; // 80105594
L_80105598:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 80105598
  c->r[4]=R8(c->r[31]+0x00000003u); // 8010559C
  c->lr=0x801055A4u; f_8003560C(c); // 801055A0
  cmps(c,0,(int32_t)c->r[3],0); // 801055A4
  if (!crb(c,2)) { goto L_8010562C; } // 801055A8
  c->r[0]=R8(c->r[31]+0x00000005u); // 801055AC
  cmps(c,0,(int32_t)c->r[0],0); // 801055B0
  if (!crb(c,2)) { goto L_801055DC; } // 801055B4
  c->lr=0x801055BCu; f_8024DF44(c); // 801055B8
  cmps(c,0,(int32_t)c->r[3],0); // 801055BC
  if (crb(c,2)) { goto L_801055D0; } // 801055C0
  {uint32_t ea=c->r[2]+0xFFFFAE9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801055C4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801055C8
  goto L_801055F8; // 801055CC
L_801055D0:;
  {uint32_t ea=c->r[2]+0xFFFFAE94u; c->f[0]=c->ps1[0]=RF32(ea);} // 801055D0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801055D4
  goto L_801055F8; // 801055D8
L_801055DC:;
  c->lr=0x801055E0u; f_8024DF44(c); // 801055DC
  cmps(c,0,(int32_t)c->r[3],0); // 801055E0
  if (crb(c,2)) { goto L_801055F0; } // 801055E4
  {uint32_t ea=c->r[2]+0xFFFFAEA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801055E8
  goto L_801055F4; // 801055EC
L_801055F0:;
  {uint32_t ea=c->r[2]+0xFFFFAEA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801055F0
L_801055F4:;
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801055F4
L_801055F8:;
  {uint32_t ea=c->r[2]+0xFFFFAE98u; c->f[1]=c->ps1[1]=RF32(ea);} // 801055F8
  c->r[3]=c->r[1]+0x00000008u; // 801055FC
  {uint32_t ea=c->r[2]+0xFFFFAE90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105600
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80105604
  c->r[5]=R32(c->r[1]+0x00000020u); // 80105608
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8010560C
  c->r[4]=R32(c->r[1]+0x00000024u); // 80105610
  c->r[0]=R32(c->r[1]+0x00000028u); // 80105614
  W32(c->r[1]+0x00000008u,c->r[5]); // 80105618
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8010561C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80105620
  c->lr=0x80105628u; f_80036740(c); // 80105624
  c->r[29]=c->r[3]|c->r[3]; // 80105628
L_8010562C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8010562C
  if (crb(c,2)) { goto L_801056DC; } // 80105630
  c->r[3]=0u+0x80620000u; // 80105634
  c->r[4]=R8(c->r[31]+0x00000003u); // 80105638
  c->r[3]=c->r[3]+0x00007688u; // 8010563C
  c->r[5]=c->r[29]|c->r[29]; // 80105640
  c->r[3]=R32(c->r[3]+0x00000014u); // 80105644
  c->lr=0x8010564Cu; f_80038998(c); // 80105648
  goto L_801056DC; // 8010564C
L_80105650:;
  c->r[3]=0u+0x80620000u; // 80105650
  c->r[4]=R8(c->r[5]+0x00000003u); // 80105654
  c->r[3]=c->r[3]+0x00007688u; // 80105658
  c->r[3]=R32(c->r[3]+0x00000014u); // 8010565C
  c->lr=0x80105664u; f_8003560C(c); // 80105660
  c->r[4]=0u+0x803A0000u; // 80105664
  c->r[29]=c->r[3]|c->r[3]; // 80105668
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 8010566C
  c->r[5]=0u+0x00000000u; // 80105670
  c->lr=0x80105678u; f_80036BF4(c); // 80105674
  c->r[4]=0u+0x00010000u; // 80105678
  c->r[3]=c->r[29]|c->r[29]; // 8010567C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80105680
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80105684
  c->lr=0x8010568Cu; f_80036BA8(c); // 80105688
  goto L_801056DC; // 8010568C
L_80105690:;
  c->r[3]=0u+0x80620000u; // 80105690
  c->r[4]=R8(c->r[5]+0x00000003u); // 80105694
  c->r[3]=c->r[3]+0x00007688u; // 80105698
  c->r[3]=R32(c->r[3]+0x00000014u); // 8010569C
  c->lr=0x801056A4u; f_8003560C(c); // 801056A0
  c->r[0]=R8(c->r[31]+0x00000005u); // 801056A4
  cmps(c,0,(int32_t)c->r[0],0); // 801056A8
  if (!crb(c,2)) { goto L_801056C8; } // 801056AC
  c->r[4]=0u+0x803A0000u; // 801056B0
  c->r[5]=0u+0x00000000u; // 801056B4
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 801056B8
  c->r[4]=c->r[4]+0x0000000Du; // 801056BC
  c->lr=0x801056C4u; f_80036BF4(c); // 801056C0
  goto L_801056DC; // 801056C4
L_801056C8:;
  c->r[4]=0u+0x803A0000u; // 801056C8
  c->r[5]=0u+0x00000001u; // 801056CC
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 801056D0
  c->r[4]=c->r[4]+0x0000000Du; // 801056D4
  c->lr=0x801056DCu; f_80036BF4(c); // 801056D8
L_801056DC:;
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801056DC
  c->r[3]=0u+0x00000001u; // 801056E0
  c->r[30]=R32(c->r[1]+0x00000048u); // 801056E4
  c->r[29]=R32(c->r[1]+0x00000044u); // 801056E8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801056EC
  c->lr=c->r[0]; // 801056F0
  c->r[1]=c->r[1]+0x00000050u; // 801056F4
  return; // 801056F8
}

// fn_801056FC
void f_801056FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801056FC
  c->r[0]=c->lr; // 80105700
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105704
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80105708
  c->r[31]=c->r[3]|c->r[3]; // 8010570C
  c->lr=0x80105714u; f_800361F8(c); // 80105710
  c->r[4]=0u+0x803C0000u; // 80105714
  c->r[3]=c->r[31]|c->r[31]; // 80105718
  c->r[4]=c->r[4]+0x00006CF8u; // 8010571C
  W32(c->r[31]+0x000000B0u,c->r[4]); // 80105720
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80105724
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105728
  c->lr=c->r[0]; // 8010572C
  c->r[1]=c->r[1]+0x00000010u; // 80105730
  return; // 80105734
}

// fn_80105738
void f_80105738(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105738
  c->r[0]=c->lr; // 8010573C
  W32(c->r[1]+0x00000084u,c->r[0]); // 80105740
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 80105744
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 80105748
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8010574C
  c->r[31]=0u+0x80550000u; // 80105750
  c->r[3]=c->r[31]+0xFFFFCE54u; // 80105754
  W32(c->r[1]+0x00000068u,c->r[30]); // 80105758
  c->r[30]=0u+0x00000000u; // 8010575C
  c->lr=0x80105764u; f_800ACDD4(c); // 80105760
  cmpu(c,0,c->r[3],0x00000001u); // 80105764
  if (!crb(c,2)) { goto L_80105888; } // 80105768
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8010576C
  c->r[30]=0u+0x00000001u; // 80105770
  c->lr=0x80105778u; f_80105910(c); // 80105774
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80105778
  cmpu(c,0,c->r[0],0x000001FFu); // 8010577C
  if (!crb(c,2)) { goto L_80105840; } // 80105780
  {uint32_t ea=c->r[2]+0xFFFFAE90u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105784
  c->r[31]=0u+0x80550000u; // 80105788
  c->r[3]=c->r[31]+0x00003D60u; // 8010578C
  c->r[4]=c->r[1]+0x00000050u; // 80105790
  c->f[2]=c->f[1]; // 80105794
  c->r[5]=c->r[1]+0x00000044u; // 80105798
  c->r[6]=0u+0x00000000u; // 8010579C
  c->lr=0x801057A4u; f_801D4470(c); // 801057A0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 801057A4
  c->r[4]=0u+0x80620000u; // 801057A8
  {uint32_t ea=c->r[2]+0xFFFFAEA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801057AC
  c->r[4]=c->r[4]+0x000079C0u; // 801057B0
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801057B4
  c->r[3]=c->r[31]+0x00003D60u; // 801057B8
  c->f[31]=c->ps1[31]=S(c->f[2]-c->f[0]); // 801057BC
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801057C0
  c->r[4]=c->r[1]+0x00000050u; // 801057C4
  c->r[5]=c->r[1]+0x00000044u; // 801057C8
  c->r[6]=0u+0x00000000u; // 801057CC
  c->lr=0x801057D4u; f_801D4470(c); // 801057D0
  c->r[3]=c->r[1]+0x00000044u; // 801057D4
  c->r[4]=c->r[1]+0x00000050u; // 801057D8
  c->r[5]=c->r[1]+0x0000002Cu; // 801057DC
  c->lr=0x801057E4u; f_80296A70(c); // 801057E0
  c->r[3]=c->r[1]+0x0000002Cu; // 801057E4
  c->r[4]=c->r[3]|c->r[3]; // 801057E8
  c->lr=0x801057F0u; f_80296AB0(c); // 801057EC
  c->f[1]=c->f[31]; // 801057F0
  c->r[3]=c->r[1]+0x0000002Cu; // 801057F4
  c->r[4]=c->r[3]|c->r[3]; // 801057F8
  c->lr=0x80105800u; f_80296A94(c); // 801057FC
  c->r[3]=c->r[1]+0x00000050u; // 80105800
  c->r[4]=c->r[1]+0x0000002Cu; // 80105804
  c->r[5]=c->r[1]+0x00000038u; // 80105808
  c->lr=0x80105810u; f_80296A4C(c); // 8010580C
  c->r[6]=R32(c->r[1]+0x00000038u); // 80105810
  c->r[3]=0u+0x805D0000u; // 80105814
  c->r[5]=R32(c->r[1]+0x0000003Cu); // 80105818
  c->r[3]=c->r[3]+0x00003F6Cu; // 8010581C
  c->r[0]=R32(c->r[1]+0x00000040u); // 80105820
  c->r[4]=c->r[1]+0x00000020u; // 80105824
  W32(c->r[1]+0x00000020u,c->r[6]); // 80105828
  W32(c->r[1]+0x00000024u,c->r[5]); // 8010582C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80105830
  c->lr=0x80105838u; f_801058FC(c); // 80105834
  c->r[30]=0u+0x00000001u; // 80105838
  goto L_80105888; // 8010583C
L_80105840:;
  c->r[3]=c->r[31]+0xFFFFCE54u; // 80105840
  c->r[4]=c->r[1]+0x00000038u; // 80105844
  c->lr=0x8010584Cu; f_800FEE64(c); // 80105848
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010584C
  {uint32_t ea=c->r[2]+0xFFFFAE90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105850
  fcmp(c,0,c->f[1],c->f[0]); // 80105854
  if (!crb(c,0)) { goto L_80105860; } // 80105858
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 8010585C
L_80105860:;
  c->r[6]=R32(c->r[1]+0x00000038u); // 80105860
  c->r[3]=0u+0x805D0000u; // 80105864
  c->r[5]=R32(c->r[1]+0x0000003Cu); // 80105868
  c->r[3]=c->r[3]+0x00003F6Cu; // 8010586C
  c->r[0]=R32(c->r[1]+0x00000040u); // 80105870
  c->r[4]=c->r[1]+0x00000014u; // 80105874
  W32(c->r[1]+0x00000014u,c->r[6]); // 80105878
  W32(c->r[1]+0x00000018u,c->r[5]); // 8010587C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80105880
  c->lr=0x80105888u; f_801058FC(c); // 80105884
L_80105888:;
  cmps(c,0,(int32_t)c->r[30],0); // 80105888
  if (!crb(c,2)) { goto L_801058D8; } // 8010588C
  {uint32_t ea=c->r[2]+0xFFFFAE90u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105890
  c->r[3]=0u+0x80550000u; // 80105894
  c->r[3]=c->r[3]+0x00003D60u; // 80105898
  c->r[4]=c->r[1]+0x00000050u; // 8010589C
  c->f[2]=c->f[1]; // 801058A0
  c->r[5]=c->r[1]+0x00000044u; // 801058A4
  c->r[6]=0u+0x00000000u; // 801058A8
  c->lr=0x801058B0u; f_801D4470(c); // 801058AC
  c->r[6]=R32(c->r[1]+0x00000050u); // 801058B0
  c->r[3]=0u+0x805D0000u; // 801058B4
  c->r[5]=R32(c->r[1]+0x00000054u); // 801058B8
  c->r[3]=c->r[3]+0x00003F6Cu; // 801058BC
  c->r[0]=R32(c->r[1]+0x00000058u); // 801058C0
  c->r[4]=c->r[1]+0x00000008u; // 801058C4
  W32(c->r[1]+0x00000008u,c->r[6]); // 801058C8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801058CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801058D0
  c->lr=0x801058D8u; f_801058FC(c); // 801058D4
L_801058D8:;
  c->r[3]=0u+0x00000001u; // 801058D8
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801058DC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801058E0
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801058E4
  c->r[30]=R32(c->r[1]+0x00000068u); // 801058E8
  c->r[0]=R32(c->r[1]+0x00000084u); // 801058EC
  c->lr=c->r[0]; // 801058F0
  c->r[1]=c->r[1]+0x00000080u; // 801058F4
  return; // 801058F8
}

// fn_801058FC
void f_801058FC(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 801058FC
  c->r[0]=c->r[0]|0x00008000u; // 80105900
  W16(c->r[3]+0x000003BEu,c->r[0]); // 80105904
  c->r[3]=c->r[3]+0x00000420u; // 80105908
  f_800361A0(c); return; // 8010590C
}

// fn_80105910
void f_80105910(Ctx* __restrict c) {
  c->r[3]=R16(c->r[3]+0x000010BEu); // 80105910
  return; // 80105914
}

// fn_80105918
void f_80105918(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105918
  c->r[0]=c->lr; // 8010591C
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80105920
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105924
  c->lr=0x8010592Cu; f_80211724(c); // 80105928
  c->r[4]=0u+0xAAAB0000u; // 8010592C
  c->r[6]=0u+0x80620000u; // 80105930
  c->r[0]=c->r[4]+0xFFFFAAABu; // 80105934
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 80105938
  c->r[6]=c->r[6]+0x00007688u; // 8010593C
  c->r[4]=0u+0x00000009u; // 80105940
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80105944
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 80105948
  c->r[5]=c->r[3]-c->r[0]; // 8010594C
  c->r[3]=R32(c->r[6]+0x00000014u); // 80105950
  c->lr=0x80105958u; f_80038998(c); // 80105954
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105958
  c->r[3]=0u+0x00000001u; // 8010595C
  c->lr=c->r[0]; // 80105960
  c->r[1]=c->r[1]+0x00000010u; // 80105964
  return; // 80105968
}

// fn_8010596C
void f_8010596C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010596C
  c->r[0]=c->lr; // 80105970
  c->r[3]=0u+0x80550000u; // 80105974
  c->r[4]=0u+0x00000005u; // 80105978
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010597C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80105980
  c->lr=0x80105988u; f_8019C920(c); // 80105984
  {uint32_t ea=c->r[2]+0xFFFFAE90u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105988
  c->r[4]=0u+0x00000064u; // 8010598C
  c->r[5]=0u+0x00000000u; // 80105990
  c->r[6]=0u+0x00000000u; // 80105994
  c->r[7]=0u+0x00000000u; // 80105998
  c->lr=0x801059A0u; f_801F4D44(c); // 8010599C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801059A0
  c->r[3]=0u+0x00000001u; // 801059A4
  c->lr=c->r[0]; // 801059A8
  c->r[1]=c->r[1]+0x00000010u; // 801059AC
  return; // 801059B0
}

// fn_801059B4
void f_801059B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801059B4
  c->r[0]=c->lr; // 801059B8
  c->r[3]=0u+0x805D0000u; // 801059BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801059C0
  c->r[3]=c->r[3]+0x00001BBCu; // 801059C4
  c->lr=0x801059CCu; f_801059E0(c); // 801059C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801059CC
  c->r[3]=0u+0x00000001u; // 801059D0
  c->lr=c->r[0]; // 801059D4
  c->r[1]=c->r[1]+0x00000010u; // 801059D8
  return; // 801059DC
}

// fn_801059E0
void f_801059E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801059E0
  c->r[0]=c->lr; // 801059E4
  c->r[4]=0u+0x00000005u; // 801059E8
  c->r[5]=0u+0x00000004u; // 801059EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801059F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801059F4
  c->r[31]=c->r[3]|c->r[3]; // 801059F8
  c->r[0]=R16(c->r[3]+0x00000026u); // 801059FC
  W32(c->r[3]+0x00000014u,c->r[4]); // 80105A00
  c->r[4]=0u+0x0000000Au; // 80105A04
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)492); // 80105A08
  c->r[3]=c->r[3]+c->r[0]; // 80105A0C
  c->r[3]=c->r[3]+0x00000038u; // 80105A10
  c->lr=0x80105A18u; f_800A47F8(c); // 80105A14
  c->r[0]=R16(c->r[31]+0x00000026u); // 80105A18
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)492); // 80105A1C
  c->r[3]=c->r[31]+c->r[0]; // 80105A20
  c->r[3]=c->r[3]+0x00000038u; // 80105A24
  c->lr=0x80105A2Cu; f_801ED964(c); // 80105A28
  c->r[0]=R16(c->r[31]+0x00000026u); // 80105A2C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)492); // 80105A30
  c->r[3]=c->r[31]+c->r[0]; // 80105A34
  c->r[3]=c->r[3]+0x00000038u; // 80105A38
  c->lr=0x80105A40u; f_801ED9AC(c); // 80105A3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105A40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80105A44
  c->lr=c->r[0]; // 80105A48
  c->r[1]=c->r[1]+0x00000010u; // 80105A4C
  return; // 80105A50
}

// fn_80105A54
void f_80105A54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105A54
  c->r[0]=c->lr; // 80105A58
  c->r[3]=0u+0x80550000u; // 80105A5C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80105A60
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80105A64
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80105A68
  c->lr=0x80105A70u; f_800ACDD4(c); // 80105A6C
  cmps(c,0,(int32_t)c->r[3],0); // 80105A70
  if (!crb(c,2)) { goto L_80105C30; } // 80105A74
  c->r[31]=0u+0x805D0000u; // 80105A78
  c->r[4]=c->r[1]+0x00000038u; // 80105A7C
  c->r[3]=c->r[31]+0x00003F6Cu; // 80105A80
  c->r[5]=0u+0x00000000u; // 80105A84
  c->lr=0x80105A8Cu; f_8020C9AC(c); // 80105A88
  c->r[3]=c->r[31]+0x00003F6Cu; // 80105A8C
  c->r[4]=c->r[1]+0x0000002Cu; // 80105A90
  c->lr=0x80105A98u; f_80038E24(c); // 80105A94
  c->r[3]=c->r[1]+0x00000020u; // 80105A98
  c->r[4]=c->r[1]+0x00000038u; // 80105A9C
  c->lr=0x80105AA4u; f_800361A0(c); // 80105AA0
  c->r[3]=c->r[1]+0x00000014u; // 80105AA4
  c->r[4]=c->r[1]+0x0000002Cu; // 80105AA8
  c->lr=0x80105AB0u; f_800361A0(c); // 80105AAC
  c->r[3]=0u+0x80620000u; // 80105AB0
  {uint32_t ea=c->r[2]+0xFFFFAEACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80105AB4
  c->r[3]=c->r[3]+0x000079C0u; // 80105AB8
  {uint32_t ea=c->r[2]+0xFFFFAEB0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80105ABC
  {uint32_t ea=c->r[3]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 80105AC0
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105AC4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 80105AC8
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80105ACC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80105AD0
  {uint32_t ea=c->r[2]+0xFFFFAE90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105AD4
  fcmp(c,0,c->f[3],c->f[0]); // 80105AD8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 80105ADC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 80105AE0
  if (!crb(c,1)) { goto L_80105AF0; } // 80105AE4
  {uint32_t ea=c->r[2]+0xFFFFAEB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105AE8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 80105AEC
L_80105AF0:;
  c->lr=0x80105AF4u; f_8005C22C(c); // 80105AF0
  c->f[2]=-c->f[1]; // 80105AF4
  {uint32_t ea=c->r[2]+0xFFFFAEB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105AF8
  {uint32_t ea=c->r[2]+0xFFFFAE90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105AFC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 80105B00
  fcmp(c,0,c->f[2],c->f[0]); // 80105B04
  if (!crb(c,1)) { goto L_80105B20; } // 80105B08
  {uint32_t ea=c->r[2]+0xFFFFAEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80105B0C
  {uint32_t ea=c->r[2]+0xFFFFAEC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105B10
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80105B14
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80105B18
  goto L_80105B38; // 80105B1C
L_80105B20:;
  {uint32_t ea=c->r[2]+0xFFFFAEBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80105B20
  {uint32_t ea=c->r[2]+0xFFFFAEC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105B24
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80105B28
  {uint32_t ea=c->r[2]+0xFFFFAEC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105B2C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80105B30
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80105B34
L_80105B38:;
  c->f[3]=c->ps1[3]=S(c->f[0]); // 80105B38
  {uint32_t ea=c->r[2]+0xFFFFAEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80105B3C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80105B40
  fcmp(c,0,c->f[3],c->f[2]); // 80105B44
  if (!crb(c,1)) { goto L_80105B74; } // 80105B48
  {uint32_t ea=c->r[2]+0xFFFFAECCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80105B4C
  fcmp(c,0,c->f[3],c->f[1]); // 80105B50
  if (!crb(c,0)) { goto L_80105B74; } // 80105B54
  {uint32_t ea=c->r[2]+0xFFFFAED0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105B58
  fcmp(c,0,c->f[3],c->f[0]); // 80105B5C
  if (!crb(c,0)) { goto L_80105B6C; } // 80105B60
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 80105B64
  goto L_80105C30; // 80105B68
L_80105B6C:;
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80105B6C
  goto L_80105C30; // 80105B70
L_80105B74:;
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80105B74
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105B78
  {uint32_t ea=c->r[2]+0xFFFFAEBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80105B7C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80105B80
  fcmp(c,0,c->f[1],c->f[0]); // 80105B84
  if (!crb(c,1)) { goto L_80105B9C; } // 80105B88
  {uint32_t ea=c->r[2]+0xFFFFAEC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105B8C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80105B90
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80105B94
  goto L_80105BB4; // 80105B98
L_80105B9C:;
  {uint32_t ea=c->r[2]+0xFFFFAED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105B9C
  fcmp(c,0,c->f[1],c->f[0]); // 80105BA0
  if (!crb(c,0)) { goto L_80105BB4; } // 80105BA4
  {uint32_t ea=c->r[2]+0xFFFFAEC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105BA8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80105BAC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80105BB0
L_80105BB4:;
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80105BB4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80105BB8
  {uint32_t ea=c->r[2]+0xFFFFAE90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105BBC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80105BC0
  fcmp(c,0,c->f[1],c->f[0]); // 80105BC4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80105BC8
  if (!crb(c,2)) { goto L_80105BE8; } // 80105BCC
  {uint32_t ea=c->r[2]+0xFFFFAED8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105BD0
  fcmp(c,0,c->f[1],c->f[0]); // 80105BD4
  if (!crb(c,1)) { goto L_80105C00; } // 80105BD8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 80105BDC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80105BE0
  goto L_80105C00; // 80105BE4
L_80105BE8:;
  {uint32_t ea=c->r[2]+0xFFFFAEDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80105BE8
  fcmp(c,0,c->f[1],c->f[0]); // 80105BEC
  if (!crb(c,0)) { goto L_80105C00; } // 80105BF0
  {uint32_t ea=c->r[2]+0xFFFFAED8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105BF4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80105BF8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80105BFC
L_80105C00:;
  c->r[3]=c->r[1]+0x0000002Cu; // 80105C00
  c->lr=0x80105C08u; f_8002C540(c); // 80105C04
  c->r[6]=R32(c->r[1]+0x0000002Cu); // 80105C08
  c->r[3]=0u+0x805D0000u; // 80105C0C
  c->r[5]=R32(c->r[1]+0x00000030u); // 80105C10
  c->r[3]=c->r[3]+0x00003F6Cu; // 80105C14
  c->r[0]=R32(c->r[1]+0x00000034u); // 80105C18
  c->r[4]=c->r[1]+0x00000008u; // 80105C1C
  W32(c->r[1]+0x00000008u,c->r[6]); // 80105C20
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80105C24
  W32(c->r[1]+0x00000010u,c->r[0]); // 80105C28
  c->lr=0x80105C30u; f_800BEDA4(c); // 80105C2C
L_80105C30:;
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80105C30
  c->r[3]=0u+0x00000001u; // 80105C34
  c->r[0]=R32(c->r[1]+0x00000054u); // 80105C38
  c->lr=c->r[0]; // 80105C3C
  c->r[1]=c->r[1]+0x00000050u; // 80105C40
  return; // 80105C44
}

// fn_80105C48
void f_80105C48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105C48
  c->r[0]=c->lr; // 80105C4C
  c->r[3]=0u+0x80550000u; // 80105C50
  c->r[4]=0u+0x00000000u; // 80105C54
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80105C58
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80105C5C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80105C60
  W32(c->r[1]+0x00000098u,c->r[30]); // 80105C64
  W32(c->r[1]+0x00000094u,c->r[29]); // 80105C68
  W32(c->r[1]+0x00000090u,c->r[28]); // 80105C6C
  c->r[28]=c->r[5]|c->r[5]; // 80105C70
  c->lr=0x80105C78u; f_8019C920(c); // 80105C74
  c->r[31]=0u+0x805D0000u; // 80105C78
  c->r[30]=c->r[3]|c->r[3]; // 80105C7C
  c->r[3]=c->r[31]+0x00003F6Cu; // 80105C80
  c->lr=0x80105C88u; f_80037AF0(c); // 80105C84
  cmps(c,0,(int32_t)c->r[30],0); // 80105C88
  c->r[29]=c->r[3]|c->r[3]; // 80105C8C
  if (crb(c,2)) { goto L_80105DF8; } // 80105C90
  cmps(c,0,(int32_t)c->r[3],0); // 80105C94
  if (crb(c,2)) { goto L_80105DF8; } // 80105C98
  c->r[0]=R8(c->r[28]+0x00000003u); // 80105C9C
  cmps(c,0,(int32_t)c->r[0],0); // 80105CA0
  if (crb(c,2)) { goto L_80105D80; } // 80105CA4
  c->r[4]=0u+0x00000000u; // 80105CA8
  c->lr=0x80105CB0u; f_80039840(c); // 80105CAC
  c->r[4]=0u+0x803A0000u; // 80105CB0
  c->r[5]=c->r[1]+0x00000058u; // 80105CB4
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 80105CB8
  c->r[6]=0u+0x00000001u; // 80105CBC
  c->r[4]=c->r[4]+0x0000001Bu; // 80105CC0
  c->lr=0x80105CC8u; f_80257018(c); // 80105CC4
  cmps(c,0,(int32_t)c->r[3],0); // 80105CC8
  if (crb(c,2)) { goto L_80105D28; } // 80105CCC
  c->r[3]=c->r[1]+0x0000004Cu; // 80105CD0
  c->r[4]=c->r[1]+0x00000040u; // 80105CD4
  c->r[5]=c->r[1]+0x00000034u; // 80105CD8
  c->r[6]=c->r[1]+0x00000058u; // 80105CDC
  c->r[7]=0u+0x00000000u; // 80105CE0
  c->lr=0x80105CE8u; f_8002BE64(c); // 80105CE4
  c->r[3]=c->r[29]|c->r[29]; // 80105CE8
  c->r[4]=c->r[1]+0x0000000Cu; // 80105CEC
  c->r[5]=0u+0x00000000u; // 80105CF0
  c->lr=0x80105CF8u; f_8007C6C8(c); // 80105CF4
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80105CF8
  c->r[4]=c->r[1]+0x0000004Cu; // 80105CFC
  c->r[3]=c->r[3]+0x0000005Cu; // 80105D00
  c->lr=0x80105D08u; f_800361A0(c); // 80105D04
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80105D08
  c->r[4]=c->r[1]+0x00000040u; // 80105D0C
  c->r[3]=c->r[3]+0x00000068u; // 80105D10
  c->lr=0x80105D18u; f_800361A0(c); // 80105D14
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80105D18
  c->r[4]=c->r[1]+0x00000034u; // 80105D1C
  c->r[3]=c->r[3]+0x00000074u; // 80105D20
  c->lr=0x80105D28u; f_800361A0(c); // 80105D24
L_80105D28:;
  c->r[3]=0u+0x805D0000u; // 80105D28
  c->r[4]=c->r[1]+0x00000008u; // 80105D2C
  c->r[3]=c->r[3]+0x00003F6Cu; // 80105D30
  c->r[5]=0u+0x00000001u; // 80105D34
  c->lr=0x80105D3Cu; f_8007C6C8(c); // 80105D38
  c->r[3]=0u+0x80620000u; // 80105D3C
  c->r[4]=0u+0x00000003u; // 80105D40
  c->r[3]=c->r[3]+0x00007688u; // 80105D44
  c->r[3]=R32(c->r[3]+0x00000014u); // 80105D48
  c->lr=0x80105D50u; f_80038AF4(c); // 80105D4C
  cmps(c,0,(int32_t)c->r[3],0); // 80105D50
  if (!crb(c,2)) { goto L_80105D6C; } // 80105D54
  c->r[3]=R32(c->r[1]+0x00000008u); // 80105D58
  c->r[5]=0u+0x00000000u; // 80105D5C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80105D60
  c->lr=0x80105D68u; f_80250BF4(c); // 80105D64
  goto L_80105DF8; // 80105D68
L_80105D6C:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80105D6C
  c->r[5]=0u+0x00000001u; // 80105D70
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80105D74
  c->lr=0x80105D7Cu; f_80250BF4(c); // 80105D78
  goto L_80105DF8; // 80105D7C
L_80105D80:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 80105D80
  c->r[3]=c->r[30]|c->r[30]; // 80105D84
  c->r[4]=0u+0x00000001u; // 80105D88
  c->r[5]=0u+0xFFFFFFFFu; // 80105D8C
  c->r[12]=R32(c->r[12]+0x00000044u); // 80105D90
  c->ctr=c->r[12]; // 80105D94
  if (true) { c->lr=0x80105D9Cu; dispatch(c,c->ctr); } // 80105D98
  c->r[3]=c->r[31]+0x00003F6Cu; // 80105D9C
  c->r[4]=0u+0x00000001u; // 80105DA0
  c->lr=0x80105DA8u; f_80039840(c); // 80105DA4
  c->r[4]=0u+0x803A0000u; // 80105DA8
  c->r[5]=c->r[1]+0x00000058u; // 80105DAC
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 80105DB0
  c->r[6]=0u+0x00000001u; // 80105DB4
  c->r[4]=c->r[4]+0x0000001Bu; // 80105DB8
  c->lr=0x80105DC0u; f_80257018(c); // 80105DBC
  cmps(c,0,(int32_t)c->r[3],0); // 80105DC0
  if (crb(c,2)) { goto L_80105DF8; } // 80105DC4
  c->r[3]=c->r[1]+0x00000028u; // 80105DC8
  c->r[4]=c->r[1]+0x0000001Cu; // 80105DCC
  c->r[5]=c->r[1]+0x00000010u; // 80105DD0
  c->r[6]=c->r[1]+0x00000058u; // 80105DD4
  c->r[7]=0u+0x00000000u; // 80105DD8
  c->lr=0x80105DE0u; f_8002BE64(c); // 80105DDC
  c->r[3]=c->r[29]+0x0000002Cu; // 80105DE0
  c->r[4]=c->r[1]+0x00000028u; // 80105DE4
  c->lr=0x80105DECu; f_800361A0(c); // 80105DE8
  c->r[3]=c->r[29]+0x00000060u; // 80105DEC
  c->r[4]=c->r[1]+0x0000001Cu; // 80105DF0
  c->lr=0x80105DF8u; f_800361A0(c); // 80105DF4
L_80105DF8:;
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80105DF8
  c->r[3]=0u+0x00000001u; // 80105DFC
  c->r[30]=R32(c->r[1]+0x00000098u); // 80105E00
  c->r[29]=R32(c->r[1]+0x00000094u); // 80105E04
  c->r[28]=R32(c->r[1]+0x00000090u); // 80105E08
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80105E0C
  c->lr=c->r[0]; // 80105E10
  c->r[1]=c->r[1]+0x000000A0u; // 80105E14
  return; // 80105E18
}

// fn_80105E1C
void f_80105E1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105E1C
  c->r[0]=c->lr; // 80105E20
  c->r[3]=0u+0x80550000u; // 80105E24
  c->r[4]=0u+0x00000005u; // 80105E28
  W32(c->r[1]+0x00000054u,c->r[0]); // 80105E2C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80105E30
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80105E34
  c->lr=0x80105E3Cu; f_8019C920(c); // 80105E38
  c->r[4]=0u+0x805D0000u; // 80105E3C
  c->r[31]=c->r[3]|c->r[3]; // 80105E40
  c->r[3]=c->r[4]+0x00003F6Cu; // 80105E44
  c->r[4]=0u+0x00000000u; // 80105E48
  c->lr=0x80105E50u; f_80039840(c); // 80105E4C
  c->r[4]=0u+0x803A0000u; // 80105E50
  c->r[5]=c->r[1]+0x00000018u; // 80105E54
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 80105E58
  c->r[6]=0u+0x00000001u; // 80105E5C
  c->r[4]=c->r[4]+0x00000024u; // 80105E60
  c->lr=0x80105E68u; f_80257018(c); // 80105E64
  c->r[3]=c->r[31]+0x0000002Cu; // 80105E68
  c->r[4]=c->r[31]+0x00000060u; // 80105E6C
  c->r[5]=c->r[1]+0x00000008u; // 80105E70
  c->r[6]=c->r[1]+0x00000018u; // 80105E74
  c->r[7]=0u+0x00000000u; // 80105E78
  c->lr=0x80105E80u; f_8002BE64(c); // 80105E7C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80105E80
  c->r[3]=0u+0x00000001u; // 80105E84
  {uint32_t ea=c->r[2]+0xFFFFAEE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105E88
  {uint32_t ea=c->r[2]+0xFFFFAE90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105E8C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80105E90
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[1]);} // 80105E94
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 80105E98
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 80105E9C
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 80105EA0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80105EA4
  c->r[0]=R32(c->r[1]+0x00000054u); // 80105EA8
  c->lr=c->r[0]; // 80105EAC
  c->r[1]=c->r[1]+0x00000050u; // 80105EB0
  return; // 80105EB4
}

// fn_80105EB8
void f_80105EB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105EB8
  c->r[0]=c->lr; // 80105EBC
  c->r[7]=0u+0x803E0000u; // 80105EC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105EC4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80105EC8
  c->r[7]=c->r[7]+0xFFFFC140u; // 80105ECC
  c->r[4]=c->r[5]|c->r[5]; // 80105ED0
  c->r[5]=c->r[6]|c->r[6]; // 80105ED4
  c->r[12]=c->r[7]+c->r[0]; // 80105ED8
  c->lr=0x80105EE0u; f_802BA00C(c); // 80105EDC
  c->r[0]=c->r[0]|0x00000000u; // 80105EE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105EE4
  c->lr=c->r[0]; // 80105EE8
  c->r[1]=c->r[1]+0x00000010u; // 80105EEC
  return; // 80105EF0
}

// fn_80105EF4
void f_80105EF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105EF4
  c->r[0]=c->lr; // 80105EF8
  c->r[3]=0u+0x80620000u; // 80105EFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105F00
  c->r[3]=c->r[3]+0x000079C0u; // 80105F04
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105F08
  c->lr=0x80105F10u; f_8002C1B0(c); // 80105F0C
  {uint32_t ea=c->r[2]+0xFFFFAEE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105F10
  fcmp(c,0,c->f[1],c->f[0]); // 80105F14
  c->r[3]=c->cr; // 80105F18
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105F1C
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 80105F20
  c->lr=c->r[0]; // 80105F24
  c->r[1]=c->r[1]+0x00000010u; // 80105F28
  return; // 80105F2C
}

// fn_80105F30
void f_80105F30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105F30
  c->r[0]=c->lr; // 80105F34
  c->r[3]=0u+0x80550000u; // 80105F38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105F3C
  c->r[3]=c->r[3]+0xFFFFC13Cu; // 80105F40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80105F44
  c->lr=0x80105F4Cu; f_80182B28(c); // 80105F48
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80105F4C
  if (!crb(c,2)) { goto L_80105FAC; } // 80105F50
  c->r[3]=0u+0x80620000u; // 80105F54
  c->r[3]=c->r[3]+0x000079C0u; // 80105F58
  c->r[0]=R32(c->r[3]+0x00000008u); // 80105F5C
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 80105F60
  if (!crb(c,2)) { goto L_80105FAC; } // 80105F64
  c->r[31]=0u+0x80620000u; // 80105F68
  c->r[4]=0u+0x00000004u; // 80105F6C
  c->r[31]=c->r[31]+0x00007688u; // 80105F70
  c->r[3]=R32(c->r[31]+0x00000014u); // 80105F74
  c->lr=0x80105F7Cu; f_80037670(c); // 80105F78
  cmpu(c,0,c->r[3],0x00000001u); // 80105F7C
  if (crb(c,2)) { goto L_80105FAC; } // 80105F80
  c->r[3]=R32(c->r[31]+0x00000014u); // 80105F84
  c->r[4]=0u+0x0000000Eu; // 80105F88
  c->lr=0x80105F90u; f_80037670(c); // 80105F8C
  cmpu(c,0,c->r[3],0x00000001u); // 80105F90
  if (crb(c,2)) { goto L_80105FAC; } // 80105F94
  c->r[3]=R32(c->r[31]+0x00000014u); // 80105F98
  c->r[4]=0u+0x0000000Fu; // 80105F9C
  c->lr=0x80105FA4u; f_80037670(c); // 80105FA0
  cmpu(c,0,c->r[3],0x00000001u); // 80105FA4
  if (!crb(c,2)) { goto L_80105FB4; } // 80105FA8
L_80105FAC:;
  c->r[3]=0u+0x00000001u; // 80105FAC
  goto L_80105FB8; // 80105FB0
L_80105FB4:;
  c->r[3]=0u+0x00000000u; // 80105FB4
L_80105FB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105FB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80105FBC
  c->lr=c->r[0]; // 80105FC0
  c->r[1]=c->r[1]+0x00000010u; // 80105FC4
  return; // 80105FC8
}

// fn_80105FCC
void f_80105FCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105FCC
  c->r[0]=c->lr; // 80105FD0
  c->r[3]=0u+0x805D0000u; // 80105FD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80105FD8
  c->r[3]=c->r[3]+0x00003F6Cu; // 80105FDC
  c->r[4]=c->r[1]+0x00000008u; // 80105FE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80105FE4
  c->r[31]=c->r[5]|c->r[5]; // 80105FE8
  c->lr=0x80105FF0u; f_80038E24(c); // 80105FEC
  c->r[0]=R8(c->r[31]+0x00000003u); // 80105FF0
  cmps(c,0,(int32_t)c->r[0],0); // 80105FF4
  if (crb(c,2)) { goto L_8010603C; } // 80105FF8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105FFC
  {uint32_t ea=c->r[2]+0xFFFFAE90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106000
  fcmp(c,0,c->f[1],c->f[0]); // 80106004
  if (!crb(c,1)) { goto L_80106018; } // 80106008
  {uint32_t ea=c->r[2]+0xFFFFAEE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010600C
  fcmp(c,0,c->f[1],c->f[0]); // 80106010
  if (crb(c,0)) { goto L_80106034; } // 80106014
L_80106018:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106018
  {uint32_t ea=c->r[2]+0xFFFFAEECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010601C
  fcmp(c,0,c->f[1],c->f[0]); // 80106020
  if (!crb(c,1)) { goto L_80106060; } // 80106024
  {uint32_t ea=c->r[2]+0xFFFFAEC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106028
  fcmp(c,0,c->f[1],c->f[0]); // 8010602C
  if (!crb(c,0)) { goto L_80106060; } // 80106030
L_80106034:;
  c->r[3]=0u+0x00000001u; // 80106034
  goto L_80106064; // 80106038
L_8010603C:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010603C
  {uint32_t ea=c->r[2]+0xFFFFAEBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80106040
  fcmp(c,0,c->f[1],c->f[0]); // 80106044
  if (!crb(c,1)) { goto L_80106060; } // 80106048
  {uint32_t ea=c->r[2]+0xFFFFAEF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010604C
  fcmp(c,0,c->f[1],c->f[0]); // 80106050
  if (!crb(c,0)) { goto L_80106060; } // 80106054
  c->r[3]=0u+0x00000001u; // 80106058
  goto L_80106064; // 8010605C
L_80106060:;
  c->r[3]=0u+0x00000000u; // 80106060
L_80106064:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80106064
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80106068
  c->lr=c->r[0]; // 8010606C
  c->r[1]=c->r[1]+0x00000020u; // 80106070
  return; // 80106074
}

// fn_80106078
void f_80106078(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106078
  c->r[0]=c->lr; // 8010607C
  c->r[7]=0u+0x803E0000u; // 80106080
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106084
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80106088
  c->r[7]=c->r[7]+0xFFFFC1B8u; // 8010608C
  c->r[4]=c->r[5]|c->r[5]; // 80106090
  c->r[5]=c->r[6]|c->r[6]; // 80106094
  c->r[12]=c->r[7]+c->r[0]; // 80106098
  c->lr=0x801060A0u; f_802BA00C(c); // 8010609C
  c->r[0]=c->r[0]|0x00000000u; // 801060A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801060A4
  c->lr=c->r[0]; // 801060A8
  c->r[1]=c->r[1]+0x00000010u; // 801060AC
  return; // 801060B0
}

// fn_801060B4
void f_801060B4(Ctx* __restrict c) {
  return; // 801060B4
}

// fn_801060B8
void f_801060B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801060B8
  c->r[0]=c->lr; // 801060BC
  cmps(c,0,(int32_t)c->r[3],0); // 801060C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801060C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801060C8
  c->r[31]=c->r[4]|c->r[4]; // 801060CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801060D0
  c->r[30]=c->r[3]|c->r[3]; // 801060D4
  if (crb(c,2)) { goto L_801060F4; } // 801060D8
  c->r[4]=0u+0x00000000u; // 801060DC
  c->lr=0x801060E4u; f_80103A70(c); // 801060E0
  cmps(c,0,(int32_t)c->r[31],0); // 801060E4
  if (!crb(c,1)) { goto L_801060F4; } // 801060E8
  c->r[3]=c->r[30]|c->r[30]; // 801060EC
  c->lr=0x801060F4u; f_800C69B8(c); // 801060F0
L_801060F4:;
  c->r[3]=c->r[30]|c->r[30]; // 801060F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801060F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801060FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106100
  c->lr=c->r[0]; // 80106104
  c->r[1]=c->r[1]+0x00000010u; // 80106108
  return; // 8010610C
}

// fn_80106110
void f_80106110(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 80106110
  c->r[3]=c->r[3]+0xFFFFAC98u; // 80106114
  return; // 80106118
}

// fn_8010611C
void f_8010611C(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 8010611C
  c->r[3]=c->r[3]+0xFFFFAFFCu; // 80106120
  return; // 80106124
}

// fn_80106128
void f_80106128(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 80106128
  c->r[3]=c->r[3]+0xFFFFB070u; // 8010612C
  return; // 80106130
}

// fn_80106134
void f_80106134(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF87B8u; // 80106134
  return; // 80106138
}

// fn_8010613C
void f_8010613C(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF87BCu; // 8010613C
  return; // 80106140
}

// fn_80106144
void f_80106144(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 80106144
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80106148
  c->r[3]=c->r[3]+0xFFFFBF50u; // 8010614C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80106150
  return; // 80106154
}

// fn_80106158
void f_80106158(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 80106158
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8010615C
  c->r[3]=c->r[3]+0xFFFFC0E8u; // 80106160
  c->r[3]=R32(c->r[3]+c->r[0]); // 80106164
  return; // 80106168
}

// fn_8010616C
void f_8010616C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010616C
  c->r[0]=c->lr; // 80106170
  c->r[3]=0u+0x80550000u; // 80106174
  c->r[4]=0u+0x00000003u; // 80106178
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010617C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80106180
  c->lr=0x80106188u; f_8019C920(c); // 80106184
  c->r[12]=R32(c->r[3]+0x000000B0u); // 80106188
  c->r[4]=0u+0x805D0000u; // 8010618C
  c->r[4]=c->r[4]+0x00003F6Cu; // 80106190
  c->r[5]=0u+0x00000000u; // 80106194
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80106198
  c->r[6]=0u+0x00000000u; // 8010619C
  c->ctr=c->r[12]; // 801061A0
  if (true) { c->lr=0x801061A8u; dispatch(c,c->ctr); } // 801061A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801061A8
  c->r[3]=0u+0x00000001u; // 801061AC
  c->lr=c->r[0]; // 801061B0
  c->r[1]=c->r[1]+0x00000010u; // 801061B4
  return; // 801061B8
}

// fn_801061BC
void f_801061BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801061BC
  c->r[0]=c->lr; // 801061C0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801061C4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801061C8
  W32(c->r[1]+0x00000038u,c->r[30]); // 801061CC
  c->r[30]=0u+0x00000000u; // 801061D0
  c->r[0]=R8(c->r[5]+0x00000003u); // 801061D4
  cmps(c,0,(int32_t)c->r[0],1); // 801061D8
  if (crb(c,2)) { goto L_8010623C; } // 801061DC
  if (!crb(c,0)) { goto L_801061F0; } // 801061E0
  cmps(c,0,(int32_t)c->r[0],0); // 801061E4
  if (!crb(c,0)) { goto L_801061FC; } // 801061E8
  goto L_801063E8; // 801061EC
L_801061F0:;
  cmps(c,0,(int32_t)c->r[0],3); // 801061F0
  if (!crb(c,0)) { goto L_801063E8; } // 801061F4
  goto L_80106314; // 801061F8
L_801061FC:;
  c->r[31]=0u+0x80620000u; // 801061FC
  c->r[4]=0u+0x00000002u; // 80106200
  c->r[31]=c->r[31]+0x00007688u; // 80106204
  c->r[3]=R32(c->r[31]+0x00000014u); // 80106208
  c->lr=0x80106210u; f_8003560C(c); // 8010620C
  cmps(c,0,(int32_t)c->r[3],0); // 80106210
  if (crb(c,2)) { goto L_801063E8; } // 80106214
  c->r[3]=R32(c->r[31]+0x00000014u); // 80106218
  c->r[4]=0u+0x00000002u; // 8010621C
  c->lr=0x80106224u; f_8003560C(c); // 80106220
  c->lr=0x80106228u; f_80036974(c); // 80106224
  c->r[3]=R32(c->r[31]+0x00000014u); // 80106228
  c->r[4]=0u+0x00000002u; // 8010622C
  c->r[5]=0u+0x00000000u; // 80106230
  c->lr=0x80106238u; f_80038998(c); // 80106234
  goto L_801063E8; // 80106238
L_8010623C:;
  c->r[3]=0u+0x80620000u; // 8010623C
  c->r[3]=c->r[3]+0x000079C0u; // 80106240
  c->r[0]=R32(c->r[3]+0x00000008u); // 80106244
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 80106248
  if (!crb(c,2)) { goto L_80106280; } // 8010624C
  c->r[31]=0u+0x80620000u; // 80106250
  c->r[4]=0u+0x00000001u; // 80106254
  c->r[31]=c->r[31]+0x00007688u; // 80106258
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010625C
  c->lr=0x80106264u; f_80037670(c); // 80106260
  cmps(c,0,(int32_t)c->r[3],0); // 80106264
  if (!crb(c,2)) { goto L_80106280; } // 80106268
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010626C
  c->r[4]=0u+0x00000000u; // 80106270
  c->lr=0x80106278u; f_80037670(c); // 80106274
  cmps(c,0,(int32_t)c->r[3],0); // 80106278
  if (crb(c,2)) { goto L_801062C0; } // 8010627C
L_80106280:;
  c->r[31]=0u+0x80620000u; // 80106280
  c->r[4]=0u+0x00000002u; // 80106284
  c->r[31]=c->r[31]+0x00007688u; // 80106288
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010628C
  c->lr=0x80106294u; f_8003560C(c); // 80106290
  cmps(c,0,(int32_t)c->r[3],0); // 80106294
  if (crb(c,2)) { goto L_801063E8; } // 80106298
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010629C
  c->r[4]=0u+0x00000002u; // 801062A0
  c->lr=0x801062A8u; f_8003560C(c); // 801062A4
  c->lr=0x801062ACu; f_80036974(c); // 801062A8
  c->r[3]=R32(c->r[31]+0x00000014u); // 801062AC
  c->r[4]=0u+0x00000002u; // 801062B0
  c->r[5]=0u+0x00000000u; // 801062B4
  c->lr=0x801062BCu; f_80038998(c); // 801062B8
  goto L_801063E8; // 801062BC
L_801062C0:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801062C0
  c->r[4]=0u+0x00000002u; // 801062C4
  c->lr=0x801062CCu; f_8003560C(c); // 801062C8
  cmps(c,0,(int32_t)c->r[3],0); // 801062CC
  if (!crb(c,2)) { goto L_801063E8; } // 801062D0
  {uint32_t ea=c->r[2]+0xFFFFAEF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801062D4
  c->r[3]=c->r[1]+0x00000014u; // 801062D8
  {uint32_t ea=c->r[2]+0xFFFFAEFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801062DC
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[0]=c->ps1[0]=RF32(ea);} // 801062E0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 801062E4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801062E8
  c->r[5]=R32(c->r[1]+0x00000020u); // 801062EC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 801062F0
  c->r[4]=R32(c->r[1]+0x00000024u); // 801062F4
  c->r[0]=R32(c->r[1]+0x00000028u); // 801062F8
  W32(c->r[1]+0x00000014u,c->r[5]); // 801062FC
  W32(c->r[1]+0x00000018u,c->r[4]); // 80106300
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80106304
  c->lr=0x8010630Cu; f_80036740(c); // 80106308
  c->r[30]=c->r[3]|c->r[3]; // 8010630C
  goto L_801063E8; // 80106310
L_80106314:;
  c->r[3]=0u+0x80620000u; // 80106314
  c->r[3]=c->r[3]+0x000079C0u; // 80106318
  c->r[0]=R32(c->r[3]+0x00000008u); // 8010631C
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 80106320
  if (!crb(c,2)) { goto L_80106358; } // 80106324
  c->r[31]=0u+0x80620000u; // 80106328
  c->r[4]=0u+0x00000001u; // 8010632C
  c->r[31]=c->r[31]+0x00007688u; // 80106330
  c->r[3]=R32(c->r[31]+0x00000014u); // 80106334
  c->lr=0x8010633Cu; f_80037670(c); // 80106338
  cmps(c,0,(int32_t)c->r[3],0); // 8010633C
  if (!crb(c,2)) { goto L_80106358; } // 80106340
  c->r[3]=R32(c->r[31]+0x00000014u); // 80106344
  c->r[4]=0u+0x00000000u; // 80106348
  c->lr=0x80106350u; f_80037670(c); // 8010634C
  cmps(c,0,(int32_t)c->r[3],0); // 80106350
  if (crb(c,2)) { goto L_80106398; } // 80106354
L_80106358:;
  c->r[31]=0u+0x80620000u; // 80106358
  c->r[4]=0u+0x00000002u; // 8010635C
  c->r[31]=c->r[31]+0x00007688u; // 80106360
  c->r[3]=R32(c->r[31]+0x00000014u); // 80106364
  c->lr=0x8010636Cu; f_8003560C(c); // 80106368
  cmps(c,0,(int32_t)c->r[3],0); // 8010636C
  if (crb(c,2)) { goto L_801063E8; } // 80106370
  c->r[3]=R32(c->r[31]+0x00000014u); // 80106374
  c->r[4]=0u+0x00000002u; // 80106378
  c->lr=0x80106380u; f_8003560C(c); // 8010637C
  c->lr=0x80106384u; f_80036974(c); // 80106380
  c->r[3]=R32(c->r[31]+0x00000014u); // 80106384
  c->r[4]=0u+0x00000002u; // 80106388
  c->r[5]=0u+0x00000000u; // 8010638C
  c->lr=0x80106394u; f_80038998(c); // 80106390
  goto L_801063E8; // 80106394
L_80106398:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80106398
  c->r[4]=0u+0x00000002u; // 8010639C
  c->lr=0x801063A4u; f_8003560C(c); // 801063A0
  cmps(c,0,(int32_t)c->r[3],0); // 801063A4
  if (!crb(c,2)) { goto L_801063E8; } // 801063A8
  {uint32_t ea=c->r[2]+0xFFFFAF04u; c->f[2]=c->ps1[2]=RF32(ea);} // 801063AC
  c->r[3]=c->r[1]+0x00000008u; // 801063B0
  {uint32_t ea=c->r[2]+0xFFFFAEFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801063B4
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[0]=c->ps1[0]=RF32(ea);} // 801063B8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 801063BC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801063C0
  c->r[5]=R32(c->r[1]+0x00000020u); // 801063C4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 801063C8
  c->r[4]=R32(c->r[1]+0x00000024u); // 801063CC
  c->r[0]=R32(c->r[1]+0x00000028u); // 801063D0
  W32(c->r[1]+0x00000008u,c->r[5]); // 801063D4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801063D8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801063DC
  c->lr=0x801063E4u; f_80036740(c); // 801063E0
  c->r[30]=c->r[3]|c->r[3]; // 801063E4
L_801063E8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801063E8
  if (crb(c,2)) { goto L_80106408; } // 801063EC
  c->r[3]=0u+0x80620000u; // 801063F0
  c->r[5]=c->r[30]|c->r[30]; // 801063F4
  c->r[3]=c->r[3]+0x00007688u; // 801063F8
  c->r[4]=0u+0x00000002u; // 801063FC
  c->r[3]=R32(c->r[3]+0x00000014u); // 80106400
  c->lr=0x80106408u; f_80038998(c); // 80106404
L_80106408:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80106408
  c->r[3]=0u+0x00000001u; // 8010640C
  c->r[30]=R32(c->r[1]+0x00000038u); // 80106410
  c->r[0]=R32(c->r[1]+0x00000044u); // 80106414
  c->lr=c->r[0]; // 80106418
  c->r[1]=c->r[1]+0x00000040u; // 8010641C
  return; // 80106420
}

// fn_80106424
void f_80106424(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106424
  c->r[0]=c->lr; // 80106428
  c->r[3]=0u+0x80620000u; // 8010642C
  c->r[4]=0u+0x00000002u; // 80106430
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106434
  c->r[3]=c->r[3]+0x00007688u; // 80106438
  c->r[3]=R32(c->r[3]+0x00000014u); // 8010643C
  c->lr=0x80106444u; f_80105238(c); // 80106440
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106444
  c->r[3]=0u+0x00000001u; // 80106448
  c->lr=c->r[0]; // 8010644C
  c->r[1]=c->r[1]+0x00000010u; // 80106450
  return; // 80106454
}

// fn_80106458
void f_80106458(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106458
  c->r[0]=c->lr; // 8010645C
  c->r[3]=0u+0x80550000u; // 80106460
  c->r[4]=0u+0x00000003u; // 80106464
  W32(c->r[1]+0x00000094u,c->r[0]); // 80106468
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8010646C
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 80106470
  W32(c->r[1]+0x00000088u,c->r[30]); // 80106474
  c->lr=0x8010647Cu; f_8019C920(c); // 80106478
  c->r[4]=0u+0x00000000u; // 8010647C
  c->lr=0x80106484u; f_80039840(c); // 80106480
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106484
  c->r[31]=rotl(c->r[3],0)&0x0000FFFFu; // 80106488
  c->r[30]=0u+0x803A0000u; // 8010648C
  c->r[5]=c->r[1]+0x00000050u; // 80106490
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80106494
  c->r[3]=c->r[31]|c->r[31]; // 80106498
  c->r[4]=c->r[30]+0xFFFFF570u; // 8010649C
  c->r[6]=0u+0x00000001u; // 801064A0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 801064A4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801064A8
  c->lr=0x801064B0u; f_80257018(c); // 801064AC
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801064B0
  c->r[4]=c->r[30]+0xFFFFF570u; // 801064B4
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801064B8
  c->r[30]=0u+0x80550000u; // 801064BC
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801064C0
  c->r[3]=c->r[30]+0xFFFFC848u; // 801064C4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 801064C8
  c->r[4]=c->r[4]+0x00000007u; // 801064CC
  c->r[5]=0u+0x00000000u; // 801064D0
  c->r[6]=0u+0x00000000u; // 801064D4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 801064D8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 801064DC
  c->lr=0x801064E4u; f_8018D3E4(c); // 801064E0
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801064E4
  cmpu(c,0,c->r[4],0x000000FFu); // 801064E8
  if (crb(c,2)) { goto L_80106530; } // 801064EC
  c->r[11]=R32(c->r[1]+0x00000038u); // 801064F0
  c->r[3]=c->r[30]+0xFFFFC848u; // 801064F4
  c->r[10]=R32(c->r[1]+0x0000003Cu); // 801064F8
  c->r[5]=c->r[1]+0x0000002Cu; // 801064FC
  c->r[9]=R32(c->r[1]+0x00000040u); // 80106500
  c->r[6]=c->r[1]+0x00000020u; // 80106504
  c->r[8]=R32(c->r[1]+0x00000044u); // 80106508
  c->r[7]=R32(c->r[1]+0x00000048u); // 8010650C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 80106510
  W32(c->r[1]+0x00000020u,c->r[11]); // 80106514
  W32(c->r[1]+0x00000024u,c->r[10]); // 80106518
  W32(c->r[1]+0x00000028u,c->r[9]); // 8010651C
  W32(c->r[1]+0x0000002Cu,c->r[8]); // 80106520
  W32(c->r[1]+0x00000030u,c->r[7]); // 80106524
  W32(c->r[1]+0x00000034u,c->r[0]); // 80106528
  c->lr=0x80106530u; f_8018DBD0(c); // 8010652C
L_80106530:;
  c->r[30]=0u+0x803A0000u; // 80106530
  c->r[3]=c->r[31]|c->r[31]; // 80106534
  c->r[30]=c->r[30]+0xFFFFF570u; // 80106538
  c->r[5]=c->r[1]+0x00000050u; // 8010653C
  c->r[4]=c->r[30]+0x0000000Bu; // 80106540
  c->r[6]=0u+0x00000001u; // 80106544
  c->lr=0x8010654Cu; f_80257018(c); // 80106548
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8010654C
  c->r[31]=0u+0x80550000u; // 80106550
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80106554
  c->r[3]=c->r[31]+0xFFFFC848u; // 80106558
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010655C
  c->r[4]=c->r[30]+0x00000007u; // 80106560
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 80106564
  c->r[5]=0u+0x00000000u; // 80106568
  c->r[6]=0u+0x00000000u; // 8010656C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 80106570
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80106574
  c->lr=0x8010657Cu; f_8018D3E4(c); // 80106578
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 8010657C
  cmpu(c,0,c->r[4],0x000000FFu); // 80106580
  if (crb(c,2)) { goto L_801065C8; } // 80106584
  c->r[11]=R32(c->r[1]+0x00000038u); // 80106588
  c->r[3]=c->r[31]+0xFFFFC848u; // 8010658C
  c->r[10]=R32(c->r[1]+0x0000003Cu); // 80106590
  c->r[5]=c->r[1]+0x00000014u; // 80106594
  c->r[9]=R32(c->r[1]+0x00000040u); // 80106598
  c->r[6]=c->r[1]+0x00000008u; // 8010659C
  c->r[8]=R32(c->r[1]+0x00000044u); // 801065A0
  c->r[7]=R32(c->r[1]+0x00000048u); // 801065A4
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 801065A8
  W32(c->r[1]+0x00000008u,c->r[11]); // 801065AC
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 801065B0
  W32(c->r[1]+0x00000010u,c->r[9]); // 801065B4
  W32(c->r[1]+0x00000014u,c->r[8]); // 801065B8
  W32(c->r[1]+0x00000018u,c->r[7]); // 801065BC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801065C0
  c->lr=0x801065C8u; f_8018DBD0(c); // 801065C4
L_801065C8:;
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 801065C8
  c->r[3]=0u+0x00000001u; // 801065CC
  c->r[30]=R32(c->r[1]+0x00000088u); // 801065D0
  c->r[0]=R32(c->r[1]+0x00000094u); // 801065D4
  c->lr=c->r[0]; // 801065D8
  c->r[1]=c->r[1]+0x00000090u; // 801065DC
  return; // 801065E0
}

// fn_801065E4
void f_801065E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801065E4
  c->r[0]=c->lr; // 801065E8
  c->r[3]=0u+0x80620000u; // 801065EC
  c->r[4]=0u+0x00000004u; // 801065F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801065F4
  c->r[3]=c->r[3]+0x00007688u; // 801065F8
  c->r[3]=R32(c->r[3]+0x00000014u); // 801065FC
  c->lr=0x80106604u; f_8003560C(c); // 80106600
  c->r[4]=0u+0xAAAB0000u; // 80106604
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[2]=c->ps1[2]=RF32(ea);} // 80106608
  c->r[4]=c->r[4]+0xFFFFAAABu; // 8010660C
  c->r[0]=0u+0x43300000u; // 80106610
  c->r[4]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[3])>>32); // 80106614
  {uint32_t ea=c->r[2]+0xFFFFAF1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80106618
  {uint32_t ea=c->r[2]+0xFFFFAF08u; c->f[8]=c->ps1[8]=RF32(ea);} // 8010661C
  c->r[3]=0u+0x805D0000u; // 80106620
  {uint32_t ea=c->r[2]+0xFFFFAF0Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 80106624
  c->r[6]=c->r[1]+0x00000014u; // 80106628
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8010662C
  W32(c->r[1]+0x00000020u,c->r[0]); // 80106630
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 80106634
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[6]=RF64(ea);} // 80106638
  {uint32_t ea=c->r[2]+0xFFFFAF18u; c->f[5]=c->ps1[5]=RF32(ea);} // 8010663C
  c->r[3]=c->r[3]+0x00003F6Cu; // 80106640
  {uint32_t ea=c->r[2]+0xFFFFAF14u; c->f[4]=c->ps1[4]=RF32(ea);} // 80106644
  c->r[7]=c->r[1]+0x00000008u; // 80106648
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010664C
  c->r[4]=0u+0x00000080u; // 80106650
  {uint32_t ea=c->r[2]+0xFFFFAF10u; c->f[3]=c->ps1[3]=RF32(ea);} // 80106654
  c->r[5]=0u+0x00000081u; // 80106658
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8010665C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80106660
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[6]); // 80106664
  {uint32_t ea=c->r[2]+0xFFFFAF20u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106668
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[8]);} // 8010666C
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[6]); // 80106670
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[7]);} // 80106674
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80106678
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[5],c->f[3])); // 8010667C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 80106680
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80106684
  c->lr=0x8010668Cu; f_801F4D44(c); // 80106688
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010668C
  c->r[3]=0u+0x00000001u; // 80106690
  c->lr=c->r[0]; // 80106694
  c->r[1]=c->r[1]+0x00000030u; // 80106698
  return; // 8010669C
}

// fn_801066A0
void f_801066A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801066A0
  c->r[0]=c->lr; // 801066A4
  {uint32_t ea=c->r[2]+0xFFFFAF30u; c->f[1]=c->ps1[1]=RF32(ea);} // 801066A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801066AC
  c->lr=0x801066B4u; f_8024DFF4(c); // 801066B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801066B4
  c->r[3]=0u+0x00000001u; // 801066B8
  c->lr=c->r[0]; // 801066BC
  c->r[1]=c->r[1]+0x00000010u; // 801066C0
  return; // 801066C4
}

// fn_801066C8
void f_801066C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801066C8
  c->r[0]=c->lr; // 801066CC
  W32(c->r[1]+0x00000084u,c->r[0]); // 801066D0
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801066D4
  W32(c->r[1]+0x00000078u,c->r[30]); // 801066D8
  W32(c->r[1]+0x00000074u,c->r[29]); // 801066DC
  c->r[0]=R8(c->r[5]+0x00000003u); // 801066E0
  cmps(c,0,(int32_t)c->r[0],1); // 801066E4
  if (crb(c,2)) { goto L_801067D4; } // 801066E8
  if (!crb(c,0)) { goto L_80106810; } // 801066EC
  cmps(c,0,(int32_t)c->r[0],0); // 801066F0
  if (!crb(c,0)) { goto L_801066FC; } // 801066F4
  goto L_80106810; // 801066F8
L_801066FC:;
  c->r[3]=0u+0x80550000u; // 801066FC
  c->r[4]=0u+0x00000001u; // 80106700
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80106704
  c->lr=0x8010670Cu; f_8019C920(c); // 80106708
  c->r[29]=c->r[3]|c->r[3]; // 8010670C
  c->r[4]=0u+0x00000000u; // 80106710
  c->lr=0x80106718u; f_80039840(c); // 80106714
  c->r[30]=0u+0x803A0000u; // 80106718
  c->r[5]=c->r[1]+0x00000038u; // 8010671C
  c->r[30]=c->r[30]+0xFFFFF570u; // 80106720
  c->r[6]=0u+0x00000001u; // 80106724
  c->r[4]=c->r[30]+0x00000012u; // 80106728
  c->lr=0x80106730u; f_80257018(c); // 8010672C
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106730
  c->r[3]=c->r[1]+0x00000038u; // 80106734
  c->r[4]=c->r[1]+0x0000002Cu; // 80106738
  c->r[5]=c->r[1]+0x00000020u; // 8010673C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80106740
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80106744
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80106748
  c->lr=0x80106750u; f_80296750(c); // 8010674C
  c->r[31]=0u+0x80550000u; // 80106750
  c->r[4]=c->r[30]+0x00000016u; // 80106754
  c->r[3]=c->r[31]+0xFFFFC848u; // 80106758
  c->r[5]=0u+0x00000000u; // 8010675C
  c->r[6]=0u+0x00000000u; // 80106760
  c->lr=0x80106768u; f_8018D3E4(c); // 80106764
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 80106768
  cmpu(c,0,c->r[30],0x000000FFu); // 8010676C
  if (crb(c,2)) { goto L_801067B8; } // 80106770
  c->r[6]=R32(c->r[29]+0x00000060u); // 80106774
  c->r[4]=c->r[30]|c->r[30]; // 80106778
  c->r[0]=R32(c->r[29]+0x00000064u); // 8010677C
  c->r[3]=c->r[31]+0xFFFFC848u; // 80106780
  c->r[8]=R32(c->r[1]+0x00000020u); // 80106784
  c->r[5]=c->r[1]+0x00000014u; // 80106788
  W32(c->r[1]+0x00000008u,c->r[6]); // 8010678C
  c->r[6]=c->r[1]+0x00000008u; // 80106790
  c->r[7]=R32(c->r[1]+0x00000024u); // 80106794
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80106798
  c->r[0]=R32(c->r[1]+0x00000028u); // 8010679C
  c->r[9]=R32(c->r[29]+0x00000068u); // 801067A0
  W32(c->r[1]+0x00000010u,c->r[9]); // 801067A4
  W32(c->r[1]+0x00000014u,c->r[8]); // 801067A8
  W32(c->r[1]+0x00000018u,c->r[7]); // 801067AC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801067B0
  c->lr=0x801067B8u; f_8018DBD0(c); // 801067B4
L_801067B8:;
  c->r[3]=0u+0x80620000u; // 801067B8
  c->r[5]=c->r[30]|c->r[30]; // 801067BC
  c->r[3]=c->r[3]+0x00007688u; // 801067C0
  c->r[4]=0u+0x0000000Au; // 801067C4
  c->r[3]=R32(c->r[3]+0x00000014u); // 801067C8
  c->lr=0x801067D0u; f_80038998(c); // 801067CC
  goto L_80106810; // 801067D0
L_801067D4:;
  c->r[31]=0u+0x80620000u; // 801067D4
  c->r[4]=0u+0x0000000Au; // 801067D8
  c->r[31]=c->r[31]+0x00007688u; // 801067DC
  c->r[3]=R32(c->r[31]+0x00000014u); // 801067E0
  c->lr=0x801067E8u; f_8003560C(c); // 801067E4
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801067E8
  cmpu(c,0,c->r[4],0x000000FFu); // 801067EC
  if (crb(c,2)) { goto L_80106810; } // 801067F0
  c->r[3]=0u+0x80550000u; // 801067F4
  c->r[3]=c->r[3]+0xFFFFC848u; // 801067F8
  c->lr=0x80106800u; f_8018D694(c); // 801067FC
  c->r[3]=R32(c->r[31]+0x00000014u); // 80106800
  c->r[4]=0u+0x0000000Au; // 80106804
  c->r[5]=0u+0x000000FFu; // 80106808
  c->lr=0x80106810u; f_80038998(c); // 8010680C
L_80106810:;
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 80106810
  c->r[3]=0u+0x00000001u; // 80106814
  c->r[30]=R32(c->r[1]+0x00000078u); // 80106818
  c->r[29]=R32(c->r[1]+0x00000074u); // 8010681C
  c->r[0]=R32(c->r[1]+0x00000084u); // 80106820
  c->lr=c->r[0]; // 80106824
  c->r[1]=c->r[1]+0x00000080u; // 80106828
  return; // 8010682C
}

// fn_80106830
void f_80106830(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106830
  c->r[0]=c->lr; // 80106834
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106838
  c->r[3]=R8(c->r[5]+0x00000003u); // 8010683C
  c->lr=0x80106844u; f_8025C0A8(c); // 80106840
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106844
  c->r[3]=0u+0x00000001u; // 80106848
  c->lr=c->r[0]; // 8010684C
  c->r[1]=c->r[1]+0x00000010u; // 80106850
  return; // 80106854
}

// fn_80106858
void f_80106858(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106858
  c->r[0]=c->lr; // 8010685C
  c->r[3]=0u+0x80620000u; // 80106860
  W32(c->r[1]+0x00000024u,c->r[0]); // 80106864
  c->r[3]=c->r[3]+0x00007688u; // 80106868
  c->r[3]=R32(c->r[3]+0x00000014u); // 8010686C
  c->lr=0x80106874u; f_801068CC(c); // 80106870
  c->r[0]=0u+0x00000000u; // 80106874
  c->r[8]=0u+0x803A0000u; // 80106878
  W8(c->r[3]+0x00000000u,c->r[0]); // 8010687C
  c->r[6]=c->r[3]|c->r[3]; // 80106880
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106884
  c->r[5]=c->r[1]+0x00000008u; // 80106888
  {uint32_t ea=c->r[8]+0xFFFFF558u; c->r[4]=R32(ea); c->r[8]=ea;} // 8010688C
  c->r[3]=0u+0x00000007u; // 80106890
  {uint32_t ea=c->r[2]+0xFFFFAF34u; c->f[2]=c->ps1[2]=RF32(ea);} // 80106894
  c->r[7]=R32(c->r[8]+0x00000004u); // 80106898
  c->r[0]=R32(c->r[8]+0x00000008u); // 8010689C
  W32(c->r[1]+0x00000008u,c->r[4]); // 801068A0
  c->r[4]=0u+0x00000000u; // 801068A4
  {uint32_t ea=c->r[2]+0xFFFFAF38u; c->f[3]=c->ps1[3]=RF32(ea);} // 801068A8
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 801068AC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801068B0
  c->lr=0x801068B8u; f_802441D4(c); // 801068B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801068B8
  c->r[3]=0u+0x00000001u; // 801068BC
  c->lr=c->r[0]; // 801068C0
  c->r[1]=c->r[1]+0x00000020u; // 801068C4
  return; // 801068C8
}

// fn_801068CC
void f_801068CC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000023E5u; // 801068CC
  return; // 801068D0
}

// fn_801068D4
void f_801068D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801068D4
  c->r[0]=c->lr; // 801068D8
  c->r[3]=0u+0x80620000u; // 801068DC
  c->r[4]=0u+0x00000013u; // 801068E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801068E4
  c->r[3]=c->r[3]+0x00007688u; // 801068E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801068EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801068F0
  c->r[3]=R32(c->r[3]+0x00000014u); // 801068F4
  c->lr=0x801068FCu; f_8003560C(c); // 801068F8
  c->r[4]=0u+0x80550000u; // 801068FC
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 80106900
  c->r[3]=c->r[4]+0xFFFFCE54u; // 80106904
  c->r[4]=0u+0x00000019u; // 80106908
  c->lr=0x80106910u; f_8019C920(c); // 8010690C
  cmps(c,0,(int32_t)c->r[3],0); // 80106910
  c->r[30]=c->r[3]|c->r[3]; // 80106914
  if (crb(c,2)) { goto L_801069B8; } // 80106918
  c->r[4]=c->r[1]+0x00000008u; // 8010691C
  c->r[5]=0u+0x00000000u; // 80106920
  c->lr=0x80106928u; f_8007C6C8(c); // 80106924
  cmps(c,0,(int32_t)c->r[31],1); // 80106928
  if (crb(c,2)) { goto L_80106978; } // 8010692C
  if (!crb(c,0)) { goto L_801069A0; } // 80106930
  cmps(c,0,(int32_t)c->r[31],0); // 80106934
  if (!crb(c,0)) { goto L_80106940; } // 80106938
  goto L_801069A0; // 8010693C
L_80106940:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80106940
  {uint32_t ea=c->r[2]+0xFFFFAF3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80106944
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106948
  fcmp(c,0,c->f[1],c->f[0]); // 8010694C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80106950
  if (!crb(c,2)) { goto L_801069A0; } // 80106954
  c->r[3]=c->r[30]|c->r[30]; // 80106958
  c->r[4]=0u+0x00000004u; // 8010695C
  c->r[5]=0u+0x00000016u; // 80106960
  c->r[6]=0u+0x00000001u; // 80106964
  c->r[7]=0u+0x00000001u; // 80106968
  c->lr=0x80106970u; f_8017900C(c); // 8010696C
  c->r[31]=c->r[31]+0x00000001u; // 80106970
  goto L_801069A0; // 80106974
L_80106978:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80106978
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010697C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106980
  fcmp(c,0,c->f[1],c->f[0]); // 80106984
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80106988
  if (!crb(c,2)) { goto L_801069A0; } // 8010698C
  {uint32_t ea=c->r[2]+0xFFFFAF40u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106990
  fcmp(c,0,c->f[1],c->f[0]); // 80106994
  if (!crb(c,0)) { goto L_801069A0; } // 80106998
  c->r[31]=0u+0x00000000u; // 8010699C
L_801069A0:;
  c->r[3]=0u+0x80620000u; // 801069A0
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 801069A4
  c->r[3]=c->r[3]+0x00007688u; // 801069A8
  c->r[4]=0u+0x00000013u; // 801069AC
  c->r[3]=R32(c->r[3]+0x00000014u); // 801069B0
  c->lr=0x801069B8u; f_80038998(c); // 801069B4
L_801069B8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801069B8
  c->r[3]=0u+0x00000001u; // 801069BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801069C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801069C4
  c->lr=c->r[0]; // 801069C8
  c->r[1]=c->r[1]+0x00000020u; // 801069CC
  return; // 801069D0
}

// fn_801069D4
void f_801069D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801069D4
  c->r[0]=c->lr; // 801069D8
  c->r[3]=0u+0x80620000u; // 801069DC
  c->r[4]=0u+0x00000014u; // 801069E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801069E4
  c->r[3]=c->r[3]+0x00007688u; // 801069E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801069EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801069F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801069F4
  c->r[3]=R32(c->r[3]+0x00000014u); // 801069F8
  c->lr=0x80106A00u; f_8003560C(c); // 801069FC
  c->r[4]=0u+0x80550000u; // 80106A00
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 80106A04
  c->r[3]=c->r[4]+0xFFFFCE54u; // 80106A08
  c->r[4]=0u+0x00000000u; // 80106A0C
  c->lr=0x80106A14u; f_8019C920(c); // 80106A10
  cmps(c,0,(int32_t)c->r[3],0); // 80106A14
  c->r[30]=c->r[3]|c->r[3]; // 80106A18
  if (crb(c,2)) { goto L_80106D34; } // 80106A1C
  c->r[4]=c->r[1]+0x00000008u; // 80106A20
  c->r[5]=0u+0x00000000u; // 80106A24
  c->lr=0x80106A2Cu; f_8007C6C8(c); // 80106A28
  cmps(c,0,(int32_t)c->r[31],2); // 80106A2C
  if (crb(c,2)) { goto L_80106C14; } // 80106A30
  if (!crb(c,0)) { goto L_80106A48; } // 80106A34
  cmps(c,0,(int32_t)c->r[31],0); // 80106A38
  if (crb(c,2)) { goto L_80106A54; } // 80106A3C
  if (!crb(c,0)) { goto L_80106B34; } // 80106A40
  goto L_80106D1C; // 80106A44
L_80106A48:;
  cmps(c,0,(int32_t)c->r[31],4); // 80106A48
  if (!crb(c,0)) { goto L_80106D1C; } // 80106A4C
  goto L_80106CF4; // 80106A50
L_80106A54:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80106A54
  {uint32_t ea=c->r[2]+0xFFFFAF44u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106A58
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106A5C
  fcmp(c,0,c->f[1],c->f[0]); // 80106A60
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80106A64
  if (!crb(c,2)) { goto L_80106D1C; } // 80106A68
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80106A6C
  c->lr=0x80106A74u; f_80211724(c); // 80106A70
  c->r[4]=0u+0xCCCD0000u; // 80106A74
  c->r[0]=c->r[4]+0xFFFFCCCDu; // 80106A78
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 80106A7C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80106A80
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 80106A84
  c->r[0]=c->r[3]-c->r[0]; // 80106A88
  c->r[29]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[29]); // 80106A8C
  if (!crb(c,2)) { goto L_80106AAC; } // 80106A90
  c->r[3]=c->r[30]|c->r[30]; // 80106A94
  c->r[4]=0u+0x00000005u; // 80106A98
  c->r[5]=0u+0x00000038u; // 80106A9C
  c->r[6]=0u+0x00000001u; // 80106AA0
  c->r[7]=0u+0x00000001u; // 80106AA4
  c->lr=0x80106AACu; f_8017900C(c); // 80106AA8
L_80106AAC:;
  cmpu(c,0,c->r[29],0x00000001u); // 80106AAC
  if (!crb(c,2)) { goto L_80106ACC; } // 80106AB0
  c->r[3]=c->r[30]|c->r[30]; // 80106AB4
  c->r[4]=0u+0x00000005u; // 80106AB8
  c->r[5]=0u+0x00000038u; // 80106ABC
  c->r[6]=0u+0x00000001u; // 80106AC0
  c->r[7]=0u+0x00000001u; // 80106AC4
  c->lr=0x80106ACCu; f_8017900C(c); // 80106AC8
L_80106ACC:;
  cmpu(c,0,c->r[29],0x00000002u); // 80106ACC
  if (!crb(c,2)) { goto L_80106AEC; } // 80106AD0
  c->r[3]=c->r[30]|c->r[30]; // 80106AD4
  c->r[4]=0u+0x00000005u; // 80106AD8
  c->r[5]=0u+0x00000039u; // 80106ADC
  c->r[6]=0u+0x00000001u; // 80106AE0
  c->r[7]=0u+0x00000001u; // 80106AE4
  c->lr=0x80106AECu; f_8017900C(c); // 80106AE8
L_80106AEC:;
  cmpu(c,0,c->r[29],0x00000003u); // 80106AEC
  if (!crb(c,2)) { goto L_80106B0C; } // 80106AF0
  c->r[3]=c->r[30]|c->r[30]; // 80106AF4
  c->r[4]=0u+0x00000005u; // 80106AF8
  c->r[5]=0u+0x00000039u; // 80106AFC
  c->r[6]=0u+0x00000001u; // 80106B00
  c->r[7]=0u+0x00000001u; // 80106B04
  c->lr=0x80106B0Cu; f_8017900C(c); // 80106B08
L_80106B0C:;
  cmpu(c,0,c->r[29],0x00000004u); // 80106B0C
  if (!crb(c,2)) { goto L_80106B2C; } // 80106B10
  c->r[3]=c->r[30]|c->r[30]; // 80106B14
  c->r[4]=0u+0x00000005u; // 80106B18
  c->r[5]=0u+0x0000003Au; // 80106B1C
  c->r[6]=0u+0x00000001u; // 80106B20
  c->r[7]=0u+0x00000001u; // 80106B24
  c->lr=0x80106B2Cu; f_8017900C(c); // 80106B28
L_80106B2C:;
  c->r[31]=c->r[31]+0x00000001u; // 80106B2C
  goto L_80106D1C; // 80106B30
L_80106B34:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80106B34
  {uint32_t ea=c->r[2]+0xFFFFAF48u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106B38
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106B3C
  fcmp(c,0,c->f[1],c->f[0]); // 80106B40
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80106B44
  if (!crb(c,2)) { goto L_80106D1C; } // 80106B48
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80106B4C
  c->lr=0x80106B54u; f_80211724(c); // 80106B50
  c->r[4]=0u+0xCCCD0000u; // 80106B54
  c->r[0]=c->r[4]+0xFFFFCCCDu; // 80106B58
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 80106B5C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80106B60
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 80106B64
  c->r[0]=c->r[3]-c->r[0]; // 80106B68
  c->r[29]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[29]); // 80106B6C
  if (!crb(c,2)) { goto L_80106B8C; } // 80106B70
  c->r[3]=c->r[30]|c->r[30]; // 80106B74
  c->r[4]=0u+0x00000005u; // 80106B78
  c->r[5]=0u+0x0000003Au; // 80106B7C
  c->r[6]=0u+0x00000001u; // 80106B80
  c->r[7]=0u+0x00000001u; // 80106B84
  c->lr=0x80106B8Cu; f_8017900C(c); // 80106B88
L_80106B8C:;
  cmpu(c,0,c->r[29],0x00000001u); // 80106B8C
  if (!crb(c,2)) { goto L_80106BAC; } // 80106B90
  c->r[3]=c->r[30]|c->r[30]; // 80106B94
  c->r[4]=0u+0x00000005u; // 80106B98
  c->r[5]=0u+0x0000003Au; // 80106B9C
  c->r[6]=0u+0x00000001u; // 80106BA0
  c->r[7]=0u+0x00000001u; // 80106BA4
  c->lr=0x80106BACu; f_8017900C(c); // 80106BA8
L_80106BAC:;
  cmpu(c,0,c->r[29],0x00000002u); // 80106BAC
  if (!crb(c,2)) { goto L_80106BCC; } // 80106BB0
  c->r[3]=c->r[30]|c->r[30]; // 80106BB4
  c->r[4]=0u+0x00000005u; // 80106BB8
  c->r[5]=0u+0x00000006u; // 80106BBC
  c->r[6]=0u+0x00000001u; // 80106BC0
  c->r[7]=0u+0x00000001u; // 80106BC4
  c->lr=0x80106BCCu; f_8017900C(c); // 80106BC8
L_80106BCC:;
  cmpu(c,0,c->r[29],0x00000003u); // 80106BCC
  if (!crb(c,2)) { goto L_80106BEC; } // 80106BD0
  c->r[3]=c->r[30]|c->r[30]; // 80106BD4
  c->r[4]=0u+0x00000005u; // 80106BD8
  c->r[5]=0u+0x00000006u; // 80106BDC
  c->r[6]=0u+0x00000001u; // 80106BE0
  c->r[7]=0u+0x00000001u; // 80106BE4
  c->lr=0x80106BECu; f_8017900C(c); // 80106BE8
L_80106BEC:;
  cmpu(c,0,c->r[29],0x00000004u); // 80106BEC
  if (!crb(c,2)) { goto L_80106C0C; } // 80106BF0
  c->r[3]=c->r[30]|c->r[30]; // 80106BF4
  c->r[4]=0u+0x00000005u; // 80106BF8
  c->r[5]=0u+0x0000003Cu; // 80106BFC
  c->r[6]=0u+0x00000001u; // 80106C00
  c->r[7]=0u+0x00000001u; // 80106C04
  c->lr=0x80106C0Cu; f_8017900C(c); // 80106C08
L_80106C0C:;
  c->r[31]=c->r[31]+0x00000001u; // 80106C0C
  goto L_80106D1C; // 80106C10
L_80106C14:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80106C14
  {uint32_t ea=c->r[2]+0xFFFFAF4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80106C18
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106C1C
  fcmp(c,0,c->f[1],c->f[0]); // 80106C20
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80106C24
  if (!crb(c,2)) { goto L_80106D1C; } // 80106C28
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80106C2C
  c->lr=0x80106C34u; f_80211724(c); // 80106C30
  c->r[4]=0u+0xCCCD0000u; // 80106C34
  c->r[0]=c->r[4]+0xFFFFCCCDu; // 80106C38
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 80106C3C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80106C40
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 80106C44
  c->r[0]=c->r[3]-c->r[0]; // 80106C48
  c->r[29]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[29]); // 80106C4C
  if (!crb(c,2)) { goto L_80106C6C; } // 80106C50
  c->r[3]=c->r[30]|c->r[30]; // 80106C54
  c->r[4]=0u+0x00000005u; // 80106C58
  c->r[5]=0u+0x0000003Cu; // 80106C5C
  c->r[6]=0u+0x00000001u; // 80106C60
  c->r[7]=0u+0x00000001u; // 80106C64
  c->lr=0x80106C6Cu; f_8017900C(c); // 80106C68
L_80106C6C:;
  cmpu(c,0,c->r[29],0x00000001u); // 80106C6C
  if (!crb(c,2)) { goto L_80106C8C; } // 80106C70
  c->r[3]=c->r[30]|c->r[30]; // 80106C74
  c->r[4]=0u+0x00000005u; // 80106C78
  c->r[5]=0u+0x0000003Cu; // 80106C7C
  c->r[6]=0u+0x00000001u; // 80106C80
  c->r[7]=0u+0x00000001u; // 80106C84
  c->lr=0x80106C8Cu; f_8017900C(c); // 80106C88
L_80106C8C:;
  cmpu(c,0,c->r[29],0x00000002u); // 80106C8C
  if (!crb(c,2)) { goto L_80106CAC; } // 80106C90
  c->r[3]=c->r[30]|c->r[30]; // 80106C94
  c->r[4]=0u+0x00000005u; // 80106C98
  c->r[5]=0u+0x00000038u; // 80106C9C
  c->r[6]=0u+0x00000001u; // 80106CA0
  c->r[7]=0u+0x00000001u; // 80106CA4
  c->lr=0x80106CACu; f_8017900C(c); // 80106CA8
L_80106CAC:;
  cmpu(c,0,c->r[29],0x00000003u); // 80106CAC
  if (!crb(c,2)) { goto L_80106CCC; } // 80106CB0
  c->r[3]=c->r[30]|c->r[30]; // 80106CB4
  c->r[4]=0u+0x00000005u; // 80106CB8
  c->r[5]=0u+0x00000038u; // 80106CBC
  c->r[6]=0u+0x00000001u; // 80106CC0
  c->r[7]=0u+0x00000001u; // 80106CC4
  c->lr=0x80106CCCu; f_8017900C(c); // 80106CC8
L_80106CCC:;
  cmpu(c,0,c->r[29],0x00000004u); // 80106CCC
  if (!crb(c,2)) { goto L_80106CEC; } // 80106CD0
  c->r[3]=c->r[30]|c->r[30]; // 80106CD4
  c->r[4]=0u+0x00000005u; // 80106CD8
  c->r[5]=0u+0x00000039u; // 80106CDC
  c->r[6]=0u+0x00000001u; // 80106CE0
  c->r[7]=0u+0x00000001u; // 80106CE4
  c->lr=0x80106CECu; f_8017900C(c); // 80106CE8
L_80106CEC:;
  c->r[31]=c->r[31]+0x00000001u; // 80106CEC
  goto L_80106D1C; // 80106CF0
L_80106CF4:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80106CF4
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106CF8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106CFC
  fcmp(c,0,c->f[1],c->f[0]); // 80106D00
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80106D04
  if (!crb(c,2)) { goto L_80106D1C; } // 80106D08
  {uint32_t ea=c->r[2]+0xFFFFAF50u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106D0C
  fcmp(c,0,c->f[1],c->f[0]); // 80106D10
  if (!crb(c,0)) { goto L_80106D1C; } // 80106D14
  c->r[31]=0u+0x00000000u; // 80106D18
L_80106D1C:;
  c->r[3]=0u+0x80620000u; // 80106D1C
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 80106D20
  c->r[3]=c->r[3]+0x00007688u; // 80106D24
  c->r[4]=0u+0x00000014u; // 80106D28
  c->r[3]=R32(c->r[3]+0x00000014u); // 80106D2C
  c->lr=0x80106D34u; f_80038998(c); // 80106D30
L_80106D34:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80106D34
  c->r[3]=0u+0x00000001u; // 80106D38
  c->r[30]=R32(c->r[1]+0x00000018u); // 80106D3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80106D40
  c->r[0]=R32(c->r[1]+0x00000024u); // 80106D44
  c->lr=c->r[0]; // 80106D48
  c->r[1]=c->r[1]+0x00000020u; // 80106D4C
  return; // 80106D50
}

// fn_80106D54
void f_80106D54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106D54
  c->r[0]=c->lr; // 80106D58
  c->r[7]=0u+0x803E0000u; // 80106D5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106D60
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80106D64
  c->r[7]=c->r[7]+0x0000024Cu; // 80106D68
  c->r[4]=c->r[5]|c->r[5]; // 80106D6C
  c->r[5]=c->r[6]|c->r[6]; // 80106D70
  c->r[12]=c->r[7]+c->r[0]; // 80106D74
  c->lr=0x80106D7Cu; f_802BA00C(c); // 80106D78
  c->r[0]=c->r[0]|0x00000000u; // 80106D7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106D80
  c->lr=c->r[0]; // 80106D84
  c->r[1]=c->r[1]+0x00000010u; // 80106D88
  return; // 80106D8C
}

// fn_80106D90
void f_80106D90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106D90
  c->r[0]=c->lr; // 80106D94
  c->r[3]=0u+0x80620000u; // 80106D98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106D9C
  c->r[3]=c->r[3]+0x000079C0u; // 80106DA0
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106DA4
  c->lr=0x80106DACu; f_8002C1B0(c); // 80106DA8
  {uint32_t ea=c->r[2]+0xFFFFAF54u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106DAC
  fcmp(c,0,c->f[1],c->f[0]); // 80106DB0
  c->r[3]=c->cr; // 80106DB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106DB8
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 80106DBC
  c->lr=c->r[0]; // 80106DC0
  c->r[1]=c->r[1]+0x00000010u; // 80106DC4
  return; // 80106DC8
}

// fn_80106DCC
void f_80106DCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106DCC
  c->r[0]=c->lr; // 80106DD0
  {uint32_t ea=c->r[2]+0xFFFFAF58u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106DD4
  c->r[4]=0u+0x00000059u; // 80106DD8
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80106DDC
  c->r[3]=c->r[1]+0x00000050u; // 80106DE0
  {uint32_t ea=c->r[2]+0xFFFFAF50u; c->f[2]=c->ps1[2]=RF32(ea);} // 80106DE4
  W32(c->r[1]+0x000000CCu,c->r[31]); // 80106DE8
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[3]=c->ps1[3]=RF32(ea);} // 80106DEC
  W32(c->r[1]+0x000000C8u,c->r[30]); // 80106DF0
  W32(c->r[1]+0x000000C4u,c->r[29]); // 80106DF4
  W32(c->r[1]+0x000000C0u,c->r[28]); // 80106DF8
  c->r[28]=0u+0x805D0000u; // 80106DFC
  c->r[28]=c->r[28]+0x00003F6Cu; // 80106E00
  {uint32_t ea=c->r[28]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106E04
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 80106E08
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80106E0C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 80106E10
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 80106E14
  c->lr=0x80106E1Cu; f_80295FBC(c); // 80106E18
  c->r[4]=c->r[1]+0x00000034u; // 80106E1C
  c->r[3]=c->r[1]+0x00000050u; // 80106E20
  c->r[5]=c->r[4]|c->r[4]; // 80106E24
  c->lr=0x80106E2Cu; f_80296750(c); // 80106E28
  c->r[3]=c->r[28]+0x0000002Cu; // 80106E2C
  c->r[4]=c->r[1]+0x00000034u; // 80106E30
  c->r[5]=c->r[1]+0x00000028u; // 80106E34
  c->lr=0x80106E3Cu; f_80296A4C(c); // 80106E38
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106E3C
  c->r[3]=0u+0x80550000u; // 80106E40
  {uint32_t ea=c->r[2]+0xFFFFAF20u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106E44
  c->r[0]=0u+0x00000000u; // 80106E48
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80106E4C
  c->r[3]=c->r[3]+0x00003D60u; // 80106E50
  c->r[31]=R32(c->r[1]+0x00000028u); // 80106E54
  c->r[4]=c->r[1]+0x0000001Cu; // 80106E58
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80106E5C
  c->r[5]=c->r[1]+0x00000010u; // 80106E60
  c->r[28]=R32(c->r[1]+0x00000034u); // 80106E64
  c->r[7]=c->r[1]+0x00000040u; // 80106E68
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80106E6C
  c->r[8]=c->r[1]+0x00000080u; // 80106E70
  c->r[29]=R32(c->r[1]+0x00000038u); // 80106E74
  c->r[6]=0u+0x00000000u; // 80106E78
  c->r[30]=R32(c->r[1]+0x0000003Cu); // 80106E7C
  c->r[9]=0u+0x00000000u; // 80106E80
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 80106E84
  c->r[10]=0u+0x00000000u; // 80106E88
  c->r[11]=R32(c->r[1]+0x00000030u); // 80106E8C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80106E90
  W32(c->r[1]+0x00000014u,c->r[29]); // 80106E94
  W32(c->r[1]+0x00000018u,c->r[30]); // 80106E98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80106E9C
  W32(c->r[1]+0x00000020u,c->r[12]); // 80106EA0
  W32(c->r[1]+0x00000024u,c->r[11]); // 80106EA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 80106EA8
  c->lr=0x80106EB0u; f_801D5A00(c); // 80106EAC
  c->r[0]=cntlz(c->r[3]); // 80106EB0
  c->r[31]=R32(c->r[1]+0x000000CCu); // 80106EB4
  c->r[30]=R32(c->r[1]+0x000000C8u); // 80106EB8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80106EBC
  c->r[29]=R32(c->r[1]+0x000000C4u); // 80106EC0
  c->r[28]=R32(c->r[1]+0x000000C0u); // 80106EC4
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80106EC8
  c->lr=c->r[0]; // 80106ECC
  c->r[1]=c->r[1]+0x000000D0u; // 80106ED0
  return; // 80106ED4
}

// fn_80106ED8
void f_80106ED8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106ED8
  c->r[0]=c->lr; // 80106EDC
  c->r[3]=0u+0x80620000u; // 80106EE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106EE4
  c->r[3]=c->r[3]+0x000079C0u; // 80106EE8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106EEC
  c->lr=0x80106EF4u; f_8002C1B0(c); // 80106EF0
  {uint32_t ea=c->r[2]+0xFFFFAF54u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106EF4
  fcmp(c,0,c->f[1],c->f[0]); // 80106EF8
  c->r[3]=c->cr; // 80106EFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106F00
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 80106F04
  c->lr=c->r[0]; // 80106F08
  c->r[1]=c->r[1]+0x00000010u; // 80106F0C
  return; // 80106F10
}

// fn_80106F14
void f_80106F14(Ctx* __restrict c) {
  c->r[3]=0u+0x80620000u; // 80106F14
  {uint32_t ea=c->r[2]+0xFFFFAF5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80106F18
  c->r[3]=c->r[3]+0x000079C0u; // 80106F1C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106F20
  fcmp(c,0,c->f[1],c->f[0]); // 80106F24
  c->r[3]=c->cr; // 80106F28
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 80106F2C
  return; // 80106F30
}

// fn_80106F34
void f_80106F34(Ctx* __restrict c) {
  c->r[3]=0u+0x805D0000u; // 80106F34
  {uint32_t ea=c->r[2]+0xFFFFAF60u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106F38
  c->r[3]=c->r[3]+0x00003F6Cu; // 80106F3C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80106F40
  fcmp(c,0,c->f[1],c->f[0]); // 80106F44
  c->r[3]=c->cr; // 80106F48
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 80106F4C
  return; // 80106F50
}

// fn_80106F54
void f_80106F54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106F54
  c->r[0]=c->lr; // 80106F58
  c->r[7]=0u+0x803E0000u; // 80106F5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106F60
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80106F64
  c->r[7]=c->r[7]+0x000002D0u; // 80106F68
  c->r[4]=c->r[5]|c->r[5]; // 80106F6C
  c->r[5]=c->r[6]|c->r[6]; // 80106F70
  c->r[12]=c->r[7]+c->r[0]; // 80106F74
  c->lr=0x80106F7Cu; f_802BA00C(c); // 80106F78
  c->r[0]=c->r[0]|0x00000000u; // 80106F7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106F80
  c->lr=c->r[0]; // 80106F84
  c->r[1]=c->r[1]+0x00000010u; // 80106F88
  return; // 80106F8C
}

// fn_80106F90
void f_80106F90(Ctx* __restrict c) {
  return; // 80106F90
}

// fn_80106F94
void f_80106F94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106F94
  c->r[0]=c->lr; // 80106F98
  c->r[3]=0u+0x80550000u; // 80106F9C
  c->r[4]=0u+0x00000003u; // 80106FA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106FA4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80106FA8
  c->lr=0x80106FB0u; f_8019C920(c); // 80106FAC
  c->r[0]=0u+0x00000000u; // 80106FB0
  W8(c->r[3]+0x0000006Fu,c->r[0]); // 80106FB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106FB8
  c->lr=c->r[0]; // 80106FBC
  c->r[1]=c->r[1]+0x00000010u; // 80106FC0
  return; // 80106FC4
}

// fn_80106FC8
void f_80106FC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106FC8
  c->r[0]=c->lr; // 80106FCC
  c->r[3]=0u+0x80550000u; // 80106FD0
  c->r[4]=0u+0x00000003u; // 80106FD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106FD8
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80106FDC
  c->lr=0x80106FE4u; f_8019C920(c); // 80106FE0
  c->r[0]=0u+0x00000001u; // 80106FE4
  W8(c->r[3]+0x0000006Fu,c->r[0]); // 80106FE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106FEC
  c->lr=c->r[0]; // 80106FF0
  c->r[1]=c->r[1]+0x00000010u; // 80106FF4
  return; // 80106FF8
}

// fn_80106FFC
void f_80106FFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106FFC
  c->r[0]=c->lr; // 80107000
  cmps(c,0,(int32_t)c->r[3],0); // 80107004
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107008
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010700C
  c->r[31]=c->r[4]|c->r[4]; // 80107010
  W32(c->r[1]+0x00000008u,c->r[30]); // 80107014
  c->r[30]=c->r[3]|c->r[3]; // 80107018
  if (crb(c,2)) { goto L_80107038; } // 8010701C
  c->r[4]=0u+0x00000000u; // 80107020
  c->lr=0x80107028u; f_80103A70(c); // 80107024
  cmps(c,0,(int32_t)c->r[31],0); // 80107028
  if (!crb(c,1)) { goto L_80107038; } // 8010702C
  c->r[3]=c->r[30]|c->r[30]; // 80107030
  c->lr=0x80107038u; f_800C69B8(c); // 80107034
L_80107038:;
  c->r[3]=c->r[30]|c->r[30]; // 80107038
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010703C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80107040
  c->r[0]=R32(c->r[1]+0x00000014u); // 80107044
  c->lr=c->r[0]; // 80107048
  c->r[1]=c->r[1]+0x00000010u; // 8010704C
  return; // 80107050
}

// fn_80107054
void f_80107054(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 80107054
  c->r[3]=c->r[3]+0xFFFFC270u; // 80107058
  return; // 8010705C
}

// fn_80107060
void f_80107060(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 80107060
  c->r[3]=c->r[3]+0xFFFFCA3Cu; // 80107064
  return; // 80107068
}

// fn_8010706C
void f_8010706C(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 8010706C
  c->r[3]=c->r[3]+0xFFFFCB68u; // 80107070
  return; // 80107074
}

// fn_80107078
void f_80107078(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 80107078
  c->r[3]=c->r[3]+0xFFFFCB5Cu; // 8010707C
  return; // 80107080
}

// fn_80107084
void f_80107084(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF87D8u; // 80107084
  return; // 80107088
}

// fn_8010708C
void f_8010708C(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF87DCu; // 8010708C
  return; // 80107090
}

// fn_80107094
void f_80107094(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 80107094
  c->r[3]=c->r[3]+0xFFFFCC18u; // 80107098
  return; // 8010709C
}

// fn_801070A0
void f_801070A0(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 801070A0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801070A4
  c->r[3]=c->r[3]+0xFFFFFD50u; // 801070A8
  c->r[3]=R32(c->r[3]+c->r[0]); // 801070AC
  return; // 801070B0
}

// fn_801070B4
void f_801070B4(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 801070B4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801070B8
  c->r[3]=c->r[3]+0x00000200u; // 801070BC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801070C0
  return; // 801070C4
}

// fn_801070C8
void f_801070C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801070C8
  c->r[0]=c->lr; // 801070CC
  W32(c->r[1]+0x00000114u,c->r[0]); // 801070D0
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801070D4
  W32(c->r[1]+0x00000108u,c->r[30]); // 801070D8
  W32(c->r[1]+0x00000104u,c->r[29]); // 801070DC
  W32(c->r[1]+0x00000100u,c->r[28]); // 801070E0
  c->r[28]=c->r[5]|c->r[5]; // 801070E4
  c->r[0]=R8(c->r[5]+0x00000003u); // 801070E8
  cmps(c,0,(int32_t)c->r[0],3); // 801070EC
  if (crb(c,2)) { goto L_80107228; } // 801070F0
  if (!crb(c,0)) { goto L_8010738C; } // 801070F4
  cmps(c,0,(int32_t)c->r[0],0); // 801070F8
  if (crb(c,2)) { goto L_80107108; } // 801070FC
  if (!crb(c,0)) { goto L_801071C4; } // 80107100
  goto L_8010738C; // 80107104
L_80107108:;
  c->r[4]=0u+0x803A0000u; // 80107108
  c->r[31]=0u+0x80550000u; // 8010710C
  c->r[4]=c->r[4]+0xFFFFF5B4u; // 80107110
  c->r[5]=0u+0x00000000u; // 80107114
  c->r[3]=c->r[31]+0xFFFFC848u; // 80107118
  c->r[6]=0u+0x00000000u; // 8010711C
  c->r[4]=c->r[4]+0x00000010u; // 80107120
  c->lr=0x80107128u; f_8018D3E4(c); // 80107124
  c->r[5]=0u+0x80620000u; // 80107128
  c->r[30]=c->r[3]|c->r[3]; // 8010712C
  c->r[5]=c->r[5]+0x00007688u; // 80107130
  c->r[4]=0u+0x00000000u; // 80107134
  c->r[3]=R32(c->r[5]+0x00000014u); // 80107138
  c->r[5]=c->r[30]|c->r[30]; // 8010713C
  c->lr=0x80107144u; f_80038998(c); // 80107140
  cmps(c,0,(int32_t)c->r[30],-1); // 80107144
  if (crb(c,2)) { goto L_8010738C; } // 80107148
  {uint32_t ea=c->r[2]+0xFFFFAF68u; c->f[5]=c->ps1[5]=RF32(ea);} // 8010714C
  c->r[4]=c->r[30]|c->r[30]; // 80107150
  {uint32_t ea=c->r[2]+0xFFFFAF6Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80107154
  c->r[3]=c->r[31]+0xFFFFC848u; // 80107158
  {uint32_t ea=c->r[2]+0xFFFFAF70u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010715C
  c->r[5]=c->r[1]+0x0000002Cu; // 80107160
  {uint32_t ea=c->r[2]+0xFFFFAF74u; c->f[2]=c->ps1[2]=RF32(ea);} // 80107164
  c->r[6]=c->r[1]+0x00000020u; // 80107168
  {uint32_t ea=c->r[2]+0xFFFFAF78u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010716C
  {uint32_t ea=c->r[2]+0xFFFFAF7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80107170
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[5]);} // 80107174
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[4]);} // 80107178
  c->r[8]=R32(c->r[1]+0x0000008Cu); // 8010717C
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[3]);} // 80107180
  c->r[7]=R32(c->r[1]+0x00000090u); // 80107184
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 80107188
  c->r[0]=R32(c->r[1]+0x00000094u); // 8010718C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 80107190
  c->r[11]=R32(c->r[1]+0x00000080u); // 80107194
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80107198
  c->r[10]=R32(c->r[1]+0x00000084u); // 8010719C
  c->r[9]=R32(c->r[1]+0x00000088u); // 801071A0
  W32(c->r[1]+0x00000020u,c->r[11]); // 801071A4
  W32(c->r[1]+0x00000024u,c->r[10]); // 801071A8
  W32(c->r[1]+0x00000028u,c->r[9]); // 801071AC
  W32(c->r[1]+0x0000002Cu,c->r[8]); // 801071B0
  W32(c->r[1]+0x00000030u,c->r[7]); // 801071B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801071B8
  c->lr=0x801071C0u; f_8018DBD0(c); // 801071BC
  goto L_8010738C; // 801071C0
L_801071C4:;
  c->r[3]=0u+0x80620000u; // 801071C4
  c->r[4]=0u+0x00000000u; // 801071C8
  c->r[3]=c->r[3]+0x00007688u; // 801071CC
  c->r[3]=R32(c->r[3]+0x00000014u); // 801071D0
  c->lr=0x801071D8u; f_8003560C(c); // 801071D4
  cmps(c,0,(int32_t)c->r[3],-1); // 801071D8
  c->r[4]=c->r[3]|c->r[3]; // 801071DC
  if (crb(c,2)) { goto L_8010738C; } // 801071E0
  c->r[0]=R8(c->r[28]+0x00000003u); // 801071E4
  cmps(c,0,(int32_t)c->r[0],2); // 801071E8
  if (crb(c,2)) { goto L_80107214; } // 801071EC
  if (!crb(c,0)) { goto L_8010738C; } // 801071F0
  cmps(c,0,(int32_t)c->r[0],1); // 801071F4
  if (!crb(c,0)) { goto L_80107200; } // 801071F8
  goto L_8010738C; // 801071FC
L_80107200:;
  c->r[3]=0u+0x80550000u; // 80107200
  c->r[5]=0u+0x00000001u; // 80107204
  c->r[3]=c->r[3]+0xFFFFC848u; // 80107208
  c->lr=0x80107210u; f_8018E4F0(c); // 8010720C
  goto L_8010738C; // 80107210
L_80107214:;
  c->r[3]=0u+0x80550000u; // 80107214
  c->r[5]=0u+0x00000096u; // 80107218
  c->r[3]=c->r[3]+0xFFFFC848u; // 8010721C
  c->lr=0x80107224u; f_8018E4F0(c); // 80107220
  goto L_8010738C; // 80107224
L_80107228:;
  c->r[3]=0u+0x80550000u; // 80107228
  c->r[4]=0u+0x00000010u; // 8010722C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80107230
  c->lr=0x80107238u; f_8019C920(c); // 80107234
  cmps(c,0,(int32_t)c->r[3],0); // 80107238
  c->r[30]=c->r[3]|c->r[3]; // 8010723C
  if (crb(c,2)) { goto L_8010738C; } // 80107240
  c->r[4]=0u+0x803A0000u; // 80107244
  c->r[31]=0u+0x80550000u; // 80107248
  c->r[4]=c->r[4]+0xFFFFF5B4u; // 8010724C
  c->r[5]=0u+0x00000000u; // 80107250
  c->r[3]=c->r[31]+0xFFFFC848u; // 80107254
  c->r[6]=0u+0x00000000u; // 80107258
  c->r[4]=c->r[4]+0x00000014u; // 8010725C
  c->lr=0x80107264u; f_8018D3E4(c); // 80107260
  c->r[5]=0u+0x80620000u; // 80107264
  c->r[29]=c->r[3]|c->r[3]; // 80107268
  c->r[5]=c->r[5]+0x00007688u; // 8010726C
  c->r[4]=0u+0x00000000u; // 80107270
  c->r[3]=R32(c->r[5]+0x00000014u); // 80107274
  c->r[5]=c->r[29]|c->r[29]; // 80107278
  c->lr=0x80107280u; f_80038998(c); // 8010727C
  cmps(c,0,(int32_t)c->r[29],-1); // 80107280
  if (crb(c,2)) { goto L_8010738C; } // 80107284
  c->r[7]=0u+0x803A0000u; // 80107288
  {uint32_t ea=c->r[7]+0xFFFFF590u; c->r[6]=R32(ea); c->r[7]=ea;} // 8010728C
  c->r[3]=c->r[1]+0x00000074u; // 80107290
  c->r[4]=c->r[1]+0x00000050u; // 80107294
  c->r[5]=R32(c->r[7]+0x00000004u); // 80107298
  c->r[0]=R32(c->r[7]+0x00000008u); // 8010729C
  W32(c->r[1]+0x00000050u,c->r[6]); // 801072A0
  W32(c->r[1]+0x00000054u,c->r[5]); // 801072A4
  W32(c->r[1]+0x00000058u,c->r[0]); // 801072A8
  c->lr=0x801072B0u; f_800361A0(c); // 801072AC
  c->r[7]=0u+0x803A0000u; // 801072B0
  {uint32_t ea=c->r[7]+0xFFFFF59Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 801072B4
  c->r[3]=c->r[1]+0x00000068u; // 801072B8
  c->r[4]=c->r[1]+0x00000044u; // 801072BC
  c->r[5]=R32(c->r[7]+0x00000004u); // 801072C0
  c->r[0]=R32(c->r[7]+0x00000008u); // 801072C4
  W32(c->r[1]+0x00000044u,c->r[6]); // 801072C8
  W32(c->r[1]+0x00000048u,c->r[5]); // 801072CC
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801072D0
  c->lr=0x801072D8u; f_800361A0(c); // 801072D4
  c->r[3]=c->r[30]|c->r[30]; // 801072D8
  c->r[4]=0u+0x00000000u; // 801072DC
  c->lr=0x801072E4u; f_80039840(c); // 801072E0
  c->r[0]=R8(c->r[28]+0x00000004u); // 801072E4
  c->r[4]=c->r[13]+0xFFFF8850u; // 801072E8
  c->r[5]=c->r[1]+0x000000C8u; // 801072EC
  c->r[6]=0u+0x00000001u; // 801072F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801072F4
  c->r[4]=R32(c->r[4]+c->r[0]); // 801072F8
  c->lr=0x80107300u; f_80257018(c); // 801072FC
  c->r[4]=c->r[1]+0x00000074u; // 80107300
  c->r[3]=c->r[1]+0x000000C8u; // 80107304
  c->r[5]=c->r[4]|c->r[4]; // 80107308
  c->lr=0x80107310u; f_80296750(c); // 8010730C
  {uint32_t ea=c->r[2]+0xFFFFAF80u; c->f[1]=c->ps1[1]=RF32(ea);} // 80107310
  c->r[3]=c->r[1]+0x00000098u; // 80107314
  c->r[4]=0u+0x00000059u; // 80107318
  c->lr=0x80107320u; f_80295FBC(c); // 8010731C
  c->r[3]=c->r[1]+0x000000C8u; // 80107320
  c->r[4]=c->r[1]+0x00000098u; // 80107324
  c->r[5]=c->r[3]|c->r[3]; // 80107328
  c->lr=0x80107330u; f_80295B48(c); // 8010732C
  c->r[3]=c->r[1]+0x00000038u; // 80107330
  c->r[4]=c->r[1]+0x00000068u; // 80107334
  c->r[5]=c->r[1]+0x0000005Cu; // 80107338
  c->r[6]=c->r[1]+0x000000C8u; // 8010733C
  c->r[7]=0u+0x00000000u; // 80107340
  c->lr=0x80107348u; f_8002BE64(c); // 80107344
  c->r[11]=R32(c->r[1]+0x00000068u); // 80107348
  c->r[4]=c->r[29]|c->r[29]; // 8010734C
  c->r[10]=R32(c->r[1]+0x0000006Cu); // 80107350
  c->r[3]=c->r[31]+0xFFFFC848u; // 80107354
  c->r[9]=R32(c->r[1]+0x00000070u); // 80107358
  c->r[5]=c->r[1]+0x00000014u; // 8010735C
  c->r[8]=R32(c->r[1]+0x00000074u); // 80107360
  c->r[6]=c->r[1]+0x00000008u; // 80107364
  c->r[7]=R32(c->r[1]+0x00000078u); // 80107368
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 8010736C
  W32(c->r[1]+0x00000008u,c->r[11]); // 80107370
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 80107374
  W32(c->r[1]+0x00000010u,c->r[9]); // 80107378
  W32(c->r[1]+0x00000014u,c->r[8]); // 8010737C
  W32(c->r[1]+0x00000018u,c->r[7]); // 80107380
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80107384
  c->lr=0x8010738Cu; f_8018DBD0(c); // 80107388
L_8010738C:;
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 8010738C
  c->r[3]=0u+0x00000001u; // 80107390
  c->r[30]=R32(c->r[1]+0x00000108u); // 80107394
  c->r[29]=R32(c->r[1]+0x00000104u); // 80107398
  c->r[28]=R32(c->r[1]+0x00000100u); // 8010739C
  c->r[0]=R32(c->r[1]+0x00000114u); // 801073A0
  c->lr=c->r[0]; // 801073A4
  c->r[1]=c->r[1]+0x00000110u; // 801073A8
  return; // 801073AC
}

// fn_801073B0
void f_801073B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801073B0
  c->r[0]=c->lr; // 801073B4
  c->r[3]=0u+0x805D0000u; // 801073B8
  c->r[4]=0u+0x00000000u; // 801073BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801073C0
  c->r[3]=c->r[3]+0x000078B0u; // 801073C4
  c->lr=0x801073CCu; f_802344C4(c); // 801073C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801073CC
  c->r[3]=0u+0x00000001u; // 801073D0
  c->lr=c->r[0]; // 801073D4
  c->r[1]=c->r[1]+0x00000010u; // 801073D8
  return; // 801073DC
}

// fn_801073E0
void f_801073E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801073E0
  c->r[0]=c->lr; // 801073E4
  {uint32_t ea=c->r[2]+0xFFFFAF84u; c->f[1]=c->ps1[1]=RF32(ea);} // 801073E8
  W32(c->r[1]+0x00000144u,c->r[0]); // 801073EC
  {uint32_t ea=c->r[2]+0xFFFFAF88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801073F0
  W32(c->r[1]+0x0000013Cu,c->r[31]); // 801073F4
  W32(c->r[1]+0x00000138u,c->r[30]); // 801073F8
  W32(c->r[1]+0x00000134u,c->r[29]); // 801073FC
  W32(c->r[1]+0x00000130u,c->r[28]); // 80107400
  c->r[0]=R8(c->r[5]+0x00000003u); // 80107404
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[1]);} // 80107408
  cmps(c,0,(int32_t)c->r[0],1); // 8010740C
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[1]);} // 80107410
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[1]);} // 80107414
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 80107418
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 8010741C
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 80107420
  if (crb(c,2)) { goto L_80107818; } // 80107424
  if (!crb(c,0)) { goto L_80107438; } // 80107428
  cmps(c,0,(int32_t)c->r[0],0); // 8010742C
  if (!crb(c,0)) { goto L_80107444; } // 80107430
  goto L_80107994; // 80107434
L_80107438:;
  cmps(c,0,(int32_t)c->r[0],3); // 80107438
  if (!crb(c,0)) { goto L_80107994; } // 8010743C
  goto L_801078D4; // 80107440
L_80107444:;
  c->r[4]=0u+0x803A0000u; // 80107444
  c->r[29]=0u+0x80550000u; // 80107448
  c->r[4]=c->r[4]+0xFFFFF5B4u; // 8010744C
  c->r[5]=0u+0x00000000u; // 80107450
  c->r[3]=c->r[29]+0xFFFFC848u; // 80107454
  c->r[6]=0u+0x00000000u; // 80107458
  c->r[4]=c->r[4]+0x00000018u; // 8010745C
  c->lr=0x80107464u; f_8018D3E4(c); // 80107460
  c->r[0]=c->r[3]+0x00010000u; // 80107464
  c->r[28]=c->r[3]|c->r[3]; // 80107468
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8010746C
  if (crb(c,2)) { goto L_801074EC; } // 80107470
  {uint32_t ea=c->r[2]+0xFFFFAF8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80107474
  c->r[3]=c->r[29]+0xFFFFC848u; // 80107478
  {uint32_t ea=c->r[2]+0xFFFFAF90u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010747C
  c->r[4]=c->r[28]|c->r[28]; // 80107480
  {uint32_t ea=c->r[2]+0xFFFFAF94u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107484
  c->r[5]=c->r[1]+0x000000F8u; // 80107488
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[2]);} // 8010748C
  c->r[6]=c->r[1]+0x000000ECu; // 80107490
  c->r[31]=R32(c->r[1]+0x00000104u); // 80107494
  c->r[7]=c->r[1]+0x000000E0u; // 80107498
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[1]);} // 8010749C
  c->r[30]=R32(c->r[1]+0x00000108u); // 801074A0
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 801074A4
  c->r[29]=R32(c->r[1]+0x0000010Cu); // 801074A8
  c->r[12]=R32(c->r[1]+0x00000110u); // 801074AC
  c->r[11]=R32(c->r[1]+0x00000114u); // 801074B0
  c->r[10]=R32(c->r[1]+0x00000118u); // 801074B4
  c->r[9]=R32(c->r[1]+0x0000011Cu); // 801074B8
  c->r[8]=R32(c->r[1]+0x00000120u); // 801074BC
  c->r[0]=R32(c->r[1]+0x00000124u); // 801074C0
  W32(c->r[1]+0x000000E0u,c->r[31]); // 801074C4
  W32(c->r[1]+0x000000E4u,c->r[30]); // 801074C8
  W32(c->r[1]+0x000000E8u,c->r[29]); // 801074CC
  W32(c->r[1]+0x000000ECu,c->r[12]); // 801074D0
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801074D4
  W32(c->r[1]+0x000000F4u,c->r[10]); // 801074D8
  W32(c->r[1]+0x000000F8u,c->r[9]); // 801074DC
  W32(c->r[1]+0x000000FCu,c->r[8]); // 801074E0
  W32(c->r[1]+0x00000100u,c->r[0]); // 801074E4
  c->lr=0x801074ECu; f_8018DD04(c); // 801074E8
L_801074EC:;
  c->r[3]=0u+0x80620000u; // 801074EC
  c->r[5]=c->r[28]|c->r[28]; // 801074F0
  c->r[3]=c->r[3]+0x00007688u; // 801074F4
  c->r[4]=0u+0x0000001Au; // 801074F8
  c->r[3]=R32(c->r[3]+0x00000014u); // 801074FC
  c->lr=0x80107504u; f_80038998(c); // 80107500
  c->r[4]=0u+0x803A0000u; // 80107504
  c->r[29]=0u+0x80550000u; // 80107508
  c->r[4]=c->r[4]+0xFFFFF5B4u; // 8010750C
  c->r[5]=0u+0x00000000u; // 80107510
  c->r[3]=c->r[29]+0xFFFFC848u; // 80107514
  c->r[6]=0u+0x00000000u; // 80107518
  c->r[4]=c->r[4]+0x00000018u; // 8010751C
  c->lr=0x80107524u; f_8018D3E4(c); // 80107520
  c->r[0]=c->r[3]+0x00010000u; // 80107524
  c->r[28]=c->r[3]|c->r[3]; // 80107528
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8010752C
  if (crb(c,2)) { goto L_801075AC; } // 80107530
  {uint32_t ea=c->r[2]+0xFFFFAF98u; c->f[2]=c->ps1[2]=RF32(ea);} // 80107534
  c->r[3]=c->r[29]+0xFFFFC848u; // 80107538
  {uint32_t ea=c->r[2]+0xFFFFAF9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010753C
  c->r[4]=c->r[28]|c->r[28]; // 80107540
  {uint32_t ea=c->r[2]+0xFFFFAFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107544
  c->r[5]=c->r[1]+0x000000D4u; // 80107548
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[2]);} // 8010754C
  c->r[6]=c->r[1]+0x000000C8u; // 80107550
  c->r[31]=R32(c->r[1]+0x00000104u); // 80107554
  c->r[7]=c->r[1]+0x000000BCu; // 80107558
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[1]);} // 8010755C
  c->r[30]=R32(c->r[1]+0x00000108u); // 80107560
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 80107564
  c->r[29]=R32(c->r[1]+0x0000010Cu); // 80107568
  c->r[12]=R32(c->r[1]+0x00000110u); // 8010756C
  c->r[11]=R32(c->r[1]+0x00000114u); // 80107570
  c->r[10]=R32(c->r[1]+0x00000118u); // 80107574
  c->r[9]=R32(c->r[1]+0x0000011Cu); // 80107578
  c->r[8]=R32(c->r[1]+0x00000120u); // 8010757C
  c->r[0]=R32(c->r[1]+0x00000124u); // 80107580
  W32(c->r[1]+0x000000BCu,c->r[31]); // 80107584
  W32(c->r[1]+0x000000C0u,c->r[30]); // 80107588
  W32(c->r[1]+0x000000C4u,c->r[29]); // 8010758C
  W32(c->r[1]+0x000000C8u,c->r[12]); // 80107590
  W32(c->r[1]+0x000000CCu,c->r[11]); // 80107594
  W32(c->r[1]+0x000000D0u,c->r[10]); // 80107598
  W32(c->r[1]+0x000000D4u,c->r[9]); // 8010759C
  W32(c->r[1]+0x000000D8u,c->r[8]); // 801075A0
  W32(c->r[1]+0x000000DCu,c->r[0]); // 801075A4
  c->lr=0x801075ACu; f_8018DD04(c); // 801075A8
L_801075AC:;
  c->r[3]=0u+0x80620000u; // 801075AC
  c->r[5]=c->r[28]|c->r[28]; // 801075B0
  c->r[3]=c->r[3]+0x00007688u; // 801075B4
  c->r[4]=0u+0x0000001Bu; // 801075B8
  c->r[3]=R32(c->r[3]+0x00000014u); // 801075BC
  c->lr=0x801075C4u; f_80038998(c); // 801075C0
  c->r[4]=0u+0x803A0000u; // 801075C4
  c->r[29]=0u+0x80550000u; // 801075C8
  c->r[4]=c->r[4]+0xFFFFF5B4u; // 801075CC
  c->r[5]=0u+0x00000000u; // 801075D0
  c->r[3]=c->r[29]+0xFFFFC848u; // 801075D4
  c->r[6]=0u+0x00000000u; // 801075D8
  c->r[4]=c->r[4]+0x00000018u; // 801075DC
  c->lr=0x801075E4u; f_8018D3E4(c); // 801075E0
  c->r[0]=c->r[3]+0x00010000u; // 801075E4
  c->r[28]=c->r[3]|c->r[3]; // 801075E8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801075EC
  if (crb(c,2)) { goto L_8010766C; } // 801075F0
  {uint32_t ea=c->r[2]+0xFFFFAFA4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801075F4
  c->r[3]=c->r[29]+0xFFFFC848u; // 801075F8
  {uint32_t ea=c->r[2]+0xFFFFAFA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801075FC
  c->r[4]=c->r[28]|c->r[28]; // 80107600
  {uint32_t ea=c->r[2]+0xFFFFAFACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80107604
  c->r[5]=c->r[1]+0x000000B0u; // 80107608
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[2]);} // 8010760C
  c->r[6]=c->r[1]+0x000000A4u; // 80107610
  c->r[31]=R32(c->r[1]+0x00000104u); // 80107614
  c->r[7]=c->r[1]+0x00000098u; // 80107618
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[1]);} // 8010761C
  c->r[30]=R32(c->r[1]+0x00000108u); // 80107620
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 80107624
  c->r[29]=R32(c->r[1]+0x0000010Cu); // 80107628
  c->r[12]=R32(c->r[1]+0x00000110u); // 8010762C
  c->r[11]=R32(c->r[1]+0x00000114u); // 80107630
  c->r[10]=R32(c->r[1]+0x00000118u); // 80107634
  c->r[9]=R32(c->r[1]+0x0000011Cu); // 80107638
  c->r[8]=R32(c->r[1]+0x00000120u); // 8010763C
  c->r[0]=R32(c->r[1]+0x00000124u); // 80107640
  W32(c->r[1]+0x00000098u,c->r[31]); // 80107644
  W32(c->r[1]+0x0000009Cu,c->r[30]); // 80107648
  W32(c->r[1]+0x000000A0u,c->r[29]); // 8010764C
  W32(c->r[1]+0x000000A4u,c->r[12]); // 80107650
  W32(c->r[1]+0x000000A8u,c->r[11]); // 80107654
  W32(c->r[1]+0x000000ACu,c->r[10]); // 80107658
  W32(c->r[1]+0x000000B0u,c->r[9]); // 8010765C
  W32(c->r[1]+0x000000B4u,c->r[8]); // 80107660
  W32(c->r[1]+0x000000B8u,c->r[0]); // 80107664
  c->lr=0x8010766Cu; f_8018DD04(c); // 80107668
L_8010766C:;
  c->r[3]=0u+0x80620000u; // 8010766C
  c->r[5]=c->r[28]|c->r[28]; // 80107670
  c->r[3]=c->r[3]+0x00007688u; // 80107674
  c->r[4]=0u+0x0000001Cu; // 80107678
  c->r[3]=R32(c->r[3]+0x00000014u); // 8010767C
  c->lr=0x80107684u; f_80038998(c); // 80107680
  c->r[4]=0u+0x803A0000u; // 80107684
  c->r[29]=0u+0x80550000u; // 80107688
  c->r[4]=c->r[4]+0xFFFFF5B4u; // 8010768C
  c->r[5]=0u+0x00000000u; // 80107690
  c->r[3]=c->r[29]+0xFFFFC848u; // 80107694
  c->r[6]=0u+0x00000000u; // 80107698
  c->r[4]=c->r[4]+0x00000018u; // 8010769C
  c->lr=0x801076A4u; f_8018D3E4(c); // 801076A0
  c->r[0]=c->r[3]+0x00010000u; // 801076A4
  c->r[28]=c->r[3]|c->r[3]; // 801076A8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801076AC
  if (crb(c,2)) { goto L_80107734; } // 801076B0
  {uint32_t ea=c->r[2]+0xFFFFAFB0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801076B4
  c->r[3]=c->r[29]+0xFFFFC848u; // 801076B8
  {uint32_t ea=c->r[2]+0xFFFFAFB4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801076BC
  c->r[4]=c->r[28]|c->r[28]; // 801076C0
  {uint32_t ea=c->r[2]+0xFFFFAFB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801076C4
  c->r[5]=c->r[1]+0x0000008Cu; // 801076C8
  {uint32_t ea=c->r[2]+0xFFFFAFACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801076CC
  c->r[6]=c->r[1]+0x00000080u; // 801076D0
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[3]);} // 801076D4
  c->r[7]=c->r[1]+0x00000074u; // 801076D8
  c->r[31]=R32(c->r[1]+0x00000104u); // 801076DC
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[2]);} // 801076E0
  c->r[30]=R32(c->r[1]+0x00000108u); // 801076E4
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[1]);} // 801076E8
  c->r[29]=R32(c->r[1]+0x0000010Cu); // 801076EC
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 801076F0
  c->r[12]=R32(c->r[1]+0x00000110u); // 801076F4
  c->r[11]=R32(c->r[1]+0x00000114u); // 801076F8
  c->r[10]=R32(c->r[1]+0x00000118u); // 801076FC
  c->r[9]=R32(c->r[1]+0x0000011Cu); // 80107700
  c->r[8]=R32(c->r[1]+0x00000120u); // 80107704
  c->r[0]=R32(c->r[1]+0x00000124u); // 80107708
  W32(c->r[1]+0x00000074u,c->r[31]); // 8010770C
  W32(c->r[1]+0x00000078u,c->r[30]); // 80107710
  W32(c->r[1]+0x0000007Cu,c->r[29]); // 80107714
  W32(c->r[1]+0x00000080u,c->r[12]); // 80107718
  W32(c->r[1]+0x00000084u,c->r[11]); // 8010771C
  W32(c->r[1]+0x00000088u,c->r[10]); // 80107720
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 80107724
  W32(c->r[1]+0x00000090u,c->r[8]); // 80107728
  W32(c->r[1]+0x00000094u,c->r[0]); // 8010772C
  c->lr=0x80107734u; f_8018DD04(c); // 80107730
L_80107734:;
  c->r[3]=0u+0x80620000u; // 80107734
  c->r[5]=c->r[28]|c->r[28]; // 80107738
  c->r[3]=c->r[3]+0x00007688u; // 8010773C
  c->r[4]=0u+0x0000001Du; // 80107740
  c->r[3]=R32(c->r[3]+0x00000014u); // 80107744
  c->lr=0x8010774Cu; f_80038998(c); // 80107748
  c->r[4]=0u+0x803A0000u; // 8010774C
  c->r[29]=0u+0x80550000u; // 80107750
  c->r[4]=c->r[4]+0xFFFFF5B4u; // 80107754
  c->r[5]=0u+0x00000000u; // 80107758
  c->r[3]=c->r[29]+0xFFFFC848u; // 8010775C
  c->r[6]=0u+0x00000000u; // 80107760
  c->r[4]=c->r[4]+0x00000018u; // 80107764
  c->lr=0x8010776Cu; f_8018D3E4(c); // 80107768
  c->r[0]=c->r[3]+0x00010000u; // 8010776C
  c->r[28]=c->r[3]|c->r[3]; // 80107770
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80107774
  if (crb(c,2)) { goto L_801077FC; } // 80107778
  {uint32_t ea=c->r[2]+0xFFFFAFBCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8010777C
  c->r[3]=c->r[29]+0xFFFFC848u; // 80107780
  {uint32_t ea=c->r[2]+0xFFFFAFC0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80107784
  c->r[4]=c->r[28]|c->r[28]; // 80107788
  {uint32_t ea=c->r[2]+0xFFFFAFA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010778C
  c->r[5]=c->r[1]+0x00000068u; // 80107790
  {uint32_t ea=c->r[2]+0xFFFFAF84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107794
  c->r[6]=c->r[1]+0x0000005Cu; // 80107798
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[3]);} // 8010779C
  c->r[7]=c->r[1]+0x00000050u; // 801077A0
  c->r[31]=R32(c->r[1]+0x00000104u); // 801077A4
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[2]);} // 801077A8
  c->r[30]=R32(c->r[1]+0x00000108u); // 801077AC
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[1]);} // 801077B0
  c->r[29]=R32(c->r[1]+0x0000010Cu); // 801077B4
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 801077B8
  c->r[12]=R32(c->r[1]+0x00000110u); // 801077BC
  c->r[11]=R32(c->r[1]+0x00000114u); // 801077C0
  c->r[10]=R32(c->r[1]+0x00000118u); // 801077C4
  c->r[9]=R32(c->r[1]+0x0000011Cu); // 801077C8
  c->r[8]=R32(c->r[1]+0x00000120u); // 801077CC
  c->r[0]=R32(c->r[1]+0x00000124u); // 801077D0
  W32(c->r[1]+0x00000050u,c->r[31]); // 801077D4
  W32(c->r[1]+0x00000054u,c->r[30]); // 801077D8
  W32(c->r[1]+0x00000058u,c->r[29]); // 801077DC
  W32(c->r[1]+0x0000005Cu,c->r[12]); // 801077E0
  W32(c->r[1]+0x00000060u,c->r[11]); // 801077E4
  W32(c->r[1]+0x00000064u,c->r[10]); // 801077E8
  W32(c->r[1]+0x00000068u,c->r[9]); // 801077EC
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 801077F0
  W32(c->r[1]+0x00000070u,c->r[0]); // 801077F4
  c->lr=0x801077FCu; f_8018DD04(c); // 801077F8
L_801077FC:;
  c->r[3]=0u+0x80620000u; // 801077FC
  c->r[5]=c->r[28]|c->r[28]; // 80107800
  c->r[3]=c->r[3]+0x00007688u; // 80107804
  c->r[4]=0u+0x0000001Eu; // 80107808
  c->r[3]=R32(c->r[3]+0x00000014u); // 8010780C
  c->lr=0x80107814u; f_80038998(c); // 80107810
  goto L_80107994; // 80107814
L_80107818:;
  c->r[4]=0u+0x803A0000u; // 80107818
  c->r[29]=0u+0x80550000u; // 8010781C
  c->r[4]=c->r[4]+0xFFFFF5B4u; // 80107820
  c->r[5]=0u+0x00000000u; // 80107824
  c->r[3]=c->r[29]+0xFFFFC848u; // 80107828
  c->r[6]=0u+0x00000000u; // 8010782C
  c->r[4]=c->r[4]+0x0000001Cu; // 80107830
  c->lr=0x80107838u; f_8018D3E4(c); // 80107834
  c->r[0]=c->r[3]+0x00010000u; // 80107838
  c->r[28]=c->r[3]|c->r[3]; // 8010783C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80107840
  if (crb(c,2)) { goto L_801078B8; } // 80107844
  {uint32_t ea=c->r[2]+0xFFFFAF84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107848
  c->r[3]=c->r[29]+0xFFFFC848u; // 8010784C
  c->r[31]=R32(c->r[1]+0x00000104u); // 80107850
  c->r[4]=c->r[28]|c->r[28]; // 80107854
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 80107858
  c->r[5]=c->r[1]+0x00000044u; // 8010785C
  c->r[30]=R32(c->r[1]+0x00000108u); // 80107860
  c->r[6]=c->r[1]+0x00000038u; // 80107864
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[0]);} // 80107868
  c->r[7]=c->r[1]+0x0000002Cu; // 8010786C
  c->r[29]=R32(c->r[1]+0x0000010Cu); // 80107870
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 80107874
  c->r[12]=R32(c->r[1]+0x00000110u); // 80107878
  c->r[11]=R32(c->r[1]+0x00000114u); // 8010787C
  c->r[10]=R32(c->r[1]+0x00000118u); // 80107880
  c->r[9]=R32(c->r[1]+0x0000011Cu); // 80107884
  c->r[8]=R32(c->r[1]+0x00000120u); // 80107888
  c->r[0]=R32(c->r[1]+0x00000124u); // 8010788C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80107890
  W32(c->r[1]+0x00000030u,c->r[30]); // 80107894
  W32(c->r[1]+0x00000034u,c->r[29]); // 80107898
  W32(c->r[1]+0x00000038u,c->r[12]); // 8010789C
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 801078A0
  W32(c->r[1]+0x00000040u,c->r[10]); // 801078A4
  W32(c->r[1]+0x00000044u,c->r[9]); // 801078A8
  W32(c->r[1]+0x00000048u,c->r[8]); // 801078AC
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801078B0
  c->lr=0x801078B8u; f_8018DD04(c); // 801078B4
L_801078B8:;
  c->r[3]=0u+0x80620000u; // 801078B8
  c->r[5]=c->r[28]|c->r[28]; // 801078BC
  c->r[3]=c->r[3]+0x00007688u; // 801078C0
  c->r[4]=0u+0x00000000u; // 801078C4
  c->r[3]=R32(c->r[3]+0x00000014u); // 801078C8
  c->lr=0x801078D0u; f_80038998(c); // 801078CC
  goto L_80107994; // 801078D0
L_801078D4:;
  c->r[4]=0u+0x803A0000u; // 801078D4
  c->r[29]=0u+0x80550000u; // 801078D8
  c->r[4]=c->r[4]+0xFFFFF5B4u; // 801078DC
  c->r[5]=0u+0x00000000u; // 801078E0
  c->r[3]=c->r[29]+0xFFFFC848u; // 801078E4
  c->r[6]=0u+0x00000000u; // 801078E8
  c->r[4]=c->r[4]+0x00000020u; // 801078EC
  c->lr=0x801078F4u; f_8018D3E4(c); // 801078F0
  c->r[0]=c->r[3]+0x00010000u; // 801078F4
  c->r[28]=c->r[3]|c->r[3]; // 801078F8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801078FC
  if (crb(c,2)) { goto L_8010797C; } // 80107900
  {uint32_t ea=c->r[2]+0xFFFFAFC4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80107904
  c->r[3]=c->r[29]+0xFFFFC848u; // 80107908
  {uint32_t ea=c->r[2]+0xFFFFAFC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010790C
  c->r[4]=c->r[28]|c->r[28]; // 80107910
  {uint32_t ea=c->r[2]+0xFFFFAF88u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107914
  c->r[5]=c->r[1]+0x00000020u; // 80107918
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[2]);} // 8010791C
  c->r[6]=c->r[1]+0x00000014u; // 80107920
  c->r[29]=R32(c->r[1]+0x00000104u); // 80107924
  c->r[7]=c->r[1]+0x00000008u; // 80107928
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[1]);} // 8010792C
  c->r[30]=R32(c->r[1]+0x00000108u); // 80107930
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 80107934
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 80107938
  c->r[12]=R32(c->r[1]+0x00000110u); // 8010793C
  c->r[11]=R32(c->r[1]+0x00000114u); // 80107940
  c->r[10]=R32(c->r[1]+0x00000118u); // 80107944
  c->r[9]=R32(c->r[1]+0x0000011Cu); // 80107948
  c->r[8]=R32(c->r[1]+0x00000120u); // 8010794C
  c->r[0]=R32(c->r[1]+0x00000124u); // 80107950
  W32(c->r[1]+0x00000008u,c->r[29]); // 80107954
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 80107958
  W32(c->r[1]+0x00000010u,c->r[31]); // 8010795C
  W32(c->r[1]+0x00000014u,c->r[12]); // 80107960
  W32(c->r[1]+0x00000018u,c->r[11]); // 80107964
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 80107968
  W32(c->r[1]+0x00000020u,c->r[9]); // 8010796C
  W32(c->r[1]+0x00000024u,c->r[8]); // 80107970
  W32(c->r[1]+0x00000028u,c->r[0]); // 80107974
  c->lr=0x8010797Cu; f_8018DD04(c); // 80107978
L_8010797C:;
  c->r[3]=0u+0x80620000u; // 8010797C
  c->r[5]=c->r[28]|c->r[28]; // 80107980
  c->r[3]=c->r[3]+0x00007688u; // 80107984
  c->r[4]=0u+0x0000001Fu; // 80107988
  c->r[3]=R32(c->r[3]+0x00000014u); // 8010798C
  c->lr=0x80107994u; f_80038998(c); // 80107990
L_80107994:;
  c->r[31]=R32(c->r[1]+0x0000013Cu); // 80107994
  c->r[3]=0u+0x00000001u; // 80107998
  c->r[30]=R32(c->r[1]+0x00000138u); // 8010799C
  c->r[29]=R32(c->r[1]+0x00000134u); // 801079A0
  c->r[28]=R32(c->r[1]+0x00000130u); // 801079A4
  c->r[0]=R32(c->r[1]+0x00000144u); // 801079A8
  c->lr=c->r[0]; // 801079AC
  c->r[1]=c->r[1]+0x00000140u; // 801079B0
  return; // 801079B4
}

// fn_801079B8
void f_801079B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801079B8
  c->r[0]=c->lr; // 801079BC
  c->r[3]=0u+0x80620000u; // 801079C0
  c->r[4]=0u+0x00000022u; // 801079C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801079C8
  c->r[3]=c->r[3]+0x00007688u; // 801079CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801079D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801079D4
  c->r[3]=R32(c->r[3]+0x00000014u); // 801079D8
  c->lr=0x801079E0u; f_8003560C(c); // 801079DC
  c->r[4]=0u+0x80550000u; // 801079E0
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 801079E4
  c->r[3]=c->r[4]+0xFFFFCE54u; // 801079E8
  c->r[4]=0u+0x00000000u; // 801079EC
  c->lr=0x801079F4u; f_8019C920(c); // 801079F0
  cmps(c,0,(int32_t)c->r[3],0); // 801079F4
  c->r[30]=c->r[3]|c->r[3]; // 801079F8
  if (crb(c,2)) { goto L_80107AE0; } // 801079FC
  c->r[4]=c->r[1]+0x00000008u; // 80107A00
  c->r[5]=0u+0x00000000u; // 80107A04
  c->lr=0x80107A0Cu; f_8007C6C8(c); // 80107A08
  cmps(c,0,(int32_t)c->r[31],1); // 80107A0C
  if (crb(c,2)) { goto L_80107A68; } // 80107A10
  if (!crb(c,0)) { goto L_80107A24; } // 80107A14
  cmps(c,0,(int32_t)c->r[31],0); // 80107A18
  if (!crb(c,0)) { goto L_80107A30; } // 80107A1C
  goto L_80107AC8; // 80107A20
L_80107A24:;
  cmps(c,0,(int32_t)c->r[31],3); // 80107A24
  if (!crb(c,0)) { goto L_80107AC8; } // 80107A28
  goto L_80107AA0; // 80107A2C
L_80107A30:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80107A30
  {uint32_t ea=c->r[2]+0xFFFFAFA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107A34
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80107A38
  fcmp(c,0,c->f[1],c->f[0]); // 80107A3C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80107A40
  if (!crb(c,2)) { goto L_80107AC8; } // 80107A44
  c->r[3]=c->r[30]|c->r[30]; // 80107A48
  c->r[4]=0u+0x00000002u; // 80107A4C
  c->r[5]=0u+0x00000009u; // 80107A50
  c->r[6]=0u+0x00000001u; // 80107A54
  c->r[7]=0u+0x00000001u; // 80107A58
  c->lr=0x80107A60u; f_8017900C(c); // 80107A5C
  c->r[31]=c->r[31]+0x00000001u; // 80107A60
  goto L_80107AC8; // 80107A64
L_80107A68:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80107A68
  {uint32_t ea=c->r[2]+0xFFFFAFCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80107A6C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80107A70
  fcmp(c,0,c->f[1],c->f[0]); // 80107A74
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80107A78
  if (!crb(c,2)) { goto L_80107AC8; } // 80107A7C
  c->r[3]=c->r[30]|c->r[30]; // 80107A80
  c->r[4]=0u+0x00000002u; // 80107A84
  c->r[5]=0u+0x00000009u; // 80107A88
  c->r[6]=0u+0x00000001u; // 80107A8C
  c->r[7]=0u+0x00000001u; // 80107A90
  c->lr=0x80107A98u; f_8017900C(c); // 80107A94
  c->r[31]=c->r[31]+0x00000001u; // 80107A98
  goto L_80107AC8; // 80107A9C
L_80107AA0:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80107AA0
  {uint32_t ea=c->r[2]+0xFFFFAF84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107AA4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80107AA8
  fcmp(c,0,c->f[1],c->f[0]); // 80107AAC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80107AB0
  if (!crb(c,2)) { goto L_80107AC8; } // 80107AB4
  {uint32_t ea=c->r[2]+0xFFFFAFD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107AB8
  fcmp(c,0,c->f[1],c->f[0]); // 80107ABC
  if (!crb(c,0)) { goto L_80107AC8; } // 80107AC0
  c->r[31]=0u+0x00000000u; // 80107AC4
L_80107AC8:;
  c->r[3]=0u+0x80620000u; // 80107AC8
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 80107ACC
  c->r[3]=c->r[3]+0x00007688u; // 80107AD0
  c->r[4]=0u+0x00000022u; // 80107AD4
  c->r[3]=R32(c->r[3]+0x00000014u); // 80107AD8
  c->lr=0x80107AE0u; f_80038998(c); // 80107ADC
L_80107AE0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80107AE0
  c->r[3]=0u+0x00000001u; // 80107AE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80107AE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80107AEC
  c->lr=c->r[0]; // 80107AF0
  c->r[1]=c->r[1]+0x00000020u; // 80107AF4
  return; // 80107AF8
}

// fn_80107AFC
void f_80107AFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107AFC
  c->r[0]=c->lr; // 80107B00
  c->r[3]=0u+0x80620000u; // 80107B04
  c->r[4]=0u+0x00000022u; // 80107B08
  W32(c->r[1]+0x00000024u,c->r[0]); // 80107B0C
  c->r[3]=c->r[3]+0x00007688u; // 80107B10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80107B14
  W32(c->r[1]+0x00000018u,c->r[30]); // 80107B18
  c->r[3]=R32(c->r[3]+0x00000014u); // 80107B1C
  c->lr=0x80107B24u; f_8003560C(c); // 80107B20
  c->r[4]=0u+0x80550000u; // 80107B24
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 80107B28
  c->r[3]=c->r[4]+0xFFFFCE54u; // 80107B2C
  c->r[4]=0u+0x00000027u; // 80107B30
  c->lr=0x80107B38u; f_8019C920(c); // 80107B34
  cmps(c,0,(int32_t)c->r[3],0); // 80107B38
  c->r[30]=c->r[3]|c->r[3]; // 80107B3C
  if (crb(c,2)) { goto L_80107C24; } // 80107B40
  c->r[4]=c->r[1]+0x00000008u; // 80107B44
  c->r[5]=0u+0x00000000u; // 80107B48
  c->lr=0x80107B50u; f_8007C6C8(c); // 80107B4C
  cmps(c,0,(int32_t)c->r[31],1); // 80107B50
  if (crb(c,2)) { goto L_80107BAC; } // 80107B54
  if (!crb(c,0)) { goto L_80107B68; } // 80107B58
  cmps(c,0,(int32_t)c->r[31],0); // 80107B5C
  if (!crb(c,0)) { goto L_80107B74; } // 80107B60
  goto L_80107C0C; // 80107B64
L_80107B68:;
  cmps(c,0,(int32_t)c->r[31],3); // 80107B68
  if (!crb(c,0)) { goto L_80107C0C; } // 80107B6C
  goto L_80107BE4; // 80107B70
L_80107B74:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80107B74
  {uint32_t ea=c->r[2]+0xFFFFAFD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107B78
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80107B7C
  fcmp(c,0,c->f[1],c->f[0]); // 80107B80
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80107B84
  if (!crb(c,2)) { goto L_80107C0C; } // 80107B88
  c->r[3]=c->r[30]|c->r[30]; // 80107B8C
  c->r[4]=0u+0x00000002u; // 80107B90
  c->r[5]=0u+0x00000070u; // 80107B94
  c->r[6]=0u+0x00000001u; // 80107B98
  c->r[7]=0u+0x00000001u; // 80107B9C
  c->lr=0x80107BA4u; f_8017900C(c); // 80107BA0
  c->r[31]=c->r[31]+0x00000001u; // 80107BA4
  goto L_80107C0C; // 80107BA8
L_80107BAC:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80107BAC
  {uint32_t ea=c->r[2]+0xFFFFAFD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107BB0
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80107BB4
  fcmp(c,0,c->f[1],c->f[0]); // 80107BB8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80107BBC
  if (!crb(c,2)) { goto L_80107C0C; } // 80107BC0
  c->r[3]=c->r[30]|c->r[30]; // 80107BC4
  c->r[4]=0u+0x00000002u; // 80107BC8
  c->r[5]=0u+0x00000070u; // 80107BCC
  c->r[6]=0u+0x00000001u; // 80107BD0
  c->r[7]=0u+0x00000001u; // 80107BD4
  c->lr=0x80107BDCu; f_8017900C(c); // 80107BD8
  c->r[31]=c->r[31]+0x00000001u; // 80107BDC
  goto L_80107C0C; // 80107BE0
L_80107BE4:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80107BE4
  {uint32_t ea=c->r[2]+0xFFFFAF84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107BE8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80107BEC
  fcmp(c,0,c->f[1],c->f[0]); // 80107BF0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80107BF4
  if (!crb(c,2)) { goto L_80107C0C; } // 80107BF8
  {uint32_t ea=c->r[2]+0xFFFFAFD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107BFC
  fcmp(c,0,c->f[1],c->f[0]); // 80107C00
  if (!crb(c,0)) { goto L_80107C0C; } // 80107C04
  c->r[31]=0u+0x00000000u; // 80107C08
L_80107C0C:;
  c->r[3]=0u+0x80620000u; // 80107C0C
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 80107C10
  c->r[3]=c->r[3]+0x00007688u; // 80107C14
  c->r[4]=0u+0x00000022u; // 80107C18
  c->r[3]=R32(c->r[3]+0x00000014u); // 80107C1C
  c->lr=0x80107C24u; f_80038998(c); // 80107C20
L_80107C24:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80107C24
  c->r[3]=0u+0x00000001u; // 80107C28
  c->r[30]=R32(c->r[1]+0x00000018u); // 80107C2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80107C30
  c->lr=c->r[0]; // 80107C34
  c->r[1]=c->r[1]+0x00000020u; // 80107C38
  return; // 80107C3C
}

// fn_80107C40
void f_80107C40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107C40
  c->r[0]=c->lr; // 80107C44
  c->r[7]=0u+0x803E0000u; // 80107C48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107C4C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80107C50
  c->r[7]=c->r[7]+0x00002ED0u; // 80107C54
  c->r[4]=c->r[5]|c->r[5]; // 80107C58
  c->r[5]=c->r[6]|c->r[6]; // 80107C5C
  c->r[12]=c->r[7]+c->r[0]; // 80107C60
  c->lr=0x80107C68u; f_802BA00C(c); // 80107C64
  c->r[0]=c->r[0]|0x00000000u; // 80107C68
  c->r[0]=R32(c->r[1]+0x00000014u); // 80107C6C
  c->lr=c->r[0]; // 80107C70
  c->r[1]=c->r[1]+0x00000010u; // 80107C74
  return; // 80107C78
}

// fn_80107C7C
void f_80107C7C(Ctx* __restrict c) {
  return; // 80107C7C
}

// fn_80107C80
void f_80107C80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107C80
  c->r[0]=c->lr; // 80107C84
  cmps(c,0,(int32_t)c->r[3],0); // 80107C88
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107C8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80107C90
  c->r[31]=c->r[4]|c->r[4]; // 80107C94
  W32(c->r[1]+0x00000008u,c->r[30]); // 80107C98
  c->r[30]=c->r[3]|c->r[3]; // 80107C9C
  if (crb(c,2)) { goto L_80107CBC; } // 80107CA0
  c->r[4]=0u+0x00000000u; // 80107CA4
  c->lr=0x80107CACu; f_80103A70(c); // 80107CA8
  cmps(c,0,(int32_t)c->r[31],0); // 80107CAC
  if (!crb(c,1)) { goto L_80107CBC; } // 80107CB0
  c->r[3]=c->r[30]|c->r[30]; // 80107CB4
  c->lr=0x80107CBCu; f_800C69B8(c); // 80107CB8
L_80107CBC:;
  c->r[3]=c->r[30]|c->r[30]; // 80107CBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80107CC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80107CC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80107CC8
  c->lr=c->r[0]; // 80107CCC
  c->r[1]=c->r[1]+0x00000010u; // 80107CD0
  return; // 80107CD4
}

// fn_80107CD8
void f_80107CD8(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 80107CD8
  c->r[3]=c->r[3]+0x00000368u; // 80107CDC
  return; // 80107CE0
}

// fn_80107CE4
void f_80107CE4(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF8818u; // 80107CE4
  return; // 80107CE8
}

// fn_80107CEC
void f_80107CEC(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF8824u; // 80107CEC
  return; // 80107CF0
}

// fn_80107CF4
void f_80107CF4(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF881Cu; // 80107CF4
  return; // 80107CF8
}

// fn_80107CFC
void f_80107CFC(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF8820u; // 80107CFC
  return; // 80107D00
}

// fn_80107D04
void f_80107D04(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 80107D04
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80107D08
  c->r[3]=c->r[3]+0x00002E10u; // 80107D0C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80107D10
  return; // 80107D14
}

// fn_80107D18
void f_80107D18(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80107D18
  c->r[3]=c->r[13]+0xFFFF8848u; // 80107D1C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80107D20
  return; // 80107D24
}

// fn_80107D28
void f_80107D28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107D28
  c->r[0]=c->lr; // 80107D2C
  W32(c->r[1]+0x00000114u,c->r[0]); // 80107D30
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 80107D34
  W32(c->r[1]+0x00000108u,c->r[30]); // 80107D38
  W32(c->r[1]+0x00000104u,c->r[29]); // 80107D3C
  W32(c->r[1]+0x00000100u,c->r[28]); // 80107D40
  c->r[28]=c->r[5]|c->r[5]; // 80107D44
  c->r[0]=R8(c->r[5]+0x00000003u); // 80107D48
  cmps(c,0,(int32_t)c->r[0],3); // 80107D4C
  if (crb(c,2)) { goto L_80107E88; } // 80107D50
  if (!crb(c,0)) { goto L_80107FEC; } // 80107D54
  cmps(c,0,(int32_t)c->r[0],0); // 80107D58
  if (crb(c,2)) { goto L_80107D68; } // 80107D5C
  if (!crb(c,0)) { goto L_80107E24; } // 80107D60
  goto L_80107FEC; // 80107D64
L_80107D68:;
  c->r[4]=0u+0x803A0000u; // 80107D68
  c->r[31]=0u+0x80550000u; // 80107D6C
  c->r[4]=c->r[4]+0xFFFFF600u; // 80107D70
  c->r[5]=0u+0x00000000u; // 80107D74
  c->r[3]=c->r[31]+0xFFFFC848u; // 80107D78
  c->r[6]=0u+0x00000000u; // 80107D7C
  c->r[4]=c->r[4]+0x00000010u; // 80107D80
  c->lr=0x80107D88u; f_8018D3E4(c); // 80107D84
  c->r[5]=0u+0x80620000u; // 80107D88
  c->r[30]=c->r[3]|c->r[3]; // 80107D8C
  c->r[5]=c->r[5]+0x00007688u; // 80107D90
  c->r[4]=0u+0x00000000u; // 80107D94
  c->r[3]=R32(c->r[5]+0x00000014u); // 80107D98
  c->r[5]=c->r[30]|c->r[30]; // 80107D9C
  c->lr=0x80107DA4u; f_80038998(c); // 80107DA0
  cmps(c,0,(int32_t)c->r[30],-1); // 80107DA4
  if (crb(c,2)) { goto L_80107FEC; } // 80107DA8
  {uint32_t ea=c->r[2]+0xFFFFAFE0u; c->f[5]=c->ps1[5]=RF32(ea);} // 80107DAC
  c->r[4]=c->r[30]|c->r[30]; // 80107DB0
  {uint32_t ea=c->r[2]+0xFFFFAFE4u; c->f[4]=c->ps1[4]=RF32(ea);} // 80107DB4
  c->r[3]=c->r[31]+0xFFFFC848u; // 80107DB8
  {uint32_t ea=c->r[2]+0xFFFFAFE8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80107DBC
  c->r[5]=c->r[1]+0x0000002Cu; // 80107DC0
  {uint32_t ea=c->r[2]+0xFFFFAFECu; c->f[2]=c->ps1[2]=RF32(ea);} // 80107DC4
  c->r[6]=c->r[1]+0x00000020u; // 80107DC8
  {uint32_t ea=c->r[2]+0xFFFFAFF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80107DCC
  {uint32_t ea=c->r[2]+0xFFFFAFF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107DD0
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[5]);} // 80107DD4
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[4]);} // 80107DD8
  c->r[8]=R32(c->r[1]+0x0000008Cu); // 80107DDC
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[3]);} // 80107DE0
  c->r[7]=R32(c->r[1]+0x00000090u); // 80107DE4
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 80107DE8
  c->r[0]=R32(c->r[1]+0x00000094u); // 80107DEC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 80107DF0
  c->r[11]=R32(c->r[1]+0x00000080u); // 80107DF4
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80107DF8
  c->r[10]=R32(c->r[1]+0x00000084u); // 80107DFC
  c->r[9]=R32(c->r[1]+0x00000088u); // 80107E00
  W32(c->r[1]+0x00000020u,c->r[11]); // 80107E04
  W32(c->r[1]+0x00000024u,c->r[10]); // 80107E08
  W32(c->r[1]+0x00000028u,c->r[9]); // 80107E0C
  W32(c->r[1]+0x0000002Cu,c->r[8]); // 80107E10
  W32(c->r[1]+0x00000030u,c->r[7]); // 80107E14
  W32(c->r[1]+0x00000034u,c->r[0]); // 80107E18
  c->lr=0x80107E20u; f_8018DBD0(c); // 80107E1C
  goto L_80107FEC; // 80107E20
L_80107E24:;
  c->r[3]=0u+0x80620000u; // 80107E24
  c->r[4]=0u+0x00000000u; // 80107E28
  c->r[3]=c->r[3]+0x00007688u; // 80107E2C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80107E30
  c->lr=0x80107E38u; f_8003560C(c); // 80107E34
  cmps(c,0,(int32_t)c->r[3],-1); // 80107E38
  c->r[4]=c->r[3]|c->r[3]; // 80107E3C
  if (crb(c,2)) { goto L_80107FEC; } // 80107E40
  c->r[0]=R8(c->r[28]+0x00000003u); // 80107E44
  cmps(c,0,(int32_t)c->r[0],2); // 80107E48
  if (crb(c,2)) { goto L_80107E74; } // 80107E4C
  if (!crb(c,0)) { goto L_80107FEC; } // 80107E50
  cmps(c,0,(int32_t)c->r[0],1); // 80107E54
  if (!crb(c,0)) { goto L_80107E60; } // 80107E58
  goto L_80107FEC; // 80107E5C
L_80107E60:;
  c->r[3]=0u+0x80550000u; // 80107E60
  c->r[5]=0u+0x00000001u; // 80107E64
  c->r[3]=c->r[3]+0xFFFFC848u; // 80107E68
  c->lr=0x80107E70u; f_8018E4F0(c); // 80107E6C
  goto L_80107FEC; // 80107E70
L_80107E74:;
  c->r[3]=0u+0x80550000u; // 80107E74
  c->r[5]=0u+0x00000096u; // 80107E78
  c->r[3]=c->r[3]+0xFFFFC848u; // 80107E7C
  c->lr=0x80107E84u; f_8018E4F0(c); // 80107E80
  goto L_80107FEC; // 80107E84
L_80107E88:;
  c->r[3]=0u+0x80550000u; // 80107E88
  c->r[4]=0u+0x00000010u; // 80107E8C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80107E90
  c->lr=0x80107E98u; f_8019C920(c); // 80107E94
  cmps(c,0,(int32_t)c->r[3],0); // 80107E98
  c->r[30]=c->r[3]|c->r[3]; // 80107E9C
  if (crb(c,2)) { goto L_80107FEC; } // 80107EA0
  c->r[4]=0u+0x803A0000u; // 80107EA4
  c->r[31]=0u+0x80550000u; // 80107EA8
  c->r[4]=c->r[4]+0xFFFFF600u; // 80107EAC
  c->r[5]=0u+0x00000000u; // 80107EB0
  c->r[3]=c->r[31]+0xFFFFC848u; // 80107EB4
  c->r[6]=0u+0x00000000u; // 80107EB8
  c->r[4]=c->r[4]+0x00000014u; // 80107EBC
  c->lr=0x80107EC4u; f_8018D3E4(c); // 80107EC0
  c->r[5]=0u+0x80620000u; // 80107EC4
  c->r[29]=c->r[3]|c->r[3]; // 80107EC8
  c->r[5]=c->r[5]+0x00007688u; // 80107ECC
  c->r[4]=0u+0x00000000u; // 80107ED0
  c->r[3]=R32(c->r[5]+0x00000014u); // 80107ED4
  c->r[5]=c->r[29]|c->r[29]; // 80107ED8
  c->lr=0x80107EE0u; f_80038998(c); // 80107EDC
  cmps(c,0,(int32_t)c->r[29],-1); // 80107EE0
  if (crb(c,2)) { goto L_80107FEC; } // 80107EE4
  c->r[7]=0u+0x803A0000u; // 80107EE8
  {uint32_t ea=c->r[7]+0xFFFFF5D8u; c->r[6]=R32(ea); c->r[7]=ea;} // 80107EEC
  c->r[3]=c->r[1]+0x00000074u; // 80107EF0
  c->r[4]=c->r[1]+0x00000050u; // 80107EF4
  c->r[5]=R32(c->r[7]+0x00000004u); // 80107EF8
  c->r[0]=R32(c->r[7]+0x00000008u); // 80107EFC
  W32(c->r[1]+0x00000050u,c->r[6]); // 80107F00
  W32(c->r[1]+0x00000054u,c->r[5]); // 80107F04
  W32(c->r[1]+0x00000058u,c->r[0]); // 80107F08
  c->lr=0x80107F10u; f_800361A0(c); // 80107F0C
  c->r[7]=0u+0x803A0000u; // 80107F10
  {uint32_t ea=c->r[7]+0xFFFFF5E4u; c->r[6]=R32(ea); c->r[7]=ea;} // 80107F14
  c->r[3]=c->r[1]+0x00000068u; // 80107F18
  c->r[4]=c->r[1]+0x00000044u; // 80107F1C
  c->r[5]=R32(c->r[7]+0x00000004u); // 80107F20
  c->r[0]=R32(c->r[7]+0x00000008u); // 80107F24
  W32(c->r[1]+0x00000044u,c->r[6]); // 80107F28
  W32(c->r[1]+0x00000048u,c->r[5]); // 80107F2C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80107F30
  c->lr=0x80107F38u; f_800361A0(c); // 80107F34
  c->r[3]=c->r[30]|c->r[30]; // 80107F38
  c->r[4]=0u+0x00000000u; // 80107F3C
  c->lr=0x80107F44u; f_80039840(c); // 80107F40
  c->r[0]=R8(c->r[28]+0x00000004u); // 80107F44
  c->r[4]=c->r[13]+0xFFFF8888u; // 80107F48
  c->r[5]=c->r[1]+0x000000C8u; // 80107F4C
  c->r[6]=0u+0x00000001u; // 80107F50
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80107F54
  c->r[4]=R32(c->r[4]+c->r[0]); // 80107F58
  c->lr=0x80107F60u; f_80257018(c); // 80107F5C
  c->r[4]=c->r[1]+0x00000074u; // 80107F60
  c->r[3]=c->r[1]+0x000000C8u; // 80107F64
  c->r[5]=c->r[4]|c->r[4]; // 80107F68
  c->lr=0x80107F70u; f_80296750(c); // 80107F6C
  {uint32_t ea=c->r[2]+0xFFFFAFF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80107F70
  c->r[3]=c->r[1]+0x00000098u; // 80107F74
  c->r[4]=0u+0x00000059u; // 80107F78
  c->lr=0x80107F80u; f_80295FBC(c); // 80107F7C
  c->r[3]=c->r[1]+0x000000C8u; // 80107F80
  c->r[4]=c->r[1]+0x00000098u; // 80107F84
  c->r[5]=c->r[3]|c->r[3]; // 80107F88
  c->lr=0x80107F90u; f_80295B48(c); // 80107F8C
  c->r[3]=c->r[1]+0x00000038u; // 80107F90
  c->r[4]=c->r[1]+0x00000068u; // 80107F94
  c->r[5]=c->r[1]+0x0000005Cu; // 80107F98
  c->r[6]=c->r[1]+0x000000C8u; // 80107F9C
  c->r[7]=0u+0x00000000u; // 80107FA0
  c->lr=0x80107FA8u; f_8002BE64(c); // 80107FA4
  c->r[11]=R32(c->r[1]+0x00000068u); // 80107FA8
  c->r[4]=c->r[29]|c->r[29]; // 80107FAC
  c->r[10]=R32(c->r[1]+0x0000006Cu); // 80107FB0
  c->r[3]=c->r[31]+0xFFFFC848u; // 80107FB4
  c->r[9]=R32(c->r[1]+0x00000070u); // 80107FB8
  c->r[5]=c->r[1]+0x00000014u; // 80107FBC
  c->r[8]=R32(c->r[1]+0x00000074u); // 80107FC0
  c->r[6]=c->r[1]+0x00000008u; // 80107FC4
  c->r[7]=R32(c->r[1]+0x00000078u); // 80107FC8
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 80107FCC
  W32(c->r[1]+0x00000008u,c->r[11]); // 80107FD0
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 80107FD4
  W32(c->r[1]+0x00000010u,c->r[9]); // 80107FD8
  W32(c->r[1]+0x00000014u,c->r[8]); // 80107FDC
  W32(c->r[1]+0x00000018u,c->r[7]); // 80107FE0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80107FE4
  c->lr=0x80107FECu; f_8018DBD0(c); // 80107FE8
L_80107FEC:;
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 80107FEC
  c->r[3]=0u+0x00000001u; // 80107FF0
  c->r[30]=R32(c->r[1]+0x00000108u); // 80107FF4
  c->r[29]=R32(c->r[1]+0x00000104u); // 80107FF8
  c->r[28]=R32(c->r[1]+0x00000100u); // 80107FFC
  c->r[0]=R32(c->r[1]+0x00000114u); // 80108000
  c->lr=c->r[0]; // 80108004
  c->r[1]=c->r[1]+0x00000110u; // 80108008
  return; // 8010800C
}

// fn_80108010
void f_80108010(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108010
  c->r[0]=c->lr; // 80108014
  c->r[3]=0u+0x80620000u; // 80108018
  c->r[4]=0u+0x00000022u; // 8010801C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80108020
  c->r[3]=c->r[3]+0x00007688u; // 80108024
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80108028
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010802C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80108030
  c->lr=0x80108038u; f_8003560C(c); // 80108034
  c->r[4]=0u+0x80550000u; // 80108038
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 8010803C
  c->r[3]=c->r[4]+0xFFFFCE54u; // 80108040
  c->r[4]=0u+0x00000000u; // 80108044
  c->lr=0x8010804Cu; f_8019C920(c); // 80108048
  cmps(c,0,(int32_t)c->r[3],0); // 8010804C
  c->r[30]=c->r[3]|c->r[3]; // 80108050
  if (crb(c,2)) { goto L_80108138; } // 80108054
  c->r[4]=c->r[1]+0x00000008u; // 80108058
  c->r[5]=0u+0x00000000u; // 8010805C
  c->lr=0x80108064u; f_8007C6C8(c); // 80108060
  cmps(c,0,(int32_t)c->r[31],1); // 80108064
  if (crb(c,2)) { goto L_801080C0; } // 80108068
  if (!crb(c,0)) { goto L_8010807C; } // 8010806C
  cmps(c,0,(int32_t)c->r[31],0); // 80108070
  if (!crb(c,0)) { goto L_80108088; } // 80108074
  goto L_80108120; // 80108078
L_8010807C:;
  cmps(c,0,(int32_t)c->r[31],3); // 8010807C
  if (!crb(c,0)) { goto L_80108120; } // 80108080
  goto L_801080F8; // 80108084
L_80108088:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80108088
  {uint32_t ea=c->r[2]+0xFFFFAFFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010808C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108090
  fcmp(c,0,c->f[1],c->f[0]); // 80108094
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80108098
  if (!crb(c,2)) { goto L_80108120; } // 8010809C
  c->r[3]=c->r[30]|c->r[30]; // 801080A0
  c->r[4]=0u+0x00000002u; // 801080A4
  c->r[5]=0u+0x00000009u; // 801080A8
  c->r[6]=0u+0x00000001u; // 801080AC
  c->r[7]=0u+0x00000001u; // 801080B0
  c->lr=0x801080B8u; f_8017900C(c); // 801080B4
  c->r[31]=c->r[31]+0x00000001u; // 801080B8
  goto L_80108120; // 801080BC
L_801080C0:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801080C0
  {uint32_t ea=c->r[2]+0xFFFFB000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801080C4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801080C8
  fcmp(c,0,c->f[1],c->f[0]); // 801080CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801080D0
  if (!crb(c,2)) { goto L_80108120; } // 801080D4
  c->r[3]=c->r[30]|c->r[30]; // 801080D8
  c->r[4]=0u+0x00000002u; // 801080DC
  c->r[5]=0u+0x00000009u; // 801080E0
  c->r[6]=0u+0x00000001u; // 801080E4
  c->r[7]=0u+0x00000001u; // 801080E8
  c->lr=0x801080F0u; f_8017900C(c); // 801080EC
  c->r[31]=c->r[31]+0x00000001u; // 801080F0
  goto L_80108120; // 801080F4
L_801080F8:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801080F8
  {uint32_t ea=c->r[2]+0xFFFFB004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801080FC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108100
  fcmp(c,0,c->f[1],c->f[0]); // 80108104
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80108108
  if (!crb(c,2)) { goto L_80108120; } // 8010810C
  {uint32_t ea=c->r[2]+0xFFFFB008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80108110
  fcmp(c,0,c->f[1],c->f[0]); // 80108114
  if (!crb(c,0)) { goto L_80108120; } // 80108118
  c->r[31]=0u+0x00000000u; // 8010811C
L_80108120:;
  c->r[3]=0u+0x80620000u; // 80108120
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 80108124
  c->r[3]=c->r[3]+0x00007688u; // 80108128
  c->r[4]=0u+0x00000022u; // 8010812C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80108130
  c->lr=0x80108138u; f_80038998(c); // 80108134
L_80108138:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80108138
  c->r[3]=0u+0x00000001u; // 8010813C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80108140
  c->r[0]=R32(c->r[1]+0x00000024u); // 80108144
  c->lr=c->r[0]; // 80108148
  c->r[1]=c->r[1]+0x00000020u; // 8010814C
  return; // 80108150
}

// fn_80108154
void f_80108154(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108154
  c->r[0]=c->lr; // 80108158
  c->r[7]=0u+0x803E0000u; // 8010815C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108160
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80108164
  c->r[7]=c->r[7]+0x000048D8u; // 80108168
  c->r[4]=c->r[5]|c->r[5]; // 8010816C
  c->r[5]=c->r[6]|c->r[6]; // 80108170
  c->r[12]=c->r[7]+c->r[0]; // 80108174
  c->lr=0x8010817Cu; f_802BA00C(c); // 80108178
  c->r[0]=c->r[0]|0x00000000u; // 8010817C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108180
  c->lr=c->r[0]; // 80108184
  c->r[1]=c->r[1]+0x00000010u; // 80108188
  return; // 8010818C
}

// fn_80108190
void f_80108190(Ctx* __restrict c) {
  return; // 80108190
}

// fn_80108194
void f_80108194(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108194
  c->r[0]=c->lr; // 80108198
  cmps(c,0,(int32_t)c->r[3],0); // 8010819C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801081A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801081A4
  c->r[31]=c->r[4]|c->r[4]; // 801081A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801081AC
  c->r[30]=c->r[3]|c->r[3]; // 801081B0
  if (crb(c,2)) { goto L_801081D0; } // 801081B4
  c->r[4]=0u+0x00000000u; // 801081B8
  c->lr=0x801081C0u; f_80103A70(c); // 801081BC
  cmps(c,0,(int32_t)c->r[31],0); // 801081C0
  if (!crb(c,1)) { goto L_801081D0; } // 801081C4
  c->r[3]=c->r[30]|c->r[30]; // 801081C8
  c->lr=0x801081D0u; f_800C69B8(c); // 801081CC
L_801081D0:;
  c->r[3]=c->r[30]|c->r[30]; // 801081D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801081D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801081D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801081DC
  c->lr=c->r[0]; // 801081E0
  c->r[1]=c->r[1]+0x00000010u; // 801081E4
  return; // 801081E8
}

// fn_801081EC
void f_801081EC(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 801081EC
  c->r[3]=c->r[3]+0x00002F68u; // 801081F0
  return; // 801081F4
}

// fn_801081F8
void f_801081F8(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF8860u; // 801081F8
  return; // 801081FC
}

// fn_80108200
void f_80108200(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF886Cu; // 80108200
  return; // 80108204
}

// fn_80108208
void f_80108208(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF8864u; // 80108208
  return; // 8010820C
}

// fn_80108210
void f_80108210(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF8868u; // 80108210
  return; // 80108214
}

// fn_80108218
void f_80108218(Ctx* __restrict c) {
  c->r[3]=0u+0x803E0000u; // 80108218
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8010821C
  c->r[3]=c->r[3]+0x00004848u; // 80108220
  c->r[3]=R32(c->r[3]+c->r[0]); // 80108224
  return; // 80108228
}

// fn_8010822C
void f_8010822C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8010822C
  c->r[3]=c->r[13]+0xFFFF8884u; // 80108230
  c->r[3]=R32(c->r[3]+c->r[0]); // 80108234
  return; // 80108238
}

// fn_8010823C
void f_8010823C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8010823C
  return; // 80108240
}

// fn_80108244
void f_80108244(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 80108244
  return; // 80108248
}

// fn_8010824C
void f_8010824C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8010824C
  return; // 80108250
}

// fn_80108254
void f_80108254(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 80108254
  return; // 80108258
}

// fn_8010825C
void f_8010825C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8010825C
  return; // 80108260
}

// fn_80108264
void f_80108264(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 80108264
  return; // 80108268
}

// fn_8010826C
void f_8010826C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8010826C
  return; // 80108270
}

// fn_80108274
void f_80108274(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 80108274
  return; // 80108278
}

// fn_8010827C
void f_8010827C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8010827C
  return; // 80108280
}

// fn_80108284
void f_80108284(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 80108284
  return; // 80108288
}

// fn_8010828C
void f_8010828C(Ctx* __restrict c) {
  c->r[5]=R8(c->r[5]+0x00000003u); // 8010828C
  c->r[4]=0u+0x805D0000u; // 80108290
  c->r[3]=0u+0x00000001u; // 80108294
  c->r[0]=0u-c->r[5]; // 80108298
  c->r[0]=c->r[0]|c->r[5]; // 8010829C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801082A0
  W8(c->r[4]+0x000078B0u,c->r[0]); // 801082A4
  return; // 801082A8
}

// fn_801082AC
void f_801082AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801082AC
  c->r[0]=c->lr; // 801082B0
  W32(c->r[1]+0x00000084u,c->r[0]); // 801082B4
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801082B8
  W32(c->r[1]+0x00000078u,c->r[30]); // 801082BC
  W32(c->r[1]+0x00000074u,c->r[29]); // 801082C0
  c->r[29]=c->r[5]|c->r[5]; // 801082C4
  c->r[0]=R8(c->r[5]+0x00000003u); // 801082C8
  cmps(c,0,(int32_t)c->r[0],4); // 801082CC
  if (crb(c,2)) { goto L_8010845C; } // 801082D0
  if (!crb(c,0)) { goto L_801082F0; } // 801082D4
  cmps(c,0,(int32_t)c->r[0],0); // 801082D8
  if (crb(c,2)) { goto L_80108300; } // 801082DC
  if (crb(c,0)) { goto L_801085E4; } // 801082E0
  cmps(c,0,(int32_t)c->r[0],3); // 801082E4
  if (!crb(c,0)) { goto L_8010841C; } // 801082E8
  goto L_801083B8; // 801082EC
L_801082F0:;
  cmps(c,0,(int32_t)c->r[0],6); // 801082F0
  if (crb(c,2)) { goto L_80108558; } // 801082F4
  if (!crb(c,0)) { goto L_801085E4; } // 801082F8
  goto L_8010849C; // 801082FC
L_80108300:;
  c->r[30]=0u+0x80550000u; // 80108300
  c->r[4]=0u+0x803A0000u; // 80108304
  c->r[3]=c->r[30]+0xFFFFC848u; // 80108308
  c->r[5]=0u+0x00000000u; // 8010830C
  c->r[4]=c->r[4]+0xFFFFF644u; // 80108310
  c->r[6]=0u+0x00000000u; // 80108314
  c->lr=0x8010831Cu; f_8018D3E4(c); // 80108318
  c->r[5]=0u+0x80620000u; // 8010831C
  c->r[31]=c->r[3]|c->r[3]; // 80108320
  c->r[5]=c->r[5]+0x00007688u; // 80108324
  c->r[4]=0u+0x00000000u; // 80108328
  c->r[3]=R32(c->r[5]+0x00000014u); // 8010832C
  c->r[5]=c->r[31]|c->r[31]; // 80108330
  c->lr=0x80108338u; f_80038998(c); // 80108334
  cmps(c,0,(int32_t)c->r[31],-1); // 80108338
  if (crb(c,2)) { goto L_801085E4; } // 8010833C
  {uint32_t ea=c->r[2]+0xFFFFB010u; c->f[5]=c->ps1[5]=RF32(ea);} // 80108340
  c->r[4]=c->r[31]|c->r[31]; // 80108344
  {uint32_t ea=c->r[2]+0xFFFFB014u; c->f[4]=c->ps1[4]=RF32(ea);} // 80108348
  c->r[3]=c->r[30]+0xFFFFC848u; // 8010834C
  {uint32_t ea=c->r[2]+0xFFFFB018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80108350
  c->r[5]=c->r[1]+0x0000002Cu; // 80108354
  {uint32_t ea=c->r[2]+0xFFFFB01Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80108358
  c->r[6]=c->r[1]+0x00000020u; // 8010835C
  {uint32_t ea=c->r[2]+0xFFFFB020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108360
  {uint32_t ea=c->r[2]+0xFFFFB024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80108364
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[5]);} // 80108368
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[4]);} // 8010836C
  c->r[8]=R32(c->r[1]+0x0000005Cu); // 80108370
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[3]);} // 80108374
  c->r[7]=R32(c->r[1]+0x00000060u); // 80108378
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 8010837C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80108380
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 80108384
  c->r[11]=R32(c->r[1]+0x00000050u); // 80108388
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8010838C
  c->r[10]=R32(c->r[1]+0x00000054u); // 80108390
  c->r[9]=R32(c->r[1]+0x00000058u); // 80108394
  W32(c->r[1]+0x00000020u,c->r[11]); // 80108398
  W32(c->r[1]+0x00000024u,c->r[10]); // 8010839C
  W32(c->r[1]+0x00000028u,c->r[9]); // 801083A0
  W32(c->r[1]+0x0000002Cu,c->r[8]); // 801083A4
  W32(c->r[1]+0x00000030u,c->r[7]); // 801083A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801083AC
  c->lr=0x801083B4u; f_8018DBD0(c); // 801083B0
  goto L_801085E4; // 801083B4
L_801083B8:;
  c->r[3]=0u+0x80620000u; // 801083B8
  c->r[4]=0u+0x00000000u; // 801083BC
  c->r[3]=c->r[3]+0x00007688u; // 801083C0
  c->r[3]=R32(c->r[3]+0x00000014u); // 801083C4
  c->lr=0x801083CCu; f_8003560C(c); // 801083C8
  cmps(c,0,(int32_t)c->r[3],-1); // 801083CC
  c->r[4]=c->r[3]|c->r[3]; // 801083D0
  if (crb(c,2)) { goto L_801085E4; } // 801083D4
  c->r[0]=R8(c->r[29]+0x00000003u); // 801083D8
  cmps(c,0,(int32_t)c->r[0],2); // 801083DC
  if (crb(c,2)) { goto L_80108408; } // 801083E0
  if (!crb(c,0)) { goto L_801085E4; } // 801083E4
  cmps(c,0,(int32_t)c->r[0],1); // 801083E8
  if (!crb(c,0)) { goto L_801083F4; } // 801083EC
  goto L_801085E4; // 801083F0
L_801083F4:;
  c->r[3]=0u+0x80550000u; // 801083F4
  c->r[5]=0u+0x00000001u; // 801083F8
  c->r[3]=c->r[3]+0xFFFFC848u; // 801083FC
  c->lr=0x80108404u; f_8018E4F0(c); // 80108400
  goto L_801085E4; // 80108404
L_80108408:;
  c->r[3]=0u+0x80550000u; // 80108408
  c->r[5]=0u+0x00000096u; // 8010840C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80108410
  c->lr=0x80108418u; f_8018E4F0(c); // 80108414
  goto L_801085E4; // 80108418
L_8010841C:;
  c->r[30]=0u+0x80620000u; // 8010841C
  c->r[4]=0u+0x00000000u; // 80108420
  c->r[30]=c->r[30]+0x00007688u; // 80108424
  c->r[3]=R32(c->r[30]+0x00000014u); // 80108428
  c->lr=0x80108430u; f_8003560C(c); // 8010842C
  cmps(c,0,(int32_t)c->r[3],-1); // 80108430
  c->r[4]=c->r[3]|c->r[3]; // 80108434
  if (crb(c,2)) { goto L_801085E4; } // 80108438
  c->r[3]=0u+0x80550000u; // 8010843C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80108440
  c->lr=0x80108448u; f_8018D738(c); // 80108444
  c->r[3]=R32(c->r[30]+0x00000014u); // 80108448
  c->r[4]=0u+0x00000000u; // 8010844C
  c->r[5]=0u+0xFFFFFFFFu; // 80108450
  c->lr=0x80108458u; f_80038998(c); // 80108454
  goto L_801085E4; // 80108458
L_8010845C:;
  c->r[30]=0u+0x80620000u; // 8010845C
  c->r[4]=0u+0x00000000u; // 80108460
  c->r[30]=c->r[30]+0x00007688u; // 80108464
  c->r[3]=R32(c->r[30]+0x00000014u); // 80108468
  c->lr=0x80108470u; f_8003560C(c); // 8010846C
  cmps(c,0,(int32_t)c->r[3],-1); // 80108470
  c->r[4]=c->r[3]|c->r[3]; // 80108474
  if (crb(c,2)) { goto L_801085E4; } // 80108478
  c->r[3]=0u+0x80550000u; // 8010847C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80108480
  c->lr=0x80108488u; f_8018D694(c); // 80108484
  c->r[3]=R32(c->r[30]+0x00000014u); // 80108488
  c->r[4]=0u+0x00000000u; // 8010848C
  c->r[5]=0u+0xFFFFFFFFu; // 80108490
  c->lr=0x80108498u; f_80038998(c); // 80108494
  goto L_801085E4; // 80108498
L_8010849C:;
  c->r[4]=0u+0x803A0000u; // 8010849C
  c->r[30]=0u+0x80550000u; // 801084A0
  c->r[4]=c->r[4]+0xFFFFF644u; // 801084A4
  c->r[5]=0u+0x00000000u; // 801084A8
  c->r[3]=c->r[30]+0xFFFFC848u; // 801084AC
  c->r[6]=0u+0x00000000u; // 801084B0
  c->r[4]=c->r[4]+0x00000004u; // 801084B4
  c->lr=0x801084BCu; f_8018D3E4(c); // 801084B8
  c->r[5]=0u+0x80620000u; // 801084BC
  c->r[31]=c->r[3]|c->r[3]; // 801084C0
  c->r[5]=c->r[5]+0x00007688u; // 801084C4
  c->r[4]=0u+0x00000000u; // 801084C8
  c->r[3]=R32(c->r[5]+0x00000014u); // 801084CC
  c->r[5]=c->r[31]|c->r[31]; // 801084D0
  c->lr=0x801084D8u; f_80038998(c); // 801084D4
  cmps(c,0,(int32_t)c->r[31],-1); // 801084D8
  if (crb(c,2)) { goto L_801085E4; } // 801084DC
  {uint32_t ea=c->r[2]+0xFFFFB028u; c->f[5]=c->ps1[5]=RF32(ea);} // 801084E0
  c->r[4]=c->r[31]|c->r[31]; // 801084E4
  {uint32_t ea=c->r[2]+0xFFFFB02Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801084E8
  c->r[3]=c->r[30]+0xFFFFC848u; // 801084EC
  {uint32_t ea=c->r[2]+0xFFFFB030u; c->f[3]=c->ps1[3]=RF32(ea);} // 801084F0
  c->r[5]=c->r[1]+0x00000014u; // 801084F4
  {uint32_t ea=c->r[2]+0xFFFFB034u; c->f[2]=c->ps1[2]=RF32(ea);} // 801084F8
  c->r[6]=c->r[1]+0x00000008u; // 801084FC
  {uint32_t ea=c->r[2]+0xFFFFB038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108500
  {uint32_t ea=c->r[2]+0xFFFFB03Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80108504
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[5]);} // 80108508
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[4]);} // 8010850C
  c->r[8]=R32(c->r[1]+0x00000044u); // 80108510
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[3]);} // 80108514
  c->r[7]=R32(c->r[1]+0x00000048u); // 80108518
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 8010851C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 80108520
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80108524
  c->r[11]=R32(c->r[1]+0x00000038u); // 80108528
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 8010852C
  c->r[10]=R32(c->r[1]+0x0000003Cu); // 80108530
  c->r[9]=R32(c->r[1]+0x00000040u); // 80108534
  W32(c->r[1]+0x00000008u,c->r[11]); // 80108538
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 8010853C
  W32(c->r[1]+0x00000010u,c->r[9]); // 80108540
  W32(c->r[1]+0x00000014u,c->r[8]); // 80108544
  W32(c->r[1]+0x00000018u,c->r[7]); // 80108548
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8010854C
  c->lr=0x80108554u; f_8018DBD0(c); // 80108550
  goto L_801085E4; // 80108554
L_80108558:;
  c->r[30]=0u+0x80620000u; // 80108558
  c->r[4]=0u+0x00000000u; // 8010855C
  c->r[30]=c->r[30]+0x00007688u; // 80108560
  c->r[3]=R32(c->r[30]+0x00000014u); // 80108564
  c->lr=0x8010856Cu; f_8003560C(c); // 80108568
  cmps(c,0,(int32_t)c->r[3],-1); // 8010856C
  c->r[29]=c->r[3]|c->r[3]; // 80108570
  if (crb(c,2)) { goto L_801085E4; } // 80108574
  c->r[3]=R32(c->r[30]+0x00000014u); // 80108578
  c->r[4]=0u+0x00000001u; // 8010857C
  c->lr=0x80108584u; f_8003560C(c); // 80108580
  cmpu(c,0,c->r[3],0x00000003u); // 80108584
  c->r[31]=c->r[3]|c->r[3]; // 80108588
  if (crb(c,1)) { goto L_801085B4; } // 8010858C
  c->r[3]=0u+0x80550000u; // 80108590
  c->r[4]=c->r[29]|c->r[29]; // 80108594
  c->r[3]=c->r[3]+0xFFFFC848u; // 80108598
  c->lr=0x801085A0u; f_8018D694(c); // 8010859C
  c->r[3]=R32(c->r[30]+0x00000014u); // 801085A0
  c->r[4]=0u+0x00000000u; // 801085A4
  c->r[5]=0u+0xFFFFFFFFu; // 801085A8
  c->lr=0x801085B0u; f_80038998(c); // 801085AC
  goto L_801085E4; // 801085B0
L_801085B4:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801085B4
  c->r[5]=c->r[31]+0xFFFFFFFDu; // 801085B8
  c->r[4]=0u+0x00000001u; // 801085BC
  c->lr=0x801085C4u; f_80038998(c); // 801085C0
  c->r[0]=c->r[31]+0xFFFFFFFDu; // 801085C4
  c->r[3]=0u+0x80550000u; // 801085C8
  c->r[4]=c->r[29]|c->r[29]; // 801085CC
  c->r[3]=c->r[3]+0xFFFFC848u; // 801085D0
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 801085D4
  c->lr=0x801085DCu; f_8018EBA0(c); // 801085D8
  c->r[3]=0u+0x00000002u; // 801085DC
  goto L_801085E8; // 801085E0
L_801085E4:;
  c->r[3]=0u+0x00000001u; // 801085E4
L_801085E8:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 801085E8
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801085EC
  c->r[30]=R32(c->r[1]+0x00000078u); // 801085F0
  c->r[29]=R32(c->r[1]+0x00000074u); // 801085F4
  c->lr=c->r[0]; // 801085F8
  c->r[1]=c->r[1]+0x00000080u; // 801085FC
  return; // 80108600
}

// fn_80108604
void f_80108604(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108604
  c->r[0]=c->lr; // 80108608
  {uint32_t ea=c->r[2]+0xFFFFB038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010860C
  c->r[3]=0u+0x00000000u; // 80108610
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108614
  c->r[4]=0u+0x00000000u; // 80108618
  c->r[5]=0u+0x0000003Cu; // 8010861C
  c->r[6]=0u+0x000001C0u; // 80108620
  c->r[7]=0u+0x000000FFu; // 80108624
  c->lr=0x8010862Cu; f_8024636C(c); // 80108628
  {uint32_t ea=c->r[2]+0xFFFFB038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010862C
  c->r[3]=0u+0x00000244u; // 80108630
  c->r[4]=0u+0x00000000u; // 80108634
  c->r[5]=0u+0x00000280u; // 80108638
  c->r[6]=0u+0x000001C0u; // 8010863C
  c->r[7]=0u+0x000000FFu; // 80108640
  c->lr=0x80108648u; f_8024636C(c); // 80108644
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108648
  c->r[3]=0u+0x00000001u; // 8010864C
  c->lr=c->r[0]; // 80108650
  c->r[1]=c->r[1]+0x00000010u; // 80108654
  return; // 80108658
}

// fn_8010865C
void f_8010865C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010865C
  c->r[0]=c->lr; // 80108660
  c->r[3]=0u+0x80550000u; // 80108664
  c->r[4]=0u+0x00000006u; // 80108668
  W32(c->r[1]+0x00000044u,c->r[0]); // 8010866C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80108670
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80108674
  c->lr=0x8010867Cu; f_8019C920(c); // 80108678
  c->r[8]=0u+0x803A0000u; // 8010867C
  {uint32_t ea=c->r[8]+0xFFFFF618u; c->r[7]=R32(ea); c->r[8]=ea;} // 80108680
  c->r[31]=c->r[3]|c->r[3]; // 80108684
  c->r[3]=c->r[1]+0x00000028u; // 80108688
  c->r[6]=R32(c->r[8]+0x00000004u); // 8010868C
  c->r[4]=c->r[1]+0x00000018u; // 80108690
  c->r[5]=R32(c->r[8]+0x00000008u); // 80108694
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 80108698
  W32(c->r[1]+0x00000018u,c->r[7]); // 8010869C
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 801086A0
  W32(c->r[1]+0x00000020u,c->r[5]); // 801086A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801086A8
  c->lr=0x801086B0u; f_8004F9F8(c); // 801086AC
  c->r[3]=c->r[31]|c->r[31]; // 801086B0
  c->r[4]=0u+0x00000000u; // 801086B4
  c->lr=0x801086BCu; f_80039840(c); // 801086B8
  c->r[5]=c->r[1]+0x00000028u; // 801086BC
  c->r[4]=0u+0x00000000u; // 801086C0
  c->lr=0x801086C8u; f_8025892C(c); // 801086C4
  c->r[8]=0u+0x803A0000u; // 801086C8
  {uint32_t ea=c->r[8]+0xFFFFF628u; c->r[7]=R32(ea); c->r[8]=ea;} // 801086CC
  c->r[3]=c->r[1]+0x00000028u; // 801086D0
  c->r[4]=c->r[1]+0x00000008u; // 801086D4
  c->r[6]=R32(c->r[8]+0x00000004u); // 801086D8
  c->r[5]=R32(c->r[8]+0x00000008u); // 801086DC
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 801086E0
  W32(c->r[1]+0x00000008u,c->r[7]); // 801086E4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801086E8
  W32(c->r[1]+0x00000010u,c->r[5]); // 801086EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801086F0
  c->lr=0x801086F8u; f_8004F9F8(c); // 801086F4
  c->r[3]=c->r[31]|c->r[31]; // 801086F8
  c->r[4]=0u+0x00000000u; // 801086FC
  c->lr=0x80108704u; f_80039840(c); // 80108700
  c->r[4]=0u+0x803A0000u; // 80108704
  c->r[5]=c->r[1]+0x00000028u; // 80108708
  c->r[4]=c->r[4]+0xFFFFF644u; // 8010870C
  c->r[4]=c->r[4]+0x00000008u; // 80108710
  c->lr=0x80108718u; f_8025892C(c); // 80108714
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80108718
  c->r[3]=0u+0x00000001u; // 8010871C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80108720
  c->lr=c->r[0]; // 80108724
  c->r[1]=c->r[1]+0x00000040u; // 80108728
  return; // 8010872C
}

// fn_80108730
void f_80108730(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108730
  c->r[0]=c->lr; // 80108734
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108738
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010873C
  c->r[0]=R8(c->r[5]+0x00000003u); // 80108740
  cmps(c,0,(int32_t)c->r[0],1); // 80108744
  if (crb(c,2)) { goto L_8010879C; } // 80108748
  if (!crb(c,0)) { goto L_8010875C; } // 8010874C
  cmps(c,0,(int32_t)c->r[0],0); // 80108750
  if (!crb(c,0)) { goto L_80108768; } // 80108754
  goto L_801087FC; // 80108758
L_8010875C:;
  cmps(c,0,(int32_t)c->r[0],3); // 8010875C
  if (!crb(c,0)) { goto L_801087FC; } // 80108760
  goto L_801087CC; // 80108764
L_80108768:;
  c->r[4]=0u+0x00010000u; // 80108768
  c->r[3]=0u+0x00000075u; // 8010876C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80108770
  c->r[4]=0u+0x0000000Du; // 80108774
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 80108778
  c->lr=0x80108780u; f_80036C44(c); // 8010877C
  c->r[6]=0u+0x80620000u; // 80108780
  c->r[5]=c->r[3]|c->r[3]; // 80108784
  c->r[6]=c->r[6]+0x00007688u; // 80108788
  c->r[4]=0u+0x0000000Cu; // 8010878C
  c->r[3]=R32(c->r[6]+0x00000014u); // 80108790
  c->lr=0x80108798u; f_80038998(c); // 80108794
  goto L_801087FC; // 80108798
L_8010879C:;
  c->r[3]=0u+0x80620000u; // 8010879C
  c->r[4]=0u+0x0000000Cu; // 801087A0
  c->r[3]=c->r[3]+0x00007688u; // 801087A4
  c->r[3]=R32(c->r[3]+0x00000014u); // 801087A8
  c->lr=0x801087B0u; f_8003560C(c); // 801087AC
  cmps(c,0,(int32_t)c->r[3],0); // 801087B0
  if (crb(c,2)) { goto L_801087FC; } // 801087B4
  c->r[4]=0u+0x00010000u; // 801087B8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801087BC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801087C0
  c->lr=0x801087C8u; f_80036BA8(c); // 801087C4
  goto L_801087FC; // 801087C8
L_801087CC:;
  c->r[31]=0u+0x80620000u; // 801087CC
  c->r[4]=0u+0x0000000Cu; // 801087D0
  c->r[31]=c->r[31]+0x00007688u; // 801087D4
  c->r[3]=R32(c->r[31]+0x00000014u); // 801087D8
  c->lr=0x801087E0u; f_8003560C(c); // 801087DC
  cmps(c,0,(int32_t)c->r[3],0); // 801087E0
  if (crb(c,2)) { goto L_801087FC; } // 801087E4
  c->lr=0x801087ECu; f_80036D0C(c); // 801087E8
  c->r[3]=R32(c->r[31]+0x00000014u); // 801087EC
  c->r[4]=0u+0x0000000Cu; // 801087F0
  c->r[5]=0u+0x00000000u; // 801087F4
  c->lr=0x801087FCu; f_80038998(c); // 801087F8
L_801087FC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801087FC
  c->r[3]=0u+0x00000001u; // 80108800
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108804
  c->lr=c->r[0]; // 80108808
  c->r[1]=c->r[1]+0x00000010u; // 8010880C
  return; // 80108810
}

// fn_80108814
void f_80108814(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108814
  c->r[0]=c->lr; // 80108818
  c->r[3]=0u+0x80620000u; // 8010881C
  c->r[4]=0u+0x00000018u; // 80108820
  W32(c->r[1]+0x00000024u,c->r[0]); // 80108824
  c->r[3]=c->r[3]+0x00007688u; // 80108828
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010882C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80108830
  c->r[3]=R32(c->r[3]+0x00000014u); // 80108834
  c->lr=0x8010883Cu; f_8003560C(c); // 80108838
  c->r[4]=0u+0x80550000u; // 8010883C
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 80108840
  c->r[3]=c->r[4]+0xFFFFCE54u; // 80108844
  c->r[4]=0u+0x0000000Du; // 80108848
  c->lr=0x80108850u; f_8019C920(c); // 8010884C
  cmps(c,0,(int32_t)c->r[3],0); // 80108850
  c->r[30]=c->r[3]|c->r[3]; // 80108854
  if (crb(c,2)) { goto L_80108A18; } // 80108858
  c->r[4]=c->r[1]+0x00000008u; // 8010885C
  c->r[5]=0u+0x00000000u; // 80108860
  c->lr=0x80108868u; f_8007C6C8(c); // 80108864
  cmpu(c,0,c->r[31],0x00000006u); // 80108868
  if (crb(c,1)) { goto L_80108A00; } // 8010886C
  c->r[3]=0u+0x803E0000u; // 80108870
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80108874
  c->r[3]=c->r[3]+0x00005470u; // 80108878
  c->r[3]=R32(c->r[3]+c->r[0]); // 8010887C
  c->ctr=c->r[3]; // 80108880
  if (true) { switch (c->ctr) { case 0x80108888u: goto L_80108888; case 0x801088C0u: goto L_801088C0; case 0x801088F8u: goto L_801088F8; case 0x80108930u: goto L_80108930; case 0x80108968u: goto L_80108968; case 0x801089A0u: goto L_801089A0; case 0x801089D8u: goto L_801089D8; default: break; } dispatch(c,c->ctr); return; } // 80108884
L_80108888:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80108888
  {uint32_t ea=c->r[2]+0xFFFFB040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010888C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108890
  fcmp(c,0,c->f[1],c->f[0]); // 80108894
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80108898
  if (!crb(c,2)) { goto L_80108A00; } // 8010889C
  c->r[3]=c->r[30]|c->r[30]; // 801088A0
  c->r[4]=0u+0x00000004u; // 801088A4
  c->r[5]=0u+0x00000002u; // 801088A8
  c->r[6]=0u+0x00000001u; // 801088AC
  c->r[7]=0u+0x00000001u; // 801088B0
  c->lr=0x801088B8u; f_8017900C(c); // 801088B4
  c->r[31]=c->r[31]+0x00000001u; // 801088B8
  goto L_80108A00; // 801088BC
L_801088C0:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801088C0
  {uint32_t ea=c->r[2]+0xFFFFB044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801088C4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801088C8
  fcmp(c,0,c->f[1],c->f[0]); // 801088CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801088D0
  if (!crb(c,2)) { goto L_80108A00; } // 801088D4
  c->r[3]=c->r[30]|c->r[30]; // 801088D8
  c->r[4]=0u+0x00000004u; // 801088DC
  c->r[5]=0u+0x00000002u; // 801088E0
  c->r[6]=0u+0x00000001u; // 801088E4
  c->r[7]=0u+0x00000001u; // 801088E8
  c->lr=0x801088F0u; f_8017900C(c); // 801088EC
  c->r[31]=c->r[31]+0x00000001u; // 801088F0
  goto L_80108A00; // 801088F4
L_801088F8:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801088F8
  {uint32_t ea=c->r[2]+0xFFFFB048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801088FC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108900
  fcmp(c,0,c->f[1],c->f[0]); // 80108904
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80108908
  if (!crb(c,2)) { goto L_80108A00; } // 8010890C
  c->r[3]=c->r[30]|c->r[30]; // 80108910
  c->r[4]=0u+0x00000004u; // 80108914
  c->r[5]=0u+0x00000002u; // 80108918
  c->r[6]=0u+0x00000001u; // 8010891C
  c->r[7]=0u+0x00000001u; // 80108920
  c->lr=0x80108928u; f_8017900C(c); // 80108924
  c->r[31]=c->r[31]+0x00000001u; // 80108928
  goto L_80108A00; // 8010892C
L_80108930:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80108930
  {uint32_t ea=c->r[2]+0xFFFFB04Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80108934
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108938
  fcmp(c,0,c->f[1],c->f[0]); // 8010893C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80108940
  if (!crb(c,2)) { goto L_80108A00; } // 80108944
  c->r[3]=c->r[30]|c->r[30]; // 80108948
  c->r[4]=0u+0x00000004u; // 8010894C
  c->r[5]=0u+0x00000003u; // 80108950
  c->r[6]=0u+0x00000001u; // 80108954
  c->r[7]=0u+0x00000001u; // 80108958
  c->lr=0x80108960u; f_8017900C(c); // 8010895C
  c->r[31]=c->r[31]+0x00000001u; // 80108960
  goto L_80108A00; // 80108964
L_80108968:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80108968
  {uint32_t ea=c->r[2]+0xFFFFB050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010896C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108970
  fcmp(c,0,c->f[1],c->f[0]); // 80108974
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80108978
  if (!crb(c,2)) { goto L_80108A00; } // 8010897C
  c->r[3]=c->r[30]|c->r[30]; // 80108980
  c->r[4]=0u+0x00000004u; // 80108984
  c->r[5]=0u+0x00000003u; // 80108988
  c->r[6]=0u+0x00000001u; // 8010898C
  c->r[7]=0u+0x00000001u; // 80108990
  c->lr=0x80108998u; f_8017900C(c); // 80108994
  c->r[31]=c->r[31]+0x00000001u; // 80108998
  goto L_80108A00; // 8010899C
L_801089A0:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801089A0
  {uint32_t ea=c->r[2]+0xFFFFB054u; c->f[0]=c->ps1[0]=RF32(ea);} // 801089A4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801089A8
  fcmp(c,0,c->f[1],c->f[0]); // 801089AC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801089B0
  if (!crb(c,2)) { goto L_80108A00; } // 801089B4
  c->r[3]=c->r[30]|c->r[30]; // 801089B8
  c->r[4]=0u+0x00000004u; // 801089BC
  c->r[5]=0u+0x00000003u; // 801089C0
  c->r[6]=0u+0x00000001u; // 801089C4
  c->r[7]=0u+0x00000001u; // 801089C8
  c->lr=0x801089D0u; f_8017900C(c); // 801089CC
  c->r[31]=c->r[31]+0x00000001u; // 801089D0
  goto L_80108A00; // 801089D4
L_801089D8:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801089D8
  {uint32_t ea=c->r[2]+0xFFFFB038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801089DC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801089E0
  fcmp(c,0,c->f[1],c->f[0]); // 801089E4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801089E8
  if (!crb(c,2)) { goto L_80108A00; } // 801089EC
  {uint32_t ea=c->r[2]+0xFFFFB058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801089F0
  fcmp(c,0,c->f[1],c->f[0]); // 801089F4
  if (!crb(c,0)) { goto L_80108A00; } // 801089F8
  c->r[31]=0u+0x00000000u; // 801089FC
L_80108A00:;
  c->r[3]=0u+0x80620000u; // 80108A00
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 80108A04
  c->r[3]=c->r[3]+0x00007688u; // 80108A08
  c->r[4]=0u+0x00000018u; // 80108A0C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80108A10
  c->lr=0x80108A18u; f_80038998(c); // 80108A14
L_80108A18:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80108A18
  c->r[3]=0u+0x00000001u; // 80108A1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80108A20
  c->r[0]=R32(c->r[1]+0x00000024u); // 80108A24
  c->lr=c->r[0]; // 80108A28
  c->r[1]=c->r[1]+0x00000020u; // 80108A2C
  return; // 80108A30
}

// fn_80108A34
void f_80108A34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108A34
  c->r[0]=c->lr; // 80108A38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108A3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80108A40
  c->r[31]=0u+0x80620000u; // 80108A44
  c->r[31]=c->r[31]+0x00007688u; // 80108A48
  c->r[3]=R32(c->r[31]+0x00000014u); // 80108A4C
  c->lr=0x80108A54u; f_80108A84(c); // 80108A50
  cmpu(c,0,c->r[3],0x00000001u); // 80108A54
  if (!crb(c,2)) { goto L_80108A6C; } // 80108A58
  c->r[3]=R32(c->r[31]+0x00000014u); // 80108A5C
  c->r[4]=0u+0x00000019u; // 80108A60
  c->r[5]=0u+0x00000001u; // 80108A64
  c->lr=0x80108A6Cu; f_80038998(c); // 80108A68
L_80108A6C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80108A6C
  c->r[3]=0u+0x00000001u; // 80108A70
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108A74
  c->lr=c->r[0]; // 80108A78
  c->r[1]=c->r[1]+0x00000010u; // 80108A7C
  return; // 80108A80
}

// fn_80108A84
void f_80108A84(Ctx* __restrict c) {
  c->r[4]=0u+0x0000000Du; // 80108A84
  f_800AD034(c); return; // 80108A88
}

// fn_80108A8C
void f_80108A8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108A8C
  c->r[0]=c->lr; // 80108A90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108A94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80108A98
  c->r[0]=R8(c->r[5]+0x00000003u); // 80108A9C
  cmps(c,0,(int32_t)c->r[0],0); // 80108AA0
  if (!crb(c,2)) { goto L_80108AD0; } // 80108AA4
  c->r[3]=0u+0x80620000u; // 80108AA8
  c->r[4]=0u+0x00000001u; // 80108AAC
  c->r[3]=c->r[3]+0x00007688u; // 80108AB0
  c->r[3]=R32(c->r[3]+0x00000014u); // 80108AB4
  c->lr=0x80108ABCu; f_801C2608(c); // 80108AB8
  c->r[3]=0u+0x80550000u; // 80108ABC
  c->r[4]=0u+0x00000001u; // 80108AC0
  c->r[3]=c->r[3]+0xFFFFBFD4u; // 80108AC4
  c->lr=0x80108ACCu; f_8017B4C8(c); // 80108AC8
  goto L_80108AF8; // 80108ACC
L_80108AD0:;
  c->r[31]=0u+0x80550000u; // 80108AD0
  c->r[3]=c->r[31]+0xFFFFBFD4u; // 80108AD4
  c->lr=0x80108ADCu; f_8017B33C(c); // 80108AD8
  cmps(c,0,(int32_t)c->r[3],0); // 80108ADC
  if (crb(c,2)) { goto L_80108AF0; } // 80108AE0
  c->r[3]=c->r[31]+0xFFFFBFD4u; // 80108AE4
  c->lr=0x80108AECu; f_8017B368(c); // 80108AE8
  goto L_80108AF8; // 80108AEC
L_80108AF0:;
  c->r[3]=0u+0x00000002u; // 80108AF0
  goto L_80108AFC; // 80108AF4
L_80108AF8:;
  c->r[3]=0u+0x00000001u; // 80108AF8
L_80108AFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108AFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80108B00
  c->lr=c->r[0]; // 80108B04
  c->r[1]=c->r[1]+0x00000010u; // 80108B08
  return; // 80108B0C
}

// fn_80108B10
void f_80108B10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108B10
  c->r[0]=c->lr; // 80108B14
  c->r[7]=0u+0x803E0000u; // 80108B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108B1C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80108B20
  c->r[7]=c->r[7]+0x00005490u; // 80108B24
  c->r[4]=c->r[5]|c->r[5]; // 80108B28
  c->r[5]=c->r[6]|c->r[6]; // 80108B2C
  c->r[12]=c->r[7]+c->r[0]; // 80108B30
  c->lr=0x80108B38u; f_802BA00C(c); // 80108B34
  c->r[0]=c->r[0]|0x00000000u; // 80108B38
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108B3C
  c->lr=c->r[0]; // 80108B40
  c->r[1]=c->r[1]+0x00000010u; // 80108B44
  return; // 80108B48
}

// fn_80108B4C
void f_80108B4C(Ctx* __restrict c) {
  c->r[3]=0u+0x80620000u; // 80108B4C
  c->r[3]=c->r[3]+0x00007688u; // 80108B50
  c->r[3]=R32(c->r[3]+0x00000014u); // 80108B54
  goto L_80108B5C; // 80108B58
L_80108B5C:;
  c->r[4]=R8(c->r[3]+0x000023F0u); // 80108B5C
  c->r[3]=addc(c,~c->r[4],0x000000FFu,1); // 80108B60
  c->r[0]=c->r[4]+0xFFFFFF01u; // 80108B64
  c->r[0]=c->r[3]|c->r[0]; // 80108B68
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80108B6C
  return; // 80108B70
}

// fn_80108B74
void f_80108B74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108B74
  c->r[0]=c->lr; // 80108B78
  c->r[7]=0u+0x803E0000u; // 80108B7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108B80
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80108B84
  c->r[7]=c->r[7]+0x00005568u; // 80108B88
  c->r[4]=c->r[5]|c->r[5]; // 80108B8C
  c->r[5]=c->r[6]|c->r[6]; // 80108B90
  c->r[12]=c->r[7]+c->r[0]; // 80108B94
  c->lr=0x80108B9Cu; f_802BA00C(c); // 80108B98
  c->r[0]=c->r[0]|0x00000000u; // 80108B9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108BA0
  c->lr=c->r[0]; // 80108BA4
  c->r[1]=c->r[1]+0x00000010u; // 80108BA8
  return; // 80108BAC
}

// fn_80108BB0
void f_80108BB0(Ctx* __restrict c) {
  return; // 80108BB0
}

