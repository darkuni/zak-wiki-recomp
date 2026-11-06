#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8016BFB4
void f_8016BFB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016BFB4
  c->r[0]=c->lr; // 8016BFB8
  c->r[3]=0u+0x80550000u; // 8016BFBC
  W32(c->r[1]+0x00000064u,c->r[0]); // 8016BFC0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016BFC4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8016BFC8
  c->r[31]=c->r[5]|c->r[5]; // 8016BFCC
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016BFD0
  c->lr=0x8016BFD8u; f_8019C920(c); // 8016BFD4
  cmps(c,0,(int32_t)c->r[3],0); // 8016BFD8
  if (crb(c,2)) { goto L_8016C170; } // 8016BFDC
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 8016BFE0
  c->r[0]=0u+0x00000000u; // 8016BFE4
  c->r[4]=R32(c->r[3]+0x00000030u); // 8016BFE8
  W32(c->r[1]+0x00000044u,c->r[5]); // 8016BFEC
  W32(c->r[1]+0x00000048u,c->r[4]); // 8016BFF0
  c->r[3]=R32(c->r[3]+0x00000034u); // 8016BFF4
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 8016BFF8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8016BFFC
  W32(c->r[1]+0x00000030u,c->r[0]); // 8016C000
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016C004
  W32(c->r[1]+0x00000020u,c->r[0]); // 8016C008
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016C00C
  W32(c->r[1]+0x00000028u,c->r[0]); // 8016C010
  c->r[0]=R8(c->r[31]+0x00000004u); // 8016C014
  cmps(c,0,(int32_t)c->r[0],3); // 8016C018
  if (crb(c,2)) { goto L_8016C09C; } // 8016C01C
  if (!crb(c,0)) { goto L_8016C034; } // 8016C020
  cmps(c,0,(int32_t)c->r[0],1); // 8016C024
  if (crb(c,2)) { goto L_8016C040; } // 8016C028
  if (!crb(c,0)) { goto L_8016C06C; } // 8016C02C
  goto L_8016C0F8; // 8016C030
L_8016C034:;
  cmps(c,0,(int32_t)c->r[0],5); // 8016C034
  if (!crb(c,0)) { goto L_8016C0F8; } // 8016C038
  goto L_8016C0CC; // 8016C03C
L_8016C040:;
  {uint32_t ea=c->r[2]+0xFFFFC808u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C040
  {uint32_t ea=c->r[2]+0xFFFFC9A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016C044
  {uint32_t ea=c->r[2]+0xFFFFC9A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016C048
  {uint32_t ea=c->r[2]+0xFFFFC9ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C04C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[3]);} // 8016C050
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 8016C054
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 8016C058
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8016C05C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8016C060
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 8016C064
  goto L_8016C0F8; // 8016C068
L_8016C06C:;
  {uint32_t ea=c->r[2]+0xFFFFC808u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C06C
  {uint32_t ea=c->r[2]+0xFFFFC9B0u; c->f[4]=c->ps1[4]=RF32(ea);} // 8016C070
  {uint32_t ea=c->r[2]+0xFFFFC9B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016C074
  {uint32_t ea=c->r[2]+0xFFFFC9ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016C078
  {uint32_t ea=c->r[2]+0xFFFFC8D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C07C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 8016C080
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[3]);} // 8016C084
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 8016C088
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 8016C08C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8016C090
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 8016C094
  goto L_8016C0F8; // 8016C098
L_8016C09C:;
  {uint32_t ea=c->r[2]+0xFFFFC808u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C09C
  {uint32_t ea=c->r[2]+0xFFFFC9A8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8016C0A0
  {uint32_t ea=c->r[2]+0xFFFFC9B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016C0A4
  {uint32_t ea=c->r[2]+0xFFFFC9ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016C0A8
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C0AC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 8016C0B0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[3]);} // 8016C0B4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 8016C0B8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 8016C0BC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8016C0C0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 8016C0C4
  goto L_8016C0F8; // 8016C0C8
L_8016C0CC:;
  {uint32_t ea=c->r[2]+0xFFFFC808u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C0CC
  {uint32_t ea=c->r[2]+0xFFFFC9B4u; c->f[4]=c->ps1[4]=RF32(ea);} // 8016C0D0
  {uint32_t ea=c->r[2]+0xFFFFC9A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016C0D4
  {uint32_t ea=c->r[2]+0xFFFFC9ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016C0D8
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C0DC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 8016C0E0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[3]);} // 8016C0E4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 8016C0E8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 8016C0EC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8016C0F0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 8016C0F4
L_8016C0F8:;
  c->r[3]=c->r[1]+0x00000044u; // 8016C0F8
  c->r[4]=c->r[1]+0x0000002Cu; // 8016C0FC
  c->r[5]=c->r[3]|c->r[3]; // 8016C100
  c->lr=0x8016C108u; f_80296A4C(c); // 8016C104
  c->r[6]=R32(c->r[1]+0x00000044u); // 8016C108
  c->r[31]=0u+0x805D0000u; // 8016C10C
  c->r[5]=R32(c->r[1]+0x00000048u); // 8016C110
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016C114
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8016C118
  c->r[4]=c->r[1]+0x00000014u; // 8016C11C
  W32(c->r[1]+0x00000014u,c->r[6]); // 8016C120
  W32(c->r[1]+0x00000018u,c->r[5]); // 8016C124
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8016C128
  c->lr=0x8016C130u; f_80038D04(c); // 8016C12C
  c->r[6]=R32(c->r[1]+0x00000038u); // 8016C130
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016C134
  c->r[5]=R32(c->r[1]+0x0000003Cu); // 8016C138
  c->r[4]=c->r[1]+0x00000008u; // 8016C13C
  c->r[0]=R32(c->r[1]+0x00000040u); // 8016C140
  W32(c->r[1]+0x00000008u,c->r[6]); // 8016C144
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8016C148
  W32(c->r[1]+0x00000010u,c->r[0]); // 8016C14C
  c->lr=0x8016C154u; f_800BEDA4(c); // 8016C150
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C154
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016C158
  c->r[6]=c->r[1]+0x00000020u; // 8016C15C
  c->r[4]=0u+0x00000084u; // 8016C160
  c->r[5]=0u+0x0000019Cu; // 8016C164
  c->r[7]=0u+0x00000000u; // 8016C168
  c->lr=0x8016C170u; f_801F4D44(c); // 8016C16C
L_8016C170:;
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8016C170
  c->r[3]=0u+0x00000001u; // 8016C174
  c->r[0]=R32(c->r[1]+0x00000064u); // 8016C178
  c->lr=c->r[0]; // 8016C17C
  c->r[1]=c->r[1]+0x00000060u; // 8016C180
  return; // 8016C184
}

// fn_8016C188
void f_8016C188(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C188
  c->r[0]=c->lr; // 8016C18C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016C190
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8016C194
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8016C198
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016C19C
  c->r[31]=c->r[5]|c->r[5]; // 8016C1A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016C1A4
  c->r[30]=0u+0x805D0000u; // 8016C1A8
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016C1AC
  c->lr=0x8016C1B4u; f_80166594(c); // 8016C1B0
  cmps(c,0,(int32_t)c->r[3],0); // 8016C1B4
  if (crb(c,2)) { goto L_8016C594; } // 8016C1B8
  c->r[3]=0u+0x80550000u; // 8016C1BC
  c->r[4]=R8(c->r[31]+0x00000003u); // 8016C1C0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016C1C4
  c->lr=0x8016C1CCu; f_8019C920(c); // 8016C1C8
  cmps(c,0,(int32_t)c->r[3],0); // 8016C1CC
  c->r[31]=c->r[3]|c->r[3]; // 8016C1D0
  if (crb(c,2)) { goto L_8016C58C; } // 8016C1D4
  c->r[4]=c->r[30]+0x00003F6Cu; // 8016C1D8
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C1DC
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8016C1E0
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016C1E4
  {uint32_t ea=c->r[3]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C1E8
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 8016C1EC
  {uint32_t ea=c->r[3]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016C1F0
  {uint32_t ea=c->r[4]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016C1F4
  fcmp(c,0,c->f[1],c->f[0]); // 8016C1F8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8016C1FC
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[2]); // 8016C200
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 8016C204
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8016C208
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C20C
  if (!crb(c,2)) { goto L_8016C224; } // 8016C210
  {uint32_t ea=c->r[2]+0xFFFFC8ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C214
  fcmp(c,0,c->f[1],c->f[0]); // 8016C218
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016C21C
  if (crb(c,2)) { goto L_8016C26C; } // 8016C220
L_8016C224:;
  {uint32_t ea=c->r[3]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C224
  {uint32_t ea=c->r[2]+0xFFFFC8D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C228
  fcmp(c,0,c->f[1],c->f[0]); // 8016C22C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C230
  if (!crb(c,2)) { goto L_8016C248; } // 8016C234
  {uint32_t ea=c->r[2]+0xFFFFC868u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C238
  fcmp(c,0,c->f[1],c->f[0]); // 8016C23C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016C240
  if (crb(c,2)) { goto L_8016C26C; } // 8016C244
L_8016C248:;
  {uint32_t ea=c->r[3]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C248
  {uint32_t ea=c->r[2]+0xFFFFC9B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C24C
  fcmp(c,0,c->f[1],c->f[0]); // 8016C250
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C254
  if (!crb(c,2)) { goto L_8016C2DC; } // 8016C258
  {uint32_t ea=c->r[2]+0xFFFFC8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C25C
  fcmp(c,0,c->f[1],c->f[0]); // 8016C260
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016C264
  if (!crb(c,2)) { goto L_8016C2DC; } // 8016C268
L_8016C26C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C26C
  c->lr=0x8016C274u; f_8002C1B0(c); // 8016C270
  c->f[31]=c->f[1]; // 8016C274
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C278
  c->lr=0x8016C280u; f_8002C1B0(c); // 8016C27C
  {uint32_t ea=c->r[2]+0xFFFFC8F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C280
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8016C284
  fcmp(c,0,c->f[0],c->f[31]); // 8016C288
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C28C
  if (!crb(c,2)) { goto L_8016C2B8; } // 8016C290
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C294
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C298
  fcmp(c,0,c->f[1],c->f[0]); // 8016C29C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C2A0
  if (!crb(c,2)) { goto L_8016C2B0; } // 8016C2A4
  c->r[5]=0u+0x00000003u; // 8016C2A8
  goto L_8016C344; // 8016C2AC
L_8016C2B0:;
  c->r[5]=0u+0x00000004u; // 8016C2B0
  goto L_8016C344; // 8016C2B4
L_8016C2B8:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C2B8
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C2BC
  fcmp(c,0,c->f[1],c->f[0]); // 8016C2C0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C2C4
  if (!crb(c,2)) { goto L_8016C2D4; } // 8016C2C8
  c->r[5]=0u+0x00000001u; // 8016C2CC
  goto L_8016C344; // 8016C2D0
L_8016C2D4:;
  c->r[5]=0u+0x00000002u; // 8016C2D4
  goto L_8016C344; // 8016C2D8
L_8016C2DC:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C2DC
  c->lr=0x8016C2E4u; f_8002C1B0(c); // 8016C2E0
  {uint32_t ea=c->r[2]+0xFFFFC8F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C2E4
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 8016C2E8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C2EC
  c->lr=0x8016C2F4u; f_8002C1B0(c); // 8016C2F0
  fcmp(c,0,c->f[1],c->f[31]); // 8016C2F4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C2F8
  if (!crb(c,2)) { goto L_8016C324; } // 8016C2FC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C300
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C304
  fcmp(c,0,c->f[1],c->f[0]); // 8016C308
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C30C
  if (!crb(c,2)) { goto L_8016C31C; } // 8016C310
  c->r[5]=0u+0x00000003u; // 8016C314
  goto L_8016C344; // 8016C318
L_8016C31C:;
  c->r[5]=0u+0x00000004u; // 8016C31C
  goto L_8016C344; // 8016C320
L_8016C324:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C324
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C328
  fcmp(c,0,c->f[1],c->f[0]); // 8016C32C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C330
  if (!crb(c,2)) { goto L_8016C340; } // 8016C334
  c->r[5]=0u+0x00000001u; // 8016C338
  goto L_8016C344; // 8016C33C
L_8016C340:;
  c->r[5]=0u+0x00000002u; // 8016C340
L_8016C344:;
  c->r[3]=0u+0x805D0000u; // 8016C344
  {uint32_t ea=c->r[2]+0xFFFFC8E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C348
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016C34C
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C350
  fcmp(c,0,c->f[1],c->f[0]); // 8016C354
  if (!crb(c,0)) { goto L_8016C360; } // 8016C358
  c->r[5]=0u+0x00000002u; // 8016C35C
L_8016C360:;
  c->r[3]=0u+0x805D0000u; // 8016C360
  {uint32_t ea=c->r[2]+0xFFFFC9BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C364
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016C368
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C36C
  fcmp(c,0,c->f[1],c->f[0]); // 8016C370
  if (!crb(c,1)) { goto L_8016C3A4; } // 8016C374
  {uint32_t ea=c->r[2]+0xFFFFC9C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C378
  fcmp(c,0,c->f[1],c->f[0]); // 8016C37C
  if (!crb(c,0)) { goto L_8016C3A4; } // 8016C380
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C384
  {uint32_t ea=c->r[2]+0xFFFFC960u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C388
  fcmp(c,0,c->f[1],c->f[0]); // 8016C38C
  if (!crb(c,1)) { goto L_8016C3A4; } // 8016C390
  {uint32_t ea=c->r[2]+0xFFFFC9C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C394
  fcmp(c,0,c->f[1],c->f[0]); // 8016C398
  if (!crb(c,0)) { goto L_8016C3A4; } // 8016C39C
  c->r[5]=0u+0x00000004u; // 8016C3A0
L_8016C3A4:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C3A4
  {uint32_t ea=c->r[2]+0xFFFFC9BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C3A8
  fcmp(c,0,c->f[1],c->f[0]); // 8016C3AC
  if (!crb(c,1)) { goto L_8016C3E0; } // 8016C3B0
  {uint32_t ea=c->r[2]+0xFFFFC9C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C3B4
  fcmp(c,0,c->f[1],c->f[0]); // 8016C3B8
  if (!crb(c,0)) { goto L_8016C3E0; } // 8016C3BC
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C3C0
  {uint32_t ea=c->r[2]+0xFFFFC960u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C3C4
  fcmp(c,0,c->f[1],c->f[0]); // 8016C3C8
  if (!crb(c,1)) { goto L_8016C3E0; } // 8016C3CC
  {uint32_t ea=c->r[2]+0xFFFFC9C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C3D0
  fcmp(c,0,c->f[1],c->f[0]); // 8016C3D4
  if (!crb(c,0)) { goto L_8016C3E0; } // 8016C3D8
  c->r[5]=0u+0x00000004u; // 8016C3DC
L_8016C3E0:;
  c->r[3]=0u+0x805D0000u; // 8016C3E0
  {uint32_t ea=c->r[2]+0xFFFFC8A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C3E4
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016C3E8
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C3EC
  fcmp(c,0,c->f[1],c->f[0]); // 8016C3F0
  if (!crb(c,1)) { goto L_8016C4D8; } // 8016C3F4
  {uint32_t ea=c->r[2]+0xFFFFC9C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C3F8
  fcmp(c,0,c->f[1],c->f[0]); // 8016C3FC
  if (!crb(c,0)) { goto L_8016C4D8; } // 8016C400
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C404
  {uint32_t ea=c->r[2]+0xFFFFC9CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C408
  fcmp(c,0,c->f[1],c->f[0]); // 8016C40C
  if (!crb(c,1)) { goto L_8016C4D8; } // 8016C410
  {uint32_t ea=c->r[2]+0xFFFFC9D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C414
  fcmp(c,0,c->f[1],c->f[0]); // 8016C418
  if (!crb(c,0)) { goto L_8016C4D8; } // 8016C41C
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C420
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C424
  fcmp(c,0,c->f[1],c->f[0]); // 8016C428
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C42C
  if (!crb(c,2)) { goto L_8016C448; } // 8016C430
  {uint32_t ea=c->r[2]+0xFFFFC8ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C434
  fcmp(c,0,c->f[1],c->f[0]); // 8016C438
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016C43C
  if (!crb(c,2)) { goto L_8016C448; } // 8016C440
  c->r[5]=0u+0x00000004u; // 8016C444
L_8016C448:;
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C448
  {uint32_t ea=c->r[2]+0xFFFFC8ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C44C
  fcmp(c,0,c->f[1],c->f[0]); // 8016C450
  if (!crb(c,1)) { goto L_8016C468; } // 8016C454
  {uint32_t ea=c->r[2]+0xFFFFC8D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C458
  fcmp(c,0,c->f[1],c->f[0]); // 8016C45C
  if (!crb(c,0)) { goto L_8016C468; } // 8016C460
  c->r[5]=0u+0x00000002u; // 8016C464
L_8016C468:;
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C468
  {uint32_t ea=c->r[2]+0xFFFFC8D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C46C
  fcmp(c,0,c->f[1],c->f[0]); // 8016C470
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C474
  if (!crb(c,2)) { goto L_8016C490; } // 8016C478
  {uint32_t ea=c->r[2]+0xFFFFC868u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C47C
  fcmp(c,0,c->f[1],c->f[0]); // 8016C480
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016C484
  if (!crb(c,2)) { goto L_8016C490; } // 8016C488
  c->r[5]=0u+0x00000003u; // 8016C48C
L_8016C490:;
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C490
  {uint32_t ea=c->r[2]+0xFFFFC868u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C494
  fcmp(c,0,c->f[1],c->f[0]); // 8016C498
  if (!crb(c,1)) { goto L_8016C4B0; } // 8016C49C
  {uint32_t ea=c->r[2]+0xFFFFC9B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C4A0
  fcmp(c,0,c->f[1],c->f[0]); // 8016C4A4
  if (!crb(c,0)) { goto L_8016C4B0; } // 8016C4A8
  c->r[5]=0u+0x00000002u; // 8016C4AC
L_8016C4B0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C4B0
  {uint32_t ea=c->r[2]+0xFFFFC9B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C4B4
  fcmp(c,0,c->f[1],c->f[0]); // 8016C4B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C4BC
  if (!crb(c,2)) { goto L_8016C4D8; } // 8016C4C0
  {uint32_t ea=c->r[2]+0xFFFFC8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C4C4
  fcmp(c,0,c->f[1],c->f[0]); // 8016C4C8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016C4CC
  if (!crb(c,2)) { goto L_8016C4D8; } // 8016C4D0
  c->r[5]=0u+0x00000004u; // 8016C4D4
L_8016C4D8:;
  c->r[3]=0u+0x805D0000u; // 8016C4D8
  {uint32_t ea=c->r[2]+0xFFFFC9D4u; c->f[5]=c->ps1[5]=RF32(ea);} // 8016C4DC
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016C4E0
  {uint32_t ea=c->r[3]+0x00000030u; c->f[6]=c->ps1[6]=RF32(ea);} // 8016C4E4
  fcmp(c,0,c->f[6],c->f[5]); // 8016C4E8
  if (!crb(c,1)) { goto L_8016C598; } // 8016C4EC
  {uint32_t ea=c->r[2]+0xFFFFC9C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C4F0
  fcmp(c,0,c->f[6],c->f[1]); // 8016C4F4
  if (!crb(c,0)) { goto L_8016C598; } // 8016C4F8
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8016C4FC
  {uint32_t ea=c->r[2]+0xFFFFC9D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016C500
  fcmp(c,0,c->f[4],c->f[3]); // 8016C504
  if (!crb(c,1)) { goto L_8016C598; } // 8016C508
  {uint32_t ea=c->r[2]+0xFFFFC9DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C50C
  fcmp(c,0,c->f[4],c->f[0]); // 8016C510
  if (!crb(c,0)) { goto L_8016C598; } // 8016C514
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016C518
  fcmp(c,0,c->f[2],c->f[5]); // 8016C51C
  if (!crb(c,1)) { goto L_8016C598; } // 8016C520
  fcmp(c,0,c->f[2],c->f[1]); // 8016C524
  if (!crb(c,0)) { goto L_8016C598; } // 8016C528
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C52C
  fcmp(c,0,c->f[1],c->f[3]); // 8016C530
  if (!crb(c,1)) { goto L_8016C598; } // 8016C534
  fcmp(c,0,c->f[1],c->f[0]); // 8016C538
  if (!crb(c,0)) { goto L_8016C598; } // 8016C53C
  {uint32_t ea=c->r[2]+0xFFFFC9E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C540
  fcmp(c,0,c->f[2],c->f[0]); // 8016C544
  if (!crb(c,1)) { goto L_8016C56C; } // 8016C548
  fcmp(c,0,c->f[6],c->f[2]); // 8016C54C
  if (crb(c,1)) { goto L_8016C55C; } // 8016C550
  fcmp(c,0,c->f[4],c->f[1]); // 8016C554
  if (!crb(c,0)) { goto L_8016C564; } // 8016C558
L_8016C55C:;
  c->r[5]=0u+0x00000003u; // 8016C55C
  goto L_8016C598; // 8016C560
L_8016C564:;
  c->r[5]=0u+0x00000001u; // 8016C564
  goto L_8016C598; // 8016C568
L_8016C56C:;
  fcmp(c,0,c->f[6],c->f[2]); // 8016C56C
  if (crb(c,1)) { goto L_8016C57C; } // 8016C570
  fcmp(c,0,c->f[4],c->f[1]); // 8016C574
  if (!crb(c,0)) { goto L_8016C584; } // 8016C578
L_8016C57C:;
  c->r[5]=0u+0x00000002u; // 8016C57C
  goto L_8016C598; // 8016C580
L_8016C584:;
  c->r[5]=0u+0x00000001u; // 8016C584
  goto L_8016C598; // 8016C588
L_8016C58C:;
  c->r[5]=0u+0x00000001u; // 8016C58C
  goto L_8016C598; // 8016C590
L_8016C594:;
  c->r[5]=0u+0x00000005u; // 8016C594
L_8016C598:;
  c->r[3]=0u+0x80620000u; // 8016C598
  c->r[4]=0u+0x0000001Au; // 8016C59C
  c->r[3]=c->r[3]+0x00007688u; // 8016C5A0
  c->r[3]=R32(c->r[3]+0x00000014u); // 8016C5A4
  c->lr=0x8016C5ACu; f_80038998(c); // 8016C5A8
  c->r[3]=0u+0x00000001u; // 8016C5AC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8016C5B0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8016C5B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016C5B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016C5BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8016C5C0
  c->lr=c->r[0]; // 8016C5C4
  c->r[1]=c->r[1]+0x00000030u; // 8016C5C8
  return; // 8016C5CC
}

// fn_8016C5D0
void f_8016C5D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C5D0
  c->r[0]=c->lr; // 8016C5D4
  c->r[3]=0u+0x805D0000u; // 8016C5D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016C5DC
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016C5E0
  c->r[4]=c->r[1]+0x00000014u; // 8016C5E4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8016C5E8
  c->r[31]=c->r[5]|c->r[5]; // 8016C5EC
  c->lr=0x8016C5F4u; f_80038E24(c); // 8016C5F0
  c->r[0]=R8(c->r[31]+0x00000003u); // 8016C5F4
  cmps(c,0,(int32_t)c->r[0],0); // 8016C5F8
  if (crb(c,2)) { goto L_8016C60C; } // 8016C5FC
  {uint32_t ea=c->r[2]+0xFFFFC808u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C600
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8016C604
  goto L_8016C614; // 8016C608
L_8016C60C:;
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C60C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8016C610
L_8016C614:;
  c->r[6]=R32(c->r[1]+0x00000014u); // 8016C614
  c->r[3]=0u+0x805D0000u; // 8016C618
  c->r[5]=R32(c->r[1]+0x00000018u); // 8016C61C
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016C620
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8016C624
  c->r[4]=c->r[1]+0x00000008u; // 8016C628
  W32(c->r[1]+0x00000008u,c->r[6]); // 8016C62C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8016C630
  W32(c->r[1]+0x00000010u,c->r[0]); // 8016C634
  c->lr=0x8016C63Cu; f_800BEDA4(c); // 8016C638
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8016C63C
  c->r[3]=0u+0x00000001u; // 8016C640
  c->r[0]=R32(c->r[1]+0x00000034u); // 8016C644
  c->lr=c->r[0]; // 8016C648
  c->r[1]=c->r[1]+0x00000030u; // 8016C64C
  return; // 8016C650
}

// fn_8016C654
void f_8016C654(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C654
  c->r[0]=c->lr; // 8016C658
  c->r[4]=0u+0x0000005Bu; // 8016C65C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016C660
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016C664
  c->r[31]=0u+0x80550000u; // 8016C668
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8016C66C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016C670
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016C674
  c->r[29]=c->r[5]|c->r[5]; // 8016C678
  c->lr=0x8016C680u; f_8019C920(c); // 8016C67C
  c->r[4]=R8(c->r[29]+0x00000003u); // 8016C680
  c->r[30]=c->r[3]|c->r[3]; // 8016C684
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8016C688
  c->lr=0x8016C690u; f_8019C920(c); // 8016C68C
  cmps(c,0,(int32_t)c->r[30],0); // 8016C690
  c->r[31]=c->r[3]|c->r[3]; // 8016C694
  if (crb(c,2)) { goto L_8016C6FC; } // 8016C698
  cmps(c,0,(int32_t)c->r[3],0); // 8016C69C
  if (crb(c,2)) { goto L_8016C6FC; } // 8016C6A0
  c->r[0]=R8(c->r[29]+0x00000003u); // 8016C6A4
  cmps(c,0,(int32_t)c->r[0],0); // 8016C6A8
  if (!crb(c,2)) { goto L_8016C6E4; } // 8016C6AC
  c->r[31]=0u+0x805D0000u; // 8016C6B0
  c->r[3]=c->r[30]+0x0000002Cu; // 8016C6B4
  c->r[31]=c->r[31]+0x00003F6Cu; // 8016C6B8
  c->r[4]=c->r[31]+0x0000002Cu; // 8016C6BC
  c->lr=0x8016C6C4u; f_800361A0(c); // 8016C6C0
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C6C4
  c->r[3]=c->r[30]+0x00000060u; // 8016C6C8
  {uint32_t ea=c->r[2]+0xFFFFC864u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C6CC
  c->r[4]=c->r[31]+0x00000060u; // 8016C6D0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8016C6D4
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 8016C6D8
  c->lr=0x8016C6E0u; f_800361A0(c); // 8016C6DC
  goto L_8016C6FC; // 8016C6E0
L_8016C6E4:;
  c->r[3]=c->r[30]+0x0000002Cu; // 8016C6E4
  c->r[4]=c->r[31]+0x0000002Cu; // 8016C6E8
  c->lr=0x8016C6F0u; f_800361A0(c); // 8016C6EC
  c->r[3]=c->r[30]+0x00000060u; // 8016C6F0
  c->r[4]=c->r[31]+0x00000060u; // 8016C6F4
  c->lr=0x8016C6FCu; f_800361A0(c); // 8016C6F8
L_8016C6FC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016C6FC
  c->r[3]=0u+0x00000001u; // 8016C700
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016C704
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016C708
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016C70C
  c->lr=c->r[0]; // 8016C710
  c->r[1]=c->r[1]+0x00000020u; // 8016C714
  return; // 8016C718
}

// fn_8016C71C
void f_8016C71C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C71C
  c->r[0]=c->lr; // 8016C720
  c->r[4]=0u+0x805D0000u; // 8016C724
  c->r[4]=c->r[4]+0x00003F6Cu; // 8016C728
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016C72C
  c->r[3]=c->r[4]+0x0000002Cu; // 8016C730
  c->r[4]=c->r[4]+0x00000038u; // 8016C734
  c->lr=0x8016C73Cu; f_800361A0(c); // 8016C738
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016C73C
  c->r[3]=0u+0x00000001u; // 8016C740
  c->lr=c->r[0]; // 8016C744
  c->r[1]=c->r[1]+0x00000010u; // 8016C748
  return; // 8016C74C
}

// fn_8016C750
void f_8016C750(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C750
  c->r[0]=c->lr; // 8016C754
  c->r[4]=0u+0x00000012u; // 8016C758
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016C75C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8016C760
  W32(c->r[1]+0x00000028u,c->r[30]); // 8016C764
  c->r[30]=0u+0x80550000u; // 8016C768
  c->r[3]=c->r[30]+0xFFFFCE54u; // 8016C76C
  W32(c->r[1]+0x00000024u,c->r[29]); // 8016C770
  c->r[29]=c->r[5]|c->r[5]; // 8016C774
  c->lr=0x8016C77Cu; f_8019C920(c); // 8016C778
  c->r[31]=c->r[3]|c->r[3]; // 8016C77C
  c->r[3]=c->r[30]+0xFFFFCE54u; // 8016C780
  c->r[4]=0u+0x0000000Au; // 8016C784
  c->lr=0x8016C78Cu; f_8019C920(c); // 8016C788
  c->r[0]=R8(c->r[29]+0x00000003u); // 8016C78C
  c->r[30]=c->r[3]|c->r[3]; // 8016C790
  cmps(c,0,(int32_t)c->r[0],1); // 8016C794
  if (crb(c,2)) { goto L_8016C800; } // 8016C798
  if (!crb(c,0)) { goto L_8016C820; } // 8016C79C
  cmps(c,0,(int32_t)c->r[0],0); // 8016C7A0
  if (!crb(c,0)) { goto L_8016C7AC; } // 8016C7A4
  goto L_8016C820; // 8016C7A8
L_8016C7AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8016C7AC
  if (crb(c,2)) { goto L_8016C820; } // 8016C7B0
  cmps(c,0,(int32_t)c->r[3],0); // 8016C7B4
  if (crb(c,2)) { goto L_8016C820; } // 8016C7B8
  c->r[8]=0u+0x803A0000u; // 8016C7BC
  {uint32_t ea=c->r[8]+0x00002F1Cu; c->r[7]=R32(ea); c->r[8]=ea;} // 8016C7C0
  c->r[3]=c->r[31]+0x0000002Cu; // 8016C7C4
  c->r[4]=c->r[1]+0x00000008u; // 8016C7C8
  c->r[6]=R32(c->r[8]+0x00000004u); // 8016C7CC
  c->r[5]=c->r[30]+0x0000002Cu; // 8016C7D0
  c->r[0]=R32(c->r[8]+0x00000008u); // 8016C7D4
  W32(c->r[1]+0x00000008u,c->r[7]); // 8016C7D8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8016C7DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 8016C7E0
  c->lr=0x8016C7E8u; f_80296A4C(c); // 8016C7E4
  {uint32_t ea=c->r[2]+0xFFFFC8D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C7E8
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C7EC
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 8016C7F0
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[0]);} // 8016C7F4
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[0]);} // 8016C7F8
  goto L_8016C820; // 8016C7FC
L_8016C800:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016C800
  if (crb(c,2)) { goto L_8016C820; } // 8016C804
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C808
  c->r[4]=0u+0x0000006Cu; // 8016C80C
  c->r[5]=0u+0x00000000u; // 8016C810
  c->r[6]=0u+0x00000000u; // 8016C814
  c->r[7]=0u+0x00000000u; // 8016C818
  c->lr=0x8016C820u; f_801F4D44(c); // 8016C81C
L_8016C820:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8016C820
  c->r[3]=0u+0x00000001u; // 8016C824
  c->r[30]=R32(c->r[1]+0x00000028u); // 8016C828
  c->r[29]=R32(c->r[1]+0x00000024u); // 8016C82C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8016C830
  c->lr=c->r[0]; // 8016C834
  c->r[1]=c->r[1]+0x00000030u; // 8016C838
  return; // 8016C83C
}

// fn_8016C840
void f_8016C840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C840
  c->r[0]=c->lr; // 8016C844
  c->r[4]=0u+0x0000003Bu; // 8016C848
  W32(c->r[1]+0x00000054u,c->r[0]); // 8016C84C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8016C850
  c->r[31]=0u+0x80550000u; // 8016C854
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8016C858
  W32(c->r[1]+0x00000048u,c->r[30]); // 8016C85C
  W32(c->r[1]+0x00000044u,c->r[29]); // 8016C860
  c->r[29]=c->r[5]|c->r[5]; // 8016C864
  c->lr=0x8016C86Cu; f_8019C920(c); // 8016C868
  cmps(c,0,(int32_t)c->r[3],0); // 8016C86C
  c->r[30]=c->r[3]|c->r[3]; // 8016C870
  if (crb(c,2)) { goto L_8016C914; } // 8016C874
  c->r[0]=R8(c->r[29]+0x00000003u); // 8016C878
  cmps(c,0,(int32_t)c->r[0],1); // 8016C87C
  if (crb(c,2)) { goto L_8016C8C8; } // 8016C880
  if (!crb(c,0)) { goto L_8016C914; } // 8016C884
  cmps(c,0,(int32_t)c->r[0],0); // 8016C888
  if (!crb(c,0)) { goto L_8016C894; } // 8016C88C
  goto L_8016C914; // 8016C890
L_8016C894:;
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8016C894
  c->r[4]=0u+0x00000007u; // 8016C898
  c->lr=0x8016C8A0u; f_8019C920(c); // 8016C89C
  cmps(c,0,(int32_t)c->r[3],0); // 8016C8A0
  c->r[31]=c->r[3]|c->r[3]; // 8016C8A4
  if (crb(c,2)) { goto L_8016C914; } // 8016C8A8
  c->r[3]=c->r[30]+0x0000002Cu; // 8016C8AC
  c->r[4]=c->r[31]+0x0000002Cu; // 8016C8B0
  c->lr=0x8016C8B8u; f_800361A0(c); // 8016C8B4
  c->r[3]=c->r[30]+0x00000060u; // 8016C8B8
  c->r[4]=c->r[31]+0x00000060u; // 8016C8BC
  c->lr=0x8016C8C4u; f_800361A0(c); // 8016C8C0
  goto L_8016C914; // 8016C8C4
L_8016C8C8:;
  c->r[4]=c->r[1]+0x00000008u; // 8016C8C8
  c->r[5]=0u+0x00000000u; // 8016C8CC
  c->lr=0x8016C8D4u; f_8007C6C8(c); // 8016C8D0
  c->r[3]=c->r[30]|c->r[30]; // 8016C8D4
  c->r[4]=0u+0x00000000u; // 8016C8D8
  c->lr=0x8016C8E0u; f_80039840(c); // 8016C8DC
  c->r[4]=0u+0x803A0000u; // 8016C8E0
  c->r[5]=c->r[1]+0x00000010u; // 8016C8E4
  c->r[4]=c->r[4]+0x00002FA0u; // 8016C8E8
  c->r[6]=0u+0x00000001u; // 8016C8EC
  c->r[4]=c->r[4]+0x0000007Cu; // 8016C8F0
  c->lr=0x8016C8F8u; f_80257018(c); // 8016C8F4
  c->r[5]=R32(c->r[1]+0x00000008u); // 8016C8F8
  c->r[3]=c->r[30]+0x0000002Cu; // 8016C8FC
  c->r[4]=c->r[30]+0x00000060u; // 8016C900
  c->r[6]=c->r[1]+0x00000010u; // 8016C904
  c->r[5]=c->r[5]+0x00000074u; // 8016C908
  c->r[7]=0u+0x00000000u; // 8016C90C
  c->lr=0x8016C914u; f_8002BE64(c); // 8016C910
L_8016C914:;
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8016C914
  c->r[3]=0u+0x00000001u; // 8016C918
  c->r[30]=R32(c->r[1]+0x00000048u); // 8016C91C
  c->r[29]=R32(c->r[1]+0x00000044u); // 8016C920
  c->r[0]=R32(c->r[1]+0x00000054u); // 8016C924
  c->lr=c->r[0]; // 8016C928
  c->r[1]=c->r[1]+0x00000050u; // 8016C92C
  return; // 8016C930
}

// fn_8016C934
void f_8016C934(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C934
  c->r[0]=c->lr; // 8016C938
  c->r[3]=0u+0x80550000u; // 8016C93C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016C940
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016C944
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016C948
  c->r[31]=c->r[5]|c->r[5]; // 8016C94C
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016C950
  c->lr=0x8016C958u; f_8019C920(c); // 8016C954
  cmps(c,0,(int32_t)c->r[3],0); // 8016C958
  if (crb(c,2)) { goto L_8016C978; } // 8016C95C
  c->r[0]=R8(c->r[31]+0x00000003u); // 8016C960
  cmps(c,0,(int32_t)c->r[0],53); // 8016C964
  if (crb(c,2)) { goto L_8016C970; } // 8016C968
  goto L_8016C978; // 8016C96C
L_8016C970:;
  c->r[4]=R8(c->r[31]+0x00000004u); // 8016C970
  c->lr=0x8016C978u; f_800F5490(c); // 8016C974
L_8016C978:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016C978
  c->r[3]=0u+0x00000001u; // 8016C97C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016C980
  c->lr=c->r[0]; // 8016C984
  c->r[1]=c->r[1]+0x00000010u; // 8016C988
  return; // 8016C98C
}

// fn_8016C990
void f_8016C990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C990
  c->r[0]=c->lr; // 8016C994
  c->r[3]=0u+0x80550000u; // 8016C998
  c->r[4]=0u+0x0000005Du; // 8016C99C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016C9A0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016C9A4
  c->lr=0x8016C9ACu; f_8019C920(c); // 8016C9A8
  c->r[4]=c->r[1]+0x0000000Cu; // 8016C9AC
  c->r[5]=0u+0x00000000u; // 8016C9B0
  c->lr=0x8016C9B8u; f_8007C6C8(c); // 8016C9B4
  c->r[3]=0u+0x805D0000u; // 8016C9B8
  c->r[4]=c->r[1]+0x00000008u; // 8016C9BC
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016C9C0
  c->r[5]=0u+0x00000000u; // 8016C9C4
  c->lr=0x8016C9CCu; f_8007C6C8(c); // 8016C9C8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8016C9CC
  c->r[5]=0u+0x00000000u; // 8016C9D0
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016C9D4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000150u); // 8016C9D8
  c->lr=0x8016C9E0u; f_80250DB4(c); // 8016C9DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016C9E0
  c->r[3]=0u+0x00000001u; // 8016C9E4
  c->lr=c->r[0]; // 8016C9E8
  c->r[1]=c->r[1]+0x00000010u; // 8016C9EC
  return; // 8016C9F0
}

// fn_8016C9F4
void f_8016C9F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C9F4
  c->r[0]=c->lr; // 8016C9F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016C9FC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8016CA00
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8016CA04
  c->r[3]=0u+0x80550000u; // 8016CA08
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016CA0C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8016CA10
  W32(c->r[1]+0x00000028u,c->r[30]); // 8016CA14
  W32(c->r[1]+0x00000024u,c->r[29]); // 8016CA18
  c->r[29]=c->r[5]|c->r[5]; // 8016CA1C
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016CA20
  c->lr=0x8016CA28u; f_8019C920(c); // 8016CA24
  c->r[5]=R8(c->r[29]+0x00000004u); // 8016CA28
  c->r[30]=c->r[3]|c->r[3]; // 8016CA2C
  c->r[4]=c->r[1]+0x00000008u; // 8016CA30
  c->lr=0x8016CA38u; f_8007C6C8(c); // 8016CA34
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CA38
  c->r[5]=R32(c->r[1]+0x00000008u); // 8016CA3C
  c->f[2]=c->f[1]; // 8016CA40
  c->r[4]=R8(c->r[29]+0x00000005u); // 8016CA44
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 8016CA48
  c->r[5]=R32(c->r[5]+0x00000034u); // 8016CA4C
  c->lr=0x8016CA54u; f_8024FEAC(c); // 8016CA50
  c->r[31]=R32(c->r[1]+0x00000008u); // 8016CA54
  c->r[3]=c->r[30]|c->r[30]; // 8016CA58
  c->r[4]=R8(c->r[29]+0x00000004u); // 8016CA5C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8016CA60
  c->lr=0x8016CA68u; f_80039840(c); // 8016CA64
  c->r[4]=R8(c->r[29]+0x00000006u); // 8016CA68
  c->r[0]=0u+0x43300000u; // 8016CA6C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8016CA70
  c->f[1]=c->f[31]; // 8016CA74
  {uint32_t ea=c->r[2]+0xFFFFC908u; c->f[2]=RF64(ea);} // 8016CA78
  W32(c->r[1]+0x00000014u,c->r[4]); // 8016CA7C
  c->r[4]=R8(c->r[29]+0x00000005u); // 8016CA80
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8016CA84
  c->r[5]=R32(c->r[31]+0x00000034u); // 8016CA88
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 8016CA8C
  c->lr=0x8016CA94u; f_8024FEAC(c); // 8016CA90
  c->r[3]=0u+0x00000001u; // 8016CA94
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8016CA98
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8016CA9C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8016CAA0
  c->r[30]=R32(c->r[1]+0x00000028u); // 8016CAA4
  c->r[29]=R32(c->r[1]+0x00000024u); // 8016CAA8
  c->r[0]=R32(c->r[1]+0x00000044u); // 8016CAAC
  c->lr=c->r[0]; // 8016CAB0
  c->r[1]=c->r[1]+0x00000040u; // 8016CAB4
  return; // 8016CAB8
}

// fn_8016CABC
void f_8016CABC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016CABC
  c->r[0]=c->lr; // 8016CAC0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016CAC4
  c->r[0]=0u+0x00000000u; // 8016CAC8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8016CACC
  W32(c->r[1]+0x00000028u,c->r[30]); // 8016CAD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016CAD4
  W32(c->r[1]+0x00000018u,c->r[0]); // 8016CAD8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8016CADC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8016CAE0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8016CAE4
  W32(c->r[1]+0x00000010u,c->r[0]); // 8016CAE8
  c->r[0]=R8(c->r[5]+0x00000003u); // 8016CAEC
  cmps(c,0,(int32_t)c->r[0],3); // 8016CAF0
  if (crb(c,2)) { goto L_8016CDE0; } // 8016CAF4
  if (!crb(c,0)) { goto L_8016CF78; } // 8016CAF8
  cmps(c,0,(int32_t)c->r[0],2); // 8016CAFC
  if (!crb(c,0)) { goto L_8016CB08; } // 8016CB00
  goto L_8016CF78; // 8016CB04
L_8016CB08:;
  {uint32_t ea=c->r[2]+0xFFFFC9E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016CB08
  c->r[31]=0u+0x805D0000u; // 8016CB0C
  {uint32_t ea=c->r[2]+0xFFFFC978u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CB10
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CB14
  {uint32_t ea=c->r[2]+0xFFFFC92Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CB18
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 8016CB1C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8016CB20
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8016CB24
  c->lr=0x8016CB2Cu; f_80045264(c); // 8016CB28
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8016CB2C
  cmps(c,0,(int32_t)c->r[0],71); // 8016CB30
  if (crb(c,2)) { goto L_8016CF78; } // 8016CB34
  if (!crb(c,0)) { goto L_8016CB64; } // 8016CB38
  cmps(c,0,(int32_t)c->r[0],66); // 8016CB3C
  if (!crb(c,0)) { goto L_8016CB50; } // 8016CB40
  cmps(c,0,(int32_t)c->r[0],3); // 8016CB44
  if (crb(c,2)) { goto L_8016CB88; } // 8016CB48
  goto L_8016CF78; // 8016CB4C
L_8016CB50:;
  cmps(c,0,(int32_t)c->r[0],70); // 8016CB50
  if (!crb(c,0)) { goto L_8016CC90; } // 8016CB54
  cmps(c,0,(int32_t)c->r[0],68); // 8016CB58
  if (!crb(c,0)) { goto L_8016CC3C; } // 8016CB5C
  goto L_8016CD94; // 8016CB60
L_8016CB64:;
  cmps(c,0,(int32_t)c->r[0],74); // 8016CB64
  if (crb(c,2)) { goto L_8016CD40; } // 8016CB68
  if (!crb(c,0)) { goto L_8016CB7C; } // 8016CB6C
  cmps(c,0,(int32_t)c->r[0],73); // 8016CB70
  if (!crb(c,0)) { goto L_8016CBE4; } // 8016CB74
  goto L_8016CCE8; // 8016CB78
L_8016CB7C:;
  cmps(c,0,(int32_t)c->r[0],81); // 8016CB7C
  if (crb(c,2)) { goto L_8016CD94; } // 8016CB80
  goto L_8016CF78; // 8016CB84
L_8016CB88:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CB88
  c->lr=0x8016CB90u; f_80037AF0(c); // 8016CB8C
  c->r[30]=c->r[3]|c->r[3]; // 8016CB90
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CB94
  c->r[4]=0u+0x00000000u; // 8016CB98
  c->lr=0x8016CBA0u; f_8020C998(c); // 8016CB9C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016CBA0
  c->r[0]=0u+0x00000001u; // 8016CBA4
  {uint32_t ea=c->r[2]+0xFFFFC968u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CBA8
  c->r[3]=c->r[30]|c->r[30]; // 8016CBAC
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CBB0
  c->r[6]=c->r[1]+0x00000014u; // 8016CBB4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8016CBB8
  c->r[7]=c->r[1]+0x00000008u; // 8016CBBC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8016CBC0
  c->r[4]=0u+0x00000068u; // 8016CBC4
  c->r[5]=0u+0x00000003u; // 8016CBC8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8016CBCC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8016CBD0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8016CBD4
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 8016CBD8
  c->lr=0x8016CBE0u; f_801F4D44(c); // 8016CBDC
  goto L_8016CF78; // 8016CBE0
L_8016CBE4:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CBE4
  c->lr=0x8016CBECu; f_80037AF0(c); // 8016CBE8
  c->r[30]=c->r[3]|c->r[3]; // 8016CBEC
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CBF0
  c->r[4]=0u+0x00000000u; // 8016CBF4
  c->lr=0x8016CBFCu; f_8020C998(c); // 8016CBF8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016CBFC
  c->r[3]=c->r[30]|c->r[30]; // 8016CC00
  {uint32_t ea=c->r[2]+0xFFFFC9E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CC04
  c->r[6]=c->r[1]+0x00000014u; // 8016CC08
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CC0C
  c->r[7]=c->r[1]+0x00000008u; // 8016CC10
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 8016CC14
  {uint32_t ea=c->r[2]+0xFFFFC808u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CC18
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8016CC1C
  c->r[4]=0u+0x00000066u; // 8016CC20
  c->r[5]=0u+0x00000000u; // 8016CC24
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 8016CC28
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8016CC2C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8016CC30
  c->lr=0x8016CC38u; f_801F4D44(c); // 8016CC34
  goto L_8016CF78; // 8016CC38
L_8016CC3C:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CC3C
  c->lr=0x8016CC44u; f_80037AF0(c); // 8016CC40
  c->r[30]=c->r[3]|c->r[3]; // 8016CC44
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CC48
  c->r[4]=0u+0x00000000u; // 8016CC4C
  c->lr=0x8016CC54u; f_8020C998(c); // 8016CC50
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016CC54
  c->r[3]=c->r[30]|c->r[30]; // 8016CC58
  {uint32_t ea=c->r[2]+0xFFFFC92Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CC5C
  c->r[6]=c->r[1]+0x00000014u; // 8016CC60
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CC64
  c->r[7]=c->r[1]+0x00000008u; // 8016CC68
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8016CC6C
  c->r[4]=0u+0x00000066u; // 8016CC70
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8016CC74
  c->r[5]=0u+0x00000000u; // 8016CC78
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8016CC7C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8016CC80
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8016CC84
  c->lr=0x8016CC8Cu; f_801F4D44(c); // 8016CC88
  goto L_8016CF78; // 8016CC8C
L_8016CC90:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CC90
  c->lr=0x8016CC98u; f_80037AF0(c); // 8016CC94
  c->r[30]=c->r[3]|c->r[3]; // 8016CC98
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CC9C
  c->r[4]=0u+0x00000000u; // 8016CCA0
  c->lr=0x8016CCA8u; f_8020C998(c); // 8016CCA4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016CCA8
  c->r[3]=c->r[30]|c->r[30]; // 8016CCAC
  {uint32_t ea=c->r[2]+0xFFFFC8FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CCB0
  c->r[6]=c->r[1]+0x00000014u; // 8016CCB4
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CCB8
  c->r[7]=c->r[1]+0x00000008u; // 8016CCBC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 8016CCC0
  {uint32_t ea=c->r[2]+0xFFFFC8D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CCC4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8016CCC8
  c->r[4]=0u+0x00000066u; // 8016CCCC
  c->r[5]=0u+0x00000008u; // 8016CCD0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 8016CCD4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8016CCD8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8016CCDC
  c->lr=0x8016CCE4u; f_801F4D44(c); // 8016CCE0
  goto L_8016CF78; // 8016CCE4
L_8016CCE8:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CCE8
  c->lr=0x8016CCF0u; f_80037AF0(c); // 8016CCEC
  c->r[30]=c->r[3]|c->r[3]; // 8016CCF0
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CCF4
  c->r[4]=0u+0x00000000u; // 8016CCF8
  c->lr=0x8016CD00u; f_8020C998(c); // 8016CCFC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016CD00
  c->r[3]=c->r[30]|c->r[30]; // 8016CD04
  {uint32_t ea=c->r[2]+0xFFFFC988u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CD08
  c->r[6]=c->r[1]+0x00000014u; // 8016CD0C
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CD10
  c->r[7]=c->r[1]+0x00000008u; // 8016CD14
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 8016CD18
  {uint32_t ea=c->r[2]+0xFFFFC808u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CD1C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8016CD20
  c->r[4]=0u+0x00000066u; // 8016CD24
  c->r[5]=0u+0x00000000u; // 8016CD28
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 8016CD2C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8016CD30
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8016CD34
  c->lr=0x8016CD3Cu; f_801F4D44(c); // 8016CD38
  goto L_8016CF78; // 8016CD3C
L_8016CD40:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CD40
  c->lr=0x8016CD48u; f_80037AF0(c); // 8016CD44
  c->r[30]=c->r[3]|c->r[3]; // 8016CD48
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CD4C
  c->r[4]=0u+0x00000000u; // 8016CD50
  c->lr=0x8016CD58u; f_8020C998(c); // 8016CD54
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016CD58
  c->r[3]=c->r[30]|c->r[30]; // 8016CD5C
  {uint32_t ea=c->r[2]+0xFFFFC8F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CD60
  c->r[6]=c->r[1]+0x00000014u; // 8016CD64
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CD68
  c->r[7]=c->r[1]+0x00000008u; // 8016CD6C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8016CD70
  c->r[4]=0u+0x00000066u; // 8016CD74
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8016CD78
  c->r[5]=0u+0x00000000u; // 8016CD7C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8016CD80
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8016CD84
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8016CD88
  c->lr=0x8016CD90u; f_801F4D44(c); // 8016CD8C
  goto L_8016CF78; // 8016CD90
L_8016CD94:;
  c->r[31]=0u+0x805D0000u; // 8016CD94
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CD98
  c->lr=0x8016CDA0u; f_80037AF0(c); // 8016CD9C
  c->r[30]=c->r[3]|c->r[3]; // 8016CDA0
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CDA4
  c->r[4]=0u+0x00000000u; // 8016CDA8
  c->lr=0x8016CDB0u; f_8020C998(c); // 8016CDAC
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CDB0
  c->r[3]=c->r[30]|c->r[30]; // 8016CDB4
  {uint32_t ea=c->r[2]+0xFFFFC9ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CDB8
  c->r[6]=c->r[1]+0x00000014u; // 8016CDBC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8016CDC0
  c->r[7]=c->r[1]+0x00000008u; // 8016CDC4
  c->r[4]=0u+0x00000066u; // 8016CDC8
  c->r[5]=0u+0x00000000u; // 8016CDCC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8016CDD0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8016CDD4
  c->lr=0x8016CDDCu; f_801F4D44(c); // 8016CDD8
  goto L_8016CF78; // 8016CDDC
L_8016CDE0:;
  {uint32_t ea=c->r[2]+0xFFFFC9F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016CDE0
  c->r[31]=0u+0x805D0000u; // 8016CDE4
  {uint32_t ea=c->r[2]+0xFFFFC9F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CDE8
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CDEC
  {uint32_t ea=c->r[2]+0xFFFFC9F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CDF0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 8016CDF4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8016CDF8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8016CDFC
  c->lr=0x8016CE04u; f_80045264(c); // 8016CE00
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8016CE04
  cmps(c,0,(int32_t)c->r[0],70); // 8016CE08
  if (crb(c,2)) { goto L_8016CE30; } // 8016CE0C
  if (!crb(c,0)) { goto L_8016CE20; } // 8016CE10
  cmps(c,0,(int32_t)c->r[0],66); // 8016CE14
  if (crb(c,2)) { goto L_8016CEE0; } // 8016CE18
  goto L_8016CF78; // 8016CE1C
L_8016CE20:;
  cmps(c,0,(int32_t)c->r[0],72); // 8016CE20
  if (crb(c,2)) { goto L_8016CE88; } // 8016CE24
  if (!crb(c,0)) { goto L_8016CF78; } // 8016CE28
  goto L_8016CF28; // 8016CE2C
L_8016CE30:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CE30
  c->lr=0x8016CE38u; f_80037AF0(c); // 8016CE34
  c->r[30]=c->r[3]|c->r[3]; // 8016CE38
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CE3C
  c->r[4]=0u+0x00000000u; // 8016CE40
  c->lr=0x8016CE48u; f_8020C998(c); // 8016CE44
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016CE48
  c->r[3]=c->r[30]|c->r[30]; // 8016CE4C
  {uint32_t ea=c->r[2]+0xFFFFC8FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CE50
  c->r[6]=c->r[1]+0x00000014u; // 8016CE54
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CE58
  c->r[7]=c->r[1]+0x00000008u; // 8016CE5C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 8016CE60
  {uint32_t ea=c->r[2]+0xFFFFC8D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CE64
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8016CE68
  c->r[4]=0u+0x00000066u; // 8016CE6C
  c->r[5]=0u+0x00000008u; // 8016CE70
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 8016CE74
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8016CE78
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8016CE7C
  c->lr=0x8016CE84u; f_801F4D44(c); // 8016CE80
  goto L_8016CF78; // 8016CE84
L_8016CE88:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CE88
  c->lr=0x8016CE90u; f_80037AF0(c); // 8016CE8C
  c->r[30]=c->r[3]|c->r[3]; // 8016CE90
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CE94
  c->r[4]=0u+0x00000000u; // 8016CE98
  c->lr=0x8016CEA0u; f_8020C998(c); // 8016CE9C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016CEA0
  c->r[3]=c->r[30]|c->r[30]; // 8016CEA4
  {uint32_t ea=c->r[2]+0xFFFFC988u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CEA8
  c->r[6]=c->r[1]+0x00000014u; // 8016CEAC
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CEB0
  c->r[7]=c->r[1]+0x00000008u; // 8016CEB4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 8016CEB8
  {uint32_t ea=c->r[2]+0xFFFFC808u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CEBC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8016CEC0
  c->r[4]=0u+0x00000066u; // 8016CEC4
  c->r[5]=0u+0x00000000u; // 8016CEC8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 8016CECC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8016CED0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8016CED4
  c->lr=0x8016CEDCu; f_801F4D44(c); // 8016CED8
  goto L_8016CF78; // 8016CEDC
L_8016CEE0:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CEE0
  c->lr=0x8016CEE8u; f_80037AF0(c); // 8016CEE4
  c->r[30]=c->r[3]|c->r[3]; // 8016CEE8
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CEEC
  c->r[4]=0u+0x00000000u; // 8016CEF0
  c->lr=0x8016CEF8u; f_8020C998(c); // 8016CEF4
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CEF8
  c->r[3]=c->r[30]|c->r[30]; // 8016CEFC
  {uint32_t ea=c->r[2]+0xFFFFC9ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CF00
  c->r[6]=c->r[1]+0x00000014u; // 8016CF04
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8016CF08
  c->r[7]=c->r[1]+0x00000008u; // 8016CF0C
  c->r[4]=0u+0x00000066u; // 8016CF10
  c->r[5]=0u+0x00000000u; // 8016CF14
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8016CF18
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8016CF1C
  c->lr=0x8016CF24u; f_801F4D44(c); // 8016CF20
  goto L_8016CF78; // 8016CF24
L_8016CF28:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CF28
  c->lr=0x8016CF30u; f_80037AF0(c); // 8016CF2C
  c->r[30]=c->r[3]|c->r[3]; // 8016CF30
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016CF34
  c->r[4]=0u+0x00000000u; // 8016CF38
  c->lr=0x8016CF40u; f_8020C998(c); // 8016CF3C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016CF40
  c->r[3]=c->r[30]|c->r[30]; // 8016CF44
  {uint32_t ea=c->r[2]+0xFFFFC92Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CF48
  c->r[6]=c->r[1]+0x00000014u; // 8016CF4C
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CF50
  c->r[7]=c->r[1]+0x00000008u; // 8016CF54
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8016CF58
  c->r[4]=0u+0x00000066u; // 8016CF5C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8016CF60
  c->r[5]=0u+0x00000000u; // 8016CF64
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8016CF68
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8016CF6C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8016CF70
  c->lr=0x8016CF78u; f_801F4D44(c); // 8016CF74
L_8016CF78:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8016CF78
  c->r[3]=0u+0x00000001u; // 8016CF7C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8016CF80
  c->r[0]=R32(c->r[1]+0x00000034u); // 8016CF84
  c->lr=c->r[0]; // 8016CF88
  c->r[1]=c->r[1]+0x00000030u; // 8016CF8C
  return; // 8016CF90
}

// fn_8016CF94
void f_8016CF94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016CF94
  c->r[0]=c->lr; // 8016CF98
  c->r[3]=c->r[13]+0xFFFFAB38u; // 8016CF9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016CFA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016CFA4
  c->r[31]=c->r[5]|c->r[5]; // 8016CFA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016CFAC
  c->r[30]=c->r[4]|c->r[4]; // 8016CFB0
  c->lr=0x8016CFB8u; f_80211724(c); // 8016CFB4
  c->r[0]=R8(c->r[31]+0x00000003u); // 8016CFB8
  c->r[3]=rotl(c->r[3],0)&0x0000001Fu; // 8016CFBC
  cmps(c,0,(int32_t)c->r[0],1); // 8016CFC0
  if (crb(c,2)) { goto L_8016D018; } // 8016CFC4
  if (!crb(c,0)) { goto L_8016CFD8; } // 8016CFC8
  cmps(c,0,(int32_t)c->r[0],0); // 8016CFCC
  if (!crb(c,0)) { goto L_8016CFE4; } // 8016CFD0
  goto L_8016D078; // 8016CFD4
L_8016CFD8:;
  cmps(c,0,(int32_t)c->r[0],3); // 8016CFD8
  if (!crb(c,0)) { goto L_8016D078; } // 8016CFDC
  goto L_8016D058; // 8016CFE0
L_8016CFE4:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 8016CFE4
  cmps(c,0,(int32_t)c->r[0],0); // 8016CFE8
  if (crb(c,2)) { goto L_8016CFF8; } // 8016CFEC
  c->r[5]=0u+0x00000050u; // 8016CFF0
  goto L_8016D078; // 8016CFF4
L_8016CFF8:;
  cmpu(c,0,c->r[3],0x0000000Bu); // 8016CFF8
  c->r[5]=0u+0x00000049u; // 8016CFFC
  if (crb(c,0)) { goto L_8016D008; } // 8016D000
  c->r[5]=0u+0x0000004Au; // 8016D004
L_8016D008:;
  cmpu(c,0,c->r[3],0x00000016u); // 8016D008
  if (crb(c,0)) { goto L_8016D078; } // 8016D00C
  c->r[5]=0u+0x0000004Bu; // 8016D010
  goto L_8016D078; // 8016D014
L_8016D018:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 8016D018
  cmps(c,0,(int32_t)c->r[0],0); // 8016D01C
  if (crb(c,2)) { goto L_8016D02C; } // 8016D020
  c->r[5]=0u+0x00000052u; // 8016D024
  goto L_8016D078; // 8016D028
L_8016D02C:;
  cmpu(c,0,c->r[3],0x00000008u); // 8016D02C
  c->r[5]=0u+0x0000004Cu; // 8016D030
  if (crb(c,0)) { goto L_8016D03C; } // 8016D034
  c->r[5]=0u+0x0000004Du; // 8016D038
L_8016D03C:;
  cmpu(c,0,c->r[3],0x00000010u); // 8016D03C
  if (crb(c,0)) { goto L_8016D048; } // 8016D040
  c->r[5]=0u+0x0000004Eu; // 8016D044
L_8016D048:;
  cmpu(c,0,c->r[3],0x00000018u); // 8016D048
  if (crb(c,0)) { goto L_8016D078; } // 8016D04C
  c->r[5]=0u+0x0000004Fu; // 8016D050
  goto L_8016D078; // 8016D054
L_8016D058:;
  cmpu(c,0,c->r[3],0x0000000Au); // 8016D058
  c->r[5]=0u+0x00000049u; // 8016D05C
  if (crb(c,0)) { goto L_8016D068; } // 8016D060
  c->r[5]=0u+0x0000004Au; // 8016D064
L_8016D068:;
  cmpu(c,0,c->r[3],0x00000014u); // 8016D068
  if (crb(c,0)) { goto L_8016D078; } // 8016D06C
  c->r[0]=c->r[5]+0x00000001u; // 8016D070
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 8016D074
L_8016D078:;
  c->r[3]=c->r[30]|c->r[30]; // 8016D078
  c->r[4]=0u+0x00000004u; // 8016D07C
  c->r[6]=0u+0x00000001u; // 8016D080
  c->r[7]=0u+0x00000001u; // 8016D084
  c->lr=0x8016D08Cu; f_8017900C(c); // 8016D088
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016D08C
  c->r[3]=0u+0x00000001u; // 8016D090
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016D094
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016D098
  c->lr=c->r[0]; // 8016D09C
  c->r[1]=c->r[1]+0x00000010u; // 8016D0A0
  return; // 8016D0A4
}

// fn_8016D0A8
void f_8016D0A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D0A8
  c->r[0]=c->lr; // 8016D0AC
  c->r[3]=0u+0x805D0000u; // 8016D0B0
  c->r[5]=0u+0x00000001u; // 8016D0B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016D0B8
  c->r[4]=c->r[1]+0x00000008u; // 8016D0BC
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016D0C0
  c->lr=0x8016D0C8u; f_8007C6C8(c); // 8016D0C4
  {uint32_t ea=c->r[2]+0xFFFFC8FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D0C8
  c->r[3]=0u+0x00000001u; // 8016D0CC
  c->r[4]=R32(c->r[1]+0x00000008u); // 8016D0D0
  {uint32_t ea=c->r[4]+0x00000074u; WF32(ea,c->f[0]);} // 8016D0D4
  c->r[4]=R32(c->r[1]+0x00000008u); // 8016D0D8
  {uint32_t ea=c->r[4]+0x00000078u; WF32(ea,c->f[0]);} // 8016D0DC
  c->r[4]=R32(c->r[1]+0x00000008u); // 8016D0E0
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 8016D0E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016D0E8
  c->lr=c->r[0]; // 8016D0EC
  c->r[1]=c->r[1]+0x00000010u; // 8016D0F0
  return; // 8016D0F4
}

// fn_8016D0F8
void f_8016D0F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D0F8
  c->r[0]=c->lr; // 8016D0FC
  c->r[3]=0u+0x80550000u; // 8016D100
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016D104
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016D108
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016D10C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016D110
  c->r[30]=c->r[5]|c->r[5]; // 8016D114
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016D118
  c->lr=0x8016D120u; f_8019C920(c); // 8016D11C
  cmps(c,0,(int32_t)c->r[3],0); // 8016D120
  c->r[31]=c->r[3]|c->r[3]; // 8016D124
  if (crb(c,2)) { goto L_8016D2D8; } // 8016D128
  c->r[0]=R8(c->r[30]+0x00000003u); // 8016D12C
  c->r[30]=0u+0x00000002u; // 8016D130
  cmps(c,0,(int32_t)c->r[0],11); // 8016D134
  if (crb(c,2)) { goto L_8016D224; } // 8016D138
  if (!crb(c,0)) { goto L_8016D2CC; } // 8016D13C
  cmps(c,0,(int32_t)c->r[0],10); // 8016D140
  if (!crb(c,0)) { goto L_8016D14C; } // 8016D144
  goto L_8016D2CC; // 8016D148
L_8016D14C:;
  c->r[3]=0u+0x80620000u; // 8016D14C
  c->r[4]=0u+0x00000013u; // 8016D150
  c->r[3]=c->r[3]+0x00007688u; // 8016D154
  c->r[3]=R32(c->r[3]+0x00000014u); // 8016D158
  c->lr=0x8016D160u; f_8003560C(c); // 8016D15C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016D160
  cmpu(c,0,c->r[0],0x00000001u); // 8016D164
  if (crb(c,2)) { goto L_8016D194; } // 8016D168
  cmpu(c,0,c->r[0],0x00000003u); // 8016D16C
  if (crb(c,2)) { goto L_8016D194; } // 8016D170
  cmpu(c,0,c->r[0],0x00000005u); // 8016D174
  if (crb(c,2)) { goto L_8016D194; } // 8016D178
  cmpu(c,0,c->r[0],0x0000000Bu); // 8016D17C
  if (crb(c,2)) { goto L_8016D194; } // 8016D180
  cmpu(c,0,c->r[0],0x0000000Du); // 8016D184
  if (crb(c,2)) { goto L_8016D194; } // 8016D188
  cmpu(c,0,c->r[0],0x0000000Fu); // 8016D18C
  if (!crb(c,2)) { goto L_8016D20C; } // 8016D190
L_8016D194:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D194
  {uint32_t ea=c->r[2]+0xFFFFC8A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D198
  fcmp(c,0,c->f[1],c->f[0]); // 8016D19C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D1A0
  if (!crb(c,2)) { goto L_8016D1BC; } // 8016D1A4
  {uint32_t ea=c->r[2]+0xFFFFC874u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D1A8
  fcmp(c,0,c->f[1],c->f[0]); // 8016D1AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016D1B0
  if (!crb(c,2)) { goto L_8016D1BC; } // 8016D1B4
  c->r[30]=0u+0x00000000u; // 8016D1B8
L_8016D1BC:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D1BC
  {uint32_t ea=c->r[2]+0xFFFFC9FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D1C0
  fcmp(c,0,c->f[1],c->f[0]); // 8016D1C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D1C8
  if (!crb(c,2)) { goto L_8016D1E4; } // 8016D1CC
  {uint32_t ea=c->r[2]+0xFFFFCA00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D1D0
  fcmp(c,0,c->f[1],c->f[0]); // 8016D1D4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016D1D8
  if (!crb(c,2)) { goto L_8016D1E4; } // 8016D1DC
  c->r[30]=0u+0x00000000u; // 8016D1E0
L_8016D1E4:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D1E4
  {uint32_t ea=c->r[2]+0xFFFFCA04u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D1E8
  fcmp(c,0,c->f[1],c->f[0]); // 8016D1EC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D1F0
  if (!crb(c,2)) { goto L_8016D20C; } // 8016D1F4
  {uint32_t ea=c->r[2]+0xFFFFCA08u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D1F8
  fcmp(c,0,c->f[1],c->f[0]); // 8016D1FC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016D200
  if (!crb(c,2)) { goto L_8016D20C; } // 8016D204
  c->r[30]=0u+0x00000000u; // 8016D208
L_8016D20C:;
  cmpu(c,0,c->r[0],0x00000006u); // 8016D20C
  if (crb(c,2)) { goto L_8016D21C; } // 8016D210
  cmpu(c,0,c->r[0],0x0000000Au); // 8016D214
  if (!crb(c,2)) { goto L_8016D2CC; } // 8016D218
L_8016D21C:;
  c->r[30]=0u+0x00000000u; // 8016D21C
  goto L_8016D2CC; // 8016D220
L_8016D224:;
  c->r[3]=0u+0x80620000u; // 8016D224
  c->r[4]=0u+0x00000014u; // 8016D228
  c->r[3]=c->r[3]+0x00007688u; // 8016D22C
  c->r[3]=R32(c->r[3]+0x00000014u); // 8016D230
  c->lr=0x8016D238u; f_8003560C(c); // 8016D234
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8016D238
  cmpu(c,0,c->r[3],0x00000003u); // 8016D23C
  if (!crb(c,2)) { goto L_8016D248; } // 8016D240
  c->r[30]=0u+0x00000000u; // 8016D244
L_8016D248:;
  cmpu(c,0,c->r[3],0x00000004u); // 8016D248
  if (crb(c,2)) { goto L_8016D260; } // 8016D24C
  c->r[0]=c->r[3]+0x000000F6u; // 8016D250
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8016D254
  cmpu(c,0,c->r[0],0x00000001u); // 8016D258
  if (crb(c,1)) { goto L_8016D264; } // 8016D25C
L_8016D260:;
  c->r[30]=0u+0x00000000u; // 8016D260
L_8016D264:;
  cmpu(c,0,c->r[3],0x00000005u); // 8016D264
  if (crb(c,2)) { goto L_8016D27C; } // 8016D268
  cmpu(c,0,c->r[3],0x00000007u); // 8016D26C
  if (crb(c,2)) { goto L_8016D27C; } // 8016D270
  cmpu(c,0,c->r[3],0x00000009u); // 8016D274
  if (!crb(c,2)) { goto L_8016D2CC; } // 8016D278
L_8016D27C:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D27C
  {uint32_t ea=c->r[2]+0xFFFFC9FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D280
  fcmp(c,0,c->f[1],c->f[0]); // 8016D284
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D288
  if (!crb(c,2)) { goto L_8016D2A4; } // 8016D28C
  {uint32_t ea=c->r[2]+0xFFFFCA00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D290
  fcmp(c,0,c->f[1],c->f[0]); // 8016D294
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016D298
  if (!crb(c,2)) { goto L_8016D2A4; } // 8016D29C
  c->r[30]=0u+0x00000000u; // 8016D2A0
L_8016D2A4:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D2A4
  {uint32_t ea=c->r[2]+0xFFFFCA0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D2A8
  fcmp(c,0,c->f[1],c->f[0]); // 8016D2AC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D2B0
  if (!crb(c,2)) { goto L_8016D2CC; } // 8016D2B4
  {uint32_t ea=c->r[2]+0xFFFFCA10u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D2B8
  fcmp(c,0,c->f[1],c->f[0]); // 8016D2BC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016D2C0
  if (!crb(c,2)) { goto L_8016D2CC; } // 8016D2C4
  c->r[30]=0u+0x00000000u; // 8016D2C8
L_8016D2CC:;
  c->r[3]=c->r[31]|c->r[31]; // 8016D2CC
  c->r[4]=c->r[30]|c->r[30]; // 8016D2D0
  c->lr=0x8016D2D8u; f_8007BEB8(c); // 8016D2D4
L_8016D2D8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016D2D8
  c->r[3]=0u+0x00000001u; // 8016D2DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016D2E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016D2E4
  c->lr=c->r[0]; // 8016D2E8
  c->r[1]=c->r[1]+0x00000010u; // 8016D2EC
  return; // 8016D2F0
}

// fn_8016D2F4
void f_8016D2F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D2F4
  c->r[0]=c->lr; // 8016D2F8
  c->r[3]=0u+0x80620000u; // 8016D2FC
  c->r[4]=0u+0x00000079u; // 8016D300
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016D304
  c->r[3]=c->r[3]+0x00007688u; // 8016D308
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016D30C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016D310
  c->r[3]=R32(c->r[3]+0x00000014u); // 8016D314
  c->lr=0x8016D31Cu; f_8003560C(c); // 8016D318
  c->r[4]=0u+0x80550000u; // 8016D31C
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 8016D320
  c->r[3]=c->r[4]+0xFFFFCE54u; // 8016D324
  c->r[4]=0u+0x00000007u; // 8016D328
  c->lr=0x8016D330u; f_8019C920(c); // 8016D32C
  cmps(c,0,(int32_t)c->r[3],0); // 8016D330
  c->r[30]=c->r[3]|c->r[3]; // 8016D334
  if (crb(c,2)) { goto L_8016D4F8; } // 8016D338
  c->r[4]=c->r[1]+0x00000008u; // 8016D33C
  c->r[5]=0u+0x00000000u; // 8016D340
  c->lr=0x8016D348u; f_8007C6C8(c); // 8016D344
  cmpu(c,0,c->r[31],0x00000006u); // 8016D348
  if (crb(c,1)) { goto L_8016D4E0; } // 8016D34C
  c->r[3]=0u+0x804B0000u; // 8016D350
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8016D354
  c->r[3]=c->r[3]+0xFFFF8A3Cu; // 8016D358
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016D35C
  c->ctr=c->r[3]; // 8016D360
  if (true) { switch (c->ctr) { case 0x8016D368u: goto L_8016D368; case 0x8016D3A0u: goto L_8016D3A0; case 0x8016D3D8u: goto L_8016D3D8; case 0x8016D410u: goto L_8016D410; case 0x8016D448u: goto L_8016D448; case 0x8016D480u: goto L_8016D480; case 0x8016D4B8u: goto L_8016D4B8; default: break; } dispatch(c,c->ctr); return; } // 8016D364
L_8016D368:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016D368
  {uint32_t ea=c->r[2]+0xFFFFCA14u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D36C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D370
  fcmp(c,0,c->f[1],c->f[0]); // 8016D374
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D378
  if (!crb(c,2)) { goto L_8016D4E0; } // 8016D37C
  c->r[3]=c->r[30]|c->r[30]; // 8016D380
  c->r[4]=0u+0x0000001Au; // 8016D384
  c->r[5]=0u+0x00000005u; // 8016D388
  c->r[6]=0u+0x00000001u; // 8016D38C
  c->r[7]=0u+0x00000001u; // 8016D390
  c->lr=0x8016D398u; f_8017900C(c); // 8016D394
  c->r[31]=c->r[31]+0x00000001u; // 8016D398
  goto L_8016D4E0; // 8016D39C
L_8016D3A0:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016D3A0
  {uint32_t ea=c->r[2]+0xFFFFCA18u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D3A4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D3A8
  fcmp(c,0,c->f[1],c->f[0]); // 8016D3AC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D3B0
  if (!crb(c,2)) { goto L_8016D4E0; } // 8016D3B4
  c->r[3]=c->r[30]|c->r[30]; // 8016D3B8
  c->r[4]=0u+0x0000001Au; // 8016D3BC
  c->r[5]=0u+0x00000005u; // 8016D3C0
  c->r[6]=0u+0x00000001u; // 8016D3C4
  c->r[7]=0u+0x00000001u; // 8016D3C8
  c->lr=0x8016D3D0u; f_8017900C(c); // 8016D3CC
  c->r[31]=c->r[31]+0x00000001u; // 8016D3D0
  goto L_8016D4E0; // 8016D3D4
L_8016D3D8:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016D3D8
  {uint32_t ea=c->r[2]+0xFFFFCA1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D3DC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D3E0
  fcmp(c,0,c->f[1],c->f[0]); // 8016D3E4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D3E8
  if (!crb(c,2)) { goto L_8016D4E0; } // 8016D3EC
  c->r[3]=c->r[30]|c->r[30]; // 8016D3F0
  c->r[4]=0u+0x0000001Au; // 8016D3F4
  c->r[5]=0u+0x00000005u; // 8016D3F8
  c->r[6]=0u+0x00000001u; // 8016D3FC
  c->r[7]=0u+0x00000001u; // 8016D400
  c->lr=0x8016D408u; f_8017900C(c); // 8016D404
  c->r[31]=c->r[31]+0x00000001u; // 8016D408
  goto L_8016D4E0; // 8016D40C
L_8016D410:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016D410
  {uint32_t ea=c->r[2]+0xFFFFCA20u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D414
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D418
  fcmp(c,0,c->f[1],c->f[0]); // 8016D41C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D420
  if (!crb(c,2)) { goto L_8016D4E0; } // 8016D424
  c->r[3]=c->r[30]|c->r[30]; // 8016D428
  c->r[4]=0u+0x0000001Au; // 8016D42C
  c->r[5]=0u+0x00000006u; // 8016D430
  c->r[6]=0u+0x00000001u; // 8016D434
  c->r[7]=0u+0x00000001u; // 8016D438
  c->lr=0x8016D440u; f_8017900C(c); // 8016D43C
  c->r[31]=c->r[31]+0x00000001u; // 8016D440
  goto L_8016D4E0; // 8016D444
L_8016D448:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016D448
  {uint32_t ea=c->r[2]+0xFFFFC960u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D44C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D450
  fcmp(c,0,c->f[1],c->f[0]); // 8016D454
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D458
  if (!crb(c,2)) { goto L_8016D4E0; } // 8016D45C
  c->r[3]=c->r[30]|c->r[30]; // 8016D460
  c->r[4]=0u+0x0000001Au; // 8016D464
  c->r[5]=0u+0x00000006u; // 8016D468
  c->r[6]=0u+0x00000001u; // 8016D46C
  c->r[7]=0u+0x00000001u; // 8016D470
  c->lr=0x8016D478u; f_8017900C(c); // 8016D474
  c->r[31]=c->r[31]+0x00000001u; // 8016D478
  goto L_8016D4E0; // 8016D47C
L_8016D480:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016D480
  {uint32_t ea=c->r[2]+0xFFFFCA24u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D484
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D488
  fcmp(c,0,c->f[1],c->f[0]); // 8016D48C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D490
  if (!crb(c,2)) { goto L_8016D4E0; } // 8016D494
  c->r[3]=c->r[30]|c->r[30]; // 8016D498
  c->r[4]=0u+0x0000001Au; // 8016D49C
  c->r[5]=0u+0x00000006u; // 8016D4A0
  c->r[6]=0u+0x00000001u; // 8016D4A4
  c->r[7]=0u+0x00000001u; // 8016D4A8
  c->lr=0x8016D4B0u; f_8017900C(c); // 8016D4AC
  c->r[31]=c->r[31]+0x00000001u; // 8016D4B0
  goto L_8016D4E0; // 8016D4B4
L_8016D4B8:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016D4B8
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D4BC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D4C0
  fcmp(c,0,c->f[1],c->f[0]); // 8016D4C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D4C8
  if (!crb(c,2)) { goto L_8016D4E0; } // 8016D4CC
  {uint32_t ea=c->r[2]+0xFFFFC864u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D4D0
  fcmp(c,0,c->f[1],c->f[0]); // 8016D4D4
  if (!crb(c,0)) { goto L_8016D4E0; } // 8016D4D8
  c->r[31]=0u+0x00000000u; // 8016D4DC
L_8016D4E0:;
  c->r[3]=0u+0x80620000u; // 8016D4E0
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 8016D4E4
  c->r[3]=c->r[3]+0x00007688u; // 8016D4E8
  c->r[4]=0u+0x00000079u; // 8016D4EC
  c->r[3]=R32(c->r[3]+0x00000014u); // 8016D4F0
  c->lr=0x8016D4F8u; f_80038998(c); // 8016D4F4
L_8016D4F8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016D4F8
  c->r[3]=0u+0x00000001u; // 8016D4FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016D500
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016D504
  c->lr=c->r[0]; // 8016D508
  c->r[1]=c->r[1]+0x00000020u; // 8016D50C
  return; // 8016D510
}

// fn_8016D514
void f_8016D514(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D514
  c->r[0]=c->lr; // 8016D518
  c->r[4]=0u+0x0000007Au; // 8016D51C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016D520
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016D524
  c->r[31]=0u+0x80620000u; // 8016D528
  c->r[31]=c->r[31]+0x00007688u; // 8016D52C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016D530
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016D534
  W32(c->r[1]+0x00000010u,c->r[28]); // 8016D538
  c->r[28]=c->r[5]|c->r[5]; // 8016D53C
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016D540
  c->lr=0x8016D548u; f_8003560C(c); // 8016D544
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 8016D548
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016D54C
  c->r[4]=0u+0x00000000u; // 8016D550
  c->lr=0x8016D558u; f_8003560C(c); // 8016D554
  c->r[4]=0u+0x80550000u; // 8016D558
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 8016D55C
  c->r[3]=c->r[4]+0xFFFFCE54u; // 8016D560
  c->r[4]=0u+0x00000000u; // 8016D564
  c->lr=0x8016D56Cu; f_8019C920(c); // 8016D568
  cmps(c,0,(int32_t)c->r[3],0); // 8016D56C
  c->r[29]=c->r[3]|c->r[3]; // 8016D570
  if (crb(c,2)) { goto L_8016D698; } // 8016D574
  c->r[4]=c->r[1]+0x00000008u; // 8016D578
  c->r[5]=0u+0x00000000u; // 8016D57C
  c->lr=0x8016D584u; f_8007C6C8(c); // 8016D580
  c->r[0]=R8(c->r[28]+0x00000003u); // 8016D584
  cmps(c,0,(int32_t)c->r[0],0); // 8016D588
  if (crb(c,2)) { goto L_8016D594; } // 8016D58C
  goto L_8016D680; // 8016D590
L_8016D594:;
  cmps(c,0,(int32_t)c->r[30],1); // 8016D594
  if (crb(c,2)) { goto L_8016D608; } // 8016D598
  if (!crb(c,0)) { goto L_8016D5AC; } // 8016D59C
  cmps(c,0,(int32_t)c->r[30],0); // 8016D5A0
  if (!crb(c,0)) { goto L_8016D5B8; } // 8016D5A4
  goto L_8016D680; // 8016D5A8
L_8016D5AC:;
  cmps(c,0,(int32_t)c->r[30],3); // 8016D5AC
  if (!crb(c,0)) { goto L_8016D680; } // 8016D5B0
  goto L_8016D658; // 8016D5B4
L_8016D5B8:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016D5B8
  {uint32_t ea=c->r[2]+0xFFFFCA28u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D5BC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D5C0
  fcmp(c,0,c->f[1],c->f[0]); // 8016D5C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D5C8
  if (!crb(c,2)) { goto L_8016D680; } // 8016D5CC
  cmpu(c,0,c->r[31],0x00000001u); // 8016D5D0
  if (crb(c,2)) { goto L_8016D5E8; } // 8016D5D4
  c->r[0]=c->r[31]+0x000000FAu; // 8016D5D8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8016D5DC
  cmpu(c,0,c->r[0],0x00000001u); // 8016D5E0
  if (crb(c,1)) { goto L_8016D600; } // 8016D5E4
L_8016D5E8:;
  c->r[3]=c->r[29]|c->r[29]; // 8016D5E8
  c->r[4]=0u+0x0000001Au; // 8016D5EC
  c->r[5]=0u+0x00000000u; // 8016D5F0
  c->r[6]=0u+0x00000001u; // 8016D5F4
  c->r[7]=0u+0x00000001u; // 8016D5F8
  c->lr=0x8016D600u; f_8017900C(c); // 8016D5FC
L_8016D600:;
  c->r[30]=c->r[30]+0x00000001u; // 8016D600
  goto L_8016D680; // 8016D604
L_8016D608:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016D608
  {uint32_t ea=c->r[2]+0xFFFFCA2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D60C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D610
  fcmp(c,0,c->f[1],c->f[0]); // 8016D614
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D618
  if (!crb(c,2)) { goto L_8016D680; } // 8016D61C
  cmpu(c,0,c->r[31],0x00000001u); // 8016D620
  if (crb(c,2)) { goto L_8016D638; } // 8016D624
  c->r[0]=c->r[31]+0x000000FAu; // 8016D628
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8016D62C
  cmpu(c,0,c->r[0],0x00000001u); // 8016D630
  if (crb(c,1)) { goto L_8016D650; } // 8016D634
L_8016D638:;
  c->r[3]=c->r[29]|c->r[29]; // 8016D638
  c->r[4]=0u+0x0000001Au; // 8016D63C
  c->r[5]=0u+0x00000000u; // 8016D640
  c->r[6]=0u+0x00000001u; // 8016D644
  c->r[7]=0u+0x00000001u; // 8016D648
  c->lr=0x8016D650u; f_8017900C(c); // 8016D64C
L_8016D650:;
  c->r[30]=c->r[30]+0x00000001u; // 8016D650
  goto L_8016D680; // 8016D654
L_8016D658:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016D658
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D65C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D660
  fcmp(c,0,c->f[1],c->f[0]); // 8016D664
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D668
  if (!crb(c,2)) { goto L_8016D680; } // 8016D66C
  {uint32_t ea=c->r[2]+0xFFFFC8E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D670
  fcmp(c,0,c->f[1],c->f[0]); // 8016D674
  if (!crb(c,0)) { goto L_8016D680; } // 8016D678
  c->r[30]=0u+0x00000000u; // 8016D67C
L_8016D680:;
  c->r[3]=0u+0x80620000u; // 8016D680
  c->r[5]=rotl(c->r[30],0)&0x000000FFu; // 8016D684
  c->r[3]=c->r[3]+0x00007688u; // 8016D688
  c->r[4]=0u+0x0000007Au; // 8016D68C
  c->r[3]=R32(c->r[3]+0x00000014u); // 8016D690
  c->lr=0x8016D698u; f_80038998(c); // 8016D694
L_8016D698:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016D698
  c->r[3]=0u+0x00000001u; // 8016D69C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016D6A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016D6A4
  c->r[28]=R32(c->r[1]+0x00000010u); // 8016D6A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016D6AC
  c->lr=c->r[0]; // 8016D6B0
  c->r[1]=c->r[1]+0x00000020u; // 8016D6B4
  return; // 8016D6B8
}

// fn_8016D6BC
void f_8016D6BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D6BC
  c->r[0]=c->lr; // 8016D6C0
  c->r[3]=0u+0x80620000u; // 8016D6C4
  c->r[4]=0u+0x0000007Bu; // 8016D6C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016D6CC
  c->r[3]=c->r[3]+0x00007688u; // 8016D6D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016D6D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016D6D8
  c->r[3]=R32(c->r[3]+0x00000014u); // 8016D6DC
  c->lr=0x8016D6E4u; f_8003560C(c); // 8016D6E0
  c->r[4]=0u+0x80550000u; // 8016D6E4
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 8016D6E8
  c->r[3]=c->r[4]+0xFFFFCE54u; // 8016D6EC
  c->r[4]=0u+0x00000001u; // 8016D6F0
  c->lr=0x8016D6F8u; f_8019C920(c); // 8016D6F4
  cmps(c,0,(int32_t)c->r[3],0); // 8016D6F8
  c->r[30]=c->r[3]|c->r[3]; // 8016D6FC
  if (crb(c,2)) { goto L_8016D954; } // 8016D700
  c->r[4]=c->r[1]+0x00000008u; // 8016D704
  c->r[5]=0u+0x00000000u; // 8016D708
  c->lr=0x8016D710u; f_8007C6C8(c); // 8016D70C
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016D710
  c->r[0]=R32(c->r[3]+0x00000030u); // 8016D714
  cmps(c,0,(int32_t)c->r[0],1025); // 8016D718
  if (crb(c,2)) { goto L_8016D7F0; } // 8016D71C
  if (!crb(c,0)) { goto L_8016D730; } // 8016D720
  cmps(c,0,(int32_t)c->r[0],1024); // 8016D724
  if (!crb(c,0)) { goto L_8016D73C; } // 8016D728
  goto L_8016D954; // 8016D72C
L_8016D730:;
  cmps(c,0,(int32_t)c->r[0],1027); // 8016D730
  if (!crb(c,0)) { goto L_8016D954; } // 8016D734
  goto L_8016D8A4; // 8016D738
L_8016D73C:;
  cmps(c,0,(int32_t)c->r[31],1); // 8016D73C
  if (crb(c,2)) { goto L_8016D794; } // 8016D740
  if (!crb(c,0)) { goto L_8016D754; } // 8016D744
  cmps(c,0,(int32_t)c->r[31],0); // 8016D748
  if (!crb(c,0)) { goto L_8016D760; } // 8016D74C
  goto L_8016D954; // 8016D750
L_8016D754:;
  cmps(c,0,(int32_t)c->r[31],3); // 8016D754
  if (!crb(c,0)) { goto L_8016D954; } // 8016D758
  goto L_8016D7C8; // 8016D75C
L_8016D760:;
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D760
  {uint32_t ea=c->r[2]+0xFFFFCA30u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D764
  fcmp(c,0,c->f[1],c->f[0]); // 8016D768
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D76C
  if (!crb(c,2)) { goto L_8016D954; } // 8016D770
  c->r[3]=c->r[30]|c->r[30]; // 8016D774
  c->r[4]=0u+0x00000004u; // 8016D778
  c->r[5]=0u+0x00000067u; // 8016D77C
  c->r[6]=0u+0x00000001u; // 8016D780
  c->r[7]=0u+0x00000001u; // 8016D784
  c->lr=0x8016D78Cu; f_8017900C(c); // 8016D788
  c->r[31]=c->r[31]+0x00000001u; // 8016D78C
  goto L_8016D954; // 8016D790
L_8016D794:;
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D794
  {uint32_t ea=c->r[2]+0xFFFFC8D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D798
  fcmp(c,0,c->f[1],c->f[0]); // 8016D79C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D7A0
  if (!crb(c,2)) { goto L_8016D954; } // 8016D7A4
  c->r[3]=c->r[30]|c->r[30]; // 8016D7A8
  c->r[4]=0u+0x00000004u; // 8016D7AC
  c->r[5]=0u+0x00000067u; // 8016D7B0
  c->r[6]=0u+0x00000001u; // 8016D7B4
  c->r[7]=0u+0x00000001u; // 8016D7B8
  c->lr=0x8016D7C0u; f_8017900C(c); // 8016D7BC
  c->r[31]=c->r[31]+0x00000001u; // 8016D7C0
  goto L_8016D954; // 8016D7C4
L_8016D7C8:;
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D7C8
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D7CC
  fcmp(c,0,c->f[1],c->f[0]); // 8016D7D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D7D4
  if (!crb(c,2)) { goto L_8016D954; } // 8016D7D8
  {uint32_t ea=c->r[2]+0xFFFFCA30u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D7DC
  fcmp(c,0,c->f[1],c->f[0]); // 8016D7E0
  if (!crb(c,0)) { goto L_8016D954; } // 8016D7E4
  c->r[31]=0u+0x00000000u; // 8016D7E8
  goto L_8016D954; // 8016D7EC
L_8016D7F0:;
  cmps(c,0,(int32_t)c->r[31],1); // 8016D7F0
  if (crb(c,2)) { goto L_8016D848; } // 8016D7F4
  if (!crb(c,0)) { goto L_8016D808; } // 8016D7F8
  cmps(c,0,(int32_t)c->r[31],0); // 8016D7FC
  if (!crb(c,0)) { goto L_8016D814; } // 8016D800
  goto L_8016D954; // 8016D804
L_8016D808:;
  cmps(c,0,(int32_t)c->r[31],3); // 8016D808
  if (!crb(c,0)) { goto L_8016D954; } // 8016D80C
  goto L_8016D87C; // 8016D810
L_8016D814:;
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D814
  {uint32_t ea=c->r[2]+0xFFFFCA34u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D818
  fcmp(c,0,c->f[1],c->f[0]); // 8016D81C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D820
  if (!crb(c,2)) { goto L_8016D954; } // 8016D824
  c->r[3]=c->r[30]|c->r[30]; // 8016D828
  c->r[4]=0u+0x00000004u; // 8016D82C
  c->r[5]=0u+0x00000066u; // 8016D830
  c->r[6]=0u+0x00000001u; // 8016D834
  c->r[7]=0u+0x00000001u; // 8016D838
  c->lr=0x8016D840u; f_8017900C(c); // 8016D83C
  c->r[31]=c->r[31]+0x00000001u; // 8016D840
  goto L_8016D954; // 8016D844
L_8016D848:;
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D848
  {uint32_t ea=c->r[2]+0xFFFFCA38u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D84C
  fcmp(c,0,c->f[1],c->f[0]); // 8016D850
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D854
  if (!crb(c,2)) { goto L_8016D954; } // 8016D858
  c->r[3]=c->r[30]|c->r[30]; // 8016D85C
  c->r[4]=0u+0x00000004u; // 8016D860
  c->r[5]=0u+0x00000066u; // 8016D864
  c->r[6]=0u+0x00000001u; // 8016D868
  c->r[7]=0u+0x00000001u; // 8016D86C
  c->lr=0x8016D874u; f_8017900C(c); // 8016D870
  c->r[31]=c->r[31]+0x00000001u; // 8016D874
  goto L_8016D954; // 8016D878
L_8016D87C:;
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D87C
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D880
  fcmp(c,0,c->f[1],c->f[0]); // 8016D884
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D888
  if (!crb(c,2)) { goto L_8016D954; } // 8016D88C
  {uint32_t ea=c->r[2]+0xFFFFCA34u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D890
  fcmp(c,0,c->f[1],c->f[0]); // 8016D894
  if (!crb(c,0)) { goto L_8016D954; } // 8016D898
  c->r[31]=0u+0x00000000u; // 8016D89C
  goto L_8016D954; // 8016D8A0
L_8016D8A4:;
  cmps(c,0,(int32_t)c->r[31],1); // 8016D8A4
  if (crb(c,2)) { goto L_8016D8FC; } // 8016D8A8
  if (!crb(c,0)) { goto L_8016D8BC; } // 8016D8AC
  cmps(c,0,(int32_t)c->r[31],0); // 8016D8B0
  if (!crb(c,0)) { goto L_8016D8C8; } // 8016D8B4
  goto L_8016D954; // 8016D8B8
L_8016D8BC:;
  cmps(c,0,(int32_t)c->r[31],3); // 8016D8BC
  if (!crb(c,0)) { goto L_8016D954; } // 8016D8C0
  goto L_8016D930; // 8016D8C4
L_8016D8C8:;
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D8C8
  {uint32_t ea=c->r[2]+0xFFFFC8E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D8CC
  fcmp(c,0,c->f[1],c->f[0]); // 8016D8D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D8D4
  if (!crb(c,2)) { goto L_8016D954; } // 8016D8D8
  c->r[3]=c->r[30]|c->r[30]; // 8016D8DC
  c->r[4]=0u+0x00000004u; // 8016D8E0
  c->r[5]=0u+0x00000066u; // 8016D8E4
  c->r[6]=0u+0x00000001u; // 8016D8E8
  c->r[7]=0u+0x00000001u; // 8016D8EC
  c->lr=0x8016D8F4u; f_8017900C(c); // 8016D8F0
  c->r[31]=c->r[31]+0x00000001u; // 8016D8F4
  goto L_8016D954; // 8016D8F8
L_8016D8FC:;
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D8FC
  {uint32_t ea=c->r[2]+0xFFFFCA2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D900
  fcmp(c,0,c->f[1],c->f[0]); // 8016D904
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D908
  if (!crb(c,2)) { goto L_8016D954; } // 8016D90C
  c->r[3]=c->r[30]|c->r[30]; // 8016D910
  c->r[4]=0u+0x00000004u; // 8016D914
  c->r[5]=0u+0x00000066u; // 8016D918
  c->r[6]=0u+0x00000001u; // 8016D91C
  c->r[7]=0u+0x00000001u; // 8016D920
  c->lr=0x8016D928u; f_8017900C(c); // 8016D924
  c->r[31]=c->r[31]+0x00000001u; // 8016D928
  goto L_8016D954; // 8016D92C
L_8016D930:;
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016D930
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D934
  fcmp(c,0,c->f[1],c->f[0]); // 8016D938
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016D93C
  if (!crb(c,2)) { goto L_8016D954; } // 8016D940
  {uint32_t ea=c->r[2]+0xFFFFC8E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016D944
  fcmp(c,0,c->f[1],c->f[0]); // 8016D948
  if (!crb(c,0)) { goto L_8016D954; } // 8016D94C
  c->r[31]=0u+0x00000000u; // 8016D950
L_8016D954:;
  c->r[3]=0u+0x80620000u; // 8016D954
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 8016D958
  c->r[3]=c->r[3]+0x00007688u; // 8016D95C
  c->r[4]=0u+0x0000007Bu; // 8016D960
  c->r[3]=R32(c->r[3]+0x00000014u); // 8016D964
  c->lr=0x8016D96Cu; f_80038998(c); // 8016D968
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016D96C
  c->r[3]=0u+0x00000001u; // 8016D970
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016D974
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016D978
  c->lr=c->r[0]; // 8016D97C
  c->r[1]=c->r[1]+0x00000020u; // 8016D980
  return; // 8016D984
}

// fn_8016D988
void f_8016D988(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D988
  c->r[0]=c->lr; // 8016D98C
  c->r[3]=0u+0x80550000u; // 8016D990
  c->r[4]=0u+0x00000007u; // 8016D994
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016D998
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016D99C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016D9A0
  c->r[31]=c->r[5]|c->r[5]; // 8016D9A4
  c->lr=0x8016D9ACu; f_8019C920(c); // 8016D9A8
  cmps(c,0,(int32_t)c->r[3],0); // 8016D9AC
  if (crb(c,2)) { goto L_8016D9CC; } // 8016D9B0
  c->r[0]=R8(c->r[31]+0x00000003u); // 8016D9B4
  cmps(c,0,(int32_t)c->r[0],0); // 8016D9B8
  if (crb(c,2)) { goto L_8016D9C8; } // 8016D9BC
  c->lr=0x8016D9C4u; f_80081080(c); // 8016D9C0
  goto L_8016D9CC; // 8016D9C4
L_8016D9C8:;
  c->lr=0x8016D9CCu; f_8008108C(c); // 8016D9C8
L_8016D9CC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016D9CC
  c->r[3]=0u+0x00000001u; // 8016D9D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016D9D4
  c->lr=c->r[0]; // 8016D9D8
  c->r[1]=c->r[1]+0x00000010u; // 8016D9DC
  return; // 8016D9E0
}

// fn_8016D9E4
void f_8016D9E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D9E4
  c->r[0]=c->lr; // 8016D9E8
  c->r[3]=0u+0x80550000u; // 8016D9EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016D9F0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016D9F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016D9F8
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016D9FC
  c->lr=0x8016DA04u; f_8019C920(c); // 8016DA00
  cmps(c,0,(int32_t)c->r[3],0); // 8016DA04
  c->r[31]=c->r[3]|c->r[3]; // 8016DA08
  if (crb(c,2)) { goto L_8016DA3C; } // 8016DA0C
  c->r[4]=c->r[1]+0x0000000Cu; // 8016DA10
  c->r[5]=0u+0x00000000u; // 8016DA14
  c->lr=0x8016DA1Cu; f_8007C6C8(c); // 8016DA18
  c->r[3]=c->r[31]|c->r[31]; // 8016DA1C
  c->r[4]=c->r[1]+0x00000008u; // 8016DA20
  c->r[5]=0u+0x00000001u; // 8016DA24
  c->lr=0x8016DA2Cu; f_8007C6C8(c); // 8016DA28
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8016DA2C
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016DA30
  c->r[0]=R8(c->r[4]+0x0000001Du); // 8016DA34
  W8(c->r[3]+0x0000001Du,c->r[0]); // 8016DA38
L_8016DA3C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016DA3C
  c->r[3]=0u+0x00000001u; // 8016DA40
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016DA44
  c->lr=c->r[0]; // 8016DA48
  c->r[1]=c->r[1]+0x00000020u; // 8016DA4C
  return; // 8016DA50
}

// fn_8016DA54
void f_8016DA54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016DA54
  c->r[0]=c->lr; // 8016DA58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016DA5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016DA60
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016DA64
  c->r[0]=R8(c->r[5]+0x00000003u); // 8016DA68
  cmps(c,0,(int32_t)c->r[0],1); // 8016DA6C
  if (crb(c,2)) { goto L_8016DAAC; } // 8016DA70
  if (!crb(c,0)) { goto L_8016DB24; } // 8016DA74
  cmps(c,0,(int32_t)c->r[0],0); // 8016DA78
  if (!crb(c,0)) { goto L_8016DA84; } // 8016DA7C
  goto L_8016DB24; // 8016DA80
L_8016DA84:;
  c->r[30]=0u+0x803A0000u; // 8016DA84
  c->r[31]=0u+0x80550000u; // 8016DA88
  c->r[30]=c->r[30]+0x00002FA0u; // 8016DA8C
  c->r[3]=c->r[31]+0xFFFFC848u; // 8016DA90
  c->r[4]=c->r[30]+0x0000005Au; // 8016DA94
  c->lr=0x8016DA9Cu; f_8018D848(c); // 8016DA98
  c->r[3]=c->r[31]+0xFFFFC848u; // 8016DA9C
  c->r[4]=c->r[30]+0x0000005Eu; // 8016DAA0
  c->lr=0x8016DAA8u; f_8018D848(c); // 8016DAA4
  goto L_8016DB24; // 8016DAA8
L_8016DAAC:;
  c->r[31]=0u+0x803A0000u; // 8016DAAC
  c->r[30]=0u+0x80550000u; // 8016DAB0
  c->r[31]=c->r[31]+0x00002FA0u; // 8016DAB4
  c->r[3]=c->r[30]+0xFFFFC848u; // 8016DAB8
  c->r[4]=c->r[31]+0x0000008Fu; // 8016DABC
  c->lr=0x8016DAC4u; f_8018D848(c); // 8016DAC0
  c->r[3]=c->r[30]+0xFFFFC848u; // 8016DAC4
  c->r[4]=c->r[31]+0x00000093u; // 8016DAC8
  c->lr=0x8016DAD0u; f_8018D848(c); // 8016DACC
  c->r[3]=c->r[30]+0xFFFFC848u; // 8016DAD0
  c->r[4]=c->r[31]+0x00000097u; // 8016DAD4
  c->lr=0x8016DADCu; f_8018D848(c); // 8016DAD8
  c->r[3]=c->r[30]+0xFFFFC848u; // 8016DADC
  c->r[4]=c->r[31]+0x0000009Bu; // 8016DAE0
  c->lr=0x8016DAE8u; f_8018D848(c); // 8016DAE4
  c->r[3]=c->r[30]+0xFFFFC848u; // 8016DAE8
  c->r[4]=c->r[31]+0x0000009Fu; // 8016DAEC
  c->lr=0x8016DAF4u; f_8018D848(c); // 8016DAF0
  c->r[3]=c->r[30]+0xFFFFC848u; // 8016DAF4
  c->r[4]=c->r[31]+0x000000A3u; // 8016DAF8
  c->lr=0x8016DB00u; f_8018D848(c); // 8016DAFC
  c->r[3]=c->r[30]+0xFFFFC848u; // 8016DB00
  c->r[4]=c->r[31]+0x000000A7u; // 8016DB04
  c->lr=0x8016DB0Cu; f_8018D848(c); // 8016DB08
  c->r[3]=c->r[30]+0xFFFFC848u; // 8016DB0C
  c->r[4]=c->r[31]+0x000000ABu; // 8016DB10
  c->lr=0x8016DB18u; f_8018D848(c); // 8016DB14
  c->r[3]=c->r[30]+0xFFFFC848u; // 8016DB18
  c->r[4]=c->r[31]+0x000000AFu; // 8016DB1C
  c->lr=0x8016DB24u; f_8018D848(c); // 8016DB20
L_8016DB24:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016DB24
  c->r[3]=0u+0x00000001u; // 8016DB28
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016DB2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016DB30
  c->lr=c->r[0]; // 8016DB34
  c->r[1]=c->r[1]+0x00000010u; // 8016DB38
  return; // 8016DB3C
}

// fn_8016DB40
void f_8016DB40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016DB40
  c->r[0]=c->lr; // 8016DB44
  c->r[3]=0u+0x80620000u; // 8016DB48
  c->r[4]=0u+0x0000007Cu; // 8016DB4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016DB50
  c->r[3]=c->r[3]+0x00007688u; // 8016DB54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016DB58
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016DB5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016DB60
  c->r[3]=R32(c->r[3]+0x00000014u); // 8016DB64
  c->lr=0x8016DB6Cu; f_8003560C(c); // 8016DB68
  c->r[4]=0u+0x80550000u; // 8016DB6C
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 8016DB70
  c->r[3]=c->r[4]+0xFFFFCE54u; // 8016DB74
  c->r[4]=0u+0x00000000u; // 8016DB78
  c->lr=0x8016DB80u; f_8019C920(c); // 8016DB7C
  cmps(c,0,(int32_t)c->r[3],0); // 8016DB80
  c->r[30]=c->r[3]|c->r[3]; // 8016DB84
  if (crb(c,2)) { goto L_8016DEA0; } // 8016DB88
  c->r[4]=c->r[1]+0x00000008u; // 8016DB8C
  c->r[5]=0u+0x00000000u; // 8016DB90
  c->lr=0x8016DB98u; f_8007C6C8(c); // 8016DB94
  cmps(c,0,(int32_t)c->r[31],2); // 8016DB98
  if (crb(c,2)) { goto L_8016DD80; } // 8016DB9C
  if (!crb(c,0)) { goto L_8016DBB4; } // 8016DBA0
  cmps(c,0,(int32_t)c->r[31],0); // 8016DBA4
  if (crb(c,2)) { goto L_8016DBC0; } // 8016DBA8
  if (!crb(c,0)) { goto L_8016DCA0; } // 8016DBAC
  goto L_8016DE88; // 8016DBB0
L_8016DBB4:;
  cmps(c,0,(int32_t)c->r[31],4); // 8016DBB4
  if (!crb(c,0)) { goto L_8016DE88; } // 8016DBB8
  goto L_8016DE60; // 8016DBBC
L_8016DBC0:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016DBC0
  {uint32_t ea=c->r[2]+0xFFFFCA3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016DBC4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016DBC8
  fcmp(c,0,c->f[1],c->f[0]); // 8016DBCC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016DBD0
  if (!crb(c,2)) { goto L_8016DE88; } // 8016DBD4
  c->r[3]=c->r[13]+0xFFFFAB38u; // 8016DBD8
  c->lr=0x8016DBE0u; f_80211724(c); // 8016DBDC
  c->r[4]=0u+0xCCCD0000u; // 8016DBE0
  c->r[0]=c->r[4]+0xFFFFCCCDu; // 8016DBE4
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 8016DBE8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016DBEC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 8016DBF0
  c->r[0]=c->r[3]-c->r[0]; // 8016DBF4
  c->r[29]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[29]); // 8016DBF8
  if (!crb(c,2)) { goto L_8016DC18; } // 8016DBFC
  c->r[3]=c->r[30]|c->r[30]; // 8016DC00
  c->r[4]=0u+0x00000005u; // 8016DC04
  c->r[5]=0u+0x00000038u; // 8016DC08
  c->r[6]=0u+0x00000001u; // 8016DC0C
  c->r[7]=0u+0x00000001u; // 8016DC10
  c->lr=0x8016DC18u; f_8017900C(c); // 8016DC14
L_8016DC18:;
  cmpu(c,0,c->r[29],0x00000001u); // 8016DC18
  if (!crb(c,2)) { goto L_8016DC38; } // 8016DC1C
  c->r[3]=c->r[30]|c->r[30]; // 8016DC20
  c->r[4]=0u+0x00000005u; // 8016DC24
  c->r[5]=0u+0x00000038u; // 8016DC28
  c->r[6]=0u+0x00000001u; // 8016DC2C
  c->r[7]=0u+0x00000001u; // 8016DC30
  c->lr=0x8016DC38u; f_8017900C(c); // 8016DC34
L_8016DC38:;
  cmpu(c,0,c->r[29],0x00000002u); // 8016DC38
  if (!crb(c,2)) { goto L_8016DC58; } // 8016DC3C
  c->r[3]=c->r[30]|c->r[30]; // 8016DC40
  c->r[4]=0u+0x00000005u; // 8016DC44
  c->r[5]=0u+0x00000039u; // 8016DC48
  c->r[6]=0u+0x00000001u; // 8016DC4C
  c->r[7]=0u+0x00000001u; // 8016DC50
  c->lr=0x8016DC58u; f_8017900C(c); // 8016DC54
L_8016DC58:;
  cmpu(c,0,c->r[29],0x00000003u); // 8016DC58
  if (!crb(c,2)) { goto L_8016DC78; } // 8016DC5C
  c->r[3]=c->r[30]|c->r[30]; // 8016DC60
  c->r[4]=0u+0x00000005u; // 8016DC64
  c->r[5]=0u+0x00000039u; // 8016DC68
  c->r[6]=0u+0x00000001u; // 8016DC6C
  c->r[7]=0u+0x00000001u; // 8016DC70
  c->lr=0x8016DC78u; f_8017900C(c); // 8016DC74
L_8016DC78:;
  cmpu(c,0,c->r[29],0x00000004u); // 8016DC78
  if (!crb(c,2)) { goto L_8016DC98; } // 8016DC7C
  c->r[3]=c->r[30]|c->r[30]; // 8016DC80
  c->r[4]=0u+0x00000005u; // 8016DC84
  c->r[5]=0u+0x0000003Au; // 8016DC88
  c->r[6]=0u+0x00000001u; // 8016DC8C
  c->r[7]=0u+0x00000001u; // 8016DC90
  c->lr=0x8016DC98u; f_8017900C(c); // 8016DC94
L_8016DC98:;
  c->r[31]=c->r[31]+0x00000001u; // 8016DC98
  goto L_8016DE88; // 8016DC9C
L_8016DCA0:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016DCA0
  {uint32_t ea=c->r[2]+0xFFFFCA40u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016DCA4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016DCA8
  fcmp(c,0,c->f[1],c->f[0]); // 8016DCAC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016DCB0
  if (!crb(c,2)) { goto L_8016DE88; } // 8016DCB4
  c->r[3]=c->r[13]+0xFFFFAB38u; // 8016DCB8
  c->lr=0x8016DCC0u; f_80211724(c); // 8016DCBC
  c->r[4]=0u+0xCCCD0000u; // 8016DCC0
  c->r[0]=c->r[4]+0xFFFFCCCDu; // 8016DCC4
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 8016DCC8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016DCCC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 8016DCD0
  c->r[0]=c->r[3]-c->r[0]; // 8016DCD4
  c->r[29]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[29]); // 8016DCD8
  if (!crb(c,2)) { goto L_8016DCF8; } // 8016DCDC
  c->r[3]=c->r[30]|c->r[30]; // 8016DCE0
  c->r[4]=0u+0x00000005u; // 8016DCE4
  c->r[5]=0u+0x0000003Au; // 8016DCE8
  c->r[6]=0u+0x00000001u; // 8016DCEC
  c->r[7]=0u+0x00000001u; // 8016DCF0
  c->lr=0x8016DCF8u; f_8017900C(c); // 8016DCF4
L_8016DCF8:;
  cmpu(c,0,c->r[29],0x00000001u); // 8016DCF8
  if (!crb(c,2)) { goto L_8016DD18; } // 8016DCFC
  c->r[3]=c->r[30]|c->r[30]; // 8016DD00
  c->r[4]=0u+0x00000005u; // 8016DD04
  c->r[5]=0u+0x0000003Au; // 8016DD08
  c->r[6]=0u+0x00000001u; // 8016DD0C
  c->r[7]=0u+0x00000001u; // 8016DD10
  c->lr=0x8016DD18u; f_8017900C(c); // 8016DD14
L_8016DD18:;
  cmpu(c,0,c->r[29],0x00000002u); // 8016DD18
  if (!crb(c,2)) { goto L_8016DD38; } // 8016DD1C
  c->r[3]=c->r[30]|c->r[30]; // 8016DD20
  c->r[4]=0u+0x00000005u; // 8016DD24
  c->r[5]=0u+0x00000006u; // 8016DD28
  c->r[6]=0u+0x00000001u; // 8016DD2C
  c->r[7]=0u+0x00000001u; // 8016DD30
  c->lr=0x8016DD38u; f_8017900C(c); // 8016DD34
L_8016DD38:;
  cmpu(c,0,c->r[29],0x00000003u); // 8016DD38
  if (!crb(c,2)) { goto L_8016DD58; } // 8016DD3C
  c->r[3]=c->r[30]|c->r[30]; // 8016DD40
  c->r[4]=0u+0x00000005u; // 8016DD44
  c->r[5]=0u+0x00000006u; // 8016DD48
  c->r[6]=0u+0x00000001u; // 8016DD4C
  c->r[7]=0u+0x00000001u; // 8016DD50
  c->lr=0x8016DD58u; f_8017900C(c); // 8016DD54
L_8016DD58:;
  cmpu(c,0,c->r[29],0x00000004u); // 8016DD58
  if (!crb(c,2)) { goto L_8016DD78; } // 8016DD5C
  c->r[3]=c->r[30]|c->r[30]; // 8016DD60
  c->r[4]=0u+0x00000005u; // 8016DD64
  c->r[5]=0u+0x0000003Cu; // 8016DD68
  c->r[6]=0u+0x00000001u; // 8016DD6C
  c->r[7]=0u+0x00000001u; // 8016DD70
  c->lr=0x8016DD78u; f_8017900C(c); // 8016DD74
L_8016DD78:;
  c->r[31]=c->r[31]+0x00000001u; // 8016DD78
  goto L_8016DE88; // 8016DD7C
L_8016DD80:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016DD80
  {uint32_t ea=c->r[2]+0xFFFFCA1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016DD84
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016DD88
  fcmp(c,0,c->f[1],c->f[0]); // 8016DD8C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016DD90
  if (!crb(c,2)) { goto L_8016DE88; } // 8016DD94
  c->r[3]=c->r[13]+0xFFFFAB38u; // 8016DD98
  c->lr=0x8016DDA0u; f_80211724(c); // 8016DD9C
  c->r[4]=0u+0xCCCD0000u; // 8016DDA0
  c->r[0]=c->r[4]+0xFFFFCCCDu; // 8016DDA4
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 8016DDA8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016DDAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 8016DDB0
  c->r[0]=c->r[3]-c->r[0]; // 8016DDB4
  c->r[29]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[29]); // 8016DDB8
  if (!crb(c,2)) { goto L_8016DDD8; } // 8016DDBC
  c->r[3]=c->r[30]|c->r[30]; // 8016DDC0
  c->r[4]=0u+0x00000005u; // 8016DDC4
  c->r[5]=0u+0x0000003Cu; // 8016DDC8
  c->r[6]=0u+0x00000001u; // 8016DDCC
  c->r[7]=0u+0x00000001u; // 8016DDD0
  c->lr=0x8016DDD8u; f_8017900C(c); // 8016DDD4
L_8016DDD8:;
  cmpu(c,0,c->r[29],0x00000001u); // 8016DDD8
  if (!crb(c,2)) { goto L_8016DDF8; } // 8016DDDC
  c->r[3]=c->r[30]|c->r[30]; // 8016DDE0
  c->r[4]=0u+0x00000005u; // 8016DDE4
  c->r[5]=0u+0x0000003Cu; // 8016DDE8
  c->r[6]=0u+0x00000001u; // 8016DDEC
  c->r[7]=0u+0x00000001u; // 8016DDF0
  c->lr=0x8016DDF8u; f_8017900C(c); // 8016DDF4
L_8016DDF8:;
  cmpu(c,0,c->r[29],0x00000002u); // 8016DDF8
  if (!crb(c,2)) { goto L_8016DE18; } // 8016DDFC
  c->r[3]=c->r[30]|c->r[30]; // 8016DE00
  c->r[4]=0u+0x00000005u; // 8016DE04
  c->r[5]=0u+0x00000038u; // 8016DE08
  c->r[6]=0u+0x00000001u; // 8016DE0C
  c->r[7]=0u+0x00000001u; // 8016DE10
  c->lr=0x8016DE18u; f_8017900C(c); // 8016DE14
L_8016DE18:;
  cmpu(c,0,c->r[29],0x00000003u); // 8016DE18
  if (!crb(c,2)) { goto L_8016DE38; } // 8016DE1C
  c->r[3]=c->r[30]|c->r[30]; // 8016DE20
  c->r[4]=0u+0x00000005u; // 8016DE24
  c->r[5]=0u+0x00000038u; // 8016DE28
  c->r[6]=0u+0x00000001u; // 8016DE2C
  c->r[7]=0u+0x00000001u; // 8016DE30
  c->lr=0x8016DE38u; f_8017900C(c); // 8016DE34
L_8016DE38:;
  cmpu(c,0,c->r[29],0x00000004u); // 8016DE38
  if (!crb(c,2)) { goto L_8016DE58; } // 8016DE3C
  c->r[3]=c->r[30]|c->r[30]; // 8016DE40
  c->r[4]=0u+0x00000005u; // 8016DE44
  c->r[5]=0u+0x00000039u; // 8016DE48
  c->r[6]=0u+0x00000001u; // 8016DE4C
  c->r[7]=0u+0x00000001u; // 8016DE50
  c->lr=0x8016DE58u; f_8017900C(c); // 8016DE54
L_8016DE58:;
  c->r[31]=c->r[31]+0x00000001u; // 8016DE58
  goto L_8016DE88; // 8016DE5C
L_8016DE60:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8016DE60
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016DE64
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016DE68
  fcmp(c,0,c->f[1],c->f[0]); // 8016DE6C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016DE70
  if (!crb(c,2)) { goto L_8016DE88; } // 8016DE74
  {uint32_t ea=c->r[2]+0xFFFFC800u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016DE78
  fcmp(c,0,c->f[1],c->f[0]); // 8016DE7C
  if (!crb(c,0)) { goto L_8016DE88; } // 8016DE80
  c->r[31]=0u+0x00000000u; // 8016DE84
L_8016DE88:;
  c->r[3]=0u+0x80620000u; // 8016DE88
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 8016DE8C
  c->r[3]=c->r[3]+0x00007688u; // 8016DE90
  c->r[4]=0u+0x0000007Cu; // 8016DE94
  c->r[3]=R32(c->r[3]+0x00000014u); // 8016DE98
  c->lr=0x8016DEA0u; f_80038998(c); // 8016DE9C
L_8016DEA0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016DEA0
  c->r[3]=0u+0x00000001u; // 8016DEA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016DEA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016DEAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016DEB0
  c->lr=c->r[0]; // 8016DEB4
  c->r[1]=c->r[1]+0x00000020u; // 8016DEB8
  return; // 8016DEBC
}

// fn_8016DEC0
void f_8016DEC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016DEC0
  c->r[0]=c->lr; // 8016DEC4
  c->r[3]=0u+0x80550000u; // 8016DEC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016DECC
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016DED0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016DED4
  c->r[31]=c->r[5]|c->r[5]; // 8016DED8
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016DEDC
  c->lr=0x8016DEE4u; f_8019C920(c); // 8016DEE0
  cmps(c,0,(int32_t)c->r[3],0); // 8016DEE4
  if (crb(c,2)) { goto L_8016DF38; } // 8016DEE8
  c->r[0]=R8(c->r[31]+0x00000004u); // 8016DEEC
  cmps(c,0,(int32_t)c->r[0],37); // 8016DEF0
  if (!crb(c,0)) { goto L_8016DF04; } // 8016DEF4
  cmps(c,0,(int32_t)c->r[0],34); // 8016DEF8
  if (!crb(c,0)) { goto L_8016DF10; } // 8016DEFC
  goto L_8016DF38; // 8016DF00
L_8016DF04:;
  cmps(c,0,(int32_t)c->r[0],42); // 8016DF04
  if (!crb(c,0)) { goto L_8016DF38; } // 8016DF08
  goto L_8016DF24; // 8016DF0C
L_8016DF10:;
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016DF10
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 8016DF14
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 8016DF18
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 8016DF1C
  goto L_8016DF38; // 8016DF20
L_8016DF24:;
  {uint32_t ea=c->r[2]+0xFFFFC808u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016DF24
  {uint32_t ea=c->r[2]+0xFFFFC8D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016DF28
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 8016DF2C
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 8016DF30
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 8016DF34
L_8016DF38:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016DF38
  c->r[3]=0u+0x00000001u; // 8016DF3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016DF40
  c->lr=c->r[0]; // 8016DF44
  c->r[1]=c->r[1]+0x00000010u; // 8016DF48
  return; // 8016DF4C
}

// fn_8016DF50
void f_8016DF50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016DF50
  c->r[0]=c->lr; // 8016DF54
  W32(c->r[1]+0x00000064u,c->r[0]); // 8016DF58
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8016DF5C
  c->r[31]=0u+0x805D0000u; // 8016DF60
  c->r[3]=c->r[31]+0x00006C94u; // 8016DF64
  W32(c->r[1]+0x00000058u,c->r[30]); // 8016DF68
  c->r[30]=c->r[5]|c->r[5]; // 8016DF6C
  c->lr=0x8016DF74u; f_80221F58(c); // 8016DF70
  c->r[0]=R8(c->r[30]+0x00000003u); // 8016DF74
  c->r[30]=c->r[3]|c->r[3]; // 8016DF78
  cmps(c,0,(int32_t)c->r[0],0); // 8016DF7C
  if (!crb(c,2)) { goto L_8016E090; } // 8016DF80
  cmps(c,0,(int32_t)c->r[3],0); // 8016DF84
  if (crb(c,2)) { goto L_8016E0A0; } // 8016DF88
  c->r[3]=0u+0x80550000u; // 8016DF8C
  c->r[4]=0u+0x00000000u; // 8016DF90
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016DF94
  c->lr=0x8016DF9Cu; f_8019C920(c); // 8016DF98
  {uint32_t ea=c->r[2]+0xFFFFC814u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016DF9C
  c->r[31]=c->r[3]|c->r[3]; // 8016DFA0
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016DFA4
  c->r[3]=c->r[1]+0x00000020u; // 8016DFA8
  c->r[4]=0u+0x00000059u; // 8016DFAC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8016DFB0
  c->lr=0x8016DFB8u; f_80295FBC(c); // 8016DFB4
  c->r[5]=0u+0x803A0000u; // 8016DFB8
  {uint32_t ea=c->r[5]+0x00002F34u; c->r[4]=R32(ea); c->r[5]=ea;} // 8016DFBC
  cmps(c,0,(int32_t)c->r[31],0); // 8016DFC0
  c->r[3]=R32(c->r[5]+0x00000004u); // 8016DFC4
  c->r[0]=R32(c->r[5]+0x00000008u); // 8016DFC8
  W32(c->r[1]+0x00000014u,c->r[4]); // 8016DFCC
  W32(c->r[1]+0x00000018u,c->r[3]); // 8016DFD0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8016DFD4
  if (crb(c,2)) { goto L_8016E00C; } // 8016DFD8
  {uint32_t ea=c->r[2]+0xFFFFCA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016DFDC
  c->r[4]=c->r[1]+0x00000014u; // 8016DFE0
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016DFE4
  c->r[5]=c->r[4]|c->r[4]; // 8016DFE8
  c->r[3]=c->r[1]+0x00000020u; // 8016DFEC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8016DFF0
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 8016DFF4
  c->lr=0x8016DFFCu; f_80296750(c); // 8016DFF8
  c->r[3]=c->r[30]+0x0000002Cu; // 8016DFFC
  c->r[4]=c->r[1]+0x00000014u; // 8016E000
  c->r[5]=c->r[31]+0x0000002Cu; // 8016E004
  c->lr=0x8016E00Cu; f_80296A4C(c); // 8016E008
L_8016E00C:;
  c->r[3]=0u+0x80550000u; // 8016E00C
  c->r[4]=0u+0x00000001u; // 8016E010
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016E014
  c->lr=0x8016E01Cu; f_8019C920(c); // 8016E018
  cmps(c,0,(int32_t)c->r[3],0); // 8016E01C
  c->r[31]=c->r[3]|c->r[3]; // 8016E020
  if (crb(c,2)) { goto L_8016E080; } // 8016E024
  {uint32_t ea=c->r[2]+0xFFFFCA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E028
  c->r[7]=0u+0x803A0000u; // 8016E02C
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E030
  c->r[4]=c->r[1]+0x00000008u; // 8016E034
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8016E038
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 8016E03C
  c->r[3]=c->r[1]+0x00000014u; // 8016E040
  {uint32_t ea=c->r[7]+0x00002F28u; c->r[6]=R32(ea); c->r[7]=ea;} // 8016E044
  c->r[5]=R32(c->r[7]+0x00000004u); // 8016E048
  c->r[0]=R32(c->r[7]+0x00000008u); // 8016E04C
  W32(c->r[1]+0x00000008u,c->r[6]); // 8016E050
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8016E054
  W32(c->r[1]+0x00000010u,c->r[0]); // 8016E058
  c->lr=0x8016E060u; f_800361A0(c); // 8016E05C
  c->r[4]=c->r[1]+0x00000014u; // 8016E060
  c->r[3]=c->r[1]+0x00000020u; // 8016E064
  c->r[5]=c->r[4]|c->r[4]; // 8016E068
  c->lr=0x8016E070u; f_80296750(c); // 8016E06C
  c->r[3]=c->r[30]+0x0000002Cu; // 8016E070
  c->r[4]=c->r[1]+0x00000014u; // 8016E074
  c->r[5]=c->r[31]+0x0000002Cu; // 8016E078
  c->lr=0x8016E080u; f_80296A4C(c); // 8016E07C
L_8016E080:;
  c->r[3]=0u+0x805D0000u; // 8016E080
  c->r[3]=c->r[3]+0x00006C94u; // 8016E084
  c->lr=0x8016E08Cu; f_80221F20(c); // 8016E088
  goto L_8016E0A0; // 8016E08C
L_8016E090:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016E090
  if (crb(c,2)) { goto L_8016E0A0; } // 8016E094
  c->r[3]=c->r[31]+0x00006C94u; // 8016E098
  c->lr=0x8016E0A0u; f_80221F3C(c); // 8016E09C
L_8016E0A0:;
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8016E0A0
  c->r[3]=0u+0x00000001u; // 8016E0A4
  c->r[30]=R32(c->r[1]+0x00000058u); // 8016E0A8
  c->r[0]=R32(c->r[1]+0x00000064u); // 8016E0AC
  c->lr=c->r[0]; // 8016E0B0
  c->r[1]=c->r[1]+0x00000060u; // 8016E0B4
  return; // 8016E0B8
}

// fn_8016E0BC
void f_8016E0BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E0BC
  c->r[0]=c->lr; // 8016E0C0
  c->r[3]=0u+0x80550000u; // 8016E0C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016E0C8
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016E0CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016E0D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016E0D4
  c->r[30]=c->r[5]|c->r[5]; // 8016E0D8
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016E0DC
  c->lr=0x8016E0E4u; f_8019C920(c); // 8016E0E0
  cmps(c,0,(int32_t)c->r[3],0); // 8016E0E4
  c->r[31]=c->r[3]|c->r[3]; // 8016E0E8
  if (crb(c,2)) { goto L_8016E580; } // 8016E0EC
  c->r[0]=R8(c->r[30]+0x00000003u); // 8016E0F0
  cmps(c,0,(int32_t)c->r[0],11); // 8016E0F4
  if (crb(c,2)) { goto L_8016E470; } // 8016E0F8
  if (!crb(c,0)) { goto L_8016E580; } // 8016E0FC
  cmps(c,0,(int32_t)c->r[0],10); // 8016E100
  if (!crb(c,0)) { goto L_8016E110; } // 8016E104
  goto L_8016E580; // 8016E108
  goto L_8016E580; // 8016E10C
L_8016E110:;
  c->r[30]=0u+0x805D0000u; // 8016E110
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016E114
  c->lr=0x8016E11Cu; f_800567B4(c); // 8016E118
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016E11C
  cmps(c,0,(int32_t)c->r[0],8); // 8016E120
  if (!crb(c,2)) { goto L_8016E1E4; } // 8016E124
  c->r[3]=c->r[31]|c->r[31]; // 8016E128
  c->lr=0x8016E130u; f_800567B4(c); // 8016E12C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016E130
  cmps(c,0,(int32_t)c->r[0],8); // 8016E134
  if (!crb(c,2)) { goto L_8016E1E4; } // 8016E138
  c->r[7]=0u+0x803A0000u; // 8016E13C
  {uint32_t ea=c->r[7]+0x00002F40u; c->r[6]=R32(ea); c->r[7]=ea;} // 8016E140
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016E144
  c->r[4]=c->r[1]+0x00000008u; // 8016E148
  c->r[5]=R32(c->r[7]+0x00000004u); // 8016E14C
  c->r[3]=c->r[3]+0x0000002Cu; // 8016E150
  c->r[0]=R32(c->r[7]+0x00000008u); // 8016E154
  W32(c->r[1]+0x00000008u,c->r[6]); // 8016E158
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8016E15C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8016E160
  c->lr=0x8016E168u; f_80296CAC(c); // 8016E164
  {uint32_t ea=c->r[2]+0xFFFFC864u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E168
  fcmp(c,0,c->f[1],c->f[0]); // 8016E16C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E170
  if (crb(c,2)) { goto L_8016E194; } // 8016E174
  c->r[3]=c->r[31]+0x0000002Cu; // 8016E178
  c->r[4]=c->r[1]+0x00000008u; // 8016E17C
  c->lr=0x8016E184u; f_80296CAC(c); // 8016E180
  {uint32_t ea=c->r[2]+0xFFFFC864u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E184
  fcmp(c,0,c->f[1],c->f[0]); // 8016E188
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E18C
  if (!crb(c,2)) { goto L_8016E1E4; } // 8016E190
L_8016E194:;
  c->r[3]=0u+0x805D0000u; // 8016E194
  {uint32_t ea=c->r[2]+0xFFFFCA48u; c->f[5]=c->ps1[5]=RF32(ea);} // 8016E198
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016E19C
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016E1A0
  {uint32_t ea=c->r[2]+0xFFFFC8BCu; c->f[4]=c->ps1[4]=RF32(ea);} // 8016E1A4
  {uint32_t ea=c->r[2]+0xFFFFCA4Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8016E1A8
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E1AC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[5]);} // 8016E1B0
  {uint32_t ea=c->r[2]+0xFFFFCA50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E1B4
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[4]);} // 8016E1B8
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[3]);} // 8016E1BC
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[2]);} // 8016E1C0
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 8016E1C4
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[2]);} // 8016E1C8
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[5]);} // 8016E1CC
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[4]);} // 8016E1D0
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 8016E1D4
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[2]);} // 8016E1D8
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[2]);} // 8016E1DC
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[2]);} // 8016E1E0
L_8016E1E4:;
  c->r[30]=0u+0x805D0000u; // 8016E1E4
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016E1E8
  c->lr=0x8016E1F0u; f_800567B4(c); // 8016E1EC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016E1F0
  cmps(c,0,(int32_t)c->r[0],5); // 8016E1F4
  if (!crb(c,2)) { goto L_8016E35C; } // 8016E1F8
  c->r[3]=c->r[31]|c->r[31]; // 8016E1FC
  c->lr=0x8016E204u; f_800567B4(c); // 8016E200
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016E204
  cmps(c,0,(int32_t)c->r[0],5); // 8016E208
  if (!crb(c,2)) { goto L_8016E35C; } // 8016E20C
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016E210
  {uint32_t ea=c->r[2]+0xFFFFCA54u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E214
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E218
  fcmp(c,0,c->f[1],c->f[0]); // 8016E21C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E220
  if (!crb(c,2)) { goto L_8016E25C; } // 8016E224
  {uint32_t ea=c->r[2]+0xFFFFCA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E228
  fcmp(c,0,c->f[1],c->f[0]); // 8016E22C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E230
  if (!crb(c,2)) { goto L_8016E25C; } // 8016E234
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E238
  {uint32_t ea=c->r[2]+0xFFFFCA14u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E23C
  fcmp(c,0,c->f[1],c->f[0]); // 8016E240
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E244
  if (!crb(c,2)) { goto L_8016E25C; } // 8016E248
  {uint32_t ea=c->r[2]+0xFFFFCA5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E24C
  fcmp(c,0,c->f[1],c->f[0]); // 8016E250
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E254
  if (crb(c,2)) { goto L_8016E2A4; } // 8016E258
L_8016E25C:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E25C
  {uint32_t ea=c->r[2]+0xFFFFCA54u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E260
  fcmp(c,0,c->f[1],c->f[0]); // 8016E264
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E268
  if (!crb(c,2)) { goto L_8016E35C; } // 8016E26C
  {uint32_t ea=c->r[2]+0xFFFFCA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E270
  fcmp(c,0,c->f[1],c->f[0]); // 8016E274
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E278
  if (!crb(c,2)) { goto L_8016E35C; } // 8016E27C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E280
  {uint32_t ea=c->r[2]+0xFFFFCA14u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E284
  fcmp(c,0,c->f[1],c->f[0]); // 8016E288
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E28C
  if (!crb(c,2)) { goto L_8016E35C; } // 8016E290
  {uint32_t ea=c->r[2]+0xFFFFCA5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E294
  fcmp(c,0,c->f[1],c->f[0]); // 8016E298
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E29C
  if (!crb(c,2)) { goto L_8016E35C; } // 8016E2A0
L_8016E2A4:;
  c->r[3]=0u+0x805D0000u; // 8016E2A4
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E2A8
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016E2AC
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E2B0
  fcmp(c,0,c->f[1],c->f[0]); // 8016E2B4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E2B8
  if (!crb(c,2)) { goto L_8016E310; } // 8016E2BC
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016E2C0
  {uint32_t ea=c->r[2]+0xFFFFCA60u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E2C4
  {uint32_t ea=c->r[2]+0xFFFFC8A4u; c->f[5]=c->ps1[5]=RF32(ea);} // 8016E2C8
  {uint32_t ea=c->r[2]+0xFFFFC8A8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8016E2CC
  {uint32_t ea=c->r[2]+0xFFFFC808u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016E2D0
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8016E2D4
  {uint32_t ea=c->r[2]+0xFFFFC8A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E2D8
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[5]);} // 8016E2DC
  {uint32_t ea=c->r[2]+0xFFFFC8D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E2E0
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[4]);} // 8016E2E4
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[3]);} // 8016E2E8
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[2]);} // 8016E2EC
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[3]);} // 8016E2F0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 8016E2F4
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[5]);} // 8016E2F8
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[4]);} // 8016E2FC
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[3]);} // 8016E300
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 8016E304
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[3]);} // 8016E308
  goto L_8016E35C; // 8016E30C
L_8016E310:;
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016E310
  {uint32_t ea=c->r[2]+0xFFFFCA64u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E314
  {uint32_t ea=c->r[2]+0xFFFFC8A4u; c->f[5]=c->ps1[5]=RF32(ea);} // 8016E318
  {uint32_t ea=c->r[2]+0xFFFFC8A8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8016E31C
  {uint32_t ea=c->r[2]+0xFFFFC8D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016E320
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8016E324
  {uint32_t ea=c->r[2]+0xFFFFC8A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E328
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[5]);} // 8016E32C
  {uint32_t ea=c->r[2]+0xFFFFC808u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E330
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[4]);} // 8016E334
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[3]);} // 8016E338
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[2]);} // 8016E33C
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[3]);} // 8016E340
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 8016E344
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[5]);} // 8016E348
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[4]);} // 8016E34C
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[3]);} // 8016E350
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 8016E354
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[3]);} // 8016E358
L_8016E35C:;
  c->r[30]=0u+0x805D0000u; // 8016E35C
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016E360
  c->lr=0x8016E368u; f_800567B4(c); // 8016E364
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016E368
  cmps(c,0,(int32_t)c->r[0],8); // 8016E36C
  if (!crb(c,2)) { goto L_8016E580; } // 8016E370
  c->r[3]=c->r[31]|c->r[31]; // 8016E374
  c->lr=0x8016E37Cu; f_800567B4(c); // 8016E378
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016E37C
  cmps(c,0,(int32_t)c->r[0],8); // 8016E380
  if (!crb(c,2)) { goto L_8016E580; } // 8016E384
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016E388
  {uint32_t ea=c->r[2]+0xFFFFCA68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E38C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E390
  fcmp(c,0,c->f[1],c->f[0]); // 8016E394
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E398
  if (!crb(c,2)) { goto L_8016E3D4; } // 8016E39C
  {uint32_t ea=c->r[2]+0xFFFFCA6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E3A0
  fcmp(c,0,c->f[1],c->f[0]); // 8016E3A4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E3A8
  if (!crb(c,2)) { goto L_8016E3D4; } // 8016E3AC
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E3B0
  {uint32_t ea=c->r[2]+0xFFFFCA14u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E3B4
  fcmp(c,0,c->f[1],c->f[0]); // 8016E3B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E3BC
  if (!crb(c,2)) { goto L_8016E3D4; } // 8016E3C0
  {uint32_t ea=c->r[2]+0xFFFFCA5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E3C4
  fcmp(c,0,c->f[1],c->f[0]); // 8016E3C8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E3CC
  if (crb(c,2)) { goto L_8016E41C; } // 8016E3D0
L_8016E3D4:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E3D4
  {uint32_t ea=c->r[2]+0xFFFFCA68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E3D8
  fcmp(c,0,c->f[1],c->f[0]); // 8016E3DC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E3E0
  if (!crb(c,2)) { goto L_8016E580; } // 8016E3E4
  {uint32_t ea=c->r[2]+0xFFFFCA6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E3E8
  fcmp(c,0,c->f[1],c->f[0]); // 8016E3EC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E3F0
  if (!crb(c,2)) { goto L_8016E580; } // 8016E3F4
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E3F8
  {uint32_t ea=c->r[2]+0xFFFFCA14u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E3FC
  fcmp(c,0,c->f[1],c->f[0]); // 8016E400
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E404
  if (!crb(c,2)) { goto L_8016E580; } // 8016E408
  {uint32_t ea=c->r[2]+0xFFFFCA5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E40C
  fcmp(c,0,c->f[1],c->f[0]); // 8016E410
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E414
  if (!crb(c,2)) { goto L_8016E580; } // 8016E418
L_8016E41C:;
  c->r[3]=0u+0x805D0000u; // 8016E41C
  {uint32_t ea=c->r[2]+0xFFFFC8B8u; c->f[5]=c->ps1[5]=RF32(ea);} // 8016E420
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016E424
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016E428
  {uint32_t ea=c->r[2]+0xFFFFC8BCu; c->f[4]=c->ps1[4]=RF32(ea);} // 8016E42C
  {uint32_t ea=c->r[2]+0xFFFFC930u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016E430
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E434
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[5]);} // 8016E438
  {uint32_t ea=c->r[2]+0xFFFFCA70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E43C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[4]);} // 8016E440
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[3]);} // 8016E444
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[2]);} // 8016E448
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 8016E44C
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[2]);} // 8016E450
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[5]);} // 8016E454
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[4]);} // 8016E458
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 8016E45C
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[2]);} // 8016E460
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[2]);} // 8016E464
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[2]);} // 8016E468
  goto L_8016E580; // 8016E46C
L_8016E470:;
  c->r[30]=0u+0x805D0000u; // 8016E470
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016E474
  c->lr=0x8016E47Cu; f_800567B4(c); // 8016E478
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016E47C
  cmps(c,0,(int32_t)c->r[0],10); // 8016E480
  if (!crb(c,2)) { goto L_8016E580; } // 8016E484
  c->r[3]=c->r[31]|c->r[31]; // 8016E488
  c->lr=0x8016E490u; f_800567B4(c); // 8016E48C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016E490
  cmps(c,0,(int32_t)c->r[0],10); // 8016E494
  if (!crb(c,2)) { goto L_8016E580; } // 8016E498
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016E49C
  {uint32_t ea=c->r[2]+0xFFFFCA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E4A0
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E4A4
  fcmp(c,0,c->f[1],c->f[0]); // 8016E4A8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E4AC
  if (!crb(c,2)) { goto L_8016E4E8; } // 8016E4B0
  {uint32_t ea=c->r[2]+0xFFFFCA78u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E4B4
  fcmp(c,0,c->f[1],c->f[0]); // 8016E4B8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E4BC
  if (!crb(c,2)) { goto L_8016E4E8; } // 8016E4C0
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E4C4
  {uint32_t ea=c->r[2]+0xFFFFCA14u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E4C8
  fcmp(c,0,c->f[1],c->f[0]); // 8016E4CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E4D0
  if (!crb(c,2)) { goto L_8016E4E8; } // 8016E4D4
  {uint32_t ea=c->r[2]+0xFFFFCA5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E4D8
  fcmp(c,0,c->f[1],c->f[0]); // 8016E4DC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E4E0
  if (crb(c,2)) { goto L_8016E530; } // 8016E4E4
L_8016E4E8:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E4E8
  {uint32_t ea=c->r[2]+0xFFFFCA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E4EC
  fcmp(c,0,c->f[1],c->f[0]); // 8016E4F0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E4F4
  if (!crb(c,2)) { goto L_8016E580; } // 8016E4F8
  {uint32_t ea=c->r[2]+0xFFFFCA78u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E4FC
  fcmp(c,0,c->f[1],c->f[0]); // 8016E500
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E504
  if (!crb(c,2)) { goto L_8016E580; } // 8016E508
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E50C
  {uint32_t ea=c->r[2]+0xFFFFCA14u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E510
  fcmp(c,0,c->f[1],c->f[0]); // 8016E514
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E518
  if (!crb(c,2)) { goto L_8016E580; } // 8016E51C
  {uint32_t ea=c->r[2]+0xFFFFCA5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E520
  fcmp(c,0,c->f[1],c->f[0]); // 8016E524
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E528
  if (!crb(c,2)) { goto L_8016E580; } // 8016E52C
L_8016E530:;
  c->r[3]=0u+0x805D0000u; // 8016E530
  {uint32_t ea=c->r[2]+0xFFFFC8ACu; c->f[5]=c->ps1[5]=RF32(ea);} // 8016E534
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016E538
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016E53C
  {uint32_t ea=c->r[2]+0xFFFFC8B0u; c->f[4]=c->ps1[4]=RF32(ea);} // 8016E540
  {uint32_t ea=c->r[2]+0xFFFFC930u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016E544
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E548
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[5]);} // 8016E54C
  {uint32_t ea=c->r[2]+0xFFFFCA70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E550
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[4]);} // 8016E554
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[3]);} // 8016E558
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[2]);} // 8016E55C
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 8016E560
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[2]);} // 8016E564
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[5]);} // 8016E568
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[4]);} // 8016E56C
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 8016E570
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[2]);} // 8016E574
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[2]);} // 8016E578
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[2]);} // 8016E57C
L_8016E580:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016E580
  c->r[3]=0u+0x00000001u; // 8016E584
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016E588
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016E58C
  c->lr=c->r[0]; // 8016E590
  c->r[1]=c->r[1]+0x00000020u; // 8016E594
  return; // 8016E598
}

// fn_8016E59C
void f_8016E59C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E59C
  c->r[0]=c->lr; // 8016E5A0
  c->r[7]=0u+0x804B0000u; // 8016E5A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E5A8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8016E5AC
  c->r[7]=c->r[7]+0xFFFF8A58u; // 8016E5B0
  c->r[4]=c->r[5]|c->r[5]; // 8016E5B4
  c->r[5]=c->r[6]|c->r[6]; // 8016E5B8
  c->r[12]=c->r[7]+c->r[0]; // 8016E5BC
  c->lr=0x8016E5C4u; f_802BA00C(c); // 8016E5C0
  c->r[0]=c->r[0]|0x00000000u; // 8016E5C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016E5C8
  c->lr=c->r[0]; // 8016E5CC
  c->r[1]=c->r[1]+0x00000010u; // 8016E5D0
  return; // 8016E5D4
}

// fn_8016E5D8
void f_8016E5D8(Ctx* __restrict c) {
  c->r[3]=0u+0x805D0000u; // 8016E5D8
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016E5DC
  f_80166594(c); return; // 8016E5E0
}

// fn_8016E5E4
void f_8016E5E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E5E4
  c->r[0]=c->lr; // 8016E5E8
  c->r[3]=0u+0x80550000u; // 8016E5EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E5F0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016E5F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016E5F8
  c->r[31]=c->r[5]|c->r[5]; // 8016E5FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016E600
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016E604
  c->lr=0x8016E60Cu; f_8019C920(c); // 8016E608
  cmps(c,0,(int32_t)c->r[3],0); // 8016E60C
  c->r[30]=c->r[3]|c->r[3]; // 8016E610
  if (crb(c,2)) { goto L_8016E6D8; } // 8016E614
  c->r[0]=R8(c->r[31]+0x00000003u); // 8016E618
  cmps(c,0,(int32_t)c->r[0],25); // 8016E61C
  if (crb(c,2)) { goto L_8016E6D8; } // 8016E620
  if (!crb(c,0)) { goto L_8016E634; } // 8016E624
  cmps(c,0,(int32_t)c->r[0],24); // 8016E628
  if (!crb(c,0)) { goto L_8016E640; } // 8016E62C
  goto L_8016E6D8; // 8016E630
L_8016E634:;
  cmps(c,0,(int32_t)c->r[0],27); // 8016E634
  if (!crb(c,0)) { goto L_8016E6D8; } // 8016E638
  goto L_8016E67C; // 8016E63C
L_8016E640:;
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016E640
  c->r[3]=0u+0x805D0000u; // 8016E644
  {uint32_t ea=c->r[2]+0xFFFFCA7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E648
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016E64C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8016E650
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 8016E654
  fcmp(c,0,c->f[3],c->f[0]); // 8016E658
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E65C
  if (!crb(c,2)) { goto L_8016E6D8; } // 8016E660
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 8016E664
  fcmp(c,0,c->f[3],c->f[0]); // 8016E668
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E66C
  if (!crb(c,2)) { goto L_8016E6D8; } // 8016E670
  c->r[3]=0u+0x00000001u; // 8016E674
  goto L_8016E6DC; // 8016E678
L_8016E67C:;
  c->r[31]=0u+0x805D0000u; // 8016E67C
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016E680
  c->lr=0x8016E688u; f_80166594(c); // 8016E684
  cmps(c,0,(int32_t)c->r[3],0); // 8016E688
  if (crb(c,2)) { goto L_8016E6D8; } // 8016E68C
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016E690
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E694
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E698
  fcmp(c,0,c->f[1],c->f[0]); // 8016E69C
  if (!crb(c,1)) { goto L_8016E6D8; } // 8016E6A0
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016E6A4
  {uint32_t ea=c->r[2]+0xFFFFCA7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E6A8
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8016E6AC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 8016E6B0
  fcmp(c,0,c->f[3],c->f[0]); // 8016E6B4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016E6B8
  if (!crb(c,2)) { goto L_8016E6D8; } // 8016E6BC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 8016E6C0
  fcmp(c,0,c->f[3],c->f[0]); // 8016E6C4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E6C8
  if (!crb(c,2)) { goto L_8016E6D8; } // 8016E6CC
  c->r[3]=0u+0x00000001u; // 8016E6D0
  goto L_8016E6DC; // 8016E6D4
L_8016E6D8:;
  c->r[3]=0u+0x00000000u; // 8016E6D8
L_8016E6DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016E6DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016E6E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016E6E4
  c->lr=c->r[0]; // 8016E6E8
  c->r[1]=c->r[1]+0x00000010u; // 8016E6EC
  return; // 8016E6F0
}

// fn_8016E6F4
void f_8016E6F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E6F4
  c->r[0]=c->lr; // 8016E6F8
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8016E6FC
  c->r[11]=c->r[1]+0x000000E0u; // 8016E700
  c->lr=0x8016E708u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8016E704
  c->r[25]=0u+0x805D0000u; // 8016E708
  c->r[29]=c->r[5]|c->r[5]; // 8016E70C
  c->r[3]=c->r[25]+0x00003F6Cu; // 8016E710
  c->lr=0x8016E718u; f_80066550(c); // 8016E714
  cmps(c,0,(int32_t)c->r[3],0); // 8016E718
  if (!crb(c,2)) { goto L_8016E728; } // 8016E71C
  c->r[3]=0u+0x00000000u; // 8016E720
  goto L_8016E8F0; // 8016E724
L_8016E728:;
  c->r[30]=c->r[25]+0x00003F6Cu; // 8016E728
  c->r[3]=c->r[1]+0x00000064u; // 8016E72C
  c->r[4]=c->r[30]+0x0000002Cu; // 8016E730
  c->lr=0x8016E738u; f_800361A0(c); // 8016E734
  c->r[3]=c->r[30]|c->r[30]; // 8016E738
  c->lr=0x8016E740u; f_80166594(c); // 8016E73C
  cmpu(c,0,c->r[3],0x00000001u); // 8016E740
  if (!crb(c,2)) { goto L_8016E8EC; } // 8016E744
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E748
  c->r[26]=0u+0x80550000u; // 8016E74C
  {uint32_t ea=c->r[2]+0xFFFFC800u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E750
  c->r[31]=0u+0x00000000u; // 8016E754
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016E758
  c->r[3]=c->r[26]+0x00003D60u; // 8016E75C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8016E760
  {uint32_t ea=c->r[2]+0xFFFFC7FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E764
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[2]);} // 8016E768
  c->r[4]=c->r[1]+0x0000004Cu; // 8016E76C
  c->r[12]=R32(c->r[1]+0x00000064u); // 8016E770
  c->r[5]=c->r[1]+0x00000040u; // 8016E774
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[2]);} // 8016E778
  c->r[7]=c->r[1]+0x00000058u; // 8016E77C
  c->r[25]=R32(c->r[1]+0x00000070u); // 8016E780
  c->r[8]=c->r[1]+0x00000080u; // 8016E784
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 8016E788
  c->r[6]=0u+0x00000000u; // 8016E78C
  c->r[28]=R32(c->r[1]+0x00000074u); // 8016E790
  c->r[9]=0u+0x00000000u; // 8016E794
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8016E798
  c->r[10]=0u+0x00020000u; // 8016E79C
  c->r[27]=R32(c->r[1]+0x00000078u); // 8016E7A0
  c->r[11]=R32(c->r[1]+0x00000068u); // 8016E7A4
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 8016E7A8
  W32(c->r[1]+0x00000040u,c->r[25]); // 8016E7AC
  W32(c->r[1]+0x00000044u,c->r[28]); // 8016E7B0
  W32(c->r[1]+0x00000048u,c->r[27]); // 8016E7B4
  W32(c->r[1]+0x0000004Cu,c->r[12]); // 8016E7B8
  W32(c->r[1]+0x00000050u,c->r[11]); // 8016E7BC
  W32(c->r[1]+0x00000054u,c->r[0]); // 8016E7C0
  W32(c->r[1]+0x00000008u,c->r[31]); // 8016E7C4
  c->lr=0x8016E7CCu; f_801D5690(c); // 8016E7C8
  cmpu(c,0,c->r[3],0x00000001u); // 8016E7CC
  if (!crb(c,2)) { goto L_8016E8EC; } // 8016E7D0
  c->r[3]=R8(c->r[1]+0x00000081u); // 8016E7D4
  c->r[0]=R8(c->r[29]+0x00000003u); // 8016E7D8
  cmpu(c,0,c->r[3],c->r[0]); // 8016E7DC
  if (!crb(c,2)) { goto L_8016E8EC; } // 8016E7E0
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E7E4
  c->r[27]=c->r[28]|c->r[28]; // 8016E7E8
  {uint32_t ea=c->r[2]+0xFFFFC800u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E7EC
  c->r[10]=c->r[25]|c->r[25]; // 8016E7F0
  c->r[28]=R32(c->r[1]+0x00000078u); // 8016E7F4
  c->r[3]=c->r[26]+0x00003D60u; // 8016E7F8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8016E7FC
  c->r[11]=R32(c->r[1]+0x00000068u); // 8016E800
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 8016E804
  c->r[4]=c->r[1]+0x00000034u; // 8016E808
  W32(c->r[1]+0x00000028u,c->r[10]); // 8016E80C
  c->r[5]=c->r[1]+0x00000028u; // 8016E810
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8016E814
  c->r[7]=c->r[1]+0x00000058u; // 8016E818
  c->r[8]=c->r[1]+0x00000080u; // 8016E81C
  c->r[6]=0u+0x00000000u; // 8016E820
  c->r[12]=R32(c->r[1]+0x00000064u); // 8016E824
  c->r[9]=0u+0x00000000u; // 8016E828
  W32(c->r[1]+0x0000002Cu,c->r[27]); // 8016E82C
  c->r[10]=0u+0x00020000u; // 8016E830
  W32(c->r[1]+0x00000030u,c->r[28]); // 8016E834
  W32(c->r[1]+0x00000034u,c->r[12]); // 8016E838
  W32(c->r[1]+0x00000038u,c->r[11]); // 8016E83C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8016E840
  W32(c->r[1]+0x00000008u,c->r[31]); // 8016E844
  c->lr=0x8016E84Cu; f_801D5690(c); // 8016E848
  cmpu(c,0,c->r[3],0x00000001u); // 8016E84C
  if (!crb(c,2)) { goto L_8016E8EC; } // 8016E850
  c->r[3]=R8(c->r[1]+0x00000081u); // 8016E854
  c->r[0]=R8(c->r[29]+0x00000003u); // 8016E858
  cmpu(c,0,c->r[3],c->r[0]); // 8016E85C
  if (!crb(c,2)) { goto L_8016E8EC; } // 8016E860
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E864
  c->r[10]=c->r[25]|c->r[25]; // 8016E868
  {uint32_t ea=c->r[2]+0xFFFFC800u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E86C
  c->r[28]=c->r[27]|c->r[27]; // 8016E870
  c->r[30]=R32(c->r[1]+0x00000078u); // 8016E874
  c->r[3]=c->r[26]+0x00003D60u; // 8016E878
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8016E87C
  c->r[11]=R32(c->r[1]+0x00000068u); // 8016E880
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 8016E884
  c->r[4]=c->r[1]+0x0000001Cu; // 8016E888
  W32(c->r[1]+0x00000010u,c->r[10]); // 8016E88C
  c->r[5]=c->r[1]+0x00000010u; // 8016E890
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8016E894
  c->r[7]=c->r[1]+0x00000058u; // 8016E898
  c->r[8]=c->r[1]+0x00000080u; // 8016E89C
  c->r[6]=0u+0x00000000u; // 8016E8A0
  c->r[12]=R32(c->r[1]+0x00000064u); // 8016E8A4
  c->r[9]=0u+0x00000000u; // 8016E8A8
  W32(c->r[1]+0x00000014u,c->r[28]); // 8016E8AC
  c->r[10]=0u+0x00020000u; // 8016E8B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016E8B4
  W32(c->r[1]+0x0000001Cu,c->r[12]); // 8016E8B8
  W32(c->r[1]+0x00000020u,c->r[11]); // 8016E8BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016E8C0
  W32(c->r[1]+0x00000008u,c->r[31]); // 8016E8C4
  c->lr=0x8016E8CCu; f_801D5690(c); // 8016E8C8
  cmpu(c,0,c->r[3],0x00000001u); // 8016E8CC
  if (!crb(c,2)) { goto L_8016E8EC; } // 8016E8D0
  c->r[3]=R8(c->r[1]+0x00000081u); // 8016E8D4
  c->r[0]=R8(c->r[29]+0x00000003u); // 8016E8D8
  cmpu(c,0,c->r[3],c->r[0]); // 8016E8DC
  if (!crb(c,2)) { goto L_8016E8EC; } // 8016E8E0
  c->r[3]=0u+0x00000001u; // 8016E8E4
  goto L_8016E8F0; // 8016E8E8
L_8016E8EC:;
  c->r[3]=0u+0x00000000u; // 8016E8EC
L_8016E8F0:;
  c->r[11]=c->r[1]+0x000000E0u; // 8016E8F0
  c->lr=0x8016E8F8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8016E8F4
  c->r[0]=R32(c->r[1]+0x000000E4u); // 8016E8F8
  c->lr=c->r[0]; // 8016E8FC
  c->r[1]=c->r[1]+0x000000E0u; // 8016E900
  return; // 8016E904
}

// fn_8016E908
void f_8016E908(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8016E908
  return; // 8016E90C
}

// fn_8016E910
void f_8016E910(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E910
  c->r[0]=c->lr; // 8016E914
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016E918
  c->r[11]=c->r[1]+0x00000020u; // 8016E91C
  c->lr=0x8016E924u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8016E920
  c->r[3]=0u+0x80550000u; // 8016E924
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016E928
  c->r[27]=c->r[5]|c->r[5]; // 8016E92C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016E930
  c->lr=0x8016E938u; f_8019C920(c); // 8016E934
  cmps(c,0,(int32_t)c->r[3],0); // 8016E938
  c->r[28]=c->r[3]|c->r[3]; // 8016E93C
  if (crb(c,2)) { goto L_8016EB00; } // 8016E940
  c->r[29]=0u+0x80620000u; // 8016E944
  c->r[4]=0u+0x00000047u; // 8016E948
  c->r[29]=c->r[29]+0x00007688u; // 8016E94C
  c->r[3]=R32(c->r[29]+0x00000014u); // 8016E950
  c->lr=0x8016E958u; f_80038AF4(c); // 8016E954
  cmps(c,0,(int32_t)c->r[3],0); // 8016E958
  if (crb(c,2)) { goto L_8016E968; } // 8016E95C
  c->r[3]=0u+0x00000000u; // 8016E960
  goto L_8016EB04; // 8016E964
L_8016E968:;
  c->r[3]=c->r[28]|c->r[28]; // 8016E968
  c->lr=0x8016E970u; f_80037AF8(c); // 8016E96C
  cmps(c,0,(int32_t)c->r[3],0); // 8016E970
  if (crb(c,2)) { goto L_8016E988; } // 8016E974
  c->r[3]=0u+0x805D0000u; // 8016E978
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016E97C
  c->lr=0x8016E984u; f_80166594(c); // 8016E980
  goto L_8016EB00; // 8016E984
L_8016E988:;
  c->r[30]=0u+0x805D0000u; // 8016E988
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016E98C
  c->lr=0x8016E994u; f_800567B4(c); // 8016E990
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 8016E994
  c->r[3]=c->r[28]|c->r[28]; // 8016E998
  c->lr=0x8016E9A0u; f_800567B4(c); // 8016E99C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016E9A0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 8016E9A4
  if (crb(c,2)) { goto L_8016E9B4; } // 8016E9A8
  c->r[3]=0u+0x00000000u; // 8016E9AC
  goto L_8016EB04; // 8016E9B0
L_8016E9B4:;
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016E9B4
  c->lr=0x8016E9BCu; f_80166594(c); // 8016E9B8
  cmps(c,0,(int32_t)c->r[3],0); // 8016E9BC
  if (crb(c,2)) { goto L_8016E9CC; } // 8016E9C0
  c->r[3]=0u+0x00000000u; // 8016E9C4
  goto L_8016EB04; // 8016E9C8
L_8016E9CC:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8016E9CC
  c->r[4]=0u+0x00000016u; // 8016E9D0
  c->lr=0x8016E9D8u; f_80038AF4(c); // 8016E9D4
  cmps(c,0,(int32_t)c->r[3],0); // 8016E9D8
  if (crb(c,2)) { goto L_8016E9E8; } // 8016E9DC
  c->r[3]=0u+0x00000000u; // 8016E9E0
  goto L_8016EB04; // 8016E9E4
L_8016E9E8:;
  c->r[3]=c->r[28]|c->r[28]; // 8016E9E8
  c->lr=0x8016E9F0u; f_8007BEC0(c); // 8016E9EC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016E9F0
  cmpu(c,0,c->r[0],0x00000001u); // 8016E9F4
  if (!crb(c,2)) { goto L_8016EA04; } // 8016E9F8
  c->r[3]=0u+0x00000000u; // 8016E9FC
  goto L_8016EB04; // 8016EA00
L_8016EA04:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8016EA04
  cmpu(c,0,c->r[0],0x00000001u); // 8016EA08
  if (!crb(c,2)) { goto L_8016EA18; } // 8016EA0C
  c->r[3]=0u+0x00000001u; // 8016EA10
  goto L_8016EB04; // 8016EA14
L_8016EA18:;
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016EA18
  {uint32_t ea=c->r[28]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016EA1C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8016EA20
  {uint32_t ea=c->r[3]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016EA24
  {uint32_t ea=c->r[28]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EA28
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 8016EA2C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8016EA30
  c->lr=0x8016EA38u; f_8005C22C(c); // 8016EA34
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EA38
  fcmp(c,0,c->f[1],c->f[0]); // 8016EA3C
  if (!crb(c,1)) { goto L_8016EA58; } // 8016EA40
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016EA44
  {uint32_t ea=c->r[2]+0xFFFFC8CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EA48
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8016EA4C
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 8016EA50
  goto L_8016EA70; // 8016EA54
L_8016EA58:;
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EA58
  {uint32_t ea=c->r[2]+0xFFFFC8CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016EA5C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8016EA60
  {uint32_t ea=c->r[2]+0xFFFFC8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EA64
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8016EA68
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 8016EA6C
L_8016EA70:;
  {uint32_t ea=c->r[28]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016EA70
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EA74
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8016EA78
  fcmp(c,0,c->f[1],c->f[0]); // 8016EA7C
  if (!crb(c,0)) { goto L_8016EA8C; } // 8016EA80
  {uint32_t ea=c->r[2]+0xFFFFC8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EA84
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8016EA88
L_8016EA8C:;
  {uint32_t ea=c->r[2]+0xFFFFC8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EA8C
  fcmp(c,0,c->f[1],c->f[0]); // 8016EA90
  if (!crb(c,1)) { goto L_8016EA9C; } // 8016EA94
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8016EA98
L_8016EA9C:;
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EA9C
  fcmp(c,0,c->f[1],c->f[0]); // 8016EAA0
  if (!crb(c,1)) { goto L_8016EAB0; } // 8016EAA4
  {uint32_t ea=c->r[2]+0xFFFFC8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EAA8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8016EAAC
L_8016EAB0:;
  {uint32_t ea=c->r[2]+0xFFFFCA80u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EAB0
  fcmp(c,0,c->f[1],c->f[0]); // 8016EAB4
  if (crb(c,0)) { goto L_8016EAC8; } // 8016EAB8
  {uint32_t ea=c->r[2]+0xFFFFC8ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EABC
  fcmp(c,0,c->f[1],c->f[0]); // 8016EAC0
  if (!crb(c,1)) { goto L_8016EAD0; } // 8016EAC4
L_8016EAC8:;
  c->r[3]=0u+0x00000000u; // 8016EAC8
  goto L_8016EB04; // 8016EACC
L_8016EAD0:;
  c->r[3]=0u+0x805D0000u; // 8016EAD0
  c->r[4]=c->r[28]+0x0000002Cu; // 8016EAD4
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016EAD8
  c->r[3]=c->r[3]+0x0000002Cu; // 8016EADC
  c->lr=0x8016EAE4u; f_80296CAC(c); // 8016EAE0
  {uint32_t ea=c->r[2]+0xFFFFCA84u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EAE4
  fcmp(c,0,c->f[1],c->f[0]); // 8016EAE8
  c->r[0]=c->cr; // 8016EAEC
  c->r[0]=rotl(c->r[0],2)&0x00000001u; // 8016EAF0
  c->r[0]=cntlz(c->r[0]); // 8016EAF4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8016EAF8
  goto L_8016EB04; // 8016EAFC
L_8016EB00:;
  c->r[3]=0u+0x00000000u; // 8016EB00
L_8016EB04:;
  c->r[11]=c->r[1]+0x00000020u; // 8016EB04
  c->lr=0x8016EB0Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8016EB08
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016EB0C
  c->lr=c->r[0]; // 8016EB10
  c->r[1]=c->r[1]+0x00000020u; // 8016EB14
  return; // 8016EB18
}

// fn_8016EB1C
void f_8016EB1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EB1C
  c->r[0]=c->lr; // 8016EB20
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016EB24
  c->r[11]=c->r[1]+0x00000040u; // 8016EB28
  c->lr=0x8016EB30u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8016EB2C
  c->r[3]=0u+0x80550000u; // 8016EB30
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016EB34
  c->r[27]=c->r[5]|c->r[5]; // 8016EB38
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016EB3C
  c->lr=0x8016EB44u; f_8019C920(c); // 8016EB40
  cmps(c,0,(int32_t)c->r[3],0); // 8016EB44
  c->r[31]=c->r[3]|c->r[3]; // 8016EB48
  if (crb(c,2)) { goto L_8016EE30; } // 8016EB4C
  c->r[28]=0u+0x80620000u; // 8016EB50
  c->r[4]=0u+0x00000047u; // 8016EB54
  c->r[28]=c->r[28]+0x00007688u; // 8016EB58
  c->r[3]=R32(c->r[28]+0x00000014u); // 8016EB5C
  c->lr=0x8016EB64u; f_80038AF4(c); // 8016EB60
  cmps(c,0,(int32_t)c->r[3],0); // 8016EB64
  if (crb(c,2)) { goto L_8016EB74; } // 8016EB68
  c->r[3]=0u+0x00000000u; // 8016EB6C
  goto L_8016EE34; // 8016EB70
L_8016EB74:;
  c->r[0]=R8(c->r[27]+0x00000003u); // 8016EB74
  cmpu(c,0,c->r[0],0x0000000Du); // 8016EB78
  if (!crb(c,2)) { goto L_8016EBE8; } // 8016EB7C
  c->r[30]=0u+0x805D0000u; // 8016EB80
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016EB84
  c->lr=0x8016EB8Cu; f_800567B4(c); // 8016EB88
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 8016EB8C
  c->r[3]=c->r[31]|c->r[31]; // 8016EB90
  c->lr=0x8016EB98u; f_800567B4(c); // 8016EB94
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016EB98
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 8016EB9C
  if (crb(c,2)) { goto L_8016EBAC; } // 8016EBA0
  c->r[3]=0u+0x00000000u; // 8016EBA4
  goto L_8016EE34; // 8016EBA8
L_8016EBAC:;
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016EBAC
  c->lr=0x8016EBB4u; f_80166594(c); // 8016EBB0
  cmps(c,0,(int32_t)c->r[3],0); // 8016EBB4
  if (crb(c,2)) { goto L_8016EBC4; } // 8016EBB8
  c->r[3]=0u+0x00000000u; // 8016EBBC
  goto L_8016EE34; // 8016EBC0
L_8016EBC4:;
  c->r[3]=c->r[30]+0x00003F6Cu; // 8016EBC4
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016EBC8
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016EBCC
  {uint32_t ea=c->r[2]+0xFFFFC8E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EBD0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8016EBD4
  fcmp(c,0,c->f[1],c->f[0]); // 8016EBD8
  if (!crb(c,1)) { goto L_8016EE28; } // 8016EBDC
  c->r[3]=0u+0x00000000u; // 8016EBE0
  goto L_8016EE34; // 8016EBE4
L_8016EBE8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EBE8
  c->lr=0x8016EBF0u; f_80037AF8(c); // 8016EBEC
  cmps(c,0,(int32_t)c->r[3],0); // 8016EBF0
  if (crb(c,2)) { goto L_8016ECE0; } // 8016EBF4
  c->r[29]=0u+0x805D0000u; // 8016EBF8
  c->r[3]=c->r[29]+0x00003F6Cu; // 8016EBFC
  c->lr=0x8016EC04u; f_80166594(c); // 8016EC00
  cmps(c,0,(int32_t)c->r[3],0); // 8016EC04
  if (!crb(c,2)) { goto L_8016EC14; } // 8016EC08
  c->r[3]=0u+0x00000000u; // 8016EC0C
  goto L_8016EE34; // 8016EC10
L_8016EC14:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8016EC14
  cmps(c,0,(int32_t)c->r[0],0); // 8016EC18
  if (crb(c,2)) { goto L_8016EC68; } // 8016EC1C
  c->r[4]=c->r[29]+0x00003F6Cu; // 8016EC20
  c->r[3]=c->r[1]+0x00000014u; // 8016EC24
  c->r[4]=c->r[4]+0x0000002Cu; // 8016EC28
  c->lr=0x8016EC30u; f_800361A0(c); // 8016EC2C
  c->r[3]=c->r[1]+0x00000008u; // 8016EC30
  c->r[4]=c->r[31]+0x0000002Cu; // 8016EC34
  c->lr=0x8016EC3Cu; f_800361A0(c); // 8016EC38
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EC3C
  c->r[3]=c->r[1]+0x00000014u; // 8016EC40
  c->r[4]=c->r[1]+0x00000008u; // 8016EC44
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8016EC48
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8016EC4C
  c->lr=0x8016EC54u; f_80296CAC(c); // 8016EC50
  {uint32_t ea=c->r[2]+0xFFFFCA88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EC54
  fcmp(c,0,c->f[1],c->f[0]); // 8016EC58
  if (!crb(c,1)) { goto L_8016EE28; } // 8016EC5C
  c->r[3]=0u+0x00000000u; // 8016EC60
  goto L_8016EE34; // 8016EC64
L_8016EC68:;
  c->r[4]=c->r[29]+0x00003F6Cu; // 8016EC68
  c->r[3]=c->r[1]+0x00000014u; // 8016EC6C
  c->r[4]=c->r[4]+0x0000002Cu; // 8016EC70
  c->lr=0x8016EC78u; f_800361A0(c); // 8016EC74
  c->r[3]=c->r[1]+0x00000008u; // 8016EC78
  c->r[4]=c->r[31]+0x0000002Cu; // 8016EC7C
  c->lr=0x8016EC84u; f_800361A0(c); // 8016EC80
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EC84
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8016EC88
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8016EC8C
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016EC90
  c->lr=0x8016EC98u; f_80040504(c); // 8016EC94
  {uint32_t ea=c->r[2]+0xFFFFC800u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016EC98
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EC9C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 8016ECA0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8016ECA4
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016ECA8
  c->lr=0x8016ECB0u; f_80036010(c); // 8016ECAC
  {uint32_t ea=c->r[2]+0xFFFFC800u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016ECB0
  c->r[3]=c->r[1]+0x00000014u; // 8016ECB4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016ECB8
  c->r[4]=c->r[1]+0x00000008u; // 8016ECBC
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[2],c->f[1],-c->f[0])); // 8016ECC0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8016ECC4
  c->lr=0x8016ECCCu; f_80296CAC(c); // 8016ECC8
  {uint32_t ea=c->r[2]+0xFFFFCA8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016ECCC
  fcmp(c,0,c->f[1],c->f[0]); // 8016ECD0
  if (!crb(c,1)) { goto L_8016EE28; } // 8016ECD4
  c->r[3]=0u+0x00000000u; // 8016ECD8
  goto L_8016EE34; // 8016ECDC
L_8016ECE0:;
  c->r[29]=0u+0x805D0000u; // 8016ECE0
  c->r[3]=c->r[29]+0x00003F6Cu; // 8016ECE4
  c->lr=0x8016ECECu; f_800567B4(c); // 8016ECE8
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 8016ECEC
  c->r[3]=c->r[31]|c->r[31]; // 8016ECF0
  c->lr=0x8016ECF8u; f_800567B4(c); // 8016ECF4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016ECF8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 8016ECFC
  if (crb(c,2)) { goto L_8016ED0C; } // 8016ED00
  c->r[3]=0u+0x00000000u; // 8016ED04
  goto L_8016EE34; // 8016ED08
L_8016ED0C:;
  c->r[3]=c->r[29]+0x00003F6Cu; // 8016ED0C
  c->lr=0x8016ED14u; f_80166594(c); // 8016ED10
  cmps(c,0,(int32_t)c->r[3],0); // 8016ED14
  if (crb(c,2)) { goto L_8016ED24; } // 8016ED18
  c->r[3]=0u+0x00000000u; // 8016ED1C
  goto L_8016EE34; // 8016ED20
L_8016ED24:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 8016ED24
  c->r[4]=0u+0x00000016u; // 8016ED28
  c->lr=0x8016ED30u; f_80038AF4(c); // 8016ED2C
  cmps(c,0,(int32_t)c->r[3],0); // 8016ED30
  if (crb(c,2)) { goto L_8016ED40; } // 8016ED34
  c->r[3]=0u+0x00000000u; // 8016ED38
  goto L_8016EE34; // 8016ED3C
L_8016ED40:;
  c->r[3]=c->r[31]|c->r[31]; // 8016ED40
  c->lr=0x8016ED48u; f_8007BEC0(c); // 8016ED44
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016ED48
  cmpu(c,0,c->r[0],0x00000001u); // 8016ED4C
  if (!crb(c,2)) { goto L_8016ED5C; } // 8016ED50
  c->r[3]=0u+0x00000000u; // 8016ED54
  goto L_8016EE34; // 8016ED58
L_8016ED5C:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8016ED5C
  cmps(c,0,(int32_t)c->r[0],0); // 8016ED60
  if (crb(c,2)) { goto L_8016EDB0; } // 8016ED64
  c->r[4]=c->r[29]+0x00003F6Cu; // 8016ED68
  c->r[3]=c->r[1]+0x00000014u; // 8016ED6C
  c->r[4]=c->r[4]+0x0000002Cu; // 8016ED70
  c->lr=0x8016ED78u; f_800361A0(c); // 8016ED74
  c->r[3]=c->r[1]+0x00000008u; // 8016ED78
  c->r[4]=c->r[31]+0x0000002Cu; // 8016ED7C
  c->lr=0x8016ED84u; f_800361A0(c); // 8016ED80
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016ED84
  c->r[3]=c->r[1]+0x00000014u; // 8016ED88
  c->r[4]=c->r[1]+0x00000008u; // 8016ED8C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8016ED90
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8016ED94
  c->lr=0x8016ED9Cu; f_80296CAC(c); // 8016ED98
  {uint32_t ea=c->r[2]+0xFFFFCA88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016ED9C
  fcmp(c,0,c->f[1],c->f[0]); // 8016EDA0
  if (!crb(c,1)) { goto L_8016EE28; } // 8016EDA4
  c->r[3]=0u+0x00000000u; // 8016EDA8
  goto L_8016EE34; // 8016EDAC
L_8016EDB0:;
  c->r[4]=c->r[29]+0x00003F6Cu; // 8016EDB0
  c->r[3]=c->r[1]+0x00000014u; // 8016EDB4
  c->r[4]=c->r[4]+0x0000002Cu; // 8016EDB8
  c->lr=0x8016EDC0u; f_800361A0(c); // 8016EDBC
  c->r[3]=c->r[1]+0x00000008u; // 8016EDC0
  c->r[4]=c->r[31]+0x0000002Cu; // 8016EDC4
  c->lr=0x8016EDCCu; f_800361A0(c); // 8016EDC8
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EDCC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8016EDD0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8016EDD4
  {uint32_t ea=c->r[31]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016EDD8
  c->lr=0x8016EDE0u; f_80036010(c); // 8016EDDC
  {uint32_t ea=c->r[2]+0xFFFFC800u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016EDE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EDE4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 8016EDE8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8016EDEC
  {uint32_t ea=c->r[31]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016EDF0
  c->lr=0x8016EDF8u; f_80040504(c); // 8016EDF4
  {uint32_t ea=c->r[2]+0xFFFFC800u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016EDF8
  c->r[3]=c->r[1]+0x00000014u; // 8016EDFC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EE00
  c->r[4]=c->r[1]+0x00000008u; // 8016EE04
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 8016EE08
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8016EE0C
  c->lr=0x8016EE14u; f_80296CAC(c); // 8016EE10
  {uint32_t ea=c->r[2]+0xFFFFCA8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EE14
  fcmp(c,0,c->f[1],c->f[0]); // 8016EE18
  if (!crb(c,1)) { goto L_8016EE28; } // 8016EE1C
  c->r[3]=0u+0x00000000u; // 8016EE20
  goto L_8016EE34; // 8016EE24
L_8016EE28:;
  c->r[3]=0u+0x00000001u; // 8016EE28
  goto L_8016EE34; // 8016EE2C
L_8016EE30:;
  c->r[3]=0u+0x00000000u; // 8016EE30
L_8016EE34:;
  c->r[11]=c->r[1]+0x00000040u; // 8016EE34
  c->lr=0x8016EE3Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8016EE38
  c->r[0]=R32(c->r[1]+0x00000044u); // 8016EE3C
  c->lr=c->r[0]; // 8016EE40
  c->r[1]=c->r[1]+0x00000040u; // 8016EE44
  return; // 8016EE48
}

// fn_8016EE4C
void f_8016EE4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EE4C
  c->r[0]=c->lr; // 8016EE50
  c->r[3]=0u+0x80550000u; // 8016EE54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016EE58
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016EE5C
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016EE60
  c->lr=0x8016EE68u; f_8019C920(c); // 8016EE64
  cmps(c,0,(int32_t)c->r[3],0); // 8016EE68
  if (crb(c,2)) { goto L_8016EE90; } // 8016EE6C
  c->r[4]=0u+0x805D0000u; // 8016EE70
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EE74
  c->r[4]=c->r[4]+0x00003F6Cu; // 8016EE78
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016EE7C
  fcmp(c,0,c->f[1],c->f[0]); // 8016EE80
  if (!crb(c,1)) { goto L_8016EE90; } // 8016EE84
  c->r[3]=0u+0x00000001u; // 8016EE88
  goto L_8016EE94; // 8016EE8C
L_8016EE90:;
  c->r[3]=0u+0x00000000u; // 8016EE90
L_8016EE94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016EE94
  c->lr=c->r[0]; // 8016EE98
  c->r[1]=c->r[1]+0x00000010u; // 8016EE9C
  return; // 8016EEA0
}

// fn_8016EEA4
void f_8016EEA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EEA4
  c->r[0]=c->lr; // 8016EEA8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016EEAC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8016EEB0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8016EEB4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8016EEB8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 8016EEBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016EEC0
  c->r[0]=R8(c->r[5]+0x00000003u); // 8016EEC4
  cmps(c,0,(int32_t)c->r[0],1); // 8016EEC8
  if (crb(c,2)) { goto L_8016F074; } // 8016EECC
  if (!crb(c,0)) { goto L_8016EEE0; } // 8016EED0
  cmps(c,0,(int32_t)c->r[0],0); // 8016EED4
  if (!crb(c,0)) { goto L_8016EEEC; } // 8016EED8
  goto L_8016F150; // 8016EEDC
L_8016EEE0:;
  cmps(c,0,(int32_t)c->r[0],3); // 8016EEE0
  if (!crb(c,0)) { goto L_8016F150; } // 8016EEE4
  goto L_8016F128; // 8016EEE8
L_8016EEEC:;
  c->r[31]=0u+0x80620000u; // 8016EEEC
  c->r[31]=c->r[31]+0x000079C0u; // 8016EEF0
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016EEF4
  c->lr=0x8016EEFCu; f_8002C1B0(c); // 8016EEF8
  {uint32_t ea=c->r[2]+0xFFFFC8C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EEFC
  fcmp(c,0,c->f[1],c->f[0]); // 8016EF00
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016EF04
  if (!crb(c,2)) { goto L_8016EFB0; } // 8016EF08
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016EF0C
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EF10
  {uint32_t ea=c->r[31]+0x00000060u; c->f[31]=c->ps1[31]=RF32(ea);} // 8016EF14
  fcmp(c,0,c->f[1],c->f[0]); // 8016EF18
  {uint32_t ea=c->r[31]+0x00000064u; c->f[30]=c->ps1[30]=RF32(ea);} // 8016EF1C
  if (!crb(c,0)) { goto L_8016EF2C; } // 8016EF20
  {uint32_t ea=c->r[2]+0xFFFFC86Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EF24
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 8016EF28
L_8016EF2C:;
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[30]); // 8016EF2C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[31],c->f[31],c->f[0])); // 8016EF30
  c->lr=0x8016EF38u; f_800689C8(c); // 8016EF34
  {uint32_t ea=c->r[2]+0xFFFFC8C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EF38
  fcmp(c,0,c->f[1],c->f[0]); // 8016EF3C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016EF40
  if (!crb(c,2)) { goto L_8016EF8C; } // 8016EF44
  c->f[1]=c->f[30]; // 8016EF48
  c->f[2]=c->f[31]; // 8016EF4C
  c->lr=0x8016EF54u; f_8005C22C(c); // 8016EF50
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EF54
  fcmp(c,0,c->f[1],c->f[0]); // 8016EF58
  if (!crb(c,1)) { goto L_8016EF74; } // 8016EF5C
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016EF60
  {uint32_t ea=c->r[2]+0xFFFFC8CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EF64
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8016EF68
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 8016EF6C
  goto L_8016EF8C; // 8016EF70
L_8016EF74:;
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EF74
  {uint32_t ea=c->r[2]+0xFFFFC8CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016EF78
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8016EF7C
  {uint32_t ea=c->r[2]+0xFFFFC8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EF80
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8016EF84
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 8016EF88
L_8016EF8C:;
  {uint32_t ea=c->r[2]+0xFFFFC8ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EF8C
  fcmp(c,0,c->f[31],c->f[0]); // 8016EF90
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016EF94
  if (!crb(c,2)) { goto L_8016F06C; } // 8016EF98
  {uint32_t ea=c->r[2]+0xFFFFC868u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EF9C
  fcmp(c,0,c->f[31],c->f[0]); // 8016EFA0
  if (!crb(c,0)) { goto L_8016F06C; } // 8016EFA4
  c->r[3]=0u+0x00000001u; // 8016EFA8
  goto L_8016F154; // 8016EFAC
L_8016EFB0:;
  c->r[3]=0u+0x805D0000u; // 8016EFB0
  c->r[4]=c->r[1]+0x00000008u; // 8016EFB4
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016EFB8
  c->lr=0x8016EFC0u; f_80038E24(c); // 8016EFBC
  c->r[3]=0u+0x80620000u; // 8016EFC0
  c->r[4]=0u+0x0000001Au; // 8016EFC4
  c->r[3]=c->r[3]+0x00007688u; // 8016EFC8
  c->r[3]=R32(c->r[3]+0x00000014u); // 8016EFCC
  c->lr=0x8016EFD4u; f_8003560C(c); // 8016EFD0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016EFD4
  cmps(c,0,(int32_t)c->r[0],5); // 8016EFD8
  if (crb(c,2)) { goto L_8016EFF4; } // 8016EFDC
  if (!crb(c,0)) { goto L_8016F06C; } // 8016EFE0
  cmps(c,0,(int32_t)c->r[0],0); // 8016EFE4
  if (crb(c,2)) { goto L_8016EFF4; } // 8016EFE8
  if (!crb(c,0)) { goto L_8016F030; } // 8016EFEC
  goto L_8016F06C; // 8016EFF0
L_8016EFF4:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016EFF4
  {uint32_t ea=c->r[2]+0xFFFFC8D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EFF8
  fcmp(c,0,c->f[1],c->f[0]); // 8016EFFC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016F000
  if (!crb(c,2)) { goto L_8016F014; } // 8016F004
  {uint32_t ea=c->r[2]+0xFFFFC8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F008
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8016F00C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8016F010
L_8016F014:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F014
  {uint32_t ea=c->r[2]+0xFFFFC9B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F018
  fcmp(c,0,c->f[1],c->f[0]); // 8016F01C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016F020
  if (!crb(c,2)) { goto L_8016F06C; } // 8016F024
  c->r[3]=0u+0x00000001u; // 8016F028
  goto L_8016F154; // 8016F02C
L_8016F030:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F030
  {uint32_t ea=c->r[2]+0xFFFFC8ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F034
  fcmp(c,0,c->f[1],c->f[0]); // 8016F038
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016F03C
  if (!crb(c,2)) { goto L_8016F050; } // 8016F040
  {uint32_t ea=c->r[2]+0xFFFFC8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F044
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8016F048
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8016F04C
L_8016F050:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F050
  {uint32_t ea=c->r[2]+0xFFFFC868u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F054
  fcmp(c,0,c->f[1],c->f[0]); // 8016F058
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016F05C
  if (!crb(c,2)) { goto L_8016F06C; } // 8016F060
  c->r[3]=0u+0x00000001u; // 8016F064
  goto L_8016F154; // 8016F068
L_8016F06C:;
  c->r[3]=0u+0x00000000u; // 8016F06C
  goto L_8016F154; // 8016F070
L_8016F074:;
  c->r[3]=0u+0x80620000u; // 8016F074
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F078
  c->r[3]=c->r[3]+0x000079C0u; // 8016F07C
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F080
  {uint32_t ea=c->r[3]+0x00000060u; c->f[30]=c->ps1[30]=RF32(ea);} // 8016F084
  fcmp(c,0,c->f[1],c->f[0]); // 8016F088
  {uint32_t ea=c->r[3]+0x00000064u; c->f[31]=c->ps1[31]=RF32(ea);} // 8016F08C
  if (!crb(c,0)) { goto L_8016F09C; } // 8016F090
  {uint32_t ea=c->r[2]+0xFFFFC86Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F094
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 8016F098
L_8016F09C:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[31]); // 8016F09C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[30],c->f[30],c->f[0])); // 8016F0A0
  c->lr=0x8016F0A8u; f_800689C8(c); // 8016F0A4
  {uint32_t ea=c->r[2]+0xFFFFC8C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F0A8
  fcmp(c,0,c->f[1],c->f[0]); // 8016F0AC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016F0B0
  if (!crb(c,2)) { goto L_8016F0FC; } // 8016F0B4
  c->f[1]=c->f[31]; // 8016F0B8
  c->f[2]=c->f[30]; // 8016F0BC
  c->lr=0x8016F0C4u; f_8005C22C(c); // 8016F0C0
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F0C4
  fcmp(c,0,c->f[1],c->f[0]); // 8016F0C8
  if (!crb(c,1)) { goto L_8016F0E4; } // 8016F0CC
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016F0D0
  {uint32_t ea=c->r[2]+0xFFFFC8CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F0D4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8016F0D8
  c->f[30]=c->ps1[30]=S(c->f[1]/c->f[0]); // 8016F0DC
  goto L_8016F0FC; // 8016F0E0
L_8016F0E4:;
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F0E4
  {uint32_t ea=c->r[2]+0xFFFFC8CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016F0E8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8016F0EC
  {uint32_t ea=c->r[2]+0xFFFFC8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F0F0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8016F0F4
  c->f[30]=c->ps1[30]=S(c->f[0]+c->f[1]); // 8016F0F8
L_8016F0FC:;
  {uint32_t ea=c->r[2]+0xFFFFC8ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F0FC
  fcmp(c,0,c->f[30],c->f[0]); // 8016F100
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016F104
  if (!crb(c,2)) { goto L_8016F120; } // 8016F108
  {uint32_t ea=c->r[2]+0xFFFFC868u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F10C
  fcmp(c,0,c->f[30],c->f[0]); // 8016F110
  if (!crb(c,0)) { goto L_8016F120; } // 8016F114
  c->r[3]=0u+0x00000001u; // 8016F118
  goto L_8016F154; // 8016F11C
L_8016F120:;
  c->r[3]=0u+0x00000000u; // 8016F120
  goto L_8016F154; // 8016F124
L_8016F128:;
  c->r[3]=0u+0x80620000u; // 8016F128
  c->r[3]=c->r[3]+0x000079C0u; // 8016F12C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F130
  c->lr=0x8016F138u; f_8002C1B0(c); // 8016F134
  {uint32_t ea=c->r[2]+0xFFFFC8C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F138
  fcmp(c,0,c->f[1],c->f[0]); // 8016F13C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016F140
  c->r[3]=c->cr; // 8016F144
  c->r[3]=rotl(c->r[3],3)&0x00000001u; // 8016F148
  goto L_8016F154; // 8016F14C
L_8016F150:;
  c->r[3]=0u+0x00000000u; // 8016F150
L_8016F154:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8016F154
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8016F158
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 8016F15C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8016F160
  c->r[0]=R32(c->r[1]+0x00000044u); // 8016F164
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016F168
  c->lr=c->r[0]; // 8016F16C
  c->r[1]=c->r[1]+0x00000040u; // 8016F170
  return; // 8016F174
}

// fn_8016F178
void f_8016F178(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F178
  c->r[0]=c->lr; // 8016F17C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8016F180
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 8016F184
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 8016F188
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 8016F18C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 8016F190
  c->r[3]=0u+0x80550000u; // 8016F194
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016F198
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8016F19C
  W32(c->r[1]+0x00000078u,c->r[30]); // 8016F1A0
  W32(c->r[1]+0x00000074u,c->r[29]); // 8016F1A4
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016F1A8
  c->lr=0x8016F1B0u; f_8019C920(c); // 8016F1AC
  cmps(c,0,(int32_t)c->r[3],0); // 8016F1B0
  c->r[29]=c->r[3]|c->r[3]; // 8016F1B4
  if (crb(c,2)) { goto L_8016F2A0; } // 8016F1B8
  c->r[4]=0u+0x00000002u; // 8016F1BC
  c->lr=0x8016F1C4u; f_80039840(c); // 8016F1C0
  c->r[30]=0u+0x803A0000u; // 8016F1C4
  c->r[5]=c->r[1]+0x00000038u; // 8016F1C8
  c->r[4]=c->r[30]+0x00002FA0u; // 8016F1CC
  c->r[6]=0u+0x00000001u; // 8016F1D0
  c->lr=0x8016F1D8u; f_80257018(c); // 8016F1D4
  c->r[8]=0u+0x803A0000u; // 8016F1D8
  {uint32_t ea=c->r[8]+0x00002F4Cu; c->r[7]=R32(ea); c->r[8]=ea;} // 8016F1DC
  c->r[3]=c->r[1]+0x00000038u; // 8016F1E0
  c->r[4]=c->r[1]+0x00000020u; // 8016F1E4
  c->r[6]=R32(c->r[8]+0x00000004u); // 8016F1E8
  c->r[5]=c->r[1]+0x0000002Cu; // 8016F1EC
  c->r[0]=R32(c->r[8]+0x00000008u); // 8016F1F0
  W32(c->r[1]+0x00000020u,c->r[7]); // 8016F1F4
  W32(c->r[1]+0x00000024u,c->r[6]); // 8016F1F8
  W32(c->r[1]+0x00000028u,c->r[0]); // 8016F1FC
  c->lr=0x8016F204u; f_80296750(c); // 8016F200
  c->r[31]=0u+0x805D0000u; // 8016F204
  c->r[4]=0u+0x00000000u; // 8016F208
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016F20C
  c->lr=0x8016F214u; f_80039840(c); // 8016F210
  c->r[4]=c->r[30]+0x00002FA0u; // 8016F214
  c->r[5]=c->r[1]+0x00000038u; // 8016F218
  c->r[4]=c->r[4]+0x000000B3u; // 8016F21C
  c->r[6]=0u+0x00000001u; // 8016F220
  c->lr=0x8016F228u; f_80257018(c); // 8016F224
  c->r[8]=0u+0x803A0000u; // 8016F228
  {uint32_t ea=c->r[8]+0x00002F58u; c->r[7]=R32(ea); c->r[8]=ea;} // 8016F22C
  c->r[3]=c->r[1]+0x00000038u; // 8016F230
  c->r[4]=c->r[1]+0x00000008u; // 8016F234
  c->r[6]=R32(c->r[8]+0x00000004u); // 8016F238
  c->r[5]=c->r[1]+0x00000014u; // 8016F23C
  c->r[0]=R32(c->r[8]+0x00000008u); // 8016F240
  W32(c->r[1]+0x00000008u,c->r[7]); // 8016F244
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8016F248
  W32(c->r[1]+0x00000010u,c->r[0]); // 8016F24C
  c->lr=0x8016F254u; f_80296750(c); // 8016F250
  {uint32_t ea=c->r[2]+0xFFFFCA3Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8016F254
  c->r[3]=c->r[1]+0x0000002Cu; // 8016F258
  {uint32_t ea=c->r[2]+0xFFFFCA88u; c->f[30]=c->ps1[30]=RF32(ea);} // 8016F25C
  c->r[4]=c->r[1]+0x00000014u; // 8016F260
  c->lr=0x8016F268u; f_80296CAC(c); // 8016F264
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[30]); // 8016F268
  fcmp(c,0,c->f[1],c->f[0]); // 8016F26C
  if (!crb(c,0)) { goto L_8016F27C; } // 8016F270
  c->r[3]=0u+0x00000001u; // 8016F274
  goto L_8016F2A4; // 8016F278
L_8016F27C:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 8016F27C
  c->r[4]=c->r[29]+0x0000002Cu; // 8016F280
  c->r[3]=c->r[3]+0x0000002Cu; // 8016F284
  c->lr=0x8016F28Cu; f_80296CAC(c); // 8016F288
  {uint32_t ea=c->r[2]+0xFFFFCA88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F28C
  fcmp(c,0,c->f[1],c->f[0]); // 8016F290
  if (!crb(c,0)) { goto L_8016F2A0; } // 8016F294
  c->r[3]=0u+0x00000001u; // 8016F298
  goto L_8016F2A4; // 8016F29C
L_8016F2A0:;
  c->r[3]=0u+0x00000000u; // 8016F2A0
L_8016F2A4:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 8016F2A4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 8016F2A8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 8016F2AC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 8016F2B0
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 8016F2B4
  c->r[30]=R32(c->r[1]+0x00000078u); // 8016F2B8
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8016F2BC
  c->r[29]=R32(c->r[1]+0x00000074u); // 8016F2C0
  c->lr=c->r[0]; // 8016F2C4
  c->r[1]=c->r[1]+0x000000A0u; // 8016F2C8
  return; // 8016F2CC
}

// fn_8016F2D0
void f_8016F2D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F2D0
  c->r[0]=c->lr; // 8016F2D4
  W32(c->r[1]+0x00000074u,c->r[0]); // 8016F2D8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 8016F2DC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 8016F2E0
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8016F2E4
  c->r[31]=0u+0x80550000u; // 8016F2E8
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8016F2EC
  W32(c->r[1]+0x00000058u,c->r[30]); // 8016F2F0
  W32(c->r[1]+0x00000054u,c->r[29]); // 8016F2F4
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016F2F8
  c->lr=0x8016F300u; f_8019C920(c); // 8016F2FC
  c->r[5]=0u+0x80620000u; // 8016F300
  c->r[29]=c->r[3]|c->r[3]; // 8016F304
  c->r[5]=c->r[5]+0x00007688u; // 8016F308
  c->r[4]=0u+0x0000002Au; // 8016F30C
  c->r[3]=R32(c->r[5]+0x00000014u); // 8016F310
  c->lr=0x8016F318u; f_8003560C(c); // 8016F314
  c->r[30]=c->r[3]|c->r[3]; // 8016F318
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8016F31C
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 8016F320
  c->lr=0x8016F328u; f_8019C920(c); // 8016F324
  cmps(c,0,(int32_t)c->r[29],0); // 8016F328
  c->r[31]=c->r[3]|c->r[3]; // 8016F32C
  if (crb(c,2)) { goto L_8016F3EC; } // 8016F330
  cmps(c,0,(int32_t)c->r[3],0); // 8016F334
  if (crb(c,2)) { goto L_8016F3EC; } // 8016F338
  cmpu(c,0,c->r[30],0x00000039u); // 8016F33C
  if (!crb(c,2)) { goto L_8016F34C; } // 8016F340
  {uint32_t ea=c->r[2]+0xFFFFC988u; c->f[31]=c->ps1[31]=RF32(ea);} // 8016F344
  goto L_8016F350; // 8016F348
L_8016F34C:;
  {uint32_t ea=c->r[2]+0xFFFFC800u; c->f[31]=c->ps1[31]=RF32(ea);} // 8016F34C
L_8016F350:;
  c->r[3]=c->r[29]|c->r[29]; // 8016F350
  c->r[4]=0u+0x00000000u; // 8016F354
  c->lr=0x8016F35Cu; f_80039840(c); // 8016F358
  c->r[4]=0u+0x803A0000u; // 8016F35C
  c->r[5]=c->r[1]+0x00000020u; // 8016F360
  c->r[4]=c->r[4]+0x00002FA0u; // 8016F364
  c->r[6]=0u+0x00000001u; // 8016F368
  c->r[4]=c->r[4]+0x0000008Bu; // 8016F36C
  c->lr=0x8016F374u; f_80257018(c); // 8016F370
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016F374
  cmpu(c,0,c->r[30],0x00000039u); // 8016F378
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F37C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F380
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 8016F384
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8016F388
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8016F38C
  if (!crb(c,2)) { goto L_8016F3D0; } // 8016F390
  c->r[7]=0u+0x803A0000u; // 8016F394
  {uint32_t ea=c->r[7]+0x00002F64u; c->r[6]=R32(ea); c->r[7]=ea;} // 8016F398
  c->r[3]=c->r[1]+0x00000008u; // 8016F39C
  {uint32_t ea=c->r[2]+0xFFFFCA90u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F3A0
  c->r[5]=R32(c->r[7]+0x00000004u); // 8016F3A4
  c->r[4]=c->r[3]|c->r[3]; // 8016F3A8
  c->r[0]=R32(c->r[7]+0x00000008u); // 8016F3AC
  W32(c->r[1]+0x00000008u,c->r[6]); // 8016F3B0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8016F3B4
  W32(c->r[1]+0x00000010u,c->r[0]); // 8016F3B8
  c->lr=0x8016F3C0u; f_80296A94(c); // 8016F3BC
  c->r[3]=c->r[1]+0x00000020u; // 8016F3C0
  c->r[4]=c->r[1]+0x00000008u; // 8016F3C4
  c->r[5]=c->r[1]+0x00000014u; // 8016F3C8
  c->lr=0x8016F3D0u; f_80296750(c); // 8016F3CC
L_8016F3D0:;
  c->r[3]=c->r[1]+0x00000014u; // 8016F3D0
  c->r[4]=c->r[31]+0x0000002Cu; // 8016F3D4
  c->lr=0x8016F3DCu; f_80296CAC(c); // 8016F3D8
  fcmp(c,0,c->f[1],c->f[31]); // 8016F3DC
  if (!crb(c,0)) { goto L_8016F3EC; } // 8016F3E0
  c->r[3]=0u+0x00000001u; // 8016F3E4
  goto L_8016F3F0; // 8016F3E8
L_8016F3EC:;
  c->r[3]=0u+0x00000000u; // 8016F3EC
L_8016F3F0:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8016F3F0
  c->r[0]=R32(c->r[1]+0x00000074u); // 8016F3F4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8016F3F8
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8016F3FC
  c->r[30]=R32(c->r[1]+0x00000058u); // 8016F400
  c->r[29]=R32(c->r[1]+0x00000054u); // 8016F404
  c->lr=c->r[0]; // 8016F408
  c->r[1]=c->r[1]+0x00000070u; // 8016F40C
  return; // 8016F410
}

// fn_8016F414
void f_8016F414(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F414
  c->r[0]=c->lr; // 8016F418
  c->r[3]=0u+0x80550000u; // 8016F41C
  c->r[4]=0u+0x0000003Du; // 8016F420
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016F424
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016F428
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016F42C
  c->r[31]=c->r[5]|c->r[5]; // 8016F430
  c->lr=0x8016F438u; f_8019C920(c); // 8016F434
  cmps(c,0,(int32_t)c->r[3],0); // 8016F438
  if (crb(c,2)) { goto L_8016F514; } // 8016F43C
  c->r[0]=R8(c->r[31]+0x00000003u); // 8016F440
  cmps(c,0,(int32_t)c->r[0],1); // 8016F444
  if (crb(c,2)) { goto L_8016F4B0; } // 8016F448
  if (!crb(c,0)) { goto L_8016F45C; } // 8016F44C
  cmps(c,0,(int32_t)c->r[0],0); // 8016F450
  if (!crb(c,0)) { goto L_8016F468; } // 8016F454
  goto L_8016F514; // 8016F458
L_8016F45C:;
  cmps(c,0,(int32_t)c->r[0],3); // 8016F45C
  if (!crb(c,0)) { goto L_8016F514; } // 8016F460
  goto L_8016F4F8; // 8016F464
L_8016F468:;
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F468
  {uint32_t ea=c->r[2]+0xFFFFCA94u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F46C
  fcmp(c,0,c->f[1],c->f[0]); // 8016F470
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016F474
  if (!crb(c,2)) { goto L_8016F514; } // 8016F478
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F47C
  {uint32_t ea=c->r[2]+0xFFFFCA9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F480
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016F484
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8016F488
  {uint32_t ea=c->r[2]+0xFFFFCA98u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F48C
  {uint32_t ea=c->r[2]+0xFFFFCA70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F490
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 8016F494
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 8016F498
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[2],c->f[1])); // 8016F49C
  fcmp(c,0,c->f[1],c->f[0]); // 8016F4A0
  if (!crb(c,0)) { goto L_8016F514; } // 8016F4A4
  c->r[3]=0u+0x00000001u; // 8016F4A8
  goto L_8016F518; // 8016F4AC
L_8016F4B0:;
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F4B0
  {uint32_t ea=c->r[2]+0xFFFFC920u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F4B4
  fcmp(c,0,c->f[1],c->f[0]); // 8016F4B8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016F4BC
  if (!crb(c,2)) { goto L_8016F514; } // 8016F4C0
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F4C4
  {uint32_t ea=c->r[2]+0xFFFFCA9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F4C8
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016F4CC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8016F4D0
  {uint32_t ea=c->r[2]+0xFFFFCA98u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F4D4
  {uint32_t ea=c->r[2]+0xFFFFCA70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F4D8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 8016F4DC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 8016F4E0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[2],c->f[1])); // 8016F4E4
  fcmp(c,0,c->f[1],c->f[0]); // 8016F4E8
  if (!crb(c,0)) { goto L_8016F514; } // 8016F4EC
  c->r[3]=0u+0x00000001u; // 8016F4F0
  goto L_8016F518; // 8016F4F4
L_8016F4F8:;
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F4F8
  {uint32_t ea=c->r[2]+0xFFFFC91Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F4FC
  fcmp(c,0,c->f[1],c->f[0]); // 8016F500
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016F504
  if (!crb(c,2)) { goto L_8016F514; } // 8016F508
  c->r[3]=0u+0x00000001u; // 8016F50C
  goto L_8016F518; // 8016F510
L_8016F514:;
  c->r[3]=0u+0x00000000u; // 8016F514
L_8016F518:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016F518
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016F51C
  c->lr=c->r[0]; // 8016F520
  c->r[1]=c->r[1]+0x00000010u; // 8016F524
  return; // 8016F528
}

// fn_8016F52C
void f_8016F52C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F52C
  c->r[0]=c->lr; // 8016F530
  c->r[3]=0u+0x80550000u; // 8016F534
  c->r[4]=0u+0x00000011u; // 8016F538
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016F53C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016F540
  c->lr=0x8016F548u; f_8019C920(c); // 8016F544
  cmps(c,0,(int32_t)c->r[3],0); // 8016F548
  if (crb(c,2)) { goto L_8016F57C; } // 8016F54C
  {uint32_t ea=c->r[3]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F550
  {uint32_t ea=c->r[2]+0xFFFFC95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F554
  fcmp(c,0,c->f[1],c->f[0]); // 8016F558
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016F55C
  if (!crb(c,2)) { goto L_8016F57C; } // 8016F560
  {uint32_t ea=c->r[2]+0xFFFFCAA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F564
  fcmp(c,0,c->f[1],c->f[0]); // 8016F568
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016F56C
  if (!crb(c,2)) { goto L_8016F57C; } // 8016F570
  c->r[3]=0u+0x00000001u; // 8016F574
  goto L_8016F580; // 8016F578
L_8016F57C:;
  c->r[3]=0u+0x00000000u; // 8016F57C
L_8016F580:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016F580
  c->lr=c->r[0]; // 8016F584
  c->r[1]=c->r[1]+0x00000010u; // 8016F588
  return; // 8016F58C
}

// fn_8016F590
void f_8016F590(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F590
  c->r[0]=c->lr; // 8016F594
  c->r[3]=0u+0x805D0000u; // 8016F598
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016F59C
  c->r[4]=c->r[1]+0x00000008u; // 8016F5A0
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016F5A4
  c->lr=0x8016F5ACu; f_80038E24(c); // 8016F5A8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F5AC
  {uint32_t ea=c->r[2]+0xFFFFC808u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F5B0
  fcmp(c,0,c->f[1],c->f[0]); // 8016F5B4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016F5B8
  if (!crb(c,2)) { goto L_8016F5D8; } // 8016F5BC
  {uint32_t ea=c->r[2]+0xFFFFC8DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F5C0
  fcmp(c,0,c->f[1],c->f[0]); // 8016F5C4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016F5C8
  if (!crb(c,2)) { goto L_8016F5D8; } // 8016F5CC
  c->r[3]=0u+0x00000001u; // 8016F5D0
  goto L_8016F5DC; // 8016F5D4
L_8016F5D8:;
  c->r[3]=0u+0x00000000u; // 8016F5D8
L_8016F5DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016F5DC
  c->lr=c->r[0]; // 8016F5E0
  c->r[1]=c->r[1]+0x00000020u; // 8016F5E4
  return; // 8016F5E8
}

// fn_8016F5EC
void f_8016F5EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F5EC
  c->r[0]=c->lr; // 8016F5F0
  c->r[3]=0u+0x805D0000u; // 8016F5F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016F5F8
  c->r[4]=c->r[1]+0x00000008u; // 8016F5FC
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016F600
  c->lr=0x8016F608u; f_80038E24(c); // 8016F604
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F608
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F60C
  fcmp(c,0,c->f[1],c->f[0]); // 8016F610
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016F614
  if (!crb(c,2)) { goto L_8016F634; } // 8016F618
  {uint32_t ea=c->r[2]+0xFFFFC930u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F61C
  fcmp(c,0,c->f[1],c->f[0]); // 8016F620
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016F624
  if (!crb(c,2)) { goto L_8016F634; } // 8016F628
  c->r[3]=0u+0x00000000u; // 8016F62C
  goto L_8016F664; // 8016F630
L_8016F634:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F634
  {uint32_t ea=c->r[2]+0xFFFFCAA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F638
  fcmp(c,0,c->f[1],c->f[0]); // 8016F63C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016F640
  if (!crb(c,2)) { goto L_8016F660; } // 8016F644
  {uint32_t ea=c->r[2]+0xFFFFC8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F648
  fcmp(c,0,c->f[1],c->f[0]); // 8016F64C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016F650
  if (!crb(c,2)) { goto L_8016F660; } // 8016F654
  c->r[3]=0u+0x00000000u; // 8016F658
  goto L_8016F664; // 8016F65C
L_8016F660:;
  c->r[3]=0u+0x00000001u; // 8016F660
L_8016F664:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016F664
  c->lr=c->r[0]; // 8016F668
  c->r[1]=c->r[1]+0x00000020u; // 8016F66C
  return; // 8016F670
}

// fn_8016F674
void f_8016F674(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F674
  c->r[0]=c->lr; // 8016F678
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016F67C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016F680
  c->r[31]=c->r[5]|c->r[5]; // 8016F684
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016F688
  c->r[30]=0u+0x80620000u; // 8016F68C
  c->r[30]=c->r[30]+0x00007688u; // 8016F690
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016F694
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016F698
  c->r[3]=R32(c->r[30]+0x00000014u); // 8016F69C
  c->lr=0x8016F6A4u; f_8003560C(c); // 8016F6A0
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 8016F6A4
  cmpu(c,0,c->r[29],0x000000FFu); // 8016F6A8
  if (crb(c,2)) { goto L_8016F6F4; } // 8016F6AC
  c->r[3]=R32(c->r[30]+0x00000014u); // 8016F6B0
  c->r[4]=R8(c->r[31]+0x00000004u); // 8016F6B4
  c->lr=0x8016F6BCu; f_8003560C(c); // 8016F6B8
  c->r[31]=0u+0x80550000u; // 8016F6BC
  c->r[30]=c->r[3]|c->r[3]; // 8016F6C0
  c->r[4]=c->r[29]|c->r[29]; // 8016F6C4
  c->r[3]=c->r[31]+0xFFFFC848u; // 8016F6C8
  c->lr=0x8016F6D0u; f_8018D900(c); // 8016F6CC
  cmps(c,0,(int32_t)c->r[3],0); // 8016F6D0
  if (crb(c,2)) { goto L_8016F6F4; } // 8016F6D4
  c->r[4]=c->r[29]|c->r[29]; // 8016F6D8
  c->r[3]=c->r[31]+0xFFFFC848u; // 8016F6DC
  c->lr=0x8016F6E4u; f_8018E238(c); // 8016F6E0
  cmpu(c,0,c->r[30],c->r[3]); // 8016F6E4
  if (!crb(c,2)) { goto L_8016F6F4; } // 8016F6E8
  c->r[3]=0u+0x00000001u; // 8016F6EC
  goto L_8016F6F8; // 8016F6F0
L_8016F6F4:;
  c->r[3]=0u+0x00000000u; // 8016F6F4
L_8016F6F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016F6F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016F6FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016F700
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016F704
  c->lr=c->r[0]; // 8016F708
  c->r[1]=c->r[1]+0x00000020u; // 8016F70C
  return; // 8016F710
}

// fn_8016F714
void f_8016F714(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F714
  c->r[0]=c->lr; // 8016F718
  c->r[8]=0u+0x00000000u; // 8016F71C
  c->r[3]=0u+0x805D0000u; // 8016F720
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016F724
  c->r[5]=0u+0x803A0000u; // 8016F728
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016F72C
  c->r[4]=c->r[1]+0x00000020u; // 8016F730
  {uint32_t ea=c->r[5]+0x00002F70u; c->r[7]=R32(ea); c->r[5]=ea;} // 8016F734
  W32(c->r[1]+0x00000008u,c->r[8]); // 8016F738
  c->r[6]=R32(c->r[5]+0x00000004u); // 8016F73C
  c->r[0]=R32(c->r[5]+0x00000008u); // 8016F740
  c->r[5]=0u+0x00000000u; // 8016F744
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 8016F748
  W32(c->r[1]+0x00000010u,c->r[8]); // 8016F74C
  W32(c->r[1]+0x00000020u,c->r[8]); // 8016F750
  W32(c->r[1]+0x00000024u,c->r[8]); // 8016F754
  W32(c->r[1]+0x00000028u,c->r[8]); // 8016F758
  W32(c->r[1]+0x00000014u,c->r[7]); // 8016F75C
  W32(c->r[1]+0x00000018u,c->r[6]); // 8016F760
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8016F764
  c->lr=0x8016F76Cu; f_8020C9AC(c); // 8016F768
  c->r[3]=c->r[1]+0x00000014u; // 8016F76C
  c->r[4]=c->r[1]+0x00000020u; // 8016F770
  c->lr=0x8016F778u; f_80296C84(c); // 8016F774
  {uint32_t ea=c->r[2]+0xFFFFC988u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F778
  fcmp(c,0,c->f[1],c->f[0]); // 8016F77C
  c->r[3]=c->cr; // 8016F780
  c->r[0]=R32(c->r[1]+0x00000034u); // 8016F784
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 8016F788
  c->lr=c->r[0]; // 8016F78C
  c->r[1]=c->r[1]+0x00000030u; // 8016F790
  return; // 8016F794
}

// fn_8016F798
void f_8016F798(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F798
  c->r[0]=c->lr; // 8016F79C
  c->r[3]=0u+0x805D0000u; // 8016F7A0
  c->r[7]=0u+0x803A0000u; // 8016F7A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016F7A8
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016F7AC
  c->r[4]=c->r[1]+0x00000008u; // 8016F7B0
  {uint32_t ea=c->r[7]+0x00002F7Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 8016F7B4
  c->r[3]=c->r[3]+0x0000002Cu; // 8016F7B8
  c->r[5]=R32(c->r[7]+0x00000004u); // 8016F7BC
  c->r[0]=R32(c->r[7]+0x00000008u); // 8016F7C0
  W32(c->r[1]+0x00000008u,c->r[6]); // 8016F7C4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8016F7C8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8016F7CC
  c->lr=0x8016F7D4u; f_80296CAC(c); // 8016F7D0
  {uint32_t ea=c->r[2]+0xFFFFC8E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F7D4
  fcmp(c,0,c->f[1],c->f[0]); // 8016F7D8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016F7DC
  c->r[3]=c->cr; // 8016F7E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016F7E4
  c->r[3]=rotl(c->r[3],3)&0x00000001u; // 8016F7E8
  c->lr=c->r[0]; // 8016F7EC
  c->r[1]=c->r[1]+0x00000020u; // 8016F7F0
  return; // 8016F7F4
}

// fn_8016F7F8
void f_8016F7F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F7F8
  c->r[0]=c->lr; // 8016F7FC
  c->r[4]=0u+0x00000003u; // 8016F800
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016F804
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016F808
  c->r[31]=0u+0x80550000u; // 8016F80C
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8016F810
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016F814
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016F818
  W32(c->r[1]+0x00000010u,c->r[28]); // 8016F81C
  c->lr=0x8016F824u; f_8019C920(c); // 8016F820
  c->r[30]=c->r[3]|c->r[3]; // 8016F824
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8016F828
  c->r[4]=0u+0x00000004u; // 8016F82C
  c->lr=0x8016F834u; f_8019C920(c); // 8016F830
  c->r[29]=c->r[3]|c->r[3]; // 8016F834
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8016F838
  c->r[4]=0u+0x00000005u; // 8016F83C
  c->lr=0x8016F844u; f_8019C920(c); // 8016F840
  c->r[28]=c->r[3]|c->r[3]; // 8016F844
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8016F848
  c->r[4]=0u+0x00000006u; // 8016F84C
  c->lr=0x8016F854u; f_8019C920(c); // 8016F850
  cmps(c,0,(int32_t)c->r[30],0); // 8016F854
  c->r[31]=c->r[3]|c->r[3]; // 8016F858
  if (crb(c,2)) { goto L_8016F8C0; } // 8016F85C
  cmps(c,0,(int32_t)c->r[29],0); // 8016F860
  if (crb(c,2)) { goto L_8016F8C0; } // 8016F864
  cmps(c,0,(int32_t)c->r[28],0); // 8016F868
  if (crb(c,2)) { goto L_8016F8C0; } // 8016F86C
  cmps(c,0,(int32_t)c->r[3],0); // 8016F870
  if (crb(c,2)) { goto L_8016F8C0; } // 8016F874
  c->r[3]=c->r[30]|c->r[30]; // 8016F878
  c->lr=0x8016F880u; f_8010FDA8(c); // 8016F87C
  cmps(c,0,(int32_t)c->r[3],0); // 8016F880
  if (crb(c,2)) { goto L_8016F8C0; } // 8016F884
  c->r[3]=c->r[29]|c->r[29]; // 8016F888
  c->lr=0x8016F890u; f_8010FDA8(c); // 8016F88C
  cmps(c,0,(int32_t)c->r[3],0); // 8016F890
  if (crb(c,2)) { goto L_8016F8C0; } // 8016F894
  c->r[3]=c->r[28]|c->r[28]; // 8016F898
  c->lr=0x8016F8A0u; f_8010FDA8(c); // 8016F89C
  cmps(c,0,(int32_t)c->r[3],0); // 8016F8A0
  if (crb(c,2)) { goto L_8016F8C0; } // 8016F8A4
  c->r[3]=c->r[31]|c->r[31]; // 8016F8A8
  c->lr=0x8016F8B0u; f_8010FDA8(c); // 8016F8AC
  cmps(c,0,(int32_t)c->r[3],0); // 8016F8B0
  if (crb(c,2)) { goto L_8016F8C0; } // 8016F8B4
  c->r[3]=0u+0x00000001u; // 8016F8B8
  goto L_8016F8C4; // 8016F8BC
L_8016F8C0:;
  c->r[3]=0u+0x00000000u; // 8016F8C0
L_8016F8C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016F8C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016F8C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016F8CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016F8D0
  c->r[28]=R32(c->r[1]+0x00000010u); // 8016F8D4
  c->lr=c->r[0]; // 8016F8D8
  c->r[1]=c->r[1]+0x00000020u; // 8016F8DC
  return; // 8016F8E0
}

// fn_8016F8E4
void f_8016F8E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F8E4
  c->r[0]=c->lr; // 8016F8E8
  c->r[3]=0u+0x80550000u; // 8016F8EC
  c->r[4]=0u+0x00000050u; // 8016F8F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016F8F4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016F8F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016F8FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016F900
  c->r[30]=c->r[5]|c->r[5]; // 8016F904
  c->lr=0x8016F90Cu; f_8019C920(c); // 8016F908
  cmps(c,0,(int32_t)c->r[3],0); // 8016F90C
  c->r[31]=c->r[3]|c->r[3]; // 8016F910
  if (crb(c,2)) { goto L_8016F9A8; } // 8016F914
  c->lr=0x8016F91Cu; f_80102244(c); // 8016F918
  cmps(c,0,(int32_t)c->r[3],0); // 8016F91C
  if (crb(c,2)) { goto L_8016F9A8; } // 8016F920
  c->r[3]=c->r[31]|c->r[31]; // 8016F924
  c->lr=0x8016F92Cu; f_8010223C(c); // 8016F928
  c->r[0]=R8(c->r[30]+0x00000003u); // 8016F92C
  cmps(c,0,(int32_t)c->r[0],1); // 8016F930
  if (crb(c,2)) { goto L_8016F970; } // 8016F934
  if (!crb(c,0)) { goto L_8016F9A8; } // 8016F938
  cmps(c,0,(int32_t)c->r[0],0); // 8016F93C
  if (!crb(c,0)) { goto L_8016F948; } // 8016F940
  goto L_8016F9A8; // 8016F944
L_8016F948:;
  {uint32_t ea=c->r[2]+0xFFFFC8F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F948
  fcmp(c,0,c->f[1],c->f[0]); // 8016F94C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016F950
  if (!crb(c,2)) { goto L_8016F9A8; } // 8016F954
  {uint32_t ea=c->r[2]+0xFFFFC99Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F958
  fcmp(c,0,c->f[1],c->f[0]); // 8016F95C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016F960
  if (!crb(c,2)) { goto L_8016F9A8; } // 8016F964
  c->r[3]=0u+0x00000001u; // 8016F968
  goto L_8016F9AC; // 8016F96C
L_8016F970:;
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F970
  fcmp(c,0,c->f[1],c->f[0]); // 8016F974
  if (!crb(c,1)) { goto L_8016F980; } // 8016F978
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8016F97C
L_8016F980:;
  {uint32_t ea=c->r[2]+0xFFFFC7FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F980
  fcmp(c,0,c->f[1],c->f[0]); // 8016F984
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016F988
  if (!crb(c,2)) { goto L_8016F9A8; } // 8016F98C
  {uint32_t ea=c->r[2]+0xFFFFC864u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F990
  fcmp(c,0,c->f[1],c->f[0]); // 8016F994
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016F998
  if (!crb(c,2)) { goto L_8016F9A8; } // 8016F99C
  c->r[3]=0u+0x00000001u; // 8016F9A0
  goto L_8016F9AC; // 8016F9A4
L_8016F9A8:;
  c->r[3]=0u+0x00000000u; // 8016F9A8
L_8016F9AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016F9AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016F9B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016F9B4
  c->lr=c->r[0]; // 8016F9B8
  c->r[1]=c->r[1]+0x00000010u; // 8016F9BC
  return; // 8016F9C0
}

// fn_8016F9C4
void f_8016F9C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F9C4
  c->r[0]=c->lr; // 8016F9C8
  c->r[3]=0u+0x80550000u; // 8016F9CC
  c->r[4]=0u+0x00000055u; // 8016F9D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016F9D4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016F9D8
  c->lr=0x8016F9E0u; f_8019C920(c); // 8016F9DC
  cmps(c,0,(int32_t)c->r[3],0); // 8016F9E0
  if (crb(c,2)) { goto L_8016F9FC; } // 8016F9E4
  c->lr=0x8016F9ECu; f_80103094(c); // 8016F9E8
  cmps(c,0,(int32_t)c->r[3],0); // 8016F9EC
  if (crb(c,2)) { goto L_8016F9FC; } // 8016F9F0
  c->r[3]=0u+0x00000001u; // 8016F9F4
  goto L_8016FA00; // 8016F9F8
L_8016F9FC:;
  c->r[3]=0u+0x00000000u; // 8016F9FC
L_8016FA00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FA00
  c->lr=c->r[0]; // 8016FA04
  c->r[1]=c->r[1]+0x00000010u; // 8016FA08
  return; // 8016FA0C
}

// fn_8016FA10
void f_8016FA10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FA10
  c->r[0]=c->lr; // 8016FA14
  c->r[3]=0u+0x80550000u; // 8016FA18
  c->r[4]=0u+0x00000055u; // 8016FA1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FA20
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016FA24
  c->lr=0x8016FA2Cu; f_8019C920(c); // 8016FA28
  cmps(c,0,(int32_t)c->r[3],0); // 8016FA2C
  if (crb(c,2)) { goto L_8016FA48; } // 8016FA30
  c->lr=0x8016FA38u; f_801030A0(c); // 8016FA34
  cmps(c,0,(int32_t)c->r[3],0); // 8016FA38
  if (crb(c,2)) { goto L_8016FA48; } // 8016FA3C
  c->r[3]=0u+0x00000001u; // 8016FA40
  goto L_8016FA4C; // 8016FA44
L_8016FA48:;
  c->r[3]=0u+0x00000000u; // 8016FA48
L_8016FA4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FA4C
  c->lr=c->r[0]; // 8016FA50
  c->r[1]=c->r[1]+0x00000010u; // 8016FA54
  return; // 8016FA58
}

// fn_8016FA5C
void f_8016FA5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FA5C
  c->r[0]=c->lr; // 8016FA60
  c->r[3]=0u+0x80550000u; // 8016FA64
  c->r[4]=0u+0x00000031u; // 8016FA68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FA6C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016FA70
  c->lr=0x8016FA78u; f_8019C920(c); // 8016FA74
  cmps(c,0,(int32_t)c->r[3],0); // 8016FA78
  if (crb(c,2)) { goto L_8016FA9C; } // 8016FA7C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FA80
  {uint32_t ea=c->r[2]+0xFFFFCAA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FA84
  fcmp(c,0,c->f[1],c->f[0]); // 8016FA88
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016FA8C
  if (!crb(c,2)) { goto L_8016FA9C; } // 8016FA90
  c->r[3]=0u+0x00000001u; // 8016FA94
  goto L_8016FAA0; // 8016FA98
L_8016FA9C:;
  c->r[3]=0u+0x00000000u; // 8016FA9C
L_8016FAA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FAA0
  c->lr=c->r[0]; // 8016FAA4
  c->r[1]=c->r[1]+0x00000010u; // 8016FAA8
  return; // 8016FAAC
}

// fn_8016FAB0
void f_8016FAB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FAB0
  c->r[0]=c->lr; // 8016FAB4
  c->r[3]=0u+0x80550000u; // 8016FAB8
  c->r[4]=0u+0x00000031u; // 8016FABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FAC0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016FAC4
  c->lr=0x8016FACCu; f_8019C920(c); // 8016FAC8
  cmps(c,0,(int32_t)c->r[3],0); // 8016FACC
  if (crb(c,2)) { goto L_8016FAF0; } // 8016FAD0
  {uint32_t ea=c->r[3]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FAD4
  {uint32_t ea=c->r[2]+0xFFFFCAACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FAD8
  fcmp(c,0,c->f[1],c->f[0]); // 8016FADC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016FAE0
  if (!crb(c,2)) { goto L_8016FAF0; } // 8016FAE4
  c->r[3]=0u+0x00000001u; // 8016FAE8
  goto L_8016FAF4; // 8016FAEC
L_8016FAF0:;
  c->r[3]=0u+0x00000000u; // 8016FAF0
L_8016FAF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FAF4
  c->lr=c->r[0]; // 8016FAF8
  c->r[1]=c->r[1]+0x00000010u; // 8016FAFC
  return; // 8016FB00
}

// fn_8016FB04
void f_8016FB04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FB04
  c->r[0]=c->lr; // 8016FB08
  c->r[3]=0u+0x80550000u; // 8016FB0C
  c->r[4]=0u+0x00000011u; // 8016FB10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FB14
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016FB18
  c->lr=0x8016FB20u; f_8019C920(c); // 8016FB1C
  cmps(c,0,(int32_t)c->r[3],0); // 8016FB20
  if (crb(c,2)) { goto L_8016FB54; } // 8016FB24
  {uint32_t ea=c->r[3]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FB28
  {uint32_t ea=c->r[2]+0xFFFFC808u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FB2C
  fcmp(c,0,c->f[1],c->f[0]); // 8016FB30
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016FB34
  if (!crb(c,2)) { goto L_8016FB54; } // 8016FB38
  {uint32_t ea=c->r[2]+0xFFFFC9B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FB3C
  fcmp(c,0,c->f[1],c->f[0]); // 8016FB40
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016FB44
  if (!crb(c,2)) { goto L_8016FB54; } // 8016FB48
  c->r[3]=0u+0x00000001u; // 8016FB4C
  goto L_8016FB58; // 8016FB50
L_8016FB54:;
  c->r[3]=0u+0x00000000u; // 8016FB54
L_8016FB58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FB58
  c->lr=c->r[0]; // 8016FB5C
  c->r[1]=c->r[1]+0x00000010u; // 8016FB60
  return; // 8016FB64
}

// fn_8016FB68
void f_8016FB68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FB68
  c->r[0]=c->lr; // 8016FB6C
  c->r[3]=0u+0x80550000u; // 8016FB70
  c->r[4]=0u+0x00000011u; // 8016FB74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FB78
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016FB7C
  c->lr=0x8016FB84u; f_8019C920(c); // 8016FB80
  cmps(c,0,(int32_t)c->r[3],0); // 8016FB84
  if (crb(c,2)) { goto L_8016FBB8; } // 8016FB88
  {uint32_t ea=c->r[3]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FB8C
  {uint32_t ea=c->r[2]+0xFFFFC960u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FB90
  fcmp(c,0,c->f[1],c->f[0]); // 8016FB94
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016FB98
  if (!crb(c,2)) { goto L_8016FBB8; } // 8016FB9C
  {uint32_t ea=c->r[2]+0xFFFFCAB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FBA0
  fcmp(c,0,c->f[1],c->f[0]); // 8016FBA4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016FBA8
  if (!crb(c,2)) { goto L_8016FBB8; } // 8016FBAC
  c->r[3]=0u+0x00000001u; // 8016FBB0
  goto L_8016FBBC; // 8016FBB4
L_8016FBB8:;
  c->r[3]=0u+0x00000000u; // 8016FBB8
L_8016FBBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FBBC
  c->lr=c->r[0]; // 8016FBC0
  c->r[1]=c->r[1]+0x00000010u; // 8016FBC4
  return; // 8016FBC8
}

// fn_8016FBCC
void f_8016FBCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FBCC
  c->r[0]=c->lr; // 8016FBD0
  c->r[3]=0u+0x80550000u; // 8016FBD4
  c->r[4]=0u+0x00000050u; // 8016FBD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FBDC
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016FBE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016FBE4
  c->lr=0x8016FBECu; f_8019C920(c); // 8016FBE8
  cmps(c,0,(int32_t)c->r[3],0); // 8016FBEC
  c->r[31]=c->r[3]|c->r[3]; // 8016FBF0
  if (crb(c,2)) { goto L_8016FC20; } // 8016FBF4
  c->lr=0x8016FBFCu; f_80102250(c); // 8016FBF8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8016FBFC
  if (!crb(c,2)) { goto L_8016FC20; } // 8016FC00
  c->r[3]=c->r[31]|c->r[31]; // 8016FC04
  c->lr=0x8016FC0Cu; f_80102258(c); // 8016FC08
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FC0C
  fcmp(c,0,c->f[0],c->f[1]); // 8016FC10
  if (!crb(c,2)) { goto L_8016FC20; } // 8016FC14
  c->r[3]=0u+0x00000001u; // 8016FC18
  goto L_8016FC24; // 8016FC1C
L_8016FC20:;
  c->r[3]=0u+0x00000000u; // 8016FC20
L_8016FC24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FC24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016FC28
  c->lr=c->r[0]; // 8016FC2C
  c->r[1]=c->r[1]+0x00000010u; // 8016FC30
  return; // 8016FC34
}

// fn_8016FC38
void f_8016FC38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FC38
  c->r[0]=c->lr; // 8016FC3C
  c->r[4]=0u+0x00000012u; // 8016FC40
  W32(c->r[1]+0x00000054u,c->r[0]); // 8016FC44
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8016FC48
  c->r[31]=0u+0x80550000u; // 8016FC4C
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8016FC50
  W32(c->r[1]+0x00000048u,c->r[30]); // 8016FC54
  c->r[30]=c->r[5]|c->r[5]; // 8016FC58
  c->lr=0x8016FC60u; f_8019C920(c); // 8016FC5C
  c->r[4]=R8(c->r[30]+0x00000003u); // 8016FC60
  c->r[30]=c->r[3]|c->r[3]; // 8016FC64
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8016FC68
  c->lr=0x8016FC70u; f_8019C920(c); // 8016FC6C
  cmps(c,0,(int32_t)c->r[30],0); // 8016FC70
  c->r[31]=c->r[3]|c->r[3]; // 8016FC74
  if (crb(c,2)) { goto L_8016FCDC; } // 8016FC78
  cmps(c,0,(int32_t)c->r[3],0); // 8016FC7C
  if (crb(c,2)) { goto L_8016FCDC; } // 8016FC80
  c->r[3]=c->r[30]|c->r[30]; // 8016FC84
  c->r[4]=0u+0x00000000u; // 8016FC88
  c->lr=0x8016FC90u; f_80039840(c); // 8016FC8C
  c->r[4]=0u+0x803A0000u; // 8016FC90
  c->r[5]=c->r[1]+0x00000018u; // 8016FC94
  c->r[4]=c->r[4]+0x00002FA0u; // 8016FC98
  c->r[6]=0u+0x00000001u; // 8016FC9C
  c->lr=0x8016FCA4u; f_80257018(c); // 8016FCA0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016FCA4
  c->r[3]=c->r[1]+0x00000008u; // 8016FCA8
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FCAC
  c->r[4]=c->r[31]+0x0000002Cu; // 8016FCB0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FCB4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8016FCB8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8016FCBC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8016FCC0
  c->lr=0x8016FCC8u; f_80296CAC(c); // 8016FCC4
  {uint32_t ea=c->r[2]+0xFFFFC8E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FCC8
  fcmp(c,0,c->f[1],c->f[0]); // 8016FCCC
  if (!crb(c,0)) { goto L_8016FCDC; } // 8016FCD0
  c->r[3]=0u+0x00000001u; // 8016FCD4
  goto L_8016FCE0; // 8016FCD8
L_8016FCDC:;
  c->r[3]=0u+0x00000000u; // 8016FCDC
L_8016FCE0:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8016FCE0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8016FCE4
  c->r[30]=R32(c->r[1]+0x00000048u); // 8016FCE8
  c->lr=c->r[0]; // 8016FCEC
  c->r[1]=c->r[1]+0x00000050u; // 8016FCF0
  return; // 8016FCF4
}

// fn_8016FCF8
void f_8016FCF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FCF8
  c->r[0]=c->lr; // 8016FCFC
  c->r[4]=0u+0x00000007u; // 8016FD00
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FD04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016FD08
  c->r[31]=c->r[5]|c->r[5]; // 8016FD0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016FD10
  c->r[30]=0u+0x80550000u; // 8016FD14
  c->r[3]=c->r[30]+0xFFFFCE54u; // 8016FD18
  c->lr=0x8016FD20u; f_8019C920(c); // 8016FD1C
  c->r[4]=R8(c->r[31]+0x00000003u); // 8016FD20
  c->r[31]=c->r[3]|c->r[3]; // 8016FD24
  c->r[3]=c->r[30]+0xFFFFCE54u; // 8016FD28
  c->lr=0x8016FD30u; f_8019C920(c); // 8016FD2C
  cmps(c,0,(int32_t)c->r[31],0); // 8016FD30
  if (crb(c,2)) { goto L_8016FD64; } // 8016FD34
  cmps(c,0,(int32_t)c->r[3],0); // 8016FD38
  if (crb(c,2)) { goto L_8016FD64; } // 8016FD3C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FD40
  {uint32_t ea=c->r[2]+0xFFFFCA8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FD44
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016FD48
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8016FD4C
  fcmp(c,0,c->f[2],c->f[0]); // 8016FD50
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016FD54
  if (!crb(c,2)) { goto L_8016FD64; } // 8016FD58
  c->r[3]=0u+0x00000001u; // 8016FD5C
  goto L_8016FD68; // 8016FD60
L_8016FD64:;
  c->r[3]=0u+0x00000000u; // 8016FD64
L_8016FD68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FD68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016FD6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016FD70
  c->lr=c->r[0]; // 8016FD74
  c->r[1]=c->r[1]+0x00000010u; // 8016FD78
  return; // 8016FD7C
}

// fn_8016FD80
void f_8016FD80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FD80
  c->r[0]=c->lr; // 8016FD84
  c->r[3]=0u+0x80550000u; // 8016FD88
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FD8C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016FD90
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016FD94
  c->lr=0x8016FD9Cu; f_8019C920(c); // 8016FD98
  c->lr=0x8016FDA0u; f_8007EDD8(c); // 8016FD9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FDA0
  c->lr=c->r[0]; // 8016FDA4
  c->r[1]=c->r[1]+0x00000010u; // 8016FDA8
  return; // 8016FDAC
}

// fn_8016FDB0
void f_8016FDB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FDB0
  c->r[0]=c->lr; // 8016FDB4
  c->r[3]=0u+0x80550000u; // 8016FDB8
  c->r[4]=0u+0x00000007u; // 8016FDBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FDC0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016FDC4
  c->lr=0x8016FDCCu; f_8019C920(c); // 8016FDC8
  cmps(c,0,(int32_t)c->r[3],0); // 8016FDCC
  if (crb(c,2)) { goto L_8016FE00; } // 8016FDD0
  c->r[5]=0u+0x805D0000u; // 8016FDD4
  c->r[4]=c->r[3]+0x0000002Cu; // 8016FDD8
  c->r[5]=c->r[5]+0x00003F6Cu; // 8016FDDC
  c->r[3]=c->r[5]+0x0000002Cu; // 8016FDE0
  c->lr=0x8016FDE8u; f_80296CAC(c); // 8016FDE4
  {uint32_t ea=c->r[2]+0xFFFFC930u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FDE8
  fcmp(c,0,c->f[1],c->f[0]); // 8016FDEC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016FDF0
  if (!crb(c,2)) { goto L_8016FE00; } // 8016FDF4
  c->r[3]=0u+0x00000001u; // 8016FDF8
  goto L_8016FE04; // 8016FDFC
L_8016FE00:;
  c->r[3]=0u+0x00000000u; // 8016FE00
L_8016FE04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FE04
  c->lr=c->r[0]; // 8016FE08
  c->r[1]=c->r[1]+0x00000010u; // 8016FE0C
  return; // 8016FE10
}

// fn_8016FE14
void f_8016FE14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FE14
  c->r[0]=c->lr; // 8016FE18
  c->r[3]=0u+0x80550000u; // 8016FE1C
  c->r[4]=0u+0x0000004Eu; // 8016FE20
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016FE24
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016FE28
  c->lr=0x8016FE30u; f_8019C920(c); // 8016FE2C
  cmps(c,0,(int32_t)c->r[3],0); // 8016FE30
  if (crb(c,2)) { goto L_8016FE90; } // 8016FE34
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FE38
  c->r[5]=0u+0x805D0000u; // 8016FE3C
  c->r[5]=c->r[5]+0x00003F6Cu; // 8016FE40
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016FE44
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8016FE48
  c->r[4]=c->r[1]+0x00000008u; // 8016FE4C
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FE50
  {uint32_t ea=c->r[3]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016FE54
  c->r[3]=c->r[1]+0x00000014u; // 8016FE58
  {uint32_t ea=c->r[5]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FE5C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 8016FE60
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 8016FE64
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8016FE68
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8016FE6C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 8016FE70
  c->lr=0x8016FE78u; f_80296CAC(c); // 8016FE74
  {uint32_t ea=c->r[2]+0xFFFFC800u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FE78
  fcmp(c,0,c->f[1],c->f[0]); // 8016FE7C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016FE80
  if (!crb(c,2)) { goto L_8016FE90; } // 8016FE84
  c->r[3]=0u+0x00000001u; // 8016FE88
  goto L_8016FE94; // 8016FE8C
L_8016FE90:;
  c->r[3]=0u+0x00000000u; // 8016FE90
L_8016FE94:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016FE94
  c->lr=c->r[0]; // 8016FE98
  c->r[1]=c->r[1]+0x00000020u; // 8016FE9C
  return; // 8016FEA0
}

// fn_8016FEA4
void f_8016FEA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FEA4
  c->r[0]=c->lr; // 8016FEA8
  c->r[3]=0u+0x80550000u; // 8016FEAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FEB0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016FEB4
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016FEB8
  c->lr=0x8016FEC0u; f_8019C920(c); // 8016FEBC
  cmps(c,0,(int32_t)c->r[3],0); // 8016FEC0
  if (crb(c,2)) { goto L_8016FF78; } // 8016FEC4
  c->r[4]=0u+0x805D0000u; // 8016FEC8
  {uint32_t ea=c->r[3]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016FECC
  c->r[4]=c->r[4]+0x00003F6Cu; // 8016FED0
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FED4
  {uint32_t ea=c->r[4]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016FED8
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FEDC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 8016FEE0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 8016FEE4
  c->f[1]=-c->f[3]; // 8016FEE8
  c->lr=0x8016FEF0u; f_8005C22C(c); // 8016FEEC
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FEF0
  fcmp(c,0,c->f[1],c->f[0]); // 8016FEF4
  if (!crb(c,1)) { goto L_8016FF10; } // 8016FEF8
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016FEFC
  {uint32_t ea=c->r[2]+0xFFFFC8CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FF00
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8016FF04
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 8016FF08
  goto L_8016FF28; // 8016FF0C
L_8016FF10:;
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FF10
  {uint32_t ea=c->r[2]+0xFFFFC8CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016FF14
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8016FF18
  {uint32_t ea=c->r[2]+0xFFFFC8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FF1C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8016FF20
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8016FF24
L_8016FF28:;
  c->r[3]=0u+0x805D0000u; // 8016FF28
  {uint32_t ea=c->r[2]+0xFFFFC8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FF2C
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016FF30
  {uint32_t ea=c->r[3]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016FF34
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8016FF38
  fcmp(c,0,c->f[1],c->f[0]); // 8016FF3C
  if (!crb(c,1)) { goto L_8016FF50; } // 8016FF40
  {uint32_t ea=c->r[2]+0xFFFFC8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FF44
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8016FF48
  goto L_8016FF64; // 8016FF4C
L_8016FF50:;
  {uint32_t ea=c->r[2]+0xFFFFC994u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FF50
  fcmp(c,0,c->f[1],c->f[0]); // 8016FF54
  if (!crb(c,0)) { goto L_8016FF64; } // 8016FF58
  {uint32_t ea=c->r[2]+0xFFFFC8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FF5C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8016FF60
L_8016FF64:;
  {uint32_t ea=c->r[2]+0xFFFFC7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FF64
  fcmp(c,0,c->f[0],c->f[1]); // 8016FF68
  if (!crb(c,2)) { goto L_8016FF78; } // 8016FF6C
  c->r[3]=0u+0x00000001u; // 8016FF70
  goto L_8016FF7C; // 8016FF74
L_8016FF78:;
  c->r[3]=0u+0x00000000u; // 8016FF78
L_8016FF7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FF7C
  c->lr=c->r[0]; // 8016FF80
  c->r[1]=c->r[1]+0x00000010u; // 8016FF84
  return; // 8016FF88
}

// fn_8016FF8C
void f_8016FF8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FF8C
  c->r[0]=c->lr; // 8016FF90
  c->r[3]=0u+0x80550000u; // 8016FF94
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FF98
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8016FF9C
  c->r[4]=R8(c->r[5]+0x00000003u); // 8016FFA0
  c->lr=0x8016FFA8u; f_8019C920(c); // 8016FFA4
  cmps(c,0,(int32_t)c->r[3],0); // 8016FFA8
  if (crb(c,2)) { goto L_8016FFD4; } // 8016FFAC
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FFB0
  {uint32_t ea=c->r[2]+0xFFFFC8D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FFB4
  fcmp(c,0,c->f[1],c->f[0]); // 8016FFB8
  if (!crb(c,1)) { goto L_8016FFD4; } // 8016FFBC
  {uint32_t ea=c->r[2]+0xFFFFC808u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FFC0
  fcmp(c,0,c->f[1],c->f[0]); // 8016FFC4
  if (!crb(c,0)) { goto L_8016FFD4; } // 8016FFC8
  c->r[3]=0u+0x00000001u; // 8016FFCC
  goto L_8016FFD8; // 8016FFD0
L_8016FFD4:;
  c->r[3]=0u+0x00000000u; // 8016FFD4
L_8016FFD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FFD8
  c->lr=c->r[0]; // 8016FFDC
  c->r[1]=c->r[1]+0x00000010u; // 8016FFE0
  return; // 8016FFE4
}

// fn_8016FFE8
void f_8016FFE8(Ctx* __restrict c) {
  c->r[3]=0u+0x805D0000u; // 8016FFE8
  {uint32_t ea=c->r[2]+0xFFFFCAB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FFEC
  c->r[3]=c->r[3]+0x00003F6Cu; // 8016FFF0
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FFF4
  fcmp(c,0,c->f[1],c->f[0]); // 8016FFF8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016FFFC
  c->r[3]=c->cr; // 80170000
  c->r[3]=rotl(c->r[3],3)&0x00000001u; // 80170004
  return; // 80170008
}

// fn_8017000C
void f_8017000C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017000C
  c->r[0]=c->lr; // 80170010
  c->r[3]=0u+0x80550000u; // 80170014
  W32(c->r[1]+0x00000014u,c->r[0]); // 80170018
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8017001C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80170020
  W32(c->r[1]+0x00000008u,c->r[30]); // 80170024
  c->r[4]=R8(c->r[5]+0x00000003u); // 80170028
  c->lr=0x80170030u; f_8019C920(c); // 8017002C
  cmps(c,0,(int32_t)c->r[3],0); // 80170030
  c->r[30]=c->r[3]|c->r[3]; // 80170034
  if (crb(c,2)) { goto L_80170084; } // 80170038
  c->r[31]=0u+0x805D0000u; // 8017003C
  c->r[3]=c->r[31]+0x00003F6Cu; // 80170040
  c->lr=0x80170048u; f_80166594(c); // 80170044
  cmps(c,0,(int32_t)c->r[3],0); // 80170048
  if (crb(c,2)) { goto L_8017005C; } // 8017004C
  c->r[3]=c->r[30]|c->r[30]; // 80170050
  c->lr=0x80170058u; f_80037AF8(c); // 80170054
  goto L_80170088; // 80170058
L_8017005C:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 8017005C
  c->lr=0x80170064u; f_800567B4(c); // 80170060
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 80170064
  c->r[3]=c->r[30]|c->r[30]; // 80170068
  c->lr=0x80170070u; f_800567B4(c); // 8017006C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80170070
  c->r[0]=c->r[31]-c->r[0]; // 80170074
  c->r[0]=cntlz(c->r[0]); // 80170078
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8017007C
  goto L_80170088; // 80170080
L_80170084:;
  c->r[3]=0u+0x00000000u; // 80170084
L_80170088:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80170088
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017008C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80170090
  c->lr=c->r[0]; // 80170094
  c->r[1]=c->r[1]+0x00000010u; // 80170098
  return; // 8017009C
}

// fn_801700A0
void f_801700A0(Ctx* __restrict c) {
  c->r[3]=0u+0x80550000u; // 801700A0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801700A4
  f_8019CB50(c); return; // 801700A8
}

// fn_801700AC
void f_801700AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801700AC
  c->r[0]=c->lr; // 801700B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801700B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801700B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801700BC
  c->r[30]=0u+0x805D0000u; // 801700C0
  c->r[3]=c->r[30]+0x00006C94u; // 801700C4
  c->lr=0x801700CCu; f_80221F58(c); // 801700C8
  cmps(c,0,(int32_t)c->r[3],0); // 801700CC
  if (!crb(c,2)) { goto L_801700DC; } // 801700D0
  c->r[3]=0u+0x00000000u; // 801700D4
  goto L_8017012C; // 801700D8
L_801700DC:;
  c->r[31]=0u+0x80620000u; // 801700DC
  c->r[4]=0u+0x0000009Bu; // 801700E0
  c->r[31]=c->r[31]+0x00007688u; // 801700E4
  c->r[3]=R32(c->r[31]+0x00000014u); // 801700E8
  c->lr=0x801700F0u; f_80038AF4(c); // 801700EC
  cmps(c,0,(int32_t)c->r[3],0); // 801700F0
  if (crb(c,2)) { goto L_80170100; } // 801700F4
  c->r[3]=0u+0x00000001u; // 801700F8
  goto L_8017012C; // 801700FC
L_80170100:;
  c->r[3]=c->r[30]+0x00006C94u; // 80170100
  c->lr=0x80170108u; f_8010AC08(c); // 80170104
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80170108
  cmpu(c,0,c->r[0],0x000000FFu); // 8017010C
  if (!crb(c,2)) { goto L_80170128; } // 80170110
  c->r[3]=R32(c->r[31]+0x00000014u); // 80170114
  c->r[4]=0u+0x0000009Bu; // 80170118
  c->lr=0x80170120u; f_80038A08(c); // 8017011C
  c->r[3]=0u+0x00000001u; // 80170120
  goto L_8017012C; // 80170124
L_80170128:;
  c->r[3]=0u+0x00000000u; // 80170128
L_8017012C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017012C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80170130
  c->r[30]=R32(c->r[1]+0x00000008u); // 80170134
  c->lr=c->r[0]; // 80170138
  c->r[1]=c->r[1]+0x00000010u; // 8017013C
  return; // 80170140
}

// fn_80170144
void f_80170144(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170144
  c->r[0]=c->lr; // 80170148
  c->r[7]=0u+0x804B0000u; // 8017014C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80170150
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80170154
  c->r[7]=c->r[7]+0xFFFF8EFCu; // 80170158
  c->r[4]=c->r[5]|c->r[5]; // 8017015C
  c->r[5]=c->r[6]|c->r[6]; // 80170160
  c->r[12]=c->r[7]+c->r[0]; // 80170164
  c->lr=0x8017016Cu; f_802BA00C(c); // 80170168
  c->r[0]=c->r[0]|0x00000000u; // 8017016C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80170170
  c->lr=c->r[0]; // 80170174
  c->r[1]=c->r[1]+0x00000010u; // 80170178
  return; // 8017017C
}

// fn_80170180
void f_80170180(Ctx* __restrict c) {
  return; // 80170180
}

// fn_80170184
void f_80170184(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170184
  c->r[0]=c->lr; // 80170188
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017018C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80170190
  c->r[31]=0u+0x805D0000u; // 80170194
  c->r[3]=c->r[31]+0x00003F6Cu; // 80170198
  c->lr=0x801701A0u; f_80166594(c); // 8017019C
  cmps(c,0,(int32_t)c->r[3],0); // 801701A0
  if (crb(c,2)) { goto L_801701EC; } // 801701A4
  c->r[3]=c->r[31]+0x00003F6Cu; // 801701A8
  c->r[4]=c->r[1]+0x00000008u; // 801701AC
  c->r[5]=0u+0x00000000u; // 801701B0
  c->lr=0x801701B8u; f_8007C6C8(c); // 801701B4
  c->r[0]=0u+0x00000000u; // 801701B8
  c->r[3]=R32(c->r[1]+0x00000008u); // 801701BC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801701C0
  c->r[4]=c->r[1]+0x0000000Cu; // 801701C4
  c->r[3]=c->r[3]+0x00000068u; // 801701C8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801701CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801701D0
  c->lr=0x801701D8u; f_800361A0(c); // 801701D4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801701D8
  {uint32_t ea=c->r[2]+0xFFFFC864u; c->f[0]=c->ps1[0]=RF32(ea);} // 801701DC
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 801701E0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801701E4
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 801701E8
L_801701EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801701EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801701F0
  c->lr=c->r[0]; // 801701F4
  c->r[1]=c->r[1]+0x00000020u; // 801701F8
  return; // 801701FC
}

// fn_80170200
void f_80170200(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170200
  c->r[0]=c->lr; // 80170204
  W32(c->r[1]+0x00000014u,c->r[0]); // 80170208
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017020C
  c->r[31]=0u+0x805D0000u; // 80170210
  c->r[3]=c->r[31]+0x00003F6Cu; // 80170214
  c->lr=0x8017021Cu; f_80166594(c); // 80170218
  cmps(c,0,(int32_t)c->r[3],0); // 8017021C
  if (crb(c,2)) { goto L_80170240; } // 80170220
  {uint32_t ea=c->r[2]+0xFFFFC8D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170224
  c->r[3]=c->r[31]+0x00003F6Cu; // 80170228
  {uint32_t ea=c->r[2]+0xFFFFC864u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017022C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 80170230
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 80170234
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[1]);} // 80170238
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8017023C
L_80170240:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80170240
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80170244
  c->lr=c->r[0]; // 80170248
  c->r[1]=c->r[1]+0x00000010u; // 8017024C
  return; // 80170250
}

// fn_80170254
void f_80170254(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170254
  c->r[0]=c->lr; // 80170258
  cmps(c,0,(int32_t)c->r[3],0); // 8017025C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80170260
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80170264
  c->r[31]=c->r[4]|c->r[4]; // 80170268
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017026C
  c->r[30]=c->r[3]|c->r[3]; // 80170270
  if (crb(c,2)) { goto L_80170290; } // 80170274
  c->r[4]=0u+0x00000000u; // 80170278
  c->lr=0x80170280u; f_80103A70(c); // 8017027C
  cmps(c,0,(int32_t)c->r[31],0); // 80170280
  if (!crb(c,1)) { goto L_80170290; } // 80170284
  c->r[3]=c->r[30]|c->r[30]; // 80170288
  c->lr=0x80170290u; f_800C69B8(c); // 8017028C
L_80170290:;
  c->r[3]=c->r[30]|c->r[30]; // 80170290
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80170294
  c->r[30]=R32(c->r[1]+0x00000008u); // 80170298
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017029C
  c->lr=c->r[0]; // 801702A0
  c->r[1]=c->r[1]+0x00000010u; // 801702A4
  return; // 801702A8
}

// fn_801702AC
void f_801702AC(Ctx* __restrict c) {
  c->r[3]=0u+0x80490000u; // 801702AC
  c->r[3]=c->r[3]+0x00005E60u; // 801702B0
  return; // 801702B4
}

// fn_801702B8
void f_801702B8(Ctx* __restrict c) {
  c->r[3]=0u+0x80490000u; // 801702B8
  c->r[3]=c->r[3]+0x00006CE8u; // 801702BC
  return; // 801702C0
}

// fn_801702C4
void f_801702C4(Ctx* __restrict c) {
  c->r[3]=0u+0x80490000u; // 801702C4
  c->r[3]=c->r[3]+0x000076C0u; // 801702C8
  return; // 801702CC
}

// fn_801702D0
void f_801702D0(Ctx* __restrict c) {
  c->r[3]=0u+0x80490000u; // 801702D0
  c->r[3]=c->r[3]+0x00007488u; // 801702D4
  return; // 801702D8
}

// fn_801702DC
void f_801702DC(Ctx* __restrict c) {
  c->r[3]=0u+0x80490000u; // 801702DC
  c->r[3]=c->r[3]+0x000075DCu; // 801702E0
  return; // 801702E4
}

// fn_801702E8
void f_801702E8(Ctx* __restrict c) {
  c->r[3]=0u+0x80490000u; // 801702E8
  c->r[3]=c->r[3]+0x00007BD0u; // 801702EC
  return; // 801702F0
}

// fn_801702F4
void f_801702F4(Ctx* __restrict c) {
  c->r[3]=0u+0x80490000u; // 801702F4
  c->r[3]=c->r[3]+0x00007C74u; // 801702F8
  return; // 801702FC
}

// fn_80170300
void f_80170300(Ctx* __restrict c) {
  c->r[3]=0u+0x804B0000u; // 80170300
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80170304
  c->r[3]=c->r[3]+0xFFFF84A0u; // 80170308
  c->r[3]=R32(c->r[3]+c->r[0]); // 8017030C
  return; // 80170310
}

// fn_80170314
void f_80170314(Ctx* __restrict c) {
  c->r[3]=0u+0x804B0000u; // 80170314
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80170318
  c->r[3]=c->r[3]+0xFFFF9C88u; // 8017031C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80170320
  return; // 80170324
}

// fn_80170328
void f_80170328(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170328
  c->r[3]=0u+0x00000000u; // 8017032C
  c->r[4]=0u+0x00000000u; // 80170330
  c->r[5]=0u+0x00000280u; // 80170334
  c->r[6]=0u+0x000001C0u; // 80170338
  c->r[7]=0u+0xFFFFFFFFu; // 8017033C
  f_8024636C(c); return; // 80170340
}

// fn_80170344
void f_80170344(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170344
  c->r[0]=c->lr; // 80170348
  W32(c->r[1]+0x00000064u,c->r[0]); // 8017034C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80170350
  c->r[31]=0u+0x80550000u; // 80170354
  W32(c->r[1]+0x00000058u,c->r[30]); // 80170358
  W32(c->r[1]+0x00000054u,c->r[29]); // 8017035C
  c->r[29]=c->r[5]|c->r[5]; // 80170360
  c->r[3]=R8(c->r[5]+0x00000003u); // 80170364
  c->r[0]=c->r[3]+0x00000033u; // 80170368
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8017036C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80170370
  c->lr=0x80170378u; f_8019C920(c); // 80170374
  c->r[30]=c->r[3]|c->r[3]; // 80170378
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8017037C
  c->r[4]=0u+0x0000000Fu; // 80170380
  c->lr=0x80170388u; f_8019C920(c); // 80170384
  c->r[4]=0u+0x00000000u; // 80170388
  c->lr=0x80170390u; f_80039840(c); // 8017038C
  c->r[4]=0u+0x803A0000u; // 80170390
  c->r[5]=c->r[1]+0x00000018u; // 80170394
  c->r[4]=c->r[4]+0x0000307Cu; // 80170398
  c->r[6]=0u+0x00000001u; // 8017039C
  c->lr=0x801703A4u; f_80257018(c); // 801703A0
  c->r[0]=R8(c->r[29]+0x00000003u); // 801703A4
  c->r[4]=0u+0x804B0000u; // 801703A8
  c->r[4]=c->r[4]+0x00006610u; // 801703AC
  c->r[3]=c->r[1]+0x00000008u; // 801703B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801703B4
  c->r[4]=c->r[4]+c->r[0]; // 801703B8
  c->lr=0x801703C0u; f_800361A0(c); // 801703BC
  c->r[4]=c->r[1]+0x00000008u; // 801703C0
  c->r[3]=c->r[1]+0x00000018u; // 801703C4
  c->r[5]=c->r[4]|c->r[4]; // 801703C8
  c->lr=0x801703D0u; f_80296750(c); // 801703CC
  c->r[3]=c->r[30]+0x0000002Cu; // 801703D0
  c->r[4]=c->r[1]+0x00000008u; // 801703D4
  c->lr=0x801703DCu; f_800361A0(c); // 801703D8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 801703DC
  c->r[3]=c->r[30]|c->r[30]; // 801703E0
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801703E4
  c->r[5]=0u+0x00000001u; // 801703E8
  c->r[4]=R8(c->r[29]+0x00000004u); // 801703EC
  c->r[12]=R32(c->r[12]+0x00000048u); // 801703F0
  c->f[2]=c->f[1]; // 801703F4
  c->r[4]=c->r[4]+0x00000400u; // 801703F8
  c->ctr=c->r[12]; // 801703FC
  if (true) { c->lr=0x80170404u; dispatch(c,c->ctr); } // 80170400
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80170404
  c->r[3]=0u+0x00000001u; // 80170408
  c->r[30]=R32(c->r[1]+0x00000058u); // 8017040C
  c->r[29]=R32(c->r[1]+0x00000054u); // 80170410
  c->r[0]=R32(c->r[1]+0x00000064u); // 80170414
  c->lr=c->r[0]; // 80170418
  c->r[1]=c->r[1]+0x00000060u; // 8017041C
  return; // 80170420
}

// fn_80170424
void f_80170424(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170424
  c->r[0]=c->lr; // 80170428
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017042C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80170430
  c->r[31]=c->r[5]|c->r[5]; // 80170434
  c->r[0]=R8(c->r[5]+0x00000003u); // 80170438
  cmpu(c,0,c->r[0],0x00000002u); // 8017043C
  if (crb(c,2)) { goto L_8017048C; } // 80170440
  c->r[3]=c->r[4]|c->r[4]; // 80170444
  c->r[4]=c->r[1]+0x00000008u; // 80170448
  c->r[5]=0u+0x00000000u; // 8017044C
  c->lr=0x80170454u; f_8007C6C8(c); // 80170450
  c->r[0]=R8(c->r[31]+0x00000003u); // 80170454
  cmps(c,0,(int32_t)c->r[0],0); // 80170458
  if (!crb(c,2)) { goto L_8017047C; } // 8017045C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80170460
  c->r[0]=0u+0x00000001u; // 80170464
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170468
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 8017046C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80170470
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 80170474
  goto L_801704BC; // 80170478
L_8017047C:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8017047C
  c->r[0]=0u+0x00000000u; // 80170480
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 80170484
  goto L_801704BC; // 80170488
L_8017048C:;
  c->r[3]=0u+0x80550000u; // 8017048C
  c->r[4]=R8(c->r[5]+0x00000004u); // 80170490
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80170494
  c->lr=0x8017049Cu; f_8019C920(c); // 80170498
  cmps(c,0,(int32_t)c->r[3],0); // 8017049C
  if (crb(c,2)) { goto L_801704BC; } // 801704A0
  c->r[4]=c->r[1]+0x00000008u; // 801704A4
  c->r[5]=0u+0x00000000u; // 801704A8
  c->lr=0x801704B0u; f_8007C6C8(c); // 801704AC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801704B0
  c->r[0]=0u+0x00000000u; // 801704B4
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 801704B8
L_801704BC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801704BC
  c->r[3]=0u+0x00000001u; // 801704C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801704C4
  c->lr=c->r[0]; // 801704C8
  c->r[1]=c->r[1]+0x00000020u; // 801704CC
  return; // 801704D0
}

// fn_801704D4
void f_801704D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801704D4
  c->r[0]=c->lr; // 801704D8
  c->r[3]=0u+0x80550000u; // 801704DC
  c->r[4]=0u+0x0000000Du; // 801704E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801704E4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801704E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801704EC
  c->r[31]=c->r[5]|c->r[5]; // 801704F0
  c->lr=0x801704F8u; f_8019C920(c); // 801704F4
  c->r[0]=R8(c->r[31]+0x00000003u); // 801704F8
  c->r[31]=c->r[3]|c->r[3]; // 801704FC
  cmpu(c,0,c->r[0],0x00000011u); // 80170500
  if (crb(c,1)) { goto L_80170720; } // 80170504
  c->r[4]=0u+0x804B0000u; // 80170508
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017050C
  c->r[4]=c->r[4]+0x00006640u; // 80170510
  c->r[4]=R32(c->r[4]+c->r[0]); // 80170514
  c->ctr=c->r[4]; // 80170518
  if (true) { switch (c->ctr) { case 0x80170520u: goto L_80170520; case 0x8017053Cu: goto L_8017053C; case 0x80170560u: goto L_80170560; case 0x8017057Cu: goto L_8017057C; case 0x801705A0u: goto L_801705A0; case 0x801705BCu: goto L_801705BC; case 0x801705E0u: goto L_801705E0; case 0x801705FCu: goto L_801705FC; case 0x80170618u: goto L_80170618; case 0x8017063Cu: goto L_8017063C; case 0x80170644u: goto L_80170644; case 0x80170660u: goto L_80170660; case 0x80170684u: goto L_80170684; case 0x801706A0u: goto L_801706A0; case 0x801706BCu: goto L_801706BC; case 0x801706E0u: goto L_801706E0; case 0x801706FCu: goto L_801706FC; case 0x80170710u: goto L_80170710; default: break; } dispatch(c,c->ctr); return; } // 8017051C
L_80170520:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170520
  c->r[4]=0u+0x00000064u; // 80170524
  c->r[5]=0u+0x00000000u; // 80170528
  c->r[6]=0u+0x00000000u; // 8017052C
  c->r[7]=0u+0x00000000u; // 80170530
  c->lr=0x80170538u; f_801F4D44(c); // 80170534
  goto L_80170720; // 80170538
L_8017053C:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017053C
  c->r[4]=0u+0x00000067u; // 80170540
  c->r[5]=0u+0x00000000u; // 80170544
  c->r[6]=0u+0x00000000u; // 80170548
  c->r[7]=0u+0x00000000u; // 8017054C
  c->lr=0x80170554u; f_801F4D44(c); // 80170550
  c->r[3]=c->r[31]|c->r[31]; // 80170554
  c->lr=0x8017055Cu; f_80115380(c); // 80170558
  goto L_80170720; // 8017055C
L_80170560:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170560
  c->r[4]=0u+0x00000065u; // 80170564
  c->r[5]=0u+0x00000000u; // 80170568
  c->r[6]=0u+0x00000000u; // 8017056C
  c->r[7]=0u+0x00000000u; // 80170570
  c->lr=0x80170578u; f_801F4D44(c); // 80170574
  goto L_80170720; // 80170578
L_8017057C:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017057C
  c->r[4]=0u+0x00000068u; // 80170580
  c->r[5]=0u+0x00000000u; // 80170584
  c->r[6]=0u+0x00000000u; // 80170588
  c->r[7]=0u+0x00000000u; // 8017058C
  c->lr=0x80170594u; f_801F4D44(c); // 80170590
  c->r[3]=c->r[31]|c->r[31]; // 80170594
  c->lr=0x8017059Cu; f_80115380(c); // 80170598
  goto L_80170720; // 8017059C
L_801705A0:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801705A0
  c->r[4]=0u+0x00000066u; // 801705A4
  c->r[5]=0u+0x00000000u; // 801705A8
  c->r[6]=0u+0x00000000u; // 801705AC
  c->r[7]=0u+0x00000000u; // 801705B0
  c->lr=0x801705B8u; f_801F4D44(c); // 801705B4
  goto L_80170720; // 801705B8
L_801705BC:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801705BC
  c->r[4]=0u+0x00000069u; // 801705C0
  c->r[5]=0u+0x00000000u; // 801705C4
  c->r[6]=0u+0x00000000u; // 801705C8
  c->r[7]=0u+0x00000000u; // 801705CC
  c->lr=0x801705D4u; f_801F4D44(c); // 801705D0
  c->r[3]=c->r[31]|c->r[31]; // 801705D4
  c->lr=0x801705DCu; f_80115380(c); // 801705D8
  goto L_80170720; // 801705DC
L_801705E0:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801705E0
  c->r[4]=0u+0x0000006Au; // 801705E4
  c->r[5]=0u+0x00000000u; // 801705E8
  c->r[6]=0u+0x00000000u; // 801705EC
  c->r[7]=0u+0x00000000u; // 801705F0
  c->lr=0x801705F8u; f_801F4D44(c); // 801705F4
  goto L_80170720; // 801705F8
L_801705FC:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801705FC
  c->r[4]=0u+0x0000006Bu; // 80170600
  c->r[5]=0u+0x00000000u; // 80170604
  c->r[6]=0u+0x00000000u; // 80170608
  c->r[7]=0u+0x00000000u; // 8017060C
  c->lr=0x80170614u; f_801F4D44(c); // 80170610
  goto L_80170720; // 80170614
L_80170618:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170618
  c->r[4]=0u+0x0000006Cu; // 8017061C
  c->r[5]=0u+0x00000000u; // 80170620
  c->r[6]=0u+0x00000000u; // 80170624
  c->r[7]=0u+0x00000000u; // 80170628
  c->lr=0x80170630u; f_801F4D44(c); // 8017062C
  c->r[3]=c->r[31]|c->r[31]; // 80170630
  c->lr=0x80170638u; f_80115380(c); // 80170634
  goto L_80170720; // 80170638
L_8017063C:;
  c->lr=0x80170640u; f_800FDE28(c); // 8017063C
  goto L_80170720; // 80170640
L_80170644:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170644
  c->r[4]=0u+0x0000006Eu; // 80170648
  c->r[5]=0u+0x00000000u; // 8017064C
  c->r[6]=0u+0x00000000u; // 80170650
  c->r[7]=0u+0x00000000u; // 80170654
  c->lr=0x8017065Cu; f_801F4D44(c); // 80170658
  goto L_80170720; // 8017065C
L_80170660:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170660
  c->r[4]=0u+0x0000006Fu; // 80170664
  c->r[5]=0u+0x00000000u; // 80170668
  c->r[6]=0u+0x00000000u; // 8017066C
  c->r[7]=0u+0x00000000u; // 80170670
  c->lr=0x80170678u; f_801F4D44(c); // 80170674
  c->r[3]=c->r[31]|c->r[31]; // 80170678
  c->lr=0x80170680u; f_80115380(c); // 8017067C
  goto L_80170720; // 80170680
L_80170684:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170684
  c->r[4]=0u+0x00000070u; // 80170688
  c->r[5]=0u+0x00000000u; // 8017068C
  c->r[6]=0u+0x00000000u; // 80170690
  c->r[7]=0u+0x00000000u; // 80170694
  c->lr=0x8017069Cu; f_801F4D44(c); // 80170698
  goto L_80170720; // 8017069C
L_801706A0:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801706A0
  c->r[4]=0u+0x00000071u; // 801706A4
  c->r[5]=0u+0x00000000u; // 801706A8
  c->r[6]=0u+0x00000000u; // 801706AC
  c->r[7]=0u+0x00000000u; // 801706B0
  c->lr=0x801706B8u; f_801F4D44(c); // 801706B4
  goto L_80170720; // 801706B8
L_801706BC:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801706BC
  c->r[4]=0u+0x00000072u; // 801706C0
  c->r[5]=0u+0x00000000u; // 801706C4
  c->r[6]=0u+0x00000000u; // 801706C8
  c->r[7]=0u+0x00000000u; // 801706CC
  c->lr=0x801706D4u; f_801F4D44(c); // 801706D0
  c->r[3]=c->r[31]|c->r[31]; // 801706D4
  c->lr=0x801706DCu; f_80115380(c); // 801706D8
  goto L_80170720; // 801706DC
L_801706E0:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801706E0
  c->r[4]=0u+0x00000076u; // 801706E4
  c->r[5]=0u+0x00000000u; // 801706E8
  c->r[6]=0u+0x00000000u; // 801706EC
  c->r[7]=0u+0x00000000u; // 801706F0
  c->lr=0x801706F8u; f_801F4D44(c); // 801706F4
  goto L_80170720; // 801706F8
L_801706FC:;
  c->lr=0x80170700u; f_80037AF8(c); // 801706FC
  cmps(c,0,(int32_t)c->r[3],0); // 80170700
  if (!crb(c,2)) { goto L_80170720; } // 80170704
  c->r[3]=0u+0x00000002u; // 80170708
  goto L_80170724; // 8017070C
L_80170710:;
  c->r[12]=R32(c->r[3]+0x000000B0u); // 80170710
  c->r[12]=R32(c->r[12]+0x00000050u); // 80170714
  c->ctr=c->r[12]; // 80170718
  if (true) { c->lr=0x80170720u; dispatch(c,c->ctr); } // 8017071C
L_80170720:;
  c->r[3]=0u+0x00000001u; // 80170720
L_80170724:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80170724
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80170728
  c->lr=c->r[0]; // 8017072C
  c->r[1]=c->r[1]+0x00000010u; // 80170730
  return; // 80170734
}

// fn_80170738
void f_80170738(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170738
  c->r[0]=c->lr; // 8017073C
  c->r[3]=0u+0x80620000u; // 80170740
  c->r[4]=0u+0x0000000Au; // 80170744
  W32(c->r[1]+0x00000074u,c->r[0]); // 80170748
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[31]);} // 8017074C
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=21;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80170750
  c->r[24]=c->r[3]+0x00007688u; // 80170754
  c->r[3]=R32(c->r[24]+0x00000014u); // 80170758
  c->lr=0x80170760u; f_8003560C(c); // 8017075C
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 80170760
  c->r[4]=0u+0x0000000Bu; // 80170764
  c->r[3]=R32(c->r[24]+0x00000014u); // 80170768
  c->lr=0x80170770u; f_8003560C(c); // 8017076C
  W8(c->r[1]+0x0000000Du,c->r[3]); // 80170770
  c->r[4]=0u+0x0000000Cu; // 80170774
  c->r[3]=R32(c->r[24]+0x00000014u); // 80170778
  c->lr=0x80170780u; f_8003560C(c); // 8017077C
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 80170780
  c->r[4]=0u+0x0000000Du; // 80170784
  c->r[3]=R32(c->r[24]+0x00000014u); // 80170788
  c->lr=0x80170790u; f_8003560C(c); // 8017078C
  c->r[0]=0u+0x00000001u; // 80170790
  W8(c->r[1]+0x0000000Fu,c->r[3]); // 80170794
  c->r[25]=c->r[1]+0x0000000Cu; // 80170798
  c->r[26]=c->r[1]+0x00000008u; // 8017079C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801707A0
  c->r[28]=0u+0x00000000u; // 801707A4
  c->r[22]=0u+0x000000FFu; // 801707A8
  c->r[23]=0u+0x80550000u; // 801707AC
  W8(c->r[1]+0x00000009u,c->r[0]); // 801707B0
  c->r[21]=0u+0x00000000u; // 801707B4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801707B8
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801707BC
L_801707C0:;
  c->r[4]=R8(c->r[25]+0x00000000u); // 801707C0
  cmpu(c,0,c->r[4],0x000000FFu); // 801707C4
  if (crb(c,2)) { goto L_8017087C; } // 801707C8
  c->r[3]=c->r[23]+0xFFFFCE54u; // 801707CC
  c->lr=0x801707D4u; f_8019C920(c); // 801707D0
  cmps(c,0,(int32_t)c->r[3],0); // 801707D4
  if (crb(c,2)) { goto L_801707EC; } // 801707D8
  c->lr=0x801707E0u; f_800376F0(c); // 801707DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801707E0
  cmps(c,0,(int32_t)c->r[0],100); // 801707E4
  if (!crb(c,2)) { goto L_801707F4; } // 801707E8
L_801707EC:;
  W8(c->r[25]+0x00000000u,c->r[22]); // 801707EC
  goto L_8017087C; // 801707F0
L_801707F4:;
  c->r[3]=R8(c->r[25]+0x00000000u); // 801707F4
  cmpu(c,0,c->r[3],0x000000FFu); // 801707F8
  if (crb(c,2)) { goto L_8017087C; } // 801707FC
  c->r[0]=0u+0x00000000u; // 80170800
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80170804
  if (crb(c,2)) { goto L_8017081C; } // 80170808
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8017080C
  cmpu(c,0,c->r[3],c->r[0]); // 80170810
  if (!crb(c,2)) { goto L_8017081C; } // 80170814
  W8(c->r[1]+0x0000000Cu,c->r[22]); // 80170818
L_8017081C:;
  c->r[0]=0u+0x00000001u; // 8017081C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80170820
  if (crb(c,2)) { goto L_8017083C; } // 80170824
  c->r[3]=R8(c->r[25]+0x00000000u); // 80170828
  c->r[0]=R8(c->r[1]+0x0000000Du); // 8017082C
  cmpu(c,0,c->r[3],c->r[0]); // 80170830
  if (!crb(c,2)) { goto L_8017083C; } // 80170834
  W8(c->r[1]+0x0000000Du,c->r[22]); // 80170838
L_8017083C:;
  c->r[0]=0u+0x00000002u; // 8017083C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80170840
  if (crb(c,2)) { goto L_8017085C; } // 80170844
  c->r[3]=R8(c->r[25]+0x00000000u); // 80170848
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 8017084C
  cmpu(c,0,c->r[3],c->r[0]); // 80170850
  if (!crb(c,2)) { goto L_8017085C; } // 80170854
  W8(c->r[1]+0x0000000Eu,c->r[22]); // 80170858
L_8017085C:;
  c->r[0]=0u+0x00000003u; // 8017085C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80170860
  if (crb(c,2)) { goto L_8017087C; } // 80170864
  c->r[3]=R8(c->r[25]+0x00000000u); // 80170868
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 8017086C
  cmpu(c,0,c->r[3],c->r[0]); // 80170870
  if (!crb(c,2)) { goto L_8017087C; } // 80170874
  W8(c->r[1]+0x0000000Fu,c->r[22]); // 80170878
L_8017087C:;
  c->r[0]=c->r[28]+0x00000006u; // 8017087C
  c->r[3]=c->r[23]+0xFFFFCE54u; // 80170880
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80170884
  c->lr=0x8017088Cu; f_8019C920(c); // 80170888
  cmps(c,0,(int32_t)c->r[3],0); // 8017088C
  c->r[27]=c->r[3]|c->r[3]; // 80170890
  if (crb(c,2)) { goto L_801708E4; } // 80170894
  c->lr=0x8017089Cu; f_800376F0(c); // 80170898
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8017089C
  cmps(c,0,(int32_t)c->r[0],100); // 801708A0
  if (!crb(c,2)) { goto L_801708E4; } // 801708A4
  c->r[3]=R32(c->r[24]+0x00000014u); // 801708A8
  c->r[4]=c->r[28]+0x00000025u; // 801708AC
  c->lr=0x801708B4u; f_80038AF4(c); // 801708B0
  cmps(c,0,(int32_t)c->r[3],0); // 801708B4
  if (!crb(c,2)) { goto L_801708E4; } // 801708B8
  c->r[3]=c->r[27]|c->r[27]; // 801708BC
  c->lr=0x801708C4u; f_8004D8EC(c); // 801708C0
  cmpu(c,0,c->r[3],0x00000001u); // 801708C4
  if (!crb(c,2)) { goto L_801708E0; } // 801708C8
  c->r[12]=R32(c->r[27]+0x000000B0u); // 801708CC
  c->r[3]=c->r[27]|c->r[27]; // 801708D0
  c->r[12]=R32(c->r[12]+0x00000034u); // 801708D4
  c->ctr=c->r[12]; // 801708D8
  if (true) { c->lr=0x801708E0u; dispatch(c,c->ctr); } // 801708DC
L_801708E0:;
  W8(c->r[26]+0x00000000u,c->r[21]); // 801708E0
L_801708E4:;
  c->r[28]=c->r[28]+0x00000001u; // 801708E4
  c->r[26]=c->r[26]+0x00000001u; // 801708E8
  cmps(c,0,(int32_t)c->r[28],4); // 801708EC
  c->r[25]=c->r[25]+0x00000001u; // 801708F0
  if (crb(c,0)) { IRQCHK(c); goto L_801707C0; } // 801708F4
  c->r[5]=0u+0x00000003u; // 801708F8
  c->r[0]=0u+0x000000FFu; // 801708FC
L_80170900:;
  c->r[4]=c->r[1]+0x0000000Cu; // 80170900
  c->ctr=c->r[5]; // 80170904
  cmps(c,0,(int32_t)c->r[5],0); // 80170908
  if (!crb(c,1)) { goto L_80170930; } // 8017090C
L_80170910:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 80170910
  cmpu(c,0,c->r[3],0x000000FFu); // 80170914
  if (!crb(c,2)) { goto L_80170928; } // 80170918
  c->r[3]=R8(c->r[4]+0x00000001u); // 8017091C
  W8(c->r[4]+0x00000000u,c->r[3]); // 80170920
  W8(c->r[4]+0x00000001u,c->r[0]); // 80170924
L_80170928:;
  c->r[4]=c->r[4]+0x00000001u; // 80170928
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80170910; } // 8017092C
L_80170930:;
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80170930
  cmps(c,0,(int32_t)c->r[5],1); // 80170934
  if (!crb(c,0)) { IRQCHK(c); goto L_80170900; } // 80170938
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 8017093C
  c->r[0]=c->r[1]+0x00000008u; // 80170940
  c->r[4]=0u+0x00000000u; // 80170944
  cmpu(c,0,c->r[3],0x000000FFu); // 80170948
  if (crb(c,2)) { goto L_80170958; } // 8017094C
  c->r[3]=c->r[0]+c->r[3]; // 80170950
  W8(c->r[3]+0xFFFFFFFAu,c->r[4]); // 80170954
L_80170958:;
  c->r[3]=R8(c->r[1]+0x0000000Du); // 80170958
  cmpu(c,0,c->r[3],0x000000FFu); // 8017095C
  if (crb(c,2)) { goto L_8017096C; } // 80170960
  c->r[3]=c->r[0]+c->r[3]; // 80170964
  W8(c->r[3]+0xFFFFFFFAu,c->r[4]); // 80170968
L_8017096C:;
  c->r[3]=R8(c->r[1]+0x0000000Eu); // 8017096C
  cmpu(c,0,c->r[3],0x000000FFu); // 80170970
  if (crb(c,2)) { goto L_80170980; } // 80170974
  c->r[3]=c->r[0]+c->r[3]; // 80170978
  W8(c->r[3]+0xFFFFFFFAu,c->r[4]); // 8017097C
L_80170980:;
  c->r[3]=R8(c->r[1]+0x0000000Fu); // 80170980
  cmpu(c,0,c->r[3],0x000000FFu); // 80170984
  if (crb(c,2)) { goto L_80170994; } // 80170988
  c->r[3]=c->r[0]+c->r[3]; // 8017098C
  W8(c->r[3]+0xFFFFFFFAu,c->r[4]); // 80170990
L_80170994:;
  c->r[6]=0u+0x803A0000u; // 80170994
  {uint32_t ea=c->r[6]+0x00003064u; c->r[5]=R32(ea); c->r[6]=ea;} // 80170998
  c->r[27]=0u+0x000000FFu; // 8017099C
  c->r[3]=0u+0x00000A30u; // 801709A0
  c->r[4]=R32(c->r[6]+0x00000004u); // 801709A4
  c->r[0]=R32(c->r[6]+0x00000008u); // 801709A8
  W32(c->r[1]+0x00000028u,c->r[5]); // 801709AC
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 801709B0
  W32(c->r[1]+0x00000030u,c->r[0]); // 801709B4
  c->lr=0x801709BCu; f_8024E174(c); // 801709B8
  c->r[26]=c->r[3]|c->r[3]; // 801709BC
  c->r[30]=c->r[1]+0x0000000Cu; // 801709C0
  c->r[24]=c->r[1]+0x00000008u; // 801709C4
  c->r[28]=0u+0x00000000u; // 801709C8
  c->r[31]=0u+0x80550000u; // 801709CC
  c->r[21]=0u+0x805D0000u; // 801709D0
  c->r[22]=0u+0x00010000u; // 801709D4
  c->r[23]=0u+0x00000000u; // 801709D8
L_801709DC:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801709DC
  cmpu(c,0,c->r[0],0x000000FFu); // 801709E0
  if (!crb(c,2)) { goto L_80170AD0; } // 801709E4
  c->r[29]=c->r[1]+0x00000008u; // 801709E8
  c->r[25]=0u+0x00000000u; // 801709EC
L_801709F0:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801709F0
  cmps(c,0,(int32_t)c->r[0],0); // 801709F4
  if (crb(c,2)) { goto L_80170AA8; } // 801709F8
  c->r[0]=c->r[25]+0x00000006u; // 801709FC
  c->r[3]=c->r[31]+0xFFFFCE54u; // 80170A00
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80170A04
  c->lr=0x80170A0Cu; f_8019C920(c); // 80170A08
  cmps(c,0,(int32_t)c->r[3],0); // 80170A0C
  if (crb(c,2)) { goto L_80170AA8; } // 80170A10
  c->r[5]=R32(c->r[1]+0x00000028u); // 80170A14
  c->r[0]=c->r[22]+0xFFFFFFFFu; // 80170A18
  c->r[8]=R32(c->r[1]+0x0000002Cu); // 80170A1C
  c->r[9]=rotl(c->r[0],0)&0x0000FFFFu; // 80170A20
  c->r[10]=R32(c->r[1]+0x00000030u); // 80170A24
  c->r[4]=c->r[1]+0x0000001Cu; // 80170A28
  W32(c->r[1]+0x00000010u,c->r[5]); // 80170A2C
  c->r[6]=c->r[1]+0x00000010u; // 80170A30
  c->r[5]=0u+0x00000000u; // 80170A34
  c->r[7]=0u+0x00040000u; // 80170A38
  W32(c->r[1]+0x00000014u,c->r[8]); // 80170A3C
  c->r[8]=0u+0x00000000u; // 80170A40
  W32(c->r[1]+0x00000018u,c->r[10]); // 80170A44
  c->r[10]=R32(c->r[3]+0x0000002Cu); // 80170A48
  c->r[0]=R32(c->r[3]+0x00000030u); // 80170A4C
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 80170A50
  W32(c->r[1]+0x00000020u,c->r[0]); // 80170A54
  c->r[0]=R32(c->r[3]+0x00000034u); // 80170A58
  c->r[3]=c->r[21]+0x00006CF8u; // 80170A5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80170A60
  c->lr=0x80170A68u; f_80223A98(c); // 80170A64
  cmps(c,0,(int32_t)c->r[3],0); // 80170A68
  if (!crb(c,2)) { goto L_80170AA8; } // 80170A6C
  c->r[4]=c->r[26]|c->r[26]; // 80170A70
  c->r[3]=c->r[21]+0x00006CF8u; // 80170A74
  c->r[5]=0u+0x00000000u; // 80170A78
  c->lr=0x80170A80u; f_802249D0(c); // 80170A7C
  cmps(c,0,(int32_t)c->r[3],0); // 80170A80
  if (!crb(c,1)) { goto L_80170AA8; } // 80170A84
  c->r[3]=c->r[21]+0x00006CF8u; // 80170A88
  c->lr=0x80170A90u; f_80225140(c); // 80170A8C
  cmps(c,0,(int32_t)c->r[27],255); // 80170A90
  if (crb(c,2)) { goto L_80170AA0; } // 80170A94
  fcmp(c,0,c->f[1],c->f[31]); // 80170A98
  if (!crb(c,0)) { goto L_80170AA8; } // 80170A9C
L_80170AA0:;
  c->r[27]=c->r[25]|c->r[25]; // 80170AA0
  c->f[31]=c->f[1]; // 80170AA4
L_80170AA8:;
  c->r[25]=c->r[25]+0x00000001u; // 80170AA8
  c->r[29]=c->r[29]+0x00000001u; // 80170AAC
  cmps(c,0,(int32_t)c->r[25],4); // 80170AB0
  if (crb(c,0)) { IRQCHK(c); goto L_801709F0; } // 80170AB4
  cmps(c,0,(int32_t)c->r[27],255); // 80170AB8
  if (crb(c,2)) { goto L_80170AD0; } // 80170ABC
  c->r[0]=c->r[27]+0x00000006u; // 80170AC0
  W8(c->r[24]+c->r[27],c->r[23]); // 80170AC4
  c->r[27]=0u+0x000000FFu; // 80170AC8
  W8(c->r[30]+0x00000000u,c->r[0]); // 80170ACC
L_80170AD0:;
  c->r[28]=c->r[28]+0x00000001u; // 80170AD0
  c->r[30]=c->r[30]+0x00000001u; // 80170AD4
  cmps(c,0,(int32_t)c->r[28],4); // 80170AD8
  if (crb(c,0)) { IRQCHK(c); goto L_801709DC; } // 80170ADC
  c->r[3]=c->r[26]|c->r[26]; // 80170AE0
  c->lr=0x80170AE8u; f_8024E190(c); // 80170AE4
  c->r[25]=0u+0x80620000u; // 80170AE8
  c->r[5]=R8(c->r[1]+0x0000000Cu); // 80170AEC
  c->r[25]=c->r[25]+0x00007688u; // 80170AF0
  c->r[4]=0u+0x0000000Au; // 80170AF4
  c->r[3]=R32(c->r[25]+0x00000014u); // 80170AF8
  c->lr=0x80170B00u; f_80038998(c); // 80170AFC
  c->r[3]=R32(c->r[25]+0x00000014u); // 80170B00
  c->r[4]=0u+0x0000000Bu; // 80170B04
  c->r[5]=R8(c->r[1]+0x0000000Du); // 80170B08
  c->lr=0x80170B10u; f_80038998(c); // 80170B0C
  c->r[3]=R32(c->r[25]+0x00000014u); // 80170B10
  c->r[4]=0u+0x0000000Cu; // 80170B14
  c->r[5]=R8(c->r[1]+0x0000000Eu); // 80170B18
  c->lr=0x80170B20u; f_80038998(c); // 80170B1C
  c->r[3]=R32(c->r[25]+0x00000014u); // 80170B20
  c->r[4]=0u+0x0000000Du; // 80170B24
  c->r[5]=R8(c->r[1]+0x0000000Fu); // 80170B28
  c->lr=0x80170B30u; f_80038998(c); // 80170B2C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[31]=RF64(ea);} // 80170B30
  c->r[3]=0u+0x00000001u; // 80170B34
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=21;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80170B38
  c->r[0]=R32(c->r[1]+0x00000074u); // 80170B3C
  c->lr=c->r[0]; // 80170B40
  c->r[1]=c->r[1]+0x00000070u; // 80170B44
  return; // 80170B48
}

// fn_80170B4C
void f_80170B4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170B4C
  c->r[0]=c->lr; // 80170B50
  c->r[4]=0u+0x00000011u; // 80170B54
  W32(c->r[1]+0x00000024u,c->r[0]); // 80170B58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80170B5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80170B60
  c->r[30]=0u+0x80620000u; // 80170B64
  c->r[30]=c->r[30]+0x00007688u; // 80170B68
  W32(c->r[1]+0x00000014u,c->r[29]); // 80170B6C
  c->r[3]=R32(c->r[30]+0x00000014u); // 80170B70
  c->lr=0x80170B78u; f_8003560C(c); // 80170B74
  c->r[31]=0u+0x80550000u; // 80170B78
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 80170B7C
  c->r[3]=c->r[31]+0xFFFFCE54u; // 80170B80
  c->lr=0x80170B88u; f_8019C920(c); // 80170B84
  c->r[29]=c->r[3]|c->r[3]; // 80170B88
  c->r[3]=R32(c->r[30]+0x00000014u); // 80170B8C
  c->r[4]=0u+0x0000000Eu; // 80170B90
  c->lr=0x80170B98u; f_8003560C(c); // 80170B94
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 80170B98
  c->r[3]=c->r[31]+0xFFFFCE54u; // 80170B9C
  c->lr=0x80170BA4u; f_8019C920(c); // 80170BA0
  c->r[12]=R32(c->r[29]+0x000000B0u); // 80170BA4
  c->r[30]=c->r[3]|c->r[3]; // 80170BA8
  c->r[3]=c->r[29]|c->r[29]; // 80170BAC
  c->r[5]=0u+0x00000000u; // 80170BB0
  c->r[12]=R32(c->r[12]+0x00000040u); // 80170BB4
  c->r[4]=c->r[30]|c->r[30]; // 80170BB8
  c->r[6]=0u+0x00000000u; // 80170BBC
  c->r[7]=0u+0x00000000u; // 80170BC0
  c->ctr=c->r[12]; // 80170BC4
  if (true) { c->lr=0x80170BCCu; dispatch(c,c->ctr); } // 80170BC8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 80170BCC
  c->r[3]=c->r[30]|c->r[30]; // 80170BD0
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170BD4
  c->r[4]=0u+0x00000000u; // 80170BD8
  c->r[12]=R32(c->r[12]+0x00000048u); // 80170BDC
  c->r[5]=0u+0x00000001u; // 80170BE0
  c->f[2]=c->f[1]; // 80170BE4
  c->ctr=c->r[12]; // 80170BE8
  if (true) { c->lr=0x80170BF0u; dispatch(c,c->ctr); } // 80170BEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80170BF0
  c->r[3]=0u+0x00000001u; // 80170BF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80170BF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80170BFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80170C00
  c->lr=c->r[0]; // 80170C04
  c->r[1]=c->r[1]+0x00000020u; // 80170C08
  return; // 80170C0C
}

// fn_80170C10
void f_80170C10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170C10
  c->r[0]=c->lr; // 80170C14
  W32(c->r[1]+0x00000024u,c->r[0]); // 80170C18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80170C1C
  c->r[31]=0u+0x80550000u; // 80170C20
  W32(c->r[1]+0x00000018u,c->r[30]); // 80170C24
  c->r[30]=0u+0x00000006u; // 80170C28
  W32(c->r[1]+0x00000014u,c->r[29]); // 80170C2C
  c->r[29]=c->r[4]|c->r[4]; // 80170C30
L_80170C34:;
  c->r[3]=c->r[31]+0xFFFFCE54u; // 80170C34
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 80170C38
  c->lr=0x80170C40u; f_8019C920(c); // 80170C3C
  cmpu(c,0,c->r[3],c->r[29]); // 80170C40
  if (!crb(c,2)) { goto L_80170C64; } // 80170C44
  c->r[3]=0u+0x80620000u; // 80170C48
  c->r[5]=c->r[30]|c->r[30]; // 80170C4C
  c->r[3]=c->r[3]+0x00007688u; // 80170C50
  c->r[4]=0u+0x00000017u; // 80170C54
  c->r[3]=R32(c->r[3]+0x00000014u); // 80170C58
  c->lr=0x80170C60u; f_80038998(c); // 80170C5C
  goto L_80170C70; // 80170C60
L_80170C64:;
  c->r[30]=c->r[30]+0x00000001u; // 80170C64
  cmpu(c,0,c->r[30],0x00000009u); // 80170C68
  if (!crb(c,1)) { IRQCHK(c); goto L_80170C34; } // 80170C6C
L_80170C70:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80170C70
  c->r[3]=0u+0x00000001u; // 80170C74
  c->r[30]=R32(c->r[1]+0x00000018u); // 80170C78
  c->r[29]=R32(c->r[1]+0x00000014u); // 80170C7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80170C80
  c->lr=c->r[0]; // 80170C84
  c->r[1]=c->r[1]+0x00000020u; // 80170C88
  return; // 80170C8C
}

// fn_80170C90
void f_80170C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170C90
  c->r[0]=c->lr; // 80170C94
  W32(c->r[1]+0x00000034u,c->r[0]); // 80170C98
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80170C9C
  c->r[29]=0u+0x80620000u; // 80170CA0
  c->r[28]=c->r[1]+0x00000008u; // 80170CA4
  c->r[27]=0u+0x00000000u; // 80170CA8
  c->r[29]=c->r[29]+0x00007688u; // 80170CAC
  c->r[26]=0u+0x00000000u; // 80170CB0
  c->r[31]=0u+0x00000001u; // 80170CB4
  c->r[30]=0u+0x00000000u; // 80170CB8
L_80170CBC:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80170CBC
  c->r[4]=c->r[26]+0x00000009u; // 80170CC0
  c->lr=0x80170CC8u; f_80038AF4(c); // 80170CC4
  cmps(c,0,(int32_t)c->r[3],0); // 80170CC8
  if (!crb(c,2)) { goto L_80170CDC; } // 80170CCC
  W8(c->r[28]+0x00000000u,c->r[30]); // 80170CD0
  c->r[27]=c->r[27]+0x00000001u; // 80170CD4
  goto L_80170CE0; // 80170CD8
L_80170CDC:;
  W8(c->r[28]+0x00000000u,c->r[31]); // 80170CDC
L_80170CE0:;
  c->r[26]=c->r[26]+0x00000001u; // 80170CE0
  c->r[28]=c->r[28]+0x00000001u; // 80170CE4
  cmps(c,0,(int32_t)c->r[26],8); // 80170CE8
  if (crb(c,0)) { IRQCHK(c); goto L_80170CBC; } // 80170CEC
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[0]); // 80170CF0
  if (crb(c,2)) { goto L_80170D54; } // 80170CF4
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80170CF8
  c->lr=0x80170D00u; f_80211724(c); // 80170CFC
  c->r[26]=rotl(c->r[3],0)&0x00000007u; // 80170D00
  c->r[3]=c->r[1]+0x00000008u; // 80170D04
L_80170D08:;
  c->r[0]=R8(c->r[3]+c->r[26]); // 80170D08
  cmps(c,0,(int32_t)c->r[0],0); // 80170D0C
  if (crb(c,2)) { goto L_80170D28; } // 80170D10
  c->r[26]=c->r[26]+0x00000001u; // 80170D14
  cmps(c,0,(int32_t)c->r[26],8); // 80170D18
  if (!crb(c,2)) { IRQCHK(c); goto L_80170D08; } // 80170D1C
  c->r[26]=0u+0x00000000u; // 80170D20
  IRQCHK(c); goto L_80170D08; // 80170D24
L_80170D28:;
  c->r[3]=0u+0x80620000u; // 80170D28
  c->r[4]=c->r[26]+0x00000009u; // 80170D2C
  c->r[3]=c->r[3]+0x00007688u; // 80170D30
  c->r[3]=R32(c->r[3]+0x00000014u); // 80170D34
  c->lr=0x80170D3Cu; f_80038A08(c); // 80170D38
  c->r[0]=c->r[26]+0x00000033u; // 80170D3C
  c->r[3]=0u+0x80550000u; // 80170D40
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80170D44
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80170D48
  c->lr=0x80170D50u; f_8019C920(c); // 80170D4C
  c->lr=0x80170D54u; f_80044404(c); // 80170D50
L_80170D54:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80170D54
  c->r[3]=0u+0x00000001u; // 80170D58
  c->r[0]=R32(c->r[1]+0x00000034u); // 80170D5C
  c->lr=c->r[0]; // 80170D60
  c->r[1]=c->r[1]+0x00000030u; // 80170D64
  return; // 80170D68
}

// fn_80170D6C
void f_80170D6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170D6C
  c->r[0]=c->lr; // 80170D70
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80170D74
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80170D78
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 80170D7C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[30]);} // 80170D80
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,30,ea,0,0);} // 80170D84
  c->r[4]=0u+0x0000000Fu; // 80170D88
  W32(c->r[1]+0x000000BCu,c->r[31]); // 80170D8C
  W32(c->r[1]+0x000000B8u,c->r[30]); // 80170D90
  c->r[30]=0u+0x80550000u; // 80170D94
  c->r[3]=c->r[30]+0xFFFFCE54u; // 80170D98
  W32(c->r[1]+0x000000B4u,c->r[29]); // 80170D9C
  c->r[29]=c->r[5]|c->r[5]; // 80170DA0
  c->lr=0x80170DA8u; f_8019C920(c); // 80170DA4
  cmps(c,0,(int32_t)c->r[3],0); // 80170DA8
  c->r[31]=c->r[3]|c->r[3]; // 80170DAC
  if (crb(c,2)) { goto L_801713E4; } // 80170DB0
  c->r[0]=R8(c->r[29]+0x00000003u); // 80170DB4
  cmps(c,0,(int32_t)c->r[0],0); // 80170DB8
  if (!crb(c,2)) { goto L_80171330; } // 80170DBC
  c->r[3]=0u+0x80620000u; // 80170DC0
  c->r[4]=0u+0x00000018u; // 80170DC4
  c->r[3]=c->r[3]+0x00007688u; // 80170DC8
  c->r[3]=R32(c->r[3]+0x00000014u); // 80170DCC
  c->lr=0x80170DD4u; f_8003560C(c); // 80170DD0
  cmpu(c,0,c->r[3],0x0000000Cu); // 80170DD4
  if (!crb(c,0)) { goto L_8017101C; } // 80170DD8
  c->r[3]=c->r[1]+0x00000014u; // 80170DDC
  c->r[4]=c->r[31]+0x0000002Cu; // 80170DE0
  c->lr=0x80170DE8u; f_800361A0(c); // 80170DE4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170DE8
  c->r[30]=0u+0x80550000u; // 80170DEC
  {uint32_t ea=c->r[2]+0xFFFFCABCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170DF0
  c->r[30]=c->r[30]+0x00003D60u; // 80170DF4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80170DF8
  c->r[3]=c->r[30]+0x00000010u; // 80170DFC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[1]); // 80170E00
  {uint32_t ea=c->r[2]+0xFFFFCAC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170E04
  {uint32_t ea=c->r[2]+0xFFFFCAC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170E08
  c->r[6]=c->r[1]+0x00000014u; // 80170E0C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80170E10
  c->r[7]=c->r[1]+0x00000050u; // 80170E14
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 80170E18
  c->r[4]=0u+0x00000112u; // 80170E1C
  c->r[5]=0u+0x00000000u; // 80170E20
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80170E24
  c->lr=0x80170E2Cu; f_80226910(c); // 80170E28
  c->r[3]=c->r[30]+0x00000010u; // 80170E2C
  c->r[4]=c->r[1]+0x00000050u; // 80170E30
  c->lr=0x80170E38u; f_80226D68(c); // 80170E34
  c->r[3]=c->r[1]+0x00000014u; // 80170E38
  c->r[4]=c->r[31]+0x0000002Cu; // 80170E3C
  c->lr=0x80170E44u; f_800361A0(c); // 80170E40
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170E44
  c->r[3]=c->r[30]+0x00000010u; // 80170E48
  {uint32_t ea=c->r[2]+0xFFFFCAC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170E4C
  c->r[6]=c->r[1]+0x00000014u; // 80170E50
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80170E54
  c->r[7]=c->r[1]+0x00000050u; // 80170E58
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 80170E5C
  {uint32_t ea=c->r[2]+0xFFFFCACCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80170E60
  {uint32_t ea=c->r[2]+0xFFFFCAD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170E64
  c->r[4]=0u+0x00000112u; // 80170E68
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80170E6C
  c->r[5]=0u+0x00000000u; // 80170E70
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 80170E74
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80170E78
  c->lr=0x80170E80u; f_80226910(c); // 80170E7C
  c->r[3]=c->r[30]+0x00000010u; // 80170E80
  c->r[4]=c->r[1]+0x00000050u; // 80170E84
  c->lr=0x80170E8Cu; f_80226D68(c); // 80170E88
  c->r[3]=c->r[1]+0x00000014u; // 80170E8C
  c->r[4]=c->r[31]+0x0000002Cu; // 80170E90
  c->lr=0x80170E98u; f_800361A0(c); // 80170E94
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170E98
  c->r[3]=c->r[30]+0x00000010u; // 80170E9C
  {uint32_t ea=c->r[2]+0xFFFFCAD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170EA0
  c->r[6]=c->r[1]+0x00000014u; // 80170EA4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170EA8
  c->r[7]=c->r[1]+0x00000050u; // 80170EAC
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 80170EB0
  {uint32_t ea=c->r[2]+0xFFFFCAC4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170EB4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170EB8
  c->r[4]=0u+0x00000112u; // 80170EBC
  {uint32_t ea=c->r[2]+0xFFFFCAD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170EC0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80170EC4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80170EC8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 80170ECC
  {uint32_t ea=c->r[2]+0xFFFFCADCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170ED0
  c->r[5]=0u+0x00000000u; // 80170ED4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 80170ED8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80170EDC
  c->lr=0x80170EE4u; f_80226910(c); // 80170EE0
  c->r[3]=c->r[30]+0x00000010u; // 80170EE4
  c->r[4]=c->r[1]+0x00000050u; // 80170EE8
  c->lr=0x80170EF0u; f_80226D68(c); // 80170EEC
  c->r[3]=c->r[1]+0x00000014u; // 80170EF0
  c->r[4]=c->r[31]+0x0000002Cu; // 80170EF4
  c->lr=0x80170EFCu; f_800361A0(c); // 80170EF8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170EFC
  c->r[3]=c->r[30]+0x00000010u; // 80170F00
  {uint32_t ea=c->r[2]+0xFFFFCAD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170F04
  c->r[6]=c->r[1]+0x00000014u; // 80170F08
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170F0C
  c->r[7]=c->r[1]+0x00000050u; // 80170F10
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80170F14
  {uint32_t ea=c->r[2]+0xFFFFCAC4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170F18
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170F1C
  c->r[4]=0u+0x00000112u; // 80170F20
  {uint32_t ea=c->r[2]+0xFFFFCAD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170F24
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80170F28
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80170F2C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 80170F30
  {uint32_t ea=c->r[2]+0xFFFFCADCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170F34
  c->r[5]=0u+0x00000000u; // 80170F38
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 80170F3C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80170F40
  c->lr=0x80170F48u; f_80226910(c); // 80170F44
  c->r[3]=c->r[30]+0x00000010u; // 80170F48
  c->r[4]=c->r[1]+0x00000050u; // 80170F4C
  c->lr=0x80170F54u; f_80226D68(c); // 80170F50
  c->r[3]=c->r[1]+0x00000014u; // 80170F54
  c->r[4]=c->r[31]+0x0000002Cu; // 80170F58
  c->lr=0x80170F60u; f_800361A0(c); // 80170F5C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170F60
  c->r[3]=c->r[30]+0x00000010u; // 80170F64
  {uint32_t ea=c->r[2]+0xFFFFCAE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170F68
  c->r[6]=c->r[1]+0x00000014u; // 80170F6C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170F70
  c->r[7]=c->r[1]+0x00000050u; // 80170F74
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 80170F78
  {uint32_t ea=c->r[2]+0xFFFFCAE4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170F7C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170F80
  c->r[4]=0u+0x00000112u; // 80170F84
  {uint32_t ea=c->r[2]+0xFFFFCAD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170F88
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80170F8C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80170F90
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 80170F94
  {uint32_t ea=c->r[2]+0xFFFFCADCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170F98
  c->r[5]=0u+0x00000000u; // 80170F9C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 80170FA0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80170FA4
  c->lr=0x80170FACu; f_80226910(c); // 80170FA8
  c->r[3]=c->r[30]+0x00000010u; // 80170FAC
  c->r[4]=c->r[1]+0x00000050u; // 80170FB0
  c->lr=0x80170FB8u; f_80226D68(c); // 80170FB4
  c->r[3]=c->r[1]+0x00000014u; // 80170FB8
  c->r[4]=c->r[31]+0x0000002Cu; // 80170FBC
  c->lr=0x80170FC4u; f_800361A0(c); // 80170FC0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170FC4
  c->r[3]=c->r[30]+0x00000010u; // 80170FC8
  {uint32_t ea=c->r[2]+0xFFFFCAE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170FCC
  c->r[6]=c->r[1]+0x00000014u; // 80170FD0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170FD4
  c->r[7]=c->r[1]+0x00000050u; // 80170FD8
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80170FDC
  {uint32_t ea=c->r[2]+0xFFFFCAE4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170FE0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170FE4
  c->r[4]=0u+0x00000112u; // 80170FE8
  {uint32_t ea=c->r[2]+0xFFFFCAD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170FEC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80170FF0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80170FF4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 80170FF8
  {uint32_t ea=c->r[2]+0xFFFFCADCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170FFC
  c->r[5]=0u+0x00000000u; // 80171000
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 80171004
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80171008
  c->lr=0x80171010u; f_80226910(c); // 8017100C
  c->r[3]=c->r[30]+0x00000010u; // 80171010
  c->r[4]=c->r[1]+0x00000050u; // 80171014
  c->lr=0x8017101Cu; f_80226D68(c); // 80171018
L_8017101C:;
  c->r[30]=0u+0x80620000u; // 8017101C
  c->r[4]=0u+0x00000018u; // 80171020
  c->r[30]=c->r[30]+0x00007688u; // 80171024
  c->r[3]=R32(c->r[30]+0x00000014u); // 80171028
  c->lr=0x80171030u; f_8003560C(c); // 8017102C
  cmpu(c,0,c->r[3],0x0000000Du); // 80171030
  if (!crb(c,2)) { goto L_801710B0; } // 80171034
  c->r[3]=0u+0x80550000u; // 80171038
  c->r[4]=0u+0x00000010u; // 8017103C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80171040
  c->lr=0x80171048u; f_8019C920(c); // 80171044
  cmps(c,0,(int32_t)c->r[3],0); // 80171048
  c->r[4]=c->r[3]|c->r[3]; // 8017104C
  if (crb(c,2)) { goto L_801713E4; } // 80171050
  c->r[3]=c->r[1]+0x00000014u; // 80171054
  c->r[4]=c->r[4]+0x0000002Cu; // 80171058
  c->lr=0x80171060u; f_800361A0(c); // 8017105C
  {uint32_t ea=c->r[2]+0xFFFFCADCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80171060
  c->r[30]=0u+0x80550000u; // 80171064
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171068
  c->r[30]=c->r[30]+0x00003D60u; // 8017106C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80171070
  c->r[3]=c->r[30]+0x00000010u; // 80171074
  {uint32_t ea=c->r[2]+0xFFFFCAE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171078
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 8017107C
  c->r[6]=c->r[1]+0x00000014u; // 80171080
  c->r[7]=c->r[1]+0x00000050u; // 80171084
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80171088
  c->r[4]=0u+0x00000118u; // 8017108C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 80171090
  c->r[5]=0u+0x00000000u; // 80171094
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80171098
  c->lr=0x801710A0u; f_80226910(c); // 8017109C
  c->r[3]=c->r[30]+0x00000010u; // 801710A0
  c->r[4]=c->r[1]+0x00000050u; // 801710A4
  c->lr=0x801710ACu; f_80226D68(c); // 801710A8
  goto L_801713E4; // 801710AC
L_801710B0:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801710B0
  c->r[4]=0u+0x0000001Fu; // 801710B4
  c->lr=0x801710BCu; f_80038AF4(c); // 801710B8
  cmps(c,0,(int32_t)c->r[3],0); // 801710BC
  if (!crb(c,2)) { goto L_801711EC; } // 801710C0
  c->r[3]=c->r[1]+0x00000014u; // 801710C4
  c->r[4]=c->r[31]+0x0000002Cu; // 801710C8
  c->lr=0x801710D0u; f_800361A0(c); // 801710CC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 801710D0
  c->r[30]=0u+0x80550000u; // 801710D4
  {uint32_t ea=c->r[2]+0xFFFFCAECu; c->f[1]=c->ps1[1]=RF32(ea);} // 801710D8
  c->r[30]=c->r[30]+0x00003D60u; // 801710DC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801710E0
  c->r[3]=c->r[30]+0x00000010u; // 801710E4
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 801710E8
  {uint32_t ea=c->r[2]+0xFFFFCAD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801710EC
  {uint32_t ea=c->r[2]+0xFFFFCAF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801710F0
  c->r[6]=c->r[1]+0x00000014u; // 801710F4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801710F8
  c->r[7]=c->r[1]+0x00000050u; // 801710FC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 80171100
  c->r[4]=0u+0x00000111u; // 80171104
  c->r[5]=0u+0x00000000u; // 80171108
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8017110C
  c->lr=0x80171114u; f_80226910(c); // 80171110
  c->r[3]=c->r[30]+0x00000010u; // 80171114
  c->r[4]=c->r[1]+0x00000050u; // 80171118
  c->lr=0x80171120u; f_80226D68(c); // 8017111C
  c->r[3]=c->r[1]+0x00000014u; // 80171120
  c->r[4]=c->r[31]+0x0000002Cu; // 80171124
  c->lr=0x8017112Cu; f_800361A0(c); // 80171128
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017112C
  c->r[3]=c->r[30]+0x00000010u; // 80171130
  {uint32_t ea=c->r[2]+0xFFFFCABCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80171134
  c->r[6]=c->r[1]+0x00000014u; // 80171138
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017113C
  c->r[7]=c->r[1]+0x00000050u; // 80171140
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80171144
  {uint32_t ea=c->r[2]+0xFFFFCAF4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80171148
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017114C
  c->r[4]=0u+0x00000111u; // 80171150
  {uint32_t ea=c->r[2]+0xFFFFCAD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171154
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80171158
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8017115C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 80171160
  {uint32_t ea=c->r[2]+0xFFFFCAF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171164
  c->r[5]=0u+0x00000000u; // 80171168
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 8017116C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80171170
  c->lr=0x80171178u; f_80226910(c); // 80171174
  c->r[3]=c->r[30]+0x00000010u; // 80171178
  c->r[4]=c->r[1]+0x00000050u; // 8017117C
  c->lr=0x80171184u; f_80226D68(c); // 80171180
  c->r[3]=c->r[1]+0x00000014u; // 80171184
  c->r[4]=c->r[31]+0x0000002Cu; // 80171188
  c->lr=0x80171190u; f_800361A0(c); // 8017118C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171190
  c->r[3]=c->r[30]+0x00000010u; // 80171194
  {uint32_t ea=c->r[2]+0xFFFFCABCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80171198
  c->r[6]=c->r[1]+0x00000014u; // 8017119C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 801711A0
  c->r[7]=c->r[1]+0x00000050u; // 801711A4
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 801711A8
  {uint32_t ea=c->r[2]+0xFFFFCAF4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801711AC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801711B0
  c->r[4]=0u+0x00000111u; // 801711B4
  {uint32_t ea=c->r[2]+0xFFFFCAD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801711B8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801711BC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801711C0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 801711C4
  {uint32_t ea=c->r[2]+0xFFFFCAF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801711C8
  c->r[5]=0u+0x00000000u; // 801711CC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 801711D0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801711D4
  c->lr=0x801711DCu; f_80226910(c); // 801711D8
  c->r[3]=c->r[30]+0x00000010u; // 801711DC
  c->r[4]=c->r[1]+0x00000050u; // 801711E0
  c->lr=0x801711E8u; f_80226D68(c); // 801711E4
  goto L_801713E4; // 801711E8
L_801711EC:;
  c->r[3]=0u+0x80550000u; // 801711EC
  c->r[4]=0u+0x00000010u; // 801711F0
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801711F4
  c->lr=0x801711FCu; f_8019C920(c); // 801711F8
  cmps(c,0,(int32_t)c->r[3],0); // 801711FC
  c->r[30]=c->r[3]|c->r[3]; // 80171200
  if (crb(c,2)) { goto L_801713E4; } // 80171204
  c->r[3]=c->r[1]+0x00000014u; // 80171208
  c->r[4]=c->r[30]+0x0000002Cu; // 8017120C
  c->lr=0x80171214u; f_800361A0(c); // 80171210
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171214
  c->r[31]=0u+0x80550000u; // 80171218
  {uint32_t ea=c->r[2]+0xFFFFCAF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017121C
  c->r[31]=c->r[31]+0x00003D60u; // 80171220
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80171224
  c->r[3]=c->r[31]+0x00000010u; // 80171228
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 8017122C
  {uint32_t ea=c->r[2]+0xFFFFCAD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171230
  {uint32_t ea=c->r[2]+0xFFFFCAF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171234
  c->r[6]=c->r[1]+0x00000014u; // 80171238
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8017123C
  c->r[7]=c->r[1]+0x00000050u; // 80171240
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 80171244
  c->r[4]=0u+0x00000111u; // 80171248
  c->r[5]=0u+0x00000000u; // 8017124C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80171250
  c->lr=0x80171258u; f_80226910(c); // 80171254
  c->r[3]=c->r[31]+0x00000010u; // 80171258
  c->r[4]=c->r[1]+0x00000050u; // 8017125C
  c->lr=0x80171264u; f_80226D68(c); // 80171260
  c->r[3]=c->r[1]+0x00000014u; // 80171264
  c->r[4]=c->r[30]+0x0000002Cu; // 80171268
  c->lr=0x80171270u; f_800361A0(c); // 8017126C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171270
  c->r[3]=c->r[31]+0x00000010u; // 80171274
  {uint32_t ea=c->r[2]+0xFFFFCABCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80171278
  c->r[6]=c->r[1]+0x00000014u; // 8017127C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171280
  c->r[7]=c->r[1]+0x00000050u; // 80171284
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80171288
  {uint32_t ea=c->r[2]+0xFFFFCAFCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017128C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80171290
  c->r[4]=0u+0x00000111u; // 80171294
  {uint32_t ea=c->r[2]+0xFFFFCAD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171298
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8017129C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801712A0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 801712A4
  {uint32_t ea=c->r[2]+0xFFFFCB00u; c->f[1]=c->ps1[1]=RF32(ea);} // 801712A8
  c->r[5]=0u+0x00000000u; // 801712AC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 801712B0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801712B4
  c->lr=0x801712BCu; f_80226910(c); // 801712B8
  c->r[3]=c->r[31]+0x00000010u; // 801712BC
  c->r[4]=c->r[1]+0x00000050u; // 801712C0
  c->lr=0x801712C8u; f_80226D68(c); // 801712C4
  c->r[3]=c->r[1]+0x00000014u; // 801712C8
  c->r[4]=c->r[30]+0x0000002Cu; // 801712CC
  c->lr=0x801712D4u; f_800361A0(c); // 801712D0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801712D4
  c->r[3]=c->r[31]+0x00000010u; // 801712D8
  {uint32_t ea=c->r[2]+0xFFFFCABCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801712DC
  c->r[6]=c->r[1]+0x00000014u; // 801712E0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 801712E4
  c->r[7]=c->r[1]+0x00000050u; // 801712E8
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 801712EC
  {uint32_t ea=c->r[2]+0xFFFFCAFCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801712F0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801712F4
  c->r[4]=0u+0x00000111u; // 801712F8
  {uint32_t ea=c->r[2]+0xFFFFCAD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801712FC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80171300
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80171304
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 80171308
  {uint32_t ea=c->r[2]+0xFFFFCB00u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017130C
  c->r[5]=0u+0x00000000u; // 80171310
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 80171314
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80171318
  c->lr=0x80171320u; f_80226910(c); // 8017131C
  c->r[3]=c->r[31]+0x00000010u; // 80171320
  c->r[4]=c->r[1]+0x00000050u; // 80171324
  c->lr=0x8017132Cu; f_80226D68(c); // 80171328
  goto L_801713E4; // 8017132C
L_80171330:;
  c->r[3]=c->r[30]+0xFFFFCE54u; // 80171330
  c->r[4]=0u+0x0000000Fu; // 80171334
  c->lr=0x8017133Cu; f_8019C920(c); // 80171338
  c->r[4]=0u+0x00000000u; // 8017133C
  c->lr=0x80171344u; f_80039840(c); // 80171340
  c->r[4]=0u+0x803A0000u; // 80171344
  c->r[5]=c->r[1]+0x00000020u; // 80171348
  c->r[4]=c->r[4]+0x0000307Cu; // 8017134C
  c->r[6]=0u+0x00000001u; // 80171350
  c->lr=0x80171358u; f_80257018(c); // 80171354
  c->r[30]=0u+0x804B0000u; // 80171358
  c->r[31]=0u+0x80550000u; // 8017135C
  {uint32_t ea=c->r[2]+0xFFFFCB04u; c->f[30]=c->ps1[30]=RF32(ea);} // 80171360
  c->r[30]=c->r[30]+0x00006688u; // 80171364
  {uint32_t ea=c->r[2]+0xFFFFCB08u; c->f[31]=c->ps1[31]=RF32(ea);} // 80171368
  c->r[31]=c->r[31]+0x00003D60u; // 8017136C
  c->r[29]=0u+0x00000000u; // 80171370
L_80171374:;
  c->r[4]=c->r[30]|c->r[30]; // 80171374
  c->r[3]=c->r[1]+0x00000008u; // 80171378
  c->lr=0x80171380u; f_800361A0(c); // 8017137C
  c->r[4]=c->r[1]+0x00000008u; // 80171380
  c->r[3]=c->r[1]+0x00000020u; // 80171384
  c->r[5]=c->r[4]|c->r[4]; // 80171388
  c->lr=0x80171390u; f_80296750(c); // 8017138C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80171390
  c->r[0]=c->r[29]+0x00000114u; // 80171394
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171398
  c->r[3]=c->r[31]+0x00000010u; // 8017139C
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[30]); // 801713A0
  {uint32_t ea=c->r[2]+0xFFFFCB0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801713A4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 801713A8
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801713AC
  c->r[6]=c->r[1]+0x00000008u; // 801713B0
  c->r[7]=c->r[1]+0x00000050u; // 801713B4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801713B8
  c->r[5]=0u+0x00000000u; // 801713BC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801713C0
  c->lr=0x801713C8u; f_80226910(c); // 801713C4
  c->r[3]=c->r[31]+0x00000010u; // 801713C8
  c->r[4]=c->r[1]+0x00000050u; // 801713CC
  c->lr=0x801713D4u; f_80226D68(c); // 801713D0
  c->r[29]=c->r[29]+0x00000001u; // 801713D4
  c->r[30]=c->r[30]+0x0000000Cu; // 801713D8
  cmps(c,0,(int32_t)c->r[29],4); // 801713DC
  if (crb(c,0)) { IRQCHK(c); goto L_80171374; } // 801713E0
L_801713E4:;
  c->r[3]=0u+0x00000001u; // 801713E4
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 801713E8
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 801713EC
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,30,ea,0,0);} // 801713F0
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[30]=RF64(ea);} // 801713F4
  c->r[31]=R32(c->r[1]+0x000000BCu); // 801713F8
  c->r[30]=R32(c->r[1]+0x000000B8u); // 801713FC
  c->r[29]=R32(c->r[1]+0x000000B4u); // 80171400
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80171404
  c->lr=c->r[0]; // 80171408
  c->r[1]=c->r[1]+0x000000E0u; // 8017140C
  return; // 80171410
}

// fn_80171414
void f_80171414(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171414
  c->r[0]=c->lr; // 80171418
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017141C
  c->r[0]=R8(c->r[5]+0x00000003u); // 80171420
  cmps(c,0,(int32_t)c->r[0],1); // 80171424
  if (crb(c,2)) { goto L_80171460; } // 80171428
  if (!crb(c,0)) { goto L_8017143C; } // 8017142C
  cmps(c,0,(int32_t)c->r[0],0); // 80171430
  if (!crb(c,0)) { goto L_80171448; } // 80171434
  goto L_80171470; // 80171438
L_8017143C:;
  cmps(c,0,(int32_t)c->r[0],3); // 8017143C
  if (!crb(c,0)) { goto L_80171470; } // 80171440
  goto L_80171468; // 80171444
L_80171448:;
  c->r[4]=0u+0x80170000u; // 80171448
  c->r[3]=0u+0x00000000u; // 8017144C
  c->r[4]=c->r[4]+0x00000328u; // 80171450
  c->r[5]=0u+0x00000012u; // 80171454
  c->lr=0x8017145Cu; f_8026DD58(c); // 80171458
  goto L_80171470; // 8017145C
L_80171460:;
  c->lr=0x80171464u; f_8024627C(c); // 80171460
  goto L_80171470; // 80171464
L_80171468:;
  c->r[3]=0u+0xFFFFFFFFu; // 80171468
  c->lr=0x80171470u; f_802462B4(c); // 8017146C
L_80171470:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171470
  c->r[3]=0u+0x00000001u; // 80171474
  c->lr=c->r[0]; // 80171478
  c->r[1]=c->r[1]+0x00000010u; // 8017147C
  return; // 80171480
}

// fn_80171484
void f_80171484(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171484
  c->r[0]=c->lr; // 80171488
  c->r[3]=0u+0x80550000u; // 8017148C
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171490
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80171494
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80171498
  {uint32_t ea=c->r[2]+0xFFFFCB10u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017149C
  c->r[4]=0u+0x00000012u; // 801714A0
  W32(c->r[1]+0x000000DCu,c->r[31]); // 801714A4
  {uint32_t ea=c->r[2]+0xFFFFCB14u; c->f[2]=c->ps1[2]=RF32(ea);} // 801714A8
  {uint32_t ea=c->r[2]+0xFFFFCACCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801714AC
  {uint32_t ea=c->r[2]+0xFFFFCB18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801714B0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 801714B4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[4]);} // 801714B8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[3]);} // 801714BC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801714C0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801714C4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801714C8
  c->lr=0x801714D0u; f_8019C920(c); // 801714CC
  cmps(c,0,(int32_t)c->r[3],0); // 801714D0
  if (crb(c,2)) { goto L_80171554; } // 801714D4
  c->r[4]=0u+0x00000000u; // 801714D8
  c->lr=0x801714E0u; f_80039840(c); // 801714DC
  c->r[4]=0u+0x803A0000u; // 801714E0
  c->r[5]=c->r[1]+0x00000048u; // 801714E4
  c->r[4]=c->r[4]+0x0000307Cu; // 801714E8
  c->r[6]=0u+0x00000001u; // 801714EC
  c->r[4]=c->r[4]+0x00000008u; // 801714F0
  c->lr=0x801714F8u; f_80257018(c); // 801714F4
  c->r[3]=c->r[1]+0x00000038u; // 801714F8
  c->r[4]=c->r[1]+0x0000002Cu; // 801714FC
  c->r[5]=c->r[1]+0x00000020u; // 80171500
  c->r[6]=c->r[1]+0x00000048u; // 80171504
  c->r[7]=0u+0x00000000u; // 80171508
  c->lr=0x80171510u; f_8002BE64(c); // 8017150C
  c->r[3]=c->r[1]+0x00000048u; // 80171510
  c->r[4]=c->r[1]+0x00000014u; // 80171514
  c->r[5]=c->r[1]+0x00000038u; // 80171518
  c->lr=0x80171520u; f_80296750(c); // 8017151C
  c->r[31]=0u+0x80550000u; // 80171520
  c->r[6]=c->r[1]+0x00000038u; // 80171524
  c->r[31]=c->r[31]+0x00003D60u; // 80171528
  c->r[7]=c->r[1]+0x00000008u; // 8017152C
  c->r[3]=c->r[31]+0x00000010u; // 80171530
  c->r[8]=c->r[1]+0x0000002Cu; // 80171534
  c->r[9]=c->r[1]+0x00000078u; // 80171538
  c->r[4]=0u+0x00000113u; // 8017153C
  c->r[5]=0u+0x00000000u; // 80171540
  c->lr=0x80171548u; f_80226578(c); // 80171544
  c->r[3]=c->r[31]+0x00000010u; // 80171548
  c->r[4]=c->r[1]+0x00000078u; // 8017154C
  c->lr=0x80171554u; f_80226D68(c); // 80171550
L_80171554:;
  c->r[3]=0u+0x80550000u; // 80171554
  c->r[4]=0u+0x00000013u; // 80171558
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8017155C
  c->lr=0x80171564u; f_8019C920(c); // 80171560
  cmps(c,0,(int32_t)c->r[3],0); // 80171564
  if (crb(c,2)) { goto L_801715E8; } // 80171568
  c->r[4]=0u+0x00000000u; // 8017156C
  c->lr=0x80171574u; f_80039840(c); // 80171570
  c->r[4]=0u+0x803A0000u; // 80171574
  c->r[5]=c->r[1]+0x00000048u; // 80171578
  c->r[4]=c->r[4]+0x0000307Cu; // 8017157C
  c->r[6]=0u+0x00000001u; // 80171580
  c->r[4]=c->r[4]+0x00000008u; // 80171584
  c->lr=0x8017158Cu; f_80257018(c); // 80171588
  c->r[3]=c->r[1]+0x00000038u; // 8017158C
  c->r[4]=c->r[1]+0x0000002Cu; // 80171590
  c->r[5]=c->r[1]+0x00000020u; // 80171594
  c->r[6]=c->r[1]+0x00000048u; // 80171598
  c->r[7]=0u+0x00000000u; // 8017159C
  c->lr=0x801715A4u; f_8002BE64(c); // 801715A0
  c->r[3]=c->r[1]+0x00000048u; // 801715A4
  c->r[4]=c->r[1]+0x00000014u; // 801715A8
  c->r[5]=c->r[1]+0x00000038u; // 801715AC
  c->lr=0x801715B4u; f_80296750(c); // 801715B0
  c->r[31]=0u+0x80550000u; // 801715B4
  c->r[6]=c->r[1]+0x00000038u; // 801715B8
  c->r[31]=c->r[31]+0x00003D60u; // 801715BC
  c->r[7]=c->r[1]+0x00000008u; // 801715C0
  c->r[3]=c->r[31]+0x00000010u; // 801715C4
  c->r[8]=c->r[1]+0x0000002Cu; // 801715C8
  c->r[9]=c->r[1]+0x00000078u; // 801715CC
  c->r[4]=0u+0x00000112u; // 801715D0
  c->r[5]=0u+0x00000000u; // 801715D4
  c->lr=0x801715DCu; f_80226578(c); // 801715D8
  c->r[3]=c->r[31]+0x00000010u; // 801715DC
  c->r[4]=c->r[1]+0x00000078u; // 801715E0
  c->lr=0x801715E8u; f_80226D68(c); // 801715E4
L_801715E8:;
  c->r[31]=R32(c->r[1]+0x000000DCu); // 801715E8
  c->r[3]=0u+0x00000001u; // 801715EC
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801715F0
  c->lr=c->r[0]; // 801715F4
  c->r[1]=c->r[1]+0x000000E0u; // 801715F8
  return; // 801715FC
}

// fn_80171600
void f_80171600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171600
  c->r[0]=c->lr; // 80171604
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80171608
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017160C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80171610
  c->r[31]=c->r[5]|c->r[5]; // 80171614
  c->lr=0x8017161Cu; f_80211724(c); // 80171618
  c->r[5]=R8(c->r[31]+0x00000003u); // 8017161C
  c->r[6]=0u+0x80620000u; // 80171620
  c->r[6]=c->r[6]+0x00007688u; // 80171624
  c->r[4]=0u+0x00000026u; // 80171628
  c->r[0]=divwu(c->r[3],c->r[5]); // 8017162C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80171630
  c->r[5]=c->r[3]-c->r[0]; // 80171634
  c->r[3]=R32(c->r[6]+0x00000014u); // 80171638
  c->lr=0x80171640u; f_80038998(c); // 8017163C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80171640
  c->r[3]=0u+0x00000001u; // 80171644
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171648
  c->lr=c->r[0]; // 8017164C
  c->r[1]=c->r[1]+0x00000010u; // 80171650
  return; // 80171654
}

// fn_80171658
void f_80171658(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171658
  c->r[0]=c->lr; // 8017165C
  c->r[4]=0u+0x00000027u; // 80171660
  W32(c->r[1]+0x00000024u,c->r[0]); // 80171664
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80171668
  c->r[31]=0u+0x80620000u; // 8017166C
  c->r[31]=c->r[31]+0x00007688u; // 80171670
  W32(c->r[1]+0x00000018u,c->r[30]); // 80171674
  c->r[30]=c->r[5]|c->r[5]; // 80171678
  c->r[3]=R32(c->r[31]+0x00000014u); // 8017167C
  c->lr=0x80171684u; f_8003560C(c); // 80171680
  c->r[4]=R8(c->r[30]+0x00000003u); // 80171684
  cmps(c,0,(int32_t)c->r[4],32); // 80171688
  if (crb(c,2)) { goto L_80171758; } // 8017168C
  if (!crb(c,0)) { goto L_801716CC; } // 80171690
  cmps(c,0,(int32_t)c->r[4],8); // 80171694
  if (crb(c,2)) { goto L_80171780; } // 80171698
  if (!crb(c,0)) { goto L_801716C0; } // 8017169C
  cmps(c,0,(int32_t)c->r[4],4); // 801716A0
  if (crb(c,2)) { goto L_80171790; } // 801716A4
  if (!crb(c,0)) { goto L_801717F0; } // 801716A8
  cmps(c,0,(int32_t)c->r[4],2); // 801716AC
  if (!crb(c,0)) { goto L_801717F0; } // 801716B0
  cmps(c,0,(int32_t)c->r[4],0); // 801716B4
  if (!crb(c,0)) { goto L_801717E4; } // 801716B8
  goto L_801717F0; // 801716BC
L_801716C0:;
  cmps(c,0,(int32_t)c->r[4],16); // 801716C0
  if (crb(c,2)) { goto L_8017176C; } // 801716C4
  goto L_801717F0; // 801716C8
L_801716CC:;
  cmps(c,0,(int32_t)c->r[4],128); // 801716CC
  if (crb(c,2)) { goto L_80171710; } // 801716D0
  if (!crb(c,0)) { goto L_801716E4; } // 801716D4
  cmps(c,0,(int32_t)c->r[4],64); // 801716D8
  if (crb(c,2)) { goto L_8017173C; } // 801716DC
  goto L_801717F0; // 801716E0
L_801716E4:;
  cmps(c,0,(int32_t)c->r[4],255); // 801716E4
  if (crb(c,2)) { goto L_801716F0; } // 801716E8
  goto L_801717F0; // 801716EC
L_801716F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801716F0
  if (crb(c,2)) { goto L_801717F0; } // 801716F4
  c->lr=0x801716FCu; f_8003DE30(c); // 801716F8
  c->r[3]=R32(c->r[31]+0x00000014u); // 801716FC
  c->r[4]=0u+0x00000027u; // 80171700
  c->r[5]=0u+0x00000000u; // 80171704
  c->lr=0x8017170Cu; f_80038998(c); // 80171708
  goto L_801717F0; // 8017170C
L_80171710:;
  cmps(c,0,(int32_t)c->r[3],0); // 80171710
  if (crb(c,2)) { goto L_8017171C; } // 80171714
  c->lr=0x8017171Cu; f_8003DE30(c); // 80171718
L_8017171C:;
  c->lr=0x80171720u; f_8003DD24(c); // 8017171C
  c->r[6]=0u+0x80620000u; // 80171720
  c->r[5]=c->r[3]|c->r[3]; // 80171724
  c->r[6]=c->r[6]+0x00007688u; // 80171728
  c->r[4]=0u+0x00000027u; // 8017172C
  c->r[3]=R32(c->r[6]+0x00000014u); // 80171730
  c->lr=0x80171738u; f_80038998(c); // 80171734
  goto L_801717F0; // 80171738
L_8017173C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017173C
  if (crb(c,2)) { goto L_801717F0; } // 80171740
  c->r[0]=R8(c->r[30]+0x00000004u); // 80171744
  c->r[4]=R8(c->r[30]+0x00000005u); // 80171748
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 8017174C
  c->lr=0x80171754u; f_80085628(c); // 80171750
  goto L_801717F0; // 80171754
L_80171758:;
  cmps(c,0,(int32_t)c->r[3],0); // 80171758
  if (crb(c,2)) { goto L_801717F0; } // 8017175C
  c->r[4]=0u+0x00000001u; // 80171760
  c->lr=0x80171768u; f_8003D864(c); // 80171764
  goto L_801717F0; // 80171768
L_8017176C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017176C
  if (crb(c,2)) { goto L_801717F0; } // 80171770
  c->r[4]=0u+0x00000002u; // 80171774
  c->lr=0x8017177Cu; f_8003D864(c); // 80171778
  goto L_801717F0; // 8017177C
L_80171780:;
  cmps(c,0,(int32_t)c->r[3],0); // 80171780
  if (crb(c,2)) { goto L_801717F0; } // 80171784
  c->lr=0x8017178Cu; f_8003DB64(c); // 80171788
  goto L_801717F0; // 8017178C
L_80171790:;
  cmps(c,0,(int32_t)c->r[3],0); // 80171790
  if (crb(c,2)) { goto L_801717F0; } // 80171794
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171798
  c->r[4]=R16(c->r[3]+0x00000088u); // 8017179C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801717A0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801717A4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801717A8
  c->r[0]=c->r[0]-c->r[4]; // 801717AC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801717B0
  cmpu(c,0,c->r[4],0x00000001u); // 801717B4
  if (!crb(c,2)) { goto L_801717C4; } // 801717B8
  c->r[0]=0u+0x00000001u; // 801717BC
  goto L_801717D8; // 801717C0
L_801717C4:;
  cmpu(c,0,c->r[4],0x00000BB8u); // 801717C4
  c->r[0]=0u+0x00000BB8u; // 801717C8
  if (crb(c,1)) { goto L_801717D8; } // 801717CC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801717D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801717D4
L_801717D8:;
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801717D8
  c->lr=0x801717E0u; f_80085628(c); // 801717DC
  goto L_801717F0; // 801717E0
L_801717E4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801717E4
  if (crb(c,2)) { goto L_801717F0; } // 801717E8
  c->lr=0x801717F0u; f_801137E0(c); // 801717EC
L_801717F0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801717F0
  c->r[3]=0u+0x00000001u; // 801717F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801717F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801717FC
  c->lr=c->r[0]; // 80171800
  c->r[1]=c->r[1]+0x00000020u; // 80171804
  return; // 80171808
}

// fn_8017180C
void f_8017180C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017180C
  c->r[0]=c->lr; // 80171810
  W32(c->r[1]+0x00000024u,c->r[0]); // 80171814
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80171818
  c->r[31]=0u+0x80550000u; // 8017181C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80171820
  W32(c->r[1]+0x00000014u,c->r[29]); // 80171824
  c->r[29]=0u+0x805D0000u; // 80171828
  W32(c->r[1]+0x00000010u,c->r[28]); // 8017182C
  c->r[28]=0u+0x00000045u; // 80171830
L_80171834:;
  c->r[3]=c->r[31]+0xFFFFCE54u; // 80171834
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; // 80171838
  c->lr=0x80171840u; f_8019C920(c); // 8017183C
  c->r[30]=c->r[3]|c->r[3]; // 80171840
  c->r[3]=c->r[29]+0x00003F6Cu; // 80171844
  c->lr=0x8017184Cu; f_80037AF0(c); // 80171848
  cmpu(c,0,c->r[3],c->r[30]); // 8017184C
  if (!crb(c,2)) { goto L_80171874; } // 80171850
  c->r[3]=0u+0x80620000u; // 80171854
  c->r[5]=c->r[28]|c->r[28]; // 80171858
  c->r[3]=c->r[3]+0x00007688u; // 8017185C
  c->r[4]=0u+0x00000028u; // 80171860
  c->r[3]=R32(c->r[3]+0x00000014u); // 80171864
  c->lr=0x8017186Cu; f_80038998(c); // 80171868
  c->r[3]=0u+0x00000001u; // 8017186C
  goto L_801718DC; // 80171870
L_80171874:;
  c->r[28]=c->r[28]+0x00000001u; // 80171874
  cmpu(c,0,c->r[28],0x00000048u); // 80171878
  if (!crb(c,1)) { IRQCHK(c); goto L_80171834; } // 8017187C
  c->r[28]=0u+0x00000006u; // 80171880
  c->r[29]=0u+0x80550000u; // 80171884
  c->r[31]=0u+0x805D0000u; // 80171888
L_8017188C:;
  c->r[3]=c->r[29]+0xFFFFCE54u; // 8017188C
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; // 80171890
  c->lr=0x80171898u; f_8019C920(c); // 80171894
  c->r[30]=c->r[3]|c->r[3]; // 80171898
  c->r[3]=c->r[31]+0x00003F6Cu; // 8017189C
  c->lr=0x801718A4u; f_80037AF0(c); // 801718A0
  cmpu(c,0,c->r[3],c->r[30]); // 801718A4
  if (!crb(c,2)) { goto L_801718CC; } // 801718A8
  c->r[3]=0u+0x80620000u; // 801718AC
  c->r[5]=c->r[28]|c->r[28]; // 801718B0
  c->r[3]=c->r[3]+0x00007688u; // 801718B4
  c->r[4]=0u+0x00000028u; // 801718B8
  c->r[3]=R32(c->r[3]+0x00000014u); // 801718BC
  c->lr=0x801718C4u; f_80038998(c); // 801718C0
  c->r[3]=0u+0x00000001u; // 801718C4
  goto L_801718DC; // 801718C8
L_801718CC:;
  c->r[28]=c->r[28]+0x00000001u; // 801718CC
  cmpu(c,0,c->r[28],0x00000009u); // 801718D0
  if (!crb(c,1)) { IRQCHK(c); goto L_8017188C; } // 801718D4
  c->r[3]=0u+0x00000001u; // 801718D8
L_801718DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801718DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801718E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801718E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801718E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801718EC
  c->lr=c->r[0]; // 801718F0
  c->r[1]=c->r[1]+0x00000020u; // 801718F4
  return; // 801718F8
}

// fn_801718FC
void f_801718FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801718FC
  c->r[0]=c->lr; // 80171900
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171904
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80171908
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017190C
  c->r[30]=c->r[5]|c->r[5]; // 80171910
  c->r[0]=R8(c->r[5]+0x00000003u); // 80171914
  cmps(c,0,(int32_t)c->r[0],0); // 80171918
  if (!crb(c,2)) { goto L_801719C8; } // 8017191C
  c->r[31]=0u+0x80620000u; // 80171920
  c->r[4]=0u+0x00000029u; // 80171924
  c->r[31]=c->r[31]+0x00007688u; // 80171928
  c->r[3]=R32(c->r[31]+0x00000014u); // 8017192C
  c->lr=0x80171934u; f_8003560C(c); // 80171930
  cmpu(c,0,c->r[3],0x000000FFu); // 80171934
  if (!crb(c,2)) { goto L_80171950; } // 80171938
  c->r[3]=R32(c->r[31]+0x00000014u); // 8017193C
  c->r[4]=0u+0x00000029u; // 80171940
  c->r[5]=R8(c->r[30]+0x00000004u); // 80171944
  c->lr=0x8017194Cu; f_80038998(c); // 80171948
  goto L_80171A50; // 8017194C
L_80171950:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80171950
  c->r[4]=0u+0x0000002Au; // 80171954
  c->lr=0x8017195Cu; f_8003560C(c); // 80171958
  cmpu(c,0,c->r[3],0x000000FFu); // 8017195C
  if (!crb(c,2)) { goto L_80171978; } // 80171960
  c->r[3]=R32(c->r[31]+0x00000014u); // 80171964
  c->r[4]=0u+0x0000002Au; // 80171968
  c->r[5]=R8(c->r[30]+0x00000004u); // 8017196C
  c->lr=0x80171974u; f_80038998(c); // 80171970
  goto L_80171A50; // 80171974
L_80171978:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80171978
  c->r[4]=0u+0x0000002Bu; // 8017197C
  c->lr=0x80171984u; f_8003560C(c); // 80171980
  cmpu(c,0,c->r[3],0x000000FFu); // 80171984
  if (!crb(c,2)) { goto L_801719A0; } // 80171988
  c->r[3]=R32(c->r[31]+0x00000014u); // 8017198C
  c->r[4]=0u+0x0000002Bu; // 80171990
  c->r[5]=R8(c->r[30]+0x00000004u); // 80171994
  c->lr=0x8017199Cu; f_80038998(c); // 80171998
  goto L_80171A50; // 8017199C
L_801719A0:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801719A0
  c->r[4]=0u+0x0000002Cu; // 801719A4
  c->lr=0x801719ACu; f_8003560C(c); // 801719A8
  cmpu(c,0,c->r[3],0x000000FFu); // 801719AC
  if (!crb(c,2)) { goto L_80171A50; } // 801719B0
  c->r[3]=R32(c->r[31]+0x00000014u); // 801719B4
  c->r[4]=0u+0x0000002Cu; // 801719B8
  c->r[5]=R8(c->r[30]+0x00000004u); // 801719BC
  c->lr=0x801719C4u; f_80038998(c); // 801719C0
  goto L_80171A50; // 801719C4
L_801719C8:;
  c->r[31]=0u+0x80620000u; // 801719C8
  c->r[4]=0u+0x00000029u; // 801719CC
  c->r[31]=c->r[31]+0x00007688u; // 801719D0
  c->r[3]=R32(c->r[31]+0x00000014u); // 801719D4
  c->lr=0x801719DCu; f_8003560C(c); // 801719D8
  c->r[5]=c->r[3]|c->r[3]; // 801719DC
  c->r[3]=R32(c->r[31]+0x00000014u); // 801719E0
  c->r[4]=0u+0x0000002Eu; // 801719E4
  c->lr=0x801719ECu; f_80038998(c); // 801719E8
  c->r[3]=R32(c->r[31]+0x00000014u); // 801719EC
  c->r[4]=0u+0x0000002Au; // 801719F0
  c->lr=0x801719F8u; f_8003560C(c); // 801719F4
  c->r[5]=c->r[3]|c->r[3]; // 801719F8
  c->r[3]=R32(c->r[31]+0x00000014u); // 801719FC
  c->r[4]=0u+0x00000029u; // 80171A00
  c->lr=0x80171A08u; f_80038998(c); // 80171A04
  c->r[3]=R32(c->r[31]+0x00000014u); // 80171A08
  c->r[4]=0u+0x0000002Bu; // 80171A0C
  c->lr=0x80171A14u; f_8003560C(c); // 80171A10
  c->r[5]=c->r[3]|c->r[3]; // 80171A14
  c->r[3]=R32(c->r[31]+0x00000014u); // 80171A18
  c->r[4]=0u+0x0000002Au; // 80171A1C
  c->lr=0x80171A24u; f_80038998(c); // 80171A20
  c->r[3]=R32(c->r[31]+0x00000014u); // 80171A24
  c->r[4]=0u+0x0000002Cu; // 80171A28
  c->lr=0x80171A30u; f_8003560C(c); // 80171A2C
  c->r[5]=c->r[3]|c->r[3]; // 80171A30
  c->r[3]=R32(c->r[31]+0x00000014u); // 80171A34
  c->r[4]=0u+0x0000002Bu; // 80171A38
  c->lr=0x80171A40u; f_80038998(c); // 80171A3C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80171A40
  c->r[4]=0u+0x0000002Cu; // 80171A44
  c->r[5]=0u+0x000000FFu; // 80171A48
  c->lr=0x80171A50u; f_80038998(c); // 80171A4C
L_80171A50:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80171A50
  c->r[3]=0u+0x00000001u; // 80171A54
  c->r[30]=R32(c->r[1]+0x00000008u); // 80171A58
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171A5C
  c->lr=c->r[0]; // 80171A60
  c->r[1]=c->r[1]+0x00000010u; // 80171A64
  return; // 80171A68
}

// fn_80171A6C
void f_80171A6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171A6C
  c->r[0]=c->lr; // 80171A70
  c->r[3]=0u+0x80550000u; // 80171A74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171A78
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80171A7C
  c->r[4]=R8(c->r[5]+0x00000003u); // 80171A80
  c->lr=0x80171A88u; f_8019C920(c); // 80171A84
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171A88
  c->r[4]=0u+0x00000068u; // 80171A8C
  c->r[5]=0u+0x00000002u; // 80171A90
  c->r[6]=0u+0x00000000u; // 80171A94
  c->r[7]=0u+0x00000000u; // 80171A98
  c->lr=0x80171AA0u; f_801F4D44(c); // 80171A9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171AA0
  c->r[3]=0u+0x00000001u; // 80171AA4
  c->lr=c->r[0]; // 80171AA8
  c->r[1]=c->r[1]+0x00000010u; // 80171AAC
  return; // 80171AB0
}

// fn_80171AB4
void f_80171AB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171AB4
  c->r[0]=c->lr; // 80171AB8
  c->r[4]=0u+0x0000002Du; // 80171ABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171AC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80171AC4
  c->r[31]=0u+0x80620000u; // 80171AC8
  c->r[31]=c->r[31]+0x00007688u; // 80171ACC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80171AD0
  c->r[3]=R32(c->r[31]+0x00000014u); // 80171AD4
  c->lr=0x80171ADCu; f_8003560C(c); // 80171AD8
  c->r[30]=c->r[3]|c->r[3]; // 80171ADC
  c->r[3]=R32(c->r[31]+0x00000014u); // 80171AE0
  c->r[4]=0u+0x0000002Fu; // 80171AE4
  c->lr=0x80171AECu; f_80038AF4(c); // 80171AE8
  cmps(c,0,(int32_t)c->r[3],0); // 80171AEC
  if (crb(c,2)) { goto L_80171B08; } // 80171AF0
  c->r[3]=R32(c->r[31]+0x00000014u); // 80171AF4
  c->r[4]=0u+0x0000001Au; // 80171AF8
  c->lr=0x80171B00u; f_80037670(c); // 80171AFC
  cmps(c,0,(int32_t)c->r[3],0); // 80171B00
  if (crb(c,2)) { goto L_80171B34; } // 80171B04
L_80171B08:;
  cmps(c,0,(int32_t)c->r[30],0); // 80171B08
  if (crb(c,2)) { goto L_80171B7C; } // 80171B0C
  c->r[3]=c->r[30]|c->r[30]; // 80171B10
  c->lr=0x80171B18u; f_801E2520(c); // 80171B14
  c->r[3]=0u+0x80620000u; // 80171B18
  c->r[4]=0u+0x0000002Du; // 80171B1C
  c->r[3]=c->r[3]+0x00007688u; // 80171B20
  c->r[5]=0u+0x00000000u; // 80171B24
  c->r[3]=R32(c->r[3]+0x00000014u); // 80171B28
  c->lr=0x80171B30u; f_80038998(c); // 80171B2C
  goto L_80171B7C; // 80171B30
L_80171B34:;
  cmps(c,0,(int32_t)c->r[30],0); // 80171B34
  if (!crb(c,2)) { goto L_80171B64; } // 80171B38
  c->r[3]=0u+0x805D0000u; // 80171B3C
  c->r[4]=0u+0x0000006Cu; // 80171B40
  c->r[3]=c->r[3]+0xFFFFC7D4u; // 80171B44
  c->r[5]=0u+0x00000002u; // 80171B48
  c->lr=0x80171B50u; f_801E1F1C(c); // 80171B4C
  c->r[30]=c->r[3]|c->r[3]; // 80171B50
  c->r[3]=R32(c->r[31]+0x00000014u); // 80171B54
  c->r[5]=c->r[30]|c->r[30]; // 80171B58
  c->r[4]=0u+0x0000002Du; // 80171B5C
  c->lr=0x80171B64u; f_80038998(c); // 80171B60
L_80171B64:;
  cmps(c,0,(int32_t)c->r[30],0); // 80171B64
  if (crb(c,2)) { goto L_80171B7C; } // 80171B68
  c->r[3]=c->r[30]|c->r[30]; // 80171B6C
  c->r[4]=0u+0x00000000u; // 80171B70
  c->r[5]=0u+0x00000000u; // 80171B74
  c->lr=0x80171B7Cu; f_801E2FAC(c); // 80171B78
L_80171B7C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80171B7C
  c->r[3]=0u+0x00000001u; // 80171B80
  c->r[30]=R32(c->r[1]+0x00000008u); // 80171B84
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171B88
  c->lr=c->r[0]; // 80171B8C
  c->r[1]=c->r[1]+0x00000010u; // 80171B90
  return; // 80171B94
}

// fn_80171B98
void f_80171B98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171B98
  c->r[0]=c->lr; // 80171B9C
  c->r[4]=0u+0x0000000Fu; // 80171BA0
  W32(c->r[1]+0x00000044u,c->r[0]); // 80171BA4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80171BA8
  c->r[31]=0u+0x80550000u; // 80171BAC
  c->r[3]=c->r[31]+0xFFFFCE54u; // 80171BB0
  W32(c->r[1]+0x00000038u,c->r[30]); // 80171BB4
  W32(c->r[1]+0x00000034u,c->r[29]); // 80171BB8
  c->r[29]=c->r[5]|c->r[5]; // 80171BBC
  c->lr=0x80171BC4u; f_8019C920(c); // 80171BC0
  {uint32_t ea=c->r[2]+0xFFFFCB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80171BC4
  cmps(c,0,(int32_t)c->r[3],0); // 80171BC8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80171BCC
  if (crb(c,2)) { goto L_80171FF8; } // 80171BD0
  c->r[4]=0u+0x00000000u; // 80171BD4
  c->lr=0x80171BDCu; f_80039840(c); // 80171BD8
  c->r[0]=R8(c->r[29]+0x00000003u); // 80171BDC
  c->r[29]=c->r[3]|c->r[3]; // 80171BE0
  cmps(c,0,(int32_t)c->r[0],3); // 80171BE4
  if (crb(c,2)) { goto L_80171E08; } // 80171BE8
  if (!crb(c,0)) { goto L_80171C08; } // 80171BEC
  cmps(c,0,(int32_t)c->r[0],1); // 80171BF0
  if (crb(c,2)) { goto L_80171CE8; } // 80171BF4
  if (!crb(c,0)) { goto L_80171D60; } // 80171BF8
  cmps(c,0,(int32_t)c->r[0],0); // 80171BFC
  if (!crb(c,0)) { goto L_80171C18; } // 80171C00
  goto L_80171FF8; // 80171C04
L_80171C08:;
  cmps(c,0,(int32_t)c->r[0],5); // 80171C08
  if (crb(c,2)) { goto L_80171FB4; } // 80171C0C
  if (!crb(c,0)) { goto L_80171FF8; } // 80171C10
  goto L_80171E4C; // 80171C14
L_80171C18:;
  c->r[3]=0u+0x80620000u; // 80171C18
  c->r[4]=0u+0x00000030u; // 80171C1C
  c->r[3]=c->r[3]+0x00007688u; // 80171C20
  c->r[3]=R32(c->r[3]+0x00000014u); // 80171C24
  c->lr=0x80171C2Cu; f_8003560C(c); // 80171C28
  c->r[30]=c->r[3]+0x00000002u; // 80171C2C
  cmpu(c,0,c->r[30],0x000000C8u); // 80171C30
  if (!crb(c,1)) { goto L_80171C3C; } // 80171C34
  c->r[30]=0u+0x00000000u; // 80171C38
L_80171C3C:;
  cmpu(c,0,c->r[30],0x00000064u); // 80171C3C
  if (!crb(c,0)) { goto L_80171C68; } // 80171C40
  c->r[0]=0u+0x43300000u; // 80171C44
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 80171C48
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[2]=RF64(ea);} // 80171C4C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80171C50
  {uint32_t ea=c->r[2]+0xFFFFCB20u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171C54
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 80171C58
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80171C5C
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 80171C60
  goto L_80171C94; // 80171C64
L_80171C68:;
  c->r[3]=c->r[30]+0xFFFFFF9Cu; // 80171C68
  c->r[0]=0u+0x43300000u; // 80171C6C
  W32(c->r[1]+0x00000024u,c->r[3]); // 80171C70
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[3]=RF64(ea);} // 80171C74
  W32(c->r[1]+0x00000020u,c->r[0]); // 80171C78
  {uint32_t ea=c->r[2]+0xFFFFCB20u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171C7C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 80171C80
  {uint32_t ea=c->r[2]+0xFFFFCB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80171C84
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80171C88
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80171C8C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 80171C90
L_80171C94:;
  {uint32_t ea=c->r[2]+0xFFFFCB1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80171C94
  c->r[4]=0u+0x803A0000u; // 80171C98
  c->r[4]=c->r[4]+0x0000307Cu; // 80171C9C
  {uint32_t ea=c->r[2]+0xFFFFCB24u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171CA0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80171CA4
  c->r[3]=c->r[29]|c->r[29]; // 80171CA8
  c->r[4]=c->r[4]+0x00000011u; // 80171CAC
  c->r[5]=c->r[1]+0x00000008u; // 80171CB0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80171CB4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80171CB8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80171CBC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80171CC0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80171CC4
  c->lr=0x80171CCCu; f_8025892C(c); // 80171CC8
  c->r[3]=0u+0x80620000u; // 80171CCC
  c->r[5]=c->r[30]|c->r[30]; // 80171CD0
  c->r[3]=c->r[3]+0x00007688u; // 80171CD4
  c->r[4]=0u+0x00000030u; // 80171CD8
  c->r[3]=R32(c->r[3]+0x00000014u); // 80171CDC
  c->lr=0x80171CE4u; f_80038998(c); // 80171CE0
  goto L_80171FF8; // 80171CE4
L_80171CE8:;
  {uint32_t ea=c->r[2]+0xFFFFCB28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171CE8
  c->r[31]=0u+0x803A0000u; // 80171CEC
  c->r[31]=c->r[31]+0x0000307Cu; // 80171CF0
  c->r[5]=c->r[1]+0x00000008u; // 80171CF4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80171CF8
  c->r[4]=c->r[31]+0x0000001Du; // 80171CFC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80171D00
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80171D04
  c->lr=0x80171D0Cu; f_8025892C(c); // 80171D08
  c->r[3]=c->r[29]|c->r[29]; // 80171D0C
  c->r[4]=c->r[31]+0x00000026u; // 80171D10
  c->r[5]=c->r[1]+0x00000008u; // 80171D14
  c->lr=0x80171D1Cu; f_8025892C(c); // 80171D18
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171D1C
  c->r[3]=c->r[29]|c->r[29]; // 80171D20
  c->r[4]=c->r[31]+0x00000011u; // 80171D24
  c->r[5]=c->r[1]+0x00000008u; // 80171D28
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80171D2C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80171D30
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80171D34
  c->lr=0x80171D3Cu; f_8025892C(c); // 80171D38
  {uint32_t ea=c->r[2]+0xFFFFCB2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80171D3C
  c->r[3]=c->r[29]|c->r[29]; // 80171D40
  c->r[4]=c->r[31]+0x00000030u; // 80171D44
  c->r[5]=c->r[1]+0x00000008u; // 80171D48
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80171D4C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80171D50
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80171D54
  c->lr=0x80171D5Cu; f_8025892C(c); // 80171D58
  goto L_80171FF8; // 80171D5C
L_80171D60:;
  c->r[3]=0u+0x80620000u; // 80171D60
  c->r[4]=0u+0x00000031u; // 80171D64
  c->r[3]=c->r[3]+0x00007688u; // 80171D68
  c->r[3]=R32(c->r[3]+0x00000014u); // 80171D6C
  c->lr=0x80171D74u; f_8003560C(c); // 80171D70
  c->r[0]=c->r[3]+0x00010000u; // 80171D74
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80171D78
  if (crb(c,2)) { goto L_80171FF8; } // 80171D7C
  c->r[31]=c->r[3]+0x00000002u; // 80171D80
  cmpu(c,0,c->r[31],0x00000078u); // 80171D84
  if (!crb(c,1)) { goto L_80171D90; } // 80171D88
  c->r[31]=0u+0x00000078u; // 80171D8C
L_80171D90:;
  {uint32_t ea=c->r[2]+0xFFFFCB24u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171D90
  c->r[0]=0u+0x43300000u; // 80171D94
  c->r[4]=0u+0x803A0000u; // 80171D98
  W32(c->r[1]+0x00000024u,c->r[31]); // 80171D9C
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[4]); // 80171DA0
  c->r[4]=c->r[4]+0x0000307Cu; // 80171DA4
  W32(c->r[1]+0x00000020u,c->r[0]); // 80171DA8
  c->r[3]=c->r[29]|c->r[29]; // 80171DAC
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[3]=RF64(ea);} // 80171DB0
  c->r[4]=c->r[4]+0x0000001Du; // 80171DB4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 80171DB8
  c->r[5]=c->r[1]+0x00000008u; // 80171DBC
  {uint32_t ea=c->r[2]+0xFFFFCB30u; c->f[2]=c->ps1[2]=RF32(ea);} // 80171DC0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[3]); // 80171DC4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80171DC8
  {uint32_t ea=c->r[2]+0xFFFFCB1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80171DCC
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[2]); // 80171DD0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80171DD4
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 80171DD8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 80171DDC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80171DE0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80171DE4
  c->lr=0x80171DECu; f_8025892C(c); // 80171DE8
  c->r[3]=0u+0x80620000u; // 80171DEC
  c->r[5]=c->r[31]|c->r[31]; // 80171DF0
  c->r[3]=c->r[3]+0x00007688u; // 80171DF4
  c->r[4]=0u+0x00000031u; // 80171DF8
  c->r[3]=R32(c->r[3]+0x00000014u); // 80171DFC
  c->lr=0x80171E04u; f_80038998(c); // 80171E00
  goto L_80171FF8; // 80171E04
L_80171E08:;
  {uint32_t ea=c->r[2]+0xFFFFCB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80171E08
  c->r[4]=0u+0x803A0000u; // 80171E0C
  c->r[4]=c->r[4]+0x0000307Cu; // 80171E10
  c->r[5]=c->r[1]+0x00000008u; // 80171E14
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80171E18
  c->r[4]=c->r[4]+0x0000001Du; // 80171E1C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80171E20
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80171E24
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80171E28
  c->lr=0x80171E30u; f_8025892C(c); // 80171E2C
  c->r[3]=0u+0x80620000u; // 80171E30
  c->r[4]=0u+0x00000031u; // 80171E34
  c->r[3]=c->r[3]+0x00007688u; // 80171E38
  c->r[5]=0u+0xFFFFFFFFu; // 80171E3C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80171E40
  c->lr=0x80171E48u; f_80038998(c); // 80171E44
  goto L_80171FF8; // 80171E48
L_80171E4C:;
  c->r[3]=c->r[31]+0xFFFFCE54u; // 80171E4C
  c->r[4]=0u+0x00000012u; // 80171E50
  c->lr=0x80171E58u; f_8019C920(c); // 80171E54
  cmps(c,0,(int32_t)c->r[3],0); // 80171E58
  c->r[29]=c->r[3]|c->r[3]; // 80171E5C
  if (crb(c,2)) { goto L_80171EB8; } // 80171E60
  {uint32_t ea=c->r[2]+0xFFFFCB28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171E64
  c->r[4]=0u+0x00000000u; // 80171E68
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80171E6C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80171E70
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80171E74
  c->lr=0x80171E7Cu; f_80039840(c); // 80171E78
  c->r[31]=0u+0x803A0000u; // 80171E7C
  c->r[5]=c->r[1]+0x00000008u; // 80171E80
  c->r[31]=c->r[31]+0x0000307Cu; // 80171E84
  c->r[4]=c->r[31]+0x00000026u; // 80171E88
  c->lr=0x80171E90u; f_8025892C(c); // 80171E8C
  {uint32_t ea=c->r[2]+0xFFFFCB2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80171E90
  c->r[3]=c->r[29]|c->r[29]; // 80171E94
  c->r[4]=0u+0x00000000u; // 80171E98
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80171E9C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80171EA0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80171EA4
  c->lr=0x80171EACu; f_80039840(c); // 80171EA8
  c->r[4]=c->r[31]+0x00000030u; // 80171EAC
  c->r[5]=c->r[1]+0x00000008u; // 80171EB0
  c->lr=0x80171EB8u; f_8025892C(c); // 80171EB4
L_80171EB8:;
  c->r[3]=0u+0x80550000u; // 80171EB8
  c->r[4]=0u+0x00000013u; // 80171EBC
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80171EC0
  c->lr=0x80171EC8u; f_8019C920(c); // 80171EC4
  cmps(c,0,(int32_t)c->r[3],0); // 80171EC8
  c->r[30]=c->r[3]|c->r[3]; // 80171ECC
  if (crb(c,2)) { goto L_80171F28; } // 80171ED0
  {uint32_t ea=c->r[2]+0xFFFFCB28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171ED4
  c->r[4]=0u+0x00000000u; // 80171ED8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80171EDC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80171EE0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80171EE4
  c->lr=0x80171EECu; f_80039840(c); // 80171EE8
  c->r[31]=0u+0x803A0000u; // 80171EEC
  c->r[5]=c->r[1]+0x00000008u; // 80171EF0
  c->r[31]=c->r[31]+0x0000307Cu; // 80171EF4
  c->r[4]=c->r[31]+0x00000026u; // 80171EF8
  c->lr=0x80171F00u; f_8025892C(c); // 80171EFC
  {uint32_t ea=c->r[2]+0xFFFFCB2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80171F00
  c->r[3]=c->r[30]|c->r[30]; // 80171F04
  c->r[4]=0u+0x00000000u; // 80171F08
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80171F0C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80171F10
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80171F14
  c->lr=0x80171F1Cu; f_80039840(c); // 80171F18
  c->r[4]=c->r[31]+0x00000030u; // 80171F1C
  c->r[5]=c->r[1]+0x00000008u; // 80171F20
  c->lr=0x80171F28u; f_8025892C(c); // 80171F24
L_80171F28:;
  c->r[3]=0u+0x80550000u; // 80171F28
  c->r[4]=0u+0x00000014u; // 80171F2C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80171F30
  c->lr=0x80171F38u; f_8019C920(c); // 80171F34
  cmps(c,0,(int32_t)c->r[3],0); // 80171F38
  if (crb(c,2)) { goto L_80171F6C; } // 80171F3C
  {uint32_t ea=c->r[2]+0xFFFFCB2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80171F40
  c->r[4]=0u+0x00000000u; // 80171F44
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80171F48
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80171F4C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80171F50
  c->lr=0x80171F58u; f_80039840(c); // 80171F54
  c->r[4]=0u+0x803A0000u; // 80171F58
  c->r[5]=c->r[1]+0x00000008u; // 80171F5C
  c->r[4]=c->r[4]+0x0000307Cu; // 80171F60
  c->r[4]=c->r[4]+0x00000030u; // 80171F64
  c->lr=0x80171F6Cu; f_8025892C(c); // 80171F68
L_80171F6C:;
  c->r[3]=0u+0x80550000u; // 80171F6C
  c->r[4]=0u+0x00000015u; // 80171F70
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80171F74
  c->lr=0x80171F7Cu; f_8019C920(c); // 80171F78
  cmps(c,0,(int32_t)c->r[3],0); // 80171F7C
  if (crb(c,2)) { goto L_80171FF8; } // 80171F80
  {uint32_t ea=c->r[2]+0xFFFFCB2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80171F84
  c->r[4]=0u+0x00000000u; // 80171F88
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80171F8C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80171F90
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80171F94
  c->lr=0x80171F9Cu; f_80039840(c); // 80171F98
  c->r[4]=0u+0x803A0000u; // 80171F9C
  c->r[5]=c->r[1]+0x00000008u; // 80171FA0
  c->r[4]=c->r[4]+0x0000307Cu; // 80171FA4
  c->r[4]=c->r[4]+0x00000030u; // 80171FA8
  c->lr=0x80171FB0u; f_8025892C(c); // 80171FAC
  goto L_80171FF8; // 80171FB0
L_80171FB4:;
  {uint32_t ea=c->r[2]+0xFFFFCB1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80171FB4
  c->r[4]=0u+0x803A0000u; // 80171FB8
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171FBC
  c->r[4]=c->r[4]+0x0000307Cu; // 80171FC0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80171FC4
  c->r[4]=c->r[4]+0x0000001Du; // 80171FC8
  c->r[5]=c->r[1]+0x00000008u; // 80171FCC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80171FD0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80171FD4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80171FD8
  c->lr=0x80171FE0u; f_8025892C(c); // 80171FDC
  c->r[3]=0u+0x80620000u; // 80171FE0
  c->r[4]=0u+0x00000031u; // 80171FE4
  c->r[3]=c->r[3]+0x00007688u; // 80171FE8
  c->r[5]=0u+0x00000000u; // 80171FEC
  c->r[3]=R32(c->r[3]+0x00000014u); // 80171FF0
  c->lr=0x80171FF8u; f_80038998(c); // 80171FF4
L_80171FF8:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80171FF8
  c->r[3]=0u+0x00000001u; // 80171FFC
  c->r[30]=R32(c->r[1]+0x00000038u); // 80172000
  c->r[29]=R32(c->r[1]+0x00000034u); // 80172004
  c->r[0]=R32(c->r[1]+0x00000044u); // 80172008
  c->lr=c->r[0]; // 8017200C
  c->r[1]=c->r[1]+0x00000040u; // 80172010
  return; // 80172014
}

// fn_80172018
void f_80172018(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172018
  c->r[0]=c->lr; // 8017201C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80172020
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80172024
  c->r[0]=R8(c->r[5]+0x00000003u); // 80172028
  cmps(c,0,(int32_t)c->r[0],0); // 8017202C
  if (!crb(c,2)) { goto L_8017205C; } // 80172030
  c->r[4]=0u+0x803A0000u; // 80172034
  c->r[3]=0u+0x80550000u; // 80172038
  c->r[4]=c->r[4]+0x0000307Cu; // 8017203C
  c->r[5]=0u+0x00000000u; // 80172040
  c->r[3]=c->r[3]+0xFFFFC848u; // 80172044
  c->r[6]=0u+0x00000000u; // 80172048
  c->r[4]=c->r[4]+0x00000037u; // 8017204C
  c->lr=0x80172054u; f_8018D3E4(c); // 80172050
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 80172054
  goto L_801720C8; // 80172058
L_8017205C:;
  c->r[3]=0u+0x80620000u; // 8017205C
  c->r[4]=0u+0x0000002Eu; // 80172060
  c->r[3]=c->r[3]+0x00007688u; // 80172064
  c->r[3]=R32(c->r[3]+0x00000014u); // 80172068
  c->lr=0x80172070u; f_8003560C(c); // 8017206C
  c->r[0]=c->r[3]+0xFFFFFFFAu; // 80172070
  cmpu(c,0,c->r[0],0x00000003u); // 80172074
  if (crb(c,1)) { goto L_801720A4; } // 80172078
  c->r[4]=0u+0x803A0000u; // 8017207C
  c->r[3]=0u+0x80550000u; // 80172080
  c->r[4]=c->r[4]+0x0000307Cu; // 80172084
  c->r[5]=0u+0x00000000u; // 80172088
  c->r[3]=c->r[3]+0xFFFFC848u; // 8017208C
  c->r[6]=0u+0x00000000u; // 80172090
  c->r[4]=c->r[4]+0x0000003Bu; // 80172094
  c->lr=0x8017209Cu; f_8018D3E4(c); // 80172098
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 8017209C
  goto L_801720C8; // 801720A0
L_801720A4:;
  c->r[4]=0u+0x803A0000u; // 801720A4
  c->r[3]=0u+0x80550000u; // 801720A8
  c->r[4]=c->r[4]+0x0000307Cu; // 801720AC
  c->r[5]=0u+0x00000000u; // 801720B0
  c->r[3]=c->r[3]+0xFFFFC848u; // 801720B4
  c->r[6]=0u+0x00000000u; // 801720B8
  c->r[4]=c->r[4]+0x00000037u; // 801720BC
  c->lr=0x801720C4u; f_8018D3E4(c); // 801720C0
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 801720C4
L_801720C8:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801720C8
  cmpu(c,0,c->r[0],0x000000FFu); // 801720CC
  if (crb(c,2)) { goto L_80172130; } // 801720D0
  c->r[3]=0u+0x80550000u; // 801720D4
  c->r[4]=c->r[1]+0x00000020u; // 801720D8
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801720DC
  c->lr=0x801720E4u; f_800FEE64(c); // 801720E0
  c->r[4]=0u+0x803A0000u; // 801720E4
  {uint32_t ea=c->r[4]+0x00003058u; c->r[6]=R32(ea); c->r[4]=ea;} // 801720E8
  c->r[8]=R32(c->r[1]+0x00000020u); // 801720EC
  c->r[3]=0u+0x80550000u; // 801720F0
  c->r[7]=R32(c->r[1]+0x00000024u); // 801720F4
  c->r[3]=c->r[3]+0xFFFFC848u; // 801720F8
  c->r[10]=R32(c->r[4]+0x00000004u); // 801720FC
  c->r[5]=c->r[1]+0x00000014u; // 80172100
  c->r[9]=R32(c->r[4]+0x00000008u); // 80172104
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 80172108
  c->r[0]=R32(c->r[1]+0x00000028u); // 8017210C
  W32(c->r[1]+0x00000008u,c->r[6]); // 80172110
  c->r[6]=c->r[1]+0x00000008u; // 80172114
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 80172118
  W32(c->r[1]+0x00000010u,c->r[9]); // 8017211C
  W32(c->r[1]+0x00000014u,c->r[8]); // 80172120
  W32(c->r[1]+0x00000018u,c->r[7]); // 80172124
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80172128
  c->lr=0x80172130u; f_8018DBD0(c); // 8017212C
L_80172130:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80172130
  c->r[3]=0u+0x00000001u; // 80172134
  c->r[0]=R32(c->r[1]+0x00000044u); // 80172138
  c->lr=c->r[0]; // 8017213C
  c->r[1]=c->r[1]+0x00000040u; // 80172140
  return; // 80172144
}

// fn_80172148
void f_80172148(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172148
  c->r[0]=c->lr; // 8017214C
  c->r[3]=0u+0x80550000u; // 80172150
  c->r[4]=0u+0x00000052u; // 80172154
  W32(c->r[1]+0x00000014u,c->r[0]); // 80172158
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8017215C
  c->lr=0x80172164u; f_8019C920(c); // 80172160
  cmps(c,0,(int32_t)c->r[3],0); // 80172164
  if (crb(c,2)) { goto L_801721D8; } // 80172168
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017216C
  c->r[4]=0u+0x80620000u; // 80172170
  {uint32_t ea=c->r[2]+0xFFFFCB40u; c->f[1]=c->ps1[1]=RF32(ea);} // 80172174
  c->r[4]=c->r[4]+0x000079C0u; // 80172178
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8017217C
  {uint32_t ea=c->r[2]+0xFFFFCAE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172180
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 80172184
  {uint32_t ea=c->r[2]+0xFFFFCB48u; c->f[2]=c->ps1[2]=RF32(ea);} // 80172188
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8017218C
  {uint32_t ea=c->r[2]+0xFFFFCB44u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172190
  {uint32_t ea=c->r[4]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 80172194
  {uint32_t ea=c->r[2]+0xFFFFCB4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80172198
  c->f[3]=-c->f[3]; // 8017219C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 801721A0
  fcmp(c,0,c->f[0],c->f[1]); // 801721A4
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 801721A8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801721AC
  if (!crb(c,2)) { goto L_801721C0; } // 801721B0
  {uint32_t ea=c->r[3]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801721B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801721B8
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 801721BC
L_801721C0:;
  c->r[4]=0u+0x80620000u; // 801721C0
  {uint32_t ea=c->r[2]+0xFFFFCB48u; c->f[1]=c->ps1[1]=RF32(ea);} // 801721C4
  c->r[4]=c->r[4]+0x000079C0u; // 801721C8
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801721CC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801721D0
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 801721D4
L_801721D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801721D8
  c->r[3]=0u+0x00000001u; // 801721DC
  c->lr=c->r[0]; // 801721E0
  c->r[1]=c->r[1]+0x00000010u; // 801721E4
  return; // 801721E8
}

// fn_801721EC
void f_801721EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801721EC
  c->r[0]=c->lr; // 801721F0
  c->r[3]=0u+0x80550000u; // 801721F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801721F8
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801721FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80172200
  c->r[31]=c->r[5]|c->r[5]; // 80172204
  c->r[4]=R8(c->r[5]+0x00000003u); // 80172208
  c->lr=0x80172210u; f_8019C920(c); // 8017220C
  cmps(c,0,(int32_t)c->r[3],0); // 80172210
  if (crb(c,2)) { goto L_80172230; } // 80172214
  c->r[5]=R8(c->r[31]+0x00000004u); // 80172218
  c->r[4]=0u+0x00000064u; // 8017221C
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80172220
  c->r[6]=0u+0x00000000u; // 80172224
  c->r[7]=0u+0x00000000u; // 80172228
  c->lr=0x80172230u; f_801F4D44(c); // 8017222C
L_80172230:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80172230
  c->r[3]=0u+0x00000001u; // 80172234
  c->r[0]=R32(c->r[1]+0x00000014u); // 80172238
  c->lr=c->r[0]; // 8017223C
  c->r[1]=c->r[1]+0x00000010u; // 80172240
  return; // 80172244
}

// fn_80172248
void f_80172248(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172248
  c->r[0]=c->lr; // 8017224C
  W32(c->r[1]+0x00000074u,c->r[0]); // 80172250
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80172254
  W32(c->r[1]+0x00000068u,c->r[30]); // 80172258
  W32(c->r[1]+0x00000064u,c->r[29]); // 8017225C
  W32(c->r[1]+0x00000060u,c->r[28]); // 80172260
  c->r[0]=R8(c->r[5]+0x00000003u); // 80172264
  cmps(c,0,(int32_t)c->r[0],1); // 80172268
  if (crb(c,2)) { goto L_80172360; } // 8017226C
  if (!crb(c,0)) { goto L_80172280; } // 80172270
  cmps(c,0,(int32_t)c->r[0],0); // 80172274
  if (!crb(c,0)) { goto L_8017228C; } // 80172278
  goto L_80172558; // 8017227C
L_80172280:;
  cmps(c,0,(int32_t)c->r[0],3); // 80172280
  if (!crb(c,0)) { goto L_80172558; } // 80172284
  goto L_801723F0; // 80172288
L_8017228C:;
  c->r[3]=0u+0x80550000u; // 8017228C
  c->r[4]=0u+0x00000012u; // 80172290
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80172294
  c->lr=0x8017229Cu; f_8019C920(c); // 80172298
  cmps(c,0,(int32_t)c->r[3],0); // 8017229C
  c->r[28]=c->r[3]|c->r[3]; // 801722A0
  if (crb(c,2)) { goto L_80172558; } // 801722A4
  c->r[30]=0u+0x803A0000u; // 801722A8
  c->r[31]=0u+0x80550000u; // 801722AC
  c->r[30]=c->r[30]+0x0000307Cu; // 801722B0
  c->r[5]=0u+0x00000000u; // 801722B4
  c->r[3]=c->r[31]+0xFFFFC848u; // 801722B8
  c->r[6]=0u+0x00000000u; // 801722BC
  c->r[4]=c->r[30]+0x0000003Fu; // 801722C0
  c->lr=0x801722C8u; f_8018D3E4(c); // 801722C4
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 801722C8
  cmpu(c,0,c->r[29],0x000000FFu); // 801722CC
  if (crb(c,2)) { goto L_80172558; } // 801722D0
  c->r[3]=c->r[28]|c->r[28]; // 801722D4
  c->r[4]=0u+0x00000000u; // 801722D8
  c->lr=0x801722E0u; f_80039840(c); // 801722DC
  c->r[4]=c->r[30]+0x00000008u; // 801722E0
  c->r[5]=c->r[1]+0x00000030u; // 801722E4
  c->r[6]=0u+0x00000001u; // 801722E8
  c->lr=0x801722F0u; f_80257018(c); // 801722EC
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801722F0
  c->r[4]=c->r[1]+0x00000020u; // 801722F4
  {uint32_t ea=c->r[2]+0xFFFFCABCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801722F8
  c->r[5]=c->r[4]|c->r[4]; // 801722FC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80172300
  c->r[3]=c->r[1]+0x00000030u; // 80172304
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80172308
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8017230C
  c->lr=0x80172314u; f_80296750(c); // 80172310
  c->r[5]=0u+0x803A0000u; // 80172314
  {uint32_t ea=c->r[5]+0x00003058u; c->r[11]=R32(ea); c->r[5]=ea;} // 80172318
  c->r[8]=R32(c->r[1]+0x00000020u); // 8017231C
  c->r[4]=c->r[29]|c->r[29]; // 80172320
  c->r[7]=R32(c->r[1]+0x00000024u); // 80172324
  c->r[3]=c->r[31]+0xFFFFC848u; // 80172328
  c->r[10]=R32(c->r[5]+0x00000004u); // 8017232C
  c->r[6]=c->r[1]+0x00000008u; // 80172330
  c->r[9]=R32(c->r[5]+0x00000008u); // 80172334
  c->r[5]=c->r[1]+0x00000014u; // 80172338
  c->r[0]=R32(c->r[1]+0x00000028u); // 8017233C
  W32(c->r[1]+0x00000008u,c->r[11]); // 80172340
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 80172344
  W32(c->r[1]+0x00000010u,c->r[9]); // 80172348
  W32(c->r[1]+0x00000014u,c->r[8]); // 8017234C
  W32(c->r[1]+0x00000018u,c->r[7]); // 80172350
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80172354
  c->lr=0x8017235Cu; f_8018DBD0(c); // 80172358
  goto L_80172558; // 8017235C
L_80172360:;
  c->r[3]=0u+0x80550000u; // 80172360
  c->r[4]=0u+0x00000013u; // 80172364
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80172368
  c->lr=0x80172370u; f_8019C920(c); // 8017236C
  cmps(c,0,(int32_t)c->r[3],0); // 80172370
  c->r[29]=c->r[3]|c->r[3]; // 80172374
  if (crb(c,2)) { goto L_80172558; } // 80172378
  c->r[31]=0u+0x803A0000u; // 8017237C
  c->r[30]=0u+0x80550000u; // 80172380
  c->r[31]=c->r[31]+0x0000307Cu; // 80172384
  c->r[5]=0u+0x00000000u; // 80172388
  c->r[3]=c->r[30]+0xFFFFC848u; // 8017238C
  c->r[6]=0u+0x00000000u; // 80172390
  c->r[4]=c->r[31]+0x00000043u; // 80172394
  c->lr=0x8017239Cu; f_8018D3E4(c); // 80172398
  c->r[28]=rotl(c->r[3],0)&0x000000FFu; // 8017239C
  cmpu(c,0,c->r[28],0x000000FFu); // 801723A0
  if (crb(c,2)) { goto L_80172558; } // 801723A4
  c->r[3]=c->r[29]|c->r[29]; // 801723A8
  c->r[4]=0u+0x00000000u; // 801723AC
  c->lr=0x801723B4u; f_80039840(c); // 801723B0
  c->r[4]=c->r[31]+0x00000008u; // 801723B4
  c->r[5]=c->r[1]+0x00000030u; // 801723B8
  c->r[6]=0u+0x00000001u; // 801723BC
  c->lr=0x801723C4u; f_80257018(c); // 801723C0
  c->r[4]=c->r[28]|c->r[28]; // 801723C4
  c->r[3]=c->r[30]+0xFFFFC848u; // 801723C8
  c->r[5]=c->r[1]+0x00000030u; // 801723CC
  c->lr=0x801723D4u; f_8018DEB8(c); // 801723D0
  c->r[3]=0u+0x80620000u; // 801723D4
  c->r[5]=c->r[28]|c->r[28]; // 801723D8
  c->r[3]=c->r[3]+0x00007688u; // 801723DC
  c->r[4]=0u+0x0000003Fu; // 801723E0
  c->r[3]=R32(c->r[3]+0x00000014u); // 801723E4
  c->lr=0x801723ECu; f_80038998(c); // 801723E8
  goto L_80172558; // 801723EC
L_801723F0:;
  c->r[3]=0u+0x80550000u; // 801723F0
  c->r[4]=0u+0x0000000Fu; // 801723F4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801723F8
  c->lr=0x80172400u; f_8019C920(c); // 801723FC
  cmps(c,0,(int32_t)c->r[3],0); // 80172400
  c->r[30]=c->r[3]|c->r[3]; // 80172404
  if (crb(c,2)) { goto L_80172558; } // 80172408
  c->r[31]=0u+0x80620000u; // 8017240C
  c->r[4]=0u+0x00000040u; // 80172410
  c->r[31]=c->r[31]+0x00007688u; // 80172414
  c->r[3]=R32(c->r[31]+0x00000014u); // 80172418
  c->lr=0x80172420u; f_8003560C(c); // 8017241C
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 80172420
  c->r[3]=c->r[30]|c->r[30]; // 80172424
  c->lr=0x8017242Cu; f_800679A8(c); // 80172428
  cmps(c,0,(int32_t)c->r[3],0); // 8017242C
  if (crb(c,2)) { goto L_80172484; } // 80172430
  cmpu(c,0,c->r[29],0x000000FFu); // 80172434
  if (!crb(c,2)) { goto L_8017248C; } // 80172438
  c->r[4]=0u+0x803A0000u; // 8017243C
  c->r[3]=0u+0x80550000u; // 80172440
  c->r[4]=c->r[4]+0x0000307Cu; // 80172444
  c->r[5]=0u+0x00000000u; // 80172448
  c->r[3]=c->r[3]+0xFFFFC848u; // 8017244C
  c->r[6]=0u+0x00000000u; // 80172450
  c->r[4]=c->r[4]+0x00000047u; // 80172454
  c->lr=0x8017245Cu; f_8018D3E4(c); // 80172458
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 8017245C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80172460
  c->r[5]=c->r[29]|c->r[29]; // 80172464
  c->r[4]=0u+0x00000040u; // 80172468
  c->lr=0x80172470u; f_80038998(c); // 8017246C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80172470
  c->r[4]=0u+0x00000041u; // 80172474
  c->r[5]=0u+0x00000000u; // 80172478
  c->lr=0x80172480u; f_80038998(c); // 8017247C
  goto L_8017248C; // 80172480
L_80172484:;
  cmpu(c,0,c->r[29],0x000000FFu); // 80172484
  if (crb(c,2)) { goto L_80172558; } // 80172488
L_8017248C:;
  c->r[31]=0u+0x80620000u; // 8017248C
  c->r[4]=0u+0x00000041u; // 80172490
  c->r[31]=c->r[31]+0x00007688u; // 80172494
  c->r[3]=R32(c->r[31]+0x00000014u); // 80172498
  c->lr=0x801724A0u; f_8003560C(c); // 8017249C
  c->r[28]=c->r[3]|c->r[3]; // 801724A0
  c->r[3]=c->r[30]|c->r[30]; // 801724A4
  c->lr=0x801724ACu; f_800679A8(c); // 801724A8
  cmps(c,0,(int32_t)c->r[3],0); // 801724AC
  if (crb(c,2)) { goto L_801724C8; } // 801724B0
  c->r[28]=c->r[28]+0x00000008u; // 801724B4
  cmpu(c,0,c->r[28],0x000000FFu); // 801724B8
  if (crb(c,0)) { goto L_801724F8; } // 801724BC
  c->r[28]=0u+0x000000FFu; // 801724C0
  goto L_801724F8; // 801724C4
L_801724C8:;
  cmpu(c,0,c->r[28],0x00000008u); // 801724C8
  if (!crb(c,0)) { goto L_801724F4; } // 801724CC
  c->r[3]=0u+0x80550000u; // 801724D0
  c->r[4]=c->r[29]|c->r[29]; // 801724D4
  c->r[3]=c->r[3]+0xFFFFC848u; // 801724D8
  c->lr=0x801724E0u; f_8018D694(c); // 801724DC
  c->r[3]=R32(c->r[31]+0x00000014u); // 801724E0
  c->r[4]=0u+0x00000040u; // 801724E4
  c->r[5]=0u+0x000000FFu; // 801724E8
  c->lr=0x801724F0u; f_80038998(c); // 801724EC
  goto L_801724F8; // 801724F0
L_801724F4:;
  c->r[28]=c->r[28]+0xFFFFFFF8u; // 801724F4
L_801724F8:;
  c->r[31]=0u+0x80550000u; // 801724F8
  c->r[4]=c->r[29]|c->r[29]; // 801724FC
  c->r[3]=c->r[31]+0xFFFFC848u; // 80172500
  c->r[5]=rotl(c->r[28],0)&0x000000FFu; // 80172504
  c->lr=0x8017250Cu; f_8018EBA0(c); // 80172508
  c->r[3]=c->r[30]|c->r[30]; // 8017250C
  c->r[4]=0u+0x00000000u; // 80172510
  c->lr=0x80172518u; f_80039840(c); // 80172514
  c->r[4]=0u+0x803A0000u; // 80172518
  c->r[5]=c->r[1]+0x00000030u; // 8017251C
  c->r[4]=c->r[4]+0x0000307Cu; // 80172520
  c->r[6]=0u+0x00000001u; // 80172524
  c->r[4]=c->r[4]+0x00000008u; // 80172528
  c->lr=0x80172530u; f_80257018(c); // 8017252C
  c->r[4]=c->r[29]|c->r[29]; // 80172530
  c->r[3]=c->r[31]+0xFFFFC848u; // 80172534
  c->r[5]=c->r[1]+0x00000030u; // 80172538
  c->lr=0x80172540u; f_8018DEB8(c); // 8017253C
  c->r[3]=0u+0x80620000u; // 80172540
  c->r[5]=c->r[28]|c->r[28]; // 80172544
  c->r[3]=c->r[3]+0x00007688u; // 80172548
  c->r[4]=0u+0x00000041u; // 8017254C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80172550
  c->lr=0x80172558u; f_80038998(c); // 80172554
L_80172558:;
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 80172558
  c->r[3]=0u+0x00000001u; // 8017255C
  c->r[30]=R32(c->r[1]+0x00000068u); // 80172560
  c->r[29]=R32(c->r[1]+0x00000064u); // 80172564
  c->r[28]=R32(c->r[1]+0x00000060u); // 80172568
  c->r[0]=R32(c->r[1]+0x00000074u); // 8017256C
  c->lr=c->r[0]; // 80172570
  c->r[1]=c->r[1]+0x00000070u; // 80172574
  return; // 80172578
}

// fn_8017257C
void f_8017257C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017257C
  c->r[0]=c->lr; // 80172580
  W32(c->r[1]+0x00000094u,c->r[0]); // 80172584
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 80172588
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8017258C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 80172590
  c->r[31]=0u+0x80550000u; // 80172594
  c->r[3]=c->r[31]+0xFFFFCE54u; // 80172598
  W32(c->r[1]+0x00000078u,c->r[30]); // 8017259C
  c->r[30]=c->r[4]|c->r[4]; // 801725A0
  c->lr=0x801725A8u; f_800ACDD4(c); // 801725A4
  cmpu(c,0,c->r[3],0x00000001u); // 801725A8
  if (!crb(c,2)) { goto L_801726B8; } // 801725AC
  c->r[3]=c->r[31]+0xFFFFCE54u; // 801725B0
  c->r[4]=c->r[1]+0x00000020u; // 801725B4
  c->lr=0x801725BCu; f_800FEE64(c); // 801725B8
  c->r[3]=c->r[30]+0x0000002Cu; // 801725BC
  c->r[4]=c->r[1]+0x00000020u; // 801725C0
  c->lr=0x801725C8u; f_800361A0(c); // 801725C4
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801725C8
  c->r[3]=c->r[13]+0xFFFFAB38u; // 801725CC
  {uint32_t ea=c->r[2]+0xFFFFCB50u; c->f[0]=c->ps1[0]=RF32(ea);} // 801725D0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801725D4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801725D8
  c->lr=0x801725E0u; f_80211724(c); // 801725DC
  c->r[4]=0u+0x51EC0000u; // 801725E0
  c->r[31]=0u+0x43300000u; // 801725E4
  c->r[0]=c->r[4]+0xFFFF851Fu; // 801725E8
  W32(c->r[1]+0x00000060u,c->r[31]); // 801725EC
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 801725F0
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[2]=RF64(ea);} // 801725F4
  {uint32_t ea=c->r[2]+0xFFFFCB08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801725F8
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 801725FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)50); // 80172600
  c->r[0]=c->r[3]-c->r[0]; // 80172604
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80172608
  W32(c->r[1]+0x00000064u,c->r[0]); // 8017260C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=RF64(ea);} // 80172610
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80172614
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80172618
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8017261C
  c->lr=0x80172624u; f_80211724(c); // 80172620
  c->r[4]=0u+0x88890000u; // 80172624
  W32(c->r[1]+0x00000068u,c->r[31]); // 80172628
  c->r[0]=c->r[4]+0xFFFF8889u; // 8017262C
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[2]=RF64(ea);} // 80172630
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 80172634
  {uint32_t ea=c->r[2]+0xFFFFCAE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172638
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8017263C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 80172640
  c->r[0]=c->r[3]-c->r[0]; // 80172644
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80172648
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 8017264C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=RF64(ea);} // 80172650
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80172654
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 80172658
  c->lr=0x80172660u; f_80211724(c); // 8017265C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80172660
  if (crb(c,2)) { goto L_80172670; } // 80172664
  {uint32_t ea=c->r[2]+0xFFFFCB44u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172668
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 8017266C
L_80172670:;
  {uint32_t ea=c->r[2]+0xFFFFCB54u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172670
  c->r[3]=c->r[1]+0x00000030u; // 80172674
  c->r[4]=0u+0x00000059u; // 80172678
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 8017267C
  c->lr=0x80172684u; f_80295FBC(c); // 80172680
  c->r[4]=c->r[1]+0x00000008u; // 80172684
  c->r[3]=c->r[1]+0x00000030u; // 80172688
  c->r[5]=c->r[4]|c->r[4]; // 8017268C
  c->lr=0x80172694u; f_80296750(c); // 80172690
  {uint32_t ea=c->r[2]+0xFFFFCB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80172694
  c->r[3]=c->r[30]|c->r[30]; // 80172698
  {uint32_t ea=c->r[2]+0xFFFFCB58u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017269C
  c->r[6]=c->r[1]+0x00000008u; // 801726A0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801726A4
  c->r[7]=c->r[1]+0x00000014u; // 801726A8
  c->r[4]=0u+0x00000008u; // 801726AC
  c->r[5]=0u+0x0000001Cu; // 801726B0
  c->lr=0x801726B8u; f_801F4D44(c); // 801726B4
L_801726B8:;
  c->r[3]=0u+0x00000001u; // 801726B8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 801726BC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 801726C0
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801726C4
  c->r[30]=R32(c->r[1]+0x00000078u); // 801726C8
  c->r[0]=R32(c->r[1]+0x00000094u); // 801726CC
  c->lr=c->r[0]; // 801726D0
  c->r[1]=c->r[1]+0x00000090u; // 801726D4
  return; // 801726D8
}

// fn_801726DC
void f_801726DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801726DC
  c->r[0]=c->lr; // 801726E0
  W32(c->r[1]+0x000002F4u,c->r[0]); // 801726E4
  c->r[11]=c->r[1]+0x000002F0u; // 801726E8
  c->lr=0x801726F0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801726EC
  c->r[0]=R8(c->r[5]+0x00000003u); // 801726F0
  c->r[3]=0u+0x43300000u; // 801726F4
  W32(c->r[1]+0x000002C0u,c->r[3]); // 801726F8
  cmpu(c,0,c->r[0],0x00000008u); // 801726FC
  W32(c->r[1]+0x000002C8u,c->r[3]); // 80172700
  if (crb(c,1)) { goto L_801731B0; } // 80172704
  c->r[3]=0u+0x804B0000u; // 80172708
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017270C
  c->r[3]=c->r[3]+0x000066B8u; // 80172710
  c->r[3]=R32(c->r[3]+c->r[0]); // 80172714
  c->ctr=c->r[3]; // 80172718
  if (true) { switch (c->ctr) { case 0x80172720u: goto L_80172720; case 0x8017279Cu: goto L_8017279C; case 0x801728F0u: goto L_801728F0; case 0x80172B88u: goto L_80172B88; case 0x80172BFCu: goto L_80172BFC; case 0x80172DECu: goto L_80172DEC; case 0x80172E64u: goto L_80172E64; case 0x80172F60u: goto L_80172F60; case 0x80172FA4u: goto L_80172FA4; default: break; } dispatch(c,c->ctr); return; } // 8017271C
L_80172720:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80172720
  c->r[3]=0u+0x0000001Cu; // 80172724
  c->r[4]=0u+0x00000000u; // 80172728
  c->lr=0x80172730u; f_802445B8(c); // 8017272C
  c->r[4]=0u+0x803A0000u; // 80172730
  c->r[3]=0u+0x80550000u; // 80172734
  c->r[4]=c->r[4]+0x0000307Cu; // 80172738
  c->r[5]=0u+0x00000000u; // 8017273C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80172740
  c->r[6]=0u+0x00000000u; // 80172744
  c->r[4]=c->r[4]+0x0000004Bu; // 80172748
  c->lr=0x80172750u; f_8018D3E4(c); // 8017274C
  c->r[0]=c->r[3]+0x00010000u; // 80172750
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80172754
  if (crb(c,2)) { goto L_80172774; } // 80172758
  c->r[6]=0u+0x80620000u; // 8017275C
  c->r[5]=c->r[3]|c->r[3]; // 80172760
  c->r[6]=c->r[6]+0x00007688u; // 80172764
  c->r[4]=0u+0x0000003Bu; // 80172768
  c->r[3]=R32(c->r[6]+0x00000014u); // 8017276C
  c->lr=0x80172774u; f_80038998(c); // 80172770
L_80172774:;
  c->r[27]=0u+0x80620000u; // 80172774
  c->r[4]=0u+0x00000042u; // 80172778
  c->r[27]=c->r[27]+0x00007688u; // 8017277C
  c->r[5]=0u+0x0000000Au; // 80172780
  c->r[3]=R32(c->r[27]+0x00000014u); // 80172784
  c->lr=0x8017278Cu; f_80038998(c); // 80172788
  c->r[3]=R32(c->r[27]+0x00000014u); // 8017278C
  c->r[4]=0u+0x00000082u; // 80172790
  c->lr=0x80172798u; f_80038A08(c); // 80172794
  goto L_801731B0; // 80172798
L_8017279C:;
  c->r[27]=0u+0x80620000u; // 8017279C
  c->r[4]=0u+0x0000003Bu; // 801727A0
  c->r[27]=c->r[27]+0x00007688u; // 801727A4
  c->r[3]=R32(c->r[27]+0x00000014u); // 801727A8
  c->lr=0x801727B0u; f_8003560C(c); // 801727AC
  c->r[0]=c->r[3]+0x00010000u; // 801727B0
  c->r[28]=c->r[3]|c->r[3]; // 801727B4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801727B8
  if (crb(c,2)) { goto L_801731B0; } // 801727BC
  c->r[3]=0u+0x80550000u; // 801727C0
  c->r[4]=0u+0x00000010u; // 801727C4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801727C8
  c->lr=0x801727D0u; f_8019C920(c); // 801727CC
  cmps(c,0,(int32_t)c->r[3],0); // 801727D0
  if (crb(c,2)) { goto L_801731B0; } // 801727D4
  c->r[4]=0u+0x00000000u; // 801727D8
  c->lr=0x801727E0u; f_80039840(c); // 801727DC
  c->r[4]=0u+0x803A0000u; // 801727E0
  c->r[5]=c->r[1]+0x00000290u; // 801727E4
  c->r[4]=c->r[4]+0x0000307Cu; // 801727E8
  c->r[6]=0u+0x00000001u; // 801727EC
  c->r[4]=c->r[4]+0x0000004Fu; // 801727F0
  c->lr=0x801727F8u; f_80257018(c); // 801727F4
  c->r[3]=c->r[1]+0x00000194u; // 801727F8
  c->r[4]=c->r[1]+0x0000017Cu; // 801727FC
  c->r[5]=c->r[1]+0x00000188u; // 80172800
  c->r[6]=c->r[1]+0x00000290u; // 80172804
  c->r[7]=0u+0x00000000u; // 80172808
  c->lr=0x80172810u; f_8002BE64(c); // 8017280C
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80172810
  c->r[4]=c->r[1]+0x00000194u; // 80172814
  {uint32_t ea=c->r[2]+0xFFFFCB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80172818
  c->r[5]=c->r[4]|c->r[4]; // 8017281C
  {uint32_t ea=c->r[1]+0x00000194u; WF32(ea,c->f[1]);} // 80172820
  c->r[3]=c->r[1]+0x00000290u; // 80172824
  {uint32_t ea=c->r[1]+0x00000198u; WF32(ea,c->f[1]);} // 80172828
  {uint32_t ea=c->r[1]+0x0000019Cu; WF32(ea,c->f[0]);} // 8017282C
  c->lr=0x80172834u; f_80296750(c); // 80172830
  c->r[3]=R32(c->r[27]+0x00000014u); // 80172834
  c->r[4]=0u+0x00000042u; // 80172838
  c->lr=0x80172840u; f_8003560C(c); // 8017283C
  W32(c->r[1]+0x000002C4u,c->r[3]); // 80172840
  c->r[4]=c->r[28]|c->r[28]; // 80172844
  {uint32_t ea=c->r[2]+0xFFFFCB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80172848
  c->r[5]=0u+0x80550000u; // 8017284C
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[2]=RF64(ea);} // 80172850
  c->r[31]=c->r[3]|c->r[3]; // 80172854
  {uint32_t ea=c->r[1]+0x000002C0u; c->f[1]=RF64(ea);} // 80172858
  c->r[3]=c->r[5]+0xFFFFC848u; // 8017285C
  {uint32_t ea=c->r[1]+0x00000190u; WF32(ea,c->f[0]);} // 80172860
  c->r[5]=c->r[1]+0x000000ECu; // 80172864
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80172868
  {uint32_t ea=c->r[2]+0xFFFFCB60u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017286C
  c->r[28]=R32(c->r[1]+0x00000190u); // 80172870
  c->r[6]=c->r[1]+0x000000E0u; // 80172874
  c->r[12]=R32(c->r[1]+0x0000017Cu); // 80172878
  c->r[7]=c->r[1]+0x000000D4u; // 8017287C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80172880
  c->r[11]=R32(c->r[1]+0x00000180u); // 80172884
  c->r[10]=R32(c->r[1]+0x00000184u); // 80172888
  c->r[9]=R32(c->r[1]+0x00000194u); // 8017288C
  {uint32_t ea=c->r[1]+0x00000188u; WF32(ea,c->f[0]);} // 80172890
  c->r[8]=R32(c->r[1]+0x00000198u); // 80172894
  {uint32_t ea=c->r[1]+0x0000018Cu; WF32(ea,c->f[0]);} // 80172898
  c->r[30]=R32(c->r[1]+0x00000188u); // 8017289C
  c->r[29]=R32(c->r[1]+0x0000018Cu); // 801728A0
  c->r[0]=R32(c->r[1]+0x0000019Cu); // 801728A4
  W32(c->r[1]+0x000000D4u,c->r[30]); // 801728A8
  W32(c->r[1]+0x000000D8u,c->r[29]); // 801728AC
  W32(c->r[1]+0x000000DCu,c->r[28]); // 801728B0
  W32(c->r[1]+0x000000E0u,c->r[12]); // 801728B4
  W32(c->r[1]+0x000000E4u,c->r[11]); // 801728B8
  W32(c->r[1]+0x000000E8u,c->r[10]); // 801728BC
  W32(c->r[1]+0x000000ECu,c->r[9]); // 801728C0
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801728C4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801728C8
  c->lr=0x801728D0u; f_8018DD04(c); // 801728CC
  cmpu(c,0,c->r[31],0x00000064u); // 801728D0
  if (crb(c,2)) { goto L_801731B0; } // 801728D4
  c->r[3]=R32(c->r[27]+0x00000014u); // 801728D8
  c->r[5]=c->r[31]+0x0000000Au; // 801728DC
  c->r[4]=0u+0x00000042u; // 801728E0
  c->lr=0x801728E8u; f_80038998(c); // 801728E4
  c->r[3]=0u+0x00000002u; // 801728E8
  goto L_801731B4; // 801728EC
L_801728F0:;
  c->r[28]=0u+0x80620000u; // 801728F0
  c->r[4]=0u+0x00000042u; // 801728F4
  c->r[28]=c->r[28]+0x00007688u; // 801728F8
  c->r[3]=R32(c->r[28]+0x00000014u); // 801728FC
  c->lr=0x80172904u; f_8003560C(c); // 80172900
  c->r[4]=0u+0x80550000u; // 80172904
  c->r[31]=c->r[3]|c->r[3]; // 80172908
  c->r[3]=c->r[4]+0xFFFFCE54u; // 8017290C
  c->r[4]=0u+0x00000010u; // 80172910
  c->lr=0x80172918u; f_8019C920(c); // 80172914
  cmps(c,0,(int32_t)c->r[3],0); // 80172918
  c->r[29]=0u+0x00000000u; // 8017291C
  if (crb(c,2)) { goto L_801731B0; } // 80172920
  c->r[4]=0u+0x00000000u; // 80172924
  c->lr=0x8017292Cu; f_80039840(c); // 80172928
  c->r[4]=0u+0x803A0000u; // 8017292C
  c->r[5]=c->r[1]+0x00000260u; // 80172930
  c->r[4]=c->r[4]+0x0000307Cu; // 80172934
  c->r[6]=0u+0x00000001u; // 80172938
  c->r[4]=c->r[4]+0x0000004Fu; // 8017293C
  c->lr=0x80172944u; f_80257018(c); // 80172940
  c->r[3]=c->r[1]+0x00000170u; // 80172944
  c->r[4]=c->r[1]+0x00000158u; // 80172948
  c->r[5]=c->r[1]+0x00000164u; // 8017294C
  c->r[6]=c->r[1]+0x00000260u; // 80172950
  c->r[7]=0u+0x00000000u; // 80172954
  c->lr=0x8017295Cu; f_8002BE64(c); // 80172958
  c->r[3]=R32(c->r[28]+0x00000014u); // 8017295C
  c->r[4]=0u+0x0000003Bu; // 80172960
  c->lr=0x80172968u; f_8003560C(c); // 80172964
  c->r[0]=c->r[3]+0x00010000u; // 80172968
  c->r[27]=c->r[3]|c->r[3]; // 8017296C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80172970
  if (crb(c,2)) { goto L_80172A74; } // 80172974
  cmpu(c,0,c->r[31],0x00000005u); // 80172978
  if (crb(c,1)) { goto L_801729B0; } // 8017297C
  c->r[3]=R32(c->r[28]+0x00000014u); // 80172980
  c->r[4]=0u+0x00000082u; // 80172984
  c->lr=0x8017298Cu; f_8003DCAC(c); // 80172988
  c->r[3]=0u+0x80550000u; // 8017298C
  c->r[4]=c->r[27]|c->r[27]; // 80172990
  c->r[3]=c->r[3]+0xFFFFC848u; // 80172994
  c->lr=0x8017299Cu; f_8018D694(c); // 80172998
  c->r[3]=R32(c->r[28]+0x00000014u); // 8017299C
  c->r[4]=0u+0x0000003Bu; // 801729A0
  c->r[5]=0u+0xFFFFFFFFu; // 801729A4
  c->lr=0x801729ACu; f_80038998(c); // 801729A8
  goto L_80172A74; // 801729AC
L_801729B0:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 801729B0
  c->r[5]=c->r[31]+0xFFFFFFFBu; // 801729B4
  c->r[4]=0u+0x00000042u; // 801729B8
  c->lr=0x801729C0u; f_80038998(c); // 801729BC
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801729C0
  c->r[4]=c->r[1]+0x00000170u; // 801729C4
  {uint32_t ea=c->r[2]+0xFFFFCB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801729C8
  c->r[5]=c->r[4]|c->r[4]; // 801729CC
  {uint32_t ea=c->r[1]+0x00000170u; WF32(ea,c->f[1]);} // 801729D0
  c->r[3]=c->r[1]+0x00000260u; // 801729D4
  {uint32_t ea=c->r[1]+0x00000174u; WF32(ea,c->f[1]);} // 801729D8
  {uint32_t ea=c->r[1]+0x00000178u; WF32(ea,c->f[0]);} // 801729DC
  c->lr=0x801729E4u; f_80296750(c); // 801729E0
  W32(c->r[1]+0x000002CCu,c->r[31]); // 801729E4
  c->r[3]=0u+0x80550000u; // 801729E8
  {uint32_t ea=c->r[2]+0xFFFFCB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801729EC
  c->r[4]=c->r[27]|c->r[27]; // 801729F0
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[2]=RF64(ea);} // 801729F4
  c->r[3]=c->r[3]+0xFFFFC848u; // 801729F8
  {uint32_t ea=c->r[1]+0x000002C8u; c->f[1]=RF64(ea);} // 801729FC
  c->r[5]=c->r[1]+0x000000C8u; // 80172A00
  {uint32_t ea=c->r[1]+0x0000016Cu; WF32(ea,c->f[0]);} // 80172A04
  c->r[6]=c->r[1]+0x000000BCu; // 80172A08
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80172A0C
  {uint32_t ea=c->r[2]+0xFFFFCB60u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172A10
  c->r[28]=R32(c->r[1]+0x0000016Cu); // 80172A14
  c->r[7]=c->r[1]+0x000000B0u; // 80172A18
  c->r[12]=R32(c->r[1]+0x00000158u); // 80172A1C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80172A20
  c->r[11]=R32(c->r[1]+0x0000015Cu); // 80172A24
  c->r[10]=R32(c->r[1]+0x00000160u); // 80172A28
  {uint32_t ea=c->r[1]+0x00000164u; WF32(ea,c->f[0]);} // 80172A2C
  c->r[9]=R32(c->r[1]+0x00000170u); // 80172A30
  {uint32_t ea=c->r[1]+0x00000168u; WF32(ea,c->f[0]);} // 80172A34
  c->r[30]=R32(c->r[1]+0x00000164u); // 80172A38
  c->r[29]=R32(c->r[1]+0x00000168u); // 80172A3C
  c->r[8]=R32(c->r[1]+0x00000174u); // 80172A40
  c->r[0]=R32(c->r[1]+0x00000178u); // 80172A44
  W32(c->r[1]+0x000000B0u,c->r[30]); // 80172A48
  W32(c->r[1]+0x000000B4u,c->r[29]); // 80172A4C
  W32(c->r[1]+0x000000B8u,c->r[28]); // 80172A50
  W32(c->r[1]+0x000000BCu,c->r[12]); // 80172A54
  W32(c->r[1]+0x000000C0u,c->r[11]); // 80172A58
  W32(c->r[1]+0x000000C4u,c->r[10]); // 80172A5C
  W32(c->r[1]+0x000000C8u,c->r[9]); // 80172A60
  W32(c->r[1]+0x000000CCu,c->r[8]); // 80172A64
  W32(c->r[1]+0x000000D0u,c->r[0]); // 80172A68
  c->lr=0x80172A70u; f_8018DD04(c); // 80172A6C
  c->r[29]=0u+0x00000001u; // 80172A70
L_80172A74:;
  c->r[28]=0u+0x80620000u; // 80172A74
  c->r[4]=0u+0x0000004Cu; // 80172A78
  c->r[28]=c->r[28]+0x00007688u; // 80172A7C
  c->r[3]=R32(c->r[28]+0x00000014u); // 80172A80
  c->lr=0x80172A88u; f_8003560C(c); // 80172A84
  c->r[0]=c->r[3]+0x00010000u; // 80172A88
  c->r[27]=c->r[3]|c->r[3]; // 80172A8C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80172A90
  if (crb(c,2)) { goto L_80172B78; } // 80172A94
  cmpu(c,0,c->r[31],0x00000005u); // 80172A98
  if (crb(c,1)) { goto L_80172AC4; } // 80172A9C
  c->r[3]=0u+0x80550000u; // 80172AA0
  c->r[4]=c->r[27]|c->r[27]; // 80172AA4
  c->r[3]=c->r[3]+0xFFFFC848u; // 80172AA8
  c->lr=0x80172AB0u; f_8018D694(c); // 80172AAC
  c->r[3]=R32(c->r[28]+0x00000014u); // 80172AB0
  c->r[4]=0u+0x0000004Cu; // 80172AB4
  c->r[5]=0u+0xFFFFFFFFu; // 80172AB8
  c->lr=0x80172AC0u; f_80038998(c); // 80172ABC
  goto L_80172B78; // 80172AC0
L_80172AC4:;
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80172AC4
  c->r[4]=c->r[1]+0x00000170u; // 80172AC8
  {uint32_t ea=c->r[2]+0xFFFFCB64u; c->f[1]=c->ps1[1]=RF32(ea);} // 80172ACC
  c->r[5]=c->r[4]|c->r[4]; // 80172AD0
  {uint32_t ea=c->r[2]+0xFFFFCB44u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172AD4
  c->r[3]=c->r[1]+0x00000260u; // 80172AD8
  {uint32_t ea=c->r[1]+0x00000170u; WF32(ea,c->f[2]);} // 80172ADC
  {uint32_t ea=c->r[1]+0x00000174u; WF32(ea,c->f[1]);} // 80172AE0
  {uint32_t ea=c->r[1]+0x00000178u; WF32(ea,c->f[0]);} // 80172AE4
  c->lr=0x80172AECu; f_80296750(c); // 80172AE8
  W32(c->r[1]+0x000002C4u,c->r[31]); // 80172AEC
  c->r[3]=0u+0x80550000u; // 80172AF0
  c->r[12]=R32(c->r[1]+0x00000158u); // 80172AF4
  c->r[4]=c->r[27]|c->r[27]; // 80172AF8
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[1]=RF64(ea);} // 80172AFC
  c->r[3]=c->r[3]+0xFFFFC848u; // 80172B00
  {uint32_t ea=c->r[1]+0x000002C0u; c->f[0]=RF64(ea);} // 80172B04
  c->r[5]=c->r[1]+0x000000A4u; // 80172B08
  c->r[11]=R32(c->r[1]+0x0000015Cu); // 80172B0C
  c->r[6]=c->r[1]+0x00000098u; // 80172B10
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80172B14
  {uint32_t ea=c->r[2]+0xFFFFCB60u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172B18
  c->r[10]=R32(c->r[1]+0x00000160u); // 80172B1C
  c->r[7]=c->r[1]+0x0000008Cu; // 80172B20
  c->r[9]=R32(c->r[1]+0x00000170u); // 80172B24
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80172B28
  c->r[8]=R32(c->r[1]+0x00000174u); // 80172B2C
  c->r[0]=R32(c->r[1]+0x00000178u); // 80172B30
  {uint32_t ea=c->r[1]+0x00000164u; WF32(ea,c->f[0]);} // 80172B34
  {uint32_t ea=c->r[1]+0x00000168u; WF32(ea,c->f[0]);} // 80172B38
  c->r[30]=R32(c->r[1]+0x00000164u); // 80172B3C
  {uint32_t ea=c->r[1]+0x0000016Cu; WF32(ea,c->f[0]);} // 80172B40
  c->r[29]=R32(c->r[1]+0x00000168u); // 80172B44
  c->r[28]=R32(c->r[1]+0x0000016Cu); // 80172B48
  W32(c->r[1]+0x0000008Cu,c->r[30]); // 80172B4C
  W32(c->r[1]+0x00000090u,c->r[29]); // 80172B50
  W32(c->r[1]+0x00000094u,c->r[28]); // 80172B54
  W32(c->r[1]+0x00000098u,c->r[12]); // 80172B58
  W32(c->r[1]+0x0000009Cu,c->r[11]); // 80172B5C
  W32(c->r[1]+0x000000A0u,c->r[10]); // 80172B60
  W32(c->r[1]+0x000000A4u,c->r[9]); // 80172B64
  W32(c->r[1]+0x000000A8u,c->r[8]); // 80172B68
  W32(c->r[1]+0x000000ACu,c->r[0]); // 80172B6C
  c->lr=0x80172B74u; f_8018DD04(c); // 80172B70
  c->r[29]=0u+0x00000001u; // 80172B74
L_80172B78:;
  cmps(c,0,(int32_t)c->r[29],0); // 80172B78
  if (crb(c,2)) { goto L_801731B0; } // 80172B7C
  c->r[3]=0u+0x00000002u; // 80172B80
  goto L_801731B4; // 80172B84
L_80172B88:;
  c->r[28]=0u+0x803A0000u; // 80172B88
  c->r[29]=0u+0x80550000u; // 80172B8C
  c->r[28]=c->r[28]+0x0000307Cu; // 80172B90
  c->r[5]=0u+0x00000000u; // 80172B94
  c->r[3]=c->r[29]+0xFFFFC848u; // 80172B98
  c->r[6]=0u+0x00000000u; // 80172B9C
  c->r[4]=c->r[28]+0x00000055u; // 80172BA0
  c->lr=0x80172BA8u; f_8018D3E4(c); // 80172BA4
  c->r[0]=c->r[3]+0x00010000u; // 80172BA8
  c->r[27]=c->r[3]|c->r[3]; // 80172BAC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80172BB0
  if (crb(c,2)) { goto L_801731B0; } // 80172BB4
  c->r[3]=0u+0x80550000u; // 80172BB8
  c->r[4]=0u+0x0000005Cu; // 80172BBC
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80172BC0
  c->lr=0x80172BC8u; f_8019C920(c); // 80172BC4
  cmps(c,0,(int32_t)c->r[3],0); // 80172BC8
  if (crb(c,2)) { goto L_801731B0; } // 80172BCC
  c->r[4]=0u+0x00000000u; // 80172BD0
  c->lr=0x80172BD8u; f_80039840(c); // 80172BD4
  c->r[4]=c->r[28]+0x0000004Fu; // 80172BD8
  c->r[5]=c->r[1]+0x00000230u; // 80172BDC
  c->r[6]=0u+0x00000001u; // 80172BE0
  c->lr=0x80172BE8u; f_80257018(c); // 80172BE4
  c->r[4]=c->r[27]|c->r[27]; // 80172BE8
  c->r[3]=c->r[29]+0xFFFFC848u; // 80172BEC
  c->r[5]=c->r[1]+0x00000230u; // 80172BF0
  c->lr=0x80172BF8u; f_8018DEB8(c); // 80172BF4
  goto L_801731B0; // 80172BF8
L_80172BFC:;
  c->r[28]=0u+0x80620000u; // 80172BFC
  c->r[4]=0u+0x00000038u; // 80172C00
  c->r[28]=c->r[28]+0x00007688u; // 80172C04
  c->r[3]=R32(c->r[28]+0x00000014u); // 80172C08
  c->lr=0x80172C10u; f_8003560C(c); // 80172C0C
  c->r[27]=c->r[3]|c->r[3]; // 80172C10
  c->r[3]=R32(c->r[28]+0x00000014u); // 80172C14
  c->r[4]=0u+0x0000003Fu; // 80172C18
  c->lr=0x80172C20u; f_80038AF4(c); // 80172C1C
  cmpu(c,0,c->r[3],0x00000001u); // 80172C20
  if (!crb(c,2)) { goto L_80172DBC; } // 80172C24
  c->r[0]=c->r[27]+0x00010000u; // 80172C28
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80172C2C
  if (!crb(c,2)) { goto L_80172C84; } // 80172C30
  c->r[4]=0u+0x803A0000u; // 80172C34
  c->r[3]=0u+0x80550000u; // 80172C38
  c->r[4]=c->r[4]+0x0000307Cu; // 80172C3C
  c->r[5]=0u+0x00000000u; // 80172C40
  c->r[3]=c->r[3]+0xFFFFC848u; // 80172C44
  c->r[6]=0u+0x00000000u; // 80172C48
  c->r[4]=c->r[4]+0x00000059u; // 80172C4C
  c->lr=0x80172C54u; f_8018D3E4(c); // 80172C50
  c->r[0]=c->r[3]+0x00010000u; // 80172C54
  c->r[27]=c->r[3]|c->r[3]; // 80172C58
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80172C5C
  if (crb(c,2)) { goto L_80172C84; } // 80172C60
  c->r[3]=R32(c->r[28]+0x00000014u); // 80172C64
  c->r[5]=c->r[27]|c->r[27]; // 80172C68
  c->r[4]=0u+0x00000038u; // 80172C6C
  c->lr=0x80172C74u; f_80038998(c); // 80172C70
  c->r[3]=R32(c->r[28]+0x00000014u); // 80172C74
  c->r[4]=0u+0x00000043u; // 80172C78
  c->r[5]=0u+0x00000000u; // 80172C7C
  c->lr=0x80172C84u; f_80038998(c); // 80172C80
L_80172C84:;
  c->r[0]=c->r[27]+0x00010000u; // 80172C84
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80172C88
  if (crb(c,2)) { goto L_801731B0; } // 80172C8C
  c->r[3]=0u+0x80620000u; // 80172C90
  c->r[4]=0u+0x00000043u; // 80172C94
  c->r[3]=c->r[3]+0x00007688u; // 80172C98
  c->r[3]=R32(c->r[3]+0x00000014u); // 80172C9C
  c->lr=0x80172CA4u; f_8003560C(c); // 80172CA0
  c->r[28]=c->r[3]+0x00000037u; // 80172CA4
  cmpu(c,0,c->r[28],0x0000C350u); // 80172CA8
  if (crb(c,0)) { goto L_80172CB8; } // 80172CAC
  c->r[3]=0u+0x00010000u; // 80172CB0
  c->r[28]=c->r[3]+0xFFFFC350u; // 80172CB4
L_80172CB8:;
  c->r[3]=0u+0x80620000u; // 80172CB8
  c->r[5]=c->r[28]|c->r[28]; // 80172CBC
  c->r[3]=c->r[3]+0x00007688u; // 80172CC0
  c->r[4]=0u+0x00000043u; // 80172CC4
  c->r[3]=R32(c->r[3]+0x00000014u); // 80172CC8
  c->lr=0x80172CD0u; f_80038998(c); // 80172CCC
  c->r[3]=0u+0x80550000u; // 80172CD0
  c->r[4]=0u+0x00000010u; // 80172CD4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80172CD8
  c->lr=0x80172CE0u; f_8019C920(c); // 80172CDC
  cmps(c,0,(int32_t)c->r[3],0); // 80172CE0
  if (crb(c,2)) { goto L_801731B0; } // 80172CE4
  c->r[4]=0u+0x00000000u; // 80172CE8
  c->lr=0x80172CF0u; f_80039840(c); // 80172CEC
  c->r[4]=0u+0x803A0000u; // 80172CF0
  c->r[5]=c->r[1]+0x00000200u; // 80172CF4
  c->r[4]=c->r[4]+0x0000307Cu; // 80172CF8
  c->r[6]=0u+0x00000001u; // 80172CFC
  c->r[4]=c->r[4]+0x0000004Fu; // 80172D00
  c->lr=0x80172D08u; f_80257018(c); // 80172D04
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80172D08
  c->r[4]=c->r[1]+0x0000014Cu; // 80172D0C
  {uint32_t ea=c->r[2]+0xFFFFCB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80172D10
  c->r[5]=c->r[4]|c->r[4]; // 80172D14
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[1]);} // 80172D18
  c->r[3]=c->r[1]+0x00000200u; // 80172D1C
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[1]);} // 80172D20
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 80172D24
  c->lr=0x80172D2Cu; f_80296750(c); // 80172D28
  W32(c->r[1]+0x000002CCu,c->r[28]); // 80172D2C
  c->r[6]=0u+0x803A0000u; // 80172D30
  {uint32_t ea=c->r[6]+0x00003058u; c->r[12]=R32(ea); c->r[6]=ea;} // 80172D34
  c->r[3]=0u+0x80550000u; // 80172D38
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[1]=RF64(ea);} // 80172D3C
  c->r[4]=c->r[27]|c->r[27]; // 80172D40
  {uint32_t ea=c->r[1]+0x000002C8u; c->f[0]=RF64(ea);} // 80172D44
  c->r[3]=c->r[3]+0xFFFFC848u; // 80172D48
  c->r[9]=R32(c->r[1]+0x0000014Cu); // 80172D4C
  c->r[5]=c->r[1]+0x00000080u; // 80172D50
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80172D54
  {uint32_t ea=c->r[2]+0xFFFFCB68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172D58
  c->r[11]=R32(c->r[6]+0x00000004u); // 80172D5C
  c->r[7]=c->r[1]+0x00000068u; // 80172D60
  c->r[10]=R32(c->r[6]+0x00000008u); // 80172D64
  c->r[6]=c->r[1]+0x00000074u; // 80172D68
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80172D6C
  c->r[8]=R32(c->r[1]+0x00000150u); // 80172D70
  c->r[0]=R32(c->r[1]+0x00000154u); // 80172D74
  W32(c->r[1]+0x00000074u,c->r[12]); // 80172D78
  {uint32_t ea=c->r[1]+0x00000140u; WF32(ea,c->f[0]);} // 80172D7C
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 80172D80
  c->r[29]=R32(c->r[1]+0x00000140u); // 80172D84
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 80172D88
  c->r[28]=R32(c->r[1]+0x00000144u); // 80172D8C
  c->r[12]=R32(c->r[1]+0x00000148u); // 80172D90
  W32(c->r[1]+0x00000068u,c->r[29]); // 80172D94
  W32(c->r[1]+0x0000006Cu,c->r[28]); // 80172D98
  W32(c->r[1]+0x00000070u,c->r[12]); // 80172D9C
  W32(c->r[1]+0x00000078u,c->r[11]); // 80172DA0
  W32(c->r[1]+0x0000007Cu,c->r[10]); // 80172DA4
  W32(c->r[1]+0x00000080u,c->r[9]); // 80172DA8
  W32(c->r[1]+0x00000084u,c->r[8]); // 80172DAC
  W32(c->r[1]+0x00000088u,c->r[0]); // 80172DB0
  c->lr=0x80172DB8u; f_8018DD04(c); // 80172DB4
  goto L_801731B0; // 80172DB8
L_80172DBC:;
  c->r[0]=c->r[27]+0x00010000u; // 80172DBC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80172DC0
  if (crb(c,2)) { goto L_801731B0; } // 80172DC4
  c->r[3]=0u+0x80550000u; // 80172DC8
  c->r[4]=c->r[27]|c->r[27]; // 80172DCC
  c->r[3]=c->r[3]+0xFFFFC848u; // 80172DD0
  c->lr=0x80172DD8u; f_8018D738(c); // 80172DD4
  c->r[3]=R32(c->r[28]+0x00000014u); // 80172DD8
  c->r[4]=0u+0x00000038u; // 80172DDC
  c->r[5]=0u+0xFFFFFFFFu; // 80172DE0
  c->lr=0x80172DE8u; f_80038998(c); // 80172DE4
  goto L_801731B0; // 80172DE8
L_80172DEC:;
  c->r[3]=0u+0x80620000u; // 80172DEC
  c->r[4]=0u+0x00000038u; // 80172DF0
  c->r[3]=c->r[3]+0x00007688u; // 80172DF4
  c->r[3]=R32(c->r[3]+0x00000014u); // 80172DF8
  c->lr=0x80172E00u; f_8003560C(c); // 80172DFC
  c->r[0]=c->r[3]+0x00010000u; // 80172E00
  c->r[4]=c->r[3]|c->r[3]; // 80172E04
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80172E08
  if (crb(c,2)) { goto L_80172E1C; } // 80172E0C
  c->r[3]=0u+0x80550000u; // 80172E10
  c->r[3]=c->r[3]+0xFFFFC848u; // 80172E14
  c->lr=0x80172E1Cu; f_8018D694(c); // 80172E18
L_80172E1C:;
  c->r[4]=0u+0x803A0000u; // 80172E1C
  c->r[3]=0u+0x80550000u; // 80172E20
  c->r[4]=c->r[4]+0x0000307Cu; // 80172E24
  c->r[5]=0u+0x00000000u; // 80172E28
  c->r[3]=c->r[3]+0xFFFFC848u; // 80172E2C
  c->r[6]=0u+0x00000000u; // 80172E30
  c->r[4]=c->r[4]+0x00000059u; // 80172E34
  c->lr=0x80172E3Cu; f_8018D3E4(c); // 80172E38
  c->r[0]=c->r[3]+0x00010000u; // 80172E3C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80172E40
  if (crb(c,2)) { goto L_801731B0; } // 80172E44
  c->r[6]=0u+0x80620000u; // 80172E48
  c->r[5]=c->r[3]|c->r[3]; // 80172E4C
  c->r[6]=c->r[6]+0x00007688u; // 80172E50
  c->r[4]=0u+0x00000038u; // 80172E54
  c->r[3]=R32(c->r[6]+0x00000014u); // 80172E58
  c->lr=0x80172E60u; f_80038998(c); // 80172E5C
  goto L_801731B0; // 80172E60
L_80172E64:;
  c->r[28]=0u+0x803A0000u; // 80172E64
  c->r[29]=0u+0x80550000u; // 80172E68
  c->r[28]=c->r[28]+0x0000307Cu; // 80172E6C
  c->r[5]=0u+0x00000000u; // 80172E70
  c->r[3]=c->r[29]+0xFFFFC848u; // 80172E74
  c->r[6]=0u+0x00000000u; // 80172E78
  c->r[4]=c->r[28]+0x0000005Du; // 80172E7C
  c->lr=0x80172E84u; f_8018D3E4(c); // 80172E80
  c->r[0]=c->r[3]+0x00010000u; // 80172E84
  c->r[27]=c->r[3]|c->r[3]; // 80172E88
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80172E8C
  if (crb(c,2)) { goto L_801731B0; } // 80172E90
  c->r[3]=0u+0x80550000u; // 80172E94
  c->r[4]=0u+0x00000010u; // 80172E98
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80172E9C
  c->lr=0x80172EA4u; f_8019C920(c); // 80172EA0
  cmps(c,0,(int32_t)c->r[3],0); // 80172EA4
  if (crb(c,2)) { goto L_801731B0; } // 80172EA8
  c->r[4]=0u+0x00000000u; // 80172EAC
  c->lr=0x80172EB4u; f_80039840(c); // 80172EB0
  c->r[4]=c->r[28]+0x0000004Fu; // 80172EB4
  c->r[5]=c->r[1]+0x000001D0u; // 80172EB8
  c->r[6]=0u+0x00000001u; // 80172EBC
  c->lr=0x80172EC4u; f_80257018(c); // 80172EC0
  c->r[3]=c->r[1]+0x00000134u; // 80172EC4
  c->r[4]=c->r[1]+0x00000128u; // 80172EC8
  c->r[5]=c->r[1]+0x0000011Cu; // 80172ECC
  c->r[6]=c->r[1]+0x000001D0u; // 80172ED0
  c->r[7]=0u+0x00000000u; // 80172ED4
  c->lr=0x80172EDCu; f_8002BE64(c); // 80172ED8
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80172EDC
  c->r[4]=c->r[1]+0x00000134u; // 80172EE0
  {uint32_t ea=c->r[2]+0xFFFFCB6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80172EE4
  c->r[5]=c->r[4]|c->r[4]; // 80172EE8
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[1]);} // 80172EEC
  c->r[3]=c->r[1]+0x000001D0u; // 80172EF0
  {uint32_t ea=c->r[1]+0x00000138u; WF32(ea,c->f[1]);} // 80172EF4
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 80172EF8
  c->lr=0x80172F00u; f_80296750(c); // 80172EFC
  c->r[11]=R32(c->r[1]+0x00000128u); // 80172F00
  c->r[4]=c->r[27]|c->r[27]; // 80172F04
  c->r[10]=R32(c->r[1]+0x0000012Cu); // 80172F08
  c->r[3]=c->r[29]+0xFFFFC848u; // 80172F0C
  c->r[9]=R32(c->r[1]+0x00000130u); // 80172F10
  c->r[5]=c->r[1]+0x0000005Cu; // 80172F14
  c->r[8]=R32(c->r[1]+0x00000134u); // 80172F18
  c->r[6]=c->r[1]+0x00000050u; // 80172F1C
  c->r[7]=R32(c->r[1]+0x00000138u); // 80172F20
  c->r[0]=R32(c->r[1]+0x0000013Cu); // 80172F24
  W32(c->r[1]+0x00000050u,c->r[11]); // 80172F28
  W32(c->r[1]+0x00000054u,c->r[10]); // 80172F2C
  W32(c->r[1]+0x00000058u,c->r[9]); // 80172F30
  W32(c->r[1]+0x0000005Cu,c->r[8]); // 80172F34
  W32(c->r[1]+0x00000060u,c->r[7]); // 80172F38
  W32(c->r[1]+0x00000064u,c->r[0]); // 80172F3C
  c->lr=0x80172F44u; f_8018DBD0(c); // 80172F40
  c->r[3]=0u+0x80620000u; // 80172F44
  c->r[5]=c->r[27]|c->r[27]; // 80172F48
  c->r[3]=c->r[3]+0x00007688u; // 80172F4C
  c->r[4]=0u+0x0000004Cu; // 80172F50
  c->r[3]=R32(c->r[3]+0x00000014u); // 80172F54
  c->lr=0x80172F5Cu; f_80038998(c); // 80172F58
  goto L_801731B0; // 80172F5C
L_80172F60:;
  c->r[28]=0u+0x80620000u; // 80172F60
  c->r[4]=0u+0x0000004Cu; // 80172F64
  c->r[28]=c->r[28]+0x00007688u; // 80172F68
  c->r[3]=R32(c->r[28]+0x00000014u); // 80172F6C
  c->lr=0x80172F74u; f_8003560C(c); // 80172F70
  c->r[0]=c->r[3]+0x00010000u; // 80172F74
  c->r[4]=c->r[3]|c->r[3]; // 80172F78
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80172F7C
  if (crb(c,2)) { goto L_801731B0; } // 80172F80
  c->r[3]=0u+0x80550000u; // 80172F84
  c->r[3]=c->r[3]+0xFFFFC848u; // 80172F88
  c->lr=0x80172F90u; f_8018D694(c); // 80172F8C
  c->r[3]=R32(c->r[28]+0x00000014u); // 80172F90
  c->r[4]=0u+0x0000004Cu; // 80172F94
  c->r[5]=0u+0xFFFFFFFFu; // 80172F98
  c->lr=0x80172FA0u; f_80038998(c); // 80172F9C
  goto L_801731B0; // 80172FA0
L_80172FA4:;
  c->r[3]=0u+0x80550000u; // 80172FA4
  c->r[4]=0u+0x00000010u; // 80172FA8
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80172FAC
  c->lr=0x80172FB4u; f_8019C920(c); // 80172FB0
  cmps(c,0,(int32_t)c->r[3],0); // 80172FB4
  c->r[30]=c->r[3]|c->r[3]; // 80172FB8
  if (crb(c,2)) { goto L_801731B0; } // 80172FBC
  c->r[29]=0u+0x80620000u; // 80172FC0
  c->r[4]=0u+0x00000042u; // 80172FC4
  c->r[29]=c->r[29]+0x00007688u; // 80172FC8
  c->r[3]=R32(c->r[29]+0x00000014u); // 80172FCC
  c->lr=0x80172FD4u; f_8003560C(c); // 80172FD0
  c->r[28]=c->r[3]|c->r[3]; // 80172FD4
  c->r[3]=R32(c->r[29]+0x00000014u); // 80172FD8
  c->r[4]=0u+0x0000003Bu; // 80172FDC
  c->lr=0x80172FE4u; f_8003560C(c); // 80172FE0
  c->r[27]=c->r[3]|c->r[3]; // 80172FE4
  c->r[3]=c->r[30]|c->r[30]; // 80172FE8
  c->r[4]=0u+0x00000000u; // 80172FEC
  c->lr=0x80172FF4u; f_80039840(c); // 80172FF0
  c->r[4]=0u+0x803A0000u; // 80172FF4
  c->r[5]=c->r[1]+0x000001A0u; // 80172FF8
  c->r[4]=c->r[4]+0x0000307Cu; // 80172FFC
  c->r[6]=0u+0x00000001u; // 80173000
  c->r[4]=c->r[4]+0x0000004Fu; // 80173004
  c->lr=0x8017300Cu; f_80257018(c); // 80173008
  c->r[3]=c->r[1]+0x00000110u; // 8017300C
  c->r[4]=c->r[1]+0x000000F8u; // 80173010
  c->r[5]=c->r[1]+0x00000104u; // 80173014
  c->r[6]=c->r[1]+0x000001A0u; // 80173018
  c->r[7]=0u+0x00000000u; // 8017301C
  c->lr=0x80173024u; f_8002BE64(c); // 80173020
  c->r[0]=c->r[27]+0x00010000u; // 80173024
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80173028
  if (crb(c,2)) { goto L_801730E0; } // 8017302C
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80173030
  c->r[4]=c->r[1]+0x00000110u; // 80173034
  {uint32_t ea=c->r[2]+0xFFFFCB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80173038
  c->r[5]=c->r[4]|c->r[4]; // 8017303C
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[1]);} // 80173040
  c->r[3]=c->r[1]+0x000001A0u; // 80173044
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[1]);} // 80173048
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[0]);} // 8017304C
  c->lr=0x80173054u; f_80296750(c); // 80173050
  W32(c->r[1]+0x000002C4u,c->r[28]); // 80173054
  c->r[3]=0u+0x80550000u; // 80173058
  {uint32_t ea=c->r[2]+0xFFFFCB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017305C
  c->r[4]=c->r[27]|c->r[27]; // 80173060
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[2]=RF64(ea);} // 80173064
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173068
  {uint32_t ea=c->r[1]+0x000002C0u; c->f[1]=RF64(ea);} // 8017306C
  c->r[5]=c->r[1]+0x00000044u; // 80173070
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 80173074
  c->r[6]=c->r[1]+0x00000038u; // 80173078
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8017307C
  {uint32_t ea=c->r[2]+0xFFFFCB60u; c->f[0]=c->ps1[0]=RF32(ea);} // 80173080
  c->r[29]=R32(c->r[1]+0x0000010Cu); // 80173084
  c->r[7]=c->r[1]+0x0000002Cu; // 80173088
  c->r[12]=R32(c->r[1]+0x000000F8u); // 8017308C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80173090
  c->r[11]=R32(c->r[1]+0x000000FCu); // 80173094
  c->r[10]=R32(c->r[1]+0x00000100u); // 80173098
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 8017309C
  c->r[9]=R32(c->r[1]+0x00000110u); // 801730A0
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 801730A4
  c->r[31]=R32(c->r[1]+0x00000104u); // 801730A8
  c->r[30]=R32(c->r[1]+0x00000108u); // 801730AC
  c->r[8]=R32(c->r[1]+0x00000114u); // 801730B0
  c->r[0]=R32(c->r[1]+0x00000118u); // 801730B4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801730B8
  W32(c->r[1]+0x00000030u,c->r[30]); // 801730BC
  W32(c->r[1]+0x00000034u,c->r[29]); // 801730C0
  W32(c->r[1]+0x00000038u,c->r[12]); // 801730C4
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 801730C8
  W32(c->r[1]+0x00000040u,c->r[10]); // 801730CC
  W32(c->r[1]+0x00000044u,c->r[9]); // 801730D0
  W32(c->r[1]+0x00000048u,c->r[8]); // 801730D4
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801730D8
  c->lr=0x801730E0u; f_8018DD04(c); // 801730DC
L_801730E0:;
  c->r[3]=0u+0x80620000u; // 801730E0
  c->r[4]=0u+0x0000004Cu; // 801730E4
  c->r[3]=c->r[3]+0x00007688u; // 801730E8
  c->r[3]=R32(c->r[3]+0x00000014u); // 801730EC
  c->lr=0x801730F4u; f_8003560C(c); // 801730F0
  c->r[0]=c->r[3]+0x00010000u; // 801730F4
  c->r[27]=c->r[3]|c->r[3]; // 801730F8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801730FC
  if (crb(c,2)) { goto L_801731B0; } // 80173100
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80173104
  c->r[4]=c->r[1]+0x00000110u; // 80173108
  {uint32_t ea=c->r[2]+0xFFFFCB6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017310C
  c->r[5]=c->r[4]|c->r[4]; // 80173110
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[1]);} // 80173114
  c->r[3]=c->r[1]+0x000001A0u; // 80173118
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[1]);} // 8017311C
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[0]);} // 80173120
  c->lr=0x80173128u; f_80296750(c); // 80173124
  W32(c->r[1]+0x000002CCu,c->r[28]); // 80173128
  c->r[3]=0u+0x80550000u; // 8017312C
  c->r[12]=R32(c->r[1]+0x000000F8u); // 80173130
  c->r[4]=c->r[27]|c->r[27]; // 80173134
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[1]=RF64(ea);} // 80173138
  c->r[3]=c->r[3]+0xFFFFC848u; // 8017313C
  {uint32_t ea=c->r[1]+0x000002C8u; c->f[0]=RF64(ea);} // 80173140
  c->r[5]=c->r[1]+0x00000020u; // 80173144
  c->r[11]=R32(c->r[1]+0x000000FCu); // 80173148
  c->r[6]=c->r[1]+0x00000014u; // 8017314C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80173150
  {uint32_t ea=c->r[2]+0xFFFFCB60u; c->f[0]=c->ps1[0]=RF32(ea);} // 80173154
  c->r[10]=R32(c->r[1]+0x00000100u); // 80173158
  c->r[7]=c->r[1]+0x00000008u; // 8017315C
  c->r[9]=R32(c->r[1]+0x00000110u); // 80173160
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80173164
  c->r[8]=R32(c->r[1]+0x00000114u); // 80173168
  c->r[0]=R32(c->r[1]+0x00000118u); // 8017316C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 80173170
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 80173174
  c->r[29]=R32(c->r[1]+0x00000104u); // 80173178
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 8017317C
  c->r[30]=R32(c->r[1]+0x00000108u); // 80173180
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 80173184
  W32(c->r[1]+0x00000008u,c->r[29]); // 80173188
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 8017318C
  W32(c->r[1]+0x00000010u,c->r[31]); // 80173190
  W32(c->r[1]+0x00000014u,c->r[12]); // 80173194
  W32(c->r[1]+0x00000018u,c->r[11]); // 80173198
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 8017319C
  W32(c->r[1]+0x00000020u,c->r[9]); // 801731A0
  W32(c->r[1]+0x00000024u,c->r[8]); // 801731A4
  W32(c->r[1]+0x00000028u,c->r[0]); // 801731A8
  c->lr=0x801731B0u; f_8018DD04(c); // 801731AC
L_801731B0:;
  c->r[3]=0u+0x00000001u; // 801731B0
L_801731B4:;
  c->r[11]=c->r[1]+0x000002F0u; // 801731B4
  c->lr=0x801731BCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801731B8
  c->r[0]=R32(c->r[1]+0x000002F4u); // 801731BC
  c->lr=c->r[0]; // 801731C0
  c->r[1]=c->r[1]+0x000002F0u; // 801731C4
  return; // 801731C8
}

// fn_801731CC
void f_801731CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801731CC
  c->r[0]=c->lr; // 801731D0
  c->r[3]=0u+0x80550000u; // 801731D4
  c->r[4]=0u+0x0000000Fu; // 801731D8
  W32(c->r[1]+0x00000094u,c->r[0]); // 801731DC
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801731E0
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 801731E4
  W32(c->r[1]+0x00000088u,c->r[30]); // 801731E8
  W32(c->r[1]+0x00000084u,c->r[29]); // 801731EC
  c->lr=0x801731F4u; f_8019C920(c); // 801731F0
  cmps(c,0,(int32_t)c->r[3],0); // 801731F4
  if (crb(c,2)) { goto L_80173374; } // 801731F8
  c->r[4]=0u+0x00000000u; // 801731FC
  c->lr=0x80173204u; f_80039840(c); // 80173200
  c->r[31]=0u+0x803A0000u; // 80173204
  c->r[5]=c->r[1]+0x00000030u; // 80173208
  c->r[31]=c->r[31]+0x0000307Cu; // 8017320C
  c->r[6]=0u+0x00000001u; // 80173210
  c->r[4]=c->r[31]+0x00000008u; // 80173214
  c->lr=0x8017321Cu; f_80257018(c); // 80173218
  c->r[3]=c->r[13]+0xFFFFAB38u; // 8017321C
  c->lr=0x80173224u; f_80211724(c); // 80173220
  c->r[29]=0u+0x29E40000u; // 80173224
  c->r[30]=0u+0x43300000u; // 80173228
  c->r[0]=c->r[29]+0x0000129Fu; // 8017322C
  W32(c->r[1]+0x00000060u,c->r[30]); // 80173230
  c->r[4]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 80173234
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80173238
  {uint32_t ea=c->r[2]+0xFFFFCB70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017323C
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[2]=RF64(ea);} // 80173240
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80173244
  c->r[0]=c->r[3]-c->r[4]; // 80173248
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8017324C
  c->r[0]=c->r[0]+c->r[4]; // 80173250
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80173254
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)110); // 80173258
  c->r[0]=c->r[3]-c->r[0]; // 8017325C
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80173260
  W32(c->r[1]+0x00000064u,c->r[0]); // 80173264
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=RF64(ea);} // 80173268
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8017326C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80173270
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80173274
  c->lr=0x8017327Cu; f_80211724(c); // 80173278
  c->r[0]=c->r[29]+0x0000129Fu; // 8017327C
  W32(c->r[1]+0x00000068u,c->r[30]); // 80173280
  c->r[4]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 80173284
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80173288
  {uint32_t ea=c->r[2]+0xFFFFCB70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017328C
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[2]=RF64(ea);} // 80173290
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80173294
  c->r[0]=c->r[3]-c->r[4]; // 80173298
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8017329C
  c->r[0]=c->r[0]+c->r[4]; // 801732A0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801732A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)110); // 801732A8
  c->r[0]=c->r[3]-c->r[0]; // 801732AC
  c->r[3]=c->r[13]+0xFFFFAB38u; // 801732B0
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801732B4
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=RF64(ea);} // 801732B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801732BC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801732C0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801732C4
  c->lr=0x801732CCu; f_80211724(c); // 801732C8
  c->r[4]=0u+0x88890000u; // 801732CC
  W32(c->r[1]+0x00000070u,c->r[30]); // 801732D0
  c->r[0]=c->r[4]+0xFFFF8889u; // 801732D4
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801732D8
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 801732DC
  {uint32_t ea=c->r[2]+0xFFFFCAC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801732E0
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[2]=RF64(ea);} // 801732E4
  c->r[30]=0u+0x80550000u; // 801732E8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801732EC
  c->r[4]=c->r[31]+0x00000061u; // 801732F0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801732F4
  c->r[5]=0u+0x00000000u; // 801732F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 801732FC
  c->r[6]=0u+0x00000000u; // 80173300
  c->r[0]=c->r[3]-c->r[0]; // 80173304
  c->r[3]=c->r[30]+0xFFFFC848u; // 80173308
  W32(c->r[1]+0x00000074u,c->r[0]); // 8017330C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=RF64(ea);} // 80173310
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80173314
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80173318
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8017331C
  c->lr=0x80173324u; f_8018D3E4(c); // 80173320
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 80173324
  cmpu(c,0,c->r[4],0x000000FFu); // 80173328
  if (crb(c,2)) { goto L_80173374; } // 8017332C
  c->r[5]=0u+0x803A0000u; // 80173330
  {uint32_t ea=c->r[5]+0x00003058u; c->r[11]=R32(ea); c->r[5]=ea;} // 80173334
  c->r[8]=R32(c->r[1]+0x00000020u); // 80173338
  c->r[3]=c->r[30]+0xFFFFC848u; // 8017333C
  c->r[7]=R32(c->r[1]+0x00000024u); // 80173340
  c->r[6]=c->r[1]+0x00000008u; // 80173344
  c->r[10]=R32(c->r[5]+0x00000004u); // 80173348
  c->r[9]=R32(c->r[5]+0x00000008u); // 8017334C
  c->r[5]=c->r[1]+0x00000014u; // 80173350
  c->r[0]=R32(c->r[1]+0x00000028u); // 80173354
  W32(c->r[1]+0x00000008u,c->r[11]); // 80173358
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 8017335C
  W32(c->r[1]+0x00000010u,c->r[9]); // 80173360
  W32(c->r[1]+0x00000014u,c->r[8]); // 80173364
  W32(c->r[1]+0x00000018u,c->r[7]); // 80173368
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017336C
  c->lr=0x80173374u; f_8018DBD0(c); // 80173370
L_80173374:;
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80173374
  c->r[3]=0u+0x00000001u; // 80173378
  c->r[30]=R32(c->r[1]+0x00000088u); // 8017337C
  c->r[29]=R32(c->r[1]+0x00000084u); // 80173380
  c->r[0]=R32(c->r[1]+0x00000094u); // 80173384
  c->lr=c->r[0]; // 80173388
  c->r[1]=c->r[1]+0x00000090u; // 8017338C
  return; // 80173390
}

// fn_80173394
void f_80173394(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173394
  c->r[0]=c->lr; // 80173398
  c->r[3]=0u+0x80620000u; // 8017339C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801733A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801733A4
  c->r[26]=c->r[4]|c->r[4]; // 801733A8
  c->r[27]=c->r[5]|c->r[5]; // 801733AC
  c->r[29]=0u+0x00000006u; // 801733B0
  c->r[31]=c->r[3]+0x00007688u; // 801733B4
  c->r[30]=0u+0x80550000u; // 801733B8
L_801733BC:;
  c->r[3]=c->r[30]+0xFFFFCE54u; // 801733BC
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 801733C0
  c->lr=0x801733C8u; f_8019C920(c); // 801733C4
  cmpu(c,0,c->r[3],c->r[26]); // 801733C8
  if (!crb(c,2)) { goto L_8017341C; } // 801733CC
  c->r[0]=R8(c->r[27]+0x00000003u); // 801733D0
  c->r[28]=c->r[29]+0x0000000Du; // 801733D4
  cmps(c,0,(int32_t)c->r[0],0); // 801733D8
  if (!crb(c,2)) { goto L_80173400; } // 801733DC
  c->r[3]=R32(c->r[31]+0x00000014u); // 801733E0
  c->r[4]=0u+0x0000000Eu; // 801733E4
  c->lr=0x801733ECu; f_8003560C(c); // 801733E8
  c->r[5]=c->r[3]|c->r[3]; // 801733EC
  c->r[3]=R32(c->r[31]+0x00000014u); // 801733F0
  c->r[4]=c->r[28]|c->r[28]; // 801733F4
  c->lr=0x801733FCu; f_80038998(c); // 801733F8
  goto L_8017341C; // 801733FC
L_80173400:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80173400
  c->r[4]=c->r[28]|c->r[28]; // 80173404
  c->lr=0x8017340Cu; f_8003560C(c); // 80173408
  c->r[5]=c->r[3]|c->r[3]; // 8017340C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80173410
  c->r[4]=0u+0x00000012u; // 80173414
  c->lr=0x8017341Cu; f_80038998(c); // 80173418
L_8017341C:;
  c->r[29]=c->r[29]+0x00000001u; // 8017341C
  cmps(c,0,(int32_t)c->r[29],9); // 80173420
  if (!crb(c,1)) { IRQCHK(c); goto L_801733BC; } // 80173424
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80173428
  c->r[3]=0u+0x00000001u; // 8017342C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80173430
  c->lr=c->r[0]; // 80173434
  c->r[1]=c->r[1]+0x00000020u; // 80173438
  return; // 8017343C
}

// fn_80173440
void f_80173440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173440
  c->r[0]=c->lr; // 80173444
  W32(c->r[1]+0x00000044u,c->r[0]); // 80173448
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8017344C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80173450
  c->r[11]=c->r[1]+0x00000030u; // 80173454
  c->lr=0x8017345Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80173458
  c->r[0]=R8(c->r[5]+0x00000003u); // 8017345C
  cmps(c,0,(int32_t)c->r[0],0); // 80173460
  if (!crb(c,2)) { goto L_80173474; } // 80173464
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[31]=c->ps1[31]=RF32(ea);} // 80173468
  c->r[28]=0u+0x00000000u; // 8017346C
  goto L_8017347C; // 80173470
L_80173474:;
  {uint32_t ea=c->r[2]+0xFFFFCB1Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80173474
  c->r[28]=0u+0x00000001u; // 80173478
L_8017347C:;
  c->r[27]=0u+0x00000006u; // 8017347C
  c->r[31]=0u+0x80550000u; // 80173480
  c->r[30]=0u+0x805D0000u; // 80173484
L_80173488:;
  c->r[3]=c->r[31]+0xFFFFCE54u; // 80173488
  c->r[4]=rotl(c->r[27],0)&0x000000FFu; // 8017348C
  c->lr=0x80173494u; f_8019C920(c); // 80173490
  cmps(c,0,(int32_t)c->r[3],0); // 80173494
  c->r[29]=c->r[3]|c->r[3]; // 80173498
  if (crb(c,2)) { goto L_801734FC; } // 8017349C
  c->r[3]=c->r[30]+0x00003F6Cu; // 801734A0
  c->lr=0x801734A8u; f_80037AF0(c); // 801734A4
  cmpu(c,0,c->r[3],c->r[29]); // 801734A8
  if (crb(c,2)) { goto L_801734FC; } // 801734AC
  c->f[1]=c->f[31]; // 801734B0
  c->r[3]=c->r[29]|c->r[29]; // 801734B4
  c->r[4]=0u+0x00000000u; // 801734B8
  c->lr=0x801734C0u; f_80038A80(c); // 801734BC
  c->r[3]=c->r[29]|c->r[29]; // 801734C0
  c->lr=0x801734C8u; f_80040264(c); // 801734C4
  cmpu(c,0,c->r[3],0x00000001u); // 801734C8
  if (!crb(c,2)) { goto L_801734E4; } // 801734CC
  c->r[3]=c->r[29]|c->r[29]; // 801734D0
  c->r[4]=c->r[1]+0x0000000Cu; // 801734D4
  c->r[5]=0u+0x00000001u; // 801734D8
  c->lr=0x801734E0u; f_8007C6C8(c); // 801734DC
  goto L_801734F4; // 801734E0
L_801734E4:;
  c->r[3]=c->r[29]|c->r[29]; // 801734E4
  c->r[4]=c->r[1]+0x0000000Cu; // 801734E8
  c->r[5]=0u+0x00000000u; // 801734EC
  c->lr=0x801734F4u; f_8007C6C8(c); // 801734F0
L_801734F4:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801734F4
  W8(c->r[3]+0x0000001Cu,c->r[28]); // 801734F8
L_801734FC:;
  c->r[27]=c->r[27]+0x00000001u; // 801734FC
  cmps(c,0,(int32_t)c->r[27],9); // 80173500
  if (!crb(c,1)) { IRQCHK(c); goto L_80173488; } // 80173504
  c->r[27]=0u+0x00000045u; // 80173508
  c->r[30]=0u+0x80550000u; // 8017350C
  c->r[31]=0u+0x805D0000u; // 80173510
L_80173514:;
  c->r[3]=c->r[30]+0xFFFFCE54u; // 80173514
  c->r[4]=rotl(c->r[27],0)&0x000000FFu; // 80173518
  c->lr=0x80173520u; f_8019C920(c); // 8017351C
  cmps(c,0,(int32_t)c->r[3],0); // 80173520
  c->r[29]=c->r[3]|c->r[3]; // 80173524
  if (crb(c,2)) { goto L_80173568; } // 80173528
  c->r[3]=c->r[31]+0x00003F6Cu; // 8017352C
  c->lr=0x80173534u; f_80037AF0(c); // 80173530
  cmpu(c,0,c->r[3],c->r[29]); // 80173534
  if (crb(c,2)) { goto L_80173568; } // 80173538
  c->f[1]=c->f[31]; // 8017353C
  W8(c->r[29]+0x0000006Fu,c->r[28]); // 80173540
  c->r[3]=c->r[29]|c->r[29]; // 80173544
  c->r[4]=0u+0x00000000u; // 80173548
  c->lr=0x80173550u; f_80038A80(c); // 8017354C
  c->r[3]=c->r[29]|c->r[29]; // 80173550
  c->r[4]=c->r[1]+0x00000008u; // 80173554
  c->r[5]=0u+0x00000000u; // 80173558
  c->lr=0x80173560u; f_8007C6C8(c); // 8017355C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80173560
  W8(c->r[3]+0x0000001Cu,c->r[28]); // 80173564
L_80173568:;
  c->r[27]=c->r[27]+0x00000001u; // 80173568
  cmps(c,0,(int32_t)c->r[27],72); // 8017356C
  if (!crb(c,1)) { IRQCHK(c); goto L_80173514; } // 80173570
  c->r[3]=0u+0x00000001u; // 80173574
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80173578
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8017357C
  c->r[11]=c->r[1]+0x00000030u; // 80173580
  c->lr=0x80173588u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80173584
  c->r[0]=R32(c->r[1]+0x00000044u); // 80173588
  c->lr=c->r[0]; // 8017358C
  c->r[1]=c->r[1]+0x00000040u; // 80173590
  return; // 80173594
}

// fn_80173598
void f_80173598(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173598
  c->r[0]=c->lr; // 8017359C
  W32(c->r[1]+0x00000094u,c->r[0]); // 801735A0
  c->r[11]=c->r[1]+0x00000090u; // 801735A4
  c->lr=0x801735ACu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801735A8
  c->r[3]=0u+0x80550000u; // 801735AC
  c->r[4]=R8(c->r[5]+0x00000003u); // 801735B0
  c->r[29]=c->r[5]|c->r[5]; // 801735B4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801735B8
  c->lr=0x801735C0u; f_8019C920(c); // 801735BC
  cmps(c,0,(int32_t)c->r[3],0); // 801735C0
  c->r[31]=c->r[3]|c->r[3]; // 801735C4
  if (crb(c,2)) { goto L_80173900; } // 801735C8
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 801735CC
  cmps(c,0,(int32_t)c->r[0],0); // 801735D0
  if (!crb(c,2)) { goto L_80173670; } // 801735D4
  c->r[28]=0u+0x80620000u; // 801735D8
  c->r[4]=R8(c->r[29]+0x00000003u); // 801735DC
  c->r[28]=c->r[28]+0x00007688u; // 801735E0
  c->r[3]=R32(c->r[28]+0x00000014u); // 801735E4
  c->r[4]=c->r[4]+0x0000005Au; // 801735E8
  c->lr=0x801735F0u; f_8003560C(c); // 801735EC
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801735F0
  c->r[4]=c->r[3]|c->r[3]; // 801735F4
  if (crb(c,2)) { goto L_80173620; } // 801735F8
  c->r[3]=0u+0x80550000u; // 801735FC
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173600
  c->lr=0x80173608u; f_8018D694(c); // 80173604
  c->r[6]=R8(c->r[29]+0x00000003u); // 80173608
  c->r[4]=0u+0x00010000u; // 8017360C
  c->r[3]=R32(c->r[28]+0x00000014u); // 80173610
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 80173614
  c->r[4]=c->r[6]+0x0000005Au; // 80173618
  c->lr=0x80173620u; f_80038998(c); // 8017361C
L_80173620:;
  c->r[28]=0u+0x80620000u; // 80173620
  c->r[4]=R8(c->r[29]+0x00000003u); // 80173624
  c->r[28]=c->r[28]+0x00007688u; // 80173628
  c->r[3]=R32(c->r[28]+0x00000014u); // 8017362C
  c->r[4]=c->r[4]+0x0000005Eu; // 80173630
  c->lr=0x80173638u; f_8003560C(c); // 80173634
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173638
  c->r[4]=c->r[3]|c->r[3]; // 8017363C
  if (crb(c,2)) { goto L_80173668; } // 80173640
  c->r[3]=0u+0x80550000u; // 80173644
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173648
  c->lr=0x80173650u; f_8018D694(c); // 8017364C
  c->r[6]=R8(c->r[29]+0x00000003u); // 80173650
  c->r[4]=0u+0x00010000u; // 80173654
  c->r[3]=R32(c->r[28]+0x00000014u); // 80173658
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 8017365C
  c->r[4]=c->r[6]+0x0000005Eu; // 80173660
  c->lr=0x80173668u; f_80038998(c); // 80173664
L_80173668:;
  c->r[3]=0u+0x00000001u; // 80173668
  goto L_80173904; // 8017366C
L_80173670:;
  c->r[4]=c->r[1]+0x00000008u; // 80173670
  c->r[5]=0u+0x00000000u; // 80173674
  c->lr=0x8017367Cu; f_8007C6C8(c); // 80173678
  c->r[3]=R32(c->r[1]+0x00000008u); // 8017367C
  c->r[27]=0u+0x00000000u; // 80173680
  c->r[30]=0u+0x00000000u; // 80173684
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 80173688
  cmps(c,0,(int32_t)c->r[0],0); // 8017368C
  if (crb(c,2)) { goto L_801736F4; } // 80173690
  c->r[0]=R32(c->r[3]+0x00000030u); // 80173694
  cmps(c,0,(int32_t)c->r[0],120); // 80173698
  if (crb(c,2)) { goto L_801736F0; } // 8017369C
  if (!crb(c,0)) { goto L_801736BC; } // 801736A0
  cmps(c,0,(int32_t)c->r[0],113); // 801736A4
  if (crb(c,2)) { goto L_801736DC; } // 801736A8
  if (!crb(c,0)) { goto L_801736F4; } // 801736AC
  cmps(c,0,(int32_t)c->r[0],17); // 801736B0
  if (crb(c,2)) { goto L_801736E4; } // 801736B4
  goto L_801736F4; // 801736B8
L_801736BC:;
  cmps(c,0,(int32_t)c->r[0],128); // 801736BC
  if (!crb(c,0)) { goto L_801736D0; } // 801736C0
  cmps(c,0,(int32_t)c->r[0],122); // 801736C4
  if (!crb(c,0)) { goto L_801736F4; } // 801736C8
  goto L_801736E4; // 801736CC
L_801736D0:;
  cmps(c,0,(int32_t)c->r[0],130); // 801736D0
  if (!crb(c,0)) { goto L_801736F4; } // 801736D4
  goto L_801736F0; // 801736D8
L_801736DC:;
  c->r[27]=0u+0x00000001u; // 801736DC
  goto L_801736F4; // 801736E0
L_801736E4:;
  c->r[30]=0u+0x00000001u; // 801736E4
  c->r[27]=0u+0x00000001u; // 801736E8
  goto L_801736F4; // 801736EC
L_801736F0:;
  c->r[30]=0u+0x00000001u; // 801736F0
L_801736F4:;
  c->r[28]=0u+0x80620000u; // 801736F4
  c->r[4]=R8(c->r[29]+0x00000003u); // 801736F8
  c->r[28]=c->r[28]+0x00007688u; // 801736FC
  c->r[3]=R32(c->r[28]+0x00000014u); // 80173700
  c->r[4]=c->r[4]+0x0000005Au; // 80173704
  c->lr=0x8017370Cu; f_8003560C(c); // 80173708
  cmpu(c,0,c->r[27],0x00000001u); // 8017370C
  c->r[27]=c->r[3]|c->r[3]; // 80173710
  if (!crb(c,2)) { goto L_801737AC; } // 80173714
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173718
  if (!crb(c,2)) { goto L_80173758; } // 8017371C
  c->r[4]=0u+0x803A0000u; // 80173720
  c->r[3]=0u+0x80550000u; // 80173724
  c->r[4]=c->r[4]+0x0000307Cu; // 80173728
  c->r[5]=0u+0x00000000u; // 8017372C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173730
  c->r[6]=0u+0x00000000u; // 80173734
  c->r[4]=c->r[4]+0x00000065u; // 80173738
  c->lr=0x80173740u; f_8018D3E4(c); // 8017373C
  c->r[4]=R8(c->r[29]+0x00000003u); // 80173740
  c->r[27]=c->r[3]|c->r[3]; // 80173744
  c->r[3]=R32(c->r[28]+0x00000014u); // 80173748
  c->r[5]=c->r[27]|c->r[27]; // 8017374C
  c->r[4]=c->r[4]+0x0000005Au; // 80173750
  c->lr=0x80173758u; f_80038998(c); // 80173754
L_80173758:;
  cmpu(c,0,c->r[27],0x0000FFFFu); // 80173758
  if (crb(c,2)) { goto L_801737DC; } // 8017375C
  c->r[6]=R32(c->r[31]+0x00000060u); // 80173760
  c->r[3]=0u+0x80550000u; // 80173764
  c->r[0]=R32(c->r[31]+0x00000064u); // 80173768
  c->r[4]=c->r[27]|c->r[27]; // 8017376C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173770
  c->r[5]=c->r[1]+0x00000030u; // 80173774
  W32(c->r[1]+0x00000024u,c->r[6]); // 80173778
  c->r[6]=c->r[1]+0x00000024u; // 8017377C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80173780
  c->r[0]=R32(c->r[31]+0x00000068u); // 80173784
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80173788
  c->r[7]=R32(c->r[31]+0x0000002Cu); // 8017378C
  c->r[0]=R32(c->r[31]+0x00000030u); // 80173790
  W32(c->r[1]+0x00000030u,c->r[7]); // 80173794
  W32(c->r[1]+0x00000034u,c->r[0]); // 80173798
  c->r[0]=R32(c->r[31]+0x00000034u); // 8017379C
  W32(c->r[1]+0x00000038u,c->r[0]); // 801737A0
  c->lr=0x801737A8u; f_8018DBD0(c); // 801737A4
  goto L_801737DC; // 801737A8
L_801737AC:;
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801737AC
  if (crb(c,2)) { goto L_801737DC; } // 801737B0
  c->r[3]=0u+0x80550000u; // 801737B4
  c->r[4]=c->r[27]|c->r[27]; // 801737B8
  c->r[3]=c->r[3]+0xFFFFC848u; // 801737BC
  c->lr=0x801737C4u; f_8018D738(c); // 801737C0
  c->r[6]=R8(c->r[29]+0x00000003u); // 801737C4
  c->r[4]=0u+0x00010000u; // 801737C8
  c->r[3]=R32(c->r[28]+0x00000014u); // 801737CC
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801737D0
  c->r[4]=c->r[6]+0x0000005Au; // 801737D4
  c->lr=0x801737DCu; f_80038998(c); // 801737D8
L_801737DC:;
  c->r[28]=0u+0x80620000u; // 801737DC
  c->r[4]=R8(c->r[29]+0x00000003u); // 801737E0
  c->r[28]=c->r[28]+0x00007688u; // 801737E4
  c->r[3]=R32(c->r[28]+0x00000014u); // 801737E8
  c->r[4]=c->r[4]+0x0000005Eu; // 801737EC
  c->lr=0x801737F4u; f_8003560C(c); // 801737F0
  cmpu(c,0,c->r[30],0x00000001u); // 801737F4
  c->r[30]=c->r[3]|c->r[3]; // 801737F8
  if (!crb(c,2)) { goto L_801738D0; } // 801737FC
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173800
  if (!crb(c,2)) { goto L_80173840; } // 80173804
  c->r[4]=0u+0x803A0000u; // 80173808
  c->r[3]=0u+0x80550000u; // 8017380C
  c->r[4]=c->r[4]+0x0000307Cu; // 80173810
  c->r[5]=0u+0x00000000u; // 80173814
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173818
  c->r[6]=0u+0x00000000u; // 8017381C
  c->r[4]=c->r[4]+0x00000069u; // 80173820
  c->lr=0x80173828u; f_8018D3E4(c); // 80173824
  c->r[4]=R8(c->r[29]+0x00000003u); // 80173828
  c->r[30]=c->r[3]|c->r[3]; // 8017382C
  c->r[3]=R32(c->r[28]+0x00000014u); // 80173830
  c->r[5]=c->r[30]|c->r[30]; // 80173834
  c->r[4]=c->r[4]+0x0000005Eu; // 80173838
  c->lr=0x80173840u; f_80038998(c); // 8017383C
L_80173840:;
  cmpu(c,0,c->r[30],0x0000FFFFu); // 80173840
  if (crb(c,2)) { goto L_80173900; } // 80173844
  c->r[3]=c->r[31]|c->r[31]; // 80173848
  c->r[4]=0u+0x00000000u; // 8017384C
  c->lr=0x80173854u; f_80039840(c); // 80173850
  c->r[4]=0u+0x803A0000u; // 80173854
  c->r[5]=c->r[1]+0x00000048u; // 80173858
  c->r[4]=c->r[4]+0x0000307Cu; // 8017385C
  c->r[6]=0u+0x00000001u; // 80173860
  c->r[4]=c->r[4]+0x0000006Du; // 80173864
  c->lr=0x8017386Cu; f_80257018(c); // 80173868
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017386C
  c->r[3]=0u+0x80550000u; // 80173870
  {uint32_t ea=c->r[1]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 80173874
  c->r[4]=c->r[30]|c->r[30]; // 80173878
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017387C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173880
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 80173884
  c->r[5]=c->r[1]+0x00000018u; // 80173888
  c->r[0]=R32(c->r[31]+0x00000060u); // 8017388C
  c->r[6]=c->r[1]+0x0000000Cu; // 80173890
  c->r[9]=R32(c->r[31]+0x00000064u); // 80173894
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 80173898
  c->r[8]=R32(c->r[1]+0x0000003Cu); // 8017389C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801738A0
  c->r[7]=R32(c->r[1]+0x00000040u); // 801738A4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801738A8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801738AC
  W32(c->r[1]+0x00000010u,c->r[9]); // 801738B0
  c->r[9]=R32(c->r[31]+0x00000068u); // 801738B4
  W32(c->r[1]+0x00000014u,c->r[9]); // 801738B8
  W32(c->r[1]+0x00000018u,c->r[8]); // 801738BC
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 801738C0
  W32(c->r[1]+0x00000020u,c->r[0]); // 801738C4
  c->lr=0x801738CCu; f_8018DBD0(c); // 801738C8
  goto L_80173900; // 801738CC
L_801738D0:;
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801738D0
  if (crb(c,2)) { goto L_80173900; } // 801738D4
  c->r[3]=0u+0x80550000u; // 801738D8
  c->r[4]=c->r[30]|c->r[30]; // 801738DC
  c->r[3]=c->r[3]+0xFFFFC848u; // 801738E0
  c->lr=0x801738E8u; f_8018D738(c); // 801738E4
  c->r[6]=R8(c->r[29]+0x00000003u); // 801738E8
  c->r[4]=0u+0x00010000u; // 801738EC
  c->r[3]=R32(c->r[28]+0x00000014u); // 801738F0
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801738F4
  c->r[4]=c->r[6]+0x0000005Eu; // 801738F8
  c->lr=0x80173900u; f_80038998(c); // 801738FC
L_80173900:;
  c->r[3]=0u+0x00000001u; // 80173900
L_80173904:;
  c->r[11]=c->r[1]+0x00000090u; // 80173904
  c->lr=0x8017390Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80173908
  c->r[0]=R32(c->r[1]+0x00000094u); // 8017390C
  c->lr=c->r[0]; // 80173910
  c->r[1]=c->r[1]+0x00000090u; // 80173914
  return; // 80173918
}

// fn_8017391C
void f_8017391C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017391C
  c->r[0]=c->lr; // 80173920
  c->r[3]=0u+0x80550000u; // 80173924
  W32(c->r[1]+0x00000044u,c->r[0]); // 80173928
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8017392C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80173930
  c->r[31]=c->r[5]|c->r[5]; // 80173934
  W32(c->r[1]+0x00000038u,c->r[30]); // 80173938
  c->r[30]=c->r[4]|c->r[4]; // 8017393C
  c->r[4]=0u+0x0000000Fu; // 80173940
  c->lr=0x80173948u; f_8019C920(c); // 80173944
  cmps(c,0,(int32_t)c->r[3],0); // 80173948
  if (crb(c,2)) { goto L_801739D4; } // 8017394C
  c->r[3]=c->r[30]|c->r[30]; // 80173950
  c->r[4]=0u+0x00000000u; // 80173954
  c->lr=0x8017395Cu; f_80039840(c); // 80173958
  c->r[4]=0u+0x803A0000u; // 8017395C
  c->r[5]=c->r[1]+0x00000008u; // 80173960
  c->r[4]=c->r[4]+0x0000307Cu; // 80173964
  c->r[6]=0u+0x00000001u; // 80173968
  c->r[4]=c->r[4]+0x00000008u; // 8017396C
  c->lr=0x80173974u; f_80257018(c); // 80173970
  c->r[0]=R8(c->r[31]+0x00000003u); // 80173974
  cmps(c,0,(int32_t)c->r[0],1); // 80173978
  if (crb(c,2)) { goto L_801739C4; } // 8017397C
  if (!crb(c,0)) { goto L_801739D4; } // 80173980
  cmps(c,0,(int32_t)c->r[0],0); // 80173984
  if (!crb(c,0)) { goto L_80173990; } // 80173988
  goto L_801739D4; // 8017398C
L_80173990:;
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80173990
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80173994
  {uint32_t ea=c->r[30]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80173998
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8017399C
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801739A0
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[0]);} // 801739A4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801739A8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 801739AC
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[0]);} // 801739B0
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801739B4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801739B8
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 801739BC
  goto L_801739D4; // 801739C0
L_801739C4:;
  c->r[3]=c->r[1]+0x00000008u; // 801739C4
  c->r[4]=c->r[30]+0x00000074u; // 801739C8
  c->r[5]=c->r[30]+0x0000002Cu; // 801739CC
  c->lr=0x801739D4u; f_80296750(c); // 801739D0
L_801739D4:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801739D4
  c->r[3]=0u+0x00000001u; // 801739D8
  c->r[30]=R32(c->r[1]+0x00000038u); // 801739DC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801739E0
  c->lr=c->r[0]; // 801739E4
  c->r[1]=c->r[1]+0x00000040u; // 801739E8
  return; // 801739EC
}

// fn_801739F0
void f_801739F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801739F0
  c->r[0]=c->lr; // 801739F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801739F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801739FC
  c->r[31]=0u+0x80620000u; // 80173A00
  c->r[31]=c->r[31]+0x00007688u; // 80173A04
  W32(c->r[1]+0x00000008u,c->r[30]); // 80173A08
  c->r[30]=0u+0x00000000u; // 80173A0C
L_80173A10:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80173A10
  c->r[4]=c->r[30]|c->r[30]; // 80173A14
  c->lr=0x80173A1Cu; f_80173A44(c); // 80173A18
  c->r[30]=c->r[30]+0x00000001u; // 80173A1C
  cmps(c,0,(int32_t)c->r[30],80); // 80173A20
  if (crb(c,0)) { IRQCHK(c); goto L_80173A10; } // 80173A24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173A28
  c->r[3]=0u+0x00000001u; // 80173A2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80173A30
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173A34
  c->lr=c->r[0]; // 80173A38
  c->r[1]=c->r[1]+0x00000010u; // 80173A3C
  return; // 80173A40
}

// fn_80173A44
void f_80173A44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173A44
  c->r[0]=c->lr; // 80173A48
  cmps(c,0,(int32_t)c->r[4],0); // 80173A4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173A50
  c->r[0]=0u+0x00000000u; // 80173A54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173A58
  c->r[31]=c->r[4]|c->r[4]; // 80173A5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80173A60
  c->r[30]=c->r[3]|c->r[3]; // 80173A64
  if (crb(c,0)) { goto L_80173A78; } // 80173A68
  cmps(c,0,(int32_t)c->r[4],160); // 80173A6C
  if (!crb(c,0)) { goto L_80173A78; } // 80173A70
  c->r[0]=0u+0x00000001u; // 80173A74
L_80173A78:;
  cmps(c,0,(int32_t)c->r[0],0); // 80173A78
  if (!crb(c,2)) { goto L_80173A9C; } // 80173A7C
  c->r[3]=0u+0x804B0000u; // 80173A80
  c->r[5]=0u+0x804B0000u; // 80173A84
  c->r[3]=c->r[3]+0x0000690Cu; // 80173A88
  c->r[4]=0u+0x000004CFu; // 80173A8C
  c->r[5]=c->r[5]+0x000068D4u; // 80173A90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173A94
  c->lr=0x80173A9Cu; f_803732A8(c); // 80173A98
L_80173A9C:;
  c->r[3]=sraw(c,c->r[31],5); // 80173A9C
  c->r[0]=rotl(c->r[31],0)&0x0000001Fu; // 80173AA0
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80173AA4
  c->r[5]=c->r[30]+c->r[4]; // 80173AA8
  c->r[3]=0u+0x00000001u; // 80173AAC
  c->r[4]=R32(c->r[5]+0x00000034u); // 80173AB0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80173AB4
  c->r[0]=c->r[4]|c->r[0]; // 80173AB8
  W32(c->r[5]+0x00000034u,c->r[0]); // 80173ABC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173AC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80173AC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173AC8
  c->lr=c->r[0]; // 80173ACC
  c->r[1]=c->r[1]+0x00000010u; // 80173AD0
  return; // 80173AD4
}

// fn_80173AD8
void f_80173AD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173AD8
  c->r[0]=c->lr; // 80173ADC
  c->r[3]=0u+0x80550000u; // 80173AE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173AE4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80173AE8
  c->r[4]=R8(c->r[5]+0x00000003u); // 80173AEC
  c->lr=0x80173AF4u; f_8019C920(c); // 80173AF0
  cmps(c,0,(int32_t)c->r[3],0); // 80173AF4
  if (crb(c,2)) { goto L_80173B0C; } // 80173AF8
  c->r[12]=R32(c->r[3]+0x000000B0u); // 80173AFC
  c->r[12]=R32(c->r[12]+0x00000050u); // 80173B00
  c->ctr=c->r[12]; // 80173B04
  if (true) { c->lr=0x80173B0Cu; dispatch(c,c->ctr); } // 80173B08
L_80173B0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173B0C
  c->r[3]=0u+0x00000001u; // 80173B10
  c->lr=c->r[0]; // 80173B14
  c->r[1]=c->r[1]+0x00000010u; // 80173B18
  return; // 80173B1C
}

// fn_80173B20
void f_80173B20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173B20
  c->r[0]=c->lr; // 80173B24
  c->r[3]=0u+0x805D0000u; // 80173B28
  c->r[4]=0u+0x00000001u; // 80173B2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173B30
  c->r[3]=c->r[3]+0x00003F6Cu; // 80173B34
  c->lr=0x80173B3Cu; f_8020C998(c); // 80173B38
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173B3C
  c->r[3]=0u+0x00000001u; // 80173B40
  c->lr=c->r[0]; // 80173B44
  c->r[1]=c->r[1]+0x00000010u; // 80173B48
  return; // 80173B4C
}

// fn_80173B50
void f_80173B50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173B50
  c->r[0]=c->lr; // 80173B54
  c->r[7]=0u+0x804B0000u; // 80173B58
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173B5C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80173B60
  c->r[7]=c->r[7]+0x000066DCu; // 80173B64
  c->r[4]=c->r[5]|c->r[5]; // 80173B68
  c->r[5]=c->r[6]|c->r[6]; // 80173B6C
  c->r[12]=c->r[7]+c->r[0]; // 80173B70
  c->lr=0x80173B78u; f_802BA00C(c); // 80173B74
  c->r[0]=c->r[0]|0x00000000u; // 80173B78
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173B7C
  c->lr=c->r[0]; // 80173B80
  c->r[1]=c->r[1]+0x00000010u; // 80173B84
  return; // 80173B88
}

// fn_80173B8C
void f_80173B8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173B8C
  c->r[0]=c->lr; // 80173B90
  c->r[3]=0u+0x80550000u; // 80173B94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173B98
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80173B9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173BA0
  c->r[4]=R8(c->r[5]+0x00000003u); // 80173BA4
  c->lr=0x80173BACu; f_8019C920(c); // 80173BA8
  cmps(c,0,(int32_t)c->r[3],0); // 80173BAC
  c->r[31]=c->r[3]|c->r[3]; // 80173BB0
  if (crb(c,2)) { goto L_80173BE0; } // 80173BB4
  c->lr=0x80173BBCu; f_8010FDA8(c); // 80173BB8
  cmpu(c,0,c->r[3],0x00000001u); // 80173BBC
  if (!crb(c,2)) { goto L_80173BE0; } // 80173BC0
  c->r[3]=c->r[31]|c->r[31]; // 80173BC4
  c->lr=0x80173BCCu; f_800376F0(c); // 80173BC8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80173BCC
  cmps(c,0,(int32_t)c->r[0],100); // 80173BD0
  if (crb(c,2)) { goto L_80173BE0; } // 80173BD4
  c->r[3]=0u+0x00000001u; // 80173BD8
  goto L_80173BE4; // 80173BDC
L_80173BE0:;
  c->r[3]=0u+0x00000000u; // 80173BE0
L_80173BE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173BE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173BE8
  c->lr=c->r[0]; // 80173BEC
  c->r[1]=c->r[1]+0x00000010u; // 80173BF0
  return; // 80173BF4
}

// fn_80173BF8
void f_80173BF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173BF8
  c->r[0]=c->lr; // 80173BFC
  c->r[3]=0u+0x80620000u; // 80173C00
  c->r[4]=0u+0x00000027u; // 80173C04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173C08
  c->r[3]=c->r[3]+0x00007688u; // 80173C0C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80173C10
  c->lr=0x80173C18u; f_8003560C(c); // 80173C14
  cmps(c,0,(int32_t)c->r[3],0); // 80173C18
  if (crb(c,2)) { goto L_80173C48; } // 80173C1C
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 80173C20
  c->r[3]=R16(c->r[3]+0x00000088u); // 80173C24
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80173C28
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80173C2C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80173C30
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80173C34
  cmpu(c,0,c->r[3],c->r[0]); // 80173C38
  if (!crb(c,2)) { goto L_80173C48; } // 80173C3C
  c->r[3]=0u+0x00000001u; // 80173C40
  goto L_80173C4C; // 80173C44
L_80173C48:;
  c->r[3]=0u+0x00000000u; // 80173C48
L_80173C4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173C4C
  c->lr=c->r[0]; // 80173C50
  c->r[1]=c->r[1]+0x00000010u; // 80173C54
  return; // 80173C58
}

// fn_80173C5C
void f_80173C5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173C5C
  c->r[0]=c->lr; // 80173C60
  c->r[3]=0u+0x80550000u; // 80173C64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173C68
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80173C6C
  c->lr=0x80173C74u; f_8005891C(c); // 80173C70
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80173C74
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 80173C78
  c->r[0]=cntlz(c->r[0]); // 80173C7C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80173C80
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173C84
  c->lr=c->r[0]; // 80173C88
  c->r[1]=c->r[1]+0x00000010u; // 80173C8C
  return; // 80173C90
}

// fn_80173C94
void f_80173C94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173C94
  c->r[0]=c->lr; // 80173C98
  c->r[3]=0u+0x80550000u; // 80173C9C
  c->r[4]=0u+0x0000000Du; // 80173CA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173CA4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80173CA8
  c->lr=0x80173CB0u; f_8019C920(c); // 80173CAC
  cmps(c,0,(int32_t)c->r[3],0); // 80173CB0
  if (crb(c,2)) { goto L_80173CDC; } // 80173CB4
  c->r[4]=c->r[1]+0x00000008u; // 80173CB8
  c->r[5]=0u+0x00000000u; // 80173CBC
  c->lr=0x80173CC4u; f_8007C6C8(c); // 80173CC0
  c->r[3]=R32(c->r[1]+0x00000008u); // 80173CC4
  c->r[0]=R32(c->r[3]+0x00000030u); // 80173CC8
  cmps(c,0,(int32_t)c->r[0],26); // 80173CCC
  if (!crb(c,2)) { goto L_80173CDC; } // 80173CD0
  c->r[3]=0u+0x00000001u; // 80173CD4
  goto L_80173CE0; // 80173CD8
L_80173CDC:;
  c->r[3]=0u+0x00000000u; // 80173CDC
L_80173CE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173CE0
  c->lr=c->r[0]; // 80173CE4
  c->r[1]=c->r[1]+0x00000010u; // 80173CE8
  return; // 80173CEC
}

// fn_80173CF0
void f_80173CF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173CF0
  c->r[0]=c->lr; // 80173CF4
  c->r[7]=0u+0x804B0000u; // 80173CF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173CFC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80173D00
  c->r[7]=c->r[7]+0x00006850u; // 80173D04
  c->r[4]=c->r[5]|c->r[5]; // 80173D08
  c->r[5]=c->r[6]|c->r[6]; // 80173D0C
  c->r[12]=c->r[7]+c->r[0]; // 80173D10
  c->lr=0x80173D18u; f_802BA00C(c); // 80173D14
  c->r[0]=c->r[0]|0x00000000u; // 80173D18
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173D1C
  c->lr=c->r[0]; // 80173D20
  c->r[1]=c->r[1]+0x00000010u; // 80173D24
  return; // 80173D28
}

// fn_80173D2C
void f_80173D2C(Ctx* __restrict c) {
  return; // 80173D2C
}

// fn_80173D30
void f_80173D30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173D30
  c->r[0]=c->lr; // 80173D34
  c->r[4]=0u+0x00000027u; // 80173D38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173D3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173D40
  c->r[31]=0u+0x80620000u; // 80173D44
  c->r[31]=c->r[31]+0x00007688u; // 80173D48
  W32(c->r[1]+0x00000008u,c->r[30]); // 80173D4C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80173D50
  c->lr=0x80173D58u; f_8003560C(c); // 80173D54
  c->r[30]=c->r[3]|c->r[3]; // 80173D58
  c->r[4]=0u+0x00000000u; // 80173D5C
  c->lr=0x80173D64u; f_801137E0(c); // 80173D60
  c->r[12]=R32(c->r[30]+0x000000B0u); // 80173D64
  c->r[3]=c->r[30]|c->r[30]; // 80173D68
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80173D6C
  c->ctr=c->r[12]; // 80173D70
  if (true) { c->lr=0x80173D78u; dispatch(c,c->ctr); } // 80173D74
  c->r[3]=R32(c->r[31]+0x00000014u); // 80173D78
  c->r[4]=0u+0x00000060u; // 80173D7C
  c->lr=0x80173D84u; f_8003560C(c); // 80173D80
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173D84
  c->r[4]=c->r[3]|c->r[3]; // 80173D88
  if (crb(c,2)) { goto L_80173DA0; } // 80173D8C
  c->r[3]=0u+0x80550000u; // 80173D90
  c->r[5]=0u+0x00000001u; // 80173D94
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173D98
  c->lr=0x80173DA0u; f_8018E2D4(c); // 80173D9C
L_80173DA0:;
  c->r[3]=0u+0x80620000u; // 80173DA0
  c->r[4]=0u+0x00000061u; // 80173DA4
  c->r[3]=c->r[3]+0x00007688u; // 80173DA8
  c->r[3]=R32(c->r[3]+0x00000014u); // 80173DAC
  c->lr=0x80173DB4u; f_8003560C(c); // 80173DB0
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173DB4
  c->r[4]=c->r[3]|c->r[3]; // 80173DB8
  if (crb(c,2)) { goto L_80173DD0; } // 80173DBC
  c->r[3]=0u+0x80550000u; // 80173DC0
  c->r[5]=0u+0x00000001u; // 80173DC4
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173DC8
  c->lr=0x80173DD0u; f_8018E2D4(c); // 80173DCC
L_80173DD0:;
  c->r[3]=0u+0x80620000u; // 80173DD0
  c->r[4]=0u+0x00000062u; // 80173DD4
  c->r[3]=c->r[3]+0x00007688u; // 80173DD8
  c->r[3]=R32(c->r[3]+0x00000014u); // 80173DDC
  c->lr=0x80173DE4u; f_8003560C(c); // 80173DE0
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173DE4
  c->r[4]=c->r[3]|c->r[3]; // 80173DE8
  if (crb(c,2)) { goto L_80173E00; } // 80173DEC
  c->r[3]=0u+0x80550000u; // 80173DF0
  c->r[5]=0u+0x00000001u; // 80173DF4
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173DF8
  c->lr=0x80173E00u; f_8018E2D4(c); // 80173DFC
L_80173E00:;
  c->r[3]=0u+0x80620000u; // 80173E00
  c->r[4]=0u+0x00000063u; // 80173E04
  c->r[3]=c->r[3]+0x00007688u; // 80173E08
  c->r[3]=R32(c->r[3]+0x00000014u); // 80173E0C
  c->lr=0x80173E14u; f_8003560C(c); // 80173E10
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173E14
  c->r[4]=c->r[3]|c->r[3]; // 80173E18
  if (crb(c,2)) { goto L_80173E30; } // 80173E1C
  c->r[3]=0u+0x80550000u; // 80173E20
  c->r[5]=0u+0x00000001u; // 80173E24
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173E28
  c->lr=0x80173E30u; f_8018E2D4(c); // 80173E2C
L_80173E30:;
  c->r[3]=0u+0x80620000u; // 80173E30
  c->r[4]=0u+0x00000064u; // 80173E34
  c->r[3]=c->r[3]+0x00007688u; // 80173E38
  c->r[3]=R32(c->r[3]+0x00000014u); // 80173E3C
  c->lr=0x80173E44u; f_8003560C(c); // 80173E40
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173E44
  c->r[4]=c->r[3]|c->r[3]; // 80173E48
  if (crb(c,2)) { goto L_80173E60; } // 80173E4C
  c->r[3]=0u+0x80550000u; // 80173E50
  c->r[5]=0u+0x00000001u; // 80173E54
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173E58
  c->lr=0x80173E60u; f_8018E2D4(c); // 80173E5C
L_80173E60:;
  c->r[3]=0u+0x80620000u; // 80173E60
  c->r[4]=0u+0x00000065u; // 80173E64
  c->r[3]=c->r[3]+0x00007688u; // 80173E68
  c->r[3]=R32(c->r[3]+0x00000014u); // 80173E6C
  c->lr=0x80173E74u; f_8003560C(c); // 80173E70
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173E74
  c->r[4]=c->r[3]|c->r[3]; // 80173E78
  if (crb(c,2)) { goto L_80173E90; } // 80173E7C
  c->r[3]=0u+0x80550000u; // 80173E80
  c->r[5]=0u+0x00000001u; // 80173E84
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173E88
  c->lr=0x80173E90u; f_8018E2D4(c); // 80173E8C
L_80173E90:;
  c->r[3]=0u+0x80620000u; // 80173E90
  c->r[4]=0u+0x00000066u; // 80173E94
  c->r[3]=c->r[3]+0x00007688u; // 80173E98
  c->r[3]=R32(c->r[3]+0x00000014u); // 80173E9C
  c->lr=0x80173EA4u; f_8003560C(c); // 80173EA0
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173EA4
  c->r[4]=c->r[3]|c->r[3]; // 80173EA8
  if (crb(c,2)) { goto L_80173EC0; } // 80173EAC
  c->r[3]=0u+0x80550000u; // 80173EB0
  c->r[5]=0u+0x00000001u; // 80173EB4
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173EB8
  c->lr=0x80173EC0u; f_8018E2D4(c); // 80173EBC
L_80173EC0:;
  c->r[3]=0u+0x80620000u; // 80173EC0
  c->r[4]=0u+0x00000067u; // 80173EC4
  c->r[3]=c->r[3]+0x00007688u; // 80173EC8
  c->r[3]=R32(c->r[3]+0x00000014u); // 80173ECC
  c->lr=0x80173ED4u; f_8003560C(c); // 80173ED0
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173ED4
  c->r[4]=c->r[3]|c->r[3]; // 80173ED8
  if (crb(c,2)) { goto L_80173EF0; } // 80173EDC
  c->r[3]=0u+0x80550000u; // 80173EE0
  c->r[5]=0u+0x00000001u; // 80173EE4
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173EE8
  c->lr=0x80173EF0u; f_8018E2D4(c); // 80173EEC
L_80173EF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173EF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173EF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80173EF8
  c->lr=c->r[0]; // 80173EFC
  c->r[1]=c->r[1]+0x00000010u; // 80173F00
  return; // 80173F04
}

// fn_80173F08
void f_80173F08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173F08
  c->r[0]=c->lr; // 80173F0C
  c->r[4]=0u+0x00000027u; // 80173F10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173F14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173F18
  c->r[31]=0u+0x80620000u; // 80173F1C
  c->r[31]=c->r[31]+0x00007688u; // 80173F20
  W32(c->r[1]+0x00000008u,c->r[30]); // 80173F24
  c->r[3]=R32(c->r[31]+0x00000014u); // 80173F28
  c->lr=0x80173F30u; f_8003560C(c); // 80173F2C
  c->r[30]=c->r[3]|c->r[3]; // 80173F30
  c->r[4]=0u+0x00000001u; // 80173F34
  c->lr=0x80173F3Cu; f_801137E0(c); // 80173F38
  c->r[12]=R32(c->r[30]+0x000000B0u); // 80173F3C
  c->r[3]=c->r[30]|c->r[30]; // 80173F40
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80173F44
  c->ctr=c->r[12]; // 80173F48
  if (true) { c->lr=0x80173F50u; dispatch(c,c->ctr); } // 80173F4C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80173F50
  c->r[4]=0u+0x00000060u; // 80173F54
  c->lr=0x80173F5Cu; f_8003560C(c); // 80173F58
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173F5C
  c->r[4]=c->r[3]|c->r[3]; // 80173F60
  if (crb(c,2)) { goto L_80173F78; } // 80173F64
  c->r[3]=0u+0x80550000u; // 80173F68
  c->r[5]=0u+0x00000000u; // 80173F6C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173F70
  c->lr=0x80173F78u; f_8018E2D4(c); // 80173F74
L_80173F78:;
  c->r[3]=0u+0x80620000u; // 80173F78
  c->r[4]=0u+0x00000061u; // 80173F7C
  c->r[3]=c->r[3]+0x00007688u; // 80173F80
  c->r[3]=R32(c->r[3]+0x00000014u); // 80173F84
  c->lr=0x80173F8Cu; f_8003560C(c); // 80173F88
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173F8C
  c->r[4]=c->r[3]|c->r[3]; // 80173F90
  if (crb(c,2)) { goto L_80173FA8; } // 80173F94
  c->r[3]=0u+0x80550000u; // 80173F98
  c->r[5]=0u+0x00000000u; // 80173F9C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173FA0
  c->lr=0x80173FA8u; f_8018E2D4(c); // 80173FA4
L_80173FA8:;
  c->r[3]=0u+0x80620000u; // 80173FA8
  c->r[4]=0u+0x00000062u; // 80173FAC
  c->r[3]=c->r[3]+0x00007688u; // 80173FB0
  c->r[3]=R32(c->r[3]+0x00000014u); // 80173FB4
  c->lr=0x80173FBCu; f_8003560C(c); // 80173FB8
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173FBC
  c->r[4]=c->r[3]|c->r[3]; // 80173FC0
  if (crb(c,2)) { goto L_80173FD8; } // 80173FC4
  c->r[3]=0u+0x80550000u; // 80173FC8
  c->r[5]=0u+0x00000000u; // 80173FCC
  c->r[3]=c->r[3]+0xFFFFC848u; // 80173FD0
  c->lr=0x80173FD8u; f_8018E2D4(c); // 80173FD4
L_80173FD8:;
  c->r[3]=0u+0x80620000u; // 80173FD8
  c->r[4]=0u+0x00000063u; // 80173FDC
  c->r[3]=c->r[3]+0x00007688u; // 80173FE0
  c->r[3]=R32(c->r[3]+0x00000014u); // 80173FE4
  c->lr=0x80173FECu; f_8003560C(c); // 80173FE8
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80173FEC
  c->r[4]=c->r[3]|c->r[3]; // 80173FF0
  if (crb(c,2)) { goto L_80174008; } // 80173FF4
  c->r[3]=0u+0x80550000u; // 80173FF8
  c->r[5]=0u+0x00000000u; // 80173FFC
  c->r[3]=c->r[3]+0xFFFFC848u; // 80174000
  c->lr=0x80174008u; f_8018E2D4(c); // 80174004
L_80174008:;
  c->r[3]=0u+0x80620000u; // 80174008
  c->r[4]=0u+0x00000064u; // 8017400C
  c->r[3]=c->r[3]+0x00007688u; // 80174010
  c->r[3]=R32(c->r[3]+0x00000014u); // 80174014
  c->lr=0x8017401Cu; f_8003560C(c); // 80174018
  cmpu(c,0,c->r[3],0x0000FFFFu); // 8017401C
  c->r[4]=c->r[3]|c->r[3]; // 80174020
  if (crb(c,2)) { goto L_80174038; } // 80174024
  c->r[3]=0u+0x80550000u; // 80174028
  c->r[5]=0u+0x00000000u; // 8017402C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80174030
  c->lr=0x80174038u; f_8018E2D4(c); // 80174034
L_80174038:;
  c->r[3]=0u+0x80620000u; // 80174038
  c->r[4]=0u+0x00000065u; // 8017403C
  c->r[3]=c->r[3]+0x00007688u; // 80174040
  c->r[3]=R32(c->r[3]+0x00000014u); // 80174044
  c->lr=0x8017404Cu; f_8003560C(c); // 80174048
  cmpu(c,0,c->r[3],0x0000FFFFu); // 8017404C
  c->r[4]=c->r[3]|c->r[3]; // 80174050
  if (crb(c,2)) { goto L_80174068; } // 80174054
  c->r[3]=0u+0x80550000u; // 80174058
  c->r[5]=0u+0x00000000u; // 8017405C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80174060
  c->lr=0x80174068u; f_8018E2D4(c); // 80174064
L_80174068:;
  c->r[3]=0u+0x80620000u; // 80174068
  c->r[4]=0u+0x00000066u; // 8017406C
  c->r[3]=c->r[3]+0x00007688u; // 80174070
  c->r[3]=R32(c->r[3]+0x00000014u); // 80174074
  c->lr=0x8017407Cu; f_8003560C(c); // 80174078
  cmpu(c,0,c->r[3],0x0000FFFFu); // 8017407C
  c->r[4]=c->r[3]|c->r[3]; // 80174080
  if (crb(c,2)) { goto L_80174098; } // 80174084
  c->r[3]=0u+0x80550000u; // 80174088
  c->r[5]=0u+0x00000000u; // 8017408C
  c->r[3]=c->r[3]+0xFFFFC848u; // 80174090
  c->lr=0x80174098u; f_8018E2D4(c); // 80174094
L_80174098:;
  c->r[3]=0u+0x80620000u; // 80174098
  c->r[4]=0u+0x00000067u; // 8017409C
  c->r[3]=c->r[3]+0x00007688u; // 801740A0
  c->r[3]=R32(c->r[3]+0x00000014u); // 801740A4
  c->lr=0x801740ACu; f_8003560C(c); // 801740A8
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801740AC
  c->r[4]=c->r[3]|c->r[3]; // 801740B0
  if (crb(c,2)) { goto L_801740C8; } // 801740B4
  c->r[3]=0u+0x80550000u; // 801740B8
  c->r[5]=0u+0x00000000u; // 801740BC
  c->r[3]=c->r[3]+0xFFFFC848u; // 801740C0
  c->lr=0x801740C8u; f_8018E2D4(c); // 801740C4
L_801740C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801740C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801740CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801740D0
  c->lr=c->r[0]; // 801740D4
  c->r[1]=c->r[1]+0x00000010u; // 801740D8
  return; // 801740DC
}

// fn_801740E0
void f_801740E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801740E0
  c->r[0]=c->lr; // 801740E4
  cmps(c,0,(int32_t)c->r[3],0); // 801740E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801740EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801740F0
  c->r[31]=c->r[4]|c->r[4]; // 801740F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801740F8
  c->r[30]=c->r[3]|c->r[3]; // 801740FC
  if (crb(c,2)) { goto L_8017411C; } // 80174100
  c->r[4]=0u+0x00000000u; // 80174104
  c->lr=0x8017410Cu; f_80103A70(c); // 80174108
  cmps(c,0,(int32_t)c->r[31],0); // 8017410C
  if (!crb(c,1)) { goto L_8017411C; } // 80174110
  c->r[3]=c->r[30]|c->r[30]; // 80174114
  c->lr=0x8017411Cu; f_800C69B8(c); // 80174118
L_8017411C:;
  c->r[3]=c->r[30]|c->r[30]; // 8017411C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80174120
  c->r[30]=R32(c->r[1]+0x00000008u); // 80174124
  c->r[0]=R32(c->r[1]+0x00000014u); // 80174128
  c->lr=c->r[0]; // 8017412C
  c->r[1]=c->r[1]+0x00000010u; // 80174130
  return; // 80174134
}

// fn_80174138
void f_80174138(Ctx* __restrict c) {
  c->r[3]=0u+0x804B0000u; // 80174138
  c->r[3]=c->r[3]+0xFFFF9D28u; // 8017413C
  return; // 80174140
}

// fn_80174144
void f_80174144(Ctx* __restrict c) {
  c->r[3]=0u+0x804B0000u; // 80174144
  c->r[3]=c->r[3]+0xFFFFA570u; // 80174148
  return; // 8017414C
}

// fn_80174150
void f_80174150(Ctx* __restrict c) {
  c->r[3]=0u+0x804B0000u; // 80174150
  c->r[3]=c->r[3]+0xFFFFA90Cu; // 80174154
  return; // 80174158
}

// fn_8017415C
void f_8017415C(Ctx* __restrict c) {
  c->r[3]=0u+0x804B0000u; // 8017415C
  c->r[3]=c->r[3]+0xFFFFA8D8u; // 80174160
  return; // 80174164
}

// fn_80174168
void f_80174168(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF9270u; // 80174168
  return; // 8017416C
}

// fn_80174170
void f_80174170(Ctx* __restrict c) {
  c->r[3]=0u+0x804B0000u; // 80174170
  c->r[3]=c->r[3]+0xFFFFA94Cu; // 80174174
  return; // 80174178
}

// fn_8017417C
void f_8017417C(Ctx* __restrict c) {
  c->r[3]=0u+0x804B0000u; // 8017417C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80174180
  c->r[3]=c->r[3]+0x00005DBCu; // 80174184
  c->r[3]=R32(c->r[3]+c->r[0]); // 80174188
  return; // 8017418C
}

// fn_80174190
void f_80174190(Ctx* __restrict c) {
  c->r[3]=0u+0x804B0000u; // 80174190
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80174194
  c->r[3]=c->r[3]+0x000065C0u; // 80174198
  c->r[3]=R32(c->r[3]+c->r[0]); // 8017419C
  return; // 801741A0
}

// fn_801741A4
void f_801741A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801741A4
  c->r[0]=c->lr; // 801741A8
  W32(c->r[1]+0x00000064u,c->r[0]); // 801741AC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801741B0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801741B4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801741B8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801741BC
  c->r[11]=c->r[1]+0x00000040u; // 801741C0
  c->lr=0x801741C8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801741C4
  c->r[28]=0u+0x80620000u; // 801741C8
  c->r[31]=0u+0x804B0000u; // 801741CC
  c->r[28]=c->r[28]+0x00007688u; // 801741D0
  c->r[4]=0u+0x00000000u; // 801741D4
  c->r[3]=R32(c->r[28]+0x00000014u); // 801741D8
  c->r[31]=c->r[31]+0x00006920u; // 801741DC
  c->lr=0x801741E4u; f_8003560C(c); // 801741E0
  cmps(c,0,(int32_t)c->r[3],0); // 801741E4
  if (!crb(c,2)) { goto L_80174228; } // 801741E8
  c->r[3]=0u+0x805D0000u; // 801741EC
  c->r[4]=0u+0x00000024u; // 801741F0
  c->r[3]=c->r[3]+0xFFFFC7D4u; // 801741F4
  c->r[5]=0u+0x00000002u; // 801741F8
  c->lr=0x80174200u; f_801E1F1C(c); // 801741FC
  cmps(c,0,(int32_t)c->r[3],0); // 80174200
  c->r[30]=c->r[3]|c->r[3]; // 80174204
  if (!crb(c,2)) { goto L_80174214; } // 80174208
  c->r[3]=0u+0x00000001u; // 8017420C
  goto L_8017452C; // 80174210
L_80174214:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80174214
  c->r[5]=c->r[30]|c->r[30]; // 80174218
  c->r[4]=0u+0x00000000u; // 8017421C
  c->lr=0x80174224u; f_80038998(c); // 80174220
  goto L_80174238; // 80174224
L_80174228:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80174228
  c->r[4]=0u+0x00000000u; // 8017422C
  c->lr=0x80174234u; f_8003560C(c); // 80174230
  c->r[30]=c->r[3]|c->r[3]; // 80174234
L_80174238:;
  c->r[3]=c->r[30]|c->r[30]; // 80174238
  c->r[4]=0u+0x00000001u; // 8017423C
  c->lr=0x80174244u; f_801E3BC0(c); // 80174240
  c->r[28]=0u+0x80620000u; // 80174244
  c->r[4]=0u+0x00000001u; // 80174248
  c->r[28]=c->r[28]+0x00007688u; // 8017424C
  c->r[3]=R32(c->r[28]+0x00000014u); // 80174250
  c->lr=0x80174258u; f_8003560C(c); // 80174254
  c->r[29]=c->r[3]|c->r[3]; // 80174258
  c->r[3]=R32(c->r[28]+0x00000014u); // 8017425C
  c->r[26]=0u+0x00000000u; // 80174260
  c->r[4]=0u+0x0000000Au; // 80174264
  c->lr=0x8017426Cu; f_80038AF4(c); // 80174268
  cmps(c,0,(int32_t)c->r[3],0); // 8017426C
  if (crb(c,2)) { goto L_80174298; } // 80174270
  c->r[28]=0u+0x80550000u; // 80174274
  c->r[26]=0u+0x00000001u; // 80174278
  c->r[3]=c->r[28]+0xFFFFC13Cu; // 8017427C
  c->r[4]=0u+0x00400000u; // 80174280
  c->lr=0x80174288u; f_8018267C(c); // 80174284
  c->r[3]=c->r[28]+0xFFFFC13Cu; // 80174288
  c->r[4]=0u+0x00800000u; // 8017428C
  c->lr=0x80174294u; f_8018267C(c); // 80174290
  goto L_80174338; // 80174294
L_80174298:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80174298
  c->r[4]=0u+0x00000009u; // 8017429C
  c->lr=0x801742A4u; f_80038AF4(c); // 801742A0
  cmps(c,0,(int32_t)c->r[3],0); // 801742A4
  if (!crb(c,2)) { goto L_801742F4; } // 801742A8
  c->r[3]=R32(c->r[28]+0x00000014u); // 801742AC
  c->r[4]=0u+0x00000008u; // 801742B0
  c->lr=0x801742B8u; f_80038AF4(c); // 801742B4
  cmps(c,0,(int32_t)c->r[3],0); // 801742B8
  if (crb(c,2)) { goto L_801742D0; } // 801742BC
  c->r[3]=R32(c->r[28]+0x00000014u); // 801742C0
  c->r[4]=0u+0x00000009u; // 801742C4
  c->lr=0x801742CCu; f_80038A08(c); // 801742C8
  goto L_801742D4; // 801742CC
L_801742D0:;
  c->r[26]=0u+0x00000002u; // 801742D0
L_801742D4:;
  c->r[28]=0u+0x80550000u; // 801742D4
  c->r[4]=0u+0x00400000u; // 801742D8
  c->r[3]=c->r[28]+0xFFFFC13Cu; // 801742DC
  c->lr=0x801742E4u; f_8018267C(c); // 801742E0
  c->r[3]=c->r[28]+0xFFFFC13Cu; // 801742E4
  c->r[4]=0u+0x00800000u; // 801742E8
  c->lr=0x801742F0u; f_8018266C(c); // 801742EC
  goto L_80174338; // 801742F0
L_801742F4:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 801742F4
  c->r[4]=0u+0x00000008u; // 801742F8
  c->lr=0x80174300u; f_80038AF4(c); // 801742FC
  cmps(c,0,(int32_t)c->r[3],0); // 80174300
  if (!crb(c,2)) { goto L_80174318; } // 80174304
  c->r[3]=R32(c->r[28]+0x00000014u); // 80174308
  c->r[4]=0u+0x00000009u; // 8017430C
  c->lr=0x80174314u; f_8003DCAC(c); // 80174310
  goto L_8017431C; // 80174314
L_80174318:;
  c->r[26]=0u+0x00000001u; // 80174318
L_8017431C:;
  c->r[28]=0u+0x80550000u; // 8017431C
  c->r[4]=0u+0x00400000u; // 80174320
  c->r[3]=c->r[28]+0xFFFFC13Cu; // 80174324
  c->lr=0x8017432Cu; f_8018266C(c); // 80174328
  c->r[3]=c->r[28]+0xFFFFC13Cu; // 8017432C
  c->r[4]=0u+0x00800000u; // 80174330
  c->lr=0x80174338u; f_8018267C(c); // 80174334
L_80174338:;
  cmps(c,0,(int32_t)c->r[26],0); // 80174338
  if (crb(c,2)) { goto L_801743B0; } // 8017433C
  cmpu(c,0,c->r[26],0x00000001u); // 80174340
  if (!crb(c,2)) { goto L_80174380; } // 80174344
  cmps(c,0,(int32_t)c->r[29],0); // 80174348
  if (crb(c,2)) { goto L_801743B0; } // 8017434C
  c->r[0]=0u+0x00000020u; // 80174350
  c->r[3]=0u+0x80620000u; // 80174354
  c->r[4]=addc(c,~c->r[0],c->r[29],1); // 80174358
  c->r[3]=c->r[3]+0x00007688u; // 8017435C
  c->r[0]=c->r[29]+0xFFFFFFE0u; // 80174360
  c->r[4]=addc(c,~c->r[4],c->r[4],c->xer_ca); // 80174364
  c->r[3]=R32(c->r[3]+0x00000014u); // 80174368
  c->r[29]=c->r[0]&~c->r[4]; // 8017436C
  c->r[5]=c->r[29]|c->r[29]; // 80174370
  c->r[4]=0u+0x00000001u; // 80174374
  c->lr=0x8017437Cu; f_80038998(c); // 80174378
  goto L_801743B0; // 8017437C
L_80174380:;
  cmpu(c,0,c->r[29],0x000000FFu); // 80174380
  if (crb(c,2)) { goto L_801743B0; } // 80174384
  cmpu(c,0,c->r[29],0x000000E0u); // 80174388
  c->r[5]=0u+0x000000FFu; // 8017438C
  if (!crb(c,0)) { goto L_80174398; } // 80174390
  c->r[5]=c->r[29]+0x00000020u; // 80174394
L_80174398:;
  c->r[3]=0u+0x80620000u; // 80174398
  c->r[29]=c->r[5]|c->r[5]; // 8017439C
  c->r[3]=c->r[3]+0x00007688u; // 801743A0
  c->r[4]=0u+0x00000001u; // 801743A4
  c->r[3]=R32(c->r[3]+0x00000014u); // 801743A8
  c->lr=0x801743B0u; f_80038998(c); // 801743AC
L_801743B0:;
  {uint32_t ea=c->r[2]+0xFFFFCB78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801743B0
  c->r[28]=0u+0x80620000u; // 801743B4
  c->r[28]=c->r[28]+0x00007688u; // 801743B8
  c->r[4]=0u+0x00000012u; // 801743BC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801743C0
  c->r[3]=R32(c->r[28]+0x00000014u); // 801743C4
  c->lr=0x801743CCu; f_80038AF4(c); // 801743C8
  cmps(c,0,(int32_t)c->r[3],0); // 801743CC
  if (crb(c,2)) { goto L_801743E8; } // 801743D0
  c->r[3]=R32(c->r[28]+0x00000014u); // 801743D4
  c->r[4]=0u+0x0000000Fu; // 801743D8
  c->lr=0x801743E0u; f_800AD034(c); // 801743DC
  cmps(c,0,(int32_t)c->r[3],0); // 801743E0
  if (crb(c,2)) { goto L_80174418; } // 801743E4
L_801743E8:;
  c->r[28]=0u+0x803A0000u; // 801743E8
  c->r[3]=c->r[30]|c->r[30]; // 801743EC
  c->r[28]=c->r[28]+0x000030FCu; // 801743F0
  c->r[5]=0u+0x00000000u; // 801743F4
  c->r[4]=c->r[28]+0x0000010Bu; // 801743F8
  c->lr=0x80174400u; f_801E3A84(c); // 801743FC
  c->r[3]=c->r[30]|c->r[30]; // 80174400
  c->r[4]=c->r[28]+0x000000B0u; // 80174404
  c->r[5]=0u+0x00000000u; // 80174408
  c->lr=0x80174410u; f_801E3A84(c); // 8017440C
  c->r[25]=0u+0x00000006u; // 80174410
  goto L_8017441C; // 80174414
L_80174418:;
  c->r[25]=0u+0x00000007u; // 80174418
L_8017441C:;
  c->r[28]=0u+0x80550000u; // 8017441C
  {uint32_t ea=c->r[2]+0xFFFFCB7Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80174420
  {uint32_t ea=c->r[2]+0xFFFFCB80u; c->f[31]=c->ps1[31]=RF32(ea);} // 80174424
  c->r[27]=c->r[31]+0x00002274u; // 80174428
  c->r[26]=c->r[31]+0x00002220u; // 8017442C
  c->r[28]=c->r[28]+0x00003D60u; // 80174430
  c->r[24]=0u+0x00000000u; // 80174434
  goto L_801744B0; // 80174438
L_8017443C:;
  c->r[4]=c->r[27]|c->r[27]; // 8017443C
  c->r[3]=c->r[28]+0x00000010u; // 80174440
  c->r[5]=c->r[1]+0x00000014u; // 80174444
  c->r[6]=c->r[1]+0x00000018u; // 80174448
  c->r[7]=0u+0x00000000u; // 8017444C
  c->lr=0x80174454u; f_801D4A0C(c); // 80174450
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80174454
  c->r[3]=c->r[30]|c->r[30]; // 80174458
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017445C
  c->r[5]=c->r[1]+0x00000008u; // 80174460
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[30]); // 80174464
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80174468
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 8017446C
  c->r[4]=R32(c->r[26]+0x00000000u); // 80174470
  W32(c->r[1]+0x00000010u,c->r[0]); // 80174474
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80174478
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8017447C
  c->r[6]=R32(c->r[1]+0x00000014u); // 80174480
  c->r[0]=R32(c->r[1]+0x00000018u); // 80174484
  W32(c->r[1]+0x00000008u,c->r[6]); // 80174488
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017448C
  c->lr=0x80174494u; f_801E2ACC(c); // 80174490
  c->r[4]=R32(c->r[26]+0x00000000u); // 80174494
  c->r[3]=c->r[30]|c->r[30]; // 80174498
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 8017449C
  c->lr=0x801744A4u; f_801E3F8C(c); // 801744A0
  c->r[27]=c->r[27]+0x0000000Cu; // 801744A4
  c->r[26]=c->r[26]+0x00000004u; // 801744A8
  c->r[24]=c->r[24]+0x00000001u; // 801744AC
L_801744B0:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[25]); // 801744B0
  if (crb(c,0)) { IRQCHK(c); goto L_8017443C; } // 801744B4
  c->r[4]=c->r[31]+0x000022C8u; // 801744B8
  c->r[3]=c->r[31]+0x00002220u; // 801744BC
  c->r[31]=0u+0x80620000u; // 801744C0
  c->r[29]=c->r[25]+0x00000007u; // 801744C4
  c->r[28]=c->r[4]+0x0000000Eu; // 801744C8
  c->r[27]=c->r[3]+0x0000001Cu; // 801744CC
  c->r[31]=c->r[31]+0x00007688u; // 801744D0
  c->r[24]=0u+0x00000007u; // 801744D4
  goto L_80174520; // 801744D8
L_801744DC:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801744DC
  c->r[4]=R16(c->r[28]+0xFFFFFFF2u); // 801744E0
  c->lr=0x801744E8u; f_800AD034(c); // 801744E4
  cmps(c,0,(int32_t)c->r[3],0); // 801744E8
  if (crb(c,2)) { goto L_80174504; } // 801744EC
  c->r[4]=R32(c->r[27]+0x00000000u); // 801744F0
  c->r[3]=c->r[30]|c->r[30]; // 801744F4
  c->r[5]=0u+0x00000000u; // 801744F8
  c->lr=0x80174500u; f_801E3A84(c); // 801744FC
  goto L_80174514; // 80174500
L_80174504:;
  c->r[4]=R32(c->r[27]+0x0000001Cu); // 80174504
  c->r[3]=c->r[30]|c->r[30]; // 80174508
  c->r[5]=0u+0x00000000u; // 8017450C
  c->lr=0x80174514u; f_801E3A84(c); // 80174510
L_80174514:;
  c->r[28]=c->r[28]+0x00000002u; // 80174514
  c->r[27]=c->r[27]+0x00000004u; // 80174518
  c->r[24]=c->r[24]+0x00000001u; // 8017451C
L_80174520:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[29]); // 80174520
  if (crb(c,0)) { IRQCHK(c); goto L_801744DC; } // 80174524
  c->r[3]=0u+0x00000001u; // 80174528
L_8017452C:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8017452C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80174530
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80174534
  c->r[11]=c->r[1]+0x00000040u; // 80174538
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8017453C
  c->lr=0x80174544u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80174540
  c->r[0]=R32(c->r[1]+0x00000064u); // 80174544
  c->lr=c->r[0]; // 80174548
  c->r[1]=c->r[1]+0x00000060u; // 8017454C
  return; // 80174550
}

// fn_80174554
void f_80174554(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174554
  c->r[0]=c->lr; // 80174558
  c->r[4]=0u+0x00000000u; // 8017455C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80174560
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80174564
  c->r[31]=0u+0x80620000u; // 80174568
  c->r[31]=c->r[31]+0x00007688u; // 8017456C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80174570
  W32(c->r[1]+0x00000014u,c->r[29]); // 80174574
  c->r[29]=c->r[5]|c->r[5]; // 80174578
  c->r[3]=R32(c->r[31]+0x00000014u); // 8017457C
  c->lr=0x80174584u; f_8003560C(c); // 80174580
  cmps(c,0,(int32_t)c->r[3],0); // 80174584
  if (crb(c,2)) { goto L_80174608; } // 80174588
  c->r[3]=R32(c->r[31]+0x00000014u); // 8017458C
  c->r[4]=0u+0x00000000u; // 80174590
  c->lr=0x80174598u; f_8003560C(c); // 80174594
  c->r[0]=R8(c->r[29]+0x00000003u); // 80174598
  c->r[30]=c->r[3]|c->r[3]; // 8017459C
  cmpu(c,0,c->r[0],0x000000FFu); // 801745A0
  if (!crb(c,2)) { goto L_801745DC; } // 801745A4
  c->r[31]=0u+0x804C0000u; // 801745A8
  c->r[29]=0u+0x00000000u; // 801745AC
  c->r[31]=c->r[31]+0xFFFF8BF8u; // 801745B0
L_801745B4:;
  {uint32_t ea=c->r[2]+0xFFFFCB84u; c->f[1]=c->ps1[1]=RF32(ea);} // 801745B4
  c->r[3]=c->r[30]|c->r[30]; // 801745B8
  c->r[4]=R32(c->r[31]+0x00000000u); // 801745BC
  c->f[2]=c->f[1]; // 801745C0
  c->lr=0x801745C8u; f_801E36CC(c); // 801745C4
  c->r[29]=c->r[29]+0x00000001u; // 801745C8
  c->r[31]=c->r[31]+0x00000004u; // 801745CC
  cmps(c,0,(int32_t)c->r[29],8); // 801745D0
  if (crb(c,0)) { IRQCHK(c); goto L_801745B4; } // 801745D4
  goto L_80174608; // 801745D8
L_801745DC:;
  {uint32_t ea=c->r[2]+0xFFFFCB88u; c->f[1]=c->ps1[1]=RF32(ea);} // 801745DC
  c->r[4]=0u+0x804C0000u; // 801745E0
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801745E4
  c->r[4]=c->r[4]+0xFFFF8BF8u; // 801745E8
  c->f[2]=c->f[1]; // 801745EC
  c->r[4]=R32(c->r[4]+c->r[0]); // 801745F0
  c->lr=0x801745F8u; f_801E36CC(c); // 801745F4
  c->r[3]=R32(c->r[31]+0x00000014u); // 801745F8
  c->r[4]=0u+0x00000005u; // 801745FC
  c->r[5]=R8(c->r[29]+0x00000003u); // 80174600
  c->lr=0x80174608u; f_80038998(c); // 80174604
L_80174608:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80174608
  c->r[3]=0u+0x00000001u; // 8017460C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80174610
  c->r[29]=R32(c->r[1]+0x00000014u); // 80174614
  c->r[0]=R32(c->r[1]+0x00000024u); // 80174618
  c->lr=c->r[0]; // 8017461C
  c->r[1]=c->r[1]+0x00000020u; // 80174620
  return; // 80174624
}

// fn_80174628
void f_80174628(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174628
  c->r[0]=c->lr; // 8017462C
  c->r[4]=0u+0x00000004u; // 80174630
  W32(c->r[1]+0x00000014u,c->r[0]); // 80174634
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80174638
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017463C
  c->r[30]=0u+0x80620000u; // 80174640
  c->r[30]=c->r[30]+0x00007688u; // 80174644
  c->r[3]=R32(c->r[30]+0x00000014u); // 80174648
  c->lr=0x80174650u; f_8003560C(c); // 8017464C
  c->r[31]=c->r[3]|c->r[3]; // 80174650
  c->r[3]=R32(c->r[30]+0x00000014u); // 80174654
  c->r[4]=0u+0x00000005u; // 80174658
  c->lr=0x80174660u; f_8003560C(c); // 8017465C
  cmpu(c,0,c->r[3],0x000000FFu); // 80174660
  c->r[30]=c->r[3]|c->r[3]; // 80174664
  if (crb(c,2)) { goto L_80174694; } // 80174668
  cmpu(c,0,c->r[31],c->r[3]); // 8017466C
  if (crb(c,2)) { goto L_80174694; } // 80174670
  c->r[3]=0u+0x805D0000u; // 80174674
  c->r[4]=0u+0x00000004u; // 80174678
  c->r[3]=c->r[3]+0x00006D70u; // 8017467C
  c->r[5]=0u+0x00000003u; // 80174680
  c->r[6]=0u+0x00000000u; // 80174684
  c->r[7]=0u+0x00000000u; // 80174688
  c->r[8]=0u+0x00000000u; // 8017468C
  c->lr=0x80174694u; f_8022AC00(c); // 80174690
L_80174694:;
  c->r[3]=0u+0x80620000u; // 80174694
  c->r[5]=c->r[30]|c->r[30]; // 80174698
  c->r[3]=c->r[3]+0x00007688u; // 8017469C
  c->r[4]=0u+0x00000004u; // 801746A0
  c->r[3]=R32(c->r[3]+0x00000014u); // 801746A4
  c->lr=0x801746ACu; f_80038998(c); // 801746A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801746AC
  c->r[3]=0u+0x00000001u; // 801746B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801746B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801746B8
  c->lr=c->r[0]; // 801746BC
  c->r[1]=c->r[1]+0x00000010u; // 801746C0
  return; // 801746C4
}

// fn_801746C8
void f_801746C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801746C8
  c->r[0]=c->lr; // 801746CC
  c->r[3]=0u+0x80550000u; // 801746D0
  c->r[4]=0u+0x0000001Au; // 801746D4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801746D8
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801746DC
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801746E0
  c->lr=0x801746E8u; f_8019C920(c); // 801746E4
  cmps(c,0,(int32_t)c->r[3],0); // 801746E8
  if (crb(c,2)) { goto L_80174720; } // 801746EC
  c->r[31]=0u+0x80550000u; // 801746F0
  {uint32_t ea=c->r[2]+0xFFFFCB8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801746F4
  c->r[31]=c->r[31]+0x00003D60u; // 801746F8
  c->r[6]=c->r[3]+0x0000002Cu; // 801746FC
  c->r[3]=c->r[31]+0x00000010u; // 80174700
  c->r[7]=c->r[1]+0x00000008u; // 80174704
  c->r[4]=0u+0x00000104u; // 80174708
  c->r[5]=0u+0x00000000u; // 8017470C
  c->lr=0x80174714u; f_80226910(c); // 80174710
  c->r[3]=c->r[31]+0x00000010u; // 80174714
  c->r[4]=c->r[1]+0x00000008u; // 80174718
  c->lr=0x80174720u; f_80226D68(c); // 8017471C
L_80174720:;
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 80174720
  c->r[3]=0u+0x00000001u; // 80174724
  c->r[0]=R32(c->r[1]+0x00000074u); // 80174728
  c->lr=c->r[0]; // 8017472C
  c->r[1]=c->r[1]+0x00000070u; // 80174730
  return; // 80174734
}

// fn_80174738
void f_80174738(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174738
  c->r[0]=c->lr; // 8017473C
  c->r[4]=0u+0x00000007u; // 80174740
  W32(c->r[1]+0x00000064u,c->r[0]); // 80174744
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80174748
  c->r[31]=0u+0x80550000u; // 8017474C
  c->r[3]=c->r[31]+0xFFFFCE54u; // 80174750
  W32(c->r[1]+0x00000058u,c->r[30]); // 80174754
  W32(c->r[1]+0x00000054u,c->r[29]); // 80174758
  c->r[29]=c->r[5]|c->r[5]; // 8017475C
  c->lr=0x80174764u; f_8019C920(c); // 80174760
  c->r[4]=R8(c->r[29]+0x00000003u); // 80174764
  c->r[30]=c->r[3]|c->r[3]; // 80174768
  c->r[3]=c->r[31]+0xFFFFCE54u; // 8017476C
  c->lr=0x80174774u; f_8019C920(c); // 80174770
  c->r[31]=c->r[3]|c->r[3]; // 80174774
  c->r[3]=c->r[30]|c->r[30]; // 80174778
  c->r[4]=0u+0x00000000u; // 8017477C
  c->lr=0x80174784u; f_80039840(c); // 80174780
  c->r[4]=0u+0x803A0000u; // 80174784
  c->r[5]=c->r[1]+0x00000020u; // 80174788
  c->r[4]=c->r[4]+0x000030FCu; // 8017478C
  c->r[6]=0u+0x00000001u; // 80174790
  c->r[4]=c->r[4]+0x00000126u; // 80174794
  c->lr=0x8017479Cu; f_80257018(c); // 80174798
  c->r[3]=0u+0x80550000u; // 8017479C
  c->r[4]=R8(c->r[29]+0x00000004u); // 801747A0
  c->r[3]=c->r[3]+0xFFFFC080u; // 801747A4
  c->r[5]=c->r[1]+0x00000014u; // 801747A8
  c->lr=0x801747B0u; f_8017F2FC(c); // 801747AC
  c->r[3]=c->r[1]+0x00000020u; // 801747B0
  c->r[4]=c->r[1]+0x00000014u; // 801747B4
  c->r[5]=c->r[1]+0x00000008u; // 801747B8
  c->lr=0x801747C0u; f_80296750(c); // 801747BC
  c->r[3]=c->r[31]+0x0000002Cu; // 801747C0
  c->r[4]=c->r[1]+0x00000008u; // 801747C4
  c->lr=0x801747CCu; f_800361A0(c); // 801747C8
  c->r[3]=c->r[31]+0x00000060u; // 801747CC
  c->r[4]=c->r[30]+0x00000060u; // 801747D0
  c->lr=0x801747D8u; f_800361A0(c); // 801747D4
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801747D8
  c->r[3]=0u+0x00000001u; // 801747DC
  c->r[30]=R32(c->r[1]+0x00000058u); // 801747E0
  c->r[29]=R32(c->r[1]+0x00000054u); // 801747E4
  c->r[0]=R32(c->r[1]+0x00000064u); // 801747E8
  c->lr=c->r[0]; // 801747EC
  c->r[1]=c->r[1]+0x00000060u; // 801747F0
  return; // 801747F4
}

// fn_801747F8
void f_801747F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801747F8
  c->r[0]=c->lr; // 801747FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80174800
  c->r[0]=R8(c->r[5]+0x00000003u); // 80174804
  cmps(c,0,(int32_t)c->r[0],0); // 80174808
  if (!crb(c,2)) { goto L_80174824; } // 8017480C
  c->r[3]=0u+0x80550000u; // 80174810
  c->r[4]=0u+0x00000000u; // 80174814
  c->r[3]=c->r[3]+0xFFFFC13Cu; // 80174818
  c->lr=0x80174820u; f_80185B3C(c); // 8017481C
  goto L_80174834; // 80174820
L_80174824:;
  c->r[3]=0u+0x80550000u; // 80174824
  c->r[4]=0u+0x00000002u; // 80174828
  c->r[3]=c->r[3]+0xFFFFC13Cu; // 8017482C
  c->lr=0x80174834u; f_80185B3C(c); // 80174830
L_80174834:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80174834
  c->r[3]=0u+0x00000001u; // 80174838
  c->lr=c->r[0]; // 8017483C
  c->r[1]=c->r[1]+0x00000010u; // 80174840
  return; // 80174844
}

// fn_80174848
void f_80174848(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174848
  c->r[0]=c->lr; // 8017484C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80174850
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80174854
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80174858
  c->r[11]=c->r[1]+0x00000040u; // 8017485C
  c->lr=0x80174864u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80174860
  c->r[3]=0u+0x80620000u; // 80174864
  c->r[31]=c->r[4]|c->r[4]; // 80174868
  c->r[3]=c->r[3]+0x00007688u; // 8017486C
  c->r[28]=c->r[5]|c->r[5]; // 80174870
  c->r[3]=R32(c->r[3]+0x00000014u); // 80174874
  c->r[4]=0u+0x0000000Bu; // 80174878
  c->lr=0x80174880u; f_8003560C(c); // 8017487C
  cmps(c,0,(int32_t)c->r[3],2); // 80174880
  c->r[27]=c->r[3]|c->r[3]; // 80174884
  c->r[26]=0u+0x00000000u; // 80174888
  if (!crb(c,2)) { goto L_80174894; } // 8017488C
  c->r[26]=0u+0x00000001u; // 80174890
L_80174894:;
  c->r[0]=R8(c->r[28]+0x00000003u); // 80174894
  cmps(c,0,(int32_t)c->r[0],2); // 80174898
  if (crb(c,2)) { goto L_80174A70; } // 8017489C
  if (!crb(c,0)) { goto L_801748B4; } // 801748A0
  cmps(c,0,(int32_t)c->r[0],0); // 801748A4
  if (crb(c,2)) { goto L_801748C0; } // 801748A8
  if (!crb(c,0)) { goto L_8017490C; } // 801748AC
  goto L_80174C5C; // 801748B0
L_801748B4:;
  cmps(c,0,(int32_t)c->r[0],4); // 801748B4
  if (!crb(c,0)) { goto L_80174C5C; } // 801748B8
  goto L_80174A8C; // 801748BC
L_801748C0:;
  c->r[28]=0u+0x80620000u; // 801748C0
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 801748C4
  c->r[28]=c->r[28]+0x00007688u; // 801748C8
  c->r[4]=0u+0x00000008u; // 801748CC
  c->r[3]=R32(c->r[28]+0x00000014u); // 801748D0
  c->lr=0x801748D8u; f_80038998(c); // 801748D4
  c->r[3]=R32(c->r[28]+0x00000014u); // 801748D8
  c->r[4]=0u+0x00000009u; // 801748DC
  c->r[5]=R32(c->r[31]+0x00000030u); // 801748E0
  c->lr=0x801748E8u; f_80038998(c); // 801748E4
  c->r[3]=R32(c->r[28]+0x00000014u); // 801748E8
  c->r[4]=0u+0x0000000Au; // 801748EC
  c->r[5]=R32(c->r[31]+0x00000034u); // 801748F0
  c->lr=0x801748F8u; f_80038998(c); // 801748F4
  c->r[3]=R32(c->r[28]+0x00000014u); // 801748F8
  c->r[4]=0u+0x00000007u; // 801748FC
  c->r[5]=0u+0x00004000u; // 80174900
  c->lr=0x80174908u; f_80038998(c); // 80174904
  goto L_80174C5C; // 80174908
L_8017490C:;
  c->r[30]=0u+0x80620000u; // 8017490C
  c->r[4]=0u+0x00000007u; // 80174910
  c->r[30]=c->r[30]+0x00007688u; // 80174914
  c->r[3]=R32(c->r[30]+0x00000014u); // 80174918
  c->lr=0x80174920u; f_8003560C(c); // 8017491C
  cmpu(c,0,c->r[3],0x00000001u); // 80174920
  c->r[29]=c->r[3]|c->r[3]; // 80174924
  if (!crb(c,2)) { goto L_8017496C; } // 80174928
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)12); // 8017492C
  c->r[4]=0u+0x804C0000u; // 80174930
  c->r[3]=c->r[31]+0x0000002Cu; // 80174934
  c->r[4]=c->r[4]+0xFFFF8C18u; // 80174938
  c->r[4]=c->r[4]+c->r[0]; // 8017493C
  c->lr=0x80174944u; f_800361A0(c); // 80174940
  cmps(c,0,(int32_t)c->r[27],3); // 80174944
  if (!crb(c,2)) { goto L_80174958; } // 80174948
  {uint32_t ea=c->r[2]+0xFFFFCB90u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017494C
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 80174950
  goto L_80174C5C; // 80174954
L_80174958:;
  cmps(c,0,(int32_t)c->r[27],0); // 80174958
  if (!crb(c,2)) { goto L_80174C5C; } // 8017495C
  {uint32_t ea=c->r[2]+0xFFFFCB94u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174960
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 80174964
  goto L_80174C5C; // 80174968
L_8017496C:;
  c->r[0]=0u+0x43300000u; // 8017496C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80174970
  {uint32_t ea=c->r[2]+0xFFFFCBA8u; c->f[2]=RF64(ea);} // 80174974
  c->r[4]=0u+0x00000008u; // 80174978
  W32(c->r[1]+0x00000018u,c->r[0]); // 8017497C
  {uint32_t ea=c->r[2]+0xFFFFCB98u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174980
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 80174984
  c->r[3]=R32(c->r[30]+0x00000014u); // 80174988
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8017498C
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 80174990
  c->lr=0x80174998u; f_8003560C(c); // 80174994
  {uint32_t ea=c->r[2]+0xFFFFCB84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174998
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)12); // 8017499C
  c->r[28]=0u+0x804C0000u; // 801749A0
  W32(c->r[1]+0x00000010u,c->r[3]); // 801749A4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 801749A8
  c->r[4]=0u+0x00000009u; // 801749AC
  c->r[28]=c->r[28]+0xFFFF8C18u; // 801749B0
  {uint32_t ea=c->r[28]+c->r[26]; c->f[1]=c->ps1[1]=RF32(ea);} // 801749B4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801749B8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801749BC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[31],c->f[1])); // 801749C0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 801749C4
  c->r[3]=R32(c->r[30]+0x00000014u); // 801749C8
  c->lr=0x801749D0u; f_8003560C(c); // 801749CC
  {uint32_t ea=c->r[2]+0xFFFFCB84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801749D0
  c->r[5]=c->r[28]+c->r[26]; // 801749D4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801749D8
  c->r[4]=0u+0x0000000Au; // 801749DC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 801749E0
  W32(c->r[1]+0x00000010u,c->r[3]); // 801749E4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801749E8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801749EC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[31],c->f[1])); // 801749F0
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 801749F4
  c->r[3]=R32(c->r[30]+0x00000014u); // 801749F8
  c->lr=0x80174A00u; f_8003560C(c); // 801749FC
  {uint32_t ea=c->r[2]+0xFFFFCB84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174A00
  c->r[4]=c->r[28]+c->r[26]; // 80174A04
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80174A08
  cmps(c,0,(int32_t)c->r[27],3); // 80174A0C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 80174A10
  W32(c->r[1]+0x00000010u,c->r[3]); // 80174A14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174A18
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80174A1C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[31],c->f[1])); // 80174A20
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 80174A24
  if (!crb(c,2)) { goto L_80174A3C; } // 80174A28
  {uint32_t ea=c->r[2]+0xFFFFCB90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174A2C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80174A30
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 80174A34
  goto L_80174A50; // 80174A38
L_80174A3C:;
  cmps(c,0,(int32_t)c->r[27],0); // 80174A3C
  if (!crb(c,2)) { goto L_80174A50; } // 80174A40
  {uint32_t ea=c->r[2]+0xFFFFCB94u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174A44
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80174A48
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 80174A4C
L_80174A50:;
  c->r[3]=0u+0x80620000u; // 80174A50
  c->r[5]=rotl(c->r[29],31)&0x7FFFFFFFu; // 80174A54
  c->r[3]=c->r[3]+0x00007688u; // 80174A58
  c->r[4]=0u+0x00000007u; // 80174A5C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80174A60
  c->lr=0x80174A68u; f_80038998(c); // 80174A64
  c->r[3]=0u+0x00000002u; // 80174A68
  goto L_80174C60; // 80174A6C
L_80174A70:;
  c->r[3]=0u+0x80620000u; // 80174A70
  c->r[4]=0u+0x00000007u; // 80174A74
  c->r[3]=c->r[3]+0x00007688u; // 80174A78
  c->r[5]=0u+0x00000001u; // 80174A7C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80174A80
  c->lr=0x80174A88u; f_80038998(c); // 80174A84
  goto L_80174C5C; // 80174A88
L_80174A8C:;
  c->r[28]=0u+0x80620000u; // 80174A8C
  c->r[4]=0u+0x00000007u; // 80174A90
  c->r[28]=c->r[28]+0x00007688u; // 80174A94
  c->r[3]=R32(c->r[28]+0x00000014u); // 80174A98
  c->lr=0x80174AA0u; f_8003560C(c); // 80174A9C
  cmpu(c,0,c->r[3],0x00004000u); // 80174AA0
  c->r[29]=c->r[3]|c->r[3]; // 80174AA4
  if (!crb(c,2)) { goto L_80174B30; } // 80174AA8
  c->r[3]=R32(c->r[28]+0x00000014u); // 80174AAC
  c->r[4]=0u+0x00000008u; // 80174AB0
  c->lr=0x80174AB8u; f_8003560C(c); // 80174AB4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80174AB8
  c->r[4]=0u+0x00000009u; // 80174ABC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80174AC0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 80174AC4
  c->r[3]=R32(c->r[28]+0x00000014u); // 80174AC8
  c->lr=0x80174AD0u; f_8003560C(c); // 80174ACC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80174AD0
  c->r[4]=0u+0x0000000Au; // 80174AD4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80174AD8
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 80174ADC
  c->r[3]=R32(c->r[28]+0x00000014u); // 80174AE0
  c->lr=0x80174AE8u; f_8003560C(c); // 80174AE4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80174AE8
  c->r[3]=0u+0x805D0000u; // 80174AEC
  {uint32_t ea=c->r[2]+0xFFFFCB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80174AF0
  c->r[3]=c->r[3]+0x00006D70u; // 80174AF4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80174AF8
  c->r[4]=0u+0x00000002u; // 80174AFC
  {uint32_t ea=c->r[2]+0xFFFFCB9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80174B00
  c->r[5]=0u+0x0000007Au; // 80174B04
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[2]);} // 80174B08
  c->r[6]=0u+0x00000000u; // 80174B0C
  c->r[7]=0u+0x00000000u; // 80174B10
  c->r[8]=0u+0x00000000u; // 80174B14
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[1]);} // 80174B18
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 80174B1C
  c->lr=0x80174B24u; f_8022AC00(c); // 80174B20
  c->r[3]=0u+0x00000002u; // 80174B24
  c->lr=0x80174B2Cu; f_80269AD0(c); // 80174B28
  goto L_80174C5C; // 80174B2C
L_80174B30:;
  c->r[0]=0u+0x43300000u; // 80174B30
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80174B34
  {uint32_t ea=c->r[2]+0xFFFFCBA8u; c->f[2]=RF64(ea);} // 80174B38
  c->r[4]=0u+0x00000008u; // 80174B3C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80174B40
  {uint32_t ea=c->r[2]+0xFFFFCB98u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174B44
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 80174B48
  c->r[3]=R32(c->r[28]+0x00000014u); // 80174B4C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80174B50
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 80174B54
  c->lr=0x80174B5Cu; f_8003560C(c); // 80174B58
  {uint32_t ea=c->r[2]+0xFFFFCB84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174B5C
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)12); // 80174B60
  c->r[30]=0u+0x804C0000u; // 80174B64
  W32(c->r[1]+0x00000008u,c->r[3]); // 80174B68
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 80174B6C
  c->r[4]=0u+0x00000009u; // 80174B70
  c->r[30]=c->r[30]+0xFFFF8C18u; // 80174B74
  {uint32_t ea=c->r[30]+c->r[26]; c->f[1]=c->ps1[1]=RF32(ea);} // 80174B78
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174B7C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80174B80
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[31],c->f[1])); // 80174B84
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 80174B88
  c->r[3]=R32(c->r[28]+0x00000014u); // 80174B8C
  c->lr=0x80174B94u; f_8003560C(c); // 80174B90
  {uint32_t ea=c->r[2]+0xFFFFCB84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174B94
  c->r[5]=c->r[30]+c->r[26]; // 80174B98
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80174B9C
  c->r[4]=0u+0x0000000Au; // 80174BA0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 80174BA4
  W32(c->r[1]+0x00000008u,c->r[3]); // 80174BA8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174BAC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80174BB0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[31],c->f[1])); // 80174BB4
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 80174BB8
  c->r[3]=R32(c->r[28]+0x00000014u); // 80174BBC
  c->lr=0x80174BC4u; f_8003560C(c); // 80174BC0
  {uint32_t ea=c->r[2]+0xFFFFCB84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174BC4
  c->r[4]=c->r[30]+c->r[26]; // 80174BC8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80174BCC
  cmps(c,0,(int32_t)c->r[27],3); // 80174BD0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 80174BD4
  W32(c->r[1]+0x00000008u,c->r[3]); // 80174BD8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174BDC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80174BE0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[31],c->f[1])); // 80174BE4
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 80174BE8
  if (!crb(c,2)) { goto L_80174C00; } // 80174BEC
  {uint32_t ea=c->r[2]+0xFFFFCB90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174BF0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80174BF4
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 80174BF8
  goto L_80174C14; // 80174BFC
L_80174C00:;
  cmps(c,0,(int32_t)c->r[27],0); // 80174C00
  if (!crb(c,2)) { goto L_80174C14; } // 80174C04
  {uint32_t ea=c->r[2]+0xFFFFCB94u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174C08
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80174C0C
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 80174C10
L_80174C14:;
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 80174C14
  {uint32_t ea=c->r[2]+0xFFFFCB84u; c->f[1]=c->ps1[1]=RF32(ea);} // 80174C18
  {uint32_t ea=c->r[2]+0xFFFFCBA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80174C1C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80174C20
  fcmp(c,0,c->f[1],c->f[0]); // 80174C24
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[1]);} // 80174C28
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80174C2C
  if (!crb(c,2)) { goto L_80174C3C; } // 80174C30
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80174C34
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 80174C38
L_80174C3C:;
  c->r[3]=0u+0x80620000u; // 80174C3C
  c->r[5]=rotl(c->r[29],1)&0xFFFFFFFEu; // 80174C40
  c->r[3]=c->r[3]+0x00007688u; // 80174C44
  c->r[4]=0u+0x00000007u; // 80174C48
  c->r[3]=R32(c->r[3]+0x00000014u); // 80174C4C
  c->lr=0x80174C54u; f_80038998(c); // 80174C50
  c->r[3]=0u+0x00000002u; // 80174C54
  goto L_80174C60; // 80174C58
L_80174C5C:;
  c->r[3]=0u+0x00000001u; // 80174C5C
L_80174C60:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80174C60
  c->r[11]=c->r[1]+0x00000040u; // 80174C64
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80174C68
  c->lr=0x80174C70u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80174C6C
  c->r[0]=R32(c->r[1]+0x00000054u); // 80174C70
  c->lr=c->r[0]; // 80174C74
  c->r[1]=c->r[1]+0x00000050u; // 80174C78
  return; // 80174C7C
}

// fn_80174C80
void f_80174C80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174C80
  c->r[0]=c->lr; // 80174C84
  c->r[4]=0u+0x00000006u; // 80174C88
  W32(c->r[1]+0x00000054u,c->r[0]); // 80174C8C
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80174C90
  c->r[30]=0u+0x80620000u; // 80174C94
  c->r[30]=c->r[30]+0x00007688u; // 80174C98
  c->r[26]=c->r[5]|c->r[5]; // 80174C9C
  c->r[5]=0u+0x00000005u; // 80174CA0
  c->r[3]=R32(c->r[30]+0x00000014u); // 80174CA4
  c->lr=0x80174CACu; f_801765BC(c); // 80174CA8
  c->r[0]=R8(c->r[26]+0x00000003u); // 80174CAC
  c->r[28]=c->r[3]|c->r[3]; // 80174CB0
  cmps(c,0,(int32_t)c->r[0],2); // 80174CB4
  if (crb(c,2)) { goto L_80174E2C; } // 80174CB8
  if (!crb(c,0)) { goto L_80174CD0; } // 80174CBC
  cmps(c,0,(int32_t)c->r[0],0); // 80174CC0
  if (crb(c,2)) { goto L_80174CE0; } // 80174CC4
  if (!crb(c,0)) { goto L_80174D78; } // 80174CC8
  goto L_801764CC; // 80174CCC
L_80174CD0:;
  cmps(c,0,(int32_t)c->r[0],4); // 80174CD0
  if (crb(c,2)) { goto L_80175990; } // 80174CD4
  if (!crb(c,0)) { goto L_801764CC; } // 80174CD8
  goto L_80175918; // 80174CDC
L_80174CE0:;
  cmps(c,0,(int32_t)c->r[3],0); // 80174CE0
  if (!crb(c,2)) { goto L_80174D44; } // 80174CE4
  c->r[3]=0u+0x80550000u; // 80174CE8
  c->r[4]=0u+0x0000001Au; // 80174CEC
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80174CF0
  c->lr=0x80174CF8u; f_8019C920(c); // 80174CF4
  c->r[4]=0u+0x00000000u; // 80174CF8
  c->lr=0x80174D00u; f_80039840(c); // 80174CFC
  c->r[28]=c->r[3]|c->r[3]; // 80174D00
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80174D04
  c->lr=0x80174D0Cu; f_80211724(c); // 80174D08
  c->r[5]=0u+0xCCCD0000u; // 80174D0C
  c->r[4]=0u+0x805D0000u; // 80174D10
  c->r[0]=c->r[5]+0xFFFFCCCDu; // 80174D14
  c->r[6]=0u+0x00000001u; // 80174D18
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 80174D1C
  c->r[5]=c->r[28]|c->r[28]; // 80174D20
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80174D24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 80174D28
  c->r[7]=c->r[3]-c->r[0]; // 80174D2C
  c->r[3]=c->r[4]+0x00001BBCu; // 80174D30
  c->r[0]=c->r[7]+0x000006E8u; // 80174D34
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80174D38
  c->lr=0x80174D40u; f_801F1258(c); // 80174D3C
  goto L_801764CC; // 80174D40
L_80174D44:;
  c->r[3]=0u+0x80550000u; // 80174D44
  c->r[4]=0u+0x00000001u; // 80174D48
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80174D4C
  c->lr=0x80174D54u; f_8019C920(c); // 80174D50
  c->r[4]=0u+0x00000000u; // 80174D54
  c->lr=0x80174D5Cu; f_80039840(c); // 80174D58
  c->r[4]=0u+0x805D0000u; // 80174D5C
  c->r[5]=c->r[3]|c->r[3]; // 80174D60
  c->r[3]=c->r[4]+0x00001BBCu; // 80174D64
  c->r[6]=0u+0x00000001u; // 80174D68
  c->r[4]=0u+0x000006F2u; // 80174D6C
  c->lr=0x80174D74u; f_801F1258(c); // 80174D70
  goto L_801764CC; // 80174D74
L_80174D78:;
  cmps(c,0,(int32_t)c->r[3],0); // 80174D78
  if (!crb(c,2)) { goto L_80174DF8; } // 80174D7C
  c->r[3]=R32(c->r[30]+0x00000014u); // 80174D80
  c->lr=0x80174D88u; f_801C1B30(c); // 80174D84
  cmps(c,0,(int32_t)c->r[3],0); // 80174D88
  if (crb(c,2)) { goto L_801764CC; } // 80174D8C
  c->r[3]=0u+0x80550000u; // 80174D90
  c->r[4]=0u+0x0000001Au; // 80174D94
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80174D98
  c->lr=0x80174DA0u; f_8019C920(c); // 80174D9C
  c->r[4]=0u+0x00000000u; // 80174DA0
  c->lr=0x80174DA8u; f_80039840(c); // 80174DA4
  c->r[29]=c->r[3]|c->r[3]; // 80174DA8
  c->r[3]=R32(c->r[30]+0x00000014u); // 80174DAC
  c->lr=0x80174DB4u; f_801C1B30(c); // 80174DB0
  c->r[0]=c->r[3]+0x000006F2u; // 80174DB4
  c->r[28]=0u+0x805D0000u; // 80174DB8
  c->r[5]=c->r[29]|c->r[29]; // 80174DBC
  c->r[6]=0u+0x00000001u; // 80174DC0
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80174DC4
  c->r[3]=c->r[28]+0x00001BBCu; // 80174DC8
  c->lr=0x80174DD0u; f_801F1258(c); // 80174DCC
  c->r[3]=R32(c->r[30]+0x00000014u); // 80174DD0
  c->lr=0x80174DD8u; f_801C1B30(c); // 80174DD4
  c->r[4]=0u+0x00010000u; // 80174DD8
  c->r[5]=addc(c,~c->r[3],0x00000011u,1); // 80174DDC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80174DE0
  c->r[3]=c->r[28]+0x00001BBCu; // 80174DE4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 80174DE8
  c->r[4]=0u+0x00000000u; // 80174DEC
  c->lr=0x80174DF4u; f_80176580(c); // 80174DF0
  goto L_801764CC; // 80174DF4
L_80174DF8:;
  c->r[3]=0u+0x80550000u; // 80174DF8
  c->r[4]=0u+0x00000001u; // 80174DFC
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80174E00
  c->lr=0x80174E08u; f_8019C920(c); // 80174E04
  c->r[4]=0u+0x00000000u; // 80174E08
  c->lr=0x80174E10u; f_80039840(c); // 80174E0C
  c->r[4]=0u+0x805D0000u; // 80174E10
  c->r[5]=c->r[3]|c->r[3]; // 80174E14
  c->r[3]=c->r[4]+0x00001BBCu; // 80174E18
  c->r[6]=0u+0x00000001u; // 80174E1C
  c->r[4]=0u+0x00000747u; // 80174E20
  c->lr=0x80174E28u; f_801F1258(c); // 80174E24
  goto L_801764CC; // 80174E28
L_80174E2C:;
  c->r[6]=0u+0x00000000u; // 80174E2C
  c->r[5]=0u+0x00000006u; // 80174E30
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 80174E34
  c->r[3]=c->r[1]+0x0000001Cu; // 80174E38
  c->r[4]=0u+0x00000000u; // 80174E3C
  c->r[0]=0u+0x00000001u; // 80174E40
  W32(c->r[1]+0x00000020u,c->r[6]); // 80174E44
  W32(c->r[1]+0x00000024u,c->r[6]); // 80174E48
  W32(c->r[1]+0x00000028u,c->r[6]); // 80174E4C
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 80174E50
  c->ctr=c->r[5]; // 80174E54
L_80174E58:;
  c->r[5]=sraw(c,c->r[4],5); // 80174E58
  c->r[6]=c->r[4]+0x00000001u; // 80174E5C
  c->r[10]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80174E60
  c->r[7]=c->r[4]+0x00000002u; // 80174E64
  c->r[5]=rotl(c->r[4],0)&0x0000001Fu; // 80174E68
  c->r[9]=R32(c->r[3]+c->r[10]); // 80174E6C
  c->r[8]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 80174E70
  c->r[9]=c->r[9]|c->r[8]; // 80174E74
  c->r[5]=sraw(c,c->r[6],5); // 80174E78
  W32(c->r[3]+c->r[10],c->r[9]); // 80174E7C
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80174E80
  c->r[8]=rotl(c->r[6],0)&0x0000001Fu; // 80174E84
  c->r[6]=sraw(c,c->r[7],5); // 80174E88
  c->r[11]=R32(c->r[3]+c->r[12]); // 80174E8C
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 80174E90
  c->r[8]=rotl(c->r[7],0)&0x0000001Fu; // 80174E94
  c->r[28]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80174E98
  c->r[10]=c->r[11]|c->r[10]; // 80174E9C
  c->r[5]=c->r[4]+0x00000003u; // 80174EA0
  W32(c->r[3]+c->r[12],c->r[10]); // 80174EA4
  c->r[11]=rotl(c->r[5],0)&0x0000001Fu; // 80174EA8
  c->r[9]=sraw(c,c->r[5],5); // 80174EAC
  c->r[7]=c->r[4]+0x00000004u; // 80174EB0
  c->r[12]=R32(c->r[3]+c->r[28]); // 80174EB4
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 80174EB8
  c->r[11]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 80174EBC
  c->r[10]=sraw(c,c->r[7],5); // 80174EC0
  c->r[12]=c->r[12]|c->r[8]; // 80174EC4
  c->r[6]=c->r[4]+0x00000005u; // 80174EC8
  W32(c->r[3]+c->r[28],c->r[12]); // 80174ECC
  c->r[28]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80174ED0
  c->r[5]=c->r[4]+0x00000006u; // 80174ED4
  c->r[9]=rotl(c->r[7],0)&0x0000001Fu; // 80174ED8
  c->r[12]=R32(c->r[3]+c->r[28]); // 80174EDC
  c->r[8]=sraw(c,c->r[6],5); // 80174EE0
  c->r[7]=rotl(c->r[6],0)&0x0000001Fu; // 80174EE4
  c->r[6]=sraw(c,c->r[5],5); // 80174EE8
  c->r[11]=c->r[12]|c->r[11]; // 80174EEC
  c->r[12]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80174EF0
  W32(c->r[3]+c->r[28],c->r[11]); // 80174EF4
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[0]<<((c->r[9])&31)); // 80174EF8
  c->r[9]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80174EFC
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[0]<<((c->r[7])&31)); // 80174F00
  c->r[11]=R32(c->r[3]+c->r[12]); // 80174F04
  c->r[7]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80174F08
  c->r[5]=rotl(c->r[5],0)&0x0000001Fu; // 80174F0C
  c->r[4]=c->r[4]+0x00000007u; // 80174F10
  c->r[6]=c->r[11]|c->r[10]; // 80174F14
  W32(c->r[3]+c->r[12],c->r[6]); // 80174F18
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 80174F1C
  c->r[6]=R32(c->r[3]+c->r[9]); // 80174F20
  c->r[6]=c->r[6]|c->r[8]; // 80174F24
  W32(c->r[3]+c->r[9],c->r[6]); // 80174F28
  c->r[6]=R32(c->r[3]+c->r[7]); // 80174F2C
  c->r[5]=c->r[6]|c->r[5]; // 80174F30
  W32(c->r[3]+c->r[7],c->r[5]); // 80174F34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80174E58; } // 80174F38
  c->r[29]=0u+0x804C0000u; // 80174F3C
  c->r[28]=0u+0x80620000u; // 80174F40
  c->r[29]=c->r[29]+0xFFFF8C30u; // 80174F44
  c->r[30]=0u+0x00000000u; // 80174F48
  c->r[28]=c->r[28]+0x00007688u; // 80174F4C
  c->r[31]=0u+0x00000000u; // 80174F50
L_80174F54:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80174F54
  c->r[4]=0u+0x00000002u; // 80174F58
  c->r[5]=R8(c->r[29]+0x00000000u); // 80174F5C
  c->lr=0x80174F64u; f_801765BC(c); // 80174F60
  cmpu(c,0,c->r[3],0x00000001u); // 80174F64
  if (!crb(c,2)) { goto L_80174F70; } // 80174F68
  c->r[30]=c->r[30]+0x00000001u; // 80174F6C
L_80174F70:;
  c->r[31]=c->r[31]+0x00000001u; // 80174F70
  c->r[29]=c->r[29]+0x00000001u; // 80174F74
  cmps(c,0,(int32_t)c->r[31],5); // 80174F78
  if (crb(c,0)) { IRQCHK(c); goto L_80174F54; } // 80174F7C
  c->r[4]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80174F80
  c->r[5]=0u+0x0000002Au; // 80174F84
  c->r[9]=c->r[4]+0x0000002Au; // 80174F88
  cmps(c,1,(int32_t)c->r[9],42); // 80174F8C
  if (!crb(c,5)) { goto L_80175160; } // 80174F90
  cmps(c,0,(int32_t)c->r[4],8); // 80174F94
  c->r[7]=c->r[4]+0x00000022u; // 80174F98
  if (!crb(c,1)) { goto L_80175120; } // 80174F9C
  c->r[6]=0u+0x00000000u; // 80174FA0
  c->r[8]=0u+0x00000000u; // 80174FA4
  if (crb(c,4)) { goto L_80174FC0; } // 80174FA8
  c->r[3]=0u+0x80000000u; // 80174FAC
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80174FB0
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 80174FB4
  if (crb(c,1)) { goto L_80174FC0; } // 80174FB8
  c->r[8]=0u+0x00000001u; // 80174FBC
L_80174FC0:;
  cmps(c,0,(int32_t)c->r[8],0); // 80174FC0
  if (crb(c,2)) { goto L_80174FF8; } // 80174FC4
  c->r[8]=rotl(c->r[9],0)&0x80000000u; // 80174FC8
  c->r[3]=0u+0x00000001u; // 80174FCC
  c->r[0]=c->r[8]+0x80000000u; // 80174FD0
  cmpu(c,0,c->r[0],0x00000000u); // 80174FD4
  if (!crb(c,2)) { goto L_80174FEC; } // 80174FD8
  c->r[0]=rotl(c->r[4],0)&0x80000000u; // 80174FDC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80174FE0
  if (crb(c,2)) { goto L_80174FEC; } // 80174FE4
  c->r[3]=0u+0x00000000u; // 80174FE8
L_80174FEC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80174FEC
  if (crb(c,2)) { goto L_80174FF8; } // 80174FF0
  c->r[6]=0u+0x00000001u; // 80174FF4
L_80174FF8:;
  cmps(c,0,(int32_t)c->r[6],0); // 80174FF8
  if (crb(c,2)) { goto L_80175120; } // 80174FFC
  c->r[6]=c->r[7]+0xFFFFFFDDu; // 80175000
  c->r[3]=c->r[1]+0x0000001Cu; // 80175004
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80175008
  c->r[0]=0u+0x00000001u; // 8017500C
  c->ctr=c->r[6]; // 80175010
  cmps(c,0,(int32_t)c->r[7],42); // 80175014
  if (!crb(c,1)) { goto L_80175120; } // 80175018
L_8017501C:;
  c->r[6]=sraw(c,c->r[5],5); // 8017501C
  c->r[8]=c->r[5]+0x00000001u; // 80175020
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80175024
  c->r[6]=rotl(c->r[5],0)&0x0000001Fu; // 80175028
  c->r[10]=R32(c->r[3]+c->r[11]); // 8017502C
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80175030
  c->r[7]=sraw(c,c->r[8],5); // 80175034
  c->r[10]=c->r[10]|c->r[9]; // 80175038
  c->r[6]=c->r[5]+0x00000002u; // 8017503C
  W32(c->r[3]+c->r[11],c->r[10]); // 80175040
  c->r[28]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80175044
  c->r[9]=rotl(c->r[8],0)&0x0000001Fu; // 80175048
  c->r[8]=sraw(c,c->r[6],5); // 8017504C
  c->r[12]=R32(c->r[3]+c->r[28]); // 80175050
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[0]<<((c->r[9])&31)); // 80175054
  c->r[30]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80175058
  c->r[7]=c->r[5]+0x00000003u; // 8017505C
  c->r[10]=c->r[12]|c->r[10]; // 80175060
  c->r[11]=rotl(c->r[6],0)&0x0000001Fu; // 80175064
  W32(c->r[3]+c->r[28],c->r[10]); // 80175068
  c->r[9]=sraw(c,c->r[7],5); // 8017506C
  c->r[6]=c->r[5]+0x00000004u; // 80175070
  c->r[10]=rotl(c->r[7],0)&0x0000001Fu; // 80175074
  c->r[29]=R32(c->r[3]+c->r[30]); // 80175078
  c->r[7]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 8017507C
  c->r[28]=sraw(c,c->r[6],5); // 80175080
  c->r[12]=rotl(c->r[6],0)&0x0000001Fu; // 80175084
  c->r[6]=c->r[29]|c->r[7]; // 80175088
  c->r[8]=c->r[5]+0x00000005u; // 8017508C
  W32(c->r[3]+c->r[30],c->r[6]); // 80175090
  c->r[31]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80175094
  c->r[29]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 80175098
  c->r[11]=sraw(c,c->r[8],5); // 8017509C
  c->r[30]=R32(c->r[3]+c->r[31]); // 801750A0
  c->r[7]=c->r[5]+0x00000006u; // 801750A4
  c->r[6]=c->r[5]+0x00000007u; // 801750A8
  c->r[10]=rotl(c->r[8],0)&0x0000001Fu; // 801750AC
  c->r[29]=c->r[30]|c->r[29]; // 801750B0
  c->r[30]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801750B4
  W32(c->r[3]+c->r[31],c->r[29]); // 801750B8
  c->r[28]=((c->r[12])&0x20)?0u:(c->r[0]<<((c->r[12])&31)); // 801750BC
  c->r[12]=rotl(c->r[11],2)&0xFFFFFFFCu; // 801750C0
  c->r[9]=sraw(c,c->r[7],5); // 801750C4
  c->r[29]=R32(c->r[3]+c->r[30]); // 801750C8
  c->r[8]=rotl(c->r[7],0)&0x0000001Fu; // 801750CC
  c->r[7]=sraw(c,c->r[6],5); // 801750D0
  c->r[11]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 801750D4
  c->r[28]=c->r[29]|c->r[28]; // 801750D8
  c->r[10]=rotl(c->r[9],2)&0xFFFFFFFCu; // 801750DC
  W32(c->r[3]+c->r[30],c->r[28]); // 801750E0
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 801750E4
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801750E8
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 801750EC
  c->r[7]=R32(c->r[3]+c->r[12]); // 801750F0
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 801750F4
  c->r[5]=c->r[5]+0x00000008u; // 801750F8
  c->r[7]=c->r[7]|c->r[11]; // 801750FC
  W32(c->r[3]+c->r[12],c->r[7]); // 80175100
  c->r[7]=R32(c->r[3]+c->r[10]); // 80175104
  c->r[7]=c->r[7]|c->r[9]; // 80175108
  W32(c->r[3]+c->r[10],c->r[7]); // 8017510C
  c->r[7]=R32(c->r[3]+c->r[8]); // 80175110
  c->r[6]=c->r[7]|c->r[6]; // 80175114
  W32(c->r[3]+c->r[8],c->r[6]); // 80175118
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017501C; } // 8017511C
L_80175120:;
  c->r[4]=c->r[4]+0x0000002Au; // 80175120
  c->r[6]=c->r[1]+0x0000001Cu; // 80175124
  c->r[0]=c->r[4]-c->r[5]; // 80175128
  c->r[3]=0u+0x00000001u; // 8017512C
  c->ctr=c->r[0]; // 80175130
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80175134
  if (!crb(c,0)) { goto L_80175160; } // 80175138
L_8017513C:;
  c->r[4]=sraw(c,c->r[5],5); // 8017513C
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; // 80175140
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80175144
  c->r[5]=c->r[5]+0x00000001u; // 80175148
  c->r[4]=R32(c->r[6]+c->r[7]); // 8017514C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80175150
  c->r[0]=c->r[4]|c->r[0]; // 80175154
  W32(c->r[6]+c->r[7],c->r[0]); // 80175158
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017513C; } // 8017515C
L_80175160:;
  c->r[29]=0u+0x804C0000u; // 80175160
  c->r[28]=0u+0x80620000u; // 80175164
  c->r[29]=c->r[29]+0xFFFF8C30u; // 80175168
  c->r[30]=0u+0x00000000u; // 8017516C
  c->r[28]=c->r[28]+0x00007688u; // 80175170
  c->r[31]=0u+0x00000000u; // 80175174
L_80175178:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80175178
  c->r[4]=0u+0x00000003u; // 8017517C
  c->r[5]=R8(c->r[29]+0x00000005u); // 80175180
  c->lr=0x80175188u; f_801765BC(c); // 80175184
  cmpu(c,0,c->r[3],0x00000001u); // 80175188
  if (!crb(c,2)) { goto L_80175194; } // 8017518C
  c->r[30]=c->r[30]+0x00000001u; // 80175190
L_80175194:;
  c->r[31]=c->r[31]+0x00000001u; // 80175194
  c->r[29]=c->r[29]+0x00000001u; // 80175198
  cmps(c,0,(int32_t)c->r[31],4); // 8017519C
  if (crb(c,0)) { IRQCHK(c); goto L_80175178; } // 801751A0
  c->r[4]=rotl(c->r[30],1)&0xFFFFFFFEu; // 801751A4
  c->r[5]=0u+0x00000034u; // 801751A8
  c->r[9]=c->r[4]+0x00000034u; // 801751AC
  cmps(c,1,(int32_t)c->r[9],52); // 801751B0
  if (!crb(c,5)) { goto L_80175384; } // 801751B4
  cmps(c,0,(int32_t)c->r[4],8); // 801751B8
  c->r[7]=c->r[4]+0x0000002Cu; // 801751BC
  if (!crb(c,1)) { goto L_80175344; } // 801751C0
  c->r[6]=0u+0x00000000u; // 801751C4
  c->r[8]=0u+0x00000000u; // 801751C8
  if (crb(c,4)) { goto L_801751E4; } // 801751CC
  c->r[3]=0u+0x80000000u; // 801751D0
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801751D4
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 801751D8
  if (crb(c,1)) { goto L_801751E4; } // 801751DC
  c->r[8]=0u+0x00000001u; // 801751E0
L_801751E4:;
  cmps(c,0,(int32_t)c->r[8],0); // 801751E4
  if (crb(c,2)) { goto L_8017521C; } // 801751E8
  c->r[8]=rotl(c->r[9],0)&0x80000000u; // 801751EC
  c->r[3]=0u+0x00000001u; // 801751F0
  c->r[0]=c->r[8]+0x80000000u; // 801751F4
  cmpu(c,0,c->r[0],0x00000000u); // 801751F8
  if (!crb(c,2)) { goto L_80175210; } // 801751FC
  c->r[0]=rotl(c->r[4],0)&0x80000000u; // 80175200
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80175204
  if (crb(c,2)) { goto L_80175210; } // 80175208
  c->r[3]=0u+0x00000000u; // 8017520C
L_80175210:;
  cmps(c,0,(int32_t)c->r[3],0); // 80175210
  if (crb(c,2)) { goto L_8017521C; } // 80175214
  c->r[6]=0u+0x00000001u; // 80175218
L_8017521C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8017521C
  if (crb(c,2)) { goto L_80175344; } // 80175220
  c->r[6]=c->r[7]+0xFFFFFFD3u; // 80175224
  c->r[3]=c->r[1]+0x0000001Cu; // 80175228
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 8017522C
  c->r[0]=0u+0x00000001u; // 80175230
  c->ctr=c->r[6]; // 80175234
  cmps(c,0,(int32_t)c->r[7],52); // 80175238
  if (!crb(c,1)) { goto L_80175344; } // 8017523C
L_80175240:;
  c->r[6]=sraw(c,c->r[5],5); // 80175240
  c->r[8]=c->r[5]+0x00000001u; // 80175244
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80175248
  c->r[6]=rotl(c->r[5],0)&0x0000001Fu; // 8017524C
  c->r[10]=R32(c->r[3]+c->r[11]); // 80175250
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80175254
  c->r[7]=sraw(c,c->r[8],5); // 80175258
  c->r[10]=c->r[10]|c->r[9]; // 8017525C
  c->r[6]=c->r[5]+0x00000002u; // 80175260
  W32(c->r[3]+c->r[11],c->r[10]); // 80175264
  c->r[28]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80175268
  c->r[9]=rotl(c->r[8],0)&0x0000001Fu; // 8017526C
  c->r[8]=sraw(c,c->r[6],5); // 80175270
  c->r[12]=R32(c->r[3]+c->r[28]); // 80175274
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[0]<<((c->r[9])&31)); // 80175278
  c->r[30]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8017527C
  c->r[7]=c->r[5]+0x00000003u; // 80175280
  c->r[10]=c->r[12]|c->r[10]; // 80175284
  c->r[11]=rotl(c->r[6],0)&0x0000001Fu; // 80175288
  W32(c->r[3]+c->r[28],c->r[10]); // 8017528C
  c->r[9]=sraw(c,c->r[7],5); // 80175290
  c->r[6]=c->r[5]+0x00000004u; // 80175294
  c->r[10]=rotl(c->r[7],0)&0x0000001Fu; // 80175298
  c->r[29]=R32(c->r[3]+c->r[30]); // 8017529C
  c->r[7]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 801752A0
  c->r[28]=sraw(c,c->r[6],5); // 801752A4
  c->r[12]=rotl(c->r[6],0)&0x0000001Fu; // 801752A8
  c->r[6]=c->r[29]|c->r[7]; // 801752AC
  c->r[8]=c->r[5]+0x00000005u; // 801752B0
  W32(c->r[3]+c->r[30],c->r[6]); // 801752B4
  c->r[31]=rotl(c->r[9],2)&0xFFFFFFFCu; // 801752B8
  c->r[29]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 801752BC
  c->r[11]=sraw(c,c->r[8],5); // 801752C0
  c->r[30]=R32(c->r[3]+c->r[31]); // 801752C4
  c->r[7]=c->r[5]+0x00000006u; // 801752C8
  c->r[6]=c->r[5]+0x00000007u; // 801752CC
  c->r[10]=rotl(c->r[8],0)&0x0000001Fu; // 801752D0
  c->r[29]=c->r[30]|c->r[29]; // 801752D4
  c->r[30]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801752D8
  W32(c->r[3]+c->r[31],c->r[29]); // 801752DC
  c->r[28]=((c->r[12])&0x20)?0u:(c->r[0]<<((c->r[12])&31)); // 801752E0
  c->r[12]=rotl(c->r[11],2)&0xFFFFFFFCu; // 801752E4
  c->r[9]=sraw(c,c->r[7],5); // 801752E8
  c->r[29]=R32(c->r[3]+c->r[30]); // 801752EC
  c->r[8]=rotl(c->r[7],0)&0x0000001Fu; // 801752F0
  c->r[7]=sraw(c,c->r[6],5); // 801752F4
  c->r[11]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 801752F8
  c->r[28]=c->r[29]|c->r[28]; // 801752FC
  c->r[10]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80175300
  W32(c->r[3]+c->r[30],c->r[28]); // 80175304
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 80175308
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8017530C
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 80175310
  c->r[7]=R32(c->r[3]+c->r[12]); // 80175314
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80175318
  c->r[5]=c->r[5]+0x00000008u; // 8017531C
  c->r[7]=c->r[7]|c->r[11]; // 80175320
  W32(c->r[3]+c->r[12],c->r[7]); // 80175324
  c->r[7]=R32(c->r[3]+c->r[10]); // 80175328
  c->r[7]=c->r[7]|c->r[9]; // 8017532C
  W32(c->r[3]+c->r[10],c->r[7]); // 80175330
  c->r[7]=R32(c->r[3]+c->r[8]); // 80175334
  c->r[6]=c->r[7]|c->r[6]; // 80175338
  W32(c->r[3]+c->r[8],c->r[6]); // 8017533C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80175240; } // 80175340
L_80175344:;
  c->r[4]=c->r[4]+0x00000034u; // 80175344
  c->r[6]=c->r[1]+0x0000001Cu; // 80175348
  c->r[0]=c->r[4]-c->r[5]; // 8017534C
  c->r[3]=0u+0x00000001u; // 80175350
  c->ctr=c->r[0]; // 80175354
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80175358
  if (!crb(c,0)) { goto L_80175384; } // 8017535C
L_80175360:;
  c->r[4]=sraw(c,c->r[5],5); // 80175360
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; // 80175364
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80175368
  c->r[5]=c->r[5]+0x00000001u; // 8017536C
  c->r[4]=R32(c->r[6]+c->r[7]); // 80175370
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80175374
  c->r[0]=c->r[4]|c->r[0]; // 80175378
  W32(c->r[6]+c->r[7],c->r[0]); // 8017537C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80175360; } // 80175380
L_80175384:;
  c->r[29]=0u+0x804C0000u; // 80175384
  c->r[28]=0u+0x80620000u; // 80175388
  c->r[29]=c->r[29]+0xFFFF8C30u; // 8017538C
  c->r[30]=0u+0x00000000u; // 80175390
  c->r[28]=c->r[28]+0x00007688u; // 80175394
  c->r[31]=0u+0x00000000u; // 80175398
L_8017539C:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 8017539C
  c->r[4]=0u+0x00000004u; // 801753A0
  c->r[5]=R8(c->r[29]+0x0000000Au); // 801753A4
  c->lr=0x801753ACu; f_801765BC(c); // 801753A8
  cmpu(c,0,c->r[3],0x00000001u); // 801753AC
  if (!crb(c,2)) { goto L_801753B8; } // 801753B0
  c->r[30]=c->r[30]+0x00000001u; // 801753B4
L_801753B8:;
  c->r[31]=c->r[31]+0x00000001u; // 801753B8
  c->r[29]=c->r[29]+0x00000001u; // 801753BC
  cmps(c,0,(int32_t)c->r[31],5); // 801753C0
  if (crb(c,0)) { IRQCHK(c); goto L_8017539C; } // 801753C4
  c->r[4]=rotl(c->r[30],1)&0xFFFFFFFEu; // 801753C8
  c->r[5]=0u+0x0000003Cu; // 801753CC
  c->r[9]=c->r[4]+0x0000003Cu; // 801753D0
  cmps(c,1,(int32_t)c->r[9],60); // 801753D4
  if (!crb(c,5)) { goto L_801755A8; } // 801753D8
  cmps(c,0,(int32_t)c->r[4],8); // 801753DC
  c->r[7]=c->r[4]+0x00000034u; // 801753E0
  if (!crb(c,1)) { goto L_80175568; } // 801753E4
  c->r[6]=0u+0x00000000u; // 801753E8
  c->r[8]=0u+0x00000000u; // 801753EC
  if (crb(c,4)) { goto L_80175408; } // 801753F0
  c->r[3]=0u+0x80000000u; // 801753F4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801753F8
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 801753FC
  if (crb(c,1)) { goto L_80175408; } // 80175400
  c->r[8]=0u+0x00000001u; // 80175404
L_80175408:;
  cmps(c,0,(int32_t)c->r[8],0); // 80175408
  if (crb(c,2)) { goto L_80175440; } // 8017540C
  c->r[8]=rotl(c->r[9],0)&0x80000000u; // 80175410
  c->r[3]=0u+0x00000001u; // 80175414
  c->r[0]=c->r[8]+0x80000000u; // 80175418
  cmpu(c,0,c->r[0],0x00000000u); // 8017541C
  if (!crb(c,2)) { goto L_80175434; } // 80175420
  c->r[0]=rotl(c->r[4],0)&0x80000000u; // 80175424
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80175428
  if (crb(c,2)) { goto L_80175434; } // 8017542C
  c->r[3]=0u+0x00000000u; // 80175430
L_80175434:;
  cmps(c,0,(int32_t)c->r[3],0); // 80175434
  if (crb(c,2)) { goto L_80175440; } // 80175438
  c->r[6]=0u+0x00000001u; // 8017543C
L_80175440:;
  cmps(c,0,(int32_t)c->r[6],0); // 80175440
  if (crb(c,2)) { goto L_80175568; } // 80175444
  c->r[6]=c->r[7]+0xFFFFFFCBu; // 80175448
  c->r[3]=c->r[1]+0x0000001Cu; // 8017544C
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80175450
  c->r[0]=0u+0x00000001u; // 80175454
  c->ctr=c->r[6]; // 80175458
  cmps(c,0,(int32_t)c->r[7],60); // 8017545C
  if (!crb(c,1)) { goto L_80175568; } // 80175460
L_80175464:;
  c->r[6]=sraw(c,c->r[5],5); // 80175464
  c->r[8]=c->r[5]+0x00000001u; // 80175468
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8017546C
  c->r[6]=rotl(c->r[5],0)&0x0000001Fu; // 80175470
  c->r[10]=R32(c->r[3]+c->r[11]); // 80175474
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80175478
  c->r[7]=sraw(c,c->r[8],5); // 8017547C
  c->r[10]=c->r[10]|c->r[9]; // 80175480
  c->r[6]=c->r[5]+0x00000002u; // 80175484
  W32(c->r[3]+c->r[11],c->r[10]); // 80175488
  c->r[28]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8017548C
  c->r[9]=rotl(c->r[8],0)&0x0000001Fu; // 80175490
  c->r[8]=sraw(c,c->r[6],5); // 80175494
  c->r[12]=R32(c->r[3]+c->r[28]); // 80175498
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[0]<<((c->r[9])&31)); // 8017549C
  c->r[30]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801754A0
  c->r[7]=c->r[5]+0x00000003u; // 801754A4
  c->r[10]=c->r[12]|c->r[10]; // 801754A8
  c->r[11]=rotl(c->r[6],0)&0x0000001Fu; // 801754AC
  W32(c->r[3]+c->r[28],c->r[10]); // 801754B0
  c->r[9]=sraw(c,c->r[7],5); // 801754B4
  c->r[6]=c->r[5]+0x00000004u; // 801754B8
  c->r[10]=rotl(c->r[7],0)&0x0000001Fu; // 801754BC
  c->r[29]=R32(c->r[3]+c->r[30]); // 801754C0
  c->r[7]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 801754C4
  c->r[28]=sraw(c,c->r[6],5); // 801754C8
  c->r[12]=rotl(c->r[6],0)&0x0000001Fu; // 801754CC
  c->r[6]=c->r[29]|c->r[7]; // 801754D0
  c->r[8]=c->r[5]+0x00000005u; // 801754D4
  W32(c->r[3]+c->r[30],c->r[6]); // 801754D8
  c->r[31]=rotl(c->r[9],2)&0xFFFFFFFCu; // 801754DC
  c->r[29]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 801754E0
  c->r[11]=sraw(c,c->r[8],5); // 801754E4
  c->r[30]=R32(c->r[3]+c->r[31]); // 801754E8
  c->r[7]=c->r[5]+0x00000006u; // 801754EC
  c->r[6]=c->r[5]+0x00000007u; // 801754F0
  c->r[10]=rotl(c->r[8],0)&0x0000001Fu; // 801754F4
  c->r[29]=c->r[30]|c->r[29]; // 801754F8
  c->r[30]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801754FC
  W32(c->r[3]+c->r[31],c->r[29]); // 80175500
  c->r[28]=((c->r[12])&0x20)?0u:(c->r[0]<<((c->r[12])&31)); // 80175504
  c->r[12]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80175508
  c->r[9]=sraw(c,c->r[7],5); // 8017550C
  c->r[29]=R32(c->r[3]+c->r[30]); // 80175510
  c->r[8]=rotl(c->r[7],0)&0x0000001Fu; // 80175514
  c->r[7]=sraw(c,c->r[6],5); // 80175518
  c->r[11]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 8017551C
  c->r[28]=c->r[29]|c->r[28]; // 80175520
  c->r[10]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80175524
  W32(c->r[3]+c->r[30],c->r[28]); // 80175528
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 8017552C
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80175530
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 80175534
  c->r[7]=R32(c->r[3]+c->r[12]); // 80175538
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 8017553C
  c->r[5]=c->r[5]+0x00000008u; // 80175540
  c->r[7]=c->r[7]|c->r[11]; // 80175544
  W32(c->r[3]+c->r[12],c->r[7]); // 80175548
  c->r[7]=R32(c->r[3]+c->r[10]); // 8017554C
  c->r[7]=c->r[7]|c->r[9]; // 80175550
  W32(c->r[3]+c->r[10],c->r[7]); // 80175554
  c->r[7]=R32(c->r[3]+c->r[8]); // 80175558
  c->r[6]=c->r[7]|c->r[6]; // 8017555C
  W32(c->r[3]+c->r[8],c->r[6]); // 80175560
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80175464; } // 80175564
L_80175568:;
  c->r[4]=c->r[4]+0x0000003Cu; // 80175568
  c->r[6]=c->r[1]+0x0000001Cu; // 8017556C
  c->r[0]=c->r[4]-c->r[5]; // 80175570
  c->r[3]=0u+0x00000001u; // 80175574
  c->ctr=c->r[0]; // 80175578
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 8017557C
  if (!crb(c,0)) { goto L_801755A8; } // 80175580
L_80175584:;
  c->r[4]=sraw(c,c->r[5],5); // 80175584
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; // 80175588
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8017558C
  c->r[5]=c->r[5]+0x00000001u; // 80175590
  c->r[4]=R32(c->r[6]+c->r[7]); // 80175594
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80175598
  c->r[0]=c->r[4]|c->r[0]; // 8017559C
  W32(c->r[6]+c->r[7],c->r[0]); // 801755A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80175584; } // 801755A4
L_801755A8:;
  c->r[3]=0u+0x80620000u; // 801755A8
  c->r[4]=0u+0x00000005u; // 801755AC
  c->r[3]=c->r[3]+0x00007688u; // 801755B0
  c->r[5]=0u+0x00000000u; // 801755B4
  c->r[3]=R32(c->r[3]+0x00000014u); // 801755B8
  c->lr=0x801755C0u; f_801765BC(c); // 801755BC
  cmpu(c,0,c->r[3],0x00000001u); // 801755C0
  if (!crb(c,2)) { goto L_801755D4; } // 801755C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801755C8
  c->r[0]=c->r[0]|0x000000C0u; // 801755CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801755D0
L_801755D4:;
  c->r[29]=0u+0x804C0000u; // 801755D4
  c->r[28]=0u+0x80620000u; // 801755D8
  c->r[29]=c->r[29]+0xFFFF8C30u; // 801755DC
  c->r[30]=0u+0x00000000u; // 801755E0
  c->r[28]=c->r[28]+0x00007688u; // 801755E4
  c->r[31]=0u+0x00000000u; // 801755E8
L_801755EC:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 801755EC
  c->r[4]=0u+0x00000006u; // 801755F0
  c->r[5]=R8(c->r[29]+0x0000000Fu); // 801755F4
  c->lr=0x801755FCu; f_801765BC(c); // 801755F8
  cmpu(c,0,c->r[3],0x00000001u); // 801755FC
  if (!crb(c,2)) { goto L_80175608; } // 80175600
  c->r[30]=c->r[30]+0x00000001u; // 80175604
L_80175608:;
  c->r[31]=c->r[31]+0x00000001u; // 80175608
  c->r[29]=c->r[29]+0x00000001u; // 8017560C
  cmps(c,0,(int32_t)c->r[31],4); // 80175610
  if (crb(c,0)) { IRQCHK(c); goto L_801755EC; } // 80175614
  c->r[4]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80175618
  c->r[5]=0u+0x00000048u; // 8017561C
  c->r[9]=c->r[4]+0x00000048u; // 80175620
  cmps(c,1,(int32_t)c->r[9],72); // 80175624
  if (!crb(c,5)) { goto L_801757F8; } // 80175628
  cmps(c,0,(int32_t)c->r[4],8); // 8017562C
  c->r[7]=c->r[4]+0x00000040u; // 80175630
  if (!crb(c,1)) { goto L_801757B8; } // 80175634
  c->r[6]=0u+0x00000000u; // 80175638
  c->r[8]=0u+0x00000000u; // 8017563C
  if (crb(c,4)) { goto L_80175658; } // 80175640
  c->r[3]=0u+0x80000000u; // 80175644
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80175648
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 8017564C
  if (crb(c,1)) { goto L_80175658; } // 80175650
  c->r[8]=0u+0x00000001u; // 80175654
L_80175658:;
  cmps(c,0,(int32_t)c->r[8],0); // 80175658
  if (crb(c,2)) { goto L_80175690; } // 8017565C
  c->r[8]=rotl(c->r[9],0)&0x80000000u; // 80175660
  c->r[3]=0u+0x00000001u; // 80175664
  c->r[0]=c->r[8]+0x80000000u; // 80175668
  cmpu(c,0,c->r[0],0x00000000u); // 8017566C
  if (!crb(c,2)) { goto L_80175684; } // 80175670
  c->r[0]=rotl(c->r[4],0)&0x80000000u; // 80175674
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80175678
  if (crb(c,2)) { goto L_80175684; } // 8017567C
  c->r[3]=0u+0x00000000u; // 80175680
L_80175684:;
  cmps(c,0,(int32_t)c->r[3],0); // 80175684
  if (crb(c,2)) { goto L_80175690; } // 80175688
  c->r[6]=0u+0x00000001u; // 8017568C
L_80175690:;
  cmps(c,0,(int32_t)c->r[6],0); // 80175690
  if (crb(c,2)) { goto L_801757B8; } // 80175694
  c->r[6]=c->r[7]+0xFFFFFFBFu; // 80175698
  c->r[3]=c->r[1]+0x0000001Cu; // 8017569C
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 801756A0
  c->r[0]=0u+0x00000001u; // 801756A4
  c->ctr=c->r[6]; // 801756A8
  cmps(c,0,(int32_t)c->r[7],72); // 801756AC
  if (!crb(c,1)) { goto L_801757B8; } // 801756B0
L_801756B4:;
  c->r[6]=sraw(c,c->r[5],5); // 801756B4
  c->r[8]=c->r[5]+0x00000001u; // 801756B8
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801756BC
  c->r[6]=rotl(c->r[5],0)&0x0000001Fu; // 801756C0
  c->r[10]=R32(c->r[3]+c->r[11]); // 801756C4
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 801756C8
  c->r[7]=sraw(c,c->r[8],5); // 801756CC
  c->r[10]=c->r[10]|c->r[9]; // 801756D0
  c->r[6]=c->r[5]+0x00000002u; // 801756D4
  W32(c->r[3]+c->r[11],c->r[10]); // 801756D8
  c->r[28]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801756DC
  c->r[9]=rotl(c->r[8],0)&0x0000001Fu; // 801756E0
  c->r[8]=sraw(c,c->r[6],5); // 801756E4
  c->r[12]=R32(c->r[3]+c->r[28]); // 801756E8
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[0]<<((c->r[9])&31)); // 801756EC
  c->r[30]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801756F0
  c->r[7]=c->r[5]+0x00000003u; // 801756F4
  c->r[10]=c->r[12]|c->r[10]; // 801756F8
  c->r[11]=rotl(c->r[6],0)&0x0000001Fu; // 801756FC
  W32(c->r[3]+c->r[28],c->r[10]); // 80175700
  c->r[9]=sraw(c,c->r[7],5); // 80175704
  c->r[6]=c->r[5]+0x00000004u; // 80175708
  c->r[10]=rotl(c->r[7],0)&0x0000001Fu; // 8017570C
  c->r[29]=R32(c->r[3]+c->r[30]); // 80175710
  c->r[7]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 80175714
  c->r[28]=sraw(c,c->r[6],5); // 80175718
  c->r[12]=rotl(c->r[6],0)&0x0000001Fu; // 8017571C
  c->r[6]=c->r[29]|c->r[7]; // 80175720
  c->r[8]=c->r[5]+0x00000005u; // 80175724
  W32(c->r[3]+c->r[30],c->r[6]); // 80175728
  c->r[31]=rotl(c->r[9],2)&0xFFFFFFFCu; // 8017572C
  c->r[29]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 80175730
  c->r[11]=sraw(c,c->r[8],5); // 80175734
  c->r[30]=R32(c->r[3]+c->r[31]); // 80175738
  c->r[7]=c->r[5]+0x00000006u; // 8017573C
  c->r[6]=c->r[5]+0x00000007u; // 80175740
  c->r[10]=rotl(c->r[8],0)&0x0000001Fu; // 80175744
  c->r[29]=c->r[30]|c->r[29]; // 80175748
  c->r[30]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8017574C
  W32(c->r[3]+c->r[31],c->r[29]); // 80175750
  c->r[28]=((c->r[12])&0x20)?0u:(c->r[0]<<((c->r[12])&31)); // 80175754
  c->r[12]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80175758
  c->r[9]=sraw(c,c->r[7],5); // 8017575C
  c->r[29]=R32(c->r[3]+c->r[30]); // 80175760
  c->r[8]=rotl(c->r[7],0)&0x0000001Fu; // 80175764
  c->r[7]=sraw(c,c->r[6],5); // 80175768
  c->r[11]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 8017576C
  c->r[28]=c->r[29]|c->r[28]; // 80175770
  c->r[10]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80175774
  W32(c->r[3]+c->r[30],c->r[28]); // 80175778
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 8017577C
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80175780
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 80175784
  c->r[7]=R32(c->r[3]+c->r[12]); // 80175788
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 8017578C
  c->r[5]=c->r[5]+0x00000008u; // 80175790
  c->r[7]=c->r[7]|c->r[11]; // 80175794
  W32(c->r[3]+c->r[12],c->r[7]); // 80175798
  c->r[7]=R32(c->r[3]+c->r[10]); // 8017579C
  c->r[7]=c->r[7]|c->r[9]; // 801757A0
  W32(c->r[3]+c->r[10],c->r[7]); // 801757A4
  c->r[7]=R32(c->r[3]+c->r[8]); // 801757A8
  c->r[6]=c->r[7]|c->r[6]; // 801757AC
  W32(c->r[3]+c->r[8],c->r[6]); // 801757B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801756B4; } // 801757B4
L_801757B8:;
  c->r[4]=c->r[4]+0x00000048u; // 801757B8
  c->r[6]=c->r[1]+0x0000001Cu; // 801757BC
  c->r[0]=c->r[4]-c->r[5]; // 801757C0
  c->r[3]=0u+0x00000001u; // 801757C4
  c->ctr=c->r[0]; // 801757C8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 801757CC
  if (!crb(c,0)) { goto L_801757F8; } // 801757D0
L_801757D4:;
  c->r[4]=sraw(c,c->r[5],5); // 801757D4
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; // 801757D8
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801757DC
  c->r[5]=c->r[5]+0x00000001u; // 801757E0
  c->r[4]=R32(c->r[6]+c->r[7]); // 801757E4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801757E8
  c->r[0]=c->r[4]|c->r[0]; // 801757EC
  W32(c->r[6]+c->r[7],c->r[0]); // 801757F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801757D4; } // 801757F4
L_801757F8:;
  c->r[3]=c->r[13]+0xFFFFAB38u; // 801757F8
  c->lr=0x80175800u; f_80211724(c); // 801757FC
  c->r[4]=0u+0xCCCD0000u; // 80175800
  c->r[28]=0u+0x80620000u; // 80175804
  c->r[0]=c->r[4]+0xFFFFCCCDu; // 80175808
  c->r[29]=c->r[1]+0x0000001Cu; // 8017580C
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 80175810
  c->r[28]=c->r[28]+0x00007688u; // 80175814
  c->r[26]=0u+0x00000000u; // 80175818
  c->r[30]=0u+0x00000001u; // 8017581C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80175820
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)80); // 80175824
  c->r[27]=c->r[3]-c->r[0]; // 80175828
  c->r[31]=c->r[27]|c->r[27]; // 8017582C
L_80175830:;
  c->r[0]=sraw(c,c->r[31],5); // 80175830
  c->r[3]=rotl(c->r[31],0)&0x0000001Fu; // 80175834
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80175838
  c->r[0]=R32(c->r[29]+c->r[0]); // 8017583C
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[30]<<((c->r[3])&31)); // 80175840
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80175844
  if (crb(c,2)) { goto L_80175868; } // 80175848
  c->r[3]=R32(c->r[28]+0x00000014u); // 8017584C
  c->r[4]=c->r[31]|c->r[31]; // 80175850
  c->lr=0x80175858u; f_801764E4(c); // 80175854
  cmps(c,0,(int32_t)c->r[3],0); // 80175858
  if (!crb(c,2)) { goto L_80175868; } // 8017585C
  c->r[26]=0u+0x00000001u; // 80175860
  goto L_80175880; // 80175864
L_80175868:;
  c->r[31]=c->r[31]+0x00000001u; // 80175868
  cmps(c,0,(int32_t)c->r[31],80); // 8017586C
  if (!crb(c,2)) { goto L_80175878; } // 80175870
  c->r[31]=0u+0x00000000u; // 80175874
L_80175878:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[27]); // 80175878
  if (!crb(c,2)) { IRQCHK(c); goto L_80175830; } // 8017587C
L_80175880:;
  cmps(c,0,(int32_t)c->r[26],0); // 80175880
  if (!crb(c,2)) { goto L_801758CC; } // 80175884
  c->r[3]=0u+0xCCCD0000u; // 80175888
  c->r[28]=c->r[1]+0x0000001Cu; // 8017588C
  c->r[30]=c->r[3]+0xFFFFCCCDu; // 80175890
  c->r[29]=0u+0x00000001u; // 80175894
L_80175898:;
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80175898
  c->lr=0x801758A0u; f_80211724(c); // 8017589C
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[3])>>32); // 801758A0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801758A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)80); // 801758A8
  c->r[31]=c->r[3]-c->r[0]; // 801758AC
  c->r[0]=sraw(c,c->r[31],5); // 801758B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801758B4
  c->r[3]=rotl(c->r[31],0)&0x0000001Fu; // 801758B8
  c->r[0]=R32(c->r[28]+c->r[0]); // 801758BC
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[29]<<((c->r[3])&31)); // 801758C0
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801758C4
  if (crb(c,2)) { IRQCHK(c); goto L_80175898; } // 801758C8
L_801758CC:;
  c->r[3]=0u+0x80620000u; // 801758CC
  c->r[4]=c->r[31]|c->r[31]; // 801758D0
  c->r[3]=c->r[3]+0x00007688u; // 801758D4
  c->r[3]=R32(c->r[3]+0x00000014u); // 801758D8
  c->lr=0x801758E0u; f_80173A44(c); // 801758DC
  c->r[3]=0u+0x80550000u; // 801758E0
  c->r[4]=0u+0x0000001Au; // 801758E4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801758E8
  c->lr=0x801758F0u; f_8019C920(c); // 801758EC
  c->r[4]=0u+0x00000000u; // 801758F0
  c->lr=0x801758F8u; f_80039840(c); // 801758F4
  c->r[0]=c->r[31]+0x00000749u; // 801758F8
  c->r[4]=0u+0x805D0000u; // 801758FC
  c->r[5]=c->r[3]|c->r[3]; // 80175900
  c->r[6]=0u+0x00000001u; // 80175904
  c->r[3]=c->r[4]+0x00001BBCu; // 80175908
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 8017590C
  c->lr=0x80175914u; f_801F1258(c); // 80175910
  goto L_801764CC; // 80175914
L_80175918:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 80175918
  c->lr=0x80175920u; f_80108A84(c); // 8017591C
  c->r[3]=R8(c->r[26]+0x00000004u); // 80175920
  cmpu(c,0,c->r[28],0x00000001u); // 80175924
  c->r[0]=c->r[3]+0xFFFFFFE6u; // 80175928
  c->r[26]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017592C
  if (!crb(c,2)) { goto L_80175958; } // 80175930
  c->r[3]=0u+0x80550000u; // 80175934
  c->r[4]=0u+0x00000001u; // 80175938
  c->r[3]=c->r[3]+0xFFFFCE54u; // 8017593C
  c->r[26]=c->r[26]+0x00000002u; // 80175940
  c->lr=0x80175948u; f_8019C920(c); // 80175944
  c->r[4]=0u+0x00000000u; // 80175948
  c->lr=0x80175950u; f_80039840(c); // 8017594C
  c->r[5]=c->r[3]|c->r[3]; // 80175950
  goto L_80175974; // 80175954
L_80175958:;
  c->r[3]=0u+0x80550000u; // 80175958
  c->r[4]=0u+0x0000001Au; // 8017595C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80175960
  c->lr=0x80175968u; f_8019C920(c); // 80175964
  c->r[4]=0u+0x00000000u; // 80175968
  c->lr=0x80175970u; f_80039840(c); // 8017596C
  c->r[5]=c->r[3]|c->r[3]; // 80175970
L_80175974:;
  c->r[0]=c->r[26]+0x00000703u; // 80175974
  c->r[3]=0u+0x805D0000u; // 80175978
  c->r[6]=0u+0x00000001u; // 8017597C
  c->r[3]=c->r[3]+0x00001BBCu; // 80175980
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80175984
  c->lr=0x8017598Cu; f_801F1258(c); // 80175988
  goto L_801764CC; // 8017598C
L_80175990:;
  c->r[6]=0u+0x00000000u; // 80175990
  c->r[5]=0u+0x00000005u; // 80175994
  W32(c->r[1]+0x00000008u,c->r[6]); // 80175998
  c->r[3]=c->r[1]+0x00000008u; // 8017599C
  c->r[4]=0u+0x00000050u; // 801759A0
  c->r[0]=0u+0x00000001u; // 801759A4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801759A8
  W32(c->r[1]+0x00000010u,c->r[6]); // 801759AC
  W32(c->r[1]+0x00000014u,c->r[6]); // 801759B0
  W32(c->r[1]+0x00000018u,c->r[6]); // 801759B4
  c->ctr=c->r[5]; // 801759B8
L_801759BC:;
  c->r[5]=sraw(c,c->r[4],5); // 801759BC
  c->r[7]=c->r[4]+0x00000001u; // 801759C0
  c->r[10]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801759C4
  c->r[5]=rotl(c->r[4],0)&0x0000001Fu; // 801759C8
  c->r[9]=R32(c->r[3]+c->r[10]); // 801759CC
  c->r[8]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801759D0
  c->r[6]=sraw(c,c->r[7],5); // 801759D4
  c->r[9]=c->r[9]|c->r[8]; // 801759D8
  c->r[5]=c->r[4]+0x00000002u; // 801759DC
  W32(c->r[3]+c->r[10],c->r[9]); // 801759E0
  c->r[12]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801759E4
  c->r[8]=rotl(c->r[7],0)&0x0000001Fu; // 801759E8
  c->r[7]=sraw(c,c->r[5],5); // 801759EC
  c->r[11]=R32(c->r[3]+c->r[12]); // 801759F0
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 801759F4
  c->r[29]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801759F8
  c->r[6]=c->r[4]+0x00000003u; // 801759FC
  c->r[9]=c->r[11]|c->r[9]; // 80175A00
  c->r[10]=rotl(c->r[5],0)&0x0000001Fu; // 80175A04
  W32(c->r[3]+c->r[12],c->r[9]); // 80175A08
  c->r[8]=sraw(c,c->r[6],5); // 80175A0C
  c->r[5]=c->r[4]+0x00000004u; // 80175A10
  c->r[9]=rotl(c->r[6],0)&0x0000001Fu; // 80175A14
  c->r[28]=R32(c->r[3]+c->r[29]); // 80175A18
  c->r[6]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 80175A1C
  c->r[12]=sraw(c,c->r[5],5); // 80175A20
  c->r[11]=rotl(c->r[5],0)&0x0000001Fu; // 80175A24
  c->r[5]=c->r[28]|c->r[6]; // 80175A28
  c->r[7]=c->r[4]+0x00000005u; // 80175A2C
  W32(c->r[3]+c->r[29],c->r[5]); // 80175A30
  c->r[30]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80175A34
  c->r[28]=((c->r[9])&0x20)?0u:(c->r[0]<<((c->r[9])&31)); // 80175A38
  c->r[10]=sraw(c,c->r[7],5); // 80175A3C
  c->r[29]=R32(c->r[3]+c->r[30]); // 80175A40
  c->r[6]=c->r[4]+0x00000006u; // 80175A44
  c->r[5]=c->r[4]+0x00000007u; // 80175A48
  c->r[9]=rotl(c->r[7],0)&0x0000001Fu; // 80175A4C
  c->r[28]=c->r[29]|c->r[28]; // 80175A50
  c->r[29]=rotl(c->r[12],2)&0xFFFFFFFCu; // 80175A54
  W32(c->r[3]+c->r[30],c->r[28]); // 80175A58
  c->r[12]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 80175A5C
  c->r[11]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80175A60
  c->r[8]=sraw(c,c->r[6],5); // 80175A64
  c->r[28]=R32(c->r[3]+c->r[29]); // 80175A68
  c->r[7]=rotl(c->r[6],0)&0x0000001Fu; // 80175A6C
  c->r[6]=sraw(c,c->r[5],5); // 80175A70
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[0]<<((c->r[9])&31)); // 80175A74
  c->r[12]=c->r[28]|c->r[12]; // 80175A78
  c->r[9]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80175A7C
  W32(c->r[3]+c->r[29],c->r[12]); // 80175A80
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[0]<<((c->r[7])&31)); // 80175A84
  c->r[7]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80175A88
  c->r[5]=rotl(c->r[5],0)&0x0000001Fu; // 80175A8C
  c->r[6]=R32(c->r[3]+c->r[11]); // 80175A90
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 80175A94
  c->r[4]=c->r[4]+0x00000008u; // 80175A98
  c->r[6]=c->r[6]|c->r[10]; // 80175A9C
  W32(c->r[3]+c->r[11],c->r[6]); // 80175AA0
  c->r[6]=R32(c->r[3]+c->r[9]); // 80175AA4
  c->r[6]=c->r[6]|c->r[8]; // 80175AA8
  W32(c->r[3]+c->r[9],c->r[6]); // 80175AAC
  c->r[6]=R32(c->r[3]+c->r[7]); // 80175AB0
  c->r[5]=c->r[6]|c->r[5]; // 80175AB4
  W32(c->r[3]+c->r[7],c->r[5]); // 80175AB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801759BC; } // 80175ABC
  c->r[29]=0u+0x804C0000u; // 80175AC0
  c->r[28]=0u+0x80620000u; // 80175AC4
  c->r[29]=c->r[29]+0xFFFF8C30u; // 80175AC8
  c->r[26]=0u+0x00000000u; // 80175ACC
  c->r[28]=c->r[28]+0x00007688u; // 80175AD0
  c->r[27]=0u+0x00000000u; // 80175AD4
L_80175AD8:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80175AD8
  c->r[4]=0u+0x00000002u; // 80175ADC
  c->r[5]=R8(c->r[29]+0x00000000u); // 80175AE0
  c->lr=0x80175AE8u; f_801765BC(c); // 80175AE4
  cmpu(c,0,c->r[3],0x00000001u); // 80175AE8
  if (!crb(c,2)) { goto L_80175AF4; } // 80175AEC
  c->r[26]=c->r[26]+0x00000001u; // 80175AF0
L_80175AF4:;
  c->r[27]=c->r[27]+0x00000001u; // 80175AF4
  c->r[29]=c->r[29]+0x00000001u; // 80175AF8
  cmps(c,0,(int32_t)c->r[27],5); // 80175AFC
  if (crb(c,0)) { IRQCHK(c); goto L_80175AD8; } // 80175B00
  c->r[4]=rotl(c->r[26],1)&0xFFFFFFFEu; // 80175B04
  c->r[5]=0u+0x00000078u; // 80175B08
  c->r[9]=c->r[4]+0x00000078u; // 80175B0C
  cmps(c,1,(int32_t)c->r[9],120); // 80175B10
  if (!crb(c,5)) { goto L_80175CE4; } // 80175B14
  cmps(c,0,(int32_t)c->r[4],8); // 80175B18
  c->r[7]=c->r[4]+0x00000070u; // 80175B1C
  if (!crb(c,1)) { goto L_80175CA4; } // 80175B20
  c->r[6]=0u+0x00000000u; // 80175B24
  c->r[8]=0u+0x00000000u; // 80175B28
  if (crb(c,4)) { goto L_80175B44; } // 80175B2C
  c->r[3]=0u+0x80000000u; // 80175B30
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80175B34
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 80175B38
  if (crb(c,1)) { goto L_80175B44; } // 80175B3C
  c->r[8]=0u+0x00000001u; // 80175B40
L_80175B44:;
  cmps(c,0,(int32_t)c->r[8],0); // 80175B44
  if (crb(c,2)) { goto L_80175B7C; } // 80175B48
  c->r[8]=rotl(c->r[9],0)&0x80000000u; // 80175B4C
  c->r[3]=0u+0x00000001u; // 80175B50
  c->r[0]=c->r[8]+0x80000000u; // 80175B54
  cmpu(c,0,c->r[0],0x00000000u); // 80175B58
  if (!crb(c,2)) { goto L_80175B70; } // 80175B5C
  c->r[0]=rotl(c->r[4],0)&0x80000000u; // 80175B60
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80175B64
  if (crb(c,2)) { goto L_80175B70; } // 80175B68
  c->r[3]=0u+0x00000000u; // 80175B6C
L_80175B70:;
  cmps(c,0,(int32_t)c->r[3],0); // 80175B70
  if (crb(c,2)) { goto L_80175B7C; } // 80175B74
  c->r[6]=0u+0x00000001u; // 80175B78
L_80175B7C:;
  cmps(c,0,(int32_t)c->r[6],0); // 80175B7C
  if (crb(c,2)) { goto L_80175CA4; } // 80175B80
  c->r[6]=c->r[7]+0xFFFFFF8Fu; // 80175B84
  c->r[3]=c->r[1]+0x00000008u; // 80175B88
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80175B8C
  c->r[0]=0u+0x00000001u; // 80175B90
  c->ctr=c->r[6]; // 80175B94
  cmps(c,0,(int32_t)c->r[7],120); // 80175B98
  if (!crb(c,1)) { goto L_80175CA4; } // 80175B9C
L_80175BA0:;
  c->r[6]=sraw(c,c->r[5],5); // 80175BA0
  c->r[8]=c->r[5]+0x00000001u; // 80175BA4
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80175BA8
  c->r[6]=rotl(c->r[5],0)&0x0000001Fu; // 80175BAC
  c->r[10]=R32(c->r[3]+c->r[11]); // 80175BB0
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80175BB4
  c->r[7]=sraw(c,c->r[8],5); // 80175BB8
  c->r[10]=c->r[10]|c->r[9]; // 80175BBC
  c->r[6]=c->r[5]+0x00000002u; // 80175BC0
  W32(c->r[3]+c->r[11],c->r[10]); // 80175BC4
  c->r[28]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80175BC8
  c->r[9]=rotl(c->r[8],0)&0x0000001Fu; // 80175BCC
  c->r[8]=sraw(c,c->r[6],5); // 80175BD0
  c->r[12]=R32(c->r[3]+c->r[28]); // 80175BD4
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[0]<<((c->r[9])&31)); // 80175BD8
  c->r[30]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80175BDC
  c->r[7]=c->r[5]+0x00000003u; // 80175BE0
  c->r[10]=c->r[12]|c->r[10]; // 80175BE4
  c->r[11]=rotl(c->r[6],0)&0x0000001Fu; // 80175BE8
  W32(c->r[3]+c->r[28],c->r[10]); // 80175BEC
  c->r[9]=sraw(c,c->r[7],5); // 80175BF0
  c->r[6]=c->r[5]+0x00000004u; // 80175BF4
  c->r[10]=rotl(c->r[7],0)&0x0000001Fu; // 80175BF8
  c->r[29]=R32(c->r[3]+c->r[30]); // 80175BFC
  c->r[7]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 80175C00
  c->r[28]=sraw(c,c->r[6],5); // 80175C04
  c->r[12]=rotl(c->r[6],0)&0x0000001Fu; // 80175C08
  c->r[6]=c->r[29]|c->r[7]; // 80175C0C
  c->r[8]=c->r[5]+0x00000005u; // 80175C10
  W32(c->r[3]+c->r[30],c->r[6]); // 80175C14
  c->r[31]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80175C18
  c->r[29]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 80175C1C
  c->r[11]=sraw(c,c->r[8],5); // 80175C20
  c->r[30]=R32(c->r[3]+c->r[31]); // 80175C24
  c->r[7]=c->r[5]+0x00000006u; // 80175C28
  c->r[6]=c->r[5]+0x00000007u; // 80175C2C
  c->r[10]=rotl(c->r[8],0)&0x0000001Fu; // 80175C30
  c->r[29]=c->r[30]|c->r[29]; // 80175C34
  c->r[30]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80175C38
  W32(c->r[3]+c->r[31],c->r[29]); // 80175C3C
  c->r[28]=((c->r[12])&0x20)?0u:(c->r[0]<<((c->r[12])&31)); // 80175C40
  c->r[12]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80175C44
  c->r[9]=sraw(c,c->r[7],5); // 80175C48
  c->r[29]=R32(c->r[3]+c->r[30]); // 80175C4C
  c->r[8]=rotl(c->r[7],0)&0x0000001Fu; // 80175C50
  c->r[7]=sraw(c,c->r[6],5); // 80175C54
  c->r[11]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 80175C58
  c->r[28]=c->r[29]|c->r[28]; // 80175C5C
  c->r[10]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80175C60
  W32(c->r[3]+c->r[30],c->r[28]); // 80175C64
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 80175C68
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80175C6C
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 80175C70
  c->r[7]=R32(c->r[3]+c->r[12]); // 80175C74
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80175C78
  c->r[5]=c->r[5]+0x00000008u; // 80175C7C
  c->r[7]=c->r[7]|c->r[11]; // 80175C80
  W32(c->r[3]+c->r[12],c->r[7]); // 80175C84
  c->r[7]=R32(c->r[3]+c->r[10]); // 80175C88
  c->r[7]=c->r[7]|c->r[9]; // 80175C8C
  W32(c->r[3]+c->r[10],c->r[7]); // 80175C90
  c->r[7]=R32(c->r[3]+c->r[8]); // 80175C94
  c->r[6]=c->r[7]|c->r[6]; // 80175C98
  W32(c->r[3]+c->r[8],c->r[6]); // 80175C9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80175BA0; } // 80175CA0
L_80175CA4:;
  c->r[4]=c->r[4]+0x00000078u; // 80175CA4
  c->r[6]=c->r[1]+0x00000008u; // 80175CA8
  c->r[0]=c->r[4]-c->r[5]; // 80175CAC
  c->r[3]=0u+0x00000001u; // 80175CB0
  c->ctr=c->r[0]; // 80175CB4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80175CB8
  if (!crb(c,0)) { goto L_80175CE4; } // 80175CBC
L_80175CC0:;
  c->r[4]=sraw(c,c->r[5],5); // 80175CC0
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; // 80175CC4
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80175CC8
  c->r[5]=c->r[5]+0x00000001u; // 80175CCC
  c->r[4]=R32(c->r[6]+c->r[7]); // 80175CD0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80175CD4
  c->r[0]=c->r[4]|c->r[0]; // 80175CD8
  W32(c->r[6]+c->r[7],c->r[0]); // 80175CDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80175CC0; } // 80175CE0
L_80175CE4:;
  c->r[29]=0u+0x804C0000u; // 80175CE4
  c->r[28]=0u+0x80620000u; // 80175CE8
  c->r[29]=c->r[29]+0xFFFF8C30u; // 80175CEC
  c->r[30]=0u+0x00000000u; // 80175CF0
  c->r[28]=c->r[28]+0x00007688u; // 80175CF4
  c->r[26]=0u+0x00000000u; // 80175CF8
L_80175CFC:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80175CFC
  c->r[4]=0u+0x00000003u; // 80175D00
  c->r[5]=R8(c->r[29]+0x00000005u); // 80175D04
  c->lr=0x80175D0Cu; f_801765BC(c); // 80175D08
  cmpu(c,0,c->r[3],0x00000001u); // 80175D0C
  if (!crb(c,2)) { goto L_80175D18; } // 80175D10
  c->r[30]=c->r[30]+0x00000001u; // 80175D14
L_80175D18:;
  c->r[26]=c->r[26]+0x00000001u; // 80175D18
  c->r[29]=c->r[29]+0x00000001u; // 80175D1C
  cmps(c,0,(int32_t)c->r[26],4); // 80175D20
  if (crb(c,0)) { IRQCHK(c); goto L_80175CFC; } // 80175D24
  c->r[4]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80175D28
  c->r[5]=0u+0x00000082u; // 80175D2C
  c->r[9]=c->r[4]+0x00000082u; // 80175D30
  cmps(c,1,(int32_t)c->r[9],130); // 80175D34
  if (!crb(c,5)) { goto L_80175F08; } // 80175D38
  cmps(c,0,(int32_t)c->r[4],8); // 80175D3C
  c->r[7]=c->r[4]+0x0000007Au; // 80175D40
  if (!crb(c,1)) { goto L_80175EC8; } // 80175D44
  c->r[6]=0u+0x00000000u; // 80175D48
  c->r[8]=0u+0x00000000u; // 80175D4C
  if (crb(c,4)) { goto L_80175D68; } // 80175D50
  c->r[3]=0u+0x80000000u; // 80175D54
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80175D58
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 80175D5C
  if (crb(c,1)) { goto L_80175D68; } // 80175D60
  c->r[8]=0u+0x00000001u; // 80175D64
L_80175D68:;
  cmps(c,0,(int32_t)c->r[8],0); // 80175D68
  if (crb(c,2)) { goto L_80175DA0; } // 80175D6C
  c->r[8]=rotl(c->r[9],0)&0x80000000u; // 80175D70
  c->r[3]=0u+0x00000001u; // 80175D74
  c->r[0]=c->r[8]+0x80000000u; // 80175D78
  cmpu(c,0,c->r[0],0x00000000u); // 80175D7C
  if (!crb(c,2)) { goto L_80175D94; } // 80175D80
  c->r[0]=rotl(c->r[4],0)&0x80000000u; // 80175D84
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80175D88
  if (crb(c,2)) { goto L_80175D94; } // 80175D8C
  c->r[3]=0u+0x00000000u; // 80175D90
L_80175D94:;
  cmps(c,0,(int32_t)c->r[3],0); // 80175D94
  if (crb(c,2)) { goto L_80175DA0; } // 80175D98
  c->r[6]=0u+0x00000001u; // 80175D9C
L_80175DA0:;
  cmps(c,0,(int32_t)c->r[6],0); // 80175DA0
  if (crb(c,2)) { goto L_80175EC8; } // 80175DA4
  c->r[6]=c->r[7]+0xFFFFFF85u; // 80175DA8
  c->r[3]=c->r[1]+0x00000008u; // 80175DAC
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80175DB0
  c->r[0]=0u+0x00000001u; // 80175DB4
  c->ctr=c->r[6]; // 80175DB8
  cmps(c,0,(int32_t)c->r[7],130); // 80175DBC
  if (!crb(c,1)) { goto L_80175EC8; } // 80175DC0
L_80175DC4:;
  c->r[6]=sraw(c,c->r[5],5); // 80175DC4
  c->r[8]=c->r[5]+0x00000001u; // 80175DC8
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80175DCC
  c->r[6]=rotl(c->r[5],0)&0x0000001Fu; // 80175DD0
  c->r[10]=R32(c->r[3]+c->r[11]); // 80175DD4
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80175DD8
  c->r[7]=sraw(c,c->r[8],5); // 80175DDC
  c->r[10]=c->r[10]|c->r[9]; // 80175DE0
  c->r[6]=c->r[5]+0x00000002u; // 80175DE4
  W32(c->r[3]+c->r[11],c->r[10]); // 80175DE8
  c->r[28]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80175DEC
  c->r[9]=rotl(c->r[8],0)&0x0000001Fu; // 80175DF0
  c->r[8]=sraw(c,c->r[6],5); // 80175DF4
  c->r[12]=R32(c->r[3]+c->r[28]); // 80175DF8
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[0]<<((c->r[9])&31)); // 80175DFC
  c->r[30]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80175E00
  c->r[7]=c->r[5]+0x00000003u; // 80175E04
  c->r[10]=c->r[12]|c->r[10]; // 80175E08
  c->r[11]=rotl(c->r[6],0)&0x0000001Fu; // 80175E0C
  W32(c->r[3]+c->r[28],c->r[10]); // 80175E10
  c->r[9]=sraw(c,c->r[7],5); // 80175E14
  c->r[6]=c->r[5]+0x00000004u; // 80175E18
  c->r[10]=rotl(c->r[7],0)&0x0000001Fu; // 80175E1C
  c->r[29]=R32(c->r[3]+c->r[30]); // 80175E20
  c->r[7]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 80175E24
  c->r[28]=sraw(c,c->r[6],5); // 80175E28
  c->r[12]=rotl(c->r[6],0)&0x0000001Fu; // 80175E2C
  c->r[6]=c->r[29]|c->r[7]; // 80175E30
  c->r[8]=c->r[5]+0x00000005u; // 80175E34
  W32(c->r[3]+c->r[30],c->r[6]); // 80175E38
  c->r[31]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80175E3C
  c->r[29]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 80175E40
  c->r[11]=sraw(c,c->r[8],5); // 80175E44
  c->r[30]=R32(c->r[3]+c->r[31]); // 80175E48
  c->r[7]=c->r[5]+0x00000006u; // 80175E4C
  c->r[6]=c->r[5]+0x00000007u; // 80175E50
  c->r[10]=rotl(c->r[8],0)&0x0000001Fu; // 80175E54
  c->r[29]=c->r[30]|c->r[29]; // 80175E58
  c->r[30]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80175E5C
  W32(c->r[3]+c->r[31],c->r[29]); // 80175E60
  c->r[28]=((c->r[12])&0x20)?0u:(c->r[0]<<((c->r[12])&31)); // 80175E64
  c->r[12]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80175E68
  c->r[9]=sraw(c,c->r[7],5); // 80175E6C
  c->r[29]=R32(c->r[3]+c->r[30]); // 80175E70
  c->r[8]=rotl(c->r[7],0)&0x0000001Fu; // 80175E74
  c->r[7]=sraw(c,c->r[6],5); // 80175E78
  c->r[11]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 80175E7C
  c->r[28]=c->r[29]|c->r[28]; // 80175E80
  c->r[10]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80175E84
  W32(c->r[3]+c->r[30],c->r[28]); // 80175E88
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 80175E8C
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80175E90
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 80175E94
  c->r[7]=R32(c->r[3]+c->r[12]); // 80175E98
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80175E9C
  c->r[5]=c->r[5]+0x00000008u; // 80175EA0
  c->r[7]=c->r[7]|c->r[11]; // 80175EA4
  W32(c->r[3]+c->r[12],c->r[7]); // 80175EA8
  c->r[7]=R32(c->r[3]+c->r[10]); // 80175EAC
  c->r[7]=c->r[7]|c->r[9]; // 80175EB0
  W32(c->r[3]+c->r[10],c->r[7]); // 80175EB4
  c->r[7]=R32(c->r[3]+c->r[8]); // 80175EB8
  c->r[6]=c->r[7]|c->r[6]; // 80175EBC
  W32(c->r[3]+c->r[8],c->r[6]); // 80175EC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80175DC4; } // 80175EC4
L_80175EC8:;
  c->r[4]=c->r[4]+0x00000082u; // 80175EC8
  c->r[6]=c->r[1]+0x00000008u; // 80175ECC
  c->r[0]=c->r[4]-c->r[5]; // 80175ED0
  c->r[3]=0u+0x00000001u; // 80175ED4
  c->ctr=c->r[0]; // 80175ED8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80175EDC
  if (!crb(c,0)) { goto L_80175F08; } // 80175EE0
L_80175EE4:;
  c->r[4]=sraw(c,c->r[5],5); // 80175EE4
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; // 80175EE8
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80175EEC
  c->r[5]=c->r[5]+0x00000001u; // 80175EF0
  c->r[4]=R32(c->r[6]+c->r[7]); // 80175EF4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80175EF8
  c->r[0]=c->r[4]|c->r[0]; // 80175EFC
  W32(c->r[6]+c->r[7],c->r[0]); // 80175F00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80175EE4; } // 80175F04
L_80175F08:;
  c->r[29]=0u+0x804C0000u; // 80175F08
  c->r[28]=0u+0x80620000u; // 80175F0C
  c->r[29]=c->r[29]+0xFFFF8C30u; // 80175F10
  c->r[30]=0u+0x00000000u; // 80175F14
  c->r[28]=c->r[28]+0x00007688u; // 80175F18
  c->r[26]=0u+0x00000000u; // 80175F1C
L_80175F20:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80175F20
  c->r[4]=0u+0x00000004u; // 80175F24
  c->r[5]=R8(c->r[29]+0x0000000Au); // 80175F28
  c->lr=0x80175F30u; f_801765BC(c); // 80175F2C
  cmpu(c,0,c->r[3],0x00000001u); // 80175F30
  if (!crb(c,2)) { goto L_80175F3C; } // 80175F34
  c->r[30]=c->r[30]+0x00000001u; // 80175F38
L_80175F3C:;
  c->r[26]=c->r[26]+0x00000001u; // 80175F3C
  c->r[29]=c->r[29]+0x00000001u; // 80175F40
  cmps(c,0,(int32_t)c->r[26],5); // 80175F44
  if (crb(c,0)) { IRQCHK(c); goto L_80175F20; } // 80175F48
  c->r[4]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80175F4C
  c->r[5]=0u+0x0000008Au; // 80175F50
  c->r[9]=c->r[4]+0x0000008Au; // 80175F54
  cmps(c,1,(int32_t)c->r[9],138); // 80175F58
  if (!crb(c,5)) { goto L_8017612C; } // 80175F5C
  cmps(c,0,(int32_t)c->r[4],8); // 80175F60
  c->r[7]=c->r[4]+0x00000082u; // 80175F64
  if (!crb(c,1)) { goto L_801760EC; } // 80175F68
  c->r[6]=0u+0x00000000u; // 80175F6C
  c->r[8]=0u+0x00000000u; // 80175F70
  if (crb(c,4)) { goto L_80175F8C; } // 80175F74
  c->r[3]=0u+0x80000000u; // 80175F78
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80175F7C
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 80175F80
  if (crb(c,1)) { goto L_80175F8C; } // 80175F84
  c->r[8]=0u+0x00000001u; // 80175F88
L_80175F8C:;
  cmps(c,0,(int32_t)c->r[8],0); // 80175F8C
  if (crb(c,2)) { goto L_80175FC4; } // 80175F90
  c->r[8]=rotl(c->r[9],0)&0x80000000u; // 80175F94
  c->r[3]=0u+0x00000001u; // 80175F98
  c->r[0]=c->r[8]+0x80000000u; // 80175F9C
  cmpu(c,0,c->r[0],0x00000000u); // 80175FA0
  if (!crb(c,2)) { goto L_80175FB8; } // 80175FA4
  c->r[0]=rotl(c->r[4],0)&0x80000000u; // 80175FA8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80175FAC
  if (crb(c,2)) { goto L_80175FB8; } // 80175FB0
  c->r[3]=0u+0x00000000u; // 80175FB4
L_80175FB8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80175FB8
  if (crb(c,2)) { goto L_80175FC4; } // 80175FBC
  c->r[6]=0u+0x00000001u; // 80175FC0
L_80175FC4:;
  cmps(c,0,(int32_t)c->r[6],0); // 80175FC4
  if (crb(c,2)) { goto L_801760EC; } // 80175FC8
  c->r[6]=c->r[7]+0xFFFFFF7Du; // 80175FCC
  c->r[3]=c->r[1]+0x00000008u; // 80175FD0
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80175FD4
  c->r[0]=0u+0x00000001u; // 80175FD8
  c->ctr=c->r[6]; // 80175FDC
  cmps(c,0,(int32_t)c->r[7],138); // 80175FE0
  if (!crb(c,1)) { goto L_801760EC; } // 80175FE4
L_80175FE8:;
  c->r[6]=sraw(c,c->r[5],5); // 80175FE8
  c->r[8]=c->r[5]+0x00000001u; // 80175FEC
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80175FF0
  c->r[6]=rotl(c->r[5],0)&0x0000001Fu; // 80175FF4
  c->r[10]=R32(c->r[3]+c->r[11]); // 80175FF8
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80175FFC
  c->r[7]=sraw(c,c->r[8],5); // 80176000
  c->r[10]=c->r[10]|c->r[9]; // 80176004
  c->r[6]=c->r[5]+0x00000002u; // 80176008
  W32(c->r[3]+c->r[11],c->r[10]); // 8017600C
  c->r[28]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80176010
  c->r[9]=rotl(c->r[8],0)&0x0000001Fu; // 80176014
  c->r[8]=sraw(c,c->r[6],5); // 80176018
  c->r[12]=R32(c->r[3]+c->r[28]); // 8017601C
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[0]<<((c->r[9])&31)); // 80176020
  c->r[30]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80176024
  c->r[7]=c->r[5]+0x00000003u; // 80176028
  c->r[10]=c->r[12]|c->r[10]; // 8017602C
  c->r[11]=rotl(c->r[6],0)&0x0000001Fu; // 80176030
  W32(c->r[3]+c->r[28],c->r[10]); // 80176034
  c->r[9]=sraw(c,c->r[7],5); // 80176038
  c->r[6]=c->r[5]+0x00000004u; // 8017603C
  c->r[10]=rotl(c->r[7],0)&0x0000001Fu; // 80176040
  c->r[29]=R32(c->r[3]+c->r[30]); // 80176044
  c->r[7]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 80176048
  c->r[28]=sraw(c,c->r[6],5); // 8017604C
  c->r[12]=rotl(c->r[6],0)&0x0000001Fu; // 80176050
  c->r[6]=c->r[29]|c->r[7]; // 80176054
  c->r[8]=c->r[5]+0x00000005u; // 80176058
  W32(c->r[3]+c->r[30],c->r[6]); // 8017605C
  c->r[31]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80176060
  c->r[29]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 80176064
  c->r[11]=sraw(c,c->r[8],5); // 80176068
  c->r[30]=R32(c->r[3]+c->r[31]); // 8017606C
  c->r[7]=c->r[5]+0x00000006u; // 80176070
  c->r[6]=c->r[5]+0x00000007u; // 80176074
  c->r[10]=rotl(c->r[8],0)&0x0000001Fu; // 80176078
  c->r[29]=c->r[30]|c->r[29]; // 8017607C
  c->r[30]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80176080
  W32(c->r[3]+c->r[31],c->r[29]); // 80176084
  c->r[28]=((c->r[12])&0x20)?0u:(c->r[0]<<((c->r[12])&31)); // 80176088
  c->r[12]=rotl(c->r[11],2)&0xFFFFFFFCu; // 8017608C
  c->r[9]=sraw(c,c->r[7],5); // 80176090
  c->r[29]=R32(c->r[3]+c->r[30]); // 80176094
  c->r[8]=rotl(c->r[7],0)&0x0000001Fu; // 80176098
  c->r[7]=sraw(c,c->r[6],5); // 8017609C
  c->r[11]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 801760A0
  c->r[28]=c->r[29]|c->r[28]; // 801760A4
  c->r[10]=rotl(c->r[9],2)&0xFFFFFFFCu; // 801760A8
  W32(c->r[3]+c->r[30],c->r[28]); // 801760AC
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 801760B0
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801760B4
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 801760B8
  c->r[7]=R32(c->r[3]+c->r[12]); // 801760BC
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 801760C0
  c->r[5]=c->r[5]+0x00000008u; // 801760C4
  c->r[7]=c->r[7]|c->r[11]; // 801760C8
  W32(c->r[3]+c->r[12],c->r[7]); // 801760CC
  c->r[7]=R32(c->r[3]+c->r[10]); // 801760D0
  c->r[7]=c->r[7]|c->r[9]; // 801760D4
  W32(c->r[3]+c->r[10],c->r[7]); // 801760D8
  c->r[7]=R32(c->r[3]+c->r[8]); // 801760DC
  c->r[6]=c->r[7]|c->r[6]; // 801760E0
  W32(c->r[3]+c->r[8],c->r[6]); // 801760E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80175FE8; } // 801760E8
L_801760EC:;
  c->r[4]=c->r[4]+0x0000008Au; // 801760EC
  c->r[6]=c->r[1]+0x00000008u; // 801760F0
  c->r[0]=c->r[4]-c->r[5]; // 801760F4
  c->r[3]=0u+0x00000001u; // 801760F8
  c->ctr=c->r[0]; // 801760FC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80176100
  if (!crb(c,0)) { goto L_8017612C; } // 80176104
L_80176108:;
  c->r[4]=sraw(c,c->r[5],5); // 80176108
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; // 8017610C
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80176110
  c->r[5]=c->r[5]+0x00000001u; // 80176114
  c->r[4]=R32(c->r[6]+c->r[7]); // 80176118
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8017611C
  c->r[0]=c->r[4]|c->r[0]; // 80176120
  W32(c->r[6]+c->r[7],c->r[0]); // 80176124
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80176108; } // 80176128
L_8017612C:;
  c->r[3]=0u+0x80620000u; // 8017612C
  c->r[4]=0u+0x00000005u; // 80176130
  c->r[3]=c->r[3]+0x00007688u; // 80176134
  c->r[5]=0u+0x00000000u; // 80176138
  c->r[3]=R32(c->r[3]+0x00000014u); // 8017613C
  c->lr=0x80176144u; f_801765BC(c); // 80176140
  cmpu(c,0,c->r[3],0x00000001u); // 80176144
  if (!crb(c,2)) { goto L_80176158; } // 80176148
  c->r[0]=R32(c->r[1]+0x00000018u); // 8017614C
  c->r[0]=c->r[0]|0x00300000u; // 80176150
  W32(c->r[1]+0x00000018u,c->r[0]); // 80176154
L_80176158:;
  c->r[29]=0u+0x804C0000u; // 80176158
  c->r[28]=0u+0x80620000u; // 8017615C
  c->r[29]=c->r[29]+0xFFFF8C30u; // 80176160
  c->r[30]=0u+0x00000000u; // 80176164
  c->r[28]=c->r[28]+0x00007688u; // 80176168
  c->r[26]=0u+0x00000000u; // 8017616C
L_80176170:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80176170
  c->r[4]=0u+0x00000006u; // 80176174
  c->r[5]=R8(c->r[29]+0x0000000Fu); // 80176178
  c->lr=0x80176180u; f_801765BC(c); // 8017617C
  cmpu(c,0,c->r[3],0x00000001u); // 80176180
  if (!crb(c,2)) { goto L_8017618C; } // 80176184
  c->r[30]=c->r[30]+0x00000001u; // 80176188
L_8017618C:;
  c->r[26]=c->r[26]+0x00000001u; // 8017618C
  c->r[29]=c->r[29]+0x00000001u; // 80176190
  cmps(c,0,(int32_t)c->r[26],4); // 80176194
  if (crb(c,0)) { IRQCHK(c); goto L_80176170; } // 80176198
  c->r[4]=rotl(c->r[30],1)&0xFFFFFFFEu; // 8017619C
  c->r[5]=0u+0x00000096u; // 801761A0
  c->r[9]=c->r[4]+0x00000096u; // 801761A4
  cmps(c,1,(int32_t)c->r[9],150); // 801761A8
  if (!crb(c,5)) { goto L_8017637C; } // 801761AC
  cmps(c,0,(int32_t)c->r[4],8); // 801761B0
  c->r[7]=c->r[4]+0x0000008Eu; // 801761B4
  if (!crb(c,1)) { goto L_8017633C; } // 801761B8
  c->r[6]=0u+0x00000000u; // 801761BC
  c->r[8]=0u+0x00000000u; // 801761C0
  if (crb(c,4)) { goto L_801761DC; } // 801761C4
  c->r[3]=0u+0x80000000u; // 801761C8
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801761CC
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 801761D0
  if (crb(c,1)) { goto L_801761DC; } // 801761D4
  c->r[8]=0u+0x00000001u; // 801761D8
L_801761DC:;
  cmps(c,0,(int32_t)c->r[8],0); // 801761DC
  if (crb(c,2)) { goto L_80176214; } // 801761E0
  c->r[8]=rotl(c->r[9],0)&0x80000000u; // 801761E4
  c->r[3]=0u+0x00000001u; // 801761E8
  c->r[0]=c->r[8]+0x80000000u; // 801761EC
  cmpu(c,0,c->r[0],0x00000000u); // 801761F0
  if (!crb(c,2)) { goto L_80176208; } // 801761F4
  c->r[0]=rotl(c->r[4],0)&0x80000000u; // 801761F8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801761FC
  if (crb(c,2)) { goto L_80176208; } // 80176200
  c->r[3]=0u+0x00000000u; // 80176204
L_80176208:;
  cmps(c,0,(int32_t)c->r[3],0); // 80176208
  if (crb(c,2)) { goto L_80176214; } // 8017620C
  c->r[6]=0u+0x00000001u; // 80176210
L_80176214:;
  cmps(c,0,(int32_t)c->r[6],0); // 80176214
  if (crb(c,2)) { goto L_8017633C; } // 80176218
  c->r[6]=c->r[7]+0xFFFFFF71u; // 8017621C
  c->r[3]=c->r[1]+0x00000008u; // 80176220
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80176224
  c->r[0]=0u+0x00000001u; // 80176228
  c->ctr=c->r[6]; // 8017622C
  cmps(c,0,(int32_t)c->r[7],150); // 80176230
  if (!crb(c,1)) { goto L_8017633C; } // 80176234
L_80176238:;
  c->r[6]=sraw(c,c->r[5],5); // 80176238
  c->r[8]=c->r[5]+0x00000001u; // 8017623C
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80176240
  c->r[6]=rotl(c->r[5],0)&0x0000001Fu; // 80176244
  c->r[10]=R32(c->r[3]+c->r[11]); // 80176248
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 8017624C
  c->r[7]=sraw(c,c->r[8],5); // 80176250
  c->r[10]=c->r[10]|c->r[9]; // 80176254
  c->r[6]=c->r[5]+0x00000002u; // 80176258
  W32(c->r[3]+c->r[11],c->r[10]); // 8017625C
  c->r[28]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80176260
  c->r[9]=rotl(c->r[8],0)&0x0000001Fu; // 80176264
  c->r[8]=sraw(c,c->r[6],5); // 80176268
  c->r[12]=R32(c->r[3]+c->r[28]); // 8017626C
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[0]<<((c->r[9])&31)); // 80176270
  c->r[30]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80176274
  c->r[7]=c->r[5]+0x00000003u; // 80176278
  c->r[10]=c->r[12]|c->r[10]; // 8017627C
  c->r[11]=rotl(c->r[6],0)&0x0000001Fu; // 80176280
  W32(c->r[3]+c->r[28],c->r[10]); // 80176284
  c->r[9]=sraw(c,c->r[7],5); // 80176288
  c->r[6]=c->r[5]+0x00000004u; // 8017628C
  c->r[10]=rotl(c->r[7],0)&0x0000001Fu; // 80176290
  c->r[29]=R32(c->r[3]+c->r[30]); // 80176294
  c->r[7]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 80176298
  c->r[28]=sraw(c,c->r[6],5); // 8017629C
  c->r[12]=rotl(c->r[6],0)&0x0000001Fu; // 801762A0
  c->r[6]=c->r[29]|c->r[7]; // 801762A4
  c->r[8]=c->r[5]+0x00000005u; // 801762A8
  W32(c->r[3]+c->r[30],c->r[6]); // 801762AC
  c->r[31]=rotl(c->r[9],2)&0xFFFFFFFCu; // 801762B0
  c->r[29]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 801762B4
  c->r[11]=sraw(c,c->r[8],5); // 801762B8
  c->r[30]=R32(c->r[3]+c->r[31]); // 801762BC
  c->r[7]=c->r[5]+0x00000006u; // 801762C0
  c->r[6]=c->r[5]+0x00000007u; // 801762C4
  c->r[10]=rotl(c->r[8],0)&0x0000001Fu; // 801762C8
  c->r[29]=c->r[30]|c->r[29]; // 801762CC
  c->r[30]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801762D0
  W32(c->r[3]+c->r[31],c->r[29]); // 801762D4
  c->r[28]=((c->r[12])&0x20)?0u:(c->r[0]<<((c->r[12])&31)); // 801762D8
  c->r[12]=rotl(c->r[11],2)&0xFFFFFFFCu; // 801762DC
  c->r[9]=sraw(c,c->r[7],5); // 801762E0
  c->r[29]=R32(c->r[3]+c->r[30]); // 801762E4
  c->r[8]=rotl(c->r[7],0)&0x0000001Fu; // 801762E8
  c->r[7]=sraw(c,c->r[6],5); // 801762EC
  c->r[11]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 801762F0
  c->r[28]=c->r[29]|c->r[28]; // 801762F4
  c->r[10]=rotl(c->r[9],2)&0xFFFFFFFCu; // 801762F8
  W32(c->r[3]+c->r[30],c->r[28]); // 801762FC
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 80176300
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80176304
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 80176308
  c->r[7]=R32(c->r[3]+c->r[12]); // 8017630C
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80176310
  c->r[5]=c->r[5]+0x00000008u; // 80176314
  c->r[7]=c->r[7]|c->r[11]; // 80176318
  W32(c->r[3]+c->r[12],c->r[7]); // 8017631C
  c->r[7]=R32(c->r[3]+c->r[10]); // 80176320
  c->r[7]=c->r[7]|c->r[9]; // 80176324
  W32(c->r[3]+c->r[10],c->r[7]); // 80176328
  c->r[7]=R32(c->r[3]+c->r[8]); // 8017632C
  c->r[6]=c->r[7]|c->r[6]; // 80176330
  W32(c->r[3]+c->r[8],c->r[6]); // 80176334
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80176238; } // 80176338
L_8017633C:;
  c->r[4]=c->r[4]+0x00000096u; // 8017633C
  c->r[6]=c->r[1]+0x00000008u; // 80176340
  c->r[0]=c->r[4]-c->r[5]; // 80176344
  c->r[3]=0u+0x00000001u; // 80176348
  c->ctr=c->r[0]; // 8017634C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80176350
  if (!crb(c,0)) { goto L_8017637C; } // 80176354
L_80176358:;
  c->r[4]=sraw(c,c->r[5],5); // 80176358
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; // 8017635C
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80176360
  c->r[5]=c->r[5]+0x00000001u; // 80176364
  c->r[4]=R32(c->r[6]+c->r[7]); // 80176368
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8017636C
  c->r[0]=c->r[4]|c->r[0]; // 80176370
  W32(c->r[6]+c->r[7],c->r[0]); // 80176374
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80176358; } // 80176378
L_8017637C:;
  c->r[3]=0u+0x80620000u; // 8017637C
  c->r[4]=0u+0x00000007u; // 80176380
  c->r[3]=c->r[3]+0x00007688u; // 80176384
  c->r[5]=0u+0x00000000u; // 80176388
  c->r[3]=R32(c->r[3]+0x00000014u); // 8017638C
  c->lr=0x80176394u; f_801765BC(c); // 80176390
  cmpu(c,0,c->r[3],0x00000001u); // 80176394
  if (!crb(c,2)) { goto L_801763A8; } // 80176398
  c->r[0]=R32(c->r[1]+0x00000018u); // 8017639C
  c->r[0]=c->r[0]|0xC0000000u; // 801763A0
  W32(c->r[1]+0x00000018u,c->r[0]); // 801763A4
L_801763A8:;
  c->r[3]=c->r[13]+0xFFFFAB38u; // 801763A8
  c->lr=0x801763B0u; f_80211724(c); // 801763AC
  c->r[4]=0u+0xCCCD0000u; // 801763B0
  c->r[28]=0u+0x80620000u; // 801763B4
  c->r[0]=c->r[4]+0xFFFFCCCDu; // 801763B8
  c->r[29]=c->r[1]+0x00000008u; // 801763BC
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 801763C0
  c->r[28]=c->r[28]+0x00007688u; // 801763C4
  c->r[27]=0u+0x00000000u; // 801763C8
  c->r[30]=0u+0x00000001u; // 801763CC
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801763D0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)80); // 801763D4
  c->r[3]=c->r[3]-c->r[0]; // 801763D8
  c->r[26]=c->r[3]+0x00000050u; // 801763DC
  c->r[31]=c->r[26]|c->r[26]; // 801763E0
L_801763E4:;
  c->r[0]=sraw(c,c->r[31],5); // 801763E4
  c->r[3]=rotl(c->r[31],0)&0x0000001Fu; // 801763E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801763EC
  c->r[0]=R32(c->r[29]+c->r[0]); // 801763F0
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[30]<<((c->r[3])&31)); // 801763F4
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801763F8
  if (crb(c,2)) { goto L_8017641C; } // 801763FC
  c->r[3]=R32(c->r[28]+0x00000014u); // 80176400
  c->r[4]=c->r[31]|c->r[31]; // 80176404
  c->lr=0x8017640Cu; f_801764E4(c); // 80176408
  cmps(c,0,(int32_t)c->r[3],0); // 8017640C
  if (!crb(c,2)) { goto L_8017641C; } // 80176410
  c->r[27]=0u+0x00000001u; // 80176414
  goto L_80176434; // 80176418
L_8017641C:;
  c->r[31]=c->r[31]+0x00000001u; // 8017641C
  cmps(c,0,(int32_t)c->r[31],160); // 80176420
  if (!crb(c,2)) { goto L_8017642C; } // 80176424
  c->r[31]=0u+0x00000050u; // 80176428
L_8017642C:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[26]); // 8017642C
  if (!crb(c,2)) { IRQCHK(c); goto L_801763E4; } // 80176430
L_80176434:;
  cmps(c,0,(int32_t)c->r[27],0); // 80176434
  if (!crb(c,2)) { goto L_80176484; } // 80176438
  c->r[3]=0u+0xCCCD0000u; // 8017643C
  c->r[30]=c->r[1]+0x00000008u; // 80176440
  c->r[28]=c->r[3]+0xFFFFCCCDu; // 80176444
  c->r[29]=0u+0x00000001u; // 80176448
L_8017644C:;
  c->r[3]=c->r[13]+0xFFFFAB38u; // 8017644C
  c->lr=0x80176454u; f_80211724(c); // 80176450
  c->r[0]=(uint32_t)(((uint64_t)c->r[28]*(uint64_t)c->r[3])>>32); // 80176454
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80176458
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)80); // 8017645C
  c->r[3]=c->r[3]-c->r[0]; // 80176460
  c->r[31]=c->r[3]+0x00000050u; // 80176464
  c->r[0]=sraw(c,c->r[31],5); // 80176468
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017646C
  c->r[3]=rotl(c->r[31],0)&0x0000001Fu; // 80176470
  c->r[0]=R32(c->r[30]+c->r[0]); // 80176474
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[29]<<((c->r[3])&31)); // 80176478
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8017647C
  if (crb(c,2)) { IRQCHK(c); goto L_8017644C; } // 80176480
L_80176484:;
  c->r[3]=0u+0x80620000u; // 80176484
  c->r[4]=c->r[31]|c->r[31]; // 80176488
  c->r[3]=c->r[3]+0x00007688u; // 8017648C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80176490
  c->lr=0x80176498u; f_80173A44(c); // 80176494
  c->r[3]=0u+0x80550000u; // 80176498
  c->r[4]=0u+0x0000000Fu; // 8017649C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 801764A0
  c->lr=0x801764A8u; f_8019C920(c); // 801764A4
  c->r[4]=0u+0x00000000u; // 801764A8
  c->lr=0x801764B0u; f_80039840(c); // 801764AC
  c->r[0]=c->r[31]+0x00000749u; // 801764B0
  c->r[4]=0u+0x805D0000u; // 801764B4
  c->r[5]=c->r[3]|c->r[3]; // 801764B8
  c->r[6]=0u+0x00000001u; // 801764BC
  c->r[3]=c->r[4]+0x00001BBCu; // 801764C0
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801764C4
  c->lr=0x801764CCu; f_801F1258(c); // 801764C8
L_801764CC:;
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801764CC
  c->r[3]=0u+0x00000001u; // 801764D0
  c->r[0]=R32(c->r[1]+0x00000054u); // 801764D4
  c->lr=c->r[0]; // 801764D8
  c->r[1]=c->r[1]+0x00000050u; // 801764DC
  return; // 801764E0
}

// fn_801764E4
void f_801764E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801764E4
  c->r[0]=c->lr; // 801764E8
  cmps(c,0,(int32_t)c->r[4],0); // 801764EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801764F0
  c->r[0]=0u+0x00000000u; // 801764F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801764F8
  c->r[31]=c->r[4]|c->r[4]; // 801764FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80176500
  c->r[30]=c->r[3]|c->r[3]; // 80176504
  if (crb(c,0)) { goto L_80176518; } // 80176508
  cmps(c,0,(int32_t)c->r[4],160); // 8017650C
  if (!crb(c,0)) { goto L_80176518; } // 80176510
  c->r[0]=0u+0x00000001u; // 80176514
L_80176518:;
  cmps(c,0,(int32_t)c->r[0],0); // 80176518
  if (!crb(c,2)) { goto L_8017653C; } // 8017651C
  c->r[3]=0u+0x804C0000u; // 80176520
  c->r[5]=0u+0x804C0000u; // 80176524
  c->r[3]=c->r[3]+0xFFFF8FA0u; // 80176528
  c->r[4]=0u+0x000004B7u; // 8017652C
  c->r[5]=c->r[5]+0xFFFF8F68u; // 80176530
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80176534
  c->lr=0x8017653Cu; f_803732A8(c); // 80176538
L_8017653C:;
  c->r[0]=sraw(c,c->r[31],5); // 8017653C
  c->r[4]=rotl(c->r[31],0)&0x0000001Fu; // 80176540
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80176544
  c->r[5]=0u+0x00000001u; // 80176548
  c->r[3]=c->r[30]+c->r[0]; // 8017654C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176550
  c->r[0]=R32(c->r[3]+0x00000034u); // 80176554
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 80176558
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017655C
  c->r[3]=c->r[3]&c->r[0]; // 80176560
  c->r[0]=0u-c->r[3]; // 80176564
  c->r[0]=c->r[0]|c->r[3]; // 80176568
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8017656C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176570
  c->lr=c->r[0]; // 80176574
  c->r[1]=c->r[1]+0x00000010u; // 80176578
  return; // 8017657C
}

// fn_80176580
void f_80176580(Ctx* __restrict c) {
  cmpu(c,0,c->r[6],0x0000FFFFu); // 80176580
  if (crb(c,2)) { goto L_8017658C; } // 80176584
  goto L_80176590; // 80176588
L_8017658C:;
  c->r[6]=R16(c->r[3]+0x00000026u); // 8017658C
L_80176590:;
  c->r[0]=rotl(c->r[6],0)&0x0000FFFFu; // 80176590
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)492); // 80176594
  c->r[3]=c->r[3]+c->r[0]; // 80176598
  c->r[3]=c->r[3]+0x00000038u; // 8017659C
  f_801765A4(c); return; // 801765A0
}

// fn_801765A4
void f_801765A4(Ctx* __restrict c) {
  cmpu(c,0,c->r[4],0x00000008u); // 801765A4
  if (crb(c,1)) return; // 801765A8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801765AC
  c->r[3]=c->r[3]+c->r[0]; // 801765B0
  W32(c->r[3]+0x000001B0u,c->r[5]); // 801765B4
  return; // 801765B8
}

// fn_801765BC
void f_801765BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801765BC
  c->r[0]=c->lr; // 801765C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801765C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801765C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801765CC
  c->r[30]=c->r[3]|c->r[3]; // 801765D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000013Eu); // 801765D4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801765D8
  if (!crb(c,2)) { goto L_801765F4; } // 801765DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000140u); // 801765E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801765E4
  if (!crb(c,2)) { goto L_801765F4; } // 801765E8
  c->r[3]=0u+0x00000001u; // 801765EC
  goto L_80176648; // 801765F0
L_801765F4:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)6); // 801765F4
  c->r[31]=c->r[5]+c->r[0]; // 801765F8
  cmpu(c,0,c->r[31],0x0000003Cu); // 801765FC
  if (crb(c,0)) { goto L_80176620; } // 80176600
  c->r[3]=0u+0x804C0000u; // 80176604
  c->r[5]=0u+0x804C0000u; // 80176608
  c->r[3]=c->r[3]+0xFFFF8F58u; // 8017660C
  c->r[4]=0u+0x0000040Du; // 80176610
  c->r[5]=c->r[5]+0xFFFF8F24u; // 80176614
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80176618
  c->lr=0x80176620u; f_803732A8(c); // 8017661C
L_80176620:;
  c->r[0]=rotl(c->r[31],29)&0x1FFFFFFCu; // 80176620
  c->r[4]=rotl(c->r[31],0)&0x0000001Fu; // 80176624
  c->r[3]=c->r[30]+c->r[0]; // 80176628
  c->r[5]=0u+0x00000001u; // 8017662C
  c->r[0]=R32(c->r[3]+0x00000184u); // 80176630
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 80176634
  c->r[3]=c->r[3]&c->r[0]; // 80176638
  c->r[0]=0u-c->r[3]; // 8017663C
  c->r[0]=c->r[0]|c->r[3]; // 80176640
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80176644
L_80176648:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176648
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017664C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80176650
  c->lr=c->r[0]; // 80176654
  c->r[1]=c->r[1]+0x00000010u; // 80176658
  return; // 8017665C
}

// fn_80176660
void f_80176660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176660
  c->r[0]=c->lr; // 80176664
  c->r[3]=0u+0x80550000u; // 80176668
  c->r[4]=0u+0x0000000Fu; // 8017666C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80176670
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80176674
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80176678
  c->r[31]=c->r[5]|c->r[5]; // 8017667C
  c->lr=0x80176684u; f_8019C920(c); // 80176680
  c->r[0]=R8(c->r[31]+0x00000003u); // 80176684
  cmps(c,0,(int32_t)c->r[0],0); // 80176688
  if (!crb(c,2)) { goto L_801766CC; } // 8017668C
  c->r[6]=R32(c->r[3]+0x0000002Cu); // 80176690
  c->r[9]=0u+0x805D0000u; // 80176694
  c->r[0]=R32(c->r[3]+0x00000030u); // 80176698
  c->r[7]=c->r[1]+0x00000008u; // 8017669C
  c->r[4]=0u+0x00000000u; // 801766A0
  c->r[5]=0u+0x00000001u; // 801766A4
  W32(c->r[1]+0x00000008u,c->r[6]); // 801766A8
  c->r[6]=0u+0x00000001u; // 801766AC
  c->r[8]=0u+0x00000001u; // 801766B0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801766B4
  c->r[0]=R32(c->r[3]+0x00000034u); // 801766B8
  c->r[3]=c->r[9]+0x00003F6Cu; // 801766BC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801766C0
  c->lr=0x801766C8u; f_801FEDBC(c); // 801766C4
  goto L_8017670C; // 801766C8
L_801766CC:;
  c->r[31]=0u+0x805D0000u; // 801766CC
  c->r[5]=c->r[1]+0x00000014u; // 801766D0
  c->r[31]=c->r[31]+0x00003F6Cu; // 801766D4
  c->r[3]=c->r[3]+0x0000002Cu; // 801766D8
  c->r[4]=c->r[31]+0x0000002Cu; // 801766DC
  c->lr=0x801766E4u; f_80296A70(c); // 801766E0
  c->r[3]=c->r[1]+0x00000014u; // 801766E4
  c->lr=0x801766ECu; f_80296B0C(c); // 801766E8
  {uint32_t ea=c->r[2]+0xFFFFCBB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801766EC
  fcmp(c,0,c->f[1],c->f[0]); // 801766F0
  if (!crb(c,0)) { goto L_80176704; } // 801766F4
  c->r[3]=c->r[31]|c->r[31]; // 801766F8
  c->lr=0x80176700u; f_801FFE18(c); // 801766FC
  goto L_8017670C; // 80176700
L_80176704:;
  c->r[3]=0u+0x00000002u; // 80176704
  goto L_80176710; // 80176708
L_8017670C:;
  c->r[3]=0u+0x00000001u; // 8017670C
L_80176710:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80176710
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80176714
  c->lr=c->r[0]; // 80176718
  c->r[1]=c->r[1]+0x00000030u; // 8017671C
  return; // 80176720
}

// fn_80176724
void f_80176724(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176724
  c->r[0]=c->lr; // 80176728
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017672C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176730
  c->r[31]=0u+0x80620000u; // 80176734
  c->r[31]=c->r[31]+0x00007688u; // 80176738
  c->r[3]=R32(c->r[31]+0x00000014u); // 8017673C
  c->lr=0x80176744u; f_80176780(c); // 80176740
  c->r[4]=c->r[3]|c->r[3]; // 80176744
  c->r[3]=R32(c->r[31]+0x00000014u); // 80176748
  c->r[4]=c->r[4]+0x00000004u; // 8017674C
  c->lr=0x80176754u; f_8017676C(c); // 80176750
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176754
  c->r[3]=0u+0x00000001u; // 80176758
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017675C
  c->lr=c->r[0]; // 80176760
  c->r[1]=c->r[1]+0x00000010u; // 80176764
  return; // 80176768
}

// fn_8017676C
void f_8017676C(Ctx* __restrict c) {
  cmpu(c,0,c->r[4],0x00000063u); // 8017676C
  if (!crb(c,1)) { goto L_80176778; } // 80176770
  c->r[4]=0u+0x00000063u; // 80176774
L_80176778:;
  W8(c->r[3]+0x00000018u,c->r[4]); // 80176778
  return; // 8017677C
}

// fn_80176780
void f_80176780(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000018u); // 80176780
  return; // 80176784
}

// fn_80176788
void f_80176788(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176788
  c->r[0]=c->lr; // 8017678C
  c->r[3]=c->r[13]+0xFFFFAB38u; // 80176790
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176794
  c->lr=0x8017679Cu; f_80211724(c); // 80176798
  c->r[4]=0u+0xCCCD0000u; // 8017679C
  c->r[6]=0u+0x80620000u; // 801767A0
  c->r[0]=c->r[4]+0xFFFFCCCDu; // 801767A4
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 801767A8
  c->r[6]=c->r[6]+0x00007688u; // 801767AC
  c->r[4]=0u+0x0000000Du; // 801767B0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801767B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 801767B8
  c->r[5]=c->r[3]-c->r[0]; // 801767BC
  c->r[3]=R32(c->r[6]+0x00000014u); // 801767C0
  c->lr=0x801767C8u; f_80038998(c); // 801767C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801767C8
  c->r[3]=0u+0x00000001u; // 801767CC
  c->lr=c->r[0]; // 801767D0
  c->r[1]=c->r[1]+0x00000010u; // 801767D4
  return; // 801767D8
}

// fn_801767DC
void f_801767DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801767DC
  c->r[0]=c->lr; // 801767E0
  c->r[3]=0u+0x80620000u; // 801767E4
  c->r[4]=0u+0xFFFFFFFFu; // 801767E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801767EC
  c->r[3]=c->r[3]+0x00007688u; // 801767F0
  c->r[3]=R32(c->r[3]+0x00000014u); // 801767F4
  c->lr=0x801767FCu; f_801C2600(c); // 801767F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801767FC
  c->r[3]=0u+0x00000001u; // 80176800
  c->lr=c->r[0]; // 80176804
  c->r[1]=c->r[1]+0x00000010u; // 80176808
  return; // 8017680C
}

// fn_80176810
void f_80176810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176810
  c->r[0]=c->lr; // 80176814
  c->r[7]=0u+0x804C0000u; // 80176818
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017681C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80176820
  c->r[7]=c->r[7]+0xFFFF8C48u; // 80176824
  c->r[4]=c->r[5]|c->r[5]; // 80176828
  c->r[5]=c->r[6]|c->r[6]; // 8017682C
  c->r[12]=c->r[7]+c->r[0]; // 80176830
  c->lr=0x80176838u; f_802BA00C(c); // 80176834
  c->r[0]=c->r[0]|0x00000000u; // 80176838
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017683C
  c->lr=c->r[0]; // 80176840
  c->r[1]=c->r[1]+0x00000010u; // 80176844
  return; // 80176848
}

// fn_8017684C
void f_8017684C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017684C
  c->r[0]=c->lr; // 80176850
  c->r[4]=0u+0x0000000Au; // 80176854
  W32(c->r[1]+0x00000024u,c->r[0]); // 80176858
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017685C
  c->r[31]=0u+0x80620000u; // 80176860
  c->r[31]=c->r[31]+0x00007688u; // 80176864
  W32(c->r[1]+0x00000018u,c->r[30]); // 80176868
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017686C
  c->r[29]=c->r[5]|c->r[5]; // 80176870
  c->r[3]=R32(c->r[31]+0x00000014u); // 80176874
  c->lr=0x8017687Cu; f_80038AF4(c); // 80176878
  cmps(c,0,(int32_t)c->r[3],0); // 8017687C
  if (!crb(c,2)) { goto L_8017691C; } // 80176880
  c->r[3]=R32(c->r[31]+0x00000014u); // 80176884
  c->r[4]=0u+0x00000009u; // 80176888
  c->lr=0x80176890u; f_80038AF4(c); // 8017688C
  cmps(c,0,(int32_t)c->r[3],0); // 80176890
  if (!crb(c,2)) { goto L_8017691C; } // 80176894
  c->r[3]=R32(c->r[31]+0x00000014u); // 80176898
  c->r[4]=0u+0x00000000u; // 8017689C
  c->lr=0x801768A4u; f_8003560C(c); // 801768A0
  cmps(c,0,(int32_t)c->r[3],0); // 801768A4
  if (crb(c,2)) { goto L_8017691C; } // 801768A8
  c->r[3]=R32(c->r[31]+0x00000014u); // 801768AC
  c->r[4]=0u+0x00000000u; // 801768B0
  c->lr=0x801768B8u; f_8003560C(c); // 801768B4
  c->r[0]=R8(c->r[29]+0x00000003u); // 801768B8
  c->r[30]=c->r[3]|c->r[3]; // 801768BC
  cmpu(c,0,c->r[0],0x00000006u); // 801768C0
  if (!crb(c,2)) { goto L_801768FC; } // 801768C4
  c->r[31]=0u+0x803A0000u; // 801768C8
  c->r[31]=c->r[31]+0x000030FCu; // 801768CC
  c->r[4]=c->r[31]+0x000000B0u; // 801768D0
  c->lr=0x801768D8u; f_801E3B30(c); // 801768D4
  cmps(c,0,(int32_t)c->r[3],0); // 801768D8
  if (!crb(c,2)) { goto L_801768FC; } // 801768DC
  c->r[3]=c->r[30]|c->r[30]; // 801768E0
  c->r[4]=c->r[31]+0x0000010Bu; // 801768E4
  c->lr=0x801768ECu; f_801E3B30(c); // 801768E8
  cmps(c,0,(int32_t)c->r[3],0); // 801768EC
  if (!crb(c,2)) { goto L_801768FC; } // 801768F0
  c->r[3]=0u+0x00000000u; // 801768F4
  goto L_80176920; // 801768F8
L_801768FC:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 801768FC
  c->r[4]=0u+0x804C0000u; // 80176900
  c->r[4]=c->r[4]+0xFFFF8CD8u; // 80176904
  c->r[3]=c->r[30]|c->r[30]; // 80176908
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017690C
  c->r[4]=R32(c->r[4]+c->r[0]); // 80176910
  c->lr=0x80176918u; f_801E4404(c); // 80176914
  goto L_80176920; // 80176918
L_8017691C:;
  c->r[3]=0u+0x00000000u; // 8017691C
L_80176920:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80176920
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80176924
  c->r[30]=R32(c->r[1]+0x00000018u); // 80176928
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017692C
  c->lr=c->r[0]; // 80176930
  c->r[1]=c->r[1]+0x00000020u; // 80176934
  return; // 80176938
}

// fn_8017693C
void f_8017693C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017693C
  c->r[0]=c->lr; // 80176940
  c->r[3]=0u+0x80620000u; // 80176944
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176948
  c->r[3]=c->r[3]+0x00007688u; // 8017694C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80176950
  c->lr=0x80176958u; f_80176980(c); // 80176954
  c->r[0]=c->r[3]+0xFFFFFC18u; // 80176958
  c->r[4]=0u+0x000003E8u; // 8017695C
  c->r[3]=c->r[3]|~c->r[4]; // 80176960
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80176964
  c->r[0]=c->r[3]-c->r[0]; // 80176968
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8017696C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176970
  c->lr=c->r[0]; // 80176974
  c->r[1]=c->r[1]+0x00000010u; // 80176978
  return; // 8017697C
}

// fn_80176980
void f_80176980(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 80176980
  return; // 80176984
}

// fn_80176988
void f_80176988(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176988
  c->r[0]=c->lr; // 8017698C
  c->r[3]=0u+0x80620000u; // 80176990
  c->r[4]=0u+0x000001FBu; // 80176994
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176998
  c->r[3]=c->r[3]+0x00007688u; // 8017699C
  c->r[3]=R32(c->r[3]+0x00000014u); // 801769A0
  c->lr=0x801769A8u; f_800A9948(c); // 801769A4
  c->r[0]=0u-c->r[3]; // 801769A8
  c->r[0]=c->r[0]|c->r[3]; // 801769AC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801769B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801769B4
  c->lr=c->r[0]; // 801769B8
  c->r[1]=c->r[1]+0x00000010u; // 801769BC
  return; // 801769C0
}

// fn_801769C4
void f_801769C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801769C4
  c->r[0]=c->lr; // 801769C8
  c->r[7]=0u+0x804C0000u; // 801769CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801769D0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801769D4
  c->r[7]=c->r[7]+0xFFFF8CF8u; // 801769D8
  c->r[4]=c->r[5]|c->r[5]; // 801769DC
  c->r[5]=c->r[6]|c->r[6]; // 801769E0
  c->r[12]=c->r[7]+c->r[0]; // 801769E4
  c->lr=0x801769ECu; f_802BA00C(c); // 801769E8
  c->r[0]=c->r[0]|0x00000000u; // 801769EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801769F0
  c->lr=c->r[0]; // 801769F4
  c->r[1]=c->r[1]+0x00000010u; // 801769F8
  return; // 801769FC
}

// fn_80176A00
void f_80176A00(Ctx* __restrict c) {
  return; // 80176A00
}

// fn_80176A04
void f_80176A04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176A04
  c->r[0]=c->lr; // 80176A08
  cmps(c,0,(int32_t)c->r[3],0); // 80176A0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176A10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176A14
  c->r[31]=c->r[4]|c->r[4]; // 80176A18
  W32(c->r[1]+0x00000008u,c->r[30]); // 80176A1C
  c->r[30]=c->r[3]|c->r[3]; // 80176A20
  if (crb(c,2)) { goto L_80176A40; } // 80176A24
  c->r[4]=0u+0x00000000u; // 80176A28
  c->lr=0x80176A30u; f_80103A70(c); // 80176A2C
  cmps(c,0,(int32_t)c->r[31],0); // 80176A30
  if (!crb(c,1)) { goto L_80176A40; } // 80176A34
  c->r[3]=c->r[30]|c->r[30]; // 80176A38
  c->lr=0x80176A40u; f_800C69B8(c); // 80176A3C
L_80176A40:;
  c->r[3]=c->r[30]|c->r[30]; // 80176A40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176A44
  c->r[30]=R32(c->r[1]+0x00000008u); // 80176A48
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176A4C
  c->lr=c->r[0]; // 80176A50
  c->r[1]=c->r[1]+0x00000010u; // 80176A54
  return; // 80176A58
}

// fn_80176A5C
void f_80176A5C(Ctx* __restrict c) {
  c->r[3]=0u+0x804B0000u; // 80176A5C
  c->r[3]=c->r[3]+0x00006920u; // 80176A60
  return; // 80176A64
}

// fn_80176A68
void f_80176A68(Ctx* __restrict c) {
  c->r[3]=0u+0x804B0000u; // 80176A68
  c->r[3]=c->r[3]+0x000070D4u; // 80176A6C
  return; // 80176A70
}

// fn_80176A74
void f_80176A74(Ctx* __restrict c) {
  c->r[3]=0u+0x804B0000u; // 80176A74
  c->r[3]=c->r[3]+0x000071ECu; // 80176A78
  return; // 80176A7C
}

// fn_80176A80
void f_80176A80(Ctx* __restrict c) {
  c->r[3]=0u+0x804B0000u; // 80176A80
  c->r[3]=c->r[3]+0x0000717Cu; // 80176A84
  return; // 80176A88
}

// fn_80176A8C
void f_80176A8C(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF9398u; // 80176A8C
  return; // 80176A90
}

// fn_80176A94
void f_80176A94(Ctx* __restrict c) {
  c->r[3]=0u+0x804C0000u; // 80176A94
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80176A98
  c->r[3]=c->r[3]+0xFFFF8A4Cu; // 80176A9C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80176AA0
  return; // 80176AA4
}

// fn_80176AA8
void f_80176AA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176AA8
  c->r[0]=c->lr; // 80176AAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176AB0
  c->lr=0x80176AB8u; f_8024627C(c); // 80176AB4
  c->r[0]=0u+0x00000000u; // 80176AB8
  c->r[3]=0u+0x805D0000u; // 80176ABC
  W8(c->r[3]+0x000078B0u,c->r[0]); // 80176AC0
  c->r[3]=0u+0x00000001u; // 80176AC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176AC8
  c->lr=c->r[0]; // 80176ACC
  c->r[1]=c->r[1]+0x00000010u; // 80176AD0
  return; // 80176AD4
}

// fn_80176AD8
void f_80176AD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176AD8
  c->r[0]=c->lr; // 80176ADC
  c->r[7]=0u+0x804C0000u; // 80176AE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176AE4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80176AE8
  c->r[7]=c->r[7]+0xFFFFA0ACu; // 80176AEC
  c->r[4]=c->r[5]|c->r[5]; // 80176AF0
  c->r[5]=c->r[6]|c->r[6]; // 80176AF4
  c->r[12]=c->r[7]+c->r[0]; // 80176AF8
  c->lr=0x80176B00u; f_802BA00C(c); // 80176AFC
  c->r[0]=c->r[0]|0x00000000u; // 80176B00
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176B04
  c->lr=c->r[0]; // 80176B08
  c->r[1]=c->r[1]+0x00000010u; // 80176B0C
  return; // 80176B10
}

// fn_80176B14
void f_80176B14(Ctx* __restrict c) {
  return; // 80176B14
}

// fn_80176B18
void f_80176B18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176B18
  c->r[0]=c->lr; // 80176B1C
  cmps(c,0,(int32_t)c->r[3],0); // 80176B20
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176B24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176B28
  c->r[31]=c->r[4]|c->r[4]; // 80176B2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80176B30
  c->r[30]=c->r[3]|c->r[3]; // 80176B34
  if (crb(c,2)) { goto L_80176B54; } // 80176B38
  c->r[4]=0u+0x00000000u; // 80176B3C
  c->lr=0x80176B44u; f_80103A70(c); // 80176B40
  cmps(c,0,(int32_t)c->r[31],0); // 80176B44
  if (!crb(c,1)) { goto L_80176B54; } // 80176B48
  c->r[3]=c->r[30]|c->r[30]; // 80176B4C
  c->lr=0x80176B54u; f_800C69B8(c); // 80176B50
L_80176B54:;
  c->r[3]=c->r[30]|c->r[30]; // 80176B54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176B58
  c->r[30]=R32(c->r[1]+0x00000008u); // 80176B5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176B60
  c->lr=c->r[0]; // 80176B64
  c->r[1]=c->r[1]+0x00000010u; // 80176B68
  return; // 80176B6C
}

// fn_80176B70
void f_80176B70(Ctx* __restrict c) {
  c->r[3]=0u+0x804C0000u; // 80176B70
  c->r[3]=c->r[3]+0xFFFF9028u; // 80176B74
  return; // 80176B78
}

// fn_80176B7C
void f_80176B7C(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF93C0u; // 80176B7C
  return; // 80176B80
}

// fn_80176B84
void f_80176B84(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF93CCu; // 80176B84
  return; // 80176B88
}

// fn_80176B8C
void f_80176B8C(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF93C4u; // 80176B8C
  return; // 80176B90
}

// fn_80176B94
void f_80176B94(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF93C8u; // 80176B94
  return; // 80176B98
}

// fn_80176B9C
void f_80176B9C(Ctx* __restrict c) {
  c->r[3]=0u+0x804C0000u; // 80176B9C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80176BA0
  c->r[3]=c->r[3]+0xFFFFA068u; // 80176BA4
  c->r[3]=R32(c->r[3]+c->r[0]); // 80176BA8
  return; // 80176BAC
}

// fn_80176BB0
void f_80176BB0(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80176BB0
  c->r[3]=c->r[13]+0xFFFF93D4u; // 80176BB4
  c->r[3]=R32(c->r[3]+c->r[0]); // 80176BB8
  return; // 80176BBC
}

// fn_80176BC0
void f_80176BC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176BC0
  c->r[0]=c->lr; // 80176BC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176BC8
  c->lr=0x80176BD0u; f_8024627C(c); // 80176BCC
  c->r[0]=0u+0x00000000u; // 80176BD0
  c->r[3]=0u+0x805D0000u; // 80176BD4
  W8(c->r[3]+0x000078B0u,c->r[0]); // 80176BD8
  c->r[3]=0u+0x00000001u; // 80176BDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176BE0
  c->lr=c->r[0]; // 80176BE4
  c->r[1]=c->r[1]+0x00000010u; // 80176BE8
  return; // 80176BEC
}

// fn_80176BF0
void f_80176BF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176BF0
  c->r[0]=c->lr; // 80176BF4
  c->r[4]=0u+0x00000002u; // 80176BF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176BFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176C00
  c->r[31]=0u+0x80620000u; // 80176C04
  c->r[31]=c->r[31]+0x00007688u; // 80176C08
  W32(c->r[1]+0x00000008u,c->r[30]); // 80176C0C
  c->r[30]=c->r[5]|c->r[5]; // 80176C10
  c->r[3]=R32(c->r[31]+0x00000014u); // 80176C14
  c->lr=0x80176C1Cu; f_8003560C(c); // 80176C18
  c->r[3]=R32(c->r[31]+0x00000014u); // 80176C1C
  c->r[4]=0u+0x00000003u; // 80176C20
  c->lr=0x80176C28u; f_8003560C(c); // 80176C24
  c->r[0]=R8(c->r[30]+0x00000003u); // 80176C28
  cmps(c,0,(int32_t)c->r[0],0); // 80176C2C
  if (crb(c,2)) { goto L_80176C38; } // 80176C30
  goto L_80176CC8; // 80176C34
L_80176C38:;
  c->r[4]=0u+0x00010000u; // 80176C38
  c->r[3]=0u+0x00000069u; // 80176C3C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80176C40
  c->r[4]=0u+0x00000000u; // 80176C44
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 80176C48
  c->lr=0x80176C50u; f_80036C44(c); // 80176C4C
  cmps(c,0,(int32_t)c->r[3],0); // 80176C50
  if (crb(c,2)) { goto L_80176C64; } // 80176C54
  c->r[31]=c->r[3]|c->r[3]; // 80176C58
  c->lr=0x80176C60u; f_80036BFC(c); // 80176C5C
  goto L_80176C68; // 80176C60
L_80176C64:;
  c->r[31]=0u+0x00000000u; // 80176C64
L_80176C68:;
  c->r[3]=0u+0x80620000u; // 80176C68
  c->r[5]=c->r[31]|c->r[31]; // 80176C6C
  c->r[3]=c->r[3]+0x00007688u; // 80176C70
  c->r[4]=0u+0x00000003u; // 80176C74
  c->r[3]=R32(c->r[3]+0x00000014u); // 80176C78
  c->lr=0x80176C80u; f_80038998(c); // 80176C7C
  c->r[4]=0u+0x00010000u; // 80176C80
  c->r[3]=0u+0x00000068u; // 80176C84
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80176C88
  c->r[4]=0u+0x00000008u; // 80176C8C
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 80176C90
  c->lr=0x80176C98u; f_80036C44(c); // 80176C94
  cmps(c,0,(int32_t)c->r[3],0); // 80176C98
  if (crb(c,2)) { goto L_80176CAC; } // 80176C9C
  c->r[31]=c->r[3]|c->r[3]; // 80176CA0
  c->lr=0x80176CA8u; f_80036BFC(c); // 80176CA4
  goto L_80176CB0; // 80176CA8
L_80176CAC:;
  c->r[31]=0u+0x00000000u; // 80176CAC
L_80176CB0:;
  c->r[3]=0u+0x80620000u; // 80176CB0
  c->r[5]=c->r[31]|c->r[31]; // 80176CB4
  c->r[3]=c->r[3]+0x00007688u; // 80176CB8
  c->r[4]=0u+0x00000002u; // 80176CBC
  c->r[3]=R32(c->r[3]+0x00000014u); // 80176CC0
  c->lr=0x80176CC8u; f_80038998(c); // 80176CC4
L_80176CC8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176CC8
  c->r[3]=0u+0x00000001u; // 80176CCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80176CD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176CD4
  c->lr=c->r[0]; // 80176CD8
  c->r[1]=c->r[1]+0x00000010u; // 80176CDC
  return; // 80176CE0
}

// fn_80176CE4
void f_80176CE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176CE4
  c->r[0]=c->lr; // 80176CE8
  c->r[4]=0u+0x00000004u; // 80176CEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80176CF0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80176CF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80176CF8
  c->r[30]=0u+0x80620000u; // 80176CFC
  c->r[30]=c->r[30]+0x00007688u; // 80176D00
  W32(c->r[1]+0x00000014u,c->r[29]); // 80176D04
  c->r[29]=c->r[5]|c->r[5]; // 80176D08
  c->r[3]=R32(c->r[30]+0x00000014u); // 80176D0C
  c->lr=0x80176D14u; f_8003560C(c); // 80176D10
  c->r[0]=R8(c->r[29]+0x00000003u); // 80176D14
  cmps(c,0,(int32_t)c->r[0],1); // 80176D18
  if (crb(c,2)) { goto L_80176D9C; } // 80176D1C
  if (!crb(c,0)) { goto L_80176D30; } // 80176D20
  cmps(c,0,(int32_t)c->r[0],0); // 80176D24
  if (!crb(c,0)) { goto L_80176D3C; } // 80176D28
  goto L_8017725C; // 80176D2C
L_80176D30:;
  cmps(c,0,(int32_t)c->r[0],3); // 80176D30
  if (!crb(c,0)) { goto L_8017725C; } // 80176D34
  goto L_80177240; // 80176D38
L_80176D3C:;
  c->r[3]=0u+0x805D0000u; // 80176D3C
  c->r[30]=0u+0x00000000u; // 80176D40
  c->r[3]=c->r[3]+0xFFFFC7D4u; // 80176D44
  c->r[4]=0u+0x0000006Du; // 80176D48
  c->r[5]=0u+0x00000009u; // 80176D4C
  c->lr=0x80176D54u; f_801E1F1C(c); // 80176D50
  cmps(c,0,(int32_t)c->r[3],0); // 80176D54
  c->r[31]=c->r[3]|c->r[3]; // 80176D58
  if (crb(c,2)) { goto L_80176D80; } // 80176D5C
  c->r[4]=0u+0x00000000u; // 80176D60
  c->lr=0x80176D68u; f_801E3BC0(c); // 80176D64
  c->r[4]=0u+0x803A0000u; // 80176D68
  c->r[3]=c->r[31]|c->r[31]; // 80176D6C
  c->r[4]=c->r[4]+0x000032C4u; // 80176D70
  c->r[5]=0u+0x00000001u; // 80176D74
  c->lr=0x80176D7Cu; f_801E3A84(c); // 80176D78
  c->r[30]=c->r[31]|c->r[31]; // 80176D7C
L_80176D80:;
  c->r[3]=0u+0x80620000u; // 80176D80
  c->r[5]=c->r[30]|c->r[30]; // 80176D84
  c->r[3]=c->r[3]+0x00007688u; // 80176D88
  c->r[4]=0u+0x00000004u; // 80176D8C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80176D90
  c->lr=0x80176D98u; f_80038998(c); // 80176D94
  goto L_8017725C; // 80176D98
L_80176D9C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80176D9C
  if (crb(c,2)) { goto L_8017725C; } // 80176DA0
  c->r[31]=c->r[3]|c->r[3]; // 80176DA4
  c->r[4]=0u+0x00000000u; // 80176DA8
  c->lr=0x80176DB0u; f_801E3BC0(c); // 80176DAC
  c->r[30]=0u+0x803A0000u; // 80176DB0
  c->r[3]=c->r[31]|c->r[31]; // 80176DB4
  c->r[4]=c->r[30]+0x000032C4u; // 80176DB8
  c->r[5]=0u+0x00000001u; // 80176DBC
  c->lr=0x80176DC4u; f_801E3A84(c); // 80176DC0
  c->r[0]=R8(c->r[29]+0x00000004u); // 80176DC4
  cmps(c,0,(int32_t)c->r[0],16); // 80176DC8
  if (crb(c,2)) { goto L_80177098; } // 80176DCC
  if (!crb(c,0)) { goto L_80176E48; } // 80176DD0
  cmps(c,0,(int32_t)c->r[0],7); // 80176DD4
  if (crb(c,2)) { goto L_80176F80; } // 80176DD8
  if (!crb(c,0)) { goto L_80176E14; } // 80176DDC
  cmps(c,0,(int32_t)c->r[0],3); // 80176DE0
  if (crb(c,2)) { goto L_80176F10; } // 80176DE4
  if (!crb(c,0)) { goto L_80176E04; } // 80176DE8
  cmps(c,0,(int32_t)c->r[0],1); // 80176DEC
  if (crb(c,2)) { goto L_80176ED0; } // 80176DF0
  if (!crb(c,0)) { goto L_80176EF8; } // 80176DF4
  cmps(c,0,(int32_t)c->r[0],0); // 80176DF8
  if (!crb(c,0)) { goto L_80176EB8; } // 80176DFC
  goto L_8017725C; // 80176E00
L_80176E04:;
  cmps(c,0,(int32_t)c->r[0],5); // 80176E04
  if (crb(c,2)) { goto L_80176F50; } // 80176E08
  if (!crb(c,0)) { goto L_80176F68; } // 80176E0C
  goto L_80176F28; // 80176E10
L_80176E14:;
  cmps(c,0,(int32_t)c->r[0],12); // 80176E14
  if (crb(c,2)) { goto L_80177018; } // 80176E18
  if (!crb(c,0)) { goto L_80176E38; } // 80176E1C
  cmps(c,0,(int32_t)c->r[0],10); // 80176E20
  if (crb(c,2)) { goto L_80176FE8; } // 80176E24
  if (!crb(c,0)) { goto L_80177000; } // 80176E28
  cmps(c,0,(int32_t)c->r[0],9); // 80176E2C
  if (!crb(c,0)) { goto L_80176FC0; } // 80176E30
  goto L_80176FA8; // 80176E34
L_80176E38:;
  cmps(c,0,(int32_t)c->r[0],14); // 80176E38
  if (crb(c,2)) { goto L_80177058; } // 80176E3C
  if (!crb(c,0)) { goto L_80177070; } // 80176E40
  goto L_80177040; // 80176E44
L_80176E48:;
  cmps(c,0,(int32_t)c->r[0],25); // 80176E48
  if (crb(c,2)) { goto L_80177190; } // 80176E4C
  if (!crb(c,0)) { goto L_80176E88; } // 80176E50
  cmps(c,0,(int32_t)c->r[0],21); // 80176E54
  if (crb(c,2)) { goto L_80177120; } // 80176E58
  if (!crb(c,0)) { goto L_80176E78; } // 80176E5C
  cmps(c,0,(int32_t)c->r[0],19); // 80176E60
  if (crb(c,2)) { goto L_801770E0; } // 80176E64
  if (!crb(c,0)) { goto L_801770F8; } // 80176E68
  cmps(c,0,(int32_t)c->r[0],18); // 80176E6C
  if (!crb(c,0)) { goto L_801770C8; } // 80176E70
  goto L_801770B0; // 80176E74
L_80176E78:;
  cmps(c,0,(int32_t)c->r[0],23); // 80176E78
  if (crb(c,2)) { goto L_80177160; } // 80176E7C
  if (!crb(c,0)) { goto L_80177178; } // 80176E80
  goto L_80177138; // 80176E84
L_80176E88:;
  cmps(c,0,(int32_t)c->r[0],30); // 80176E88
  if (crb(c,2)) { goto L_80177228; } // 80176E8C
  if (!crb(c,0)) { goto L_80176EAC; } // 80176E90
  cmps(c,0,(int32_t)c->r[0],28); // 80176E94
  if (crb(c,2)) { goto L_801771E8; } // 80176E98
  if (!crb(c,0)) { goto L_80177200; } // 80176E9C
  cmps(c,0,(int32_t)c->r[0],27); // 80176EA0
  if (!crb(c,0)) { goto L_801771D0; } // 80176EA4
  goto L_801771B8; // 80176EA8
L_80176EAC:;
  cmps(c,0,(int32_t)c->r[0],255); // 80176EAC
  if (crb(c,2)) { goto L_8017725C; } // 80176EB0
  goto L_8017725C; // 80176EB4
L_80176EB8:;
  c->r[4]=c->r[30]+0x000032C4u; // 80176EB8
  c->r[3]=c->r[31]|c->r[31]; // 80176EBC
  c->r[4]=c->r[4]+0x0000000Eu; // 80176EC0
  c->r[5]=0u+0x00000001u; // 80176EC4
  c->lr=0x80176ECCu; f_801E3A84(c); // 80176EC8
  goto L_8017725C; // 80176ECC
L_80176ED0:;
  c->r[30]=c->r[30]+0x000032C4u; // 80176ED0
  c->r[3]=c->r[31]|c->r[31]; // 80176ED4
  c->r[4]=c->r[30]+0x0000001Bu; // 80176ED8
  c->r[5]=0u+0x00000001u; // 80176EDC
  c->lr=0x80176EE4u; f_801E3A84(c); // 80176EE0
  c->r[3]=c->r[31]|c->r[31]; // 80176EE4
  c->r[4]=c->r[30]+0x00000028u; // 80176EE8
  c->r[5]=0u+0x00000001u; // 80176EEC
  c->lr=0x80176EF4u; f_801E3A84(c); // 80176EF0
  goto L_8017725C; // 80176EF4
L_80176EF8:;
  c->r[4]=c->r[30]+0x000032C4u; // 80176EF8
  c->r[3]=c->r[31]|c->r[31]; // 80176EFC
  c->r[4]=c->r[4]+0x00000028u; // 80176F00
  c->r[5]=0u+0x00000001u; // 80176F04
  c->lr=0x80176F0Cu; f_801E3A84(c); // 80176F08
  goto L_8017725C; // 80176F0C
L_80176F10:;
  c->r[4]=c->r[30]+0x000032C4u; // 80176F10
  c->r[3]=c->r[31]|c->r[31]; // 80176F14
  c->r[4]=c->r[4]+0x00000035u; // 80176F18
  c->r[5]=0u+0x00000001u; // 80176F1C
  c->lr=0x80176F24u; f_801E3A84(c); // 80176F20
  goto L_8017725C; // 80176F24
L_80176F28:;
  c->r[30]=c->r[30]+0x000032C4u; // 80176F28
  c->r[3]=c->r[31]|c->r[31]; // 80176F2C
  c->r[4]=c->r[30]+0x00000042u; // 80176F30
  c->r[5]=0u+0x00000001u; // 80176F34
  c->lr=0x80176F3Cu; f_801E3A84(c); // 80176F38
  c->r[3]=c->r[31]|c->r[31]; // 80176F3C
  c->r[4]=c->r[30]+0x0000004Fu; // 80176F40
  c->r[5]=0u+0x00000001u; // 80176F44
  c->lr=0x80176F4Cu; f_801E3A84(c); // 80176F48
  goto L_8017725C; // 80176F4C
L_80176F50:;
  c->r[4]=c->r[30]+0x000032C4u; // 80176F50
  c->r[3]=c->r[31]|c->r[31]; // 80176F54
  c->r[4]=c->r[4]+0x0000004Fu; // 80176F58
  c->r[5]=0u+0x00000001u; // 80176F5C
  c->lr=0x80176F64u; f_801E3A84(c); // 80176F60
  goto L_8017725C; // 80176F64
L_80176F68:;
  c->r[4]=c->r[30]+0x000032C4u; // 80176F68
  c->r[3]=c->r[31]|c->r[31]; // 80176F6C
  c->r[4]=c->r[4]+0x0000005Cu; // 80176F70
  c->r[5]=0u+0x00000001u; // 80176F74
  c->lr=0x80176F7Cu; f_801E3A84(c); // 80176F78
  goto L_8017725C; // 80176F7C
L_80176F80:;
  c->r[30]=c->r[30]+0x000032C4u; // 80176F80
  c->r[3]=c->r[31]|c->r[31]; // 80176F84
  c->r[4]=c->r[30]+0x00000069u; // 80176F88
  c->r[5]=0u+0x00000001u; // 80176F8C
  c->lr=0x80176F94u; f_801E3A84(c); // 80176F90
  c->r[3]=c->r[31]|c->r[31]; // 80176F94
  c->r[4]=c->r[30]+0x00000076u; // 80176F98
  c->r[5]=0u+0x00000001u; // 80176F9C
  c->lr=0x80176FA4u; f_801E3A84(c); // 80176FA0
  goto L_8017725C; // 80176FA4
L_80176FA8:;
  c->r[4]=c->r[30]+0x000032C4u; // 80176FA8
  c->r[3]=c->r[31]|c->r[31]; // 80176FAC
  c->r[4]=c->r[4]+0x00000076u; // 80176FB0
  c->r[5]=0u+0x00000001u; // 80176FB4
  c->lr=0x80176FBCu; f_801E3A84(c); // 80176FB8
  goto L_8017725C; // 80176FBC
L_80176FC0:;
  c->r[30]=c->r[30]+0x000032C4u; // 80176FC0
  c->r[3]=c->r[31]|c->r[31]; // 80176FC4
  c->r[4]=c->r[30]+0x00000083u; // 80176FC8
  c->r[5]=0u+0x00000001u; // 80176FCC
  c->lr=0x80176FD4u; f_801E3A84(c); // 80176FD0
  c->r[3]=c->r[31]|c->r[31]; // 80176FD4
  c->r[4]=c->r[30]+0x00000090u; // 80176FD8
  c->r[5]=0u+0x00000001u; // 80176FDC
  c->lr=0x80176FE4u; f_801E3A84(c); // 80176FE0
  goto L_8017725C; // 80176FE4
L_80176FE8:;
  c->r[4]=c->r[30]+0x000032C4u; // 80176FE8
  c->r[3]=c->r[31]|c->r[31]; // 80176FEC
  c->r[4]=c->r[4]+0x00000090u; // 80176FF0
  c->r[5]=0u+0x00000001u; // 80176FF4
  c->lr=0x80176FFCu; f_801E3A84(c); // 80176FF8
  goto L_8017725C; // 80176FFC
L_80177000:;
  c->r[4]=c->r[30]+0x000032C4u; // 80177000
  c->r[3]=c->r[31]|c->r[31]; // 80177004
  c->r[4]=c->r[4]+0x0000009Du; // 80177008
  c->r[5]=0u+0x00000001u; // 8017700C
  c->lr=0x80177014u; f_801E3A84(c); // 80177010
  goto L_8017725C; // 80177014
L_80177018:;
  c->r[30]=c->r[30]+0x000032C4u; // 80177018
  c->r[3]=c->r[31]|c->r[31]; // 8017701C
  c->r[4]=c->r[30]+0x000000AAu; // 80177020
  c->r[5]=0u+0x00000001u; // 80177024
  c->lr=0x8017702Cu; f_801E3A84(c); // 80177028
  c->r[3]=c->r[31]|c->r[31]; // 8017702C
  c->r[4]=c->r[30]+0x000000B7u; // 80177030
  c->r[5]=0u+0x00000001u; // 80177034
  c->lr=0x8017703Cu; f_801E3A84(c); // 80177038
  goto L_8017725C; // 8017703C
L_80177040:;
  c->r[4]=c->r[30]+0x000032C4u; // 80177040
  c->r[3]=c->r[31]|c->r[31]; // 80177044
  c->r[4]=c->r[4]+0x000000B7u; // 80177048
  c->r[5]=0u+0x00000001u; // 8017704C
  c->lr=0x80177054u; f_801E3A84(c); // 80177050
  goto L_8017725C; // 80177054
L_80177058:;
  c->r[4]=c->r[30]+0x000032C4u; // 80177058
  c->r[3]=c->r[31]|c->r[31]; // 8017705C
  c->r[4]=c->r[4]+0x000000C4u; // 80177060
  c->r[5]=0u+0x00000001u; // 80177064
  c->lr=0x8017706Cu; f_801E3A84(c); // 80177068
  goto L_8017725C; // 8017706C
L_80177070:;
  c->r[30]=c->r[30]+0x000032C4u; // 80177070
  c->r[3]=c->r[31]|c->r[31]; // 80177074
  c->r[4]=c->r[30]+0x000000D1u; // 80177078
  c->r[5]=0u+0x00000001u; // 8017707C
  c->lr=0x80177084u; f_801E3A84(c); // 80177080
  c->r[3]=c->r[31]|c->r[31]; // 80177084
  c->r[4]=c->r[30]+0x000000DEu; // 80177088
  c->r[5]=0u+0x00000001u; // 8017708C
  c->lr=0x80177094u; f_801E3A84(c); // 80177090
  goto L_8017725C; // 80177094
L_80177098:;
  c->r[4]=c->r[30]+0x000032C4u; // 80177098
  c->r[3]=c->r[31]|c->r[31]; // 8017709C
  c->r[4]=c->r[4]+0x000000DEu; // 801770A0
  c->r[5]=0u+0x00000001u; // 801770A4
  c->lr=0x801770ACu; f_801E3A84(c); // 801770A8
  goto L_8017725C; // 801770AC
L_801770B0:;
  c->r[4]=c->r[30]+0x000032C4u; // 801770B0
  c->r[3]=c->r[31]|c->r[31]; // 801770B4
  c->r[4]=c->r[4]+0x000000EBu; // 801770B8
  c->r[5]=0u+0x00000001u; // 801770BC
  c->lr=0x801770C4u; f_801E3A84(c); // 801770C0
  goto L_8017725C; // 801770C4
L_801770C8:;
  c->r[4]=c->r[30]+0x000032C4u; // 801770C8
  c->r[3]=c->r[31]|c->r[31]; // 801770CC
  c->r[4]=c->r[4]+0x000000F8u; // 801770D0
  c->r[5]=0u+0x00000001u; // 801770D4
  c->lr=0x801770DCu; f_801E3A84(c); // 801770D8
  goto L_8017725C; // 801770DC
L_801770E0:;
  c->r[4]=c->r[30]+0x000032C4u; // 801770E0
  c->r[3]=c->r[31]|c->r[31]; // 801770E4
  c->r[4]=c->r[4]+0x00000105u; // 801770E8
  c->r[5]=0u+0x00000001u; // 801770EC
  c->lr=0x801770F4u; f_801E3A84(c); // 801770F0
  goto L_8017725C; // 801770F4
L_801770F8:;
  c->r[30]=c->r[30]+0x000032C4u; // 801770F8
  c->r[3]=c->r[31]|c->r[31]; // 801770FC
  c->r[4]=c->r[30]+0x00000112u; // 80177100
  c->r[5]=0u+0x00000001u; // 80177104
  c->lr=0x8017710Cu; f_801E3A84(c); // 80177108
  c->r[3]=c->r[31]|c->r[31]; // 8017710C
  c->r[4]=c->r[30]+0x0000011Fu; // 80177110
  c->r[5]=0u+0x00000001u; // 80177114
  c->lr=0x8017711Cu; f_801E3A84(c); // 80177118
  goto L_8017725C; // 8017711C
L_80177120:;
  c->r[4]=c->r[30]+0x000032C4u; // 80177120
  c->r[3]=c->r[31]|c->r[31]; // 80177124
  c->r[4]=c->r[4]+0x0000011Fu; // 80177128
  c->r[5]=0u+0x00000001u; // 8017712C
  c->lr=0x80177134u; f_801E3A84(c); // 80177130
  goto L_8017725C; // 80177134
L_80177138:;
  c->r[30]=c->r[30]+0x000032C4u; // 80177138
  c->r[3]=c->r[31]|c->r[31]; // 8017713C
  c->r[4]=c->r[30]+0x0000012Cu; // 80177140
  c->r[5]=0u+0x00000001u; // 80177144
  c->lr=0x8017714Cu; f_801E3A84(c); // 80177148
  c->r[3]=c->r[31]|c->r[31]; // 8017714C
  c->r[4]=c->r[30]+0x00000139u; // 80177150
  c->r[5]=0u+0x00000001u; // 80177154
  c->lr=0x8017715Cu; f_801E3A84(c); // 80177158
  goto L_8017725C; // 8017715C
L_80177160:;
  c->r[4]=c->r[30]+0x000032C4u; // 80177160
  c->r[3]=c->r[31]|c->r[31]; // 80177164
  c->r[4]=c->r[4]+0x00000139u; // 80177168
  c->r[5]=0u+0x00000001u; // 8017716C
  c->lr=0x80177174u; f_801E3A84(c); // 80177170
  goto L_8017725C; // 80177174
L_80177178:;
  c->r[4]=c->r[30]+0x000032C4u; // 80177178
  c->r[3]=c->r[31]|c->r[31]; // 8017717C
  c->r[4]=c->r[4]+0x00000146u; // 80177180
  c->r[5]=0u+0x00000001u; // 80177184
  c->lr=0x8017718Cu; f_801E3A84(c); // 80177188
  goto L_8017725C; // 8017718C
L_80177190:;
  c->r[30]=c->r[30]+0x000032C4u; // 80177190
  c->r[3]=c->r[31]|c->r[31]; // 80177194
  c->r[4]=c->r[30]+0x00000153u; // 80177198
  c->r[5]=0u+0x00000001u; // 8017719C
  c->lr=0x801771A4u; f_801E3A84(c); // 801771A0
  c->r[3]=c->r[31]|c->r[31]; // 801771A4
  c->r[4]=c->r[30]+0x00000160u; // 801771A8
  c->r[5]=0u+0x00000001u; // 801771AC
  c->lr=0x801771B4u; f_801E3A84(c); // 801771B0
  goto L_8017725C; // 801771B4
L_801771B8:;
  c->r[4]=c->r[30]+0x000032C4u; // 801771B8
  c->r[3]=c->r[31]|c->r[31]; // 801771BC
  c->r[4]=c->r[4]+0x00000160u; // 801771C0
  c->r[5]=0u+0x00000001u; // 801771C4
  c->lr=0x801771CCu; f_801E3A84(c); // 801771C8
  goto L_8017725C; // 801771CC
L_801771D0:;
  c->r[4]=c->r[30]+0x000032C4u; // 801771D0
  c->r[3]=c->r[31]|c->r[31]; // 801771D4
  c->r[4]=c->r[4]+0x0000016Du; // 801771D8
  c->r[5]=0u+0x00000001u; // 801771DC
  c->lr=0x801771E4u; f_801E3A84(c); // 801771E0
  goto L_8017725C; // 801771E4
L_801771E8:;
  c->r[4]=c->r[30]+0x000032C4u; // 801771E8
  c->r[3]=c->r[31]|c->r[31]; // 801771EC
  c->r[4]=c->r[4]+0x0000017Au; // 801771F0
  c->r[5]=0u+0x00000001u; // 801771F4
  c->lr=0x801771FCu; f_801E3A84(c); // 801771F8
  goto L_8017725C; // 801771FC
L_80177200:;
  c->r[30]=c->r[30]+0x000032C4u; // 80177200
  c->r[3]=c->r[31]|c->r[31]; // 80177204
  c->r[4]=c->r[30]+0x00000187u; // 80177208
  c->r[5]=0u+0x00000001u; // 8017720C
  c->lr=0x80177214u; f_801E3A84(c); // 80177210
  c->r[3]=c->r[31]|c->r[31]; // 80177214
  c->r[4]=c->r[30]+0x00000194u; // 80177218
  c->r[5]=0u+0x00000001u; // 8017721C
  c->lr=0x80177224u; f_801E3A84(c); // 80177220
  goto L_8017725C; // 80177224
L_80177228:;
  c->r[4]=c->r[30]+0x000032C4u; // 80177228
  c->r[3]=c->r[31]|c->r[31]; // 8017722C
  c->r[4]=c->r[4]+0x00000194u; // 80177230
  c->r[5]=0u+0x00000001u; // 80177234
  c->lr=0x8017723Cu; f_801E3A84(c); // 80177238
  goto L_8017725C; // 8017723C
L_80177240:;
  cmps(c,0,(int32_t)c->r[3],0); // 80177240
  if (crb(c,2)) { goto L_8017725C; } // 80177244
  c->lr=0x8017724Cu; f_801E2520(c); // 80177248
  c->r[3]=R32(c->r[30]+0x00000014u); // 8017724C
  c->r[4]=0u+0x00000004u; // 80177250
  c->r[5]=0u+0x00000000u; // 80177254
  c->lr=0x8017725Cu; f_80038998(c); // 80177258
L_8017725C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017725C
  c->r[3]=0u+0x00000001u; // 80177260
  c->r[30]=R32(c->r[1]+0x00000018u); // 80177264
  c->r[29]=R32(c->r[1]+0x00000014u); // 80177268
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017726C
  c->lr=c->r[0]; // 80177270
  c->r[1]=c->r[1]+0x00000020u; // 80177274
  return; // 80177278
}

// fn_8017727C
void f_8017727C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017727C
  c->r[0]=c->lr; // 80177280
  c->r[4]=0u+0x00000005u; // 80177284
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177288
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017728C
  c->r[31]=0u+0x80620000u; // 80177290
  c->r[31]=c->r[31]+0x00007688u; // 80177294
  W32(c->r[1]+0x00000008u,c->r[30]); // 80177298
  c->r[30]=c->r[5]|c->r[5]; // 8017729C
  c->r[3]=R32(c->r[31]+0x00000014u); // 801772A0
  c->lr=0x801772A8u; f_8003560C(c); // 801772A4
  c->r[0]=R8(c->r[30]+0x00000003u); // 801772A8
  cmps(c,0,(int32_t)c->r[0],0); // 801772AC
  if (crb(c,2)) { goto L_801772B8; } // 801772B0
  goto L_801772EC; // 801772B4
L_801772B8:;
  c->r[4]=0u+0x00010000u; // 801772B8
  c->r[3]=0u+0x00000075u; // 801772BC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801772C0
  c->r[4]=0u+0x00000000u; // 801772C4
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801772C8
  c->lr=0x801772D0u; f_80036C44(c); // 801772CC
  c->r[5]=c->r[3]|c->r[3]; cr0(c,c->r[5]); // 801772D0
  c->r[3]=R32(c->r[31]+0x00000014u); // 801772D4
  c->r[4]=0u+0x00000005u; // 801772D8
  if (crb(c,2)) { goto L_801772E4; } // 801772DC
  goto L_801772E8; // 801772E0
L_801772E4:;
  c->r[5]=0u+0x00000000u; // 801772E4
L_801772E8:;
  c->lr=0x801772ECu; f_80038998(c); // 801772E8
L_801772EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801772EC
  c->r[3]=0u+0x00000001u; // 801772F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801772F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801772F8
  c->lr=c->r[0]; // 801772FC
  c->r[1]=c->r[1]+0x00000010u; // 80177300
  return; // 80177304
}

// fn_80177308
void f_80177308(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177308
  c->r[0]=c->lr; // 8017730C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177310
  c->r[0]=R8(c->r[5]+0x00000003u); // 80177314
  cmps(c,0,(int32_t)c->r[0],2); // 80177318
  if (crb(c,2)) { goto L_80177358; } // 8017731C
  if (!crb(c,0)) { goto L_80177334; } // 80177320
  cmps(c,0,(int32_t)c->r[0],0); // 80177324
  if (crb(c,2)) { goto L_80177340; } // 80177328
  if (!crb(c,0)) { goto L_8017734C; } // 8017732C
  goto L_8017737C; // 80177330
L_80177334:;
  cmps(c,0,(int32_t)c->r[0],4); // 80177334
  if (!crb(c,0)) { goto L_8017737C; } // 80177338
  goto L_8017736C; // 8017733C
L_80177340:;
  c->r[3]=0u+0x00000000u; // 80177340
  c->lr=0x80177348u; f_802A03E0(c); // 80177344
  goto L_8017737C; // 80177348
L_8017734C:;
  c->r[3]=0u+0x00000001u; // 8017734C
  c->lr=0x80177354u; f_802A03E0(c); // 80177350
  goto L_8017737C; // 80177354
L_80177358:;
  c->r[3]=0u+0x80620000u; // 80177358
  c->r[0]=0u+0x00000001u; // 8017735C
  c->r[3]=c->r[3]+0x00007D28u; // 80177360
  W8(c->r[3]+0x0000006Fu,c->r[0]); // 80177364
  goto L_8017737C; // 80177368
L_8017736C:;
  c->r[3]=0u+0x80620000u; // 8017736C
  c->r[0]=0u+0x00000000u; // 80177370
  c->r[3]=c->r[3]+0x00007D28u; // 80177374
  W8(c->r[3]+0x0000006Fu,c->r[0]); // 80177378
L_8017737C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017737C
  c->r[3]=0u+0x00000001u; // 80177380
  c->lr=c->r[0]; // 80177384
  c->r[1]=c->r[1]+0x00000010u; // 80177388
  return; // 8017738C
}

// fn_80177390
void f_80177390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177390
  c->r[0]=c->lr; // 80177394
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017739C
  c->r[0]=R8(c->r[5]+0x00000003u); // 801773A0
  cmps(c,0,(int32_t)c->r[0],1); // 801773A4
  if (crb(c,2)) { goto L_801773E0; } // 801773A8
  if (!crb(c,0)) { goto L_80177408; } // 801773AC
  cmps(c,0,(int32_t)c->r[0],0); // 801773B0
  if (!crb(c,0)) { goto L_801773BC; } // 801773B4
  goto L_80177408; // 801773B8
L_801773BC:;
  c->r[3]=0u+0x80620000u; // 801773BC
  c->r[5]=0u+0x80620000u; // 801773C0
  c->r[3]=c->r[3]+0x00007688u; // 801773C4
  c->r[4]=0u+0x00000028u; // 801773C8
  c->r[5]=c->r[5]+0x00007D28u; // 801773CC
  c->r[3]=R32(c->r[3]+0x00000014u); // 801773D0
  c->r[5]=R8(c->r[5]+0x0000008Au); // 801773D4
  c->lr=0x801773DCu; f_80038998(c); // 801773D8
  goto L_80177408; // 801773DC
L_801773E0:;
  c->r[31]=0u+0x80620000u; // 801773E0
  c->r[31]=c->r[31]+0x00007688u; // 801773E4
  c->r[3]=R32(c->r[31]+0x00000014u); // 801773E8
  c->lr=0x801773F0u; f_80108A84(c); // 801773EC
  cmps(c,0,(int32_t)c->r[3],0); // 801773F0
  if (crb(c,2)) { goto L_80177408; } // 801773F4
  c->r[3]=R32(c->r[31]+0x00000014u); // 801773F8
  c->r[4]=0u+0x00000029u; // 801773FC
  c->r[5]=0u+0x00000001u; // 80177400
  c->lr=0x80177408u; f_80038998(c); // 80177404
L_80177408:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80177408
  c->r[3]=0u+0x00000001u; // 8017740C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80177410
  c->lr=c->r[0]; // 80177414
  c->r[1]=c->r[1]+0x00000010u; // 80177418
  return; // 8017741C
}

// fn_80177420
void f_80177420(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177420
  c->r[0]=c->lr; // 80177424
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177428
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017742C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80177430
  c->r[0]=R8(c->r[5]+0x00000003u); // 80177434
  cmps(c,0,(int32_t)c->r[0],0); // 80177438
  if (crb(c,2)) { goto L_80177444; } // 8017743C
  goto L_80177494; // 80177440
L_80177444:;
  c->r[31]=0u+0x80620000u; // 80177444
  c->r[4]=0u+0x00000002u; // 80177448
  c->r[31]=c->r[31]+0x00007688u; // 8017744C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80177450
  c->lr=0x80177458u; f_8003560C(c); // 80177454
  c->r[30]=c->r[3]|c->r[3]; // 80177458
  c->r[3]=R32(c->r[31]+0x00000014u); // 8017745C
  c->r[4]=0u+0x00000003u; // 80177460
  c->lr=0x80177468u; f_8003560C(c); // 80177464
  cmps(c,0,(int32_t)c->r[30],0); // 80177468
  c->r[31]=c->r[3]|c->r[3]; // 8017746C
  if (crb(c,2)) { goto L_80177480; } // 80177470
  c->r[3]=c->r[30]|c->r[30]; // 80177474
  c->r[4]=0u+0x00000000u; // 80177478
  c->lr=0x80177480u; f_80036C04(c); // 8017747C
L_80177480:;
  cmps(c,0,(int32_t)c->r[31],0); // 80177480
  if (crb(c,2)) { goto L_80177494; } // 80177484
  c->r[3]=c->r[31]|c->r[31]; // 80177488
  c->r[4]=0u+0x00000000u; // 8017748C
  c->lr=0x80177494u; f_80036C04(c); // 80177490
L_80177494:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80177494
  c->r[3]=0u+0x00000001u; // 80177498
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017749C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801774A0
  c->lr=c->r[0]; // 801774A4
  c->r[1]=c->r[1]+0x00000010u; // 801774A8
  return; // 801774AC
}

// fn_801774B0
void f_801774B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFA40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801774B0
  c->r[0]=c->lr; // 801774B4
  W32(c->r[1]+0x000005C4u,c->r[0]); // 801774B8
  c->r[11]=c->r[1]+0x000005C0u; // 801774BC
  c->lr=0x801774C4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801774C0
  c->r[0]=R8(c->r[5]+0x00000003u); // 801774C4
  cmpu(c,0,c->r[0],0x0000000Eu); // 801774C8
  if (crb(c,1)) { goto L_80178270; } // 801774CC
  c->r[3]=0u+0x804C0000u; // 801774D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801774D4
  c->r[3]=c->r[3]+0xFFFFC17Cu; // 801774D8
  c->r[3]=R32(c->r[3]+c->r[0]); // 801774DC
  c->ctr=c->r[3]; // 801774E0
  if (true) { switch (c->ctr) { case 0x801774E8u: goto L_801774E8; case 0x8017770Cu: goto L_8017770C; case 0x8017784Cu: goto L_8017784C; case 0x8017795Cu: goto L_8017795C; case 0x80177AACu: goto L_80177AAC; case 0x80177BBCu: goto L_80177BBC; case 0x80177BE4u: goto L_80177BE4; case 0x80177D0Cu: goto L_80177D0C; case 0x80177E1Cu: goto L_80177E1C; case 0x80177E44u: goto L_80177E44; case 0x80177F6Cu: goto L_80177F6C; case 0x8017807Cu: goto L_8017807C; case 0x801780A4u: goto L_801780A4; case 0x80178184u: goto L_80178184; case 0x8017824Cu: goto L_8017824C; default: break; } dispatch(c,c->ctr); return; } // 801774E4
L_801774E8:;
  c->r[31]=0u+0x80620000u; // 801774E8
  c->r[4]=0u+0x0000001Au; // 801774EC
  c->r[31]=c->r[31]+0x00007688u; // 801774F0
  c->r[3]=R32(c->r[31]+0x00000014u); // 801774F4
  c->lr=0x801774FCu; f_8003560C(c); // 801774F8
  cmpu(c,0,c->r[3],0x000000FFu); // 801774FC
  c->r[28]=c->r[3]|c->r[3]; // 80177500
  if (crb(c,2)) { goto L_801775DC; } // 80177504
  c->r[3]=0u+0x80550000u; // 80177508
  c->r[4]=0u+0x0000001Fu; // 8017750C
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80177510
  c->lr=0x80177518u; f_8019C920(c); // 80177514
  c->r[4]=0u+0x00000000u; // 80177518
  c->lr=0x80177520u; f_80039840(c); // 8017751C
  c->r[4]=0u+0x803A0000u; // 80177520
  c->r[5]=c->r[1]+0x00000578u; // 80177524
  c->r[4]=c->r[4]+0x000032C4u; // 80177528
  c->r[6]=0u+0x00000001u; // 8017752C
  c->r[4]=c->r[4]+0x000001A1u; // 80177530
  c->lr=0x80177538u; f_80257018(c); // 80177534
  {uint32_t ea=c->r[2]+0xFFFFCBB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177538
  c->r[3]=c->r[1]+0x00000578u; // 8017753C
  {uint32_t ea=c->r[2]+0xFFFFCBBCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80177540
  {uint32_t ea=c->r[2]+0xFFFFCBC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80177544
  c->lr=0x8017754Cu; f_802571B8(c); // 80177548
  c->r[3]=c->r[1]+0x0000035Cu; // 8017754C
  c->r[4]=c->r[1]+0x00000350u; // 80177550
  c->r[5]=c->r[1]+0x00000344u; // 80177554
  c->r[6]=c->r[1]+0x00000578u; // 80177558
  c->r[7]=0u+0x00000000u; // 8017755C
  c->lr=0x80177564u; f_8002BE64(c); // 80177560
  {uint32_t ea=c->r[2]+0xFFFFCBC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177564
  c->r[3]=0u+0x80550000u; // 80177568
  c->r[12]=R32(c->r[1]+0x00000350u); // 8017756C
  c->r[4]=c->r[28]|c->r[28]; // 80177570
  {uint32_t ea=c->r[1]+0x00000344u; WF32(ea,c->f[0]);} // 80177574
  c->r[3]=c->r[3]+0xFFFFC848u; // 80177578
  c->r[11]=R32(c->r[1]+0x00000354u); // 8017757C
  c->r[5]=c->r[1]+0x000001ACu; // 80177580
  {uint32_t ea=c->r[1]+0x00000348u; WF32(ea,c->f[0]);} // 80177584
  c->r[6]=c->r[1]+0x000001A0u; // 80177588
  c->r[30]=R32(c->r[1]+0x00000344u); // 8017758C
  c->r[7]=c->r[1]+0x00000194u; // 80177590
  {uint32_t ea=c->r[1]+0x0000034Cu; WF32(ea,c->f[0]);} // 80177594
  c->r[29]=R32(c->r[1]+0x00000348u); // 80177598
  c->r[28]=R32(c->r[1]+0x0000034Cu); // 8017759C
  c->r[10]=R32(c->r[1]+0x00000358u); // 801775A0
  c->r[9]=R32(c->r[1]+0x0000035Cu); // 801775A4
  c->r[8]=R32(c->r[1]+0x00000360u); // 801775A8
  c->r[0]=R32(c->r[1]+0x00000364u); // 801775AC
  W32(c->r[1]+0x00000194u,c->r[30]); // 801775B0
  W32(c->r[1]+0x00000198u,c->r[29]); // 801775B4
  W32(c->r[1]+0x0000019Cu,c->r[28]); // 801775B8
  W32(c->r[1]+0x000001A0u,c->r[12]); // 801775BC
  W32(c->r[1]+0x000001A4u,c->r[11]); // 801775C0
  W32(c->r[1]+0x000001A8u,c->r[10]); // 801775C4
  W32(c->r[1]+0x000001ACu,c->r[9]); // 801775C8
  W32(c->r[1]+0x000001B0u,c->r[8]); // 801775CC
  W32(c->r[1]+0x000001B4u,c->r[0]); // 801775D0
  c->lr=0x801775D8u; f_8018DD04(c); // 801775D4
  goto L_80178270; // 801775D8
L_801775DC:;
  c->r[28]=0u+0x803A0000u; // 801775DC
  c->r[29]=0u+0x80550000u; // 801775E0
  c->r[28]=c->r[28]+0x000032C4u; // 801775E4
  c->r[5]=0u+0x00000000u; // 801775E8
  c->r[3]=c->r[29]+0xFFFFC848u; // 801775EC
  c->r[6]=0u+0x00000000u; // 801775F0
  c->r[4]=c->r[28]+0x000001A6u; // 801775F4
  c->lr=0x801775FCu; f_8018D3E4(c); // 801775F8
  c->r[4]=0u+0x80550000u; // 801775FC
  c->r[27]=c->r[3]|c->r[3]; // 80177600
  c->r[3]=c->r[4]+0xFFFFCE54u; // 80177604
  c->r[4]=0u+0x0000001Fu; // 80177608
  c->lr=0x80177610u; f_8019C920(c); // 8017760C
  c->r[4]=0u+0x00000000u; // 80177610
  c->lr=0x80177618u; f_80039840(c); // 80177614
  c->r[4]=c->r[28]+0x000001A1u; // 80177618
  c->r[5]=c->r[1]+0x00000548u; // 8017761C
  c->r[6]=0u+0x00000001u; // 80177620
  c->lr=0x80177628u; f_80257018(c); // 80177624
  {uint32_t ea=c->r[2]+0xFFFFCBB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177628
  c->r[3]=c->r[1]+0x00000548u; // 8017762C
  {uint32_t ea=c->r[2]+0xFFFFCBBCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80177630
  {uint32_t ea=c->r[2]+0xFFFFCBC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80177634
  c->lr=0x8017763Cu; f_802571B8(c); // 80177638
  c->r[3]=c->r[1]+0x00000338u; // 8017763C
  c->r[4]=c->r[1]+0x0000032Cu; // 80177640
  c->r[5]=c->r[1]+0x00000320u; // 80177644
  c->r[6]=c->r[1]+0x00000548u; // 80177648
  c->r[7]=0u+0x00000000u; // 8017764C
  c->lr=0x80177654u; f_8002BE64(c); // 80177650
  {uint32_t ea=c->r[1]+0x00000320u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177654
  c->r[3]=c->r[29]+0xFFFFC848u; // 80177658
  {uint32_t ea=c->r[2]+0xFFFFCBC8u; c->f[4]=RF64(ea);} // 8017765C
  c->r[4]=c->r[27]|c->r[27]; // 80177660
  {uint32_t ea=c->r[1]+0x00000324u; c->f[2]=c->ps1[2]=RF32(ea);} // 80177664
  c->r[5]=c->r[1]+0x00000188u; // 80177668
  c->f[3]=c->f[0]*c->f[4]; // 8017766C
  {uint32_t ea=c->r[1]+0x00000328u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177670
  {uint32_t ea=c->r[2]+0xFFFFCBB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177674
  c->r[6]=c->r[1]+0x0000017Cu; // 80177678
  c->f[2]=c->f[2]*c->f[4]; // 8017767C
  c->r[9]=R32(c->r[1]+0x00000338u); // 80177680
  {uint32_t ea=c->r[1]+0x00000334u; WF32(ea,c->f[0]);} // 80177684
  c->f[3]=c->ps1[3]=S(c->f[3]); // 80177688
  c->f[2]=c->ps1[2]=S(c->f[2]); // 8017768C
  c->r[8]=R32(c->r[1]+0x0000033Cu); // 80177690
  {uint32_t ea=c->r[1]+0x00000330u; WF32(ea,c->f[0]);} // 80177694
  c->f[1]=c->f[1]*c->f[4]; // 80177698
  c->r[10]=R32(c->r[1]+0x00000334u); // 8017769C
  {uint32_t ea=c->r[1]+0x0000032Cu; WF32(ea,c->f[0]);} // 801776A0
  c->r[11]=R32(c->r[1]+0x00000330u); // 801776A4
  c->r[7]=c->r[1]+0x00000170u; // 801776A8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801776AC
  {uint32_t ea=c->r[1]+0x00000320u; WF32(ea,c->f[3]);} // 801776B0
  c->r[12]=R32(c->r[1]+0x0000032Cu); // 801776B4
  {uint32_t ea=c->r[1]+0x00000324u; WF32(ea,c->f[2]);} // 801776B8
  c->r[30]=R32(c->r[1]+0x00000320u); // 801776BC
  {uint32_t ea=c->r[1]+0x00000328u; WF32(ea,c->f[0]);} // 801776C0
  c->r[29]=R32(c->r[1]+0x00000324u); // 801776C4
  c->r[28]=R32(c->r[1]+0x00000328u); // 801776C8
  c->r[0]=R32(c->r[1]+0x00000340u); // 801776CC
  W32(c->r[1]+0x00000170u,c->r[30]); // 801776D0
  W32(c->r[1]+0x00000174u,c->r[29]); // 801776D4
  W32(c->r[1]+0x00000178u,c->r[28]); // 801776D8
  W32(c->r[1]+0x0000017Cu,c->r[12]); // 801776DC
  W32(c->r[1]+0x00000180u,c->r[11]); // 801776E0
  W32(c->r[1]+0x00000184u,c->r[10]); // 801776E4
  W32(c->r[1]+0x00000188u,c->r[9]); // 801776E8
  W32(c->r[1]+0x0000018Cu,c->r[8]); // 801776EC
  W32(c->r[1]+0x00000190u,c->r[0]); // 801776F0
  c->lr=0x801776F8u; f_8018DD04(c); // 801776F4
  c->r[3]=R32(c->r[31]+0x00000014u); // 801776F8
  c->r[5]=c->r[27]|c->r[27]; // 801776FC
  c->r[4]=0u+0x0000001Au; // 80177700
  c->lr=0x80177708u; f_80038998(c); // 80177704
  goto L_80178270; // 80177708
L_8017770C:;
  c->r[31]=0u+0x80620000u; // 8017770C
  c->r[4]=0u+0x0000001Au; // 80177710
  c->r[31]=c->r[31]+0x00007688u; // 80177714
  c->r[3]=R32(c->r[31]+0x00000014u); // 80177718
  c->lr=0x80177720u; f_8003560C(c); // 8017771C
  c->r[29]=0u+0x80550000u; // 80177720
  c->r[4]=c->r[3]|c->r[3]; // 80177724
  c->r[3]=c->r[29]+0xFFFFC848u; // 80177728
  c->lr=0x80177730u; f_8018D694(c); // 8017772C
  c->r[28]=0u+0x803A0000u; // 80177730
  c->r[3]=c->r[29]+0xFFFFC848u; // 80177734
  c->r[28]=c->r[28]+0x000032C4u; // 80177738
  c->r[5]=0u+0x00000000u; // 8017773C
  c->r[4]=c->r[28]+0x000001AAu; // 80177740
  c->r[6]=0u+0x00000000u; // 80177744
  c->lr=0x8017774Cu; f_8018D3E4(c); // 80177748
  c->r[4]=0u+0x80550000u; // 8017774C
  c->r[27]=c->r[3]|c->r[3]; // 80177750
  c->r[3]=c->r[4]+0xFFFFCE54u; // 80177754
  c->r[4]=0u+0x0000001Fu; // 80177758
  c->lr=0x80177760u; f_8019C920(c); // 8017775C
  c->r[4]=0u+0x00000000u; // 80177760
  c->lr=0x80177768u; f_80039840(c); // 80177764
  c->r[4]=c->r[28]+0x000001A1u; // 80177768
  c->r[5]=c->r[1]+0x00000518u; // 8017776C
  c->r[6]=0u+0x00000001u; // 80177770
  c->lr=0x80177778u; f_80257018(c); // 80177774
  {uint32_t ea=c->r[2]+0xFFFFCBB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177778
  c->r[3]=c->r[1]+0x00000518u; // 8017777C
  {uint32_t ea=c->r[2]+0xFFFFCBBCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80177780
  {uint32_t ea=c->r[2]+0xFFFFCBC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80177784
  c->lr=0x8017778Cu; f_802571B8(c); // 80177788
  c->r[3]=c->r[1]+0x00000314u; // 8017778C
  c->r[4]=c->r[1]+0x00000308u; // 80177790
  c->r[5]=c->r[1]+0x000002FCu; // 80177794
  c->r[6]=c->r[1]+0x00000518u; // 80177798
  c->r[7]=0u+0x00000000u; // 8017779C
  c->lr=0x801777A4u; f_8002BE64(c); // 801777A0
  {uint32_t ea=c->r[1]+0x000002FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801777A4
  c->r[3]=c->r[29]+0xFFFFC848u; // 801777A8
  {uint32_t ea=c->r[2]+0xFFFFCBC8u; c->f[3]=RF64(ea);} // 801777AC
  c->r[4]=c->r[27]|c->r[27]; // 801777B0
  {uint32_t ea=c->r[1]+0x00000300u; c->f[1]=c->ps1[1]=RF32(ea);} // 801777B4
  c->r[5]=c->r[1]+0x00000164u; // 801777B8
  {uint32_t ea=c->r[1]+0x00000304u; c->f[0]=c->ps1[0]=RF32(ea);} // 801777BC
  c->f[2]=c->f[2]*c->f[3]; // 801777C0
  c->r[12]=R32(c->r[1]+0x00000308u); // 801777C4
  c->r[6]=c->r[1]+0x00000158u; // 801777C8
  c->f[1]=c->f[1]*c->f[3]; // 801777CC
  c->r[11]=R32(c->r[1]+0x0000030Cu); // 801777D0
  c->r[10]=R32(c->r[1]+0x00000310u); // 801777D4
  c->f[0]=c->f[0]*c->f[3]; // 801777D8
  c->r[9]=R32(c->r[1]+0x00000314u); // 801777DC
  c->r[8]=R32(c->r[1]+0x00000318u); // 801777E0
  c->f[2]=c->ps1[2]=S(c->f[2]); // 801777E4
  c->r[0]=R32(c->r[1]+0x0000031Cu); // 801777E8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801777EC
  c->f[0]=c->ps1[0]=S(c->f[0]); // 801777F0
  {uint32_t ea=c->r[1]+0x000002FCu; WF32(ea,c->f[2]);} // 801777F4
  c->r[7]=c->r[1]+0x0000014Cu; // 801777F8
  {uint32_t ea=c->r[1]+0x00000300u; WF32(ea,c->f[1]);} // 801777FC
  c->r[30]=R32(c->r[1]+0x000002FCu); // 80177800
  {uint32_t ea=c->r[1]+0x00000304u; WF32(ea,c->f[0]);} // 80177804
  c->r[29]=R32(c->r[1]+0x00000300u); // 80177808
  c->r[28]=R32(c->r[1]+0x00000304u); // 8017780C
  W32(c->r[1]+0x0000014Cu,c->r[30]); // 80177810
  W32(c->r[1]+0x00000150u,c->r[29]); // 80177814
  W32(c->r[1]+0x00000154u,c->r[28]); // 80177818
  W32(c->r[1]+0x00000158u,c->r[12]); // 8017781C
  W32(c->r[1]+0x0000015Cu,c->r[11]); // 80177820
  W32(c->r[1]+0x00000160u,c->r[10]); // 80177824
  W32(c->r[1]+0x00000164u,c->r[9]); // 80177828
  W32(c->r[1]+0x00000168u,c->r[8]); // 8017782C
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80177830
  c->lr=0x80177838u; f_8018DD04(c); // 80177834
  c->r[3]=R32(c->r[31]+0x00000014u); // 80177838
  c->r[5]=c->r[27]|c->r[27]; // 8017783C
  c->r[4]=0u+0x0000001Au; // 80177840
  c->lr=0x80177848u; f_80038998(c); // 80177844
  goto L_80178270; // 80177848
L_8017784C:;
  c->r[3]=0u+0x80620000u; // 8017784C
  c->r[4]=0u+0x0000001Au; // 80177850
  c->r[3]=c->r[3]+0x00007688u; // 80177854
  c->r[3]=R32(c->r[3]+0x00000014u); // 80177858
  c->lr=0x80177860u; f_8003560C(c); // 8017785C
  c->r[4]=0u+0x80550000u; // 80177860
  c->r[27]=c->r[3]|c->r[3]; // 80177864
  c->r[3]=c->r[4]+0xFFFFCE54u; // 80177868
  c->r[4]=0u+0x0000001Fu; // 8017786C
  c->lr=0x80177874u; f_8019C920(c); // 80177870
  c->r[4]=0u+0x00000000u; // 80177874
  c->lr=0x8017787Cu; f_80039840(c); // 80177878
  c->r[4]=0u+0x803A0000u; // 8017787C
  c->r[5]=c->r[1]+0x000004E8u; // 80177880
  c->r[4]=c->r[4]+0x000032C4u; // 80177884
  c->r[6]=0u+0x00000001u; // 80177888
  c->r[4]=c->r[4]+0x000001A1u; // 8017788C
  c->lr=0x80177894u; f_80257018(c); // 80177890
  {uint32_t ea=c->r[2]+0xFFFFCBB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177894
  c->r[3]=c->r[1]+0x000004E8u; // 80177898
  {uint32_t ea=c->r[2]+0xFFFFCBBCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017789C
  {uint32_t ea=c->r[2]+0xFFFFCBC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801778A0
  c->lr=0x801778A8u; f_802571B8(c); // 801778A4
  c->r[3]=c->r[1]+0x000002F0u; // 801778A8
  c->r[4]=c->r[1]+0x000002E4u; // 801778AC
  c->r[5]=c->r[1]+0x000002D8u; // 801778B0
  c->r[6]=c->r[1]+0x000004E8u; // 801778B4
  c->r[7]=0u+0x00000000u; // 801778B8
  c->lr=0x801778C0u; f_8002BE64(c); // 801778BC
  {uint32_t ea=c->r[1]+0x000002D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801778C0
  c->r[3]=0u+0x80550000u; // 801778C4
  {uint32_t ea=c->r[2]+0xFFFFCBC8u; c->f[3]=RF64(ea);} // 801778C8
  c->r[4]=c->r[27]|c->r[27]; // 801778CC
  {uint32_t ea=c->r[1]+0x000002DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801778D0
  c->r[3]=c->r[3]+0xFFFFC848u; // 801778D4
  {uint32_t ea=c->r[1]+0x000002E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801778D8
  c->f[2]=c->f[2]*c->f[3]; // 801778DC
  c->r[12]=R32(c->r[1]+0x000002E4u); // 801778E0
  c->r[5]=c->r[1]+0x00000140u; // 801778E4
  c->f[1]=c->f[1]*c->f[3]; // 801778E8
  c->r[11]=R32(c->r[1]+0x000002E8u); // 801778EC
  c->r[10]=R32(c->r[1]+0x000002ECu); // 801778F0
  c->f[0]=c->f[0]*c->f[3]; // 801778F4
  c->r[9]=R32(c->r[1]+0x000002F0u); // 801778F8
  c->r[8]=R32(c->r[1]+0x000002F4u); // 801778FC
  c->f[2]=c->ps1[2]=S(c->f[2]); // 80177900
  c->r[0]=R32(c->r[1]+0x000002F8u); // 80177904
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80177908
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8017790C
  {uint32_t ea=c->r[1]+0x000002D8u; WF32(ea,c->f[2]);} // 80177910
  c->r[6]=c->r[1]+0x00000134u; // 80177914
  c->r[7]=c->r[1]+0x00000128u; // 80177918
  {uint32_t ea=c->r[1]+0x000002DCu; WF32(ea,c->f[1]);} // 8017791C
  c->r[30]=R32(c->r[1]+0x000002D8u); // 80177920
  {uint32_t ea=c->r[1]+0x000002E0u; WF32(ea,c->f[0]);} // 80177924
  c->r[29]=R32(c->r[1]+0x000002DCu); // 80177928
  c->r[28]=R32(c->r[1]+0x000002E0u); // 8017792C
  W32(c->r[1]+0x00000128u,c->r[30]); // 80177930
  W32(c->r[1]+0x0000012Cu,c->r[29]); // 80177934
  W32(c->r[1]+0x00000130u,c->r[28]); // 80177938
  W32(c->r[1]+0x00000134u,c->r[12]); // 8017793C
  W32(c->r[1]+0x00000138u,c->r[11]); // 80177940
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80177944
  W32(c->r[1]+0x00000140u,c->r[9]); // 80177948
  W32(c->r[1]+0x00000144u,c->r[8]); // 8017794C
  W32(c->r[1]+0x00000148u,c->r[0]); // 80177950
  c->lr=0x80177958u; f_8018DD04(c); // 80177954
  goto L_80178270; // 80177958
L_8017795C:;
  c->r[31]=0u+0x80620000u; // 8017795C
  c->r[4]=0u+0x0000001Au; // 80177960
  c->r[31]=c->r[31]+0x00007688u; // 80177964
  c->r[3]=R32(c->r[31]+0x00000014u); // 80177968
  c->lr=0x80177970u; f_8003560C(c); // 8017796C
  c->r[29]=0u+0x80550000u; // 80177970
  c->r[4]=c->r[3]|c->r[3]; // 80177974
  c->r[3]=c->r[29]+0xFFFFC848u; // 80177978
  c->lr=0x80177980u; f_8018D694(c); // 8017797C
  c->r[28]=0u+0x803A0000u; // 80177980
  c->r[3]=c->r[29]+0xFFFFC848u; // 80177984
  c->r[28]=c->r[28]+0x000032C4u; // 80177988
  c->r[5]=0u+0x00000000u; // 8017798C
  c->r[4]=c->r[28]+0x000001A6u; // 80177990
  c->r[6]=0u+0x00000000u; // 80177994
  c->lr=0x8017799Cu; f_8018D3E4(c); // 80177998
  c->r[4]=0u+0x80550000u; // 8017799C
  c->r[27]=c->r[3]|c->r[3]; // 801779A0
  c->r[3]=c->r[4]+0xFFFFCE54u; // 801779A4
  c->r[4]=0u+0x0000001Fu; // 801779A8
  c->lr=0x801779B0u; f_8019C920(c); // 801779AC
  c->r[4]=0u+0x00000000u; // 801779B0
  c->lr=0x801779B8u; f_80039840(c); // 801779B4
  c->r[4]=c->r[28]+0x000001A1u; // 801779B8
  c->r[5]=c->r[1]+0x000004B8u; // 801779BC
  c->r[6]=0u+0x00000001u; // 801779C0
  c->lr=0x801779C8u; f_80257018(c); // 801779C4
  {uint32_t ea=c->r[2]+0xFFFFCBB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801779C8
  c->r[3]=c->r[1]+0x000004B8u; // 801779CC
  {uint32_t ea=c->r[2]+0xFFFFCBBCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801779D0
  {uint32_t ea=c->r[2]+0xFFFFCBC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801779D4
  c->lr=0x801779DCu; f_802571B8(c); // 801779D8
  c->r[3]=c->r[1]+0x000002CCu; // 801779DC
  c->r[4]=c->r[1]+0x000002C0u; // 801779E0
  c->r[5]=c->r[1]+0x000002B4u; // 801779E4
  c->r[6]=c->r[1]+0x000004B8u; // 801779E8
  c->r[7]=0u+0x00000000u; // 801779EC
  c->lr=0x801779F4u; f_8002BE64(c); // 801779F0
  {uint32_t ea=c->r[1]+0x000002B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801779F4
  c->r[3]=c->r[29]+0xFFFFC848u; // 801779F8
  {uint32_t ea=c->r[2]+0xFFFFCBC8u; c->f[4]=RF64(ea);} // 801779FC
  c->r[4]=c->r[27]|c->r[27]; // 80177A00
  {uint32_t ea=c->r[1]+0x000002B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80177A04
  c->r[5]=c->r[1]+0x0000011Cu; // 80177A08
  c->f[3]=c->f[0]*c->f[4]; // 80177A0C
  {uint32_t ea=c->r[1]+0x000002BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80177A10
  {uint32_t ea=c->r[2]+0xFFFFCBB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177A14
  c->r[6]=c->r[1]+0x00000110u; // 80177A18
  c->f[2]=c->f[2]*c->f[4]; // 80177A1C
  c->r[9]=R32(c->r[1]+0x000002CCu); // 80177A20
  {uint32_t ea=c->r[1]+0x000002C8u; WF32(ea,c->f[0]);} // 80177A24
  c->f[3]=c->ps1[3]=S(c->f[3]); // 80177A28
  c->f[2]=c->ps1[2]=S(c->f[2]); // 80177A2C
  c->r[8]=R32(c->r[1]+0x000002D0u); // 80177A30
  {uint32_t ea=c->r[1]+0x000002C4u; WF32(ea,c->f[0]);} // 80177A34
  c->f[1]=c->f[1]*c->f[4]; // 80177A38
  c->r[10]=R32(c->r[1]+0x000002C8u); // 80177A3C
  {uint32_t ea=c->r[1]+0x000002C0u; WF32(ea,c->f[0]);} // 80177A40
  c->r[11]=R32(c->r[1]+0x000002C4u); // 80177A44
  c->r[7]=c->r[1]+0x00000104u; // 80177A48
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80177A4C
  {uint32_t ea=c->r[1]+0x000002B4u; WF32(ea,c->f[3]);} // 80177A50
  c->r[12]=R32(c->r[1]+0x000002C0u); // 80177A54
  {uint32_t ea=c->r[1]+0x000002B8u; WF32(ea,c->f[2]);} // 80177A58
  c->r[30]=R32(c->r[1]+0x000002B4u); // 80177A5C
  {uint32_t ea=c->r[1]+0x000002BCu; WF32(ea,c->f[0]);} // 80177A60
  c->r[29]=R32(c->r[1]+0x000002B8u); // 80177A64
  c->r[28]=R32(c->r[1]+0x000002BCu); // 80177A68
  c->r[0]=R32(c->r[1]+0x000002D4u); // 80177A6C
  W32(c->r[1]+0x00000104u,c->r[30]); // 80177A70
  W32(c->r[1]+0x00000108u,c->r[29]); // 80177A74
  W32(c->r[1]+0x0000010Cu,c->r[28]); // 80177A78
  W32(c->r[1]+0x00000110u,c->r[12]); // 80177A7C
  W32(c->r[1]+0x00000114u,c->r[11]); // 80177A80
  W32(c->r[1]+0x00000118u,c->r[10]); // 80177A84
  W32(c->r[1]+0x0000011Cu,c->r[9]); // 80177A88
  W32(c->r[1]+0x00000120u,c->r[8]); // 80177A8C
  W32(c->r[1]+0x00000124u,c->r[0]); // 80177A90
  c->lr=0x80177A98u; f_8018DD04(c); // 80177A94
  c->r[3]=R32(c->r[31]+0x00000014u); // 80177A98
  c->r[5]=c->r[27]|c->r[27]; // 80177A9C
  c->r[4]=0u+0x0000001Au; // 80177AA0
  c->lr=0x80177AA8u; f_80038998(c); // 80177AA4
  goto L_80178270; // 80177AA8
L_80177AAC:;
  c->r[3]=0u+0x80620000u; // 80177AAC
  c->r[4]=0u+0x0000001Au; // 80177AB0
  c->r[3]=c->r[3]+0x00007688u; // 80177AB4
  c->r[3]=R32(c->r[3]+0x00000014u); // 80177AB8
  c->lr=0x80177AC0u; f_8003560C(c); // 80177ABC
  c->r[4]=0u+0x80550000u; // 80177AC0
  c->r[27]=c->r[3]|c->r[3]; // 80177AC4
  c->r[3]=c->r[4]+0xFFFFCE54u; // 80177AC8
  c->r[4]=0u+0x0000001Fu; // 80177ACC
  c->lr=0x80177AD4u; f_8019C920(c); // 80177AD0
  c->r[4]=0u+0x00000000u; // 80177AD4
  c->lr=0x80177ADCu; f_80039840(c); // 80177AD8
  c->r[4]=0u+0x803A0000u; // 80177ADC
  c->r[5]=c->r[1]+0x00000488u; // 80177AE0
  c->r[4]=c->r[4]+0x000032C4u; // 80177AE4
  c->r[6]=0u+0x00000001u; // 80177AE8
  c->r[4]=c->r[4]+0x000001A1u; // 80177AEC
  c->lr=0x80177AF4u; f_80257018(c); // 80177AF0
  {uint32_t ea=c->r[2]+0xFFFFCBB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177AF4
  c->r[3]=c->r[1]+0x00000488u; // 80177AF8
  {uint32_t ea=c->r[2]+0xFFFFCBBCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80177AFC
  {uint32_t ea=c->r[2]+0xFFFFCBC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80177B00
  c->lr=0x80177B08u; f_802571B8(c); // 80177B04
  c->r[3]=c->r[1]+0x000002A8u; // 80177B08
  c->r[4]=c->r[1]+0x0000029Cu; // 80177B0C
  c->r[5]=c->r[1]+0x00000290u; // 80177B10
  c->r[6]=c->r[1]+0x00000488u; // 80177B14
  c->r[7]=0u+0x00000000u; // 80177B18
  c->lr=0x80177B20u; f_8002BE64(c); // 80177B1C
  {uint32_t ea=c->r[1]+0x00000290u; c->f[2]=c->ps1[2]=RF32(ea);} // 80177B20
  c->r[3]=0u+0x80550000u; // 80177B24
  {uint32_t ea=c->r[2]+0xFFFFCBC8u; c->f[3]=RF64(ea);} // 80177B28
  c->r[4]=c->r[27]|c->r[27]; // 80177B2C
  {uint32_t ea=c->r[1]+0x00000294u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177B30
  c->r[3]=c->r[3]+0xFFFFC848u; // 80177B34
  {uint32_t ea=c->r[1]+0x00000298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177B38
  c->f[2]=c->f[2]*c->f[3]; // 80177B3C
  c->r[12]=R32(c->r[1]+0x0000029Cu); // 80177B40
  c->r[5]=c->r[1]+0x000000F8u; // 80177B44
  c->f[1]=c->f[1]*c->f[3]; // 80177B48
  c->r[11]=R32(c->r[1]+0x000002A0u); // 80177B4C
  c->r[10]=R32(c->r[1]+0x000002A4u); // 80177B50
  c->f[0]=c->f[0]*c->f[3]; // 80177B54
  c->r[9]=R32(c->r[1]+0x000002A8u); // 80177B58
  c->r[8]=R32(c->r[1]+0x000002ACu); // 80177B5C
  c->f[2]=c->ps1[2]=S(c->f[2]); // 80177B60
  c->r[0]=R32(c->r[1]+0x000002B0u); // 80177B64
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80177B68
  c->f[0]=c->ps1[0]=S(c->f[0]); // 80177B6C
  {uint32_t ea=c->r[1]+0x00000290u; WF32(ea,c->f[2]);} // 80177B70
  c->r[6]=c->r[1]+0x000000ECu; // 80177B74
  c->r[7]=c->r[1]+0x000000E0u; // 80177B78
  {uint32_t ea=c->r[1]+0x00000294u; WF32(ea,c->f[1]);} // 80177B7C
  c->r[30]=R32(c->r[1]+0x00000290u); // 80177B80
  {uint32_t ea=c->r[1]+0x00000298u; WF32(ea,c->f[0]);} // 80177B84
  c->r[29]=R32(c->r[1]+0x00000294u); // 80177B88
  c->r[28]=R32(c->r[1]+0x00000298u); // 80177B8C
  W32(c->r[1]+0x000000E0u,c->r[30]); // 80177B90
  W32(c->r[1]+0x000000E4u,c->r[29]); // 80177B94
  W32(c->r[1]+0x000000E8u,c->r[28]); // 80177B98
  W32(c->r[1]+0x000000ECu,c->r[12]); // 80177B9C
  W32(c->r[1]+0x000000F0u,c->r[11]); // 80177BA0
  W32(c->r[1]+0x000000F4u,c->r[10]); // 80177BA4
  W32(c->r[1]+0x000000F8u,c->r[9]); // 80177BA8
  W32(c->r[1]+0x000000FCu,c->r[8]); // 80177BAC
  W32(c->r[1]+0x00000100u,c->r[0]); // 80177BB0
  c->lr=0x80177BB8u; f_8018DD04(c); // 80177BB4
  goto L_80178270; // 80177BB8
L_80177BBC:;
  c->r[3]=0u+0x80620000u; // 80177BBC
  c->r[4]=0u+0x0000001Au; // 80177BC0
  c->r[3]=c->r[3]+0x00007688u; // 80177BC4
  c->r[3]=R32(c->r[3]+0x00000014u); // 80177BC8
  c->lr=0x80177BD0u; f_8003560C(c); // 80177BCC
  c->r[5]=0u+0x80550000u; // 80177BD0
  c->r[4]=c->r[3]|c->r[3]; // 80177BD4
  c->r[3]=c->r[5]+0xFFFFC848u; // 80177BD8
  c->lr=0x80177BE0u; f_8018D694(c); // 80177BDC
  goto L_80178270; // 80177BE0
L_80177BE4:;
  c->r[28]=0u+0x803A0000u; // 80177BE4
  c->r[29]=0u+0x80550000u; // 80177BE8
  c->r[28]=c->r[28]+0x000032C4u; // 80177BEC
  c->r[5]=0u+0x00000000u; // 80177BF0
  c->r[3]=c->r[29]+0xFFFFC848u; // 80177BF4
  c->r[6]=0u+0x00000000u; // 80177BF8
  c->r[4]=c->r[28]+0x000001AAu; // 80177BFC
  c->lr=0x80177C04u; f_8018D3E4(c); // 80177C00
  c->r[4]=0u+0x80550000u; // 80177C04
  c->r[27]=c->r[3]|c->r[3]; // 80177C08
  c->r[3]=c->r[4]+0xFFFFCE54u; // 80177C0C
  c->r[4]=0u+0x00000020u; // 80177C10
  c->lr=0x80177C18u; f_8019C920(c); // 80177C14
  c->r[4]=0u+0x00000000u; // 80177C18
  c->lr=0x80177C20u; f_80039840(c); // 80177C1C
  c->r[4]=c->r[28]+0x000001A1u; // 80177C20
  c->r[5]=c->r[1]+0x00000458u; // 80177C24
  c->r[6]=0u+0x00000001u; // 80177C28
  c->lr=0x80177C30u; f_80257018(c); // 80177C2C
  {uint32_t ea=c->r[2]+0xFFFFCBB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177C30
  c->r[3]=c->r[1]+0x00000458u; // 80177C34
  {uint32_t ea=c->r[2]+0xFFFFCBD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80177C38
  c->f[3]=c->f[1]; // 80177C3C
  c->lr=0x80177C44u; f_802571B8(c); // 80177C40
  c->r[3]=c->r[1]+0x00000284u; // 80177C44
  c->r[4]=c->r[1]+0x00000278u; // 80177C48
  c->r[5]=c->r[1]+0x0000026Cu; // 80177C4C
  c->r[6]=c->r[1]+0x00000458u; // 80177C50
  c->r[7]=0u+0x00000000u; // 80177C54
  c->lr=0x80177C5Cu; f_8002BE64(c); // 80177C58
  {uint32_t ea=c->r[1]+0x0000026Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80177C5C
  c->r[3]=c->r[29]+0xFFFFC848u; // 80177C60
  {uint32_t ea=c->r[2]+0xFFFFCBC8u; c->f[3]=RF64(ea);} // 80177C64
  c->r[4]=c->r[27]|c->r[27]; // 80177C68
  {uint32_t ea=c->r[1]+0x00000270u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177C6C
  c->r[5]=c->r[1]+0x000000D4u; // 80177C70
  {uint32_t ea=c->r[1]+0x00000274u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177C74
  c->f[2]=c->f[2]*c->f[3]; // 80177C78
  c->r[12]=R32(c->r[1]+0x00000278u); // 80177C7C
  c->r[6]=c->r[1]+0x000000C8u; // 80177C80
  c->f[1]=c->f[1]*c->f[3]; // 80177C84
  c->r[11]=R32(c->r[1]+0x0000027Cu); // 80177C88
  c->r[10]=R32(c->r[1]+0x00000280u); // 80177C8C
  c->f[0]=c->f[0]*c->f[3]; // 80177C90
  c->r[9]=R32(c->r[1]+0x00000284u); // 80177C94
  c->r[8]=R32(c->r[1]+0x00000288u); // 80177C98
  c->f[2]=c->ps1[2]=S(c->f[2]); // 80177C9C
  c->r[0]=R32(c->r[1]+0x0000028Cu); // 80177CA0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80177CA4
  c->f[0]=c->ps1[0]=S(c->f[0]); // 80177CA8
  {uint32_t ea=c->r[1]+0x0000026Cu; WF32(ea,c->f[2]);} // 80177CAC
  c->r[7]=c->r[1]+0x000000BCu; // 80177CB0
  {uint32_t ea=c->r[1]+0x00000270u; WF32(ea,c->f[1]);} // 80177CB4
  c->r[30]=R32(c->r[1]+0x0000026Cu); // 80177CB8
  {uint32_t ea=c->r[1]+0x00000274u; WF32(ea,c->f[0]);} // 80177CBC
  c->r[29]=R32(c->r[1]+0x00000270u); // 80177CC0
  c->r[28]=R32(c->r[1]+0x00000274u); // 80177CC4
  W32(c->r[1]+0x000000BCu,c->r[30]); // 80177CC8
  W32(c->r[1]+0x000000C0u,c->r[29]); // 80177CCC
  W32(c->r[1]+0x000000C4u,c->r[28]); // 80177CD0
  W32(c->r[1]+0x000000C8u,c->r[12]); // 80177CD4
  W32(c->r[1]+0x000000CCu,c->r[11]); // 80177CD8
  W32(c->r[1]+0x000000D0u,c->r[10]); // 80177CDC
  W32(c->r[1]+0x000000D4u,c->r[9]); // 80177CE0
  W32(c->r[1]+0x000000D8u,c->r[8]); // 80177CE4
  W32(c->r[1]+0x000000DCu,c->r[0]); // 80177CE8
  c->lr=0x80177CF0u; f_8018DD04(c); // 80177CEC
  c->r[3]=0u+0x80620000u; // 80177CF0
  c->r[5]=c->r[27]|c->r[27]; // 80177CF4
  c->r[3]=c->r[3]+0x00007688u; // 80177CF8
  c->r[4]=0u+0x00000019u; // 80177CFC
  c->r[3]=R32(c->r[3]+0x00000014u); // 80177D00
  c->lr=0x80177D08u; f_80038998(c); // 80177D04
  goto L_80178270; // 80177D08
L_80177D0C:;
  c->r[3]=0u+0x80620000u; // 80177D0C
  c->r[4]=0u+0x00000019u; // 80177D10
  c->r[3]=c->r[3]+0x00007688u; // 80177D14
  c->r[3]=R32(c->r[3]+0x00000014u); // 80177D18
  c->lr=0x80177D20u; f_8003560C(c); // 80177D1C
  c->r[4]=0u+0x80550000u; // 80177D20
  c->r[27]=c->r[3]|c->r[3]; // 80177D24
  c->r[3]=c->r[4]+0xFFFFCE54u; // 80177D28
  c->r[4]=0u+0x00000020u; // 80177D2C
  c->lr=0x80177D34u; f_8019C920(c); // 80177D30
  c->r[4]=0u+0x00000000u; // 80177D34
  c->lr=0x80177D3Cu; f_80039840(c); // 80177D38
  c->r[4]=0u+0x803A0000u; // 80177D3C
  c->r[5]=c->r[1]+0x00000428u; // 80177D40
  c->r[4]=c->r[4]+0x000032C4u; // 80177D44
  c->r[6]=0u+0x00000001u; // 80177D48
  c->r[4]=c->r[4]+0x000001A1u; // 80177D4C
  c->lr=0x80177D54u; f_80257018(c); // 80177D50
  {uint32_t ea=c->r[2]+0xFFFFCBB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177D54
  c->r[3]=c->r[1]+0x00000428u; // 80177D58
  {uint32_t ea=c->r[2]+0xFFFFCBD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80177D5C
  c->f[3]=c->f[1]; // 80177D60
  c->lr=0x80177D68u; f_802571B8(c); // 80177D64
  c->r[3]=c->r[1]+0x00000260u; // 80177D68
  c->r[4]=c->r[1]+0x00000254u; // 80177D6C
  c->r[5]=c->r[1]+0x00000248u; // 80177D70
  c->r[6]=c->r[1]+0x00000428u; // 80177D74
  c->r[7]=0u+0x00000000u; // 80177D78
  c->lr=0x80177D80u; f_8002BE64(c); // 80177D7C
  {uint32_t ea=c->r[1]+0x00000248u; c->f[2]=c->ps1[2]=RF32(ea);} // 80177D80
  c->r[3]=0u+0x80550000u; // 80177D84
  {uint32_t ea=c->r[2]+0xFFFFCBC8u; c->f[3]=RF64(ea);} // 80177D88
  c->r[4]=c->r[27]|c->r[27]; // 80177D8C
  {uint32_t ea=c->r[1]+0x0000024Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80177D90
  c->r[3]=c->r[3]+0xFFFFC848u; // 80177D94
  {uint32_t ea=c->r[1]+0x00000250u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177D98
  c->f[2]=c->f[2]*c->f[3]; // 80177D9C
  c->r[12]=R32(c->r[1]+0x00000254u); // 80177DA0
  c->r[5]=c->r[1]+0x000000B0u; // 80177DA4
  c->f[1]=c->f[1]*c->f[3]; // 80177DA8
  c->r[11]=R32(c->r[1]+0x00000258u); // 80177DAC
  c->r[10]=R32(c->r[1]+0x0000025Cu); // 80177DB0
  c->f[0]=c->f[0]*c->f[3]; // 80177DB4
  c->r[9]=R32(c->r[1]+0x00000260u); // 80177DB8
  c->r[8]=R32(c->r[1]+0x00000264u); // 80177DBC
  c->f[2]=c->ps1[2]=S(c->f[2]); // 80177DC0
  c->r[0]=R32(c->r[1]+0x00000268u); // 80177DC4
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80177DC8
  c->f[0]=c->ps1[0]=S(c->f[0]); // 80177DCC
  {uint32_t ea=c->r[1]+0x00000248u; WF32(ea,c->f[2]);} // 80177DD0
  c->r[6]=c->r[1]+0x000000A4u; // 80177DD4
  c->r[7]=c->r[1]+0x00000098u; // 80177DD8
  {uint32_t ea=c->r[1]+0x0000024Cu; WF32(ea,c->f[1]);} // 80177DDC
  c->r[30]=R32(c->r[1]+0x00000248u); // 80177DE0
  {uint32_t ea=c->r[1]+0x00000250u; WF32(ea,c->f[0]);} // 80177DE4
  c->r[29]=R32(c->r[1]+0x0000024Cu); // 80177DE8
  c->r[28]=R32(c->r[1]+0x00000250u); // 80177DEC
  W32(c->r[1]+0x00000098u,c->r[30]); // 80177DF0
  W32(c->r[1]+0x0000009Cu,c->r[29]); // 80177DF4
  W32(c->r[1]+0x000000A0u,c->r[28]); // 80177DF8
  W32(c->r[1]+0x000000A4u,c->r[12]); // 80177DFC
  W32(c->r[1]+0x000000A8u,c->r[11]); // 80177E00
  W32(c->r[1]+0x000000ACu,c->r[10]); // 80177E04
  W32(c->r[1]+0x000000B0u,c->r[9]); // 80177E08
  W32(c->r[1]+0x000000B4u,c->r[8]); // 80177E0C
  W32(c->r[1]+0x000000B8u,c->r[0]); // 80177E10
  c->lr=0x80177E18u; f_8018DD04(c); // 80177E14
  goto L_80178270; // 80177E18
L_80177E1C:;
  c->r[3]=0u+0x80620000u; // 80177E1C
  c->r[4]=0u+0x00000019u; // 80177E20
  c->r[3]=c->r[3]+0x00007688u; // 80177E24
  c->r[3]=R32(c->r[3]+0x00000014u); // 80177E28
  c->lr=0x80177E30u; f_8003560C(c); // 80177E2C
  c->r[5]=0u+0x80550000u; // 80177E30
  c->r[4]=c->r[3]|c->r[3]; // 80177E34
  c->r[3]=c->r[5]+0xFFFFC848u; // 80177E38
  c->lr=0x80177E40u; f_8018D694(c); // 80177E3C
  goto L_80178270; // 80177E40
L_80177E44:;
  c->r[28]=0u+0x803A0000u; // 80177E44
  c->r[29]=0u+0x80550000u; // 80177E48
  c->r[28]=c->r[28]+0x000032C4u; // 80177E4C
  c->r[5]=0u+0x00000000u; // 80177E50
  c->r[3]=c->r[29]+0xFFFFC848u; // 80177E54
  c->r[6]=0u+0x00000000u; // 80177E58
  c->r[4]=c->r[28]+0x000001AAu; // 80177E5C
  c->lr=0x80177E64u; f_8018D3E4(c); // 80177E60
  c->r[4]=0u+0x80550000u; // 80177E64
  c->r[27]=c->r[3]|c->r[3]; // 80177E68
  c->r[3]=c->r[4]+0xFFFFCE54u; // 80177E6C
  c->r[4]=0u+0x00000021u; // 80177E70
  c->lr=0x80177E78u; f_8019C920(c); // 80177E74
  c->r[4]=0u+0x00000000u; // 80177E78
  c->lr=0x80177E80u; f_80039840(c); // 80177E7C
  c->r[4]=c->r[28]+0x000001A1u; // 80177E80
  c->r[5]=c->r[1]+0x000003F8u; // 80177E84
  c->r[6]=0u+0x00000001u; // 80177E88
  c->lr=0x80177E90u; f_80257018(c); // 80177E8C
  {uint32_t ea=c->r[2]+0xFFFFCBB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177E90
  c->r[3]=c->r[1]+0x000003F8u; // 80177E94
  {uint32_t ea=c->r[2]+0xFFFFCBD4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80177E98
  {uint32_t ea=c->r[2]+0xFFFFCBD8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80177E9C
  c->lr=0x80177EA4u; f_802571B8(c); // 80177EA0
  c->r[3]=c->r[1]+0x0000023Cu; // 80177EA4
  c->r[4]=c->r[1]+0x00000230u; // 80177EA8
  c->r[5]=c->r[1]+0x00000224u; // 80177EAC
  c->r[6]=c->r[1]+0x000003F8u; // 80177EB0
  c->r[7]=0u+0x00000000u; // 80177EB4
  c->lr=0x80177EBCu; f_8002BE64(c); // 80177EB8
  {uint32_t ea=c->r[1]+0x00000224u; c->f[2]=c->ps1[2]=RF32(ea);} // 80177EBC
  c->r[3]=c->r[29]+0xFFFFC848u; // 80177EC0
  {uint32_t ea=c->r[2]+0xFFFFCBE0u; c->f[3]=RF64(ea);} // 80177EC4
  c->r[4]=c->r[27]|c->r[27]; // 80177EC8
  {uint32_t ea=c->r[1]+0x00000228u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177ECC
  c->r[5]=c->r[1]+0x0000008Cu; // 80177ED0
  {uint32_t ea=c->r[1]+0x0000022Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80177ED4
  c->f[2]=c->f[2]*c->f[3]; // 80177ED8
  c->r[12]=R32(c->r[1]+0x00000230u); // 80177EDC
  c->r[6]=c->r[1]+0x00000080u; // 80177EE0
  c->f[1]=c->f[1]*c->f[3]; // 80177EE4
  c->r[11]=R32(c->r[1]+0x00000234u); // 80177EE8
  c->r[10]=R32(c->r[1]+0x00000238u); // 80177EEC
  c->f[0]=c->f[0]*c->f[3]; // 80177EF0
  c->r[9]=R32(c->r[1]+0x0000023Cu); // 80177EF4
  c->r[8]=R32(c->r[1]+0x00000240u); // 80177EF8
  c->f[2]=c->ps1[2]=S(c->f[2]); // 80177EFC
  c->r[0]=R32(c->r[1]+0x00000244u); // 80177F00
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80177F04
  c->f[0]=c->ps1[0]=S(c->f[0]); // 80177F08
  {uint32_t ea=c->r[1]+0x00000224u; WF32(ea,c->f[2]);} // 80177F0C
  c->r[7]=c->r[1]+0x00000074u; // 80177F10
  {uint32_t ea=c->r[1]+0x00000228u; WF32(ea,c->f[1]);} // 80177F14
  c->r[30]=R32(c->r[1]+0x00000224u); // 80177F18
  {uint32_t ea=c->r[1]+0x0000022Cu; WF32(ea,c->f[0]);} // 80177F1C
  c->r[29]=R32(c->r[1]+0x00000228u); // 80177F20
  c->r[28]=R32(c->r[1]+0x0000022Cu); // 80177F24
  W32(c->r[1]+0x00000074u,c->r[30]); // 80177F28
  W32(c->r[1]+0x00000078u,c->r[29]); // 80177F2C
  W32(c->r[1]+0x0000007Cu,c->r[28]); // 80177F30
  W32(c->r[1]+0x00000080u,c->r[12]); // 80177F34
  W32(c->r[1]+0x00000084u,c->r[11]); // 80177F38
  W32(c->r[1]+0x00000088u,c->r[10]); // 80177F3C
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 80177F40
  W32(c->r[1]+0x00000090u,c->r[8]); // 80177F44
  W32(c->r[1]+0x00000094u,c->r[0]); // 80177F48
  c->lr=0x80177F50u; f_8018DD04(c); // 80177F4C
  c->r[3]=0u+0x80620000u; // 80177F50
  c->r[5]=c->r[27]|c->r[27]; // 80177F54
  c->r[3]=c->r[3]+0x00007688u; // 80177F58
  c->r[4]=0u+0x00000018u; // 80177F5C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80177F60
  c->lr=0x80177F68u; f_80038998(c); // 80177F64
  goto L_80178270; // 80177F68
L_80177F6C:;
  c->r[3]=0u+0x80620000u; // 80177F6C
  c->r[4]=0u+0x00000018u; // 80177F70
  c->r[3]=c->r[3]+0x00007688u; // 80177F74
  c->r[3]=R32(c->r[3]+0x00000014u); // 80177F78
  c->lr=0x80177F80u; f_8003560C(c); // 80177F7C
  c->r[4]=0u+0x80550000u; // 80177F80
  c->r[27]=c->r[3]|c->r[3]; // 80177F84
  c->r[3]=c->r[4]+0xFFFFCE54u; // 80177F88
  c->r[4]=0u+0x00000021u; // 80177F8C
  c->lr=0x80177F94u; f_8019C920(c); // 80177F90
  c->r[4]=0u+0x00000000u; // 80177F94
  c->lr=0x80177F9Cu; f_80039840(c); // 80177F98
  c->r[4]=0u+0x803A0000u; // 80177F9C
  c->r[5]=c->r[1]+0x000003C8u; // 80177FA0
  c->r[4]=c->r[4]+0x000032C4u; // 80177FA4
  c->r[6]=0u+0x00000001u; // 80177FA8
  c->r[4]=c->r[4]+0x000001A1u; // 80177FAC
  c->lr=0x80177FB4u; f_80257018(c); // 80177FB0
  {uint32_t ea=c->r[2]+0xFFFFCBB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177FB4
  c->r[3]=c->r[1]+0x000003C8u; // 80177FB8
  {uint32_t ea=c->r[2]+0xFFFFCBD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80177FBC
  c->f[3]=c->f[1]; // 80177FC0
  c->lr=0x80177FC8u; f_802571B8(c); // 80177FC4
  c->r[3]=c->r[1]+0x00000218u; // 80177FC8
  c->r[4]=c->r[1]+0x0000020Cu; // 80177FCC
  c->r[5]=c->r[1]+0x00000200u; // 80177FD0
  c->r[6]=c->r[1]+0x000003C8u; // 80177FD4
  c->r[7]=0u+0x00000000u; // 80177FD8
  c->lr=0x80177FE0u; f_8002BE64(c); // 80177FDC
  {uint32_t ea=c->r[1]+0x00000200u; c->f[2]=c->ps1[2]=RF32(ea);} // 80177FE0
  c->r[3]=0u+0x80550000u; // 80177FE4
  {uint32_t ea=c->r[2]+0xFFFFCBC8u; c->f[3]=RF64(ea);} // 80177FE8
  c->r[4]=c->r[27]|c->r[27]; // 80177FEC
  {uint32_t ea=c->r[1]+0x00000204u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177FF0
  c->r[3]=c->r[3]+0xFFFFC848u; // 80177FF4
  {uint32_t ea=c->r[1]+0x00000208u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177FF8
  c->f[2]=c->f[2]*c->f[3]; // 80177FFC
  c->r[12]=R32(c->r[1]+0x0000020Cu); // 80178000
  c->r[5]=c->r[1]+0x00000068u; // 80178004
  c->f[1]=c->f[1]*c->f[3]; // 80178008
  c->r[11]=R32(c->r[1]+0x00000210u); // 8017800C
  c->r[10]=R32(c->r[1]+0x00000214u); // 80178010
  c->f[0]=c->f[0]*c->f[3]; // 80178014
  c->r[9]=R32(c->r[1]+0x00000218u); // 80178018
  c->r[8]=R32(c->r[1]+0x0000021Cu); // 8017801C
  c->f[2]=c->ps1[2]=S(c->f[2]); // 80178020
  c->r[0]=R32(c->r[1]+0x00000220u); // 80178024
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80178028
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8017802C
  {uint32_t ea=c->r[1]+0x00000200u; WF32(ea,c->f[2]);} // 80178030
  c->r[6]=c->r[1]+0x0000005Cu; // 80178034
  c->r[7]=c->r[1]+0x00000050u; // 80178038
  {uint32_t ea=c->r[1]+0x00000204u; WF32(ea,c->f[1]);} // 8017803C
  c->r[30]=R32(c->r[1]+0x00000200u); // 80178040
  {uint32_t ea=c->r[1]+0x00000208u; WF32(ea,c->f[0]);} // 80178044
  c->r[29]=R32(c->r[1]+0x00000204u); // 80178048
  c->r[28]=R32(c->r[1]+0x00000208u); // 8017804C
  W32(c->r[1]+0x00000050u,c->r[30]); // 80178050
  W32(c->r[1]+0x00000054u,c->r[29]); // 80178054
  W32(c->r[1]+0x00000058u,c->r[28]); // 80178058
  W32(c->r[1]+0x0000005Cu,c->r[12]); // 8017805C
  W32(c->r[1]+0x00000060u,c->r[11]); // 80178060
  W32(c->r[1]+0x00000064u,c->r[10]); // 80178064
  W32(c->r[1]+0x00000068u,c->r[9]); // 80178068
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 8017806C
  W32(c->r[1]+0x00000070u,c->r[0]); // 80178070
  c->lr=0x80178078u; f_8018DD04(c); // 80178074
  goto L_80178270; // 80178078
L_8017807C:;
  c->r[3]=0u+0x80620000u; // 8017807C
  c->r[4]=0u+0x00000018u; // 80178080
  c->r[3]=c->r[3]+0x00007688u; // 80178084
  c->r[3]=R32(c->r[3]+0x00000014u); // 80178088
  c->lr=0x80178090u; f_8003560C(c); // 8017808C
  c->r[5]=0u+0x80550000u; // 80178090
  c->r[4]=c->r[3]|c->r[3]; // 80178094
  c->r[3]=c->r[5]+0xFFFFC848u; // 80178098
  c->lr=0x801780A0u; f_8018D694(c); // 8017809C
  goto L_80178270; // 801780A0
L_801780A4:;
  c->r[29]=0u+0x803A0000u; // 801780A4
  c->r[28]=0u+0x80550000u; // 801780A8
  c->r[29]=c->r[29]+0x000032C4u; // 801780AC
  c->r[5]=0u+0x00000004u; // 801780B0
  c->r[3]=c->r[28]+0xFFFFC848u; // 801780B4
  c->r[6]=0u+0x00000000u; // 801780B8
  c->r[4]=c->r[29]+0x000001AEu; // 801780BC
  c->lr=0x801780C4u; f_8018D3E4(c); // 801780C0
  c->r[4]=0u+0x80550000u; // 801780C4
  c->r[27]=c->r[3]|c->r[3]; // 801780C8
  c->r[3]=c->r[4]+0xFFFFCE54u; // 801780CC
  c->r[4]=0u+0x0000001Fu; // 801780D0
  c->lr=0x801780D8u; f_8019C920(c); // 801780D4
  c->r[4]=0u+0x00000000u; // 801780D8
  c->lr=0x801780E0u; f_80039840(c); // 801780DC
  c->r[4]=c->r[29]+0x000001A1u; // 801780E0
  c->r[5]=c->r[1]+0x00000398u; // 801780E4
  c->r[6]=0u+0x00000001u; // 801780E8
  c->lr=0x801780F0u; f_80257018(c); // 801780EC
  c->r[3]=c->r[1]+0x000001F4u; // 801780F0
  c->r[4]=c->r[1]+0x000001E8u; // 801780F4
  c->r[5]=c->r[1]+0x000001DCu; // 801780F8
  c->r[6]=c->r[1]+0x00000398u; // 801780FC
  c->r[7]=0u+0x00000000u; // 80178100
  c->lr=0x80178108u; f_8002BE64(c); // 80178104
  c->r[31]=R32(c->r[1]+0x000001DCu); // 80178108
  c->r[4]=c->r[27]|c->r[27]; // 8017810C
  c->r[30]=R32(c->r[1]+0x000001E0u); // 80178110
  c->r[3]=c->r[28]+0xFFFFC848u; // 80178114
  c->r[29]=R32(c->r[1]+0x000001E4u); // 80178118
  c->r[5]=c->r[1]+0x00000044u; // 8017811C
  c->r[12]=R32(c->r[1]+0x000001E8u); // 80178120
  c->r[6]=c->r[1]+0x00000038u; // 80178124
  c->r[11]=R32(c->r[1]+0x000001ECu); // 80178128
  c->r[7]=c->r[1]+0x0000002Cu; // 8017812C
  c->r[10]=R32(c->r[1]+0x000001F0u); // 80178130
  c->r[9]=R32(c->r[1]+0x000001F4u); // 80178134
  c->r[8]=R32(c->r[1]+0x000001F8u); // 80178138
  c->r[0]=R32(c->r[1]+0x000001FCu); // 8017813C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80178140
  W32(c->r[1]+0x00000030u,c->r[30]); // 80178144
  W32(c->r[1]+0x00000034u,c->r[29]); // 80178148
  W32(c->r[1]+0x00000038u,c->r[12]); // 8017814C
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 80178150
  W32(c->r[1]+0x00000040u,c->r[10]); // 80178154
  W32(c->r[1]+0x00000044u,c->r[9]); // 80178158
  W32(c->r[1]+0x00000048u,c->r[8]); // 8017815C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80178160
  c->lr=0x80178168u; f_8018DD04(c); // 80178164
  c->r[3]=0u+0x80620000u; // 80178168
  c->r[5]=c->r[27]|c->r[27]; // 8017816C
  c->r[3]=c->r[3]+0x00007688u; // 80178170
  c->r[4]=0u+0x0000001Bu; // 80178174
  c->r[3]=R32(c->r[3]+0x00000014u); // 80178178
  c->lr=0x80178180u; f_80038998(c); // 8017817C
  goto L_80178270; // 80178180
L_80178184:;
  c->r[3]=0u+0x80620000u; // 80178184
  c->r[4]=0u+0x0000001Bu; // 80178188
  c->r[3]=c->r[3]+0x00007688u; // 8017818C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80178190
  c->lr=0x80178198u; f_8003560C(c); // 80178194
  c->r[4]=0u+0x80550000u; // 80178198
  c->r[27]=c->r[3]|c->r[3]; // 8017819C
  c->r[3]=c->r[4]+0xFFFFCE54u; // 801781A0
  c->r[4]=0u+0x0000001Fu; // 801781A4
  c->lr=0x801781ACu; f_8019C920(c); // 801781A8
  c->r[4]=0u+0x00000000u; // 801781AC
  c->lr=0x801781B4u; f_80039840(c); // 801781B0
  c->r[4]=0u+0x803A0000u; // 801781B4
  c->r[5]=c->r[1]+0x00000368u; // 801781B8
  c->r[4]=c->r[4]+0x000032C4u; // 801781BC
  c->r[6]=0u+0x00000001u; // 801781C0
  c->r[4]=c->r[4]+0x000001A1u; // 801781C4
  c->lr=0x801781CCu; f_80257018(c); // 801781C8
  c->r[3]=c->r[1]+0x000001D0u; // 801781CC
  c->r[4]=c->r[1]+0x000001C4u; // 801781D0
  c->r[5]=c->r[1]+0x000001B8u; // 801781D4
  c->r[6]=c->r[1]+0x00000368u; // 801781D8
  c->r[7]=0u+0x00000000u; // 801781DC
  c->lr=0x801781E4u; f_8002BE64(c); // 801781E0
  c->r[29]=R32(c->r[1]+0x000001B8u); // 801781E4
  c->r[3]=0u+0x80550000u; // 801781E8
  c->r[30]=R32(c->r[1]+0x000001BCu); // 801781EC
  c->r[4]=c->r[27]|c->r[27]; // 801781F0
  c->r[31]=R32(c->r[1]+0x000001C0u); // 801781F4
  c->r[3]=c->r[3]+0xFFFFC848u; // 801781F8
  c->r[12]=R32(c->r[1]+0x000001C4u); // 801781FC
  c->r[5]=c->r[1]+0x00000020u; // 80178200
  c->r[11]=R32(c->r[1]+0x000001C8u); // 80178204
  c->r[6]=c->r[1]+0x00000014u; // 80178208
  c->r[10]=R32(c->r[1]+0x000001CCu); // 8017820C
  c->r[7]=c->r[1]+0x00000008u; // 80178210
  c->r[9]=R32(c->r[1]+0x000001D0u); // 80178214
  c->r[8]=R32(c->r[1]+0x000001D4u); // 80178218
  c->r[0]=R32(c->r[1]+0x000001D8u); // 8017821C
  W32(c->r[1]+0x00000008u,c->r[29]); // 80178220
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 80178224
  W32(c->r[1]+0x00000010u,c->r[31]); // 80178228
  W32(c->r[1]+0x00000014u,c->r[12]); // 8017822C
  W32(c->r[1]+0x00000018u,c->r[11]); // 80178230
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 80178234
  W32(c->r[1]+0x00000020u,c->r[9]); // 80178238
  W32(c->r[1]+0x00000024u,c->r[8]); // 8017823C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80178240
  c->lr=0x80178248u; f_8018DD04(c); // 80178244
  goto L_80178270; // 80178248
L_8017824C:;
  c->r[3]=0u+0x80620000u; // 8017824C
  c->r[4]=0u+0x0000001Bu; // 80178250
  c->r[3]=c->r[3]+0x00007688u; // 80178254
  c->r[3]=R32(c->r[3]+0x00000014u); // 80178258
  c->lr=0x80178260u; f_8003560C(c); // 8017825C
  c->r[5]=0u+0x80550000u; // 80178260
  c->r[4]=c->r[3]|c->r[3]; // 80178264
  c->r[3]=c->r[5]+0xFFFFC848u; // 80178268
  c->lr=0x80178270u; f_8018D694(c); // 8017826C
L_80178270:;
  c->r[11]=c->r[1]+0x000005C0u; // 80178270
  c->r[3]=0u+0x00000001u; // 80178274
  c->lr=0x8017827Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80178278
  c->r[0]=R32(c->r[1]+0x000005C4u); // 8017827C
  c->lr=c->r[0]; // 80178280
  c->r[1]=c->r[1]+0x000005C0u; // 80178284
  return; // 80178288
}

// fn_8017828C
void f_8017828C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017828C
  c->r[0]=c->lr; // 80178290
  c->r[7]=0u+0x804C0000u; // 80178294
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178298
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8017829C
  c->r[7]=c->r[7]+0xFFFFC1B8u; // 801782A0
  c->r[4]=c->r[5]|c->r[5]; // 801782A4
  c->r[5]=c->r[6]|c->r[6]; // 801782A8
  c->r[12]=c->r[7]+c->r[0]; // 801782AC
  c->lr=0x801782B4u; f_802BA00C(c); // 801782B0
  c->r[0]=c->r[0]|0x00000000u; // 801782B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801782B8
  c->lr=c->r[0]; // 801782BC
  c->r[1]=c->r[1]+0x00000010u; // 801782C0
  return; // 801782C4
}

// fn_801782C8
void f_801782C8(Ctx* __restrict c) {
  return; // 801782C8
}

// fn_801782CC
void f_801782CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801782CC
  c->r[0]=c->lr; // 801782D0
  cmps(c,0,(int32_t)c->r[3],0); // 801782D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801782D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801782DC
  c->r[31]=c->r[4]|c->r[4]; // 801782E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801782E4
  c->r[30]=c->r[3]|c->r[3]; // 801782E8
  if (crb(c,2)) { goto L_80178308; } // 801782EC
  c->r[4]=0u+0x00000000u; // 801782F0
  c->lr=0x801782F8u; f_80103A70(c); // 801782F4
  cmps(c,0,(int32_t)c->r[31],0); // 801782F8
  if (!crb(c,1)) { goto L_80178308; } // 801782FC
  c->r[3]=c->r[30]|c->r[30]; // 80178300
  c->lr=0x80178308u; f_800C69B8(c); // 80178304
L_80178308:;
  c->r[3]=c->r[30]|c->r[30]; // 80178308
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017830C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80178310
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178314
  c->lr=c->r[0]; // 80178318
  c->r[1]=c->r[1]+0x00000010u; // 8017831C
  return; // 80178320
}

// fn_80178324
void f_80178324(Ctx* __restrict c) {
  c->r[3]=0u+0x804C0000u; // 80178324
  c->r[3]=c->r[3]+0xFFFFA110u; // 80178328
  return; // 8017832C
}

// fn_80178330
void f_80178330(Ctx* __restrict c) {
  c->r[3]=0u+0x804C0000u; // 80178330
  c->r[3]=c->r[3]+0xFFFFA8F0u; // 80178334
  return; // 80178338
}

// fn_8017833C
void f_8017833C(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF93E8u; // 8017833C
  return; // 80178340
}

// fn_80178344
void f_80178344(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF93E0u; // 80178344
  return; // 80178348
}

// fn_8017834C
void f_8017834C(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF93E4u; // 8017834C
  return; // 80178350
}

// fn_80178354
void f_80178354(Ctx* __restrict c) {
  c->r[3]=0u+0x804C0000u; // 80178354
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80178358
  c->r[3]=c->r[3]+0xFFFFC06Cu; // 8017835C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80178360
  return; // 80178364
}

// fn_80178368
void f_80178368(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80178368
  c->r[3]=c->r[13]+0xFFFF9418u; // 8017836C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80178370
  return; // 80178374
}

// fn_80178378
void f_80178378(Ctx* __restrict c) {
  c->r[3]=c->r[4]|c->r[4]; // 80178378
  return; // 8017837C
}

// fn_80178380
void f_80178380(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80178380
  return; // 80178384
}

// fn_80178388
void f_80178388(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80178388
  return; // 8017838C
}

// fn_80178390
void f_80178390(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80178390
  return; // 80178394
}

// fn_80178398
void f_80178398(Ctx* __restrict c) {
  return; // 80178398
}

// fn_8017839C
void f_8017839C(Ctx* __restrict c) {
  return; // 8017839C
}

// fn_801783A0
void f_801783A0(Ctx* __restrict c) {
  return; // 801783A0
}

// fn_801783A4
void f_801783A4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801783A4
  return; // 801783A8
}

// fn_801783AC
void f_801783AC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801783AC
  return; // 801783B0
}

// fn_801783B4
void f_801783B4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801783B4
  return; // 801783B8
}

// fn_801783BC
void f_801783BC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801783BC
  return; // 801783C0
}

// fn_801783C4
void f_801783C4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801783C4
  return; // 801783C8
}

// fn_801783CC
void f_801783CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801783CC
  c->r[0]=c->lr; // 801783D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801783D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801783D8
  c->r[31]=c->r[3]|c->r[3]; // 801783DC
  c->r[3]=c->r[3]+0x00000004u; // 801783E0
  c->lr=0x801783E8u; f_802B9FDC(c); // 801783E4
  cmps(c,0,(int32_t)c->r[3],0); // 801783E8
  if (crb(c,2)) { goto L_80178400; } // 801783EC
  c->r[3]=c->r[31]|c->r[31]; // 801783F0
  c->r[12]=c->r[31]+0x00000004u; // 801783F4
  c->lr=0x801783FCu; f_802BA00C(c); // 801783F8
  c->r[0]=c->r[0]|0x00000000u; // 801783FC
L_80178400:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178400
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178404
  c->lr=c->r[0]; // 80178408
  c->r[1]=c->r[1]+0x00000010u; // 8017840C
  return; // 80178410
}

// fn_80178414
void f_80178414(Ctx* __restrict c) {
  return; // 80178414
}

// fn_80178418
void f_80178418(Ctx* __restrict c) {
  c->r[3]=c->r[4]|c->r[4]; // 80178418
  return; // 8017841C
}

// fn_80178420
void f_80178420(Ctx* __restrict c) {
  return; // 80178420
}

// fn_80178424
void f_80178424(Ctx* __restrict c) {
  return; // 80178424
}

// fn_80178428
void f_80178428(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178428
  c->r[0]=c->lr; // 8017842C
  cmps(c,0,(int32_t)c->r[3],0); // 80178430
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178434
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178438
  c->r[31]=c->r[3]|c->r[3]; // 8017843C
  if (crb(c,2)) { goto L_80178450; } // 80178440
  cmps(c,0,(int32_t)c->r[4],0); // 80178444
  if (!crb(c,1)) { goto L_80178450; } // 80178448
  c->lr=0x80178450u; f_80178420(c); // 8017844C
L_80178450:;
  c->r[3]=c->r[31]|c->r[31]; // 80178450
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178454
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178458
  c->lr=c->r[0]; // 8017845C
  c->r[1]=c->r[1]+0x00000010u; // 80178460
  return; // 80178464
}

// fn_80178468
void f_80178468(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178468
  c->r[0]=c->lr; // 8017846C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178470
  c->lr=0x80178478u; f_8025E320(c); // 80178474
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)88); // 80178478
  c->r[3]=0u+0x80620000u; // 8017847C
  c->r[3]=c->r[3]+0x00007D28u; // 80178480
  c->r[3]=c->r[3]+c->r[0]; // 80178484
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178488
  c->r[3]=c->r[3]+0x000000ECu; // 8017848C
  c->lr=c->r[0]; // 80178490
  c->r[1]=c->r[1]+0x00000010u; // 80178494
  return; // 80178498
}

// fn_8017849C
void f_8017849C(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)88); // 8017849C
  c->r[3]=0u+0x80620000u; // 801784A0
  c->r[3]=c->r[3]+0x00007D28u; // 801784A4
  c->r[3]=c->r[3]+c->r[0]; // 801784A8
  c->r[3]=c->r[3]+0x000000ECu; // 801784AC
  return; // 801784B0
}

// fn_801784B4
void f_801784B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801784B4
  c->r[0]=c->lr; // 801784B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801784BC
  c->lr=0x801784C4u; f_8025E320(c); // 801784C0
  c->lr=0x801784C8u; f_801784F0(c); // 801784C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801784C8
  c->lr=c->r[0]; // 801784CC
  c->r[1]=c->r[1]+0x00000010u; // 801784D0
  return; // 801784D4
}

// fn_801784D8
void f_801784D8(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)88); // 801784D8
  c->r[4]=0u+0x80620000u; // 801784DC
  c->r[4]=c->r[4]+0x00007D28u; // 801784E0
  c->r[4]=c->r[4]+c->r[0]; // 801784E4
  c->r[4]=c->r[4]+0x000000ECu; // 801784E8
  f_80178508(c); return; // 801784EC
}

// fn_801784F0
void f_801784F0(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)88); // 801784F0
  c->r[4]=0u+0x80620000u; // 801784F4
  c->r[4]=c->r[4]+0x00007D28u; // 801784F8
  c->r[4]=c->r[4]+c->r[0]; // 801784FC
  c->r[4]=c->r[4]+0x000000ECu; // 80178500
  f_801785D8(c); return; // 80178504
}

// fn_80178508
void f_80178508(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178508
  c->r[0]=c->lr; // 8017850C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80178510
  c->r[11]=c->r[1]+0x00000030u; // 80178514
  c->lr=0x8017851Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80178518
  {uint32_t ea=c->r[4]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017851C
  c->r[27]=c->r[3]|c->r[3]; // 80178520
  {uint32_t ea=c->r[4]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178524
  c->r[28]=c->r[4]|c->r[4]; // 80178528
  {uint32_t ea=c->r[4]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017852C
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80178530
  c->lr=0x80178538u; f_80262F10(c); // 80178534
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178538
  c->r[3]=c->r[27]|c->r[27]; // 8017853C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178540
  {uint32_t ea=c->r[28]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80178544
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80178548
  {uint32_t ea=c->r[28]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 8017854C
  {uint32_t ea=c->r[28]+0x00000014u; c->f[6]=c->ps1[6]=RF32(ea);} // 80178550
  c->lr=0x80178558u; f_80263040(c); // 80178554
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178558
  c->lr=0x80178560u; f_802BA034(c); // 8017855C
  {uint32_t ea=c->r[28]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178560
  c->r[29]=c->r[3]|c->r[3]; // 80178564
  c->lr=0x8017856Cu; f_802BA034(c); // 80178568
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017856C
  c->r[30]=c->r[3]|c->r[3]; // 80178570
  c->lr=0x80178578u; f_802BA034(c); // 80178574
  {uint32_t ea=c->r[28]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178578
  c->r[31]=c->r[3]|c->r[3]; // 8017857C
  c->lr=0x80178584u; f_802BA034(c); // 80178580
  {uint32_t ea=c->r[28]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178584
  c->r[4]=c->r[31]|c->r[31]; // 80178588
  {uint32_t ea=c->r[28]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017858C
  c->r[5]=c->r[30]|c->r[30]; // 80178590
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80178594
  c->r[6]=c->r[29]|c->r[29]; // 80178598
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8017859C
  c->r[9]=c->r[27]|c->r[27]; // 801785A0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801785A4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801785A8
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 801785AC
  c->r[8]=R32(c->r[1]+0x00000014u); // 801785B0
  c->lr=0x801785B8u; f_802630E0(c); // 801785B4
  c->r[3]=c->r[27]|c->r[27]; // 801785B8
  c->lr=0x801785C0u; f_80263178(c); // 801785BC
  c->r[11]=c->r[1]+0x00000030u; // 801785C0
  c->lr=0x801785C8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801785C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801785C8
  c->lr=c->r[0]; // 801785CC
  c->r[1]=c->r[1]+0x00000030u; // 801785D0
  return; // 801785D4
}

// fn_801785D8
void f_801785D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801785D8
  c->r[0]=c->lr; // 801785DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801785E0
  c->r[11]=c->r[1]+0x00000030u; // 801785E4
  c->lr=0x801785ECu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801785E8
  {uint32_t ea=c->r[4]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 801785EC
  c->r[27]=c->r[3]|c->r[3]; // 801785F0
  {uint32_t ea=c->r[4]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 801785F4
  c->r[28]=c->r[4]|c->r[4]; // 801785F8
  {uint32_t ea=c->r[4]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 801785FC
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80178600
  {uint32_t ea=c->r[4]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 80178604
  {uint32_t ea=c->r[4]+0x00000054u; c->f[6]=c->ps1[6]=RF32(ea);} // 80178608
  c->lr=0x80178610u; f_80262FA0(c); // 8017860C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178610
  c->r[3]=c->r[27]|c->r[27]; // 80178614
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178618
  {uint32_t ea=c->r[28]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017861C
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80178620
  {uint32_t ea=c->r[28]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 80178624
  {uint32_t ea=c->r[28]+0x00000014u; c->f[6]=c->ps1[6]=RF32(ea);} // 80178628
  c->lr=0x80178630u; f_80263040(c); // 8017862C
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178630
  c->lr=0x80178638u; f_802BA034(c); // 80178634
  {uint32_t ea=c->r[28]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178638
  c->r[29]=c->r[3]|c->r[3]; // 8017863C
  c->lr=0x80178644u; f_802BA034(c); // 80178640
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80178644
  c->r[30]=c->r[3]|c->r[3]; // 80178648
  c->lr=0x80178650u; f_802BA034(c); // 8017864C
  {uint32_t ea=c->r[28]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178650
  c->r[31]=c->r[3]|c->r[3]; // 80178654
  c->lr=0x8017865Cu; f_802BA034(c); // 80178658
  {uint32_t ea=c->r[28]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017865C
  c->r[4]=c->r[31]|c->r[31]; // 80178660
  {uint32_t ea=c->r[28]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80178664
  c->r[5]=c->r[30]|c->r[30]; // 80178668
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8017866C
  c->r[6]=c->r[29]|c->r[29]; // 80178670
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80178674
  c->r[9]=c->r[27]|c->r[27]; // 80178678
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 8017867C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 80178680
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 80178684
  c->r[8]=R32(c->r[1]+0x00000014u); // 80178688
  c->lr=0x80178690u; f_802630E0(c); // 8017868C
  c->r[3]=c->r[27]|c->r[27]; // 80178690
  c->lr=0x80178698u; f_80263178(c); // 80178694
  c->r[11]=c->r[1]+0x00000030u; // 80178698
  c->lr=0x801786A0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017869C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801786A0
  c->lr=c->r[0]; // 801786A4
  c->r[1]=c->r[1]+0x00000030u; // 801786A8
  return; // 801786AC
}

// fn_801786B0
void f_801786B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801786B0
  c->r[0]=c->lr; // 801786B4
  {uint32_t ea=c->r[2]+0xFFFFCBE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801786B8
  c->r[3]=0u+0x00000000u; // 801786BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801786C0
  c->f[3]=c->f[1]; // 801786C4
  {uint32_t ea=c->r[2]+0xFFFFCBECu; c->f[2]=c->ps1[2]=RF32(ea);} // 801786C8
  c->f[5]=c->f[1]; // 801786CC
  {uint32_t ea=c->r[2]+0xFFFFCBF0u; c->f[4]=c->ps1[4]=RF32(ea);} // 801786D0
  {uint32_t ea=c->r[2]+0xFFFFCBF4u; c->f[6]=c->ps1[6]=RF32(ea);} // 801786D4
  c->lr=0x801786DCu; f_80262FA0(c); // 801786D8
  c->r[3]=0u+0x00000000u; // 801786DC
  c->lr=0x801786E4u; f_80263178(c); // 801786E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801786E4
  c->lr=c->r[0]; // 801786E8
  c->r[1]=c->r[1]+0x00000010u; // 801786EC
  return; // 801786F0
}

// fn_801786F4
void f_801786F4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFAB28u); // 801786F4
  c->r[0]=c->r[3]+0x00000001u; // 801786F8
  W32(c->r[13]+0xFFFFAB28u,c->r[0]); // 801786FC
  f_80279388(c); return; // 80178700
}

// fn_80178704
void f_80178704(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178704
  c->r[0]=c->lr; // 80178708
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017870C
  c->lr=0x80178714u; f_8024E0CC(c); // 80178710
  c->lr=0x80178718u; f_802793AC(c); // 80178714
  c->r[3]=R32(c->r[13]+0xFFFFAB28u); // 80178718
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8017871C
  W32(c->r[13]+0xFFFFAB28u,c->r[0]); // 80178720
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178724
  c->lr=c->r[0]; // 80178728
  c->r[1]=c->r[1]+0x00000010u; // 8017872C
  return; // 80178730
}

// fn_80178734
void f_80178734(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178734
  c->r[0]=c->lr; // 80178738
  {uint32_t ea=c->r[2]+0xFFFFCBF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017873C
  cmps(c,0,(int32_t)c->r[3],0); // 80178740
  {uint32_t ea=c->r[2]+0xFFFFCBFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80178744
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178748
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8017874C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80178750
  if (!crb(c,2)) { goto L_801787C8; } // 80178754
  c->r[3]=0u+0x0000000Eu; // 80178758
  c->r[4]=0u+0x00000000u; // 8017875C
  c->lr=0x80178764u; f_8027D32C(c); // 80178760
  c->r[3]=0u+0x00000001u; // 80178764
  c->r[4]=0u+0x00000200u; // 80178768
  c->lr=0x80178770u; f_8027D32C(c); // 8017876C
  c->r[3]=0u+0x00000015u; // 80178770
  c->r[4]=0u+0x00000002u; // 80178774
  c->lr=0x8017877Cu; f_8027D32C(c); // 80178778
  c->r[4]=0u+0x81000000u; // 8017877C
  c->r[3]=0u+0x0000000Fu; // 80178780
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80178784
  c->lr=0x8017878Cu; f_8027D32C(c); // 80178788
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8017878C
  c->r[3]=0u+0x00000010u; // 80178790
  c->lr=0x80178798u; f_8027D32C(c); // 80178794
  c->r[4]=R32(c->r[1]+0x00000008u); // 80178798
  c->r[3]=0u+0x00000011u; // 8017879C
  c->lr=0x801787A4u; f_8027D32C(c); // 801787A0
  c->r[3]=0u+0x0000005Fu; // 801787A4
  c->r[4]=0u+0x00000004u; // 801787A8
  c->lr=0x801787B0u; f_8027D32C(c); // 801787AC
  c->r[3]=0u+0x0000006Cu; // 801787B0
  c->r[4]=0u+0x00000001u; // 801787B4
  c->lr=0x801787BCu; f_8027D32C(c); // 801787B8
  c->r[3]=0u+0x0000006Du; // 801787BC
  c->r[4]=0u+0x00000001u; // 801787C0
  c->lr=0x801787C8u; f_8027D32C(c); // 801787C4
L_801787C8:;
  c->r[3]=0u+0x00000000u; // 801787C8
  c->r[4]=0u+0x00000004u; // 801787CC
  c->r[5]=0u+0x00000005u; // 801787D0
  c->lr=0x801787D8u; f_801787FC(c); // 801787D4
  c->r[3]=0u+0x00000001u; // 801787D8
  c->lr=0x801787E0u; f_8017887C(c); // 801787DC
  c->r[3]=0u+0x00000060u; // 801787E0
  c->r[4]=0u+0x00000000u; // 801787E4
  c->lr=0x801787ECu; f_8027D32C(c); // 801787E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801787EC
  c->lr=c->r[0]; // 801787F0
  c->r[1]=c->r[1]+0x00000010u; // 801787F4
  return; // 801787F8
}

// fn_801787FC
void f_801787FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801787FC
  c->r[0]=c->lr; // 80178800
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178804
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178808
  c->r[31]=c->r[3]|c->r[3]; // 8017880C
  c->r[3]=c->r[4]|c->r[4]; // 80178810
  c->r[4]=c->r[5]|c->r[5]; // 80178814
  c->lr=0x8017881Cu; f_80178850(c); // 80178818
  c->r[3]=c->r[31]|c->r[31]; // 8017881C
  c->lr=0x80178824u; f_80178838(c); // 80178820
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178824
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178828
  c->lr=c->r[0]; // 8017882C
  c->r[1]=c->r[1]+0x00000010u; // 80178830
  return; // 80178834
}

// fn_80178838
void f_80178838(Ctx* __restrict c) {
  c->r[4]=0u+0x804C0000u; // 80178838
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017883C
  c->r[4]=c->r[4]+0xFFFFC2D0u; // 80178840
  c->r[3]=0u+0x0000000Du; // 80178844
  c->r[4]=R32(c->r[4]+c->r[0]); // 80178848
  f_8027D32C(c); return; // 8017884C
}

// fn_80178850
void f_80178850(Ctx* __restrict c) {
  c->r[6]=0u+0x804C0000u; // 80178850
  c->r[5]=0u+0x804C0000u; // 80178854
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80178858
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017885C
  c->r[5]=c->r[5]+0xFFFFC308u; // 80178860
  c->r[6]=c->r[6]+0xFFFFC2E0u; // 80178864
  c->r[4]=R32(c->r[6]+c->r[3]); // 80178868
  c->r[3]=0u+0x0000005Eu; // 8017886C
  c->r[0]=R32(c->r[5]+c->r[0]); // 80178870
  c->r[4]=c->r[4]|c->r[0]; // 80178874
  f_8027D32C(c); return; // 80178878
}

// fn_8017887C
void f_8017887C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017887C
  c->r[4]=c->r[13]+0xFFFF9430u; // 80178880
  c->r[4]=R32(c->r[4]+c->r[0]); // 80178884
  c->r[3]=0u+0x00000063u; // 80178888
  f_8027D32C(c); return; // 8017888C
}

// fn_80178890
void f_80178890(Ctx* __restrict c) {
  c->r[4]=0u+0x804C0000u; // 80178890
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80178894
  c->r[4]=c->r[4]+0xFFFFC330u; // 80178898
  c->r[3]=0u+0x00000064u; // 8017889C
  c->r[4]=R32(c->r[4]+c->r[0]); // 801788A0
  f_8027D32C(c); return; // 801788A4
}

// fn_801788A8
void f_801788A8(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0x0003FFFCu; // 801788A8
  c->r[4]=R32(c->r[3]+c->r[0]); // 801788AC
  c->r[3]=0u+0x00000004u; // 801788B0
  f_8027D32C(c); return; // 801788B4
}

// fn_801788B8
void f_801788B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801788B8
  c->r[0]=c->lr; // 801788BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801788C0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801788C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801788C8
  c->r[31]=rotl(c->r[3],16)&0x0000FFFFu; // 801788CC
  if (crb(c,2)) { goto L_801788DC; } // 801788D0
  c->r[3]=c->r[0]|c->r[0]; // 801788D4
  c->lr=0x801788DCu; f_802801D4(c); // 801788D8
L_801788DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801788DC
  if (crb(c,2)) { goto L_801788EC; } // 801788E0
  c->r[3]=c->r[31]|c->r[31]; // 801788E4
  c->lr=0x801788ECu; f_80280E60(c); // 801788E8
L_801788EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801788EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801788F0
  c->lr=c->r[0]; // 801788F4
  c->r[1]=c->r[1]+0x00000010u; // 801788F8
  return; // 801788FC
}

// fn_80178900
void f_80178900(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178900
  c->r[0]=c->lr; // 80178904
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178908
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017890C
  c->r[31]=c->r[4]|c->r[4]; // 80178910
  c->r[4]=c->r[3]|c->r[3]; // 80178914
  c->r[3]=0u+0x00000004u; // 80178918
  c->lr=0x80178920u; f_8027D32C(c); // 8017891C
  c->r[3]=c->r[31]|c->r[31]; // 80178920
  c->lr=0x80178928u; f_8027CF50(c); // 80178924
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178928
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017892C
  c->lr=c->r[0]; // 80178930
  c->r[1]=c->r[1]+0x00000010u; // 80178934
  return; // 80178938
}

// fn_8017893C
void f_8017893C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017893C
  c->r[0]=c->lr; // 80178940
  c->r[3]=0u+0x00000000u; // 80178944
  W32(c->r[1]+0x00000034u,c->r[0]); // 80178948
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8017894C
  c->r[31]=0u+0x00000000u; // 80178950
  c->r[6]=R8(c->r[2]+0xFFFFCC00u); // 80178954
  c->r[5]=R8(c->r[2]+0xFFFFCC01u); // 80178958
  c->r[4]=R8(c->r[2]+0xFFFFCC02u); // 8017895C
  c->r[0]=R8(c->r[2]+0xFFFFCC03u); // 80178960
  W8(c->r[1]+0x00000018u,c->r[6]); // 80178964
  W8(c->r[1]+0x00000019u,c->r[5]); // 80178968
  W8(c->r[1]+0x0000001Au,c->r[4]); // 8017896C
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 80178970
  c->lr=0x80178978u; f_802B67D8(c); // 80178974
  c->r[3]=0u+0x00000000u; // 80178978
  c->r[4]=0u+0x00000000u; // 8017897C
  c->r[5]=0u+0x00000000u; // 80178980
  c->r[6]=0u+0x00000001u; // 80178984
  c->r[7]=0u+0x00000000u; // 80178988
  c->r[8]=0u+0x00000000u; // 8017898C
  c->r[9]=0u+0x00000002u; // 80178990
  c->lr=0x80178998u; f_802B67FC(c); // 80178994
  c->r[3]=0u+0x00000002u; // 80178998
  c->r[4]=0u+0x00000000u; // 8017899C
  c->r[5]=0u+0x00000000u; // 801789A0
  c->r[6]=0u+0x00000001u; // 801789A4
  c->r[7]=0u+0x00000000u; // 801789A8
  c->r[8]=0u+0x00000000u; // 801789AC
  c->r[9]=0u+0x00000002u; // 801789B0
  c->lr=0x801789B8u; f_802B67FC(c); // 801789B4
  W32(c->r[1]+0x00000014u,c->r[31]); // 801789B8
  c->r[4]=c->r[1]+0x00000014u; // 801789BC
  c->r[3]=0u+0x00000004u; // 801789C0
  c->lr=0x801789C8u; f_802B6628(c); // 801789C4
  c->r[0]=R32(c->r[1]+0x00000018u); // 801789C8
  c->r[4]=c->r[1]+0x00000010u; // 801789CC
  c->r[3]=0u+0x00000004u; // 801789D0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801789D4
  c->lr=0x801789DCu; f_802B6700(c); // 801789D8
  c->r[3]=0u+0x00000001u; // 801789DC
  c->r[4]=0u+0x00000000u; // 801789E0
  c->r[5]=0u+0x00000000u; // 801789E4
  c->r[6]=0u+0x00000001u; // 801789E8
  c->r[7]=0u+0x00000000u; // 801789EC
  c->r[8]=0u+0x00000000u; // 801789F0
  c->r[9]=0u+0x00000002u; // 801789F4
  c->lr=0x801789FCu; f_802B67FC(c); // 801789F8
  c->r[3]=0u+0x00000003u; // 801789FC
  c->r[4]=0u+0x00000000u; // 80178A00
  c->r[5]=0u+0x00000000u; // 80178A04
  c->r[6]=0u+0x00000001u; // 80178A08
  c->r[7]=0u+0x00000000u; // 80178A0C
  c->r[8]=0u+0x00000000u; // 80178A10
  c->r[9]=0u+0x00000002u; // 80178A14
  c->lr=0x80178A1Cu; f_802B67FC(c); // 80178A18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178A1C
  c->r[4]=c->r[1]+0x0000000Cu; // 80178A20
  c->r[3]=0u+0x00000005u; // 80178A24
  c->lr=0x80178A2Cu; f_802B6628(c); // 80178A28
  c->r[0]=R32(c->r[1]+0x00000018u); // 80178A2C
  c->r[4]=c->r[1]+0x00000008u; // 80178A30
  c->r[3]=0u+0x00000005u; // 80178A34
  W32(c->r[1]+0x00000008u,c->r[0]); // 80178A38
  c->lr=0x80178A40u; f_802B6700(c); // 80178A3C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80178A40
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80178A44
  c->lr=c->r[0]; // 80178A48
  c->r[1]=c->r[1]+0x00000030u; // 80178A4C
  return; // 80178A50
}

// fn_80178A54
void f_80178A54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178A54
  c->r[0]=c->lr; // 80178A58
  c->r[4]=0u+0x804C0000u; // 80178A5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178A60
  c->r[4]=c->r[4]+0xFFFFC340u; // 80178A64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178A68
  W32(c->r[1]+0x00000008u,c->r[30]); // 80178A6C
  c->r[30]=c->r[3]|c->r[3]; // 80178A70
  W32(c->r[3]+0x000000B0u,c->r[4]); // 80178A74
  c->r[3]=c->r[3]+0x0000000Cu; // 80178A78
  c->lr=0x80178A80u; f_80178BD8(c); // 80178A7C
  c->r[3]=c->r[30]+0x00000010u; // 80178A80
  c->lr=0x80178A88u; f_80178BD8(c); // 80178A84
  c->r[3]=c->r[30]+0x00000014u; // 80178A88
  c->lr=0x80178A90u; f_80178BD8(c); // 80178A8C
  c->r[3]=c->r[30]+0x00000018u; // 80178A90
  c->lr=0x80178A98u; f_80178BD8(c); // 80178A94
  {uint32_t ea=c->r[2]+0xFFFFCC08u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178A98
  c->r[31]=0u+0x00000000u; // 80178A9C
  {uint32_t ea=c->r[2]+0xFFFFCC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80178AA0
  c->r[3]=0u+0x805F0000u; // 80178AA4
  W8(c->r[30]+0x00000028u,c->r[31]); // 80178AA8
  c->r[3]=c->r[3]+0x00007AD8u; // 80178AAC
  W8(c->r[30]+0x00000029u,c->r[31]); // 80178AB0
  W8(c->r[30]+0x0000002Au,c->r[31]); // 80178AB4
  W8(c->r[30]+0x0000002Bu,c->r[31]); // 80178AB8
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[1]);} // 80178ABC
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 80178AC0
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 80178AC4
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 80178AC8
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 80178ACC
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 80178AD0
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 80178AD4
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 80178AD8
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 80178ADC
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 80178AE0
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 80178AE4
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[1]);} // 80178AE8
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 80178AEC
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 80178AF0
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[1]);} // 80178AF4
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[1]);} // 80178AF8
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 80178AFC
  W8(c->r[30]+0x0000006Du,c->r[31]); // 80178B00
  W8(c->r[30]+0x0000006Eu,c->r[31]); // 80178B04
  c->lr=0x80178B0Cu; f_80178BC4(c); // 80178B08
  W32(c->r[30]+0x00000008u,c->r[3]); // 80178B0C
  c->r[5]=0u+0x803C0000u; // 80178B10
  c->r[3]=c->r[30]|c->r[30]; // 80178B14
  {uint32_t ea=c->r[5]+0x00002940u; c->r[4]=R32(ea); c->r[5]=ea;} // 80178B18
  c->r[0]=R32(c->r[5]+0x00000004u); // 80178B1C
  W32(c->r[30]+0x0000001Cu,c->r[4]); // 80178B20
  W32(c->r[30]+0x00000020u,c->r[0]); // 80178B24
  c->r[0]=R32(c->r[5]+0x00000008u); // 80178B28
  W32(c->r[30]+0x00000024u,c->r[0]); // 80178B2C
  W32(c->r[30]+0x00000074u,c->r[31]); // 80178B30
  W32(c->r[30]+0x00000078u,c->r[31]); // 80178B34
  W32(c->r[30]+0x0000007Cu,c->r[31]); // 80178B38
  W32(c->r[30]+0x00000080u,c->r[31]); // 80178B3C
  W32(c->r[30]+0x00000084u,c->r[31]); // 80178B40
  W32(c->r[30]+0x00000088u,c->r[31]); // 80178B44
  W32(c->r[30]+0x0000008Cu,c->r[31]); // 80178B48
  W32(c->r[30]+0x00000090u,c->r[31]); // 80178B4C
  W32(c->r[30]+0x00000094u,c->r[31]); // 80178B50
  W32(c->r[30]+0x00000098u,c->r[31]); // 80178B54
  W32(c->r[30]+0x0000009Cu,c->r[31]); // 80178B58
  W32(c->r[30]+0x000000A0u,c->r[31]); // 80178B5C
  W32(c->r[30]+0x000000A4u,c->r[31]); // 80178B60
  W32(c->r[30]+0x000000A8u,c->r[31]); // 80178B64
  W32(c->r[30]+0x000000ACu,c->r[31]); // 80178B68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178B6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80178B70
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178B74
  c->lr=c->r[0]; // 80178B78
  c->r[1]=c->r[1]+0x00000010u; // 80178B7C
  return; // 80178B80
}

// dtor_80178B84
void f_80178B84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178B84
  c->r[0]=c->lr; // 80178B88
  cmps(c,0,(int32_t)c->r[3],0); // 80178B8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178B90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178B94
  c->r[31]=c->r[3]|c->r[3]; // 80178B98
  if (crb(c,2)) { goto L_80178BAC; } // 80178B9C
  cmps(c,0,(int32_t)c->r[4],0); // 80178BA0
  if (!crb(c,1)) { goto L_80178BAC; } // 80178BA4
  c->lr=0x80178BACu; f_800C69B8(c); // 80178BA8
L_80178BAC:;
  c->r[3]=c->r[31]|c->r[31]; // 80178BAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178BB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178BB4
  c->lr=c->r[0]; // 80178BB8
  c->r[1]=c->r[1]+0x00000010u; // 80178BBC
  return; // 80178BC0
}

// fn_80178BC4
void f_80178BC4(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00030000u; // 80178BC4
  c->r[3]=R32(c->r[4]+0xFFFFA608u); // 80178BC8
  c->r[3]=c->r[3]+0x00000002u; // 80178BCC
  W32(c->r[4]+0xFFFFA608u,c->r[3]); // 80178BD0
  return; // 80178BD4
}

// fn_80178BD8
void f_80178BD8(Ctx* __restrict c) {
  return; // 80178BD8
}

// dtor_80178BDC
void f_80178BDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178BDC
  c->r[0]=c->lr; // 80178BE0
  cmps(c,0,(int32_t)c->r[3],0); // 80178BE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178BE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178BEC
  c->r[31]=c->r[4]|c->r[4]; // 80178BF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80178BF4
  c->r[30]=c->r[3]|c->r[3]; // 80178BF8
  if (crb(c,2)) { goto L_80178C48; } // 80178BFC
  c->r[0]=0u+0x00000000u; // 80178C00
  c->r[4]=0u+0xFFFFFFFFu; // 80178C04
  W32(c->r[3]+0x00000008u,c->r[0]); // 80178C08
  c->r[3]=c->r[3]+0x00000018u; // 80178C0C
  c->lr=0x80178C14u; f_80178B84(c); // 80178C10
  c->r[3]=c->r[30]+0x00000014u; // 80178C14
  c->r[4]=0u+0xFFFFFFFFu; // 80178C18
  c->lr=0x80178C20u; f_80178B84(c); // 80178C1C
  c->r[3]=c->r[30]+0x00000010u; // 80178C20
  c->r[4]=0u+0xFFFFFFFFu; // 80178C24
  c->lr=0x80178C2Cu; f_80178B84(c); // 80178C28
  c->r[3]=c->r[30]+0x0000000Cu; // 80178C2C
  c->r[4]=0u+0xFFFFFFFFu; // 80178C30
  c->lr=0x80178C38u; f_80178B84(c); // 80178C34
  cmps(c,0,(int32_t)c->r[31],0); // 80178C38
  if (!crb(c,1)) { goto L_80178C48; } // 80178C3C
  c->r[3]=c->r[30]|c->r[30]; // 80178C40
  c->lr=0x80178C48u; f_80178C64(c); // 80178C44
L_80178C48:;
  c->r[3]=c->r[30]|c->r[30]; // 80178C48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178C4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80178C50
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178C54
  c->lr=c->r[0]; // 80178C58
  c->r[1]=c->r[1]+0x00000010u; // 80178C5C
  return; // 80178C60
}

// fn_80178C64
void f_80178C64(Ctx* __restrict c) {
  return; // 80178C64
}

// fn_80178C68
void f_80178C68(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 80178C68
  return; // 80178C6C
}

// fn_80178C70
void f_80178C70(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 80178C70
  return; // 80178C74
}

// fn_80178C78
void f_80178C78(Ctx* __restrict c) {
  W32(c->r[3]+0x00000000u,c->r[4]); // 80178C78
  return; // 80178C7C
}

// fn_80178C80
void f_80178C80(Ctx* __restrict c) {
  W32(c->r[3]+0x00000004u,c->r[4]); // 80178C80
  return; // 80178C84
}

// fn_80178C88
void f_80178C88(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x000000B0u); // 80178C88
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80178C8C
  c->ctr=c->r[12]; // 80178C90
  if (true) { dispatch(c,c->ctr); return; } // 80178C94
}

// fn_80178C98
void f_80178C98(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x000000B0u); // 80178C98
  c->r[12]=R32(c->r[12]+0x00000020u); // 80178C9C
  c->ctr=c->r[12]; // 80178CA0
  if (true) { dispatch(c,c->ctr); return; } // 80178CA4
}

// fn_80178CA8
void f_80178CA8(Ctx* __restrict c) {
  return; // 80178CA8
}

// fn_80178CAC
void f_80178CAC(Ctx* __restrict c) {
  return; // 80178CAC
}

// fn_80178CB0
void f_80178CB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178CB0
  c->r[0]=c->lr; // 80178CB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178CB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178CBC
  c->r[31]=c->r[3]|c->r[3]; // 80178CC0
  c->r[3]=c->r[3]+0x0000001Cu; // 80178CC4
  c->lr=0x80178CCCu; f_802B9FDC(c); // 80178CC8
  cmps(c,0,(int32_t)c->r[3],0); // 80178CCC
  if (crb(c,2)) { goto L_80178CE4; } // 80178CD0
  c->r[3]=c->r[31]|c->r[31]; // 80178CD4
  c->r[12]=c->r[31]+0x0000001Cu; // 80178CD8
  c->lr=0x80178CE0u; f_802BA00C(c); // 80178CDC
  c->r[0]=c->r[0]|0x00000000u; // 80178CE0
L_80178CE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178CE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178CE8
  c->lr=c->r[0]; // 80178CEC
  c->r[1]=c->r[1]+0x00000010u; // 80178CF0
  return; // 80178CF4
}

// fn_80178CF8
void f_80178CF8(Ctx* __restrict c) {
  return; // 80178CF8
}

// fn_80178CFC
void f_80178CFC(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 80178CFC
  if (crb(c,2)) return; // 80178D00
  c->r[12]=R32(c->r[3]+0x000000B0u); // 80178D04
  c->r[4]=0u+0x00000001u; // 80178D08
  c->r[12]=R32(c->r[12]+0x00000008u); // 80178D0C
  c->ctr=c->r[12]; // 80178D10
  if (true) { dispatch(c,c->ctr); return; } // 80178D14
  return; // 80178D18
}

// fn_80178D1C
void f_80178D1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178D1C
  c->r[0]=c->lr; // 80178D20
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178D24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178D28
  c->r[31]=c->r[3]|c->r[3]; // 80178D2C
  c->r[3]=c->r[13]+0xFFFFAB58u; // 80178D30
  c->lr=0x80178D38u; f_80035554(c); // 80178D34
  {uint32_t ea=c->r[31]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178D38
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80178D3C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80178D40
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 80178D44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178D48
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178D4C
  c->lr=c->r[0]; // 80178D50
  c->r[1]=c->r[1]+0x00000010u; // 80178D54
  return; // 80178D58
}

// fn_80178D5C
void f_80178D5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178D5C
  c->r[0]=c->lr; // 80178D60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178D64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178D68
  c->r[31]=c->r[3]|c->r[3]; // 80178D6C
  c->r[3]=c->r[13]+0xFFFFAB58u; // 80178D70
  c->lr=0x80178D78u; f_80035554(c); // 80178D74
  {uint32_t ea=c->r[31]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178D78
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178D7C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80178D80
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 80178D84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178D88
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178D8C
  c->lr=c->r[0]; // 80178D90
  c->r[1]=c->r[1]+0x00000010u; // 80178D94
  return; // 80178D98
}

// fn_80178D9C
void f_80178D9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178D9C
  c->r[0]=c->lr; // 80178DA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178DA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178DA8
  c->r[31]=c->r[3]|c->r[3]; // 80178DAC
  c->r[3]=c->r[13]+0xFFFFAB58u; // 80178DB0
  c->lr=0x80178DB8u; f_80035554(c); // 80178DB4
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80178DB8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178DBC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80178DC0
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 80178DC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178DC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178DCC
  c->lr=c->r[0]; // 80178DD0
  c->r[1]=c->r[1]+0x00000010u; // 80178DD4
  return; // 80178DD8
}

// fn_80178DDC
void f_80178DDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178DDC
  c->r[0]=c->lr; // 80178DE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178DE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178DE8
  c->r[31]=c->r[3]|c->r[3]; // 80178DEC
  c->lr=0x80178DF4u; f_80178D1C(c); // 80178DF0
  c->r[3]=c->r[31]|c->r[31]; // 80178DF4
  c->lr=0x80178DFCu; f_80178D5C(c); // 80178DF8
  c->r[3]=c->r[31]|c->r[31]; // 80178DFC
  c->lr=0x80178E04u; f_80178D9C(c); // 80178E00
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178E04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178E08
  c->lr=c->r[0]; // 80178E0C
  c->r[1]=c->r[1]+0x00000010u; // 80178E10
  return; // 80178E14
}

// fn_80178E18
void f_80178E18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178E18
  c->r[0]=c->lr; // 80178E1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80178E20
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80178E24
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80178E28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178E2C
  c->r[31]=c->r[3]|c->r[3]; // 80178E30
  c->r[3]=c->r[13]+0xFFFFAB58u; // 80178E34
  c->lr=0x80178E3Cu; f_80035554(c); // 80178E38
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178E3C
  c->r[3]=c->r[13]+0xFFFFAB58u; // 80178E40
  {uint32_t ea=c->r[2]+0xFFFFCC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178E44
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80178E48
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178E4C
  c->f[31]=c->ps1[31]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80178E50
  c->lr=0x80178E58u; f_80035554(c); // 80178E54
  {uint32_t ea=c->r[31]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178E58
  c->r[3]=c->r[13]+0xFFFFAB58u; // 80178E5C
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178E60
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80178E64
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 80178E68
  c->lr=0x80178E70u; f_80035554(c); // 80178E6C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80178E70
  c->f[0]=c->ps1[0]=S(std::fma(c->f[31],c->f[1],c->f[0])); // 80178E74
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 80178E78
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80178E7C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80178E80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178E84
  c->r[0]=R32(c->r[1]+0x00000024u); // 80178E88
  c->lr=c->r[0]; // 80178E8C
  c->r[1]=c->r[1]+0x00000020u; // 80178E90
  return; // 80178E94
}

// fn_80178E98
void f_80178E98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178E98
  c->r[0]=c->lr; // 80178E9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80178EA0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80178EA4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80178EA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178EAC
  c->r[31]=c->r[3]|c->r[3]; // 80178EB0
  c->r[3]=c->r[13]+0xFFFFAB58u; // 80178EB4
  c->lr=0x80178EBCu; f_80035554(c); // 80178EB8
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178EBC
  c->r[3]=c->r[13]+0xFFFFAB58u; // 80178EC0
  {uint32_t ea=c->r[2]+0xFFFFCC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178EC4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80178EC8
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178ECC
  c->f[31]=c->ps1[31]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80178ED0
  c->lr=0x80178ED8u; f_80035554(c); // 80178ED4
  {uint32_t ea=c->r[31]+0x00000054u; c->f[3]=c->ps1[3]=RF32(ea);} // 80178ED8
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178EDC
  {uint32_t ea=c->r[2]+0xFFFFCC08u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178EE0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[3],c->f[1],c->f[0])); // 80178EE4
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80178EE8
  fcmp(c,0,c->f[2],c->f[0]); // 80178EEC
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 80178EF0
  if (crb(c,2)) { goto L_80178F20; } // 80178EF4
  fcmp(c,0,c->f[3],c->f[2]); // 80178EF8
  if (!crb(c,1)) { goto L_80178F10; } // 80178EFC
  fcmp(c,0,c->f[1],c->f[0]); // 80178F00
  if (!crb(c,1)) { goto L_80178F20; } // 80178F04
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 80178F08
  goto L_80178F20; // 80178F0C
L_80178F10:;
  c->f[0]=-c->f[0]; // 80178F10
  fcmp(c,0,c->f[1],c->f[0]); // 80178F14
  if (!crb(c,0)) { goto L_80178F20; } // 80178F18
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 80178F1C
L_80178F20:;
  c->r[3]=c->r[13]+0xFFFFAB58u; // 80178F20
  c->lr=0x80178F28u; f_80035554(c); // 80178F24
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178F28
  c->f[0]=c->ps1[0]=S(std::fma(c->f[31],c->f[1],c->f[0])); // 80178F2C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 80178F30
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80178F34
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80178F38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178F3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80178F40
  c->lr=c->r[0]; // 80178F44
  c->r[1]=c->r[1]+0x00000020u; // 80178F48
  return; // 80178F4C
}

// fn_80178F50
void f_80178F50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178F50
  c->r[0]=c->lr; // 80178F54
  W32(c->r[1]+0x00000024u,c->r[0]); // 80178F58
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80178F5C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80178F60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178F64
  c->r[31]=c->r[3]|c->r[3]; // 80178F68
  c->r[3]=c->r[13]+0xFFFFAB58u; // 80178F6C
  c->lr=0x80178F74u; f_80035554(c); // 80178F70
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178F74
  c->r[3]=c->r[13]+0xFFFFAB58u; // 80178F78
  {uint32_t ea=c->r[2]+0xFFFFCC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178F7C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80178F80
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80178F84
  c->f[31]=c->ps1[31]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80178F88
  c->lr=0x80178F90u; f_80035554(c); // 80178F8C
  {uint32_t ea=c->r[31]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178F90
  c->r[3]=c->r[13]+0xFFFFAB58u; // 80178F94
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80178F98
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80178F9C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 80178FA0
  c->lr=0x80178FA8u; f_80035554(c); // 80178FA4
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178FA8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[31],c->f[1],c->f[0])); // 80178FAC
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 80178FB0
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80178FB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80178FB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178FBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80178FC0
  c->lr=c->r[0]; // 80178FC4
  c->r[1]=c->r[1]+0x00000020u; // 80178FC8
  return; // 80178FCC
}

// fn_80178FD0
void f_80178FD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178FD0
  c->r[0]=c->lr; // 80178FD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178FD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178FDC
  c->r[31]=c->r[3]|c->r[3]; // 80178FE0
  c->lr=0x80178FE8u; f_80178E18(c); // 80178FE4
  c->r[3]=c->r[31]|c->r[31]; // 80178FE8
  c->lr=0x80178FF0u; f_80178E98(c); // 80178FEC
  c->r[3]=c->r[31]|c->r[31]; // 80178FF0
  c->lr=0x80178FF8u; f_80178F50(c); // 80178FF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178FF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178FFC
  c->lr=c->r[0]; // 80179000
  c->r[1]=c->r[1]+0x00000010u; // 80179004
  return; // 80179008
}

// fn_8017900C
void f_8017900C(Ctx* __restrict c) {
  c->r[9]=c->r[3]|c->r[3]; // 8017900C
  c->r[3]=0u+0x805D0000u; // 80179010
  c->r[8]=c->r[7]|c->r[7]; // 80179014
  c->r[7]=c->r[6]|c->r[6]; // 80179018
  c->r[6]=c->r[9]+0x0000002Cu; // 8017901C
  c->r[3]=c->r[3]+0x00006D70u; // 80179020
  c->r[9]=0u+0x00000000u; // 80179024
  c->r[10]=0u+0x00000000u; // 80179028
  f_8022ACD8(c); return; // 8017902C
}

// fn_80179030
void f_80179030(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80179030
  W32(c->r[3]+0x00000004u,c->r[4]); // 80179034
  W8(c->r[3]+0x00000008u,c->r[0]); // 80179038
  return; // 8017903C
}

// fn_80179040
void f_80179040(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179040
  c->r[0]=c->lr; // 80179044
  W32(c->r[1]+0x00000014u,c->r[0]); // 80179048
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017904C
  c->r[31]=c->r[3]|c->r[3]; // 80179050
  goto L_80179154; // 80179054
L_80179058:;
  cmpu(c,0,c->r[0],0x000000F6u); // 80179058
  if (crb(c,1)) { goto L_8017906C; } // 8017905C
  c->r[3]=c->r[31]|c->r[31]; // 80179060
  c->lr=0x80179068u; f_80179178(c); // 80179064
  goto L_80179154; // 80179068
L_8017906C:;
  cmpu(c,0,c->r[0],0x000000F7u); // 8017906C
  if (!crb(c,2)) { goto L_8017908C; } // 80179070
  c->r[4]=R32(c->r[31]+0x00000004u); // 80179074
  c->r[3]=c->r[31]|c->r[31]; // 80179078
  c->r[0]=c->r[4]+0x00000001u; // 8017907C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80179080
  c->lr=0x80179088u; f_80179368(c); // 80179084
  goto L_80179154; // 80179088
L_8017908C:;
  cmpu(c,0,c->r[0],0x000000F8u); // 8017908C
  if (!crb(c,2)) { goto L_801790B0; } // 80179090
  c->r[4]=R8(c->r[31]+0x00000008u); // 80179094
  c->r[3]=R32(c->r[31]+0x00000004u); // 80179098
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8017909C
  c->r[0]=c->r[3]+0x00000001u; // 801790A0
  W8(c->r[31]+0x00000008u,c->r[4]); // 801790A4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801790A8
  goto L_80179154; // 801790AC
L_801790B0:;
  cmpu(c,0,c->r[0],0x000000FAu); // 801790B0
  if (!crb(c,2)) { goto L_801790D4; } // 801790B4
  c->r[4]=R8(c->r[31]+0x00000008u); // 801790B8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801790BC
  c->r[4]=c->r[4]+0x00000001u; // 801790C0
  c->r[0]=c->r[3]+0x00000001u; // 801790C4
  W8(c->r[31]+0x00000008u,c->r[4]); // 801790C8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801790CC
  goto L_80179154; // 801790D0
L_801790D4:;
  cmpu(c,0,c->r[0],0x000000F9u); // 801790D4
  if (!crb(c,2)) { goto L_80179100; } // 801790D8
  c->r[5]=R8(c->r[31]+0x00000008u); // 801790DC
  c->r[3]=c->r[31]|c->r[31]; // 801790E0
  c->r[4]=R32(c->r[31]+0x00000004u); // 801790E4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801790E8
  c->r[0]=c->r[4]+0x00000001u; // 801790EC
  W8(c->r[31]+0x00000008u,c->r[5]); // 801790F0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801790F4
  c->lr=0x801790FCu; f_80179368(c); // 801790F8
  goto L_80179154; // 801790FC
L_80179100:;
  cmpu(c,0,c->r[0],0x000000FBu); // 80179100
  if (!crb(c,2)) { goto L_80179124; } // 80179104
  c->r[4]=R8(c->r[31]+0x00000008u); // 80179108
  c->r[3]=R32(c->r[31]+0x00000004u); // 8017910C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80179110
  c->r[0]=c->r[3]+0x00000001u; // 80179114
  W8(c->r[31]+0x00000008u,c->r[4]); // 80179118
  W32(c->r[31]+0x00000004u,c->r[0]); // 8017911C
  goto L_80179154; // 80179120
L_80179124:;
  cmpu(c,0,c->r[0],0x000000FFu); // 80179124
  if (!crb(c,2)) { goto L_80179154; } // 80179128
  c->r[0]=R8(c->r[31]+0x00000008u); // 8017912C
  cmps(c,0,(int32_t)c->r[0],0); // 80179130
  if (crb(c,2)) { goto L_80179164; } // 80179134
  c->r[3]=0u+0x803A0000u; // 80179138
  c->r[4]=0u+0x0000003Au; // 8017913C
  c->r[3]=c->r[3]+0x00003488u; // 80179140
  c->r[5]=c->r[3]+0x00000011u; // 80179144
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80179148
  c->lr=0x80179150u; f_803732A8(c); // 8017914C
  goto L_80179164; // 80179150
L_80179154:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80179154
  c->r[0]=R8(c->r[3]+0x00000000u); // 80179158
  cmpu(c,0,c->r[0],0x000000F0u); // 8017915C
  if (!crb(c,0)) { IRQCHK(c); goto L_80179058; } // 80179160
L_80179164:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80179164
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80179168
  c->lr=c->r[0]; // 8017916C
  c->r[1]=c->r[1]+0x00000010u; // 80179170
  return; // 80179174
}

// fn_80179178
void f_80179178(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179178
  c->r[0]=c->lr; // 8017917C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80179180
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80179184
  c->r[27]=c->r[3]|c->r[3]; // 80179188
  c->r[30]=0u+0x00000000u; // 8017918C
  c->r[29]=0u+0x00000000u; // 80179190
  c->r[31]=0u+0x804C0000u; // 80179194
  c->r[28]=R8(c->r[3]+0x00000008u); // 80179198
L_8017919C:;
  c->r[4]=R32(c->r[27]+0x00000004u); // 8017919C
  c->r[3]=R8(c->r[4]+0x00000000u); // 801791A0
  c->r[0]=c->r[3]+0xFFFFFF10u; // 801791A4
  cmpu(c,0,c->r[0],0x00000006u); // 801791A8
  if (crb(c,1)) { goto L_80179338; } // 801791AC
  c->r[3]=c->r[31]+0xFFFFC368u; // 801791B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801791B4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801791B8
  c->ctr=c->r[3]; // 801791BC
  if (true) { switch (c->ctr) { case 0x801791C4u: goto L_801791C4; case 0x80179204u: goto L_80179204; case 0x80179248u: goto L_80179248; case 0x80179278u: goto L_80179278; case 0x801792B0u: goto L_801792B0; case 0x801792E0u: goto L_801792E0; case 0x80179318u: goto L_80179318; default: break; } dispatch(c,c->ctr); return; } // 801791C0
L_801791C4:;
  c->r[3]=R8(c->r[27]+0x00000008u); // 801791C4
  cmpu(c,0,c->r[28],c->r[3]); // 801791C8
  if (crb(c,2)) { goto L_801791D8; } // 801791CC
  c->r[30]=0u+0x00000001u; // 801791D0
  goto L_8017933C; // 801791D4
L_801791D8:;
  c->r[3]=c->r[3]+0x00000001u; // 801791D8
  c->r[0]=c->r[4]+0x00000001u; // 801791DC
  W8(c->r[27]+0x00000008u,c->r[3]); // 801791E0
  c->r[3]=c->r[27]|c->r[27]; // 801791E4
  W32(c->r[27]+0x00000004u,c->r[0]); // 801791E8
  c->r[12]=R32(c->r[27]+0x00000000u); // 801791EC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801791F0
  c->ctr=c->r[12]; // 801791F4
  if (true) { c->lr=0x801791FCu; dispatch(c,c->ctr); } // 801791F8
  c->r[29]=c->r[3]|c->r[3]; // 801791FC
  goto L_8017933C; // 80179200
L_80179204:;
  c->r[3]=R8(c->r[27]+0x00000008u); // 80179204
  cmpu(c,0,c->r[28],c->r[3]); // 80179208
  if (crb(c,2)) { goto L_80179218; } // 8017920C
  c->r[30]=0u+0x00000001u; // 80179210
  goto L_8017933C; // 80179214
L_80179218:;
  c->r[3]=c->r[3]+0x00000001u; // 80179218
  c->r[0]=c->r[4]+0x00000001u; // 8017921C
  W8(c->r[27]+0x00000008u,c->r[3]); // 80179220
  c->r[3]=c->r[27]|c->r[27]; // 80179224
  W32(c->r[27]+0x00000004u,c->r[0]); // 80179228
  c->r[12]=R32(c->r[27]+0x00000000u); // 8017922C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80179230
  c->ctr=c->r[12]; // 80179234
  if (true) { c->lr=0x8017923Cu; dispatch(c,c->ctr); } // 80179238
  c->r[0]=cntlz(c->r[3]); // 8017923C
  c->r[29]=rotl(c->r[0],27)&0x07FFFFFFu; // 80179240
  goto L_8017933C; // 80179244
L_80179248:;
  c->r[0]=c->r[4]+0x00000001u; // 80179248
  c->r[3]=c->r[27]|c->r[27]; // 8017924C
  W32(c->r[27]+0x00000004u,c->r[0]); // 80179250
  c->r[12]=R32(c->r[27]+0x00000000u); // 80179254
  c->r[12]=R32(c->r[12]+0x00000010u); // 80179258
  c->ctr=c->r[12]; // 8017925C
  if (true) { c->lr=0x80179264u; dispatch(c,c->ctr); } // 80179260
  c->r[3]=c->r[29]&c->r[3]; // 80179264
  c->r[0]=0u-c->r[3]; // 80179268
  c->r[0]=c->r[0]|c->r[3]; // 8017926C
  c->r[29]=rotl(c->r[0],1)&0x00000001u; // 80179270
  goto L_8017933C; // 80179274
L_80179278:;
  c->r[0]=c->r[4]+0x00000001u; // 80179278
  c->r[3]=c->r[27]|c->r[27]; // 8017927C
  W32(c->r[27]+0x00000004u,c->r[0]); // 80179280
  c->r[12]=R32(c->r[27]+0x00000000u); // 80179284
  c->r[12]=R32(c->r[12]+0x00000010u); // 80179288
  c->ctr=c->r[12]; // 8017928C
  if (true) { c->lr=0x80179294u; dispatch(c,c->ctr); } // 80179290
  c->r[0]=cntlz(c->r[3]); // 80179294
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80179298
  c->r[3]=c->r[29]&c->r[0]; // 8017929C
  c->r[0]=0u-c->r[3]; // 801792A0
  c->r[0]=c->r[0]|c->r[3]; // 801792A4
  c->r[29]=rotl(c->r[0],1)&0x00000001u; // 801792A8
  goto L_8017933C; // 801792AC
L_801792B0:;
  c->r[0]=c->r[4]+0x00000001u; // 801792B0
  c->r[3]=c->r[27]|c->r[27]; // 801792B4
  W32(c->r[27]+0x00000004u,c->r[0]); // 801792B8
  c->r[12]=R32(c->r[27]+0x00000000u); // 801792BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801792C0
  c->ctr=c->r[12]; // 801792C4
  if (true) { c->lr=0x801792CCu; dispatch(c,c->ctr); } // 801792C8
  c->r[3]=c->r[29]|c->r[3]; // 801792CC
  c->r[0]=0u-c->r[3]; // 801792D0
  c->r[0]=c->r[0]|c->r[3]; // 801792D4
  c->r[29]=rotl(c->r[0],1)&0x00000001u; // 801792D8
  goto L_8017933C; // 801792DC
L_801792E0:;
  c->r[0]=c->r[4]+0x00000001u; // 801792E0
  c->r[3]=c->r[27]|c->r[27]; // 801792E4
  W32(c->r[27]+0x00000004u,c->r[0]); // 801792E8
  c->r[12]=R32(c->r[27]+0x00000000u); // 801792EC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801792F0
  c->ctr=c->r[12]; // 801792F4
  if (true) { c->lr=0x801792FCu; dispatch(c,c->ctr); } // 801792F8
  c->r[0]=cntlz(c->r[3]); // 801792FC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80179300
  c->r[3]=c->r[29]|c->r[0]; // 80179304
  c->r[0]=0u-c->r[3]; // 80179308
  c->r[0]=c->r[0]|c->r[3]; // 8017930C
  c->r[29]=rotl(c->r[0],1)&0x00000001u; // 80179310
  goto L_8017933C; // 80179314
L_80179318:;
  c->r[3]=R8(c->r[27]+0x00000008u); // 80179318
  c->r[0]=c->r[4]+0x00000001u; // 8017931C
  W32(c->r[27]+0x00000004u,c->r[0]); // 80179320
  c->r[29]=0u+0x00000001u; // 80179324
  c->r[0]=c->r[3]+0x00000001u; // 80179328
  c->r[30]=0u+0x00000001u; // 8017932C
  W8(c->r[27]+0x00000008u,c->r[0]); // 80179330
  goto L_8017933C; // 80179334
L_80179338:;
  c->r[30]=0u+0x00000001u; // 80179338
L_8017933C:;
  cmpu(c,0,c->r[30],0x00000001u); // 8017933C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017919C; } // 80179340
  cmps(c,0,(int32_t)c->r[29],0); // 80179344
  if (!crb(c,2)) { goto L_80179354; } // 80179348
  c->r[3]=c->r[27]|c->r[27]; // 8017934C
  c->lr=0x80179354u; f_80179368(c); // 80179350
L_80179354:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80179354
  c->r[0]=R32(c->r[1]+0x00000024u); // 80179358
  c->lr=c->r[0]; // 8017935C
  c->r[1]=c->r[1]+0x00000020u; // 80179360
  return; // 80179364
}

// fn_80179368
void f_80179368(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179368
  c->r[0]=c->lr; // 8017936C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80179370
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80179374
  c->r[31]=0u+0x00000000u; // 80179378
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017937C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80179380
  c->r[29]=c->r[3]|c->r[3]; // 80179384
  W32(c->r[1]+0x00000010u,c->r[28]); // 80179388
  c->r[28]=0u+0x804C0000u; // 8017938C
  c->r[30]=R8(c->r[3]+0x00000008u); // 80179390
L_80179394:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 80179394
  c->r[3]=R8(c->r[4]+0x00000000u); // 80179398
  cmpu(c,0,c->r[3],0x000000F0u); // 8017939C
  if (!crb(c,0)) { goto L_801793BC; } // 801793A0
  c->r[12]=R32(c->r[29]+0x00000000u); // 801793A4
  c->r[3]=c->r[29]|c->r[29]; // 801793A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801793AC
  c->ctr=c->r[12]; // 801793B0
  if (true) { c->lr=0x801793B8u; dispatch(c,c->ctr); } // 801793B4
  goto L_80179480; // 801793B8
L_801793BC:;
  c->r[0]=c->r[3]+0xFFFFFF10u; // 801793BC
  cmpu(c,0,c->r[0],0x0000000Bu); // 801793C0
  if (crb(c,1)) { goto L_80179460; } // 801793C4
  c->r[3]=c->r[28]+0xFFFFC384u; // 801793C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801793CC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801793D0
  c->ctr=c->r[3]; // 801793D4
  if (true) { switch (c->ctr) { case 0x801793DCu: goto L_801793DC; case 0x801793FCu: goto L_801793FC; case 0x8017942Cu: goto L_8017942C; case 0x8017943Cu: goto L_8017943C; case 0x80179460u: goto L_80179460; default: break; } dispatch(c,c->ctr); return; } // 801793D8
L_801793DC:;
  c->r[0]=R8(c->r[29]+0x00000008u); // 801793DC
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801793E0
  c->r[4]=c->r[4]+0x00000001u; // 801793E4
  cmpu(c,0,c->r[3],c->r[0]); // 801793E8
  W32(c->r[29]+0x00000004u,c->r[4]); // 801793EC
  if (!crb(c,2)) { goto L_80179480; } // 801793F0
  c->r[31]=0u+0x00000001u; // 801793F4
  goto L_80179480; // 801793F8
L_801793FC:;
  c->r[3]=R8(c->r[29]+0x00000008u); // 801793FC
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 80179400
  c->r[4]=c->r[4]+0x00000001u; // 80179404
  cmpu(c,0,c->r[0],c->r[3]); // 80179408
  W32(c->r[29]+0x00000004u,c->r[4]); // 8017940C
  if (!crb(c,2)) { goto L_80179424; } // 80179410
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80179414
  c->r[31]=0u+0x00000001u; // 80179418
  W8(c->r[29]+0x00000008u,c->r[0]); // 8017941C
  goto L_80179480; // 80179420
L_80179424:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 80179424
  goto L_80179480; // 80179428
L_8017942C:;
  c->r[0]=c->r[4]+0x00000001u; // 8017942C
  c->r[30]=c->r[30]+0x00000001u; // 80179430
  W32(c->r[29]+0x00000004u,c->r[0]); // 80179434
  goto L_80179480; // 80179438
L_8017943C:;
  c->r[0]=c->r[4]+0x00000001u; // 8017943C
  c->r[3]=c->r[29]|c->r[29]; // 80179440
  W32(c->r[29]+0x00000004u,c->r[0]); // 80179444
  c->r[12]=R32(c->r[29]+0x00000000u); // 80179448
  c->r[12]=R32(c->r[12]+0x00000014u); // 8017944C
  c->ctr=c->r[12]; // 80179450
  if (true) { c->lr=0x80179458u; dispatch(c,c->ctr); } // 80179454
  c->r[30]=c->r[30]+0x00000001u; // 80179458
  goto L_80179480; // 8017945C
L_80179460:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 80179460
  c->r[3]=c->r[29]|c->r[29]; // 80179464
  c->r[0]=c->r[4]+0x00000001u; // 80179468
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017946C
  c->r[12]=R32(c->r[29]+0x00000000u); // 80179470
  c->r[12]=R32(c->r[12]+0x00000014u); // 80179474
  c->ctr=c->r[12]; // 80179478
  if (true) { c->lr=0x80179480u; dispatch(c,c->ctr); } // 8017947C
L_80179480:;
  cmpu(c,0,c->r[31],0x00000001u); // 80179480
  if (!crb(c,2)) { IRQCHK(c); goto L_80179394; } // 80179484
  c->r[0]=R32(c->r[1]+0x00000024u); // 80179488
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017948C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80179490
  c->r[29]=R32(c->r[1]+0x00000014u); // 80179494
  c->r[28]=R32(c->r[1]+0x00000010u); // 80179498
  c->lr=c->r[0]; // 8017949C
  c->r[1]=c->r[1]+0x00000020u; // 801794A0
  return; // 801794A4
}

// fn_801794A8
void f_801794A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801794A8
  c->r[0]=c->lr; // 801794AC
  cmps(c,0,(int32_t)c->r[4],0); // 801794B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801794B4
  c->r[0]=0u+0x00000000u; // 801794B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801794BC
  c->r[31]=c->r[4]|c->r[4]; // 801794C0
  if (crb(c,0)) { goto L_801794D4; } // 801794C4
  cmps(c,0,(int32_t)c->r[4],9); // 801794C8
  if (crb(c,1)) { goto L_801794D4; } // 801794CC
  c->r[0]=0u+0x00000001u; // 801794D0
L_801794D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801794D4
  if (!crb(c,2)) { goto L_801794F4; } // 801794D8
  c->r[3]=0u+0x803A0000u; // 801794DC
  c->r[4]=0u+0x0000001Bu; // 801794E0
  c->r[3]=c->r[3]+0x000034C0u; // 801794E4
  c->r[5]=c->r[3]+0x0000000Eu; // 801794E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801794EC
  c->lr=0x801794F4u; f_803732A8(c); // 801794F0
L_801794F4:;
  c->r[3]=0u+0x804C0000u; // 801794F4
  c->r[3]=c->r[3]+0xFFFFC3B8u; // 801794F8
  c->r[3]=R8(c->r[3]+c->r[31]); // 801794FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80179500
  c->r[0]=R32(c->r[1]+0x00000014u); // 80179504
  c->lr=c->r[0]; // 80179508
  c->r[1]=c->r[1]+0x00000010u; // 8017950C
  return; // 80179510
}

// fn_80179514
void f_80179514(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179514
  c->r[0]=c->lr; // 80179518
  cmps(c,0,(int32_t)c->r[4],0); // 8017951C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80179520
  c->r[0]=0u+0x00000000u; // 80179524
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80179528
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017952C
  c->r[30]=c->r[5]|c->r[5]; // 80179530
  W32(c->r[1]+0x00000014u,c->r[29]); // 80179534
  c->r[29]=c->r[4]|c->r[4]; // 80179538
  W32(c->r[1]+0x00000010u,c->r[28]); // 8017953C
  c->r[28]=c->r[3]|c->r[3]; // 80179540
  if (crb(c,0)) { goto L_80179554; } // 80179544
  cmps(c,0,(int32_t)c->r[4],9); // 80179548
  if (crb(c,1)) { goto L_80179554; } // 8017954C
  c->r[0]=0u+0x00000001u; // 80179550
L_80179554:;
  cmps(c,0,(int32_t)c->r[0],0); // 80179554
  if (!crb(c,2)) { goto L_80179574; } // 80179558
  c->r[3]=0u+0x803A0000u; // 8017955C
  c->r[4]=0u+0x00000027u; // 80179560
  c->r[3]=c->r[3]+0x000034C0u; // 80179564
  c->r[5]=c->r[3]+0x0000000Eu; // 80179568
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017956C
  c->lr=0x80179574u; f_803732A8(c); // 80179570
L_80179574:;
  c->r[3]=0u+0x804C0000u; // 80179574
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80179578
  c->r[3]=c->r[3]+0xFFFFC3C8u; // 8017957C
  c->r[31]=R32(c->r[3]+c->r[0]); // 80179580
  cmps(c,0,(int32_t)c->r[31],0); // 80179584
  if (!crb(c,2)) { goto L_80179594; } // 80179588
  c->r[3]=0u+0x00000000u; // 8017958C
  goto L_801795A4; // 80179590
L_80179594:;
  c->r[3]=c->r[28]|c->r[28]; // 80179594
  c->r[4]=c->r[29]|c->r[29]; // 80179598
  c->lr=0x801795A0u; f_801794A8(c); // 8017959C
  c->r[3]=R8(c->r[31]+c->r[30]); // 801795A0
L_801795A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801795A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801795A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801795AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801795B0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801795B4
  c->lr=c->r[0]; // 801795B8
  c->r[1]=c->r[1]+0x00000020u; // 801795BC
  return; // 801795C0
}

// fn_801795C4
void f_801795C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801795C4
  c->r[0]=c->lr; // 801795C8
  cmps(c,0,(int32_t)c->r[4],0); // 801795CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801795D0
  c->r[0]=0u+0x00000000u; // 801795D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801795D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801795DC
  c->r[30]=c->r[5]|c->r[5]; // 801795E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801795E4
  c->r[29]=c->r[4]|c->r[4]; // 801795E8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801795EC
  c->r[28]=c->r[3]|c->r[3]; // 801795F0
  if (crb(c,0)) { goto L_80179604; } // 801795F4
  cmps(c,0,(int32_t)c->r[4],9); // 801795F8
  if (crb(c,1)) { goto L_80179604; } // 801795FC
  c->r[0]=0u+0x00000001u; // 80179600
L_80179604:;
  cmps(c,0,(int32_t)c->r[0],0); // 80179604
  if (!crb(c,2)) { goto L_80179624; } // 80179608
  c->r[3]=0u+0x803A0000u; // 8017960C
  c->r[4]=0u+0x0000003Bu; // 80179610
  c->r[3]=c->r[3]+0x000034C0u; // 80179614
  c->r[5]=c->r[3]+0x0000000Eu; // 80179618
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017961C
  c->lr=0x80179624u; f_803732A8(c); // 80179620
L_80179624:;
  c->r[3]=0u+0x804C0000u; // 80179624
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80179628
  c->r[3]=c->r[3]+0xFFFFC590u; // 8017962C
  c->r[31]=R32(c->r[3]+c->r[0]); // 80179630
  cmps(c,0,(int32_t)c->r[31],0); // 80179634
  if (!crb(c,2)) { goto L_80179644; } // 80179638
  c->r[3]=0u+0x00000000u; // 8017963C
  goto L_80179654; // 80179640
L_80179644:;
  c->r[3]=c->r[28]|c->r[28]; // 80179644
  c->r[4]=c->r[29]|c->r[29]; // 80179648
  c->lr=0x80179650u; f_801794A8(c); // 8017964C
  c->r[3]=R8(c->r[31]+c->r[30]); // 80179650
L_80179654:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80179654
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80179658
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017965C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80179660
  c->r[28]=R32(c->r[1]+0x00000010u); // 80179664
  c->lr=c->r[0]; // 80179668
  c->r[1]=c->r[1]+0x00000020u; // 8017966C
  return; // 80179670
}

// fn_80179674
void f_80179674(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179674
  c->r[0]=c->lr; // 80179678
  cmps(c,0,(int32_t)c->r[4],0); // 8017967C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80179680
  c->r[0]=0u+0x00000000u; // 80179684
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80179688
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017968C
  c->r[30]=c->r[5]|c->r[5]; // 80179690
  W32(c->r[1]+0x00000014u,c->r[29]); // 80179694
  c->r[29]=c->r[4]|c->r[4]; // 80179698
  W32(c->r[1]+0x00000010u,c->r[28]); // 8017969C
  c->r[28]=c->r[3]|c->r[3]; // 801796A0
  if (crb(c,0)) { goto L_801796B4; } // 801796A4
  cmps(c,0,(int32_t)c->r[4],9); // 801796A8
  if (crb(c,1)) { goto L_801796B4; } // 801796AC
  c->r[0]=0u+0x00000001u; // 801796B0
L_801796B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801796B4
  if (!crb(c,2)) { goto L_801796D4; } // 801796B8
  c->r[3]=0u+0x803A0000u; // 801796BC
  c->r[4]=0u+0x0000004Fu; // 801796C0
  c->r[3]=c->r[3]+0x000034C0u; // 801796C4
  c->r[5]=c->r[3]+0x0000000Eu; // 801796C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801796CC
  c->lr=0x801796D4u; f_803732A8(c); // 801796D0
L_801796D4:;
  c->r[3]=0u+0x804C0000u; // 801796D4
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801796D8
  c->r[3]=c->r[3]+0xFFFFC468u; // 801796DC
  c->r[31]=R32(c->r[3]+c->r[0]); // 801796E0
  cmps(c,0,(int32_t)c->r[31],0); // 801796E4
  if (!crb(c,2)) { goto L_801796F4; } // 801796E8
  {uint32_t ea=c->r[2]+0xFFFFCC18u; c->f[1]=c->ps1[1]=RF32(ea);} // 801796EC
  goto L_80179708; // 801796F0
L_801796F4:;
  c->r[3]=c->r[28]|c->r[28]; // 801796F4
  c->r[4]=c->r[29]|c->r[29]; // 801796F8
  c->lr=0x80179700u; f_801794A8(c); // 801796FC
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80179700
  {uint32_t ea=c->r[31]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80179704
L_80179708:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80179708
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017970C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80179710
  c->r[29]=R32(c->r[1]+0x00000014u); // 80179714
  c->r[28]=R32(c->r[1]+0x00000010u); // 80179718
  c->lr=c->r[0]; // 8017971C
  c->r[1]=c->r[1]+0x00000020u; // 80179720
  return; // 80179724
}

// fn_80179728
void f_80179728(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179728
  c->r[0]=c->lr; // 8017972C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80179730
  c->r[11]=c->r[1]+0x00000020u; // 80179734
  c->lr=0x8017973Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80179738
  cmps(c,0,(int32_t)c->r[4],0); // 8017973C
  c->r[27]=c->r[3]|c->r[3]; // 80179740
  c->r[28]=c->r[4]|c->r[4]; // 80179744
  c->r[29]=c->r[5]|c->r[5]; // 80179748
  c->r[30]=c->r[6]|c->r[6]; // 8017974C
  c->r[0]=0u+0x00000000u; // 80179750
  if (crb(c,0)) { goto L_80179764; } // 80179754
  cmps(c,0,(int32_t)c->r[4],9); // 80179758
  if (crb(c,1)) { goto L_80179764; } // 8017975C
  c->r[0]=0u+0x00000001u; // 80179760
L_80179764:;
  cmps(c,0,(int32_t)c->r[0],0); // 80179764
  if (!crb(c,2)) { goto L_80179784; } // 80179768
  c->r[3]=0u+0x803A0000u; // 8017976C
  c->r[4]=0u+0x00000063u; // 80179770
  c->r[3]=c->r[3]+0x000034C0u; // 80179774
  c->r[5]=c->r[3]+0x0000000Eu; // 80179778
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017977C
  c->lr=0x80179784u; f_803732A8(c); // 80179780
L_80179784:;
  c->r[3]=0u+0x804C0000u; // 80179784
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80179788
  c->r[3]=c->r[3]+0xFFFFC568u; // 8017978C
  c->r[31]=R32(c->r[3]+c->r[0]); // 80179790
  cmps(c,0,(int32_t)c->r[31],0); // 80179794
  if (!crb(c,2)) { goto L_801797A4; } // 80179798
  {uint32_t ea=c->r[2]+0xFFFFCC18u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017979C
  goto L_8017981C; // 801797A0
L_801797A4:;
  c->r[3]=c->r[27]|c->r[27]; // 801797A4
  c->r[4]=c->r[28]|c->r[28]; // 801797A8
  c->lr=0x801797B0u; f_801794A8(c); // 801797AC
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801797B0
  c->r[31]=R32(c->r[31]+c->r[0]); // 801797B4
  cmps(c,0,(int32_t)c->r[31],0); // 801797B8
  if (!crb(c,2)) { goto L_801797C8; } // 801797BC
  {uint32_t ea=c->r[2]+0xFFFFCC18u; c->f[1]=c->ps1[1]=RF32(ea);} // 801797C0
  goto L_8017981C; // 801797C4
L_801797C8:;
  c->r[3]=c->r[27]|c->r[27]; // 801797C8
  c->r[4]=c->r[28]|c->r[28]; // 801797CC
  c->r[5]=c->r[29]|c->r[29]; // 801797D0
  c->lr=0x801797D8u; f_80179514(c); // 801797D4
  cmps(c,0,(int32_t)c->r[30],0); // 801797D8
  c->r[4]=0u+0x00000000u; // 801797DC
  if (crb(c,0)) { goto L_801797F4; } // 801797E0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801797E4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801797E8
  if (!crb(c,0)) { goto L_801797F4; } // 801797EC
  c->r[4]=0u+0x00000001u; // 801797F0
L_801797F4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801797F4
  if (!crb(c,2)) { goto L_80179814; } // 801797F8
  c->r[3]=0u+0x803A0000u; // 801797FC
  c->r[4]=0u+0x00000074u; // 80179800
  c->r[3]=c->r[3]+0x000034C0u; // 80179804
  c->r[5]=c->r[3]+0x00000052u; // 80179808
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017980C
  c->lr=0x80179814u; f_803732A8(c); // 80179810
L_80179814:;
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80179814
  {uint32_t ea=c->r[31]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80179818
L_8017981C:;
  c->r[11]=c->r[1]+0x00000020u; // 8017981C
  c->lr=0x80179824u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80179820
  c->r[0]=R32(c->r[1]+0x00000024u); // 80179824
  c->lr=c->r[0]; // 80179828
  c->r[1]=c->r[1]+0x00000020u; // 8017982C
  return; // 80179830
}

// fn_80179834
void f_80179834(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)168); // 80179834
  c->r[7]=0u+0x804C0000u; // 80179838
  c->r[3]=0u+0x00000000u; // 8017983C
  c->r[7]=c->r[7]+0xFFFFC5B8u; // 80179840
  c->r[0]=c->r[7]+c->r[0]; // 80179844
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 80179848
  {uint32_t ea=c->r[4]+c->r[0]; c->r[0]=R32(ea); c->r[4]=ea;} // 8017984C
  cmpu(c,0,c->r[0],c->r[6]); // 80179850
  if (crb(c,0)) return; // 80179854
  c->r[0]=R32(c->r[4]+0x00000004u); // 80179858
  c->r[3]=0u+0x00000001u; // 8017985C
  cmpu(c,0,c->r[0],c->r[6]); // 80179860
  if (crb(c,0)) return; // 80179864
  c->r[0]=R32(c->r[4]+0x00000008u); // 80179868
  c->r[3]=0u+0x00000002u; // 8017986C
  cmpu(c,0,c->r[0],c->r[6]); // 80179870
  if (crb(c,0)) return; // 80179874
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80179878
  c->r[3]=0u+0x00000003u; // 8017987C
  cmpu(c,0,c->r[0],c->r[6]); // 80179880
  if (crb(c,0)) return; // 80179884
  c->r[0]=R32(c->r[4]+0x00000010u); // 80179888
  c->r[3]=0u+0x00000004u; // 8017988C
  cmpu(c,0,c->r[0],c->r[6]); // 80179890
  if (crb(c,0)) return; // 80179894
  c->r[0]=R32(c->r[4]+0x00000014u); // 80179898
  c->r[3]=0u+0x00000005u; // 8017989C
  cmpu(c,0,c->r[0],c->r[6]); // 801798A0
  if (crb(c,0)) return; // 801798A4
  c->r[3]=0u+0x00000006u; // 801798A8
  return; // 801798AC
}

// fn_801798B0
void f_801798B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801798B0
  c->r[0]=c->lr; // 801798B4
  c->r[3]=c->r[13]+0xFFFFAB30u; // 801798B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801798BC
  c->lr=0x801798C4u; f_8017992C(c); // 801798C0
  c->r[4]=0u+0x80180000u; // 801798C4
  c->r[5]=0u+0x80550000u; // 801798C8
  c->r[4]=c->r[4]+0xFFFF98ECu; // 801798CC
  c->r[3]=c->r[13]+0xFFFFAB30u; // 801798D0
  c->r[5]=c->r[5]+0xFFFFBFBCu; // 801798D4
  c->lr=0x801798DCu; f_802B99F0(c); // 801798D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801798DC
  c->lr=c->r[0]; // 801798E0
  c->r[1]=c->r[1]+0x00000010u; // 801798E4
  return; // 801798E8
}

// fn_801798EC
void f_801798EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801798EC
  c->r[0]=c->lr; // 801798F0
  cmps(c,0,(int32_t)c->r[3],0); // 801798F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801798F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801798FC
  c->r[31]=c->r[3]|c->r[3]; // 80179900
  if (crb(c,2)) { goto L_80179914; } // 80179904
  cmps(c,0,(int32_t)c->r[4],0); // 80179908
  if (!crb(c,1)) { goto L_80179914; } // 8017990C
  c->lr=0x80179914u; f_800C69B8(c); // 80179910
L_80179914:;
  c->r[3]=c->r[31]|c->r[31]; // 80179914
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80179918
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017991C
  c->lr=c->r[0]; // 80179920
  c->r[1]=c->r[1]+0x00000010u; // 80179924
  return; // 80179928
}

// fn_8017992C
void f_8017992C(Ctx* __restrict c) {
  return; // 8017992C
}

// fn_80179930
void f_80179930(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 80179930
  c->r[0]=0u+0x00000001u; // 80179934
  W8(c->r[3]+0x000001D9u,c->r[4]); // 80179938
  W8(c->r[3]+0x000001DAu,c->r[4]); // 8017993C
  W8(c->r[3]+0x000001D8u,c->r[4]); // 80179940
  W32(c->r[3]+0x000001DCu,c->r[0]); // 80179944
  return; // 80179948
}

// fn_8017994C
void f_8017994C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017994C
  c->r[0]=c->lr; // 80179950
  W32(c->r[1]+0x00000074u,c->r[0]); // 80179954
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80179958
  W32(c->r[1]+0x00000068u,c->r[30]); // 8017995C
  c->r[30]=c->r[4]|c->r[4]; // 80179960
  W32(c->r[1]+0x00000064u,c->r[29]); // 80179964
  c->r[29]=c->r[3]|c->r[3]; // 80179968
  c->r[5]=R8(c->r[3]+0x000001DAu); // 8017996C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80179970
  cmps(c,0,(int32_t)c->r[0],2); // 80179974
  if (crb(c,2)) { goto L_80179A04; } // 80179978
  if (!crb(c,0)) { goto L_80179990; } // 8017997C
  cmps(c,0,(int32_t)c->r[0],0); // 80179980
  if (crb(c,2)) { goto L_8017999C; } // 80179984
  if (!crb(c,0)) { goto L_801799C4; } // 80179988
  goto L_80179AF4; // 8017998C
L_80179990:;
  cmps(c,0,(int32_t)c->r[0],4); // 80179990
  if (!crb(c,0)) { goto L_80179AF4; } // 80179994
  goto L_80179A0C; // 80179998
L_8017999C:;
  c->r[3]=0u+0x80620000u; // 8017999C
  c->r[3]=c->r[3]+0x00007D28u; // 801799A0
  c->r[3]=R8(c->r[3]+0x0000008Au); // 801799A4
  c->r[0]=c->r[3]+0x00000128u; // 801799A8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801799AC
  c->lr=0x801799B4u; f_8024E878(c); // 801799B0
  c->r[3]=R8(c->r[29]+0x000001DAu); // 801799B4
  c->r[0]=c->r[3]+0x00000001u; // 801799B8
  W8(c->r[29]+0x000001DAu,c->r[0]); // 801799BC
  goto L_80179AF4; // 801799C0
L_801799C4:;
  c->lr=0x801799C8u; f_8024EC6C(c); // 801799C4
  cmps(c,0,(int32_t)c->r[3],1); // 801799C8
  if (crb(c,2)) { goto L_80179AF4; } // 801799CC
  c->r[4]=0u+0x80620000u; // 801799D0
  c->r[3]=0u+0x805D0000u; // 801799D4
  c->r[4]=c->r[4]+0x00007D28u; // 801799D8
  c->r[4]=R8(c->r[4]+0x0000008Au); // 801799DC
  c->r[3]=c->r[3]+0xFFFFC7D4u; // 801799E0
  c->r[4]=c->r[4]+0x00000476u; // 801799E4
  c->lr=0x801799ECu; f_801E1A98(c); // 801799E8
  cmps(c,0,(int32_t)c->r[3],0); // 801799EC
  if (crb(c,2)) { goto L_80179AF4; } // 801799F0
  c->r[3]=R8(c->r[29]+0x000001DAu); // 801799F4
  c->r[0]=c->r[3]+0x00000001u; // 801799F8
  W8(c->r[29]+0x000001DAu,c->r[0]); // 801799FC
  goto L_80179AF4; // 80179A00
L_80179A04:;
  c->r[0]=c->r[5]+0x00000001u; // 80179A04
  W8(c->r[3]+0x000001DAu,c->r[0]); // 80179A08
L_80179A0C:;
  c->r[4]=c->r[29]+0x00000118u; // 80179A0C
  c->r[3]=0u+0x0000040Du; // 80179A10
  c->r[5]=0u+0x00000000u; // 80179A14
  c->lr=0x80179A1Cu; f_8024EE50(c); // 80179A18
  cmps(c,0,(int32_t)c->r[3],0); // 80179A1C
  if (!crb(c,2)) { goto L_80179AF4; } // 80179A20
  c->r[3]=0u+0x80550000u; // 80179A24
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 80179A28
  c->r[3]=c->r[3]+0xFFFFCE54u; // 80179A2C
  c->lr=0x80179A34u; f_8019C920(c); // 80179A30
  c->r[4]=0u+0x00000000u; // 80179A34
  c->lr=0x80179A3Cu; f_80039840(c); // 80179A38
  W32(c->r[29]+0x00000004u,c->r[3]); // 80179A3C
  c->lr=0x80179A44u; f_80251620(c); // 80179A40
  W32(c->r[29]+0x00000008u,c->r[3]); // 80179A44
  c->r[3]=c->r[29]+0x00000028u; // 80179A48
  c->lr=0x80179A50u; f_802516D8(c); // 80179A4C
  c->r[3]=R32(c->r[29]+0x00000118u); // 80179A50
  c->r[4]=c->r[29]+0x00000028u; // 80179A54
  c->lr=0x80179A5Cu; f_80251544(c); // 80179A58
  c->r[30]=0u+0x00000000u; // 80179A5C
  c->r[31]=0u+0x803A0000u; // 80179A60
  W8(c->r[29]+0x00000028u,c->r[30]); // 80179A64
  c->r[4]=c->r[31]+0x00003550u; // 80179A68
  c->r[3]=R32(c->r[29]+0x00000118u); // 80179A6C
  c->lr=0x80179A74u; f_80256EC4(c); // 80179A70
  W32(c->r[29]+0x000000F0u,c->r[3]); // 80179A74
  c->r[4]=c->r[31]+0x00003550u; // 80179A78
  c->r[3]=R32(c->r[29]+0x00000004u); // 80179A7C
  c->r[4]=c->r[4]+0x00000009u; // 80179A80
  c->r[5]=c->r[1]+0x00000030u; // 80179A84
  c->r[6]=0u+0x00000001u; // 80179A88
  c->lr=0x80179A90u; f_80257018(c); // 80179A8C
  c->r[3]=c->r[1]+0x00000020u; // 80179A90
  c->r[4]=c->r[1]+0x00000014u; // 80179A94
  c->r[5]=c->r[1]+0x00000008u; // 80179A98
  c->r[6]=c->r[1]+0x00000030u; // 80179A9C
  c->r[7]=0u+0x00000000u; // 80179AA0
  c->lr=0x80179AA8u; f_8002BE64(c); // 80179AA4
  c->r[3]=c->r[29]+0x00000068u; // 80179AA8
  c->r[4]=c->r[1]+0x00000020u; // 80179AAC
  c->lr=0x80179AB4u; f_800361A0(c); // 80179AB0
  c->r[3]=c->r[29]+0x00000074u; // 80179AB4
  c->r[4]=c->r[1]+0x00000014u; // 80179AB8
  c->lr=0x80179AC0u; f_800361A0(c); // 80179ABC
  {uint32_t ea=c->r[2]+0xFFFFCC20u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179AC0
  c->r[3]=c->r[29]+0x00000028u; // 80179AC4
  c->r[4]=0u+0x00000000u; // 80179AC8
  {uint32_t ea=c->r[29]+0x00000080u; WF32(ea,c->f[0]);} // 80179ACC
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[0]);} // 80179AD0
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[0]);} // 80179AD4
  c->lr=0x80179ADCu; f_802518A4(c); // 80179AD8
  c->r[3]=c->r[29]+0x00000028u; // 80179ADC
  c->r[4]=0u+0x00000000u; // 80179AE0
  c->lr=0x80179AE8u; f_80251824(c); // 80179AE4
  W8(c->r[29]+0x000001DAu,c->r[30]); // 80179AE8
  c->r[3]=0u+0x00000001u; // 80179AEC
  goto L_80179AF8; // 80179AF0
L_80179AF4:;
  c->r[3]=0u+0x00000000u; // 80179AF4
L_80179AF8:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 80179AF8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 80179AFC
  c->r[30]=R32(c->r[1]+0x00000068u); // 80179B00
  c->r[29]=R32(c->r[1]+0x00000064u); // 80179B04
  c->lr=c->r[0]; // 80179B08
  c->r[1]=c->r[1]+0x00000070u; // 80179B0C
  return; // 80179B10
}

// fn_80179B14
void f_80179B14(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFCC24u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179B14
  c->r[0]=0u+0x00000001u; // 80179B18
  W8(c->r[3]+0x00000028u,c->r[0]); // 80179B1C
  c->r[4]=0u+0x00000001u; // 80179B20
  c->f[2]=c->f[1]; // 80179B24
  c->r[3]=R32(c->r[3]+0x00000118u); // 80179B28
  c->r[5]=0u+0x0000001Fu; // 80179B2C
  f_8024FEAC(c); return; // 80179B30
}

// fn_80179B34
void f_80179B34(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFCC24u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179B34
  c->r[0]=0u+0x00000001u; // 80179B38
  W8(c->r[3]+0x00000028u,c->r[0]); // 80179B3C
  c->r[4]=0u+0x00000003u; // 80179B40
  c->f[2]=c->f[1]; // 80179B44
  c->r[3]=R32(c->r[3]+0x00000118u); // 80179B48
  c->r[5]=0u+0x0000001Fu; // 80179B4C
  f_8024FEAC(c); return; // 80179B50
}

// fn_80179B54
void f_80179B54(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80179B54
  W8(c->r[3]+0x00000028u,c->r[0]); // 80179B58
  return; // 80179B5C
}

// fn_80179B60
void f_80179B60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179B60
  c->r[0]=c->lr; // 80179B64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80179B68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80179B6C
  c->r[31]=c->r[3]|c->r[3]; // 80179B70
  c->r[3]=R32(c->r[3]+0x00000118u); // 80179B74
  c->lr=0x80179B7Cu; f_802501B0(c); // 80179B78
  W32(c->r[31]+0x000001DCu,c->r[3]); // 80179B7C
  c->r[3]=R32(c->r[31]+0x00000118u); // 80179B80
  c->lr=0x80179B88u; f_8025037C(c); // 80179B84
  c->r[3]=R32(c->r[31]+0x00000118u); // 80179B88
  c->lr=0x80179B90u; f_8025E330(c); // 80179B8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80179B90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80179B94
  c->lr=c->r[0]; // 80179B98
  c->r[1]=c->r[1]+0x00000010u; // 80179B9C
  return; // 80179BA0
}

// fn_80179BA4
void f_80179BA4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000001DCu); // 80179BA4
  c->r[0]=0u-c->r[3]; // 80179BA8
  c->r[0]=c->r[0]|c->r[3]; // 80179BAC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80179BB0
  return; // 80179BB4
}

// fn_80179BB8
void f_80179BB8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 80179BB8
  c->r[0]=R32(c->r[3]+0x00000038u); // 80179BBC
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 80179BC0
  c->r[0]=0u-c->r[3]; // 80179BC4
  c->r[0]=c->r[0]|c->r[3]; // 80179BC8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80179BCC
  return; // 80179BD0
}

// fn_80179BD4
void f_80179BD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFCC24u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179BD4
  c->r[4]=0u+0x00000004u; // 80179BD8
  c->r[5]=R32(c->r[3]+0x00000008u); // 80179BDC
  c->f[2]=c->f[1]; // 80179BE0
  c->r[3]=R32(c->r[3]+0x00000004u); // 80179BE4
  c->r[5]=R32(c->r[5]+0x00000018u); // 80179BE8
  f_8024FEAC(c); return; // 80179BEC
}

// fn_80179BF0
void f_80179BF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179BF0
  c->r[0]=c->lr; // 80179BF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80179BF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80179BFC
  c->r[3]=R32(c->r[3]+0x00000118u); // 80179C00
  c->lr=0x80179C08u; f_80254158(c); // 80179C04
  c->r[31]=0u+0x80620000u; // 80179C08
  c->r[3]=0u+0x805D0000u; // 80179C0C
  c->r[31]=c->r[31]+0x00007D28u; // 80179C10
  c->r[4]=R8(c->r[31]+0x0000008Au); // 80179C14
  c->r[3]=c->r[3]+0xFFFFC7D4u; // 80179C18
  c->r[4]=c->r[4]+0x00000476u; // 80179C1C
  c->lr=0x80179C24u; f_801E1DC4(c); // 80179C20
  c->r[3]=R8(c->r[31]+0x0000008Au); // 80179C24
  c->r[0]=c->r[3]+0x00000128u; // 80179C28
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80179C2C
  c->lr=0x80179C34u; f_8024EAB8(c); // 80179C30
  c->r[0]=R32(c->r[1]+0x00000014u); // 80179C34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80179C38
  c->lr=c->r[0]; // 80179C3C
  c->r[1]=c->r[1]+0x00000010u; // 80179C40
  return; // 80179C44
}

// fn_80179C48
void f_80179C48(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 80179C48
  W8(c->r[3]+0x000001D8u,c->r[0]); // 80179C4C
  return; // 80179C50
}

// fn_80179C54
void f_80179C54(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000001D8u); // 80179C54
  return; // 80179C58
}

// fn_80179C5C
void f_80179C5C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80179C5C
  W8(c->r[3]+0x00000028u,c->r[0]); // 80179C60
  return; // 80179C64
}

// fn_80179C68
void f_80179C68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179C68
  c->r[0]=c->lr; // 80179C6C
  c->r[4]=0u+0x805D0000u; // 80179C70
  c->r[5]=0u+0x00000002u; // 80179C74
  W32(c->r[1]+0x00000044u,c->r[0]); // 80179C78
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80179C7C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80179C80
  W32(c->r[1]+0x00000034u,c->r[29]); // 80179C84
  c->r[29]=c->r[3]|c->r[3]; // 80179C88
  c->r[3]=c->r[4]+0xFFFFC7D4u; // 80179C8C
  c->r[4]=0u+0x0000003Cu; // 80179C90
  c->lr=0x80179C98u; f_801E1F1C(c); // 80179C94
  W32(c->r[29]+0x00000000u,c->r[3]); // 80179C98
  c->r[4]=0u+0x00000000u; // 80179C9C
  {uint32_t ea=c->r[2]+0xFFFFCC28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179CA0
  c->r[5]=0u+0x00000011u; // 80179CA4
  c->lr=0x80179CACu; f_801E27F8(c); // 80179CA8
  c->r[3]=R32(c->r[29]+0x00000000u); // 80179CAC
  c->lr=0x80179CB4u; f_801E2994(c); // 80179CB0
  c->r[3]=R32(c->r[29]+0x00000000u); // 80179CB4
  c->r[4]=0u+0x00000001u; // 80179CB8
  c->lr=0x80179CC0u; f_801E3D24(c); // 80179CBC
  c->r[30]=0u+0x803A0000u; // 80179CC0
  c->r[4]=R32(c->r[29]+0x00000000u); // 80179CC4
  c->r[3]=c->r[1]+0x00000020u; // 80179CC8
  c->r[6]=0u+0x00000000u; // 80179CCC
  c->r[5]=c->r[30]+0x00003568u; // 80179CD0
  c->lr=0x80179CD8u; f_801E2E44(c); // 80179CD4
  c->r[3]=c->r[29]+0x00000004u; // 80179CD8
  c->r[4]=c->r[1]+0x00000020u; // 80179CDC
  c->lr=0x80179CE4u; f_800361A0(c); // 80179CE0
  c->r[30]=c->r[30]+0x00003568u; // 80179CE4
  c->r[4]=R32(c->r[29]+0x00000000u); // 80179CE8
  c->r[3]=c->r[1]+0x00000014u; // 80179CEC
  c->r[6]=0u+0x00000000u; // 80179CF0
  c->r[5]=c->r[30]+0x0000000Eu; // 80179CF4
  c->lr=0x80179CFCu; f_801E2E44(c); // 80179CF8
  c->r[3]=c->r[29]+0x00000010u; // 80179CFC
  c->r[4]=c->r[1]+0x00000014u; // 80179D00
  c->lr=0x80179D08u; f_800361A0(c); // 80179D04
  c->r[4]=R32(c->r[29]+0x00000000u); // 80179D08
  c->r[3]=c->r[1]+0x00000008u; // 80179D0C
  c->r[5]=c->r[30]+0x0000001Cu; // 80179D10
  c->r[6]=0u+0x00000000u; // 80179D14
  c->lr=0x80179D1Cu; f_801E2E44(c); // 80179D18
  c->r[3]=c->r[29]+0x0000001Cu; // 80179D1C
  c->r[4]=c->r[1]+0x00000008u; // 80179D20
  c->lr=0x80179D28u; f_800361A0(c); // 80179D24
  c->r[31]=0u+0x805D0000u; // 80179D28
  c->r[5]=R32(c->r[29]+0x00000000u); // 80179D2C
  c->r[3]=c->r[31]+0x00001BBCu; // 80179D30
  c->r[6]=c->r[30]+0x0000002Au; // 80179D34
  c->r[4]=0u+0x00000F5Cu; // 80179D38
  c->r[7]=0u+0x00000000u; // 80179D3C
  c->lr=0x80179D44u; f_801F1700(c); // 80179D40
  W16(c->r[29]+0x0000002Au,c->r[3]); // 80179D44
  c->r[3]=c->r[31]+0x00001BBCu; // 80179D48
  c->r[5]=R32(c->r[29]+0x00000000u); // 80179D4C
  c->r[6]=c->r[30]+0x00000037u; // 80179D50
  c->r[4]=0u+0x00000D1Fu; // 80179D54
  c->r[7]=0u+0x00000000u; // 80179D58
  c->lr=0x80179D60u; f_801F1700(c); // 80179D5C
  W16(c->r[29]+0x0000002Cu,c->r[3]); // 80179D60
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80179D64
  c->r[30]=R32(c->r[1]+0x00000038u); // 80179D68
  c->r[29]=R32(c->r[1]+0x00000034u); // 80179D6C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80179D70
  c->lr=c->r[0]; // 80179D74
  c->r[1]=c->r[1]+0x00000040u; // 80179D78
  return; // 80179D7C
}

// fn_80179D80
void f_80179D80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179D80
  c->r[0]=c->lr; // 80179D84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80179D88
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80179D8C
  cmps(c,0,(int32_t)c->r[0],1); // 80179D90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80179D94
  W32(c->r[1]+0x00000008u,c->r[30]); // 80179D98
  c->r[30]=c->r[3]|c->r[3]; // 80179D9C
  if (crb(c,2)) { goto L_80179E4C; } // 80179DA0
  if (!crb(c,0)) { goto L_80179DB4; } // 80179DA4
  cmps(c,0,(int32_t)c->r[0],0); // 80179DA8
  if (!crb(c,0)) { goto L_80179DC0; } // 80179DAC
  goto L_80179F60; // 80179DB0
L_80179DB4:;
  cmps(c,0,(int32_t)c->r[0],3); // 80179DB4
  if (!crb(c,0)) { goto L_80179F60; } // 80179DB8
  goto L_80179ED8; // 80179DBC
L_80179DC0:;
  c->r[31]=0u+0x803A0000u; // 80179DC0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80179DC4
  c->r[31]=c->r[31]+0x00003568u; // 80179DC8
  c->r[5]=0u+0x00000000u; // 80179DCC
  c->r[4]=c->r[31]+0x00000044u; // 80179DD0
  c->lr=0x80179DD8u; f_801E3A84(c); // 80179DD4
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179DD8
  c->r[4]=c->r[31]+0x00000051u; // 80179DDC
  c->r[5]=0u+0x00000000u; // 80179DE0
  c->lr=0x80179DE8u; f_801E3A84(c); // 80179DE4
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179DE8
  c->r[4]=c->r[31]+0x0000005Eu; // 80179DEC
  c->r[5]=0u+0x00000000u; // 80179DF0
  c->lr=0x80179DF8u; f_801E3A84(c); // 80179DF4
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179DF8
  c->r[4]=c->r[31]+0x0000006Bu; // 80179DFC
  c->r[5]=0u+0x00000000u; // 80179E00
  c->lr=0x80179E08u; f_801E3A84(c); // 80179E04
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179E08
  c->r[4]=c->r[31]+0x00000078u; // 80179E0C
  c->r[5]=0u+0x00000000u; // 80179E10
  c->lr=0x80179E18u; f_801E3A84(c); // 80179E14
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179E18
  c->r[4]=c->r[31]+0x00000085u; // 80179E1C
  c->r[5]=0u+0x00000000u; // 80179E20
  c->lr=0x80179E28u; f_801E3A84(c); // 80179E24
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179E28
  c->r[4]=c->r[31]+0x00000092u; // 80179E2C
  c->r[5]=0u+0x00000000u; // 80179E30
  c->lr=0x80179E38u; f_801E3A84(c); // 80179E34
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179E38
  c->r[4]=c->r[31]+0x0000009Fu; // 80179E3C
  c->r[5]=0u+0x00000000u; // 80179E40
  c->lr=0x80179E48u; f_801E3A84(c); // 80179E44
  goto L_80179F60; // 80179E48
L_80179E4C:;
  c->r[31]=0u+0x803A0000u; // 80179E4C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80179E50
  c->r[31]=c->r[31]+0x00003568u; // 80179E54
  c->r[5]=0u+0x00000000u; // 80179E58
  c->r[4]=c->r[31]+0x00000044u; // 80179E5C
  c->lr=0x80179E64u; f_801E3A84(c); // 80179E60
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179E64
  c->r[4]=c->r[31]+0x00000051u; // 80179E68
  c->r[5]=0u+0x00000000u; // 80179E6C
  c->lr=0x80179E74u; f_801E3A84(c); // 80179E70
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179E74
  c->r[4]=c->r[31]+0x0000005Eu; // 80179E78
  c->r[5]=0u+0x00000001u; // 80179E7C
  c->lr=0x80179E84u; f_801E3A84(c); // 80179E80
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179E84
  c->r[4]=c->r[31]+0x0000006Bu; // 80179E88
  c->r[5]=0u+0x00000000u; // 80179E8C
  c->lr=0x80179E94u; f_801E3A84(c); // 80179E90
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179E94
  c->r[4]=c->r[31]+0x00000078u; // 80179E98
  c->r[5]=0u+0x00000000u; // 80179E9C
  c->lr=0x80179EA4u; f_801E3A84(c); // 80179EA0
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179EA4
  c->r[4]=c->r[31]+0x00000085u; // 80179EA8
  c->r[5]=0u+0x00000000u; // 80179EAC
  c->lr=0x80179EB4u; f_801E3A84(c); // 80179EB0
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179EB4
  c->r[4]=c->r[31]+0x00000092u; // 80179EB8
  c->r[5]=0u+0x00000001u; // 80179EBC
  c->lr=0x80179EC4u; f_801E3A84(c); // 80179EC0
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179EC4
  c->r[4]=c->r[31]+0x0000009Fu; // 80179EC8
  c->r[5]=0u+0x00000000u; // 80179ECC
  c->lr=0x80179ED4u; f_801E3A84(c); // 80179ED0
  goto L_80179F60; // 80179ED4
L_80179ED8:;
  c->r[31]=0u+0x803A0000u; // 80179ED8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80179EDC
  c->r[31]=c->r[31]+0x00003568u; // 80179EE0
  c->r[5]=0u+0x00000001u; // 80179EE4
  c->r[4]=c->r[31]+0x00000044u; // 80179EE8
  c->lr=0x80179EF0u; f_801E3A84(c); // 80179EEC
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179EF0
  c->r[4]=c->r[31]+0x00000051u; // 80179EF4
  c->r[5]=0u+0x00000001u; // 80179EF8
  c->lr=0x80179F00u; f_801E3A84(c); // 80179EFC
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179F00
  c->r[4]=c->r[31]+0x0000005Eu; // 80179F04
  c->r[5]=0u+0x00000001u; // 80179F08
  c->lr=0x80179F10u; f_801E3A84(c); // 80179F0C
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179F10
  c->r[4]=c->r[31]+0x0000006Bu; // 80179F14
  c->r[5]=0u+0x00000001u; // 80179F18
  c->lr=0x80179F20u; f_801E3A84(c); // 80179F1C
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179F20
  c->r[4]=c->r[31]+0x00000078u; // 80179F24
  c->r[5]=0u+0x00000001u; // 80179F28
  c->lr=0x80179F30u; f_801E3A84(c); // 80179F2C
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179F30
  c->r[4]=c->r[31]+0x00000085u; // 80179F34
  c->r[5]=0u+0x00000001u; // 80179F38
  c->lr=0x80179F40u; f_801E3A84(c); // 80179F3C
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179F40
  c->r[4]=c->r[31]+0x00000092u; // 80179F44
  c->r[5]=0u+0x00000001u; // 80179F48
  c->lr=0x80179F50u; f_801E3A84(c); // 80179F4C
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179F50
  c->r[4]=c->r[31]+0x0000009Fu; // 80179F54
  c->r[5]=0u+0x00000001u; // 80179F58
  c->lr=0x80179F60u; f_801E3A84(c); // 80179F5C
L_80179F60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80179F60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80179F64
  c->r[30]=R32(c->r[1]+0x00000008u); // 80179F68
  c->lr=c->r[0]; // 80179F6C
  c->r[1]=c->r[1]+0x00000010u; // 80179F70
  return; // 80179F74
}

// fn_80179F78
void f_80179F78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179F78
  c->r[0]=c->lr; // 80179F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80179F80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80179F84
  cmps(c,0,(int32_t)c->r[0],2); // 80179F88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80179F8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80179F90
  c->r[30]=c->r[3]|c->r[3]; // 80179F94
  if (crb(c,2)) { goto L_8017A014; } // 80179F98
  if (!crb(c,0)) { goto L_80179FB0; } // 80179F9C
  cmps(c,0,(int32_t)c->r[0],0); // 80179FA0
  if (crb(c,2)) { goto L_80179FBC; } // 80179FA4
  if (!crb(c,0)) { goto L_80179FD8; } // 80179FA8
  goto L_8017A088; // 80179FAC
L_80179FB0:;
  cmps(c,0,(int32_t)c->r[0],4); // 80179FB0
  if (!crb(c,0)) { goto L_8017A088; } // 80179FB4
  goto L_8017A050; // 80179FB8
L_80179FBC:;
  c->r[4]=0u+0x803A0000u; // 80179FBC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80179FC0
  c->r[4]=c->r[4]+0x00003568u; // 80179FC4
  c->r[5]=0u+0x00000000u; // 80179FC8
  c->r[4]=c->r[4]+0x000000ACu; // 80179FCC
  c->lr=0x80179FD4u; f_801E3A84(c); // 80179FD0
  goto L_8017A088; // 80179FD4
L_80179FD8:;
  c->r[31]=0u+0x803A0000u; // 80179FD8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80179FDC
  c->r[31]=c->r[31]+0x00003568u; // 80179FE0
  c->r[5]=0u+0x00000001u; // 80179FE4
  c->r[4]=c->r[31]+0x000000ACu; // 80179FE8
  c->lr=0x80179FF0u; f_801E3A84(c); // 80179FEC
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179FF0
  c->r[4]=c->r[31]+0x000000B9u; // 80179FF4
  c->r[5]=0u+0x00000001u; // 80179FF8
  c->lr=0x8017A000u; f_801E3A84(c); // 80179FFC
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A000
  c->r[4]=c->r[31]+0x000000C6u; // 8017A004
  c->r[5]=0u+0x00000000u; // 8017A008
  c->lr=0x8017A010u; f_801E3A84(c); // 8017A00C
  goto L_8017A088; // 8017A010
L_8017A014:;
  c->r[31]=0u+0x803A0000u; // 8017A014
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017A018
  c->r[31]=c->r[31]+0x00003568u; // 8017A01C
  c->r[5]=0u+0x00000001u; // 8017A020
  c->r[4]=c->r[31]+0x000000ACu; // 8017A024
  c->lr=0x8017A02Cu; f_801E3A84(c); // 8017A028
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A02C
  c->r[4]=c->r[31]+0x000000B9u; // 8017A030
  c->r[5]=0u+0x00000000u; // 8017A034
  c->lr=0x8017A03Cu; f_801E3A84(c); // 8017A038
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A03C
  c->r[4]=c->r[31]+0x000000C6u; // 8017A040
  c->r[5]=0u+0x00000001u; // 8017A044
  c->lr=0x8017A04Cu; f_801E3A84(c); // 8017A048
  goto L_8017A088; // 8017A04C
L_8017A050:;
  c->r[31]=0u+0x803A0000u; // 8017A050
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017A054
  c->r[31]=c->r[31]+0x00003568u; // 8017A058
  c->r[5]=0u+0x00000001u; // 8017A05C
  c->r[4]=c->r[31]+0x000000ACu; // 8017A060
  c->lr=0x8017A068u; f_801E3A84(c); // 8017A064
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A068
  c->r[4]=c->r[31]+0x000000B9u; // 8017A06C
  c->r[5]=0u+0x00000000u; // 8017A070
  c->lr=0x8017A078u; f_801E3A84(c); // 8017A074
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A078
  c->r[4]=c->r[31]+0x000000C6u; // 8017A07C
  c->r[5]=0u+0x00000000u; // 8017A080
  c->lr=0x8017A088u; f_801E3A84(c); // 8017A084
L_8017A088:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017A088
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017A08C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017A090
  c->lr=c->r[0]; // 8017A094
  c->r[1]=c->r[1]+0x00000010u; // 8017A098
  return; // 8017A09C
}

// fn_8017A0A0
void f_8017A0A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A0A0
  c->r[0]=c->lr; // 8017A0A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017A0A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8017A0AC
  cmps(c,0,(int32_t)c->r[0],3); // 8017A0B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017A0B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017A0B8
  c->r[30]=c->r[3]|c->r[3]; // 8017A0BC
  if (crb(c,2)) { goto L_8017A204; } // 8017A0C0
  if (!crb(c,0)) { goto L_8017A0E0; } // 8017A0C4
  cmps(c,0,(int32_t)c->r[0],1); // 8017A0C8
  if (crb(c,2)) { goto L_8017A14C; } // 8017A0CC
  if (!crb(c,0)) { goto L_8017A1A8; } // 8017A0D0
  cmps(c,0,(int32_t)c->r[0],0); // 8017A0D4
  if (!crb(c,0)) { goto L_8017A0F0; } // 8017A0D8
  goto L_8017A314; // 8017A0DC
L_8017A0E0:;
  cmps(c,0,(int32_t)c->r[0],5); // 8017A0E0
  if (crb(c,2)) { goto L_8017A2BC; } // 8017A0E4
  if (!crb(c,0)) { goto L_8017A314; } // 8017A0E8
  goto L_8017A260; // 8017A0EC
L_8017A0F0:;
  c->r[31]=0u+0x803A0000u; // 8017A0F0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017A0F4
  c->r[31]=c->r[31]+0x00003568u; // 8017A0F8
  c->r[5]=0u+0x00000000u; // 8017A0FC
  c->r[4]=c->r[31]+0x000000D3u; // 8017A100
  c->lr=0x8017A108u; f_801E3A84(c); // 8017A104
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A108
  c->r[4]=c->r[31]+0x000000E0u; // 8017A10C
  c->r[5]=0u+0x00000000u; // 8017A110
  c->lr=0x8017A118u; f_801E3A84(c); // 8017A114
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A118
  c->r[4]=c->r[31]+0x000000EDu; // 8017A11C
  c->r[5]=0u+0x00000000u; // 8017A120
  c->lr=0x8017A128u; f_801E3A84(c); // 8017A124
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A128
  c->r[4]=c->r[31]+0x000000FAu; // 8017A12C
  c->r[5]=0u+0x00000000u; // 8017A130
  c->lr=0x8017A138u; f_801E3A84(c); // 8017A134
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A138
  c->r[4]=c->r[31]+0x00000107u; // 8017A13C
  c->r[5]=0u+0x00000000u; // 8017A140
  c->lr=0x8017A148u; f_801E3A84(c); // 8017A144
  goto L_8017A314; // 8017A148
L_8017A14C:;
  c->r[31]=0u+0x803A0000u; // 8017A14C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017A150
  c->r[31]=c->r[31]+0x00003568u; // 8017A154
  c->r[5]=0u+0x00000001u; // 8017A158
  c->r[4]=c->r[31]+0x000000D3u; // 8017A15C
  c->lr=0x8017A164u; f_801E3A84(c); // 8017A160
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A164
  c->r[4]=c->r[31]+0x000000E0u; // 8017A168
  c->r[5]=0u+0x00000000u; // 8017A16C
  c->lr=0x8017A174u; f_801E3A84(c); // 8017A170
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A174
  c->r[4]=c->r[31]+0x000000EDu; // 8017A178
  c->r[5]=0u+0x00000000u; // 8017A17C
  c->lr=0x8017A184u; f_801E3A84(c); // 8017A180
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A184
  c->r[4]=c->r[31]+0x000000FAu; // 8017A188
  c->r[5]=0u+0x00000000u; // 8017A18C
  c->lr=0x8017A194u; f_801E3A84(c); // 8017A190
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A194
  c->r[4]=c->r[31]+0x00000107u; // 8017A198
  c->r[5]=0u+0x00000000u; // 8017A19C
  c->lr=0x8017A1A4u; f_801E3A84(c); // 8017A1A0
  goto L_8017A314; // 8017A1A4
L_8017A1A8:;
  c->r[31]=0u+0x803A0000u; // 8017A1A8
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017A1AC
  c->r[31]=c->r[31]+0x00003568u; // 8017A1B0
  c->r[5]=0u+0x00000001u; // 8017A1B4
  c->r[4]=c->r[31]+0x000000D3u; // 8017A1B8
  c->lr=0x8017A1C0u; f_801E3A84(c); // 8017A1BC
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A1C0
  c->r[4]=c->r[31]+0x000000E0u; // 8017A1C4
  c->r[5]=0u+0x00000001u; // 8017A1C8
  c->lr=0x8017A1D0u; f_801E3A84(c); // 8017A1CC
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A1D0
  c->r[4]=c->r[31]+0x000000EDu; // 8017A1D4
  c->r[5]=0u+0x00000000u; // 8017A1D8
  c->lr=0x8017A1E0u; f_801E3A84(c); // 8017A1DC
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A1E0
  c->r[4]=c->r[31]+0x000000FAu; // 8017A1E4
  c->r[5]=0u+0x00000000u; // 8017A1E8
  c->lr=0x8017A1F0u; f_801E3A84(c); // 8017A1EC
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A1F0
  c->r[4]=c->r[31]+0x00000107u; // 8017A1F4
  c->r[5]=0u+0x00000000u; // 8017A1F8
  c->lr=0x8017A200u; f_801E3A84(c); // 8017A1FC
  goto L_8017A314; // 8017A200
L_8017A204:;
  c->r[31]=0u+0x803A0000u; // 8017A204
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017A208
  c->r[31]=c->r[31]+0x00003568u; // 8017A20C
  c->r[5]=0u+0x00000001u; // 8017A210
  c->r[4]=c->r[31]+0x000000D3u; // 8017A214
  c->lr=0x8017A21Cu; f_801E3A84(c); // 8017A218
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A21C
  c->r[4]=c->r[31]+0x000000E0u; // 8017A220
  c->r[5]=0u+0x00000001u; // 8017A224
  c->lr=0x8017A22Cu; f_801E3A84(c); // 8017A228
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A22C
  c->r[4]=c->r[31]+0x000000EDu; // 8017A230
  c->r[5]=0u+0x00000001u; // 8017A234
  c->lr=0x8017A23Cu; f_801E3A84(c); // 8017A238
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A23C
  c->r[4]=c->r[31]+0x000000FAu; // 8017A240
  c->r[5]=0u+0x00000000u; // 8017A244
  c->lr=0x8017A24Cu; f_801E3A84(c); // 8017A248
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A24C
  c->r[4]=c->r[31]+0x00000107u; // 8017A250
  c->r[5]=0u+0x00000000u; // 8017A254
  c->lr=0x8017A25Cu; f_801E3A84(c); // 8017A258
  goto L_8017A314; // 8017A25C
L_8017A260:;
  c->r[31]=0u+0x803A0000u; // 8017A260
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017A264
  c->r[31]=c->r[31]+0x00003568u; // 8017A268
  c->r[5]=0u+0x00000001u; // 8017A26C
  c->r[4]=c->r[31]+0x000000D3u; // 8017A270
  c->lr=0x8017A278u; f_801E3A84(c); // 8017A274
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A278
  c->r[4]=c->r[31]+0x000000E0u; // 8017A27C
  c->r[5]=0u+0x00000001u; // 8017A280
  c->lr=0x8017A288u; f_801E3A84(c); // 8017A284
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A288
  c->r[4]=c->r[31]+0x000000EDu; // 8017A28C
  c->r[5]=0u+0x00000001u; // 8017A290
  c->lr=0x8017A298u; f_801E3A84(c); // 8017A294
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A298
  c->r[4]=c->r[31]+0x000000FAu; // 8017A29C
  c->r[5]=0u+0x00000001u; // 8017A2A0
  c->lr=0x8017A2A8u; f_801E3A84(c); // 8017A2A4
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A2A8
  c->r[4]=c->r[31]+0x00000107u; // 8017A2AC
  c->r[5]=0u+0x00000000u; // 8017A2B0
  c->lr=0x8017A2B8u; f_801E3A84(c); // 8017A2B4
  goto L_8017A314; // 8017A2B8
L_8017A2BC:;
  c->r[31]=0u+0x803A0000u; // 8017A2BC
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017A2C0
  c->r[31]=c->r[31]+0x00003568u; // 8017A2C4
  c->r[5]=0u+0x00000001u; // 8017A2C8
  c->r[4]=c->r[31]+0x000000D3u; // 8017A2CC
  c->lr=0x8017A2D4u; f_801E3A84(c); // 8017A2D0
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A2D4
  c->r[4]=c->r[31]+0x000000E0u; // 8017A2D8
  c->r[5]=0u+0x00000001u; // 8017A2DC
  c->lr=0x8017A2E4u; f_801E3A84(c); // 8017A2E0
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A2E4
  c->r[4]=c->r[31]+0x000000EDu; // 8017A2E8
  c->r[5]=0u+0x00000001u; // 8017A2EC
  c->lr=0x8017A2F4u; f_801E3A84(c); // 8017A2F0
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A2F4
  c->r[4]=c->r[31]+0x000000FAu; // 8017A2F8
  c->r[5]=0u+0x00000001u; // 8017A2FC
  c->lr=0x8017A304u; f_801E3A84(c); // 8017A300
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A304
  c->r[4]=c->r[31]+0x00000107u; // 8017A308
  c->r[5]=0u+0x00000001u; // 8017A30C
  c->lr=0x8017A314u; f_801E3A84(c); // 8017A310
L_8017A314:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017A314
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017A318
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017A31C
  c->lr=c->r[0]; // 8017A320
  c->r[1]=c->r[1]+0x00000010u; // 8017A324
  return; // 8017A328
}

// fn_8017A32C
void f_8017A32C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A32C
  c->r[0]=c->lr; // 8017A330
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017A334
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017A338
  c->r[31]=0u+0x803A0000u; // 8017A33C
  c->r[31]=c->r[31]+0x00003568u; // 8017A340
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017A344
  c->r[30]=c->r[5]|c->r[5]; // 8017A348
  c->r[5]=c->r[4]|c->r[4]; // 8017A34C
  c->r[4]=c->r[31]+0x00000114u; // 8017A350
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017A354
  c->r[29]=c->r[3]|c->r[3]; // 8017A358
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017A35C
  c->lr=0x8017A364u; f_801E3A84(c); // 8017A360
  c->r[3]=R32(c->r[29]+0x00000000u); // 8017A364
  c->r[5]=c->r[30]|c->r[30]; // 8017A368
  c->r[4]=c->r[31]+0x00000121u; // 8017A36C
  c->lr=0x8017A374u; f_801E3A84(c); // 8017A370
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017A374
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017A378
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017A37C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017A380
  c->lr=c->r[0]; // 8017A384
  c->r[1]=c->r[1]+0x00000020u; // 8017A388
  return; // 8017A38C
}

// fn_8017A390
void f_8017A390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A390
  c->r[0]=c->lr; // 8017A394
  c->r[4]=0u+0x00000001u; // 8017A398
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017A39C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017A3A0
  c->r[31]=c->r[3]|c->r[3]; // 8017A3A4
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017A3A8
  c->lr=0x8017A3B0u; f_801E3BC0(c); // 8017A3AC
  c->r[3]=0u+0x805D0000u; // 8017A3B0
  c->r[4]=R16(c->r[31]+0x0000002Au); // 8017A3B4
  c->r[3]=c->r[3]+0x00001BBCu; // 8017A3B8
  c->r[5]=0u+0x00000001u; // 8017A3BC
  c->lr=0x8017A3C4u; f_8017A3D8(c); // 8017A3C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017A3C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017A3C8
  c->lr=c->r[0]; // 8017A3CC
  c->r[1]=c->r[1]+0x00000010u; // 8017A3D0
  return; // 8017A3D4
}

// fn_8017A3D8
void f_8017A3D8(Ctx* __restrict c) {
  cmpu(c,0,c->r[4],0x00000010u); // 8017A3D8
  if (!crb(c,0)) return; // 8017A3DC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)492); // 8017A3E0
  c->r[4]=c->r[5]|c->r[5]; // 8017A3E4
  c->r[3]=c->r[3]+c->r[0]; // 8017A3E8
  c->r[3]=c->r[3]+0x00000038u; // 8017A3EC
  goto L_8017A3F8; // 8017A3F0
  return; // 8017A3F4
L_8017A3F8:;
  W8(c->r[3]+0x000001D3u,c->r[4]); // 8017A3F8
  return; // 8017A3FC
}

// fn_8017A400
void f_8017A400(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A400
  c->r[0]=c->lr; // 8017A404
  c->r[4]=0u+0x00000000u; // 8017A408
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017A40C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017A410
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017A414
  c->r[30]=c->r[3]|c->r[3]; // 8017A418
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017A41C
  c->lr=0x8017A424u; f_801E3BC0(c); // 8017A420
  c->r[3]=c->r[30]|c->r[30]; // 8017A424
  c->lr=0x8017A42Cu; f_8017ADDC(c); // 8017A428
  c->r[31]=0u+0x805D0000u; // 8017A42C
  c->r[4]=R16(c->r[30]+0x0000002Au); // 8017A430
  c->r[3]=c->r[31]+0x00001BBCu; // 8017A434
  c->r[5]=0u+0x00000000u; // 8017A438
  c->lr=0x8017A440u; f_8017A3D8(c); // 8017A43C
  c->r[4]=R16(c->r[30]+0x0000002Cu); // 8017A440
  c->r[3]=c->r[31]+0x00001BBCu; // 8017A444
  c->r[5]=0u+0x00000000u; // 8017A448
  c->lr=0x8017A450u; f_8017A3D8(c); // 8017A44C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017A450
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017A454
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017A458
  c->lr=c->r[0]; // 8017A45C
  c->r[1]=c->r[1]+0x00000010u; // 8017A460
  return; // 8017A464
}

// fn_8017A468
void f_8017A468(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A468
  c->r[0]=c->lr; // 8017A46C
  c->r[5]=0u+0x43300000u; // 8017A470
  c->r[4]=0u+0x88890000u; // 8017A474
  W32(c->r[1]+0x00000084u,c->r[0]); // 8017A478
  c->r[4]=c->r[4]+0xFFFF8889u; // 8017A47C
  {uint32_t ea=c->r[2]+0xFFFFCC38u; c->f[7]=RF64(ea);} // 8017A480
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8017A484
  c->r[31]=c->r[3]|c->r[3]; // 8017A488
  {uint32_t ea=c->r[2]+0xFFFFCC2Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8017A48C
  W32(c->r[1]+0x00000078u,c->r[30]); // 8017A490
  {uint32_t ea=c->r[2]+0xFFFFCC30u; c->f[6]=c->ps1[6]=RF32(ea);} // 8017A494
  W32(c->r[1]+0x00000074u,c->r[29]); // 8017A498
  c->r[7]=R8(c->r[3]+0x00000028u); // 8017A49C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[12]=c->ps1[12]=RF32(ea);} // 8017A4A0
  c->r[0]=addc(c,~c->r[7],0x0000000Fu,1); // 8017A4A4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[11]=c->ps1[11]=RF32(ea);} // 8017A4A8
  c->r[6]=c->r[0]^0x80000000u; // 8017A4AC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 8017A4B0
  W32(c->r[1]+0x00000054u,c->r[6]); // 8017A4B4
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)150); // 8017A4B8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 8017A4BC
  cmpu(c,0,c->r[7],0x0000000Fu); // 8017A4C0
  W32(c->r[1]+0x00000050u,c->r[5]); // 8017A4C4
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8017A4C8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 8017A4CC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 8017A4D0
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 8017A4D4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[7]); // 8017A4D8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 8017A4DC
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 8017A4E0
  W32(c->r[1]+0x00000058u,c->r[5]); // 8017A4E4
  c->r[0]=c->r[4]+c->r[0]; // 8017A4E8
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=RF64(ea);} // 8017A4EC
  c->r[0]=sraw(c,c->r[0],3); // 8017A4F0
  W32(c->r[1]+0x00000064u,c->r[6]); // 8017A4F4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[7]); // 8017A4F8
  {uint32_t ea=c->r[2]+0xFFFFCC34u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A4FC
  W32(c->r[1]+0x00000060u,c->r[5]); // 8017A500
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[6]); // 8017A504
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8017A508
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=RF64(ea);} // 8017A50C
  c->r[0]=c->r[0]+c->r[4]; // 8017A510
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[12]);} // 8017A514
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8017A518
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[7]); // 8017A51C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[7]=c->ps1[7]=RF32(ea);} // 8017A520
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 8017A524
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[11]);} // 8017A528
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[3]); // 8017A52C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A530
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8017A534
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A538
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[6]); // 8017A53C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[10]);} // 8017A540
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[9]);} // 8017A544
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[8]);} // 8017A548
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[7]);} // 8017A54C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[4]);} // 8017A550
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[6]); // 8017A554
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 8017A558
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8017A55C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 8017A560
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8017A564
  if (!crb(c,2)) { goto L_8017A57C; } // 8017A568
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[5]);} // 8017A56C
  c->r[29]=0u+0xFFFFFF96u; // 8017A570
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 8017A574
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 8017A578
L_8017A57C:;
  c->r[5]=R32(c->r[1]+0x00000044u); // 8017A57C
  c->r[30]=0u+0x803A0000u; // 8017A580
  c->r[6]=R32(c->r[1]+0x00000048u); // 8017A584
  c->r[30]=c->r[30]+0x00003568u; // 8017A588
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8017A58C
  c->r[4]=c->r[30]+0x0000000Eu; // 8017A590
  W32(c->r[1]+0x00000020u,c->r[5]); // 8017A594
  c->r[5]=c->r[1]+0x00000020u; // 8017A598
  W32(c->r[1]+0x00000024u,c->r[6]); // 8017A59C
  W32(c->r[1]+0x00000028u,c->r[0]); // 8017A5A0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017A5A4
  c->lr=0x8017A5ACu; f_801E2ACC(c); // 8017A5A8
  c->r[6]=R32(c->r[1]+0x00000038u); // 8017A5AC
  c->r[4]=c->r[30]|c->r[30]; // 8017A5B0
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 8017A5B4
  c->r[5]=c->r[1]+0x00000014u; // 8017A5B8
  c->r[0]=R32(c->r[1]+0x00000040u); // 8017A5BC
  W32(c->r[1]+0x00000014u,c->r[6]); // 8017A5C0
  W32(c->r[1]+0x00000018u,c->r[3]); // 8017A5C4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017A5C8
  c->r[3]=R32(c->r[31]+0x00000000u); // 8017A5CC
  c->lr=0x8017A5D4u; f_801E2ACC(c); // 8017A5D0
  c->r[6]=R32(c->r[1]+0x0000002Cu); // 8017A5D4
  c->r[4]=c->r[30]+0x0000001Cu; // 8017A5D8
  c->r[3]=R32(c->r[1]+0x00000030u); // 8017A5DC
  c->r[5]=c->r[1]+0x00000008u; // 8017A5E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017A5E4
  W32(c->r[1]+0x00000008u,c->r[6]); // 8017A5E8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8017A5EC
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017A5F0
  c->r[3]=R32(c->r[31]+0x00000000u); // 8017A5F4
  c->lr=0x8017A5FCu; f_801E2ACC(c); // 8017A5F8
  c->r[3]=R32(c->r[31]+0x00000000u); // 8017A5FC
  c->r[4]=c->r[30]+0x0000012Eu; // 8017A600
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 8017A604
  c->lr=0x8017A60Cu; f_801E3F8C(c); // 8017A608
  c->r[3]=R8(c->r[31]+0x00000028u); // 8017A60C
  cmpu(c,0,c->r[3],0x0000000Fu); // 8017A610
  if (crb(c,0)) { goto L_8017A628; } // 8017A614
  c->r[0]=0u+0x00000000u; // 8017A618
  c->r[3]=0u+0x00000001u; // 8017A61C
  W8(c->r[31]+0x00000028u,c->r[0]); // 8017A620
  goto L_8017A634; // 8017A624
L_8017A628:;
  c->r[0]=c->r[3]+0x00000001u; // 8017A628
  c->r[3]=0u+0x00000000u; // 8017A62C
  W8(c->r[31]+0x00000028u,c->r[0]); // 8017A630
L_8017A634:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 8017A634
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 8017A638
  c->r[30]=R32(c->r[1]+0x00000078u); // 8017A63C
  c->r[29]=R32(c->r[1]+0x00000074u); // 8017A640
  c->lr=c->r[0]; // 8017A644
  c->r[1]=c->r[1]+0x00000080u; // 8017A648
  return; // 8017A64C
}

// fn_8017A650
void f_8017A650(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A650
  c->r[0]=c->lr; // 8017A654
  W32(c->r[1]+0x00000094u,c->r[0]); // 8017A658
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8017A65C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8017A660
  c->r[5]=0u+0x43300000u; // 8017A664
  c->r[4]=0u+0x88890000u; // 8017A668
  {uint32_t ea=c->r[2]+0xFFFFCC40u; c->f[3]=RF64(ea);} // 8017A66C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8017A670
  c->r[4]=c->r[4]+0xFFFF8889u; // 8017A674
  {uint32_t ea=c->r[2]+0xFFFFCC2Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 8017A678
  c->r[31]=c->r[3]|c->r[3]; // 8017A67C
  W32(c->r[1]+0x00000078u,c->r[30]); // 8017A680
  {uint32_t ea=c->r[2]+0xFFFFCC34u; c->f[4]=c->ps1[4]=RF32(ea);} // 8017A684
  W32(c->r[1]+0x00000074u,c->r[29]); // 8017A688
  {uint32_t ea=c->r[2]+0xFFFFCC30u; c->f[7]=c->ps1[7]=RF32(ea);} // 8017A68C
  c->r[6]=R8(c->r[3]+0x00000028u); // 8017A690
  {uint32_t ea=c->r[3]+0x00000014u; c->f[31]=c->ps1[31]=RF32(ea);} // 8017A694
  W32(c->r[1]+0x00000054u,c->r[6]); // 8017A698
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)150); // 8017A69C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[13]=c->ps1[13]=RF32(ea);} // 8017A6A0
  cmpu(c,0,c->r[6],0x0000000Fu); // 8017A6A4
  W32(c->r[1]+0x00000050u,c->r[5]); // 8017A6A8
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8017A6AC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 8017A6B0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 8017A6B4
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 8017A6B8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 8017A6BC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 8017A6C0
  W32(c->r[1]+0x00000058u,c->r[5]); // 8017A6C4
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[1]); // 8017A6C8
  c->r[0]=c->r[4]+c->r[0]; // 8017A6CC
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 8017A6D0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=RF64(ea);} // 8017A6D4
  c->r[0]=sraw(c,c->r[0],3); // 8017A6D8
  W32(c->r[1]+0x00000064u,c->r[6]); // 8017A6DC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 8017A6E0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 8017A6E4
  W32(c->r[1]+0x00000060u,c->r[5]); // 8017A6E8
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8017A6EC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[7]); // 8017A6F0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 8017A6F4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 8017A6F8
  c->r[0]=c->r[0]+c->r[4]; // 8017A6FC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 8017A700
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8017A704
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8017A708
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A70C
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 8017A710
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[31]);} // 8017A714
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[2]); // 8017A718
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 8017A71C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[7]); // 8017A720
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[13]);} // 8017A724
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[12]);} // 8017A728
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[11]);} // 8017A72C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[10]);} // 8017A730
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[9]);} // 8017A734
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[7]); // 8017A738
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 8017A73C
  c->f[1]=c->ps1[1]=S(c->f[5]-c->f[1]); // 8017A740
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 8017A744
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 8017A748
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8017A74C
  if (!crb(c,2)) { goto L_8017A770; } // 8017A750
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[6]); // 8017A754
  c->r[29]=0u+0xFFFFFF96u; // 8017A758
  c->f[1]=c->ps1[1]=S(c->f[5]-c->f[8]); // 8017A75C
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[4]); // 8017A760
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 8017A764
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 8017A768
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8017A76C
L_8017A770:;
  c->r[5]=R32(c->r[1]+0x00000044u); // 8017A770
  c->r[30]=0u+0x803A0000u; // 8017A774
  c->r[6]=R32(c->r[1]+0x00000048u); // 8017A778
  c->r[30]=c->r[30]+0x00003568u; // 8017A77C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8017A780
  c->r[4]=c->r[30]+0x0000000Eu; // 8017A784
  W32(c->r[1]+0x00000020u,c->r[5]); // 8017A788
  c->r[5]=c->r[1]+0x00000020u; // 8017A78C
  W32(c->r[1]+0x00000024u,c->r[6]); // 8017A790
  W32(c->r[1]+0x00000028u,c->r[0]); // 8017A794
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017A798
  c->lr=0x8017A7A0u; f_801E2ACC(c); // 8017A79C
  c->r[6]=R32(c->r[1]+0x00000038u); // 8017A7A0
  c->r[4]=c->r[30]|c->r[30]; // 8017A7A4
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 8017A7A8
  c->r[5]=c->r[1]+0x00000014u; // 8017A7AC
  c->r[0]=R32(c->r[1]+0x00000040u); // 8017A7B0
  W32(c->r[1]+0x00000014u,c->r[6]); // 8017A7B4
  W32(c->r[1]+0x00000018u,c->r[3]); // 8017A7B8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017A7BC
  c->r[3]=R32(c->r[31]+0x00000000u); // 8017A7C0
  c->lr=0x8017A7C8u; f_801E2ACC(c); // 8017A7C4
  c->r[6]=R32(c->r[1]+0x0000002Cu); // 8017A7C8
  c->r[4]=c->r[30]+0x0000001Cu; // 8017A7CC
  c->r[3]=R32(c->r[1]+0x00000030u); // 8017A7D0
  c->r[5]=c->r[1]+0x00000008u; // 8017A7D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017A7D8
  W32(c->r[1]+0x00000008u,c->r[6]); // 8017A7DC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8017A7E0
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017A7E4
  c->r[3]=R32(c->r[31]+0x00000000u); // 8017A7E8
  c->lr=0x8017A7F0u; f_801E2ACC(c); // 8017A7EC
  c->r[0]=addc(c,~c->r[29],0x00000096u,1); // 8017A7F0
  c->r[3]=R32(c->r[31]+0x00000000u); // 8017A7F4
  c->r[4]=c->r[30]+0x0000012Eu; // 8017A7F8
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 8017A7FC
  c->lr=0x8017A804u; f_801E3F8C(c); // 8017A800
  c->r[3]=R8(c->r[31]+0x00000028u); // 8017A804
  cmpu(c,0,c->r[3],0x0000000Fu); // 8017A808
  if (crb(c,0)) { goto L_8017A820; } // 8017A80C
  c->r[0]=0u+0x00000000u; // 8017A810
  c->r[3]=0u+0x00000001u; // 8017A814
  W8(c->r[31]+0x00000028u,c->r[0]); // 8017A818
  goto L_8017A82C; // 8017A81C
L_8017A820:;
  c->r[0]=c->r[3]+0x00000001u; // 8017A820
  c->r[3]=0u+0x00000000u; // 8017A824
  W8(c->r[31]+0x00000028u,c->r[0]); // 8017A828
L_8017A82C:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8017A82C
  c->r[0]=R32(c->r[1]+0x00000094u); // 8017A830
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8017A834
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 8017A838
  c->r[30]=R32(c->r[1]+0x00000078u); // 8017A83C
  c->r[29]=R32(c->r[1]+0x00000074u); // 8017A840
  c->lr=c->r[0]; // 8017A844
  c->r[1]=c->r[1]+0x00000090u; // 8017A848
  return; // 8017A84C
}

// fn_8017A850
void f_8017A850(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A850
  c->r[0]=c->lr; // 8017A854
  W32(c->r[1]+0x00000054u,c->r[0]); // 8017A858
  c->r[0]=0u+0x43300000u; // 8017A85C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8017A860
  W32(c->r[1]+0x00000048u,c->r[30]); // 8017A864
  c->r[30]=c->r[3]|c->r[3]; // 8017A868
  c->r[4]=R8(c->r[3]+0x00000028u); // 8017A86C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A870
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017A874
  cmpu(c,0,c->r[4],0x00000010u); // 8017A878
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A87C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A880
  W32(c->r[1]+0x00000038u,c->r[0]); // 8017A884
  W32(c->r[1]+0x00000040u,c->r[0]); // 8017A888
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[3]);} // 8017A88C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 8017A890
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8017A894
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8017A898
  if (!crb(c,0)) { goto L_8017A908; } // 8017A89C
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8017A8A0
  cmpu(c,0,c->r[4],0x0000000Fu); // 8017A8A4
  {uint32_t ea=c->r[2]+0xFFFFCC40u; c->f[2]=RF64(ea);} // 8017A8A8
  W32(c->r[1]+0x00000044u,c->r[4]); // 8017A8AC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8017A8B0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8017A8B4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8017A8B8
  {uint32_t ea=c->r[2]+0xFFFFCC2Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8017A8BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8017A8C0
  {uint32_t ea=c->r[2]+0xFFFFCC30u; c->f[4]=c->ps1[4]=RF32(ea);} // 8017A8C4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A8C8
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 8017A8CC
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 8017A8D0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017A8D4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[4]); // 8017A8D8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 8017A8DC
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8017A8E0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8017A8E4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8017A8E8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8017A8EC
  if (!crb(c,2)) { goto L_8017A968; } // 8017A8F0
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[3]); // 8017A8F4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[5]); // 8017A8F8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8017A8FC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8017A900
  goto L_8017A968; // 8017A904
L_8017A908:;
  c->r[0]=addc(c,~c->r[4],0x0000001Fu,1); // 8017A908
  {uint32_t ea=c->r[2]+0xFFFFCC40u; c->f[3]=RF64(ea);} // 8017A90C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8017A910
  cmpu(c,0,c->r[4],0x0000001Fu); // 8017A914
  {uint32_t ea=c->r[2]+0xFFFFCC2Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8017A918
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017A91C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8017A920
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 8017A924
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 8017A928
  {uint32_t ea=c->r[2]+0xFFFFCC30u; c->f[4]=c->ps1[4]=RF32(ea);} // 8017A92C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8017A930
  {uint32_t ea=c->r[3]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A934
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A938
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 8017A93C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 8017A940
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[4]); // 8017A944
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 8017A948
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8017A94C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8017A950
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 8017A954
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8017A958
  if (!crb(c,2)) { goto L_8017A968; } // 8017A95C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[3]);} // 8017A960
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 8017A964
L_8017A968:;
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 8017A968
  c->r[31]=0u+0x803A0000u; // 8017A96C
  c->r[6]=R32(c->r[1]+0x00000030u); // 8017A970
  c->r[31]=c->r[31]+0x00003568u; // 8017A974
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017A978
  c->r[4]=c->r[31]+0x0000000Eu; // 8017A97C
  W32(c->r[1]+0x00000014u,c->r[5]); // 8017A980
  c->r[5]=c->r[1]+0x00000014u; // 8017A984
  W32(c->r[1]+0x00000018u,c->r[6]); // 8017A988
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017A98C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017A990
  c->lr=0x8017A998u; f_801E2ACC(c); // 8017A994
  c->r[6]=R32(c->r[1]+0x00000020u); // 8017A998
  c->r[4]=c->r[31]|c->r[31]; // 8017A99C
  c->r[3]=R32(c->r[1]+0x00000024u); // 8017A9A0
  c->r[5]=c->r[1]+0x00000008u; // 8017A9A4
  c->r[0]=R32(c->r[1]+0x00000028u); // 8017A9A8
  W32(c->r[1]+0x00000008u,c->r[6]); // 8017A9AC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8017A9B0
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017A9B4
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A9B8
  c->lr=0x8017A9C0u; f_801E2ACC(c); // 8017A9BC
  c->r[3]=R8(c->r[30]+0x00000028u); // 8017A9C0
  cmpu(c,0,c->r[3],0x0000001Fu); // 8017A9C4
  if (crb(c,0)) { goto L_8017A9DC; } // 8017A9C8
  c->r[0]=0u+0x00000000u; // 8017A9CC
  c->r[3]=0u+0x00000002u; // 8017A9D0
  W8(c->r[30]+0x00000028u,c->r[0]); // 8017A9D4
  goto L_8017A9F4; // 8017A9D8
L_8017A9DC:;
  c->r[0]=c->r[3]+0x00000001u; // 8017A9DC
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8017A9E0
  W8(c->r[30]+0x00000028u,c->r[0]); // 8017A9E4
  c->r[0]=c->r[3]+0xFFFFFFF0u; // 8017A9E8
  c->r[0]=cntlz(c->r[0]); // 8017A9EC
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 8017A9F0
L_8017A9F4:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8017A9F4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8017A9F8
  c->r[30]=R32(c->r[1]+0x00000048u); // 8017A9FC
  c->lr=c->r[0]; // 8017AA00
  c->r[1]=c->r[1]+0x00000050u; // 8017AA04
  return; // 8017AA08
}

// fn_8017AA0C
void f_8017AA0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017AA0C
  c->r[0]=c->lr; // 8017AA10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017AA14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017AA18
  c->r[31]=0u+0x805D0000u; // 8017AA1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017AA20
  c->r[30]=c->r[3]|c->r[3]; // 8017AA24
  c->r[3]=c->r[31]+0xFFFFC6C0u; // 8017AA28
  c->lr=0x8017AA30u; f_8017AC90(c); // 8017AA2C
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 8017AA30
  if (crb(c,2)) { goto L_8017AA40; } // 8017AA34
  c->r[3]=0u+0x00000004u; // 8017AA38
  goto L_8017AC78; // 8017AA3C
L_8017AA40:;
  c->r[3]=c->r[31]+0xFFFFC6C0u; // 8017AA40
  c->lr=0x8017AA48u; f_8017AC90(c); // 8017AA44
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8017AA48
  c->r[0]=c->r[0]&0x00000005u; cr0(c,c->r[0]); // 8017AA4C
  if (crb(c,2)) { goto L_8017AA5C; } // 8017AA50
  c->r[3]=0u+0x00000005u; // 8017AA54
  goto L_8017AC78; // 8017AA58
L_8017AA5C:;
  c->r[31]=0u+0x803A0000u; // 8017AA5C
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AA60
  c->r[31]=c->r[31]+0x00003568u; // 8017AA64
  c->r[4]=c->r[31]+0x0000013Bu; // 8017AA68
  c->lr=0x8017AA70u; f_801E4404(c); // 8017AA6C
  cmps(c,0,(int32_t)c->r[3],0); // 8017AA70
  if (crb(c,2)) { goto L_8017AA94; } // 8017AA74
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AA78
  c->r[4]=c->r[31]+0x00000114u; // 8017AA7C
  c->lr=0x8017AA84u; f_801E3B30(c); // 8017AA80
  cmps(c,0,(int32_t)c->r[3],0); // 8017AA84
  if (crb(c,2)) { goto L_8017AC74; } // 8017AA88
  c->r[3]=0u+0x00000000u; // 8017AA8C
  goto L_8017AC78; // 8017AA90
L_8017AA94:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AA94
  c->r[4]=c->r[31]+0x00000148u; // 8017AA98
  c->lr=0x8017AAA0u; f_801E4404(c); // 8017AA9C
  cmps(c,0,(int32_t)c->r[3],0); // 8017AAA0
  if (crb(c,2)) { goto L_8017AAC4; } // 8017AAA4
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AAA8
  c->r[4]=c->r[31]+0x00000121u; // 8017AAAC
  c->lr=0x8017AAB4u; f_801E3B30(c); // 8017AAB0
  cmps(c,0,(int32_t)c->r[3],0); // 8017AAB4
  if (crb(c,2)) { goto L_8017AC74; } // 8017AAB8
  c->r[3]=0u+0x00000001u; // 8017AABC
  goto L_8017AC78; // 8017AAC0
L_8017AAC4:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AAC4
  c->r[4]=c->r[31]+0x000000B9u; // 8017AAC8
  c->lr=0x8017AAD0u; f_801E4404(c); // 8017AACC
  cmps(c,0,(int32_t)c->r[3],0); // 8017AAD0
  if (crb(c,2)) { goto L_8017AAF4; } // 8017AAD4
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AAD8
  c->r[4]=c->r[31]+0x000000ACu; // 8017AADC
  c->lr=0x8017AAE4u; f_801E3B30(c); // 8017AAE0
  cmps(c,0,(int32_t)c->r[3],0); // 8017AAE4
  if (crb(c,2)) { goto L_8017AC74; } // 8017AAE8
  c->r[3]=0u+0x00000002u; // 8017AAEC
  goto L_8017AC78; // 8017AAF0
L_8017AAF4:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AAF4
  c->r[4]=c->r[31]+0x00000155u; // 8017AAF8
  c->lr=0x8017AB00u; f_801E4404(c); // 8017AAFC
  cmps(c,0,(int32_t)c->r[3],0); // 8017AB00
  if (crb(c,2)) { goto L_8017AB24; } // 8017AB04
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AB08
  c->r[4]=c->r[31]+0x0000005Eu; // 8017AB0C
  c->lr=0x8017AB14u; f_801E3B30(c); // 8017AB10
  cmps(c,0,(int32_t)c->r[3],0); // 8017AB14
  if (crb(c,2)) { goto L_8017AC74; } // 8017AB18
  c->r[3]=0u+0x00000003u; // 8017AB1C
  goto L_8017AC78; // 8017AB20
L_8017AB24:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AB24
  c->r[4]=c->r[31]+0x00000164u; // 8017AB28
  c->lr=0x8017AB30u; f_801E4404(c); // 8017AB2C
  cmps(c,0,(int32_t)c->r[3],0); // 8017AB30
  if (crb(c,2)) { goto L_8017AB54; } // 8017AB34
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AB38
  c->r[4]=c->r[31]+0x00000092u; // 8017AB3C
  c->lr=0x8017AB44u; f_801E3B30(c); // 8017AB40
  cmps(c,0,(int32_t)c->r[3],0); // 8017AB44
  if (crb(c,2)) { goto L_8017AC74; } // 8017AB48
  c->r[3]=0u+0x00000003u; // 8017AB4C
  goto L_8017AC78; // 8017AB50
L_8017AB54:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AB54
  c->r[4]=c->r[31]+0x00000173u; // 8017AB58
  c->lr=0x8017AB60u; f_801E4404(c); // 8017AB5C
  cmps(c,0,(int32_t)c->r[3],0); // 8017AB60
  if (crb(c,2)) { goto L_8017AB84; } // 8017AB64
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AB68
  c->r[4]=c->r[31]+0x00000044u; // 8017AB6C
  c->lr=0x8017AB74u; f_801E3B30(c); // 8017AB70
  cmps(c,0,(int32_t)c->r[3],0); // 8017AB74
  if (crb(c,2)) { goto L_8017AC74; } // 8017AB78
  c->r[3]=0u+0x00000003u; // 8017AB7C
  goto L_8017AC78; // 8017AB80
L_8017AB84:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AB84
  c->r[4]=c->r[31]+0x00000182u; // 8017AB88
  c->lr=0x8017AB90u; f_801E4404(c); // 8017AB8C
  cmps(c,0,(int32_t)c->r[3],0); // 8017AB90
  if (crb(c,2)) { goto L_8017ABB4; } // 8017AB94
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AB98
  c->r[4]=c->r[31]+0x00000051u; // 8017AB9C
  c->lr=0x8017ABA4u; f_801E3B30(c); // 8017ABA0
  cmps(c,0,(int32_t)c->r[3],0); // 8017ABA4
  if (crb(c,2)) { goto L_8017AC74; } // 8017ABA8
  c->r[3]=0u+0x00000003u; // 8017ABAC
  goto L_8017AC78; // 8017ABB0
L_8017ABB4:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017ABB4
  c->r[4]=c->r[31]+0x00000191u; // 8017ABB8
  c->lr=0x8017ABC0u; f_801E4404(c); // 8017ABBC
  cmps(c,0,(int32_t)c->r[3],0); // 8017ABC0
  if (crb(c,2)) { goto L_8017ABE4; } // 8017ABC4
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017ABC8
  c->r[4]=c->r[31]+0x0000006Bu; // 8017ABCC
  c->lr=0x8017ABD4u; f_801E3B30(c); // 8017ABD0
  cmps(c,0,(int32_t)c->r[3],0); // 8017ABD4
  if (crb(c,2)) { goto L_8017AC74; } // 8017ABD8
  c->r[3]=0u+0x00000003u; // 8017ABDC
  goto L_8017AC78; // 8017ABE0
L_8017ABE4:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017ABE4
  c->r[4]=c->r[31]+0x000001A0u; // 8017ABE8
  c->lr=0x8017ABF0u; f_801E4404(c); // 8017ABEC
  cmps(c,0,(int32_t)c->r[3],0); // 8017ABF0
  if (crb(c,2)) { goto L_8017AC14; } // 8017ABF4
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017ABF8
  c->r[4]=c->r[31]+0x00000078u; // 8017ABFC
  c->lr=0x8017AC04u; f_801E3B30(c); // 8017AC00
  cmps(c,0,(int32_t)c->r[3],0); // 8017AC04
  if (crb(c,2)) { goto L_8017AC74; } // 8017AC08
  c->r[3]=0u+0x00000003u; // 8017AC0C
  goto L_8017AC78; // 8017AC10
L_8017AC14:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AC14
  c->r[4]=c->r[31]+0x000001AFu; // 8017AC18
  c->lr=0x8017AC20u; f_801E4404(c); // 8017AC1C
  cmps(c,0,(int32_t)c->r[3],0); // 8017AC20
  if (crb(c,2)) { goto L_8017AC44; } // 8017AC24
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AC28
  c->r[4]=c->r[31]+0x00000085u; // 8017AC2C
  c->lr=0x8017AC34u; f_801E3B30(c); // 8017AC30
  cmps(c,0,(int32_t)c->r[3],0); // 8017AC34
  if (crb(c,2)) { goto L_8017AC74; } // 8017AC38
  c->r[3]=0u+0x00000003u; // 8017AC3C
  goto L_8017AC78; // 8017AC40
L_8017AC44:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AC44
  c->r[4]=c->r[31]+0x000001BEu; // 8017AC48
  c->lr=0x8017AC50u; f_801E4404(c); // 8017AC4C
  cmps(c,0,(int32_t)c->r[3],0); // 8017AC50
  if (crb(c,2)) { goto L_8017AC74; } // 8017AC54
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017AC58
  c->r[4]=c->r[31]+0x0000009Fu; // 8017AC5C
  c->lr=0x8017AC64u; f_801E3B30(c); // 8017AC60
  cmps(c,0,(int32_t)c->r[3],0); // 8017AC64
  if (crb(c,2)) { goto L_8017AC74; } // 8017AC68
  c->r[3]=0u+0x00000003u; // 8017AC6C
  goto L_8017AC78; // 8017AC70
L_8017AC74:;
  c->r[3]=0u+0xFFFFFFFFu; // 8017AC74
L_8017AC78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017AC78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017AC7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017AC80
  c->lr=c->r[0]; // 8017AC84
  c->r[1]=c->r[1]+0x00000010u; // 8017AC88
  return; // 8017AC8C
}

// fn_8017AC90
void f_8017AC90(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000FDu); // 8017AC90
  return; // 8017AC94
}

// fn_8017AC98
void f_8017AC98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017AC98
  c->r[0]=c->lr; // 8017AC9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017ACA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017ACA4
  c->r[31]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[31]); // 8017ACA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017ACAC
  c->r[30]=c->r[5]|c->r[5]; // 8017ACB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017ACB4
  c->r[29]=c->r[4]|c->r[4]; // 8017ACB8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8017ACBC
  c->r[28]=c->r[3]|c->r[3]; // 8017ACC0
  if (crb(c,2)) { goto L_8017ACEC; } // 8017ACC4
  cmps(c,0,(int32_t)c->r[5],0); // 8017ACC8
  if (crb(c,2)) { goto L_8017ACEC; } // 8017ACCC
  {uint32_t ea=c->r[2]+0xFFFFCC48u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017ACD0
  c->r[4]=0u+0x803A0000u; // 8017ACD4
  c->r[4]=c->r[4]+0x00003568u; // 8017ACD8
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017ACDC
  c->f[2]=c->f[1]; // 8017ACE0
  c->r[4]=c->r[4]+0x0000013Bu; // 8017ACE4
  c->lr=0x8017ACECu; f_801E36CC(c); // 8017ACE8
L_8017ACEC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8017ACEC
  if (crb(c,2)) { goto L_8017AD18; } // 8017ACF0
  cmps(c,0,(int32_t)c->r[30],0); // 8017ACF4
  if (!crb(c,2)) { goto L_8017AD18; } // 8017ACF8
  {uint32_t ea=c->r[2]+0xFFFFCC4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017ACFC
  c->r[4]=0u+0x803A0000u; // 8017AD00
  c->r[4]=c->r[4]+0x00003568u; // 8017AD04
  c->r[3]=R32(c->r[28]+0x00000000u); // 8017AD08
  c->f[2]=c->f[1]; // 8017AD0C
  c->r[4]=c->r[4]+0x0000013Bu; // 8017AD10
  c->lr=0x8017AD18u; f_801E36CC(c); // 8017AD14
L_8017AD18:;
  c->r[31]=rotl(c->r[29],0)&0x00000002u; cr0(c,c->r[31]); // 8017AD18
  if (crb(c,2)) { goto L_8017AD44; } // 8017AD1C
  cmps(c,0,(int32_t)c->r[30],0); // 8017AD20
  if (crb(c,2)) { goto L_8017AD44; } // 8017AD24
  {uint32_t ea=c->r[2]+0xFFFFCC48u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017AD28
  c->r[4]=0u+0x803A0000u; // 8017AD2C
  c->r[4]=c->r[4]+0x00003568u; // 8017AD30
  c->r[3]=R32(c->r[28]+0x00000000u); // 8017AD34
  c->f[2]=c->f[1]; // 8017AD38
  c->r[4]=c->r[4]+0x00000148u; // 8017AD3C
  c->lr=0x8017AD44u; f_801E36CC(c); // 8017AD40
L_8017AD44:;
  cmps(c,0,(int32_t)c->r[31],0); // 8017AD44
  if (crb(c,2)) { goto L_8017AD70; } // 8017AD48
  cmps(c,0,(int32_t)c->r[30],0); // 8017AD4C
  if (!crb(c,2)) { goto L_8017AD70; } // 8017AD50
  {uint32_t ea=c->r[2]+0xFFFFCC4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017AD54
  c->r[4]=0u+0x803A0000u; // 8017AD58
  c->r[4]=c->r[4]+0x00003568u; // 8017AD5C
  c->r[3]=R32(c->r[28]+0x00000000u); // 8017AD60
  c->f[2]=c->f[1]; // 8017AD64
  c->r[4]=c->r[4]+0x00000148u; // 8017AD68
  c->lr=0x8017AD70u; f_801E36CC(c); // 8017AD6C
L_8017AD70:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017AD70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017AD74
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017AD78
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017AD7C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8017AD80
  c->lr=c->r[0]; // 8017AD84
  c->r[1]=c->r[1]+0x00000020u; // 8017AD88
  return; // 8017AD8C
}

// fn_8017AD90
void f_8017AD90(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 8017AD90
  if (crb(c,2)) { goto L_8017ADB4; } // 8017AD94
  {uint32_t ea=c->r[2]+0xFFFFCC48u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017AD98
  c->r[4]=0u+0x803A0000u; // 8017AD9C
  c->r[4]=c->r[4]+0x00003568u; // 8017ADA0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017ADA4
  c->f[2]=c->f[1]; // 8017ADA8
  c->r[4]=c->r[4]+0x000000ACu; // 8017ADAC
  f_801E36CC(c); return; // 8017ADB0
L_8017ADB4:;
  {uint32_t ea=c->r[2]+0xFFFFCC4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017ADB4
  c->r[4]=0u+0x803A0000u; // 8017ADB8
  c->r[4]=c->r[4]+0x00003568u; // 8017ADBC
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017ADC0
  c->f[2]=c->f[1]; // 8017ADC4
  c->r[4]=c->r[4]+0x000000ACu; // 8017ADC8
  f_801E36CC(c); return; // 8017ADCC
}

// fn_8017ADD0
void f_8017ADD0(Ctx* __restrict c) {
  c->r[3]=0u+0x805D0000u; // 8017ADD0
  c->r[3]=c->r[3]+0xFFFFC6C0u; // 8017ADD4
  f_801DFCA0(c); return; // 8017ADD8
}

// fn_8017ADDC
void f_8017ADDC(Ctx* __restrict c) {
  c->r[3]=0u+0x805D0000u; // 8017ADDC
  c->r[3]=c->r[3]+0xFFFFC6C0u; // 8017ADE0
  f_801E0CE4(c); return; // 8017ADE4
}

// fn_8017ADE8
void f_8017ADE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017ADE8
  c->r[0]=c->lr; // 8017ADEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017ADF0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017ADF4
  c->r[31]=0u+0x805D0000u; // 8017ADF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017ADFC
  c->r[30]=c->r[5]|c->r[5]; // 8017AE00
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017AE04
  c->r[29]=c->r[3]|c->r[3]; // 8017AE08
  c->r[3]=c->r[31]+0xFFFFC6C0u; // 8017AE0C
  c->lr=0x8017AE14u; f_801E108C(c); // 8017AE10
  cmps(c,0,(int32_t)c->r[30],1); // 8017AE14
  if (crb(c,2)) { goto L_8017AE4C; } // 8017AE18
  if (!crb(c,0)) { goto L_8017AE2C; } // 8017AE1C
  cmps(c,0,(int32_t)c->r[30],0); // 8017AE20
  if (!crb(c,0)) { goto L_8017AE38; } // 8017AE24
  goto L_8017AE70; // 8017AE28
L_8017AE2C:;
  cmps(c,0,(int32_t)c->r[30],3); // 8017AE2C
  if (!crb(c,0)) { goto L_8017AE70; } // 8017AE30
  goto L_8017AE60; // 8017AE34
L_8017AE38:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 8017AE38
  c->r[3]=c->r[31]+0xFFFFC6C0u; // 8017AE3C
  c->r[5]=0u+0x00000002u; // 8017AE40
  c->lr=0x8017AE48u; f_8017AE8C(c); // 8017AE44
  goto L_8017AE70; // 8017AE48
L_8017AE4C:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 8017AE4C
  c->r[3]=c->r[31]+0xFFFFC6C0u; // 8017AE50
  c->r[5]=0u+0x00000001u; // 8017AE54
  c->lr=0x8017AE5Cu; f_8017AE8C(c); // 8017AE58
  goto L_8017AE70; // 8017AE5C
L_8017AE60:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 8017AE60
  c->r[3]=c->r[31]+0xFFFFC6C0u; // 8017AE64
  c->r[5]=0u+0x00000000u; // 8017AE68
  c->lr=0x8017AE70u; f_8017AE8C(c); // 8017AE6C
L_8017AE70:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017AE70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017AE74
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017AE78
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017AE7C
  c->lr=c->r[0]; // 8017AE80
  c->r[1]=c->r[1]+0x00000020u; // 8017AE84
  return; // 8017AE88
}

// fn_8017AE8C
void f_8017AE8C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000E8u,c->r[4]); // 8017AE8C
  W8(c->r[3]+0x00000100u,c->r[5]); // 8017AE90
  return; // 8017AE94
}

// fn_8017AE98
void f_8017AE98(Ctx* __restrict c) {
  c->r[3]=0u+0x805D0000u; // 8017AE98
  c->r[3]=c->r[3]+0xFFFFC6C0u; // 8017AE9C
  goto L_8017AEA4; // 8017AEA0
L_8017AEA4:;
  c->r[3]=R8(c->r[3]+0x00000102u); // 8017AEA4
  return; // 8017AEA8
}

// fn_8017AEAC
void f_8017AEAC(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 8017AEAC
  c->r[0]=c->r[4]|c->r[4]; // 8017AEB0
  c->r[3]=0u+0x805D0000u; // 8017AEB4
  c->r[4]=R16(c->r[5]+0x0000002Au); // 8017AEB8
  c->r[3]=c->r[3]+0x00001BBCu; // 8017AEBC
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 8017AEC0
  f_801F14DC(c); return; // 8017AEC4
}

// fn_8017AEC8
void f_8017AEC8(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 8017AEC8
  c->r[0]=c->r[4]|c->r[4]; // 8017AECC
  c->r[3]=0u+0x805D0000u; // 8017AED0
  c->r[4]=R16(c->r[5]+0x0000002Cu); // 8017AED4
  c->r[3]=c->r[3]+0x00001BBCu; // 8017AED8
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 8017AEDC
  f_801F14DC(c); return; // 8017AEE0
}

