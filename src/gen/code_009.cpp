#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800DEFB0
void f_800DEFB0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DEFB0
  W8(c->r[3]+0x00000095u,c->r[4]); // 800DEFB4
  c->r[0]=c->r[0]|0x00000081u; // 800DEFB8
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DEFBC
  return; // 800DEFC0
}

// fn_800DEFC4
void f_800DEFC4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DEFC4
  c->r[0]=c->r[0]|0x00000082u; // 800DEFC8
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DEFCC
  return; // 800DEFD0
}

// fn_800DEFD4
void f_800DEFD4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DEFD4
  c->r[0]=c->r[0]|0x00000100u; // 800DEFD8
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DEFDC
  return; // 800DEFE0
}

// fn_800DEFE4
void f_800DEFE4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DEFE4
  c->r[0]=c->r[0]|0x00000084u; // 800DEFE8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFDFFu; // 800DEFEC
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DEFF0
  return; // 800DEFF4
}

// fn_800DEFF8
void f_800DEFF8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DEFF8
  c->r[0]=c->r[0]|0x00000200u; // 800DEFFC
  W32(c->r[3]+0x00000078u,c->r[0]); // 800DF000
  return; // 800DF004
}

// fn_800DF008
void f_800DF008(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000094u); // 800DF008
  return; // 800DF00C
}

// fn_800DF010
void f_800DF010(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF010
  return; // 800DF014
}

// fn_800DF018
void f_800DF018(Ctx* __restrict c) {
  c->r[4]=R8(c->r[3]+0x00000091u); // 800DF018
  c->r[6]=R8(c->r[3]+0x00000093u); // 800DF01C
  c->r[7]=R8(c->r[3]+0x00000090u); // 800DF020
  c->r[5]=R8(c->r[3]+0x00000092u); // 800DF024
  c->r[3]=c->r[6]+c->r[4]; // 800DF028
  c->r[0]=c->r[5]+c->r[7]; // 800DF02C
  c->r[0]=c->r[3]+c->r[0]; // 800DF030
  cmps(c,0,(int32_t)c->r[0],5); // 800DF034
  if (!crb(c,0)) { goto L_800DF044; } // 800DF038
  c->r[3]=0u+0x00000000u; // 800DF03C
  return; // 800DF040
L_800DF044:;
  cmpu(c,0,c->r[4],0x00000001u); // 800DF044
  if (!crb(c,2)) { goto L_800DF064; } // 800DF048
  cmpu(c,0,c->r[5],0x00000002u); // 800DF04C
  if (!crb(c,2)) { goto L_800DF064; } // 800DF050
  cmpu(c,0,c->r[6],0x00000002u); // 800DF054
  if (!crb(c,2)) { goto L_800DF064; } // 800DF058
  c->r[3]=0u+0x00000001u; // 800DF05C
  return; // 800DF060
L_800DF064:;
  cmpu(c,0,c->r[7],0x00000001u); // 800DF064
  if (!crb(c,2)) { goto L_800DF084; } // 800DF068
  cmpu(c,0,c->r[4],0x00000001u); // 800DF06C
  if (!crb(c,2)) { goto L_800DF084; } // 800DF070
  cmpu(c,0,c->r[5],0x00000003u); // 800DF074
  if (!crb(c,2)) { goto L_800DF084; } // 800DF078
  c->r[3]=0u+0x00000002u; // 800DF07C
  return; // 800DF080
L_800DF084:;
  c->r[3]=0u+0x00000003u; // 800DF084
  return; // 800DF088
}

// fn_800DF08C
void f_800DF08C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],2); // 800DF08C
  c->r[0]=0u+0x00000000u; // 800DF090
  if (crb(c,2)) { goto L_800DF0C8; } // 800DF094
  if (!crb(c,0)) { goto L_800DF0AC; } // 800DF098
  cmps(c,0,(int32_t)c->r[4],0); // 800DF09C
  if (crb(c,2)) { goto L_800DF0B8; } // 800DF0A0
  if (!crb(c,0)) { goto L_800DF0C0; } // 800DF0A4
  goto L_800DF0D4; // 800DF0A8
L_800DF0AC:;
  cmps(c,0,(int32_t)c->r[4],4); // 800DF0AC
  if (!crb(c,0)) { goto L_800DF0D4; } // 800DF0B0
  goto L_800DF0D0; // 800DF0B4
L_800DF0B8:;
  c->r[0]=R8(c->r[3]+0x00000090u); // 800DF0B8
  goto L_800DF0D4; // 800DF0BC
L_800DF0C0:;
  c->r[0]=R8(c->r[3]+0x00000091u); // 800DF0C0
  goto L_800DF0D4; // 800DF0C4
L_800DF0C8:;
  c->r[0]=R8(c->r[3]+0x00000092u); // 800DF0C8
  goto L_800DF0D4; // 800DF0CC
L_800DF0D0:;
  c->r[0]=R8(c->r[3]+0x00000093u); // 800DF0D0
L_800DF0D4:;
  c->r[3]=c->r[0]|c->r[0]; // 800DF0D4
  return; // 800DF0D8
}

// fn_800DF0DC
void f_800DF0DC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DF0DC
  c->r[3]=rotl(c->r[0],29)&0x00000001u; // 800DF0E0
  return; // 800DF0E4
}

// fn_800DF0E8
void f_800DF0E8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DF0E8
  c->r[3]=rotl(c->r[0],28)&0x00000001u; // 800DF0EC
  return; // 800DF0F0
}

// fn_800DF0F4
void f_800DF0F4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800DF0F4
  c->r[3]=rotl(c->r[0],25)&0x00000001u; // 800DF0F8
  return; // 800DF0FC
}

// fn_800DF100
void f_800DF100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF100
  c->r[0]=c->lr; // 800DF104
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF108
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF10C
  c->r[31]=c->r[3]|c->r[3]; // 800DF110
  c->r[3]=c->r[3]+0x00000210u; // 800DF114
  c->lr=0x800DF11Cu; f_8004BAD4(c); // 800DF118
  cmps(c,0,(int32_t)c->r[3],0); // 800DF11C
  if (crb(c,2)) { goto L_800DF190; } // 800DF120
  c->r[0]=R32(c->r[31]+0x00000210u); // 800DF124
  c->r[4]=c->r[31]|c->r[31]; // 800DF128
  c->r[3]=c->r[31]+0x00000210u; // 800DF12C
  c->r[0]=c->r[0]|0xAA000000u; // 800DF130
  W32(c->r[31]+0x00000210u,c->r[0]); // 800DF134
  c->lr=0x800DF13Cu; f_80043E44(c); // 800DF138
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF13C
  c->r[3]=c->r[31]+0x00000210u; // 800DF140
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DF144
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DF148
  c->lr=0x800DF150u; f_80043E34(c); // 800DF14C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DF150
  c->r[4]=0u+0x803A0000u; // 800DF154
  c->r[4]=c->r[4]+0xFFFFE434u; // 800DF158
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DF15C
  c->r[4]=c->r[4]+0x0000000Cu; // 800DF160
  c->lr=0x800DF168u; f_80256EC4(c); // 800DF164
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DF168
  c->r[5]=c->r[3]|c->r[3]; // 800DF16C
  c->r[3]=c->r[31]+0x00000210u; // 800DF170
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800DF174
  c->lr=0x800DF17Cu; f_8004BAC8(c); // 800DF178
  {uint32_t ea=c->r[2]+0xFFFFA478u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF17C
  c->r[3]=c->r[31]+0x00000210u; // 800DF180
  c->f[2]=c->f[1]; // 800DF184
  c->f[3]=c->f[1]; // 800DF188
  c->lr=0x800DF190u; f_80043E24(c); // 800DF18C
L_800DF190:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF190
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF194
  c->lr=c->r[0]; // 800DF198
  c->r[1]=c->r[1]+0x00000010u; // 800DF19C
  return; // 800DF1A0
}

// fn_800DF1A4
void f_800DF1A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF1A4
  c->r[0]=c->lr; // 800DF1A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF1AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF1B0
  c->r[31]=c->r[3]|c->r[3]; // 800DF1B4
  c->r[3]=c->r[3]+0x00000210u; // 800DF1B8
  c->lr=0x800DF1C0u; f_80221698(c); // 800DF1BC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DF1C0
  cmps(c,0,(int32_t)c->r[3],0); // 800DF1C4
  if (crb(c,2)) { goto L_800DF1E8; } // 800DF1C8
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800DF1CC
  cmps(c,0,(int32_t)c->r[0],0); // 800DF1D0
  if (crb(c,2)) { goto L_800DF1E8; } // 800DF1D4
  c->r[0]=R32(c->r[31]+0x00000210u); // 800DF1D8
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800DF1DC
  W32(c->r[31]+0x00000210u,c->r[0]); // 800DF1E0
  goto L_800DF1F4; // 800DF1E4
L_800DF1E8:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800DF1E8
  c->r[0]=c->r[0]|0x80000000u; // 800DF1EC
  W32(c->r[31]+0x00000210u,c->r[0]); // 800DF1F0
L_800DF1F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF1F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF1F8
  c->lr=c->r[0]; // 800DF1FC
  c->r[1]=c->r[1]+0x00000010u; // 800DF200
  return; // 800DF204
}

// fn_800DF208
void f_800DF208(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF208
  c->r[0]=c->lr; // 800DF20C
  cmps(c,0,(int32_t)c->r[3],0); // 800DF210
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF214
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF218
  c->r[31]=c->r[4]|c->r[4]; // 800DF21C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DF220
  c->r[30]=c->r[3]|c->r[3]; // 800DF224
  if (crb(c,2)) { goto L_800DF244; } // 800DF228
  c->r[4]=0u+0x00000000u; // 800DF22C
  c->lr=0x800DF234u; f_8026A06C(c); // 800DF230
  cmps(c,0,(int32_t)c->r[31],0); // 800DF234
  if (!crb(c,1)) { goto L_800DF244; } // 800DF238
  c->r[3]=c->r[30]|c->r[30]; // 800DF23C
  c->lr=0x800DF244u; f_8026A268(c); // 800DF240
L_800DF244:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF244
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF248
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DF24C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF250
  c->lr=c->r[0]; // 800DF254
  c->r[1]=c->r[1]+0x00000010u; // 800DF258
  return; // 800DF25C
}

// fn_800DF260
void f_800DF260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF260
  c->r[0]=c->lr; // 800DF264
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DF268
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800DF26C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800DF270
  c->r[4]=0u+0x00000000u; // 800DF274
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF278
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DF27C
  c->r[30]=c->r[3]|c->r[3]; // 800DF280
  c->lr=0x800DF288u; f_801F57D0(c); // 800DF284
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800DF288
  c->r[3]=c->r[30]|c->r[30]; // 800DF28C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800DF290
  c->ctr=c->r[12]; // 800DF294
  if (true) { c->lr=0x800DF29Cu; dispatch(c,c->ctr); } // 800DF298
  c->r[3]=c->r[30]|c->r[30]; // 800DF29C
  c->lr=0x800DF2A4u; f_801F4B94(c); // 800DF2A0
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800DF2A4
  c->r[4]=0u+0x00000003u; // 800DF2A8
  {uint32_t ea=c->r[2]+0xFFFFA488u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF2AC
  c->r[5]=0u+0x00000044u; // 800DF2B0
  c->r[0]=c->r[0]|0x00000804u; // 800DF2B4
  c->r[31]=0u+0x00000001u; // 800DF2B8
  c->r[3]=0u+0x80550000u; // 800DF2BC
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800DF2C0
  c->f[3]=c->f[1]; // 800DF2C4
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DF2C8
  W8(c->r[30]+0x0000006Du,c->r[5]); // 800DF2CC
  c->r[3]=c->r[3]+0x00003D60u; // 800DF2D0
  {uint32_t ea=c->r[2]+0xFFFFA48Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DF2D4
  c->r[4]=c->r[30]+0x0000002Cu; // 800DF2D8
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800DF2DC
  c->r[5]=c->r[30]+0x00000030u; // 800DF2E0
  c->r[6]=0u+0x00000000u; // 800DF2E4
  c->r[7]=0u+0x00000000u; // 800DF2E8
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800DF2EC
  c->lr=0x800DF2F4u; f_801D5488(c); // 800DF2F0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DF2F4
  c->r[3]=c->r[30]|c->r[30]; // 800DF2F8
  c->lr=0x800DF300u; f_801F58BC(c); // 800DF2FC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DF300
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800DF304
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF308
  c->r[3]=R32(c->r[30]+0x00000394u); // 800DF30C
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800DF310
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DF314
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800DF318
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DF31C
  c->lr=0x800DF324u; f_802501B0(c); // 800DF320
  c->r[3]=0u+0x805D0000u; // 800DF324
  c->r[4]=c->r[30]+0x0000002Cu; // 800DF328
  c->r[3]=c->r[3]+0x000078B0u; // 800DF32C
  c->lr=0x800DF334u; f_802351CC(c); // 800DF330
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DF334
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800DF338
  c->r[3]=c->r[30]|c->r[30]; // 800DF33C
  c->lr=0x800DF344u; f_801F56F4(c); // 800DF340
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800DF344
  c->r[3]=c->r[30]|c->r[30]; // 800DF348
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DF34C
  c->ctr=c->r[12]; // 800DF350
  if (true) { c->lr=0x800DF358u; dispatch(c,c->ctr); } // 800DF354
  c->r[3]=c->r[30]|c->r[30]; // 800DF358
  c->lr=0x800DF360u; f_800DFBA4(c); // 800DF35C
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800DF360
  W32(c->r[30]+0x00000444u,c->r[31]); // 800DF364
  c->lr=0x800DF36Cu; f_8024E174(c); // 800DF368
  W32(c->r[30]+0x00000438u,c->r[3]); // 800DF36C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800DF370
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800DF374
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF378
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DF37C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DF380
  c->lr=c->r[0]; // 800DF384
  c->r[1]=c->r[1]+0x00000020u; // 800DF388
  return; // 800DF38C
}

// fn_800DF390
void f_800DF390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF390
  c->r[0]=c->lr; // 800DF394
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF39C
  c->r[31]=c->r[3]|c->r[3]; // 800DF3A0
  c->lr=0x800DF3A8u; f_800DF92C(c); // 800DF3A4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DF3A8
  c->r[3]=c->r[31]|c->r[31]; // 800DF3AC
  c->r[12]=R32(c->r[12]+0x00000068u); // 800DF3B0
  c->ctr=c->r[12]; // 800DF3B4
  if (true) { c->lr=0x800DF3BCu; dispatch(c,c->ctr); } // 800DF3B8
  c->r[3]=c->r[31]|c->r[31]; // 800DF3BC
  c->lr=0x800DF3C4u; f_801F4C0C(c); // 800DF3C0
  c->r[3]=c->r[31]|c->r[31]; // 800DF3C4
  c->lr=0x800DF3CCu; f_800DFADC(c); // 800DF3C8
  c->r[3]=c->r[31]|c->r[31]; // 800DF3CC
  c->lr=0x800DF3D4u; f_801F56F4(c); // 800DF3D0
  c->r[3]=c->r[31]|c->r[31]; // 800DF3D4
  c->lr=0x800DF3DCu; f_800DFC44(c); // 800DF3D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF3DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF3E0
  c->lr=c->r[0]; // 800DF3E4
  c->r[1]=c->r[1]+0x00000010u; // 800DF3E8
  return; // 800DF3EC
}

// fn_800DF3F0
void f_800DF3F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF3F0
  c->r[0]=c->lr; // 800DF3F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF3F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF3FC
  c->r[31]=c->r[3]|c->r[3]; // 800DF400
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DF404
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DF408
  c->lr=0x800DF410u; f_802501B0(c); // 800DF40C
  c->r[3]=c->r[31]|c->r[31]; // 800DF410
  c->r[4]=0u+0x00000000u; // 800DF414
  c->lr=0x800DF41Cu; f_801F5244(c); // 800DF418
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF41C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF420
  c->lr=c->r[0]; // 800DF424
  c->r[1]=c->r[1]+0x00000010u; // 800DF428
  return; // 800DF42C
}

// fn_800DF430
void f_800DF430(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF430
  c->r[0]=c->lr; // 800DF434
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF438
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF43C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DF440
  c->r[30]=c->r[3]|c->r[3]; // 800DF444
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DF448
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DF44C
  c->lr=0x800DF454u; f_802501B0(c); // 800DF450
  c->r[3]=c->r[30]|c->r[30]; // 800DF454
  c->r[4]=0u+0x00000000u; // 800DF458
  c->lr=0x800DF460u; f_801F5244(c); // 800DF45C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DF460
  c->r[3]=c->r[30]+0x0000002Cu; // 800DF464
  c->r[4]=c->r[4]+0x0000005Cu; // 800DF468
  c->lr=0x800DF470u; f_800361A0(c); // 800DF46C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800DF470
  c->r[3]=c->r[30]|c->r[30]; // 800DF474
  c->lr=0x800DF47Cu; f_801F5418(c); // 800DF478
  cmps(c,0,(int32_t)c->r[3],0); // 800DF47C
  if (!crb(c,0)) { goto L_800DF4B8; } // 800DF480
  c->r[4]=R16(c->r[30]+0x000003BEu); // 800DF484
  c->r[0]=0u+0x00000001u; // 800DF488
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800DF48C
  c->r[3]=c->r[30]|c->r[30]; // 800DF490
  c->r[0]=c->r[4]|0x00000080u; // 800DF494
  {uint32_t ea=c->r[2]+0xFFFFA488u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF498
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800DF49C
  c->r[4]=0u+0x00000064u; // 800DF4A0
  c->r[5]=0u+0x00000000u; // 800DF4A4
  c->r[6]=0u+0x00000000u; // 800DF4A8
  c->r[7]=0u+0x00000000u; // 800DF4AC
  c->lr=0x800DF4B4u; f_801F4D44(c); // 800DF4B0
  goto L_800DF4EC; // 800DF4B4
L_800DF4B8:;
  c->r[31]=0u+0x805D0000u; // 800DF4B8
  c->r[3]=c->r[31]+0x00003F6Cu; // 800DF4BC
  c->lr=0x800DF4C4u; f_800447E4(c); // 800DF4C0
  cmpu(c,0,c->r[3],0x00000001u); // 800DF4C4
  if (!crb(c,2)) { goto L_800DF4D8; } // 800DF4C8
  c->r[0]=0u+0x00000000u; // 800DF4CC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800DF4D0
  goto L_800DF4E4; // 800DF4D4
L_800DF4D8:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800DF4D8
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800DF4DC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800DF4E0
L_800DF4E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF4E4
  c->lr=0x800DF4ECu; f_801F5B14(c); // 800DF4E8
L_800DF4EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF4EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF4F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DF4F4
  c->lr=c->r[0]; // 800DF4F8
  c->r[1]=c->r[1]+0x00000010u; // 800DF4FC
  return; // 800DF500
}

// fn_800DF504
void f_800DF504(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF504
  c->r[0]=c->lr; // 800DF508
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DF50C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800DF510
  c->r[31]=c->r[3]|c->r[3]; // 800DF514
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DF518
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DF51C
  c->lr=0x800DF524u; f_802501B0(c); // 800DF520
  c->r[3]=c->r[31]+0x00000038u; // 800DF524
  c->r[4]=c->r[31]+0x0000002Cu; // 800DF528
  c->lr=0x800DF530u; f_800361A0(c); // 800DF52C
  {uint32_t ea=c->r[2]+0xFFFFA488u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF530
  c->r[3]=0u+0x80550000u; // 800DF534
  c->r[3]=c->r[3]+0x00003D60u; // 800DF538
  c->r[4]=c->r[31]+0x00000038u; // 800DF53C
  c->f[2]=c->f[1]; // 800DF540
  c->r[5]=c->r[1]+0x00000008u; // 800DF544
  c->f[3]=c->f[1]; // 800DF548
  c->r[6]=0u+0x00000000u; // 800DF54C
  c->r[7]=0u+0x00000000u; // 800DF550
  c->lr=0x800DF558u; f_801D5488(c); // 800DF554
  c->r[5]=R32(c->r[31]+0x00000394u); // 800DF558
  c->r[3]=c->r[31]+0x00000060u; // 800DF55C
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF560
  c->r[4]=c->r[5]+0x00000068u; // 800DF564
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800DF568
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF56C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800DF570
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF574
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800DF578
  c->lr=0x800DF580u; f_800361A0(c); // 800DF57C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DF580
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DF584
  c->lr=0x800DF58Cu; f_802501B0(c); // 800DF588
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800DF58C
  c->r[0]=0u+0x00000001u; // 800DF590
  {uint32_t ea=c->r[2]+0xFFFFA490u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF594
  c->r[4]=c->r[31]+0x0000002Cu; // 800DF598
  {uint32_t ea=c->r[2]+0xFFFFA494u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF59C
  c->r[3]=c->r[3]|0x00002000u; // 800DF5A0
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800DF5A4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DF5A8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800DF5AC
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800DF5B0
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800DF5B4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DF5B8
  c->r[3]=c->r[3]+0x0000005Cu; // 800DF5BC
  c->lr=0x800DF5C4u; f_800361A0(c); // 800DF5C0
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF5C4
  c->r[4]=0u+0x00000040u; // 800DF5C8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DF5CC
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800DF5D0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DF5D4
  c->r[3]=c->r[3]+0x0000001Cu; // 800DF5D8
  c->lr=0x800DF5E0u; f_802518A4(c); // 800DF5DC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DF5E0
  c->r[4]=0u+0x00000006u; // 800DF5E4
  c->r[3]=c->r[3]+0x0000001Cu; // 800DF5E8
  c->lr=0x800DF5F0u; f_80251824(c); // 800DF5EC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DF5F0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DF5F4
  c->lr=0x800DF5FCu; f_802501B0(c); // 800DF5F8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DF5FC
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800DF600
  cmps(c,0,(int32_t)c->r[0],0); // 800DF604
  if (crb(c,2)) { goto L_800DF6B0; } // 800DF608
  c->r[3]=c->r[3]+0x00000068u; // 800DF60C
  c->r[4]=c->r[31]+0x00000060u; // 800DF610
  c->lr=0x800DF618u; f_800361A0(c); // 800DF614
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DF618
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DF61C
  c->lr=0x800DF624u; f_8025037C(c); // 800DF620
  c->r[6]=R32(c->r[31]+0x00000394u); // 800DF624
  c->r[3]=c->r[1]+0x00000024u; // 800DF628
  c->r[4]=c->r[31]+0x00000060u; // 800DF62C
  c->r[5]=c->r[1]+0x00000030u; // 800DF630
  c->r[6]=c->r[6]+0x000000B0u; // 800DF634
  c->r[7]=0u+0x00000000u; // 800DF638
  c->lr=0x800DF640u; f_8002BE64(c); // 800DF63C
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800DF640
  c->r[3]=0u+0x805D0000u; // 800DF644
  c->r[0]=R32(c->r[31]+0x00000030u); // 800DF648
  c->r[3]=c->r[3]+0x00003F6Cu; // 800DF64C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF650
  c->r[4]=c->r[31]|c->r[31]; // 800DF654
  W32(c->r[1]+0x00000018u,c->r[5]); // 800DF658
  c->r[7]=c->r[1]+0x00000018u; // 800DF65C
  c->r[6]=0u+0x0000002Du; // 800DF660
  c->r[8]=0u+0x00000000u; // 800DF664
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800DF668
  c->r[0]=R32(c->r[31]+0x00000034u); // 800DF66C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800DF670
  c->r[3]=R32(c->r[31]+0x00000438u); // 800DF674
  c->r[5]=R32(c->r[31]+0x00000394u); // 800DF678
  c->lr=0x800DF680u; f_801FA6A4(c); // 800DF67C
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800DF680
  cmps(c,0,(int32_t)c->r[0],0); // 800DF684
  if (crb(c,2)) { goto L_800DF698; } // 800DF688
  c->r[3]=c->r[31]+0x00000044u; // 800DF68C
  c->r[4]=c->r[31]+0x000003CCu; // 800DF690
  c->lr=0x800DF698u; f_800361A0(c); // 800DF694
L_800DF698:;
  c->r[6]=0u+0x803A0000u; // 800DF698
  c->r[3]=R32(c->r[31]+0x00000438u); // 800DF69C
  c->r[5]=c->r[31]+0x00000044u; // 800DF6A0
  c->r[4]=0u+0x00000000u; // 800DF6A4
  c->r[6]=c->r[6]+0xFFFFE458u; // 800DF6A8
  c->lr=0x800DF6B0u; f_801FBEC0(c); // 800DF6AC
L_800DF6B0:;
  c->r[3]=c->r[31]|c->r[31]; // 800DF6B0
  c->r[4]=0u+0x00000000u; // 800DF6B4
  c->lr=0x800DF6BCu; f_801F7C00(c); // 800DF6B8
  c->r[7]=0u+0x803D0000u; // 800DF6BC
  {uint32_t ea=c->r[7]+0x00002DF8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800DF6C0
  c->r[3]=c->r[31]|c->r[31]; // 800DF6C4
  c->r[4]=c->r[1]+0x0000000Cu; // 800DF6C8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DF6CC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DF6D0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800DF6D4
  W32(c->r[1]+0x00000010u,c->r[5]); // 800DF6D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF6DC
  c->lr=0x800DF6E4u; f_800DF6F8(c); // 800DF6E0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DF6E4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800DF6E8
  c->lr=c->r[0]; // 800DF6EC
  c->r[1]=c->r[1]+0x00000050u; // 800DF6F0
  return; // 800DF6F4
}

// fn_800DF6F8
void f_800DF6F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF6F8
  c->r[0]=c->lr; // 800DF6FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF700
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF704
  c->r[31]=c->r[4]|c->r[4]; // 800DF708
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DF70C
  c->r[30]=c->r[3]|c->r[3]; // 800DF710
  c->r[3]=c->r[31]|c->r[31]; // 800DF714
  c->lr=0x800DF71Cu; f_802B9FDC(c); // 800DF718
  cmps(c,0,(int32_t)c->r[3],0); // 800DF71C
  if (crb(c,2)) { goto L_800DF73C; } // 800DF720
  c->r[3]=R32(c->r[31]+0x00000000u); // 800DF724
  c->r[0]=R32(c->r[31]+0x00000004u); // 800DF728
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800DF72C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800DF730
  c->r[0]=R32(c->r[31]+0x00000008u); // 800DF734
  W32(c->r[30]+0x00000024u,c->r[0]); // 800DF738
L_800DF73C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF73C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF740
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DF744
  c->lr=c->r[0]; // 800DF748
  c->r[1]=c->r[1]+0x00000010u; // 800DF74C
  return; // 800DF750
}

// fn_800DF754
void f_800DF754(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF754
  c->r[0]=c->lr; // 800DF758
  c->r[4]=0u+0x00000000u; // 800DF75C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DF760
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DF764
  c->r[31]=c->r[3]|c->r[3]; // 800DF768
  c->r[3]=R32(c->r[3]+0x00000438u); // 800DF76C
  c->lr=0x800DF774u; f_801FAF00(c); // 800DF770
  cmps(c,0,(int32_t)c->r[3],0); // 800DF774
  if (!crb(c,2)) { goto L_800DF80C; } // 800DF778
  c->r[3]=c->r[31]|c->r[31]; // 800DF77C
  c->r[4]=0u+0x00000033u; // 800DF780
  c->lr=0x800DF788u; f_801F5AB4(c); // 800DF784
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800DF788
  c->r[3]=c->r[31]+0x0000002Cu; // 800DF78C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DF790
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800DF794
  c->r[0]=c->r[0]|0x00000004u; // 800DF798
  c->r[4]=c->r[4]+0x0000005Cu; // 800DF79C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800DF7A0
  c->lr=0x800DF7A8u; f_800361A0(c); // 800DF7A4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DF7A8
  c->r[3]=c->r[31]+0x00000060u; // 800DF7AC
  c->r[4]=c->r[4]+0x00000068u; // 800DF7B0
  c->lr=0x800DF7B8u; f_800361A0(c); // 800DF7B4
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800DF7B8
  c->r[3]=0u+0x805D0000u; // 800DF7BC
  c->r[0]=R32(c->r[31]+0x00000030u); // 800DF7C0
  c->r[3]=c->r[3]+0x00006CF8u; // 800DF7C4
  c->r[4]=c->r[1]+0x00000008u; // 800DF7C8
  c->r[5]=0u+0x00040000u; // 800DF7CC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DF7D0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DF7D4
  c->r[0]=R32(c->r[31]+0x00000034u); // 800DF7D8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DF7DC
  c->lr=0x800DF7E4u; f_802236F8(c); // 800DF7E0
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800DF7E4
  c->r[3]=c->r[31]|c->r[31]; // 800DF7E8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DF7EC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DF7F0
  c->ctr=c->r[12]; // 800DF7F4
  if (true) { c->lr=0x800DF7FCu; dispatch(c,c->ctr); } // 800DF7F8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DF7FC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DF800
  c->lr=0x800DF808u; f_8025037C(c); // 800DF804
  goto L_800DF82C; // 800DF808
L_800DF80C:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DF80C
  c->r[3]=c->r[31]+0x0000002Cu; // 800DF810
  c->r[4]=c->r[4]+0x0000005Cu; // 800DF814
  c->lr=0x800DF81Cu; f_800361A0(c); // 800DF818
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DF81C
  c->r[3]=c->r[31]+0x00000060u; // 800DF820
  c->r[4]=c->r[4]+0x00000068u; // 800DF824
  c->lr=0x800DF82Cu; f_800361A0(c); // 800DF828
L_800DF82C:;
  c->r[3]=c->r[31]|c->r[31]; // 800DF82C
  c->r[4]=0u+0x00000000u; // 800DF830
  c->lr=0x800DF838u; f_801F7C00(c); // 800DF834
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DF838
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DF83C
  c->lr=c->r[0]; // 800DF840
  c->r[1]=c->r[1]+0x00000020u; // 800DF844
  return; // 800DF848
}

// fn_800DF84C
void f_800DF84C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF84C
  c->r[0]=c->lr; // 800DF850
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF854
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF858
  c->r[31]=c->r[3]|c->r[3]; // 800DF85C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DF860
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DF864
  c->lr=0x800DF86Cu; f_802501B0(c); // 800DF868
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DF86C
  c->r[6]=0u+0x00000000u; // 800DF870
  c->r[0]=0u+0x00000001u; // 800DF874
  c->r[3]=c->r[31]+0x0000002Cu; // 800DF878
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800DF87C
  c->r[4]=c->r[31]+0x000003CCu; // 800DF880
  c->r[5]=R32(c->r[31]+0x00000394u); // 800DF884
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800DF888
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800DF88C
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800DF890
  c->r[0]=rotl(c->r[5],0)&0xFFFFDFFFu; // 800DF894
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800DF898
  c->lr=0x800DF8A0u; f_800361A0(c); // 800DF89C
  c->r[3]=c->r[31]+0x00000060u; // 800DF8A0
  c->r[4]=c->r[31]+0x000003D8u; // 800DF8A4
  c->lr=0x800DF8ACu; f_800361A0(c); // 800DF8A8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800DF8AC
  c->r[3]=c->r[31]|c->r[31]; // 800DF8B0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DF8B4
  c->ctr=c->r[12]; // 800DF8B8
  if (true) { c->lr=0x800DF8C0u; dispatch(c,c->ctr); } // 800DF8BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF8C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF8C4
  c->lr=c->r[0]; // 800DF8C8
  c->r[1]=c->r[1]+0x00000010u; // 800DF8CC
  return; // 800DF8D0
}

// fn_800DF8D4
void f_800DF8D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF8D4
  c->r[0]=c->lr; // 800DF8D8
  c->r[5]=0u+0x00000000u; // 800DF8DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF8E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF8E4
  c->r[31]=c->r[3]|c->r[3]; // 800DF8E8
  c->r[3]=0u+0x000004C8u; // 800DF8EC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DF8F0
  c->r[4]=c->r[4]+0x0000010Cu; // 800DF8F4
  c->lr=0x800DF8FCu; f_8024EE50(c); // 800DF8F8
  cmps(c,0,(int32_t)c->r[3],0); // 800DF8FC
  if (crb(c,2)) { goto L_800DF90C; } // 800DF900
  c->r[3]=0u+0x00000000u; // 800DF904
  goto L_800DF918; // 800DF908
L_800DF90C:;
  c->r[3]=c->r[31]+0x00000210u; // 800DF90C
  c->r[4]=0u+0x000000E1u; // 800DF910
  c->lr=0x800DF918u; f_80221630(c); // 800DF914
L_800DF918:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF91C
  c->lr=c->r[0]; // 800DF920
  c->r[1]=c->r[1]+0x00000010u; // 800DF924
  return; // 800DF928
}

// fn_800DF92C
void f_800DF92C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF92C
  c->r[0]=c->lr; // 800DF930
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF934
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF938
  c->r[31]=0u+0x805D0000u; // 800DF93C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DF940
  c->r[30]=c->r[3]|c->r[3]; // 800DF944
  c->r[3]=c->r[31]+0x00003F6Cu; // 800DF948
  c->lr=0x800DF950u; f_80045264(c); // 800DF94C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800DF950
  cmpu(c,0,c->r[0],0x00000033u); // 800DF954
  if (!crb(c,2)) { goto L_800DF994; } // 800DF958
  c->r[3]=c->r[31]+0x00003F6Cu; // 800DF95C
  c->lr=0x800DF964u; f_80037AF0(c); // 800DF960
  cmpu(c,0,c->r[3],c->r[30]); // 800DF964
  if (!crb(c,2)) { goto L_800DF994; } // 800DF968
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800DF96C
  cmps(c,0,(int32_t)c->r[0],101); // 800DF970
  if (crb(c,2)) { goto L_800DF994; } // 800DF974
  {uint32_t ea=c->r[2]+0xFFFFA488u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF978
  c->r[3]=c->r[30]|c->r[30]; // 800DF97C
  c->r[4]=0u+0x00000065u; // 800DF980
  c->r[5]=0u+0x00000000u; // 800DF984
  c->r[6]=0u+0x00000000u; // 800DF988
  c->r[7]=0u+0x00000000u; // 800DF98C
  c->lr=0x800DF994u; f_801F4D44(c); // 800DF990
L_800DF994:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF994
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF998
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DF99C
  c->lr=c->r[0]; // 800DF9A0
  c->r[1]=c->r[1]+0x00000010u; // 800DF9A4
  return; // 800DF9A8
}

// fn_800DF9AC
void f_800DF9AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF9AC
  c->r[0]=c->lr; // 800DF9B0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DF9B4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800DF9B8
  c->r[31]=0u+0x803D0000u; // 800DF9BC
  c->r[31]=c->r[31]+0x00002DF8u; // 800DF9C0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800DF9C4
  c->r[30]=c->r[3]|c->r[3]; // 800DF9C8
  c->lr=0x800DF9D0u; f_801F4F28(c); // 800DF9CC
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800DF9D0
  cmps(c,0,(int32_t)c->r[0],101); // 800DF9D4
  if (crb(c,2)) { goto L_800DFA28; } // 800DF9D8
  if (!crb(c,0)) { goto L_800DF9EC; } // 800DF9DC
  cmps(c,0,(int32_t)c->r[0],100); // 800DF9E0
  if (!crb(c,0)) { goto L_800DF9F8; } // 800DF9E4
  goto L_800DFA84; // 800DF9E8
L_800DF9EC:;
  cmps(c,0,(int32_t)c->r[0],103); // 800DF9EC
  if (!crb(c,0)) { goto L_800DFA84; } // 800DF9F0
  goto L_800DFA58; // 800DF9F4
L_800DF9F8:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800DF9F8
  c->r[5]=c->r[31]+0x0000000Cu; // 800DF9FC
  c->r[3]=c->r[30]|c->r[30]; // 800DFA00
  c->r[4]=c->r[1]+0x00000020u; // 800DFA04
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800DFA08
  c->r[6]=R32(c->r[5]+0x00000004u); // 800DFA0C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DFA10
  W32(c->r[1]+0x00000020u,c->r[7]); // 800DFA14
  W32(c->r[1]+0x00000024u,c->r[6]); // 800DFA18
  W32(c->r[1]+0x00000028u,c->r[0]); // 800DFA1C
  c->lr=0x800DFA24u; f_800DF6F8(c); // 800DFA20
  goto L_800DFA84; // 800DFA24
L_800DFA28:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800DFA28
  c->r[5]=c->r[31]+0x00000018u; // 800DFA2C
  c->r[3]=c->r[30]|c->r[30]; // 800DFA30
  c->r[4]=c->r[1]+0x00000014u; // 800DFA34
  c->r[7]=R32(c->r[31]+0x00000018u); // 800DFA38
  c->r[6]=R32(c->r[5]+0x00000004u); // 800DFA3C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DFA40
  W32(c->r[1]+0x00000014u,c->r[7]); // 800DFA44
  W32(c->r[1]+0x00000018u,c->r[6]); // 800DFA48
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800DFA4C
  c->lr=0x800DFA54u; f_800DF6F8(c); // 800DFA50
  goto L_800DFA84; // 800DFA54
L_800DFA58:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800DFA58
  c->r[5]=c->r[31]+0x00000024u; // 800DFA5C
  c->r[3]=c->r[30]|c->r[30]; // 800DFA60
  c->r[4]=c->r[1]+0x00000008u; // 800DFA64
  c->r[7]=R32(c->r[31]+0x00000024u); // 800DFA68
  c->r[6]=R32(c->r[5]+0x00000004u); // 800DFA6C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DFA70
  W32(c->r[1]+0x00000008u,c->r[7]); // 800DFA74
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800DFA78
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DFA7C
  c->lr=0x800DFA84u; f_800DF6F8(c); // 800DFA80
L_800DFA84:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DFA84
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DFA88
  c->r[30]=R32(c->r[1]+0x00000038u); // 800DFA8C
  c->lr=c->r[0]; // 800DFA90
  c->r[1]=c->r[1]+0x00000040u; // 800DFA94
  return; // 800DFA98
}

// fn_800DFA9C
void f_800DFA9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFA9C
  c->r[0]=c->lr; // 800DFAA0
  c->r[7]=0u+0x803D0000u; // 800DFAA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DFAA8
  c->r[4]=c->r[1]+0x00000008u; // 800DFAAC
  {uint32_t ea=c->r[7]+0x00002E28u; c->r[6]=R32(ea); c->r[7]=ea;} // 800DFAB0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DFAB4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DFAB8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DFABC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800DFAC0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DFAC4
  c->lr=0x800DFACCu; f_800DF6F8(c); // 800DFAC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DFACC
  c->lr=c->r[0]; // 800DFAD0
  c->r[1]=c->r[1]+0x00000020u; // 800DFAD4
  return; // 800DFAD8
}

// fn_800DFADC
void f_800DFADC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFADC
  c->r[0]=c->lr; // 800DFAE0
  W32(c->r[1]+0x00000094u,c->r[0]); // 800DFAE4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800DFAE8
  W32(c->r[1]+0x00000088u,c->r[30]); // 800DFAEC
  c->r[30]=c->r[3]|c->r[3]; // 800DFAF0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800DFAF4
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800DFAF8
  cmps(c,0,(int32_t)c->r[0],0); // 800DFAFC
  if (!crb(c,2)) { goto L_800DFB8C; } // 800DFB00
  c->r[3]=R16(c->r[3]+0x000003BEu); // 800DFB04
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800DFB08
  if (crb(c,2)) { goto L_800DFB8C; } // 800DFB0C
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800DFB10
  cmps(c,0,(int32_t)c->r[0],128); // 800DFB14
  if (!crb(c,2)) { goto L_800DFB40; } // 800DFB18
  c->r[3]=0u+0x80620000u; // 800DFB1C
  c->r[3]=c->r[3]+0x00007688u; // 800DFB20
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DFB24
  cmps(c,0,(int32_t)c->r[3],0); // 800DFB28
  if (crb(c,2)) { goto L_800DFB40; } // 800DFB2C
  c->r[4]=0u+0x00000002u; // 800DFB30
  c->lr=0x800DFB38u; f_80037670(c); // 800DFB34
  cmps(c,0,(int32_t)c->r[3],0); // 800DFB38
  if (!crb(c,2)) { goto L_800DFB8C; } // 800DFB3C
L_800DFB40:;
  {uint32_t ea=c->r[2]+0xFFFFA498u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFB40
  c->r[3]=c->r[1]+0x00000008u; // 800DFB44
  c->r[4]=c->r[30]+0x0000002Cu; // 800DFB48
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800DFB4C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800DFB50
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800DFB54
  c->lr=0x800DFB5Cu; f_800361A0(c); // 800DFB58
  c->r[31]=0u+0x80550000u; // 800DFB5C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFB60
  c->r[31]=c->r[31]+0x00003D60u; // 800DFB64
  c->r[5]=c->r[30]|c->r[30]; // 800DFB68
  c->r[3]=c->r[31]+0x00000010u; // 800DFB6C
  c->r[6]=c->r[1]+0x00000008u; // 800DFB70
  c->r[7]=c->r[1]+0x00000020u; // 800DFB74
  c->r[4]=0u+0x000001FFu; // 800DFB78
  c->lr=0x800DFB80u; f_80226910(c); // 800DFB7C
  c->r[3]=c->r[31]+0x00000010u; // 800DFB80
  c->r[4]=c->r[1]+0x00000020u; // 800DFB84
  c->lr=0x800DFB8Cu; f_80226D68(c); // 800DFB88
L_800DFB8C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800DFB8C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800DFB90
  c->r[30]=R32(c->r[1]+0x00000088u); // 800DFB94
  c->lr=c->r[0]; // 800DFB98
  c->r[1]=c->r[1]+0x00000090u; // 800DFB9C
  return; // 800DFBA0
}

// fn_800DFBA4
void f_800DFBA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFBA4
  c->r[0]=c->lr; // 800DFBA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFBAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DFBB0
  c->r[31]=c->r[3]|c->r[3]; // 800DFBB4
  c->r[3]=c->r[3]+0x00000210u; // 800DFBB8
  c->lr=0x800DFBC0u; f_8004BAD4(c); // 800DFBBC
  cmps(c,0,(int32_t)c->r[3],0); // 800DFBC0
  if (crb(c,2)) { goto L_800DFC30; } // 800DFBC4
  c->r[0]=R32(c->r[31]+0x00000210u); // 800DFBC8
  c->r[4]=c->r[31]|c->r[31]; // 800DFBCC
  c->r[3]=c->r[31]+0x00000210u; // 800DFBD0
  c->r[0]=c->r[0]|0xAA000000u; // 800DFBD4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800DFBD8
  c->lr=0x800DFBE0u; f_80043E44(c); // 800DFBDC
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFBE0
  c->r[3]=c->r[31]+0x00000210u; // 800DFBE4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DFBE8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DFBEC
  c->lr=0x800DFBF4u; f_80043E34(c); // 800DFBF0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DFBF4
  c->r[4]=0u+0x803A0000u; // 800DFBF8
  c->r[4]=c->r[4]+0xFFFFE464u; // 800DFBFC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DFC00
  c->lr=0x800DFC08u; f_80256EC4(c); // 800DFC04
  c->r[4]=R32(c->r[31]+0x00000394u); // 800DFC08
  c->r[5]=c->r[3]|c->r[3]; // 800DFC0C
  c->r[3]=c->r[31]+0x00000210u; // 800DFC10
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800DFC14
  c->lr=0x800DFC1Cu; f_8004BAC8(c); // 800DFC18
  {uint32_t ea=c->r[2]+0xFFFFA49Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFC1C
  c->r[3]=c->r[31]+0x00000210u; // 800DFC20
  c->f[2]=c->f[1]; // 800DFC24
  c->f[3]=c->f[1]; // 800DFC28
  c->lr=0x800DFC30u; f_80043E24(c); // 800DFC2C
L_800DFC30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFC30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DFC34
  c->lr=c->r[0]; // 800DFC38
  c->r[1]=c->r[1]+0x00000010u; // 800DFC3C
  return; // 800DFC40
}

// fn_800DFC44
void f_800DFC44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFC44
  c->r[0]=c->lr; // 800DFC48
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DFC4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DFC50
  c->r[31]=c->r[3]|c->r[3]; // 800DFC54
  c->r[3]=c->r[3]+0x00000210u; // 800DFC58
  c->lr=0x800DFC60u; f_80221698(c); // 800DFC5C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800DFC60
  cmps(c,0,(int32_t)c->r[3],0); // 800DFC64
  if (crb(c,2)) { goto L_800DFC88; } // 800DFC68
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800DFC6C
  cmps(c,0,(int32_t)c->r[0],0); // 800DFC70
  if (crb(c,2)) { goto L_800DFC88; } // 800DFC74
  c->r[0]=R32(c->r[31]+0x00000210u); // 800DFC78
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800DFC7C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800DFC80
  goto L_800DFCD4; // 800DFC84
L_800DFC88:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800DFC88
  c->r[3]=c->r[1]+0x00000008u; // 800DFC8C
  c->r[6]=R32(c->r[31]+0x00000394u); // 800DFC90
  c->r[4]=c->r[3]|c->r[3]; // 800DFC94
  c->r[0]=c->r[0]|0x80000000u; // 800DFC98
  {uint32_t ea=c->r[2]+0xFFFFA49Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFC9C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800DFCA0
  c->r[5]=R32(c->r[6]+0x00000074u); // 800DFCA4
  c->r[0]=R32(c->r[6]+0x00000078u); // 800DFCA8
  W32(c->r[1]+0x00000008u,c->r[5]); // 800DFCAC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DFCB0
  c->r[0]=R32(c->r[6]+0x0000007Cu); // 800DFCB4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DFCB8
  c->lr=0x800DFCC0u; f_80296A94(c); // 800DFCBC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFCC0
  c->r[3]=c->r[31]+0x00000210u; // 800DFCC4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DFCC8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DFCCC
  c->lr=0x800DFCD4u; f_80043E24(c); // 800DFCD0
L_800DFCD4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DFCD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DFCD8
  c->lr=c->r[0]; // 800DFCDC
  c->r[1]=c->r[1]+0x00000020u; // 800DFCE0
  return; // 800DFCE4
}

// fn_800DFCE8
void f_800DFCE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFCE8
  c->r[0]=c->lr; // 800DFCEC
  cmps(c,0,(int32_t)c->r[3],0); // 800DFCF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFCF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DFCF8
  c->r[31]=c->r[4]|c->r[4]; // 800DFCFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DFD00
  c->r[30]=c->r[3]|c->r[3]; // 800DFD04
  if (crb(c,2)) { goto L_800DFD24; } // 800DFD08
  c->r[4]=0u+0x00000000u; // 800DFD0C
  c->lr=0x800DFD14u; f_8026A06C(c); // 800DFD10
  cmps(c,0,(int32_t)c->r[31],0); // 800DFD14
  if (!crb(c,1)) { goto L_800DFD24; } // 800DFD18
  c->r[3]=c->r[30]|c->r[30]; // 800DFD1C
  c->lr=0x800DFD24u; f_8026A268(c); // 800DFD20
L_800DFD24:;
  c->r[3]=c->r[30]|c->r[30]; // 800DFD24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DFD28
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DFD2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFD30
  c->lr=c->r[0]; // 800DFD34
  c->r[1]=c->r[1]+0x00000010u; // 800DFD38
  return; // 800DFD3C
}

// fn_800DFD40
void f_800DFD40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFD40
  c->r[0]=c->lr; // 800DFD44
  c->r[4]=0u+0x00000000u; // 800DFD48
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DFD4C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800DFD50
  W32(c->r[1]+0x00000028u,c->r[30]); // 800DFD54
  W32(c->r[1]+0x00000024u,c->r[29]); // 800DFD58
  W32(c->r[1]+0x00000020u,c->r[28]); // 800DFD5C
  c->r[28]=c->r[3]|c->r[3]; // 800DFD60
  c->lr=0x800DFD68u; f_801F57D0(c); // 800DFD64
  c->r[3]=c->r[28]|c->r[28]; // 800DFD68
  c->r[4]=0u+0x00000001u; // 800DFD6C
  c->lr=0x800DFD74u; f_801F57D0(c); // 800DFD70
  c->r[3]=c->r[28]|c->r[28]; // 800DFD74
  c->r[4]=0u+0x00000002u; // 800DFD78
  c->lr=0x800DFD80u; f_801F57D0(c); // 800DFD7C
  c->r[3]=c->r[28]|c->r[28]; // 800DFD80
  c->r[4]=0u+0x00000003u; // 800DFD84
  c->lr=0x800DFD8Cu; f_801F57D0(c); // 800DFD88
  c->r[3]=c->r[28]|c->r[28]; // 800DFD8C
  c->r[4]=0u+0x00000004u; // 800DFD90
  c->lr=0x800DFD98u; f_801F57D0(c); // 800DFD94
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800DFD98
  c->r[3]=c->r[28]|c->r[28]; // 800DFD9C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800DFDA0
  c->ctr=c->r[12]; // 800DFDA4
  if (true) { c->lr=0x800DFDACu; dispatch(c,c->ctr); } // 800DFDA8
  c->r[3]=c->r[28]|c->r[28]; // 800DFDAC
  c->lr=0x800DFDB4u; f_801F4B94(c); // 800DFDB0
  c->r[29]=0u+0x00000000u; // 800DFDB4
  c->r[3]=0u+0x00000003u; // 800DFDB8
  c->r[0]=0u+0x00000045u; // 800DFDBC
  W8(c->r[28]+0x0000006Cu,c->r[3]); // 800DFDC0
  c->r[4]=R32(c->r[28]+0x00000394u); // 800DFDC4
  c->r[3]=c->r[28]|c->r[28]; // 800DFDC8
  W8(c->r[28]+0x0000006Du,c->r[0]); // 800DFDCC
  W16(c->r[28]+0x00000078u,c->r[29]); // 800DFDD0
  W16(c->r[28]+0x00000076u,c->r[29]); // 800DFDD4
  W16(c->r[28]+0x00000074u,c->r[29]); // 800DFDD8
  W16(c->r[28]+0x0000007Au,c->r[29]); // 800DFDDC
  c->lr=0x800DFDE4u; f_801F58BC(c); // 800DFDE0
  c->r[3]=R32(c->r[28]+0x00000394u); // 800DFDE4
  c->r[30]=0u+0x00000001u; // 800DFDE8
  c->r[31]=0u+0x803A0000u; // 800DFDEC
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800DFDF0
  c->r[4]=c->r[31]+0xFFFFE488u; // 800DFDF4
  c->r[3]=R32(c->r[28]+0x00000394u); // 800DFDF8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DFDFC
  c->lr=0x800DFE04u; f_80256EC4(c); // 800DFE00
  c->r[5]=R32(c->r[28]+0x00000394u); // 800DFE04
  c->r[4]=0u+0x00000001u; // 800DFE08
  {uint32_t ea=c->r[2]+0xFFFFA4A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFE0C
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800DFE10
  c->f[2]=c->f[1]; // 800DFE14
  c->r[5]=R32(c->r[28]+0x00000394u); // 800DFE18
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800DFE1C
  c->r[5]=R32(c->r[5]+0x00000034u); // 800DFE20
  c->lr=0x800DFE28u; f_8024FEAC(c); // 800DFE24
  c->r[3]=R32(c->r[28]+0x00000394u); // 800DFE28
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DFE2C
  c->lr=0x800DFE34u; f_802501B0(c); // 800DFE30
  c->r[4]=R32(c->r[28]+0x00000394u); // 800DFE34
  c->r[3]=c->r[28]|c->r[28]; // 800DFE38
  W8(c->r[4]+0x0000001Du,c->r[29]); // 800DFE3C
  c->r[4]=R32(c->r[28]+0x00000398u); // 800DFE40
  c->lr=0x800DFE48u; f_801F58BC(c); // 800DFE44
  c->r[3]=R32(c->r[28]+0x00000398u); // 800DFE48
  c->r[4]=c->r[31]+0xFFFFE488u; // 800DFE4C
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800DFE50
  c->r[3]=R32(c->r[28]+0x00000398u); // 800DFE54
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DFE58
  c->lr=0x800DFE60u; f_80256EC4(c); // 800DFE5C
  c->r[5]=R32(c->r[28]+0x00000398u); // 800DFE60
  c->r[4]=0u+0x00000000u; // 800DFE64
  {uint32_t ea=c->r[2]+0xFFFFA4A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFE68
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800DFE6C
  c->f[2]=c->f[1]; // 800DFE70
  c->r[5]=R32(c->r[28]+0x00000398u); // 800DFE74
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800DFE78
  c->r[5]=R32(c->r[5]+0x00000034u); // 800DFE7C
  c->lr=0x800DFE84u; f_8024FEAC(c); // 800DFE80
  c->r[3]=R32(c->r[28]+0x00000398u); // 800DFE84
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DFE88
  c->lr=0x800DFE90u; f_802501B0(c); // 800DFE8C
  c->r[4]=R32(c->r[28]+0x00000398u); // 800DFE90
  c->r[3]=c->r[28]|c->r[28]; // 800DFE94
  W8(c->r[4]+0x0000001Du,c->r[29]); // 800DFE98
  c->r[4]=R32(c->r[28]+0x0000039Cu); // 800DFE9C
  c->lr=0x800DFEA4u; f_801F58BC(c); // 800DFEA0
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800DFEA4
  c->r[4]=c->r[31]+0xFFFFE488u; // 800DFEA8
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800DFEAC
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800DFEB0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DFEB4
  c->lr=0x800DFEBCu; f_80256EC4(c); // 800DFEB8
  c->r[5]=R32(c->r[28]+0x0000039Cu); // 800DFEBC
  c->r[4]=0u+0x00000000u; // 800DFEC0
  {uint32_t ea=c->r[2]+0xFFFFA4A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFEC4
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800DFEC8
  c->f[2]=c->f[1]; // 800DFECC
  c->r[5]=R32(c->r[28]+0x0000039Cu); // 800DFED0
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800DFED4
  c->r[5]=R32(c->r[5]+0x00000034u); // 800DFED8
  c->lr=0x800DFEE0u; f_8024FEAC(c); // 800DFEDC
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800DFEE0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DFEE4
  c->lr=0x800DFEECu; f_802501B0(c); // 800DFEE8
  c->r[4]=R32(c->r[28]+0x0000039Cu); // 800DFEEC
  c->r[3]=c->r[28]|c->r[28]; // 800DFEF0
  W8(c->r[4]+0x0000001Du,c->r[29]); // 800DFEF4
  c->r[4]=R32(c->r[28]+0x000003A0u); // 800DFEF8
  c->lr=0x800DFF00u; f_801F58BC(c); // 800DFEFC
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800DFF00
  c->r[4]=c->r[31]+0xFFFFE488u; // 800DFF04
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800DFF08
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800DFF0C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DFF10
  c->lr=0x800DFF18u; f_80256EC4(c); // 800DFF14
  c->r[5]=R32(c->r[28]+0x000003A0u); // 800DFF18
  c->r[4]=0u+0x00000000u; // 800DFF1C
  {uint32_t ea=c->r[2]+0xFFFFA4A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFF20
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800DFF24
  c->f[2]=c->f[1]; // 800DFF28
  c->r[5]=R32(c->r[28]+0x000003A0u); // 800DFF2C
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800DFF30
  c->r[5]=R32(c->r[5]+0x00000034u); // 800DFF34
  c->lr=0x800DFF3Cu; f_8024FEAC(c); // 800DFF38
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800DFF3C
  c->r[4]=R16(c->r[28]+0x0000007Au); // 800DFF40
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DFF44
  c->lr=0x800DFF4Cu; f_80259C78(c); // 800DFF48
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800DFF4C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DFF50
  c->lr=0x800DFF58u; f_802501B0(c); // 800DFF54
  c->r[4]=R32(c->r[28]+0x000003A0u); // 800DFF58
  c->r[3]=c->r[28]|c->r[28]; // 800DFF5C
  W8(c->r[4]+0x0000001Du,c->r[29]); // 800DFF60
  c->r[4]=R32(c->r[28]+0x000003A4u); // 800DFF64
  c->lr=0x800DFF6Cu; f_801F58BC(c); // 800DFF68
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800DFF6C
  c->r[4]=c->r[31]+0xFFFFE488u; // 800DFF70
  {uint32_t ea=c->r[2]+0xFFFFA4ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFF74
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800DFF78
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800DFF7C
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800DFF80
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800DFF84
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DFF88
  c->lr=0x800DFF90u; f_80256EC4(c); // 800DFF8C
  c->r[5]=R32(c->r[28]+0x000003A4u); // 800DFF90
  c->r[4]=0u+0x00000000u; // 800DFF94
  {uint32_t ea=c->r[2]+0xFFFFA4A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFF98
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800DFF9C
  c->f[2]=c->f[1]; // 800DFFA0
  c->r[5]=R32(c->r[28]+0x000003A4u); // 800DFFA4
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800DFFA8
  c->r[5]=R32(c->r[5]+0x00000034u); // 800DFFAC
  c->lr=0x800DFFB4u; f_8024FEAC(c); // 800DFFB0
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800DFFB4
  c->r[4]=R16(c->r[28]+0x0000007Au); // 800DFFB8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DFFBC
  c->lr=0x800DFFC4u; f_80259C78(c); // 800DFFC0
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800DFFC4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800DFFC8
  c->lr=0x800DFFD0u; f_802501B0(c); // 800DFFCC
  c->r[4]=R32(c->r[28]+0x000003A4u); // 800DFFD0
  c->r[3]=c->r[28]|c->r[28]; // 800DFFD4
  W8(c->r[4]+0x0000001Du,c->r[29]); // 800DFFD8
  W8(c->r[28]+0x0000006Fu,c->r[30]); // 800DFFDC
  c->lr=0x800DFFE4u; f_801F56F4(c); // 800DFFE0
  c->r[7]=0u+0x803D0000u; // 800DFFE4
  {uint32_t ea=c->r[7]+0x00002F78u; c->r[6]=R32(ea); c->r[7]=ea;} // 800DFFE8
  c->r[3]=c->r[28]|c->r[28]; // 800DFFEC
  c->r[4]=c->r[1]+0x00000008u; // 800DFFF0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800DFFF4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800DFFF8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DFFFC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E0000
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E0004
  c->lr=0x800E000Cu; f_800E002C(c); // 800E0008
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E000C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E0010
  c->r[30]=R32(c->r[1]+0x00000028u); // 800E0014
  c->r[29]=R32(c->r[1]+0x00000024u); // 800E0018
  c->r[28]=R32(c->r[1]+0x00000020u); // 800E001C
  c->lr=c->r[0]; // 800E0020
  c->r[1]=c->r[1]+0x00000030u; // 800E0024
  return; // 800E0028
}

// fn_800E002C
void f_800E002C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E002C
  c->r[0]=c->lr; // 800E0030
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0034
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0038
  c->r[31]=c->r[4]|c->r[4]; // 800E003C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E0040
  c->r[30]=c->r[3]|c->r[3]; // 800E0044
  c->r[3]=c->r[31]|c->r[31]; // 800E0048
  c->lr=0x800E0050u; f_802B9FDC(c); // 800E004C
  cmps(c,0,(int32_t)c->r[3],0); // 800E0050
  if (crb(c,2)) { goto L_800E0070; } // 800E0054
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E0058
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E005C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E0060
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E0064
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E0068
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E006C
L_800E0070:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0070
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0074
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E0078
  c->lr=c->r[0]; // 800E007C
  c->r[1]=c->r[1]+0x00000010u; // 800E0080
  return; // 800E0084
}

// fn_800E0088
void f_800E0088(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0088
  c->r[0]=c->lr; // 800E008C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E0090
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800E0094
  c->r[31]=c->r[3]|c->r[3]; // 800E0098
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800E009C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800E00A0
  c->ctr=c->r[12]; // 800E00A4
  if (true) { c->lr=0x800E00ACu; dispatch(c,c->ctr); } // 800E00A8
  c->r[3]=c->r[31]|c->r[31]; // 800E00AC
  c->lr=0x800E00B4u; f_801F4C0C(c); // 800E00B0
  c->r[3]=c->r[31]+0x00000210u; // 800E00B4
  c->lr=0x800E00BCu; f_80221698(c); // 800E00B8
  c->r[3]=c->r[31]|c->r[31]; // 800E00BC
  c->lr=0x800E00C4u; f_800E0460(c); // 800E00C0
  c->r[3]=c->r[31]|c->r[31]; // 800E00C4
  c->lr=0x800E00CCu; f_801F56F4(c); // 800E00C8
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E00CC
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800E00D0
  cmps(c,0,(int32_t)c->r[0],0); // 800E00D4
  if (crb(c,2)) { goto L_800E0110; } // 800E00D8
  c->r[3]=c->r[3]+0x0000005Cu; // 800E00DC
  c->r[4]=c->r[31]+0x0000002Cu; // 800E00E0
  c->lr=0x800E00E8u; f_800361A0(c); // 800E00E4
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E00E8
  c->r[4]=c->r[31]+0x00000060u; // 800E00EC
  c->r[3]=c->r[3]+0x00000068u; // 800E00F0
  c->lr=0x800E00F8u; f_800361A0(c); // 800E00F4
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E00F8
  c->r[3]=c->r[31]|c->r[31]; // 800E00FC
  c->lr=0x800E0104u; f_801F58FC(c); // 800E0100
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E0104
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E0108
  c->lr=0x800E0110u; f_8025037C(c); // 800E010C
L_800E0110:;
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800E0110
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800E0114
  cmps(c,0,(int32_t)c->r[0],0); // 800E0118
  if (crb(c,2)) { goto L_800E0154; } // 800E011C
  c->r[3]=c->r[3]+0x0000005Cu; // 800E0120
  c->r[4]=c->r[31]+0x0000002Cu; // 800E0124
  c->lr=0x800E012Cu; f_800361A0(c); // 800E0128
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800E012C
  c->r[4]=c->r[31]+0x00000060u; // 800E0130
  c->r[3]=c->r[3]+0x00000068u; // 800E0134
  c->lr=0x800E013Cu; f_800361A0(c); // 800E0138
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800E013C
  c->r[3]=c->r[31]|c->r[31]; // 800E0140
  c->lr=0x800E0148u; f_801F58FC(c); // 800E0144
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800E0148
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E014C
  c->lr=0x800E0154u; f_8025037C(c); // 800E0150
L_800E0154:;
  c->r[3]=R32(c->r[31]+0x000003A0u); // 800E0154
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800E0158
  cmps(c,0,(int32_t)c->r[0],0); // 800E015C
  if (crb(c,2)) { goto L_800E01D8; } // 800E0160
  c->r[7]=0u+0x803A0000u; // 800E0164
  {uint32_t ea=c->r[7]+0xFFFFE470u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E0168
  c->r[3]=c->r[1]+0x00000020u; // 800E016C
  c->r[4]=c->r[1]+0x00000014u; // 800E0170
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E0174
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E0178
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E017C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E0180
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E0184
  c->lr=0x800E018Cu; f_800361A0(c); // 800E0188
  c->r[3]=R32(c->r[31]+0x000003A0u); // 800E018C
  c->r[4]=c->r[31]+0x0000002Cu; // 800E0190
  c->r[3]=c->r[3]+0x0000005Cu; // 800E0194
  c->lr=0x800E019Cu; f_800361A0(c); // 800E0198
  c->r[3]=R32(c->r[31]+0x000003A0u); // 800E019C
  c->r[4]=c->r[31]+0x00000060u; // 800E01A0
  c->r[3]=c->r[3]+0x00000068u; // 800E01A4
  c->lr=0x800E01ACu; f_800361A0(c); // 800E01A8
  c->r[5]=R32(c->r[31]+0x000003A0u); // 800E01AC
  c->r[3]=c->r[31]+0x0000002Cu; // 800E01B0
  c->r[4]=c->r[1]+0x00000020u; // 800E01B4
  c->r[5]=c->r[5]+0x0000005Cu; // 800E01B8
  c->lr=0x800E01C0u; f_80296A4C(c); // 800E01BC
  c->r[4]=R32(c->r[31]+0x000003A0u); // 800E01C0
  c->r[3]=c->r[31]|c->r[31]; // 800E01C4
  c->lr=0x800E01CCu; f_801F58FC(c); // 800E01C8
  c->r[3]=R32(c->r[31]+0x000003A0u); // 800E01CC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E01D0
  c->lr=0x800E01D8u; f_8025037C(c); // 800E01D4
L_800E01D8:;
  c->r[3]=R32(c->r[31]+0x000003A4u); // 800E01D8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800E01DC
  cmps(c,0,(int32_t)c->r[0],0); // 800E01E0
  if (crb(c,2)) { goto L_800E025C; } // 800E01E4
  c->r[7]=0u+0x803A0000u; // 800E01E8
  {uint32_t ea=c->r[7]+0xFFFFE47Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E01EC
  c->r[3]=c->r[1]+0x00000020u; // 800E01F0
  c->r[4]=c->r[1]+0x00000008u; // 800E01F4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E01F8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E01FC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E0200
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E0204
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E0208
  c->lr=0x800E0210u; f_800361A0(c); // 800E020C
  c->r[3]=R32(c->r[31]+0x000003A4u); // 800E0210
  c->r[4]=c->r[31]+0x0000002Cu; // 800E0214
  c->r[3]=c->r[3]+0x0000005Cu; // 800E0218
  c->lr=0x800E0220u; f_800361A0(c); // 800E021C
  c->r[3]=R32(c->r[31]+0x000003A4u); // 800E0220
  c->r[4]=c->r[31]+0x00000060u; // 800E0224
  c->r[3]=c->r[3]+0x00000068u; // 800E0228
  c->lr=0x800E0230u; f_800361A0(c); // 800E022C
  c->r[5]=R32(c->r[31]+0x000003A4u); // 800E0230
  c->r[3]=c->r[31]+0x0000002Cu; // 800E0234
  c->r[4]=c->r[1]+0x00000020u; // 800E0238
  c->r[5]=c->r[5]+0x0000005Cu; // 800E023C
  c->lr=0x800E0244u; f_80296A4C(c); // 800E0240
  c->r[4]=R32(c->r[31]+0x000003A4u); // 800E0244
  c->r[3]=c->r[31]|c->r[31]; // 800E0248
  c->lr=0x800E0250u; f_801F58FC(c); // 800E024C
  c->r[3]=R32(c->r[31]+0x000003A4u); // 800E0250
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E0254
  c->lr=0x800E025Cu; f_8025037C(c); // 800E0258
L_800E025C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E025C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800E0260
  c->lr=c->r[0]; // 800E0264
  c->r[1]=c->r[1]+0x00000040u; // 800E0268
  return; // 800E026C
}

// fn_800E0270
void f_800E0270(Ctx* __restrict c) {
  f_801F50B4(c); return; // 800E0270
}

// fn_800E0274
void f_800E0274(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800E0274
}

// fn_800E0278
void f_800E0278(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800E0278
}

// fn_800E027C
void f_800E027C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E027C
  c->r[0]=c->lr; // 800E0280
  c->r[5]=0u+0x00000000u; // 800E0284
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0288
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E028C
  c->r[31]=c->r[3]|c->r[3]; // 800E0290
  c->r[3]=0u+0x00000281u; // 800E0294
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E0298
  c->r[4]=c->r[4]+0x0000010Cu; // 800E029C
  c->lr=0x800E02A4u; f_8024EE50(c); // 800E02A0
  cmps(c,0,(int32_t)c->r[3],0); // 800E02A4
  if (crb(c,2)) { goto L_800E02B4; } // 800E02A8
  c->r[3]=0u+0x00000000u; // 800E02AC
  goto L_800E033C; // 800E02B0
L_800E02B4:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E02B4
  c->r[3]=0u+0x00000292u; // 800E02B8
  c->r[5]=0u+0x00000000u; // 800E02BC
  c->r[4]=c->r[4]+0x0000010Cu; // 800E02C0
  c->lr=0x800E02C8u; f_8024EE50(c); // 800E02C4
  cmps(c,0,(int32_t)c->r[3],0); // 800E02C8
  if (crb(c,2)) { goto L_800E02D8; } // 800E02CC
  c->r[3]=0u+0x00000000u; // 800E02D0
  goto L_800E033C; // 800E02D4
L_800E02D8:;
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800E02D8
  c->r[3]=0u+0x00000293u; // 800E02DC
  c->r[5]=0u+0x00000000u; // 800E02E0
  c->r[4]=c->r[4]+0x0000010Cu; // 800E02E4
  c->lr=0x800E02ECu; f_8024EE50(c); // 800E02E8
  cmps(c,0,(int32_t)c->r[3],0); // 800E02EC
  if (crb(c,2)) { goto L_800E02FC; } // 800E02F0
  c->r[3]=0u+0x00000000u; // 800E02F4
  goto L_800E033C; // 800E02F8
L_800E02FC:;
  c->r[4]=R32(c->r[31]+0x000003A0u); // 800E02FC
  c->r[3]=0u+0x0000028Eu; // 800E0300
  c->r[5]=0u+0x00000000u; // 800E0304
  c->r[4]=c->r[4]+0x0000010Cu; // 800E0308
  c->lr=0x800E0310u; f_8024EE50(c); // 800E030C
  cmps(c,0,(int32_t)c->r[3],0); // 800E0310
  if (crb(c,2)) { goto L_800E0320; } // 800E0314
  c->r[3]=0u+0x00000000u; // 800E0318
  goto L_800E033C; // 800E031C
L_800E0320:;
  c->r[4]=R32(c->r[31]+0x000003A4u); // 800E0320
  c->r[3]=0u+0x0000028Eu; // 800E0324
  c->r[5]=0u+0x00000000u; // 800E0328
  c->r[4]=c->r[4]+0x0000010Cu; // 800E032C
  c->lr=0x800E0334u; f_8024EE50(c); // 800E0330
  c->r[0]=cntlz(c->r[3]); // 800E0334
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E0338
L_800E033C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E033C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0340
  c->lr=c->r[0]; // 800E0344
  c->r[1]=c->r[1]+0x00000010u; // 800E0348
  return; // 800E034C
}

// fn_800E0350
void f_800E0350(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0350
  c->r[0]=c->lr; // 800E0354
  c->r[7]=0u+0x803D0000u; // 800E0358
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E035C
  c->r[4]=c->r[1]+0x00000008u; // 800E0360
  {uint32_t ea=c->r[7]+0x00002F84u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E0364
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E0368
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E036C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E0370
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E0374
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E0378
  c->lr=0x800E0380u; f_800E002C(c); // 800E037C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E0380
  c->lr=c->r[0]; // 800E0384
  c->r[1]=c->r[1]+0x00000020u; // 800E0388
  return; // 800E038C
}

// fn_800E0390
void f_800E0390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0390
  c->r[0]=c->lr; // 800E0394
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E0398
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E039C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E03A0
  c->r[30]=c->r[3]|c->r[3]; // 800E03A4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E03A8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E03AC
  c->lr=0x800E03B4u; f_802501B0(c); // 800E03B0
  c->r[0]=R16(c->r[30]+0x00000076u); // 800E03B4
  c->r[31]=0u+0x43300000u; // 800E03B8
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E03BC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E03C0
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[1]=RF64(ea);} // 800E03C4
  W32(c->r[1]+0x00000008u,c->r[31]); // 800E03C8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E03CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800E03D0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800E03D4
  c->lr=0x800E03DCu; f_802519A8(c); // 800E03D8
  c->r[0]=R16(c->r[30]+0x00000078u); // 800E03DC
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800E03E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E03E4
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[1]=RF64(ea);} // 800E03E8
  W32(c->r[1]+0x00000010u,c->r[31]); // 800E03EC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E03F0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800E03F4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800E03F8
  c->lr=0x800E0400u; f_802519A8(c); // 800E03FC
  c->r[3]=R32(c->r[30]+0x000003A0u); // 800E0400
  c->r[4]=R16(c->r[30]+0x0000007Au); // 800E0404
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E0408
  c->lr=0x800E0410u; f_80259C78(c); // 800E040C
  c->r[3]=R32(c->r[30]+0x000003A4u); // 800E0410
  c->r[4]=R16(c->r[30]+0x0000007Au); // 800E0414
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E0418
  c->lr=0x800E0420u; f_80259C78(c); // 800E041C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E0420
  c->r[3]=R32(c->r[30]+0x000003A4u); // 800E0424
  c->r[0]=R8(c->r[4]+0x0000001Du); // 800E0428
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800E042C
  c->r[3]=R32(c->r[30]+0x000003A0u); // 800E0430
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800E0434
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800E0438
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800E043C
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E0440
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800E0444
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E0448
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E044C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E0450
  c->lr=c->r[0]; // 800E0454
  c->r[1]=c->r[1]+0x00000020u; // 800E0458
  return; // 800E045C
}

// fn_800E0460
void f_800E0460(Ctx* __restrict c) {
  return; // 800E0460
}

// fn_800E0464
void f_800E0464(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0464
  c->r[0]=c->lr; // 800E0468
  cmps(c,0,(int32_t)c->r[3],0); // 800E046C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0470
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0474
  c->r[31]=c->r[4]|c->r[4]; // 800E0478
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E047C
  c->r[30]=c->r[3]|c->r[3]; // 800E0480
  if (crb(c,2)) { goto L_800E04A0; } // 800E0484
  c->r[4]=0u+0x00000000u; // 800E0488
  c->lr=0x800E0490u; f_8026A06C(c); // 800E048C
  cmps(c,0,(int32_t)c->r[31],0); // 800E0490
  if (!crb(c,1)) { goto L_800E04A0; } // 800E0494
  c->r[3]=c->r[30]|c->r[30]; // 800E0498
  c->lr=0x800E04A0u; f_8026A268(c); // 800E049C
L_800E04A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800E04A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E04A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E04A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E04AC
  c->lr=c->r[0]; // 800E04B0
  c->r[1]=c->r[1]+0x00000010u; // 800E04B4
  return; // 800E04B8
}

// fn_800E04BC
void f_800E04BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E04BC
  c->r[0]=c->lr; // 800E04C0
  c->r[4]=0u+0x00000000u; // 800E04C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E04C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E04CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E04D0
  c->r[30]=c->r[3]|c->r[3]; // 800E04D4
  c->lr=0x800E04DCu; f_801F57D0(c); // 800E04D8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E04DC
  c->r[3]=c->r[30]|c->r[30]; // 800E04E0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E04E4
  c->ctr=c->r[12]; // 800E04E8
  if (true) { c->lr=0x800E04F0u; dispatch(c,c->ctr); } // 800E04EC
  c->r[3]=c->r[30]|c->r[30]; // 800E04F0
  c->lr=0x800E04F8u; f_801F4B94(c); // 800E04F4
  c->r[3]=0u+0x00000003u; // 800E04F8
  c->r[0]=0u+0x00000046u; // 800E04FC
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800E0500
  c->r[3]=c->r[30]|c->r[30]; // 800E0504
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E0508
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800E050C
  c->lr=0x800E0514u; f_801F58BC(c); // 800E0510
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E0514
  c->r[31]=0u+0x00000001u; // 800E0518
  c->r[4]=0u+0x803A0000u; // 800E051C
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800E0520
  c->r[4]=c->r[4]+0xFFFFE498u; // 800E0524
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E0528
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E052C
  c->lr=0x800E0534u; f_80256EC4(c); // 800E0530
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E0534
  c->r[5]=0u+0x805D0000u; // 800E0538
  c->r[4]=c->r[30]+0x0000002Cu; // 800E053C
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800E0540
  c->r[3]=c->r[5]+0x000078B0u; // 800E0544
  c->lr=0x800E054Cu; f_802351CC(c); // 800E0548
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E054C
  c->r[4]=0u+0x00000000u; // 800E0550
  {uint32_t ea=c->r[2]+0xFFFFA4C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0554
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800E0558
  c->r[3]=c->r[30]|c->r[30]; // 800E055C
  c->f[2]=c->f[1]; // 800E0560
  c->r[5]=0u+0x00000001u; // 800E0564
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800E0568
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800E056C
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800E0570
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800E0574
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E0578
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E057C
  c->ctr=c->r[12]; // 800E0580
  if (true) { c->lr=0x800E0588u; dispatch(c,c->ctr); } // 800E0584
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E0588
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E058C
  c->lr=0x800E0594u; f_802501B0(c); // 800E0590
  c->r[3]=c->r[30]|c->r[30]; // 800E0594
  c->lr=0x800E059Cu; f_801F56F4(c); // 800E0598
  c->r[7]=0u+0x803D0000u; // 800E059C
  {uint32_t ea=c->r[7]+0x00003040u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E05A0
  c->r[3]=c->r[30]|c->r[30]; // 800E05A4
  c->r[4]=c->r[1]+0x00000008u; // 800E05A8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E05AC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E05B0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E05B4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E05B8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E05BC
  c->lr=0x800E05C4u; f_800E05DC(c); // 800E05C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E05C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E05C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E05CC
  c->lr=c->r[0]; // 800E05D0
  c->r[1]=c->r[1]+0x00000020u; // 800E05D4
  return; // 800E05D8
}

// fn_800E05DC
void f_800E05DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E05DC
  c->r[0]=c->lr; // 800E05E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E05E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E05E8
  c->r[31]=c->r[4]|c->r[4]; // 800E05EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E05F0
  c->r[30]=c->r[3]|c->r[3]; // 800E05F4
  c->r[3]=c->r[31]|c->r[31]; // 800E05F8
  c->lr=0x800E0600u; f_802B9FDC(c); // 800E05FC
  cmps(c,0,(int32_t)c->r[3],0); // 800E0600
  if (crb(c,2)) { goto L_800E0620; } // 800E0604
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E0608
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E060C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E0610
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E0614
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E0618
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E061C
L_800E0620:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0620
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0624
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E0628
  c->lr=c->r[0]; // 800E062C
  c->r[1]=c->r[1]+0x00000010u; // 800E0630
  return; // 800E0634
}

// fn_800E0638
void f_800E0638(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0638
  c->r[0]=c->lr; // 800E063C
  c->r[6]=0u+0x803D0000u; // 800E0640
  c->r[5]=0u+0x00000000u; // 800E0644
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0648
  c->r[6]=c->r[6]+0x00003028u; // 800E064C
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800E0650
  c->r[3]=R32(c->r[3]+0x00000394u); // 800E0654
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E0658
  c->r[4]=c->r[3]+0x0000010Cu; // 800E065C
  c->r[3]=R32(c->r[6]+c->r[0]); // 800E0660
  c->lr=0x800E0668u; f_8024EE50(c); // 800E0664
  c->r[0]=cntlz(c->r[3]); // 800E0668
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E066C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0670
  c->lr=c->r[0]; // 800E0674
  c->r[1]=c->r[1]+0x00000010u; // 800E0678
  return; // 800E067C
}

// fn_800E0680
void f_800E0680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0680
  c->r[0]=c->lr; // 800E0684
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0688
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E068C
  c->r[31]=c->r[3]|c->r[3]; // 800E0690
  c->lr=0x800E0698u; f_801F4C0C(c); // 800E0694
  c->r[3]=c->r[31]|c->r[31]; // 800E0698
  c->lr=0x800E06A0u; f_801F56F4(c); // 800E069C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E06A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E06A4
  c->lr=c->r[0]; // 800E06A8
  c->r[1]=c->r[1]+0x00000010u; // 800E06AC
  return; // 800E06B0
}

// fn_800E06B4
void f_800E06B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E06B4
  c->r[0]=c->lr; // 800E06B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E06BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E06C0
  c->r[31]=c->r[3]|c->r[3]; // 800E06C4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E06C8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E06CC
  c->lr=0x800E06D4u; f_802501B0(c); // 800E06D0
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E06D4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800E06D8
  if (crb(c,2)) { goto L_800E0750; } // 800E06DC
  c->r[7]=0u+0x803D0000u; // 800E06E0
  {uint32_t ea=c->r[7]+0x0000304Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E06E4
  c->r[3]=c->r[31]|c->r[31]; // 800E06E8
  c->r[4]=c->r[1]+0x00000008u; // 800E06EC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E06F0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E06F4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E06F8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E06FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E0700
  c->lr=0x800E0708u; f_800E05DC(c); // 800E0704
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E0708
  c->r[3]=c->r[31]|c->r[31]; // 800E070C
  {uint32_t ea=c->r[2]+0xFFFFA4C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0710
  c->r[4]=0u+0x00000001u; // 800E0714
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E0718
  c->r[5]=0u+0x00000001u; // 800E071C
  c->f[2]=c->f[1]; // 800E0720
  c->ctr=c->r[12]; // 800E0724
  if (true) { c->lr=0x800E072Cu; dispatch(c,c->ctr); } // 800E0728
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E072C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E0730
  c->lr=0x800E0738u; f_802501B0(c); // 800E0734
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E0738
  c->r[3]=c->r[31]+0x0000000Cu; // 800E073C
  c->r[4]=0u+0x00000000u; // 800E0740
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800E0744
  W32(c->r[31]+0x00000074u,c->r[0]); // 800E0748
  c->lr=0x800E0750u; f_80036430(c); // 800E074C
L_800E0750:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E0750
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E0754
  c->lr=c->r[0]; // 800E0758
  c->r[1]=c->r[1]+0x00000020u; // 800E075C
  return; // 800E0760
}

// fn_800E0764
void f_800E0764(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0764
  c->r[0]=c->lr; // 800E0768
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E076C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E0770
  c->r[31]=c->r[3]|c->r[3]; // 800E0774
  W32(c->r[1]+0x00000028u,c->r[30]); // 800E0778
  c->r[30]=0u+0x803D0000u; // 800E077C
  c->r[30]=c->r[30]+0x00003028u; // 800E0780
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E0784
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E0788
  c->lr=0x800E0790u; f_802501B0(c); // 800E078C
  c->r[3]=R32(c->r[31]+0x00000074u); // 800E0790
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800E0794
  if (crb(c,2)) { goto L_800E07B0; } // 800E0798
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFEu; // 800E079C
  c->r[3]=c->r[31]+0x0000000Cu; // 800E07A0
  W32(c->r[31]+0x00000074u,c->r[0]); // 800E07A4
  c->r[4]=0u+0x00000000u; // 800E07A8
  c->lr=0x800E07B0u; f_80036430(c); // 800E07AC
L_800E07B0:;
  c->r[3]=c->r[31]+0x0000000Cu; // 800E07B0
  c->r[4]=0u+0x0000001Eu; // 800E07B4
  c->lr=0x800E07BCu; f_8004E0A4(c); // 800E07B8
  cmps(c,0,(int32_t)c->r[3],0); // 800E07BC
  if (crb(c,2)) { goto L_800E07D0; } // 800E07C0
  c->r[3]=c->r[31]+0x0000000Cu; // 800E07C4
  c->r[4]=0u+0x00000000u; // 800E07C8
  c->lr=0x800E07D0u; f_800366DC(c); // 800E07CC
L_800E07D0:;
  c->r[3]=c->r[31]+0x0000000Cu; // 800E07D0
  c->r[4]=0u+0x0000001Eu; // 800E07D4
  c->lr=0x800E07DCu; f_800395D0(c); // 800E07D8
  cmps(c,0,(int32_t)c->r[3],0); // 800E07DC
  if (crb(c,2)) { goto L_800E080C; } // 800E07E0
  c->r[4]=c->r[30]+0x00000030u; // 800E07E4
  c->r[6]=R32(c->r[30]+0x00000030u); // 800E07E8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E07EC
  c->r[3]=c->r[31]|c->r[31]; // 800E07F0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E07F4
  c->r[4]=c->r[1]+0x00000014u; // 800E07F8
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E07FC
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E0800
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E0804
  c->lr=0x800E080Cu; f_800E05DC(c); // 800E0808
L_800E080C:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800E080C
  c->r[3]=c->r[30]+0x0000000Cu; // 800E0810
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E0814
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E0818
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E081C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0820
  fcmp(c,0,c->f[1],c->f[0]); // 800E0824
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E0828
  if (!crb(c,2)) { goto L_800E0864; } // 800E082C
  c->r[4]=c->r[30]+0x0000003Cu; // 800E0830
  c->r[6]=R32(c->r[30]+0x0000003Cu); // 800E0834
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E0838
  c->r[3]=c->r[31]|c->r[31]; // 800E083C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E0840
  c->r[4]=c->r[1]+0x00000008u; // 800E0844
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E0848
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E084C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E0850
  c->lr=0x800E0858u; f_800E05DC(c); // 800E0854
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E0858
  c->r[0]=c->r[0]|0x00000004u; // 800E085C
  W32(c->r[31]+0x00000074u,c->r[0]); // 800E0860
L_800E0864:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E0864
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E0868
  c->r[30]=R32(c->r[1]+0x00000028u); // 800E086C
  c->lr=c->r[0]; // 800E0870
  c->r[1]=c->r[1]+0x00000030u; // 800E0874
  return; // 800E0878
}

// fn_800E087C
void f_800E087C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E087C
  c->r[0]=c->lr; // 800E0880
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E0884
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E0888
  c->r[31]=c->r[3]|c->r[3]; // 800E088C
  c->r[0]=R32(c->r[3]+0x00000074u); // 800E0890
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800E0894
  if (crb(c,2)) { goto L_800E08D8; } // 800E0898
  c->r[7]=0u+0x803D0000u; // 800E089C
  {uint32_t ea=c->r[7]+0x00003070u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E08A0
  c->r[4]=c->r[1]+0x00000008u; // 800E08A4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E08A8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E08AC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E08B0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E08B4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E08B8
  c->lr=0x800E08C0u; f_800E05DC(c); // 800E08BC
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E08C0
  c->r[3]=c->r[31]+0x0000000Cu; // 800E08C4
  c->r[4]=0u+0x00000000u; // 800E08C8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800E08CC
  W32(c->r[31]+0x00000074u,c->r[0]); // 800E08D0
  c->lr=0x800E08D8u; f_80036430(c); // 800E08D4
L_800E08D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E08D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E08DC
  c->lr=c->r[0]; // 800E08E0
  c->r[1]=c->r[1]+0x00000020u; // 800E08E4
  return; // 800E08E8
}

// fn_800E08EC
void f_800E08EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E08EC
  c->r[0]=c->lr; // 800E08F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E08F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E08F8
  c->r[31]=c->r[3]|c->r[3]; // 800E08FC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E0900
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E0904
  c->lr=0x800E090Cu; f_802501B0(c); // 800E0908
  cmps(c,0,(int32_t)c->r[3],0); // 800E090C
  if (crb(c,2)) { goto L_800E0928; } // 800E0910
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800E0914
  c->r[3]=0u+0x00000000u; // 800E0918
  W8(c->r[31]+0x0000006Fu,c->r[3]); // 800E091C
  c->r[0]=c->r[0]|0x00002000u; // 800E0920
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800E0924
L_800E0928:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0928
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E092C
  c->lr=c->r[0]; // 800E0930
  c->r[1]=c->r[1]+0x00000010u; // 800E0934
  return; // 800E0938
}

// fn_800E093C
void f_800E093C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800E093C
  c->r[0]=c->r[0]|0x00000001u; // 800E0940
  W32(c->r[3]+0x00000074u,c->r[0]); // 800E0944
  return; // 800E0948
}

// fn_800E094C
void f_800E094C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800E094C
  c->r[3]=rotl(c->r[0],30)&0x00000001u; // 800E0950
  return; // 800E0954
}

// fn_800E0958
void f_800E0958(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0958
  c->r[0]=c->lr; // 800E095C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800E0960
  c->r[5]=c->r[1]+0x00000018u; // 800E0964
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800E0968
  c->r[31]=c->r[3]|c->r[3]; // 800E096C
  c->r[6]=R32(c->r[4]+0x00000394u); // 800E0970
  c->r[4]=0u+0x803A0000u; // 800E0974
  c->r[4]=c->r[4]+0xFFFFE498u; // 800E0978
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800E097C
  c->r[4]=c->r[4]+0x00000009u; // 800E0980
  c->r[6]=0u+0x00000001u; // 800E0984
  c->lr=0x800E098Cu; f_80257018(c); // 800E0988
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E098C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0990
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0994
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 800E0998
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800E099C
  c->r[4]=R32(c->r[1]+0x00000008u); // 800E09A0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800E09A4
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800E09A8
  c->r[0]=R32(c->r[1]+0x00000010u); // 800E09AC
  W32(c->r[31]+0x00000000u,c->r[4]); // 800E09B0
  W32(c->r[31]+0x00000004u,c->r[3]); // 800E09B4
  W32(c->r[31]+0x00000008u,c->r[0]); // 800E09B8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800E09BC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800E09C0
  c->lr=c->r[0]; // 800E09C4
  c->r[1]=c->r[1]+0x00000050u; // 800E09C8
  return; // 800E09CC
}

// fn_800E09D0
void f_800E09D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E09D0
  c->r[0]=c->lr; // 800E09D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E09D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E09DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E09E0
  c->r[30]=c->r[5]|c->r[5]; // 800E09E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E09E8
  c->r[29]=c->r[4]|c->r[4]; // 800E09EC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800E09F0
  c->r[28]=c->r[3]|c->r[3]; // 800E09F4
  c->r[3]=0u+0x00000450u; // 800E09F8
  c->lr=0x800E0A00u; f_8026A1A4(c); // 800E09FC
  cmps(c,0,(int32_t)c->r[3],0); // 800E0A00
  c->r[31]=c->r[3]|c->r[3]; // 800E0A04
  if (crb(c,2)) { goto L_800E0A10; } // 800E0A08
  c->lr=0x800E0A10u; f_800E0A7C(c); // 800E0A0C
L_800E0A10:;
  cmps(c,0,(int32_t)c->r[31],0); // 800E0A10
  if (crb(c,2)) { goto L_800E0A58; } // 800E0A14
  c->r[3]=0u+0x00000003u; // 800E0A18
  c->r[0]=0u+0x00000046u; // 800E0A1C
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800E0A20
  c->r[4]=c->r[29]|c->r[29]; // 800E0A24
  c->r[3]=c->r[31]+0x0000002Cu; // 800E0A28
  W8(c->r[31]+0x0000006Du,c->r[0]); // 800E0A2C
  W8(c->r[31]+0x0000006Eu,c->r[28]); // 800E0A30
  c->lr=0x800E0A38u; f_800361A0(c); // 800E0A34
  c->r[4]=c->r[30]|c->r[30]; // 800E0A38
  c->r[3]=c->r[31]+0x00000060u; // 800E0A3C
  c->lr=0x800E0A44u; f_800361A0(c); // 800E0A40
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E0A44
  c->r[3]=c->r[31]|c->r[31]; // 800E0A48
  c->r[12]=R32(c->r[12]+0x00000014u); // 800E0A4C
  c->ctr=c->r[12]; // 800E0A50
  if (true) { c->lr=0x800E0A58u; dispatch(c,c->ctr); } // 800E0A54
L_800E0A58:;
  c->r[3]=c->r[31]|c->r[31]; // 800E0A58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E0A5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E0A60
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E0A64
  c->r[28]=R32(c->r[1]+0x00000010u); // 800E0A68
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E0A6C
  c->lr=c->r[0]; // 800E0A70
  c->r[1]=c->r[1]+0x00000020u; // 800E0A74
  return; // 800E0A78
}

// fn_800E0A7C
void f_800E0A7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0A7C
  c->r[0]=c->lr; // 800E0A80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0A84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0A88
  c->r[31]=c->r[3]|c->r[3]; // 800E0A8C
  c->lr=0x800E0A94u; f_8026A014(c); // 800E0A90
  c->r[4]=0u+0x803D0000u; // 800E0A94
  c->r[3]=c->r[31]|c->r[31]; // 800E0A98
  c->r[4]=c->r[4]+0x0000307Cu; // 800E0A9C
  W32(c->r[31]+0x000000B0u,c->r[4]); // 800E0AA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0AA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0AA8
  c->lr=c->r[0]; // 800E0AAC
  c->r[1]=c->r[1]+0x00000010u; // 800E0AB0
  return; // 800E0AB4
}

// fn_800E0AB8
void f_800E0AB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0AB8
  c->r[0]=c->lr; // 800E0ABC
  cmps(c,0,(int32_t)c->r[3],0); // 800E0AC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0AC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0AC8
  c->r[31]=c->r[4]|c->r[4]; // 800E0ACC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E0AD0
  c->r[30]=c->r[3]|c->r[3]; // 800E0AD4
  if (crb(c,2)) { goto L_800E0AF4; } // 800E0AD8
  c->r[4]=0u+0x00000000u; // 800E0ADC
  c->lr=0x800E0AE4u; f_8026A06C(c); // 800E0AE0
  cmps(c,0,(int32_t)c->r[31],0); // 800E0AE4
  if (!crb(c,1)) { goto L_800E0AF4; } // 800E0AE8
  c->r[3]=c->r[30]|c->r[30]; // 800E0AEC
  c->lr=0x800E0AF4u; f_8026A268(c); // 800E0AF0
L_800E0AF4:;
  c->r[3]=c->r[30]|c->r[30]; // 800E0AF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0AF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E0AFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0B00
  c->lr=c->r[0]; // 800E0B04
  c->r[1]=c->r[1]+0x00000010u; // 800E0B08
  return; // 800E0B0C
}

// fn_800E0B10
void f_800E0B10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0B10
  c->r[0]=c->lr; // 800E0B14
  c->r[4]=0u+0x00000000u; // 800E0B18
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E0B1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E0B20
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E0B24
  c->r[30]=c->r[3]|c->r[3]; // 800E0B28
  c->lr=0x800E0B30u; f_801F57D0(c); // 800E0B2C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E0B30
  c->r[3]=c->r[30]|c->r[30]; // 800E0B34
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E0B38
  c->ctr=c->r[12]; // 800E0B3C
  if (true) { c->lr=0x800E0B44u; dispatch(c,c->ctr); } // 800E0B40
  c->r[3]=c->r[30]|c->r[30]; // 800E0B44
  c->lr=0x800E0B4Cu; f_801F4B94(c); // 800E0B48
  c->r[3]=0u+0x00000003u; // 800E0B4C
  c->r[0]=0u+0x00000047u; // 800E0B50
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800E0B54
  c->r[3]=c->r[30]|c->r[30]; // 800E0B58
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E0B5C
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800E0B60
  c->lr=0x800E0B68u; f_801F58BC(c); // 800E0B64
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E0B68
  c->r[31]=0u+0x00000001u; // 800E0B6C
  c->r[4]=0u+0x803A0000u; // 800E0B70
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800E0B74
  c->r[4]=c->r[4]+0xFFFFE4B0u; // 800E0B78
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E0B7C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E0B80
  c->lr=0x800E0B88u; f_80256EC4(c); // 800E0B84
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E0B88
  c->r[5]=0u+0x805D0000u; // 800E0B8C
  c->r[4]=c->r[30]+0x0000002Cu; // 800E0B90
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800E0B94
  c->r[3]=c->r[5]+0x000078B0u; // 800E0B98
  c->lr=0x800E0BA0u; f_802351CC(c); // 800E0B9C
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E0BA0
  c->r[4]=0u+0x00000000u; // 800E0BA4
  {uint32_t ea=c->r[2]+0xFFFFA4D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0BA8
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800E0BAC
  c->r[3]=c->r[30]|c->r[30]; // 800E0BB0
  c->f[2]=c->f[1]; // 800E0BB4
  c->r[5]=0u+0x00000001u; // 800E0BB8
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800E0BBC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E0BC0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E0BC4
  c->ctr=c->r[12]; // 800E0BC8
  if (true) { c->lr=0x800E0BD0u; dispatch(c,c->ctr); } // 800E0BCC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E0BD0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E0BD4
  c->lr=0x800E0BDCu; f_802501B0(c); // 800E0BD8
  c->r[3]=c->r[30]|c->r[30]; // 800E0BDC
  c->lr=0x800E0BE4u; f_801F56F4(c); // 800E0BE0
  c->r[7]=0u+0x803D0000u; // 800E0BE4
  {uint32_t ea=c->r[7]+0x000031A0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E0BE8
  c->r[3]=c->r[30]|c->r[30]; // 800E0BEC
  c->r[4]=c->r[1]+0x00000008u; // 800E0BF0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E0BF4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E0BF8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E0BFC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E0C00
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E0C04
  c->lr=0x800E0C0Cu; f_800E0C24(c); // 800E0C08
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E0C0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E0C10
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E0C14
  c->lr=c->r[0]; // 800E0C18
  c->r[1]=c->r[1]+0x00000020u; // 800E0C1C
  return; // 800E0C20
}

// fn_800E0C24
void f_800E0C24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0C24
  c->r[0]=c->lr; // 800E0C28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0C2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0C30
  c->r[31]=c->r[4]|c->r[4]; // 800E0C34
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E0C38
  c->r[30]=c->r[3]|c->r[3]; // 800E0C3C
  c->r[3]=c->r[31]|c->r[31]; // 800E0C40
  c->lr=0x800E0C48u; f_802B9FDC(c); // 800E0C44
  cmps(c,0,(int32_t)c->r[3],0); // 800E0C48
  if (crb(c,2)) { goto L_800E0C68; } // 800E0C4C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E0C50
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E0C54
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E0C58
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E0C5C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E0C60
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E0C64
L_800E0C68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0C68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0C6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E0C70
  c->lr=c->r[0]; // 800E0C74
  c->r[1]=c->r[1]+0x00000010u; // 800E0C78
  return; // 800E0C7C
}

// fn_800E0C80
void f_800E0C80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0C80
  c->r[0]=c->lr; // 800E0C84
  c->r[6]=0u+0x803D0000u; // 800E0C88
  c->r[5]=0u+0x00000000u; // 800E0C8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0C90
  c->r[6]=c->r[6]+0x00003180u; // 800E0C94
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800E0C98
  c->r[3]=R32(c->r[3]+0x00000394u); // 800E0C9C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E0CA0
  c->r[4]=c->r[3]+0x0000010Cu; // 800E0CA4
  c->r[3]=R32(c->r[6]+c->r[0]); // 800E0CA8
  c->lr=0x800E0CB0u; f_8024EE50(c); // 800E0CAC
  c->r[0]=cntlz(c->r[3]); // 800E0CB0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E0CB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0CB8
  c->lr=c->r[0]; // 800E0CBC
  c->r[1]=c->r[1]+0x00000010u; // 800E0CC0
  return; // 800E0CC4
}

// fn_800E0CC8
void f_800E0CC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0CC8
  c->r[0]=c->lr; // 800E0CCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0CD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0CD4
  c->r[31]=c->r[3]|c->r[3]; // 800E0CD8
  c->lr=0x800E0CE0u; f_801F4C0C(c); // 800E0CDC
  c->r[3]=c->r[31]|c->r[31]; // 800E0CE0
  c->lr=0x800E0CE8u; f_801F56F4(c); // 800E0CE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0CE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0CEC
  c->lr=c->r[0]; // 800E0CF0
  c->r[1]=c->r[1]+0x00000010u; // 800E0CF4
  return; // 800E0CF8
}

// fn_800E0CFC
void f_800E0CFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0CFC
  c->r[0]=c->lr; // 800E0D00
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E0D04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E0D08
  c->r[31]=c->r[3]|c->r[3]; // 800E0D0C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E0D10
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E0D14
  c->lr=0x800E0D1Cu; f_802501B0(c); // 800E0D18
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E0D1C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800E0D20
  if (crb(c,2)) { goto L_800E0D98; } // 800E0D24
  c->r[7]=0u+0x803D0000u; // 800E0D28
  {uint32_t ea=c->r[7]+0x000031ACu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E0D2C
  c->r[3]=c->r[31]|c->r[31]; // 800E0D30
  c->r[4]=c->r[1]+0x00000008u; // 800E0D34
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E0D38
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E0D3C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E0D40
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E0D44
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E0D48
  c->lr=0x800E0D50u; f_800E0C24(c); // 800E0D4C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E0D50
  c->r[3]=c->r[31]|c->r[31]; // 800E0D54
  {uint32_t ea=c->r[2]+0xFFFFA4D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0D58
  c->r[4]=0u+0x00000001u; // 800E0D5C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E0D60
  c->r[5]=0u+0x00000001u; // 800E0D64
  c->f[2]=c->f[1]; // 800E0D68
  c->ctr=c->r[12]; // 800E0D6C
  if (true) { c->lr=0x800E0D74u; dispatch(c,c->ctr); } // 800E0D70
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E0D74
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E0D78
  c->lr=0x800E0D80u; f_802501B0(c); // 800E0D7C
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E0D80
  c->r[3]=c->r[31]+0x0000000Cu; // 800E0D84
  c->r[4]=0u+0x00000000u; // 800E0D88
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800E0D8C
  W32(c->r[31]+0x00000074u,c->r[0]); // 800E0D90
  c->lr=0x800E0D98u; f_80036430(c); // 800E0D94
L_800E0D98:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E0D98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E0D9C
  c->lr=c->r[0]; // 800E0DA0
  c->r[1]=c->r[1]+0x00000020u; // 800E0DA4
  return; // 800E0DA8
}

// fn_800E0DAC
void f_800E0DAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0DAC
  c->r[0]=c->lr; // 800E0DB0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E0DB4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E0DB8
  c->r[31]=c->r[3]|c->r[3]; // 800E0DBC
  W32(c->r[1]+0x00000028u,c->r[30]); // 800E0DC0
  c->r[30]=0u+0x803D0000u; // 800E0DC4
  c->r[30]=c->r[30]+0x00003180u; // 800E0DC8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E0DCC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E0DD0
  c->lr=0x800E0DD8u; f_802501B0(c); // 800E0DD4
  c->r[3]=R32(c->r[31]+0x00000074u); // 800E0DD8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800E0DDC
  if (crb(c,2)) { goto L_800E0DF8; } // 800E0DE0
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFEu; // 800E0DE4
  c->r[3]=c->r[31]+0x0000000Cu; // 800E0DE8
  W32(c->r[31]+0x00000074u,c->r[0]); // 800E0DEC
  c->r[4]=0u+0x00000000u; // 800E0DF0
  c->lr=0x800E0DF8u; f_80036430(c); // 800E0DF4
L_800E0DF8:;
  c->r[3]=c->r[31]+0x0000000Cu; // 800E0DF8
  c->r[4]=0u+0x0000001Eu; // 800E0DFC
  c->lr=0x800E0E04u; f_8004E0A4(c); // 800E0E00
  cmps(c,0,(int32_t)c->r[3],0); // 800E0E04
  if (crb(c,2)) { goto L_800E0E18; } // 800E0E08
  c->r[3]=c->r[31]+0x0000000Cu; // 800E0E0C
  c->r[4]=0u+0x00000000u; // 800E0E10
  c->lr=0x800E0E18u; f_800366DC(c); // 800E0E14
L_800E0E18:;
  c->r[3]=c->r[31]+0x0000000Cu; // 800E0E18
  c->r[4]=0u+0x0000001Eu; // 800E0E1C
  c->lr=0x800E0E24u; f_800395D0(c); // 800E0E20
  cmps(c,0,(int32_t)c->r[3],0); // 800E0E24
  if (crb(c,2)) { goto L_800E0E54; } // 800E0E28
  c->r[4]=c->r[30]+0x00000038u; // 800E0E2C
  c->r[6]=R32(c->r[30]+0x00000038u); // 800E0E30
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E0E34
  c->r[3]=c->r[31]|c->r[31]; // 800E0E38
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E0E3C
  c->r[4]=c->r[1]+0x00000014u; // 800E0E40
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E0E44
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E0E48
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E0E4C
  c->lr=0x800E0E54u; f_800E0C24(c); // 800E0E50
L_800E0E54:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800E0E54
  c->r[3]=c->r[30]+0x00000010u; // 800E0E58
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E0E5C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E0E60
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0E64
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0E68
  fcmp(c,0,c->f[1],c->f[0]); // 800E0E6C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E0E70
  if (!crb(c,2)) { goto L_800E0EAC; } // 800E0E74
  c->r[4]=c->r[30]+0x00000044u; // 800E0E78
  c->r[6]=R32(c->r[30]+0x00000044u); // 800E0E7C
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E0E80
  c->r[3]=c->r[31]|c->r[31]; // 800E0E84
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E0E88
  c->r[4]=c->r[1]+0x00000008u; // 800E0E8C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E0E90
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E0E94
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E0E98
  c->lr=0x800E0EA0u; f_800E0C24(c); // 800E0E9C
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E0EA0
  c->r[0]=c->r[0]|0x00000004u; // 800E0EA4
  W32(c->r[31]+0x00000074u,c->r[0]); // 800E0EA8
L_800E0EAC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E0EAC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E0EB0
  c->r[30]=R32(c->r[1]+0x00000028u); // 800E0EB4
  c->lr=c->r[0]; // 800E0EB8
  c->r[1]=c->r[1]+0x00000030u; // 800E0EBC
  return; // 800E0EC0
}

// fn_800E0EC4
void f_800E0EC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0EC4
  c->r[0]=c->lr; // 800E0EC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E0ECC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E0ED0
  c->r[31]=c->r[3]|c->r[3]; // 800E0ED4
  c->r[0]=R32(c->r[3]+0x00000074u); // 800E0ED8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800E0EDC
  if (crb(c,2)) { goto L_800E0F20; } // 800E0EE0
  c->r[7]=0u+0x803D0000u; // 800E0EE4
  {uint32_t ea=c->r[7]+0x000031D0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E0EE8
  c->r[4]=c->r[1]+0x00000008u; // 800E0EEC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E0EF0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E0EF4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E0EF8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E0EFC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E0F00
  c->lr=0x800E0F08u; f_800E0C24(c); // 800E0F04
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E0F08
  c->r[3]=c->r[31]+0x0000000Cu; // 800E0F0C
  c->r[4]=0u+0x00000000u; // 800E0F10
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800E0F14
  W32(c->r[31]+0x00000074u,c->r[0]); // 800E0F18
  c->lr=0x800E0F20u; f_80036430(c); // 800E0F1C
L_800E0F20:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E0F20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E0F24
  c->lr=c->r[0]; // 800E0F28
  c->r[1]=c->r[1]+0x00000020u; // 800E0F2C
  return; // 800E0F30
}

// fn_800E0F34
void f_800E0F34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0F34
  c->r[0]=c->lr; // 800E0F38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0F3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0F40
  c->r[31]=c->r[3]|c->r[3]; // 800E0F44
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E0F48
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E0F4C
  c->lr=0x800E0F54u; f_802501B0(c); // 800E0F50
  cmps(c,0,(int32_t)c->r[3],0); // 800E0F54
  if (crb(c,2)) { goto L_800E0F64; } // 800E0F58
  c->r[0]=0u+0x00000000u; // 800E0F5C
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800E0F60
L_800E0F64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0F64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0F68
  c->lr=c->r[0]; // 800E0F6C
  c->r[1]=c->r[1]+0x00000010u; // 800E0F70
  return; // 800E0F74
}

// fn_800E0F78
void f_800E0F78(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800E0F78
  c->r[0]=c->r[0]|0x00000001u; // 800E0F7C
  W32(c->r[3]+0x00000074u,c->r[0]); // 800E0F80
  return; // 800E0F84
}

// fn_800E0F88
void f_800E0F88(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800E0F88
  c->r[3]=rotl(c->r[0],30)&0x00000001u; // 800E0F8C
  return; // 800E0F90
}

// fn_800E0F94
void f_800E0F94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0F94
  c->r[0]=c->lr; // 800E0F98
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E0F9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E0FA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E0FA4
  c->r[30]=c->r[5]|c->r[5]; // 800E0FA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E0FAC
  c->r[29]=c->r[4]|c->r[4]; // 800E0FB0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800E0FB4
  c->r[28]=c->r[3]|c->r[3]; // 800E0FB8
  c->r[3]=0u+0x00000450u; // 800E0FBC
  c->lr=0x800E0FC4u; f_8026A1A4(c); // 800E0FC0
  cmps(c,0,(int32_t)c->r[3],0); // 800E0FC4
  c->r[31]=c->r[3]|c->r[3]; // 800E0FC8
  if (crb(c,2)) { goto L_800E0FD4; } // 800E0FCC
  c->lr=0x800E0FD4u; f_800E1040(c); // 800E0FD0
L_800E0FD4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800E0FD4
  if (crb(c,2)) { goto L_800E101C; } // 800E0FD8
  c->r[3]=0u+0x00000003u; // 800E0FDC
  c->r[0]=0u+0x00000047u; // 800E0FE0
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800E0FE4
  c->r[4]=c->r[29]|c->r[29]; // 800E0FE8
  c->r[3]=c->r[31]+0x0000002Cu; // 800E0FEC
  W8(c->r[31]+0x0000006Du,c->r[0]); // 800E0FF0
  W8(c->r[31]+0x0000006Eu,c->r[28]); // 800E0FF4
  c->lr=0x800E0FFCu; f_800361A0(c); // 800E0FF8
  c->r[4]=c->r[30]|c->r[30]; // 800E0FFC
  c->r[3]=c->r[31]+0x00000060u; // 800E1000
  c->lr=0x800E1008u; f_800361A0(c); // 800E1004
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E1008
  c->r[3]=c->r[31]|c->r[31]; // 800E100C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800E1010
  c->ctr=c->r[12]; // 800E1014
  if (true) { c->lr=0x800E101Cu; dispatch(c,c->ctr); } // 800E1018
L_800E101C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E101C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E1020
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E1024
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E1028
  c->r[28]=R32(c->r[1]+0x00000010u); // 800E102C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E1030
  c->lr=c->r[0]; // 800E1034
  c->r[1]=c->r[1]+0x00000020u; // 800E1038
  return; // 800E103C
}

// fn_800E1040
void f_800E1040(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1040
  c->r[0]=c->lr; // 800E1044
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1048
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E104C
  c->r[31]=c->r[3]|c->r[3]; // 800E1050
  c->lr=0x800E1058u; f_8026A014(c); // 800E1054
  c->r[4]=0u+0x803D0000u; // 800E1058
  c->r[3]=c->r[31]|c->r[31]; // 800E105C
  c->r[4]=c->r[4]+0x000031DCu; // 800E1060
  W32(c->r[31]+0x000000B0u,c->r[4]); // 800E1064
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1068
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E106C
  c->lr=c->r[0]; // 800E1070
  c->r[1]=c->r[1]+0x00000010u; // 800E1074
  return; // 800E1078
}

// fn_800E107C
void f_800E107C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E107C
  c->r[0]=c->lr; // 800E1080
  cmps(c,0,(int32_t)c->r[3],0); // 800E1084
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1088
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E108C
  c->r[31]=c->r[4]|c->r[4]; // 800E1090
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E1094
  c->r[30]=c->r[3]|c->r[3]; // 800E1098
  if (crb(c,2)) { goto L_800E10B8; } // 800E109C
  c->r[4]=0u+0x00000000u; // 800E10A0
  c->lr=0x800E10A8u; f_8026A06C(c); // 800E10A4
  cmps(c,0,(int32_t)c->r[31],0); // 800E10A8
  if (!crb(c,1)) { goto L_800E10B8; } // 800E10AC
  c->r[3]=c->r[30]|c->r[30]; // 800E10B0
  c->lr=0x800E10B8u; f_8026A268(c); // 800E10B4
L_800E10B8:;
  c->r[3]=c->r[30]|c->r[30]; // 800E10B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E10BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E10C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E10C4
  c->lr=c->r[0]; // 800E10C8
  c->r[1]=c->r[1]+0x00000010u; // 800E10CC
  return; // 800E10D0
}

// fn_800E10D4
void f_800E10D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E10D4
  c->r[0]=c->lr; // 800E10D8
  c->r[4]=0u+0x00000000u; // 800E10DC
  W32(c->r[1]+0x00000074u,c->r[0]); // 800E10E0
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800E10E4
  c->r[31]=c->r[3]|c->r[3]; // 800E10E8
  W32(c->r[1]+0x00000068u,c->r[30]); // 800E10EC
  W32(c->r[1]+0x00000064u,c->r[29]); // 800E10F0
  W32(c->r[1]+0x00000060u,c->r[28]); // 800E10F4
  c->lr=0x800E10FCu; f_801F57D0(c); // 800E10F8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E10FC
  c->r[3]=c->r[31]|c->r[31]; // 800E1100
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E1104
  c->ctr=c->r[12]; // 800E1108
  if (true) { c->lr=0x800E1110u; dispatch(c,c->ctr); } // 800E110C
  c->r[3]=c->r[31]|c->r[31]; // 800E1110
  c->lr=0x800E1118u; f_801F4B94(c); // 800E1114
  c->r[3]=0u+0x00000003u; // 800E1118
  c->r[0]=0u+0x00000048u; // 800E111C
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800E1120
  c->r[3]=c->r[31]|c->r[31]; // 800E1124
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E1128
  W8(c->r[31]+0x0000006Du,c->r[0]); // 800E112C
  c->lr=0x800E1134u; f_801F58BC(c); // 800E1130
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E1134
  c->r[29]=0u+0x00000001u; // 800E1138
  c->r[28]=0u+0x803A0000u; // 800E113C
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800E1140
  c->r[4]=c->r[28]+0xFFFFE4D8u; // 800E1144
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E1148
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E114C
  c->lr=0x800E1154u; f_80256EC4(c); // 800E1150
  c->r[6]=R32(c->r[31]+0x00000394u); // 800E1154
  c->r[5]=0u+0x805D0000u; // 800E1158
  c->r[4]=c->r[31]+0x0000002Cu; // 800E115C
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800E1160
  c->r[3]=c->r[5]+0x000078B0u; // 800E1164
  c->lr=0x800E116Cu; f_802351CC(c); // 800E1168
  c->r[5]=R32(c->r[31]+0x00000394u); // 800E116C
  c->r[4]=0u+0x00000000u; // 800E1170
  {uint32_t ea=c->r[2]+0xFFFFA4E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1174
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800E1178
  c->r[3]=c->r[31]|c->r[31]; // 800E117C
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800E1180
  c->lr=0x800E1188u; f_80038A80(c); // 800E1184
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E1188
  c->r[3]=c->r[31]|c->r[31]; // 800E118C
  {uint32_t ea=c->r[2]+0xFFFFA4E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1190
  c->r[4]=0u+0x00000000u; // 800E1194
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E1198
  c->r[5]=0u+0x00000001u; // 800E119C
  c->f[2]=c->f[1]; // 800E11A0
  c->ctr=c->r[12]; // 800E11A4
  if (true) { c->lr=0x800E11ACu; dispatch(c,c->ctr); } // 800E11A8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E11AC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E11B0
  c->lr=0x800E11B8u; f_802501B0(c); // 800E11B4
  c->r[3]=c->r[31]|c->r[31]; // 800E11B8
  c->lr=0x800E11C0u; f_801F56F4(c); // 800E11BC
  c->r[7]=0u+0x803D0000u; // 800E11C0
  {uint32_t ea=c->r[7]+0x000032E0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E11C4
  c->r[3]=c->r[31]|c->r[31]; // 800E11C8
  c->r[4]=c->r[1]+0x0000002Cu; // 800E11CC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E11D0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E11D4
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800E11D8
  W32(c->r[1]+0x00000030u,c->r[5]); // 800E11DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E11E0
  c->lr=0x800E11E8u; f_800E12E8(c); // 800E11E4
  c->r[4]=c->r[28]+0xFFFFE4D8u; // 800E11E8
  c->r[28]=0u+0x80550000u; // 800E11EC
  c->r[3]=c->r[28]+0xFFFFC848u; // 800E11F0
  c->r[5]=0u+0x00000004u; // 800E11F4
  c->r[4]=c->r[4]+0x00000009u; // 800E11F8
  c->r[6]=0u+0x00000000u; // 800E11FC
  c->lr=0x800E1204u; f_8018D3E4(c); // 800E1200
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800E1204
  W8(c->r[31]+0x0000007Cu,c->r[3]); // 800E1208
  cmpu(c,0,c->r[0],0x000000FFu); // 800E120C
  if (crb(c,2)) { goto L_800E12C8; } // 800E1210
  c->r[7]=0u+0x803A0000u; // 800E1214
  {uint32_t ea=c->r[7]+0xFFFFE4C0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E1218
  c->r[3]=c->r[1]+0x00000050u; // 800E121C
  c->r[4]=c->r[31]+0x0000002Cu; // 800E1220
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E1224
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E1228
  W32(c->r[1]+0x00000038u,c->r[6]); // 800E122C
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 800E1230
  W32(c->r[1]+0x00000040u,c->r[0]); // 800E1234
  c->lr=0x800E123Cu; f_800361A0(c); // 800E1238
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E123C
  c->r[3]=c->r[1]+0x00000044u; // 800E1240
  {uint32_t ea=c->r[2]+0xFFFFA4E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1244
  c->r[4]=c->r[31]+0x00000060u; // 800E1248
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800E124C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800E1250
  c->lr=0x800E1258u; f_800361A0(c); // 800E1254
  c->r[29]=R32(c->r[1]+0x00000038u); // 800E1258
  c->r[3]=c->r[28]+0xFFFFC848u; // 800E125C
  c->r[30]=R32(c->r[1]+0x0000003Cu); // 800E1260
  c->r[5]=c->r[1]+0x00000020u; // 800E1264
  c->r[12]=R32(c->r[1]+0x00000040u); // 800E1268
  c->r[6]=c->r[1]+0x00000014u; // 800E126C
  c->r[11]=R32(c->r[1]+0x00000044u); // 800E1270
  c->r[7]=c->r[1]+0x00000008u; // 800E1274
  c->r[10]=R32(c->r[1]+0x00000048u); // 800E1278
  c->r[9]=R32(c->r[1]+0x0000004Cu); // 800E127C
  c->r[8]=R32(c->r[1]+0x00000050u); // 800E1280
  c->r[4]=R32(c->r[1]+0x00000054u); // 800E1284
  c->r[0]=R32(c->r[1]+0x00000058u); // 800E1288
  W32(c->r[1]+0x00000008u,c->r[29]); // 800E128C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800E1290
  W32(c->r[1]+0x00000010u,c->r[12]); // 800E1294
  W32(c->r[1]+0x00000014u,c->r[11]); // 800E1298
  W32(c->r[1]+0x00000018u,c->r[10]); // 800E129C
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800E12A0
  W32(c->r[1]+0x00000020u,c->r[8]); // 800E12A4
  W32(c->r[1]+0x00000024u,c->r[4]); // 800E12A8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E12AC
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800E12B0
  c->lr=0x800E12B8u; f_8018DD04(c); // 800E12B4
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800E12B8
  c->r[3]=c->r[28]+0xFFFFC848u; // 800E12BC
  c->r[5]=0u+0x00000001u; // 800E12C0
  c->lr=0x800E12C8u; f_8018E2D4(c); // 800E12C4
L_800E12C8:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800E12C8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800E12CC
  c->r[30]=R32(c->r[1]+0x00000068u); // 800E12D0
  c->r[29]=R32(c->r[1]+0x00000064u); // 800E12D4
  c->r[28]=R32(c->r[1]+0x00000060u); // 800E12D8
  c->lr=c->r[0]; // 800E12DC
  c->r[1]=c->r[1]+0x00000070u; // 800E12E0
  return; // 800E12E4
}

// fn_800E12E8
void f_800E12E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E12E8
  c->r[0]=c->lr; // 800E12EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E12F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E12F4
  c->r[31]=c->r[4]|c->r[4]; // 800E12F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E12FC
  c->r[30]=c->r[3]|c->r[3]; // 800E1300
  c->r[3]=c->r[31]|c->r[31]; // 800E1304
  c->lr=0x800E130Cu; f_802B9FDC(c); // 800E1308
  cmps(c,0,(int32_t)c->r[3],0); // 800E130C
  if (crb(c,2)) { goto L_800E132C; } // 800E1310
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E1314
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E1318
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E131C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E1320
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E1324
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E1328
L_800E132C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E132C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1330
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E1334
  c->lr=c->r[0]; // 800E1338
  c->r[1]=c->r[1]+0x00000010u; // 800E133C
  return; // 800E1340
}

// fn_800E1344
void f_800E1344(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1344
  c->r[0]=c->lr; // 800E1348
  c->r[4]=c->r[3]|c->r[3]; // 800E134C
  c->r[3]=0u+0x00000532u; // 800E1350
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1354
  c->r[5]=0u+0x00000000u; // 800E1358
  c->r[4]=R32(c->r[4]+0x00000394u); // 800E135C
  c->r[4]=c->r[4]+0x0000010Cu; // 800E1360
  c->lr=0x800E1368u; f_8024EE50(c); // 800E1364
  c->r[0]=cntlz(c->r[3]); // 800E1368
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E136C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1370
  c->lr=c->r[0]; // 800E1374
  c->r[1]=c->r[1]+0x00000010u; // 800E1378
  return; // 800E137C
}

// fn_800E1380
void f_800E1380(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1380
  c->r[0]=c->lr; // 800E1384
  W32(c->r[1]+0x00000094u,c->r[0]); // 800E1388
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800E138C
  W32(c->r[1]+0x00000088u,c->r[30]); // 800E1390
  c->r[30]=c->r[3]|c->r[3]; // 800E1394
  c->lr=0x800E139Cu; f_801F4C0C(c); // 800E1398
  c->r[3]=c->r[30]|c->r[30]; // 800E139C
  c->lr=0x800E13A4u; f_801F56F4(c); // 800E13A0
  c->r[0]=R8(c->r[30]+0x0000007Cu); // 800E13A4
  cmpu(c,0,c->r[0],0x000000FFu); // 800E13A8
  if (crb(c,2)) { goto L_800E149C; } // 800E13AC
  c->r[7]=0u+0x803A0000u; // 800E13B0
  {uint32_t ea=c->r[7]+0xFFFFE4CCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E13B4
  c->r[3]=c->r[1]+0x00000044u; // 800E13B8
  c->r[4]=c->r[30]+0x0000002Cu; // 800E13BC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E13C0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E13C4
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800E13C8
  W32(c->r[1]+0x00000030u,c->r[5]); // 800E13CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E13D0
  c->lr=0x800E13D8u; f_800361A0(c); // 800E13D4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E13D8
  c->r[3]=c->r[1]+0x00000038u; // 800E13DC
  {uint32_t ea=c->r[2]+0xFFFFA4E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E13E0
  c->r[4]=c->r[30]+0x00000060u; // 800E13E4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800E13E8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800E13EC
  c->lr=0x800E13F4u; f_800361A0(c); // 800E13F0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E13F4
  c->r[4]=0u+0x803A0000u; // 800E13F8
  c->r[4]=c->r[4]+0xFFFFE4D8u; // 800E13FC
  c->r[5]=c->r[1]+0x00000050u; // 800E1400
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E1404
  c->r[4]=c->r[4]+0x0000000Du; // 800E1408
  c->r[6]=0u+0x00000001u; // 800E140C
  c->lr=0x800E1414u; f_80257018(c); // 800E1410
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1414
  c->r[3]=0u+0x80550000u; // 800E1418
  {uint32_t ea=c->r[2]+0xFFFFA4F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E141C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E1420
  c->r[12]=R32(c->r[1]+0x00000034u); // 800E1424
  c->r[5]=c->r[1]+0x00000020u; // 800E1428
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800E142C
  {uint32_t ea=c->r[2]+0xFFFFA4F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1430
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E1434
  c->r[6]=c->r[1]+0x00000014u; // 800E1438
  c->r[11]=R32(c->r[1]+0x00000038u); // 800E143C
  c->r[7]=c->r[1]+0x00000008u; // 800E1440
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 800E1444
  c->r[10]=R32(c->r[1]+0x0000003Cu); // 800E1448
  c->r[9]=R32(c->r[1]+0x00000040u); // 800E144C
  c->r[8]=R32(c->r[1]+0x00000044u); // 800E1450
  c->r[4]=R32(c->r[1]+0x00000048u); // 800E1454
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800E1458
  {uint32_t ea=c->r[2]+0xFFFFA4F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E145C
  {uint32_t ea=c->r[2]+0xFFFFA4ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1460
  W32(c->r[1]+0x00000010u,c->r[12]); // 800E1464
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 800E1468
  W32(c->r[1]+0x00000008u,c->r[31]); // 800E146C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800E1470
  c->r[12]=R32(c->r[1]+0x00000030u); // 800E1474
  W32(c->r[1]+0x00000014u,c->r[11]); // 800E1478
  W32(c->r[1]+0x0000000Cu,c->r[12]); // 800E147C
  W32(c->r[1]+0x00000018u,c->r[10]); // 800E1480
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800E1484
  W32(c->r[1]+0x00000020u,c->r[8]); // 800E1488
  W32(c->r[1]+0x00000024u,c->r[4]); // 800E148C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E1490
  c->r[4]=R8(c->r[30]+0x0000007Cu); // 800E1494
  c->lr=0x800E149Cu; f_8018DD04(c); // 800E1498
L_800E149C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800E149C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800E14A0
  c->r[30]=R32(c->r[1]+0x00000088u); // 800E14A4
  c->lr=c->r[0]; // 800E14A8
  c->r[1]=c->r[1]+0x00000090u; // 800E14AC
  return; // 800E14B0
}

// fn_800E14B4
void f_800E14B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E14B4
  c->r[0]=c->lr; // 800E14B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E14BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E14C0
  c->r[31]=c->r[3]|c->r[3]; // 800E14C4
  c->r[4]=R8(c->r[3]+0x0000007Cu); // 800E14C8
  cmpu(c,0,c->r[4],0x000000FFu); // 800E14CC
  if (crb(c,2)) { goto L_800E14E8; } // 800E14D0
  c->r[3]=0u+0x80550000u; // 800E14D4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E14D8
  c->lr=0x800E14E0u; f_8018D694(c); // 800E14DC
  c->r[0]=0u+0x000000FFu; // 800E14E0
  W8(c->r[31]+0x0000007Cu,c->r[0]); // 800E14E4
L_800E14E8:;
  c->r[3]=c->r[31]|c->r[31]; // 800E14E8
  c->lr=0x800E14F0u; f_801F4C78(c); // 800E14EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E14F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E14F4
  c->lr=c->r[0]; // 800E14F8
  c->r[1]=c->r[1]+0x00000010u; // 800E14FC
  return; // 800E1500
}

// fn_800E1504
void f_800E1504(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1504
  c->r[0]=c->lr; // 800E1508
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E150C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E1510
  c->r[31]=c->r[3]|c->r[3]; // 800E1514
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E1518
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E151C
  c->lr=0x800E1524u; f_802501B0(c); // 800E1520
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E1524
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800E1528
  if (crb(c,2)) { goto L_800E15AC; } // 800E152C
  c->r[7]=0u+0x803D0000u; // 800E1530
  {uint32_t ea=c->r[7]+0x000032ECu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E1534
  c->r[3]=c->r[31]|c->r[31]; // 800E1538
  c->r[4]=c->r[1]+0x00000008u; // 800E153C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E1540
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E1544
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E1548
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E154C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E1550
  c->lr=0x800E1558u; f_800E12E8(c); // 800E1554
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E1558
  c->r[3]=c->r[31]|c->r[31]; // 800E155C
  {uint32_t ea=c->r[2]+0xFFFFA4E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1560
  c->r[4]=0u+0x00000001u; // 800E1564
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E1568
  c->r[5]=0u+0x00000001u; // 800E156C
  c->f[2]=c->f[1]; // 800E1570
  c->ctr=c->r[12]; // 800E1574
  if (true) { c->lr=0x800E157Cu; dispatch(c,c->ctr); } // 800E1578
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E157C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E1580
  c->lr=0x800E1588u; f_802501B0(c); // 800E1584
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E1588
  c->r[3]=0u+0x80550000u; // 800E158C
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800E1590
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E1594
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800E1598
  c->r[5]=0u+0x00000000u; // 800E159C
  c->r[0]=c->r[0]|0x00000002u; // 800E15A0
  W32(c->r[31]+0x00000074u,c->r[0]); // 800E15A4
  c->lr=0x800E15ACu; f_8018E2D4(c); // 800E15A8
L_800E15AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E15AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E15B0
  c->lr=c->r[0]; // 800E15B4
  c->r[1]=c->r[1]+0x00000020u; // 800E15B8
  return; // 800E15BC
}

// fn_800E15C0
void f_800E15C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E15C0
  c->r[0]=c->lr; // 800E15C4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800E15C8
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800E15CC
  c->r[31]=c->r[3]|c->r[3]; // 800E15D0
  W32(c->r[1]+0x000000A8u,c->r[30]); // 800E15D4
  c->r[30]=0u+0x803A0000u; // 800E15D8
  c->r[30]=c->r[30]+0xFFFFE4D8u; // 800E15DC
  W32(c->r[1]+0x000000A4u,c->r[29]); // 800E15E0
  c->r[29]=0u+0x803D0000u; // 800E15E4
  c->r[29]=c->r[29]+0x000032E0u; // 800E15E8
  goto L_800E16D0; // 800E15EC
L_800E15F0:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E15F0
  c->r[4]=c->r[30]+0x0000000Du; // 800E15F4
  c->r[5]=c->r[1]+0x00000068u; // 800E15F8
  c->r[6]=0u+0x00000001u; // 800E15FC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E1600
  c->lr=0x800E1608u; f_80257018(c); // 800E1604
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1608
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E160C
  fcmp(c,0,c->f[1],c->f[0]); // 800E1610
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E1614
  if (!crb(c,2)) { goto L_800E1668; } // 800E1618
  c->r[4]=c->r[29]+0x00000018u; // 800E161C
  c->r[6]=R32(c->r[29]+0x00000018u); // 800E1620
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E1624
  c->r[3]=c->r[31]|c->r[31]; // 800E1628
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E162C
  c->r[4]=c->r[1]+0x0000002Cu; // 800E1630
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800E1634
  W32(c->r[1]+0x00000030u,c->r[5]); // 800E1638
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E163C
  c->lr=0x800E1644u; f_800E12E8(c); // 800E1640
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E1644
  c->r[3]=0u+0x80550000u; // 800E1648
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800E164C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E1650
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF9u; // 800E1654
  c->r[5]=0u+0x00000001u; // 800E1658
  W32(c->r[31]+0x00000074u,c->r[0]); // 800E165C
  c->lr=0x800E1664u; f_8018E2D4(c); // 800E1660
  goto L_800E17B8; // 800E1664
L_800E1668:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E1668
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E166C
  c->lr=0x800E1674u; f_802501B0(c); // 800E1670
  cmps(c,0,(int32_t)c->r[3],0); // 800E1674
  if (crb(c,2)) { goto L_800E16C8; } // 800E1678
  c->r[4]=c->r[29]+0x00000024u; // 800E167C
  c->r[6]=R32(c->r[29]+0x00000024u); // 800E1680
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E1684
  c->r[3]=c->r[31]|c->r[31]; // 800E1688
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E168C
  c->r[4]=c->r[1]+0x00000020u; // 800E1690
  W32(c->r[1]+0x00000020u,c->r[6]); // 800E1694
  W32(c->r[1]+0x00000024u,c->r[5]); // 800E1698
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E169C
  c->lr=0x800E16A4u; f_800E12E8(c); // 800E16A0
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E16A4
  c->r[3]=0u+0x80550000u; // 800E16A8
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800E16AC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E16B0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF9u; // 800E16B4
  c->r[5]=0u+0x00000001u; // 800E16B8
  W32(c->r[31]+0x00000074u,c->r[0]); // 800E16BC
  c->lr=0x800E16C4u; f_8018E2D4(c); // 800E16C0
  goto L_800E17B8; // 800E16C4
L_800E16C8:;
  c->r[3]=c->r[31]|c->r[31]; // 800E16C8
  c->lr=0x800E16D0u; f_801F56F4(c); // 800E16CC
L_800E16D0:;
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E16D0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800E16D4
  if (!crb(c,2)) { IRQCHK(c); goto L_800E15F0; } // 800E16D8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E16DC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E16E0
  c->lr=0x800E16E8u; f_802501B0(c); // 800E16E4
  cmps(c,0,(int32_t)c->r[3],0); // 800E16E8
  if (crb(c,2)) { goto L_800E173C; } // 800E16EC
  c->r[4]=c->r[29]+0x00000030u; // 800E16F0
  c->r[6]=R32(c->r[29]+0x00000030u); // 800E16F4
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E16F8
  c->r[3]=c->r[31]|c->r[31]; // 800E16FC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E1700
  c->r[4]=c->r[1]+0x00000014u; // 800E1704
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E1708
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E170C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E1710
  c->lr=0x800E1718u; f_800E12E8(c); // 800E1714
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E1718
  c->r[3]=0u+0x80550000u; // 800E171C
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800E1720
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E1724
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800E1728
  c->r[5]=0u+0x00000001u; // 800E172C
  W32(c->r[31]+0x00000074u,c->r[0]); // 800E1730
  c->lr=0x800E1738u; f_8018E2D4(c); // 800E1734
  goto L_800E17B8; // 800E1738
L_800E173C:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E173C
  c->r[4]=0u+0x803A0000u; // 800E1740
  c->r[4]=c->r[4]+0xFFFFE4D8u; // 800E1744
  c->r[5]=c->r[1]+0x00000038u; // 800E1748
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E174C
  c->r[4]=c->r[4]+0x0000000Du; // 800E1750
  c->r[6]=0u+0x00000001u; // 800E1754
  c->lr=0x800E175Cu; f_80257018(c); // 800E1758
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E175C
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1760
  fcmp(c,0,c->f[1],c->f[0]); // 800E1764
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E1768
  if (!crb(c,2)) { goto L_800E17B8; } // 800E176C
  c->r[4]=c->r[29]+0x0000003Cu; // 800E1770
  c->r[6]=R32(c->r[29]+0x0000003Cu); // 800E1774
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E1778
  c->r[3]=c->r[31]|c->r[31]; // 800E177C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E1780
  c->r[4]=c->r[1]+0x00000008u; // 800E1784
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E1788
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E178C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E1790
  c->lr=0x800E1798u; f_800E12E8(c); // 800E1794
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E1798
  c->r[3]=0u+0x80550000u; // 800E179C
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800E17A0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E17A4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800E17A8
  c->r[5]=0u+0x00000001u; // 800E17AC
  W32(c->r[31]+0x00000074u,c->r[0]); // 800E17B0
  c->lr=0x800E17B8u; f_8018E2D4(c); // 800E17B4
L_800E17B8:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800E17B8
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800E17BC
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800E17C0
  c->r[29]=R32(c->r[1]+0x000000A4u); // 800E17C4
  c->lr=c->r[0]; // 800E17C8
  c->r[1]=c->r[1]+0x000000B0u; // 800E17CC
  return; // 800E17D0
}

// fn_800E17D4
void f_800E17D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E17D4
  c->r[0]=c->lr; // 800E17D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E17DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E17E0
  c->r[31]=c->r[3]|c->r[3]; // 800E17E4
  c->r[0]=R32(c->r[3]+0x00000074u); // 800E17E8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800E17EC
  if (crb(c,2)) { goto L_800E183C; } // 800E17F0
  c->r[7]=0u+0x803D0000u; // 800E17F4
  {uint32_t ea=c->r[7]+0x00003328u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E17F8
  c->r[4]=c->r[1]+0x00000008u; // 800E17FC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E1800
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E1804
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E1808
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E180C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E1810
  c->lr=0x800E1818u; f_800E12E8(c); // 800E1814
  c->r[0]=R32(c->r[31]+0x00000074u); // 800E1818
  c->r[3]=0u+0x80550000u; // 800E181C
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800E1820
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E1824
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800E1828
  c->r[5]=0u+0x00000000u; // 800E182C
  c->r[0]=c->r[0]|0x00000002u; // 800E1830
  W32(c->r[31]+0x00000074u,c->r[0]); // 800E1834
  c->lr=0x800E183Cu; f_8018E2D4(c); // 800E1838
L_800E183C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E183C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E1840
  c->lr=c->r[0]; // 800E1844
  c->r[1]=c->r[1]+0x00000020u; // 800E1848
  return; // 800E184C
}

// fn_800E1850
void f_800E1850(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800E1850
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[1]);} // 800E1854
  c->r[0]=c->r[0]|0x00000003u; // 800E1858
  W32(c->r[3]+0x00000074u,c->r[0]); // 800E185C
  return; // 800E1860
}

// fn_800E1864
void f_800E1864(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800E1864
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[1]);} // 800E1868
  c->r[0]=c->r[0]|0x00000007u; // 800E186C
  W32(c->r[3]+0x00000074u,c->r[0]); // 800E1870
  return; // 800E1874
}

// fn_800E1878
void f_800E1878(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1878
  c->r[0]=c->lr; // 800E187C
  c->r[4]=0u+0x803A0000u; // 800E1880
  c->r[6]=0u+0x00000001u; // 800E1884
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E1888
  c->r[4]=c->r[4]+0xFFFFE4D8u; // 800E188C
  c->r[5]=c->r[1]+0x00000008u; // 800E1890
  c->r[3]=R32(c->r[3]+0x00000394u); // 800E1894
  c->r[4]=c->r[4]+0x0000000Du; // 800E1898
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E189C
  c->lr=0x800E18A4u; f_80257018(c); // 800E18A0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E18A4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E18A8
  c->lr=c->r[0]; // 800E18AC
  c->r[1]=c->r[1]+0x00000040u; // 800E18B0
  return; // 800E18B4
}

// fn_800E18B8
void f_800E18B8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000074u); // 800E18B8
  c->r[3]=rotl(c->r[0],31)&0x00000001u; // 800E18BC
  return; // 800E18C0
}

// fn_800E18C4
void f_800E18C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E18C4
  c->r[0]=c->lr; // 800E18C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E18CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E18D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E18D4
  c->r[30]=c->r[4]|c->r[4]; // 800E18D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E18DC
  c->r[29]=c->r[3]|c->r[3]; // 800E18E0
  c->r[3]=0u+0x00000450u; // 800E18E4
  c->lr=0x800E18ECu; f_8026A1A4(c); // 800E18E8
  cmps(c,0,(int32_t)c->r[3],0); // 800E18EC
  c->r[31]=c->r[3]|c->r[3]; // 800E18F0
  if (crb(c,2)) { goto L_800E18FC; } // 800E18F4
  c->lr=0x800E18FCu; f_800E1968(c); // 800E18F8
L_800E18FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800E18FC
  if (crb(c,2)) { goto L_800E1948; } // 800E1900
  c->r[0]=0u+0x00000003u; // 800E1904
  c->r[5]=0u+0x00000048u; // 800E1908
  W8(c->r[31]+0x0000006Cu,c->r[0]); // 800E190C
  c->r[0]=0u+0x00000000u; // 800E1910
  c->r[4]=c->r[29]|c->r[29]; // 800E1914
  c->r[3]=c->r[31]+0x0000002Cu; // 800E1918
  W8(c->r[31]+0x0000006Du,c->r[5]); // 800E191C
  W8(c->r[31]+0x0000006Eu,c->r[0]); // 800E1920
  c->lr=0x800E1928u; f_800361A0(c); // 800E1924
  c->r[4]=c->r[30]|c->r[30]; // 800E1928
  c->r[3]=c->r[31]+0x00000060u; // 800E192C
  c->lr=0x800E1934u; f_800361A0(c); // 800E1930
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E1934
  c->r[3]=c->r[31]|c->r[31]; // 800E1938
  c->r[12]=R32(c->r[12]+0x00000014u); // 800E193C
  c->ctr=c->r[12]; // 800E1940
  if (true) { c->lr=0x800E1948u; dispatch(c,c->ctr); } // 800E1944
L_800E1948:;
  c->r[3]=c->r[31]|c->r[31]; // 800E1948
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E194C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E1950
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E1954
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E1958
  c->lr=c->r[0]; // 800E195C
  c->r[1]=c->r[1]+0x00000020u; // 800E1960
  return; // 800E1964
}

// fn_800E1968
void f_800E1968(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1968
  c->r[0]=c->lr; // 800E196C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1970
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1974
  c->r[31]=c->r[3]|c->r[3]; // 800E1978
  c->lr=0x800E1980u; f_8026A014(c); // 800E197C
  c->r[4]=0u+0x803D0000u; // 800E1980
  c->r[3]=c->r[31]|c->r[31]; // 800E1984
  c->r[4]=c->r[4]+0x00003334u; // 800E1988
  W32(c->r[31]+0x000000B0u,c->r[4]); // 800E198C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1990
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1994
  c->lr=c->r[0]; // 800E1998
  c->r[1]=c->r[1]+0x00000010u; // 800E199C
  return; // 800E19A0
}

// fn_800E19A4
void f_800E19A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E19A4
  c->r[0]=c->lr; // 800E19A8
  cmps(c,0,(int32_t)c->r[3],0); // 800E19AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E19B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E19B4
  c->r[31]=c->r[4]|c->r[4]; // 800E19B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E19BC
  c->r[30]=c->r[3]|c->r[3]; // 800E19C0
  if (crb(c,2)) { goto L_800E19E0; } // 800E19C4
  c->r[4]=0u+0x00000000u; // 800E19C8
  c->lr=0x800E19D0u; f_8026A06C(c); // 800E19CC
  cmps(c,0,(int32_t)c->r[31],0); // 800E19D0
  if (!crb(c,1)) { goto L_800E19E0; } // 800E19D4
  c->r[3]=c->r[30]|c->r[30]; // 800E19D8
  c->lr=0x800E19E0u; f_8026A268(c); // 800E19DC
L_800E19E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800E19E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E19E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E19E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E19EC
  c->lr=c->r[0]; // 800E19F0
  c->r[1]=c->r[1]+0x00000010u; // 800E19F4
  return; // 800E19F8
}

// fn_800E19FC
void f_800E19FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E19FC
  c->r[0]=c->lr; // 800E1A00
  c->r[4]=0u+0x00000000u; // 800E1A04
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E1A08
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800E1A0C
  c->r[31]=c->r[3]|c->r[3]; // 800E1A10
  W32(c->r[1]+0x00000038u,c->r[30]); // 800E1A14
  W32(c->r[1]+0x00000034u,c->r[29]); // 800E1A18
  c->lr=0x800E1A20u; f_801F57D0(c); // 800E1A1C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E1A20
  c->r[3]=c->r[31]|c->r[31]; // 800E1A24
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E1A28
  c->ctr=c->r[12]; // 800E1A2C
  if (true) { c->lr=0x800E1A34u; dispatch(c,c->ctr); } // 800E1A30
  c->r[3]=c->r[31]|c->r[31]; // 800E1A34
  c->lr=0x800E1A3Cu; f_801F4B94(c); // 800E1A38
  c->r[3]=0u+0x00000003u; // 800E1A3C
  c->r[0]=0u+0x00000049u; // 800E1A40
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800E1A44
  c->r[3]=c->r[31]|c->r[31]; // 800E1A48
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E1A4C
  W8(c->r[31]+0x0000006Du,c->r[0]); // 800E1A50
  c->lr=0x800E1A58u; f_801F58BC(c); // 800E1A54
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E1A58
  c->r[29]=0u+0x00000001u; // 800E1A5C
  c->r[30]=0u+0x803A0000u; // 800E1A60
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800E1A64
  c->r[4]=c->r[30]+0xFFFFE4F0u; // 800E1A68
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E1A6C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E1A70
  c->lr=0x800E1A78u; f_80256EC4(c); // 800E1A74
  c->r[6]=R32(c->r[31]+0x00000394u); // 800E1A78
  c->r[5]=0u+0x805D0000u; // 800E1A7C
  c->r[4]=c->r[31]+0x0000002Cu; // 800E1A80
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800E1A84
  c->r[3]=c->r[5]+0x000078B0u; // 800E1A88
  c->lr=0x800E1A90u; f_802351CC(c); // 800E1A8C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E1A90
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800E1A94
  c->r[3]=c->r[31]|c->r[31]; // 800E1A98
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800E1A9C
  c->lr=0x800E1AA4u; f_801F56F4(c); // 800E1AA0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E1AA4
  c->r[3]=c->r[31]|c->r[31]; // 800E1AA8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E1AAC
  c->ctr=c->r[12]; // 800E1AB0
  if (true) { c->lr=0x800E1AB8u; dispatch(c,c->ctr); } // 800E1AB4
  c->r[4]=c->r[30]+0xFFFFE4F0u; // 800E1AB8
  c->r[30]=0u+0x80550000u; // 800E1ABC
  c->r[3]=c->r[30]+0xFFFFC848u; // 800E1AC0
  c->r[5]=0u+0x00000000u; // 800E1AC4
  c->r[4]=c->r[4]+0x00000009u; // 800E1AC8
  c->r[6]=0u+0x00000000u; // 800E1ACC
  c->lr=0x800E1AD4u; f_8018D3E4(c); // 800E1AD0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800E1AD4
  W8(c->r[31]+0x00000074u,c->r[3]); // 800E1AD8
  cmpu(c,0,c->r[0],0x000000FFu); // 800E1ADC
  if (crb(c,2)) { goto L_800E1B38; } // 800E1AE0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E1AE4
  c->r[3]=c->r[1]+0x00000020u; // 800E1AE8
  c->r[4]=c->r[4]+0x0000005Cu; // 800E1AEC
  c->lr=0x800E1AF4u; f_800361A0(c); // 800E1AF0
  c->r[4]=R32(c->r[31]+0x00000060u); // 800E1AF4
  c->r[3]=c->r[30]+0xFFFFC848u; // 800E1AF8
  c->r[0]=R32(c->r[31]+0x00000064u); // 800E1AFC
  c->r[5]=c->r[1]+0x00000014u; // 800E1B00
  c->r[7]=R32(c->r[1]+0x00000020u); // 800E1B04
  c->r[6]=c->r[1]+0x00000008u; // 800E1B08
  W32(c->r[1]+0x00000008u,c->r[4]); // 800E1B0C
  c->r[4]=R32(c->r[1]+0x00000024u); // 800E1B10
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E1B14
  c->r[0]=R32(c->r[1]+0x00000028u); // 800E1B18
  c->r[8]=R32(c->r[31]+0x00000068u); // 800E1B1C
  W32(c->r[1]+0x00000010u,c->r[8]); // 800E1B20
  W32(c->r[1]+0x00000014u,c->r[7]); // 800E1B24
  W32(c->r[1]+0x00000018u,c->r[4]); // 800E1B28
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E1B2C
  c->r[4]=R8(c->r[31]+0x00000074u); // 800E1B30
  c->lr=0x800E1B38u; f_8018DBD0(c); // 800E1B34
L_800E1B38:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E1B38
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800E1B3C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800E1B40
  c->r[29]=R32(c->r[1]+0x00000034u); // 800E1B44
  c->lr=c->r[0]; // 800E1B48
  c->r[1]=c->r[1]+0x00000040u; // 800E1B4C
  return; // 800E1B50
}

// fn_800E1B54
void f_800E1B54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1B54
  c->r[0]=c->lr; // 800E1B58
  c->r[4]=c->r[3]|c->r[3]; // 800E1B5C
  c->r[3]=0u+0x00000379u; // 800E1B60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1B64
  c->r[5]=0u+0x00000000u; // 800E1B68
  c->r[4]=R32(c->r[4]+0x00000394u); // 800E1B6C
  c->r[4]=c->r[4]+0x0000010Cu; // 800E1B70
  c->lr=0x800E1B78u; f_8024EE50(c); // 800E1B74
  c->r[0]=cntlz(c->r[3]); // 800E1B78
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E1B7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1B80
  c->lr=c->r[0]; // 800E1B84
  c->r[1]=c->r[1]+0x00000010u; // 800E1B88
  return; // 800E1B8C
}

// fn_800E1B90
void f_800E1B90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1B90
  c->r[0]=c->lr; // 800E1B94
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E1B98
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800E1B9C
  c->r[31]=c->r[3]|c->r[3]; // 800E1BA0
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800E1BA4
  c->r[12]=R32(c->r[12]+0x00000068u); // 800E1BA8
  c->ctr=c->r[12]; // 800E1BAC
  if (true) { c->lr=0x800E1BB4u; dispatch(c,c->ctr); } // 800E1BB0
  c->r[3]=c->r[31]|c->r[31]; // 800E1BB4
  c->lr=0x800E1BBCu; f_801F4C0C(c); // 800E1BB8
  c->r[3]=c->r[31]|c->r[31]; // 800E1BBC
  c->lr=0x800E1BC4u; f_801F56F4(c); // 800E1BC0
  c->r[0]=R8(c->r[31]+0x00000074u); // 800E1BC4
  cmpu(c,0,c->r[0],0x000000FFu); // 800E1BC8
  if (crb(c,2)) { goto L_800E1C28; } // 800E1BCC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E1BD0
  c->r[3]=c->r[1]+0x00000020u; // 800E1BD4
  c->r[4]=c->r[4]+0x0000005Cu; // 800E1BD8
  c->lr=0x800E1BE0u; f_800361A0(c); // 800E1BDC
  c->r[4]=R32(c->r[31]+0x00000060u); // 800E1BE0
  c->r[3]=0u+0x80550000u; // 800E1BE4
  c->r[0]=R32(c->r[31]+0x00000064u); // 800E1BE8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E1BEC
  c->r[7]=R32(c->r[1]+0x00000020u); // 800E1BF0
  c->r[5]=c->r[1]+0x00000014u; // 800E1BF4
  W32(c->r[1]+0x00000008u,c->r[4]); // 800E1BF8
  c->r[6]=c->r[1]+0x00000008u; // 800E1BFC
  c->r[4]=R32(c->r[1]+0x00000024u); // 800E1C00
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E1C04
  c->r[0]=R32(c->r[1]+0x00000028u); // 800E1C08
  c->r[8]=R32(c->r[31]+0x00000068u); // 800E1C0C
  W32(c->r[1]+0x00000010u,c->r[8]); // 800E1C10
  W32(c->r[1]+0x00000014u,c->r[7]); // 800E1C14
  W32(c->r[1]+0x00000018u,c->r[4]); // 800E1C18
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E1C1C
  c->r[4]=R8(c->r[31]+0x00000074u); // 800E1C20
  c->lr=0x800E1C28u; f_8018DBD0(c); // 800E1C24
L_800E1C28:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E1C28
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800E1C2C
  c->lr=c->r[0]; // 800E1C30
  c->r[1]=c->r[1]+0x00000040u; // 800E1C34
  return; // 800E1C38
}

// fn_800E1C3C
void f_800E1C3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1C3C
  c->r[0]=c->lr; // 800E1C40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1C44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1C48
  c->r[31]=c->r[3]|c->r[3]; // 800E1C4C
  c->r[4]=R8(c->r[3]+0x00000074u); // 800E1C50
  cmpu(c,0,c->r[4],0x000000FFu); // 800E1C54
  if (crb(c,2)) { goto L_800E1C68; } // 800E1C58
  c->r[3]=0u+0x80550000u; // 800E1C5C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E1C60
  c->lr=0x800E1C68u; f_8018D694(c); // 800E1C64
L_800E1C68:;
  c->r[3]=c->r[31]|c->r[31]; // 800E1C68
  c->lr=0x800E1C70u; f_801F4C78(c); // 800E1C6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1C70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1C74
  c->lr=c->r[0]; // 800E1C78
  c->r[1]=c->r[1]+0x00000010u; // 800E1C7C
  return; // 800E1C80
}

// fn_800E1C84
void f_800E1C84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1C84
  c->r[0]=c->lr; // 800E1C88
  cmps(c,0,(int32_t)c->r[3],0); // 800E1C8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1C90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1C94
  c->r[31]=c->r[4]|c->r[4]; // 800E1C98
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E1C9C
  c->r[30]=c->r[3]|c->r[3]; // 800E1CA0
  if (crb(c,2)) { goto L_800E1CC0; } // 800E1CA4
  c->r[4]=0u+0x00000000u; // 800E1CA8
  c->lr=0x800E1CB0u; f_8026A06C(c); // 800E1CAC
  cmps(c,0,(int32_t)c->r[31],0); // 800E1CB0
  if (!crb(c,1)) { goto L_800E1CC0; } // 800E1CB4
  c->r[3]=c->r[30]|c->r[30]; // 800E1CB8
  c->lr=0x800E1CC0u; f_8026A268(c); // 800E1CBC
L_800E1CC0:;
  c->r[3]=c->r[30]|c->r[30]; // 800E1CC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1CC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E1CC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1CCC
  c->lr=c->r[0]; // 800E1CD0
  c->r[1]=c->r[1]+0x00000010u; // 800E1CD4
  return; // 800E1CD8
}

// fn_800E1CDC
void f_800E1CDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1CDC
  c->r[0]=c->lr; // 800E1CE0
  c->r[4]=0u+0x00000000u; // 800E1CE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E1CE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E1CEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E1CF0
  c->r[30]=c->r[3]|c->r[3]; // 800E1CF4
  c->lr=0x800E1CFCu; f_801F57D0(c); // 800E1CF8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E1CFC
  c->r[3]=c->r[30]|c->r[30]; // 800E1D00
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E1D04
  c->ctr=c->r[12]; // 800E1D08
  if (true) { c->lr=0x800E1D10u; dispatch(c,c->ctr); } // 800E1D0C
  c->r[3]=c->r[30]|c->r[30]; // 800E1D10
  c->lr=0x800E1D18u; f_801F4B94(c); // 800E1D14
  c->r[3]=0u+0x00000003u; // 800E1D18
  c->r[0]=0u+0x0000004Au; // 800E1D1C
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800E1D20
  c->r[3]=c->r[30]|c->r[30]; // 800E1D24
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E1D28
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800E1D2C
  c->lr=0x800E1D34u; f_801F58BC(c); // 800E1D30
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E1D34
  c->r[31]=0u+0x00000001u; // 800E1D38
  c->r[4]=0u+0x803A0000u; // 800E1D3C
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800E1D40
  c->r[4]=c->r[4]+0xFFFFE500u; // 800E1D44
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E1D48
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E1D4C
  c->lr=0x800E1D54u; f_80256EC4(c); // 800E1D50
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E1D54
  c->r[4]=0u+0x00000000u; // 800E1D58
  {uint32_t ea=c->r[2]+0xFFFFA510u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1D5C
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800E1D60
  c->f[2]=c->f[1]; // 800E1D64
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E1D68
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800E1D6C
  c->r[5]=R32(c->r[5]+0x00000034u); // 800E1D70
  c->lr=0x800E1D78u; f_8024FEAC(c); // 800E1D74
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E1D78
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E1D7C
  c->lr=0x800E1D84u; f_802501B0(c); // 800E1D80
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E1D84
  c->r[0]=0u+0x00000000u; // 800E1D88
  {uint32_t ea=c->r[2]+0xFFFFA514u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1D8C
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800E1D90
  c->r[3]=c->r[30]|c->r[30]; // 800E1D94
  W16(c->r[30]+0x00000074u,c->r[0]); // 800E1D98
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[0]);} // 800E1D9C
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800E1DA0
  c->lr=0x800E1DA8u; f_801F56F4(c); // 800E1DA4
  c->r[7]=0u+0x803D0000u; // 800E1DA8
  {uint32_t ea=c->r[7]+0x000034D0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E1DAC
  c->r[3]=c->r[30]|c->r[30]; // 800E1DB0
  c->r[4]=c->r[1]+0x00000008u; // 800E1DB4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E1DB8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E1DBC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E1DC0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E1DC4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E1DC8
  c->lr=0x800E1DD0u; f_800E1DE8(c); // 800E1DCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E1DD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E1DD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E1DD8
  c->lr=c->r[0]; // 800E1DDC
  c->r[1]=c->r[1]+0x00000020u; // 800E1DE0
  return; // 800E1DE4
}

// fn_800E1DE8
void f_800E1DE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1DE8
  c->r[0]=c->lr; // 800E1DEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1DF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1DF4
  c->r[31]=c->r[4]|c->r[4]; // 800E1DF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E1DFC
  c->r[30]=c->r[3]|c->r[3]; // 800E1E00
  c->r[3]=c->r[31]|c->r[31]; // 800E1E04
  c->lr=0x800E1E0Cu; f_802B9FDC(c); // 800E1E08
  cmps(c,0,(int32_t)c->r[3],0); // 800E1E0C
  if (crb(c,2)) { goto L_800E1E2C; } // 800E1E10
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E1E14
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E1E18
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E1E1C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E1E20
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E1E24
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E1E28
L_800E1E2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1E2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1E30
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E1E34
  c->lr=c->r[0]; // 800E1E38
  c->r[1]=c->r[1]+0x00000010u; // 800E1E3C
  return; // 800E1E40
}

// fn_800E1E44
void f_800E1E44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1E44
  c->r[0]=c->lr; // 800E1E48
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E1E4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E1E50
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E1E54
  c->r[30]=c->r[3]|c->r[3]; // 800E1E58
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800E1E5C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800E1E60
  c->ctr=c->r[12]; // 800E1E64
  if (true) { c->lr=0x800E1E6Cu; dispatch(c,c->ctr); } // 800E1E68
  c->r[3]=c->r[30]|c->r[30]; // 800E1E6C
  c->lr=0x800E1E74u; f_801F4C0C(c); // 800E1E70
  c->r[3]=c->r[30]+0x00000210u; // 800E1E74
  c->lr=0x800E1E7Cu; f_80221698(c); // 800E1E78
  c->r[3]=c->r[30]|c->r[30]; // 800E1E7C
  c->lr=0x800E1E84u; f_800E20D4(c); // 800E1E80
  c->r[0]=R16(c->r[30]+0x00000074u); // 800E1E84
  cmps(c,0,(int32_t)c->r[0],0); // 800E1E88
  if (crb(c,2)) { goto L_800E1F94; } // 800E1E8C
  {uint32_t ea=c->r[30]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E1E90
  {uint32_t ea=c->r[2]+0xFFFFA518u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1E94
  {uint32_t ea=c->r[2]+0xFFFFA510u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1E98
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800E1E9C
  fcmp(c,0,c->f[1],c->f[0]); // 800E1EA0
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[1]);} // 800E1EA4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E1EA8
  if (!crb(c,2)) { goto L_800E1ED4; } // 800E1EAC
  cmps(c,0,(int32_t)c->r[30],0); // 800E1EB0
  if (crb(c,2)) { goto L_800E1F9C; } // 800E1EB4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E1EB8
  c->r[3]=c->r[30]|c->r[30]; // 800E1EBC
  c->r[4]=0u+0x00000001u; // 800E1EC0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800E1EC4
  c->ctr=c->r[12]; // 800E1EC8
  if (true) { c->lr=0x800E1ED0u; dispatch(c,c->ctr); } // 800E1ECC
  goto L_800E1F9C; // 800E1ED0
L_800E1ED4:;
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800E1ED4
  cmps(c,0,(int32_t)c->r[0],1); // 800E1ED8
  if (crb(c,2)) { goto L_800E1F2C; } // 800E1EDC
  if (!crb(c,0)) { goto L_800E1F94; } // 800E1EE0
  cmps(c,0,(int32_t)c->r[0],0); // 800E1EE4
  if (!crb(c,0)) { goto L_800E1EF0; } // 800E1EE8
  goto L_800E1F94; // 800E1EEC
L_800E1EF0:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E1EF0
  c->r[31]=0u+0x803A0000u; // 800E1EF4
  c->r[31]=c->r[31]+0xFFFFE500u; // 800E1EF8
  c->r[5]=c->r[1]+0x00000008u; // 800E1EFC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E1F00
  c->r[4]=c->r[31]+0x00000009u; // 800E1F04
  c->lr=0x800E1F0Cu; f_80258A38(c); // 800E1F08
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1F0C
  c->r[4]=c->r[31]+0x00000009u; // 800E1F10
  c->r[5]=c->r[1]+0x00000008u; // 800E1F14
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800E1F18
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E1F1C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E1F20
  c->lr=0x800E1F28u; f_8025892C(c); // 800E1F24
  goto L_800E1F94; // 800E1F28
L_800E1F2C:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E1F2C
  c->r[31]=0u+0x803A0000u; // 800E1F30
  c->r[31]=c->r[31]+0xFFFFE500u; // 800E1F34
  c->r[5]=c->r[1]+0x00000008u; // 800E1F38
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E1F3C
  c->r[4]=c->r[31]+0x00000023u; // 800E1F40
  c->lr=0x800E1F48u; f_80258A38(c); // 800E1F44
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1F48
  c->r[4]=c->r[31]+0x00000023u; // 800E1F4C
  c->r[5]=c->r[1]+0x00000008u; // 800E1F50
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800E1F54
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E1F58
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E1F5C
  c->lr=0x800E1F64u; f_8025892C(c); // 800E1F60
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E1F64
  c->r[4]=c->r[31]+0x00000053u; // 800E1F68
  c->r[5]=c->r[1]+0x00000008u; // 800E1F6C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E1F70
  c->lr=0x800E1F78u; f_80258A38(c); // 800E1F74
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1F78
  c->r[4]=c->r[31]+0x00000053u; // 800E1F7C
  c->r[5]=c->r[1]+0x00000008u; // 800E1F80
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800E1F84
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E1F88
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E1F8C
  c->lr=0x800E1F94u; f_8025892C(c); // 800E1F90
L_800E1F94:;
  c->r[3]=c->r[30]|c->r[30]; // 800E1F94
  c->lr=0x800E1F9Cu; f_801F56F4(c); // 800E1F98
L_800E1F9C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E1F9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E1FA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E1FA4
  c->lr=c->r[0]; // 800E1FA8
  c->r[1]=c->r[1]+0x00000020u; // 800E1FAC
  return; // 800E1FB0
}

// fn_800E1FB4
void f_800E1FB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1FB4
  c->r[0]=c->lr; // 800E1FB8
  cmps(c,0,(int32_t)c->r[3],0); // 800E1FBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1FC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1FC4
  c->r[31]=c->r[4]|c->r[4]; // 800E1FC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E1FCC
  c->r[30]=c->r[3]|c->r[3]; // 800E1FD0
  if (crb(c,2)) { goto L_800E1FF0; } // 800E1FD4
  c->r[4]=0u+0x00000000u; // 800E1FD8
  c->lr=0x800E1FE0u; f_8026A06C(c); // 800E1FDC
  cmps(c,0,(int32_t)c->r[31],0); // 800E1FE0
  if (!crb(c,1)) { goto L_800E1FF0; } // 800E1FE4
  c->r[3]=c->r[30]|c->r[30]; // 800E1FE8
  c->lr=0x800E1FF0u; f_8026A268(c); // 800E1FEC
L_800E1FF0:;
  c->r[3]=c->r[30]|c->r[30]; // 800E1FF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1FF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E1FF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1FFC
  c->lr=c->r[0]; // 800E2000
  c->r[1]=c->r[1]+0x00000010u; // 800E2004
  return; // 800E2008
}

// fn_800E200C
void f_800E200C(Ctx* __restrict c) {
  f_801F50B4(c); return; // 800E200C
}

// fn_800E2010
void f_800E2010(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800E2010
}

// fn_800E2014
void f_800E2014(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800E2014
}

// fn_800E2018
void f_800E2018(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2018
  c->r[0]=c->lr; // 800E201C
  c->r[5]=0u+0x00000000u; // 800E2020
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2024
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E2028
  c->r[6]=R8(c->r[3]+0x0000006Eu); // 800E202C
  c->r[4]=c->r[4]+0x0000010Cu; // 800E2030
  c->r[3]=c->r[6]+0x0000028Au; // 800E2034
  c->lr=0x800E203Cu; f_8024EE50(c); // 800E2038
  c->r[0]=cntlz(c->r[3]); // 800E203C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E2040
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2044
  c->lr=c->r[0]; // 800E2048
  c->r[1]=c->r[1]+0x00000010u; // 800E204C
  return; // 800E2050
}

// fn_800E2054
void f_800E2054(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2054
  c->r[0]=c->lr; // 800E2058
  c->r[7]=0u+0x803D0000u; // 800E205C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2060
  c->r[4]=c->r[1]+0x00000008u; // 800E2064
  {uint32_t ea=c->r[7]+0x000034DCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E2068
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E206C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E2070
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E2074
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E2078
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E207C
  c->lr=0x800E2084u; f_800E1DE8(c); // 800E2080
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2084
  c->lr=c->r[0]; // 800E2088
  c->r[1]=c->r[1]+0x00000020u; // 800E208C
  return; // 800E2090
}

// fn_800E2094
void f_800E2094(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2094
  c->r[0]=c->lr; // 800E2098
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E209C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E20A0
  c->r[31]=c->r[3]|c->r[3]; // 800E20A4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E20A8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E20AC
  c->lr=0x800E20B4u; f_802501B0(c); // 800E20B0
  c->r[3]=c->r[31]|c->r[31]; // 800E20B4
  c->r[4]=0u+0x00000000u; // 800E20B8
  c->lr=0x800E20C0u; f_801F5244(c); // 800E20BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E20C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E20C4
  c->lr=c->r[0]; // 800E20C8
  c->r[1]=c->r[1]+0x00000010u; // 800E20CC
  return; // 800E20D0
}

// fn_800E20D4
void f_800E20D4(Ctx* __restrict c) {
  return; // 800E20D4
}

// fn_800E20D8
void f_800E20D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E20D8
  c->r[0]=c->lr; // 800E20DC
  c->r[4]=0u+0x00000000u; // 800E20E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E20E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E20E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E20EC
  c->r[30]=c->r[3]|c->r[3]; // 800E20F0
  c->lr=0x800E20F8u; f_801F57D0(c); // 800E20F4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E20F8
  c->r[3]=c->r[30]|c->r[30]; // 800E20FC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E2100
  c->ctr=c->r[12]; // 800E2104
  if (true) { c->lr=0x800E210Cu; dispatch(c,c->ctr); } // 800E2108
  c->r[3]=c->r[30]|c->r[30]; // 800E210C
  c->lr=0x800E2114u; f_801F4B94(c); // 800E2110
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800E2114
  c->r[4]=0u+0x00000003u; // 800E2118
  c->r[3]=0u+0x0000004Bu; // 800E211C
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800E2120
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800E2124
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E2128
  W8(c->r[30]+0x0000006Du,c->r[3]); // 800E212C
  c->r[3]=c->r[30]|c->r[30]; // 800E2130
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800E2134
  c->lr=0x800E213Cu; f_801F58BC(c); // 800E2138
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E213C
  c->r[31]=0u+0x00000001u; // 800E2140
  c->r[4]=0u+0x803A0000u; // 800E2144
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800E2148
  c->r[4]=c->r[4]+0xFFFFE590u; // 800E214C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E2150
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E2154
  c->lr=0x800E215Cu; f_80256EC4(c); // 800E2158
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E215C
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800E2160
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E2164
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E2168
  c->lr=0x800E2170u; f_802501B0(c); // 800E216C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E2170
  c->r[0]=0u+0x00000000u; // 800E2174
  c->r[3]=c->r[30]|c->r[30]; // 800E2178
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800E217C
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800E2180
  c->lr=0x800E2188u; f_801F56F4(c); // 800E2184
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E2188
  c->r[3]=c->r[30]|c->r[30]; // 800E218C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E2190
  c->ctr=c->r[12]; // 800E2194
  if (true) { c->lr=0x800E219Cu; dispatch(c,c->ctr); } // 800E2198
  c->r[3]=c->r[30]|c->r[30]; // 800E219C
  c->lr=0x800E21A4u; f_800E2554(c); // 800E21A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E21A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E21A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E21AC
  c->lr=c->r[0]; // 800E21B0
  c->r[1]=c->r[1]+0x00000010u; // 800E21B4
  return; // 800E21B8
}

// fn_800E21BC
void f_800E21BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E21BC
  c->r[0]=c->lr; // 800E21C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E21C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E21C8
  c->r[31]=c->r[3]|c->r[3]; // 800E21CC
  c->lr=0x800E21D4u; f_800E263C(c); // 800E21D0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E21D4
  c->r[3]=c->r[31]|c->r[31]; // 800E21D8
  c->r[12]=R32(c->r[12]+0x00000068u); // 800E21DC
  c->ctr=c->r[12]; // 800E21E0
  if (true) { c->lr=0x800E21E8u; dispatch(c,c->ctr); } // 800E21E4
  c->r[3]=c->r[31]|c->r[31]; // 800E21E8
  c->lr=0x800E21F0u; f_801F4C0C(c); // 800E21EC
  c->r[3]=c->r[31]|c->r[31]; // 800E21F0
  c->lr=0x800E21F8u; f_800E2554(c); // 800E21F4
  c->r[3]=c->r[31]|c->r[31]; // 800E21F8
  c->lr=0x800E2200u; f_801F56F4(c); // 800E21FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2204
  c->lr=c->r[0]; // 800E2208
  c->r[1]=c->r[1]+0x00000010u; // 800E220C
  return; // 800E2210
}

// fn_800E2214
void f_800E2214(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800E2214
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E2218
  f_802501B0(c); return; // 800E221C
}

// fn_800E2220
void f_800E2220(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2220
  c->r[0]=c->lr; // 800E2224
  c->r[7]=0u+0x803A0000u; // 800E2228
  W32(c->r[1]+0x00000074u,c->r[0]); // 800E222C
  c->r[0]=0u+0x00000001u; // 800E2230
  c->r[4]=c->r[1]+0x00000020u; // 800E2234
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800E2238
  c->r[31]=c->r[3]|c->r[3]; // 800E223C
  W8(c->r[3]+0x0000006Fu,c->r[0]); // 800E2240
  c->r[3]=c->r[3]+0x00000044u; // 800E2244
  {uint32_t ea=c->r[7]+0xFFFFE578u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E2248
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E224C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E2250
  W32(c->r[1]+0x00000020u,c->r[6]); // 800E2254
  W32(c->r[1]+0x00000024u,c->r[5]); // 800E2258
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E225C
  c->lr=0x800E2264u; f_800361A0(c); // 800E2260
  c->r[7]=0u+0x803A0000u; // 800E2264
  {uint32_t ea=c->r[7]+0xFFFFE584u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E2268
  c->r[3]=c->r[31]+0x00000050u; // 800E226C
  c->r[4]=c->r[1]+0x00000014u; // 800E2270
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E2274
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E2278
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E227C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E2280
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E2284
  c->lr=0x800E228Cu; f_800361A0(c); // 800E2288
  {uint32_t ea=c->r[2]+0xFFFFA528u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E228C
  c->r[3]=c->r[1]+0x00000030u; // 800E2290
  c->r[4]=0u+0x00000059u; // 800E2294
  c->lr=0x800E229Cu; f_80295FBC(c); // 800E2298
  c->r[4]=c->r[31]+0x00000044u; // 800E229C
  c->r[3]=c->r[1]+0x00000030u; // 800E22A0
  c->r[5]=c->r[4]|c->r[4]; // 800E22A4
  c->lr=0x800E22ACu; f_80296750(c); // 800E22A8
  c->r[3]=c->r[31]|c->r[31]; // 800E22AC
  c->lr=0x800E22B4u; f_80178FD0(c); // 800E22B0
  c->r[7]=0u+0x803D0000u; // 800E22B4
  {uint32_t ea=c->r[7]+0x00003580u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E22B8
  c->r[3]=c->r[31]|c->r[31]; // 800E22BC
  c->r[4]=c->r[1]+0x00000008u; // 800E22C0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E22C4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E22C8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E22CC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E22D0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E22D4
  c->lr=0x800E22DCu; f_800E22FC(c); // 800E22D8
  {uint32_t ea=c->r[2]+0xFFFFA52Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E22DC
  c->r[3]=c->r[31]+0x0000000Cu; // 800E22E0
  c->lr=0x800E22E8u; f_80037668(c); // 800E22E4
  c->r[0]=R32(c->r[1]+0x00000074u); // 800E22E8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800E22EC
  c->lr=c->r[0]; // 800E22F0
  c->r[1]=c->r[1]+0x00000070u; // 800E22F4
  return; // 800E22F8
}

// fn_800E22FC
void f_800E22FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E22FC
  c->r[0]=c->lr; // 800E2300
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2304
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2308
  c->r[31]=c->r[4]|c->r[4]; // 800E230C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E2310
  c->r[30]=c->r[3]|c->r[3]; // 800E2314
  c->r[3]=c->r[31]|c->r[31]; // 800E2318
  c->lr=0x800E2320u; f_802B9FDC(c); // 800E231C
  cmps(c,0,(int32_t)c->r[3],0); // 800E2320
  if (crb(c,2)) { goto L_800E2340; } // 800E2324
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E2328
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E232C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E2330
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E2334
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E2338
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E233C
L_800E2340:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2340
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2344
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E2348
  c->lr=c->r[0]; // 800E234C
  c->r[1]=c->r[1]+0x00000010u; // 800E2350
  return; // 800E2354
}

// fn_800E2358
void f_800E2358(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2358
  c->r[0]=c->lr; // 800E235C
  c->r[4]=0u+0x00000000u; // 800E2360
  W32(c->r[1]+0x00000084u,c->r[0]); // 800E2364
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800E2368
  c->r[31]=c->r[3]|c->r[3]; // 800E236C
  c->r[3]=c->r[3]+0x0000000Cu; // 800E2370
  c->lr=0x800E2378u; f_800366DC(c); // 800E2374
  c->r[3]=c->r[31]+0x0000000Cu; // 800E2378
  c->r[4]=0u+0x00000258u; // 800E237C
  c->lr=0x800E2384u; f_8004E0A4(c); // 800E2380
  cmps(c,0,(int32_t)c->r[3],0); // 800E2384
  if (crb(c,2)) { goto L_800E23E0; } // 800E2388
  c->r[3]=c->r[1]+0x00000048u; // 800E238C
  c->r[4]=c->r[31]+0x00000060u; // 800E2390
  c->r[5]=0u+0x00000000u; // 800E2394
  c->lr=0x800E239Cu; f_802511D0(c); // 800E2398
  {uint32_t ea=c->r[2]+0xFFFFA530u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E239C
  c->r[3]=c->r[1]+0x00000018u; // 800E23A0
  c->r[4]=0u+0x00000058u; // 800E23A4
  c->lr=0x800E23ACu; f_80295FBC(c); // 800E23A8
  c->r[4]=c->r[1]+0x00000048u; // 800E23AC
  c->r[3]=c->r[1]+0x00000018u; // 800E23B0
  c->r[5]=c->r[4]|c->r[4]; // 800E23B4
  c->lr=0x800E23BCu; f_80295B48(c); // 800E23B8
  c->r[3]=c->r[1]+0x00000008u; // 800E23BC
  c->r[4]=c->r[31]+0x00000060u; // 800E23C0
  c->r[5]=c->r[3]|c->r[3]; // 800E23C4
  c->r[6]=c->r[1]+0x00000048u; // 800E23C8
  c->r[7]=0u+0x00000000u; // 800E23CC
  c->lr=0x800E23D4u; f_8002BE64(c); // 800E23D0
  c->r[3]=c->r[31]|c->r[31]; // 800E23D4
  c->lr=0x800E23DCu; f_80178FD0(c); // 800E23D8
  goto L_800E23F4; // 800E23DC
L_800E23E0:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E23E0
  c->r[3]=c->r[31]|c->r[31]; // 800E23E4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E23E8
  c->ctr=c->r[12]; // 800E23EC
  if (true) { c->lr=0x800E23F4u; dispatch(c,c->ctr); } // 800E23F0
L_800E23F4:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800E23F4
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800E23F8
  c->lr=c->r[0]; // 800E23FC
  c->r[1]=c->r[1]+0x00000080u; // 800E2400
  return; // 800E2404
}

// fn_800E2408
void f_800E2408(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2408
  c->r[0]=c->lr; // 800E240C
  {uint32_t ea=c->r[2]+0xFFFFA52Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2410
  c->r[4]=0u+0x00000005u; // 800E2414
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2418
  c->r[5]=0u+0x00000001u; // 800E241C
  c->f[2]=c->f[1]; // 800E2420
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E2424
  c->r[31]=c->r[3]|c->r[3]; // 800E2428
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800E242C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E2430
  c->ctr=c->r[12]; // 800E2434
  if (true) { c->lr=0x800E243Cu; dispatch(c,c->ctr); } // 800E2438
  c->r[7]=0u+0x803D0000u; // 800E243C
  {uint32_t ea=c->r[7]+0x0000358Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E2440
  c->r[3]=c->r[31]|c->r[31]; // 800E2444
  c->r[4]=c->r[1]+0x00000008u; // 800E2448
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E244C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E2450
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E2454
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E2458
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E245C
  c->lr=0x800E2464u; f_800E22FC(c); // 800E2460
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E2464
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E2468
  c->lr=0x800E2470u; f_802501B0(c); // 800E246C
  c->r[3]=c->r[31]|c->r[31]; // 800E2470
  c->r[4]=0u+0x00000000u; // 800E2474
  c->lr=0x800E247Cu; f_801F5244(c); // 800E2478
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E247C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E2480
  c->lr=c->r[0]; // 800E2484
  c->r[1]=c->r[1]+0x00000020u; // 800E2488
  return; // 800E248C
}

// fn_800E2490
void f_800E2490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2490
  c->r[0]=c->lr; // 800E2494
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2498
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E249C
  c->r[31]=c->r[3]|c->r[3]; // 800E24A0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E24A4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E24A8
  c->lr=0x800E24B0u; f_802501B0(c); // 800E24AC
  c->r[3]=c->r[31]|c->r[31]; // 800E24B0
  c->r[4]=0u+0x00000000u; // 800E24B4
  c->lr=0x800E24BCu; f_801F5244(c); // 800E24B8
  {uint32_t ea=c->r[2]+0xFFFFA52Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E24BC
  c->r[3]=0u+0x80550000u; // 800E24C0
  {uint32_t ea=c->r[2]+0xFFFFA534u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E24C4
  c->r[3]=c->r[3]+0x00003D60u; // 800E24C8
  c->f[3]=c->f[1]; // 800E24CC
  c->r[4]=c->r[31]+0x0000002Cu; // 800E24D0
  c->r[5]=c->r[1]+0x00000008u; // 800E24D4
  c->r[6]=0u+0x00000000u; // 800E24D8
  c->r[7]=0u+0x00000000u; // 800E24DC
  c->lr=0x800E24E4u; f_801D5488(c); // 800E24E0
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E24E4
  {uint32_t ea=c->r[2]+0xFFFFA538u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E24E8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E24EC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800E24F0
  fcmp(c,0,c->f[1],c->f[0]); // 800E24F4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E24F8
  if (!crb(c,2)) { goto L_800E2540; } // 800E24FC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800E2500
  c->r[3]=c->r[31]|c->r[31]; // 800E2504
  {uint32_t ea=c->r[2]+0xFFFFA53Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2508
  c->r[4]=0u+0x00000006u; // 800E250C
  {uint32_t ea=c->r[2]+0xFFFFA52Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E2510
  c->r[5]=0u+0x00000001u; // 800E2514
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800E2518
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E251C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E2520
  c->ctr=c->r[12]; // 800E2524
  if (true) { c->lr=0x800E252Cu; dispatch(c,c->ctr); } // 800E2528
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E252C
  c->r[3]=c->r[31]|c->r[31]; // 800E2530
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E2534
  c->ctr=c->r[12]; // 800E2538
  if (true) { c->lr=0x800E2540u; dispatch(c,c->ctr); } // 800E253C
L_800E2540:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2540
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E2544
  c->lr=c->r[0]; // 800E2548
  c->r[1]=c->r[1]+0x00000020u; // 800E254C
  return; // 800E2550
}

// fn_800E2554
void f_800E2554(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2554
  c->r[0]=c->lr; // 800E2558
  W32(c->r[1]+0x00000084u,c->r[0]); // 800E255C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800E2560
  W32(c->r[1]+0x00000078u,c->r[30]); // 800E2564
  c->r[30]=c->r[3]|c->r[3]; // 800E2568
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E256C
  cmps(c,0,(int32_t)c->r[4],0); // 800E2570
  if (crb(c,2)) { goto L_800E25E8; } // 800E2574
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800E2578
  cmps(c,0,(int32_t)c->r[0],0); // 800E257C
  if (!crb(c,2)) { goto L_800E25E8; } // 800E2580
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800E2584
  cmps(c,0,(int32_t)c->r[0],0); // 800E2588
  if (crb(c,2)) { goto L_800E25E8; } // 800E258C
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800E2590
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800E2594
  if (crb(c,2)) { goto L_800E25E8; } // 800E2598
  c->r[3]=c->r[1]+0x00000008u; // 800E259C
  c->r[4]=c->r[30]+0x0000002Cu; // 800E25A0
  c->lr=0x800E25A8u; f_800361A0(c); // 800E25A4
  c->r[31]=0u+0x80550000u; // 800E25A8
  {uint32_t ea=c->r[2]+0xFFFFA540u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E25AC
  c->r[31]=c->r[31]+0x00003D60u; // 800E25B0
  {uint32_t ea=c->r[2]+0xFFFFA538u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E25B4
  c->r[5]=c->r[30]|c->r[30]; // 800E25B8
  c->r[6]=c->r[1]+0x00000008u; // 800E25BC
  c->r[3]=c->r[31]+0x00000010u; // 800E25C0
  c->r[7]=c->r[1]+0x00000018u; // 800E25C4
  c->r[4]=0u+0x000001FFu; // 800E25C8
  c->lr=0x800E25D0u; f_80226BE8(c); // 800E25CC
  c->r[3]=c->r[31]+0x00000010u; // 800E25D0
  c->r[4]=c->r[1]+0x00000018u; // 800E25D4
  c->lr=0x800E25DCu; f_80226CE8(c); // 800E25D8
  c->r[3]=c->r[31]+0x00000010u; // 800E25DC
  c->r[4]=c->r[1]+0x00000018u; // 800E25E0
  c->lr=0x800E25E8u; f_80226D68(c); // 800E25E4
L_800E25E8:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800E25E8
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800E25EC
  c->r[30]=R32(c->r[1]+0x00000078u); // 800E25F0
  c->lr=c->r[0]; // 800E25F4
  c->r[1]=c->r[1]+0x00000080u; // 800E25F8
  return; // 800E25FC
}

// fn_800E2600
void f_800E2600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2600
  c->r[0]=c->lr; // 800E2604
  c->r[4]=c->r[3]|c->r[3]; // 800E2608
  c->r[3]=0u+0x000002D8u; // 800E260C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2610
  c->r[5]=0u+0x00000000u; // 800E2614
  c->r[4]=R32(c->r[4]+0x00000394u); // 800E2618
  c->r[4]=c->r[4]+0x0000010Cu; // 800E261C
  c->lr=0x800E2624u; f_8024EE50(c); // 800E2620
  c->r[0]=cntlz(c->r[3]); // 800E2624
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E2628
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E262C
  c->lr=c->r[0]; // 800E2630
  c->r[1]=c->r[1]+0x00000010u; // 800E2634
  return; // 800E2638
}

// fn_800E263C
void f_800E263C(Ctx* __restrict c) {
  return; // 800E263C
}

// fn_800E2640
void f_800E2640(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2640
  c->r[0]=c->lr; // 800E2644
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E2648
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E264C
  c->r[31]=c->r[3]|c->r[3]; // 800E2650
  c->lr=0x800E2658u; f_801F4F28(c); // 800E2654
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800E2658
  cmps(c,0,(int32_t)c->r[0],101); // 800E265C
  if (crb(c,2)) { goto L_800E26A4; } // 800E2660
  if (!crb(c,0)) { goto L_800E26D0; } // 800E2664
  cmps(c,0,(int32_t)c->r[0],100); // 800E2668
  if (!crb(c,0)) { goto L_800E2674; } // 800E266C
  goto L_800E26D0; // 800E2670
L_800E2674:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800E2674
  c->r[7]=0u+0x803D0000u; // 800E2678
  c->r[3]=c->r[31]|c->r[31]; // 800E267C
  c->r[4]=c->r[1]+0x00000014u; // 800E2680
  {uint32_t ea=c->r[7]+0x00003598u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E2684
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E2688
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E268C
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E2690
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E2694
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E2698
  c->lr=0x800E26A0u; f_800E22FC(c); // 800E269C
  goto L_800E26D0; // 800E26A0
L_800E26A4:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800E26A4
  c->r[7]=0u+0x803D0000u; // 800E26A8
  c->r[3]=c->r[31]|c->r[31]; // 800E26AC
  c->r[4]=c->r[1]+0x00000008u; // 800E26B0
  {uint32_t ea=c->r[7]+0x000035A4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E26B4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E26B8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E26BC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E26C0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E26C4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E26C8
  c->lr=0x800E26D0u; f_800E22FC(c); // 800E26CC
L_800E26D0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E26D0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E26D4
  c->lr=c->r[0]; // 800E26D8
  c->r[1]=c->r[1]+0x00000030u; // 800E26DC
  return; // 800E26E0
}

// fn_800E26E4
void f_800E26E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E26E4
  c->r[0]=c->lr; // 800E26E8
  c->r[7]=0u+0x803D0000u; // 800E26EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E26F0
  c->r[4]=c->r[1]+0x00000008u; // 800E26F4
  {uint32_t ea=c->r[7]+0x000035B0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E26F8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E26FC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E2700
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E2704
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E2708
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E270C
  c->lr=0x800E2714u; f_800E22FC(c); // 800E2710
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2714
  c->lr=c->r[0]; // 800E2718
  c->r[1]=c->r[1]+0x00000020u; // 800E271C
  return; // 800E2720
}

// fn_800E2724
void f_800E2724(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2724
  c->r[0]=c->lr; // 800E2728
  cmps(c,0,(int32_t)c->r[3],0); // 800E272C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2730
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2734
  c->r[31]=c->r[4]|c->r[4]; // 800E2738
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E273C
  c->r[30]=c->r[3]|c->r[3]; // 800E2740
  if (crb(c,2)) { goto L_800E2760; } // 800E2744
  c->r[4]=0u+0x00000000u; // 800E2748
  c->lr=0x800E2750u; f_8026A06C(c); // 800E274C
  cmps(c,0,(int32_t)c->r[31],0); // 800E2750
  if (!crb(c,1)) { goto L_800E2760; } // 800E2754
  c->r[3]=c->r[30]|c->r[30]; // 800E2758
  c->lr=0x800E2760u; f_8026A268(c); // 800E275C
L_800E2760:;
  c->r[3]=c->r[30]|c->r[30]; // 800E2760
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2764
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E2768
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E276C
  c->lr=c->r[0]; // 800E2770
  c->r[1]=c->r[1]+0x00000010u; // 800E2774
  return; // 800E2778
}

// fn_800E277C
void f_800E277C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E277C
  c->r[0]=c->lr; // 800E2780
  c->r[4]=0u+0x80620000u; // 800E2784
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2788
  c->r[4]=c->r[4]+0x00007688u; // 800E278C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E2790
  c->r[30]=c->r[3]|c->r[3]; // 800E2794
  c->r[3]=R32(c->r[4]+0x00000014u); // 800E2798
  c->lr=0x800E27A0u; f_800A0614(c); // 800E279C
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800E27A0
  c->r[4]=0u+0x804D0000u; // 800E27A4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E27A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800E27AC
  c->r[4]=c->r[4]+0xFFFF8540u; // 800E27B0
  c->r[0]=c->r[3]+c->r[0]; // 800E27B4
  c->r[3]=c->r[4]+c->r[0]; // 800E27B8
  c->r[4]=R8(c->r[4]+c->r[0]); // 800E27BC
  c->r[0]=R8(c->r[3]+0x00000002u); // 800E27C0
  c->r[3]=R8(c->r[3]+0x00000001u); // 800E27C4
  c->r[0]=c->r[4]+c->r[0]; // 800E27C8
  c->r[0]=c->r[3]+c->r[0]; // 800E27CC
  c->r[26]=rotl(c->r[0],0)&0x000000FFu; // 800E27D0
  cmpu(c,0,c->r[26],0x00000004u); // 800E27D4
  if (!crb(c,1)) { goto L_800E27E0; } // 800E27D8
  c->r[26]=0u+0x00000004u; // 800E27DC
L_800E27E0:;
  c->r[27]=0u+0x00000000u; // 800E27E0
  goto L_800E27F8; // 800E27E4
L_800E27E8:;
  c->r[3]=c->r[30]|c->r[30]; // 800E27E8
  c->r[4]=rotl(c->r[27],0)&0x000000FFu; // 800E27EC
  c->lr=0x800E27F4u; f_801F57D0(c); // 800E27F0
  c->r[27]=c->r[27]+0x00000001u; // 800E27F4
L_800E27F8:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 800E27F8
  cmpu(c,0,c->r[0],c->r[26]); // 800E27FC
  if (crb(c,0)) { IRQCHK(c); goto L_800E27E8; } // 800E2800
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E2804
  c->r[3]=c->r[30]|c->r[30]; // 800E2808
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E280C
  c->ctr=c->r[12]; // 800E2810
  if (true) { c->lr=0x800E2818u; dispatch(c,c->ctr); } // 800E2814
  c->r[3]=c->r[30]|c->r[30]; // 800E2818
  c->lr=0x800E2820u; f_801F4B94(c); // 800E281C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800E2820
  c->r[4]=0u+0x00000003u; // 800E2824
  c->r[3]=0u+0x0000004Cu; // 800E2828
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800E282C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800E2830
  c->r[31]=0u+0x00000000u; // 800E2834
  W8(c->r[30]+0x0000006Du,c->r[3]); // 800E2838
  c->r[27]=0u+0x00000000u; // 800E283C
  c->r[28]=0u+0x803A0000u; // 800E2840
  c->r[29]=0u+0x00000001u; // 800E2844
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800E2848
L_800E284C:;
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 800E284C
  c->r[26]=c->r[30]+c->r[0]; // 800E2850
  c->r[4]=R32(c->r[26]+0x00000394u); // 800E2854
  cmps(c,0,(int32_t)c->r[4],0); // 800E2858
  if (crb(c,2)) { goto L_800E28AC; } // 800E285C
  c->r[3]=c->r[30]|c->r[30]; // 800E2860
  c->lr=0x800E2868u; f_801F58BC(c); // 800E2864
  c->r[3]=R32(c->r[26]+0x00000394u); // 800E2868
  c->r[4]=c->r[28]+0xFFFFE5ACu; // 800E286C
  W8(c->r[3]+0x0000001Cu,c->r[27]); // 800E2870
  c->r[3]=R32(c->r[26]+0x00000394u); // 800E2874
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E2878
  c->lr=0x800E2880u; f_80256EC4(c); // 800E287C
  c->r[4]=R32(c->r[26]+0x00000394u); // 800E2880
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800E2884
  c->r[3]=R32(c->r[26]+0x00000394u); // 800E2888
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E288C
  c->lr=0x800E2894u; f_802501B0(c); // 800E2890
  c->r[4]=R32(c->r[26]+0x00000394u); // 800E2894
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800E2898
  c->r[3]=c->r[30]+c->r[0]; // 800E289C
  W8(c->r[4]+0x0000001Du,c->r[27]); // 800E28A0
  W8(c->r[3]+0x000000A4u,c->r[29]); // 800E28A4
  goto L_800E28B8; // 800E28A8
L_800E28AC:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800E28AC
  c->r[3]=c->r[30]+c->r[0]; // 800E28B0
  W8(c->r[3]+0x000000A4u,c->r[27]); // 800E28B4
L_800E28B8:;
  c->r[31]=c->r[31]+0x00000001u; // 800E28B8
  cmpu(c,0,c->r[31],0x00000004u); // 800E28BC
  if (crb(c,0)) { IRQCHK(c); goto L_800E284C; } // 800E28C0
  c->r[0]=0u+0x00000000u; // 800E28C4
  c->r[3]=c->r[30]|c->r[30]; // 800E28C8
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800E28CC
  c->lr=0x800E28D4u; f_801F56F4(c); // 800E28D0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E28D4
  c->r[3]=c->r[30]|c->r[30]; // 800E28D8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E28DC
  c->ctr=c->r[12]; // 800E28E0
  if (true) { c->lr=0x800E28E8u; dispatch(c,c->ctr); } // 800E28E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E28E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E28EC
  c->lr=c->r[0]; // 800E28F0
  c->r[1]=c->r[1]+0x00000020u; // 800E28F4
  return; // 800E28F8
}

// fn_800E28FC
void f_800E28FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E28FC
  c->r[0]=c->lr; // 800E2900
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2904
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2908
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E290C
  c->r[30]=c->r[3]|c->r[3]; // 800E2910
  c->lr=0x800E2918u; f_800E2B78(c); // 800E2914
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E2918
  c->r[3]=c->r[30]|c->r[30]; // 800E291C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800E2920
  c->ctr=c->r[12]; // 800E2924
  if (true) { c->lr=0x800E292Cu; dispatch(c,c->ctr); } // 800E2928
  c->r[3]=c->r[30]|c->r[30]; // 800E292C
  c->lr=0x800E2934u; f_801F4C0C(c); // 800E2930
  c->r[31]=0u+0x00000000u; // 800E2934
L_800E2938:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E2938
  cmps(c,0,(int32_t)c->r[3],0); // 800E293C
  if (crb(c,2)) { goto L_800E2954; } // 800E2940
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E2944
  cmps(c,0,(int32_t)c->r[3],0); // 800E2948
  if (crb(c,2)) { goto L_800E2954; } // 800E294C
  c->lr=0x800E2954u; f_8025037C(c); // 800E2950
L_800E2954:;
  c->r[31]=c->r[31]+0x00000001u; // 800E2954
  c->r[30]=c->r[30]+0x00000004u; // 800E2958
  cmps(c,0,(int32_t)c->r[31],5); // 800E295C
  if (crb(c,0)) { IRQCHK(c); goto L_800E2938; } // 800E2960
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2964
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2968
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E296C
  c->lr=c->r[0]; // 800E2970
  c->r[1]=c->r[1]+0x00000010u; // 800E2974
  return; // 800E2978
}

// fn_800E297C
void f_800E297C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E297C
  c->r[0]=c->lr; // 800E2980
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2984
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2988
  c->r[31]=0u+0x00000000u; // 800E298C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E2990
  c->r[30]=c->r[3]|c->r[3]; // 800E2994
L_800E2998:;
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 800E2998
  c->r[3]=c->r[30]+c->r[0]; // 800E299C
  c->r[3]=R32(c->r[3]+0x00000394u); // 800E29A0
  cmps(c,0,(int32_t)c->r[3],0); // 800E29A4
  if (crb(c,2)) { goto L_800E29B4; } // 800E29A8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E29AC
  c->lr=0x800E29B4u; f_802501B0(c); // 800E29B0
L_800E29B4:;
  c->r[31]=c->r[31]+0x00000001u; // 800E29B4
  cmpu(c,0,c->r[31],0x00000004u); // 800E29B8
  if (crb(c,0)) { IRQCHK(c); goto L_800E2998; } // 800E29BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E29C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E29C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E29C8
  c->lr=c->r[0]; // 800E29CC
  c->r[1]=c->r[1]+0x00000010u; // 800E29D0
  return; // 800E29D4
}

// fn_800E29D8
void f_800E29D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E29D8
  c->r[0]=c->lr; // 800E29DC
  c->r[4]=0u+0x80620000u; // 800E29E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E29E4
  c->r[4]=c->r[4]+0x00007688u; // 800E29E8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E29EC
  c->r[30]=c->r[3]|c->r[3]; // 800E29F0
  c->r[3]=R32(c->r[4]+0x00000014u); // 800E29F4
  c->lr=0x800E29FCu; f_800A0614(c); // 800E29F8
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800E29FC
  c->r[4]=0u+0x804D0000u; // 800E2A00
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E2A04
  c->r[28]=0u+0x00000001u; // 800E2A08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800E2A0C
  c->r[4]=c->r[4]+0xFFFF8540u; // 800E2A10
  c->r[31]=0u+0x00000000u; // 800E2A14
  c->r[0]=c->r[3]+c->r[0]; // 800E2A18
  c->r[27]=c->r[4]+c->r[0]; // 800E2A1C
  c->r[29]=R8(c->r[27]+0x00000002u); // 800E2A20
  goto L_800E2A80; // 800E2A24
L_800E2A28:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[0]); // 800E2A28
  if (crb(c,2)) { goto L_800E2A7C; } // 800E2A2C
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800E2A30
  cmpu(c,0,c->r[0],0x00000004u); // 800E2A34
  if (!crb(c,0)) { goto L_800E2A74; } // 800E2A38
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 800E2A3C
  c->r[3]=0u+0x00000412u; // 800E2A40
  c->r[4]=c->r[30]+c->r[0]; // 800E2A44
  c->r[5]=0u+0x00000000u; // 800E2A48
  c->r[4]=R32(c->r[4]+0x00000394u); // 800E2A4C
  c->r[4]=c->r[4]+0x0000010Cu; // 800E2A50
  c->lr=0x800E2A58u; f_8024EE50(c); // 800E2A54
  cmps(c,0,(int32_t)c->r[3],0); // 800E2A58
  if (crb(c,2)) { goto L_800E2A68; } // 800E2A5C
  c->r[3]=0u+0x00000000u; // 800E2A60
  goto L_800E2B64; // 800E2A64
L_800E2A68:;
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 800E2A68
  c->r[31]=c->r[31]+0x00000001u; // 800E2A6C
  goto L_800E2A80; // 800E2A70
L_800E2A74:;
  c->r[3]=0u+0x00000001u; // 800E2A74
  goto L_800E2B64; // 800E2A78
L_800E2A7C:;
  c->r[28]=0u+0x00000000u; // 800E2A7C
L_800E2A80:;
  cmps(c,0,(int32_t)c->r[28],0); // 800E2A80
  if (!crb(c,2)) { IRQCHK(c); goto L_800E2A28; } // 800E2A84
  c->r[28]=R8(c->r[27]+0x00000001u); // 800E2A88
  c->r[29]=0u+0x00000001u; // 800E2A8C
  goto L_800E2AEC; // 800E2A90
L_800E2A94:;
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; cr0(c,c->r[0]); // 800E2A94
  if (crb(c,2)) { goto L_800E2AE8; } // 800E2A98
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800E2A9C
  cmpu(c,0,c->r[0],0x00000004u); // 800E2AA0
  if (!crb(c,0)) { goto L_800E2AE0; } // 800E2AA4
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 800E2AA8
  c->r[3]=0u+0x00000411u; // 800E2AAC
  c->r[4]=c->r[30]+c->r[0]; // 800E2AB0
  c->r[5]=0u+0x00000000u; // 800E2AB4
  c->r[4]=R32(c->r[4]+0x00000394u); // 800E2AB8
  c->r[4]=c->r[4]+0x0000010Cu; // 800E2ABC
  c->lr=0x800E2AC4u; f_8024EE50(c); // 800E2AC0
  cmps(c,0,(int32_t)c->r[3],0); // 800E2AC4
  if (crb(c,2)) { goto L_800E2AD4; } // 800E2AC8
  c->r[3]=0u+0x00000000u; // 800E2ACC
  goto L_800E2B64; // 800E2AD0
L_800E2AD4:;
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 800E2AD4
  c->r[31]=c->r[31]+0x00000001u; // 800E2AD8
  goto L_800E2AEC; // 800E2ADC
L_800E2AE0:;
  c->r[3]=0u+0x00000001u; // 800E2AE0
  goto L_800E2B64; // 800E2AE4
L_800E2AE8:;
  c->r[29]=0u+0x00000000u; // 800E2AE8
L_800E2AEC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800E2AEC
  if (!crb(c,2)) { IRQCHK(c); goto L_800E2A94; } // 800E2AF0
  c->r[28]=R8(c->r[27]+0x00000000u); // 800E2AF4
  c->r[29]=0u+0x00000001u; // 800E2AF8
  goto L_800E2B58; // 800E2AFC
L_800E2B00:;
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; cr0(c,c->r[0]); // 800E2B00
  if (crb(c,2)) { goto L_800E2B54; } // 800E2B04
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800E2B08
  cmpu(c,0,c->r[0],0x00000004u); // 800E2B0C
  if (!crb(c,0)) { goto L_800E2B4C; } // 800E2B10
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 800E2B14
  c->r[3]=0u+0x00000410u; // 800E2B18
  c->r[4]=c->r[30]+c->r[0]; // 800E2B1C
  c->r[5]=0u+0x00000000u; // 800E2B20
  c->r[4]=R32(c->r[4]+0x00000394u); // 800E2B24
  c->r[4]=c->r[4]+0x0000010Cu; // 800E2B28
  c->lr=0x800E2B30u; f_8024EE50(c); // 800E2B2C
  cmps(c,0,(int32_t)c->r[3],0); // 800E2B30
  if (crb(c,2)) { goto L_800E2B40; } // 800E2B34
  c->r[3]=0u+0x00000000u; // 800E2B38
  goto L_800E2B64; // 800E2B3C
L_800E2B40:;
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 800E2B40
  c->r[31]=c->r[31]+0x00000001u; // 800E2B44
  goto L_800E2B58; // 800E2B48
L_800E2B4C:;
  c->r[3]=0u+0x00000001u; // 800E2B4C
  goto L_800E2B64; // 800E2B50
L_800E2B54:;
  c->r[29]=0u+0x00000000u; // 800E2B54
L_800E2B58:;
  cmps(c,0,(int32_t)c->r[29],0); // 800E2B58
  if (!crb(c,2)) { IRQCHK(c); goto L_800E2B00; } // 800E2B5C
  c->r[3]=0u+0x00000001u; // 800E2B60
L_800E2B64:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E2B64
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2B68
  c->lr=c->r[0]; // 800E2B6C
  c->r[1]=c->r[1]+0x00000020u; // 800E2B70
  return; // 800E2B74
}

// fn_800E2B78
void f_800E2B78(Ctx* __restrict c) {
  return; // 800E2B78
}

// fn_800E2B7C
void f_800E2B7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2B7C
  c->r[0]=c->lr; // 800E2B80
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2B84
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E2B88
  c->r[31]=c->r[3]|c->r[3]; // 800E2B8C
  c->lr=0x800E2B94u; f_801F4F28(c); // 800E2B90
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800E2B94
  cmps(c,0,(int32_t)c->r[0],100); // 800E2B98
  if (crb(c,2)) { goto L_800E2BA4; } // 800E2B9C
  goto L_800E2BD0; // 800E2BA0
L_800E2BA4:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800E2BA4
  c->r[7]=0u+0x803D0000u; // 800E2BA8
  c->r[3]=c->r[31]|c->r[31]; // 800E2BAC
  c->r[4]=c->r[1]+0x00000008u; // 800E2BB0
  {uint32_t ea=c->r[7]+0x00003658u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E2BB4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E2BB8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E2BBC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E2BC0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E2BC4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E2BC8
  c->lr=0x800E2BD0u; f_800E2BE4(c); // 800E2BCC
L_800E2BD0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2BD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E2BD4
  c->lr=c->r[0]; // 800E2BD8
  c->r[1]=c->r[1]+0x00000020u; // 800E2BDC
  return; // 800E2BE0
}

// fn_800E2BE4
void f_800E2BE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2BE4
  c->r[0]=c->lr; // 800E2BE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2BEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2BF0
  c->r[31]=c->r[4]|c->r[4]; // 800E2BF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E2BF8
  c->r[30]=c->r[3]|c->r[3]; // 800E2BFC
  c->r[3]=c->r[31]|c->r[31]; // 800E2C00
  c->lr=0x800E2C08u; f_802B9FDC(c); // 800E2C04
  cmps(c,0,(int32_t)c->r[3],0); // 800E2C08
  if (crb(c,2)) { goto L_800E2C28; } // 800E2C0C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E2C10
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E2C14
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E2C18
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E2C1C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E2C20
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E2C24
L_800E2C28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2C28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2C2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E2C30
  c->lr=c->r[0]; // 800E2C34
  c->r[1]=c->r[1]+0x00000010u; // 800E2C38
  return; // 800E2C3C
}

// fn_800E2C40
void f_800E2C40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2C40
  c->r[0]=c->lr; // 800E2C44
  c->r[7]=0u+0x803D0000u; // 800E2C48
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2C4C
  c->r[4]=c->r[1]+0x00000008u; // 800E2C50
  {uint32_t ea=c->r[7]+0x00003664u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E2C54
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E2C58
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E2C5C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E2C60
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E2C64
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E2C68
  c->lr=0x800E2C70u; f_800E2BE4(c); // 800E2C6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2C70
  c->lr=c->r[0]; // 800E2C74
  c->r[1]=c->r[1]+0x00000020u; // 800E2C78
  return; // 800E2C7C
}

// fn_800E2C80
void f_800E2C80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2C80
  c->r[0]=c->lr; // 800E2C84
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800E2C88
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800E2C8C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800E2C90
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 800E2C94
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 800E2C98
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 800E2C9C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 800E2CA0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 800E2CA4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 800E2CA8
  c->r[11]=c->r[1]+0x00000060u; // 800E2CAC
  c->lr=0x800E2CB4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E2CB0
  {uint32_t ea=c->r[2]+0xFFFFA568u; c->f[28]=RF64(ea);} // 800E2CB4
  c->r[23]=c->r[3]|c->r[3]; // 800E2CB8
  {uint32_t ea=c->r[2]+0xFFFFA554u; c->f[29]=c->ps1[29]=RF32(ea);} // 800E2CBC
  c->r[24]=0u+0x00000000u; // 800E2CC0
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E2CC4
  c->r[27]=0u+0x6C170000u; // 800E2CC8
  {uint32_t ea=c->r[2]+0xFFFFA558u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E2CCC
  c->r[28]=0u+0x43300000u; // 800E2CD0
  c->r[29]=0u+0x51EC0000u; // 800E2CD4
  c->r[30]=0u+0x00000001u; // 800E2CD8
  c->r[31]=0u+0x803A0000u; // 800E2CDC
  c->r[22]=0u+0x00000000u; // 800E2CE0
L_800E2CE4:;
  c->r[0]=rotl(c->r[24],0)&0x000000FFu; // 800E2CE4
  c->r[26]=c->r[23]+c->r[0]; // 800E2CE8
  c->r[0]=R8(c->r[26]+0x000000A4u); // 800E2CEC
  cmps(c,0,(int32_t)c->r[0],0); // 800E2CF0
  if (crb(c,2)) { goto L_800E2E0C; } // 800E2CF4
  c->r[0]=rotl(c->r[24],2)&0x000003FCu; // 800E2CF8
  c->r[3]=c->r[13]+0xFFFFAB38u; // 800E2CFC
  c->r[25]=c->r[23]+c->r[0]; // 800E2D00
  c->lr=0x800E2D08u; f_80211724(c); // 800E2D04
  c->r[0]=c->r[27]+0xFFFFC16Du; // 800E2D08
  W32(c->r[1]+0x00000018u,c->r[28]); // 800E2D0C
  c->r[4]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 800E2D10
  c->r[0]=c->r[3]-c->r[4]; // 800E2D14
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800E2D18
  c->r[0]=c->r[0]+c->r[4]; // 800E2D1C
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800E2D20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)360); // 800E2D24
  c->r[0]=c->r[3]-c->r[0]; // 800E2D28
  c->r[3]=c->r[13]+0xFFFFAB38u; // 800E2D2C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E2D30
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800E2D34
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 800E2D38
  {uint32_t ea=c->r[25]+0x00000074u; WF32(ea,c->f[0]);} // 800E2D3C
  c->lr=0x800E2D44u; f_80211724(c); // 800E2D40
  c->r[0]=c->r[29]+0xFFFF851Fu; // 800E2D44
  W32(c->r[1]+0x00000020u,c->r[28]); // 800E2D48
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 800E2D4C
  c->r[4]=c->r[23]+0x0000002Cu; // 800E2D50
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E2D54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800E2D58
  c->r[0]=c->r[3]-c->r[0]; // 800E2D5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2D60
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800E2D64
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 800E2D68
  c->f[0]=c->ps1[0]=S(std::fma(c->f[29],c->f[0],c->f[30])); // 800E2D6C
  {uint32_t ea=c->r[25]+0x00000084u; WF32(ea,c->f[0]);} // 800E2D70
  {uint32_t ea=c->r[25]+0x00000094u; WF32(ea,c->f[31]);} // 800E2D74
  W8(c->r[26]+0x000000A4u,c->r[30]); // 800E2D78
  c->r[3]=R32(c->r[25]+0x00000394u); // 800E2D7C
  c->r[3]=c->r[3]+0x0000005Cu; // 800E2D80
  c->lr=0x800E2D88u; f_800361A0(c); // 800E2D84
  c->r[3]=R32(c->r[25]+0x00000394u); // 800E2D88
  c->r[4]=c->r[31]+0xFFFFE5A0u; // 800E2D8C
  c->r[3]=c->r[3]+0x00000068u; // 800E2D90
  c->lr=0x800E2D98u; f_800361A0(c); // 800E2D94
  c->r[3]=c->r[13]+0xFFFFAB38u; // 800E2D98
  c->lr=0x800E2DA0u; f_80211724(c); // 800E2D9C
  c->r[0]=c->r[27]+0xFFFFC16Du; // 800E2DA0
  {uint32_t ea=c->r[2]+0xFFFFA55Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2DA4
  c->r[7]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 800E2DA8
  W32(c->r[1]+0x00000028u,c->r[28]); // 800E2DAC
  c->r[4]=R32(c->r[25]+0x00000394u); // 800E2DB0
  c->f[2]=c->f[1]; // 800E2DB4
  c->r[5]=0u+0x00000001u; // 800E2DB8
  c->r[6]=0u+0x00000001u; // 800E2DBC
  c->r[0]=c->r[3]-c->r[7]; // 800E2DC0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800E2DC4
  c->r[0]=c->r[0]+c->r[7]; // 800E2DC8
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800E2DCC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)360); // 800E2DD0
  c->r[0]=c->r[3]-c->r[0]; // 800E2DD4
  c->r[3]=c->r[23]|c->r[23]; // 800E2DD8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800E2DDC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 800E2DE0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 800E2DE4
  {uint32_t ea=c->r[4]+0x0000006Cu; WF32(ea,c->f[0]);} // 800E2DE8
  c->r[4]=R32(c->r[25]+0x00000394u); // 800E2DEC
  W8(c->r[4]+0x0000001Cu,c->r[30]); // 800E2DF0
  c->r[12]=R32(c->r[23]+0x000000B0u); // 800E2DF4
  c->r[4]=R32(c->r[25]+0x00000394u); // 800E2DF8
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E2DFC
  c->ctr=c->r[12]; // 800E2E00
  if (true) { c->lr=0x800E2E08u; dispatch(c,c->ctr); } // 800E2E04
  goto L_800E2E24; // 800E2E08
L_800E2E0C:;
  c->r[0]=rotl(c->r[24],2)&0x000003FCu; // 800E2E0C
  c->r[3]=c->r[23]+c->r[0]; // 800E2E10
  c->r[3]=R32(c->r[3]+0x00000394u); // 800E2E14
  cmps(c,0,(int32_t)c->r[3],0); // 800E2E18
  if (crb(c,2)) { goto L_800E2E24; } // 800E2E1C
  W8(c->r[3]+0x0000001Cu,c->r[22]); // 800E2E20
L_800E2E24:;
  c->r[24]=c->r[24]+0x00000001u; // 800E2E24
  cmpu(c,0,c->r[24],0x00000004u); // 800E2E28
  if (crb(c,0)) { IRQCHK(c); goto L_800E2CE4; } // 800E2E2C
  {uint32_t ea=c->r[2]+0xFFFFA55Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2E30
  c->r[0]=0u+0x00000001u; // 800E2E34
  {uint32_t ea=c->r[2]+0xFFFFA560u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2E38
  c->r[7]=0u+0x803D0000u; // 800E2E3C
  {uint32_t ea=c->r[23]+0x00000048u; WF32(ea,c->f[1]);} // 800E2E40
  c->r[3]=c->r[23]|c->r[23]; // 800E2E44
  c->r[4]=c->r[1]+0x00000008u; // 800E2E48
  {uint32_t ea=c->r[23]+0x00000054u; WF32(ea,c->f[0]);} // 800E2E4C
  W8(c->r[23]+0x0000006Fu,c->r[0]); // 800E2E50
  {uint32_t ea=c->r[7]+0x00003670u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E2E54
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E2E58
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E2E5C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E2E60
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E2E64
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E2E68
  c->lr=0x800E2E70u; f_800E2BE4(c); // 800E2E6C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800E2E70
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800E2E74
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 800E2E78
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 800E2E7C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 800E2E80
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 800E2E84
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,28,ea,0,0);} // 800E2E88
  c->r[11]=c->r[1]+0x00000060u; // 800E2E8C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 800E2E90
  c->lr=0x800E2E98u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E2E94
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800E2E98
  c->lr=c->r[0]; // 800E2E9C
  c->r[1]=c->r[1]+0x000000A0u; // 800E2EA0
  return; // 800E2EA4
}

// fn_800E2EA8
void f_800E2EA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2EA8
  c->r[0]=c->lr; // 800E2EAC
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800E2EB0
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 800E2EB4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 800E2EB8
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[30]);} // 800E2EBC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,30,ea,0,0);} // 800E2EC0
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[29]);} // 800E2EC4
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,29,ea,0,0);} // 800E2EC8
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[28]);} // 800E2ECC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,28,ea,0,0);} // 800E2ED0
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[27]);} // 800E2ED4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,27,ea,0,0);} // 800E2ED8
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[26]);} // 800E2EDC
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,26,ea,0,0);} // 800E2EE0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[25]);} // 800E2EE4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,25,ea,0,0);} // 800E2EE8
  c->r[11]=c->r[1]+0x00000080u; // 800E2EEC
  c->lr=0x800E2EF4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E2EF0
  c->r[30]=c->r[3]|c->r[3]; // 800E2EF4
  c->r[27]=0u+0x00000001u; // 800E2EF8
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800E2EFC
  c->lr=0x800E2F04u; f_80035554(c); // 800E2F00
  {uint32_t ea=c->r[30]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E2F04
  c->f[30]=c->f[1]; // 800E2F08
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2F0C
  c->r[31]=0u+0x00000000u; // 800E2F10
  {uint32_t ea=c->r[2]+0xFFFFA55Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800E2F14
  c->r[29]=0u+0x00000000u; // 800E2F18
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 800E2F1C
  {uint32_t ea=c->r[2]+0xFFFFA558u; c->f[25]=c->ps1[25]=RF32(ea);} // 800E2F20
  {uint32_t ea=c->r[2]+0xFFFFA570u; c->f[26]=c->ps1[26]=RF32(ea);} // 800E2F24
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 800E2F28
  {uint32_t ea=c->r[2]+0xFFFFA574u; c->f[27]=c->ps1[27]=RF32(ea);} // 800E2F2C
  {uint32_t ea=c->r[2]+0xFFFFA578u; c->f[28]=c->ps1[28]=RF32(ea);} // 800E2F30
  {uint32_t ea=c->r[2]+0xFFFFA57Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 800E2F34
L_800E2F38:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800E2F38
  c->r[28]=c->r[30]+c->r[0]; // 800E2F3C
  c->r[0]=R8(c->r[28]+0x000000A4u); // 800E2F40
  cmps(c,0,(int32_t)c->r[0],0); // 800E2F44
  if (crb(c,2)) { goto L_800E30B0; } // 800E2F48
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 800E2F4C
  c->r[3]=c->r[1]+0x0000002Cu; // 800E2F50
  c->r[27]=c->r[30]+c->r[0]; // 800E2F54
  c->r[5]=R32(c->r[27]+0x00000394u); // 800E2F58
  c->r[4]=R32(c->r[5]+0x0000005Cu); // 800E2F5C
  c->r[0]=R32(c->r[5]+0x00000060u); // 800E2F60
  W32(c->r[1]+0x00000020u,c->r[4]); // 800E2F64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2F68
  c->r[0]=R32(c->r[5]+0x00000064u); // 800E2F6C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E2F70
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[31]);} // 800E2F74
  {uint32_t ea=c->r[27]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2F78
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800E2F7C
  {uint32_t ea=c->r[27]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2F80
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800E2F84
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2F88
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[30],c->f[1])); // 800E2F8C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800E2F90
  c->lr=0x800E2F98u; f_80296B0C(c); // 800E2F94
  fcmp(c,0,c->f[1],c->f[25]); // 800E2F98
  if (!crb(c,1)) { goto L_800E2FE0; } // 800E2F9C
  c->r[3]=c->r[1]+0x0000002Cu; // 800E2FA0
  c->r[4]=c->r[3]|c->r[3]; // 800E2FA4
  c->lr=0x800E2FACu; f_80296AB0(c); // 800E2FA8
  c->r[3]=c->r[1]+0x0000002Cu; // 800E2FAC
  {uint32_t ea=c->r[2]+0xFFFFA558u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2FB0
  c->r[4]=c->r[3]|c->r[3]; // 800E2FB4
  c->lr=0x800E2FBCu; f_80296A94(c); // 800E2FB8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2FBC
  {uint32_t ea=c->r[27]+0x00000094u; WF32(ea,c->f[0]);} // 800E2FC0
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2FC4
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2FC8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 800E2FCC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[0],c->f[1])); // 800E2FD0
  c->lr=0x800E2FD8u; f_800689C8(c); // 800E2FD4
  {uint32_t ea=c->r[27]+0x00000084u; WF32(ea,c->f[1]);} // 800E2FD8
  goto L_800E2FE8; // 800E2FDC
L_800E2FE0:;
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2FE0
  {uint32_t ea=c->r[27]+0x00000094u; WF32(ea,c->f[0]);} // 800E2FE4
L_800E2FE8:;
  {uint32_t ea=c->r[27]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2FE8
  c->r[3]=c->r[1]+0x00000038u; // 800E2FEC
  c->r[4]=0u+0x00000059u; // 800E2FF0
  c->f[1]=c->ps1[1]=S(c->f[26]*c->f[0]); // 800E2FF4
  c->lr=0x800E2FFCu; f_80295FBC(c); // 800E2FF8
  c->r[4]=c->r[1]+0x0000002Cu; // 800E2FFC
  c->r[3]=c->r[1]+0x00000038u; // 800E3000
  c->r[5]=c->r[4]|c->r[4]; // 800E3004
  c->lr=0x800E300Cu; f_80296750(c); // 800E3008
  c->f[1]=c->f[30]; // 800E300C
  c->r[3]=c->r[1]+0x0000002Cu; // 800E3010
  c->r[4]=c->r[3]|c->r[3]; // 800E3014
  c->lr=0x800E301Cu; f_80296A94(c); // 800E3018
  c->r[3]=c->r[1]+0x00000020u; // 800E301C
  c->r[4]=c->r[1]+0x0000002Cu; // 800E3020
  c->r[5]=c->r[3]|c->r[3]; // 800E3024
  c->lr=0x800E302Cu; f_80296A4C(c); // 800E3028
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E302C
  c->r[4]=c->r[1]+0x00000020u; // 800E3030
  c->r[3]=c->r[3]+0x0000005Cu; // 800E3034
  c->lr=0x800E303Cu; f_800361A0(c); // 800E3038
  c->r[4]=R32(c->r[27]+0x00000394u); // 800E303C
  c->r[3]=R32(c->r[4]+0x00000068u); // 800E3040
  c->r[0]=R32(c->r[4]+0x0000006Cu); // 800E3044
  W32(c->r[1]+0x00000018u,c->r[0]); // 800E3048
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E304C
  W32(c->r[1]+0x00000014u,c->r[3]); // 800E3050
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[27]); // 800E3054
  c->r[0]=R32(c->r[4]+0x00000070u); // 800E3058
  fcmp(c,0,c->f[0],c->f[28]); // 800E305C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E3060
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800E3064
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E3068
  if (!crb(c,2)) { goto L_800E3078; } // 800E306C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 800E3070
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800E3074
L_800E3078:;
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E3078
  c->r[4]=c->r[1]+0x00000014u; // 800E307C
  c->r[3]=c->r[3]+0x00000068u; // 800E3080
  c->lr=0x800E3088u; f_800361A0(c); // 800E3084
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E3088
  fcmp(c,0,c->f[0],c->f[29]); // 800E308C
  if (!crb(c,0)) { goto L_800E30A0; } // 800E3090
  W8(c->r[28]+0x000000A4u,c->r[29]); // 800E3094
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E3098
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800E309C
L_800E30A0:;
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E30A0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E30A4
  c->lr=0x800E30ACu; f_802501B0(c); // 800E30A8
  c->r[27]=0u+0x00000000u; // 800E30AC
L_800E30B0:;
  c->r[31]=c->r[31]+0x00000001u; // 800E30B0
  cmpu(c,0,c->r[31],0x00000004u); // 800E30B4
  if (crb(c,0)) { IRQCHK(c); goto L_800E2F38; } // 800E30B8
  cmps(c,0,(int32_t)c->r[27],0); // 800E30BC
  if (crb(c,2)) { goto L_800E30EC; } // 800E30C0
  c->r[7]=0u+0x803D0000u; // 800E30C4
  {uint32_t ea=c->r[7]+0x0000367Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E30C8
  c->r[3]=c->r[30]|c->r[30]; // 800E30CC
  c->r[4]=c->r[1]+0x00000008u; // 800E30D0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E30D4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E30D8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E30DC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E30E0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E30E4
  c->lr=0x800E30ECu; f_8004DF74(c); // 800E30E8
L_800E30EC:;
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 800E30EC
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 800E30F0
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,30,ea,0,0);} // 800E30F4
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[30]=RF64(ea);} // 800E30F8
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,29,ea,0,0);} // 800E30FC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[29]=RF64(ea);} // 800E3100
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,28,ea,0,0);} // 800E3104
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[28]=RF64(ea);} // 800E3108
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,27,ea,0,0);} // 800E310C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[27]=RF64(ea);} // 800E3110
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,26,ea,0,0);} // 800E3114
  {uint32_t ea=c->r[1]+0x00000090u; c->f[26]=RF64(ea);} // 800E3118
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,25,ea,0,0);} // 800E311C
  c->r[11]=c->r[1]+0x00000080u; // 800E3120
  {uint32_t ea=c->r[1]+0x00000080u; c->f[25]=RF64(ea);} // 800E3124
  c->lr=0x800E312Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E3128
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800E312C
  c->lr=c->r[0]; // 800E3130
  c->r[1]=c->r[1]+0x000000F0u; // 800E3134
  return; // 800E3138
}

// fn_800E313C
void f_800E313C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E313C
  c->r[0]=c->lr; // 800E3140
  cmps(c,0,(int32_t)c->r[3],0); // 800E3144
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3148
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E314C
  c->r[31]=c->r[4]|c->r[4]; // 800E3150
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E3154
  c->r[30]=c->r[3]|c->r[3]; // 800E3158
  if (crb(c,2)) { goto L_800E3178; } // 800E315C
  c->r[4]=0u+0x00000000u; // 800E3160
  c->lr=0x800E3168u; f_8026A06C(c); // 800E3164
  cmps(c,0,(int32_t)c->r[31],0); // 800E3168
  if (!crb(c,1)) { goto L_800E3178; } // 800E316C
  c->r[3]=c->r[30]|c->r[30]; // 800E3170
  c->lr=0x800E3178u; f_8026A268(c); // 800E3174
L_800E3178:;
  c->r[3]=c->r[30]|c->r[30]; // 800E3178
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E317C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E3180
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3184
  c->lr=c->r[0]; // 800E3188
  c->r[1]=c->r[1]+0x00000010u; // 800E318C
  return; // 800E3190
}

// fn_800E3194
void f_800E3194(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3194
  c->r[0]=c->lr; // 800E3198
  c->r[4]=0u+0x00000000u; // 800E319C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E31A0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E31A4
  W32(c->r[1]+0x00000028u,c->r[30]); // 800E31A8
  W32(c->r[1]+0x00000024u,c->r[29]); // 800E31AC
  W32(c->r[1]+0x00000020u,c->r[28]); // 800E31B0
  c->r[28]=c->r[3]|c->r[3]; // 800E31B4
  c->lr=0x800E31BCu; f_801F57D0(c); // 800E31B8
  c->r[3]=c->r[28]|c->r[28]; // 800E31BC
  c->r[4]=0u+0x00000001u; // 800E31C0
  c->lr=0x800E31C8u; f_801F57D0(c); // 800E31C4
  c->r[3]=c->r[28]|c->r[28]; // 800E31C8
  c->r[4]=0u+0x00000002u; // 800E31CC
  c->lr=0x800E31D4u; f_801F57D0(c); // 800E31D0
  c->r[3]=c->r[28]|c->r[28]; // 800E31D4
  c->r[4]=0u+0x00000003u; // 800E31D8
  c->lr=0x800E31E0u; f_801F57D0(c); // 800E31DC
  c->r[3]=c->r[28]|c->r[28]; // 800E31E0
  c->r[4]=0u+0x00000004u; // 800E31E4
  c->lr=0x800E31ECu; f_801F57D0(c); // 800E31E8
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800E31EC
  c->r[3]=c->r[28]|c->r[28]; // 800E31F0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E31F4
  c->ctr=c->r[12]; // 800E31F8
  if (true) { c->lr=0x800E3200u; dispatch(c,c->ctr); } // 800E31FC
  c->r[3]=c->r[28]|c->r[28]; // 800E3200
  c->lr=0x800E3208u; f_801F4B94(c); // 800E3204
  c->r[3]=0u+0x00000003u; // 800E3208
  c->r[0]=0u+0x0000004Du; // 800E320C
  W8(c->r[28]+0x0000006Cu,c->r[3]); // 800E3210
  c->r[3]=c->r[28]|c->r[28]; // 800E3214
  c->r[4]=R32(c->r[28]+0x00000394u); // 800E3218
  W8(c->r[28]+0x0000006Du,c->r[0]); // 800E321C
  c->lr=0x800E3224u; f_801F58BC(c); // 800E3220
  c->r[3]=R32(c->r[28]+0x00000394u); // 800E3224
  c->r[29]=0u+0x00000001u; // 800E3228
  c->r[30]=0u+0x803A0000u; // 800E322C
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800E3230
  c->r[4]=c->r[30]+0xFFFFE5B8u; // 800E3234
  c->r[3]=R32(c->r[28]+0x00000394u); // 800E3238
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E323C
  c->lr=0x800E3244u; f_80256EC4(c); // 800E3240
  c->r[5]=R32(c->r[28]+0x00000394u); // 800E3244
  c->r[4]=0u+0x00000000u; // 800E3248
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E324C
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800E3250
  c->f[2]=c->f[1]; // 800E3254
  c->r[5]=R32(c->r[28]+0x00000394u); // 800E3258
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800E325C
  c->r[5]=R32(c->r[5]+0x00000034u); // 800E3260
  c->lr=0x800E3268u; f_8024FEAC(c); // 800E3264
  c->r[3]=R32(c->r[28]+0x00000394u); // 800E3268
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E326C
  c->lr=0x800E3274u; f_802501B0(c); // 800E3270
  c->r[4]=R32(c->r[28]+0x00000394u); // 800E3274
  c->r[31]=0u+0x00000000u; // 800E3278
  c->r[3]=c->r[28]|c->r[28]; // 800E327C
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800E3280
  c->r[4]=R32(c->r[28]+0x00000398u); // 800E3284
  c->lr=0x800E328Cu; f_801F58BC(c); // 800E3288
  c->r[3]=R32(c->r[28]+0x00000398u); // 800E328C
  c->r[4]=c->r[30]+0xFFFFE5B8u; // 800E3290
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800E3294
  c->r[3]=R32(c->r[28]+0x00000398u); // 800E3298
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E329C
  c->lr=0x800E32A4u; f_80256EC4(c); // 800E32A0
  c->r[5]=R32(c->r[28]+0x00000398u); // 800E32A4
  c->r[4]=0u+0x00000000u; // 800E32A8
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E32AC
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800E32B0
  c->f[2]=c->f[1]; // 800E32B4
  c->r[5]=R32(c->r[28]+0x00000398u); // 800E32B8
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800E32BC
  c->r[5]=R32(c->r[5]+0x00000034u); // 800E32C0
  c->lr=0x800E32C8u; f_8024FEAC(c); // 800E32C4
  c->r[3]=R32(c->r[28]+0x00000398u); // 800E32C8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E32CC
  c->lr=0x800E32D4u; f_802501B0(c); // 800E32D0
  c->r[4]=R32(c->r[28]+0x00000398u); // 800E32D4
  c->r[3]=c->r[28]|c->r[28]; // 800E32D8
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800E32DC
  c->r[4]=R32(c->r[28]+0x0000039Cu); // 800E32E0
  c->lr=0x800E32E8u; f_801F58BC(c); // 800E32E4
  c->r[0]=R8(c->r[28]+0x0000006Eu); // 800E32E8
  c->r[4]=c->r[30]+0xFFFFE5B8u; // 800E32EC
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800E32F0
  c->r[0]=cntlz(c->r[0]); // 800E32F4
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 800E32F8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800E32FC
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800E3300
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E3304
  c->lr=0x800E330Cu; f_80256EC4(c); // 800E3308
  c->r[5]=R32(c->r[28]+0x0000039Cu); // 800E330C
  c->r[4]=0u+0x00000000u; // 800E3310
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3314
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800E3318
  c->f[2]=c->f[1]; // 800E331C
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800E3320
  c->r[5]=R32(c->r[28]+0x00000394u); // 800E3324
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E3328
  c->r[5]=R32(c->r[5]+0x00000034u); // 800E332C
  c->lr=0x800E3334u; f_8024FEAC(c); // 800E3330
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800E3334
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E3338
  c->lr=0x800E3340u; f_802501B0(c); // 800E333C
  c->r[4]=R32(c->r[28]+0x0000039Cu); // 800E3340
  c->r[3]=c->r[28]|c->r[28]; // 800E3344
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800E3348
  c->r[4]=R32(c->r[28]+0x000003A0u); // 800E334C
  c->lr=0x800E3354u; f_801F58BC(c); // 800E3350
  c->r[0]=R8(c->r[28]+0x0000006Eu); // 800E3354
  c->r[4]=c->r[30]+0xFFFFE5B8u; // 800E3358
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800E335C
  c->r[0]=cntlz(c->r[0]); // 800E3360
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 800E3364
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800E3368
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800E336C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E3370
  c->lr=0x800E3378u; f_80256EC4(c); // 800E3374
  c->r[5]=R32(c->r[28]+0x000003A0u); // 800E3378
  c->r[4]=0u+0x00000000u; // 800E337C
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3380
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800E3384
  c->f[2]=c->f[1]; // 800E3388
  c->r[5]=R32(c->r[28]+0x000003A0u); // 800E338C
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800E3390
  c->r[5]=R32(c->r[5]+0x00000034u); // 800E3394
  c->lr=0x800E339Cu; f_8024FEAC(c); // 800E3398
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800E339C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E33A0
  c->lr=0x800E33A8u; f_802501B0(c); // 800E33A4
  c->r[4]=R32(c->r[28]+0x000003A0u); // 800E33A8
  c->r[3]=c->r[28]|c->r[28]; // 800E33AC
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800E33B0
  c->r[4]=R32(c->r[28]+0x000003A4u); // 800E33B4
  c->lr=0x800E33BCu; f_801F58BC(c); // 800E33B8
  c->r[0]=R8(c->r[28]+0x0000006Eu); // 800E33BC
  c->r[4]=c->r[30]+0xFFFFE5B8u; // 800E33C0
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800E33C4
  c->r[0]=cntlz(c->r[0]); // 800E33C8
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 800E33CC
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800E33D0
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800E33D4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E33D8
  c->lr=0x800E33E0u; f_80256EC4(c); // 800E33DC
  c->r[5]=R32(c->r[28]+0x000003A4u); // 800E33E0
  c->r[4]=0u+0x00000000u; // 800E33E4
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E33E8
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800E33EC
  c->f[2]=c->f[1]; // 800E33F0
  c->r[5]=R32(c->r[28]+0x000003A4u); // 800E33F4
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800E33F8
  c->r[5]=R32(c->r[5]+0x00000034u); // 800E33FC
  c->lr=0x800E3404u; f_8024FEAC(c); // 800E3400
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800E3404
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E3408
  c->lr=0x800E3410u; f_802501B0(c); // 800E340C
  c->r[4]=R32(c->r[28]+0x000003A4u); // 800E3410
  c->r[3]=c->r[28]|c->r[28]; // 800E3414
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800E3418
  W8(c->r[28]+0x0000006Fu,c->r[29]); // 800E341C
  W8(c->r[28]+0x00000028u,c->r[31]); // 800E3420
  c->lr=0x800E3428u; f_801F56F4(c); // 800E3424
  c->r[7]=0u+0x803D0000u; // 800E3428
  {uint32_t ea=c->r[7]+0x00003720u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E342C
  c->r[3]=c->r[28]|c->r[28]; // 800E3430
  c->r[4]=c->r[1]+0x00000008u; // 800E3434
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E3438
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E343C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E3440
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E3444
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E3448
  c->lr=0x800E3450u; f_800E3470(c); // 800E344C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E3450
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E3454
  c->r[30]=R32(c->r[1]+0x00000028u); // 800E3458
  c->r[29]=R32(c->r[1]+0x00000024u); // 800E345C
  c->r[28]=R32(c->r[1]+0x00000020u); // 800E3460
  c->lr=c->r[0]; // 800E3464
  c->r[1]=c->r[1]+0x00000030u; // 800E3468
  return; // 800E346C
}

// fn_800E3470
void f_800E3470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3470
  c->r[0]=c->lr; // 800E3474
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3478
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E347C
  c->r[31]=c->r[4]|c->r[4]; // 800E3480
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E3484
  c->r[30]=c->r[3]|c->r[3]; // 800E3488
  c->r[3]=c->r[31]|c->r[31]; // 800E348C
  c->lr=0x800E3494u; f_802B9FDC(c); // 800E3490
  cmps(c,0,(int32_t)c->r[3],0); // 800E3494
  if (crb(c,2)) { goto L_800E34B4; } // 800E3498
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E349C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E34A0
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E34A4
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E34A8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E34AC
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E34B0
L_800E34B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E34B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E34B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E34BC
  c->lr=c->r[0]; // 800E34C0
  c->r[1]=c->r[1]+0x00000010u; // 800E34C4
  return; // 800E34C8
}

// fn_800E34CC
void f_800E34CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E34CC
  c->r[0]=c->lr; // 800E34D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E34D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E34D8
  c->r[31]=c->r[3]|c->r[3]; // 800E34DC
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800E34E0
  c->r[12]=R32(c->r[12]+0x00000068u); // 800E34E4
  c->ctr=c->r[12]; // 800E34E8
  if (true) { c->lr=0x800E34F0u; dispatch(c,c->ctr); } // 800E34EC
  c->r[3]=c->r[31]|c->r[31]; // 800E34F0
  c->lr=0x800E34F8u; f_801F4C0C(c); // 800E34F4
  c->r[3]=c->r[31]+0x00000210u; // 800E34F8
  c->lr=0x800E3500u; f_80221698(c); // 800E34FC
  c->r[3]=c->r[31]|c->r[31]; // 800E3500
  c->lr=0x800E3508u; f_800E38D4(c); // 800E3504
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E3508
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E350C
  c->lr=0x800E3514u; f_802501B0(c); // 800E3510
  cmps(c,0,(int32_t)c->r[3],0); // 800E3514
  if (crb(c,2)) { goto L_800E352C; } // 800E3518
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E351C
  c->r[0]=0u+0x00000000u; // 800E3520
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800E3524
  goto L_800E3544; // 800E3528
L_800E352C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E352C
  c->r[4]=0u+0x00000000u; // 800E3530
  c->lr=0x800E3538u; f_801F5244(c); // 800E3534
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E3538
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E353C
  c->lr=0x800E3544u; f_8025037C(c); // 800E3540
L_800E3544:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E3544
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E3548
  c->lr=0x800E3550u; f_802501B0(c); // 800E354C
  cmps(c,0,(int32_t)c->r[3],0); // 800E3550
  if (crb(c,2)) { goto L_800E3568; } // 800E3554
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E3558
  c->r[0]=0u+0x00000000u; // 800E355C
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800E3560
  goto L_800E3580; // 800E3564
L_800E3568:;
  c->r[3]=c->r[31]|c->r[31]; // 800E3568
  c->r[4]=0u+0x00000001u; // 800E356C
  c->lr=0x800E3574u; f_801F5244(c); // 800E3570
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E3574
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E3578
  c->lr=0x800E3580u; f_8025037C(c); // 800E357C
L_800E3580:;
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800E3580
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E3584
  c->lr=0x800E358Cu; f_802501B0(c); // 800E3588
  cmps(c,0,(int32_t)c->r[3],0); // 800E358C
  if (crb(c,2)) { goto L_800E35A4; } // 800E3590
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800E3594
  c->r[0]=0u+0x00000000u; // 800E3598
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800E359C
  goto L_800E35BC; // 800E35A0
L_800E35A4:;
  c->r[3]=c->r[31]|c->r[31]; // 800E35A4
  c->r[4]=0u+0x00000002u; // 800E35A8
  c->lr=0x800E35B0u; f_801F5244(c); // 800E35AC
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800E35B0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E35B4
  c->lr=0x800E35BCu; f_8025037C(c); // 800E35B8
L_800E35BC:;
  c->r[3]=R32(c->r[31]+0x000003A0u); // 800E35BC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E35C0
  c->lr=0x800E35C8u; f_802501B0(c); // 800E35C4
  cmps(c,0,(int32_t)c->r[3],0); // 800E35C8
  if (crb(c,2)) { goto L_800E35E0; } // 800E35CC
  c->r[3]=R32(c->r[31]+0x000003A0u); // 800E35D0
  c->r[0]=0u+0x00000000u; // 800E35D4
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800E35D8
  goto L_800E35F8; // 800E35DC
L_800E35E0:;
  c->r[3]=c->r[31]|c->r[31]; // 800E35E0
  c->r[4]=0u+0x00000003u; // 800E35E4
  c->lr=0x800E35ECu; f_801F5244(c); // 800E35E8
  c->r[3]=R32(c->r[31]+0x000003A0u); // 800E35EC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E35F0
  c->lr=0x800E35F8u; f_8025037C(c); // 800E35F4
L_800E35F8:;
  c->r[3]=R32(c->r[31]+0x000003A4u); // 800E35F8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E35FC
  c->lr=0x800E3604u; f_802501B0(c); // 800E3600
  cmps(c,0,(int32_t)c->r[3],0); // 800E3604
  if (crb(c,2)) { goto L_800E361C; } // 800E3608
  c->r[3]=R32(c->r[31]+0x000003A4u); // 800E360C
  c->r[0]=0u+0x00000000u; // 800E3610
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800E3614
  goto L_800E3634; // 800E3618
L_800E361C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E361C
  c->r[4]=0u+0x00000004u; // 800E3620
  c->lr=0x800E3628u; f_801F5244(c); // 800E3624
  c->r[3]=R32(c->r[31]+0x000003A4u); // 800E3628
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E362C
  c->lr=0x800E3634u; f_8025037C(c); // 800E3630
L_800E3634:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3634
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3638
  c->lr=c->r[0]; // 800E363C
  c->r[1]=c->r[1]+0x00000010u; // 800E3640
  return; // 800E3644
}

// fn_800E3648
void f_800E3648(Ctx* __restrict c) {
  f_801F50B4(c); return; // 800E3648
}

// fn_800E364C
void f_800E364C(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800E364C
}

// fn_800E3650
void f_800E3650(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800E3650
}

// fn_800E3654
void f_800E3654(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3654
  c->r[0]=c->lr; // 800E3658
  c->r[5]=0u+0x00000000u; // 800E365C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3660
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3664
  c->r[31]=c->r[3]|c->r[3]; // 800E3668
  c->r[3]=0u+0x00000289u; // 800E366C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E3670
  c->r[4]=c->r[4]+0x0000010Cu; // 800E3674
  c->lr=0x800E367Cu; f_8024EE50(c); // 800E3678
  cmps(c,0,(int32_t)c->r[3],0); // 800E367C
  if (crb(c,2)) { goto L_800E368C; } // 800E3680
  c->r[3]=0u+0x00000000u; // 800E3684
  goto L_800E3714; // 800E3688
L_800E368C:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E368C
  c->r[3]=0u+0x00000289u; // 800E3690
  c->r[5]=0u+0x00000000u; // 800E3694
  c->r[4]=c->r[4]+0x0000010Cu; // 800E3698
  c->lr=0x800E36A0u; f_8024EE50(c); // 800E369C
  cmps(c,0,(int32_t)c->r[3],0); // 800E36A0
  if (crb(c,2)) { goto L_800E36B0; } // 800E36A4
  c->r[3]=0u+0x00000000u; // 800E36A8
  goto L_800E3714; // 800E36AC
L_800E36B0:;
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800E36B0
  c->r[3]=0u+0x00000289u; // 800E36B4
  c->r[5]=0u+0x00000000u; // 800E36B8
  c->r[4]=c->r[4]+0x0000010Cu; // 800E36BC
  c->lr=0x800E36C4u; f_8024EE50(c); // 800E36C0
  cmps(c,0,(int32_t)c->r[3],0); // 800E36C4
  if (crb(c,2)) { goto L_800E36D4; } // 800E36C8
  c->r[3]=0u+0x00000000u; // 800E36CC
  goto L_800E3714; // 800E36D0
L_800E36D4:;
  c->r[4]=R32(c->r[31]+0x000003A0u); // 800E36D4
  c->r[3]=0u+0x00000289u; // 800E36D8
  c->r[5]=0u+0x00000000u; // 800E36DC
  c->r[4]=c->r[4]+0x0000010Cu; // 800E36E0
  c->lr=0x800E36E8u; f_8024EE50(c); // 800E36E4
  cmps(c,0,(int32_t)c->r[3],0); // 800E36E8
  if (crb(c,2)) { goto L_800E36F8; } // 800E36EC
  c->r[3]=0u+0x00000000u; // 800E36F0
  goto L_800E3714; // 800E36F4
L_800E36F8:;
  c->r[4]=R32(c->r[31]+0x000003A4u); // 800E36F8
  c->r[3]=0u+0x00000289u; // 800E36FC
  c->r[5]=0u+0x00000000u; // 800E3700
  c->r[4]=c->r[4]+0x0000010Cu; // 800E3704
  c->lr=0x800E370Cu; f_8024EE50(c); // 800E3708
  c->r[0]=cntlz(c->r[3]); // 800E370C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E3710
L_800E3714:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3714
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3718
  c->lr=c->r[0]; // 800E371C
  c->r[1]=c->r[1]+0x00000010u; // 800E3720
  return; // 800E3724
}

// fn_800E3728
void f_800E3728(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3728
  c->r[0]=c->lr; // 800E372C
  c->r[7]=0u+0x803D0000u; // 800E3730
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E3734
  c->r[4]=c->r[1]+0x00000008u; // 800E3738
  {uint32_t ea=c->r[7]+0x0000372Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E373C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E3740
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E3744
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E3748
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E374C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E3750
  c->lr=0x800E3758u; f_800E3470(c); // 800E3754
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E3758
  c->lr=c->r[0]; // 800E375C
  c->r[1]=c->r[1]+0x00000020u; // 800E3760
  return; // 800E3764
}

// fn_800E3768
void f_800E3768(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3768
  c->r[0]=c->lr; // 800E376C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3770
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3774
  c->r[31]=c->r[3]|c->r[3]; // 800E3778
  c->r[4]=R8(c->r[3]+0x00000028u); // 800E377C
  cmps(c,0,(int32_t)c->r[4],1); // 800E3780
  if (crb(c,2)) { goto L_800E38C0; } // 800E3784
  if (!crb(c,0)) { goto L_800E38C0; } // 800E3788
  cmps(c,0,(int32_t)c->r[4],0); // 800E378C
  if (!crb(c,0)) { goto L_800E3798; } // 800E3790
  goto L_800E38C0; // 800E3794
L_800E3798:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800E3798
  c->r[4]=c->r[4]+0x00000001u; // 800E379C
  W8(c->r[3]+0x00000028u,c->r[4]); // 800E37A0
  cmps(c,0,(int32_t)c->r[0],0); // 800E37A4
  if (crb(c,2)) { goto L_800E37FC; } // 800E37A8
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800E37AC
  c->r[5]=0u+0x00000006u; // 800E37B0
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E37B4
  c->r[6]=0u+0x00000001u; // 800E37B8
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E37BC
  c->f[2]=c->f[1]; // 800E37C0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E37C4
  c->ctr=c->r[12]; // 800E37C8
  if (true) { c->lr=0x800E37D0u; dispatch(c,c->ctr); } // 800E37CC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E37D0
  c->r[3]=c->r[31]|c->r[31]; // 800E37D4
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E37D8
  c->r[5]=0u+0x00000007u; // 800E37DC
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E37E0
  c->r[6]=0u+0x00000001u; // 800E37E4
  c->f[2]=c->f[1]; // 800E37E8
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E37EC
  c->ctr=c->r[12]; // 800E37F0
  if (true) { c->lr=0x800E37F8u; dispatch(c,c->ctr); } // 800E37F4
  goto L_800E38C0; // 800E37F8
L_800E37FC:;
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800E37FC
  c->r[5]=0u+0x00000001u; // 800E3800
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3804
  c->r[6]=0u+0x00000001u; // 800E3808
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E380C
  c->f[2]=c->f[1]; // 800E3810
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E3814
  c->ctr=c->r[12]; // 800E3818
  if (true) { c->lr=0x800E3820u; dispatch(c,c->ctr); } // 800E381C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E3820
  c->r[3]=c->r[31]|c->r[31]; // 800E3824
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3828
  c->r[5]=0u+0x00000002u; // 800E382C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E3830
  c->r[6]=0u+0x00000001u; // 800E3834
  c->f[2]=c->f[1]; // 800E3838
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E383C
  c->ctr=c->r[12]; // 800E3840
  if (true) { c->lr=0x800E3848u; dispatch(c,c->ctr); } // 800E3844
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E3848
  c->r[3]=c->r[31]|c->r[31]; // 800E384C
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3850
  c->r[5]=0u+0x00000003u; // 800E3854
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E3858
  c->r[6]=0u+0x00000001u; // 800E385C
  c->f[2]=c->f[1]; // 800E3860
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800E3864
  c->ctr=c->r[12]; // 800E3868
  if (true) { c->lr=0x800E3870u; dispatch(c,c->ctr); } // 800E386C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E3870
  c->r[3]=c->r[31]|c->r[31]; // 800E3874
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3878
  c->r[5]=0u+0x00000004u; // 800E387C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E3880
  c->r[6]=0u+0x00000001u; // 800E3884
  c->f[2]=c->f[1]; // 800E3888
  c->r[4]=R32(c->r[31]+0x000003A0u); // 800E388C
  c->ctr=c->r[12]; // 800E3890
  if (true) { c->lr=0x800E3898u; dispatch(c,c->ctr); } // 800E3894
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E3898
  c->r[3]=c->r[31]|c->r[31]; // 800E389C
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E38A0
  c->r[5]=0u+0x00000005u; // 800E38A4
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E38A8
  c->r[6]=0u+0x00000001u; // 800E38AC
  c->f[2]=c->f[1]; // 800E38B0
  c->r[4]=R32(c->r[31]+0x000003A4u); // 800E38B4
  c->ctr=c->r[12]; // 800E38B8
  if (true) { c->lr=0x800E38C0u; dispatch(c,c->ctr); } // 800E38BC
L_800E38C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E38C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E38C4
  c->lr=c->r[0]; // 800E38C8
  c->r[1]=c->r[1]+0x00000010u; // 800E38CC
  return; // 800E38D0
}

// fn_800E38D4
void f_800E38D4(Ctx* __restrict c) {
  return; // 800E38D4
}

// fn_800E38D8
void f_800E38D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E38D8
  c->r[0]=c->lr; // 800E38DC
  cmps(c,0,(int32_t)c->r[3],0); // 800E38E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E38E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E38E8
  c->r[31]=c->r[4]|c->r[4]; // 800E38EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E38F0
  c->r[30]=c->r[3]|c->r[3]; // 800E38F4
  if (crb(c,2)) { goto L_800E3914; } // 800E38F8
  c->r[4]=0u+0x00000000u; // 800E38FC
  c->lr=0x800E3904u; f_8026A06C(c); // 800E3900
  cmps(c,0,(int32_t)c->r[31],0); // 800E3904
  if (!crb(c,1)) { goto L_800E3914; } // 800E3908
  c->r[3]=c->r[30]|c->r[30]; // 800E390C
  c->lr=0x800E3914u; f_8026A268(c); // 800E3910
L_800E3914:;
  c->r[3]=c->r[30]|c->r[30]; // 800E3914
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3918
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E391C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3920
  c->lr=c->r[0]; // 800E3924
  c->r[1]=c->r[1]+0x00000010u; // 800E3928
  return; // 800E392C
}

// fn_800E3930
void f_800E3930(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3930
  c->r[0]=c->lr; // 800E3934
  c->r[4]=0u+0x00000000u; // 800E3938
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E393C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3940
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E3944
  c->r[30]=c->r[3]|c->r[3]; // 800E3948
  c->lr=0x800E3950u; f_801F57D0(c); // 800E394C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E3950
  c->r[3]=c->r[30]|c->r[30]; // 800E3954
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E3958
  c->ctr=c->r[12]; // 800E395C
  if (true) { c->lr=0x800E3964u; dispatch(c,c->ctr); } // 800E3960
  c->r[3]=c->r[30]|c->r[30]; // 800E3964
  c->lr=0x800E396Cu; f_801F4B94(c); // 800E3968
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800E396C
  c->r[4]=0u+0x00000003u; // 800E3970
  c->r[3]=0u+0x0000004Eu; // 800E3974
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800E3978
  c->r[0]=c->r[0]|0x00000804u; // 800E397C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E3980
  W8(c->r[30]+0x0000006Du,c->r[3]); // 800E3984
  c->r[3]=c->r[30]|c->r[30]; // 800E3988
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800E398C
  c->lr=0x800E3994u; f_801F58BC(c); // 800E3990
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E3994
  c->r[31]=0u+0x00000001u; // 800E3998
  c->r[3]=0u+0x805D0000u; // 800E399C
  c->r[4]=c->r[30]+0x0000002Cu; // 800E39A0
  W8(c->r[5]+0x0000001Cu,c->r[31]); // 800E39A4
  c->r[3]=c->r[3]+0x000078B0u; // 800E39A8
  c->lr=0x800E39B0u; f_802351CC(c); // 800E39AC
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E39B0
  c->r[4]=0u+0x803A0000u; // 800E39B4
  c->r[4]=c->r[4]+0xFFFFE650u; // 800E39B8
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800E39BC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E39C0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E39C4
  c->lr=0x800E39CCu; f_80256EC4(c); // 800E39C8
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E39CC
  c->r[4]=0u+0x00000000u; // 800E39D0
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E39D4
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800E39D8
  c->f[2]=c->f[1]; // 800E39DC
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E39E0
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800E39E4
  c->r[5]=R32(c->r[5]+0x00000034u); // 800E39E8
  c->lr=0x800E39F0u; f_8024FEAC(c); // 800E39EC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E39F0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E39F4
  c->lr=0x800E39FCu; f_802501B0(c); // 800E39F8
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E39FC
  c->r[3]=c->r[30]+0x0000000Cu; // 800E3A00
  c->lr=0x800E3A08u; f_80037668(c); // 800E3A04
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800E3A08
  c->r[3]=c->r[30]|c->r[30]; // 800E3A0C
  c->lr=0x800E3A14u; f_801F56F4(c); // 800E3A10
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E3A14
  c->r[3]=c->r[30]|c->r[30]; // 800E3A18
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E3A1C
  c->ctr=c->r[12]; // 800E3A20
  if (true) { c->lr=0x800E3A28u; dispatch(c,c->ctr); } // 800E3A24
  c->r[3]=c->r[30]|c->r[30]; // 800E3A28
  c->lr=0x800E3A30u; f_800E41CC(c); // 800E3A2C
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800E3A30
  W32(c->r[30]+0x00000444u,c->r[31]); // 800E3A34
  c->lr=0x800E3A3Cu; f_8024E174(c); // 800E3A38
  W32(c->r[30]+0x00000438u,c->r[3]); // 800E3A3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3A40
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E3A44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3A48
  c->lr=c->r[0]; // 800E3A4C
  c->r[1]=c->r[1]+0x00000010u; // 800E3A50
  return; // 800E3A54
}

// fn_800E3A58
void f_800E3A58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3A58
  c->r[0]=c->lr; // 800E3A5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3A60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3A64
  c->r[31]=0u+0x805D0000u; // 800E3A68
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E3A6C
  c->r[30]=c->r[3]|c->r[3]; // 800E3A70
  c->r[3]=c->r[31]+0x00003F6Cu; // 800E3A74
  c->lr=0x800E3A7Cu; f_80045264(c); // 800E3A78
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800E3A7C
  cmpu(c,0,c->r[0],0x00000028u); // 800E3A80
  if (!crb(c,2)) { goto L_800E3AC0; } // 800E3A84
  c->r[3]=c->r[31]+0x00003F6Cu; // 800E3A88
  c->lr=0x800E3A90u; f_80037AF0(c); // 800E3A8C
  cmpu(c,0,c->r[3],c->r[30]); // 800E3A90
  if (!crb(c,2)) { goto L_800E3AC0; } // 800E3A94
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800E3A98
  cmps(c,0,(int32_t)c->r[0],101); // 800E3A9C
  if (crb(c,2)) { goto L_800E3AC0; } // 800E3AA0
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3AA4
  c->r[3]=c->r[30]|c->r[30]; // 800E3AA8
  c->r[4]=0u+0x00000065u; // 800E3AAC
  c->r[5]=0u+0x00000000u; // 800E3AB0
  c->r[6]=0u+0x00000000u; // 800E3AB4
  c->r[7]=0u+0x00000000u; // 800E3AB8
  c->lr=0x800E3AC0u; f_801F4D44(c); // 800E3ABC
L_800E3AC0:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E3AC0
  c->r[3]=c->r[30]|c->r[30]; // 800E3AC4
  c->r[12]=R32(c->r[12]+0x00000068u); // 800E3AC8
  c->ctr=c->r[12]; // 800E3ACC
  if (true) { c->lr=0x800E3AD4u; dispatch(c,c->ctr); } // 800E3AD0
  c->r[3]=c->r[30]|c->r[30]; // 800E3AD4
  c->lr=0x800E3ADCu; f_801F4C0C(c); // 800E3AD8
  c->r[3]=c->r[30]|c->r[30]; // 800E3ADC
  c->lr=0x800E3AE4u; f_800E411C(c); // 800E3AE0
  c->r[3]=c->r[30]|c->r[30]; // 800E3AE4
  c->lr=0x800E3AECu; f_801F56F4(c); // 800E3AE8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E3AEC
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800E3AF0
  cmps(c,0,(int32_t)c->r[0],0); // 800E3AF4
  if (crb(c,2)) { goto L_800E3B60; } // 800E3AF8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800E3AFC
  cmps(c,0,(int32_t)c->r[0],0); // 800E3B00
  if (crb(c,2)) { goto L_800E3B60; } // 800E3B04
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800E3B08
  cmps(c,0,(int32_t)c->r[0],0); // 800E3B0C
  if (crb(c,2)) { goto L_800E3B2C; } // 800E3B10
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800E3B14
  cmps(c,0,(int32_t)c->r[0],0); // 800E3B18
  if (!crb(c,2)) { goto L_800E3B2C; } // 800E3B1C
  c->r[4]=c->r[3]+0x000000B0u; // 800E3B20
  c->lr=0x800E3B28u; f_80250F18(c); // 800E3B24
  goto L_800E3B48; // 800E3B28
L_800E3B2C:;
  c->r[3]=c->r[3]+0x0000005Cu; // 800E3B2C
  c->r[4]=c->r[30]+0x0000002Cu; // 800E3B30
  c->lr=0x800E3B38u; f_800361A0(c); // 800E3B34
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E3B38
  c->r[4]=c->r[30]+0x00000060u; // 800E3B3C
  c->r[3]=c->r[3]+0x00000068u; // 800E3B40
  c->lr=0x800E3B48u; f_800361A0(c); // 800E3B44
L_800E3B48:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E3B48
  c->r[3]=c->r[30]|c->r[30]; // 800E3B4C
  c->lr=0x800E3B54u; f_801F58FC(c); // 800E3B50
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E3B54
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E3B58
  c->lr=0x800E3B60u; f_8025037C(c); // 800E3B5C
L_800E3B60:;
  c->r[3]=c->r[30]|c->r[30]; // 800E3B60
  c->lr=0x800E3B68u; f_800E4284(c); // 800E3B64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3B68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3B6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E3B70
  c->lr=c->r[0]; // 800E3B74
  c->r[1]=c->r[1]+0x00000010u; // 800E3B78
  return; // 800E3B7C
}

// fn_800E3B80
void f_800E3B80(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800E3B80
}

// fn_800E3B84
void f_800E3B84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3B84
  c->r[0]=c->lr; // 800E3B88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3B8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3B90
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E3B94
  c->r[30]=c->r[3]|c->r[3]; // 800E3B98
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E3B9C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E3BA0
  c->lr=0x800E3BA8u; f_802501B0(c); // 800E3BA4
  c->r[3]=c->r[30]|c->r[30]; // 800E3BA8
  c->r[4]=0u+0x00000000u; // 800E3BAC
  c->lr=0x800E3BB4u; f_801F5244(c); // 800E3BB0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E3BB4
  c->r[3]=c->r[30]+0x0000002Cu; // 800E3BB8
  c->r[4]=c->r[4]+0x0000005Cu; // 800E3BBC
  c->lr=0x800E3BC4u; f_800361A0(c); // 800E3BC0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E3BC4
  c->r[3]=c->r[30]|c->r[30]; // 800E3BC8
  c->lr=0x800E3BD0u; f_801F5418(c); // 800E3BCC
  cmps(c,0,(int32_t)c->r[3],0); // 800E3BD0
  if (!crb(c,0)) { goto L_800E3C0C; } // 800E3BD4
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800E3BD8
  c->r[3]=0u+0x00000001u; // 800E3BDC
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800E3BE0
  c->r[3]=c->r[30]|c->r[30]; // 800E3BE4
  c->r[0]=c->r[0]|0x00000080u; // 800E3BE8
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3BEC
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800E3BF0
  c->r[4]=0u+0x00000064u; // 800E3BF4
  c->r[5]=0u+0x00000000u; // 800E3BF8
  c->r[6]=0u+0x00000000u; // 800E3BFC
  c->r[7]=0u+0x00000000u; // 800E3C00
  c->lr=0x800E3C08u; f_801F4D44(c); // 800E3C04
  goto L_800E3C40; // 800E3C08
L_800E3C0C:;
  c->r[31]=0u+0x805D0000u; // 800E3C0C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800E3C10
  c->lr=0x800E3C18u; f_800447E4(c); // 800E3C14
  cmpu(c,0,c->r[3],0x00000001u); // 800E3C18
  if (!crb(c,2)) { goto L_800E3C2C; } // 800E3C1C
  c->r[0]=0u+0x00000000u; // 800E3C20
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800E3C24
  goto L_800E3C38; // 800E3C28
L_800E3C2C:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800E3C2C
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800E3C30
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800E3C34
L_800E3C38:;
  c->r[3]=c->r[30]|c->r[30]; // 800E3C38
  c->lr=0x800E3C40u; f_801F5B14(c); // 800E3C3C
L_800E3C40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3C40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3C44
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E3C48
  c->lr=c->r[0]; // 800E3C4C
  c->r[1]=c->r[1]+0x00000010u; // 800E3C50
  return; // 800E3C54
}

// fn_800E3C58
void f_800E3C58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3C58
  c->r[0]=c->lr; // 800E3C5C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800E3C60
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800E3C64
  c->r[31]=c->r[3]|c->r[3]; // 800E3C68
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E3C6C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E3C70
  c->lr=0x800E3C78u; f_802501B0(c); // 800E3C74
  c->r[3]=c->r[31]+0x00000038u; // 800E3C78
  c->r[4]=c->r[31]+0x0000002Cu; // 800E3C7C
  c->lr=0x800E3C84u; f_800361A0(c); // 800E3C80
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3C84
  c->r[3]=0u+0x80550000u; // 800E3C88
  c->r[3]=c->r[3]+0x00003D60u; // 800E3C8C
  c->r[4]=c->r[31]+0x00000038u; // 800E3C90
  c->f[2]=c->f[1]; // 800E3C94
  c->r[5]=c->r[1]+0x00000008u; // 800E3C98
  c->f[3]=c->f[1]; // 800E3C9C
  c->r[6]=0u+0x00000000u; // 800E3CA0
  c->r[7]=0u+0x00000000u; // 800E3CA4
  c->lr=0x800E3CACu; f_801D5488(c); // 800E3CA8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E3CAC
  c->r[4]=0u+0x803A0000u; // 800E3CB0
  c->r[4]=c->r[4]+0xFFFFE5C8u; // 800E3CB4
  c->r[5]=c->r[31]+0x0000002Cu; // 800E3CB8
  c->r[3]=c->r[3]+0x000000B0u; // 800E3CBC
  c->lr=0x800E3CC4u; f_80296750(c); // 800E3CC0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E3CC4
  c->r[3]=c->r[31]+0x00000060u; // 800E3CC8
  c->r[4]=c->r[4]+0x00000068u; // 800E3CCC
  c->lr=0x800E3CD4u; f_800361A0(c); // 800E3CD0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E3CD4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E3CD8
  c->lr=0x800E3CE0u; f_802501B0(c); // 800E3CDC
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800E3CE0
  c->r[0]=0u+0x00000001u; // 800E3CE4
  {uint32_t ea=c->r[2]+0xFFFFA59Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3CE8
  c->r[4]=c->r[31]+0x0000002Cu; // 800E3CEC
  {uint32_t ea=c->r[2]+0xFFFFA5A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E3CF0
  c->r[3]=c->r[3]|0x00002000u; // 800E3CF4
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800E3CF8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E3CFC
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800E3D00
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800E3D04
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800E3D08
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E3D0C
  c->r[3]=c->r[3]+0x0000005Cu; // 800E3D10
  c->lr=0x800E3D18u; f_800361A0(c); // 800E3D14
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E3D18
  c->r[4]=0u+0x00000040u; // 800E3D1C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E3D20
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800E3D24
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E3D28
  c->r[3]=c->r[3]+0x0000001Cu; // 800E3D2C
  c->lr=0x800E3D34u; f_802518A4(c); // 800E3D30
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E3D34
  c->r[4]=0u+0x00000006u; // 800E3D38
  c->r[3]=c->r[3]+0x0000001Cu; // 800E3D3C
  c->lr=0x800E3D44u; f_80251824(c); // 800E3D40
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E3D44
  c->r[3]=c->r[31]|c->r[31]; // 800E3D48
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E3D4C
  c->r[5]=0u+0x00000000u; // 800E3D50
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E3D54
  c->r[6]=0u+0x00000001u; // 800E3D58
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3D5C
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E3D60
  c->ctr=c->r[12]; // 800E3D64
  if (true) { c->lr=0x800E3D6Cu; dispatch(c,c->ctr); } // 800E3D68
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E3D6C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E3D70
  c->lr=0x800E3D78u; f_802501B0(c); // 800E3D74
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E3D78
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800E3D7C
  cmps(c,0,(int32_t)c->r[0],0); // 800E3D80
  if (crb(c,2)) { goto L_800E3E2C; } // 800E3D84
  c->r[3]=c->r[3]+0x00000068u; // 800E3D88
  c->r[4]=c->r[31]+0x00000060u; // 800E3D8C
  c->lr=0x800E3D94u; f_800361A0(c); // 800E3D90
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E3D94
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E3D98
  c->lr=0x800E3DA0u; f_8025037C(c); // 800E3D9C
  c->r[6]=R32(c->r[31]+0x00000394u); // 800E3DA0
  c->r[3]=c->r[1]+0x00000024u; // 800E3DA4
  c->r[4]=c->r[31]+0x00000060u; // 800E3DA8
  c->r[5]=c->r[1]+0x00000030u; // 800E3DAC
  c->r[6]=c->r[6]+0x000000B0u; // 800E3DB0
  c->r[7]=0u+0x00000000u; // 800E3DB4
  c->lr=0x800E3DBCu; f_8002BE64(c); // 800E3DB8
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800E3DBC
  c->r[3]=0u+0x805D0000u; // 800E3DC0
  c->r[0]=R32(c->r[31]+0x00000030u); // 800E3DC4
  c->r[3]=c->r[3]+0x00003F6Cu; // 800E3DC8
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3DCC
  c->r[4]=c->r[31]|c->r[31]; // 800E3DD0
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E3DD4
  c->r[7]=c->r[1]+0x00000018u; // 800E3DD8
  c->r[6]=0u+0x00000024u; // 800E3DDC
  c->r[8]=0u+0x00000000u; // 800E3DE0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E3DE4
  c->r[0]=R32(c->r[31]+0x00000034u); // 800E3DE8
  W32(c->r[1]+0x00000020u,c->r[0]); // 800E3DEC
  c->r[3]=R32(c->r[31]+0x00000438u); // 800E3DF0
  c->r[5]=R32(c->r[31]+0x00000394u); // 800E3DF4
  c->lr=0x800E3DFCu; f_801FA6A4(c); // 800E3DF8
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800E3DFC
  cmps(c,0,(int32_t)c->r[0],0); // 800E3E00
  if (crb(c,2)) { goto L_800E3E14; } // 800E3E04
  c->r[3]=c->r[31]+0x00000044u; // 800E3E08
  c->r[4]=c->r[31]+0x000003CCu; // 800E3E0C
  c->lr=0x800E3E14u; f_800361A0(c); // 800E3E10
L_800E3E14:;
  c->r[6]=0u+0x803A0000u; // 800E3E14
  c->r[3]=R32(c->r[31]+0x00000438u); // 800E3E18
  c->r[5]=c->r[31]+0x00000044u; // 800E3E1C
  c->r[4]=0u+0x00000000u; // 800E3E20
  c->r[6]=c->r[6]+0xFFFFE5C8u; // 800E3E24
  c->lr=0x800E3E2Cu; f_801FBEC0(c); // 800E3E28
L_800E3E2C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E3E2C
  c->r[4]=0u+0x00000000u; // 800E3E30
  c->lr=0x800E3E38u; f_801F7C00(c); // 800E3E34
  c->r[7]=0u+0x803D0000u; // 800E3E38
  {uint32_t ea=c->r[7]+0x000037D0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E3E3C
  c->r[3]=c->r[31]|c->r[31]; // 800E3E40
  c->r[4]=c->r[1]+0x0000000Cu; // 800E3E44
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E3E48
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E3E4C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800E3E50
  W32(c->r[1]+0x00000010u,c->r[5]); // 800E3E54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3E58
  c->lr=0x800E3E60u; f_800E3E74(c); // 800E3E5C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800E3E60
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800E3E64
  c->lr=c->r[0]; // 800E3E68
  c->r[1]=c->r[1]+0x00000050u; // 800E3E6C
  return; // 800E3E70
}

// fn_800E3E74
void f_800E3E74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3E74
  c->r[0]=c->lr; // 800E3E78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3E7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3E80
  c->r[31]=c->r[4]|c->r[4]; // 800E3E84
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E3E88
  c->r[30]=c->r[3]|c->r[3]; // 800E3E8C
  c->r[3]=c->r[31]|c->r[31]; // 800E3E90
  c->lr=0x800E3E98u; f_802B9FDC(c); // 800E3E94
  cmps(c,0,(int32_t)c->r[3],0); // 800E3E98
  if (crb(c,2)) { goto L_800E3EB8; } // 800E3E9C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E3EA0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E3EA4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E3EA8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E3EAC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E3EB0
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E3EB4
L_800E3EB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3EB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3EBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E3EC0
  c->lr=c->r[0]; // 800E3EC4
  c->r[1]=c->r[1]+0x00000010u; // 800E3EC8
  return; // 800E3ECC
}

// fn_800E3ED0
void f_800E3ED0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3ED0
  c->r[0]=c->lr; // 800E3ED4
  c->r[4]=0u+0x00000000u; // 800E3ED8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E3EDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E3EE0
  c->r[31]=c->r[3]|c->r[3]; // 800E3EE4
  c->r[3]=R32(c->r[3]+0x00000438u); // 800E3EE8
  c->lr=0x800E3EF0u; f_801FAF00(c); // 800E3EEC
  cmps(c,0,(int32_t)c->r[3],0); // 800E3EF0
  if (!crb(c,2)) { goto L_800E3F88; } // 800E3EF4
  c->r[3]=c->r[31]|c->r[31]; // 800E3EF8
  c->r[4]=0u+0x00000028u; // 800E3EFC
  c->lr=0x800E3F04u; f_801F5AB4(c); // 800E3F00
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800E3F04
  c->r[3]=c->r[31]+0x0000002Cu; // 800E3F08
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E3F0C
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800E3F10
  c->r[0]=c->r[0]|0x00000004u; // 800E3F14
  c->r[4]=c->r[4]+0x0000005Cu; // 800E3F18
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800E3F1C
  c->lr=0x800E3F24u; f_800361A0(c); // 800E3F20
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E3F24
  c->r[3]=c->r[31]+0x00000060u; // 800E3F28
  c->r[4]=c->r[4]+0x00000068u; // 800E3F2C
  c->lr=0x800E3F34u; f_800361A0(c); // 800E3F30
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800E3F34
  c->r[3]=0u+0x805D0000u; // 800E3F38
  c->r[0]=R32(c->r[31]+0x00000030u); // 800E3F3C
  c->r[3]=c->r[3]+0x00006CF8u; // 800E3F40
  c->r[4]=c->r[1]+0x00000008u; // 800E3F44
  c->r[5]=0u+0x00040000u; // 800E3F48
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E3F4C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E3F50
  c->r[0]=R32(c->r[31]+0x00000034u); // 800E3F54
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E3F58
  c->lr=0x800E3F60u; f_802236F8(c); // 800E3F5C
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800E3F60
  c->r[3]=c->r[31]|c->r[31]; // 800E3F64
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E3F68
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E3F6C
  c->ctr=c->r[12]; // 800E3F70
  if (true) { c->lr=0x800E3F78u; dispatch(c,c->ctr); } // 800E3F74
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E3F78
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E3F7C
  c->lr=0x800E3F84u; f_8025037C(c); // 800E3F80
  goto L_800E3FA8; // 800E3F84
L_800E3F88:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E3F88
  c->r[3]=c->r[31]+0x0000002Cu; // 800E3F8C
  c->r[4]=c->r[4]+0x0000005Cu; // 800E3F90
  c->lr=0x800E3F98u; f_800361A0(c); // 800E3F94
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E3F98
  c->r[3]=c->r[31]+0x00000060u; // 800E3F9C
  c->r[4]=c->r[4]+0x00000068u; // 800E3FA0
  c->lr=0x800E3FA8u; f_800361A0(c); // 800E3FA4
L_800E3FA8:;
  c->r[3]=c->r[31]|c->r[31]; // 800E3FA8
  c->r[4]=0u+0x00000000u; // 800E3FAC
  c->lr=0x800E3FB4u; f_801F7C00(c); // 800E3FB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E3FB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E3FB8
  c->lr=c->r[0]; // 800E3FBC
  c->r[1]=c->r[1]+0x00000020u; // 800E3FC0
  return; // 800E3FC4
}

// fn_800E3FC8
void f_800E3FC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3FC8
  c->r[0]=c->lr; // 800E3FCC
  c->r[5]=0u+0x00000000u; // 800E3FD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3FD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3FD8
  c->r[31]=c->r[3]|c->r[3]; // 800E3FDC
  c->r[3]=0u+0x000004C3u; // 800E3FE0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E3FE4
  c->r[4]=c->r[4]+0x0000010Cu; // 800E3FE8
  c->lr=0x800E3FF0u; f_8024EE50(c); // 800E3FEC
  cmps(c,0,(int32_t)c->r[3],0); // 800E3FF0
  if (crb(c,2)) { goto L_800E4000; } // 800E3FF4
  c->r[3]=0u+0x00000000u; // 800E3FF8
  goto L_800E400C; // 800E3FFC
L_800E4000:;
  c->r[3]=c->r[31]+0x00000210u; // 800E4000
  c->r[4]=0u+0x000000E1u; // 800E4004
  c->lr=0x800E400Cu; f_80221630(c); // 800E4008
L_800E400C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E400C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4010
  c->lr=c->r[0]; // 800E4014
  c->r[1]=c->r[1]+0x00000010u; // 800E4018
  return; // 800E401C
}

// fn_800E4020
void f_800E4020(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4020
  c->r[0]=c->lr; // 800E4024
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E4028
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E402C
  c->r[31]=c->r[3]|c->r[3]; // 800E4030
  c->lr=0x800E4038u; f_801F4F28(c); // 800E4034
  c->r[3]=R32(c->r[31]+0x000003C0u); // 800E4038
  cmps(c,0,(int32_t)c->r[3],101); // 800E403C
  if (crb(c,2)) { goto L_800E4090; } // 800E4040
  if (!crb(c,0)) { goto L_800E40C8; } // 800E4044
  cmps(c,0,(int32_t)c->r[3],100); // 800E4048
  if (!crb(c,0)) { goto L_800E4054; } // 800E404C
  goto L_800E40C8; // 800E4050
L_800E4054:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800E4054
  cmps(c,0,(int32_t)c->r[0],100); // 800E4058
  if (crb(c,2)) { goto L_800E40C8; } // 800E405C
  W16(c->r[31]+0x000003BCu,c->r[3]); // 800E4060
  c->r[7]=0u+0x803D0000u; // 800E4064
  c->r[3]=c->r[31]|c->r[31]; // 800E4068
  c->r[4]=c->r[1]+0x00000014u; // 800E406C
  {uint32_t ea=c->r[7]+0x000037DCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E4070
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E4074
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E4078
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E407C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E4080
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E4084
  c->lr=0x800E408Cu; f_800E3E74(c); // 800E4088
  goto L_800E40C8; // 800E408C
L_800E4090:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800E4090
  cmps(c,0,(int32_t)c->r[0],101); // 800E4094
  if (crb(c,2)) { goto L_800E40C8; } // 800E4098
  W16(c->r[31]+0x000003BCu,c->r[3]); // 800E409C
  c->r[7]=0u+0x803D0000u; // 800E40A0
  c->r[3]=c->r[31]|c->r[31]; // 800E40A4
  c->r[4]=c->r[1]+0x00000008u; // 800E40A8
  {uint32_t ea=c->r[7]+0x000037E8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E40AC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E40B0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E40B4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E40B8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E40BC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E40C0
  c->lr=0x800E40C8u; f_800E3E74(c); // 800E40C4
L_800E40C8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E40C8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E40CC
  c->lr=c->r[0]; // 800E40D0
  c->r[1]=c->r[1]+0x00000030u; // 800E40D4
  return; // 800E40D8
}

// fn_800E40DC
void f_800E40DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E40DC
  c->r[0]=c->lr; // 800E40E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E40E4
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800E40E8
  c->r[5]=c->r[3]+c->r[0]; // 800E40EC
  c->r[3]=c->r[4]|c->r[4]; // 800E40F0
  c->r[4]=R32(c->r[5]+0x00000394u); // 800E40F4
  c->r[5]=0u+0x00000000u; // 800E40F8
  c->lr=0x800E4100u; f_80250BF4(c); // 800E40FC
  c->r[0]=cntlz(c->r[3]); // 800E4100
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E4104
  c->r[3]=0u-c->r[0]; // 800E4108
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E410C
  c->lr=c->r[0]; // 800E4110
  c->r[1]=c->r[1]+0x00000010u; // 800E4114
  return; // 800E4118
}

// fn_800E411C
void f_800E411C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E411C
  c->r[0]=c->lr; // 800E4120
  c->r[5]=0u+0x80620000u; // 800E4124
  c->r[4]=0u+0x00000002u; // 800E4128
  W32(c->r[1]+0x00000094u,c->r[0]); // 800E412C
  c->r[5]=c->r[5]+0x00007688u; // 800E4130
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800E4134
  W32(c->r[1]+0x00000088u,c->r[30]); // 800E4138
  c->r[30]=c->r[3]|c->r[3]; // 800E413C
  c->r[3]=R32(c->r[5]+0x00000014u); // 800E4140
  c->lr=0x800E4148u; f_80037670(c); // 800E4144
  cmps(c,0,(int32_t)c->r[3],0); // 800E4148
  if (!crb(c,2)) { goto L_800E41B4; } // 800E414C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E4150
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800E4154
  cmps(c,0,(int32_t)c->r[0],0); // 800E4158
  if (!crb(c,2)) { goto L_800E41B4; } // 800E415C
  {uint32_t ea=c->r[2]+0xFFFFA5A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4160
  c->r[3]=c->r[1]+0x00000014u; // 800E4164
  {uint32_t ea=c->r[2]+0xFFFFA5ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4168
  c->r[4]=c->r[30]+0x0000002Cu; // 800E416C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800E4170
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800E4174
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 800E4178
  c->lr=0x800E4180u; f_800361A0(c); // 800E417C
  c->r[31]=0u+0x80550000u; // 800E4180
  c->r[5]=c->r[30]|c->r[30]; // 800E4184
  c->r[31]=c->r[31]+0x00003D60u; // 800E4188
  c->r[6]=c->r[1]+0x00000014u; // 800E418C
  c->r[3]=c->r[31]+0x00000010u; // 800E4190
  c->r[7]=c->r[1]+0x00000008u; // 800E4194
  c->r[8]=c->r[30]+0x00000060u; // 800E4198
  c->r[9]=c->r[1]+0x00000020u; // 800E419C
  c->r[4]=0u+0x000001FFu; // 800E41A0
  c->lr=0x800E41A8u; f_80226578(c); // 800E41A4
  c->r[3]=c->r[31]+0x00000010u; // 800E41A8
  c->r[4]=c->r[1]+0x00000020u; // 800E41AC
  c->lr=0x800E41B4u; f_80226D68(c); // 800E41B0
L_800E41B4:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800E41B4
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800E41B8
  c->r[30]=R32(c->r[1]+0x00000088u); // 800E41BC
  c->lr=c->r[0]; // 800E41C0
  c->r[1]=c->r[1]+0x00000090u; // 800E41C4
  return; // 800E41C8
}

// fn_800E41CC
void f_800E41CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E41CC
  c->r[0]=c->lr; // 800E41D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E41D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E41D8
  c->r[31]=c->r[3]|c->r[3]; // 800E41DC
  c->r[3]=c->r[3]+0x00000210u; // 800E41E0
  c->lr=0x800E41E8u; f_8004BAD4(c); // 800E41E4
  cmps(c,0,(int32_t)c->r[3],0); // 800E41E8
  if (crb(c,2)) { goto L_800E4270; } // 800E41EC
  c->r[0]=R32(c->r[31]+0x00000210u); // 800E41F0
  c->r[4]=c->r[31]|c->r[31]; // 800E41F4
  c->r[3]=c->r[31]+0x00000210u; // 800E41F8
  c->r[0]=c->r[0]|0xAA800000u; // 800E41FC
  W32(c->r[31]+0x00000210u,c->r[0]); // 800E4200
  c->lr=0x800E4208u; f_80043E44(c); // 800E4204
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4208
  c->r[3]=c->r[31]+0x00000210u; // 800E420C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E4210
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E4214
  c->lr=0x800E421Cu; f_80043E34(c); // 800E4218
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E421C
  c->r[4]=0u+0x803A0000u; // 800E4220
  c->r[4]=c->r[4]+0xFFFFE650u; // 800E4224
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E4228
  c->r[4]=c->r[4]+0x00000009u; // 800E422C
  c->lr=0x800E4234u; f_80256EC4(c); // 800E4230
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E4234
  c->r[5]=c->r[3]|c->r[3]; // 800E4238
  c->r[3]=c->r[31]+0x00000210u; // 800E423C
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800E4240
  c->lr=0x800E4248u; f_8004BAC8(c); // 800E4244
  {uint32_t ea=c->r[2]+0xFFFFA5B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4248
  c->r[3]=c->r[31]+0x00000210u; // 800E424C
  c->f[2]=c->f[1]; // 800E4250
  c->f[3]=c->f[1]; // 800E4254
  c->lr=0x800E425Cu; f_80043E24(c); // 800E4258
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E425C
  c->r[3]=c->r[31]+0x00000210u; // 800E4260
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E4264
  c->f[3]=c->f[1]; // 800E4268
  c->lr=0x800E4270u; f_8005D58C(c); // 800E426C
L_800E4270:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4270
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4274
  c->lr=c->r[0]; // 800E4278
  c->r[1]=c->r[1]+0x00000010u; // 800E427C
  return; // 800E4280
}

// fn_800E4284
void f_800E4284(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4284
  c->r[0]=c->lr; // 800E4288
  W32(c->r[1]+0x00000094u,c->r[0]); // 800E428C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800E4290
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800E4294
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800E4298
  c->r[31]=0u+0x803A0000u; // 800E429C
  c->r[31]=c->r[31]+0xFFFFE5C8u; // 800E42A0
  W32(c->r[1]+0x00000078u,c->r[30]); // 800E42A4
  c->r[30]=c->r[3]|c->r[3]; // 800E42A8
  c->r[3]=c->r[3]+0x00000210u; // 800E42AC
  c->lr=0x800E42B4u; f_80221698(c); // 800E42B0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E42B4
  cmps(c,0,(int32_t)c->r[3],0); // 800E42B8
  if (crb(c,2)) { goto L_800E42DC; } // 800E42BC
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800E42C0
  cmps(c,0,(int32_t)c->r[0],0); // 800E42C4
  if (crb(c,2)) { goto L_800E42DC; } // 800E42C8
  c->r[0]=R32(c->r[30]+0x00000210u); // 800E42CC
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800E42D0
  W32(c->r[30]+0x00000210u,c->r[0]); // 800E42D4
  goto L_800E4518; // 800E42D8
L_800E42DC:;
  c->r[0]=R32(c->r[30]+0x00000210u); // 800E42DC
  c->r[7]=c->r[31]+0x0000003Cu; // 800E42E0
  c->r[6]=c->r[31]+0x00000048u; // 800E42E4
  c->r[3]=c->r[1]+0x00000020u; // 800E42E8
  c->r[0]=c->r[0]|0x80000000u; // 800E42EC
  c->r[4]=c->r[1]+0x00000014u; // 800E42F0
  W32(c->r[30]+0x00000210u,c->r[0]); // 800E42F4
  c->r[5]=c->r[1]+0x00000038u; // 800E42F8
  c->r[11]=R32(c->r[31]+0x0000003Cu); // 800E42FC
  c->r[10]=R32(c->r[7]+0x00000004u); // 800E4300
  c->r[9]=R32(c->r[7]+0x00000008u); // 800E4304
  c->r[8]=R32(c->r[31]+0x00000048u); // 800E4308
  c->r[7]=R32(c->r[6]+0x00000004u); // 800E430C
  c->r[0]=R32(c->r[6]+0x00000008u); // 800E4310
  W32(c->r[1]+0x00000020u,c->r[11]); // 800E4314
  W32(c->r[1]+0x00000024u,c->r[10]); // 800E4318
  {uint32_t ea=c->r[1]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 800E431C
  W32(c->r[1]+0x00000028u,c->r[9]); // 800E4320
  {uint32_t ea=c->r[1]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 800E4324
  W32(c->r[1]+0x00000014u,c->r[8]); // 800E4328
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E432C
  W32(c->r[1]+0x00000018u,c->r[7]); // 800E4330
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E4334
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E4338
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E433C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E4340
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4344
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4348
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 800E434C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800E4350
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E4354
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4358
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800E435C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800E4360
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E4364
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4368
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800E436C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800E4370
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E4374
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4378
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800E437C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800E4380
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E4384
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4388
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800E438C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800E4390
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E4394
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4398
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800E439C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800E43A0
  c->lr=0x800E43A8u; f_80296A70(c); // 800E43A4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E43A8
  c->r[4]=0u+0x803A0000u; // 800E43AC
  c->r[4]=c->r[4]+0xFFFFE650u; // 800E43B0
  c->r[5]=c->r[1]+0x00000048u; // 800E43B4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E43B8
  c->r[4]=c->r[4]+0x00000009u; // 800E43BC
  c->r[6]=0u+0x00000001u; // 800E43C0
  c->lr=0x800E43C8u; f_80257018(c); // 800E43C4
  c->r[4]=c->r[1]+0x00000020u; // 800E43C8
  c->r[3]=c->r[1]+0x00000048u; // 800E43CC
  c->r[5]=c->r[4]|c->r[4]; // 800E43D0
  c->lr=0x800E43D8u; f_80296750(c); // 800E43D4
  c->r[4]=c->r[1]+0x00000014u; // 800E43D8
  c->r[3]=c->r[1]+0x00000048u; // 800E43DC
  c->r[5]=c->r[4]|c->r[4]; // 800E43E0
  c->lr=0x800E43E8u; f_80296750(c); // 800E43E4
  c->r[3]=c->r[1]+0x00000020u; // 800E43E8
  c->r[4]=c->r[1]+0x00000014u; // 800E43EC
  c->r[5]=c->r[1]+0x0000002Cu; // 800E43F0
  c->lr=0x800E43F8u; f_80296A70(c); // 800E43F4
  c->r[4]=c->r[31]+0x00000054u; // 800E43F8
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E43FC
  c->r[6]=R32(c->r[31]+0x00000054u); // 800E4400
  c->r[3]=c->r[1]+0x00000038u; // 800E4404
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E4408
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E440C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800E4410
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E4414
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E4418
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E441C
  c->lr=0x800E4424u; f_80296B0C(c); // 800E4420
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E4424
  fcmp(c,0,c->f[3],c->f[1]); // 800E4428
  if (crb(c,2)) { goto L_800E449C; } // 800E442C
  c->r[3]=c->r[1]+0x00000038u; // 800E4430
  c->lr=0x800E4438u; f_80296B0C(c); // 800E4434
  c->f[31]=c->f[1]; // 800E4438
  c->r[3]=c->r[1]+0x0000002Cu; // 800E443C
  c->lr=0x800E4444u; f_80296B0C(c); // 800E4440
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[31]); // 800E4444
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4448
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E444C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E4450
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800E4454
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800E4458
  c->lr=0x800E4460u; f_8005C22C(c); // 800E445C
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4460
  fcmp(c,0,c->f[1],c->f[0]); // 800E4464
  if (!crb(c,1)) { goto L_800E4480; } // 800E4468
  {uint32_t ea=c->r[2]+0xFFFFA5B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E446C
  {uint32_t ea=c->r[2]+0xFFFFA5B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4470
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800E4474
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 800E4478
  goto L_800E44AC; // 800E447C
L_800E4480:;
  {uint32_t ea=c->r[2]+0xFFFFA5B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4480
  {uint32_t ea=c->r[2]+0xFFFFA5B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E4484
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800E4488
  {uint32_t ea=c->r[2]+0xFFFFA5BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E448C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800E4490
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 800E4494
  goto L_800E44AC; // 800E4498
L_800E449C:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E449C
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E44A0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800E44A4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800E44A8
L_800E44AC:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E44AC
  {uint32_t ea=c->r[2]+0xFFFFA5C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E44B0
  fcmp(c,0,c->f[1],c->f[0]); // 800E44B4
  if (!crb(c,0)) { goto L_800E44C0; } // 800E44B8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800E44BC
L_800E44C0:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E44C0
  c->r[3]=c->r[30]+0x00000210u; // 800E44C4
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E44C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E44CC
  {uint32_t ea=c->r[4]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E44D0
  c->f[3]=c->f[1]; // 800E44D4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800E44D8
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[0]); // 800E44DC
  {uint32_t ea=c->r[4]+0x00000078u; c->f[5]=c->ps1[5]=RF32(ea);} // 800E44E0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E44E4
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E44E8
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 800E44EC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[7]);} // 800E44F0
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800E44F4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 800E44F8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800E44FC
  c->lr=0x800E4504u; f_8005D58C(c); // 800E4500
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4504
  c->r[3]=c->r[30]+0x00000210u; // 800E4508
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E450C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E4510
  c->lr=0x800E4518u; f_80043E24(c); // 800E4514
L_800E4518:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800E4518
  c->r[0]=R32(c->r[1]+0x00000094u); // 800E451C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800E4520
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800E4524
  c->r[30]=R32(c->r[1]+0x00000078u); // 800E4528
  c->lr=c->r[0]; // 800E452C
  c->r[1]=c->r[1]+0x00000090u; // 800E4530
  return; // 800E4534
}

// fn_800E4538
void f_800E4538(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4538
  c->r[0]=c->lr; // 800E453C
  cmps(c,0,(int32_t)c->r[3],0); // 800E4540
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4544
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4548
  c->r[31]=c->r[4]|c->r[4]; // 800E454C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E4550
  c->r[30]=c->r[3]|c->r[3]; // 800E4554
  if (crb(c,2)) { goto L_800E4574; } // 800E4558
  c->r[4]=0u+0x00000000u; // 800E455C
  c->lr=0x800E4564u; f_8026A06C(c); // 800E4560
  cmps(c,0,(int32_t)c->r[31],0); // 800E4564
  if (!crb(c,1)) { goto L_800E4574; } // 800E4568
  c->r[3]=c->r[30]|c->r[30]; // 800E456C
  c->lr=0x800E4574u; f_8026A268(c); // 800E4570
L_800E4574:;
  c->r[3]=c->r[30]|c->r[30]; // 800E4574
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4578
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E457C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4580
  c->lr=c->r[0]; // 800E4584
  c->r[1]=c->r[1]+0x00000010u; // 800E4588
  return; // 800E458C
}

// fn_800E4590
void f_800E4590(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4590
  c->r[0]=c->lr; // 800E4594
  c->r[4]=0u+0x00000000u; // 800E4598
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E459C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E45A0
  c->r[31]=c->r[3]|c->r[3]; // 800E45A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E45A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E45AC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800E45B0
  c->lr=0x800E45B8u; f_801F57D0(c); // 800E45B4
  c->r[3]=c->r[31]|c->r[31]; // 800E45B8
  c->r[4]=0u+0x00000001u; // 800E45BC
  c->lr=0x800E45C4u; f_801F57D0(c); // 800E45C0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E45C4
  c->r[3]=c->r[31]|c->r[31]; // 800E45C8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E45CC
  c->ctr=c->r[12]; // 800E45D0
  if (true) { c->lr=0x800E45D8u; dispatch(c,c->ctr); } // 800E45D4
  c->r[3]=c->r[31]|c->r[31]; // 800E45D8
  c->lr=0x800E45E0u; f_801F4B94(c); // 800E45DC
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800E45E0
  c->r[4]=0u+0x00000003u; // 800E45E4
  c->r[3]=0u+0x0000004Fu; // 800E45E8
  W8(c->r[31]+0x0000006Cu,c->r[4]); // 800E45EC
  c->r[0]=c->r[0]|0x00000804u; // 800E45F0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E45F4
  W8(c->r[31]+0x0000006Du,c->r[3]); // 800E45F8
  c->r[3]=c->r[31]|c->r[31]; // 800E45FC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800E4600
  c->lr=0x800E4608u; f_801F58BC(c); // 800E4604
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4608
  c->r[28]=0u+0x00000001u; // 800E460C
  c->r[29]=0u+0x805D0000u; // 800E4610
  c->r[4]=c->r[31]+0x0000002Cu; // 800E4614
  W8(c->r[3]+0x0000001Cu,c->r[28]); // 800E4618
  c->r[3]=c->r[29]+0x000078B0u; // 800E461C
  c->lr=0x800E4624u; f_802351CC(c); // 800E4620
  c->r[5]=R32(c->r[31]+0x00000394u); // 800E4624
  c->r[30]=0u+0x803A0000u; // 800E4628
  c->r[4]=c->r[30]+0xFFFFE6F0u; // 800E462C
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800E4630
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4634
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E4638
  c->lr=0x800E4640u; f_80256EC4(c); // 800E463C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800E4640
  c->r[4]=0u+0x00000000u; // 800E4644
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4648
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800E464C
  c->f[2]=c->f[1]; // 800E4650
  c->r[5]=R32(c->r[31]+0x00000394u); // 800E4654
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800E4658
  c->r[5]=R32(c->r[5]+0x00000034u); // 800E465C
  c->lr=0x800E4664u; f_8024FEAC(c); // 800E4660
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4664
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E4668
  c->lr=0x800E4670u; f_802501B0(c); // 800E466C
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E4670
  c->r[3]=c->r[31]|c->r[31]; // 800E4674
  c->lr=0x800E467Cu; f_801F58BC(c); // 800E4678
  c->r[5]=R32(c->r[31]+0x00000398u); // 800E467C
  c->r[0]=0u+0x00000000u; // 800E4680
  c->r[3]=c->r[29]+0x000078B0u; // 800E4684
  c->r[4]=c->r[31]+0x0000002Cu; // 800E4688
  W8(c->r[5]+0x0000001Cu,c->r[0]); // 800E468C
  c->lr=0x800E4694u; f_802351CC(c); // 800E4690
  c->r[5]=R32(c->r[31]+0x00000398u); // 800E4694
  c->r[4]=c->r[30]+0xFFFFE6F0u; // 800E4698
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800E469C
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E46A0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E46A4
  c->lr=0x800E46ACu; f_80256EC4(c); // 800E46A8
  c->r[5]=R32(c->r[31]+0x00000398u); // 800E46AC
  c->r[4]=0u+0x00000000u; // 800E46B0
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E46B4
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800E46B8
  c->f[2]=c->f[1]; // 800E46BC
  c->r[5]=R32(c->r[31]+0x00000398u); // 800E46C0
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800E46C4
  c->r[5]=R32(c->r[5]+0x00000034u); // 800E46C8
  c->lr=0x800E46D0u; f_8024FEAC(c); // 800E46CC
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E46D0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E46D4
  c->lr=0x800E46DCu; f_802501B0(c); // 800E46D8
  c->r[0]=0u+0x000000FFu; // 800E46DC
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E46E0
  W8(c->r[31]+0x00000074u,c->r[0]); // 800E46E4
  c->r[3]=c->r[31]+0x0000000Cu; // 800E46E8
  W8(c->r[31]+0x00000075u,c->r[0]); // 800E46EC
  c->lr=0x800E46F4u; f_80037668(c); // 800E46F0
  W8(c->r[31]+0x0000006Fu,c->r[28]); // 800E46F4
  c->r[3]=c->r[31]|c->r[31]; // 800E46F8
  c->lr=0x800E4700u; f_801F56F4(c); // 800E46FC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E4700
  c->r[3]=c->r[31]|c->r[31]; // 800E4704
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E4708
  c->ctr=c->r[12]; // 800E470C
  if (true) { c->lr=0x800E4714u; dispatch(c,c->ctr); } // 800E4710
  c->r[3]=c->r[31]|c->r[31]; // 800E4714
  c->lr=0x800E471Cu; f_800E4F90(c); // 800E4718
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)112); // 800E471C
  W32(c->r[31]+0x00000444u,c->r[28]); // 800E4720
  c->lr=0x800E4728u; f_8024E174(c); // 800E4724
  W32(c->r[31]+0x00000438u,c->r[3]); // 800E4728
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E472C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E4730
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E4734
  c->r[28]=R32(c->r[1]+0x00000010u); // 800E4738
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E473C
  c->lr=c->r[0]; // 800E4740
  c->r[1]=c->r[1]+0x00000020u; // 800E4744
  return; // 800E4748
}

// fn_800E474C
void f_800E474C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E474C
  c->r[0]=c->lr; // 800E4750
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E4754
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E4758
  c->r[31]=c->r[3]|c->r[3]; // 800E475C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E4760
  c->r[30]=0u+0x805D0000u; // 800E4764
  c->r[3]=c->r[30]+0x00003F6Cu; // 800E4768
  c->lr=0x800E4770u; f_80045264(c); // 800E476C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800E4770
  cmpu(c,0,c->r[0],0x00000036u); // 800E4774
  if (!crb(c,2)) { goto L_800E47B4; } // 800E4778
  c->r[3]=c->r[30]+0x00003F6Cu; // 800E477C
  c->lr=0x800E4784u; f_80037AF0(c); // 800E4780
  cmpu(c,0,c->r[3],c->r[31]); // 800E4784
  if (!crb(c,2)) { goto L_800E47B4; } // 800E4788
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800E478C
  cmps(c,0,(int32_t)c->r[0],101); // 800E4790
  if (crb(c,2)) { goto L_800E47B4; } // 800E4794
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4798
  c->r[3]=c->r[31]|c->r[31]; // 800E479C
  c->r[4]=0u+0x00000065u; // 800E47A0
  c->r[5]=0u+0x00000000u; // 800E47A4
  c->r[6]=0u+0x00000000u; // 800E47A8
  c->r[7]=0u+0x00000000u; // 800E47AC
  c->lr=0x800E47B4u; f_801F4D44(c); // 800E47B0
L_800E47B4:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E47B4
  c->r[3]=c->r[31]|c->r[31]; // 800E47B8
  c->r[12]=R32(c->r[12]+0x00000068u); // 800E47BC
  c->ctr=c->r[12]; // 800E47C0
  if (true) { c->lr=0x800E47C8u; dispatch(c,c->ctr); } // 800E47C4
  c->r[3]=c->r[31]|c->r[31]; // 800E47C8
  c->lr=0x800E47D0u; f_801F4C0C(c); // 800E47CC
  c->r[3]=c->r[31]|c->r[31]; // 800E47D0
  c->lr=0x800E47D8u; f_800E4EDC(c); // 800E47D4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E47D8
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800E47DC
  cmps(c,0,(int32_t)c->r[0],0); // 800E47E0
  if (crb(c,2)) { goto L_800E4804; } // 800E47E4
  {uint32_t ea=c->r[2]+0xFFFFA5D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E47E8
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800E47EC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E47F0
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800E47F4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E47F8
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 800E47FC
  goto L_800E481C; // 800E4800
L_800E4804:;
  {uint32_t ea=c->r[2]+0xFFFFA5D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4804
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800E4808
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E480C
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800E4810
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4814
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 800E4818
L_800E481C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E481C
  c->lr=0x800E4824u; f_801F56F4(c); // 800E4820
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E4824
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 800E4828
  cmps(c,0,(int32_t)c->r[0],0); // 800E482C
  if (crb(c,2)) { goto L_800E490C; } // 800E4830
  c->r[5]=R8(c->r[31]+0x00000074u); // 800E4834
  cmpu(c,0,c->r[5],0x000000FFu); // 800E4838
  if (crb(c,2)) { goto L_800E487C; } // 800E483C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E4840
  c->r[3]=c->r[31]|c->r[31]; // 800E4844
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4848
  c->r[6]=0u+0x00000001u; // 800E484C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E4850
  c->f[2]=c->f[1]; // 800E4854
  c->ctr=c->r[12]; // 800E4858
  if (true) { c->lr=0x800E4860u; dispatch(c,c->ctr); } // 800E485C
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E4860
  c->r[4]=0u+0x00000001u; // 800E4864
  c->r[0]=0u+0x000000FFu; // 800E4868
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 800E486C
  c->r[3]=R8(c->r[31]+0x00000074u); // 800E4870
  W8(c->r[31]+0x00000075u,c->r[3]); // 800E4874
  W8(c->r[31]+0x00000074u,c->r[0]); // 800E4878
L_800E487C:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E487C
  c->r[0]=R8(c->r[4]+0x0000001Cu); // 800E4880
  cmps(c,0,(int32_t)c->r[0],0); // 800E4884
  if (crb(c,2)) { goto L_800E490C; } // 800E4888
  c->r[6]=R32(c->r[31]+0x00000394u); // 800E488C
  c->r[3]=c->r[4]+0x0000005Cu; // 800E4890
  c->r[4]=c->r[4]+0x00000068u; // 800E4894
  c->r[5]=c->r[1]+0x00000008u; // 800E4898
  c->r[6]=c->r[6]+0x000000B0u; // 800E489C
  c->r[7]=0u+0x00000002u; // 800E48A0
  c->lr=0x800E48A8u; f_8002BE64(c); // 800E48A4
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E48A8
  {uint32_t ea=c->r[2]+0xFFFFA5DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E48AC
  {uint32_t ea=c->r[3]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E48B0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800E48B4
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 800E48B8
  c->r[0]=R8(c->r[31]+0x00000075u); // 800E48BC
  cmps(c,0,(int32_t)c->r[0],0); // 800E48C0
  if (crb(c,2)) { goto L_800E48F4; } // 800E48C4
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E48C8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E48CC
  c->lr=0x800E48D4u; f_802501B0(c); // 800E48D0
  cmps(c,0,(int32_t)c->r[3],0); // 800E48D4
  if (crb(c,2)) { goto L_800E4900; } // 800E48D8
  c->r[0]=0u+0x000000FFu; // 800E48DC
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E48E0
  W8(c->r[31]+0x00000075u,c->r[0]); // 800E48E4
  c->r[0]=0u+0x00000000u; // 800E48E8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800E48EC
  goto L_800E4900; // 800E48F0
L_800E48F4:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E48F4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E48F8
  c->lr=0x800E4900u; f_802501B0(c); // 800E48FC
L_800E4900:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E4900
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E4904
  c->lr=0x800E490Cu; f_8025037C(c); // 800E4908
L_800E490C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E490C
  c->lr=0x800E4914u; f_800E5048(c); // 800E4910
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E4914
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E4918
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E491C
  c->lr=c->r[0]; // 800E4920
  c->r[1]=c->r[1]+0x00000020u; // 800E4924
  return; // 800E4928
}

// fn_800E492C
void f_800E492C(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800E492C
}

// fn_800E4930
void f_800E4930(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4930
  c->r[0]=c->lr; // 800E4934
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4938
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E493C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E4940
  c->r[30]=c->r[3]|c->r[3]; // 800E4944
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E4948
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E494C
  c->lr=0x800E4954u; f_802501B0(c); // 800E4950
  c->r[3]=c->r[30]|c->r[30]; // 800E4954
  c->r[4]=0u+0x00000000u; // 800E4958
  c->lr=0x800E4960u; f_801F5244(c); // 800E495C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E4960
  c->r[3]=c->r[30]+0x0000002Cu; // 800E4964
  c->r[4]=c->r[4]+0x0000005Cu; // 800E4968
  c->lr=0x800E4970u; f_800361A0(c); // 800E496C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E4970
  c->r[3]=c->r[30]|c->r[30]; // 800E4974
  c->lr=0x800E497Cu; f_801F5418(c); // 800E4978
  cmps(c,0,(int32_t)c->r[3],0); // 800E497C
  if (!crb(c,0)) { goto L_800E49B8; } // 800E4980
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800E4984
  c->r[3]=0u+0x00000001u; // 800E4988
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800E498C
  c->r[3]=c->r[30]|c->r[30]; // 800E4990
  c->r[0]=c->r[0]|0x00000080u; // 800E4994
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4998
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800E499C
  c->r[4]=0u+0x00000064u; // 800E49A0
  c->r[5]=0u+0x00000000u; // 800E49A4
  c->r[6]=0u+0x00000000u; // 800E49A8
  c->r[7]=0u+0x00000000u; // 800E49AC
  c->lr=0x800E49B4u; f_801F4D44(c); // 800E49B0
  goto L_800E49EC; // 800E49B4
L_800E49B8:;
  c->r[31]=0u+0x805D0000u; // 800E49B8
  c->r[3]=c->r[31]+0x00003F6Cu; // 800E49BC
  c->lr=0x800E49C4u; f_800447E4(c); // 800E49C0
  cmpu(c,0,c->r[3],0x00000001u); // 800E49C4
  if (!crb(c,2)) { goto L_800E49D8; } // 800E49C8
  c->r[0]=0u+0x00000000u; // 800E49CC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800E49D0
  goto L_800E49E4; // 800E49D4
L_800E49D8:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800E49D8
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800E49DC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800E49E0
L_800E49E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800E49E4
  c->lr=0x800E49ECu; f_801F5B14(c); // 800E49E8
L_800E49EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E49EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E49F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E49F4
  c->lr=c->r[0]; // 800E49F8
  c->r[1]=c->r[1]+0x00000010u; // 800E49FC
  return; // 800E4A00
}

// fn_800E4A04
void f_800E4A04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4A04
  c->r[0]=c->lr; // 800E4A08
  W32(c->r[1]+0x00000054u,c->r[0]); // 800E4A0C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800E4A10
  c->r[31]=c->r[3]|c->r[3]; // 800E4A14
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E4A18
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E4A1C
  c->lr=0x800E4A24u; f_802501B0(c); // 800E4A20
  c->r[3]=c->r[31]+0x00000038u; // 800E4A24
  c->r[4]=c->r[31]+0x0000002Cu; // 800E4A28
  c->lr=0x800E4A30u; f_800361A0(c); // 800E4A2C
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4A30
  c->r[3]=0u+0x80550000u; // 800E4A34
  c->r[3]=c->r[3]+0x00003D60u; // 800E4A38
  c->r[4]=c->r[31]+0x00000038u; // 800E4A3C
  c->f[2]=c->f[1]; // 800E4A40
  c->r[5]=c->r[1]+0x00000008u; // 800E4A44
  c->f[3]=c->f[1]; // 800E4A48
  c->r[6]=0u+0x00000000u; // 800E4A4C
  c->r[7]=0u+0x00000000u; // 800E4A50
  c->lr=0x800E4A58u; f_801D5488(c); // 800E4A54
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4A58
  c->r[4]=0u+0x803A0000u; // 800E4A5C
  c->r[4]=c->r[4]+0xFFFFE668u; // 800E4A60
  c->r[5]=c->r[31]+0x0000002Cu; // 800E4A64
  c->r[3]=c->r[3]+0x000000B0u; // 800E4A68
  c->lr=0x800E4A70u; f_80296750(c); // 800E4A6C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E4A70
  c->r[3]=c->r[31]+0x00000060u; // 800E4A74
  c->r[4]=c->r[4]+0x00000068u; // 800E4A78
  c->lr=0x800E4A80u; f_800361A0(c); // 800E4A7C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4A80
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E4A84
  c->lr=0x800E4A8Cu; f_802501B0(c); // 800E4A88
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800E4A8C
  c->r[0]=0u+0x00000001u; // 800E4A90
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4A94
  c->r[4]=c->r[31]+0x0000002Cu; // 800E4A98
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4A9C
  c->r[3]=c->r[3]|0x00002000u; // 800E4AA0
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800E4AA4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4AA8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800E4AAC
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800E4AB0
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800E4AB4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4AB8
  c->r[3]=c->r[3]+0x0000005Cu; // 800E4ABC
  c->lr=0x800E4AC4u; f_800361A0(c); // 800E4AC0
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4AC4
  c->r[4]=0u+0x00000040u; // 800E4AC8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4ACC
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800E4AD0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4AD4
  c->r[3]=c->r[3]+0x0000001Cu; // 800E4AD8
  c->lr=0x800E4AE0u; f_802518A4(c); // 800E4ADC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4AE0
  c->r[4]=0u+0x00000006u; // 800E4AE4
  c->r[3]=c->r[3]+0x0000001Cu; // 800E4AE8
  c->lr=0x800E4AF0u; f_80251824(c); // 800E4AEC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E4AF0
  c->r[3]=c->r[31]|c->r[31]; // 800E4AF4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E4AF8
  c->r[5]=0u+0x00000000u; // 800E4AFC
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E4B00
  c->r[6]=0u+0x00000001u; // 800E4B04
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4B08
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E4B0C
  c->ctr=c->r[12]; // 800E4B10
  if (true) { c->lr=0x800E4B18u; dispatch(c,c->ctr); } // 800E4B14
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4B18
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E4B1C
  c->lr=0x800E4B24u; f_802501B0(c); // 800E4B20
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4B24
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800E4B28
  cmps(c,0,(int32_t)c->r[0],0); // 800E4B2C
  if (crb(c,2)) { goto L_800E4BD8; } // 800E4B30
  c->r[3]=c->r[3]+0x00000068u; // 800E4B34
  c->r[4]=c->r[31]+0x00000060u; // 800E4B38
  c->lr=0x800E4B40u; f_800361A0(c); // 800E4B3C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4B40
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E4B44
  c->lr=0x800E4B4Cu; f_8025037C(c); // 800E4B48
  c->r[6]=R32(c->r[31]+0x00000394u); // 800E4B4C
  c->r[3]=c->r[1]+0x00000024u; // 800E4B50
  c->r[4]=c->r[31]+0x00000060u; // 800E4B54
  c->r[5]=c->r[1]+0x00000030u; // 800E4B58
  c->r[6]=c->r[6]+0x000000B0u; // 800E4B5C
  c->r[7]=0u+0x00000000u; // 800E4B60
  c->lr=0x800E4B68u; f_8002BE64(c); // 800E4B64
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800E4B68
  c->r[3]=0u+0x805D0000u; // 800E4B6C
  c->r[0]=R32(c->r[31]+0x00000030u); // 800E4B70
  c->r[3]=c->r[3]+0x00003F6Cu; // 800E4B74
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4B78
  c->r[4]=c->r[31]|c->r[31]; // 800E4B7C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E4B80
  c->r[7]=c->r[1]+0x00000018u; // 800E4B84
  c->r[6]=0u+0x0000003Fu; // 800E4B88
  c->r[8]=0u+0x00000000u; // 800E4B8C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E4B90
  c->r[0]=R32(c->r[31]+0x00000034u); // 800E4B94
  W32(c->r[1]+0x00000020u,c->r[0]); // 800E4B98
  c->r[3]=R32(c->r[31]+0x00000438u); // 800E4B9C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800E4BA0
  c->lr=0x800E4BA8u; f_801FA6A4(c); // 800E4BA4
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800E4BA8
  cmps(c,0,(int32_t)c->r[0],0); // 800E4BAC
  if (crb(c,2)) { goto L_800E4BC0; } // 800E4BB0
  c->r[3]=c->r[31]+0x00000044u; // 800E4BB4
  c->r[4]=c->r[31]+0x000003CCu; // 800E4BB8
  c->lr=0x800E4BC0u; f_800361A0(c); // 800E4BBC
L_800E4BC0:;
  c->r[6]=0u+0x803A0000u; // 800E4BC0
  c->r[3]=R32(c->r[31]+0x00000438u); // 800E4BC4
  c->r[5]=c->r[31]+0x00000044u; // 800E4BC8
  c->r[4]=0u+0x00000000u; // 800E4BCC
  c->r[6]=c->r[6]+0xFFFFE668u; // 800E4BD0
  c->lr=0x800E4BD8u; f_801FBEC0(c); // 800E4BD4
L_800E4BD8:;
  c->r[3]=c->r[31]|c->r[31]; // 800E4BD8
  c->r[4]=0u+0x00000000u; // 800E4BDC
  c->lr=0x800E4BE4u; f_801F7C00(c); // 800E4BE0
  c->r[7]=0u+0x803D0000u; // 800E4BE4
  {uint32_t ea=c->r[7]+0x00003890u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E4BE8
  c->r[3]=c->r[31]|c->r[31]; // 800E4BEC
  c->r[4]=c->r[1]+0x0000000Cu; // 800E4BF0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E4BF4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E4BF8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800E4BFC
  W32(c->r[1]+0x00000010u,c->r[5]); // 800E4C00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4C04
  c->lr=0x800E4C0Cu; f_800E4C20(c); // 800E4C08
  c->r[0]=R32(c->r[1]+0x00000054u); // 800E4C0C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800E4C10
  c->lr=c->r[0]; // 800E4C14
  c->r[1]=c->r[1]+0x00000050u; // 800E4C18
  return; // 800E4C1C
}

// fn_800E4C20
void f_800E4C20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4C20
  c->r[0]=c->lr; // 800E4C24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4C28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4C2C
  c->r[31]=c->r[4]|c->r[4]; // 800E4C30
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E4C34
  c->r[30]=c->r[3]|c->r[3]; // 800E4C38
  c->r[3]=c->r[31]|c->r[31]; // 800E4C3C
  c->lr=0x800E4C44u; f_802B9FDC(c); // 800E4C40
  cmps(c,0,(int32_t)c->r[3],0); // 800E4C44
  if (crb(c,2)) { goto L_800E4C64; } // 800E4C48
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E4C4C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E4C50
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E4C54
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E4C58
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E4C5C
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E4C60
L_800E4C64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4C64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4C68
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E4C6C
  c->lr=c->r[0]; // 800E4C70
  c->r[1]=c->r[1]+0x00000010u; // 800E4C74
  return; // 800E4C78
}

// fn_800E4C7C
void f_800E4C7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4C7C
  c->r[0]=c->lr; // 800E4C80
  c->r[4]=0u+0x00000000u; // 800E4C84
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E4C88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E4C8C
  c->r[31]=c->r[3]|c->r[3]; // 800E4C90
  c->r[3]=R32(c->r[3]+0x00000438u); // 800E4C94
  c->lr=0x800E4C9Cu; f_801FAF00(c); // 800E4C98
  cmps(c,0,(int32_t)c->r[3],0); // 800E4C9C
  if (!crb(c,2)) { goto L_800E4D3C; } // 800E4CA0
  c->r[3]=c->r[31]|c->r[31]; // 800E4CA4
  c->r[4]=0u+0x00000036u; // 800E4CA8
  c->lr=0x800E4CB0u; f_801F5AB4(c); // 800E4CAC
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800E4CB0
  c->r[3]=c->r[31]+0x0000002Cu; // 800E4CB4
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4CB8
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800E4CBC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E4CC0
  c->r[0]=c->r[0]|0x00000004u; // 800E4CC4
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800E4CC8
  c->r[4]=c->r[4]+0x0000005Cu; // 800E4CCC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800E4CD0
  c->lr=0x800E4CD8u; f_800361A0(c); // 800E4CD4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E4CD8
  c->r[3]=c->r[31]+0x00000060u; // 800E4CDC
  c->r[4]=c->r[4]+0x00000068u; // 800E4CE0
  c->lr=0x800E4CE8u; f_800361A0(c); // 800E4CE4
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800E4CE8
  c->r[3]=0u+0x805D0000u; // 800E4CEC
  c->r[0]=R32(c->r[31]+0x00000030u); // 800E4CF0
  c->r[3]=c->r[3]+0x00006CF8u; // 800E4CF4
  c->r[4]=c->r[1]+0x00000008u; // 800E4CF8
  c->r[5]=0u+0x00040000u; // 800E4CFC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E4D00
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E4D04
  c->r[0]=R32(c->r[31]+0x00000034u); // 800E4D08
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E4D0C
  c->lr=0x800E4D14u; f_802236F8(c); // 800E4D10
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800E4D14
  c->r[3]=c->r[31]|c->r[31]; // 800E4D18
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E4D1C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E4D20
  c->ctr=c->r[12]; // 800E4D24
  if (true) { c->lr=0x800E4D2Cu; dispatch(c,c->ctr); } // 800E4D28
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4D2C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E4D30
  c->lr=0x800E4D38u; f_8025037C(c); // 800E4D34
  goto L_800E4D5C; // 800E4D38
L_800E4D3C:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E4D3C
  c->r[3]=c->r[31]+0x0000002Cu; // 800E4D40
  c->r[4]=c->r[4]+0x0000005Cu; // 800E4D44
  c->lr=0x800E4D4Cu; f_800361A0(c); // 800E4D48
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E4D4C
  c->r[3]=c->r[31]+0x00000060u; // 800E4D50
  c->r[4]=c->r[4]+0x00000068u; // 800E4D54
  c->lr=0x800E4D5Cu; f_800361A0(c); // 800E4D58
L_800E4D5C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E4D5C
  c->r[4]=0u+0x00000000u; // 800E4D60
  c->lr=0x800E4D68u; f_801F7C00(c); // 800E4D64
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E4D68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E4D6C
  c->lr=c->r[0]; // 800E4D70
  c->r[1]=c->r[1]+0x00000020u; // 800E4D74
  return; // 800E4D78
}

// fn_800E4D7C
void f_800E4D7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4D7C
  c->r[0]=c->lr; // 800E4D80
  c->r[5]=0u+0x00000000u; // 800E4D84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4D88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4D8C
  c->r[31]=c->r[3]|c->r[3]; // 800E4D90
  c->r[3]=0u+0x000004C2u; // 800E4D94
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E4D98
  c->r[4]=c->r[4]+0x0000010Cu; // 800E4D9C
  c->lr=0x800E4DA4u; f_8024EE50(c); // 800E4DA0
  cmps(c,0,(int32_t)c->r[3],0); // 800E4DA4
  if (crb(c,2)) { goto L_800E4DB4; } // 800E4DA8
  c->r[3]=0u+0x00000000u; // 800E4DAC
  goto L_800E4DE4; // 800E4DB0
L_800E4DB4:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E4DB4
  c->r[3]=0u+0x0000051Cu; // 800E4DB8
  c->r[5]=0u+0x00000000u; // 800E4DBC
  c->r[4]=c->r[4]+0x0000010Cu; // 800E4DC0
  c->lr=0x800E4DC8u; f_8024EE50(c); // 800E4DC4
  cmps(c,0,(int32_t)c->r[3],0); // 800E4DC8
  if (crb(c,2)) { goto L_800E4DD8; } // 800E4DCC
  c->r[3]=0u+0x00000000u; // 800E4DD0
  goto L_800E4DE4; // 800E4DD4
L_800E4DD8:;
  c->r[3]=c->r[31]+0x00000210u; // 800E4DD8
  c->r[4]=0u+0x000000E1u; // 800E4DDC
  c->lr=0x800E4DE4u; f_80221630(c); // 800E4DE0
L_800E4DE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4DE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4DE8
  c->lr=c->r[0]; // 800E4DEC
  c->r[1]=c->r[1]+0x00000010u; // 800E4DF0
  return; // 800E4DF4
}

// fn_800E4DF8
void f_800E4DF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4DF8
  c->r[0]=c->lr; // 800E4DFC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E4E00
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E4E04
  c->r[31]=c->r[3]|c->r[3]; // 800E4E08
  c->lr=0x800E4E10u; f_801F4F28(c); // 800E4E0C
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800E4E10
  cmps(c,0,(int32_t)c->r[0],101); // 800E4E14
  if (crb(c,2)) { goto L_800E4E5C; } // 800E4E18
  if (!crb(c,0)) { goto L_800E4E88; } // 800E4E1C
  cmps(c,0,(int32_t)c->r[0],100); // 800E4E20
  if (!crb(c,0)) { goto L_800E4E2C; } // 800E4E24
  goto L_800E4E88; // 800E4E28
L_800E4E2C:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800E4E2C
  c->r[7]=0u+0x803D0000u; // 800E4E30
  c->r[3]=c->r[31]|c->r[31]; // 800E4E34
  c->r[4]=c->r[1]+0x00000014u; // 800E4E38
  {uint32_t ea=c->r[7]+0x0000389Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E4E3C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E4E40
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E4E44
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E4E48
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E4E4C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E4E50
  c->lr=0x800E4E58u; f_800E4C20(c); // 800E4E54
  goto L_800E4E88; // 800E4E58
L_800E4E5C:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800E4E5C
  c->r[7]=0u+0x803D0000u; // 800E4E60
  c->r[3]=c->r[31]|c->r[31]; // 800E4E64
  c->r[4]=c->r[1]+0x00000008u; // 800E4E68
  {uint32_t ea=c->r[7]+0x000038A8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E4E6C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E4E70
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E4E74
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E4E78
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E4E7C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E4E80
  c->lr=0x800E4E88u; f_800E4C20(c); // 800E4E84
L_800E4E88:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E4E88
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E4E8C
  c->lr=c->r[0]; // 800E4E90
  c->r[1]=c->r[1]+0x00000030u; // 800E4E94
  return; // 800E4E98
}

// fn_800E4E9C
void f_800E4E9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4E9C
  c->r[0]=c->lr; // 800E4EA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4EA4
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800E4EA8
  c->r[5]=c->r[3]+c->r[0]; // 800E4EAC
  c->r[3]=c->r[4]|c->r[4]; // 800E4EB0
  c->r[4]=R32(c->r[5]+0x00000394u); // 800E4EB4
  c->r[5]=0u+0x00000000u; // 800E4EB8
  c->lr=0x800E4EC0u; f_80250BF4(c); // 800E4EBC
  c->r[0]=cntlz(c->r[3]); // 800E4EC0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E4EC4
  c->r[3]=0u-c->r[0]; // 800E4EC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4ECC
  c->lr=c->r[0]; // 800E4ED0
  c->r[1]=c->r[1]+0x00000010u; // 800E4ED4
  return; // 800E4ED8
}

// fn_800E4EDC
void f_800E4EDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4EDC
  c->r[0]=c->lr; // 800E4EE0
  c->r[5]=0u+0x80620000u; // 800E4EE4
  c->r[4]=0u+0x00000002u; // 800E4EE8
  W32(c->r[1]+0x00000094u,c->r[0]); // 800E4EEC
  c->r[5]=c->r[5]+0x00007688u; // 800E4EF0
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800E4EF4
  W32(c->r[1]+0x00000088u,c->r[30]); // 800E4EF8
  c->r[30]=c->r[3]|c->r[3]; // 800E4EFC
  c->r[3]=R32(c->r[5]+0x00000014u); // 800E4F00
  c->lr=0x800E4F08u; f_80037670(c); // 800E4F04
  cmps(c,0,(int32_t)c->r[3],0); // 800E4F08
  if (!crb(c,2)) { goto L_800E4F78; } // 800E4F0C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E4F10
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800E4F14
  cmps(c,0,(int32_t)c->r[0],0); // 800E4F18
  if (!crb(c,2)) { goto L_800E4F78; } // 800E4F1C
  {uint32_t ea=c->r[2]+0xFFFFA5ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E4F20
  c->r[3]=c->r[1]+0x00000014u; // 800E4F24
  {uint32_t ea=c->r[2]+0xFFFFA5F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4F28
  c->r[4]=c->r[30]+0x0000002Cu; // 800E4F2C
  {uint32_t ea=c->r[2]+0xFFFFA5F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4F30
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 800E4F34
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800E4F38
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800E4F3C
  c->lr=0x800E4F44u; f_800361A0(c); // 800E4F40
  c->r[31]=0u+0x80550000u; // 800E4F44
  c->r[5]=c->r[30]|c->r[30]; // 800E4F48
  c->r[31]=c->r[31]+0x00003D60u; // 800E4F4C
  c->r[6]=c->r[1]+0x00000014u; // 800E4F50
  c->r[3]=c->r[31]+0x00000010u; // 800E4F54
  c->r[7]=c->r[1]+0x00000008u; // 800E4F58
  c->r[8]=c->r[30]+0x00000060u; // 800E4F5C
  c->r[9]=c->r[1]+0x00000020u; // 800E4F60
  c->r[4]=0u+0x000001FFu; // 800E4F64
  c->lr=0x800E4F6Cu; f_80226578(c); // 800E4F68
  c->r[3]=c->r[31]+0x00000010u; // 800E4F6C
  c->r[4]=c->r[1]+0x00000020u; // 800E4F70
  c->lr=0x800E4F78u; f_80226D68(c); // 800E4F74
L_800E4F78:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800E4F78
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800E4F7C
  c->r[30]=R32(c->r[1]+0x00000088u); // 800E4F80
  c->lr=c->r[0]; // 800E4F84
  c->r[1]=c->r[1]+0x00000090u; // 800E4F88
  return; // 800E4F8C
}

// fn_800E4F90
void f_800E4F90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4F90
  c->r[0]=c->lr; // 800E4F94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4F98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4F9C
  c->r[31]=c->r[3]|c->r[3]; // 800E4FA0
  c->r[3]=c->r[3]+0x00000210u; // 800E4FA4
  c->lr=0x800E4FACu; f_8004BAD4(c); // 800E4FA8
  cmps(c,0,(int32_t)c->r[3],0); // 800E4FAC
  if (crb(c,2)) { goto L_800E5034; } // 800E4FB0
  c->r[0]=R32(c->r[31]+0x00000210u); // 800E4FB4
  c->r[4]=c->r[31]|c->r[31]; // 800E4FB8
  c->r[3]=c->r[31]+0x00000210u; // 800E4FBC
  c->r[0]=c->r[0]|0xAA800000u; // 800E4FC0
  W32(c->r[31]+0x00000210u,c->r[0]); // 800E4FC4
  c->lr=0x800E4FCCu; f_80043E44(c); // 800E4FC8
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4FCC
  c->r[3]=c->r[31]+0x00000210u; // 800E4FD0
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E4FD4
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E4FD8
  c->lr=0x800E4FE0u; f_80043E34(c); // 800E4FDC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E4FE0
  c->r[4]=0u+0x803A0000u; // 800E4FE4
  c->r[4]=c->r[4]+0xFFFFE6F0u; // 800E4FE8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E4FEC
  c->r[4]=c->r[4]+0x00000009u; // 800E4FF0
  c->lr=0x800E4FF8u; f_80256EC4(c); // 800E4FF4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E4FF8
  c->r[5]=c->r[3]|c->r[3]; // 800E4FFC
  c->r[3]=c->r[31]+0x00000210u; // 800E5000
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800E5004
  c->lr=0x800E500Cu; f_8004BAC8(c); // 800E5008
  {uint32_t ea=c->r[2]+0xFFFFA5D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E500C
  c->r[3]=c->r[31]+0x00000210u; // 800E5010
  c->f[2]=c->f[1]; // 800E5014
  c->f[3]=c->f[1]; // 800E5018
  c->lr=0x800E5020u; f_80043E24(c); // 800E501C
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E5020
  c->r[3]=c->r[31]+0x00000210u; // 800E5024
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E5028
  c->f[3]=c->f[1]; // 800E502C
  c->lr=0x800E5034u; f_8005D58C(c); // 800E5030
L_800E5034:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5034
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E5038
  c->lr=c->r[0]; // 800E503C
  c->r[1]=c->r[1]+0x00000010u; // 800E5040
  return; // 800E5044
}

// fn_800E5048
void f_800E5048(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5048
  c->r[0]=c->lr; // 800E504C
  W32(c->r[1]+0x00000094u,c->r[0]); // 800E5050
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800E5054
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800E5058
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800E505C
  c->r[31]=0u+0x803A0000u; // 800E5060
  c->r[31]=c->r[31]+0xFFFFE668u; // 800E5064
  W32(c->r[1]+0x00000078u,c->r[30]); // 800E5068
  c->r[30]=c->r[3]|c->r[3]; // 800E506C
  c->r[3]=c->r[3]+0x00000210u; // 800E5070
  c->lr=0x800E5078u; f_80221698(c); // 800E5074
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E5078
  cmps(c,0,(int32_t)c->r[3],0); // 800E507C
  if (crb(c,2)) { goto L_800E50A0; } // 800E5080
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800E5084
  cmps(c,0,(int32_t)c->r[0],0); // 800E5088
  if (crb(c,2)) { goto L_800E50A0; } // 800E508C
  c->r[0]=R32(c->r[30]+0x00000210u); // 800E5090
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800E5094
  W32(c->r[30]+0x00000210u,c->r[0]); // 800E5098
  goto L_800E52DC; // 800E509C
L_800E50A0:;
  c->r[0]=R32(c->r[30]+0x00000210u); // 800E50A0
  c->r[7]=c->r[31]+0x0000003Cu; // 800E50A4
  c->r[6]=c->r[31]+0x00000048u; // 800E50A8
  c->r[3]=c->r[1]+0x00000020u; // 800E50AC
  c->r[0]=c->r[0]|0x80000000u; // 800E50B0
  c->r[4]=c->r[1]+0x00000014u; // 800E50B4
  W32(c->r[30]+0x00000210u,c->r[0]); // 800E50B8
  c->r[5]=c->r[1]+0x00000038u; // 800E50BC
  c->r[11]=R32(c->r[31]+0x0000003Cu); // 800E50C0
  c->r[10]=R32(c->r[7]+0x00000004u); // 800E50C4
  c->r[9]=R32(c->r[7]+0x00000008u); // 800E50C8
  c->r[8]=R32(c->r[31]+0x00000048u); // 800E50CC
  c->r[7]=R32(c->r[6]+0x00000004u); // 800E50D0
  c->r[0]=R32(c->r[6]+0x00000008u); // 800E50D4
  W32(c->r[1]+0x00000020u,c->r[11]); // 800E50D8
  W32(c->r[1]+0x00000024u,c->r[10]); // 800E50DC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 800E50E0
  W32(c->r[1]+0x00000028u,c->r[9]); // 800E50E4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 800E50E8
  W32(c->r[1]+0x00000014u,c->r[8]); // 800E50EC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E50F0
  W32(c->r[1]+0x00000018u,c->r[7]); // 800E50F4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E50F8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E50FC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E5100
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E5104
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E5108
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E510C
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 800E5110
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800E5114
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E5118
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E511C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800E5120
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800E5124
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E5128
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E512C
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800E5130
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800E5134
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E5138
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E513C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800E5140
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800E5144
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E5148
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E514C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800E5150
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800E5154
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E5158
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E515C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800E5160
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800E5164
  c->lr=0x800E516Cu; f_80296A70(c); // 800E5168
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E516C
  c->r[4]=0u+0x803A0000u; // 800E5170
  c->r[4]=c->r[4]+0xFFFFE6F0u; // 800E5174
  c->r[5]=c->r[1]+0x00000048u; // 800E5178
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E517C
  c->r[4]=c->r[4]+0x00000009u; // 800E5180
  c->r[6]=0u+0x00000001u; // 800E5184
  c->lr=0x800E518Cu; f_80257018(c); // 800E5188
  c->r[4]=c->r[1]+0x00000020u; // 800E518C
  c->r[3]=c->r[1]+0x00000048u; // 800E5190
  c->r[5]=c->r[4]|c->r[4]; // 800E5194
  c->lr=0x800E519Cu; f_80296750(c); // 800E5198
  c->r[4]=c->r[1]+0x00000014u; // 800E519C
  c->r[3]=c->r[1]+0x00000048u; // 800E51A0
  c->r[5]=c->r[4]|c->r[4]; // 800E51A4
  c->lr=0x800E51ACu; f_80296750(c); // 800E51A8
  c->r[3]=c->r[1]+0x00000020u; // 800E51AC
  c->r[4]=c->r[1]+0x00000014u; // 800E51B0
  c->r[5]=c->r[1]+0x0000002Cu; // 800E51B4
  c->lr=0x800E51BCu; f_80296A70(c); // 800E51B8
  c->r[4]=c->r[31]+0x00000054u; // 800E51BC
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E51C0
  c->r[6]=R32(c->r[31]+0x00000054u); // 800E51C4
  c->r[3]=c->r[1]+0x00000038u; // 800E51C8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E51CC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E51D0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800E51D4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E51D8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E51DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E51E0
  c->lr=0x800E51E8u; f_80296B0C(c); // 800E51E4
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E51E8
  fcmp(c,0,c->f[3],c->f[1]); // 800E51EC
  if (crb(c,2)) { goto L_800E5260; } // 800E51F0
  c->r[3]=c->r[1]+0x00000038u; // 800E51F4
  c->lr=0x800E51FCu; f_80296B0C(c); // 800E51F8
  c->f[31]=c->f[1]; // 800E51FC
  c->r[3]=c->r[1]+0x0000002Cu; // 800E5200
  c->lr=0x800E5208u; f_80296B0C(c); // 800E5204
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[31]); // 800E5208
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E520C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E5210
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E5214
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800E5218
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800E521C
  c->lr=0x800E5224u; f_8005C22C(c); // 800E5220
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5224
  fcmp(c,0,c->f[1],c->f[0]); // 800E5228
  if (!crb(c,1)) { goto L_800E5244; } // 800E522C
  {uint32_t ea=c->r[2]+0xFFFFA5F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E5230
  {uint32_t ea=c->r[2]+0xFFFFA5FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5234
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800E5238
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 800E523C
  goto L_800E5270; // 800E5240
L_800E5244:;
  {uint32_t ea=c->r[2]+0xFFFFA5F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5244
  {uint32_t ea=c->r[2]+0xFFFFA5FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E5248
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800E524C
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5250
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800E5254
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 800E5258
  goto L_800E5270; // 800E525C
L_800E5260:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5260
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E5264
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800E5268
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800E526C
L_800E5270:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E5270
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5274
  fcmp(c,0,c->f[1],c->f[0]); // 800E5278
  if (!crb(c,0)) { goto L_800E5284; } // 800E527C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800E5280
L_800E5284:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E5284
  c->r[3]=c->r[30]+0x00000210u; // 800E5288
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E528C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E5290
  {uint32_t ea=c->r[4]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5294
  c->f[3]=c->f[1]; // 800E5298
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800E529C
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[0]); // 800E52A0
  {uint32_t ea=c->r[4]+0x00000078u; c->f[5]=c->ps1[5]=RF32(ea);} // 800E52A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E52A8
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E52AC
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 800E52B0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[7]);} // 800E52B4
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800E52B8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 800E52BC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800E52C0
  c->lr=0x800E52C8u; f_8005D58C(c); // 800E52C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E52C8
  c->r[3]=c->r[30]+0x00000210u; // 800E52CC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E52D0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E52D4
  c->lr=0x800E52DCu; f_80043E24(c); // 800E52D8
L_800E52DC:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800E52DC
  c->r[0]=R32(c->r[1]+0x00000094u); // 800E52E0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800E52E4
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800E52E8
  c->r[30]=R32(c->r[1]+0x00000078u); // 800E52EC
  c->lr=c->r[0]; // 800E52F0
  c->r[1]=c->r[1]+0x00000090u; // 800E52F4
  return; // 800E52F8
}

// fn_800E52FC
void f_800E52FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E52FC
  c->r[0]=c->lr; // 800E5300
  cmps(c,0,(int32_t)c->r[3],0); // 800E5304
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5308
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E530C
  c->r[31]=c->r[4]|c->r[4]; // 800E5310
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E5314
  c->r[30]=c->r[3]|c->r[3]; // 800E5318
  if (crb(c,2)) { goto L_800E5338; } // 800E531C
  c->r[4]=0u+0x00000000u; // 800E5320
  c->lr=0x800E5328u; f_8026A06C(c); // 800E5324
  cmps(c,0,(int32_t)c->r[31],0); // 800E5328
  if (!crb(c,1)) { goto L_800E5338; } // 800E532C
  c->r[3]=c->r[30]|c->r[30]; // 800E5330
  c->lr=0x800E5338u; f_8026A268(c); // 800E5334
L_800E5338:;
  c->r[3]=c->r[30]|c->r[30]; // 800E5338
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E533C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E5340
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5344
  c->lr=c->r[0]; // 800E5348
  c->r[1]=c->r[1]+0x00000010u; // 800E534C
  return; // 800E5350
}

// fn_800E5354
void f_800E5354(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5354
  c->r[0]=c->lr; // 800E5358
  c->r[4]=0u+0x00000000u; // 800E535C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800E5360
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800E5364
  W32(c->r[1]+0x00000058u,c->r[30]); // 800E5368
  c->r[30]=c->r[3]|c->r[3]; // 800E536C
  W32(c->r[1]+0x00000054u,c->r[29]); // 800E5370
  W32(c->r[1]+0x00000050u,c->r[28]); // 800E5374
  c->lr=0x800E537Cu; f_801F57D0(c); // 800E5378
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E537C
  c->r[3]=c->r[30]|c->r[30]; // 800E5380
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E5384
  c->ctr=c->r[12]; // 800E5388
  if (true) { c->lr=0x800E5390u; dispatch(c,c->ctr); } // 800E538C
  c->r[3]=c->r[30]|c->r[30]; // 800E5390
  c->lr=0x800E5398u; f_801F4B94(c); // 800E5394
  c->r[3]=0u+0x00000003u; // 800E5398
  c->r[0]=0u+0x00000050u; // 800E539C
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800E53A0
  c->r[3]=c->r[30]|c->r[30]; // 800E53A4
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E53A8
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800E53AC
  c->lr=0x800E53B4u; f_801F58BC(c); // 800E53B0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E53B4
  c->r[31]=0u+0x00000001u; // 800E53B8
  c->r[29]=0u+0x803A0000u; // 800E53BC
  c->r[28]=0u+0x00000000u; // 800E53C0
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800E53C4
  c->r[4]=c->r[29]+0xFFFFE714u; // 800E53C8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E53CC
  W8(c->r[3]+0x0000001Du,c->r[28]); // 800E53D0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E53D4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E53D8
  c->lr=0x800E53E0u; f_80256EC4(c); // 800E53DC
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E53E0
  c->r[4]=0u+0x00000000u; // 800E53E4
  {uint32_t ea=c->r[2]+0xFFFFA610u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E53E8
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800E53EC
  c->f[2]=c->f[1]; // 800E53F0
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E53F4
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800E53F8
  c->r[5]=R32(c->r[5]+0x00000034u); // 800E53FC
  c->lr=0x800E5404u; f_8024FEAC(c); // 800E5400
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E5404
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E5408
  c->lr=0x800E5410u; f_802501B0(c); // 800E540C
  {uint32_t ea=c->r[2]+0xFFFFA610u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E5410
  c->r[3]=c->r[30]+0x0000000Cu; // 800E5414
  c->lr=0x800E541Cu; f_80037668(c); // 800E5418
  W16(c->r[30]+0x00000074u,c->r[28]); // 800E541C
  c->r[29]=c->r[29]+0xFFFFE714u; // 800E5420
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E5424
  c->r[4]=c->r[29]+0x00000009u; // 800E5428
  W16(c->r[30]+0x00000076u,c->r[28]); // 800E542C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E5430
  c->lr=0x800E5438u; f_80256EC4(c); // 800E5434
  W16(c->r[30]+0x00000078u,c->r[3]); // 800E5438
  c->r[4]=c->r[29]+0x00000012u; // 800E543C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E5440
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E5444
  c->lr=0x800E544Cu; f_80256EC4(c); // 800E5448
  c->r[8]=0u+0x000000A2u; // 800E544C
  c->r[29]=0u+0x43300000u; // 800E5450
  W32(c->r[1]+0x0000003Cu,c->r[8]); // 800E5454
  c->r[4]=0u+0x803A0000u; // 800E5458
  c->r[4]=c->r[4]+0xFFFFE708u; // 800E545C
  c->r[9]=0u+0x000000FFu; // 800E5460
  W32(c->r[1]+0x00000038u,c->r[29]); // 800E5464
  c->r[7]=0u+0x0000012Eu; // 800E5468
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E546C
  c->r[5]=c->r[1]+0x00000020u; // 800E5470
  {uint32_t ea=c->r[2]+0xFFFFA618u; c->f[1]=RF64(ea);} // 800E5474
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 800E5478
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E547C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E5480
  c->r[6]=R32(c->r[4]+0x00000000u); // 800E5484
  c->r[4]=R32(c->r[4]+0x00000004u); // 800E5488
  W16(c->r[30]+0x0000007Au,c->r[3]); // 800E548C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800E5490
  W16(c->r[30]+0x0000007Cu,c->r[31]); // 800E5494
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E5498
  W8(c->r[30]+0x00000084u,c->r[9]); // 800E549C
  W16(c->r[30]+0x00000074u,c->r[8]); // 800E54A0
  W16(c->r[30]+0x00000076u,c->r[7]); // 800E54A4
  W32(c->r[1]+0x00000020u,c->r[6]); // 800E54A8
  W32(c->r[1]+0x00000024u,c->r[4]); // 800E54AC
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E54B0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E54B4
  W32(c->r[1]+0x00000030u,c->r[4]); // 800E54B8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E54BC
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800E54C0
  c->r[4]=R16(c->r[30]+0x00000078u); // 800E54C4
  c->lr=0x800E54CCu; f_8025E9C0(c); // 800E54C8
  c->r[0]=R16(c->r[30]+0x00000076u); // 800E54CC
  c->r[5]=c->r[1]+0x00000014u; // 800E54D0
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800E54D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E54D8
  c->r[0]=R32(c->r[1]+0x00000030u); // 800E54DC
  W32(c->r[1]+0x00000040u,c->r[29]); // 800E54E0
  {uint32_t ea=c->r[2]+0xFFFFA618u; c->f[1]=RF64(ea);} // 800E54E4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 800E54E8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800E54EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E54F0
  W32(c->r[1]+0x00000014u,c->r[3]); // 800E54F4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800E54F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E54FC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E5500
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E5504
  c->r[4]=R16(c->r[30]+0x0000007Au); // 800E5508
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E550C
  c->lr=0x800E5514u; f_8025E9C0(c); // 800E5510
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800E5514
  c->r[3]=c->r[30]|c->r[30]; // 800E5518
  c->lr=0x800E5520u; f_801F56F4(c); // 800E551C
  c->r[0]=0u+0x00000064u; // 800E5520
  c->r[7]=0u+0x803D0000u; // 800E5524
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800E5528
  c->r[3]=c->r[30]|c->r[30]; // 800E552C
  c->r[4]=c->r[1]+0x00000008u; // 800E5530
  {uint32_t ea=c->r[7]+0x00003950u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E5534
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E5538
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E553C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E5540
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E5544
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5548
  c->lr=0x800E5550u; f_800E5570(c); // 800E554C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800E5550
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800E5554
  c->r[30]=R32(c->r[1]+0x00000058u); // 800E5558
  c->r[29]=R32(c->r[1]+0x00000054u); // 800E555C
  c->r[28]=R32(c->r[1]+0x00000050u); // 800E5560
  c->lr=c->r[0]; // 800E5564
  c->r[1]=c->r[1]+0x00000060u; // 800E5568
  return; // 800E556C
}

// fn_800E5570
void f_800E5570(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5570
  c->r[0]=c->lr; // 800E5574
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5578
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E557C
  c->r[31]=c->r[4]|c->r[4]; // 800E5580
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E5584
  c->r[30]=c->r[3]|c->r[3]; // 800E5588
  c->r[3]=c->r[31]|c->r[31]; // 800E558C
  c->lr=0x800E5594u; f_802B9FDC(c); // 800E5590
  cmps(c,0,(int32_t)c->r[3],0); // 800E5594
  if (crb(c,2)) { goto L_800E55B4; } // 800E5598
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E559C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E55A0
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E55A4
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E55A8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E55AC
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E55B0
L_800E55B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E55B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E55B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E55BC
  c->lr=c->r[0]; // 800E55C0
  c->r[1]=c->r[1]+0x00000010u; // 800E55C4
  return; // 800E55C8
}

// fn_800E55CC
void f_800E55CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E55CC
  c->r[0]=c->lr; // 800E55D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E55D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E55D8
  c->r[31]=c->r[3]|c->r[3]; // 800E55DC
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800E55E0
  c->r[12]=R32(c->r[12]+0x00000068u); // 800E55E4
  c->ctr=c->r[12]; // 800E55E8
  if (true) { c->lr=0x800E55F0u; dispatch(c,c->ctr); } // 800E55EC
  c->r[3]=c->r[31]|c->r[31]; // 800E55F0
  c->lr=0x800E55F8u; f_801F4C0C(c); // 800E55F4
  c->r[3]=c->r[31]|c->r[31]; // 800E55F8
  c->lr=0x800E5600u; f_800E5E24(c); // 800E55FC
  c->r[3]=c->r[31]|c->r[31]; // 800E5600
  c->lr=0x800E5608u; f_801F56F4(c); // 800E5604
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5608
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E560C
  c->lr=c->r[0]; // 800E5610
  c->r[1]=c->r[1]+0x00000010u; // 800E5614
  return; // 800E5618
}

// fn_800E561C
void f_800E561C(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800E561C
}

// fn_800E5620
void f_800E5620(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5620
  c->r[0]=c->lr; // 800E5624
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E5628
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E562C
  c->r[31]=c->r[3]|c->r[3]; // 800E5630
  c->lr=0x800E5638u; f_801F51B8(c); // 800E5634
  c->r[0]=0u+0x00000064u; // 800E5638
  c->r[7]=0u+0x803D0000u; // 800E563C
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800E5640
  c->r[3]=c->r[31]|c->r[31]; // 800E5644
  c->r[4]=c->r[1]+0x00000008u; // 800E5648
  {uint32_t ea=c->r[7]+0x00003968u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E564C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E5650
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E5654
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E5658
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E565C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5660
  c->lr=0x800E5668u; f_800E5570(c); // 800E5664
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E5668
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E566C
  c->lr=c->r[0]; // 800E5670
  c->r[1]=c->r[1]+0x00000020u; // 800E5674
  return; // 800E5678
}

// fn_800E567C
void f_800E567C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E567C
  c->r[0]=c->lr; // 800E5680
  W32(c->r[1]+0x00000054u,c->r[0]); // 800E5684
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800E5688
  c->r[31]=c->r[3]|c->r[3]; // 800E568C
  W32(c->r[1]+0x00000048u,c->r[30]); // 800E5690
  c->r[0]=R16(c->r[3]+0x0000007Cu); // 800E5694
  cmps(c,0,(int32_t)c->r[0],0); // 800E5698
  if (crb(c,2)) { goto L_800E57CC; } // 800E569C
  c->r[4]=R16(c->r[3]+0x00000074u); // 800E56A0
  c->r[0]=c->r[4]+0x00000156u; // 800E56A4
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800E56A8
  W16(c->r[3]+0x00000074u,c->r[0]); // 800E56AC
  cmpu(c,0,c->r[4],0x00000168u); // 800E56B0
  if (crb(c,0)) { goto L_800E56C0; } // 800E56B4
  c->r[0]=c->r[4]+0xFFFFFE98u; // 800E56B8
  W16(c->r[3]+0x00000074u,c->r[0]); // 800E56BC
L_800E56C0:;
  c->r[4]=R16(c->r[3]+0x00000076u); // 800E56C0
  c->r[4]=c->r[4]+0x00000002u; // 800E56C4
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; // 800E56C8
  W16(c->r[3]+0x00000076u,c->r[4]); // 800E56CC
  cmpu(c,0,c->r[0],0x00000168u); // 800E56D0
  if (!crb(c,2)) { goto L_800E5724; } // 800E56D4
  c->r[0]=0u+0x00000000u; // 800E56D8
  c->r[4]=0u+0x00000320u; // 800E56DC
  W16(c->r[3]+0x00000076u,c->r[0]); // 800E56E0
  W16(c->r[3]+0x00000074u,c->r[0]); // 800E56E4
  c->r[3]=c->r[3]+0x0000000Cu; // 800E56E8
  c->lr=0x800E56F0u; f_80036430(c); // 800E56EC
  c->r[3]=c->r[31]|c->r[31]; // 800E56F0
  c->r[4]=0u+0x00000004u; // 800E56F4
  c->r[5]=0u+0x00000003u; // 800E56F8
  c->r[6]=0u+0x00000001u; // 800E56FC
  c->r[7]=0u+0x00000001u; // 800E5700
  c->lr=0x800E5708u; f_8017900C(c); // 800E5704
  {uint32_t ea=c->r[2]+0xFFFFA610u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E5708
  c->r[3]=c->r[31]|c->r[31]; // 800E570C
  c->r[4]=0u+0x00000065u; // 800E5710
  c->r[5]=0u+0x00000000u; // 800E5714
  c->r[6]=0u+0x00000000u; // 800E5718
  c->r[7]=0u+0x00000000u; // 800E571C
  c->lr=0x800E5724u; f_801F4D44(c); // 800E5720
L_800E5724:;
  c->r[0]=R16(c->r[31]+0x00000074u); // 800E5724
  c->r[30]=0u+0x43300000u; // 800E5728
  c->r[3]=0u+0x803A0000u; // 800E572C
  {uint32_t ea=c->r[3]+0xFFFFE708u; c->r[6]=R32(ea); c->r[3]=ea;} // 800E5730
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E5734
  c->r[5]=c->r[1]+0x00000014u; // 800E5738
  c->r[4]=R32(c->r[3]+0x00000004u); // 800E573C
  W32(c->r[1]+0x00000030u,c->r[30]); // 800E5740
  c->r[0]=R32(c->r[3]+0x00000008u); // 800E5744
  {uint32_t ea=c->r[2]+0xFFFFA618u; c->f[1]=RF64(ea);} // 800E5748
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800E574C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E5750
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E5754
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E5758
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800E575C
  c->r[0]=R32(c->r[1]+0x00000028u); // 800E5760
  W32(c->r[1]+0x00000018u,c->r[4]); // 800E5764
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E5768
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E576C
  W32(c->r[1]+0x00000024u,c->r[4]); // 800E5770
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E5774
  W32(c->r[1]+0x00000020u,c->r[6]); // 800E5778
  c->r[4]=R16(c->r[31]+0x00000078u); // 800E577C
  c->lr=0x800E5784u; f_8025E9C0(c); // 800E5780
  c->r[0]=R16(c->r[31]+0x00000076u); // 800E5784
  c->r[5]=c->r[1]+0x00000008u; // 800E5788
  c->r[3]=R32(c->r[1]+0x00000020u); // 800E578C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800E5790
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E5794
  W32(c->r[1]+0x00000038u,c->r[30]); // 800E5798
  {uint32_t ea=c->r[2]+0xFFFFA618u; c->f[1]=RF64(ea);} // 800E579C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 800E57A0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E57A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E57A8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800E57AC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800E57B0
  c->r[0]=R32(c->r[1]+0x00000028u); // 800E57B4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E57B8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E57BC
  c->r[4]=R16(c->r[31]+0x0000007Au); // 800E57C0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E57C4
  c->lr=0x800E57CCu; f_8025E9C0(c); // 800E57C8
L_800E57CC:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800E57CC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800E57D0
  c->r[30]=R32(c->r[1]+0x00000048u); // 800E57D4
  c->lr=c->r[0]; // 800E57D8
  c->r[1]=c->r[1]+0x00000050u; // 800E57DC
  return; // 800E57E0
}

// fn_800E57E4
void f_800E57E4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800E57E4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E57E8
  f_802501B0(c); return; // 800E57EC
}

// fn_800E57F0
void f_800E57F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E57F0
  c->r[0]=c->lr; // 800E57F4
  c->r[8]=0u+0x000000A2u; // 800E57F8
  c->r[4]=0u+0x803A0000u; // 800E57FC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800E5800
  c->r[4]=c->r[4]+0xFFFFE708u; // 800E5804
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E5808
  c->r[7]=0u+0x0000012Eu; // 800E580C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800E5810
  c->r[31]=0u+0x43300000u; // 800E5814
  c->r[6]=R32(c->r[4]+0x00000000u); // 800E5818
  c->r[5]=c->r[1]+0x00000014u; // 800E581C
  W32(c->r[1]+0x00000034u,c->r[8]); // 800E5820
  {uint32_t ea=c->r[2]+0xFFFFA618u; c->f[1]=RF64(ea);} // 800E5824
  W32(c->r[1]+0x00000030u,c->r[31]); // 800E5828
  c->r[4]=R32(c->r[4]+0x00000004u); // 800E582C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800E5830
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E5834
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E5838
  W32(c->r[1]+0x00000048u,c->r[30]); // 800E583C
  c->r[30]=c->r[3]|c->r[3]; // 800E5840
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800E5844
  W16(c->r[3]+0x00000074u,c->r[8]); // 800E5848
  c->r[0]=R32(c->r[1]+0x00000028u); // 800E584C
  W16(c->r[3]+0x00000076u,c->r[7]); // 800E5850
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E5854
  W32(c->r[1]+0x00000018u,c->r[4]); // 800E5858
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E585C
  c->r[3]=R32(c->r[3]+0x00000394u); // 800E5860
  W32(c->r[1]+0x00000024u,c->r[4]); // 800E5864
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E5868
  W32(c->r[1]+0x00000020u,c->r[6]); // 800E586C
  c->r[4]=R16(c->r[30]+0x00000078u); // 800E5870
  c->lr=0x800E5878u; f_8025E9C0(c); // 800E5874
  c->r[0]=R16(c->r[30]+0x00000076u); // 800E5878
  c->r[5]=c->r[1]+0x00000008u; // 800E587C
  c->r[3]=R32(c->r[1]+0x00000020u); // 800E5880
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800E5884
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E5888
  W32(c->r[1]+0x00000038u,c->r[31]); // 800E588C
  {uint32_t ea=c->r[2]+0xFFFFA618u; c->f[1]=RF64(ea);} // 800E5890
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 800E5894
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E5898
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E589C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800E58A0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800E58A4
  c->r[0]=R32(c->r[1]+0x00000028u); // 800E58A8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E58AC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E58B0
  c->r[4]=R16(c->r[30]+0x0000007Au); // 800E58B4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E58B8
  c->lr=0x800E58C0u; f_8025E9C0(c); // 800E58BC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800E58C0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800E58C4
  c->r[30]=R32(c->r[1]+0x00000048u); // 800E58C8
  c->lr=c->r[0]; // 800E58CC
  c->r[1]=c->r[1]+0x00000050u; // 800E58D0
  return; // 800E58D4
}

// fn_800E58D8
void f_800E58D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E58D8
  c->r[0]=c->lr; // 800E58DC
  c->r[8]=0u+0x00000106u; // 800E58E0
  c->r[4]=0u+0x803A0000u; // 800E58E4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800E58E8
  c->r[4]=c->r[4]+0xFFFFE708u; // 800E58EC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E58F0
  c->r[7]=0u+0x00000084u; // 800E58F4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800E58F8
  c->r[31]=0u+0x43300000u; // 800E58FC
  c->r[6]=R32(c->r[4]+0x00000000u); // 800E5900
  c->r[5]=c->r[1]+0x00000014u; // 800E5904
  W32(c->r[1]+0x00000034u,c->r[8]); // 800E5908
  {uint32_t ea=c->r[2]+0xFFFFA618u; c->f[1]=RF64(ea);} // 800E590C
  W32(c->r[1]+0x00000030u,c->r[31]); // 800E5910
  c->r[4]=R32(c->r[4]+0x00000004u); // 800E5914
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800E5918
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E591C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E5920
  W32(c->r[1]+0x00000048u,c->r[30]); // 800E5924
  c->r[30]=c->r[3]|c->r[3]; // 800E5928
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800E592C
  W16(c->r[3]+0x00000074u,c->r[8]); // 800E5930
  c->r[0]=R32(c->r[1]+0x00000028u); // 800E5934
  W16(c->r[3]+0x00000076u,c->r[7]); // 800E5938
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E593C
  W32(c->r[1]+0x00000018u,c->r[4]); // 800E5940
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E5944
  c->r[3]=R32(c->r[3]+0x00000394u); // 800E5948
  W32(c->r[1]+0x00000024u,c->r[4]); // 800E594C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E5950
  W32(c->r[1]+0x00000020u,c->r[6]); // 800E5954
  c->r[4]=R16(c->r[30]+0x00000078u); // 800E5958
  c->lr=0x800E5960u; f_8025E9C0(c); // 800E595C
  c->r[0]=R16(c->r[30]+0x00000076u); // 800E5960
  c->r[5]=c->r[1]+0x00000008u; // 800E5964
  c->r[3]=R32(c->r[1]+0x00000020u); // 800E5968
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800E596C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E5970
  W32(c->r[1]+0x00000038u,c->r[31]); // 800E5974
  {uint32_t ea=c->r[2]+0xFFFFA618u; c->f[1]=RF64(ea);} // 800E5978
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 800E597C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E5980
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E5984
  W32(c->r[1]+0x00000008u,c->r[3]); // 800E5988
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800E598C
  c->r[0]=R32(c->r[1]+0x00000028u); // 800E5990
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5994
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E5998
  c->r[4]=R16(c->r[30]+0x0000007Au); // 800E599C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E59A0
  c->lr=0x800E59A8u; f_8025E9C0(c); // 800E59A4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800E59A8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800E59AC
  c->r[30]=R32(c->r[1]+0x00000048u); // 800E59B0
  c->lr=c->r[0]; // 800E59B4
  c->r[1]=c->r[1]+0x00000050u; // 800E59B8
  return; // 800E59BC
}

// fn_800E59C0
void f_800E59C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E59C0
  c->r[0]=c->lr; // 800E59C4
  c->r[8]=0u+0x000000A2u; // 800E59C8
  c->r[4]=0u+0x803A0000u; // 800E59CC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800E59D0
  c->r[4]=c->r[4]+0xFFFFE708u; // 800E59D4
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E59D8
  c->r[7]=0u+0x0000012Eu; // 800E59DC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800E59E0
  c->r[31]=0u+0x43300000u; // 800E59E4
  c->r[6]=R32(c->r[4]+0x00000000u); // 800E59E8
  c->r[5]=c->r[1]+0x00000020u; // 800E59EC
  W32(c->r[1]+0x0000003Cu,c->r[8]); // 800E59F0
  {uint32_t ea=c->r[2]+0xFFFFA618u; c->f[1]=RF64(ea);} // 800E59F4
  W32(c->r[1]+0x00000038u,c->r[31]); // 800E59F8
  c->r[4]=R32(c->r[4]+0x00000004u); // 800E59FC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 800E5A00
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E5A04
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E5A08
  W32(c->r[1]+0x00000048u,c->r[30]); // 800E5A0C
  c->r[30]=c->r[3]|c->r[3]; // 800E5A10
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800E5A14
  W16(c->r[3]+0x00000074u,c->r[8]); // 800E5A18
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E5A1C
  W16(c->r[3]+0x00000076u,c->r[7]); // 800E5A20
  W32(c->r[1]+0x00000020u,c->r[6]); // 800E5A24
  W32(c->r[1]+0x00000024u,c->r[4]); // 800E5A28
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E5A2C
  c->r[3]=R32(c->r[3]+0x00000394u); // 800E5A30
  W32(c->r[1]+0x00000030u,c->r[4]); // 800E5A34
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E5A38
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800E5A3C
  c->r[4]=R16(c->r[30]+0x00000078u); // 800E5A40
  c->lr=0x800E5A48u; f_8025E9C0(c); // 800E5A44
  c->r[0]=R16(c->r[30]+0x00000076u); // 800E5A48
  c->r[5]=c->r[1]+0x00000014u; // 800E5A4C
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800E5A50
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E5A54
  c->r[0]=R32(c->r[1]+0x00000030u); // 800E5A58
  W32(c->r[1]+0x00000040u,c->r[31]); // 800E5A5C
  {uint32_t ea=c->r[2]+0xFFFFA618u; c->f[1]=RF64(ea);} // 800E5A60
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 800E5A64
  W32(c->r[1]+0x00000018u,c->r[0]); // 800E5A68
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E5A6C
  W32(c->r[1]+0x00000014u,c->r[3]); // 800E5A70
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800E5A74
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E5A78
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E5A7C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E5A80
  c->r[4]=R16(c->r[30]+0x0000007Au); // 800E5A84
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E5A88
  c->lr=0x800E5A90u; f_8025E9C0(c); // 800E5A8C
  c->r[7]=0u+0x803D0000u; // 800E5A90
  {uint32_t ea=c->r[7]+0x00003974u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E5A94
  c->r[3]=c->r[30]|c->r[30]; // 800E5A98
  c->r[4]=c->r[1]+0x00000008u; // 800E5A9C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E5AA0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E5AA4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E5AA8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E5AAC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5AB0
  c->lr=0x800E5AB8u; f_800E5570(c); // 800E5AB4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800E5AB8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800E5ABC
  c->r[30]=R32(c->r[1]+0x00000048u); // 800E5AC0
  c->lr=c->r[0]; // 800E5AC4
  c->r[1]=c->r[1]+0x00000050u; // 800E5AC8
  return; // 800E5ACC
}

// fn_800E5AD0
void f_800E5AD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5AD0
  c->r[0]=c->lr; // 800E5AD4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800E5AD8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800E5ADC
  c->r[31]=c->r[3]|c->r[3]; // 800E5AE0
  W32(c->r[1]+0x00000048u,c->r[30]); // 800E5AE4
  c->r[4]=R16(c->r[3]+0x00000074u); // 800E5AE8
  c->r[0]=c->r[4]+0x00000156u; // 800E5AEC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800E5AF0
  W16(c->r[3]+0x00000074u,c->r[0]); // 800E5AF4
  cmpu(c,0,c->r[4],0x00000168u); // 800E5AF8
  if (crb(c,0)) { goto L_800E5B08; } // 800E5AFC
  c->r[0]=c->r[4]+0xFFFFFE98u; // 800E5B00
  W16(c->r[3]+0x00000074u,c->r[0]); // 800E5B04
L_800E5B08:;
  c->r[4]=R16(c->r[3]+0x00000076u); // 800E5B08
  c->r[4]=c->r[4]+0x00000002u; // 800E5B0C
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; // 800E5B10
  W16(c->r[3]+0x00000076u,c->r[4]); // 800E5B14
  cmpu(c,0,c->r[0],0x00000168u); // 800E5B18
  if (!crb(c,2)) { goto L_800E5B6C; } // 800E5B1C
  c->r[0]=0u+0x00000000u; // 800E5B20
  c->r[4]=0u+0x00000320u; // 800E5B24
  W16(c->r[3]+0x00000076u,c->r[0]); // 800E5B28
  W16(c->r[3]+0x00000074u,c->r[0]); // 800E5B2C
  c->r[3]=c->r[3]+0x0000000Cu; // 800E5B30
  c->lr=0x800E5B38u; f_80036430(c); // 800E5B34
  c->r[3]=c->r[31]|c->r[31]; // 800E5B38
  c->r[4]=0u+0x00000004u; // 800E5B3C
  c->r[5]=0u+0x00000003u; // 800E5B40
  c->r[6]=0u+0x00000001u; // 800E5B44
  c->r[7]=0u+0x00000001u; // 800E5B48
  c->lr=0x800E5B50u; f_8017900C(c); // 800E5B4C
  {uint32_t ea=c->r[2]+0xFFFFA610u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E5B50
  c->r[3]=c->r[31]|c->r[31]; // 800E5B54
  c->r[4]=0u+0x00000065u; // 800E5B58
  c->r[5]=0u+0x00000000u; // 800E5B5C
  c->r[6]=0u+0x00000000u; // 800E5B60
  c->r[7]=0u+0x00000000u; // 800E5B64
  c->lr=0x800E5B6Cu; f_801F4D44(c); // 800E5B68
L_800E5B6C:;
  c->r[0]=R16(c->r[31]+0x00000074u); // 800E5B6C
  c->r[30]=0u+0x43300000u; // 800E5B70
  c->r[3]=0u+0x803A0000u; // 800E5B74
  {uint32_t ea=c->r[3]+0xFFFFE708u; c->r[6]=R32(ea); c->r[3]=ea;} // 800E5B78
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E5B7C
  c->r[5]=c->r[1]+0x00000014u; // 800E5B80
  c->r[4]=R32(c->r[3]+0x00000004u); // 800E5B84
  W32(c->r[1]+0x00000030u,c->r[30]); // 800E5B88
  c->r[0]=R32(c->r[3]+0x00000008u); // 800E5B8C
  {uint32_t ea=c->r[2]+0xFFFFA618u; c->f[1]=RF64(ea);} // 800E5B90
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800E5B94
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E5B98
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E5B9C
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E5BA0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800E5BA4
  c->r[0]=R32(c->r[1]+0x00000028u); // 800E5BA8
  W32(c->r[1]+0x00000018u,c->r[4]); // 800E5BAC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E5BB0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E5BB4
  W32(c->r[1]+0x00000024u,c->r[4]); // 800E5BB8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E5BBC
  W32(c->r[1]+0x00000020u,c->r[6]); // 800E5BC0
  c->r[4]=R16(c->r[31]+0x00000078u); // 800E5BC4
  c->lr=0x800E5BCCu; f_8025E9C0(c); // 800E5BC8
  c->r[0]=R16(c->r[31]+0x00000076u); // 800E5BCC
  c->r[5]=c->r[1]+0x00000008u; // 800E5BD0
  c->r[3]=R32(c->r[1]+0x00000020u); // 800E5BD4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800E5BD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E5BDC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800E5BE0
  {uint32_t ea=c->r[2]+0xFFFFA618u; c->f[1]=RF64(ea);} // 800E5BE4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 800E5BE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E5BEC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E5BF0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800E5BF4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800E5BF8
  c->r[0]=R32(c->r[1]+0x00000028u); // 800E5BFC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5C00
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E5C04
  c->r[4]=R16(c->r[31]+0x0000007Au); // 800E5C08
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E5C0C
  c->lr=0x800E5C14u; f_8025E9C0(c); // 800E5C10
  c->r[0]=R32(c->r[1]+0x00000054u); // 800E5C14
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800E5C18
  c->r[30]=R32(c->r[1]+0x00000048u); // 800E5C1C
  c->lr=c->r[0]; // 800E5C20
  c->r[1]=c->r[1]+0x00000050u; // 800E5C24
  return; // 800E5C28
}

// fn_800E5C2C
void f_800E5C2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5C2C
  c->r[0]=c->lr; // 800E5C30
  c->r[4]=c->r[3]|c->r[3]; // 800E5C34
  c->r[3]=0u+0x00000267u; // 800E5C38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5C3C
  c->r[5]=0u+0x00000000u; // 800E5C40
  c->r[4]=R32(c->r[4]+0x00000394u); // 800E5C44
  c->r[4]=c->r[4]+0x0000010Cu; // 800E5C48
  c->lr=0x800E5C50u; f_8024EE50(c); // 800E5C4C
  c->r[0]=cntlz(c->r[3]); // 800E5C50
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E5C54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5C58
  c->lr=c->r[0]; // 800E5C5C
  c->r[1]=c->r[1]+0x00000010u; // 800E5C60
  return; // 800E5C64
}

// fn_800E5C68
void f_800E5C68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5C68
  c->r[0]=c->lr; // 800E5C6C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800E5C70
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800E5C74
  c->r[31]=c->r[3]|c->r[3]; // 800E5C78
  W32(c->r[1]+0x00000048u,c->r[30]); // 800E5C7C
  c->r[30]=0u+0x803D0000u; // 800E5C80
  c->r[30]=c->r[30]+0x00003950u; // 800E5C84
  c->lr=0x800E5C8Cu; f_801F4F28(c); // 800E5C88
  c->r[3]=R32(c->r[31]+0x000003C0u); // 800E5C8C
  cmps(c,0,(int32_t)c->r[3],102); // 800E5C90
  if (crb(c,2)) { goto L_800E5DCC; } // 800E5C94
  if (!crb(c,0)) { goto L_800E5CAC; } // 800E5C98
  cmps(c,0,(int32_t)c->r[3],100); // 800E5C9C
  if (crb(c,2)) { goto L_800E5CBC; } // 800E5CA0
  if (!crb(c,0)) { goto L_800E5D00; } // 800E5CA4
  goto L_800E5E0C; // 800E5CA8
L_800E5CAC:;
  cmps(c,0,(int32_t)c->r[3],104); // 800E5CAC
  if (crb(c,2)) { goto L_800E5D88; } // 800E5CB0
  if (!crb(c,0)) { goto L_800E5E0C; } // 800E5CB4
  goto L_800E5D44; // 800E5CB8
L_800E5CBC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800E5CBC
  cmps(c,0,(int32_t)c->r[0],100); // 800E5CC0
  if (crb(c,2)) { goto L_800E5E0C; } // 800E5CC4
  W16(c->r[31]+0x000003BCu,c->r[3]); // 800E5CC8
  c->r[3]=c->r[31]|c->r[31]; // 800E5CCC
  c->lr=0x800E5CD4u; f_800E5F98(c); // 800E5CD0
  c->r[4]=c->r[30]+0x00000030u; // 800E5CD4
  c->r[6]=R32(c->r[30]+0x00000030u); // 800E5CD8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E5CDC
  c->r[3]=c->r[31]|c->r[31]; // 800E5CE0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E5CE4
  c->r[4]=c->r[1]+0x00000038u; // 800E5CE8
  W32(c->r[1]+0x00000038u,c->r[6]); // 800E5CEC
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 800E5CF0
  W32(c->r[1]+0x00000040u,c->r[0]); // 800E5CF4
  c->lr=0x800E5CFCu; f_800E5570(c); // 800E5CF8
  goto L_800E5E0C; // 800E5CFC
L_800E5D00:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800E5D00
  cmps(c,0,(int32_t)c->r[0],101); // 800E5D04
  if (crb(c,2)) { goto L_800E5E0C; } // 800E5D08
  W16(c->r[31]+0x000003BCu,c->r[3]); // 800E5D0C
  c->r[3]=c->r[31]|c->r[31]; // 800E5D10
  c->lr=0x800E5D18u; f_800E5EF8(c); // 800E5D14
  c->r[4]=c->r[30]+0x0000003Cu; // 800E5D18
  c->r[6]=R32(c->r[30]+0x0000003Cu); // 800E5D1C
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E5D20
  c->r[3]=c->r[31]|c->r[31]; // 800E5D24
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E5D28
  c->r[4]=c->r[1]+0x0000002Cu; // 800E5D2C
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800E5D30
  W32(c->r[1]+0x00000030u,c->r[5]); // 800E5D34
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E5D38
  c->lr=0x800E5D40u; f_800E5570(c); // 800E5D3C
  goto L_800E5E0C; // 800E5D40
L_800E5D44:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800E5D44
  cmps(c,0,(int32_t)c->r[0],103); // 800E5D48
  if (crb(c,2)) { goto L_800E5E0C; } // 800E5D4C
  W16(c->r[31]+0x000003BCu,c->r[3]); // 800E5D50
  c->r[3]=c->r[31]|c->r[31]; // 800E5D54
  c->lr=0x800E5D5Cu; f_800E5F98(c); // 800E5D58
  c->r[4]=c->r[30]+0x00000048u; // 800E5D5C
  c->r[6]=R32(c->r[30]+0x00000048u); // 800E5D60
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E5D64
  c->r[3]=c->r[31]|c->r[31]; // 800E5D68
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E5D6C
  c->r[4]=c->r[1]+0x00000020u; // 800E5D70
  W32(c->r[1]+0x00000020u,c->r[6]); // 800E5D74
  W32(c->r[1]+0x00000024u,c->r[5]); // 800E5D78
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E5D7C
  c->lr=0x800E5D84u; f_800E5570(c); // 800E5D80
  goto L_800E5E0C; // 800E5D84
L_800E5D88:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800E5D88
  cmps(c,0,(int32_t)c->r[0],104); // 800E5D8C
  if (crb(c,2)) { goto L_800E5E0C; } // 800E5D90
  W16(c->r[31]+0x000003BCu,c->r[3]); // 800E5D94
  c->r[3]=c->r[31]|c->r[31]; // 800E5D98
  c->lr=0x800E5DA0u; f_800E5F98(c); // 800E5D9C
  c->r[4]=c->r[30]+0x00000054u; // 800E5DA0
  c->r[6]=R32(c->r[30]+0x00000054u); // 800E5DA4
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E5DA8
  c->r[3]=c->r[31]|c->r[31]; // 800E5DAC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E5DB0
  c->r[4]=c->r[1]+0x00000014u; // 800E5DB4
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E5DB8
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E5DBC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E5DC0
  c->lr=0x800E5DC8u; f_800E5570(c); // 800E5DC4
  goto L_800E5E0C; // 800E5DC8
L_800E5DCC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800E5DCC
  cmps(c,0,(int32_t)c->r[0],102); // 800E5DD0
  if (crb(c,2)) { goto L_800E5E0C; } // 800E5DD4
  W16(c->r[31]+0x000003BCu,c->r[3]); // 800E5DD8
  c->r[3]=c->r[31]|c->r[31]; // 800E5DDC
  c->lr=0x800E5DE4u; f_800E5F98(c); // 800E5DE0
  c->r[4]=c->r[30]+0x00000060u; // 800E5DE4
  c->r[6]=R32(c->r[30]+0x00000060u); // 800E5DE8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E5DEC
  c->r[3]=c->r[31]|c->r[31]; // 800E5DF0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E5DF4
  c->r[4]=c->r[1]+0x00000008u; // 800E5DF8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E5DFC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E5E00
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5E04
  c->lr=0x800E5E0Cu; f_800E5570(c); // 800E5E08
L_800E5E0C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800E5E0C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800E5E10
  c->r[30]=R32(c->r[1]+0x00000048u); // 800E5E14
  c->lr=c->r[0]; // 800E5E18
  c->r[1]=c->r[1]+0x00000050u; // 800E5E1C
  return; // 800E5E20
}

// fn_800E5E24
void f_800E5E24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5E24
  c->r[0]=c->lr; // 800E5E28
  c->r[5]=0u+0x80620000u; // 800E5E2C
  c->r[4]=0u+0x00000002u; // 800E5E30
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800E5E34
  c->r[5]=c->r[5]+0x00007688u; // 800E5E38
  W32(c->r[1]+0x000000BCu,c->r[31]); // 800E5E3C
  W32(c->r[1]+0x000000B8u,c->r[30]); // 800E5E40
  c->r[30]=c->r[3]|c->r[3]; // 800E5E44
  c->r[3]=R32(c->r[5]+0x00000014u); // 800E5E48
  c->lr=0x800E5E50u; f_80037670(c); // 800E5E4C
  cmps(c,0,(int32_t)c->r[3],0); // 800E5E50
  if (!crb(c,2)) { goto L_800E5EE0; } // 800E5E54
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E5E58
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800E5E5C
  cmps(c,0,(int32_t)c->r[0],0); // 800E5E60
  if (!crb(c,2)) { goto L_800E5EE0; } // 800E5E64
  {uint32_t ea=c->r[2]+0xFFFFA620u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E5E68
  c->r[3]=0u+0x803A0000u; // 800E5E6C
  {uint32_t ea=c->r[2]+0xFFFFA624u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5E70
  c->r[3]=c->r[3]+0xFFFFE714u; // 800E5E74
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800E5E78
  c->r[4]=c->r[3]+0x00000009u; // 800E5E7C
  c->r[5]=c->r[1]+0x00000020u; // 800E5E80
  c->r[6]=0u+0x00000001u; // 800E5E84
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800E5E88
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800E5E8C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E5E90
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E5E94
  c->lr=0x800E5E9Cu; f_80257018(c); // 800E5E98
  c->r[4]=0u+0x803A0000u; // 800E5E9C
  c->r[3]=c->r[1]+0x00000020u; // 800E5EA0
  c->r[4]=c->r[4]+0xFFFFE708u; // 800E5EA4
  c->r[5]=c->r[1]+0x00000014u; // 800E5EA8
  c->lr=0x800E5EB0u; f_80296750(c); // 800E5EAC
  c->r[31]=0u+0x80550000u; // 800E5EB0
  c->r[5]=c->r[30]|c->r[30]; // 800E5EB4
  c->r[31]=c->r[31]+0x00003D60u; // 800E5EB8
  c->r[6]=c->r[1]+0x00000014u; // 800E5EBC
  c->r[3]=c->r[31]+0x00000010u; // 800E5EC0
  c->r[7]=c->r[1]+0x00000008u; // 800E5EC4
  c->r[8]=c->r[1]+0x00000050u; // 800E5EC8
  c->r[4]=0u+0x000001FFu; // 800E5ECC
  c->lr=0x800E5ED4u; f_802264E4(c); // 800E5ED0
  c->r[3]=c->r[31]+0x00000010u; // 800E5ED4
  c->r[4]=c->r[1]+0x00000050u; // 800E5ED8
  c->lr=0x800E5EE0u; f_80226D68(c); // 800E5EDC
L_800E5EE0:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800E5EE0
  c->r[31]=R32(c->r[1]+0x000000BCu); // 800E5EE4
  c->r[30]=R32(c->r[1]+0x000000B8u); // 800E5EE8
  c->lr=c->r[0]; // 800E5EEC
  c->r[1]=c->r[1]+0x000000C0u; // 800E5EF0
  return; // 800E5EF4
}

// fn_800E5EF8
void f_800E5EF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5EF8
  c->r[0]=c->lr; // 800E5EFC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800E5F00
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800E5F04
  W32(c->r[1]+0x00000048u,c->r[30]); // 800E5F08
  W32(c->r[1]+0x00000044u,c->r[29]); // 800E5F0C
  c->r[29]=c->r[3]|c->r[3]; // 800E5F10
  c->r[0]=R8(c->r[3]+0x00000084u); // 800E5F14
  cmpu(c,0,c->r[0],0x000000FFu); // 800E5F18
  if (crb(c,2)) { goto L_800E5F24; } // 800E5F1C
  c->lr=0x800E5F24u; f_800E5F98(c); // 800E5F20
L_800E5F24:;
  c->r[31]=0u+0x803A0000u; // 800E5F24
  c->r[30]=0u+0x80550000u; // 800E5F28
  c->r[31]=c->r[31]+0xFFFFE714u; // 800E5F2C
  c->r[5]=0u+0x00000000u; // 800E5F30
  c->r[3]=c->r[30]+0xFFFFC848u; // 800E5F34
  c->r[6]=0u+0x00000000u; // 800E5F38
  c->r[4]=c->r[31]+0x0000001Bu; // 800E5F3C
  c->lr=0x800E5F44u; f_8018D3E4(c); // 800E5F40
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800E5F44
  W8(c->r[29]+0x00000084u,c->r[3]); // 800E5F48
  cmpu(c,0,c->r[0],0x000000FFu); // 800E5F4C
  if (crb(c,2)) { goto L_800E5F7C; } // 800E5F50
  c->r[3]=R32(c->r[29]+0x00000394u); // 800E5F54
  c->r[4]=c->r[31]|c->r[31]; // 800E5F58
  c->r[5]=c->r[1]+0x00000008u; // 800E5F5C
  c->r[6]=0u+0x00000001u; // 800E5F60
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E5F64
  c->lr=0x800E5F6Cu; f_80257018(c); // 800E5F68
  c->r[4]=R8(c->r[29]+0x00000084u); // 800E5F6C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800E5F70
  c->r[5]=c->r[1]+0x00000008u; // 800E5F74
  c->lr=0x800E5F7Cu; f_8018DEB8(c); // 800E5F78
L_800E5F7C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800E5F7C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800E5F80
  c->r[30]=R32(c->r[1]+0x00000048u); // 800E5F84
  c->r[29]=R32(c->r[1]+0x00000044u); // 800E5F88
  c->lr=c->r[0]; // 800E5F8C
  c->r[1]=c->r[1]+0x00000050u; // 800E5F90
  return; // 800E5F94
}

// fn_800E5F98
void f_800E5F98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5F98
  c->r[0]=c->lr; // 800E5F9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5FA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5FA4
  c->r[31]=c->r[3]|c->r[3]; // 800E5FA8
  c->r[4]=R8(c->r[3]+0x00000084u); // 800E5FAC
  cmpu(c,0,c->r[4],0x000000FFu); // 800E5FB0
  if (crb(c,2)) { goto L_800E5FCC; } // 800E5FB4
  c->r[3]=0u+0x80550000u; // 800E5FB8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E5FBC
  c->lr=0x800E5FC4u; f_8018D694(c); // 800E5FC0
  c->r[0]=0u+0x000000FFu; // 800E5FC4
  W8(c->r[31]+0x00000084u,c->r[0]); // 800E5FC8
L_800E5FCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5FCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E5FD0
  c->lr=c->r[0]; // 800E5FD4
  c->r[1]=c->r[1]+0x00000010u; // 800E5FD8
  return; // 800E5FDC
}

// fn_800E5FE0
void f_800E5FE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5FE0
  c->r[0]=c->lr; // 800E5FE4
  cmps(c,0,(int32_t)c->r[3],0); // 800E5FE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5FEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5FF0
  c->r[31]=c->r[4]|c->r[4]; // 800E5FF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E5FF8
  c->r[30]=c->r[3]|c->r[3]; // 800E5FFC
  if (crb(c,2)) { goto L_800E601C; } // 800E6000
  c->r[4]=0u+0x00000000u; // 800E6004
  c->lr=0x800E600Cu; f_8026A06C(c); // 800E6008
  cmps(c,0,(int32_t)c->r[31],0); // 800E600C
  if (!crb(c,1)) { goto L_800E601C; } // 800E6010
  c->r[3]=c->r[30]|c->r[30]; // 800E6014
  c->lr=0x800E601Cu; f_8026A268(c); // 800E6018
L_800E601C:;
  c->r[3]=c->r[30]|c->r[30]; // 800E601C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6020
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E6024
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6028
  c->lr=c->r[0]; // 800E602C
  c->r[1]=c->r[1]+0x00000010u; // 800E6030
  return; // 800E6034
}

// fn_800E6038
void f_800E6038(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6038
  c->r[0]=c->lr; // 800E603C
  c->r[4]=0u+0x00000000u; // 800E6040
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6044
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E6048
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E604C
  c->r[30]=c->r[3]|c->r[3]; // 800E6050
  c->lr=0x800E6058u; f_801F57D0(c); // 800E6054
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E6058
  c->r[3]=c->r[30]|c->r[30]; // 800E605C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E6060
  c->ctr=c->r[12]; // 800E6064
  if (true) { c->lr=0x800E606Cu; dispatch(c,c->ctr); } // 800E6068
  c->r[3]=c->r[30]|c->r[30]; // 800E606C
  c->lr=0x800E6074u; f_801F4B94(c); // 800E6070
  c->r[3]=0u+0x00000003u; // 800E6074
  c->r[0]=0u+0x00000051u; // 800E6078
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800E607C
  c->r[3]=c->r[30]|c->r[30]; // 800E6080
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E6084
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800E6088
  c->lr=0x800E6090u; f_801F58BC(c); // 800E608C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E6090
  c->r[31]=0u+0x00000000u; // 800E6094
  {uint32_t ea=c->r[2]+0xFFFFA630u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6098
  c->r[3]=c->r[30]+0x0000000Cu; // 800E609C
  W8(c->r[4]+0x0000001Cu,c->r[31]); // 800E60A0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E60A4
  W32(c->r[4]+0x000000E4u,c->r[31]); // 800E60A8
  c->lr=0x800E60B0u; f_80037668(c); // 800E60AC
  {uint32_t ea=c->r[2]+0xFFFFA630u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E60B0
  c->r[3]=c->r[30]|c->r[30]; // 800E60B4
  W8(c->r[30]+0x0000007Eu,c->r[31]); // 800E60B8
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[0]);} // 800E60BC
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800E60C0
  c->lr=0x800E60C8u; f_801F56F4(c); // 800E60C4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E60C8
  c->r[3]=c->r[30]|c->r[30]; // 800E60CC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E60D0
  c->ctr=c->r[12]; // 800E60D4
  if (true) { c->lr=0x800E60DCu; dispatch(c,c->ctr); } // 800E60D8
  c->r[3]=c->r[30]|c->r[30]; // 800E60DC
  c->r[4]=0u+0x00000002u; // 800E60E0
  c->r[5]=0u+0x00000018u; // 800E60E4
  c->r[6]=0u+0x00000001u; // 800E60E8
  c->r[7]=0u+0x00000001u; // 800E60EC
  c->lr=0x800E60F4u; f_8017900C(c); // 800E60F0
  c->r[0]=0u+0x00000001u; // 800E60F4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 800E60F8
  W32(c->r[30]+0x00000444u,c->r[0]); // 800E60FC
  c->lr=0x800E6104u; f_8024E174(c); // 800E6100
  W32(c->r[30]+0x00000438u,c->r[3]); // 800E6104
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6108
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E610C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6110
  c->lr=c->r[0]; // 800E6114
  c->r[1]=c->r[1]+0x00000010u; // 800E6118
  return; // 800E611C
}

// fn_800E6120
void f_800E6120(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6120
  c->r[0]=c->lr; // 800E6124
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E612C
  c->r[31]=c->r[3]|c->r[3]; // 800E6130
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800E6134
  c->r[12]=R32(c->r[12]+0x00000068u); // 800E6138
  c->ctr=c->r[12]; // 800E613C
  if (true) { c->lr=0x800E6144u; dispatch(c,c->ctr); } // 800E6140
  c->r[3]=c->r[31]|c->r[31]; // 800E6144
  c->lr=0x800E614Cu; f_801F4C0C(c); // 800E6148
  c->r[3]=c->r[31]|c->r[31]; // 800E614C
  c->lr=0x800E6154u; f_800E6588(c); // 800E6150
  c->r[3]=c->r[31]|c->r[31]; // 800E6154
  c->lr=0x800E615Cu; f_801F56F4(c); // 800E6158
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E615C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6160
  c->lr=c->r[0]; // 800E6164
  c->r[1]=c->r[1]+0x00000010u; // 800E6168
  return; // 800E616C
}

// fn_800E6170
void f_800E6170(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800E6170
}

// fn_800E6174
void f_800E6174(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6174
  c->r[0]=c->lr; // 800E6178
  W32(c->r[1]+0x00000054u,c->r[0]); // 800E617C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800E6180
  W32(c->r[1]+0x00000048u,c->r[30]); // 800E6184
  c->r[30]=c->r[3]|c->r[3]; // 800E6188
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800E618C
  c->lr=0x800E6194u; f_80035554(c); // 800E6190
  c->r[31]=R32(c->r[30]+0x00000074u); // 800E6194
  cmps(c,0,(int32_t)c->r[31],0); // 800E6198
  if (crb(c,2)) { goto L_800E6480; } // 800E619C
  c->r[5]=R8(c->r[30]+0x0000007Cu); // 800E61A0
  c->r[3]=c->r[31]|c->r[31]; // 800E61A4
  c->r[4]=c->r[1]+0x00000008u; // 800E61A8
  c->lr=0x800E61B0u; f_8007C6C8(c); // 800E61AC
  c->r[3]=R8(c->r[30]+0x0000007Eu); // 800E61B0
  cmps(c,0,(int32_t)c->r[3],1); // 800E61B4
  if (crb(c,2)) { goto L_800E62DC; } // 800E61B8
  if (!crb(c,0)) { goto L_800E63F4; } // 800E61BC
  cmps(c,0,(int32_t)c->r[3],0); // 800E61C0
  if (!crb(c,0)) { goto L_800E61CC; } // 800E61C4
  goto L_800E63F4; // 800E61C8
L_800E61CC:;
  c->r[0]=c->r[3]+0x00000001u; // 800E61CC
  c->r[3]=c->r[30]+0x0000002Cu; // 800E61D0
  W8(c->r[30]+0x0000007Eu,c->r[0]); // 800E61D4
  c->r[4]=c->r[31]+0x0000002Cu; // 800E61D8
  c->lr=0x800E61E0u; f_800361A0(c); // 800E61DC
  {uint32_t ea=c->r[2]+0xFFFFA630u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E61E0
  c->r[3]=0u+0x80550000u; // 800E61E4
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E61E8
  c->r[3]=c->r[3]+0x00003D60u; // 800E61EC
  c->f[3]=c->f[1]; // 800E61F0
  {uint32_t ea=c->r[2]+0xFFFFA634u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E61F4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800E61F8
  c->r[4]=c->r[30]+0x0000002Cu; // 800E61FC
  c->r[5]=c->r[1]+0x0000000Cu; // 800E6200
  c->r[6]=0u+0x00000000u; // 800E6204
  c->r[7]=0u+0x00000000u; // 800E6208
  c->lr=0x800E6210u; f_801D5488(c); // 800E620C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E6210
  c->r[4]=c->r[30]+0x0000002Cu; // 800E6214
  c->r[3]=c->r[3]+0x0000005Cu; // 800E6218
  c->lr=0x800E6220u; f_800361A0(c); // 800E621C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E6220
  c->r[4]=c->r[30]|c->r[30]; // 800E6224
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6228
  c->r[7]=c->r[1]+0x00000028u; // 800E622C
  {uint32_t ea=c->r[3]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6230
  c->r[8]=0u+0x00000000u; // 800E6234
  {uint32_t ea=c->r[2]+0xFFFFA638u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E6238
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 800E623C
  {uint32_t ea=c->r[2]+0xFFFFA63Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6240
  {uint32_t ea=c->r[2]+0xFFFFA630u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6244
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[2]);} // 800E6248
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E624C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[2]);} // 800E6250
  {uint32_t ea=c->r[30]+0x00000030u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E6254
  {uint32_t ea=c->r[30]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E6258
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800E625C
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800E6260
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800E6264
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[3]);} // 800E6268
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800E626C
  c->r[0]=R32(c->r[30]+0x00000030u); // 800E6270
  W32(c->r[1]+0x00000028u,c->r[3]); // 800E6274
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800E6278
  c->r[0]=R32(c->r[30]+0x00000034u); // 800E627C
  W32(c->r[1]+0x00000030u,c->r[0]); // 800E6280
  c->r[6]=R8(c->r[30]+0x0000007Cu); // 800E6284
  c->r[3]=R32(c->r[30]+0x00000438u); // 800E6288
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E628C
  c->r[6]=c->r[6]+0x00000028u; // 800E6290
  c->lr=0x800E6298u; f_801FA6A4(c); // 800E6294
  c->r[7]=0u+0x803A0000u; // 800E6298
  {uint32_t ea=c->r[7]+0xFFFFE744u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E629C
  c->r[3]=c->r[30]+0x00000044u; // 800E62A0
  c->r[4]=c->r[1]+0x00000034u; // 800E62A4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E62A8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E62AC
  W32(c->r[1]+0x00000034u,c->r[6]); // 800E62B0
  W32(c->r[1]+0x00000038u,c->r[5]); // 800E62B4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800E62B8
  c->lr=0x800E62C0u; f_800361A0(c); // 800E62BC
  c->r[6]=0u+0x803A0000u; // 800E62C0
  c->r[3]=R32(c->r[30]+0x00000438u); // 800E62C4
  c->r[5]=c->r[30]+0x00000044u; // 800E62C8
  c->r[4]=0u+0x00000000u; // 800E62CC
  c->r[6]=c->r[6]+0xFFFFE738u; // 800E62D0
  c->lr=0x800E62D8u; f_801FBEC0(c); // 800E62D4
  goto L_800E63F4; // 800E62D8
L_800E62DC:;
  c->r[3]=R32(c->r[30]+0x00000438u); // 800E62DC
  c->r[4]=0u+0x00000000u; // 800E62E0
  c->lr=0x800E62E8u; f_801FAF00(c); // 800E62E4
  cmps(c,0,(int32_t)c->r[3],0); // 800E62E8
  if (crb(c,2)) { goto L_800E6300; } // 800E62EC
  c->r[3]=R32(c->r[30]+0x00000438u); // 800E62F0
  c->lr=0x800E62F8u; f_80050BE4(c); // 800E62F4
  cmpu(c,0,c->r[3],0x00000001u); // 800E62F8
  if (!crb(c,2)) { goto L_800E63E4; } // 800E62FC
L_800E6300:;
  c->r[3]=0u+0x80620000u; // 800E6300
  c->r[4]=R8(c->r[30]+0x0000007Du); // 800E6304
  c->r[3]=c->r[3]+0x00007688u; // 800E6308
  c->r[5]=0u+0x00000000u; // 800E630C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800E6310
  c->lr=0x800E6318u; f_80038998(c); // 800E6314
  c->r[0]=R8(c->r[31]+0x0000006Cu); // 800E6318
  cmpu(c,0,c->r[0],0x00000004u); // 800E631C
  if (!crb(c,2)) { goto L_800E6338; } // 800E6320
  c->r[0]=R8(c->r[31]+0x0000006Du); // 800E6324
  cmpu(c,0,c->r[0],0x0000000Bu); // 800E6328
  if (!crb(c,2)) { goto L_800E6338; } // 800E632C
  c->r[0]=0u+0x00000001u; // 800E6330
  W8(c->r[31]+0x0000007Cu,c->r[0]); // 800E6334
L_800E6338:;
  c->r[0]=R8(c->r[30]+0x0000007Cu); // 800E6338
  cmps(c,0,(int32_t)c->r[0],0); // 800E633C
  if (!crb(c,2)) { goto L_800E6360; } // 800E6340
  c->r[3]=c->r[30]|c->r[30]; // 800E6344
  c->r[4]=0u+0x00000002u; // 800E6348
  c->r[5]=0u+0x00000014u; // 800E634C
  c->r[6]=0u+0x00000001u; // 800E6350
  c->r[7]=0u+0x00000001u; // 800E6354
  c->lr=0x800E635Cu; f_8017900C(c); // 800E6358
  goto L_800E6378; // 800E635C
L_800E6360:;
  c->r[3]=c->r[30]|c->r[30]; // 800E6360
  c->r[4]=0u+0x00000002u; // 800E6364
  c->r[5]=0u+0x00000012u; // 800E6368
  c->r[6]=0u+0x00000001u; // 800E636C
  c->r[7]=0u+0x00000001u; // 800E6370
  c->lr=0x800E6378u; f_8017900C(c); // 800E6374
L_800E6378:;
  c->r[7]=0u+0x803D0000u; // 800E6378
  {uint32_t ea=c->r[7]+0x00003B00u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E637C
  c->r[3]=c->r[30]|c->r[30]; // 800E6380
  c->r[4]=c->r[1]+0x0000001Cu; // 800E6384
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E6388
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E638C
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800E6390
  W32(c->r[1]+0x00000020u,c->r[5]); // 800E6394
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E6398
  c->lr=0x800E63A0u; f_800E6498(c); // 800E639C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E63A0
  c->r[3]=0u+0x80550000u; // 800E63A4
  {uint32_t ea=c->r[2]+0xFFFFA630u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E63A8
  c->r[3]=c->r[3]+0x00003D60u; // 800E63AC
  {uint32_t ea=c->r[4]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E63B0
  c->r[5]=c->r[1]+0x0000000Cu; // 800E63B4
  c->f[3]=c->f[1]; // 800E63B8
  {uint32_t ea=c->r[2]+0xFFFFA634u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E63BC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800E63C0
  c->r[6]=0u+0x00000000u; // 800E63C4
  c->r[7]=0u+0x00000000u; // 800E63C8
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E63CC
  c->r[4]=c->r[4]+0x0000005Cu; // 800E63D0
  c->lr=0x800E63D8u; f_801D5488(c); // 800E63D4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E63D8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E63DC
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 800E63E0
L_800E63E4:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E63E4
  c->r[3]=c->r[30]+0x0000002Cu; // 800E63E8
  c->r[4]=c->r[4]+0x0000005Cu; // 800E63EC
  c->lr=0x800E63F4u; f_800361A0(c); // 800E63F0
L_800E63F4:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800E63F4
  c->r[4]=c->r[30]+0x0000002Cu; // 800E63F8
  c->lr=0x800E6400u; f_800361A0(c); // 800E63FC
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6400
  c->r[4]=c->r[31]+0x0000002Cu; // 800E6404
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6408
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800E640C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800E6410
  c->r[3]=R32(c->r[1]+0x00000008u); // 800E6414
  c->r[3]=c->r[3]+0x0000005Cu; // 800E6418
  c->lr=0x800E6420u; f_800361A0(c); // 800E641C
  c->r[6]=R32(c->r[1]+0x00000008u); // 800E6420
  c->r[3]=0u+0x805D0000u; // 800E6424
  c->r[3]=c->r[3]+0x00006CF8u; // 800E6428
  c->r[4]=c->r[1]+0x00000010u; // 800E642C
  {uint32_t ea=c->r[6]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6430
  c->r[5]=0u+0x00040000u; // 800E6434
  {uint32_t ea=c->r[6]+0x000000BCu; WF32(ea,c->f[0]);} // 800E6438
  c->r[6]=R32(c->r[1]+0x00000008u); // 800E643C
  {uint32_t ea=c->r[6]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6440
  {uint32_t ea=c->r[6]+0x000000CCu; WF32(ea,c->f[0]);} // 800E6444
  c->r[6]=R32(c->r[1]+0x00000008u); // 800E6448
  {uint32_t ea=c->r[6]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E644C
  {uint32_t ea=c->r[6]+0x000000DCu; WF32(ea,c->f[0]);} // 800E6450
  c->r[6]=R32(c->r[30]+0x0000002Cu); // 800E6454
  c->r[0]=R32(c->r[30]+0x00000030u); // 800E6458
  W32(c->r[1]+0x00000010u,c->r[6]); // 800E645C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6460
  c->r[0]=R32(c->r[30]+0x00000034u); // 800E6464
  W32(c->r[1]+0x00000018u,c->r[0]); // 800E6468
  c->lr=0x800E6470u; f_802236F8(c); // 800E646C
  c->r[0]=c->r[3]|c->r[3]; // 800E6470
  c->r[3]=c->r[31]|c->r[31]; // 800E6474
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800E6478
  c->lr=0x800E6480u; f_800A4AE4(c); // 800E647C
L_800E6480:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800E6480
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800E6484
  c->r[30]=R32(c->r[1]+0x00000048u); // 800E6488
  c->lr=c->r[0]; // 800E648C
  c->r[1]=c->r[1]+0x00000050u; // 800E6490
  return; // 800E6494
}

// fn_800E6498
void f_800E6498(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6498
  c->r[0]=c->lr; // 800E649C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E64A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E64A4
  c->r[31]=c->r[4]|c->r[4]; // 800E64A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E64AC
  c->r[30]=c->r[3]|c->r[3]; // 800E64B0
  c->r[3]=c->r[31]|c->r[31]; // 800E64B4
  c->lr=0x800E64BCu; f_802B9FDC(c); // 800E64B8
  cmps(c,0,(int32_t)c->r[3],0); // 800E64BC
  if (crb(c,2)) { goto L_800E64DC; } // 800E64C0
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E64C4
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E64C8
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E64CC
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E64D0
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E64D4
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E64D8
L_800E64DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E64DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E64E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E64E4
  c->lr=c->r[0]; // 800E64E8
  c->r[1]=c->r[1]+0x00000010u; // 800E64EC
  return; // 800E64F0
}

// fn_800E64F4
void f_800E64F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E64F4
  c->r[0]=c->lr; // 800E64F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E64FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E6500
  c->r[31]=c->r[3]|c->r[3]; // 800E6504
  c->lr=0x800E650Cu; f_801F51B8(c); // 800E6508
  c->r[7]=0u+0x803D0000u; // 800E650C
  {uint32_t ea=c->r[7]+0x00003B0Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E6510
  c->r[3]=c->r[31]|c->r[31]; // 800E6514
  c->r[4]=c->r[1]+0x00000008u; // 800E6518
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E651C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E6520
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E6524
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E6528
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E652C
  c->lr=0x800E6534u; f_800E6498(c); // 800E6530
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E6534
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E6538
  c->lr=c->r[0]; // 800E653C
  c->r[1]=c->r[1]+0x00000020u; // 800E6540
  return; // 800E6544
}

// fn_800E6548
void f_800E6548(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6548
  c->r[0]=c->lr; // 800E654C
  c->r[4]=c->r[3]|c->r[3]; // 800E6550
  c->r[3]=0u+0x00000294u; // 800E6554
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6558
  c->r[5]=0u+0x00000000u; // 800E655C
  c->r[4]=R32(c->r[4]+0x00000394u); // 800E6560
  c->r[4]=c->r[4]+0x0000010Cu; // 800E6564
  c->lr=0x800E656Cu; f_8024EE50(c); // 800E6568
  c->r[0]=cntlz(c->r[3]); // 800E656C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E6570
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6574
  c->lr=c->r[0]; // 800E6578
  c->r[1]=c->r[1]+0x00000010u; // 800E657C
  return; // 800E6580
}

// fn_800E6584
void f_800E6584(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800E6584
}

// fn_800E6588
void f_800E6588(Ctx* __restrict c) {
  return; // 800E6588
}

// fn_800E658C
void f_800E658C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E658C
  c->r[0]=c->lr; // 800E6590
  cmps(c,0,(int32_t)c->r[3],0); // 800E6594
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6598
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E659C
  c->r[31]=c->r[4]|c->r[4]; // 800E65A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E65A4
  c->r[30]=c->r[3]|c->r[3]; // 800E65A8
  if (crb(c,2)) { goto L_800E65C8; } // 800E65AC
  c->r[4]=0u+0x00000000u; // 800E65B0
  c->lr=0x800E65B8u; f_8026A06C(c); // 800E65B4
  cmps(c,0,(int32_t)c->r[31],0); // 800E65B8
  if (!crb(c,1)) { goto L_800E65C8; } // 800E65BC
  c->r[3]=c->r[30]|c->r[30]; // 800E65C0
  c->lr=0x800E65C8u; f_8026A268(c); // 800E65C4
L_800E65C8:;
  c->r[3]=c->r[30]|c->r[30]; // 800E65C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E65CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E65D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E65D4
  c->lr=c->r[0]; // 800E65D8
  c->r[1]=c->r[1]+0x00000010u; // 800E65DC
  return; // 800E65E0
}

// fn_800E65E4
void f_800E65E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E65E4
  c->r[0]=c->lr; // 800E65E8
  W32(c->r[1]+0x00000074u,c->r[0]); // 800E65EC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800E65F0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800E65F4
  c->r[11]=c->r[1]+0x00000060u; // 800E65F8
  c->lr=0x800E6600u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E65FC
  c->r[28]=0u+0x803A0000u; // 800E6600
  c->r[30]=c->r[3]|c->r[3]; // 800E6604
  c->r[28]=c->r[28]+0xFFFFE750u; // 800E6608
  c->r[4]=0u+0x00000000u; // 800E660C
  c->lr=0x800E6614u; f_801F57D0(c); // 800E6610
  c->r[3]=c->r[30]|c->r[30]; // 800E6614
  c->r[4]=0u+0x00000001u; // 800E6618
  c->lr=0x800E6620u; f_801F57D0(c); // 800E661C
  c->r[3]=c->r[30]|c->r[30]; // 800E6620
  c->r[4]=0u+0x00000002u; // 800E6624
  c->lr=0x800E662Cu; f_801F57D0(c); // 800E6628
  c->r[3]=c->r[30]|c->r[30]; // 800E662C
  c->r[4]=0u+0x00000003u; // 800E6630
  c->lr=0x800E6638u; f_801F57D0(c); // 800E6634
  c->r[3]=c->r[30]|c->r[30]; // 800E6638
  c->r[4]=0u+0x00000004u; // 800E663C
  c->lr=0x800E6644u; f_801F57D0(c); // 800E6640
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E6644
  c->r[3]=c->r[30]|c->r[30]; // 800E6648
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E664C
  c->ctr=c->r[12]; // 800E6650
  if (true) { c->lr=0x800E6658u; dispatch(c,c->ctr); } // 800E6654
  c->r[3]=c->r[30]|c->r[30]; // 800E6658
  c->lr=0x800E6660u; f_801F4B94(c); // 800E665C
  c->r[3]=0u+0x00000003u; // 800E6660
  c->r[0]=0u+0x00000052u; // 800E6664
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800E6668
  c->r[3]=c->r[30]+0x0000000Cu; // 800E666C
  {uint32_t ea=c->r[2]+0xFFFFA648u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6670
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800E6674
  c->lr=0x800E667Cu; f_80037668(c); // 800E6678
  c->r[0]=0u+0x00000000u; // 800E667C
  c->r[3]=c->r[30]+0x0000002Cu; // 800E6680
  W8(c->r[30]+0x00000028u,c->r[0]); // 800E6684
  c->r[4]=c->r[28]+0x00000000u; // 800E6688
  c->lr=0x800E6690u; f_800361A0(c); // 800E668C
  c->r[0]=R32(c->r[30]+0x00000074u); // 800E6690
  c->r[3]=0u+0x80550000u; // 800E6694
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800E6698
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800E669C
  c->lr=0x800E66A4u; f_8019C920(c); // 800E66A0
  cmps(c,0,(int32_t)c->r[3],0); // 800E66A4
  if (crb(c,2)) { goto L_800E66CC; } // 800E66A8
  c->r[4]=0u+0x00000000u; // 800E66AC
  c->lr=0x800E66B4u; f_80039840(c); // 800E66B0
  c->r[4]=0u+0x803A0000u; // 800E66B4
  c->r[5]=c->r[1]+0x00000008u; // 800E66B8
  c->r[4]=c->r[4]+0xFFFFE804u; // 800E66BC
  c->r[6]=0u+0x00000001u; // 800E66C0
  c->lr=0x800E66C8u; f_80257018(c); // 800E66C4
  goto L_800E66D4; // 800E66C8
L_800E66CC:;
  c->r[3]=c->r[1]+0x00000008u; // 800E66CC
  c->lr=0x800E66D4u; f_80295AE8(c); // 800E66D0
L_800E66D4:;
  c->r[29]=0u+0x803A0000u; // 800E66D4
  {uint32_t ea=c->r[2]+0xFFFFA64Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800E66D8
  c->r[27]=c->r[30]|c->r[30]; // 800E66DC
  c->r[26]=c->r[28]+0x0000003Cu; // 800E66E0
  c->r[25]=c->r[28]+0x00000078u; // 800E66E4
  c->r[29]=c->r[29]+0xFFFFE804u; // 800E66E8
  c->r[31]=0u+0x00000000u; // 800E66EC
  c->r[28]=0u+0x00000000u; // 800E66F0
L_800E66F4:;
  c->r[4]=R32(c->r[27]+0x00000394u); // 800E66F4
  c->r[3]=c->r[30]|c->r[30]; // 800E66F8
  c->lr=0x800E6700u; f_801F58BC(c); // 800E66FC
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E6700
  c->r[4]=c->r[29]+0x0000000Du; // 800E6704
  W8(c->r[3]+0x0000001Cu,c->r[28]); // 800E6708
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E670C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E6710
  c->lr=0x800E6718u; f_80256EC4(c); // 800E6714
  c->r[5]=R32(c->r[27]+0x00000394u); // 800E6718
  c->r[4]=c->r[30]+0x00000060u; // 800E671C
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800E6720
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E6724
  c->r[3]=c->r[3]+0x00000068u; // 800E6728
  c->lr=0x800E6730u; f_800361A0(c); // 800E672C
  c->r[5]=R32(c->r[27]+0x00000394u); // 800E6730
  c->r[4]=c->r[26]|c->r[26]; // 800E6734
  c->r[3]=c->r[1]+0x00000008u; // 800E6738
  c->r[5]=c->r[5]+0x0000005Cu; // 800E673C
  c->lr=0x800E6744u; f_80296750(c); // 800E6740
  {uint32_t ea=c->r[2]+0xFFFFA64Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6744
  c->r[5]=R32(c->r[27]+0x00000394u); // 800E6748
  c->f[2]=c->f[1]; // 800E674C
  c->r[4]=R32(c->r[25]+0x00000000u); // 800E6750
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800E6754
  c->r[5]=R32(c->r[5]+0x00000034u); // 800E6758
  c->lr=0x800E6760u; f_8024FEAC(c); // 800E675C
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E6760
  c->r[4]=0u+0x00000020u; // 800E6764
  c->r[3]=c->r[3]+0x0000001Cu; // 800E6768
  c->lr=0x800E6770u; f_802518A4(c); // 800E676C
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E6770
  c->r[4]=0u+0x00000001u; // 800E6774
  c->r[3]=c->r[3]+0x0000001Cu; // 800E6778
  c->lr=0x800E6780u; f_80251824(c); // 800E677C
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E6780
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E6784
  c->lr=0x800E678Cu; f_802501B0(c); // 800E6788
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E678C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[31]);} // 800E6790
  c->r[4]=R32(c->r[27]+0x00000394u); // 800E6794
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E6798
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E679C
  c->lr=0x800E67A4u; f_802519A8(c); // 800E67A0
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E67A4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E67A8
  c->lr=0x800E67B0u; f_8025037C(c); // 800E67AC
  c->r[31]=c->r[31]+0x00000001u; // 800E67B0
  c->r[26]=c->r[26]+0x0000000Cu; // 800E67B4
  cmpu(c,0,c->r[31],0x00000005u); // 800E67B8
  c->r[25]=c->r[25]+0x00000004u; // 800E67BC
  c->r[27]=c->r[27]+0x00000004u; // 800E67C0
  if (crb(c,0)) { IRQCHK(c); goto L_800E66F4; } // 800E67C4
  c->r[0]=0u+0x00000001u; // 800E67C8
  c->r[3]=c->r[30]|c->r[30]; // 800E67CC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800E67D0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E67D4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E67D8
  c->ctr=c->r[12]; // 800E67DC
  if (true) { c->lr=0x800E67E4u; dispatch(c,c->ctr); } // 800E67E0
  c->r[3]=0u+0x805D0000u; // 800E67E4
  c->r[4]=c->r[30]+0x0000002Cu; // 800E67E8
  c->r[3]=c->r[3]+0x000078B0u; // 800E67EC
  c->lr=0x800E67F4u; f_802351CC(c); // 800E67F0
  c->r[4]=R32(c->r[30]+0x000003A4u); // 800E67F4
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800E67F8
  c->r[4]=R32(c->r[30]+0x000003A0u); // 800E67FC
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800E6800
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800E6804
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800E6808
  c->r[4]=R32(c->r[30]+0x00000398u); // 800E680C
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800E6810
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E6814
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800E6818
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800E681C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800E6820
  c->r[11]=c->r[1]+0x00000060u; // 800E6824
  c->lr=0x800E682Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E6828
  c->r[0]=R32(c->r[1]+0x00000074u); // 800E682C
  c->lr=c->r[0]; // 800E6830
  c->r[1]=c->r[1]+0x00000070u; // 800E6834
  return; // 800E6838
}

// fn_800E683C
void f_800E683C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E683C
  c->r[0]=c->lr; // 800E6840
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6844
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E6848
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E684C
  c->r[30]=c->r[3]|c->r[3]; // 800E6850
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800E6854
  c->r[12]=R32(c->r[12]+0x00000068u); // 800E6858
  c->ctr=c->r[12]; // 800E685C
  if (true) { c->lr=0x800E6864u; dispatch(c,c->ctr); } // 800E6860
  c->r[3]=c->r[30]|c->r[30]; // 800E6864
  c->lr=0x800E686Cu; f_801F4C0C(c); // 800E6868
  c->r[3]=c->r[30]|c->r[30]; // 800E686C
  c->lr=0x800E6874u; f_800E6B6C(c); // 800E6870
  c->r[3]=c->r[30]|c->r[30]; // 800E6874
  c->lr=0x800E687Cu; f_800E6B70(c); // 800E6878
  c->r[31]=0u+0x00000000u; // 800E687C
L_800E6880:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E6880
  cmps(c,0,(int32_t)c->r[3],0); // 800E6884
  if (crb(c,2)) { goto L_800E6894; } // 800E6888
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E688C
  c->lr=0x800E6894u; f_8025037C(c); // 800E6890
L_800E6894:;
  c->r[31]=c->r[31]+0x00000001u; // 800E6894
  c->r[30]=c->r[30]+0x00000004u; // 800E6898
  cmpu(c,0,c->r[31],0x00000005u); // 800E689C
  if (crb(c,0)) { IRQCHK(c); goto L_800E6880; } // 800E68A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E68A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E68A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E68AC
  c->lr=c->r[0]; // 800E68B0
  c->r[1]=c->r[1]+0x00000010u; // 800E68B4
  return; // 800E68B8
}

// fn_800E68BC
void f_800E68BC(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800E68BC
}

// fn_800E68C0
void f_800E68C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E68C0
  c->r[0]=c->lr; // 800E68C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E68C8
  c->r[11]=c->r[1]+0x00000020u; // 800E68CC
  c->lr=0x800E68D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E68D0
  c->r[27]=c->r[3]|c->r[3]; // 800E68D4
  c->r[3]=c->r[3]+0x0000000Cu; // 800E68D8
  c->lr=0x800E68E0u; f_8003E468(c); // 800E68DC
  cmps(c,0,(int32_t)c->r[3],0); // 800E68E0
  if (!crb(c,2)) { goto L_800E6920; } // 800E68E4
  c->r[12]=R32(c->r[27]+0x000000B0u); // 800E68E8
  c->r[3]=c->r[27]|c->r[27]; // 800E68EC
  c->r[12]=R32(c->r[12]+0x00000018u); // 800E68F0
  c->ctr=c->r[12]; // 800E68F4
  if (true) { c->lr=0x800E68FCu; dispatch(c,c->ctr); } // 800E68F8
  cmps(c,0,(int32_t)c->r[27],0); // 800E68FC
  if (crb(c,2)) { goto L_800E69BC; } // 800E6900
  c->r[12]=R32(c->r[27]+0x000000B0u); // 800E6904
  c->r[3]=c->r[27]|c->r[27]; // 800E6908
  c->r[4]=0u+0x00000001u; // 800E690C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800E6910
  c->ctr=c->r[12]; // 800E6914
  if (true) { c->lr=0x800E691Cu; dispatch(c,c->ctr); } // 800E6918
  goto L_800E69BC; // 800E691C
L_800E6920:;
  c->r[3]=R8(c->r[27]+0x00000028u); // 800E6920
  cmps(c,0,(int32_t)c->r[3],1); // 800E6924
  if (crb(c,2)) { goto L_800E699C; } // 800E6928
  if (!crb(c,0)) { goto L_800E69BC; } // 800E692C
  cmps(c,0,(int32_t)c->r[3],0); // 800E6930
  if (!crb(c,0)) { goto L_800E693C; } // 800E6934
  goto L_800E69BC; // 800E6938
L_800E693C:;
  c->r[0]=c->r[3]+0x00000001u; // 800E693C
  c->r[29]=0u+0x803A0000u; // 800E6940
  W8(c->r[27]+0x00000028u,c->r[0]); // 800E6944
  c->r[30]=c->r[27]|c->r[27]; // 800E6948
  c->r[29]=c->r[29]+0xFFFFE7C8u; // 800E694C
  c->r[28]=0u+0x00000000u; // 800E6950
  c->r[31]=0u+0x00000001u; // 800E6954
L_800E6958:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E6958
  c->r[3]=c->r[27]|c->r[27]; // 800E695C
  {uint32_t ea=c->r[2]+0xFFFFA64Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6960
  c->r[6]=0u+0x00000001u; // 800E6964
  W8(c->r[4]+0x0000001Cu,c->r[31]); // 800E6968
  c->f[2]=c->f[1]; // 800E696C
  c->r[5]=R32(c->r[29]+0x00000000u); // 800E6970
  c->r[12]=R32(c->r[27]+0x000000B0u); // 800E6974
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E6978
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E697C
  c->ctr=c->r[12]; // 800E6980
  if (true) { c->lr=0x800E6988u; dispatch(c,c->ctr); } // 800E6984
  c->r[28]=c->r[28]+0x00000001u; // 800E6988
  c->r[29]=c->r[29]+0x00000004u; // 800E698C
  cmpu(c,0,c->r[28],0x00000005u); // 800E6990
  c->r[30]=c->r[30]+0x00000004u; // 800E6994
  if (crb(c,0)) { IRQCHK(c); goto L_800E6958; } // 800E6998
L_800E699C:;
  c->r[29]=0u+0x00000000u; // 800E699C
L_800E69A0:;
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E69A0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E69A4
  c->lr=0x800E69ACu; f_802501B0(c); // 800E69A8
  c->r[29]=c->r[29]+0x00000001u; // 800E69AC
  c->r[27]=c->r[27]+0x00000004u; // 800E69B0
  cmpu(c,0,c->r[29],0x00000005u); // 800E69B4
  if (crb(c,0)) { IRQCHK(c); goto L_800E69A0; } // 800E69B8
L_800E69BC:;
  c->r[11]=c->r[1]+0x00000020u; // 800E69BC
  c->lr=0x800E69C4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E69C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E69C4
  c->lr=c->r[0]; // 800E69C8
  c->r[1]=c->r[1]+0x00000020u; // 800E69CC
  return; // 800E69D0
}

// fn_800E69D4
void f_800E69D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E69D4
  c->r[0]=c->lr; // 800E69D8
  cmps(c,0,(int32_t)c->r[3],0); // 800E69DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E69E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E69E4
  c->r[31]=c->r[4]|c->r[4]; // 800E69E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E69EC
  c->r[30]=c->r[3]|c->r[3]; // 800E69F0
  if (crb(c,2)) { goto L_800E6A10; } // 800E69F4
  c->r[4]=0u+0x00000000u; // 800E69F8
  c->lr=0x800E6A00u; f_8026A06C(c); // 800E69FC
  cmps(c,0,(int32_t)c->r[31],0); // 800E6A00
  if (!crb(c,1)) { goto L_800E6A10; } // 800E6A04
  c->r[3]=c->r[30]|c->r[30]; // 800E6A08
  c->lr=0x800E6A10u; f_8026A268(c); // 800E6A0C
L_800E6A10:;
  c->r[3]=c->r[30]|c->r[30]; // 800E6A10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6A14
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E6A18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6A1C
  c->lr=c->r[0]; // 800E6A20
  c->r[1]=c->r[1]+0x00000010u; // 800E6A24
  return; // 800E6A28
}

// fn_800E6A2C
void f_800E6A2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6A2C
  c->r[0]=c->lr; // 800E6A30
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E6A34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E6A38
  c->r[31]=c->r[3]|c->r[3]; // 800E6A3C
  c->lr=0x800E6A44u; f_801F51B8(c); // 800E6A40
  c->r[7]=0u+0x803D0000u; // 800E6A44
  {uint32_t ea=c->r[7]+0x00003BB0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E6A48
  c->r[3]=c->r[31]|c->r[31]; // 800E6A4C
  c->r[4]=c->r[1]+0x00000008u; // 800E6A50
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E6A54
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E6A58
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E6A5C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E6A60
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E6A64
  c->lr=0x800E6A6Cu; f_800E6A80(c); // 800E6A68
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E6A6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E6A70
  c->lr=c->r[0]; // 800E6A74
  c->r[1]=c->r[1]+0x00000020u; // 800E6A78
  return; // 800E6A7C
}

// fn_800E6A80
void f_800E6A80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6A80
  c->r[0]=c->lr; // 800E6A84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6A88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E6A8C
  c->r[31]=c->r[4]|c->r[4]; // 800E6A90
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E6A94
  c->r[30]=c->r[3]|c->r[3]; // 800E6A98
  c->r[3]=c->r[31]|c->r[31]; // 800E6A9C
  c->lr=0x800E6AA4u; f_802B9FDC(c); // 800E6AA0
  cmps(c,0,(int32_t)c->r[3],0); // 800E6AA4
  if (crb(c,2)) { goto L_800E6AC4; } // 800E6AA8
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E6AAC
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E6AB0
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E6AB4
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E6AB8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E6ABC
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E6AC0
L_800E6AC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6AC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6AC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E6ACC
  c->lr=c->r[0]; // 800E6AD0
  c->r[1]=c->r[1]+0x00000010u; // 800E6AD4
  return; // 800E6AD8
}

// fn_800E6ADC
void f_800E6ADC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6ADC
  c->r[0]=c->lr; // 800E6AE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E6AE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E6AE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E6AEC
  c->r[30]=0u+0x00000000u; // 800E6AF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E6AF4
  c->r[29]=c->r[3]|c->r[3]; // 800E6AF8
  c->r[31]=c->r[29]|c->r[29]; // 800E6AFC
L_800E6B00:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E6B00
  c->r[3]=0u+0x000000C9u; // 800E6B04
  c->r[5]=0u+0x00000000u; // 800E6B08
  c->r[4]=c->r[4]+0x0000010Cu; // 800E6B0C
  c->lr=0x800E6B14u; f_8024EE50(c); // 800E6B10
  cmps(c,0,(int32_t)c->r[3],0); // 800E6B14
  if (crb(c,2)) { goto L_800E6B24; } // 800E6B18
  c->r[3]=0u+0x00000000u; // 800E6B1C
  goto L_800E6B4C; // 800E6B20
L_800E6B24:;
  c->r[3]=c->r[29]|c->r[29]; // 800E6B24
  c->r[4]=c->r[30]|c->r[30]; // 800E6B28
  c->r[5]=0u+0x000005AFu; // 800E6B2C
  c->r[6]=0u+0x00000000u; // 800E6B30
  c->lr=0x800E6B38u; f_801F5DA8(c); // 800E6B34
  c->r[30]=c->r[30]+0x00000001u; // 800E6B38
  c->r[31]=c->r[31]+0x00000004u; // 800E6B3C
  cmpu(c,0,c->r[30],0x00000005u); // 800E6B40
  if (crb(c,0)) { IRQCHK(c); goto L_800E6B00; } // 800E6B44
  c->r[3]=0u+0x00000001u; // 800E6B48
L_800E6B4C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E6B4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E6B50
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E6B54
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E6B58
  c->lr=c->r[0]; // 800E6B5C
  c->r[1]=c->r[1]+0x00000020u; // 800E6B60
  return; // 800E6B64
}

// fn_800E6B68
void f_800E6B68(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800E6B68
}

// fn_800E6B6C
void f_800E6B6C(Ctx* __restrict c) {
  return; // 800E6B6C
}

// fn_800E6B70
void f_800E6B70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6B70
  c->r[0]=c->lr; // 800E6B74
  W32(c->r[1]+0x00000094u,c->r[0]); // 800E6B78
  {uint32_t ea=c->r[1]+0x0000006Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E6B7C
  c->r[29]=0u+0x803A0000u; // 800E6B80
  c->r[5]=c->r[29]+0xFFFFE750u; // 800E6B84
  c->r[24]=c->r[3]|c->r[3]; // 800E6B88
  c->r[4]=R32(c->r[5]+0x00000000u); // 800E6B8C
  c->r[31]=0u+0x803A0000u; // 800E6B90
  c->r[3]=R32(c->r[5]+0x00000004u); // 800E6B94
  c->r[28]=c->r[24]|c->r[24]; // 800E6B98
  c->r[0]=R32(c->r[5]+0x00000008u); // 800E6B9C
  c->r[31]=c->r[31]+0xFFFFE804u; // 800E6BA0
  W32(c->r[1]+0x00000008u,c->r[4]); // 800E6BA4
  c->r[27]=0u+0x00000000u; // 800E6BA8
  c->r[26]=0u+0x00000000u; // 800E6BAC
  c->r[25]=0u+0x00000000u; // 800E6BB0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800E6BB4
  c->r[30]=0u+0x80550000u; // 800E6BB8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E6BBC
L_800E6BC0:;
  c->r[3]=R32(c->r[28]+0x00000394u); // 800E6BC0
  cmps(c,0,(int32_t)c->r[3],0); // 800E6BC4
  if (crb(c,2)) { goto L_800E6CD4; } // 800E6BC8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800E6BCC
  cmps(c,0,(int32_t)c->r[0],0); // 800E6BD0
  if (crb(c,2)) { goto L_800E6CD4; } // 800E6BD4
  c->r[3]=c->r[24]|c->r[24]; // 800E6BD8
  c->r[4]=c->r[25]|c->r[25]; // 800E6BDC
  c->lr=0x800E6BE4u; f_800453A4(c); // 800E6BE0
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800E6BE4
  if (crb(c,2)) { goto L_800E6C9C; } // 800E6BE8
  c->r[3]=c->r[30]+0xFFFFC848u; // 800E6BEC
  c->r[4]=c->r[31]+0x00000016u; // 800E6BF0
  c->r[5]=0u+0x00000000u; // 800E6BF4
  c->r[6]=0u+0x00000000u; // 800E6BF8
  c->lr=0x800E6C00u; f_8018D3E4(c); // 800E6BFC
  c->r[23]=rotl(c->r[3],0)&0x000000FFu; // 800E6C00
  cmpu(c,0,c->r[23],0x000000FFu); // 800E6C04
  if (crb(c,2)) { goto L_800E6C9C; } // 800E6C08
  c->r[3]=R32(c->r[28]+0x00000394u); // 800E6C0C
  c->r[4]=c->r[31]+0x0000001Au; // 800E6C10
  c->r[5]=c->r[1]+0x00000038u; // 800E6C14
  c->r[6]=0u+0x00000001u; // 800E6C18
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E6C1C
  c->lr=0x800E6C24u; f_80257018(c); // 800E6C20
  c->r[3]=c->r[1]+0x00000038u; // 800E6C24
  c->r[4]=c->r[29]+0xFFFFE750u; // 800E6C28
  c->r[5]=c->r[1]+0x0000002Cu; // 800E6C2C
  c->lr=0x800E6C34u; f_80296750(c); // 800E6C30
  c->r[11]=R32(c->r[1]+0x00000008u); // 800E6C34
  c->r[4]=c->r[23]|c->r[23]; // 800E6C38
  c->r[10]=R32(c->r[1]+0x0000000Cu); // 800E6C3C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800E6C40
  c->r[9]=R32(c->r[1]+0x00000010u); // 800E6C44
  c->r[5]=c->r[1]+0x00000020u; // 800E6C48
  c->r[8]=R32(c->r[1]+0x0000002Cu); // 800E6C4C
  c->r[6]=c->r[1]+0x00000014u; // 800E6C50
  c->r[7]=R32(c->r[1]+0x00000030u); // 800E6C54
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E6C58
  W32(c->r[1]+0x00000014u,c->r[11]); // 800E6C5C
  W32(c->r[1]+0x00000018u,c->r[10]); // 800E6C60
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800E6C64
  W32(c->r[1]+0x00000020u,c->r[8]); // 800E6C68
  W32(c->r[1]+0x00000024u,c->r[7]); // 800E6C6C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E6C70
  c->lr=0x800E6C78u; f_8018DBD0(c); // 800E6C74
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[0]); // 800E6C78
  if (!crb(c,2)) { goto L_800E6C9C; } // 800E6C7C
  c->r[3]=c->r[24]|c->r[24]; // 800E6C80
  c->r[4]=0u+0x00000002u; // 800E6C84
  c->r[5]=0u+0x00000010u; // 800E6C88
  c->r[6]=0u+0x00000001u; // 800E6C8C
  c->r[7]=0u+0x00000001u; // 800E6C90
  c->r[27]=c->r[27]+0x00000001u; // 800E6C94
  c->lr=0x800E6C9Cu; f_8017900C(c); // 800E6C98
L_800E6C9C:;
  c->r[3]=c->r[24]|c->r[24]; // 800E6C9C
  c->r[4]=c->r[25]|c->r[25]; // 800E6CA0
  c->lr=0x800E6CA8u; f_800453A4(c); // 800E6CA4
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800E6CA8
  if (crb(c,2)) { goto L_800E6CD4; } // 800E6CAC
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; cr0(c,c->r[0]); // 800E6CB0
  if (!crb(c,2)) { goto L_800E6CD4; } // 800E6CB4
  c->r[3]=c->r[24]|c->r[24]; // 800E6CB8
  c->r[4]=0u+0x00000004u; // 800E6CBC
  c->r[5]=0u+0x00000004u; // 800E6CC0
  c->r[6]=0u+0x00000001u; // 800E6CC4
  c->r[7]=0u+0x00000001u; // 800E6CC8
  c->r[26]=c->r[26]+0x00000001u; // 800E6CCC
  c->lr=0x800E6CD4u; f_8017900C(c); // 800E6CD0
L_800E6CD4:;
  c->r[25]=c->r[25]+0x00000001u; // 800E6CD4
  c->r[28]=c->r[28]+0x00000004u; // 800E6CD8
  cmpu(c,0,c->r[25],0x00000005u); // 800E6CDC
  if (crb(c,0)) { IRQCHK(c); goto L_800E6BC0; } // 800E6CE0
  {uint32_t ea=c->r[1]+0x0000006Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E6CE4
  c->r[0]=R32(c->r[1]+0x00000094u); // 800E6CE8
  c->lr=c->r[0]; // 800E6CEC
  c->r[1]=c->r[1]+0x00000090u; // 800E6CF0
  return; // 800E6CF4
}

// fn_800E6CF8
void f_800E6CF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6CF8
  c->r[0]=c->lr; // 800E6CFC
  c->r[4]=0u+0x00000000u; // 800E6D00
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E6D04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E6D08
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E6D0C
  c->r[30]=c->r[3]|c->r[3]; // 800E6D10
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E6D14
  W32(c->r[1]+0x00000010u,c->r[28]); // 800E6D18
  c->lr=0x800E6D20u; f_801F57D0(c); // 800E6D1C
  c->r[3]=c->r[30]|c->r[30]; // 800E6D20
  c->r[4]=0u+0x00000001u; // 800E6D24
  c->lr=0x800E6D2Cu; f_801F57D0(c); // 800E6D28
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E6D2C
  c->r[3]=c->r[30]|c->r[30]; // 800E6D30
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E6D34
  c->ctr=c->r[12]; // 800E6D38
  if (true) { c->lr=0x800E6D40u; dispatch(c,c->ctr); } // 800E6D3C
  c->r[3]=c->r[30]|c->r[30]; // 800E6D40
  c->lr=0x800E6D48u; f_801F4B94(c); // 800E6D44
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800E6D48
  c->r[4]=0u+0x00000003u; // 800E6D4C
  c->r[0]=0u+0x00000053u; // 800E6D50
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800E6D54
  c->r[3]=c->r[3]|0x00000800u; // 800E6D58
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E6D5C
  W16(c->r[30]+0x000003BEu,c->r[3]); // 800E6D60
  c->r[3]=c->r[30]|c->r[30]; // 800E6D64
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800E6D68
  c->lr=0x800E6D70u; f_801F58BC(c); // 800E6D6C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E6D70
  c->r[31]=0u+0x00000001u; // 800E6D74
  c->r[28]=0u+0x803A0000u; // 800E6D78
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800E6D7C
  c->r[28]=c->r[28]+0xFFFFE910u; // 800E6D80
  c->r[4]=c->r[28]+0x00000004u; // 800E6D84
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E6D88
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E6D8C
  c->lr=0x800E6D94u; f_80256EC4(c); // 800E6D90
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E6D94
  c->r[5]=0u+0x805D0000u; // 800E6D98
  c->r[4]=c->r[30]+0x0000002Cu; // 800E6D9C
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800E6DA0
  c->r[3]=c->r[5]+0x000078B0u; // 800E6DA4
  c->lr=0x800E6DACu; f_802351CC(c); // 800E6DA8
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E6DAC
  c->r[4]=0u+0x00000000u; // 800E6DB0
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6DB4
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800E6DB8
  c->r[3]=c->r[30]|c->r[30]; // 800E6DBC
  c->f[2]=c->f[1]; // 800E6DC0
  c->r[5]=0u+0x00000001u; // 800E6DC4
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800E6DC8
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800E6DCC
  c->r[0]=c->r[0]|0x00000004u; // 800E6DD0
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800E6DD4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E6DD8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E6DDC
  c->ctr=c->r[12]; // 800E6DE0
  if (true) { c->lr=0x800E6DE8u; dispatch(c,c->ctr); } // 800E6DE4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E6DE8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E6DEC
  c->lr=0x800E6DF4u; f_802501B0(c); // 800E6DF0
  c->r[3]=c->r[30]|c->r[30]; // 800E6DF4
  c->lr=0x800E6DFCu; f_801F56F4(c); // 800E6DF8
  c->r[4]=R32(c->r[30]+0x00000398u); // 800E6DFC
  c->r[3]=c->r[30]|c->r[30]; // 800E6E00
  c->lr=0x800E6E08u; f_801F58BC(c); // 800E6E04
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E6E08
  c->r[29]=0u+0x00000000u; // 800E6E0C
  c->r[4]=c->r[28]+0x00000004u; // 800E6E10
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800E6E14
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E6E18
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E6E1C
  c->lr=0x800E6E24u; f_80256EC4(c); // 800E6E20
  c->r[5]=R32(c->r[30]+0x00000398u); // 800E6E24
  c->r[4]=0u+0x00000180u; // 800E6E28
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6E2C
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800E6E30
  c->f[2]=c->f[1]; // 800E6E34
  c->r[5]=R32(c->r[30]+0x00000398u); // 800E6E38
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800E6E3C
  c->r[5]=R32(c->r[5]+0x00000034u); // 800E6E40
  c->lr=0x800E6E48u; f_8024FEAC(c); // 800E6E44
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E6E48
  c->r[4]=0u+0x00000001u; // 800E6E4C
  c->r[3]=c->r[3]+0x0000001Cu; // 800E6E50
  c->lr=0x800E6E58u; f_80251824(c); // 800E6E54
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E6E58
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E6E5C
  c->lr=0x800E6E64u; f_802501B0(c); // 800E6E60
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E6E64
  c->r[4]=c->r[28]+0x0000000Du; // 800E6E68
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E6E6C
  c->r[0]=R8(c->r[5]+0x0000001Du); // 800E6E70
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800E6E74
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E6E78
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E6E7C
  c->lr=0x800E6E84u; f_80256EC4(c); // 800E6E80
  W8(c->r[30]+0x00000088u,c->r[3]); // 800E6E84
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800E6E88
  W32(c->r[30]+0x00000444u,c->r[31]); // 800E6E8C
  c->lr=0x800E6E94u; f_8024E174(c); // 800E6E90
  W32(c->r[30]+0x00000438u,c->r[3]); // 800E6E94
  c->r[3]=c->r[30]|c->r[30]; // 800E6E98
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E6E9C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E6EA0
  c->ctr=c->r[12]; // 800E6EA4
  if (true) { c->lr=0x800E6EACu; dispatch(c,c->ctr); } // 800E6EA8
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6EAC
  c->r[0]=0u+0x000000FFu; // 800E6EB0
  W8(c->r[30]+0x0000007Cu,c->r[29]); // 800E6EB4
  c->r[3]=c->r[30]|c->r[30]; // 800E6EB8
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[0]);} // 800E6EBC
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[0]);} // 800E6EC0
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800E6EC4
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 800E6EC8
  W8(c->r[30]+0x0000007Fu,c->r[29]); // 800E6ECC
  W8(c->r[30]+0x00000084u,c->r[29]); // 800E6ED0
  W8(c->r[30]+0x00000086u,c->r[29]); // 800E6ED4
  W8(c->r[30]+0x00000085u,c->r[29]); // 800E6ED8
  W8(c->r[30]+0x00000089u,c->r[0]); // 800E6EDC
  W8(c->r[30]+0x00000087u,c->r[0]); // 800E6EE0
  c->lr=0x800E6EE8u; f_800E88B8(c); // 800E6EE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E6EE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E6EEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E6EF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E6EF4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800E6EF8
  c->lr=c->r[0]; // 800E6EFC
  c->r[1]=c->r[1]+0x00000020u; // 800E6F00
  return; // 800E6F04
}

// fn_800E6F08
void f_800E6F08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6F08
  c->r[0]=c->lr; // 800E6F0C
  c->r[5]=0u+0x00000000u; // 800E6F10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6F14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E6F18
  c->r[31]=c->r[3]|c->r[3]; // 800E6F1C
  c->r[3]=0u+0x000004D6u; // 800E6F20
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E6F24
  c->r[4]=c->r[4]+0x0000010Cu; // 800E6F28
  c->lr=0x800E6F30u; f_8024EE50(c); // 800E6F2C
  cmps(c,0,(int32_t)c->r[3],0); // 800E6F30
  if (crb(c,2)) { goto L_800E6F40; } // 800E6F34
  c->r[3]=0u+0x00000000u; // 800E6F38
  goto L_800E6F70; // 800E6F3C
L_800E6F40:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E6F40
  c->r[3]=0u+0x000000C9u; // 800E6F44
  c->r[5]=0u+0x00000000u; // 800E6F48
  c->r[4]=c->r[4]+0x0000010Cu; // 800E6F4C
  c->lr=0x800E6F54u; f_8024EE50(c); // 800E6F50
  cmps(c,0,(int32_t)c->r[3],0); // 800E6F54
  if (crb(c,2)) { goto L_800E6F64; } // 800E6F58
  c->r[3]=0u+0x00000000u; // 800E6F5C
  goto L_800E6F70; // 800E6F60
L_800E6F64:;
  c->r[3]=c->r[31]+0x00000210u; // 800E6F64
  c->r[4]=0u+0x000000E1u; // 800E6F68
  c->lr=0x800E6F70u; f_80221630(c); // 800E6F6C
L_800E6F70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6F70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6F74
  c->lr=c->r[0]; // 800E6F78
  c->r[1]=c->r[1]+0x00000010u; // 800E6F7C
  return; // 800E6F80
}

// fn_800E6F84
void f_800E6F84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6F84
  c->r[0]=c->lr; // 800E6F88
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800E6F8C
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800E6F90
  c->r[31]=c->r[3]|c->r[3]; // 800E6F94
  W32(c->r[1]+0x000000A8u,c->r[30]); // 800E6F98
  c->r[30]=0u+0x803A0000u; // 800E6F9C
  c->r[30]=c->r[30]+0xFFFFE828u; // 800E6FA0
  W32(c->r[1]+0x000000A4u,c->r[29]); // 800E6FA4
  c->lr=0x800E6FACu; f_800E86A4(c); // 800E6FA8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E6FAC
  c->r[3]=c->r[31]|c->r[31]; // 800E6FB0
  c->r[12]=R32(c->r[12]+0x00000068u); // 800E6FB4
  c->ctr=c->r[12]; // 800E6FB8
  if (true) { c->lr=0x800E6FC0u; dispatch(c,c->ctr); } // 800E6FBC
  c->r[3]=c->r[31]|c->r[31]; // 800E6FC0
  c->lr=0x800E6FC8u; f_801F4C0C(c); // 800E6FC4
  c->r[3]=0u+0x805D0000u; // 800E6FC8
  c->r[3]=c->r[3]+0x00003F6Cu; // 800E6FCC
  c->lr=0x800E6FD4u; f_80037AF0(c); // 800E6FD0
  cmpu(c,0,c->r[3],c->r[31]); // 800E6FD4
  if (crb(c,2)) { goto L_800E6FE4; } // 800E6FD8
  c->r[3]=c->r[31]|c->r[31]; // 800E6FDC
  c->lr=0x800E6FE4u; f_800E8820(c); // 800E6FE0
L_800E6FE4:;
  c->r[3]=c->r[31]|c->r[31]; // 800E6FE4
  c->lr=0x800E6FECu; f_801F56F4(c); // 800E6FE8
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E6FEC
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800E6FF0
  cmps(c,0,(int32_t)c->r[0],0); // 800E6FF4
  if (crb(c,2)) { goto L_800E7038; } // 800E6FF8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800E6FFC
  cmps(c,0,(int32_t)c->r[0],0); // 800E7000
  if (crb(c,2)) { goto L_800E7038; } // 800E7004
  c->r[29]=0u+0x805D0000u; // 800E7008
  c->r[4]=c->r[3]+0x0000005Cu; // 800E700C
  c->r[3]=c->r[29]+0x00003F6Cu; // 800E7010
  c->r[5]=0u+0x00000000u; // 800E7014
  c->lr=0x800E701Cu; f_8020C9AC(c); // 800E7018
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E701C
  c->r[3]=c->r[29]+0x00003F6Cu; // 800E7020
  c->r[4]=c->r[4]+0x00000068u; // 800E7024
  c->lr=0x800E702Cu; f_80038E24(c); // 800E7028
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E702C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E7030
  c->lr=0x800E7038u; f_8025037C(c); // 800E7034
L_800E7038:;
  c->r[0]=R8(c->r[31]+0x00000087u); // 800E7038
  cmpu(c,0,c->r[0],0x000000FFu); // 800E703C
  if (crb(c,2)) { goto L_800E7154; } // 800E7040
  c->r[4]=R8(c->r[31]+0x00000089u); // 800E7044
  cmpu(c,0,c->r[4],0x000000FFu); // 800E7048
  if (crb(c,2)) { goto L_800E7154; } // 800E704C
  c->r[3]=0u+0x80550000u; // 800E7050
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800E7054
  c->lr=0x800E705Cu; f_8019C920(c); // 800E7058
  cmps(c,0,(int32_t)c->r[3],0); // 800E705C
  if (crb(c,2)) { goto L_800E7154; } // 800E7060
  c->r[4]=0u+0x00000000u; // 800E7064
  c->lr=0x800E706Cu; f_80039840(c); // 800E7068
  c->r[4]=0u+0x803A0000u; // 800E706C
  c->r[5]=c->r[1]+0x00000068u; // 800E7070
  c->r[4]=c->r[4]+0xFFFFE910u; // 800E7074
  c->r[6]=0u+0x00000001u; // 800E7078
  c->r[4]=c->r[4]+0x0000000Du; // 800E707C
  c->lr=0x800E7084u; f_80257018(c); // 800E7080
  c->r[4]=c->r[30]+0x0000003Cu; // 800E7084
  c->r[6]=R32(c->r[30]+0x0000003Cu); // 800E7088
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E708C
  c->r[3]=c->r[1]+0x0000005Cu; // 800E7090
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E7094
  c->r[4]=c->r[1]+0x00000044u; // 800E7098
  W32(c->r[1]+0x00000044u,c->r[6]); // 800E709C
  W32(c->r[1]+0x00000048u,c->r[5]); // 800E70A0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800E70A4
  c->lr=0x800E70ACu; f_800361A0(c); // 800E70A8
  c->r[4]=c->r[1]+0x0000005Cu; // 800E70AC
  c->r[3]=c->r[1]+0x00000068u; // 800E70B0
  c->r[5]=c->r[4]|c->r[4]; // 800E70B4
  c->lr=0x800E70BCu; f_80296750(c); // 800E70B8
  c->r[3]=c->r[1]+0x00000050u; // 800E70BC
  c->r[4]=c->r[30]+0x00000000u; // 800E70C0
  c->lr=0x800E70C8u; f_800361A0(c); // 800E70C4
  c->r[4]=c->r[30]+0x00000048u; // 800E70C8
  c->r[6]=R32(c->r[30]+0x00000048u); // 800E70CC
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E70D0
  c->r[3]=c->r[1]+0x00000038u; // 800E70D4
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E70D8
  c->r[4]=c->r[1]+0x0000002Cu; // 800E70DC
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800E70E0
  W32(c->r[1]+0x00000030u,c->r[5]); // 800E70E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E70E8
  c->lr=0x800E70F0u; f_800361A0(c); // 800E70EC
  c->r[29]=R32(c->r[1]+0x00000038u); // 800E70F0
  c->r[3]=0u+0x80550000u; // 800E70F4
  c->r[30]=R32(c->r[1]+0x0000003Cu); // 800E70F8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E70FC
  c->r[12]=R32(c->r[1]+0x00000040u); // 800E7100
  c->r[5]=c->r[1]+0x00000020u; // 800E7104
  c->r[11]=R32(c->r[1]+0x00000050u); // 800E7108
  c->r[6]=c->r[1]+0x00000014u; // 800E710C
  c->r[10]=R32(c->r[1]+0x00000054u); // 800E7110
  c->r[7]=c->r[1]+0x00000008u; // 800E7114
  c->r[9]=R32(c->r[1]+0x00000058u); // 800E7118
  c->r[8]=R32(c->r[1]+0x0000005Cu); // 800E711C
  c->r[4]=R32(c->r[1]+0x00000060u); // 800E7120
  c->r[0]=R32(c->r[1]+0x00000064u); // 800E7124
  W32(c->r[1]+0x00000008u,c->r[29]); // 800E7128
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800E712C
  W32(c->r[1]+0x00000010u,c->r[12]); // 800E7130
  W32(c->r[1]+0x00000014u,c->r[11]); // 800E7134
  W32(c->r[1]+0x00000018u,c->r[10]); // 800E7138
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800E713C
  W32(c->r[1]+0x00000020u,c->r[8]); // 800E7140
  W32(c->r[1]+0x00000024u,c->r[4]); // 800E7144
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E7148
  c->r[4]=R8(c->r[31]+0x00000087u); // 800E714C
  c->lr=0x800E7154u; f_8018DD04(c); // 800E7150
L_800E7154:;
  c->r[3]=c->r[31]|c->r[31]; // 800E7154
  c->lr=0x800E715Cu; f_800E895C(c); // 800E7158
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800E715C
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800E7160
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800E7164
  c->r[29]=R32(c->r[1]+0x000000A4u); // 800E7168
  c->lr=c->r[0]; // 800E716C
  c->r[1]=c->r[1]+0x000000B0u; // 800E7170
  return; // 800E7174
}

// fn_800E7178
void f_800E7178(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7178
  c->r[0]=c->lr; // 800E717C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E7180
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E7184
  c->r[31]=c->r[3]|c->r[3]; // 800E7188
  c->r[4]=R8(c->r[3]+0x00000087u); // 800E718C
  cmpu(c,0,c->r[4],0x000000FFu); // 800E7190
  if (crb(c,2)) { goto L_800E71A4; } // 800E7194
  c->r[3]=0u+0x80550000u; // 800E7198
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E719C
  c->lr=0x800E71A4u; f_8018D738(c); // 800E71A0
L_800E71A4:;
  c->r[3]=c->r[31]|c->r[31]; // 800E71A4
  c->lr=0x800E71ACu; f_801F4C78(c); // 800E71A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E71AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E71B0
  c->lr=c->r[0]; // 800E71B4
  c->r[1]=c->r[1]+0x00000010u; // 800E71B8
  return; // 800E71BC
}

// fn_800E71C0
void f_800E71C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E71C0
  c->r[0]=c->lr; // 800E71C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E71C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E71CC
  c->r[31]=c->r[3]|c->r[3]; // 800E71D0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E71D4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E71D8
  c->lr=0x800E71E0u; f_802501B0(c); // 800E71DC
  c->r[3]=c->r[31]|c->r[31]; // 800E71E0
  c->r[4]=0u+0x00000000u; // 800E71E4
  c->lr=0x800E71ECu; f_801F5244(c); // 800E71E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E71EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E71F0
  c->lr=c->r[0]; // 800E71F4
  c->r[1]=c->r[1]+0x00000010u; // 800E71F8
  return; // 800E71FC
}

// fn_800E7200
void f_800E7200(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7200
  c->r[0]=c->lr; // 800E7204
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E7208
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E720C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E7210
  c->r[30]=c->r[3]|c->r[3]; // 800E7214
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E7218
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E721C
  c->lr=0x800E7224u; f_802501B0(c); // 800E7220
  c->r[3]=c->r[30]|c->r[30]; // 800E7224
  c->r[4]=0u+0x00000000u; // 800E7228
  c->lr=0x800E7230u; f_801F5244(c); // 800E722C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E7230
  c->r[3]=c->r[30]+0x0000002Cu; // 800E7234
  c->r[4]=c->r[4]+0x0000005Cu; // 800E7238
  c->lr=0x800E7240u; f_800361A0(c); // 800E723C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E7240
  c->r[3]=c->r[30]|c->r[30]; // 800E7244
  c->lr=0x800E724Cu; f_801F5418(c); // 800E7248
  cmps(c,0,(int32_t)c->r[3],0); // 800E724C
  if (!crb(c,0)) { goto L_800E728C; } // 800E7250
  c->r[4]=R16(c->r[30]+0x000003BEu); // 800E7254
  c->r[0]=0u+0x00000001u; // 800E7258
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800E725C
  c->r[3]=c->r[30]|c->r[30]; // 800E7260
  c->r[0]=c->r[4]|0x00000080u; // 800E7264
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7268
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800E726C
  c->r[4]=0u+0x00000064u; // 800E7270
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800E7274
  c->r[5]=0u+0x00000000u; // 800E7278
  c->r[6]=0u+0x00000000u; // 800E727C
  c->r[7]=0u+0x00000000u; // 800E7280
  c->lr=0x800E7288u; f_801F4D44(c); // 800E7284
  goto L_800E72C0; // 800E7288
L_800E728C:;
  c->r[31]=0u+0x805D0000u; // 800E728C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800E7290
  c->lr=0x800E7298u; f_800447E4(c); // 800E7294
  cmpu(c,0,c->r[3],0x00000001u); // 800E7298
  if (!crb(c,2)) { goto L_800E72AC; } // 800E729C
  c->r[0]=0u+0x00000000u; // 800E72A0
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800E72A4
  goto L_800E72B8; // 800E72A8
L_800E72AC:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800E72AC
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800E72B0
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800E72B4
L_800E72B8:;
  c->r[3]=c->r[30]|c->r[30]; // 800E72B8
  c->lr=0x800E72C0u; f_801F5B14(c); // 800E72BC
L_800E72C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E72C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E72C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E72C8
  c->lr=c->r[0]; // 800E72CC
  c->r[1]=c->r[1]+0x00000010u; // 800E72D0
  return; // 800E72D4
}

// fn_800E72D8
void f_800E72D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E72D8
  c->r[0]=c->lr; // 800E72DC
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E72E0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E72E4
  {uint32_t ea=c->r[2]+0xFFFFA65Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E72E8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800E72EC
  c->r[31]=c->r[3]|c->r[3]; // 800E72F0
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800E72F4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E72F8
  c->r[0]=c->r[0]|0x00000004u; // 800E72FC
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 800E7300
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800E7304
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 800E7308
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E730C
  c->lr=0x800E7314u; f_8025037C(c); // 800E7310
  c->r[6]=R32(c->r[31]+0x00000394u); // 800E7314
  c->r[3]=c->r[31]+0x0000002Cu; // 800E7318
  c->r[4]=c->r[31]+0x00000060u; // 800E731C
  c->r[5]=c->r[1]+0x00000020u; // 800E7320
  c->r[6]=c->r[6]+0x000000B0u; // 800E7324
  c->r[7]=0u+0x00000000u; // 800E7328
  c->lr=0x800E7330u; f_8002BE64(c); // 800E732C
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800E7330
  c->r[3]=0u+0x805D0000u; // 800E7334
  c->r[0]=R32(c->r[31]+0x00000030u); // 800E7338
  c->r[3]=c->r[3]+0x00003F6Cu; // 800E733C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7340
  c->r[4]=c->r[31]|c->r[31]; // 800E7344
  W32(c->r[1]+0x00000014u,c->r[5]); // 800E7348
  c->r[7]=c->r[1]+0x00000014u; // 800E734C
  c->r[6]=0u+0x00000033u; // 800E7350
  c->r[8]=0u+0x00000000u; // 800E7354
  W32(c->r[1]+0x00000018u,c->r[0]); // 800E7358
  c->r[0]=R32(c->r[31]+0x00000034u); // 800E735C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E7360
  c->r[3]=R32(c->r[31]+0x00000438u); // 800E7364
  c->r[5]=R32(c->r[31]+0x00000394u); // 800E7368
  c->lr=0x800E7370u; f_801FA6A4(c); // 800E736C
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7370
  c->r[6]=0u+0x803A0000u; // 800E7374
  {uint32_t ea=c->r[2]+0xFFFFA660u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7378
  c->r[5]=c->r[31]+0x00000044u; // 800E737C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7380
  c->r[6]=c->r[6]+0xFFFFE828u; // 800E7384
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800E7388
  c->r[3]=R32(c->r[31]+0x00000438u); // 800E738C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800E7390
  c->r[4]=0u+0x00000000u; // 800E7394
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 800E7398
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800E739C
  c->lr=0x800E73A4u; f_801FBEC0(c); // 800E73A0
  c->r[7]=0u+0x803D0000u; // 800E73A4
  {uint32_t ea=c->r[7]+0x00003C58u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E73A8
  c->r[3]=c->r[31]|c->r[31]; // 800E73AC
  c->r[4]=c->r[1]+0x00000008u; // 800E73B0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E73B4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E73B8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E73BC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E73C0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E73C4
  c->lr=0x800E73CCu; f_800E73E0(c); // 800E73C8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E73CC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800E73D0
  c->lr=c->r[0]; // 800E73D4
  c->r[1]=c->r[1]+0x00000040u; // 800E73D8
  return; // 800E73DC
}

// fn_800E73E0
void f_800E73E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E73E0
  c->r[0]=c->lr; // 800E73E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E73E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E73EC
  c->r[31]=c->r[4]|c->r[4]; // 800E73F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E73F4
  c->r[30]=c->r[3]|c->r[3]; // 800E73F8
  c->r[3]=c->r[31]|c->r[31]; // 800E73FC
  c->lr=0x800E7404u; f_802B9FDC(c); // 800E7400
  cmps(c,0,(int32_t)c->r[3],0); // 800E7404
  if (crb(c,2)) { goto L_800E7424; } // 800E7408
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E740C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E7410
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E7414
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E7418
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E741C
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E7420
L_800E7424:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E7424
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E7428
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E742C
  c->lr=c->r[0]; // 800E7430
  c->r[1]=c->r[1]+0x00000010u; // 800E7434
  return; // 800E7438
}

// fn_800E743C
void f_800E743C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E743C
  c->r[0]=c->lr; // 800E7440
  c->r[4]=0u+0x805D0000u; // 800E7444
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E7448
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E744C
  c->r[31]=c->r[3]|c->r[3]; // 800E7450
  c->r[3]=c->r[4]+0x00003F6Cu; // 800E7454
  c->lr=0x800E745Cu; f_80037AF0(c); // 800E7458
  cmpu(c,0,c->r[3],c->r[31]); // 800E745C
  if (!crb(c,2)) { goto L_800E74A0; } // 800E7460
  c->r[0]=0u+0x00000001u; // 800E7464
  c->r[7]=0u+0x803D0000u; // 800E7468
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800E746C
  c->r[3]=c->r[31]|c->r[31]; // 800E7470
  c->r[4]=c->r[1]+0x00000008u; // 800E7474
  {uint32_t ea=c->r[7]+0x00003C64u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E7478
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E747C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E7480
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E7484
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E7488
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E748C
  c->lr=0x800E7494u; f_800E73E0(c); // 800E7490
  c->r[3]=c->r[31]|c->r[31]; // 800E7494
  c->lr=0x800E749Cu; f_800E71C0(c); // 800E7498
  goto L_800E7524; // 800E749C
L_800E74A0:;
  c->r[3]=R32(c->r[31]+0x00000438u); // 800E74A0
  c->r[4]=0u+0x00000000u; // 800E74A4
  c->lr=0x800E74ACu; f_801FAF00(c); // 800E74A8
  cmps(c,0,(int32_t)c->r[3],0); // 800E74AC
  if (!crb(c,2)) { goto L_800E7504; } // 800E74B0
  c->r[3]=c->r[31]|c->r[31]; // 800E74B4
  c->r[4]=0u+0x00000037u; // 800E74B8
  c->lr=0x800E74C0u; f_801F5AB4(c); // 800E74BC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E74C0
  c->r[3]=c->r[31]+0x0000002Cu; // 800E74C4
  c->r[4]=c->r[4]+0x0000005Cu; // 800E74C8
  c->lr=0x800E74D0u; f_800361A0(c); // 800E74CC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E74D0
  c->r[3]=c->r[31]+0x00000060u; // 800E74D4
  c->r[4]=c->r[4]+0x00000068u; // 800E74D8
  c->lr=0x800E74E0u; f_800361A0(c); // 800E74DC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E74E0
  c->r[3]=c->r[31]|c->r[31]; // 800E74E4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E74E8
  c->ctr=c->r[12]; // 800E74EC
  if (true) { c->lr=0x800E74F4u; dispatch(c,c->ctr); } // 800E74F0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E74F4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E74F8
  c->lr=0x800E7500u; f_8025037C(c); // 800E74FC
  goto L_800E7524; // 800E7500
L_800E7504:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E7504
  c->r[3]=c->r[31]+0x0000002Cu; // 800E7508
  c->r[4]=c->r[4]+0x0000005Cu; // 800E750C
  c->lr=0x800E7514u; f_800361A0(c); // 800E7510
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E7514
  c->r[3]=c->r[31]+0x00000060u; // 800E7518
  c->r[4]=c->r[4]+0x00000068u; // 800E751C
  c->lr=0x800E7524u; f_800361A0(c); // 800E7520
L_800E7524:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E7524
  c->r[3]=c->r[31]+0x0000002Cu; // 800E7528
  c->r[4]=c->r[4]+0x0000005Cu; // 800E752C
  c->lr=0x800E7534u; f_800361A0(c); // 800E7530
  c->r[3]=c->r[31]|c->r[31]; // 800E7534
  c->r[4]=0u+0x00000000u; // 800E7538
  c->lr=0x800E7540u; f_801F7C00(c); // 800E753C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E7540
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E7544
  c->lr=0x800E754Cu; f_802501B0(c); // 800E7548
  c->r[3]=c->r[31]|c->r[31]; // 800E754C
  c->r[4]=0u+0x00000000u; // 800E7550
  c->lr=0x800E7558u; f_801F5244(c); // 800E7554
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E7558
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E755C
  c->lr=c->r[0]; // 800E7560
  c->r[1]=c->r[1]+0x00000020u; // 800E7564
  return; // 800E7568
}

// fn_800E756C
void f_800E756C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E756C
  c->r[0]=c->lr; // 800E7570
  c->r[4]=0u+0x80620000u; // 800E7574
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E7578
  c->r[4]=c->r[4]+0x000079C0u; // 800E757C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E7580
  c->r[31]=c->r[3]|c->r[3]; // 800E7584
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7588
  {uint32_t ea=c->r[4]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E758C
  c->f[1]=-c->f[0]; // 800E7590
  c->lr=0x800E7598u; f_8005C22C(c); // 800E7594
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7598
  fcmp(c,0,c->f[1],c->f[0]); // 800E759C
  if (!crb(c,1)) { goto L_800E75B8; } // 800E75A0
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E75A4
  {uint32_t ea=c->r[2]+0xFFFFA668u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E75A8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800E75AC
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 800E75B0
  goto L_800E75D0; // 800E75B4
L_800E75B8:;
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E75B8
  {uint32_t ea=c->r[2]+0xFFFFA668u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E75BC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800E75C0
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E75C4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800E75C8
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 800E75CC
L_800E75D0:;
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E75D0
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E75D4
  goto L_800E75E0; // 800E75D8
L_800E75DC:;
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 800E75DC
L_800E75E0:;
  fcmp(c,0,c->f[2],c->f[0]); // 800E75E0
  if (crb(c,0)) { IRQCHK(c); goto L_800E75DC; } // 800E75E4
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E75E8
  goto L_800E75F4; // 800E75EC
L_800E75F0:;
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800E75F0
L_800E75F4:;
  fcmp(c,0,c->f[2],c->f[0]); // 800E75F4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E75F8
  if (crb(c,2)) { IRQCHK(c); goto L_800E75F0; } // 800E75FC
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800E7600
  cmps(c,0,(int32_t)c->r[0],1); // 800E7604
  if (crb(c,2)) { goto L_800E7654; } // 800E7608
  if (!crb(c,0)) { goto L_800E7658; } // 800E760C
  cmps(c,0,(int32_t)c->r[0],0); // 800E7610
  if (!crb(c,0)) { goto L_800E761C; } // 800E7614
  goto L_800E7658; // 800E7618
L_800E761C:;
  {uint32_t ea=c->r[31]+0x000003CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E761C
  c->r[3]=0u+0x00000000u; // 800E7620
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7624
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800E7628
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[2]);} // 800E762C
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[1]);} // 800E7630
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 800E7634
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800E7638
  W8(c->r[31]+0x0000007Cu,c->r[3]); // 800E763C
  W8(c->r[31]+0x0000007Eu,c->r[3]); // 800E7640
  W8(c->r[31]+0x00000085u,c->r[3]); // 800E7644
  W8(c->r[31]+0x00000086u,c->r[3]); // 800E7648
  W8(c->r[31]+0x00000089u,c->r[0]); // 800E764C
  goto L_800E7658; // 800E7650
L_800E7654:;
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[2]);} // 800E7654
L_800E7658:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E7658
  c->r[0]=0u+0x00000001u; // 800E765C
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7660
  c->r[3]=c->r[31]|c->r[31]; // 800E7664
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800E7668
  c->r[5]=0u+0x00000180u; // 800E766C
  c->f[2]=c->f[1]; // 800E7670
  c->r[6]=0u+0x00000001u; // 800E7674
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E7678
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E767C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E7680
  c->ctr=c->r[12]; // 800E7684
  if (true) { c->lr=0x800E768Cu; dispatch(c,c->ctr); } // 800E7688
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E768C
  c->r[0]=0u+0x00000000u; // 800E7690
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7694
  c->r[3]=0u+0x80620000u; // 800E7698
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800E769C
  W8(c->r[31]+0x0000007Fu,c->r[0]); // 800E76A0
  c->r[3]=c->r[3]+0x00007688u; // 800E76A4
  c->r[5]=0u+0x00000000u; // 800E76A8
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800E76AC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 800E76B0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800E76B4
  W8(c->r[31]+0x0000007Du,c->r[0]); // 800E76B8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800E76BC
  c->r[3]=R32(c->r[3]+0x00000014u); // 800E76C0
  c->lr=0x800E76C8u; f_80038998(c); // 800E76C4
  c->r[7]=0u+0x803D0000u; // 800E76C8
  {uint32_t ea=c->r[7]+0x00003C70u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E76CC
  c->r[3]=c->r[31]|c->r[31]; // 800E76D0
  c->r[4]=c->r[1]+0x00000008u; // 800E76D4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E76D8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E76DC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E76E0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E76E4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E76E8
  c->lr=0x800E76F0u; f_800E73E0(c); // 800E76EC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E76F0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E76F4
  c->lr=0x800E76FCu; f_802501B0(c); // 800E76F8
  c->r[3]=R32(c->r[31]+0x00000398u); // 800E76FC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E7700
  c->lr=0x800E7708u; f_802501B0(c); // 800E7704
  c->r[3]=c->r[31]|c->r[31]; // 800E7708
  c->r[4]=0u+0x00000000u; // 800E770C
  c->lr=0x800E7714u; f_801F5244(c); // 800E7710
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E7714
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E7718
  c->lr=c->r[0]; // 800E771C
  c->r[1]=c->r[1]+0x00000030u; // 800E7720
  return; // 800E7724
}

// fn_800E7728
void f_800E7728(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7728
  c->r[0]=c->lr; // 800E772C
  W32(c->r[1]+0x00000114u,c->r[0]); // 800E7730
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 800E7734
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 800E7738
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 800E773C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 800E7740
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[29]);} // 800E7744
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,29,ea,0,0);} // 800E7748
  c->r[11]=c->r[1]+0x000000E0u; // 800E774C
  c->lr=0x800E7754u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E7750
  c->r[4]=0u+0x80620000u; // 800E7754
  c->r[31]=0u+0x803A0000u; // 800E7758
  c->r[4]=c->r[4]+0x000079C0u; // 800E775C
  {uint32_t ea=c->r[3]+0x00000074u; c->f[29]=c->ps1[29]=RF32(ea);} // 800E7760
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7764
  c->r[27]=c->r[3]|c->r[3]; // 800E7768
  {uint32_t ea=c->r[4]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E776C
  c->r[31]=c->r[31]+0xFFFFE828u; // 800E7770
  c->f[1]=-c->f[0]; // 800E7774
  c->lr=0x800E777Cu; f_8005C22C(c); // 800E7778
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E777C
  fcmp(c,0,c->f[1],c->f[0]); // 800E7780
  if (!crb(c,1)) { goto L_800E779C; } // 800E7784
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7788
  {uint32_t ea=c->r[2]+0xFFFFA668u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E778C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800E7790
  c->f[30]=c->ps1[30]=S(c->f[1]/c->f[0]); // 800E7794
  goto L_800E77B4; // 800E7798
L_800E779C:;
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E779C
  {uint32_t ea=c->r[2]+0xFFFFA668u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E77A0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800E77A4
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E77A8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800E77AC
  c->f[30]=c->ps1[30]=S(c->f[0]+c->f[1]); // 800E77B0
L_800E77B4:;
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E77B4
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E77B8
  goto L_800E77C4; // 800E77BC
L_800E77C0:;
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 800E77C0
L_800E77C4:;
  fcmp(c,0,c->f[30],c->f[0]); // 800E77C4
  if (crb(c,0)) { IRQCHK(c); goto L_800E77C0; } // 800E77C8
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E77CC
  goto L_800E77D8; // 800E77D0
L_800E77D4:;
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[0]); // 800E77D4
L_800E77D8:;
  fcmp(c,0,c->f[30],c->f[0]); // 800E77D8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E77DC
  if (crb(c,2)) { IRQCHK(c); goto L_800E77D4; } // 800E77E0
  {uint32_t ea=c->r[27]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E77E4
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E77E8
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[0]); // 800E77EC
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E77F0
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E77F4
  goto L_800E7800; // 800E77F8
L_800E77FC:;
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 800E77FC
L_800E7800:;
  fcmp(c,0,c->f[30],c->f[0]); // 800E7800
  if (crb(c,0)) { IRQCHK(c); goto L_800E77FC; } // 800E7804
  {uint32_t ea=c->r[2]+0xFFFFA674u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7808
  fcmp(c,0,c->f[30],c->f[1]); // 800E780C
  if (!crb(c,0)) { goto L_800E7838; } // 800E7810
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7814
  fcmp(c,0,c->f[30],c->f[0]); // 800E7818
  if (!crb(c,1)) { goto L_800E7838; } // 800E781C
  {uint32_t ea=c->r[2]+0xFFFFA678u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7820
  fcmp(c,0,c->f[30],c->f[0]); // 800E7824
  if (!crb(c,0)) { goto L_800E7834; } // 800E7828
  {uint32_t ea=c->r[27]+0x00000074u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E782C
  goto L_800E7838; // 800E7830
L_800E7834:;
  c->f[30]=c->f[1]; // 800E7834
L_800E7838:;
  {uint32_t ea=c->r[2]+0xFFFFA67Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7838
  fcmp(c,0,c->f[30],c->f[1]); // 800E783C
  if (!crb(c,1)) { goto L_800E786C; } // 800E7840
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7844
  fcmp(c,0,c->f[30],c->f[0]); // 800E7848
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E784C
  if (!crb(c,2)) { goto L_800E786C; } // 800E7850
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7854
  fcmp(c,0,c->f[30],c->f[0]); // 800E7858
  if (!crb(c,1)) { goto L_800E7868; } // 800E785C
  {uint32_t ea=c->r[27]+0x00000074u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E7860
  goto L_800E786C; // 800E7864
L_800E7868:;
  c->f[30]=c->f[1]; // 800E7868
L_800E786C:;
  {uint32_t ea=c->r[27]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E786C
  c->f[1]=c->ps1[1]=S(c->f[30]-c->f[0]); // 800E7870
  c->lr=0x800E7878u; f_8003EA88(c); // 800E7874
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7878
  fcmp(c,0,c->f[1],c->f[0]); // 800E787C
  if (!crb(c,1)) { goto L_800E78A8; } // 800E7880
  {uint32_t ea=c->r[27]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7884
  fcmp(c,0,c->f[30],c->f[1]); // 800E7888
  if (!crb(c,1)) { goto L_800E78A0; } // 800E788C
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7890
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800E7894
  {uint32_t ea=c->r[27]+0x00000074u; WF32(ea,c->f[0]);} // 800E7898
  goto L_800E78A8; // 800E789C
L_800E78A0:;
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E78A0
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[0]); // 800E78A4
L_800E78A8:;
  {uint32_t ea=c->r[27]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E78A8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 800E78AC
  fcmp(c,0,c->f[0],c->f[30]); // 800E78B0
  if (!crb(c,0)) { goto L_800E78C0; } // 800E78B4
  {uint32_t ea=c->r[27]+0x00000074u; WF32(ea,c->f[0]);} // 800E78B8
  goto L_800E78EC; // 800E78BC
L_800E78C0:;
  c->f[0]=c->ps1[0]=S(c->f[30]+c->f[31]); // 800E78C0
  fcmp(c,0,c->f[1],c->f[0]); // 800E78C4
  if (!crb(c,1)) { goto L_800E78D8; } // 800E78C8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[31]); // 800E78CC
  {uint32_t ea=c->r[27]+0x00000074u; WF32(ea,c->f[0]);} // 800E78D0
  goto L_800E78EC; // 800E78D4
L_800E78D8:;
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E78D8
  fcmp(c,0,c->f[30],c->f[0]); // 800E78DC
  if (!crb(c,1)) { goto L_800E78E8; } // 800E78E0
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[0]); // 800E78E4
L_800E78E8:;
  {uint32_t ea=c->r[27]+0x00000074u; WF32(ea,c->f[30]);} // 800E78E8
L_800E78EC:;
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E78EC
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E78F0
  goto L_800E7904; // 800E78F4
L_800E78F8:;
  {uint32_t ea=c->r[27]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E78F8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800E78FC
  {uint32_t ea=c->r[27]+0x00000074u; WF32(ea,c->f[1]);} // 800E7900
L_800E7904:;
  {uint32_t ea=c->r[27]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7904
  fcmp(c,0,c->f[1],c->f[0]); // 800E7908
  if (crb(c,0)) { IRQCHK(c); goto L_800E78F8; } // 800E790C
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7910
  goto L_800E7924; // 800E7914
L_800E7918:;
  {uint32_t ea=c->r[27]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7918
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800E791C
  {uint32_t ea=c->r[27]+0x00000074u; WF32(ea,c->f[0]);} // 800E7920
L_800E7924:;
  {uint32_t ea=c->r[27]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7924
  fcmp(c,0,c->f[1],c->f[2]); // 800E7928
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E792C
  if (crb(c,2)) { IRQCHK(c); goto L_800E7918; } // 800E7930
  c->r[26]=R8(c->r[27]+0x0000007Cu); // 800E7934
  c->r[0]=0u+0x00000000u; // 800E7938
  cmps(c,0,(int32_t)c->r[26],1); // 800E793C
  if (crb(c,2)) { goto L_800E79BC; } // 800E7940
  if (!crb(c,0)) { goto L_800E7954; } // 800E7944
  cmps(c,0,(int32_t)c->r[26],0); // 800E7948
  if (!crb(c,0)) { goto L_800E7960; } // 800E794C
  goto L_800E7A08; // 800E7950
L_800E7954:;
  cmps(c,0,(int32_t)c->r[26],3); // 800E7954
  if (!crb(c,0)) { goto L_800E7A08; } // 800E7958
  goto L_800E79E4; // 800E795C
L_800E7960:;
  {uint32_t ea=c->r[2]+0xFFFFA680u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7960
  fcmp(c,0,c->f[1],c->f[0]); // 800E7964
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E7968
  if (!crb(c,2)) { goto L_800E798C; } // 800E796C
  {uint32_t ea=c->r[2]+0xFFFFA67Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7970
  fcmp(c,0,c->f[1],c->f[0]); // 800E7974
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E7978
  if (!crb(c,2)) { goto L_800E798C; } // 800E797C
  c->r[0]=0u+0x00000001u; // 800E7980
  W8(c->r[27]+0x00000086u,c->r[0]); // 800E7984
  goto L_800E7A08; // 800E7988
L_800E798C:;
  {uint32_t ea=c->r[27]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E798C
  {uint32_t ea=c->r[2]+0xFFFFA684u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7990
  fcmp(c,0,c->f[1],c->f[0]); // 800E7994
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E7998
  if (!crb(c,2)) { goto L_800E7A08; } // 800E799C
  {uint32_t ea=c->r[2]+0xFFFFA674u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E79A0
  fcmp(c,0,c->f[1],c->f[0]); // 800E79A4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E79A8
  if (!crb(c,2)) { goto L_800E7A08; } // 800E79AC
  c->r[0]=0u+0x00000002u; // 800E79B0
  W8(c->r[27]+0x00000086u,c->r[0]); // 800E79B4
  goto L_800E7A08; // 800E79B8
L_800E79BC:;
  {uint32_t ea=c->r[2]+0xFFFFA684u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E79BC
  fcmp(c,0,c->f[1],c->f[0]); // 800E79C0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E79C4
  if (!crb(c,2)) { goto L_800E7A08; } // 800E79C8
  {uint32_t ea=c->r[2]+0xFFFFA674u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E79CC
  fcmp(c,0,c->f[1],c->f[0]); // 800E79D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E79D4
  if (!crb(c,2)) { goto L_800E7A08; } // 800E79D8
  c->r[0]=0u+0x00000002u; // 800E79DC
  goto L_800E7A08; // 800E79E0
L_800E79E4:;
  {uint32_t ea=c->r[2]+0xFFFFA680u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E79E4
  fcmp(c,0,c->f[1],c->f[0]); // 800E79E8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E79EC
  if (!crb(c,2)) { goto L_800E7A08; } // 800E79F0
  {uint32_t ea=c->r[2]+0xFFFFA67Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E79F4
  fcmp(c,0,c->f[1],c->f[0]); // 800E79F8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E79FC
  if (!crb(c,2)) { goto L_800E7A08; } // 800E7A00
  c->r[0]=0u+0x00000001u; // 800E7A04
L_800E7A08:;
  cmps(c,0,(int32_t)c->r[0],1); // 800E7A08
  if (crb(c,2)) { goto L_800E7DC4; } // 800E7A0C
  if (!crb(c,0)) { goto L_800E7A20; } // 800E7A10
  cmps(c,0,(int32_t)c->r[0],0); // 800E7A14
  if (!crb(c,0)) { goto L_800E7A2C; } // 800E7A18
  goto L_800E8094; // 800E7A1C
L_800E7A20:;
  cmps(c,0,(int32_t)c->r[0],3); // 800E7A20
  if (!crb(c,0)) { goto L_800E8094; } // 800E7A24
  goto L_800E7F2C; // 800E7A28
L_800E7A2C:;
  c->r[0]=R8(c->r[27]+0x0000007Fu); // 800E7A2C
  cmps(c,0,(int32_t)c->r[0],0); // 800E7A30
  if (!crb(c,2)) { goto L_800E8094; } // 800E7A34
  {uint32_t ea=c->r[27]+0x00000074u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E7A38
  c->f[31]=c->ps1[31]=S(c->f[30]-c->f[29]); // 800E7A3C
  c->f[1]=c->f[31]; // 800E7A40
  c->lr=0x800E7A48u; f_8003EA88(c); // 800E7A44
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7A48
  fcmp(c,0,c->f[1],c->f[0]); // 800E7A4C
  if (!crb(c,1)) { goto L_800E7A74; } // 800E7A50
  fcmp(c,0,c->f[29],c->f[30]); // 800E7A54
  if (!crb(c,1)) { goto L_800E7A68; } // 800E7A58
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7A5C
  c->f[29]=c->ps1[29]=S(c->f[29]-c->f[0]); // 800E7A60
  goto L_800E7A70; // 800E7A64
L_800E7A68:;
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7A68
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[0]); // 800E7A6C
L_800E7A70:;
  c->f[31]=c->ps1[31]=S(c->f[30]-c->f[29]); // 800E7A70
L_800E7A74:;
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800E7A74
  c->lr=0x800E7A7Cu; f_80035554(c); // 800E7A78
  c->f[31]=c->ps1[31]=S(c->f[31]/c->f[1]); // 800E7A7C
  c->r[0]=R8(c->r[27]+0x0000007Cu); // 800E7A80
  cmps(c,0,(int32_t)c->r[0],1); // 800E7A84
  if (crb(c,2)) { goto L_800E7BEC; } // 800E7A88
  if (!crb(c,0)) { goto L_800E7A9C; } // 800E7A8C
  cmps(c,0,(int32_t)c->r[0],0); // 800E7A90
  if (!crb(c,0)) { goto L_800E7AA8; } // 800E7A94
  goto L_800E7C80; // 800E7A98
L_800E7A9C:;
  cmps(c,0,(int32_t)c->r[0],3); // 800E7A9C
  if (!crb(c,0)) { goto L_800E7C80; } // 800E7AA0
  goto L_800E7C38; // 800E7AA4
L_800E7AA8:;
  c->r[0]=R8(c->r[27]+0x00000084u); // 800E7AA8
  cmps(c,0,(int32_t)c->r[0],1); // 800E7AAC
  if (crb(c,2)) { goto L_800E7B44; } // 800E7AB0
  if (!crb(c,0)) { goto L_800E7AC4; } // 800E7AB4
  cmps(c,0,(int32_t)c->r[0],0); // 800E7AB8
  if (!crb(c,0)) { goto L_800E7AD0; } // 800E7ABC
  goto L_800E7C80; // 800E7AC0
L_800E7AC4:;
  cmps(c,0,(int32_t)c->r[0],3); // 800E7AC4
  if (!crb(c,0)) { goto L_800E7C80; } // 800E7AC8
  goto L_800E7B98; // 800E7ACC
L_800E7AD0:;
  c->f[1]=c->f[31]; // 800E7AD0
  c->lr=0x800E7AD8u; f_8003EA88(c); // 800E7AD4
  {uint32_t ea=c->r[2]+0xFFFFA688u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7AD8
  fcmp(c,0,c->f[1],c->f[0]); // 800E7ADC
  if (!crb(c,1)) { goto L_800E7B38; } // 800E7AE0
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7AE4
  fcmp(c,0,c->f[31],c->f[0]); // 800E7AE8
  if (!crb(c,1)) { goto L_800E7AFC; } // 800E7AEC
  c->r[0]=0u+0x00000001u; // 800E7AF0
  W8(c->r[27]+0x00000084u,c->r[0]); // 800E7AF4
  goto L_800E7B04; // 800E7AF8
L_800E7AFC:;
  c->r[0]=0u+0x00000002u; // 800E7AFC
  W8(c->r[27]+0x00000084u,c->r[0]); // 800E7B00
L_800E7B04:;
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800E7B04
  c->lr=0x800E7B0Cu; f_80035554(c); // 800E7B08
  {uint32_t ea=c->r[27]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7B0C
  {uint32_t ea=c->r[2]+0xFFFFA68Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7B10
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800E7B14
  fcmp(c,0,c->f[1],c->f[0]); // 800E7B18
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[1]);} // 800E7B1C
  if (!crb(c,1)) { goto L_800E7C80; } // 800E7B20
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7B24
  c->r[0]=0u+0x00000001u; // 800E7B28
  W8(c->r[27]+0x0000007Fu,c->r[0]); // 800E7B2C
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[0]);} // 800E7B30
  goto L_800E7C80; // 800E7B34
L_800E7B38:;
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7B38
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[0]);} // 800E7B3C
  goto L_800E7C80; // 800E7B40
L_800E7B44:;
  {uint32_t ea=c->r[2]+0xFFFFA688u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7B44
  fcmp(c,0,c->f[31],c->f[0]); // 800E7B48
  if (!crb(c,1)) { goto L_800E7B84; } // 800E7B4C
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800E7B50
  c->lr=0x800E7B58u; f_80035554(c); // 800E7B54
  {uint32_t ea=c->r[27]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7B58
  {uint32_t ea=c->r[2]+0xFFFFA68Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7B5C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800E7B60
  fcmp(c,0,c->f[1],c->f[0]); // 800E7B64
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[1]);} // 800E7B68
  if (!crb(c,1)) { goto L_800E7C80; } // 800E7B6C
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7B70
  c->r[0]=0u+0x00000001u; // 800E7B74
  W8(c->r[27]+0x0000007Fu,c->r[0]); // 800E7B78
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[0]);} // 800E7B7C
  goto L_800E7C80; // 800E7B80
L_800E7B84:;
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7B84
  c->r[0]=0u+0x00000000u; // 800E7B88
  W8(c->r[27]+0x00000084u,c->r[0]); // 800E7B8C
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[0]);} // 800E7B90
  goto L_800E7C80; // 800E7B94
L_800E7B98:;
  {uint32_t ea=c->r[2]+0xFFFFA690u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7B98
  fcmp(c,0,c->f[31],c->f[0]); // 800E7B9C
  if (!crb(c,0)) { goto L_800E7BD8; } // 800E7BA0
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800E7BA4
  c->lr=0x800E7BACu; f_80035554(c); // 800E7BA8
  {uint32_t ea=c->r[27]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7BAC
  {uint32_t ea=c->r[2]+0xFFFFA68Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7BB0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800E7BB4
  fcmp(c,0,c->f[1],c->f[0]); // 800E7BB8
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[1]);} // 800E7BBC
  if (!crb(c,1)) { goto L_800E7C80; } // 800E7BC0
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7BC4
  c->r[0]=0u+0x00000001u; // 800E7BC8
  W8(c->r[27]+0x0000007Fu,c->r[0]); // 800E7BCC
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[0]);} // 800E7BD0
  goto L_800E7C80; // 800E7BD4
L_800E7BD8:;
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7BD8
  c->r[0]=0u+0x00000000u; // 800E7BDC
  W8(c->r[27]+0x00000084u,c->r[0]); // 800E7BE0
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[0]);} // 800E7BE4
  goto L_800E7C80; // 800E7BE8
L_800E7BEC:;
  {uint32_t ea=c->r[2]+0xFFFFA690u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7BEC
  fcmp(c,0,c->f[31],c->f[0]); // 800E7BF0
  if (!crb(c,0)) { goto L_800E7C2C; } // 800E7BF4
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800E7BF8
  c->lr=0x800E7C00u; f_80035554(c); // 800E7BFC
  {uint32_t ea=c->r[27]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7C00
  {uint32_t ea=c->r[2]+0xFFFFA68Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7C04
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800E7C08
  fcmp(c,0,c->f[1],c->f[0]); // 800E7C0C
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[1]);} // 800E7C10
  if (!crb(c,1)) { goto L_800E7C80; } // 800E7C14
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7C18
  c->r[0]=0u+0x00000001u; // 800E7C1C
  W8(c->r[27]+0x0000007Fu,c->r[0]); // 800E7C20
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[0]);} // 800E7C24
  goto L_800E7C80; // 800E7C28
L_800E7C2C:;
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7C2C
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[0]);} // 800E7C30
  goto L_800E7C80; // 800E7C34
L_800E7C38:;
  {uint32_t ea=c->r[2]+0xFFFFA688u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7C38
  fcmp(c,0,c->f[31],c->f[0]); // 800E7C3C
  if (!crb(c,1)) { goto L_800E7C78; } // 800E7C40
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800E7C44
  c->lr=0x800E7C4Cu; f_80035554(c); // 800E7C48
  {uint32_t ea=c->r[27]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7C4C
  {uint32_t ea=c->r[2]+0xFFFFA68Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7C50
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800E7C54
  fcmp(c,0,c->f[1],c->f[0]); // 800E7C58
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[1]);} // 800E7C5C
  if (!crb(c,1)) { goto L_800E7C80; } // 800E7C60
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7C64
  c->r[0]=0u+0x00000001u; // 800E7C68
  W8(c->r[27]+0x0000007Fu,c->r[0]); // 800E7C6C
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[0]);} // 800E7C70
  goto L_800E7C80; // 800E7C74
L_800E7C78:;
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7C78
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[0]);} // 800E7C7C
L_800E7C80:;
  c->r[0]=R8(c->r[27]+0x0000007Fu); // 800E7C80
  cmps(c,0,(int32_t)c->r[0],0); // 800E7C84
  if (crb(c,2)) { goto L_800E8094; } // 800E7C88
  c->r[0]=R8(c->r[27]+0x0000007Cu); // 800E7C8C
  cmps(c,0,(int32_t)c->r[0],1); // 800E7C90
  if (crb(c,2)) { goto L_800E7CE8; } // 800E7C94
  if (!crb(c,0)) { goto L_800E7CA8; } // 800E7C98
  cmps(c,0,(int32_t)c->r[0],0); // 800E7C9C
  if (!crb(c,0)) { goto L_800E7CB4; } // 800E7CA0
  goto L_800E7D04; // 800E7CA4
L_800E7CA8:;
  cmps(c,0,(int32_t)c->r[0],3); // 800E7CA8
  if (!crb(c,0)) { goto L_800E7D04; } // 800E7CAC
  goto L_800E7CF8; // 800E7CB0
L_800E7CB4:;
  c->r[0]=R8(c->r[27]+0x00000084u); // 800E7CB4
  cmpu(c,0,c->r[0],0x00000001u); // 800E7CB8
  if (!crb(c,2)) { goto L_800E7CD0; } // 800E7CBC
  c->r[30]=0u+0x00000191u; // 800E7CC0
  c->r[29]=0u+0x00000005u; // 800E7CC4
  c->r[28]=0u+0x00000006u; // 800E7CC8
  goto L_800E7CDC; // 800E7CCC
L_800E7CD0:;
  c->r[30]=0u+0x00000193u; // 800E7CD0
  c->r[29]=0u+0x00000004u; // 800E7CD4
  c->r[28]=0u+0x00000007u; // 800E7CD8
L_800E7CDC:;
  c->r[0]=0u+0x00000000u; // 800E7CDC
  W8(c->r[27]+0x00000084u,c->r[0]); // 800E7CE0
  goto L_800E7D04; // 800E7CE4
L_800E7CE8:;
  c->r[30]=0u+0x00000194u; // 800E7CE8
  c->r[29]=0u+0x00000007u; // 800E7CEC
  c->r[28]=0u+0x00000016u; // 800E7CF0
  goto L_800E7D04; // 800E7CF4
L_800E7CF8:;
  c->r[30]=0u+0x00000195u; // 800E7CF8
  c->r[29]=0u+0x00000006u; // 800E7CFC
  c->r[28]=0u+0x00000016u; // 800E7D00
L_800E7D04:;
  c->r[0]=R8(c->r[27]+0x00000087u); // 800E7D04
  cmpu(c,0,c->r[0],0x000000FFu); // 800E7D08
  if (!crb(c,2)) { goto L_800E7D2C; } // 800E7D0C
  c->r[3]=0u+0x80550000u; // 800E7D10
  c->r[4]=R32(c->r[13]+0xFFFF85E0u); // 800E7D14
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E7D18
  c->r[5]=0u+0x00000000u; // 800E7D1C
  c->r[6]=0u+0x00000000u; // 800E7D20
  c->lr=0x800E7D28u; f_8018D3E4(c); // 800E7D24
  W8(c->r[27]+0x00000087u,c->r[3]); // 800E7D28
L_800E7D2C:;
  c->r[3]=0u+0x00000000u; // 800E7D2C
  c->r[4]=0u+0x00000000u; // 800E7D30
  c->r[5]=0u+0x00000008u; // 800E7D34
  c->lr=0x800E7D3Cu; f_8027C0C8(c); // 800E7D38
  c->r[3]=c->r[27]|c->r[27]; // 800E7D3C
  c->r[5]=c->r[28]|c->r[28]; // 800E7D40
  c->r[4]=0u+0x00000004u; // 800E7D44
  c->r[6]=0u+0x00000001u; // 800E7D48
  c->r[7]=0u+0x00000001u; // 800E7D4C
  c->lr=0x800E7D54u; f_8017900C(c); // 800E7D50
  c->r[3]=0u+0x805D0000u; // 800E7D54
  {uint32_t ea=c->r[2]+0xFFFFA694u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7D58
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7D5C
  c->r[4]=c->r[30]|c->r[30]; // 800E7D60
  c->r[3]=c->r[3]+0x00003F6Cu; // 800E7D64
  c->r[5]=0u+0x00000000u; // 800E7D68
  c->lr=0x800E7D70u; f_8020AE70(c); // 800E7D6C
  c->r[12]=R32(c->r[27]+0x000000B0u); // 800E7D70
  c->r[3]=c->r[27]|c->r[27]; // 800E7D74
  c->r[5]=c->r[30]|c->r[30]; // 800E7D78
  c->r[6]=0u+0x00000001u; // 800E7D7C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E7D80
  c->r[4]=R32(c->r[27]+0x00000398u); // 800E7D84
  {uint32_t ea=c->r[2]+0xFFFFA694u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7D88
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7D8C
  c->ctr=c->r[12]; // 800E7D90
  if (true) { c->lr=0x800E7D98u; dispatch(c,c->ctr); } // 800E7D94
  c->r[12]=R32(c->r[27]+0x000000B0u); // 800E7D98
  c->r[3]=c->r[27]|c->r[27]; // 800E7D9C
  c->r[5]=c->r[29]|c->r[29]; // 800E7DA0
  c->r[6]=0u+0x00000001u; // 800E7DA4
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E7DA8
  c->r[4]=R32(c->r[27]+0x00000394u); // 800E7DAC
  {uint32_t ea=c->r[2]+0xFFFFA694u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7DB0
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7DB4
  c->ctr=c->r[12]; // 800E7DB8
  if (true) { c->lr=0x800E7DC0u; dispatch(c,c->ctr); } // 800E7DBC
  goto L_800E8094; // 800E7DC0
L_800E7DC4:;
  c->r[3]=0u+0x80620000u; // 800E7DC4
  c->r[4]=R8(c->r[27]+0x0000007Du); // 800E7DC8
  c->r[3]=c->r[3]+0x00007688u; // 800E7DCC
  c->r[5]=0u+0x00000001u; // 800E7DD0
  c->r[3]=R32(c->r[3]+0x00000014u); // 800E7DD4
  c->lr=0x800E7DDCu; f_80038998(c); // 800E7DD8
  c->r[7]=0u+0x803D0000u; // 800E7DDC
  {uint32_t ea=c->r[7]+0x00003C7Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E7DE0
  c->r[3]=c->r[27]|c->r[27]; // 800E7DE4
  c->r[4]=c->r[1]+0x0000002Cu; // 800E7DE8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E7DEC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E7DF0
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800E7DF4
  W32(c->r[1]+0x00000030u,c->r[5]); // 800E7DF8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E7DFC
  c->lr=0x800E7E04u; f_800E73E0(c); // 800E7E00
  cmps(c,0,(int32_t)c->r[26],0); // 800E7E04
  if (crb(c,2)) { goto L_800E7E18; } // 800E7E08
  c->r[26]=0u+0x000001A1u; // 800E7E0C
  c->r[28]=0u+0x00000009u; // 800E7E10
  goto L_800E7E20; // 800E7E14
L_800E7E18:;
  c->r[26]=0u+0x00000182u; // 800E7E18
  c->r[28]=0u+0x00000003u; // 800E7E1C
L_800E7E20:;
  c->r[0]=R8(c->r[27]+0x00000087u); // 800E7E20
  cmpu(c,0,c->r[0],0x000000FFu); // 800E7E24
  if (!crb(c,2)) { goto L_800E7E48; } // 800E7E28
  c->r[3]=0u+0x80550000u; // 800E7E2C
  c->r[4]=R32(c->r[13]+0xFFFF85E0u); // 800E7E30
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E7E34
  c->r[5]=0u+0x00000000u; // 800E7E38
  c->r[6]=0u+0x00000000u; // 800E7E3C
  c->lr=0x800E7E44u; f_8018D3E4(c); // 800E7E40
  W8(c->r[27]+0x00000087u,c->r[3]); // 800E7E44
L_800E7E48:;
  c->r[3]=0u+0x00000000u; // 800E7E48
  c->r[4]=0u+0x00000000u; // 800E7E4C
  c->r[5]=0u+0x00000008u; // 800E7E50
  c->lr=0x800E7E58u; f_8027C0C8(c); // 800E7E54
  c->r[3]=c->r[27]|c->r[27]; // 800E7E58
  c->r[4]=0u+0x00000004u; // 800E7E5C
  c->r[5]=0u+0x00000007u; // 800E7E60
  c->r[6]=0u+0x00000001u; // 800E7E64
  c->r[7]=0u+0x00000001u; // 800E7E68
  c->lr=0x800E7E70u; f_8017900C(c); // 800E7E6C
  c->r[3]=0u+0x805D0000u; // 800E7E70
  {uint32_t ea=c->r[2]+0xFFFFA694u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7E74
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7E78
  c->r[4]=c->r[26]|c->r[26]; // 800E7E7C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800E7E80
  c->r[5]=0u+0x00000000u; // 800E7E84
  c->lr=0x800E7E8Cu; f_8020AE70(c); // 800E7E88
  c->r[12]=R32(c->r[27]+0x000000B0u); // 800E7E8C
  c->r[3]=c->r[27]|c->r[27]; // 800E7E90
  c->r[5]=c->r[26]|c->r[26]; // 800E7E94
  c->r[6]=0u+0x00000001u; // 800E7E98
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E7E9C
  c->r[4]=R32(c->r[27]+0x00000398u); // 800E7EA0
  {uint32_t ea=c->r[2]+0xFFFFA694u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7EA4
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7EA8
  c->ctr=c->r[12]; // 800E7EAC
  if (true) { c->lr=0x800E7EB4u; dispatch(c,c->ctr); } // 800E7EB0
  c->r[12]=R32(c->r[27]+0x000000B0u); // 800E7EB4
  c->r[3]=c->r[27]|c->r[27]; // 800E7EB8
  c->r[5]=c->r[28]|c->r[28]; // 800E7EBC
  c->r[6]=0u+0x00000001u; // 800E7EC0
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E7EC4
  c->r[4]=R32(c->r[27]+0x00000394u); // 800E7EC8
  {uint32_t ea=c->r[2]+0xFFFFA694u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7ECC
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7ED0
  c->ctr=c->r[12]; // 800E7ED4
  if (true) { c->lr=0x800E7EDCu; dispatch(c,c->ctr); } // 800E7ED8
  c->r[0]=R8(c->r[27]+0x00000086u); // 800E7EDC
  c->r[3]=0u+0x00000001u; // 800E7EE0
  W8(c->r[27]+0x0000007Cu,c->r[3]); // 800E7EE4
  cmps(c,0,(int32_t)c->r[0],2); // 800E7EE8
  if (crb(c,2)) { goto L_800E7F0C; } // 800E7EEC
  if (!crb(c,0)) { goto L_800E7F10; } // 800E7EF0
  cmps(c,0,(int32_t)c->r[0],1); // 800E7EF4
  if (!crb(c,0)) { goto L_800E7F00; } // 800E7EF8
  goto L_800E7F10; // 800E7EFC
L_800E7F00:;
  c->r[0]=0u+0x00000000u; // 800E7F00
  W8(c->r[27]+0x00000085u,c->r[0]); // 800E7F04
  goto L_800E7F10; // 800E7F08
L_800E7F0C:;
  W8(c->r[27]+0x00000085u,c->r[3]); // 800E7F0C
L_800E7F10:;
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E7F10
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E7F14
  c->lr=0x800E7F1Cu; f_802501B0(c); // 800E7F18
  c->r[3]=R32(c->r[27]+0x00000398u); // 800E7F1C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E7F20
  c->lr=0x800E7F28u; f_802501B0(c); // 800E7F24
  goto L_800E81F4; // 800E7F28
L_800E7F2C:;
  c->r[3]=0u+0x80620000u; // 800E7F2C
  c->r[4]=R8(c->r[27]+0x0000007Du); // 800E7F30
  c->r[3]=c->r[3]+0x00007688u; // 800E7F34
  c->r[5]=0u+0x00000002u; // 800E7F38
  c->r[3]=R32(c->r[3]+0x00000014u); // 800E7F3C
  c->lr=0x800E7F44u; f_80038998(c); // 800E7F40
  c->r[7]=0u+0x803D0000u; // 800E7F44
  {uint32_t ea=c->r[7]+0x00003C88u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E7F48
  c->r[3]=c->r[27]|c->r[27]; // 800E7F4C
  c->r[4]=c->r[1]+0x00000020u; // 800E7F50
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E7F54
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E7F58
  W32(c->r[1]+0x00000020u,c->r[6]); // 800E7F5C
  W32(c->r[1]+0x00000024u,c->r[5]); // 800E7F60
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E7F64
  c->lr=0x800E7F6Cu; f_800E73E0(c); // 800E7F68
  cmps(c,0,(int32_t)c->r[26],0); // 800E7F6C
  if (crb(c,2)) { goto L_800E7F80; } // 800E7F70
  c->r[26]=0u+0x000001A0u; // 800E7F74
  c->r[28]=0u+0x0000000Au; // 800E7F78
  goto L_800E7F88; // 800E7F7C
L_800E7F80:;
  c->r[26]=0u+0x00000181u; // 800E7F80
  c->r[28]=0u+0x00000002u; // 800E7F84
L_800E7F88:;
  c->r[0]=R8(c->r[27]+0x00000087u); // 800E7F88
  cmpu(c,0,c->r[0],0x000000FFu); // 800E7F8C
  if (!crb(c,2)) { goto L_800E7FB0; } // 800E7F90
  c->r[3]=0u+0x80550000u; // 800E7F94
  c->r[4]=R32(c->r[13]+0xFFFF85E0u); // 800E7F98
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E7F9C
  c->r[5]=0u+0x00000000u; // 800E7FA0
  c->r[6]=0u+0x00000000u; // 800E7FA4
  c->lr=0x800E7FACu; f_8018D3E4(c); // 800E7FA8
  W8(c->r[27]+0x00000087u,c->r[3]); // 800E7FAC
L_800E7FB0:;
  c->r[3]=0u+0x00000000u; // 800E7FB0
  c->r[4]=0u+0x00000000u; // 800E7FB4
  c->r[5]=0u+0x00000008u; // 800E7FB8
  c->lr=0x800E7FC0u; f_8027C0C8(c); // 800E7FBC
  c->r[3]=c->r[27]|c->r[27]; // 800E7FC0
  c->r[4]=0u+0x00000004u; // 800E7FC4
  c->r[5]=0u+0x00000006u; // 800E7FC8
  c->r[6]=0u+0x00000001u; // 800E7FCC
  c->r[7]=0u+0x00000001u; // 800E7FD0
  c->lr=0x800E7FD8u; f_8017900C(c); // 800E7FD4
  c->r[3]=0u+0x805D0000u; // 800E7FD8
  {uint32_t ea=c->r[2]+0xFFFFA694u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7FDC
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7FE0
  c->r[4]=c->r[26]|c->r[26]; // 800E7FE4
  c->r[3]=c->r[3]+0x00003F6Cu; // 800E7FE8
  c->r[5]=0u+0x00000000u; // 800E7FEC
  c->lr=0x800E7FF4u; f_8020AE70(c); // 800E7FF0
  c->r[12]=R32(c->r[27]+0x000000B0u); // 800E7FF4
  c->r[3]=c->r[27]|c->r[27]; // 800E7FF8
  c->r[5]=c->r[26]|c->r[26]; // 800E7FFC
  c->r[6]=0u+0x00000001u; // 800E8000
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E8004
  c->r[4]=R32(c->r[27]+0x00000398u); // 800E8008
  {uint32_t ea=c->r[2]+0xFFFFA694u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E800C
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E8010
  c->ctr=c->r[12]; // 800E8014
  if (true) { c->lr=0x800E801Cu; dispatch(c,c->ctr); } // 800E8018
  c->r[12]=R32(c->r[27]+0x000000B0u); // 800E801C
  c->r[3]=c->r[27]|c->r[27]; // 800E8020
  c->r[5]=c->r[28]|c->r[28]; // 800E8024
  c->r[6]=0u+0x00000001u; // 800E8028
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E802C
  c->r[4]=R32(c->r[27]+0x00000394u); // 800E8030
  {uint32_t ea=c->r[2]+0xFFFFA694u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E8034
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E8038
  c->ctr=c->r[12]; // 800E803C
  if (true) { c->lr=0x800E8044u; dispatch(c,c->ctr); } // 800E8040
  c->r[0]=R8(c->r[27]+0x00000086u); // 800E8044
  c->r[3]=0u+0x00000002u; // 800E8048
  W8(c->r[27]+0x0000007Cu,c->r[3]); // 800E804C
  cmps(c,0,(int32_t)c->r[0],2); // 800E8050
  if (crb(c,2)) { goto L_800E8070; } // 800E8054
  if (!crb(c,0)) { goto L_800E8078; } // 800E8058
  cmps(c,0,(int32_t)c->r[0],1); // 800E805C
  if (!crb(c,0)) { goto L_800E8068; } // 800E8060
  goto L_800E8078; // 800E8064
L_800E8068:;
  W8(c->r[27]+0x00000085u,c->r[3]); // 800E8068
  goto L_800E8078; // 800E806C
L_800E8070:;
  c->r[0]=0u+0x00000000u; // 800E8070
  W8(c->r[27]+0x00000085u,c->r[0]); // 800E8074
L_800E8078:;
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E8078
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E807C
  c->lr=0x800E8084u; f_802501B0(c); // 800E8080
  c->r[3]=R32(c->r[27]+0x00000398u); // 800E8084
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E8088
  c->lr=0x800E8090u; f_802501B0(c); // 800E808C
  goto L_800E81F4; // 800E8090
L_800E8094:;
  c->r[3]=R32(c->r[27]+0x00000394u); // 800E8094
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E8098
  c->lr=0x800E80A0u; f_802501B0(c); // 800E809C
  cmps(c,0,(int32_t)c->r[3],0); // 800E80A0
  if (crb(c,2)) { goto L_800E80DC; } // 800E80A4
  c->r[0]=R8(c->r[27]+0x0000007Fu); // 800E80A8
  cmps(c,0,(int32_t)c->r[0],0); // 800E80AC
  if (crb(c,2)) { goto L_800E80BC; } // 800E80B0
  c->r[0]=0u+0x00000000u; // 800E80B4
  W8(c->r[27]+0x0000007Fu,c->r[0]); // 800E80B8
L_800E80BC:;
  c->r[4]=R8(c->r[27]+0x00000087u); // 800E80BC
  cmpu(c,0,c->r[4],0x000000FFu); // 800E80C0
  if (crb(c,2)) { goto L_800E80DC; } // 800E80C4
  c->r[3]=0u+0x80550000u; // 800E80C8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E80CC
  c->lr=0x800E80D4u; f_8018D738(c); // 800E80D0
  c->r[0]=0u+0x000000FFu; // 800E80D4
  W8(c->r[27]+0x00000087u,c->r[0]); // 800E80D8
L_800E80DC:;
  c->r[3]=R32(c->r[27]+0x00000398u); // 800E80DC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E80E0
  c->lr=0x800E80E8u; f_802501B0(c); // 800E80E4
  c->r[4]=c->r[31]+0x00000054u; // 800E80E8
  c->r[6]=c->r[31]+0x00000060u; // 800E80EC
  c->r[5]=c->r[31]+0x0000006Cu; // 800E80F0
  c->r[28]=R32(c->r[31]+0x00000054u); // 800E80F4
  c->r[12]=R32(c->r[4]+0x00000004u); // 800E80F8
  c->r[3]=c->r[27]|c->r[27]; // 800E80FC
  c->r[11]=R32(c->r[4]+0x00000008u); // 800E8100
  c->r[4]=0u+0x00000000u; // 800E8104
  c->r[10]=R32(c->r[31]+0x00000060u); // 800E8108
  c->r[9]=R32(c->r[6]+0x00000004u); // 800E810C
  c->r[8]=R32(c->r[6]+0x00000008u); // 800E8110
  c->r[7]=R32(c->r[31]+0x0000006Cu); // 800E8114
  c->r[6]=R32(c->r[5]+0x00000004u); // 800E8118
  c->r[0]=R32(c->r[5]+0x00000008u); // 800E811C
  W32(c->r[1]+0x00000050u,c->r[28]); // 800E8120
  W32(c->r[1]+0x00000054u,c->r[12]); // 800E8124
  W32(c->r[1]+0x00000058u,c->r[11]); // 800E8128
  W32(c->r[1]+0x00000044u,c->r[10]); // 800E812C
  W32(c->r[1]+0x00000048u,c->r[9]); // 800E8130
  W32(c->r[1]+0x0000004Cu,c->r[8]); // 800E8134
  W32(c->r[1]+0x00000038u,c->r[7]); // 800E8138
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 800E813C
  W32(c->r[1]+0x00000040u,c->r[0]); // 800E8140
  c->lr=0x800E8148u; f_80039840(c); // 800E8144
  c->r[4]=0u+0x803A0000u; // 800E8148
  c->r[5]=c->r[1]+0x00000090u; // 800E814C
  c->r[4]=c->r[4]+0xFFFFE910u; // 800E8150
  c->r[6]=0u+0x00000001u; // 800E8154
  c->r[4]=c->r[4]+0x00000016u; // 800E8158
  c->lr=0x800E8160u; f_80257018(c); // 800E815C
  c->r[4]=c->r[1]+0x00000050u; // 800E8160
  c->r[3]=c->r[1]+0x00000090u; // 800E8164
  c->r[5]=c->r[4]|c->r[4]; // 800E8168
  c->lr=0x800E8170u; f_80296750(c); // 800E816C
  c->r[6]=R32(c->r[1]+0x00000050u); // 800E8170
  c->r[27]=0u+0x805D0000u; // 800E8174
  c->r[5]=R32(c->r[1]+0x00000054u); // 800E8178
  c->r[3]=c->r[27]+0x00003F6Cu; // 800E817C
  c->r[0]=R32(c->r[1]+0x00000058u); // 800E8180
  c->r[4]=c->r[1]+0x00000014u; // 800E8184
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E8188
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E818C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E8190
  c->lr=0x800E8198u; f_80038D04(c); // 800E8194
  c->r[3]=c->r[1]+0x00000060u; // 800E8198
  c->r[4]=c->r[1]+0x00000044u; // 800E819C
  c->r[5]=c->r[1]+0x00000038u; // 800E81A0
  c->lr=0x800E81A8u; f_802511D0(c); // 800E81A4
  c->r[4]=c->r[1]+0x00000060u; // 800E81A8
  c->r[3]=c->r[1]+0x00000090u; // 800E81AC
  c->r[5]=c->r[4]|c->r[4]; // 800E81B0
  c->lr=0x800E81B8u; f_80295B48(c); // 800E81B4
  c->r[3]=c->r[1]+0x00000050u; // 800E81B8
  c->r[4]=c->r[1]+0x00000044u; // 800E81BC
  c->r[5]=c->r[1]+0x00000038u; // 800E81C0
  c->r[6]=c->r[1]+0x00000060u; // 800E81C4
  c->r[7]=0u+0x00000000u; // 800E81C8
  c->lr=0x800E81D0u; f_8002BE64(c); // 800E81CC
  c->r[6]=R32(c->r[1]+0x00000044u); // 800E81D0
  c->r[3]=c->r[27]+0x00003F6Cu; // 800E81D4
  c->r[5]=R32(c->r[1]+0x00000048u); // 800E81D8
  c->r[4]=c->r[1]+0x00000008u; // 800E81DC
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800E81E0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E81E4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E81E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E81EC
  c->lr=0x800E81F4u; f_800BEDA4(c); // 800E81F0
L_800E81F4:;
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 800E81F4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 800E81F8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,30,ea,0,0);} // 800E81FC
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 800E8200
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,29,ea,0,0);} // 800E8204
  c->r[11]=c->r[1]+0x000000E0u; // 800E8208
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[29]=RF64(ea);} // 800E820C
  c->lr=0x800E8214u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E8210
  c->r[0]=R32(c->r[1]+0x00000114u); // 800E8214
  c->lr=c->r[0]; // 800E8218
  c->r[1]=c->r[1]+0x00000110u; // 800E821C
  return; // 800E8220
}

// fn_800E8224
void f_800E8224(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8224
  c->r[0]=c->lr; // 800E8228
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800E822C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 800E8230
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 800E8234
  {uint32_t ea=c->r[2]+0xFFFFA698u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E8238
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800E823C
  c->r[31]=0u+0x803A0000u; // 800E8240
  c->r[31]=c->r[31]+0xFFFFE828u; // 800E8244
  W32(c->r[1]+0x000000C8u,c->r[30]); // 800E8248
  c->r[30]=c->r[3]|c->r[3]; // 800E824C
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800E8250
  W32(c->r[1]+0x000000C4u,c->r[29]); // 800E8254
  c->lr=0x800E825Cu; f_80035554(c); // 800E8258
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E825C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E8260
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[31],c->f[1],-c->f[0])); // 800E8264
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800E8268
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E826C
  c->lr=0x800E8274u; f_802501B0(c); // 800E8270
  cmps(c,0,(int32_t)c->r[3],0); // 800E8274
  if (crb(c,2)) { goto L_800E8398; } // 800E8278
  c->r[3]=R8(c->r[30]+0x0000007Eu); // 800E827C
  c->r[3]=c->r[3]+0x00000001u; // 800E8280
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800E8284
  W8(c->r[30]+0x0000007Eu,c->r[3]); // 800E8288
  cmpu(c,0,c->r[0],0x0000000Cu); // 800E828C
  if (!crb(c,0)) { goto L_800E82E8; } // 800E8290
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E8294
  c->r[0]=0u+0x00000001u; // 800E8298
  c->r[3]=0u+0x80620000u; // 800E829C
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 800E82A0
  c->r[3]=c->r[3]+0x00007688u; // 800E82A4
  c->r[4]=R8(c->r[30]+0x0000007Du); // 800E82A8
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[0]);} // 800E82AC
  c->r[5]=0u+0x00000000u; // 800E82B0
  c->r[3]=R32(c->r[3]+0x00000014u); // 800E82B4
  c->lr=0x800E82BCu; f_80038998(c); // 800E82B8
  c->r[7]=0u+0x803D0000u; // 800E82BC
  {uint32_t ea=c->r[7]+0x00003C94u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E82C0
  c->r[3]=c->r[30]|c->r[30]; // 800E82C4
  c->r[4]=c->r[1]+0x0000002Cu; // 800E82C8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E82CC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E82D0
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800E82D4
  W32(c->r[1]+0x00000030u,c->r[5]); // 800E82D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E82DC
  c->lr=0x800E82E4u; f_800E73E0(c); // 800E82E0
  goto L_800E8378; // 800E82E4
L_800E82E8:;
  c->r[3]=0u+0x80620000u; // 800E82E8
  c->r[4]=R8(c->r[30]+0x0000007Du); // 800E82EC
  c->r[3]=c->r[3]+0x00007688u; // 800E82F0
  c->r[5]=0u+0x00000003u; // 800E82F4
  c->r[3]=R32(c->r[3]+0x00000014u); // 800E82F8
  c->lr=0x800E8300u; f_80038998(c); // 800E82FC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E8300
  c->r[3]=c->r[30]|c->r[30]; // 800E8304
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E8308
  c->r[5]=0u+0x00000008u; // 800E830C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E8310
  c->r[6]=0u+0x00000001u; // 800E8314
  {uint32_t ea=c->r[2]+0xFFFFA694u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E8318
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E831C
  c->ctr=c->r[12]; // 800E8320
  if (true) { c->lr=0x800E8328u; dispatch(c,c->ctr); } // 800E8324
  c->r[3]=c->r[30]|c->r[30]; // 800E8328
  c->r[4]=0u+0x00000004u; // 800E832C
  c->r[5]=0u+0x00000008u; // 800E8330
  c->r[6]=0u+0x00000001u; // 800E8334
  c->r[7]=0u+0x00000001u; // 800E8338
  c->lr=0x800E8340u; f_8017900C(c); // 800E833C
  c->r[3]=0u+0x00000000u; // 800E8340
  c->r[4]=0u+0x00000003u; // 800E8344
  c->r[5]=0u+0x0000000Cu; // 800E8348
  c->lr=0x800E8350u; f_8027C0C8(c); // 800E834C
  c->r[7]=0u+0x803D0000u; // 800E8350
  {uint32_t ea=c->r[7]+0x00003CA0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E8354
  c->r[3]=c->r[30]|c->r[30]; // 800E8358
  c->r[4]=c->r[1]+0x00000020u; // 800E835C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E8360
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E8364
  W32(c->r[1]+0x00000020u,c->r[6]); // 800E8368
  W32(c->r[1]+0x00000024u,c->r[5]); // 800E836C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E8370
  c->lr=0x800E8378u; f_800E73E0(c); // 800E8374
L_800E8378:;
  c->r[4]=R8(c->r[30]+0x00000087u); // 800E8378
  cmpu(c,0,c->r[4],0x000000FFu); // 800E837C
  if (crb(c,2)) { goto L_800E8398; } // 800E8380
  c->r[3]=0u+0x80550000u; // 800E8384
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E8388
  c->lr=0x800E8390u; f_8018D738(c); // 800E838C
  c->r[0]=0u+0x000000FFu; // 800E8390
  W8(c->r[30]+0x00000087u,c->r[0]); // 800E8394
L_800E8398:;
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E8398
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E839C
  c->lr=0x800E83A4u; f_802501B0(c); // 800E83A0
  c->r[3]=c->r[30]|c->r[30]; // 800E83A4
  c->r[4]=0u+0x00000000u; // 800E83A8
  c->lr=0x800E83B0u; f_801F5244(c); // 800E83AC
  c->r[4]=c->r[31]+0x00000078u; // 800E83B0
  c->r[6]=c->r[31]+0x00000084u; // 800E83B4
  c->r[5]=c->r[31]+0x00000090u; // 800E83B8
  c->r[29]=R32(c->r[31]+0x00000078u); // 800E83BC
  c->r[12]=R32(c->r[4]+0x00000004u); // 800E83C0
  c->r[3]=c->r[30]|c->r[30]; // 800E83C4
  c->r[11]=R32(c->r[4]+0x00000008u); // 800E83C8
  c->r[4]=0u+0x00000000u; // 800E83CC
  c->r[10]=R32(c->r[31]+0x00000084u); // 800E83D0
  c->r[9]=R32(c->r[6]+0x00000004u); // 800E83D4
  c->r[8]=R32(c->r[6]+0x00000008u); // 800E83D8
  c->r[7]=R32(c->r[31]+0x00000090u); // 800E83DC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800E83E0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800E83E4
  W32(c->r[1]+0x00000050u,c->r[29]); // 800E83E8
  W32(c->r[1]+0x00000054u,c->r[12]); // 800E83EC
  W32(c->r[1]+0x00000058u,c->r[11]); // 800E83F0
  W32(c->r[1]+0x00000044u,c->r[10]); // 800E83F4
  W32(c->r[1]+0x00000048u,c->r[9]); // 800E83F8
  W32(c->r[1]+0x0000004Cu,c->r[8]); // 800E83FC
  W32(c->r[1]+0x00000038u,c->r[7]); // 800E8400
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 800E8404
  W32(c->r[1]+0x00000040u,c->r[0]); // 800E8408
  c->lr=0x800E8410u; f_80039840(c); // 800E840C
  c->r[4]=0u+0x803A0000u; // 800E8410
  c->r[5]=c->r[1]+0x00000090u; // 800E8414
  c->r[4]=c->r[4]+0xFFFFE910u; // 800E8418
  c->r[6]=0u+0x00000001u; // 800E841C
  c->r[4]=c->r[4]+0x00000016u; // 800E8420
  c->lr=0x800E8428u; f_80257018(c); // 800E8424
  c->r[4]=c->r[1]+0x00000050u; // 800E8428
  c->r[3]=c->r[1]+0x00000090u; // 800E842C
  c->r[5]=c->r[4]|c->r[4]; // 800E8430
  c->lr=0x800E8438u; f_80296750(c); // 800E8434
  c->r[6]=R32(c->r[1]+0x00000050u); // 800E8438
  c->r[30]=0u+0x805D0000u; // 800E843C
  c->r[5]=R32(c->r[1]+0x00000054u); // 800E8440
  c->r[3]=c->r[30]+0x00003F6Cu; // 800E8444
  c->r[0]=R32(c->r[1]+0x00000058u); // 800E8448
  c->r[4]=c->r[1]+0x00000014u; // 800E844C
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E8450
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E8454
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E8458
  c->lr=0x800E8460u; f_80038D04(c); // 800E845C
  c->r[3]=c->r[1]+0x00000060u; // 800E8460
  c->r[4]=c->r[1]+0x00000044u; // 800E8464
  c->r[5]=c->r[1]+0x00000038u; // 800E8468
  c->lr=0x800E8470u; f_802511D0(c); // 800E846C
  c->r[4]=c->r[1]+0x00000060u; // 800E8470
  c->r[3]=c->r[1]+0x00000090u; // 800E8474
  c->r[5]=c->r[4]|c->r[4]; // 800E8478
  c->lr=0x800E8480u; f_80295B48(c); // 800E847C
  c->r[3]=c->r[1]+0x00000050u; // 800E8480
  c->r[4]=c->r[1]+0x00000044u; // 800E8484
  c->r[5]=c->r[1]+0x00000038u; // 800E8488
  c->r[6]=c->r[1]+0x00000060u; // 800E848C
  c->r[7]=0u+0x00000000u; // 800E8490
  c->lr=0x800E8498u; f_8002BE64(c); // 800E8494
  c->r[6]=R32(c->r[1]+0x00000044u); // 800E8498
  c->r[3]=c->r[30]+0x00003F6Cu; // 800E849C
  c->r[5]=R32(c->r[1]+0x00000048u); // 800E84A0
  c->r[4]=c->r[1]+0x00000008u; // 800E84A4
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800E84A8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E84AC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E84B0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E84B4
  c->lr=0x800E84BCu; f_800BEDA4(c); // 800E84B8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 800E84BC
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800E84C0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 800E84C4
  c->r[31]=R32(c->r[1]+0x000000CCu); // 800E84C8
  c->r[30]=R32(c->r[1]+0x000000C8u); // 800E84CC
  c->r[29]=R32(c->r[1]+0x000000C4u); // 800E84D0
  c->lr=c->r[0]; // 800E84D4
  c->r[1]=c->r[1]+0x000000E0u; // 800E84D8
  return; // 800E84DC
}

// fn_800E84E0
void f_800E84E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E84E0
  c->r[0]=c->lr; // 800E84E4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800E84E8
  W32(c->r[1]+0x000000BCu,c->r[31]); // 800E84EC
  W32(c->r[1]+0x000000B8u,c->r[30]); // 800E84F0
  c->r[30]=0u+0x803A0000u; // 800E84F4
  c->r[30]=c->r[30]+0xFFFFE828u; // 800E84F8
  W32(c->r[1]+0x000000B4u,c->r[29]); // 800E84FC
  c->r[29]=c->r[3]|c->r[3]; // 800E8500
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E8504
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E8508
  c->lr=0x800E8510u; f_802501B0(c); // 800E850C
  c->r[3]=R32(c->r[29]+0x00000398u); // 800E8510
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E8514
  c->lr=0x800E851Cu; f_802501B0(c); // 800E8518
  c->r[4]=c->r[30]+0x0000009Cu; // 800E851C
  c->r[6]=c->r[30]+0x000000A8u; // 800E8520
  c->r[5]=c->r[30]+0x000000B4u; // 800E8524
  c->r[31]=R32(c->r[30]+0x0000009Cu); // 800E8528
  c->r[12]=R32(c->r[4]+0x00000004u); // 800E852C
  c->r[3]=c->r[29]|c->r[29]; // 800E8530
  c->r[11]=R32(c->r[4]+0x00000008u); // 800E8534
  c->r[4]=0u+0x00000000u; // 800E8538
  c->r[10]=R32(c->r[30]+0x000000A8u); // 800E853C
  c->r[9]=R32(c->r[6]+0x00000004u); // 800E8540
  c->r[8]=R32(c->r[6]+0x00000008u); // 800E8544
  c->r[7]=R32(c->r[30]+0x000000B4u); // 800E8548
  c->r[6]=R32(c->r[5]+0x00000004u); // 800E854C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800E8550
  W32(c->r[1]+0x00000038u,c->r[31]); // 800E8554
  W32(c->r[1]+0x0000003Cu,c->r[12]); // 800E8558
  W32(c->r[1]+0x00000040u,c->r[11]); // 800E855C
  W32(c->r[1]+0x0000002Cu,c->r[10]); // 800E8560
  W32(c->r[1]+0x00000030u,c->r[9]); // 800E8564
  W32(c->r[1]+0x00000034u,c->r[8]); // 800E8568
  W32(c->r[1]+0x00000020u,c->r[7]); // 800E856C
  W32(c->r[1]+0x00000024u,c->r[6]); // 800E8570
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E8574
  c->lr=0x800E857Cu; f_80039840(c); // 800E8578
  c->r[4]=0u+0x803A0000u; // 800E857C
  c->r[5]=c->r[1]+0x00000078u; // 800E8580
  c->r[4]=c->r[4]+0xFFFFE910u; // 800E8584
  c->r[6]=0u+0x00000001u; // 800E8588
  c->r[4]=c->r[4]+0x00000016u; // 800E858C
  c->lr=0x800E8594u; f_80257018(c); // 800E8590
  c->r[4]=c->r[1]+0x00000038u; // 800E8594
  c->r[3]=c->r[1]+0x00000078u; // 800E8598
  c->r[5]=c->r[4]|c->r[4]; // 800E859C
  c->lr=0x800E85A4u; f_80296750(c); // 800E85A0
  c->r[6]=R32(c->r[1]+0x00000038u); // 800E85A4
  c->r[31]=0u+0x805D0000u; // 800E85A8
  c->r[5]=R32(c->r[1]+0x0000003Cu); // 800E85AC
  c->r[3]=c->r[31]+0x00003F6Cu; // 800E85B0
  c->r[0]=R32(c->r[1]+0x00000040u); // 800E85B4
  c->r[4]=c->r[1]+0x00000014u; // 800E85B8
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E85BC
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E85C0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E85C4
  c->lr=0x800E85CCu; f_80038D04(c); // 800E85C8
  c->r[3]=c->r[1]+0x00000048u; // 800E85CC
  c->r[4]=c->r[1]+0x0000002Cu; // 800E85D0
  c->r[5]=c->r[1]+0x00000020u; // 800E85D4
  c->lr=0x800E85DCu; f_802511D0(c); // 800E85D8
  c->r[4]=c->r[1]+0x00000048u; // 800E85DC
  c->r[3]=c->r[1]+0x00000078u; // 800E85E0
  c->r[5]=c->r[4]|c->r[4]; // 800E85E4
  c->lr=0x800E85ECu; f_80295B48(c); // 800E85E8
  c->r[3]=c->r[1]+0x00000038u; // 800E85EC
  c->r[4]=c->r[1]+0x0000002Cu; // 800E85F0
  c->r[5]=c->r[1]+0x00000020u; // 800E85F4
  c->r[6]=c->r[1]+0x00000048u; // 800E85F8
  c->r[7]=0u+0x00000000u; // 800E85FC
  c->lr=0x800E8604u; f_8002BE64(c); // 800E8600
  c->r[6]=R32(c->r[1]+0x0000002Cu); // 800E8604
  c->r[3]=c->r[31]+0x00003F6Cu; // 800E8608
  c->r[5]=R32(c->r[1]+0x00000030u); // 800E860C
  c->r[4]=c->r[1]+0x00000008u; // 800E8610
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E8614
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E8618
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E861C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E8620
  c->lr=0x800E8628u; f_800BEDA4(c); // 800E8624
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800E8628
  c->r[31]=R32(c->r[1]+0x000000BCu); // 800E862C
  c->r[30]=R32(c->r[1]+0x000000B8u); // 800E8630
  c->r[29]=R32(c->r[1]+0x000000B4u); // 800E8634
  c->lr=c->r[0]; // 800E8638
  c->r[1]=c->r[1]+0x000000C0u; // 800E863C
  return; // 800E8640
}

// fn_800E8644
void f_800E8644(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8644
  c->r[0]=c->lr; // 800E8648
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E864C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E8650
  c->r[31]=c->r[3]|c->r[3]; // 800E8654
  c->lr=0x800E865Cu; f_801F51B8(c); // 800E8658
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E865C
  c->r[0]=0u+0x00000000u; // 800E8660
  c->r[7]=0u+0x803D0000u; // 800E8664
  c->r[3]=c->r[31]|c->r[31]; // 800E8668
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800E866C
  c->r[4]=c->r[1]+0x00000008u; // 800E8670
  {uint32_t ea=c->r[7]+0x00003CACu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E8674
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E8678
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E867C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E8680
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E8684
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E8688
  c->lr=0x800E8690u; f_800E73E0(c); // 800E868C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E8690
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E8694
  c->lr=c->r[0]; // 800E8698
  c->r[1]=c->r[1]+0x00000020u; // 800E869C
  return; // 800E86A0
}

// fn_800E86A4
void f_800E86A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E86A4
  c->r[0]=c->lr; // 800E86A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E86AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E86B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E86B4
  c->r[30]=c->r[3]|c->r[3]; // 800E86B8
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800E86BC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800E86C0
  if (crb(c,2)) { goto L_800E8718; } // 800E86C4
  c->r[31]=0u+0x805D0000u; // 800E86C8
  c->r[3]=c->r[31]+0x00003F6Cu; // 800E86CC
  c->lr=0x800E86D4u; f_80045264(c); // 800E86D0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800E86D4
  cmpu(c,0,c->r[0],0x00000037u); // 800E86D8
  if (!crb(c,2)) { goto L_800E8718; } // 800E86DC
  c->r[3]=c->r[31]+0x00003F6Cu; // 800E86E0
  c->lr=0x800E86E8u; f_80037AF0(c); // 800E86E4
  cmpu(c,0,c->r[3],c->r[30]); // 800E86E8
  if (!crb(c,2)) { goto L_800E8718; } // 800E86EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800E86F0
  cmps(c,0,(int32_t)c->r[0],101); // 800E86F4
  if (crb(c,2)) { goto L_800E8718; } // 800E86F8
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E86FC
  c->r[3]=c->r[30]|c->r[30]; // 800E8700
  c->r[4]=0u+0x00000065u; // 800E8704
  c->r[5]=0u+0x00000000u; // 800E8708
  c->r[6]=0u+0x00000000u; // 800E870C
  c->r[7]=0u+0x00000000u; // 800E8710
  c->lr=0x800E8718u; f_801F4D44(c); // 800E8714
L_800E8718:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8718
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E871C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E8720
  c->lr=c->r[0]; // 800E8724
  c->r[1]=c->r[1]+0x00000010u; // 800E8728
  return; // 800E872C
}

// fn_800E8730
void f_800E8730(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8730
  c->r[0]=c->lr; // 800E8734
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E8738
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800E873C
  c->r[31]=0u+0x803D0000u; // 800E8740
  c->r[31]=c->r[31]+0x00003C58u; // 800E8744
  W32(c->r[1]+0x00000038u,c->r[30]); // 800E8748
  c->r[30]=c->r[3]|c->r[3]; // 800E874C
  c->lr=0x800E8754u; f_801F4F28(c); // 800E8750
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800E8754
  cmps(c,0,(int32_t)c->r[0],101); // 800E8758
  if (crb(c,2)) { goto L_800E87AC; } // 800E875C
  if (!crb(c,0)) { goto L_800E8770; } // 800E8760
  cmps(c,0,(int32_t)c->r[0],100); // 800E8764
  if (!crb(c,0)) { goto L_800E877C; } // 800E8768
  goto L_800E8808; // 800E876C
L_800E8770:;
  cmps(c,0,(int32_t)c->r[0],103); // 800E8770
  if (!crb(c,0)) { goto L_800E8808; } // 800E8774
  goto L_800E87DC; // 800E8778
L_800E877C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800E877C
  c->r[5]=c->r[31]+0x00000060u; // 800E8780
  c->r[3]=c->r[30]|c->r[30]; // 800E8784
  c->r[4]=c->r[1]+0x00000020u; // 800E8788
  c->r[7]=R32(c->r[31]+0x00000060u); // 800E878C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800E8790
  c->r[0]=R32(c->r[5]+0x00000008u); // 800E8794
  W32(c->r[1]+0x00000020u,c->r[7]); // 800E8798
  W32(c->r[1]+0x00000024u,c->r[6]); // 800E879C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E87A0
  c->lr=0x800E87A8u; f_800E73E0(c); // 800E87A4
  goto L_800E8808; // 800E87A8
L_800E87AC:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800E87AC
  c->r[5]=c->r[31]+0x0000006Cu; // 800E87B0
  c->r[3]=c->r[30]|c->r[30]; // 800E87B4
  c->r[4]=c->r[1]+0x00000014u; // 800E87B8
  c->r[7]=R32(c->r[31]+0x0000006Cu); // 800E87BC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800E87C0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800E87C4
  W32(c->r[1]+0x00000014u,c->r[7]); // 800E87C8
  W32(c->r[1]+0x00000018u,c->r[6]); // 800E87CC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E87D0
  c->lr=0x800E87D8u; f_800E73E0(c); // 800E87D4
  goto L_800E8808; // 800E87D8
L_800E87DC:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800E87DC
  c->r[5]=c->r[31]+0x00000078u; // 800E87E0
  c->r[3]=c->r[30]|c->r[30]; // 800E87E4
  c->r[4]=c->r[1]+0x00000008u; // 800E87E8
  c->r[7]=R32(c->r[31]+0x00000078u); // 800E87EC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800E87F0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800E87F4
  W32(c->r[1]+0x00000008u,c->r[7]); // 800E87F8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800E87FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E8800
  c->lr=0x800E8808u; f_800E73E0(c); // 800E8804
L_800E8808:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E8808
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800E880C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800E8810
  c->lr=c->r[0]; // 800E8814
  c->r[1]=c->r[1]+0x00000040u; // 800E8818
  return; // 800E881C
}

// fn_800E8820
void f_800E8820(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8820
  c->r[0]=c->lr; // 800E8824
  c->r[5]=0u+0x80620000u; // 800E8828
  c->r[4]=0u+0x00000002u; // 800E882C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800E8830
  c->r[5]=c->r[5]+0x00007688u; // 800E8834
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800E8838
  W32(c->r[1]+0x00000068u,c->r[30]); // 800E883C
  c->r[30]=c->r[3]|c->r[3]; // 800E8840
  c->r[3]=R32(c->r[5]+0x00000014u); // 800E8844
  c->lr=0x800E884Cu; f_80037670(c); // 800E8848
  cmps(c,0,(int32_t)c->r[3],0); // 800E884C
  if (!crb(c,2)) { goto L_800E88A0; } // 800E8850
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800E8854
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800E8858
  if (crb(c,2)) { goto L_800E88A0; } // 800E885C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E8860
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800E8864
  cmps(c,0,(int32_t)c->r[0],0); // 800E8868
  if (!crb(c,2)) { goto L_800E88A0; } // 800E886C
  c->r[31]=0u+0x80550000u; // 800E8870
  {uint32_t ea=c->r[2]+0xFFFFA69Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E8874
  c->r[31]=c->r[31]+0x00003D60u; // 800E8878
  c->r[5]=c->r[30]|c->r[30]; // 800E887C
  c->r[3]=c->r[31]+0x00000010u; // 800E8880
  c->r[6]=c->r[30]+0x0000002Cu; // 800E8884
  c->r[7]=c->r[1]+0x00000008u; // 800E8888
  c->r[4]=0u+0x000001FFu; // 800E888C
  c->lr=0x800E8894u; f_80226910(c); // 800E8890
  c->r[3]=c->r[31]+0x00000010u; // 800E8894
  c->r[4]=c->r[1]+0x00000008u; // 800E8898
  c->lr=0x800E88A0u; f_80226D68(c); // 800E889C
L_800E88A0:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800E88A0
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800E88A4
  c->r[30]=R32(c->r[1]+0x00000068u); // 800E88A8
  c->lr=c->r[0]; // 800E88AC
  c->r[1]=c->r[1]+0x00000070u; // 800E88B0
  return; // 800E88B4
}

// fn_800E88B8
void f_800E88B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E88B8
  c->r[0]=c->lr; // 800E88BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E88C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E88C4
  c->r[31]=c->r[3]|c->r[3]; // 800E88C8
  c->r[3]=c->r[3]+0x00000210u; // 800E88CC
  c->lr=0x800E88D4u; f_8004BAD4(c); // 800E88D0
  cmps(c,0,(int32_t)c->r[3],0); // 800E88D4
  if (crb(c,2)) { goto L_800E8948; } // 800E88D8
  c->r[0]=R32(c->r[31]+0x00000210u); // 800E88DC
  c->r[4]=c->r[31]|c->r[31]; // 800E88E0
  c->r[3]=c->r[31]+0x00000210u; // 800E88E4
  c->r[0]=c->r[0]|0xAA000000u; // 800E88E8
  W32(c->r[31]+0x00000210u,c->r[0]); // 800E88EC
  c->lr=0x800E88F4u; f_80043E44(c); // 800E88F0
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E88F4
  c->r[3]=c->r[31]+0x00000210u; // 800E88F8
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E88FC
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E8900
  c->lr=0x800E8908u; f_80043E34(c); // 800E8904
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E8908
  c->r[4]=0u+0x803A0000u; // 800E890C
  c->r[4]=c->r[4]+0xFFFFE910u; // 800E8910
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E8914
  c->r[4]=c->r[4]+0x00000016u; // 800E8918
  c->lr=0x800E8920u; f_80256EC4(c); // 800E891C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E8920
  c->r[5]=c->r[3]|c->r[3]; // 800E8924
  c->r[3]=c->r[31]+0x00000210u; // 800E8928
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800E892C
  c->lr=0x800E8934u; f_8004BAC8(c); // 800E8930
  {uint32_t ea=c->r[2]+0xFFFFA694u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E8934
  c->r[3]=c->r[31]+0x00000210u; // 800E8938
  c->f[2]=c->f[1]; // 800E893C
  c->f[3]=c->f[1]; // 800E8940
  c->lr=0x800E8948u; f_80043E24(c); // 800E8944
L_800E8948:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8948
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E894C
  c->lr=c->r[0]; // 800E8950
  c->r[1]=c->r[1]+0x00000010u; // 800E8954
  return; // 800E8958
}

// fn_800E895C
void f_800E895C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E895C
  c->r[0]=c->lr; // 800E8960
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8964
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8968
  c->r[31]=c->r[3]|c->r[3]; // 800E896C
  c->r[3]=c->r[3]+0x00000210u; // 800E8970
  c->lr=0x800E8978u; f_80221698(c); // 800E8974
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E8978
  cmps(c,0,(int32_t)c->r[3],0); // 800E897C
  if (crb(c,2)) { goto L_800E89A0; } // 800E8980
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800E8984
  cmps(c,0,(int32_t)c->r[0],0); // 800E8988
  if (crb(c,2)) { goto L_800E89A0; } // 800E898C
  c->r[0]=R32(c->r[31]+0x00000210u); // 800E8990
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800E8994
  W32(c->r[31]+0x00000210u,c->r[0]); // 800E8998
  goto L_800E89AC; // 800E899C
L_800E89A0:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800E89A0
  c->r[0]=c->r[0]|0x80000000u; // 800E89A4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800E89A8
L_800E89AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E89AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E89B0
  c->lr=c->r[0]; // 800E89B4
  c->r[1]=c->r[1]+0x00000010u; // 800E89B8
  return; // 800E89BC
}

// fn_800E89C0
void f_800E89C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E89C0
  c->r[0]=c->lr; // 800E89C4
  cmps(c,0,(int32_t)c->r[3],0); // 800E89C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E89CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E89D0
  c->r[31]=c->r[4]|c->r[4]; // 800E89D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E89D8
  c->r[30]=c->r[3]|c->r[3]; // 800E89DC
  if (crb(c,2)) { goto L_800E89FC; } // 800E89E0
  c->r[4]=0u+0x00000000u; // 800E89E4
  c->lr=0x800E89ECu; f_8026A06C(c); // 800E89E8
  cmps(c,0,(int32_t)c->r[31],0); // 800E89EC
  if (!crb(c,1)) { goto L_800E89FC; } // 800E89F0
  c->r[3]=c->r[30]|c->r[30]; // 800E89F4
  c->lr=0x800E89FCu; f_8026A268(c); // 800E89F8
L_800E89FC:;
  c->r[3]=c->r[30]|c->r[30]; // 800E89FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8A00
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E8A04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8A08
  c->lr=c->r[0]; // 800E8A0C
  c->r[1]=c->r[1]+0x00000010u; // 800E8A10
  return; // 800E8A14
}

// fn_800E8A18
void f_800E8A18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8A18
  c->r[0]=c->lr; // 800E8A1C
  c->r[4]=0u+0x00000000u; // 800E8A20
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E8A24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E8A28
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E8A2C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E8A30
  c->r[29]=c->r[3]|c->r[3]; // 800E8A34
  c->lr=0x800E8A3Cu; f_801F57D0(c); // 800E8A38
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800E8A3C
  c->r[3]=c->r[29]|c->r[29]; // 800E8A40
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E8A44
  c->ctr=c->r[12]; // 800E8A48
  if (true) { c->lr=0x800E8A50u; dispatch(c,c->ctr); } // 800E8A4C
  c->r[3]=c->r[29]|c->r[29]; // 800E8A50
  c->lr=0x800E8A58u; f_801F4B94(c); // 800E8A54
  c->r[3]=0u+0x00000003u; // 800E8A58
  c->r[0]=0u+0x00000054u; // 800E8A5C
  W8(c->r[29]+0x0000006Cu,c->r[3]); // 800E8A60
  c->r[3]=c->r[29]|c->r[29]; // 800E8A64
  c->r[4]=R32(c->r[29]+0x00000394u); // 800E8A68
  W8(c->r[29]+0x0000006Du,c->r[0]); // 800E8A6C
  c->lr=0x800E8A74u; f_801F58BC(c); // 800E8A70
  c->r[3]=R32(c->r[29]+0x00000394u); // 800E8A74
  c->r[30]=0u+0x00000001u; // 800E8A78
  c->r[31]=0u+0x803A0000u; // 800E8A7C
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800E8A80
  c->r[31]=c->r[31]+0xFFFFE948u; // 800E8A84
  c->r[4]=c->r[31]+0x00000008u; // 800E8A88
  c->r[3]=R32(c->r[29]+0x00000394u); // 800E8A8C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E8A90
  c->lr=0x800E8A98u; f_80256EC4(c); // 800E8A94
  c->r[6]=R32(c->r[29]+0x00000394u); // 800E8A98
  c->r[5]=0u+0x805D0000u; // 800E8A9C
  c->r[4]=c->r[29]+0x0000002Cu; // 800E8AA0
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800E8AA4
  c->r[3]=c->r[5]+0x000078B0u; // 800E8AA8
  c->lr=0x800E8AB0u; f_802351CC(c); // 800E8AAC
  c->r[5]=R32(c->r[29]+0x00000394u); // 800E8AB0
  c->r[4]=0u+0x00000000u; // 800E8AB4
  {uint32_t ea=c->r[2]+0xFFFFA6A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E8AB8
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800E8ABC
  c->r[3]=c->r[29]|c->r[29]; // 800E8AC0
  c->f[2]=c->f[1]; // 800E8AC4
  c->r[5]=0u+0x00000001u; // 800E8AC8
  c->r[0]=R16(c->r[29]+0x000003BEu); // 800E8ACC
  W8(c->r[29]+0x0000006Fu,c->r[30]); // 800E8AD0
  c->r[0]=c->r[0]|0x00000004u; // 800E8AD4
  W16(c->r[29]+0x000003BEu,c->r[0]); // 800E8AD8
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800E8ADC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E8AE0
  c->ctr=c->r[12]; // 800E8AE4
  if (true) { c->lr=0x800E8AECu; dispatch(c,c->ctr); } // 800E8AE8
  c->r[3]=R32(c->r[29]+0x00000394u); // 800E8AEC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E8AF0
  c->lr=0x800E8AF8u; f_802501B0(c); // 800E8AF4
  c->r[3]=c->r[29]|c->r[29]; // 800E8AF8
  c->lr=0x800E8B00u; f_801F56F4(c); // 800E8AFC
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800E8B00
  c->r[3]=c->r[29]|c->r[29]; // 800E8B04
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E8B08
  c->ctr=c->r[12]; // 800E8B0C
  if (true) { c->lr=0x800E8B14u; dispatch(c,c->ctr); } // 800E8B10
  {uint32_t ea=c->r[2]+0xFFFFA6A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E8B14
  c->r[3]=c->r[29]+0x0000000Cu; // 800E8B18
  c->lr=0x800E8B20u; f_80037668(c); // 800E8B1C
  {uint32_t ea=c->r[2]+0xFFFFA6A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E8B20
  c->r[4]=c->r[31]+0x00000011u; // 800E8B24
  c->r[3]=R32(c->r[29]+0x00000394u); // 800E8B28
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[0]);} // 800E8B2C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E8B30
  c->lr=0x800E8B38u; f_80256EC4(c); // 800E8B34
  W8(c->r[29]+0x00000074u,c->r[3]); // 800E8B38
  c->r[3]=0u+0x80550000u; // 800E8B3C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E8B40
  c->r[5]=0u+0x00000000u; // 800E8B44
  c->r[4]=R32(c->r[13]+0xFFFF85F0u); // 800E8B48
  c->r[6]=0u+0x00000000u; // 800E8B4C
  c->lr=0x800E8B54u; f_8018D3E4(c); // 800E8B50
  c->r[5]=0u+0x000000FFu; // 800E8B54
  c->r[4]=0u+0x00000000u; // 800E8B58
  c->r[0]=0u+0x00000005u; // 800E8B5C
  W32(c->r[29]+0x0000007Cu,c->r[3]); // 800E8B60
  W32(c->r[29]+0x00000080u,c->r[5]); // 800E8B64
  W8(c->r[29]+0x00000075u,c->r[4]); // 800E8B68
  W8(c->r[29]+0x00000076u,c->r[0]); // 800E8B6C
  W8(c->r[29]+0x00000077u,c->r[5]); // 800E8B70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E8B74
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E8B78
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E8B7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E8B80
  c->lr=c->r[0]; // 800E8B84
  c->r[1]=c->r[1]+0x00000020u; // 800E8B88
  return; // 800E8B8C
}

// fn_800E8B90
void f_800E8B90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8B90
  c->r[0]=c->lr; // 800E8B94
  c->r[4]=c->r[3]|c->r[3]; // 800E8B98
  c->r[3]=0u+0x000002C6u; // 800E8B9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8BA0
  c->r[5]=0u+0x00000000u; // 800E8BA4
  c->r[4]=R32(c->r[4]+0x00000394u); // 800E8BA8
  c->r[4]=c->r[4]+0x0000010Cu; // 800E8BAC
  c->lr=0x800E8BB4u; f_8024EE50(c); // 800E8BB0
  c->r[0]=cntlz(c->r[3]); // 800E8BB4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E8BB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8BBC
  c->lr=c->r[0]; // 800E8BC0
  c->r[1]=c->r[1]+0x00000010u; // 800E8BC4
  return; // 800E8BC8
}

// fn_800E8BCC
void f_800E8BCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8BCC
  c->r[0]=c->lr; // 800E8BD0
  W32(c->r[1]+0x00000094u,c->r[0]); // 800E8BD4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800E8BD8
  W32(c->r[1]+0x00000088u,c->r[30]); // 800E8BDC
  c->r[30]=c->r[3]|c->r[3]; // 800E8BE0
  c->lr=0x800E8BE8u; f_800E9274(c); // 800E8BE4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E8BE8
  c->r[3]=c->r[30]|c->r[30]; // 800E8BEC
  c->r[12]=R32(c->r[12]+0x00000068u); // 800E8BF0
  c->ctr=c->r[12]; // 800E8BF4
  if (true) { c->lr=0x800E8BFCu; dispatch(c,c->ctr); } // 800E8BF8
  c->r[3]=c->r[30]|c->r[30]; // 800E8BFC
  c->lr=0x800E8C04u; f_801F4C0C(c); // 800E8C00
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800E8C04
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800E8C08
  if (crb(c,2)) { goto L_800E8C60; } // 800E8C0C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E8C10
  c->r[5]=c->r[1]+0x00000014u; // 800E8C14
  c->r[4]=R8(c->r[30]+0x00000074u); // 800E8C18
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E8C1C
  c->lr=0x800E8C24u; f_8025EA54(c); // 800E8C20
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E8C24
  c->r[5]=c->r[1]+0x00000008u; // 800E8C28
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E8C2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8C30
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800E8C34
  c->r[3]=R32(c->r[1]+0x00000018u); // 800E8C38
  W32(c->r[1]+0x00000008u,c->r[0]); // 800E8C3C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800E8C40
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800E8C44
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800E8C48
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E8C4C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E8C50
  c->r[4]=R8(c->r[30]+0x00000074u); // 800E8C54
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E8C58
  c->lr=0x800E8C60u; f_8025E9C0(c); // 800E8C5C
L_800E8C60:;
  c->r[3]=c->r[30]|c->r[30]; // 800E8C60
  c->lr=0x800E8C68u; f_801F56F4(c); // 800E8C64
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 800E8C68
  cmpu(c,0,c->r[4],0x000000FFu); // 800E8C6C
  if (crb(c,2)) { goto L_800E8CBC; } // 800E8C70
  c->r[31]=0u+0x80550000u; // 800E8C74
  c->r[3]=c->r[31]+0xFFFFC848u; // 800E8C78
  c->lr=0x800E8C80u; f_8018D900(c); // 800E8C7C
  cmps(c,0,(int32_t)c->r[3],0); // 800E8C80
  if (crb(c,2)) { goto L_800E8CB4; } // 800E8C84
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E8C88
  c->r[5]=c->r[1]+0x00000050u; // 800E8C8C
  c->r[4]=R8(c->r[30]+0x00000074u); // 800E8C90
  c->r[6]=0u+0x00000001u; // 800E8C94
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E8C98
  c->lr=0x800E8CA0u; f_80257074(c); // 800E8C9C
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 800E8CA0
  c->r[3]=c->r[31]+0xFFFFC848u; // 800E8CA4
  c->r[5]=c->r[1]+0x00000050u; // 800E8CA8
  c->lr=0x800E8CB0u; f_8018DEB8(c); // 800E8CAC
  goto L_800E8CBC; // 800E8CB0
L_800E8CB4:;
  c->r[0]=0u+0x000000FFu; // 800E8CB4
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 800E8CB8
L_800E8CBC:;
  c->r[4]=R32(c->r[30]+0x00000080u); // 800E8CBC
  cmpu(c,0,c->r[4],0x000000FFu); // 800E8CC0
  if (crb(c,2)) { goto L_800E8D10; } // 800E8CC4
  c->r[31]=0u+0x80550000u; // 800E8CC8
  c->r[3]=c->r[31]+0xFFFFC848u; // 800E8CCC
  c->lr=0x800E8CD4u; f_8018D900(c); // 800E8CD0
  cmps(c,0,(int32_t)c->r[3],0); // 800E8CD4
  if (crb(c,2)) { goto L_800E8D08; } // 800E8CD8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E8CDC
  c->r[5]=c->r[1]+0x00000020u; // 800E8CE0
  c->r[4]=R8(c->r[30]+0x00000074u); // 800E8CE4
  c->r[6]=0u+0x00000001u; // 800E8CE8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E8CEC
  c->lr=0x800E8CF4u; f_80257074(c); // 800E8CF0
  c->r[4]=R32(c->r[30]+0x00000080u); // 800E8CF4
  c->r[3]=c->r[31]+0xFFFFC848u; // 800E8CF8
  c->r[5]=c->r[1]+0x00000020u; // 800E8CFC
  c->lr=0x800E8D04u; f_8018DEB8(c); // 800E8D00
  goto L_800E8D10; // 800E8D04
L_800E8D08:;
  c->r[0]=0u+0x000000FFu; // 800E8D08
  W32(c->r[30]+0x00000080u,c->r[0]); // 800E8D0C
L_800E8D10:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800E8D10
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800E8D14
  c->r[30]=R32(c->r[1]+0x00000088u); // 800E8D18
  c->lr=c->r[0]; // 800E8D1C
  c->r[1]=c->r[1]+0x00000090u; // 800E8D20
  return; // 800E8D24
}

// fn_800E8D28
void f_800E8D28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8D28
  c->r[0]=c->lr; // 800E8D2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8D30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8D34
  c->r[31]=c->r[3]|c->r[3]; // 800E8D38
  c->r[4]=R32(c->r[3]+0x0000007Cu); // 800E8D3C
  cmpu(c,0,c->r[4],0x000000FFu); // 800E8D40
  if (crb(c,2)) { goto L_800E8D54; } // 800E8D44
  c->r[3]=0u+0x80550000u; // 800E8D48
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E8D4C
  c->lr=0x800E8D54u; f_8018D738(c); // 800E8D50
L_800E8D54:;
  c->r[4]=R32(c->r[31]+0x00000080u); // 800E8D54
  cmpu(c,0,c->r[4],0x000000FFu); // 800E8D58
  if (crb(c,2)) { goto L_800E8D6C; } // 800E8D5C
  c->r[3]=0u+0x80550000u; // 800E8D60
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E8D64
  c->lr=0x800E8D6Cu; f_8018D738(c); // 800E8D68
L_800E8D6C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E8D6C
  c->lr=0x800E8D74u; f_801F4C78(c); // 800E8D70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8D74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8D78
  c->lr=c->r[0]; // 800E8D7C
  c->r[1]=c->r[1]+0x00000010u; // 800E8D80
  return; // 800E8D84
}

// fn_800E8D88
void f_800E8D88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8D88
  c->r[0]=c->lr; // 800E8D8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8D90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8D94
  c->r[31]=c->r[3]|c->r[3]; // 800E8D98
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E8D9C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E8DA0
  c->lr=0x800E8DA8u; f_802501B0(c); // 800E8DA4
  c->r[3]=c->r[31]|c->r[31]; // 800E8DA8
  c->r[4]=0u+0x00000000u; // 800E8DAC
  c->lr=0x800E8DB4u; f_801F5244(c); // 800E8DB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8DB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8DB8
  c->lr=c->r[0]; // 800E8DBC
  c->r[1]=c->r[1]+0x00000010u; // 800E8DC0
  return; // 800E8DC4
}

// fn_800E8DC8
void f_800E8DC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8DC8
  c->r[0]=c->lr; // 800E8DCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E8DD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E8DD4
  c->r[31]=c->r[3]|c->r[3]; // 800E8DD8
  c->lr=0x800E8DE0u; f_801F51B8(c); // 800E8DDC
  c->r[0]=0u+0x00000000u; // 800E8DE0
  c->r[7]=0u+0x803D0000u; // 800E8DE4
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800E8DE8
  c->r[3]=c->r[31]|c->r[31]; // 800E8DEC
  c->r[4]=c->r[1]+0x00000008u; // 800E8DF0
  {uint32_t ea=c->r[7]+0x00003E58u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E8DF4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E8DF8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E8DFC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E8E00
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E8E04
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E8E08
  c->lr=0x800E8E10u; f_800E8E24(c); // 800E8E0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E8E10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E8E14
  c->lr=c->r[0]; // 800E8E18
  c->r[1]=c->r[1]+0x00000020u; // 800E8E1C
  return; // 800E8E20
}

// fn_800E8E24
void f_800E8E24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8E24
  c->r[0]=c->lr; // 800E8E28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8E2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8E30
  c->r[31]=c->r[4]|c->r[4]; // 800E8E34
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E8E38
  c->r[30]=c->r[3]|c->r[3]; // 800E8E3C
  c->r[3]=c->r[31]|c->r[31]; // 800E8E40
  c->lr=0x800E8E48u; f_802B9FDC(c); // 800E8E44
  cmps(c,0,(int32_t)c->r[3],0); // 800E8E48
  if (crb(c,2)) { goto L_800E8E68; } // 800E8E4C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E8E50
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E8E54
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E8E58
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E8E5C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E8E60
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E8E64
L_800E8E68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8E68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8E6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E8E70
  c->lr=c->r[0]; // 800E8E74
  c->r[1]=c->r[1]+0x00000010u; // 800E8E78
  return; // 800E8E7C
}

// fn_800E8E80
void f_800E8E80(Ctx* __restrict c) {
  W8(c->r[3]+0x00000077u,c->r[4]); // 800E8E80
  c->r[3]=0u+0x80620000u; // 800E8E84
  c->r[3]=c->r[3]+0x00007688u; // 800E8E88
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800E8E8C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800E8E90
  c->r[5]=0u+0x00000000u; // 800E8E94
  f_80038998(c); return; // 800E8E98
}

// fn_800E8E9C
void f_800E8E9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8E9C
  c->r[0]=c->lr; // 800E8EA0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E8EA4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800E8EA8
  c->r[31]=c->r[3]|c->r[3]; // 800E8EAC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800E8EB0
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800E8EB4
  cmps(c,0,(int32_t)c->r[0],0); // 800E8EB8
  if (!crb(c,2)) { goto L_800E8ED4; } // 800E8EBC
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800E8EC0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E8EC4
  c->ctr=c->r[12]; // 800E8EC8
  if (true) { c->lr=0x800E8ED0u; dispatch(c,c->ctr); } // 800E8ECC
  goto L_800E90B0; // 800E8ED0
L_800E8ED4:;
  {uint32_t ea=c->r[2]+0xFFFFA6A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E8ED4
  c->r[3]=c->r[3]+0x0000000Cu; // 800E8ED8
  c->lr=0x800E8EE0u; f_80037668(c); // 800E8EDC
  {uint32_t ea=c->r[2]+0xFFFFA6ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E8EE0
  c->r[30]=0u+0x00000001u; // 800E8EE4
  {uint32_t ea=c->r[2]+0xFFFFA6A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E8EE8
  {uint32_t ea=c->r[31]+0x000003C8u; WF32(ea,c->f[1]);} // 800E8EEC
  fcmp(c,0,c->f[1],c->f[0]); // 800E8EF0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E8EF4
  if (!crb(c,2)) { goto L_800E8F00; } // 800E8EF8
  c->r[30]=0u+0x00000000u; // 800E8EFC
L_800E8F00:;
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800E8F00
  cmps(c,0,(int32_t)c->r[0],0); // 800E8F04
  if (crb(c,2)) { goto L_800E8F34; } // 800E8F08
  W8(c->r[31]+0x00000075u,c->r[0]); // 800E8F0C
  c->r[3]=c->r[31]|c->r[31]; // 800E8F10
  {uint32_t ea=c->r[2]+0xFFFFA6A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E8F14
  c->r[4]=0u+0x00000000u; // 800E8F18
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E8F1C
  c->r[5]=0u+0x00000001u; // 800E8F20
  c->f[2]=c->f[1]; // 800E8F24
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E8F28
  c->ctr=c->r[12]; // 800E8F2C
  if (true) { c->lr=0x800E8F34u; dispatch(c,c->ctr); } // 800E8F30
L_800E8F34:;
  cmps(c,0,(int32_t)c->r[30],0); // 800E8F34
  if (crb(c,2)) { goto L_800E8F60; } // 800E8F38
  c->r[3]=R8(c->r[31]+0x00000075u); // 800E8F3C
  c->r[4]=R8(c->r[31]+0x00000076u); // 800E8F40
  c->r[3]=c->r[3]+0x00000001u; // 800E8F44
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800E8F48
  W8(c->r[31]+0x00000075u,c->r[3]); // 800E8F4C
  cmpu(c,0,c->r[0],c->r[4]); // 800E8F50
  if (!crb(c,1)) { goto L_800E8F60; } // 800E8F54
  W8(c->r[31]+0x00000075u,c->r[4]); // 800E8F58
  c->r[30]=0u+0x00000000u; // 800E8F5C
L_800E8F60:;
  cmps(c,0,(int32_t)c->r[30],0); // 800E8F60
  if (crb(c,2)) { goto L_800E9028; } // 800E8F64
  c->r[7]=0u+0x803A0000u; // 800E8F68
  {uint32_t ea=c->r[7]+0xFFFFE930u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E8F6C
  c->r[3]=c->r[31]+0x000003CCu; // 800E8F70
  c->r[4]=c->r[1]+0x00000020u; // 800E8F74
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E8F78
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E8F7C
  W32(c->r[1]+0x00000020u,c->r[6]); // 800E8F80
  W32(c->r[1]+0x00000024u,c->r[5]); // 800E8F84
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E8F88
  c->lr=0x800E8F90u; f_800361A0(c); // 800E8F8C
  c->r[7]=0u+0x803A0000u; // 800E8F90
  {uint32_t ea=c->r[7]+0xFFFFE93Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800E8F94
  c->r[3]=c->r[31]+0x000003D8u; // 800E8F98
  c->r[4]=c->r[1]+0x00000014u; // 800E8F9C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E8FA0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E8FA4
  W32(c->r[1]+0x00000014u,c->r[6]); // 800E8FA8
  W32(c->r[1]+0x00000018u,c->r[5]); // 800E8FAC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E8FB0
  c->lr=0x800E8FB8u; f_800361A0(c); // 800E8FB4
  c->r[3]=c->r[31]|c->r[31]; // 800E8FB8
  c->r[4]=0u+0x00000004u; // 800E8FBC
  c->r[5]=0u+0x00000010u; // 800E8FC0
  c->r[6]=0u+0x00000001u; // 800E8FC4
  c->r[7]=0u+0x00000001u; // 800E8FC8
  c->lr=0x800E8FD0u; f_8017900C(c); // 800E8FCC
  c->r[0]=R32(c->r[31]+0x00000080u); // 800E8FD0
  cmpu(c,0,c->r[0],0x000000FFu); // 800E8FD4
  if (!crb(c,2)) { goto L_800E8FFC; } // 800E8FD8
  c->r[4]=c->r[13]+0xFFFF85F0u; // 800E8FDC
  c->r[3]=0u+0x80550000u; // 800E8FE0
  c->r[4]=R32(c->r[4]+0x00000004u); // 800E8FE4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E8FE8
  c->r[5]=0u+0x00000000u; // 800E8FEC
  c->r[6]=0u+0x00000000u; // 800E8FF0
  c->lr=0x800E8FF8u; f_8018D3E4(c); // 800E8FF4
  W32(c->r[31]+0x00000080u,c->r[3]); // 800E8FF8
L_800E8FFC:;
  c->r[7]=0u+0x803D0000u; // 800E8FFC
  {uint32_t ea=c->r[7]+0x00003E64u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E9000
  c->r[3]=c->r[31]|c->r[31]; // 800E9004
  c->r[4]=c->r[1]+0x00000008u; // 800E9008
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E900C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E9010
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E9014
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E9018
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E901C
  c->lr=0x800E9024u; f_800E8E24(c); // 800E9020
  goto L_800E907C; // 800E9024
L_800E9028:;
  c->r[4]=R8(c->r[31]+0x00000077u); // 800E9028
  cmpu(c,0,c->r[4],0x000000FFu); // 800E902C
  if (crb(c,2)) { goto L_800E9048; } // 800E9030
  c->r[3]=0u+0x80620000u; // 800E9034
  c->r[5]=0u+0x00000001u; // 800E9038
  c->r[3]=c->r[3]+0x00007688u; // 800E903C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800E9040
  c->lr=0x800E9048u; f_80038998(c); // 800E9044
L_800E9048:;
  c->r[4]=R32(c->r[31]+0x00000080u); // 800E9048
  cmpu(c,0,c->r[4],0x000000FFu); // 800E904C
  if (crb(c,2)) { goto L_800E9068; } // 800E9050
  c->r[3]=0u+0x80550000u; // 800E9054
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E9058
  c->lr=0x800E9060u; f_8018D738(c); // 800E905C
  c->r[0]=0u+0x000000FFu; // 800E9060
  W32(c->r[31]+0x00000080u,c->r[0]); // 800E9064
L_800E9068:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E9068
  c->r[3]=c->r[31]|c->r[31]; // 800E906C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E9070
  c->ctr=c->r[12]; // 800E9074
  if (true) { c->lr=0x800E907Cu; dispatch(c,c->ctr); } // 800E9078
L_800E907C:;
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800E907C
  cmps(c,0,(int32_t)c->r[0],0); // 800E9080
  if (crb(c,2)) { goto L_800E9098; } // 800E9084
  W8(c->r[31]+0x00000075u,c->r[0]); // 800E9088
  c->r[3]=c->r[31]+0x0000000Cu; // 800E908C
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9090
  c->lr=0x800E9098u; f_80037668(c); // 800E9094
L_800E9098:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E9098
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E909C
  c->lr=0x800E90A4u; f_802501B0(c); // 800E90A0
  c->r[3]=c->r[31]|c->r[31]; // 800E90A4
  c->r[4]=0u+0x00000000u; // 800E90A8
  c->lr=0x800E90B0u; f_801F5244(c); // 800E90AC
L_800E90B0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E90B0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800E90B4
  c->r[30]=R32(c->r[1]+0x00000038u); // 800E90B8
  c->lr=c->r[0]; // 800E90BC
  c->r[1]=c->r[1]+0x00000040u; // 800E90C0
  return; // 800E90C4
}

// fn_800E90C8
void f_800E90C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E90C8
  c->r[0]=c->lr; // 800E90CC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800E90D0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800E90D4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800E90D8
  c->r[0]=0u+0x43300000u; // 800E90DC
  c->r[4]=0u+0x00000000u; // 800E90E0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800E90E4
  c->r[31]=c->r[3]|c->r[3]; // 800E90E8
  c->r[3]=c->r[3]+0x0000000Cu; // 800E90EC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800E90F0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E90F4
  c->lr=0x800E90FCu; f_800366DC(c); // 800E90F8
  c->r[3]=c->r[31]+0x0000000Cu; // 800E90FC
  c->lr=0x800E9104u; f_8003E460(c); // 800E9100
  W32(c->r[1]+0x00000024u,c->r[3]); // 800E9104
  c->r[3]=R8(c->r[31]+0x00000075u); // 800E9108
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800E910C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800E9110
  c->r[5]=R8(c->r[31]+0x00000076u); // 800E9114
  c->r[0]=c->r[0]^0x80000000u; // 800E9118
  {uint32_t ea=c->r[2]+0xFFFFA6C0u; c->f[3]=RF64(ea);} // 800E911C
  W32(c->r[1]+0x00000024u,c->r[5]); // 800E9120
  {uint32_t ea=c->r[2]+0xFFFFA6C8u; c->f[2]=RF64(ea);} // 800E9124
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[3]); // 800E9128
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800E912C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800E9130
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 800E9134
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 800E9138
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[2]); // 800E913C
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9140
  fcmp(c,0,c->f[4],c->f[0]); // 800E9144
  c->f[31]=c->ps1[31]=S(c->f[31]/c->f[1]); // 800E9148
  if (!crb(c,1)) { goto L_800E91A4; } // 800E914C
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800E9150
  c->r[4]=R32(c->r[31]+0x00000080u); // 800E9154
  W32(c->r[1]+0x00000024u,c->r[5]); // 800E9158
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800E915C
  cmpu(c,0,c->r[4],0x000000FFu); // 800E9160
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800E9164
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[3]); // 800E9168
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800E916C
  c->f[31]=c->ps1[31]=S(c->f[31]/c->f[0]); // 800E9170
  if (crb(c,2)) { goto L_800E918C; } // 800E9174
  c->r[3]=0u+0x80550000u; // 800E9178
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E917C
  c->lr=0x800E9184u; f_8018D738(c); // 800E9180
  c->r[0]=0u+0x000000FFu; // 800E9184
  W32(c->r[31]+0x00000080u,c->r[0]); // 800E9188
L_800E918C:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800E918C
  c->r[3]=c->r[31]|c->r[31]; // 800E9190
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E9194
  c->ctr=c->r[12]; // 800E9198
  if (true) { c->lr=0x800E91A0u; dispatch(c,c->ctr); } // 800E919C
  goto L_800E91D0; // 800E91A0
L_800E91A4:;
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[0]); // 800E91A4
  {uint32_t ea=c->r[2]+0xFFFFA6B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E91A8
  {uint32_t ea=c->r[2]+0xFFFFA6B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E91AC
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 800E91B0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 800E91B4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 800E91B8
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[1]); // 800E91BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800E91C0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800E91C4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800E91C8
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 800E91CC
L_800E91D0:;
  {uint32_t ea=c->r[2]+0xFFFFA6B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E91D0
  c->r[3]=c->r[1]+0x00000014u; // 800E91D4
  c->r[5]=R32(c->r[31]+0x000003CCu); // 800E91D8
  c->r[4]=c->r[3]|c->r[3]; // 800E91DC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[31]); // 800E91E0
  {uint32_t ea=c->r[2]+0xFFFFA6BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E91E4
  c->r[0]=R32(c->r[31]+0x000003D0u); // 800E91E8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800E91EC
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[2]);} // 800E91F0
  W32(c->r[1]+0x00000014u,c->r[5]); // 800E91F4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800E91F8
  c->r[0]=R32(c->r[31]+0x000003D4u); // 800E91FC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E9200
  c->r[5]=R32(c->r[31]+0x000003D8u); // 800E9204
  c->r[0]=R32(c->r[31]+0x000003DCu); // 800E9208
  W32(c->r[1]+0x00000008u,c->r[5]); // 800E920C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E9210
  c->r[0]=R32(c->r[31]+0x000003E0u); // 800E9214
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E9218
  c->lr=0x800E9220u; f_80296A94(c); // 800E921C
  c->f[1]=c->f[31]; // 800E9220
  c->r[3]=c->r[1]+0x00000008u; // 800E9224
  c->r[4]=c->r[3]|c->r[3]; // 800E9228
  c->lr=0x800E9230u; f_80296A94(c); // 800E922C
  c->r[3]=c->r[1]+0x00000014u; // 800E9230
  c->r[4]=c->r[1]+0x00000008u; // 800E9234
  c->r[5]=c->r[31]+0x0000002Cu; // 800E9238
  c->lr=0x800E9240u; f_80296A4C(c); // 800E923C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800E9240
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E9244
  c->lr=0x800E924Cu; f_802501B0(c); // 800E9248
  c->r[3]=c->r[31]|c->r[31]; // 800E924C
  c->r[4]=0u+0x00000000u; // 800E9250
  c->lr=0x800E9258u; f_801F5244(c); // 800E9254
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800E9258
  c->r[0]=R32(c->r[1]+0x00000054u); // 800E925C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800E9260
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800E9264
  c->lr=c->r[0]; // 800E9268
  c->r[1]=c->r[1]+0x00000050u; // 800E926C
  return; // 800E9270
}

// fn_800E9274
void f_800E9274(Ctx* __restrict c) {
  return; // 800E9274
}

// fn_800E9278
void f_800E9278(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9278
  c->r[0]=c->lr; // 800E927C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E9280
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E9284
  c->r[31]=c->r[3]|c->r[3]; // 800E9288
  c->lr=0x800E9290u; f_801F4F28(c); // 800E928C
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800E9290
  cmps(c,0,(int32_t)c->r[0],100); // 800E9294
  if (crb(c,2)) { goto L_800E92A0; } // 800E9298
  goto L_800E92CC; // 800E929C
L_800E92A0:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800E92A0
  c->r[7]=0u+0x803D0000u; // 800E92A4
  c->r[3]=c->r[31]|c->r[31]; // 800E92A8
  c->r[4]=c->r[1]+0x00000008u; // 800E92AC
  {uint32_t ea=c->r[7]+0x00003E70u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E92B0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E92B4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E92B8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E92BC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E92C0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E92C4
  c->lr=0x800E92CCu; f_800E8E24(c); // 800E92C8
L_800E92CC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E92CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E92D0
  c->lr=c->r[0]; // 800E92D4
  c->r[1]=c->r[1]+0x00000020u; // 800E92D8
  return; // 800E92DC
}

// fn_800E92E0
void f_800E92E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E92E0
  c->r[0]=c->lr; // 800E92E4
  cmps(c,0,(int32_t)c->r[3],0); // 800E92E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E92EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E92F0
  c->r[31]=c->r[4]|c->r[4]; // 800E92F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E92F8
  c->r[30]=c->r[3]|c->r[3]; // 800E92FC
  if (crb(c,2)) { goto L_800E931C; } // 800E9300
  c->r[4]=0u+0x00000000u; // 800E9304
  c->lr=0x800E930Cu; f_8026A06C(c); // 800E9308
  cmps(c,0,(int32_t)c->r[31],0); // 800E930C
  if (!crb(c,1)) { goto L_800E931C; } // 800E9310
  c->r[3]=c->r[30]|c->r[30]; // 800E9314
  c->lr=0x800E931Cu; f_8026A268(c); // 800E9318
L_800E931C:;
  c->r[3]=c->r[30]|c->r[30]; // 800E931C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E9320
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E9324
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E9328
  c->lr=c->r[0]; // 800E932C
  c->r[1]=c->r[1]+0x00000010u; // 800E9330
  return; // 800E9334
}

// fn_800E9338
void f_800E9338(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9338
  c->r[0]=c->lr; // 800E933C
  c->r[4]=0u+0x00000000u; // 800E9340
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E9344
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E9348
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E934C
  c->r[30]=c->r[3]|c->r[3]; // 800E9350
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E9354
  W32(c->r[1]+0x00000010u,c->r[28]); // 800E9358
  c->lr=0x800E9360u; f_801F57D0(c); // 800E935C
  c->r[3]=c->r[30]|c->r[30]; // 800E9360
  c->r[4]=0u+0x00000001u; // 800E9364
  c->lr=0x800E936Cu; f_801F57D0(c); // 800E9368
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E936C
  c->r[3]=c->r[30]|c->r[30]; // 800E9370
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800E9374
  c->ctr=c->r[12]; // 800E9378
  if (true) { c->lr=0x800E9380u; dispatch(c,c->ctr); } // 800E937C
  c->r[3]=c->r[30]|c->r[30]; // 800E9380
  c->lr=0x800E9388u; f_801F4B94(c); // 800E9384
  c->r[3]=0u+0x00000003u; // 800E9388
  c->r[0]=0u+0x00000055u; // 800E938C
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800E9390
  c->r[3]=c->r[30]|c->r[30]; // 800E9394
  c->r[4]=R32(c->r[30]+0x00000394u); // 800E9398
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800E939C
  c->lr=0x800E93A4u; f_801F58BC(c); // 800E93A0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E93A4
  c->r[28]=0u+0x00000001u; // 800E93A8
  c->r[31]=0u+0x803A0000u; // 800E93AC
  W8(c->r[3]+0x0000001Cu,c->r[28]); // 800E93B0
  c->r[31]=c->r[31]+0xFFFFEA08u; // 800E93B4
  c->r[4]=c->r[31]+0x00000004u; // 800E93B8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E93BC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E93C0
  c->lr=0x800E93C8u; f_80256EC4(c); // 800E93C4
  c->r[6]=R32(c->r[30]+0x00000394u); // 800E93C8
  c->r[5]=0u+0x805D0000u; // 800E93CC
  c->r[4]=c->r[30]+0x0000002Cu; // 800E93D0
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800E93D4
  c->r[3]=c->r[5]+0x000078B0u; // 800E93D8
  c->lr=0x800E93E0u; f_802351CC(c); // 800E93DC
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E93E0
  c->r[4]=0u+0x00000000u; // 800E93E4
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E93E8
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800E93EC
  c->r[3]=c->r[30]|c->r[30]; // 800E93F0
  c->f[2]=c->f[1]; // 800E93F4
  c->r[5]=0u+0x00000001u; // 800E93F8
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800E93FC
  W8(c->r[30]+0x0000006Fu,c->r[28]); // 800E9400
  c->r[0]=c->r[0]|0x00000004u; // 800E9404
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800E9408
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E940C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E9410
  c->ctr=c->r[12]; // 800E9414
  if (true) { c->lr=0x800E941Cu; dispatch(c,c->ctr); } // 800E9418
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E941C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E9420
  c->lr=0x800E9428u; f_802501B0(c); // 800E9424
  c->r[3]=c->r[30]|c->r[30]; // 800E9428
  c->lr=0x800E9430u; f_801F56F4(c); // 800E942C
  c->r[4]=R32(c->r[30]+0x00000398u); // 800E9430
  c->r[3]=c->r[30]|c->r[30]; // 800E9434
  c->lr=0x800E943Cu; f_801F58BC(c); // 800E9438
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E943C
  c->r[28]=0u+0x00000000u; // 800E9440
  c->r[4]=c->r[31]+0x00000004u; // 800E9444
  W8(c->r[3]+0x0000001Cu,c->r[28]); // 800E9448
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E944C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E9450
  c->lr=0x800E9458u; f_80256EC4(c); // 800E9454
  c->r[5]=R32(c->r[30]+0x00000398u); // 800E9458
  c->r[4]=0u+0x00000180u; // 800E945C
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9460
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800E9464
  c->f[2]=c->f[1]; // 800E9468
  c->r[5]=R32(c->r[30]+0x00000398u); // 800E946C
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800E9470
  c->r[5]=R32(c->r[5]+0x00000034u); // 800E9474
  c->lr=0x800E947Cu; f_8024FEAC(c); // 800E9478
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E947C
  c->r[4]=0u+0x00000001u; // 800E9480
  c->r[3]=c->r[3]+0x0000001Cu; // 800E9484
  c->lr=0x800E948Cu; f_80251824(c); // 800E9488
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E948C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E9490
  c->lr=0x800E9498u; f_802501B0(c); // 800E9494
  c->r[5]=R32(c->r[30]+0x00000394u); // 800E9498
  c->r[3]=c->r[30]|c->r[30]; // 800E949C
  c->r[4]=R32(c->r[30]+0x00000398u); // 800E94A0
  c->r[0]=R8(c->r[5]+0x0000001Du); // 800E94A4
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800E94A8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E94AC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800E94B0
  c->ctr=c->r[12]; // 800E94B4
  if (true) { c->lr=0x800E94BCu; dispatch(c,c->ctr); } // 800E94B8
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E94BC
  c->r[29]=0u+0x000000FFu; // 800E94C0
  W8(c->r[30]+0x0000007Cu,c->r[29]); // 800E94C4
  c->r[3]=c->r[30]+0x0000000Cu; // 800E94C8
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 800E94CC
  W8(c->r[30]+0x0000007Du,c->r[29]); // 800E94D0
  W8(c->r[30]+0x0000007Eu,c->r[29]); // 800E94D4
  W8(c->r[30]+0x00000081u,c->r[29]); // 800E94D8
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800E94DC
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[1]);} // 800E94E0
  {uint32_t ea=c->r[30]+0x0000008Cu; WF32(ea,c->f[1]);} // 800E94E4
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[1]);} // 800E94E8
  W8(c->r[30]+0x0000007Fu,c->r[28]); // 800E94EC
  W8(c->r[30]+0x00000096u,c->r[28]); // 800E94F0
  c->lr=0x800E94F8u; f_80037668(c); // 800E94F4
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E94F8
  c->r[3]=c->r[30]+0x00000010u; // 800E94FC
  c->lr=0x800E9504u; f_80037668(c); // 800E9500
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E9504
  c->r[4]=c->r[31]+0x00000004u; // 800E9508
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E950C
  c->lr=0x800E9514u; f_80256EC4(c); // 800E9510
  W8(c->r[30]+0x00000094u,c->r[3]); // 800E9514
  c->r[4]=c->r[31]+0x0000000Du; // 800E9518
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E951C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E9520
  c->lr=0x800E9528u; f_80256EC4(c); // 800E9524
  W8(c->r[30]+0x00000082u,c->r[3]); // 800E9528
  c->r[4]=c->r[31]+0x00000016u; // 800E952C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E9530
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E9534
  c->lr=0x800E953Cu; f_80256EC4(c); // 800E9538
  W8(c->r[30]+0x00000083u,c->r[3]); // 800E953C
  W8(c->r[30]+0x00000098u,c->r[29]); // 800E9540
  W8(c->r[30]+0x00000099u,c->r[29]); // 800E9544
  W8(c->r[30]+0x0000009Au,c->r[29]); // 800E9548
  W8(c->r[30]+0x00000095u,c->r[29]); // 800E954C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E9550
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E9554
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E9558
  c->r[28]=R32(c->r[1]+0x00000010u); // 800E955C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E9560
  c->lr=c->r[0]; // 800E9564
  c->r[1]=c->r[1]+0x00000020u; // 800E9568
  return; // 800E956C
}

// fn_800E9570
void f_800E9570(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9570
  c->r[0]=c->lr; // 800E9574
  c->r[5]=0u+0x00000000u; // 800E9578
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E957C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E9580
  c->r[31]=c->r[3]|c->r[3]; // 800E9584
  c->r[3]=0u+0x000002DAu; // 800E9588
  c->r[4]=R32(c->r[31]+0x00000394u); // 800E958C
  c->r[4]=c->r[4]+0x0000010Cu; // 800E9590
  c->lr=0x800E9598u; f_8024EE50(c); // 800E9594
  cmps(c,0,(int32_t)c->r[3],0); // 800E9598
  if (crb(c,2)) { goto L_800E95A8; } // 800E959C
  c->r[3]=0u+0x00000000u; // 800E95A0
  goto L_800E95C4; // 800E95A4
L_800E95A8:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800E95A8
  c->r[3]=0u+0x000000C9u; // 800E95AC
  c->r[5]=0u+0x00000000u; // 800E95B0
  c->r[4]=c->r[4]+0x0000010Cu; // 800E95B4
  c->lr=0x800E95BCu; f_8024EE50(c); // 800E95B8
  c->r[0]=cntlz(c->r[3]); // 800E95BC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E95C0
L_800E95C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E95C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E95C8
  c->lr=c->r[0]; // 800E95CC
  c->r[1]=c->r[1]+0x00000010u; // 800E95D0
  return; // 800E95D4
}

// fn_800E95D8
void f_800E95D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E95D8
  c->r[0]=c->lr; // 800E95DC
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800E95E0
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 800E95E4
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 800E95E8
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[30]);} // 800E95EC
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,30,ea,0,0);} // 800E95F0
  W32(c->r[1]+0x000000BCu,c->r[31]); // 800E95F4
  c->r[31]=0u+0x803A0000u; // 800E95F8
  c->r[31]=c->r[31]+0xFFFFE968u; // 800E95FC
  W32(c->r[1]+0x000000B8u,c->r[30]); // 800E9600
  c->r[30]=c->r[3]|c->r[3]; // 800E9604
  W32(c->r[1]+0x000000B4u,c->r[29]); // 800E9608
  {uint32_t ea=c->r[3]+0x00000084u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E960C
  c->lr=0x800E9614u; f_800EA450(c); // 800E9610
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E9614
  c->r[3]=c->r[30]|c->r[30]; // 800E9618
  c->r[12]=R32(c->r[12]+0x00000068u); // 800E961C
  c->ctr=c->r[12]; // 800E9620
  if (true) { c->lr=0x800E9628u; dispatch(c,c->ctr); } // 800E9624
  c->r[3]=c->r[30]|c->r[30]; // 800E9628
  c->lr=0x800E9630u; f_801F4C0C(c); // 800E962C
  c->r[3]=0u+0x805D0000u; // 800E9630
  c->r[3]=c->r[3]+0x00003F6Cu; // 800E9634
  c->lr=0x800E963Cu; f_80037AF0(c); // 800E9638
  cmpu(c,0,c->r[3],c->r[30]); // 800E963C
  if (crb(c,2)) { goto L_800E964C; } // 800E9640
  c->r[3]=c->r[30]|c->r[30]; // 800E9644
  c->lr=0x800E964Cu; f_800EA4BC(c); // 800E9648
L_800E964C:;
  c->r[3]=c->r[30]|c->r[30]; // 800E964C
  c->lr=0x800E9654u; f_801F56F4(c); // 800E9650
  c->r[3]=c->r[30]|c->r[30]; // 800E9654
  c->lr=0x800E965Cu; f_800EA4C0(c); // 800E9658
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E965C
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800E9660
  cmps(c,0,(int32_t)c->r[0],0); // 800E9664
  if (crb(c,2)) { goto L_800E96A8; } // 800E9668
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800E966C
  cmps(c,0,(int32_t)c->r[0],0); // 800E9670
  if (crb(c,2)) { goto L_800E96A8; } // 800E9674
  c->r[29]=0u+0x805D0000u; // 800E9678
  c->r[4]=c->r[3]+0x0000005Cu; // 800E967C
  c->r[3]=c->r[29]+0x00003F6Cu; // 800E9680
  c->r[5]=0u+0x00000000u; // 800E9684
  c->lr=0x800E968Cu; f_8020C9AC(c); // 800E9688
  c->r[4]=R32(c->r[30]+0x00000398u); // 800E968C
  c->r[3]=c->r[29]+0x00003F6Cu; // 800E9690
  c->r[4]=c->r[4]+0x00000068u; // 800E9694
  c->lr=0x800E969Cu; f_80038E24(c); // 800E9698
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E969C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E96A0
  c->lr=0x800E96A8u; f_8025037C(c); // 800E96A4
L_800E96A8:;
  c->r[4]=R8(c->r[30]+0x0000007Du); // 800E96A8
  cmpu(c,0,c->r[4],0x000000FFu); // 800E96AC
  if (crb(c,2)) { goto L_800E9860; } // 800E96B0
  c->r[3]=0u+0x80620000u; // 800E96B4
  c->r[3]=c->r[3]+0x00007688u; // 800E96B8
  c->r[3]=R32(c->r[3]+0x00000014u); // 800E96BC
  c->lr=0x800E96C4u; f_8003560C(c); // 800E96C0
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 800E96C4
  if (crb(c,2)) { goto L_800E9860; } // 800E96C8
  {uint32_t ea=c->r[30]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E96CC
  {uint32_t ea=c->r[2]+0xFFFFA6DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E96D0
  fcmp(c,0,c->f[2],c->f[0]); // 800E96D4
  if (!crb(c,1)) { goto L_800E96E4; } // 800E96D8
  {uint32_t ea=c->r[2]+0xFFFFA6E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E96DC
  goto L_800E96F4; // 800E96E0
L_800E96E4:;
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E96E4
  fcmp(c,0,c->f[2],c->f[0]); // 800E96E8
  if (!crb(c,0)) { goto L_800E96F4; } // 800E96EC
  {uint32_t ea=c->r[2]+0xFFFFA6E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E96F0
L_800E96F4:;
  {uint32_t ea=c->r[30]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E96F4
  fcmp(c,0,c->f[1],c->f[2]); // 800E96F8
  if (!crb(c,1)) { goto L_800E971C; } // 800E96FC
  {uint32_t ea=c->r[2]+0xFFFFA6E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9700
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800E9704
  fcmp(c,0,c->f[0],c->f[2]); // 800E9708
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[0]);} // 800E970C
  if (!crb(c,0)) { goto L_800E9734; } // 800E9710
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[2]);} // 800E9714
  goto L_800E9734; // 800E9718
L_800E971C:;
  {uint32_t ea=c->r[2]+0xFFFFA6E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E971C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800E9720
  fcmp(c,0,c->f[0],c->f[2]); // 800E9724
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[0]);} // 800E9728
  if (!crb(c,1)) { goto L_800E9734; } // 800E972C
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[2]);} // 800E9730
L_800E9734:;
  c->r[4]=R8(c->r[30]+0x00000081u); // 800E9734
  cmpu(c,0,c->r[4],0x000000FFu); // 800E9738
  if (crb(c,2)) { goto L_800E9860; } // 800E973C
  c->r[3]=0u+0x80550000u; // 800E9740
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800E9744
  c->lr=0x800E974Cu; f_8019C920(c); // 800E9748
  c->r[4]=c->r[31]+0x0000003Cu; // 800E974C
  c->r[7]=R32(c->r[31]+0x0000003Cu); // 800E9750
  c->r[6]=R32(c->r[4]+0x00000004u); // 800E9754
  c->r[29]=c->r[3]|c->r[3]; // 800E9758
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E975C
  c->r[5]=c->r[1]+0x00000044u; // 800E9760
  W32(c->r[1]+0x00000038u,c->r[7]); // 800E9764
  {uint32_t ea=c->r[2]+0xFFFFA6ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9768
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 800E976C
  W32(c->r[1]+0x00000040u,c->r[0]); // 800E9770
  {uint32_t ea=c->r[30]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9774
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E9778
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 800E977C
  c->r[4]=R8(c->r[30]+0x00000082u); // 800E9780
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E9784
  c->lr=0x800E978Cu; f_8025EA54(c); // 800E9788
  {uint32_t ea=c->r[2]+0xFFFFA6F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E978C
  c->f[30]=c->ps1[30]=S(c->f[30]/c->f[0]); // 800E9790
  c->f[1]=c->f[30]; // 800E9794
  c->lr=0x800E979Cu; f_8003EA88(c); // 800E9798
  {uint32_t ea=c->r[2]+0xFFFFA6F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E979C
  fcmp(c,0,c->f[1],c->f[2]); // 800E97A0
  if (!crb(c,1)) { goto L_800E97CC; } // 800E97A4
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E97A8
  fcmp(c,0,c->f[30],c->f[0]); // 800E97AC
  if (!crb(c,1)) { goto L_800E97BC; } // 800E97B0
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[2]); // 800E97B4
  goto L_800E97C0; // 800E97B8
L_800E97BC:;
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[2]); // 800E97BC
L_800E97C0:;
  {uint32_t ea=c->r[2]+0xFFFFA6F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E97C0
  c->f[30]=c->ps1[30]=S(c->f[30]/c->f[0]); // 800E97C4
  goto L_800E97D0; // 800E97C8
L_800E97CC:;
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E97CC
L_800E97D0:;
  {uint32_t ea=c->r[2]+0xFFFFA6F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E97D0
  c->r[3]=c->r[1]+0x00000080u; // 800E97D4
  {uint32_t ea=c->r[2]+0xFFFFA6FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E97D8
  c->r[4]=0u+0x00000059u; // 800E97DC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[30]); // 800E97E0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 800E97E4
  {uint32_t ea=c->r[30]+0x00000090u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E97E8
  {uint32_t ea=c->r[30]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E97EC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 800E97F0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 800E97F4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 800E97F8
  c->lr=0x800E9800u; f_80295FBC(c); // 800E97FC
  c->r[4]=c->r[1]+0x00000038u; // 800E9800
  c->r[3]=c->r[1]+0x00000080u; // 800E9804
  c->r[5]=c->r[4]|c->r[4]; // 800E9808
  c->lr=0x800E9810u; f_80296750(c); // 800E980C
  c->r[3]=c->r[1]+0x00000038u; // 800E9810
  c->r[4]=c->r[30]+0x0000002Cu; // 800E9814
  c->r[5]=c->r[3]|c->r[3]; // 800E9818
  c->lr=0x800E9820u; f_80296A4C(c); // 800E981C
  {uint32_t ea=c->r[2]+0xFFFFA704u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9820
  c->r[3]=c->r[29]+0x0000002Cu; // 800E9824
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9828
  c->r[4]=c->r[1]+0x00000038u; // 800E982C
  {uint32_t ea=c->r[2]+0xFFFFA700u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9830
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[30],c->f[0])); // 800E9834
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 800E9838
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800E983C
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[2]);} // 800E9840
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9844
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[0]);} // 800E9848
  c->lr=0x800E9850u; f_800361A0(c); // 800E984C
  c->r[3]=c->r[29]|c->r[29]; // 800E9850
  c->r[4]=0u+0x00000000u; // 800E9854
  c->lr=0x800E985Cu; f_80039840(c); // 800E9858
  c->lr=0x800E9860u; f_8025037C(c); // 800E985C
L_800E9860:;
  c->r[4]=R8(c->r[30]+0x00000095u); // 800E9860
  cmpu(c,0,c->r[4],0x000000FFu); // 800E9864
  if (crb(c,2)) { goto L_800E996C; } // 800E9868
  c->r[29]=0u+0x80550000u; // 800E986C
  c->r[3]=c->r[29]+0xFFFFC848u; // 800E9870
  c->lr=0x800E9878u; f_8018D900(c); // 800E9874
  cmps(c,0,(int32_t)c->r[3],0); // 800E9878
  if (crb(c,2)) { goto L_800E9964; } // 800E987C
  c->r[4]=c->r[31]+0x00000048u; // 800E9880
  c->r[3]=c->r[31]+0x00000000u; // 800E9884
  c->r[9]=R32(c->r[31]+0x00000048u); // 800E9888
  c->r[5]=c->r[1]+0x00000020u; // 800E988C
  c->r[8]=R32(c->r[4]+0x00000004u); // 800E9890
  c->r[7]=R32(c->r[4]+0x00000008u); // 800E9894
  c->r[6]=R32(c->r[31]+0x00000000u); // 800E9898
  c->r[4]=R32(c->r[3]+0x00000004u); // 800E989C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800E98A0
  W32(c->r[1]+0x0000002Cu,c->r[9]); // 800E98A4
  W32(c->r[1]+0x00000030u,c->r[8]); // 800E98A8
  W32(c->r[1]+0x00000034u,c->r[7]); // 800E98AC
  W32(c->r[1]+0x00000020u,c->r[6]); // 800E98B0
  W32(c->r[1]+0x00000024u,c->r[4]); // 800E98B4
  W32(c->r[1]+0x00000028u,c->r[0]); // 800E98B8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E98BC
  c->r[4]=R8(c->r[30]+0x00000082u); // 800E98C0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E98C4
  c->lr=0x800E98CCu; f_8025EA54(c); // 800E98C8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E98CC
  c->r[3]=c->r[1]+0x00000050u; // 800E98D0
  {uint32_t ea=c->r[2]+0xFFFFA6DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E98D4
  c->r[4]=0u+0x00000059u; // 800E98D8
  {uint32_t ea=c->r[2]+0xFFFFA6FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E98DC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 800E98E0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 800E98E4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 800E98E8
  c->lr=0x800E98F0u; f_80295FBC(c); // 800E98EC
  c->r[4]=c->r[1]+0x0000002Cu; // 800E98F0
  c->r[3]=c->r[1]+0x00000050u; // 800E98F4
  c->r[5]=c->r[4]|c->r[4]; // 800E98F8
  c->lr=0x800E9900u; f_80296750(c); // 800E98FC
  c->r[4]=c->r[1]+0x0000002Cu; // 800E9900
  c->r[3]=c->r[30]+0x0000002Cu; // 800E9904
  c->r[5]=c->r[4]|c->r[4]; // 800E9908
  c->lr=0x800E9910u; f_80296A4C(c); // 800E990C
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9910
  c->r[3]=c->r[29]+0xFFFFC848u; // 800E9914
  c->r[9]=R32(c->r[1]+0x00000024u); // 800E9918
  c->r[5]=c->r[1]+0x00000014u; // 800E991C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800E9920
  c->r[6]=c->r[1]+0x00000008u; // 800E9924
  c->r[7]=R32(c->r[1]+0x0000002Cu); // 800E9928
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800E992C
  c->r[10]=R32(c->r[1]+0x00000020u); // 800E9930
  c->r[8]=R32(c->r[1]+0x00000028u); // 800E9934
  c->r[4]=R32(c->r[1]+0x00000030u); // 800E9938
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E993C
  W32(c->r[1]+0x00000008u,c->r[10]); // 800E9940
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 800E9944
  W32(c->r[1]+0x00000010u,c->r[8]); // 800E9948
  W32(c->r[1]+0x00000014u,c->r[7]); // 800E994C
  W32(c->r[1]+0x00000018u,c->r[4]); // 800E9950
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E9954
  c->r[4]=R8(c->r[30]+0x00000095u); // 800E9958
  c->lr=0x800E9960u; f_8018DBD0(c); // 800E995C
  goto L_800E996C; // 800E9960
L_800E9964:;
  c->r[0]=0u+0x000000FFu; // 800E9964
  W8(c->r[30]+0x00000095u,c->r[0]); // 800E9968
L_800E996C:;
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E996C
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[0]); // 800E9970
  c->lr=0x800E9978u; f_8003EA88(c); // 800E9974
  {uint32_t ea=c->r[2]+0xFFFFA708u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9978
  fcmp(c,0,c->f[1],c->f[0]); // 800E997C
  if (!crb(c,1)) { goto L_800E99AC; } // 800E9980
  {uint32_t ea=c->r[30]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9984
  fcmp(c,0,c->f[31],c->f[1]); // 800E9988
  if (!crb(c,1)) { goto L_800E999C; } // 800E998C
  {uint32_t ea=c->r[2]+0xFFFFA70Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9990
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800E9994
  goto L_800E99A4; // 800E9998
L_800E999C:;
  {uint32_t ea=c->r[2]+0xFFFFA70Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E999C
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 800E99A0
L_800E99A4:;
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[1]); // 800E99A4
  c->lr=0x800E99ACu; f_8003EA88(c); // 800E99A8
L_800E99AC:;
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E99AC
  fcmp(c,0,c->f[1],c->f[0]); // 800E99B0
  if (!crb(c,0)) { goto L_800E99E8; } // 800E99B4
  c->r[0]=R8(c->r[30]+0x00000096u); // 800E99B8
  cmps(c,0,(int32_t)c->r[0],0); // 800E99BC
  if (crb(c,2)) { goto L_800E9A14; } // 800E99C0
  c->r[0]=0u+0x00000000u; // 800E99C4
  c->r[3]=c->r[30]|c->r[30]; // 800E99C8
  W8(c->r[30]+0x00000096u,c->r[0]); // 800E99CC
  c->r[4]=0u+0x00000004u; // 800E99D0
  c->r[5]=0u+0x0000001Eu; // 800E99D4
  c->r[6]=0u+0x00000001u; // 800E99D8
  c->r[7]=0u+0x00000001u; // 800E99DC
  c->lr=0x800E99E4u; f_8017900C(c); // 800E99E0
  goto L_800E9A14; // 800E99E4
L_800E99E8:;
  c->r[0]=R8(c->r[30]+0x00000096u); // 800E99E8
  cmps(c,0,(int32_t)c->r[0],0); // 800E99EC
  if (!crb(c,2)) { goto L_800E9A14; } // 800E99F0
  c->r[0]=0u+0x00000001u; // 800E99F4
  c->r[3]=c->r[30]|c->r[30]; // 800E99F8
  W8(c->r[30]+0x00000096u,c->r[0]); // 800E99FC
  c->r[4]=0u+0x00000004u; // 800E9A00
  c->r[5]=0u+0x0000001Du; // 800E9A04
  c->r[6]=0u+0x00000001u; // 800E9A08
  c->r[7]=0u+0x00000001u; // 800E9A0C
  c->lr=0x800E9A14u; f_8017900C(c); // 800E9A10
L_800E9A14:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 800E9A14
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 800E9A18
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,30,ea,0,0);} // 800E9A1C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[30]=RF64(ea);} // 800E9A20
  c->r[31]=R32(c->r[1]+0x000000BCu); // 800E9A24
  c->r[30]=R32(c->r[1]+0x000000B8u); // 800E9A28
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800E9A2C
  c->r[29]=R32(c->r[1]+0x000000B4u); // 800E9A30
  c->lr=c->r[0]; // 800E9A34
  c->r[1]=c->r[1]+0x000000E0u; // 800E9A38
  return; // 800E9A3C
}

// fn_800E9A40
void f_800E9A40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9A40
  c->r[0]=c->lr; // 800E9A44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E9A48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E9A4C
  c->r[31]=c->r[3]|c->r[3]; // 800E9A50
  c->r[4]=R8(c->r[3]+0x00000095u); // 800E9A54
  cmpu(c,0,c->r[4],0x000000FFu); // 800E9A58
  if (crb(c,2)) { goto L_800E9A6C; } // 800E9A5C
  c->r[3]=0u+0x80550000u; // 800E9A60
  c->r[3]=c->r[3]+0xFFFFC848u; // 800E9A64
  c->lr=0x800E9A6Cu; f_8018D738(c); // 800E9A68
L_800E9A6C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E9A6C
  c->lr=0x800E9A74u; f_801F4C78(c); // 800E9A70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E9A74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E9A78
  c->lr=c->r[0]; // 800E9A7C
  c->r[1]=c->r[1]+0x00000010u; // 800E9A80
  return; // 800E9A84
}

// fn_800E9A88
void f_800E9A88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9A88
  c->r[0]=c->lr; // 800E9A8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E9A90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E9A94
  c->r[31]=c->r[3]|c->r[3]; // 800E9A98
  c->r[4]=R32(c->r[3]+0x00000394u); // 800E9A9C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800E9AA0
  c->lr=0x800E9AA8u; f_802501B0(c); // 800E9AA4
  c->r[3]=c->r[31]|c->r[31]; // 800E9AA8
  c->r[4]=0u+0x00000000u; // 800E9AAC
  c->lr=0x800E9AB4u; f_801F5244(c); // 800E9AB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E9AB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E9AB8
  c->lr=c->r[0]; // 800E9ABC
  c->r[1]=c->r[1]+0x00000010u; // 800E9AC0
  return; // 800E9AC4
}

// fn_800E9AC8
void f_800E9AC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9AC8
  c->r[0]=c->lr; // 800E9ACC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E9AD0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800E9AD4
  W32(c->r[1]+0x00000038u,c->r[30]); // 800E9AD8
  c->r[30]=c->r[3]|c->r[3]; // 800E9ADC
  c->r[0]=R32(c->r[3]+0x000003C4u); // 800E9AE0
  cmps(c,0,(int32_t)c->r[0],1); // 800E9AE4
  if (crb(c,2)) { goto L_800E9B40; } // 800E9AE8
  if (!crb(c,0)) { goto L_800E9B40; } // 800E9AEC
  cmps(c,0,(int32_t)c->r[0],0); // 800E9AF0
  if (!crb(c,0)) { goto L_800E9AFC; } // 800E9AF4
  goto L_800E9B40; // 800E9AF8
L_800E9AFC:;
  {uint32_t ea=c->r[3]+0x000003C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9AFC
  c->r[31]=0u+0x00000000u; // 800E9B00
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9B04
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800E9B08
  {uint32_t ea=c->r[3]+0x000003DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9B0C
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 800E9B10
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 800E9B14
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800E9B18
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 800E9B1C
  W8(c->r[3]+0x00000081u,c->r[0]); // 800E9B20
  W8(c->r[3]+0x0000007Fu,c->r[31]); // 800E9B24
  c->r[3]=c->r[3]+0x0000000Cu; // 800E9B28
  c->lr=0x800E9B30u; f_80037668(c); // 800E9B2C
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9B30
  c->r[3]=c->r[30]+0x00000010u; // 800E9B34
  c->lr=0x800E9B3Cu; f_80037668(c); // 800E9B38
  W8(c->r[30]+0x00000028u,c->r[31]); // 800E9B3C
L_800E9B40:;
  c->r[4]=R32(c->r[30]+0x00000398u); // 800E9B40
  c->r[0]=0u+0x00000001u; // 800E9B44
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9B48
  c->r[3]=c->r[30]|c->r[30]; // 800E9B4C
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800E9B50
  c->r[5]=0u+0x00000084u; // 800E9B54
  c->f[2]=c->f[1]; // 800E9B58
  c->r[6]=0u+0x00000001u; // 800E9B5C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800E9B60
  c->r[4]=R32(c->r[30]+0x00000398u); // 800E9B64
  c->r[12]=R32(c->r[12]+0x00000064u); // 800E9B68
  c->ctr=c->r[12]; // 800E9B6C
  if (true) { c->lr=0x800E9B74u; dispatch(c,c->ctr); } // 800E9B70
  {uint32_t ea=c->r[30]+0x000003CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9B74
  c->r[3]=0u+0x80620000u; // 800E9B78
  {uint32_t ea=c->r[30]+0x000003D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9B7C
  c->r[3]=c->r[3]+0x00007688u; // 800E9B80
  {uint32_t ea=c->r[30]+0x000003D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9B84
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800E9B88
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800E9B8C
  c->r[5]=0u+0x00000000u; // 800E9B90
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800E9B94
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 800E9B98
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 800E9B9C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[1]);} // 800E9BA0
  c->r[4]=rotl(c->r[7],0)&0x000000FFu; // 800E9BA4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800E9BA8
  c->r[6]=R32(c->r[1]+0x00000024u); // 800E9BAC
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800E9BB0
  W8(c->r[30]+0x0000007Cu,c->r[7]); // 800E9BB4
  W8(c->r[30]+0x0000007Du,c->r[6]); // 800E9BB8
  W8(c->r[30]+0x0000007Eu,c->r[0]); // 800E9BBC
  c->r[3]=R32(c->r[3]+0x00000014u); // 800E9BC0
  c->lr=0x800E9BC8u; f_80038998(c); // 800E9BC4
  c->r[7]=0u+0x803D0000u; // 800E9BC8
  {uint32_t ea=c->r[7]+0x00003F18u; c->r[6]=R32(ea); c->r[7]=ea;} // 800E9BCC
  c->r[3]=c->r[30]|c->r[30]; // 800E9BD0
  c->r[4]=c->r[1]+0x00000008u; // 800E9BD4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800E9BD8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800E9BDC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E9BE0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800E9BE4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E9BE8
  c->lr=0x800E9BF0u; f_800E9C20(c); // 800E9BEC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800E9BF0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E9BF4
  c->lr=0x800E9BFCu; f_802501B0(c); // 800E9BF8
  c->r[3]=R32(c->r[30]+0x00000398u); // 800E9BFC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800E9C00
  c->lr=0x800E9C08u; f_802501B0(c); // 800E9C04
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E9C08
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800E9C0C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800E9C10
  c->lr=c->r[0]; // 800E9C14
  c->r[1]=c->r[1]+0x00000040u; // 800E9C18
  return; // 800E9C1C
}

// fn_800E9C20
void f_800E9C20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9C20
  c->r[0]=c->lr; // 800E9C24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E9C28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E9C2C
  c->r[31]=c->r[4]|c->r[4]; // 800E9C30
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E9C34
  c->r[30]=c->r[3]|c->r[3]; // 800E9C38
  c->r[3]=c->r[31]|c->r[31]; // 800E9C3C
  c->lr=0x800E9C44u; f_802B9FDC(c); // 800E9C40
  cmps(c,0,(int32_t)c->r[3],0); // 800E9C44
  if (crb(c,2)) { goto L_800E9C64; } // 800E9C48
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E9C4C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E9C50
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800E9C54
  W32(c->r[30]+0x00000020u,c->r[0]); // 800E9C58
  c->r[0]=R32(c->r[31]+0x00000008u); // 800E9C5C
  W32(c->r[30]+0x00000024u,c->r[0]); // 800E9C60
L_800E9C64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E9C64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E9C68
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E9C6C
  c->lr=c->r[0]; // 800E9C70
  c->r[1]=c->r[1]+0x00000010u; // 800E9C74
  return; // 800E9C78
}

// fn_800E9C7C
void f_800E9C7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9C7C
  c->r[0]=c->lr; // 800E9C80
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800E9C84
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800E9C88
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800E9C8C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 800E9C90
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 800E9C94
  c->r[11]=c->r[1]+0x000000A0u; // 800E9C98
  c->lr=0x800E9CA0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E9C9C
  c->r[5]=0u+0x80620000u; // 800E9CA0
  c->r[30]=c->r[3]|c->r[3]; // 800E9CA4
  c->r[5]=c->r[5]+0x00007688u; // 800E9CA8
  c->r[4]=R8(c->r[3]+0x0000007Du); // 800E9CAC
  c->r[3]=R32(c->r[5]+0x00000014u); // 800E9CB0
  c->lr=0x800E9CB8u; f_8003560C(c); // 800E9CB4
  c->r[0]=R8(c->r[30]+0x0000007Fu); // 800E9CB8
  c->r[29]=c->r[3]|c->r[3]; // 800E9CBC
  c->r[31]=0u+0x00000000u; // 800E9CC0
  cmps(c,0,(int32_t)c->r[0],1); // 800E9CC4
  if (crb(c,2)) { goto L_800E9F10; } // 800E9CC8
  if (!crb(c,0)) { goto L_800E9FE0; } // 800E9CCC
  cmps(c,0,(int32_t)c->r[0],0); // 800E9CD0
  if (!crb(c,0)) { goto L_800E9CDC; } // 800E9CD4
  goto L_800E9FE0; // 800E9CD8
L_800E9CDC:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800E9CDC
  if (crb(c,2)) { goto L_800E9ECC; } // 800E9CE0
  c->r[3]=0u+0x80620000u; // 800E9CE4
  c->r[3]=c->r[3]+0x000079C0u; // 800E9CE8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9CEC
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9CF0
  c->f[1]=-c->f[1]; // 800E9CF4
  c->f[2]=-c->f[0]; // 800E9CF8
  c->lr=0x800E9D00u; f_8005C22C(c); // 800E9CFC
  c->f[2]=-c->f[1]; // 800E9D00
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9D04
  fcmp(c,0,c->f[2],c->f[0]); // 800E9D08
  if (!crb(c,1)) { goto L_800E9D24; } // 800E9D0C
  {uint32_t ea=c->r[2]+0xFFFFA708u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9D10
  {uint32_t ea=c->r[2]+0xFFFFA714u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9D14
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800E9D18
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800E9D1C
  goto L_800E9D3C; // 800E9D20
L_800E9D24:;
  {uint32_t ea=c->r[2]+0xFFFFA708u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9D24
  {uint32_t ea=c->r[2]+0xFFFFA714u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9D28
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800E9D2C
  {uint32_t ea=c->r[2]+0xFFFFA70Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9D30
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800E9D34
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 800E9D38
L_800E9D3C:;
  {uint32_t ea=c->r[2]+0xFFFFA708u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9D3C
  fcmp(c,0,c->f[31],c->f[0]); // 800E9D40
  if (!crb(c,1)) { goto L_800E9D50; } // 800E9D44
  {uint32_t ea=c->r[2]+0xFFFFA70Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9D48
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800E9D4C
L_800E9D50:;
  c->f[1]=c->f[31]; // 800E9D50
  {uint32_t ea=c->r[2]+0xFFFFA718u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E9D54
  c->r[28]=0u+0x00000000u; // 800E9D58
  c->lr=0x800E9D60u; f_8003EA88(c); // 800E9D5C
  {uint32_t ea=c->r[2]+0xFFFFA6F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9D60
  fcmp(c,0,c->f[1],c->f[0]); // 800E9D64
  if (!crb(c,1)) { goto L_800E9DC8; } // 800E9D68
  c->f[1]=c->f[31]; // 800E9D6C
  c->lr=0x800E9D74u; f_8003EA88(c); // 800E9D70
  {uint32_t ea=c->r[2]+0xFFFFA6ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9D74
  fcmp(c,0,c->f[1],c->f[2]); // 800E9D78
  if (!crb(c,1)) { goto L_800E9D98; } // 800E9D7C
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9D80
  fcmp(c,0,c->f[31],c->f[0]); // 800E9D84
  if (!crb(c,0)) { goto L_800E9D94; } // 800E9D88
  {uint32_t ea=c->r[2]+0xFFFFA71Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800E9D8C
  goto L_800E9D98; // 800E9D90
L_800E9D94:;
  c->f[31]=c->f[2]; // 800E9D94
L_800E9D98:;
  c->f[1]=c->f[31]; // 800E9D98
  c->lr=0x800E9DA0u; f_8003EA88(c); // 800E9D9C
  {uint32_t ea=c->r[2]+0xFFFFA6F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9DA0
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9DA4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 800E9DA8
  {uint32_t ea=c->r[2]+0xFFFFA720u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9DAC
  fcmp(c,0,c->f[31],c->f[0]); // 800E9DB0
  c->f[30]=c->ps1[30]=S(c->f[2]/c->f[1]); // 800E9DB4
  if (!crb(c,1)) { goto L_800E9DC4; } // 800E9DB8
  c->r[28]=0u+0x00000001u; // 800E9DBC
  goto L_800E9DC8; // 800E9DC0
L_800E9DC4:;
  c->r[28]=0u+0x00000002u; // 800E9DC4
L_800E9DC8:;
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9DC8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800E9DCC
  c->lr=0x800E9DD4u; f_8003EA88(c); // 800E9DD0
  {uint32_t ea=c->r[2]+0xFFFFA724u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9DD4
  fcmp(c,0,c->f[1],c->f[0]); // 800E9DD8
  if (!crb(c,1)) { goto L_800E9E08; } // 800E9DDC
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800E9DE0
  c->lr=0x800E9DE8u; f_80035554(c); // 800E9DE4
  {uint32_t ea=c->r[2]+0xFFFFA728u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E9DE8
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9DEC
  {uint32_t ea=c->r[2]+0xFFFFA72Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9DF0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[3],c->f[1],c->f[2])); // 800E9DF4
  fcmp(c,0,c->f[1],c->f[0]); // 800E9DF8
  {uint32_t ea=c->r[30]+0x0000008Cu; WF32(ea,c->f[1]);} // 800E9DFC
  if (!crb(c,1)) { goto L_800E9E08; } // 800E9E00
  {uint32_t ea=c->r[30]+0x0000008Cu; WF32(ea,c->f[0]);} // 800E9E04
L_800E9E08:;
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9E08
  fcmp(c,0,c->f[0],c->f[31]); // 800E9E0C
  if (!crb(c,0)) { goto L_800E9E44; } // 800E9E10
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800E9E14
  c->lr=0x800E9E1Cu; f_80035554(c); // 800E9E18
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9E1C
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9E20
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800E9E24
  fcmp(c,0,c->f[0],c->f[31]); // 800E9E28
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[0]);} // 800E9E2C
  if (!crb(c,1)) { goto L_800E9E70; } // 800E9E30
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9E34
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[31]);} // 800E9E38
  {uint32_t ea=c->r[30]+0x0000008Cu; WF32(ea,c->f[0]);} // 800E9E3C
  goto L_800E9E70; // 800E9E40
L_800E9E44:;
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800E9E44
  c->lr=0x800E9E4Cu; f_80035554(c); // 800E9E48
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9E4C
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9E50
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[2],c->f[1],-c->f[0])); // 800E9E54
  fcmp(c,0,c->f[0],c->f[31]); // 800E9E58
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[0]);} // 800E9E5C
  if (!crb(c,0)) { goto L_800E9E70; } // 800E9E60
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9E64
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[31]);} // 800E9E68
  {uint32_t ea=c->r[30]+0x0000008Cu; WF32(ea,c->f[0]);} // 800E9E6C
L_800E9E70:;
  cmps(c,0,(int32_t)c->r[28],2); // 800E9E70
  if (crb(c,2)) { goto L_800E9EAC; } // 800E9E74
  if (!crb(c,0)) { goto L_800E9ECC; } // 800E9E78
  cmps(c,0,(int32_t)c->r[28],1); // 800E9E7C
  if (!crb(c,0)) { goto L_800E9E88; } // 800E9E80
  goto L_800E9ECC; // 800E9E84
L_800E9E88:;
  {uint32_t ea=c->r[2]+0xFFFFA730u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9E88
  {uint32_t ea=c->r[30]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9E8C
  {uint32_t ea=c->r[2]+0xFFFFA734u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9E90
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[30],c->f[1])); // 800E9E94
  fcmp(c,0,c->f[1],c->f[0]); // 800E9E98
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800E9E9C
  if (!crb(c,1)) { goto L_800E9ECC; } // 800E9EA0
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800E9EA4
  goto L_800E9ECC; // 800E9EA8
L_800E9EAC:;
  {uint32_t ea=c->r[2]+0xFFFFA730u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9EAC
  {uint32_t ea=c->r[30]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9EB0
  {uint32_t ea=c->r[2]+0xFFFFA738u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9EB4
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[2],c->f[30],-c->f[1])); // 800E9EB8
  fcmp(c,0,c->f[1],c->f[0]); // 800E9EBC
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800E9EC0
  if (!crb(c,0)) { goto L_800E9ECC; } // 800E9EC4
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800E9EC8
L_800E9ECC:;
  c->r[0]=rotl(c->r[29],0)&0x00000008u; cr0(c,c->r[0]); // 800E9ECC
  if (crb(c,2)) { goto L_800E9FE0; } // 800E9ED0
  c->r[28]=0u+0x80620000u; // 800E9ED4
  c->r[4]=R8(c->r[30]+0x0000007Du); // 800E9ED8
  c->r[28]=c->r[28]+0x00007688u; // 800E9EDC
  c->r[3]=R32(c->r[28]+0x00000014u); // 800E9EE0
  c->lr=0x800E9EE8u; f_8003560C(c); // 800E9EE4
  c->r[0]=c->r[3]|c->r[3]; // 800E9EE8
  c->r[3]=R32(c->r[28]+0x00000014u); // 800E9EEC
  c->r[4]=R8(c->r[30]+0x0000007Du); // 800E9EF0
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800E9EF4
  c->lr=0x800E9EFCu; f_80038998(c); // 800E9EF8
  c->r[3]=R8(c->r[30]+0x0000007Fu); // 800E9EFC
  c->r[31]=0u+0x00000001u; // 800E9F00
  c->r[0]=c->r[3]+0x00000001u; // 800E9F04
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 800E9F08
  goto L_800E9FE0; // 800E9F0C
L_800E9F10:;
  {uint32_t ea=c->r[30]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9F10
  {uint32_t ea=c->r[2]+0xFFFFA73Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9F14
  fcmp(c,0,c->f[2],c->f[0]); // 800E9F18
  if (!crb(c,1)) { goto L_800E9F4C; } // 800E9F1C
  {uint32_t ea=c->r[2]+0xFFFFA730u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9F20
  {uint32_t ea=c->r[2]+0xFFFFA6E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9F24
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800E9F28
  fcmp(c,0,c->f[1],c->f[0]); // 800E9F2C
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800E9F30
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E9F34
  if (!crb(c,2)) { goto L_800E9FDC; } // 800E9F38
  c->r[0]=0u+0x00000000u; // 800E9F3C
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800E9F40
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 800E9F44
  goto L_800E9FDC; // 800E9F48
L_800E9F4C:;
  {uint32_t ea=c->r[2]+0xFFFFA740u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9F4C
  fcmp(c,0,c->f[2],c->f[0]); // 800E9F50
  if (!crb(c,0)) { goto L_800E9F84; } // 800E9F54
  {uint32_t ea=c->r[2]+0xFFFFA730u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9F58
  {uint32_t ea=c->r[2]+0xFFFFA738u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9F5C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800E9F60
  fcmp(c,0,c->f[1],c->f[0]); // 800E9F64
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800E9F68
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E9F6C
  if (!crb(c,2)) { goto L_800E9FDC; } // 800E9F70
  c->r[0]=0u+0x00000000u; // 800E9F74
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800E9F78
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 800E9F7C
  goto L_800E9FDC; // 800E9F80
L_800E9F84:;
  {uint32_t ea=c->r[2]+0xFFFFA6ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9F84
  fcmp(c,0,c->f[2],c->f[1]); // 800E9F88
  if (!crb(c,0)) { goto L_800E9FB8; } // 800E9F8C
  {uint32_t ea=c->r[2]+0xFFFFA730u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9F90
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800E9F94
  fcmp(c,0,c->f[0],c->f[1]); // 800E9F98
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800E9F9C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E9FA0
  if (!crb(c,2)) { goto L_800E9FDC; } // 800E9FA4
  c->r[0]=0u+0x00000000u; // 800E9FA8
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800E9FAC
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 800E9FB0
  goto L_800E9FDC; // 800E9FB4
L_800E9FB8:;
  {uint32_t ea=c->r[2]+0xFFFFA730u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9FB8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800E9FBC
  fcmp(c,0,c->f[0],c->f[1]); // 800E9FC0
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800E9FC4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E9FC8
  if (!crb(c,2)) { goto L_800E9FDC; } // 800E9FCC
  c->r[0]=0u+0x00000000u; // 800E9FD0
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800E9FD4
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 800E9FD8
L_800E9FDC:;
  c->r[31]=0u+0x00000001u; // 800E9FDC
L_800E9FE0:;
  c->r[28]=rotl(c->r[29],0)&0x00000002u; cr0(c,c->r[28]); // 800E9FE0
  if (!crb(c,2)) { goto L_800EA008; } // 800E9FE4
  {uint32_t ea=c->r[30]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9FE8
  c->r[3]=c->r[30]+0x00000010u; // 800E9FEC
  {uint32_t ea=c->r[2]+0xFFFFA6F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9FF0
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9FF4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800E9FF8
  {uint32_t ea=c->r[30]+0x0000008Cu; WF32(ea,c->f[1]);} // 800E9FFC
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[0]);} // 800EA000
  c->lr=0x800EA008u; f_80037668(c); // 800EA004
L_800EA008:;
  c->r[0]=R8(c->r[30]+0x00000028u); // 800EA008
  cmps(c,0,(int32_t)c->r[0],1); // 800EA00C
  if (crb(c,2)) { goto L_800EA104; } // 800EA010
  if (!crb(c,0)) { goto L_800EA024; } // 800EA014
  cmps(c,0,(int32_t)c->r[0],0); // 800EA018
  if (!crb(c,0)) { goto L_800EA030; } // 800EA01C
  goto L_800EA2CC; // 800EA020
L_800EA024:;
  cmps(c,0,(int32_t)c->r[0],3); // 800EA024
  if (!crb(c,0)) { goto L_800EA2CC; } // 800EA028
  goto L_800EA2B0; // 800EA02C
L_800EA030:;
  c->r[0]=rotl(c->r[29],0)&0x00000004u; cr0(c,c->r[0]); // 800EA030
  if (crb(c,2)) { goto L_800EA0F4; } // 800EA034
  c->r[3]=c->r[30]+0x0000000Cu; // 800EA038
  c->lr=0x800EA040u; f_8003E460(c); // 800EA03C
  c->r[28]=c->r[3]|c->r[3]; // 800EA040
  c->r[3]=c->r[30]+0x0000000Cu; // 800EA044
  c->r[4]=0u+0x00000000u; // 800EA048
  c->lr=0x800EA050u; f_800366DC(c); // 800EA04C
  c->r[3]=c->r[30]+0x0000000Cu; // 800EA050
  c->lr=0x800EA058u; f_8003E460(c); // 800EA054
  cmps(c,0,(int32_t)c->r[28],255); // 800EA058
  c->r[28]=c->r[3]|c->r[3]; // 800EA05C
  if (!crb(c,0)) { goto L_800EA0A0; } // 800EA060
  cmps(c,0,(int32_t)c->r[3],255); // 800EA064
  if (crb(c,0)) { goto L_800EA0A0; } // 800EA068
  c->r[3]=c->r[30]|c->r[30]; // 800EA06C
  c->r[4]=0u+0x00000004u; // 800EA070
  c->r[5]=0u+0x00000009u; // 800EA074
  c->r[6]=0u+0x00000001u; // 800EA078
  c->r[7]=0u+0x00000001u; // 800EA07C
  c->lr=0x800EA084u; f_8017900C(c); // 800EA080
  c->r[3]=0u+0x80550000u; // 800EA084
  c->r[4]=R32(c->r[13]+0xFFFF8600u); // 800EA088
  c->r[3]=c->r[3]+0xFFFFC848u; // 800EA08C
  c->r[5]=0u+0x00000000u; // 800EA090
  c->r[6]=0u+0x00000000u; // 800EA094
  c->lr=0x800EA09Cu; f_8018D3E4(c); // 800EA098
  W8(c->r[30]+0x00000095u,c->r[3]); // 800EA09C
L_800EA0A0:;
  cmps(c,0,(int32_t)c->r[28],300); // 800EA0A0
  if (!crb(c,1)) { goto L_800EA0F4; } // 800EA0A4
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA0A8
  c->r[3]=c->r[30]+0x0000000Cu; // 800EA0AC
  c->lr=0x800EA0B4u; f_80037668(c); // 800EA0B0
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA0B4
  c->r[3]=c->r[30]+0x00000010u; // 800EA0B8
  c->lr=0x800EA0C0u; f_80037668(c); // 800EA0BC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EA0C0
  c->r[3]=c->r[30]|c->r[30]; // 800EA0C4
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA0C8
  c->r[5]=0u+0x00000001u; // 800EA0CC
  c->r[12]=R32(c->r[12]+0x00000064u); // 800EA0D0
  c->r[6]=0u+0x00000000u; // 800EA0D4
  c->f[2]=c->f[1]; // 800EA0D8
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EA0DC
  c->ctr=c->r[12]; // 800EA0E0
  if (true) { c->lr=0x800EA0E8u; dispatch(c,c->ctr); } // 800EA0E4
  c->r[3]=R8(c->r[30]+0x00000028u); // 800EA0E8
  c->r[0]=c->r[3]+0x00000001u; // 800EA0EC
  W8(c->r[30]+0x00000028u,c->r[0]); // 800EA0F0
L_800EA0F4:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EA0F4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EA0F8
  c->lr=0x800EA100u; f_802501B0(c); // 800EA0FC
  goto L_800EA2CC; // 800EA100
L_800EA104:;
  c->r[0]=rotl(c->r[29],0)&0x00000004u; cr0(c,c->r[0]); // 800EA104
  if (crb(c,2)) { goto L_800EA2A0; } // 800EA108
  c->r[3]=c->r[30]+0x0000000Cu; // 800EA10C
  c->r[4]=0u+0x00000000u; // 800EA110
  c->lr=0x800EA118u; f_800366DC(c); // 800EA114
  c->r[3]=c->r[30]+0x0000000Cu; // 800EA118
  c->lr=0x800EA120u; f_8003E460(c); // 800EA11C
  cmps(c,0,(int32_t)c->r[3],60); // 800EA120
  if (!crb(c,1)) { goto L_800EA25C; } // 800EA124
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA128
  c->r[3]=c->r[30]+0x0000000Cu; // 800EA12C
  c->lr=0x800EA134u; f_80037668(c); // 800EA130
  c->r[6]=0u+0x803A0000u; // 800EA134
  {uint32_t ea=c->r[6]+0xFFFFE9BCu; c->r[4]=R32(ea); c->r[6]=ea;} // 800EA138
  c->r[5]=c->r[1]+0x00000038u; // 800EA13C
  c->r[3]=R32(c->r[6]+0x00000004u); // 800EA140
  c->r[0]=R32(c->r[6]+0x00000008u); // 800EA144
  W32(c->r[1]+0x00000044u,c->r[4]); // 800EA148
  W32(c->r[1]+0x00000048u,c->r[3]); // 800EA14C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800EA150
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EA154
  c->r[4]=R8(c->r[30]+0x00000082u); // 800EA158
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EA15C
  c->lr=0x800EA164u; f_8025EA54(c); // 800EA160
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA164
  c->r[3]=c->r[1]+0x00000050u; // 800EA168
  {uint32_t ea=c->r[30]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA16C
  c->r[4]=0u+0x00000059u; // 800EA170
  {uint32_t ea=c->r[2]+0xFFFFA6FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA174
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 800EA178
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 800EA17C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 800EA180
  c->lr=0x800EA188u; f_80295FBC(c); // 800EA184
  c->r[4]=c->r[1]+0x00000044u; // 800EA188
  c->r[3]=c->r[1]+0x00000050u; // 800EA18C
  c->r[5]=c->r[4]|c->r[4]; // 800EA190
  c->lr=0x800EA198u; f_80296750(c); // 800EA194
  c->r[3]=c->r[1]+0x00000044u; // 800EA198
  c->r[4]=c->r[30]+0x0000002Cu; // 800EA19C
  c->r[5]=c->r[3]|c->r[3]; // 800EA1A0
  c->lr=0x800EA1A8u; f_80296A4C(c); // 800EA1A4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EA1A8
  c->r[3]=c->r[30]|c->r[30]; // 800EA1AC
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA1B0
  c->r[5]=0u+0x00000002u; // 800EA1B4
  c->r[12]=R32(c->r[12]+0x00000064u); // 800EA1B8
  c->r[6]=0u+0x00000000u; // 800EA1BC
  c->f[2]=c->f[1]; // 800EA1C0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EA1C4
  c->ctr=c->r[12]; // 800EA1C8
  if (true) { c->lr=0x800EA1D0u; dispatch(c,c->ctr); } // 800EA1CC
  cmps(c,0,(int32_t)c->r[28],0); // 800EA1D0
  if (crb(c,2)) { goto L_800EA1E8; } // 800EA1D4
  c->r[3]=0u+0x00000000u; // 800EA1D8
  c->r[4]=0u+0x00000003u; // 800EA1DC
  c->r[5]=0u+0x0000000Cu; // 800EA1E0
  c->lr=0x800EA1E8u; f_8027C0C8(c); // 800EA1E4
L_800EA1E8:;
  c->r[29]=0u+0x80620000u; // 800EA1E8
  c->r[27]=0u+0x000000FFu; // 800EA1EC
  c->r[29]=c->r[29]+0x00007688u; // 800EA1F0
  c->r[26]=0u+0x00000000u; // 800EA1F4
  goto L_800EA22C; // 800EA1F8
L_800EA1FC:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 800EA1FC
  c->r[28]=c->r[30]+c->r[0]; // 800EA200
  c->r[4]=R8(c->r[28]+0x00000098u); // 800EA204
  cmpu(c,0,c->r[4],0x000000FFu); // 800EA208
  if (crb(c,2)) { goto L_800EA228; } // 800EA20C
  c->r[3]=R32(c->r[29]+0x00000014u); // 800EA210
  c->lr=0x800EA218u; f_8003560C(c); // 800EA214
  cmps(c,0,(int32_t)c->r[3],0); // 800EA218
  if (!crb(c,2)) { goto L_800EA228; } // 800EA21C
  c->r[27]=R8(c->r[28]+0x00000098u); // 800EA220
  c->r[26]=0u+0x00000003u; // 800EA224
L_800EA228:;
  c->r[26]=c->r[26]+0x00000001u; // 800EA228
L_800EA22C:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 800EA22C
  cmpu(c,0,c->r[0],0x00000003u); // 800EA230
  if (crb(c,0)) { IRQCHK(c); goto L_800EA1FC; } // 800EA234
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA238
  c->r[5]=c->r[27]|c->r[27]; // 800EA23C
  c->r[4]=R8(c->r[30]+0x0000007Du); // 800EA240
  c->r[3]=c->r[1]+0x00000044u; // 800EA244
  c->lr=0x800EA24Cu; f_8009DC24(c); // 800EA248
  c->r[3]=R8(c->r[30]+0x00000028u); // 800EA24C
  c->r[0]=c->r[3]+0x00000001u; // 800EA250
  W8(c->r[30]+0x00000028u,c->r[0]); // 800EA254
  goto L_800EA2A0; // 800EA258
L_800EA25C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800EA25C
  if (crb(c,2)) { goto L_800EA2A0; } // 800EA260
  c->r[3]=c->r[30]+0x00000010u; // 800EA264
  c->r[4]=0u+0x00000000u; // 800EA268
  c->lr=0x800EA270u; f_800366DC(c); // 800EA26C
  c->r[3]=c->r[30]+0x00000010u; // 800EA270
  c->r[4]=0u+0x00000008u; // 800EA274
  c->lr=0x800EA27Cu; f_80038BCC(c); // 800EA278
  cmps(c,0,(int32_t)c->r[3],0); // 800EA27C
  if (crb(c,2)) { goto L_800EA2A0; } // 800EA280
  c->r[3]=0u+0x00000000u; // 800EA284
  c->r[4]=0u+0x00000000u; // 800EA288
  c->r[5]=0u+0x00000008u; // 800EA28C
  c->lr=0x800EA294u; f_8027C0C8(c); // 800EA290
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA294
  c->r[3]=c->r[30]+0x00000010u; // 800EA298
  c->lr=0x800EA2A0u; f_80037668(c); // 800EA29C
L_800EA2A0:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EA2A0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EA2A4
  c->lr=0x800EA2ACu; f_802501B0(c); // 800EA2A8
  goto L_800EA2CC; // 800EA2AC
L_800EA2B0:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EA2B0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EA2B4
  c->lr=0x800EA2BCu; f_802501B0(c); // 800EA2B8
  cmps(c,0,(int32_t)c->r[3],0); // 800EA2BC
  if (crb(c,2)) { goto L_800EA2CC; } // 800EA2C0
  c->r[0]=0u+0x00000000u; // 800EA2C4
  W8(c->r[30]+0x00000028u,c->r[0]); // 800EA2C8
L_800EA2CC:;
  c->r[3]=R32(c->r[30]+0x00000398u); // 800EA2CC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EA2D0
  c->lr=0x800EA2D8u; f_802501B0(c); // 800EA2D4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EA2D8
  c->r[5]=c->r[1]+0x0000002Cu; // 800EA2DC
  c->r[4]=R8(c->r[30]+0x00000082u); // 800EA2E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EA2E4
  c->lr=0x800EA2ECu; f_8025EA54(c); // 800EA2E8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA2EC
  c->r[5]=c->r[1]+0x00000014u; // 800EA2F0
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA2F4
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800EA2F8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800EA2FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EA300
  W32(c->r[1]+0x00000014u,c->r[3]); // 800EA304
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800EA308
  c->r[3]=R32(c->r[1]+0x00000030u); // 800EA30C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EA310
  W32(c->r[1]+0x00000018u,c->r[3]); // 800EA314
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EA318
  c->r[4]=R8(c->r[30]+0x00000082u); // 800EA31C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EA320
  c->lr=0x800EA328u; f_8025E9C0(c); // 800EA324
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EA328
  c->r[5]=c->r[1]+0x00000020u; // 800EA32C
  c->r[4]=R8(c->r[30]+0x00000083u); // 800EA330
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EA334
  c->lr=0x800EA33Cu; f_8025EA54(c); // 800EA338
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA33C
  c->r[5]=c->r[1]+0x00000008u; // 800EA340
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA344
  c->r[0]=R32(c->r[1]+0x00000020u); // 800EA348
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800EA34C
  c->r[3]=R32(c->r[1]+0x00000024u); // 800EA350
  W32(c->r[1]+0x00000008u,c->r[0]); // 800EA354
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800EA358
  c->r[0]=R32(c->r[1]+0x00000028u); // 800EA35C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800EA360
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EA364
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EA368
  c->r[4]=R8(c->r[30]+0x00000083u); // 800EA36C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EA370
  c->lr=0x800EA378u; f_8025E9C0(c); // 800EA374
  c->r[3]=0u+0x80620000u; // 800EA378
  c->r[4]=R8(c->r[30]+0x0000007Cu); // 800EA37C
  c->r[3]=c->r[3]+0x00007688u; // 800EA380
  c->r[5]=c->r[31]|c->r[31]; // 800EA384
  c->r[3]=R32(c->r[3]+0x00000014u); // 800EA388
  c->lr=0x800EA390u; f_80038998(c); // 800EA38C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800EA390
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800EA394
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 800EA398
  c->r[11]=c->r[1]+0x000000A0u; // 800EA39C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 800EA3A0
  c->lr=0x800EA3A8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EA3A4
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800EA3A8
  c->lr=c->r[0]; // 800EA3AC
  c->r[1]=c->r[1]+0x000000C0u; // 800EA3B0
  return; // 800EA3B4
}

// fn_800EA3B8
void f_800EA3B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA3B8
  c->r[0]=c->lr; // 800EA3BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EA3C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EA3C4
  c->r[31]=c->r[3]|c->r[3]; // 800EA3C8
  c->lr=0x800EA3D0u; f_801F51B8(c); // 800EA3CC
  c->r[4]=R32(c->r[31]+0x00000398u); // 800EA3D0
  c->r[0]=0u+0x00000000u; // 800EA3D4
  c->r[7]=0u+0x803D0000u; // 800EA3D8
  c->r[3]=c->r[31]|c->r[31]; // 800EA3DC
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800EA3E0
  c->r[4]=c->r[1]+0x00000008u; // 800EA3E4
  {uint32_t ea=c->r[7]+0x00003F24u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EA3E8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EA3EC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EA3F0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EA3F4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EA3F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EA3FC
  c->lr=0x800EA404u; f_800E9C20(c); // 800EA400
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EA404
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EA408
  c->lr=c->r[0]; // 800EA40C
  c->r[1]=c->r[1]+0x00000020u; // 800EA410
  return; // 800EA414
}

// fn_800EA418
void f_800EA418(Ctx* __restrict c) {
  c->r[6]=0u+0x00000000u; // 800EA418
  goto L_800EA440; // 800EA41C
L_800EA420:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 800EA420
  c->r[5]=c->r[3]+c->r[0]; // 800EA424
  c->r[0]=R8(c->r[5]+0x00000098u); // 800EA428
  cmpu(c,0,c->r[0],0x000000FFu); // 800EA42C
  if (!crb(c,2)) { goto L_800EA43C; } // 800EA430
  W8(c->r[5]+0x00000098u,c->r[4]); // 800EA434
  c->r[6]=0u+0x00000003u; // 800EA438
L_800EA43C:;
  c->r[6]=c->r[6]+0x00000001u; // 800EA43C
L_800EA440:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 800EA440
  cmpu(c,0,c->r[0],0x00000003u); // 800EA444
  if (crb(c,0)) { IRQCHK(c); goto L_800EA420; } // 800EA448
  return; // 800EA44C
}

// fn_800EA450
void f_800EA450(Ctx* __restrict c) {
  return; // 800EA450
}

// fn_800EA454
void f_800EA454(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA454
  c->r[0]=c->lr; // 800EA458
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EA45C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EA460
  c->r[31]=c->r[3]|c->r[3]; // 800EA464
  c->lr=0x800EA46Cu; f_801F4F28(c); // 800EA468
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800EA46C
  cmps(c,0,(int32_t)c->r[0],100); // 800EA470
  if (crb(c,2)) { goto L_800EA47C; } // 800EA474
  goto L_800EA4A8; // 800EA478
L_800EA47C:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800EA47C
  c->r[7]=0u+0x803D0000u; // 800EA480
  c->r[3]=c->r[31]|c->r[31]; // 800EA484
  c->r[4]=c->r[1]+0x00000008u; // 800EA488
  {uint32_t ea=c->r[7]+0x00003F30u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EA48C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EA490
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EA494
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EA498
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EA49C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EA4A0
  c->lr=0x800EA4A8u; f_800E9C20(c); // 800EA4A4
L_800EA4A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EA4A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EA4AC
  c->lr=c->r[0]; // 800EA4B0
  c->r[1]=c->r[1]+0x00000020u; // 800EA4B4
  return; // 800EA4B8
}

// fn_800EA4BC
void f_800EA4BC(Ctx* __restrict c) {
  return; // 800EA4BC
}

// fn_800EA4C0
void f_800EA4C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA4C0
  c->r[0]=c->lr; // 800EA4C4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800EA4C8
  W32(c->r[1]+0x000000BCu,c->r[31]); // 800EA4CC
  W32(c->r[1]+0x000000B8u,c->r[30]); // 800EA4D0
  c->r[30]=0u+0x803A0000u; // 800EA4D4
  c->r[30]=c->r[30]+0xFFFFE968u; // 800EA4D8
  W32(c->r[1]+0x000000B4u,c->r[29]); // 800EA4DC
  c->r[29]=c->r[3]|c->r[3]; // 800EA4E0
  c->r[4]=R8(c->r[3]+0x0000007Du); // 800EA4E4
  cmpu(c,0,c->r[4],0x000000FFu); // 800EA4E8
  if (crb(c,2)) { goto L_800EA648; } // 800EA4EC
  c->r[3]=0u+0x80620000u; // 800EA4F0
  c->r[3]=c->r[3]+0x00007688u; // 800EA4F4
  c->r[3]=R32(c->r[3]+0x00000014u); // 800EA4F8
  c->lr=0x800EA500u; f_8003560C(c); // 800EA4FC
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800EA500
  if (crb(c,2)) { goto L_800EA630; } // 800EA504
  c->r[3]=R32(c->r[29]+0x00000398u); // 800EA508
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800EA50C
  cmps(c,0,(int32_t)c->r[0],0); // 800EA510
  if (!crb(c,2)) { goto L_800EA520; } // 800EA514
  c->r[0]=0u+0x00000001u; // 800EA518
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800EA51C
L_800EA520:;
  c->r[4]=c->r[30]+0x00000060u; // 800EA520
  c->r[6]=c->r[30]+0x00000000u; // 800EA524
  c->r[5]=c->r[30]+0x0000006Cu; // 800EA528
  c->r[31]=R32(c->r[30]+0x00000060u); // 800EA52C
  c->r[12]=R32(c->r[4]+0x00000004u); // 800EA530
  c->r[3]=c->r[29]|c->r[29]; // 800EA534
  c->r[11]=R32(c->r[4]+0x00000008u); // 800EA538
  c->r[4]=0u+0x00000000u; // 800EA53C
  c->r[10]=R32(c->r[30]+0x00000000u); // 800EA540
  c->r[9]=R32(c->r[6]+0x00000004u); // 800EA544
  c->r[8]=R32(c->r[6]+0x00000008u); // 800EA548
  c->r[7]=R32(c->r[30]+0x0000006Cu); // 800EA54C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800EA550
  c->r[0]=R32(c->r[5]+0x00000008u); // 800EA554
  W32(c->r[1]+0x00000038u,c->r[31]); // 800EA558
  W32(c->r[1]+0x0000003Cu,c->r[12]); // 800EA55C
  W32(c->r[1]+0x00000040u,c->r[11]); // 800EA560
  W32(c->r[1]+0x0000002Cu,c->r[10]); // 800EA564
  W32(c->r[1]+0x00000030u,c->r[9]); // 800EA568
  W32(c->r[1]+0x00000034u,c->r[8]); // 800EA56C
  W32(c->r[1]+0x00000020u,c->r[7]); // 800EA570
  W32(c->r[1]+0x00000024u,c->r[6]); // 800EA574
  W32(c->r[1]+0x00000028u,c->r[0]); // 800EA578
  c->lr=0x800EA580u; f_80039840(c); // 800EA57C
  c->r[4]=0u+0x803A0000u; // 800EA580
  c->r[5]=c->r[1]+0x00000078u; // 800EA584
  c->r[4]=c->r[4]+0xFFFFEA08u; // 800EA588
  c->r[6]=0u+0x00000001u; // 800EA58C
  c->r[4]=c->r[4]+0x00000016u; // 800EA590
  c->lr=0x800EA598u; f_80257018(c); // 800EA594
  c->r[4]=c->r[1]+0x00000038u; // 800EA598
  c->r[3]=c->r[1]+0x00000078u; // 800EA59C
  c->r[5]=c->r[4]|c->r[4]; // 800EA5A0
  c->lr=0x800EA5A8u; f_80296750(c); // 800EA5A4
  c->r[6]=R32(c->r[1]+0x00000038u); // 800EA5A8
  c->r[31]=0u+0x805D0000u; // 800EA5AC
  c->r[5]=R32(c->r[1]+0x0000003Cu); // 800EA5B0
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EA5B4
  c->r[0]=R32(c->r[1]+0x00000040u); // 800EA5B8
  c->r[4]=c->r[1]+0x00000014u; // 800EA5BC
  W32(c->r[1]+0x00000014u,c->r[6]); // 800EA5C0
  W32(c->r[1]+0x00000018u,c->r[5]); // 800EA5C4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EA5C8
  c->lr=0x800EA5D0u; f_80038D04(c); // 800EA5CC
  c->r[3]=c->r[1]+0x00000048u; // 800EA5D0
  c->r[4]=c->r[1]+0x0000002Cu; // 800EA5D4
  c->r[5]=c->r[1]+0x00000020u; // 800EA5D8
  c->lr=0x800EA5E0u; f_80251390(c); // 800EA5DC
  c->r[4]=c->r[1]+0x00000048u; // 800EA5E0
  c->r[3]=c->r[1]+0x00000078u; // 800EA5E4
  c->r[5]=c->r[4]|c->r[4]; // 800EA5E8
  c->lr=0x800EA5F0u; f_80295B48(c); // 800EA5EC
  c->r[3]=c->r[1]+0x00000038u; // 800EA5F0
  c->r[4]=c->r[1]+0x0000002Cu; // 800EA5F4
  c->r[5]=c->r[1]+0x00000020u; // 800EA5F8
  c->r[6]=c->r[1]+0x00000048u; // 800EA5FC
  c->r[7]=0u+0x00000000u; // 800EA600
  c->lr=0x800EA608u; f_8002BE64(c); // 800EA604
  c->r[6]=R32(c->r[1]+0x0000002Cu); // 800EA608
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EA60C
  c->r[5]=R32(c->r[1]+0x00000030u); // 800EA610
  c->r[4]=c->r[1]+0x00000008u; // 800EA614
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EA618
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EA61C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EA620
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EA624
  c->lr=0x800EA62Cu; f_800BEDA4(c); // 800EA628
  goto L_800EA648; // 800EA62C
L_800EA630:;
  c->r[3]=R32(c->r[29]+0x00000398u); // 800EA630
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800EA634
  cmpu(c,0,c->r[0],0x00000001u); // 800EA638
  if (!crb(c,2)) { goto L_800EA648; } // 800EA63C
  c->r[0]=0u+0x00000000u; // 800EA640
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800EA644
L_800EA648:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800EA648
  c->r[31]=R32(c->r[1]+0x000000BCu); // 800EA64C
  c->r[30]=R32(c->r[1]+0x000000B8u); // 800EA650
  c->r[29]=R32(c->r[1]+0x000000B4u); // 800EA654
  c->lr=c->r[0]; // 800EA658
  c->r[1]=c->r[1]+0x000000C0u; // 800EA65C
  return; // 800EA660
}

// fn_800EA664
void f_800EA664(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA664
  c->r[0]=c->lr; // 800EA668
  cmps(c,0,(int32_t)c->r[3],0); // 800EA66C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA670
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA674
  c->r[31]=c->r[4]|c->r[4]; // 800EA678
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EA67C
  c->r[30]=c->r[3]|c->r[3]; // 800EA680
  if (crb(c,2)) { goto L_800EA6A0; } // 800EA684
  c->r[4]=0u+0x00000000u; // 800EA688
  c->lr=0x800EA690u; f_8026A06C(c); // 800EA68C
  cmps(c,0,(int32_t)c->r[31],0); // 800EA690
  if (!crb(c,1)) { goto L_800EA6A0; } // 800EA694
  c->r[3]=c->r[30]|c->r[30]; // 800EA698
  c->lr=0x800EA6A0u; f_8026A268(c); // 800EA69C
L_800EA6A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800EA6A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA6A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EA6A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA6AC
  c->lr=c->r[0]; // 800EA6B0
  c->r[1]=c->r[1]+0x00000010u; // 800EA6B4
  return; // 800EA6B8
}

// fn_800EA6BC
void f_800EA6BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA6BC
  c->r[0]=c->lr; // 800EA6C0
  c->r[4]=0u+0x00000000u; // 800EA6C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA6C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA6CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EA6D0
  c->r[30]=c->r[3]|c->r[3]; // 800EA6D4
  c->lr=0x800EA6DCu; f_801F57D0(c); // 800EA6D8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EA6DC
  c->r[3]=c->r[30]|c->r[30]; // 800EA6E0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800EA6E4
  c->ctr=c->r[12]; // 800EA6E8
  if (true) { c->lr=0x800EA6F0u; dispatch(c,c->ctr); } // 800EA6EC
  c->r[3]=c->r[30]|c->r[30]; // 800EA6F0
  c->lr=0x800EA6F8u; f_801F4B94(c); // 800EA6F4
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800EA6F8
  c->r[4]=0u+0x00000003u; // 800EA6FC
  c->r[3]=0u+0x00000056u; // 800EA700
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800EA704
  c->r[0]=c->r[0]|0x00000800u; // 800EA708
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EA70C
  W8(c->r[30]+0x0000006Du,c->r[3]); // 800EA710
  c->r[3]=c->r[30]|c->r[30]; // 800EA714
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800EA718
  c->lr=0x800EA720u; f_801F58BC(c); // 800EA71C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EA720
  c->r[31]=0u+0x00000001u; // 800EA724
  c->r[4]=0u+0x803A0000u; // 800EA728
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800EA72C
  c->r[4]=c->r[4]+0xFFFFEA40u; // 800EA730
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EA734
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EA738
  c->lr=0x800EA740u; f_80256EC4(c); // 800EA73C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800EA740
  c->r[5]=0u+0x805D0000u; // 800EA744
  c->r[4]=c->r[30]+0x0000002Cu; // 800EA748
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800EA74C
  c->r[3]=c->r[5]+0x000078B0u; // 800EA750
  c->lr=0x800EA758u; f_802351CC(c); // 800EA754
  c->r[5]=R32(c->r[30]+0x00000394u); // 800EA758
  c->r[4]=0u+0x00000000u; // 800EA75C
  {uint32_t ea=c->r[2]+0xFFFFA750u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA760
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800EA764
  c->r[3]=c->r[30]|c->r[30]; // 800EA768
  c->f[2]=c->f[1]; // 800EA76C
  c->r[5]=0u+0x00000001u; // 800EA770
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800EA774
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800EA778
  c->r[0]=c->r[0]|0x00000014u; // 800EA77C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800EA780
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EA784
  c->r[12]=R32(c->r[12]+0x00000048u); // 800EA788
  c->ctr=c->r[12]; // 800EA78C
  if (true) { c->lr=0x800EA794u; dispatch(c,c->ctr); } // 800EA790
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EA794
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EA798
  c->lr=0x800EA7A0u; f_802501B0(c); // 800EA79C
  c->r[3]=c->r[30]|c->r[30]; // 800EA7A0
  c->lr=0x800EA7A8u; f_801F56F4(c); // 800EA7A4
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800EA7A8
  W32(c->r[30]+0x00000444u,c->r[31]); // 800EA7AC
  c->lr=0x800EA7B4u; f_8024E174(c); // 800EA7B0
  W32(c->r[30]+0x00000438u,c->r[3]); // 800EA7B4
  c->r[3]=c->r[30]|c->r[30]; // 800EA7B8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EA7BC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EA7C0
  c->ctr=c->r[12]; // 800EA7C4
  if (true) { c->lr=0x800EA7CCu; dispatch(c,c->ctr); } // 800EA7C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA7CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA7D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EA7D4
  c->lr=c->r[0]; // 800EA7D8
  c->r[1]=c->r[1]+0x00000010u; // 800EA7DC
  return; // 800EA7E0
}

// fn_800EA7E4
void f_800EA7E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA7E4
  c->r[0]=c->lr; // 800EA7E8
  c->r[4]=c->r[3]|c->r[3]; // 800EA7EC
  c->r[3]=0u+0x000004D7u; // 800EA7F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA7F4
  c->r[5]=0u+0x00000000u; // 800EA7F8
  c->r[4]=R32(c->r[4]+0x00000394u); // 800EA7FC
  c->r[4]=c->r[4]+0x0000010Cu; // 800EA800
  c->lr=0x800EA808u; f_8024EE50(c); // 800EA804
  c->r[0]=cntlz(c->r[3]); // 800EA808
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800EA80C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA810
  c->lr=c->r[0]; // 800EA814
  c->r[1]=c->r[1]+0x00000010u; // 800EA818
  return; // 800EA81C
}

// fn_800EA820
void f_800EA820(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA820
  c->r[0]=c->lr; // 800EA824
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA828
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA82C
  c->r[31]=c->r[3]|c->r[3]; // 800EA830
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800EA834
  c->r[12]=R32(c->r[12]+0x00000068u); // 800EA838
  c->ctr=c->r[12]; // 800EA83C
  if (true) { c->lr=0x800EA844u; dispatch(c,c->ctr); } // 800EA840
  c->r[3]=c->r[31]|c->r[31]; // 800EA844
  c->lr=0x800EA84Cu; f_801F4C0C(c); // 800EA848
  c->r[3]=0u+0x805D0000u; // 800EA84C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800EA850
  c->lr=0x800EA858u; f_80037AF0(c); // 800EA854
  cmpu(c,0,c->r[3],c->r[31]); // 800EA858
  if (crb(c,2)) { goto L_800EA868; } // 800EA85C
  c->r[3]=c->r[31]|c->r[31]; // 800EA860
  c->lr=0x800EA868u; f_800EAD24(c); // 800EA864
L_800EA868:;
  c->r[3]=c->r[31]|c->r[31]; // 800EA868
  c->lr=0x800EA870u; f_801F56F4(c); // 800EA86C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA870
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA874
  c->lr=c->r[0]; // 800EA878
  c->r[1]=c->r[1]+0x00000010u; // 800EA87C
  return; // 800EA880
}

// fn_800EA884
void f_800EA884(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800EA884
}

// fn_800EA888
void f_800EA888(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA888
  c->r[0]=c->lr; // 800EA88C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800EA890
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800EA894
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800EA898
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800EA89C
  c->r[31]=c->r[3]|c->r[3]; // 800EA8A0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800EA8A4
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800EA8A8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800EA8AC
  if (crb(c,2)) { goto L_800EAAFC; } // 800EA8B0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EA8B4
  c->lr=0x800EA8BCu; f_801F5418(c); // 800EA8B8
  cmps(c,0,(int32_t)c->r[3],0); // 800EA8BC
  if (!crb(c,0)) { goto L_800EAA7C; } // 800EA8C0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800EA8C4
  {uint32_t ea=c->r[2]+0xFFFFA750u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA8C8
  {uint32_t ea=c->r[2]+0xFFFFA754u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA8CC
  c->r[0]=c->r[0]|0x00000080u; // 800EA8D0
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800EA8D4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EA8D8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800EA8DC
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800EA8E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EA8E4
  c->lr=0x800EA8ECu; f_8025037C(c); // 800EA8E8
  c->r[6]=R32(c->r[31]+0x00000394u); // 800EA8EC
  c->r[3]=c->r[31]+0x0000002Cu; // 800EA8F0
  c->r[4]=c->r[31]+0x00000060u; // 800EA8F4
  c->r[5]=c->r[1]+0x0000002Cu; // 800EA8F8
  c->r[6]=c->r[6]+0x000000B0u; // 800EA8FC
  c->r[7]=0u+0x00000000u; // 800EA900
  c->lr=0x800EA908u; f_8002BE64(c); // 800EA904
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA908
  {uint32_t ea=c->r[2]+0xFFFFA758u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA90C
  fcmp(c,0,c->f[1],c->f[0]); // 800EA910
  if (!crb(c,1)) { goto L_800EA91C; } // 800EA914
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800EA918
L_800EA91C:;
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA91C
  {uint32_t ea=c->r[2]+0xFFFFA75Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA920
  fcmp(c,0,c->f[1],c->f[0]); // 800EA924
  if (!crb(c,1)) { goto L_800EA930; } // 800EA928
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800EA92C
L_800EA930:;
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA930
  {uint32_t ea=c->r[2]+0xFFFFA760u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA934
  fcmp(c,0,c->f[1],c->f[0]); // 800EA938
  if (!crb(c,0)) { goto L_800EA944; } // 800EA93C
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800EA940
L_800EA944:;
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800EA944
  c->r[3]=0u+0x805D0000u; // 800EA948
  c->r[0]=R32(c->r[31]+0x00000030u); // 800EA94C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800EA950
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA954
  c->r[4]=c->r[31]|c->r[31]; // 800EA958
  W32(c->r[1]+0x00000014u,c->r[5]); // 800EA95C
  c->r[7]=c->r[1]+0x00000014u; // 800EA960
  c->r[6]=0u+0x00000034u; // 800EA964
  c->r[8]=0u+0x00000000u; // 800EA968
  W32(c->r[1]+0x00000018u,c->r[0]); // 800EA96C
  c->r[0]=R32(c->r[31]+0x00000034u); // 800EA970
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EA974
  c->r[3]=R32(c->r[31]+0x00000438u); // 800EA978
  c->r[5]=R32(c->r[31]+0x00000394u); // 800EA97C
  c->lr=0x800EA984u; f_801FA6A4(c); // 800EA980
  c->r[4]=R32(c->r[31]+0x00000044u); // 800EA984
  c->r[3]=c->r[1]+0x00000020u; // 800EA988
  c->r[0]=R32(c->r[31]+0x00000048u); // 800EA98C
  {uint32_t ea=c->r[2]+0xFFFFA750u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA990
  W32(c->r[1]+0x00000020u,c->r[4]); // 800EA994
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EA998
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 800EA99C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800EA9A0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800EA9A4
  c->lr=0x800EA9ACu; f_80296B0C(c); // 800EA9A8
  {uint32_t ea=c->r[2]+0xFFFFA764u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EA9AC
  c->f[31]=c->f[1]; // 800EA9B0
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA9B4
  c->r[3]=c->r[1]+0x00000020u; // 800EA9B8
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA9BC
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800EA9C0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800EA9C4
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA9C8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800EA9CC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800EA9D0
  c->lr=0x800EA9D8u; f_80296B0C(c); // 800EA9D4
  {uint32_t ea=c->r[2]+0xFFFFA76Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA9D8
  fcmp(c,0,c->f[1],c->f[0]); // 800EA9DC
  if (!crb(c,1)) { goto L_800EA9F4; } // 800EA9E0
  c->r[3]=c->r[1]+0x00000020u; // 800EA9E4
  c->r[4]=c->r[3]|c->r[3]; // 800EA9E8
  c->lr=0x800EA9F0u; f_80296AB0(c); // 800EA9EC
  goto L_800EAA00; // 800EA9F0
L_800EA9F4:;
  {uint32_t ea=c->r[2]+0xFFFFA750u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA9F4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800EA9F8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800EA9FC
L_800EAA00:;
  c->f[1]=c->f[31]; // 800EAA00
  c->r[3]=c->r[1]+0x00000020u; // 800EAA04
  c->r[4]=c->r[3]|c->r[3]; // 800EAA08
  c->lr=0x800EAA10u; f_80296A94(c); // 800EAA0C
  {uint32_t ea=c->r[2]+0xFFFFA770u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EAA10
  c->r[6]=0u+0x803A0000u; // 800EAA14
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EAA18
  c->r[5]=c->r[31]+0x00000044u; // 800EAA1C
  c->r[3]=R32(c->r[31]+0x00000438u); // 800EAA20
  c->r[6]=c->r[6]+0xFFFFEA28u; // 800EAA24
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800EAA28
  c->r[4]=0u+0x00000000u; // 800EAA2C
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800EAA30
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EAA34
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800EAA38
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800EAA3C
  c->lr=0x800EAA44u; f_801FBEC0(c); // 800EAA40
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EAA44
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EAA48
  c->lr=0x800EAA50u; f_8025037C(c); // 800EAA4C
  c->r[7]=0u+0x803D0000u; // 800EAA50
  {uint32_t ea=c->r[7]+0x00003FD8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EAA54
  c->r[3]=c->r[31]|c->r[31]; // 800EAA58
  c->r[4]=c->r[1]+0x00000008u; // 800EAA5C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EAA60
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EAA64
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EAA68
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EAA6C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EAA70
  c->lr=0x800EAA78u; f_800EAB34(c); // 800EAA74
  goto L_800EAAFC; // 800EAA78
L_800EAA7C:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EAA7C
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800EAA80
  cmps(c,0,(int32_t)c->r[0],0); // 800EAA84
  if (crb(c,2)) { goto L_800EAAC0; } // 800EAA88
  c->r[3]=c->r[31]|c->r[31]; // 800EAA8C
  c->lr=0x800EAA94u; f_801F5B14(c); // 800EAA90
  c->r[30]=0u+0x805D0000u; // 800EAA94
  c->r[3]=c->r[30]+0x00003F6Cu; // 800EAA98
  c->lr=0x800EAAA0u; f_800447E4(c); // 800EAA9C
  cmpu(c,0,c->r[3],0x00000001u); // 800EAAA0
  if (!crb(c,2)) { goto L_800EAAB4; } // 800EAAA4
  c->r[0]=0u+0x00000000u; // 800EAAA8
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800EAAAC
  goto L_800EAAC0; // 800EAAB0
L_800EAAB4:;
  c->r[3]=c->r[30]+0x00003F6Cu; // 800EAAB4
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800EAAB8
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800EAABC
L_800EAAC0:;
  c->r[6]=R32(c->r[31]+0x00000394u); // 800EAAC0
  c->r[3]=c->r[31]+0x0000002Cu; // 800EAAC4
  c->r[4]=c->r[31]+0x00000060u; // 800EAAC8
  c->r[5]=c->r[1]+0x0000002Cu; // 800EAACC
  c->r[6]=c->r[6]+0x000000B0u; // 800EAAD0
  c->r[7]=0u+0x00000000u; // 800EAAD4
  c->lr=0x800EAADCu; f_8002BE64(c); // 800EAAD8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EAADC
  c->r[4]=c->r[31]+0x0000002Cu; // 800EAAE0
  c->r[3]=c->r[3]+0x0000005Cu; // 800EAAE4
  c->lr=0x800EAAECu; f_800361A0(c); // 800EAAE8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EAAEC
  c->r[4]=c->r[31]+0x00000060u; // 800EAAF0
  c->r[3]=c->r[3]+0x00000068u; // 800EAAF4
  c->lr=0x800EAAFCu; f_800361A0(c); // 800EAAF8
L_800EAAFC:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EAAFC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EAB00
  c->lr=0x800EAB08u; f_802501B0(c); // 800EAB04
  c->r[3]=c->r[31]|c->r[31]; // 800EAB08
  c->r[4]=0u+0x00000000u; // 800EAB0C
  c->lr=0x800EAB14u; f_801F5244(c); // 800EAB10
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800EAB14
  c->r[0]=R32(c->r[1]+0x00000054u); // 800EAB18
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800EAB1C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800EAB20
  c->r[30]=R32(c->r[1]+0x00000038u); // 800EAB24
  c->lr=c->r[0]; // 800EAB28
  c->r[1]=c->r[1]+0x00000050u; // 800EAB2C
  return; // 800EAB30
}

// fn_800EAB34
void f_800EAB34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAB34
  c->r[0]=c->lr; // 800EAB38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EAB3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAB40
  c->r[31]=c->r[4]|c->r[4]; // 800EAB44
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EAB48
  c->r[30]=c->r[3]|c->r[3]; // 800EAB4C
  c->r[3]=c->r[31]|c->r[31]; // 800EAB50
  c->lr=0x800EAB58u; f_802B9FDC(c); // 800EAB54
  cmps(c,0,(int32_t)c->r[3],0); // 800EAB58
  if (crb(c,2)) { goto L_800EAB78; } // 800EAB5C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800EAB60
  c->r[0]=R32(c->r[31]+0x00000004u); // 800EAB64
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800EAB68
  W32(c->r[30]+0x00000020u,c->r[0]); // 800EAB6C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800EAB70
  W32(c->r[30]+0x00000024u,c->r[0]); // 800EAB74
L_800EAB78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EAB78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAB7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EAB80
  c->lr=c->r[0]; // 800EAB84
  c->r[1]=c->r[1]+0x00000010u; // 800EAB88
  return; // 800EAB8C
}

// fn_800EAB90
void f_800EAB90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAB90
  c->r[0]=c->lr; // 800EAB94
  c->r[4]=0u+0x805D0000u; // 800EAB98
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EAB9C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800EABA0
  c->r[31]=c->r[3]|c->r[3]; // 800EABA4
  c->r[3]=c->r[4]+0x00003F6Cu; // 800EABA8
  c->lr=0x800EABB0u; f_80037AF0(c); // 800EABAC
  cmpu(c,0,c->r[3],c->r[31]); // 800EABB0
  if (!crb(c,2)) { goto L_800EABFC; } // 800EABB4
  c->r[0]=0u+0x00000001u; // 800EABB8
  c->r[3]=c->r[31]|c->r[31]; // 800EABBC
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800EABC0
  c->lr=0x800EABC8u; f_801F5B14(c); // 800EABC4
  c->r[7]=0u+0x803D0000u; // 800EABC8
  {uint32_t ea=c->r[7]+0x00003FE4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EABCC
  c->r[3]=c->r[31]|c->r[31]; // 800EABD0
  c->r[4]=c->r[1]+0x00000014u; // 800EABD4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EABD8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EABDC
  W32(c->r[1]+0x00000014u,c->r[6]); // 800EABE0
  W32(c->r[1]+0x00000018u,c->r[5]); // 800EABE4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EABE8
  c->lr=0x800EABF0u; f_800EAB34(c); // 800EABEC
  c->r[3]=c->r[31]|c->r[31]; // 800EABF0
  c->lr=0x800EABF8u; f_800EA888(c); // 800EABF4
  goto L_800EAC94; // 800EABF8
L_800EABFC:;
  c->r[3]=R32(c->r[31]+0x00000438u); // 800EABFC
  c->r[4]=0u+0x00000000u; // 800EAC00
  c->lr=0x800EAC08u; f_801FAF00(c); // 800EAC04
  cmps(c,0,(int32_t)c->r[3],0); // 800EAC08
  if (!crb(c,2)) { goto L_800EAC74; } // 800EAC0C
  c->r[3]=c->r[31]|c->r[31]; // 800EAC10
  c->r[4]=0u+0x00000038u; // 800EAC14
  c->lr=0x800EAC1Cu; f_801F5AB4(c); // 800EAC18
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EAC1C
  c->r[3]=c->r[31]+0x0000002Cu; // 800EAC20
  c->r[4]=c->r[4]+0x0000005Cu; // 800EAC24
  c->lr=0x800EAC2Cu; f_800361A0(c); // 800EAC28
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EAC2C
  c->r[3]=c->r[31]+0x00000060u; // 800EAC30
  c->r[4]=c->r[4]+0x00000068u; // 800EAC34
  c->lr=0x800EAC3Cu; f_800361A0(c); // 800EAC38
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EAC3C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EAC40
  c->lr=0x800EAC48u; f_8025037C(c); // 800EAC44
  c->r[7]=0u+0x803D0000u; // 800EAC48
  {uint32_t ea=c->r[7]+0x00003FF0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EAC4C
  c->r[3]=c->r[31]|c->r[31]; // 800EAC50
  c->r[4]=c->r[1]+0x00000008u; // 800EAC54
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EAC58
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EAC5C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EAC60
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EAC64
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EAC68
  c->lr=0x800EAC70u; f_800EAB34(c); // 800EAC6C
  goto L_800EAC94; // 800EAC70
L_800EAC74:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EAC74
  c->r[3]=c->r[31]+0x0000002Cu; // 800EAC78
  c->r[4]=c->r[4]+0x0000005Cu; // 800EAC7C
  c->lr=0x800EAC84u; f_800361A0(c); // 800EAC80
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EAC84
  c->r[3]=c->r[31]+0x00000060u; // 800EAC88
  c->r[4]=c->r[4]+0x00000068u; // 800EAC8C
  c->lr=0x800EAC94u; f_800361A0(c); // 800EAC90
L_800EAC94:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EAC94
  c->r[3]=c->r[31]+0x0000002Cu; // 800EAC98
  c->r[4]=c->r[4]+0x0000005Cu; // 800EAC9C
  c->lr=0x800EACA4u; f_800361A0(c); // 800EACA0
  c->r[3]=c->r[31]|c->r[31]; // 800EACA4
  c->r[4]=0u+0x00000000u; // 800EACA8
  c->lr=0x800EACB0u; f_801F7C00(c); // 800EACAC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EACB0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EACB4
  c->lr=0x800EACBCu; f_802501B0(c); // 800EACB8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EACBC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800EACC0
  c->lr=c->r[0]; // 800EACC4
  c->r[1]=c->r[1]+0x00000030u; // 800EACC8
  return; // 800EACCC
}

// fn_800EACD0
void f_800EACD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EACD0
  c->r[0]=c->lr; // 800EACD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EACD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EACDC
  c->r[31]=c->r[3]|c->r[3]; // 800EACE0
  c->lr=0x800EACE8u; f_801F51B8(c); // 800EACE4
  c->r[7]=0u+0x803D0000u; // 800EACE8
  {uint32_t ea=c->r[7]+0x00003FFCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800EACEC
  c->r[3]=c->r[31]|c->r[31]; // 800EACF0
  c->r[4]=c->r[1]+0x00000008u; // 800EACF4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EACF8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EACFC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EAD00
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EAD04
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EAD08
  c->lr=0x800EAD10u; f_800EAB34(c); // 800EAD0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EAD10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EAD14
  c->lr=c->r[0]; // 800EAD18
  c->r[1]=c->r[1]+0x00000020u; // 800EAD1C
  return; // 800EAD20
}

// fn_800EAD24
void f_800EAD24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAD24
  c->r[0]=c->lr; // 800EAD28
  W32(c->r[1]+0x00000084u,c->r[0]); // 800EAD2C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800EAD30
  W32(c->r[1]+0x00000078u,c->r[30]); // 800EAD34
  c->r[30]=c->r[3]|c->r[3]; // 800EAD38
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800EAD3C
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 800EAD40
  cmps(c,0,(int32_t)c->r[0],128); // 800EAD44
  if (!crb(c,2)) { goto L_800EAD70; } // 800EAD48
  c->r[3]=0u+0x80620000u; // 800EAD4C
  c->r[3]=c->r[3]+0x00007688u; // 800EAD50
  c->r[3]=R32(c->r[3]+0x00000014u); // 800EAD54
  cmps(c,0,(int32_t)c->r[3],0); // 800EAD58
  if (crb(c,2)) { goto L_800EAD70; } // 800EAD5C
  c->r[4]=0u+0x00000002u; // 800EAD60
  c->lr=0x800EAD68u; f_80037670(c); // 800EAD64
  cmps(c,0,(int32_t)c->r[3],0); // 800EAD68
  if (!crb(c,2)) { goto L_800EADC0; } // 800EAD6C
L_800EAD70:;
  c->r[6]=0u+0x803A0000u; // 800EAD70
  {uint32_t ea=c->r[6]+0xFFFFEA34u; c->r[7]=R32(ea); c->r[6]=ea;} // 800EAD74
  c->r[31]=0u+0x80550000u; // 800EAD78
  c->r[5]=c->r[30]|c->r[30]; // 800EAD7C
  c->r[4]=R32(c->r[6]+0x00000004u); // 800EAD80
  c->r[31]=c->r[31]+0x00003D60u; // 800EAD84
  c->r[0]=R32(c->r[6]+0x00000008u); // 800EAD88
  c->r[3]=c->r[31]+0x00000010u; // 800EAD8C
  W32(c->r[1]+0x00000008u,c->r[7]); // 800EAD90
  c->r[6]=c->r[30]+0x0000002Cu; // 800EAD94
  c->r[7]=c->r[1]+0x00000008u; // 800EAD98
  c->r[8]=c->r[30]+0x00000060u; // 800EAD9C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800EADA0
  c->r[9]=c->r[1]+0x00000018u; // 800EADA4
  c->r[4]=0u+0x000001FFu; // 800EADA8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EADAC
  c->lr=0x800EADB4u; f_80226578(c); // 800EADB0
  c->r[3]=c->r[31]+0x00000010u; // 800EADB4
  c->r[4]=c->r[1]+0x00000018u; // 800EADB8
  c->lr=0x800EADC0u; f_80226D68(c); // 800EADBC
L_800EADC0:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800EADC0
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800EADC4
  c->r[30]=R32(c->r[1]+0x00000078u); // 800EADC8
  c->lr=c->r[0]; // 800EADCC
  c->r[1]=c->r[1]+0x00000080u; // 800EADD0
  return; // 800EADD4
}

// fn_800EADD8
void f_800EADD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EADD8
  c->r[0]=c->lr; // 800EADDC
  cmps(c,0,(int32_t)c->r[3],0); // 800EADE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EADE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EADE8
  c->r[31]=c->r[4]|c->r[4]; // 800EADEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EADF0
  c->r[30]=c->r[3]|c->r[3]; // 800EADF4
  if (crb(c,2)) { goto L_800EAE14; } // 800EADF8
  c->r[4]=0u+0x00000000u; // 800EADFC
  c->lr=0x800EAE04u; f_8026A06C(c); // 800EAE00
  cmps(c,0,(int32_t)c->r[31],0); // 800EAE04
  if (!crb(c,1)) { goto L_800EAE14; } // 800EAE08
  c->r[3]=c->r[30]|c->r[30]; // 800EAE0C
  c->lr=0x800EAE14u; f_8026A268(c); // 800EAE10
L_800EAE14:;
  c->r[3]=c->r[30]|c->r[30]; // 800EAE14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAE18
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EAE1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EAE20
  c->lr=c->r[0]; // 800EAE24
  c->r[1]=c->r[1]+0x00000010u; // 800EAE28
  return; // 800EAE2C
}

// fn_800EAE30
void f_800EAE30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAE30
  c->r[0]=c->lr; // 800EAE34
  c->r[4]=0u+0x00000000u; // 800EAE38
  W32(c->r[1]+0x00000054u,c->r[0]); // 800EAE3C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800EAE40
  c->r[31]=c->r[3]|c->r[3]; // 800EAE44
  W32(c->r[1]+0x00000048u,c->r[30]); // 800EAE48
  W32(c->r[1]+0x00000044u,c->r[29]); // 800EAE4C
  c->lr=0x800EAE54u; f_801F57D0(c); // 800EAE50
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EAE54
  c->r[3]=c->r[31]|c->r[31]; // 800EAE58
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800EAE5C
  c->ctr=c->r[12]; // 800EAE60
  if (true) { c->lr=0x800EAE68u; dispatch(c,c->ctr); } // 800EAE64
  c->r[3]=c->r[31]|c->r[31]; // 800EAE68
  c->lr=0x800EAE70u; f_801F4B94(c); // 800EAE6C
  c->r[3]=0u+0x00000003u; // 800EAE70
  c->r[0]=0u+0x00000057u; // 800EAE74
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800EAE78
  c->r[3]=c->r[31]|c->r[31]; // 800EAE7C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EAE80
  W8(c->r[31]+0x0000006Du,c->r[0]); // 800EAE84
  c->lr=0x800EAE8Cu; f_801F58BC(c); // 800EAE88
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EAE8C
  c->r[29]=0u+0x00000001u; // 800EAE90
  c->r[30]=0u+0x803A0000u; // 800EAE94
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800EAE98
  c->r[30]=c->r[30]+0xFFFFEA50u; // 800EAE9C
  c->r[4]=c->r[30]+0x00000004u; // 800EAEA0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EAEA4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EAEA8
  c->lr=0x800EAEB0u; f_80256EC4(c); // 800EAEAC
  c->r[6]=R32(c->r[31]+0x00000394u); // 800EAEB0
  c->r[5]=0u+0x805D0000u; // 800EAEB4
  c->r[4]=c->r[31]+0x0000002Cu; // 800EAEB8
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800EAEBC
  c->r[3]=c->r[5]+0x000078B0u; // 800EAEC0
  c->lr=0x800EAEC8u; f_802351CC(c); // 800EAEC4
  c->r[5]=R32(c->r[31]+0x00000394u); // 800EAEC8
  c->r[4]=0u+0x00000001u; // 800EAECC
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EAED0
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800EAED4
  c->r[3]=c->r[31]|c->r[31]; // 800EAED8
  c->f[2]=c->f[1]; // 800EAEDC
  c->r[5]=0u+0x00000001u; // 800EAEE0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800EAEE4
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800EAEE8
  c->r[0]=c->r[0]|0x00000804u; // 800EAEEC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800EAEF0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EAEF4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800EAEF8
  c->ctr=c->r[12]; // 800EAEFC
  if (true) { c->lr=0x800EAF04u; dispatch(c,c->ctr); } // 800EAF00
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EAF04
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EAF08
  c->lr=0x800EAF10u; f_802501B0(c); // 800EAF0C
  c->r[3]=c->r[31]|c->r[31]; // 800EAF10
  c->lr=0x800EAF18u; f_801F56F4(c); // 800EAF14
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EAF18
  c->r[3]=c->r[31]|c->r[31]; // 800EAF1C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EAF20
  c->ctr=c->r[12]; // 800EAF24
  if (true) { c->lr=0x800EAF2Cu; dispatch(c,c->ctr); } // 800EAF28
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EAF2C
  c->r[3]=c->r[31]+0x0000000Cu; // 800EAF30
  c->lr=0x800EAF38u; f_80037668(c); // 800EAF34
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EAF38
  c->r[4]=c->r[30]+0x0000000Du; // 800EAF3C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EAF40
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800EAF44
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EAF48
  c->lr=0x800EAF50u; f_80256EC4(c); // 800EAF4C
  c->r[0]=0u+0x000000FFu; // 800EAF50
  W8(c->r[31]+0x00000074u,c->r[3]); // 800EAF54
  c->r[30]=0u+0x80550000u; // 800EAF58
  c->r[5]=0u+0x00000000u; // 800EAF5C
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 800EAF60
  c->r[3]=c->r[30]+0xFFFFC848u; // 800EAF64
  c->r[6]=0u+0x00000000u; // 800EAF68
  c->r[4]=R32(c->r[13]+0xFFFF8618u); // 800EAF6C
  c->lr=0x800EAF74u; f_8018D3E4(c); // 800EAF70
  cmpu(c,0,c->r[3],0x000000FFu); // 800EAF74
  W32(c->r[31]+0x0000007Cu,c->r[3]); // 800EAF78
  if (crb(c,2)) { goto L_800EAFB4; } // 800EAF7C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EAF80
  c->r[5]=c->r[1]+0x00000008u; // 800EAF84
  c->r[4]=R8(c->r[31]+0x00000074u); // 800EAF88
  c->r[6]=0u+0x00000001u; // 800EAF8C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EAF90
  c->lr=0x800EAF98u; f_80257074(c); // 800EAF94
  c->r[4]=R32(c->r[31]+0x0000007Cu); // 800EAF98
  c->r[3]=c->r[30]+0xFFFFC848u; // 800EAF9C
  c->r[5]=c->r[1]+0x00000008u; // 800EAFA0
  c->lr=0x800EAFA8u; f_8018DEB8(c); // 800EAFA4
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800EAFA8
  c->r[0]=c->r[0]|0x00002000u; // 800EAFAC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800EAFB0
L_800EAFB4:;
  {uint32_t ea=c->r[2]+0xFFFFA784u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EAFB4
  c->r[4]=0u+0x00000000u; // 800EAFB8
  c->r[3]=0u+0x00000005u; // 800EAFBC
  c->r[0]=0u+0x000000FFu; // 800EAFC0
  W8(c->r[31]+0x00000075u,c->r[4]); // 800EAFC4
  W8(c->r[31]+0x00000076u,c->r[3]); // 800EAFC8
  W8(c->r[31]+0x00000077u,c->r[0]); // 800EAFCC
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800EAFD0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800EAFD4
  c->r[30]=R32(c->r[1]+0x00000048u); // 800EAFD8
  c->r[29]=R32(c->r[1]+0x00000044u); // 800EAFDC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800EAFE0
  c->lr=c->r[0]; // 800EAFE4
  c->r[1]=c->r[1]+0x00000050u; // 800EAFE8
  return; // 800EAFEC
}

// fn_800EAFF0
void f_800EAFF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAFF0
  c->r[0]=c->lr; // 800EAFF4
  c->r[4]=c->r[3]|c->r[3]; // 800EAFF8
  c->r[3]=0u+0x000002DEu; // 800EAFFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB000
  c->r[5]=0u+0x00000000u; // 800EB004
  c->r[4]=R32(c->r[4]+0x00000394u); // 800EB008
  c->r[4]=c->r[4]+0x0000010Cu; // 800EB00C
  c->lr=0x800EB014u; f_8024EE50(c); // 800EB010
  c->r[0]=cntlz(c->r[3]); // 800EB014
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800EB018
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB01C
  c->lr=c->r[0]; // 800EB020
  c->r[1]=c->r[1]+0x00000010u; // 800EB024
  return; // 800EB028
}

// fn_800EB02C
void f_800EB02C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB02C
  c->r[0]=c->lr; // 800EB030
  W32(c->r[1]+0x00000054u,c->r[0]); // 800EB034
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800EB038
  W32(c->r[1]+0x00000048u,c->r[30]); // 800EB03C
  c->r[30]=c->r[3]|c->r[3]; // 800EB040
  c->lr=0x800EB048u; f_800EB2AC(c); // 800EB044
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EB048
  c->r[3]=c->r[30]|c->r[30]; // 800EB04C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800EB050
  c->ctr=c->r[12]; // 800EB054
  if (true) { c->lr=0x800EB05Cu; dispatch(c,c->ctr); } // 800EB058
  c->r[3]=c->r[30]|c->r[30]; // 800EB05C
  c->lr=0x800EB064u; f_801F4C0C(c); // 800EB060
  c->r[3]=c->r[30]|c->r[30]; // 800EB064
  c->lr=0x800EB06Cu; f_801F56F4(c); // 800EB068
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800EB06C
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800EB070
  if (!crb(c,2)) { goto L_800EB100; } // 800EB074
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800EB078
  c->lr=0x800EB080u; f_80035554(c); // 800EB07C
  {uint32_t ea=c->r[30]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EB080
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB084
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 800EB088
  fcmp(c,0,c->f[2],c->f[0]); // 800EB08C
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[2]);} // 800EB090
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800EB094
  if (!crb(c,2)) { goto L_800EB0D0; } // 800EB098
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 800EB09C
  cmpu(c,0,c->r[4],0x000000FFu); // 800EB0A0
  if (crb(c,2)) { goto L_800EB100; } // 800EB0A4
  c->r[31]=0u+0x80550000u; // 800EB0A8
  c->r[5]=0u+0x00000000u; // 800EB0AC
  c->r[3]=c->r[31]+0xFFFFC848u; // 800EB0B0
  c->lr=0x800EB0B8u; f_8018EBA0(c); // 800EB0B4
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 800EB0B8
  c->r[3]=c->r[31]+0xFFFFC848u; // 800EB0BC
  c->lr=0x800EB0C4u; f_8018D738(c); // 800EB0C0
  c->r[0]=0u+0x000000FFu; // 800EB0C4
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 800EB0C8
  goto L_800EB100; // 800EB0CC
L_800EB0D0:;
  {uint32_t ea=c->r[2]+0xFFFFA784u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB0D0
  c->r[3]=0u+0x80550000u; // 800EB0D4
  {uint32_t ea=c->r[2]+0xFFFFA788u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB0D8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800EB0DC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800EB0E0
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 800EB0E4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800EB0E8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800EB0EC
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 800EB0F0
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800EB0F4
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800EB0F8
  c->lr=0x800EB100u; f_8018EBA0(c); // 800EB0FC
L_800EB100:;
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 800EB100
  cmpu(c,0,c->r[4],0x000000FFu); // 800EB104
  if (crb(c,2)) { goto L_800EB154; } // 800EB108
  c->r[31]=0u+0x80550000u; // 800EB10C
  c->r[3]=c->r[31]+0xFFFFC848u; // 800EB110
  c->lr=0x800EB118u; f_8018D900(c); // 800EB114
  cmps(c,0,(int32_t)c->r[3],0); // 800EB118
  if (crb(c,2)) { goto L_800EB14C; } // 800EB11C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB120
  c->r[5]=c->r[1]+0x00000008u; // 800EB124
  c->r[4]=R8(c->r[30]+0x00000074u); // 800EB128
  c->r[6]=0u+0x00000001u; // 800EB12C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EB130
  c->lr=0x800EB138u; f_80257074(c); // 800EB134
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 800EB138
  c->r[3]=c->r[31]+0xFFFFC848u; // 800EB13C
  c->r[5]=c->r[1]+0x00000008u; // 800EB140
  c->lr=0x800EB148u; f_8018DEB8(c); // 800EB144
  goto L_800EB154; // 800EB148
L_800EB14C:;
  c->r[0]=0u+0x000000FFu; // 800EB14C
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 800EB150
L_800EB154:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800EB154
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800EB158
  c->r[30]=R32(c->r[1]+0x00000048u); // 800EB15C
  c->lr=c->r[0]; // 800EB160
  c->r[1]=c->r[1]+0x00000050u; // 800EB164
  return; // 800EB168
}

// fn_800EB16C
void f_800EB16C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB16C
  c->r[0]=c->lr; // 800EB170
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB174
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB178
  c->r[31]=c->r[3]|c->r[3]; // 800EB17C
  c->r[4]=R32(c->r[3]+0x0000007Cu); // 800EB180
  cmpu(c,0,c->r[4],0x000000FFu); // 800EB184
  if (crb(c,2)) { goto L_800EB198; } // 800EB188
  c->r[3]=0u+0x80550000u; // 800EB18C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800EB190
  c->lr=0x800EB198u; f_8018D738(c); // 800EB194
L_800EB198:;
  c->r[3]=c->r[31]|c->r[31]; // 800EB198
  c->lr=0x800EB1A0u; f_801F4C78(c); // 800EB19C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB1A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB1A4
  c->lr=c->r[0]; // 800EB1A8
  c->r[1]=c->r[1]+0x00000010u; // 800EB1AC
  return; // 800EB1B0
}

// fn_800EB1B4
void f_800EB1B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB1B4
  c->r[0]=c->lr; // 800EB1B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB1BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB1C0
  c->r[31]=c->r[3]|c->r[3]; // 800EB1C4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EB1C8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EB1CC
  c->lr=0x800EB1D4u; f_802501B0(c); // 800EB1D0
  c->r[3]=c->r[31]|c->r[31]; // 800EB1D4
  c->r[4]=0u+0x00000000u; // 800EB1D8
  c->lr=0x800EB1E0u; f_801F5244(c); // 800EB1DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB1E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB1E4
  c->lr=c->r[0]; // 800EB1E8
  c->r[1]=c->r[1]+0x00000010u; // 800EB1EC
  return; // 800EB1F0
}

// fn_800EB1F4
void f_800EB1F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB1F4
  c->r[0]=c->lr; // 800EB1F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB1FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EB200
  c->r[31]=c->r[3]|c->r[3]; // 800EB204
  c->lr=0x800EB20Cu; f_801F51B8(c); // 800EB208
  c->r[0]=0u+0x00000000u; // 800EB20C
  c->r[7]=0u+0x803D0000u; // 800EB210
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800EB214
  c->r[3]=c->r[31]|c->r[31]; // 800EB218
  c->r[4]=c->r[1]+0x00000008u; // 800EB21C
  {uint32_t ea=c->r[7]+0x000040A0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EB220
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EB224
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EB228
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EB22C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EB230
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EB234
  c->lr=0x800EB23Cu; f_800EB250(c); // 800EB238
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB23C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EB240
  c->lr=c->r[0]; // 800EB244
  c->r[1]=c->r[1]+0x00000020u; // 800EB248
  return; // 800EB24C
}

// fn_800EB250
void f_800EB250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB250
  c->r[0]=c->lr; // 800EB254
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB25C
  c->r[31]=c->r[4]|c->r[4]; // 800EB260
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB264
  c->r[30]=c->r[3]|c->r[3]; // 800EB268
  c->r[3]=c->r[31]|c->r[31]; // 800EB26C
  c->lr=0x800EB274u; f_802B9FDC(c); // 800EB270
  cmps(c,0,(int32_t)c->r[3],0); // 800EB274
  if (crb(c,2)) { goto L_800EB294; } // 800EB278
  c->r[3]=R32(c->r[31]+0x00000000u); // 800EB27C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800EB280
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800EB284
  W32(c->r[30]+0x00000020u,c->r[0]); // 800EB288
  c->r[0]=R32(c->r[31]+0x00000008u); // 800EB28C
  W32(c->r[30]+0x00000024u,c->r[0]); // 800EB290
L_800EB294:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB294
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB298
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB29C
  c->lr=c->r[0]; // 800EB2A0
  c->r[1]=c->r[1]+0x00000010u; // 800EB2A4
  return; // 800EB2A8
}

// fn_800EB2AC
void f_800EB2AC(Ctx* __restrict c) {
  return; // 800EB2AC
}

// fn_800EB2B0
void f_800EB2B0(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800EB2B0
}

// fn_800EB2B4
void f_800EB2B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB2B4
  c->r[0]=c->lr; // 800EB2B8
  cmps(c,0,(int32_t)c->r[3],0); // 800EB2BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB2C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB2C4
  c->r[31]=c->r[4]|c->r[4]; // 800EB2C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB2CC
  c->r[30]=c->r[3]|c->r[3]; // 800EB2D0
  if (crb(c,2)) { goto L_800EB2F0; } // 800EB2D4
  c->r[4]=0u+0x00000000u; // 800EB2D8
  c->lr=0x800EB2E0u; f_8026A06C(c); // 800EB2DC
  cmps(c,0,(int32_t)c->r[31],0); // 800EB2E0
  if (!crb(c,1)) { goto L_800EB2F0; } // 800EB2E4
  c->r[3]=c->r[30]|c->r[30]; // 800EB2E8
  c->lr=0x800EB2F0u; f_8026A268(c); // 800EB2EC
L_800EB2F0:;
  c->r[3]=c->r[30]|c->r[30]; // 800EB2F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB2F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB2F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB2FC
  c->lr=c->r[0]; // 800EB300
  c->r[1]=c->r[1]+0x00000010u; // 800EB304
  return; // 800EB308
}

// fn_800EB30C
void f_800EB30C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB30C
  c->r[0]=c->lr; // 800EB310
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB314
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EB318
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EB31C
  c->r[4]=0u+0x00000000u; // 800EB320
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB324
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB328
  c->r[30]=c->r[3]|c->r[3]; // 800EB32C
  c->lr=0x800EB334u; f_801F57D0(c); // 800EB330
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EB334
  c->r[3]=c->r[30]|c->r[30]; // 800EB338
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800EB33C
  c->ctr=c->r[12]; // 800EB340
  if (true) { c->lr=0x800EB348u; dispatch(c,c->ctr); } // 800EB344
  c->r[3]=c->r[30]|c->r[30]; // 800EB348
  c->lr=0x800EB350u; f_801F4B94(c); // 800EB34C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800EB350
  c->r[4]=0u+0x00000003u; // 800EB354
  {uint32_t ea=c->r[2]+0xFFFFA798u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB358
  c->r[5]=0u+0x00000058u; // 800EB35C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800EB360
  c->r[3]=0u+0x80550000u; // 800EB364
  c->r[0]=c->r[0]|0x00000810u; // 800EB368
  c->f[3]=c->f[1]; // 800EB36C
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800EB370
  c->r[3]=c->r[3]+0x00003D60u; // 800EB374
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EB378
  c->r[4]=c->r[30]+0x0000002Cu; // 800EB37C
  W8(c->r[30]+0x0000006Du,c->r[5]); // 800EB380
  {uint32_t ea=c->r[2]+0xFFFFA79Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EB384
  c->r[5]=c->r[30]+0x00000030u; // 800EB388
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800EB38C
  c->r[6]=0u+0x00000000u; // 800EB390
  c->r[7]=0u+0x00000000u; // 800EB394
  c->lr=0x800EB39Cu; f_801D5488(c); // 800EB398
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EB39C
  c->r[3]=c->r[30]|c->r[30]; // 800EB3A0
  c->lr=0x800EB3A8u; f_801F58BC(c); // 800EB3A4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB3A8
  c->r[31]=0u+0x00000001u; // 800EB3AC
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800EB3B0
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB3B4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB3B8
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800EB3BC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800EB3C0
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800EB3C4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EB3C8
  c->lr=0x800EB3D0u; f_802501B0(c); // 800EB3CC
  c->r[3]=0u+0x805D0000u; // 800EB3D0
  c->r[4]=c->r[30]+0x0000002Cu; // 800EB3D4
  c->r[3]=c->r[3]+0x000078B0u; // 800EB3D8
  c->lr=0x800EB3E0u; f_802351CC(c); // 800EB3DC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EB3E0
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800EB3E4
  c->r[3]=c->r[30]|c->r[30]; // 800EB3E8
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800EB3EC
  c->lr=0x800EB3F4u; f_801F56F4(c); // 800EB3F0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EB3F4
  c->r[3]=c->r[30]|c->r[30]; // 800EB3F8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EB3FC
  c->ctr=c->r[12]; // 800EB400
  if (true) { c->lr=0x800EB408u; dispatch(c,c->ctr); } // 800EB404
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800EB408
  W32(c->r[30]+0x00000444u,c->r[31]); // 800EB40C
  c->lr=0x800EB414u; f_8024E174(c); // 800EB410
  W32(c->r[30]+0x00000438u,c->r[3]); // 800EB414
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800EB418
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EB41C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB420
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB424
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB428
  c->lr=c->r[0]; // 800EB42C
  c->r[1]=c->r[1]+0x00000020u; // 800EB430
  return; // 800EB434
}

// fn_800EB438
void f_800EB438(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB438
  c->r[0]=c->lr; // 800EB43C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB440
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB444
  c->r[31]=0u+0x805D0000u; // 800EB448
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB44C
  c->r[30]=c->r[3]|c->r[3]; // 800EB450
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EB454
  c->lr=0x800EB45Cu; f_80045264(c); // 800EB458
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800EB45C
  cmpu(c,0,c->r[0],0x0000003Bu); // 800EB460
  if (!crb(c,2)) { goto L_800EB4A0; } // 800EB464
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EB468
  c->lr=0x800EB470u; f_80037AF0(c); // 800EB46C
  cmpu(c,0,c->r[3],c->r[30]); // 800EB470
  if (!crb(c,2)) { goto L_800EB4A0; } // 800EB474
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800EB478
  cmps(c,0,(int32_t)c->r[0],101); // 800EB47C
  if (crb(c,2)) { goto L_800EB4A0; } // 800EB480
  {uint32_t ea=c->r[2]+0xFFFFA798u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB484
  c->r[3]=c->r[30]|c->r[30]; // 800EB488
  c->r[4]=0u+0x00000065u; // 800EB48C
  c->r[5]=0u+0x00000000u; // 800EB490
  c->r[6]=0u+0x00000000u; // 800EB494
  c->r[7]=0u+0x00000000u; // 800EB498
  c->lr=0x800EB4A0u; f_801F4D44(c); // 800EB49C
L_800EB4A0:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EB4A0
  c->r[3]=c->r[30]|c->r[30]; // 800EB4A4
  c->r[12]=R32(c->r[12]+0x00000068u); // 800EB4A8
  c->ctr=c->r[12]; // 800EB4AC
  if (true) { c->lr=0x800EB4B4u; dispatch(c,c->ctr); } // 800EB4B0
  c->r[3]=c->r[30]|c->r[30]; // 800EB4B4
  c->lr=0x800EB4BCu; f_801F4C0C(c); // 800EB4B8
  c->r[3]=c->r[30]|c->r[30]; // 800EB4BC
  c->lr=0x800EB4C4u; f_800EBCEC(c); // 800EB4C0
  c->r[3]=c->r[30]|c->r[30]; // 800EB4C4
  c->lr=0x800EB4CCu; f_801F56F4(c); // 800EB4C8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB4CC
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800EB4D0
  cmps(c,0,(int32_t)c->r[0],0); // 800EB4D4
  if (crb(c,2)) { goto L_800EB550; } // 800EB4D8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800EB4DC
  cmps(c,0,(int32_t)c->r[0],0); // 800EB4E0
  if (crb(c,2)) { goto L_800EB550; } // 800EB4E4
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800EB4E8
  cmps(c,0,(int32_t)c->r[0],0); // 800EB4EC
  if (crb(c,2)) { goto L_800EB50C; } // 800EB4F0
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800EB4F4
  cmps(c,0,(int32_t)c->r[0],0); // 800EB4F8
  if (!crb(c,2)) { goto L_800EB50C; } // 800EB4FC
  c->r[4]=c->r[3]+0x000000B0u; // 800EB500
  c->lr=0x800EB508u; f_80250F18(c); // 800EB504
  goto L_800EB528; // 800EB508
L_800EB50C:;
  c->r[3]=c->r[3]+0x0000005Cu; // 800EB50C
  c->r[4]=c->r[30]+0x0000002Cu; // 800EB510
  c->lr=0x800EB518u; f_800361A0(c); // 800EB514
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB518
  c->r[4]=c->r[30]+0x00000060u; // 800EB51C
  c->r[3]=c->r[3]+0x00000068u; // 800EB520
  c->lr=0x800EB528u; f_800361A0(c); // 800EB524
L_800EB528:;
  c->r[3]=c->r[30]|c->r[30]; // 800EB528
  c->lr=0x800EB530u; f_80040264(c); // 800EB52C
  cmps(c,0,(int32_t)c->r[3],0); // 800EB530
  if (crb(c,2)) { goto L_800EB544; } // 800EB534
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EB538
  c->r[3]=c->r[30]|c->r[30]; // 800EB53C
  c->lr=0x800EB544u; f_801F58FC(c); // 800EB540
L_800EB544:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB544
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EB548
  c->lr=0x800EB550u; f_8025037C(c); // 800EB54C
L_800EB550:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB550
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB554
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB558
  c->lr=c->r[0]; // 800EB55C
  c->r[1]=c->r[1]+0x00000010u; // 800EB560
  return; // 800EB564
}

// fn_800EB568
void f_800EB568(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB568
  c->r[0]=c->lr; // 800EB56C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EB570
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800EB574
  W32(c->r[1]+0x00000038u,c->r[30]); // 800EB578
  c->r[30]=c->r[3]|c->r[3]; // 800EB57C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EB580
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EB584
  c->lr=0x800EB58Cu; f_802501B0(c); // 800EB588
  c->r[3]=c->r[30]|c->r[30]; // 800EB58C
  c->r[4]=0u+0x00000000u; // 800EB590
  c->lr=0x800EB598u; f_801F5244(c); // 800EB594
  c->r[6]=R32(c->r[30]+0x00000394u); // 800EB598
  c->r[3]=c->r[1]+0x0000002Cu; // 800EB59C
  c->r[4]=c->r[1]+0x00000020u; // 800EB5A0
  c->r[5]=c->r[1]+0x00000014u; // 800EB5A4
  c->r[6]=c->r[6]+0x000000B0u; // 800EB5A8
  c->r[7]=0u+0x00000000u; // 800EB5AC
  c->lr=0x800EB5B4u; f_8002BE64(c); // 800EB5B0
  c->r[3]=c->r[30]+0x0000002Cu; // 800EB5B4
  c->r[4]=c->r[1]+0x0000002Cu; // 800EB5B8
  c->lr=0x800EB5C0u; f_800361A0(c); // 800EB5BC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EB5C0
  c->r[3]=c->r[30]|c->r[30]; // 800EB5C4
  c->lr=0x800EB5CCu; f_801F5418(c); // 800EB5C8
  cmps(c,0,(int32_t)c->r[3],0); // 800EB5CC
  if (!crb(c,0)) { goto L_800EB61C; } // 800EB5D0
  c->r[4]=R16(c->r[30]+0x000003BEu); // 800EB5D4
  c->r[3]=0u+0x00000001u; // 800EB5D8
  c->r[0]=0u+0x00000064u; // 800EB5DC
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800EB5E0
  c->r[4]=c->r[4]|0x00000080u; // 800EB5E4
  c->r[7]=0u+0x803D0000u; // 800EB5E8
  W16(c->r[30]+0x000003BEu,c->r[4]); // 800EB5EC
  c->r[3]=c->r[30]|c->r[30]; // 800EB5F0
  c->r[4]=c->r[1]+0x00000008u; // 800EB5F4
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800EB5F8
  {uint32_t ea=c->r[7]+0x00004148u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EB5FC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EB600
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EB604
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EB608
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EB60C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EB610
  c->lr=0x800EB618u; f_800EB668(c); // 800EB614
  goto L_800EB650; // 800EB618
L_800EB61C:;
  c->r[31]=0u+0x805D0000u; // 800EB61C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EB620
  c->lr=0x800EB628u; f_800447E4(c); // 800EB624
  cmpu(c,0,c->r[3],0x00000001u); // 800EB628
  if (!crb(c,2)) { goto L_800EB63C; } // 800EB62C
  c->r[0]=0u+0x00000000u; // 800EB630
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800EB634
  goto L_800EB648; // 800EB638
L_800EB63C:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EB63C
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800EB640
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800EB644
L_800EB648:;
  c->r[3]=c->r[30]|c->r[30]; // 800EB648
  c->lr=0x800EB650u; f_801F5B14(c); // 800EB64C
L_800EB650:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800EB650
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800EB654
  c->r[30]=R32(c->r[1]+0x00000038u); // 800EB658
  c->lr=c->r[0]; // 800EB65C
  c->r[1]=c->r[1]+0x00000040u; // 800EB660
  return; // 800EB664
}

// fn_800EB668
void f_800EB668(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB668
  c->r[0]=c->lr; // 800EB66C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB670
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB674
  c->r[31]=c->r[4]|c->r[4]; // 800EB678
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB67C
  c->r[30]=c->r[3]|c->r[3]; // 800EB680
  c->r[3]=c->r[31]|c->r[31]; // 800EB684
  c->lr=0x800EB68Cu; f_802B9FDC(c); // 800EB688
  cmps(c,0,(int32_t)c->r[3],0); // 800EB68C
  if (crb(c,2)) { goto L_800EB6AC; } // 800EB690
  c->r[3]=R32(c->r[31]+0x00000000u); // 800EB694
  c->r[0]=R32(c->r[31]+0x00000004u); // 800EB698
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800EB69C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800EB6A0
  c->r[0]=R32(c->r[31]+0x00000008u); // 800EB6A4
  W32(c->r[30]+0x00000024u,c->r[0]); // 800EB6A8
L_800EB6AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB6AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB6B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB6B4
  c->lr=c->r[0]; // 800EB6B8
  c->r[1]=c->r[1]+0x00000010u; // 800EB6BC
  return; // 800EB6C0
}

// fn_800EB6C4
void f_800EB6C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB6C4
  c->r[0]=c->lr; // 800EB6C8
  W32(c->r[1]+0x00000084u,c->r[0]); // 800EB6CC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800EB6D0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800EB6D4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800EB6D8
  c->r[31]=0u+0x803A0000u; // 800EB6DC
  c->r[31]=c->r[31]+0xFFFFEA68u; // 800EB6E0
  W32(c->r[1]+0x00000068u,c->r[30]); // 800EB6E4
  c->r[30]=c->r[3]|c->r[3]; // 800EB6E8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EB6EC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EB6F0
  c->lr=0x800EB6F8u; f_802501B0(c); // 800EB6F4
  c->r[3]=c->r[30]+0x00000038u; // 800EB6F8
  c->r[4]=c->r[30]+0x0000002Cu; // 800EB6FC
  c->lr=0x800EB704u; f_800361A0(c); // 800EB700
  {uint32_t ea=c->r[2]+0xFFFFA798u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB704
  c->r[3]=0u+0x80550000u; // 800EB708
  c->r[3]=c->r[3]+0x00003D60u; // 800EB70C
  c->r[4]=c->r[30]+0x00000038u; // 800EB710
  c->f[2]=c->f[1]; // 800EB714
  c->r[5]=c->r[1]+0x00000008u; // 800EB718
  c->f[3]=c->f[1]; // 800EB71C
  c->r[6]=0u+0x00000000u; // 800EB720
  c->r[7]=0u+0x00000000u; // 800EB724
  c->lr=0x800EB72Cu; f_801D5488(c); // 800EB728
  c->r[5]=R32(c->r[30]+0x00000394u); // 800EB72C
  c->r[3]=c->r[30]+0x00000060u; // 800EB730
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB734
  c->r[4]=c->r[5]+0x00000068u; // 800EB738
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800EB73C
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB740
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800EB744
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB748
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800EB74C
  c->lr=0x800EB754u; f_800361A0(c); // 800EB750
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB754
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EB758
  c->lr=0x800EB760u; f_802501B0(c); // 800EB75C
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800EB760
  c->r[0]=0u+0x00000001u; // 800EB764
  {uint32_t ea=c->r[2]+0xFFFFA7A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB768
  c->r[4]=c->r[30]+0x0000002Cu; // 800EB76C
  {uint32_t ea=c->r[2]+0xFFFFA7A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB770
  c->r[3]=c->r[3]|0x00002000u; // 800EB774
  W16(c->r[30]+0x000003BEu,c->r[3]); // 800EB778
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB77C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800EB780
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 800EB784
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800EB788
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB78C
  c->r[3]=c->r[3]+0x0000005Cu; // 800EB790
  c->lr=0x800EB798u; f_800361A0(c); // 800EB794
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB798
  c->r[4]=0u+0x00000040u; // 800EB79C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB7A0
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800EB7A4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB7A8
  c->r[3]=c->r[3]+0x0000001Cu; // 800EB7AC
  c->lr=0x800EB7B4u; f_802518A4(c); // 800EB7B0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB7B4
  c->r[4]=0u+0x00000006u; // 800EB7B8
  c->r[3]=c->r[3]+0x0000001Cu; // 800EB7BC
  c->lr=0x800EB7C4u; f_80251824(c); // 800EB7C0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EB7C4
  c->r[3]=c->r[30]|c->r[30]; // 800EB7C8
  {uint32_t ea=c->r[2]+0xFFFFA798u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB7CC
  c->r[5]=0u+0x0000000Au; // 800EB7D0
  c->r[12]=R32(c->r[12]+0x00000064u); // 800EB7D4
  c->r[6]=0u+0x00000001u; // 800EB7D8
  c->f[2]=c->f[1]; // 800EB7DC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EB7E0
  c->ctr=c->r[12]; // 800EB7E4
  if (true) { c->lr=0x800EB7ECu; dispatch(c,c->ctr); } // 800EB7E8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB7EC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EB7F0
  c->lr=0x800EB7F8u; f_802501B0(c); // 800EB7F4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB7F8
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800EB7FC
  cmps(c,0,(int32_t)c->r[0],0); // 800EB800
  if (crb(c,2)) { goto L_800EBA84; } // 800EB804
  c->r[3]=c->r[3]+0x00000068u; // 800EB808
  c->r[4]=c->r[30]+0x00000060u; // 800EB80C
  c->lr=0x800EB814u; f_800361A0(c); // 800EB810
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EB814
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EB818
  c->lr=0x800EB820u; f_8025037C(c); // 800EB81C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800EB820
  c->r[3]=c->r[30]+0x0000002Cu; // 800EB824
  c->r[4]=c->r[30]+0x00000060u; // 800EB828
  c->r[5]=c->r[1]+0x00000054u; // 800EB82C
  c->r[6]=c->r[6]+0x000000B0u; // 800EB830
  c->r[7]=0u+0x00000000u; // 800EB834
  c->lr=0x800EB83Cu; f_8002BE64(c); // 800EB838
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB83C
  {uint32_t ea=c->r[2]+0xFFFFA7A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB840
  fcmp(c,0,c->f[1],c->f[0]); // 800EB844
  if (!crb(c,1)) { goto L_800EB850; } // 800EB848
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800EB84C
L_800EB850:;
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB850
  {uint32_t ea=c->r[2]+0xFFFFA7ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB854
  fcmp(c,0,c->f[1],c->f[0]); // 800EB858
  if (!crb(c,0)) { goto L_800EB864; } // 800EB85C
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800EB860
L_800EB864:;
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB864
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB868
  fcmp(c,0,c->f[1],c->f[0]); // 800EB86C
  if (!crb(c,1)) { goto L_800EB878; } // 800EB870
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800EB874
L_800EB878:;
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB878
  {uint32_t ea=c->r[2]+0xFFFFA7B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB87C
  fcmp(c,0,c->f[1],c->f[0]); // 800EB880
  if (!crb(c,0)) { goto L_800EB88C; } // 800EB884
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800EB888
L_800EB88C:;
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB88C
  {uint32_t ea=c->r[2]+0xFFFFA7B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB890
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800EB894
  c->lr=0x800EB89Cu; f_8002C1B0(c); // 800EB898
  {uint32_t ea=c->r[2]+0xFFFFA79Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB89C
  fcmp(c,0,c->f[1],c->f[0]); // 800EB8A0
  if (!crb(c,0)) { goto L_800EB8C0; } // 800EB8A4
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB8A8
  {uint32_t ea=c->r[2]+0xFFFFA7BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB8AC
  fcmp(c,0,c->f[1],c->f[0]); // 800EB8B0
  if (!crb(c,1)) { goto L_800EB8C0; } // 800EB8B4
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB8B8
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800EB8BC
L_800EB8C0:;
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB8C0
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB8C4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800EB8C8
  c->lr=0x800EB8D0u; f_8002C1B0(c); // 800EB8CC
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB8D0
  fcmp(c,0,c->f[1],c->f[0]); // 800EB8D4
  if (!crb(c,0)) { goto L_800EB8F0; } // 800EB8D8
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB8DC
  {uint32_t ea=c->r[2]+0xFFFFA7CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB8E0
  fcmp(c,0,c->f[1],c->f[0]); // 800EB8E4
  if (!crb(c,0)) { goto L_800EB8F0; } // 800EB8E8
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800EB8EC
L_800EB8F0:;
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 800EB8F0
  c->r[3]=0u+0x805D0000u; // 800EB8F4
  c->r[0]=R32(c->r[30]+0x00000030u); // 800EB8F8
  c->r[3]=c->r[3]+0x00003F6Cu; // 800EB8FC
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB900
  c->r[4]=c->r[30]|c->r[30]; // 800EB904
  W32(c->r[1]+0x00000018u,c->r[5]); // 800EB908
  c->r[7]=c->r[1]+0x00000018u; // 800EB90C
  c->r[6]=0u+0x0000002Fu; // 800EB910
  c->r[8]=0u+0x00000000u; // 800EB914
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EB918
  c->r[0]=R32(c->r[30]+0x00000034u); // 800EB91C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800EB920
  c->r[3]=R32(c->r[30]+0x00000438u); // 800EB924
  c->r[5]=R32(c->r[30]+0x00000394u); // 800EB928
  c->lr=0x800EB930u; f_801FA6A4(c); // 800EB92C
  c->r[4]=R32(c->r[30]+0x00000044u); // 800EB930
  c->r[3]=c->r[1]+0x00000048u; // 800EB934
  c->r[0]=R32(c->r[30]+0x00000048u); // 800EB938
  {uint32_t ea=c->r[2]+0xFFFFA798u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB93C
  W32(c->r[1]+0x00000048u,c->r[4]); // 800EB940
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800EB944
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800EB948
  W32(c->r[1]+0x00000050u,c->r[0]); // 800EB94C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800EB950
  c->lr=0x800EB958u; f_80296B0C(c); // 800EB954
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EB958
  c->f[31]=c->f[1]; // 800EB95C
  {uint32_t ea=c->r[2]+0xFFFFA7B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB960
  fcmp(c,0,c->f[2],c->f[0]); // 800EB964
  if (!crb(c,1)) { goto L_800EB998; } // 800EB968
  c->r[4]=c->r[31]+0x0000003Cu; // 800EB96C
  c->r[6]=R32(c->r[31]+0x0000003Cu); // 800EB970
  c->r[5]=R32(c->r[4]+0x00000004u); // 800EB974
  c->r[3]=c->r[1]+0x00000048u; // 800EB978
  c->r[0]=R32(c->r[4]+0x00000008u); // 800EB97C
  c->r[4]=c->r[1]+0x0000003Cu; // 800EB980
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 800EB984
  W32(c->r[1]+0x00000040u,c->r[5]); // 800EB988
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EB98C
  c->lr=0x800EB994u; f_800361A0(c); // 800EB990
  goto L_800EB9F8; // 800EB994
L_800EB998:;
  {uint32_t ea=c->r[2]+0xFFFFA7D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB998
  fcmp(c,0,c->f[2],c->f[0]); // 800EB99C
  if (!crb(c,0)) { goto L_800EB9D0; } // 800EB9A0
  c->r[4]=c->r[31]+0x00000048u; // 800EB9A4
  c->r[6]=R32(c->r[31]+0x00000048u); // 800EB9A8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800EB9AC
  c->r[3]=c->r[1]+0x00000048u; // 800EB9B0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800EB9B4
  c->r[4]=c->r[1]+0x00000030u; // 800EB9B8
  W32(c->r[1]+0x00000030u,c->r[6]); // 800EB9BC
  W32(c->r[1]+0x00000034u,c->r[5]); // 800EB9C0
  W32(c->r[1]+0x00000038u,c->r[0]); // 800EB9C4
  c->lr=0x800EB9CCu; f_800361A0(c); // 800EB9C8
  goto L_800EB9F8; // 800EB9CC
L_800EB9D0:;
  c->r[4]=c->r[31]+0x00000054u; // 800EB9D0
  c->r[6]=R32(c->r[31]+0x00000054u); // 800EB9D4
  c->r[5]=R32(c->r[4]+0x00000004u); // 800EB9D8
  c->r[3]=c->r[1]+0x00000048u; // 800EB9DC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800EB9E0
  c->r[4]=c->r[1]+0x00000024u; // 800EB9E4
  W32(c->r[1]+0x00000024u,c->r[6]); // 800EB9E8
  W32(c->r[1]+0x00000028u,c->r[5]); // 800EB9EC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800EB9F0
  c->lr=0x800EB9F8u; f_800361A0(c); // 800EB9F4
L_800EB9F8:;
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EB9F8
  c->r[3]=c->r[1]+0x00000048u; // 800EB9FC
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EBA00
  {uint32_t ea=c->r[2]+0xFFFFA798u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EBA04
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 800EBA08
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EBA0C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800EBA10
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 800EBA14
  {uint32_t ea=c->r[30]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EBA18
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800EBA1C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800EBA20
  c->lr=0x800EBA28u; f_80296B0C(c); // 800EBA24
  {uint32_t ea=c->r[2]+0xFFFFA7D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EBA28
  fcmp(c,0,c->f[1],c->f[0]); // 800EBA2C
  if (!crb(c,1)) { goto L_800EBA44; } // 800EBA30
  c->r[3]=c->r[1]+0x00000048u; // 800EBA34
  c->r[4]=c->r[3]|c->r[3]; // 800EBA38
  c->lr=0x800EBA40u; f_80296AB0(c); // 800EBA3C
  goto L_800EBA50; // 800EBA40
L_800EBA44:;
  {uint32_t ea=c->r[2]+0xFFFFA798u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EBA44
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800EBA48
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800EBA4C
L_800EBA50:;
  c->f[1]=c->f[31]; // 800EBA50
  c->r[3]=c->r[1]+0x00000048u; // 800EBA54
  c->r[4]=c->r[3]|c->r[3]; // 800EBA58
  c->lr=0x800EBA60u; f_80296A94(c); // 800EBA5C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EBA60
  c->r[5]=c->r[30]+0x00000044u; // 800EBA64
  c->r[3]=R32(c->r[30]+0x00000438u); // 800EBA68
  c->r[6]=c->r[31]+0x00000000u; // 800EBA6C
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 800EBA70
  c->r[4]=0u+0x00000000u; // 800EBA74
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EBA78
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800EBA7C
  c->lr=0x800EBA84u; f_801FBEC0(c); // 800EBA80
L_800EBA84:;
  c->r[3]=c->r[30]|c->r[30]; // 800EBA84
  c->r[4]=0u+0x00000000u; // 800EBA88
  c->lr=0x800EBA90u; f_801F7C00(c); // 800EBA8C
  c->r[7]=0u+0x803D0000u; // 800EBA90
  {uint32_t ea=c->r[7]+0x00004154u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EBA94
  c->r[3]=c->r[30]|c->r[30]; // 800EBA98
  c->r[4]=c->r[1]+0x0000000Cu; // 800EBA9C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EBAA0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EBAA4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800EBAA8
  W32(c->r[1]+0x00000010u,c->r[5]); // 800EBAAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBAB0
  c->lr=0x800EBAB8u; f_800EB668(c); // 800EBAB4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800EBAB8
  c->r[0]=R32(c->r[1]+0x00000084u); // 800EBABC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800EBAC0
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800EBAC4
  c->r[30]=R32(c->r[1]+0x00000068u); // 800EBAC8
  c->lr=c->r[0]; // 800EBACC
  c->r[1]=c->r[1]+0x00000080u; // 800EBAD0
  return; // 800EBAD4
}

// fn_800EBAD8
void f_800EBAD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBAD8
  c->r[0]=c->lr; // 800EBADC
  c->r[4]=0u+0x00000000u; // 800EBAE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EBAE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EBAE8
  c->r[31]=c->r[3]|c->r[3]; // 800EBAEC
  c->r[3]=R32(c->r[3]+0x00000438u); // 800EBAF0
  c->lr=0x800EBAF8u; f_801FAF00(c); // 800EBAF4
  cmps(c,0,(int32_t)c->r[3],0); // 800EBAF8
  if (!crb(c,2)) { goto L_800EBB90; } // 800EBAFC
  c->r[3]=c->r[31]|c->r[31]; // 800EBB00
  c->r[4]=0u+0x0000003Bu; // 800EBB04
  c->lr=0x800EBB0Cu; f_801F5AB4(c); // 800EBB08
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800EBB0C
  c->r[3]=c->r[31]+0x0000002Cu; // 800EBB10
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EBB14
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800EBB18
  c->r[0]=c->r[0]|0x00000004u; // 800EBB1C
  c->r[4]=c->r[4]+0x0000005Cu; // 800EBB20
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800EBB24
  c->lr=0x800EBB2Cu; f_800361A0(c); // 800EBB28
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EBB2C
  c->r[3]=c->r[31]+0x00000060u; // 800EBB30
  c->r[4]=c->r[4]+0x00000068u; // 800EBB34
  c->lr=0x800EBB3Cu; f_800361A0(c); // 800EBB38
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800EBB3C
  c->r[3]=0u+0x805D0000u; // 800EBB40
  c->r[0]=R32(c->r[31]+0x00000030u); // 800EBB44
  c->r[3]=c->r[3]+0x00006CF8u; // 800EBB48
  c->r[4]=c->r[1]+0x00000008u; // 800EBB4C
  c->r[5]=0u+0x00040000u; // 800EBB50
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EBB54
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800EBB58
  c->r[0]=R32(c->r[31]+0x00000034u); // 800EBB5C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EBB60
  c->lr=0x800EBB68u; f_802236F8(c); // 800EBB64
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800EBB68
  c->r[3]=c->r[31]|c->r[31]; // 800EBB6C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EBB70
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EBB74
  c->ctr=c->r[12]; // 800EBB78
  if (true) { c->lr=0x800EBB80u; dispatch(c,c->ctr); } // 800EBB7C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EBB80
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EBB84
  c->lr=0x800EBB8Cu; f_8025037C(c); // 800EBB88
  goto L_800EBBB0; // 800EBB8C
L_800EBB90:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EBB90
  c->r[3]=c->r[31]+0x0000002Cu; // 800EBB94
  c->r[4]=c->r[4]+0x0000005Cu; // 800EBB98
  c->lr=0x800EBBA0u; f_800361A0(c); // 800EBB9C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EBBA0
  c->r[3]=c->r[31]+0x00000060u; // 800EBBA4
  c->r[4]=c->r[4]+0x00000068u; // 800EBBA8
  c->lr=0x800EBBB0u; f_800361A0(c); // 800EBBAC
L_800EBBB0:;
  c->r[3]=c->r[31]|c->r[31]; // 800EBBB0
  c->r[4]=0u+0x00000000u; // 800EBBB4
  c->lr=0x800EBBBCu; f_801F7C00(c); // 800EBBB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EBBBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EBBC0
  c->lr=c->r[0]; // 800EBBC4
  c->r[1]=c->r[1]+0x00000020u; // 800EBBC8
  return; // 800EBBCC
}

// fn_800EBBD0
void f_800EBBD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBBD0
  c->r[0]=c->lr; // 800EBBD4
  c->r[4]=c->r[3]|c->r[3]; // 800EBBD8
  c->r[3]=0u+0x000004C9u; // 800EBBDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBBE0
  c->r[5]=0u+0x00000000u; // 800EBBE4
  c->r[4]=R32(c->r[4]+0x00000394u); // 800EBBE8
  c->r[4]=c->r[4]+0x0000010Cu; // 800EBBEC
  c->lr=0x800EBBF4u; f_8024EE50(c); // 800EBBF0
  c->r[0]=cntlz(c->r[3]); // 800EBBF4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800EBBF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBBFC
  c->lr=c->r[0]; // 800EBC00
  c->r[1]=c->r[1]+0x00000010u; // 800EBC04
  return; // 800EBC08
}

// fn_800EBC0C
void f_800EBC0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBC0C
  c->r[0]=c->lr; // 800EBC10
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EBC14
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800EBC18
  c->r[31]=c->r[3]|c->r[3]; // 800EBC1C
  c->lr=0x800EBC24u; f_801F4F28(c); // 800EBC20
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800EBC24
  cmps(c,0,(int32_t)c->r[0],101); // 800EBC28
  if (crb(c,2)) { goto L_800EBC70; } // 800EBC2C
  if (!crb(c,0)) { goto L_800EBC9C; } // 800EBC30
  cmps(c,0,(int32_t)c->r[0],100); // 800EBC34
  if (!crb(c,0)) { goto L_800EBC40; } // 800EBC38
  goto L_800EBC9C; // 800EBC3C
L_800EBC40:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800EBC40
  c->r[7]=0u+0x803D0000u; // 800EBC44
  c->r[3]=c->r[31]|c->r[31]; // 800EBC48
  c->r[4]=c->r[1]+0x00000014u; // 800EBC4C
  {uint32_t ea=c->r[7]+0x00004160u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EBC50
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EBC54
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EBC58
  W32(c->r[1]+0x00000014u,c->r[6]); // 800EBC5C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800EBC60
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EBC64
  c->lr=0x800EBC6Cu; f_800EB668(c); // 800EBC68
  goto L_800EBC9C; // 800EBC6C
L_800EBC70:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800EBC70
  c->r[7]=0u+0x803D0000u; // 800EBC74
  c->r[3]=c->r[31]|c->r[31]; // 800EBC78
  c->r[4]=c->r[1]+0x00000008u; // 800EBC7C
  {uint32_t ea=c->r[7]+0x0000416Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800EBC80
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EBC84
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EBC88
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EBC8C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EBC90
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EBC94
  c->lr=0x800EBC9Cu; f_800EB668(c); // 800EBC98
L_800EBC9C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EBC9C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800EBCA0
  c->lr=c->r[0]; // 800EBCA4
  c->r[1]=c->r[1]+0x00000030u; // 800EBCA8
  return; // 800EBCAC
}

// fn_800EBCB0
void f_800EBCB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBCB0
  c->r[0]=c->lr; // 800EBCB4
  c->r[5]=c->r[3]|c->r[3]; // 800EBCB8
  c->r[3]=c->r[4]|c->r[4]; // 800EBCBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBCC0
  c->r[4]=R32(c->r[5]+0x00000394u); // 800EBCC4
  c->r[5]=0u+0x00000000u; // 800EBCC8
  c->lr=0x800EBCD0u; f_80250BF4(c); // 800EBCCC
  c->r[0]=cntlz(c->r[3]); // 800EBCD0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800EBCD4
  c->r[3]=0u-c->r[0]; // 800EBCD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBCDC
  c->lr=c->r[0]; // 800EBCE0
  c->r[1]=c->r[1]+0x00000010u; // 800EBCE4
  return; // 800EBCE8
}

// fn_800EBCEC
void f_800EBCEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBCEC
  c->r[0]=c->lr; // 800EBCF0
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800EBCF4
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 800EBCF8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 800EBCFC
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800EBD00
  W32(c->r[1]+0x000000C8u,c->r[30]); // 800EBD04
  c->r[30]=c->r[3]|c->r[3]; // 800EBD08
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EBD0C
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800EBD10
  cmps(c,0,(int32_t)c->r[0],0); // 800EBD14
  if (!crb(c,2)) { goto L_800EBE94; } // 800EBD18
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800EBD1C
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 800EBD20
  cmps(c,0,(int32_t)c->r[0],128); // 800EBD24
  if (!crb(c,2)) { goto L_800EBD50; } // 800EBD28
  c->r[3]=0u+0x80620000u; // 800EBD2C
  c->r[3]=c->r[3]+0x00007688u; // 800EBD30
  c->r[3]=R32(c->r[3]+0x00000014u); // 800EBD34
  cmps(c,0,(int32_t)c->r[3],0); // 800EBD38
  if (crb(c,2)) { goto L_800EBD50; } // 800EBD3C
  c->r[4]=0u+0x00000002u; // 800EBD40
  c->lr=0x800EBD48u; f_80037670(c); // 800EBD44
  cmps(c,0,(int32_t)c->r[3],0); // 800EBD48
  if (!crb(c,2)) { goto L_800EBE94; } // 800EBD4C
L_800EBD50:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EBD50
  c->r[4]=0u+0x803A0000u; // 800EBD54
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EBD58
  c->r[4]=c->r[4]+0xFFFFEAF0u; // 800EBD5C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EBD60
  c->r[5]=c->r[1]+0x00000030u; // 800EBD64
  c->r[6]=0u+0x00000001u; // 800EBD68
  c->lr=0x800EBD70u; f_80257018(c); // 800EBD6C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800EBD70
  c->r[4]=c->r[1]+0x00000008u; // 800EBD74
  {uint32_t ea=c->r[2]+0xFFFFA798u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EBD78
  c->r[5]=c->r[4]|c->r[4]; // 800EBD7C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EBD80
  c->r[3]=c->r[1]+0x00000030u; // 800EBD84
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EBD88
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EBD8C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 800EBD90
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 800EBD94
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 800EBD98
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 800EBD9C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 800EBDA0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 800EBDA4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 800EBDA8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 800EBDAC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 800EBDB0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800EBDB4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800EBDB8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 800EBDBC
  c->lr=0x800EBDC4u; f_80296750(c); // 800EBDC0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EBDC4
  c->r[4]=c->r[1]+0x00000008u; // 800EBDC8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EBDCC
  c->r[5]=c->r[4]|c->r[4]; // 800EBDD0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EBDD4
  c->r[3]=c->r[1]+0x00000030u; // 800EBDD8
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[1]); // 800EBDDC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EBDE0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EBDE4
  c->f[4]=c->ps1[4]=S(c->f[3]+c->f[0]); // 800EBDE8
  {uint32_t ea=c->r[2]+0xFFFFA798u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EBDEC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EBDF0
  {uint32_t ea=c->r[2]+0xFFFFA7E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EBDF4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800EBDF8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 800EBDFC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[4]);} // 800EBE00
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 800EBE04
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800EBE08
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800EBE0C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 800EBE10
  c->lr=0x800EBE18u; f_80296750(c); // 800EBE14
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EBE18
  c->r[31]=0u+0x80550000u; // 800EBE1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EBE20
  c->r[31]=c->r[31]+0x00003D60u; // 800EBE24
  {uint32_t ea=c->r[1]+0x00000024u; c->f[6]=c->ps1[6]=RF32(ea);} // 800EBE28
  c->f[1]=c->f[31]; // 800EBE2C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EBE30
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 800EBE34
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EBE38
  c->r[5]=c->r[30]|c->r[30]; // 800EBE3C
  c->f[6]=c->ps1[6]=S(c->f[6]+c->f[2]); // 800EBE40
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800EBE44
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EBE48
  {uint32_t ea=c->r[1]+0x00000028u; c->f[5]=c->ps1[5]=RF32(ea);} // 800EBE4C
  c->r[3]=c->r[31]+0x00000010u; // 800EBE50
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 800EBE54
  c->f[2]=c->ps1[2]=S(c->f[6]-c->f[2]); // 800EBE58
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800EBE5C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EBE60
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 800EBE64
  c->r[6]=c->r[1]+0x00000014u; // 800EBE68
  c->r[7]=c->r[1]+0x00000020u; // 800EBE6C
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[0]); // 800EBE70
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 800EBE74
  c->r[8]=c->r[1]+0x00000060u; // 800EBE78
  c->r[4]=0u+0x00000103u; // 800EBE7C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800EBE80
  c->lr=0x800EBE88u; f_802269C8(c); // 800EBE84
  c->r[3]=c->r[31]+0x00000010u; // 800EBE88
  c->r[4]=c->r[1]+0x00000060u; // 800EBE8C
  c->lr=0x800EBE94u; f_80226D68(c); // 800EBE90
L_800EBE94:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 800EBE94
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800EBE98
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 800EBE9C
  c->r[31]=R32(c->r[1]+0x000000CCu); // 800EBEA0
  c->r[30]=R32(c->r[1]+0x000000C8u); // 800EBEA4
  c->lr=c->r[0]; // 800EBEA8
  c->r[1]=c->r[1]+0x000000E0u; // 800EBEAC
  return; // 800EBEB0
}

// fn_800EBEB4
void f_800EBEB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBEB4
  c->r[0]=c->lr; // 800EBEB8
  cmps(c,0,(int32_t)c->r[3],0); // 800EBEBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBEC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBEC4
  c->r[31]=c->r[4]|c->r[4]; // 800EBEC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EBECC
  c->r[30]=c->r[3]|c->r[3]; // 800EBED0
  if (crb(c,2)) { goto L_800EBEF0; } // 800EBED4
  c->r[4]=0u+0x00000000u; // 800EBED8
  c->lr=0x800EBEE0u; f_8026A06C(c); // 800EBEDC
  cmps(c,0,(int32_t)c->r[31],0); // 800EBEE0
  if (!crb(c,1)) { goto L_800EBEF0; } // 800EBEE4
  c->r[3]=c->r[30]|c->r[30]; // 800EBEE8
  c->lr=0x800EBEF0u; f_8026A268(c); // 800EBEEC
L_800EBEF0:;
  c->r[3]=c->r[30]|c->r[30]; // 800EBEF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBEF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EBEF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBEFC
  c->lr=c->r[0]; // 800EBF00
  c->r[1]=c->r[1]+0x00000010u; // 800EBF04
  return; // 800EBF08
}

// fn_800EBF0C
void f_800EBF0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBF0C
  c->r[0]=c->lr; // 800EBF10
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EBF14
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EBF18
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EBF1C
  c->r[4]=0u+0x00000000u; // 800EBF20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBF24
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EBF28
  c->r[30]=c->r[3]|c->r[3]; // 800EBF2C
  c->lr=0x800EBF34u; f_801F57D0(c); // 800EBF30
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EBF34
  c->r[3]=c->r[30]|c->r[30]; // 800EBF38
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800EBF3C
  c->ctr=c->r[12]; // 800EBF40
  if (true) { c->lr=0x800EBF48u; dispatch(c,c->ctr); } // 800EBF44
  c->r[3]=c->r[30]|c->r[30]; // 800EBF48
  c->lr=0x800EBF50u; f_801F4B94(c); // 800EBF4C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800EBF50
  c->r[4]=0u+0x00000003u; // 800EBF54
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EBF58
  c->r[5]=0u+0x00000059u; // 800EBF5C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800EBF60
  c->r[3]=0u+0x80550000u; // 800EBF64
  c->r[0]=c->r[0]|0x00000800u; // 800EBF68
  c->f[3]=c->f[1]; // 800EBF6C
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800EBF70
  c->r[3]=c->r[3]+0x00003D60u; // 800EBF74
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EBF78
  c->r[4]=c->r[30]+0x0000002Cu; // 800EBF7C
  W8(c->r[30]+0x0000006Du,c->r[5]); // 800EBF80
  {uint32_t ea=c->r[2]+0xFFFFA7F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EBF84
  c->r[5]=c->r[30]+0x00000030u; // 800EBF88
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800EBF8C
  c->r[6]=0u+0x00000000u; // 800EBF90
  c->r[7]=0u+0x00000000u; // 800EBF94
  c->lr=0x800EBF9Cu; f_801D5488(c); // 800EBF98
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EBF9C
  c->r[3]=c->r[30]|c->r[30]; // 800EBFA0
  c->lr=0x800EBFA8u; f_801F58BC(c); // 800EBFA4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EBFA8
  c->r[31]=0u+0x00000001u; // 800EBFAC
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800EBFB0
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EBFB4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EBFB8
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800EBFBC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800EBFC0
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800EBFC4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EBFC8
  c->lr=0x800EBFD0u; f_802501B0(c); // 800EBFCC
  c->r[3]=0u+0x805D0000u; // 800EBFD0
  c->r[4]=c->r[30]+0x0000002Cu; // 800EBFD4
  c->r[3]=c->r[3]+0x000078B0u; // 800EBFD8
  c->lr=0x800EBFE0u; f_802351CC(c); // 800EBFDC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EBFE0
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800EBFE4
  c->r[3]=c->r[30]|c->r[30]; // 800EBFE8
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800EBFEC
  c->lr=0x800EBFF4u; f_801F56F4(c); // 800EBFF0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EBFF4
  c->r[3]=c->r[30]|c->r[30]; // 800EBFF8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EBFFC
  c->ctr=c->r[12]; // 800EC000
  if (true) { c->lr=0x800EC008u; dispatch(c,c->ctr); } // 800EC004
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800EC008
  W32(c->r[30]+0x00000444u,c->r[31]); // 800EC00C
  c->lr=0x800EC014u; f_8024E174(c); // 800EC010
  W32(c->r[30]+0x00000438u,c->r[3]); // 800EC014
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800EC018
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EC01C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC020
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EC024
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC028
  c->lr=c->r[0]; // 800EC02C
  c->r[1]=c->r[1]+0x00000020u; // 800EC030
  return; // 800EC034
}

// fn_800EC038
void f_800EC038(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC038
  c->r[0]=c->lr; // 800EC03C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC040
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC044
  c->r[31]=0u+0x805D0000u; // 800EC048
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EC04C
  c->r[30]=c->r[3]|c->r[3]; // 800EC050
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EC054
  c->lr=0x800EC05Cu; f_80045264(c); // 800EC058
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800EC05C
  cmpu(c,0,c->r[0],0x0000003Du); // 800EC060
  if (!crb(c,2)) { goto L_800EC0A0; } // 800EC064
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EC068
  c->lr=0x800EC070u; f_80037AF0(c); // 800EC06C
  cmpu(c,0,c->r[3],c->r[30]); // 800EC070
  if (!crb(c,2)) { goto L_800EC0A0; } // 800EC074
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800EC078
  cmps(c,0,(int32_t)c->r[0],101); // 800EC07C
  if (crb(c,2)) { goto L_800EC0A0; } // 800EC080
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC084
  c->r[3]=c->r[30]|c->r[30]; // 800EC088
  c->r[4]=0u+0x00000065u; // 800EC08C
  c->r[5]=0u+0x00000000u; // 800EC090
  c->r[6]=0u+0x00000000u; // 800EC094
  c->r[7]=0u+0x00000000u; // 800EC098
  c->lr=0x800EC0A0u; f_801F4D44(c); // 800EC09C
L_800EC0A0:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800EC0A0
  c->r[3]=c->r[30]|c->r[30]; // 800EC0A4
  c->r[12]=R32(c->r[12]+0x00000068u); // 800EC0A8
  c->ctr=c->r[12]; // 800EC0AC
  if (true) { c->lr=0x800EC0B4u; dispatch(c,c->ctr); } // 800EC0B0
  c->r[3]=c->r[30]|c->r[30]; // 800EC0B4
  c->lr=0x800EC0BCu; f_801F4C0C(c); // 800EC0B8
  c->r[3]=c->r[30]|c->r[30]; // 800EC0BC
  c->lr=0x800EC0C4u; f_800EC6DC(c); // 800EC0C0
  c->r[3]=c->r[30]|c->r[30]; // 800EC0C4
  c->lr=0x800EC0CCu; f_801F56F4(c); // 800EC0C8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EC0CC
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800EC0D0
  cmps(c,0,(int32_t)c->r[0],0); // 800EC0D4
  if (crb(c,2)) { goto L_800EC140; } // 800EC0D8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800EC0DC
  cmps(c,0,(int32_t)c->r[0],0); // 800EC0E0
  if (crb(c,2)) { goto L_800EC140; } // 800EC0E4
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800EC0E8
  cmps(c,0,(int32_t)c->r[0],0); // 800EC0EC
  if (crb(c,2)) { goto L_800EC10C; } // 800EC0F0
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800EC0F4
  cmps(c,0,(int32_t)c->r[0],0); // 800EC0F8
  if (!crb(c,2)) { goto L_800EC10C; } // 800EC0FC
  c->r[4]=c->r[3]+0x000000B0u; // 800EC100
  c->lr=0x800EC108u; f_80250F18(c); // 800EC104
  goto L_800EC128; // 800EC108
L_800EC10C:;
  c->r[3]=c->r[3]+0x0000005Cu; // 800EC10C
  c->r[4]=c->r[30]+0x0000002Cu; // 800EC110
  c->lr=0x800EC118u; f_800361A0(c); // 800EC114
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EC118
  c->r[4]=c->r[30]+0x00000060u; // 800EC11C
  c->r[3]=c->r[3]+0x00000068u; // 800EC120
  c->lr=0x800EC128u; f_800361A0(c); // 800EC124
L_800EC128:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EC128
  c->r[3]=c->r[30]|c->r[30]; // 800EC12C
  c->lr=0x800EC134u; f_801F58FC(c); // 800EC130
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EC134
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EC138
  c->lr=0x800EC140u; f_8025037C(c); // 800EC13C
L_800EC140:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC140
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC144
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EC148
  c->lr=c->r[0]; // 800EC14C
  c->r[1]=c->r[1]+0x00000010u; // 800EC150
  return; // 800EC154
}

// fn_800EC158
void f_800EC158(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC158
  c->r[0]=c->lr; // 800EC15C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EC160
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800EC164
  W32(c->r[1]+0x00000038u,c->r[30]); // 800EC168
  c->r[30]=c->r[3]|c->r[3]; // 800EC16C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EC170
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EC174
  c->lr=0x800EC17Cu; f_802501B0(c); // 800EC178
  c->r[3]=c->r[30]|c->r[30]; // 800EC17C
  c->r[4]=0u+0x00000000u; // 800EC180
  c->lr=0x800EC188u; f_801F5244(c); // 800EC184
  c->r[6]=R32(c->r[30]+0x00000394u); // 800EC188
  c->r[3]=c->r[1]+0x0000002Cu; // 800EC18C
  c->r[4]=c->r[1]+0x00000020u; // 800EC190
  c->r[5]=c->r[1]+0x00000014u; // 800EC194
  c->r[6]=c->r[6]+0x000000B0u; // 800EC198
  c->r[7]=0u+0x00000000u; // 800EC19C
  c->lr=0x800EC1A4u; f_8002BE64(c); // 800EC1A0
  c->r[3]=c->r[30]+0x0000002Cu; // 800EC1A4
  c->r[4]=c->r[1]+0x0000002Cu; // 800EC1A8
  c->lr=0x800EC1B0u; f_800361A0(c); // 800EC1AC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800EC1B0
  c->r[3]=c->r[30]|c->r[30]; // 800EC1B4
  c->lr=0x800EC1BCu; f_801F5418(c); // 800EC1B8
  cmps(c,0,(int32_t)c->r[3],0); // 800EC1BC
  if (!crb(c,0)) { goto L_800EC20C; } // 800EC1C0
  c->r[4]=R16(c->r[30]+0x000003BEu); // 800EC1C4
  c->r[3]=0u+0x00000001u; // 800EC1C8
  c->r[0]=0u+0x00000064u; // 800EC1CC
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800EC1D0
  c->r[4]=c->r[4]|0x00000080u; // 800EC1D4
  c->r[7]=0u+0x803D0000u; // 800EC1D8
  W16(c->r[30]+0x000003BEu,c->r[4]); // 800EC1DC
  c->r[3]=c->r[30]|c->r[30]; // 800EC1E0
  c->r[4]=c->r[1]+0x00000008u; // 800EC1E4
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800EC1E8
  {uint32_t ea=c->r[7]+0x00004210u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EC1EC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EC1F0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EC1F4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EC1F8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EC1FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EC200
  c->lr=0x800EC208u; f_800EC268(c); // 800EC204
  goto L_800EC250; // 800EC208
L_800EC20C:;
  c->r[31]=0u+0x805D0000u; // 800EC20C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EC210
  c->lr=0x800EC218u; f_80037AF0(c); // 800EC214
  cmpu(c,0,c->r[3],c->r[30]); // 800EC218
  if (!crb(c,2)) { goto L_800EC248; } // 800EC21C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EC220
  c->lr=0x800EC228u; f_800447E4(c); // 800EC224
  cmpu(c,0,c->r[3],0x00000001u); // 800EC228
  if (!crb(c,2)) { goto L_800EC23C; } // 800EC22C
  c->r[0]=0u+0x00000000u; // 800EC230
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800EC234
  goto L_800EC248; // 800EC238
L_800EC23C:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800EC23C
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800EC240
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800EC244
L_800EC248:;
  c->r[3]=c->r[30]|c->r[30]; // 800EC248
  c->lr=0x800EC250u; f_801F5B14(c); // 800EC24C
L_800EC250:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800EC250
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800EC254
  c->r[30]=R32(c->r[1]+0x00000038u); // 800EC258
  c->lr=c->r[0]; // 800EC25C
  c->r[1]=c->r[1]+0x00000040u; // 800EC260
  return; // 800EC264
}

// fn_800EC268
void f_800EC268(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC268
  c->r[0]=c->lr; // 800EC26C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC270
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC274
  c->r[31]=c->r[4]|c->r[4]; // 800EC278
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EC27C
  c->r[30]=c->r[3]|c->r[3]; // 800EC280
  c->r[3]=c->r[31]|c->r[31]; // 800EC284
  c->lr=0x800EC28Cu; f_802B9FDC(c); // 800EC288
  cmps(c,0,(int32_t)c->r[3],0); // 800EC28C
  if (crb(c,2)) { goto L_800EC2AC; } // 800EC290
  c->r[3]=R32(c->r[31]+0x00000000u); // 800EC294
  c->r[0]=R32(c->r[31]+0x00000004u); // 800EC298
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800EC29C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800EC2A0
  c->r[0]=R32(c->r[31]+0x00000008u); // 800EC2A4
  W32(c->r[30]+0x00000024u,c->r[0]); // 800EC2A8
L_800EC2AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC2AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC2B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EC2B4
  c->lr=c->r[0]; // 800EC2B8
  c->r[1]=c->r[1]+0x00000010u; // 800EC2BC
  return; // 800EC2C0
}

// fn_800EC2C4
void f_800EC2C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC2C4
  c->r[0]=c->lr; // 800EC2C8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800EC2CC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800EC2D0
  c->r[31]=c->r[3]|c->r[3]; // 800EC2D4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800EC2D8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EC2DC
  c->lr=0x800EC2E4u; f_802501B0(c); // 800EC2E0
  c->r[3]=c->r[31]+0x00000038u; // 800EC2E4
  c->r[4]=c->r[31]+0x0000002Cu; // 800EC2E8
  c->lr=0x800EC2F0u; f_800361A0(c); // 800EC2EC
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC2F0
  c->r[3]=0u+0x80550000u; // 800EC2F4
  c->r[3]=c->r[3]+0x00003D60u; // 800EC2F8
  c->r[4]=c->r[31]+0x00000038u; // 800EC2FC
  c->f[2]=c->f[1]; // 800EC300
  c->r[5]=c->r[1]+0x00000008u; // 800EC304
  c->f[3]=c->f[1]; // 800EC308
  c->r[6]=0u+0x00000000u; // 800EC30C
  c->r[7]=0u+0x00000000u; // 800EC310
  c->lr=0x800EC318u; f_801D5488(c); // 800EC314
  c->r[5]=R32(c->r[31]+0x00000394u); // 800EC318
  c->r[3]=c->r[31]+0x00000060u; // 800EC31C
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EC320
  c->r[4]=c->r[5]+0x00000068u; // 800EC324
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800EC328
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EC32C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800EC330
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EC334
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800EC338
  c->lr=0x800EC340u; f_800361A0(c); // 800EC33C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EC340
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EC344
  c->lr=0x800EC34Cu; f_802501B0(c); // 800EC348
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800EC34C
  c->r[0]=0u+0x00000001u; // 800EC350
  {uint32_t ea=c->r[2]+0xFFFFA7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC354
  c->r[4]=c->r[31]+0x0000002Cu; // 800EC358
  {uint32_t ea=c->r[2]+0xFFFFA7FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EC35C
  c->r[3]=c->r[3]|0x00002000u; // 800EC360
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800EC364
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EC368
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800EC36C
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800EC370
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800EC374
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EC378
  c->r[3]=c->r[3]+0x0000005Cu; // 800EC37C
  c->lr=0x800EC384u; f_800361A0(c); // 800EC380
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EC384
  c->r[4]=0u+0x00000040u; // 800EC388
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EC38C
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800EC390
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EC394
  c->r[3]=c->r[3]+0x0000001Cu; // 800EC398
  c->lr=0x800EC3A0u; f_802518A4(c); // 800EC39C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EC3A0
  c->r[4]=0u+0x00000006u; // 800EC3A4
  c->r[3]=c->r[3]+0x0000001Cu; // 800EC3A8
  c->lr=0x800EC3B0u; f_80251824(c); // 800EC3AC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EC3B0
  c->r[3]=c->r[31]|c->r[31]; // 800EC3B4
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC3B8
  c->r[5]=0u+0x00000000u; // 800EC3BC
  c->r[12]=R32(c->r[12]+0x00000064u); // 800EC3C0
  c->r[6]=0u+0x00000001u; // 800EC3C4
  c->f[2]=c->f[1]; // 800EC3C8
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EC3CC
  c->ctr=c->r[12]; // 800EC3D0
  if (true) { c->lr=0x800EC3D8u; dispatch(c,c->ctr); } // 800EC3D4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EC3D8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EC3DC
  c->lr=0x800EC3E4u; f_802501B0(c); // 800EC3E0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EC3E4
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800EC3E8
  cmps(c,0,(int32_t)c->r[0],0); // 800EC3EC
  if (crb(c,2)) { goto L_800EC480; } // 800EC3F0
  c->r[3]=c->r[3]+0x00000068u; // 800EC3F4
  c->r[4]=c->r[31]+0x00000060u; // 800EC3F8
  c->lr=0x800EC400u; f_800361A0(c); // 800EC3FC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EC400
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EC404
  c->lr=0x800EC40Cu; f_8025037C(c); // 800EC408
  c->r[6]=R32(c->r[31]+0x00000394u); // 800EC40C
  c->r[3]=c->r[1]+0x00000024u; // 800EC410
  c->r[4]=c->r[31]+0x00000060u; // 800EC414
  c->r[5]=c->r[1]+0x00000030u; // 800EC418
  c->r[6]=c->r[6]+0x000000B0u; // 800EC41C
  c->r[7]=0u+0x00000000u; // 800EC420
  c->lr=0x800EC428u; f_8002BE64(c); // 800EC424
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800EC428
  c->r[3]=0u+0x805D0000u; // 800EC42C
  c->r[0]=R32(c->r[31]+0x00000030u); // 800EC430
  c->r[3]=c->r[3]+0x00003F6Cu; // 800EC434
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC438
  c->r[4]=c->r[31]|c->r[31]; // 800EC43C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800EC440
  c->r[7]=c->r[1]+0x00000018u; // 800EC444
  c->r[6]=0u+0x00000024u; // 800EC448
  c->r[8]=0u+0x00000000u; // 800EC44C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EC450
  c->r[0]=R32(c->r[31]+0x00000034u); // 800EC454
  W32(c->r[1]+0x00000020u,c->r[0]); // 800EC458
  c->r[3]=R32(c->r[31]+0x00000438u); // 800EC45C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800EC460
  c->lr=0x800EC468u; f_801FA6A4(c); // 800EC464
  c->r[6]=0u+0x803A0000u; // 800EC468
  c->r[3]=R32(c->r[31]+0x00000438u); // 800EC46C
  c->r[5]=c->r[31]+0x00000044u; // 800EC470
  c->r[4]=0u+0x00000000u; // 800EC474
  c->r[6]=c->r[6]+0xFFFFEB00u; // 800EC478
  c->lr=0x800EC480u; f_801FBEC0(c); // 800EC47C
L_800EC480:;
  c->r[3]=c->r[31]|c->r[31]; // 800EC480
  c->r[4]=0u+0x00000000u; // 800EC484
  c->lr=0x800EC48Cu; f_801F7C00(c); // 800EC488
  c->r[7]=0u+0x803D0000u; // 800EC48C
  {uint32_t ea=c->r[7]+0x0000421Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800EC490
  c->r[3]=c->r[31]|c->r[31]; // 800EC494
  c->r[4]=c->r[1]+0x0000000Cu; // 800EC498
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EC49C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EC4A0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800EC4A4
  W32(c->r[1]+0x00000010u,c->r[5]); // 800EC4A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC4AC
  c->lr=0x800EC4B4u; f_800EC268(c); // 800EC4B0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800EC4B4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800EC4B8
  c->lr=c->r[0]; // 800EC4BC
  c->r[1]=c->r[1]+0x00000050u; // 800EC4C0
  return; // 800EC4C4
}

// fn_800EC4C8
void f_800EC4C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC4C8
  c->r[0]=c->lr; // 800EC4CC
  c->r[4]=0u+0x00000000u; // 800EC4D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC4D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EC4D8
  c->r[31]=c->r[3]|c->r[3]; // 800EC4DC
  c->r[3]=R32(c->r[3]+0x00000438u); // 800EC4E0
  c->lr=0x800EC4E8u; f_801FAF00(c); // 800EC4E4
  cmps(c,0,(int32_t)c->r[3],0); // 800EC4E8
  if (!crb(c,2)) { goto L_800EC580; } // 800EC4EC
  c->r[3]=c->r[31]|c->r[31]; // 800EC4F0
  c->r[4]=0u+0x0000003Du; // 800EC4F4
  c->lr=0x800EC4FCu; f_801F5AB4(c); // 800EC4F8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800EC4FC
  c->r[3]=c->r[31]+0x0000002Cu; // 800EC500
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EC504
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800EC508
  c->r[0]=c->r[0]|0x00000004u; // 800EC50C
  c->r[4]=c->r[4]+0x0000005Cu; // 800EC510
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800EC514
  c->lr=0x800EC51Cu; f_800361A0(c); // 800EC518
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EC51C
  c->r[3]=c->r[31]+0x00000060u; // 800EC520
  c->r[4]=c->r[4]+0x00000068u; // 800EC524
  c->lr=0x800EC52Cu; f_800361A0(c); // 800EC528
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800EC52C
  c->r[3]=0u+0x805D0000u; // 800EC530
  c->r[0]=R32(c->r[31]+0x00000030u); // 800EC534
  c->r[3]=c->r[3]+0x00006CF8u; // 800EC538
  c->r[4]=c->r[1]+0x00000008u; // 800EC53C
  c->r[5]=0u+0x00040000u; // 800EC540
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EC544
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800EC548
  c->r[0]=R32(c->r[31]+0x00000034u); // 800EC54C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EC550
  c->lr=0x800EC558u; f_802236F8(c); // 800EC554
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800EC558
  c->r[3]=c->r[31]|c->r[31]; // 800EC55C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EC560
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EC564
  c->ctr=c->r[12]; // 800EC568
  if (true) { c->lr=0x800EC570u; dispatch(c,c->ctr); } // 800EC56C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800EC570
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EC574
  c->lr=0x800EC57Cu; f_8025037C(c); // 800EC578
  goto L_800EC5A0; // 800EC57C
L_800EC580:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EC580
  c->r[3]=c->r[31]+0x0000002Cu; // 800EC584
  c->r[4]=c->r[4]+0x0000005Cu; // 800EC588
  c->lr=0x800EC590u; f_800361A0(c); // 800EC58C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800EC590
  c->r[3]=c->r[31]+0x00000060u; // 800EC594
  c->r[4]=c->r[4]+0x00000068u; // 800EC598
  c->lr=0x800EC5A0u; f_800361A0(c); // 800EC59C
L_800EC5A0:;
  c->r[3]=c->r[31]|c->r[31]; // 800EC5A0
  c->r[4]=0u+0x00000000u; // 800EC5A4
  c->lr=0x800EC5ACu; f_801F7C00(c); // 800EC5A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC5AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EC5B0
  c->lr=c->r[0]; // 800EC5B4
  c->r[1]=c->r[1]+0x00000020u; // 800EC5B8
  return; // 800EC5BC
}

// fn_800EC5C0
void f_800EC5C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC5C0
  c->r[0]=c->lr; // 800EC5C4
  c->r[4]=c->r[3]|c->r[3]; // 800EC5C8
  c->r[3]=0u+0x000004ABu; // 800EC5CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC5D0
  c->r[5]=0u+0x00000000u; // 800EC5D4
  c->r[4]=R32(c->r[4]+0x00000394u); // 800EC5D8
  c->r[4]=c->r[4]+0x0000010Cu; // 800EC5DC
  c->lr=0x800EC5E4u; f_8024EE50(c); // 800EC5E0
  c->r[0]=cntlz(c->r[3]); // 800EC5E4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800EC5E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC5EC
  c->lr=c->r[0]; // 800EC5F0
  c->r[1]=c->r[1]+0x00000010u; // 800EC5F4
  return; // 800EC5F8
}

// fn_800EC5FC
void f_800EC5FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC5FC
  c->r[0]=c->lr; // 800EC600
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EC604
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800EC608
  c->r[31]=c->r[3]|c->r[3]; // 800EC60C
  c->lr=0x800EC614u; f_801F4F28(c); // 800EC610
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800EC614
  cmps(c,0,(int32_t)c->r[0],101); // 800EC618
  if (crb(c,2)) { goto L_800EC660; } // 800EC61C
  if (!crb(c,0)) { goto L_800EC68C; } // 800EC620
  cmps(c,0,(int32_t)c->r[0],100); // 800EC624
  if (!crb(c,0)) { goto L_800EC630; } // 800EC628
  goto L_800EC68C; // 800EC62C
L_800EC630:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800EC630
  c->r[7]=0u+0x803D0000u; // 800EC634
  c->r[3]=c->r[31]|c->r[31]; // 800EC638
  c->r[4]=c->r[1]+0x00000014u; // 800EC63C
  {uint32_t ea=c->r[7]+0x00004228u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EC640
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EC644
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EC648
  W32(c->r[1]+0x00000014u,c->r[6]); // 800EC64C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800EC650
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EC654
  c->lr=0x800EC65Cu; f_800EC268(c); // 800EC658
  goto L_800EC68C; // 800EC65C
L_800EC660:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800EC660
  c->r[7]=0u+0x803D0000u; // 800EC664
  c->r[3]=c->r[31]|c->r[31]; // 800EC668
  c->r[4]=c->r[1]+0x00000008u; // 800EC66C
  {uint32_t ea=c->r[7]+0x00004234u; c->r[6]=R32(ea); c->r[7]=ea;} // 800EC670
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EC674
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EC678
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EC67C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EC680
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EC684
  c->lr=0x800EC68Cu; f_800EC268(c); // 800EC688
L_800EC68C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EC68C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800EC690
  c->lr=c->r[0]; // 800EC694
  c->r[1]=c->r[1]+0x00000030u; // 800EC698
  return; // 800EC69C
}

// fn_800EC6A0
void f_800EC6A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC6A0
  c->r[0]=c->lr; // 800EC6A4
  c->r[5]=c->r[3]|c->r[3]; // 800EC6A8
  c->r[3]=c->r[4]|c->r[4]; // 800EC6AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC6B0
  c->r[4]=R32(c->r[5]+0x00000394u); // 800EC6B4
  c->r[5]=0u+0x00000000u; // 800EC6B8
  c->lr=0x800EC6C0u; f_80250BF4(c); // 800EC6BC
  c->r[0]=cntlz(c->r[3]); // 800EC6C0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800EC6C4
  c->r[3]=0u-c->r[0]; // 800EC6C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC6CC
  c->lr=c->r[0]; // 800EC6D0
  c->r[1]=c->r[1]+0x00000010u; // 800EC6D4
  return; // 800EC6D8
}

// fn_800EC6DC
void f_800EC6DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC6DC
  c->r[0]=c->lr; // 800EC6E0
  c->r[5]=0u+0x80620000u; // 800EC6E4
  c->r[4]=0u+0x00000002u; // 800EC6E8
  W32(c->r[1]+0x00000094u,c->r[0]); // 800EC6EC
  c->r[5]=c->r[5]+0x00007688u; // 800EC6F0
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800EC6F4
  W32(c->r[1]+0x00000088u,c->r[30]); // 800EC6F8
  c->r[30]=c->r[3]|c->r[3]; // 800EC6FC
  c->r[3]=R32(c->r[5]+0x00000014u); // 800EC700
  c->lr=0x800EC708u; f_80037670(c); // 800EC704
  cmps(c,0,(int32_t)c->r[3],0); // 800EC708
  if (!crb(c,2)) { goto L_800EC770; } // 800EC70C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800EC710
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800EC714
  cmps(c,0,(int32_t)c->r[0],0); // 800EC718
  if (!crb(c,2)) { goto L_800EC770; } // 800EC71C
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC720
  c->r[3]=c->r[1]+0x00000008u; // 800EC724
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EC728
  c->r[4]=c->r[30]+0x0000002Cu; // 800EC72C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 800EC730
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800EC734
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800EC738
  c->lr=0x800EC740u; f_800361A0(c); // 800EC73C
  c->r[31]=0u+0x80550000u; // 800EC740
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC744
  c->r[31]=c->r[31]+0x00003D60u; // 800EC748
  c->r[5]=c->r[30]|c->r[30]; // 800EC74C
  c->r[3]=c->r[31]+0x00000010u; // 800EC750
  c->r[6]=c->r[1]+0x00000008u; // 800EC754
  c->r[7]=c->r[1]+0x00000020u; // 800EC758
  c->r[4]=0u+0x000001FFu; // 800EC75C
  c->lr=0x800EC764u; f_80226910(c); // 800EC760
  c->r[3]=c->r[31]+0x00000010u; // 800EC764
  c->r[4]=c->r[1]+0x00000020u; // 800EC768
  c->lr=0x800EC770u; f_80226D68(c); // 800EC76C
L_800EC770:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800EC770
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800EC774
  c->r[30]=R32(c->r[1]+0x00000088u); // 800EC778
  c->lr=c->r[0]; // 800EC77C
  c->r[1]=c->r[1]+0x00000090u; // 800EC780
  return; // 800EC784
}

// fn_800EC788
void f_800EC788(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC788
  c->r[0]=c->lr; // 800EC78C
  cmps(c,0,(int32_t)c->r[3],0); // 800EC790
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC794
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC798
  c->r[31]=c->r[4]|c->r[4]; // 800EC79C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EC7A0
  c->r[30]=c->r[3]|c->r[3]; // 800EC7A4
  if (crb(c,2)) { goto L_800EC7C4; } // 800EC7A8
  c->r[4]=0u+0x00000000u; // 800EC7AC
  c->lr=0x800EC7B4u; f_8026A06C(c); // 800EC7B0
  cmps(c,0,(int32_t)c->r[31],0); // 800EC7B4
  if (!crb(c,1)) { goto L_800EC7C4; } // 800EC7B8
  c->r[3]=c->r[30]|c->r[30]; // 800EC7BC
  c->lr=0x800EC7C4u; f_8026A268(c); // 800EC7C0
L_800EC7C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800EC7C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC7C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EC7CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC7D0
  c->lr=c->r[0]; // 800EC7D4
  c->r[1]=c->r[1]+0x00000010u; // 800EC7D8
  return; // 800EC7DC
}

// fn_800EC7E0
void f_800EC7E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC7E0
  c->r[0]=c->lr; // 800EC7E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EC7E8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800EC7EC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800EC7F0
  c->r[4]=0u+0x00000000u; // 800EC7F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EC7F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EC7FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EC800
  W32(c->r[1]+0x00000010u,c->r[28]); // 800EC804
  c->r[28]=c->r[3]|c->r[3]; // 800EC808
  c->lr=0x800EC810u; f_801F57D0(c); // 800EC80C
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800EC810
  c->r[3]=c->r[28]|c->r[28]; // 800EC814
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800EC818
  c->ctr=c->r[12]; // 800EC81C
  if (true) { c->lr=0x800EC824u; dispatch(c,c->ctr); } // 800EC820
  c->r[3]=c->r[28]|c->r[28]; // 800EC824
  c->lr=0x800EC82Cu; f_801F4B94(c); // 800EC828
  c->r[3]=R16(c->r[28]+0x000003BEu); // 800EC82C
  c->r[30]=0u+0x00000000u; // 800EC830
  {uint32_t ea=c->r[2]+0xFFFFA810u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC834
  c->r[0]=0u+0xFFFFFFFFu; // 800EC838
  c->r[8]=c->r[3]|0x00000804u; // 800EC83C
  c->r[4]=0u+0x00000003u; // 800EC840
  c->r[5]=0u+0x0000005Au; // 800EC844
  c->r[29]=0u+0x00000001u; // 800EC848
  c->r[3]=0u+0x80550000u; // 800EC84C
  W8(c->r[28]+0x0000006Cu,c->r[4]); // 800EC850
  c->f[3]=c->f[1]; // 800EC854
  {uint32_t ea=c->r[28]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EC858
  W8(c->r[28]+0x0000006Du,c->r[5]); // 800EC85C
  c->r[3]=c->r[3]+0x00003D60u; // 800EC860
  {uint32_t ea=c->r[2]+0xFFFFA814u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EC864
  c->r[4]=c->r[28]+0x0000002Cu; // 800EC868
  W8(c->r[28]+0x0000006Fu,c->r[29]); // 800EC86C
  c->r[5]=c->r[28]+0x00000030u; // 800EC870
  c->r[6]=0u+0x00000000u; // 800EC874
  c->r[7]=0u+0x00000000u; // 800EC878
  W16(c->r[28]+0x000003BEu,c->r[8]); // 800EC87C
  W8(c->r[28]+0x00000074u,c->r[30]); // 800EC880
  W8(c->r[28]+0x00000075u,c->r[30]); // 800EC884
  W32(c->r[28]+0x000000A0u,c->r[0]); // 800EC888
  W32(c->r[28]+0x000000A4u,c->r[0]); // 800EC88C
  W8(c->r[28]+0x00000077u,c->r[30]); // 800EC890
  c->lr=0x800EC898u; f_801D5488(c); // 800EC894
  c->r[4]=R32(c->r[28]+0x00000394u); // 800EC898
  c->r[3]=c->r[28]|c->r[28]; // 800EC89C
  c->lr=0x800EC8A4u; f_801F58BC(c); // 800EC8A0
  c->r[3]=R32(c->r[28]+0x00000394u); // 800EC8A4
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800EC8A8
  {uint32_t ea=c->r[28]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC8AC
  c->r[3]=R32(c->r[28]+0x00000394u); // 800EC8B0
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800EC8B4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800EC8B8
  {uint32_t ea=c->r[28]+0x00000030u; WF32(ea,c->f[0]);} // 800EC8BC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800EC8C0
  c->lr=0x800EC8C8u; f_802501B0(c); // 800EC8C4
  c->r[3]=0u+0x805D0000u; // 800EC8C8
  c->r[4]=c->r[28]+0x0000002Cu; // 800EC8CC
  c->r[3]=c->r[3]+0x000078B0u; // 800EC8D0
  c->lr=0x800EC8D8u; f_802351CC(c); // 800EC8D4
  c->r[6]=R32(c->r[28]+0x00000394u); // 800EC8D8
  c->r[31]=0u+0x803A0000u; // 800EC8DC
  c->r[4]=c->r[31]+0xFFFFEBA4u; // 800EC8E0
  c->r[5]=0u+0x00000000u; // 800EC8E4
  W8(c->r[6]+0x0000001Du,c->r[3]); // 800EC8E8
  c->r[3]=R32(c->r[28]+0x000000A0u); // 800EC8EC
  c->lr=0x800EC8F4u; f_8012FA5C(c); // 800EC8F0
  W32(c->r[28]+0x000000A0u,c->r[3]); // 800EC8F4
  c->r[4]=c->r[31]+0xFFFFEBA4u; // 800EC8F8
  c->r[3]=R32(c->r[28]+0x000000A4u); // 800EC8FC
  c->r[4]=c->r[4]+0x00000004u; // 800EC900
  c->r[5]=0u+0x00000000u; // 800EC904
  c->lr=0x800EC90Cu; f_8012FA5C(c); // 800EC908
  W32(c->r[28]+0x000000A4u,c->r[3]); // 800EC90C
  c->r[3]=c->r[28]|c->r[28]; // 800EC910
  W8(c->r[28]+0x00000078u,c->r[29]); // 800EC914
  c->lr=0x800EC91Cu; f_801F56F4(c); // 800EC918
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800EC91C
  c->r[3]=c->r[28]|c->r[28]; // 800EC920
  c->r[12]=R32(c->r[12]+0x00000050u); // 800EC924
  c->ctr=c->r[12]; // 800EC928
  if (true) { c->lr=0x800EC930u; dispatch(c,c->ctr); } // 800EC92C
  c->r[0]=R8(c->r[28]+0x0000006Eu); // 800EC930
  cmpu(c,0,c->r[0],0x00000006u); // 800EC934
  if (!crb(c,0)) { goto L_800EC96C; } // 800EC938
  c->r[0]=R16(c->r[28]+0x000003BEu); // 800EC93C
  c->r[3]=c->r[28]|c->r[28]; // 800EC940
  W8(c->r[28]+0x0000006Fu,c->r[30]); // 800EC944
  c->r[4]=0u+0x00000069u; // 800EC948
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800EC94C
  {uint32_t ea=c->r[2]+0xFFFFA810u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC950
  W16(c->r[28]+0x000003BEu,c->r[0]); // 800EC954
  c->r[5]=0u+0x00000000u; // 800EC958
  c->r[6]=0u+0x00000000u; // 800EC95C
  c->r[7]=0u+0x00000000u; // 800EC960
  W8(c->r[28]+0x00000078u,c->r[29]); // 800EC964
  c->lr=0x800EC96Cu; f_801F4D44(c); // 800EC968
L_800EC96C:;
  c->r[3]=c->r[28]|c->r[28]; // 800EC96C
  c->lr=0x800EC974u; f_800ED8F4(c); // 800EC970
  c->r[0]=0u+0x00000001u; // 800EC974
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 800EC978
  W32(c->r[28]+0x00000444u,c->r[0]); // 800EC97C
  c->lr=0x800EC984u; f_8024E174(c); // 800EC980
  W32(c->r[28]+0x00000438u,c->r[3]); // 800EC984
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800EC988
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800EC98C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EC990
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EC994
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EC998
  c->r[28]=R32(c->r[1]+0x00000010u); // 800EC99C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EC9A0
  c->lr=c->r[0]; // 800EC9A4
  c->r[1]=c->r[1]+0x00000030u; // 800EC9A8
  return; // 800EC9AC
}

// fn_800EC9B0
void f_800EC9B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC9B0
  c->r[0]=c->lr; // 800EC9B4
  W32(c->r[1]+0x00000074u,c->r[0]); // 800EC9B8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800EC9BC
  c->r[31]=c->r[3]|c->r[3]; // 800EC9C0
  W32(c->r[1]+0x00000068u,c->r[30]); // 800EC9C4
  c->lr=0x800EC9CCu; f_800ED55C(c); // 800EC9C8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800EC9CC
  c->r[3]=c->r[31]|c->r[31]; // 800EC9D0
  c->r[12]=R32(c->r[12]+0x00000068u); // 800EC9D4
  c->ctr=c->r[12]; // 800EC9D8
  if (true) { c->lr=0x800EC9E0u; dispatch(c,c->ctr); } // 800EC9DC
  c->r[3]=c->r[31]|c->r[31]; // 800EC9E0
  c->lr=0x800EC9E8u; f_801F4C0C(c); // 800EC9E4
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800EC9E8
  cmps(c,0,(int32_t)c->r[3],101); // 800EC9EC
  if (crb(c,2)) { goto L_800ECA04; } // 800EC9F0
  c->r[0]=c->r[3]+0xFFFFFF98u; // 800EC9F4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800EC9F8
  cmpu(c,0,c->r[0],0x00000001u); // 800EC9FC
  if (crb(c,1)) { goto L_800ECA14; } // 800ECA00
L_800ECA04:;
  c->r[0]=R8(c->r[31]+0x00000077u); // 800ECA04
  c->r[0]=c->r[0]|0x00000001u; // 800ECA08
  W8(c->r[31]+0x00000077u,c->r[0]); // 800ECA0C
  goto L_800ECA20; // 800ECA10
L_800ECA14:;
  c->r[0]=R8(c->r[31]+0x00000077u); // 800ECA14
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 800ECA18
  W8(c->r[31]+0x00000077u,c->r[0]); // 800ECA1C
L_800ECA20:;
  c->r[3]=c->r[31]|c->r[31]; // 800ECA20
  c->lr=0x800ECA28u; f_800ED80C(c); // 800ECA24
  c->r[3]=R32(c->r[31]+0x00000394u); // 800ECA28
  c->r[0]=0u+0x00000000u; // 800ECA2C
  c->r[4]=0u+0x803A0000u; // 800ECA30
  W32(c->r[1]+0x00000008u,c->r[0]); // 800ECA34
  c->r[4]=c->r[4]+0xFFFFEBA4u; // 800ECA38
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800ECA3C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800ECA40
  c->r[4]=c->r[4]+0x00000008u; // 800ECA44
  W32(c->r[1]+0x00000010u,c->r[0]); // 800ECA48
  W32(c->r[1]+0x00000020u,c->r[0]); // 800ECA4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ECA50
  W32(c->r[1]+0x00000028u,c->r[0]); // 800ECA54
  c->lr=0x800ECA5Cu; f_80256EC4(c); // 800ECA58
  c->r[5]=R32(c->r[31]+0x00000394u); // 800ECA5C
  c->r[0]=0u+0x43300000u; // 800ECA60
  W32(c->r[1]+0x00000060u,c->r[0]); // 800ECA64
  c->r[4]=c->r[3]|c->r[3]; // 800ECA68
  c->r[0]=R16(c->r[5]+0x00000108u); // 800ECA6C
  c->r[5]=c->r[1]+0x00000014u; // 800ECA70
  c->r[3]=R32(c->r[1]+0x00000020u); // 800ECA74
  W32(c->r[1]+0x00000064u,c->r[0]); // 800ECA78
  c->r[0]=R32(c->r[1]+0x00000028u); // 800ECA7C
  {uint32_t ea=c->r[2]+0xFFFFA818u; c->f[1]=RF64(ea);} // 800ECA80
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 800ECA84
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800ECA88
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800ECA8C
  W32(c->r[1]+0x00000014u,c->r[3]); // 800ECA90
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800ECA94
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ECA98
  W32(c->r[1]+0x00000018u,c->r[0]); // 800ECA9C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800ECAA0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800ECAA4
  c->lr=0x800ECAACu; f_8025E9C0(c); // 800ECAA8
  c->r[3]=c->r[31]|c->r[31]; // 800ECAAC
  c->lr=0x800ECAB4u; f_801F56F4(c); // 800ECAB0
  c->r[3]=R32(c->r[31]+0x000000A0u); // 800ECAB4
  c->r[0]=c->r[3]+0x00010000u; // 800ECAB8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800ECABC
  if (!crb(c,2)) { goto L_800ECAD4; } // 800ECAC0
  c->r[3]=R32(c->r[31]+0x000000A4u); // 800ECAC4
  c->r[0]=c->r[3]+0x00010000u; // 800ECAC8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800ECACC
  if (crb(c,2)) { goto L_800ECC54; } // 800ECAD0
L_800ECAD4:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800ECAD4
  c->r[4]=0u+0x803A0000u; // 800ECAD8
  c->r[4]=c->r[4]+0xFFFFEBA4u; // 800ECADC
  c->r[5]=c->r[1]+0x00000030u; // 800ECAE0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800ECAE4
  c->r[4]=c->r[4]+0x00000008u; // 800ECAE8
  c->r[6]=0u+0x00000001u; // 800ECAEC
  c->lr=0x800ECAF4u; f_80257018(c); // 800ECAF0
  c->r[3]=R32(c->r[31]+0x000000A0u); // 800ECAF4
  c->r[0]=c->r[3]+0x00010000u; // 800ECAF8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800ECAFC
  if (crb(c,2)) { goto L_800ECB7C; } // 800ECB00
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800ECB04
  cmps(c,0,(int32_t)c->r[0],0); // 800ECB08
  if (crb(c,2)) { goto L_800ECB68; } // 800ECB0C
  c->r[30]=0u+0x80620000u; // 800ECB10
  c->r[4]=0u+0x00000026u; // 800ECB14
  c->r[30]=c->r[30]+0x00007688u; // 800ECB18
  c->r[3]=R32(c->r[30]+0x00000014u); // 800ECB1C
  c->lr=0x800ECB24u; f_80037670(c); // 800ECB20
  cmps(c,0,(int32_t)c->r[3],0); // 800ECB24
  if (!crb(c,2)) { goto L_800ECB68; } // 800ECB28
  c->r[3]=R32(c->r[30]+0x00000014u); // 800ECB2C
  c->r[4]=0u+0x00000002u; // 800ECB30
  c->lr=0x800ECB38u; f_80037670(c); // 800ECB34
  cmps(c,0,(int32_t)c->r[3],0); // 800ECB38
  if (!crb(c,2)) { goto L_800ECB68; } // 800ECB3C
  c->r[30]=0u+0x80550000u; // 800ECB40
  c->r[4]=R32(c->r[31]+0x000000A0u); // 800ECB44
  c->r[3]=c->r[30]+0xFFFFC848u; // 800ECB48
  c->r[5]=0u+0x00000000u; // 800ECB4C
  c->lr=0x800ECB54u; f_8018E2D4(c); // 800ECB50
  c->r[4]=R32(c->r[31]+0x000000A0u); // 800ECB54
  c->r[3]=c->r[30]+0xFFFFC848u; // 800ECB58
  c->r[5]=c->r[1]+0x00000030u; // 800ECB5C
  c->lr=0x800ECB64u; f_8018DEB8(c); // 800ECB60
  goto L_800ECB7C; // 800ECB64
L_800ECB68:;
  c->r[3]=0u+0x80550000u; // 800ECB68
  c->r[4]=R32(c->r[31]+0x000000A0u); // 800ECB6C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800ECB70
  c->r[5]=0u+0x00000001u; // 800ECB74
  c->lr=0x800ECB7Cu; f_8018E2D4(c); // 800ECB78
L_800ECB7C:;
  c->r[3]=R32(c->r[31]+0x000000A4u); // 800ECB7C
  c->r[0]=c->r[3]+0x00010000u; // 800ECB80
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800ECB84
  if (crb(c,2)) { goto L_800ECC54; } // 800ECB88
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800ECB8C
  cmps(c,0,(int32_t)c->r[0],0); // 800ECB90
  if (crb(c,2)) { goto L_800ECC40; } // 800ECB94
  c->r[30]=0u+0x80620000u; // 800ECB98
  c->r[4]=0u+0x00000026u; // 800ECB9C
  c->r[30]=c->r[30]+0x00007688u; // 800ECBA0
  c->r[3]=R32(c->r[30]+0x00000014u); // 800ECBA4
  c->lr=0x800ECBACu; f_80037670(c); // 800ECBA8
  cmps(c,0,(int32_t)c->r[3],0); // 800ECBAC
  if (!crb(c,2)) { goto L_800ECC40; } // 800ECBB0
  c->r[3]=R32(c->r[30]+0x00000014u); // 800ECBB4
  c->r[4]=0u+0x00000002u; // 800ECBB8
  c->lr=0x800ECBC0u; f_80037670(c); // 800ECBBC
  cmpu(c,0,c->r[3],0x00000001u); // 800ECBC0
  if (!crb(c,2)) { goto L_800ECC28; } // 800ECBC4
  c->r[3]=0u+0x805D0000u; // 800ECBC8
  c->r[3]=c->r[3]+0x00003F6Cu; // 800ECBCC
  c->lr=0x800ECBD4u; f_80037AF0(c); // 800ECBD0
  cmpu(c,0,c->r[3],c->r[31]); // 800ECBD4
  if (crb(c,2)) { goto L_800ECBE8; } // 800ECBD8
  c->r[0]=R8(c->r[31]+0x00000078u); // 800ECBDC
  cmpu(c,0,c->r[0],0x00000001u); // 800ECBE0
  if (!crb(c,2)) { goto L_800ECC10; } // 800ECBE4
L_800ECBE8:;
  c->r[30]=0u+0x80550000u; // 800ECBE8
  c->r[4]=R32(c->r[31]+0x000000A4u); // 800ECBEC
  c->r[3]=c->r[30]+0xFFFFC848u; // 800ECBF0
  c->r[5]=0u+0x00000000u; // 800ECBF4
  c->lr=0x800ECBFCu; f_8018E2D4(c); // 800ECBF8
  c->r[4]=R32(c->r[31]+0x000000A4u); // 800ECBFC
  c->r[3]=c->r[30]+0xFFFFC848u; // 800ECC00
  c->r[5]=c->r[1]+0x00000030u; // 800ECC04
  c->lr=0x800ECC0Cu; f_8018DEB8(c); // 800ECC08
  goto L_800ECC54; // 800ECC0C
L_800ECC10:;
  c->r[3]=0u+0x80550000u; // 800ECC10
  c->r[4]=R32(c->r[31]+0x000000A4u); // 800ECC14
  c->r[3]=c->r[3]+0xFFFFC848u; // 800ECC18
  c->r[5]=0u+0x00000001u; // 800ECC1C
  c->lr=0x800ECC24u; f_8018E2D4(c); // 800ECC20
  goto L_800ECC54; // 800ECC24
L_800ECC28:;
  c->r[3]=0u+0x80550000u; // 800ECC28
  c->r[4]=R32(c->r[31]+0x000000A4u); // 800ECC2C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800ECC30
  c->r[5]=0u+0x00000001u; // 800ECC34
  c->lr=0x800ECC3Cu; f_8018E2D4(c); // 800ECC38
  goto L_800ECC54; // 800ECC3C
L_800ECC40:;
  c->r[3]=0u+0x80550000u; // 800ECC40
  c->r[4]=R32(c->r[31]+0x000000A4u); // 800ECC44
  c->r[3]=c->r[3]+0xFFFFC848u; // 800ECC48
  c->r[5]=0u+0x00000001u; // 800ECC4C
  c->lr=0x800ECC54u; f_8018E2D4(c); // 800ECC50
L_800ECC54:;
  c->r[3]=c->r[31]|c->r[31]; // 800ECC54
  c->lr=0x800ECC5Cu; f_800ED998(c); // 800ECC58
  c->r[0]=R32(c->r[1]+0x00000074u); // 800ECC5C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800ECC60
  c->r[30]=R32(c->r[1]+0x00000068u); // 800ECC64
  c->lr=c->r[0]; // 800ECC68
  c->r[1]=c->r[1]+0x00000070u; // 800ECC6C
  return; // 800ECC70
}

// fn_800ECC74
void f_800ECC74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECC74
  c->r[0]=c->lr; // 800ECC78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECC7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECC80
  W32(c->r[1]+0x00000008u,c->r[30]); // 800ECC84
  c->r[30]=c->r[3]|c->r[3]; // 800ECC88
  c->r[4]=R32(c->r[3]+0x000000A0u); // 800ECC8C
  c->r[0]=c->r[4]+0x00010000u; // 800ECC90
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800ECC94
  if (crb(c,2)) { goto L_800ECCCC; } // 800ECC98
  c->r[3]=0u+0x80620000u; // 800ECC9C
  c->r[4]=0u+0x00000025u; // 800ECCA0
  c->r[3]=c->r[3]+0x00007688u; // 800ECCA4
  c->r[3]=R32(c->r[3]+0x00000014u); // 800ECCA8
  c->lr=0x800ECCB0u; f_80037670(c); // 800ECCAC
  cmps(c,0,(int32_t)c->r[3],0); // 800ECCB0
  if (crb(c,2)) { goto L_800ECCCC; } // 800ECCB4
  c->r[3]=0u+0x80550000u; // 800ECCB8
  c->r[4]=R32(c->r[30]+0x000000A0u); // 800ECCBC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800ECCC0
  c->r[5]=0u+0x00000001u; // 800ECCC4
  c->lr=0x800ECCCCu; f_8018E2D4(c); // 800ECCC8
L_800ECCCC:;
  c->r[0]=R8(c->r[30]+0x0000006Fu); // 800ECCCC
  cmps(c,0,(int32_t)c->r[0],0); // 800ECCD0
  if (crb(c,2)) { goto L_800ECD24; } // 800ECCD4
  c->r[31]=0u+0x80620000u; // 800ECCD8
  c->r[31]=c->r[31]+0x00007688u; // 800ECCDC
  c->r[3]=R32(c->r[31]+0x00000014u); // 800ECCE0
  cmps(c,0,(int32_t)c->r[3],0); // 800ECCE4
  if (crb(c,2)) { goto L_800ECD10; } // 800ECCE8
  c->r[4]=0u+0x0000002Au; // 800ECCEC
  c->lr=0x800ECCF4u; f_80037670(c); // 800ECCF0
  cmps(c,0,(int32_t)c->r[3],0); // 800ECCF4
  if (crb(c,2)) { goto L_800ECD10; } // 800ECCF8
  c->r[3]=R32(c->r[31]+0x00000014u); // 800ECCFC
  c->r[4]=0u+0x0000002Du; // 800ECD00
  c->lr=0x800ECD08u; f_80037670(c); // 800ECD04
  cmps(c,0,(int32_t)c->r[3],0); // 800ECD08
  if (crb(c,2)) { goto L_800ECD24; } // 800ECD0C
L_800ECD10:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800ECD10
  c->r[3]=c->r[30]|c->r[30]; // 800ECD14
  c->r[12]=R32(c->r[12]+0x00000020u); // 800ECD18
  c->ctr=c->r[12]; // 800ECD1C
  if (true) { c->lr=0x800ECD24u; dispatch(c,c->ctr); } // 800ECD20
L_800ECD24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECD24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ECD28
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ECD2C
  c->lr=c->r[0]; // 800ECD30
  c->r[1]=c->r[1]+0x00000010u; // 800ECD34
  return; // 800ECD38
}

// fn_800ECD3C
void f_800ECD3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECD3C
  c->r[0]=c->lr; // 800ECD40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECD44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECD48
  c->r[31]=c->r[3]|c->r[3]; // 800ECD4C
  c->r[3]=R32(c->r[3]+0x000000A0u); // 800ECD50
  c->lr=0x800ECD58u; f_8012FBB4(c); // 800ECD54
  c->r[3]=R32(c->r[31]+0x000000A4u); // 800ECD58
  c->lr=0x800ECD60u; f_8012FBB4(c); // 800ECD5C
  c->r[3]=c->r[31]|c->r[31]; // 800ECD60
  c->lr=0x800ECD68u; f_801F4C78(c); // 800ECD64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECD68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ECD6C
  c->lr=c->r[0]; // 800ECD70
  c->r[1]=c->r[1]+0x00000010u; // 800ECD74
  return; // 800ECD78
}

// fn_800ECD7C
void f_800ECD7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECD7C
  c->r[0]=c->lr; // 800ECD80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECD84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECD88
  c->r[31]=c->r[3]|c->r[3]; // 800ECD8C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800ECD90
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800ECD94
  c->lr=0x800ECD9Cu; f_802501B0(c); // 800ECD98
  c->r[3]=c->r[31]|c->r[31]; // 800ECD9C
  c->r[4]=0u+0x00000000u; // 800ECDA0
  c->lr=0x800ECDA8u; f_801F5244(c); // 800ECDA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECDA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ECDAC
  c->lr=c->r[0]; // 800ECDB0
  c->r[1]=c->r[1]+0x00000010u; // 800ECDB4
  return; // 800ECDB8
}

// fn_800ECDBC
void f_800ECDBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECDBC
  c->r[0]=c->lr; // 800ECDC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECDC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECDC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800ECDCC
  c->r[30]=c->r[3]|c->r[3]; // 800ECDD0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800ECDD4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800ECDD8
  c->lr=0x800ECDE0u; f_802501B0(c); // 800ECDDC
  c->r[3]=c->r[30]|c->r[30]; // 800ECDE0
  c->r[4]=0u+0x00000000u; // 800ECDE4
  c->lr=0x800ECDECu; f_801F5244(c); // 800ECDE8
  c->r[4]=R32(c->r[30]+0x00000394u); // 800ECDEC
  c->r[3]=c->r[30]+0x0000002Cu; // 800ECDF0
  c->r[4]=c->r[4]+0x0000005Cu; // 800ECDF4
  c->lr=0x800ECDFCu; f_800361A0(c); // 800ECDF8
  c->r[4]=R32(c->r[30]+0x00000394u); // 800ECDFC
  c->r[3]=c->r[30]|c->r[30]; // 800ECE00
  c->lr=0x800ECE08u; f_801F5418(c); // 800ECE04
  cmps(c,0,(int32_t)c->r[3],0); // 800ECE08
  if (!crb(c,0)) { goto L_800ECE50; } // 800ECE0C
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800ECE10
  c->r[0]=0u+0x00000000u; // 800ECE14
  c->r[6]=0u+0x00000001u; // 800ECE18
  W8(c->r[30]+0x00000078u,c->r[0]); // 800ECE1C
  c->r[3]=c->r[3]|0x00000080u; // 800ECE20
  {uint32_t ea=c->r[2]+0xFFFFA810u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECE24
  W16(c->r[30]+0x000003BEu,c->r[3]); // 800ECE28
  c->r[3]=c->r[30]|c->r[30]; // 800ECE2C
  c->r[4]=0u+0x00000066u; // 800ECE30
  c->r[5]=0u+0x00000000u; // 800ECE34
  W8(c->r[30]+0x0000006Fu,c->r[6]); // 800ECE38
  c->r[6]=0u+0x00000000u; // 800ECE3C
  c->r[7]=0u+0x00000000u; // 800ECE40
  W8(c->r[30]+0x00000074u,c->r[0]); // 800ECE44
  c->lr=0x800ECE4Cu; f_801F4D44(c); // 800ECE48
  goto L_800ECE84; // 800ECE4C
L_800ECE50:;
  c->r[31]=0u+0x805D0000u; // 800ECE50
  c->r[3]=c->r[31]+0x00003F6Cu; // 800ECE54
  c->lr=0x800ECE5Cu; f_800447E4(c); // 800ECE58
  cmpu(c,0,c->r[3],0x00000001u); // 800ECE5C
  if (!crb(c,2)) { goto L_800ECE70; } // 800ECE60
  c->r[0]=0u+0x00000000u; // 800ECE64
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800ECE68
  goto L_800ECE7C; // 800ECE6C
L_800ECE70:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800ECE70
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800ECE74
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800ECE78
L_800ECE7C:;
  c->r[3]=c->r[30]|c->r[30]; // 800ECE7C
  c->lr=0x800ECE84u; f_801F5B14(c); // 800ECE80
L_800ECE84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECE84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ECE88
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ECE8C
  c->lr=c->r[0]; // 800ECE90
  c->r[1]=c->r[1]+0x00000010u; // 800ECE94
  return; // 800ECE98
}

// fn_800ECE9C
void f_800ECE9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECE9C
  c->r[0]=c->lr; // 800ECEA0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800ECEA4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800ECEA8
  c->r[31]=0u+0x803A0000u; // 800ECEAC
  c->r[31]=c->r[31]+0xFFFFEB10u; // 800ECEB0
  W32(c->r[1]+0x00000058u,c->r[30]); // 800ECEB4
  c->r[30]=c->r[3]|c->r[3]; // 800ECEB8
  W32(c->r[1]+0x00000054u,c->r[29]); // 800ECEBC
  W32(c->r[1]+0x00000050u,c->r[28]); // 800ECEC0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800ECEC4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800ECEC8
  c->lr=0x800ECED0u; f_802501B0(c); // 800ECECC
  c->r[3]=c->r[30]+0x00000038u; // 800ECED0
  c->r[4]=c->r[30]+0x0000002Cu; // 800ECED4
  c->lr=0x800ECEDCu; f_800361A0(c); // 800ECED8
  {uint32_t ea=c->r[2]+0xFFFFA810u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECEDC
  c->r[3]=0u+0x80550000u; // 800ECEE0
  c->r[3]=c->r[3]+0x00003D60u; // 800ECEE4
  c->r[4]=c->r[30]+0x00000038u; // 800ECEE8
  c->f[2]=c->f[1]; // 800ECEEC
  c->r[5]=c->r[1]+0x00000008u; // 800ECEF0
  c->f[3]=c->f[1]; // 800ECEF4
  c->r[6]=0u+0x00000000u; // 800ECEF8
  c->r[7]=0u+0x00000000u; // 800ECEFC
  c->lr=0x800ECF04u; f_801D5488(c); // 800ECF00
  c->r[5]=R32(c->r[30]+0x00000394u); // 800ECF04
  c->r[3]=c->r[30]+0x00000060u; // 800ECF08
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ECF0C
  c->r[4]=c->r[5]+0x00000068u; // 800ECF10
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800ECF14
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ECF18
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800ECF1C
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ECF20
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800ECF24
  c->lr=0x800ECF2Cu; f_800361A0(c); // 800ECF28
  c->r[3]=R32(c->r[30]+0x00000394u); // 800ECF2C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800ECF30
  c->lr=0x800ECF38u; f_802501B0(c); // 800ECF34
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800ECF38
  c->r[28]=0u+0x00000001u; // 800ECF3C
  {uint32_t ea=c->r[2]+0xFFFFA820u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECF40
  c->r[4]=c->r[30]+0x0000002Cu; // 800ECF44
  {uint32_t ea=c->r[2]+0xFFFFA824u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ECF48
  c->r[0]=c->r[0]|0x00002000u; // 800ECF4C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800ECF50
  c->r[3]=R32(c->r[30]+0x00000394u); // 800ECF54
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800ECF58
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 800ECF5C
  W8(c->r[3]+0x0000001Cu,c->r[28]); // 800ECF60
  c->r[3]=R32(c->r[30]+0x00000394u); // 800ECF64
  c->r[3]=c->r[3]+0x0000005Cu; // 800ECF68
  c->lr=0x800ECF70u; f_800361A0(c); // 800ECF6C
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ECF70
  c->r[4]=0u+0x00000040u; // 800ECF74
  c->r[3]=R32(c->r[30]+0x00000394u); // 800ECF78
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800ECF7C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800ECF80
  c->r[3]=c->r[3]+0x0000001Cu; // 800ECF84
  c->lr=0x800ECF8Cu; f_802518A4(c); // 800ECF88
  c->r[3]=R32(c->r[30]+0x00000394u); // 800ECF8C
  c->r[4]=0u+0x00000006u; // 800ECF90
  c->r[3]=c->r[3]+0x0000001Cu; // 800ECF94
  c->lr=0x800ECF9Cu; f_80251824(c); // 800ECF98
  c->r[3]=R32(c->r[30]+0x00000394u); // 800ECF9C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800ECFA0
  c->lr=0x800ECFA8u; f_802501B0(c); // 800ECFA4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800ECFA8
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800ECFAC
  cmps(c,0,(int32_t)c->r[0],0); // 800ECFB0
  if (crb(c,2)) { goto L_800ED0D8; } // 800ECFB4
  c->r[3]=c->r[3]+0x00000068u; // 800ECFB8
  c->r[4]=c->r[30]+0x00000060u; // 800ECFBC
  c->lr=0x800ECFC4u; f_800361A0(c); // 800ECFC0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800ECFC4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800ECFC8
  c->lr=0x800ECFD0u; f_8025037C(c); // 800ECFCC
  c->r[6]=R32(c->r[30]+0x00000394u); // 800ECFD0
  c->r[3]=c->r[30]+0x0000002Cu; // 800ECFD4
  c->r[4]=c->r[30]+0x00000060u; // 800ECFD8
  c->r[5]=c->r[1]+0x0000003Cu; // 800ECFDC
  c->r[6]=c->r[6]+0x000000B0u; // 800ECFE0
  c->r[7]=0u+0x00000000u; // 800ECFE4
  c->lr=0x800ECFECu; f_8002BE64(c); // 800ECFE8
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800ECFEC
  c->r[29]=0u+0x805D0000u; // 800ECFF0
  c->r[0]=R32(c->r[30]+0x00000030u); // 800ECFF4
  c->r[29]=c->r[29]+0x00003F6Cu; // 800ECFF8
  {uint32_t ea=c->r[29]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECFFC
  c->r[4]=c->r[30]|c->r[30]; // 800ED000
  W32(c->r[1]+0x00000018u,c->r[3]); // 800ED004
  c->r[7]=c->r[1]+0x00000018u; // 800ED008
  c->r[6]=0u+0x00000030u; // 800ED00C
  c->r[8]=0u+0x00000000u; // 800ED010
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800ED014
  c->r[0]=R32(c->r[30]+0x00000034u); // 800ED018
  W32(c->r[1]+0x00000020u,c->r[0]); // 800ED01C
  c->r[3]=R32(c->r[30]+0x00000438u); // 800ED020
  c->r[5]=R32(c->r[30]+0x00000394u); // 800ED024
  c->lr=0x800ED02Cu; f_801FA6A4(c); // 800ED028
  c->r[0]=R32(c->r[30]+0x000003C4u); // 800ED02C
  cmps(c,0,(int32_t)c->r[0],0); // 800ED030
  if (crb(c,2)) { goto L_800ED04C; } // 800ED034
  c->r[3]=c->r[30]+0x00000044u; // 800ED038
  c->r[4]=c->r[30]+0x000003CCu; // 800ED03C
  c->lr=0x800ED044u; f_800361A0(c); // 800ED040
  W8(c->r[30]+0x00000075u,c->r[28]); // 800ED044
  goto L_800ED0C4; // 800ED048
L_800ED04C:;
  c->r[3]=c->r[29]|c->r[29]; // 800ED04C
  c->lr=0x800ED054u; f_800567B4(c); // 800ED050
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800ED054
  cmps(c,0,(int32_t)c->r[0],6); // 800ED058
  if (!crb(c,2)) { goto L_800ED08C; } // 800ED05C
  c->r[4]=c->r[31]+0x0000003Cu; // 800ED060
  c->r[6]=R32(c->r[31]+0x0000003Cu); // 800ED064
  c->r[5]=R32(c->r[4]+0x00000004u); // 800ED068
  c->r[3]=c->r[30]+0x00000044u; // 800ED06C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800ED070
  c->r[4]=c->r[1]+0x00000030u; // 800ED074
  W32(c->r[1]+0x00000030u,c->r[6]); // 800ED078
  W32(c->r[1]+0x00000034u,c->r[5]); // 800ED07C
  W32(c->r[1]+0x00000038u,c->r[0]); // 800ED080
  c->lr=0x800ED088u; f_800361A0(c); // 800ED084
  goto L_800ED0C4; // 800ED088
L_800ED08C:;
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED08C
  {uint32_t ea=c->r[2]+0xFFFFA810u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED090
  fcmp(c,0,c->f[1],c->f[0]); // 800ED094
  if (!crb(c,1)) { goto L_800ED0C4; } // 800ED098
  c->r[4]=c->r[31]+0x00000048u; // 800ED09C
  c->r[6]=R32(c->r[31]+0x00000048u); // 800ED0A0
  c->r[5]=R32(c->r[4]+0x00000004u); // 800ED0A4
  c->r[3]=c->r[30]+0x00000044u; // 800ED0A8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800ED0AC
  c->r[4]=c->r[1]+0x00000024u; // 800ED0B0
  W32(c->r[1]+0x00000024u,c->r[6]); // 800ED0B4
  W32(c->r[1]+0x00000028u,c->r[5]); // 800ED0B8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800ED0BC
  c->lr=0x800ED0C4u; f_800361A0(c); // 800ED0C0
L_800ED0C4:;
  c->r[3]=R32(c->r[30]+0x00000438u); // 800ED0C4
  c->r[5]=c->r[30]+0x00000044u; // 800ED0C8
  c->r[6]=c->r[31]+0x00000000u; // 800ED0CC
  c->r[4]=0u+0x00000000u; // 800ED0D0
  c->lr=0x800ED0D8u; f_801FBEC0(c); // 800ED0D4
L_800ED0D8:;
  c->r[3]=c->r[30]|c->r[30]; // 800ED0D8
  c->r[4]=0u+0x00000000u; // 800ED0DC
  c->lr=0x800ED0E4u; f_801F7C00(c); // 800ED0E0
  c->r[7]=0u+0x803D0000u; // 800ED0E4
  {uint32_t ea=c->r[7]+0x000042D8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800ED0E8
  c->r[3]=c->r[30]|c->r[30]; // 800ED0EC
  c->r[4]=c->r[1]+0x0000000Cu; // 800ED0F0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800ED0F4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800ED0F8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800ED0FC
  W32(c->r[1]+0x00000010u,c->r[5]); // 800ED100
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED104
  c->lr=0x800ED10Cu; f_800ED12C(c); // 800ED108
  c->r[0]=R32(c->r[1]+0x00000064u); // 800ED10C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800ED110
  c->r[30]=R32(c->r[1]+0x00000058u); // 800ED114
  c->r[29]=R32(c->r[1]+0x00000054u); // 800ED118
  c->r[28]=R32(c->r[1]+0x00000050u); // 800ED11C
  c->lr=c->r[0]; // 800ED120
  c->r[1]=c->r[1]+0x00000060u; // 800ED124
  return; // 800ED128
}

// fn_800ED12C
void f_800ED12C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED12C
  c->r[0]=c->lr; // 800ED130
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED134
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED138
  c->r[31]=c->r[4]|c->r[4]; // 800ED13C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800ED140
  c->r[30]=c->r[3]|c->r[3]; // 800ED144
  c->r[3]=c->r[31]|c->r[31]; // 800ED148
  c->lr=0x800ED150u; f_802B9FDC(c); // 800ED14C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED150
  if (crb(c,2)) { goto L_800ED170; } // 800ED154
  c->r[3]=R32(c->r[31]+0x00000000u); // 800ED158
  c->r[0]=R32(c->r[31]+0x00000004u); // 800ED15C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800ED160
  W32(c->r[30]+0x00000020u,c->r[0]); // 800ED164
  c->r[0]=R32(c->r[31]+0x00000008u); // 800ED168
  W32(c->r[30]+0x00000024u,c->r[0]); // 800ED16C
L_800ED170:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED170
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED174
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ED178
  c->lr=c->r[0]; // 800ED17C
  c->r[1]=c->r[1]+0x00000010u; // 800ED180
  return; // 800ED184
}

