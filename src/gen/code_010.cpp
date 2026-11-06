#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800ED188
void f_800ED188(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED188
  c->r[0]=c->lr; // 800ED18C
  W32(c->r[1]+0x00000084u,c->r[0]); // 800ED190
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800ED194
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800ED198
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 800ED19C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 800ED1A0
  c->r[4]=0u+0x00000000u; // 800ED1A4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800ED1A8
  c->r[31]=0u+0x803A0000u; // 800ED1AC
  c->r[31]=c->r[31]+0xFFFFEB10u; // 800ED1B0
  W32(c->r[1]+0x00000058u,c->r[30]); // 800ED1B4
  c->r[30]=c->r[3]|c->r[3]; // 800ED1B8
  W32(c->r[1]+0x00000054u,c->r[29]); // 800ED1BC
  c->r[3]=R32(c->r[3]+0x00000438u); // 800ED1C0
  c->lr=0x800ED1C8u; f_801FAF00(c); // 800ED1C4
  cmps(c,0,(int32_t)c->r[3],0); // 800ED1C8
  if (!crb(c,2)) { goto L_800ED300; } // 800ED1CC
  c->r[3]=c->r[30]|c->r[30]; // 800ED1D0
  c->r[4]=0u+0x0000003Eu; // 800ED1D4
  c->lr=0x800ED1DCu; f_801F5AB4(c); // 800ED1D8
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800ED1DC
  c->r[4]=0u+0x00000000u; // 800ED1E0
  c->r[3]=0u+0x805D0000u; // 800ED1E4
  W8(c->r[30]+0x00000075u,c->r[4]); // 800ED1E8
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800ED1EC
  c->r[0]=c->r[0]|0x00000004u; // 800ED1F0
  c->r[3]=c->r[3]+0x00003F6Cu; // 800ED1F4
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800ED1F8
  c->lr=0x800ED200u; f_800567B4(c); // 800ED1FC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800ED200
  cmps(c,0,(int32_t)c->r[0],6); // 800ED204
  if (!crb(c,2)) { goto L_800ED28C; } // 800ED208
  c->r[3]=R32(c->r[30]+0x00000394u); // 800ED20C
  {uint32_t ea=c->r[2]+0xFFFFA828u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED210
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED214
  fcmp(c,0,c->f[1],c->f[0]); // 800ED218
  if (!crb(c,0)) { goto L_800ED28C; } // 800ED21C
  c->r[3]=c->r[31]+0x00000054u; // 800ED220
  c->r[6]=R32(c->r[31]+0x00000054u); // 800ED224
  c->r[5]=R32(c->r[3]+0x00000004u); // 800ED228
  c->r[4]=c->r[1]+0x00000020u; // 800ED22C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800ED230
  W32(c->r[1]+0x00000020u,c->r[6]); // 800ED234
  W32(c->r[1]+0x00000024u,c->r[5]); // 800ED238
  W32(c->r[1]+0x00000028u,c->r[0]); // 800ED23C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800ED240
  c->r[3]=c->r[3]+0x0000005Cu; // 800ED244
  c->lr=0x800ED24Cu; f_800361A0(c); // 800ED248
  c->r[5]=R32(c->r[30]+0x00000394u); // 800ED24C
  c->r[3]=c->r[31]+0x00000060u; // 800ED250
  {uint32_t ea=c->r[2]+0xFFFFA82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED254
  c->r[4]=c->r[1]+0x00000014u; // 800ED258
  {uint32_t ea=c->r[5]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED25C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800ED260
  {uint32_t ea=c->r[5]+0x00000060u; WF32(ea,c->f[0]);} // 800ED264
  c->r[6]=R32(c->r[31]+0x00000060u); // 800ED268
  c->r[5]=R32(c->r[3]+0x00000004u); // 800ED26C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800ED270
  W32(c->r[1]+0x00000014u,c->r[6]); // 800ED274
  W32(c->r[1]+0x00000018u,c->r[5]); // 800ED278
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800ED27C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800ED280
  c->r[3]=c->r[3]+0x00000068u; // 800ED284
  c->lr=0x800ED28Cu; f_800361A0(c); // 800ED288
L_800ED28C:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800ED28C
  c->r[3]=c->r[30]+0x0000002Cu; // 800ED290
  c->r[4]=c->r[4]+0x0000005Cu; // 800ED294
  c->lr=0x800ED29Cu; f_800361A0(c); // 800ED298
  c->r[4]=R32(c->r[30]+0x00000394u); // 800ED29C
  c->r[3]=c->r[30]+0x00000060u; // 800ED2A0
  c->r[4]=c->r[4]+0x00000068u; // 800ED2A4
  c->lr=0x800ED2ACu; f_800361A0(c); // 800ED2A8
  c->r[6]=R32(c->r[30]+0x0000002Cu); // 800ED2AC
  c->r[3]=0u+0x805D0000u; // 800ED2B0
  c->r[0]=R32(c->r[30]+0x00000030u); // 800ED2B4
  c->r[3]=c->r[3]+0x00006CF8u; // 800ED2B8
  c->r[4]=c->r[1]+0x00000008u; // 800ED2BC
  c->r[5]=0u+0x00040000u; // 800ED2C0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800ED2C4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800ED2C8
  c->r[0]=R32(c->r[30]+0x00000034u); // 800ED2CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800ED2D0
  c->lr=0x800ED2D8u; f_802236F8(c); // 800ED2D4
  W16(c->r[30]+0x000003B8u,c->r[3]); // 800ED2D8
  c->r[3]=c->r[30]|c->r[30]; // 800ED2DC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800ED2E0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800ED2E4
  c->ctr=c->r[12]; // 800ED2E8
  if (true) { c->lr=0x800ED2F0u; dispatch(c,c->ctr); } // 800ED2EC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800ED2F0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800ED2F4
  c->lr=0x800ED2FCu; f_8025037C(c); // 800ED2F8
  goto L_800ED408; // 800ED2FC
L_800ED300:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800ED300
  c->r[3]=c->r[30]+0x0000002Cu; // 800ED304
  c->r[4]=c->r[4]+0x0000005Cu; // 800ED308
  c->lr=0x800ED310u; f_800361A0(c); // 800ED30C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800ED310
  c->r[3]=c->r[30]+0x00000060u; // 800ED314
  c->r[4]=c->r[4]+0x00000068u; // 800ED318
  c->lr=0x800ED320u; f_800361A0(c); // 800ED31C
  c->r[0]=R8(c->r[30]+0x00000075u); // 800ED320
  cmps(c,0,(int32_t)c->r[0],0); // 800ED324
  if (crb(c,2)) { goto L_800ED408; } // 800ED328
  c->r[3]=R32(c->r[30]+0x00000438u); // 800ED32C
  c->lr=0x800ED334u; f_80050BE4(c); // 800ED330
  cmps(c,0,(int32_t)c->r[3],0); // 800ED334
  if (crb(c,2)) { goto L_800ED408; } // 800ED338
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800ED33C
  c->r[29]=0u+0x43300000u; // 800ED340
  c->r[4]=0u+0x00000000u; // 800ED344
  W32(c->r[1]+0x00000030u,c->r[29]); // 800ED348
  {uint32_t ea=c->r[2]+0xFFFFA818u; c->f[2]=RF64(ea);} // 800ED34C
  c->r[3]=c->r[13]+0xFFFFAB38u; // 800ED350
  W32(c->r[1]+0x00000034u,c->r[0]); // 800ED354
  {uint32_t ea=c->r[2]+0xFFFFA810u; c->f[31]=c->ps1[31]=RF32(ea);} // 800ED358
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 800ED35C
  {uint32_t ea=c->r[2]+0xFFFFA830u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED360
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800ED364
  W8(c->r[30]+0x00000075u,c->r[4]); // 800ED368
  c->f[31]=c->ps1[31]=S(std::fma(c->f[0],c->f[1],c->f[31])); // 800ED36C
  c->lr=0x800ED374u; f_80211724(c); // 800ED370
  c->r[4]=0u+0xAAAB0000u; // 800ED374
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800ED378
  c->r[4]=c->r[4]+0xFFFFAAABu; // 800ED37C
  W32(c->r[1]+0x00000040u,c->r[29]); // 800ED380
  c->r[4]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[3])>>32); // 800ED384
  {uint32_t ea=c->r[2]+0xFFFFA818u; c->f[4]=RF64(ea);} // 800ED388
  W32(c->r[1]+0x00000044u,c->r[0]); // 800ED38C
  {uint32_t ea=c->r[2]+0xFFFFA834u; c->f[3]=c->ps1[3]=RF32(ea);} // 800ED390
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 800ED394
  W32(c->r[1]+0x00000038u,c->r[29]); // 800ED398
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 800ED39C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 800ED3A0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)3); // 800ED3A4
  {uint32_t ea=c->r[2]+0xFFFFA82Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED3A8
  {uint32_t ea=c->r[2]+0xFFFFA838u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED3AC
  c->f[30]=c->ps1[30]=S(std::fma(c->f[1],c->f[2],c->f[3])); // 800ED3B0
  c->r[0]=c->r[3]-c->r[0]; // 800ED3B4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800ED3B8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 800ED3BC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 800ED3C0
  c->f[31]=c->ps1[31]=S(std::fma(c->f[3],c->f[1],c->f[31])); // 800ED3C4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 800ED3C8
  c->lr=0x800ED3D0u; f_802C10A8(c); // 800ED3CC
  c->f[3]=c->ps1[3]=S(c->f[30]*c->f[1]); // 800ED3D0
  {uint32_t ea=c->r[2]+0xFFFFA838u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED3D4
  {uint32_t ea=c->r[2]+0xFFFFA814u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ED3D8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 800ED3DC
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[3]);} // 800ED3E0
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[2]);} // 800ED3E4
  c->lr=0x800ED3ECu; f_802C1080(c); // 800ED3E8
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 800ED3EC
  c->r[3]=R32(c->r[30]+0x00000438u); // 800ED3F0
  c->r[5]=c->r[30]+0x00000044u; // 800ED3F4
  c->r[6]=c->r[31]+0x00000000u; // 800ED3F8
  c->r[4]=0u+0x00000000u; // 800ED3FC
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800ED400
  c->lr=0x800ED408u; f_801FBEC0(c); // 800ED404
L_800ED408:;
  c->r[3]=c->r[30]|c->r[30]; // 800ED408
  c->r[4]=0u+0x00000000u; // 800ED40C
  c->lr=0x800ED414u; f_801F7C00(c); // 800ED410
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800ED414
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800ED418
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 800ED41C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 800ED420
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800ED424
  c->r[30]=R32(c->r[1]+0x00000058u); // 800ED428
  c->r[0]=R32(c->r[1]+0x00000084u); // 800ED42C
  c->r[29]=R32(c->r[1]+0x00000054u); // 800ED430
  c->lr=c->r[0]; // 800ED434
  c->r[1]=c->r[1]+0x00000080u; // 800ED438
  return; // 800ED43C
}

// fn_800ED440
void f_800ED440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED440
  c->r[0]=c->lr; // 800ED444
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED44C
  c->r[31]=c->r[3]|c->r[3]; // 800ED450
  c->r[4]=R32(c->r[3]+0x00000394u); // 800ED454
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800ED458
  c->lr=0x800ED460u; f_802501B0(c); // 800ED45C
  c->r[0]=0u+0x00000001u; // 800ED460
  c->r[3]=c->r[31]|c->r[31]; // 800ED464
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800ED468
  W8(c->r[31]+0x00000078u,c->r[0]); // 800ED46C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800ED470
  c->r[12]=R32(c->r[12]+0x00000050u); // 800ED474
  c->ctr=c->r[12]; // 800ED478
  if (true) { c->lr=0x800ED480u; dispatch(c,c->ctr); } // 800ED47C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED480
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED484
  c->lr=c->r[0]; // 800ED488
  c->r[1]=c->r[1]+0x00000010u; // 800ED48C
  return; // 800ED490
}

// fn_800ED494
void f_800ED494(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800ED494
  c->r[4]=0u+0x00000000u; // 800ED498
  W8(c->r[3]+0x0000006Fu,c->r[4]); // 800ED49C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800ED4A0
  W8(c->r[3]+0x00000078u,c->r[4]); // 800ED4A4
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800ED4A8
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800ED4AC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800ED4B0
  c->ctr=c->r[12]; // 800ED4B4
  if (true) { dispatch(c,c->ctr); return; } // 800ED4B8
}

// fn_800ED4BC
void f_800ED4BC(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800ED4BC
  c->r[4]=0u+0x00000000u; // 800ED4C0
  W8(c->r[3]+0x0000006Fu,c->r[4]); // 800ED4C4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800ED4C8
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800ED4CC
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800ED4D0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800ED4D4
  c->ctr=c->r[12]; // 800ED4D8
  if (true) { dispatch(c,c->ctr); return; } // 800ED4DC
}

// fn_800ED4E0
void f_800ED4E0(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800ED4E0
  c->r[4]=0u+0x00000001u; // 800ED4E4
  W8(c->r[3]+0x0000006Fu,c->r[4]); // 800ED4E8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800ED4EC
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800ED4F0
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800ED4F4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800ED4F8
  c->ctr=c->r[12]; // 800ED4FC
  if (true) { dispatch(c,c->ctr); return; } // 800ED500
}

// fn_800ED504
void f_800ED504(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED504
  c->r[0]=c->lr; // 800ED508
  c->r[5]=0u+0x00000000u; // 800ED50C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED510
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED514
  c->r[31]=c->r[3]|c->r[3]; // 800ED518
  c->r[3]=0u+0x000004C4u; // 800ED51C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800ED520
  c->r[4]=c->r[4]+0x0000010Cu; // 800ED524
  c->lr=0x800ED52Cu; f_8024EE50(c); // 800ED528
  cmps(c,0,(int32_t)c->r[3],0); // 800ED52C
  if (crb(c,2)) { goto L_800ED53C; } // 800ED530
  c->r[3]=0u+0x00000000u; // 800ED534
  goto L_800ED548; // 800ED538
L_800ED53C:;
  c->r[3]=c->r[31]+0x00000210u; // 800ED53C
  c->r[4]=0u+0x000000E1u; // 800ED540
  c->lr=0x800ED548u; f_80221630(c); // 800ED544
L_800ED548:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED548
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED54C
  c->lr=c->r[0]; // 800ED550
  c->r[1]=c->r[1]+0x00000010u; // 800ED554
  return; // 800ED558
}

// fn_800ED55C
void f_800ED55C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED55C
  c->r[0]=c->lr; // 800ED560
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED564
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED568
  c->r[31]=0u+0x805D0000u; // 800ED56C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800ED570
  c->r[30]=c->r[3]|c->r[3]; // 800ED574
  c->r[3]=c->r[31]+0x00003F6Cu; // 800ED578
  c->lr=0x800ED580u; f_80045264(c); // 800ED57C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800ED580
  cmpu(c,0,c->r[0],0x0000003Eu); // 800ED584
  if (!crb(c,2)) { goto L_800ED5C4; } // 800ED588
  c->r[3]=c->r[31]+0x00003F6Cu; // 800ED58C
  c->lr=0x800ED594u; f_80037AF0(c); // 800ED590
  cmpu(c,0,c->r[3],c->r[30]); // 800ED594
  if (!crb(c,2)) { goto L_800ED5C4; } // 800ED598
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800ED59C
  cmps(c,0,(int32_t)c->r[0],103); // 800ED5A0
  if (crb(c,2)) { goto L_800ED5C4; } // 800ED5A4
  {uint32_t ea=c->r[2]+0xFFFFA810u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED5A8
  c->r[3]=c->r[30]|c->r[30]; // 800ED5AC
  c->r[4]=0u+0x00000067u; // 800ED5B0
  c->r[5]=0u+0x00000000u; // 800ED5B4
  c->r[6]=0u+0x00000000u; // 800ED5B8
  c->r[7]=0u+0x00000000u; // 800ED5BC
  c->lr=0x800ED5C4u; f_801F4D44(c); // 800ED5C0
L_800ED5C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED5C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED5C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ED5CC
  c->lr=c->r[0]; // 800ED5D0
  c->r[1]=c->r[1]+0x00000010u; // 800ED5D4
  return; // 800ED5D8
}

// fn_800ED5DC
void f_800ED5DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED5DC
  c->r[0]=c->lr; // 800ED5E0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800ED5E4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800ED5E8
  c->r[31]=0u+0x803D0000u; // 800ED5EC
  c->r[31]=c->r[31]+0x000042D8u; // 800ED5F0
  W32(c->r[1]+0x00000058u,c->r[30]); // 800ED5F4
  c->r[30]=c->r[3]|c->r[3]; // 800ED5F8
  c->lr=0x800ED600u; f_801F4F28(c); // 800ED5FC
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800ED600
  cmps(c,0,(int32_t)c->r[0],104); // 800ED604
  if (crb(c,2)) { goto L_800ED6C8; } // 800ED608
  if (!crb(c,0)) { goto L_800ED628; } // 800ED60C
  cmps(c,0,(int32_t)c->r[0],102); // 800ED610
  if (crb(c,2)) { goto L_800ED668; } // 800ED614
  if (!crb(c,0)) { goto L_800ED698; } // 800ED618
  cmps(c,0,(int32_t)c->r[0],101); // 800ED61C
  if (!crb(c,0)) { goto L_800ED638; } // 800ED620
  goto L_800ED754; // 800ED624
L_800ED628:;
  cmps(c,0,(int32_t)c->r[0],106); // 800ED628
  if (crb(c,2)) { goto L_800ED728; } // 800ED62C
  if (!crb(c,0)) { goto L_800ED754; } // 800ED630
  goto L_800ED6F8; // 800ED634
L_800ED638:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800ED638
  c->r[5]=c->r[31]+0x0000000Cu; // 800ED63C
  c->r[3]=c->r[30]|c->r[30]; // 800ED640
  c->r[4]=c->r[1]+0x00000044u; // 800ED644
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800ED648
  c->r[6]=R32(c->r[5]+0x00000004u); // 800ED64C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800ED650
  W32(c->r[1]+0x00000044u,c->r[7]); // 800ED654
  W32(c->r[1]+0x00000048u,c->r[6]); // 800ED658
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800ED65C
  c->lr=0x800ED664u; f_800ED12C(c); // 800ED660
  goto L_800ED754; // 800ED664
L_800ED668:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800ED668
  c->r[5]=c->r[31]+0x00000018u; // 800ED66C
  c->r[3]=c->r[30]|c->r[30]; // 800ED670
  c->r[4]=c->r[1]+0x00000038u; // 800ED674
  c->r[7]=R32(c->r[31]+0x00000018u); // 800ED678
  c->r[6]=R32(c->r[5]+0x00000004u); // 800ED67C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800ED680
  W32(c->r[1]+0x00000038u,c->r[7]); // 800ED684
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 800ED688
  W32(c->r[1]+0x00000040u,c->r[0]); // 800ED68C
  c->lr=0x800ED694u; f_800ED12C(c); // 800ED690
  goto L_800ED754; // 800ED694
L_800ED698:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800ED698
  c->r[5]=c->r[31]+0x00000024u; // 800ED69C
  c->r[3]=c->r[30]|c->r[30]; // 800ED6A0
  c->r[4]=c->r[1]+0x0000002Cu; // 800ED6A4
  c->r[7]=R32(c->r[31]+0x00000024u); // 800ED6A8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800ED6AC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800ED6B0
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800ED6B4
  W32(c->r[1]+0x00000030u,c->r[6]); // 800ED6B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800ED6BC
  c->lr=0x800ED6C4u; f_800ED12C(c); // 800ED6C0
  goto L_800ED754; // 800ED6C4
L_800ED6C8:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800ED6C8
  c->r[5]=c->r[31]+0x00000030u; // 800ED6CC
  c->r[3]=c->r[30]|c->r[30]; // 800ED6D0
  c->r[4]=c->r[1]+0x00000020u; // 800ED6D4
  c->r[7]=R32(c->r[31]+0x00000030u); // 800ED6D8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800ED6DC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800ED6E0
  W32(c->r[1]+0x00000020u,c->r[7]); // 800ED6E4
  W32(c->r[1]+0x00000024u,c->r[6]); // 800ED6E8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800ED6EC
  c->lr=0x800ED6F4u; f_800ED12C(c); // 800ED6F0
  goto L_800ED754; // 800ED6F4
L_800ED6F8:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800ED6F8
  c->r[5]=c->r[31]+0x0000003Cu; // 800ED6FC
  c->r[3]=c->r[30]|c->r[30]; // 800ED700
  c->r[4]=c->r[1]+0x00000014u; // 800ED704
  c->r[7]=R32(c->r[31]+0x0000003Cu); // 800ED708
  c->r[6]=R32(c->r[5]+0x00000004u); // 800ED70C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800ED710
  W32(c->r[1]+0x00000014u,c->r[7]); // 800ED714
  W32(c->r[1]+0x00000018u,c->r[6]); // 800ED718
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800ED71C
  c->lr=0x800ED724u; f_800ED12C(c); // 800ED720
  goto L_800ED754; // 800ED724
L_800ED728:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800ED728
  c->r[5]=c->r[31]+0x00000048u; // 800ED72C
  c->r[3]=c->r[30]|c->r[30]; // 800ED730
  c->r[4]=c->r[1]+0x00000008u; // 800ED734
  c->r[7]=R32(c->r[31]+0x00000048u); // 800ED738
  c->r[6]=R32(c->r[5]+0x00000004u); // 800ED73C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800ED740
  W32(c->r[1]+0x00000008u,c->r[7]); // 800ED744
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800ED748
  W32(c->r[1]+0x00000010u,c->r[0]); // 800ED74C
  c->lr=0x800ED754u; f_800ED12C(c); // 800ED750
L_800ED754:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 800ED754
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800ED758
  c->r[30]=R32(c->r[1]+0x00000058u); // 800ED75C
  c->lr=c->r[0]; // 800ED760
  c->r[1]=c->r[1]+0x00000060u; // 800ED764
  return; // 800ED768
}

// fn_800ED76C
void f_800ED76C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED76C
  c->r[0]=c->lr; // 800ED770
  c->r[6]=c->r[4]|c->r[4]; // 800ED774
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED778
  c->r[0]=R8(c->r[3]+0x00000074u); // 800ED77C
  cmps(c,0,(int32_t)c->r[0],1); // 800ED780
  if (crb(c,2)) { goto L_800ED790; } // 800ED784
  c->r[5]=0u+0x00000000u; // 800ED788
  goto L_800ED794; // 800ED78C
L_800ED790:;
  c->r[5]=0u+0x0000000Au; // 800ED790
L_800ED794:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800ED794
  c->r[3]=c->r[6]|c->r[6]; // 800ED798
  c->lr=0x800ED7A0u; f_80250BF4(c); // 800ED79C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED7A0
  if (crb(c,2)) { goto L_800ED7B0; } // 800ED7A4
  c->r[3]=0u+0x00000000u; // 800ED7A8
  goto L_800ED7B4; // 800ED7AC
L_800ED7B0:;
  c->r[3]=0u+0xFFFFFFFFu; // 800ED7B0
L_800ED7B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED7B4
  c->lr=c->r[0]; // 800ED7B8
  c->r[1]=c->r[1]+0x00000010u; // 800ED7BC
  return; // 800ED7C0
}

// fn_800ED7C4
void f_800ED7C4(Ctx* __restrict c) {
  W8(c->r[3]+0x00000074u,c->r[4]); // 800ED7C4
  return; // 800ED7C8
}

// fn_800ED7CC
void f_800ED7CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED7CC
  c->r[0]=c->lr; // 800ED7D0
  c->r[7]=0u+0x803D0000u; // 800ED7D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ED7D8
  c->r[4]=c->r[1]+0x00000008u; // 800ED7DC
  {uint32_t ea=c->r[7]+0x0000432Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800ED7E0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800ED7E4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800ED7E8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800ED7EC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800ED7F0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800ED7F4
  c->lr=0x800ED7FCu; f_800ED12C(c); // 800ED7F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ED7FC
  c->lr=c->r[0]; // 800ED800
  c->r[1]=c->r[1]+0x00000020u; // 800ED804
  return; // 800ED808
}

// fn_800ED80C
void f_800ED80C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED80C
  c->r[0]=c->lr; // 800ED810
  c->r[4]=0u+0x00000020u; // 800ED814
  W32(c->r[1]+0x00000094u,c->r[0]); // 800ED818
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800ED81C
  c->r[31]=0u+0x80620000u; // 800ED820
  c->r[31]=c->r[31]+0x00007688u; // 800ED824
  W32(c->r[1]+0x00000088u,c->r[30]); // 800ED828
  c->r[30]=c->r[3]|c->r[3]; // 800ED82C
  c->r[3]=R32(c->r[31]+0x00000014u); // 800ED830
  c->lr=0x800ED838u; f_80038AF4(c); // 800ED834
  cmps(c,0,(int32_t)c->r[3],0); // 800ED838
  if (crb(c,2)) { goto L_800ED8DC; } // 800ED83C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800ED840
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800ED844
  cmps(c,0,(int32_t)c->r[0],0); // 800ED848
  if (!crb(c,2)) { goto L_800ED8DC; } // 800ED84C
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800ED850
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800ED854
  if (crb(c,2)) { goto L_800ED8DC; } // 800ED858
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800ED85C
  cmps(c,0,(int32_t)c->r[0],128); // 800ED860
  if (!crb(c,2)) { goto L_800ED884; } // 800ED864
  c->r[3]=R32(c->r[31]+0x00000014u); // 800ED868
  cmps(c,0,(int32_t)c->r[3],0); // 800ED86C
  if (crb(c,2)) { goto L_800ED884; } // 800ED870
  c->r[4]=0u+0x00000002u; // 800ED874
  c->lr=0x800ED87Cu; f_80037670(c); // 800ED878
  cmps(c,0,(int32_t)c->r[3],0); // 800ED87C
  if (!crb(c,2)) { goto L_800ED8DC; } // 800ED880
L_800ED884:;
  c->r[0]=R8(c->r[30]+0x00000077u); // 800ED884
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800ED888
  if (!crb(c,2)) { goto L_800ED8DC; } // 800ED88C
  {uint32_t ea=c->r[2]+0xFFFFA83Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED890
  c->r[3]=c->r[1]+0x00000008u; // 800ED894
  c->r[4]=c->r[30]+0x0000002Cu; // 800ED898
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800ED89C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800ED8A0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800ED8A4
  c->lr=0x800ED8ACu; f_800361A0(c); // 800ED8A8
  c->r[31]=0u+0x80550000u; // 800ED8AC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED8B0
  c->r[31]=c->r[31]+0x00003D60u; // 800ED8B4
  c->r[5]=c->r[30]|c->r[30]; // 800ED8B8
  c->r[3]=c->r[31]+0x00000010u; // 800ED8BC
  c->r[6]=c->r[1]+0x00000008u; // 800ED8C0
  c->r[7]=c->r[1]+0x00000020u; // 800ED8C4
  c->r[4]=0u+0x000001FFu; // 800ED8C8
  c->lr=0x800ED8D0u; f_80226910(c); // 800ED8CC
  c->r[3]=c->r[31]+0x00000010u; // 800ED8D0
  c->r[4]=c->r[1]+0x00000020u; // 800ED8D4
  c->lr=0x800ED8DCu; f_80226D68(c); // 800ED8D8
L_800ED8DC:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800ED8DC
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800ED8E0
  c->r[30]=R32(c->r[1]+0x00000088u); // 800ED8E4
  c->lr=c->r[0]; // 800ED8E8
  c->r[1]=c->r[1]+0x00000090u; // 800ED8EC
  return; // 800ED8F0
}

// fn_800ED8F4
void f_800ED8F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED8F4
  c->r[0]=c->lr; // 800ED8F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED8FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED900
  c->r[31]=c->r[3]|c->r[3]; // 800ED904
  c->r[3]=c->r[3]+0x00000210u; // 800ED908
  c->lr=0x800ED910u; f_8004BAD4(c); // 800ED90C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED910
  if (crb(c,2)) { goto L_800ED984; } // 800ED914
  c->r[0]=R32(c->r[31]+0x00000210u); // 800ED918
  c->r[4]=c->r[31]|c->r[31]; // 800ED91C
  c->r[3]=c->r[31]+0x00000210u; // 800ED920
  c->r[0]=c->r[0]|0xAA000000u; // 800ED924
  W32(c->r[31]+0x00000210u,c->r[0]); // 800ED928
  c->lr=0x800ED930u; f_80043E44(c); // 800ED92C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED930
  c->r[3]=c->r[31]+0x00000210u; // 800ED934
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ED938
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800ED93C
  c->lr=0x800ED944u; f_80043E34(c); // 800ED940
  c->r[3]=R32(c->r[31]+0x00000394u); // 800ED944
  c->r[4]=0u+0x803A0000u; // 800ED948
  c->r[4]=c->r[4]+0xFFFFEBA4u; // 800ED94C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800ED950
  c->r[4]=c->r[4]+0x00000008u; // 800ED954
  c->lr=0x800ED95Cu; f_80256EC4(c); // 800ED958
  c->r[4]=R32(c->r[31]+0x00000394u); // 800ED95C
  c->r[5]=c->r[3]|c->r[3]; // 800ED960
  c->r[3]=c->r[31]+0x00000210u; // 800ED964
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800ED968
  c->lr=0x800ED970u; f_8004BAC8(c); // 800ED96C
  {uint32_t ea=c->r[2]+0xFFFFA840u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED970
  c->r[3]=c->r[31]+0x00000210u; // 800ED974
  c->f[2]=c->f[1]; // 800ED978
  c->f[3]=c->f[1]; // 800ED97C
  c->lr=0x800ED984u; f_80043E24(c); // 800ED980
L_800ED984:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED984
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED988
  c->lr=c->r[0]; // 800ED98C
  c->r[1]=c->r[1]+0x00000010u; // 800ED990
  return; // 800ED994
}

// fn_800ED998
void f_800ED998(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED998
  c->r[0]=c->lr; // 800ED99C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED9A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED9A4
  c->r[31]=c->r[3]|c->r[3]; // 800ED9A8
  c->r[3]=c->r[3]+0x00000210u; // 800ED9AC
  c->lr=0x800ED9B4u; f_80221698(c); // 800ED9B0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800ED9B4
  cmps(c,0,(int32_t)c->r[3],0); // 800ED9B8
  if (crb(c,2)) { goto L_800ED9DC; } // 800ED9BC
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800ED9C0
  cmps(c,0,(int32_t)c->r[0],0); // 800ED9C4
  if (crb(c,2)) { goto L_800ED9DC; } // 800ED9C8
  c->r[0]=R32(c->r[31]+0x00000210u); // 800ED9CC
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800ED9D0
  W32(c->r[31]+0x00000210u,c->r[0]); // 800ED9D4
  goto L_800ED9E8; // 800ED9D8
L_800ED9DC:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800ED9DC
  c->r[0]=c->r[0]|0x80000000u; // 800ED9E0
  W32(c->r[31]+0x00000210u,c->r[0]); // 800ED9E4
L_800ED9E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED9E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED9EC
  c->lr=c->r[0]; // 800ED9F0
  c->r[1]=c->r[1]+0x00000010u; // 800ED9F4
  return; // 800ED9F8
}

// fn_800ED9FC
void f_800ED9FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED9FC
  c->r[0]=c->lr; // 800EDA00
  cmps(c,0,(int32_t)c->r[3],0); // 800EDA04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDA08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDA0C
  c->r[31]=c->r[4]|c->r[4]; // 800EDA10
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EDA14
  c->r[30]=c->r[3]|c->r[3]; // 800EDA18
  if (crb(c,2)) { goto L_800EDA38; } // 800EDA1C
  c->r[4]=0u+0x00000000u; // 800EDA20
  c->lr=0x800EDA28u; f_8026A06C(c); // 800EDA24
  cmps(c,0,(int32_t)c->r[31],0); // 800EDA28
  if (!crb(c,1)) { goto L_800EDA38; } // 800EDA2C
  c->r[3]=c->r[30]|c->r[30]; // 800EDA30
  c->lr=0x800EDA38u; f_8026A268(c); // 800EDA34
L_800EDA38:;
  c->r[3]=c->r[30]|c->r[30]; // 800EDA38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDA3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EDA40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDA44
  c->lr=c->r[0]; // 800EDA48
  c->r[1]=c->r[1]+0x00000010u; // 800EDA4C
  return; // 800EDA50
}

// fn_800EDA54
void f_800EDA54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDA54
  c->r[0]=c->lr; // 800EDA58
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EDA5C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EDA60
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EDA64
  c->r[4]=0u+0x00000000u; // 800EDA68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDA6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EDA70
  c->r[30]=c->r[3]|c->r[3]; // 800EDA74
  c->lr=0x800EDA7Cu; f_801F57D0(c); // 800EDA78
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EDA7C
  c->r[3]=c->r[30]|c->r[30]; // 800EDA80
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800EDA84
  c->ctr=c->r[12]; // 800EDA88
  if (true) { c->lr=0x800EDA90u; dispatch(c,c->ctr); } // 800EDA8C
  c->r[3]=c->r[30]|c->r[30]; // 800EDA90
  c->lr=0x800EDA98u; f_801F4B94(c); // 800EDA94
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800EDA98
  c->r[0]=0u+0x00000000u; // 800EDA9C
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDAA0
  c->r[5]=0u+0x00000003u; // 800EDAA4
  c->r[7]=c->r[3]|0x00000800u; // 800EDAA8
  c->r[4]=0u+0x0000005Bu; // 800EDAAC
  c->r[31]=0u+0x00000001u; // 800EDAB0
  c->r[3]=0u+0x80550000u; // 800EDAB4
  W8(c->r[30]+0x0000006Cu,c->r[5]); // 800EDAB8
  c->f[3]=c->f[1]; // 800EDABC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EDAC0
  c->r[3]=c->r[3]+0x00003D60u; // 800EDAC4
  W8(c->r[30]+0x0000006Du,c->r[4]); // 800EDAC8
  c->r[4]=c->r[30]+0x0000002Cu; // 800EDACC
  {uint32_t ea=c->r[2]+0xFFFFA854u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDAD0
  W16(c->r[30]+0x000003BEu,c->r[7]); // 800EDAD4
  c->r[5]=c->r[30]+0x00000030u; // 800EDAD8
  c->r[6]=0u+0x00000000u; // 800EDADC
  c->r[7]=0u+0x00000000u; // 800EDAE0
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800EDAE4
  W8(c->r[30]+0x00000074u,c->r[0]); // 800EDAE8
  W8(c->r[30]+0x00000075u,c->r[0]); // 800EDAEC
  c->lr=0x800EDAF4u; f_801D5488(c); // 800EDAF0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EDAF4
  c->r[3]=c->r[30]|c->r[30]; // 800EDAF8
  c->lr=0x800EDB00u; f_801F58BC(c); // 800EDAFC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EDB00
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800EDB04
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDB08
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EDB0C
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800EDB10
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800EDB14
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800EDB18
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EDB1C
  c->lr=0x800EDB24u; f_802501B0(c); // 800EDB20
  c->r[3]=0u+0x805D0000u; // 800EDB24
  c->r[4]=c->r[30]+0x0000002Cu; // 800EDB28
  c->r[3]=c->r[3]+0x000078B0u; // 800EDB2C
  c->lr=0x800EDB34u; f_802351CC(c); // 800EDB30
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EDB34
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800EDB38
  c->r[3]=c->r[30]|c->r[30]; // 800EDB3C
  c->lr=0x800EDB44u; f_801F56F4(c); // 800EDB40
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EDB44
  c->r[3]=c->r[30]|c->r[30]; // 800EDB48
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EDB4C
  c->ctr=c->r[12]; // 800EDB50
  if (true) { c->lr=0x800EDB58u; dispatch(c,c->ctr); } // 800EDB54
  c->r[3]=c->r[30]|c->r[30]; // 800EDB58
  c->lr=0x800EDB60u; f_800EE8FC(c); // 800EDB5C
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800EDB60
  W32(c->r[30]+0x00000444u,c->r[31]); // 800EDB64
  c->lr=0x800EDB6Cu; f_8024E174(c); // 800EDB68
  W32(c->r[30]+0x00000438u,c->r[3]); // 800EDB6C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800EDB70
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EDB74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDB78
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EDB7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EDB80
  c->lr=c->r[0]; // 800EDB84
  c->r[1]=c->r[1]+0x00000020u; // 800EDB88
  return; // 800EDB8C
}

// fn_800EDB90
void f_800EDB90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDB90
  c->r[0]=c->lr; // 800EDB94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDB98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDB9C
  c->r[31]=c->r[3]|c->r[3]; // 800EDBA0
  c->lr=0x800EDBA8u; f_800EE50C(c); // 800EDBA4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EDBA8
  c->r[3]=c->r[31]|c->r[31]; // 800EDBAC
  c->r[12]=R32(c->r[12]+0x00000068u); // 800EDBB0
  c->ctr=c->r[12]; // 800EDBB4
  if (true) { c->lr=0x800EDBBCu; dispatch(c,c->ctr); } // 800EDBB8
  c->r[3]=c->r[31]|c->r[31]; // 800EDBBC
  c->lr=0x800EDBC4u; f_801F4C0C(c); // 800EDBC0
  c->r[3]=c->r[31]|c->r[31]; // 800EDBC4
  c->lr=0x800EDBCCu; f_800EE784(c); // 800EDBC8
  c->r[3]=c->r[31]|c->r[31]; // 800EDBCC
  c->lr=0x800EDBD4u; f_801F56F4(c); // 800EDBD0
  c->r[3]=c->r[31]|c->r[31]; // 800EDBD4
  c->lr=0x800EDBDCu; f_800EE99C(c); // 800EDBD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDBDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDBE0
  c->lr=c->r[0]; // 800EDBE4
  c->r[1]=c->r[1]+0x00000010u; // 800EDBE8
  return; // 800EDBEC
}

// fn_800EDBF0
void f_800EDBF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDBF0
  c->r[0]=c->lr; // 800EDBF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDBF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDBFC
  c->r[31]=c->r[3]|c->r[3]; // 800EDC00
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EDC04
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EDC08
  c->lr=0x800EDC10u; f_802501B0(c); // 800EDC0C
  c->r[3]=c->r[31]|c->r[31]; // 800EDC10
  c->r[4]=0u+0x00000000u; // 800EDC14
  c->lr=0x800EDC1Cu; f_801F5244(c); // 800EDC18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDC1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDC20
  c->lr=c->r[0]; // 800EDC24
  c->r[1]=c->r[1]+0x00000010u; // 800EDC28
  return; // 800EDC2C
}

// fn_800EDC30
void f_800EDC30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDC30
  c->r[0]=c->lr; // 800EDC34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDC38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDC3C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EDC40
  c->r[30]=c->r[3]|c->r[3]; // 800EDC44
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EDC48
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EDC4C
  c->lr=0x800EDC54u; f_802501B0(c); // 800EDC50
  c->r[3]=c->r[30]|c->r[30]; // 800EDC54
  c->r[4]=0u+0x00000000u; // 800EDC58
  c->lr=0x800EDC60u; f_801F5244(c); // 800EDC5C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EDC60
  c->r[3]=c->r[30]+0x0000002Cu; // 800EDC64
  c->r[4]=c->r[4]+0x0000005Cu; // 800EDC68
  c->lr=0x800EDC70u; f_800361A0(c); // 800EDC6C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EDC70
  c->r[3]=c->r[30]|c->r[30]; // 800EDC74
  c->lr=0x800EDC7Cu; f_801F5418(c); // 800EDC78
  cmps(c,0,(int32_t)c->r[3],0); // 800EDC7C
  if (!crb(c,0)) { goto L_800EDCC0; } // 800EDC80
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800EDC84
  c->r[4]=0u+0x00000001u; // 800EDC88
  c->r[0]=0u+0x00000000u; // 800EDC8C
  W8(c->r[30]+0x0000006Fu,c->r[4]); // 800EDC90
  c->r[3]=c->r[3]|0x00000080u; // 800EDC94
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDC98
  W16(c->r[30]+0x000003BEu,c->r[3]); // 800EDC9C
  c->r[3]=c->r[30]|c->r[30]; // 800EDCA0
  c->r[4]=0u+0x00000064u; // 800EDCA4
  c->r[5]=0u+0x00000000u; // 800EDCA8
  W8(c->r[30]+0x00000074u,c->r[0]); // 800EDCAC
  c->r[6]=0u+0x00000000u; // 800EDCB0
  c->r[7]=0u+0x00000000u; // 800EDCB4
  c->lr=0x800EDCBCu; f_801F4D44(c); // 800EDCB8
  goto L_800EDCF4; // 800EDCBC
L_800EDCC0:;
  c->r[31]=0u+0x805D0000u; // 800EDCC0
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EDCC4
  c->lr=0x800EDCCCu; f_800447E4(c); // 800EDCC8
  cmpu(c,0,c->r[3],0x00000001u); // 800EDCCC
  if (!crb(c,2)) { goto L_800EDCE0; } // 800EDCD0
  c->r[0]=0u+0x00000000u; // 800EDCD4
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800EDCD8
  goto L_800EDCEC; // 800EDCDC
L_800EDCE0:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EDCE0
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800EDCE4
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800EDCE8
L_800EDCEC:;
  c->r[3]=c->r[30]|c->r[30]; // 800EDCEC
  c->lr=0x800EDCF4u; f_801F5B14(c); // 800EDCF0
L_800EDCF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDCF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDCF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EDCFC
  c->lr=c->r[0]; // 800EDD00
  c->r[1]=c->r[1]+0x00000010u; // 800EDD04
  return; // 800EDD08
}

// fn_800EDD0C
void f_800EDD0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDD0C
  c->r[0]=c->lr; // 800EDD10
  W32(c->r[1]+0x00000064u,c->r[0]); // 800EDD14
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800EDD18
  c->r[31]=0u+0x803A0000u; // 800EDD1C
  c->r[31]=c->r[31]+0xFFFFEBB8u; // 800EDD20
  W32(c->r[1]+0x00000058u,c->r[30]); // 800EDD24
  c->r[30]=c->r[3]|c->r[3]; // 800EDD28
  W32(c->r[1]+0x00000054u,c->r[29]); // 800EDD2C
  W32(c->r[1]+0x00000050u,c->r[28]); // 800EDD30
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EDD34
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EDD38
  c->lr=0x800EDD40u; f_802501B0(c); // 800EDD3C
  c->r[3]=c->r[30]+0x00000038u; // 800EDD40
  c->r[4]=c->r[30]+0x0000002Cu; // 800EDD44
  c->lr=0x800EDD4Cu; f_800361A0(c); // 800EDD48
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDD4C
  c->r[3]=0u+0x80550000u; // 800EDD50
  c->r[3]=c->r[3]+0x00003D60u; // 800EDD54
  c->r[4]=c->r[30]+0x00000038u; // 800EDD58
  c->f[2]=c->f[1]; // 800EDD5C
  c->r[5]=c->r[1]+0x00000008u; // 800EDD60
  c->f[3]=c->f[1]; // 800EDD64
  c->r[6]=0u+0x00000000u; // 800EDD68
  c->r[7]=0u+0x00000000u; // 800EDD6C
  c->lr=0x800EDD74u; f_801D5488(c); // 800EDD70
  c->r[5]=R32(c->r[30]+0x00000394u); // 800EDD74
  c->r[3]=c->r[30]+0x00000060u; // 800EDD78
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EDD7C
  c->r[4]=c->r[5]+0x00000068u; // 800EDD80
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800EDD84
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EDD88
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800EDD8C
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EDD90
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800EDD94
  c->lr=0x800EDD9Cu; f_800361A0(c); // 800EDD98
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EDD9C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EDDA0
  c->lr=0x800EDDA8u; f_802501B0(c); // 800EDDA4
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800EDDA8
  c->r[28]=0u+0x00000001u; // 800EDDAC
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDDB0
  c->r[4]=c->r[30]+0x0000002Cu; // 800EDDB4
  {uint32_t ea=c->r[2]+0xFFFFA85Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EDDB8
  c->r[0]=c->r[0]|0x00002000u; // 800EDDBC
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800EDDC0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EDDC4
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800EDDC8
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 800EDDCC
  W8(c->r[3]+0x0000001Cu,c->r[28]); // 800EDDD0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EDDD4
  c->r[3]=c->r[3]+0x0000005Cu; // 800EDDD8
  c->lr=0x800EDDE0u; f_800361A0(c); // 800EDDDC
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EDDE0
  c->r[4]=0u+0x00000040u; // 800EDDE4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EDDE8
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800EDDEC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EDDF0
  c->r[3]=c->r[3]+0x0000001Cu; // 800EDDF4
  c->lr=0x800EDDFCu; f_802518A4(c); // 800EDDF8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EDDFC
  c->r[4]=0u+0x00000006u; // 800EDE00
  c->r[3]=c->r[3]+0x0000001Cu; // 800EDE04
  c->lr=0x800EDE0Cu; f_80251824(c); // 800EDE08
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EDE0C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EDE10
  c->lr=0x800EDE18u; f_802501B0(c); // 800EDE14
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EDE18
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800EDE1C
  cmps(c,0,(int32_t)c->r[0],0); // 800EDE20
  if (crb(c,2)) { goto L_800EDF48; } // 800EDE24
  c->r[3]=c->r[3]+0x00000068u; // 800EDE28
  c->r[4]=c->r[30]+0x00000060u; // 800EDE2C
  c->lr=0x800EDE34u; f_800361A0(c); // 800EDE30
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EDE34
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EDE38
  c->lr=0x800EDE40u; f_8025037C(c); // 800EDE3C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800EDE40
  c->r[3]=c->r[30]+0x0000002Cu; // 800EDE44
  c->r[4]=c->r[30]+0x00000060u; // 800EDE48
  c->r[5]=c->r[1]+0x0000003Cu; // 800EDE4C
  c->r[6]=c->r[6]+0x000000B0u; // 800EDE50
  c->r[7]=0u+0x00000000u; // 800EDE54
  c->lr=0x800EDE5Cu; f_8002BE64(c); // 800EDE58
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800EDE5C
  c->r[29]=0u+0x805D0000u; // 800EDE60
  c->r[0]=R32(c->r[30]+0x00000030u); // 800EDE64
  c->r[29]=c->r[29]+0x00003F6Cu; // 800EDE68
  {uint32_t ea=c->r[29]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDE6C
  c->r[4]=c->r[30]|c->r[30]; // 800EDE70
  W32(c->r[1]+0x00000018u,c->r[3]); // 800EDE74
  c->r[7]=c->r[1]+0x00000018u; // 800EDE78
  c->r[6]=0u+0x00000031u; // 800EDE7C
  c->r[8]=0u+0x00000000u; // 800EDE80
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EDE84
  c->r[0]=R32(c->r[30]+0x00000034u); // 800EDE88
  W32(c->r[1]+0x00000020u,c->r[0]); // 800EDE8C
  c->r[3]=R32(c->r[30]+0x00000438u); // 800EDE90
  c->r[5]=R32(c->r[30]+0x00000394u); // 800EDE94
  c->lr=0x800EDE9Cu; f_801FA6A4(c); // 800EDE98
  c->r[0]=R32(c->r[30]+0x000003C4u); // 800EDE9C
  cmps(c,0,(int32_t)c->r[0],0); // 800EDEA0
  if (crb(c,2)) { goto L_800EDEBC; } // 800EDEA4
  c->r[3]=c->r[30]+0x00000044u; // 800EDEA8
  c->r[4]=c->r[30]+0x000003CCu; // 800EDEAC
  c->lr=0x800EDEB4u; f_800361A0(c); // 800EDEB0
  W8(c->r[30]+0x00000075u,c->r[28]); // 800EDEB4
  goto L_800EDF34; // 800EDEB8
L_800EDEBC:;
  c->r[3]=c->r[29]|c->r[29]; // 800EDEBC
  c->lr=0x800EDEC4u; f_800567B4(c); // 800EDEC0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800EDEC4
  cmps(c,0,(int32_t)c->r[0],6); // 800EDEC8
  if (!crb(c,2)) { goto L_800EDEFC; } // 800EDECC
  c->r[4]=c->r[31]+0x0000003Cu; // 800EDED0
  c->r[6]=R32(c->r[31]+0x0000003Cu); // 800EDED4
  c->r[5]=R32(c->r[4]+0x00000004u); // 800EDED8
  c->r[3]=c->r[30]+0x00000044u; // 800EDEDC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800EDEE0
  c->r[4]=c->r[1]+0x00000030u; // 800EDEE4
  W32(c->r[1]+0x00000030u,c->r[6]); // 800EDEE8
  W32(c->r[1]+0x00000034u,c->r[5]); // 800EDEEC
  W32(c->r[1]+0x00000038u,c->r[0]); // 800EDEF0
  c->lr=0x800EDEF8u; f_800361A0(c); // 800EDEF4
  goto L_800EDF34; // 800EDEF8
L_800EDEFC:;
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDEFC
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EDF00
  fcmp(c,0,c->f[1],c->f[0]); // 800EDF04
  if (!crb(c,1)) { goto L_800EDF34; } // 800EDF08
  c->r[4]=c->r[31]+0x00000048u; // 800EDF0C
  c->r[6]=R32(c->r[31]+0x00000048u); // 800EDF10
  c->r[5]=R32(c->r[4]+0x00000004u); // 800EDF14
  c->r[3]=c->r[30]+0x00000044u; // 800EDF18
  c->r[0]=R32(c->r[4]+0x00000008u); // 800EDF1C
  c->r[4]=c->r[1]+0x00000024u; // 800EDF20
  W32(c->r[1]+0x00000024u,c->r[6]); // 800EDF24
  W32(c->r[1]+0x00000028u,c->r[5]); // 800EDF28
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800EDF2C
  c->lr=0x800EDF34u; f_800361A0(c); // 800EDF30
L_800EDF34:;
  c->r[3]=R32(c->r[30]+0x00000438u); // 800EDF34
  c->r[5]=c->r[30]+0x00000044u; // 800EDF38
  c->r[6]=c->r[31]+0x00000000u; // 800EDF3C
  c->r[4]=0u+0x00000000u; // 800EDF40
  c->lr=0x800EDF48u; f_801FBEC0(c); // 800EDF44
L_800EDF48:;
  c->r[3]=c->r[30]|c->r[30]; // 800EDF48
  c->r[4]=0u+0x00000000u; // 800EDF4C
  c->lr=0x800EDF54u; f_801F7C00(c); // 800EDF50
  c->r[7]=0u+0x803D0000u; // 800EDF54
  {uint32_t ea=c->r[7]+0x000044B8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EDF58
  c->r[3]=c->r[30]|c->r[30]; // 800EDF5C
  c->r[4]=c->r[1]+0x0000000Cu; // 800EDF60
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EDF64
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EDF68
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800EDF6C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800EDF70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDF74
  c->lr=0x800EDF7Cu; f_800EDF9C(c); // 800EDF78
  c->r[0]=R32(c->r[1]+0x00000064u); // 800EDF7C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800EDF80
  c->r[30]=R32(c->r[1]+0x00000058u); // 800EDF84
  c->r[29]=R32(c->r[1]+0x00000054u); // 800EDF88
  c->r[28]=R32(c->r[1]+0x00000050u); // 800EDF8C
  c->lr=c->r[0]; // 800EDF90
  c->r[1]=c->r[1]+0x00000060u; // 800EDF94
  return; // 800EDF98
}

// fn_800EDF9C
void f_800EDF9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDF9C
  c->r[0]=c->lr; // 800EDFA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDFA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDFA8
  c->r[31]=c->r[4]|c->r[4]; // 800EDFAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EDFB0
  c->r[30]=c->r[3]|c->r[3]; // 800EDFB4
  c->r[3]=c->r[31]|c->r[31]; // 800EDFB8
  c->lr=0x800EDFC0u; f_802B9FDC(c); // 800EDFBC
  cmps(c,0,(int32_t)c->r[3],0); // 800EDFC0
  if (crb(c,2)) { goto L_800EDFE0; } // 800EDFC4
  c->r[3]=R32(c->r[31]+0x00000000u); // 800EDFC8
  c->r[0]=R32(c->r[31]+0x00000004u); // 800EDFCC
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800EDFD0
  W32(c->r[30]+0x00000020u,c->r[0]); // 800EDFD4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800EDFD8
  W32(c->r[30]+0x00000024u,c->r[0]); // 800EDFDC
L_800EDFE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDFE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDFE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EDFE8
  c->lr=c->r[0]; // 800EDFEC
  c->r[1]=c->r[1]+0x00000010u; // 800EDFF0
  return; // 800EDFF4
}

// fn_800EDFF8
void f_800EDFF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDFF8
  c->r[0]=c->lr; // 800EDFFC
  W32(c->r[1]+0x00000084u,c->r[0]); // 800EE000
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800EE004
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800EE008
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 800EE00C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 800EE010
  c->r[4]=0u+0x00000000u; // 800EE014
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800EE018
  c->r[31]=0u+0x803A0000u; // 800EE01C
  c->r[31]=c->r[31]+0xFFFFEBB8u; // 800EE020
  W32(c->r[1]+0x00000058u,c->r[30]); // 800EE024
  c->r[30]=c->r[3]|c->r[3]; // 800EE028
  W32(c->r[1]+0x00000054u,c->r[29]); // 800EE02C
  c->r[3]=R32(c->r[3]+0x00000438u); // 800EE030
  c->lr=0x800EE038u; f_801FAF00(c); // 800EE034
  cmps(c,0,(int32_t)c->r[3],0); // 800EE038
  if (!crb(c,2)) { goto L_800EE170; } // 800EE03C
  c->r[3]=c->r[30]|c->r[30]; // 800EE040
  c->r[4]=0u+0x0000003Fu; // 800EE044
  c->lr=0x800EE04Cu; f_801F5AB4(c); // 800EE048
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800EE04C
  c->r[4]=0u+0x00000000u; // 800EE050
  c->r[3]=0u+0x805D0000u; // 800EE054
  W8(c->r[30]+0x00000075u,c->r[4]); // 800EE058
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800EE05C
  c->r[0]=c->r[0]|0x00000004u; // 800EE060
  c->r[3]=c->r[3]+0x00003F6Cu; // 800EE064
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800EE068
  c->lr=0x800EE070u; f_800567B4(c); // 800EE06C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800EE070
  cmps(c,0,(int32_t)c->r[0],6); // 800EE074
  if (!crb(c,2)) { goto L_800EE0FC; } // 800EE078
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EE07C
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE080
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE084
  fcmp(c,0,c->f[1],c->f[0]); // 800EE088
  if (!crb(c,0)) { goto L_800EE0FC; } // 800EE08C
  c->r[3]=c->r[31]+0x00000054u; // 800EE090
  c->r[6]=R32(c->r[31]+0x00000054u); // 800EE094
  c->r[5]=R32(c->r[3]+0x00000004u); // 800EE098
  c->r[4]=c->r[1]+0x00000020u; // 800EE09C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800EE0A0
  W32(c->r[1]+0x00000020u,c->r[6]); // 800EE0A4
  W32(c->r[1]+0x00000024u,c->r[5]); // 800EE0A8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800EE0AC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EE0B0
  c->r[3]=c->r[3]+0x0000005Cu; // 800EE0B4
  c->lr=0x800EE0BCu; f_800361A0(c); // 800EE0B8
  c->r[5]=R32(c->r[30]+0x00000394u); // 800EE0BC
  c->r[3]=c->r[31]+0x00000060u; // 800EE0C0
  {uint32_t ea=c->r[2]+0xFFFFA864u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE0C4
  c->r[4]=c->r[1]+0x00000014u; // 800EE0C8
  {uint32_t ea=c->r[5]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE0CC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800EE0D0
  {uint32_t ea=c->r[5]+0x00000060u; WF32(ea,c->f[0]);} // 800EE0D4
  c->r[6]=R32(c->r[31]+0x00000060u); // 800EE0D8
  c->r[5]=R32(c->r[3]+0x00000004u); // 800EE0DC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800EE0E0
  W32(c->r[1]+0x00000014u,c->r[6]); // 800EE0E4
  W32(c->r[1]+0x00000018u,c->r[5]); // 800EE0E8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EE0EC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EE0F0
  c->r[3]=c->r[3]+0x00000068u; // 800EE0F4
  c->lr=0x800EE0FCu; f_800361A0(c); // 800EE0F8
L_800EE0FC:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EE0FC
  c->r[3]=c->r[30]+0x0000002Cu; // 800EE100
  c->r[4]=c->r[4]+0x0000005Cu; // 800EE104
  c->lr=0x800EE10Cu; f_800361A0(c); // 800EE108
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EE10C
  c->r[3]=c->r[30]+0x00000060u; // 800EE110
  c->r[4]=c->r[4]+0x00000068u; // 800EE114
  c->lr=0x800EE11Cu; f_800361A0(c); // 800EE118
  c->r[6]=R32(c->r[30]+0x0000002Cu); // 800EE11C
  c->r[3]=0u+0x805D0000u; // 800EE120
  c->r[0]=R32(c->r[30]+0x00000030u); // 800EE124
  c->r[3]=c->r[3]+0x00006CF8u; // 800EE128
  c->r[4]=c->r[1]+0x00000008u; // 800EE12C
  c->r[5]=0u+0x00040000u; // 800EE130
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EE134
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800EE138
  c->r[0]=R32(c->r[30]+0x00000034u); // 800EE13C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EE140
  c->lr=0x800EE148u; f_802236F8(c); // 800EE144
  W16(c->r[30]+0x000003B8u,c->r[3]); // 800EE148
  c->r[3]=c->r[30]|c->r[30]; // 800EE14C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EE150
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EE154
  c->ctr=c->r[12]; // 800EE158
  if (true) { c->lr=0x800EE160u; dispatch(c,c->ctr); } // 800EE15C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EE160
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EE164
  c->lr=0x800EE16Cu; f_8025037C(c); // 800EE168
  goto L_800EE278; // 800EE16C
L_800EE170:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EE170
  c->r[3]=c->r[30]+0x0000002Cu; // 800EE174
  c->r[4]=c->r[4]+0x0000005Cu; // 800EE178
  c->lr=0x800EE180u; f_800361A0(c); // 800EE17C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EE180
  c->r[3]=c->r[30]+0x00000060u; // 800EE184
  c->r[4]=c->r[4]+0x00000068u; // 800EE188
  c->lr=0x800EE190u; f_800361A0(c); // 800EE18C
  c->r[0]=R8(c->r[30]+0x00000075u); // 800EE190
  cmps(c,0,(int32_t)c->r[0],0); // 800EE194
  if (crb(c,2)) { goto L_800EE278; } // 800EE198
  c->r[3]=R32(c->r[30]+0x00000438u); // 800EE19C
  c->lr=0x800EE1A4u; f_80050BE4(c); // 800EE1A0
  cmps(c,0,(int32_t)c->r[3],0); // 800EE1A4
  if (crb(c,2)) { goto L_800EE278; } // 800EE1A8
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800EE1AC
  c->r[29]=0u+0x43300000u; // 800EE1B0
  c->r[4]=0u+0x00000000u; // 800EE1B4
  W32(c->r[1]+0x00000030u,c->r[29]); // 800EE1B8
  {uint32_t ea=c->r[2]+0xFFFFA878u; c->f[2]=RF64(ea);} // 800EE1BC
  c->r[3]=c->r[13]+0xFFFFAB38u; // 800EE1C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EE1C4
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EE1C8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 800EE1CC
  {uint32_t ea=c->r[2]+0xFFFFA868u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE1D0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800EE1D4
  W8(c->r[30]+0x00000075u,c->r[4]); // 800EE1D8
  c->f[31]=c->ps1[31]=S(std::fma(c->f[0],c->f[1],c->f[31])); // 800EE1DC
  c->lr=0x800EE1E4u; f_80211724(c); // 800EE1E0
  c->r[4]=0u+0xAAAB0000u; // 800EE1E4
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800EE1E8
  c->r[4]=c->r[4]+0xFFFFAAABu; // 800EE1EC
  W32(c->r[1]+0x00000040u,c->r[29]); // 800EE1F0
  c->r[4]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[3])>>32); // 800EE1F4
  {uint32_t ea=c->r[2]+0xFFFFA878u; c->f[4]=RF64(ea);} // 800EE1F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EE1FC
  {uint32_t ea=c->r[2]+0xFFFFA86Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EE200
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 800EE204
  W32(c->r[1]+0x00000038u,c->r[29]); // 800EE208
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 800EE20C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 800EE210
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)3); // 800EE214
  {uint32_t ea=c->r[2]+0xFFFFA864u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE218
  {uint32_t ea=c->r[2]+0xFFFFA870u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE21C
  c->f[30]=c->ps1[30]=S(std::fma(c->f[1],c->f[2],c->f[3])); // 800EE220
  c->r[0]=c->r[3]-c->r[0]; // 800EE224
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800EE228
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 800EE22C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 800EE230
  c->f[31]=c->ps1[31]=S(std::fma(c->f[3],c->f[1],c->f[31])); // 800EE234
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 800EE238
  c->lr=0x800EE240u; f_802C10A8(c); // 800EE23C
  c->f[3]=c->ps1[3]=S(c->f[30]*c->f[1]); // 800EE240
  {uint32_t ea=c->r[2]+0xFFFFA870u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE244
  {uint32_t ea=c->r[2]+0xFFFFA854u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EE248
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 800EE24C
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[3]);} // 800EE250
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[2]);} // 800EE254
  c->lr=0x800EE25Cu; f_802C1080(c); // 800EE258
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 800EE25C
  c->r[3]=R32(c->r[30]+0x00000438u); // 800EE260
  c->r[5]=c->r[30]+0x00000044u; // 800EE264
  c->r[6]=c->r[31]+0x00000000u; // 800EE268
  c->r[4]=0u+0x00000000u; // 800EE26C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800EE270
  c->lr=0x800EE278u; f_801FBEC0(c); // 800EE274
L_800EE278:;
  c->r[3]=c->r[30]|c->r[30]; // 800EE278
  c->r[4]=0u+0x00000000u; // 800EE27C
  c->lr=0x800EE284u; f_801F7C00(c); // 800EE280
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800EE284
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800EE288
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 800EE28C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 800EE290
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800EE294
  c->r[30]=R32(c->r[1]+0x00000058u); // 800EE298
  c->r[0]=R32(c->r[1]+0x00000084u); // 800EE29C
  c->r[29]=R32(c->r[1]+0x00000054u); // 800EE2A0
  c->lr=c->r[0]; // 800EE2A4
  c->r[1]=c->r[1]+0x00000080u; // 800EE2A8
  return; // 800EE2AC
}

// fn_800EE2B0
void f_800EE2B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE2B0
  c->r[0]=c->lr; // 800EE2B4
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE2B8
  c->r[4]=0u+0x00000000u; // 800EE2BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EE2C0
  {uint32_t ea=c->r[2]+0xFFFFA880u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EE2C4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800EE2C8
  c->r[31]=c->r[3]|c->r[3]; // 800EE2CC
  c->r[5]=R32(c->r[3]+0x00000394u); // 800EE2D0
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800EE2D4
  c->r[5]=0u+0x0000001Fu; // 800EE2D8
  c->lr=0x800EE2E0u; f_8024FEAC(c); // 800EE2DC
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800EE2E0
  c->r[0]=0u+0x00000001u; // 800EE2E4
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800EE2E8
  c->r[7]=0u+0x803A0000u; // 800EE2EC
  c->r[0]=rotl(c->r[3],0)&0xFFFFDFFFu; // 800EE2F0
  c->r[3]=c->r[31]+0x0000002Cu; // 800EE2F4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800EE2F8
  c->r[4]=c->r[1]+0x00000014u; // 800EE2FC
  {uint32_t ea=c->r[7]+0xFFFFEC24u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EE300
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EE304
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EE308
  W32(c->r[1]+0x00000014u,c->r[6]); // 800EE30C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800EE310
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EE314
  c->lr=0x800EE31Cu; f_800361A0(c); // 800EE318
  c->r[7]=0u+0x803A0000u; // 800EE31C
  {uint32_t ea=c->r[7]+0xFFFFEC30u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EE320
  c->r[3]=c->r[31]+0x00000060u; // 800EE324
  c->r[4]=c->r[1]+0x00000008u; // 800EE328
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EE32C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EE330
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EE334
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EE338
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EE33C
  c->lr=0x800EE344u; f_800361A0(c); // 800EE340
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EE344
  c->r[3]=c->r[31]|c->r[31]; // 800EE348
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EE34C
  c->ctr=c->r[12]; // 800EE350
  if (true) { c->lr=0x800EE358u; dispatch(c,c->ctr); } // 800EE354
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EE358
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800EE35C
  c->lr=c->r[0]; // 800EE360
  c->r[1]=c->r[1]+0x00000030u; // 800EE364
  return; // 800EE368
}

// fn_800EE36C
void f_800EE36C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE36C
  c->r[0]=c->lr; // 800EE370
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE374
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE378
  c->r[31]=c->r[3]|c->r[3]; // 800EE37C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EE380
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EE384
  c->lr=0x800EE38Cu; f_802501B0(c); // 800EE388
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EE38C
  c->r[6]=0u+0x00000000u; // 800EE390
  c->r[0]=0u+0x00000001u; // 800EE394
  c->r[3]=c->r[31]+0x0000002Cu; // 800EE398
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800EE39C
  c->r[4]=c->r[31]+0x000003CCu; // 800EE3A0
  c->r[5]=R32(c->r[31]+0x00000394u); // 800EE3A4
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800EE3A8
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800EE3AC
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800EE3B0
  c->r[0]=rotl(c->r[5],0)&0xFFFFDFFFu; // 800EE3B4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800EE3B8
  W8(c->r[31]+0x00000074u,c->r[6]); // 800EE3BC
  c->lr=0x800EE3C4u; f_800361A0(c); // 800EE3C0
  c->r[3]=c->r[31]+0x00000060u; // 800EE3C4
  c->r[4]=c->r[31]+0x000003D8u; // 800EE3C8
  c->lr=0x800EE3D0u; f_800361A0(c); // 800EE3CC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EE3D0
  c->r[3]=c->r[31]|c->r[31]; // 800EE3D4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EE3D8
  c->ctr=c->r[12]; // 800EE3DC
  if (true) { c->lr=0x800EE3E4u; dispatch(c,c->ctr); } // 800EE3E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE3E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE3E8
  c->lr=c->r[0]; // 800EE3EC
  c->r[1]=c->r[1]+0x00000010u; // 800EE3F0
  return; // 800EE3F4
}

// fn_800EE3F8
void f_800EE3F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE3F8
  c->r[0]=c->lr; // 800EE3FC
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE400
  c->r[4]=0u+0x00000001u; // 800EE404
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EE408
  {uint32_t ea=c->r[2]+0xFFFFA880u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EE40C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800EE410
  c->r[31]=c->r[3]|c->r[3]; // 800EE414
  c->r[5]=R32(c->r[3]+0x00000394u); // 800EE418
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800EE41C
  c->r[5]=0u+0x0000001Fu; // 800EE420
  c->lr=0x800EE428u; f_8024FEAC(c); // 800EE424
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800EE428
  c->r[0]=0u+0x00000001u; // 800EE42C
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800EE430
  c->r[7]=0u+0x803A0000u; // 800EE434
  c->r[0]=rotl(c->r[3],0)&0xFFFFDFFFu; // 800EE438
  c->r[3]=c->r[31]+0x0000002Cu; // 800EE43C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800EE440
  c->r[4]=c->r[1]+0x00000014u; // 800EE444
  {uint32_t ea=c->r[7]+0xFFFFEC3Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800EE448
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EE44C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EE450
  W32(c->r[1]+0x00000014u,c->r[6]); // 800EE454
  W32(c->r[1]+0x00000018u,c->r[5]); // 800EE458
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EE45C
  c->lr=0x800EE464u; f_800361A0(c); // 800EE460
  c->r[7]=0u+0x803A0000u; // 800EE464
  {uint32_t ea=c->r[7]+0xFFFFEC48u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EE468
  c->r[3]=c->r[31]+0x00000060u; // 800EE46C
  c->r[4]=c->r[1]+0x00000008u; // 800EE470
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EE474
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EE478
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EE47C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EE480
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EE484
  c->lr=0x800EE48Cu; f_800361A0(c); // 800EE488
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EE48C
  c->r[3]=c->r[31]|c->r[31]; // 800EE490
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EE494
  c->ctr=c->r[12]; // 800EE498
  if (true) { c->lr=0x800EE4A0u; dispatch(c,c->ctr); } // 800EE49C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EE4A0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800EE4A4
  c->lr=c->r[0]; // 800EE4A8
  c->r[1]=c->r[1]+0x00000030u; // 800EE4AC
  return; // 800EE4B0
}

// fn_800EE4B4
void f_800EE4B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE4B4
  c->r[0]=c->lr; // 800EE4B8
  c->r[5]=0u+0x00000000u; // 800EE4BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE4C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE4C4
  c->r[31]=c->r[3]|c->r[3]; // 800EE4C8
  c->r[3]=0u+0x000004C5u; // 800EE4CC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EE4D0
  c->r[4]=c->r[4]+0x0000010Cu; // 800EE4D4
  c->lr=0x800EE4DCu; f_8024EE50(c); // 800EE4D8
  cmps(c,0,(int32_t)c->r[3],0); // 800EE4DC
  if (crb(c,2)) { goto L_800EE4EC; } // 800EE4E0
  c->r[3]=0u+0x00000000u; // 800EE4E4
  goto L_800EE4F8; // 800EE4E8
L_800EE4EC:;
  c->r[3]=c->r[31]+0x00000210u; // 800EE4EC
  c->r[4]=0u+0x000000E1u; // 800EE4F0
  c->lr=0x800EE4F8u; f_80221630(c); // 800EE4F4
L_800EE4F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE4F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE4FC
  c->lr=c->r[0]; // 800EE500
  c->r[1]=c->r[1]+0x00000010u; // 800EE504
  return; // 800EE508
}

// fn_800EE50C
void f_800EE50C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE50C
  c->r[0]=c->lr; // 800EE510
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE514
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE518
  c->r[31]=0u+0x805D0000u; // 800EE51C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EE520
  c->r[30]=c->r[3]|c->r[3]; // 800EE524
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EE528
  c->lr=0x800EE530u; f_80045264(c); // 800EE52C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800EE530
  cmpu(c,0,c->r[0],0x0000003Fu); // 800EE534
  if (!crb(c,2)) { goto L_800EE574; } // 800EE538
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EE53C
  c->lr=0x800EE544u; f_80037AF0(c); // 800EE540
  cmpu(c,0,c->r[3],c->r[30]); // 800EE544
  if (!crb(c,2)) { goto L_800EE574; } // 800EE548
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800EE54C
  cmps(c,0,(int32_t)c->r[0],101); // 800EE550
  if (crb(c,2)) { goto L_800EE574; } // 800EE554
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE558
  c->r[3]=c->r[30]|c->r[30]; // 800EE55C
  c->r[4]=0u+0x00000065u; // 800EE560
  c->r[5]=0u+0x00000000u; // 800EE564
  c->r[6]=0u+0x00000000u; // 800EE568
  c->r[7]=0u+0x00000000u; // 800EE56C
  c->lr=0x800EE574u; f_801F4D44(c); // 800EE570
L_800EE574:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE574
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE578
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EE57C
  c->lr=c->r[0]; // 800EE580
  c->r[1]=c->r[1]+0x00000010u; // 800EE584
  return; // 800EE588
}

// fn_800EE58C
void f_800EE58C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE58C
  c->r[0]=c->lr; // 800EE590
  W32(c->r[1]+0x00000054u,c->r[0]); // 800EE594
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800EE598
  c->r[31]=0u+0x803D0000u; // 800EE59C
  c->r[31]=c->r[31]+0x000044B8u; // 800EE5A0
  W32(c->r[1]+0x00000048u,c->r[30]); // 800EE5A4
  c->r[30]=c->r[3]|c->r[3]; // 800EE5A8
  c->lr=0x800EE5B0u; f_801F4F28(c); // 800EE5AC
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800EE5B0
  cmps(c,0,(int32_t)c->r[0],102); // 800EE5B4
  if (crb(c,2)) { goto L_800EE640; } // 800EE5B8
  if (!crb(c,0)) { goto L_800EE5D0; } // 800EE5BC
  cmps(c,0,(int32_t)c->r[0],100); // 800EE5C0
  if (crb(c,2)) { goto L_800EE5E0; } // 800EE5C4
  if (!crb(c,0)) { goto L_800EE610; } // 800EE5C8
  goto L_800EE6CC; // 800EE5CC
L_800EE5D0:;
  cmps(c,0,(int32_t)c->r[0],104); // 800EE5D0
  if (crb(c,2)) { goto L_800EE6A0; } // 800EE5D4
  if (!crb(c,0)) { goto L_800EE6CC; } // 800EE5D8
  goto L_800EE670; // 800EE5DC
L_800EE5E0:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800EE5E0
  c->r[5]=c->r[31]+0x0000000Cu; // 800EE5E4
  c->r[3]=c->r[30]|c->r[30]; // 800EE5E8
  c->r[4]=c->r[1]+0x00000038u; // 800EE5EC
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800EE5F0
  c->r[6]=R32(c->r[5]+0x00000004u); // 800EE5F4
  c->r[0]=R32(c->r[5]+0x00000008u); // 800EE5F8
  W32(c->r[1]+0x00000038u,c->r[7]); // 800EE5FC
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 800EE600
  W32(c->r[1]+0x00000040u,c->r[0]); // 800EE604
  c->lr=0x800EE60Cu; f_800EDF9C(c); // 800EE608
  goto L_800EE6CC; // 800EE60C
L_800EE610:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800EE610
  c->r[5]=c->r[31]+0x00000018u; // 800EE614
  c->r[3]=c->r[30]|c->r[30]; // 800EE618
  c->r[4]=c->r[1]+0x0000002Cu; // 800EE61C
  c->r[7]=R32(c->r[31]+0x00000018u); // 800EE620
  c->r[6]=R32(c->r[5]+0x00000004u); // 800EE624
  c->r[0]=R32(c->r[5]+0x00000008u); // 800EE628
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800EE62C
  W32(c->r[1]+0x00000030u,c->r[6]); // 800EE630
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EE634
  c->lr=0x800EE63Cu; f_800EDF9C(c); // 800EE638
  goto L_800EE6CC; // 800EE63C
L_800EE640:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800EE640
  c->r[5]=c->r[31]+0x00000024u; // 800EE644
  c->r[3]=c->r[30]|c->r[30]; // 800EE648
  c->r[4]=c->r[1]+0x00000020u; // 800EE64C
  c->r[7]=R32(c->r[31]+0x00000024u); // 800EE650
  c->r[6]=R32(c->r[5]+0x00000004u); // 800EE654
  c->r[0]=R32(c->r[5]+0x00000008u); // 800EE658
  W32(c->r[1]+0x00000020u,c->r[7]); // 800EE65C
  W32(c->r[1]+0x00000024u,c->r[6]); // 800EE660
  W32(c->r[1]+0x00000028u,c->r[0]); // 800EE664
  c->lr=0x800EE66Cu; f_800EDF9C(c); // 800EE668
  goto L_800EE6CC; // 800EE66C
L_800EE670:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800EE670
  c->r[5]=c->r[31]+0x00000030u; // 800EE674
  c->r[3]=c->r[30]|c->r[30]; // 800EE678
  c->r[4]=c->r[1]+0x00000014u; // 800EE67C
  c->r[7]=R32(c->r[31]+0x00000030u); // 800EE680
  c->r[6]=R32(c->r[5]+0x00000004u); // 800EE684
  c->r[0]=R32(c->r[5]+0x00000008u); // 800EE688
  W32(c->r[1]+0x00000014u,c->r[7]); // 800EE68C
  W32(c->r[1]+0x00000018u,c->r[6]); // 800EE690
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EE694
  c->lr=0x800EE69Cu; f_800EDF9C(c); // 800EE698
  goto L_800EE6CC; // 800EE69C
L_800EE6A0:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800EE6A0
  c->r[5]=c->r[31]+0x0000003Cu; // 800EE6A4
  c->r[3]=c->r[30]|c->r[30]; // 800EE6A8
  c->r[4]=c->r[1]+0x00000008u; // 800EE6AC
  c->r[7]=R32(c->r[31]+0x0000003Cu); // 800EE6B0
  c->r[6]=R32(c->r[5]+0x00000004u); // 800EE6B4
  c->r[0]=R32(c->r[5]+0x00000008u); // 800EE6B8
  W32(c->r[1]+0x00000008u,c->r[7]); // 800EE6BC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800EE6C0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EE6C4
  c->lr=0x800EE6CCu; f_800EDF9C(c); // 800EE6C8
L_800EE6CC:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800EE6CC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800EE6D0
  c->r[30]=R32(c->r[1]+0x00000048u); // 800EE6D4
  c->lr=c->r[0]; // 800EE6D8
  c->r[1]=c->r[1]+0x00000050u; // 800EE6DC
  return; // 800EE6E0
}

// fn_800EE6E4
void f_800EE6E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE6E4
  c->r[0]=c->lr; // 800EE6E8
  c->r[6]=c->r[4]|c->r[4]; // 800EE6EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE6F0
  c->r[0]=R8(c->r[3]+0x00000074u); // 800EE6F4
  cmps(c,0,(int32_t)c->r[0],1); // 800EE6F8
  if (crb(c,2)) { goto L_800EE708; } // 800EE6FC
  c->r[5]=0u+0x00000000u; // 800EE700
  goto L_800EE70C; // 800EE704
L_800EE708:;
  c->r[5]=0u+0x00000001u; // 800EE708
L_800EE70C:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EE70C
  c->r[3]=c->r[6]|c->r[6]; // 800EE710
  c->lr=0x800EE718u; f_80250BF4(c); // 800EE714
  cmps(c,0,(int32_t)c->r[3],0); // 800EE718
  if (crb(c,2)) { goto L_800EE728; } // 800EE71C
  c->r[3]=0u+0x00000000u; // 800EE720
  goto L_800EE72C; // 800EE724
L_800EE728:;
  c->r[3]=0u+0xFFFFFFFFu; // 800EE728
L_800EE72C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE72C
  c->lr=c->r[0]; // 800EE730
  c->r[1]=c->r[1]+0x00000010u; // 800EE734
  return; // 800EE738
}

// fn_800EE73C
void f_800EE73C(Ctx* __restrict c) {
  W8(c->r[3]+0x00000074u,c->r[4]); // 800EE73C
  return; // 800EE740
}

// fn_800EE744
void f_800EE744(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE744
  c->r[0]=c->lr; // 800EE748
  c->r[7]=0u+0x803D0000u; // 800EE74C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EE750
  c->r[4]=c->r[1]+0x00000008u; // 800EE754
  {uint32_t ea=c->r[7]+0x00004500u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EE758
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EE75C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EE760
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EE764
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EE768
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EE76C
  c->lr=0x800EE774u; f_800EDF9C(c); // 800EE770
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EE774
  c->lr=c->r[0]; // 800EE778
  c->r[1]=c->r[1]+0x00000020u; // 800EE77C
  return; // 800EE780
}

// fn_800EE784
void f_800EE784(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE784
  c->r[0]=c->lr; // 800EE788
  c->r[4]=0u+0x00000020u; // 800EE78C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800EE790
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800EE794
  c->r[31]=c->r[3]|c->r[3]; // 800EE798
  W32(c->r[1]+0x00000098u,c->r[30]); // 800EE79C
  c->r[30]=0u+0x80620000u; // 800EE7A0
  c->r[30]=c->r[30]+0x00007688u; // 800EE7A4
  c->r[3]=R32(c->r[30]+0x00000014u); // 800EE7A8
  c->lr=0x800EE7B0u; f_80038AF4(c); // 800EE7AC
  cmps(c,0,(int32_t)c->r[3],0); // 800EE7B0
  if (crb(c,2)) { goto L_800EE8E4; } // 800EE7B4
  c->r[3]=R32(c->r[30]+0x00000014u); // 800EE7B8
  c->r[4]=0u+0x00000001u; // 800EE7BC
  c->lr=0x800EE7C4u; f_80038AF4(c); // 800EE7C0
  cmps(c,0,(int32_t)c->r[3],0); // 800EE7C4
  if (crb(c,2)) { goto L_800EE840; } // 800EE7C8
  c->r[3]=R32(c->r[30]+0x00000014u); // 800EE7CC
  c->r[4]=0u+0x0000001Cu; // 800EE7D0
  c->lr=0x800EE7D8u; f_80038AF4(c); // 800EE7D4
  cmps(c,0,(int32_t)c->r[3],0); // 800EE7D8
  if (!crb(c,2)) { goto L_800EE840; } // 800EE7DC
  c->r[7]=0u+0x803A0000u; // 800EE7E0
  {uint32_t ea=c->r[7]+0xFFFFEC54u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EE7E4
  c->r[3]=c->r[1]+0x00000020u; // 800EE7E8
  c->r[4]=c->r[1]+0x00000014u; // 800EE7EC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EE7F0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EE7F4
  W32(c->r[1]+0x00000014u,c->r[6]); // 800EE7F8
  W32(c->r[1]+0x00000018u,c->r[5]); // 800EE7FC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EE800
  c->lr=0x800EE808u; f_800361A0(c); // 800EE804
  c->r[30]=0u+0x80550000u; // 800EE808
  c->r[5]=c->r[31]|c->r[31]; // 800EE80C
  c->r[30]=c->r[30]+0x00003D60u; // 800EE810
  c->r[6]=c->r[31]+0x0000002Cu; // 800EE814
  c->r[3]=c->r[30]+0x00000010u; // 800EE818
  c->r[7]=c->r[1]+0x00000020u; // 800EE81C
  c->r[8]=c->r[31]+0x00000060u; // 800EE820
  c->r[9]=c->r[1]+0x00000030u; // 800EE824
  c->r[4]=0u+0x000001FFu; // 800EE828
  c->lr=0x800EE830u; f_80226578(c); // 800EE82C
  c->r[3]=c->r[30]+0x00000010u; // 800EE830
  c->r[4]=c->r[1]+0x00000030u; // 800EE834
  c->lr=0x800EE83Cu; f_80226D68(c); // 800EE838
  goto L_800EE8E4; // 800EE83C
L_800EE840:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EE840
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800EE844
  cmps(c,0,(int32_t)c->r[0],0); // 800EE848
  if (!crb(c,2)) { goto L_800EE8E4; } // 800EE84C
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800EE850
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800EE854
  if (crb(c,2)) { goto L_800EE8E4; } // 800EE858
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800EE85C
  cmps(c,0,(int32_t)c->r[0],128); // 800EE860
  if (!crb(c,2)) { goto L_800EE88C; } // 800EE864
  c->r[3]=0u+0x80620000u; // 800EE868
  c->r[3]=c->r[3]+0x00007688u; // 800EE86C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800EE870
  cmps(c,0,(int32_t)c->r[3],0); // 800EE874
  if (crb(c,2)) { goto L_800EE88C; } // 800EE878
  c->r[4]=0u+0x00000002u; // 800EE87C
  c->lr=0x800EE884u; f_80037670(c); // 800EE880
  cmps(c,0,(int32_t)c->r[3],0); // 800EE884
  if (!crb(c,2)) { goto L_800EE8E4; } // 800EE888
L_800EE88C:;
  c->r[7]=0u+0x803A0000u; // 800EE88C
  {uint32_t ea=c->r[7]+0xFFFFEC60u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EE890
  c->r[3]=c->r[1]+0x00000020u; // 800EE894
  c->r[4]=c->r[1]+0x00000008u; // 800EE898
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EE89C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EE8A0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EE8A4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EE8A8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EE8AC
  c->lr=0x800EE8B4u; f_800361A0(c); // 800EE8B0
  c->r[30]=0u+0x80550000u; // 800EE8B4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE8B8
  c->r[30]=c->r[30]+0x00003D60u; // 800EE8BC
  c->r[5]=c->r[31]|c->r[31]; // 800EE8C0
  c->r[3]=c->r[30]+0x00000010u; // 800EE8C4
  c->r[6]=c->r[31]+0x0000002Cu; // 800EE8C8
  c->r[7]=c->r[1]+0x00000030u; // 800EE8CC
  c->r[4]=0u+0x000001FFu; // 800EE8D0
  c->lr=0x800EE8D8u; f_80226910(c); // 800EE8D4
  c->r[3]=c->r[30]+0x00000010u; // 800EE8D8
  c->r[4]=c->r[1]+0x00000030u; // 800EE8DC
  c->lr=0x800EE8E4u; f_80226D68(c); // 800EE8E0
L_800EE8E4:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800EE8E4
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800EE8E8
  c->r[30]=R32(c->r[1]+0x00000098u); // 800EE8EC
  c->lr=c->r[0]; // 800EE8F0
  c->r[1]=c->r[1]+0x000000A0u; // 800EE8F4
  return; // 800EE8F8
}

// fn_800EE8FC
void f_800EE8FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE8FC
  c->r[0]=c->lr; // 800EE900
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE904
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE908
  c->r[31]=c->r[3]|c->r[3]; // 800EE90C
  c->r[3]=c->r[3]+0x00000210u; // 800EE910
  c->lr=0x800EE918u; f_8004BAD4(c); // 800EE914
  cmps(c,0,(int32_t)c->r[3],0); // 800EE918
  if (crb(c,2)) { goto L_800EE988; } // 800EE91C
  c->r[0]=R32(c->r[31]+0x00000210u); // 800EE920
  c->r[4]=c->r[31]|c->r[31]; // 800EE924
  c->r[3]=c->r[31]+0x00000210u; // 800EE928
  c->r[0]=c->r[0]|0xAA000000u; // 800EE92C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800EE930
  c->lr=0x800EE938u; f_80043E44(c); // 800EE934
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE938
  c->r[3]=c->r[31]+0x00000210u; // 800EE93C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EE940
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EE944
  c->lr=0x800EE94Cu; f_80043E34(c); // 800EE948
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EE94C
  c->r[4]=0u+0x803A0000u; // 800EE950
  c->r[4]=c->r[4]+0xFFFFEC94u; // 800EE954
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EE958
  c->lr=0x800EE960u; f_80256EC4(c); // 800EE95C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EE960
  c->r[5]=c->r[3]|c->r[3]; // 800EE964
  c->r[3]=c->r[31]+0x00000210u; // 800EE968
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800EE96C
  c->lr=0x800EE974u; f_8004BAC8(c); // 800EE970
  {uint32_t ea=c->r[2]+0xFFFFA880u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE974
  c->r[3]=c->r[31]+0x00000210u; // 800EE978
  c->f[2]=c->f[1]; // 800EE97C
  c->f[3]=c->f[1]; // 800EE980
  c->lr=0x800EE988u; f_80043E24(c); // 800EE984
L_800EE988:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE988
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE98C
  c->lr=c->r[0]; // 800EE990
  c->r[1]=c->r[1]+0x00000010u; // 800EE994
  return; // 800EE998
}

// fn_800EE99C
void f_800EE99C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE99C
  c->r[0]=c->lr; // 800EE9A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE9A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE9A8
  c->r[31]=c->r[3]|c->r[3]; // 800EE9AC
  c->r[3]=c->r[3]+0x00000210u; // 800EE9B0
  c->lr=0x800EE9B8u; f_80221698(c); // 800EE9B4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EE9B8
  cmps(c,0,(int32_t)c->r[3],0); // 800EE9BC
  if (crb(c,2)) { goto L_800EE9E0; } // 800EE9C0
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800EE9C4
  cmps(c,0,(int32_t)c->r[0],0); // 800EE9C8
  if (crb(c,2)) { goto L_800EE9E0; } // 800EE9CC
  c->r[0]=R32(c->r[31]+0x00000210u); // 800EE9D0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800EE9D4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800EE9D8
  goto L_800EE9EC; // 800EE9DC
L_800EE9E0:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800EE9E0
  c->r[0]=c->r[0]|0x80000000u; // 800EE9E4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800EE9E8
L_800EE9EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE9EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE9F0
  c->lr=c->r[0]; // 800EE9F4
  c->r[1]=c->r[1]+0x00000010u; // 800EE9F8
  return; // 800EE9FC
}

// fn_800EEA00
void f_800EEA00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEA00
  c->r[0]=c->lr; // 800EEA04
  cmps(c,0,(int32_t)c->r[3],0); // 800EEA08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEA0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EEA10
  c->r[31]=c->r[4]|c->r[4]; // 800EEA14
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EEA18
  c->r[30]=c->r[3]|c->r[3]; // 800EEA1C
  if (crb(c,2)) { goto L_800EEA3C; } // 800EEA20
  c->r[4]=0u+0x00000000u; // 800EEA24
  c->lr=0x800EEA2Cu; f_8026A06C(c); // 800EEA28
  cmps(c,0,(int32_t)c->r[31],0); // 800EEA2C
  if (!crb(c,1)) { goto L_800EEA3C; } // 800EEA30
  c->r[3]=c->r[30]|c->r[30]; // 800EEA34
  c->lr=0x800EEA3Cu; f_8026A268(c); // 800EEA38
L_800EEA3C:;
  c->r[3]=c->r[30]|c->r[30]; // 800EEA3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EEA40
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EEA44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEA48
  c->lr=c->r[0]; // 800EEA4C
  c->r[1]=c->r[1]+0x00000010u; // 800EEA50
  return; // 800EEA54
}

// fn_800EEA58
void f_800EEA58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEA58
  c->r[0]=c->lr; // 800EEA5C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EEA60
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800EEA64
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800EEA68
  c->r[4]=0u+0x00000000u; // 800EEA6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EEA70
  c->r[31]=c->r[3]|c->r[3]; // 800EEA74
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EEA78
  c->lr=0x800EEA80u; f_801F57D0(c); // 800EEA7C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EEA80
  c->r[3]=c->r[31]|c->r[31]; // 800EEA84
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800EEA88
  c->ctr=c->r[12]; // 800EEA8C
  if (true) { c->lr=0x800EEA94u; dispatch(c,c->ctr); } // 800EEA90
  c->r[3]=c->r[31]|c->r[31]; // 800EEA94
  c->lr=0x800EEA9Cu; f_801F4B94(c); // 800EEA98
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EEA9C
  c->r[8]=0u+0x00000000u; // 800EEAA0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800EEAA4
  c->r[5]=0u+0x00000003u; // 800EEAA8
  c->r[4]=0u+0x0000005Cu; // 800EEAAC
  c->r[30]=0u+0x00000001u; // 800EEAB0
  c->r[7]=c->r[0]|0x00000814u; // 800EEAB4
  c->r[0]=0u+0xFFFFFFFFu; // 800EEAB8
  c->r[3]=0u+0x80550000u; // 800EEABC
  W8(c->r[31]+0x0000006Cu,c->r[5]); // 800EEAC0
  c->f[3]=c->f[1]; // 800EEAC4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EEAC8
  W8(c->r[31]+0x0000006Du,c->r[4]); // 800EEACC
  c->r[3]=c->r[3]+0x00003D60u; // 800EEAD0
  {uint32_t ea=c->r[2]+0xFFFFA894u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EEAD4
  c->r[4]=c->r[31]+0x0000002Cu; // 800EEAD8
  W16(c->r[31]+0x000003BEu,c->r[7]); // 800EEADC
  c->r[5]=c->r[31]+0x00000030u; // 800EEAE0
  c->r[6]=0u+0x00000000u; // 800EEAE4
  c->r[7]=0u+0x00000000u; // 800EEAE8
  W8(c->r[31]+0x0000006Fu,c->r[30]); // 800EEAEC
  W8(c->r[31]+0x00000074u,c->r[8]); // 800EEAF0
  W8(c->r[31]+0x00000075u,c->r[8]); // 800EEAF4
  W32(c->r[31]+0x000000A4u,c->r[0]); // 800EEAF8
  W32(c->r[31]+0x000000A8u,c->r[8]); // 800EEAFC
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[1]);} // 800EEB00
  c->lr=0x800EEB08u; f_801D5488(c); // 800EEB04
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EEB08
  c->r[3]=c->r[31]|c->r[31]; // 800EEB0C
  c->lr=0x800EEB14u; f_801F58BC(c); // 800EEB10
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EEB14
  c->r[7]=0u+0x803A0000u; // 800EEB18
  c->r[4]=c->r[1]+0x00000008u; // 800EEB1C
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800EEB20
  {uint32_t ea=c->r[7]+0xFFFFECE0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EEB24
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EEB28
  c->r[3]=R32(c->r[7]+0x00000008u); // 800EEB2C
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 800EEB30
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EEB34
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EEB38
  W32(c->r[1]+0x00000010u,c->r[3]); // 800EEB3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEB40
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EEB44
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EEB48
  c->lr=0x800EEB50u; f_802585B8(c); // 800EEB4C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EEB50
  {uint32_t ea=c->r[2]+0xFFFFA898u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EEB54
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EEB58
  c->lr=0x800EEB60u; f_80259A40(c); // 800EEB5C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EEB60
  c->r[4]=0u+0x00000001u; // 800EEB64
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EEB68
  c->lr=0x800EEB70u; f_80258160(c); // 800EEB6C
  {uint32_t ea=c->r[2]+0xFFFFA89Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EEB70
  c->r[3]=c->r[31]|c->r[31]; // 800EEB74
  c->r[4]=0u+0x00000001u; // 800EEB78
  c->r[5]=0u+0x00000000u; // 800EEB7C
  c->r[6]=0u+0x00000000u; // 800EEB80
  c->r[7]=0u+0x00000000u; // 800EEB84
  c->lr=0x800EEB8Cu; f_801F4D44(c); // 800EEB88
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EEB8C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EEB90
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800EEB94
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800EEB98
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800EEB9C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EEBA0
  c->lr=0x800EEBA8u; f_802501B0(c); // 800EEBA4
  c->r[3]=0u+0x805D0000u; // 800EEBA8
  c->r[4]=c->r[31]+0x0000002Cu; // 800EEBAC
  c->r[3]=c->r[3]+0x000078B0u; // 800EEBB0
  c->lr=0x800EEBB8u; f_802351CC(c); // 800EEBB4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EEBB8
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800EEBBC
  c->r[3]=c->r[31]|c->r[31]; // 800EEBC0
  c->lr=0x800EEBC8u; f_801F56F4(c); // 800EEBC4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EEBC8
  c->r[3]=c->r[31]|c->r[31]; // 800EEBCC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EEBD0
  c->ctr=c->r[12]; // 800EEBD4
  if (true) { c->lr=0x800EEBDCu; dispatch(c,c->ctr); } // 800EEBD8
  c->r[3]=c->r[31]|c->r[31]; // 800EEBDC
  c->lr=0x800EEBE4u; f_800EF864(c); // 800EEBE0
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)112); // 800EEBE4
  W32(c->r[31]+0x00000444u,c->r[30]); // 800EEBE8
  c->lr=0x800EEBF0u; f_8024E174(c); // 800EEBEC
  W32(c->r[31]+0x00000438u,c->r[3]); // 800EEBF0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800EEBF4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800EEBF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EEBFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EEC00
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EEC04
  c->lr=c->r[0]; // 800EEC08
  c->r[1]=c->r[1]+0x00000030u; // 800EEC0C
  return; // 800EEC10
}

// fn_800EEC14
void f_800EEC14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEC14
  c->r[0]=c->lr; // 800EEC18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEC1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EEC20
  c->r[31]=c->r[3]|c->r[3]; // 800EEC24
  c->lr=0x800EEC2Cu; f_800EF554(c); // 800EEC28
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EEC2C
  c->r[3]=c->r[31]|c->r[31]; // 800EEC30
  c->r[12]=R32(c->r[12]+0x00000068u); // 800EEC34
  c->ctr=c->r[12]; // 800EEC38
  if (true) { c->lr=0x800EEC40u; dispatch(c,c->ctr); } // 800EEC3C
  c->r[3]=c->r[31]|c->r[31]; // 800EEC40
  c->lr=0x800EEC48u; f_801F4C0C(c); // 800EEC44
  c->r[3]=c->r[31]|c->r[31]; // 800EEC48
  c->lr=0x800EEC50u; f_801F56F4(c); // 800EEC4C
  c->r[3]=c->r[31]|c->r[31]; // 800EEC50
  c->lr=0x800EEC58u; f_800EF75C(c); // 800EEC54
  c->r[3]=c->r[31]|c->r[31]; // 800EEC58
  c->lr=0x800EEC60u; f_800EF908(c); // 800EEC5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEC60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EEC64
  c->lr=c->r[0]; // 800EEC68
  c->r[1]=c->r[1]+0x00000010u; // 800EEC6C
  return; // 800EEC70
}

// fn_800EEC74
void f_800EEC74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEC74
  c->r[0]=c->lr; // 800EEC78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEC7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EEC80
  c->r[31]=c->r[3]|c->r[3]; // 800EEC84
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EEC88
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EEC8C
  c->lr=0x800EEC94u; f_802501B0(c); // 800EEC90
  c->r[3]=c->r[31]|c->r[31]; // 800EEC94
  c->r[4]=0u+0x00000000u; // 800EEC98
  c->lr=0x800EECA0u; f_801F5244(c); // 800EEC9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EECA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EECA4
  c->lr=c->r[0]; // 800EECA8
  c->r[1]=c->r[1]+0x00000010u; // 800EECAC
  return; // 800EECB0
}

// fn_800EECB4
void f_800EECB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EECB4
  c->r[0]=c->lr; // 800EECB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EECBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EECC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EECC4
  c->r[30]=c->r[3]|c->r[3]; // 800EECC8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EECCC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EECD0
  c->lr=0x800EECD8u; f_802501B0(c); // 800EECD4
  c->r[3]=c->r[30]|c->r[30]; // 800EECD8
  c->r[4]=0u+0x00000000u; // 800EECDC
  c->lr=0x800EECE4u; f_801F5244(c); // 800EECE0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EECE4
  c->r[3]=c->r[30]+0x0000002Cu; // 800EECE8
  c->r[4]=c->r[4]+0x0000005Cu; // 800EECEC
  c->lr=0x800EECF4u; f_800361A0(c); // 800EECF0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EECF4
  c->r[3]=c->r[30]|c->r[30]; // 800EECF8
  c->lr=0x800EED00u; f_801F5418(c); // 800EECFC
  cmps(c,0,(int32_t)c->r[3],0); // 800EED00
  if (!crb(c,0)) { goto L_800EED3C; } // 800EED04
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800EED08
  c->r[3]=0u+0x00000001u; // 800EED0C
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800EED10
  c->r[3]=c->r[30]|c->r[30]; // 800EED14
  c->r[0]=c->r[0]|0x00000080u; // 800EED18
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EED1C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800EED20
  c->r[4]=0u+0x00000064u; // 800EED24
  c->r[5]=0u+0x00000000u; // 800EED28
  c->r[6]=0u+0x00000000u; // 800EED2C
  c->r[7]=0u+0x00000000u; // 800EED30
  c->lr=0x800EED38u; f_801F4D44(c); // 800EED34
  goto L_800EED70; // 800EED38
L_800EED3C:;
  c->r[31]=0u+0x805D0000u; // 800EED3C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EED40
  c->lr=0x800EED48u; f_800447E4(c); // 800EED44
  cmpu(c,0,c->r[3],0x00000001u); // 800EED48
  if (!crb(c,2)) { goto L_800EED5C; } // 800EED4C
  c->r[0]=0u+0x00000000u; // 800EED50
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800EED54
  goto L_800EED68; // 800EED58
L_800EED5C:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EED5C
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800EED60
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800EED64
L_800EED68:;
  c->r[3]=c->r[30]|c->r[30]; // 800EED68
  c->lr=0x800EED70u; f_801F5B14(c); // 800EED6C
L_800EED70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EED70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EED74
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EED78
  c->lr=c->r[0]; // 800EED7C
  c->r[1]=c->r[1]+0x00000010u; // 800EED80
  return; // 800EED84
}

// fn_800EED88
void f_800EED88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EED88
  c->r[0]=c->lr; // 800EED8C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800EED90
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800EED94
  c->r[31]=c->r[3]|c->r[3]; // 800EED98
  W32(c->r[1]+0x00000048u,c->r[30]); // 800EED9C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EEDA0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EEDA4
  c->lr=0x800EEDACu; f_802501B0(c); // 800EEDA8
  c->r[3]=c->r[31]+0x00000038u; // 800EEDAC
  c->r[4]=c->r[31]+0x0000002Cu; // 800EEDB0
  c->lr=0x800EEDB8u; f_800361A0(c); // 800EEDB4
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EEDB8
  c->r[3]=0u+0x80550000u; // 800EEDBC
  c->r[3]=c->r[3]+0x00003D60u; // 800EEDC0
  c->r[4]=c->r[31]+0x00000038u; // 800EEDC4
  c->f[2]=c->f[1]; // 800EEDC8
  c->r[5]=c->r[1]+0x00000008u; // 800EEDCC
  c->f[3]=c->f[1]; // 800EEDD0
  c->r[6]=0u+0x00000000u; // 800EEDD4
  c->r[7]=0u+0x00000000u; // 800EEDD8
  c->lr=0x800EEDE0u; f_801D5488(c); // 800EEDDC
  c->r[5]=R32(c->r[31]+0x00000394u); // 800EEDE0
  c->r[3]=c->r[31]+0x00000060u; // 800EEDE4
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EEDE8
  c->r[4]=c->r[5]+0x00000068u; // 800EEDEC
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800EEDF0
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EEDF4
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800EEDF8
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EEDFC
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800EEE00
  c->lr=0x800EEE08u; f_800361A0(c); // 800EEE04
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EEE08
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EEE0C
  c->lr=0x800EEE14u; f_802501B0(c); // 800EEE10
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800EEE14
  c->r[30]=0u+0x00000001u; // 800EEE18
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EEE1C
  c->r[4]=c->r[31]+0x0000002Cu; // 800EEE20
  {uint32_t ea=c->r[2]+0xFFFFA8A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EEE24
  c->r[0]=c->r[0]|0x00002000u; // 800EEE28
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800EEE2C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EEE30
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800EEE34
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800EEE38
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800EEE3C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EEE40
  c->r[3]=c->r[3]+0x0000005Cu; // 800EEE44
  c->lr=0x800EEE4Cu; f_800361A0(c); // 800EEE48
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EEE4C
  c->r[4]=0u+0x00000040u; // 800EEE50
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EEE54
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800EEE58
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EEE5C
  c->r[3]=c->r[3]+0x0000001Cu; // 800EEE60
  c->lr=0x800EEE68u; f_802518A4(c); // 800EEE64
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EEE68
  c->r[4]=0u+0x00000006u; // 800EEE6C
  c->r[3]=c->r[3]+0x0000001Cu; // 800EEE70
  c->lr=0x800EEE78u; f_80251824(c); // 800EEE74
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EEE78
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EEE7C
  c->lr=0x800EEE84u; f_802501B0(c); // 800EEE80
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EEE84
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800EEE88
  cmps(c,0,(int32_t)c->r[0],0); // 800EEE8C
  if (crb(c,2)) { goto L_800EEF78; } // 800EEE90
  c->r[3]=c->r[3]+0x00000068u; // 800EEE94
  c->r[4]=c->r[31]+0x00000060u; // 800EEE98
  c->lr=0x800EEEA0u; f_800361A0(c); // 800EEE9C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EEEA0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EEEA4
  c->lr=0x800EEEACu; f_8025037C(c); // 800EEEA8
  c->r[6]=R32(c->r[31]+0x00000394u); // 800EEEAC
  c->r[3]=c->r[31]+0x0000002Cu; // 800EEEB0
  c->r[4]=c->r[31]+0x00000060u; // 800EEEB4
  c->r[5]=c->r[1]+0x00000030u; // 800EEEB8
  c->r[6]=c->r[6]+0x000000B0u; // 800EEEBC
  c->r[7]=0u+0x00000000u; // 800EEEC0
  c->lr=0x800EEEC8u; f_8002BE64(c); // 800EEEC4
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800EEEC8
  c->r[3]=0u+0x805D0000u; // 800EEECC
  c->r[0]=R32(c->r[31]+0x00000030u); // 800EEED0
  c->r[3]=c->r[3]+0x00003F6Cu; // 800EEED4
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EEED8
  c->r[4]=c->r[31]|c->r[31]; // 800EEEDC
  W32(c->r[1]+0x00000018u,c->r[5]); // 800EEEE0
  c->r[7]=c->r[1]+0x00000018u; // 800EEEE4
  c->r[6]=0u+0x0000003Eu; // 800EEEE8
  c->r[8]=0u+0x00000000u; // 800EEEEC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EEEF0
  c->r[0]=R32(c->r[31]+0x00000034u); // 800EEEF4
  W32(c->r[1]+0x00000020u,c->r[0]); // 800EEEF8
  c->r[3]=R32(c->r[31]+0x00000438u); // 800EEEFC
  c->r[5]=R32(c->r[31]+0x00000394u); // 800EEF00
  c->lr=0x800EEF08u; f_801FA6A4(c); // 800EEF04
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800EEF08
  cmps(c,0,(int32_t)c->r[0],0); // 800EEF0C
  if (crb(c,2)) { goto L_800EEF28; } // 800EEF10
  c->r[3]=c->r[31]+0x00000044u; // 800EEF14
  c->r[4]=c->r[31]+0x000003CCu; // 800EEF18
  c->lr=0x800EEF20u; f_800361A0(c); // 800EEF1C
  W8(c->r[31]+0x00000075u,c->r[30]); // 800EEF20
  goto L_800EEF60; // 800EEF24
L_800EEF28:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EEF28
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EEF2C
  fcmp(c,0,c->f[1],c->f[0]); // 800EEF30
  if (!crb(c,1)) { goto L_800EEF60; } // 800EEF34
  c->r[7]=0u+0x803A0000u; // 800EEF38
  {uint32_t ea=c->r[7]+0xFFFFECF0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EEF3C
  c->r[3]=c->r[31]+0x00000044u; // 800EEF40
  c->r[4]=c->r[1]+0x00000024u; // 800EEF44
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EEF48
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EEF4C
  W32(c->r[1]+0x00000024u,c->r[6]); // 800EEF50
  W32(c->r[1]+0x00000028u,c->r[5]); // 800EEF54
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800EEF58
  c->lr=0x800EEF60u; f_800361A0(c); // 800EEF5C
L_800EEF60:;
  c->r[6]=0u+0x803A0000u; // 800EEF60
  c->r[3]=R32(c->r[31]+0x00000438u); // 800EEF64
  c->r[5]=c->r[31]+0x00000044u; // 800EEF68
  c->r[4]=0u+0x00000000u; // 800EEF6C
  c->r[6]=c->r[6]+0xFFFFECA0u; // 800EEF70
  c->lr=0x800EEF78u; f_801FBEC0(c); // 800EEF74
L_800EEF78:;
  c->r[3]=c->r[31]|c->r[31]; // 800EEF78
  c->r[4]=0u+0x00000000u; // 800EEF7C
  c->lr=0x800EEF84u; f_801F7C00(c); // 800EEF80
  c->r[7]=0u+0x803D0000u; // 800EEF84
  {uint32_t ea=c->r[7]+0x00004690u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EEF88
  c->r[3]=c->r[31]|c->r[31]; // 800EEF8C
  c->r[4]=c->r[1]+0x0000000Cu; // 800EEF90
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EEF94
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EEF98
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800EEF9C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800EEFA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEFA4
  c->lr=0x800EEFACu; f_800EEFC4(c); // 800EEFA8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800EEFAC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800EEFB0
  c->r[30]=R32(c->r[1]+0x00000048u); // 800EEFB4
  c->lr=c->r[0]; // 800EEFB8
  c->r[1]=c->r[1]+0x00000050u; // 800EEFBC
  return; // 800EEFC0
}

// fn_800EEFC4
void f_800EEFC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEFC4
  c->r[0]=c->lr; // 800EEFC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEFCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EEFD0
  c->r[31]=c->r[4]|c->r[4]; // 800EEFD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EEFD8
  c->r[30]=c->r[3]|c->r[3]; // 800EEFDC
  c->r[3]=c->r[31]|c->r[31]; // 800EEFE0
  c->lr=0x800EEFE8u; f_802B9FDC(c); // 800EEFE4
  cmps(c,0,(int32_t)c->r[3],0); // 800EEFE8
  if (crb(c,2)) { goto L_800EF008; } // 800EEFEC
  c->r[3]=R32(c->r[31]+0x00000000u); // 800EEFF0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800EEFF4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800EEFF8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800EEFFC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800EF000
  W32(c->r[30]+0x00000024u,c->r[0]); // 800EF004
L_800EF008:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF008
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF00C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EF010
  c->lr=c->r[0]; // 800EF014
  c->r[1]=c->r[1]+0x00000010u; // 800EF018
  return; // 800EF01C
}

// fn_800EF020
void f_800EF020(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF020
  c->r[0]=c->lr; // 800EF024
  W32(c->r[1]+0x00000064u,c->r[0]); // 800EF028
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800EF02C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800EF030
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 800EF034
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 800EF038
  c->r[4]=0u+0x00000000u; // 800EF03C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800EF040
  c->r[31]=c->r[3]|c->r[3]; // 800EF044
  W32(c->r[1]+0x00000038u,c->r[30]); // 800EF048
  c->r[3]=R32(c->r[3]+0x00000438u); // 800EF04C
  c->lr=0x800EF054u; f_801FAF00(c); // 800EF050
  cmps(c,0,(int32_t)c->r[3],0); // 800EF054
  if (!crb(c,2)) { goto L_800EF0F4; } // 800EF058
  c->r[3]=c->r[31]|c->r[31]; // 800EF05C
  c->r[4]=0u+0x00000040u; // 800EF060
  c->lr=0x800EF068u; f_801F5AB4(c); // 800EF064
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800EF068
  c->r[5]=0u+0x00000000u; // 800EF06C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EF070
  c->r[3]=c->r[31]+0x0000002Cu; // 800EF074
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800EF078
  W8(c->r[31]+0x00000075u,c->r[5]); // 800EF07C
  c->r[0]=c->r[0]|0x00000004u; // 800EF080
  c->r[4]=c->r[4]+0x0000005Cu; // 800EF084
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800EF088
  c->lr=0x800EF090u; f_800361A0(c); // 800EF08C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EF090
  c->r[3]=c->r[31]+0x00000060u; // 800EF094
  c->r[4]=c->r[4]+0x00000068u; // 800EF098
  c->lr=0x800EF0A0u; f_800361A0(c); // 800EF09C
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800EF0A0
  c->r[3]=0u+0x805D0000u; // 800EF0A4
  c->r[0]=R32(c->r[31]+0x00000030u); // 800EF0A8
  c->r[3]=c->r[3]+0x00006CF8u; // 800EF0AC
  c->r[4]=c->r[1]+0x00000008u; // 800EF0B0
  c->r[5]=0u+0x00040000u; // 800EF0B4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EF0B8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800EF0BC
  c->r[0]=R32(c->r[31]+0x00000034u); // 800EF0C0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EF0C4
  c->lr=0x800EF0CCu; f_802236F8(c); // 800EF0C8
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800EF0CC
  c->r[3]=c->r[31]|c->r[31]; // 800EF0D0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EF0D4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EF0D8
  c->ctr=c->r[12]; // 800EF0DC
  if (true) { c->lr=0x800EF0E4u; dispatch(c,c->ctr); } // 800EF0E0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EF0E4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EF0E8
  c->lr=0x800EF0F0u; f_8025037C(c); // 800EF0EC
  goto L_800EF200; // 800EF0F0
L_800EF0F4:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EF0F4
  c->r[3]=c->r[31]+0x0000002Cu; // 800EF0F8
  c->r[4]=c->r[4]+0x0000005Cu; // 800EF0FC
  c->lr=0x800EF104u; f_800361A0(c); // 800EF100
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EF104
  c->r[3]=c->r[31]+0x00000060u; // 800EF108
  c->r[4]=c->r[4]+0x00000068u; // 800EF10C
  c->lr=0x800EF114u; f_800361A0(c); // 800EF110
  c->r[0]=R8(c->r[31]+0x00000075u); // 800EF114
  cmps(c,0,(int32_t)c->r[0],0); // 800EF118
  if (crb(c,2)) { goto L_800EF200; } // 800EF11C
  c->r[3]=R32(c->r[31]+0x00000438u); // 800EF120
  c->lr=0x800EF128u; f_80050BE4(c); // 800EF124
  cmps(c,0,(int32_t)c->r[3],0); // 800EF128
  if (crb(c,2)) { goto L_800EF200; } // 800EF12C
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800EF130
  c->r[30]=0u+0x43300000u; // 800EF134
  c->r[4]=0u+0x00000000u; // 800EF138
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EF13C
  {uint32_t ea=c->r[2]+0xFFFFA8B8u; c->f[2]=RF64(ea);} // 800EF140
  c->r[3]=c->r[13]+0xFFFFAB38u; // 800EF144
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EF148
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EF14C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 800EF150
  {uint32_t ea=c->r[2]+0xFFFFA8A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF154
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800EF158
  W8(c->r[31]+0x00000075u,c->r[4]); // 800EF15C
  c->f[31]=c->ps1[31]=S(std::fma(c->f[0],c->f[1],c->f[31])); // 800EF160
  c->lr=0x800EF168u; f_80211724(c); // 800EF164
  c->r[4]=0u+0xAAAB0000u; // 800EF168
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800EF16C
  c->r[4]=c->r[4]+0xFFFFAAABu; // 800EF170
  W32(c->r[1]+0x00000028u,c->r[30]); // 800EF174
  c->r[4]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[3])>>32); // 800EF178
  {uint32_t ea=c->r[2]+0xFFFFA8B8u; c->f[4]=RF64(ea);} // 800EF17C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800EF180
  {uint32_t ea=c->r[2]+0xFFFFA8ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EF184
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 800EF188
  W32(c->r[1]+0x00000020u,c->r[30]); // 800EF18C
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 800EF190
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 800EF194
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)3); // 800EF198
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF19C
  {uint32_t ea=c->r[2]+0xFFFFA8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF1A0
  c->f[30]=c->ps1[30]=S(std::fma(c->f[1],c->f[2],c->f[3])); // 800EF1A4
  c->r[0]=c->r[3]-c->r[0]; // 800EF1A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF1AC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800EF1B0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 800EF1B4
  c->f[31]=c->ps1[31]=S(std::fma(c->f[3],c->f[1],c->f[31])); // 800EF1B8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 800EF1BC
  c->lr=0x800EF1C4u; f_802C10A8(c); // 800EF1C0
  c->f[3]=c->ps1[3]=S(c->f[30]*c->f[1]); // 800EF1C4
  {uint32_t ea=c->r[2]+0xFFFFA8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF1C8
  {uint32_t ea=c->r[2]+0xFFFFA894u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EF1CC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 800EF1D0
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[3]);} // 800EF1D4
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[2]);} // 800EF1D8
  c->lr=0x800EF1E0u; f_802C1080(c); // 800EF1DC
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 800EF1E0
  c->r[6]=0u+0x803A0000u; // 800EF1E4
  c->r[3]=R32(c->r[31]+0x00000438u); // 800EF1E8
  c->r[5]=c->r[31]+0x00000044u; // 800EF1EC
  c->r[6]=c->r[6]+0xFFFFECA0u; // 800EF1F0
  c->r[4]=0u+0x00000000u; // 800EF1F4
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800EF1F8
  c->lr=0x800EF200u; f_801FBEC0(c); // 800EF1FC
L_800EF200:;
  c->r[3]=c->r[31]|c->r[31]; // 800EF200
  c->r[4]=0u+0x00000000u; // 800EF204
  c->lr=0x800EF20Cu; f_801F7C00(c); // 800EF208
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800EF20C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800EF210
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 800EF214
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 800EF218
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800EF21C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800EF220
  c->r[30]=R32(c->r[1]+0x00000038u); // 800EF224
  c->lr=c->r[0]; // 800EF228
  c->r[1]=c->r[1]+0x00000060u; // 800EF22C
  return; // 800EF230
}

// fn_800EF234
void f_800EF234(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF234
  c->r[0]=c->lr; // 800EF238
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EF23C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800EF240
  c->r[31]=c->r[3]|c->r[3]; // 800EF244
  W32(c->r[1]+0x00000038u,c->r[30]); // 800EF248
  c->r[30]=0u+0x803A0000u; // 800EF24C
  c->r[30]=c->r[30]+0xFFFFECA0u; // 800EF250
  c->r[5]=R32(c->r[3]+0x000000A8u); // 800EF254
  cmps(c,0,(int32_t)c->r[5],1); // 800EF258
  if (crb(c,2)) { goto L_800EF30C; } // 800EF25C
  if (!crb(c,0)) { goto L_800EF270; } // 800EF260
  cmps(c,0,(int32_t)c->r[5],0); // 800EF264
  if (!crb(c,0)) { goto L_800EF27C; } // 800EF268
  goto L_800EF410; // 800EF26C
L_800EF270:;
  cmps(c,0,(int32_t)c->r[5],3); // 800EF270
  if (!crb(c,0)) { goto L_800EF410; } // 800EF274
  goto L_800EF3AC; // 800EF278
L_800EF27C:;
  c->r[4]=R16(c->r[3]+0x000003BEu); // 800EF27C
  c->r[0]=0u+0x00000001u; // 800EF280
  W8(c->r[3]+0x0000006Fu,c->r[0]); // 800EF284
  c->r[5]=c->r[30]+0x0000005Cu; // 800EF288
  c->r[0]=rotl(c->r[4],0)&0xFFFFDFFFu; // 800EF28C
  c->r[4]=c->r[1]+0x00000020u; // 800EF290
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800EF294
  c->r[3]=c->r[3]+0x0000002Cu; // 800EF298
  c->r[7]=R32(c->r[30]+0x0000005Cu); // 800EF29C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800EF2A0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800EF2A4
  W32(c->r[1]+0x00000020u,c->r[7]); // 800EF2A8
  W32(c->r[1]+0x00000024u,c->r[6]); // 800EF2AC
  W32(c->r[1]+0x00000028u,c->r[0]); // 800EF2B0
  c->lr=0x800EF2B8u; f_800361A0(c); // 800EF2B4
  c->r[4]=c->r[30]+0x00000068u; // 800EF2B8
  c->r[6]=R32(c->r[30]+0x00000068u); // 800EF2BC
  c->r[5]=R32(c->r[4]+0x00000004u); // 800EF2C0
  c->r[3]=c->r[31]+0x00000060u; // 800EF2C4
  c->r[0]=R32(c->r[4]+0x00000008u); // 800EF2C8
  c->r[4]=c->r[1]+0x00000014u; // 800EF2CC
  W32(c->r[1]+0x00000014u,c->r[6]); // 800EF2D0
  W32(c->r[1]+0x00000018u,c->r[5]); // 800EF2D4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EF2D8
  c->lr=0x800EF2E0u; f_800361A0(c); // 800EF2DC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EF2E0
  c->r[4]=0u+0x00000005u; // 800EF2E4
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF2E8
  c->r[5]=0u+0x0000001Fu; // 800EF2EC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EF2F0
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EF2F4
  c->lr=0x800EF2FCu; f_8024FEAC(c); // 800EF2F8
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800EF2FC
  c->r[0]=c->r[3]+0x00000001u; // 800EF300
  W32(c->r[31]+0x000000A8u,c->r[0]); // 800EF304
  goto L_800EF410; // 800EF308
L_800EF30C:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EF30C
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF310
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF314
  fcmp(c,0,c->f[1],c->f[0]); // 800EF318
  if (crb(c,0)) { goto L_800EF410; } // 800EF31C
  c->r[0]=c->r[5]+0x00000001u; // 800EF320
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800EF324
  c->r[3]=R32(c->r[3]+0x000000A4u); // 800EF328
  c->lr=0x800EF330u; f_8012FBB4(c); // 800EF32C
  c->r[0]=0u+0xFFFFFFFFu; // 800EF330
  c->r[4]=0u+0x803A0000u; // 800EF334
  W32(c->r[31]+0x000000A4u,c->r[0]); // 800EF338
  c->r[4]=c->r[4]+0xFFFFED60u; // 800EF33C
  c->r[3]=0u+0xFFFFFFFFu; // 800EF340
  c->r[5]=0u+0x00000000u; // 800EF344
  c->lr=0x800EF34Cu; f_8012FA5C(c); // 800EF348
  W32(c->r[31]+0x000000A4u,c->r[3]); // 800EF34C
  c->r[4]=c->r[30]+0x00000074u; // 800EF350
  c->r[3]=0u+0x80550000u; // 800EF354
  c->r[5]=c->r[1]+0x00000008u; // 800EF358
  c->r[9]=R32(c->r[30]+0x00000074u); // 800EF35C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800EF360
  c->r[8]=R32(c->r[4]+0x00000004u); // 800EF364
  c->r[6]=c->r[31]+0x00000060u; // 800EF368
  c->r[0]=R32(c->r[4]+0x00000008u); // 800EF36C
  c->r[7]=0u+0x00000000u; // 800EF370
  W32(c->r[1]+0x00000008u,c->r[9]); // 800EF374
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 800EF378
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EF37C
  c->r[4]=R32(c->r[31]+0x000000A4u); // 800EF380
  c->lr=0x800EF388u; f_8018DFE0(c); // 800EF384
  c->r[3]=c->r[31]|c->r[31]; // 800EF388
  c->r[4]=0u+0x00000002u; // 800EF38C
  c->r[5]=0u+0x00000014u; // 800EF390
  c->r[6]=0u+0x00000001u; // 800EF394
  c->r[7]=0u+0x00000001u; // 800EF398
  c->lr=0x800EF3A0u; f_8017900C(c); // 800EF39C
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF3A0
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 800EF3A4
  goto L_800EF410; // 800EF3A8
L_800EF3AC:;
  c->lr=0x800EF3B0u; f_8024E040(c); // 800EF3AC
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EF3B0
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF3B4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800EF3B8
  fcmp(c,0,c->f[1],c->f[0]); // 800EF3BC
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[1]);} // 800EF3C0
  if (crb(c,0)) { goto L_800EF410; } // 800EF3C4
  c->r[6]=R32(c->r[31]+0x000000A8u); // 800EF3C8
  c->r[3]=c->r[31]|c->r[31]; // 800EF3CC
  c->r[4]=0u+0x00000002u; // 800EF3D0
  c->r[5]=0u+0x00000014u; // 800EF3D4
  c->r[0]=c->r[6]+0x00000001u; // 800EF3D8
  c->r[6]=0u+0x00000001u; // 800EF3DC
  W32(c->r[31]+0x000000A8u,c->r[0]); // 800EF3E0
  c->r[7]=0u+0x00000001u; // 800EF3E4
  c->lr=0x800EF3ECu; f_8017900C(c); // 800EF3E8
  c->r[3]=R32(c->r[31]+0x000000A4u); // 800EF3EC
  c->lr=0x800EF3F4u; f_8012FBB4(c); // 800EF3F0
  c->r[0]=0u+0xFFFFFFFFu; // 800EF3F4
  c->r[3]=c->r[31]|c->r[31]; // 800EF3F8
  W32(c->r[31]+0x000000A4u,c->r[0]); // 800EF3FC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EF400
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EF404
  c->ctr=c->r[12]; // 800EF408
  if (true) { c->lr=0x800EF410u; dispatch(c,c->ctr); } // 800EF40C
L_800EF410:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EF410
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EF414
  c->lr=0x800EF41Cu; f_802501B0(c); // 800EF418
  c->r[3]=c->r[31]|c->r[31]; // 800EF41C
  c->r[4]=0u+0x00000000u; // 800EF420
  c->lr=0x800EF428u; f_801F5244(c); // 800EF424
  c->r[0]=R32(c->r[1]+0x00000044u); // 800EF428
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800EF42C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800EF430
  c->lr=c->r[0]; // 800EF434
  c->r[1]=c->r[1]+0x00000040u; // 800EF438
  return; // 800EF43C
}

// fn_800EF440
void f_800EF440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF440
  c->r[0]=c->lr; // 800EF444
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF448
  c->r[4]=0u+0x00000000u; // 800EF44C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EF450
  {uint32_t ea=c->r[2]+0xFFFFA89Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EF454
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800EF458
  c->r[31]=c->r[3]|c->r[3]; // 800EF45C
  c->r[5]=R32(c->r[3]+0x00000394u); // 800EF460
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800EF464
  c->r[5]=0u+0x0000001Fu; // 800EF468
  c->lr=0x800EF470u; f_8024FEAC(c); // 800EF46C
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800EF470
  c->r[0]=0u+0x00000001u; // 800EF474
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800EF478
  c->r[7]=0u+0x803A0000u; // 800EF47C
  c->r[0]=rotl(c->r[3],0)&0xFFFFDFFFu; // 800EF480
  c->r[3]=c->r[31]+0x0000002Cu; // 800EF484
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800EF488
  c->r[4]=c->r[1]+0x00000014u; // 800EF48C
  {uint32_t ea=c->r[7]+0xFFFFED20u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EF490
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EF494
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EF498
  W32(c->r[1]+0x00000014u,c->r[6]); // 800EF49C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800EF4A0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EF4A4
  c->lr=0x800EF4ACu; f_800361A0(c); // 800EF4A8
  c->r[7]=0u+0x803A0000u; // 800EF4AC
  {uint32_t ea=c->r[7]+0xFFFFED2Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800EF4B0
  c->r[3]=c->r[31]+0x00000060u; // 800EF4B4
  c->r[4]=c->r[1]+0x00000008u; // 800EF4B8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EF4BC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EF4C0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EF4C4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EF4C8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EF4CC
  c->lr=0x800EF4D4u; f_800361A0(c); // 800EF4D0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EF4D4
  c->r[3]=c->r[31]|c->r[31]; // 800EF4D8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EF4DC
  c->ctr=c->r[12]; // 800EF4E0
  if (true) { c->lr=0x800EF4E8u; dispatch(c,c->ctr); } // 800EF4E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EF4E8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800EF4EC
  c->lr=c->r[0]; // 800EF4F0
  c->r[1]=c->r[1]+0x00000030u; // 800EF4F4
  return; // 800EF4F8
}

// fn_800EF4FC
void f_800EF4FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF4FC
  c->r[0]=c->lr; // 800EF500
  c->r[5]=0u+0x00000000u; // 800EF504
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF508
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF50C
  c->r[31]=c->r[3]|c->r[3]; // 800EF510
  c->r[3]=0u+0x00000024u; // 800EF514
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EF518
  c->r[4]=c->r[4]+0x0000010Cu; // 800EF51C
  c->lr=0x800EF524u; f_8024EE50(c); // 800EF520
  cmps(c,0,(int32_t)c->r[3],0); // 800EF524
  if (crb(c,2)) { goto L_800EF534; } // 800EF528
  c->r[3]=0u+0x00000000u; // 800EF52C
  goto L_800EF540; // 800EF530
L_800EF534:;
  c->r[3]=c->r[31]+0x00000210u; // 800EF534
  c->r[4]=0u+0x000000E5u; // 800EF538
  c->lr=0x800EF540u; f_80221630(c); // 800EF53C
L_800EF540:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF540
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF544
  c->lr=c->r[0]; // 800EF548
  c->r[1]=c->r[1]+0x00000010u; // 800EF54C
  return; // 800EF550
}

// fn_800EF554
void f_800EF554(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF554
  c->r[0]=c->lr; // 800EF558
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF55C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF560
  c->r[31]=0u+0x805D0000u; // 800EF564
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EF568
  c->r[30]=c->r[3]|c->r[3]; // 800EF56C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EF570
  c->lr=0x800EF578u; f_80045264(c); // 800EF574
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800EF578
  cmpu(c,0,c->r[0],0x00000040u); // 800EF57C
  if (!crb(c,2)) { goto L_800EF5CC; } // 800EF580
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EF584
  c->lr=0x800EF58Cu; f_80037AF0(c); // 800EF588
  cmpu(c,0,c->r[3],c->r[30]); // 800EF58C
  if (!crb(c,2)) { goto L_800EF5CC; } // 800EF590
  c->r[3]=R32(c->r[30]+0x00000210u); // 800EF594
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800EF598
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 800EF59C
  cmps(c,0,(int32_t)c->r[0],101); // 800EF5A0
  W32(c->r[30]+0x00000210u,c->r[3]); // 800EF5A4
  if (crb(c,2)) { goto L_800EF5D8; } // 800EF5A8
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF5AC
  c->r[3]=c->r[30]|c->r[30]; // 800EF5B0
  c->r[4]=0u+0x00000065u; // 800EF5B4
  c->r[5]=0u+0x00000000u; // 800EF5B8
  c->r[6]=0u+0x00000000u; // 800EF5BC
  c->r[7]=0u+0x00000000u; // 800EF5C0
  c->lr=0x800EF5C8u; f_801F4D44(c); // 800EF5C4
  goto L_800EF5D8; // 800EF5C8
L_800EF5CC:;
  c->r[0]=R32(c->r[30]+0x00000210u); // 800EF5CC
  c->r[0]=c->r[0]|0x80000000u; // 800EF5D0
  W32(c->r[30]+0x00000210u,c->r[0]); // 800EF5D4
L_800EF5D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF5D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF5DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EF5E0
  c->lr=c->r[0]; // 800EF5E4
  c->r[1]=c->r[1]+0x00000010u; // 800EF5E8
  return; // 800EF5EC
}

// fn_800EF5F0
void f_800EF5F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF5F0
  c->r[0]=c->lr; // 800EF5F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EF5F8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800EF5FC
  c->r[31]=0u+0x803D0000u; // 800EF600
  c->r[31]=c->r[31]+0x00004690u; // 800EF604
  W32(c->r[1]+0x00000038u,c->r[30]); // 800EF608
  c->r[30]=c->r[3]|c->r[3]; // 800EF60C
  c->lr=0x800EF614u; f_801F4F28(c); // 800EF610
  c->r[3]=R32(c->r[30]+0x000003C0u); // 800EF614
  cmps(c,0,(int32_t)c->r[3],102); // 800EF618
  if (crb(c,2)) { goto L_800EF6A0; } // 800EF61C
  if (!crb(c,0)) { goto L_800EF634; } // 800EF620
  cmps(c,0,(int32_t)c->r[3],100); // 800EF624
  if (crb(c,2)) { goto L_800EF640; } // 800EF628
  if (!crb(c,0)) { goto L_800EF670; } // 800EF62C
  goto L_800EF704; // 800EF630
L_800EF634:;
  cmps(c,0,(int32_t)c->r[3],104); // 800EF634
  if (!crb(c,0)) { goto L_800EF704; } // 800EF638
  goto L_800EF6D8; // 800EF63C
L_800EF640:;
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800EF640
  c->r[5]=c->r[31]+0x0000000Cu; // 800EF644
  c->r[3]=c->r[30]|c->r[30]; // 800EF648
  c->r[4]=c->r[1]+0x0000002Cu; // 800EF64C
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800EF650
  c->r[6]=R32(c->r[5]+0x00000004u); // 800EF654
  c->r[0]=R32(c->r[5]+0x00000008u); // 800EF658
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800EF65C
  W32(c->r[1]+0x00000030u,c->r[6]); // 800EF660
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EF664
  c->lr=0x800EF66Cu; f_800EEFC4(c); // 800EF668
  goto L_800EF704; // 800EF66C
L_800EF670:;
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800EF670
  c->r[5]=c->r[31]+0x00000018u; // 800EF674
  c->r[3]=c->r[30]|c->r[30]; // 800EF678
  c->r[4]=c->r[1]+0x00000020u; // 800EF67C
  c->r[7]=R32(c->r[31]+0x00000018u); // 800EF680
  c->r[6]=R32(c->r[5]+0x00000004u); // 800EF684
  c->r[0]=R32(c->r[5]+0x00000008u); // 800EF688
  W32(c->r[1]+0x00000020u,c->r[7]); // 800EF68C
  W32(c->r[1]+0x00000024u,c->r[6]); // 800EF690
  W32(c->r[1]+0x00000028u,c->r[0]); // 800EF694
  c->lr=0x800EF69Cu; f_800EEFC4(c); // 800EF698
  goto L_800EF704; // 800EF69C
L_800EF6A0:;
  c->r[0]=0u+0x00000000u; // 800EF6A0
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800EF6A4
  c->r[5]=c->r[31]+0x00000024u; // 800EF6A8
  c->r[3]=c->r[30]|c->r[30]; // 800EF6AC
  W32(c->r[30]+0x000000A8u,c->r[0]); // 800EF6B0
  c->r[4]=c->r[1]+0x00000014u; // 800EF6B4
  c->r[7]=R32(c->r[31]+0x00000024u); // 800EF6B8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800EF6BC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800EF6C0
  W32(c->r[1]+0x00000014u,c->r[7]); // 800EF6C4
  W32(c->r[1]+0x00000018u,c->r[6]); // 800EF6C8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EF6CC
  c->lr=0x800EF6D4u; f_800EEFC4(c); // 800EF6D0
  goto L_800EF704; // 800EF6D4
L_800EF6D8:;
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800EF6D8
  c->r[5]=c->r[31]+0x00000030u; // 800EF6DC
  c->r[3]=c->r[30]|c->r[30]; // 800EF6E0
  c->r[4]=c->r[1]+0x00000008u; // 800EF6E4
  c->r[7]=R32(c->r[31]+0x00000030u); // 800EF6E8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800EF6EC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800EF6F0
  W32(c->r[1]+0x00000008u,c->r[7]); // 800EF6F4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800EF6F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EF6FC
  c->lr=0x800EF704u; f_800EEFC4(c); // 800EF700
L_800EF704:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800EF704
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800EF708
  c->r[30]=R32(c->r[1]+0x00000038u); // 800EF70C
  c->lr=c->r[0]; // 800EF710
  c->r[1]=c->r[1]+0x00000040u; // 800EF714
  return; // 800EF718
}

// fn_800EF71C
void f_800EF71C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF71C
  c->r[0]=c->lr; // 800EF720
  c->r[7]=0u+0x803D0000u; // 800EF724
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF728
  c->r[4]=c->r[1]+0x00000008u; // 800EF72C
  {uint32_t ea=c->r[7]+0x000046CCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800EF730
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EF734
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EF738
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EF73C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EF740
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EF744
  c->lr=0x800EF74Cu; f_800EEFC4(c); // 800EF748
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF74C
  c->lr=c->r[0]; // 800EF750
  c->r[1]=c->r[1]+0x00000020u; // 800EF754
  return; // 800EF758
}

// fn_800EF75C
void f_800EF75C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF75C
  c->r[0]=c->lr; // 800EF760
  c->r[4]=0u+0x00000020u; // 800EF764
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800EF768
  W32(c->r[1]+0x000000BCu,c->r[31]); // 800EF76C
  c->r[31]=0u+0x80620000u; // 800EF770
  c->r[31]=c->r[31]+0x00007688u; // 800EF774
  W32(c->r[1]+0x000000B8u,c->r[30]); // 800EF778
  c->r[30]=c->r[3]|c->r[3]; // 800EF77C
  c->r[3]=R32(c->r[31]+0x00000014u); // 800EF780
  c->lr=0x800EF788u; f_80038AF4(c); // 800EF784
  cmps(c,0,(int32_t)c->r[3],0); // 800EF788
  if (crb(c,2)) { goto L_800EF84C; } // 800EF78C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EF790
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800EF794
  cmps(c,0,(int32_t)c->r[0],0); // 800EF798
  if (!crb(c,2)) { goto L_800EF84C; } // 800EF79C
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800EF7A0
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800EF7A4
  if (crb(c,2)) { goto L_800EF84C; } // 800EF7A8
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800EF7AC
  cmps(c,0,(int32_t)c->r[0],128); // 800EF7B0
  if (!crb(c,2)) { goto L_800EF7D4; } // 800EF7B4
  c->r[3]=R32(c->r[31]+0x00000014u); // 800EF7B8
  cmps(c,0,(int32_t)c->r[3],0); // 800EF7BC
  if (crb(c,2)) { goto L_800EF7D4; } // 800EF7C0
  c->r[4]=0u+0x00000002u; // 800EF7C4
  c->lr=0x800EF7CCu; f_80037670(c); // 800EF7C8
  cmps(c,0,(int32_t)c->r[3],0); // 800EF7CC
  if (!crb(c,2)) { goto L_800EF84C; } // 800EF7D0
L_800EF7D4:;
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF7D4
  c->r[3]=0u+0x803A0000u; // 800EF7D8
  {uint32_t ea=c->r[2]+0xFFFFA8CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF7DC
  c->r[3]=c->r[3]+0xFFFFED60u; // 800EF7E0
  c->r[6]=R32(c->r[30]+0x00000394u); // 800EF7E4
  c->r[4]=c->r[3]+0x00000004u; // 800EF7E8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 800EF7EC
  c->r[5]=c->r[1]+0x00000020u; // 800EF7F0
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800EF7F4
  c->r[6]=0u+0x00000001u; // 800EF7F8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800EF7FC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 800EF800
  c->lr=0x800EF808u; f_80257018(c); // 800EF804
  c->r[4]=0u+0x803A0000u; // 800EF808
  c->r[3]=c->r[1]+0x00000020u; // 800EF80C
  c->r[4]=c->r[4]+0xFFFFECA0u; // 800EF810
  c->r[5]=c->r[1]+0x00000008u; // 800EF814
  c->lr=0x800EF81Cu; f_80296750(c); // 800EF818
  c->r[31]=0u+0x80550000u; // 800EF81C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF820
  c->r[31]=c->r[31]+0x00003D60u; // 800EF824
  c->r[5]=c->r[30]|c->r[30]; // 800EF828
  c->r[3]=c->r[31]+0x00000010u; // 800EF82C
  c->r[6]=c->r[1]+0x00000008u; // 800EF830
  c->r[7]=c->r[1]+0x00000050u; // 800EF834
  c->r[4]=0u+0x000001FFu; // 800EF838
  c->lr=0x800EF840u; f_80226910(c); // 800EF83C
  c->r[3]=c->r[31]+0x00000010u; // 800EF840
  c->r[4]=c->r[1]+0x00000050u; // 800EF844
  c->lr=0x800EF84Cu; f_80226D68(c); // 800EF848
L_800EF84C:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800EF84C
  c->r[31]=R32(c->r[1]+0x000000BCu); // 800EF850
  c->r[30]=R32(c->r[1]+0x000000B8u); // 800EF854
  c->lr=c->r[0]; // 800EF858
  c->r[1]=c->r[1]+0x000000C0u; // 800EF85C
  return; // 800EF860
}

// fn_800EF864
void f_800EF864(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF864
  c->r[0]=c->lr; // 800EF868
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF86C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF870
  c->r[31]=c->r[3]|c->r[3]; // 800EF874
  c->r[3]=c->r[3]+0x00000210u; // 800EF878
  c->lr=0x800EF880u; f_8004BAD4(c); // 800EF87C
  cmps(c,0,(int32_t)c->r[3],0); // 800EF880
  if (crb(c,2)) { goto L_800EF8F4; } // 800EF884
  c->r[0]=R32(c->r[31]+0x00000210u); // 800EF888
  c->r[4]=c->r[31]|c->r[31]; // 800EF88C
  c->r[3]=c->r[31]+0x00000210u; // 800EF890
  c->r[0]=c->r[0]|0xAA000000u; // 800EF894
  W32(c->r[31]+0x00000210u,c->r[0]); // 800EF898
  c->lr=0x800EF8A0u; f_80043E44(c); // 800EF89C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF8A0
  c->r[3]=c->r[31]+0x00000210u; // 800EF8A4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EF8A8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EF8AC
  c->lr=0x800EF8B4u; f_80043E34(c); // 800EF8B0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EF8B4
  c->r[4]=0u+0x803A0000u; // 800EF8B8
  c->r[4]=c->r[4]+0xFFFFED60u; // 800EF8BC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EF8C0
  c->r[4]=c->r[4]+0x00000004u; // 800EF8C4
  c->lr=0x800EF8CCu; f_80256EC4(c); // 800EF8C8
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EF8CC
  c->r[5]=c->r[3]|c->r[3]; // 800EF8D0
  c->r[3]=c->r[31]+0x00000210u; // 800EF8D4
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800EF8D8
  c->lr=0x800EF8E0u; f_8004BAC8(c); // 800EF8DC
  {uint32_t ea=c->r[2]+0xFFFFA8D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF8E0
  c->r[3]=c->r[31]+0x00000210u; // 800EF8E4
  c->f[2]=c->f[1]; // 800EF8E8
  c->f[3]=c->f[1]; // 800EF8EC
  c->lr=0x800EF8F4u; f_80043E24(c); // 800EF8F0
L_800EF8F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF8F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF8F8
  c->lr=c->r[0]; // 800EF8FC
  c->r[1]=c->r[1]+0x00000010u; // 800EF900
  return; // 800EF904
}

// fn_800EF908
void f_800EF908(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF908
  c->r[0]=c->lr; // 800EF90C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF910
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF914
  c->r[31]=c->r[3]|c->r[3]; // 800EF918
  c->r[3]=c->r[3]+0x00000210u; // 800EF91C
  c->lr=0x800EF924u; f_80221698(c); // 800EF920
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EF924
  cmps(c,0,(int32_t)c->r[3],0); // 800EF928
  if (crb(c,2)) { goto L_800EF94C; } // 800EF92C
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800EF930
  cmps(c,0,(int32_t)c->r[0],0); // 800EF934
  if (crb(c,2)) { goto L_800EF94C; } // 800EF938
  c->r[0]=R32(c->r[31]+0x00000210u); // 800EF93C
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800EF940
  W32(c->r[31]+0x00000210u,c->r[0]); // 800EF944
  goto L_800EF958; // 800EF948
L_800EF94C:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800EF94C
  c->r[0]=c->r[0]|0x80000000u; // 800EF950
  W32(c->r[31]+0x00000210u,c->r[0]); // 800EF954
L_800EF958:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF958
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF95C
  c->lr=c->r[0]; // 800EF960
  c->r[1]=c->r[1]+0x00000010u; // 800EF964
  return; // 800EF968
}

// fn_800EF96C
void f_800EF96C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF96C
  c->r[0]=c->lr; // 800EF970
  cmps(c,0,(int32_t)c->r[3],0); // 800EF974
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF97C
  c->r[31]=c->r[4]|c->r[4]; // 800EF980
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EF984
  c->r[30]=c->r[3]|c->r[3]; // 800EF988
  if (crb(c,2)) { goto L_800EF9A8; } // 800EF98C
  c->r[4]=0u+0x00000000u; // 800EF990
  c->lr=0x800EF998u; f_8026A06C(c); // 800EF994
  cmps(c,0,(int32_t)c->r[31],0); // 800EF998
  if (!crb(c,1)) { goto L_800EF9A8; } // 800EF99C
  c->r[3]=c->r[30]|c->r[30]; // 800EF9A0
  c->lr=0x800EF9A8u; f_8026A268(c); // 800EF9A4
L_800EF9A8:;
  c->r[3]=c->r[30]|c->r[30]; // 800EF9A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF9AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EF9B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF9B4
  c->lr=c->r[0]; // 800EF9B8
  c->r[1]=c->r[1]+0x00000010u; // 800EF9BC
  return; // 800EF9C0
}

// fn_800EF9C4
void f_800EF9C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF9C4
  c->r[0]=c->lr; // 800EF9C8
  c->r[4]=0u+0x00000000u; // 800EF9CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF9D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF9D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EF9D8
  c->r[30]=c->r[3]|c->r[3]; // 800EF9DC
  c->lr=0x800EF9E4u; f_801F57D0(c); // 800EF9E0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EF9E4
  c->r[3]=c->r[30]|c->r[30]; // 800EF9E8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800EF9EC
  c->ctr=c->r[12]; // 800EF9F0
  if (true) { c->lr=0x800EF9F8u; dispatch(c,c->ctr); } // 800EF9F4
  c->r[3]=c->r[30]|c->r[30]; // 800EF9F8
  c->lr=0x800EFA00u; f_801F4B94(c); // 800EF9FC
  c->r[3]=0u+0x00000003u; // 800EFA00
  c->r[0]=0u+0x0000005Du; // 800EFA04
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800EFA08
  c->r[3]=c->r[30]|c->r[30]; // 800EFA0C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EFA10
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800EFA14
  c->lr=0x800EFA1Cu; f_801F58BC(c); // 800EFA18
  c->r[5]=R32(c->r[30]+0x00000394u); // 800EFA1C
  c->r[31]=0u+0x00000001u; // 800EFA20
  c->r[3]=0u+0x805D0000u; // 800EFA24
  c->r[4]=c->r[30]+0x0000002Cu; // 800EFA28
  W8(c->r[5]+0x0000001Cu,c->r[31]); // 800EFA2C
  c->r[3]=c->r[3]+0x000078B0u; // 800EFA30
  c->lr=0x800EFA38u; f_802351CC(c); // 800EFA34
  c->r[5]=R32(c->r[30]+0x00000394u); // 800EFA38
  c->r[4]=0u+0x803A0000u; // 800EFA3C
  c->r[4]=c->r[4]+0xFFFFED70u; // 800EFA40
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800EFA44
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EFA48
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EFA4C
  c->lr=0x800EFA54u; f_80256EC4(c); // 800EFA50
  c->r[5]=R32(c->r[30]+0x00000394u); // 800EFA54
  c->r[4]=0u+0x00000000u; // 800EFA58
  {uint32_t ea=c->r[2]+0xFFFFA8E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EFA5C
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800EFA60
  c->f[2]=c->f[1]; // 800EFA64
  c->r[5]=R32(c->r[30]+0x00000394u); // 800EFA68
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800EFA6C
  c->r[5]=R32(c->r[5]+0x00000034u); // 800EFA70
  c->lr=0x800EFA78u; f_8024FEAC(c); // 800EFA74
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EFA78
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EFA7C
  c->lr=0x800EFA84u; f_802501B0(c); // 800EFA80
  {uint32_t ea=c->r[2]+0xFFFFA8E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EFA84
  c->r[3]=c->r[30]+0x0000000Cu; // 800EFA88
  c->lr=0x800EFA90u; f_80037668(c); // 800EFA8C
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800EFA90
  c->r[3]=c->r[30]|c->r[30]; // 800EFA94
  c->lr=0x800EFA9Cu; f_801F56F4(c); // 800EFA98
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EFA9C
  c->r[3]=c->r[30]|c->r[30]; // 800EFAA0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EFAA4
  c->ctr=c->r[12]; // 800EFAA8
  if (true) { c->lr=0x800EFAB0u; dispatch(c,c->ctr); } // 800EFAAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFAB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EFAB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EFAB8
  c->lr=c->r[0]; // 800EFABC
  c->r[1]=c->r[1]+0x00000010u; // 800EFAC0
  return; // 800EFAC4
}

// fn_800EFAC8
void f_800EFAC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFAC8
  c->r[0]=c->lr; // 800EFACC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFAD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EFAD4
  c->r[31]=c->r[3]|c->r[3]; // 800EFAD8
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800EFADC
  c->r[12]=R32(c->r[12]+0x00000068u); // 800EFAE0
  c->ctr=c->r[12]; // 800EFAE4
  if (true) { c->lr=0x800EFAECu; dispatch(c,c->ctr); } // 800EFAE8
  c->r[3]=c->r[31]|c->r[31]; // 800EFAEC
  c->lr=0x800EFAF4u; f_801F4C0C(c); // 800EFAF0
  c->r[3]=c->r[31]|c->r[31]; // 800EFAF4
  c->lr=0x800EFAFCu; f_800EFBAC(c); // 800EFAF8
  c->r[3]=c->r[31]|c->r[31]; // 800EFAFC
  c->lr=0x800EFB04u; f_801F56F4(c); // 800EFB00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFB04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EFB08
  c->lr=c->r[0]; // 800EFB0C
  c->r[1]=c->r[1]+0x00000010u; // 800EFB10
  return; // 800EFB14
}

// fn_800EFB18
void f_800EFB18(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800EFB18
}

// fn_800EFB1C
void f_800EFB1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFB1C
  c->r[0]=c->lr; // 800EFB20
  c->r[4]=c->r[3]|c->r[3]; // 800EFB24
  c->r[3]=0u+0x0000030Au; // 800EFB28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFB2C
  c->r[5]=0u+0x00000000u; // 800EFB30
  c->r[4]=R32(c->r[4]+0x00000394u); // 800EFB34
  c->r[4]=c->r[4]+0x0000010Cu; // 800EFB38
  c->lr=0x800EFB40u; f_8024EE50(c); // 800EFB3C
  c->r[0]=cntlz(c->r[3]); // 800EFB40
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800EFB44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFB48
  c->lr=c->r[0]; // 800EFB4C
  c->r[1]=c->r[1]+0x00000010u; // 800EFB50
  return; // 800EFB54
}

// fn_800EFB58
void f_800EFB58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFB58
  c->r[0]=c->lr; // 800EFB5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFB60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EFB64
  c->r[31]=c->r[3]|c->r[3]; // 800EFB68
  c->lr=0x800EFB70u; f_801F4F28(c); // 800EFB6C
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800EFB70
  cmps(c,0,(int32_t)c->r[0],101); // 800EFB74
  if (crb(c,2)) { goto L_800EFB94; } // 800EFB78
  if (!crb(c,0)) { goto L_800EFB98; } // 800EFB7C
  cmps(c,0,(int32_t)c->r[0],100); // 800EFB80
  if (!crb(c,0)) { goto L_800EFB8C; } // 800EFB84
  goto L_800EFB98; // 800EFB88
L_800EFB8C:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800EFB8C
  goto L_800EFB98; // 800EFB90
L_800EFB94:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800EFB94
L_800EFB98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFB98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EFB9C
  c->lr=c->r[0]; // 800EFBA0
  c->r[1]=c->r[1]+0x00000010u; // 800EFBA4
  return; // 800EFBA8
}

// fn_800EFBAC
void f_800EFBAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFBAC
  c->r[0]=c->lr; // 800EFBB0
  c->r[5]=0u+0x80620000u; // 800EFBB4
  c->r[4]=0u+0x00000002u; // 800EFBB8
  W32(c->r[1]+0x00000094u,c->r[0]); // 800EFBBC
  c->r[5]=c->r[5]+0x00007688u; // 800EFBC0
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800EFBC4
  W32(c->r[1]+0x00000088u,c->r[30]); // 800EFBC8
  c->r[30]=c->r[3]|c->r[3]; // 800EFBCC
  c->r[3]=R32(c->r[5]+0x00000014u); // 800EFBD0
  c->lr=0x800EFBD8u; f_80037670(c); // 800EFBD4
  cmps(c,0,(int32_t)c->r[3],0); // 800EFBD8
  if (!crb(c,2)) { goto L_800EFC40; } // 800EFBDC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EFBE0
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800EFBE4
  cmps(c,0,(int32_t)c->r[0],0); // 800EFBE8
  if (!crb(c,2)) { goto L_800EFC40; } // 800EFBEC
  {uint32_t ea=c->r[2]+0xFFFFA8E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EFBF0
  c->r[3]=c->r[1]+0x00000014u; // 800EFBF4
  {uint32_t ea=c->r[2]+0xFFFFA8E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EFBF8
  c->r[4]=c->r[30]+0x0000002Cu; // 800EFBFC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800EFC00
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800EFC04
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800EFC08
  c->lr=0x800EFC10u; f_800361A0(c); // 800EFC0C
  c->r[31]=0u+0x80550000u; // 800EFC10
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EFC14
  c->r[31]=c->r[31]+0x00003D60u; // 800EFC18
  c->r[5]=c->r[30]|c->r[30]; // 800EFC1C
  c->r[3]=c->r[31]+0x00000010u; // 800EFC20
  c->r[6]=c->r[1]+0x00000014u; // 800EFC24
  c->r[7]=c->r[1]+0x00000020u; // 800EFC28
  c->r[4]=0u+0x000001FFu; // 800EFC2C
  c->lr=0x800EFC34u; f_80226910(c); // 800EFC30
  c->r[3]=c->r[31]+0x00000010u; // 800EFC34
  c->r[4]=c->r[1]+0x00000020u; // 800EFC38
  c->lr=0x800EFC40u; f_80226D68(c); // 800EFC3C
L_800EFC40:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800EFC40
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800EFC44
  c->r[30]=R32(c->r[1]+0x00000088u); // 800EFC48
  c->lr=c->r[0]; // 800EFC4C
  c->r[1]=c->r[1]+0x00000090u; // 800EFC50
  return; // 800EFC54
}

// fn_800EFC58
void f_800EFC58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFC58
  c->r[0]=c->lr; // 800EFC5C
  cmps(c,0,(int32_t)c->r[3],0); // 800EFC60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFC64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EFC68
  c->r[31]=c->r[4]|c->r[4]; // 800EFC6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EFC70
  c->r[30]=c->r[3]|c->r[3]; // 800EFC74
  if (crb(c,2)) { goto L_800EFC94; } // 800EFC78
  c->r[4]=0u+0x00000000u; // 800EFC7C
  c->lr=0x800EFC84u; f_8026A06C(c); // 800EFC80
  cmps(c,0,(int32_t)c->r[31],0); // 800EFC84
  if (!crb(c,1)) { goto L_800EFC94; } // 800EFC88
  c->r[3]=c->r[30]|c->r[30]; // 800EFC8C
  c->lr=0x800EFC94u; f_8026A268(c); // 800EFC90
L_800EFC94:;
  c->r[3]=c->r[30]|c->r[30]; // 800EFC94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EFC98
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EFC9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFCA0
  c->lr=c->r[0]; // 800EFCA4
  c->r[1]=c->r[1]+0x00000010u; // 800EFCA8
  return; // 800EFCAC
}

// fn_800EFCB0
void f_800EFCB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFCB0
  c->r[0]=c->lr; // 800EFCB4
  c->r[4]=0u+0x00000000u; // 800EFCB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFCBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EFCC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EFCC4
  c->r[30]=c->r[3]|c->r[3]; // 800EFCC8
  c->lr=0x800EFCD0u; f_801F57D0(c); // 800EFCCC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EFCD0
  c->r[3]=c->r[30]|c->r[30]; // 800EFCD4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800EFCD8
  c->ctr=c->r[12]; // 800EFCDC
  if (true) { c->lr=0x800EFCE4u; dispatch(c,c->ctr); } // 800EFCE0
  c->r[3]=c->r[30]|c->r[30]; // 800EFCE4
  c->lr=0x800EFCECu; f_801F4B94(c); // 800EFCE8
  c->r[3]=0u+0x00000003u; // 800EFCEC
  c->r[0]=0u+0x0000005Eu; // 800EFCF0
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800EFCF4
  c->r[3]=c->r[30]|c->r[30]; // 800EFCF8
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EFCFC
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800EFD00
  c->lr=0x800EFD08u; f_801F58BC(c); // 800EFD04
  c->r[5]=R32(c->r[30]+0x00000394u); // 800EFD08
  c->r[31]=0u+0x00000001u; // 800EFD0C
  c->r[3]=0u+0x805D0000u; // 800EFD10
  c->r[4]=c->r[30]+0x0000002Cu; // 800EFD14
  W8(c->r[5]+0x0000001Cu,c->r[31]); // 800EFD18
  c->r[3]=c->r[3]+0x000078B0u; // 800EFD1C
  c->lr=0x800EFD24u; f_802351CC(c); // 800EFD20
  c->r[5]=R32(c->r[30]+0x00000394u); // 800EFD24
  c->r[4]=0u+0x803A0000u; // 800EFD28
  c->r[4]=c->r[4]+0xFFFFED98u; // 800EFD2C
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800EFD30
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EFD34
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EFD38
  c->lr=0x800EFD40u; f_80256EC4(c); // 800EFD3C
  c->r[5]=R32(c->r[30]+0x00000394u); // 800EFD40
  c->r[4]=0u+0x00000000u; // 800EFD44
  {uint32_t ea=c->r[2]+0xFFFFA8F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EFD48
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800EFD4C
  c->f[2]=c->f[1]; // 800EFD50
  c->r[5]=R32(c->r[30]+0x00000394u); // 800EFD54
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800EFD58
  c->r[5]=R32(c->r[5]+0x00000034u); // 800EFD5C
  c->lr=0x800EFD64u; f_8024FEAC(c); // 800EFD60
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EFD64
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EFD68
  c->lr=0x800EFD70u; f_802501B0(c); // 800EFD6C
  {uint32_t ea=c->r[2]+0xFFFFA8F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EFD70
  c->r[3]=c->r[30]+0x0000000Cu; // 800EFD74
  c->lr=0x800EFD7Cu; f_80037668(c); // 800EFD78
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800EFD7C
  c->r[3]=c->r[30]|c->r[30]; // 800EFD80
  c->lr=0x800EFD88u; f_801F56F4(c); // 800EFD84
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EFD88
  c->r[3]=c->r[30]|c->r[30]; // 800EFD8C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EFD90
  c->ctr=c->r[12]; // 800EFD94
  if (true) { c->lr=0x800EFD9Cu; dispatch(c,c->ctr); } // 800EFD98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFD9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EFDA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EFDA4
  c->lr=c->r[0]; // 800EFDA8
  c->r[1]=c->r[1]+0x00000010u; // 800EFDAC
  return; // 800EFDB0
}

// fn_800EFDB4
void f_800EFDB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFDB4
  c->r[0]=c->lr; // 800EFDB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFDBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EFDC0
  c->r[31]=c->r[3]|c->r[3]; // 800EFDC4
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800EFDC8
  c->r[12]=R32(c->r[12]+0x00000068u); // 800EFDCC
  c->ctr=c->r[12]; // 800EFDD0
  if (true) { c->lr=0x800EFDD8u; dispatch(c,c->ctr); } // 800EFDD4
  c->r[3]=c->r[31]|c->r[31]; // 800EFDD8
  c->lr=0x800EFDE0u; f_801F4C0C(c); // 800EFDDC
  c->r[3]=c->r[31]|c->r[31]; // 800EFDE0
  c->lr=0x800EFDE8u; f_800EFE48(c); // 800EFDE4
  c->r[3]=c->r[31]|c->r[31]; // 800EFDE8
  c->lr=0x800EFDF0u; f_801F56F4(c); // 800EFDEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFDF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EFDF4
  c->lr=c->r[0]; // 800EFDF8
  c->r[1]=c->r[1]+0x00000010u; // 800EFDFC
  return; // 800EFE00
}

// fn_800EFE04
void f_800EFE04(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800EFE04
}

// fn_800EFE08
void f_800EFE08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFE08
  c->r[0]=c->lr; // 800EFE0C
  c->r[4]=c->r[3]|c->r[3]; // 800EFE10
  c->r[3]=0u+0x000001DFu; // 800EFE14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFE18
  c->r[5]=0u+0x00000000u; // 800EFE1C
  c->r[4]=R32(c->r[4]+0x00000394u); // 800EFE20
  c->r[4]=c->r[4]+0x0000010Cu; // 800EFE24
  c->lr=0x800EFE2Cu; f_8024EE50(c); // 800EFE28
  c->r[0]=cntlz(c->r[3]); // 800EFE2C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800EFE30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFE34
  c->lr=c->r[0]; // 800EFE38
  c->r[1]=c->r[1]+0x00000010u; // 800EFE3C
  return; // 800EFE40
}

// fn_800EFE44
void f_800EFE44(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800EFE44
}

// fn_800EFE48
void f_800EFE48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFE48
  c->r[0]=c->lr; // 800EFE4C
  c->r[5]=0u+0x80620000u; // 800EFE50
  c->r[4]=0u+0x00000002u; // 800EFE54
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800EFE58
  c->r[5]=c->r[5]+0x00007688u; // 800EFE5C
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800EFE60
  W32(c->r[1]+0x000000C8u,c->r[30]); // 800EFE64
  c->r[30]=c->r[3]|c->r[3]; // 800EFE68
  c->r[3]=R32(c->r[5]+0x00000014u); // 800EFE6C
  c->lr=0x800EFE74u; f_80037670(c); // 800EFE70
  cmps(c,0,(int32_t)c->r[3],0); // 800EFE74
  if (!crb(c,2)) { goto L_800EFF68; } // 800EFE78
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EFE7C
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800EFE80
  cmps(c,0,(int32_t)c->r[0],0); // 800EFE84
  if (!crb(c,2)) { goto L_800EFF68; } // 800EFE88
  c->r[0]=R8(c->r[30]+0x0000006Fu); // 800EFE8C
  cmps(c,0,(int32_t)c->r[0],0); // 800EFE90
  if (crb(c,2)) { goto L_800EFF68; } // 800EFE94
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800EFE98
  cmps(c,0,(int32_t)c->r[0],0); // 800EFE9C
  if (!crb(c,2)) { goto L_800EFEA8; } // 800EFEA0
  goto L_800EFF68; // 800EFEA4
L_800EFEA8:;
  c->r[7]=0u+0x803A0000u; // 800EFEA8
  {uint32_t ea=c->r[7]+0xFFFFED80u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EFEAC
  c->r[3]=c->r[1]+0x00000020u; // 800EFEB0
  c->r[4]=c->r[1]+0x00000014u; // 800EFEB4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EFEB8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EFEBC
  W32(c->r[1]+0x00000014u,c->r[6]); // 800EFEC0
  W32(c->r[1]+0x00000018u,c->r[5]); // 800EFEC4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EFEC8
  c->lr=0x800EFED0u; f_800361A0(c); // 800EFECC
  c->r[7]=0u+0x803A0000u; // 800EFED0
  {uint32_t ea=c->r[7]+0xFFFFED8Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800EFED4
  c->r[3]=c->r[1]+0x0000002Cu; // 800EFED8
  c->r[4]=c->r[1]+0x00000008u; // 800EFEDC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EFEE0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EFEE4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EFEE8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EFEEC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EFEF0
  c->lr=0x800EFEF8u; f_800361A0(c); // 800EFEF4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EFEF8
  c->r[4]=0u+0x803A0000u; // 800EFEFC
  c->r[4]=c->r[4]+0xFFFFED98u; // 800EFF00
  c->r[5]=c->r[1]+0x00000038u; // 800EFF04
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EFF08
  c->r[4]=c->r[4]+0x00000009u; // 800EFF0C
  c->r[6]=0u+0x00000001u; // 800EFF10
  c->lr=0x800EFF18u; f_80257018(c); // 800EFF14
  c->r[4]=c->r[1]+0x0000002Cu; // 800EFF18
  c->r[3]=c->r[1]+0x00000038u; // 800EFF1C
  c->r[5]=c->r[4]|c->r[4]; // 800EFF20
  c->lr=0x800EFF28u; f_80296750(c); // 800EFF24
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EFF28
  c->r[31]=0u+0x80550000u; // 800EFF2C
  {uint32_t ea=c->r[2]+0xFFFFA8FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EFF30
  c->r[31]=c->r[31]+0x00003D60u; // 800EFF34
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EFF38
  c->r[5]=c->r[30]|c->r[30]; // 800EFF3C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800EFF40
  c->r[3]=c->r[31]+0x00000010u; // 800EFF44
  c->r[6]=c->r[1]+0x0000002Cu; // 800EFF48
  c->r[7]=c->r[1]+0x00000068u; // 800EFF4C
  c->r[4]=0u+0x000001FFu; // 800EFF50
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800EFF54
  c->lr=0x800EFF5Cu; f_80226910(c); // 800EFF58
  c->r[3]=c->r[31]+0x00000010u; // 800EFF5C
  c->r[4]=c->r[1]+0x00000068u; // 800EFF60
  c->lr=0x800EFF68u; f_80226D68(c); // 800EFF64
L_800EFF68:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800EFF68
  c->r[31]=R32(c->r[1]+0x000000CCu); // 800EFF6C
  c->r[30]=R32(c->r[1]+0x000000C8u); // 800EFF70
  c->lr=c->r[0]; // 800EFF74
  c->r[1]=c->r[1]+0x000000D0u; // 800EFF78
  return; // 800EFF7C
}

// fn_800EFF80
void f_800EFF80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFF80
  c->r[0]=c->lr; // 800EFF84
  cmps(c,0,(int32_t)c->r[3],0); // 800EFF88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFF8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EFF90
  c->r[31]=c->r[4]|c->r[4]; // 800EFF94
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EFF98
  c->r[30]=c->r[3]|c->r[3]; // 800EFF9C
  if (crb(c,2)) { goto L_800EFFBC; } // 800EFFA0
  c->r[4]=0u+0x00000000u; // 800EFFA4
  c->lr=0x800EFFACu; f_8026A06C(c); // 800EFFA8
  cmps(c,0,(int32_t)c->r[31],0); // 800EFFAC
  if (!crb(c,1)) { goto L_800EFFBC; } // 800EFFB0
  c->r[3]=c->r[30]|c->r[30]; // 800EFFB4
  c->lr=0x800EFFBCu; f_8026A268(c); // 800EFFB8
L_800EFFBC:;
  c->r[3]=c->r[30]|c->r[30]; // 800EFFBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EFFC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EFFC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFFC8
  c->lr=c->r[0]; // 800EFFCC
  c->r[1]=c->r[1]+0x00000010u; // 800EFFD0
  return; // 800EFFD4
}

// fn_800EFFD8
void f_800EFFD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFFD8
  c->r[0]=c->lr; // 800EFFDC
  c->r[4]=0u+0x00000000u; // 800EFFE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFFE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EFFE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EFFEC
  c->r[30]=c->r[3]|c->r[3]; // 800EFFF0
  c->lr=0x800EFFF8u; f_801F57D0(c); // 800EFFF4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EFFF8
  c->r[3]=c->r[30]|c->r[30]; // 800EFFFC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800F0000
  c->ctr=c->r[12]; // 800F0004
  if (true) { c->lr=0x800F000Cu; dispatch(c,c->ctr); } // 800F0008
  c->r[3]=c->r[30]|c->r[30]; // 800F000C
  c->lr=0x800F0014u; f_801F4B94(c); // 800F0010
  c->r[3]=0u+0x00000003u; // 800F0014
  c->r[0]=0u+0x0000005Fu; // 800F0018
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800F001C
  c->r[3]=c->r[30]|c->r[30]; // 800F0020
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F0024
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800F0028
  c->lr=0x800F0030u; f_801F58BC(c); // 800F002C
  c->r[5]=R32(c->r[30]+0x00000394u); // 800F0030
  c->r[31]=0u+0x00000001u; // 800F0034
  c->r[3]=0u+0x805D0000u; // 800F0038
  c->r[4]=c->r[30]+0x0000002Cu; // 800F003C
  W8(c->r[5]+0x0000001Cu,c->r[31]); // 800F0040
  c->r[3]=c->r[3]+0x000078B0u; // 800F0044
  c->lr=0x800F004Cu; f_802351CC(c); // 800F0048
  c->r[5]=R32(c->r[30]+0x00000394u); // 800F004C
  c->r[4]=0u+0x803A0000u; // 800F0050
  c->r[4]=c->r[4]+0xFFFFEDB0u; // 800F0054
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800F0058
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F005C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F0060
  c->lr=0x800F0068u; f_80256EC4(c); // 800F0064
  c->r[5]=R32(c->r[30]+0x00000394u); // 800F0068
  c->r[4]=0u+0x00000000u; // 800F006C
  {uint32_t ea=c->r[2]+0xFFFFA908u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0070
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800F0074
  c->f[2]=c->f[1]; // 800F0078
  c->r[5]=R32(c->r[30]+0x00000394u); // 800F007C
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800F0080
  c->r[5]=R32(c->r[5]+0x00000034u); // 800F0084
  c->lr=0x800F008Cu; f_8024FEAC(c); // 800F0088
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F008C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F0090
  c->lr=0x800F0098u; f_802501B0(c); // 800F0094
  {uint32_t ea=c->r[2]+0xFFFFA908u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0098
  c->r[3]=c->r[30]+0x0000000Cu; // 800F009C
  c->lr=0x800F00A4u; f_80037668(c); // 800F00A0
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800F00A4
  c->r[3]=c->r[30]|c->r[30]; // 800F00A8
  c->lr=0x800F00B0u; f_801F56F4(c); // 800F00AC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F00B0
  c->r[3]=c->r[30]|c->r[30]; // 800F00B4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F00B8
  c->ctr=c->r[12]; // 800F00BC
  if (true) { c->lr=0x800F00C4u; dispatch(c,c->ctr); } // 800F00C0
  {uint32_t ea=c->r[2]+0xFFFFA908u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F00C4
  c->r[3]=c->r[30]|c->r[30]; // 800F00C8
  c->r[4]=0u+0x00000064u; // 800F00CC
  c->r[5]=0u+0x00000000u; // 800F00D0
  c->r[6]=0u+0x00000000u; // 800F00D4
  c->r[7]=0u+0x00000000u; // 800F00D8
  c->lr=0x800F00E0u; f_801F4D44(c); // 800F00DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F00E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F00E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F00E8
  c->lr=c->r[0]; // 800F00EC
  c->r[1]=c->r[1]+0x00000010u; // 800F00F0
  return; // 800F00F4
}

// fn_800F00F8
void f_800F00F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F00F8
  c->r[0]=c->lr; // 800F00FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0100
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0104
  c->r[31]=c->r[3]|c->r[3]; // 800F0108
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800F010C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800F0110
  c->ctr=c->r[12]; // 800F0114
  if (true) { c->lr=0x800F011Cu; dispatch(c,c->ctr); } // 800F0118
  c->r[3]=c->r[31]|c->r[31]; // 800F011C
  c->lr=0x800F0124u; f_801F4C0C(c); // 800F0120
  c->r[3]=c->r[31]|c->r[31]; // 800F0124
  c->lr=0x800F012Cu; f_800F02B0(c); // 800F0128
  c->r[3]=c->r[31]|c->r[31]; // 800F012C
  c->lr=0x800F0134u; f_801F56F4(c); // 800F0130
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0134
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0138
  c->lr=c->r[0]; // 800F013C
  c->r[1]=c->r[1]+0x00000010u; // 800F0140
  return; // 800F0144
}

// fn_800F0148
void f_800F0148(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800F0148
}

// fn_800F014C
void f_800F014C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F014C
  c->r[0]=c->lr; // 800F0150
  c->r[4]=c->r[3]|c->r[3]; // 800F0154
  c->r[3]=0u+0x00000310u; // 800F0158
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F015C
  c->r[5]=0u+0x00000000u; // 800F0160
  c->r[4]=R32(c->r[4]+0x00000394u); // 800F0164
  c->r[4]=c->r[4]+0x0000010Cu; // 800F0168
  c->lr=0x800F0170u; f_8024EE50(c); // 800F016C
  c->r[0]=cntlz(c->r[3]); // 800F0170
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F0174
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0178
  c->lr=c->r[0]; // 800F017C
  c->r[1]=c->r[1]+0x00000010u; // 800F0180
  return; // 800F0184
}

// fn_800F0188
void f_800F0188(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0188
  c->r[0]=c->lr; // 800F018C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0190
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0194
  c->r[31]=c->r[3]|c->r[3]; // 800F0198
  c->lr=0x800F01A0u; f_8024E040(c); // 800F019C
  {uint32_t ea=c->r[2]+0xFFFFA90Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F01A0
  c->r[4]=c->r[31]+0x00000060u; // 800F01A4
  {uint32_t ea=c->r[31]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F01A8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F01AC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800F01B0
  c->r[3]=c->r[3]+0x00000068u; // 800F01B4
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800F01B8
  c->lr=0x800F01C0u; f_800361A0(c); // 800F01BC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F01C0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F01C4
  c->lr=0x800F01CCu; f_802501B0(c); // 800F01C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F01CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F01D0
  c->lr=c->r[0]; // 800F01D4
  c->r[1]=c->r[1]+0x00000010u; // 800F01D8
  return; // 800F01DC
}

// fn_800F01E0
void f_800F01E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F01E0
  c->r[0]=c->lr; // 800F01E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F01E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F01EC
  c->r[31]=c->r[3]|c->r[3]; // 800F01F0
  c->lr=0x800F01F8u; f_801F4F28(c); // 800F01F4
  c->r[3]=R32(c->r[31]+0x000003C0u); // 800F01F8
  cmps(c,0,(int32_t)c->r[3],100); // 800F01FC
  if (crb(c,2)) { goto L_800F0208; } // 800F0200
  goto L_800F0240; // 800F0204
L_800F0208:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800F0208
  cmps(c,0,(int32_t)c->r[0],100); // 800F020C
  if (crb(c,2)) { goto L_800F0240; } // 800F0210
  W16(c->r[31]+0x000003BCu,c->r[3]); // 800F0214
  c->r[7]=0u+0x803D0000u; // 800F0218
  c->r[3]=c->r[31]|c->r[31]; // 800F021C
  c->r[4]=c->r[1]+0x00000008u; // 800F0220
  {uint32_t ea=c->r[7]+0x00004988u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F0224
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F0228
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F022C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F0230
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F0234
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F0238
  c->lr=0x800F0240u; f_800F0254(c); // 800F023C
L_800F0240:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0240
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F0244
  c->lr=c->r[0]; // 800F0248
  c->r[1]=c->r[1]+0x00000020u; // 800F024C
  return; // 800F0250
}

// fn_800F0254
void f_800F0254(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0254
  c->r[0]=c->lr; // 800F0258
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F025C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0260
  c->r[31]=c->r[4]|c->r[4]; // 800F0264
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F0268
  c->r[30]=c->r[3]|c->r[3]; // 800F026C
  c->r[3]=c->r[31]|c->r[31]; // 800F0270
  c->lr=0x800F0278u; f_802B9FDC(c); // 800F0274
  cmps(c,0,(int32_t)c->r[3],0); // 800F0278
  if (crb(c,2)) { goto L_800F0298; } // 800F027C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F0280
  c->r[0]=R32(c->r[31]+0x00000004u); // 800F0284
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800F0288
  W32(c->r[30]+0x00000020u,c->r[0]); // 800F028C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800F0290
  W32(c->r[30]+0x00000024u,c->r[0]); // 800F0294
L_800F0298:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0298
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F029C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F02A0
  c->lr=c->r[0]; // 800F02A4
  c->r[1]=c->r[1]+0x00000010u; // 800F02A8
  return; // 800F02AC
}

// fn_800F02B0
void f_800F02B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F02B0
  c->r[0]=c->lr; // 800F02B4
  c->r[5]=0u+0x80620000u; // 800F02B8
  c->r[4]=0u+0x00000002u; // 800F02BC
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F02C0
  c->r[5]=c->r[5]+0x00007688u; // 800F02C4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800F02C8
  W32(c->r[1]+0x00000088u,c->r[30]); // 800F02CC
  c->r[30]=c->r[3]|c->r[3]; // 800F02D0
  c->r[3]=R32(c->r[5]+0x00000014u); // 800F02D4
  c->lr=0x800F02DCu; f_80037670(c); // 800F02D8
  cmps(c,0,(int32_t)c->r[3],0); // 800F02DC
  if (!crb(c,2)) { goto L_800F0344; } // 800F02E0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F02E4
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800F02E8
  cmps(c,0,(int32_t)c->r[0],0); // 800F02EC
  if (!crb(c,2)) { goto L_800F0344; } // 800F02F0
  {uint32_t ea=c->r[2]+0xFFFFA910u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F02F4
  c->r[3]=c->r[1]+0x00000014u; // 800F02F8
  {uint32_t ea=c->r[2]+0xFFFFA914u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F02FC
  c->r[4]=c->r[30]+0x0000002Cu; // 800F0300
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800F0304
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800F0308
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800F030C
  c->lr=0x800F0314u; f_800361A0(c); // 800F0310
  c->r[31]=0u+0x80550000u; // 800F0314
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0318
  c->r[31]=c->r[31]+0x00003D60u; // 800F031C
  c->r[5]=c->r[30]|c->r[30]; // 800F0320
  c->r[3]=c->r[31]+0x00000010u; // 800F0324
  c->r[6]=c->r[1]+0x00000014u; // 800F0328
  c->r[7]=c->r[1]+0x00000020u; // 800F032C
  c->r[4]=0u+0x000001FFu; // 800F0330
  c->lr=0x800F0338u; f_80226910(c); // 800F0334
  c->r[3]=c->r[31]+0x00000010u; // 800F0338
  c->r[4]=c->r[1]+0x00000020u; // 800F033C
  c->lr=0x800F0344u; f_80226D68(c); // 800F0340
L_800F0344:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F0344
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800F0348
  c->r[30]=R32(c->r[1]+0x00000088u); // 800F034C
  c->lr=c->r[0]; // 800F0350
  c->r[1]=c->r[1]+0x00000090u; // 800F0354
  return; // 800F0358
}

// fn_800F035C
void f_800F035C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F035C
  c->r[0]=c->lr; // 800F0360
  cmps(c,0,(int32_t)c->r[3],0); // 800F0364
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0368
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F036C
  c->r[31]=c->r[4]|c->r[4]; // 800F0370
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F0374
  c->r[30]=c->r[3]|c->r[3]; // 800F0378
  if (crb(c,2)) { goto L_800F0398; } // 800F037C
  c->r[4]=0u+0x00000000u; // 800F0380
  c->lr=0x800F0388u; f_8026A06C(c); // 800F0384
  cmps(c,0,(int32_t)c->r[31],0); // 800F0388
  if (!crb(c,1)) { goto L_800F0398; } // 800F038C
  c->r[3]=c->r[30]|c->r[30]; // 800F0390
  c->lr=0x800F0398u; f_8026A268(c); // 800F0394
L_800F0398:;
  c->r[3]=c->r[30]|c->r[30]; // 800F0398
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F039C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F03A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F03A4
  c->lr=c->r[0]; // 800F03A8
  c->r[1]=c->r[1]+0x00000010u; // 800F03AC
  return; // 800F03B0
}

// fn_800F03B4
void f_800F03B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F03B4
  c->r[0]=c->lr; // 800F03B8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800F03BC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800F03C0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800F03C4
  c->r[4]=0u+0x00000000u; // 800F03C8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F03CC
  c->r[31]=c->r[3]|c->r[3]; // 800F03D0
  W32(c->r[1]+0x00000048u,c->r[30]); // 800F03D4
  W32(c->r[1]+0x00000044u,c->r[29]); // 800F03D8
  c->lr=0x800F03E0u; f_801F57D0(c); // 800F03DC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F03E0
  c->r[3]=c->r[31]|c->r[31]; // 800F03E4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800F03E8
  c->ctr=c->r[12]; // 800F03EC
  if (true) { c->lr=0x800F03F4u; dispatch(c,c->ctr); } // 800F03F0
  c->r[3]=c->r[31]|c->r[31]; // 800F03F4
  c->lr=0x800F03FCu; f_801F4B94(c); // 800F03F8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F03FC
  c->r[4]=0u+0x00000003u; // 800F0400
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0404
  c->r[5]=0u+0x00000060u; // 800F0408
  c->r[0]=c->r[0]|0x00000804u; // 800F040C
  c->r[29]=0u+0x00000001u; // 800F0410
  c->r[3]=0u+0x80550000u; // 800F0414
  W8(c->r[31]+0x0000006Cu,c->r[4]); // 800F0418
  c->f[3]=c->f[1]; // 800F041C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800F0420
  W8(c->r[31]+0x0000006Du,c->r[5]); // 800F0424
  c->r[3]=c->r[3]+0x00003D60u; // 800F0428
  {uint32_t ea=c->r[2]+0xFFFFA924u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F042C
  c->r[4]=c->r[31]+0x0000002Cu; // 800F0430
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800F0434
  c->r[5]=c->r[31]+0x00000030u; // 800F0438
  c->r[6]=0u+0x00000000u; // 800F043C
  c->r[7]=0u+0x00000000u; // 800F0440
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F0444
  c->lr=0x800F044Cu; f_801D5488(c); // 800F0448
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F044C
  c->r[3]=c->r[31]|c->r[31]; // 800F0450
  c->lr=0x800F0458u; f_801F58BC(c); // 800F0454
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F0458
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800F045C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0460
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F0464
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800F0468
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800F046C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800F0470
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F0474
  c->lr=0x800F047Cu; f_802501B0(c); // 800F0478
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F047C
  c->r[29]=0u+0x803A0000u; // 800F0480
  c->r[4]=c->r[29]+0xFFFFEE48u; // 800F0484
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F0488
  c->lr=0x800F0490u; f_80256EC4(c); // 800F048C
  c->r[6]=R32(c->r[31]+0x00000394u); // 800F0490
  c->r[5]=0u+0x805D0000u; // 800F0494
  c->r[4]=c->r[31]+0x0000002Cu; // 800F0498
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800F049C
  c->r[3]=c->r[5]+0x000078B0u; // 800F04A0
  c->lr=0x800F04A8u; f_802351CC(c); // 800F04A4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F04A8
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800F04AC
  c->r[3]=c->r[31]|c->r[31]; // 800F04B0
  c->lr=0x800F04B8u; f_801F56F4(c); // 800F04B4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F04B8
  c->r[3]=c->r[31]|c->r[31]; // 800F04BC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F04C0
  c->ctr=c->r[12]; // 800F04C4
  if (true) { c->lr=0x800F04CCu; dispatch(c,c->ctr); } // 800F04C8
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800F04CC
  c->r[3]=0u+0x000000FFu; // 800F04D0
  W8(c->r[31]+0x00000074u,c->r[3]); // 800F04D4
  cmps(c,0,(int32_t)c->r[0],0); // 800F04D8
  if (!crb(c,2)) { goto L_800F0534; } // 800F04DC
  c->r[30]=c->r[29]+0xFFFFEE48u; // 800F04E0
  c->r[29]=0u+0x80550000u; // 800F04E4
  c->r[3]=c->r[29]+0xFFFFC848u; // 800F04E8
  c->r[5]=0u+0x00000000u; // 800F04EC
  c->r[4]=c->r[30]+0x00000009u; // 800F04F0
  c->r[6]=0u+0x00000000u; // 800F04F4
  c->lr=0x800F04FCu; f_8018D3E4(c); // 800F04F8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F04FC
  W8(c->r[31]+0x00000074u,c->r[3]); // 800F0500
  cmpu(c,0,c->r[0],0x000000FFu); // 800F0504
  if (crb(c,2)) { goto L_800F0534; } // 800F0508
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F050C
  c->r[4]=c->r[30]|c->r[30]; // 800F0510
  c->r[5]=c->r[1]+0x00000008u; // 800F0514
  c->r[6]=0u+0x00000001u; // 800F0518
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F051C
  c->lr=0x800F0524u; f_80257018(c); // 800F0520
  c->r[4]=R8(c->r[31]+0x00000074u); // 800F0524
  c->r[3]=c->r[29]+0xFFFFC848u; // 800F0528
  c->r[5]=c->r[1]+0x00000008u; // 800F052C
  c->lr=0x800F0534u; f_8018DEB8(c); // 800F0530
L_800F0534:;
  c->r[0]=0u+0x00000000u; // 800F0534
  c->r[3]=c->r[31]|c->r[31]; // 800F0538
  W8(c->r[31]+0x00000075u,c->r[0]); // 800F053C
  c->lr=0x800F0544u; f_800F0F50(c); // 800F0540
  c->r[0]=0u+0x00000001u; // 800F0544
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 800F0548
  W32(c->r[31]+0x00000444u,c->r[0]); // 800F054C
  c->lr=0x800F0554u; f_8024E174(c); // 800F0550
  W32(c->r[31]+0x00000438u,c->r[3]); // 800F0554
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800F0558
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800F055C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F0560
  c->r[30]=R32(c->r[1]+0x00000048u); // 800F0564
  c->r[29]=R32(c->r[1]+0x00000044u); // 800F0568
  c->r[0]=R32(c->r[1]+0x00000064u); // 800F056C
  c->lr=c->r[0]; // 800F0570
  c->r[1]=c->r[1]+0x00000060u; // 800F0574
  return; // 800F0578
}

// fn_800F057C
void f_800F057C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F057C
  c->r[0]=c->lr; // 800F0580
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F0584
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F0588
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F058C
  c->r[30]=c->r[3]|c->r[3]; // 800F0590
  c->lr=0x800F0598u; f_800F0C98(c); // 800F0594
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F0598
  c->r[3]=c->r[30]|c->r[30]; // 800F059C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800F05A0
  c->ctr=c->r[12]; // 800F05A4
  if (true) { c->lr=0x800F05ACu; dispatch(c,c->ctr); } // 800F05A8
  c->r[3]=c->r[30]|c->r[30]; // 800F05AC
  c->lr=0x800F05B4u; f_801F4C0C(c); // 800F05B0
  c->r[3]=c->r[30]|c->r[30]; // 800F05B4
  c->lr=0x800F05BCu; f_800F0E70(c); // 800F05B8
  c->r[3]=c->r[30]|c->r[30]; // 800F05BC
  c->lr=0x800F05C4u; f_801F56F4(c); // 800F05C0
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800F05C4
  cmps(c,0,(int32_t)c->r[0],0); // 800F05C8
  if (!crb(c,2)) { goto L_800F063C; } // 800F05CC
  c->r[0]=R8(c->r[30]+0x00000074u); // 800F05D0
  cmpu(c,0,c->r[0],0x000000FFu); // 800F05D4
  if (crb(c,2)) { goto L_800F063C; } // 800F05D8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F05DC
  c->r[4]=0u+0x803A0000u; // 800F05E0
  c->r[4]=c->r[4]+0xFFFFEE48u; // 800F05E4
  c->r[5]=c->r[1]+0x00000008u; // 800F05E8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F05EC
  c->r[6]=0u+0x00000001u; // 800F05F0
  c->lr=0x800F05F8u; f_80257018(c); // 800F05F4
  c->r[31]=0u+0x80550000u; // 800F05F8
  c->r[4]=R8(c->r[30]+0x00000074u); // 800F05FC
  c->r[3]=c->r[31]+0xFFFFC848u; // 800F0600
  c->r[5]=c->r[1]+0x00000008u; // 800F0604
  c->lr=0x800F060Cu; f_8018DEB8(c); // 800F0608
  c->r[0]=R8(c->r[30]+0x0000006Fu); // 800F060C
  cmps(c,0,(int32_t)c->r[0],0); // 800F0610
  if (!crb(c,2)) { goto L_800F062C; } // 800F0614
  c->r[4]=R8(c->r[30]+0x00000074u); // 800F0618
  c->r[3]=c->r[31]+0xFFFFC848u; // 800F061C
  c->r[5]=0u+0x00000001u; // 800F0620
  c->lr=0x800F0628u; f_8018E2D4(c); // 800F0624
  goto L_800F063C; // 800F0628
L_800F062C:;
  c->r[4]=R8(c->r[30]+0x00000074u); // 800F062C
  c->r[3]=c->r[31]+0xFFFFC848u; // 800F0630
  c->r[5]=0u+0x00000000u; // 800F0634
  c->lr=0x800F063Cu; f_8018E2D4(c); // 800F0638
L_800F063C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F063C
  c->lr=0x800F0644u; f_800F1008(c); // 800F0640
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F0644
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F0648
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F064C
  c->lr=c->r[0]; // 800F0650
  c->r[1]=c->r[1]+0x00000040u; // 800F0654
  return; // 800F0658
}

// fn_800F065C
void f_800F065C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F065C
  c->r[0]=c->lr; // 800F0660
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0664
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0668
  c->r[31]=c->r[3]|c->r[3]; // 800F066C
  c->r[4]=R8(c->r[3]+0x00000074u); // 800F0670
  cmpu(c,0,c->r[4],0x000000FFu); // 800F0674
  if (crb(c,2)) { goto L_800F0690; } // 800F0678
  c->r[3]=0u+0x80550000u; // 800F067C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F0680
  c->lr=0x800F0688u; f_8018D694(c); // 800F0684
  c->r[0]=0u+0x000000FFu; // 800F0688
  W8(c->r[31]+0x00000074u,c->r[0]); // 800F068C
L_800F0690:;
  c->r[3]=c->r[31]|c->r[31]; // 800F0690
  c->lr=0x800F0698u; f_801F4C78(c); // 800F0694
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0698
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F069C
  c->lr=c->r[0]; // 800F06A0
  c->r[1]=c->r[1]+0x00000010u; // 800F06A4
  return; // 800F06A8
}

// fn_800F06AC
void f_800F06AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F06AC
  c->r[0]=c->lr; // 800F06B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F06B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F06B8
  c->r[31]=c->r[3]|c->r[3]; // 800F06BC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F06C0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F06C4
  c->lr=0x800F06CCu; f_802501B0(c); // 800F06C8
  c->r[3]=c->r[31]|c->r[31]; // 800F06CC
  c->r[4]=0u+0x00000000u; // 800F06D0
  c->lr=0x800F06D8u; f_801F5244(c); // 800F06D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F06D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F06DC
  c->lr=c->r[0]; // 800F06E0
  c->r[1]=c->r[1]+0x00000010u; // 800F06E4
  return; // 800F06E8
}

// fn_800F06EC
void f_800F06EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F06EC
  c->r[0]=c->lr; // 800F06F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F06F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F06F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F06FC
  c->r[30]=c->r[3]|c->r[3]; // 800F0700
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F0704
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F0708
  c->lr=0x800F0710u; f_802501B0(c); // 800F070C
  c->r[3]=c->r[30]|c->r[30]; // 800F0710
  c->r[4]=0u+0x00000000u; // 800F0714
  c->lr=0x800F071Cu; f_801F5244(c); // 800F0718
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F071C
  c->r[3]=c->r[30]+0x0000002Cu; // 800F0720
  c->r[4]=c->r[4]+0x0000005Cu; // 800F0724
  c->lr=0x800F072Cu; f_800361A0(c); // 800F0728
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F072C
  c->r[3]=c->r[30]|c->r[30]; // 800F0730
  c->lr=0x800F0738u; f_801F5418(c); // 800F0734
  cmps(c,0,(int32_t)c->r[3],0); // 800F0738
  if (!crb(c,0)) { goto L_800F0774; } // 800F073C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800F0740
  c->r[3]=0u+0x00000001u; // 800F0744
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F0748
  c->r[3]=c->r[30]|c->r[30]; // 800F074C
  c->r[0]=c->r[0]|0x00000080u; // 800F0750
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0754
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800F0758
  c->r[4]=0u+0x00000064u; // 800F075C
  c->r[5]=0u+0x00000000u; // 800F0760
  c->r[6]=0u+0x00000000u; // 800F0764
  c->r[7]=0u+0x00000000u; // 800F0768
  c->lr=0x800F0770u; f_801F4D44(c); // 800F076C
  goto L_800F07E8; // 800F0770
L_800F0774:;
  c->r[31]=0u+0x805D0000u; // 800F0774
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F0778
  c->lr=0x800F0780u; f_800447E4(c); // 800F077C
  cmpu(c,0,c->r[3],0x00000001u); // 800F0780
  if (!crb(c,2)) { goto L_800F0794; } // 800F0784
  c->r[0]=0u+0x00000000u; // 800F0788
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F078C
  goto L_800F07B4; // 800F0790
L_800F0794:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F0794
  c->r[0]=R8(c->r[30]+0x00000075u); // 800F0798
  c->r[3]=R8(c->r[3]+0x0000006Fu); // 800F079C
  cmps(c,0,(int32_t)c->r[0],0); // 800F07A0
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F07A4
  if (crb(c,2)) { goto L_800F07B4; } // 800F07A8
  c->r[0]=0u+0x00000000u; // 800F07AC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F07B0
L_800F07B4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F07B4
  c->lr=0x800F07BCu; f_801F5B14(c); // 800F07B8
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800F07BC
  cmps(c,0,(int32_t)c->r[0],0); // 800F07C0
  if (!crb(c,2)) { goto L_800F07E8; } // 800F07C4
  c->r[4]=R8(c->r[30]+0x00000074u); // 800F07C8
  cmpu(c,0,c->r[4],0x000000FFu); // 800F07CC
  if (crb(c,2)) { goto L_800F07E8; } // 800F07D0
  c->r[3]=0u+0x80550000u; // 800F07D4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F07D8
  c->lr=0x800F07E0u; f_8018D694(c); // 800F07DC
  c->r[0]=0u+0x000000FFu; // 800F07E0
  W8(c->r[30]+0x00000074u,c->r[0]); // 800F07E4
L_800F07E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F07E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F07EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F07F0
  c->lr=c->r[0]; // 800F07F4
  c->r[1]=c->r[1]+0x00000010u; // 800F07F8
  return; // 800F07FC
}

// fn_800F0800
void f_800F0800(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0800
  c->r[0]=c->lr; // 800F0804
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F0808
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F080C
  c->r[31]=c->r[3]|c->r[3]; // 800F0810
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F0814
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F0818
  c->lr=0x800F0820u; f_802501B0(c); // 800F081C
  c->r[3]=c->r[31]+0x00000038u; // 800F0820
  c->r[4]=c->r[31]+0x0000002Cu; // 800F0824
  c->lr=0x800F082Cu; f_800361A0(c); // 800F0828
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F082C
  c->r[3]=0u+0x80550000u; // 800F0830
  c->r[3]=c->r[3]+0x00003D60u; // 800F0834
  c->r[4]=c->r[31]+0x00000038u; // 800F0838
  c->f[2]=c->f[1]; // 800F083C
  c->r[5]=c->r[1]+0x00000008u; // 800F0840
  c->f[3]=c->f[1]; // 800F0844
  c->r[6]=0u+0x00000000u; // 800F0848
  c->r[7]=0u+0x00000000u; // 800F084C
  c->lr=0x800F0854u; f_801D5488(c); // 800F0850
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F0854
  c->r[3]=c->r[31]+0x00000060u; // 800F0858
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F085C
  c->r[4]=c->r[5]+0x00000068u; // 800F0860
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800F0864
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0868
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800F086C
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0870
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800F0874
  c->lr=0x800F087Cu; f_800361A0(c); // 800F0878
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F087C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F0880
  c->lr=0x800F0888u; f_802501B0(c); // 800F0884
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800F0888
  c->r[0]=0u+0x00000001u; // 800F088C
  {uint32_t ea=c->r[2]+0xFFFFA928u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0890
  c->r[4]=c->r[31]+0x0000002Cu; // 800F0894
  {uint32_t ea=c->r[2]+0xFFFFA92Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0898
  c->r[3]=c->r[3]|0x00002000u; // 800F089C
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800F08A0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F08A4
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800F08A8
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800F08AC
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800F08B0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F08B4
  c->r[3]=c->r[3]+0x0000005Cu; // 800F08B8
  c->lr=0x800F08C0u; f_800361A0(c); // 800F08BC
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F08C0
  c->r[4]=0u+0x00000040u; // 800F08C4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F08C8
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800F08CC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F08D0
  c->r[3]=c->r[3]+0x0000001Cu; // 800F08D4
  c->lr=0x800F08DCu; f_802518A4(c); // 800F08D8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F08DC
  c->r[4]=0u+0x00000006u; // 800F08E0
  c->r[3]=c->r[3]+0x0000001Cu; // 800F08E4
  c->lr=0x800F08ECu; f_80251824(c); // 800F08E8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F08EC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F08F0
  c->lr=0x800F08F8u; f_802501B0(c); // 800F08F4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F08F8
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800F08FC
  cmps(c,0,(int32_t)c->r[0],0); // 800F0900
  if (crb(c,2)) { goto L_800F09AC; } // 800F0904
  c->r[3]=c->r[3]+0x00000068u; // 800F0908
  c->r[4]=c->r[31]+0x00000060u; // 800F090C
  c->lr=0x800F0914u; f_800361A0(c); // 800F0910
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F0914
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F0918
  c->lr=0x800F0920u; f_8025037C(c); // 800F091C
  c->r[6]=R32(c->r[31]+0x00000394u); // 800F0920
  c->r[3]=c->r[1]+0x00000024u; // 800F0924
  c->r[4]=c->r[31]+0x00000060u; // 800F0928
  c->r[5]=c->r[1]+0x00000030u; // 800F092C
  c->r[6]=c->r[6]+0x000000B0u; // 800F0930
  c->r[7]=0u+0x00000000u; // 800F0934
  c->lr=0x800F093Cu; f_8002BE64(c); // 800F0938
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800F093C
  c->r[3]=0u+0x805D0000u; // 800F0940
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F0944
  c->r[3]=c->r[3]+0x00003F6Cu; // 800F0948
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F094C
  c->r[4]=c->r[31]|c->r[31]; // 800F0950
  W32(c->r[1]+0x00000018u,c->r[5]); // 800F0954
  c->r[7]=c->r[1]+0x00000018u; // 800F0958
  c->r[6]=0u+0x00000037u; // 800F095C
  c->r[8]=0u+0x00000000u; // 800F0960
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F0964
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F0968
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F096C
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F0970
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F0974
  c->lr=0x800F097Cu; f_801FA6A4(c); // 800F0978
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800F097C
  cmps(c,0,(int32_t)c->r[0],0); // 800F0980
  if (crb(c,2)) { goto L_800F0994; } // 800F0984
  c->r[3]=c->r[31]+0x00000044u; // 800F0988
  c->r[4]=c->r[31]+0x000003CCu; // 800F098C
  c->lr=0x800F0994u; f_800361A0(c); // 800F0990
L_800F0994:;
  c->r[6]=0u+0x803A0000u; // 800F0994
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F0998
  c->r[5]=c->r[31]+0x00000044u; // 800F099C
  c->r[4]=0u+0x00000000u; // 800F09A0
  c->r[6]=c->r[6]+0xFFFFEDC0u; // 800F09A4
  c->lr=0x800F09ACu; f_801FBEC0(c); // 800F09A8
L_800F09AC:;
  c->r[3]=c->r[31]|c->r[31]; // 800F09AC
  c->r[4]=0u+0x00000000u; // 800F09B0
  c->lr=0x800F09B8u; f_801F7C00(c); // 800F09B4
  c->r[7]=0u+0x803D0000u; // 800F09B8
  {uint32_t ea=c->r[7]+0x00004A30u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F09BC
  c->r[3]=c->r[31]|c->r[31]; // 800F09C0
  c->r[4]=c->r[1]+0x0000000Cu; // 800F09C4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F09C8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F09CC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F09D0
  W32(c->r[1]+0x00000010u,c->r[5]); // 800F09D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F09D8
  c->lr=0x800F09E0u; f_800F09F4(c); // 800F09DC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F09E0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F09E4
  c->lr=c->r[0]; // 800F09E8
  c->r[1]=c->r[1]+0x00000050u; // 800F09EC
  return; // 800F09F0
}

// fn_800F09F4
void f_800F09F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F09F4
  c->r[0]=c->lr; // 800F09F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F09FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0A00
  c->r[31]=c->r[4]|c->r[4]; // 800F0A04
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F0A08
  c->r[30]=c->r[3]|c->r[3]; // 800F0A0C
  c->r[3]=c->r[31]|c->r[31]; // 800F0A10
  c->lr=0x800F0A18u; f_802B9FDC(c); // 800F0A14
  cmps(c,0,(int32_t)c->r[3],0); // 800F0A18
  if (crb(c,2)) { goto L_800F0A38; } // 800F0A1C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F0A20
  c->r[0]=R32(c->r[31]+0x00000004u); // 800F0A24
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800F0A28
  W32(c->r[30]+0x00000020u,c->r[0]); // 800F0A2C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800F0A30
  W32(c->r[30]+0x00000024u,c->r[0]); // 800F0A34
L_800F0A38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0A38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0A3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F0A40
  c->lr=c->r[0]; // 800F0A44
  c->r[1]=c->r[1]+0x00000010u; // 800F0A48
  return; // 800F0A4C
}

// fn_800F0A50
void f_800F0A50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0A50
  c->r[0]=c->lr; // 800F0A54
  c->r[4]=0u+0x00000000u; // 800F0A58
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0A5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F0A60
  c->r[31]=c->r[3]|c->r[3]; // 800F0A64
  c->r[3]=R32(c->r[3]+0x00000438u); // 800F0A68
  c->lr=0x800F0A70u; f_801FAF00(c); // 800F0A6C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0A70
  if (!crb(c,2)) { goto L_800F0B34; } // 800F0A74
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F0A78
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800F0A7C
  if (crb(c,2)) { goto L_800F0A94; } // 800F0A80
  c->r[3]=c->r[31]|c->r[31]; // 800F0A84
  c->r[4]=0u+0x00000042u; // 800F0A88
  c->lr=0x800F0A90u; f_801F5AB4(c); // 800F0A8C
  goto L_800F0AB0; // 800F0A90
L_800F0A94:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800F0A94
  c->r[4]=c->r[13]+0xFFFF8668u; // 800F0A98
  c->r[3]=c->r[31]|c->r[31]; // 800F0A9C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F0AA0
  c->r[0]=R16(c->r[4]+c->r[0]); // 800F0AA4
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800F0AA8
  c->lr=0x800F0AB0u; f_801F5AB4(c); // 800F0AAC
L_800F0AB0:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F0AB0
  c->r[3]=c->r[31]+0x0000002Cu; // 800F0AB4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F0AB8
  c->r[0]=c->r[0]|0x00000004u; // 800F0ABC
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800F0AC0
  c->r[4]=c->r[4]+0x0000005Cu; // 800F0AC4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F0AC8
  c->lr=0x800F0AD0u; f_800361A0(c); // 800F0ACC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F0AD0
  c->r[3]=c->r[31]+0x00000060u; // 800F0AD4
  c->r[4]=c->r[4]+0x00000068u; // 800F0AD8
  c->lr=0x800F0AE0u; f_800361A0(c); // 800F0ADC
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800F0AE0
  c->r[3]=0u+0x805D0000u; // 800F0AE4
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F0AE8
  c->r[3]=c->r[3]+0x00006CF8u; // 800F0AEC
  c->r[4]=c->r[1]+0x00000008u; // 800F0AF0
  c->r[5]=0u+0x00040000u; // 800F0AF4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F0AF8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F0AFC
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F0B00
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F0B04
  c->lr=0x800F0B0Cu; f_802236F8(c); // 800F0B08
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800F0B0C
  c->r[3]=c->r[31]|c->r[31]; // 800F0B10
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F0B14
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F0B18
  c->ctr=c->r[12]; // 800F0B1C
  if (true) { c->lr=0x800F0B24u; dispatch(c,c->ctr); } // 800F0B20
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F0B24
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F0B28
  c->lr=0x800F0B30u; f_8025037C(c); // 800F0B2C
  goto L_800F0B54; // 800F0B30
L_800F0B34:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F0B34
  c->r[3]=c->r[31]+0x0000002Cu; // 800F0B38
  c->r[4]=c->r[4]+0x0000005Cu; // 800F0B3C
  c->lr=0x800F0B44u; f_800361A0(c); // 800F0B40
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F0B44
  c->r[3]=c->r[31]+0x00000060u; // 800F0B48
  c->r[4]=c->r[4]+0x00000068u; // 800F0B4C
  c->lr=0x800F0B54u; f_800361A0(c); // 800F0B50
L_800F0B54:;
  c->r[3]=c->r[31]|c->r[31]; // 800F0B54
  c->r[4]=0u+0x00000000u; // 800F0B58
  c->lr=0x800F0B60u; f_801F7C00(c); // 800F0B5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0B60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F0B64
  c->lr=c->r[0]; // 800F0B68
  c->r[1]=c->r[1]+0x00000020u; // 800F0B6C
  return; // 800F0B70
}

// fn_800F0B74
void f_800F0B74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0B74
  c->r[0]=c->lr; // 800F0B78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0B7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0B80
  c->r[31]=c->r[3]|c->r[3]; // 800F0B84
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F0B88
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F0B8C
  c->lr=0x800F0B94u; f_802501B0(c); // 800F0B90
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F0B94
  c->r[6]=0u+0x00000000u; // 800F0B98
  c->r[0]=0u+0x00000001u; // 800F0B9C
  c->r[3]=c->r[31]+0x0000002Cu; // 800F0BA0
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800F0BA4
  c->r[4]=c->r[31]+0x000003CCu; // 800F0BA8
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F0BAC
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800F0BB0
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800F0BB4
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800F0BB8
  c->r[0]=rotl(c->r[5],0)&0xFFFFDFFFu; // 800F0BBC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F0BC0
  c->lr=0x800F0BC8u; f_800361A0(c); // 800F0BC4
  c->r[3]=c->r[31]+0x00000060u; // 800F0BC8
  c->r[4]=c->r[31]+0x000003D8u; // 800F0BCC
  c->lr=0x800F0BD4u; f_800361A0(c); // 800F0BD0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F0BD4
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800F0BD8
  if (crb(c,2)) { goto L_800F0BF0; } // 800F0BDC
  c->r[3]=c->r[31]|c->r[31]; // 800F0BE0
  c->r[4]=0u+0x00000042u; // 800F0BE4
  c->lr=0x800F0BECu; f_801F5AB4(c); // 800F0BE8
  goto L_800F0C0C; // 800F0BEC
L_800F0BF0:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800F0BF0
  c->r[4]=c->r[13]+0xFFFF8668u; // 800F0BF4
  c->r[3]=c->r[31]|c->r[31]; // 800F0BF8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F0BFC
  c->r[0]=R16(c->r[4]+c->r[0]); // 800F0C00
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800F0C04
  c->lr=0x800F0C0Cu; f_801F5AB4(c); // 800F0C08
L_800F0C0C:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F0C0C
  c->r[3]=c->r[31]|c->r[31]; // 800F0C10
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F0C14
  c->ctr=c->r[12]; // 800F0C18
  if (true) { c->lr=0x800F0C20u; dispatch(c,c->ctr); } // 800F0C1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0C20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0C24
  c->lr=c->r[0]; // 800F0C28
  c->r[1]=c->r[1]+0x00000010u; // 800F0C2C
  return; // 800F0C30
}

// fn_800F0C34
void f_800F0C34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0C34
  c->r[0]=c->lr; // 800F0C38
  c->r[5]=0u+0x00000000u; // 800F0C3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0C40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0C44
  c->r[31]=c->r[3]|c->r[3]; // 800F0C48
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800F0C4C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F0C50
  c->r[3]=c->r[13]+0xFFFF8670u; // 800F0C54
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F0C58
  c->r[3]=R32(c->r[3]+c->r[0]); // 800F0C5C
  c->r[4]=c->r[4]+0x0000010Cu; // 800F0C60
  c->lr=0x800F0C68u; f_8024EE50(c); // 800F0C64
  cmps(c,0,(int32_t)c->r[3],0); // 800F0C68
  if (crb(c,2)) { goto L_800F0C78; } // 800F0C6C
  c->r[3]=0u+0x00000000u; // 800F0C70
  goto L_800F0C84; // 800F0C74
L_800F0C78:;
  c->r[3]=c->r[31]+0x00000210u; // 800F0C78
  c->r[4]=0u+0x000000E1u; // 800F0C7C
  c->lr=0x800F0C84u; f_80221630(c); // 800F0C80
L_800F0C84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0C84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0C88
  c->lr=c->r[0]; // 800F0C8C
  c->r[1]=c->r[1]+0x00000010u; // 800F0C90
  return; // 800F0C94
}

// fn_800F0C98
void f_800F0C98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0C98
  c->r[0]=c->lr; // 800F0C9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0CA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0CA4
  c->r[31]=0u+0x805D0000u; // 800F0CA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F0CAC
  c->r[30]=c->r[3]|c->r[3]; // 800F0CB0
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F0CB4
  c->lr=0x800F0CBCu; f_80045264(c); // 800F0CB8
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800F0CBC
  c->r[4]=c->r[13]+0xFFFF8668u; // 800F0CC0
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800F0CC4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F0CC8
  c->r[0]=R16(c->r[4]+c->r[0]); // 800F0CCC
  cmpu(c,0,c->r[0],c->r[3]); // 800F0CD0
  if (crb(c,2)) { goto L_800F0CEC; } // 800F0CD4
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F0CD8
  c->lr=0x800F0CE0u; f_80045264(c); // 800F0CDC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800F0CE0
  cmpu(c,0,c->r[0],0x00000051u); // 800F0CE4
  if (!crb(c,2)) { goto L_800F0D28; } // 800F0CE8
L_800F0CEC:;
  c->r[3]=0u+0x805D0000u; // 800F0CEC
  c->r[3]=c->r[3]+0x00003F6Cu; // 800F0CF0
  c->lr=0x800F0CF8u; f_80037AF0(c); // 800F0CF4
  cmpu(c,0,c->r[3],c->r[30]); // 800F0CF8
  if (!crb(c,2)) { goto L_800F0D28; } // 800F0CFC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800F0D00
  cmps(c,0,(int32_t)c->r[0],101); // 800F0D04
  if (crb(c,2)) { goto L_800F0D28; } // 800F0D08
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0D0C
  c->r[3]=c->r[30]|c->r[30]; // 800F0D10
  c->r[4]=0u+0x00000065u; // 800F0D14
  c->r[5]=0u+0x00000000u; // 800F0D18
  c->r[6]=0u+0x00000000u; // 800F0D1C
  c->r[7]=0u+0x00000000u; // 800F0D20
  c->lr=0x800F0D28u; f_801F4D44(c); // 800F0D24
L_800F0D28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0D28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0D2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F0D30
  c->lr=c->r[0]; // 800F0D34
  c->r[1]=c->r[1]+0x00000010u; // 800F0D38
  return; // 800F0D3C
}

// fn_800F0D40
void f_800F0D40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0D40
  c->r[0]=c->lr; // 800F0D44
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F0D48
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F0D4C
  c->r[31]=0u+0x803D0000u; // 800F0D50
  c->r[31]=c->r[31]+0x00004A30u; // 800F0D54
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F0D58
  c->r[30]=c->r[3]|c->r[3]; // 800F0D5C
  c->lr=0x800F0D64u; f_801F4F28(c); // 800F0D60
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800F0D64
  cmps(c,0,(int32_t)c->r[0],101); // 800F0D68
  if (crb(c,2)) { goto L_800F0DBC; } // 800F0D6C
  if (!crb(c,0)) { goto L_800F0D80; } // 800F0D70
  cmps(c,0,(int32_t)c->r[0],100); // 800F0D74
  if (!crb(c,0)) { goto L_800F0D8C; } // 800F0D78
  goto L_800F0E18; // 800F0D7C
L_800F0D80:;
  cmps(c,0,(int32_t)c->r[0],103); // 800F0D80
  if (!crb(c,0)) { goto L_800F0E18; } // 800F0D84
  goto L_800F0DEC; // 800F0D88
L_800F0D8C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F0D8C
  c->r[5]=c->r[31]+0x0000000Cu; // 800F0D90
  c->r[3]=c->r[30]|c->r[30]; // 800F0D94
  c->r[4]=c->r[1]+0x00000020u; // 800F0D98
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800F0D9C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F0DA0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F0DA4
  W32(c->r[1]+0x00000020u,c->r[7]); // 800F0DA8
  W32(c->r[1]+0x00000024u,c->r[6]); // 800F0DAC
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F0DB0
  c->lr=0x800F0DB8u; f_800F09F4(c); // 800F0DB4
  goto L_800F0E18; // 800F0DB8
L_800F0DBC:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F0DBC
  c->r[5]=c->r[31]+0x00000018u; // 800F0DC0
  c->r[3]=c->r[30]|c->r[30]; // 800F0DC4
  c->r[4]=c->r[1]+0x00000014u; // 800F0DC8
  c->r[7]=R32(c->r[31]+0x00000018u); // 800F0DCC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F0DD0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F0DD4
  W32(c->r[1]+0x00000014u,c->r[7]); // 800F0DD8
  W32(c->r[1]+0x00000018u,c->r[6]); // 800F0DDC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F0DE0
  c->lr=0x800F0DE8u; f_800F09F4(c); // 800F0DE4
  goto L_800F0E18; // 800F0DE8
L_800F0DEC:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F0DEC
  c->r[5]=c->r[31]+0x00000024u; // 800F0DF0
  c->r[3]=c->r[30]|c->r[30]; // 800F0DF4
  c->r[4]=c->r[1]+0x00000008u; // 800F0DF8
  c->r[7]=R32(c->r[31]+0x00000024u); // 800F0DFC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F0E00
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F0E04
  W32(c->r[1]+0x00000008u,c->r[7]); // 800F0E08
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F0E0C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F0E10
  c->lr=0x800F0E18u; f_800F09F4(c); // 800F0E14
L_800F0E18:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F0E18
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F0E1C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F0E20
  c->lr=c->r[0]; // 800F0E24
  c->r[1]=c->r[1]+0x00000040u; // 800F0E28
  return; // 800F0E2C
}

// fn_800F0E30
void f_800F0E30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0E30
  c->r[0]=c->lr; // 800F0E34
  c->r[7]=0u+0x803D0000u; // 800F0E38
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0E3C
  c->r[4]=c->r[1]+0x00000008u; // 800F0E40
  {uint32_t ea=c->r[7]+0x00004A60u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F0E44
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F0E48
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F0E4C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F0E50
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F0E54
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F0E58
  c->lr=0x800F0E60u; f_800F09F4(c); // 800F0E5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0E60
  c->lr=c->r[0]; // 800F0E64
  c->r[1]=c->r[1]+0x00000020u; // 800F0E68
  return; // 800F0E6C
}

// fn_800F0E70
void f_800F0E70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0E70
  c->r[0]=c->lr; // 800F0E74
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F0E78
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800F0E7C
  W32(c->r[1]+0x00000088u,c->r[30]); // 800F0E80
  c->r[30]=c->r[3]|c->r[3]; // 800F0E84
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F0E88
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800F0E8C
  cmps(c,0,(int32_t)c->r[0],0); // 800F0E90
  if (!crb(c,2)) { goto L_800F0F20; } // 800F0E94
  c->r[3]=R16(c->r[3]+0x000003BEu); // 800F0E98
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800F0E9C
  if (crb(c,2)) { goto L_800F0F20; } // 800F0EA0
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800F0EA4
  cmps(c,0,(int32_t)c->r[0],128); // 800F0EA8
  if (!crb(c,2)) { goto L_800F0ED4; } // 800F0EAC
  c->r[3]=0u+0x80620000u; // 800F0EB0
  c->r[3]=c->r[3]+0x00007688u; // 800F0EB4
  c->r[3]=R32(c->r[3]+0x00000014u); // 800F0EB8
  cmps(c,0,(int32_t)c->r[3],0); // 800F0EBC
  if (crb(c,2)) { goto L_800F0ED4; } // 800F0EC0
  c->r[4]=0u+0x00000002u; // 800F0EC4
  c->lr=0x800F0ECCu; f_80037670(c); // 800F0EC8
  cmps(c,0,(int32_t)c->r[3],0); // 800F0ECC
  if (!crb(c,2)) { goto L_800F0F20; } // 800F0ED0
L_800F0ED4:;
  {uint32_t ea=c->r[2]+0xFFFFA930u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0ED4
  c->r[3]=c->r[1]+0x00000008u; // 800F0ED8
  c->r[4]=c->r[30]+0x0000002Cu; // 800F0EDC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800F0EE0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800F0EE4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800F0EE8
  c->lr=0x800F0EF0u; f_800361A0(c); // 800F0EEC
  c->r[31]=0u+0x80550000u; // 800F0EF0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0EF4
  c->r[31]=c->r[31]+0x00003D60u; // 800F0EF8
  c->r[5]=c->r[30]|c->r[30]; // 800F0EFC
  c->r[3]=c->r[31]+0x00000010u; // 800F0F00
  c->r[6]=c->r[1]+0x00000008u; // 800F0F04
  c->r[7]=c->r[1]+0x00000020u; // 800F0F08
  c->r[4]=0u+0x000001FFu; // 800F0F0C
  c->lr=0x800F0F14u; f_80226910(c); // 800F0F10
  c->r[3]=c->r[31]+0x00000010u; // 800F0F14
  c->r[4]=c->r[1]+0x00000020u; // 800F0F18
  c->lr=0x800F0F20u; f_80226D68(c); // 800F0F1C
L_800F0F20:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F0F20
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800F0F24
  c->r[30]=R32(c->r[1]+0x00000088u); // 800F0F28
  c->lr=c->r[0]; // 800F0F2C
  c->r[1]=c->r[1]+0x00000090u; // 800F0F30
  return; // 800F0F34
}

// fn_800F0F38
void f_800F0F38(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800F0F38
  W8(c->r[3]+0x00000075u,c->r[0]); // 800F0F3C
  return; // 800F0F40
}

// fn_800F0F44
void f_800F0F44(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800F0F44
  W8(c->r[3]+0x00000075u,c->r[0]); // 800F0F48
  return; // 800F0F4C
}

// fn_800F0F50
void f_800F0F50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0F50
  c->r[0]=c->lr; // 800F0F54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0F58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0F5C
  c->r[31]=c->r[3]|c->r[3]; // 800F0F60
  c->r[3]=c->r[3]+0x00000210u; // 800F0F64
  c->lr=0x800F0F6Cu; f_8004BAD4(c); // 800F0F68
  cmps(c,0,(int32_t)c->r[3],0); // 800F0F6C
  if (crb(c,2)) { goto L_800F0FF4; } // 800F0F70
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F0F74
  c->r[4]=c->r[31]|c->r[31]; // 800F0F78
  c->r[3]=c->r[31]+0x00000210u; // 800F0F7C
  c->r[0]=c->r[0]|0xAA800000u; // 800F0F80
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F0F84
  c->lr=0x800F0F8Cu; f_80043E44(c); // 800F0F88
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0F8C
  c->r[3]=c->r[31]+0x00000210u; // 800F0F90
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F0F94
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F0F98
  c->lr=0x800F0FA0u; f_80043E34(c); // 800F0F9C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F0FA0
  c->r[4]=0u+0x803A0000u; // 800F0FA4
  c->r[4]=c->r[4]+0xFFFFEE48u; // 800F0FA8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F0FAC
  c->r[4]=c->r[4]+0x0000000Du; // 800F0FB0
  c->lr=0x800F0FB8u; f_80256EC4(c); // 800F0FB4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F0FB8
  c->r[5]=c->r[3]|c->r[3]; // 800F0FBC
  c->r[3]=c->r[31]+0x00000210u; // 800F0FC0
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800F0FC4
  c->lr=0x800F0FCCu; f_8004BAC8(c); // 800F0FC8
  {uint32_t ea=c->r[2]+0xFFFFA934u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0FCC
  c->r[3]=c->r[31]+0x00000210u; // 800F0FD0
  c->f[2]=c->f[1]; // 800F0FD4
  c->f[3]=c->f[1]; // 800F0FD8
  c->lr=0x800F0FE0u; f_80043E24(c); // 800F0FDC
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0FE0
  c->r[3]=c->r[31]+0x00000210u; // 800F0FE4
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F0FE8
  c->f[3]=c->f[1]; // 800F0FEC
  c->lr=0x800F0FF4u; f_8005D58C(c); // 800F0FF0
L_800F0FF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0FF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0FF8
  c->lr=c->r[0]; // 800F0FFC
  c->r[1]=c->r[1]+0x00000010u; // 800F1000
  return; // 800F1004
}

// fn_800F1008
void f_800F1008(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1008
  c->r[0]=c->lr; // 800F100C
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F1010
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800F1014
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800F1018
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800F101C
  c->r[31]=0u+0x803A0000u; // 800F1020
  c->r[31]=c->r[31]+0xFFFFEDC0u; // 800F1024
  W32(c->r[1]+0x00000078u,c->r[30]); // 800F1028
  c->r[30]=c->r[3]|c->r[3]; // 800F102C
  c->r[3]=c->r[3]+0x00000210u; // 800F1030
  c->lr=0x800F1038u; f_80221698(c); // 800F1034
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F1038
  cmps(c,0,(int32_t)c->r[3],0); // 800F103C
  if (crb(c,2)) { goto L_800F1060; } // 800F1040
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800F1044
  cmps(c,0,(int32_t)c->r[0],0); // 800F1048
  if (crb(c,2)) { goto L_800F1060; } // 800F104C
  c->r[0]=R32(c->r[30]+0x00000210u); // 800F1050
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800F1054
  W32(c->r[30]+0x00000210u,c->r[0]); // 800F1058
  goto L_800F129C; // 800F105C
L_800F1060:;
  c->r[0]=R32(c->r[30]+0x00000210u); // 800F1060
  c->r[7]=c->r[31]+0x0000003Cu; // 800F1064
  c->r[6]=c->r[31]+0x00000048u; // 800F1068
  c->r[3]=c->r[1]+0x00000020u; // 800F106C
  c->r[0]=c->r[0]|0x80000000u; // 800F1070
  c->r[4]=c->r[1]+0x00000014u; // 800F1074
  W32(c->r[30]+0x00000210u,c->r[0]); // 800F1078
  c->r[5]=c->r[1]+0x00000038u; // 800F107C
  c->r[11]=R32(c->r[31]+0x0000003Cu); // 800F1080
  c->r[10]=R32(c->r[7]+0x00000004u); // 800F1084
  c->r[9]=R32(c->r[7]+0x00000008u); // 800F1088
  c->r[8]=R32(c->r[31]+0x00000048u); // 800F108C
  c->r[7]=R32(c->r[6]+0x00000004u); // 800F1090
  c->r[0]=R32(c->r[6]+0x00000008u); // 800F1094
  W32(c->r[1]+0x00000020u,c->r[11]); // 800F1098
  W32(c->r[1]+0x00000024u,c->r[10]); // 800F109C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 800F10A0
  W32(c->r[1]+0x00000028u,c->r[9]); // 800F10A4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 800F10A8
  W32(c->r[1]+0x00000014u,c->r[8]); // 800F10AC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 800F10B0
  W32(c->r[1]+0x00000018u,c->r[7]); // 800F10B4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F10B8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F10BC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F10C0
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F10C4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F10C8
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F10CC
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 800F10D0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800F10D4
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F10D8
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F10DC
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800F10E0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800F10E4
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F10E8
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F10EC
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800F10F0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800F10F4
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F10F8
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F10FC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800F1100
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800F1104
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F1108
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F110C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800F1110
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800F1114
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F1118
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F111C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800F1120
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800F1124
  c->lr=0x800F112Cu; f_80296A70(c); // 800F1128
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F112C
  c->r[4]=0u+0x803A0000u; // 800F1130
  c->r[4]=c->r[4]+0xFFFFEE48u; // 800F1134
  c->r[5]=c->r[1]+0x00000048u; // 800F1138
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F113C
  c->r[4]=c->r[4]+0x0000000Du; // 800F1140
  c->r[6]=0u+0x00000001u; // 800F1144
  c->lr=0x800F114Cu; f_80257018(c); // 800F1148
  c->r[4]=c->r[1]+0x00000020u; // 800F114C
  c->r[3]=c->r[1]+0x00000048u; // 800F1150
  c->r[5]=c->r[4]|c->r[4]; // 800F1154
  c->lr=0x800F115Cu; f_80296750(c); // 800F1158
  c->r[4]=c->r[1]+0x00000014u; // 800F115C
  c->r[3]=c->r[1]+0x00000048u; // 800F1160
  c->r[5]=c->r[4]|c->r[4]; // 800F1164
  c->lr=0x800F116Cu; f_80296750(c); // 800F1168
  c->r[3]=c->r[1]+0x00000020u; // 800F116C
  c->r[4]=c->r[1]+0x00000014u; // 800F1170
  c->r[5]=c->r[1]+0x0000002Cu; // 800F1174
  c->lr=0x800F117Cu; f_80296A70(c); // 800F1178
  c->r[4]=c->r[31]+0x00000054u; // 800F117C
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1180
  c->r[6]=R32(c->r[31]+0x00000054u); // 800F1184
  c->r[3]=c->r[1]+0x00000038u; // 800F1188
  c->r[5]=R32(c->r[4]+0x00000004u); // 800F118C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F1190
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800F1194
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F1198
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F119C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F11A0
  c->lr=0x800F11A8u; f_80296B0C(c); // 800F11A4
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F11A8
  fcmp(c,0,c->f[3],c->f[1]); // 800F11AC
  if (crb(c,2)) { goto L_800F1220; } // 800F11B0
  c->r[3]=c->r[1]+0x00000038u; // 800F11B4
  c->lr=0x800F11BCu; f_80296B0C(c); // 800F11B8
  c->f[31]=c->f[1]; // 800F11BC
  c->r[3]=c->r[1]+0x0000002Cu; // 800F11C0
  c->lr=0x800F11C8u; f_80296B0C(c); // 800F11C4
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[31]); // 800F11C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F11CC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F11D0
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F11D4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800F11D8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800F11DC
  c->lr=0x800F11E4u; f_8005C22C(c); // 800F11E0
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F11E4
  fcmp(c,0,c->f[1],c->f[0]); // 800F11E8
  if (!crb(c,1)) { goto L_800F1204; } // 800F11EC
  {uint32_t ea=c->r[2]+0xFFFFA938u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F11F0
  {uint32_t ea=c->r[2]+0xFFFFA93Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F11F4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800F11F8
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 800F11FC
  goto L_800F1230; // 800F1200
L_800F1204:;
  {uint32_t ea=c->r[2]+0xFFFFA938u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1204
  {uint32_t ea=c->r[2]+0xFFFFA93Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F1208
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800F120C
  {uint32_t ea=c->r[2]+0xFFFFA940u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1210
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800F1214
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 800F1218
  goto L_800F1230; // 800F121C
L_800F1220:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1220
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F1224
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800F1228
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800F122C
L_800F1230:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1230
  {uint32_t ea=c->r[2]+0xFFFFA944u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1234
  fcmp(c,0,c->f[1],c->f[0]); // 800F1238
  if (!crb(c,0)) { goto L_800F1244; } // 800F123C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800F1240
L_800F1244:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F1244
  c->r[3]=c->r[30]+0x00000210u; // 800F1248
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F124C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800F1250
  {uint32_t ea=c->r[4]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1254
  c->f[3]=c->f[1]; // 800F1258
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800F125C
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[0]); // 800F1260
  {uint32_t ea=c->r[4]+0x00000078u; c->f[5]=c->ps1[5]=RF32(ea);} // 800F1264
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 800F1268
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F126C
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 800F1270
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[7]);} // 800F1274
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800F1278
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 800F127C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800F1280
  c->lr=0x800F1288u; f_8005D58C(c); // 800F1284
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1288
  c->r[3]=c->r[30]+0x00000210u; // 800F128C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F1290
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F1294
  c->lr=0x800F129Cu; f_80043E24(c); // 800F1298
L_800F129C:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800F129C
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F12A0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800F12A4
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800F12A8
  c->r[30]=R32(c->r[1]+0x00000078u); // 800F12AC
  c->lr=c->r[0]; // 800F12B0
  c->r[1]=c->r[1]+0x00000090u; // 800F12B4
  return; // 800F12B8
}

// fn_800F12BC
void f_800F12BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F12BC
  c->r[0]=c->lr; // 800F12C0
  cmps(c,0,(int32_t)c->r[3],0); // 800F12C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F12C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F12CC
  c->r[31]=c->r[4]|c->r[4]; // 800F12D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F12D4
  c->r[30]=c->r[3]|c->r[3]; // 800F12D8
  if (crb(c,2)) { goto L_800F12F8; } // 800F12DC
  c->r[4]=0u+0x00000000u; // 800F12E0
  c->lr=0x800F12E8u; f_8026A06C(c); // 800F12E4
  cmps(c,0,(int32_t)c->r[31],0); // 800F12E8
  if (!crb(c,1)) { goto L_800F12F8; } // 800F12EC
  c->r[3]=c->r[30]|c->r[30]; // 800F12F0
  c->lr=0x800F12F8u; f_8026A268(c); // 800F12F4
L_800F12F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800F12F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F12FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1300
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1304
  c->lr=c->r[0]; // 800F1308
  c->r[1]=c->r[1]+0x00000010u; // 800F130C
  return; // 800F1310
}

// fn_800F1314
void f_800F1314(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1314
  c->r[0]=c->lr; // 800F1318
  W32(c->r[1]+0x00000064u,c->r[0]); // 800F131C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800F1320
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800F1324
  c->r[4]=0u+0x00000000u; // 800F1328
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F132C
  c->r[31]=c->r[3]|c->r[3]; // 800F1330
  W32(c->r[1]+0x00000048u,c->r[30]); // 800F1334
  W32(c->r[1]+0x00000044u,c->r[29]); // 800F1338
  c->lr=0x800F1340u; f_801F57D0(c); // 800F133C
  c->r[3]=c->r[31]|c->r[31]; // 800F1340
  c->r[4]=0u+0x00000001u; // 800F1344
  c->lr=0x800F134Cu; f_801F57D0(c); // 800F1348
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F134C
  c->r[3]=c->r[31]|c->r[31]; // 800F1350
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800F1354
  c->ctr=c->r[12]; // 800F1358
  if (true) { c->lr=0x800F1360u; dispatch(c,c->ctr); } // 800F135C
  c->r[3]=c->r[31]|c->r[31]; // 800F1360
  c->lr=0x800F1368u; f_801F4B94(c); // 800F1364
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F1368
  c->r[5]=0u+0x00000003u; // 800F136C
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1370
  c->r[4]=0u+0x00000061u; // 800F1374
  c->r[0]=c->r[0]|0x00000804u; // 800F1378
  c->r[29]=0u+0x00000001u; // 800F137C
  c->r[0]=rotl(c->r[0],0)&0x00003FFFu; // 800F1380
  c->f[3]=c->f[1]; // 800F1384
  c->r[3]=0u+0x80550000u; // 800F1388
  W8(c->r[31]+0x0000006Cu,c->r[5]); // 800F138C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800F1390
  c->r[3]=c->r[3]+0x00003D60u; // 800F1394
  W8(c->r[31]+0x0000006Du,c->r[4]); // 800F1398
  {uint32_t ea=c->r[2]+0xFFFFA954u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F139C
  c->r[4]=c->r[31]+0x0000002Cu; // 800F13A0
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800F13A4
  c->r[5]=c->r[31]+0x00000030u; // 800F13A8
  c->r[6]=0u+0x00000000u; // 800F13AC
  c->r[7]=0u+0x00000000u; // 800F13B0
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F13B4
  c->lr=0x800F13BCu; f_801D5488(c); // 800F13B8
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F13BC
  c->r[3]=c->r[31]|c->r[31]; // 800F13C0
  c->lr=0x800F13C8u; f_801F58BC(c); // 800F13C4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F13C8
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800F13CC
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F13D0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F13D4
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800F13D8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800F13DC
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800F13E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F13E4
  c->lr=0x800F13ECu; f_802501B0(c); // 800F13E8
  c->r[3]=0u+0x805D0000u; // 800F13EC
  c->r[4]=c->r[31]+0x0000002Cu; // 800F13F0
  c->r[3]=c->r[3]+0x000078B0u; // 800F13F4
  c->lr=0x800F13FCu; f_802351CC(c); // 800F13F8
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F13FC
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800F1400
  c->r[3]=c->r[31]|c->r[31]; // 800F1404
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F1408
  c->lr=0x800F1410u; f_801F58BC(c); // 800F140C
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F1410
  c->r[29]=0u+0x00000000u; // 800F1414
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800F1418
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F141C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F1420
  c->lr=0x800F1428u; f_802501B0(c); // 800F1424
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F1428
  c->r[5]=0u+0x00000000u; // 800F142C
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F1430
  c->r[0]=R8(c->r[4]+0x0000001Du); // 800F1434
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800F1438
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F143C
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F1440
  c->lr=0x800F1448u; f_80250BF4(c); // 800F1444
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F1448
  c->r[3]=c->r[31]|c->r[31]; // 800F144C
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1450
  c->r[5]=0u+0x00000001u; // 800F1454
  c->r[12]=R32(c->r[12]+0x00000064u); // 800F1458
  c->r[6]=0u+0x00000001u; // 800F145C
  c->f[2]=c->f[1]; // 800F1460
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F1464
  c->ctr=c->r[12]; // 800F1468
  if (true) { c->lr=0x800F1470u; dispatch(c,c->ctr); } // 800F146C
  W8(c->r[31]+0x00000028u,c->r[29]); // 800F1470
  c->r[3]=c->r[31]|c->r[31]; // 800F1474
  c->lr=0x800F147Cu; f_801F56F4(c); // 800F1478
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F147C
  c->r[3]=c->r[31]|c->r[31]; // 800F1480
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F1484
  c->ctr=c->r[12]; // 800F1488
  if (true) { c->lr=0x800F1490u; dispatch(c,c->ctr); } // 800F148C
  c->r[29]=0u+0x80550000u; // 800F1490
  c->r[30]=0u+0x803A0000u; // 800F1494
  c->r[3]=c->r[29]+0xFFFFC848u; // 800F1498
  c->r[5]=0u+0x00000000u; // 800F149C
  c->r[4]=c->r[30]+0xFFFFEE84u; // 800F14A0
  c->r[6]=0u+0x00000000u; // 800F14A4
  c->lr=0x800F14ACu; f_8018D3E4(c); // 800F14A8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F14AC
  W8(c->r[31]+0x00000074u,c->r[3]); // 800F14B0
  cmpu(c,0,c->r[0],0x000000FFu); // 800F14B4
  if (crb(c,2)) { goto L_800F14E8; } // 800F14B8
  c->r[6]=R32(c->r[31]+0x00000394u); // 800F14BC
  c->r[3]=c->r[30]+0xFFFFEE84u; // 800F14C0
  c->r[4]=c->r[3]+0x00000004u; // 800F14C4
  c->r[5]=c->r[1]+0x00000008u; // 800F14C8
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800F14CC
  c->r[6]=0u+0x00000001u; // 800F14D0
  c->lr=0x800F14D8u; f_80257018(c); // 800F14D4
  c->r[4]=R8(c->r[31]+0x00000074u); // 800F14D8
  c->r[3]=c->r[29]+0xFFFFC848u; // 800F14DC
  c->r[5]=c->r[1]+0x00000008u; // 800F14E0
  c->lr=0x800F14E8u; f_8018DEB8(c); // 800F14E4
L_800F14E8:;
  c->r[4]=0u+0x000000FFu; // 800F14E8
  c->r[0]=0u+0x00000000u; // 800F14EC
  W8(c->r[31]+0x00000075u,c->r[4]); // 800F14F0
  c->r[3]=c->r[31]|c->r[31]; // 800F14F4
  W16(c->r[31]+0x00000078u,c->r[4]); // 800F14F8
  W8(c->r[31]+0x00000077u,c->r[0]); // 800F14FC
  c->lr=0x800F1504u; f_800F252C(c); // 800F1500
  c->r[0]=0u+0x00000001u; // 800F1504
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 800F1508
  W32(c->r[31]+0x00000444u,c->r[0]); // 800F150C
  c->lr=0x800F1514u; f_8024E174(c); // 800F1510
  W32(c->r[31]+0x00000438u,c->r[3]); // 800F1514
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800F1518
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800F151C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F1520
  c->r[30]=R32(c->r[1]+0x00000048u); // 800F1524
  c->r[29]=R32(c->r[1]+0x00000044u); // 800F1528
  c->r[0]=R32(c->r[1]+0x00000064u); // 800F152C
  c->lr=c->r[0]; // 800F1530
  c->r[1]=c->r[1]+0x00000060u; // 800F1534
  return; // 800F1538
}

// fn_800F153C
void f_800F153C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F153C
  c->r[0]=c->lr; // 800F1540
  W32(c->r[1]+0x00000124u,c->r[0]); // 800F1544
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800F1548
  c->r[31]=c->r[3]|c->r[3]; // 800F154C
  W32(c->r[1]+0x00000118u,c->r[30]); // 800F1550
  W32(c->r[1]+0x00000114u,c->r[29]); // 800F1554
  W32(c->r[1]+0x00000110u,c->r[28]); // 800F1558
  c->lr=0x800F1560u; f_800F2284(c); // 800F155C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F1560
  c->r[3]=c->r[31]|c->r[31]; // 800F1564
  c->r[12]=R32(c->r[12]+0x00000068u); // 800F1568
  c->ctr=c->r[12]; // 800F156C
  if (true) { c->lr=0x800F1574u; dispatch(c,c->ctr); } // 800F1570
  c->r[3]=c->r[31]|c->r[31]; // 800F1574
  c->lr=0x800F157Cu; f_801F4C0C(c); // 800F1578
  c->r[3]=c->r[31]|c->r[31]; // 800F157C
  c->lr=0x800F1584u; f_800F244C(c); // 800F1580
  c->r[3]=c->r[31]|c->r[31]; // 800F1584
  c->lr=0x800F158Cu; f_801F56F4(c); // 800F1588
  c->r[3]=R8(c->r[31]+0x00000028u); // 800F158C
  cmps(c,0,(int32_t)c->r[3],2); // 800F1590
  if (crb(c,2)) { goto L_800F16C4; } // 800F1594
  if (!crb(c,0)) { goto L_800F15AC; } // 800F1598
  cmps(c,0,(int32_t)c->r[3],0); // 800F159C
  if (crb(c,2)) { goto L_800F15B8; } // 800F15A0
  if (!crb(c,0)) { goto L_800F166C; } // 800F15A4
  goto L_800F190C; // 800F15A8
L_800F15AC:;
  cmps(c,0,(int32_t)c->r[3],4); // 800F15AC
  if (!crb(c,0)) { goto L_800F190C; } // 800F15B0
  goto L_800F184C; // 800F15B4
L_800F15B8:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F15B8
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800F15BC
  if (crb(c,2)) { goto L_800F190C; } // 800F15C0
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F15C4
  c->r[0]=0u+0x00000001u; // 800F15C8
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F15CC
  c->r[3]=c->r[31]|c->r[31]; // 800F15D0
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800F15D4
  c->r[5]=0u+0x00000000u; // 800F15D8
  c->f[2]=c->f[1]; // 800F15DC
  c->r[6]=0u+0x00000001u; // 800F15E0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F15E4
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F15E8
  c->r[12]=R32(c->r[12]+0x00000064u); // 800F15EC
  c->ctr=c->r[12]; // 800F15F0
  if (true) { c->lr=0x800F15F8u; dispatch(c,c->ctr); } // 800F15F4
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F15F8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F15FC
  c->lr=0x800F1604u; f_802501B0(c); // 800F1600
  c->r[29]=0u+0x803A0000u; // 800F1604
  c->r[30]=0u+0x80550000u; // 800F1608
  c->r[29]=c->r[29]+0xFFFFEE84u; // 800F160C
  c->r[5]=0u+0x00000000u; // 800F1610
  c->r[3]=c->r[30]+0xFFFFC848u; // 800F1614
  c->r[6]=0u+0x00000000u; // 800F1618
  c->r[4]=c->r[29]+0x0000000Du; // 800F161C
  c->lr=0x800F1624u; f_8018D3E4(c); // 800F1620
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F1624
  W8(c->r[31]+0x00000075u,c->r[3]); // 800F1628
  cmpu(c,0,c->r[0],0x000000FFu); // 800F162C
  if (crb(c,2)) { goto L_800F165C; } // 800F1630
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F1634
  c->r[4]=c->r[29]+0x00000004u; // 800F1638
  c->r[5]=c->r[1]+0x000000D8u; // 800F163C
  c->r[6]=0u+0x00000001u; // 800F1640
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F1644
  c->lr=0x800F164Cu; f_80257018(c); // 800F1648
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F164C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800F1650
  c->r[5]=c->r[1]+0x000000D8u; // 800F1654
  c->lr=0x800F165Cu; f_8018DEB8(c); // 800F1658
L_800F165C:;
  c->r[3]=R8(c->r[31]+0x00000028u); // 800F165C
  c->r[0]=c->r[3]+0x00000001u; // 800F1660
  W8(c->r[31]+0x00000028u,c->r[0]); // 800F1664
  goto L_800F190C; // 800F1668
L_800F166C:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F166C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F1670
  c->lr=0x800F1678u; f_802501B0(c); // 800F1674
  cmps(c,0,(int32_t)c->r[3],0); // 800F1678
  if (crb(c,2)) { goto L_800F190C; } // 800F167C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F1680
  c->r[3]=c->r[31]|c->r[31]; // 800F1684
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1688
  c->r[5]=0u+0x00000001u; // 800F168C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800F1690
  c->r[6]=0u+0x00000001u; // 800F1694
  c->f[2]=c->f[1]; // 800F1698
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F169C
  c->ctr=c->r[12]; // 800F16A0
  if (true) { c->lr=0x800F16A8u; dispatch(c,c->ctr); } // 800F16A4
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F16A8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F16AC
  c->lr=0x800F16B4u; f_802501B0(c); // 800F16B0
  c->r[3]=R8(c->r[31]+0x00000028u); // 800F16B4
  c->r[0]=c->r[3]+0x00000001u; // 800F16B8
  W8(c->r[31]+0x00000028u,c->r[0]); // 800F16BC
  goto L_800F190C; // 800F16C0
L_800F16C4:;
  c->r[4]=R16(c->r[31]+0x000003BEu); // 800F16C4
  c->r[0]=rotl(c->r[4],0)&0x00004000u; cr0(c,c->r[0]); // 800F16C8
  if (!crb(c,2)) { goto L_800F190C; } // 800F16CC
  c->r[0]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[0]); // 800F16D0
  if (crb(c,2)) { goto L_800F1804; } // 800F16D4
  c->r[0]=rotl(c->r[4],0)&0x00007FFFu; // 800F16D8
  c->r[30]=0u+0x803A0000u; // 800F16DC
  c->r[30]=c->r[30]+0xFFFFEE84u; // 800F16E0
  c->r[29]=0u+0x80550000u; // 800F16E4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F16E8
  c->r[3]=c->r[29]+0xFFFFC848u; // 800F16EC
  c->r[4]=c->r[30]+0x00000011u; // 800F16F0
  c->r[5]=0u+0x00000000u; // 800F16F4
  c->r[6]=0u+0x00000000u; // 800F16F8
  c->lr=0x800F1700u; f_8018D3E4(c); // 800F16FC
  c->r[28]=rotl(c->r[3],0)&0x000000FFu; // 800F1700
  cmpu(c,0,c->r[28],0x000000FFu); // 800F1704
  if (crb(c,2)) { goto L_800F1798; } // 800F1708
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F170C
  c->r[4]=c->r[30]+0x00000004u; // 800F1710
  c->r[5]=c->r[1]+0x000000A8u; // 800F1714
  c->r[6]=0u+0x00000001u; // 800F1718
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F171C
  c->lr=0x800F1724u; f_80257018(c); // 800F1720
  c->r[8]=0u+0x803A0000u; // 800F1724
  {uint32_t ea=c->r[8]+0xFFFFEE6Cu; c->r[7]=R32(ea); c->r[8]=ea;} // 800F1728
  c->r[3]=c->r[1]+0x000000A8u; // 800F172C
  c->r[4]=c->r[1]+0x0000002Cu; // 800F1730
  c->r[6]=R32(c->r[8]+0x00000004u); // 800F1734
  c->r[5]=c->r[1]+0x00000038u; // 800F1738
  c->r[0]=R32(c->r[8]+0x00000008u); // 800F173C
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800F1740
  W32(c->r[1]+0x00000030u,c->r[6]); // 800F1744
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F1748
  c->lr=0x800F1750u; f_80296750(c); // 800F174C
  c->r[8]=R32(c->r[1]+0x00000038u); // 800F1750
  c->r[9]=0u+0x00000000u; // 800F1754
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 800F1758
  c->r[4]=c->r[28]|c->r[28]; // 800F175C
  c->r[0]=R32(c->r[1]+0x00000040u); // 800F1760
  c->r[3]=c->r[29]+0xFFFFC848u; // 800F1764
  W32(c->r[1]+0x00000020u,c->r[9]); // 800F1768
  c->r[5]=c->r[1]+0x00000014u; // 800F176C
  c->r[6]=c->r[1]+0x00000008u; // 800F1770
  W32(c->r[1]+0x00000024u,c->r[9]); // 800F1774
  W32(c->r[1]+0x00000028u,c->r[9]); // 800F1778
  W32(c->r[1]+0x00000008u,c->r[9]); // 800F177C
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 800F1780
  W32(c->r[1]+0x00000010u,c->r[9]); // 800F1784
  W32(c->r[1]+0x00000014u,c->r[8]); // 800F1788
  W32(c->r[1]+0x00000018u,c->r[7]); // 800F178C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F1790
  c->lr=0x800F1798u; f_8018DBD0(c); // 800F1794
L_800F1798:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F1798
  c->r[0]=0u+0x00000000u; // 800F179C
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F17A0
  c->r[3]=c->r[31]|c->r[31]; // 800F17A4
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800F17A8
  c->r[5]=0u+0x00000001u; // 800F17AC
  c->f[2]=c->f[1]; // 800F17B0
  c->r[6]=0u+0x00000001u; // 800F17B4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F17B8
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F17BC
  c->r[12]=R32(c->r[12]+0x00000064u); // 800F17C0
  c->ctr=c->r[12]; // 800F17C4
  if (true) { c->lr=0x800F17CCu; dispatch(c,c->ctr); } // 800F17C8
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F17CC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F17D0
  c->lr=0x800F17D8u; f_802501B0(c); // 800F17D4
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F17D8
  cmpu(c,0,c->r[4],0x000000FFu); // 800F17DC
  if (crb(c,2)) { goto L_800F17F8; } // 800F17E0
  c->r[3]=0u+0x80550000u; // 800F17E4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F17E8
  c->lr=0x800F17F0u; f_8018D694(c); // 800F17EC
  c->r[0]=0u+0x000000FFu; // 800F17F0
  W8(c->r[31]+0x00000075u,c->r[0]); // 800F17F4
L_800F17F8:;
  c->r[0]=0u+0x00000000u; // 800F17F8
  W8(c->r[31]+0x00000028u,c->r[0]); // 800F17FC
  goto L_800F190C; // 800F1800
L_800F1804:;
  c->r[0]=c->r[3]+0x00000001u; // 800F1804
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1808
  W8(c->r[31]+0x00000028u,c->r[0]); // 800F180C
  c->r[3]=c->r[31]|c->r[31]; // 800F1810
  c->f[2]=c->f[1]; // 800F1814
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F1818
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F181C
  c->r[5]=0u+0x00000002u; // 800F1820
  c->r[6]=0u+0x00000001u; // 800F1824
  c->r[12]=R32(c->r[12]+0x00000064u); // 800F1828
  c->ctr=c->r[12]; // 800F182C
  if (true) { c->lr=0x800F1834u; dispatch(c,c->ctr); } // 800F1830
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F1834
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F1838
  c->lr=0x800F1840u; f_802501B0(c); // 800F183C
  c->r[0]=0u+0x000000FFu; // 800F1840
  W16(c->r[31]+0x00000078u,c->r[0]); // 800F1844
  goto L_800F190C; // 800F1848
L_800F184C:;
  c->r[3]=R16(c->r[31]+0x00000078u); // 800F184C
  cmpu(c,0,c->r[3],0x00000004u); // 800F1850
  if (crb(c,1)) { goto L_800F1880; } // 800F1854
  c->r[0]=0u+0x00000000u; // 800F1858
  c->r[3]=0u+0x80550000u; // 800F185C
  W16(c->r[31]+0x00000078u,c->r[0]); // 800F1860
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F1864
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F1868
  c->r[5]=0u+0x00000000u; // 800F186C
  c->lr=0x800F1874u; f_8018EBA0(c); // 800F1870
  c->r[0]=0u+0x000000FFu; // 800F1874
  W8(c->r[31]+0x00000075u,c->r[0]); // 800F1878
  goto L_800F189C; // 800F187C
L_800F1880:;
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800F1880
  c->r[3]=0u+0x80550000u; // 800F1884
  W16(c->r[31]+0x00000078u,c->r[0]); // 800F1888
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F188C
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F1890
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800F1894
  c->lr=0x800F189Cu; f_8018EBA0(c); // 800F1898
L_800F189C:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F189C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F18A0
  c->lr=0x800F18A8u; f_802501B0(c); // 800F18A4
  cmps(c,0,(int32_t)c->r[3],0); // 800F18A8
  if (crb(c,2)) { goto L_800F190C; } // 800F18AC
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F18B0
  c->r[30]=0u+0x00000000u; // 800F18B4
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F18B8
  c->r[3]=c->r[31]|c->r[31]; // 800F18BC
  W8(c->r[4]+0x0000001Cu,c->r[30]); // 800F18C0
  c->r[5]=0u+0x00000001u; // 800F18C4
  c->f[2]=c->f[1]; // 800F18C8
  c->r[6]=0u+0x00000001u; // 800F18CC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F18D0
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F18D4
  c->r[12]=R32(c->r[12]+0x00000064u); // 800F18D8
  c->ctr=c->r[12]; // 800F18DC
  if (true) { c->lr=0x800F18E4u; dispatch(c,c->ctr); } // 800F18E0
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F18E4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F18E8
  c->lr=0x800F18F0u; f_802501B0(c); // 800F18EC
  c->r[3]=0u+0x80550000u; // 800F18F0
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F18F4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F18F8
  c->lr=0x800F1900u; f_8018D694(c); // 800F18FC
  c->r[0]=0u+0x000000FFu; // 800F1900
  W8(c->r[31]+0x00000028u,c->r[30]); // 800F1904
  W8(c->r[31]+0x00000075u,c->r[0]); // 800F1908
L_800F190C:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F190C
  cmps(c,0,(int32_t)c->r[4],0); // 800F1910
  if (crb(c,2)) { goto L_800F196C; } // 800F1914
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 800F1918
  cmps(c,0,(int32_t)c->r[0],0); // 800F191C
  if (crb(c,2)) { goto L_800F196C; } // 800F1920
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F1924
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800F1928
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800F192C
  c->r[0]=R8(c->r[31]+0x00000028u); // 800F1930
  cmps(c,0,(int32_t)c->r[0],0); // 800F1934
  if (!crb(c,2)) { goto L_800F1948; } // 800F1938
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F193C
  c->r[0]=0u+0x00000000u; // 800F1940
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800F1944
L_800F1948:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F1948
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F194C
  c->lr=0x800F1954u; f_802501B0(c); // 800F1950
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F1954
  c->r[4]=c->r[3]+0x000000B0u; // 800F1958
  c->lr=0x800F1960u; f_80250F18(c); // 800F195C
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F1960
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F1964
  c->lr=0x800F196Cu; f_8025037C(c); // 800F1968
L_800F196C:;
  c->r[0]=R8(c->r[31]+0x00000074u); // 800F196C
  cmpu(c,0,c->r[0],0x000000FFu); // 800F1970
  if (crb(c,2)) { goto L_800F19DC; } // 800F1974
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F1978
  c->r[4]=0u+0x803A0000u; // 800F197C
  c->r[4]=c->r[4]+0xFFFFEE84u; // 800F1980
  c->r[5]=c->r[1]+0x00000078u; // 800F1984
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F1988
  c->r[4]=c->r[4]+0x00000004u; // 800F198C
  c->r[6]=0u+0x00000001u; // 800F1990
  c->lr=0x800F1998u; f_80257018(c); // 800F1994
  c->r[30]=0u+0x80550000u; // 800F1998
  c->r[4]=R8(c->r[31]+0x00000074u); // 800F199C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800F19A0
  c->r[5]=c->r[1]+0x00000078u; // 800F19A4
  c->lr=0x800F19ACu; f_8018DEB8(c); // 800F19A8
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800F19AC
  cmps(c,0,(int32_t)c->r[0],0); // 800F19B0
  if (!crb(c,2)) { goto L_800F19CC; } // 800F19B4
  c->r[4]=R8(c->r[31]+0x00000074u); // 800F19B8
  c->r[3]=c->r[30]+0xFFFFC848u; // 800F19BC
  c->r[5]=0u+0x00000001u; // 800F19C0
  c->lr=0x800F19C8u; f_8018E2D4(c); // 800F19C4
  goto L_800F19DC; // 800F19C8
L_800F19CC:;
  c->r[4]=R8(c->r[31]+0x00000074u); // 800F19CC
  c->r[3]=c->r[30]+0xFFFFC848u; // 800F19D0
  c->r[5]=0u+0x00000000u; // 800F19D4
  c->lr=0x800F19DCu; f_8018E2D4(c); // 800F19D8
L_800F19DC:;
  c->r[0]=R8(c->r[31]+0x00000075u); // 800F19DC
  cmpu(c,0,c->r[0],0x000000FFu); // 800F19E0
  if (crb(c,2)) { goto L_800F1A98; } // 800F19E4
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F19E8
  c->r[4]=0u+0x803A0000u; // 800F19EC
  c->r[4]=c->r[4]+0xFFFFEE84u; // 800F19F0
  c->r[5]=c->r[1]+0x00000048u; // 800F19F4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F19F8
  c->r[4]=c->r[4]+0x00000004u; // 800F19FC
  c->r[6]=0u+0x00000001u; // 800F1A00
  c->lr=0x800F1A08u; f_80257018(c); // 800F1A04
  c->r[30]=0u+0x80550000u; // 800F1A08
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F1A0C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800F1A10
  c->r[5]=c->r[1]+0x00000048u; // 800F1A14
  c->lr=0x800F1A1Cu; f_8018DEB8(c); // 800F1A18
  c->r[3]=0u+0x80620000u; // 800F1A1C
  c->r[4]=0u+0x00000026u; // 800F1A20
  c->r[3]=c->r[3]+0x00007688u; // 800F1A24
  c->r[3]=R32(c->r[3]+0x00000014u); // 800F1A28
  c->lr=0x800F1A30u; f_80037670(c); // 800F1A2C
  cmps(c,0,(int32_t)c->r[3],0); // 800F1A30
  if (crb(c,2)) { goto L_800F1A4C; } // 800F1A34
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F1A38
  c->r[3]=c->r[30]+0xFFFFC848u; // 800F1A3C
  c->r[5]=0u+0x00000001u; // 800F1A40
  c->lr=0x800F1A48u; f_8018E2D4(c); // 800F1A44
  goto L_800F1A98; // 800F1A48
L_800F1A4C:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F1A4C
  cmps(c,0,(int32_t)c->r[3],0); // 800F1A50
  if (crb(c,2)) { goto L_800F1A98; } // 800F1A54
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800F1A58
  cmps(c,0,(int32_t)c->r[0],0); // 800F1A5C
  if (crb(c,2)) { goto L_800F1A84; } // 800F1A60
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800F1A64
  cmps(c,0,(int32_t)c->r[0],0); // 800F1A68
  if (crb(c,2)) { goto L_800F1A84; } // 800F1A6C
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F1A70
  c->r[3]=c->r[30]+0xFFFFC848u; // 800F1A74
  c->r[5]=0u+0x00000000u; // 800F1A78
  c->lr=0x800F1A80u; f_8018E2D4(c); // 800F1A7C
  goto L_800F1A98; // 800F1A80
L_800F1A84:;
  c->r[3]=0u+0x80550000u; // 800F1A84
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F1A88
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F1A8C
  c->r[5]=0u+0x00000001u; // 800F1A90
  c->lr=0x800F1A98u; f_8018E2D4(c); // 800F1A94
L_800F1A98:;
  c->r[3]=c->r[31]|c->r[31]; // 800F1A98
  c->lr=0x800F1AA0u; f_800F25D0(c); // 800F1A9C
  c->r[0]=R32(c->r[1]+0x00000124u); // 800F1AA0
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800F1AA4
  c->r[30]=R32(c->r[1]+0x00000118u); // 800F1AA8
  c->r[29]=R32(c->r[1]+0x00000114u); // 800F1AAC
  c->r[28]=R32(c->r[1]+0x00000110u); // 800F1AB0
  c->lr=c->r[0]; // 800F1AB4
  c->r[1]=c->r[1]+0x00000120u; // 800F1AB8
  return; // 800F1ABC
}

// fn_800F1AC0
void f_800F1AC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1AC0
  c->r[0]=c->lr; // 800F1AC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1AC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1ACC
  c->r[31]=c->r[3]|c->r[3]; // 800F1AD0
  c->r[4]=R8(c->r[3]+0x00000074u); // 800F1AD4
  cmpu(c,0,c->r[4],0x000000FFu); // 800F1AD8
  if (crb(c,2)) { goto L_800F1AF4; } // 800F1ADC
  c->r[3]=0u+0x80550000u; // 800F1AE0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F1AE4
  c->lr=0x800F1AECu; f_8018D694(c); // 800F1AE8
  c->r[0]=0u+0x000000FFu; // 800F1AEC
  W8(c->r[31]+0x00000074u,c->r[0]); // 800F1AF0
L_800F1AF4:;
  c->r[3]=c->r[31]|c->r[31]; // 800F1AF4
  c->lr=0x800F1AFCu; f_801F4C78(c); // 800F1AF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1AFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1B00
  c->lr=c->r[0]; // 800F1B04
  c->r[1]=c->r[1]+0x00000010u; // 800F1B08
  return; // 800F1B0C
}

// fn_800F1B10
void f_800F1B10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1B10
  c->r[0]=c->lr; // 800F1B14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1B18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1B1C
  c->r[31]=c->r[3]|c->r[3]; // 800F1B20
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F1B24
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F1B28
  c->lr=0x800F1B30u; f_802501B0(c); // 800F1B2C
  c->r[3]=c->r[31]|c->r[31]; // 800F1B30
  c->r[4]=0u+0x00000000u; // 800F1B34
  c->lr=0x800F1B3Cu; f_801F5244(c); // 800F1B38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1B3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1B40
  c->lr=c->r[0]; // 800F1B44
  c->r[1]=c->r[1]+0x00000010u; // 800F1B48
  return; // 800F1B4C
}

// fn_800F1B50
void f_800F1B50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1B50
  c->r[0]=c->lr; // 800F1B54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1B58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1B5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1B60
  c->r[30]=c->r[3]|c->r[3]; // 800F1B64
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F1B68
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F1B6C
  c->lr=0x800F1B74u; f_802501B0(c); // 800F1B70
  c->r[3]=c->r[30]|c->r[30]; // 800F1B74
  c->r[4]=0u+0x00000000u; // 800F1B78
  c->lr=0x800F1B80u; f_801F5244(c); // 800F1B7C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F1B80
  c->r[3]=c->r[30]+0x0000002Cu; // 800F1B84
  c->r[4]=c->r[4]+0x0000005Cu; // 800F1B88
  c->lr=0x800F1B90u; f_800361A0(c); // 800F1B8C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F1B90
  c->r[3]=c->r[30]|c->r[30]; // 800F1B94
  c->lr=0x800F1B9Cu; f_801F5418(c); // 800F1B98
  cmps(c,0,(int32_t)c->r[3],0); // 800F1B9C
  if (!crb(c,0)) { goto L_800F1BD8; } // 800F1BA0
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800F1BA4
  c->r[3]=0u+0x00000001u; // 800F1BA8
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F1BAC
  c->r[3]=c->r[30]|c->r[30]; // 800F1BB0
  c->r[0]=c->r[0]|0x00000080u; // 800F1BB4
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1BB8
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800F1BBC
  c->r[4]=0u+0x00000064u; // 800F1BC0
  c->r[5]=0u+0x00000000u; // 800F1BC4
  c->r[6]=0u+0x00000000u; // 800F1BC8
  c->r[7]=0u+0x00000000u; // 800F1BCC
  c->lr=0x800F1BD4u; f_801F4D44(c); // 800F1BD0
  goto L_800F1C40; // 800F1BD4
L_800F1BD8:;
  c->r[31]=0u+0x805D0000u; // 800F1BD8
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F1BDC
  c->lr=0x800F1BE4u; f_800447E4(c); // 800F1BE0
  cmpu(c,0,c->r[3],0x00000001u); // 800F1BE4
  if (!crb(c,2)) { goto L_800F1BF8; } // 800F1BE8
  c->r[0]=0u+0x00000000u; // 800F1BEC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F1BF0
  goto L_800F1C18; // 800F1BF4
L_800F1BF8:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F1BF8
  c->r[0]=R8(c->r[30]+0x00000077u); // 800F1BFC
  c->r[3]=R8(c->r[3]+0x0000006Fu); // 800F1C00
  cmps(c,0,(int32_t)c->r[0],0); // 800F1C04
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F1C08
  if (crb(c,2)) { goto L_800F1C18; } // 800F1C0C
  c->r[0]=0u+0x00000000u; // 800F1C10
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F1C14
L_800F1C18:;
  c->r[3]=c->r[30]|c->r[30]; // 800F1C18
  c->lr=0x800F1C20u; f_801F5B14(c); // 800F1C1C
  c->r[4]=R8(c->r[30]+0x00000074u); // 800F1C20
  cmpu(c,0,c->r[4],0x000000FFu); // 800F1C24
  if (crb(c,2)) { goto L_800F1C40; } // 800F1C28
  c->r[3]=0u+0x80550000u; // 800F1C2C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F1C30
  c->lr=0x800F1C38u; f_8018D694(c); // 800F1C34
  c->r[0]=0u+0x000000FFu; // 800F1C38
  W8(c->r[30]+0x00000074u,c->r[0]); // 800F1C3C
L_800F1C40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1C40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1C44
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1C48
  c->lr=c->r[0]; // 800F1C4C
  c->r[1]=c->r[1]+0x00000010u; // 800F1C50
  return; // 800F1C54
}

// fn_800F1C58
void f_800F1C58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1C58
  c->r[0]=c->lr; // 800F1C5C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F1C60
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F1C64
  c->r[31]=c->r[3]|c->r[3]; // 800F1C68
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F1C6C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F1C70
  c->lr=0x800F1C78u; f_802501B0(c); // 800F1C74
  c->r[3]=c->r[31]+0x00000038u; // 800F1C78
  c->r[4]=c->r[31]+0x0000002Cu; // 800F1C7C
  c->lr=0x800F1C84u; f_800361A0(c); // 800F1C80
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1C84
  c->r[3]=0u+0x80550000u; // 800F1C88
  c->r[3]=c->r[3]+0x00003D60u; // 800F1C8C
  c->r[4]=c->r[31]+0x00000038u; // 800F1C90
  c->f[2]=c->f[1]; // 800F1C94
  c->r[5]=c->r[1]+0x00000008u; // 800F1C98
  c->f[3]=c->f[1]; // 800F1C9C
  c->r[6]=0u+0x00000000u; // 800F1CA0
  c->r[7]=0u+0x00000000u; // 800F1CA4
  c->lr=0x800F1CACu; f_801D5488(c); // 800F1CA8
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F1CAC
  c->r[3]=c->r[31]+0x00000060u; // 800F1CB0
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1CB4
  c->r[4]=c->r[5]+0x00000068u; // 800F1CB8
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800F1CBC
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1CC0
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800F1CC4
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1CC8
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800F1CCC
  c->lr=0x800F1CD4u; f_800361A0(c); // 800F1CD0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F1CD4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F1CD8
  c->lr=0x800F1CE0u; f_802501B0(c); // 800F1CDC
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800F1CE0
  c->r[0]=0u+0x00000001u; // 800F1CE4
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1CE8
  c->r[4]=c->r[31]+0x0000002Cu; // 800F1CEC
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1CF0
  c->r[3]=c->r[3]|0x00002000u; // 800F1CF4
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800F1CF8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F1CFC
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800F1D00
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800F1D04
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800F1D08
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F1D0C
  c->r[3]=c->r[3]+0x0000005Cu; // 800F1D10
  c->lr=0x800F1D18u; f_800361A0(c); // 800F1D14
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1D18
  c->r[4]=0u+0x00000040u; // 800F1D1C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F1D20
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800F1D24
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F1D28
  c->r[3]=c->r[3]+0x0000001Cu; // 800F1D2C
  c->lr=0x800F1D34u; f_802518A4(c); // 800F1D30
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F1D34
  c->r[4]=0u+0x00000006u; // 800F1D38
  c->r[3]=c->r[3]+0x0000001Cu; // 800F1D3C
  c->lr=0x800F1D44u; f_80251824(c); // 800F1D40
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F1D44
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F1D48
  c->lr=0x800F1D50u; f_802501B0(c); // 800F1D4C
  c->r[0]=0u+0x00000000u; // 800F1D50
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F1D54
  W8(c->r[31]+0x00000076u,c->r[0]); // 800F1D58
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800F1D5C
  cmps(c,0,(int32_t)c->r[0],0); // 800F1D60
  if (crb(c,2)) { goto L_800F1E0C; } // 800F1D64
  c->r[3]=c->r[3]+0x00000068u; // 800F1D68
  c->r[4]=c->r[31]+0x00000060u; // 800F1D6C
  c->lr=0x800F1D74u; f_800361A0(c); // 800F1D70
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F1D74
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F1D78
  c->lr=0x800F1D80u; f_8025037C(c); // 800F1D7C
  c->r[6]=R32(c->r[31]+0x00000394u); // 800F1D80
  c->r[3]=c->r[1]+0x00000024u; // 800F1D84
  c->r[4]=c->r[31]+0x00000060u; // 800F1D88
  c->r[5]=c->r[1]+0x00000030u; // 800F1D8C
  c->r[6]=c->r[6]+0x000000B0u; // 800F1D90
  c->r[7]=0u+0x00000000u; // 800F1D94
  c->lr=0x800F1D9Cu; f_8002BE64(c); // 800F1D98
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800F1D9C
  c->r[3]=0u+0x805D0000u; // 800F1DA0
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F1DA4
  c->r[3]=c->r[3]+0x00003F6Cu; // 800F1DA8
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1DAC
  c->r[4]=c->r[31]|c->r[31]; // 800F1DB0
  W32(c->r[1]+0x00000018u,c->r[5]); // 800F1DB4
  c->r[7]=c->r[1]+0x00000018u; // 800F1DB8
  c->r[6]=0u+0x00000038u; // 800F1DBC
  c->r[8]=0u+0x00000000u; // 800F1DC0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F1DC4
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F1DC8
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F1DCC
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F1DD0
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F1DD4
  c->lr=0x800F1DDCu; f_801FA6A4(c); // 800F1DD8
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800F1DDC
  cmps(c,0,(int32_t)c->r[0],0); // 800F1DE0
  if (crb(c,2)) { goto L_800F1DF4; } // 800F1DE4
  c->r[3]=c->r[31]+0x00000044u; // 800F1DE8
  c->r[4]=c->r[31]+0x000003CCu; // 800F1DEC
  c->lr=0x800F1DF4u; f_800361A0(c); // 800F1DF0
L_800F1DF4:;
  c->r[6]=0u+0x803A0000u; // 800F1DF4
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F1DF8
  c->r[5]=c->r[31]+0x00000044u; // 800F1DFC
  c->r[4]=0u+0x00000000u; // 800F1E00
  c->r[6]=c->r[6]+0xFFFFEE60u; // 800F1E04
  c->lr=0x800F1E0Cu; f_801FBEC0(c); // 800F1E08
L_800F1E0C:;
  c->r[3]=c->r[31]|c->r[31]; // 800F1E0C
  c->r[4]=0u+0x00000000u; // 800F1E10
  c->lr=0x800F1E18u; f_801F7C00(c); // 800F1E14
  c->r[7]=0u+0x803D0000u; // 800F1E18
  {uint32_t ea=c->r[7]+0x00004BB0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F1E1C
  c->r[3]=c->r[31]|c->r[31]; // 800F1E20
  c->r[4]=c->r[1]+0x0000000Cu; // 800F1E24
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F1E28
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F1E2C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F1E30
  W32(c->r[1]+0x00000010u,c->r[5]); // 800F1E34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1E38
  c->lr=0x800F1E40u; f_800F1E54(c); // 800F1E3C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F1E40
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F1E44
  c->lr=c->r[0]; // 800F1E48
  c->r[1]=c->r[1]+0x00000050u; // 800F1E4C
  return; // 800F1E50
}

// fn_800F1E54
void f_800F1E54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1E54
  c->r[0]=c->lr; // 800F1E58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1E5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1E60
  c->r[31]=c->r[4]|c->r[4]; // 800F1E64
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1E68
  c->r[30]=c->r[3]|c->r[3]; // 800F1E6C
  c->r[3]=c->r[31]|c->r[31]; // 800F1E70
  c->lr=0x800F1E78u; f_802B9FDC(c); // 800F1E74
  cmps(c,0,(int32_t)c->r[3],0); // 800F1E78
  if (crb(c,2)) { goto L_800F1E98; } // 800F1E7C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F1E80
  c->r[0]=R32(c->r[31]+0x00000004u); // 800F1E84
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800F1E88
  W32(c->r[30]+0x00000020u,c->r[0]); // 800F1E8C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800F1E90
  W32(c->r[30]+0x00000024u,c->r[0]); // 800F1E94
L_800F1E98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1E98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1E9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1EA0
  c->lr=c->r[0]; // 800F1EA4
  c->r[1]=c->r[1]+0x00000010u; // 800F1EA8
  return; // 800F1EAC
}

// fn_800F1EB0
void f_800F1EB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1EB0
  c->r[0]=c->lr; // 800F1EB4
  c->r[4]=0u+0x00000000u; // 800F1EB8
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F1EBC
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800F1EC0
  c->r[31]=c->r[3]|c->r[3]; // 800F1EC4
  W32(c->r[1]+0x00000088u,c->r[30]); // 800F1EC8
  W32(c->r[1]+0x00000084u,c->r[29]); // 800F1ECC
  W32(c->r[1]+0x00000080u,c->r[28]); // 800F1ED0
  c->r[3]=R32(c->r[3]+0x00000438u); // 800F1ED4
  c->lr=0x800F1EDCu; f_801FAF00(c); // 800F1ED8
  cmps(c,0,(int32_t)c->r[3],0); // 800F1EDC
  if (!crb(c,2)) { goto L_800F1F90; } // 800F1EE0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F1EE4
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800F1EE8
  if (crb(c,2)) { goto L_800F1F00; } // 800F1EEC
  c->r[3]=c->r[31]|c->r[31]; // 800F1EF0
  c->r[4]=0u+0x00000045u; // 800F1EF4
  c->lr=0x800F1EFCu; f_801F5AB4(c); // 800F1EF8
  goto L_800F1F0C; // 800F1EFC
L_800F1F00:;
  c->r[3]=c->r[31]|c->r[31]; // 800F1F00
  c->r[4]=0u+0x00000044u; // 800F1F04
  c->lr=0x800F1F0Cu; f_801F5AB4(c); // 800F1F08
L_800F1F0C:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F1F0C
  c->r[3]=c->r[31]+0x0000002Cu; // 800F1F10
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F1F14
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800F1F18
  c->r[0]=c->r[0]|0x00000004u; // 800F1F1C
  c->r[4]=c->r[4]+0x0000005Cu; // 800F1F20
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F1F24
  c->lr=0x800F1F2Cu; f_800361A0(c); // 800F1F28
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F1F2C
  c->r[3]=c->r[31]+0x00000060u; // 800F1F30
  c->r[4]=c->r[4]+0x00000068u; // 800F1F34
  c->lr=0x800F1F3Cu; f_800361A0(c); // 800F1F38
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800F1F3C
  c->r[3]=0u+0x805D0000u; // 800F1F40
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F1F44
  c->r[3]=c->r[3]+0x00006CF8u; // 800F1F48
  c->r[4]=c->r[1]+0x00000020u; // 800F1F4C
  c->r[5]=0u+0x00040000u; // 800F1F50
  W32(c->r[1]+0x00000020u,c->r[6]); // 800F1F54
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1F58
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F1F5C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F1F60
  c->lr=0x800F1F68u; f_802236F8(c); // 800F1F64
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800F1F68
  c->r[3]=c->r[31]|c->r[31]; // 800F1F6C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F1F70
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F1F74
  c->ctr=c->r[12]; // 800F1F78
  if (true) { c->lr=0x800F1F80u; dispatch(c,c->ctr); } // 800F1F7C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F1F80
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F1F84
  c->lr=0x800F1F8Cu; f_8025037C(c); // 800F1F88
  goto L_800F2124; // 800F1F8C
L_800F1F90:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F1F90
  c->r[3]=c->r[31]+0x0000002Cu; // 800F1F94
  c->r[4]=c->r[4]+0x0000005Cu; // 800F1F98
  c->lr=0x800F1FA0u; f_800361A0(c); // 800F1F9C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F1FA0
  c->r[3]=c->r[31]+0x00000060u; // 800F1FA4
  c->r[4]=c->r[4]+0x00000068u; // 800F1FA8
  c->lr=0x800F1FB0u; f_800361A0(c); // 800F1FAC
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F1FB0
  c->lr=0x800F1FB8u; f_80050BE4(c); // 800F1FB4
  cmps(c,0,(int32_t)c->r[3],0); // 800F1FB8
  if (crb(c,2)) { goto L_800F2124; } // 800F1FBC
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F1FC0
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800F1FC4
  if (crb(c,2)) { goto L_800F2124; } // 800F1FC8
  c->r[0]=R8(c->r[31]+0x00000076u); // 800F1FCC
  cmps(c,0,(int32_t)c->r[0],0); // 800F1FD0
  if (!crb(c,2)) { goto L_800F2124; } // 800F1FD4
  c->r[0]=0u+0x00000001u; // 800F1FD8
  c->r[30]=0u+0x803A0000u; // 800F1FDC
  c->r[30]=c->r[30]+0xFFFFEE84u; // 800F1FE0
  c->r[29]=0u+0x80550000u; // 800F1FE4
  W8(c->r[31]+0x00000076u,c->r[0]); // 800F1FE8
  c->r[3]=c->r[29]+0xFFFFC848u; // 800F1FEC
  c->r[4]=c->r[30]+0x00000011u; // 800F1FF0
  c->r[5]=0u+0x00000000u; // 800F1FF4
  c->r[6]=0u+0x00000000u; // 800F1FF8
  c->lr=0x800F2000u; f_8018D3E4(c); // 800F1FFC
  c->r[28]=rotl(c->r[3],0)&0x000000FFu; // 800F2000
  cmpu(c,0,c->r[28],0x000000FFu); // 800F2004
  if (crb(c,2)) { goto L_800F20B0; } // 800F2008
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F200C
  c->r[4]=c->r[30]+0x00000004u; // 800F2010
  c->r[5]=c->r[1]+0x00000050u; // 800F2014
  c->r[6]=0u+0x00000001u; // 800F2018
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F201C
  c->lr=0x800F2024u; f_80257018(c); // 800F2020
  c->r[8]=0u+0x803A0000u; // 800F2024
  {uint32_t ea=c->r[8]+0xFFFFEE78u; c->r[7]=R32(ea); c->r[8]=ea;} // 800F2028
  c->r[3]=c->r[1]+0x00000050u; // 800F202C
  c->r[4]=c->r[1]+0x00000038u; // 800F2030
  c->r[6]=R32(c->r[8]+0x00000004u); // 800F2034
  c->r[5]=c->r[1]+0x00000044u; // 800F2038
  c->r[0]=R32(c->r[8]+0x00000008u); // 800F203C
  W32(c->r[1]+0x00000038u,c->r[7]); // 800F2040
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 800F2044
  W32(c->r[1]+0x00000040u,c->r[0]); // 800F2048
  c->lr=0x800F2050u; f_80296750(c); // 800F204C
  c->r[8]=R32(c->r[1]+0x00000044u); // 800F2050
  c->r[9]=0u+0x00000000u; // 800F2054
  c->r[7]=R32(c->r[1]+0x00000048u); // 800F2058
  c->r[4]=c->r[28]|c->r[28]; // 800F205C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800F2060
  c->r[3]=c->r[29]+0xFFFFC848u; // 800F2064
  W32(c->r[1]+0x0000002Cu,c->r[9]); // 800F2068
  c->r[5]=c->r[1]+0x00000014u; // 800F206C
  c->r[6]=c->r[1]+0x00000008u; // 800F2070
  W32(c->r[1]+0x00000030u,c->r[9]); // 800F2074
  W32(c->r[1]+0x00000034u,c->r[9]); // 800F2078
  W32(c->r[1]+0x00000008u,c->r[9]); // 800F207C
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 800F2080
  W32(c->r[1]+0x00000010u,c->r[9]); // 800F2084
  W32(c->r[1]+0x00000014u,c->r[8]); // 800F2088
  W32(c->r[1]+0x00000018u,c->r[7]); // 800F208C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F2090
  c->lr=0x800F2098u; f_8018DBD0(c); // 800F2094
  c->r[3]=c->r[31]|c->r[31]; // 800F2098
  c->r[4]=0u+0x00000004u; // 800F209C
  c->r[5]=0u+0x00000044u; // 800F20A0
  c->r[6]=0u+0x00000001u; // 800F20A4
  c->r[7]=0u+0x00000001u; // 800F20A8
  c->lr=0x800F20B0u; f_8017900C(c); // 800F20AC
L_800F20B0:;
  c->r[4]=R16(c->r[31]+0x000003BEu); // 800F20B0
  c->r[0]=0u+0x00000000u; // 800F20B4
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F20B8
  c->r[3]=c->r[31]|c->r[31]; // 800F20BC
  c->r[5]=rotl(c->r[4],0)&0xFFFFBFFFu; // 800F20C0
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F20C4
  W16(c->r[31]+0x000003BEu,c->r[5]); // 800F20C8
  c->f[2]=c->f[1]; // 800F20CC
  c->r[5]=0u+0x00000001u; // 800F20D0
  c->r[6]=0u+0x00000001u; // 800F20D4
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800F20D8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F20DC
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F20E0
  c->r[12]=R32(c->r[12]+0x00000064u); // 800F20E4
  c->ctr=c->r[12]; // 800F20E8
  if (true) { c->lr=0x800F20F0u; dispatch(c,c->ctr); } // 800F20EC
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F20F0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F20F4
  c->lr=0x800F20FCu; f_802501B0(c); // 800F20F8
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F20FC
  cmpu(c,0,c->r[4],0x000000FFu); // 800F2100
  if (crb(c,2)) { goto L_800F211C; } // 800F2104
  c->r[3]=0u+0x80550000u; // 800F2108
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F210C
  c->lr=0x800F2114u; f_8018D694(c); // 800F2110
  c->r[0]=0u+0x000000FFu; // 800F2114
  W8(c->r[31]+0x00000075u,c->r[0]); // 800F2118
L_800F211C:;
  c->r[0]=0u+0x00000000u; // 800F211C
  W8(c->r[31]+0x00000028u,c->r[0]); // 800F2120
L_800F2124:;
  c->r[3]=c->r[31]|c->r[31]; // 800F2124
  c->r[4]=0u+0x00000000u; // 800F2128
  c->lr=0x800F2130u; f_801F7C00(c); // 800F212C
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F2130
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800F2134
  c->r[30]=R32(c->r[1]+0x00000088u); // 800F2138
  c->r[29]=R32(c->r[1]+0x00000084u); // 800F213C
  c->r[28]=R32(c->r[1]+0x00000080u); // 800F2140
  c->lr=c->r[0]; // 800F2144
  c->r[1]=c->r[1]+0x00000090u; // 800F2148
  return; // 800F214C
}

// fn_800F2150
void f_800F2150(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2150
  c->r[0]=c->lr; // 800F2154
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2158
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F215C
  c->r[31]=c->r[3]|c->r[3]; // 800F2160
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F2164
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F2168
  c->lr=0x800F2170u; f_802501B0(c); // 800F216C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F2170
  c->r[6]=0u+0x00000000u; // 800F2174
  c->r[0]=0u+0x00000001u; // 800F2178
  c->r[3]=c->r[31]+0x0000002Cu; // 800F217C
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800F2180
  c->r[4]=c->r[31]+0x000003CCu; // 800F2184
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F2188
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800F218C
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800F2190
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800F2194
  c->r[0]=rotl(c->r[5],0)&0xFFFFDFFFu; // 800F2198
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F219C
  c->lr=0x800F21A4u; f_800361A0(c); // 800F21A0
  c->r[3]=c->r[31]+0x00000060u; // 800F21A4
  c->r[4]=c->r[31]+0x000003D8u; // 800F21A8
  c->lr=0x800F21B0u; f_800361A0(c); // 800F21AC
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F21B0
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800F21B4
  if (crb(c,2)) { goto L_800F21CC; } // 800F21B8
  c->r[3]=c->r[31]|c->r[31]; // 800F21BC
  c->r[4]=0u+0x00000045u; // 800F21C0
  c->lr=0x800F21C8u; f_801F5AB4(c); // 800F21C4
  goto L_800F21D8; // 800F21C8
L_800F21CC:;
  c->r[3]=c->r[31]|c->r[31]; // 800F21CC
  c->r[4]=0u+0x00000044u; // 800F21D0
  c->lr=0x800F21D8u; f_801F5AB4(c); // 800F21D4
L_800F21D8:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F21D8
  c->r[3]=c->r[31]|c->r[31]; // 800F21DC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F21E0
  c->ctr=c->r[12]; // 800F21E4
  if (true) { c->lr=0x800F21ECu; dispatch(c,c->ctr); } // 800F21E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F21EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F21F0
  c->lr=c->r[0]; // 800F21F4
  c->r[1]=c->r[1]+0x00000010u; // 800F21F8
  return; // 800F21FC
}

// fn_800F2200
void f_800F2200(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2200
  c->r[0]=c->lr; // 800F2204
  c->r[4]=0u+0x000000E1u; // 800F2208
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F220C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2210
  c->r[31]=c->r[3]|c->r[3]; // 800F2214
  c->r[3]=c->r[3]+0x00000210u; // 800F2218
  c->lr=0x800F2220u; f_80221630(c); // 800F221C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2220
  if (!crb(c,2)) { goto L_800F2230; } // 800F2224
  c->r[3]=0u+0x00000000u; // 800F2228
  goto L_800F2270; // 800F222C
L_800F2230:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F2230
  c->r[3]=0u+0x000004DEu; // 800F2234
  c->r[5]=0u+0x00000000u; // 800F2238
  c->r[4]=c->r[4]+0x0000010Cu; // 800F223C
  c->lr=0x800F2244u; f_8024EE50(c); // 800F2240
  cmps(c,0,(int32_t)c->r[3],0); // 800F2244
  if (crb(c,2)) { goto L_800F2254; } // 800F2248
  c->r[3]=0u+0x00000000u; // 800F224C
  goto L_800F2270; // 800F2250
L_800F2254:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F2254
  c->r[3]=0u+0x0000053Eu; // 800F2258
  c->r[5]=0u+0x00000000u; // 800F225C
  c->r[4]=c->r[4]+0x0000010Cu; // 800F2260
  c->lr=0x800F2268u; f_8024EE50(c); // 800F2264
  c->r[0]=cntlz(c->r[3]); // 800F2268
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F226C
L_800F2270:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2270
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2274
  c->lr=c->r[0]; // 800F2278
  c->r[1]=c->r[1]+0x00000010u; // 800F227C
  return; // 800F2280
}

// fn_800F2284
void f_800F2284(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2284
  c->r[0]=c->lr; // 800F2288
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F228C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2290
  c->r[31]=0u+0x805D0000u; // 800F2294
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F2298
  c->r[30]=c->r[3]|c->r[3]; // 800F229C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F22A0
  c->lr=0x800F22A8u; f_80045264(c); // 800F22A4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800F22A8
  cmpu(c,0,c->r[0],0x00000044u); // 800F22AC
  if (crb(c,2)) { goto L_800F22C8; } // 800F22B0
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F22B4
  c->lr=0x800F22BCu; f_80045264(c); // 800F22B8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800F22BC
  cmpu(c,0,c->r[0],0x00000045u); // 800F22C0
  if (!crb(c,2)) { goto L_800F2304; } // 800F22C4
L_800F22C8:;
  c->r[3]=0u+0x805D0000u; // 800F22C8
  c->r[3]=c->r[3]+0x00003F6Cu; // 800F22CC
  c->lr=0x800F22D4u; f_80037AF0(c); // 800F22D0
  cmpu(c,0,c->r[3],c->r[30]); // 800F22D4
  if (!crb(c,2)) { goto L_800F2304; } // 800F22D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800F22DC
  cmps(c,0,(int32_t)c->r[0],101); // 800F22E0
  if (crb(c,2)) { goto L_800F2304; } // 800F22E4
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F22E8
  c->r[3]=c->r[30]|c->r[30]; // 800F22EC
  c->r[4]=0u+0x00000065u; // 800F22F0
  c->r[5]=0u+0x00000000u; // 800F22F4
  c->r[6]=0u+0x00000000u; // 800F22F8
  c->r[7]=0u+0x00000000u; // 800F22FC
  c->lr=0x800F2304u; f_801F4D44(c); // 800F2300
L_800F2304:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2304
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2308
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F230C
  c->lr=c->r[0]; // 800F2310
  c->r[1]=c->r[1]+0x00000010u; // 800F2314
  return; // 800F2318
}

// fn_800F231C
void f_800F231C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F231C
  c->r[0]=c->lr; // 800F2320
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F2324
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F2328
  c->r[31]=0u+0x803D0000u; // 800F232C
  c->r[31]=c->r[31]+0x00004BB0u; // 800F2330
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F2334
  c->r[30]=c->r[3]|c->r[3]; // 800F2338
  c->lr=0x800F2340u; f_801F4F28(c); // 800F233C
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800F2340
  cmps(c,0,(int32_t)c->r[0],101); // 800F2344
  if (crb(c,2)) { goto L_800F2398; } // 800F2348
  if (!crb(c,0)) { goto L_800F235C; } // 800F234C
  cmps(c,0,(int32_t)c->r[0],100); // 800F2350
  if (!crb(c,0)) { goto L_800F2368; } // 800F2354
  goto L_800F23F4; // 800F2358
L_800F235C:;
  cmps(c,0,(int32_t)c->r[0],103); // 800F235C
  if (!crb(c,0)) { goto L_800F23F4; } // 800F2360
  goto L_800F23C8; // 800F2364
L_800F2368:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F2368
  c->r[5]=c->r[31]+0x0000000Cu; // 800F236C
  c->r[3]=c->r[30]|c->r[30]; // 800F2370
  c->r[4]=c->r[1]+0x00000020u; // 800F2374
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800F2378
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F237C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F2380
  W32(c->r[1]+0x00000020u,c->r[7]); // 800F2384
  W32(c->r[1]+0x00000024u,c->r[6]); // 800F2388
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F238C
  c->lr=0x800F2394u; f_800F1E54(c); // 800F2390
  goto L_800F23F4; // 800F2394
L_800F2398:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F2398
  c->r[5]=c->r[31]+0x00000018u; // 800F239C
  c->r[3]=c->r[30]|c->r[30]; // 800F23A0
  c->r[4]=c->r[1]+0x00000014u; // 800F23A4
  c->r[7]=R32(c->r[31]+0x00000018u); // 800F23A8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F23AC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F23B0
  W32(c->r[1]+0x00000014u,c->r[7]); // 800F23B4
  W32(c->r[1]+0x00000018u,c->r[6]); // 800F23B8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F23BC
  c->lr=0x800F23C4u; f_800F1E54(c); // 800F23C0
  goto L_800F23F4; // 800F23C4
L_800F23C8:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F23C8
  c->r[5]=c->r[31]+0x00000024u; // 800F23CC
  c->r[3]=c->r[30]|c->r[30]; // 800F23D0
  c->r[4]=c->r[1]+0x00000008u; // 800F23D4
  c->r[7]=R32(c->r[31]+0x00000024u); // 800F23D8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F23DC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F23E0
  W32(c->r[1]+0x00000008u,c->r[7]); // 800F23E4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F23E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F23EC
  c->lr=0x800F23F4u; f_800F1E54(c); // 800F23F0
L_800F23F4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F23F4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F23F8
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F23FC
  c->lr=c->r[0]; // 800F2400
  c->r[1]=c->r[1]+0x00000040u; // 800F2404
  return; // 800F2408
}

// fn_800F240C
void f_800F240C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F240C
  c->r[0]=c->lr; // 800F2410
  c->r[7]=0u+0x803D0000u; // 800F2414
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2418
  c->r[4]=c->r[1]+0x00000008u; // 800F241C
  {uint32_t ea=c->r[7]+0x00004BE0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F2420
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F2424
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F2428
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F242C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F2430
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F2434
  c->lr=0x800F243Cu; f_800F1E54(c); // 800F2438
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F243C
  c->lr=c->r[0]; // 800F2440
  c->r[1]=c->r[1]+0x00000020u; // 800F2444
  return; // 800F2448
}

// fn_800F244C
void f_800F244C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F244C
  c->r[0]=c->lr; // 800F2450
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F2454
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800F2458
  W32(c->r[1]+0x00000088u,c->r[30]); // 800F245C
  c->r[30]=c->r[3]|c->r[3]; // 800F2460
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F2464
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800F2468
  cmps(c,0,(int32_t)c->r[0],0); // 800F246C
  if (!crb(c,2)) { goto L_800F24FC; } // 800F2470
  c->r[3]=R16(c->r[3]+0x000003BEu); // 800F2474
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800F2478
  if (crb(c,2)) { goto L_800F24FC; } // 800F247C
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800F2480
  cmps(c,0,(int32_t)c->r[0],128); // 800F2484
  if (!crb(c,2)) { goto L_800F24B0; } // 800F2488
  c->r[3]=0u+0x80620000u; // 800F248C
  c->r[3]=c->r[3]+0x00007688u; // 800F2490
  c->r[3]=R32(c->r[3]+0x00000014u); // 800F2494
  cmps(c,0,(int32_t)c->r[3],0); // 800F2498
  if (crb(c,2)) { goto L_800F24B0; } // 800F249C
  c->r[4]=0u+0x00000002u; // 800F24A0
  c->lr=0x800F24A8u; f_80037670(c); // 800F24A4
  cmps(c,0,(int32_t)c->r[3],0); // 800F24A8
  if (!crb(c,2)) { goto L_800F24FC; } // 800F24AC
L_800F24B0:;
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F24B0
  c->r[3]=c->r[1]+0x00000008u; // 800F24B4
  c->r[4]=c->r[30]+0x0000002Cu; // 800F24B8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800F24BC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800F24C0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800F24C4
  c->lr=0x800F24CCu; f_800361A0(c); // 800F24C8
  c->r[31]=0u+0x80550000u; // 800F24CC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F24D0
  c->r[31]=c->r[31]+0x00003D60u; // 800F24D4
  c->r[5]=c->r[30]|c->r[30]; // 800F24D8
  c->r[3]=c->r[31]+0x00000010u; // 800F24DC
  c->r[6]=c->r[1]+0x00000008u; // 800F24E0
  c->r[7]=c->r[1]+0x00000020u; // 800F24E4
  c->r[4]=0u+0x000001FFu; // 800F24E8
  c->lr=0x800F24F0u; f_80226910(c); // 800F24EC
  c->r[3]=c->r[31]+0x00000010u; // 800F24F0
  c->r[4]=c->r[1]+0x00000020u; // 800F24F4
  c->lr=0x800F24FCu; f_80226D68(c); // 800F24F8
L_800F24FC:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F24FC
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800F2500
  c->r[30]=R32(c->r[1]+0x00000088u); // 800F2504
  c->lr=c->r[0]; // 800F2508
  c->r[1]=c->r[1]+0x00000090u; // 800F250C
  return; // 800F2510
}

// fn_800F2514
void f_800F2514(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800F2514
  W8(c->r[3]+0x00000077u,c->r[0]); // 800F2518
  return; // 800F251C
}

// fn_800F2520
void f_800F2520(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800F2520
  W8(c->r[3]+0x00000077u,c->r[0]); // 800F2524
  return; // 800F2528
}

// fn_800F252C
void f_800F252C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F252C
  c->r[0]=c->lr; // 800F2530
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2534
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2538
  c->r[31]=c->r[3]|c->r[3]; // 800F253C
  c->r[3]=c->r[3]+0x00000210u; // 800F2540
  c->lr=0x800F2548u; f_8004BAD4(c); // 800F2544
  cmps(c,0,(int32_t)c->r[3],0); // 800F2548
  if (crb(c,2)) { goto L_800F25BC; } // 800F254C
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F2550
  c->r[4]=c->r[31]|c->r[31]; // 800F2554
  c->r[3]=c->r[31]+0x00000210u; // 800F2558
  c->r[0]=c->r[0]|0xAA000000u; // 800F255C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F2560
  c->lr=0x800F2568u; f_80043E44(c); // 800F2564
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F2568
  c->r[3]=c->r[31]+0x00000210u; // 800F256C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F2570
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F2574
  c->lr=0x800F257Cu; f_80043E34(c); // 800F2578
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F257C
  c->r[4]=0u+0x803A0000u; // 800F2580
  c->r[4]=c->r[4]+0xFFFFEE84u; // 800F2584
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F2588
  c->r[4]=c->r[4]+0x00000015u; // 800F258C
  c->lr=0x800F2594u; f_80256EC4(c); // 800F2590
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F2594
  c->r[5]=c->r[3]|c->r[3]; // 800F2598
  c->r[3]=c->r[31]+0x00000210u; // 800F259C
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800F25A0
  c->lr=0x800F25A8u; f_8004BAC8(c); // 800F25A4
  {uint32_t ea=c->r[2]+0xFFFFA964u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F25A8
  c->r[3]=c->r[31]+0x00000210u; // 800F25AC
  c->f[2]=c->f[1]; // 800F25B0
  c->f[3]=c->f[1]; // 800F25B4
  c->lr=0x800F25BCu; f_80043E24(c); // 800F25B8
L_800F25BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F25BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F25C0
  c->lr=c->r[0]; // 800F25C4
  c->r[1]=c->r[1]+0x00000010u; // 800F25C8
  return; // 800F25CC
}

// fn_800F25D0
void f_800F25D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F25D0
  c->r[0]=c->lr; // 800F25D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F25D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F25DC
  c->r[31]=c->r[3]|c->r[3]; // 800F25E0
  c->r[3]=c->r[3]+0x00000210u; // 800F25E4
  c->lr=0x800F25ECu; f_80221698(c); // 800F25E8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F25EC
  cmps(c,0,(int32_t)c->r[3],0); // 800F25F0
  if (crb(c,2)) { goto L_800F2614; } // 800F25F4
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800F25F8
  cmps(c,0,(int32_t)c->r[0],0); // 800F25FC
  if (crb(c,2)) { goto L_800F2614; } // 800F2600
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F2604
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800F2608
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F260C
  goto L_800F2620; // 800F2610
L_800F2614:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F2614
  c->r[0]=c->r[0]|0x80000000u; // 800F2618
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F261C
L_800F2620:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2620
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2624
  c->lr=c->r[0]; // 800F2628
  c->r[1]=c->r[1]+0x00000010u; // 800F262C
  return; // 800F2630
}

// fn_800F2634
void f_800F2634(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2634
  c->r[0]=c->lr; // 800F2638
  cmps(c,0,(int32_t)c->r[3],0); // 800F263C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2640
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2644
  c->r[31]=c->r[4]|c->r[4]; // 800F2648
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F264C
  c->r[30]=c->r[3]|c->r[3]; // 800F2650
  if (crb(c,2)) { goto L_800F2670; } // 800F2654
  c->r[4]=0u+0x00000000u; // 800F2658
  c->lr=0x800F2660u; f_8026A06C(c); // 800F265C
  cmps(c,0,(int32_t)c->r[31],0); // 800F2660
  if (!crb(c,1)) { goto L_800F2670; } // 800F2664
  c->r[3]=c->r[30]|c->r[30]; // 800F2668
  c->lr=0x800F2670u; f_8026A268(c); // 800F266C
L_800F2670:;
  c->r[3]=c->r[30]|c->r[30]; // 800F2670
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2674
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F2678
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F267C
  c->lr=c->r[0]; // 800F2680
  c->r[1]=c->r[1]+0x00000010u; // 800F2684
  return; // 800F2688
}

// fn_800F268C
void f_800F268C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F268C
  c->r[0]=c->lr; // 800F2690
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2694
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800F2698
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800F269C
  c->r[4]=0u+0x00000000u; // 800F26A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F26A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F26A8
  c->r[30]=c->r[3]|c->r[3]; // 800F26AC
  c->lr=0x800F26B4u; f_801F57D0(c); // 800F26B0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F26B4
  c->r[3]=c->r[30]|c->r[30]; // 800F26B8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800F26BC
  c->ctr=c->r[12]; // 800F26C0
  if (true) { c->lr=0x800F26C8u; dispatch(c,c->ctr); } // 800F26C4
  c->r[3]=c->r[30]|c->r[30]; // 800F26C8
  c->lr=0x800F26D0u; f_801F4B94(c); // 800F26CC
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800F26D0
  c->r[5]=0u+0x00000003u; // 800F26D4
  {uint32_t ea=c->r[2]+0xFFFFA970u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F26D8
  c->r[4]=0u+0x00000062u; // 800F26DC
  c->r[7]=c->r[0]|0x00000804u; // 800F26E0
  c->r[31]=0u+0x00000001u; // 800F26E4
  c->r[0]=0u+0x00000000u; // 800F26E8
  c->r[3]=0u+0x80550000u; // 800F26EC
  W8(c->r[30]+0x0000006Cu,c->r[5]); // 800F26F0
  c->f[3]=c->f[1]; // 800F26F4
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800F26F8
  c->r[3]=c->r[3]+0x00003D60u; // 800F26FC
  W8(c->r[30]+0x0000006Du,c->r[4]); // 800F2700
  c->r[4]=c->r[30]+0x0000002Cu; // 800F2704
  {uint32_t ea=c->r[2]+0xFFFFA974u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F2708
  W16(c->r[30]+0x000003BEu,c->r[7]); // 800F270C
  c->r[5]=c->r[30]+0x00000030u; // 800F2710
  c->r[6]=0u+0x00000000u; // 800F2714
  c->r[7]=0u+0x00000000u; // 800F2718
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800F271C
  W8(c->r[30]+0x00000074u,c->r[0]); // 800F2720
  c->lr=0x800F2728u; f_801D5488(c); // 800F2724
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F2728
  c->r[3]=c->r[30]|c->r[30]; // 800F272C
  c->lr=0x800F2734u; f_801F58BC(c); // 800F2730
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F2734
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800F2738
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F273C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F2740
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800F2744
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800F2748
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800F274C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F2750
  c->lr=0x800F2758u; f_802501B0(c); // 800F2754
  c->r[3]=0u+0x805D0000u; // 800F2758
  c->r[4]=c->r[30]+0x0000002Cu; // 800F275C
  c->r[3]=c->r[3]+0x000078B0u; // 800F2760
  c->lr=0x800F2768u; f_802351CC(c); // 800F2764
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F2768
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800F276C
  c->r[3]=c->r[30]|c->r[30]; // 800F2770
  c->lr=0x800F2778u; f_801F56F4(c); // 800F2774
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F2778
  c->r[3]=c->r[30]|c->r[30]; // 800F277C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F2780
  c->ctr=c->r[12]; // 800F2784
  if (true) { c->lr=0x800F278Cu; dispatch(c,c->ctr); } // 800F2788
  c->r[3]=c->r[30]|c->r[30]; // 800F278C
  c->lr=0x800F2794u; f_800F3010(c); // 800F2790
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800F2794
  W32(c->r[30]+0x00000444u,c->r[31]); // 800F2798
  c->lr=0x800F27A0u; f_8024E174(c); // 800F279C
  W32(c->r[30]+0x00000438u,c->r[3]); // 800F27A0
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800F27A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800F27A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F27AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F27B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F27B4
  c->lr=c->r[0]; // 800F27B8
  c->r[1]=c->r[1]+0x00000020u; // 800F27BC
  return; // 800F27C0
}

// fn_800F27C4
void f_800F27C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F27C4
  c->r[0]=c->lr; // 800F27C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F27CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F27D0
  c->r[31]=c->r[3]|c->r[3]; // 800F27D4
  c->lr=0x800F27DCu; f_800F2D80(c); // 800F27D8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F27DC
  c->r[3]=c->r[31]|c->r[31]; // 800F27E0
  c->r[12]=R32(c->r[12]+0x00000068u); // 800F27E4
  c->ctr=c->r[12]; // 800F27E8
  if (true) { c->lr=0x800F27F0u; dispatch(c,c->ctr); } // 800F27EC
  c->r[3]=c->r[31]|c->r[31]; // 800F27F0
  c->lr=0x800F27F8u; f_801F4C0C(c); // 800F27F4
  c->r[3]=c->r[31]|c->r[31]; // 800F27F8
  c->lr=0x800F2800u; f_800F2F30(c); // 800F27FC
  c->r[3]=c->r[31]|c->r[31]; // 800F2800
  c->lr=0x800F2808u; f_801F56F4(c); // 800F2804
  c->r[3]=c->r[31]|c->r[31]; // 800F2808
  c->lr=0x800F2810u; f_800F30C4(c); // 800F280C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2810
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2814
  c->lr=c->r[0]; // 800F2818
  c->r[1]=c->r[1]+0x00000010u; // 800F281C
  return; // 800F2820
}

// fn_800F2824
void f_800F2824(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2824
  c->r[0]=c->lr; // 800F2828
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F282C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2830
  c->r[31]=c->r[3]|c->r[3]; // 800F2834
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F2838
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F283C
  c->lr=0x800F2844u; f_802501B0(c); // 800F2840
  c->r[3]=c->r[31]|c->r[31]; // 800F2844
  c->r[4]=0u+0x00000000u; // 800F2848
  c->lr=0x800F2850u; f_801F5244(c); // 800F284C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2850
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2854
  c->lr=c->r[0]; // 800F2858
  c->r[1]=c->r[1]+0x00000010u; // 800F285C
  return; // 800F2860
}

// fn_800F2864
void f_800F2864(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2864
  c->r[0]=c->lr; // 800F2868
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F286C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2870
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F2874
  c->r[30]=c->r[3]|c->r[3]; // 800F2878
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F287C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F2880
  c->lr=0x800F2888u; f_802501B0(c); // 800F2884
  c->r[3]=c->r[30]|c->r[30]; // 800F2888
  c->r[4]=0u+0x00000000u; // 800F288C
  c->lr=0x800F2894u; f_801F5244(c); // 800F2890
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F2894
  c->r[3]=c->r[30]+0x0000002Cu; // 800F2898
  c->r[4]=c->r[4]+0x0000005Cu; // 800F289C
  c->lr=0x800F28A4u; f_800361A0(c); // 800F28A0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F28A4
  c->r[3]=c->r[30]|c->r[30]; // 800F28A8
  c->lr=0x800F28B0u; f_801F5418(c); // 800F28AC
  cmps(c,0,(int32_t)c->r[3],0); // 800F28B0
  if (!crb(c,0)) { goto L_800F28EC; } // 800F28B4
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800F28B8
  c->r[3]=0u+0x00000001u; // 800F28BC
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F28C0
  c->r[3]=c->r[30]|c->r[30]; // 800F28C4
  c->r[0]=c->r[0]|0x00000080u; // 800F28C8
  {uint32_t ea=c->r[2]+0xFFFFA970u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F28CC
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800F28D0
  c->r[4]=0u+0x00000064u; // 800F28D4
  c->r[5]=0u+0x00000000u; // 800F28D8
  c->r[6]=0u+0x00000000u; // 800F28DC
  c->r[7]=0u+0x00000000u; // 800F28E0
  c->lr=0x800F28E8u; f_801F4D44(c); // 800F28E4
  goto L_800F2934; // 800F28E8
L_800F28EC:;
  c->r[31]=0u+0x805D0000u; // 800F28EC
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F28F0
  c->lr=0x800F28F8u; f_800447E4(c); // 800F28F4
  cmpu(c,0,c->r[3],0x00000001u); // 800F28F8
  if (!crb(c,2)) { goto L_800F290C; } // 800F28FC
  c->r[0]=0u+0x00000000u; // 800F2900
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F2904
  goto L_800F292C; // 800F2908
L_800F290C:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F290C
  c->r[0]=R8(c->r[30]+0x00000074u); // 800F2910
  c->r[3]=R8(c->r[3]+0x0000006Fu); // 800F2914
  cmps(c,0,(int32_t)c->r[0],0); // 800F2918
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F291C
  if (crb(c,2)) { goto L_800F292C; } // 800F2920
  c->r[0]=0u+0x00000000u; // 800F2924
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F2928
L_800F292C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F292C
  c->lr=0x800F2934u; f_801F5B14(c); // 800F2930
L_800F2934:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2934
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2938
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F293C
  c->lr=c->r[0]; // 800F2940
  c->r[1]=c->r[1]+0x00000010u; // 800F2944
  return; // 800F2948
}

// fn_800F294C
void f_800F294C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F294C
  c->r[0]=c->lr; // 800F2950
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F2954
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F2958
  c->r[31]=c->r[3]|c->r[3]; // 800F295C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F2960
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F2964
  c->lr=0x800F296Cu; f_802501B0(c); // 800F2968
  c->r[3]=c->r[31]+0x00000038u; // 800F296C
  c->r[4]=c->r[31]+0x0000002Cu; // 800F2970
  c->lr=0x800F2978u; f_800361A0(c); // 800F2974
  {uint32_t ea=c->r[2]+0xFFFFA970u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F2978
  c->r[3]=0u+0x80550000u; // 800F297C
  c->r[3]=c->r[3]+0x00003D60u; // 800F2980
  c->r[4]=c->r[31]+0x00000038u; // 800F2984
  c->f[2]=c->f[1]; // 800F2988
  c->r[5]=c->r[1]+0x00000008u; // 800F298C
  c->f[3]=c->f[1]; // 800F2990
  c->r[6]=0u+0x00000000u; // 800F2994
  c->r[7]=0u+0x00000000u; // 800F2998
  c->lr=0x800F29A0u; f_801D5488(c); // 800F299C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F29A0
  c->r[3]=c->r[31]+0x00000060u; // 800F29A4
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F29A8
  c->r[4]=c->r[5]+0x00000068u; // 800F29AC
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800F29B0
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F29B4
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800F29B8
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F29BC
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800F29C0
  c->lr=0x800F29C8u; f_800361A0(c); // 800F29C4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F29C8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F29CC
  c->lr=0x800F29D4u; f_802501B0(c); // 800F29D0
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800F29D4
  c->r[0]=0u+0x00000001u; // 800F29D8
  {uint32_t ea=c->r[2]+0xFFFFA978u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F29DC
  c->r[4]=c->r[31]+0x0000002Cu; // 800F29E0
  {uint32_t ea=c->r[2]+0xFFFFA97Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F29E4
  c->r[3]=c->r[3]|0x00002000u; // 800F29E8
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800F29EC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F29F0
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800F29F4
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800F29F8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800F29FC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F2A00
  c->r[3]=c->r[3]+0x0000005Cu; // 800F2A04
  c->lr=0x800F2A0Cu; f_800361A0(c); // 800F2A08
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2A0C
  c->r[4]=0u+0x00000040u; // 800F2A10
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F2A14
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800F2A18
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F2A1C
  c->r[3]=c->r[3]+0x0000001Cu; // 800F2A20
  c->lr=0x800F2A28u; f_802518A4(c); // 800F2A24
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F2A28
  c->r[4]=0u+0x00000006u; // 800F2A2C
  c->r[3]=c->r[3]+0x0000001Cu; // 800F2A30
  c->lr=0x800F2A38u; f_80251824(c); // 800F2A34
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F2A38
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F2A3C
  c->lr=0x800F2A44u; f_802501B0(c); // 800F2A40
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F2A44
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800F2A48
  cmps(c,0,(int32_t)c->r[0],0); // 800F2A4C
  if (crb(c,2)) { goto L_800F2AF8; } // 800F2A50
  c->r[3]=c->r[3]+0x00000068u; // 800F2A54
  c->r[4]=c->r[31]+0x00000060u; // 800F2A58
  c->lr=0x800F2A60u; f_800361A0(c); // 800F2A5C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F2A60
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F2A64
  c->lr=0x800F2A6Cu; f_8025037C(c); // 800F2A68
  c->r[6]=R32(c->r[31]+0x00000394u); // 800F2A6C
  c->r[3]=c->r[1]+0x00000024u; // 800F2A70
  c->r[4]=c->r[31]+0x00000060u; // 800F2A74
  c->r[5]=c->r[1]+0x00000030u; // 800F2A78
  c->r[6]=c->r[6]+0x000000B0u; // 800F2A7C
  c->r[7]=0u+0x00000000u; // 800F2A80
  c->lr=0x800F2A88u; f_8002BE64(c); // 800F2A84
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800F2A88
  c->r[3]=0u+0x805D0000u; // 800F2A8C
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F2A90
  c->r[3]=c->r[3]+0x00003F6Cu; // 800F2A94
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F2A98
  c->r[4]=c->r[31]|c->r[31]; // 800F2A9C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800F2AA0
  c->r[7]=c->r[1]+0x00000018u; // 800F2AA4
  c->r[6]=0u+0x00000039u; // 800F2AA8
  c->r[8]=0u+0x00000000u; // 800F2AAC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F2AB0
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F2AB4
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F2AB8
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F2ABC
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F2AC0
  c->lr=0x800F2AC8u; f_801FA6A4(c); // 800F2AC4
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800F2AC8
  cmps(c,0,(int32_t)c->r[0],0); // 800F2ACC
  if (crb(c,2)) { goto L_800F2AE0; } // 800F2AD0
  c->r[3]=c->r[31]+0x00000044u; // 800F2AD4
  c->r[4]=c->r[31]+0x000003CCu; // 800F2AD8
  c->lr=0x800F2AE0u; f_800361A0(c); // 800F2ADC
L_800F2AE0:;
  c->r[6]=0u+0x803A0000u; // 800F2AE0
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F2AE4
  c->r[5]=c->r[31]+0x00000044u; // 800F2AE8
  c->r[4]=0u+0x00000000u; // 800F2AEC
  c->r[6]=c->r[6]+0xFFFFEEA8u; // 800F2AF0
  c->lr=0x800F2AF8u; f_801FBEC0(c); // 800F2AF4
L_800F2AF8:;
  c->r[3]=c->r[31]|c->r[31]; // 800F2AF8
  c->r[4]=0u+0x00000000u; // 800F2AFC
  c->lr=0x800F2B04u; f_801F7C00(c); // 800F2B00
  c->r[7]=0u+0x803D0000u; // 800F2B04
  {uint32_t ea=c->r[7]+0x00004D30u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F2B08
  c->r[3]=c->r[31]|c->r[31]; // 800F2B0C
  c->r[4]=c->r[1]+0x0000000Cu; // 800F2B10
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F2B14
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F2B18
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F2B1C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800F2B20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2B24
  c->lr=0x800F2B2Cu; f_800F2B40(c); // 800F2B28
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F2B2C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F2B30
  c->lr=c->r[0]; // 800F2B34
  c->r[1]=c->r[1]+0x00000050u; // 800F2B38
  return; // 800F2B3C
}

// fn_800F2B40
void f_800F2B40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2B40
  c->r[0]=c->lr; // 800F2B44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2B48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2B4C
  c->r[31]=c->r[4]|c->r[4]; // 800F2B50
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F2B54
  c->r[30]=c->r[3]|c->r[3]; // 800F2B58
  c->r[3]=c->r[31]|c->r[31]; // 800F2B5C
  c->lr=0x800F2B64u; f_802B9FDC(c); // 800F2B60
  cmps(c,0,(int32_t)c->r[3],0); // 800F2B64
  if (crb(c,2)) { goto L_800F2B84; } // 800F2B68
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F2B6C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800F2B70
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800F2B74
  W32(c->r[30]+0x00000020u,c->r[0]); // 800F2B78
  c->r[0]=R32(c->r[31]+0x00000008u); // 800F2B7C
  W32(c->r[30]+0x00000024u,c->r[0]); // 800F2B80
L_800F2B84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2B84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2B88
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F2B8C
  c->lr=c->r[0]; // 800F2B90
  c->r[1]=c->r[1]+0x00000010u; // 800F2B94
  return; // 800F2B98
}

// fn_800F2B9C
void f_800F2B9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2B9C
  c->r[0]=c->lr; // 800F2BA0
  c->r[4]=0u+0x00000000u; // 800F2BA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2BA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F2BAC
  c->r[31]=c->r[3]|c->r[3]; // 800F2BB0
  c->r[3]=R32(c->r[3]+0x00000438u); // 800F2BB4
  c->lr=0x800F2BBCu; f_801FAF00(c); // 800F2BB8
  cmps(c,0,(int32_t)c->r[3],0); // 800F2BBC
  if (!crb(c,2)) { goto L_800F2C54; } // 800F2BC0
  c->r[3]=c->r[31]|c->r[31]; // 800F2BC4
  c->r[4]=0u+0x00000046u; // 800F2BC8
  c->lr=0x800F2BD0u; f_801F5AB4(c); // 800F2BCC
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F2BD0
  c->r[3]=c->r[31]+0x0000002Cu; // 800F2BD4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F2BD8
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800F2BDC
  c->r[0]=c->r[0]|0x00000004u; // 800F2BE0
  c->r[4]=c->r[4]+0x0000005Cu; // 800F2BE4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F2BE8
  c->lr=0x800F2BF0u; f_800361A0(c); // 800F2BEC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F2BF0
  c->r[3]=c->r[31]+0x00000060u; // 800F2BF4
  c->r[4]=c->r[4]+0x00000068u; // 800F2BF8
  c->lr=0x800F2C00u; f_800361A0(c); // 800F2BFC
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800F2C00
  c->r[3]=0u+0x805D0000u; // 800F2C04
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F2C08
  c->r[3]=c->r[3]+0x00006CF8u; // 800F2C0C
  c->r[4]=c->r[1]+0x00000008u; // 800F2C10
  c->r[5]=0u+0x00040000u; // 800F2C14
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F2C18
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F2C1C
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F2C20
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F2C24
  c->lr=0x800F2C2Cu; f_802236F8(c); // 800F2C28
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800F2C2C
  c->r[3]=c->r[31]|c->r[31]; // 800F2C30
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F2C34
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F2C38
  c->ctr=c->r[12]; // 800F2C3C
  if (true) { c->lr=0x800F2C44u; dispatch(c,c->ctr); } // 800F2C40
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F2C44
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F2C48
  c->lr=0x800F2C50u; f_8025037C(c); // 800F2C4C
  goto L_800F2C74; // 800F2C50
L_800F2C54:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F2C54
  c->r[3]=c->r[31]+0x0000002Cu; // 800F2C58
  c->r[4]=c->r[4]+0x0000005Cu; // 800F2C5C
  c->lr=0x800F2C64u; f_800361A0(c); // 800F2C60
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F2C64
  c->r[3]=c->r[31]+0x00000060u; // 800F2C68
  c->r[4]=c->r[4]+0x00000068u; // 800F2C6C
  c->lr=0x800F2C74u; f_800361A0(c); // 800F2C70
L_800F2C74:;
  c->r[3]=c->r[31]|c->r[31]; // 800F2C74
  c->r[4]=0u+0x00000000u; // 800F2C78
  c->lr=0x800F2C80u; f_801F7C00(c); // 800F2C7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2C80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F2C84
  c->lr=c->r[0]; // 800F2C88
  c->r[1]=c->r[1]+0x00000020u; // 800F2C8C
  return; // 800F2C90
}

// fn_800F2C94
void f_800F2C94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2C94
  c->r[0]=c->lr; // 800F2C98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2C9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2CA0
  c->r[31]=c->r[3]|c->r[3]; // 800F2CA4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F2CA8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F2CAC
  c->lr=0x800F2CB4u; f_802501B0(c); // 800F2CB0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F2CB4
  c->r[6]=0u+0x00000000u; // 800F2CB8
  c->r[0]=0u+0x00000001u; // 800F2CBC
  c->r[3]=c->r[31]+0x0000002Cu; // 800F2CC0
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800F2CC4
  c->r[4]=c->r[31]+0x000003CCu; // 800F2CC8
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F2CCC
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800F2CD0
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800F2CD4
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800F2CD8
  c->r[0]=rotl(c->r[5],0)&0xFFFFDFFFu; // 800F2CDC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F2CE0
  c->lr=0x800F2CE8u; f_800361A0(c); // 800F2CE4
  c->r[3]=c->r[31]+0x00000060u; // 800F2CE8
  c->r[4]=c->r[31]+0x000003D8u; // 800F2CEC
  c->lr=0x800F2CF4u; f_800361A0(c); // 800F2CF0
  c->r[3]=c->r[31]|c->r[31]; // 800F2CF4
  c->r[4]=0u+0x00000046u; // 800F2CF8
  c->lr=0x800F2D00u; f_801F5AB4(c); // 800F2CFC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F2D00
  c->r[3]=c->r[31]|c->r[31]; // 800F2D04
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F2D08
  c->ctr=c->r[12]; // 800F2D0C
  if (true) { c->lr=0x800F2D14u; dispatch(c,c->ctr); } // 800F2D10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2D14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2D18
  c->lr=c->r[0]; // 800F2D1C
  c->r[1]=c->r[1]+0x00000010u; // 800F2D20
  return; // 800F2D24
}

// fn_800F2D28
void f_800F2D28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2D28
  c->r[0]=c->lr; // 800F2D2C
  c->r[5]=0u+0x00000000u; // 800F2D30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2D34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2D38
  c->r[31]=c->r[3]|c->r[3]; // 800F2D3C
  c->r[3]=0u+0x000004DFu; // 800F2D40
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F2D44
  c->r[4]=c->r[4]+0x0000010Cu; // 800F2D48
  c->lr=0x800F2D50u; f_8024EE50(c); // 800F2D4C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2D50
  if (crb(c,2)) { goto L_800F2D60; } // 800F2D54
  c->r[3]=0u+0x00000000u; // 800F2D58
  goto L_800F2D6C; // 800F2D5C
L_800F2D60:;
  c->r[3]=c->r[31]+0x00000210u; // 800F2D60
  c->r[4]=0u+0x000000E1u; // 800F2D64
  c->lr=0x800F2D6Cu; f_80221630(c); // 800F2D68
L_800F2D6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2D6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2D70
  c->lr=c->r[0]; // 800F2D74
  c->r[1]=c->r[1]+0x00000010u; // 800F2D78
  return; // 800F2D7C
}

// fn_800F2D80
void f_800F2D80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2D80
  c->r[0]=c->lr; // 800F2D84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2D88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2D8C
  c->r[31]=0u+0x805D0000u; // 800F2D90
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F2D94
  c->r[30]=c->r[3]|c->r[3]; // 800F2D98
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F2D9C
  c->lr=0x800F2DA4u; f_80045264(c); // 800F2DA0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800F2DA4
  cmpu(c,0,c->r[0],0x00000046u); // 800F2DA8
  if (!crb(c,2)) { goto L_800F2DE8; } // 800F2DAC
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F2DB0
  c->lr=0x800F2DB8u; f_80037AF0(c); // 800F2DB4
  cmpu(c,0,c->r[3],c->r[30]); // 800F2DB8
  if (!crb(c,2)) { goto L_800F2DE8; } // 800F2DBC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800F2DC0
  cmps(c,0,(int32_t)c->r[0],101); // 800F2DC4
  if (crb(c,2)) { goto L_800F2DE8; } // 800F2DC8
  {uint32_t ea=c->r[2]+0xFFFFA970u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F2DCC
  c->r[3]=c->r[30]|c->r[30]; // 800F2DD0
  c->r[4]=0u+0x00000065u; // 800F2DD4
  c->r[5]=0u+0x00000000u; // 800F2DD8
  c->r[6]=0u+0x00000000u; // 800F2DDC
  c->r[7]=0u+0x00000000u; // 800F2DE0
  c->lr=0x800F2DE8u; f_801F4D44(c); // 800F2DE4
L_800F2DE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2DE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2DEC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F2DF0
  c->lr=c->r[0]; // 800F2DF4
  c->r[1]=c->r[1]+0x00000010u; // 800F2DF8
  return; // 800F2DFC
}

// fn_800F2E00
void f_800F2E00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2E00
  c->r[0]=c->lr; // 800F2E04
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F2E08
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F2E0C
  c->r[31]=0u+0x803D0000u; // 800F2E10
  c->r[31]=c->r[31]+0x00004D30u; // 800F2E14
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F2E18
  c->r[30]=c->r[3]|c->r[3]; // 800F2E1C
  c->lr=0x800F2E24u; f_801F4F28(c); // 800F2E20
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800F2E24
  cmps(c,0,(int32_t)c->r[0],101); // 800F2E28
  if (crb(c,2)) { goto L_800F2E7C; } // 800F2E2C
  if (!crb(c,0)) { goto L_800F2E40; } // 800F2E30
  cmps(c,0,(int32_t)c->r[0],100); // 800F2E34
  if (!crb(c,0)) { goto L_800F2E4C; } // 800F2E38
  goto L_800F2ED8; // 800F2E3C
L_800F2E40:;
  cmps(c,0,(int32_t)c->r[0],103); // 800F2E40
  if (!crb(c,0)) { goto L_800F2ED8; } // 800F2E44
  goto L_800F2EAC; // 800F2E48
L_800F2E4C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F2E4C
  c->r[5]=c->r[31]+0x0000000Cu; // 800F2E50
  c->r[3]=c->r[30]|c->r[30]; // 800F2E54
  c->r[4]=c->r[1]+0x00000020u; // 800F2E58
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800F2E5C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F2E60
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F2E64
  W32(c->r[1]+0x00000020u,c->r[7]); // 800F2E68
  W32(c->r[1]+0x00000024u,c->r[6]); // 800F2E6C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F2E70
  c->lr=0x800F2E78u; f_800F2B40(c); // 800F2E74
  goto L_800F2ED8; // 800F2E78
L_800F2E7C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F2E7C
  c->r[5]=c->r[31]+0x00000018u; // 800F2E80
  c->r[3]=c->r[30]|c->r[30]; // 800F2E84
  c->r[4]=c->r[1]+0x00000014u; // 800F2E88
  c->r[7]=R32(c->r[31]+0x00000018u); // 800F2E8C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F2E90
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F2E94
  W32(c->r[1]+0x00000014u,c->r[7]); // 800F2E98
  W32(c->r[1]+0x00000018u,c->r[6]); // 800F2E9C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F2EA0
  c->lr=0x800F2EA8u; f_800F2B40(c); // 800F2EA4
  goto L_800F2ED8; // 800F2EA8
L_800F2EAC:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F2EAC
  c->r[5]=c->r[31]+0x00000024u; // 800F2EB0
  c->r[3]=c->r[30]|c->r[30]; // 800F2EB4
  c->r[4]=c->r[1]+0x00000008u; // 800F2EB8
  c->r[7]=R32(c->r[31]+0x00000024u); // 800F2EBC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F2EC0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F2EC4
  W32(c->r[1]+0x00000008u,c->r[7]); // 800F2EC8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F2ECC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F2ED0
  c->lr=0x800F2ED8u; f_800F2B40(c); // 800F2ED4
L_800F2ED8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F2ED8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F2EDC
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F2EE0
  c->lr=c->r[0]; // 800F2EE4
  c->r[1]=c->r[1]+0x00000040u; // 800F2EE8
  return; // 800F2EEC
}

// fn_800F2EF0
void f_800F2EF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2EF0
  c->r[0]=c->lr; // 800F2EF4
  c->r[7]=0u+0x803D0000u; // 800F2EF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2EFC
  c->r[4]=c->r[1]+0x00000008u; // 800F2F00
  {uint32_t ea=c->r[7]+0x00004D60u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F2F04
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F2F08
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F2F0C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F2F10
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F2F14
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F2F18
  c->lr=0x800F2F20u; f_800F2B40(c); // 800F2F1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2F20
  c->lr=c->r[0]; // 800F2F24
  c->r[1]=c->r[1]+0x00000020u; // 800F2F28
  return; // 800F2F2C
}

// fn_800F2F30
void f_800F2F30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2F30
  c->r[0]=c->lr; // 800F2F34
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F2F38
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800F2F3C
  W32(c->r[1]+0x00000088u,c->r[30]); // 800F2F40
  c->r[30]=c->r[3]|c->r[3]; // 800F2F44
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F2F48
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800F2F4C
  cmps(c,0,(int32_t)c->r[0],0); // 800F2F50
  if (!crb(c,2)) { goto L_800F2FE0; } // 800F2F54
  c->r[3]=R16(c->r[3]+0x000003BEu); // 800F2F58
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800F2F5C
  if (crb(c,2)) { goto L_800F2FE0; } // 800F2F60
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800F2F64
  cmps(c,0,(int32_t)c->r[0],128); // 800F2F68
  if (!crb(c,2)) { goto L_800F2F94; } // 800F2F6C
  c->r[3]=0u+0x80620000u; // 800F2F70
  c->r[3]=c->r[3]+0x00007688u; // 800F2F74
  c->r[3]=R32(c->r[3]+0x00000014u); // 800F2F78
  cmps(c,0,(int32_t)c->r[3],0); // 800F2F7C
  if (crb(c,2)) { goto L_800F2F94; } // 800F2F80
  c->r[4]=0u+0x00000002u; // 800F2F84
  c->lr=0x800F2F8Cu; f_80037670(c); // 800F2F88
  cmps(c,0,(int32_t)c->r[3],0); // 800F2F8C
  if (!crb(c,2)) { goto L_800F2FE0; } // 800F2F90
L_800F2F94:;
  {uint32_t ea=c->r[2]+0xFFFFA980u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2F94
  c->r[3]=c->r[1]+0x00000008u; // 800F2F98
  c->r[4]=c->r[30]+0x0000002Cu; // 800F2F9C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800F2FA0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800F2FA4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800F2FA8
  c->lr=0x800F2FB0u; f_800361A0(c); // 800F2FAC
  c->r[31]=0u+0x80550000u; // 800F2FB0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F2FB4
  c->r[31]=c->r[31]+0x00003D60u; // 800F2FB8
  c->r[5]=c->r[30]|c->r[30]; // 800F2FBC
  c->r[3]=c->r[31]+0x00000010u; // 800F2FC0
  c->r[6]=c->r[1]+0x00000008u; // 800F2FC4
  c->r[7]=c->r[1]+0x00000020u; // 800F2FC8
  c->r[4]=0u+0x000001FFu; // 800F2FCC
  c->lr=0x800F2FD4u; f_80226910(c); // 800F2FD0
  c->r[3]=c->r[31]+0x00000010u; // 800F2FD4
  c->r[4]=c->r[1]+0x00000020u; // 800F2FD8
  c->lr=0x800F2FE0u; f_80226D68(c); // 800F2FDC
L_800F2FE0:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F2FE0
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800F2FE4
  c->r[30]=R32(c->r[1]+0x00000088u); // 800F2FE8
  c->lr=c->r[0]; // 800F2FEC
  c->r[1]=c->r[1]+0x00000090u; // 800F2FF0
  return; // 800F2FF4
}

// fn_800F2FF8
void f_800F2FF8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800F2FF8
  W8(c->r[3]+0x00000074u,c->r[0]); // 800F2FFC
  return; // 800F3000
}

// fn_800F3004
void f_800F3004(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800F3004
  W8(c->r[3]+0x00000074u,c->r[0]); // 800F3008
  return; // 800F300C
}

// fn_800F3010
void f_800F3010(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3010
  c->r[0]=c->lr; // 800F3014
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3018
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F301C
  c->r[31]=c->r[3]|c->r[3]; // 800F3020
  c->r[3]=c->r[3]+0x00000210u; // 800F3024
  c->lr=0x800F302Cu; f_8004BAD4(c); // 800F3028
  cmps(c,0,(int32_t)c->r[3],0); // 800F302C
  if (crb(c,2)) { goto L_800F30B0; } // 800F3030
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F3034
  c->r[4]=c->r[31]|c->r[31]; // 800F3038
  c->r[3]=c->r[31]+0x00000210u; // 800F303C
  c->r[0]=c->r[0]|0xAA800000u; // 800F3040
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F3044
  c->lr=0x800F304Cu; f_80043E44(c); // 800F3048
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F304C
  c->r[3]=c->r[31]+0x00000210u; // 800F3050
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F3054
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F3058
  c->lr=0x800F3060u; f_80043E34(c); // 800F305C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F3060
  c->r[4]=0u+0x803A0000u; // 800F3064
  c->r[4]=c->r[4]+0xFFFFEF30u; // 800F3068
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F306C
  c->lr=0x800F3074u; f_80256EC4(c); // 800F3070
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F3074
  c->r[5]=c->r[3]|c->r[3]; // 800F3078
  c->r[3]=c->r[31]+0x00000210u; // 800F307C
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800F3080
  c->lr=0x800F3088u; f_8004BAC8(c); // 800F3084
  {uint32_t ea=c->r[2]+0xFFFFA984u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F3088
  c->r[3]=c->r[31]+0x00000210u; // 800F308C
  c->f[2]=c->f[1]; // 800F3090
  c->f[3]=c->f[1]; // 800F3094
  c->lr=0x800F309Cu; f_80043E24(c); // 800F3098
  {uint32_t ea=c->r[2]+0xFFFFA970u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F309C
  c->r[3]=c->r[31]+0x00000210u; // 800F30A0
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F30A4
  c->f[3]=c->f[1]; // 800F30A8
  c->lr=0x800F30B0u; f_8005D58C(c); // 800F30AC
L_800F30B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F30B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F30B4
  c->lr=c->r[0]; // 800F30B8
  c->r[1]=c->r[1]+0x00000010u; // 800F30BC
  return; // 800F30C0
}

// fn_800F30C4
void f_800F30C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F30C4
  c->r[0]=c->lr; // 800F30C8
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F30CC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800F30D0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800F30D4
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800F30D8
  c->r[31]=0u+0x803A0000u; // 800F30DC
  c->r[31]=c->r[31]+0xFFFFEEA8u; // 800F30E0
  W32(c->r[1]+0x00000078u,c->r[30]); // 800F30E4
  c->r[30]=c->r[3]|c->r[3]; // 800F30E8
  c->r[3]=c->r[3]+0x00000210u; // 800F30EC
  c->lr=0x800F30F4u; f_80221698(c); // 800F30F0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F30F4
  cmps(c,0,(int32_t)c->r[3],0); // 800F30F8
  if (crb(c,2)) { goto L_800F311C; } // 800F30FC
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800F3100
  cmps(c,0,(int32_t)c->r[0],0); // 800F3104
  if (crb(c,2)) { goto L_800F311C; } // 800F3108
  c->r[0]=R32(c->r[30]+0x00000210u); // 800F310C
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800F3110
  W32(c->r[30]+0x00000210u,c->r[0]); // 800F3114
  goto L_800F3354; // 800F3118
L_800F311C:;
  c->r[0]=R32(c->r[30]+0x00000210u); // 800F311C
  c->r[7]=c->r[31]+0x0000003Cu; // 800F3120
  c->r[6]=c->r[31]+0x00000048u; // 800F3124
  c->r[3]=c->r[1]+0x00000020u; // 800F3128
  c->r[0]=c->r[0]|0x80000000u; // 800F312C
  c->r[4]=c->r[1]+0x00000014u; // 800F3130
  W32(c->r[30]+0x00000210u,c->r[0]); // 800F3134
  c->r[5]=c->r[1]+0x00000038u; // 800F3138
  c->r[11]=R32(c->r[31]+0x0000003Cu); // 800F313C
  c->r[10]=R32(c->r[7]+0x00000004u); // 800F3140
  c->r[9]=R32(c->r[7]+0x00000008u); // 800F3144
  c->r[8]=R32(c->r[31]+0x00000048u); // 800F3148
  c->r[7]=R32(c->r[6]+0x00000004u); // 800F314C
  c->r[0]=R32(c->r[6]+0x00000008u); // 800F3150
  W32(c->r[1]+0x00000020u,c->r[11]); // 800F3154
  W32(c->r[1]+0x00000024u,c->r[10]); // 800F3158
  {uint32_t ea=c->r[1]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 800F315C
  W32(c->r[1]+0x00000028u,c->r[9]); // 800F3160
  {uint32_t ea=c->r[1]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 800F3164
  W32(c->r[1]+0x00000014u,c->r[8]); // 800F3168
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 800F316C
  W32(c->r[1]+0x00000018u,c->r[7]); // 800F3170
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F3174
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F3178
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F317C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F3180
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F3184
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F3188
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 800F318C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800F3190
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F3194
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F3198
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800F319C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800F31A0
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F31A4
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F31A8
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800F31AC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800F31B0
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F31B4
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F31B8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800F31BC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800F31C0
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F31C4
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F31C8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800F31CC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800F31D0
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F31D4
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F31D8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800F31DC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800F31E0
  c->lr=0x800F31E8u; f_80296A70(c); // 800F31E4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F31E8
  c->r[4]=0u+0x803A0000u; // 800F31EC
  c->r[4]=c->r[4]+0xFFFFEF30u; // 800F31F0
  c->r[5]=c->r[1]+0x00000048u; // 800F31F4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F31F8
  c->r[6]=0u+0x00000001u; // 800F31FC
  c->lr=0x800F3204u; f_80257018(c); // 800F3200
  c->r[4]=c->r[1]+0x00000020u; // 800F3204
  c->r[3]=c->r[1]+0x00000048u; // 800F3208
  c->r[5]=c->r[4]|c->r[4]; // 800F320C
  c->lr=0x800F3214u; f_80296750(c); // 800F3210
  c->r[4]=c->r[1]+0x00000014u; // 800F3214
  c->r[3]=c->r[1]+0x00000048u; // 800F3218
  c->r[5]=c->r[4]|c->r[4]; // 800F321C
  c->lr=0x800F3224u; f_80296750(c); // 800F3220
  c->r[3]=c->r[1]+0x00000020u; // 800F3224
  c->r[4]=c->r[1]+0x00000014u; // 800F3228
  c->r[5]=c->r[1]+0x0000002Cu; // 800F322C
  c->lr=0x800F3234u; f_80296A70(c); // 800F3230
  c->r[4]=c->r[31]+0x00000054u; // 800F3234
  {uint32_t ea=c->r[2]+0xFFFFA970u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F3238
  c->r[6]=R32(c->r[31]+0x00000054u); // 800F323C
  c->r[3]=c->r[1]+0x00000038u; // 800F3240
  c->r[5]=R32(c->r[4]+0x00000004u); // 800F3244
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F3248
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800F324C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F3250
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F3254
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F3258
  c->lr=0x800F3260u; f_80296B0C(c); // 800F325C
  {uint32_t ea=c->r[2]+0xFFFFA970u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F3260
  fcmp(c,0,c->f[3],c->f[1]); // 800F3264
  if (crb(c,2)) { goto L_800F32D8; } // 800F3268
  c->r[3]=c->r[1]+0x00000038u; // 800F326C
  c->lr=0x800F3274u; f_80296B0C(c); // 800F3270
  c->f[31]=c->f[1]; // 800F3274
  c->r[3]=c->r[1]+0x0000002Cu; // 800F3278
  c->lr=0x800F3280u; f_80296B0C(c); // 800F327C
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[31]); // 800F3280
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F3284
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F3288
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F328C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800F3290
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800F3294
  c->lr=0x800F329Cu; f_8005C22C(c); // 800F3298
  {uint32_t ea=c->r[2]+0xFFFFA970u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F329C
  fcmp(c,0,c->f[1],c->f[0]); // 800F32A0
  if (!crb(c,1)) { goto L_800F32BC; } // 800F32A4
  {uint32_t ea=c->r[2]+0xFFFFA988u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F32A8
  {uint32_t ea=c->r[2]+0xFFFFA98Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F32AC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800F32B0
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 800F32B4
  goto L_800F32E8; // 800F32B8
L_800F32BC:;
  {uint32_t ea=c->r[2]+0xFFFFA988u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F32BC
  {uint32_t ea=c->r[2]+0xFFFFA98Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F32C0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800F32C4
  {uint32_t ea=c->r[2]+0xFFFFA990u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F32C8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800F32CC
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 800F32D0
  goto L_800F32E8; // 800F32D4
L_800F32D8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F32D8
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F32DC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800F32E0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800F32E4
L_800F32E8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F32E8
  {uint32_t ea=c->r[2]+0xFFFFA994u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F32EC
  fcmp(c,0,c->f[1],c->f[0]); // 800F32F0
  if (!crb(c,0)) { goto L_800F32FC; } // 800F32F4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800F32F8
L_800F32FC:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F32FC
  c->r[3]=c->r[30]+0x00000210u; // 800F3300
  {uint32_t ea=c->r[2]+0xFFFFA970u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F3304
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800F3308
  {uint32_t ea=c->r[4]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F330C
  c->f[3]=c->f[1]; // 800F3310
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800F3314
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[0]); // 800F3318
  {uint32_t ea=c->r[4]+0x00000078u; c->f[5]=c->ps1[5]=RF32(ea);} // 800F331C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 800F3320
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F3324
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 800F3328
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[7]);} // 800F332C
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800F3330
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 800F3334
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800F3338
  c->lr=0x800F3340u; f_8005D58C(c); // 800F333C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F3340
  c->r[3]=c->r[30]+0x00000210u; // 800F3344
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F3348
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F334C
  c->lr=0x800F3354u; f_80043E24(c); // 800F3350
L_800F3354:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800F3354
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F3358
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800F335C
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800F3360
  c->r[30]=R32(c->r[1]+0x00000078u); // 800F3364
  c->lr=c->r[0]; // 800F3368
  c->r[1]=c->r[1]+0x00000090u; // 800F336C
  return; // 800F3370
}

// fn_800F3374
void f_800F3374(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3374
  c->r[0]=c->lr; // 800F3378
  cmps(c,0,(int32_t)c->r[3],0); // 800F337C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3380
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3384
  c->r[31]=c->r[4]|c->r[4]; // 800F3388
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F338C
  c->r[30]=c->r[3]|c->r[3]; // 800F3390
  if (crb(c,2)) { goto L_800F33B0; } // 800F3394
  c->r[4]=0u+0x00000000u; // 800F3398
  c->lr=0x800F33A0u; f_8026A06C(c); // 800F339C
  cmps(c,0,(int32_t)c->r[31],0); // 800F33A0
  if (!crb(c,1)) { goto L_800F33B0; } // 800F33A4
  c->r[3]=c->r[30]|c->r[30]; // 800F33A8
  c->lr=0x800F33B0u; f_8026A268(c); // 800F33AC
L_800F33B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F33B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F33B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F33B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F33BC
  c->lr=c->r[0]; // 800F33C0
  c->r[1]=c->r[1]+0x00000010u; // 800F33C4
  return; // 800F33C8
}

// fn_800F33CC
void f_800F33CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F33CC
  c->r[0]=c->lr; // 800F33D0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800F33D4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800F33D8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800F33DC
  c->r[4]=0u+0x00000000u; // 800F33E0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F33E4
  c->r[31]=c->r[3]|c->r[3]; // 800F33E8
  W32(c->r[1]+0x00000048u,c->r[30]); // 800F33EC
  W32(c->r[1]+0x00000044u,c->r[29]); // 800F33F0
  c->lr=0x800F33F8u; f_801F57D0(c); // 800F33F4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F33F8
  c->r[3]=c->r[31]|c->r[31]; // 800F33FC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800F3400
  c->ctr=c->r[12]; // 800F3404
  if (true) { c->lr=0x800F340Cu; dispatch(c,c->ctr); } // 800F3408
  c->r[3]=c->r[31]|c->r[31]; // 800F340C
  c->lr=0x800F3414u; f_801F4B94(c); // 800F3410
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F3414
  c->r[4]=0u+0x00000003u; // 800F3418
  {uint32_t ea=c->r[2]+0xFFFFA9A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F341C
  c->r[5]=0u+0x00000063u; // 800F3420
  c->r[0]=c->r[0]|0x00000814u; // 800F3424
  c->r[29]=0u+0x00000001u; // 800F3428
  c->r[3]=0u+0x80550000u; // 800F342C
  W8(c->r[31]+0x0000006Cu,c->r[4]); // 800F3430
  c->f[3]=c->f[1]; // 800F3434
  {uint32_t ea=c->r[31]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800F3438
  W8(c->r[31]+0x0000006Du,c->r[5]); // 800F343C
  c->r[3]=c->r[3]+0x00003D60u; // 800F3440
  {uint32_t ea=c->r[2]+0xFFFFA9A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F3444
  c->r[4]=c->r[31]+0x0000002Cu; // 800F3448
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800F344C
  c->r[5]=c->r[31]+0x00000030u; // 800F3450
  c->r[6]=0u+0x00000000u; // 800F3454
  c->r[7]=0u+0x00000000u; // 800F3458
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F345C
  c->lr=0x800F3464u; f_801D5488(c); // 800F3460
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F3464
  c->r[3]=c->r[31]|c->r[31]; // 800F3468
  c->lr=0x800F3470u; f_801F58BC(c); // 800F346C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F3470
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800F3474
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F3478
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F347C
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800F3480
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800F3484
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800F3488
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F348C
  c->lr=0x800F3494u; f_802501B0(c); // 800F3490
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F3494
  c->r[29]=0u+0x803A0000u; // 800F3498
  c->r[4]=c->r[29]+0xFFFFEF4Cu; // 800F349C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F34A0
  c->lr=0x800F34A8u; f_80256EC4(c); // 800F34A4
  c->r[6]=R32(c->r[31]+0x00000394u); // 800F34A8
  c->r[5]=0u+0x805D0000u; // 800F34AC
  c->r[4]=c->r[31]+0x0000002Cu; // 800F34B0
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800F34B4
  c->r[3]=c->r[5]+0x000078B0u; // 800F34B8
  c->lr=0x800F34C0u; f_802351CC(c); // 800F34BC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F34C0
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800F34C4
  c->r[3]=c->r[31]|c->r[31]; // 800F34C8
  c->lr=0x800F34D0u; f_801F56F4(c); // 800F34CC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F34D0
  c->r[3]=c->r[31]|c->r[31]; // 800F34D4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F34D8
  c->ctr=c->r[12]; // 800F34DC
  if (true) { c->lr=0x800F34E4u; dispatch(c,c->ctr); } // 800F34E0
  c->r[0]=0u+0x00000000u; // 800F34E4
  c->r[30]=c->r[29]+0xFFFFEF4Cu; // 800F34E8
  c->r[29]=0u+0x80550000u; // 800F34EC
  W8(c->r[31]+0x00000075u,c->r[0]); // 800F34F0
  c->r[3]=c->r[29]+0xFFFFC848u; // 800F34F4
  c->r[4]=c->r[30]+0x00000009u; // 800F34F8
  c->r[5]=0u+0x00000000u; // 800F34FC
  c->r[6]=0u+0x00000000u; // 800F3500
  c->lr=0x800F3508u; f_8018D3E4(c); // 800F3504
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F3508
  W8(c->r[31]+0x00000074u,c->r[3]); // 800F350C
  cmpu(c,0,c->r[0],0x000000FFu); // 800F3510
  if (crb(c,2)) { goto L_800F3540; } // 800F3514
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F3518
  c->r[4]=c->r[30]|c->r[30]; // 800F351C
  c->r[5]=c->r[1]+0x00000008u; // 800F3520
  c->r[6]=0u+0x00000001u; // 800F3524
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F3528
  c->lr=0x800F3530u; f_80257018(c); // 800F352C
  c->r[4]=R8(c->r[31]+0x00000074u); // 800F3530
  c->r[3]=c->r[29]+0xFFFFC848u; // 800F3534
  c->r[5]=c->r[1]+0x00000008u; // 800F3538
  c->lr=0x800F3540u; f_8018DEB8(c); // 800F353C
L_800F3540:;
  c->r[3]=c->r[31]|c->r[31]; // 800F3540
  c->lr=0x800F3548u; f_800F3ED8(c); // 800F3544
  c->r[0]=0u+0x00000001u; // 800F3548
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 800F354C
  W32(c->r[31]+0x00000444u,c->r[0]); // 800F3550
  c->lr=0x800F3558u; f_8024E174(c); // 800F3554
  W32(c->r[31]+0x00000438u,c->r[3]); // 800F3558
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800F355C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800F3560
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F3564
  c->r[30]=R32(c->r[1]+0x00000048u); // 800F3568
  c->r[29]=R32(c->r[1]+0x00000044u); // 800F356C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800F3570
  c->lr=c->r[0]; // 800F3574
  c->r[1]=c->r[1]+0x00000060u; // 800F3578
  return; // 800F357C
}

// fn_800F3580
void f_800F3580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3580
  c->r[0]=c->lr; // 800F3584
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F3588
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F358C
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F3590
  c->r[30]=c->r[3]|c->r[3]; // 800F3594
  c->lr=0x800F359Cu; f_800F3C48(c); // 800F3598
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F359C
  c->r[3]=c->r[30]|c->r[30]; // 800F35A0
  c->r[12]=R32(c->r[12]+0x00000068u); // 800F35A4
  c->ctr=c->r[12]; // 800F35A8
  if (true) { c->lr=0x800F35B0u; dispatch(c,c->ctr); } // 800F35AC
  c->r[3]=c->r[30]|c->r[30]; // 800F35B0
  c->lr=0x800F35B8u; f_801F4C0C(c); // 800F35B4
  c->r[3]=c->r[30]|c->r[30]; // 800F35B8
  c->lr=0x800F35C0u; f_800F3DF8(c); // 800F35BC
  c->r[3]=c->r[30]|c->r[30]; // 800F35C0
  c->lr=0x800F35C8u; f_801F56F4(c); // 800F35C4
  c->r[0]=R8(c->r[30]+0x00000074u); // 800F35C8
  cmpu(c,0,c->r[0],0x000000FFu); // 800F35CC
  if (crb(c,2)) { goto L_800F3634; } // 800F35D0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F35D4
  c->r[4]=0u+0x803A0000u; // 800F35D8
  c->r[4]=c->r[4]+0xFFFFEF4Cu; // 800F35DC
  c->r[5]=c->r[1]+0x00000008u; // 800F35E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F35E4
  c->r[6]=0u+0x00000001u; // 800F35E8
  c->lr=0x800F35F0u; f_80257018(c); // 800F35EC
  c->r[31]=0u+0x80550000u; // 800F35F0
  c->r[4]=R8(c->r[30]+0x00000074u); // 800F35F4
  c->r[3]=c->r[31]+0xFFFFC848u; // 800F35F8
  c->r[5]=c->r[1]+0x00000008u; // 800F35FC
  c->lr=0x800F3604u; f_8018DEB8(c); // 800F3600
  c->r[0]=R8(c->r[30]+0x0000006Fu); // 800F3604
  cmps(c,0,(int32_t)c->r[0],0); // 800F3608
  if (!crb(c,2)) { goto L_800F3624; } // 800F360C
  c->r[4]=R8(c->r[30]+0x00000074u); // 800F3610
  c->r[3]=c->r[31]+0xFFFFC848u; // 800F3614
  c->r[5]=0u+0x00000001u; // 800F3618
  c->lr=0x800F3620u; f_8018E2D4(c); // 800F361C
  goto L_800F3634; // 800F3620
L_800F3624:;
  c->r[4]=R8(c->r[30]+0x00000074u); // 800F3624
  c->r[3]=c->r[31]+0xFFFFC848u; // 800F3628
  c->r[5]=0u+0x00000000u; // 800F362C
  c->lr=0x800F3634u; f_8018E2D4(c); // 800F3630
L_800F3634:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F3634
  cmps(c,0,(int32_t)c->r[3],0); // 800F3638
  if (crb(c,2)) { goto L_800F3654; } // 800F363C
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800F3640
  cmps(c,0,(int32_t)c->r[0],0); // 800F3644
  if (crb(c,2)) { goto L_800F3654; } // 800F3648
  c->r[3]=c->r[30]|c->r[30]; // 800F364C
  c->lr=0x800F3654u; f_801F5B14(c); // 800F3650
L_800F3654:;
  c->r[3]=c->r[30]|c->r[30]; // 800F3654
  c->lr=0x800F365Cu; f_800F3F7C(c); // 800F3658
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F365C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F3660
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F3664
  c->lr=c->r[0]; // 800F3668
  c->r[1]=c->r[1]+0x00000040u; // 800F366C
  return; // 800F3670
}

// fn_800F3674
void f_800F3674(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3674
  c->r[0]=c->lr; // 800F3678
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F367C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3680
  c->r[31]=c->r[3]|c->r[3]; // 800F3684
  c->r[4]=R8(c->r[3]+0x00000074u); // 800F3688
  cmpu(c,0,c->r[4],0x000000FFu); // 800F368C
  if (crb(c,2)) { goto L_800F36A8; } // 800F3690
  c->r[3]=0u+0x80550000u; // 800F3694
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F3698
  c->lr=0x800F36A0u; f_8018D694(c); // 800F369C
  c->r[0]=0u+0x000000FFu; // 800F36A0
  W8(c->r[31]+0x00000074u,c->r[0]); // 800F36A4
L_800F36A8:;
  c->r[3]=c->r[31]|c->r[31]; // 800F36A8
  c->lr=0x800F36B0u; f_801F4C78(c); // 800F36AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F36B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F36B4
  c->lr=c->r[0]; // 800F36B8
  c->r[1]=c->r[1]+0x00000010u; // 800F36BC
  return; // 800F36C0
}

// fn_800F36C4
void f_800F36C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F36C4
  c->r[0]=c->lr; // 800F36C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F36CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F36D0
  c->r[31]=c->r[3]|c->r[3]; // 800F36D4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F36D8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F36DC
  c->lr=0x800F36E4u; f_802501B0(c); // 800F36E0
  c->r[3]=c->r[31]|c->r[31]; // 800F36E4
  c->r[4]=0u+0x00000000u; // 800F36E8
  c->lr=0x800F36F0u; f_801F5244(c); // 800F36EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F36F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F36F4
  c->lr=c->r[0]; // 800F36F8
  c->r[1]=c->r[1]+0x00000010u; // 800F36FC
  return; // 800F3700
}

// fn_800F3704
void f_800F3704(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3704
  c->r[0]=c->lr; // 800F3708
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F370C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3710
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3714
  c->r[30]=c->r[3]|c->r[3]; // 800F3718
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F371C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F3720
  c->lr=0x800F3728u; f_802501B0(c); // 800F3724
  c->r[3]=c->r[30]|c->r[30]; // 800F3728
  c->r[4]=0u+0x00000000u; // 800F372C
  c->lr=0x800F3734u; f_801F5244(c); // 800F3730
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F3734
  c->r[3]=c->r[30]+0x0000002Cu; // 800F3738
  c->r[4]=c->r[4]+0x0000005Cu; // 800F373C
  c->lr=0x800F3744u; f_800361A0(c); // 800F3740
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F3744
  c->r[3]=c->r[30]|c->r[30]; // 800F3748
  c->lr=0x800F3750u; f_801F5418(c); // 800F374C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3750
  if (!crb(c,0)) { goto L_800F378C; } // 800F3754
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800F3758
  c->r[3]=0u+0x00000001u; // 800F375C
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F3760
  c->r[3]=c->r[30]|c->r[30]; // 800F3764
  c->r[0]=c->r[0]|0x00000080u; // 800F3768
  {uint32_t ea=c->r[2]+0xFFFFA9A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F376C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800F3770
  c->r[4]=0u+0x00000064u; // 800F3774
  c->r[5]=0u+0x00000000u; // 800F3778
  c->r[6]=0u+0x00000000u; // 800F377C
  c->r[7]=0u+0x00000000u; // 800F3780
  c->lr=0x800F3788u; f_801F4D44(c); // 800F3784
  goto L_800F37F4; // 800F3788
L_800F378C:;
  c->r[31]=0u+0x805D0000u; // 800F378C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F3790
  c->lr=0x800F3798u; f_800447E4(c); // 800F3794
  cmpu(c,0,c->r[3],0x00000001u); // 800F3798
  if (!crb(c,2)) { goto L_800F37AC; } // 800F379C
  c->r[0]=0u+0x00000000u; // 800F37A0
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F37A4
  goto L_800F37CC; // 800F37A8
L_800F37AC:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F37AC
  c->r[0]=R8(c->r[30]+0x00000075u); // 800F37B0
  c->r[3]=R8(c->r[3]+0x0000006Fu); // 800F37B4
  cmps(c,0,(int32_t)c->r[0],0); // 800F37B8
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F37BC
  if (crb(c,2)) { goto L_800F37CC; } // 800F37C0
  c->r[0]=0u+0x00000000u; // 800F37C4
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F37C8
L_800F37CC:;
  c->r[3]=c->r[30]|c->r[30]; // 800F37CC
  c->lr=0x800F37D4u; f_801F5B14(c); // 800F37D0
  c->r[4]=R8(c->r[30]+0x00000074u); // 800F37D4
  cmpu(c,0,c->r[4],0x000000FFu); // 800F37D8
  if (crb(c,2)) { goto L_800F37F4; } // 800F37DC
  c->r[3]=0u+0x80550000u; // 800F37E0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F37E4
  c->lr=0x800F37ECu; f_8018D694(c); // 800F37E8
  c->r[0]=0u+0x000000FFu; // 800F37EC
  W8(c->r[30]+0x00000074u,c->r[0]); // 800F37F0
L_800F37F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F37F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F37F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F37FC
  c->lr=c->r[0]; // 800F3800
  c->r[1]=c->r[1]+0x00000010u; // 800F3804
  return; // 800F3808
}

// fn_800F380C
void f_800F380C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F380C
  c->r[0]=c->lr; // 800F3810
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F3814
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F3818
  c->r[31]=c->r[3]|c->r[3]; // 800F381C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F3820
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F3824
  c->lr=0x800F382Cu; f_802501B0(c); // 800F3828
  c->r[3]=c->r[31]+0x00000038u; // 800F382C
  c->r[4]=c->r[31]+0x0000002Cu; // 800F3830
  c->lr=0x800F3838u; f_800361A0(c); // 800F3834
  {uint32_t ea=c->r[2]+0xFFFFA9A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F3838
  c->r[3]=0u+0x80550000u; // 800F383C
  c->r[3]=c->r[3]+0x00003D60u; // 800F3840
  c->r[4]=c->r[31]+0x00000038u; // 800F3844
  c->f[2]=c->f[1]; // 800F3848
  c->r[5]=c->r[1]+0x00000008u; // 800F384C
  c->f[3]=c->f[1]; // 800F3850
  c->r[6]=0u+0x00000000u; // 800F3854
  c->r[7]=0u+0x00000000u; // 800F3858
  c->lr=0x800F3860u; f_801D5488(c); // 800F385C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F3860
  c->r[3]=c->r[31]+0x00000060u; // 800F3864
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F3868
  c->r[4]=c->r[5]+0x00000068u; // 800F386C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800F3870
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F3874
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800F3878
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F387C
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800F3880
  c->lr=0x800F3888u; f_800361A0(c); // 800F3884
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F3888
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F388C
  c->lr=0x800F3894u; f_802501B0(c); // 800F3890
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800F3894
  c->r[0]=0u+0x00000001u; // 800F3898
  {uint32_t ea=c->r[2]+0xFFFFA9A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F389C
  c->r[4]=c->r[31]+0x0000002Cu; // 800F38A0
  {uint32_t ea=c->r[2]+0xFFFFA9ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F38A4
  c->r[3]=c->r[3]|0x00002000u; // 800F38A8
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800F38AC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F38B0
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800F38B4
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800F38B8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800F38BC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F38C0
  c->r[3]=c->r[3]+0x0000005Cu; // 800F38C4
  c->lr=0x800F38CCu; f_800361A0(c); // 800F38C8
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F38CC
  c->r[4]=0u+0x00000040u; // 800F38D0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F38D4
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800F38D8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F38DC
  c->r[3]=c->r[3]+0x0000001Cu; // 800F38E0
  c->lr=0x800F38E8u; f_802518A4(c); // 800F38E4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F38E8
  c->r[4]=0u+0x00000006u; // 800F38EC
  c->r[3]=c->r[3]+0x0000001Cu; // 800F38F0
  c->lr=0x800F38F8u; f_80251824(c); // 800F38F4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F38F8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F38FC
  c->lr=0x800F3904u; f_802501B0(c); // 800F3900
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F3904
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800F3908
  cmps(c,0,(int32_t)c->r[0],0); // 800F390C
  if (crb(c,2)) { goto L_800F39B8; } // 800F3910
  c->r[3]=c->r[3]+0x00000068u; // 800F3914
  c->r[4]=c->r[31]+0x00000060u; // 800F3918
  c->lr=0x800F3920u; f_800361A0(c); // 800F391C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F3920
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F3924
  c->lr=0x800F392Cu; f_8025037C(c); // 800F3928
  c->r[6]=R32(c->r[31]+0x00000394u); // 800F392C
  c->r[3]=c->r[1]+0x00000024u; // 800F3930
  c->r[4]=c->r[31]+0x00000060u; // 800F3934
  c->r[5]=c->r[1]+0x00000030u; // 800F3938
  c->r[6]=c->r[6]+0x000000B0u; // 800F393C
  c->r[7]=0u+0x00000000u; // 800F3940
  c->lr=0x800F3948u; f_8002BE64(c); // 800F3944
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800F3948
  c->r[3]=0u+0x805D0000u; // 800F394C
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F3950
  c->r[3]=c->r[3]+0x00003F6Cu; // 800F3954
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F3958
  c->r[4]=c->r[31]|c->r[31]; // 800F395C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800F3960
  c->r[7]=c->r[1]+0x00000018u; // 800F3964
  c->r[6]=0u+0x0000003Au; // 800F3968
  c->r[8]=0u+0x00000000u; // 800F396C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F3970
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F3974
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F3978
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F397C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F3980
  c->lr=0x800F3988u; f_801FA6A4(c); // 800F3984
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800F3988
  cmps(c,0,(int32_t)c->r[0],0); // 800F398C
  if (crb(c,2)) { goto L_800F39A0; } // 800F3990
  c->r[3]=c->r[31]+0x00000044u; // 800F3994
  c->r[4]=c->r[31]+0x000003CCu; // 800F3998
  c->lr=0x800F39A0u; f_800361A0(c); // 800F399C
L_800F39A0:;
  c->r[6]=0u+0x803A0000u; // 800F39A0
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F39A4
  c->r[5]=c->r[31]+0x00000044u; // 800F39A8
  c->r[4]=0u+0x00000000u; // 800F39AC
  c->r[6]=c->r[6]+0xFFFFEF40u; // 800F39B0
  c->lr=0x800F39B8u; f_801FBEC0(c); // 800F39B4
L_800F39B8:;
  c->r[3]=c->r[31]|c->r[31]; // 800F39B8
  c->r[4]=0u+0x00000000u; // 800F39BC
  c->lr=0x800F39C4u; f_801F7C00(c); // 800F39C0
  c->r[7]=0u+0x803D0000u; // 800F39C4
  {uint32_t ea=c->r[7]+0x00004EB0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F39C8
  c->r[3]=c->r[31]|c->r[31]; // 800F39CC
  c->r[4]=c->r[1]+0x0000000Cu; // 800F39D0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F39D4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F39D8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F39DC
  W32(c->r[1]+0x00000010u,c->r[5]); // 800F39E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F39E4
  c->lr=0x800F39ECu; f_800F3A00(c); // 800F39E8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F39EC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F39F0
  c->lr=c->r[0]; // 800F39F4
  c->r[1]=c->r[1]+0x00000050u; // 800F39F8
  return; // 800F39FC
}

// fn_800F3A00
void f_800F3A00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3A00
  c->r[0]=c->lr; // 800F3A04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3A08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3A0C
  c->r[31]=c->r[4]|c->r[4]; // 800F3A10
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3A14
  c->r[30]=c->r[3]|c->r[3]; // 800F3A18
  c->r[3]=c->r[31]|c->r[31]; // 800F3A1C
  c->lr=0x800F3A24u; f_802B9FDC(c); // 800F3A20
  cmps(c,0,(int32_t)c->r[3],0); // 800F3A24
  if (crb(c,2)) { goto L_800F3A44; } // 800F3A28
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F3A2C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800F3A30
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800F3A34
  W32(c->r[30]+0x00000020u,c->r[0]); // 800F3A38
  c->r[0]=R32(c->r[31]+0x00000008u); // 800F3A3C
  W32(c->r[30]+0x00000024u,c->r[0]); // 800F3A40
L_800F3A44:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3A44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3A48
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3A4C
  c->lr=c->r[0]; // 800F3A50
  c->r[1]=c->r[1]+0x00000010u; // 800F3A54
  return; // 800F3A58
}

// fn_800F3A5C
void f_800F3A5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3A5C
  c->r[0]=c->lr; // 800F3A60
  c->r[4]=0u+0x00000000u; // 800F3A64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F3A68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F3A6C
  c->r[31]=c->r[3]|c->r[3]; // 800F3A70
  c->r[3]=R32(c->r[3]+0x00000438u); // 800F3A74
  c->lr=0x800F3A7Cu; f_801FAF00(c); // 800F3A78
  cmps(c,0,(int32_t)c->r[3],0); // 800F3A7C
  if (!crb(c,2)) { goto L_800F3B14; } // 800F3A80
  c->r[3]=c->r[31]|c->r[31]; // 800F3A84
  c->r[4]=0u+0x00000047u; // 800F3A88
  c->lr=0x800F3A90u; f_801F5AB4(c); // 800F3A8C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F3A90
  c->r[3]=c->r[31]+0x0000002Cu; // 800F3A94
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F3A98
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800F3A9C
  c->r[0]=c->r[0]|0x00000004u; // 800F3AA0
  c->r[4]=c->r[4]+0x0000005Cu; // 800F3AA4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F3AA8
  c->lr=0x800F3AB0u; f_800361A0(c); // 800F3AAC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F3AB0
  c->r[3]=c->r[31]+0x00000060u; // 800F3AB4
  c->r[4]=c->r[4]+0x00000068u; // 800F3AB8
  c->lr=0x800F3AC0u; f_800361A0(c); // 800F3ABC
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800F3AC0
  c->r[3]=0u+0x805D0000u; // 800F3AC4
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F3AC8
  c->r[3]=c->r[3]+0x00006CF8u; // 800F3ACC
  c->r[4]=c->r[1]+0x00000008u; // 800F3AD0
  c->r[5]=0u+0x00040000u; // 800F3AD4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F3AD8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F3ADC
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F3AE0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F3AE4
  c->lr=0x800F3AECu; f_802236F8(c); // 800F3AE8
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800F3AEC
  c->r[3]=c->r[31]|c->r[31]; // 800F3AF0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F3AF4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F3AF8
  c->ctr=c->r[12]; // 800F3AFC
  if (true) { c->lr=0x800F3B04u; dispatch(c,c->ctr); } // 800F3B00
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F3B04
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F3B08
  c->lr=0x800F3B10u; f_8025037C(c); // 800F3B0C
  goto L_800F3B34; // 800F3B10
L_800F3B14:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F3B14
  c->r[3]=c->r[31]+0x0000002Cu; // 800F3B18
  c->r[4]=c->r[4]+0x0000005Cu; // 800F3B1C
  c->lr=0x800F3B24u; f_800361A0(c); // 800F3B20
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F3B24
  c->r[3]=c->r[31]+0x00000060u; // 800F3B28
  c->r[4]=c->r[4]+0x00000068u; // 800F3B2C
  c->lr=0x800F3B34u; f_800361A0(c); // 800F3B30
L_800F3B34:;
  c->r[3]=c->r[31]|c->r[31]; // 800F3B34
  c->r[4]=0u+0x00000000u; // 800F3B38
  c->lr=0x800F3B40u; f_801F7C00(c); // 800F3B3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F3B40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F3B44
  c->lr=c->r[0]; // 800F3B48
  c->r[1]=c->r[1]+0x00000020u; // 800F3B4C
  return; // 800F3B50
}

// fn_800F3B54
void f_800F3B54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3B54
  c->r[0]=c->lr; // 800F3B58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3B5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3B60
  c->r[31]=c->r[3]|c->r[3]; // 800F3B64
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F3B68
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F3B6C
  c->lr=0x800F3B74u; f_802501B0(c); // 800F3B70
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F3B74
  c->r[6]=0u+0x00000000u; // 800F3B78
  c->r[0]=0u+0x00000001u; // 800F3B7C
  c->r[3]=c->r[31]+0x0000002Cu; // 800F3B80
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800F3B84
  c->r[4]=c->r[31]+0x000003CCu; // 800F3B88
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F3B8C
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800F3B90
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800F3B94
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800F3B98
  c->r[0]=rotl(c->r[5],0)&0xFFFFDFFFu; // 800F3B9C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F3BA0
  c->lr=0x800F3BA8u; f_800361A0(c); // 800F3BA4
  c->r[3]=c->r[31]+0x00000060u; // 800F3BA8
  c->r[4]=c->r[31]+0x000003D8u; // 800F3BAC
  c->lr=0x800F3BB4u; f_800361A0(c); // 800F3BB0
  c->r[3]=c->r[31]|c->r[31]; // 800F3BB4
  c->r[4]=0u+0x00000047u; // 800F3BB8
  c->lr=0x800F3BC0u; f_801F5AB4(c); // 800F3BBC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F3BC0
  c->r[3]=c->r[31]|c->r[31]; // 800F3BC4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F3BC8
  c->ctr=c->r[12]; // 800F3BCC
  if (true) { c->lr=0x800F3BD4u; dispatch(c,c->ctr); } // 800F3BD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3BD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3BD8
  c->lr=c->r[0]; // 800F3BDC
  c->r[1]=c->r[1]+0x00000010u; // 800F3BE0
  return; // 800F3BE4
}

// fn_800F3BE8
void f_800F3BE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3BE8
  c->r[0]=c->lr; // 800F3BEC
  c->r[4]=0u+0x000000E1u; // 800F3BF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3BF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3BF8
  c->r[31]=c->r[3]|c->r[3]; // 800F3BFC
  c->r[3]=c->r[3]+0x00000210u; // 800F3C00
  c->lr=0x800F3C08u; f_80221630(c); // 800F3C04
  cmps(c,0,(int32_t)c->r[3],0); // 800F3C08
  if (!crb(c,2)) { goto L_800F3C18; } // 800F3C0C
  c->r[3]=0u+0x00000000u; // 800F3C10
  goto L_800F3C34; // 800F3C14
L_800F3C18:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F3C18
  c->r[3]=0u+0x000004E1u; // 800F3C1C
  c->r[5]=0u+0x00000000u; // 800F3C20
  c->r[4]=c->r[4]+0x0000010Cu; // 800F3C24
  c->lr=0x800F3C2Cu; f_8024EE50(c); // 800F3C28
  c->r[0]=cntlz(c->r[3]); // 800F3C2C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F3C30
L_800F3C34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3C34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3C38
  c->lr=c->r[0]; // 800F3C3C
  c->r[1]=c->r[1]+0x00000010u; // 800F3C40
  return; // 800F3C44
}

// fn_800F3C48
void f_800F3C48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3C48
  c->r[0]=c->lr; // 800F3C4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3C50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3C54
  c->r[31]=0u+0x805D0000u; // 800F3C58
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3C5C
  c->r[30]=c->r[3]|c->r[3]; // 800F3C60
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F3C64
  c->lr=0x800F3C6Cu; f_80045264(c); // 800F3C68
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800F3C6C
  cmpu(c,0,c->r[0],0x00000047u); // 800F3C70
  if (!crb(c,2)) { goto L_800F3CB0; } // 800F3C74
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F3C78
  c->lr=0x800F3C80u; f_80037AF0(c); // 800F3C7C
  cmpu(c,0,c->r[3],c->r[30]); // 800F3C80
  if (!crb(c,2)) { goto L_800F3CB0; } // 800F3C84
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800F3C88
  cmps(c,0,(int32_t)c->r[0],101); // 800F3C8C
  if (crb(c,2)) { goto L_800F3CB0; } // 800F3C90
  {uint32_t ea=c->r[2]+0xFFFFA9A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F3C94
  c->r[3]=c->r[30]|c->r[30]; // 800F3C98
  c->r[4]=0u+0x00000065u; // 800F3C9C
  c->r[5]=0u+0x00000000u; // 800F3CA0
  c->r[6]=0u+0x00000000u; // 800F3CA4
  c->r[7]=0u+0x00000000u; // 800F3CA8
  c->lr=0x800F3CB0u; f_801F4D44(c); // 800F3CAC
L_800F3CB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3CB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3CB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3CB8
  c->lr=c->r[0]; // 800F3CBC
  c->r[1]=c->r[1]+0x00000010u; // 800F3CC0
  return; // 800F3CC4
}

// fn_800F3CC8
void f_800F3CC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3CC8
  c->r[0]=c->lr; // 800F3CCC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F3CD0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F3CD4
  c->r[31]=0u+0x803D0000u; // 800F3CD8
  c->r[31]=c->r[31]+0x00004EB0u; // 800F3CDC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F3CE0
  c->r[30]=c->r[3]|c->r[3]; // 800F3CE4
  c->lr=0x800F3CECu; f_801F4F28(c); // 800F3CE8
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800F3CEC
  cmps(c,0,(int32_t)c->r[0],101); // 800F3CF0
  if (crb(c,2)) { goto L_800F3D44; } // 800F3CF4
  if (!crb(c,0)) { goto L_800F3D08; } // 800F3CF8
  cmps(c,0,(int32_t)c->r[0],100); // 800F3CFC
  if (!crb(c,0)) { goto L_800F3D14; } // 800F3D00
  goto L_800F3DA0; // 800F3D04
L_800F3D08:;
  cmps(c,0,(int32_t)c->r[0],103); // 800F3D08
  if (!crb(c,0)) { goto L_800F3DA0; } // 800F3D0C
  goto L_800F3D74; // 800F3D10
L_800F3D14:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F3D14
  c->r[5]=c->r[31]+0x0000000Cu; // 800F3D18
  c->r[3]=c->r[30]|c->r[30]; // 800F3D1C
  c->r[4]=c->r[1]+0x00000020u; // 800F3D20
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800F3D24
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F3D28
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F3D2C
  W32(c->r[1]+0x00000020u,c->r[7]); // 800F3D30
  W32(c->r[1]+0x00000024u,c->r[6]); // 800F3D34
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F3D38
  c->lr=0x800F3D40u; f_800F3A00(c); // 800F3D3C
  goto L_800F3DA0; // 800F3D40
L_800F3D44:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F3D44
  c->r[5]=c->r[31]+0x00000018u; // 800F3D48
  c->r[3]=c->r[30]|c->r[30]; // 800F3D4C
  c->r[4]=c->r[1]+0x00000014u; // 800F3D50
  c->r[7]=R32(c->r[31]+0x00000018u); // 800F3D54
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F3D58
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F3D5C
  W32(c->r[1]+0x00000014u,c->r[7]); // 800F3D60
  W32(c->r[1]+0x00000018u,c->r[6]); // 800F3D64
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F3D68
  c->lr=0x800F3D70u; f_800F3A00(c); // 800F3D6C
  goto L_800F3DA0; // 800F3D70
L_800F3D74:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F3D74
  c->r[5]=c->r[31]+0x00000024u; // 800F3D78
  c->r[3]=c->r[30]|c->r[30]; // 800F3D7C
  c->r[4]=c->r[1]+0x00000008u; // 800F3D80
  c->r[7]=R32(c->r[31]+0x00000024u); // 800F3D84
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F3D88
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F3D8C
  W32(c->r[1]+0x00000008u,c->r[7]); // 800F3D90
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F3D94
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F3D98
  c->lr=0x800F3DA0u; f_800F3A00(c); // 800F3D9C
L_800F3DA0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F3DA0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F3DA4
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F3DA8
  c->lr=c->r[0]; // 800F3DAC
  c->r[1]=c->r[1]+0x00000040u; // 800F3DB0
  return; // 800F3DB4
}

// fn_800F3DB8
void f_800F3DB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3DB8
  c->r[0]=c->lr; // 800F3DBC
  c->r[7]=0u+0x803D0000u; // 800F3DC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F3DC4
  c->r[4]=c->r[1]+0x00000008u; // 800F3DC8
  {uint32_t ea=c->r[7]+0x00004EE0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F3DCC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F3DD0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F3DD4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F3DD8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F3DDC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F3DE0
  c->lr=0x800F3DE8u; f_800F3A00(c); // 800F3DE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F3DE8
  c->lr=c->r[0]; // 800F3DEC
  c->r[1]=c->r[1]+0x00000020u; // 800F3DF0
  return; // 800F3DF4
}

// fn_800F3DF8
void f_800F3DF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3DF8
  c->r[0]=c->lr; // 800F3DFC
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F3E00
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800F3E04
  W32(c->r[1]+0x00000088u,c->r[30]); // 800F3E08
  c->r[30]=c->r[3]|c->r[3]; // 800F3E0C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F3E10
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800F3E14
  cmps(c,0,(int32_t)c->r[0],0); // 800F3E18
  if (!crb(c,2)) { goto L_800F3EA8; } // 800F3E1C
  c->r[3]=R16(c->r[3]+0x000003BEu); // 800F3E20
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800F3E24
  if (crb(c,2)) { goto L_800F3EA8; } // 800F3E28
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800F3E2C
  cmps(c,0,(int32_t)c->r[0],128); // 800F3E30
  if (!crb(c,2)) { goto L_800F3E5C; } // 800F3E34
  c->r[3]=0u+0x80620000u; // 800F3E38
  c->r[3]=c->r[3]+0x00007688u; // 800F3E3C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800F3E40
  cmps(c,0,(int32_t)c->r[3],0); // 800F3E44
  if (crb(c,2)) { goto L_800F3E5C; } // 800F3E48
  c->r[4]=0u+0x00000002u; // 800F3E4C
  c->lr=0x800F3E54u; f_80037670(c); // 800F3E50
  cmps(c,0,(int32_t)c->r[3],0); // 800F3E54
  if (!crb(c,2)) { goto L_800F3EA8; } // 800F3E58
L_800F3E5C:;
  {uint32_t ea=c->r[2]+0xFFFFA9B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F3E5C
  c->r[3]=c->r[1]+0x00000008u; // 800F3E60
  c->r[4]=c->r[30]+0x0000002Cu; // 800F3E64
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800F3E68
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800F3E6C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800F3E70
  c->lr=0x800F3E78u; f_800361A0(c); // 800F3E74
  c->r[31]=0u+0x80550000u; // 800F3E78
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F3E7C
  c->r[31]=c->r[31]+0x00003D60u; // 800F3E80
  c->r[5]=c->r[30]|c->r[30]; // 800F3E84
  c->r[3]=c->r[31]+0x00000010u; // 800F3E88
  c->r[6]=c->r[1]+0x00000008u; // 800F3E8C
  c->r[7]=c->r[1]+0x00000020u; // 800F3E90
  c->r[4]=0u+0x000001FFu; // 800F3E94
  c->lr=0x800F3E9Cu; f_80226910(c); // 800F3E98
  c->r[3]=c->r[31]+0x00000010u; // 800F3E9C
  c->r[4]=c->r[1]+0x00000020u; // 800F3EA0
  c->lr=0x800F3EA8u; f_80226D68(c); // 800F3EA4
L_800F3EA8:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F3EA8
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800F3EAC
  c->r[30]=R32(c->r[1]+0x00000088u); // 800F3EB0
  c->lr=c->r[0]; // 800F3EB4
  c->r[1]=c->r[1]+0x00000090u; // 800F3EB8
  return; // 800F3EBC
}

// fn_800F3EC0
void f_800F3EC0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800F3EC0
  W8(c->r[3]+0x00000075u,c->r[0]); // 800F3EC4
  return; // 800F3EC8
}

// fn_800F3ECC
void f_800F3ECC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800F3ECC
  W8(c->r[3]+0x00000075u,c->r[0]); // 800F3ED0
  return; // 800F3ED4
}

// fn_800F3ED8
void f_800F3ED8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3ED8
  c->r[0]=c->lr; // 800F3EDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3EE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3EE4
  c->r[31]=c->r[3]|c->r[3]; // 800F3EE8
  c->r[3]=c->r[3]+0x00000210u; // 800F3EEC
  c->lr=0x800F3EF4u; f_8004BAD4(c); // 800F3EF0
  cmps(c,0,(int32_t)c->r[3],0); // 800F3EF4
  if (crb(c,2)) { goto L_800F3F68; } // 800F3EF8
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F3EFC
  c->r[4]=c->r[31]|c->r[31]; // 800F3F00
  c->r[3]=c->r[31]+0x00000210u; // 800F3F04
  c->r[0]=c->r[0]|0xAA000000u; // 800F3F08
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F3F0C
  c->lr=0x800F3F14u; f_80043E44(c); // 800F3F10
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F3F14
  c->r[3]=c->r[31]+0x00000210u; // 800F3F18
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F3F1C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F3F20
  c->lr=0x800F3F28u; f_80043E34(c); // 800F3F24
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F3F28
  c->r[4]=0u+0x803A0000u; // 800F3F2C
  c->r[4]=c->r[4]+0xFFFFEF4Cu; // 800F3F30
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F3F34
  c->r[4]=c->r[4]+0x0000000Du; // 800F3F38
  c->lr=0x800F3F40u; f_80256EC4(c); // 800F3F3C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F3F40
  c->r[5]=c->r[3]|c->r[3]; // 800F3F44
  c->r[3]=c->r[31]+0x00000210u; // 800F3F48
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800F3F4C
  c->lr=0x800F3F54u; f_8004BAC8(c); // 800F3F50
  {uint32_t ea=c->r[2]+0xFFFFA9B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F3F54
  c->r[3]=c->r[31]+0x00000210u; // 800F3F58
  c->f[2]=c->f[1]; // 800F3F5C
  c->f[3]=c->f[1]; // 800F3F60
  c->lr=0x800F3F68u; f_80043E24(c); // 800F3F64
L_800F3F68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3F68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3F6C
  c->lr=c->r[0]; // 800F3F70
  c->r[1]=c->r[1]+0x00000010u; // 800F3F74
  return; // 800F3F78
}

// fn_800F3F7C
void f_800F3F7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3F7C
  c->r[0]=c->lr; // 800F3F80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3F84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3F88
  c->r[31]=c->r[3]|c->r[3]; // 800F3F8C
  c->r[3]=c->r[3]+0x00000210u; // 800F3F90
  c->lr=0x800F3F98u; f_80221698(c); // 800F3F94
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F3F98
  cmps(c,0,(int32_t)c->r[3],0); // 800F3F9C
  if (crb(c,2)) { goto L_800F3FC0; } // 800F3FA0
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800F3FA4
  cmps(c,0,(int32_t)c->r[0],0); // 800F3FA8
  if (crb(c,2)) { goto L_800F3FC0; } // 800F3FAC
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F3FB0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800F3FB4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F3FB8
  goto L_800F3FCC; // 800F3FBC
L_800F3FC0:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F3FC0
  c->r[0]=c->r[0]|0x80000000u; // 800F3FC4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F3FC8
L_800F3FCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3FCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3FD0
  c->lr=c->r[0]; // 800F3FD4
  c->r[1]=c->r[1]+0x00000010u; // 800F3FD8
  return; // 800F3FDC
}

// fn_800F3FE0
void f_800F3FE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3FE0
  c->r[0]=c->lr; // 800F3FE4
  cmps(c,0,(int32_t)c->r[3],0); // 800F3FE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3FEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3FF0
  c->r[31]=c->r[4]|c->r[4]; // 800F3FF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3FF8
  c->r[30]=c->r[3]|c->r[3]; // 800F3FFC
  if (crb(c,2)) { goto L_800F401C; } // 800F4000
  c->r[4]=0u+0x00000000u; // 800F4004
  c->lr=0x800F400Cu; f_8026A06C(c); // 800F4008
  cmps(c,0,(int32_t)c->r[31],0); // 800F400C
  if (!crb(c,1)) { goto L_800F401C; } // 800F4010
  c->r[3]=c->r[30]|c->r[30]; // 800F4014
  c->lr=0x800F401Cu; f_8026A268(c); // 800F4018
L_800F401C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F401C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4020
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4024
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4028
  c->lr=c->r[0]; // 800F402C
  c->r[1]=c->r[1]+0x00000010u; // 800F4030
  return; // 800F4034
}

// fn_800F4038
void f_800F4038(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4038
  c->r[0]=c->lr; // 800F403C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F4040
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800F4044
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800F4048
  c->r[4]=0u+0x00000000u; // 800F404C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4050
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4054
  c->r[30]=c->r[3]|c->r[3]; // 800F4058
  c->lr=0x800F4060u; f_801F57D0(c); // 800F405C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F4060
  c->r[3]=c->r[30]|c->r[30]; // 800F4064
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800F4068
  c->ctr=c->r[12]; // 800F406C
  if (true) { c->lr=0x800F4074u; dispatch(c,c->ctr); } // 800F4070
  c->r[3]=c->r[30]|c->r[30]; // 800F4074
  c->lr=0x800F407Cu; f_801F4B94(c); // 800F4078
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800F407C
  c->r[5]=0u+0x00000003u; // 800F4080
  {uint32_t ea=c->r[2]+0xFFFFA9C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4084
  c->r[4]=0u+0x00000064u; // 800F4088
  c->r[7]=c->r[0]|0x00000804u; // 800F408C
  c->r[31]=0u+0x00000001u; // 800F4090
  c->r[0]=0u+0x00000000u; // 800F4094
  c->r[3]=0u+0x80550000u; // 800F4098
  W8(c->r[30]+0x0000006Cu,c->r[5]); // 800F409C
  c->f[3]=c->f[1]; // 800F40A0
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800F40A4
  c->r[3]=c->r[3]+0x00003D60u; // 800F40A8
  W8(c->r[30]+0x0000006Du,c->r[4]); // 800F40AC
  c->r[4]=c->r[30]+0x0000002Cu; // 800F40B0
  {uint32_t ea=c->r[2]+0xFFFFA9C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F40B4
  W16(c->r[30]+0x000003BEu,c->r[7]); // 800F40B8
  c->r[5]=c->r[30]+0x00000030u; // 800F40BC
  c->r[6]=0u+0x00000000u; // 800F40C0
  c->r[7]=0u+0x00000000u; // 800F40C4
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800F40C8
  W8(c->r[30]+0x00000074u,c->r[0]); // 800F40CC
  c->lr=0x800F40D4u; f_801D5488(c); // 800F40D0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F40D4
  c->r[3]=c->r[30]|c->r[30]; // 800F40D8
  c->lr=0x800F40E0u; f_801F58BC(c); // 800F40DC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F40E0
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800F40E4
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F40E8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F40EC
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800F40F0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800F40F4
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800F40F8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F40FC
  c->lr=0x800F4104u; f_802501B0(c); // 800F4100
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F4104
  c->r[4]=0u+0x803A0000u; // 800F4108
  c->r[4]=c->r[4]+0xFFFFEF80u; // 800F410C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F4110
  c->lr=0x800F4118u; f_80256EC4(c); // 800F4114
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F4118
  c->r[5]=0u+0x805D0000u; // 800F411C
  c->r[4]=c->r[30]+0x0000002Cu; // 800F4120
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800F4124
  c->r[3]=c->r[5]+0x000078B0u; // 800F4128
  c->lr=0x800F4130u; f_802351CC(c); // 800F412C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F4130
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800F4134
  c->r[3]=c->r[30]|c->r[30]; // 800F4138
  c->lr=0x800F4140u; f_801F56F4(c); // 800F413C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F4140
  c->r[3]=c->r[30]|c->r[30]; // 800F4144
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F4148
  c->ctr=c->r[12]; // 800F414C
  if (true) { c->lr=0x800F4154u; dispatch(c,c->ctr); } // 800F4150
  c->r[3]=c->r[30]|c->r[30]; // 800F4154
  c->lr=0x800F415Cu; f_800F4A6C(c); // 800F4158
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800F415C
  W32(c->r[30]+0x00000444u,c->r[31]); // 800F4160
  c->lr=0x800F4168u; f_8024E174(c); // 800F4164
  W32(c->r[30]+0x00000438u,c->r[3]); // 800F4168
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800F416C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800F4170
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4174
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4178
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F417C
  c->lr=c->r[0]; // 800F4180
  c->r[1]=c->r[1]+0x00000020u; // 800F4184
  return; // 800F4188
}

// fn_800F418C
void f_800F418C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F418C
  c->r[0]=c->lr; // 800F4190
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4194
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4198
  c->r[31]=c->r[3]|c->r[3]; // 800F419C
  c->lr=0x800F41A4u; f_800F4780(c); // 800F41A0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F41A4
  c->r[3]=c->r[31]|c->r[31]; // 800F41A8
  c->r[12]=R32(c->r[12]+0x00000068u); // 800F41AC
  c->ctr=c->r[12]; // 800F41B0
  if (true) { c->lr=0x800F41B8u; dispatch(c,c->ctr); } // 800F41B4
  c->r[3]=c->r[31]|c->r[31]; // 800F41B8
  c->lr=0x800F41C0u; f_801F4C0C(c); // 800F41BC
  c->r[3]=c->r[31]|c->r[31]; // 800F41C0
  c->lr=0x800F41C8u; f_800F4940(c); // 800F41C4
  c->r[3]=c->r[31]|c->r[31]; // 800F41C8
  c->lr=0x800F41D0u; f_801F56F4(c); // 800F41CC
  c->r[3]=c->r[31]|c->r[31]; // 800F41D0
  c->lr=0x800F41D8u; f_800F4B10(c); // 800F41D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F41D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F41DC
  c->lr=c->r[0]; // 800F41E0
  c->r[1]=c->r[1]+0x00000010u; // 800F41E4
  return; // 800F41E8
}

// fn_800F41EC
void f_800F41EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F41EC
  c->r[0]=c->lr; // 800F41F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F41F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F41F8
  c->r[31]=c->r[3]|c->r[3]; // 800F41FC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F4200
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F4204
  c->lr=0x800F420Cu; f_802501B0(c); // 800F4208
  c->r[3]=c->r[31]|c->r[31]; // 800F420C
  c->r[4]=0u+0x00000000u; // 800F4210
  c->lr=0x800F4218u; f_801F5244(c); // 800F4214
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4218
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F421C
  c->lr=c->r[0]; // 800F4220
  c->r[1]=c->r[1]+0x00000010u; // 800F4224
  return; // 800F4228
}

// fn_800F422C
void f_800F422C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F422C
  c->r[0]=c->lr; // 800F4230
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4238
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F423C
  c->r[30]=c->r[3]|c->r[3]; // 800F4240
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F4244
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F4248
  c->lr=0x800F4250u; f_802501B0(c); // 800F424C
  c->r[3]=c->r[30]|c->r[30]; // 800F4250
  c->r[4]=0u+0x00000000u; // 800F4254
  c->lr=0x800F425Cu; f_801F5244(c); // 800F4258
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F425C
  c->r[3]=c->r[30]+0x0000002Cu; // 800F4260
  c->r[4]=c->r[4]+0x0000005Cu; // 800F4264
  c->lr=0x800F426Cu; f_800361A0(c); // 800F4268
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F426C
  c->r[3]=c->r[30]|c->r[30]; // 800F4270
  c->lr=0x800F4278u; f_801F5418(c); // 800F4274
  cmps(c,0,(int32_t)c->r[3],0); // 800F4278
  if (!crb(c,0)) { goto L_800F42B4; } // 800F427C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800F4280
  c->r[3]=0u+0x00000001u; // 800F4284
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F4288
  c->r[3]=c->r[30]|c->r[30]; // 800F428C
  c->r[0]=c->r[0]|0x00000080u; // 800F4290
  {uint32_t ea=c->r[2]+0xFFFFA9C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4294
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800F4298
  c->r[4]=0u+0x00000064u; // 800F429C
  c->r[5]=0u+0x00000000u; // 800F42A0
  c->r[6]=0u+0x00000000u; // 800F42A4
  c->r[7]=0u+0x00000000u; // 800F42A8
  c->lr=0x800F42B0u; f_801F4D44(c); // 800F42AC
  goto L_800F42FC; // 800F42B0
L_800F42B4:;
  c->r[31]=0u+0x805D0000u; // 800F42B4
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F42B8
  c->lr=0x800F42C0u; f_800447E4(c); // 800F42BC
  cmpu(c,0,c->r[3],0x00000001u); // 800F42C0
  if (!crb(c,2)) { goto L_800F42D4; } // 800F42C4
  c->r[0]=0u+0x00000000u; // 800F42C8
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F42CC
  goto L_800F42F4; // 800F42D0
L_800F42D4:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F42D4
  c->r[0]=R8(c->r[30]+0x00000074u); // 800F42D8
  c->r[3]=R8(c->r[3]+0x0000006Fu); // 800F42DC
  cmps(c,0,(int32_t)c->r[0],0); // 800F42E0
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F42E4
  if (crb(c,2)) { goto L_800F42F4; } // 800F42E8
  c->r[0]=0u+0x00000000u; // 800F42EC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F42F0
L_800F42F4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F42F4
  c->lr=0x800F42FCu; f_801F5B14(c); // 800F42F8
L_800F42FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F42FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4300
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4304
  c->lr=c->r[0]; // 800F4308
  c->r[1]=c->r[1]+0x00000010u; // 800F430C
  return; // 800F4310
}

// fn_800F4314
void f_800F4314(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4314
  c->r[0]=c->lr; // 800F4318
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F431C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F4320
  c->r[31]=c->r[3]|c->r[3]; // 800F4324
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F4328
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F432C
  c->lr=0x800F4334u; f_802501B0(c); // 800F4330
  c->r[3]=c->r[31]+0x00000038u; // 800F4334
  c->r[4]=c->r[31]+0x0000002Cu; // 800F4338
  c->lr=0x800F4340u; f_800361A0(c); // 800F433C
  {uint32_t ea=c->r[2]+0xFFFFA9C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4340
  c->r[3]=0u+0x80550000u; // 800F4344
  c->r[3]=c->r[3]+0x00003D60u; // 800F4348
  c->r[4]=c->r[31]+0x00000038u; // 800F434C
  c->f[2]=c->f[1]; // 800F4350
  c->r[5]=c->r[1]+0x00000008u; // 800F4354
  c->f[3]=c->f[1]; // 800F4358
  c->r[6]=0u+0x00000000u; // 800F435C
  c->r[7]=0u+0x00000000u; // 800F4360
  c->lr=0x800F4368u; f_801D5488(c); // 800F4364
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F4368
  c->r[3]=c->r[31]+0x00000060u; // 800F436C
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F4370
  c->r[4]=c->r[5]+0x00000068u; // 800F4374
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800F4378
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F437C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800F4380
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F4384
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800F4388
  c->lr=0x800F4390u; f_800361A0(c); // 800F438C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F4390
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F4394
  c->lr=0x800F439Cu; f_802501B0(c); // 800F4398
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800F439C
  c->r[0]=0u+0x00000001u; // 800F43A0
  {uint32_t ea=c->r[2]+0xFFFFA9C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F43A4
  c->r[4]=c->r[31]+0x0000002Cu; // 800F43A8
  {uint32_t ea=c->r[2]+0xFFFFA9CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F43AC
  c->r[3]=c->r[3]|0x00002000u; // 800F43B0
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800F43B4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F43B8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800F43BC
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800F43C0
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800F43C4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F43C8
  c->r[3]=c->r[3]+0x0000005Cu; // 800F43CC
  c->lr=0x800F43D4u; f_800361A0(c); // 800F43D0
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F43D4
  c->r[4]=0u+0x00000040u; // 800F43D8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F43DC
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800F43E0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F43E4
  c->r[3]=c->r[3]+0x0000001Cu; // 800F43E8
  c->lr=0x800F43F0u; f_802518A4(c); // 800F43EC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F43F0
  c->r[4]=0u+0x00000006u; // 800F43F4
  c->r[3]=c->r[3]+0x0000001Cu; // 800F43F8
  c->lr=0x800F4400u; f_80251824(c); // 800F43FC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F4400
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F4404
  c->lr=0x800F440Cu; f_802501B0(c); // 800F4408
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F440C
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800F4410
  cmps(c,0,(int32_t)c->r[0],0); // 800F4414
  if (crb(c,2)) { goto L_800F44C0; } // 800F4418
  c->r[3]=c->r[3]+0x00000068u; // 800F441C
  c->r[4]=c->r[31]+0x00000060u; // 800F4420
  c->lr=0x800F4428u; f_800361A0(c); // 800F4424
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F4428
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F442C
  c->lr=0x800F4434u; f_8025037C(c); // 800F4430
  c->r[6]=R32(c->r[31]+0x00000394u); // 800F4434
  c->r[3]=c->r[31]+0x0000002Cu; // 800F4438
  c->r[4]=c->r[31]+0x00000060u; // 800F443C
  c->r[5]=c->r[1]+0x00000024u; // 800F4440
  c->r[6]=c->r[6]+0x000000B0u; // 800F4444
  c->r[7]=0u+0x00000000u; // 800F4448
  c->lr=0x800F4450u; f_8002BE64(c); // 800F444C
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800F4450
  c->r[3]=0u+0x805D0000u; // 800F4454
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F4458
  c->r[3]=c->r[3]+0x00003F6Cu; // 800F445C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4460
  c->r[4]=c->r[31]|c->r[31]; // 800F4464
  W32(c->r[1]+0x00000018u,c->r[5]); // 800F4468
  c->r[7]=c->r[1]+0x00000018u; // 800F446C
  c->r[6]=0u+0x0000003Bu; // 800F4470
  c->r[8]=0u+0x00000000u; // 800F4474
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F4478
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F447C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F4480
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F4484
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F4488
  c->lr=0x800F4490u; f_801FA6A4(c); // 800F448C
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800F4490
  cmps(c,0,(int32_t)c->r[0],0); // 800F4494
  if (crb(c,2)) { goto L_800F44A8; } // 800F4498
  c->r[3]=c->r[31]+0x00000044u; // 800F449C
  c->r[4]=c->r[31]+0x000003CCu; // 800F44A0
  c->lr=0x800F44A8u; f_800361A0(c); // 800F44A4
L_800F44A8:;
  c->r[6]=0u+0x803A0000u; // 800F44A8
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F44AC
  c->r[5]=c->r[31]+0x00000044u; // 800F44B0
  c->r[4]=0u+0x00000000u; // 800F44B4
  c->r[6]=c->r[6]+0xFFFFEF68u; // 800F44B8
  c->lr=0x800F44C0u; f_801FBEC0(c); // 800F44BC
L_800F44C0:;
  c->r[3]=c->r[31]|c->r[31]; // 800F44C0
  c->r[4]=0u+0x00000000u; // 800F44C4
  c->lr=0x800F44CCu; f_801F7C00(c); // 800F44C8
  c->r[7]=0u+0x803D0000u; // 800F44CC
  {uint32_t ea=c->r[7]+0x00005040u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F44D0
  c->r[3]=c->r[31]|c->r[31]; // 800F44D4
  c->r[4]=c->r[1]+0x0000000Cu; // 800F44D8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F44DC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F44E0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F44E4
  W32(c->r[1]+0x00000010u,c->r[5]); // 800F44E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F44EC
  c->lr=0x800F44F4u; f_800F4508(c); // 800F44F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F44F4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F44F8
  c->lr=c->r[0]; // 800F44FC
  c->r[1]=c->r[1]+0x00000040u; // 800F4500
  return; // 800F4504
}

// fn_800F4508
void f_800F4508(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4508
  c->r[0]=c->lr; // 800F450C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4510
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4514
  c->r[31]=c->r[4]|c->r[4]; // 800F4518
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F451C
  c->r[30]=c->r[3]|c->r[3]; // 800F4520
  c->r[3]=c->r[31]|c->r[31]; // 800F4524
  c->lr=0x800F452Cu; f_802B9FDC(c); // 800F4528
  cmps(c,0,(int32_t)c->r[3],0); // 800F452C
  if (crb(c,2)) { goto L_800F454C; } // 800F4530
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F4534
  c->r[0]=R32(c->r[31]+0x00000004u); // 800F4538
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800F453C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800F4540
  c->r[0]=R32(c->r[31]+0x00000008u); // 800F4544
  W32(c->r[30]+0x00000024u,c->r[0]); // 800F4548
L_800F454C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F454C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4550
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4554
  c->lr=c->r[0]; // 800F4558
  c->r[1]=c->r[1]+0x00000010u; // 800F455C
  return; // 800F4560
}

// fn_800F4564
void f_800F4564(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4564
  c->r[0]=c->lr; // 800F4568
  c->r[4]=0u+0x00000000u; // 800F456C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F4570
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F4574
  c->r[31]=c->r[3]|c->r[3]; // 800F4578
  c->r[3]=R32(c->r[3]+0x00000438u); // 800F457C
  c->lr=0x800F4584u; f_801FAF00(c); // 800F4580
  cmps(c,0,(int32_t)c->r[3],0); // 800F4584
  if (!crb(c,2)) { goto L_800F462C; } // 800F4588
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800F458C
  c->r[4]=c->r[13]+0xFFFF8698u; // 800F4590
  c->r[3]=c->r[31]|c->r[31]; // 800F4594
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F4598
  c->r[0]=R16(c->r[4]+c->r[0]); // 800F459C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800F45A0
  c->lr=0x800F45A8u; f_801F5AB4(c); // 800F45A4
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F45A8
  c->r[3]=c->r[31]+0x0000002Cu; // 800F45AC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F45B0
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800F45B4
  c->r[0]=c->r[0]|0x00000004u; // 800F45B8
  c->r[4]=c->r[4]+0x0000005Cu; // 800F45BC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F45C0
  c->lr=0x800F45C8u; f_800361A0(c); // 800F45C4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F45C8
  c->r[3]=c->r[31]+0x00000060u; // 800F45CC
  c->r[4]=c->r[4]+0x00000068u; // 800F45D0
  c->lr=0x800F45D8u; f_800361A0(c); // 800F45D4
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800F45D8
  c->r[3]=0u+0x805D0000u; // 800F45DC
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F45E0
  c->r[3]=c->r[3]+0x00006CF8u; // 800F45E4
  c->r[4]=c->r[1]+0x00000008u; // 800F45E8
  c->r[5]=0u+0x00040000u; // 800F45EC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F45F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F45F4
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F45F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F45FC
  c->lr=0x800F4604u; f_802236F8(c); // 800F4600
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800F4604
  c->r[3]=c->r[31]|c->r[31]; // 800F4608
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F460C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F4610
  c->ctr=c->r[12]; // 800F4614
  if (true) { c->lr=0x800F461Cu; dispatch(c,c->ctr); } // 800F4618
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F461C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F4620
  c->lr=0x800F4628u; f_8025037C(c); // 800F4624
  goto L_800F464C; // 800F4628
L_800F462C:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F462C
  c->r[3]=c->r[31]+0x0000002Cu; // 800F4630
  c->r[4]=c->r[4]+0x0000005Cu; // 800F4634
  c->lr=0x800F463Cu; f_800361A0(c); // 800F4638
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F463C
  c->r[3]=c->r[31]+0x00000060u; // 800F4640
  c->r[4]=c->r[4]+0x00000068u; // 800F4644
  c->lr=0x800F464Cu; f_800361A0(c); // 800F4648
L_800F464C:;
  c->r[3]=c->r[31]|c->r[31]; // 800F464C
  c->r[4]=0u+0x00000000u; // 800F4650
  c->lr=0x800F4658u; f_801F7C00(c); // 800F4654
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F4658
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F465C
  c->lr=c->r[0]; // 800F4660
  c->r[1]=c->r[1]+0x00000020u; // 800F4664
  return; // 800F4668
}

// fn_800F466C
void f_800F466C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F466C
  c->r[0]=c->lr; // 800F4670
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4674
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4678
  c->r[31]=c->r[3]|c->r[3]; // 800F467C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F4680
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F4684
  c->lr=0x800F468Cu; f_802501B0(c); // 800F4688
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F468C
  c->r[6]=0u+0x00000000u; // 800F4690
  c->r[0]=0u+0x00000001u; // 800F4694
  c->r[3]=c->r[31]+0x0000002Cu; // 800F4698
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800F469C
  c->r[4]=c->r[31]+0x000003CCu; // 800F46A0
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F46A4
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800F46A8
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800F46AC
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800F46B0
  c->r[0]=rotl(c->r[5],0)&0xFFFFDFFFu; // 800F46B4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F46B8
  c->lr=0x800F46C0u; f_800361A0(c); // 800F46BC
  c->r[3]=c->r[31]+0x00000060u; // 800F46C0
  c->r[4]=c->r[31]+0x000003D8u; // 800F46C4
  c->lr=0x800F46CCu; f_800361A0(c); // 800F46C8
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800F46CC
  c->r[4]=c->r[13]+0xFFFF8698u; // 800F46D0
  c->r[3]=c->r[31]|c->r[31]; // 800F46D4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F46D8
  c->r[0]=R16(c->r[4]+c->r[0]); // 800F46DC
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800F46E0
  c->lr=0x800F46E8u; f_801F5AB4(c); // 800F46E4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F46E8
  c->r[3]=c->r[31]|c->r[31]; // 800F46EC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F46F0
  c->ctr=c->r[12]; // 800F46F4
  if (true) { c->lr=0x800F46FCu; dispatch(c,c->ctr); } // 800F46F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F46FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4700
  c->lr=c->r[0]; // 800F4704
  c->r[1]=c->r[1]+0x00000010u; // 800F4708
  return; // 800F470C
}

// fn_800F4710
void f_800F4710(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4710
  c->r[0]=c->lr; // 800F4714
  c->r[4]=0u+0x000000E1u; // 800F4718
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F471C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4720
  c->r[31]=c->r[3]|c->r[3]; // 800F4724
  c->r[3]=c->r[3]+0x00000210u; // 800F4728
  c->lr=0x800F4730u; f_80221630(c); // 800F472C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4730
  if (!crb(c,2)) { goto L_800F4740; } // 800F4734
  c->r[3]=0u+0x00000000u; // 800F4738
  goto L_800F476C; // 800F473C
L_800F4740:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800F4740
  c->r[3]=0u+0x803D0000u; // 800F4744
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F4748
  c->r[3]=c->r[3]+0x00005030u; // 800F474C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F4750
  c->r[5]=0u+0x00000000u; // 800F4754
  c->r[3]=R32(c->r[3]+c->r[0]); // 800F4758
  c->r[4]=c->r[4]+0x0000010Cu; // 800F475C
  c->lr=0x800F4764u; f_8024EE50(c); // 800F4760
  c->r[0]=cntlz(c->r[3]); // 800F4764
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F4768
L_800F476C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F476C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4770
  c->lr=c->r[0]; // 800F4774
  c->r[1]=c->r[1]+0x00000010u; // 800F4778
  return; // 800F477C
}

// fn_800F4780
void f_800F4780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4780
  c->r[0]=c->lr; // 800F4784
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F478C
  c->r[31]=0u+0x805D0000u; // 800F4790
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4794
  c->r[30]=c->r[3]|c->r[3]; // 800F4798
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F479C
  c->lr=0x800F47A4u; f_80045264(c); // 800F47A0
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800F47A4
  c->r[4]=c->r[13]+0xFFFF8698u; // 800F47A8
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800F47AC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F47B0
  c->r[0]=R16(c->r[4]+c->r[0]); // 800F47B4
  cmpu(c,0,c->r[0],c->r[3]); // 800F47B8
  if (!crb(c,2)) { goto L_800F47F8; } // 800F47BC
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F47C0
  c->lr=0x800F47C8u; f_80037AF0(c); // 800F47C4
  cmpu(c,0,c->r[3],c->r[30]); // 800F47C8
  if (!crb(c,2)) { goto L_800F47F8; } // 800F47CC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800F47D0
  cmps(c,0,(int32_t)c->r[0],101); // 800F47D4
  if (crb(c,2)) { goto L_800F47F8; } // 800F47D8
  {uint32_t ea=c->r[2]+0xFFFFA9C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F47DC
  c->r[3]=c->r[30]|c->r[30]; // 800F47E0
  c->r[4]=0u+0x00000065u; // 800F47E4
  c->r[5]=0u+0x00000000u; // 800F47E8
  c->r[6]=0u+0x00000000u; // 800F47EC
  c->r[7]=0u+0x00000000u; // 800F47F0
  c->lr=0x800F47F8u; f_801F4D44(c); // 800F47F4
L_800F47F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F47F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F47FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4800
  c->lr=c->r[0]; // 800F4804
  c->r[1]=c->r[1]+0x00000010u; // 800F4808
  return; // 800F480C
}

// fn_800F4810
void f_800F4810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4810
  c->r[0]=c->lr; // 800F4814
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F4818
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F481C
  c->r[31]=0u+0x803D0000u; // 800F4820
  c->r[31]=c->r[31]+0x00005030u; // 800F4824
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F4828
  c->r[30]=c->r[3]|c->r[3]; // 800F482C
  c->lr=0x800F4834u; f_801F4F28(c); // 800F4830
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800F4834
  cmps(c,0,(int32_t)c->r[0],101); // 800F4838
  if (crb(c,2)) { goto L_800F488C; } // 800F483C
  if (!crb(c,0)) { goto L_800F4850; } // 800F4840
  cmps(c,0,(int32_t)c->r[0],100); // 800F4844
  if (!crb(c,0)) { goto L_800F485C; } // 800F4848
  goto L_800F48E8; // 800F484C
L_800F4850:;
  cmps(c,0,(int32_t)c->r[0],103); // 800F4850
  if (!crb(c,0)) { goto L_800F48E8; } // 800F4854
  goto L_800F48BC; // 800F4858
L_800F485C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F485C
  c->r[5]=c->r[31]+0x0000001Cu; // 800F4860
  c->r[3]=c->r[30]|c->r[30]; // 800F4864
  c->r[4]=c->r[1]+0x00000020u; // 800F4868
  c->r[7]=R32(c->r[31]+0x0000001Cu); // 800F486C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F4870
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F4874
  W32(c->r[1]+0x00000020u,c->r[7]); // 800F4878
  W32(c->r[1]+0x00000024u,c->r[6]); // 800F487C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F4880
  c->lr=0x800F4888u; f_800F4508(c); // 800F4884
  goto L_800F48E8; // 800F4888
L_800F488C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F488C
  c->r[5]=c->r[31]+0x00000028u; // 800F4890
  c->r[3]=c->r[30]|c->r[30]; // 800F4894
  c->r[4]=c->r[1]+0x00000014u; // 800F4898
  c->r[7]=R32(c->r[31]+0x00000028u); // 800F489C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F48A0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F48A4
  W32(c->r[1]+0x00000014u,c->r[7]); // 800F48A8
  W32(c->r[1]+0x00000018u,c->r[6]); // 800F48AC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F48B0
  c->lr=0x800F48B8u; f_800F4508(c); // 800F48B4
  goto L_800F48E8; // 800F48B8
L_800F48BC:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F48BC
  c->r[5]=c->r[31]+0x00000034u; // 800F48C0
  c->r[3]=c->r[30]|c->r[30]; // 800F48C4
  c->r[4]=c->r[1]+0x00000008u; // 800F48C8
  c->r[7]=R32(c->r[31]+0x00000034u); // 800F48CC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F48D0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F48D4
  W32(c->r[1]+0x00000008u,c->r[7]); // 800F48D8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F48DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F48E0
  c->lr=0x800F48E8u; f_800F4508(c); // 800F48E4
L_800F48E8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F48E8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F48EC
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F48F0
  c->lr=c->r[0]; // 800F48F4
  c->r[1]=c->r[1]+0x00000040u; // 800F48F8
  return; // 800F48FC
}

// fn_800F4900
void f_800F4900(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4900
  c->r[0]=c->lr; // 800F4904
  c->r[7]=0u+0x803D0000u; // 800F4908
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F490C
  c->r[4]=c->r[1]+0x00000008u; // 800F4910
  {uint32_t ea=c->r[7]+0x00005070u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F4914
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F4918
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F491C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F4920
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F4924
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F4928
  c->lr=0x800F4930u; f_800F4508(c); // 800F492C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F4930
  c->lr=c->r[0]; // 800F4934
  c->r[1]=c->r[1]+0x00000020u; // 800F4938
  return; // 800F493C
}

// fn_800F4940
void f_800F4940(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4940
  c->r[0]=c->lr; // 800F4944
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800F4948
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800F494C
  W32(c->r[1]+0x000000C8u,c->r[30]); // 800F4950
  c->r[30]=c->r[3]|c->r[3]; // 800F4954
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F4958
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800F495C
  cmps(c,0,(int32_t)c->r[0],0); // 800F4960
  if (!crb(c,2)) { goto L_800F4A3C; } // 800F4964
  c->r[3]=R16(c->r[3]+0x000003BEu); // 800F4968
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800F496C
  if (crb(c,2)) { goto L_800F4A3C; } // 800F4970
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800F4974
  cmps(c,0,(int32_t)c->r[0],128); // 800F4978
  if (!crb(c,2)) { goto L_800F49A4; } // 800F497C
  c->r[3]=0u+0x80620000u; // 800F4980
  c->r[3]=c->r[3]+0x00007688u; // 800F4984
  c->r[3]=R32(c->r[3]+0x00000014u); // 800F4988
  cmps(c,0,(int32_t)c->r[3],0); // 800F498C
  if (crb(c,2)) { goto L_800F49A4; } // 800F4990
  c->r[4]=0u+0x00000002u; // 800F4994
  c->lr=0x800F499Cu; f_80037670(c); // 800F4998
  cmps(c,0,(int32_t)c->r[3],0); // 800F499C
  if (!crb(c,2)) { goto L_800F4A3C; } // 800F49A0
L_800F49A4:;
  {uint32_t ea=c->r[2]+0xFFFFA9D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F49A4
  c->r[3]=c->r[1]+0x00000014u; // 800F49A8
  c->r[4]=c->r[30]+0x0000002Cu; // 800F49AC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800F49B0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800F49B4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800F49B8
  c->lr=0x800F49C0u; f_800361A0(c); // 800F49BC
  c->r[6]=0u+0x803A0000u; // 800F49C0
  {uint32_t ea=c->r[6]+0xFFFFEF74u; c->r[8]=R32(ea); c->r[6]=ea;} // 800F49C4
  c->r[3]=0u+0x803A0000u; // 800F49C8
  c->r[5]=c->r[1]+0x00000030u; // 800F49CC
  c->r[7]=R32(c->r[6]+0x00000004u); // 800F49D0
  c->r[3]=c->r[3]+0xFFFFEF80u; // 800F49D4
  c->r[0]=R32(c->r[6]+0x00000008u); // 800F49D8
  c->r[4]=c->r[3]+0x00000009u; // 800F49DC
  W32(c->r[1]+0x00000008u,c->r[8]); // 800F49E0
  c->r[6]=0u+0x00000001u; // 800F49E4
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 800F49E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F49EC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F49F0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F49F4
  c->lr=0x800F49FCu; f_80257018(c); // 800F49F8
  c->r[3]=c->r[1]+0x00000030u; // 800F49FC
  c->r[4]=c->r[1]+0x00000008u; // 800F4A00
  c->r[5]=c->r[1]+0x00000014u; // 800F4A04
  c->lr=0x800F4A0Cu; f_80296750(c); // 800F4A08
  c->r[31]=0u+0x80550000u; // 800F4A0C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4A10
  c->r[31]=c->r[31]+0x00003D60u; // 800F4A14
  c->r[5]=c->r[30]|c->r[30]; // 800F4A18
  c->r[3]=c->r[31]+0x00000010u; // 800F4A1C
  c->r[6]=c->r[1]+0x00000014u; // 800F4A20
  c->r[7]=c->r[1]+0x00000060u; // 800F4A24
  c->r[4]=0u+0x000001FFu; // 800F4A28
  c->lr=0x800F4A30u; f_80226910(c); // 800F4A2C
  c->r[3]=c->r[31]+0x00000010u; // 800F4A30
  c->r[4]=c->r[1]+0x00000060u; // 800F4A34
  c->lr=0x800F4A3Cu; f_80226D68(c); // 800F4A38
L_800F4A3C:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800F4A3C
  c->r[31]=R32(c->r[1]+0x000000CCu); // 800F4A40
  c->r[30]=R32(c->r[1]+0x000000C8u); // 800F4A44
  c->lr=c->r[0]; // 800F4A48
  c->r[1]=c->r[1]+0x000000D0u; // 800F4A4C
  return; // 800F4A50
}

// fn_800F4A54
void f_800F4A54(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800F4A54
  W8(c->r[3]+0x00000074u,c->r[0]); // 800F4A58
  return; // 800F4A5C
}

// fn_800F4A60
void f_800F4A60(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800F4A60
  W8(c->r[3]+0x00000074u,c->r[0]); // 800F4A64
  return; // 800F4A68
}

// fn_800F4A6C
void f_800F4A6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4A6C
  c->r[0]=c->lr; // 800F4A70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4A74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4A78
  c->r[31]=c->r[3]|c->r[3]; // 800F4A7C
  c->r[3]=c->r[3]+0x00000210u; // 800F4A80
  c->lr=0x800F4A88u; f_8004BAD4(c); // 800F4A84
  cmps(c,0,(int32_t)c->r[3],0); // 800F4A88
  if (crb(c,2)) { goto L_800F4AFC; } // 800F4A8C
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F4A90
  c->r[4]=c->r[31]|c->r[31]; // 800F4A94
  c->r[3]=c->r[31]+0x00000210u; // 800F4A98
  c->r[0]=c->r[0]|0xAA000000u; // 800F4A9C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F4AA0
  c->lr=0x800F4AA8u; f_80043E44(c); // 800F4AA4
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4AA8
  c->r[3]=c->r[31]+0x00000210u; // 800F4AAC
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F4AB0
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F4AB4
  c->lr=0x800F4ABCu; f_80043E34(c); // 800F4AB8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F4ABC
  c->r[4]=0u+0x803A0000u; // 800F4AC0
  c->r[4]=c->r[4]+0xFFFFEF80u; // 800F4AC4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F4AC8
  c->r[4]=c->r[4]+0x00000009u; // 800F4ACC
  c->lr=0x800F4AD4u; f_80256EC4(c); // 800F4AD0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F4AD4
  c->r[5]=c->r[3]|c->r[3]; // 800F4AD8
  c->r[3]=c->r[31]+0x00000210u; // 800F4ADC
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800F4AE0
  c->lr=0x800F4AE8u; f_8004BAC8(c); // 800F4AE4
  {uint32_t ea=c->r[2]+0xFFFFA9C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4AE8
  c->r[3]=c->r[31]+0x00000210u; // 800F4AEC
  c->f[2]=c->f[1]; // 800F4AF0
  c->f[3]=c->f[1]; // 800F4AF4
  c->lr=0x800F4AFCu; f_80043E24(c); // 800F4AF8
L_800F4AFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4AFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4B00
  c->lr=c->r[0]; // 800F4B04
  c->r[1]=c->r[1]+0x00000010u; // 800F4B08
  return; // 800F4B0C
}

// fn_800F4B10
void f_800F4B10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4B10
  c->r[0]=c->lr; // 800F4B14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4B18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4B1C
  c->r[31]=c->r[3]|c->r[3]; // 800F4B20
  c->r[3]=c->r[3]+0x00000210u; // 800F4B24
  c->lr=0x800F4B2Cu; f_80221698(c); // 800F4B28
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F4B2C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4B30
  if (crb(c,2)) { goto L_800F4B54; } // 800F4B34
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800F4B38
  cmps(c,0,(int32_t)c->r[0],0); // 800F4B3C
  if (crb(c,2)) { goto L_800F4B54; } // 800F4B40
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F4B44
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800F4B48
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F4B4C
  goto L_800F4B60; // 800F4B50
L_800F4B54:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F4B54
  c->r[0]=c->r[0]|0x80000000u; // 800F4B58
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F4B5C
L_800F4B60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4B60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4B64
  c->lr=c->r[0]; // 800F4B68
  c->r[1]=c->r[1]+0x00000010u; // 800F4B6C
  return; // 800F4B70
}

// fn_800F4B74
void f_800F4B74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4B74
  c->r[0]=c->lr; // 800F4B78
  cmps(c,0,(int32_t)c->r[3],0); // 800F4B7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4B80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4B84
  c->r[31]=c->r[4]|c->r[4]; // 800F4B88
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4B8C
  c->r[30]=c->r[3]|c->r[3]; // 800F4B90
  if (crb(c,2)) { goto L_800F4BB0; } // 800F4B94
  c->r[4]=0u+0x00000000u; // 800F4B98
  c->lr=0x800F4BA0u; f_8026A06C(c); // 800F4B9C
  cmps(c,0,(int32_t)c->r[31],0); // 800F4BA0
  if (!crb(c,1)) { goto L_800F4BB0; } // 800F4BA4
  c->r[3]=c->r[30]|c->r[30]; // 800F4BA8
  c->lr=0x800F4BB0u; f_8026A268(c); // 800F4BAC
L_800F4BB0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4BB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4BB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4BB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4BBC
  c->lr=c->r[0]; // 800F4BC0
  c->r[1]=c->r[1]+0x00000010u; // 800F4BC4
  return; // 800F4BC8
}

// fn_800F4BCC
void f_800F4BCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4BCC
  c->r[0]=c->lr; // 800F4BD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F4BD4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800F4BD8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800F4BDC
  c->r[4]=0u+0x00000000u; // 800F4BE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4BE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4BE8
  c->r[30]=c->r[3]|c->r[3]; // 800F4BEC
  c->lr=0x800F4BF4u; f_801F57D0(c); // 800F4BF0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F4BF4
  c->r[3]=c->r[30]|c->r[30]; // 800F4BF8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800F4BFC
  c->ctr=c->r[12]; // 800F4C00
  if (true) { c->lr=0x800F4C08u; dispatch(c,c->ctr); } // 800F4C04
  c->r[3]=c->r[30]|c->r[30]; // 800F4C08
  c->lr=0x800F4C10u; f_801F4B94(c); // 800F4C0C
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800F4C10
  c->r[0]=0u+0x00000000u; // 800F4C14
  {uint32_t ea=c->r[2]+0xFFFFA9E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4C18
  c->r[5]=0u+0x00000003u; // 800F4C1C
  c->r[7]=c->r[3]|0x00000804u; // 800F4C20
  c->r[4]=0u+0x00000065u; // 800F4C24
  c->r[31]=0u+0x00000001u; // 800F4C28
  c->r[3]=0u+0x80550000u; // 800F4C2C
  W8(c->r[30]+0x0000006Cu,c->r[5]); // 800F4C30
  c->f[3]=c->f[1]; // 800F4C34
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800F4C38
  c->r[3]=c->r[3]+0x00003D60u; // 800F4C3C
  W8(c->r[30]+0x0000006Du,c->r[4]); // 800F4C40
  c->r[4]=c->r[30]+0x0000002Cu; // 800F4C44
  {uint32_t ea=c->r[2]+0xFFFFA9E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F4C48
  W16(c->r[30]+0x000003BEu,c->r[7]); // 800F4C4C
  c->r[5]=c->r[30]+0x00000030u; // 800F4C50
  c->r[6]=0u+0x00000000u; // 800F4C54
  c->r[7]=0u+0x00000000u; // 800F4C58
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800F4C5C
  W8(c->r[30]+0x00000074u,c->r[0]); // 800F4C60
  W8(c->r[30]+0x00000075u,c->r[0]); // 800F4C64
  c->lr=0x800F4C6Cu; f_801D5488(c); // 800F4C68
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F4C6C
  c->r[3]=c->r[30]|c->r[30]; // 800F4C70
  c->lr=0x800F4C78u; f_801F58BC(c); // 800F4C74
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F4C78
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800F4C7C
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4C80
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F4C84
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800F4C88
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800F4C8C
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800F4C90
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F4C94
  c->lr=0x800F4C9Cu; f_802501B0(c); // 800F4C98
  c->r[3]=0u+0x805D0000u; // 800F4C9C
  c->r[4]=c->r[30]+0x0000002Cu; // 800F4CA0
  c->r[3]=c->r[3]+0x000078B0u; // 800F4CA4
  c->lr=0x800F4CACu; f_802351CC(c); // 800F4CA8
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F4CAC
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800F4CB0
  c->r[3]=c->r[30]|c->r[30]; // 800F4CB4
  c->lr=0x800F4CBCu; f_801F56F4(c); // 800F4CB8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F4CBC
  c->r[3]=c->r[30]|c->r[30]; // 800F4CC0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F4CC4
  c->ctr=c->r[12]; // 800F4CC8
  if (true) { c->lr=0x800F4CD0u; dispatch(c,c->ctr); } // 800F4CCC
  c->r[3]=c->r[30]|c->r[30]; // 800F4CD0
  c->lr=0x800F4CD8u; f_800F55CC(c); // 800F4CD4
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800F4CD8
  W32(c->r[30]+0x00000444u,c->r[31]); // 800F4CDC
  c->lr=0x800F4CE4u; f_8024E174(c); // 800F4CE0
  W32(c->r[30]+0x00000438u,c->r[3]); // 800F4CE4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800F4CE8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800F4CEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4CF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4CF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F4CF8
  c->lr=c->r[0]; // 800F4CFC
  c->r[1]=c->r[1]+0x00000020u; // 800F4D00
  return; // 800F4D04
}

// fn_800F4D08
void f_800F4D08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4D08
  c->r[0]=c->lr; // 800F4D0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4D10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4D14
  c->r[31]=c->r[3]|c->r[3]; // 800F4D18
  c->lr=0x800F4D20u; f_800F52CC(c); // 800F4D1C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F4D20
  c->r[3]=c->r[31]|c->r[31]; // 800F4D24
  c->r[12]=R32(c->r[12]+0x00000068u); // 800F4D28
  c->ctr=c->r[12]; // 800F4D2C
  if (true) { c->lr=0x800F4D34u; dispatch(c,c->ctr); } // 800F4D30
  c->r[3]=c->r[31]|c->r[31]; // 800F4D34
  c->lr=0x800F4D3Cu; f_801F4C0C(c); // 800F4D38
  c->r[3]=c->r[31]|c->r[31]; // 800F4D3C
  c->lr=0x800F4D44u; f_800F54EC(c); // 800F4D40
  c->r[3]=c->r[31]|c->r[31]; // 800F4D44
  c->lr=0x800F4D4Cu; f_801F56F4(c); // 800F4D48
  c->r[3]=c->r[31]|c->r[31]; // 800F4D4C
  c->lr=0x800F4D54u; f_800F566C(c); // 800F4D50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4D54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4D58
  c->lr=c->r[0]; // 800F4D5C
  c->r[1]=c->r[1]+0x00000010u; // 800F4D60
  return; // 800F4D64
}

// fn_800F4D68
void f_800F4D68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4D68
  c->r[0]=c->lr; // 800F4D6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4D70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4D74
  c->r[31]=c->r[3]|c->r[3]; // 800F4D78
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F4D7C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F4D80
  c->lr=0x800F4D88u; f_802501B0(c); // 800F4D84
  c->r[3]=c->r[31]|c->r[31]; // 800F4D88
  c->r[4]=0u+0x00000000u; // 800F4D8C
  c->lr=0x800F4D94u; f_801F5244(c); // 800F4D90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4D94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4D98
  c->lr=c->r[0]; // 800F4D9C
  c->r[1]=c->r[1]+0x00000010u; // 800F4DA0
  return; // 800F4DA4
}

// fn_800F4DA8
void f_800F4DA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4DA8
  c->r[0]=c->lr; // 800F4DAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4DB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4DB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4DB8
  c->r[30]=c->r[3]|c->r[3]; // 800F4DBC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F4DC0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F4DC4
  c->lr=0x800F4DCCu; f_802501B0(c); // 800F4DC8
  c->r[3]=c->r[30]|c->r[30]; // 800F4DCC
  c->r[4]=0u+0x00000000u; // 800F4DD0
  c->lr=0x800F4DD8u; f_801F5244(c); // 800F4DD4
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F4DD8
  c->r[3]=c->r[30]+0x0000002Cu; // 800F4DDC
  c->r[4]=c->r[4]+0x0000005Cu; // 800F4DE0
  c->lr=0x800F4DE8u; f_800361A0(c); // 800F4DE4
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F4DE8
  c->r[3]=c->r[30]|c->r[30]; // 800F4DEC
  c->lr=0x800F4DF4u; f_801F5418(c); // 800F4DF0
  cmps(c,0,(int32_t)c->r[3],0); // 800F4DF4
  if (!crb(c,0)) { goto L_800F4E30; } // 800F4DF8
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800F4DFC
  c->r[3]=0u+0x00000001u; // 800F4E00
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F4E04
  c->r[3]=c->r[30]|c->r[30]; // 800F4E08
  c->r[0]=c->r[0]|0x00000080u; // 800F4E0C
  {uint32_t ea=c->r[2]+0xFFFFA9E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4E10
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800F4E14
  c->r[4]=0u+0x00000064u; // 800F4E18
  c->r[5]=0u+0x00000000u; // 800F4E1C
  c->r[6]=0u+0x00000000u; // 800F4E20
  c->r[7]=0u+0x00000000u; // 800F4E24
  c->lr=0x800F4E2Cu; f_801F4D44(c); // 800F4E28
  goto L_800F4E78; // 800F4E2C
L_800F4E30:;
  c->r[31]=0u+0x805D0000u; // 800F4E30
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F4E34
  c->lr=0x800F4E3Cu; f_800447E4(c); // 800F4E38
  cmpu(c,0,c->r[3],0x00000001u); // 800F4E3C
  if (!crb(c,2)) { goto L_800F4E50; } // 800F4E40
  c->r[0]=0u+0x00000000u; // 800F4E44
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F4E48
  goto L_800F4E70; // 800F4E4C
L_800F4E50:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F4E50
  c->r[0]=R8(c->r[30]+0x00000074u); // 800F4E54
  c->r[3]=R8(c->r[3]+0x0000006Fu); // 800F4E58
  cmps(c,0,(int32_t)c->r[0],0); // 800F4E5C
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F4E60
  if (crb(c,2)) { goto L_800F4E70; } // 800F4E64
  c->r[0]=0u+0x00000000u; // 800F4E68
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F4E6C
L_800F4E70:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4E70
  c->lr=0x800F4E78u; f_801F5B14(c); // 800F4E74
L_800F4E78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4E78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4E7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4E80
  c->lr=c->r[0]; // 800F4E84
  c->r[1]=c->r[1]+0x00000010u; // 800F4E88
  return; // 800F4E8C
}

// fn_800F4E90
void f_800F4E90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4E90
  c->r[0]=c->lr; // 800F4E94
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F4E98
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F4E9C
  c->r[31]=c->r[3]|c->r[3]; // 800F4EA0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F4EA4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F4EA8
  c->lr=0x800F4EB0u; f_802501B0(c); // 800F4EAC
  c->r[3]=c->r[31]+0x00000038u; // 800F4EB0
  c->r[4]=c->r[31]+0x0000002Cu; // 800F4EB4
  c->lr=0x800F4EBCu; f_800361A0(c); // 800F4EB8
  {uint32_t ea=c->r[2]+0xFFFFA9E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4EBC
  c->r[3]=0u+0x80550000u; // 800F4EC0
  c->r[3]=c->r[3]+0x00003D60u; // 800F4EC4
  c->r[4]=c->r[31]+0x00000038u; // 800F4EC8
  c->f[2]=c->f[1]; // 800F4ECC
  c->r[5]=c->r[1]+0x00000008u; // 800F4ED0
  c->f[3]=c->f[1]; // 800F4ED4
  c->r[6]=0u+0x00000000u; // 800F4ED8
  c->r[7]=0u+0x00000000u; // 800F4EDC
  c->lr=0x800F4EE4u; f_801D5488(c); // 800F4EE0
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F4EE4
  c->r[3]=c->r[31]+0x00000060u; // 800F4EE8
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F4EEC
  c->r[4]=c->r[5]+0x00000068u; // 800F4EF0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800F4EF4
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F4EF8
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800F4EFC
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F4F00
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800F4F04
  c->lr=0x800F4F0Cu; f_800361A0(c); // 800F4F08
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F4F0C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F4F10
  c->lr=0x800F4F18u; f_802501B0(c); // 800F4F14
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800F4F18
  c->r[0]=0u+0x00000001u; // 800F4F1C
  {uint32_t ea=c->r[2]+0xFFFFA9E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4F20
  c->r[4]=c->r[31]+0x0000002Cu; // 800F4F24
  {uint32_t ea=c->r[2]+0xFFFFA9ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F4F28
  c->r[3]=c->r[3]|0x00002000u; // 800F4F2C
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800F4F30
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F4F34
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800F4F38
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800F4F3C
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800F4F40
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F4F44
  c->r[3]=c->r[3]+0x0000005Cu; // 800F4F48
  c->lr=0x800F4F50u; f_800361A0(c); // 800F4F4C
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F4F50
  c->r[4]=0u+0x00000040u; // 800F4F54
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F4F58
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800F4F5C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F4F60
  c->r[3]=c->r[3]+0x0000001Cu; // 800F4F64
  c->lr=0x800F4F6Cu; f_802518A4(c); // 800F4F68
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F4F6C
  c->r[4]=0u+0x00000006u; // 800F4F70
  c->r[3]=c->r[3]+0x0000001Cu; // 800F4F74
  c->lr=0x800F4F7Cu; f_80251824(c); // 800F4F78
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F4F7C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F4F80
  c->lr=0x800F4F88u; f_802501B0(c); // 800F4F84
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F4F88
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800F4F8C
  cmps(c,0,(int32_t)c->r[0],0); // 800F4F90
  if (crb(c,2)) { goto L_800F503C; } // 800F4F94
  c->r[3]=c->r[3]+0x00000068u; // 800F4F98
  c->r[4]=c->r[31]+0x00000060u; // 800F4F9C
  c->lr=0x800F4FA4u; f_800361A0(c); // 800F4FA0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F4FA4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F4FA8
  c->lr=0x800F4FB0u; f_8025037C(c); // 800F4FAC
  c->r[6]=R32(c->r[31]+0x00000394u); // 800F4FB0
  c->r[3]=c->r[1]+0x00000024u; // 800F4FB4
  c->r[4]=c->r[31]+0x00000060u; // 800F4FB8
  c->r[5]=c->r[1]+0x00000030u; // 800F4FBC
  c->r[6]=c->r[6]+0x000000B0u; // 800F4FC0
  c->r[7]=0u+0x00000000u; // 800F4FC4
  c->lr=0x800F4FCCu; f_8002BE64(c); // 800F4FC8
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800F4FCC
  c->r[3]=0u+0x805D0000u; // 800F4FD0
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F4FD4
  c->r[3]=c->r[3]+0x00003F6Cu; // 800F4FD8
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4FDC
  c->r[4]=c->r[31]|c->r[31]; // 800F4FE0
  W32(c->r[1]+0x00000018u,c->r[5]); // 800F4FE4
  c->r[7]=c->r[1]+0x00000018u; // 800F4FE8
  c->r[6]=0u+0x00000000u; // 800F4FEC
  c->r[8]=0u+0x00000000u; // 800F4FF0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F4FF4
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F4FF8
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F4FFC
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F5000
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F5004
  c->lr=0x800F500Cu; f_801FA6A4(c); // 800F5008
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800F500C
  cmps(c,0,(int32_t)c->r[0],0); // 800F5010
  if (crb(c,2)) { goto L_800F5024; } // 800F5014
  c->r[3]=c->r[31]+0x00000044u; // 800F5018
  c->r[4]=c->r[31]+0x000003CCu; // 800F501C
  c->lr=0x800F5024u; f_800361A0(c); // 800F5020
L_800F5024:;
  c->r[6]=0u+0x803A0000u; // 800F5024
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F5028
  c->r[5]=c->r[31]+0x00000044u; // 800F502C
  c->r[4]=0u+0x00000000u; // 800F5030
  c->r[6]=c->r[6]+0xFFFFEF90u; // 800F5034
  c->lr=0x800F503Cu; f_801FBEC0(c); // 800F5038
L_800F503C:;
  c->r[3]=c->r[31]|c->r[31]; // 800F503C
  c->r[4]=0u+0x00000000u; // 800F5040
  c->lr=0x800F5048u; f_801F7C00(c); // 800F5044
  c->r[7]=0u+0x803D0000u; // 800F5048
  {uint32_t ea=c->r[7]+0x000051C0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F504C
  c->r[3]=c->r[31]|c->r[31]; // 800F5050
  c->r[4]=c->r[1]+0x0000000Cu; // 800F5054
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F5058
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F505C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F5060
  W32(c->r[1]+0x00000010u,c->r[5]); // 800F5064
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5068
  c->lr=0x800F5070u; f_800F5084(c); // 800F506C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F5070
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F5074
  c->lr=c->r[0]; // 800F5078
  c->r[1]=c->r[1]+0x00000050u; // 800F507C
  return; // 800F5080
}

// fn_800F5084
void f_800F5084(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5084
  c->r[0]=c->lr; // 800F5088
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F508C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5090
  c->r[31]=c->r[4]|c->r[4]; // 800F5094
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5098
  c->r[30]=c->r[3]|c->r[3]; // 800F509C
  c->r[3]=c->r[31]|c->r[31]; // 800F50A0
  c->lr=0x800F50A8u; f_802B9FDC(c); // 800F50A4
  cmps(c,0,(int32_t)c->r[3],0); // 800F50A8
  if (crb(c,2)) { goto L_800F50C8; } // 800F50AC
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F50B0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800F50B4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800F50B8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800F50BC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800F50C0
  W32(c->r[30]+0x00000024u,c->r[0]); // 800F50C4
L_800F50C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F50C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F50CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F50D0
  c->lr=c->r[0]; // 800F50D4
  c->r[1]=c->r[1]+0x00000010u; // 800F50D8
  return; // 800F50DC
}

// fn_800F50E0
void f_800F50E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F50E0
  c->r[0]=c->lr; // 800F50E4
  c->r[4]=0u+0x00000000u; // 800F50E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F50EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F50F0
  c->r[31]=c->r[3]|c->r[3]; // 800F50F4
  c->r[3]=R32(c->r[3]+0x00000438u); // 800F50F8
  c->lr=0x800F5100u; f_801FAF00(c); // 800F50FC
  cmps(c,0,(int32_t)c->r[3],0); // 800F5100
  if (!crb(c,2)) { goto L_800F5198; } // 800F5104
  c->r[3]=c->r[31]|c->r[31]; // 800F5108
  c->r[4]=0u+0x00000049u; // 800F510C
  c->lr=0x800F5114u; f_801F5AB4(c); // 800F5110
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F5114
  c->r[3]=c->r[31]+0x0000002Cu; // 800F5118
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F511C
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800F5120
  c->r[0]=c->r[0]|0x00000004u; // 800F5124
  c->r[4]=c->r[4]+0x0000005Cu; // 800F5128
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F512C
  c->lr=0x800F5134u; f_800361A0(c); // 800F5130
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F5134
  c->r[3]=c->r[31]+0x00000060u; // 800F5138
  c->r[4]=c->r[4]+0x00000068u; // 800F513C
  c->lr=0x800F5144u; f_800361A0(c); // 800F5140
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800F5144
  c->r[3]=0u+0x805D0000u; // 800F5148
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F514C
  c->r[3]=c->r[3]+0x00006CF8u; // 800F5150
  c->r[4]=c->r[1]+0x00000008u; // 800F5154
  c->r[5]=0u+0x00040000u; // 800F5158
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F515C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F5160
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F5164
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F5168
  c->lr=0x800F5170u; f_802236F8(c); // 800F516C
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800F5170
  c->r[3]=c->r[31]|c->r[31]; // 800F5174
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F5178
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F517C
  c->ctr=c->r[12]; // 800F5180
  if (true) { c->lr=0x800F5188u; dispatch(c,c->ctr); } // 800F5184
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F5188
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F518C
  c->lr=0x800F5194u; f_8025037C(c); // 800F5190
  goto L_800F51B8; // 800F5194
L_800F5198:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F5198
  c->r[3]=c->r[31]+0x0000002Cu; // 800F519C
  c->r[4]=c->r[4]+0x0000005Cu; // 800F51A0
  c->lr=0x800F51A8u; f_800361A0(c); // 800F51A4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F51A8
  c->r[3]=c->r[31]+0x00000060u; // 800F51AC
  c->r[4]=c->r[4]+0x00000068u; // 800F51B0
  c->lr=0x800F51B8u; f_800361A0(c); // 800F51B4
L_800F51B8:;
  c->r[3]=c->r[31]|c->r[31]; // 800F51B8
  c->r[4]=0u+0x00000000u; // 800F51BC
  c->lr=0x800F51C4u; f_801F7C00(c); // 800F51C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F51C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F51C8
  c->lr=c->r[0]; // 800F51CC
  c->r[1]=c->r[1]+0x00000020u; // 800F51D0
  return; // 800F51D4
}

// fn_800F51D8
void f_800F51D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F51D8
  c->r[0]=c->lr; // 800F51DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F51E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F51E4
  c->r[31]=c->r[3]|c->r[3]; // 800F51E8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F51EC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F51F0
  c->lr=0x800F51F8u; f_802501B0(c); // 800F51F4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F51F8
  c->r[6]=0u+0x00000000u; // 800F51FC
  c->r[0]=0u+0x00000001u; // 800F5200
  c->r[3]=c->r[31]+0x0000002Cu; // 800F5204
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800F5208
  c->r[4]=c->r[31]+0x000003CCu; // 800F520C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F5210
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800F5214
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800F5218
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800F521C
  c->r[0]=rotl(c->r[5],0)&0xFFFFDFFFu; // 800F5220
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F5224
  c->lr=0x800F522Cu; f_800361A0(c); // 800F5228
  c->r[3]=c->r[31]+0x00000060u; // 800F522C
  c->r[4]=c->r[31]+0x000003D8u; // 800F5230
  c->lr=0x800F5238u; f_800361A0(c); // 800F5234
  c->r[3]=c->r[31]|c->r[31]; // 800F5238
  c->r[4]=0u+0x00000049u; // 800F523C
  c->lr=0x800F5244u; f_801F5AB4(c); // 800F5240
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F5244
  c->r[3]=c->r[31]|c->r[31]; // 800F5248
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F524C
  c->ctr=c->r[12]; // 800F5250
  if (true) { c->lr=0x800F5258u; dispatch(c,c->ctr); } // 800F5254
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5258
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F525C
  c->lr=c->r[0]; // 800F5260
  c->r[1]=c->r[1]+0x00000010u; // 800F5264
  return; // 800F5268
}

// fn_800F526C
void f_800F526C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F526C
  c->r[0]=c->lr; // 800F5270
  c->r[4]=0u+0x000000E1u; // 800F5274
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5278
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F527C
  c->r[31]=c->r[3]|c->r[3]; // 800F5280
  c->r[3]=c->r[3]+0x00000210u; // 800F5284
  c->lr=0x800F528Cu; f_80221630(c); // 800F5288
  cmps(c,0,(int32_t)c->r[3],0); // 800F528C
  if (!crb(c,2)) { goto L_800F529C; } // 800F5290
  c->r[3]=0u+0x00000000u; // 800F5294
  goto L_800F52B8; // 800F5298
L_800F529C:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F529C
  c->r[3]=0u+0x000004E3u; // 800F52A0
  c->r[5]=0u+0x00000000u; // 800F52A4
  c->r[4]=c->r[4]+0x0000010Cu; // 800F52A8
  c->lr=0x800F52B0u; f_8024EE50(c); // 800F52AC
  c->r[0]=cntlz(c->r[3]); // 800F52B0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F52B4
L_800F52B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F52B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F52BC
  c->lr=c->r[0]; // 800F52C0
  c->r[1]=c->r[1]+0x00000010u; // 800F52C4
  return; // 800F52C8
}

// fn_800F52CC
void f_800F52CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F52CC
  c->r[0]=c->lr; // 800F52D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F52D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F52D8
  c->r[31]=0u+0x805D0000u; // 800F52DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F52E0
  c->r[30]=c->r[3]|c->r[3]; // 800F52E4
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F52E8
  c->lr=0x800F52F0u; f_80045264(c); // 800F52EC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800F52F0
  cmpu(c,0,c->r[0],0x00000049u); // 800F52F4
  if (!crb(c,2)) { goto L_800F5334; } // 800F52F8
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F52FC
  c->lr=0x800F5304u; f_80037AF0(c); // 800F5300
  cmpu(c,0,c->r[3],c->r[30]); // 800F5304
  if (!crb(c,2)) { goto L_800F5334; } // 800F5308
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800F530C
  cmps(c,0,(int32_t)c->r[0],101); // 800F5310
  if (crb(c,2)) { goto L_800F5334; } // 800F5314
  {uint32_t ea=c->r[2]+0xFFFFA9E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F5318
  c->r[3]=c->r[30]|c->r[30]; // 800F531C
  c->r[4]=0u+0x00000065u; // 800F5320
  c->r[5]=0u+0x00000000u; // 800F5324
  c->r[6]=0u+0x00000000u; // 800F5328
  c->r[7]=0u+0x00000000u; // 800F532C
  c->lr=0x800F5334u; f_801F4D44(c); // 800F5330
L_800F5334:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5334
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5338
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F533C
  c->lr=c->r[0]; // 800F5340
  c->r[1]=c->r[1]+0x00000010u; // 800F5344
  return; // 800F5348
}

// fn_800F534C
void f_800F534C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F534C
  c->r[0]=c->lr; // 800F5350
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F5354
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F5358
  c->r[31]=0u+0x803D0000u; // 800F535C
  c->r[31]=c->r[31]+0x000051C0u; // 800F5360
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F5364
  c->r[30]=c->r[3]|c->r[3]; // 800F5368
  c->lr=0x800F5370u; f_801F4F28(c); // 800F536C
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800F5370
  cmps(c,0,(int32_t)c->r[0],101); // 800F5374
  if (crb(c,2)) { goto L_800F53C8; } // 800F5378
  if (!crb(c,0)) { goto L_800F538C; } // 800F537C
  cmps(c,0,(int32_t)c->r[0],100); // 800F5380
  if (!crb(c,0)) { goto L_800F5398; } // 800F5384
  goto L_800F5424; // 800F5388
L_800F538C:;
  cmps(c,0,(int32_t)c->r[0],103); // 800F538C
  if (!crb(c,0)) { goto L_800F5424; } // 800F5390
  goto L_800F53F8; // 800F5394
L_800F5398:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F5398
  c->r[5]=c->r[31]+0x0000000Cu; // 800F539C
  c->r[3]=c->r[30]|c->r[30]; // 800F53A0
  c->r[4]=c->r[1]+0x00000020u; // 800F53A4
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800F53A8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F53AC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F53B0
  W32(c->r[1]+0x00000020u,c->r[7]); // 800F53B4
  W32(c->r[1]+0x00000024u,c->r[6]); // 800F53B8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F53BC
  c->lr=0x800F53C4u; f_800F5084(c); // 800F53C0
  goto L_800F5424; // 800F53C4
L_800F53C8:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F53C8
  c->r[5]=c->r[31]+0x00000018u; // 800F53CC
  c->r[3]=c->r[30]|c->r[30]; // 800F53D0
  c->r[4]=c->r[1]+0x00000014u; // 800F53D4
  c->r[7]=R32(c->r[31]+0x00000018u); // 800F53D8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F53DC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F53E0
  W32(c->r[1]+0x00000014u,c->r[7]); // 800F53E4
  W32(c->r[1]+0x00000018u,c->r[6]); // 800F53E8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F53EC
  c->lr=0x800F53F4u; f_800F5084(c); // 800F53F0
  goto L_800F5424; // 800F53F4
L_800F53F8:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F53F8
  c->r[5]=c->r[31]+0x00000024u; // 800F53FC
  c->r[3]=c->r[30]|c->r[30]; // 800F5400
  c->r[4]=c->r[1]+0x00000008u; // 800F5404
  c->r[7]=R32(c->r[31]+0x00000024u); // 800F5408
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F540C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F5410
  W32(c->r[1]+0x00000008u,c->r[7]); // 800F5414
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F5418
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F541C
  c->lr=0x800F5424u; f_800F5084(c); // 800F5420
L_800F5424:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F5424
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F5428
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F542C
  c->lr=c->r[0]; // 800F5430
  c->r[1]=c->r[1]+0x00000040u; // 800F5434
  return; // 800F5438
}

// fn_800F543C
void f_800F543C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F543C
  c->r[0]=c->lr; // 800F5440
  c->r[6]=c->r[4]|c->r[4]; // 800F5444
  c->r[5]=0u+0x00000000u; // 800F5448
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F544C
  c->r[0]=R8(c->r[3]+0x00000075u); // 800F5450
  cmpu(c,0,c->r[0],0x00000001u); // 800F5454
  if (!crb(c,2)) { goto L_800F5460; } // 800F5458
  c->r[5]=0u+0x00000001u; // 800F545C
L_800F5460:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F5460
  c->r[3]=c->r[6]|c->r[6]; // 800F5464
  c->lr=0x800F546Cu; f_80250BF4(c); // 800F5468
  cmps(c,0,(int32_t)c->r[3],0); // 800F546C
  if (crb(c,2)) { goto L_800F547C; } // 800F5470
  c->r[3]=0u+0x00000000u; // 800F5474
  goto L_800F5480; // 800F5478
L_800F547C:;
  c->r[3]=0u+0xFFFFFFFFu; // 800F547C
L_800F5480:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5480
  c->lr=c->r[0]; // 800F5484
  c->r[1]=c->r[1]+0x00000010u; // 800F5488
  return; // 800F548C
}

// fn_800F5490
void f_800F5490(Ctx* __restrict c) {
  W8(c->r[3]+0x00000075u,c->r[4]); // 800F5490
  return; // 800F5494
}

// fn_800F5498
void f_800F5498(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5498
  c->r[0]=c->lr; // 800F549C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F54A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F54A4
  c->r[31]=c->r[3]|c->r[3]; // 800F54A8
  c->lr=0x800F54B0u; f_801F51B8(c); // 800F54AC
  c->r[7]=0u+0x803D0000u; // 800F54B0
  {uint32_t ea=c->r[7]+0x000051F0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F54B4
  c->r[3]=c->r[31]|c->r[31]; // 800F54B8
  c->r[4]=c->r[1]+0x00000008u; // 800F54BC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F54C0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F54C4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F54C8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F54CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F54D0
  c->lr=0x800F54D8u; f_800F5084(c); // 800F54D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F54D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F54DC
  c->lr=c->r[0]; // 800F54E0
  c->r[1]=c->r[1]+0x00000020u; // 800F54E4
  return; // 800F54E8
}

// fn_800F54EC
void f_800F54EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F54EC
  c->r[0]=c->lr; // 800F54F0
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F54F4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800F54F8
  W32(c->r[1]+0x00000088u,c->r[30]); // 800F54FC
  c->r[30]=c->r[3]|c->r[3]; // 800F5500
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F5504
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800F5508
  cmps(c,0,(int32_t)c->r[0],0); // 800F550C
  if (!crb(c,2)) { goto L_800F559C; } // 800F5510
  c->r[3]=R16(c->r[3]+0x000003BEu); // 800F5514
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800F5518
  if (crb(c,2)) { goto L_800F559C; } // 800F551C
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800F5520
  cmps(c,0,(int32_t)c->r[0],128); // 800F5524
  if (!crb(c,2)) { goto L_800F5550; } // 800F5528
  c->r[3]=0u+0x80620000u; // 800F552C
  c->r[3]=c->r[3]+0x00007688u; // 800F5530
  c->r[3]=R32(c->r[3]+0x00000014u); // 800F5534
  cmps(c,0,(int32_t)c->r[3],0); // 800F5538
  if (crb(c,2)) { goto L_800F5550; } // 800F553C
  c->r[4]=0u+0x00000002u; // 800F5540
  c->lr=0x800F5548u; f_80037670(c); // 800F5544
  cmps(c,0,(int32_t)c->r[3],0); // 800F5548
  if (!crb(c,2)) { goto L_800F559C; } // 800F554C
L_800F5550:;
  {uint32_t ea=c->r[2]+0xFFFFA9F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F5550
  c->r[3]=c->r[1]+0x00000008u; // 800F5554
  c->r[4]=c->r[30]+0x0000002Cu; // 800F5558
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800F555C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800F5560
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800F5564
  c->lr=0x800F556Cu; f_800361A0(c); // 800F5568
  c->r[31]=0u+0x80550000u; // 800F556C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F5570
  c->r[31]=c->r[31]+0x00003D60u; // 800F5574
  c->r[5]=c->r[30]|c->r[30]; // 800F5578
  c->r[3]=c->r[31]+0x00000010u; // 800F557C
  c->r[6]=c->r[1]+0x00000008u; // 800F5580
  c->r[7]=c->r[1]+0x00000020u; // 800F5584
  c->r[4]=0u+0x000001FFu; // 800F5588
  c->lr=0x800F5590u; f_80226910(c); // 800F558C
  c->r[3]=c->r[31]+0x00000010u; // 800F5590
  c->r[4]=c->r[1]+0x00000020u; // 800F5594
  c->lr=0x800F559Cu; f_80226D68(c); // 800F5598
L_800F559C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F559C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800F55A0
  c->r[30]=R32(c->r[1]+0x00000088u); // 800F55A4
  c->lr=c->r[0]; // 800F55A8
  c->r[1]=c->r[1]+0x00000090u; // 800F55AC
  return; // 800F55B0
}

// fn_800F55B4
void f_800F55B4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800F55B4
  W8(c->r[3]+0x00000074u,c->r[0]); // 800F55B8
  return; // 800F55BC
}

// fn_800F55C0
void f_800F55C0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800F55C0
  W8(c->r[3]+0x00000074u,c->r[0]); // 800F55C4
  return; // 800F55C8
}

// fn_800F55CC
void f_800F55CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F55CC
  c->r[0]=c->lr; // 800F55D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F55D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F55D8
  c->r[31]=c->r[3]|c->r[3]; // 800F55DC
  c->r[3]=c->r[3]+0x00000210u; // 800F55E0
  c->lr=0x800F55E8u; f_8004BAD4(c); // 800F55E4
  cmps(c,0,(int32_t)c->r[3],0); // 800F55E8
  if (crb(c,2)) { goto L_800F5658; } // 800F55EC
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F55F0
  c->r[4]=c->r[31]|c->r[31]; // 800F55F4
  c->r[3]=c->r[31]+0x00000210u; // 800F55F8
  c->r[0]=c->r[0]|0xAA000000u; // 800F55FC
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F5600
  c->lr=0x800F5608u; f_80043E44(c); // 800F5604
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F5608
  c->r[3]=c->r[31]+0x00000210u; // 800F560C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F5610
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F5614
  c->lr=0x800F561Cu; f_80043E34(c); // 800F5618
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F561C
  c->r[4]=0u+0x803A0000u; // 800F5620
  c->r[4]=c->r[4]+0xFFFFEF9Cu; // 800F5624
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F5628
  c->lr=0x800F5630u; f_80256EC4(c); // 800F562C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F5630
  c->r[5]=c->r[3]|c->r[3]; // 800F5634
  c->r[3]=c->r[31]+0x00000210u; // 800F5638
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800F563C
  c->lr=0x800F5644u; f_8004BAC8(c); // 800F5640
  {uint32_t ea=c->r[2]+0xFFFFA9F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F5644
  c->r[3]=c->r[31]+0x00000210u; // 800F5648
  c->f[2]=c->f[1]; // 800F564C
  c->f[3]=c->f[1]; // 800F5650
  c->lr=0x800F5658u; f_80043E24(c); // 800F5654
L_800F5658:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5658
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F565C
  c->lr=c->r[0]; // 800F5660
  c->r[1]=c->r[1]+0x00000010u; // 800F5664
  return; // 800F5668
}

// fn_800F566C
void f_800F566C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F566C
  c->r[0]=c->lr; // 800F5670
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5674
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5678
  c->r[31]=c->r[3]|c->r[3]; // 800F567C
  c->r[3]=c->r[3]+0x00000210u; // 800F5680
  c->lr=0x800F5688u; f_80221698(c); // 800F5684
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F5688
  cmps(c,0,(int32_t)c->r[3],0); // 800F568C
  if (crb(c,2)) { goto L_800F56B0; } // 800F5690
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800F5694
  cmps(c,0,(int32_t)c->r[0],0); // 800F5698
  if (crb(c,2)) { goto L_800F56B0; } // 800F569C
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F56A0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800F56A4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F56A8
  goto L_800F56BC; // 800F56AC
L_800F56B0:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F56B0
  c->r[0]=c->r[0]|0x80000000u; // 800F56B4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F56B8
L_800F56BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F56BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F56C0
  c->lr=c->r[0]; // 800F56C4
  c->r[1]=c->r[1]+0x00000010u; // 800F56C8
  return; // 800F56CC
}

// fn_800F56D0
void f_800F56D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F56D0
  c->r[0]=c->lr; // 800F56D4
  cmps(c,0,(int32_t)c->r[3],0); // 800F56D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F56DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F56E0
  c->r[31]=c->r[4]|c->r[4]; // 800F56E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F56E8
  c->r[30]=c->r[3]|c->r[3]; // 800F56EC
  if (crb(c,2)) { goto L_800F570C; } // 800F56F0
  c->r[4]=0u+0x00000000u; // 800F56F4
  c->lr=0x800F56FCu; f_8026A06C(c); // 800F56F8
  cmps(c,0,(int32_t)c->r[31],0); // 800F56FC
  if (!crb(c,1)) { goto L_800F570C; } // 800F5700
  c->r[3]=c->r[30]|c->r[30]; // 800F5704
  c->lr=0x800F570Cu; f_8026A268(c); // 800F5708
L_800F570C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F570C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5710
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5714
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5718
  c->lr=c->r[0]; // 800F571C
  c->r[1]=c->r[1]+0x00000010u; // 800F5720
  return; // 800F5724
}

// fn_800F5728
void f_800F5728(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5728
  c->r[0]=c->lr; // 800F572C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F5730
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800F5734
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800F5738
  c->r[4]=0u+0x00000000u; // 800F573C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5740
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5744
  c->r[30]=c->r[3]|c->r[3]; // 800F5748
  c->lr=0x800F5750u; f_801F57D0(c); // 800F574C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F5750
  c->r[3]=c->r[30]|c->r[30]; // 800F5754
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800F5758
  c->ctr=c->r[12]; // 800F575C
  if (true) { c->lr=0x800F5764u; dispatch(c,c->ctr); } // 800F5760
  c->r[3]=c->r[30]|c->r[30]; // 800F5764
  c->lr=0x800F576Cu; f_801F4B94(c); // 800F5768
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800F576C
  c->r[5]=0u+0x00000003u; // 800F5770
  {uint32_t ea=c->r[2]+0xFFFFAA00u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F5774
  c->r[4]=0u+0x00000066u; // 800F5778
  c->r[7]=c->r[0]|0x00000804u; // 800F577C
  c->r[31]=0u+0x00000001u; // 800F5780
  c->r[0]=0u+0x00000000u; // 800F5784
  c->r[3]=0u+0x80550000u; // 800F5788
  W8(c->r[30]+0x0000006Cu,c->r[5]); // 800F578C
  c->f[3]=c->f[1]; // 800F5790
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800F5794
  c->r[3]=c->r[3]+0x00003D60u; // 800F5798
  W8(c->r[30]+0x0000006Du,c->r[4]); // 800F579C
  c->r[4]=c->r[30]+0x0000002Cu; // 800F57A0
  {uint32_t ea=c->r[2]+0xFFFFAA04u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F57A4
  W16(c->r[30]+0x000003BEu,c->r[7]); // 800F57A8
  c->r[5]=c->r[30]+0x00000030u; // 800F57AC
  c->r[6]=0u+0x00000000u; // 800F57B0
  c->r[7]=0u+0x00000000u; // 800F57B4
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800F57B8
  W8(c->r[30]+0x00000074u,c->r[0]); // 800F57BC
  c->lr=0x800F57C4u; f_801D5488(c); // 800F57C0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F57C4
  c->r[3]=c->r[30]|c->r[30]; // 800F57C8
  c->lr=0x800F57D0u; f_801F58BC(c); // 800F57CC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F57D0
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800F57D4
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F57D8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F57DC
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800F57E0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800F57E4
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800F57E8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F57EC
  c->lr=0x800F57F4u; f_802501B0(c); // 800F57F0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F57F4
  c->r[4]=0u+0x803A0000u; // 800F57F8
  c->r[4]=c->r[4]+0xFFFFEFB4u; // 800F57FC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F5800
  c->lr=0x800F5808u; f_80256EC4(c); // 800F5804
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F5808
  c->r[5]=0u+0x805D0000u; // 800F580C
  c->r[4]=c->r[30]+0x0000002Cu; // 800F5810
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800F5814
  c->r[3]=c->r[5]+0x000078B0u; // 800F5818
  c->lr=0x800F5820u; f_802351CC(c); // 800F581C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F5820
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800F5824
  c->r[3]=c->r[30]|c->r[30]; // 800F5828
  c->lr=0x800F5830u; f_801F56F4(c); // 800F582C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F5830
  c->r[3]=c->r[30]|c->r[30]; // 800F5834
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F5838
  c->ctr=c->r[12]; // 800F583C
  if (true) { c->lr=0x800F5844u; dispatch(c,c->ctr); } // 800F5840
  c->r[3]=c->r[30]|c->r[30]; // 800F5844
  c->lr=0x800F584Cu; f_800F6100(c); // 800F5848
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800F584C
  W32(c->r[30]+0x00000444u,c->r[31]); // 800F5850
  c->lr=0x800F5858u; f_8024E174(c); // 800F5854
  W32(c->r[30]+0x00000438u,c->r[3]); // 800F5858
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800F585C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800F5860
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5864
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5868
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F586C
  c->lr=c->r[0]; // 800F5870
  c->r[1]=c->r[1]+0x00000020u; // 800F5874
  return; // 800F5878
}

// fn_800F587C
void f_800F587C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F587C
  c->r[0]=c->lr; // 800F5880
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5884
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5888
  c->r[31]=c->r[3]|c->r[3]; // 800F588C
  c->lr=0x800F5894u; f_800F5E70(c); // 800F5890
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F5894
  c->r[3]=c->r[31]|c->r[31]; // 800F5898
  c->r[12]=R32(c->r[12]+0x00000068u); // 800F589C
  c->ctr=c->r[12]; // 800F58A0
  if (true) { c->lr=0x800F58A8u; dispatch(c,c->ctr); } // 800F58A4
  c->r[3]=c->r[31]|c->r[31]; // 800F58A8
  c->lr=0x800F58B0u; f_801F4C0C(c); // 800F58AC
  c->r[3]=c->r[31]|c->r[31]; // 800F58B0
  c->lr=0x800F58B8u; f_800F6020(c); // 800F58B4
  c->r[3]=c->r[31]|c->r[31]; // 800F58B8
  c->lr=0x800F58C0u; f_801F56F4(c); // 800F58BC
  c->r[3]=c->r[31]|c->r[31]; // 800F58C0
  c->lr=0x800F58C8u; f_800F61A4(c); // 800F58C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F58C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F58CC
  c->lr=c->r[0]; // 800F58D0
  c->r[1]=c->r[1]+0x00000010u; // 800F58D4
  return; // 800F58D8
}

// fn_800F58DC
void f_800F58DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F58DC
  c->r[0]=c->lr; // 800F58E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F58E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F58E8
  c->r[31]=c->r[3]|c->r[3]; // 800F58EC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F58F0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F58F4
  c->lr=0x800F58FCu; f_802501B0(c); // 800F58F8
  c->r[3]=c->r[31]|c->r[31]; // 800F58FC
  c->r[4]=0u+0x00000000u; // 800F5900
  c->lr=0x800F5908u; f_801F5244(c); // 800F5904
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5908
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F590C
  c->lr=c->r[0]; // 800F5910
  c->r[1]=c->r[1]+0x00000010u; // 800F5914
  return; // 800F5918
}

// fn_800F591C
void f_800F591C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F591C
  c->r[0]=c->lr; // 800F5920
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5924
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5928
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F592C
  c->r[30]=c->r[3]|c->r[3]; // 800F5930
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F5934
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F5938
  c->lr=0x800F5940u; f_802501B0(c); // 800F593C
  c->r[3]=c->r[30]|c->r[30]; // 800F5940
  c->r[4]=0u+0x00000000u; // 800F5944
  c->lr=0x800F594Cu; f_801F5244(c); // 800F5948
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F594C
  c->r[3]=c->r[30]+0x0000002Cu; // 800F5950
  c->r[4]=c->r[4]+0x0000005Cu; // 800F5954
  c->lr=0x800F595Cu; f_800361A0(c); // 800F5958
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F595C
  c->r[3]=c->r[30]|c->r[30]; // 800F5960
  c->lr=0x800F5968u; f_801F5418(c); // 800F5964
  cmps(c,0,(int32_t)c->r[3],0); // 800F5968
  if (!crb(c,0)) { goto L_800F59A4; } // 800F596C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800F5970
  c->r[3]=0u+0x00000001u; // 800F5974
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F5978
  c->r[3]=c->r[30]|c->r[30]; // 800F597C
  c->r[0]=c->r[0]|0x00000080u; // 800F5980
  {uint32_t ea=c->r[2]+0xFFFFAA00u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F5984
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800F5988
  c->r[4]=0u+0x00000064u; // 800F598C
  c->r[5]=0u+0x00000000u; // 800F5990
  c->r[6]=0u+0x00000000u; // 800F5994
  c->r[7]=0u+0x00000000u; // 800F5998
  c->lr=0x800F59A0u; f_801F4D44(c); // 800F599C
  goto L_800F59EC; // 800F59A0
L_800F59A4:;
  c->r[31]=0u+0x805D0000u; // 800F59A4
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F59A8
  c->lr=0x800F59B0u; f_800447E4(c); // 800F59AC
  cmpu(c,0,c->r[3],0x00000001u); // 800F59B0
  if (!crb(c,2)) { goto L_800F59C4; } // 800F59B4
  c->r[0]=0u+0x00000000u; // 800F59B8
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F59BC
  goto L_800F59E4; // 800F59C0
L_800F59C4:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F59C4
  c->r[0]=R8(c->r[30]+0x00000074u); // 800F59C8
  c->r[3]=R8(c->r[3]+0x0000006Fu); // 800F59CC
  cmps(c,0,(int32_t)c->r[0],0); // 800F59D0
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F59D4
  if (crb(c,2)) { goto L_800F59E4; } // 800F59D8
  c->r[0]=0u+0x00000000u; // 800F59DC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F59E0
L_800F59E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F59E4
  c->lr=0x800F59ECu; f_801F5B14(c); // 800F59E8
L_800F59EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F59EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F59F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F59F4
  c->lr=c->r[0]; // 800F59F8
  c->r[1]=c->r[1]+0x00000010u; // 800F59FC
  return; // 800F5A00
}

// fn_800F5A04
void f_800F5A04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5A04
  c->r[0]=c->lr; // 800F5A08
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F5A0C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F5A10
  c->r[31]=c->r[3]|c->r[3]; // 800F5A14
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F5A18
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F5A1C
  c->lr=0x800F5A24u; f_802501B0(c); // 800F5A20
  c->r[3]=c->r[31]+0x00000038u; // 800F5A24
  c->r[4]=c->r[31]+0x0000002Cu; // 800F5A28
  c->lr=0x800F5A30u; f_800361A0(c); // 800F5A2C
  {uint32_t ea=c->r[2]+0xFFFFAA00u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F5A30
  c->r[3]=0u+0x80550000u; // 800F5A34
  c->r[3]=c->r[3]+0x00003D60u; // 800F5A38
  c->r[4]=c->r[31]+0x00000038u; // 800F5A3C
  c->f[2]=c->f[1]; // 800F5A40
  c->r[5]=c->r[1]+0x00000008u; // 800F5A44
  c->f[3]=c->f[1]; // 800F5A48
  c->r[6]=0u+0x00000000u; // 800F5A4C
  c->r[7]=0u+0x00000000u; // 800F5A50
  c->lr=0x800F5A58u; f_801D5488(c); // 800F5A54
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F5A58
  c->r[3]=c->r[31]+0x00000060u; // 800F5A5C
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F5A60
  c->r[4]=c->r[5]+0x00000068u; // 800F5A64
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800F5A68
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F5A6C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800F5A70
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F5A74
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800F5A78
  c->lr=0x800F5A80u; f_800361A0(c); // 800F5A7C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F5A80
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F5A84
  c->lr=0x800F5A8Cu; f_802501B0(c); // 800F5A88
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800F5A8C
  c->r[0]=0u+0x00000001u; // 800F5A90
  {uint32_t ea=c->r[2]+0xFFFFAA08u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F5A94
  c->r[4]=c->r[31]+0x0000002Cu; // 800F5A98
  {uint32_t ea=c->r[2]+0xFFFFAA0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F5A9C
  c->r[3]=c->r[3]|0x00002000u; // 800F5AA0
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800F5AA4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F5AA8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800F5AAC
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800F5AB0
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800F5AB4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F5AB8
  c->r[3]=c->r[3]+0x0000005Cu; // 800F5ABC
  c->lr=0x800F5AC4u; f_800361A0(c); // 800F5AC0
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F5AC4
  c->r[4]=0u+0x00000040u; // 800F5AC8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F5ACC
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800F5AD0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F5AD4
  c->r[3]=c->r[3]+0x0000001Cu; // 800F5AD8
  c->lr=0x800F5AE0u; f_802518A4(c); // 800F5ADC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F5AE0
  c->r[4]=0u+0x00000006u; // 800F5AE4
  c->r[3]=c->r[3]+0x0000001Cu; // 800F5AE8
  c->lr=0x800F5AF0u; f_80251824(c); // 800F5AEC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F5AF0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F5AF4
  c->lr=0x800F5AFCu; f_802501B0(c); // 800F5AF8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F5AFC
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800F5B00
  cmps(c,0,(int32_t)c->r[0],0); // 800F5B04
  if (crb(c,2)) { goto L_800F5BB0; } // 800F5B08
  c->r[3]=c->r[3]+0x00000068u; // 800F5B0C
  c->r[4]=c->r[31]+0x00000060u; // 800F5B10
  c->lr=0x800F5B18u; f_800361A0(c); // 800F5B14
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F5B18
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F5B1C
  c->lr=0x800F5B24u; f_8025037C(c); // 800F5B20
  c->r[6]=R32(c->r[31]+0x00000394u); // 800F5B24
  c->r[3]=c->r[1]+0x00000024u; // 800F5B28
  c->r[4]=c->r[31]+0x00000060u; // 800F5B2C
  c->r[5]=c->r[1]+0x00000030u; // 800F5B30
  c->r[6]=c->r[6]+0x000000B0u; // 800F5B34
  c->r[7]=0u+0x00000000u; // 800F5B38
  c->lr=0x800F5B40u; f_8002BE64(c); // 800F5B3C
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800F5B40
  c->r[3]=0u+0x805D0000u; // 800F5B44
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F5B48
  c->r[3]=c->r[3]+0x00003F6Cu; // 800F5B4C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F5B50
  c->r[4]=c->r[31]|c->r[31]; // 800F5B54
  W32(c->r[1]+0x00000018u,c->r[5]); // 800F5B58
  c->r[7]=c->r[1]+0x00000018u; // 800F5B5C
  c->r[6]=0u+0x0000003Cu; // 800F5B60
  c->r[8]=0u+0x00000000u; // 800F5B64
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F5B68
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F5B6C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F5B70
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F5B74
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F5B78
  c->lr=0x800F5B80u; f_801FA6A4(c); // 800F5B7C
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800F5B80
  cmps(c,0,(int32_t)c->r[0],0); // 800F5B84
  if (crb(c,2)) { goto L_800F5B98; } // 800F5B88
  c->r[3]=c->r[31]+0x00000044u; // 800F5B8C
  c->r[4]=c->r[31]+0x000003CCu; // 800F5B90
  c->lr=0x800F5B98u; f_800361A0(c); // 800F5B94
L_800F5B98:;
  c->r[6]=0u+0x803A0000u; // 800F5B98
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F5B9C
  c->r[5]=c->r[31]+0x00000044u; // 800F5BA0
  c->r[4]=0u+0x00000000u; // 800F5BA4
  c->r[6]=c->r[6]+0xFFFFEFA8u; // 800F5BA8
  c->lr=0x800F5BB0u; f_801FBEC0(c); // 800F5BAC
L_800F5BB0:;
  c->r[3]=c->r[31]|c->r[31]; // 800F5BB0
  c->r[4]=0u+0x00000000u; // 800F5BB4
  c->lr=0x800F5BBCu; f_801F7C00(c); // 800F5BB8
  c->r[7]=0u+0x803D0000u; // 800F5BBC
  {uint32_t ea=c->r[7]+0x00005340u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F5BC0
  c->r[3]=c->r[31]|c->r[31]; // 800F5BC4
  c->r[4]=c->r[1]+0x0000000Cu; // 800F5BC8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F5BCC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F5BD0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F5BD4
  W32(c->r[1]+0x00000010u,c->r[5]); // 800F5BD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5BDC
  c->lr=0x800F5BE4u; f_800F5BF8(c); // 800F5BE0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F5BE4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F5BE8
  c->lr=c->r[0]; // 800F5BEC
  c->r[1]=c->r[1]+0x00000050u; // 800F5BF0
  return; // 800F5BF4
}

// fn_800F5BF8
void f_800F5BF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5BF8
  c->r[0]=c->lr; // 800F5BFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5C00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5C04
  c->r[31]=c->r[4]|c->r[4]; // 800F5C08
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5C0C
  c->r[30]=c->r[3]|c->r[3]; // 800F5C10
  c->r[3]=c->r[31]|c->r[31]; // 800F5C14
  c->lr=0x800F5C1Cu; f_802B9FDC(c); // 800F5C18
  cmps(c,0,(int32_t)c->r[3],0); // 800F5C1C
  if (crb(c,2)) { goto L_800F5C3C; } // 800F5C20
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F5C24
  c->r[0]=R32(c->r[31]+0x00000004u); // 800F5C28
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800F5C2C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800F5C30
  c->r[0]=R32(c->r[31]+0x00000008u); // 800F5C34
  W32(c->r[30]+0x00000024u,c->r[0]); // 800F5C38
L_800F5C3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5C3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5C40
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5C44
  c->lr=c->r[0]; // 800F5C48
  c->r[1]=c->r[1]+0x00000010u; // 800F5C4C
  return; // 800F5C50
}

// fn_800F5C54
void f_800F5C54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5C54
  c->r[0]=c->lr; // 800F5C58
  c->r[4]=0u+0x00000000u; // 800F5C5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F5C60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F5C64
  c->r[31]=c->r[3]|c->r[3]; // 800F5C68
  c->r[3]=R32(c->r[3]+0x00000438u); // 800F5C6C
  c->lr=0x800F5C74u; f_801FAF00(c); // 800F5C70
  cmps(c,0,(int32_t)c->r[3],0); // 800F5C74
  if (!crb(c,2)) { goto L_800F5D0C; } // 800F5C78
  c->r[3]=c->r[31]|c->r[31]; // 800F5C7C
  c->r[4]=0u+0x0000004Au; // 800F5C80
  c->lr=0x800F5C88u; f_801F5AB4(c); // 800F5C84
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F5C88
  c->r[3]=c->r[31]+0x0000002Cu; // 800F5C8C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F5C90
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800F5C94
  c->r[0]=c->r[0]|0x00000004u; // 800F5C98
  c->r[4]=c->r[4]+0x0000005Cu; // 800F5C9C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F5CA0
  c->lr=0x800F5CA8u; f_800361A0(c); // 800F5CA4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F5CA8
  c->r[3]=c->r[31]+0x00000060u; // 800F5CAC
  c->r[4]=c->r[4]+0x00000068u; // 800F5CB0
  c->lr=0x800F5CB8u; f_800361A0(c); // 800F5CB4
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800F5CB8
  c->r[3]=0u+0x805D0000u; // 800F5CBC
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F5CC0
  c->r[3]=c->r[3]+0x00006CF8u; // 800F5CC4
  c->r[4]=c->r[1]+0x00000008u; // 800F5CC8
  c->r[5]=0u+0x00040000u; // 800F5CCC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F5CD0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F5CD4
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F5CD8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F5CDC
  c->lr=0x800F5CE4u; f_802236F8(c); // 800F5CE0
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800F5CE4
  c->r[3]=c->r[31]|c->r[31]; // 800F5CE8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F5CEC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F5CF0
  c->ctr=c->r[12]; // 800F5CF4
  if (true) { c->lr=0x800F5CFCu; dispatch(c,c->ctr); } // 800F5CF8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F5CFC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F5D00
  c->lr=0x800F5D08u; f_8025037C(c); // 800F5D04
  goto L_800F5D2C; // 800F5D08
L_800F5D0C:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F5D0C
  c->r[3]=c->r[31]+0x0000002Cu; // 800F5D10
  c->r[4]=c->r[4]+0x0000005Cu; // 800F5D14
  c->lr=0x800F5D1Cu; f_800361A0(c); // 800F5D18
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F5D1C
  c->r[3]=c->r[31]+0x00000060u; // 800F5D20
  c->r[4]=c->r[4]+0x00000068u; // 800F5D24
  c->lr=0x800F5D2Cu; f_800361A0(c); // 800F5D28
L_800F5D2C:;
  c->r[3]=c->r[31]|c->r[31]; // 800F5D2C
  c->r[4]=0u+0x00000000u; // 800F5D30
  c->lr=0x800F5D38u; f_801F7C00(c); // 800F5D34
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F5D38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F5D3C
  c->lr=c->r[0]; // 800F5D40
  c->r[1]=c->r[1]+0x00000020u; // 800F5D44
  return; // 800F5D48
}

// fn_800F5D4C
void f_800F5D4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5D4C
  c->r[0]=c->lr; // 800F5D50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5D54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5D58
  c->r[31]=c->r[3]|c->r[3]; // 800F5D5C
  c->r[5]=R32(c->r[3]+0x000003C4u); // 800F5D60
  c->r[0]=c->r[5]+0x00000000u; // 800F5D64
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800F5D68
  if (crb(c,2)) { goto L_800F5D90; } // 800F5D6C
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800F5D70
  c->r[6]=0u+0x00000000u; // 800F5D74
  {uint32_t ea=c->r[2]+0xFFFFAA00u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F5D78
  c->r[12]=R32(c->r[12]+0x00000064u); // 800F5D7C
  c->f[2]=c->f[1]; // 800F5D80
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F5D84
  c->ctr=c->r[12]; // 800F5D88
  if (true) { c->lr=0x800F5D90u; dispatch(c,c->ctr); } // 800F5D8C
L_800F5D90:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F5D90
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F5D94
  c->lr=0x800F5D9Cu; f_802501B0(c); // 800F5D98
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F5D9C
  c->r[6]=0u+0x00000000u; // 800F5DA0
  c->r[0]=0u+0x00000001u; // 800F5DA4
  c->r[3]=c->r[31]+0x0000002Cu; // 800F5DA8
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800F5DAC
  c->r[4]=c->r[31]+0x000003CCu; // 800F5DB0
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F5DB4
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800F5DB8
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800F5DBC
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800F5DC0
  c->r[0]=rotl(c->r[5],0)&0xFFFFDFFFu; // 800F5DC4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F5DC8
  c->lr=0x800F5DD0u; f_800361A0(c); // 800F5DCC
  c->r[3]=c->r[31]+0x00000060u; // 800F5DD0
  c->r[4]=c->r[31]+0x000003D8u; // 800F5DD4
  c->lr=0x800F5DDCu; f_800361A0(c); // 800F5DD8
  c->r[3]=c->r[31]|c->r[31]; // 800F5DDC
  c->r[4]=0u+0x0000004Au; // 800F5DE0
  c->lr=0x800F5DE8u; f_801F5AB4(c); // 800F5DE4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F5DE8
  c->r[3]=c->r[31]|c->r[31]; // 800F5DEC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F5DF0
  c->ctr=c->r[12]; // 800F5DF4
  if (true) { c->lr=0x800F5DFCu; dispatch(c,c->ctr); } // 800F5DF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5DFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5E00
  c->lr=c->r[0]; // 800F5E04
  c->r[1]=c->r[1]+0x00000010u; // 800F5E08
  return; // 800F5E0C
}

// fn_800F5E10
void f_800F5E10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5E10
  c->r[0]=c->lr; // 800F5E14
  c->r[4]=0u+0x000000E1u; // 800F5E18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5E1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5E20
  c->r[31]=c->r[3]|c->r[3]; // 800F5E24
  c->r[3]=c->r[3]+0x00000210u; // 800F5E28
  c->lr=0x800F5E30u; f_80221630(c); // 800F5E2C
  cmps(c,0,(int32_t)c->r[3],0); // 800F5E30
  if (!crb(c,2)) { goto L_800F5E40; } // 800F5E34
  c->r[3]=0u+0x00000000u; // 800F5E38
  goto L_800F5E5C; // 800F5E3C
L_800F5E40:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F5E40
  c->r[3]=0u+0x000004E4u; // 800F5E44
  c->r[5]=0u+0x00000000u; // 800F5E48
  c->r[4]=c->r[4]+0x0000010Cu; // 800F5E4C
  c->lr=0x800F5E54u; f_8024EE50(c); // 800F5E50
  c->r[0]=cntlz(c->r[3]); // 800F5E54
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F5E58
L_800F5E5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5E5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5E60
  c->lr=c->r[0]; // 800F5E64
  c->r[1]=c->r[1]+0x00000010u; // 800F5E68
  return; // 800F5E6C
}

// fn_800F5E70
void f_800F5E70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5E70
  c->r[0]=c->lr; // 800F5E74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5E78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5E7C
  c->r[31]=0u+0x805D0000u; // 800F5E80
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5E84
  c->r[30]=c->r[3]|c->r[3]; // 800F5E88
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F5E8C
  c->lr=0x800F5E94u; f_80045264(c); // 800F5E90
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800F5E94
  cmpu(c,0,c->r[0],0x0000004Au); // 800F5E98
  if (!crb(c,2)) { goto L_800F5ED8; } // 800F5E9C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F5EA0
  c->lr=0x800F5EA8u; f_80037AF0(c); // 800F5EA4
  cmpu(c,0,c->r[3],c->r[30]); // 800F5EA8
  if (!crb(c,2)) { goto L_800F5ED8; } // 800F5EAC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800F5EB0
  cmps(c,0,(int32_t)c->r[0],101); // 800F5EB4
  if (crb(c,2)) { goto L_800F5ED8; } // 800F5EB8
  {uint32_t ea=c->r[2]+0xFFFFAA00u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F5EBC
  c->r[3]=c->r[30]|c->r[30]; // 800F5EC0
  c->r[4]=0u+0x00000065u; // 800F5EC4
  c->r[5]=0u+0x00000000u; // 800F5EC8
  c->r[6]=0u+0x00000000u; // 800F5ECC
  c->r[7]=0u+0x00000000u; // 800F5ED0
  c->lr=0x800F5ED8u; f_801F4D44(c); // 800F5ED4
L_800F5ED8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5ED8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5EDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5EE0
  c->lr=c->r[0]; // 800F5EE4
  c->r[1]=c->r[1]+0x00000010u; // 800F5EE8
  return; // 800F5EEC
}

// fn_800F5EF0
void f_800F5EF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5EF0
  c->r[0]=c->lr; // 800F5EF4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F5EF8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F5EFC
  c->r[31]=0u+0x803D0000u; // 800F5F00
  c->r[31]=c->r[31]+0x00005340u; // 800F5F04
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F5F08
  c->r[30]=c->r[3]|c->r[3]; // 800F5F0C
  c->lr=0x800F5F14u; f_801F4F28(c); // 800F5F10
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800F5F14
  cmps(c,0,(int32_t)c->r[0],101); // 800F5F18
  if (crb(c,2)) { goto L_800F5F6C; } // 800F5F1C
  if (!crb(c,0)) { goto L_800F5F30; } // 800F5F20
  cmps(c,0,(int32_t)c->r[0],100); // 800F5F24
  if (!crb(c,0)) { goto L_800F5F3C; } // 800F5F28
  goto L_800F5FC8; // 800F5F2C
L_800F5F30:;
  cmps(c,0,(int32_t)c->r[0],103); // 800F5F30
  if (!crb(c,0)) { goto L_800F5FC8; } // 800F5F34
  goto L_800F5F9C; // 800F5F38
L_800F5F3C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F5F3C
  c->r[5]=c->r[31]+0x0000000Cu; // 800F5F40
  c->r[3]=c->r[30]|c->r[30]; // 800F5F44
  c->r[4]=c->r[1]+0x00000020u; // 800F5F48
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800F5F4C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F5F50
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F5F54
  W32(c->r[1]+0x00000020u,c->r[7]); // 800F5F58
  W32(c->r[1]+0x00000024u,c->r[6]); // 800F5F5C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F5F60
  c->lr=0x800F5F68u; f_800F5BF8(c); // 800F5F64
  goto L_800F5FC8; // 800F5F68
L_800F5F6C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F5F6C
  c->r[5]=c->r[31]+0x00000018u; // 800F5F70
  c->r[3]=c->r[30]|c->r[30]; // 800F5F74
  c->r[4]=c->r[1]+0x00000014u; // 800F5F78
  c->r[7]=R32(c->r[31]+0x00000018u); // 800F5F7C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F5F80
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F5F84
  W32(c->r[1]+0x00000014u,c->r[7]); // 800F5F88
  W32(c->r[1]+0x00000018u,c->r[6]); // 800F5F8C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F5F90
  c->lr=0x800F5F98u; f_800F5BF8(c); // 800F5F94
  goto L_800F5FC8; // 800F5F98
L_800F5F9C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800F5F9C
  c->r[5]=c->r[31]+0x00000024u; // 800F5FA0
  c->r[3]=c->r[30]|c->r[30]; // 800F5FA4
  c->r[4]=c->r[1]+0x00000008u; // 800F5FA8
  c->r[7]=R32(c->r[31]+0x00000024u); // 800F5FAC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F5FB0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F5FB4
  W32(c->r[1]+0x00000008u,c->r[7]); // 800F5FB8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F5FBC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F5FC0
  c->lr=0x800F5FC8u; f_800F5BF8(c); // 800F5FC4
L_800F5FC8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F5FC8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F5FCC
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F5FD0
  c->lr=c->r[0]; // 800F5FD4
  c->r[1]=c->r[1]+0x00000040u; // 800F5FD8
  return; // 800F5FDC
}

// fn_800F5FE0
void f_800F5FE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5FE0
  c->r[0]=c->lr; // 800F5FE4
  c->r[7]=0u+0x803D0000u; // 800F5FE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F5FEC
  c->r[4]=c->r[1]+0x00000008u; // 800F5FF0
  {uint32_t ea=c->r[7]+0x00005370u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F5FF4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F5FF8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F5FFC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F6000
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F6004
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F6008
  c->lr=0x800F6010u; f_800F5BF8(c); // 800F600C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F6010
  c->lr=c->r[0]; // 800F6014
  c->r[1]=c->r[1]+0x00000020u; // 800F6018
  return; // 800F601C
}

// fn_800F6020
void f_800F6020(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6020
  c->r[0]=c->lr; // 800F6024
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F6028
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800F602C
  W32(c->r[1]+0x00000088u,c->r[30]); // 800F6030
  c->r[30]=c->r[3]|c->r[3]; // 800F6034
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F6038
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800F603C
  cmps(c,0,(int32_t)c->r[0],0); // 800F6040
  if (!crb(c,2)) { goto L_800F60D0; } // 800F6044
  c->r[3]=R16(c->r[3]+0x000003BEu); // 800F6048
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800F604C
  if (crb(c,2)) { goto L_800F60D0; } // 800F6050
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800F6054
  cmps(c,0,(int32_t)c->r[0],128); // 800F6058
  if (!crb(c,2)) { goto L_800F6084; } // 800F605C
  c->r[3]=0u+0x80620000u; // 800F6060
  c->r[3]=c->r[3]+0x00007688u; // 800F6064
  c->r[3]=R32(c->r[3]+0x00000014u); // 800F6068
  cmps(c,0,(int32_t)c->r[3],0); // 800F606C
  if (crb(c,2)) { goto L_800F6084; } // 800F6070
  c->r[4]=0u+0x00000002u; // 800F6074
  c->lr=0x800F607Cu; f_80037670(c); // 800F6078
  cmps(c,0,(int32_t)c->r[3],0); // 800F607C
  if (!crb(c,2)) { goto L_800F60D0; } // 800F6080
L_800F6084:;
  {uint32_t ea=c->r[2]+0xFFFFAA10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F6084
  c->r[3]=c->r[1]+0x00000008u; // 800F6088
  c->r[4]=c->r[30]+0x0000002Cu; // 800F608C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800F6090
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800F6094
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800F6098
  c->lr=0x800F60A0u; f_800361A0(c); // 800F609C
  c->r[31]=0u+0x80550000u; // 800F60A0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F60A4
  c->r[31]=c->r[31]+0x00003D60u; // 800F60A8
  c->r[5]=c->r[30]|c->r[30]; // 800F60AC
  c->r[3]=c->r[31]+0x00000010u; // 800F60B0
  c->r[6]=c->r[1]+0x00000008u; // 800F60B4
  c->r[7]=c->r[1]+0x00000020u; // 800F60B8
  c->r[4]=0u+0x000001FFu; // 800F60BC
  c->lr=0x800F60C4u; f_80226910(c); // 800F60C0
  c->r[3]=c->r[31]+0x00000010u; // 800F60C4
  c->r[4]=c->r[1]+0x00000020u; // 800F60C8
  c->lr=0x800F60D0u; f_80226D68(c); // 800F60CC
L_800F60D0:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F60D0
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800F60D4
  c->r[30]=R32(c->r[1]+0x00000088u); // 800F60D8
  c->lr=c->r[0]; // 800F60DC
  c->r[1]=c->r[1]+0x00000090u; // 800F60E0
  return; // 800F60E4
}

// fn_800F60E8
void f_800F60E8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800F60E8
  W8(c->r[3]+0x00000074u,c->r[0]); // 800F60EC
  return; // 800F60F0
}

// fn_800F60F4
void f_800F60F4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800F60F4
  W8(c->r[3]+0x00000074u,c->r[0]); // 800F60F8
  return; // 800F60FC
}

// fn_800F6100
void f_800F6100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6100
  c->r[0]=c->lr; // 800F6104
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6108
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F610C
  c->r[31]=c->r[3]|c->r[3]; // 800F6110
  c->r[3]=c->r[3]+0x00000210u; // 800F6114
  c->lr=0x800F611Cu; f_8004BAD4(c); // 800F6118
  cmps(c,0,(int32_t)c->r[3],0); // 800F611C
  if (crb(c,2)) { goto L_800F6190; } // 800F6120
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F6124
  c->r[4]=c->r[31]|c->r[31]; // 800F6128
  c->r[3]=c->r[31]+0x00000210u; // 800F612C
  c->r[0]=c->r[0]|0xAA000000u; // 800F6130
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F6134
  c->lr=0x800F613Cu; f_80043E44(c); // 800F6138
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F613C
  c->r[3]=c->r[31]+0x00000210u; // 800F6140
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F6144
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F6148
  c->lr=0x800F6150u; f_80043E34(c); // 800F614C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F6150
  c->r[4]=0u+0x803A0000u; // 800F6154
  c->r[4]=c->r[4]+0xFFFFEFB4u; // 800F6158
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F615C
  c->r[4]=c->r[4]+0x00000009u; // 800F6160
  c->lr=0x800F6168u; f_80256EC4(c); // 800F6164
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F6168
  c->r[5]=c->r[3]|c->r[3]; // 800F616C
  c->r[3]=c->r[31]+0x00000210u; // 800F6170
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800F6174
  c->lr=0x800F617Cu; f_8004BAC8(c); // 800F6178
  {uint32_t ea=c->r[2]+0xFFFFAA14u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F617C
  c->r[3]=c->r[31]+0x00000210u; // 800F6180
  c->f[2]=c->f[1]; // 800F6184
  c->f[3]=c->f[1]; // 800F6188
  c->lr=0x800F6190u; f_80043E24(c); // 800F618C
L_800F6190:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6190
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6194
  c->lr=c->r[0]; // 800F6198
  c->r[1]=c->r[1]+0x00000010u; // 800F619C
  return; // 800F61A0
}

// fn_800F61A4
void f_800F61A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F61A4
  c->r[0]=c->lr; // 800F61A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F61AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F61B0
  c->r[31]=c->r[3]|c->r[3]; // 800F61B4
  c->r[3]=c->r[3]+0x00000210u; // 800F61B8
  c->lr=0x800F61C0u; f_80221698(c); // 800F61BC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F61C0
  cmps(c,0,(int32_t)c->r[3],0); // 800F61C4
  if (crb(c,2)) { goto L_800F61E8; } // 800F61C8
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800F61CC
  cmps(c,0,(int32_t)c->r[0],0); // 800F61D0
  if (crb(c,2)) { goto L_800F61E8; } // 800F61D4
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F61D8
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800F61DC
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F61E0
  goto L_800F61F4; // 800F61E4
L_800F61E8:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F61E8
  c->r[0]=c->r[0]|0x80000000u; // 800F61EC
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F61F0
L_800F61F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F61F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F61F8
  c->lr=c->r[0]; // 800F61FC
  c->r[1]=c->r[1]+0x00000010u; // 800F6200
  return; // 800F6204
}

// fn_800F6208
void f_800F6208(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6208
  c->r[0]=c->lr; // 800F620C
  cmps(c,0,(int32_t)c->r[3],0); // 800F6210
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6214
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6218
  c->r[31]=c->r[4]|c->r[4]; // 800F621C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6220
  c->r[30]=c->r[3]|c->r[3]; // 800F6224
  if (crb(c,2)) { goto L_800F6244; } // 800F6228
  c->r[4]=0u+0x00000000u; // 800F622C
  c->lr=0x800F6234u; f_8026A06C(c); // 800F6230
  cmps(c,0,(int32_t)c->r[31],0); // 800F6234
  if (!crb(c,1)) { goto L_800F6244; } // 800F6238
  c->r[3]=c->r[30]|c->r[30]; // 800F623C
  c->lr=0x800F6244u; f_8026A268(c); // 800F6240
L_800F6244:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6244
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6248
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F624C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6250
  c->lr=c->r[0]; // 800F6254
  c->r[1]=c->r[1]+0x00000010u; // 800F6258
  return; // 800F625C
}

// fn_800F6260
void f_800F6260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6260
  c->r[0]=c->lr; // 800F6264
  c->r[4]=0u+0x00000000u; // 800F6268
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F626C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F6270
  c->r[31]=c->r[3]|c->r[3]; // 800F6274
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F6278
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F627C
  c->lr=0x800F6284u; f_801F57D0(c); // 800F6280
  c->r[3]=c->r[31]|c->r[31]; // 800F6284
  c->r[4]=0u+0x00000001u; // 800F6288
  c->lr=0x800F6290u; f_801F57D0(c); // 800F628C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F6290
  c->r[3]=c->r[31]|c->r[31]; // 800F6294
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800F6298
  c->ctr=c->r[12]; // 800F629C
  if (true) { c->lr=0x800F62A4u; dispatch(c,c->ctr); } // 800F62A0
  c->r[3]=c->r[31]|c->r[31]; // 800F62A4
  c->lr=0x800F62ACu; f_801F4B94(c); // 800F62A8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F62AC
  c->r[4]=0u+0x00000003u; // 800F62B0
  c->r[3]=0u+0x00000067u; // 800F62B4
  W8(c->r[31]+0x0000006Cu,c->r[4]); // 800F62B8
  c->r[0]=c->r[0]|0x00000804u; // 800F62BC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F62C0
  W8(c->r[31]+0x0000006Du,c->r[3]); // 800F62C4
  c->r[3]=c->r[31]|c->r[31]; // 800F62C8
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F62CC
  c->lr=0x800F62D4u; f_801F58BC(c); // 800F62D0
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F62D4
  c->r[0]=0u+0x00000000u; // 800F62D8
  c->r[3]=0u+0x805D0000u; // 800F62DC
  c->r[4]=c->r[31]+0x0000002Cu; // 800F62E0
  W8(c->r[5]+0x0000001Cu,c->r[0]); // 800F62E4
  c->r[3]=c->r[3]+0x000078B0u; // 800F62E8
  c->lr=0x800F62F0u; f_802351CC(c); // 800F62EC
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F62F0
  c->r[29]=0u+0x803A0000u; // 800F62F4
  c->r[4]=c->r[29]+0xFFFFEFE0u; // 800F62F8
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800F62FC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F6300
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F6304
  c->lr=0x800F630Cu; f_80256EC4(c); // 800F6308
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F630C
  c->r[4]=0u+0x00000000u; // 800F6310
  {uint32_t ea=c->r[2]+0xFFFFAA20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F6314
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800F6318
  c->f[2]=c->f[1]; // 800F631C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F6320
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800F6324
  c->r[5]=R32(c->r[5]+0x00000034u); // 800F6328
  c->lr=0x800F6330u; f_8024FEAC(c); // 800F632C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F6330
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F6334
  c->lr=0x800F633Cu; f_802501B0(c); // 800F6338
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F633C
  c->r[3]=c->r[31]|c->r[31]; // 800F6340
  c->lr=0x800F6348u; f_801F58BC(c); // 800F6344
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F6348
  c->r[30]=0u+0x00000001u; // 800F634C
  c->r[4]=c->r[29]+0xFFFFEFE0u; // 800F6350
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800F6354
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F6358
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F635C
  c->r[0]=R8(c->r[5]+0x0000001Du); // 800F6360
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800F6364
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F6368
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F636C
  c->lr=0x800F6374u; f_80256EC4(c); // 800F6370
  c->r[5]=R32(c->r[31]+0x00000398u); // 800F6374
  c->r[4]=0u+0x00000000u; // 800F6378
  {uint32_t ea=c->r[2]+0xFFFFAA20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F637C
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800F6380
  c->f[2]=c->f[1]; // 800F6384
  c->r[5]=R32(c->r[31]+0x00000398u); // 800F6388
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800F638C
  c->r[5]=R32(c->r[5]+0x00000034u); // 800F6390
  c->lr=0x800F6398u; f_8024FEAC(c); // 800F6394
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F6398
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F639C
  c->lr=0x800F63A4u; f_802501B0(c); // 800F63A0
  {uint32_t ea=c->r[2]+0xFFFFAA20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F63A4
  c->r[3]=c->r[31]+0x0000000Cu; // 800F63A8
  c->lr=0x800F63B0u; f_80037668(c); // 800F63AC
  W8(c->r[31]+0x0000006Fu,c->r[30]); // 800F63B0
  c->r[3]=c->r[31]|c->r[31]; // 800F63B4
  c->lr=0x800F63BCu; f_801F56F4(c); // 800F63B8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F63BC
  c->r[3]=c->r[31]|c->r[31]; // 800F63C0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F63C4
  c->ctr=c->r[12]; // 800F63C8
  if (true) { c->lr=0x800F63D0u; dispatch(c,c->ctr); } // 800F63CC
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)112); // 800F63D0
  W32(c->r[31]+0x00000444u,c->r[30]); // 800F63D4
  c->lr=0x800F63DCu; f_8024E174(c); // 800F63D8
  W32(c->r[31]+0x00000438u,c->r[3]); // 800F63DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F63E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F63E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F63E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F63EC
  c->lr=c->r[0]; // 800F63F0
  c->r[1]=c->r[1]+0x00000020u; // 800F63F4
  return; // 800F63F8
}

// fn_800F63FC
void f_800F63FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F63FC
  c->r[0]=c->lr; // 800F6400
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6404
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6408
  c->r[31]=0u+0x805D0000u; // 800F640C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6410
  c->r[30]=c->r[3]|c->r[3]; // 800F6414
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F6418
  c->lr=0x800F6420u; f_80045264(c); // 800F641C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800F6420
  cmpu(c,0,c->r[0],0x00000041u); // 800F6424
  if (!crb(c,2)) { goto L_800F647C; } // 800F6428
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F642C
  c->lr=0x800F6434u; f_80037AF0(c); // 800F6430
  cmpu(c,0,c->r[3],c->r[30]); // 800F6434
  if (!crb(c,2)) { goto L_800F647C; } // 800F6438
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F643C
  c->r[4]=0u+0x00000001u; // 800F6440
  c->r[0]=0u+0x00000000u; // 800F6444
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 800F6448
  c->r[3]=R32(c->r[30]+0x00000398u); // 800F644C
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800F6450
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800F6454
  cmps(c,0,(int32_t)c->r[0],101); // 800F6458
  if (crb(c,2)) { goto L_800F647C; } // 800F645C
  {uint32_t ea=c->r[2]+0xFFFFAA20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F6460
  c->r[3]=c->r[30]|c->r[30]; // 800F6464
  c->r[4]=0u+0x00000065u; // 800F6468
  c->r[5]=0u+0x00000000u; // 800F646C
  c->r[6]=0u+0x00000000u; // 800F6470
  c->r[7]=0u+0x00000000u; // 800F6474
  c->lr=0x800F647Cu; f_801F4D44(c); // 800F6478
L_800F647C:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F647C
  c->r[3]=c->r[30]|c->r[30]; // 800F6480
  c->r[12]=R32(c->r[12]+0x00000068u); // 800F6484
  c->ctr=c->r[12]; // 800F6488
  if (true) { c->lr=0x800F6490u; dispatch(c,c->ctr); } // 800F648C
  c->r[3]=c->r[30]|c->r[30]; // 800F6490
  c->lr=0x800F6498u; f_801F4C0C(c); // 800F6494
  c->r[3]=c->r[30]|c->r[30]; // 800F6498
  c->lr=0x800F64A0u; f_800F6AFC(c); // 800F649C
  c->r[3]=c->r[30]|c->r[30]; // 800F64A0
  c->lr=0x800F64A8u; f_801F56F4(c); // 800F64A4
  c->r[3]=R32(c->r[30]+0x00000398u); // 800F64A8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800F64AC
  cmps(c,0,(int32_t)c->r[0],0); // 800F64B0
  if (crb(c,2)) { goto L_800F64F4; } // 800F64B4
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F64B8
  c->r[3]=c->r[3]+0x0000005Cu; // 800F64BC
  c->r[4]=c->r[4]+0x0000005Cu; // 800F64C0
  c->lr=0x800F64C8u; f_800361A0(c); // 800F64C4
  c->r[3]=R32(c->r[30]+0x00000398u); // 800F64C8
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F64CC
  c->r[3]=c->r[3]+0x00000068u; // 800F64D0
  c->r[4]=c->r[4]+0x00000068u; // 800F64D4
  c->lr=0x800F64DCu; f_800361A0(c); // 800F64D8
  c->r[3]=R32(c->r[30]+0x00000398u); // 800F64DC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F64E0
  c->lr=0x800F64E8u; f_802501B0(c); // 800F64E4
  c->r[3]=R32(c->r[30]+0x00000398u); // 800F64E8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F64EC
  c->lr=0x800F64F4u; f_8025037C(c); // 800F64F0
L_800F64F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F64F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F64F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F64FC
  c->lr=c->r[0]; // 800F6500
  c->r[1]=c->r[1]+0x00000010u; // 800F6504
  return; // 800F6508
}

// fn_800F650C
void f_800F650C(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800F650C
}

// fn_800F6510
void f_800F6510(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6510
  c->r[0]=c->lr; // 800F6514
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6518
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F651C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6520
  c->r[30]=c->r[3]|c->r[3]; // 800F6524
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F6528
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F652C
  c->lr=0x800F6534u; f_802501B0(c); // 800F6530
  c->r[3]=c->r[30]|c->r[30]; // 800F6534
  c->r[4]=0u+0x00000000u; // 800F6538
  c->lr=0x800F6540u; f_801F5244(c); // 800F653C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F6540
  c->r[3]=c->r[30]+0x0000002Cu; // 800F6544
  c->r[4]=c->r[4]+0x0000005Cu; // 800F6548
  c->lr=0x800F6550u; f_800361A0(c); // 800F654C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F6550
  c->r[3]=c->r[30]|c->r[30]; // 800F6554
  c->lr=0x800F655Cu; f_801F5418(c); // 800F6558
  cmps(c,0,(int32_t)c->r[3],0); // 800F655C
  if (!crb(c,0)) { goto L_800F6598; } // 800F6560
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800F6564
  c->r[3]=0u+0x00000001u; // 800F6568
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800F656C
  c->r[3]=c->r[30]|c->r[30]; // 800F6570
  c->r[0]=c->r[0]|0x00000080u; // 800F6574
  {uint32_t ea=c->r[2]+0xFFFFAA20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F6578
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800F657C
  c->r[4]=0u+0x00000064u; // 800F6580
  c->r[5]=0u+0x00000000u; // 800F6584
  c->r[6]=0u+0x00000000u; // 800F6588
  c->r[7]=0u+0x00000000u; // 800F658C
  c->lr=0x800F6594u; f_801F4D44(c); // 800F6590
  goto L_800F65CC; // 800F6594
L_800F6598:;
  c->r[31]=0u+0x805D0000u; // 800F6598
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F659C
  c->lr=0x800F65A4u; f_800447E4(c); // 800F65A0
  cmpu(c,0,c->r[3],0x00000001u); // 800F65A4
  if (!crb(c,2)) { goto L_800F65B8; } // 800F65A8
  c->r[0]=0u+0x00000000u; // 800F65AC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F65B0
  goto L_800F65C4; // 800F65B4
L_800F65B8:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F65B8
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800F65BC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F65C0
L_800F65C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F65C4
  c->lr=0x800F65CCu; f_801F5B14(c); // 800F65C8
L_800F65CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F65CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F65D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F65D4
  c->lr=c->r[0]; // 800F65D8
  c->r[1]=c->r[1]+0x00000010u; // 800F65DC
  return; // 800F65E0
}

// fn_800F65E4
void f_800F65E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F65E4
  c->r[0]=c->lr; // 800F65E8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F65EC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F65F0
  c->r[31]=c->r[3]|c->r[3]; // 800F65F4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F65F8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F65FC
  c->lr=0x800F6604u; f_802501B0(c); // 800F6600
  c->r[3]=c->r[31]+0x00000038u; // 800F6604
  c->r[4]=c->r[31]+0x0000002Cu; // 800F6608
  c->lr=0x800F6610u; f_800361A0(c); // 800F660C
  {uint32_t ea=c->r[2]+0xFFFFAA20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F6610
  c->r[3]=0u+0x80550000u; // 800F6614
  c->r[3]=c->r[3]+0x00003D60u; // 800F6618
  c->r[4]=c->r[31]+0x00000038u; // 800F661C
  c->f[2]=c->f[1]; // 800F6620
  c->r[5]=c->r[1]+0x00000008u; // 800F6624
  c->f[3]=c->f[1]; // 800F6628
  c->r[6]=0u+0x00000000u; // 800F662C
  c->r[7]=0u+0x00000000u; // 800F6630
  c->lr=0x800F6638u; f_801D5488(c); // 800F6634
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F6638
  c->r[4]=0u+0x803A0000u; // 800F663C
  c->r[4]=c->r[4]+0xFFFFEFC8u; // 800F6640
  c->r[5]=c->r[31]+0x0000002Cu; // 800F6644
  c->r[3]=c->r[3]+0x000000B0u; // 800F6648
  c->lr=0x800F6650u; f_80296750(c); // 800F664C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F6650
  c->r[3]=c->r[31]+0x00000060u; // 800F6654
  c->r[4]=c->r[4]+0x00000068u; // 800F6658
  c->lr=0x800F6660u; f_800361A0(c); // 800F665C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F6660
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F6664
  c->lr=0x800F666Cu; f_802501B0(c); // 800F6668
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800F666C
  c->r[0]=0u+0x00000001u; // 800F6670
  {uint32_t ea=c->r[2]+0xFFFFAA24u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F6674
  c->r[4]=c->r[31]+0x0000002Cu; // 800F6678
  {uint32_t ea=c->r[2]+0xFFFFAA28u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F667C
  c->r[3]=c->r[3]|0x00002000u; // 800F6680
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800F6684
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F6688
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800F668C
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800F6690
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800F6694
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F6698
  c->r[3]=c->r[3]+0x0000005Cu; // 800F669C
  c->lr=0x800F66A4u; f_800361A0(c); // 800F66A0
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F66A4
  c->r[4]=0u+0x00000040u; // 800F66A8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F66AC
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800F66B0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F66B4
  c->r[3]=c->r[3]+0x0000001Cu; // 800F66B8
  c->lr=0x800F66C0u; f_802518A4(c); // 800F66BC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F66C0
  c->r[4]=0u+0x00000006u; // 800F66C4
  c->r[3]=c->r[3]+0x0000001Cu; // 800F66C8
  c->lr=0x800F66D0u; f_80251824(c); // 800F66CC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F66D0
  c->r[3]=c->r[31]|c->r[31]; // 800F66D4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F66D8
  c->r[5]=0u+0x00000000u; // 800F66DC
  c->r[12]=R32(c->r[12]+0x00000064u); // 800F66E0
  c->r[6]=0u+0x00000001u; // 800F66E4
  {uint32_t ea=c->r[2]+0xFFFFAA2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F66E8
  {uint32_t ea=c->r[2]+0xFFFFAA20u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F66EC
  c->ctr=c->r[12]; // 800F66F0
  if (true) { c->lr=0x800F66F8u; dispatch(c,c->ctr); } // 800F66F4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F66F8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F66FC
  c->lr=0x800F6704u; f_802501B0(c); // 800F6700
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F6704
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800F6708
  cmps(c,0,(int32_t)c->r[0],0); // 800F670C
  if (crb(c,2)) { goto L_800F67F4; } // 800F6710
  c->r[3]=c->r[3]+0x00000068u; // 800F6714
  c->r[4]=c->r[31]+0x00000060u; // 800F6718
  c->lr=0x800F6720u; f_800361A0(c); // 800F671C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F6720
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F6724
  c->lr=0x800F672Cu; f_8025037C(c); // 800F6728
  c->r[6]=R32(c->r[31]+0x00000394u); // 800F672C
  c->r[3]=c->r[1]+0x00000030u; // 800F6730
  c->r[4]=c->r[31]+0x00000060u; // 800F6734
  c->r[5]=c->r[1]+0x0000003Cu; // 800F6738
  c->r[6]=c->r[6]+0x000000B0u; // 800F673C
  c->r[7]=0u+0x00000000u; // 800F6740
  c->lr=0x800F6748u; f_8002BE64(c); // 800F6744
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800F6748
  c->r[3]=0u+0x805D0000u; // 800F674C
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F6750
  c->r[3]=c->r[3]+0x00003F6Cu; // 800F6754
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F6758
  c->r[4]=c->r[31]|c->r[31]; // 800F675C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800F6760
  c->r[7]=c->r[1]+0x00000018u; // 800F6764
  c->r[6]=0u+0x00000014u; // 800F6768
  c->r[8]=0u+0x00000000u; // 800F676C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F6770
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F6774
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F6778
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F677C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F6780
  c->lr=0x800F6788u; f_801FA6A4(c); // 800F6784
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800F6788
  cmps(c,0,(int32_t)c->r[0],0); // 800F678C
  if (crb(c,2)) { goto L_800F67A4; } // 800F6790
  c->r[3]=c->r[31]+0x00000044u; // 800F6794
  c->r[4]=c->r[31]+0x000003CCu; // 800F6798
  c->lr=0x800F67A0u; f_800361A0(c); // 800F679C
  goto L_800F67DC; // 800F67A0
L_800F67A4:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F67A4
  {uint32_t ea=c->r[2]+0xFFFFAA30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F67A8
  fcmp(c,0,c->f[1],c->f[0]); // 800F67AC
  if (!crb(c,1)) { goto L_800F67DC; } // 800F67B0
  c->r[7]=0u+0x803A0000u; // 800F67B4
  {uint32_t ea=c->r[7]+0xFFFFEFD4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F67B8
  c->r[3]=c->r[31]+0x00000044u; // 800F67BC
  c->r[4]=c->r[1]+0x00000024u; // 800F67C0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F67C4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F67C8
  W32(c->r[1]+0x00000024u,c->r[6]); // 800F67CC
  W32(c->r[1]+0x00000028u,c->r[5]); // 800F67D0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800F67D4
  c->lr=0x800F67DCu; f_800361A0(c); // 800F67D8
L_800F67DC:;
  c->r[6]=0u+0x803A0000u; // 800F67DC
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F67E0
  c->r[5]=c->r[31]+0x00000044u; // 800F67E4
  c->r[4]=0u+0x00000000u; // 800F67E8
  c->r[6]=c->r[6]+0xFFFFEFC8u; // 800F67EC
  c->lr=0x800F67F4u; f_801FBEC0(c); // 800F67F0
L_800F67F4:;
  c->r[3]=c->r[31]|c->r[31]; // 800F67F4
  c->r[4]=0u+0x00000000u; // 800F67F8
  c->lr=0x800F6800u; f_801F7C00(c); // 800F67FC
  c->r[7]=0u+0x803D0000u; // 800F6800
  {uint32_t ea=c->r[7]+0x000054C0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F6804
  c->r[3]=c->r[31]|c->r[31]; // 800F6808
  c->r[4]=c->r[1]+0x0000000Cu; // 800F680C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F6810
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F6814
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F6818
  W32(c->r[1]+0x00000010u,c->r[5]); // 800F681C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6820
  c->lr=0x800F6828u; f_800F683C(c); // 800F6824
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F6828
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F682C
  c->lr=c->r[0]; // 800F6830
  c->r[1]=c->r[1]+0x00000050u; // 800F6834
  return; // 800F6838
}

// fn_800F683C
void f_800F683C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F683C
  c->r[0]=c->lr; // 800F6840
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6844
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6848
  c->r[31]=c->r[4]|c->r[4]; // 800F684C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6850
  c->r[30]=c->r[3]|c->r[3]; // 800F6854
  c->r[3]=c->r[31]|c->r[31]; // 800F6858
  c->lr=0x800F6860u; f_802B9FDC(c); // 800F685C
  cmps(c,0,(int32_t)c->r[3],0); // 800F6860
  if (crb(c,2)) { goto L_800F6880; } // 800F6864
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F6868
  c->r[0]=R32(c->r[31]+0x00000004u); // 800F686C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800F6870
  W32(c->r[30]+0x00000020u,c->r[0]); // 800F6874
  c->r[0]=R32(c->r[31]+0x00000008u); // 800F6878
  W32(c->r[30]+0x00000024u,c->r[0]); // 800F687C
L_800F6880:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6880
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6884
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6888
  c->lr=c->r[0]; // 800F688C
  c->r[1]=c->r[1]+0x00000010u; // 800F6890
  return; // 800F6894
}

// fn_800F6898
void f_800F6898(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6898
  c->r[0]=c->lr; // 800F689C
  c->r[4]=0u+0x00000000u; // 800F68A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F68A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F68A8
  c->r[31]=c->r[3]|c->r[3]; // 800F68AC
  c->r[3]=R32(c->r[3]+0x00000438u); // 800F68B0
  c->lr=0x800F68B8u; f_801FAF00(c); // 800F68B4
  cmps(c,0,(int32_t)c->r[3],0); // 800F68B8
  if (!crb(c,2)) { goto L_800F6958; } // 800F68BC
  c->r[3]=c->r[31]|c->r[31]; // 800F68C0
  c->r[4]=0u+0x00000041u; // 800F68C4
  c->lr=0x800F68CCu; f_801F5AB4(c); // 800F68C8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F68CC
  c->r[3]=c->r[31]+0x0000002Cu; // 800F68D0
  {uint32_t ea=c->r[2]+0xFFFFAA20u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F68D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800F68D8
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F68DC
  c->r[0]=c->r[0]|0x00000004u; // 800F68E0
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800F68E4
  c->r[4]=c->r[4]+0x0000005Cu; // 800F68E8
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F68EC
  c->lr=0x800F68F4u; f_800361A0(c); // 800F68F0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F68F4
  c->r[3]=c->r[31]+0x00000060u; // 800F68F8
  c->r[4]=c->r[4]+0x00000068u; // 800F68FC
  c->lr=0x800F6904u; f_800361A0(c); // 800F6900
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800F6904
  c->r[3]=0u+0x805D0000u; // 800F6908
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F690C
  c->r[3]=c->r[3]+0x00006CF8u; // 800F6910
  c->r[4]=c->r[1]+0x00000008u; // 800F6914
  c->r[5]=0u+0x00040000u; // 800F6918
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F691C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F6920
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F6924
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F6928
  c->lr=0x800F6930u; f_802236F8(c); // 800F692C
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800F6930
  c->r[3]=c->r[31]|c->r[31]; // 800F6934
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F6938
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F693C
  c->ctr=c->r[12]; // 800F6940
  if (true) { c->lr=0x800F6948u; dispatch(c,c->ctr); } // 800F6944
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F6948
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F694C
  c->lr=0x800F6954u; f_8025037C(c); // 800F6950
  goto L_800F6978; // 800F6954
L_800F6958:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F6958
  c->r[3]=c->r[31]+0x0000002Cu; // 800F695C
  c->r[4]=c->r[4]+0x0000005Cu; // 800F6960
  c->lr=0x800F6968u; f_800361A0(c); // 800F6964
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F6968
  c->r[3]=c->r[31]+0x00000060u; // 800F696C
  c->r[4]=c->r[4]+0x00000068u; // 800F6970
  c->lr=0x800F6978u; f_800361A0(c); // 800F6974
L_800F6978:;
  c->r[3]=c->r[31]|c->r[31]; // 800F6978
  c->r[4]=0u+0x00000000u; // 800F697C
  c->lr=0x800F6984u; f_801F7C00(c); // 800F6980
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F6984
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F6988
  c->lr=c->r[0]; // 800F698C
  c->r[1]=c->r[1]+0x00000020u; // 800F6990
  return; // 800F6994
}

// fn_800F6998
void f_800F6998(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6998
  c->r[0]=c->lr; // 800F699C
  c->r[5]=0u+0x00000000u; // 800F69A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F69A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F69A8
  c->r[31]=c->r[3]|c->r[3]; // 800F69AC
  c->r[3]=0u+0x00000418u; // 800F69B0
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F69B4
  c->r[4]=c->r[4]+0x0000010Cu; // 800F69B8
  c->lr=0x800F69C0u; f_8024EE50(c); // 800F69BC
  cmps(c,0,(int32_t)c->r[3],0); // 800F69C0
  if (crb(c,2)) { goto L_800F69D0; } // 800F69C4
  c->r[3]=0u+0x00000000u; // 800F69C8
  goto L_800F69EC; // 800F69CC
L_800F69D0:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F69D0
  c->r[3]=0u+0x00000459u; // 800F69D4
  c->r[5]=0u+0x00000000u; // 800F69D8
  c->r[4]=c->r[4]+0x0000010Cu; // 800F69DC
  c->lr=0x800F69E4u; f_8024EE50(c); // 800F69E0
  c->r[0]=cntlz(c->r[3]); // 800F69E4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F69E8
L_800F69EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F69EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F69F0
  c->lr=c->r[0]; // 800F69F4
  c->r[1]=c->r[1]+0x00000010u; // 800F69F8
  return; // 800F69FC
}

// fn_800F6A00
void f_800F6A00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6A00
  c->r[0]=c->lr; // 800F6A04
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F6A08
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800F6A0C
  c->r[31]=c->r[3]|c->r[3]; // 800F6A10
  c->lr=0x800F6A18u; f_801F4F28(c); // 800F6A14
  c->r[3]=R32(c->r[31]+0x000003C0u); // 800F6A18
  cmps(c,0,(int32_t)c->r[3],101); // 800F6A1C
  if (crb(c,2)) { goto L_800F6A70; } // 800F6A20
  if (!crb(c,0)) { goto L_800F6AA8; } // 800F6A24
  cmps(c,0,(int32_t)c->r[3],100); // 800F6A28
  if (!crb(c,0)) { goto L_800F6A34; } // 800F6A2C
  goto L_800F6AA8; // 800F6A30
L_800F6A34:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800F6A34
  cmps(c,0,(int32_t)c->r[0],100); // 800F6A38
  if (crb(c,2)) { goto L_800F6AA8; } // 800F6A3C
  W16(c->r[31]+0x000003BCu,c->r[3]); // 800F6A40
  c->r[7]=0u+0x803D0000u; // 800F6A44
  c->r[3]=c->r[31]|c->r[31]; // 800F6A48
  c->r[4]=c->r[1]+0x00000014u; // 800F6A4C
  {uint32_t ea=c->r[7]+0x000054CCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800F6A50
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F6A54
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F6A58
  W32(c->r[1]+0x00000014u,c->r[6]); // 800F6A5C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800F6A60
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F6A64
  c->lr=0x800F6A6Cu; f_800F683C(c); // 800F6A68
  goto L_800F6AA8; // 800F6A6C
L_800F6A70:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800F6A70
  cmps(c,0,(int32_t)c->r[0],101); // 800F6A74
  if (crb(c,2)) { goto L_800F6AA8; } // 800F6A78
  W16(c->r[31]+0x000003BCu,c->r[3]); // 800F6A7C
  c->r[7]=0u+0x803D0000u; // 800F6A80
  c->r[3]=c->r[31]|c->r[31]; // 800F6A84
  c->r[4]=c->r[1]+0x00000008u; // 800F6A88
  {uint32_t ea=c->r[7]+0x000054D8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F6A8C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F6A90
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F6A94
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F6A98
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F6A9C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F6AA0
  c->lr=0x800F6AA8u; f_800F683C(c); // 800F6AA4
L_800F6AA8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F6AA8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800F6AAC
  c->lr=c->r[0]; // 800F6AB0
  c->r[1]=c->r[1]+0x00000030u; // 800F6AB4
  return; // 800F6AB8
}

// fn_800F6ABC
void f_800F6ABC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6ABC
  c->r[0]=c->lr; // 800F6AC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6AC4
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800F6AC8
  c->r[5]=c->r[3]+c->r[0]; // 800F6ACC
  c->r[3]=c->r[4]|c->r[4]; // 800F6AD0
  c->r[4]=R32(c->r[5]+0x00000394u); // 800F6AD4
  c->r[5]=0u+0x00000000u; // 800F6AD8
  c->lr=0x800F6AE0u; f_80250BF4(c); // 800F6ADC
  c->r[0]=cntlz(c->r[3]); // 800F6AE0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F6AE4
  c->r[3]=0u-c->r[0]; // 800F6AE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6AEC
  c->lr=c->r[0]; // 800F6AF0
  c->r[1]=c->r[1]+0x00000010u; // 800F6AF4
  return; // 800F6AF8
}

// fn_800F6AFC
void f_800F6AFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6AFC
  c->r[0]=c->lr; // 800F6B00
  c->r[5]=0u+0x80620000u; // 800F6B04
  c->r[4]=0u+0x00000002u; // 800F6B08
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F6B0C
  c->r[5]=c->r[5]+0x00007688u; // 800F6B10
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800F6B14
  W32(c->r[1]+0x00000088u,c->r[30]); // 800F6B18
  c->r[30]=c->r[3]|c->r[3]; // 800F6B1C
  c->r[3]=R32(c->r[5]+0x00000014u); // 800F6B20
  c->lr=0x800F6B28u; f_80037670(c); // 800F6B24
  cmps(c,0,(int32_t)c->r[3],0); // 800F6B28
  if (!crb(c,2)) { goto L_800F6B8C; } // 800F6B2C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F6B30
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800F6B34
  cmps(c,0,(int32_t)c->r[0],0); // 800F6B38
  if (!crb(c,2)) { goto L_800F6B8C; } // 800F6B3C
  {uint32_t ea=c->r[2]+0xFFFFAA34u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F6B40
  c->r[3]=c->r[1]+0x00000014u; // 800F6B44
  c->r[4]=c->r[30]+0x0000002Cu; // 800F6B48
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800F6B4C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800F6B50
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800F6B54
  c->lr=0x800F6B5Cu; f_800361A0(c); // 800F6B58
  c->r[31]=0u+0x80550000u; // 800F6B5C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F6B60
  c->r[31]=c->r[31]+0x00003D60u; // 800F6B64
  c->r[5]=c->r[30]|c->r[30]; // 800F6B68
  c->r[3]=c->r[31]+0x00000010u; // 800F6B6C
  c->r[6]=c->r[1]+0x00000014u; // 800F6B70
  c->r[7]=c->r[1]+0x00000020u; // 800F6B74
  c->r[4]=0u+0x000001FFu; // 800F6B78
  c->lr=0x800F6B80u; f_80226910(c); // 800F6B7C
  c->r[3]=c->r[31]+0x00000010u; // 800F6B80
  c->r[4]=c->r[1]+0x00000020u; // 800F6B84
  c->lr=0x800F6B8Cu; f_80226D68(c); // 800F6B88
L_800F6B8C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F6B8C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800F6B90
  c->r[30]=R32(c->r[1]+0x00000088u); // 800F6B94
  c->lr=c->r[0]; // 800F6B98
  c->r[1]=c->r[1]+0x00000090u; // 800F6B9C
  return; // 800F6BA0
}

// fn_800F6BA4
void f_800F6BA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6BA4
  c->r[0]=c->lr; // 800F6BA8
  cmps(c,0,(int32_t)c->r[3],0); // 800F6BAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6BB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6BB4
  c->r[31]=c->r[4]|c->r[4]; // 800F6BB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6BBC
  c->r[30]=c->r[3]|c->r[3]; // 800F6BC0
  if (crb(c,2)) { goto L_800F6BE0; } // 800F6BC4
  c->r[4]=0u+0x00000000u; // 800F6BC8
  c->lr=0x800F6BD0u; f_8026A06C(c); // 800F6BCC
  cmps(c,0,(int32_t)c->r[31],0); // 800F6BD0
  if (!crb(c,1)) { goto L_800F6BE0; } // 800F6BD4
  c->r[3]=c->r[30]|c->r[30]; // 800F6BD8
  c->lr=0x800F6BE0u; f_8026A268(c); // 800F6BDC
L_800F6BE0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6BE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6BE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6BE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6BEC
  c->lr=c->r[0]; // 800F6BF0
  c->r[1]=c->r[1]+0x00000010u; // 800F6BF4
  return; // 800F6BF8
}

// fn_800F6BFC
void f_800F6BFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6BFC
  c->r[0]=c->lr; // 800F6C00
  c->r[4]=0u+0x00000000u; // 800F6C04
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F6C08
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F6C0C
  c->r[31]=c->r[3]|c->r[3]; // 800F6C10
  W32(c->r[1]+0x00000048u,c->r[30]); // 800F6C14
  W32(c->r[1]+0x00000044u,c->r[29]); // 800F6C18
  c->lr=0x800F6C20u; f_801F57D0(c); // 800F6C1C
  c->r[3]=c->r[31]|c->r[31]; // 800F6C20
  c->r[4]=0u+0x00000001u; // 800F6C24
  c->lr=0x800F6C2Cu; f_801F57D0(c); // 800F6C28
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800F6C2C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800F6C30
  if (crb(c,2)) { goto L_800F6C44; } // 800F6C34
  c->r[3]=c->r[31]|c->r[31]; // 800F6C38
  c->r[4]=0u+0x00000002u; // 800F6C3C
  c->lr=0x800F6C44u; f_801F57D0(c); // 800F6C40
L_800F6C44:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F6C44
  c->r[3]=c->r[31]|c->r[31]; // 800F6C48
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800F6C4C
  c->ctr=c->r[12]; // 800F6C50
  if (true) { c->lr=0x800F6C58u; dispatch(c,c->ctr); } // 800F6C54
  c->r[3]=c->r[31]|c->r[31]; // 800F6C58
  c->lr=0x800F6C60u; f_801F4B94(c); // 800F6C5C
  c->r[3]=0u+0x00000003u; // 800F6C60
  c->r[0]=0u+0x00000068u; // 800F6C64
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800F6C68
  c->r[3]=c->r[31]|c->r[31]; // 800F6C6C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F6C70
  W8(c->r[31]+0x0000006Du,c->r[0]); // 800F6C74
  c->lr=0x800F6C7Cu; f_801F58BC(c); // 800F6C78
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F6C7C
  c->r[0]=0u+0x00000001u; // 800F6C80
  c->r[30]=0u+0x803A0000u; // 800F6C84
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800F6C88
  c->r[4]=c->r[30]+0xFFFFF008u; // 800F6C8C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F6C90
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F6C94
  c->lr=0x800F6C9Cu; f_80256EC4(c); // 800F6C98
  c->r[6]=R32(c->r[31]+0x00000394u); // 800F6C9C
  c->r[5]=0u+0x805D0000u; // 800F6CA0
  c->r[4]=c->r[31]+0x0000002Cu; // 800F6CA4
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800F6CA8
  c->r[3]=c->r[5]+0x000078B0u; // 800F6CAC
  c->lr=0x800F6CB4u; f_802351CC(c); // 800F6CB0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F6CB4
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800F6CB8
  c->r[3]=c->r[31]|c->r[31]; // 800F6CBC
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F6CC0
  c->lr=0x800F6CC8u; f_801F58BC(c); // 800F6CC4
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F6CC8
  c->r[29]=0u+0x00000000u; // 800F6CCC
  c->r[4]=c->r[30]+0xFFFFF008u; // 800F6CD0
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800F6CD4
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F6CD8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F6CDC
  c->lr=0x800F6CE4u; f_80256EC4(c); // 800F6CE0
  c->r[5]=R32(c->r[31]+0x00000398u); // 800F6CE4
  c->r[4]=0u+0x000000FFu; // 800F6CE8
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800F6CEC
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800F6CF0
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800F6CF4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800F6CF8
  W8(c->r[31]+0x00000075u,c->r[4]); // 800F6CFC
  c->r[0]=rotl(c->r[3],0)&0xFFFFDFFFu; // 800F6D00
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F6D04
  if (crb(c,2)) { goto L_800F6DE8; } // 800F6D08
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800F6D0C
  c->r[3]=c->r[31]|c->r[31]; // 800F6D10
  c->lr=0x800F6D18u; f_801F58BC(c); // 800F6D14
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800F6D18
  c->r[4]=c->r[30]+0xFFFFF008u; // 800F6D1C
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800F6D20
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800F6D24
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F6D28
  c->lr=0x800F6D30u; f_80256EC4(c); // 800F6D2C
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800F6D30
  c->r[5]=0u+0x00000013u; // 800F6D34
  {uint32_t ea=c->r[2]+0xFFFFAA40u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F6D38
  c->r[6]=0u+0x00000001u; // 800F6D3C
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800F6D40
  c->r[3]=c->r[31]|c->r[31]; // 800F6D44
  c->f[2]=c->f[1]; // 800F6D48
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F6D4C
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800F6D50
  c->r[12]=R32(c->r[12]+0x00000064u); // 800F6D54
  c->ctr=c->r[12]; // 800F6D58
  if (true) { c->lr=0x800F6D60u; dispatch(c,c->ctr); } // 800F6D5C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F6D60
  c->r[5]=0u+0x00000000u; // 800F6D64
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800F6D68
  c->lr=0x800F6D70u; f_80250BF4(c); // 800F6D6C
  c->r[30]=c->r[30]+0xFFFFF008u; // 800F6D70
  c->r[29]=0u+0x80550000u; // 800F6D74
  c->r[3]=c->r[29]+0xFFFFC848u; // 800F6D78
  c->r[5]=0u+0x00000000u; // 800F6D7C
  c->r[4]=c->r[30]+0x00000009u; // 800F6D80
  c->r[6]=0u+0x00000000u; // 800F6D84
  c->lr=0x800F6D8Cu; f_8018D3E4(c); // 800F6D88
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F6D8C
  W8(c->r[31]+0x00000075u,c->r[3]); // 800F6D90
  cmpu(c,0,c->r[0],0x000000FFu); // 800F6D94
  if (crb(c,2)) { goto L_800F6DC4; } // 800F6D98
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800F6D9C
  c->r[4]=c->r[30]|c->r[30]; // 800F6DA0
  c->r[5]=c->r[1]+0x00000008u; // 800F6DA4
  c->r[6]=0u+0x00000001u; // 800F6DA8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F6DAC
  c->lr=0x800F6DB4u; f_80257018(c); // 800F6DB0
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F6DB4
  c->r[3]=c->r[29]+0xFFFFC848u; // 800F6DB8
  c->r[5]=c->r[1]+0x00000008u; // 800F6DBC
  c->lr=0x800F6DC4u; f_8018DEB8(c); // 800F6DC0
L_800F6DC4:;
  c->r[3]=c->r[31]|c->r[31]; // 800F6DC4
  c->r[4]=0u+0x00000002u; // 800F6DC8
  c->r[5]=0u+0x0000004Bu; // 800F6DCC
  c->r[6]=0u+0x00000001u; // 800F6DD0
  c->r[7]=0u+0x00000001u; // 800F6DD4
  c->lr=0x800F6DDCu; f_8017900C(c); // 800F6DD8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F6DDC
  c->r[0]=c->r[0]|0x00002000u; // 800F6DE0
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F6DE4
L_800F6DE8:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F6DE8
  c->r[3]=c->r[31]|c->r[31]; // 800F6DEC
  {uint32_t ea=c->r[2]+0xFFFFAA40u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F6DF0
  c->r[4]=0u+0x00000000u; // 800F6DF4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800F6DF8
  c->r[5]=0u+0x00000001u; // 800F6DFC
  c->f[2]=c->f[1]; // 800F6E00
  c->ctr=c->r[12]; // 800F6E04
  if (true) { c->lr=0x800F6E0Cu; dispatch(c,c->ctr); } // 800F6E08
  c->r[4]=R16(c->r[31]+0x000003BEu); // 800F6E0C
  c->r[3]=0u+0x00000000u; // 800F6E10
  c->r[0]=0u+0x00000001u; // 800F6E14
  W8(c->r[31]+0x00000074u,c->r[3]); // 800F6E18
  c->r[4]=c->r[4]|0x00000814u; // 800F6E1C
  c->r[3]=c->r[31]|c->r[31]; // 800F6E20
  W16(c->r[31]+0x000003BEu,c->r[4]); // 800F6E24
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800F6E28
  c->lr=0x800F6E30u; f_801F56F4(c); // 800F6E2C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F6E30
  c->r[3]=c->r[31]|c->r[31]; // 800F6E34
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F6E38
  c->ctr=c->r[12]; // 800F6E3C
  if (true) { c->lr=0x800F6E44u; dispatch(c,c->ctr); } // 800F6E40
  c->r[3]=c->r[31]|c->r[31]; // 800F6E44
  c->lr=0x800F6E4Cu; f_800F7C7C(c); // 800F6E48
  c->r[3]=0u+0x80550000u; // 800F6E4C
  c->r[3]=c->r[3]+0x00003D60u; // 800F6E50
  c->r[3]=c->r[3]+0x00000010u; // 800F6E54
  c->lr=0x800F6E5Cu; f_80226E94(c); // 800F6E58
  {uint32_t ea=c->r[2]+0xFFFFAA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F6E5C
  c->r[3]=c->r[31]|c->r[31]; // 800F6E60
  c->r[4]=c->r[31]+0x00000080u; // 800F6E64
  c->r[5]=c->r[31]+0x00000082u; // 800F6E68
  c->r[6]=c->r[31]+0x00000084u; // 800F6E6C
  c->r[7]=c->r[31]+0x00000086u; // 800F6E70
  c->lr=0x800F6E78u; f_801F5EE4(c); // 800F6E74
  c->r[3]=c->r[31]|c->r[31]; // 800F6E78
  c->lr=0x800F6E80u; f_800F7D80(c); // 800F6E7C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F6E80
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F6E84
  c->r[30]=R32(c->r[1]+0x00000048u); // 800F6E88
  c->r[29]=R32(c->r[1]+0x00000044u); // 800F6E8C
  c->lr=c->r[0]; // 800F6E90
  c->r[1]=c->r[1]+0x00000050u; // 800F6E94
  return; // 800F6E98
}

// fn_800F6E9C
void f_800F6E9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6E9C
  c->r[0]=c->lr; // 800F6EA0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F6EA4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F6EA8
  c->r[31]=c->r[3]|c->r[3]; // 800F6EAC
  W32(c->r[1]+0x00000048u,c->r[30]); // 800F6EB0
  W32(c->r[1]+0x00000044u,c->r[29]); // 800F6EB4
  c->lr=0x800F6EBCu; f_800F730C(c); // 800F6EB8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F6EBC
  c->r[3]=c->r[31]|c->r[31]; // 800F6EC0
  c->r[12]=R32(c->r[12]+0x00000068u); // 800F6EC4
  c->ctr=c->r[12]; // 800F6EC8
  if (true) { c->lr=0x800F6ED0u; dispatch(c,c->ctr); } // 800F6ECC
  c->r[3]=c->r[31]|c->r[31]; // 800F6ED0
  c->lr=0x800F6ED8u; f_801F4C0C(c); // 800F6ED4
  c->r[3]=c->r[31]|c->r[31]; // 800F6ED8
  c->lr=0x800F6EE0u; f_800F7C7C(c); // 800F6EDC
  c->r[29]=0u+0x805D0000u; // 800F6EE0
  c->r[3]=c->r[29]+0x00003F6Cu; // 800F6EE4
  c->lr=0x800F6EECu; f_80037AF0(c); // 800F6EE8
  cmpu(c,0,c->r[3],c->r[31]); // 800F6EEC
  if (!crb(c,2)) { goto L_800F6F70; } // 800F6EF0
  c->r[3]=c->r[29]+0x00003F6Cu; // 800F6EF4
  c->lr=0x800F6EFCu; f_800376F0(c); // 800F6EF8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800F6EFC
  cmps(c,0,(int32_t)c->r[0],113); // 800F6F00
  if (!crb(c,2)) { goto L_800F6F30; } // 800F6F04
  c->r[3]=c->r[29]+0x00003F6Cu; // 800F6F08
  c->lr=0x800F6F10u; f_800B8D98(c); // 800F6F0C
  c->r[30]=c->r[3]|c->r[3]; // 800F6F10
  c->r[3]=c->r[29]+0x00003F6Cu; // 800F6F14
  c->lr=0x800F6F1Cu; f_80037AF0(c); // 800F6F18
  cmpu(c,0,c->r[3],c->r[30]); // 800F6F1C
  if (!crb(c,2)) { goto L_800F6F30; } // 800F6F20
  c->r[0]=0u+0x00000001u; // 800F6F24
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800F6F28
  goto L_800F6F70; // 800F6F2C
L_800F6F30:;
  c->r[30]=0u+0x805D0000u; // 800F6F30
  c->r[3]=c->r[30]+0x00003F6Cu; // 800F6F34
  c->lr=0x800F6F3Cu; f_800447E4(c); // 800F6F38
  cmpu(c,0,c->r[3],0x00000001u); // 800F6F3C
  if (!crb(c,2)) { goto L_800F6F50; } // 800F6F40
  c->r[0]=0u+0x00000000u; // 800F6F44
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800F6F48
  goto L_800F6F70; // 800F6F4C
L_800F6F50:;
  c->r[3]=c->r[30]+0x00003F6Cu; // 800F6F50
  c->r[0]=R8(c->r[31]+0x00000074u); // 800F6F54
  c->r[3]=R8(c->r[3]+0x0000006Fu); // 800F6F58
  cmps(c,0,(int32_t)c->r[0],0); // 800F6F5C
  W8(c->r[31]+0x0000006Fu,c->r[3]); // 800F6F60
  if (crb(c,2)) { goto L_800F6F70; } // 800F6F64
  c->r[0]=0u+0x00000000u; // 800F6F68
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800F6F6C
L_800F6F70:;
  c->r[3]=c->r[31]|c->r[31]; // 800F6F70
  c->lr=0x800F6F78u; f_801F56F4(c); // 800F6F74
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F6F78
  cmps(c,0,(int32_t)c->r[3],0); // 800F6F7C
  if (crb(c,2)) { goto L_800F6FE8; } // 800F6F80
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800F6F84
  cmps(c,0,(int32_t)c->r[0],0); // 800F6F88
  if (crb(c,2)) { goto L_800F6FE8; } // 800F6F8C
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800F6F90
  cmps(c,0,(int32_t)c->r[0],0); // 800F6F94
  if (crb(c,2)) { goto L_800F6FE8; } // 800F6F98
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800F6F9C
  cmps(c,0,(int32_t)c->r[0],0); // 800F6FA0
  if (crb(c,2)) { goto L_800F6FC0; } // 800F6FA4
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800F6FA8
  cmps(c,0,(int32_t)c->r[0],0); // 800F6FAC
  if (!crb(c,2)) { goto L_800F6FC0; } // 800F6FB0
  c->r[4]=c->r[3]+0x000000B0u; // 800F6FB4
  c->lr=0x800F6FBCu; f_80250F18(c); // 800F6FB8
  goto L_800F6FDC; // 800F6FBC
L_800F6FC0:;
  c->r[3]=c->r[3]+0x0000005Cu; // 800F6FC0
  c->r[4]=c->r[31]+0x0000002Cu; // 800F6FC4
  c->lr=0x800F6FCCu; f_800361A0(c); // 800F6FC8
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F6FCC
  c->r[4]=c->r[31]+0x00000060u; // 800F6FD0
  c->r[3]=c->r[3]+0x00000068u; // 800F6FD4
  c->lr=0x800F6FDCu; f_800361A0(c); // 800F6FD8
L_800F6FDC:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F6FDC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F6FE0
  c->lr=0x800F6FE8u; f_8025037C(c); // 800F6FE4
L_800F6FE8:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800F6FE8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800F6FEC
  if (crb(c,2)) { goto L_800F71B8; } // 800F6FF0
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800F6FF4
  cmps(c,0,(int32_t)c->r[4],0); // 800F6FF8
  if (crb(c,2)) { goto L_800F71B8; } // 800F6FFC
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 800F7000
  cmps(c,0,(int32_t)c->r[0],0); // 800F7004
  if (crb(c,2)) { goto L_800F71B8; } // 800F7008
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F700C
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800F7010
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800F7014
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800F7018
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F701C
  c->lr=0x800F7024u; f_802501B0(c); // 800F7020
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800F7024
  c->r[4]=c->r[3]+0x000000B0u; // 800F7028
  c->lr=0x800F7030u; f_80250F18(c); // 800F702C
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800F7030
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F7034
  c->lr=0x800F703Cu; f_8025037C(c); // 800F7038
  c->r[0]=R8(c->r[31]+0x00000075u); // 800F703C
  c->r[29]=0u+0x00000000u; // 800F7040
  cmpu(c,0,c->r[0],0x000000FFu); // 800F7044
  if (crb(c,2)) { goto L_800F71B8; } // 800F7048
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800F704C
  c->r[4]=0u+0x803A0000u; // 800F7050
  c->r[4]=c->r[4]+0xFFFFF008u; // 800F7054
  c->r[5]=c->r[1]+0x00000008u; // 800F7058
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F705C
  c->r[6]=0u+0x00000001u; // 800F7060
  c->lr=0x800F7068u; f_80257018(c); // 800F7064
  c->r[30]=0u+0x80550000u; // 800F7068
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F706C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800F7070
  c->r[5]=c->r[1]+0x00000008u; // 800F7074
  c->lr=0x800F707Cu; f_8018DEB8(c); // 800F7078
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F707C
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 800F7080
  cmps(c,0,(int32_t)c->r[0],128); // 800F7084
  if (!crb(c,2)) { goto L_800F70C4; } // 800F7088
  c->r[3]=0u+0x80620000u; // 800F708C
  c->r[3]=c->r[3]+0x00007688u; // 800F7090
  c->r[3]=R32(c->r[3]+0x00000014u); // 800F7094
  cmps(c,0,(int32_t)c->r[3],0); // 800F7098
  if (crb(c,2)) { goto L_800F70C4; } // 800F709C
  c->r[4]=0u+0x00000002u; // 800F70A0
  c->lr=0x800F70A8u; f_80037670(c); // 800F70A4
  cmps(c,0,(int32_t)c->r[3],0); // 800F70A8
  if (crb(c,2)) { goto L_800F70C4; } // 800F70AC
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F70B0
  c->r[3]=c->r[30]+0xFFFFC848u; // 800F70B4
  c->r[5]=0u+0x00000001u; // 800F70B8
  c->lr=0x800F70C0u; f_8018E2D4(c); // 800F70BC
  goto L_800F714C; // 800F70C0
L_800F70C4:;
  c->r[3]=0u+0x80620000u; // 800F70C4
  c->r[4]=0u+0x00000026u; // 800F70C8
  c->r[3]=c->r[3]+0x00007688u; // 800F70CC
  c->r[3]=R32(c->r[3]+0x00000014u); // 800F70D0
  c->lr=0x800F70D8u; f_80037670(c); // 800F70D4
  cmps(c,0,(int32_t)c->r[3],0); // 800F70D8
  if (crb(c,2)) { goto L_800F70F8; } // 800F70DC
  c->r[3]=0u+0x80550000u; // 800F70E0
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F70E4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F70E8
  c->r[5]=0u+0x00000001u; // 800F70EC
  c->lr=0x800F70F4u; f_8018E2D4(c); // 800F70F0
  goto L_800F714C; // 800F70F4
L_800F70F8:;
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800F70F8
  cmps(c,0,(int32_t)c->r[3],0); // 800F70FC
  if (crb(c,2)) { goto L_800F714C; } // 800F7100
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800F7104
  cmps(c,0,(int32_t)c->r[0],0); // 800F7108
  if (crb(c,2)) { goto L_800F7138; } // 800F710C
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800F7110
  cmps(c,0,(int32_t)c->r[0],0); // 800F7114
  if (crb(c,2)) { goto L_800F7138; } // 800F7118
  c->r[3]=0u+0x80550000u; // 800F711C
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F7120
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F7124
  c->r[5]=0u+0x00000000u; // 800F7128
  c->lr=0x800F7130u; f_8018E2D4(c); // 800F712C
  c->r[29]=0u+0x00000001u; // 800F7130
  goto L_800F714C; // 800F7134
L_800F7138:;
  c->r[3]=0u+0x80550000u; // 800F7138
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F713C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F7140
  c->r[5]=0u+0x00000001u; // 800F7144
  c->lr=0x800F714Cu; f_8018E2D4(c); // 800F7148
L_800F714C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800F714C
  if (crb(c,2)) { goto L_800F7188; } // 800F7150
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F7154
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800F7158
  if (!crb(c,2)) { goto L_800F71B8; } // 800F715C
  c->r[3]=c->r[31]|c->r[31]; // 800F7160
  c->r[4]=0u+0x00000002u; // 800F7164
  c->r[5]=0u+0x0000004Bu; // 800F7168
  c->r[6]=0u+0x00000001u; // 800F716C
  c->r[7]=0u+0x00000001u; // 800F7170
  c->lr=0x800F7178u; f_8017900C(c); // 800F7174
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F7178
  c->r[0]=c->r[0]|0x00002000u; // 800F717C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F7180
  goto L_800F71B8; // 800F7184
L_800F7188:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F7188
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800F718C
  if (crb(c,2)) { goto L_800F71B8; } // 800F7190
  c->r[3]=c->r[31]|c->r[31]; // 800F7194
  c->r[4]=0u+0x00000002u; // 800F7198
  c->r[5]=0u+0x0000004Cu; // 800F719C
  c->r[6]=0u+0x00000001u; // 800F71A0
  c->r[7]=0u+0x00000001u; // 800F71A4
  c->lr=0x800F71ACu; f_8017900C(c); // 800F71A8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F71AC
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800F71B0
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F71B4
L_800F71B8:;
  c->r[3]=c->r[31]|c->r[31]; // 800F71B8
  c->lr=0x800F71C0u; f_800F7E24(c); // 800F71BC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F71C0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F71C4
  c->r[30]=R32(c->r[1]+0x00000048u); // 800F71C8
  c->r[29]=R32(c->r[1]+0x00000044u); // 800F71CC
  c->lr=c->r[0]; // 800F71D0
  c->r[1]=c->r[1]+0x00000050u; // 800F71D4
  return; // 800F71D8
}

// fn_800F71DC
void f_800F71DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F71DC
  c->r[0]=c->lr; // 800F71E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F71E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F71E8
  c->r[31]=c->r[3]|c->r[3]; // 800F71EC
  c->r[4]=R8(c->r[3]+0x00000075u); // 800F71F0
  cmpu(c,0,c->r[4],0x000000FFu); // 800F71F4
  if (crb(c,2)) { goto L_800F7210; } // 800F71F8
  c->r[3]=0u+0x80550000u; // 800F71FC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F7200
  c->lr=0x800F7208u; f_8018D694(c); // 800F7204
  c->r[0]=0u+0x000000FFu; // 800F7208
  W8(c->r[31]+0x00000075u,c->r[0]); // 800F720C
L_800F7210:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F7210
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800F7214
  if (crb(c,2)) { goto L_800F7240; } // 800F7218
  c->r[3]=c->r[31]|c->r[31]; // 800F721C
  c->r[4]=0u+0x00000002u; // 800F7220
  c->r[5]=0u+0x0000004Cu; // 800F7224
  c->r[6]=0u+0x00000001u; // 800F7228
  c->r[7]=0u+0x00000001u; // 800F722C
  c->lr=0x800F7234u; f_8017900C(c); // 800F7230
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F7234
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800F7238
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F723C
L_800F7240:;
  c->r[3]=c->r[31]|c->r[31]; // 800F7240
  c->lr=0x800F7248u; f_801F4C78(c); // 800F7244
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7248
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F724C
  c->lr=c->r[0]; // 800F7250
  c->r[1]=c->r[1]+0x00000010u; // 800F7254
  return; // 800F7258
}

// fn_800F725C
void f_800F725C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F725C
  c->r[0]=c->lr; // 800F7260
  c->r[5]=0u+0x00000000u; // 800F7264
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7268
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F726C
  c->r[31]=c->r[3]|c->r[3]; // 800F7270
  c->r[3]=0u+0x000001BAu; // 800F7274
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F7278
  c->r[4]=c->r[4]+0x0000010Cu; // 800F727C
  c->lr=0x800F7284u; f_8024EE50(c); // 800F7280
  cmps(c,0,(int32_t)c->r[3],0); // 800F7284
  if (crb(c,2)) { goto L_800F7294; } // 800F7288
  c->r[3]=0u+0x00000000u; // 800F728C
  goto L_800F72F8; // 800F7290
L_800F7294:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F7294
  c->r[3]=0u+0x000001BBu; // 800F7298
  c->r[5]=0u+0x00000000u; // 800F729C
  c->r[4]=c->r[4]+0x0000010Cu; // 800F72A0
  c->lr=0x800F72A8u; f_8024EE50(c); // 800F72A4
  cmps(c,0,(int32_t)c->r[3],0); // 800F72A8
  if (crb(c,2)) { goto L_800F72B8; } // 800F72AC
  c->r[3]=0u+0x00000000u; // 800F72B0
  goto L_800F72F8; // 800F72B4
L_800F72B8:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800F72B8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800F72BC
  if (crb(c,2)) { goto L_800F72E8; } // 800F72C0
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800F72C4
  c->r[3]=0u+0x0000001Fu; // 800F72C8
  c->r[5]=0u+0x00000000u; // 800F72CC
  c->r[4]=c->r[4]+0x0000010Cu; // 800F72D0
  c->lr=0x800F72D8u; f_8024EE50(c); // 800F72D4
  cmps(c,0,(int32_t)c->r[3],0); // 800F72D8
  if (crb(c,2)) { goto L_800F72E8; } // 800F72DC
  c->r[3]=0u+0x00000000u; // 800F72E0
  goto L_800F72F8; // 800F72E4
L_800F72E8:;
  c->r[3]=c->r[31]+0x00000210u; // 800F72E8
  c->r[4]=0u+0x000000E1u; // 800F72EC
  c->lr=0x800F72F4u; f_80221630(c); // 800F72F0
  c->r[3]=0u+0x00000000u; // 800F72F4
L_800F72F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F72F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F72FC
  c->lr=c->r[0]; // 800F7300
  c->r[1]=c->r[1]+0x00000010u; // 800F7304
  return; // 800F7308
}

// fn_800F730C
void f_800F730C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F730C
  c->r[0]=c->lr; // 800F7310
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7314
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7318
  c->r[31]=0u+0x805D0000u; // 800F731C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F7320
  c->r[30]=c->r[3]|c->r[3]; // 800F7324
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F7328
  c->lr=0x800F7330u; f_80045264(c); // 800F732C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800F7330
  cmpu(c,0,c->r[0],0x0000004Bu); // 800F7334
  if (!crb(c,2)) { goto L_800F7374; } // 800F7338
  c->r[3]=c->r[31]+0x00003F6Cu; // 800F733C
  c->lr=0x800F7344u; f_80037AF0(c); // 800F7340
  cmpu(c,0,c->r[3],c->r[30]); // 800F7344
  if (!crb(c,2)) { goto L_800F7374; } // 800F7348
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800F734C
  cmps(c,0,(int32_t)c->r[0],101); // 800F7350
  if (crb(c,2)) { goto L_800F7374; } // 800F7354
  {uint32_t ea=c->r[2]+0xFFFFAA40u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F7358
  c->r[3]=c->r[30]|c->r[30]; // 800F735C
  c->r[4]=0u+0x00000065u; // 800F7360
  c->r[5]=0u+0x00000000u; // 800F7364
  c->r[6]=0u+0x00000000u; // 800F7368
  c->r[7]=0u+0x00000000u; // 800F736C
  c->lr=0x800F7374u; f_801F4D44(c); // 800F7370
L_800F7374:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7374
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7378
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F737C
  c->lr=c->r[0]; // 800F7380
  c->r[1]=c->r[1]+0x00000010u; // 800F7384
  return; // 800F7388
}

// fn_800F738C
void f_800F738C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F738C
  c->r[0]=c->lr; // 800F7390
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F7394
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F7398
  c->r[31]=0u+0x803D0000u; // 800F739C
  c->r[31]=c->r[31]+0x00005580u; // 800F73A0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F73A4
  c->r[30]=c->r[3]|c->r[3]; // 800F73A8
  c->lr=0x800F73B0u; f_801F4F28(c); // 800F73AC
  c->r[3]=R32(c->r[30]+0x000003C0u); // 800F73B0
  cmps(c,0,(int32_t)c->r[3],102); // 800F73B4
  if (crb(c,2)) { goto L_800F7444; } // 800F73B8
  if (!crb(c,0)) { goto L_800F73D0; } // 800F73BC
  cmps(c,0,(int32_t)c->r[3],100); // 800F73C0
  if (crb(c,2)) { goto L_800F73DC; } // 800F73C4
  if (!crb(c,0)) { goto L_800F7414; } // 800F73C8
  goto L_800F74A0; // 800F73CC
L_800F73D0:;
  cmps(c,0,(int32_t)c->r[3],104); // 800F73D0
  if (!crb(c,0)) { goto L_800F74A0; } // 800F73D4
  goto L_800F7474; // 800F73D8
L_800F73DC:;
  c->r[0]=0u+0x00000001u; // 800F73DC
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800F73E0
  c->r[5]=c->r[31]+0x00000000u; // 800F73E4
  c->r[3]=c->r[30]|c->r[30]; // 800F73E8
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800F73EC
  c->r[4]=c->r[1]+0x0000002Cu; // 800F73F0
  c->r[7]=R32(c->r[31]+0x00000000u); // 800F73F4
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F73F8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F73FC
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800F7400
  W32(c->r[1]+0x00000030u,c->r[6]); // 800F7404
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F7408
  c->lr=0x800F7410u; f_800F74B8(c); // 800F740C
  goto L_800F74A0; // 800F7410
L_800F7414:;
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800F7414
  c->r[5]=c->r[31]+0x0000000Cu; // 800F7418
  c->r[3]=c->r[30]|c->r[30]; // 800F741C
  c->r[4]=c->r[1]+0x00000020u; // 800F7420
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800F7424
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F7428
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F742C
  W32(c->r[1]+0x00000020u,c->r[7]); // 800F7430
  W32(c->r[1]+0x00000024u,c->r[6]); // 800F7434
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F7438
  c->lr=0x800F7440u; f_800F74B8(c); // 800F743C
  goto L_800F74A0; // 800F7440
L_800F7444:;
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800F7444
  c->r[5]=c->r[31]+0x00000018u; // 800F7448
  c->r[3]=c->r[30]|c->r[30]; // 800F744C
  c->r[4]=c->r[1]+0x00000014u; // 800F7450
  c->r[7]=R32(c->r[31]+0x00000018u); // 800F7454
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F7458
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F745C
  W32(c->r[1]+0x00000014u,c->r[7]); // 800F7460
  W32(c->r[1]+0x00000018u,c->r[6]); // 800F7464
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F7468
  c->lr=0x800F7470u; f_800F74B8(c); // 800F746C
  goto L_800F74A0; // 800F7470
L_800F7474:;
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800F7474
  c->r[5]=c->r[31]+0x00000024u; // 800F7478
  c->r[3]=c->r[30]|c->r[30]; // 800F747C
  c->r[4]=c->r[1]+0x00000008u; // 800F7480
  c->r[7]=R32(c->r[31]+0x00000024u); // 800F7484
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F7488
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F748C
  W32(c->r[1]+0x00000008u,c->r[7]); // 800F7490
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F7494
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F7498
  c->lr=0x800F74A0u; f_800F74B8(c); // 800F749C
L_800F74A0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F74A0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F74A4
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F74A8
  c->lr=c->r[0]; // 800F74AC
  c->r[1]=c->r[1]+0x00000040u; // 800F74B0
  return; // 800F74B4
}

// fn_800F74B8
void f_800F74B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F74B8
  c->r[0]=c->lr; // 800F74BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F74C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F74C4
  c->r[31]=c->r[4]|c->r[4]; // 800F74C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F74CC
  c->r[30]=c->r[3]|c->r[3]; // 800F74D0
  c->r[3]=c->r[31]|c->r[31]; // 800F74D4
  c->lr=0x800F74DCu; f_802B9FDC(c); // 800F74D8
  cmps(c,0,(int32_t)c->r[3],0); // 800F74DC
  if (crb(c,2)) { goto L_800F74FC; } // 800F74E0
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F74E4
  c->r[0]=R32(c->r[31]+0x00000004u); // 800F74E8
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800F74EC
  W32(c->r[30]+0x00000020u,c->r[0]); // 800F74F0
  c->r[0]=R32(c->r[31]+0x00000008u); // 800F74F4
  W32(c->r[30]+0x00000024u,c->r[0]); // 800F74F8
L_800F74FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F74FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7500
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F7504
  c->lr=c->r[0]; // 800F7508
  c->r[1]=c->r[1]+0x00000010u; // 800F750C
  return; // 800F7510
}

// fn_800F7514
void f_800F7514(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7514
  c->r[0]=c->lr; // 800F7518
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F751C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F7520
  c->r[31]=c->r[3]|c->r[3]; // 800F7524
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F7528
  c->r[0]=R32(c->r[3]+0x00000438u); // 800F752C
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F7530
  cmps(c,0,(int32_t)c->r[0],0); // 800F7534
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800F7538
  {uint32_t ea=c->r[4]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F753C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800F7540
  {uint32_t ea=c->r[4]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F7544
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800F7548
  if (!crb(c,2)) { goto L_800F7564; } // 800F754C
  c->r[0]=0u+0x00000001u; // 800F7550
  W32(c->r[3]+0x00000444u,c->r[0]); // 800F7554
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 800F7558
  c->lr=0x800F7560u; f_8024E174(c); // 800F755C
  W32(c->r[31]+0x00000438u,c->r[3]); // 800F7560
L_800F7564:;
  c->r[0]=R32(c->r[31]+0x00000438u); // 800F7564
  cmps(c,0,(int32_t)c->r[0],0); // 800F7568
  if (crb(c,2)) { goto L_800F7614; } // 800F756C
  c->r[7]=0u+0x803A0000u; // 800F7570
  {uint32_t ea=c->r[7]+0xFFFFEFFCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800F7574
  c->r[3]=c->r[31]+0x00000044u; // 800F7578
  c->r[4]=c->r[1]+0x00000020u; // 800F757C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F7580
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F7584
  W32(c->r[1]+0x00000020u,c->r[6]); // 800F7588
  W32(c->r[1]+0x00000024u,c->r[5]); // 800F758C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F7590
  c->lr=0x800F7598u; f_800361A0(c); // 800F7594
  {uint32_t ea=c->r[2]+0xFFFFAA48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F7598
  c->r[4]=c->r[31]+0x0000002Cu; // 800F759C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F75A0
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800F75A4
  c->r[3]=c->r[3]+0x0000005Cu; // 800F75A8
  c->lr=0x800F75B0u; f_800361A0(c); // 800F75AC
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F75B0
  c->r[3]=0u+0x805D0000u; // 800F75B4
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F75B8
  c->r[3]=c->r[3]+0x00003F6Cu; // 800F75BC
  c->r[4]=c->r[31]|c->r[31]; // 800F75C0
  c->r[7]=c->r[1]+0x00000014u; // 800F75C4
  {uint32_t ea=c->r[5]+0x0000006Cu; WF32(ea,c->f[0]);} // 800F75C8
  c->r[6]=0u+0x0000003Du; // 800F75CC
  c->r[8]=0u+0x00000000u; // 800F75D0
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800F75D4
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F75D8
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F75DC
  W32(c->r[1]+0x00000014u,c->r[5]); // 800F75E0
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F75E4
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F75E8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F75EC
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F75F0
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F75F4
  c->lr=0x800F75FCu; f_801FA6A4(c); // 800F75F8
  c->r[6]=0u+0x803A0000u; // 800F75FC
  c->r[3]=R32(c->r[31]+0x00000438u); // 800F7600
  c->r[5]=c->r[31]+0x00000044u; // 800F7604
  c->r[4]=0u+0x00000000u; // 800F7608
  c->r[6]=c->r[6]+0xFFFFEFF0u; // 800F760C
  c->lr=0x800F7614u; f_801FBEC0(c); // 800F7610
L_800F7614:;
  c->r[3]=c->r[31]|c->r[31]; // 800F7614
  c->r[4]=0u+0x00000000u; // 800F7618
  c->lr=0x800F7620u; f_801F7C00(c); // 800F761C
  c->r[7]=0u+0x803D0000u; // 800F7620
  {uint32_t ea=c->r[7]+0x000055B0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F7624
  c->r[3]=c->r[31]|c->r[31]; // 800F7628
  c->r[4]=c->r[1]+0x00000008u; // 800F762C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F7630
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F7634
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F7638
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F763C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F7640
  c->lr=0x800F7648u; f_800F74B8(c); // 800F7644
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F7648
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F764C
  c->lr=c->r[0]; // 800F7650
  c->r[1]=c->r[1]+0x00000040u; // 800F7654
  return; // 800F7658
}

// fn_800F765C
void f_800F765C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F765C
  c->r[0]=c->lr; // 800F7660
  c->r[4]=0u+0x00000000u; // 800F7664
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F7668
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F766C
  c->r[31]=c->r[3]|c->r[3]; // 800F7670
  c->r[3]=R32(c->r[3]+0x00000438u); // 800F7674
  c->lr=0x800F767Cu; f_801FAF00(c); // 800F7678
  cmps(c,0,(int32_t)c->r[3],0); // 800F767C
  if (!crb(c,2)) { goto L_800F7734; } // 800F7680
  c->r[3]=c->r[31]|c->r[31]; // 800F7684
  c->r[4]=0u+0x0000004Bu; // 800F7688
  c->lr=0x800F7690u; f_801F5AB4(c); // 800F768C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F7690
  c->r[5]=0u+0x00000000u; // 800F7694
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F7698
  c->r[3]=c->r[31]+0x0000002Cu; // 800F769C
  c->r[0]=c->r[0]|0x00000004u; // 800F76A0
  W16(c->r[31]+0x000003BCu,c->r[5]); // 800F76A4
  c->r[4]=c->r[4]+0x0000005Cu; // 800F76A8
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F76AC
  c->lr=0x800F76B4u; f_800361A0(c); // 800F76B0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F76B4
  c->r[3]=c->r[31]+0x00000060u; // 800F76B8
  c->r[4]=c->r[4]+0x00000068u; // 800F76BC
  c->lr=0x800F76C4u; f_800361A0(c); // 800F76C0
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800F76C4
  c->r[3]=0u+0x805D0000u; // 800F76C8
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F76CC
  c->r[3]=c->r[3]+0x00006CF8u; // 800F76D0
  c->r[4]=c->r[1]+0x00000008u; // 800F76D4
  c->r[5]=0u+0x00040000u; // 800F76D8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F76DC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F76E0
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F76E4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F76E8
  c->lr=0x800F76F0u; f_802236F8(c); // 800F76EC
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800F76F0
  c->r[3]=c->r[31]|c->r[31]; // 800F76F4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F76F8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F76FC
  c->ctr=c->r[12]; // 800F7700
  if (true) { c->lr=0x800F7708u; dispatch(c,c->ctr); } // 800F7704
  {uint32_t ea=c->r[2]+0xFFFFAA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F7708
  c->r[3]=c->r[31]|c->r[31]; // 800F770C
  c->r[4]=c->r[31]+0x00000080u; // 800F7710
  c->r[5]=c->r[31]+0x00000082u; // 800F7714
  c->r[6]=c->r[31]+0x00000084u; // 800F7718
  c->r[7]=c->r[31]+0x00000086u; // 800F771C
  c->lr=0x800F7724u; f_801F5EE4(c); // 800F7720
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F7724
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F7728
  c->lr=0x800F7730u; f_8025037C(c); // 800F772C
  goto L_800F7754; // 800F7730
L_800F7734:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F7734
  c->r[3]=c->r[31]+0x0000002Cu; // 800F7738
  c->r[4]=c->r[4]+0x0000005Cu; // 800F773C
  c->lr=0x800F7744u; f_800361A0(c); // 800F7740
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F7744
  c->r[3]=c->r[31]+0x00000060u; // 800F7748
  c->r[4]=c->r[4]+0x00000068u; // 800F774C
  c->lr=0x800F7754u; f_800361A0(c); // 800F7750
L_800F7754:;
  c->r[3]=c->r[31]|c->r[31]; // 800F7754
  c->r[4]=0u+0x00000000u; // 800F7758
  c->lr=0x800F7760u; f_801F7C00(c); // 800F775C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F7760
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F7764
  c->lr=c->r[0]; // 800F7768
  c->r[1]=c->r[1]+0x00000020u; // 800F776C
  return; // 800F7770
}

// fn_800F7774
void f_800F7774(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7774
  c->r[0]=c->lr; // 800F7778
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F777C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F7780
  c->r[31]=c->r[3]|c->r[3]; // 800F7784
  c->lr=0x800F778Cu; f_801F5B14(c); // 800F7788
  c->r[3]=c->r[31]|c->r[31]; // 800F778C
  c->r[4]=c->r[31]+0x00000080u; // 800F7790
  c->r[5]=c->r[31]+0x00000082u; // 800F7794
  c->r[6]=c->r[31]+0x00000084u; // 800F7798
  c->r[7]=c->r[31]+0x00000086u; // 800F779C
  c->lr=0x800F77A4u; f_801F60D0(c); // 800F77A0
  c->r[7]=0u+0x803D0000u; // 800F77A4
  {uint32_t ea=c->r[7]+0x000055BCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800F77A8
  c->r[3]=c->r[31]|c->r[31]; // 800F77AC
  c->r[4]=c->r[1]+0x00000008u; // 800F77B0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F77B4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F77B8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F77BC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F77C0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F77C4
  c->lr=0x800F77CCu; f_800F74B8(c); // 800F77C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F77CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F77D0
  c->lr=c->r[0]; // 800F77D4
  c->r[1]=c->r[1]+0x00000020u; // 800F77D8
  return; // 800F77DC
}

// fn_800F77E0
void f_800F77E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F77E0
  c->r[0]=c->lr; // 800F77E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F77E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F77EC
  c->r[31]=c->r[3]|c->r[3]; // 800F77F0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F77F4
  c->lr=0x800F77FCu; f_801F5418(c); // 800F77F8
  cmps(c,0,(int32_t)c->r[3],0); // 800F77FC
  if (!crb(c,0)) { goto L_800F7830; } // 800F7800
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F7804
  c->r[3]=c->r[31]|c->r[31]; // 800F7808
  {uint32_t ea=c->r[2]+0xFFFFAA40u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F780C
  c->r[4]=0u+0x00000064u; // 800F7810
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800F7814
  c->r[5]=0u+0x00000000u; // 800F7818
  c->r[0]=c->r[0]|0x00000080u; // 800F781C
  c->r[6]=0u+0x00000000u; // 800F7820
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F7824
  c->r[7]=0u+0x00000000u; // 800F7828
  c->lr=0x800F7830u; f_801F4D44(c); // 800F782C
L_800F7830:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7830
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7834
  c->lr=c->r[0]; // 800F7838
  c->r[1]=c->r[1]+0x00000010u; // 800F783C
  return; // 800F7840
}

// fn_800F7844
void f_800F7844(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7844
  c->r[0]=c->lr; // 800F7848
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F784C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7850
  c->r[31]=c->r[3]|c->r[3]; // 800F7854
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F7858
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F785C
  c->lr=0x800F7864u; f_802501B0(c); // 800F7860
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F7864
  c->r[6]=0u+0x00000000u; // 800F7868
  c->r[0]=0u+0x00000001u; // 800F786C
  c->r[3]=c->r[31]+0x0000002Cu; // 800F7870
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800F7874
  c->r[4]=c->r[31]+0x000003CCu; // 800F7878
  c->r[5]=R32(c->r[31]+0x00000394u); // 800F787C
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800F7880
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800F7884
  c->lr=0x800F788Cu; f_800361A0(c); // 800F7888
  c->r[3]=c->r[31]+0x00000060u; // 800F788C
  c->r[4]=c->r[31]+0x000003D8u; // 800F7890
  c->lr=0x800F7898u; f_800361A0(c); // 800F7894
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F7898
  c->r[3]=c->r[31]|c->r[31]; // 800F789C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800F78A0
  c->ctr=c->r[12]; // 800F78A4
  if (true) { c->lr=0x800F78ACu; dispatch(c,c->ctr); } // 800F78A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F78AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F78B0
  c->lr=c->r[0]; // 800F78B4
  c->r[1]=c->r[1]+0x00000010u; // 800F78B8
  return; // 800F78BC
}

// fn_800F78C0
void f_800F78C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F78C0
  c->r[0]=c->lr; // 800F78C4
  c->r[4]=0u+0x803A0000u; // 800F78C8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F78CC
  c->r[4]=c->r[4]+0xFFFFF008u; // 800F78D0
  c->r[4]=c->r[4]+0x0000000Du; // 800F78D4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F78D8
  c->r[31]=c->r[3]|c->r[3]; // 800F78DC
  W32(c->r[1]+0x00000048u,c->r[30]); // 800F78E0
  c->r[5]=R32(c->r[3]+0x00000394u); // 800F78E4
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800F78E8
  c->lr=0x800F78F0u; f_80256EC4(c); // 800F78EC
  c->r[30]=c->r[3]|c->r[3]; // 800F78F0
  c->r[3]=0u+0x00000002u; // 800F78F4
  c->lr=0x800F78FCu; f_80269AD0(c); // 800F78F8
  {uint32_t ea=c->r[2]+0xFFFFAA40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F78FC
  c->r[4]=c->r[30]|c->r[30]; // 800F7900
  {uint32_t ea=c->r[2]+0xFFFFAA4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F7904
  c->r[5]=c->r[1]+0x0000002Cu; // 800F7908
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800F790C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 800F7910
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800F7914
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800F7918
  c->r[6]=R32(c->r[1]+0x00000038u); // 800F791C
  c->r[0]=R32(c->r[1]+0x00000040u); // 800F7920
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800F7924
  W32(c->r[1]+0x00000030u,c->r[3]); // 800F7928
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F792C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F7930
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F7934
  c->lr=0x800F793Cu; f_8025E9C0(c); // 800F7938
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F793C
  c->r[4]=0u+0x00000000u; // 800F7940
  c->r[0]=0u+0x00000001u; // 800F7944
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 800F7948
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F794C
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800F7950
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800F7954
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800F7958
  if (crb(c,2)) { goto L_800F7968; } // 800F795C
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800F7960
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 800F7964
L_800F7968:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F7968
  c->r[3]=c->r[31]|c->r[31]; // 800F796C
  {uint32_t ea=c->r[2]+0xFFFFAA40u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F7970
  c->r[5]=0u+0x00000000u; // 800F7974
  c->r[12]=R32(c->r[12]+0x00000064u); // 800F7978
  c->r[6]=0u+0x00000001u; // 800F797C
  c->f[2]=c->f[1]; // 800F7980
  c->r[4]=R32(c->r[31]+0x00000398u); // 800F7984
  c->ctr=c->r[12]; // 800F7988
  if (true) { c->lr=0x800F7990u; dispatch(c,c->ctr); } // 800F798C
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F7990
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F7994
  c->lr=0x800F799Cu; f_802501B0(c); // 800F7998
  c->r[4]=0u+0x803A0000u; // 800F799C
  c->r[30]=0u+0x80550000u; // 800F79A0
  c->r[4]=c->r[4]+0xFFFFF008u; // 800F79A4
  c->r[5]=0u+0x00000000u; // 800F79A8
  c->r[3]=c->r[30]+0xFFFFC848u; // 800F79AC
  c->r[6]=0u+0x00000000u; // 800F79B0
  c->r[4]=c->r[4]+0x00000016u; // 800F79B4
  c->lr=0x800F79BCu; f_8018D3E4(c); // 800F79B8
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800F79BC
  cmpu(c,0,c->r[4],0x000000FFu); // 800F79C0
  if (crb(c,2)) { goto L_800F7A08; } // 800F79C4
  c->r[7]=R32(c->r[31]+0x00000060u); // 800F79C8
  c->r[3]=c->r[30]+0xFFFFC848u; // 800F79CC
  c->r[0]=R32(c->r[31]+0x00000064u); // 800F79D0
  c->r[5]=c->r[1]+0x00000020u; // 800F79D4
  c->r[6]=c->r[1]+0x00000014u; // 800F79D8
  W32(c->r[1]+0x00000014u,c->r[7]); // 800F79DC
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F79E0
  c->r[0]=R32(c->r[31]+0x00000068u); // 800F79E4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F79E8
  c->r[7]=R32(c->r[31]+0x0000002Cu); // 800F79EC
  c->r[0]=R32(c->r[31]+0x00000030u); // 800F79F0
  W32(c->r[1]+0x00000020u,c->r[7]); // 800F79F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F79F8
  c->r[0]=R32(c->r[31]+0x00000034u); // 800F79FC
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F7A00
  c->lr=0x800F7A08u; f_8018DBD0(c); // 800F7A04
L_800F7A08:;
  c->r[3]=c->r[31]|c->r[31]; // 800F7A08
  c->r[4]=0u+0x00000002u; // 800F7A0C
  c->r[5]=0u+0x0000001Eu; // 800F7A10
  c->r[6]=0u+0x00000001u; // 800F7A14
  c->r[7]=0u+0x00000001u; // 800F7A18
  c->lr=0x800F7A20u; f_8017900C(c); // 800F7A1C
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800F7A20
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800F7A24
  if (crb(c,2)) { goto L_800F7A7C; } // 800F7A28
  c->r[4]=R8(c->r[31]+0x00000075u); // 800F7A2C
  cmpu(c,0,c->r[4],0x000000FFu); // 800F7A30
  if (crb(c,2)) { goto L_800F7A4C; } // 800F7A34
  c->r[3]=0u+0x80550000u; // 800F7A38
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F7A3C
  c->lr=0x800F7A44u; f_8018D694(c); // 800F7A40
  c->r[0]=0u+0x000000FFu; // 800F7A44
  W8(c->r[31]+0x00000075u,c->r[0]); // 800F7A48
L_800F7A4C:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F7A4C
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800F7A50
  if (crb(c,2)) { goto L_800F7A7C; } // 800F7A54
  c->r[3]=c->r[31]|c->r[31]; // 800F7A58
  c->r[4]=0u+0x00000002u; // 800F7A5C
  c->r[5]=0u+0x0000004Cu; // 800F7A60
  c->r[6]=0u+0x00000001u; // 800F7A64
  c->r[7]=0u+0x00000001u; // 800F7A68
  c->lr=0x800F7A70u; f_8017900C(c); // 800F7A6C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800F7A70
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800F7A74
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800F7A78
L_800F7A7C:;
  c->r[7]=0u+0x803D0000u; // 800F7A7C
  {uint32_t ea=c->r[7]+0x000055C8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F7A80
  c->r[3]=c->r[31]|c->r[31]; // 800F7A84
  c->r[4]=c->r[1]+0x00000008u; // 800F7A88
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F7A8C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F7A90
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F7A94
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F7A98
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F7A9C
  c->lr=0x800F7AA4u; f_800F74B8(c); // 800F7AA0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F7AA4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F7AA8
  c->r[30]=R32(c->r[1]+0x00000048u); // 800F7AAC
  c->lr=c->r[0]; // 800F7AB0
  c->r[1]=c->r[1]+0x00000050u; // 800F7AB4
  return; // 800F7AB8
}

// fn_800F7ABC
void f_800F7ABC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7ABC
  c->r[0]=c->lr; // 800F7AC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F7AC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F7AC8
  c->r[31]=c->r[3]|c->r[3]; // 800F7ACC
  c->r[4]=R32(c->r[3]+0x00000398u); // 800F7AD0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F7AD4
  c->lr=0x800F7ADCu; f_802501B0(c); // 800F7AD8
  cmps(c,0,(int32_t)c->r[3],0); // 800F7ADC
  if (crb(c,2)) { goto L_800F7B28; } // 800F7AE0
  c->r[5]=R32(c->r[31]+0x00000398u); // 800F7AE4
  c->r[7]=0u+0x803D0000u; // 800F7AE8
  {uint32_t ea=c->r[2]+0xFFFFAA50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F7AEC
  c->r[3]=c->r[31]|c->r[31]; // 800F7AF0
  c->r[0]=R32(c->r[5]+0x00000058u); // 800F7AF4
  c->r[4]=c->r[1]+0x00000008u; // 800F7AF8
  c->r[0]=c->r[0]|0x00010000u; // 800F7AFC
  W32(c->r[5]+0x00000058u,c->r[0]); // 800F7B00
  c->r[5]=R32(c->r[31]+0x00000398u); // 800F7B04
  {uint32_t ea=c->r[5]+0x000000FCu; WF32(ea,c->f[0]);} // 800F7B08
  {uint32_t ea=c->r[7]+0x000055D4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F7B0C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F7B10
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F7B14
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F7B18
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F7B1C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F7B20
  c->lr=0x800F7B28u; f_800F74B8(c); // 800F7B24
L_800F7B28:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F7B28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F7B2C
  c->lr=c->r[0]; // 800F7B30
  c->r[1]=c->r[1]+0x00000020u; // 800F7B34
  return; // 800F7B38
}

// fn_800F7B3C
void f_800F7B3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7B3C
  c->r[0]=c->lr; // 800F7B40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7B44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7B48
  c->r[31]=c->r[3]|c->r[3]; // 800F7B4C
  c->r[4]=R32(c->r[3]+0x00000398u); // 800F7B50
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800F7B54
  c->lr=0x800F7B5Cu; f_802501B0(c); // 800F7B58
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F7B5C
  {uint32_t ea=c->r[2]+0xFFFFAA54u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F7B60
  {uint32_t ea=c->r[3]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F7B64
  {uint32_t ea=c->r[2]+0xFFFFAA40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F7B68
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800F7B6C
  {uint32_t ea=c->r[3]+0x000000FCu; WF32(ea,c->f[1]);} // 800F7B70
  c->r[3]=R32(c->r[31]+0x00000398u); // 800F7B74
  {uint32_t ea=c->r[3]+0x000000FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F7B78
  fcmp(c,0,c->f[1],c->f[0]); // 800F7B7C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800F7B80
  if (!crb(c,2)) { goto L_800F7BBC; } // 800F7B84
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F7B88
  c->r[3]=c->r[31]|c->r[31]; // 800F7B8C
  c->r[12]=R32(c->r[12]+0x00000018u); // 800F7B90
  c->ctr=c->r[12]; // 800F7B94
  if (true) { c->lr=0x800F7B9Cu; dispatch(c,c->ctr); } // 800F7B98
  cmps(c,0,(int32_t)c->r[31],0); // 800F7B9C
  if (crb(c,2)) { goto L_800F7BBC; } // 800F7BA0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F7BA4
  c->r[3]=c->r[31]|c->r[31]; // 800F7BA8
  c->r[4]=0u+0x00000001u; // 800F7BAC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800F7BB0
  c->ctr=c->r[12]; // 800F7BB4
  if (true) { c->lr=0x800F7BBCu; dispatch(c,c->ctr); } // 800F7BB8
L_800F7BBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7BBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7BC0
  c->lr=c->r[0]; // 800F7BC4
  c->r[1]=c->r[1]+0x00000010u; // 800F7BC8
  return; // 800F7BCC
}

// fn_800F7BD0
void f_800F7BD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7BD0
  c->r[0]=c->lr; // 800F7BD4
  cmps(c,0,(int32_t)c->r[3],0); // 800F7BD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7BDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7BE0
  c->r[31]=c->r[4]|c->r[4]; // 800F7BE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F7BE8
  c->r[30]=c->r[3]|c->r[3]; // 800F7BEC
  if (crb(c,2)) { goto L_800F7C0C; } // 800F7BF0
  c->r[4]=0u+0x00000000u; // 800F7BF4
  c->lr=0x800F7BFCu; f_8026A06C(c); // 800F7BF8
  cmps(c,0,(int32_t)c->r[31],0); // 800F7BFC
  if (!crb(c,1)) { goto L_800F7C0C; } // 800F7C00
  c->r[3]=c->r[30]|c->r[30]; // 800F7C04
  c->lr=0x800F7C0Cu; f_8026A268(c); // 800F7C08
L_800F7C0C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F7C0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7C10
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F7C14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7C18
  c->lr=c->r[0]; // 800F7C1C
  c->r[1]=c->r[1]+0x00000010u; // 800F7C20
  return; // 800F7C24
}

// fn_800F7C28
void f_800F7C28(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800F7C28
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F7C2C
  f_802501B0(c); return; // 800F7C30
}

// fn_800F7C34
void f_800F7C34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7C34
  c->r[0]=c->lr; // 800F7C38
  c->r[7]=0u+0x803D0000u; // 800F7C3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F7C40
  c->r[0]=0u+0x00000000u; // 800F7C44
  c->r[4]=c->r[1]+0x00000008u; // 800F7C48
  W16(c->r[3]+0x000003BCu,c->r[0]); // 800F7C4C
  {uint32_t ea=c->r[7]+0x000055E0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F7C50
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F7C54
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F7C58
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F7C5C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F7C60
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F7C64
  c->lr=0x800F7C6Cu; f_800F74B8(c); // 800F7C68
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F7C6C
  c->lr=c->r[0]; // 800F7C70
  c->r[1]=c->r[1]+0x00000020u; // 800F7C74
  return; // 800F7C78
}

// fn_800F7C7C
void f_800F7C7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7C7C
  c->r[0]=c->lr; // 800F7C80
  W32(c->r[1]+0x00000084u,c->r[0]); // 800F7C84
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800F7C88
  W32(c->r[1]+0x00000078u,c->r[30]); // 800F7C8C
  c->r[30]=c->r[3]|c->r[3]; // 800F7C90
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F7C94
  cmps(c,0,(int32_t)c->r[4],0); // 800F7C98
  if (crb(c,2)) { goto L_800F7D50; } // 800F7C9C
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800F7CA0
  cmps(c,0,(int32_t)c->r[0],0); // 800F7CA4
  if (!crb(c,2)) { goto L_800F7D50; } // 800F7CA8
  c->r[4]=R16(c->r[3]+0x000003BEu); // 800F7CAC
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 800F7CB0
  if (crb(c,2)) { goto L_800F7D50; } // 800F7CB4
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800F7CB8
  cmps(c,0,(int32_t)c->r[0],0); // 800F7CBC
  if (crb(c,2)) { goto L_800F7D50; } // 800F7CC0
  c->r[0]=rotl(c->r[4],0)&0x00000180u; // 800F7CC4
  cmps(c,0,(int32_t)c->r[0],128); // 800F7CC8
  if (!crb(c,2)) { goto L_800F7CF4; } // 800F7CCC
  c->r[3]=0u+0x80620000u; // 800F7CD0
  c->r[3]=c->r[3]+0x00007688u; // 800F7CD4
  c->r[3]=R32(c->r[3]+0x00000014u); // 800F7CD8
  cmps(c,0,(int32_t)c->r[3],0); // 800F7CDC
  if (crb(c,2)) { goto L_800F7CF4; } // 800F7CE0
  c->r[4]=0u+0x00000002u; // 800F7CE4
  c->lr=0x800F7CECu; f_80037670(c); // 800F7CE8
  cmps(c,0,(int32_t)c->r[3],0); // 800F7CEC
  if (!crb(c,2)) { goto L_800F7D50; } // 800F7CF0
L_800F7CF4:;
  c->r[3]=c->r[1]+0x00000008u; // 800F7CF4
  c->r[4]=c->r[30]+0x0000002Cu; // 800F7CF8
  c->lr=0x800F7D00u; f_800361A0(c); // 800F7CFC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F7D00
  c->r[31]=0u+0x80550000u; // 800F7D04
  {uint32_t ea=c->r[2]+0xFFFFAA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F7D08
  c->r[31]=c->r[31]+0x00003D60u; // 800F7D0C
  {uint32_t ea=c->r[2]+0xFFFFAA5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F7D10
  c->r[5]=c->r[30]|c->r[30]; // 800F7D14
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800F7D18
  {uint32_t ea=c->r[2]+0xFFFFAA44u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F7D1C
  c->r[3]=c->r[31]+0x00000010u; // 800F7D20
  c->r[6]=c->r[1]+0x00000008u; // 800F7D24
  c->r[7]=c->r[1]+0x00000018u; // 800F7D28
  c->r[4]=0u+0x000001FFu; // 800F7D2C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800F7D30
  c->lr=0x800F7D38u; f_80226BE8(c); // 800F7D34
  c->r[3]=c->r[31]+0x00000010u; // 800F7D38
  c->r[4]=c->r[1]+0x00000018u; // 800F7D3C
  c->lr=0x800F7D44u; f_80226CE8(c); // 800F7D40
  c->r[3]=c->r[31]+0x00000010u; // 800F7D44
  c->r[4]=c->r[1]+0x00000018u; // 800F7D48
  c->lr=0x800F7D50u; f_80226D68(c); // 800F7D4C
L_800F7D50:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800F7D50
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800F7D54
  c->r[30]=R32(c->r[1]+0x00000078u); // 800F7D58
  c->lr=c->r[0]; // 800F7D5C
  c->r[1]=c->r[1]+0x00000080u; // 800F7D60
  return; // 800F7D64
}

// fn_800F7D68
void f_800F7D68(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800F7D68
  W8(c->r[3]+0x00000074u,c->r[0]); // 800F7D6C
  return; // 800F7D70
}

// fn_800F7D74
void f_800F7D74(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800F7D74
  W8(c->r[3]+0x00000074u,c->r[0]); // 800F7D78
  return; // 800F7D7C
}

// fn_800F7D80
void f_800F7D80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7D80
  c->r[0]=c->lr; // 800F7D84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7D88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7D8C
  c->r[31]=c->r[3]|c->r[3]; // 800F7D90
  c->r[3]=c->r[3]+0x00000210u; // 800F7D94
  c->lr=0x800F7D9Cu; f_8004BAD4(c); // 800F7D98
  cmps(c,0,(int32_t)c->r[3],0); // 800F7D9C
  if (crb(c,2)) { goto L_800F7E10; } // 800F7DA0
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F7DA4
  c->r[4]=c->r[31]|c->r[31]; // 800F7DA8
  c->r[3]=c->r[31]+0x00000210u; // 800F7DAC
  c->r[0]=c->r[0]|0xAA000000u; // 800F7DB0
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F7DB4
  c->lr=0x800F7DBCu; f_80043E44(c); // 800F7DB8
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F7DBC
  c->r[3]=c->r[31]+0x00000210u; // 800F7DC0
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F7DC4
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F7DC8
  c->lr=0x800F7DD0u; f_80043E34(c); // 800F7DCC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F7DD0
  c->r[4]=0u+0x803A0000u; // 800F7DD4
  c->r[4]=c->r[4]+0xFFFFF008u; // 800F7DD8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F7DDC
  c->r[4]=c->r[4]+0x0000000Du; // 800F7DE0
  c->lr=0x800F7DE8u; f_80256EC4(c); // 800F7DE4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800F7DE8
  c->r[5]=c->r[3]|c->r[3]; // 800F7DEC
  c->r[3]=c->r[31]+0x00000210u; // 800F7DF0
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800F7DF4
  c->lr=0x800F7DFCu; f_8004BAC8(c); // 800F7DF8
  {uint32_t ea=c->r[2]+0xFFFFAA60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F7DFC
  c->r[3]=c->r[31]+0x00000210u; // 800F7E00
  c->f[2]=c->f[1]; // 800F7E04
  c->f[3]=c->f[1]; // 800F7E08
  c->lr=0x800F7E10u; f_80043E24(c); // 800F7E0C
L_800F7E10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7E10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7E14
  c->lr=c->r[0]; // 800F7E18
  c->r[1]=c->r[1]+0x00000010u; // 800F7E1C
  return; // 800F7E20
}

// fn_800F7E24
void f_800F7E24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7E24
  c->r[0]=c->lr; // 800F7E28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7E2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7E30
  c->r[31]=c->r[3]|c->r[3]; // 800F7E34
  c->r[3]=c->r[3]+0x00000210u; // 800F7E38
  c->lr=0x800F7E40u; f_80221698(c); // 800F7E3C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800F7E40
  cmps(c,0,(int32_t)c->r[3],0); // 800F7E44
  if (crb(c,2)) { goto L_800F7E68; } // 800F7E48
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800F7E4C
  cmps(c,0,(int32_t)c->r[0],0); // 800F7E50
  if (crb(c,2)) { goto L_800F7E68; } // 800F7E54
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F7E58
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800F7E5C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F7E60
  goto L_800F7E74; // 800F7E64
L_800F7E68:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800F7E68
  c->r[0]=c->r[0]|0x80000000u; // 800F7E6C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800F7E70
L_800F7E74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7E74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7E78
  c->lr=c->r[0]; // 800F7E7C
  c->r[1]=c->r[1]+0x00000010u; // 800F7E80
  return; // 800F7E84
}

// fn_800F7E88
void f_800F7E88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7E88
  c->r[0]=c->lr; // 800F7E8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7E90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7E94
  c->r[31]=c->r[3]|c->r[3]; // 800F7E98
  c->r[3]=0u+0x000006F8u; // 800F7E9C
  c->lr=0x800F7EA4u; f_8024E174(c); // 800F7EA0
  cmps(c,0,(int32_t)c->r[3],0); // 800F7EA4
  W32(c->r[31]+0x000000ACu,c->r[3]); // 800F7EA8
  if (!crb(c,2)) { goto L_800F7EC4; } // 800F7EAC
  c->r[3]=0u+0x803A0000u; // 800F7EB0
  c->r[3]=c->r[3]+0xFFFFF130u; // 800F7EB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F7EB8
  c->lr=0x800F7EC0u; f_8024E3DC(c); // 800F7EBC
  goto L_800F7F30; // 800F7EC0
L_800F7EC4:;
  c->r[3]=c->r[31]|c->r[31]; // 800F7EC4
  c->r[4]=0u+0x00000000u; // 800F7EC8
  c->lr=0x800F7ED0u; f_801F57D0(c); // 800F7ECC
  c->r[3]=c->r[31]|c->r[31]; // 800F7ED0
  c->r[4]=0u+0x00000001u; // 800F7ED4
  c->lr=0x800F7EDCu; f_801F57D0(c); // 800F7ED8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800F7EDC
  c->r[3]=c->r[31]|c->r[31]; // 800F7EE0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800F7EE4
  c->ctr=c->r[12]; // 800F7EE8
  if (true) { c->lr=0x800F7EF0u; dispatch(c,c->ctr); } // 800F7EEC
  c->r[3]=c->r[31]|c->r[31]; // 800F7EF0
  c->lr=0x800F7EF8u; f_801F4B94(c); // 800F7EF4
  c->r[3]=0u+0x00000003u; // 800F7EF8
  c->r[4]=0u+0x00000069u; // 800F7EFC
  c->r[0]=0u+0x00000001u; // 800F7F00
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800F7F04
  c->r[3]=c->r[31]|c->r[31]; // 800F7F08
  W8(c->r[31]+0x0000006Du,c->r[4]); // 800F7F0C
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800F7F10
  c->lr=0x800F7F18u; f_800F7FE8(c); // 800F7F14
  c->r[3]=c->r[31]|c->r[31]; // 800F7F18
  c->lr=0x800F7F20u; f_800F83EC(c); // 800F7F1C
  c->r[3]=c->r[31]|c->r[31]; // 800F7F20
  c->lr=0x800F7F28u; f_800F9950(c); // 800F7F24
  c->r[3]=c->r[31]|c->r[31]; // 800F7F28
  c->lr=0x800F7F30u; f_801F56F4(c); // 800F7F2C
L_800F7F30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7F30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7F34
  c->lr=c->r[0]; // 800F7F38
  c->r[1]=c->r[1]+0x00000010u; // 800F7F3C
  return; // 800F7F40
}

// fn_800F7F44
void f_800F7F44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7F44
  c->r[0]=c->lr; // 800F7F48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7F4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7F50
  c->r[31]=c->r[3]|c->r[3]; // 800F7F54
  c->lr=0x800F7F5Cu; f_800F988C(c); // 800F7F58
  c->r[3]=c->r[31]|c->r[31]; // 800F7F5C
  c->lr=0x800F7F64u; f_800FA098(c); // 800F7F60
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800F7F64
  c->lr=0x800F7F6Cu; f_8024E190(c); // 800F7F68
  c->r[3]=c->r[31]|c->r[31]; // 800F7F6C
  c->lr=0x800F7F74u; f_801F4C78(c); // 800F7F70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7F74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7F78
  c->lr=c->r[0]; // 800F7F7C
  c->r[1]=c->r[1]+0x00000010u; // 800F7F80
  return; // 800F7F84
}

// fn_800F7F88
void f_800F7F88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7F88
  c->r[0]=c->lr; // 800F7F8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7F90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7F94
  c->r[31]=c->r[3]|c->r[3]; // 800F7F98
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800F7F9C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800F7FA0
  c->ctr=c->r[12]; // 800F7FA4
  if (true) { c->lr=0x800F7FACu; dispatch(c,c->ctr); } // 800F7FA8
  c->r[3]=c->r[31]|c->r[31]; // 800F7FAC
  c->lr=0x800F7FB4u; f_801F4C0C(c); // 800F7FB0
  c->r[3]=c->r[31]|c->r[31]; // 800F7FB4
  c->lr=0x800F7FBCu; f_800F80D4(c); // 800F7FB8
  c->r[3]=c->r[31]|c->r[31]; // 800F7FBC
  c->lr=0x800F7FC4u; f_800F8604(c); // 800F7FC0
  c->r[3]=c->r[31]|c->r[31]; // 800F7FC4
  c->lr=0x800F7FCCu; f_800F9ACC(c); // 800F7FC8
  c->r[3]=c->r[31]|c->r[31]; // 800F7FCC
  c->lr=0x800F7FD4u; f_801F56F4(c); // 800F7FD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7FD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7FD8
  c->lr=c->r[0]; // 800F7FDC
  c->r[1]=c->r[1]+0x00000010u; // 800F7FE0
  return; // 800F7FE4
}

// fn_800F7FE8
void f_800F7FE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7FE8
  c->r[0]=c->lr; // 800F7FEC
  c->r[5]=0u+0x0000006Cu; // 800F7FF0
  {uint32_t ea=c->r[2]+0xFFFFAA70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F7FF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F7FF8
  c->r[0]=0u+0x00000000u; // 800F7FFC
  c->r[4]=c->r[1]+0x00000014u; // 800F8000
  c->r[6]=0u+0x00000000u; // 800F8004
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800F8008
  c->r[7]=0u+0x00000000u; // 800F800C
  c->r[8]=0u+0x00000000u; // 800F8010
  W32(c->r[1]+0x00000028u,c->r[30]); // 800F8014
  c->r[30]=c->r[3]|c->r[3]; // 800F8018
  c->r[31]=R32(c->r[3]+0x000000ACu); // 800F801C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F8020
  c->r[3]=c->r[31]|c->r[31]; // 800F8024
  W8(c->r[31]+0x00000055u,c->r[5]); // 800F8028
  c->r[5]=0u+0x00000010u; // 800F802C
  W8(c->r[31]+0x00000054u,c->r[5]); // 800F8030
  c->r[5]=c->r[4]|c->r[4]; // 800F8034
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F8038
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F803C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8040
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F8044
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F8048
  c->lr=0x800F8050u; f_801F1FFC(c); // 800F804C
  c->r[3]=c->r[31]|c->r[31]; // 800F8050
  c->r[4]=0u+0x00000000u; // 800F8054
  c->lr=0x800F805Cu; f_801F20CC(c); // 800F8058
  c->r[4]=R32(c->r[30]+0x00000394u); // 800F805C
  c->r[3]=c->r[30]|c->r[30]; // 800F8060
  c->lr=0x800F8068u; f_801F58BC(c); // 800F8064
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F8068
  c->r[0]=0u+0x00000001u; // 800F806C
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800F8070
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F8074
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F8078
  c->lr=0x800F8080u; f_802501B0(c); // 800F807C
  c->r[3]=0u+0x805D0000u; // 800F8080
  c->r[4]=c->r[30]+0x0000002Cu; // 800F8084
  c->r[3]=c->r[3]+0x000078B0u; // 800F8088
  c->lr=0x800F8090u; f_802351CC(c); // 800F808C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800F8090
  c->r[4]=0u+0x00000000u; // 800F8094
  {uint32_t ea=c->r[2]+0xFFFFAA70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F8098
  c->r[5]=0u+0x00000001u; // 800F809C
  W8(c->r[6]+0x0000001Du,c->r[3]); // 800F80A0
  c->r[3]=c->r[30]|c->r[30]; // 800F80A4
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F80A8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F80AC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800F80B0
  c->ctr=c->r[12]; // 800F80B4
  if (true) { c->lr=0x800F80BCu; dispatch(c,c->ctr); } // 800F80B8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F80BC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800F80C0
  c->r[30]=R32(c->r[1]+0x00000028u); // 800F80C4
  c->lr=c->r[0]; // 800F80C8
  c->r[1]=c->r[1]+0x00000030u; // 800F80CC
  return; // 800F80D0
}

// fn_800F80D4
void f_800F80D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F80D4
  c->r[0]=c->lr; // 800F80D8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F80DC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F80E0
  W32(c->r[1]+0x00000048u,c->r[30]); // 800F80E4
  c->r[30]=c->r[3]|c->r[3]; // 800F80E8
  c->r[0]=R8(c->r[3]+0x00000028u); // 800F80EC
  c->r[31]=R32(c->r[3]+0x000000ACu); // 800F80F0
  cmps(c,0,(int32_t)c->r[0],107); // 800F80F4
  if (crb(c,2)) { goto L_800F82A4; } // 800F80F8
  if (!crb(c,0)) { goto L_800F8118; } // 800F80FC
  cmps(c,0,(int32_t)c->r[0],105); // 800F8100
  if (crb(c,2)) { goto L_800F81DC; } // 800F8104
  if (!crb(c,0)) { goto L_800F8260; } // 800F8108
  cmps(c,0,(int32_t)c->r[0],100); // 800F810C
  if (!crb(c,0)) { goto L_800F8128; } // 800F8110
  goto L_800F836C; // 800F8114
L_800F8118:;
  cmps(c,0,(int32_t)c->r[0],109); // 800F8118
  if (crb(c,2)) { goto L_800F834C; } // 800F811C
  if (!crb(c,0)) { goto L_800F836C; } // 800F8120
  goto L_800F8308; // 800F8124
L_800F8128:;
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800F8128
  c->r[10]=0u+0x803A0000u; // 800F812C
  {uint32_t ea=c->r[10]+0xFFFFF064u; c->r[9]=R32(ea); c->r[10]=ea;} // 800F8130
  c->r[4]=0u+0x00000000u; // 800F8134
  c->r[12]=R32(c->r[12]+0x00000048u); // 800F8138
  c->r[5]=0u+0x00000001u; // 800F813C
  c->r[8]=R32(c->r[10]+0x00000004u); // 800F8140
  c->r[7]=R32(c->r[10]+0x00000008u); // 800F8144
  c->r[6]=R32(c->r[10]+0x0000000Cu); // 800F8148
  c->r[0]=R32(c->r[10]+0x00000010u); // 800F814C
  {uint32_t ea=c->r[2]+0xFFFFAA70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F8150
  W32(c->r[1]+0x0000002Cu,c->r[9]); // 800F8154
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F8158
  W32(c->r[1]+0x00000030u,c->r[8]); // 800F815C
  W32(c->r[1]+0x00000034u,c->r[7]); // 800F8160
  W32(c->r[1]+0x00000038u,c->r[6]); // 800F8164
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800F8168
  c->ctr=c->r[12]; // 800F816C
  if (true) { c->lr=0x800F8174u; dispatch(c,c->ctr); } // 800F8170
  c->r[3]=c->r[1]+0x00000014u; // 800F8174
  c->r[4]=c->r[31]+0x00000008u; // 800F8178
  c->lr=0x800F8180u; f_800361A0(c); // 800F817C
  c->r[4]=c->r[3]|c->r[3]; // 800F8180
  c->r[3]=c->r[1]+0x00000020u; // 800F8184
  c->lr=0x800F818Cu; f_800361A0(c); // 800F8188
  c->r[4]=R8(c->r[30]+0x00000028u); // 800F818C
  c->r[6]=c->r[1]+0x0000002Cu; // 800F8190
  {uint32_t ea=c->r[2]+0xFFFFAA78u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F8194
  c->r[3]=c->r[31]|c->r[31]; // 800F8198
  c->r[0]=c->r[4]+0xFFFFFF9Cu; // 800F819C
  c->r[4]=c->r[1]+0x00000020u; // 800F81A0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F81A4
  c->r[5]=c->r[1]+0x00000014u; // 800F81A8
  {uint32_t ea=c->r[6]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 800F81AC
  c->r[6]=0u+0x00000000u; // 800F81B0
  c->r[7]=0u+0x00000001u; // 800F81B4
  c->r[8]=0u+0x00000000u; // 800F81B8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800F81BC
  c->lr=0x800F81C4u; f_801F1FFC(c); // 800F81C0
  c->r[3]=c->r[31]|c->r[31]; // 800F81C4
  c->r[4]=0u+0x00000000u; // 800F81C8
  c->lr=0x800F81D0u; f_801F20CC(c); // 800F81CC
  c->r[0]=0u+0x0000006Du; // 800F81D0
  W8(c->r[30]+0x00000028u,c->r[0]); // 800F81D4
  goto L_800F836C; // 800F81D8
L_800F81DC:;
  c->r[4]=R8(c->r[3]+0x00000029u); // 800F81DC
  cmps(c,0,(int32_t)c->r[4],0); // 800F81E0
  if (!crb(c,2)) { goto L_800F8240; } // 800F81E4
  c->r[0]=c->r[4]+0x00000001u; // 800F81E8
  {uint32_t ea=c->r[2]+0xFFFFAA70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F81EC
  W8(c->r[3]+0x00000029u,c->r[0]); // 800F81F0
  c->r[4]=0u+0x00000001u; // 800F81F4
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F81F8
  c->r[5]=0u+0x00000001u; // 800F81FC
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800F8200
  c->r[12]=R32(c->r[12]+0x00000048u); // 800F8204
  c->ctr=c->r[12]; // 800F8208
  if (true) { c->lr=0x800F8210u; dispatch(c,c->ctr); } // 800F820C
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F8210
  c->r[3]=0u+0x00000026u; // 800F8214
  c->r[4]=0u+0x00000000u; // 800F8218
  c->lr=0x800F8220u; f_802445B8(c); // 800F821C
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F8220
  c->r[3]=0u+0x00000027u; // 800F8224
  c->r[4]=0u+0x00000001u; // 800F8228
  c->lr=0x800F8230u; f_802445B8(c); // 800F822C
  c->r[3]=0u+0x00000001u; // 800F8230
  c->r[0]=0u+0x00000069u; // 800F8234
  W8(c->r[31]+0x00000056u,c->r[3]); // 800F8238
  W8(c->r[31]+0x00000055u,c->r[0]); // 800F823C
L_800F8240:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F8240
  c->r[0]=R32(c->r[3]+0x00000054u); // 800F8244
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800F8248
  if (crb(c,2)) { goto L_800F836C; } // 800F824C
  c->r[3]=0u+0x0000006Au; // 800F8250
  c->r[0]=0u+0x00000000u; // 800F8254
  W8(c->r[30]+0x00000028u,c->r[3]); // 800F8258
  W8(c->r[30]+0x00000029u,c->r[0]); // 800F825C
L_800F8260:;
  c->r[3]=R8(c->r[30]+0x00000029u); // 800F8260
  cmps(c,0,(int32_t)c->r[3],0); // 800F8264
  if (!crb(c,2)) { goto L_800F836C; } // 800F8268
  c->r[0]=c->r[3]+0x00000001u; // 800F826C
  c->r[3]=c->r[30]|c->r[30]; // 800F8270
  W8(c->r[30]+0x00000029u,c->r[0]); // 800F8274
  c->r[4]=0u+0x00000002u; // 800F8278
  {uint32_t ea=c->r[2]+0xFFFFAA70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F827C
  c->r[5]=0u+0x00000001u; // 800F8280
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F8284
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F8288
  c->r[12]=R32(c->r[12]+0x00000048u); // 800F828C
  c->ctr=c->r[12]; // 800F8290
  if (true) { c->lr=0x800F8298u; dispatch(c,c->ctr); } // 800F8294
  c->r[0]=0u+0x0000006Au; // 800F8298
  W8(c->r[31]+0x00000055u,c->r[0]); // 800F829C
  goto L_800F836C; // 800F82A0
L_800F82A4:;
  c->r[4]=R8(c->r[3]+0x00000029u); // 800F82A4
  cmps(c,0,(int32_t)c->r[4],0); // 800F82A8
  if (!crb(c,2)) { goto L_800F82E8; } // 800F82AC
  c->r[0]=c->r[4]+0x00000001u; // 800F82B0
  {uint32_t ea=c->r[2]+0xFFFFAA70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F82B4
  W8(c->r[3]+0x00000029u,c->r[0]); // 800F82B8
  c->r[4]=0u+0x00000003u; // 800F82BC
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F82C0
  c->r[5]=0u+0x00000001u; // 800F82C4
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800F82C8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800F82CC
  c->ctr=c->r[12]; // 800F82D0
  if (true) { c->lr=0x800F82D8u; dispatch(c,c->ctr); } // 800F82D4
  c->r[3]=0u+0x00000004u; // 800F82D8
  c->r[0]=0u+0x0000006Bu; // 800F82DC
  W8(c->r[31]+0x00000056u,c->r[3]); // 800F82E0
  W8(c->r[31]+0x00000055u,c->r[0]); // 800F82E4
L_800F82E8:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F82E8
  c->r[0]=R32(c->r[3]+0x00000054u); // 800F82EC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800F82F0
  if (crb(c,2)) { goto L_800F836C; } // 800F82F4
  c->r[3]=0u+0x0000006Cu; // 800F82F8
  c->r[0]=0u+0x00000000u; // 800F82FC
  W8(c->r[30]+0x00000028u,c->r[3]); // 800F8300
  W8(c->r[30]+0x00000029u,c->r[0]); // 800F8304
L_800F8308:;
  c->r[3]=R8(c->r[30]+0x00000029u); // 800F8308
  cmps(c,0,(int32_t)c->r[3],0); // 800F830C
  if (!crb(c,2)) { goto L_800F836C; } // 800F8310
  c->r[0]=c->r[3]+0x00000001u; // 800F8314
  c->r[3]=c->r[30]|c->r[30]; // 800F8318
  W8(c->r[30]+0x00000029u,c->r[0]); // 800F831C
  c->r[4]=0u+0x00000000u; // 800F8320
  {uint32_t ea=c->r[2]+0xFFFFAA70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F8324
  c->r[5]=0u+0x00000001u; // 800F8328
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800F832C
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F8330
  c->r[12]=R32(c->r[12]+0x00000048u); // 800F8334
  c->ctr=c->r[12]; // 800F8338
  if (true) { c->lr=0x800F8340u; dispatch(c,c->ctr); } // 800F833C
  c->r[0]=0u+0x0000006Cu; // 800F8340
  W8(c->r[31]+0x00000055u,c->r[0]); // 800F8344
  goto L_800F836C; // 800F8348
L_800F834C:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F834C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8350
  fcmp(c,0,c->f[1],c->f[0]); // 800F8354
  if (!crb(c,2)) { goto L_800F836C; } // 800F8358
  c->r[3]=0u+0x00000000u; // 800F835C
  c->lr=0x800F8364u; f_80269AD0(c); // 800F8360
  c->r[0]=0u+0x0000006Eu; // 800F8364
  W8(c->r[30]+0x00000028u,c->r[0]); // 800F8368
L_800F836C:;
  c->lr=0x800F8370u; f_8024E040(c); // 800F836C
  c->r[3]=c->r[31]|c->r[31]; // 800F8370
  c->lr=0x800F8378u; f_801F1E40(c); // 800F8374
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F8378
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F837C
  c->lr=0x800F8384u; f_802501B0(c); // 800F8380
  c->r[3]=c->r[30]|c->r[30]; // 800F8384
  c->r[4]=0u+0x00000000u; // 800F8388
  c->lr=0x800F8390u; f_801F5244(c); // 800F838C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F8390
  c->r[4]=0u+0x803A0000u; // 800F8394
  c->r[4]=c->r[4]+0xFFFFF130u; // 800F8398
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F839C
  c->r[4]=c->r[4]+0x00000014u; // 800F83A0
  c->lr=0x800F83A8u; f_80256EC4(c); // 800F83A4
  c->r[6]=R32(c->r[31]+0x00000008u); // 800F83A8
  c->r[4]=c->r[3]|c->r[3]; // 800F83AC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800F83B0
  c->r[5]=c->r[1]+0x00000008u; // 800F83B4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F83B8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F83BC
  c->r[0]=R32(c->r[31]+0x00000010u); // 800F83C0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F83C4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800F83C8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F83CC
  c->lr=0x800F83D4u; f_8025E9C0(c); // 800F83D0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F83D4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F83D8
  c->r[30]=R32(c->r[1]+0x00000048u); // 800F83DC
  c->lr=c->r[0]; // 800F83E0
  c->r[1]=c->r[1]+0x00000050u; // 800F83E4
  return; // 800F83E8
}

// fn_800F83EC
void f_800F83EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F83EC
  c->r[0]=c->lr; // 800F83F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F83F4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800F83F8
  W32(c->r[1]+0x00000028u,c->r[30]); // 800F83FC
  W32(c->r[1]+0x00000024u,c->r[29]); // 800F8400
  c->r[29]=c->r[3]|c->r[3]; // 800F8404
  c->r[31]=R32(c->r[3]+0x000000ACu); // 800F8408
  c->r[4]=R32(c->r[3]+0x00000398u); // 800F840C
  c->lr=0x800F8414u; f_801F58BC(c); // 800F8410
  c->r[3]=R32(c->r[29]+0x00000398u); // 800F8414
  c->r[30]=0u+0x00000000u; // 800F8418
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800F841C
  W8(c->r[29]+0x00000074u,c->r[30]); // 800F8420
  W8(c->r[29]+0x00000075u,c->r[30]); // 800F8424
  W8(c->r[31]+0x00000056u,c->r[30]); // 800F8428
  W8(c->r[31]+0x00000057u,c->r[30]); // 800F842C
  W8(c->r[31]+0x00000058u,c->r[30]); // 800F8430
  c->lr=0x800F8438u; f_8024E040(c); // 800F8434
  c->r[0]=0u+0x00000002u; // 800F8438
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[1]);} // 800F843C
  c->r[4]=c->r[31]|c->r[31]; // 800F8440
  c->r[5]=0u+0x00000000u; // 800F8444
  {uint32_t ea=c->r[2]+0xFFFFAA70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F8448
  c->r[3]=0u+0xFFFFFFFFu; // 800F844C
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8450
  c->ctr=c->r[0]; // 800F8454
L_800F8458:;
  W32(c->r[4]+0x000001ACu,c->r[3]); // 800F8458
  c->r[5]=c->r[5]+0x00000008u; // 800F845C
  W32(c->r[4]+0x000001B0u,c->r[3]); // 800F8460
  W32(c->r[4]+0x000001B4u,c->r[3]); // 800F8464
  W8(c->r[4]+0x000001A8u,c->r[30]); // 800F8468
  {uint32_t ea=c->r[4]+0x000001F0u; WF32(ea,c->f[1]);} // 800F846C
  {uint32_t ea=c->r[4]+0x000001F4u; WF32(ea,c->f[0]);} // 800F8470
  W32(c->r[4]+0x000001FCu,c->r[3]); // 800F8474
  W32(c->r[4]+0x00000200u,c->r[3]); // 800F8478
  W32(c->r[4]+0x00000204u,c->r[3]); // 800F847C
  W8(c->r[4]+0x000001F8u,c->r[30]); // 800F8480
  {uint32_t ea=c->r[4]+0x00000240u; WF32(ea,c->f[1]);} // 800F8484
  {uint32_t ea=c->r[4]+0x00000244u; WF32(ea,c->f[0]);} // 800F8488
  W32(c->r[4]+0x0000024Cu,c->r[3]); // 800F848C
  W32(c->r[4]+0x00000250u,c->r[3]); // 800F8490
  W32(c->r[4]+0x00000254u,c->r[3]); // 800F8494
  W8(c->r[4]+0x00000248u,c->r[30]); // 800F8498
  {uint32_t ea=c->r[4]+0x00000290u; WF32(ea,c->f[1]);} // 800F849C
  {uint32_t ea=c->r[4]+0x00000294u; WF32(ea,c->f[0]);} // 800F84A0
  W32(c->r[4]+0x0000029Cu,c->r[3]); // 800F84A4
  W32(c->r[4]+0x000002A0u,c->r[3]); // 800F84A8
  W32(c->r[4]+0x000002A4u,c->r[3]); // 800F84AC
  W8(c->r[4]+0x00000298u,c->r[30]); // 800F84B0
  {uint32_t ea=c->r[4]+0x000002E0u; WF32(ea,c->f[1]);} // 800F84B4
  {uint32_t ea=c->r[4]+0x000002E4u; WF32(ea,c->f[0]);} // 800F84B8
  W32(c->r[4]+0x000002ECu,c->r[3]); // 800F84BC
  W32(c->r[4]+0x000002F0u,c->r[3]); // 800F84C0
  W32(c->r[4]+0x000002F4u,c->r[3]); // 800F84C4
  W8(c->r[4]+0x000002E8u,c->r[30]); // 800F84C8
  {uint32_t ea=c->r[4]+0x00000330u; WF32(ea,c->f[1]);} // 800F84CC
  {uint32_t ea=c->r[4]+0x00000334u; WF32(ea,c->f[0]);} // 800F84D0
  W32(c->r[4]+0x0000033Cu,c->r[3]); // 800F84D4
  W32(c->r[4]+0x00000340u,c->r[3]); // 800F84D8
  W32(c->r[4]+0x00000344u,c->r[3]); // 800F84DC
  W8(c->r[4]+0x00000338u,c->r[30]); // 800F84E0
  {uint32_t ea=c->r[4]+0x00000380u; WF32(ea,c->f[1]);} // 800F84E4
  {uint32_t ea=c->r[4]+0x00000384u; WF32(ea,c->f[0]);} // 800F84E8
  W32(c->r[4]+0x0000038Cu,c->r[3]); // 800F84EC
  W32(c->r[4]+0x00000390u,c->r[3]); // 800F84F0
  W32(c->r[4]+0x00000394u,c->r[3]); // 800F84F4
  W8(c->r[4]+0x00000388u,c->r[30]); // 800F84F8
  {uint32_t ea=c->r[4]+0x000003D0u; WF32(ea,c->f[1]);} // 800F84FC
  {uint32_t ea=c->r[4]+0x000003D4u; WF32(ea,c->f[0]);} // 800F8500
  W32(c->r[4]+0x000003DCu,c->r[3]); // 800F8504
  W32(c->r[4]+0x000003E0u,c->r[3]); // 800F8508
  W32(c->r[4]+0x000003E4u,c->r[3]); // 800F850C
  W8(c->r[4]+0x000003D8u,c->r[30]); // 800F8510
  {uint32_t ea=c->r[4]+0x00000420u; WF32(ea,c->f[1]);} // 800F8514
  {uint32_t ea=c->r[4]+0x00000424u; WF32(ea,c->f[0]);} // 800F8518
  c->r[4]=c->r[4]+0x00000280u; // 800F851C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F8458; } // 800F8520
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)80); // 800F8524
  c->r[5]=0u+0xFFFFFFFFu; // 800F8528
  c->r[4]=0u+0x00000000u; // 800F852C
  {uint32_t ea=c->r[2]+0xFFFFAA70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F8530
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8534
  c->r[0]=0u+0x00000007u; // 800F8538
  c->r[3]=c->r[31]+c->r[3]; // 800F853C
  c->r[6]=0u+0x00000000u; // 800F8540
  W32(c->r[3]+0x000001ACu,c->r[5]); // 800F8544
  W32(c->r[3]+0x000001B0u,c->r[5]); // 800F8548
  W32(c->r[3]+0x000001B4u,c->r[5]); // 800F854C
  W8(c->r[3]+0x000001A8u,c->r[4]); // 800F8550
  {uint32_t ea=c->r[3]+0x000001F0u; WF32(ea,c->f[1]);} // 800F8554
  {uint32_t ea=c->r[3]+0x000001F4u; WF32(ea,c->f[0]);} // 800F8558
  c->ctr=c->r[0]; // 800F855C
L_800F8560:;
  c->r[3]=c->r[31]+c->r[6]; // 800F8560
  c->r[6]=c->r[6]+0x00000001u; // 800F8564
  W8(c->r[3]+0x000000DCu,c->r[4]); // 800F8568
  c->r[3]=c->r[31]+c->r[6]; // 800F856C
  c->r[6]=c->r[6]+0x00000001u; // 800F8570
  W8(c->r[3]+0x000000DCu,c->r[4]); // 800F8574
  c->r[3]=c->r[31]+c->r[6]; // 800F8578
  c->r[6]=c->r[6]+0x00000001u; // 800F857C
  W8(c->r[3]+0x000000DCu,c->r[4]); // 800F8580
  c->r[3]=c->r[31]+c->r[6]; // 800F8584
  c->r[6]=c->r[6]+0x00000001u; // 800F8588
  W8(c->r[3]+0x000000DCu,c->r[4]); // 800F858C
  c->r[3]=c->r[31]+c->r[6]; // 800F8590
  c->r[6]=c->r[6]+0x00000001u; // 800F8594
  W8(c->r[3]+0x000000DCu,c->r[4]); // 800F8598
  c->r[3]=c->r[31]+c->r[6]; // 800F859C
  c->r[6]=c->r[6]+0x00000001u; // 800F85A0
  W8(c->r[3]+0x000000DCu,c->r[4]); // 800F85A4
  c->r[3]=c->r[31]+c->r[6]; // 800F85A8
  c->r[6]=c->r[6]+0x00000001u; // 800F85AC
  W8(c->r[3]+0x000000DCu,c->r[4]); // 800F85B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F8560; } // 800F85B4
  c->r[7]=0u+0x803A0000u; // 800F85B8
  {uint32_t ea=c->r[7]+0xFFFFF078u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F85BC
  c->r[3]=c->r[31]+0x00000138u; // 800F85C0
  c->r[4]=c->r[1]+0x00000008u; // 800F85C4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F85C8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F85CC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F85D0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F85D4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F85D8
  c->lr=0x800F85E0u; f_800361A0(c); // 800F85DC
  c->r[0]=0u+0x00000000u; // 800F85E0
  W32(c->r[31]+0x000001A4u,c->r[0]); // 800F85E4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800F85E8
  c->r[30]=R32(c->r[1]+0x00000028u); // 800F85EC
  c->r[29]=R32(c->r[1]+0x00000024u); // 800F85F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F85F4
  c->lr=c->r[0]; // 800F85F8
  c->r[1]=c->r[1]+0x00000030u; // 800F85FC
  return; // 800F8600
}

// fn_800F8604
void f_800F8604(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8604
  c->r[0]=c->lr; // 800F8608
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F860C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8610
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F8614
  c->r[30]=c->r[3]|c->r[3]; // 800F8618
  c->r[31]=R32(c->r[3]+0x000000ACu); // 800F861C
  c->r[4]=R8(c->r[31]+0x00000056u); // 800F8620
  c->r[0]=R8(c->r[31]+0x00000057u); // 800F8624
  cmpu(c,0,c->r[0],c->r[4]); // 800F8628
  if (crb(c,2)) { goto L_800F8644; } // 800F862C
  W8(c->r[31]+0x00000057u,c->r[4]); // 800F8630
  c->r[0]=0u+0x00000000u; // 800F8634
  W8(c->r[3]+0x00000074u,c->r[0]); // 800F8638
  W8(c->r[3]+0x00000075u,c->r[0]); // 800F863C
  W8(c->r[3]+0x00000076u,c->r[0]); // 800F8640
L_800F8644:;
  c->r[0]=R8(c->r[31]+0x00000057u); // 800F8644
  cmps(c,0,(int32_t)c->r[0],2); // 800F8648
  if (crb(c,2)) { goto L_800F868C; } // 800F864C
  if (!crb(c,0)) { goto L_800F8664; } // 800F8650
  cmps(c,0,(int32_t)c->r[0],0); // 800F8654
  if (crb(c,2)) { goto L_800F8674; } // 800F8658
  if (!crb(c,0)) { goto L_800F8680; } // 800F865C
  goto L_800F86AC; // 800F8660
L_800F8664:;
  cmps(c,0,(int32_t)c->r[0],4); // 800F8664
  if (crb(c,2)) { goto L_800F86A4; } // 800F8668
  if (!crb(c,0)) { goto L_800F86AC; } // 800F866C
  goto L_800F8698; // 800F8670
L_800F8674:;
  c->r[3]=c->r[30]|c->r[30]; // 800F8674
  c->lr=0x800F867Cu; f_800F86D4(c); // 800F8678
  goto L_800F86AC; // 800F867C
L_800F8680:;
  c->r[3]=c->r[30]|c->r[30]; // 800F8680
  c->lr=0x800F8688u; f_800F8910(c); // 800F8684
  goto L_800F86AC; // 800F8688
L_800F868C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F868C
  c->lr=0x800F8694u; f_800F8AF8(c); // 800F8690
  goto L_800F86AC; // 800F8694
L_800F8698:;
  c->r[3]=c->r[30]|c->r[30]; // 800F8698
  c->lr=0x800F86A0u; f_800F8AF8(c); // 800F869C
  goto L_800F86AC; // 800F86A0
L_800F86A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F86A4
  c->lr=0x800F86ACu; f_800F8C28(c); // 800F86A8
L_800F86AC:;
  c->r[3]=R32(c->r[30]+0x00000398u); // 800F86AC
  c->r[4]=c->r[31]+0x000000C4u; // 800F86B0
  c->r[3]=c->r[3]+0x0000005Cu; // 800F86B4
  c->lr=0x800F86BCu; f_800361A0(c); // 800F86B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F86BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F86C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F86C4
  c->lr=c->r[0]; // 800F86C8
  c->r[1]=c->r[1]+0x00000010u; // 800F86CC
  return; // 800F86D0
}

// fn_800F86D4
void f_800F86D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F86D4
  c->r[0]=c->lr; // 800F86D8
  W32(c->r[1]+0x00000084u,c->r[0]); // 800F86DC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800F86E0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800F86E4
  c->r[11]=c->r[1]+0x00000070u; // 800F86E8
  c->lr=0x800F86F0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F86EC
  c->r[0]=R8(c->r[3]+0x00000074u); // 800F86F0
  c->r[29]=c->r[3]|c->r[3]; // 800F86F4
  c->r[31]=R32(c->r[3]+0x000000ACu); // 800F86F8
  cmps(c,0,(int32_t)c->r[0],1); // 800F86FC
  c->r[30]=c->r[31]+0x000001A8u; // 800F8700
  if (crb(c,2)) { goto L_800F8754; } // 800F8704
  if (!crb(c,0)) { goto L_800F8880; } // 800F8708
  cmps(c,0,(int32_t)c->r[0],0); // 800F870C
  if (!crb(c,0)) { goto L_800F8718; } // 800F8710
  goto L_800F8880; // 800F8714
L_800F8718:;
  c->r[0]=R8(c->r[3]+0x00000075u); // 800F8718
  cmps(c,0,(int32_t)c->r[0],0); // 800F871C
  if (crb(c,2)) { goto L_800F8728; } // 800F8720
  goto L_800F8880; // 800F8724
L_800F8728:;
  c->lr=0x800F872Cu; f_800F988C(c); // 800F8728
  c->r[3]=c->r[29]|c->r[29]; // 800F872C
  c->r[4]=0u+0x00000000u; // 800F8730
  c->r[5]=0u+0x00000000u; // 800F8734
  c->lr=0x800F873Cu; f_800F97DC(c); // 800F8738
  c->r[0]=0u+0x00000000u; // 800F873C
  W8(c->r[31]+0x00000059u,c->r[0]); // 800F8740
  c->r[3]=R8(c->r[29]+0x00000075u); // 800F8744
  c->r[0]=c->r[3]+0x00000001u; // 800F8748
  W8(c->r[29]+0x00000075u,c->r[0]); // 800F874C
  goto L_800F8880; // 800F8750
L_800F8754:;
  c->r[0]=R8(c->r[3]+0x00000075u); // 800F8754
  cmps(c,0,(int32_t)c->r[0],0); // 800F8758
  if (crb(c,2)) { goto L_800F8764; } // 800F875C
  goto L_800F877C; // 800F8760
L_800F8764:;
  c->r[4]=0u+0x00000000u; // 800F8764
  c->r[5]=0u+0x00000000u; // 800F8768
  c->lr=0x800F8770u; f_800F97DC(c); // 800F876C
  c->r[3]=R8(c->r[29]+0x00000075u); // 800F8770
  c->r[0]=c->r[3]+0x00000001u; // 800F8774
  W8(c->r[29]+0x00000075u,c->r[0]); // 800F8778
L_800F877C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F877C
  c->lr=0x800F8784u; f_800F9650(c); // 800F8780
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[31]=c->ps1[31]=RF32(ea);} // 800F8784
  c->r[28]=c->r[31]+0x00000050u; // 800F8788
  c->r[27]=0u+0x00000001u; // 800F878C
  goto L_800F87BC; // 800F8790
L_800F8794:;
  {uint32_t ea=c->r[28]+0x000001F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8794
  fcmp(c,0,c->f[31],c->f[0]); // 800F8798
  if (!crb(c,2)) { goto L_800F87AC; } // 800F879C
  c->r[3]=c->r[29]|c->r[29]; // 800F87A0
  c->r[4]=c->r[27]|c->r[27]; // 800F87A4
  c->lr=0x800F87ACu; f_800F98D8(c); // 800F87A8
L_800F87AC:;
  c->r[27]=c->r[27]+0x00000001u; // 800F87AC
  c->r[28]=c->r[28]+0x00000050u; // 800F87B0
  cmps(c,0,(int32_t)c->r[27],17); // 800F87B4
  if (!crb(c,0)) { goto L_800F87D0; } // 800F87B8
L_800F87BC:;
  c->r[3]=c->r[29]|c->r[29]; // 800F87BC
  c->r[4]=c->r[27]|c->r[27]; // 800F87C0
  c->lr=0x800F87C8u; f_800F8D38(c); // 800F87C4
  cmps(c,0,(int32_t)c->r[3],1); // 800F87C8
  if (crb(c,2)) { IRQCHK(c); goto L_800F8794; } // 800F87CC
L_800F87D0:;
  c->r[0]=0u+0x00000002u; // 800F87D0
  c->r[3]=c->r[31]+0x00000050u; // 800F87D4
  c->r[4]=0u+0x00000001u; // 800F87D8
  c->ctr=c->r[0]; // 800F87DC
L_800F87E0:;
  c->r[0]=R32(c->r[3]+0x000001ACu); // 800F87E0
  cmps(c,0,(int32_t)c->r[0],-1); // 800F87E4
  if (!crb(c,2)) { goto L_800F8868; } // 800F87E8
  c->r[0]=R32(c->r[3]+0x000001FCu); // 800F87EC
  c->r[4]=c->r[4]+0x00000001u; // 800F87F0
  cmps(c,0,(int32_t)c->r[0],-1); // 800F87F4
  if (!crb(c,2)) { goto L_800F8868; } // 800F87F8
  c->r[0]=R32(c->r[3]+0x0000024Cu); // 800F87FC
  c->r[4]=c->r[4]+0x00000001u; // 800F8800
  cmps(c,0,(int32_t)c->r[0],-1); // 800F8804
  if (!crb(c,2)) { goto L_800F8868; } // 800F8808
  c->r[0]=R32(c->r[3]+0x0000029Cu); // 800F880C
  c->r[4]=c->r[4]+0x00000001u; // 800F8810
  cmps(c,0,(int32_t)c->r[0],-1); // 800F8814
  if (!crb(c,2)) { goto L_800F8868; } // 800F8818
  c->r[0]=R32(c->r[3]+0x000002ECu); // 800F881C
  c->r[4]=c->r[4]+0x00000001u; // 800F8820
  cmps(c,0,(int32_t)c->r[0],-1); // 800F8824
  if (!crb(c,2)) { goto L_800F8868; } // 800F8828
  c->r[0]=R32(c->r[3]+0x0000033Cu); // 800F882C
  c->r[4]=c->r[4]+0x00000001u; // 800F8830
  cmps(c,0,(int32_t)c->r[0],-1); // 800F8834
  if (!crb(c,2)) { goto L_800F8868; } // 800F8838
  c->r[0]=R32(c->r[3]+0x0000038Cu); // 800F883C
  c->r[4]=c->r[4]+0x00000001u; // 800F8840
  cmps(c,0,(int32_t)c->r[0],-1); // 800F8844
  if (!crb(c,2)) { goto L_800F8868; } // 800F8848
  c->r[0]=R32(c->r[3]+0x000003DCu); // 800F884C
  c->r[4]=c->r[4]+0x00000001u; // 800F8850
  cmps(c,0,(int32_t)c->r[0],-1); // 800F8854
  if (!crb(c,2)) { goto L_800F8868; } // 800F8858
  c->r[3]=c->r[3]+0x00000280u; // 800F885C
  c->r[4]=c->r[4]+0x00000001u; // 800F8860
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F87E0; } // 800F8864
L_800F8868:;
  cmps(c,0,(int32_t)c->r[4],17); // 800F8868
  if (!crb(c,2)) { goto L_800F8880; } // 800F886C
  c->r[3]=0u+0x00000000u; // 800F8870
  c->r[0]=0u+0x00000001u; // 800F8874
  W8(c->r[29]+0x00000074u,c->r[3]); // 800F8878
  W8(c->r[29]+0x00000075u,c->r[0]); // 800F887C
L_800F8880:;
  c->r[3]=R32(c->r[29]+0x00000394u); // 800F8880
  c->r[4]=0u+0x803A0000u; // 800F8884
  c->r[4]=c->r[4]+0xFFFFF130u; // 800F8888
  c->r[5]=c->r[1]+0x00000020u; // 800F888C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800F8890
  c->r[4]=c->r[4]+0x00000014u; // 800F8894
  c->r[6]=0u+0x00000001u; // 800F8898
  c->lr=0x800F88A0u; f_80257018(c); // 800F889C
  c->r[3]=c->r[1]+0x00000020u; // 800F88A0
  c->r[4]=c->r[1]+0x00000014u; // 800F88A4
  c->r[5]=c->r[31]+0x0000012Cu; // 800F88A8
  c->r[6]=c->r[1]+0x00000008u; // 800F88AC
  c->lr=0x800F88B4u; f_802510A4(c); // 800F88B0
  c->r[4]=0u+0x80420000u; // 800F88B4
  c->r[3]=c->r[31]+0x00000120u; // 800F88B8
  c->r[4]=c->r[4]+0xFFFFA960u; // 800F88BC
  c->r[4]=c->r[4]+0x000000C0u; // 800F88C0
  c->lr=0x800F88C8u; f_800361A0(c); // 800F88C4
  c->r[3]=c->r[31]+0x00000120u; // 800F88C8
  c->lr=0x800F88D0u; f_80251104(c); // 800F88CC
  c->r[3]=0u+0x80550000u; // 800F88D0
  c->r[4]=R32(c->r[30]+0x00000004u); // 800F88D4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F88D8
  c->r[5]=c->r[31]+0x00000174u; // 800F88DC
  c->lr=0x800F88E4u; f_8018DEB8(c); // 800F88E0
  c->r[3]=c->r[31]+0x000000C4u; // 800F88E4
  c->r[4]=c->r[31]+0x00000120u; // 800F88E8
  c->lr=0x800F88F0u; f_800361A0(c); // 800F88EC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800F88F0
  c->r[11]=c->r[1]+0x00000070u; // 800F88F4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800F88F8
  c->lr=0x800F8900u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F88FC
  c->r[0]=R32(c->r[1]+0x00000084u); // 800F8900
  c->lr=c->r[0]; // 800F8904
  c->r[1]=c->r[1]+0x00000080u; // 800F8908
  return; // 800F890C
}

// fn_800F8910
void f_800F8910(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8910
  c->r[0]=c->lr; // 800F8914
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F8918
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F891C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F8920
  c->r[30]=c->r[3]|c->r[3]; // 800F8924
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F8928
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F892C
  c->r[0]=R8(c->r[3]+0x00000074u); // 800F8930
  c->r[29]=R32(c->r[3]+0x000000ACu); // 800F8934
  cmps(c,0,(int32_t)c->r[0],1); // 800F8938
  c->r[31]=R8(c->r[3]+0x00000076u); // 800F893C
  if (crb(c,2)) { goto L_800F8A28; } // 800F8940
  if (!crb(c,0)) { goto L_800F8954; } // 800F8944
  cmps(c,0,(int32_t)c->r[0],0); // 800F8948
  if (!crb(c,0)) { goto L_800F8960; } // 800F894C
  goto L_800F8A9C; // 800F8950
L_800F8954:;
  cmps(c,0,(int32_t)c->r[0],3); // 800F8954
  if (!crb(c,0)) { goto L_800F8A9C; } // 800F8958
  goto L_800F8A70; // 800F895C
L_800F8960:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F8960
  {uint32_t ea=c->r[2]+0xFFFFAA7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8964
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F8968
  fcmp(c,0,c->f[1],c->f[0]); // 800F896C
  if (crb(c,0)) { goto L_800F8AC4; } // 800F8970
  c->r[5]=0u+0x00000000u; // 800F8974
  c->r[0]=0u+0x00000010u; // 800F8978
  W8(c->r[29]+0x000001A8u,c->r[5]); // 800F897C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)80); // 800F8980
  W8(c->r[29]+0x000001F8u,c->r[5]); // 800F8984
  c->r[4]=c->r[29]+c->r[0]; // 800F8988
  W8(c->r[29]+0x00000248u,c->r[5]); // 800F898C
  W8(c->r[29]+0x00000298u,c->r[5]); // 800F8990
  W8(c->r[29]+0x000002E8u,c->r[5]); // 800F8994
  W8(c->r[29]+0x00000338u,c->r[5]); // 800F8998
  W8(c->r[29]+0x00000388u,c->r[5]); // 800F899C
  W8(c->r[29]+0x000003D8u,c->r[5]); // 800F89A0
  W8(c->r[29]+0x00000428u,c->r[5]); // 800F89A4
  W8(c->r[29]+0x00000478u,c->r[5]); // 800F89A8
  W8(c->r[29]+0x000004C8u,c->r[5]); // 800F89AC
  W8(c->r[29]+0x00000518u,c->r[5]); // 800F89B0
  W8(c->r[29]+0x00000568u,c->r[5]); // 800F89B4
  W8(c->r[29]+0x000005B8u,c->r[5]); // 800F89B8
  W8(c->r[29]+0x00000608u,c->r[5]); // 800F89BC
  W8(c->r[29]+0x00000658u,c->r[5]); // 800F89C0
  W8(c->r[4]+0x000001A8u,c->r[5]); // 800F89C4
  c->lr=0x800F89CCu; f_800F988C(c); // 800F89C8
  c->r[3]=c->r[30]|c->r[30]; // 800F89CC
  c->lr=0x800F89D4u; f_800F915C(c); // 800F89D0
  {uint32_t ea=c->r[2]+0xFFFFAA70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F89D4
  c->r[3]=0u+0x80620000u; // 800F89D8
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F89DC
  c->r[0]=0u+0x00000010u; // 800F89E0
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[1]);} // 800F89E4
  c->r[3]=c->r[3]+0x00007688u; // 800F89E8
  c->r[4]=0u+0x00000065u; // 800F89EC
  {uint32_t ea=c->r[29]+0x00000110u; WF32(ea,c->f[0]);} // 800F89F0
  W8(c->r[29]+0x00000208u,c->r[0]); // 800F89F4
  c->r[3]=R32(c->r[3]+0x00000014u); // 800F89F8
  c->lr=0x800F8A00u; f_8003560C(c); // 800F89FC
  W8(c->r[29]+0x000001F9u,c->r[3]); // 800F8A00
  c->r[3]=c->r[30]|c->r[30]; // 800F8A04
  c->r[4]=0u+0x00000004u; // 800F8A08
  c->r[5]=0u+0x00000006u; // 800F8A0C
  c->r[8]=R8(c->r[30]+0x00000074u); // 800F8A10
  c->r[6]=0u+0x00000001u; // 800F8A14
  c->r[7]=0u+0x00000001u; // 800F8A18
  c->r[0]=c->r[8]+0x00000001u; // 800F8A1C
  W8(c->r[30]+0x00000074u,c->r[0]); // 800F8A20
  c->lr=0x800F8A28u; f_8017900C(c); // 800F8A24
L_800F8A28:;
  c->r[28]=0u+0x00000001u; // 800F8A28
L_800F8A2C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F8A2C
  c->r[4]=c->r[28]|c->r[28]; // 800F8A30
  c->lr=0x800F8A38u; f_800F8D38(c); // 800F8A34
  cmps(c,0,(int32_t)c->r[3],0); // 800F8A38
  if (crb(c,2)) { goto L_800F8AC4; } // 800F8A3C
  cmps(c,0,(int32_t)c->r[3],-1); // 800F8A40
  if (!crb(c,2)) { goto L_800F8A60; } // 800F8A44
  c->r[3]=R8(c->r[30]+0x00000074u); // 800F8A48
  {uint32_t ea=c->r[2]+0xFFFFAA84u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8A4C
  c->r[0]=c->r[3]+0x00000001u; // 800F8A50
  W8(c->r[30]+0x00000074u,c->r[0]); // 800F8A54
  {uint32_t ea=c->r[29]+0x0000011Cu; WF32(ea,c->f[0]);} // 800F8A58
  goto L_800F8AC4; // 800F8A5C
L_800F8A60:;
  c->r[28]=c->r[28]+0x00000001u; // 800F8A60
  cmps(c,0,(int32_t)c->r[28],17); // 800F8A64
  if (crb(c,0)) { IRQCHK(c); goto L_800F8A2C; } // 800F8A68
  goto L_800F8AC4; // 800F8A6C
L_800F8A70:;
  c->lr=0x800F8A74u; f_8024E040(c); // 800F8A70
  {uint32_t ea=c->r[29]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F8A74
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8A78
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800F8A7C
  fcmp(c,0,c->f[1],c->f[0]); // 800F8A80
  {uint32_t ea=c->r[29]+0x0000011Cu; WF32(ea,c->f[1]);} // 800F8A84
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800F8A88
  if (!crb(c,2)) { goto L_800F8A9C; } // 800F8A8C
  c->r[3]=R8(c->r[30]+0x00000074u); // 800F8A90
  c->r[0]=c->r[3]+0x00000001u; // 800F8A94
  W8(c->r[30]+0x00000074u,c->r[0]); // 800F8A98
L_800F8A9C:;
  c->r[29]=0u+0x00000001u; // 800F8A9C
  goto L_800F8AB0; // 800F8AA0
L_800F8AA4:;
  c->r[29]=c->r[29]+0x00000001u; // 800F8AA4
  cmps(c,0,(int32_t)c->r[29],17); // 800F8AA8
  if (!crb(c,0)) { goto L_800F8AC4; } // 800F8AAC
L_800F8AB0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F8AB0
  c->r[4]=c->r[29]|c->r[29]; // 800F8AB4
  c->lr=0x800F8ABCu; f_800F8D38(c); // 800F8AB8
  cmps(c,0,(int32_t)c->r[3],1); // 800F8ABC
  if (crb(c,2)) { IRQCHK(c); goto L_800F8AA4; } // 800F8AC0
L_800F8AC4:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 800F8AC4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800F8AC8
  if (crb(c,2)) { goto L_800F8AD8; } // 800F8ACC
  c->r[3]=c->r[30]|c->r[30]; // 800F8AD0
  c->lr=0x800F8AD8u; f_800F952C(c); // 800F8AD4
L_800F8AD8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F8AD8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F8ADC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F8AE0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F8AE4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F8AE8
  c->lr=c->r[0]; // 800F8AEC
  c->r[1]=c->r[1]+0x00000020u; // 800F8AF0
  return; // 800F8AF4
}

// fn_800F8AF8
void f_800F8AF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8AF8
  c->r[0]=c->lr; // 800F8AFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F8B00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F8B04
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F8B08
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F8B0C
  c->r[29]=c->r[3]|c->r[3]; // 800F8B10
  c->r[0]=R8(c->r[3]+0x00000074u); // 800F8B14
  c->r[31]=R32(c->r[3]+0x000000ACu); // 800F8B18
  cmps(c,0,(int32_t)c->r[0],1); // 800F8B1C
  c->r[30]=R8(c->r[3]+0x00000076u); // 800F8B20
  if (crb(c,2)) { goto L_800F8BD0; } // 800F8B24
  if (!crb(c,0)) { goto L_800F8BF8; } // 800F8B28
  cmps(c,0,(int32_t)c->r[0],0); // 800F8B2C
  if (!crb(c,0)) { goto L_800F8B38; } // 800F8B30
  goto L_800F8BF8; // 800F8B34
L_800F8B38:;
  c->lr=0x800F8B3Cu; f_800F988C(c); // 800F8B38
  c->r[3]=c->r[29]|c->r[29]; // 800F8B3C
  c->lr=0x800F8B44u; f_800F915C(c); // 800F8B40
  c->r[6]=0u+0x00000000u; // 800F8B44
  c->r[7]=0u+0x00000010u; // 800F8B48
  W8(c->r[31]+0x000001A8u,c->r[6]); // 800F8B4C
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)80); // 800F8B50
  c->r[3]=0u+0x80620000u; // 800F8B54
  {uint32_t ea=c->r[2]+0xFFFFAA88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F8B58
  W8(c->r[31]+0x000001F8u,c->r[6]); // 800F8B5C
  c->r[4]=0u+0x00000065u; // 800F8B60
  c->r[5]=c->r[31]+c->r[0]; // 800F8B64
  W8(c->r[31]+0x00000248u,c->r[6]); // 800F8B68
  c->r[3]=c->r[3]+0x00007688u; // 800F8B6C
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8B70
  W8(c->r[31]+0x00000298u,c->r[6]); // 800F8B74
  W8(c->r[31]+0x000002E8u,c->r[6]); // 800F8B78
  W8(c->r[31]+0x00000338u,c->r[6]); // 800F8B7C
  W8(c->r[31]+0x00000388u,c->r[6]); // 800F8B80
  W8(c->r[31]+0x000003D8u,c->r[6]); // 800F8B84
  W8(c->r[31]+0x00000428u,c->r[6]); // 800F8B88
  W8(c->r[31]+0x00000478u,c->r[6]); // 800F8B8C
  W8(c->r[31]+0x000004C8u,c->r[6]); // 800F8B90
  W8(c->r[31]+0x00000518u,c->r[6]); // 800F8B94
  W8(c->r[31]+0x00000568u,c->r[6]); // 800F8B98
  W8(c->r[31]+0x000005B8u,c->r[6]); // 800F8B9C
  W8(c->r[31]+0x00000608u,c->r[6]); // 800F8BA0
  W8(c->r[31]+0x00000658u,c->r[6]); // 800F8BA4
  W8(c->r[5]+0x000001A8u,c->r[6]); // 800F8BA8
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[1]);} // 800F8BAC
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[0]);} // 800F8BB0
  W8(c->r[31]+0x00000208u,c->r[7]); // 800F8BB4
  c->r[3]=R32(c->r[3]+0x00000014u); // 800F8BB8
  c->lr=0x800F8BC0u; f_8003560C(c); // 800F8BBC
  W8(c->r[31]+0x000001F9u,c->r[3]); // 800F8BC0
  c->r[3]=R8(c->r[29]+0x00000074u); // 800F8BC4
  c->r[0]=c->r[3]+0x00000001u; // 800F8BC8
  W8(c->r[29]+0x00000074u,c->r[0]); // 800F8BCC
L_800F8BD0:;
  c->r[31]=0u+0x00000001u; // 800F8BD0
  goto L_800F8BE4; // 800F8BD4
L_800F8BD8:;
  c->r[31]=c->r[31]+0x00000001u; // 800F8BD8
  cmps(c,0,(int32_t)c->r[31],17); // 800F8BDC
  if (!crb(c,0)) { goto L_800F8BF8; } // 800F8BE0
L_800F8BE4:;
  c->r[3]=c->r[29]|c->r[29]; // 800F8BE4
  c->r[4]=c->r[31]|c->r[31]; // 800F8BE8
  c->lr=0x800F8BF0u; f_800F8D38(c); // 800F8BEC
  cmps(c,0,(int32_t)c->r[3],1); // 800F8BF0
  if (crb(c,2)) { IRQCHK(c); goto L_800F8BD8; } // 800F8BF4
L_800F8BF8:;
  c->r[0]=R8(c->r[29]+0x00000076u); // 800F8BF8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800F8BFC
  if (crb(c,2)) { goto L_800F8C0C; } // 800F8C00
  c->r[3]=c->r[29]|c->r[29]; // 800F8C04
  c->lr=0x800F8C0Cu; f_800F952C(c); // 800F8C08
L_800F8C0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F8C0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F8C10
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F8C14
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F8C18
  c->lr=c->r[0]; // 800F8C1C
  c->r[1]=c->r[1]+0x00000020u; // 800F8C20
  return; // 800F8C24
}

// fn_800F8C28
void f_800F8C28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8C28
  c->r[0]=c->lr; // 800F8C2C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F8C30
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800F8C34
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800F8C38
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800F8C3C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800F8C40
  {uint32_t ea=c->r[2]+0xFFFFAA8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8C44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F8C48
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F8C4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F8C50
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F8C54
  c->r[28]=c->r[3]|c->r[3]; // 800F8C58
  c->r[4]=R32(c->r[3]+0x00000394u); // 800F8C5C
  c->r[30]=R32(c->r[3]+0x000000ACu); // 800F8C60
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F8C64
  fcmp(c,0,c->f[1],c->f[0]); // 800F8C68
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800F8C6C
  if (!crb(c,2)) { goto L_800F8CE0; } // 800F8C70
  {uint32_t ea=c->r[2]+0xFFFFAA70u; c->f[30]=c->ps1[30]=RF32(ea);} // 800F8C74
  c->r[31]=c->r[30]|c->r[30]; // 800F8C78
  {uint32_t ea=c->r[2]+0xFFFFAA90u; c->f[31]=RF64(ea);} // 800F8C7C
  c->r[29]=0u+0x00000000u; // 800F8C80
L_800F8C84:;
  {uint32_t ea=c->r[31]+0x000001F0u; WF32(ea,c->f[30]);} // 800F8C84
  c->lr=0x800F8C8Cu; f_8024E040(c); // 800F8C88
  c->f[0]=c->f[31]*c->f[1]; // 800F8C8C
  c->r[29]=c->r[29]+0x00000001u; // 800F8C90
  cmps(c,0,(int32_t)c->r[29],17); // 800F8C94
  c->f[0]=-c->f[0]; // 800F8C98
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800F8C9C
  {uint32_t ea=c->r[31]+0x000001F4u; WF32(ea,c->f[0]);} // 800F8CA0
  c->r[31]=c->r[31]+0x00000050u; // 800F8CA4
  if (crb(c,0)) { IRQCHK(c); goto L_800F8C84; } // 800F8CA8
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8CAC
  c->r[4]=0u+0x00000000u; // 800F8CB0
  c->r[3]=0u+0x00000001u; // 800F8CB4
  c->r[0]=0u+0x00000003u; // 800F8CB8
  {uint32_t ea=c->r[30]+0x000001F0u; WF32(ea,c->f[0]);} // 800F8CBC
  {uint32_t ea=c->r[30]+0x000001F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8CC0
  c->f[0]=-c->f[0]; // 800F8CC4
  {uint32_t ea=c->r[30]+0x000001F4u; WF32(ea,c->f[0]);} // 800F8CC8
  W8(c->r[30]+0x00000056u,c->r[4]); // 800F8CCC
  W8(c->r[30]+0x00000057u,c->r[4]); // 800F8CD0
  W8(c->r[28]+0x00000074u,c->r[3]); // 800F8CD4
  W8(c->r[28]+0x00000075u,c->r[4]); // 800F8CD8
  W8(c->r[30]+0x00000059u,c->r[0]); // 800F8CDC
L_800F8CE0:;
  c->r[31]=0u+0x00000001u; // 800F8CE0
  goto L_800F8CF4; // 800F8CE4
L_800F8CE8:;
  c->r[31]=c->r[31]+0x00000001u; // 800F8CE8
  cmps(c,0,(int32_t)c->r[31],17); // 800F8CEC
  if (!crb(c,0)) { goto L_800F8D08; } // 800F8CF0
L_800F8CF4:;
  c->r[3]=c->r[28]|c->r[28]; // 800F8CF4
  c->r[4]=c->r[31]|c->r[31]; // 800F8CF8
  c->lr=0x800F8D00u; f_800F8D38(c); // 800F8CFC
  cmps(c,0,(int32_t)c->r[3],1); // 800F8D00
  if (crb(c,2)) { IRQCHK(c); goto L_800F8CE8; } // 800F8D04
L_800F8D08:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800F8D08
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800F8D0C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800F8D10
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800F8D14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F8D18
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F8D1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F8D20
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F8D24
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F8D28
  c->lr=c->r[0]; // 800F8D2C
  c->r[1]=c->r[1]+0x00000040u; // 800F8D30
  return; // 800F8D34
}

// fn_800F8D38
void f_800F8D38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8D38
  c->r[0]=c->lr; // 800F8D3C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800F8D40
  c->r[11]=c->r[1]+0x000000D0u; // 800F8D44
  c->lr=0x800F8D4Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F8D48
  c->r[25]=(uint32_t)((int32_t)c->r[4]*(int32_t)80); // 800F8D4C
  c->r[31]=R32(c->r[3]+0x000000ACu); // 800F8D50
  c->r[27]=c->r[3]|c->r[3]; // 800F8D54
  c->r[28]=c->r[4]|c->r[4]; // 800F8D58
  c->r[5]=c->r[31]+c->r[25]; // 800F8D5C
  c->r[29]=0u+0x00000000u; // 800F8D60
  c->r[0]=R8(c->r[5]+0x000001A8u); // 800F8D64
  c->r[30]=c->r[5]+0x000001A8u; // 800F8D68
  cmps(c,0,(int32_t)c->r[0],2); // 800F8D6C
  if (crb(c,2)) { goto L_800F8F24; } // 800F8D70
  if (!crb(c,0)) { goto L_800F8D88; } // 800F8D74
  cmps(c,0,(int32_t)c->r[0],0); // 800F8D78
  if (crb(c,2)) { goto L_800F8D94; } // 800F8D7C
  if (!crb(c,0)) { goto L_800F8EDC; } // 800F8D80
  goto L_800F8F6C; // 800F8D84
L_800F8D88:;
  cmps(c,0,(int32_t)c->r[0],99); // 800F8D88
  if (crb(c,2)) { goto L_800F8F48; } // 800F8D8C
  goto L_800F8F6C; // 800F8D90
L_800F8D94:;
  c->r[0]=R8(c->r[31]+0x00000057u); // 800F8D94
  cmpu(c,0,c->r[0],0x00000002u); // 800F8D98
  if (!crb(c,2)) { goto L_800F8DAC; } // 800F8D9C
  c->r[5]=0u+0x000000F0u; // 800F8DA0
  c->lr=0x800F8DA8u; f_800F97DC(c); // 800F8DA4
  goto L_800F8DF0; // 800F8DA8
L_800F8DAC:;
  c->r[5]=0u+0x00000000u; // 800F8DAC
  c->lr=0x800F8DB4u; f_800F97DC(c); // 800F8DB0
  c->r[26]=0u+0x805D0000u; // 800F8DB4
  c->r[4]=0u+0x00000004u; // 800F8DB8
  c->r[3]=c->r[26]+0x00006D70u; // 800F8DBC
  c->r[5]=0u+0x00000007u; // 800F8DC0
  c->r[6]=0u+0x00000000u; // 800F8DC4
  c->r[7]=0u+0x00000000u; // 800F8DC8
  c->r[8]=0u+0x00000000u; // 800F8DCC
  c->lr=0x800F8DD4u; f_8022AC00(c); // 800F8DD0
  c->r[3]=c->r[26]+0x00006D70u; // 800F8DD4
  c->r[4]=0u+0x00000004u; // 800F8DD8
  c->r[5]=0u+0x00000006u; // 800F8DDC
  c->r[6]=0u+0x00000000u; // 800F8DE0
  c->r[7]=0u+0x00000000u; // 800F8DE4
  c->r[8]=0u+0x00000000u; // 800F8DE8
  c->lr=0x800F8DF0u; f_8022AC00(c); // 800F8DEC
L_800F8DF0:;
  {uint32_t ea=c->r[2]+0xFFFFAA70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F8DF0
  c->r[3]=c->r[27]|c->r[27]; // 800F8DF4
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8DF8
  c->r[4]=c->r[28]|c->r[28]; // 800F8DFC
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800F8E00
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800F8E04
  c->lr=0x800F8E0Cu; f_800F92B0(c); // 800F8E08
  W8(c->r[30]+0x00000002u,c->r[3]); // 800F8E0C
  c->r[3]=c->r[27]|c->r[27]; // 800F8E10
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8E14
  c->r[4]=c->r[28]|c->r[28]; // 800F8E18
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800F8E1C
  c->lr=0x800F8E24u; f_800F9040(c); // 800F8E20
  c->r[3]=c->r[30]+0x00000030u; // 800F8E24
  c->r[4]=c->r[1]+0x0000002Cu; // 800F8E28
  c->lr=0x800F8E30u; f_8024F6C0(c); // 800F8E2C
  c->r[3]=c->r[1]+0x00000020u; // 800F8E30
  c->r[4]=c->r[30]+0x00000018u; // 800F8E34
  c->lr=0x800F8E3Cu; f_800361A0(c); // 800F8E38
  c->r[7]=0u+0x803A0000u; // 800F8E3C
  {uint32_t ea=c->r[7]+0xFFFFF084u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F8E40
  c->r[3]=c->r[1]+0x00000038u; // 800F8E44
  c->r[4]=c->r[1]+0x00000014u; // 800F8E48
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F8E4C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F8E50
  W32(c->r[1]+0x00000014u,c->r[6]); // 800F8E54
  W32(c->r[1]+0x00000018u,c->r[5]); // 800F8E58
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F8E5C
  c->lr=0x800F8E64u; f_800361A0(c); // 800F8E60
  c->r[0]=0u+0x00000000u; // 800F8E64
  c->r[3]=c->r[1]+0x00000020u; // 800F8E68
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800F8E6C
  c->lr=0x800F8E74u; f_80251104(c); // 800F8E70
  c->r[4]=R32(c->r[30]+0x00000004u); // 800F8E74
  cmps(c,0,(int32_t)c->r[4],-1); // 800F8E78
  if (crb(c,2)) { goto L_800F8E90; } // 800F8E7C
  c->r[3]=0u+0x80550000u; // 800F8E80
  c->r[5]=c->r[1]+0x00000074u; // 800F8E84
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F8E88
  c->lr=0x800F8E90u; f_8018DEB8(c); // 800F8E8C
L_800F8E90:;
  cmps(c,0,(int32_t)c->r[28],16); // 800F8E90
  if (!crb(c,0)) { goto L_800F8EC0; } // 800F8E94
  c->r[0]=R8(c->r[30]+0x00000002u); // 800F8E98
  cmpu(c,0,c->r[0],0x00000001u); // 800F8E9C
  if (crb(c,0)) { goto L_800F8EC0; } // 800F8EA0
  cmpu(c,0,c->r[0],0x00000080u); // 800F8EA4
  if (crb(c,1)) { goto L_800F8EC0; } // 800F8EA8
  c->r[0]=R8(c->r[30]+0x00000011u); // 800F8EAC
  c->r[3]=c->r[31]+c->r[25]; // 800F8EB0
  W8(c->r[3]+0x00000208u,c->r[0]); // 800F8EB4
  c->r[0]=R8(c->r[30]+0x00000002u); // 800F8EB8
  W8(c->r[3]+0x000001F9u,c->r[0]); // 800F8EBC
L_800F8EC0:;
  c->r[0]=R8(c->r[30]+0x00000002u); // 800F8EC0
  cmpu(c,0,c->r[0],0x000000FFu); // 800F8EC4
  if (!crb(c,2)) { goto L_800F8ED0; } // 800F8EC8
  c->r[29]=0u+0xFFFFFFFFu; // 800F8ECC
L_800F8ED0:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 800F8ED0
  c->r[0]=c->r[3]+0x00000001u; // 800F8ED4
  W8(c->r[30]+0x00000000u,c->r[0]); // 800F8ED8
L_800F8EDC:;
  {uint32_t ea=c->r[31]+0x00000114u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F8EDC
  {uint32_t ea=c->r[31]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F8EE0
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8EE4
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800F8EE8
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800F8EEC
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8EF0
  fcmp(c,0,c->f[1],c->f[0]); // 800F8EF4
  if (crb(c,0)) { goto L_800F8F6C; } // 800F8EF8
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800F8EFC
  c->r[3]=c->r[27]|c->r[27]; // 800F8F00
  c->r[4]=c->r[28]|c->r[28]; // 800F8F04
  c->r[5]=R8(c->r[30]+0x00000002u); // 800F8F08
  c->lr=0x800F8F10u; f_800FA124(c); // 800F8F0C
  {uint32_t ea=c->r[31]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8F10
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 800F8F14
  c->r[3]=R8(c->r[30]+0x00000000u); // 800F8F18
  c->r[0]=c->r[3]+0x00000001u; // 800F8F1C
  W8(c->r[30]+0x00000000u,c->r[0]); // 800F8F20
L_800F8F24:;
  c->lr=0x800F8F28u; f_8024E040(c); // 800F8F24
  {uint32_t ea=c->r[30]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F8F28
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8F2C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800F8F30
  fcmp(c,0,c->f[1],c->f[0]); // 800F8F34
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800F8F38
  if (crb(c,1)) { goto L_800F8F6C; } // 800F8F3C
  c->r[0]=0u+0x00000063u; // 800F8F40
  W8(c->r[30]+0x00000000u,c->r[0]); // 800F8F44
L_800F8F48:;
  c->r[0]=R8(c->r[30]+0x00000002u); // 800F8F48
  cmps(c,0,(int32_t)c->r[0],0); // 800F8F4C
  if (crb(c,2)) { goto L_800F8F58; } // 800F8F50
  c->r[29]=0u+0xFFFFFFFFu; // 800F8F54
L_800F8F58:;
  cmpu(c,0,c->r[0],0x00000001u); // 800F8F58
  if (crb(c,0)) { goto L_800F8F6C; } // 800F8F5C
  cmpu(c,0,c->r[0],0x00000080u); // 800F8F60
  if (crb(c,1)) { goto L_800F8F6C; } // 800F8F64
  c->r[29]=0u+0x00000001u; // 800F8F68
L_800F8F6C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F8F6C
  cmps(c,0,(int32_t)c->r[0],-1); // 800F8F70
  if (crb(c,2)) { goto L_800F9014; } // 800F8F74
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F8F78
  c->r[3]=c->r[30]+0x00000030u; // 800F8F7C
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8F80
  c->r[4]=c->r[1]+0x00000008u; // 800F8F84
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800F8F88
  c->lr=0x800F8F90u; f_80296A94(c); // 800F8F8C
  c->r[4]=c->r[1]+0x00000008u; // 800F8F90
  c->r[3]=c->r[30]+0x00000018u; // 800F8F94
  c->r[5]=c->r[4]|c->r[4]; // 800F8F98
  c->lr=0x800F8FA0u; f_80296A4C(c); // 800F8F9C
  c->r[3]=c->r[31]+0x000000C4u; // 800F8FA0
  c->r[4]=c->r[1]+0x00000008u; // 800F8FA4
  c->lr=0x800F8FACu; f_800361A0(c); // 800F8FA8
  c->r[28]=0u+0x80550000u; // 800F8FAC
  c->r[4]=R32(c->r[30]+0x00000004u); // 800F8FB0
  c->r[5]=R8(c->r[30]+0x00000012u); // 800F8FB4
  c->r[3]=c->r[28]+0xFFFFC848u; // 800F8FB8
  c->r[7]=R8(c->r[30]+0x00000013u); // 800F8FBC
  c->r[6]=c->r[1]+0x00000008u; // 800F8FC0
  c->lr=0x800F8FC8u; f_8018ED34(c); // 800F8FC4
  c->r[4]=R32(c->r[30]+0x00000008u); // 800F8FC8
  cmps(c,0,(int32_t)c->r[4],-1); // 800F8FCC
  if (crb(c,2)) { goto L_800F8FE8; } // 800F8FD0
  c->r[3]=c->r[28]+0xFFFFC848u; // 800F8FD4
  c->r[5]=c->r[1]+0x00000008u; // 800F8FD8
  c->r[6]=0u+0x00000000u; // 800F8FDC
  c->r[7]=0u+0x00000000u; // 800F8FE0
  c->lr=0x800F8FE8u; f_8018DFE0(c); // 800F8FE4
L_800F8FE8:;
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800F8FE8
  cmps(c,0,(int32_t)c->r[4],-1); // 800F8FEC
  if (crb(c,2)) { goto L_800F900C; } // 800F8FF0
  c->r[3]=0u+0x80550000u; // 800F8FF4
  c->r[5]=c->r[1]+0x00000008u; // 800F8FF8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F8FFC
  c->r[6]=0u+0x00000000u; // 800F9000
  c->r[7]=0u+0x00000000u; // 800F9004
  c->lr=0x800F900Cu; f_8018DFE0(c); // 800F9008
L_800F900C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F900C
  c->lr=0x800F9014u; f_800F9650(c); // 800F9010
L_800F9014:;
  cmps(c,0,(int32_t)c->r[29],-1); // 800F9014
  if (!crb(c,2)) { goto L_800F9024; } // 800F9018
  c->r[0]=R8(c->r[30]+0x00000002u); // 800F901C
  W8(c->r[27]+0x00000076u,c->r[0]); // 800F9020
L_800F9024:;
  c->r[11]=c->r[1]+0x000000D0u; // 800F9024
  c->r[3]=c->r[29]|c->r[29]; // 800F9028
  c->lr=0x800F9030u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F902C
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800F9030
  c->lr=c->r[0]; // 800F9034
  c->r[1]=c->r[1]+0x000000D0u; // 800F9038
  return; // 800F903C
}

// fn_800F9040
void f_800F9040(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9040
  c->r[0]=c->lr; // 800F9044
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F9048
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800F904C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800F9050
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800F9054
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 800F9058
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)80); // 800F905C
  c->r[0]=0u+0x00000003u; // 800F9060
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9064
  c->r[31]=0u+0x00000001u; // 800F9068
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F906C
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800F9070
  c->r[30]=c->r[3]+c->r[4]; // 800F9074
  W8(c->r[30]+0x000001BAu,c->r[0]); // 800F9078
  W8(c->r[30]+0x000001BBu,c->r[31]); // 800F907C
  {uint32_t ea=c->r[30]+0x000001D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F9080
  c->lr=0x800F9088u; f_8002C1B0(c); // 800F9084
  c->f[30]=c->f[1]; // 800F9088
  {uint32_t ea=c->r[30]+0x000001DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F908C
  c->lr=0x800F9094u; f_8002C1B0(c); // 800F9090
  c->f[31]=c->f[1]; // 800F9094
  {uint32_t ea=c->r[30]+0x000001E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F9098
  c->lr=0x800F90A0u; f_8002C1B0(c); // 800F909C
  fcmp(c,0,c->f[30],c->f[31]); // 800F90A0
  if (!crb(c,1)) { goto L_800F90B8; } // 800F90A4
  fcmp(c,0,c->f[30],c->f[1]); // 800F90A8
  if (!crb(c,1)) { goto L_800F90C8; } // 800F90AC
  W8(c->r[30]+0x000001BAu,c->r[31]); // 800F90B0
  goto L_800F90C8; // 800F90B4
L_800F90B8:;
  fcmp(c,0,c->f[31],c->f[1]); // 800F90B8
  if (!crb(c,1)) { goto L_800F90C8; } // 800F90BC
  c->r[0]=0u+0x00000002u; // 800F90C0
  W8(c->r[30]+0x000001BAu,c->r[0]); // 800F90C4
L_800F90C8:;
  c->r[0]=R8(c->r[30]+0x000001BAu); // 800F90C8
  cmps(c,0,(int32_t)c->r[0],2); // 800F90CC
  if (crb(c,2)) { goto L_800F9100; } // 800F90D0
  if (!crb(c,0)) { goto L_800F911C; } // 800F90D4
  cmps(c,0,(int32_t)c->r[0],1); // 800F90D8
  if (!crb(c,0)) { goto L_800F90E4; } // 800F90DC
  goto L_800F911C; // 800F90E0
L_800F90E4:;
  {uint32_t ea=c->r[30]+0x000001D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F90E4
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F90E8
  fcmp(c,0,c->f[1],c->f[0]); // 800F90EC
  if (!crb(c,0)) { goto L_800F9134; } // 800F90F0
  c->r[0]=0u+0x00000000u; // 800F90F4
  W8(c->r[30]+0x000001BBu,c->r[0]); // 800F90F8
  goto L_800F9134; // 800F90FC
L_800F9100:;
  {uint32_t ea=c->r[30]+0x000001DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F9100
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9104
  fcmp(c,0,c->f[1],c->f[0]); // 800F9108
  if (!crb(c,0)) { goto L_800F9134; } // 800F910C
  c->r[0]=0u+0x00000000u; // 800F9110
  W8(c->r[30]+0x000001BBu,c->r[0]); // 800F9114
  goto L_800F9134; // 800F9118
L_800F911C:;
  {uint32_t ea=c->r[30]+0x000001E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F911C
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9120
  fcmp(c,0,c->f[1],c->f[0]); // 800F9124
  if (!crb(c,0)) { goto L_800F9134; } // 800F9128
  c->r[0]=0u+0x00000000u; // 800F912C
  W8(c->r[30]+0x000001BBu,c->r[0]); // 800F9130
L_800F9134:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800F9134
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800F9138
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 800F913C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800F9140
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9144
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F9148
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F914C
  c->lr=c->r[0]; // 800F9150
  c->r[1]=c->r[1]+0x00000030u; // 800F9154
  return; // 800F9158
}

// fn_800F915C
void f_800F915C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F915C
  c->r[0]=c->lr; // 800F9160
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F9164
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F9168
  c->r[29]=0u+0x803D0000u; // 800F916C
  c->r[30]=0u+0x80620000u; // 800F9170
  c->r[27]=0u+0x00000000u; // 800F9174
  c->r[29]=c->r[29]+0x00005730u; // 800F9178
  c->r[31]=0u+0x000000FDu; // 800F917C
  c->r[30]=c->r[30]+0x00007688u; // 800F9180
  c->r[28]=R32(c->r[3]+0x000000ACu); // 800F9184
L_800F9188:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 800F9188
  c->r[4]=c->r[27]+0x00000047u; // 800F918C
  c->lr=0x800F9194u; f_8003560C(c); // 800F9190
  cmps(c,0,(int32_t)c->r[3],1024); // 800F9194
  if (!crb(c,2)) { goto L_800F91AC; } // 800F9198
  c->r[0]=R8(c->r[29]+0x00000000u); // 800F919C
  c->r[3]=c->r[28]+c->r[0]; // 800F91A0
  W8(c->r[3]+0x000000DCu,c->r[31]); // 800F91A4
  goto L_800F91B8; // 800F91A8
L_800F91AC:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 800F91AC
  c->r[4]=c->r[28]+c->r[0]; // 800F91B0
  W8(c->r[4]+0x000000DCu,c->r[3]); // 800F91B4
L_800F91B8:;
  c->r[27]=c->r[27]+0x00000001u; // 800F91B8
  c->r[29]=c->r[29]+0x00000001u; // 800F91BC
  cmps(c,0,(int32_t)c->r[27],15); // 800F91C0
  if (crb(c,0)) { IRQCHK(c); goto L_800F9188; } // 800F91C4
  c->r[5]=0u+0x803D0000u; // 800F91C8
  c->r[6]=0u+0x000000FAu; // 800F91CC
  c->r[5]=c->r[5]+0x00005730u; // 800F91D0
  c->r[4]=0u+0x000000FBu; // 800F91D4
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 800F91D8
  c->r[3]=c->r[28]+c->r[0]; // 800F91DC
  W8(c->r[3]+0x000000DCu,c->r[6]); // 800F91E0
  c->r[0]=R8(c->r[5]+0x00000010u); // 800F91E4
  c->r[3]=c->r[28]+c->r[0]; // 800F91E8
  W8(c->r[3]+0x000000DCu,c->r[4]); // 800F91EC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F91F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F91F4
  c->lr=c->r[0]; // 800F91F8
  c->r[1]=c->r[1]+0x00000020u; // 800F91FC
  return; // 800F9200
}

// fn_800F9204
void f_800F9204(Ctx* __restrict c) {
  c->r[7]=0u+0x803D0000u; // 800F9204
  c->r[3]=0u+0x92490000u; // 800F9208
  c->r[7]=c->r[7]+0x00005730u; // 800F920C
  c->r[7]=R8(c->r[7]+c->r[4]); // 800F9210
  c->r[0]=c->r[3]+0x00002493u; // 800F9214
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[7])>>32); // 800F9218
  c->r[0]=c->r[0]+c->r[7]; // 800F921C
  c->r[3]=sraw(c,c->r[0],2); // 800F9220
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 800F9224
  c->r[0]=sraw(c,c->r[0],2); // 800F9228
  c->r[3]=c->r[3]+c->r[4]; // 800F922C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)7); // 800F9230
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800F9234
  c->r[0]=c->r[0]+c->r[3]; // 800F9238
  c->r[3]=c->r[7]-c->r[4]; // 800F923C
  W32(c->r[5]+0x00000000u,c->r[3]); // 800F9240
  W32(c->r[6]+0x00000000u,c->r[0]); // 800F9244
  return; // 800F9248
}

// fn_800F924C
void f_800F924C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800F924C
  if (crb(c,0)) { goto L_800F926C; } // 800F9250
  cmps(c,0,(int32_t)c->r[4],6); // 800F9254
  if (crb(c,1)) { goto L_800F926C; } // 800F9258
  cmps(c,0,(int32_t)c->r[5],0); // 800F925C
  if (crb(c,0)) { goto L_800F926C; } // 800F9260
  cmps(c,0,(int32_t)c->r[5],6); // 800F9264
  if (!crb(c,1)) { goto L_800F9274; } // 800F9268
L_800F926C:;
  c->r[3]=0u+0x00000011u; // 800F926C
  return; // 800F9270
L_800F9274:;
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800F9274
  c->r[6]=0u+0x803D0000u; // 800F9278
  c->r[3]=c->r[0]-c->r[5]; // 800F927C
  c->r[4]=c->r[4]+c->r[3]; // 800F9280
  c->r[0]=0u+0x00000011u; // 800F9284
  c->r[6]=c->r[6]+0x00005730u; // 800F9288
  c->r[3]=0u+0x00000000u; // 800F928C
  c->ctr=c->r[0]; // 800F9290
L_800F9294:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 800F9294
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800F9298
  if (crb(c,2)) return; // 800F929C
  c->r[6]=c->r[6]+0x00000001u; // 800F92A0
  c->r[3]=c->r[3]+0x00000001u; // 800F92A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F9294; } // 800F92A8
  return; // 800F92AC
}

// fn_800F92B0
void f_800F92B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F92B0
  c->r[0]=c->lr; // 800F92B4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F92B8
  c->r[11]=c->r[1]+0x00000050u; // 800F92BC
  c->lr=0x800F92C4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F92C0
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)80); // 800F92C4
  c->r[27]=R32(c->r[3]+0x000000ACu); // 800F92C8
  c->r[0]=0u+0x00000011u; // 800F92CC
  c->r[25]=c->r[3]|c->r[3]; // 800F92D0
  c->r[30]=c->r[27]+c->r[4]; // 800F92D4
  c->r[5]=c->r[1]+0x0000000Cu; // 800F92D8
  W8(c->r[30]+0x000001B9u,c->r[0]); // 800F92DC
  c->r[6]=c->r[1]+0x00000008u; // 800F92E0
  c->r[26]=0u+0x00000000u; // 800F92E4
  c->r[4]=R8(c->r[30]+0x000001B8u); // 800F92E8
  c->lr=0x800F92F0u; f_800F9204(c); // 800F92EC
  c->r[4]=R8(c->r[30]+0x000001A9u); // 800F92F0
  c->r[3]=c->r[25]|c->r[25]; // 800F92F4
  c->lr=0x800F92FCu; f_800F9750(c); // 800F92F8
  c->r[0]=R8(c->r[30]+0x000001B8u); // 800F92FC
  c->r[4]=0u+0x80420000u; // 800F9300
  c->r[31]=c->r[3]|c->r[3]; // 800F9304
  c->r[3]=c->r[30]+0x000001C0u; // 800F9308
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800F930C
  c->r[4]=c->r[4]+0xFFFFA960u; // 800F9310
  c->r[4]=c->r[4]+c->r[0]; // 800F9314
  c->lr=0x800F931Cu; f_800361A0(c); // 800F9318
  cmps(c,0,(int32_t)c->r[31],8); // 800F931C
  if (!crb(c,0)) { goto L_800F93E8; } // 800F9320
  c->r[4]=0u+0x803D0000u; // 800F9324
  c->r[3]=0u+0x803D0000u; // 800F9328
  c->r[3]=c->r[3]+0x00005758u; // 800F932C
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 800F9330
  c->r[4]=c->r[4]+0x00005748u; // 800F9334
  c->r[29]=c->r[4]+c->r[0]; // 800F9338
  c->r[28]=c->r[3]+c->r[31]; // 800F933C
  goto L_800F93E0; // 800F9340
L_800F9344:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 800F9344
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800F9348
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800F934C
  c->r[0]=R8(c->r[29]+0x00000001u); // 800F9350
  c->r[5]=c->r[5]+c->r[4]; cr0(c,c->r[5]); // 800F9354
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F9358
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F935C
  c->r[4]=c->r[3]+c->r[0]; // 800F9360
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F9364
  W32(c->r[1]+0x00000008u,c->r[4]); // 800F9368
  if (crb(c,0)) { goto L_800F93E8; } // 800F936C
  cmps(c,0,(int32_t)c->r[5],6); // 800F9370
  if (crb(c,1)) { goto L_800F93E8; } // 800F9374
  cmps(c,0,(int32_t)c->r[4],0); // 800F9378
  if (crb(c,0)) { goto L_800F93E8; } // 800F937C
  cmps(c,0,(int32_t)c->r[4],6); // 800F9380
  if (crb(c,1)) { goto L_800F93E8; } // 800F9384
  c->r[3]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800F9388
  c->r[0]=c->r[5]+c->r[27]; // 800F938C
  c->r[3]=c->r[3]-c->r[4]; // 800F9390
  c->r[3]=c->r[3]+c->r[0]; // 800F9394
  c->r[4]=R8(c->r[3]+0x000000DCu); // 800F9398
  cmps(c,0,(int32_t)c->r[4],252); // 800F939C
  if (crb(c,2)) { goto L_800F93D0; } // 800F93A0
  if (!crb(c,0)) { goto L_800F93C0; } // 800F93A4
  cmps(c,0,(int32_t)c->r[4],0); // 800F93A8
  if (crb(c,2)) { goto L_800F93E0; } // 800F93AC
  if (crb(c,0)) { goto L_800F93D0; } // 800F93B0
  cmps(c,0,(int32_t)c->r[4],250); // 800F93B4
  if (!crb(c,0)) { goto L_800F93C8; } // 800F93B8
  goto L_800F93D0; // 800F93BC
L_800F93C0:;
  cmps(c,0,(int32_t)c->r[4],255); // 800F93C0
  if (!crb(c,0)) { goto L_800F93D0; } // 800F93C4
L_800F93C8:;
  c->r[26]=c->r[4]|c->r[4]; // 800F93C8
  goto L_800F93E0; // 800F93CC
L_800F93D0:;
  c->r[3]=c->r[25]|c->r[25]; // 800F93D0
  c->lr=0x800F93D8u; f_800F9750(c); // 800F93D4
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800F93D8
  c->r[26]=R8(c->r[28]+c->r[0]); // 800F93DC
L_800F93E0:;
  cmps(c,0,(int32_t)c->r[26],0); // 800F93E0
  if (crb(c,2)) { IRQCHK(c); goto L_800F9344; } // 800F93E4
L_800F93E8:;
  cmps(c,0,(int32_t)c->r[26],0); // 800F93E8
  if (crb(c,2)) { goto L_800F9404; } // 800F93EC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800F93F0
  c->r[3]=c->r[25]|c->r[25]; // 800F93F4
  c->r[5]=R32(c->r[1]+0x00000008u); // 800F93F8
  c->lr=0x800F9400u; f_800F924C(c); // 800F93FC
  W8(c->r[30]+0x000001B9u,c->r[3]); // 800F9400
L_800F9404:;
  c->r[0]=R8(c->r[30]+0x000001B9u); // 800F9404
  cmpu(c,0,c->r[0],0x00000011u); // 800F9408
  if (crb(c,2)) { goto L_800F942C; } // 800F940C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800F9410
  c->r[4]=0u+0x80420000u; // 800F9414
  c->r[3]=c->r[30]+0x000001CCu; // 800F9418
  c->r[4]=c->r[4]+0xFFFFA960u; // 800F941C
  c->r[4]=c->r[4]+c->r[0]; // 800F9420
  c->lr=0x800F9428u; f_800361A0(c); // 800F9424
  goto L_800F94F4; // 800F9428
L_800F942C:;
  c->r[26]=0u+0x80420000u; // 800F942C
  c->r[3]=c->r[25]|c->r[25]; // 800F9430
  c->r[26]=c->r[26]+0xFFFFA960u; // 800F9434
  c->r[5]=c->r[1]+0x0000000Cu; // 800F9438
  c->r[8]=R32(c->r[26]+0x00000048u); // 800F943C
  c->r[6]=c->r[1]+0x00000008u; // 800F9440
  c->r[7]=R32(c->r[26]+0x0000004Cu); // 800F9444
  c->r[4]=0u+0x00000006u; // 800F9448
  c->r[0]=R32(c->r[26]+0x00000050u); // 800F944C
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800F9450
  W32(c->r[1]+0x00000020u,c->r[7]); // 800F9454
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F9458
  c->lr=0x800F9460u; f_800F9204(c); // 800F945C
  c->r[4]=0u+0x803D0000u; // 800F9460
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 800F9464
  c->r[4]=c->r[4]+0x00005748u; // 800F9468
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800F946C
  c->r[3]=c->r[4]+c->r[0]; // 800F9470
  c->r[4]=R8(c->r[4]+c->r[0]); // 800F9474
  c->r[0]=R8(c->r[3]+0x00000001u); // 800F9478
  c->r[3]=c->r[25]|c->r[25]; // 800F947C
  c->r[5]=R32(c->r[1]+0x00000008u); // 800F9480
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800F9484
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F9488
  c->r[4]=c->r[6]+c->r[4]; // 800F948C
  c->r[5]=c->r[5]+c->r[0]; // 800F9490
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800F9494
  W32(c->r[1]+0x00000008u,c->r[5]); // 800F9498
  c->lr=0x800F94A0u; f_800F924C(c); // 800F949C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800F94A0
  c->r[4]=c->r[1]+0x0000001Cu; // 800F94A4
  c->r[3]=c->r[1]+0x00000010u; // 800F94A8
  c->r[5]=c->r[4]|c->r[4]; // 800F94AC
  c->r[8]=c->r[26]+c->r[0]; // 800F94B0
  c->r[7]=R32(c->r[26]+c->r[0]); // 800F94B4
  c->r[6]=R32(c->r[8]+0x00000004u); // 800F94B8
  c->r[0]=R32(c->r[8]+0x00000008u); // 800F94BC
  W32(c->r[1]+0x00000010u,c->r[7]); // 800F94C0
  W32(c->r[1]+0x00000014u,c->r[6]); // 800F94C4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F94C8
  c->lr=0x800F94D0u; f_80296A70(c); // 800F94CC
  c->r[3]=c->r[1]+0x0000001Cu; // 800F94D0
  {uint32_t ea=c->r[2]+0xFFFFAA98u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F94D4
  c->r[4]=c->r[3]|c->r[3]; // 800F94D8
  c->lr=0x800F94E0u; f_80296A94(c); // 800F94DC
  c->r[3]=c->r[30]+0x000001C0u; // 800F94E0
  c->r[4]=c->r[1]+0x0000001Cu; // 800F94E4
  c->r[5]=c->r[30]+0x000001CCu; // 800F94E8
  c->lr=0x800F94F0u; f_80296A4C(c); // 800F94EC
  c->r[26]=0u+0x000000FFu; // 800F94F0
L_800F94F4:;
  c->r[3]=c->r[30]+0x000001CCu; // 800F94F4
  c->r[4]=c->r[30]+0x000001C0u; // 800F94F8
  c->r[5]=c->r[30]+0x000001D8u; // 800F94FC
  c->lr=0x800F9504u; f_80296A70(c); // 800F9500
  c->r[3]=c->r[30]+0x000001D8u; // 800F9504
  c->lr=0x800F950Cu; f_80296B0C(c); // 800F9508
  {uint32_t ea=c->r[30]+0x000001E4u; WF32(ea,c->f[1]);} // 800F950C
  c->r[11]=c->r[1]+0x00000050u; // 800F9510
  c->r[3]=c->r[26]|c->r[26]; // 800F9514
  c->lr=0x800F951Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F9518
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F951C
  c->lr=c->r[0]; // 800F9520
  c->r[1]=c->r[1]+0x00000050u; // 800F9524
  return; // 800F9528
}

// fn_800F952C
void f_800F952C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F952C
  c->r[0]=c->lr; // 800F9530
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9534
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9538
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F953C
  c->r[0]=R8(c->r[3]+0x00000076u); // 800F9540
  c->r[30]=R32(c->r[3]+0x000000ACu); // 800F9544
  cmps(c,0,(int32_t)c->r[0],250); // 800F9548
  if (crb(c,2)) { goto L_800F9570; } // 800F954C
  if (!crb(c,0)) { goto L_800F9560; } // 800F9550
  cmps(c,0,(int32_t)c->r[0],0); // 800F9554
  if (crb(c,2)) { goto L_800F9638; } // 800F9558
  goto L_800F9618; // 800F955C
L_800F9560:;
  cmps(c,0,(int32_t)c->r[0],255); // 800F9560
  if (crb(c,2)) { goto L_800F95E4; } // 800F9564
  if (!crb(c,0)) { goto L_800F9618; } // 800F9568
  goto L_800F95C4; // 800F956C
L_800F9570:;
  c->r[0]=0u+0x00000001u; // 800F9570
  c->r[3]=0u+0x805D0000u; // 800F9574
  W8(c->r[30]+0x00000059u,c->r[0]); // 800F9578
  c->r[3]=c->r[3]+0x00006D70u; // 800F957C
  c->r[4]=0u+0x00000004u; // 800F9580
  c->r[5]=0u+0x00000007u; // 800F9584
  c->r[6]=0u+0x00000000u; // 800F9588
  c->r[7]=0u+0x00000000u; // 800F958C
  c->r[8]=0u+0x00000000u; // 800F9590
  c->lr=0x800F9598u; f_8022AC00(c); // 800F9594
  c->r[31]=0u+0x80620000u; // 800F9598
  c->r[4]=0u+0x00000023u; // 800F959C
  c->r[31]=c->r[31]+0x00007688u; // 800F95A0
  c->r[5]=0u+0x00000001u; // 800F95A4
  c->r[3]=R32(c->r[31]+0x00000014u); // 800F95A8
  c->lr=0x800F95B0u; f_80038998(c); // 800F95AC
  c->r[3]=R32(c->r[31]+0x00000014u); // 800F95B0
  c->r[4]=0u+0x00000024u; // 800F95B4
  c->r[5]=0u+0x00000001u; // 800F95B8
  c->lr=0x800F95C0u; f_80038998(c); // 800F95BC
  goto L_800F9638; // 800F95C0
L_800F95C4:;
  c->r[3]=0u+0x805D0000u; // 800F95C4
  c->r[4]=0u+0x00000004u; // 800F95C8
  c->r[3]=c->r[3]+0x00006D70u; // 800F95CC
  c->r[5]=0u+0x00000006u; // 800F95D0
  c->r[6]=0u+0x00000000u; // 800F95D4
  c->r[7]=0u+0x00000000u; // 800F95D8
  c->r[8]=0u+0x00000000u; // 800F95DC
  c->lr=0x800F95E4u; f_8022AC00(c); // 800F95E0
L_800F95E4:;
  c->r[0]=0u+0x00000003u; // 800F95E4
  c->r[31]=0u+0x80620000u; // 800F95E8
  W8(c->r[30]+0x00000059u,c->r[0]); // 800F95EC
  c->r[31]=c->r[31]+0x00007688u; // 800F95F0
  c->r[4]=0u+0x00000023u; // 800F95F4
  c->r[5]=0u+0x00000001u; // 800F95F8
  c->r[3]=R32(c->r[31]+0x00000014u); // 800F95FC
  c->lr=0x800F9604u; f_80038998(c); // 800F9600
  c->r[3]=R32(c->r[31]+0x00000014u); // 800F9604
  c->r[4]=0u+0x00000024u; // 800F9608
  c->r[5]=0u+0x00000002u; // 800F960C
  c->lr=0x800F9614u; f_80038998(c); // 800F9610
  goto L_800F9638; // 800F9614
L_800F9618:;
  c->r[3]=0u+0x805D0000u; // 800F9618
  c->r[4]=0u+0x00000004u; // 800F961C
  c->r[3]=c->r[3]+0x00006D70u; // 800F9620
  c->r[5]=0u+0x00000006u; // 800F9624
  c->r[6]=0u+0x00000000u; // 800F9628
  c->r[7]=0u+0x00000000u; // 800F962C
  c->r[8]=0u+0x00000000u; // 800F9630
  c->lr=0x800F9638u; f_8022AC00(c); // 800F9634
L_800F9638:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9638
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F963C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F9640
  c->lr=c->r[0]; // 800F9644
  c->r[1]=c->r[1]+0x00000010u; // 800F9648
  return; // 800F964C
}

// fn_800F9650
void f_800F9650(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9650
  c->r[0]=c->lr; // 800F9654
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9658
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F965C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F9660
  c->r[31]=c->r[3]|c->r[3]; // 800F9664
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F9668
  fcmp(c,0,c->f[0],c->f[2]); // 800F966C
  if (crb(c,2)) { goto L_800F973C; } // 800F9670
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F9674
  {uint32_t ea=c->r[2]+0xFFFFAA70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9678
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800F967C
  fcmp(c,0,c->f[1],c->f[0]); // 800F9680
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 800F9684
  if (!crb(c,1)) { goto L_800F9690; } // 800F9688
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 800F968C
L_800F9690:;
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F9690
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9694
  fcmp(c,0,c->f[1],c->f[0]); // 800F9698
  if (!crb(c,0)) { goto L_800F96A4; } // 800F969C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 800F96A0
L_800F96A4:;
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F96A4
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F96A8
  fcmp(c,0,c->f[0],c->f[1]); // 800F96AC
  if (crb(c,2)) { goto L_800F96C0; } // 800F96B0
  {uint32_t ea=c->r[2]+0xFFFFAA70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F96B4
  fcmp(c,0,c->f[0],c->f[1]); // 800F96B8
  if (!crb(c,2)) { goto L_800F96C8; } // 800F96BC
L_800F96C0:;
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F96C0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 800F96C4
L_800F96C8:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800F96C8
  cmps(c,0,(int32_t)c->r[4],-1); // 800F96CC
  if (crb(c,2)) { goto L_800F96FC; } // 800F96D0
  {uint32_t ea=c->r[2]+0xFFFFAA9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F96D4
  c->r[3]=0u+0x80550000u; // 800F96D8
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F96DC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F96E0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800F96E4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800F96E8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800F96EC
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800F96F0
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 800F96F4
  c->lr=0x800F96FCu; f_8018EBA0(c); // 800F96F8
L_800F96FC:;
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F96FC
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9700
  fcmp(c,0,c->f[1],c->f[0]); // 800F9704
  if (!crb(c,2)) { goto L_800F973C; } // 800F9708
  c->r[3]=R32(c->r[31]+0x00000008u); // 800F970C
  cmps(c,0,(int32_t)c->r[3],-1); // 800F9710
  if (crb(c,2)) { goto L_800F9724; } // 800F9714
  c->lr=0x800F971Cu; f_8012FB70(c); // 800F9718
  c->r[0]=0u+0xFFFFFFFFu; // 800F971C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800F9720
L_800F9724:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800F9724
  cmps(c,0,(int32_t)c->r[3],-1); // 800F9728
  if (crb(c,2)) { goto L_800F973C; } // 800F972C
  c->lr=0x800F9734u; f_8012FB70(c); // 800F9730
  c->r[0]=0u+0xFFFFFFFFu; // 800F9734
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800F9738
L_800F973C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F973C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F9740
  c->lr=c->r[0]; // 800F9744
  c->r[1]=c->r[1]+0x00000020u; // 800F9748
  return; // 800F974C
}

// fn_800F9750
void f_800F9750(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800F9750
  c->r[5]=0u+0x00000001u; // 800F9754
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 800F9758
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800F975C
  if (!crb(c,2)) return; // 800F9760
  c->r[3]=0u+0x00000001u; // 800F9764
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 800F9768
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800F976C
  if (!crb(c,2)) return; // 800F9770
  c->r[3]=0u+0x00000002u; // 800F9774
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 800F9778
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800F977C
  if (!crb(c,2)) return; // 800F9780
  c->r[3]=0u+0x00000003u; // 800F9784
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 800F9788
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800F978C
  if (!crb(c,2)) return; // 800F9790
  c->r[3]=0u+0x00000004u; // 800F9794
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 800F9798
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800F979C
  if (!crb(c,2)) return; // 800F97A0
  c->r[3]=0u+0x00000005u; // 800F97A4
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 800F97A8
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800F97AC
  if (!crb(c,2)) return; // 800F97B0
  c->r[3]=0u+0x00000006u; // 800F97B4
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 800F97B8
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800F97BC
  if (!crb(c,2)) return; // 800F97C0
  c->r[3]=0u+0x00000007u; // 800F97C4
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 800F97C8
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800F97CC
  if (!crb(c,2)) return; // 800F97D0
  c->r[3]=0u+0x00000008u; // 800F97D4
  return; // 800F97D8
}

// fn_800F97DC
void f_800F97DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F97DC
  c->r[0]=c->lr; // 800F97E0
  cmps(c,0,(int32_t)c->r[4],0); // 800F97E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F97E8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F97EC
  c->r[29]=c->r[4]|c->r[4]; // 800F97F0
  c->r[27]=c->r[5]|c->r[5]; // 800F97F4
  c->r[28]=R32(c->r[3]+0x000000ACu); // 800F97F8
  if (crb(c,2)) { goto L_800F9804; } // 800F97FC
  goto L_800F9834; // 800F9800
L_800F9804:;
  c->lr=0x800F9808u; f_800F98D8(c); // 800F9804
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)80); // 800F9808
  c->r[4]=0u+0x803A0000u; // 800F980C
  c->r[6]=c->r[27]|c->r[27]; // 800F9810
  c->r[4]=c->r[4]+0xFFFFF130u; // 800F9814
  c->r[30]=c->r[28]+c->r[0]; // 800F9818
  c->r[5]=0u+0x00000000u; // 800F981C
  c->r[3]=R32(c->r[30]+0x000001ACu); // 800F9820
  c->r[4]=c->r[4]+0x0000001Du; // 800F9824
  c->lr=0x800F982Cu; f_8012FAE0(c); // 800F9828
  W32(c->r[30]+0x000001ACu,c->r[3]); // 800F982C
  goto L_800F9878; // 800F9830
L_800F9834:;
  c->lr=0x800F9838u; f_800F98D8(c); // 800F9834
  c->r[29]=(uint32_t)((int32_t)c->r[29]*(int32_t)80); // 800F9838
  c->r[30]=0u+0x803A0000u; // 800F983C
  c->r[6]=c->r[27]|c->r[27]; // 800F9840
  c->r[30]=c->r[30]+0xFFFFF130u; // 800F9844
  c->r[31]=c->r[28]+c->r[29]; // 800F9848
  c->r[5]=0u+0x00000000u; // 800F984C
  c->r[3]=R32(c->r[31]+0x000001ACu); // 800F9850
  c->r[4]=c->r[30]+0x00000021u; // 800F9854
  c->lr=0x800F985Cu; f_8012FAE0(c); // 800F9858
  W32(c->r[31]+0x000001ACu,c->r[3]); // 800F985C
  c->r[6]=c->r[27]|c->r[27]; // 800F9860
  c->r[4]=c->r[30]+0x00000025u; // 800F9864
  c->r[5]=0u+0x00000000u; // 800F9868
  c->r[3]=R32(c->r[31]+0x000001B0u); // 800F986C
  c->lr=0x800F9874u; f_8012FAE0(c); // 800F9870
  W32(c->r[31]+0x000001B0u,c->r[3]); // 800F9874
L_800F9878:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F9878
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F987C
  c->lr=c->r[0]; // 800F9880
  c->r[1]=c->r[1]+0x00000020u; // 800F9884
  return; // 800F9888
}

// fn_800F988C
void f_800F988C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F988C
  c->r[0]=c->lr; // 800F9890
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9894
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9898
  c->r[31]=0u+0x00000000u; // 800F989C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F98A0
  c->r[30]=c->r[3]|c->r[3]; // 800F98A4
L_800F98A8:;
  c->r[3]=c->r[30]|c->r[30]; // 800F98A8
  c->r[4]=c->r[31]|c->r[31]; // 800F98AC
  c->lr=0x800F98B4u; f_800F98D8(c); // 800F98B0
  c->r[31]=c->r[31]+0x00000001u; // 800F98B4
  cmps(c,0,(int32_t)c->r[31],17); // 800F98B8
  if (crb(c,0)) { IRQCHK(c); goto L_800F98A8; } // 800F98BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F98C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F98C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F98C8
  c->lr=c->r[0]; // 800F98CC
  c->r[1]=c->r[1]+0x00000010u; // 800F98D0
  return; // 800F98D4
}

// fn_800F98D8
void f_800F98D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F98D8
  c->r[0]=c->lr; // 800F98DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F98E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F98E4
  c->r[31]=(uint32_t)((int32_t)c->r[4]*(int32_t)80); // 800F98E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F98EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F98F0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F98F4
  c->r[28]=R32(c->r[3]+0x000000ACu); // 800F98F8
  c->r[29]=c->r[28]+c->r[31]; // 800F98FC
  c->r[3]=R32(c->r[29]+0x000001ACu); // 800F9900
  c->lr=0x800F9908u; f_8012FBB4(c); // 800F9904
  c->r[3]=R32(c->r[29]+0x000001B0u); // 800F9908
  c->r[30]=c->r[29]|c->r[29]; // 800F990C
  c->lr=0x800F9914u; f_8012FBB4(c); // 800F9910
  c->r[31]=c->r[28]+c->r[31]; // 800F9914
  c->r[3]=R32(c->r[31]+0x000001B4u); // 800F9918
  c->lr=0x800F9920u; f_8012FBB4(c); // 800F991C
  c->r[0]=0u+0xFFFFFFFFu; // 800F9920
  W32(c->r[31]+0x000001B4u,c->r[0]); // 800F9924
  W32(c->r[30]+0x000001B0u,c->r[0]); // 800F9928
  W32(c->r[29]+0x000001ACu,c->r[0]); // 800F992C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F9930
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F9934
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F9938
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F993C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F9940
  c->lr=c->r[0]; // 800F9944
  c->r[1]=c->r[1]+0x00000020u; // 800F9948
  return; // 800F994C
}

// fn_800F9950
void f_800F9950(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9950
  c->r[0]=c->lr; // 800F9954
  W32(c->r[1]+0x00000074u,c->r[0]); // 800F9958
  c->r[0]=0u+0x00000000u; // 800F995C
  c->r[4]=c->r[1]+0x00000050u; // 800F9960
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800F9964
  c->r[31]=0u+0x803A0000u; // 800F9968
  c->r[31]=c->r[31]+0xFFFFF028u; // 800F996C
  W32(c->r[1]+0x00000068u,c->r[30]); // 800F9970
  c->r[5]=c->r[31]+0x00000068u; // 800F9974
  W8(c->r[3]+0x00000077u,c->r[0]); // 800F9978
  c->r[30]=R32(c->r[3]+0x000000ACu); // 800F997C
  W8(c->r[3]+0x00000078u,c->r[0]); // 800F9980
  c->r[3]=c->r[30]+0x00000060u; // 800F9984
  W8(c->r[30]+0x00000059u,c->r[0]); // 800F9988
  W8(c->r[30]+0x0000005Au,c->r[0]); // 800F998C
  c->r[7]=R32(c->r[31]+0x00000068u); // 800F9990
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F9994
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F9998
  W32(c->r[1]+0x00000050u,c->r[7]); // 800F999C
  W32(c->r[1]+0x00000054u,c->r[6]); // 800F99A0
  W32(c->r[1]+0x00000058u,c->r[0]); // 800F99A4
  c->lr=0x800F99ACu; f_800361A0(c); // 800F99A8
  c->r[4]=c->r[31]+0x00000074u; // 800F99AC
  c->r[6]=R32(c->r[31]+0x00000074u); // 800F99B0
  c->r[5]=R32(c->r[4]+0x00000004u); // 800F99B4
  c->r[3]=c->r[30]+0x0000006Cu; // 800F99B8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F99BC
  c->r[4]=c->r[1]+0x00000044u; // 800F99C0
  W32(c->r[1]+0x00000044u,c->r[6]); // 800F99C4
  W32(c->r[1]+0x00000048u,c->r[5]); // 800F99C8
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800F99CC
  c->lr=0x800F99D4u; f_800361A0(c); // 800F99D0
  c->r[4]=c->r[31]+0x00000080u; // 800F99D4
  c->r[6]=R32(c->r[31]+0x00000080u); // 800F99D8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800F99DC
  c->r[3]=c->r[30]+0x00000078u; // 800F99E0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F99E4
  c->r[4]=c->r[1]+0x00000038u; // 800F99E8
  W32(c->r[1]+0x00000038u,c->r[6]); // 800F99EC
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 800F99F0
  W32(c->r[1]+0x00000040u,c->r[0]); // 800F99F4
  c->lr=0x800F99FCu; f_800361A0(c); // 800F99F8
  c->r[4]=c->r[31]+0x0000008Cu; // 800F99FC
  c->r[6]=R32(c->r[31]+0x0000008Cu); // 800F9A00
  c->r[5]=R32(c->r[4]+0x00000004u); // 800F9A04
  c->r[3]=c->r[30]+0x00000084u; // 800F9A08
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F9A0C
  c->r[4]=c->r[1]+0x0000002Cu; // 800F9A10
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800F9A14
  W32(c->r[1]+0x00000030u,c->r[5]); // 800F9A18
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F9A1C
  c->lr=0x800F9A24u; f_800361A0(c); // 800F9A20
  c->r[4]=c->r[31]+0x00000098u; // 800F9A24
  c->r[6]=R32(c->r[31]+0x00000098u); // 800F9A28
  c->r[5]=R32(c->r[4]+0x00000004u); // 800F9A2C
  c->r[3]=c->r[30]+0x00000090u; // 800F9A30
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F9A34
  c->r[4]=c->r[1]+0x00000020u; // 800F9A38
  W32(c->r[1]+0x00000020u,c->r[6]); // 800F9A3C
  W32(c->r[1]+0x00000024u,c->r[5]); // 800F9A40
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F9A44
  c->lr=0x800F9A4Cu; f_800361A0(c); // 800F9A48
  c->r[4]=c->r[31]+0x000000A4u; // 800F9A4C
  c->r[6]=R32(c->r[31]+0x000000A4u); // 800F9A50
  c->r[5]=R32(c->r[4]+0x00000004u); // 800F9A54
  c->r[3]=c->r[30]+0x0000009Cu; // 800F9A58
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F9A5C
  c->r[4]=c->r[1]+0x00000014u; // 800F9A60
  W32(c->r[1]+0x00000014u,c->r[6]); // 800F9A64
  W32(c->r[1]+0x00000018u,c->r[5]); // 800F9A68
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F9A6C
  c->lr=0x800F9A74u; f_800361A0(c); // 800F9A70
  c->r[4]=c->r[31]+0x000000B0u; // 800F9A74
  c->r[6]=R32(c->r[31]+0x000000B0u); // 800F9A78
  c->r[5]=R32(c->r[4]+0x00000004u); // 800F9A7C
  c->r[3]=c->r[30]+0x000000A8u; // 800F9A80
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F9A84
  c->r[4]=c->r[1]+0x00000008u; // 800F9A88
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F9A8C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F9A90
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F9A94
  c->lr=0x800F9A9Cu; f_800361A0(c); // 800F9A98
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9A9C
  c->r[0]=0u+0xFFFFFFFFu; // 800F9AA0
  {uint32_t ea=c->r[30]+0x000000B4u; WF32(ea,c->f[0]);} // 800F9AA4
  W32(c->r[30]+0x000000B8u,c->r[0]); // 800F9AA8
  W32(c->r[30]+0x000000BCu,c->r[0]); // 800F9AAC
  W32(c->r[30]+0x000000C0u,c->r[0]); // 800F9AB0
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800F9AB4
  c->r[30]=R32(c->r[1]+0x00000068u); // 800F9AB8
  c->r[0]=R32(c->r[1]+0x00000074u); // 800F9ABC
  c->lr=c->r[0]; // 800F9AC0
  c->r[1]=c->r[1]+0x00000070u; // 800F9AC4
  return; // 800F9AC8
}

// fn_800F9ACC
void f_800F9ACC(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800F9ACC
  c->r[4]=R8(c->r[5]+0x00000059u); // 800F9AD0
  c->r[0]=R8(c->r[5]+0x0000005Au); // 800F9AD4
  cmpu(c,0,c->r[0],c->r[4]); // 800F9AD8
  if (crb(c,2)) { goto L_800F9AF0; } // 800F9ADC
  W8(c->r[5]+0x0000005Au,c->r[4]); // 800F9AE0
  c->r[0]=0u+0x00000000u; // 800F9AE4
  W8(c->r[3]+0x00000077u,c->r[0]); // 800F9AE8
  W8(c->r[3]+0x00000078u,c->r[0]); // 800F9AEC
L_800F9AF0:;
  c->r[0]=R8(c->r[5]+0x0000005Au); // 800F9AF0
  cmps(c,0,(int32_t)c->r[0],2); // 800F9AF4
  if (crb(c,2)) { goto L_800F9B24; } // 800F9AF8
  if (!crb(c,0)) { goto L_800F9B10; } // 800F9AFC
  cmps(c,0,(int32_t)c->r[0],0); // 800F9B00
  if (crb(c,2)) { goto L_800F9B1C; } // 800F9B04
  if (!crb(c,0)) { goto L_800F9B20; } // 800F9B08
  return; // 800F9B0C
L_800F9B10:;
  cmps(c,0,(int32_t)c->r[0],4); // 800F9B10
  if (!crb(c,0)) return; // 800F9B14
  goto L_800F9B28; // 800F9B18
L_800F9B1C:;
  f_800F9B30(c); return; // 800F9B1C
L_800F9B20:;
  f_800F9B78(c); return; // 800F9B20
L_800F9B24:;
  f_800F9D48(c); return; // 800F9B24
L_800F9B28:;
  f_800F9E74(c); return; // 800F9B28
  return; // 800F9B2C
}

// fn_800F9B30
void f_800F9B30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9B30
  c->r[0]=c->lr; // 800F9B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9B38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9B3C
  c->r[31]=c->r[3]|c->r[3]; // 800F9B40
  c->r[0]=R8(c->r[3]+0x00000077u); // 800F9B44
  cmps(c,0,(int32_t)c->r[0],0); // 800F9B48
  if (crb(c,2)) { goto L_800F9B54; } // 800F9B4C
  goto L_800F9B64; // 800F9B50
L_800F9B54:;
  c->lr=0x800F9B58u; f_800FA098(c); // 800F9B54
  c->r[3]=R8(c->r[31]+0x00000077u); // 800F9B58
  c->r[0]=c->r[3]+0x00000001u; // 800F9B5C
  W8(c->r[31]+0x00000077u,c->r[0]); // 800F9B60
L_800F9B64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9B64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9B68
  c->lr=c->r[0]; // 800F9B6C
  c->r[1]=c->r[1]+0x00000010u; // 800F9B70
  return; // 800F9B74
}

// fn_800F9B78
void f_800F9B78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9B78
  c->r[0]=c->lr; // 800F9B7C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F9B80
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800F9B84
  W32(c->r[1]+0x00000028u,c->r[30]); // 800F9B88
  W32(c->r[1]+0x00000024u,c->r[29]); // 800F9B8C
  c->r[29]=c->r[3]|c->r[3]; // 800F9B90
  c->r[0]=R8(c->r[3]+0x00000077u); // 800F9B94
  c->r[30]=R32(c->r[3]+0x000000ACu); // 800F9B98
  cmps(c,0,(int32_t)c->r[0],1); // 800F9B9C
  if (crb(c,2)) { goto L_800F9C14; } // 800F9BA0
  if (!crb(c,0)) { goto L_800F9C74; } // 800F9BA4
  cmps(c,0,(int32_t)c->r[0],0); // 800F9BA8
  if (!crb(c,0)) { goto L_800F9BB4; } // 800F9BAC
  goto L_800F9C74; // 800F9BB0
L_800F9BB4:;
  c->lr=0x800F9BB8u; f_800FA098(c); // 800F9BB4
  {uint32_t ea=c->r[2]+0xFFFFAA8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9BB8
  c->r[7]=0u+0x803A0000u; // 800F9BBC
  c->r[3]=c->r[30]+0x00000060u; // 800F9BC0
  c->r[4]=c->r[1]+0x00000008u; // 800F9BC4
  {uint32_t ea=c->r[30]+0x000000B4u; WF32(ea,c->f[0]);} // 800F9BC8
  {uint32_t ea=c->r[7]+0xFFFFF0E4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F9BCC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F9BD0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F9BD4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F9BD8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F9BDC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F9BE0
  c->lr=0x800F9BE8u; f_800361A0(c); // 800F9BE4
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F9BE8
  c->r[3]=0u+0x00000026u; // 800F9BEC
  c->r[4]=0u+0x00000000u; // 800F9BF0
  c->lr=0x800F9BF8u; f_802445B8(c); // 800F9BF4
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F9BF8
  c->r[3]=0u+0x00000027u; // 800F9BFC
  c->r[4]=0u+0x00000001u; // 800F9C00
  c->lr=0x800F9C08u; f_802445B8(c); // 800F9C04
  c->r[3]=R8(c->r[29]+0x00000077u); // 800F9C08
  c->r[0]=c->r[3]+0x00000001u; // 800F9C0C
  W8(c->r[29]+0x00000077u,c->r[0]); // 800F9C10
L_800F9C14:;
  c->lr=0x800F9C18u; f_8024E040(c); // 800F9C14
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F9C18
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9C1C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800F9C20
  fcmp(c,0,c->f[1],c->f[0]); // 800F9C24
  {uint32_t ea=c->r[30]+0x000000B4u; WF32(ea,c->f[1]);} // 800F9C28
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800F9C2C
  if (crb(c,2)) { goto L_800F9D24; } // 800F9C30
  c->r[3]=c->r[29]|c->r[29]; // 800F9C34
  c->r[4]=0u+0x00000000u; // 800F9C38
  c->r[5]=0u+0x00000000u; // 800F9C3C
  c->lr=0x800F9C44u; f_800FA030(c); // 800F9C40
  c->r[3]=0u+0x80550000u; // 800F9C44
  c->r[4]=R32(c->r[30]+0x000000B8u); // 800F9C48
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F9C4C
  c->r[5]=c->r[30]+0x00000084u; // 800F9C50
  c->r[6]=c->r[30]+0x00000090u; // 800F9C54
  c->r[7]=0u+0x00000000u; // 800F9C58
  c->lr=0x800F9C60u; f_8018DFE0(c); // 800F9C5C
  {uint32_t ea=c->r[2]+0xFFFFAAA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9C60
  {uint32_t ea=c->r[30]+0x000000B4u; WF32(ea,c->f[0]);} // 800F9C64
  c->r[3]=R8(c->r[29]+0x00000077u); // 800F9C68
  c->r[0]=c->r[3]+0x00000001u; // 800F9C6C
  W8(c->r[29]+0x00000077u,c->r[0]); // 800F9C70
L_800F9C74:;
  c->lr=0x800F9C78u; f_8024E040(c); // 800F9C74
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F9C78
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9C7C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800F9C80
  fcmp(c,0,c->f[1],c->f[0]); // 800F9C84
  {uint32_t ea=c->r[30]+0x000000B4u; WF32(ea,c->f[1]);} // 800F9C88
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800F9C8C
  if (crb(c,2)) { goto L_800F9D24; } // 800F9C90
  c->r[3]=c->r[29]|c->r[29]; // 800F9C94
  c->r[4]=0u+0x00000004u; // 800F9C98
  c->r[5]=0u+0x00000008u; // 800F9C9C
  c->r[6]=0u+0x00000001u; // 800F9CA0
  c->r[7]=0u+0x00000001u; // 800F9CA4
  c->lr=0x800F9CACu; f_8017900C(c); // 800F9CA8
  c->r[3]=c->r[29]|c->r[29]; // 800F9CAC
  c->lr=0x800F9CB4u; f_800FA220(c); // 800F9CB0
  c->r[3]=c->r[29]|c->r[29]; // 800F9CB4
  c->r[4]=0u+0x00000001u; // 800F9CB8
  c->r[5]=0u+0x00000000u; // 800F9CBC
  c->lr=0x800F9CC4u; f_800FA030(c); // 800F9CC0
  c->r[31]=0u+0x80550000u; // 800F9CC4
  c->r[4]=R32(c->r[30]+0x000000BCu); // 800F9CC8
  c->r[3]=c->r[31]+0xFFFFC848u; // 800F9CCC
  c->r[5]=c->r[30]+0x0000006Cu; // 800F9CD0
  c->r[6]=c->r[30]+0x00000078u; // 800F9CD4
  c->r[7]=0u+0x00000000u; // 800F9CD8
  c->lr=0x800F9CE0u; f_8018DFE0(c); // 800F9CDC
  c->r[3]=c->r[29]|c->r[29]; // 800F9CE0
  c->r[4]=0u+0x00000002u; // 800F9CE4
  c->r[5]=0u+0x00000000u; // 800F9CE8
  c->lr=0x800F9CF0u; f_800FA030(c); // 800F9CEC
  c->r[4]=R32(c->r[30]+0x000000C0u); // 800F9CF0
  c->r[3]=c->r[31]+0xFFFFC848u; // 800F9CF4
  c->r[5]=c->r[30]+0x000000A8u; // 800F9CF8
  c->r[6]=0u+0x00000000u; // 800F9CFC
  c->r[7]=0u+0x00000000u; // 800F9D00
  c->lr=0x800F9D08u; f_8018DFE0(c); // 800F9D04
  c->r[4]=0u+0x00000002u; // 800F9D08
  c->r[3]=0u+0x00000001u; // 800F9D0C
  W8(c->r[30]+0x00000059u,c->r[4]); // 800F9D10
  c->r[0]=0u+0x00000000u; // 800F9D14
  W8(c->r[30]+0x0000005Au,c->r[4]); // 800F9D18
  W8(c->r[29]+0x00000077u,c->r[3]); // 800F9D1C
  W8(c->r[29]+0x00000078u,c->r[0]); // 800F9D20
L_800F9D24:;
  c->r[3]=c->r[29]|c->r[29]; // 800F9D24
  c->lr=0x800F9D2Cu; f_800F9FD0(c); // 800F9D28
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F9D2C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800F9D30
  c->r[30]=R32(c->r[1]+0x00000028u); // 800F9D34
  c->r[29]=R32(c->r[1]+0x00000024u); // 800F9D38
  c->lr=c->r[0]; // 800F9D3C
  c->r[1]=c->r[1]+0x00000030u; // 800F9D40
  return; // 800F9D44
}

// fn_800F9D48
void f_800F9D48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9D48
  c->r[0]=c->lr; // 800F9D4C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F9D50
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800F9D54
  W32(c->r[1]+0x00000028u,c->r[30]); // 800F9D58
  W32(c->r[1]+0x00000024u,c->r[29]); // 800F9D5C
  c->r[29]=c->r[3]|c->r[3]; // 800F9D60
  c->r[0]=R8(c->r[3]+0x00000077u); // 800F9D64
  c->r[30]=R32(c->r[3]+0x000000ACu); // 800F9D68
  cmps(c,0,(int32_t)c->r[0],0); // 800F9D6C
  if (crb(c,2)) { goto L_800F9D78; } // 800F9D70
  goto L_800F9E34; // 800F9D74
L_800F9D78:;
  c->lr=0x800F9D7Cu; f_800FA098(c); // 800F9D78
  c->r[3]=c->r[29]|c->r[29]; // 800F9D7C
  c->r[4]=0u+0x00000004u; // 800F9D80
  c->r[5]=0u+0x00000009u; // 800F9D84
  c->r[6]=0u+0x00000001u; // 800F9D88
  c->r[7]=0u+0x00000001u; // 800F9D8C
  c->lr=0x800F9D94u; f_8017900C(c); // 800F9D90
  c->r[7]=0u+0x803A0000u; // 800F9D94
  {uint32_t ea=c->r[7]+0xFFFFF0F0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800F9D98
  c->r[3]=c->r[30]+0x00000060u; // 800F9D9C
  c->r[4]=c->r[1]+0x00000008u; // 800F9DA0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800F9DA4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F9DA8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800F9DAC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F9DB0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F9DB4
  c->lr=0x800F9DBCu; f_800361A0(c); // 800F9DB8
  c->r[3]=c->r[29]|c->r[29]; // 800F9DBC
  c->r[4]=0u+0x00000000u; // 800F9DC0
  c->r[5]=0u+0x00000000u; // 800F9DC4
  c->lr=0x800F9DCCu; f_800FA030(c); // 800F9DC8
  c->r[31]=0u+0x80550000u; // 800F9DCC
  c->r[4]=R32(c->r[30]+0x000000B8u); // 800F9DD0
  c->r[3]=c->r[31]+0xFFFFC848u; // 800F9DD4
  c->r[5]=c->r[30]+0x00000084u; // 800F9DD8
  c->r[6]=c->r[30]+0x00000090u; // 800F9DDC
  c->r[7]=0u+0x00000000u; // 800F9DE0
  c->lr=0x800F9DE8u; f_8018DFE0(c); // 800F9DE4
  c->r[3]=c->r[29]|c->r[29]; // 800F9DE8
  c->lr=0x800F9DF0u; f_800FA220(c); // 800F9DEC
  c->r[3]=c->r[29]|c->r[29]; // 800F9DF0
  c->r[4]=0u+0x00000001u; // 800F9DF4
  c->r[5]=0u+0x00000000u; // 800F9DF8
  c->lr=0x800F9E00u; f_800FA030(c); // 800F9DFC
  c->r[4]=R32(c->r[30]+0x000000BCu); // 800F9E00
  c->r[3]=c->r[31]+0xFFFFC848u; // 800F9E04
  c->r[5]=c->r[30]+0x0000006Cu; // 800F9E08
  c->r[6]=c->r[30]+0x00000078u; // 800F9E0C
  c->r[7]=0u+0x00000000u; // 800F9E10
  c->lr=0x800F9E18u; f_8018DFE0(c); // 800F9E14
  c->r[3]=c->r[29]|c->r[29]; // 800F9E18
  c->r[4]=0u+0x00000002u; // 800F9E1C
  c->r[5]=0u+0x00000000u; // 800F9E20
  c->lr=0x800F9E28u; f_800FA030(c); // 800F9E24
  c->r[3]=R8(c->r[29]+0x00000077u); // 800F9E28
  c->r[0]=c->r[3]+0x00000001u; // 800F9E2C
  W8(c->r[29]+0x00000077u,c->r[0]); // 800F9E30
L_800F9E34:;
  c->r[3]=c->r[29]|c->r[29]; // 800F9E34
  c->lr=0x800F9E3Cu; f_800F9FD0(c); // 800F9E38
  c->r[3]=0u+0x80550000u; // 800F9E3C
  c->r[4]=R32(c->r[30]+0x000000C0u); // 800F9E40
  c->r[3]=c->r[3]+0xFFFFC848u; // 800F9E44
  c->r[5]=c->r[30]+0x000000A8u; // 800F9E48
  c->r[6]=0u+0x00000000u; // 800F9E4C
  c->r[7]=0u+0x00000000u; // 800F9E50
  c->lr=0x800F9E58u; f_8018DFE0(c); // 800F9E54
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F9E58
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800F9E5C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800F9E60
  c->r[29]=R32(c->r[1]+0x00000024u); // 800F9E64
  c->lr=c->r[0]; // 800F9E68
  c->r[1]=c->r[1]+0x00000030u; // 800F9E6C
  return; // 800F9E70
}

// fn_800F9E74
void f_800F9E74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9E74
  c->r[0]=c->lr; // 800F9E78
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F9E7C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800F9E80
  W32(c->r[1]+0x00000028u,c->r[30]); // 800F9E84
  W32(c->r[1]+0x00000024u,c->r[29]); // 800F9E88
  c->r[29]=c->r[3]|c->r[3]; // 800F9E8C
  c->r[0]=R8(c->r[3]+0x00000077u); // 800F9E90
  c->r[30]=R32(c->r[3]+0x000000ACu); // 800F9E94
  cmps(c,0,(int32_t)c->r[0],1); // 800F9E98
  if (crb(c,2)) { goto L_800F9EDC; } // 800F9E9C
  if (!crb(c,0)) { goto L_800F9F90; } // 800F9EA0
  cmps(c,0,(int32_t)c->r[0],0); // 800F9EA4
  if (!crb(c,0)) { goto L_800F9EB0; } // 800F9EA8
  goto L_800F9F90; // 800F9EAC
L_800F9EB0:;
  c->r[3]=R32(c->r[30]+0x000000B8u); // 800F9EB0
  c->lr=0x800F9EB8u; f_8012FB70(c); // 800F9EB4
  c->lr=0x800F9EBCu; f_8024E040(c); // 800F9EB8
  {uint32_t ea=c->r[2]+0xFFFFAAA8u; c->f[0]=RF64(ea);} // 800F9EBC
  c->f[0]=c->f[0]*c->f[1]; // 800F9EC0
  c->f[0]=-c->f[0]; // 800F9EC4
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800F9EC8
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 800F9ECC
  c->r[3]=R8(c->r[29]+0x00000077u); // 800F9ED0
  c->r[0]=c->r[3]+0x00000001u; // 800F9ED4
  W8(c->r[29]+0x00000077u,c->r[0]); // 800F9ED8
L_800F9EDC:;
  c->r[3]=c->r[29]|c->r[29]; // 800F9EDC
  c->r[4]=0u+0x00000004u; // 800F9EE0
  c->r[5]=0u+0x0000000Au; // 800F9EE4
  c->r[6]=0u+0x00000001u; // 800F9EE8
  c->r[7]=0u+0x00000001u; // 800F9EEC
  c->lr=0x800F9EF4u; f_8017900C(c); // 800F9EF0
  {uint32_t ea=c->r[30]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F9EF4
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F9EF8
  {uint32_t ea=c->r[2]+0xFFFFAAB0u; c->f[0]=RF64(ea);} // 800F9EFC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800F9F00
  fcmp(c,0,c->f[1],c->f[0]); // 800F9F04
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 800F9F08
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800F9F0C
  if (!crb(c,2)) { goto L_800F9F38; } // 800F9F10
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F9F14
  {uint32_t ea=c->r[2]+0xFFFFAA78u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9F18
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 800F9F1C
  {uint32_t ea=c->r[30]+0x000000B4u; WF32(ea,c->f[0]);} // 800F9F20
  c->r[3]=R32(c->r[30]+0x000000C0u); // 800F9F24
  c->lr=0x800F9F2Cu; f_8012FB70(c); // 800F9F28
  c->r[3]=R8(c->r[29]+0x00000077u); // 800F9F2C
  c->r[0]=c->r[3]+0x00000001u; // 800F9F30
  W8(c->r[29]+0x00000077u,c->r[0]); // 800F9F34
L_800F9F38:;
  {uint32_t ea=c->r[30]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9F38
  c->r[31]=0u+0x80550000u; // 800F9F3C
  c->r[3]=c->r[31]+0xFFFFC848u; // 800F9F40
  c->r[5]=c->r[30]+0x0000006Cu; // 800F9F44
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[0]);} // 800F9F48
  c->r[6]=c->r[30]+0x00000078u; // 800F9F4C
  c->r[7]=c->r[30]+0x00000060u; // 800F9F50
  c->r[4]=R32(c->r[30]+0x000000BCu); // 800F9F54
  c->lr=0x800F9F5Cu; f_8018DFE0(c); // 800F9F58
  c->r[3]=c->r[29]|c->r[29]; // 800F9F5C
  c->lr=0x800F9F64u; f_800F9FD0(c); // 800F9F60
  {uint32_t ea=c->r[30]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9F64
  c->r[3]=c->r[31]+0xFFFFC848u; // 800F9F68
  c->r[5]=c->r[30]+0x000000A8u; // 800F9F6C
  c->r[7]=c->r[1]+0x00000008u; // 800F9F70
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800F9F74
  c->r[6]=0u+0x00000000u; // 800F9F78
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800F9F7C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800F9F80
  c->r[4]=R32(c->r[30]+0x000000C0u); // 800F9F84
  c->lr=0x800F9F8Cu; f_8018DFE0(c); // 800F9F88
  goto L_800F9FB4; // 800F9F8C
L_800F9F90:;
  c->lr=0x800F9F94u; f_8024E040(c); // 800F9F90
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F9F94
  {uint32_t ea=c->r[2]+0xFFFFAA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9F98
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800F9F9C
  fcmp(c,0,c->f[1],c->f[0]); // 800F9FA0
  {uint32_t ea=c->r[30]+0x000000B4u; WF32(ea,c->f[1]);} // 800F9FA4
  if (!crb(c,0)) { goto L_800F9FB4; } // 800F9FA8
  c->r[0]=0u+0x00000000u; // 800F9FAC
  W8(c->r[30]+0x00000059u,c->r[0]); // 800F9FB0
L_800F9FB4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F9FB4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800F9FB8
  c->r[30]=R32(c->r[1]+0x00000028u); // 800F9FBC
  c->r[29]=R32(c->r[1]+0x00000024u); // 800F9FC0
  c->lr=c->r[0]; // 800F9FC4
  c->r[1]=c->r[1]+0x00000030u; // 800F9FC8
  return; // 800F9FCC
}

// fn_800F9FD0
void f_800F9FD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9FD0
  c->r[0]=c->lr; // 800F9FD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F9FD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F9FDC
  c->r[31]=R32(c->r[3]+0x000000ACu); // 800F9FE0
  c->r[0]=R32(c->r[31]+0x000000BCu); // 800F9FE4
  cmps(c,0,(int32_t)c->r[0],-1); // 800F9FE8
  if (crb(c,2)) { goto L_800FA01C; } // 800F9FEC
  c->r[3]=c->r[31]+0x0000006Cu; // 800F9FF0
  c->r[4]=c->r[31]+0x000000A8u; // 800F9FF4
  c->r[5]=c->r[1]+0x00000008u; // 800F9FF8
  c->lr=0x800FA000u; f_80296A70(c); // 800F9FFC
  c->r[3]=0u+0x80550000u; // 800FA000
  c->r[4]=R32(c->r[31]+0x000000BCu); // 800FA004
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FA008
  c->r[6]=c->r[1]+0x00000008u; // 800FA00C
  c->r[5]=0u+0x00000003u; // 800FA010
  c->r[7]=0u+0x00000001u; // 800FA014
  c->lr=0x800FA01Cu; f_8018ED34(c); // 800FA018
L_800FA01C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FA01C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FA020
  c->lr=c->r[0]; // 800FA024
  c->r[1]=c->r[1]+0x00000020u; // 800FA028
  return; // 800FA02C
}

// fn_800FA030
void f_800FA030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA030
  c->r[0]=c->lr; // 800FA034
  c->r[9]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FA038
  c->r[6]=c->r[5]|c->r[5]; // 800FA03C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FA040
  c->r[8]=0u+0x803A0000u; // 800FA044
  c->r[4]=c->r[1]+0x00000008u; // 800FA048
  c->r[5]=0u+0x00000000u; // 800FA04C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FA050
  c->r[0]=R32(c->r[3]+0x000000ACu); // 800FA054
  {uint32_t ea=c->r[8]+0xFFFFF0FCu; c->r[3]=R32(ea); c->r[8]=ea;} // 800FA058
  c->r[31]=c->r[0]+c->r[9]; // 800FA05C
  c->r[7]=R32(c->r[8]+0x00000004u); // 800FA060
  c->r[0]=R32(c->r[8]+0x00000008u); // 800FA064
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FA068
  c->r[3]=R32(c->r[31]+0x000000B8u); // 800FA06C
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 800FA070
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FA074
  c->r[4]=R32(c->r[4]+c->r[9]); // 800FA078
  c->lr=0x800FA080u; f_8012FAE0(c); // 800FA07C
  W32(c->r[31]+0x000000B8u,c->r[3]); // 800FA080
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FA084
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FA088
  c->lr=c->r[0]; // 800FA08C
  c->r[1]=c->r[1]+0x00000020u; // 800FA090
  return; // 800FA094
}

// fn_800FA098
void f_800FA098(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA098
  c->r[0]=c->lr; // 800FA09C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA0A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA0A4
  c->r[31]=0u+0x00000000u; // 800FA0A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FA0AC
  c->r[30]=c->r[3]|c->r[3]; // 800FA0B0
L_800FA0B4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FA0B4
  c->r[4]=c->r[31]|c->r[31]; // 800FA0B8
  c->lr=0x800FA0C0u; f_800FA0E4(c); // 800FA0BC
  c->r[31]=c->r[31]+0x00000001u; // 800FA0C0
  cmps(c,0,(int32_t)c->r[31],3); // 800FA0C4
  if (crb(c,0)) { IRQCHK(c); goto L_800FA0B4; } // 800FA0C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA0CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA0D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FA0D4
  c->lr=c->r[0]; // 800FA0D8
  c->r[1]=c->r[1]+0x00000010u; // 800FA0DC
  return; // 800FA0E0
}

// fn_800FA0E4
void f_800FA0E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA0E4
  c->r[0]=c->lr; // 800FA0E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA0EC
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FA0F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA0F4
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800FA0F8
  c->r[31]=c->r[3]+c->r[0]; // 800FA0FC
  c->r[3]=R32(c->r[31]+0x000000B8u); // 800FA100
  c->lr=0x800FA108u; f_8012FBB4(c); // 800FA104
  c->r[0]=0u+0xFFFFFFFFu; // 800FA108
  W32(c->r[31]+0x000000B8u,c->r[0]); // 800FA10C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA110
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA114
  c->lr=c->r[0]; // 800FA118
  c->r[1]=c->r[1]+0x00000010u; // 800FA11C
  return; // 800FA120
}

// fn_800FA124
void f_800FA124(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA124
  c->r[0]=c->lr; // 800FA128
  cmps(c,0,(int32_t)c->r[5],252); // 800FA12C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA130
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA134
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800FA138
  if (crb(c,2)) { goto L_800FA1E4; } // 800FA13C
  if (!crb(c,0)) { goto L_800FA150; } // 800FA140
  cmps(c,0,(int32_t)c->r[5],250); // 800FA144
  if (crb(c,2)) { goto L_800FA160; } // 800FA148
  goto L_800FA20C; // 800FA14C
L_800FA150:;
  cmps(c,0,(int32_t)c->r[5],254); // 800FA150
  if (crb(c,2)) { goto L_800FA18C; } // 800FA154
  if (!crb(c,0)) { goto L_800FA20C; } // 800FA158
  goto L_800FA1B8; // 800FA15C
L_800FA160:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)80); // 800FA160
  c->r[4]=0u+0x803A0000u; // 800FA164
  c->r[5]=0u+0x00000000u; // 800FA168
  c->r[4]=c->r[4]+0xFFFFF130u; // 800FA16C
  c->r[31]=c->r[3]+c->r[0]; // 800FA170
  c->r[6]=0u+0x00000000u; // 800FA174
  c->r[3]=R32(c->r[31]+0x000001B4u); // 800FA178
  c->r[4]=c->r[4]+0x00000035u; // 800FA17C
  c->lr=0x800FA184u; f_8012FAE0(c); // 800FA180
  W32(c->r[31]+0x000001B4u,c->r[3]); // 800FA184
  goto L_800FA20C; // 800FA188
L_800FA18C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)80); // 800FA18C
  c->r[4]=0u+0x803A0000u; // 800FA190
  c->r[5]=0u+0x00000000u; // 800FA194
  c->r[4]=c->r[4]+0xFFFFF130u; // 800FA198
  c->r[31]=c->r[3]+c->r[0]; // 800FA19C
  c->r[6]=0u+0x00000000u; // 800FA1A0
  c->r[3]=R32(c->r[31]+0x000001B4u); // 800FA1A4
  c->r[4]=c->r[4]+0x00000039u; // 800FA1A8
  c->lr=0x800FA1B0u; f_8012FAE0(c); // 800FA1AC
  W32(c->r[31]+0x000001B4u,c->r[3]); // 800FA1B0
  goto L_800FA20C; // 800FA1B4
L_800FA1B8:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)80); // 800FA1B8
  c->r[4]=0u+0x803A0000u; // 800FA1BC
  c->r[5]=0u+0x00000000u; // 800FA1C0
  c->r[4]=c->r[4]+0xFFFFF130u; // 800FA1C4
  c->r[31]=c->r[3]+c->r[0]; // 800FA1C8
  c->r[6]=0u+0x00000000u; // 800FA1CC
  c->r[3]=R32(c->r[31]+0x000001B4u); // 800FA1D0
  c->r[4]=c->r[4]+0x00000039u; // 800FA1D4
  c->lr=0x800FA1DCu; f_8012FAE0(c); // 800FA1D8
  W32(c->r[31]+0x000001B4u,c->r[3]); // 800FA1DC
  goto L_800FA20C; // 800FA1E0
L_800FA1E4:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)80); // 800FA1E4
  c->r[4]=0u+0x803A0000u; // 800FA1E8
  c->r[5]=0u+0x00000000u; // 800FA1EC
  c->r[4]=c->r[4]+0xFFFFF130u; // 800FA1F0
  c->r[31]=c->r[3]+c->r[0]; // 800FA1F4
  c->r[6]=0u+0x00000000u; // 800FA1F8
  c->r[3]=R32(c->r[31]+0x000001B4u); // 800FA1FC
  c->r[4]=c->r[4]+0x00000039u; // 800FA200
  c->lr=0x800FA208u; f_8012FAE0(c); // 800FA204
  W32(c->r[31]+0x000001B4u,c->r[3]); // 800FA208
L_800FA20C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA20C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA210
  c->lr=c->r[0]; // 800FA214
  c->r[1]=c->r[1]+0x00000010u; // 800FA218
  return; // 800FA21C
}

// fn_800FA220
void f_800FA220(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA220
  c->r[0]=c->lr; // 800FA224
  c->r[4]=0u+0x00000067u; // 800FA228
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA22C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA230
  c->r[31]=0u+0x80620000u; // 800FA234
  c->r[31]=c->r[31]+0x00007688u; // 800FA238
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FA23C
  c->lr=0x800FA244u; f_8003560C(c); // 800FA240
  cmpu(c,0,c->r[3],0x00000002u); // 800FA244
  if (!crb(c,0)) { goto L_800FA260; } // 800FA248
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FA24C
  c->r[4]=0u+0x00000066u; // 800FA250
  c->r[5]=0u+0x00000006u; // 800FA254
  c->lr=0x800FA25Cu; f_80038998(c); // 800FA258
  goto L_800FA270; // 800FA25C
L_800FA260:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FA260
  c->r[4]=0u+0x00000066u; // 800FA264
  c->r[5]=0u+0x00000009u; // 800FA268
  c->lr=0x800FA270u; f_80038998(c); // 800FA26C
L_800FA270:;
  c->r[31]=0u+0x80620000u; // 800FA270
  c->r[4]=0u+0x00000008u; // 800FA274
  c->r[31]=c->r[31]+0x00007688u; // 800FA278
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FA27C
  c->lr=0x800FA284u; f_80038A08(c); // 800FA280
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FA284
  c->r[4]=0u+0x00000009u; // 800FA288
  c->lr=0x800FA290u; f_8003DCAC(c); // 800FA28C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA290
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA294
  c->lr=c->r[0]; // 800FA298
  c->r[1]=c->r[1]+0x00000010u; // 800FA29C
  return; // 800FA2A0
}

// fn_800FA2A4
void f_800FA2A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA2A4
  c->r[0]=c->lr; // 800FA2A8
  c->r[5]=0u+0x00000000u; // 800FA2AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA2B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA2B4
  c->r[31]=c->r[3]|c->r[3]; // 800FA2B8
  c->r[3]=0u+0x0000029Fu; // 800FA2BC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800FA2C0
  c->r[4]=c->r[4]+0x0000010Cu; // 800FA2C4
  c->lr=0x800FA2CCu; f_8024EE50(c); // 800FA2C8
  cmps(c,0,(int32_t)c->r[3],0); // 800FA2CC
  if (crb(c,2)) { goto L_800FA2DC; } // 800FA2D0
  c->r[3]=0u+0x00000000u; // 800FA2D4
  goto L_800FA2F8; // 800FA2D8
L_800FA2DC:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800FA2DC
  c->r[3]=0u+0x000001B9u; // 800FA2E0
  c->r[5]=0u+0x00000000u; // 800FA2E4
  c->r[4]=c->r[4]+0x0000010Cu; // 800FA2E8
  c->lr=0x800FA2F0u; f_8024EE50(c); // 800FA2EC
  c->r[0]=cntlz(c->r[3]); // 800FA2F0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800FA2F4
L_800FA2F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA2F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA2FC
  c->lr=c->r[0]; // 800FA300
  c->r[1]=c->r[1]+0x00000010u; // 800FA304
  return; // 800FA308
}

// fn_800FA30C
void f_800FA30C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA30C
  c->r[0]=c->lr; // 800FA310
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA314
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA318
  c->r[31]=c->r[3]|c->r[3]; // 800FA31C
  c->lr=0x800FA324u; f_801F4F28(c); // 800FA320
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800FA324
  c->r[4]=R32(c->r[31]+0x000000ACu); // 800FA328
  cmps(c,0,(int32_t)c->r[0],106); // 800FA32C
  if (crb(c,2)) { goto L_800FA37C; } // 800FA330
  if (!crb(c,0)) { goto L_800FA34C; } // 800FA334
  cmps(c,0,(int32_t)c->r[0],105); // 800FA338
  if (!crb(c,0)) { goto L_800FA384; } // 800FA33C
  cmps(c,0,(int32_t)c->r[0],100); // 800FA340
  if (!crb(c,0)) { goto L_800FA360; } // 800FA344
  goto L_800FA398; // 800FA348
L_800FA34C:;
  cmps(c,0,(int32_t)c->r[0],110); // 800FA34C
  if (!crb(c,0)) { goto L_800FA398; } // 800FA350
  cmps(c,0,(int32_t)c->r[0],108); // 800FA354
  if (!crb(c,0)) { goto L_800FA360; } // 800FA358
  goto L_800FA384; // 800FA35C
L_800FA360:;
  c->r[3]=0u+0x00000000u; // 800FA360
  W8(c->r[4]+0x00000056u,c->r[3]); // 800FA364
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800FA368
  W8(c->r[31]+0x00000029u,c->r[3]); // 800FA36C
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800FA370
  W8(c->r[31]+0x00000028u,c->r[0]); // 800FA374
  goto L_800FA398; // 800FA378
L_800FA37C:;
  c->r[0]=0u+0x00000002u; // 800FA37C
  W8(c->r[4]+0x00000056u,c->r[0]); // 800FA380
L_800FA384:;
  c->r[3]=R32(c->r[31]+0x000003C0u); // 800FA384
  c->r[0]=0u+0x00000000u; // 800FA388
  W8(c->r[31]+0x00000029u,c->r[0]); // 800FA38C
  W16(c->r[31]+0x000003BCu,c->r[3]); // 800FA390
  W8(c->r[31]+0x00000028u,c->r[3]); // 800FA394
L_800FA398:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA398
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA39C
  c->lr=c->r[0]; // 800FA3A0
  c->r[1]=c->r[1]+0x00000010u; // 800FA3A4
  return; // 800FA3A8
}

// fn_800FA3AC
void f_800FA3AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA3AC
  c->r[0]=c->lr; // 800FA3B0
  cmps(c,0,(int32_t)c->r[3],0); // 800FA3B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA3B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA3BC
  c->r[31]=c->r[4]|c->r[4]; // 800FA3C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FA3C4
  c->r[30]=c->r[3]|c->r[3]; // 800FA3C8
  if (crb(c,2)) { goto L_800FA3E8; } // 800FA3CC
  c->r[4]=0u+0x00000000u; // 800FA3D0
  c->lr=0x800FA3D8u; f_8026A06C(c); // 800FA3D4
  cmps(c,0,(int32_t)c->r[31],0); // 800FA3D8
  if (!crb(c,1)) { goto L_800FA3E8; } // 800FA3DC
  c->r[3]=c->r[30]|c->r[30]; // 800FA3E0
  c->lr=0x800FA3E8u; f_8026A268(c); // 800FA3E4
L_800FA3E8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FA3E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA3EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FA3F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA3F4
  c->lr=c->r[0]; // 800FA3F8
  c->r[1]=c->r[1]+0x00000010u; // 800FA3FC
  return; // 800FA400
}

// fn_800FA404
void f_800FA404(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA404
  c->r[0]=c->lr; // 800FA408
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA40C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA410
  c->r[31]=c->r[3]|c->r[3]; // 800FA414
  c->r[3]=0u+0x000000ACu; // 800FA418
  c->lr=0x800FA420u; f_8024E174(c); // 800FA41C
  cmps(c,0,(int32_t)c->r[3],0); // 800FA420
  W32(c->r[31]+0x000000ACu,c->r[3]); // 800FA424
  if (!crb(c,2)) { goto L_800FA440; } // 800FA428
  c->r[3]=0u+0x803A0000u; // 800FA42C
  c->r[3]=c->r[3]+0xFFFFF250u; // 800FA430
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800FA434
  c->lr=0x800FA43Cu; f_8024E3DC(c); // 800FA438
  goto L_800FA490; // 800FA43C
L_800FA440:;
  c->r[3]=c->r[31]|c->r[31]; // 800FA440
  c->r[4]=0u+0x00000000u; // 800FA444
  c->lr=0x800FA44Cu; f_801F57D0(c); // 800FA448
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FA44C
  c->r[3]=c->r[31]|c->r[31]; // 800FA450
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800FA454
  c->ctr=c->r[12]; // 800FA458
  if (true) { c->lr=0x800FA460u; dispatch(c,c->ctr); } // 800FA45C
  c->r[3]=c->r[31]|c->r[31]; // 800FA460
  c->lr=0x800FA468u; f_801F4B94(c); // 800FA464
  c->r[3]=0u+0x00000003u; // 800FA468
  c->r[4]=0u+0x0000006Au; // 800FA46C
  c->r[0]=0u+0x00000001u; // 800FA470
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800FA474
  c->r[3]=c->r[31]|c->r[31]; // 800FA478
  W8(c->r[31]+0x0000006Du,c->r[4]); // 800FA47C
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800FA480
  c->lr=0x800FA488u; f_800FA530(c); // 800FA484
  c->r[3]=c->r[31]|c->r[31]; // 800FA488
  c->lr=0x800FA490u; f_801F56F4(c); // 800FA48C
L_800FA490:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA490
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA494
  c->lr=c->r[0]; // 800FA498
  c->r[1]=c->r[1]+0x00000010u; // 800FA49C
  return; // 800FA4A0
}

// fn_800FA4A4
void f_800FA4A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA4A4
  c->r[0]=c->lr; // 800FA4A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA4AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA4B0
  c->r[31]=c->r[3]|c->r[3]; // 800FA4B4
  c->lr=0x800FA4BCu; f_800FAA30(c); // 800FA4B8
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800FA4BC
  c->lr=0x800FA4C4u; f_8024E190(c); // 800FA4C0
  c->r[3]=c->r[31]|c->r[31]; // 800FA4C4
  c->lr=0x800FA4CCu; f_801F4C78(c); // 800FA4C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA4CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA4D0
  c->lr=c->r[0]; // 800FA4D4
  c->r[1]=c->r[1]+0x00000010u; // 800FA4D8
  return; // 800FA4DC
}

// fn_800FA4E0
void f_800FA4E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA4E0
  c->r[0]=c->lr; // 800FA4E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA4E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA4EC
  c->r[31]=c->r[3]|c->r[3]; // 800FA4F0
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800FA4F4
  c->r[12]=R32(c->r[12]+0x00000068u); // 800FA4F8
  c->ctr=c->r[12]; // 800FA4FC
  if (true) { c->lr=0x800FA504u; dispatch(c,c->ctr); } // 800FA500
  c->r[3]=c->r[31]|c->r[31]; // 800FA504
  c->lr=0x800FA50Cu; f_801F4C0C(c); // 800FA508
  c->r[3]=c->r[31]|c->r[31]; // 800FA50C
  c->lr=0x800FA514u; f_800FA780(c); // 800FA510
  c->r[3]=c->r[31]|c->r[31]; // 800FA514
  c->lr=0x800FA51Cu; f_801F56F4(c); // 800FA518
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA51C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA520
  c->lr=c->r[0]; // 800FA524
  c->r[1]=c->r[1]+0x00000010u; // 800FA528
  return; // 800FA52C
}

// fn_800FA530
void f_800FA530(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA530
  c->r[0]=c->lr; // 800FA534
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800FA538
  c->r[11]=c->r[1]+0x000000B0u; // 800FA53C
  c->lr=0x800FA544u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FA540
  c->r[20]=0u+0x803A0000u; // 800FA544
  c->r[4]=c->r[1]+0x00000038u; // 800FA548
  c->r[20]=c->r[20]+0xFFFFF170u; // 800FA54C
  c->r[26]=c->r[3]|c->r[3]; // 800FA550
  c->r[5]=c->r[20]+0x00000040u; // 800FA554
  c->r[27]=R32(c->r[20]+0x00000040u); // 800FA558
  c->r[19]=c->r[20]+0x00000070u; // 800FA55C
  c->r[28]=R32(c->r[5]+0x00000004u); // 800FA560
  c->r[29]=R32(c->r[5]+0x00000008u); // 800FA564
  c->r[25]=c->r[20]+0x00000088u; // 800FA568
  c->r[30]=R32(c->r[5]+0x0000000Cu); // 800FA56C
  c->r[31]=R32(c->r[5]+0x00000010u); // 800FA570
  c->r[12]=R32(c->r[5]+0x00000014u); // 800FA574
  c->r[11]=R32(c->r[5]+0x00000018u); // 800FA578
  c->r[10]=R32(c->r[5]+0x0000001Cu); // 800FA57C
  c->r[9]=R32(c->r[5]+0x00000020u); // 800FA580
  c->r[8]=R32(c->r[5]+0x00000024u); // 800FA584
  c->r[7]=R32(c->r[5]+0x00000028u); // 800FA588
  c->r[6]=R32(c->r[5]+0x0000002Cu); // 800FA58C
  c->r[5]=R32(c->r[20]+0x00000070u); // 800FA590
  c->r[0]=R32(c->r[19]+0x00000004u); // 800FA594
  c->r[16]=R32(c->r[19]+0x00000008u); // 800FA598
  c->r[17]=R32(c->r[19]+0x0000000Cu); // 800FA59C
  c->r[18]=R32(c->r[19]+0x00000010u); // 800FA5A0
  c->r[19]=R32(c->r[19]+0x00000014u); // 800FA5A4
  c->r[20]=R32(c->r[20]+0x00000088u); // 800FA5A8
  c->r[21]=R32(c->r[25]+0x00000004u); // 800FA5AC
  c->r[22]=R32(c->r[25]+0x00000008u); // 800FA5B0
  c->r[23]=R32(c->r[25]+0x0000000Cu); // 800FA5B4
  c->r[24]=R32(c->r[25]+0x00000010u); // 800FA5B8
  c->r[25]=R32(c->r[25]+0x00000014u); // 800FA5BC
  W32(c->r[1]+0x00000038u,c->r[27]); // 800FA5C0
  W32(c->r[1]+0x0000003Cu,c->r[28]); // 800FA5C4
  W32(c->r[1]+0x00000040u,c->r[29]); // 800FA5C8
  W32(c->r[1]+0x00000044u,c->r[30]); // 800FA5CC
  W32(c->r[1]+0x00000048u,c->r[31]); // 800FA5D0
  W32(c->r[1]+0x0000004Cu,c->r[12]); // 800FA5D4
  W32(c->r[1]+0x00000050u,c->r[11]); // 800FA5D8
  W32(c->r[1]+0x00000054u,c->r[10]); // 800FA5DC
  W32(c->r[1]+0x00000058u,c->r[9]); // 800FA5E0
  W32(c->r[1]+0x0000005Cu,c->r[8]); // 800FA5E4
  W32(c->r[1]+0x00000060u,c->r[7]); // 800FA5E8
  W32(c->r[1]+0x00000064u,c->r[6]); // 800FA5EC
  W32(c->r[1]+0x00000020u,c->r[5]); // 800FA5F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FA5F4
  W32(c->r[1]+0x00000028u,c->r[16]); // 800FA5F8
  W32(c->r[1]+0x0000002Cu,c->r[17]); // 800FA5FC
  W32(c->r[1]+0x00000030u,c->r[18]); // 800FA600
  W32(c->r[1]+0x00000034u,c->r[19]); // 800FA604
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800FA608
  c->r[27]=R32(c->r[3]+0x000000ACu); // 800FA60C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800FA610
  W32(c->r[1]+0x00000008u,c->r[20]); // 800FA614
  c->r[3]=c->r[27]+0x00000094u; // 800FA618
  W32(c->r[1]+0x0000000Cu,c->r[21]); // 800FA61C
  c->r[4]=c->r[4]+c->r[0]; // 800FA620
  W32(c->r[1]+0x00000010u,c->r[22]); // 800FA624
  W32(c->r[1]+0x00000014u,c->r[23]); // 800FA628
  W32(c->r[1]+0x00000018u,c->r[24]); // 800FA62C
  W32(c->r[1]+0x0000001Cu,c->r[25]); // 800FA630
  c->lr=0x800FA638u; f_800361A0(c); // 800FA634
  c->r[4]=R8(c->r[26]+0x0000006Eu); // 800FA638
  c->r[0]=c->r[1]+0x00000038u; // 800FA63C
  c->r[3]=c->r[27]+0x000000A0u; // 800FA640
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 800FA644
  c->r[4]=c->r[0]+c->r[4]; // 800FA648
  c->r[4]=c->r[4]+0x0000000Cu; // 800FA64C
  c->lr=0x800FA654u; f_800361A0(c); // 800FA650
  c->r[3]=c->r[27]|c->r[27]; // 800FA654
  c->r[4]=c->r[26]+0x0000002Cu; // 800FA658
  c->lr=0x800FA660u; f_800361A0(c); // 800FA65C
  c->r[3]=c->r[27]+0x0000000Cu; // 800FA660
  c->r[4]=c->r[26]+0x00000060u; // 800FA664
  c->lr=0x800FA66Cu; f_800361A0(c); // 800FA668
  c->r[3]=0u+0xFFFFFFFFu; // 800FA66C
  c->r[5]=0u+0x00000067u; // 800FA670
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800FA674
  c->r[0]=0u+0x00000000u; // 800FA678
  c->r[4]=c->r[26]+0x0000002Cu; // 800FA67C
  W32(c->r[27]+0x00000020u,c->r[3]); // 800FA680
  W32(c->r[27]+0x00000024u,c->r[3]); // 800FA684
  W32(c->r[27]+0x00000028u,c->r[3]); // 800FA688
  W32(c->r[27]+0x0000002Cu,c->r[3]); // 800FA68C
  W32(c->r[27]+0x00000030u,c->r[3]); // 800FA690
  c->r[3]=R32(c->r[26]+0x00000394u); // 800FA694
  W8(c->r[26]+0x00000028u,c->r[5]); // 800FA698
  c->r[3]=c->r[3]+0x0000005Cu; // 800FA69C
  W8(c->r[26]+0x00000029u,c->r[0]); // 800FA6A0
  c->lr=0x800FA6A8u; f_800361A0(c); // 800FA6A4
  c->r[3]=R32(c->r[26]+0x00000394u); // 800FA6A8
  c->r[4]=c->r[26]+0x00000060u; // 800FA6AC
  c->r[3]=c->r[3]+0x00000068u; // 800FA6B0
  c->lr=0x800FA6B8u; f_800361A0(c); // 800FA6B4
  c->r[3]=R32(c->r[26]+0x00000394u); // 800FA6B8
  c->r[3]=c->r[3]+0x0000005Cu; // 800FA6BC
  c->lr=0x800FA6C4u; f_80251104(c); // 800FA6C0
  c->r[3]=R32(c->r[26]+0x00000394u); // 800FA6C4
  c->r[4]=c->r[27]+0x00000034u; // 800FA6C8
  c->r[3]=c->r[3]+0x000000B0u; // 800FA6CC
  c->lr=0x800FA6D4u; f_80295B14(c); // 800FA6D0
  c->r[3]=R32(c->r[26]+0x00000394u); // 800FA6D4
  c->r[4]=c->r[27]+0x00000064u; // 800FA6D8
  c->r[3]=c->r[3]+0x000000B0u; // 800FA6DC
  c->lr=0x800FA6E4u; f_80295B14(c); // 800FA6E0
  c->r[0]=R8(c->r[26]+0x0000006Eu); // 800FA6E4
  c->r[7]=c->r[1]+0x00000008u; // 800FA6E8
  c->r[6]=c->r[1]+0x0000000Cu; // 800FA6EC
  c->r[5]=c->r[1]+0x00000010u; // 800FA6F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800FA6F4
  c->r[4]=c->r[1]+0x00000020u; // 800FA6F8
  c->r[3]=c->r[26]+0x0000002Cu; // 800FA6FC
  {uint32_t ea=c->r[7]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 800FA700
  {uint32_t ea=c->r[27]+0x00000070u; WF32(ea,c->f[0]);} // 800FA704
  c->r[0]=R8(c->r[26]+0x0000006Eu); // 800FA708
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800FA70C
  {uint32_t ea=c->r[6]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 800FA710
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[0]);} // 800FA714
  c->r[0]=R8(c->r[26]+0x0000006Eu); // 800FA718
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800FA71C
  {uint32_t ea=c->r[5]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 800FA720
  {uint32_t ea=c->r[27]+0x00000090u; WF32(ea,c->f[0]);} // 800FA724
  c->r[0]=R8(c->r[26]+0x0000006Eu); // 800FA728
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800FA72C
  c->r[4]=c->r[4]+c->r[0]; // 800FA730
  c->lr=0x800FA738u; f_800361A0(c); // 800FA734
  c->r[4]=R32(c->r[26]+0x00000394u); // 800FA738
  c->r[3]=c->r[26]|c->r[26]; // 800FA73C
  c->lr=0x800FA744u; f_801F58BC(c); // 800FA740
  c->r[5]=R32(c->r[26]+0x00000394u); // 800FA744
  c->r[0]=0u+0x00000001u; // 800FA748
  c->r[3]=0u+0x805D0000u; // 800FA74C
  c->r[4]=c->r[26]+0x0000002Cu; // 800FA750
  W8(c->r[5]+0x0000001Cu,c->r[0]); // 800FA754
  c->r[3]=c->r[3]+0x000078B0u; // 800FA758
  c->lr=0x800FA760u; f_802351CC(c); // 800FA75C
  c->r[4]=R32(c->r[26]+0x00000394u); // 800FA760
  c->r[11]=c->r[1]+0x000000B0u; // 800FA764
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800FA768
  c->lr=0x800FA770u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FA76C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800FA770
  c->lr=c->r[0]; // 800FA774
  c->r[1]=c->r[1]+0x000000B0u; // 800FA778
  return; // 800FA77C
}

// fn_800FA780
void f_800FA780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA780
  c->r[0]=c->lr; // 800FA784
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA78C
  c->r[31]=c->r[3]|c->r[3]; // 800FA790
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FA794
  c->r[0]=R8(c->r[3]+0x00000028u); // 800FA798
  c->r[30]=R32(c->r[3]+0x000000ACu); // 800FA79C
  cmps(c,0,(int32_t)c->r[0],102); // 800FA7A0
  if (crb(c,2)) { goto L_800FA904; } // 800FA7A4
  if (!crb(c,0)) { goto L_800FA7BC; } // 800FA7A8
  cmps(c,0,(int32_t)c->r[0],100); // 800FA7AC
  if (crb(c,2)) { goto L_800FA7CC; } // 800FA7B0
  if (!crb(c,0)) { goto L_800FA8AC; } // 800FA7B4
  goto L_800FAA18; // 800FA7B8
L_800FA7BC:;
  cmps(c,0,(int32_t)c->r[0],104); // 800FA7BC
  if (crb(c,2)) { goto L_800FAA18; } // 800FA7C0
  if (!crb(c,0)) { goto L_800FAA18; } // 800FA7C4
  goto L_800FA9E4; // 800FA7C8
L_800FA7CC:;
  c->r[0]=R8(c->r[3]+0x00000029u); // 800FA7CC
  cmps(c,0,(int32_t)c->r[0],1); // 800FA7D0
  if (crb(c,2)) { goto L_800FA80C; } // 800FA7D4
  if (!crb(c,0)) { goto L_800FA864; } // 800FA7D8
  cmps(c,0,(int32_t)c->r[0],0); // 800FA7DC
  if (!crb(c,0)) { goto L_800FA7E8; } // 800FA7E0
  goto L_800FA864; // 800FA7E4
L_800FA7E8:;
  c->lr=0x800FA7ECu; f_800FAA30(c); // 800FA7E8
  {uint32_t ea=c->r[2]+0xFFFFAAC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FA7EC
  c->r[0]=0u+0x00000000u; // 800FA7F0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 800FA7F4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FA7F8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800FA7FC
  c->r[3]=R8(c->r[31]+0x00000029u); // 800FA800
  c->r[0]=c->r[3]+0x00000001u; // 800FA804
  W8(c->r[31]+0x00000029u,c->r[0]); // 800FA808
L_800FA80C:;
  c->lr=0x800FA810u; f_8024E040(c); // 800FA80C
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FA810
  {uint32_t ea=c->r[2]+0xFFFFAAC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FA814
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800FA818
  fcmp(c,0,c->f[1],c->f[0]); // 800FA81C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 800FA820
  if (crb(c,1)) { goto L_800FAA18; } // 800FA824
  c->r[3]=c->r[31]|c->r[31]; // 800FA828
  c->r[4]=0u+0x00000000u; // 800FA82C
  c->r[5]=0u+0x00000000u; // 800FA830
  c->lr=0x800FA838u; f_800FAAE4(c); // 800FA834
  c->r[3]=c->r[31]|c->r[31]; // 800FA838
  c->r[4]=0u+0x00000004u; // 800FA83C
  c->r[5]=0u+0x0000001Au; // 800FA840
  c->r[6]=0u+0x00000001u; // 800FA844
  c->r[7]=0u+0x00000001u; // 800FA848
  c->lr=0x800FA850u; f_8017900C(c); // 800FA84C
  {uint32_t ea=c->r[2]+0xFFFFAAC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FA850
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 800FA854
  c->r[3]=R8(c->r[31]+0x00000029u); // 800FA858
  c->r[0]=c->r[3]+0x00000001u; // 800FA85C
  W8(c->r[31]+0x00000029u,c->r[0]); // 800FA860
L_800FA864:;
  c->lr=0x800FA868u; f_8024E040(c); // 800FA864
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FA868
  {uint32_t ea=c->r[2]+0xFFFFAAC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FA86C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800FA870
  fcmp(c,0,c->f[1],c->f[0]); // 800FA874
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 800FA878
  if (crb(c,1)) { goto L_800FAA18; } // 800FA87C
  c->r[3]=c->r[31]|c->r[31]; // 800FA880
  c->r[4]=0u+0x00000001u; // 800FA884
  c->r[5]=0u+0x00000000u; // 800FA888
  c->lr=0x800FA890u; f_800FAAE4(c); // 800FA88C
  c->r[3]=0u+0x00000065u; // 800FA890
  c->r[0]=0u+0x00000001u; // 800FA894
  W8(c->r[31]+0x00000028u,c->r[3]); // 800FA898
  c->r[3]=c->r[31]|c->r[31]; // 800FA89C
  W8(c->r[31]+0x00000029u,c->r[0]); // 800FA8A0
  c->lr=0x800FA8A8u; f_800FAD4C(c); // 800FA8A4
  goto L_800FAA18; // 800FA8A8
L_800FA8AC:;
  c->r[0]=R8(c->r[3]+0x00000029u); // 800FA8AC
  cmps(c,0,(int32_t)c->r[0],0); // 800FA8B0
  if (crb(c,2)) { goto L_800FA8BC; } // 800FA8B4
  goto L_800FAA18; // 800FA8B8
L_800FA8BC:;
  c->lr=0x800FA8C0u; f_800FAD4C(c); // 800FA8BC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800FA8C0
  c->r[0]=0u+0x00000000u; // 800FA8C4
  c->r[3]=c->r[31]|c->r[31]; // 800FA8C8
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800FA8CC
  c->lr=0x800FA8D4u; f_800FAA30(c); // 800FA8D0
  c->r[3]=c->r[31]|c->r[31]; // 800FA8D4
  c->r[4]=0u+0x00000000u; // 800FA8D8
  c->r[5]=0u+0x0000001Eu; // 800FA8DC
  c->lr=0x800FA8E4u; f_800FAAE4(c); // 800FA8E0
  c->r[3]=c->r[31]|c->r[31]; // 800FA8E4
  c->r[4]=0u+0x00000001u; // 800FA8E8
  c->r[5]=0u+0x0000003Cu; // 800FA8EC
  c->lr=0x800FA8F4u; f_800FAAE4(c); // 800FA8F0
  c->r[3]=R8(c->r[31]+0x00000029u); // 800FA8F4
  c->r[0]=c->r[3]+0x00000001u; // 800FA8F8
  W8(c->r[31]+0x00000029u,c->r[0]); // 800FA8FC
  goto L_800FAA18; // 800FA900
L_800FA904:;
  c->r[0]=R8(c->r[3]+0x00000029u); // 800FA904
  cmps(c,0,(int32_t)c->r[0],0); // 800FA908
  if (crb(c,2)) { goto L_800FA914; } // 800FA90C
  goto L_800FA974; // 800FA910
L_800FA914:;
  c->r[4]=0u+0x00000000u; // 800FA914
  c->lr=0x800FA91Cu; f_800FAAC4(c); // 800FA918
  c->r[3]=c->r[31]|c->r[31]; // 800FA91C
  c->r[4]=0u+0x00000001u; // 800FA920
  c->lr=0x800FA928u; f_800FAAC4(c); // 800FA924
  c->r[3]=c->r[31]|c->r[31]; // 800FA928
  c->r[4]=0u+0x00000002u; // 800FA92C
  c->lr=0x800FA934u; f_800FAAC4(c); // 800FA930
  c->r[3]=c->r[31]|c->r[31]; // 800FA934
  c->r[4]=0u+0x00000003u; // 800FA938
  c->r[5]=0u+0x00000000u; // 800FA93C
  c->lr=0x800FA944u; f_800FAAE4(c); // 800FA940
  c->r[3]=c->r[31]|c->r[31]; // 800FA944
  c->r[4]=0u+0x00000004u; // 800FA948
  c->r[5]=0u+0x00000000u; // 800FA94C
  c->lr=0x800FA954u; f_800FAAE4(c); // 800FA950
  {uint32_t ea=c->r[2]+0xFFFFAACCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FA954
  c->r[0]=0u+0x00000000u; // 800FA958
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 800FA95C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FA960
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800FA964
  c->r[3]=R8(c->r[31]+0x00000029u); // 800FA968
  c->r[0]=c->r[3]+0x00000001u; // 800FA96C
  W8(c->r[31]+0x00000029u,c->r[0]); // 800FA970
L_800FA974:;
  c->lr=0x800FA978u; f_8024E040(c); // 800FA974
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FA978
  {uint32_t ea=c->r[2]+0xFFFFAAC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FA97C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800FA980
  fcmp(c,0,c->f[1],c->f[0]); // 800FA984
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 800FA988
  if (crb(c,1)) { goto L_800FAA18; } // 800FA98C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800FA990
  c->r[30]=0u+0x00000001u; // 800FA994
  c->r[3]=c->r[31]|c->r[31]; // 800FA998
  c->r[4]=0u+0x00000004u; // 800FA99C
  W8(c->r[5]+0x0000001Cu,c->r[30]); // 800FA9A0
  c->r[5]=0u+0x0000001Bu; // 800FA9A4
  c->r[6]=0u+0x00000001u; // 800FA9A8
  c->r[7]=0u+0x00000001u; // 800FA9AC
  c->lr=0x800FA9B4u; f_8017900C(c); // 800FA9B0
  c->r[3]=c->r[31]|c->r[31]; // 800FA9B4
  c->r[4]=0u+0x00000004u; // 800FA9B8
  c->r[5]=0u+0x00000020u; // 800FA9BC
  c->r[6]=0u+0x00000001u; // 800FA9C0
  c->r[7]=0u+0x00000001u; // 800FA9C4
  c->lr=0x800FA9CCu; f_8017900C(c); // 800FA9C8
  c->r[0]=0u+0x00000067u; // 800FA9CC
  W8(c->r[31]+0x00000029u,c->r[30]); // 800FA9D0
  c->r[3]=c->r[31]|c->r[31]; // 800FA9D4
  W8(c->r[31]+0x00000028u,c->r[0]); // 800FA9D8
  c->lr=0x800FA9E0u; f_800FAEBC(c); // 800FA9DC
  goto L_800FAA18; // 800FA9E0
L_800FA9E4:;
  c->r[0]=R8(c->r[3]+0x00000029u); // 800FA9E4
  cmps(c,0,(int32_t)c->r[0],0); // 800FA9E8
  if (crb(c,2)) { goto L_800FA9F4; } // 800FA9EC
  goto L_800FAA18; // 800FA9F0
L_800FA9F4:;
  c->lr=0x800FA9F8u; f_800FAEBC(c); // 800FA9F4
  c->r[3]=c->r[31]|c->r[31]; // 800FA9F8
  c->lr=0x800FAA00u; f_800FAA30(c); // 800FA9FC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800FAA00
  c->r[0]=0u+0x00000001u; // 800FAA04
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800FAA08
  c->r[3]=R8(c->r[31]+0x00000029u); // 800FAA0C
  c->r[0]=c->r[3]+0x00000001u; // 800FAA10
  W8(c->r[31]+0x00000029u,c->r[0]); // 800FAA14
L_800FAA18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAA18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FAA1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FAA20
  c->lr=c->r[0]; // 800FAA24
  c->r[1]=c->r[1]+0x00000010u; // 800FAA28
  return; // 800FAA2C
}

// fn_800FAA30
void f_800FAA30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAA30
  c->r[0]=c->lr; // 800FAA34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAA38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FAA3C
  c->r[31]=0u+0x00000000u; // 800FAA40
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FAA44
  c->r[30]=c->r[3]|c->r[3]; // 800FAA48
L_800FAA4C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FAA4C
  c->r[4]=c->r[31]|c->r[31]; // 800FAA50
  c->lr=0x800FAA58u; f_800FAA7C(c); // 800FAA54
  c->r[31]=c->r[31]+0x00000001u; // 800FAA58
  cmps(c,0,(int32_t)c->r[31],6); // 800FAA5C
  if (crb(c,0)) { IRQCHK(c); goto L_800FAA4C; } // 800FAA60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAA64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FAA68
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FAA6C
  c->lr=c->r[0]; // 800FAA70
  c->r[1]=c->r[1]+0x00000010u; // 800FAA74
  return; // 800FAA78
}

// fn_800FAA7C
void f_800FAA7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAA7C
  c->r[0]=c->lr; // 800FAA80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAA84
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FAA88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FAA8C
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800FAA90
  c->r[31]=c->r[3]+c->r[0]; // 800FAA94
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 800FAA98
  cmps(c,0,(int32_t)c->r[3],-1); // 800FAA9C
  if (crb(c,2)) { goto L_800FAAB0; } // 800FAAA0
  c->lr=0x800FAAA8u; f_8012FBB4(c); // 800FAAA4
  c->r[0]=0u+0xFFFFFFFFu; // 800FAAA8
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800FAAAC
L_800FAAB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAAB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FAAB4
  c->lr=c->r[0]; // 800FAAB8
  c->r[1]=c->r[1]+0x00000010u; // 800FAABC
  return; // 800FAAC0
}

// fn_800FAAC4
void f_800FAAC4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800FAAC4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FAAC8
  c->r[3]=c->r[3]+c->r[0]; // 800FAACC
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 800FAAD0
  cmps(c,0,(int32_t)c->r[3],-1); // 800FAAD4
  if (crb(c,2)) return; // 800FAAD8
  f_8012FB70(c); return; // 800FAADC
  return; // 800FAAE0
}

// fn_800FAAE4
void f_800FAAE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAAE4
  c->r[0]=c->lr; // 800FAAE8
  c->r[11]=0u+0x00000000u; // 800FAAEC
  c->r[10]=0u+0x803A0000u; // 800FAAF0
  W32(c->r[1]+0x00000084u,c->r[0]); // 800FAAF4
  cmps(c,0,(int32_t)c->r[4],2); // 800FAAF8
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800FAAFC
  W32(c->r[1]+0x00000078u,c->r[30]); // 800FAB00
  c->r[30]=c->r[5]|c->r[5]; // 800FAB04
  W32(c->r[1]+0x00000074u,c->r[29]); // 800FAB08
  c->r[29]=c->r[4]|c->r[4]; // 800FAB0C
  W32(c->r[1]+0x00000070u,c->r[28]); // 800FAB10
  c->r[28]=c->r[3]|c->r[3]; // 800FAB14
  {uint32_t ea=c->r[10]+0xFFFFF210u; c->r[9]=R32(ea); c->r[10]=ea;} // 800FAB18
  W32(c->r[1]+0x00000014u,c->r[11]); // 800FAB1C
  c->r[8]=R32(c->r[10]+0x00000004u); // 800FAB20
  c->r[7]=R32(c->r[10]+0x00000008u); // 800FAB24
  c->r[6]=R32(c->r[10]+0x0000000Cu); // 800FAB28
  c->r[5]=R32(c->r[10]+0x00000010u); // 800FAB2C
  c->r[0]=R32(c->r[10]+0x00000014u); // 800FAB30
  c->r[31]=R32(c->r[3]+0x000000ACu); // 800FAB34
  W32(c->r[1]+0x00000018u,c->r[11]); // 800FAB38
  W32(c->r[1]+0x0000001Cu,c->r[11]); // 800FAB3C
  W32(c->r[1]+0x00000008u,c->r[11]); // 800FAB40
  W32(c->r[1]+0x0000000Cu,c->r[11]); // 800FAB44
  W32(c->r[1]+0x00000010u,c->r[11]); // 800FAB48
  W32(c->r[1]+0x00000050u,c->r[9]); // 800FAB4C
  W32(c->r[1]+0x00000054u,c->r[8]); // 800FAB50
  W32(c->r[1]+0x00000058u,c->r[7]); // 800FAB54
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 800FAB58
  W32(c->r[1]+0x00000060u,c->r[5]); // 800FAB5C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800FAB60
  if (crb(c,2)) { goto L_800FAD2C; } // 800FAB64
  if (!crb(c,0)) { goto L_800FAB7C; } // 800FAB68
  cmps(c,0,(int32_t)c->r[4],0); // 800FAB6C
  if (crb(c,2)) { goto L_800FAB88; } // 800FAB70
  if (!crb(c,0)) { goto L_800FABCC; } // 800FAB74
  goto L_800FAD2C; // 800FAB78
L_800FAB7C:;
  cmps(c,0,(int32_t)c->r[4],4); // 800FAB7C
  if (crb(c,2)) { goto L_800FAC38; } // 800FAB80
  if (!crb(c,0)) { goto L_800FAD2C; } // 800FAB84
L_800FAB88:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FAB88
  c->r[3]=c->r[1]+0x00000050u; // 800FAB8C
  c->r[28]=c->r[31]+c->r[0]; // 800FAB90
  c->r[4]=R32(c->r[3]+c->r[0]); // 800FAB94
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 800FAB98
  c->r[6]=c->r[30]|c->r[30]; // 800FAB9C
  c->r[5]=0u+0x00000000u; // 800FABA0
  c->lr=0x800FABA8u; f_8012FAE0(c); // 800FABA4
  cmps(c,0,(int32_t)c->r[3],-1); // 800FABA8
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 800FABAC
  if (crb(c,2)) { goto L_800FAD2C; } // 800FABB0
  c->r[3]=0u+0x80550000u; // 800FABB4
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800FABB8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FABBC
  c->r[5]=c->r[31]+0x00000034u; // 800FABC0
  c->lr=0x800FABC8u; f_8018DEB8(c); // 800FABC4
  goto L_800FAD2C; // 800FABC8
L_800FABCC:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800FABCC
  c->r[3]=c->r[1]+0x00000050u; // 800FABD0
  c->r[6]=c->r[30]|c->r[30]; // 800FABD4
  c->r[5]=0u+0x00000000u; // 800FABD8
  c->r[0]=c->r[4]+c->r[0]; // 800FABDC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FABE0
  c->r[7]=c->r[31]+c->r[0]; // 800FABE4
  c->r[4]=R32(c->r[3]+c->r[0]); // 800FABE8
  c->r[3]=R32(c->r[7]+0x0000001Cu); // 800FABEC
  c->lr=0x800FABF4u; f_8012FAE0(c); // 800FABF0
  c->r[0]=R8(c->r[28]+0x0000006Eu); // 800FABF4
  cmps(c,0,(int32_t)c->r[3],-1); // 800FABF8
  c->r[0]=c->r[29]+c->r[0]; // 800FABFC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FAC00
  c->r[4]=c->r[31]+c->r[0]; // 800FAC04
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 800FAC08
  if (crb(c,2)) { goto L_800FAD2C; } // 800FAC0C
  c->r[0]=R8(c->r[28]+0x0000006Eu); // 800FAC10
  c->r[3]=0u+0x80550000u; // 800FAC14
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FAC18
  c->r[5]=c->r[31]+0x00000034u; // 800FAC1C
  c->r[0]=c->r[29]+c->r[0]; // 800FAC20
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FAC24
  c->r[4]=c->r[31]+c->r[0]; // 800FAC28
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 800FAC2C
  c->lr=0x800FAC34u; f_8018DEB8(c); // 800FAC30
  goto L_800FAD2C; // 800FAC34
L_800FAC38:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800FAC38
  cmps(c,0,(int32_t)c->r[0],0); // 800FAC3C
  if (!crb(c,2)) { goto L_800FACB8; } // 800FAC40
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FAC44
  c->r[3]=c->r[1]+0x00000050u; // 800FAC48
  c->r[28]=c->r[31]+c->r[0]; // 800FAC4C
  c->r[4]=R32(c->r[3]+c->r[0]); // 800FAC50
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 800FAC54
  c->r[6]=c->r[30]|c->r[30]; // 800FAC58
  c->r[5]=0u+0x00000000u; // 800FAC5C
  c->lr=0x800FAC64u; f_8012FAE0(c); // 800FAC60
  cmps(c,0,(int32_t)c->r[3],-1); // 800FAC64
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 800FAC68
  if (crb(c,2)) { goto L_800FACB8; } // 800FAC6C
  c->r[6]=R32(c->r[1]+0x00000008u); // 800FAC70
  c->r[3]=0u+0x80550000u; // 800FAC74
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800FAC78
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FAC7C
  c->r[0]=R32(c->r[1]+0x00000010u); // 800FAC80
  c->r[5]=c->r[1]+0x00000044u; // 800FAC84
  W32(c->r[1]+0x00000038u,c->r[6]); // 800FAC88
  c->r[6]=c->r[1]+0x00000038u; // 800FAC8C
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 800FAC90
  W32(c->r[1]+0x00000040u,c->r[0]); // 800FAC94
  c->r[4]=R32(c->r[31]+0x00000094u); // 800FAC98
  c->r[0]=R32(c->r[31]+0x00000098u); // 800FAC9C
  W32(c->r[1]+0x00000044u,c->r[4]); // 800FACA0
  W32(c->r[1]+0x00000048u,c->r[0]); // 800FACA4
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 800FACA8
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800FACAC
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800FACB0
  c->lr=0x800FACB8u; f_8018DBD0(c); // 800FACB4
L_800FACB8:;
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800FACB8
  c->r[3]=c->r[1]+0x00000054u; // 800FACBC
  c->r[28]=c->r[31]+c->r[0]; // 800FACC0
  c->r[4]=R32(c->r[3]+c->r[0]); // 800FACC4
  c->r[3]=R32(c->r[28]+0x00000020u); // 800FACC8
  c->r[6]=c->r[30]|c->r[30]; // 800FACCC
  c->r[5]=0u+0x00000000u; // 800FACD0
  c->lr=0x800FACD8u; f_8012FAE0(c); // 800FACD4
  cmps(c,0,(int32_t)c->r[3],-1); // 800FACD8
  W32(c->r[28]+0x00000020u,c->r[3]); // 800FACDC
  if (crb(c,2)) { goto L_800FAD2C; } // 800FACE0
  c->r[6]=R32(c->r[1]+0x00000008u); // 800FACE4
  c->r[3]=0u+0x80550000u; // 800FACE8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800FACEC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800FACF0
  c->r[0]=R32(c->r[1]+0x00000010u); // 800FACF4
  c->r[5]=c->r[1]+0x0000002Cu; // 800FACF8
  W32(c->r[1]+0x00000020u,c->r[6]); // 800FACFC
  c->r[6]=c->r[1]+0x00000020u; // 800FAD00
  W32(c->r[1]+0x00000024u,c->r[4]); // 800FAD04
  W32(c->r[1]+0x00000028u,c->r[0]); // 800FAD08
  c->r[4]=R32(c->r[31]+0x000000A0u); // 800FAD0C
  c->r[0]=R32(c->r[31]+0x000000A4u); // 800FAD10
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800FAD14
  W32(c->r[1]+0x00000030u,c->r[0]); // 800FAD18
  c->r[0]=R32(c->r[31]+0x000000A8u); // 800FAD1C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FAD20
  c->r[4]=R32(c->r[28]+0x00000020u); // 800FAD24
  c->lr=0x800FAD2Cu; f_8018DBD0(c); // 800FAD28
L_800FAD2C:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800FAD2C
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800FAD30
  c->r[30]=R32(c->r[1]+0x00000078u); // 800FAD34
  c->r[29]=R32(c->r[1]+0x00000074u); // 800FAD38
  c->r[28]=R32(c->r[1]+0x00000070u); // 800FAD3C
  c->lr=c->r[0]; // 800FAD40
  c->r[1]=c->r[1]+0x00000080u; // 800FAD44
  return; // 800FAD48
}

// fn_800FAD4C
void f_800FAD4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAD4C
  c->r[0]=c->lr; // 800FAD50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAD54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FAD58
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800FAD5C
  cmps(c,0,(int32_t)c->r[0],0); // 800FAD60
  if (!crb(c,2)) { goto L_800FAE3C; } // 800FAD64
  c->r[31]=0u+0x80620000u; // 800FAD68
  c->r[4]=0u+0x00000069u; // 800FAD6C
  c->r[31]=c->r[31]+0x00007688u; // 800FAD70
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FAD74
  c->lr=0x800FAD7Cu; f_8003560C(c); // 800FAD78
  cmps(c,0,(int32_t)c->r[3],0); // 800FAD7C
  c->r[0]=c->r[3]|c->r[3]; // 800FAD80
  if (crb(c,2)) { goto L_800FADC0; } // 800FAD84
  c->r[3]=0u+0x80550000u; // 800FAD88
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800FAD8C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FAD90
  c->lr=0x800FAD98u; f_8019C920(c); // 800FAD94
  {uint32_t ea=c->r[2]+0xFFFFAAC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FAD98
  c->r[4]=0u+0x00000069u; // 800FAD9C
  c->r[5]=0u+0x00000000u; // 800FADA0
  c->r[6]=0u+0x00000000u; // 800FADA4
  c->r[7]=0u+0x00000000u; // 800FADA8
  c->lr=0x800FADB0u; f_801F4D44(c); // 800FADAC
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FADB0
  c->r[4]=0u+0x00000069u; // 800FADB4
  c->r[5]=0u+0x00000000u; // 800FADB8
  c->lr=0x800FADC0u; f_80038998(c); // 800FADBC
L_800FADC0:;
  c->r[31]=0u+0x80620000u; // 800FADC0
  c->r[4]=0u+0x0000006Au; // 800FADC4
  c->r[31]=c->r[31]+0x00007688u; // 800FADC8
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FADCC
  c->lr=0x800FADD4u; f_8003560C(c); // 800FADD0
  cmps(c,0,(int32_t)c->r[3],0); // 800FADD4
  c->r[0]=c->r[3]|c->r[3]; // 800FADD8
  if (crb(c,2)) { goto L_800FAE18; } // 800FADDC
  c->r[3]=0u+0x80550000u; // 800FADE0
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800FADE4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FADE8
  c->lr=0x800FADF0u; f_8019C920(c); // 800FADEC
  {uint32_t ea=c->r[2]+0xFFFFAAC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FADF0
  c->r[4]=0u+0x00000069u; // 800FADF4
  c->r[5]=0u+0x00000000u; // 800FADF8
  c->r[6]=0u+0x00000000u; // 800FADFC
  c->r[7]=0u+0x00000000u; // 800FAE00
  c->lr=0x800FAE08u; f_801F4D44(c); // 800FAE04
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FAE08
  c->r[4]=0u+0x0000006Au; // 800FAE0C
  c->r[5]=0u+0x00000000u; // 800FAE10
  c->lr=0x800FAE18u; f_80038998(c); // 800FAE14
L_800FAE18:;
  c->r[31]=0u+0x80620000u; // 800FAE18
  c->r[4]=0u+0x00000005u; // 800FAE1C
  c->r[31]=c->r[31]+0x00007688u; // 800FAE20
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FAE24
  c->lr=0x800FAE2Cu; f_8003DCAC(c); // 800FAE28
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FAE2C
  c->r[4]=0u+0x00000006u; // 800FAE30
  c->lr=0x800FAE38u; f_8003DCAC(c); // 800FAE34
  goto L_800FAEA8; // 800FAE38
L_800FAE3C:;
  c->r[31]=0u+0x80620000u; // 800FAE3C
  c->r[4]=0u+0x0000006Bu; // 800FAE40
  c->r[31]=c->r[31]+0x00007688u; // 800FAE44
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FAE48
  c->lr=0x800FAE50u; f_8003560C(c); // 800FAE4C
  cmps(c,0,(int32_t)c->r[3],0); // 800FAE50
  c->r[0]=c->r[3]|c->r[3]; // 800FAE54
  if (crb(c,2)) { goto L_800FAE94; } // 800FAE58
  c->r[3]=0u+0x80550000u; // 800FAE5C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800FAE60
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FAE64
  c->lr=0x800FAE6Cu; f_8019C920(c); // 800FAE68
  {uint32_t ea=c->r[2]+0xFFFFAAC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FAE6C
  c->r[4]=0u+0x00000069u; // 800FAE70
  c->r[5]=0u+0x00000000u; // 800FAE74
  c->r[6]=0u+0x00000000u; // 800FAE78
  c->r[7]=0u+0x00000000u; // 800FAE7C
  c->lr=0x800FAE84u; f_801F4D44(c); // 800FAE80
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FAE84
  c->r[4]=0u+0x0000006Bu; // 800FAE88
  c->r[5]=0u+0x00000000u; // 800FAE8C
  c->lr=0x800FAE94u; f_80038998(c); // 800FAE90
L_800FAE94:;
  c->r[3]=0u+0x80620000u; // 800FAE94
  c->r[4]=0u+0x00000007u; // 800FAE98
  c->r[3]=c->r[3]+0x00007688u; // 800FAE9C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800FAEA0
  c->lr=0x800FAEA8u; f_8003DCAC(c); // 800FAEA4
L_800FAEA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAEA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FAEAC
  c->lr=c->r[0]; // 800FAEB0
  c->r[1]=c->r[1]+0x00000010u; // 800FAEB4
  return; // 800FAEB8
}

// fn_800FAEBC
void f_800FAEBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAEBC
  c->r[0]=c->lr; // 800FAEC0
  c->r[4]=0u+0x00000015u; // 800FAEC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FAEC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FAECC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FAED0
  c->r[30]=0u+0x80620000u; // 800FAED4
  c->r[30]=c->r[30]+0x00007688u; // 800FAED8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FAEDC
  c->r[29]=c->r[3]|c->r[3]; // 800FAEE0
  c->r[3]=R32(c->r[30]+0x00000014u); // 800FAEE4
  c->lr=0x800FAEECu; f_8003560C(c); // 800FAEE8
  c->r[4]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 800FAEEC
  if (crb(c,0)) { goto L_800FAFE0; } // 800FAEF0
  c->r[0]=R8(c->r[29]+0x0000006Eu); // 800FAEF4
  c->r[3]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FAEF8
  c->r[4]=c->r[3]-c->r[4]; // 800FAEFC
  cmps(c,0,(int32_t)c->r[0],0); // 800FAF00
  if (!crb(c,2)) { goto L_800FAF98; } // 800FAF04
  c->r[29]=c->r[4]+0x0000001Cu; // 800FAF08
  c->r[31]=0u+0x80550000u; // 800FAF0C
  c->r[3]=c->r[31]+0xFFFFCE54u; // 800FAF10
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 800FAF14
  c->lr=0x800FAF1Cu; f_8019C920(c); // 800FAF18
  {uint32_t ea=c->r[2]+0xFFFFAAC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FAF1C
  c->r[4]=0u+0x0000006Au; // 800FAF20
  c->r[5]=0u+0x00000000u; // 800FAF24
  c->r[6]=0u+0x00000000u; // 800FAF28
  c->r[7]=0u+0x00000000u; // 800FAF2C
  c->lr=0x800FAF34u; f_801F4D44(c); // 800FAF30
  c->r[3]=R32(c->r[30]+0x00000014u); // 800FAF34
  c->r[5]=c->r[29]|c->r[29]; // 800FAF38
  c->r[4]=0u+0x00000069u; // 800FAF3C
  c->lr=0x800FAF44u; f_80038998(c); // 800FAF40
  c->r[0]=c->r[29]+0x00000001u; // 800FAF44
  c->r[3]=c->r[31]+0xFFFFCE54u; // 800FAF48
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800FAF4C
  c->lr=0x800FAF54u; f_8019C920(c); // 800FAF50
  {uint32_t ea=c->r[2]+0xFFFFAAC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FAF54
  c->r[4]=0u+0x0000006Au; // 800FAF58
  c->r[5]=0u+0x00000000u; // 800FAF5C
  c->r[6]=0u+0x00000000u; // 800FAF60
  c->r[7]=0u+0x00000000u; // 800FAF64
  c->lr=0x800FAF6Cu; f_801F4D44(c); // 800FAF68
  c->r[3]=R32(c->r[30]+0x00000014u); // 800FAF6C
  c->r[5]=c->r[29]+0x00000001u; // 800FAF70
  c->r[4]=0u+0x0000006Au; // 800FAF74
  c->lr=0x800FAF7Cu; f_80038998(c); // 800FAF78
  c->r[3]=R32(c->r[30]+0x00000014u); // 800FAF7C
  c->r[4]=0u+0x00000005u; // 800FAF80
  c->lr=0x800FAF88u; f_80038A08(c); // 800FAF84
  c->r[3]=R32(c->r[30]+0x00000014u); // 800FAF88
  c->r[4]=0u+0x00000006u; // 800FAF8C
  c->lr=0x800FAF94u; f_80038A08(c); // 800FAF90
  goto L_800FAFE0; // 800FAF94
L_800FAF98:;
  c->r[31]=c->r[4]+0x0000001Eu; // 800FAF98
  c->r[3]=0u+0x80550000u; // 800FAF9C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800FAFA0
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 800FAFA4
  c->lr=0x800FAFACu; f_8019C920(c); // 800FAFA8
  {uint32_t ea=c->r[2]+0xFFFFAAC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FAFAC
  c->r[4]=0u+0x0000006Au; // 800FAFB0
  c->r[5]=0u+0x00000000u; // 800FAFB4
  c->r[6]=0u+0x00000000u; // 800FAFB8
  c->r[7]=0u+0x00000000u; // 800FAFBC
  c->lr=0x800FAFC4u; f_801F4D44(c); // 800FAFC0
  c->r[3]=R32(c->r[30]+0x00000014u); // 800FAFC4
  c->r[5]=c->r[31]|c->r[31]; // 800FAFC8
  c->r[4]=0u+0x0000006Bu; // 800FAFCC
  c->lr=0x800FAFD4u; f_80038998(c); // 800FAFD0
  c->r[3]=R32(c->r[30]+0x00000014u); // 800FAFD4
  c->r[4]=0u+0x00000007u; // 800FAFD8
  c->lr=0x800FAFE0u; f_80038A08(c); // 800FAFDC
L_800FAFE0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FAFE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FAFE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FAFE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FAFEC
  c->lr=c->r[0]; // 800FAFF0
  c->r[1]=c->r[1]+0x00000020u; // 800FAFF4
  return; // 800FAFF8
}

// fn_800FAFFC
void f_800FAFFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAFFC
  c->r[0]=c->lr; // 800FB000
  c->r[4]=c->r[3]|c->r[3]; // 800FB004
  c->r[3]=0u+0x000002A7u; // 800FB008
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB00C
  c->r[5]=0u+0x00000000u; // 800FB010
  c->r[4]=R32(c->r[4]+0x00000394u); // 800FB014
  c->r[4]=c->r[4]+0x0000010Cu; // 800FB018
  c->lr=0x800FB020u; f_8024EE50(c); // 800FB01C
  c->r[0]=cntlz(c->r[3]); // 800FB020
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800FB024
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB028
  c->lr=c->r[0]; // 800FB02C
  c->r[1]=c->r[1]+0x00000010u; // 800FB030
  return; // 800FB034
}

// fn_800FB038
void f_800FB038(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB038
  c->r[0]=c->lr; // 800FB03C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB040
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB044
  c->r[31]=c->r[3]|c->r[3]; // 800FB048
  c->lr=0x800FB050u; f_801F4F28(c); // 800FB04C
  c->r[3]=R32(c->r[31]+0x000003C0u); // 800FB050
  cmps(c,0,(int32_t)c->r[3],105); // 800FB054
  if (!crb(c,0)) { goto L_800FB078; } // 800FB058
  cmps(c,0,(int32_t)c->r[3],100); // 800FB05C
  if (!crb(c,0)) { goto L_800FB068; } // 800FB060
  goto L_800FB078; // 800FB064
L_800FB068:;
  c->r[0]=0u+0x00000000u; // 800FB068
  W16(c->r[31]+0x000003BCu,c->r[3]); // 800FB06C
  W8(c->r[31]+0x00000028u,c->r[3]); // 800FB070
  W8(c->r[31]+0x00000029u,c->r[0]); // 800FB074
L_800FB078:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB078
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB07C
  c->lr=c->r[0]; // 800FB080
  c->r[1]=c->r[1]+0x00000010u; // 800FB084
  return; // 800FB088
}

// fn_800FB08C
void f_800FB08C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB08C
  c->r[0]=c->lr; // 800FB090
  cmps(c,0,(int32_t)c->r[3],0); // 800FB094
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB098
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB09C
  c->r[31]=c->r[4]|c->r[4]; // 800FB0A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FB0A4
  c->r[30]=c->r[3]|c->r[3]; // 800FB0A8
  if (crb(c,2)) { goto L_800FB0C8; } // 800FB0AC
  c->r[4]=0u+0x00000000u; // 800FB0B0
  c->lr=0x800FB0B8u; f_8026A06C(c); // 800FB0B4
  cmps(c,0,(int32_t)c->r[31],0); // 800FB0B8
  if (!crb(c,1)) { goto L_800FB0C8; } // 800FB0BC
  c->r[3]=c->r[30]|c->r[30]; // 800FB0C0
  c->lr=0x800FB0C8u; f_8026A268(c); // 800FB0C4
L_800FB0C8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB0C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB0CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FB0D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB0D4
  c->lr=c->r[0]; // 800FB0D8
  c->r[1]=c->r[1]+0x00000010u; // 800FB0DC
  return; // 800FB0E0
}

// fn_800FB0E4
void f_800FB0E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB0E4
  c->r[0]=c->lr; // 800FB0E8
  c->r[4]=0u+0x00000000u; // 800FB0EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB0F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB0F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FB0F8
  c->r[30]=c->r[3]|c->r[3]; // 800FB0FC
  c->lr=0x800FB104u; f_801F57D0(c); // 800FB100
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FB104
  c->r[3]=c->r[30]|c->r[30]; // 800FB108
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800FB10C
  c->ctr=c->r[12]; // 800FB110
  if (true) { c->lr=0x800FB118u; dispatch(c,c->ctr); } // 800FB114
  c->r[3]=c->r[30]|c->r[30]; // 800FB118
  c->lr=0x800FB120u; f_801F4B94(c); // 800FB11C
  c->r[3]=0u+0x00000003u; // 800FB120
  c->r[0]=0u+0x0000006Bu; // 800FB124
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800FB128
  c->r[3]=c->r[30]|c->r[30]; // 800FB12C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800FB130
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800FB134
  c->lr=0x800FB13Cu; f_801F58BC(c); // 800FB138
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FB13C
  c->r[31]=0u+0x00000001u; // 800FB140
  c->r[4]=0u+0x803A0000u; // 800FB144
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800FB148
  c->r[4]=c->r[4]+0xFFFFF284u; // 800FB14C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FB150
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FB154
  c->lr=0x800FB15Cu; f_80256EC4(c); // 800FB158
  c->r[6]=R32(c->r[30]+0x00000394u); // 800FB15C
  c->r[5]=0u+0x805D0000u; // 800FB160
  c->r[4]=c->r[30]+0x0000002Cu; // 800FB164
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800FB168
  c->r[3]=c->r[5]+0x000078B0u; // 800FB16C
  c->lr=0x800FB174u; f_802351CC(c); // 800FB170
  c->r[5]=R32(c->r[30]+0x00000394u); // 800FB174
  c->r[4]=0u+0x00000000u; // 800FB178
  {uint32_t ea=c->r[2]+0xFFFFAAD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FB17C
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800FB180
  c->r[3]=c->r[30]|c->r[30]; // 800FB184
  c->f[2]=c->f[1]; // 800FB188
  c->r[5]=0u+0x00000001u; // 800FB18C
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800FB190
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FB194
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FB198
  c->ctr=c->r[12]; // 800FB19C
  if (true) { c->lr=0x800FB1A4u; dispatch(c,c->ctr); } // 800FB1A0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800FB1A4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800FB1A8
  c->lr=0x800FB1B0u; f_802501B0(c); // 800FB1AC
  c->r[3]=c->r[30]|c->r[30]; // 800FB1B0
  c->lr=0x800FB1B8u; f_801F56F4(c); // 800FB1B4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800FB1B8
  c->r[3]=c->r[30]|c->r[30]; // 800FB1BC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800FB1C0
  c->ctr=c->r[12]; // 800FB1C4
  if (true) { c->lr=0x800FB1CCu; dispatch(c,c->ctr); } // 800FB1C8
  {uint32_t ea=c->r[2]+0xFFFFAAD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FB1CC
  c->r[3]=c->r[30]+0x0000000Cu; // 800FB1D0
  c->lr=0x800FB1D8u; f_80037668(c); // 800FB1D4
  c->r[31]=0u+0x803A0000u; // 800FB1D8
  c->r[3]=c->r[30]+0x00000074u; // 800FB1DC
  c->r[4]=c->r[31]+0xFFFFF278u; // 800FB1E0
  c->lr=0x800FB1E8u; f_800361A0(c); // 800FB1E4
  c->r[3]=c->r[30]+0x00000080u; // 800FB1E8
  c->r[4]=c->r[31]+0xFFFFF278u; // 800FB1EC
  c->lr=0x800FB1F4u; f_800361A0(c); // 800FB1F0
  c->r[0]=0u+0x00000000u; // 800FB1F4
  W8(c->r[30]+0x0000008Cu,c->r[0]); // 800FB1F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB1FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FB200
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB204
  c->lr=c->r[0]; // 800FB208
  c->r[1]=c->r[1]+0x00000010u; // 800FB20C
  return; // 800FB210
}

// fn_800FB214
void f_800FB214(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB214
  c->r[0]=c->lr; // 800FB218
  c->r[4]=c->r[3]|c->r[3]; // 800FB21C
  c->r[3]=0u+0x0000035Fu; // 800FB220
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB224
  c->r[5]=0u+0x00000000u; // 800FB228
  c->r[4]=R32(c->r[4]+0x00000394u); // 800FB22C
  c->r[4]=c->r[4]+0x0000010Cu; // 800FB230
  c->lr=0x800FB238u; f_8024EE50(c); // 800FB234
  c->r[0]=cntlz(c->r[3]); // 800FB238
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800FB23C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB240
  c->lr=c->r[0]; // 800FB244
  c->r[1]=c->r[1]+0x00000010u; // 800FB248
  return; // 800FB24C
}

// fn_800FB250
void f_800FB250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB250
  c->r[0]=c->lr; // 800FB254
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB25C
  c->r[31]=c->r[3]|c->r[3]; // 800FB260
  c->lr=0x800FB268u; f_800FB444(c); // 800FB264
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800FB268
  c->r[3]=c->r[31]|c->r[31]; // 800FB26C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800FB270
  c->ctr=c->r[12]; // 800FB274
  if (true) { c->lr=0x800FB27Cu; dispatch(c,c->ctr); } // 800FB278
  c->r[3]=c->r[31]|c->r[31]; // 800FB27C
  c->lr=0x800FB284u; f_801F4C0C(c); // 800FB280
  c->r[3]=c->r[31]|c->r[31]; // 800FB284
  c->lr=0x800FB28Cu; f_800FB3A4(c); // 800FB288
  c->r[3]=c->r[31]|c->r[31]; // 800FB28C
  c->lr=0x800FB294u; f_801F56F4(c); // 800FB290
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB294
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB298
  c->lr=c->r[0]; // 800FB29C
  c->r[1]=c->r[1]+0x00000010u; // 800FB2A0
  return; // 800FB2A4
}

// fn_800FB2A8
void f_800FB2A8(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800FB2A8
}

// fn_800FB2AC
void f_800FB2AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB2AC
  c->r[0]=c->lr; // 800FB2B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB2B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB2B8
  c->r[31]=c->r[3]|c->r[3]; // 800FB2BC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800FB2C0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800FB2C4
  c->lr=0x800FB2CCu; f_802501B0(c); // 800FB2C8
  c->r[3]=c->r[31]|c->r[31]; // 800FB2CC
  c->r[4]=0u+0x00000000u; // 800FB2D0
  c->lr=0x800FB2D8u; f_801F5244(c); // 800FB2D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB2D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB2DC
  c->lr=c->r[0]; // 800FB2E0
  c->r[1]=c->r[1]+0x00000010u; // 800FB2E4
  return; // 800FB2E8
}

// fn_800FB2EC
void f_800FB2EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB2EC
  c->r[0]=c->lr; // 800FB2F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB2F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FB2F8
  c->r[31]=c->r[3]|c->r[3]; // 800FB2FC
  c->lr=0x800FB304u; f_801F51B8(c); // 800FB300
  c->r[0]=0u+0x00000000u; // 800FB304
  c->r[7]=0u+0x803D0000u; // 800FB308
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800FB30C
  c->r[3]=c->r[31]|c->r[31]; // 800FB310
  c->r[4]=c->r[1]+0x00000008u; // 800FB314
  {uint32_t ea=c->r[7]+0x000058C8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800FB318
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FB31C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800FB320
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FB324
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FB328
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FB32C
  c->lr=0x800FB334u; f_800FB348(c); // 800FB330
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FB334
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FB338
  c->lr=c->r[0]; // 800FB33C
  c->r[1]=c->r[1]+0x00000020u; // 800FB340
  return; // 800FB344
}

// fn_800FB348
void f_800FB348(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB348
  c->r[0]=c->lr; // 800FB34C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB350
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB354
  c->r[31]=c->r[4]|c->r[4]; // 800FB358
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FB35C
  c->r[30]=c->r[3]|c->r[3]; // 800FB360
  c->r[3]=c->r[31]|c->r[31]; // 800FB364
  c->lr=0x800FB36Cu; f_802B9FDC(c); // 800FB368
  cmps(c,0,(int32_t)c->r[3],0); // 800FB36C
  if (crb(c,2)) { goto L_800FB38C; } // 800FB370
  c->r[3]=R32(c->r[31]+0x00000000u); // 800FB374
  c->r[0]=R32(c->r[31]+0x00000004u); // 800FB378
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800FB37C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800FB380
  c->r[0]=R32(c->r[31]+0x00000008u); // 800FB384
  W32(c->r[30]+0x00000024u,c->r[0]); // 800FB388
L_800FB38C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB38C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB390
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FB394
  c->lr=c->r[0]; // 800FB398
  c->r[1]=c->r[1]+0x00000010u; // 800FB39C
  return; // 800FB3A0
}

