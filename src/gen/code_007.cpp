#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800BDC30
void f_800BDC30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDC30
  c->r[0]=c->lr; // 800BDC34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BDC38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BDC3C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BDC40
  c->r[30]=c->r[3]|c->r[3]; // 800BDC44
  c->r[4]=R32(c->r[3]+0x00000394u); // 800BDC48
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BDC4C
  c->lr=0x800BDC54u; f_802501B0(c); // 800BDC50
  c->r[3]=c->r[30]|c->r[30]; // 800BDC54
  c->r[4]=0u+0x00000000u; // 800BDC58
  c->lr=0x800BDC60u; f_801F5244(c); // 800BDC5C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800BDC60
  c->r[3]=c->r[30]+0x0000002Cu; // 800BDC64
  c->r[4]=c->r[4]+0x0000005Cu; // 800BDC68
  c->lr=0x800BDC70u; f_800361A0(c); // 800BDC6C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800BDC70
  c->r[3]=c->r[30]|c->r[30]; // 800BDC74
  c->lr=0x800BDC7Cu; f_801F5418(c); // 800BDC78
  cmps(c,0,(int32_t)c->r[3],0); // 800BDC7C
  if (!crb(c,0)) { goto L_800BDCB8; } // 800BDC80
  c->r[4]=R16(c->r[30]+0x000003BEu); // 800BDC84
  c->r[0]=0u+0x00000001u; // 800BDC88
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800BDC8C
  c->r[3]=c->r[30]|c->r[30]; // 800BDC90
  c->r[0]=c->r[4]|0x00000080u; // 800BDC94
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDC98
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800BDC9C
  c->r[4]=0u+0x00000064u; // 800BDCA0
  c->r[5]=0u+0x00000000u; // 800BDCA4
  c->r[6]=0u+0x00000000u; // 800BDCA8
  c->r[7]=0u+0x00000000u; // 800BDCAC
  c->lr=0x800BDCB4u; f_801F4D44(c); // 800BDCB0
  goto L_800BDCEC; // 800BDCB4
L_800BDCB8:;
  c->r[31]=0u+0x805D0000u; // 800BDCB8
  c->r[3]=c->r[31]+0x00003F6Cu; // 800BDCBC
  c->lr=0x800BDCC4u; f_800447E4(c); // 800BDCC0
  cmpu(c,0,c->r[3],0x00000001u); // 800BDCC4
  if (!crb(c,2)) { goto L_800BDCD8; } // 800BDCC8
  c->r[0]=0u+0x00000000u; // 800BDCCC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800BDCD0
  goto L_800BDCE4; // 800BDCD4
L_800BDCD8:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800BDCD8
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800BDCDC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800BDCE0
L_800BDCE4:;
  c->r[3]=c->r[30]|c->r[30]; // 800BDCE4
  c->lr=0x800BDCECu; f_801F5B14(c); // 800BDCE8
L_800BDCEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BDCEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BDCF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BDCF4
  c->lr=c->r[0]; // 800BDCF8
  c->r[1]=c->r[1]+0x00000010u; // 800BDCFC
  return; // 800BDD00
}

// fn_800BDD04
void f_800BDD04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDD04
  c->r[0]=c->lr; // 800BDD08
  W32(c->r[1]+0x00000084u,c->r[0]); // 800BDD0C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800BDD10
  c->r[31]=0u+0x803A0000u; // 800BDD14
  c->r[31]=c->r[31]+0xFFFFCFA8u; // 800BDD18
  W32(c->r[1]+0x00000078u,c->r[30]); // 800BDD1C
  c->r[30]=c->r[3]|c->r[3]; // 800BDD20
  c->r[4]=R32(c->r[3]+0x00000394u); // 800BDD24
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BDD28
  c->lr=0x800BDD30u; f_802501B0(c); // 800BDD2C
  c->r[3]=c->r[30]+0x00000038u; // 800BDD30
  c->r[4]=c->r[30]+0x0000002Cu; // 800BDD34
  c->lr=0x800BDD3Cu; f_800361A0(c); // 800BDD38
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDD3C
  c->r[3]=0u+0x80550000u; // 800BDD40
  c->r[3]=c->r[3]+0x00003D60u; // 800BDD44
  c->r[4]=c->r[30]+0x00000038u; // 800BDD48
  c->f[2]=c->f[1]; // 800BDD4C
  c->r[5]=c->r[1]+0x00000008u; // 800BDD50
  c->f[3]=c->f[1]; // 800BDD54
  c->r[6]=0u+0x00000000u; // 800BDD58
  c->r[7]=0u+0x00000000u; // 800BDD5C
  c->lr=0x800BDD64u; f_801D5488(c); // 800BDD60
  c->r[5]=R32(c->r[30]+0x00000394u); // 800BDD64
  c->r[3]=c->r[30]+0x00000060u; // 800BDD68
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDD6C
  c->r[4]=c->r[5]+0x00000068u; // 800BDD70
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BDD74
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDD78
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800BDD7C
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDD80
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800BDD84
  c->lr=0x800BDD8Cu; f_800361A0(c); // 800BDD88
  c->r[3]=R32(c->r[30]+0x00000394u); // 800BDD8C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BDD90
  c->lr=0x800BDD98u; f_802501B0(c); // 800BDD94
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800BDD98
  c->r[5]=c->r[31]+0x00000048u; // 800BDD9C
  c->r[3]=c->r[30]+0x00000044u; // 800BDDA0
  c->r[4]=c->r[1]+0x00000060u; // 800BDDA4
  c->r[0]=c->r[0]|0x00002000u; // 800BDDA8
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800BDDAC
  c->r[7]=R32(c->r[31]+0x00000048u); // 800BDDB0
  c->r[6]=R32(c->r[5]+0x00000004u); // 800BDDB4
  c->r[0]=R32(c->r[5]+0x00000008u); // 800BDDB8
  W32(c->r[1]+0x00000060u,c->r[7]); // 800BDDBC
  W32(c->r[1]+0x00000064u,c->r[6]); // 800BDDC0
  W32(c->r[1]+0x00000068u,c->r[0]); // 800BDDC4
  c->lr=0x800BDDCCu; f_800361A0(c); // 800BDDC8
  c->r[4]=c->r[31]+0x00000054u; // 800BDDCC
  c->r[6]=R32(c->r[31]+0x00000054u); // 800BDDD0
  c->r[5]=R32(c->r[4]+0x00000004u); // 800BDDD4
  c->r[3]=c->r[30]+0x00000050u; // 800BDDD8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800BDDDC
  c->r[4]=c->r[1]+0x00000054u; // 800BDDE0
  W32(c->r[1]+0x00000054u,c->r[6]); // 800BDDE4
  W32(c->r[1]+0x00000058u,c->r[5]); // 800BDDE8
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800BDDEC
  c->lr=0x800BDDF4u; f_800361A0(c); // 800BDDF0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800BDDF4
  c->r[0]=0u+0x00000001u; // 800BDDF8
  c->r[4]=c->r[30]+0x0000002Cu; // 800BDDFC
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800BDE00
  c->r[3]=R32(c->r[30]+0x00000394u); // 800BDE04
  c->r[3]=c->r[3]+0x0000005Cu; // 800BDE08
  c->lr=0x800BDE10u; f_800361A0(c); // 800BDE0C
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDE10
  c->r[4]=0u+0x00000040u; // 800BDE14
  c->r[3]=R32(c->r[30]+0x00000394u); // 800BDE18
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800BDE1C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800BDE20
  c->r[3]=c->r[3]+0x0000001Cu; // 800BDE24
  c->lr=0x800BDE2Cu; f_802518A4(c); // 800BDE28
  c->r[3]=R32(c->r[30]+0x00000394u); // 800BDE2C
  c->r[4]=0u+0x00000006u; // 800BDE30
  c->r[3]=c->r[3]+0x0000001Cu; // 800BDE34
  c->lr=0x800BDE3Cu; f_80251824(c); // 800BDE38
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800BDE3C
  c->r[3]=c->r[30]|c->r[30]; // 800BDE40
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDE44
  c->r[5]=0u+0x00000000u; // 800BDE48
  c->r[12]=R32(c->r[12]+0x00000064u); // 800BDE4C
  c->r[6]=0u+0x00000001u; // 800BDE50
  c->f[2]=c->f[1]; // 800BDE54
  c->r[4]=R32(c->r[30]+0x00000394u); // 800BDE58
  c->ctr=c->r[12]; // 800BDE5C
  if (true) { c->lr=0x800BDE64u; dispatch(c,c->ctr); } // 800BDE60
  c->r[3]=R32(c->r[30]+0x00000394u); // 800BDE64
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BDE68
  c->lr=0x800BDE70u; f_802501B0(c); // 800BDE6C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800BDE70
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800BDE74
  cmps(c,0,(int32_t)c->r[0],0); // 800BDE78
  if (crb(c,2)) { goto L_800BDF74; } // 800BDE7C
  c->r[3]=c->r[3]+0x00000068u; // 800BDE80
  c->r[4]=c->r[30]+0x00000060u; // 800BDE84
  c->lr=0x800BDE8Cu; f_800361A0(c); // 800BDE88
  c->r[3]=R32(c->r[30]+0x00000394u); // 800BDE8C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BDE90
  c->lr=0x800BDE98u; f_8025037C(c); // 800BDE94
  c->r[6]=R32(c->r[30]+0x00000394u); // 800BDE98
  c->r[3]=c->r[1]+0x0000003Cu; // 800BDE9C
  c->r[4]=c->r[30]+0x00000060u; // 800BDEA0
  c->r[5]=c->r[1]+0x00000048u; // 800BDEA4
  c->r[6]=c->r[6]+0x000000B0u; // 800BDEA8
  c->r[7]=0u+0x00000000u; // 800BDEAC
  c->lr=0x800BDEB4u; f_8002BE64(c); // 800BDEB0
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800BDEB4
  c->r[0]=R32(c->r[30]+0x00000030u); // 800BDEB8
  W32(c->r[1]+0x00000030u,c->r[3]); // 800BDEBC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BDEC0
  c->r[0]=R32(c->r[30]+0x00000034u); // 800BDEC4
  W32(c->r[1]+0x00000038u,c->r[0]); // 800BDEC8
  c->r[0]=R32(c->r[30]+0x000003C4u); // 800BDECC
  cmps(c,0,(int32_t)c->r[0],0); // 800BDED0
  if (crb(c,2)) { goto L_800BDF20; } // 800BDED4
  c->r[3]=c->r[1]+0x00000030u; // 800BDED8
  c->r[4]=c->r[30]+0x000003CCu; // 800BDEDC
  c->lr=0x800BDEE4u; f_800361A0(c); // 800BDEE0
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800BDEE4
  c->r[4]=c->r[30]|c->r[30]; // 800BDEE8
  c->r[0]=R32(c->r[30]+0x00000030u); // 800BDEEC
  c->r[7]=c->r[1]+0x00000024u; // 800BDEF0
  c->r[6]=0u+0x00000035u; // 800BDEF4
  c->r[8]=0u+0x00000000u; // 800BDEF8
  W32(c->r[1]+0x00000024u,c->r[3]); // 800BDEFC
  W32(c->r[1]+0x00000028u,c->r[0]); // 800BDF00
  c->r[0]=R32(c->r[30]+0x00000034u); // 800BDF04
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800BDF08
  c->r[3]=R32(c->r[30]+0x00000438u); // 800BDF0C
  c->r[5]=R32(c->r[30]+0x00000394u); // 800BDF10
  {uint32_t ea=c->r[30]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDF14
  c->lr=0x800BDF1Cu; f_801FA6A4(c); // 800BDF18
  goto L_800BDF60; // 800BDF1C
L_800BDF20:;
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 800BDF20
  c->r[3]=0u+0x805D0000u; // 800BDF24
  c->r[0]=R32(c->r[30]+0x00000030u); // 800BDF28
  c->r[3]=c->r[3]+0x00003F6Cu; // 800BDF2C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDF30
  c->r[4]=c->r[30]|c->r[30]; // 800BDF34
  W32(c->r[1]+0x00000018u,c->r[5]); // 800BDF38
  c->r[7]=c->r[1]+0x00000018u; // 800BDF3C
  c->r[6]=0u+0x00000035u; // 800BDF40
  c->r[8]=0u+0x00000000u; // 800BDF44
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800BDF48
  c->r[0]=R32(c->r[30]+0x00000034u); // 800BDF4C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800BDF50
  c->r[3]=R32(c->r[30]+0x00000438u); // 800BDF54
  c->r[5]=R32(c->r[30]+0x00000394u); // 800BDF58
  c->lr=0x800BDF60u; f_801FA6A4(c); // 800BDF5C
L_800BDF60:;
  c->r[3]=R32(c->r[30]+0x00000438u); // 800BDF60
  c->r[5]=c->r[30]+0x00000044u; // 800BDF64
  c->r[6]=c->r[31]+0x00000000u; // 800BDF68
  c->r[4]=0u+0x00000000u; // 800BDF6C
  c->lr=0x800BDF74u; f_801FBEC0(c); // 800BDF70
L_800BDF74:;
  c->r[3]=c->r[30]|c->r[30]; // 800BDF74
  c->r[4]=0u+0x00000000u; // 800BDF78
  c->lr=0x800BDF80u; f_801F7C00(c); // 800BDF7C
  c->r[7]=0u+0x803D0000u; // 800BDF80
  {uint32_t ea=c->r[7]+0x00000588u; c->r[6]=R32(ea); c->r[7]=ea;} // 800BDF84
  c->r[3]=c->r[30]|c->r[30]; // 800BDF88
  c->r[4]=c->r[1]+0x0000000Cu; // 800BDF8C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BDF90
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BDF94
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800BDF98
  W32(c->r[1]+0x00000010u,c->r[5]); // 800BDF9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BDFA0
  c->lr=0x800BDFA8u; f_800BDFC0(c); // 800BDFA4
  c->r[0]=R32(c->r[1]+0x00000084u); // 800BDFA8
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800BDFAC
  c->r[30]=R32(c->r[1]+0x00000078u); // 800BDFB0
  c->lr=c->r[0]; // 800BDFB4
  c->r[1]=c->r[1]+0x00000080u; // 800BDFB8
  return; // 800BDFBC
}

// fn_800BDFC0
void f_800BDFC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDFC0
  c->r[0]=c->lr; // 800BDFC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BDFC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BDFCC
  c->r[31]=c->r[4]|c->r[4]; // 800BDFD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BDFD4
  c->r[30]=c->r[3]|c->r[3]; // 800BDFD8
  c->r[3]=c->r[31]|c->r[31]; // 800BDFDC
  c->lr=0x800BDFE4u; f_802B9FDC(c); // 800BDFE0
  cmps(c,0,(int32_t)c->r[3],0); // 800BDFE4
  if (crb(c,2)) { goto L_800BE004; } // 800BDFE8
  c->r[3]=R32(c->r[31]+0x00000000u); // 800BDFEC
  c->r[0]=R32(c->r[31]+0x00000004u); // 800BDFF0
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800BDFF4
  W32(c->r[30]+0x00000020u,c->r[0]); // 800BDFF8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800BDFFC
  W32(c->r[30]+0x00000024u,c->r[0]); // 800BE000
L_800BE004:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE004
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE008
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BE00C
  c->lr=c->r[0]; // 800BE010
  c->r[1]=c->r[1]+0x00000010u; // 800BE014
  return; // 800BE018
}

// fn_800BE01C
void f_800BE01C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE01C
  c->r[0]=c->lr; // 800BE020
  c->r[4]=0u+0x00000000u; // 800BE024
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BE028
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BE02C
  c->r[31]=c->r[3]|c->r[3]; // 800BE030
  c->r[3]=R32(c->r[3]+0x00000438u); // 800BE034
  c->lr=0x800BE03Cu; f_801FAF00(c); // 800BE038
  cmps(c,0,(int32_t)c->r[3],0); // 800BE03C
  if (!crb(c,2)) { goto L_800BE0F0; } // 800BE040
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800BE044
  cmps(c,0,(int32_t)c->r[0],0); // 800BE048
  if (!crb(c,2)) { goto L_800BE060; } // 800BE04C
  c->r[3]=c->r[31]|c->r[31]; // 800BE050
  c->r[4]=0u+0x0000002Au; // 800BE054
  c->lr=0x800BE05Cu; f_801F5AB4(c); // 800BE058
  goto L_800BE06C; // 800BE05C
L_800BE060:;
  c->r[3]=c->r[31]|c->r[31]; // 800BE060
  c->r[4]=0u+0x00000015u; // 800BE064
  c->lr=0x800BE06Cu; f_801F5AB4(c); // 800BE068
L_800BE06C:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BE06C
  c->r[3]=c->r[31]+0x0000002Cu; // 800BE070
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BE074
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800BE078
  c->r[0]=c->r[0]|0x00008004u; // 800BE07C
  c->r[4]=c->r[4]+0x0000005Cu; // 800BE080
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BE084
  c->lr=0x800BE08Cu; f_800361A0(c); // 800BE088
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BE08C
  c->r[3]=c->r[31]+0x00000060u; // 800BE090
  c->r[4]=c->r[4]+0x00000068u; // 800BE094
  c->lr=0x800BE09Cu; f_800361A0(c); // 800BE098
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800BE09C
  c->r[3]=0u+0x805D0000u; // 800BE0A0
  c->r[0]=R32(c->r[31]+0x00000030u); // 800BE0A4
  c->r[3]=c->r[3]+0x00006CF8u; // 800BE0A8
  c->r[4]=c->r[1]+0x00000008u; // 800BE0AC
  c->r[5]=0u+0x00040000u; // 800BE0B0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BE0B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800BE0B8
  c->r[0]=R32(c->r[31]+0x00000034u); // 800BE0BC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BE0C0
  c->lr=0x800BE0C8u; f_802236F8(c); // 800BE0C4
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800BE0C8
  c->r[3]=c->r[31]|c->r[31]; // 800BE0CC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BE0D0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BE0D4
  c->ctr=c->r[12]; // 800BE0D8
  if (true) { c->lr=0x800BE0E0u; dispatch(c,c->ctr); } // 800BE0DC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BE0E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BE0E4
  c->lr=0x800BE0ECu; f_8025037C(c); // 800BE0E8
  goto L_800BE110; // 800BE0EC
L_800BE0F0:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BE0F0
  c->r[3]=c->r[31]+0x0000002Cu; // 800BE0F4
  c->r[4]=c->r[4]+0x0000005Cu; // 800BE0F8
  c->lr=0x800BE100u; f_800361A0(c); // 800BE0FC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BE100
  c->r[3]=c->r[31]+0x00000060u; // 800BE104
  c->r[4]=c->r[4]+0x00000068u; // 800BE108
  c->lr=0x800BE110u; f_800361A0(c); // 800BE10C
L_800BE110:;
  c->r[3]=c->r[31]|c->r[31]; // 800BE110
  c->r[4]=0u+0x00000000u; // 800BE114
  c->lr=0x800BE11Cu; f_801F7C00(c); // 800BE118
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BE11C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BE120
  c->lr=c->r[0]; // 800BE124
  c->r[1]=c->r[1]+0x00000020u; // 800BE128
  return; // 800BE12C
}

// fn_800BE130
void f_800BE130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE130
  c->r[0]=c->lr; // 800BE134
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE138
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BE13C
  c->r[0]=0u+0x00000001u; // 800BE140
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BE144
  c->r[31]=c->r[3]|c->r[3]; // 800BE148
  c->r[4]=R16(c->r[3]+0x000003BEu); // 800BE14C
  {uint32_t ea=c->r[3]+0x000003C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE150
  c->r[4]=rotl(c->r[4],0)&0xFFFFDFFFu; // 800BE154
  W8(c->r[3]+0x0000006Fu,c->r[0]); // 800BE158
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFBu; // 800BE15C
  fcmp(c,0,c->f[1],c->f[0]); // 800BE160
  c->r[0]=rotl(c->r[4],0)&0xFFFFFF7Fu; // 800BE164
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800BE168
  if (!crb(c,0)) { goto L_800BE19C; } // 800BE16C
  c->r[5]=R32(c->r[3]+0x00000394u); // 800BE170
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE174
  c->r[4]=c->r[5]+0x00000068u; // 800BE178
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BE17C
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE180
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800BE184
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE188
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800BE18C
  c->r[3]=c->r[3]+0x00000060u; // 800BE190
  c->lr=0x800BE198u; f_800361A0(c); // 800BE194
  goto L_800BE1B4; // 800BE198
L_800BE19C:;
  c->r[3]=c->r[3]+0x0000002Cu; // 800BE19C
  c->r[4]=c->r[31]+0x000003CCu; // 800BE1A0
  c->lr=0x800BE1A8u; f_800361A0(c); // 800BE1A4
  c->r[3]=c->r[31]+0x00000060u; // 800BE1A8
  c->r[4]=c->r[31]+0x000003D8u; // 800BE1AC
  c->lr=0x800BE1B4u; f_800361A0(c); // 800BE1B0
L_800BE1B4:;
  c->r[3]=c->r[31]|c->r[31]; // 800BE1B4
  c->r[4]=0u+0x00000000u; // 800BE1B8
  c->lr=0x800BE1C0u; f_801F5244(c); // 800BE1BC
  c->r[7]=0u+0x803D0000u; // 800BE1C0
  {uint32_t ea=c->r[7]+0x00000594u; c->r[6]=R32(ea); c->r[7]=ea;} // 800BE1C4
  c->r[3]=c->r[31]|c->r[31]; // 800BE1C8
  c->r[4]=c->r[1]+0x00000008u; // 800BE1CC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BE1D0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BE1D4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BE1D8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BE1DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BE1E0
  c->lr=0x800BE1E8u; f_800BDFC0(c); // 800BE1E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BE1E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BE1EC
  c->lr=c->r[0]; // 800BE1F0
  c->r[1]=c->r[1]+0x00000020u; // 800BE1F4
  return; // 800BE1F8
}

// fn_800BE1FC
void f_800BE1FC(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800BE1FC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BE200
  c->ctr=c->r[12]; // 800BE204
  if (true) { dispatch(c,c->ctr); return; } // 800BE208
}

// fn_800BE20C
void f_800BE20C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE20C
  c->r[0]=c->lr; // 800BE210
  c->r[4]=0u+0x000000E1u; // 800BE214
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE218
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE21C
  c->r[31]=c->r[3]|c->r[3]; // 800BE220
  c->r[3]=c->r[3]+0x00000210u; // 800BE224
  c->lr=0x800BE22Cu; f_80221630(c); // 800BE228
  cmps(c,0,(int32_t)c->r[3],0); // 800BE22C
  if (!crb(c,2)) { goto L_800BE23C; } // 800BE230
  c->r[3]=0u+0x00000000u; // 800BE234
  goto L_800BE258; // 800BE238
L_800BE23C:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BE23C
  c->r[3]=0u+0x000004B9u; // 800BE240
  c->r[5]=0u+0x00000000u; // 800BE244
  c->r[4]=c->r[4]+0x0000010Cu; // 800BE248
  c->lr=0x800BE250u; f_8024EE50(c); // 800BE24C
  c->r[0]=cntlz(c->r[3]); // 800BE250
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BE254
L_800BE258:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE258
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE25C
  c->lr=c->r[0]; // 800BE260
  c->r[1]=c->r[1]+0x00000010u; // 800BE264
  return; // 800BE268
}

// fn_800BE26C
void f_800BE26C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE26C
  c->r[0]=c->lr; // 800BE270
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE274
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE278
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BE27C
  c->r[30]=c->r[3]|c->r[3]; // 800BE280
  c->r[4]=R8(c->r[3]+0x0000006Eu); // 800BE284
  c->r[0]=R8(c->r[3]+0x00000078u); // 800BE288
  cmpu(c,0,c->r[4],c->r[0]); // 800BE28C
  if (crb(c,2)) { goto L_800BE29C; } // 800BE290
  W8(c->r[3]+0x00000078u,c->r[4]); // 800BE294
  c->lr=0x800BE29Cu; f_800BE57C(c); // 800BE298
L_800BE29C:;
  c->r[31]=0u+0x805D0000u; // 800BE29C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800BE2A0
  c->lr=0x800BE2A8u; f_80045264(c); // 800BE2A4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800BE2A8
  cmpu(c,0,c->r[0],0x0000002Au); // 800BE2AC
  if (crb(c,2)) { goto L_800BE2C8; } // 800BE2B0
  c->r[3]=c->r[31]+0x00003F6Cu; // 800BE2B4
  c->lr=0x800BE2BCu; f_80045264(c); // 800BE2B8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800BE2BC
  cmpu(c,0,c->r[0],0x00000015u); // 800BE2C0
  if (!crb(c,2)) { goto L_800BE304; } // 800BE2C4
L_800BE2C8:;
  c->r[3]=0u+0x805D0000u; // 800BE2C8
  c->r[3]=c->r[3]+0x00003F6Cu; // 800BE2CC
  c->lr=0x800BE2D4u; f_80037AF0(c); // 800BE2D0
  cmpu(c,0,c->r[3],c->r[30]); // 800BE2D4
  if (!crb(c,2)) { goto L_800BE304; } // 800BE2D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800BE2DC
  cmps(c,0,(int32_t)c->r[0],101); // 800BE2E0
  if (crb(c,2)) { goto L_800BE304; } // 800BE2E4
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE2E8
  c->r[3]=c->r[30]|c->r[30]; // 800BE2EC
  c->r[4]=0u+0x00000065u; // 800BE2F0
  c->r[5]=0u+0x00000000u; // 800BE2F4
  c->r[6]=0u+0x00000000u; // 800BE2F8
  c->r[7]=0u+0x00000000u; // 800BE2FC
  c->lr=0x800BE304u; f_801F4D44(c); // 800BE300
L_800BE304:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE304
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE308
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BE30C
  c->lr=c->r[0]; // 800BE310
  c->r[1]=c->r[1]+0x00000010u; // 800BE314
  return; // 800BE318
}

// fn_800BE31C
void f_800BE31C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE31C
  c->r[0]=c->lr; // 800BE320
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BE324
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800BE328
  c->r[31]=0u+0x803D0000u; // 800BE32C
  c->r[31]=c->r[31]+0x00000588u; // 800BE330
  W32(c->r[1]+0x00000038u,c->r[30]); // 800BE334
  c->r[30]=c->r[3]|c->r[3]; // 800BE338
  c->lr=0x800BE340u; f_801F4F28(c); // 800BE33C
  c->r[3]=R32(c->r[30]+0x000003C0u); // 800BE340
  cmps(c,0,(int32_t)c->r[3],101); // 800BE344
  if (crb(c,2)) { goto L_800BE398; } // 800BE348
  if (!crb(c,0)) { goto L_800BE35C; } // 800BE34C
  cmps(c,0,(int32_t)c->r[3],100); // 800BE350
  if (!crb(c,0)) { goto L_800BE368; } // 800BE354
  goto L_800BE400; // 800BE358
L_800BE35C:;
  cmps(c,0,(int32_t)c->r[3],103); // 800BE35C
  if (!crb(c,0)) { goto L_800BE400; } // 800BE360
  goto L_800BE3D4; // 800BE364
L_800BE368:;
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800BE368
  c->r[5]=c->r[31]+0x00000018u; // 800BE36C
  c->r[3]=c->r[30]|c->r[30]; // 800BE370
  c->r[4]=c->r[1]+0x00000020u; // 800BE374
  c->r[7]=R32(c->r[31]+0x00000018u); // 800BE378
  c->r[6]=R32(c->r[5]+0x00000004u); // 800BE37C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800BE380
  W32(c->r[1]+0x00000020u,c->r[7]); // 800BE384
  W32(c->r[1]+0x00000024u,c->r[6]); // 800BE388
  W32(c->r[1]+0x00000028u,c->r[0]); // 800BE38C
  c->lr=0x800BE394u; f_800BDFC0(c); // 800BE390
  goto L_800BE400; // 800BE394
L_800BE398:;
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800BE398
  c->r[5]=c->r[31]+0x00000024u; // 800BE39C
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800BE3A0
  c->r[3]=c->r[30]|c->r[30]; // 800BE3A4
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800BE3A8
  c->r[4]=c->r[1]+0x00000014u; // 800BE3AC
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800BE3B0
  c->r[7]=R32(c->r[31]+0x00000024u); // 800BE3B4
  c->r[6]=R32(c->r[5]+0x00000004u); // 800BE3B8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800BE3BC
  W32(c->r[1]+0x00000014u,c->r[7]); // 800BE3C0
  W32(c->r[1]+0x00000018u,c->r[6]); // 800BE3C4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800BE3C8
  c->lr=0x800BE3D0u; f_800BDFC0(c); // 800BE3CC
  goto L_800BE400; // 800BE3D0
L_800BE3D4:;
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800BE3D4
  c->r[5]=c->r[31]+0x00000030u; // 800BE3D8
  c->r[3]=c->r[30]|c->r[30]; // 800BE3DC
  c->r[4]=c->r[1]+0x00000008u; // 800BE3E0
  c->r[7]=R32(c->r[31]+0x00000030u); // 800BE3E4
  c->r[6]=R32(c->r[5]+0x00000004u); // 800BE3E8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800BE3EC
  W32(c->r[1]+0x00000008u,c->r[7]); // 800BE3F0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800BE3F4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BE3F8
  c->lr=0x800BE400u; f_800BDFC0(c); // 800BE3FC
L_800BE400:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BE400
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800BE404
  c->r[30]=R32(c->r[1]+0x00000038u); // 800BE408
  c->lr=c->r[0]; // 800BE40C
  c->r[1]=c->r[1]+0x00000040u; // 800BE410
  return; // 800BE414
}

// fn_800BE418
void f_800BE418(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE418
  c->r[0]=c->lr; // 800BE41C
  c->r[6]=c->r[4]|c->r[4]; // 800BE420
  c->r[5]=0u+0x00000000u; // 800BE424
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE428
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800BE42C
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800BE430
  if (crb(c,2)) { goto L_800BE44C; } // 800BE434
  c->r[4]=R8(c->r[3]+0x00000079u); // 800BE438
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BE43C
  c->r[0]=cntlz(c->r[0]); // 800BE440
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BE444
  c->r[5]=c->r[4]+0x00000001u; // 800BE448
L_800BE44C:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800BE44C
  c->r[3]=c->r[6]|c->r[6]; // 800BE450
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 800BE454
  c->lr=0x800BE45Cu; f_80250BF4(c); // 800BE458
  c->r[0]=cntlz(c->r[3]); // 800BE45C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BE460
  c->r[3]=0u-c->r[0]; // 800BE464
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE468
  c->lr=c->r[0]; // 800BE46C
  c->r[1]=c->r[1]+0x00000010u; // 800BE470
  return; // 800BE474
}

// fn_800BE478
void f_800BE478(Ctx* __restrict c) {
  W8(c->r[3]+0x00000079u,c->r[4]); // 800BE478
  return; // 800BE47C
}

// fn_800BE480
void f_800BE480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE480
  c->r[0]=c->lr; // 800BE484
  c->r[7]=0u+0x803D0000u; // 800BE488
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BE48C
  c->r[4]=c->r[1]+0x00000008u; // 800BE490
  {uint32_t ea=c->r[7]+0x000005C4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800BE494
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BE498
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BE49C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BE4A0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BE4A4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BE4A8
  c->lr=0x800BE4B0u; f_800BDFC0(c); // 800BE4AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BE4B0
  c->lr=c->r[0]; // 800BE4B4
  c->r[1]=c->r[1]+0x00000020u; // 800BE4B8
  return; // 800BE4BC
}

// fn_800BE4C0
void f_800BE4C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE4C0
  c->r[0]=c->lr; // 800BE4C4
  c->r[5]=0u+0x80620000u; // 800BE4C8
  c->r[4]=0u+0x00000002u; // 800BE4CC
  W32(c->r[1]+0x00000094u,c->r[0]); // 800BE4D0
  c->r[5]=c->r[5]+0x00007688u; // 800BE4D4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800BE4D8
  W32(c->r[1]+0x00000088u,c->r[30]); // 800BE4DC
  c->r[30]=c->r[3]|c->r[3]; // 800BE4E0
  c->r[3]=R32(c->r[5]+0x00000014u); // 800BE4E4
  c->lr=0x800BE4ECu; f_80037670(c); // 800BE4E8
  cmps(c,0,(int32_t)c->r[3],0); // 800BE4EC
  if (!crb(c,2)) { goto L_800BE564; } // 800BE4F0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800BE4F4
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800BE4F8
  cmps(c,0,(int32_t)c->r[0],0); // 800BE4FC
  if (!crb(c,2)) { goto L_800BE564; } // 800BE500
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800BE504
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800BE508
  if (crb(c,2)) { goto L_800BE564; } // 800BE50C
  {uint32_t ea=c->r[2]+0xFFFF9D20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE510
  c->r[3]=c->r[1]+0x00000008u; // 800BE514
  {uint32_t ea=c->r[2]+0xFFFF9D24u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE518
  c->r[4]=c->r[30]+0x0000002Cu; // 800BE51C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 800BE520
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800BE524
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BE528
  c->lr=0x800BE530u; f_800361A0(c); // 800BE52C
  c->r[31]=0u+0x80550000u; // 800BE530
  c->r[5]=c->r[30]|c->r[30]; // 800BE534
  c->r[31]=c->r[31]+0x00003D60u; // 800BE538
  c->r[6]=c->r[1]+0x00000008u; // 800BE53C
  c->r[3]=c->r[31]+0x00000010u; // 800BE540
  c->r[7]=c->r[1]+0x00000014u; // 800BE544
  c->r[8]=c->r[30]+0x00000060u; // 800BE548
  c->r[9]=c->r[1]+0x00000020u; // 800BE54C
  c->r[4]=0u+0x000001FFu; // 800BE550
  c->lr=0x800BE558u; f_80226578(c); // 800BE554
  c->r[3]=c->r[31]+0x00000010u; // 800BE558
  c->r[4]=c->r[1]+0x00000020u; // 800BE55C
  c->lr=0x800BE564u; f_80226D68(c); // 800BE560
L_800BE564:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800BE564
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800BE568
  c->r[30]=R32(c->r[1]+0x00000088u); // 800BE56C
  c->lr=c->r[0]; // 800BE570
  c->r[1]=c->r[1]+0x00000090u; // 800BE574
  return; // 800BE578
}

// fn_800BE57C
void f_800BE57C(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800BE57C
  cmpu(c,0,c->r[0],0x00000006u); // 800BE580
  if (crb(c,1)) { goto L_800BE5D4; } // 800BE584
  c->r[5]=0u+0x803D0000u; // 800BE588
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800BE58C
  c->r[5]=c->r[5]+0x000005D0u; // 800BE590
  c->r[5]=R32(c->r[5]+c->r[0]); // 800BE594
  c->ctr=c->r[5]; // 800BE598
  if (true) { switch (c->ctr) { case 0x800BE5A0u: goto L_800BE5A0; case 0x800BE5A8u: goto L_800BE5A8; case 0x800BE5B0u: goto L_800BE5B0; case 0x800BE5B8u: goto L_800BE5B8; case 0x800BE5C0u: goto L_800BE5C0; case 0x800BE5C8u: goto L_800BE5C8; case 0x800BE5D0u: goto L_800BE5D0; default: break; } dispatch(c,c->ctr); return; } // 800BE59C
L_800BE5A0:;
  c->r[4]=0u+0x00000000u; // 800BE5A0
  goto L_800BE5D4; // 800BE5A4
L_800BE5A8:;
  c->r[4]=0u+0x00000001u; // 800BE5A8
  goto L_800BE5D4; // 800BE5AC
L_800BE5B0:;
  c->r[4]=0u+0x00000002u; // 800BE5B0
  goto L_800BE5D4; // 800BE5B4
L_800BE5B8:;
  c->r[4]=0u+0x00000003u; // 800BE5B8
  goto L_800BE5D4; // 800BE5BC
L_800BE5C0:;
  c->r[4]=0u+0x00000004u; // 800BE5C0
  goto L_800BE5D4; // 800BE5C4
L_800BE5C8:;
  c->r[4]=0u+0x00000005u; // 800BE5C8
  goto L_800BE5D4; // 800BE5CC
L_800BE5D0:;
  c->r[4]=0u+0x00000006u; // 800BE5D0
L_800BE5D4:;
  c->r[3]=R32(c->r[3]+0x00000394u); // 800BE5D4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BE5D8
  f_80259C78(c); return; // 800BE5DC
}

// fn_800BE5E0
void f_800BE5E0(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 800BE5E0
  c->r[0]=0u+0x00000000u; // 800BE5E4
  W8(c->r[3]+0x00000074u,c->r[4]); // 800BE5E8
  W8(c->r[3]+0x00000075u,c->r[0]); // 800BE5EC
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 800BE5F0
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[1]);} // 800BE5F4
  return; // 800BE5F8
}

// fn_800BE5FC
void f_800BE5FC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800BE5FC
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 800BE600
  W8(c->r[3]+0x00000074u,c->r[0]); // 800BE604
  W8(c->r[3]+0x00000075u,c->r[0]); // 800BE608
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[1]);} // 800BE60C
  return; // 800BE610
}

// fn_800BE614
void f_800BE614(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000080u); // 800BE614
  return; // 800BE618
}

// fn_800BE61C
void f_800BE61C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE61C
  c->r[0]=c->lr; // 800BE620
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE624
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE628
  c->r[31]=c->r[3]|c->r[3]; // 800BE62C
  c->r[4]=R32(c->r[3]+0x00000080u); // 800BE630
  cmpu(c,0,c->r[4],0x0000FFFFu); // 800BE634
  if (crb(c,2)) { goto L_800BE654; } // 800BE638
  c->r[3]=0u+0x80550000u; // 800BE63C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BE640
  c->lr=0x800BE648u; f_8018D694(c); // 800BE644
  c->r[3]=0u+0x00010000u; // 800BE648
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BE64C
  W32(c->r[31]+0x00000080u,c->r[0]); // 800BE650
L_800BE654:;
  c->r[3]=c->r[31]|c->r[31]; // 800BE654
  c->lr=0x800BE65Cu; f_801F4C78(c); // 800BE658
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE65C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE660
  c->lr=c->r[0]; // 800BE664
  c->r[1]=c->r[1]+0x00000010u; // 800BE668
  return; // 800BE66C
}

// fn_800BE670
void f_800BE670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE670
  c->r[0]=c->lr; // 800BE674
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE678
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE67C
  c->r[31]=c->r[3]|c->r[3]; // 800BE680
  c->r[3]=c->r[3]+0x00000210u; // 800BE684
  c->lr=0x800BE68Cu; f_8004BAD4(c); // 800BE688
  cmps(c,0,(int32_t)c->r[3],0); // 800BE68C
  if (crb(c,2)) { goto L_800BE714; } // 800BE690
  c->r[0]=R32(c->r[31]+0x00000210u); // 800BE694
  c->r[4]=c->r[31]|c->r[31]; // 800BE698
  c->r[3]=c->r[31]+0x00000210u; // 800BE69C
  c->r[0]=c->r[0]|0xAA800000u; // 800BE6A0
  W32(c->r[31]+0x00000210u,c->r[0]); // 800BE6A4
  c->lr=0x800BE6ACu; f_80043E44(c); // 800BE6A8
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE6AC
  c->r[3]=c->r[31]+0x00000210u; // 800BE6B0
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BE6B4
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BE6B8
  c->lr=0x800BE6C0u; f_80043E34(c); // 800BE6BC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BE6C0
  c->r[4]=0u+0x803A0000u; // 800BE6C4
  c->r[4]=c->r[4]+0xFFFFD054u; // 800BE6C8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BE6CC
  c->r[4]=c->r[4]+0x00000025u; // 800BE6D0
  c->lr=0x800BE6D8u; f_80256EC4(c); // 800BE6D4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BE6D8
  c->r[5]=c->r[3]|c->r[3]; // 800BE6DC
  c->r[3]=c->r[31]+0x00000210u; // 800BE6E0
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800BE6E4
  c->lr=0x800BE6ECu; f_8004BAC8(c); // 800BE6E8
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE6EC
  c->r[3]=c->r[31]+0x00000210u; // 800BE6F0
  c->f[2]=c->f[1]; // 800BE6F4
  c->f[3]=c->f[1]; // 800BE6F8
  c->lr=0x800BE700u; f_80043E24(c); // 800BE6FC
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE700
  c->r[3]=c->r[31]+0x00000210u; // 800BE704
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BE708
  c->f[3]=c->f[1]; // 800BE70C
  c->lr=0x800BE714u; f_8005D58C(c); // 800BE710
L_800BE714:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE714
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE718
  c->lr=c->r[0]; // 800BE71C
  c->r[1]=c->r[1]+0x00000010u; // 800BE720
  return; // 800BE724
}

// fn_800BE728
void f_800BE728(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE728
  c->r[0]=c->lr; // 800BE72C
  W32(c->r[1]+0x00000094u,c->r[0]); // 800BE730
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800BE734
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800BE738
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800BE73C
  c->r[31]=0u+0x803A0000u; // 800BE740
  c->r[31]=c->r[31]+0xFFFFCFA8u; // 800BE744
  W32(c->r[1]+0x00000078u,c->r[30]); // 800BE748
  c->r[30]=c->r[3]|c->r[3]; // 800BE74C
  c->r[3]=c->r[3]+0x00000210u; // 800BE750
  c->lr=0x800BE758u; f_80221698(c); // 800BE754
  c->r[3]=R32(c->r[30]+0x00000394u); // 800BE758
  cmps(c,0,(int32_t)c->r[3],0); // 800BE75C
  if (crb(c,2)) { goto L_800BE780; } // 800BE760
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800BE764
  cmps(c,0,(int32_t)c->r[0],0); // 800BE768
  if (crb(c,2)) { goto L_800BE780; } // 800BE76C
  c->r[0]=R32(c->r[30]+0x00000210u); // 800BE770
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800BE774
  W32(c->r[30]+0x00000210u,c->r[0]); // 800BE778
  goto L_800BE9BC; // 800BE77C
L_800BE780:;
  c->r[0]=R32(c->r[30]+0x00000210u); // 800BE780
  c->r[7]=c->r[31]+0x00000060u; // 800BE784
  c->r[6]=c->r[31]+0x0000006Cu; // 800BE788
  c->r[3]=c->r[1]+0x00000020u; // 800BE78C
  c->r[0]=c->r[0]|0x80000000u; // 800BE790
  c->r[4]=c->r[1]+0x00000014u; // 800BE794
  W32(c->r[30]+0x00000210u,c->r[0]); // 800BE798
  c->r[5]=c->r[1]+0x00000038u; // 800BE79C
  c->r[11]=R32(c->r[31]+0x00000060u); // 800BE7A0
  c->r[10]=R32(c->r[7]+0x00000004u); // 800BE7A4
  c->r[9]=R32(c->r[7]+0x00000008u); // 800BE7A8
  c->r[8]=R32(c->r[31]+0x0000006Cu); // 800BE7AC
  c->r[7]=R32(c->r[6]+0x00000004u); // 800BE7B0
  c->r[0]=R32(c->r[6]+0x00000008u); // 800BE7B4
  W32(c->r[1]+0x00000020u,c->r[11]); // 800BE7B8
  W32(c->r[1]+0x00000024u,c->r[10]); // 800BE7BC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 800BE7C0
  W32(c->r[1]+0x00000028u,c->r[9]); // 800BE7C4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 800BE7C8
  W32(c->r[1]+0x00000014u,c->r[8]); // 800BE7CC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BE7D0
  W32(c->r[1]+0x00000018u,c->r[7]); // 800BE7D4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BE7D8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800BE7DC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BE7E0
  c->r[6]=R32(c->r[30]+0x00000394u); // 800BE7E4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE7E8
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE7EC
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 800BE7F0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800BE7F4
  c->r[6]=R32(c->r[30]+0x00000394u); // 800BE7F8
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE7FC
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800BE800
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800BE804
  c->r[6]=R32(c->r[30]+0x00000394u); // 800BE808
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE80C
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800BE810
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800BE814
  c->r[6]=R32(c->r[30]+0x00000394u); // 800BE818
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE81C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800BE820
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800BE824
  c->r[6]=R32(c->r[30]+0x00000394u); // 800BE828
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE82C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800BE830
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800BE834
  c->r[6]=R32(c->r[30]+0x00000394u); // 800BE838
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE83C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800BE840
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BE844
  c->lr=0x800BE84Cu; f_80296A70(c); // 800BE848
  c->r[3]=R32(c->r[30]+0x00000394u); // 800BE84C
  c->r[4]=0u+0x803A0000u; // 800BE850
  c->r[4]=c->r[4]+0xFFFFD054u; // 800BE854
  c->r[5]=c->r[1]+0x00000048u; // 800BE858
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BE85C
  c->r[4]=c->r[4]+0x00000025u; // 800BE860
  c->r[6]=0u+0x00000001u; // 800BE864
  c->lr=0x800BE86Cu; f_80257018(c); // 800BE868
  c->r[4]=c->r[1]+0x00000020u; // 800BE86C
  c->r[3]=c->r[1]+0x00000048u; // 800BE870
  c->r[5]=c->r[4]|c->r[4]; // 800BE874
  c->lr=0x800BE87Cu; f_80296750(c); // 800BE878
  c->r[4]=c->r[1]+0x00000014u; // 800BE87C
  c->r[3]=c->r[1]+0x00000048u; // 800BE880
  c->r[5]=c->r[4]|c->r[4]; // 800BE884
  c->lr=0x800BE88Cu; f_80296750(c); // 800BE888
  c->r[3]=c->r[1]+0x00000020u; // 800BE88C
  c->r[4]=c->r[1]+0x00000014u; // 800BE890
  c->r[5]=c->r[1]+0x0000002Cu; // 800BE894
  c->lr=0x800BE89Cu; f_80296A70(c); // 800BE898
  c->r[4]=c->r[31]+0x00000078u; // 800BE89C
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE8A0
  c->r[6]=R32(c->r[31]+0x00000078u); // 800BE8A4
  c->r[3]=c->r[1]+0x00000038u; // 800BE8A8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800BE8AC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800BE8B0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800BE8B4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BE8B8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BE8BC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BE8C0
  c->lr=0x800BE8C8u; f_80296B0C(c); // 800BE8C4
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BE8C8
  fcmp(c,0,c->f[3],c->f[1]); // 800BE8CC
  if (crb(c,2)) { goto L_800BE940; } // 800BE8D0
  c->r[3]=c->r[1]+0x00000038u; // 800BE8D4
  c->lr=0x800BE8DCu; f_80296B0C(c); // 800BE8D8
  c->f[31]=c->f[1]; // 800BE8DC
  c->r[3]=c->r[1]+0x0000002Cu; // 800BE8E0
  c->lr=0x800BE8E8u; f_80296B0C(c); // 800BE8E4
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[31]); // 800BE8E8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE8EC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE8F0
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BE8F4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800BE8F8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800BE8FC
  c->lr=0x800BE904u; f_8005C22C(c); // 800BE900
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE904
  fcmp(c,0,c->f[1],c->f[0]); // 800BE908
  if (!crb(c,1)) { goto L_800BE924; } // 800BE90C
  {uint32_t ea=c->r[2]+0xFFFF9D28u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BE910
  {uint32_t ea=c->r[2]+0xFFFF9D2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE914
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800BE918
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 800BE91C
  goto L_800BE950; // 800BE920
L_800BE924:;
  {uint32_t ea=c->r[2]+0xFFFF9D28u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE924
  {uint32_t ea=c->r[2]+0xFFFF9D2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BE928
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800BE92C
  {uint32_t ea=c->r[2]+0xFFFF9D30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE930
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800BE934
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 800BE938
  goto L_800BE950; // 800BE93C
L_800BE940:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE940
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BE944
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800BE948
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800BE94C
L_800BE950:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE950
  {uint32_t ea=c->r[2]+0xFFFF9D34u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE954
  fcmp(c,0,c->f[1],c->f[0]); // 800BE958
  if (!crb(c,0)) { goto L_800BE964; } // 800BE95C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800BE960
L_800BE964:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800BE964
  c->r[3]=c->r[30]+0x00000210u; // 800BE968
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE96C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BE970
  {uint32_t ea=c->r[4]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE974
  c->f[3]=c->f[1]; // 800BE978
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800BE97C
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[0]); // 800BE980
  {uint32_t ea=c->r[4]+0x00000078u; c->f[5]=c->ps1[5]=RF32(ea);} // 800BE984
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BE988
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE98C
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 800BE990
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[7]);} // 800BE994
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800BE998
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 800BE99C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800BE9A0
  c->lr=0x800BE9A8u; f_8005D58C(c); // 800BE9A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE9A8
  c->r[3]=c->r[30]+0x00000210u; // 800BE9AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BE9B0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BE9B4
  c->lr=0x800BE9BCu; f_80043E24(c); // 800BE9B8
L_800BE9BC:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800BE9BC
  c->r[0]=R32(c->r[1]+0x00000094u); // 800BE9C0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800BE9C4
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800BE9C8
  c->r[30]=R32(c->r[1]+0x00000078u); // 800BE9CC
  c->lr=c->r[0]; // 800BE9D0
  c->r[1]=c->r[1]+0x00000090u; // 800BE9D4
  return; // 800BE9D8
}

// fn_800BE9DC
void f_800BE9DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE9DC
  c->r[0]=c->lr; // 800BE9E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE9E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE9E8
  c->r[31]=c->r[3]|c->r[3]; // 800BE9EC
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800BE9F0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800BE9F4
  if (crb(c,2)) { goto L_800BEA20; } // 800BE9F8
  c->r[3]=0u+0x80620000u; // 800BE9FC
  c->r[3]=c->r[3]+0x00007688u; // 800BEA00
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BEA04
  cmps(c,0,(int32_t)c->r[3],0); // 800BEA08
  if (crb(c,2)) { goto L_800BEA20; } // 800BEA0C
  c->r[4]=0u+0x0000002Au; // 800BEA10
  c->lr=0x800BEA18u; f_80037670(c); // 800BEA14
  cmps(c,0,(int32_t)c->r[3],0); // 800BEA18
  if (!crb(c,2)) { goto L_800BEA38; } // 800BEA1C
L_800BEA20:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BEA20
  c->r[3]=c->r[31]|c->r[31]; // 800BEA24
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BEA28
  c->ctr=c->r[12]; // 800BEA2C
  if (true) { c->lr=0x800BEA34u; dispatch(c,c->ctr); } // 800BEA30
  goto L_800BEA54; // 800BEA34
L_800BEA38:;
  c->r[4]=R32(c->r[31]+0x00000080u); // 800BEA38
  cmpu(c,0,c->r[4],0x000000FFu); // 800BEA3C
  if (crb(c,2)) { goto L_800BEA54; } // 800BEA40
  c->r[3]=0u+0x80550000u; // 800BEA44
  c->r[5]=0u+0x00000001u; // 800BEA48
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BEA4C
  c->lr=0x800BEA54u; f_8018E2D4(c); // 800BEA50
L_800BEA54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BEA54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BEA58
  c->lr=c->r[0]; // 800BEA5C
  c->r[1]=c->r[1]+0x00000010u; // 800BEA60
  return; // 800BEA64
}

// fn_800BEA68
void f_800BEA68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEA68
  c->r[0]=c->lr; // 800BEA6C
  cmps(c,0,(int32_t)c->r[3],0); // 800BEA70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BEA74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BEA78
  c->r[31]=c->r[4]|c->r[4]; // 800BEA7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BEA80
  c->r[30]=c->r[3]|c->r[3]; // 800BEA84
  if (crb(c,2)) { goto L_800BEAA4; } // 800BEA88
  c->r[4]=0u+0x00000000u; // 800BEA8C
  c->lr=0x800BEA94u; f_8026A06C(c); // 800BEA90
  cmps(c,0,(int32_t)c->r[31],0); // 800BEA94
  if (!crb(c,1)) { goto L_800BEAA4; } // 800BEA98
  c->r[3]=c->r[30]|c->r[30]; // 800BEA9C
  c->lr=0x800BEAA4u; f_8026A268(c); // 800BEAA0
L_800BEAA4:;
  c->r[3]=c->r[30]|c->r[30]; // 800BEAA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BEAA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BEAAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BEAB0
  c->lr=c->r[0]; // 800BEAB4
  c->r[1]=c->r[1]+0x00000010u; // 800BEAB8
  return; // 800BEABC
}

// fn_800BEAC0
void f_800BEAC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEAC0
  c->r[0]=c->lr; // 800BEAC4
  c->r[4]=0u+0x00000000u; // 800BEAC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BEACC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BEAD0
  c->r[31]=c->r[3]|c->r[3]; // 800BEAD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BEAD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BEADC
  c->lr=0x800BEAE4u; f_801F57D0(c); // 800BEAE0
  c->r[3]=c->r[31]|c->r[31]; // 800BEAE4
  c->r[4]=0u+0x00000001u; // 800BEAE8
  c->lr=0x800BEAF0u; f_801F57D0(c); // 800BEAEC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BEAF0
  c->r[3]=c->r[31]|c->r[31]; // 800BEAF4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800BEAF8
  c->ctr=c->r[12]; // 800BEAFC
  if (true) { c->lr=0x800BEB04u; dispatch(c,c->ctr); } // 800BEB00
  c->r[3]=c->r[31]|c->r[31]; // 800BEB04
  c->lr=0x800BEB0Cu; f_801F4B94(c); // 800BEB08
  c->r[3]=0u+0x00000003u; // 800BEB0C
  c->r[0]=0u+0x00000021u; // 800BEB10
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800BEB14
  c->r[3]=c->r[31]|c->r[31]; // 800BEB18
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BEB1C
  W8(c->r[31]+0x0000006Du,c->r[0]); // 800BEB20
  c->lr=0x800BEB28u; f_801F58BC(c); // 800BEB24
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BEB28
  c->r[3]=c->r[31]|c->r[31]; // 800BEB2C
  c->lr=0x800BEB34u; f_801F58BC(c); // 800BEB30
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BEB34
  c->r[29]=0u+0x00000001u; // 800BEB38
  c->r[30]=0u+0x803A0000u; // 800BEB3C
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800BEB40
  c->r[4]=c->r[30]+0xFFFFD088u; // 800BEB44
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BEB48
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BEB4C
  c->lr=0x800BEB54u; f_80256EC4(c); // 800BEB50
  c->r[6]=R32(c->r[31]+0x00000394u); // 800BEB54
  c->r[5]=0u+0x805D0000u; // 800BEB58
  c->r[4]=c->r[31]+0x0000002Cu; // 800BEB5C
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800BEB60
  c->r[3]=c->r[5]+0x000078B0u; // 800BEB64
  c->lr=0x800BEB6Cu; f_802351CC(c); // 800BEB68
  c->r[5]=R32(c->r[31]+0x00000394u); // 800BEB6C
  c->r[0]=0u+0x00000000u; // 800BEB70
  c->r[4]=c->r[30]+0xFFFFD088u; // 800BEB74
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800BEB78
  c->r[3]=R32(c->r[31]+0x00000398u); // 800BEB7C
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800BEB80
  c->r[3]=R32(c->r[31]+0x00000398u); // 800BEB84
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BEB88
  c->lr=0x800BEB90u; f_80256EC4(c); // 800BEB8C
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BEB90
  c->r[5]=0u+0x00000000u; // 800BEB94
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800BEB98
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BEB9C
  c->r[3]=R32(c->r[31]+0x00000398u); // 800BEBA0
  c->r[0]=R8(c->r[4]+0x0000001Du); // 800BEBA4
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800BEBA8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BEBAC
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BEBB0
  c->lr=0x800BEBB8u; f_80250BF4(c); // 800BEBB4
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEBB8
  c->r[6]=0u+0x000000FFu; // 800BEBBC
  c->r[0]=0u+0x00000064u; // 800BEBC0
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEBC4
  W8(c->r[31]+0x00000074u,c->r[29]); // 800BEBC8
  c->r[3]=c->r[31]|c->r[31]; // 800BEBCC
  c->f[2]=c->f[1]; // 800BEBD0
  c->r[4]=0u+0x00000000u; // 800BEBD4
  W8(c->r[31]+0x00000076u,c->r[6]); // 800BEBD8
  c->r[5]=0u+0x00000001u; // 800BEBDC
  W8(c->r[31]+0x00000077u,c->r[6]); // 800BEBE0
  W8(c->r[31]+0x0000007Cu,c->r[6]); // 800BEBE4
  W8(c->r[31]+0x00000029u,c->r[0]); // 800BEBE8
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800BEBEC
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800BEBF0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BEBF4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BEBF8
  c->ctr=c->r[12]; // 800BEBFC
  if (true) { c->lr=0x800BEC04u; dispatch(c,c->ctr); } // 800BEC00
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BEC04
  c->r[3]=c->r[31]|c->r[31]; // 800BEC08
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEC0C
  c->r[5]=0u+0x000001E9u; // 800BEC10
  c->r[12]=R32(c->r[12]+0x00000064u); // 800BEC14
  c->r[6]=0u+0x00000001u; // 800BEC18
  c->f[2]=c->f[1]; // 800BEC1C
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BEC20
  c->ctr=c->r[12]; // 800BEC24
  if (true) { c->lr=0x800BEC2Cu; dispatch(c,c->ctr); } // 800BEC28
  c->r[3]=c->r[31]|c->r[31]; // 800BEC2C
  c->lr=0x800BEC34u; f_801F56F4(c); // 800BEC30
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BEC34
  c->r[3]=c->r[31]|c->r[31]; // 800BEC38
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BEC3C
  c->ctr=c->r[12]; // 800BEC40
  if (true) { c->lr=0x800BEC48u; dispatch(c,c->ctr); } // 800BEC44
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BEC48
  c->r[4]=0u+0x00000003u; // 800BEC4C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BEC50
  c->lr=0x800BEC58u; f_80259C78(c); // 800BEC54
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BEC58
  c->r[4]=0u+0x00000000u; // 800BEC5C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BEC60
  c->lr=0x800BEC68u; f_80259C78(c); // 800BEC64
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BEC68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BEC6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BEC70
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BEC74
  c->lr=c->r[0]; // 800BEC78
  c->r[1]=c->r[1]+0x00000020u; // 800BEC7C
  return; // 800BEC80
}

// fn_800BEC84
void f_800BEC84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEC84
  c->r[0]=c->lr; // 800BEC88
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BEC8C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800BEC90
  W32(c->r[1]+0x00000038u,c->r[30]); // 800BEC94
  c->r[30]=c->r[3]|c->r[3]; // 800BEC98
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800BEC9C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800BECA0
  c->ctr=c->r[12]; // 800BECA4
  if (true) { c->lr=0x800BECACu; dispatch(c,c->ctr); } // 800BECA8
  c->r[3]=c->r[30]|c->r[30]; // 800BECAC
  c->lr=0x800BECB4u; f_801F4C0C(c); // 800BECB0
  c->r[3]=c->r[30]|c->r[30]; // 800BECB4
  c->lr=0x800BECBCu; f_800BF650(c); // 800BECB8
  c->r[3]=c->r[30]|c->r[30]; // 800BECBC
  c->lr=0x800BECC4u; f_801F56F4(c); // 800BECC0
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800BECC4
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800BECC8
  if (crb(c,2)) { goto L_800BED80; } // 800BECCC
  c->r[3]=R32(c->r[30]+0x00000398u); // 800BECD0
  c->r[0]=0u+0x00000001u; // 800BECD4
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800BECD8
  c->r[3]=R32(c->r[30]+0x00000398u); // 800BECDC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BECE0
  c->lr=0x800BECE8u; f_802501B0(c); // 800BECE4
  c->r[3]=R32(c->r[30]+0x00000398u); // 800BECE8
  c->r[4]=c->r[3]+0x000000B0u; // 800BECEC
  c->lr=0x800BECF4u; f_80250F18(c); // 800BECF0
  c->r[4]=R32(c->r[30]+0x00000398u); // 800BECF4
  c->r[3]=c->r[30]|c->r[30]; // 800BECF8
  c->lr=0x800BED00u; f_801F58FC(c); // 800BECFC
  c->r[6]=R32(c->r[30]+0x00000398u); // 800BED00
  c->r[3]=c->r[1]+0x0000002Cu; // 800BED04
  c->r[4]=c->r[1]+0x00000020u; // 800BED08
  c->r[7]=0u+0x00000000u; // 800BED0C
  c->r[5]=c->r[6]+0x00000074u; // 800BED10
  c->r[6]=c->r[6]+0x000000B0u; // 800BED14
  c->lr=0x800BED1Cu; f_8002BE64(c); // 800BED18
  c->r[6]=R32(c->r[1]+0x0000002Cu); // 800BED1C
  c->r[31]=0u+0x805D0000u; // 800BED20
  c->r[5]=R32(c->r[1]+0x00000030u); // 800BED24
  c->r[3]=c->r[31]+0x00003F6Cu; // 800BED28
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BED2C
  c->r[4]=c->r[1]+0x00000014u; // 800BED30
  W32(c->r[1]+0x00000014u,c->r[6]); // 800BED34
  W32(c->r[1]+0x00000018u,c->r[5]); // 800BED38
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800BED3C
  c->lr=0x800BED44u; f_80038D04(c); // 800BED40
  c->r[3]=c->r[1]+0x00000020u; // 800BED44
  c->lr=0x800BED4Cu; f_8002C540(c); // 800BED48
  c->r[6]=R32(c->r[1]+0x00000020u); // 800BED4C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800BED50
  c->r[5]=R32(c->r[1]+0x00000024u); // 800BED54
  c->r[4]=c->r[1]+0x00000008u; // 800BED58
  c->r[0]=R32(c->r[1]+0x00000028u); // 800BED5C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BED60
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BED64
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BED68
  c->lr=0x800BED70u; f_800BEDA4(c); // 800BED6C
  c->r[3]=R32(c->r[30]+0x00000398u); // 800BED70
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BED74
  c->lr=0x800BED7Cu; f_8025037C(c); // 800BED78
  goto L_800BED8C; // 800BED7C
L_800BED80:;
  c->r[3]=R32(c->r[30]+0x00000398u); // 800BED80
  c->r[0]=0u+0x00000000u; // 800BED84
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800BED88
L_800BED8C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BED8C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800BED90
  c->r[30]=R32(c->r[1]+0x00000038u); // 800BED94
  c->lr=c->r[0]; // 800BED98
  c->r[1]=c->r[1]+0x00000040u; // 800BED9C
  return; // 800BEDA0
}

// fn_800BEDA4
void f_800BEDA4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000464u; // 800BEDA4
  f_800361A0(c); return; // 800BEDA8
}

// fn_800BEDAC
void f_800BEDAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEDAC
  c->r[0]=c->lr; // 800BEDB0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BEDB4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800BEDB8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800BEDBC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 800BEDC0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 800BEDC4
  c->r[5]=0u+0x80620000u; // 800BEDC8
  c->r[5]=c->r[5]+0x00007688u; // 800BEDCC
  c->r[4]=0u+0x00000002u; // 800BEDD0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800BEDD4
  c->r[31]=c->r[3]|c->r[3]; // 800BEDD8
  W32(c->r[1]+0x00000038u,c->r[30]); // 800BEDDC
  c->r[3]=R32(c->r[5]+0x00000014u); // 800BEDE0
  c->lr=0x800BEDE8u; f_80037670(c); // 800BEDE4
  cmpu(c,0,c->r[3],0x00000001u); // 800BEDE8
  if (!crb(c,2)) { goto L_800BF3F4; } // 800BEDEC
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800BEDF0
  c->r[0]=rotl(c->r[3],0)&0x00004000u; cr0(c,c->r[0]); // 800BEDF4
  if (!crb(c,2)) { goto L_800BF3F4; } // 800BEDF8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 800BEDFC
  if (crb(c,2)) { goto L_800BEE34; } // 800BEE00
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BEE04
  c->r[3]=c->r[31]|c->r[31]; // 800BEE08
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEE0C
  c->r[4]=0u+0x00000003u; // 800BEE10
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BEE14
  c->r[5]=0u+0x00000001u; // 800BEE18
  c->f[2]=c->f[1]; // 800BEE1C
  c->ctr=c->r[12]; // 800BEE20
  if (true) { c->lr=0x800BEE28u; dispatch(c,c->ctr); } // 800BEE24
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BEE28
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800BEE2C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BEE30
L_800BEE34:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BEE34
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800BEE38
  if (!crb(c,2)) { goto L_800BEFC4; } // 800BEE3C
  c->r[0]=R8(c->r[31]+0x00000075u); // 800BEE40
  c->r[3]=0u+0x00000001u; // 800BEE44
  W8(c->r[31]+0x00000074u,c->r[3]); // 800BEE48
  cmps(c,0,(int32_t)c->r[0],1); // 800BEE4C
  if (crb(c,2)) { goto L_800BEEF8; } // 800BEE50
  if (!crb(c,0)) { goto L_800BEE64; } // 800BEE54
  cmps(c,0,(int32_t)c->r[0],0); // 800BEE58
  if (!crb(c,0)) { goto L_800BEE70; } // 800BEE5C
  goto L_800BEF18; // 800BEE60
L_800BEE64:;
  cmps(c,0,(int32_t)c->r[0],3); // 800BEE64
  if (!crb(c,0)) { goto L_800BEF18; } // 800BEE68
  goto L_800BEED4; // 800BEE6C
L_800BEE70:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEE70
  c->lr=0x800BEE78u; f_8002C1B0(c); // 800BEE74
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BEE78
  fcmp(c,0,c->f[1],c->f[2]); // 800BEE7C
  if (!crb(c,0)) { goto L_800BEE90; } // 800BEE80
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEE84
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800BEE88
  goto L_800BEF18; // 800BEE8C
L_800BEE90:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEE90
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEE94
  fcmp(c,0,c->f[1],c->f[0]); // 800BEE98
  if (!crb(c,0)) { goto L_800BEEAC; } // 800BEE9C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 800BEEA0
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800BEEA4
  goto L_800BEEB4; // 800BEEA8
L_800BEEAC:;
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 800BEEAC
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800BEEB0
L_800BEEB4:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEEB4
  c->lr=0x800BEEBCu; f_8002C1B0(c); // 800BEEB8
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEEBC
  fcmp(c,0,c->f[1],c->f[0]); // 800BEEC0
  if (!crb(c,0)) { goto L_800BEF18; } // 800BEEC4
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEEC8
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800BEECC
  goto L_800BEF18; // 800BEED0
L_800BEED4:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BEED4
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEED8
  {uint32_t ea=c->r[2]+0xFFFF9D4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEEDC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800BEEE0
  fcmp(c,0,c->f[1],c->f[0]); // 800BEEE4
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[1]);} // 800BEEE8
  if (!crb(c,0)) { goto L_800BEF18; } // 800BEEEC
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800BEEF0
  goto L_800BEF18; // 800BEEF4
L_800BEEF8:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BEEF8
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEEFC
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEF00
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800BEF04
  fcmp(c,0,c->f[1],c->f[0]); // 800BEF08
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[1]);} // 800BEF0C
  if (!crb(c,1)) { goto L_800BEF18; } // 800BEF10
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800BEF14
L_800BEF18:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BEF18
  c->r[0]=R32(c->r[3]+0x00000030u); // 800BEF1C
  cmps(c,0,(int32_t)c->r[0],2); // 800BEF20
  if (crb(c,2)) { goto L_800BEF48; } // 800BEF24
  if (!crb(c,0)) { goto L_800BEF3C; } // 800BEF28
  cmps(c,0,(int32_t)c->r[0],0); // 800BEF2C
  if (crb(c,2)) { goto L_800BEF48; } // 800BEF30
  if (!crb(c,0)) { goto L_800BEF54; } // 800BEF34
  goto L_800BF3E4; // 800BEF38
L_800BEF3C:;
  cmps(c,0,(int32_t)c->r[0],4); // 800BEF3C
  if (crb(c,2)) { goto L_800BEF8C; } // 800BEF40
  goto L_800BF3E4; // 800BEF44
L_800BEF48:;
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BEF48
  c->lr=0x800BEF50u; f_802501B0(c); // 800BEF4C
  goto L_800BF3E4; // 800BEF50
L_800BEF54:;
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BEF54
  c->lr=0x800BEF5Cu; f_802501B0(c); // 800BEF58
  cmps(c,0,(int32_t)c->r[3],0); // 800BEF5C
  if (crb(c,2)) { goto L_800BF3E4; } // 800BEF60
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BEF64
  c->r[3]=c->r[31]|c->r[31]; // 800BEF68
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEF6C
  c->r[4]=0u+0x00000002u; // 800BEF70
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BEF74
  c->r[5]=0u+0x00000000u; // 800BEF78
  c->f[2]=c->f[1]; // 800BEF7C
  c->ctr=c->r[12]; // 800BEF80
  if (true) { c->lr=0x800BEF88u; dispatch(c,c->ctr); } // 800BEF84
  goto L_800BF3E4; // 800BEF88
L_800BEF8C:;
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BEF8C
  c->lr=0x800BEF94u; f_802501B0(c); // 800BEF90
  cmps(c,0,(int32_t)c->r[3],0); // 800BEF94
  if (crb(c,2)) { goto L_800BF3E4; } // 800BEF98
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BEF9C
  c->r[3]=c->r[31]|c->r[31]; // 800BEFA0
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEFA4
  c->r[4]=0u+0x00000000u; // 800BEFA8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BEFAC
  c->r[5]=0u+0x00000000u; // 800BEFB0
  c->f[2]=c->f[1]; // 800BEFB4
  c->ctr=c->r[12]; // 800BEFB8
  if (true) { c->lr=0x800BEFC0u; dispatch(c,c->ctr); } // 800BEFBC
  goto L_800BF3E4; // 800BEFC0
L_800BEFC4:;
  c->r[3]=0u+0x80620000u; // 800BEFC4
  c->r[3]=c->r[3]+0x000079C0u; // 800BEFC8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEFCC
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEFD0
  c->f[1]=-c->f[1]; // 800BEFD4
  c->f[2]=-c->f[0]; // 800BEFD8
  c->lr=0x800BEFE0u; f_8005C22C(c); // 800BEFDC
  c->f[2]=-c->f[1]; // 800BEFE0
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEFE4
  fcmp(c,0,c->f[2],c->f[0]); // 800BEFE8
  if (!crb(c,1)) { goto L_800BF004; } // 800BEFEC
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEFF0
  {uint32_t ea=c->r[2]+0xFFFF9D54u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEFF4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800BEFF8
  c->f[30]=c->ps1[30]=S(c->f[1]/c->f[0]); // 800BEFFC
  goto L_800BF01C; // 800BF000
L_800BF004:;
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF004
  {uint32_t ea=c->r[2]+0xFFFF9D54u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF008
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800BF00C
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF010
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800BF014
  c->f[30]=c->ps1[30]=S(c->f[0]+c->f[1]); // 800BF018
L_800BF01C:;
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF01C
  fcmp(c,0,c->f[30],c->f[0]); // 800BF020
  if (!crb(c,1)) { goto L_800BF030; } // 800BF024
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF028
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[0]); // 800BF02C
L_800BF030:;
  c->r[0]=R8(c->r[31]+0x00000074u); // 800BF030
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BF034
  cmps(c,0,(int32_t)c->r[0],0); // 800BF038
  if (crb(c,2)) { goto L_800BF120; } // 800BF03C
  c->r[0]=0u+0x00000000u; // 800BF040
  c->r[3]=0u+0x80620000u; // 800BF044
  W8(c->r[31]+0x00000074u,c->r[0]); // 800BF048
  c->r[3]=c->r[3]+0x00007688u; // 800BF04C
  c->r[4]=0u+0x00000003u; // 800BF050
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BF054
  c->lr=0x800BF05Cu; f_8003560C(c); // 800BF058
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800BF05C
  W8(c->r[31]+0x00000075u,c->r[3]); // 800BF060
  cmps(c,0,(int32_t)c->r[0],1); // 800BF064
  if (crb(c,2)) { goto L_800BF0E4; } // 800BF068
  if (!crb(c,0)) { goto L_800BF07C; } // 800BF06C
  cmps(c,0,(int32_t)c->r[0],0); // 800BF070
  if (!crb(c,0)) { goto L_800BF088; } // 800BF074
  goto L_800BF110; // 800BF078
L_800BF07C:;
  cmps(c,0,(int32_t)c->r[0],3); // 800BF07C
  if (!crb(c,0)) { goto L_800BF110; } // 800BF080
  goto L_800BF0B4; // 800BF084
L_800BF088:;
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF088
  c->r[3]=c->r[31]|c->r[31]; // 800BF08C
  c->r[4]=0u+0x00000000u; // 800BF090
  c->r[5]=0u+0x00000001u; // 800BF094
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[1]);} // 800BF098
  c->f[2]=c->f[1]; // 800BF09C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BF0A0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BF0A4
  c->ctr=c->r[12]; // 800BF0A8
  if (true) { c->lr=0x800BF0B0u; dispatch(c,c->ctr); } // 800BF0AC
  goto L_800BF110; // 800BF0B0
L_800BF0B4:;
  {uint32_t ea=c->r[2]+0xFFFF9D4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF0B4
  c->r[3]=c->r[31]|c->r[31]; // 800BF0B8
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF0BC
  c->r[4]=0u+0x00000003u; // 800BF0C0
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800BF0C4
  c->r[5]=0u+0x00000001u; // 800BF0C8
  c->f[2]=c->f[1]; // 800BF0CC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BF0D0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BF0D4
  c->ctr=c->r[12]; // 800BF0D8
  if (true) { c->lr=0x800BF0E0u; dispatch(c,c->ctr); } // 800BF0DC
  goto L_800BF110; // 800BF0E0
L_800BF0E4:;
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF0E4
  c->r[3]=c->r[31]|c->r[31]; // 800BF0E8
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF0EC
  c->r[4]=0u+0x00000003u; // 800BF0F0
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800BF0F4
  c->r[5]=0u+0x00000001u; // 800BF0F8
  c->f[2]=c->f[1]; // 800BF0FC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BF100
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BF104
  c->ctr=c->r[12]; // 800BF108
  if (true) { c->lr=0x800BF110u; dispatch(c,c->ctr); } // 800BF10C
L_800BF110:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF110
  c->f[0]=-c->f[0]; // 800BF114
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[30]); // 800BF118
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800BF11C
L_800BF120:;
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF120
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF124
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[1]); // 800BF128
  fcmp(c,0,c->f[30],c->f[0]); // 800BF12C
  if (!crb(c,1)) { goto L_800BF140; } // 800BF130
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF134
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[0]); // 800BF138
  goto L_800BF154; // 800BF13C
L_800BF140:;
  {uint32_t ea=c->r[2]+0xFFFF9D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF140
  fcmp(c,0,c->f[30],c->f[0]); // 800BF144
  if (!crb(c,0)) { goto L_800BF154; } // 800BF148
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF14C
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[0]); // 800BF150
L_800BF154:;
  c->f[1]=c->f[30]; // 800BF154
  c->lr=0x800BF15Cu; f_8002C1B0(c); // 800BF158
  {uint32_t ea=c->r[2]+0xFFFF9D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF15C
  fcmp(c,0,c->f[1],c->f[0]); // 800BF160
  if (!crb(c,0)) { goto L_800BF1A8; } // 800BF164
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF168
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[30]); // 800BF16C
  c->lr=0x800BF174u; f_8002C1B0(c); // 800BF170
  {uint32_t ea=c->r[2]+0xFFFF9D64u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF174
  fcmp(c,0,c->f[1],c->f[2]); // 800BF178
  if (!crb(c,1)) { goto L_800BF1A4; } // 800BF17C
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF180
  fcmp(c,0,c->f[30],c->f[0]); // 800BF184
  if (!crb(c,0)) { goto L_800BF198; } // 800BF188
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800BF18C
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800BF190
  goto L_800BF1A8; // 800BF194
L_800BF198:;
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800BF198
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800BF19C
  goto L_800BF1A8; // 800BF1A0
L_800BF1A4:;
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[30]);} // 800BF1A4
L_800BF1A8:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF1A8
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF1AC
  fcmp(c,0,c->f[1],c->f[0]); // 800BF1B0
  if (!crb(c,1)) { goto L_800BF23C; } // 800BF1B4
  c->r[0]=R8(c->r[31]+0x00000075u); // 800BF1B8
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800BF1BC
  cmpu(c,0,c->r[0],0x00000001u); // 800BF1C0
  if (crb(c,2)) { goto L_800BF37C; } // 800BF1C4
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BF1C8
  c->r[4]=0u+0x00000001u; // 800BF1CC
  c->r[3]=0u+0x80620000u; // 800BF1D0
  W8(c->r[31]+0x00000075u,c->r[4]); // 800BF1D4
  c->r[0]=c->r[0]|0x00004000u; // 800BF1D8
  c->r[4]=0u+0x00000003u; // 800BF1DC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BF1E0
  c->r[3]=c->r[3]+0x00007688u; // 800BF1E4
  c->r[5]=0u+0x00000001u; // 800BF1E8
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BF1EC
  c->lr=0x800BF1F4u; f_80038998(c); // 800BF1F0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF1F4
  c->r[4]=0u+0x00000003u; // 800BF1F8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF1FC
  c->lr=0x800BF204u; f_80259C78(c); // 800BF200
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF204
  c->r[4]=0u+0x00000000u; // 800BF208
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF20C
  c->lr=0x800BF214u; f_80259C78(c); // 800BF210
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BF214
  c->r[3]=c->r[31]|c->r[31]; // 800BF218
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF21C
  c->r[4]=0u+0x00000001u; // 800BF220
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BF224
  c->r[5]=0u+0x00000001u; // 800BF228
  c->f[2]=c->f[1]; // 800BF22C
  c->ctr=c->r[12]; // 800BF230
  if (true) { c->lr=0x800BF238u; dispatch(c,c->ctr); } // 800BF234
  goto L_800BF37C; // 800BF238
L_800BF23C:;
  {uint32_t ea=c->r[2]+0xFFFF9D4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF23C
  fcmp(c,0,c->f[1],c->f[0]); // 800BF240
  if (!crb(c,0)) { goto L_800BF2CC; } // 800BF244
  c->r[0]=R8(c->r[31]+0x00000075u); // 800BF248
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800BF24C
  cmpu(c,0,c->r[0],0x00000002u); // 800BF250
  if (crb(c,2)) { goto L_800BF37C; } // 800BF254
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BF258
  c->r[4]=0u+0x00000002u; // 800BF25C
  c->r[3]=0u+0x80620000u; // 800BF260
  W8(c->r[31]+0x00000075u,c->r[4]); // 800BF264
  c->r[0]=c->r[0]|0x00004000u; // 800BF268
  c->r[4]=0u+0x00000003u; // 800BF26C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BF270
  c->r[3]=c->r[3]+0x00007688u; // 800BF274
  c->r[5]=0u+0x00000002u; // 800BF278
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BF27C
  c->lr=0x800BF284u; f_80038998(c); // 800BF280
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF284
  c->r[4]=0u+0x00000002u; // 800BF288
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF28C
  c->lr=0x800BF294u; f_80259C78(c); // 800BF290
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF294
  c->r[4]=0u+0x00000001u; // 800BF298
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF29C
  c->lr=0x800BF2A4u; f_80259C78(c); // 800BF2A0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BF2A4
  c->r[3]=c->r[31]|c->r[31]; // 800BF2A8
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF2AC
  c->r[4]=0u+0x00000001u; // 800BF2B0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BF2B4
  c->r[5]=0u+0x00000001u; // 800BF2B8
  c->f[2]=c->f[1]; // 800BF2BC
  c->ctr=c->r[12]; // 800BF2C0
  if (true) { c->lr=0x800BF2C8u; dispatch(c,c->ctr); } // 800BF2C4
  goto L_800BF37C; // 800BF2C8
L_800BF2CC:;
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF2CC
  fcmp(c,0,c->f[31],c->f[0]); // 800BF2D0
  if (!crb(c,0)) { goto L_800BF2E0; } // 800BF2D4
  fcmp(c,0,c->f[1],c->f[0]); // 800BF2D8
  if (crb(c,1)) { goto L_800BF2F8; } // 800BF2DC
L_800BF2E0:;
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF2E0
  fcmp(c,0,c->f[31],c->f[1]); // 800BF2E4
  if (!crb(c,1)) { goto L_800BF37C; } // 800BF2E8
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF2EC
  fcmp(c,0,c->f[0],c->f[1]); // 800BF2F0
  if (!crb(c,0)) { goto L_800BF37C; } // 800BF2F4
L_800BF2F8:;
  c->r[0]=R8(c->r[31]+0x00000075u); // 800BF2F8
  cmps(c,0,(int32_t)c->r[0],0); // 800BF2FC
  if (crb(c,2)) { goto L_800BF37C; } // 800BF300
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BF304
  c->r[4]=0u+0x00000000u; // 800BF308
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF30C
  c->r[3]=0u+0x80620000u; // 800BF310
  c->r[0]=c->r[0]|0x00004000u; // 800BF314
  W8(c->r[31]+0x00000075u,c->r[4]); // 800BF318
  c->r[3]=c->r[3]+0x00007688u; // 800BF31C
  c->r[4]=0u+0x00000003u; // 800BF320
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800BF324
  c->r[5]=0u+0x00000000u; // 800BF328
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BF32C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BF330
  c->lr=0x800BF338u; f_80038998(c); // 800BF334
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF338
  c->r[4]=0u+0x00000002u; // 800BF33C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF340
  c->lr=0x800BF348u; f_80259C78(c); // 800BF344
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF348
  c->r[4]=0u+0x00000000u; // 800BF34C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF350
  c->lr=0x800BF358u; f_80259C78(c); // 800BF354
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BF358
  c->r[3]=c->r[31]|c->r[31]; // 800BF35C
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF360
  c->r[4]=0u+0x00000004u; // 800BF364
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BF368
  c->r[5]=0u+0x00000001u; // 800BF36C
  c->f[2]=c->f[1]; // 800BF370
  c->ctr=c->r[12]; // 800BF374
  if (true) { c->lr=0x800BF37Cu; dispatch(c,c->ctr); } // 800BF378
L_800BF37C:;
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF37C
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF380
  c->f[0]=c->ps1[0]=S(c->f[31]/c->f[1]); // 800BF384
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800BF388
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800BF38C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BF390
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[1]);} // 800BF394
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800BF398
  c->r[3]=R32(c->r[1]+0x00000024u); // 800BF39C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800BF3A0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800BF3A4
  if (crb(c,2)) { goto L_800BF3E4; } // 800BF3A8
  c->r[0]=R8(c->r[31]+0x00000029u); // 800BF3AC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800BF3B0
  if (crb(c,2)) { goto L_800BF3E4; } // 800BF3B4
  W8(c->r[31]+0x00000029u,c->r[3]); // 800BF3B8
  c->r[3]=0u+0x00000000u; // 800BF3BC
  c->r[4]=0u+0x00000000u; // 800BF3C0
  c->r[5]=0u+0x00000002u; // 800BF3C4
  c->lr=0x800BF3CCu; f_8027C0C8(c); // 800BF3C8
  c->r[3]=c->r[31]|c->r[31]; // 800BF3CC
  c->r[4]=0u+0x00000004u; // 800BF3D0
  c->r[5]=0u+0x00000003u; // 800BF3D4
  c->r[6]=0u+0x00000001u; // 800BF3D8
  c->r[7]=0u+0x00000001u; // 800BF3DC
  c->lr=0x800BF3E4u; f_8017900C(c); // 800BF3E0
L_800BF3E4:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF3E4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF3E8
  c->lr=0x800BF3F0u; f_802501B0(c); // 800BF3EC
  goto L_800BF544; // 800BF3F0
L_800BF3F4:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF3F4
  c->r[0]=R32(c->r[3]+0x00000030u); // 800BF3F8
  cmps(c,0,(int32_t)c->r[0],2); // 800BF3FC
  if (crb(c,2)) { goto L_800BF53C; } // 800BF400
  if (!crb(c,0)) { goto L_800BF418; } // 800BF404
  cmps(c,0,(int32_t)c->r[0],0); // 800BF408
  if (crb(c,2)) { goto L_800BF428; } // 800BF40C
  if (!crb(c,0)) { goto L_800BF4B0; } // 800BF410
  goto L_800BF544; // 800BF414
L_800BF418:;
  cmps(c,0,(int32_t)c->r[0],4); // 800BF418
  if (crb(c,2)) { goto L_800BF4B0; } // 800BF41C
  if (!crb(c,0)) { goto L_800BF544; } // 800BF420
  goto L_800BF47C; // 800BF424
L_800BF428:;
  c->r[3]=0u+0x80620000u; // 800BF428
  c->r[4]=0u+0x00000003u; // 800BF42C
  c->r[3]=c->r[3]+0x00007688u; // 800BF430
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BF434
  c->lr=0x800BF43Cu; f_8003560C(c); // 800BF438
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800BF43C
  W8(c->r[31]+0x00000075u,c->r[3]); // 800BF440
  if (crb(c,2)) { goto L_800BF46C; } // 800BF444
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BF448
  c->r[3]=c->r[31]|c->r[31]; // 800BF44C
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF450
  c->r[4]=0u+0x00000001u; // 800BF454
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BF458
  c->r[5]=0u+0x00000000u; // 800BF45C
  c->f[2]=c->f[1]; // 800BF460
  c->ctr=c->r[12]; // 800BF464
  if (true) { c->lr=0x800BF46Cu; dispatch(c,c->ctr); } // 800BF468
L_800BF46C:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF46C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF470
  c->lr=0x800BF478u; f_802501B0(c); // 800BF474
  goto L_800BF544; // 800BF478
L_800BF47C:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BF47C
  c->r[3]=c->r[31]|c->r[31]; // 800BF480
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF484
  c->r[4]=0u+0x00000004u; // 800BF488
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BF48C
  c->r[5]=0u+0x00000000u; // 800BF490
  c->f[2]=c->f[1]; // 800BF494
  c->ctr=c->r[12]; // 800BF498
  if (true) { c->lr=0x800BF4A0u; dispatch(c,c->ctr); } // 800BF49C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF4A0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF4A4
  c->lr=0x800BF4ACu; f_802501B0(c); // 800BF4A8
  goto L_800BF544; // 800BF4AC
L_800BF4B0:;
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF4B0
  c->lr=0x800BF4B8u; f_802501B0(c); // 800BF4B4
  cmps(c,0,(int32_t)c->r[3],0); // 800BF4B8
  if (crb(c,2)) { goto L_800BF544; } // 800BF4BC
  c->r[3]=0u+0x80620000u; // 800BF4C0
  c->r[4]=0u+0x00000003u; // 800BF4C4
  c->r[3]=c->r[3]+0x00007688u; // 800BF4C8
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BF4CC
  c->lr=0x800BF4D4u; f_8003560C(c); // 800BF4D0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800BF4D4
  W8(c->r[31]+0x00000075u,c->r[3]); // 800BF4D8
  if (crb(c,2)) { goto L_800BF508; } // 800BF4DC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BF4E0
  c->r[3]=c->r[31]|c->r[31]; // 800BF4E4
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF4E8
  c->r[4]=0u+0x00000002u; // 800BF4EC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BF4F0
  c->r[5]=0u+0x00000000u; // 800BF4F4
  c->f[2]=c->f[1]; // 800BF4F8
  c->ctr=c->r[12]; // 800BF4FC
  if (true) { c->lr=0x800BF504u; dispatch(c,c->ctr); } // 800BF500
  goto L_800BF52C; // 800BF504
L_800BF508:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BF508
  c->r[3]=c->r[31]|c->r[31]; // 800BF50C
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF510
  c->r[4]=0u+0x00000000u; // 800BF514
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BF518
  c->r[5]=0u+0x00000000u; // 800BF51C
  c->f[2]=c->f[1]; // 800BF520
  c->ctr=c->r[12]; // 800BF524
  if (true) { c->lr=0x800BF52Cu; dispatch(c,c->ctr); } // 800BF528
L_800BF52C:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF52C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF530
  c->lr=0x800BF538u; f_802501B0(c); // 800BF534
  goto L_800BF544; // 800BF538
L_800BF53C:;
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF53C
  c->lr=0x800BF544u; f_802501B0(c); // 800BF540
L_800BF544:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF544
  c->r[4]=0u+0x803A0000u; // 800BF548
  c->r[4]=c->r[4]+0xFFFFD088u; // 800BF54C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF550
  c->r[4]=c->r[4]+0x00000009u; // 800BF554
  c->lr=0x800BF55Cu; f_80256EC4(c); // 800BF558
  c->r[6]=R32(c->r[31]+0x00000394u); // 800BF55C
  c->r[30]=c->r[3]|c->r[3]; // 800BF560
  c->r[4]=c->r[30]|c->r[30]; // 800BF564
  c->r[5]=c->r[1]+0x00000014u; // 800BF568
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800BF56C
  c->lr=0x800BF574u; f_8025EA54(c); // 800BF570
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF574
  {uint32_t ea=c->r[2]+0xFFFF9D44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF578
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 800BF57C
  fcmp(c,0,c->f[1],c->f[0]); // 800BF580
  if (!crb(c,0)) { goto L_800BF594; } // 800BF584
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF588
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BF58C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BF590
L_800BF594:;
  c->r[6]=R32(c->r[1]+0x00000014u); // 800BF594
  c->r[4]=c->r[30]|c->r[30]; // 800BF598
  c->r[3]=R32(c->r[1]+0x00000018u); // 800BF59C
  c->r[5]=c->r[1]+0x00000008u; // 800BF5A0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800BF5A4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BF5A8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800BF5AC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BF5B0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF5B4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF5B8
  c->lr=0x800BF5C0u; f_8025E9C0(c); // 800BF5BC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800BF5C0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800BF5C4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 800BF5C8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 800BF5CC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800BF5D0
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BF5D4
  c->r[30]=R32(c->r[1]+0x00000038u); // 800BF5D8
  c->lr=c->r[0]; // 800BF5DC
  c->r[1]=c->r[1]+0x00000060u; // 800BF5E0
  return; // 800BF5E4
}

// fn_800BF5E8
void f_800BF5E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF5E8
  c->r[0]=c->lr; // 800BF5EC
  c->r[5]=0u+0x00000000u; // 800BF5F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF5F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF5F8
  c->r[31]=c->r[3]|c->r[3]; // 800BF5FC
  c->r[3]=0u+0x0000032Au; // 800BF600
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BF604
  c->r[4]=c->r[4]+0x0000010Cu; // 800BF608
  c->lr=0x800BF610u; f_8024EE50(c); // 800BF60C
  cmps(c,0,(int32_t)c->r[3],0); // 800BF610
  if (crb(c,2)) { goto L_800BF620; } // 800BF614
  c->r[3]=0u+0x00000000u; // 800BF618
  goto L_800BF63C; // 800BF61C
L_800BF620:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BF620
  c->r[3]=0u+0x000000C9u; // 800BF624
  c->r[5]=0u+0x00000000u; // 800BF628
  c->r[4]=c->r[4]+0x0000010Cu; // 800BF62C
  c->lr=0x800BF634u; f_8024EE50(c); // 800BF630
  c->r[0]=cntlz(c->r[3]); // 800BF634
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BF638
L_800BF63C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF63C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF640
  c->lr=c->r[0]; // 800BF644
  c->r[1]=c->r[1]+0x00000010u; // 800BF648
  return; // 800BF64C
}

// fn_800BF650
void f_800BF650(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF650
  c->r[0]=c->lr; // 800BF654
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800BF658
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800BF65C
  c->r[31]=c->r[3]|c->r[3]; // 800BF660
  c->r[0]=R8(c->r[3]+0x00000075u); // 800BF664
  cmps(c,0,(int32_t)c->r[0],1); // 800BF668
  if (crb(c,2)) { goto L_800BF6F0; } // 800BF66C
  if (!crb(c,0)) { goto L_800BF680; } // 800BF670
  cmps(c,0,(int32_t)c->r[0],0); // 800BF674
  if (!crb(c,0)) { goto L_800BF68C; } // 800BF678
  goto L_800BF7F4; // 800BF67C
L_800BF680:;
  cmps(c,0,(int32_t)c->r[0],3); // 800BF680
  if (!crb(c,0)) { goto L_800BF7F4; } // 800BF684
  goto L_800BF774; // 800BF688
L_800BF68C:;
  c->r[4]=R8(c->r[3]+0x00000076u); // 800BF68C
  cmpu(c,0,c->r[4],0x000000FFu); // 800BF690
  if (crb(c,2)) { goto L_800BF6AC; } // 800BF694
  c->r[3]=0u+0x80550000u; // 800BF698
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BF69C
  c->lr=0x800BF6A4u; f_8018D738(c); // 800BF6A0
  c->r[0]=0u+0x000000FFu; // 800BF6A4
  W8(c->r[31]+0x00000076u,c->r[0]); // 800BF6A8
L_800BF6AC:;
  c->r[4]=R8(c->r[31]+0x00000077u); // 800BF6AC
  cmpu(c,0,c->r[4],0x000000FFu); // 800BF6B0
  if (crb(c,2)) { goto L_800BF6CC; } // 800BF6B4
  c->r[3]=0u+0x80550000u; // 800BF6B8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BF6BC
  c->lr=0x800BF6C4u; f_8018D738(c); // 800BF6C0
  c->r[0]=0u+0x000000FFu; // 800BF6C4
  W8(c->r[31]+0x00000077u,c->r[0]); // 800BF6C8
L_800BF6CC:;
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800BF6CC
  cmpu(c,0,c->r[4],0x000000FFu); // 800BF6D0
  if (crb(c,2)) { goto L_800BF7F4; } // 800BF6D4
  c->r[3]=0u+0x80550000u; // 800BF6D8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BF6DC
  c->lr=0x800BF6E4u; f_8018D738(c); // 800BF6E0
  c->r[0]=0u+0x000000FFu; // 800BF6E4
  W8(c->r[31]+0x0000007Cu,c->r[0]); // 800BF6E8
  goto L_800BF7F4; // 800BF6EC
L_800BF6F0:;
  c->r[0]=R8(c->r[3]+0x00000076u); // 800BF6F0
  cmpu(c,0,c->r[0],0x000000FFu); // 800BF6F4
  if (!crb(c,2)) { goto L_800BF720; } // 800BF6F8
  c->r[4]=0u+0x803A0000u; // 800BF6FC
  c->r[3]=0u+0x80550000u; // 800BF700
  c->r[4]=c->r[4]+0xFFFFD088u; // 800BF704
  c->r[5]=0u+0x00000000u; // 800BF708
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BF70C
  c->r[6]=0u+0x00000000u; // 800BF710
  c->r[4]=c->r[4]+0x00000011u; // 800BF714
  c->lr=0x800BF71Cu; f_8018D3E4(c); // 800BF718
  W8(c->r[31]+0x00000076u,c->r[3]); // 800BF71C
L_800BF720:;
  c->r[4]=R8(c->r[31]+0x00000077u); // 800BF720
  cmpu(c,0,c->r[4],0x000000FFu); // 800BF724
  if (crb(c,2)) { goto L_800BF740; } // 800BF728
  c->r[3]=0u+0x80550000u; // 800BF72C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BF730
  c->lr=0x800BF738u; f_8018D738(c); // 800BF734
  c->r[0]=0u+0x000000FFu; // 800BF738
  W8(c->r[31]+0x00000077u,c->r[0]); // 800BF73C
L_800BF740:;
  c->r[0]=R8(c->r[31]+0x0000007Cu); // 800BF740
  cmpu(c,0,c->r[0],0x000000FFu); // 800BF744
  if (!crb(c,2)) { goto L_800BF7F4; } // 800BF748
  c->r[4]=0u+0x803A0000u; // 800BF74C
  c->r[3]=0u+0x80550000u; // 800BF750
  c->r[4]=c->r[4]+0xFFFFD088u; // 800BF754
  c->r[5]=0u+0x00000000u; // 800BF758
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BF75C
  c->r[6]=0u+0x00000000u; // 800BF760
  c->r[4]=c->r[4]+0x00000015u; // 800BF764
  c->lr=0x800BF76Cu; f_8018D3E4(c); // 800BF768
  W8(c->r[31]+0x0000007Cu,c->r[3]); // 800BF76C
  goto L_800BF7F4; // 800BF770
L_800BF774:;
  c->r[4]=R8(c->r[3]+0x00000076u); // 800BF774
  cmpu(c,0,c->r[4],0x000000FFu); // 800BF778
  if (crb(c,2)) { goto L_800BF794; } // 800BF77C
  c->r[3]=0u+0x80550000u; // 800BF780
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BF784
  c->lr=0x800BF78Cu; f_8018D738(c); // 800BF788
  c->r[0]=0u+0x000000FFu; // 800BF78C
  W8(c->r[31]+0x00000076u,c->r[0]); // 800BF790
L_800BF794:;
  c->r[0]=R8(c->r[31]+0x00000077u); // 800BF794
  cmpu(c,0,c->r[0],0x000000FFu); // 800BF798
  if (!crb(c,2)) { goto L_800BF7C4; } // 800BF79C
  c->r[4]=0u+0x803A0000u; // 800BF7A0
  c->r[3]=0u+0x80550000u; // 800BF7A4
  c->r[4]=c->r[4]+0xFFFFD088u; // 800BF7A8
  c->r[5]=0u+0x00000000u; // 800BF7AC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BF7B0
  c->r[6]=0u+0x00000000u; // 800BF7B4
  c->r[4]=c->r[4]+0x00000019u; // 800BF7B8
  c->lr=0x800BF7C0u; f_8018D3E4(c); // 800BF7BC
  W8(c->r[31]+0x00000077u,c->r[3]); // 800BF7C0
L_800BF7C4:;
  c->r[0]=R8(c->r[31]+0x0000007Cu); // 800BF7C4
  cmpu(c,0,c->r[0],0x000000FFu); // 800BF7C8
  if (!crb(c,2)) { goto L_800BF7F4; } // 800BF7CC
  c->r[4]=0u+0x803A0000u; // 800BF7D0
  c->r[3]=0u+0x80550000u; // 800BF7D4
  c->r[4]=c->r[4]+0xFFFFD088u; // 800BF7D8
  c->r[5]=0u+0x00000000u; // 800BF7DC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BF7E0
  c->r[6]=0u+0x00000000u; // 800BF7E4
  c->r[4]=c->r[4]+0x00000015u; // 800BF7E8
  c->lr=0x800BF7F0u; f_8018D3E4(c); // 800BF7EC
  W8(c->r[31]+0x0000007Cu,c->r[3]); // 800BF7F0
L_800BF7F4:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 800BF7F4
  cmpu(c,0,c->r[0],0x000000FFu); // 800BF7F8
  if (crb(c,2)) { goto L_800BF834; } // 800BF7FC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF800
  c->r[4]=0u+0x803A0000u; // 800BF804
  c->r[4]=c->r[4]+0xFFFFD088u; // 800BF808
  c->r[5]=c->r[1]+0x00000068u; // 800BF80C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF810
  c->r[4]=c->r[4]+0x0000001Du; // 800BF814
  c->r[6]=0u+0x00000001u; // 800BF818
  c->lr=0x800BF820u; f_80257018(c); // 800BF81C
  c->r[3]=0u+0x80550000u; // 800BF820
  c->r[4]=R8(c->r[31]+0x00000076u); // 800BF824
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BF828
  c->r[5]=c->r[1]+0x00000068u; // 800BF82C
  c->lr=0x800BF834u; f_8018DEB8(c); // 800BF830
L_800BF834:;
  c->r[0]=R8(c->r[31]+0x00000077u); // 800BF834
  cmpu(c,0,c->r[0],0x000000FFu); // 800BF838
  if (crb(c,2)) { goto L_800BF874; } // 800BF83C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF840
  c->r[4]=0u+0x803A0000u; // 800BF844
  c->r[4]=c->r[4]+0xFFFFD088u; // 800BF848
  c->r[5]=c->r[1]+0x00000038u; // 800BF84C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF850
  c->r[4]=c->r[4]+0x0000002Bu; // 800BF854
  c->r[6]=0u+0x00000001u; // 800BF858
  c->lr=0x800BF860u; f_80257018(c); // 800BF85C
  c->r[3]=0u+0x80550000u; // 800BF860
  c->r[4]=R8(c->r[31]+0x00000077u); // 800BF864
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BF868
  c->r[5]=c->r[1]+0x00000038u; // 800BF86C
  c->lr=0x800BF874u; f_8018DEB8(c); // 800BF870
L_800BF874:;
  c->r[0]=R8(c->r[31]+0x0000007Cu); // 800BF874
  cmpu(c,0,c->r[0],0x000000FFu); // 800BF878
  if (crb(c,2)) { goto L_800BF8B0; } // 800BF87C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BF880
  c->r[4]=0u+0x803A0000u; // 800BF884
  c->r[4]=c->r[4]+0xFFFFD088u; // 800BF888
  c->r[5]=c->r[1]+0x00000008u; // 800BF88C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BF890
  c->r[6]=0u+0x00000001u; // 800BF894
  c->lr=0x800BF89Cu; f_80257018(c); // 800BF898
  c->r[3]=0u+0x80550000u; // 800BF89C
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800BF8A0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BF8A4
  c->r[5]=c->r[1]+0x00000008u; // 800BF8A8
  c->lr=0x800BF8B0u; f_8018DEB8(c); // 800BF8AC
L_800BF8B0:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800BF8B0
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800BF8B4
  c->lr=c->r[0]; // 800BF8B8
  c->r[1]=c->r[1]+0x000000A0u; // 800BF8BC
  return; // 800BF8C0
}

// fn_800BF8C4
void f_800BF8C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF8C4
  c->r[0]=c->lr; // 800BF8C8
  c->r[4]=0u+0x00000000u; // 800BF8CC
  c->r[7]=0u+0x803D0000u; // 800BF8D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BF8D4
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800BF8D8
  W16(c->r[3]+0x000003BCu,c->r[4]); // 800BF8DC
  c->r[4]=c->r[1]+0x00000008u; // 800BF8E0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 800BF8E4
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800BF8E8
  {uint32_t ea=c->r[7]+0x00000730u; c->r[6]=R32(ea); c->r[7]=ea;} // 800BF8EC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BF8F0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BF8F4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BF8F8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BF8FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BF900
  c->lr=0x800BF908u; f_800BF918(c); // 800BF904
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BF908
  c->lr=c->r[0]; // 800BF90C
  c->r[1]=c->r[1]+0x00000020u; // 800BF910
  return; // 800BF914
}

// fn_800BF918
void f_800BF918(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF918
  c->r[0]=c->lr; // 800BF91C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF920
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF924
  c->r[31]=c->r[4]|c->r[4]; // 800BF928
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BF92C
  c->r[30]=c->r[3]|c->r[3]; // 800BF930
  c->r[3]=c->r[31]|c->r[31]; // 800BF934
  c->lr=0x800BF93Cu; f_802B9FDC(c); // 800BF938
  cmps(c,0,(int32_t)c->r[3],0); // 800BF93C
  if (crb(c,2)) { goto L_800BF95C; } // 800BF940
  c->r[3]=R32(c->r[31]+0x00000000u); // 800BF944
  c->r[0]=R32(c->r[31]+0x00000004u); // 800BF948
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800BF94C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800BF950
  c->r[0]=R32(c->r[31]+0x00000008u); // 800BF954
  W32(c->r[30]+0x00000024u,c->r[0]); // 800BF958
L_800BF95C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF95C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF960
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BF964
  c->lr=c->r[0]; // 800BF968
  c->r[1]=c->r[1]+0x00000010u; // 800BF96C
  return; // 800BF970
}

// fn_800BF974
void f_800BF974(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF974
  c->r[0]=c->lr; // 800BF978
  cmps(c,0,(int32_t)c->r[3],0); // 800BF97C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF980
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF984
  c->r[31]=c->r[4]|c->r[4]; // 800BF988
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BF98C
  c->r[30]=c->r[3]|c->r[3]; // 800BF990
  if (crb(c,2)) { goto L_800BF9B0; } // 800BF994
  c->r[4]=0u+0x00000000u; // 800BF998
  c->lr=0x800BF9A0u; f_8026A06C(c); // 800BF99C
  cmps(c,0,(int32_t)c->r[31],0); // 800BF9A0
  if (!crb(c,1)) { goto L_800BF9B0; } // 800BF9A4
  c->r[3]=c->r[30]|c->r[30]; // 800BF9A8
  c->lr=0x800BF9B0u; f_8026A268(c); // 800BF9AC
L_800BF9B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800BF9B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF9B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BF9B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF9BC
  c->lr=c->r[0]; // 800BF9C0
  c->r[1]=c->r[1]+0x00000010u; // 800BF9C4
  return; // 800BF9C8
}

// fn_800BF9CC
void f_800BF9CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF9CC
  c->r[0]=c->lr; // 800BF9D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BF9D4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800BF9D8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800BF9DC
  c->r[4]=0u+0x00000000u; // 800BF9E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BF9E4
  c->r[31]=c->r[3]|c->r[3]; // 800BF9E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BF9EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BF9F0
  c->lr=0x800BF9F8u; f_801F57D0(c); // 800BF9F4
  c->r[3]=c->r[31]|c->r[31]; // 800BF9F8
  c->r[4]=0u+0x00000001u; // 800BF9FC
  c->lr=0x800BFA04u; f_801F57D0(c); // 800BFA00
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BFA04
  c->r[3]=c->r[31]|c->r[31]; // 800BFA08
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800BFA0C
  c->ctr=c->r[12]; // 800BFA10
  if (true) { c->lr=0x800BFA18u; dispatch(c,c->ctr); } // 800BFA14
  c->r[3]=c->r[31]|c->r[31]; // 800BFA18
  c->lr=0x800BFA20u; f_801F4B94(c); // 800BFA1C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BFA20
  c->r[4]=0u+0x00000003u; // 800BFA24
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFA28
  c->r[5]=0u+0x00000022u; // 800BFA2C
  c->r[0]=c->r[0]|0x00000804u; // 800BFA30
  c->r[29]=0u+0x00000001u; // 800BFA34
  c->r[0]=rotl(c->r[0],0)&0x00003FFFu; // 800BFA38
  c->r[30]=0u+0x00000000u; // 800BFA3C
  c->r[3]=0u+0x80550000u; // 800BFA40
  W8(c->r[31]+0x0000006Cu,c->r[4]); // 800BFA44
  c->f[3]=c->f[1]; // 800BFA48
  {uint32_t ea=c->r[31]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BFA4C
  W8(c->r[31]+0x0000006Du,c->r[5]); // 800BFA50
  c->r[3]=c->r[3]+0x00003D60u; // 800BFA54
  {uint32_t ea=c->r[2]+0xFFFF9D7Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BFA58
  c->r[4]=c->r[31]+0x0000002Cu; // 800BFA5C
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800BFA60
  c->r[5]=c->r[31]+0x00000030u; // 800BFA64
  c->r[6]=0u+0x00000000u; // 800BFA68
  c->r[7]=0u+0x00000000u; // 800BFA6C
  W8(c->r[31]+0x00000028u,c->r[30]); // 800BFA70
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BFA74
  W16(c->r[31]+0x00000078u,c->r[0]); // 800BFA78
  c->lr=0x800BFA80u; f_801D5488(c); // 800BFA7C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BFA80
  c->r[3]=c->r[31]|c->r[31]; // 800BFA84
  c->lr=0x800BFA8Cu; f_801F58BC(c); // 800BFA88
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFA8C
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800BFA90
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFA94
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFA98
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800BFA9C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BFAA0
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800BFAA4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BFAA8
  c->lr=0x800BFAB0u; f_802501B0(c); // 800BFAAC
  c->r[3]=0u+0x805D0000u; // 800BFAB0
  c->r[4]=c->r[31]+0x0000002Cu; // 800BFAB4
  c->r[3]=c->r[3]+0x000078B0u; // 800BFAB8
  c->lr=0x800BFAC0u; f_802351CC(c); // 800BFABC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BFAC0
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800BFAC4
  c->r[3]=c->r[31]|c->r[31]; // 800BFAC8
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BFACC
  c->lr=0x800BFAD4u; f_801F58BC(c); // 800BFAD0
  c->r[3]=R32(c->r[31]+0x00000398u); // 800BFAD4
  c->r[4]=0u+0x803A0000u; // 800BFAD8
  c->r[4]=c->r[4]+0xFFFFD0D4u; // 800BFADC
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800BFAE0
  c->r[3]=R32(c->r[31]+0x00000398u); // 800BFAE4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BFAE8
  c->lr=0x800BFAF0u; f_80256EC4(c); // 800BFAEC
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BFAF0
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800BFAF4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BFAF8
  c->r[3]=R32(c->r[31]+0x00000398u); // 800BFAFC
  c->r[0]=R8(c->r[4]+0x0000001Du); // 800BFB00
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800BFB04
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BFB08
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800BFB0C
  if (crb(c,2)) { goto L_800BFB28; } // 800BFB10
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFB14
  c->r[5]=0u+0x00000001u; // 800BFB18
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BFB1C
  c->lr=0x800BFB24u; f_80250BF4(c); // 800BFB20
  goto L_800BFB38; // 800BFB24
L_800BFB28:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFB28
  c->r[5]=0u+0x00000000u; // 800BFB2C
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BFB30
  c->lr=0x800BFB38u; f_80250BF4(c); // 800BFB34
L_800BFB38:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BFB38
  c->r[3]=c->r[31]|c->r[31]; // 800BFB3C
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFB40
  c->r[5]=0u+0x000001FEu; // 800BFB44
  c->r[12]=R32(c->r[12]+0x00000064u); // 800BFB48
  c->r[6]=0u+0x00000001u; // 800BFB4C
  c->f[2]=c->f[1]; // 800BFB50
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BFB54
  c->ctr=c->r[12]; // 800BFB58
  if (true) { c->lr=0x800BFB60u; dispatch(c,c->ctr); } // 800BFB5C
  c->r[0]=0u+0x00000000u; // 800BFB60
  c->r[30]=0u+0x803A0000u; // 800BFB64
  W32(c->r[31]+0x00000088u,c->r[0]); // 800BFB68
  c->r[30]=c->r[30]+0xFFFFD0D4u; // 800BFB6C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFB70
  c->r[4]=c->r[30]+0x00000009u; // 800BFB74
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BFB78
  c->lr=0x800BFB80u; f_80256EC4(c); // 800BFB7C
  W8(c->r[31]+0x0000007Cu,c->r[3]); // 800BFB80
  c->r[4]=c->r[30]+0x00000011u; // 800BFB84
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFB88
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BFB8C
  c->lr=0x800BFB94u; f_80256EC4(c); // 800BFB90
  W8(c->r[31]+0x0000007Du,c->r[3]); // 800BFB94
  c->r[4]=c->r[30]+0x00000018u; // 800BFB98
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFB9C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BFBA0
  c->lr=0x800BFBA8u; f_80256EC4(c); // 800BFBA4
  W8(c->r[31]+0x0000007Eu,c->r[3]); // 800BFBA8
  c->r[4]=c->r[30]+0x00000023u; // 800BFBAC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFBB0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BFBB4
  c->lr=0x800BFBBCu; f_80256EC4(c); // 800BFBB8
  W8(c->r[31]+0x0000007Fu,c->r[3]); // 800BFBBC
  c->r[3]=c->r[31]|c->r[31]; // 800BFBC0
  c->lr=0x800BFBC8u; f_801F56F4(c); // 800BFBC4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BFBC8
  c->r[3]=c->r[31]|c->r[31]; // 800BFBCC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BFBD0
  c->ctr=c->r[12]; // 800BFBD4
  if (true) { c->lr=0x800BFBDCu; dispatch(c,c->ctr); } // 800BFBD8
  c->r[3]=c->r[31]|c->r[31]; // 800BFBDC
  c->lr=0x800BFBE4u; f_800C0840(c); // 800BFBE0
  c->r[0]=0u+0x00000001u; // 800BFBE4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 800BFBE8
  W32(c->r[31]+0x00000444u,c->r[0]); // 800BFBEC
  c->lr=0x800BFBF4u; f_8024E174(c); // 800BFBF0
  W32(c->r[31]+0x00000438u,c->r[3]); // 800BFBF4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800BFBF8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800BFBFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BFC00
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BFC04
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BFC08
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BFC0C
  c->lr=c->r[0]; // 800BFC10
  c->r[1]=c->r[1]+0x00000030u; // 800BFC14
  return; // 800BFC18
}

// fn_800BFC1C
void f_800BFC1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFC1C
  c->r[0]=c->lr; // 800BFC20
  W32(c->r[1]+0x00000074u,c->r[0]); // 800BFC24
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[31]);} // 800BFC28
  W32(c->r[1]+0x00000064u,c->r[31]); // 800BFC2C
  c->r[31]=c->r[3]|c->r[3]; // 800BFC30
  W32(c->r[1]+0x00000060u,c->r[30]); // 800BFC34
  c->lr=0x800BFC3Cu; f_800C0468(c); // 800BFC38
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BFC3C
  c->r[3]=c->r[31]|c->r[31]; // 800BFC40
  c->r[12]=R32(c->r[12]+0x00000068u); // 800BFC44
  c->ctr=c->r[12]; // 800BFC48
  if (true) { c->lr=0x800BFC50u; dispatch(c,c->ctr); } // 800BFC4C
  c->r[3]=c->r[31]|c->r[31]; // 800BFC50
  c->lr=0x800BFC58u; f_801F4C0C(c); // 800BFC54
  c->r[3]=c->r[31]|c->r[31]; // 800BFC58
  c->lr=0x800BFC60u; f_800C06AC(c); // 800BFC5C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BFC60
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800BFC64
  if (crb(c,2)) { goto L_800BFC9C; } // 800BFC68
  c->r[0]=R16(c->r[31]+0x00000078u); // 800BFC6C
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800BFC70
  if (!crb(c,2)) { goto L_800BFCC8; } // 800BFC74
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFC78
  c->r[4]=0u+0xFFFFFFFFu; // 800BFC7C
  c->r[5]=0u+0x00000000u; // 800BFC80
  c->lr=0x800BFC88u; f_80250DB4(c); // 800BFC84
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFC88
  c->r[5]=0u+0x00000001u; // 800BFC8C
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BFC90
  c->lr=0x800BFC98u; f_80250BF4(c); // 800BFC94
  goto L_800BFCC8; // 800BFC98
L_800BFC9C:;
  c->r[0]=R16(c->r[31]+0x00000078u); // 800BFC9C
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800BFCA0
  if (crb(c,2)) { goto L_800BFCC8; } // 800BFCA4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFCA8
  c->r[4]=0u+0xFFFFFFFFu; // 800BFCAC
  c->r[5]=0u+0x00000000u; // 800BFCB0
  c->lr=0x800BFCB8u; f_80250DB4(c); // 800BFCB4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFCB8
  c->r[5]=0u+0x00000000u; // 800BFCBC
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BFCC0
  c->lr=0x800BFCC8u; f_80250BF4(c); // 800BFCC4
L_800BFCC8:;
  c->r[3]=R32(c->r[31]+0x00000088u); // 800BFCC8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BFCCC
  cmps(c,0,(int32_t)c->r[3],0); // 800BFCD0
  W16(c->r[31]+0x00000078u,c->r[0]); // 800BFCD4
  if (crb(c,2)) { goto L_800BFD80; } // 800BFCD8
  c->lr=0x800BFCE0u; f_800C5728(c); // 800BFCDC
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BFCE0
  c->f[31]=c->f[1]; // 800BFCE4
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800BFCE8
  if (crb(c,2)) { goto L_800BFD3C; } // 800BFCEC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFCF0
  c->r[5]=c->r[1]+0x00000054u; // 800BFCF4
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800BFCF8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BFCFC
  c->lr=0x800BFD04u; f_8025EA54(c); // 800BFD00
  c->f[0]=-c->f[31]; // 800BFD04
  c->r[3]=R32(c->r[1]+0x00000054u); // 800BFD08
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800BFD0C
  c->r[5]=c->r[1]+0x00000030u; // 800BFD10
  W32(c->r[1]+0x00000030u,c->r[3]); // 800BFD14
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800BFD18
  c->r[3]=R32(c->r[1]+0x00000058u); // 800BFD1C
  W32(c->r[1]+0x00000038u,c->r[0]); // 800BFD20
  W32(c->r[1]+0x00000034u,c->r[3]); // 800BFD24
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFD28
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800BFD2C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BFD30
  c->lr=0x800BFD38u; f_8025E9C0(c); // 800BFD34
  goto L_800BFD80; // 800BFD38
L_800BFD3C:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFD3C
  c->r[5]=c->r[1]+0x00000054u; // 800BFD40
  c->r[4]=R8(c->r[31]+0x0000007Du); // 800BFD44
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BFD48
  c->lr=0x800BFD50u; f_8025EA54(c); // 800BFD4C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[31]);} // 800BFD50
  c->r[5]=c->r[1]+0x00000024u; // 800BFD54
  c->r[4]=R32(c->r[1]+0x00000054u); // 800BFD58
  c->r[3]=R32(c->r[1]+0x00000058u); // 800BFD5C
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800BFD60
  W32(c->r[1]+0x00000024u,c->r[4]); // 800BFD64
  W32(c->r[1]+0x00000028u,c->r[3]); // 800BFD68
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800BFD6C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFD70
  c->r[4]=R8(c->r[31]+0x0000007Du); // 800BFD74
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BFD78
  c->lr=0x800BFD80u; f_8025E9C0(c); // 800BFD7C
L_800BFD80:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BFD80
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800BFD84
  if (crb(c,2)) { goto L_800BFDC0; } // 800BFD88
  c->r[0]=R8(c->r[31]+0x00000028u); // 800BFD8C
  cmps(c,0,(int32_t)c->r[0],0); // 800BFD90
  if (crb(c,2)) { goto L_800BFDC0; } // 800BFD94
  c->r[3]=0u+0x805D0000u; // 800BFD98
  c->r[4]=c->r[1]+0x00000008u; // 800BFD9C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800BFDA0
  c->r[5]=0u+0x00000001u; // 800BFDA4
  c->lr=0x800BFDACu; f_8007C6C8(c); // 800BFDA8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BFDAC
  c->r[4]=R32(c->r[1]+0x00000008u); // 800BFDB0
  c->r[3]=c->r[3]+0x00000074u; // 800BFDB4
  c->r[4]=c->r[4]+0x00000074u; // 800BFDB8
  c->lr=0x800BFDC0u; f_800361A0(c); // 800BFDBC
L_800BFDC0:;
  c->r[3]=c->r[31]|c->r[31]; // 800BFDC0
  c->lr=0x800BFDC8u; f_801F56F4(c); // 800BFDC4
  c->r[3]=R32(c->r[31]+0x00000398u); // 800BFDC8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800BFDCC
  cmpu(c,0,c->r[0],0x00000001u); // 800BFDD0
  if (!crb(c,2)) { goto L_800BFE68; } // 800BFDD4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BFDD8
  c->lr=0x800BFDE0u; f_802501B0(c); // 800BFDDC
  c->r[3]=R32(c->r[31]+0x00000398u); // 800BFDE0
  c->r[4]=c->r[3]+0x000000B0u; // 800BFDE4
  c->lr=0x800BFDECu; f_80250F18(c); // 800BFDE8
  c->r[6]=R32(c->r[31]+0x00000398u); // 800BFDEC
  c->r[3]=c->r[1]+0x00000048u; // 800BFDF0
  c->r[4]=c->r[1]+0x0000003Cu; // 800BFDF4
  c->r[7]=0u+0x00000000u; // 800BFDF8
  c->r[5]=c->r[6]+0x00000074u; // 800BFDFC
  c->r[6]=c->r[6]+0x000000B0u; // 800BFE00
  c->lr=0x800BFE08u; f_8002BE64(c); // 800BFE04
  c->r[6]=R32(c->r[1]+0x00000048u); // 800BFE08
  c->r[30]=0u+0x805D0000u; // 800BFE0C
  c->r[5]=R32(c->r[1]+0x0000004Cu); // 800BFE10
  c->r[3]=c->r[30]+0x00003F6Cu; // 800BFE14
  c->r[0]=R32(c->r[1]+0x00000050u); // 800BFE18
  c->r[4]=c->r[1]+0x00000018u; // 800BFE1C
  W32(c->r[1]+0x00000018u,c->r[6]); // 800BFE20
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 800BFE24
  W32(c->r[1]+0x00000020u,c->r[0]); // 800BFE28
  c->lr=0x800BFE30u; f_80038D04(c); // 800BFE2C
  c->r[3]=c->r[1]+0x0000003Cu; // 800BFE30
  c->lr=0x800BFE38u; f_8002C540(c); // 800BFE34
  c->r[6]=R32(c->r[1]+0x0000003Cu); // 800BFE38
  c->r[3]=c->r[30]+0x00003F6Cu; // 800BFE3C
  c->r[5]=R32(c->r[1]+0x00000040u); // 800BFE40
  c->r[4]=c->r[1]+0x0000000Cu; // 800BFE44
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BFE48
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800BFE4C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800BFE50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFE54
  c->lr=0x800BFE5Cu; f_800BEDA4(c); // 800BFE58
  c->r[3]=R32(c->r[31]+0x00000398u); // 800BFE5C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BFE60
  c->lr=0x800BFE68u; f_8025037C(c); // 800BFE64
L_800BFE68:;
  c->r[3]=c->r[31]|c->r[31]; // 800BFE68
  c->lr=0x800BFE70u; f_800C08E4(c); // 800BFE6C
  c->r[0]=R32(c->r[1]+0x00000074u); // 800BFE70
  {uint32_t ea=c->r[1]+0x00000068u; c->f[31]=RF64(ea);} // 800BFE74
  c->r[31]=R32(c->r[1]+0x00000064u); // 800BFE78
  c->r[30]=R32(c->r[1]+0x00000060u); // 800BFE7C
  c->lr=c->r[0]; // 800BFE80
  c->r[1]=c->r[1]+0x00000070u; // 800BFE84
  return; // 800BFE88
}

// fn_800BFE8C
void f_800BFE8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFE8C
  c->r[0]=c->lr; // 800BFE90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFE94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BFE98
  c->r[31]=c->r[3]|c->r[3]; // 800BFE9C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800BFEA0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BFEA4
  c->lr=0x800BFEACu; f_802501B0(c); // 800BFEA8
  c->r[3]=c->r[31]|c->r[31]; // 800BFEAC
  c->r[4]=0u+0x00000000u; // 800BFEB0
  c->lr=0x800BFEB8u; f_801F5244(c); // 800BFEB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFEB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BFEBC
  c->lr=c->r[0]; // 800BFEC0
  c->r[1]=c->r[1]+0x00000010u; // 800BFEC4
  return; // 800BFEC8
}

// fn_800BFECC
void f_800BFECC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFECC
  c->r[0]=c->lr; // 800BFED0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BFED4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BFED8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BFEDC
  c->r[30]=0u+0x00000000u; // 800BFEE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BFEE4
  c->r[29]=c->r[3]|c->r[3]; // 800BFEE8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800BFEEC
  W8(c->r[3]+0x00000028u,c->r[30]); // 800BFEF0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BFEF4
  c->lr=0x800BFEFCu; f_802501B0(c); // 800BFEF8
  c->r[3]=c->r[29]|c->r[29]; // 800BFEFC
  c->r[4]=0u+0x00000000u; // 800BFF00
  c->lr=0x800BFF08u; f_801F5244(c); // 800BFF04
  c->r[4]=R32(c->r[29]+0x00000394u); // 800BFF08
  c->r[3]=c->r[29]+0x0000002Cu; // 800BFF0C
  c->r[4]=c->r[4]+0x0000005Cu; // 800BFF10
  c->lr=0x800BFF18u; f_800361A0(c); // 800BFF14
  c->r[4]=R32(c->r[29]+0x00000394u); // 800BFF18
  c->r[3]=c->r[29]|c->r[29]; // 800BFF1C
  c->lr=0x800BFF24u; f_801F5418(c); // 800BFF20
  cmps(c,0,(int32_t)c->r[3],0); // 800BFF24
  if (!crb(c,0)) { goto L_800BFF60; } // 800BFF28
  c->r[0]=R16(c->r[29]+0x000003BEu); // 800BFF2C
  c->r[3]=0u+0x00000001u; // 800BFF30
  W8(c->r[29]+0x0000006Fu,c->r[3]); // 800BFF34
  c->r[3]=c->r[29]|c->r[29]; // 800BFF38
  c->r[0]=c->r[0]|0x00000080u; // 800BFF3C
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFF40
  W16(c->r[29]+0x000003BEu,c->r[0]); // 800BFF44
  c->r[4]=0u+0x00000064u; // 800BFF48
  c->r[5]=0u+0x00000000u; // 800BFF4C
  c->r[6]=0u+0x00000000u; // 800BFF50
  c->r[7]=0u+0x00000000u; // 800BFF54
  c->lr=0x800BFF5Cu; f_801F4D44(c); // 800BFF58
  goto L_800BFF90; // 800BFF5C
L_800BFF60:;
  c->r[31]=0u+0x805D0000u; // 800BFF60
  c->r[3]=c->r[31]+0x00003F6Cu; // 800BFF64
  c->lr=0x800BFF6Cu; f_800447E4(c); // 800BFF68
  cmpu(c,0,c->r[3],0x00000001u); // 800BFF6C
  if (!crb(c,2)) { goto L_800BFF7C; } // 800BFF70
  W8(c->r[29]+0x0000006Fu,c->r[30]); // 800BFF74
  goto L_800BFF88; // 800BFF78
L_800BFF7C:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800BFF7C
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800BFF80
  W8(c->r[29]+0x0000006Fu,c->r[0]); // 800BFF84
L_800BFF88:;
  c->r[3]=c->r[29]|c->r[29]; // 800BFF88
  c->lr=0x800BFF90u; f_801F5B14(c); // 800BFF8C
L_800BFF90:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BFF90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BFF94
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BFF98
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BFF9C
  c->lr=c->r[0]; // 800BFFA0
  c->r[1]=c->r[1]+0x00000020u; // 800BFFA4
  return; // 800BFFA8
}

// fn_800BFFAC
void f_800BFFAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFFAC
  c->r[0]=c->lr; // 800BFFB0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BFFB4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800BFFB8
  c->r[31]=c->r[3]|c->r[3]; // 800BFFBC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800BFFC0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BFFC4
  c->lr=0x800BFFCCu; f_802501B0(c); // 800BFFC8
  c->r[3]=c->r[31]+0x00000038u; // 800BFFCC
  c->r[4]=c->r[31]+0x0000002Cu; // 800BFFD0
  c->lr=0x800BFFD8u; f_800361A0(c); // 800BFFD4
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFFD8
  c->r[3]=0u+0x80550000u; // 800BFFDC
  c->r[3]=c->r[3]+0x00003D60u; // 800BFFE0
  c->r[4]=c->r[31]+0x00000038u; // 800BFFE4
  c->f[2]=c->f[1]; // 800BFFE8
  c->r[5]=c->r[1]+0x00000008u; // 800BFFEC
  c->f[3]=c->f[1]; // 800BFFF0
  c->r[6]=0u+0x00000000u; // 800BFFF4
  c->r[7]=0u+0x00000000u; // 800BFFF8
  c->lr=0x800C0000u; f_801D5488(c); // 800BFFFC
  c->r[5]=R32(c->r[31]+0x00000394u); // 800C0000
  c->r[3]=c->r[31]+0x00000060u; // 800C0004
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0008
  c->r[4]=c->r[5]+0x00000068u; // 800C000C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800C0010
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0014
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800C0018
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C001C
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800C0020
  c->lr=0x800C0028u; f_800361A0(c); // 800C0024
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0028
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C002C
  c->lr=0x800C0034u; f_802501B0(c); // 800C0030
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800C0034
  c->r[0]=0u+0x00000001u; // 800C0038
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C003C
  c->r[4]=c->r[31]+0x0000002Cu; // 800C0040
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0044
  c->r[3]=c->r[3]|0x00002000u; // 800C0048
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800C004C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0050
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800C0054
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800C0058
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800C005C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0060
  c->r[3]=c->r[3]+0x0000005Cu; // 800C0064
  c->lr=0x800C006Cu; f_800361A0(c); // 800C0068
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C006C
  c->r[4]=0u+0x00000040u; // 800C0070
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0074
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800C0078
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C007C
  c->r[3]=c->r[3]+0x0000001Cu; // 800C0080
  c->lr=0x800C0088u; f_802518A4(c); // 800C0084
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0088
  c->r[4]=0u+0x00000006u; // 800C008C
  c->r[3]=c->r[3]+0x0000001Cu; // 800C0090
  c->lr=0x800C0098u; f_80251824(c); // 800C0094
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0098
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C009C
  c->lr=0x800C00A4u; f_802501B0(c); // 800C00A0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C00A4
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800C00A8
  cmps(c,0,(int32_t)c->r[0],0); // 800C00AC
  if (crb(c,2)) { goto L_800C0140; } // 800C00B0
  c->r[3]=c->r[3]+0x00000068u; // 800C00B4
  c->r[4]=c->r[31]+0x00000060u; // 800C00B8
  c->lr=0x800C00C0u; f_800361A0(c); // 800C00BC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C00C0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C00C4
  c->lr=0x800C00CCu; f_8025037C(c); // 800C00C8
  c->r[6]=R32(c->r[31]+0x00000394u); // 800C00CC
  c->r[3]=c->r[1]+0x00000024u; // 800C00D0
  c->r[4]=c->r[31]+0x00000060u; // 800C00D4
  c->r[5]=c->r[1]+0x00000030u; // 800C00D8
  c->r[6]=c->r[6]+0x000000B0u; // 800C00DC
  c->r[7]=0u+0x00000000u; // 800C00E0
  c->lr=0x800C00E8u; f_8002BE64(c); // 800C00E4
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800C00E8
  c->r[3]=0u+0x805D0000u; // 800C00EC
  c->r[0]=R32(c->r[31]+0x00000030u); // 800C00F0
  c->r[3]=c->r[3]+0x00003F6Cu; // 800C00F4
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C00F8
  c->r[4]=c->r[31]|c->r[31]; // 800C00FC
  W32(c->r[1]+0x00000018u,c->r[5]); // 800C0100
  c->r[7]=c->r[1]+0x00000018u; // 800C0104
  c->r[6]=0u+0x00000003u; // 800C0108
  c->r[8]=0u+0x00000000u; // 800C010C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C0110
  c->r[0]=R32(c->r[31]+0x00000034u); // 800C0114
  W32(c->r[1]+0x00000020u,c->r[0]); // 800C0118
  c->r[3]=R32(c->r[31]+0x00000438u); // 800C011C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800C0120
  c->lr=0x800C0128u; f_801FA6A4(c); // 800C0124
  c->r[6]=0u+0x803A0000u; // 800C0128
  c->r[3]=R32(c->r[31]+0x00000438u); // 800C012C
  c->r[5]=c->r[31]+0x00000044u; // 800C0130
  c->r[4]=0u+0x00000000u; // 800C0134
  c->r[6]=c->r[6]+0xFFFFD0C8u; // 800C0138
  c->lr=0x800C0140u; f_801FBEC0(c); // 800C013C
L_800C0140:;
  c->r[3]=c->r[31]|c->r[31]; // 800C0140
  c->r[4]=0u+0x00000000u; // 800C0144
  c->lr=0x800C014Cu; f_801F7C00(c); // 800C0148
  c->r[7]=0u+0x803D0000u; // 800C014C
  {uint32_t ea=c->r[7]+0x000007D8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C0150
  c->r[3]=c->r[31]|c->r[31]; // 800C0154
  c->r[4]=c->r[1]+0x0000000Cu; // 800C0158
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C015C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C0160
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C0164
  W32(c->r[1]+0x00000010u,c->r[5]); // 800C0168
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C016C
  c->lr=0x800C0174u; f_800C0188(c); // 800C0170
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C0174
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C0178
  c->lr=c->r[0]; // 800C017C
  c->r[1]=c->r[1]+0x00000050u; // 800C0180
  return; // 800C0184
}

// fn_800C0188
void f_800C0188(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0188
  c->r[0]=c->lr; // 800C018C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0190
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0194
  c->r[31]=c->r[4]|c->r[4]; // 800C0198
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C019C
  c->r[30]=c->r[3]|c->r[3]; // 800C01A0
  c->r[3]=c->r[31]|c->r[31]; // 800C01A4
  c->lr=0x800C01ACu; f_802B9FDC(c); // 800C01A8
  cmps(c,0,(int32_t)c->r[3],0); // 800C01AC
  if (crb(c,2)) { goto L_800C01CC; } // 800C01B0
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C01B4
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C01B8
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800C01BC
  W32(c->r[30]+0x00000020u,c->r[0]); // 800C01C0
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C01C4
  W32(c->r[30]+0x00000024u,c->r[0]); // 800C01C8
L_800C01CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C01CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C01D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C01D4
  c->lr=c->r[0]; // 800C01D8
  c->r[1]=c->r[1]+0x00000010u; // 800C01DC
  return; // 800C01E0
}

// fn_800C01E4
void f_800C01E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C01E4
  c->r[0]=c->lr; // 800C01E8
  c->r[4]=0u+0x00000000u; // 800C01EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C01F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C01F4
  c->r[31]=c->r[3]|c->r[3]; // 800C01F8
  c->r[3]=R32(c->r[3]+0x00000438u); // 800C01FC
  c->lr=0x800C0204u; f_801FAF00(c); // 800C0200
  cmps(c,0,(int32_t)c->r[3],0); // 800C0204
  if (!crb(c,2)) { goto L_800C029C; } // 800C0208
  c->r[3]=c->r[31]|c->r[31]; // 800C020C
  c->r[4]=0u+0x00000016u; // 800C0210
  c->lr=0x800C0218u; f_801F5AB4(c); // 800C0214
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800C0218
  c->r[3]=c->r[31]+0x0000002Cu; // 800C021C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C0220
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800C0224
  c->r[0]=c->r[0]|0x00000004u; // 800C0228
  c->r[4]=c->r[4]+0x0000005Cu; // 800C022C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800C0230
  c->lr=0x800C0238u; f_800361A0(c); // 800C0234
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C0238
  c->r[3]=c->r[31]+0x00000060u; // 800C023C
  c->r[4]=c->r[4]+0x00000068u; // 800C0240
  c->lr=0x800C0248u; f_800361A0(c); // 800C0244
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800C0248
  c->r[3]=0u+0x805D0000u; // 800C024C
  c->r[0]=R32(c->r[31]+0x00000030u); // 800C0250
  c->r[3]=c->r[3]+0x00006CF8u; // 800C0254
  c->r[4]=c->r[1]+0x00000008u; // 800C0258
  c->r[5]=0u+0x00040000u; // 800C025C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C0260
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C0264
  c->r[0]=R32(c->r[31]+0x00000034u); // 800C0268
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C026C
  c->lr=0x800C0274u; f_802236F8(c); // 800C0270
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800C0274
  c->r[3]=c->r[31]|c->r[31]; // 800C0278
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C027C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C0280
  c->ctr=c->r[12]; // 800C0284
  if (true) { c->lr=0x800C028Cu; dispatch(c,c->ctr); } // 800C0288
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C028C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C0290
  c->lr=0x800C0298u; f_8025037C(c); // 800C0294
  goto L_800C02BC; // 800C0298
L_800C029C:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C029C
  c->r[3]=c->r[31]+0x0000002Cu; // 800C02A0
  c->r[4]=c->r[4]+0x0000005Cu; // 800C02A4
  c->lr=0x800C02ACu; f_800361A0(c); // 800C02A8
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C02AC
  c->r[3]=c->r[31]+0x00000060u; // 800C02B0
  c->r[4]=c->r[4]+0x00000068u; // 800C02B4
  c->lr=0x800C02BCu; f_800361A0(c); // 800C02B8
L_800C02BC:;
  c->r[3]=c->r[31]|c->r[31]; // 800C02BC
  c->r[4]=0u+0x00000000u; // 800C02C0
  c->lr=0x800C02C8u; f_801F7C00(c); // 800C02C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C02C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C02CC
  c->lr=c->r[0]; // 800C02D0
  c->r[1]=c->r[1]+0x00000020u; // 800C02D4
  return; // 800C02D8
}

// fn_800C02DC
void f_800C02DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C02DC
  c->r[0]=c->lr; // 800C02E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C02E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C02E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C02EC
  c->r[30]=c->r[3]|c->r[3]; // 800C02F0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C02F4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800C02F8
  c->lr=0x800C0300u; f_802501B0(c); // 800C02FC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C0300
  c->r[0]=0u+0x00000000u; // 800C0304
  c->r[31]=0u+0x00000001u; // 800C0308
  c->r[3]=c->r[30]+0x0000002Cu; // 800C030C
  W8(c->r[4]+0x0000014Cu,c->r[0]); // 800C0310
  c->r[4]=c->r[30]+0x000003CCu; // 800C0314
  c->r[5]=R32(c->r[30]+0x00000394u); // 800C0318
  W8(c->r[5]+0x0000014Du,c->r[0]); // 800C031C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C0320
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800C0324
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800C0328
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800C032C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800C0330
  c->lr=0x800C0338u; f_800361A0(c); // 800C0334
  c->r[3]=c->r[30]+0x00000060u; // 800C0338
  c->r[4]=c->r[30]+0x000003D8u; // 800C033C
  c->lr=0x800C0344u; f_800361A0(c); // 800C0340
  W8(c->r[30]+0x00000028u,c->r[31]); // 800C0344
  c->r[3]=c->r[30]|c->r[30]; // 800C0348
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C034C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C0350
  c->ctr=c->r[12]; // 800C0354
  if (true) { c->lr=0x800C035Cu; dispatch(c,c->ctr); } // 800C0358
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C035C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0360
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C0364
  c->lr=c->r[0]; // 800C0368
  c->r[1]=c->r[1]+0x00000010u; // 800C036C
  return; // 800C0370
}

// fn_800C0374
void f_800C0374(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0374
  c->r[0]=c->lr; // 800C0378
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C037C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0380
  c->r[31]=c->r[3]|c->r[3]; // 800C0384
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C0388
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800C038C
  c->lr=0x800C0394u; f_802501B0(c); // 800C0390
  c->r[4]=R16(c->r[31]+0x000003BEu); // 800C0394
  c->r[0]=0u+0x00000001u; // 800C0398
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800C039C
  c->r[3]=c->r[31]+0x0000002Cu; // 800C03A0
  c->r[0]=rotl(c->r[4],0)&0xFFFFDFFFu; // 800C03A4
  c->r[4]=c->r[31]+0x000003CCu; // 800C03A8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800C03AC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800C03B0
  c->lr=0x800C03B8u; f_800361A0(c); // 800C03B4
  c->r[3]=c->r[31]+0x00000060u; // 800C03B8
  c->r[4]=c->r[31]+0x000003D8u; // 800C03BC
  c->lr=0x800C03C4u; f_800361A0(c); // 800C03C0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C03C4
  c->r[3]=c->r[31]|c->r[31]; // 800C03C8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C03CC
  c->ctr=c->r[12]; // 800C03D0
  if (true) { c->lr=0x800C03D8u; dispatch(c,c->ctr); } // 800C03D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C03D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C03DC
  c->lr=c->r[0]; // 800C03E0
  c->r[1]=c->r[1]+0x00000010u; // 800C03E4
  return; // 800C03E8
}

// fn_800C03EC
void f_800C03EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C03EC
  c->r[0]=c->lr; // 800C03F0
  c->r[5]=0u+0x00000000u; // 800C03F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C03F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C03FC
  c->r[31]=c->r[3]|c->r[3]; // 800C0400
  c->r[3]=0u+0x000004BAu; // 800C0404
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C0408
  c->r[4]=c->r[4]+0x0000010Cu; // 800C040C
  c->lr=0x800C0414u; f_8024EE50(c); // 800C0410
  cmps(c,0,(int32_t)c->r[3],0); // 800C0414
  if (crb(c,2)) { goto L_800C0424; } // 800C0418
  c->r[3]=0u+0x00000000u; // 800C041C
  goto L_800C0454; // 800C0420
L_800C0424:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800C0424
  c->r[3]=0u+0x000000C9u; // 800C0428
  c->r[5]=0u+0x00000000u; // 800C042C
  c->r[4]=c->r[4]+0x0000010Cu; // 800C0430
  c->lr=0x800C0438u; f_8024EE50(c); // 800C0434
  cmps(c,0,(int32_t)c->r[3],0); // 800C0438
  if (crb(c,2)) { goto L_800C0448; } // 800C043C
  c->r[3]=0u+0x00000000u; // 800C0440
  goto L_800C0454; // 800C0444
L_800C0448:;
  c->r[3]=c->r[31]+0x00000210u; // 800C0448
  c->r[4]=0u+0x000000E1u; // 800C044C
  c->lr=0x800C0454u; f_80221630(c); // 800C0450
L_800C0454:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C0454
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0458
  c->lr=c->r[0]; // 800C045C
  c->r[1]=c->r[1]+0x00000010u; // 800C0460
  return; // 800C0464
}

// fn_800C0468
void f_800C0468(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0468
  c->r[0]=c->lr; // 800C046C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0470
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0474
  c->r[31]=0u+0x805D0000u; // 800C0478
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C047C
  c->r[30]=c->r[3]|c->r[3]; // 800C0480
  c->r[3]=c->r[31]+0x00003F6Cu; // 800C0484
  c->lr=0x800C048Cu; f_80045264(c); // 800C0488
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800C048C
  cmpu(c,0,c->r[0],0x00000016u); // 800C0490
  if (!crb(c,2)) { goto L_800C04DC; } // 800C0494
  c->r[3]=c->r[31]+0x00003F6Cu; // 800C0498
  c->lr=0x800C04A0u; f_80037AF0(c); // 800C049C
  cmpu(c,0,c->r[3],c->r[30]); // 800C04A0
  if (!crb(c,2)) { goto L_800C04DC; } // 800C04A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800C04A8
  cmps(c,0,(int32_t)c->r[0],101); // 800C04AC
  if (crb(c,2)) { goto L_800C04DC; } // 800C04B0
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C04B4
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800C04B8
  if (!crb(c,2)) { goto L_800C04DC; } // 800C04BC
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C04C0
  c->r[3]=c->r[30]|c->r[30]; // 800C04C4
  c->r[4]=0u+0x00000065u; // 800C04C8
  c->r[5]=0u+0x00000000u; // 800C04CC
  c->r[6]=0u+0x00000000u; // 800C04D0
  c->r[7]=0u+0x00000000u; // 800C04D4
  c->lr=0x800C04DCu; f_801F4D44(c); // 800C04D8
L_800C04DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C04DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C04E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C04E4
  c->lr=c->r[0]; // 800C04E8
  c->r[1]=c->r[1]+0x00000010u; // 800C04EC
  return; // 800C04F0
}

// fn_800C04F4
void f_800C04F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C04F4
  c->r[0]=c->lr; // 800C04F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C04FC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800C0500
  c->r[31]=0u+0x803D0000u; // 800C0504
  c->r[31]=c->r[31]+0x000007D8u; // 800C0508
  W32(c->r[1]+0x00000038u,c->r[30]); // 800C050C
  c->r[30]=c->r[3]|c->r[3]; // 800C0510
  c->lr=0x800C0518u; f_801F4F28(c); // 800C0514
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800C0518
  cmps(c,0,(int32_t)c->r[0],102); // 800C051C
  if (crb(c,2)) { goto L_800C05A4; } // 800C0520
  if (!crb(c,0)) { goto L_800C0538; } // 800C0524
  cmps(c,0,(int32_t)c->r[0],100); // 800C0528
  if (crb(c,2)) { goto L_800C0544; } // 800C052C
  if (!crb(c,0)) { goto L_800C0574; } // 800C0530
  goto L_800C0600; // 800C0534
L_800C0538:;
  cmps(c,0,(int32_t)c->r[0],104); // 800C0538
  if (!crb(c,0)) { goto L_800C0600; } // 800C053C
  goto L_800C05D4; // 800C0540
L_800C0544:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800C0544
  c->r[5]=c->r[31]+0x0000000Cu; // 800C0548
  c->r[3]=c->r[30]|c->r[30]; // 800C054C
  c->r[4]=c->r[1]+0x0000002Cu; // 800C0550
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800C0554
  c->r[6]=R32(c->r[5]+0x00000004u); // 800C0558
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C055C
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800C0560
  W32(c->r[1]+0x00000030u,c->r[6]); // 800C0564
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C0568
  c->lr=0x800C0570u; f_800C0188(c); // 800C056C
  goto L_800C0600; // 800C0570
L_800C0574:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800C0574
  c->r[5]=c->r[31]+0x00000018u; // 800C0578
  c->r[3]=c->r[30]|c->r[30]; // 800C057C
  c->r[4]=c->r[1]+0x00000020u; // 800C0580
  c->r[7]=R32(c->r[31]+0x00000018u); // 800C0584
  c->r[6]=R32(c->r[5]+0x00000004u); // 800C0588
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C058C
  W32(c->r[1]+0x00000020u,c->r[7]); // 800C0590
  W32(c->r[1]+0x00000024u,c->r[6]); // 800C0594
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C0598
  c->lr=0x800C05A0u; f_800C0188(c); // 800C059C
  goto L_800C0600; // 800C05A0
L_800C05A4:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800C05A4
  c->r[5]=c->r[31]+0x00000024u; // 800C05A8
  c->r[3]=c->r[30]|c->r[30]; // 800C05AC
  c->r[4]=c->r[1]+0x00000014u; // 800C05B0
  c->r[7]=R32(c->r[31]+0x00000024u); // 800C05B4
  c->r[6]=R32(c->r[5]+0x00000004u); // 800C05B8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C05BC
  W32(c->r[1]+0x00000014u,c->r[7]); // 800C05C0
  W32(c->r[1]+0x00000018u,c->r[6]); // 800C05C4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C05C8
  c->lr=0x800C05D0u; f_800C0188(c); // 800C05CC
  goto L_800C0600; // 800C05D0
L_800C05D4:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800C05D4
  c->r[5]=c->r[31]+0x00000030u; // 800C05D8
  c->r[3]=c->r[30]|c->r[30]; // 800C05DC
  c->r[4]=c->r[1]+0x00000008u; // 800C05E0
  c->r[7]=R32(c->r[31]+0x00000030u); // 800C05E4
  c->r[6]=R32(c->r[5]+0x00000004u); // 800C05E8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C05EC
  W32(c->r[1]+0x00000008u,c->r[7]); // 800C05F0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C05F4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C05F8
  c->lr=0x800C0600u; f_800C0188(c); // 800C05FC
L_800C0600:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C0600
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800C0604
  c->r[30]=R32(c->r[1]+0x00000038u); // 800C0608
  c->lr=c->r[0]; // 800C060C
  c->r[1]=c->r[1]+0x00000040u; // 800C0610
  return; // 800C0614
}

// fn_800C0618
void f_800C0618(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0618
  c->r[0]=c->lr; // 800C061C
  c->r[6]=c->r[4]|c->r[4]; // 800C0620
  c->r[5]=0u+0x00000000u; // 800C0624
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0628
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800C062C
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800C0630
  if (crb(c,2)) { goto L_800C063C; } // 800C0634
  c->r[5]=0u+0x00000001u; // 800C0638
L_800C063C:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C063C
  c->r[3]=c->r[6]|c->r[6]; // 800C0640
  c->lr=0x800C0648u; f_80250BF4(c); // 800C0644
  cmps(c,0,(int32_t)c->r[3],0); // 800C0648
  if (crb(c,2)) { goto L_800C0658; } // 800C064C
  c->r[3]=0u+0x00000000u; // 800C0650
  goto L_800C065C; // 800C0654
L_800C0658:;
  c->r[3]=0u+0xFFFFFFFFu; // 800C0658
L_800C065C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C065C
  c->lr=c->r[0]; // 800C0660
  c->r[1]=c->r[1]+0x00000010u; // 800C0664
  return; // 800C0668
}

// fn_800C066C
void f_800C066C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C066C
  c->r[0]=c->lr; // 800C0670
  c->r[7]=0u+0x803D0000u; // 800C0674
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C0678
  c->r[4]=c->r[1]+0x00000008u; // 800C067C
  {uint32_t ea=c->r[7]+0x00000814u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C0680
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C0684
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C0688
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C068C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C0690
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C0694
  c->lr=0x800C069Cu; f_800C0188(c); // 800C0698
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C069C
  c->lr=c->r[0]; // 800C06A0
  c->r[1]=c->r[1]+0x00000020u; // 800C06A4
  return; // 800C06A8
}

// fn_800C06AC
void f_800C06AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C06AC
  c->r[0]=c->lr; // 800C06B0
  c->r[5]=0u+0x80620000u; // 800C06B4
  c->r[4]=0u+0x00000002u; // 800C06B8
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C06BC
  c->r[5]=c->r[5]+0x00007688u; // 800C06C0
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800C06C4
  W32(c->r[1]+0x00000088u,c->r[30]); // 800C06C8
  c->r[30]=c->r[3]|c->r[3]; // 800C06CC
  c->r[3]=R32(c->r[5]+0x00000014u); // 800C06D0
  c->lr=0x800C06D8u; f_80037670(c); // 800C06D4
  cmps(c,0,(int32_t)c->r[3],0); // 800C06D8
  if (!crb(c,2)) { goto L_800C0748; } // 800C06DC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C06E0
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800C06E4
  cmps(c,0,(int32_t)c->r[0],0); // 800C06E8
  if (!crb(c,2)) { goto L_800C0748; } // 800C06EC
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C06F0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800C06F4
  if (crb(c,2)) { goto L_800C0748; } // 800C06F8
  {uint32_t ea=c->r[2]+0xFFFF9D88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C06FC
  c->r[3]=c->r[1]+0x00000008u; // 800C0700
  c->r[4]=c->r[30]+0x0000002Cu; // 800C0704
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800C0708
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800C070C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C0710
  c->lr=0x800C0718u; f_800361A0(c); // 800C0714
  c->r[31]=0u+0x80550000u; // 800C0718
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C071C
  c->r[31]=c->r[31]+0x00003D60u; // 800C0720
  c->r[5]=c->r[30]|c->r[30]; // 800C0724
  c->r[3]=c->r[31]+0x00000010u; // 800C0728
  c->r[6]=c->r[1]+0x00000008u; // 800C072C
  c->r[7]=c->r[1]+0x00000020u; // 800C0730
  c->r[4]=0u+0x000001FFu; // 800C0734
  c->lr=0x800C073Cu; f_80226910(c); // 800C0738
  c->r[3]=c->r[31]+0x00000010u; // 800C073C
  c->r[4]=c->r[1]+0x00000020u; // 800C0740
  c->lr=0x800C0748u; f_80226D68(c); // 800C0744
L_800C0748:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C0748
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800C074C
  c->r[30]=R32(c->r[1]+0x00000088u); // 800C0750
  c->lr=c->r[0]; // 800C0754
  c->r[1]=c->r[1]+0x00000090u; // 800C0758
  return; // 800C075C
}

// fn_800C0760
void f_800C0760(Ctx* __restrict c) {
  W32(c->r[3]+0x00000088u,c->r[4]); // 800C0760
  return; // 800C0764
}

// fn_800C0768
void f_800C0768(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0768
  c->r[0]=c->lr; // 800C076C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C0770
  c->r[5]=c->r[1]+0x00000020u; // 800C0774
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800C0778
  c->r[31]=0u+0x00000000u; // 800C077C
  W32(c->r[1]+0x00000038u,c->r[30]); // 800C0780
  c->r[30]=c->r[3]|c->r[3]; // 800C0784
  W32(c->r[3]+0x00000088u,c->r[31]); // 800C0788
  c->r[3]=R32(c->r[3]+0x00000394u); // 800C078C
  c->r[4]=R8(c->r[30]+0x0000007Cu); // 800C0790
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C0794
  c->lr=0x800C079Cu; f_8025EA54(c); // 800C0798
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C079C
  c->r[5]=c->r[1]+0x00000014u; // 800C07A0
  c->r[4]=R32(c->r[1]+0x00000020u); // 800C07A4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800C07A8
  c->r[0]=R32(c->r[1]+0x00000028u); // 800C07AC
  c->r[3]=R32(c->r[1]+0x00000024u); // 800C07B0
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C07B4
  W32(c->r[1]+0x00000018u,c->r[3]); // 800C07B8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C07BC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C07C0
  c->r[4]=R8(c->r[30]+0x0000007Cu); // 800C07C4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C07C8
  c->lr=0x800C07D0u; f_8025E9C0(c); // 800C07CC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C07D0
  c->r[5]=c->r[1]+0x00000020u; // 800C07D4
  c->r[4]=R8(c->r[30]+0x0000007Du); // 800C07D8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C07DC
  c->lr=0x800C07E4u; f_8025EA54(c); // 800C07E0
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C07E4
  c->r[5]=c->r[1]+0x00000008u; // 800C07E8
  c->r[4]=R32(c->r[1]+0x00000020u); // 800C07EC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800C07F0
  c->r[0]=R32(c->r[1]+0x00000028u); // 800C07F4
  c->r[3]=R32(c->r[1]+0x00000024u); // 800C07F8
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C07FC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C0800
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C0804
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C0808
  c->r[4]=R8(c->r[30]+0x0000007Du); // 800C080C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C0810
  c->lr=0x800C0818u; f_8025E9C0(c); // 800C0814
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C0818
  W8(c->r[3]+0x0000014Cu,c->r[31]); // 800C081C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C0820
  W8(c->r[3]+0x0000014Du,c->r[31]); // 800C0824
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800C0828
  c->r[30]=R32(c->r[1]+0x00000038u); // 800C082C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C0830
  c->lr=c->r[0]; // 800C0834
  c->r[1]=c->r[1]+0x00000040u; // 800C0838
  return; // 800C083C
}

// fn_800C0840
void f_800C0840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0840
  c->r[0]=c->lr; // 800C0844
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0848
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C084C
  c->r[31]=c->r[3]|c->r[3]; // 800C0850
  c->r[3]=c->r[3]+0x00000210u; // 800C0854
  c->lr=0x800C085Cu; f_8004BAD4(c); // 800C0858
  cmps(c,0,(int32_t)c->r[3],0); // 800C085C
  if (crb(c,2)) { goto L_800C08D0; } // 800C0860
  c->r[0]=R32(c->r[31]+0x00000210u); // 800C0864
  c->r[4]=c->r[31]|c->r[31]; // 800C0868
  c->r[3]=c->r[31]+0x00000210u; // 800C086C
  c->r[0]=c->r[0]|0xAA000000u; // 800C0870
  W32(c->r[31]+0x00000210u,c->r[0]); // 800C0874
  c->lr=0x800C087Cu; f_80043E44(c); // 800C0878
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C087C
  c->r[3]=c->r[31]+0x00000210u; // 800C0880
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0884
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C0888
  c->lr=0x800C0890u; f_80043E34(c); // 800C088C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0890
  c->r[4]=0u+0x803A0000u; // 800C0894
  c->r[4]=c->r[4]+0xFFFFD0D4u; // 800C0898
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C089C
  c->r[4]=c->r[4]+0x0000002Au; // 800C08A0
  c->lr=0x800C08A8u; f_80256EC4(c); // 800C08A4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C08A8
  c->r[5]=c->r[3]|c->r[3]; // 800C08AC
  c->r[3]=c->r[31]+0x00000210u; // 800C08B0
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800C08B4
  c->lr=0x800C08BCu; f_8004BAC8(c); // 800C08B8
  {uint32_t ea=c->r[2]+0xFFFF9D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C08BC
  c->r[3]=c->r[31]+0x00000210u; // 800C08C0
  c->f[2]=c->f[1]; // 800C08C4
  c->f[3]=c->f[1]; // 800C08C8
  c->lr=0x800C08D0u; f_80043E24(c); // 800C08CC
L_800C08D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C08D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C08D4
  c->lr=c->r[0]; // 800C08D8
  c->r[1]=c->r[1]+0x00000010u; // 800C08DC
  return; // 800C08E0
}

// fn_800C08E4
void f_800C08E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C08E4
  c->r[0]=c->lr; // 800C08E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C08EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C08F0
  c->r[31]=c->r[3]|c->r[3]; // 800C08F4
  c->r[3]=c->r[3]+0x00000210u; // 800C08F8
  c->lr=0x800C0900u; f_80221698(c); // 800C08FC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0900
  cmps(c,0,(int32_t)c->r[3],0); // 800C0904
  if (crb(c,2)) { goto L_800C0928; } // 800C0908
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800C090C
  cmps(c,0,(int32_t)c->r[0],0); // 800C0910
  if (crb(c,2)) { goto L_800C0928; } // 800C0914
  c->r[0]=R32(c->r[31]+0x00000210u); // 800C0918
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800C091C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800C0920
  goto L_800C0934; // 800C0924
L_800C0928:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800C0928
  c->r[0]=c->r[0]|0x80000000u; // 800C092C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800C0930
L_800C0934:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C0934
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0938
  c->lr=c->r[0]; // 800C093C
  c->r[1]=c->r[1]+0x00000010u; // 800C0940
  return; // 800C0944
}

// fn_800C0948
void f_800C0948(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0948
  c->r[0]=c->lr; // 800C094C
  cmps(c,0,(int32_t)c->r[3],0); // 800C0950
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0954
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0958
  c->r[31]=c->r[4]|c->r[4]; // 800C095C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C0960
  c->r[30]=c->r[3]|c->r[3]; // 800C0964
  if (crb(c,2)) { goto L_800C0984; } // 800C0968
  c->r[4]=0u+0x00000000u; // 800C096C
  c->lr=0x800C0974u; f_8026A06C(c); // 800C0970
  cmps(c,0,(int32_t)c->r[31],0); // 800C0974
  if (!crb(c,1)) { goto L_800C0984; } // 800C0978
  c->r[3]=c->r[30]|c->r[30]; // 800C097C
  c->lr=0x800C0984u; f_8026A268(c); // 800C0980
L_800C0984:;
  c->r[3]=c->r[30]|c->r[30]; // 800C0984
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0988
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C098C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C0990
  c->lr=c->r[0]; // 800C0994
  c->r[1]=c->r[1]+0x00000010u; // 800C0998
  return; // 800C099C
}

// fn_800C09A0
void f_800C09A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C09A0
  c->r[0]=c->lr; // 800C09A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C09A8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800C09AC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800C09B0
  c->r[4]=0u+0x00000000u; // 800C09B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C09B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C09BC
  c->r[30]=c->r[3]|c->r[3]; // 800C09C0
  c->lr=0x800C09C8u; f_801F57D0(c); // 800C09C4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C09C8
  c->r[3]=c->r[30]|c->r[30]; // 800C09CC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C09D0
  c->ctr=c->r[12]; // 800C09D4
  if (true) { c->lr=0x800C09DCu; dispatch(c,c->ctr); } // 800C09D8
  c->r[3]=c->r[30]|c->r[30]; // 800C09DC
  c->lr=0x800C09E4u; f_801F4B94(c); // 800C09E0
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C09E4
  c->r[4]=0u+0x00000003u; // 800C09E8
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C09EC
  c->r[5]=0u+0x00000023u; // 800C09F0
  c->r[0]=c->r[0]|0x00000004u; // 800C09F4
  c->r[3]=0u+0x80550000u; // 800C09F8
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800C09FC
  c->f[3]=c->f[1]; // 800C0A00
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800C0A04
  c->r[3]=c->r[3]+0x00003D60u; // 800C0A08
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C0A0C
  c->r[4]=c->r[30]+0x0000002Cu; // 800C0A10
  W8(c->r[30]+0x0000006Du,c->r[5]); // 800C0A14
  {uint32_t ea=c->r[2]+0xFFFF9D9Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0A18
  c->r[5]=c->r[30]+0x00000030u; // 800C0A1C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800C0A20
  c->r[6]=0u+0x00000000u; // 800C0A24
  c->r[7]=0u+0x00000000u; // 800C0A28
  c->lr=0x800C0A30u; f_801D5488(c); // 800C0A2C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C0A30
  c->r[3]=c->r[30]|c->r[30]; // 800C0A34
  c->lr=0x800C0A3Cu; f_801F58BC(c); // 800C0A38
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C0A3C
  c->r[31]=0u+0x00000001u; // 800C0A40
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800C0A44
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0A48
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C0A4C
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800C0A50
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800C0A54
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800C0A58
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C0A5C
  c->lr=0x800C0A64u; f_802501B0(c); // 800C0A60
  c->r[3]=0u+0x805D0000u; // 800C0A64
  c->r[4]=c->r[30]+0x0000002Cu; // 800C0A68
  c->r[3]=c->r[3]+0x000078B0u; // 800C0A6C
  c->lr=0x800C0A74u; f_802351CC(c); // 800C0A70
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C0A74
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800C0A78
  c->r[3]=c->r[30]|c->r[30]; // 800C0A7C
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800C0A80
  c->lr=0x800C0A88u; f_801F56F4(c); // 800C0A84
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C0A88
  c->r[3]=c->r[30]|c->r[30]; // 800C0A8C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C0A90
  c->ctr=c->r[12]; // 800C0A94
  if (true) { c->lr=0x800C0A9Cu; dispatch(c,c->ctr); } // 800C0A98
  c->r[0]=0u+0x00000000u; // 800C0A9C
  W32(c->r[30]+0x00000444u,c->r[31]); // 800C0AA0
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800C0AA4
  W32(c->r[30]+0x00000078u,c->r[0]); // 800C0AA8
  W8(c->r[30]+0x0000007Cu,c->r[0]); // 800C0AAC
  W8(c->r[30]+0x00000081u,c->r[0]); // 800C0AB0
  c->lr=0x800C0AB8u; f_8024E174(c); // 800C0AB4
  W32(c->r[30]+0x00000438u,c->r[3]); // 800C0AB8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800C0ABC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800C0AC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0AC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C0AC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C0ACC
  c->lr=c->r[0]; // 800C0AD0
  c->r[1]=c->r[1]+0x00000020u; // 800C0AD4
  return; // 800C0AD8
}

// fn_800C0ADC
void f_800C0ADC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0ADC
  c->r[0]=c->lr; // 800C0AE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0AE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0AE8
  c->r[31]=c->r[3]|c->r[3]; // 800C0AEC
  c->lr=0x800C0AF4u; f_800C1134(c); // 800C0AF0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C0AF4
  c->r[3]=c->r[31]|c->r[31]; // 800C0AF8
  c->r[12]=R32(c->r[12]+0x00000068u); // 800C0AFC
  c->ctr=c->r[12]; // 800C0B00
  if (true) { c->lr=0x800C0B08u; dispatch(c,c->ctr); } // 800C0B04
  c->r[3]=c->r[31]|c->r[31]; // 800C0B08
  c->lr=0x800C0B10u; f_801F4C0C(c); // 800C0B0C
  c->r[3]=c->r[31]|c->r[31]; // 800C0B10
  c->lr=0x800C0B18u; f_800C13D8(c); // 800C0B14
  c->r[3]=c->r[31]|c->r[31]; // 800C0B18
  c->lr=0x800C0B20u; f_801F56F4(c); // 800C0B1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C0B20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0B24
  c->lr=c->r[0]; // 800C0B28
  c->r[1]=c->r[1]+0x00000010u; // 800C0B2C
  return; // 800C0B30
}

// fn_800C0B34
void f_800C0B34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0B34
  c->r[0]=c->lr; // 800C0B38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0B3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0B40
  c->r[31]=c->r[3]|c->r[3]; // 800C0B44
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C0B48
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800C0B4C
  c->lr=0x800C0B54u; f_802501B0(c); // 800C0B50
  c->r[3]=c->r[31]|c->r[31]; // 800C0B54
  c->r[4]=0u+0x00000000u; // 800C0B58
  c->lr=0x800C0B60u; f_801F5244(c); // 800C0B5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C0B60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0B64
  c->lr=c->r[0]; // 800C0B68
  c->r[1]=c->r[1]+0x00000010u; // 800C0B6C
  return; // 800C0B70
}

// fn_800C0B74
void f_800C0B74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0B74
  c->r[0]=c->lr; // 800C0B78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0B7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0B80
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C0B84
  c->r[30]=c->r[3]|c->r[3]; // 800C0B88
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C0B8C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800C0B90
  c->lr=0x800C0B98u; f_802501B0(c); // 800C0B94
  c->r[3]=c->r[30]|c->r[30]; // 800C0B98
  c->r[4]=0u+0x00000000u; // 800C0B9C
  c->lr=0x800C0BA4u; f_801F5244(c); // 800C0BA0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C0BA4
  c->r[3]=c->r[30]+0x0000002Cu; // 800C0BA8
  c->r[4]=c->r[4]+0x0000005Cu; // 800C0BAC
  c->lr=0x800C0BB4u; f_800361A0(c); // 800C0BB0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C0BB4
  c->r[3]=c->r[30]|c->r[30]; // 800C0BB8
  c->lr=0x800C0BC0u; f_801F5418(c); // 800C0BBC
  cmps(c,0,(int32_t)c->r[3],0); // 800C0BC0
  if (!crb(c,0)) { goto L_800C0BF0; } // 800C0BC4
  c->r[0]=0u+0x00000001u; // 800C0BC8
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0BCC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800C0BD0
  c->r[3]=c->r[30]|c->r[30]; // 800C0BD4
  c->r[4]=0u+0x00000064u; // 800C0BD8
  c->r[5]=0u+0x00000000u; // 800C0BDC
  c->r[6]=0u+0x00000000u; // 800C0BE0
  c->r[7]=0u+0x00000000u; // 800C0BE4
  c->lr=0x800C0BECu; f_801F4D44(c); // 800C0BE8
  goto L_800C0C1C; // 800C0BEC
L_800C0BF0:;
  c->r[31]=0u+0x805D0000u; // 800C0BF0
  c->r[3]=c->r[31]+0x00003F6Cu; // 800C0BF4
  c->lr=0x800C0BFCu; f_800447E4(c); // 800C0BF8
  cmpu(c,0,c->r[3],0x00000001u); // 800C0BFC
  if (!crb(c,2)) { goto L_800C0C10; } // 800C0C00
  c->r[0]=0u+0x00000000u; // 800C0C04
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800C0C08
  goto L_800C0C1C; // 800C0C0C
L_800C0C10:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800C0C10
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800C0C14
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800C0C18
L_800C0C1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C0C1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0C20
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C0C24
  c->lr=c->r[0]; // 800C0C28
  c->r[1]=c->r[1]+0x00000010u; // 800C0C2C
  return; // 800C0C30
}

// fn_800C0C34
void f_800C0C34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0C34
  c->r[0]=c->lr; // 800C0C38
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C0C3C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C0C40
  c->r[31]=c->r[3]|c->r[3]; // 800C0C44
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C0C48
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800C0C4C
  c->lr=0x800C0C54u; f_802501B0(c); // 800C0C50
  c->r[3]=c->r[31]+0x00000038u; // 800C0C54
  c->r[4]=c->r[31]+0x0000002Cu; // 800C0C58
  c->lr=0x800C0C60u; f_800361A0(c); // 800C0C5C
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0C60
  c->r[3]=0u+0x80550000u; // 800C0C64
  c->r[3]=c->r[3]+0x00003D60u; // 800C0C68
  c->r[4]=c->r[31]+0x00000038u; // 800C0C6C
  c->f[2]=c->f[1]; // 800C0C70
  c->r[5]=c->r[1]+0x00000008u; // 800C0C74
  c->f[3]=c->f[1]; // 800C0C78
  c->r[6]=0u+0x00000000u; // 800C0C7C
  c->r[7]=0u+0x00000000u; // 800C0C80
  c->lr=0x800C0C88u; f_801D5488(c); // 800C0C84
  c->r[5]=R32(c->r[31]+0x00000394u); // 800C0C88
  c->r[3]=c->r[31]+0x00000060u; // 800C0C8C
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0C90
  c->r[4]=c->r[5]+0x00000068u; // 800C0C94
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800C0C98
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0C9C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800C0CA0
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0CA4
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800C0CA8
  c->lr=0x800C0CB0u; f_800361A0(c); // 800C0CAC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0CB0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C0CB4
  c->lr=0x800C0CBCu; f_802501B0(c); // 800C0CB8
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800C0CBC
  c->r[0]=0u+0x00000001u; // 800C0CC0
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0CC4
  c->r[4]=c->r[31]+0x0000002Cu; // 800C0CC8
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0CCC
  c->r[3]=c->r[3]|0x00002000u; // 800C0CD0
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800C0CD4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0CD8
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 800C0CDC
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800C0CE0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[1]);} // 800C0CE4
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[1]);} // 800C0CE8
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800C0CEC
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[1]);} // 800C0CF0
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800C0CF4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0CF8
  c->r[3]=c->r[3]+0x0000005Cu; // 800C0CFC
  c->lr=0x800C0D04u; f_800361A0(c); // 800C0D00
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0D04
  c->r[4]=0u+0x00000040u; // 800C0D08
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0D0C
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800C0D10
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0D14
  c->r[3]=c->r[3]+0x0000001Cu; // 800C0D18
  c->lr=0x800C0D20u; f_802518A4(c); // 800C0D1C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0D20
  c->r[4]=0u+0x00000006u; // 800C0D24
  c->r[3]=c->r[3]+0x0000001Cu; // 800C0D28
  c->lr=0x800C0D30u; f_80251824(c); // 800C0D2C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0D30
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C0D34
  c->lr=0x800C0D3Cu; f_802501B0(c); // 800C0D38
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0D3C
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800C0D40
  cmps(c,0,(int32_t)c->r[0],0); // 800C0D44
  if (crb(c,2)) { goto L_800C0DF0; } // 800C0D48
  c->r[3]=c->r[3]+0x00000068u; // 800C0D4C
  c->r[4]=c->r[31]+0x00000060u; // 800C0D50
  c->lr=0x800C0D58u; f_800361A0(c); // 800C0D54
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0D58
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C0D5C
  c->lr=0x800C0D64u; f_8025037C(c); // 800C0D60
  c->r[6]=R32(c->r[31]+0x00000394u); // 800C0D64
  c->r[3]=c->r[1]+0x00000024u; // 800C0D68
  c->r[4]=c->r[31]+0x00000060u; // 800C0D6C
  c->r[5]=c->r[1]+0x00000030u; // 800C0D70
  c->r[6]=c->r[6]+0x000000B0u; // 800C0D74
  c->r[7]=0u+0x00000000u; // 800C0D78
  c->lr=0x800C0D80u; f_8002BE64(c); // 800C0D7C
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800C0D80
  c->r[3]=0u+0x805D0000u; // 800C0D84
  c->r[0]=R32(c->r[31]+0x00000030u); // 800C0D88
  c->r[3]=c->r[3]+0x00003F6Cu; // 800C0D8C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0D90
  c->r[4]=c->r[31]|c->r[31]; // 800C0D94
  W32(c->r[1]+0x00000018u,c->r[5]); // 800C0D98
  c->r[7]=c->r[1]+0x00000018u; // 800C0D9C
  c->r[6]=0u+0x00000019u; // 800C0DA0
  c->r[8]=0u+0x00000000u; // 800C0DA4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C0DA8
  c->r[0]=R32(c->r[31]+0x00000034u); // 800C0DAC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800C0DB0
  c->r[3]=R32(c->r[31]+0x00000438u); // 800C0DB4
  c->r[5]=R32(c->r[31]+0x00000394u); // 800C0DB8
  c->lr=0x800C0DC0u; f_801FA6A4(c); // 800C0DBC
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800C0DC0
  cmps(c,0,(int32_t)c->r[0],0); // 800C0DC4
  if (crb(c,2)) { goto L_800C0DD8; } // 800C0DC8
  c->r[3]=c->r[31]+0x00000044u; // 800C0DCC
  c->r[4]=c->r[31]+0x000003CCu; // 800C0DD0
  c->lr=0x800C0DD8u; f_800361A0(c); // 800C0DD4
L_800C0DD8:;
  c->r[6]=0u+0x803A0000u; // 800C0DD8
  c->r[3]=R32(c->r[31]+0x00000438u); // 800C0DDC
  c->r[5]=c->r[31]+0x00000044u; // 800C0DE0
  c->r[4]=0u+0x00000000u; // 800C0DE4
  c->r[6]=c->r[6]+0xFFFFD108u; // 800C0DE8
  c->lr=0x800C0DF0u; f_801FBEC0(c); // 800C0DEC
L_800C0DF0:;
  c->r[3]=c->r[31]|c->r[31]; // 800C0DF0
  c->r[4]=0u+0x00000000u; // 800C0DF4
  c->lr=0x800C0DFCu; f_801F7C00(c); // 800C0DF8
  c->r[7]=0u+0x803D0000u; // 800C0DFC
  {uint32_t ea=c->r[7]+0x0000096Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800C0E00
  c->r[3]=c->r[31]|c->r[31]; // 800C0E04
  c->r[4]=c->r[1]+0x0000000Cu; // 800C0E08
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C0E0C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C0E10
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C0E14
  W32(c->r[1]+0x00000010u,c->r[5]); // 800C0E18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0E1C
  c->lr=0x800C0E24u; f_800C0E38(c); // 800C0E20
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C0E24
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C0E28
  c->lr=c->r[0]; // 800C0E2C
  c->r[1]=c->r[1]+0x00000050u; // 800C0E30
  return; // 800C0E34
}

// fn_800C0E38
void f_800C0E38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0E38
  c->r[0]=c->lr; // 800C0E3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0E40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0E44
  c->r[31]=c->r[4]|c->r[4]; // 800C0E48
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C0E4C
  c->r[30]=c->r[3]|c->r[3]; // 800C0E50
  c->r[3]=c->r[31]|c->r[31]; // 800C0E54
  c->lr=0x800C0E5Cu; f_802B9FDC(c); // 800C0E58
  cmps(c,0,(int32_t)c->r[3],0); // 800C0E5C
  if (crb(c,2)) { goto L_800C0E7C; } // 800C0E60
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C0E64
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C0E68
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800C0E6C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800C0E70
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C0E74
  W32(c->r[30]+0x00000024u,c->r[0]); // 800C0E78
L_800C0E7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C0E7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0E80
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C0E84
  c->lr=c->r[0]; // 800C0E88
  c->r[1]=c->r[1]+0x00000010u; // 800C0E8C
  return; // 800C0E90
}

// fn_800C0E94
void f_800C0E94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0E94
  c->r[0]=c->lr; // 800C0E98
  c->r[4]=0u+0x00000000u; // 800C0E9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C0EA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C0EA4
  c->r[31]=c->r[3]|c->r[3]; // 800C0EA8
  c->r[3]=R32(c->r[3]+0x00000438u); // 800C0EAC
  c->lr=0x800C0EB4u; f_801FAF00(c); // 800C0EB0
  cmps(c,0,(int32_t)c->r[3],0); // 800C0EB4
  if (!crb(c,2)) { goto L_800C0F40; } // 800C0EB8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800C0EBC
  c->r[3]=c->r[31]+0x0000002Cu; // 800C0EC0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C0EC4
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800C0EC8
  c->r[0]=c->r[0]|0x00000004u; // 800C0ECC
  c->r[4]=c->r[4]+0x0000005Cu; // 800C0ED0
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800C0ED4
  c->lr=0x800C0EDCu; f_800361A0(c); // 800C0ED8
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C0EDC
  c->r[3]=c->r[31]+0x00000060u; // 800C0EE0
  c->r[4]=c->r[4]+0x00000068u; // 800C0EE4
  c->lr=0x800C0EECu; f_800361A0(c); // 800C0EE8
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800C0EEC
  c->r[3]=0u+0x805D0000u; // 800C0EF0
  c->r[0]=R32(c->r[31]+0x00000030u); // 800C0EF4
  c->r[3]=c->r[3]+0x00006CF8u; // 800C0EF8
  c->r[4]=c->r[1]+0x00000008u; // 800C0EFC
  c->r[5]=0u+0x00040000u; // 800C0F00
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C0F04
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C0F08
  c->r[0]=R32(c->r[31]+0x00000034u); // 800C0F0C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C0F10
  c->lr=0x800C0F18u; f_802236F8(c); // 800C0F14
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800C0F18
  c->r[3]=c->r[31]|c->r[31]; // 800C0F1C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C0F20
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C0F24
  c->ctr=c->r[12]; // 800C0F28
  if (true) { c->lr=0x800C0F30u; dispatch(c,c->ctr); } // 800C0F2C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0F30
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C0F34
  c->lr=0x800C0F3Cu; f_8025037C(c); // 800C0F38
  goto L_800C0F60; // 800C0F3C
L_800C0F40:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C0F40
  c->r[3]=c->r[31]+0x0000002Cu; // 800C0F44
  c->r[4]=c->r[4]+0x0000005Cu; // 800C0F48
  c->lr=0x800C0F50u; f_800361A0(c); // 800C0F4C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C0F50
  c->r[3]=c->r[31]+0x00000060u; // 800C0F54
  c->r[4]=c->r[4]+0x00000068u; // 800C0F58
  c->lr=0x800C0F60u; f_800361A0(c); // 800C0F5C
L_800C0F60:;
  c->r[3]=c->r[31]|c->r[31]; // 800C0F60
  c->r[4]=0u+0x00000000u; // 800C0F64
  c->lr=0x800C0F6Cu; f_801F7C00(c); // 800C0F68
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C0F6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C0F70
  c->lr=c->r[0]; // 800C0F74
  c->r[1]=c->r[1]+0x00000020u; // 800C0F78
  return; // 800C0F7C
}

// fn_800C0F80
void f_800C0F80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0F80
  c->r[0]=c->lr; // 800C0F84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0F88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0F8C
  c->r[31]=c->r[3]|c->r[3]; // 800C0F90
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C0F94
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800C0F98
  c->lr=0x800C0FA0u; f_802501B0(c); // 800C0F9C
  c->r[6]=R32(c->r[31]+0x00000394u); // 800C0FA0
  c->r[3]=c->r[31]+0x0000002Cu; // 800C0FA4
  c->r[4]=c->r[31]+0x00000060u; // 800C0FA8
  c->r[7]=0u+0x00000000u; // 800C0FAC
  c->r[5]=c->r[6]+0x00000074u; // 800C0FB0
  c->r[6]=c->r[6]+0x000000B0u; // 800C0FB4
  c->lr=0x800C0FBCu; f_8002BE64(c); // 800C0FB8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C0FBC
  c->r[6]=0u+0x00000000u; // 800C0FC0
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0FC4
  c->r[0]=0u+0x00000001u; // 800C0FC8
  W8(c->r[3]+0x0000014Cu,c->r[6]); // 800C0FCC
  c->r[3]=c->r[31]+0x0000002Cu; // 800C0FD0
  c->r[4]=c->r[31]+0x000003CCu; // 800C0FD4
  c->r[5]=R32(c->r[31]+0x00000394u); // 800C0FD8
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800C0FDC
  c->r[5]=R32(c->r[31]+0x00000394u); // 800C0FE0
  {uint32_t ea=c->r[5]+0x00000074u; WF32(ea,c->f[0]);} // 800C0FE4
  c->r[5]=R32(c->r[31]+0x00000394u); // 800C0FE8
  {uint32_t ea=c->r[5]+0x00000078u; WF32(ea,c->f[0]);} // 800C0FEC
  c->r[5]=R32(c->r[31]+0x00000394u); // 800C0FF0
  {uint32_t ea=c->r[5]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C0FF4
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800C0FF8
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800C0FFC
  c->r[0]=rotl(c->r[5],0)&0xFFFFDFFFu; // 800C1000
  c->r[0]=c->r[0]|0x00000004u; // 800C1004
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800C1008
  c->lr=0x800C1010u; f_800361A0(c); // 800C100C
  c->r[3]=c->r[31]+0x00000060u; // 800C1010
  c->r[4]=c->r[31]+0x000003D8u; // 800C1014
  c->lr=0x800C101Cu; f_800361A0(c); // 800C1018
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C101C
  c->r[3]=c->r[31]|c->r[31]; // 800C1020
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C1024
  c->ctr=c->r[12]; // 800C1028
  if (true) { c->lr=0x800C1030u; dispatch(c,c->ctr); } // 800C102C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C1030
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C1034
  c->lr=c->r[0]; // 800C1038
  c->r[1]=c->r[1]+0x00000010u; // 800C103C
  return; // 800C1040
}

// fn_800C1044
void f_800C1044(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1044
  c->r[0]=c->lr; // 800C1048
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C104C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C1050
  c->r[31]=c->r[3]|c->r[3]; // 800C1054
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C1058
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800C105C
  c->lr=0x800C1064u; f_802501B0(c); // 800C1060
  c->r[6]=R32(c->r[31]+0x00000394u); // 800C1064
  c->r[3]=c->r[31]+0x0000002Cu; // 800C1068
  c->r[4]=c->r[31]+0x00000060u; // 800C106C
  c->r[7]=0u+0x00000000u; // 800C1070
  c->r[5]=c->r[6]+0x00000074u; // 800C1074
  c->r[6]=c->r[6]+0x000000B0u; // 800C1078
  c->lr=0x800C1080u; f_8002BE64(c); // 800C107C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C1080
  c->r[6]=0u+0x00000000u; // 800C1084
  c->r[0]=0u+0x00000001u; // 800C1088
  c->r[3]=c->r[31]+0x0000002Cu; // 800C108C
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800C1090
  c->r[4]=c->r[31]+0x000003CCu; // 800C1094
  c->r[5]=R32(c->r[31]+0x00000394u); // 800C1098
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800C109C
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800C10A0
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800C10A4
  c->r[0]=rotl(c->r[5],0)&0xFFFFDFFFu; // 800C10A8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800C10AC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800C10B0
  c->lr=0x800C10B8u; f_800361A0(c); // 800C10B4
  c->r[3]=c->r[31]+0x00000060u; // 800C10B8
  c->r[4]=c->r[31]+0x000003D8u; // 800C10BC
  c->lr=0x800C10C4u; f_800361A0(c); // 800C10C0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C10C4
  c->r[3]=c->r[31]|c->r[31]; // 800C10C8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C10CC
  c->ctr=c->r[12]; // 800C10D0
  if (true) { c->lr=0x800C10D8u; dispatch(c,c->ctr); } // 800C10D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C10D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C10DC
  c->lr=c->r[0]; // 800C10E0
  c->r[1]=c->r[1]+0x00000010u; // 800C10E4
  return; // 800C10E8
}

// fn_800C10EC
void f_800C10EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C10EC
  c->r[0]=c->lr; // 800C10F0
  c->r[6]=0u+0x803D0000u; // 800C10F4
  c->r[5]=0u+0x00000000u; // 800C10F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C10FC
  c->r[6]=c->r[6]+0x00000960u; // 800C1100
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800C1104
  c->r[3]=R32(c->r[3]+0x00000394u); // 800C1108
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C110C
  c->r[4]=c->r[3]+0x0000010Cu; // 800C1110
  c->r[3]=R32(c->r[6]+c->r[0]); // 800C1114
  c->lr=0x800C111Cu; f_8024EE50(c); // 800C1118
  c->r[0]=cntlz(c->r[3]); // 800C111C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C1120
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C1124
  c->lr=c->r[0]; // 800C1128
  c->r[1]=c->r[1]+0x00000010u; // 800C112C
  return; // 800C1130
}

// fn_800C1134
void f_800C1134(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800C1134
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800C1138
  if (crb(c,2)) return; // 800C113C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000003BCu); // 800C1140
  cmps(c,0,(int32_t)c->r[0],101); // 800C1144
  if (crb(c,2)) return; // 800C1148
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C114C
  c->r[4]=0u+0x00000065u; // 800C1150
  c->r[5]=0u+0x00000000u; // 800C1154
  c->r[6]=0u+0x00000000u; // 800C1158
  c->r[7]=0u+0x00000000u; // 800C115C
  f_801F4D44(c); return; // 800C1160
  return; // 800C1164
}

// fn_800C1168
void f_800C1168(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1168
  c->r[0]=c->lr; // 800C116C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C1170
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800C1174
  c->r[31]=0u+0x803D0000u; // 800C1178
  c->r[31]=c->r[31]+0x00000960u; // 800C117C
  W32(c->r[1]+0x00000038u,c->r[30]); // 800C1180
  c->r[30]=c->r[3]|c->r[3]; // 800C1184
  c->lr=0x800C118Cu; f_801F4F28(c); // 800C1188
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800C118C
  cmps(c,0,(int32_t)c->r[0],102); // 800C1190
  if (crb(c,2)) { goto L_800C1218; } // 800C1194
  if (!crb(c,0)) { goto L_800C11AC; } // 800C1198
  cmps(c,0,(int32_t)c->r[0],100); // 800C119C
  if (crb(c,2)) { goto L_800C11B8; } // 800C11A0
  if (!crb(c,0)) { goto L_800C11E8; } // 800C11A4
  goto L_800C1274; // 800C11A8
L_800C11AC:;
  cmps(c,0,(int32_t)c->r[0],104); // 800C11AC
  if (!crb(c,0)) { goto L_800C1274; } // 800C11B0
  goto L_800C1248; // 800C11B4
L_800C11B8:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800C11B8
  c->r[5]=c->r[31]+0x00000018u; // 800C11BC
  c->r[3]=c->r[30]|c->r[30]; // 800C11C0
  c->r[4]=c->r[1]+0x0000002Cu; // 800C11C4
  c->r[7]=R32(c->r[31]+0x00000018u); // 800C11C8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800C11CC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C11D0
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800C11D4
  W32(c->r[1]+0x00000030u,c->r[6]); // 800C11D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C11DC
  c->lr=0x800C11E4u; f_800C0E38(c); // 800C11E0
  goto L_800C1274; // 800C11E4
L_800C11E8:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800C11E8
  c->r[5]=c->r[31]+0x00000024u; // 800C11EC
  c->r[3]=c->r[30]|c->r[30]; // 800C11F0
  c->r[4]=c->r[1]+0x00000020u; // 800C11F4
  c->r[7]=R32(c->r[31]+0x00000024u); // 800C11F8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800C11FC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C1200
  W32(c->r[1]+0x00000020u,c->r[7]); // 800C1204
  W32(c->r[1]+0x00000024u,c->r[6]); // 800C1208
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C120C
  c->lr=0x800C1214u; f_800C0E38(c); // 800C1210
  goto L_800C1274; // 800C1214
L_800C1218:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800C1218
  c->r[5]=c->r[31]+0x00000030u; // 800C121C
  c->r[3]=c->r[30]|c->r[30]; // 800C1220
  c->r[4]=c->r[1]+0x00000014u; // 800C1224
  c->r[7]=R32(c->r[31]+0x00000030u); // 800C1228
  c->r[6]=R32(c->r[5]+0x00000004u); // 800C122C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C1230
  W32(c->r[1]+0x00000014u,c->r[7]); // 800C1234
  W32(c->r[1]+0x00000018u,c->r[6]); // 800C1238
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C123C
  c->lr=0x800C1244u; f_800C0E38(c); // 800C1240
  goto L_800C1274; // 800C1244
L_800C1248:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800C1248
  c->r[5]=c->r[31]+0x0000003Cu; // 800C124C
  c->r[3]=c->r[30]|c->r[30]; // 800C1250
  c->r[4]=c->r[1]+0x00000008u; // 800C1254
  c->r[7]=R32(c->r[31]+0x0000003Cu); // 800C1258
  c->r[6]=R32(c->r[5]+0x00000004u); // 800C125C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C1260
  W32(c->r[1]+0x00000008u,c->r[7]); // 800C1264
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C1268
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C126C
  c->lr=0x800C1274u; f_800C0E38(c); // 800C1270
L_800C1274:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C1274
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800C1278
  c->r[30]=R32(c->r[1]+0x00000038u); // 800C127C
  c->lr=c->r[0]; // 800C1280
  c->r[1]=c->r[1]+0x00000040u; // 800C1284
  return; // 800C1288
}

// fn_800C128C
void f_800C128C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C128C
  c->r[0]=c->lr; // 800C1290
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1294
  c->r[5]=0u+0x00000000u; // 800C1298
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C129C
  c->r[0]=c->r[4]|c->r[4]; // 800C12A0
  {uint32_t ea=c->r[3]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C12A4
  fcmp(c,0,c->f[2],c->f[1]); // 800C12A8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C12AC
  if (!crb(c,2)) { goto L_800C12BC; } // 800C12B0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 800C12B4
  goto L_800C12CC; // 800C12B8
L_800C12BC:;
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C12BC
  fcmp(c,0,c->f[2],c->f[0]); // 800C12C0
  if (!crb(c,0)) { goto L_800C12CC; } // 800C12C4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 800C12C8
L_800C12CC:;
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C12CC
  fcmp(c,0,c->f[2],c->f[0]); // 800C12D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C12D4
  if (!crb(c,2)) { goto L_800C12EC; } // 800C12D8
  {uint32_t ea=c->r[2]+0xFFFF9DACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C12DC
  fcmp(c,0,c->f[2],c->f[0]); // 800C12E0
  if (!crb(c,0)) { goto L_800C12EC; } // 800C12E4
  c->r[5]=0u+0x00000000u; // 800C12E8
L_800C12EC:;
  {uint32_t ea=c->r[2]+0xFFFF9DACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C12EC
  fcmp(c,0,c->f[2],c->f[0]); // 800C12F0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C12F4
  if (!crb(c,2)) { goto L_800C130C; } // 800C12F8
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C12FC
  fcmp(c,0,c->f[2],c->f[0]); // 800C1300
  if (!crb(c,0)) { goto L_800C130C; } // 800C1304
  c->r[5]=0u+0x00000000u; // 800C1308
L_800C130C:;
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C130C
  fcmp(c,0,c->f[2],c->f[0]); // 800C1310
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1314
  if (!crb(c,2)) { goto L_800C132C; } // 800C1318
  {uint32_t ea=c->r[2]+0xFFFF9DB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C131C
  fcmp(c,0,c->f[2],c->f[0]); // 800C1320
  if (!crb(c,0)) { goto L_800C132C; } // 800C1324
  c->r[5]=0u+0x00000001u; // 800C1328
L_800C132C:;
  {uint32_t ea=c->r[2]+0xFFFF9DB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C132C
  fcmp(c,0,c->f[2],c->f[0]); // 800C1330
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1334
  if (!crb(c,2)) { goto L_800C134C; } // 800C1338
  {uint32_t ea=c->r[2]+0xFFFF9DB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C133C
  fcmp(c,0,c->f[2],c->f[0]); // 800C1340
  if (!crb(c,0)) { goto L_800C134C; } // 800C1344
  c->r[5]=0u+0x00000001u; // 800C1348
L_800C134C:;
  {uint32_t ea=c->r[2]+0xFFFF9DB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C134C
  fcmp(c,0,c->f[2],c->f[0]); // 800C1350
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1354
  if (!crb(c,2)) { goto L_800C1370; } // 800C1358
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C135C
  fcmp(c,0,c->f[2],c->f[0]); // 800C1360
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C1364
  if (!crb(c,2)) { goto L_800C1370; } // 800C1368
  c->r[5]=0u+0x00000000u; // 800C136C
L_800C1370:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C1370
  c->r[3]=c->r[0]|c->r[0]; // 800C1374
  c->lr=0x800C137Cu; f_80250BF4(c); // 800C1378
  c->r[0]=cntlz(c->r[3]); // 800C137C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C1380
  c->r[3]=0u-c->r[0]; // 800C1384
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C1388
  c->lr=c->r[0]; // 800C138C
  c->r[1]=c->r[1]+0x00000010u; // 800C1390
  return; // 800C1394
}

// fn_800C1398
void f_800C1398(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1398
  c->r[0]=c->lr; // 800C139C
  c->r[7]=0u+0x803D0000u; // 800C13A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C13A4
  c->r[4]=c->r[1]+0x00000008u; // 800C13A8
  {uint32_t ea=c->r[7]+0x000009A8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C13AC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C13B0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C13B4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C13B8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C13BC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C13C0
  c->lr=0x800C13C8u; f_800C0E38(c); // 800C13C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C13C8
  c->lr=c->r[0]; // 800C13CC
  c->r[1]=c->r[1]+0x00000020u; // 800C13D0
  return; // 800C13D4
}

// fn_800C13D8
void f_800C13D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C13D8
  c->r[0]=c->lr; // 800C13DC
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C13E0
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800C13E4
  W32(c->r[1]+0x00000088u,c->r[30]); // 800C13E8
  c->r[30]=c->r[3]|c->r[3]; // 800C13EC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C13F0
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800C13F4
  cmps(c,0,(int32_t)c->r[0],0); // 800C13F8
  if (!crb(c,2)) { goto L_800C1458; } // 800C13FC
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800C1400
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800C1404
  if (crb(c,2)) { goto L_800C1458; } // 800C1408
  {uint32_t ea=c->r[2]+0xFFFF9DBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C140C
  c->r[3]=c->r[1]+0x00000008u; // 800C1410
  c->r[4]=c->r[30]+0x0000002Cu; // 800C1414
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800C1418
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800C141C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C1420
  c->lr=0x800C1428u; f_800361A0(c); // 800C1424
  c->r[31]=0u+0x80550000u; // 800C1428
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C142C
  c->r[31]=c->r[31]+0x00003D60u; // 800C1430
  c->r[5]=c->r[30]|c->r[30]; // 800C1434
  c->r[3]=c->r[31]+0x00000010u; // 800C1438
  c->r[6]=c->r[1]+0x00000008u; // 800C143C
  c->r[7]=c->r[1]+0x00000020u; // 800C1440
  c->r[4]=0u+0x000001FFu; // 800C1444
  c->lr=0x800C144Cu; f_80226910(c); // 800C1448
  c->r[3]=c->r[31]+0x00000010u; // 800C144C
  c->r[4]=c->r[1]+0x00000020u; // 800C1450
  c->lr=0x800C1458u; f_80226D68(c); // 800C1454
L_800C1458:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C1458
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800C145C
  c->r[30]=R32(c->r[1]+0x00000088u); // 800C1460
  c->lr=c->r[0]; // 800C1464
  c->r[1]=c->r[1]+0x00000090u; // 800C1468
  return; // 800C146C
}

// fn_800C1470
void f_800C1470(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800C1470
  W8(c->r[3]+0x0000007Cu,c->r[4]); // 800C1474
  c->r[0]=c->r[0]|0x00000001u; // 800C1478
  W32(c->r[3]+0x00000078u,c->r[0]); // 800C147C
  return; // 800C1480
}

// fn_800C1484
void f_800C1484(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800C1484
  W8(c->r[3]+0x00000081u,c->r[4]); // 800C1488
  c->r[0]=c->r[0]|0x00000002u; // 800C148C
  W32(c->r[3]+0x00000078u,c->r[0]); // 800C1490
  return; // 800C1494
}

// fn_800C1498
void f_800C1498(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000078u); // 800C1498
  c->r[0]=0u+0x00000000u; // 800C149C
  W8(c->r[3]+0x0000007Cu,c->r[0]); // 800C14A0
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFFEu; // 800C14A4
  W32(c->r[3]+0x00000078u,c->r[0]); // 800C14A8
  return; // 800C14AC
}

// fn_800C14B0
void f_800C14B0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000078u); // 800C14B0
  c->r[0]=0u+0x00000000u; // 800C14B4
  W8(c->r[3]+0x00000081u,c->r[0]); // 800C14B8
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFFDu; // 800C14BC
  W32(c->r[3]+0x00000078u,c->r[0]); // 800C14C0
  return; // 800C14C4
}

// fn_800C14C8
void f_800C14C8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800C14C8
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800C14CC
  return; // 800C14D0
}

// fn_800C14D4
void f_800C14D4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800C14D4
  c->r[3]=rotl(c->r[0],31)&0x00000001u; // 800C14D8
  return; // 800C14DC
}

// fn_800C14E0
void f_800C14E0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x0000007Cu); // 800C14E0
  return; // 800C14E4
}

// fn_800C14E8
void f_800C14E8(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000081u); // 800C14E8
  return; // 800C14EC
}

// fn_800C14F0
void f_800C14F0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800C14F0
  c->r[0]=c->r[0]|0x00000004u; // 800C14F4
  W32(c->r[3]+0x00000078u,c->r[0]); // 800C14F8
  return; // 800C14FC
}

// fn_800C1500
void f_800C1500(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800C1500
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800C1504
  W32(c->r[3]+0x00000078u,c->r[0]); // 800C1508
  return; // 800C150C
}

// fn_800C1510
void f_800C1510(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800C1510
  c->r[3]=rotl(c->r[0],30)&0x00000001u; // 800C1514
  return; // 800C1518
}

// fn_800C151C
void f_800C151C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C151C
  c->r[0]=c->lr; // 800C1520
  cmps(c,0,(int32_t)c->r[3],0); // 800C1524
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C1528
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C152C
  c->r[31]=c->r[4]|c->r[4]; // 800C1530
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C1534
  c->r[30]=c->r[3]|c->r[3]; // 800C1538
  if (crb(c,2)) { goto L_800C1558; } // 800C153C
  c->r[4]=0u+0x00000000u; // 800C1540
  c->lr=0x800C1548u; f_8026A06C(c); // 800C1544
  cmps(c,0,(int32_t)c->r[31],0); // 800C1548
  if (!crb(c,1)) { goto L_800C1558; } // 800C154C
  c->r[3]=c->r[30]|c->r[30]; // 800C1550
  c->lr=0x800C1558u; f_8026A268(c); // 800C1554
L_800C1558:;
  c->r[3]=c->r[30]|c->r[30]; // 800C1558
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C155C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C1560
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C1564
  c->lr=c->r[0]; // 800C1568
  c->r[1]=c->r[1]+0x00000010u; // 800C156C
  return; // 800C1570
}

// fn_800C1574
void f_800C1574(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1574
  c->r[0]=c->lr; // 800C1578
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C157C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800C1580
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800C1584
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800C1588
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 800C158C
  c->r[4]=0u+0x00000000u; // 800C1590
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C1594
  W32(c->r[1]+0x00000048u,c->r[30]); // 800C1598
  c->r[30]=c->r[3]|c->r[3]; // 800C159C
  c->lr=0x800C15A4u; f_801F57D0(c); // 800C15A0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C15A4
  c->r[3]=c->r[30]|c->r[30]; // 800C15A8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C15AC
  c->ctr=c->r[12]; // 800C15B0
  if (true) { c->lr=0x800C15B8u; dispatch(c,c->ctr); } // 800C15B4
  c->r[3]=c->r[30]|c->r[30]; // 800C15B8
  c->lr=0x800C15C0u; f_801F4B94(c); // 800C15BC
  c->r[3]=0u+0x00000003u; // 800C15C0
  c->r[0]=0u+0x00000024u; // 800C15C4
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800C15C8
  c->r[3]=c->r[30]|c->r[30]; // 800C15CC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C15D0
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800C15D4
  c->lr=0x800C15DCu; f_801F58BC(c); // 800C15D8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C15DC
  c->r[31]=0u+0x00000001u; // 800C15E0
  c->r[4]=0u+0x803A0000u; // 800C15E4
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800C15E8
  c->r[4]=c->r[4]+0xFFFFD118u; // 800C15EC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C15F0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C15F4
  c->lr=0x800C15FCu; f_80256EC4(c); // 800C15F8
  c->r[6]=R32(c->r[30]+0x00000394u); // 800C15FC
  c->r[5]=0u+0x805D0000u; // 800C1600
  c->r[4]=c->r[30]+0x0000002Cu; // 800C1604
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800C1608
  c->r[3]=c->r[5]+0x000078B0u; // 800C160C
  c->lr=0x800C1614u; f_802351CC(c); // 800C1610
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C1614
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800C1618
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800C161C
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800C1620
  cmps(c,0,(int32_t)c->r[0],1); // 800C1624
  if (crb(c,2)) { goto L_800C1664; } // 800C1628
  if (!crb(c,0)) { goto L_800C1688; } // 800C162C
  cmps(c,0,(int32_t)c->r[0],0); // 800C1630
  if (!crb(c,0)) { goto L_800C163C; } // 800C1634
  goto L_800C1688; // 800C1638
L_800C163C:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C163C
  c->r[3]=c->r[30]|c->r[30]; // 800C1640
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1644
  c->r[4]=0u+0x00000000u; // 800C1648
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C164C
  c->r[5]=0u+0x00000001u; // 800C1650
  c->f[2]=c->f[1]; // 800C1654
  c->ctr=c->r[12]; // 800C1658
  if (true) { c->lr=0x800C1660u; dispatch(c,c->ctr); } // 800C165C
  goto L_800C1688; // 800C1660
L_800C1664:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C1664
  c->r[3]=c->r[30]|c->r[30]; // 800C1668
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C166C
  c->r[4]=0u+0x00000000u; // 800C1670
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C1674
  c->r[5]=0u+0x00000001u; // 800C1678
  c->f[2]=c->f[1]; // 800C167C
  c->ctr=c->r[12]; // 800C1680
  if (true) { c->lr=0x800C1688u; dispatch(c,c->ctr); } // 800C1684
L_800C1688:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C1688
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C168C
  c->lr=0x800C1694u; f_802501B0(c); // 800C1690
  c->r[31]=0u+0x00000000u; // 800C1694
  c->r[3]=c->r[30]+0x0000000Cu; // 800C1698
  W8(c->r[30]+0x00000028u,c->r[31]); // 800C169C
  c->r[4]=0u+0x00000000u; // 800C16A0
  W8(c->r[30]+0x00000029u,c->r[31]); // 800C16A4
  c->lr=0x800C16ACu; f_80036430(c); // 800C16A8
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800C16AC
  c->r[4]=0u+0x000000FFu; // 800C16B0
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C16B4
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800C16B8
  c->r[3]=rotl(c->r[3],0)&0xFFFFBFFFu; // 800C16BC
  W32(c->r[30]+0x00000088u,c->r[31]); // 800C16C0
  cmps(c,0,(int32_t)c->r[0],1); // 800C16C4
  W8(c->r[30]+0x0000008Cu,c->r[4]); // 800C16C8
  W8(c->r[30]+0x0000008Du,c->r[4]); // 800C16CC
  W8(c->r[30]+0x0000008Eu,c->r[4]); // 800C16D0
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 800C16D4
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[1]);} // 800C16D8
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[1]);} // 800C16DC
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800C16E0
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[1]);} // 800C16E4
  W16(c->r[30]+0x000003BEu,c->r[3]); // 800C16E8
  if (crb(c,2)) { goto L_800C1714; } // 800C16EC
  if (!crb(c,0)) { goto L_800C1728; } // 800C16F0
  cmps(c,0,(int32_t)c->r[0],0); // 800C16F4
  if (!crb(c,0)) { goto L_800C1700; } // 800C16F8
  goto L_800C1728; // 800C16FC
L_800C1700:;
  c->r[0]=c->r[31]|0x00000014u; // 800C1700
  c->f[31]=c->f[1]; // 800C1704
  c->f[30]=c->f[1]; // 800C1708
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C170C
  goto L_800C1728; // 800C1710
L_800C1714:;
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1714
  c->r[0]=c->r[31]|0x00000018u; // 800C1718
  c->f[30]=c->f[1]; // 800C171C
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1720
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 800C1724
L_800C1728:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C1728
  c->r[31]=0u+0x803A0000u; // 800C172C
  c->r[31]=c->r[31]+0xFFFFD118u; // 800C1730
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C1734
  c->r[4]=c->r[31]+0x00000009u; // 800C1738
  c->lr=0x800C1740u; f_80256EC4(c); // 800C173C
  W8(c->r[30]+0x00000084u,c->r[3]); // 800C1740
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800C1744
  c->r[6]=R32(c->r[30]+0x00000394u); // 800C1748
  c->r[5]=c->r[1]+0x00000038u; // 800C174C
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800C1750
  c->lr=0x800C1758u; f_8025EA54(c); // 800C1754
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[31]);} // 800C1758
  c->r[5]=c->r[1]+0x0000002Cu; // 800C175C
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800C1760
  c->r[4]=R32(c->r[1]+0x00000038u); // 800C1764
  c->r[0]=R32(c->r[1]+0x00000040u); // 800C1768
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800C176C
  W32(c->r[1]+0x00000030u,c->r[3]); // 800C1770
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C1774
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C1778
  c->r[4]=R8(c->r[30]+0x00000084u); // 800C177C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C1780
  c->lr=0x800C1788u; f_8025E9C0(c); // 800C1784
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C1788
  c->r[4]=c->r[31]+0x00000010u; // 800C178C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C1790
  c->lr=0x800C1798u; f_80256EC4(c); // 800C1794
  W8(c->r[30]+0x00000085u,c->r[3]); // 800C1798
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800C179C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800C17A0
  c->r[5]=c->r[1]+0x00000038u; // 800C17A4
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800C17A8
  c->lr=0x800C17B0u; f_8025EA54(c); // 800C17AC
  c->f[0]=-c->f[31]; // 800C17B0
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800C17B4
  c->r[0]=R32(c->r[1]+0x00000040u); // 800C17B8
  c->r[5]=c->r[1]+0x00000020u; // 800C17BC
  W32(c->r[1]+0x00000024u,c->r[3]); // 800C17C0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800C17C4
  c->r[3]=R32(c->r[1]+0x00000038u); // 800C17C8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C17CC
  W32(c->r[1]+0x00000020u,c->r[3]); // 800C17D0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C17D4
  c->r[4]=R8(c->r[30]+0x00000085u); // 800C17D8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C17DC
  c->lr=0x800C17E4u; f_8025E9C0(c); // 800C17E0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C17E4
  c->r[4]=c->r[31]+0x00000017u; // 800C17E8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C17EC
  c->lr=0x800C17F4u; f_80256EC4(c); // 800C17F0
  W8(c->r[30]+0x00000086u,c->r[3]); // 800C17F4
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800C17F8
  c->r[6]=R32(c->r[30]+0x00000394u); // 800C17FC
  c->r[5]=c->r[1]+0x00000038u; // 800C1800
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800C1804
  c->lr=0x800C180Cu; f_8025EA54(c); // 800C1808
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[30]);} // 800C180C
  c->r[5]=c->r[1]+0x00000014u; // 800C1810
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800C1814
  c->r[4]=R32(c->r[1]+0x00000038u); // 800C1818
  c->r[0]=R32(c->r[1]+0x00000040u); // 800C181C
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C1820
  W32(c->r[1]+0x00000018u,c->r[3]); // 800C1824
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C1828
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C182C
  c->r[4]=R8(c->r[30]+0x00000086u); // 800C1830
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C1834
  c->lr=0x800C183Cu; f_8025E9C0(c); // 800C1838
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C183C
  c->r[4]=c->r[31]+0x0000001Eu; // 800C1840
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C1844
  c->lr=0x800C184Cu; f_80256EC4(c); // 800C1848
  W8(c->r[30]+0x00000087u,c->r[3]); // 800C184C
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800C1850
  c->r[6]=R32(c->r[30]+0x00000394u); // 800C1854
  c->r[5]=c->r[1]+0x00000038u; // 800C1858
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800C185C
  c->lr=0x800C1864u; f_8025EA54(c); // 800C1860
  c->f[0]=-c->f[30]; // 800C1864
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800C1868
  c->r[0]=R32(c->r[1]+0x00000040u); // 800C186C
  c->r[5]=c->r[1]+0x00000008u; // 800C1870
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C1874
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800C1878
  c->r[3]=R32(c->r[1]+0x00000038u); // 800C187C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C1880
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C1884
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C1888
  c->r[4]=R8(c->r[30]+0x00000087u); // 800C188C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C1890
  c->lr=0x800C1898u; f_8025E9C0(c); // 800C1894
  c->r[3]=c->r[30]|c->r[30]; // 800C1898
  c->lr=0x800C18A0u; f_801F56F4(c); // 800C189C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C18A0
  c->r[3]=c->r[30]|c->r[30]; // 800C18A4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C18A8
  c->ctr=c->r[12]; // 800C18AC
  if (true) { c->lr=0x800C18B4u; dispatch(c,c->ctr); } // 800C18B0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800C18B4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800C18B8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 800C18BC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 800C18C0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C18C4
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C18C8
  c->r[30]=R32(c->r[1]+0x00000048u); // 800C18CC
  c->lr=c->r[0]; // 800C18D0
  c->r[1]=c->r[1]+0x00000070u; // 800C18D4
  return; // 800C18D8
}

// fn_800C18DC
void f_800C18DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C18DC
  c->r[0]=c->lr; // 800C18E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C18E4
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800C18E8
  cmps(c,0,(int32_t)c->r[0],0); // 800C18EC
  if (!crb(c,2)) { goto L_800C1914; } // 800C18F0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C18F4
  c->r[3]=0u+0x0000022Cu; // 800C18F8
  c->r[5]=0u+0x00000000u; // 800C18FC
  c->r[4]=c->r[4]+0x0000010Cu; // 800C1900
  c->lr=0x800C1908u; f_8024EE50(c); // 800C1904
  c->r[0]=cntlz(c->r[3]); // 800C1908
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C190C
  goto L_800C1930; // 800C1910
L_800C1914:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C1914
  c->r[3]=0u+0x00000240u; // 800C1918
  c->r[5]=0u+0x00000000u; // 800C191C
  c->r[4]=c->r[4]+0x0000010Cu; // 800C1920
  c->lr=0x800C1928u; f_8024EE50(c); // 800C1924
  c->r[0]=cntlz(c->r[3]); // 800C1928
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C192C
L_800C1930:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C1930
  c->lr=c->r[0]; // 800C1934
  c->r[1]=c->r[1]+0x00000010u; // 800C1938
  return; // 800C193C
}

// fn_800C1940
void f_800C1940(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1940
  c->r[0]=c->lr; // 800C1944
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C1948
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800C194C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800C1950
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800C1954
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 800C1958
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C195C
  c->r[31]=0u+0x00000000u; // 800C1960
  W32(c->r[1]+0x00000048u,c->r[30]); // 800C1964
  c->r[30]=c->r[3]|c->r[3]; // 800C1968
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800C196C
  {uint32_t ea=c->r[3]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1970
  cmps(c,0,(int32_t)c->r[0],0); // 800C1974
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800C1978
  if (!crb(c,2)) { goto L_800C1A8C; } // 800C197C
  c->r[4]=R32(c->r[3]+0x00000088u); // 800C1980
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 800C1984
  if (crb(c,2)) { goto L_800C1A8C; } // 800C1988
  c->r[0]=rotl(c->r[4],0)&0xFFFFFDFFu; // 800C198C
  c->r[4]=0u+0x00000000u; // 800C1990
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800C1994
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1998
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800C199C
  W8(c->r[3]+0x00000028u,c->r[4]); // 800C19A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 800C19A4
  c->f[2]=c->f[1]; // 800C19A8
  W8(c->r[3]+0x00000029u,c->r[4]); // 800C19AC
  c->r[4]=0u+0x00000000u; // 800C19B0
  c->r[5]=0u+0x00000001u; // 800C19B4
  W32(c->r[3]+0x00000088u,c->r[0]); // 800C19B8
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800C19BC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C19C0
  c->ctr=c->r[12]; // 800C19C4
  if (true) { c->lr=0x800C19CCu; dispatch(c,c->ctr); } // 800C19C8
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C19CC
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C19D0
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C19D4
  fcmp(c,0,c->f[31],c->f[31]); // 800C19D8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 800C19DC
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[31]);} // 800C19E0
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[31]);} // 800C19E4
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C19E8
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[31]);} // 800C19EC
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[31]);} // 800C19F0
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C19F4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C19F8
  if (!crb(c,2)) { goto L_800C1A08; } // 800C19FC
  c->r[0]=c->r[0]|0x00000008u; // 800C1A00
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1A04
L_800C1A08:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1A08
  fcmp(c,0,c->f[31],c->f[0]); // 800C1A0C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C1A10
  if (!crb(c,2)) { goto L_800C1A24; } // 800C1A14
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C1A18
  c->r[0]=c->r[0]|0x00000004u; // 800C1A1C
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1A20
L_800C1A24:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C1A24
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1A28
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C1A2C
  fcmp(c,0,c->f[30],c->f[0]); // 800C1A30
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFCFu; // 800C1A34
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1A38
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1A3C
  if (!crb(c,2)) { goto L_800C1A4C; } // 800C1A40
  c->r[0]=c->r[0]|0x00000020u; // 800C1A44
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1A48
L_800C1A4C:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1A4C
  fcmp(c,0,c->f[30],c->f[0]); // 800C1A50
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C1A54
  if (!crb(c,2)) { goto L_800C1A68; } // 800C1A58
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C1A5C
  c->r[0]=c->r[0]|0x00000010u; // 800C1A60
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1A64
L_800C1A68:;
  c->r[4]=0u+0x803A0000u; // 800C1A68
  c->r[3]=0u+0x80550000u; // 800C1A6C
  c->r[4]=c->r[4]+0xFFFFD118u; // 800C1A70
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C1A74
  c->r[4]=c->r[4]+0x00000025u; // 800C1A78
  c->lr=0x800C1A80u; f_8018D848(c); // 800C1A7C
  c->r[0]=0u+0x000000FFu; // 800C1A80
  c->r[31]=0u+0x00000001u; // 800C1A84
  W8(c->r[30]+0x0000008Du,c->r[0]); // 800C1A88
L_800C1A8C:;
  c->r[0]=R8(c->r[30]+0x00000028u); // 800C1A8C
  cmps(c,0,(int32_t)c->r[0],1); // 800C1A90
  if (crb(c,2)) { goto L_800C22FC; } // 800C1A94
  if (!crb(c,0)) { goto L_800C1AA8; } // 800C1A98
  cmps(c,0,(int32_t)c->r[0],0); // 800C1A9C
  if (!crb(c,0)) { goto L_800C1AB4; } // 800C1AA0
  goto L_800C25BC; // 800C1AA4
L_800C1AA8:;
  cmps(c,0,(int32_t)c->r[0],3); // 800C1AA8
  if (!crb(c,0)) { goto L_800C25BC; } // 800C1AAC
  goto L_800C251C; // 800C1AB0
L_800C1AB4:;
  c->r[3]=c->r[30]|c->r[30]; // 800C1AB4
  c->lr=0x800C1ABCu; f_801F4C0C(c); // 800C1AB8
  c->r[3]=R32(c->r[30]+0x00000088u); // 800C1ABC
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800C1AC0
  if (crb(c,2)) { goto L_800C1ADC; } // 800C1AC4
  c->r[0]=rotl(c->r[3],0)&0xFFFFFBFFu; // 800C1AC8
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1ACC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800C1AD0
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C1AD4
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1AD8
L_800C1ADC:;
  c->r[3]=R32(c->r[30]+0x00000088u); // 800C1ADC
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C1AE0
  if (crb(c,2)) { goto L_800C1B48; } // 800C1AE4
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C1AE8
  if (crb(c,2)) { goto L_800C1B04; } // 800C1AEC
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1AF0
  {uint32_t ea=c->r[2]+0xFFFF9DD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1AF4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800C1AF8
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C1AFC
  goto L_800C1B14; // 800C1B00
L_800C1B04:;
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1B04
  {uint32_t ea=c->r[2]+0xFFFF9DD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1B08
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800C1B0C
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C1B10
L_800C1B14:;
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1B14
  {uint32_t ea=c->r[2]+0xFFFF9DD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1B18
  fcmp(c,0,c->f[1],c->f[0]); // 800C1B1C
  if (!crb(c,1)) { goto L_800C1B28; } // 800C1B20
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C1B24
L_800C1B28:;
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1B28
  {uint32_t ea=c->r[2]+0xFFFF9DD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1B2C
  fcmp(c,0,c->f[1],c->f[0]); // 800C1B30
  if (!crb(c,0)) { goto L_800C1B3C; } // 800C1B34
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C1B38
L_800C1B3C:;
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C1B3C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800C1B40
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1B44
L_800C1B48:;
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C1B48
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1B4C
  fcmp(c,0,c->f[2],c->f[1]); // 800C1B50
  if (!crb(c,0)) { goto L_800C1B70; } // 800C1B54
  {uint32_t ea=c->r[2]+0xFFFF9DDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1B58
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800C1B5C
  fcmp(c,0,c->f[0],c->f[1]); // 800C1B60
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C1B64
  if (!crb(c,1)) { goto L_800C1B70; } // 800C1B68
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[1]);} // 800C1B6C
L_800C1B70:;
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C1B70
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1B74
  fcmp(c,0,c->f[2],c->f[1]); // 800C1B78
  if (!crb(c,1)) { goto L_800C1B98; } // 800C1B7C
  {uint32_t ea=c->r[2]+0xFFFF9DDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1B80
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800C1B84
  fcmp(c,0,c->f[0],c->f[1]); // 800C1B88
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C1B8C
  if (!crb(c,0)) { goto L_800C1B98; } // 800C1B90
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[1]);} // 800C1B94
L_800C1B98:;
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1B98
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C1B9C
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1BA0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800C1BA4
  fcmp(c,0,c->f[0],c->f[1]); // 800C1BA8
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[0]);} // 800C1BAC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1BB0
  if (!crb(c,2)) { goto L_800C1BCC; } // 800C1BB4
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1BB8
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 800C1BBC
  fcmp(c,0,c->f[2],c->f[0]); // 800C1BC0
  if (!crb(c,1)) { goto L_800C1BCC; } // 800C1BC4
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C1BC8
L_800C1BCC:;
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1BCC
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1BD0
  fcmp(c,0,c->f[0],c->f[1]); // 800C1BD4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C1BD8
  if (!crb(c,2)) { goto L_800C1BF4; } // 800C1BDC
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1BE0
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 800C1BE4
  fcmp(c,0,c->f[0],c->f[1]); // 800C1BE8
  if (!crb(c,0)) { goto L_800C1BF4; } // 800C1BEC
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[1]);} // 800C1BF0
L_800C1BF4:;
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1BF4
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1BF8
  fcmp(c,0,c->f[0],c->f[1]); // 800C1BFC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1C00
  if (!crb(c,2)) { goto L_800C1C80; } // 800C1C04
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1C08
  fcmp(c,0,c->f[0],c->f[1]); // 800C1C0C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1C10
  if (!crb(c,2)) { goto L_800C1C2C; } // 800C1C14
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1C18
  fcmp(c,0,c->f[0],c->f[1]); // 800C1C1C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C1C20
  if (!crb(c,2)) { goto L_800C1C2C; } // 800C1C24
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800C1C28
L_800C1C2C:;
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1C2C
  {uint32_t ea=c->r[2]+0xFFFF9DE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1C30
  fcmp(c,0,c->f[0],c->f[1]); // 800C1C34
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1C38
  if (!crb(c,2)) { goto L_800C1C54; } // 800C1C3C
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1C40
  fcmp(c,0,c->f[0],c->f[1]); // 800C1C44
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C1C48
  if (!crb(c,2)) { goto L_800C1C54; } // 800C1C4C
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800C1C50
L_800C1C54:;
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1C54
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1C58
  fcmp(c,0,c->f[0],c->f[1]); // 800C1C5C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1C60
  if (!crb(c,2)) { goto L_800C1CF8; } // 800C1C64
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1C68
  fcmp(c,0,c->f[0],c->f[1]); // 800C1C6C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C1C70
  if (!crb(c,2)) { goto L_800C1CF8; } // 800C1C74
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800C1C78
  goto L_800C1CF8; // 800C1C7C
L_800C1C80:;
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1C80
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1C84
  fcmp(c,0,c->f[0],c->f[1]); // 800C1C88
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C1C8C
  if (!crb(c,2)) { goto L_800C1CA8; } // 800C1C90
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1C94
  fcmp(c,0,c->f[0],c->f[1]); // 800C1C98
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1C9C
  if (!crb(c,2)) { goto L_800C1CA8; } // 800C1CA0
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800C1CA4
L_800C1CA8:;
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1CA8
  {uint32_t ea=c->r[2]+0xFFFF9DE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1CAC
  fcmp(c,0,c->f[0],c->f[1]); // 800C1CB0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C1CB4
  if (!crb(c,2)) { goto L_800C1CD0; } // 800C1CB8
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1CBC
  fcmp(c,0,c->f[0],c->f[1]); // 800C1CC0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1CC4
  if (!crb(c,2)) { goto L_800C1CD0; } // 800C1CC8
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800C1CCC
L_800C1CD0:;
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1CD0
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1CD4
  fcmp(c,0,c->f[0],c->f[1]); // 800C1CD8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C1CDC
  if (!crb(c,2)) { goto L_800C1CF8; } // 800C1CE0
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1CE4
  fcmp(c,0,c->f[0],c->f[1]); // 800C1CE8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1CEC
  if (!crb(c,2)) { goto L_800C1CF8; } // 800C1CF0
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800C1CF4
L_800C1CF8:;
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800C1CF8
  cmps(c,0,(int32_t)c->r[0],1); // 800C1CFC
  if (crb(c,2)) { goto L_800C1FB8; } // 800C1D00
  if (!crb(c,0)) { goto L_800C25BC; } // 800C1D04
  cmps(c,0,(int32_t)c->r[0],0); // 800C1D08
  if (!crb(c,0)) { goto L_800C1D14; } // 800C1D0C
  goto L_800C25BC; // 800C1D10
L_800C1D14:;
  c->r[0]=R8(c->r[30]+0x00000029u); // 800C1D14
  cmps(c,0,(int32_t)c->r[0],0); // 800C1D18
  if (!crb(c,2)) { goto L_800C1D78; } // 800C1D1C
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1D20
  c->lr=0x800C1D28u; f_8002C1B0(c); // 800C1D24
  {uint32_t ea=c->r[2]+0xFFFF9DE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1D28
  fcmp(c,0,c->f[1],c->f[0]); // 800C1D2C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1D30
  if (!crb(c,2)) { goto L_800C1DC4; } // 800C1D34
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C1D38
  c->r[3]=c->r[30]|c->r[30]; // 800C1D3C
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1D40
  c->r[4]=0u+0x00000001u; // 800C1D44
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C1D48
  c->r[5]=0u+0x00000001u; // 800C1D4C
  c->f[2]=c->f[1]; // 800C1D50
  c->ctr=c->r[12]; // 800C1D54
  if (true) { c->lr=0x800C1D5Cu; dispatch(c,c->ctr); } // 800C1D58
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C1D5C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C1D60
  c->lr=0x800C1D68u; f_802501B0(c); // 800C1D64
  c->r[3]=R8(c->r[30]+0x00000029u); // 800C1D68
  c->r[0]=c->r[3]+0x00000001u; // 800C1D6C
  W8(c->r[30]+0x00000029u,c->r[0]); // 800C1D70
  goto L_800C1DC4; // 800C1D74
L_800C1D78:;
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1D78
  c->lr=0x800C1D80u; f_8002C1B0(c); // 800C1D7C
  {uint32_t ea=c->r[2]+0xFFFF9DE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1D80
  fcmp(c,0,c->f[1],c->f[0]); // 800C1D84
  if (!crb(c,0)) { goto L_800C1DC4; } // 800C1D88
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C1D8C
  c->r[3]=c->r[30]|c->r[30]; // 800C1D90
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1D94
  c->r[4]=0u+0x00000000u; // 800C1D98
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C1D9C
  c->r[5]=0u+0x00000001u; // 800C1DA0
  c->f[2]=c->f[1]; // 800C1DA4
  c->ctr=c->r[12]; // 800C1DA8
  if (true) { c->lr=0x800C1DB0u; dispatch(c,c->ctr); } // 800C1DAC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C1DB0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C1DB4
  c->lr=0x800C1DBCu; f_802501B0(c); // 800C1DB8
  c->r[0]=0u+0x00000000u; // 800C1DBC
  W8(c->r[30]+0x00000029u,c->r[0]); // 800C1DC0
L_800C1DC4:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1DC4
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1DC8
  fcmp(c,0,c->f[1],c->f[0]); // 800C1DCC
  if (!crb(c,2)) { goto L_800C1E4C; } // 800C1DD0
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1DD4
  fcmp(c,0,c->f[0],c->f[1]); // 800C1DD8
  if (!crb(c,1)) { goto L_800C1E4C; } // 800C1DDC
  c->r[5]=R8(c->r[30]+0x00000028u); // 800C1DE0
  c->f[2]=c->f[1]; // 800C1DE4
  c->r[3]=c->r[30]|c->r[30]; // 800C1DE8
  c->r[4]=0u+0x00000003u; // 800C1DEC
  c->r[0]=c->r[5]+0x00000001u; // 800C1DF0
  c->r[5]=0u+0x00000001u; // 800C1DF4
  W8(c->r[30]+0x00000028u,c->r[0]); // 800C1DF8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C1DFC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C1E00
  c->ctr=c->r[12]; // 800C1E04
  if (true) { c->lr=0x800C1E0Cu; dispatch(c,c->ctr); } // 800C1E08
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C1E0C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C1E10
  c->lr=0x800C1E18u; f_802501B0(c); // 800C1E14
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C1E18
  c->r[3]=0u+0x00000002u; // 800C1E1C
  c->r[0]=c->r[0]|0x00000040u; // 800C1E20
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1E24
  c->lr=0x800C1E2Cu; f_80269AD0(c); // 800C1E28
  c->r[3]=c->r[30]|c->r[30]; // 800C1E2C
  c->lr=0x800C1E34u; f_800C2A04(c); // 800C1E30
  c->r[3]=c->r[30]|c->r[30]; // 800C1E34
  c->r[4]=0u+0x00000004u; // 800C1E38
  c->r[5]=0u+0x00000011u; // 800C1E3C
  c->r[6]=0u+0x00000001u; // 800C1E40
  c->r[7]=0u+0x00000001u; // 800C1E44
  c->lr=0x800C1E4Cu; f_8017900C(c); // 800C1E48
L_800C1E4C:;
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1E4C
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1E50
  fcmp(c,0,c->f[1],c->f[0]); // 800C1E54
  if (!crb(c,2)) { goto L_800C1ED8; } // 800C1E58
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1E5C
  fcmp(c,0,c->f[0],c->f[1]); // 800C1E60
  if (!crb(c,0)) { goto L_800C1ED8; } // 800C1E64
  c->r[5]=R8(c->r[30]+0x00000028u); // 800C1E68
  c->r[3]=c->r[30]|c->r[30]; // 800C1E6C
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1E70
  c->r[4]=0u+0x00000002u; // 800C1E74
  c->r[0]=c->r[5]+0x00000001u; // 800C1E78
  c->r[5]=0u+0x00000001u; // 800C1E7C
  W8(c->r[30]+0x00000028u,c->r[0]); // 800C1E80
  c->f[2]=c->f[1]; // 800C1E84
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C1E88
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C1E8C
  c->ctr=c->r[12]; // 800C1E90
  if (true) { c->lr=0x800C1E98u; dispatch(c,c->ctr); } // 800C1E94
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C1E98
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C1E9C
  c->lr=0x800C1EA4u; f_802501B0(c); // 800C1EA0
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C1EA4
  c->r[3]=0u+0x00000002u; // 800C1EA8
  c->r[0]=c->r[0]|0x00000040u; // 800C1EAC
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1EB0
  c->lr=0x800C1EB8u; f_80269AD0(c); // 800C1EB4
  c->r[3]=c->r[30]|c->r[30]; // 800C1EB8
  c->lr=0x800C1EC0u; f_800C2A04(c); // 800C1EBC
  c->r[3]=c->r[30]|c->r[30]; // 800C1EC0
  c->r[4]=0u+0x00000004u; // 800C1EC4
  c->r[5]=0u+0x00000011u; // 800C1EC8
  c->r[6]=0u+0x00000001u; // 800C1ECC
  c->r[7]=0u+0x00000001u; // 800C1ED0
  c->lr=0x800C1ED8u; f_8017900C(c); // 800C1ED4
L_800C1ED8:;
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C1ED8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800C1EDC
  if (crb(c,2)) { goto L_800C1F2C; } // 800C1EE0
  c->r[0]=0u+0x00000002u; // 800C1EE4
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1EE8
  W8(c->r[30]+0x00000028u,c->r[0]); // 800C1EEC
  c->r[3]=c->r[30]|c->r[30]; // 800C1EF0
  c->f[2]=c->f[1]; // 800C1EF4
  c->r[4]=0u+0x00000004u; // 800C1EF8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C1EFC
  c->r[5]=0u+0x00000001u; // 800C1F00
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C1F04
  c->ctr=c->r[12]; // 800C1F08
  if (true) { c->lr=0x800C1F10u; dispatch(c,c->ctr); } // 800C1F0C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C1F10
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C1F14
  c->lr=0x800C1F1Cu; f_802501B0(c); // 800C1F18
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C1F1C
  c->r[0]=c->r[0]|0x00000040u; // 800C1F20
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800C1F24
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1F28
L_800C1F2C:;
  {uint32_t ea=c->r[30]+0x00000074u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C1F2C
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F30
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C1F34
  fcmp(c,0,c->f[31],c->f[0]); // 800C1F38
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 800C1F3C
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1F40
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1F44
  if (!crb(c,2)) { goto L_800C1F54; } // 800C1F48
  c->r[0]=c->r[0]|0x00000008u; // 800C1F4C
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1F50
L_800C1F54:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F54
  fcmp(c,0,c->f[31],c->f[0]); // 800C1F58
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C1F5C
  if (!crb(c,2)) { goto L_800C1F70; } // 800C1F60
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C1F64
  c->r[0]=c->r[0]|0x00000004u; // 800C1F68
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1F6C
L_800C1F70:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C1F70
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F74
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C1F78
  fcmp(c,0,c->f[30],c->f[0]); // 800C1F7C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFCFu; // 800C1F80
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1F84
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1F88
  if (!crb(c,2)) { goto L_800C1F98; } // 800C1F8C
  c->r[0]=c->r[0]|0x00000020u; // 800C1F90
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1F94
L_800C1F98:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F98
  fcmp(c,0,c->f[30],c->f[0]); // 800C1F9C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C1FA0
  if (!crb(c,2)) { goto L_800C25BC; } // 800C1FA4
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C1FA8
  c->r[0]=c->r[0]|0x00000010u; // 800C1FAC
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C1FB0
  goto L_800C25BC; // 800C1FB4
L_800C1FB8:;
  c->r[0]=R8(c->r[30]+0x00000029u); // 800C1FB8
  cmps(c,0,(int32_t)c->r[0],0); // 800C1FBC
  if (!crb(c,2)) { goto L_800C2054; } // 800C1FC0
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1FC4
  c->lr=0x800C1FCCu; f_8002C1B0(c); // 800C1FC8
  {uint32_t ea=c->r[2]+0xFFFF9DE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1FCC
  fcmp(c,0,c->f[1],c->f[0]); // 800C1FD0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1FD4
  if (!crb(c,2)) { goto L_800C20D8; } // 800C1FD8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C1FDC
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C1FE0
  cmps(c,0,(int32_t)c->r[0],0); // 800C1FE4
  if (!crb(c,2)) { goto L_800C2014; } // 800C1FE8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C1FEC
  c->r[3]=c->r[30]|c->r[30]; // 800C1FF0
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1FF4
  c->r[4]=0u+0x00000004u; // 800C1FF8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C1FFC
  c->r[5]=0u+0x00000001u; // 800C2000
  c->f[2]=c->f[1]; // 800C2004
  c->ctr=c->r[12]; // 800C2008
  if (true) { c->lr=0x800C2010u; dispatch(c,c->ctr); } // 800C200C
  goto L_800C2038; // 800C2010
L_800C2014:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C2014
  c->r[3]=c->r[30]|c->r[30]; // 800C2018
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C201C
  c->r[4]=0u+0x00000007u; // 800C2020
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C2024
  c->r[5]=0u+0x00000001u; // 800C2028
  c->f[2]=c->f[1]; // 800C202C
  c->ctr=c->r[12]; // 800C2030
  if (true) { c->lr=0x800C2038u; dispatch(c,c->ctr); } // 800C2034
L_800C2038:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C2038
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C203C
  c->lr=0x800C2044u; f_802501B0(c); // 800C2040
  c->r[3]=R8(c->r[30]+0x00000029u); // 800C2044
  c->r[0]=c->r[3]+0x00000001u; // 800C2048
  W8(c->r[30]+0x00000029u,c->r[0]); // 800C204C
  goto L_800C20D8; // 800C2050
L_800C2054:;
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2054
  c->lr=0x800C205Cu; f_8002C1B0(c); // 800C2058
  {uint32_t ea=c->r[2]+0xFFFF9DE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C205C
  fcmp(c,0,c->f[1],c->f[0]); // 800C2060
  if (!crb(c,0)) { goto L_800C20D8; } // 800C2064
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C2068
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C206C
  cmps(c,0,(int32_t)c->r[0],4); // 800C2070
  if (!crb(c,2)) { goto L_800C20A0; } // 800C2074
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C2078
  c->r[3]=c->r[30]|c->r[30]; // 800C207C
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2080
  c->r[4]=0u+0x00000000u; // 800C2084
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C2088
  c->r[5]=0u+0x00000001u; // 800C208C
  c->f[2]=c->f[1]; // 800C2090
  c->ctr=c->r[12]; // 800C2094
  if (true) { c->lr=0x800C209Cu; dispatch(c,c->ctr); } // 800C2098
  goto L_800C20C4; // 800C209C
L_800C20A0:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C20A0
  c->r[3]=c->r[30]|c->r[30]; // 800C20A4
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C20A8
  c->r[4]=0u+0x00000002u; // 800C20AC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C20B0
  c->r[5]=0u+0x00000001u; // 800C20B4
  c->f[2]=c->f[1]; // 800C20B8
  c->ctr=c->r[12]; // 800C20BC
  if (true) { c->lr=0x800C20C4u; dispatch(c,c->ctr); } // 800C20C0
L_800C20C4:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C20C4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C20C8
  c->lr=0x800C20D0u; f_802501B0(c); // 800C20CC
  c->r[0]=0u+0x00000000u; // 800C20D0
  W8(c->r[30]+0x00000029u,c->r[0]); // 800C20D4
L_800C20D8:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C20D8
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C20DC
  fcmp(c,0,c->f[1],c->f[0]); // 800C20E0
  if (!crb(c,2)) { goto L_800C21A0; } // 800C20E4
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C20E8
  fcmp(c,0,c->f[0],c->f[1]); // 800C20EC
  if (!crb(c,1)) { goto L_800C21A0; } // 800C20F0
  c->r[4]=R8(c->r[30]+0x00000028u); // 800C20F4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C20F8
  c->r[0]=c->r[4]+0x00000001u; // 800C20FC
  W8(c->r[30]+0x00000028u,c->r[0]); // 800C2100
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C2104
  cmps(c,0,(int32_t)c->r[0],0); // 800C2108
  if (crb(c,2)) { goto L_800C2118; } // 800C210C
  cmps(c,0,(int32_t)c->r[0],4); // 800C2110
  if (!crb(c,2)) { goto L_800C2140; } // 800C2114
L_800C2118:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C2118
  c->r[3]=c->r[30]|c->r[30]; // 800C211C
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2120
  c->r[4]=0u+0x00000005u; // 800C2124
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C2128
  c->r[5]=0u+0x00000001u; // 800C212C
  c->f[2]=c->f[1]; // 800C2130
  c->ctr=c->r[12]; // 800C2134
  if (true) { c->lr=0x800C213Cu; dispatch(c,c->ctr); } // 800C2138
  goto L_800C2160; // 800C213C
L_800C2140:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C2140
  c->f[2]=c->f[1]; // 800C2144
  c->r[3]=c->r[30]|c->r[30]; // 800C2148
  c->r[4]=0u+0x00000008u; // 800C214C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C2150
  c->r[5]=0u+0x00000001u; // 800C2154
  c->ctr=c->r[12]; // 800C2158
  if (true) { c->lr=0x800C2160u; dispatch(c,c->ctr); } // 800C215C
L_800C2160:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C2160
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C2164
  c->lr=0x800C216Cu; f_802501B0(c); // 800C2168
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C216C
  c->r[3]=0u+0x00000002u; // 800C2170
  c->r[0]=c->r[0]|0x00000040u; // 800C2174
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C2178
  c->lr=0x800C2180u; f_80269AD0(c); // 800C217C
  c->r[3]=c->r[30]|c->r[30]; // 800C2180
  c->lr=0x800C2188u; f_800C2A04(c); // 800C2184
  c->r[3]=c->r[30]|c->r[30]; // 800C2188
  c->r[4]=0u+0x00000004u; // 800C218C
  c->r[5]=0u+0x00000011u; // 800C2190
  c->r[6]=0u+0x00000001u; // 800C2194
  c->r[7]=0u+0x00000001u; // 800C2198
  c->lr=0x800C21A0u; f_8017900C(c); // 800C219C
L_800C21A0:;
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C21A0
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C21A4
  fcmp(c,0,c->f[1],c->f[0]); // 800C21A8
  if (!crb(c,2)) { goto L_800C226C; } // 800C21AC
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C21B0
  fcmp(c,0,c->f[0],c->f[1]); // 800C21B4
  if (!crb(c,0)) { goto L_800C226C; } // 800C21B8
  c->r[4]=R8(c->r[30]+0x00000028u); // 800C21BC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C21C0
  c->r[0]=c->r[4]+0x00000001u; // 800C21C4
  W8(c->r[30]+0x00000028u,c->r[0]); // 800C21C8
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C21CC
  cmps(c,0,(int32_t)c->r[0],0); // 800C21D0
  if (crb(c,2)) { goto L_800C21E0; } // 800C21D4
  cmps(c,0,(int32_t)c->r[0],4); // 800C21D8
  if (!crb(c,2)) { goto L_800C2208; } // 800C21DC
L_800C21E0:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C21E0
  c->r[3]=c->r[30]|c->r[30]; // 800C21E4
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C21E8
  c->r[4]=0u+0x00000006u; // 800C21EC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C21F0
  c->r[5]=0u+0x00000001u; // 800C21F4
  c->f[2]=c->f[1]; // 800C21F8
  c->ctr=c->r[12]; // 800C21FC
  if (true) { c->lr=0x800C2204u; dispatch(c,c->ctr); } // 800C2200
  goto L_800C222C; // 800C2204
L_800C2208:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C2208
  c->r[3]=c->r[30]|c->r[30]; // 800C220C
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2210
  c->r[4]=0u+0x00000009u; // 800C2214
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C2218
  c->r[5]=0u+0x00000001u; // 800C221C
  c->f[2]=c->f[1]; // 800C2220
  c->ctr=c->r[12]; // 800C2224
  if (true) { c->lr=0x800C222Cu; dispatch(c,c->ctr); } // 800C2228
L_800C222C:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C222C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C2230
  c->lr=0x800C2238u; f_802501B0(c); // 800C2234
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C2238
  c->r[3]=0u+0x00000002u; // 800C223C
  c->r[0]=c->r[0]|0x00000040u; // 800C2240
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C2244
  c->lr=0x800C224Cu; f_80269AD0(c); // 800C2248
  c->r[3]=c->r[30]|c->r[30]; // 800C224C
  c->lr=0x800C2254u; f_800C2A04(c); // 800C2250
  c->r[3]=c->r[30]|c->r[30]; // 800C2254
  c->r[4]=0u+0x00000004u; // 800C2258
  c->r[5]=0u+0x00000011u; // 800C225C
  c->r[6]=0u+0x00000001u; // 800C2260
  c->r[7]=0u+0x00000001u; // 800C2264
  c->lr=0x800C226Cu; f_8017900C(c); // 800C2268
L_800C226C:;
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C226C
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2270
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C2274
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[0]); // 800C2278
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 800C227C
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C2280
  fcmp(c,0,c->f[31],c->f[1]); // 800C2284
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C2288
  if (!crb(c,2)) { goto L_800C2298; } // 800C228C
  c->r[0]=c->r[0]|0x00000008u; // 800C2290
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C2294
L_800C2298:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2298
  fcmp(c,0,c->f[31],c->f[0]); // 800C229C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C22A0
  if (!crb(c,2)) { goto L_800C22B4; } // 800C22A4
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C22A8
  c->r[0]=c->r[0]|0x00000004u; // 800C22AC
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C22B0
L_800C22B4:;
  {uint32_t ea=c->r[30]+0x00000074u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C22B4
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C22B8
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C22BC
  fcmp(c,0,c->f[30],c->f[0]); // 800C22C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFCFu; // 800C22C4
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C22C8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C22CC
  if (!crb(c,2)) { goto L_800C22DC; } // 800C22D0
  c->r[0]=c->r[0]|0x00000020u; // 800C22D4
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C22D8
L_800C22DC:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C22DC
  fcmp(c,0,c->f[30],c->f[0]); // 800C22E0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C22E4
  if (!crb(c,2)) { goto L_800C25BC; } // 800C22E8
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C22EC
  c->r[0]=c->r[0]|0x00000010u; // 800C22F0
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C22F4
  goto L_800C25BC; // 800C22F8
L_800C22FC:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C22FC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C2300
  c->lr=0x800C2308u; f_802501B0(c); // 800C2304
  cmps(c,0,(int32_t)c->r[3],0); // 800C2308
  if (crb(c,2)) { goto L_800C25BC; } // 800C230C
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800C2310
  cmps(c,0,(int32_t)c->r[0],1); // 800C2314
  if (crb(c,2)) { goto L_800C23E8; } // 800C2318
  if (!crb(c,0)) { goto L_800C24E0; } // 800C231C
  cmps(c,0,(int32_t)c->r[0],0); // 800C2320
  if (!crb(c,0)) { goto L_800C232C; } // 800C2324
  goto L_800C24E0; // 800C2328
L_800C232C:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C232C
  c->r[3]=c->r[30]|c->r[30]; // 800C2330
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2334
  c->r[4]=0u+0x00000000u; // 800C2338
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C233C
  c->r[5]=0u+0x00000001u; // 800C2340
  c->f[2]=c->f[1]; // 800C2344
  c->ctr=c->r[12]; // 800C2348
  if (true) { c->lr=0x800C2350u; dispatch(c,c->ctr); } // 800C234C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C2350
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C2354
  c->lr=0x800C235Cu; f_802501B0(c); // 800C2358
  {uint32_t ea=c->r[30]+0x00000074u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C235C
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2360
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C2364
  fcmp(c,0,c->f[31],c->f[0]); // 800C2368
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 800C236C
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C2370
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C2374
  if (!crb(c,2)) { goto L_800C2384; } // 800C2378
  c->r[0]=c->r[0]|0x00000008u; // 800C237C
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C2380
L_800C2384:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2384
  fcmp(c,0,c->f[31],c->f[0]); // 800C2388
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C238C
  if (!crb(c,2)) { goto L_800C23A0; } // 800C2390
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C2394
  c->r[0]=c->r[0]|0x00000004u; // 800C2398
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C239C
L_800C23A0:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C23A0
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C23A4
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C23A8
  fcmp(c,0,c->f[30],c->f[0]); // 800C23AC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFCFu; // 800C23B0
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C23B4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C23B8
  if (!crb(c,2)) { goto L_800C23C8; } // 800C23BC
  c->r[0]=c->r[0]|0x00000020u; // 800C23C0
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C23C4
L_800C23C8:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C23C8
  fcmp(c,0,c->f[30],c->f[0]); // 800C23CC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C23D0
  if (!crb(c,2)) { goto L_800C24E0; } // 800C23D4
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C23D8
  c->r[0]=c->r[0]|0x00000010u; // 800C23DC
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C23E0
  goto L_800C24E0; // 800C23E4
L_800C23E8:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C23E8
  c->r[3]=R32(c->r[3]+0x00000030u); // 800C23EC
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 800C23F0
  cmpu(c,0,c->r[0],0x00000001u); // 800C23F4
  if (crb(c,1)) { goto L_800C2424; } // 800C23F8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C23FC
  c->r[3]=c->r[30]|c->r[30]; // 800C2400
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2404
  c->r[4]=0u+0x00000000u; // 800C2408
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C240C
  c->r[5]=0u+0x00000001u; // 800C2410
  c->f[2]=c->f[1]; // 800C2414
  c->ctr=c->r[12]; // 800C2418
  if (true) { c->lr=0x800C2420u; dispatch(c,c->ctr); } // 800C241C
  goto L_800C2448; // 800C2420
L_800C2424:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C2424
  c->r[3]=c->r[30]|c->r[30]; // 800C2428
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C242C
  c->r[4]=0u+0x00000002u; // 800C2430
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C2434
  c->r[5]=0u+0x00000001u; // 800C2438
  c->f[2]=c->f[1]; // 800C243C
  c->ctr=c->r[12]; // 800C2440
  if (true) { c->lr=0x800C2448u; dispatch(c,c->ctr); } // 800C2444
L_800C2448:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C2448
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C244C
  c->lr=0x800C2454u; f_802501B0(c); // 800C2450
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2454
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2458
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C245C
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[0]); // 800C2460
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 800C2464
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C2468
  fcmp(c,0,c->f[31],c->f[1]); // 800C246C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C2470
  if (!crb(c,2)) { goto L_800C2480; } // 800C2474
  c->r[0]=c->r[0]|0x00000008u; // 800C2478
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C247C
L_800C2480:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2480
  fcmp(c,0,c->f[31],c->f[0]); // 800C2484
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C2488
  if (!crb(c,2)) { goto L_800C249C; } // 800C248C
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C2490
  c->r[0]=c->r[0]|0x00000004u; // 800C2494
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C2498
L_800C249C:;
  {uint32_t ea=c->r[30]+0x00000074u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C249C
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C24A0
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C24A4
  fcmp(c,0,c->f[30],c->f[0]); // 800C24A8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFCFu; // 800C24AC
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C24B0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C24B4
  if (!crb(c,2)) { goto L_800C24C4; } // 800C24B8
  c->r[0]=c->r[0]|0x00000020u; // 800C24BC
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C24C0
L_800C24C4:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C24C4
  fcmp(c,0,c->f[30],c->f[0]); // 800C24C8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C24CC
  if (!crb(c,2)) { goto L_800C24E0; } // 800C24D0
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C24D4
  c->r[0]=c->r[0]|0x00000010u; // 800C24D8
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C24DC
L_800C24E0:;
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C24E0
  c->r[3]=0u+0x00000000u; // 800C24E4
  {uint32_t ea=c->r[30]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C24E8
  {uint32_t ea=c->r[30]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C24EC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800C24F0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 800C24F4
  W8(c->r[30]+0x00000028u,c->r[3]); // 800C24F8
  fcmp(c,0,c->f[1],c->f[0]); // 800C24FC
  W8(c->r[30]+0x00000029u,c->r[3]); // 800C2500
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C2504
  if (crb(c,2)) { goto L_800C25BC; } // 800C2508
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C250C
  c->r[0]=c->r[0]|0x00004000u; // 800C2510
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800C2514
  goto L_800C25BC; // 800C2518
L_800C251C:;
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800C251C
  cmps(c,0,(int32_t)c->r[0],0); // 800C2520
  if (crb(c,2)) { goto L_800C252C; } // 800C2524
  goto L_800C25BC; // 800C2528
L_800C252C:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C252C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C2530
  c->lr=0x800C2538u; f_802501B0(c); // 800C2534
  cmps(c,0,(int32_t)c->r[3],0); // 800C2538
  if (crb(c,2)) { goto L_800C25BC; } // 800C253C
  c->r[0]=0u+0x00000001u; // 800C2540
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2544
  W8(c->r[30]+0x00000028u,c->r[0]); // 800C2548
  c->r[3]=c->r[30]|c->r[30]; // 800C254C
  c->f[2]=c->f[1]; // 800C2550
  c->r[4]=0u+0x00000002u; // 800C2554
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C2558
  c->r[5]=0u+0x00000001u; // 800C255C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C2560
  c->ctr=c->r[12]; // 800C2564
  if (true) { c->lr=0x800C256Cu; dispatch(c,c->ctr); } // 800C2568
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C256C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C2570
  c->lr=0x800C2578u; f_802501B0(c); // 800C2574
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2578
  c->r[3]=0u+0x00000002u; // 800C257C
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2580
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 800C2584
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[1]);} // 800C2588
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C258C
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800C2590
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[1]);} // 800C2594
  c->lr=0x800C259Cu; f_80269AD0(c); // 800C2598
  c->r[3]=c->r[30]|c->r[30]; // 800C259C
  c->lr=0x800C25A4u; f_800C2A04(c); // 800C25A0
  c->r[3]=c->r[30]|c->r[30]; // 800C25A4
  c->r[4]=0u+0x00000004u; // 800C25A8
  c->r[5]=0u+0x00000011u; // 800C25AC
  c->r[6]=0u+0x00000001u; // 800C25B0
  c->r[7]=0u+0x00000001u; // 800C25B4
  c->lr=0x800C25BCu; f_8017900C(c); // 800C25B8
L_800C25BC:;
  c->r[0]=R32(c->r[30]+0x00000088u); // 800C25BC
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 800C25C0
  if (!crb(c,2)) { goto L_800C26E0; } // 800C25C4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C25C8
  c->r[5]=c->r[1]+0x00000038u; // 800C25CC
  c->r[4]=R8(c->r[30]+0x00000084u); // 800C25D0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C25D4
  c->lr=0x800C25DCu; f_8025EA54(c); // 800C25D8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[31]);} // 800C25DC
  c->r[5]=c->r[1]+0x0000002Cu; // 800C25E0
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800C25E4
  c->r[4]=R32(c->r[1]+0x00000038u); // 800C25E8
  c->r[0]=R32(c->r[1]+0x00000040u); // 800C25EC
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800C25F0
  W32(c->r[1]+0x00000030u,c->r[3]); // 800C25F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C25F8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C25FC
  c->r[4]=R8(c->r[30]+0x00000084u); // 800C2600
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C2604
  c->lr=0x800C260Cu; f_8025E9C0(c); // 800C2608
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C260C
  c->r[5]=c->r[1]+0x00000038u; // 800C2610
  c->r[4]=R8(c->r[30]+0x00000085u); // 800C2614
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C2618
  c->lr=0x800C2620u; f_8025EA54(c); // 800C261C
  c->f[0]=-c->f[31]; // 800C2620
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800C2624
  c->r[0]=R32(c->r[1]+0x00000040u); // 800C2628
  c->r[5]=c->r[1]+0x00000020u; // 800C262C
  W32(c->r[1]+0x00000024u,c->r[3]); // 800C2630
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800C2634
  c->r[3]=R32(c->r[1]+0x00000038u); // 800C2638
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C263C
  W32(c->r[1]+0x00000020u,c->r[3]); // 800C2640
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C2644
  c->r[4]=R8(c->r[30]+0x00000085u); // 800C2648
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C264C
  c->lr=0x800C2654u; f_8025E9C0(c); // 800C2650
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C2654
  c->r[5]=c->r[1]+0x00000038u; // 800C2658
  c->r[4]=R8(c->r[30]+0x00000086u); // 800C265C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C2660
  c->lr=0x800C2668u; f_8025EA54(c); // 800C2664
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[30]);} // 800C2668
  c->r[5]=c->r[1]+0x00000014u; // 800C266C
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800C2670
  c->r[4]=R32(c->r[1]+0x00000038u); // 800C2674
  c->r[0]=R32(c->r[1]+0x00000040u); // 800C2678
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C267C
  W32(c->r[1]+0x00000018u,c->r[3]); // 800C2680
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C2684
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C2688
  c->r[4]=R8(c->r[30]+0x00000086u); // 800C268C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C2690
  c->lr=0x800C2698u; f_8025E9C0(c); // 800C2694
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C2698
  c->r[5]=c->r[1]+0x00000038u; // 800C269C
  c->r[4]=R8(c->r[30]+0x00000087u); // 800C26A0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C26A4
  c->lr=0x800C26ACu; f_8025EA54(c); // 800C26A8
  c->f[0]=-c->f[30]; // 800C26AC
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800C26B0
  c->r[0]=R32(c->r[1]+0x00000040u); // 800C26B4
  c->r[5]=c->r[1]+0x00000008u; // 800C26B8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C26BC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800C26C0
  c->r[3]=R32(c->r[1]+0x00000038u); // 800C26C4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C26C8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C26CC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C26D0
  c->r[4]=R8(c->r[30]+0x00000087u); // 800C26D4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C26D8
  c->lr=0x800C26E0u; f_8025E9C0(c); // 800C26DC
L_800C26E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800C26E0
  c->lr=0x800C26E8u; f_801F56F4(c); // 800C26E4
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800C26E8
  cmps(c,0,(int32_t)c->r[0],1); // 800C26EC
  if (crb(c,2)) { goto L_800C2798; } // 800C26F0
  if (!crb(c,0)) { goto L_800C2874; } // 800C26F4
  cmps(c,0,(int32_t)c->r[0],0); // 800C26F8
  if (!crb(c,0)) { goto L_800C2704; } // 800C26FC
  goto L_800C2874; // 800C2700
L_800C2704:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C2704
  c->r[3]=R32(c->r[3]+0x00000030u); // 800C2708
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C270C
  cmpu(c,0,c->r[0],0x00000003u); // 800C2710
  if (crb(c,1)) { goto L_800C2760; } // 800C2714
  cmps(c,0,(int32_t)c->r[31],0); // 800C2718
  if (!crb(c,2)) { goto L_800C2728; } // 800C271C
  c->r[3]=c->r[30]|c->r[30]; // 800C2720
  c->lr=0x800C2728u; f_800C2B38(c); // 800C2724
L_800C2728:;
  c->r[3]=c->r[30]|c->r[30]; // 800C2728
  c->lr=0x800C2730u; f_800C2C10(c); // 800C272C
  c->r[3]=R32(c->r[30]+0x00000088u); // 800C2730
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 800C2734
  if (!crb(c,2)) { goto L_800C2874; } // 800C2738
  c->r[0]=c->r[3]|0x00000100u; // 800C273C
  c->r[3]=c->r[30]|c->r[30]; // 800C2740
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C2744
  c->r[4]=0u+0x00000004u; // 800C2748
  c->r[5]=0u+0x0000000Bu; // 800C274C
  c->r[6]=0u+0x00000001u; // 800C2750
  c->r[7]=0u+0x00000001u; // 800C2754
  c->lr=0x800C275Cu; f_8017900C(c); // 800C2758
  goto L_800C2874; // 800C275C
L_800C2760:;
  c->r[3]=c->r[30]|c->r[30]; // 800C2760
  c->lr=0x800C2768u; f_800C2EC4(c); // 800C2764
  c->r[3]=R32(c->r[30]+0x00000088u); // 800C2768
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 800C276C
  if (crb(c,2)) { goto L_800C2874; } // 800C2770
  c->r[0]=rotl(c->r[3],0)&0xFFFFFEFFu; // 800C2774
  c->r[3]=c->r[30]|c->r[30]; // 800C2778
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C277C
  c->r[4]=0u+0x00000004u; // 800C2780
  c->r[5]=0u+0x0000000Cu; // 800C2784
  c->r[6]=0u+0x00000001u; // 800C2788
  c->r[7]=0u+0x00000001u; // 800C278C
  c->lr=0x800C2794u; f_8017900C(c); // 800C2790
  goto L_800C2874; // 800C2794
L_800C2798:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C2798
  c->r[3]=R32(c->r[3]+0x00000030u); // 800C279C
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800C27A0
  cmpu(c,0,c->r[0],0x00000005u); // 800C27A4
  if (crb(c,1)) { goto L_800C27EC; } // 800C27A8
  c->r[3]=c->r[30]|c->r[30]; // 800C27AC
  c->lr=0x800C27B4u; f_800C2B38(c); // 800C27B0
  c->r[3]=c->r[30]|c->r[30]; // 800C27B4
  c->lr=0x800C27BCu; f_800C2C10(c); // 800C27B8
  c->r[3]=R32(c->r[30]+0x00000088u); // 800C27BC
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 800C27C0
  if (!crb(c,2)) { goto L_800C2820; } // 800C27C4
  c->r[0]=c->r[3]|0x00000100u; // 800C27C8
  c->r[3]=c->r[30]|c->r[30]; // 800C27CC
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C27D0
  c->r[4]=0u+0x00000004u; // 800C27D4
  c->r[5]=0u+0x0000000Bu; // 800C27D8
  c->r[6]=0u+0x00000001u; // 800C27DC
  c->r[7]=0u+0x00000001u; // 800C27E0
  c->lr=0x800C27E8u; f_8017900C(c); // 800C27E4
  goto L_800C2820; // 800C27E8
L_800C27EC:;
  c->r[3]=c->r[30]|c->r[30]; // 800C27EC
  c->lr=0x800C27F4u; f_800C2EC4(c); // 800C27F0
  c->r[3]=R32(c->r[30]+0x00000088u); // 800C27F4
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 800C27F8
  if (crb(c,2)) { goto L_800C2820; } // 800C27FC
  c->r[0]=rotl(c->r[3],0)&0xFFFFFEFFu; // 800C2800
  c->r[3]=c->r[30]|c->r[30]; // 800C2804
  W32(c->r[30]+0x00000088u,c->r[0]); // 800C2808
  c->r[4]=0u+0x00000004u; // 800C280C
  c->r[5]=0u+0x0000000Cu; // 800C2810
  c->r[6]=0u+0x00000001u; // 800C2814
  c->r[7]=0u+0x00000001u; // 800C2818
  c->lr=0x800C2820u; f_8017900C(c); // 800C281C
L_800C2820:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C2820
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C2824
  cmps(c,0,(int32_t)c->r[0],2); // 800C2828
  if (crb(c,2)) { goto L_800C2858; } // 800C282C
  cmps(c,0,(int32_t)c->r[0],7); // 800C2830
  if (crb(c,2)) { goto L_800C2858; } // 800C2834
  cmps(c,0,(int32_t)c->r[0],8); // 800C2838
  if (crb(c,2)) { goto L_800C2858; } // 800C283C
  cmps(c,0,(int32_t)c->r[0],9); // 800C2840
  if (crb(c,2)) { goto L_800C2858; } // 800C2844
  cmps(c,0,(int32_t)c->r[0],1); // 800C2848
  if (crb(c,2)) { goto L_800C2858; } // 800C284C
  cmps(c,0,(int32_t)c->r[0],3); // 800C2850
  if (!crb(c,2)) { goto L_800C286C; } // 800C2854
L_800C2858:;
  c->r[3]=c->r[30]|c->r[30]; // 800C2858
  c->lr=0x800C2860u; f_800C2F2C(c); // 800C285C
  c->r[3]=c->r[30]|c->r[30]; // 800C2860
  c->lr=0x800C2868u; f_800C2F84(c); // 800C2864
  goto L_800C2874; // 800C2868
L_800C286C:;
  c->r[3]=c->r[30]|c->r[30]; // 800C286C
  c->lr=0x800C2874u; f_800C3098(c); // 800C2870
L_800C2874:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800C2874
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800C2878
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 800C287C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 800C2880
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C2884
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C2888
  c->r[30]=R32(c->r[1]+0x00000048u); // 800C288C
  c->lr=c->r[0]; // 800C2890
  c->r[1]=c->r[1]+0x00000070u; // 800C2894
  return; // 800C2898
}

// fn_800C289C
void f_800C289C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C289C
  c->r[0]=c->lr; // 800C28A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C28A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C28A8
  c->r[31]=c->r[3]|c->r[3]; // 800C28AC
  c->r[4]=R8(c->r[3]+0x0000008Cu); // 800C28B0
  cmpu(c,0,c->r[4],0x000000FFu); // 800C28B4
  if (crb(c,2)) { goto L_800C28D0; } // 800C28B8
  c->r[3]=0u+0x80550000u; // 800C28BC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C28C0
  c->lr=0x800C28C8u; f_8018D694(c); // 800C28C4
  c->r[0]=0u+0x000000FFu; // 800C28C8
  W8(c->r[31]+0x0000008Cu,c->r[0]); // 800C28CC
L_800C28D0:;
  c->r[4]=R8(c->r[31]+0x0000008Du); // 800C28D0
  cmpu(c,0,c->r[4],0x000000FFu); // 800C28D4
  if (crb(c,2)) { goto L_800C28F0; } // 800C28D8
  c->r[3]=0u+0x80550000u; // 800C28DC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C28E0
  c->lr=0x800C28E8u; f_8018D694(c); // 800C28E4
  c->r[0]=0u+0x000000FFu; // 800C28E8
  W8(c->r[31]+0x0000008Du,c->r[0]); // 800C28EC
L_800C28F0:;
  c->r[4]=R8(c->r[31]+0x0000008Eu); // 800C28F0
  cmpu(c,0,c->r[4],0x000000FFu); // 800C28F4
  if (crb(c,2)) { goto L_800C2910; } // 800C28F8
  c->r[3]=0u+0x80550000u; // 800C28FC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C2900
  c->lr=0x800C2908u; f_8018D694(c); // 800C2904
  c->r[0]=0u+0x000000FFu; // 800C2908
  W8(c->r[31]+0x0000008Eu,c->r[0]); // 800C290C
L_800C2910:;
  c->r[3]=c->r[31]|c->r[31]; // 800C2910
  c->lr=0x800C2918u; f_801F4C78(c); // 800C2914
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C291C
  c->lr=c->r[0]; // 800C2920
  c->r[1]=c->r[1]+0x00000010u; // 800C2924
  return; // 800C2928
}

// fn_800C292C
void f_800C292C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 800C292C
  c->r[0]=c->r[0]|0x00000001u; // 800C2930
  W32(c->r[3]+0x00000088u,c->r[0]); // 800C2934
  return; // 800C2938
}

// fn_800C293C
void f_800C293C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 800C293C
  c->r[0]=c->r[0]|0x00000003u; // 800C2940
  W32(c->r[3]+0x00000088u,c->r[0]); // 800C2944
  return; // 800C2948
}

// fn_800C294C
void f_800C294C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 800C294C
  c->r[3]=rotl(c->r[0],30)&0x00000001u; // 800C2950
  return; // 800C2954
}

// fn_800C2958
void f_800C2958(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 800C2958
  c->r[3]=rotl(c->r[0],29)&0x00000001u; // 800C295C
  return; // 800C2960
}

// fn_800C2964
void f_800C2964(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 800C2964
  c->r[3]=rotl(c->r[0],28)&0x00000001u; // 800C2968
  return; // 800C296C
}

// fn_800C2970
void f_800C2970(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 800C2970
  c->r[3]=rotl(c->r[0],27)&0x00000001u; // 800C2974
  return; // 800C2978
}

// fn_800C297C
void f_800C297C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C297C
  return; // 800C2980
}

// fn_800C2984
void f_800C2984(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 800C2984
  return; // 800C2988
}

// fn_800C298C
void f_800C298C(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800C298C
  {uint32_t ea=c->r[3]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2990
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2994
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800C2998
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 800C299C
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C29A0
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[1]);} // 800C29A4
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800C29A8
  return; // 800C29AC
}

// fn_800C29B0
void f_800C29B0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 800C29B0
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C29B4
  c->r[0]=c->r[0]|0x00000024u; // 800C29B8
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 800C29BC
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800C29C0
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 800C29C4
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 800C29C8
  W32(c->r[3]+0x00000088u,c->r[0]); // 800C29CC
  return; // 800C29D0
}

// fn_800C29D4
void f_800C29D4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 800C29D4
  c->r[0]=c->r[0]|0x00000080u; // 800C29D8
  W32(c->r[3]+0x00000088u,c->r[0]); // 800C29DC
  return; // 800C29E0
}

// fn_800C29E4
void f_800C29E4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 800C29E4
  c->r[0]=c->r[0]|0x00000200u; // 800C29E8
  W32(c->r[3]+0x00000088u,c->r[0]); // 800C29EC
  return; // 800C29F0
}

// fn_800C29F4
void f_800C29F4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 800C29F4
  c->r[0]=c->r[0]|0x00000400u; // 800C29F8
  W32(c->r[3]+0x00000088u,c->r[0]); // 800C29FC
  return; // 800C2A00
}

// fn_800C2A04
void f_800C2A04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2A04
  c->r[0]=c->lr; // 800C2A08
  c->r[4]=0u+0x803A0000u; // 800C2A0C
  c->r[5]=0u+0x80550000u; // 800C2A10
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C2A14
  c->r[4]=c->r[4]+0xFFFFD118u; // 800C2A18
  c->r[4]=c->r[4]+0x00000029u; // 800C2A1C
  c->r[6]=0u+0x00000000u; // 800C2A20
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C2A24
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C2A28
  W32(c->r[1]+0x00000054u,c->r[29]); // 800C2A2C
  c->r[29]=c->r[3]|c->r[3]; // 800C2A30
  c->r[3]=c->r[5]+0xFFFFC848u; // 800C2A34
  c->r[5]=0u+0x00000000u; // 800C2A38
  c->lr=0x800C2A40u; f_8018D3E4(c); // 800C2A3C
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800C2A40
  cmpu(c,0,c->r[4],0x000000FFu); // 800C2A44
  if (crb(c,2)) { goto L_800C2B1C; } // 800C2A48
  c->r[0]=R8(c->r[29]+0x0000006Eu); // 800C2A4C
  cmps(c,0,(int32_t)c->r[0],1); // 800C2A50
  if (crb(c,2)) { goto L_800C2A84; } // 800C2A54
  if (!crb(c,0)) { goto L_800C2A9C; } // 800C2A58
  cmps(c,0,(int32_t)c->r[0],0); // 800C2A5C
  if (!crb(c,0)) { goto L_800C2A68; } // 800C2A60
  goto L_800C2A9C; // 800C2A64
L_800C2A68:;
  {uint32_t ea=c->r[2]+0xFFFF9DE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2A68
  {uint32_t ea=c->r[2]+0xFFFF9DECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2A6C
  {uint32_t ea=c->r[2]+0xFFFF9DF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2A70
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 800C2A74
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 800C2A78
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C2A7C
  goto L_800C2A9C; // 800C2A80
L_800C2A84:;
  {uint32_t ea=c->r[2]+0xFFFF9DF4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2A84
  {uint32_t ea=c->r[2]+0xFFFF9DECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2A88
  {uint32_t ea=c->r[2]+0xFFFF9DF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2A8C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 800C2A90
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 800C2A94
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C2A98
L_800C2A9C:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2A9C
  c->r[3]=0u+0x80550000u; // 800C2AA0
  {uint32_t ea=c->r[2]+0xFFFF9DFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2AA4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C2AA8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 800C2AAC
  c->r[5]=c->r[1]+0x00000020u; // 800C2AB0
  c->r[9]=R32(c->r[1]+0x00000044u); // 800C2AB4
  c->r[6]=c->r[1]+0x00000014u; // 800C2AB8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 800C2ABC
  c->r[7]=c->r[1]+0x00000008u; // 800C2AC0
  c->r[12]=R32(c->r[1]+0x00000038u); // 800C2AC4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800C2AC8
  c->r[11]=R32(c->r[1]+0x0000003Cu); // 800C2ACC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800C2AD0
  c->r[10]=R32(c->r[1]+0x00000040u); // 800C2AD4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800C2AD8
  c->r[29]=R32(c->r[1]+0x0000002Cu); // 800C2ADC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800C2AE0
  c->r[30]=R32(c->r[1]+0x00000030u); // 800C2AE4
  c->r[31]=R32(c->r[1]+0x00000034u); // 800C2AE8
  c->r[8]=R32(c->r[1]+0x00000048u); // 800C2AEC
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800C2AF0
  W32(c->r[1]+0x00000008u,c->r[29]); // 800C2AF4
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800C2AF8
  W32(c->r[1]+0x00000010u,c->r[31]); // 800C2AFC
  W32(c->r[1]+0x00000014u,c->r[12]); // 800C2B00
  W32(c->r[1]+0x00000018u,c->r[11]); // 800C2B04
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 800C2B08
  W32(c->r[1]+0x00000020u,c->r[9]); // 800C2B0C
  W32(c->r[1]+0x00000024u,c->r[8]); // 800C2B10
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C2B14
  c->lr=0x800C2B1Cu; f_8018DD04(c); // 800C2B18
L_800C2B1C:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C2B1C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C2B20
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C2B24
  c->r[29]=R32(c->r[1]+0x00000054u); // 800C2B28
  c->lr=c->r[0]; // 800C2B2C
  c->r[1]=c->r[1]+0x00000060u; // 800C2B30
  return; // 800C2B34
}

// fn_800C2B38
void f_800C2B38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2B38
  c->r[0]=c->lr; // 800C2B3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2B40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2B44
  c->r[31]=c->r[3]|c->r[3]; // 800C2B48
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800C2B4C
  cmps(c,0,(int32_t)c->r[0],1); // 800C2B50
  if (crb(c,2)) { goto L_800C2B9C; } // 800C2B54
  if (!crb(c,0)) { goto L_800C2BFC; } // 800C2B58
  cmps(c,0,(int32_t)c->r[0],0); // 800C2B5C
  if (!crb(c,0)) { goto L_800C2B68; } // 800C2B60
  goto L_800C2BFC; // 800C2B64
L_800C2B68:;
  c->r[0]=R8(c->r[3]+0x0000008Du); // 800C2B68
  cmpu(c,0,c->r[0],0x000000FFu); // 800C2B6C
  if (!crb(c,2)) { goto L_800C2BFC; } // 800C2B70
  c->r[4]=0u+0x803A0000u; // 800C2B74
  c->r[3]=0u+0x80550000u; // 800C2B78
  c->r[4]=c->r[4]+0xFFFFD118u; // 800C2B7C
  c->r[5]=0u+0x00000000u; // 800C2B80
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C2B84
  c->r[6]=0u+0x00000000u; // 800C2B88
  c->r[4]=c->r[4]+0x00000025u; // 800C2B8C
  c->lr=0x800C2B94u; f_8018D3E4(c); // 800C2B90
  W8(c->r[31]+0x0000008Du,c->r[3]); // 800C2B94
  goto L_800C2BFC; // 800C2B98
L_800C2B9C:;
  c->r[0]=R8(c->r[3]+0x0000008Du); // 800C2B9C
  cmpu(c,0,c->r[0],0x000000FFu); // 800C2BA0
  if (!crb(c,2)) { goto L_800C2BCC; } // 800C2BA4
  c->r[4]=0u+0x803A0000u; // 800C2BA8
  c->r[3]=0u+0x80550000u; // 800C2BAC
  c->r[4]=c->r[4]+0xFFFFD118u; // 800C2BB0
  c->r[5]=0u+0x00000000u; // 800C2BB4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C2BB8
  c->r[6]=0u+0x00000000u; // 800C2BBC
  c->r[4]=c->r[4]+0x00000025u; // 800C2BC0
  c->lr=0x800C2BC8u; f_8018D3E4(c); // 800C2BC4
  W8(c->r[31]+0x0000008Du,c->r[3]); // 800C2BC8
L_800C2BCC:;
  c->r[0]=R8(c->r[31]+0x0000008Eu); // 800C2BCC
  cmpu(c,0,c->r[0],0x000000FFu); // 800C2BD0
  if (!crb(c,2)) { goto L_800C2BFC; } // 800C2BD4
  c->r[4]=0u+0x803A0000u; // 800C2BD8
  c->r[3]=0u+0x80550000u; // 800C2BDC
  c->r[4]=c->r[4]+0xFFFFD118u; // 800C2BE0
  c->r[5]=0u+0x00000000u; // 800C2BE4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C2BE8
  c->r[6]=0u+0x00000000u; // 800C2BEC
  c->r[4]=c->r[4]+0x00000025u; // 800C2BF0
  c->lr=0x800C2BF8u; f_8018D3E4(c); // 800C2BF4
  W8(c->r[31]+0x0000008Eu,c->r[3]); // 800C2BF8
L_800C2BFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2BFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2C00
  c->lr=c->r[0]; // 800C2C04
  c->r[1]=c->r[1]+0x00000010u; // 800C2C08
  return; // 800C2C0C
}

// fn_800C2C10
void f_800C2C10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2C10
  c->r[0]=c->lr; // 800C2C14
  W32(c->r[1]+0x00000134u,c->r[0]); // 800C2C18
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 800C2C1C
  c->r[31]=c->r[3]|c->r[3]; // 800C2C20
  W32(c->r[1]+0x00000128u,c->r[30]); // 800C2C24
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800C2C28
  cmps(c,0,(int32_t)c->r[0],1); // 800C2C2C
  if (crb(c,2)) { goto L_800C2D14; } // 800C2C30
  if (!crb(c,0)) { goto L_800C2EAC; } // 800C2C34
  cmps(c,0,(int32_t)c->r[0],0); // 800C2C38
  if (!crb(c,0)) { goto L_800C2C44; } // 800C2C3C
  goto L_800C2EAC; // 800C2C40
L_800C2C44:;
  c->r[4]=R8(c->r[3]+0x0000008Du); // 800C2C44
  cmpu(c,0,c->r[4],0x000000FFu); // 800C2C48
  if (crb(c,2)) { goto L_800C2EAC; } // 800C2C4C
  c->r[30]=0u+0x80550000u; // 800C2C50
  c->r[3]=c->r[30]+0xFFFFC848u; // 800C2C54
  c->lr=0x800C2C5Cu; f_8018D900(c); // 800C2C58
  cmps(c,0,(int32_t)c->r[3],0); // 800C2C5C
  if (crb(c,2)) { goto L_800C2D08; } // 800C2C60
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C2C64
  c->r[4]=0u+0x803A0000u; // 800C2C68
  c->r[4]=c->r[4]+0xFFFFD118u; // 800C2C6C
  c->r[5]=c->r[1]+0x000000F8u; // 800C2C70
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C2C74
  c->r[4]=c->r[4]+0x00000009u; // 800C2C78
  c->r[6]=0u+0x00000001u; // 800C2C7C
  c->lr=0x800C2C84u; f_80257018(c); // 800C2C80
  {uint32_t ea=c->r[1]+0x00000104u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2C84
  c->r[3]=c->r[30]+0xFFFFC848u; // 800C2C88
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2C8C
  c->r[5]=c->r[1]+0x00000044u; // 800C2C90
  {uint32_t ea=c->r[2]+0xFFFF9E04u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C2C94
  c->r[6]=c->r[1]+0x00000038u; // 800C2C98
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[0]); // 800C2C9C
  {uint32_t ea=c->r[1]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2CA0
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2CA4
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 800C2CA8
  {uint32_t ea=c->r[1]+0x00000124u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2CAC
  {uint32_t ea=c->r[2]+0xFFFF9E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2CB0
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[4]);} // 800C2CB4
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[3]);} // 800C2CB8
  c->r[7]=R32(c->r[1]+0x0000008Cu); // 800C2CBC
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 800C2CC0
  c->r[4]=R32(c->r[1]+0x00000090u); // 800C2CC4
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 800C2CC8
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C2CCC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 800C2CD0
  c->r[10]=R32(c->r[1]+0x00000080u); // 800C2CD4
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 800C2CD8
  c->r[9]=R32(c->r[1]+0x00000084u); // 800C2CDC
  c->r[8]=R32(c->r[1]+0x00000088u); // 800C2CE0
  W32(c->r[1]+0x00000038u,c->r[10]); // 800C2CE4
  W32(c->r[1]+0x0000003Cu,c->r[9]); // 800C2CE8
  W32(c->r[1]+0x00000040u,c->r[8]); // 800C2CEC
  W32(c->r[1]+0x00000044u,c->r[7]); // 800C2CF0
  W32(c->r[1]+0x00000048u,c->r[4]); // 800C2CF4
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800C2CF8
  c->r[4]=R8(c->r[31]+0x0000008Du); // 800C2CFC
  c->lr=0x800C2D04u; f_8018DBD0(c); // 800C2D00
  goto L_800C2EAC; // 800C2D04
L_800C2D08:;
  c->r[0]=0u+0x000000FFu; // 800C2D08
  W8(c->r[31]+0x0000008Du,c->r[0]); // 800C2D0C
  goto L_800C2EAC; // 800C2D10
L_800C2D14:;
  c->r[4]=R8(c->r[3]+0x0000008Du); // 800C2D14
  cmpu(c,0,c->r[4],0x000000FFu); // 800C2D18
  if (crb(c,2)) { goto L_800C2DE0; } // 800C2D1C
  c->r[30]=0u+0x80550000u; // 800C2D20
  c->r[3]=c->r[30]+0xFFFFC848u; // 800C2D24
  c->lr=0x800C2D2Cu; f_8018D900(c); // 800C2D28
  cmps(c,0,(int32_t)c->r[3],0); // 800C2D2C
  if (crb(c,2)) { goto L_800C2DD8; } // 800C2D30
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C2D34
  c->r[4]=0u+0x803A0000u; // 800C2D38
  c->r[4]=c->r[4]+0xFFFFD118u; // 800C2D3C
  c->r[5]=c->r[1]+0x000000C8u; // 800C2D40
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C2D44
  c->r[4]=c->r[4]+0x00000009u; // 800C2D48
  c->r[6]=0u+0x00000001u; // 800C2D4C
  c->lr=0x800C2D54u; f_80257018(c); // 800C2D50
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2D54
  c->r[3]=c->r[30]+0xFFFFC848u; // 800C2D58
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2D5C
  c->r[5]=c->r[1]+0x0000002Cu; // 800C2D60
  {uint32_t ea=c->r[2]+0xFFFF9E04u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C2D64
  c->r[6]=c->r[1]+0x00000020u; // 800C2D68
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[0]); // 800C2D6C
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2D70
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2D74
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 800C2D78
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2D7C
  {uint32_t ea=c->r[2]+0xFFFF9E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2D80
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[4]);} // 800C2D84
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[3]);} // 800C2D88
  c->r[7]=R32(c->r[1]+0x00000074u); // 800C2D8C
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 800C2D90
  c->r[4]=R32(c->r[1]+0x00000078u); // 800C2D94
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 800C2D98
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800C2D9C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 800C2DA0
  c->r[10]=R32(c->r[1]+0x00000068u); // 800C2DA4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 800C2DA8
  c->r[9]=R32(c->r[1]+0x0000006Cu); // 800C2DAC
  c->r[8]=R32(c->r[1]+0x00000070u); // 800C2DB0
  W32(c->r[1]+0x00000020u,c->r[10]); // 800C2DB4
  W32(c->r[1]+0x00000024u,c->r[9]); // 800C2DB8
  W32(c->r[1]+0x00000028u,c->r[8]); // 800C2DBC
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800C2DC0
  W32(c->r[1]+0x00000030u,c->r[4]); // 800C2DC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C2DC8
  c->r[4]=R8(c->r[31]+0x0000008Du); // 800C2DCC
  c->lr=0x800C2DD4u; f_8018DBD0(c); // 800C2DD0
  goto L_800C2DE0; // 800C2DD4
L_800C2DD8:;
  c->r[0]=0u+0x000000FFu; // 800C2DD8
  W8(c->r[31]+0x0000008Du,c->r[0]); // 800C2DDC
L_800C2DE0:;
  c->r[4]=R8(c->r[31]+0x0000008Eu); // 800C2DE0
  cmpu(c,0,c->r[4],0x000000FFu); // 800C2DE4
  if (crb(c,2)) { goto L_800C2EAC; } // 800C2DE8
  c->r[30]=0u+0x80550000u; // 800C2DEC
  c->r[3]=c->r[30]+0xFFFFC848u; // 800C2DF0
  c->lr=0x800C2DF8u; f_8018D900(c); // 800C2DF4
  cmps(c,0,(int32_t)c->r[3],0); // 800C2DF8
  if (crb(c,2)) { goto L_800C2EA4; } // 800C2DFC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C2E00
  c->r[4]=0u+0x803A0000u; // 800C2E04
  c->r[4]=c->r[4]+0xFFFFD118u; // 800C2E08
  c->r[5]=c->r[1]+0x00000098u; // 800C2E0C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C2E10
  c->r[4]=c->r[4]+0x00000017u; // 800C2E14
  c->r[6]=0u+0x00000001u; // 800C2E18
  c->lr=0x800C2E20u; f_80257018(c); // 800C2E1C
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2E20
  c->r[3]=c->r[30]+0xFFFFC848u; // 800C2E24
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2E28
  c->r[5]=c->r[1]+0x00000014u; // 800C2E2C
  {uint32_t ea=c->r[2]+0xFFFF9E04u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C2E30
  c->r[6]=c->r[1]+0x00000008u; // 800C2E34
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[0]); // 800C2E38
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2E3C
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2E40
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 800C2E44
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2E48
  {uint32_t ea=c->r[2]+0xFFFF9E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2E4C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[4]);} // 800C2E50
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[3]);} // 800C2E54
  c->r[7]=R32(c->r[1]+0x0000005Cu); // 800C2E58
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 800C2E5C
  c->r[4]=R32(c->r[1]+0x00000060u); // 800C2E60
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 800C2E64
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C2E68
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800C2E6C
  c->r[10]=R32(c->r[1]+0x00000050u); // 800C2E70
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800C2E74
  c->r[9]=R32(c->r[1]+0x00000054u); // 800C2E78
  c->r[8]=R32(c->r[1]+0x00000058u); // 800C2E7C
  W32(c->r[1]+0x00000008u,c->r[10]); // 800C2E80
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 800C2E84
  W32(c->r[1]+0x00000010u,c->r[8]); // 800C2E88
  W32(c->r[1]+0x00000014u,c->r[7]); // 800C2E8C
  W32(c->r[1]+0x00000018u,c->r[4]); // 800C2E90
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C2E94
  c->r[4]=R8(c->r[31]+0x0000008Eu); // 800C2E98
  c->lr=0x800C2EA0u; f_8018DBD0(c); // 800C2E9C
  goto L_800C2EAC; // 800C2EA0
L_800C2EA4:;
  c->r[0]=0u+0x000000FFu; // 800C2EA4
  W8(c->r[31]+0x0000008Eu,c->r[0]); // 800C2EA8
L_800C2EAC:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 800C2EAC
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 800C2EB0
  c->r[30]=R32(c->r[1]+0x00000128u); // 800C2EB4
  c->lr=c->r[0]; // 800C2EB8
  c->r[1]=c->r[1]+0x00000130u; // 800C2EBC
  return; // 800C2EC0
}

// fn_800C2EC4
void f_800C2EC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2EC4
  c->r[0]=c->lr; // 800C2EC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2ECC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2ED0
  c->r[31]=c->r[3]|c->r[3]; // 800C2ED4
  c->r[4]=R8(c->r[3]+0x0000008Du); // 800C2ED8
  cmpu(c,0,c->r[4],0x000000FFu); // 800C2EDC
  if (crb(c,2)) { goto L_800C2EF8; } // 800C2EE0
  c->r[3]=0u+0x80550000u; // 800C2EE4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C2EE8
  c->lr=0x800C2EF0u; f_8018D738(c); // 800C2EEC
  c->r[0]=0u+0x000000FFu; // 800C2EF0
  W8(c->r[31]+0x0000008Du,c->r[0]); // 800C2EF4
L_800C2EF8:;
  c->r[4]=R8(c->r[31]+0x0000008Eu); // 800C2EF8
  cmpu(c,0,c->r[4],0x000000FFu); // 800C2EFC
  if (crb(c,2)) { goto L_800C2F18; } // 800C2F00
  c->r[3]=0u+0x80550000u; // 800C2F04
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C2F08
  c->lr=0x800C2F10u; f_8018D738(c); // 800C2F0C
  c->r[0]=0u+0x000000FFu; // 800C2F10
  W8(c->r[31]+0x0000008Eu,c->r[0]); // 800C2F14
L_800C2F18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2F18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2F1C
  c->lr=c->r[0]; // 800C2F20
  c->r[1]=c->r[1]+0x00000010u; // 800C2F24
  return; // 800C2F28
}

// fn_800C2F2C
void f_800C2F2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2F2C
  c->r[0]=c->lr; // 800C2F30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2F34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2F38
  c->r[31]=c->r[3]|c->r[3]; // 800C2F3C
  c->r[0]=R8(c->r[3]+0x0000008Cu); // 800C2F40
  cmpu(c,0,c->r[0],0x000000FFu); // 800C2F44
  if (!crb(c,2)) { goto L_800C2F70; } // 800C2F48
  c->r[4]=0u+0x803A0000u; // 800C2F4C
  c->r[3]=0u+0x80550000u; // 800C2F50
  c->r[4]=c->r[4]+0xFFFFD118u; // 800C2F54
  c->r[5]=0u+0x00000000u; // 800C2F58
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C2F5C
  c->r[6]=0u+0x00000000u; // 800C2F60
  c->r[4]=c->r[4]+0x0000002Du; // 800C2F64
  c->lr=0x800C2F6Cu; f_8018D3E4(c); // 800C2F68
  W8(c->r[31]+0x0000008Cu,c->r[3]); // 800C2F6C
L_800C2F70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2F70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2F74
  c->lr=c->r[0]; // 800C2F78
  c->r[1]=c->r[1]+0x00000010u; // 800C2F7C
  return; // 800C2F80
}

// fn_800C2F84
void f_800C2F84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2F84
  c->r[0]=c->lr; // 800C2F88
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C2F8C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800C2F90
  c->r[31]=c->r[3]|c->r[3]; // 800C2F94
  c->r[0]=R8(c->r[3]+0x0000008Cu); // 800C2F98
  cmpu(c,0,c->r[0],0x000000FFu); // 800C2F9C
  if (crb(c,2)) { goto L_800C3084; } // 800C2FA0
  c->r[3]=R32(c->r[3]+0x00000394u); // 800C2FA4
  c->r[4]=0u+0x803A0000u; // 800C2FA8
  c->r[4]=c->r[4]+0xFFFFD118u; // 800C2FAC
  c->r[5]=c->r[1]+0x00000048u; // 800C2FB0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C2FB4
  c->r[4]=c->r[4]+0x00000010u; // 800C2FB8
  c->r[6]=0u+0x00000001u; // 800C2FBC
  c->lr=0x800C2FC4u; f_80257018(c); // 800C2FC0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2FC4
  c->r[3]=c->r[1]+0x00000048u; // 800C2FC8
  {uint32_t ea=c->r[1]+0x00000064u; c->f[5]=c->ps1[5]=RF32(ea);} // 800C2FCC
  c->r[4]=0u+0x00000059u; // 800C2FD0
  {uint32_t ea=c->r[1]+0x00000074u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C2FD4
  {uint32_t ea=c->r[2]+0xFFFF9E10u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C2FD8
  {uint32_t ea=c->r[2]+0xFFFF9E14u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2FDC
  {uint32_t ea=c->r[2]+0xFFFF9E18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2FE0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 800C2FE4
  {uint32_t ea=c->r[2]+0xFFFF9E1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2FE8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[5]);} // 800C2FEC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[4]);} // 800C2FF0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 800C2FF4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 800C2FF8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800C2FFC
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3000
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800C3004
  c->lr=0x800C300Cu; f_80295FBC(c); // 800C3008
  c->r[4]=c->r[1]+0x00000020u; // 800C300C
  c->r[3]=c->r[1]+0x00000048u; // 800C3010
  c->r[5]=c->r[4]|c->r[4]; // 800C3014
  c->lr=0x800C301Cu; f_80296750(c); // 800C3018
  c->r[3]=c->r[1]+0x00000038u; // 800C301C
  c->r[4]=c->r[1]+0x00000020u; // 800C3020
  c->r[5]=c->r[3]|c->r[3]; // 800C3024
  c->lr=0x800C302Cu; f_80296A4C(c); // 800C3028
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C302C
  c->r[3]=0u+0x80550000u; // 800C3030
  c->r[7]=R32(c->r[1]+0x00000038u); // 800C3034
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C3038
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800C303C
  c->r[5]=c->r[1]+0x00000014u; // 800C3040
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 800C3044
  c->r[6]=c->r[1]+0x00000008u; // 800C3048
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800C304C
  c->r[10]=R32(c->r[1]+0x0000002Cu); // 800C3050
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800C3054
  c->r[9]=R32(c->r[1]+0x00000030u); // 800C3058
  c->r[8]=R32(c->r[1]+0x00000034u); // 800C305C
  c->r[0]=R32(c->r[1]+0x00000040u); // 800C3060
  W32(c->r[1]+0x00000008u,c->r[10]); // 800C3064
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 800C3068
  W32(c->r[1]+0x00000010u,c->r[8]); // 800C306C
  W32(c->r[1]+0x00000014u,c->r[7]); // 800C3070
  W32(c->r[1]+0x00000018u,c->r[4]); // 800C3074
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C3078
  c->r[4]=R8(c->r[31]+0x0000008Cu); // 800C307C
  c->lr=0x800C3084u; f_8018DBD0(c); // 800C3080
L_800C3084:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C3084
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800C3088
  c->lr=c->r[0]; // 800C308C
  c->r[1]=c->r[1]+0x00000080u; // 800C3090
  return; // 800C3094
}

// fn_800C3098
void f_800C3098(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3098
  c->r[0]=c->lr; // 800C309C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C30A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C30A4
  c->r[31]=c->r[3]|c->r[3]; // 800C30A8
  c->r[4]=R8(c->r[3]+0x0000008Cu); // 800C30AC
  cmpu(c,0,c->r[4],0x000000FFu); // 800C30B0
  if (crb(c,2)) { goto L_800C30CC; } // 800C30B4
  c->r[3]=0u+0x80550000u; // 800C30B8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C30BC
  c->lr=0x800C30C4u; f_8018D694(c); // 800C30C0
  c->r[0]=0u+0x000000FFu; // 800C30C4
  W8(c->r[31]+0x0000008Cu,c->r[0]); // 800C30C8
L_800C30CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C30CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C30D0
  c->lr=c->r[0]; // 800C30D4
  c->r[1]=c->r[1]+0x00000010u; // 800C30D8
  return; // 800C30DC
}

// fn_800C30E0
void f_800C30E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C30E0
  c->r[0]=c->lr; // 800C30E4
  cmps(c,0,(int32_t)c->r[3],0); // 800C30E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C30EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C30F0
  c->r[31]=c->r[4]|c->r[4]; // 800C30F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C30F8
  c->r[30]=c->r[3]|c->r[3]; // 800C30FC
  if (crb(c,2)) { goto L_800C311C; } // 800C3100
  c->r[4]=0u+0x00000000u; // 800C3104
  c->lr=0x800C310Cu; f_8026A06C(c); // 800C3108
  cmps(c,0,(int32_t)c->r[31],0); // 800C310C
  if (!crb(c,1)) { goto L_800C311C; } // 800C3110
  c->r[3]=c->r[30]|c->r[30]; // 800C3114
  c->lr=0x800C311Cu; f_8026A268(c); // 800C3118
L_800C311C:;
  c->r[3]=c->r[30]|c->r[30]; // 800C311C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3120
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C3124
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3128
  c->lr=c->r[0]; // 800C312C
  c->r[1]=c->r[1]+0x00000010u; // 800C3130
  return; // 800C3134
}

// fn_800C3138
void f_800C3138(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3138
  c->r[0]=c->lr; // 800C313C
  c->r[4]=0u+0x00000000u; // 800C3140
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3144
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3148
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C314C
  c->r[30]=c->r[3]|c->r[3]; // 800C3150
  c->lr=0x800C3158u; f_801F57D0(c); // 800C3154
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C3158
  c->r[3]=c->r[30]|c->r[30]; // 800C315C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C3160
  c->ctr=c->r[12]; // 800C3164
  if (true) { c->lr=0x800C316Cu; dispatch(c,c->ctr); } // 800C3168
  c->r[3]=c->r[30]|c->r[30]; // 800C316C
  c->lr=0x800C3174u; f_801F4B94(c); // 800C3170
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C3174
  c->r[4]=0u+0x00000003u; // 800C3178
  c->r[3]=0u+0x00000025u; // 800C317C
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800C3180
  c->r[0]=c->r[0]|0x00000800u; // 800C3184
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C3188
  W8(c->r[30]+0x0000006Du,c->r[3]); // 800C318C
  c->r[3]=c->r[30]|c->r[30]; // 800C3190
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800C3194
  c->lr=0x800C319Cu; f_801F58BC(c); // 800C3198
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C319C
  c->r[31]=0u+0x00000001u; // 800C31A0
  c->r[4]=0u+0x803A0000u; // 800C31A4
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800C31A8
  c->r[4]=c->r[4]+0xFFFFD15Cu; // 800C31AC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C31B0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C31B4
  c->lr=0x800C31BCu; f_80256EC4(c); // 800C31B8
  c->r[6]=R32(c->r[30]+0x00000394u); // 800C31BC
  c->r[5]=0u+0x805D0000u; // 800C31C0
  c->r[4]=c->r[30]+0x0000002Cu; // 800C31C4
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800C31C8
  c->r[3]=c->r[5]+0x000078B0u; // 800C31CC
  c->lr=0x800C31D4u; f_802351CC(c); // 800C31D0
  c->r[5]=R32(c->r[30]+0x00000394u); // 800C31D4
  c->r[4]=0u+0x00000000u; // 800C31D8
  {uint32_t ea=c->r[2]+0xFFFF9E28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C31DC
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800C31E0
  c->r[3]=c->r[30]|c->r[30]; // 800C31E4
  c->f[2]=c->f[1]; // 800C31E8
  c->r[5]=0u+0x00000001u; // 800C31EC
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800C31F0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C31F4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C31F8
  c->ctr=c->r[12]; // 800C31FC
  if (true) { c->lr=0x800C3204u; dispatch(c,c->ctr); } // 800C3200
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C3204
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C3208
  c->lr=0x800C3210u; f_802501B0(c); // 800C320C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C3210
  c->r[3]=c->r[30]|c->r[30]; // 800C3214
  c->r[0]=c->r[0]|0x00000004u; // 800C3218
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800C321C
  c->lr=0x800C3224u; f_801F56F4(c); // 800C3220
  c->r[0]=0u+0x000000FFu; // 800C3224
  W32(c->r[30]+0x00000444u,c->r[31]); // 800C3228
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800C322C
  W8(c->r[30]+0x00000078u,c->r[0]); // 800C3230
  W8(c->r[30]+0x00000079u,c->r[0]); // 800C3234
  c->lr=0x800C323Cu; f_8024E174(c); // 800C3238
  W32(c->r[30]+0x00000438u,c->r[3]); // 800C323C
  c->r[3]=c->r[30]|c->r[30]; // 800C3240
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C3244
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C3248
  c->ctr=c->r[12]; // 800C324C
  if (true) { c->lr=0x800C3254u; dispatch(c,c->ctr); } // 800C3250
  c->r[3]=c->r[30]|c->r[30]; // 800C3254
  c->r[4]=0u+0x00000004u; // 800C3258
  c->r[5]=0u+0x0000001Cu; // 800C325C
  c->r[6]=0u+0x00000000u; // 800C3260
  c->r[7]=0u+0x00000001u; // 800C3264
  c->lr=0x800C326Cu; f_8017900C(c); // 800C3268
  c->r[3]=c->r[30]|c->r[30]; // 800C326C
  c->lr=0x800C3274u; f_800C3BBC(c); // 800C3270
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3274
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3278
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C327C
  c->lr=c->r[0]; // 800C3280
  c->r[1]=c->r[1]+0x00000010u; // 800C3284
  return; // 800C3288
}

// fn_800C328C
void f_800C328C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C328C
  c->r[0]=c->lr; // 800C3290
  c->r[5]=0u+0x00000000u; // 800C3294
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3298
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C329C
  c->r[31]=c->r[3]|c->r[3]; // 800C32A0
  c->r[3]=0u+0x000004A2u; // 800C32A4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C32A8
  c->r[4]=c->r[4]+0x0000010Cu; // 800C32AC
  c->lr=0x800C32B4u; f_8024EE50(c); // 800C32B0
  cmps(c,0,(int32_t)c->r[3],0); // 800C32B4
  if (crb(c,2)) { goto L_800C32C4; } // 800C32B8
  c->r[3]=0u+0x00000000u; // 800C32BC
  goto L_800C32D0; // 800C32C0
L_800C32C4:;
  c->r[3]=c->r[31]+0x00000210u; // 800C32C4
  c->r[4]=0u+0x000000E1u; // 800C32C8
  c->lr=0x800C32D0u; f_80221630(c); // 800C32CC
L_800C32D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C32D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C32D4
  c->lr=c->r[0]; // 800C32D8
  c->r[1]=c->r[1]+0x00000010u; // 800C32DC
  return; // 800C32E0
}

// fn_800C32E4
void f_800C32E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C32E4
  c->r[0]=c->lr; // 800C32E8
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C32EC
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800C32F0
  c->r[31]=c->r[3]|c->r[3]; // 800C32F4
  W32(c->r[1]+0x00000068u,c->r[30]); // 800C32F8
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800C32FC
  c->r[12]=R32(c->r[12]+0x00000068u); // 800C3300
  c->ctr=c->r[12]; // 800C3304
  if (true) { c->lr=0x800C330Cu; dispatch(c,c->ctr); } // 800C3308
  c->r[3]=c->r[31]|c->r[31]; // 800C330C
  c->lr=0x800C3314u; f_801F4C0C(c); // 800C3310
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C3314
  cmps(c,0,(int32_t)c->r[3],0); // 800C3318
  if (crb(c,2)) { goto L_800C352C; } // 800C331C
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800C3320
  cmps(c,0,(int32_t)c->r[0],0); // 800C3324
  if (crb(c,2)) { goto L_800C33A8; } // 800C3328
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800C332C
  cmps(c,0,(int32_t)c->r[0],0); // 800C3330
  if (crb(c,2)) { goto L_800C33A8; } // 800C3334
  c->r[0]=R8(c->r[31]+0x00000078u); // 800C3338
  cmpu(c,0,c->r[0],0x000000FFu); // 800C333C
  if (!crb(c,2)) { goto L_800C3368; } // 800C3340
  c->r[4]=0u+0x803A0000u; // 800C3344
  c->r[3]=0u+0x80550000u; // 800C3348
  c->r[4]=c->r[4]+0xFFFFD15Cu; // 800C334C
  c->r[5]=0u+0x00000004u; // 800C3350
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C3354
  c->r[6]=0u+0x00000000u; // 800C3358
  c->r[4]=c->r[4]+0x00000009u; // 800C335C
  c->lr=0x800C3364u; f_8018D3E4(c); // 800C3360
  W8(c->r[31]+0x00000078u,c->r[3]); // 800C3364
L_800C3368:;
  c->r[0]=R8(c->r[31]+0x00000078u); // 800C3368
  cmpu(c,0,c->r[0],0x000000FFu); // 800C336C
  if (crb(c,2)) { goto L_800C33C8; } // 800C3370
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C3374
  c->r[4]=0u+0x803A0000u; // 800C3378
  c->r[4]=c->r[4]+0xFFFFD15Cu; // 800C337C
  c->r[5]=c->r[1]+0x00000038u; // 800C3380
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C3384
  c->r[6]=0u+0x00000001u; // 800C3388
  c->lr=0x800C3390u; f_80257018(c); // 800C338C
  c->r[3]=0u+0x80550000u; // 800C3390
  c->r[4]=R8(c->r[31]+0x00000078u); // 800C3394
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C3398
  c->r[5]=c->r[1]+0x00000038u; // 800C339C
  c->lr=0x800C33A4u; f_8018DEB8(c); // 800C33A0
  goto L_800C33C8; // 800C33A4
L_800C33A8:;
  c->r[4]=R8(c->r[31]+0x00000078u); // 800C33A8
  cmpu(c,0,c->r[4],0x000000FFu); // 800C33AC
  if (crb(c,2)) { goto L_800C33C8; } // 800C33B0
  c->r[3]=0u+0x80550000u; // 800C33B4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C33B8
  c->lr=0x800C33C0u; f_8018D694(c); // 800C33BC
  c->r[0]=0u+0x000000FFu; // 800C33C0
  W8(c->r[31]+0x00000078u,c->r[0]); // 800C33C4
L_800C33C8:;
  c->r[30]=0u+0x80620000u; // 800C33C8
  c->r[4]=0u+0x00000026u; // 800C33CC
  c->r[30]=c->r[30]+0x00007688u; // 800C33D0
  c->r[3]=R32(c->r[30]+0x00000014u); // 800C33D4
  c->lr=0x800C33DCu; f_80037670(c); // 800C33D8
  cmps(c,0,(int32_t)c->r[3],0); // 800C33DC
  if (!crb(c,2)) { goto L_800C34FC; } // 800C33E0
  c->r[3]=R32(c->r[30]+0x00000014u); // 800C33E4
  c->r[4]=0u+0x00000028u; // 800C33E8
  c->lr=0x800C33F0u; f_80037670(c); // 800C33EC
  cmps(c,0,(int32_t)c->r[3],0); // 800C33F0
  if (!crb(c,2)) { goto L_800C34FC; } // 800C33F4
  c->r[3]=R32(c->r[30]+0x00000014u); // 800C33F8
  c->r[4]=0u+0x00000002u; // 800C33FC
  c->lr=0x800C3404u; f_80037670(c); // 800C3400
  cmps(c,0,(int32_t)c->r[3],0); // 800C3404
  if (!crb(c,2)) { goto L_800C34FC; } // 800C3408
  c->r[0]=R8(c->r[31]+0x00000079u); // 800C340C
  cmpu(c,0,c->r[0],0x000000FFu); // 800C3410
  if (!crb(c,2)) { goto L_800C343C; } // 800C3414
  c->r[4]=0u+0x803A0000u; // 800C3418
  c->r[3]=0u+0x80550000u; // 800C341C
  c->r[4]=c->r[4]+0xFFFFD15Cu; // 800C3420
  c->r[5]=0u+0x00000004u; // 800C3424
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C3428
  c->r[6]=0u+0x00000000u; // 800C342C
  c->r[4]=c->r[4]+0x0000000Du; // 800C3430
  c->lr=0x800C3438u; f_8018D3E4(c); // 800C3434
  W8(c->r[31]+0x00000079u,c->r[3]); // 800C3438
L_800C343C:;
  c->r[0]=R8(c->r[31]+0x00000079u); // 800C343C
  cmpu(c,0,c->r[0],0x000000FFu); // 800C3440
  if (crb(c,2)) { goto L_800C351C; } // 800C3444
  c->r[30]=0u+0x805D0000u; // 800C3448
  c->r[3]=c->r[30]+0x00003F6Cu; // 800C344C
  c->lr=0x800C3454u; f_80045264(c); // 800C3450
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800C3454
  cmpu(c,0,c->r[0],0x00000017u); // 800C3458
  if (!crb(c,2)) { goto L_800C34B0; } // 800C345C
  c->r[11]=c->r[30]+0x00003F6Cu; // 800C3460
  c->r[3]=0u+0x80550000u; // 800C3464
  c->r[10]=R32(c->r[11]+0x00000060u); // 800C3468
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C346C
  c->r[9]=R32(c->r[11]+0x00000064u); // 800C3470
  c->r[5]=c->r[1]+0x0000002Cu; // 800C3474
  c->r[8]=R32(c->r[11]+0x00000068u); // 800C3478
  c->r[6]=c->r[1]+0x00000020u; // 800C347C
  c->r[7]=R32(c->r[11]+0x0000002Cu); // 800C3480
  c->r[4]=R32(c->r[11]+0x00000030u); // 800C3484
  c->r[0]=R32(c->r[11]+0x00000034u); // 800C3488
  W32(c->r[1]+0x00000020u,c->r[10]); // 800C348C
  W32(c->r[1]+0x00000024u,c->r[9]); // 800C3490
  W32(c->r[1]+0x00000028u,c->r[8]); // 800C3494
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800C3498
  W32(c->r[1]+0x00000030u,c->r[4]); // 800C349C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C34A0
  c->r[4]=R8(c->r[31]+0x00000079u); // 800C34A4
  c->lr=0x800C34ACu; f_8018DBD0(c); // 800C34A8
  goto L_800C351C; // 800C34AC
L_800C34B0:;
  c->r[4]=R32(c->r[31]+0x00000060u); // 800C34B0
  c->r[3]=0u+0x80550000u; // 800C34B4
  c->r[0]=R32(c->r[31]+0x00000064u); // 800C34B8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C34BC
  c->r[5]=c->r[1]+0x00000014u; // 800C34C0
  c->r[6]=c->r[1]+0x00000008u; // 800C34C4
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C34C8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C34CC
  c->r[0]=R32(c->r[31]+0x00000068u); // 800C34D0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C34D4
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800C34D8
  c->r[0]=R32(c->r[31]+0x00000030u); // 800C34DC
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C34E0
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C34E4
  c->r[0]=R32(c->r[31]+0x00000034u); // 800C34E8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C34EC
  c->r[4]=R8(c->r[31]+0x00000079u); // 800C34F0
  c->lr=0x800C34F8u; f_8018DBD0(c); // 800C34F4
  goto L_800C351C; // 800C34F8
L_800C34FC:;
  c->r[4]=R8(c->r[31]+0x00000079u); // 800C34FC
  cmpu(c,0,c->r[4],0x000000FFu); // 800C3500
  if (crb(c,2)) { goto L_800C351C; } // 800C3504
  c->r[3]=0u+0x80550000u; // 800C3508
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C350C
  c->lr=0x800C3514u; f_8018D694(c); // 800C3510
  c->r[0]=0u+0x000000FFu; // 800C3514
  W8(c->r[31]+0x00000079u,c->r[0]); // 800C3518
L_800C351C:;
  c->r[3]=c->r[31]|c->r[31]; // 800C351C
  c->lr=0x800C3524u; f_801F56F4(c); // 800C3520
  c->r[3]=c->r[31]|c->r[31]; // 800C3524
  c->lr=0x800C352Cu; f_800C3C60(c); // 800C3528
L_800C352C:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C352C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800C3530
  c->r[30]=R32(c->r[1]+0x00000068u); // 800C3534
  c->lr=c->r[0]; // 800C3538
  c->r[1]=c->r[1]+0x00000070u; // 800C353C
  return; // 800C3540
}

// fn_800C3544
void f_800C3544(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3544
  c->r[0]=c->lr; // 800C3548
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C354C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3550
  c->r[31]=c->r[3]|c->r[3]; // 800C3554
  c->r[4]=R8(c->r[3]+0x00000078u); // 800C3558
  cmpu(c,0,c->r[4],0x000000FFu); // 800C355C
  if (crb(c,2)) { goto L_800C3578; } // 800C3560
  c->r[3]=0u+0x80550000u; // 800C3564
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C3568
  c->lr=0x800C3570u; f_8018D694(c); // 800C356C
  c->r[0]=0u+0x000000FFu; // 800C3570
  W8(c->r[31]+0x00000078u,c->r[0]); // 800C3574
L_800C3578:;
  c->r[4]=R8(c->r[31]+0x00000079u); // 800C3578
  cmpu(c,0,c->r[4],0x000000FFu); // 800C357C
  if (crb(c,2)) { goto L_800C3598; } // 800C3580
  c->r[3]=0u+0x80550000u; // 800C3584
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C3588
  c->lr=0x800C3590u; f_8018D694(c); // 800C358C
  c->r[0]=0u+0x000000FFu; // 800C3590
  W8(c->r[31]+0x00000079u,c->r[0]); // 800C3594
L_800C3598:;
  c->r[3]=c->r[31]|c->r[31]; // 800C3598
  c->lr=0x800C35A0u; f_801F4C78(c); // 800C359C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C35A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C35A4
  c->lr=c->r[0]; // 800C35A8
  c->r[1]=c->r[1]+0x00000010u; // 800C35AC
  return; // 800C35B0
}

// fn_800C35B4
void f_800C35B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C35B4
  c->r[0]=c->lr; // 800C35B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C35BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C35C0
  c->r[31]=c->r[3]|c->r[3]; // 800C35C4
  c->lr=0x800C35CCu; f_801F4F28(c); // 800C35C8
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800C35CC
  cmps(c,0,(int32_t)c->r[0],101); // 800C35D0
  if (crb(c,2)) { goto L_800C3618; } // 800C35D4
  if (!crb(c,0)) { goto L_800C362C; } // 800C35D8
  cmps(c,0,(int32_t)c->r[0],100); // 800C35DC
  if (!crb(c,0)) { goto L_800C35E8; } // 800C35E0
  goto L_800C362C; // 800C35E4
L_800C35E8:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800C35E8
  c->r[7]=0u+0x803D0000u; // 800C35EC
  c->r[3]=c->r[31]|c->r[31]; // 800C35F0
  c->r[4]=c->r[1]+0x00000008u; // 800C35F4
  {uint32_t ea=c->r[7]+0x00000B50u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C35F8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C35FC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C3600
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C3604
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C3608
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C360C
  c->lr=0x800C3614u; f_800C3640(c); // 800C3610
  goto L_800C362C; // 800C3614
L_800C3618:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C3618
  c->r[3]=c->r[31]|c->r[31]; // 800C361C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C3620
  c->ctr=c->r[12]; // 800C3624
  if (true) { c->lr=0x800C362Cu; dispatch(c,c->ctr); } // 800C3628
L_800C362C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C362C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C3630
  c->lr=c->r[0]; // 800C3634
  c->r[1]=c->r[1]+0x00000020u; // 800C3638
  return; // 800C363C
}

// fn_800C3640
void f_800C3640(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3640
  c->r[0]=c->lr; // 800C3644
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3648
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C364C
  c->r[31]=c->r[4]|c->r[4]; // 800C3650
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C3654
  c->r[30]=c->r[3]|c->r[3]; // 800C3658
  c->r[3]=c->r[31]|c->r[31]; // 800C365C
  c->lr=0x800C3664u; f_802B9FDC(c); // 800C3660
  cmps(c,0,(int32_t)c->r[3],0); // 800C3664
  if (crb(c,2)) { goto L_800C3684; } // 800C3668
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C366C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C3670
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800C3674
  W32(c->r[30]+0x00000020u,c->r[0]); // 800C3678
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C367C
  W32(c->r[30]+0x00000024u,c->r[0]); // 800C3680
L_800C3684:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3684
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3688
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C368C
  c->lr=c->r[0]; // 800C3690
  c->r[1]=c->r[1]+0x00000010u; // 800C3694
  return; // 800C3698
}

// fn_800C369C
void f_800C369C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C369C
  c->r[0]=c->lr; // 800C36A0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C36A4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800C36A8
  W32(c->r[1]+0x00000038u,c->r[30]); // 800C36AC
  c->r[30]=c->r[3]|c->r[3]; // 800C36B0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C36B4
  c->lr=0x800C36BCu; f_801F5418(c); // 800C36B8
  cmps(c,0,(int32_t)c->r[3],0); // 800C36BC
  if (!crb(c,0)) { goto L_800C37EC; } // 800C36C0
  {uint32_t ea=c->r[2]+0xFFFF9E28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C36C4
  {uint32_t ea=c->r[2]+0xFFFF9E2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C36C8
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800C36CC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C36D0
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 800C36D4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C36D8
  c->lr=0x800C36E0u; f_8025037C(c); // 800C36DC
  c->r[3]=0u+0x80620000u; // 800C36E0
  c->r[4]=0u+0x00000002u; // 800C36E4
  c->r[3]=c->r[3]+0x00007688u; // 800C36E8
  c->r[3]=R32(c->r[3]+0x00000014u); // 800C36EC
  c->lr=0x800C36F4u; f_80037670(c); // 800C36F0
  cmps(c,0,(int32_t)c->r[3],0); // 800C36F4
  if (!crb(c,2)) { goto L_800C371C; } // 800C36F8
  c->r[6]=R32(c->r[30]+0x00000394u); // 800C36FC
  c->r[3]=c->r[1]+0x00000020u; // 800C3700
  c->r[4]=c->r[30]+0x00000060u; // 800C3704
  c->r[5]=c->r[1]+0x0000002Cu; // 800C3708
  c->r[6]=c->r[6]+0x000000B0u; // 800C370C
  c->r[7]=0u+0x00000000u; // 800C3710
  c->lr=0x800C3718u; f_8002BE64(c); // 800C3714
  goto L_800C374C; // 800C3718
L_800C371C:;
  c->r[31]=0u+0x805D0000u; // 800C371C
  c->r[3]=c->r[30]+0x0000002Cu; // 800C3720
  c->r[31]=c->r[31]+0x00003F6Cu; // 800C3724
  c->r[4]=c->r[31]+0x0000002Cu; // 800C3728
  c->lr=0x800C3730u; f_800361A0(c); // 800C372C
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3730
  c->r[3]=c->r[30]+0x00000060u; // 800C3734
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3738
  c->r[4]=c->r[31]+0x00000060u; // 800C373C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800C3740
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800C3744
  c->lr=0x800C374Cu; f_800361A0(c); // 800C3748
L_800C374C:;
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 800C374C
  c->r[3]=0u+0x805D0000u; // 800C3750
  c->r[0]=R32(c->r[30]+0x00000030u); // 800C3754
  c->r[3]=c->r[3]+0x00003F6Cu; // 800C3758
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C375C
  c->r[4]=c->r[30]|c->r[30]; // 800C3760
  W32(c->r[1]+0x00000014u,c->r[5]); // 800C3764
  c->r[7]=c->r[1]+0x00000014u; // 800C3768
  c->r[6]=0u+0x00000016u; // 800C376C
  c->r[8]=0u+0x00000000u; // 800C3770
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C3774
  c->r[0]=R32(c->r[30]+0x00000034u); // 800C3778
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C377C
  c->r[3]=R32(c->r[30]+0x00000438u); // 800C3780
  c->r[5]=R32(c->r[30]+0x00000394u); // 800C3784
  c->lr=0x800C378Cu; f_801FA6A4(c); // 800C3788
  {uint32_t ea=c->r[30]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C378C
  c->r[6]=0u+0x803A0000u; // 800C3790
  {uint32_t ea=c->r[2]+0xFFFF9E34u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C3794
  c->r[5]=c->r[30]+0x00000044u; // 800C3798
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C379C
  c->r[6]=c->r[6]+0xFFFFD150u; // 800C37A0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800C37A4
  c->r[3]=R32(c->r[30]+0x00000438u); // 800C37A8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800C37AC
  c->r[4]=0u+0x00000000u; // 800C37B0
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800C37B4
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C37B8
  c->lr=0x800C37C0u; f_801FBEC0(c); // 800C37BC
  c->r[7]=0u+0x803D0000u; // 800C37C0
  {uint32_t ea=c->r[7]+0x00000B5Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800C37C4
  c->r[3]=c->r[30]|c->r[30]; // 800C37C8
  c->r[4]=c->r[1]+0x00000008u; // 800C37CC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C37D0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C37D4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C37D8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C37DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C37E0
  c->lr=0x800C37E8u; f_800C3640(c); // 800C37E4
  goto L_800C3828; // 800C37E8
L_800C37EC:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C37EC
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800C37F0
  cmps(c,0,(int32_t)c->r[0],0); // 800C37F4
  if (crb(c,2)) { goto L_800C3828; } // 800C37F8
  c->r[31]=0u+0x805D0000u; // 800C37FC
  c->r[3]=c->r[31]+0x00003F6Cu; // 800C3800
  c->lr=0x800C3808u; f_800447E4(c); // 800C3804
  cmpu(c,0,c->r[3],0x00000001u); // 800C3808
  if (!crb(c,2)) { goto L_800C381C; } // 800C380C
  c->r[0]=0u+0x00000000u; // 800C3810
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800C3814
  goto L_800C3828; // 800C3818
L_800C381C:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800C381C
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800C3820
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800C3824
L_800C3828:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C3828
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800C382C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800C3830
  c->lr=c->r[0]; // 800C3834
  c->r[1]=c->r[1]+0x00000040u; // 800C3838
  return; // 800C383C
}

// fn_800C3840
void f_800C3840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3840
  c->r[0]=c->lr; // 800C3844
  c->r[4]=0u+0x00000000u; // 800C3848
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C384C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800C3850
  c->r[31]=c->r[3]|c->r[3]; // 800C3854
  W32(c->r[1]+0x00000038u,c->r[30]); // 800C3858
  c->r[3]=R32(c->r[3]+0x00000438u); // 800C385C
  c->lr=0x800C3864u; f_801FAF00(c); // 800C3860
  cmps(c,0,(int32_t)c->r[3],0); // 800C3864
  if (crb(c,2)) { goto L_800C387C; } // 800C3868
  c->r[3]=R32(c->r[31]+0x00000438u); // 800C386C
  c->lr=0x800C3874u; f_80050BE4(c); // 800C3870
  cmps(c,0,(int32_t)c->r[3],0); // 800C3874
  if (crb(c,2)) { goto L_800C39A8; } // 800C3878
L_800C387C:;
  {uint32_t ea=c->r[2]+0xFFFF9E28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C387C
  c->r[3]=0u+0x80550000u; // 800C3880
  {uint32_t ea=c->r[2]+0xFFFF9E38u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C3884
  c->r[3]=c->r[3]+0x00003D60u; // 800C3888
  c->f[3]=c->f[1]; // 800C388C
  c->r[4]=c->r[31]+0x0000002Cu; // 800C3890
  c->r[5]=c->r[1]+0x00000008u; // 800C3894
  c->r[6]=0u+0x00000000u; // 800C3898
  c->r[7]=0u+0x00000000u; // 800C389C
  c->lr=0x800C38A4u; f_801D5488(c); // 800C38A0
  cmpu(c,0,c->r[3],0x00000001u); // 800C38A4
  if (!crb(c,2)) { goto L_800C39A8; } // 800C38A8
  c->r[4]=R8(c->r[31]+0x00000078u); // 800C38AC
  cmpu(c,0,c->r[4],0x000000FFu); // 800C38B0
  if (crb(c,2)) { goto L_800C38CC; } // 800C38B4
  c->r[3]=0u+0x80550000u; // 800C38B8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C38BC
  c->lr=0x800C38C4u; f_8018D694(c); // 800C38C0
  c->r[0]=0u+0x000000FFu; // 800C38C4
  W8(c->r[31]+0x00000078u,c->r[0]); // 800C38C8
L_800C38CC:;
  c->r[4]=0u+0x803A0000u; // 800C38CC
  c->r[30]=0u+0x80550000u; // 800C38D0
  c->r[4]=c->r[4]+0xFFFFD15Cu; // 800C38D4
  c->r[5]=0u+0x00000000u; // 800C38D8
  c->r[3]=c->r[30]+0xFFFFC848u; // 800C38DC
  c->r[6]=0u+0x00000000u; // 800C38E0
  c->r[4]=c->r[4]+0x00000011u; // 800C38E4
  c->lr=0x800C38ECu; f_8018D3E4(c); // 800C38E8
  c->r[9]=0u+0x803A0000u; // 800C38EC
  {uint32_t ea=c->r[9]+0xFFFFD150u; c->r[8]=R32(ea); c->r[9]=ea;} // 800C38F0
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800C38F4
  c->r[3]=c->r[30]+0xFFFFC848u; // 800C38F8
  c->r[7]=R32(c->r[9]+0x00000004u); // 800C38FC
  c->r[5]=c->r[1]+0x00000024u; // 800C3900
  c->r[0]=R32(c->r[9]+0x00000008u); // 800C3904
  c->r[6]=c->r[1]+0x00000018u; // 800C3908
  W32(c->r[1]+0x00000018u,c->r[8]); // 800C390C
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 800C3910
  W32(c->r[1]+0x00000020u,c->r[0]); // 800C3914
  c->r[7]=R32(c->r[31]+0x0000002Cu); // 800C3918
  c->r[0]=R32(c->r[31]+0x00000030u); // 800C391C
  W32(c->r[1]+0x00000024u,c->r[7]); // 800C3920
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C3924
  c->r[0]=R32(c->r[31]+0x00000034u); // 800C3928
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800C392C
  c->lr=0x800C3934u; f_8018DBD0(c); // 800C3930
  c->r[3]=c->r[31]|c->r[31]; // 800C3934
  c->r[4]=0u+0x00000004u; // 800C3938
  c->r[5]=0u+0x00000019u; // 800C393C
  c->r[6]=0u+0x00000001u; // 800C3940
  c->r[7]=0u+0x00000001u; // 800C3944
  c->lr=0x800C394Cu; f_8017900C(c); // 800C3948
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C394C
  c->r[4]=0u+0x00000000u; // 800C3950
  {uint32_t ea=c->r[2]+0xFFFF9E3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3954
  c->r[0]=0u+0x000000FFu; // 800C3958
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 800C395C
  c->r[3]=c->r[31]|c->r[31]; // 800C3960
  c->r[4]=0u+0x00000004u; // 800C3964
  c->r[5]=0u+0x0000001Du; // 800C3968
  W8(c->r[31]+0x00000074u,c->r[0]); // 800C396C
  c->r[6]=0u+0x00000001u; // 800C3970
  c->r[7]=0u+0x00000001u; // 800C3974
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C3978
  c->lr=0x800C3980u; f_8017900C(c); // 800C397C
  c->r[7]=0u+0x803D0000u; // 800C3980
  {uint32_t ea=c->r[7]+0x00000B68u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C3984
  c->r[3]=c->r[31]|c->r[31]; // 800C3988
  c->r[4]=c->r[1]+0x0000000Cu; // 800C398C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C3990
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C3994
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C3998
  W32(c->r[1]+0x00000010u,c->r[5]); // 800C399C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C39A0
  c->lr=0x800C39A8u; f_800C3640(c); // 800C39A4
L_800C39A8:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C39A8
  c->r[3]=c->r[31]+0x0000002Cu; // 800C39AC
  c->r[4]=c->r[4]+0x0000005Cu; // 800C39B0
  c->lr=0x800C39B8u; f_800361A0(c); // 800C39B4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C39B8
  c->r[3]=c->r[31]+0x00000060u; // 800C39BC
  c->r[4]=c->r[4]+0x00000068u; // 800C39C0
  c->lr=0x800C39C8u; f_800361A0(c); // 800C39C4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C39C8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800C39CC
  c->r[30]=R32(c->r[1]+0x00000038u); // 800C39D0
  c->lr=c->r[0]; // 800C39D4
  c->r[1]=c->r[1]+0x00000040u; // 800C39D8
  return; // 800C39DC
}

// fn_800C39E0
void f_800C39E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C39E0
  c->r[0]=c->lr; // 800C39E4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C39E8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800C39EC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800C39F0
  c->r[30]=c->r[3]|c->r[3]; // 800C39F4
  c->r[4]=R8(c->r[3]+0x00000074u); // 800C39F8
  cmpu(c,0,c->r[4],0x00000010u); // 800C39FC
  if (!crb(c,0)) { goto L_800C3A5C; } // 800C3A00
  c->r[4]=R8(c->r[3]+0x00000079u); // 800C3A04
  cmpu(c,0,c->r[4],0x000000FFu); // 800C3A08
  if (crb(c,2)) { goto L_800C3A24; } // 800C3A0C
  c->r[3]=0u+0x80550000u; // 800C3A10
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C3A14
  c->lr=0x800C3A1Cu; f_8018D694(c); // 800C3A18
  c->r[0]=0u+0x000000FFu; // 800C3A1C
  W8(c->r[30]+0x00000079u,c->r[0]); // 800C3A20
L_800C3A24:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C3A24
  c->r[3]=c->r[30]|c->r[30]; // 800C3A28
  c->r[12]=R32(c->r[12]+0x00000018u); // 800C3A2C
  c->ctr=c->r[12]; // 800C3A30
  if (true) { c->lr=0x800C3A38u; dispatch(c,c->ctr); } // 800C3A34
  cmps(c,0,(int32_t)c->r[30],0); // 800C3A38
  if (crb(c,2)) { goto L_800C3B00; } // 800C3A3C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C3A40
  c->r[3]=c->r[30]|c->r[30]; // 800C3A44
  c->r[4]=0u+0x00000001u; // 800C3A48
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C3A4C
  c->ctr=c->r[12]; // 800C3A50
  if (true) { c->lr=0x800C3A58u; dispatch(c,c->ctr); } // 800C3A54
  goto L_800C3B00; // 800C3A58
L_800C3A5C:;
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3A5C
  c->r[4]=c->r[4]+0xFFFFFFF0u; // 800C3A60
  {uint32_t ea=c->r[2]+0xFFFF9E40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3A64
  c->r[0]=R8(c->r[3]+0x00000079u); // 800C3A68
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800C3A6C
  W8(c->r[3]+0x00000074u,c->r[4]); // 800C3A70
  cmpu(c,0,c->r[0],0x000000FFu); // 800C3A74
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C3A78
  if (crb(c,2)) { goto L_800C3B00; } // 800C3A7C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800C3A80
  c->r[31]=0u+0x80550000u; // 800C3A84
  c->r[5]=c->r[1]+0x00000020u; // 800C3A88
  c->r[6]=c->r[1]+0x00000014u; // 800C3A8C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800C3A90
  c->r[7]=c->r[1]+0x00000008u; // 800C3A94
  c->r[8]=R32(c->r[1]+0x0000002Cu); // 800C3A98
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800C3A9C
  c->r[4]=R32(c->r[1]+0x00000030u); // 800C3AA0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C3AA4
  W32(c->r[1]+0x00000008u,c->r[8]); // 800C3AA8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C3AAC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C3AB0
  c->r[4]=R32(c->r[3]+0x00000060u); // 800C3AB4
  c->r[0]=R32(c->r[3]+0x00000064u); // 800C3AB8
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C3ABC
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C3AC0
  c->r[0]=R32(c->r[3]+0x00000068u); // 800C3AC4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C3AC8
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 800C3ACC
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C3AD0
  W32(c->r[1]+0x00000020u,c->r[4]); // 800C3AD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C3AD8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800C3ADC
  c->r[3]=c->r[31]+0xFFFFC848u; // 800C3AE0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C3AE4
  c->r[4]=R8(c->r[30]+0x00000079u); // 800C3AE8
  c->lr=0x800C3AF0u; f_8018DD04(c); // 800C3AEC
  c->r[4]=R8(c->r[30]+0x00000079u); // 800C3AF0
  c->r[3]=c->r[31]+0xFFFFC848u; // 800C3AF4
  c->r[5]=R8(c->r[30]+0x00000074u); // 800C3AF8
  c->lr=0x800C3B00u; f_8018EBA0(c); // 800C3AFC
L_800C3B00:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C3B00
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800C3B04
  c->r[30]=R32(c->r[1]+0x00000038u); // 800C3B08
  c->lr=c->r[0]; // 800C3B0C
  c->r[1]=c->r[1]+0x00000040u; // 800C3B10
  return; // 800C3B14
}

// fn_800C3B18
void f_800C3B18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3B18
  c->r[0]=c->lr; // 800C3B1C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3B20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3B24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3B28
  c->r[31]=c->r[4]|c->r[4]; // 800C3B2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C3B30
  c->r[30]=c->r[3]|c->r[3]; // 800C3B34
  if (crb(c,2)) { goto L_800C3B54; } // 800C3B38
  c->r[4]=0u+0x00000000u; // 800C3B3C
  c->lr=0x800C3B44u; f_8026A06C(c); // 800C3B40
  cmps(c,0,(int32_t)c->r[31],0); // 800C3B44
  if (!crb(c,1)) { goto L_800C3B54; } // 800C3B48
  c->r[3]=c->r[30]|c->r[30]; // 800C3B4C
  c->lr=0x800C3B54u; f_8026A268(c); // 800C3B50
L_800C3B54:;
  c->r[3]=c->r[30]|c->r[30]; // 800C3B54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3B58
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C3B5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3B60
  c->lr=c->r[0]; // 800C3B64
  c->r[1]=c->r[1]+0x00000010u; // 800C3B68
  return; // 800C3B6C
}

// fn_800C3B70
void f_800C3B70(Ctx* __restrict c) {
  return; // 800C3B70
}

// fn_800C3B74
void f_800C3B74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3B74
  c->r[0]=c->lr; // 800C3B78
  c->r[7]=0u+0x803D0000u; // 800C3B7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C3B80
  c->r[0]=0u+0x00000000u; // 800C3B84
  c->r[4]=c->r[1]+0x00000008u; // 800C3B88
  W16(c->r[3]+0x000003BCu,c->r[0]); // 800C3B8C
  {uint32_t ea=c->r[7]+0x00000B74u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C3B90
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C3B94
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C3B98
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C3B9C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C3BA0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C3BA4
  c->lr=0x800C3BACu; f_800C3640(c); // 800C3BA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C3BAC
  c->lr=c->r[0]; // 800C3BB0
  c->r[1]=c->r[1]+0x00000020u; // 800C3BB4
  return; // 800C3BB8
}

// fn_800C3BBC
void f_800C3BBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3BBC
  c->r[0]=c->lr; // 800C3BC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3BC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3BC8
  c->r[31]=c->r[3]|c->r[3]; // 800C3BCC
  c->r[3]=c->r[3]+0x00000210u; // 800C3BD0
  c->lr=0x800C3BD8u; f_8004BAD4(c); // 800C3BD4
  cmps(c,0,(int32_t)c->r[3],0); // 800C3BD8
  if (crb(c,2)) { goto L_800C3C4C; } // 800C3BDC
  c->r[0]=R32(c->r[31]+0x00000210u); // 800C3BE0
  c->r[4]=c->r[31]|c->r[31]; // 800C3BE4
  c->r[3]=c->r[31]+0x00000210u; // 800C3BE8
  c->r[0]=c->r[0]|0xAA000000u; // 800C3BEC
  W32(c->r[31]+0x00000210u,c->r[0]); // 800C3BF0
  c->lr=0x800C3BF8u; f_80043E44(c); // 800C3BF4
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3BF8
  c->r[3]=c->r[31]+0x00000210u; // 800C3BFC
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C3C00
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C3C04
  c->lr=0x800C3C0Cu; f_80043E34(c); // 800C3C08
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C3C0C
  c->r[4]=0u+0x803A0000u; // 800C3C10
  c->r[4]=c->r[4]+0xFFFFD15Cu; // 800C3C14
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C3C18
  c->r[4]=c->r[4]+0x00000015u; // 800C3C1C
  c->lr=0x800C3C24u; f_80256EC4(c); // 800C3C20
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C3C24
  c->r[5]=c->r[3]|c->r[3]; // 800C3C28
  c->r[3]=c->r[31]+0x00000210u; // 800C3C2C
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800C3C30
  c->lr=0x800C3C38u; f_8004BAC8(c); // 800C3C34
  {uint32_t ea=c->r[2]+0xFFFF9E44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3C38
  c->r[3]=c->r[31]+0x00000210u; // 800C3C3C
  c->f[2]=c->f[1]; // 800C3C40
  c->f[3]=c->f[1]; // 800C3C44
  c->lr=0x800C3C4Cu; f_80043E24(c); // 800C3C48
L_800C3C4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3C4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3C50
  c->lr=c->r[0]; // 800C3C54
  c->r[1]=c->r[1]+0x00000010u; // 800C3C58
  return; // 800C3C5C
}

// fn_800C3C60
void f_800C3C60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3C60
  c->r[0]=c->lr; // 800C3C64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3C68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3C6C
  c->r[31]=c->r[3]|c->r[3]; // 800C3C70
  c->r[3]=c->r[3]+0x00000210u; // 800C3C74
  c->lr=0x800C3C7Cu; f_80221698(c); // 800C3C78
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C3C7C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3C80
  if (crb(c,2)) { goto L_800C3CA4; } // 800C3C84
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800C3C88
  cmps(c,0,(int32_t)c->r[0],0); // 800C3C8C
  if (crb(c,2)) { goto L_800C3CA4; } // 800C3C90
  c->r[0]=R32(c->r[31]+0x00000210u); // 800C3C94
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800C3C98
  W32(c->r[31]+0x00000210u,c->r[0]); // 800C3C9C
  goto L_800C3CB0; // 800C3CA0
L_800C3CA4:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800C3CA4
  c->r[0]=c->r[0]|0x80000000u; // 800C3CA8
  W32(c->r[31]+0x00000210u,c->r[0]); // 800C3CAC
L_800C3CB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3CB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3CB4
  c->lr=c->r[0]; // 800C3CB8
  c->r[1]=c->r[1]+0x00000010u; // 800C3CBC
  return; // 800C3CC0
}

// fn_800C3CC4
void f_800C3CC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3CC4
  c->r[0]=c->lr; // 800C3CC8
  c->r[4]=0u+0x00000000u; // 800C3CCC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C3CD0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C3CD4
  W32(c->r[1]+0x00000028u,c->r[30]); // 800C3CD8
  c->r[30]=c->r[3]|c->r[3]; // 800C3CDC
  W32(c->r[1]+0x00000024u,c->r[29]); // 800C3CE0
  W32(c->r[1]+0x00000020u,c->r[28]); // 800C3CE4
  c->lr=0x800C3CECu; f_801F57D0(c); // 800C3CE8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C3CEC
  c->r[3]=c->r[30]|c->r[30]; // 800C3CF0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C3CF4
  c->ctr=c->r[12]; // 800C3CF8
  if (true) { c->lr=0x800C3D00u; dispatch(c,c->ctr); } // 800C3CFC
  c->r[3]=c->r[30]|c->r[30]; // 800C3D00
  c->lr=0x800C3D08u; f_801F4B94(c); // 800C3D04
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C3D08
  c->r[4]=0u+0x00000003u; // 800C3D0C
  c->r[3]=0u+0x00000026u; // 800C3D10
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800C3D14
  c->r[0]=c->r[0]|0x00000800u; // 800C3D18
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C3D1C
  W8(c->r[30]+0x0000006Du,c->r[3]); // 800C3D20
  c->r[3]=c->r[30]|c->r[30]; // 800C3D24
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800C3D28
  c->lr=0x800C3D30u; f_801F58BC(c); // 800C3D2C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C3D30
  c->r[31]=0u+0x00000001u; // 800C3D34
  c->r[29]=0u+0x803A0000u; // 800C3D38
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800C3D3C
  c->r[4]=c->r[29]+0xFFFFD18Cu; // 800C3D40
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C3D44
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C3D48
  c->lr=0x800C3D50u; f_80256EC4(c); // 800C3D4C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800C3D50
  c->r[5]=0u+0x805D0000u; // 800C3D54
  c->r[4]=c->r[30]+0x0000002Cu; // 800C3D58
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800C3D5C
  c->r[3]=c->r[5]+0x000078B0u; // 800C3D60
  c->lr=0x800C3D68u; f_802351CC(c); // 800C3D64
  c->r[5]=R32(c->r[30]+0x00000394u); // 800C3D68
  c->r[28]=0u+0x00000000u; // 800C3D6C
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3D70
  c->r[4]=0u+0x00000000u; // 800C3D74
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800C3D78
  c->r[3]=c->r[30]|c->r[30]; // 800C3D7C
  c->f[2]=c->f[1]; // 800C3D80
  c->r[5]=0u+0x00000001u; // 800C3D84
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C3D88
  W8(c->r[30]+0x0000006Fu,c->r[28]); // 800C3D8C
  c->r[0]=c->r[0]|0x00000004u; // 800C3D90
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800C3D94
  {uint32_t ea=c->r[30]+0x000003F8u; WF32(ea,c->f[1]);} // 800C3D98
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C3D9C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C3DA0
  c->ctr=c->r[12]; // 800C3DA4
  if (true) { c->lr=0x800C3DACu; dispatch(c,c->ctr); } // 800C3DA8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C3DAC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C3DB0
  c->lr=0x800C3DB8u; f_802501B0(c); // 800C3DB4
  c->r[3]=c->r[30]|c->r[30]; // 800C3DB8
  c->lr=0x800C3DC0u; f_801F56F4(c); // 800C3DBC
  c->r[4]=c->r[29]+0xFFFFD18Cu; // 800C3DC0
  c->r[29]=0u+0x80550000u; // 800C3DC4
  c->r[3]=c->r[29]+0xFFFFC848u; // 800C3DC8
  c->r[5]=0u+0x00000004u; // 800C3DCC
  c->r[4]=c->r[4]+0x00000009u; // 800C3DD0
  c->r[6]=0u+0x00000000u; // 800C3DD4
  c->lr=0x800C3DDCu; f_8018D3E4(c); // 800C3DD8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800C3DDC
  W8(c->r[30]+0x0000007Cu,c->r[3]); // 800C3DE0
  cmpu(c,0,c->r[0],0x000000FFu); // 800C3DE4
  if (crb(c,2)) { goto L_800C3E84; } // 800C3DE8
  c->r[4]=R32(c->r[30]+0x00000060u); // 800C3DEC
  c->r[3]=c->r[29]+0xFFFFC848u; // 800C3DF0
  c->r[0]=R32(c->r[30]+0x00000064u); // 800C3DF4
  c->r[5]=c->r[1]+0x00000014u; // 800C3DF8
  c->r[6]=c->r[1]+0x00000008u; // 800C3DFC
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C3E00
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C3E04
  c->r[0]=R32(c->r[30]+0x00000068u); // 800C3E08
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C3E0C
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 800C3E10
  c->r[0]=R32(c->r[30]+0x00000030u); // 800C3E14
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C3E18
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C3E1C
  c->r[0]=R32(c->r[30]+0x00000034u); // 800C3E20
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C3E24
  c->r[4]=R8(c->r[30]+0x0000007Cu); // 800C3E28
  c->lr=0x800C3E30u; f_8018DBD0(c); // 800C3E2C
  c->r[3]=0u+0x80620000u; // 800C3E30
  c->r[4]=0u+0x00000001u; // 800C3E34
  c->r[3]=c->r[3]+0x00007688u; // 800C3E38
  c->r[3]=R32(c->r[3]+0x00000014u); // 800C3E3C
  c->lr=0x800C3E44u; f_8003560C(c); // 800C3E40
  cmpu(c,0,c->r[3],0x00000002u); // 800C3E44
  if (!crb(c,2)) { goto L_800C3E6C; } // 800C3E48
  c->r[0]=0u+0x000000FFu; // 800C3E4C
  W8(c->r[30]+0x0000007Du,c->r[31]); // 800C3E50
  c->r[4]=R8(c->r[30]+0x0000007Cu); // 800C3E54
  c->r[3]=c->r[29]+0xFFFFC848u; // 800C3E58
  W16(c->r[30]+0x0000007Eu,c->r[0]); // 800C3E5C
  c->r[5]=0u+0x000000FFu; // 800C3E60
  c->lr=0x800C3E68u; f_8018EBA0(c); // 800C3E64
  goto L_800C3E84; // 800C3E68
L_800C3E6C:;
  W16(c->r[30]+0x0000007Eu,c->r[28]); // 800C3E6C
  c->r[3]=c->r[29]+0xFFFFC848u; // 800C3E70
  c->r[4]=R8(c->r[30]+0x0000007Cu); // 800C3E74
  c->r[5]=0u+0x00000000u; // 800C3E78
  W8(c->r[30]+0x0000007Du,c->r[28]); // 800C3E7C
  c->lr=0x800C3E84u; f_8018EBA0(c); // 800C3E80
L_800C3E84:;
  c->r[0]=0u+0x00000001u; // 800C3E84
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 800C3E88
  W32(c->r[30]+0x00000444u,c->r[0]); // 800C3E8C
  c->lr=0x800C3E94u; f_8024E174(c); // 800C3E90
  W32(c->r[30]+0x00000438u,c->r[3]); // 800C3E94
  c->r[3]=c->r[30]|c->r[30]; // 800C3E98
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C3E9C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C3EA0
  c->ctr=c->r[12]; // 800C3EA4
  if (true) { c->lr=0x800C3EACu; dispatch(c,c->ctr); } // 800C3EA8
  c->r[3]=c->r[30]|c->r[30]; // 800C3EAC
  c->lr=0x800C3EB4u; f_800C490C(c); // 800C3EB0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C3EB4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C3EB8
  c->r[30]=R32(c->r[1]+0x00000028u); // 800C3EBC
  c->r[29]=R32(c->r[1]+0x00000024u); // 800C3EC0
  c->r[28]=R32(c->r[1]+0x00000020u); // 800C3EC4
  c->lr=c->r[0]; // 800C3EC8
  c->r[1]=c->r[1]+0x00000030u; // 800C3ECC
  return; // 800C3ED0
}

// fn_800C3ED4
void f_800C3ED4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3ED4
  c->r[0]=c->lr; // 800C3ED8
  c->r[5]=0u+0x00000000u; // 800C3EDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3EE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3EE4
  c->r[31]=c->r[3]|c->r[3]; // 800C3EE8
  c->r[3]=0u+0x000004A5u; // 800C3EEC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C3EF0
  c->r[4]=c->r[4]+0x0000010Cu; // 800C3EF4
  c->lr=0x800C3EFCu; f_8024EE50(c); // 800C3EF8
  cmps(c,0,(int32_t)c->r[3],0); // 800C3EFC
  if (crb(c,2)) { goto L_800C3F0C; } // 800C3F00
  c->r[3]=0u+0x00000000u; // 800C3F04
  goto L_800C3F18; // 800C3F08
L_800C3F0C:;
  c->r[3]=c->r[31]+0x00000210u; // 800C3F0C
  c->r[4]=0u+0x000000E1u; // 800C3F10
  c->lr=0x800C3F18u; f_80221630(c); // 800C3F14
L_800C3F18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3F18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3F1C
  c->lr=c->r[0]; // 800C3F20
  c->r[1]=c->r[1]+0x00000010u; // 800C3F24
  return; // 800C3F28
}

// fn_800C3F2C
void f_800C3F2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3F2C
  c->r[0]=c->lr; // 800C3F30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3F34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3F38
  c->r[31]=c->r[3]|c->r[3]; // 800C3F3C
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800C3F40
  c->r[12]=R32(c->r[12]+0x00000068u); // 800C3F44
  c->ctr=c->r[12]; // 800C3F48
  if (true) { c->lr=0x800C3F50u; dispatch(c,c->ctr); } // 800C3F4C
  c->r[3]=c->r[31]|c->r[31]; // 800C3F50
  c->lr=0x800C3F58u; f_801F4C0C(c); // 800C3F54
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800C3F58
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800C3F5C
  if (crb(c,2)) { goto L_800C3F80; } // 800C3F60
  c->r[3]=0u+0x805D0000u; // 800C3F64
  c->r[3]=c->r[3]+0x00003F6Cu; // 800C3F68
  c->lr=0x800C3F70u; f_80037AF0(c); // 800C3F6C
  cmpu(c,0,c->r[3],c->r[31]); // 800C3F70
  if (crb(c,2)) { goto L_800C3F80; } // 800C3F74
  c->r[3]=c->r[31]|c->r[31]; // 800C3F78
  c->lr=0x800C3F80u; f_800C47BC(c); // 800C3F7C
L_800C3F80:;
  c->r[3]=c->r[31]|c->r[31]; // 800C3F80
  c->lr=0x800C3F88u; f_801F56F4(c); // 800C3F84
  c->r[3]=c->r[31]|c->r[31]; // 800C3F88
  c->lr=0x800C3F90u; f_800C49B0(c); // 800C3F8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3F90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3F94
  c->lr=c->r[0]; // 800C3F98
  c->r[1]=c->r[1]+0x00000010u; // 800C3F9C
  return; // 800C3FA0
}

// fn_800C3FA4
void f_800C3FA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3FA4
  c->r[0]=c->lr; // 800C3FA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3FAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3FB0
  c->r[31]=c->r[3]|c->r[3]; // 800C3FB4
  c->lr=0x800C3FBCu; f_801F4C78(c); // 800C3FB8
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800C3FBC
  cmpu(c,0,c->r[4],0x000000FFu); // 800C3FC0
  if (crb(c,2)) { goto L_800C3FDC; } // 800C3FC4
  c->r[3]=0u+0x80550000u; // 800C3FC8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C3FCC
  c->lr=0x800C3FD4u; f_8018D694(c); // 800C3FD0
  c->r[0]=0u+0x000000FFu; // 800C3FD4
  W8(c->r[31]+0x0000007Cu,c->r[0]); // 800C3FD8
L_800C3FDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3FDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3FE0
  c->lr=c->r[0]; // 800C3FE4
  c->r[1]=c->r[1]+0x00000010u; // 800C3FE8
  return; // 800C3FEC
}

// fn_800C3FF0
void f_800C3FF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3FF0
  c->r[0]=c->lr; // 800C3FF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C3FF8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C3FFC
  c->r[31]=c->r[3]|c->r[3]; // 800C4000
  c->lr=0x800C4008u; f_801F4F28(c); // 800C4004
  c->r[8]=R32(c->r[31]+0x000003C0u); // 800C4008
  cmps(c,0,(int32_t)c->r[8],101); // 800C400C
  if (crb(c,2)) { goto L_800C4084; } // 800C4010
  if (!crb(c,0)) { goto L_800C4024; } // 800C4014
  cmps(c,0,(int32_t)c->r[8],100); // 800C4018
  if (!crb(c,0)) { goto L_800C4030; } // 800C401C
  goto L_800C40C8; // 800C4020
L_800C4024:;
  cmps(c,0,(int32_t)c->r[8],103); // 800C4024
  if (!crb(c,0)) { goto L_800C40C8; } // 800C4028
  goto L_800C409C; // 800C402C
L_800C4030:;
  c->r[6]=R32(c->r[31]+0x00000394u); // 800C4030
  c->r[0]=0u+0x00000001u; // 800C4034
  W8(c->r[31]+0x00000080u,c->r[0]); // 800C4038
  c->r[3]=c->r[31]+0x0000002Cu; // 800C403C
  c->r[5]=c->r[6]+0x00000074u; // 800C4040
  c->r[4]=c->r[31]+0x00000060u; // 800C4044
  W16(c->r[31]+0x000003BCu,c->r[8]); // 800C4048
  c->r[6]=c->r[6]+0x000000B0u; // 800C404C
  c->r[7]=0u+0x00000000u; // 800C4050
  c->lr=0x800C4058u; f_8002BE64(c); // 800C4054
  c->r[7]=0u+0x803D0000u; // 800C4058
  {uint32_t ea=c->r[7]+0x00000C18u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C405C
  c->r[3]=c->r[31]|c->r[31]; // 800C4060
  c->r[4]=c->r[1]+0x00000014u; // 800C4064
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C4068
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C406C
  W32(c->r[1]+0x00000014u,c->r[6]); // 800C4070
  W32(c->r[1]+0x00000018u,c->r[5]); // 800C4074
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C4078
  c->lr=0x800C4080u; f_800C40DC(c); // 800C407C
  goto L_800C40C8; // 800C4080
L_800C4084:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C4084
  c->r[3]=c->r[31]|c->r[31]; // 800C4088
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C408C
  c->ctr=c->r[12]; // 800C4090
  if (true) { c->lr=0x800C4098u; dispatch(c,c->ctr); } // 800C4094
  goto L_800C40C8; // 800C4098
L_800C409C:;
  W16(c->r[31]+0x000003BCu,c->r[8]); // 800C409C
  c->r[7]=0u+0x803D0000u; // 800C40A0
  c->r[3]=c->r[31]|c->r[31]; // 800C40A4
  c->r[4]=c->r[1]+0x00000008u; // 800C40A8
  {uint32_t ea=c->r[7]+0x00000C24u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C40AC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C40B0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C40B4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C40B8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C40BC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C40C0
  c->lr=0x800C40C8u; f_800C40DC(c); // 800C40C4
L_800C40C8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C40C8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C40CC
  c->lr=c->r[0]; // 800C40D0
  c->r[1]=c->r[1]+0x00000030u; // 800C40D4
  return; // 800C40D8
}

// fn_800C40DC
void f_800C40DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C40DC
  c->r[0]=c->lr; // 800C40E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C40E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C40E8
  c->r[31]=c->r[4]|c->r[4]; // 800C40EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C40F0
  c->r[30]=c->r[3]|c->r[3]; // 800C40F4
  c->r[3]=c->r[31]|c->r[31]; // 800C40F8
  c->lr=0x800C4100u; f_802B9FDC(c); // 800C40FC
  cmps(c,0,(int32_t)c->r[3],0); // 800C4100
  if (crb(c,2)) { goto L_800C4120; } // 800C4104
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C4108
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C410C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800C4110
  W32(c->r[30]+0x00000020u,c->r[0]); // 800C4114
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C4118
  W32(c->r[30]+0x00000024u,c->r[0]); // 800C411C
L_800C4120:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4120
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C4124
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C4128
  c->lr=c->r[0]; // 800C412C
  c->r[1]=c->r[1]+0x00000010u; // 800C4130
  return; // 800C4134
}

// fn_800C4138
void f_800C4138(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4138
  c->r[0]=c->lr; // 800C413C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C4140
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800C4144
  c->r[31]=c->r[3]|c->r[3]; // 800C4148
  W32(c->r[1]+0x00000038u,c->r[30]); // 800C414C
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800C4150
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800C4154
  if (!crb(c,2)) { goto L_800C4290; } // 800C4158
  c->lr=0x800C4160u; f_800C4850(c); // 800C415C
  cmps(c,0,(int32_t)c->r[3],-2); // 800C4160
  c->r[30]=c->r[3]|c->r[3]; // 800C4164
  if (!crb(c,2)) { goto L_800C4184; } // 800C4168
  c->r[3]=0u+0x80620000u; // 800C416C
  c->r[4]=0u+0x00000055u; // 800C4170
  c->r[3]=c->r[3]+0x00007688u; // 800C4174
  c->r[3]=R32(c->r[3]+0x00000014u); // 800C4178
  c->lr=0x800C4180u; f_80038A08(c); // 800C417C
  goto L_800C4198; // 800C4180
L_800C4184:;
  c->r[3]=0u+0x80620000u; // 800C4184
  c->r[4]=0u+0x00000055u; // 800C4188
  c->r[3]=c->r[3]+0x00007688u; // 800C418C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800C4190
  c->lr=0x800C4198u; f_8003DCAC(c); // 800C4194
L_800C4198:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C4198
  if (!crb(c,2)) { goto L_800C41B8; } // 800C419C
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800C41A0
  c->r[0]=0u+0x00000001u; // 800C41A4
  W8(c->r[31]+0x0000007Du,c->r[0]); // 800C41A8
  c->r[0]=rotl(c->r[3],0)&0x00007FFFu; // 800C41AC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800C41B0
  goto L_800C4200; // 800C41B4
L_800C41B8:;
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800C41B8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 800C41BC
  if (!crb(c,2)) { goto L_800C41CC; } // 800C41C0
  cmps(c,0,(int32_t)c->r[30],-1); // 800C41C4
  if (!crb(c,2)) { goto L_800C41EC; } // 800C41C8
L_800C41CC:;
  cmps(c,0,(int32_t)c->r[30],-1); // 800C41CC
  if (!crb(c,2)) { goto L_800C41E0; } // 800C41D0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800C41D4
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800C41D8
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800C41DC
L_800C41E0:;
  c->r[0]=0u+0x00000000u; // 800C41E0
  W8(c->r[31]+0x0000007Du,c->r[0]); // 800C41E4
  goto L_800C4200; // 800C41E8
L_800C41EC:;
  c->r[0]=R8(c->r[31]+0x0000007Du); // 800C41EC
  cmps(c,0,(int32_t)c->r[0],0); // 800C41F0
  if (crb(c,2)) { goto L_800C4200; } // 800C41F4
  c->r[0]=c->r[3]|0x00008000u; // 800C41F8
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800C41FC
L_800C4200:;
  c->r[0]=R8(c->r[31]+0x0000007Du); // 800C4200
  cmps(c,0,(int32_t)c->r[0],0); // 800C4204
  if (!crb(c,2)) { goto L_800C4244; } // 800C4208
  c->r[3]=R16(c->r[31]+0x0000007Eu); // 800C420C
  cmpu(c,0,c->r[3],0x00000010u); // 800C4210
  if (!crb(c,0)) { goto L_800C4224; } // 800C4214
  c->r[0]=0u+0x00000000u; // 800C4218
  W16(c->r[31]+0x0000007Eu,c->r[0]); // 800C421C
  goto L_800C422C; // 800C4220
L_800C4224:;
  c->r[0]=c->r[3]+0xFFFFFFF0u; // 800C4224
  W16(c->r[31]+0x0000007Eu,c->r[0]); // 800C4228
L_800C422C:;
  c->r[3]=0u+0x80620000u; // 800C422C
  c->r[4]=0u+0x00000025u; // 800C4230
  c->r[3]=c->r[3]+0x00007688u; // 800C4234
  c->r[3]=R32(c->r[3]+0x00000014u); // 800C4238
  c->lr=0x800C4240u; f_8003DCAC(c); // 800C423C
  goto L_800C4278; // 800C4240
L_800C4244:;
  c->r[3]=R16(c->r[31]+0x0000007Eu); // 800C4244
  c->r[3]=c->r[3]+0x00000010u; // 800C4248
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800C424C
  W16(c->r[31]+0x0000007Eu,c->r[3]); // 800C4250
  cmpu(c,0,c->r[0],0x000000FFu); // 800C4254
  if (!crb(c,1)) { goto L_800C4264; } // 800C4258
  c->r[0]=0u+0x000000FFu; // 800C425C
  W16(c->r[31]+0x0000007Eu,c->r[0]); // 800C4260
L_800C4264:;
  c->r[3]=0u+0x80620000u; // 800C4264
  c->r[4]=0u+0x00000025u; // 800C4268
  c->r[3]=c->r[3]+0x00007688u; // 800C426C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800C4270
  c->lr=0x800C4278u; f_80038A08(c); // 800C4274
L_800C4278:;
  c->r[0]=R16(c->r[31]+0x0000007Eu); // 800C4278
  c->r[3]=0u+0x80550000u; // 800C427C
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800C4280
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C4284
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800C4288
  c->lr=0x800C4290u; f_8018EBA0(c); // 800C428C
L_800C4290:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C4290
  c->r[3]=c->r[31]|c->r[31]; // 800C4294
  c->lr=0x800C429Cu; f_801F5418(c); // 800C4298
  cmps(c,0,(int32_t)c->r[3],0); // 800C429C
  if (!crb(c,0)) { goto L_800C4388; } // 800C42A0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800C42A4
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C42A8
  {uint32_t ea=c->r[2]+0xFFFF9E54u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C42AC
  c->r[0]=c->r[0]|0x00000080u; // 800C42B0
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800C42B4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C42B8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800C42BC
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800C42C0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C42C4
  c->lr=0x800C42CCu; f_8025037C(c); // 800C42C8
  c->r[6]=R32(c->r[31]+0x00000394u); // 800C42CC
  c->r[3]=c->r[1]+0x00000020u; // 800C42D0
  c->r[4]=c->r[31]+0x00000060u; // 800C42D4
  c->r[5]=c->r[1]+0x0000002Cu; // 800C42D8
  c->r[6]=c->r[6]+0x000000B0u; // 800C42DC
  c->r[7]=0u+0x00000000u; // 800C42E0
  c->lr=0x800C42E8u; f_8002BE64(c); // 800C42E4
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800C42E8
  c->r[3]=0u+0x805D0000u; // 800C42EC
  c->r[0]=R32(c->r[31]+0x00000030u); // 800C42F0
  c->r[3]=c->r[3]+0x00003F6Cu; // 800C42F4
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C42F8
  c->r[4]=c->r[31]|c->r[31]; // 800C42FC
  W32(c->r[1]+0x00000014u,c->r[5]); // 800C4300
  c->r[7]=c->r[1]+0x00000014u; // 800C4304
  c->r[6]=0u+0x00000017u; // 800C4308
  c->r[8]=0u+0x00000000u; // 800C430C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C4310
  c->r[0]=R32(c->r[31]+0x00000034u); // 800C4314
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C4318
  c->r[3]=R32(c->r[31]+0x00000438u); // 800C431C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800C4320
  c->lr=0x800C4328u; f_801FA6A4(c); // 800C4324
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4328
  c->r[6]=0u+0x803A0000u; // 800C432C
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C4330
  c->r[5]=c->r[31]+0x00000044u; // 800C4334
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4338
  c->r[6]=c->r[6]+0xFFFFD180u; // 800C433C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800C4340
  c->r[3]=R32(c->r[31]+0x00000438u); // 800C4344
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800C4348
  c->r[4]=0u+0x00000000u; // 800C434C
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 800C4350
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C4354
  c->lr=0x800C435Cu; f_801FBEC0(c); // 800C4358
  c->r[7]=0u+0x803D0000u; // 800C435C
  {uint32_t ea=c->r[7]+0x00000C30u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C4360
  c->r[3]=c->r[31]|c->r[31]; // 800C4364
  c->r[4]=c->r[1]+0x00000008u; // 800C4368
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C436C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C4370
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C4374
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C4378
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C437C
  c->lr=0x800C4384u; f_800C40DC(c); // 800C4380
  goto L_800C43EC; // 800C4384
L_800C4388:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C4388
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800C438C
  cmps(c,0,(int32_t)c->r[0],0); // 800C4390
  if (crb(c,2)) { goto L_800C43EC; } // 800C4394
  c->r[4]=R8(c->r[31]+0x0000007Cu); // 800C4398
  cmpu(c,0,c->r[4],0x000000FFu); // 800C439C
  if (crb(c,2)) { goto L_800C43B8; } // 800C43A0
  c->r[3]=0u+0x80550000u; // 800C43A4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C43A8
  c->lr=0x800C43B0u; f_8018D694(c); // 800C43AC
  c->r[0]=0u+0x000000FFu; // 800C43B0
  W8(c->r[31]+0x0000007Cu,c->r[0]); // 800C43B4
L_800C43B8:;
  c->r[3]=c->r[31]|c->r[31]; // 800C43B8
  c->lr=0x800C43C0u; f_801F5B14(c); // 800C43BC
  c->r[30]=0u+0x805D0000u; // 800C43C0
  c->r[3]=c->r[30]+0x00003F6Cu; // 800C43C4
  c->lr=0x800C43CCu; f_800447E4(c); // 800C43C8
  cmpu(c,0,c->r[3],0x00000001u); // 800C43CC
  if (!crb(c,2)) { goto L_800C43E0; } // 800C43D0
  c->r[0]=0u+0x00000000u; // 800C43D4
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800C43D8
  goto L_800C43EC; // 800C43DC
L_800C43E0:;
  c->r[3]=c->r[30]+0x00003F6Cu; // 800C43E0
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800C43E4
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800C43E8
L_800C43EC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C43EC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800C43F0
  c->r[30]=R32(c->r[1]+0x00000038u); // 800C43F4
  c->lr=c->r[0]; // 800C43F8
  c->r[1]=c->r[1]+0x00000040u; // 800C43FC
  return; // 800C4400
}

// fn_800C4404
void f_800C4404(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4404
  c->r[0]=c->lr; // 800C4408
  c->r[4]=0u+0x805D0000u; // 800C440C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C4410
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C4414
  c->r[31]=c->r[3]|c->r[3]; // 800C4418
  c->r[3]=c->r[4]+0x00003F6Cu; // 800C441C
  c->lr=0x800C4424u; f_80037AF0(c); // 800C4420
  cmpu(c,0,c->r[3],c->r[31]); // 800C4424
  if (!crb(c,2)) { goto L_800C4498; } // 800C4428
  c->r[0]=0u+0x00000001u; // 800C442C
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4430
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800C4434
  c->r[3]=c->r[31]|c->r[31]; // 800C4438
  c->f[2]=c->f[1]; // 800C443C
  c->r[4]=0u+0x00000000u; // 800C4440
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C4444
  c->r[5]=0u+0x00000001u; // 800C4448
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C444C
  c->ctr=c->r[12]; // 800C4450
  if (true) { c->lr=0x800C4458u; dispatch(c,c->ctr); } // 800C4454
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C4458
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C445C
  c->lr=0x800C4464u; f_802501B0(c); // 800C4460
  c->r[7]=0u+0x803D0000u; // 800C4464
  {uint32_t ea=c->r[7]+0x00000C3Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800C4468
  c->r[3]=c->r[31]|c->r[31]; // 800C446C
  c->r[4]=c->r[1]+0x00000014u; // 800C4470
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C4474
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C4478
  W32(c->r[1]+0x00000014u,c->r[6]); // 800C447C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800C4480
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C4484
  c->lr=0x800C448Cu; f_800C40DC(c); // 800C4488
  c->r[3]=c->r[31]|c->r[31]; // 800C448C
  c->lr=0x800C4494u; f_800C4138(c); // 800C4490
  goto L_800C4530; // 800C4494
L_800C4498:;
  c->r[3]=R32(c->r[31]+0x00000438u); // 800C4498
  c->r[4]=0u+0x00000000u; // 800C449C
  c->lr=0x800C44A4u; f_801FAF00(c); // 800C44A0
  cmps(c,0,(int32_t)c->r[3],0); // 800C44A4
  if (!crb(c,2)) { goto L_800C4510; } // 800C44A8
  c->r[3]=c->r[31]|c->r[31]; // 800C44AC
  c->r[4]=0u+0x00000018u; // 800C44B0
  c->lr=0x800C44B8u; f_801F5AB4(c); // 800C44B4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C44B8
  c->r[3]=c->r[31]+0x0000002Cu; // 800C44BC
  c->r[4]=c->r[4]+0x0000005Cu; // 800C44C0
  c->lr=0x800C44C8u; f_800361A0(c); // 800C44C4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C44C8
  c->r[3]=c->r[31]+0x00000060u; // 800C44CC
  c->r[4]=c->r[4]+0x00000068u; // 800C44D0
  c->lr=0x800C44D8u; f_800361A0(c); // 800C44D4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C44D8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C44DC
  c->lr=0x800C44E4u; f_8025037C(c); // 800C44E0
  c->r[7]=0u+0x803D0000u; // 800C44E4
  {uint32_t ea=c->r[7]+0x00000C48u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C44E8
  c->r[3]=c->r[31]|c->r[31]; // 800C44EC
  c->r[4]=c->r[1]+0x00000008u; // 800C44F0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C44F4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C44F8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C44FC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C4500
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C4504
  c->lr=0x800C450Cu; f_800C40DC(c); // 800C4508
  goto L_800C4530; // 800C450C
L_800C4510:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C4510
  c->r[3]=c->r[31]+0x0000002Cu; // 800C4514
  c->r[4]=c->r[4]+0x0000005Cu; // 800C4518
  c->lr=0x800C4520u; f_800361A0(c); // 800C451C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C4520
  c->r[3]=c->r[31]+0x00000060u; // 800C4524
  c->r[4]=c->r[4]+0x00000068u; // 800C4528
  c->lr=0x800C4530u; f_800361A0(c); // 800C452C
L_800C4530:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C4530
  c->r[3]=c->r[31]+0x0000002Cu; // 800C4534
  c->r[4]=c->r[4]+0x0000005Cu; // 800C4538
  c->lr=0x800C4540u; f_800361A0(c); // 800C453C
  c->r[3]=c->r[31]|c->r[31]; // 800C4540
  c->r[4]=0u+0x00000000u; // 800C4544
  c->lr=0x800C454Cu; f_801F7C00(c); // 800C4548
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C454C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C4550
  c->lr=c->r[0]; // 800C4554
  c->r[1]=c->r[1]+0x00000030u; // 800C4558
  return; // 800C455C
}

// fn_800C4560
void f_800C4560(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4560
  c->r[0]=c->lr; // 800C4564
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C4568
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800C456C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800C4570
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800C4574
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800C4578
  c->r[4]=0u+0x80620000u; // 800C457C
  c->r[4]=c->r[4]+0x000079C0u; // 800C4580
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C4584
  c->r[31]=c->r[3]|c->r[3]; // 800C4588
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C458C
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4590
  c->f[1]=-c->f[1]; // 800C4594
  c->f[2]=-c->f[0]; // 800C4598
  c->lr=0x800C45A0u; f_8005C22C(c); // 800C459C
  c->f[2]=-c->f[1]; // 800C45A0
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C45A4
  fcmp(c,0,c->f[2],c->f[0]); // 800C45A8
  if (!crb(c,1)) { goto L_800C45C4; } // 800C45AC
  {uint32_t ea=c->r[2]+0xFFFF9E5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C45B0
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C45B4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800C45B8
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800C45BC
  goto L_800C45DC; // 800C45C0
L_800C45C4:;
  {uint32_t ea=c->r[2]+0xFFFF9E5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C45C4
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C45C8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800C45CC
  {uint32_t ea=c->r[2]+0xFFFF9E64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C45D0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800C45D4
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 800C45D8
L_800C45DC:;
  {uint32_t ea=c->r[2]+0xFFFF9E5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C45DC
  fcmp(c,0,c->f[31],c->f[0]); // 800C45E0
  if (!crb(c,1)) { goto L_800C45F0; } // 800C45E4
  {uint32_t ea=c->r[2]+0xFFFF9E64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C45E8
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800C45EC
L_800C45F0:;
  c->r[0]=R8(c->r[31]+0x00000080u); // 800C45F0
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C45F4
  cmps(c,0,(int32_t)c->r[0],0); // 800C45F8
  if (crb(c,2)) { goto L_800C4614; } // 800C45FC
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4600
  c->r[0]=0u+0x00000000u; // 800C4604
  W8(c->r[31]+0x00000080u,c->r[0]); // 800C4608
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800C460C
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[31]);} // 800C4610
L_800C4614:;
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4614
  {uint32_t ea=c->r[2]+0xFFFF9E5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4618
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[1]); // 800C461C
  fcmp(c,0,c->f[31],c->f[0]); // 800C4620
  if (!crb(c,1)) { goto L_800C4634; } // 800C4624
  {uint32_t ea=c->r[2]+0xFFFF9E64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4628
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800C462C
  goto L_800C4648; // 800C4630
L_800C4634:;
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4634
  fcmp(c,0,c->f[31],c->f[0]); // 800C4638
  if (!crb(c,0)) { goto L_800C4648; } // 800C463C
  {uint32_t ea=c->r[2]+0xFFFF9E64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4640
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 800C4644
L_800C4648:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4648
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800C464C
  c->lr=0x800C4654u; f_8002C1B0(c); // 800C4650
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C4654
  fcmp(c,0,c->f[1],c->f[2]); // 800C4658
  if (!crb(c,1)) { goto L_800C4684; } // 800C465C
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4660
  fcmp(c,0,c->f[31],c->f[0]); // 800C4664
  if (!crb(c,0)) { goto L_800C4678; } // 800C4668
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800C466C
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800C4670
  goto L_800C4688; // 800C4674
L_800C4678:;
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800C4678
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800C467C
  goto L_800C4688; // 800C4680
L_800C4684:;
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[31]);} // 800C4684
L_800C4688:;
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4688
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C468C
  fcmp(c,0,c->f[1],c->f[0]); // 800C4690
  if (!crb(c,1)) { goto L_800C46A0; } // 800C4694
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800C4698
  goto L_800C46BC; // 800C469C
L_800C46A0:;
  {uint32_t ea=c->r[2]+0xFFFF9E74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C46A0
  fcmp(c,0,c->f[1],c->f[0]); // 800C46A4
  if (!crb(c,0)) { goto L_800C46BC; } // 800C46A8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800C46AC
  {uint32_t ea=c->r[31]+0x000003F8u; WF32(ea,c->f[0]);} // 800C46B0
  c->r[0]=c->r[0]|0x00004000u; // 800C46B4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800C46B8
L_800C46BC:;
  {uint32_t ea=c->r[2]+0xFFFF9E78u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C46BC
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C46C0
  c->f[0]=c->ps1[0]=S(c->f[30]/c->f[1]); // 800C46C4
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800C46C8
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800C46CC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C46D0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800C46D4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800C46D8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800C46DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C46E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800C46E4
  if (crb(c,2)) { goto L_800C4714; } // 800C46E8
  c->r[0]=R8(c->r[31]+0x00000029u); // 800C46EC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800C46F0
  if (crb(c,2)) { goto L_800C4714; } // 800C46F4
  W8(c->r[31]+0x00000029u,c->r[3]); // 800C46F8
  c->r[3]=c->r[31]|c->r[31]; // 800C46FC
  c->r[4]=0u+0x00000004u; // 800C4700
  c->r[5]=0u+0x00000013u; // 800C4704
  c->r[6]=0u+0x00000001u; // 800C4708
  c->r[7]=0u+0x00000001u; // 800C470C
  c->lr=0x800C4714u; f_8017900C(c); // 800C4710
L_800C4714:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C4714
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C4718
  c->lr=0x800C4720u; f_802501B0(c); // 800C471C
  {uint32_t ea=c->r[31]+0x000003F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C4720
  {uint32_t ea=c->r[2]+0xFFFF9E7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4724
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4728
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800C472C
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[2]);} // 800C4730
  fcmp(c,0,c->f[1],c->f[0]); // 800C4734
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[1]);} // 800C4738
  if (!crb(c,0)) { goto L_800C474C; } // 800C473C
  {uint32_t ea=c->r[2]+0xFFFF9E64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4740
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800C4744
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800C4748
L_800C474C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800C474C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800C4750
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800C4754
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800C4758
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C475C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C4760
  c->lr=c->r[0]; // 800C4764
  c->r[1]=c->r[1]+0x00000040u; // 800C4768
  return; // 800C476C
}

// fn_800C4770
void f_800C4770(Ctx* __restrict c) {
  return; // 800C4770
}

// fn_800C4774
void f_800C4774(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4774
  c->r[0]=c->lr; // 800C4778
  c->r[7]=0u+0x803D0000u; // 800C477C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C4780
  c->r[0]=0u+0x00000000u; // 800C4784
  c->r[4]=c->r[1]+0x00000008u; // 800C4788
  W16(c->r[3]+0x000003BCu,c->r[0]); // 800C478C
  {uint32_t ea=c->r[7]+0x00000C54u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C4790
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C4794
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C4798
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C479C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C47A0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C47A4
  c->lr=0x800C47ACu; f_800C40DC(c); // 800C47A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C47AC
  c->lr=c->r[0]; // 800C47B0
  c->r[1]=c->r[1]+0x00000020u; // 800C47B4
  return; // 800C47B8
}

// fn_800C47BC
void f_800C47BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C47BC
  c->r[0]=c->lr; // 800C47C0
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C47C4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800C47C8
  W32(c->r[1]+0x00000068u,c->r[30]); // 800C47CC
  c->r[30]=c->r[3]|c->r[3]; // 800C47D0
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800C47D4
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 800C47D8
  cmps(c,0,(int32_t)c->r[0],128); // 800C47DC
  if (!crb(c,2)) { goto L_800C4808; } // 800C47E0
  c->r[3]=0u+0x80620000u; // 800C47E4
  c->r[3]=c->r[3]+0x00007688u; // 800C47E8
  c->r[3]=R32(c->r[3]+0x00000014u); // 800C47EC
  cmps(c,0,(int32_t)c->r[3],0); // 800C47F0
  if (crb(c,2)) { goto L_800C4808; } // 800C47F4
  c->r[4]=0u+0x00000002u; // 800C47F8
  c->lr=0x800C4800u; f_80037670(c); // 800C47FC
  cmps(c,0,(int32_t)c->r[3],0); // 800C4800
  if (!crb(c,2)) { goto L_800C4838; } // 800C4804
L_800C4808:;
  c->r[31]=0u+0x80550000u; // 800C4808
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C480C
  c->r[31]=c->r[31]+0x00003D60u; // 800C4810
  c->r[5]=c->r[30]|c->r[30]; // 800C4814
  c->r[3]=c->r[31]+0x00000010u; // 800C4818
  c->r[6]=c->r[30]+0x0000002Cu; // 800C481C
  c->r[7]=c->r[1]+0x00000008u; // 800C4820
  c->r[4]=0u+0x000001FFu; // 800C4824
  c->lr=0x800C482Cu; f_80226910(c); // 800C4828
  c->r[3]=c->r[31]+0x00000010u; // 800C482C
  c->r[4]=c->r[1]+0x00000008u; // 800C4830
  c->lr=0x800C4838u; f_80226D68(c); // 800C4834
L_800C4838:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C4838
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800C483C
  c->r[30]=R32(c->r[1]+0x00000068u); // 800C4840
  c->lr=c->r[0]; // 800C4844
  c->r[1]=c->r[1]+0x00000070u; // 800C4848
  return; // 800C484C
}

// fn_800C4850
void f_800C4850(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4850
  c->r[0]=c->lr; // 800C4854
  c->r[5]=0u+0x80620000u; // 800C4858
  c->r[4]=0u+0x00000001u; // 800C485C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C4860
  c->r[5]=c->r[5]+0x00007688u; // 800C4864
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C4868
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C486C
  c->r[30]=c->r[3]|c->r[3]; // 800C4870
  c->r[3]=R32(c->r[5]+0x00000014u); // 800C4874
  c->lr=0x800C487Cu; f_8003560C(c); // 800C4878
  cmpu(c,0,c->r[3],0x00000002u); // 800C487C
  if (crb(c,2)) { goto L_800C488C; } // 800C4880
  c->r[3]=0u+0xFFFFFFFFu; // 800C4884
  goto L_800C48F4; // 800C4888
L_800C488C:;
  c->r[31]=0u+0x805D0000u; // 800C488C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800C4890
  c->lr=0x800C4898u; f_80045264(c); // 800C4894
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800C4898
  cmpu(c,0,c->r[0],0x00000017u); // 800C489C
  if (!crb(c,2)) { goto L_800C48F0; } // 800C48A0
  c->r[3]=c->r[31]+0x00003F6Cu; // 800C48A4
  c->lr=0x800C48ACu; f_800567B4(c); // 800C48A8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800C48AC
  cmpu(c,0,c->r[0],0x0000000Du); // 800C48B0
  if (!crb(c,2)) { goto L_800C48F0; } // 800C48B4
  c->r[4]=c->r[31]+0x00003F6Cu; // 800C48B8
  c->r[3]=c->r[30]+0x0000002Cu; // 800C48BC
  c->r[4]=c->r[4]+0x0000002Cu; // 800C48C0
  c->r[5]=c->r[1]+0x00000008u; // 800C48C4
  c->lr=0x800C48CCu; f_80296A70(c); // 800C48C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C48CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C48D0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 800C48D4
  {uint32_t ea=c->r[2]+0xFFFF9E84u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C48D8
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[1],c->f[2])); // 800C48DC
  fcmp(c,0,c->f[1],c->f[0]); // 800C48E0
  if (!crb(c,0)) { goto L_800C48F0; } // 800C48E4
  c->r[3]=0u+0xFFFFFFFEu; // 800C48E8
  goto L_800C48F4; // 800C48EC
L_800C48F0:;
  c->r[3]=0u+0x00000000u; // 800C48F0
L_800C48F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C48F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C48F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C48FC
  c->lr=c->r[0]; // 800C4900
  c->r[1]=c->r[1]+0x00000020u; // 800C4904
  return; // 800C4908
}

// fn_800C490C
void f_800C490C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C490C
  c->r[0]=c->lr; // 800C4910
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4914
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C4918
  c->r[31]=c->r[3]|c->r[3]; // 800C491C
  c->r[3]=c->r[3]+0x00000210u; // 800C4920
  c->lr=0x800C4928u; f_8004BAD4(c); // 800C4924
  cmps(c,0,(int32_t)c->r[3],0); // 800C4928
  if (crb(c,2)) { goto L_800C499C; } // 800C492C
  c->r[0]=R32(c->r[31]+0x00000210u); // 800C4930
  c->r[4]=c->r[31]|c->r[31]; // 800C4934
  c->r[3]=c->r[31]+0x00000210u; // 800C4938
  c->r[0]=c->r[0]|0xAA000000u; // 800C493C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800C4940
  c->lr=0x800C4948u; f_80043E44(c); // 800C4944
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4948
  c->r[3]=c->r[31]+0x00000210u; // 800C494C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C4950
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C4954
  c->lr=0x800C495Cu; f_80043E34(c); // 800C4958
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C495C
  c->r[4]=0u+0x803A0000u; // 800C4960
  c->r[4]=c->r[4]+0xFFFFD18Cu; // 800C4964
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C4968
  c->r[4]=c->r[4]+0x0000000Du; // 800C496C
  c->lr=0x800C4974u; f_80256EC4(c); // 800C4970
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C4974
  c->r[5]=c->r[3]|c->r[3]; // 800C4978
  c->r[3]=c->r[31]+0x00000210u; // 800C497C
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800C4980
  c->lr=0x800C4988u; f_8004BAC8(c); // 800C4984
  {uint32_t ea=c->r[2]+0xFFFF9E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4988
  c->r[3]=c->r[31]+0x00000210u; // 800C498C
  c->f[2]=c->f[1]; // 800C4990
  c->f[3]=c->f[1]; // 800C4994
  c->lr=0x800C499Cu; f_80043E24(c); // 800C4998
L_800C499C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C499C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C49A0
  c->lr=c->r[0]; // 800C49A4
  c->r[1]=c->r[1]+0x00000010u; // 800C49A8
  return; // 800C49AC
}

// fn_800C49B0
void f_800C49B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C49B0
  c->r[0]=c->lr; // 800C49B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C49B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C49BC
  c->r[31]=c->r[3]|c->r[3]; // 800C49C0
  c->r[3]=c->r[3]+0x00000210u; // 800C49C4
  c->lr=0x800C49CCu; f_80221698(c); // 800C49C8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C49CC
  cmps(c,0,(int32_t)c->r[3],0); // 800C49D0
  if (crb(c,2)) { goto L_800C49F4; } // 800C49D4
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800C49D8
  cmps(c,0,(int32_t)c->r[0],0); // 800C49DC
  if (crb(c,2)) { goto L_800C49F4; } // 800C49E0
  c->r[0]=R32(c->r[31]+0x00000210u); // 800C49E4
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800C49E8
  W32(c->r[31]+0x00000210u,c->r[0]); // 800C49EC
  goto L_800C4A00; // 800C49F0
L_800C49F4:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800C49F4
  c->r[0]=c->r[0]|0x80000000u; // 800C49F8
  W32(c->r[31]+0x00000210u,c->r[0]); // 800C49FC
L_800C4A00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4A00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C4A04
  c->lr=c->r[0]; // 800C4A08
  c->r[1]=c->r[1]+0x00000010u; // 800C4A0C
  return; // 800C4A10
}

// fn_800C4A14
void f_800C4A14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4A14
  c->r[0]=c->lr; // 800C4A18
  cmps(c,0,(int32_t)c->r[3],0); // 800C4A1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4A20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C4A24
  c->r[31]=c->r[4]|c->r[4]; // 800C4A28
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C4A2C
  c->r[30]=c->r[3]|c->r[3]; // 800C4A30
  if (crb(c,2)) { goto L_800C4A50; } // 800C4A34
  c->r[4]=0u+0x00000000u; // 800C4A38
  c->lr=0x800C4A40u; f_8026A06C(c); // 800C4A3C
  cmps(c,0,(int32_t)c->r[31],0); // 800C4A40
  if (!crb(c,1)) { goto L_800C4A50; } // 800C4A44
  c->r[3]=c->r[30]|c->r[30]; // 800C4A48
  c->lr=0x800C4A50u; f_8026A268(c); // 800C4A4C
L_800C4A50:;
  c->r[3]=c->r[30]|c->r[30]; // 800C4A50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C4A54
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C4A58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4A5C
  c->lr=c->r[0]; // 800C4A60
  c->r[1]=c->r[1]+0x00000010u; // 800C4A64
  return; // 800C4A68
}

// fn_800C4A6C
void f_800C4A6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4A6C
  c->r[0]=c->lr; // 800C4A70
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800C4A74
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 800C4A78
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 800C4A7C
  c->r[4]=0u+0x00000000u; // 800C4A80
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800C4A84
  c->r[31]=c->r[3]|c->r[3]; // 800C4A88
  W32(c->r[1]+0x000000C8u,c->r[30]); // 800C4A8C
  W32(c->r[1]+0x000000C4u,c->r[29]); // 800C4A90
  c->lr=0x800C4A98u; f_801F57D0(c); // 800C4A94
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C4A98
  c->r[3]=c->r[31]|c->r[31]; // 800C4A9C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C4AA0
  c->ctr=c->r[12]; // 800C4AA4
  if (true) { c->lr=0x800C4AACu; dispatch(c,c->ctr); } // 800C4AA8
  c->r[3]=c->r[31]|c->r[31]; // 800C4AAC
  c->lr=0x800C4AB4u; f_801F4B94(c); // 800C4AB0
  c->r[3]=0u+0x00000003u; // 800C4AB4
  c->r[0]=0u+0x00000027u; // 800C4AB8
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800C4ABC
  c->r[3]=c->r[31]|c->r[31]; // 800C4AC0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C4AC4
  W8(c->r[31]+0x0000006Du,c->r[0]); // 800C4AC8
  c->lr=0x800C4AD0u; f_801F58BC(c); // 800C4ACC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C4AD0
  c->r[30]=0u+0x00000001u; // 800C4AD4
  c->r[29]=0u+0x803A0000u; // 800C4AD8
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800C4ADC
  c->r[4]=c->r[29]+0xFFFFD1A8u; // 800C4AE0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C4AE4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C4AE8
  c->lr=0x800C4AF0u; f_80256EC4(c); // 800C4AEC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C4AF0
  c->r[0]=0u+0x0000000Eu; // 800C4AF4
  {uint32_t ea=c->r[2]+0xFFFF9E98u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4AF8
  c->r[5]=0u+0x00000001u; // 800C4AFC
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800C4B00
  c->r[3]=c->r[31]|c->r[31]; // 800C4B04
  c->f[2]=c->f[1]; // 800C4B08
  c->r[4]=0u+0x00000005u; // 800C4B0C
  c->r[6]=R32(c->r[31]+0x00000394u); // 800C4B10
  W8(c->r[6]+0x0000001Du,c->r[0]); // 800C4B14
  W8(c->r[31]+0x0000006Fu,c->r[30]); // 800C4B18
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C4B1C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C4B20
  c->ctr=c->r[12]; // 800C4B24
  if (true) { c->lr=0x800C4B2Cu; dispatch(c,c->ctr); } // 800C4B28
  c->r[30]=0u+0x80550000u; // 800C4B2C
  {uint32_t ea=c->r[2]+0xFFFF9E9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4B30
  c->r[30]=c->r[30]+0x00003D60u; // 800C4B34
  {uint32_t ea=c->r[2]+0xFFFF9EA0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C4B38
  c->r[3]=c->r[30]+0x00000010u; // 800C4B3C
  c->r[4]=c->r[1]+0x0000006Cu; // 800C4B40
  c->r[5]=c->r[1]+0x00000060u; // 800C4B44
  c->r[6]=0u+0x00000000u; // 800C4B48
  c->lr=0x800C4B50u; f_801D4470(c); // 800C4B4C
  c->r[3]=c->r[1]+0x00000060u; // 800C4B50
  c->r[4]=c->r[1]+0x0000006Cu; // 800C4B54
  c->r[5]=c->r[1]+0x00000054u; // 800C4B58
  c->lr=0x800C4B60u; f_80296A70(c); // 800C4B5C
  c->r[3]=c->r[1]+0x00000054u; // 800C4B60
  c->r[4]=c->r[1]+0x00000048u; // 800C4B64
  c->lr=0x800C4B6Cu; f_80296AB0(c); // 800C4B68
  c->r[3]=c->r[1]+0x00000048u; // 800C4B6C
  {uint32_t ea=c->r[2]+0xFFFF9EA4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4B70
  c->r[4]=c->r[3]|c->r[3]; // 800C4B74
  c->lr=0x800C4B7Cu; f_80296A94(c); // 800C4B78
  c->r[3]=c->r[31]+0x0000002Cu; // 800C4B7C
  c->r[4]=c->r[1]+0x0000006Cu; // 800C4B80
  c->lr=0x800C4B88u; f_800361A0(c); // 800C4B84
  c->r[3]=c->r[31]+0x0000002Cu; // 800C4B88
  c->r[4]=c->r[1]+0x00000048u; // 800C4B8C
  c->r[5]=c->r[3]|c->r[3]; // 800C4B90
  c->lr=0x800C4B98u; f_80296A4C(c); // 800C4B94
  c->r[3]=c->r[1]+0x00000078u; // 800C4B98
  c->lr=0x800C4BA0u; f_8003601C(c); // 800C4B9C
  c->r[3]=0u+0x00000000u; // 800C4BA0
  c->lr=0x800C4BA8u; f_802627F4(c); // 800C4BA4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C4BA8
  c->r[3]=c->r[1]+0x00000008u; // 800C4BAC
  c->r[4]=c->r[1]+0x00000078u; // 800C4BB0
  c->lr=0x800C4BB8u; f_80354204(c); // 800C4BB4
  {uint32_t ea=c->r[2]+0xFFFF9EA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4BB8
  c->r[3]=c->r[30]+0x00000010u; // 800C4BBC
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4BC0
  c->r[4]=c->r[1]+0x0000006Cu; // 800C4BC4
  c->r[7]=R32(c->r[31]+0x00000394u); // 800C4BC8
  c->r[5]=c->r[1]+0x00000060u; // 800C4BCC
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800C4BD0
  {uint32_t ea=c->r[2]+0xFFFF9EACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4BD4
  {uint32_t ea=c->r[2]+0xFFFF9EA0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C4BD8
  c->r[6]=0u+0x00000000u; // 800C4BDC
  {uint32_t ea=c->r[7]+0x00000074u; WF32(ea,c->f[31]);} // 800C4BE0
  c->r[7]=R32(c->r[31]+0x00000394u); // 800C4BE4
  {uint32_t ea=c->r[7]+0x00000078u; WF32(ea,c->f[31]);} // 800C4BE8
  c->r[7]=R32(c->r[31]+0x00000394u); // 800C4BEC
  {uint32_t ea=c->r[7]+0x0000007Cu; WF32(ea,c->f[31]);} // 800C4BF0
  c->lr=0x800C4BF8u; f_801D4470(c); // 800C4BF4
  c->r[3]=c->r[31]+0x000003ECu; // 800C4BF8
  c->r[4]=c->r[1]+0x0000006Cu; // 800C4BFC
  c->lr=0x800C4C04u; f_800361A0(c); // 800C4C00
  c->r[3]=c->r[1]+0x00000060u; // 800C4C04
  c->r[4]=c->r[1]+0x0000006Cu; // 800C4C08
  c->r[5]=c->r[1]+0x00000054u; // 800C4C0C
  c->lr=0x800C4C14u; f_80296A70(c); // 800C4C10
  c->r[3]=c->r[1]+0x00000054u; // 800C4C14
  c->r[4]=c->r[1]+0x00000048u; // 800C4C18
  c->lr=0x800C4C20u; f_80296AB0(c); // 800C4C1C
  c->r[3]=c->r[1]+0x00000048u; // 800C4C20
  {uint32_t ea=c->r[2]+0xFFFF9EA4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4C24
  c->r[4]=c->r[3]|c->r[3]; // 800C4C28
  c->lr=0x800C4C30u; f_80296A94(c); // 800C4C2C
  c->r[3]=c->r[31]+0x000003ECu; // 800C4C30
  c->r[4]=c->r[1]+0x00000048u; // 800C4C34
  c->r[5]=c->r[3]|c->r[3]; // 800C4C38
  c->lr=0x800C4C40u; f_80296A4C(c); // 800C4C3C
  c->r[5]=R32(c->r[31]+0x000003ECu); // 800C4C40
  c->r[3]=c->r[31]|c->r[31]; // 800C4C44
  c->r[0]=R32(c->r[31]+0x000003F0u); // 800C4C48
  c->r[4]=c->r[1]+0x00000030u; // 800C4C4C
  W32(c->r[1]+0x00000030u,c->r[5]); // 800C4C50
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C4C54
  c->r[0]=R32(c->r[31]+0x000003F4u); // 800C4C58
  W32(c->r[1]+0x00000038u,c->r[0]); // 800C4C5C
  c->lr=0x800C4C64u; f_801F6860(c); // 800C4C60
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[1]);} // 800C4C64
  c->r[3]=c->r[31]|c->r[31]; // 800C4C68
  c->lr=0x800C4C70u; f_801F56F4(c); // 800C4C6C
  c->r[3]=c->r[31]|c->r[31]; // 800C4C70
  c->r[4]=0u+0x00000003u; // 800C4C74
  c->r[5]=0u+0x0000000Du; // 800C4C78
  c->r[6]=0u+0x00000001u; // 800C4C7C
  c->r[7]=0u+0x00000001u; // 800C4C80
  c->lr=0x800C4C88u; f_8017900C(c); // 800C4C84
  c->r[4]=c->r[29]+0xFFFFD1A8u; // 800C4C88
  c->r[30]=0u+0x80550000u; // 800C4C8C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800C4C90
  c->r[5]=0u+0x00000001u; // 800C4C94
  c->r[4]=c->r[4]+0x00000009u; // 800C4C98
  c->r[6]=0u+0x00000000u; // 800C4C9C
  c->lr=0x800C4CA4u; f_8018D3E4(c); // 800C4CA0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800C4CA4
  W8(c->r[31]+0x00000074u,c->r[3]); // 800C4CA8
  cmpu(c,0,c->r[0],0x000000FFu); // 800C4CAC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[31]);} // 800C4CB0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[31]);} // 800C4CB4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[31]);} // 800C4CB8
  if (crb(c,2)) { goto L_800C4D20; } // 800C4CBC
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 800C4CC0
  c->r[3]=c->r[30]+0xFFFFC848u; // 800C4CC4
  c->r[4]=R32(c->r[1]+0x00000040u); // 800C4CC8
  c->r[5]=c->r[1]+0x00000024u; // 800C4CCC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C4CD0
  c->r[6]=c->r[1]+0x00000018u; // 800C4CD4
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 800C4CD8
  c->r[7]=c->r[1]+0x0000000Cu; // 800C4CDC
  W32(c->r[1]+0x00000010u,c->r[4]); // 800C4CE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4CE4
  c->r[4]=R32(c->r[31]+0x00000060u); // 800C4CE8
  c->r[0]=R32(c->r[31]+0x00000064u); // 800C4CEC
  W32(c->r[1]+0x00000018u,c->r[4]); // 800C4CF0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C4CF4
  c->r[0]=R32(c->r[31]+0x00000068u); // 800C4CF8
  W32(c->r[1]+0x00000020u,c->r[0]); // 800C4CFC
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800C4D00
  c->r[0]=R32(c->r[31]+0x00000030u); // 800C4D04
  W32(c->r[1]+0x00000024u,c->r[4]); // 800C4D08
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C4D0C
  c->r[0]=R32(c->r[31]+0x00000034u); // 800C4D10
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800C4D14
  c->r[4]=R8(c->r[31]+0x00000074u); // 800C4D18
  c->lr=0x800C4D20u; f_8018DD04(c); // 800C4D1C
L_800C4D20:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C4D20
  c->r[3]=c->r[31]|c->r[31]; // 800C4D24
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C4D28
  c->ctr=c->r[12]; // 800C4D2C
  if (true) { c->lr=0x800C4D34u; dispatch(c,c->ctr); } // 800C4D30
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 800C4D34
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800C4D38
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 800C4D3C
  c->r[31]=R32(c->r[1]+0x000000CCu); // 800C4D40
  c->r[30]=R32(c->r[1]+0x000000C8u); // 800C4D44
  c->r[29]=R32(c->r[1]+0x000000C4u); // 800C4D48
  c->lr=c->r[0]; // 800C4D4C
  c->r[1]=c->r[1]+0x000000E0u; // 800C4D50
  return; // 800C4D54
}

// fn_800C4D58
void f_800C4D58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4D58
  c->r[0]=c->lr; // 800C4D5C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C4D60
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800C4D64
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800C4D68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C4D6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C4D70
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C4D74
  W32(c->r[1]+0x00000010u,c->r[28]); // 800C4D78
  c->r[28]=c->r[3]|c->r[3]; // 800C4D7C
  c->lr=0x800C4D84u; f_801F4C0C(c); // 800C4D80
  c->r[3]=c->r[28]|c->r[28]; // 800C4D84
  c->lr=0x800C4D8Cu; f_801F56F4(c); // 800C4D88
  c->r[0]=R8(c->r[28]+0x0000006Eu); // 800C4D8C
  cmps(c,0,(int32_t)c->r[0],0); // 800C4D90
  if (crb(c,2)) { goto L_800C4DFC; } // 800C4D94
  c->r[0]=R8(c->r[28]+0x00000074u); // 800C4D98
  cmpu(c,0,c->r[0],0x000000FFu); // 800C4D9C
  if (crb(c,2)) { goto L_800C4DFC; } // 800C4DA0
  {uint32_t ea=c->r[2]+0xFFFF9EB0u; c->f[31]=RF64(ea);} // 800C4DA4
  c->r[29]=0u+0x00000000u; // 800C4DA8
  c->r[31]=0u+0x43300000u; // 800C4DAC
  c->r[30]=0u+0x80550000u; // 800C4DB0
  goto L_800C4DDC; // 800C4DB4
L_800C4DB8:;
  c->r[4]=R8(c->r[28]+0x00000074u); // 800C4DB8
  c->r[3]=c->r[30]+0xFFFFC848u; // 800C4DBC
  c->lr=0x800C4DC4u; f_8018E19C(c); // 800C4DC0
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800C4DC4
  c->r[4]=0u+0x00000000u; // 800C4DC8
  c->r[12]=R32(c->r[12]+0x00000018u); // 800C4DCC
  c->ctr=c->r[12]; // 800C4DD0
  if (true) { c->lr=0x800C4DD8u; dispatch(c,c->ctr); } // 800C4DD4
  c->r[29]=c->r[29]+0x00000001u; // 800C4DD8
L_800C4DDC:;
  c->lr=0x800C4DE0u; f_8024E040(c); // 800C4DDC
  c->r[0]=c->r[29]^0x80000000u; // 800C4DE0
  W32(c->r[1]+0x00000008u,c->r[31]); // 800C4DE4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C4DE8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800C4DEC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800C4DF0
  fcmp(c,0,c->f[0],c->f[1]); // 800C4DF4
  if (crb(c,0)) { IRQCHK(c); goto L_800C4DB8; } // 800C4DF8
L_800C4DFC:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800C4DFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C4E00
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800C4E04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C4E08
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C4E0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C4E10
  c->r[28]=R32(c->r[1]+0x00000010u); // 800C4E14
  c->lr=c->r[0]; // 800C4E18
  c->r[1]=c->r[1]+0x00000030u; // 800C4E1C
  return; // 800C4E20
}

// fn_800C4E24
void f_800C4E24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4E24
  c->r[0]=c->lr; // 800C4E28
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C4E2C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C4E30
  c->r[31]=c->r[3]|c->r[3]; // 800C4E34
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C4E38
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800C4E3C
  c->lr=0x800C4E44u; f_802501B0(c); // 800C4E40
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C4E44
  c->r[4]=c->r[1]+0x00000014u; // 800C4E48
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C4E4C
  c->lr=0x800C4E54u; f_80250B4C(c); // 800C4E50
  c->r[3]=c->r[1]+0x00000020u; // 800C4E54
  c->lr=0x800C4E5Cu; f_80295AE8(c); // 800C4E58
  {uint32_t ea=c->r[2]+0xFFFF9EB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4E5C
  c->r[3]=c->r[1]+0x00000020u; // 800C4E60
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4E64
  c->r[4]=0u+0x00000059u; // 800C4E68
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800C4E6C
  c->lr=0x800C4E74u; f_80295FBC(c); // 800C4E70
  c->r[4]=c->r[1]+0x00000014u; // 800C4E74
  c->r[3]=c->r[1]+0x00000020u; // 800C4E78
  c->r[5]=c->r[4]|c->r[4]; // 800C4E7C
  c->lr=0x800C4E84u; f_80296750(c); // 800C4E80
  c->r[5]=R32(c->r[31]+0x00000394u); // 800C4E84
  c->r[3]=c->r[1]+0x00000014u; // 800C4E88
  c->r[4]=c->r[3]|c->r[3]; // 800C4E8C
  {uint32_t ea=c->r[5]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4E90
  c->lr=0x800C4E98u; f_80296A94(c); // 800C4E94
  c->r[3]=c->r[31]+0x0000002Cu; // 800C4E98
  c->r[4]=c->r[1]+0x00000014u; // 800C4E9C
  c->r[5]=c->r[3]|c->r[3]; // 800C4EA0
  c->lr=0x800C4EA8u; f_80296A4C(c); // 800C4EA4
  c->r[3]=c->r[31]+0x0000002Cu; // 800C4EA8
  c->r[4]=c->r[31]+0x000003ECu; // 800C4EAC
  c->r[5]=c->r[1]+0x00000014u; // 800C4EB0
  c->lr=0x800C4EB8u; f_80296A70(c); // 800C4EB4
  c->r[3]=c->r[1]+0x00000014u; // 800C4EB8
  c->lr=0x800C4EC0u; f_80296B0C(c); // 800C4EBC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C4EC0
  {uint32_t ea=c->r[2]+0xFFFF9EA4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C4EC4
  {uint32_t ea=c->r[3]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4EC8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800C4ECC
  fcmp(c,0,c->f[1],c->f[0]); // 800C4ED0
  if (!crb(c,0)) { goto L_800C4F08; } // 800C4ED4
  c->r[0]=0u+0x00000000u; // 800C4ED8
  c->r[7]=0u+0x803D0000u; // 800C4EDC
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800C4EE0
  c->r[3]=c->r[31]|c->r[31]; // 800C4EE4
  c->r[4]=c->r[1]+0x00000008u; // 800C4EE8
  {uint32_t ea=c->r[7]+0x00000CF8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C4EEC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C4EF0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C4EF4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C4EF8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C4EFC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C4F00
  c->lr=0x800C4F08u; f_800C4F1C(c); // 800C4F04
L_800C4F08:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C4F08
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C4F0C
  c->lr=c->r[0]; // 800C4F10
  c->r[1]=c->r[1]+0x00000060u; // 800C4F14
  return; // 800C4F18
}

// fn_800C4F1C
void f_800C4F1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4F1C
  c->r[0]=c->lr; // 800C4F20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4F24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C4F28
  c->r[31]=c->r[4]|c->r[4]; // 800C4F2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C4F30
  c->r[30]=c->r[3]|c->r[3]; // 800C4F34
  c->r[3]=c->r[31]|c->r[31]; // 800C4F38
  c->lr=0x800C4F40u; f_802B9FDC(c); // 800C4F3C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4F40
  if (crb(c,2)) { goto L_800C4F60; } // 800C4F44
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C4F48
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C4F4C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800C4F50
  W32(c->r[30]+0x00000020u,c->r[0]); // 800C4F54
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C4F58
  W32(c->r[30]+0x00000024u,c->r[0]); // 800C4F5C
L_800C4F60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4F60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C4F64
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C4F68
  c->lr=c->r[0]; // 800C4F6C
  c->r[1]=c->r[1]+0x00000010u; // 800C4F70
  return; // 800C4F74
}

// fn_800C4F78
void f_800C4F78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4F78
  c->r[0]=c->lr; // 800C4F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4F80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C4F84
  c->r[31]=c->r[3]|c->r[3]; // 800C4F88
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C4F8C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800C4F90
  c->lr=0x800C4F98u; f_80254158(c); // 800C4F94
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C4F98
  c->r[0]=0u+0x00000000u; // 800C4F9C
  cmps(c,0,(int32_t)c->r[31],0); // 800C4FA0
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 800C4FA4
  if (crb(c,2)) { goto L_800C4FC4; } // 800C4FA8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C4FAC
  c->r[3]=c->r[31]|c->r[31]; // 800C4FB0
  c->r[4]=0u+0x00000001u; // 800C4FB4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C4FB8
  c->ctr=c->r[12]; // 800C4FBC
  if (true) { c->lr=0x800C4FC4u; dispatch(c,c->ctr); } // 800C4FC0
L_800C4FC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4FC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C4FC8
  c->lr=c->r[0]; // 800C4FCC
  c->r[1]=c->r[1]+0x00000010u; // 800C4FD0
  return; // 800C4FD4
}

// fn_800C4FD8
void f_800C4FD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4FD8
  c->r[0]=c->lr; // 800C4FDC
  cmps(c,0,(int32_t)c->r[3],0); // 800C4FE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4FE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C4FE8
  c->r[31]=c->r[4]|c->r[4]; // 800C4FEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C4FF0
  c->r[30]=c->r[3]|c->r[3]; // 800C4FF4
  if (crb(c,2)) { goto L_800C5014; } // 800C4FF8
  c->r[4]=0u+0x00000000u; // 800C4FFC
  c->lr=0x800C5004u; f_8026A06C(c); // 800C5000
  cmps(c,0,(int32_t)c->r[31],0); // 800C5004
  if (!crb(c,1)) { goto L_800C5014; } // 800C5008
  c->r[3]=c->r[30]|c->r[30]; // 800C500C
  c->lr=0x800C5014u; f_8026A268(c); // 800C5010
L_800C5014:;
  c->r[3]=c->r[30]|c->r[30]; // 800C5014
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5018
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C501C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5020
  c->lr=c->r[0]; // 800C5024
  c->r[1]=c->r[1]+0x00000010u; // 800C5028
  return; // 800C502C
}

// fn_800C5030
void f_800C5030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5030
  c->r[0]=c->lr; // 800C5034
  c->r[4]=c->r[3]|c->r[3]; // 800C5038
  c->r[3]=0u+0x0000009Bu; // 800C503C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5040
  c->r[5]=0u+0x00000000u; // 800C5044
  c->r[4]=R32(c->r[4]+0x00000394u); // 800C5048
  c->r[4]=c->r[4]+0x0000010Cu; // 800C504C
  c->lr=0x800C5054u; f_8024EE50(c); // 800C5050
  c->r[0]=cntlz(c->r[3]); // 800C5054
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C5058
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C505C
  c->lr=c->r[0]; // 800C5060
  c->r[1]=c->r[1]+0x00000010u; // 800C5064
  return; // 800C5068
}

// fn_800C506C
void f_800C506C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C506C
  c->r[0]=c->lr; // 800C5070
  c->r[4]=0u+0x00000000u; // 800C5074
  c->r[7]=0u+0x803D0000u; // 800C5078
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C507C
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800C5080
  W16(c->r[3]+0x000003BCu,c->r[4]); // 800C5084
  c->r[4]=c->r[1]+0x00000008u; // 800C5088
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 800C508C
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800C5090
  {uint32_t ea=c->r[7]+0x00000D04u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C5094
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C5098
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C509C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C50A0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C50A4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C50A8
  c->lr=0x800C50B0u; f_800C4F1C(c); // 800C50AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C50B0
  c->lr=c->r[0]; // 800C50B4
  c->r[1]=c->r[1]+0x00000020u; // 800C50B8
  return; // 800C50BC
}

// fn_800C50C0
void f_800C50C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C50C0
  c->r[0]=c->lr; // 800C50C4
  c->r[4]=0u+0x00000000u; // 800C50C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C50CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C50D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C50D4
  c->r[30]=c->r[3]|c->r[3]; // 800C50D8
  c->lr=0x800C50E0u; f_801F57D0(c); // 800C50DC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C50E0
  c->r[3]=c->r[30]|c->r[30]; // 800C50E4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C50E8
  c->ctr=c->r[12]; // 800C50EC
  if (true) { c->lr=0x800C50F4u; dispatch(c,c->ctr); } // 800C50F0
  c->r[3]=c->r[30]|c->r[30]; // 800C50F4
  c->lr=0x800C50FCu; f_801F4B94(c); // 800C50F8
  c->r[3]=0u+0x00000003u; // 800C50FC
  c->r[0]=0u+0x00000028u; // 800C5100
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800C5104
  c->r[3]=c->r[30]|c->r[30]; // 800C5108
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C510C
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800C5110
  c->lr=0x800C5118u; f_801F58BC(c); // 800C5114
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C5118
  c->r[31]=0u+0x00000001u; // 800C511C
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800C5120
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C5124
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C5128
  c->lr=0x800C5130u; f_802501B0(c); // 800C512C
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800C5130
  c->r[3]=c->r[30]|c->r[30]; // 800C5134
  c->lr=0x800C513Cu; f_801F56F4(c); // 800C5138
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C513C
  c->r[3]=c->r[30]|c->r[30]; // 800C5140
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C5144
  c->ctr=c->r[12]; // 800C5148
  if (true) { c->lr=0x800C5150u; dispatch(c,c->ctr); } // 800C514C
  c->r[3]=0u+0x805D0000u; // 800C5150
  c->r[4]=c->r[30]+0x0000002Cu; // 800C5154
  c->r[3]=c->r[3]+0x000078B0u; // 800C5158
  c->lr=0x800C5160u; f_802351CC(c); // 800C515C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C5160
  c->r[0]=0u+0x00000000u; // 800C5164
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800C5168
  W8(c->r[30]+0x00000074u,c->r[0]); // 800C516C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5170
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C5174
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5178
  c->lr=c->r[0]; // 800C517C
  c->r[1]=c->r[1]+0x00000010u; // 800C5180
  return; // 800C5184
}

// fn_800C5188
void f_800C5188(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5188
  c->r[0]=c->lr; // 800C518C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5190
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C5194
  c->r[31]=c->r[3]|c->r[3]; // 800C5198
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800C519C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800C51A0
  c->ctr=c->r[12]; // 800C51A4
  if (true) { c->lr=0x800C51ACu; dispatch(c,c->ctr); } // 800C51A8
  c->r[3]=c->r[31]|c->r[31]; // 800C51AC
  c->lr=0x800C51B4u; f_801F4C0C(c); // 800C51B0
  c->r[3]=c->r[31]|c->r[31]; // 800C51B4
  c->lr=0x800C51BCu; f_801F56F4(c); // 800C51B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C51BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C51C0
  c->lr=c->r[0]; // 800C51C4
  c->r[1]=c->r[1]+0x00000010u; // 800C51C8
  return; // 800C51CC
}

// fn_800C51D0
void f_800C51D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C51D0
  c->r[0]=c->lr; // 800C51D4
  c->r[4]=c->r[3]|c->r[3]; // 800C51D8
  c->r[3]=0u+0x000000C9u; // 800C51DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C51E0
  c->r[5]=0u+0x00000000u; // 800C51E4
  c->r[4]=R32(c->r[4]+0x00000394u); // 800C51E8
  c->r[4]=c->r[4]+0x0000010Cu; // 800C51EC
  c->lr=0x800C51F4u; f_8024EE50(c); // 800C51F0
  c->r[0]=cntlz(c->r[3]); // 800C51F4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C51F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C51FC
  c->lr=c->r[0]; // 800C5200
  c->r[1]=c->r[1]+0x00000010u; // 800C5204
  return; // 800C5208
}

// fn_800C520C
void f_800C520C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C520C
  c->r[0]=c->lr; // 800C5210
  c->r[6]=c->r[4]|c->r[4]; // 800C5214
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5218
  c->r[0]=R8(c->r[3]+0x00000074u); // 800C521C
  cmps(c,0,(int32_t)c->r[0],1); // 800C5220
  if (crb(c,2)) { goto L_800C523C; } // 800C5224
  if (!crb(c,0)) { goto L_800C5230; } // 800C5228
  goto L_800C524C; // 800C522C
L_800C5230:;
  cmps(c,0,(int32_t)c->r[0],3); // 800C5230
  if (!crb(c,0)) { goto L_800C524C; } // 800C5234
  goto L_800C5244; // 800C5238
L_800C523C:;
  c->r[5]=0u+0x00000001u; // 800C523C
  goto L_800C5250; // 800C5240
L_800C5244:;
  c->r[5]=0u+0x00000000u; // 800C5244
  goto L_800C5250; // 800C5248
L_800C524C:;
  c->r[5]=0u+0x00000000u; // 800C524C
L_800C5250:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C5250
  c->r[3]=c->r[6]|c->r[6]; // 800C5254
  c->lr=0x800C525Cu; f_80250BF4(c); // 800C5258
  c->r[0]=cntlz(c->r[3]); // 800C525C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C5260
  c->r[3]=0u-c->r[0]; // 800C5264
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5268
  c->lr=c->r[0]; // 800C526C
  c->r[1]=c->r[1]+0x00000010u; // 800C5270
  return; // 800C5274
}

// fn_800C5278
void f_800C5278(Ctx* __restrict c) {
  W8(c->r[3]+0x00000074u,c->r[4]); // 800C5278
  return; // 800C527C
}

// fn_800C5280
void f_800C5280(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5280
  c->r[0]=c->lr; // 800C5284
  cmps(c,0,(int32_t)c->r[3],0); // 800C5288
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C528C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C5290
  c->r[31]=c->r[4]|c->r[4]; // 800C5294
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C5298
  c->r[30]=c->r[3]|c->r[3]; // 800C529C
  if (crb(c,2)) { goto L_800C52BC; } // 800C52A0
  c->r[4]=0u+0x00000000u; // 800C52A4
  c->lr=0x800C52ACu; f_8026A06C(c); // 800C52A8
  cmps(c,0,(int32_t)c->r[31],0); // 800C52AC
  if (!crb(c,1)) { goto L_800C52BC; } // 800C52B0
  c->r[3]=c->r[30]|c->r[30]; // 800C52B4
  c->lr=0x800C52BCu; f_8026A268(c); // 800C52B8
L_800C52BC:;
  c->r[3]=c->r[30]|c->r[30]; // 800C52BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C52C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C52C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C52C8
  c->lr=c->r[0]; // 800C52CC
  c->r[1]=c->r[1]+0x00000010u; // 800C52D0
  return; // 800C52D4
}

// fn_800C52D8
void f_800C52D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C52D8
  c->r[0]=c->lr; // 800C52DC
  c->r[4]=0u+0x00000000u; // 800C52E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C52E4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C52E8
  c->r[31]=c->r[3]|c->r[3]; // 800C52EC
  W32(c->r[1]+0x00000028u,c->r[30]); // 800C52F0
  W32(c->r[1]+0x00000024u,c->r[29]); // 800C52F4
  c->lr=0x800C52FCu; f_801F57D0(c); // 800C52F8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C52FC
  c->r[3]=c->r[31]|c->r[31]; // 800C5300
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C5304
  c->ctr=c->r[12]; // 800C5308
  if (true) { c->lr=0x800C5310u; dispatch(c,c->ctr); } // 800C530C
  c->r[3]=c->r[31]|c->r[31]; // 800C5310
  c->lr=0x800C5318u; f_801F4B94(c); // 800C5314
  c->r[3]=0u+0x00000003u; // 800C5318
  c->r[0]=0u+0x00000029u; // 800C531C
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800C5320
  c->r[3]=c->r[31]|c->r[31]; // 800C5324
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C5328
  W8(c->r[31]+0x0000006Du,c->r[0]); // 800C532C
  c->lr=0x800C5334u; f_801F58BC(c); // 800C5330
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C5334
  c->r[29]=0u+0x00000001u; // 800C5338
  c->r[30]=0u+0x803A0000u; // 800C533C
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800C5340
  c->r[4]=c->r[30]+0xFFFFD1B8u; // 800C5344
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C5348
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C534C
  c->lr=0x800C5354u; f_80256EC4(c); // 800C5350
  c->r[6]=R32(c->r[31]+0x00000394u); // 800C5354
  c->r[5]=0u+0x805D0000u; // 800C5358
  c->r[4]=c->r[31]+0x0000002Cu; // 800C535C
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800C5360
  c->r[3]=c->r[5]+0x000078B0u; // 800C5364
  c->lr=0x800C536Cu; f_802351CC(c); // 800C5368
  c->r[5]=R32(c->r[31]+0x00000394u); // 800C536C
  c->r[4]=0u+0x00000000u; // 800C5370
  {uint32_t ea=c->r[2]+0xFFFF9ED0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5374
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800C5378
  c->r[3]=c->r[31]|c->r[31]; // 800C537C
  c->f[2]=c->f[1]; // 800C5380
  c->r[5]=0u+0x00000001u; // 800C5384
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800C5388
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C538C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C5390
  c->ctr=c->r[12]; // 800C5394
  if (true) { c->lr=0x800C539Cu; dispatch(c,c->ctr); } // 800C5398
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C539C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C53A0
  c->lr=0x800C53A8u; f_802501B0(c); // 800C53A4
  {uint32_t ea=c->r[2]+0xFFFF9ED0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C53A8
  c->r[0]=0u+0x00000000u; // 800C53AC
  W32(c->r[31]+0x00000084u,c->r[0]); // 800C53B0
  c->r[3]=c->r[31]+0x0000000Cu; // 800C53B4
  c->r[4]=0u+0x00000000u; // 800C53B8
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800C53BC
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800C53C0
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C53C4
  W8(c->r[31]+0x00000028u,c->r[0]); // 800C53C8
  c->lr=0x800C53D0u; f_80036430(c); // 800C53CC
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800C53D0
  cmps(c,0,(int32_t)c->r[0],0); // 800C53D4
  if (!crb(c,2)) { goto L_800C53F8; } // 800C53D8
  c->r[5]=R32(c->r[31]+0x00000394u); // 800C53DC
  c->r[3]=c->r[30]+0xFFFFD1B8u; // 800C53E0
  c->r[4]=c->r[3]+0x00000009u; // 800C53E4
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800C53E8
  c->lr=0x800C53F0u; f_80256EC4(c); // 800C53EC
  W8(c->r[31]+0x00000080u,c->r[3]); // 800C53F0
  goto L_800C5410; // 800C53F4
L_800C53F8:;
  c->r[5]=R32(c->r[31]+0x00000394u); // 800C53F8
  c->r[3]=c->r[30]+0xFFFFD1B8u; // 800C53FC
  c->r[4]=c->r[3]+0x00000019u; // 800C5400
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800C5404
  c->lr=0x800C540Cu; f_80256EC4(c); // 800C5408
  W8(c->r[31]+0x00000080u,c->r[3]); // 800C540C
L_800C5410:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C5410
  c->r[5]=c->r[1]+0x00000014u; // 800C5414
  c->r[4]=R8(c->r[31]+0x00000080u); // 800C5418
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C541C
  c->lr=0x800C5424u; f_8025EA54(c); // 800C5420
  {uint32_t ea=c->r[31]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5424
  c->r[5]=c->r[1]+0x00000008u; // 800C5428
  c->r[4]=R32(c->r[1]+0x00000014u); // 800C542C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C5430
  c->r[3]=R32(c->r[1]+0x00000018u); // 800C5434
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800C5438
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C543C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C5440
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C5444
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C5448
  c->r[4]=R8(c->r[31]+0x00000080u); // 800C544C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C5450
  c->lr=0x800C5458u; f_8025E9C0(c); // 800C5454
  c->r[3]=c->r[31]|c->r[31]; // 800C5458
  c->lr=0x800C5460u; f_801F56F4(c); // 800C545C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C5460
  c->r[3]=c->r[31]|c->r[31]; // 800C5464
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C5468
  c->ctr=c->r[12]; // 800C546C
  if (true) { c->lr=0x800C5474u; dispatch(c,c->ctr); } // 800C5470
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C5474
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C5478
  c->r[30]=R32(c->r[1]+0x00000028u); // 800C547C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800C5480
  c->lr=c->r[0]; // 800C5484
  c->r[1]=c->r[1]+0x00000030u; // 800C5488
  return; // 800C548C
}

// fn_800C5490
void f_800C5490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5490
  c->r[0]=c->lr; // 800C5494
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5498
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800C549C
  cmps(c,0,(int32_t)c->r[0],0); // 800C54A0
  if (!crb(c,2)) { goto L_800C54C8; } // 800C54A4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C54A8
  c->r[3]=0u+0x00000226u; // 800C54AC
  c->r[5]=0u+0x00000000u; // 800C54B0
  c->r[4]=c->r[4]+0x0000010Cu; // 800C54B4
  c->lr=0x800C54BCu; f_8024EE50(c); // 800C54B8
  c->r[0]=cntlz(c->r[3]); // 800C54BC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C54C0
  goto L_800C54E4; // 800C54C4
L_800C54C8:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C54C8
  c->r[3]=0u+0x00000227u; // 800C54CC
  c->r[5]=0u+0x00000000u; // 800C54D0
  c->r[4]=c->r[4]+0x0000010Cu; // 800C54D4
  c->lr=0x800C54DCu; f_8024EE50(c); // 800C54D8
  c->r[0]=cntlz(c->r[3]); // 800C54DC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C54E0
L_800C54E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C54E4
  c->lr=c->r[0]; // 800C54E8
  c->r[1]=c->r[1]+0x00000010u; // 800C54EC
  return; // 800C54F0
}

// fn_800C54F4
void f_800C54F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C54F4
  c->r[0]=c->lr; // 800C54F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C54FC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C5500
  c->r[31]=c->r[3]|c->r[3]; // 800C5504
  c->lr=0x800C550Cu; f_801F4C0C(c); // 800C5508
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C550C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C5510
  c->lr=0x800C5518u; f_802501B0(c); // 800C5514
  c->r[3]=c->r[31]+0x0000000Cu; // 800C5518
  c->r[4]=0u+0x00000000u; // 800C551C
  c->lr=0x800C5524u; f_80038BCC(c); // 800C5520
  cmps(c,0,(int32_t)c->r[3],0); // 800C5524
  if (crb(c,2)) { goto L_800C5558; } // 800C5528
  c->r[3]=c->r[31]+0x0000000Cu; // 800C552C
  c->r[4]=0u+0x00000000u; // 800C5530
  c->lr=0x800C5538u; f_8003D794(c); // 800C5534
  c->r[3]=c->r[31]+0x0000000Cu; // 800C5538
  c->r[4]=0u+0x00000000u; // 800C553C
  c->lr=0x800C5544u; f_8004E0A4(c); // 800C5540
  cmps(c,0,(int32_t)c->r[3],0); // 800C5544
  if (crb(c,2)) { goto L_800C5558; } // 800C5548
  c->r[3]=c->r[31]+0x0000000Cu; // 800C554C
  c->r[4]=0u+0x00000000u; // 800C5550
  c->lr=0x800C5558u; f_80036430(c); // 800C5554
L_800C5558:;
  c->r[3]=R32(c->r[31]+0x00000084u); // 800C5558
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C555C
  if (crb(c,2)) { goto L_800C560C; } // 800C5560
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C5564
  if (crb(c,2)) { goto L_800C5580; } // 800C5568
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C556C
  {uint32_t ea=c->r[2]+0xFFFF9ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5570
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800C5574
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C5578
  goto L_800C5590; // 800C557C
L_800C5580:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5580
  {uint32_t ea=c->r[2]+0xFFFF9ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5584
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800C5588
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C558C
L_800C5590:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5590
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5594
  fcmp(c,0,c->f[1],c->f[0]); // 800C5598
  if (!crb(c,1)) { goto L_800C55A4; } // 800C559C
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C55A0
L_800C55A4:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C55A4
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C55A8
  fcmp(c,0,c->f[1],c->f[0]); // 800C55AC
  if (!crb(c,0)) { goto L_800C55B8; } // 800C55B0
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C55B4
L_800C55B8:;
  c->r[0]=R32(c->r[31]+0x00000084u); // 800C55B8
  c->r[3]=c->r[31]+0x0000000Cu; // 800C55BC
  c->r[4]=0u+0x00000000u; // 800C55C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800C55C4
  W32(c->r[31]+0x00000084u,c->r[0]); // 800C55C8
  c->lr=0x800C55D0u; f_8003D828(c); // 800C55CC
  cmps(c,0,(int32_t)c->r[3],0); // 800C55D0
  if (crb(c,2)) { goto L_800C560C; } // 800C55D4
  c->r[3]=c->r[31]|c->r[31]; // 800C55D8
  c->r[4]=0u+0x00000004u; // 800C55DC
  c->r[5]=0u+0x0000000Au; // 800C55E0
  c->r[6]=0u+0x00000001u; // 800C55E4
  c->r[7]=0u+0x00000001u; // 800C55E8
  c->lr=0x800C55F0u; f_8017900C(c); // 800C55EC
  c->r[3]=c->r[31]+0x0000000Cu; // 800C55F0
  c->r[4]=0u+0x0000001Eu; // 800C55F4
  c->lr=0x800C55FCu; f_80036430(c); // 800C55F8
  c->r[3]=0u+0x00000000u; // 800C55FC
  c->r[4]=0u+0x00000003u; // 800C5600
  c->r[5]=0u+0x0000000Cu; // 800C5604
  c->lr=0x800C560Cu; f_8027C0C8(c); // 800C5608
L_800C560C:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C560C
  {uint32_t ea=c->r[2]+0xFFFF9ED0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5610
  fcmp(c,0,c->f[2],c->f[1]); // 800C5614
  if (!crb(c,0)) { goto L_800C5634; } // 800C5618
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C561C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800C5620
  fcmp(c,0,c->f[0],c->f[1]); // 800C5624
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C5628
  if (!crb(c,1)) { goto L_800C5634; } // 800C562C
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[1]);} // 800C5630
L_800C5634:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C5634
  {uint32_t ea=c->r[2]+0xFFFF9ED0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5638
  fcmp(c,0,c->f[2],c->f[1]); // 800C563C
  if (!crb(c,1)) { goto L_800C565C; } // 800C5640
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5644
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800C5648
  fcmp(c,0,c->f[0],c->f[1]); // 800C564C
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C5650
  if (!crb(c,0)) { goto L_800C565C; } // 800C5654
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[1]);} // 800C5658
L_800C565C:;
  {uint32_t ea=c->r[31]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C565C
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5660
  {uint32_t ea=c->r[2]+0xFFFF9EE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5664
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800C5668
  fcmp(c,0,c->f[1],c->f[0]); // 800C566C
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[1]);} // 800C5670
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C5674
  if (!crb(c,2)) { goto L_800C5684; } // 800C5678
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800C567C
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800C5680
L_800C5684:;
  {uint32_t ea=c->r[31]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5684
  {uint32_t ea=c->r[2]+0xFFFF9ED0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5688
  fcmp(c,0,c->f[1],c->f[0]); // 800C568C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C5690
  if (!crb(c,2)) { goto L_800C56A4; } // 800C5694
  {uint32_t ea=c->r[2]+0xFFFF9EE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5698
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800C569C
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800C56A0
L_800C56A4:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C56A4
  c->r[5]=c->r[1]+0x00000014u; // 800C56A8
  c->r[4]=R8(c->r[31]+0x00000080u); // 800C56AC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C56B0
  c->lr=0x800C56B8u; f_8025EA54(c); // 800C56B4
  {uint32_t ea=c->r[31]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C56B8
  c->r[5]=c->r[1]+0x00000008u; // 800C56BC
  c->r[4]=R32(c->r[1]+0x00000014u); // 800C56C0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C56C4
  c->r[3]=R32(c->r[1]+0x00000018u); // 800C56C8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800C56CC
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C56D0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C56D4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C56D8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C56DC
  c->r[4]=R8(c->r[31]+0x00000080u); // 800C56E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C56E4
  c->lr=0x800C56ECu; f_8025E9C0(c); // 800C56E8
  c->r[3]=c->r[31]|c->r[31]; // 800C56EC
  c->lr=0x800C56F4u; f_801F56F4(c); // 800C56F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C56F4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C56F8
  c->lr=c->r[0]; // 800C56FC
  c->r[1]=c->r[1]+0x00000030u; // 800C5700
  return; // 800C5704
}

// fn_800C5708
void f_800C5708(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000084u); // 800C5708
  c->r[0]=c->r[0]|0x00000001u; // 800C570C
  W32(c->r[3]+0x00000084u,c->r[0]); // 800C5710
  return; // 800C5714
}

// fn_800C5718
void f_800C5718(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000084u); // 800C5718
  c->r[0]=c->r[0]|0x00000003u; // 800C571C
  W32(c->r[3]+0x00000084u,c->r[0]); // 800C5720
  return; // 800C5724
}

// fn_800C5728
void f_800C5728(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5728
  return; // 800C572C
}

// fn_800C5730
void f_800C5730(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 800C5730
  return; // 800C5734
}

// fn_800C5738
void f_800C5738(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5738
  c->r[0]=c->lr; // 800C573C
  cmps(c,0,(int32_t)c->r[3],0); // 800C5740
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5744
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C5748
  c->r[31]=c->r[4]|c->r[4]; // 800C574C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C5750
  c->r[30]=c->r[3]|c->r[3]; // 800C5754
  if (crb(c,2)) { goto L_800C5774; } // 800C5758
  c->r[4]=0u+0x00000000u; // 800C575C
  c->lr=0x800C5764u; f_8026A06C(c); // 800C5760
  cmps(c,0,(int32_t)c->r[31],0); // 800C5764
  if (!crb(c,1)) { goto L_800C5774; } // 800C5768
  c->r[3]=c->r[30]|c->r[30]; // 800C576C
  c->lr=0x800C5774u; f_8026A268(c); // 800C5770
L_800C5774:;
  c->r[3]=c->r[30]|c->r[30]; // 800C5774
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5778
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C577C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5780
  c->lr=c->r[0]; // 800C5784
  c->r[1]=c->r[1]+0x00000010u; // 800C5788
  return; // 800C578C
}

// fn_800C5790
void f_800C5790(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5790
  c->r[0]=c->lr; // 800C5794
  c->r[4]=0u+0x00000000u; // 800C5798
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C579C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C57A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C57A4
  c->r[30]=c->r[3]|c->r[3]; // 800C57A8
  c->lr=0x800C57B0u; f_801F57D0(c); // 800C57AC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C57B0
  c->r[3]=c->r[30]|c->r[30]; // 800C57B4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C57B8
  c->ctr=c->r[12]; // 800C57BC
  if (true) { c->lr=0x800C57C4u; dispatch(c,c->ctr); } // 800C57C0
  c->r[3]=c->r[30]|c->r[30]; // 800C57C4
  c->lr=0x800C57CCu; f_801F4B94(c); // 800C57C8
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C57CC
  c->r[4]=0u+0x00000003u; // 800C57D0
  c->r[3]=0u+0x0000002Au; // 800C57D4
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800C57D8
  c->r[0]=c->r[0]|0x00000800u; // 800C57DC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C57E0
  W8(c->r[30]+0x0000006Du,c->r[3]); // 800C57E4
  c->r[3]=c->r[30]|c->r[30]; // 800C57E8
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800C57EC
  c->lr=0x800C57F4u; f_801F58BC(c); // 800C57F0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C57F4
  c->r[31]=0u+0x00000001u; // 800C57F8
  c->r[4]=0u+0x803A0000u; // 800C57FC
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800C5800
  c->r[4]=c->r[4]+0xFFFFD1ECu; // 800C5804
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C5808
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C580C
  c->lr=0x800C5814u; f_80256EC4(c); // 800C5810
  c->r[6]=R32(c->r[30]+0x00000394u); // 800C5814
  c->r[5]=0u+0x805D0000u; // 800C5818
  c->r[4]=c->r[30]+0x0000002Cu; // 800C581C
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800C5820
  c->r[3]=c->r[5]+0x000078B0u; // 800C5824
  c->lr=0x800C582Cu; f_802351CC(c); // 800C5828
  c->r[5]=R32(c->r[30]+0x00000394u); // 800C582C
  c->r[4]=0u+0x00000000u; // 800C5830
  {uint32_t ea=c->r[2]+0xFFFF9EF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5834
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800C5838
  c->r[3]=c->r[30]|c->r[30]; // 800C583C
  c->f[2]=c->f[1]; // 800C5840
  c->r[5]=0u+0x00000001u; // 800C5844
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C5848
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800C584C
  c->r[0]=c->r[0]|0x00000004u; // 800C5850
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800C5854
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C5858
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C585C
  c->ctr=c->r[12]; // 800C5860
  if (true) { c->lr=0x800C5868u; dispatch(c,c->ctr); } // 800C5864
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C5868
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C586C
  c->lr=0x800C5874u; f_802501B0(c); // 800C5870
  c->r[3]=c->r[30]|c->r[30]; // 800C5874
  c->lr=0x800C587Cu; f_801F56F4(c); // 800C5878
  c->r[0]=0u+0x000000FFu; // 800C587C
  c->r[3]=c->r[30]|c->r[30]; // 800C5880
  W8(c->r[30]+0x00000074u,c->r[0]); // 800C5884
  c->lr=0x800C588Cu; f_800C5F14(c); // 800C5888
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800C588C
  W32(c->r[30]+0x00000444u,c->r[31]); // 800C5890
  c->lr=0x800C5898u; f_8024E174(c); // 800C5894
  W32(c->r[30]+0x00000438u,c->r[3]); // 800C5898
  c->r[3]=c->r[30]|c->r[30]; // 800C589C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C58A0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C58A4
  c->ctr=c->r[12]; // 800C58A8
  if (true) { c->lr=0x800C58B0u; dispatch(c,c->ctr); } // 800C58AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C58B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C58B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C58B8
  c->lr=c->r[0]; // 800C58BC
  c->r[1]=c->r[1]+0x00000010u; // 800C58C0
  return; // 800C58C4
}

// fn_800C58C8
void f_800C58C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C58C8
  c->r[0]=c->lr; // 800C58CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C58D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C58D4
  c->r[31]=c->r[3]|c->r[3]; // 800C58D8
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800C58DC
  cmps(c,0,(int32_t)c->r[0],1); // 800C58E0
  if (crb(c,2)) { goto L_800C5928; } // 800C58E4
  if (!crb(c,0)) { goto L_800C58F8; } // 800C58E8
  cmps(c,0,(int32_t)c->r[0],0); // 800C58EC
  if (!crb(c,0)) { goto L_800C5904; } // 800C58F0
  goto L_800C5970; // 800C58F4
L_800C58F8:;
  cmps(c,0,(int32_t)c->r[0],3); // 800C58F8
  if (!crb(c,0)) { goto L_800C5970; } // 800C58FC
  goto L_800C594C; // 800C5900
L_800C5904:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C5904
  c->r[3]=0u+0x000004B6u; // 800C5908
  c->r[5]=0u+0x00000000u; // 800C590C
  c->r[4]=c->r[4]+0x0000010Cu; // 800C5910
  c->lr=0x800C5918u; f_8024EE50(c); // 800C5914
  cmps(c,0,(int32_t)c->r[3],0); // 800C5918
  if (crb(c,2)) { goto L_800C5970; } // 800C591C
  c->r[3]=0u+0x00000000u; // 800C5920
  goto L_800C597C; // 800C5924
L_800C5928:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C5928
  c->r[3]=0u+0x000004B7u; // 800C592C
  c->r[5]=0u+0x00000000u; // 800C5930
  c->r[4]=c->r[4]+0x0000010Cu; // 800C5934
  c->lr=0x800C593Cu; f_8024EE50(c); // 800C5938
  cmps(c,0,(int32_t)c->r[3],0); // 800C593C
  if (crb(c,2)) { goto L_800C5970; } // 800C5940
  c->r[3]=0u+0x00000000u; // 800C5944
  goto L_800C597C; // 800C5948
L_800C594C:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C594C
  c->r[3]=0u+0x000004B8u; // 800C5950
  c->r[5]=0u+0x00000000u; // 800C5954
  c->r[4]=c->r[4]+0x0000010Cu; // 800C5958
  c->lr=0x800C5960u; f_8024EE50(c); // 800C595C
  cmps(c,0,(int32_t)c->r[3],0); // 800C5960
  if (crb(c,2)) { goto L_800C5970; } // 800C5964
  c->r[3]=0u+0x00000000u; // 800C5968
  goto L_800C597C; // 800C596C
L_800C5970:;
  c->r[3]=c->r[31]+0x00000210u; // 800C5970
  c->r[4]=0u+0x000000E1u; // 800C5974
  c->lr=0x800C597Cu; f_80221630(c); // 800C5978
L_800C597C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C597C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5980
  c->lr=c->r[0]; // 800C5984
  c->r[1]=c->r[1]+0x00000010u; // 800C5988
  return; // 800C598C
}

// fn_800C5990
void f_800C5990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5990
  c->r[0]=c->lr; // 800C5994
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C5998
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800C599C
  W32(c->r[1]+0x00000038u,c->r[30]); // 800C59A0
  c->r[30]=c->r[3]|c->r[3]; // 800C59A4
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800C59A8
  c->r[12]=R32(c->r[12]+0x00000068u); // 800C59AC
  c->ctr=c->r[12]; // 800C59B0
  if (true) { c->lr=0x800C59B8u; dispatch(c,c->ctr); } // 800C59B4
  c->r[3]=c->r[30]|c->r[30]; // 800C59B8
  c->lr=0x800C59C0u; f_801F4C0C(c); // 800C59BC
  c->r[3]=0u+0x80620000u; // 800C59C0
  c->r[4]=0u+0x00000002u; // 800C59C4
  c->r[3]=c->r[3]+0x00007688u; // 800C59C8
  c->r[3]=R32(c->r[3]+0x00000014u); // 800C59CC
  c->lr=0x800C59D4u; f_80037670(c); // 800C59D0
  cmps(c,0,(int32_t)c->r[3],0); // 800C59D4
  if (!crb(c,2)) { goto L_800C5A98; } // 800C59D8
  c->r[0]=R8(c->r[30]+0x00000074u); // 800C59DC
  cmpu(c,0,c->r[0],0x000000FFu); // 800C59E0
  if (!crb(c,2)) { goto L_800C5A0C; } // 800C59E4
  c->r[4]=0u+0x803A0000u; // 800C59E8
  c->r[3]=0u+0x80550000u; // 800C59EC
  c->r[4]=c->r[4]+0xFFFFD1ECu; // 800C59F0
  c->r[5]=0u+0x00000000u; // 800C59F4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C59F8
  c->r[6]=0u+0x00000000u; // 800C59FC
  c->r[4]=c->r[4]+0x00000009u; // 800C5A00
  c->lr=0x800C5A08u; f_8018D3E4(c); // 800C5A04
  W8(c->r[30]+0x00000074u,c->r[3]); // 800C5A08
L_800C5A0C:;
  c->r[0]=R8(c->r[30]+0x00000074u); // 800C5A0C
  cmpu(c,0,c->r[0],0x000000FFu); // 800C5A10
  if (crb(c,2)) { goto L_800C5AB8; } // 800C5A14
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C5A18
  c->r[4]=0u+0x803A0000u; // 800C5A1C
  c->r[4]=c->r[4]+0xFFFFD1ECu; // 800C5A20
  c->r[5]=c->r[1]+0x00000008u; // 800C5A24
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C5A28
  c->r[6]=0u+0x00000001u; // 800C5A2C
  c->lr=0x800C5A34u; f_80257018(c); // 800C5A30
  c->r[31]=0u+0x80550000u; // 800C5A34
  c->r[4]=R8(c->r[30]+0x00000074u); // 800C5A38
  c->r[3]=c->r[31]+0xFFFFC848u; // 800C5A3C
  c->r[5]=c->r[1]+0x00000008u; // 800C5A40
  c->lr=0x800C5A48u; f_8018DEB8(c); // 800C5A44
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C5A48
  cmps(c,0,(int32_t)c->r[3],0); // 800C5A4C
  if (crb(c,2)) { goto L_800C5A80; } // 800C5A50
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800C5A54
  cmps(c,0,(int32_t)c->r[0],0); // 800C5A58
  if (crb(c,2)) { goto L_800C5A80; } // 800C5A5C
  c->r[0]=R8(c->r[30]+0x0000006Fu); // 800C5A60
  cmps(c,0,(int32_t)c->r[0],0); // 800C5A64
  if (crb(c,2)) { goto L_800C5A80; } // 800C5A68
  c->r[4]=R8(c->r[30]+0x00000074u); // 800C5A6C
  c->r[3]=c->r[31]+0xFFFFC848u; // 800C5A70
  c->r[5]=0u+0x00000000u; // 800C5A74
  c->lr=0x800C5A7Cu; f_8018E2D4(c); // 800C5A78
  goto L_800C5AB8; // 800C5A7C
L_800C5A80:;
  c->r[3]=0u+0x80550000u; // 800C5A80
  c->r[4]=R8(c->r[30]+0x00000074u); // 800C5A84
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C5A88
  c->r[5]=0u+0x00000001u; // 800C5A8C
  c->lr=0x800C5A94u; f_8018E2D4(c); // 800C5A90
  goto L_800C5AB8; // 800C5A94
L_800C5A98:;
  c->r[4]=R8(c->r[30]+0x00000074u); // 800C5A98
  cmpu(c,0,c->r[4],0x000000FFu); // 800C5A9C
  if (crb(c,2)) { goto L_800C5AB8; } // 800C5AA0
  c->r[3]=0u+0x80550000u; // 800C5AA4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C5AA8
  c->lr=0x800C5AB0u; f_8018D694(c); // 800C5AAC
  c->r[0]=0u+0x000000FFu; // 800C5AB0
  W8(c->r[30]+0x00000074u,c->r[0]); // 800C5AB4
L_800C5AB8:;
  c->r[3]=0u+0x805D0000u; // 800C5AB8
  c->r[3]=c->r[3]+0x00003F6Cu; // 800C5ABC
  c->lr=0x800C5AC4u; f_80037AF0(c); // 800C5AC0
  cmpu(c,0,c->r[3],c->r[30]); // 800C5AC4
  if (crb(c,2)) { goto L_800C5AD4; } // 800C5AC8
  c->r[3]=c->r[30]|c->r[30]; // 800C5ACC
  c->lr=0x800C5AD4u; f_800C5E80(c); // 800C5AD0
L_800C5AD4:;
  c->r[3]=c->r[30]|c->r[30]; // 800C5AD4
  c->lr=0x800C5ADCu; f_801F56F4(c); // 800C5AD8
  c->r[3]=c->r[30]|c->r[30]; // 800C5ADC
  c->lr=0x800C5AE4u; f_800C5FB8(c); // 800C5AE0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C5AE4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800C5AE8
  c->r[30]=R32(c->r[1]+0x00000038u); // 800C5AEC
  c->lr=c->r[0]; // 800C5AF0
  c->r[1]=c->r[1]+0x00000040u; // 800C5AF4
  return; // 800C5AF8
}

// fn_800C5AFC
void f_800C5AFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5AFC
  c->r[0]=c->lr; // 800C5B00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5B04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C5B08
  c->r[31]=c->r[3]|c->r[3]; // 800C5B0C
  c->lr=0x800C5B14u; f_801F4C78(c); // 800C5B10
  c->r[4]=R8(c->r[31]+0x00000074u); // 800C5B14
  cmpu(c,0,c->r[4],0x000000FFu); // 800C5B18
  if (crb(c,2)) { goto L_800C5B34; } // 800C5B1C
  c->r[3]=0u+0x80550000u; // 800C5B20
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C5B24
  c->lr=0x800C5B2Cu; f_8018D738(c); // 800C5B28
  c->r[0]=0u+0x000000FFu; // 800C5B2C
  W8(c->r[31]+0x00000074u,c->r[0]); // 800C5B30
L_800C5B34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5B34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5B38
  c->lr=c->r[0]; // 800C5B3C
  c->r[1]=c->r[1]+0x00000010u; // 800C5B40
  return; // 800C5B44
}

// fn_800C5B48
void f_800C5B48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5B48
  c->r[0]=c->lr; // 800C5B4C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C5B50
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800C5B54
  W32(c->r[1]+0x00000038u,c->r[30]); // 800C5B58
  c->r[30]=c->r[3]|c->r[3]; // 800C5B5C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C5B60
  c->lr=0x800C5B68u; f_801F5418(c); // 800C5B64
  cmps(c,0,(int32_t)c->r[3],0); // 800C5B68
  if (!crb(c,0)) { goto L_800C5C54; } // 800C5B6C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C5B70
  {uint32_t ea=c->r[2]+0xFFFF9EF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5B74
  {uint32_t ea=c->r[2]+0xFFFF9EF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5B78
  c->r[0]=c->r[0]|0x00000080u; // 800C5B7C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800C5B80
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C5B84
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800C5B88
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 800C5B8C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C5B90
  c->lr=0x800C5B98u; f_8025037C(c); // 800C5B94
  c->r[6]=R32(c->r[30]+0x00000394u); // 800C5B98
  c->r[3]=c->r[1]+0x00000020u; // 800C5B9C
  c->r[4]=c->r[30]+0x00000060u; // 800C5BA0
  c->r[5]=c->r[1]+0x0000002Cu; // 800C5BA4
  c->r[6]=c->r[6]+0x000000B0u; // 800C5BA8
  c->r[7]=0u+0x00000000u; // 800C5BAC
  c->lr=0x800C5BB4u; f_8002BE64(c); // 800C5BB0
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 800C5BB4
  c->r[3]=0u+0x805D0000u; // 800C5BB8
  c->r[0]=R32(c->r[30]+0x00000030u); // 800C5BBC
  c->r[3]=c->r[3]+0x00003F6Cu; // 800C5BC0
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5BC4
  c->r[4]=c->r[30]|c->r[30]; // 800C5BC8
  W32(c->r[1]+0x00000014u,c->r[5]); // 800C5BCC
  c->r[7]=c->r[1]+0x00000014u; // 800C5BD0
  c->r[6]=0u+0x0000001Au; // 800C5BD4
  c->r[8]=0u+0x00000000u; // 800C5BD8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C5BDC
  c->r[0]=R32(c->r[30]+0x00000034u); // 800C5BE0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C5BE4
  c->r[3]=R32(c->r[30]+0x00000438u); // 800C5BE8
  c->r[5]=R32(c->r[30]+0x00000394u); // 800C5BEC
  c->lr=0x800C5BF4u; f_801FA6A4(c); // 800C5BF0
  {uint32_t ea=c->r[30]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5BF4
  c->r[6]=0u+0x803A0000u; // 800C5BF8
  {uint32_t ea=c->r[2]+0xFFFF9EF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C5BFC
  c->r[5]=c->r[30]+0x00000044u; // 800C5C00
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5C04
  c->r[6]=c->r[6]+0xFFFFD1E0u; // 800C5C08
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800C5C0C
  c->r[3]=R32(c->r[30]+0x00000438u); // 800C5C10
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800C5C14
  c->r[4]=0u+0x00000000u; // 800C5C18
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800C5C1C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C5C20
  c->lr=0x800C5C28u; f_801FBEC0(c); // 800C5C24
  c->r[7]=0u+0x803D0000u; // 800C5C28
  {uint32_t ea=c->r[7]+0x00000ED8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C5C2C
  c->r[3]=c->r[30]|c->r[30]; // 800C5C30
  c->r[4]=c->r[1]+0x00000008u; // 800C5C34
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C5C38
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C5C3C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C5C40
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C5C44
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C5C48
  c->lr=0x800C5C50u; f_800C5CB0(c); // 800C5C4C
  goto L_800C5C98; // 800C5C50
L_800C5C54:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C5C54
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800C5C58
  cmps(c,0,(int32_t)c->r[0],0); // 800C5C5C
  if (crb(c,2)) { goto L_800C5C98; } // 800C5C60
  c->r[31]=0u+0x805D0000u; // 800C5C64
  c->r[3]=c->r[31]+0x00003F6Cu; // 800C5C68
  c->lr=0x800C5C70u; f_800447E4(c); // 800C5C6C
  cmpu(c,0,c->r[3],0x00000001u); // 800C5C70
  if (!crb(c,2)) { goto L_800C5C84; } // 800C5C74
  c->r[0]=0u+0x00000000u; // 800C5C78
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800C5C7C
  goto L_800C5C90; // 800C5C80
L_800C5C84:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800C5C84
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800C5C88
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800C5C8C
L_800C5C90:;
  c->r[3]=c->r[30]|c->r[30]; // 800C5C90
  c->lr=0x800C5C98u; f_801F5B14(c); // 800C5C94
L_800C5C98:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C5C98
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800C5C9C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800C5CA0
  c->lr=c->r[0]; // 800C5CA4
  c->r[1]=c->r[1]+0x00000040u; // 800C5CA8
  return; // 800C5CAC
}

// fn_800C5CB0
void f_800C5CB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5CB0
  c->r[0]=c->lr; // 800C5CB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5CB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C5CBC
  c->r[31]=c->r[4]|c->r[4]; // 800C5CC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C5CC4
  c->r[30]=c->r[3]|c->r[3]; // 800C5CC8
  c->r[3]=c->r[31]|c->r[31]; // 800C5CCC
  c->lr=0x800C5CD4u; f_802B9FDC(c); // 800C5CD0
  cmps(c,0,(int32_t)c->r[3],0); // 800C5CD4
  if (crb(c,2)) { goto L_800C5CF4; } // 800C5CD8
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C5CDC
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C5CE0
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800C5CE4
  W32(c->r[30]+0x00000020u,c->r[0]); // 800C5CE8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C5CEC
  W32(c->r[30]+0x00000024u,c->r[0]); // 800C5CF0
L_800C5CF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5CF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5CF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C5CFC
  c->lr=c->r[0]; // 800C5D00
  c->r[1]=c->r[1]+0x00000010u; // 800C5D04
  return; // 800C5D08
}

// fn_800C5D0C
void f_800C5D0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5D0C
  c->r[0]=c->lr; // 800C5D10
  c->r[4]=0u+0x805D0000u; // 800C5D14
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C5D18
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C5D1C
  c->r[31]=c->r[3]|c->r[3]; // 800C5D20
  c->r[3]=c->r[4]+0x00003F6Cu; // 800C5D24
  c->lr=0x800C5D2Cu; f_80037AF0(c); // 800C5D28
  cmpu(c,0,c->r[3],c->r[31]); // 800C5D2C
  if (!crb(c,2)) { goto L_800C5D70; } // 800C5D30
  c->r[0]=0u+0x00000001u; // 800C5D34
  c->r[7]=0u+0x803D0000u; // 800C5D38
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800C5D3C
  c->r[3]=c->r[31]|c->r[31]; // 800C5D40
  c->r[4]=c->r[1]+0x00000014u; // 800C5D44
  {uint32_t ea=c->r[7]+0x00000EE4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C5D48
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C5D4C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C5D50
  W32(c->r[1]+0x00000014u,c->r[6]); // 800C5D54
  W32(c->r[1]+0x00000018u,c->r[5]); // 800C5D58
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C5D5C
  c->lr=0x800C5D64u; f_800C5CB0(c); // 800C5D60
  c->r[3]=c->r[31]|c->r[31]; // 800C5D64
  c->lr=0x800C5D6Cu; f_800C5B48(c); // 800C5D68
  goto L_800C5E08; // 800C5D6C
L_800C5D70:;
  c->r[3]=R32(c->r[31]+0x00000438u); // 800C5D70
  c->r[4]=0u+0x00000000u; // 800C5D74
  c->lr=0x800C5D7Cu; f_801FAF00(c); // 800C5D78
  cmps(c,0,(int32_t)c->r[3],0); // 800C5D7C
  if (!crb(c,2)) { goto L_800C5DE8; } // 800C5D80
  c->r[3]=c->r[31]|c->r[31]; // 800C5D84
  c->r[4]=0u+0x00000019u; // 800C5D88
  c->lr=0x800C5D90u; f_801F5AB4(c); // 800C5D8C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C5D90
  c->r[3]=c->r[31]+0x0000002Cu; // 800C5D94
  c->r[4]=c->r[4]+0x0000005Cu; // 800C5D98
  c->lr=0x800C5DA0u; f_800361A0(c); // 800C5D9C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C5DA0
  c->r[3]=c->r[31]+0x00000060u; // 800C5DA4
  c->r[4]=c->r[4]+0x00000068u; // 800C5DA8
  c->lr=0x800C5DB0u; f_800361A0(c); // 800C5DAC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C5DB0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C5DB4
  c->lr=0x800C5DBCu; f_8025037C(c); // 800C5DB8
  c->r[7]=0u+0x803D0000u; // 800C5DBC
  {uint32_t ea=c->r[7]+0x00000EF0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C5DC0
  c->r[3]=c->r[31]|c->r[31]; // 800C5DC4
  c->r[4]=c->r[1]+0x00000008u; // 800C5DC8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C5DCC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C5DD0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C5DD4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C5DD8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C5DDC
  c->lr=0x800C5DE4u; f_800C5CB0(c); // 800C5DE0
  goto L_800C5E08; // 800C5DE4
L_800C5DE8:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C5DE8
  c->r[3]=c->r[31]+0x0000002Cu; // 800C5DEC
  c->r[4]=c->r[4]+0x0000005Cu; // 800C5DF0
  c->lr=0x800C5DF8u; f_800361A0(c); // 800C5DF4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C5DF8
  c->r[3]=c->r[31]+0x00000060u; // 800C5DFC
  c->r[4]=c->r[4]+0x00000068u; // 800C5E00
  c->lr=0x800C5E08u; f_800361A0(c); // 800C5E04
L_800C5E08:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C5E08
  c->r[3]=c->r[31]+0x0000002Cu; // 800C5E0C
  c->r[4]=c->r[4]+0x0000005Cu; // 800C5E10
  c->lr=0x800C5E18u; f_800361A0(c); // 800C5E14
  c->r[3]=c->r[31]|c->r[31]; // 800C5E18
  c->r[4]=0u+0x00000000u; // 800C5E1C
  c->lr=0x800C5E24u; f_801F7C00(c); // 800C5E20
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C5E24
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C5E28
  c->lr=c->r[0]; // 800C5E2C
  c->r[1]=c->r[1]+0x00000030u; // 800C5E30
  return; // 800C5E34
}

// fn_800C5E38
void f_800C5E38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5E38
  c->r[0]=c->lr; // 800C5E3C
  c->r[7]=0u+0x803D0000u; // 800C5E40
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C5E44
  c->r[0]=0u+0x00000000u; // 800C5E48
  c->r[4]=c->r[1]+0x00000008u; // 800C5E4C
  W16(c->r[3]+0x000003BCu,c->r[0]); // 800C5E50
  {uint32_t ea=c->r[7]+0x00000EFCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800C5E54
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C5E58
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C5E5C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C5E60
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C5E64
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C5E68
  c->lr=0x800C5E70u; f_800C5CB0(c); // 800C5E6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C5E70
  c->lr=c->r[0]; // 800C5E74
  c->r[1]=c->r[1]+0x00000020u; // 800C5E78
  return; // 800C5E7C
}

// fn_800C5E80
void f_800C5E80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5E80
  c->r[0]=c->lr; // 800C5E84
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C5E88
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800C5E8C
  W32(c->r[1]+0x00000068u,c->r[30]); // 800C5E90
  c->r[30]=c->r[3]|c->r[3]; // 800C5E94
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800C5E98
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 800C5E9C
  cmps(c,0,(int32_t)c->r[0],128); // 800C5EA0
  if (!crb(c,2)) { goto L_800C5ECC; } // 800C5EA4
  c->r[3]=0u+0x80620000u; // 800C5EA8
  c->r[3]=c->r[3]+0x00007688u; // 800C5EAC
  c->r[3]=R32(c->r[3]+0x00000014u); // 800C5EB0
  cmps(c,0,(int32_t)c->r[3],0); // 800C5EB4
  if (crb(c,2)) { goto L_800C5ECC; } // 800C5EB8
  c->r[4]=0u+0x00000002u; // 800C5EBC
  c->lr=0x800C5EC4u; f_80037670(c); // 800C5EC0
  cmps(c,0,(int32_t)c->r[3],0); // 800C5EC4
  if (!crb(c,2)) { goto L_800C5EFC; } // 800C5EC8
L_800C5ECC:;
  c->r[31]=0u+0x80550000u; // 800C5ECC
  {uint32_t ea=c->r[2]+0xFFFF9EFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5ED0
  c->r[31]=c->r[31]+0x00003D60u; // 800C5ED4
  c->r[5]=c->r[30]|c->r[30]; // 800C5ED8
  c->r[3]=c->r[31]+0x00000010u; // 800C5EDC
  c->r[6]=c->r[30]+0x0000002Cu; // 800C5EE0
  c->r[7]=c->r[1]+0x00000008u; // 800C5EE4
  c->r[4]=0u+0x000001FFu; // 800C5EE8
  c->lr=0x800C5EF0u; f_80226910(c); // 800C5EEC
  c->r[3]=c->r[31]+0x00000010u; // 800C5EF0
  c->r[4]=c->r[1]+0x00000008u; // 800C5EF4
  c->lr=0x800C5EFCu; f_80226D68(c); // 800C5EF8
L_800C5EFC:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C5EFC
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800C5F00
  c->r[30]=R32(c->r[1]+0x00000068u); // 800C5F04
  c->lr=c->r[0]; // 800C5F08
  c->r[1]=c->r[1]+0x00000070u; // 800C5F0C
  return; // 800C5F10
}

// fn_800C5F14
void f_800C5F14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5F14
  c->r[0]=c->lr; // 800C5F18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5F1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C5F20
  c->r[31]=c->r[3]|c->r[3]; // 800C5F24
  c->r[3]=c->r[3]+0x00000210u; // 800C5F28
  c->lr=0x800C5F30u; f_8004BAD4(c); // 800C5F2C
  cmps(c,0,(int32_t)c->r[3],0); // 800C5F30
  if (crb(c,2)) { goto L_800C5FA4; } // 800C5F34
  c->r[0]=R32(c->r[31]+0x00000210u); // 800C5F38
  c->r[4]=c->r[31]|c->r[31]; // 800C5F3C
  c->r[3]=c->r[31]+0x00000210u; // 800C5F40
  c->r[0]=c->r[0]|0xAA000000u; // 800C5F44
  W32(c->r[31]+0x00000210u,c->r[0]); // 800C5F48
  c->lr=0x800C5F50u; f_80043E44(c); // 800C5F4C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5F50
  c->r[3]=c->r[31]+0x00000210u; // 800C5F54
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C5F58
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C5F5C
  c->lr=0x800C5F64u; f_80043E34(c); // 800C5F60
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C5F64
  c->r[4]=0u+0x803A0000u; // 800C5F68
  c->r[4]=c->r[4]+0xFFFFD1ECu; // 800C5F6C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C5F70
  c->r[4]=c->r[4]+0x0000000Du; // 800C5F74
  c->lr=0x800C5F7Cu; f_80256EC4(c); // 800C5F78
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C5F7C
  c->r[5]=c->r[3]|c->r[3]; // 800C5F80
  c->r[3]=c->r[31]+0x00000210u; // 800C5F84
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800C5F88
  c->lr=0x800C5F90u; f_8004BAC8(c); // 800C5F8C
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5F90
  c->r[3]=c->r[31]+0x00000210u; // 800C5F94
  c->f[2]=c->f[1]; // 800C5F98
  c->f[3]=c->f[1]; // 800C5F9C
  c->lr=0x800C5FA4u; f_80043E24(c); // 800C5FA0
L_800C5FA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5FA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5FA8
  c->lr=c->r[0]; // 800C5FAC
  c->r[1]=c->r[1]+0x00000010u; // 800C5FB0
  return; // 800C5FB4
}

// fn_800C5FB8
void f_800C5FB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5FB8
  c->r[0]=c->lr; // 800C5FBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5FC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C5FC4
  c->r[31]=c->r[3]|c->r[3]; // 800C5FC8
  c->r[3]=c->r[3]+0x00000210u; // 800C5FCC
  c->lr=0x800C5FD4u; f_80221698(c); // 800C5FD0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C5FD4
  cmps(c,0,(int32_t)c->r[3],0); // 800C5FD8
  if (crb(c,2)) { goto L_800C5FFC; } // 800C5FDC
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800C5FE0
  cmps(c,0,(int32_t)c->r[0],0); // 800C5FE4
  if (crb(c,2)) { goto L_800C5FFC; } // 800C5FE8
  c->r[0]=R32(c->r[31]+0x00000210u); // 800C5FEC
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800C5FF0
  W32(c->r[31]+0x00000210u,c->r[0]); // 800C5FF4
  goto L_800C6008; // 800C5FF8
L_800C5FFC:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800C5FFC
  c->r[0]=c->r[0]|0x80000000u; // 800C6000
  W32(c->r[31]+0x00000210u,c->r[0]); // 800C6004
L_800C6008:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6008
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C600C
  c->lr=c->r[0]; // 800C6010
  c->r[1]=c->r[1]+0x00000010u; // 800C6014
  return; // 800C6018
}

// fn_800C601C
void f_800C601C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C601C
  c->r[0]=c->lr; // 800C6020
  cmps(c,0,(int32_t)c->r[3],0); // 800C6024
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6028
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C602C
  c->r[31]=c->r[4]|c->r[4]; // 800C6030
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C6034
  c->r[30]=c->r[3]|c->r[3]; // 800C6038
  if (crb(c,2)) { goto L_800C6058; } // 800C603C
  c->r[4]=0u+0x00000000u; // 800C6040
  c->lr=0x800C6048u; f_8026A06C(c); // 800C6044
  cmps(c,0,(int32_t)c->r[31],0); // 800C6048
  if (!crb(c,1)) { goto L_800C6058; } // 800C604C
  c->r[3]=c->r[30]|c->r[30]; // 800C6050
  c->lr=0x800C6058u; f_8026A268(c); // 800C6054
L_800C6058:;
  c->r[3]=c->r[30]|c->r[30]; // 800C6058
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C605C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C6060
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6064
  c->lr=c->r[0]; // 800C6068
  c->r[1]=c->r[1]+0x00000010u; // 800C606C
  return; // 800C6070
}

// fn_800C6074
void f_800C6074(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6074
  c->r[0]=c->lr; // 800C6078
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C607C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800C6080
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800C6084
  c->r[11]=c->r[1]+0x00000030u; // 800C6088
  c->lr=0x800C6090u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C608C
  c->r[30]=c->r[3]|c->r[3]; // 800C6090
  c->r[4]=0u+0x00000000u; // 800C6094
  c->lr=0x800C609Cu; f_801F57D0(c); // 800C6098
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C609C
  c->r[3]=c->r[30]|c->r[30]; // 800C60A0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C60A4
  c->ctr=c->r[12]; // 800C60A8
  if (true) { c->lr=0x800C60B0u; dispatch(c,c->ctr); } // 800C60AC
  c->r[3]=c->r[30]|c->r[30]; // 800C60B0
  c->lr=0x800C60B8u; f_801F4B94(c); // 800C60B4
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C60B8
  c->r[4]=0u+0x00000003u; // 800C60BC
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C60C0
  c->r[5]=0u+0x0000002Bu; // 800C60C4
  c->r[0]=c->r[0]|0x00000800u; // 800C60C8
  c->r[3]=0u+0x80550000u; // 800C60CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800C60D0
  c->f[3]=c->f[1]; // 800C60D4
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800C60D8
  c->r[3]=c->r[3]+0x00003D60u; // 800C60DC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C60E0
  c->r[4]=c->r[30]+0x0000002Cu; // 800C60E4
  W8(c->r[30]+0x0000006Du,c->r[5]); // 800C60E8
  {uint32_t ea=c->r[2]+0xFFFF9F14u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C60EC
  c->r[5]=c->r[30]+0x00000030u; // 800C60F0
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800C60F4
  c->r[6]=0u+0x00000000u; // 800C60F8
  c->r[7]=0u+0x00000000u; // 800C60FC
  c->lr=0x800C6104u; f_801D5488(c); // 800C6100
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C6104
  c->r[3]=c->r[30]|c->r[30]; // 800C6108
  c->lr=0x800C6110u; f_801F58BC(c); // 800C610C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C6110
  c->r[31]=0u+0x00000001u; // 800C6114
  c->r[27]=0u+0x803A0000u; // 800C6118
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800C611C
  c->r[27]=c->r[27]+0xFFFFDC38u; // 800C6120
  c->r[4]=c->r[27]+0x0000001Cu; // 800C6124
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C6128
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C612C
  c->lr=0x800C6134u; f_80256EC4(c); // 800C6130
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C6134
  c->r[5]=0u+0x0000000Cu; // 800C6138
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C613C
  c->r[6]=0u+0x00000001u; // 800C6140
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800C6144
  c->r[3]=c->r[30]|c->r[30]; // 800C6148
  c->f[2]=c->f[1]; // 800C614C
  {uint32_t ea=c->r[30]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C6150
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C6154
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[3]); // 800C6158
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800C615C
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800C6160
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C6164
  c->r[12]=R32(c->r[12]+0x00000064u); // 800C6168
  c->ctr=c->r[12]; // 800C616C
  if (true) { c->lr=0x800C6174u; dispatch(c,c->ctr); } // 800C6170
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C6174
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C6178
  c->lr=0x800C6180u; f_802501B0(c); // 800C617C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800C6180
  c->r[28]=0u+0x00000000u; // 800C6184
  c->r[3]=c->r[30]|c->r[30]; // 800C6188
  W8(c->r[4]+0x0000001Du,c->r[28]); // 800C618C
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800C6190
  c->lr=0x800C6198u; f_801F56F4(c); // 800C6194
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C6198
  c->r[3]=c->r[30]|c->r[30]; // 800C619C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C61A0
  c->ctr=c->r[12]; // 800C61A4
  if (true) { c->lr=0x800C61ACu; dispatch(c,c->ctr); } // 800C61A8
  c->r[3]=0u+0x805D0000u; // 800C61AC
  c->r[4]=c->r[30]+0x0000002Cu; // 800C61B0
  c->r[3]=c->r[3]+0x000078B0u; // 800C61B4
  c->lr=0x800C61BCu; f_802351CC(c); // 800C61B8
  c->r[5]=R32(c->r[30]+0x00000394u); // 800C61BC
  c->r[4]=0u+0x00000000u; // 800C61C0
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800C61C4
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C61C8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C61CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800C61D0
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800C61D4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C61D8
  c->lr=0x800C61E0u; f_80259C78(c); // 800C61DC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C61E0
  c->r[4]=c->r[27]+0x00000025u; // 800C61E4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C61E8
  c->lr=0x800C61F0u; f_80256EC4(c); // 800C61EC
  W8(c->r[30]+0x00000074u,c->r[3]); // 800C61F0
  c->r[4]=c->r[27]+0x0000002Au; // 800C61F4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C61F8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C61FC
  c->lr=0x800C6204u; f_80256EC4(c); // 800C6200
  W8(c->r[30]+0x00000075u,c->r[3]); // 800C6204
  c->r[4]=c->r[27]+0x0000001Cu; // 800C6208
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C620C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C6210
  c->lr=0x800C6218u; f_80256EC4(c); // 800C6214
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6218
  c->r[29]=0u+0x000000FFu; // 800C621C
  c->r[0]=0u+0x00000033u; // 800C6220
  W8(c->r[30]+0x00000076u,c->r[3]); // 800C6224
  c->r[8]=0u+0x803A0000u; // 800C6228
  c->r[4]=c->r[27]+0x0000002Fu; // 800C622C
  W8(c->r[30]+0x00000077u,c->r[28]); // 800C6230
  c->r[5]=c->r[1]+0x00000008u; // 800C6234
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 800C6238
  W8(c->r[30]+0x00000078u,c->r[29]); // 800C623C
  W8(c->r[30]+0x00000079u,c->r[29]); // 800C6240
  W8(c->r[30]+0x0000007Au,c->r[29]); // 800C6244
  W8(c->r[30]+0x0000007Bu,c->r[29]); // 800C6248
  W8(c->r[30]+0x000000ADu,c->r[28]); // 800C624C
  W8(c->r[30]+0x000000AEu,c->r[28]); // 800C6250
  W8(c->r[30]+0x00000088u,c->r[28]); // 800C6254
  W8(c->r[30]+0x00000089u,c->r[28]); // 800C6258
  W8(c->r[30]+0x00000090u,c->r[28]); // 800C625C
  W32(c->r[30]+0x0000008Cu,c->r[28]); // 800C6260
  W8(c->r[30]+0x00000091u,c->r[28]); // 800C6264
  W8(c->r[30]+0x00000092u,c->r[28]); // 800C6268
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[0]);} // 800C626C
  W8(c->r[30]+0x0000008Au,c->r[29]); // 800C6270
  W8(c->r[30]+0x0000007Cu,c->r[29]); // 800C6274
  W8(c->r[30]+0x0000007Eu,c->r[29]); // 800C6278
  W8(c->r[30]+0x0000007Fu,c->r[28]); // 800C627C
  {uint32_t ea=c->r[30]+0x000000A8u; WF32(ea,c->f[0]);} // 800C6280
  W8(c->r[30]+0x000000ACu,c->r[0]); // 800C6284
  {uint32_t ea=c->r[8]+0xFFFFDBA0u; c->r[7]=R32(ea); c->r[8]=ea;} // 800C6288
  c->r[6]=R32(c->r[8]+0x00000004u); // 800C628C
  c->r[3]=R32(c->r[8]+0x00000008u); // 800C6290
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 800C6294
  W32(c->r[1]+0x00000008u,c->r[7]); // 800C6298
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C629C
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C62A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C62A4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C62A8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C62AC
  c->lr=0x800C62B4u; f_8025892C(c); // 800C62B0
  c->r[0]=R16(c->r[30]+0x000000B4u); // 800C62B4
  c->r[4]=0u+0x803A0000u; // 800C62B8
  W8(c->r[30]+0x00000098u,c->r[29]); // 800C62BC
  c->r[3]=c->r[30]+0x00000044u; // 800C62C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFEFFFu; // 800C62C4
  c->r[4]=c->r[4]+0xFFFFD208u; // 800C62C8
  W8(c->r[30]+0x00000099u,c->r[29]); // 800C62CC
  W8(c->r[30]+0x0000009Au,c->r[29]); // 800C62D0
  W16(c->r[30]+0x000000B4u,c->r[0]); // 800C62D4
  c->lr=0x800C62DCu; f_800361A0(c); // 800C62D8
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C62DC
  c->r[3]=c->r[30]+0x0000000Cu; // 800C62E0
  c->lr=0x800C62E8u; f_80037668(c); // 800C62E4
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C62E8
  c->r[3]=c->r[30]+0x00000010u; // 800C62EC
  c->lr=0x800C62F4u; f_80037668(c); // 800C62F0
  W8(c->r[30]+0x00000093u,c->r[31]); // 800C62F4
  c->r[3]=c->r[30]|c->r[30]; // 800C62F8
  {uint32_t ea=c->r[2]+0xFFFF9F18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C62FC
  c->r[4]=c->r[30]+0x0000009Cu; // 800C6300
  c->r[5]=c->r[30]+0x0000009Eu; // 800C6304
  c->r[6]=c->r[30]+0x000000A0u; // 800C6308
  c->r[7]=c->r[30]+0x000000A2u; // 800C630C
  c->lr=0x800C6314u; f_801F5EE4(c); // 800C6310
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800C6314
  c->r[11]=c->r[1]+0x00000030u; // 800C6318
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800C631C
  c->lr=0x800C6324u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C6320
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C6324
  c->lr=c->r[0]; // 800C6328
  c->r[1]=c->r[1]+0x00000040u; // 800C632C
  return; // 800C6330
}

// fn_800C6334
void f_800C6334(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6334
  c->r[0]=c->lr; // 800C6338
  W32(c->r[1]+0x00000134u,c->r[0]); // 800C633C
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 800C6340
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 800C6344
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 800C6348
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 800C634C
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[29]);} // 800C6350
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,29,ea,0,0);} // 800C6354
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[28]);} // 800C6358
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,28,ea,0,0);} // 800C635C
  c->r[11]=c->r[1]+0x000000F0u; // 800C6360
  c->lr=0x800C6368u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C6364
  c->r[4]=R16(c->r[3]+0x000003BEu); // 800C6368
  c->r[0]=0u+0x00000000u; // 800C636C
  W8(c->r[3]+0x000000ADu,c->r[0]); // 800C6370
  c->r[31]=c->r[3]|c->r[3]; // 800C6374
  c->r[0]=rotl(c->r[4],0)&0xFFFFBFFFu; // 800C6378
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800C637C
  c->lr=0x800C6384u; f_800C6B1C(c); // 800C6380
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C6384
  c->r[3]=c->r[31]|c->r[31]; // 800C6388
  c->r[12]=R32(c->r[12]+0x00000068u); // 800C638C
  c->ctr=c->r[12]; // 800C6390
  if (true) { c->lr=0x800C6398u; dispatch(c,c->ctr); } // 800C6394
  c->r[3]=c->r[31]|c->r[31]; // 800C6398
  c->lr=0x800C63A0u; f_801F4C0C(c); // 800C639C
  c->r[3]=c->r[31]|c->r[31]; // 800C63A0
  c->lr=0x800C63A8u; f_800C7A38(c); // 800C63A4
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800C63A8
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800C63AC
  if (!crb(c,2)) { goto L_800C63E0; } // 800C63B0
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C63B4
  c->lr=0x800C63BCu; f_80035554(c); // 800C63B8
  {uint32_t ea=c->r[2]+0xFFFF9F1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C63BC
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C63C0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800C63C4
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C63C8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800C63CC
  fcmp(c,0,c->f[1],c->f[0]); // 800C63D0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[1]);} // 800C63D4
  if (!crb(c,0)) { goto L_800C63E0; } // 800C63D8
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C63DC
L_800C63E0:;
  c->r[0]=R16(c->r[31]+0x000000B4u); // 800C63E0
  c->r[0]=rotl(c->r[0],20)&0x00000001u; cr0(c,c->r[0]); // 800C63E4
  if (crb(c,2)) { goto L_800C63F8; } // 800C63E8
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C63EC
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 800C63F0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C63F4
L_800C63F8:;
  {uint32_t ea=c->r[2]+0xFFFF9F20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C63F8
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C63FC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800C6400
  c->lr=0x800C6408u; f_802C10A8(c); // 800C6404
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C6408
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C640C
  {uint32_t ea=c->r[2]+0xFFFF9F20u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C6410
  c->f[3]=c->ps1[3]=S(std::fma(c->f[3],c->f[1],c->f[0])); // 800C6414
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6418
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 800C641C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[3]);} // 800C6420
  c->lr=0x800C6428u; f_802C1080(c); // 800C6424
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C6428
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C642C
  c->r[0]=R16(c->r[31]+0x000000B4u); // 800C6430
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800C6434
  c->r[0]=rotl(c->r[0],20)&0x00000001u; cr0(c,c->r[0]); // 800C6438
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800C643C
  if (!crb(c,2)) { goto L_800C6774; } // 800C6440
  c->r[3]=c->r[31]|c->r[31]; // 800C6444
  c->lr=0x800C644Cu; f_800567B4(c); // 800C6448
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800C644C
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800C6450
  if (crb(c,2)) { goto L_800C6728; } // 800C6454
  c->r[30]=0u+0x803A0000u; // 800C6458
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[29]=c->ps1[29]=RF32(ea);} // 800C645C
  {uint32_t ea=c->r[2]+0xFFFF9F2Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800C6460
  c->r[30]=c->r[30]+0xFFFFDC38u; // 800C6464
  {uint32_t ea=c->r[2]+0xFFFF9F28u; c->f[28]=c->ps1[28]=RF32(ea);} // 800C6468
  c->r[28]=0u+0x00000000u; // 800C646C
  c->r[29]=0u+0x80550000u; // 800C6470
L_800C6474:;
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 800C6474
  c->r[3]=c->r[31]+c->r[0]; // 800C6478
  c->r[4]=R8(c->r[3]+0x00000098u); // 800C647C
  cmpu(c,0,c->r[4],0x000000FFu); // 800C6480
  if (crb(c,2)) { goto L_800C65E4; } // 800C6484
  c->r[3]=c->r[29]+0xFFFFCE54u; // 800C6488
  c->lr=0x800C6490u; f_8019C920(c); // 800C648C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6490
  c->r[27]=c->r[3]|c->r[3]; // 800C6494
  if (crb(c,2)) { goto L_800C65E4; } // 800C6498
  c->r[4]=c->r[1]+0x00000014u; // 800C649C
  c->r[5]=0u+0x00000000u; // 800C64A0
  c->lr=0x800C64A8u; f_8007C6C8(c); // 800C64A4
  c->r[3]=R32(c->r[1]+0x00000014u); // 800C64A8
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800C64AC
  cmps(c,0,(int32_t)c->r[0],0); // 800C64B0
  if (!crb(c,2)) { goto L_800C65E4; } // 800C64B4
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 800C64B8
  c->r[26]=0u+0x00000001u; // 800C64BC
  c->r[0]=R32(c->r[27]+0x00000030u); // 800C64C0
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 800C64C4
  W32(c->r[1]+0x000000A0u,c->r[0]); // 800C64C8
  c->r[0]=R32(c->r[27]+0x00000034u); // 800C64CC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800C64D0
  c->r[0]=R8(c->r[27]+0x0000006Cu); // 800C64D4
  cmpu(c,0,c->r[0],0x00000004u); // 800C64D8
  if (!crb(c,2)) { goto L_800C6540; } // 800C64DC
  c->r[0]=R8(c->r[27]+0x0000006Du); // 800C64E0
  cmpu(c,0,c->r[0],0x0000000Eu); // 800C64E4
  if (!crb(c,2)) { goto L_800C6540; } // 800C64E8
  c->r[3]=c->r[27]|c->r[27]; // 800C64EC
  c->lr=0x800C64F4u; f_800679A8(c); // 800C64F0
  cmps(c,0,(int32_t)c->r[3],0); // 800C64F4
  if (crb(c,2)) { goto L_800C6538; } // 800C64F8
  c->r[3]=c->r[27]|c->r[27]; // 800C64FC
  c->r[4]=0u+0x00000000u; // 800C6500
  c->lr=0x800C6508u; f_80039840(c); // 800C6504
  c->r[4]=c->r[30]+0x0000002Au; // 800C6508
  c->r[5]=c->r[1]+0x000000A8u; // 800C650C
  c->r[6]=0u+0x00000001u; // 800C6510
  c->lr=0x800C6518u; f_80257018(c); // 800C6514
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C6518
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C651C
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6520
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[2]);} // 800C6524
  {uint32_t ea=c->r[2]+0xFFFF9F24u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C6528
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[1]);} // 800C652C
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 800C6530
  goto L_800C6550; // 800C6534
L_800C6538:;
  c->r[26]=0u+0x00000000u; // 800C6538
  goto L_800C6550; // 800C653C
L_800C6540:;
  c->r[3]=c->r[1]+0x0000009Cu; // 800C6540
  c->r[4]=c->r[27]+0x0000002Cu; // 800C6544
  c->lr=0x800C654Cu; f_800361A0(c); // 800C6548
  {uint32_t ea=c->r[2]+0xFFFF9F24u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C654C
L_800C6550:;
  cmps(c,0,(int32_t)c->r[26],0); // 800C6550
  if (crb(c,2)) { goto L_800C65E4; } // 800C6554
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6558
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C655C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800C6560
  c->lr=0x800C6568u; f_8003EA88(c); // 800C6564
  fcmp(c,0,c->f[1],c->f[28]); // 800C6568
  if (!crb(c,0)) { goto L_800C65E4; } // 800C656C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6570
  c->r[3]=c->r[1]+0x0000009Cu; // 800C6574
  c->r[7]=R32(c->r[1]+0x0000009Cu); // 800C6578
  c->r[4]=c->r[31]+0x0000002Cu; // 800C657C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 800C6580
  c->r[5]=c->r[1]+0x00000090u; // 800C6584
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800C6588
  c->r[6]=R32(c->r[1]+0x000000A0u); // 800C658C
  W32(c->r[1]+0x00000090u,c->r[7]); // 800C6590
  W32(c->r[1]+0x00000094u,c->r[6]); // 800C6594
  W32(c->r[1]+0x00000098u,c->r[0]); // 800C6598
  c->lr=0x800C65A0u; f_80296A70(c); // 800C659C
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[29]);} // 800C65A0
  c->r[3]=c->r[1]+0x00000090u; // 800C65A4
  c->lr=0x800C65ACu; f_80296B0C(c); // 800C65A8
  fcmp(c,0,c->f[1],c->f[31]); // 800C65AC
  if (!crb(c,0)) { goto L_800C65E4; } // 800C65B0
  c->r[3]=c->r[1]+0x00000090u; // 800C65B4
  c->r[4]=c->r[3]|c->r[3]; // 800C65B8
  c->lr=0x800C65C0u; f_80296AB0(c); // 800C65BC
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[30]); // 800C65C0
  c->r[3]=c->r[1]+0x00000090u; // 800C65C4
  c->r[4]=c->r[3]|c->r[3]; // 800C65C8
  c->f[1]=c->f[31]; // 800C65CC
  c->lr=0x800C65D4u; f_80296A94(c); // 800C65D0
  c->r[3]=c->r[1]+0x0000009Cu; // 800C65D4
  c->r[4]=c->r[1]+0x00000090u; // 800C65D8
  c->r[5]=c->r[31]+0x0000002Cu; // 800C65DC
  c->lr=0x800C65E4u; f_80296A70(c); // 800C65E0
L_800C65E4:;
  c->r[28]=c->r[28]+0x00000001u; // 800C65E4
  cmpu(c,0,c->r[28],0x00000003u); // 800C65E8
  if (crb(c,0)) { IRQCHK(c); goto L_800C6474; } // 800C65EC
  c->r[26]=0u+0x803A0000u; // 800C65F0
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C65F4
  c->r[26]=c->r[26]+0xFFFFD278u; // 800C65F8
  c->r[27]=0u+0x00000001u; // 800C65FC
  c->r[28]=0u+0x00000000u; // 800C6600
  goto L_800C66F8; // 800C6604
L_800C6608:;
  c->r[3]=R8(c->r[26]+0x00000029u); // 800C6608
  c->r[0]=R8(c->r[31]+0x000000A4u); // 800C660C
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800C6610
  if (crb(c,2)) { goto L_800C66F0; } // 800C6614
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6618
  {uint32_t ea=c->r[26]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C661C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800C6620
  c->lr=0x800C6628u; f_8003EA88(c); // 800C6624
  {uint32_t ea=c->r[26]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6628
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[31]);} // 800C662C
  fcmp(c,0,c->f[1],c->f[0]); // 800C6630
  if (!crb(c,0)) { goto L_800C66F0; } // 800C6634
  c->r[3]=c->r[1]+0x00000008u; // 800C6638
  c->r[29]=0u+0x00000001u; // 800C663C
  c->lr=0x800C6644u; f_800C69FC(c); // 800C6640
  c->r[30]=0u+0x00000000u; // 800C6644
  goto L_800C66C8; // 800C6648
L_800C664C:;
  c->r[0]=rotl(c->r[30],3)&0x000007F8u; // 800C664C
  c->r[3]=c->r[1]+0x00000008u; // 800C6650
  {uint32_t ea=c->r[26]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6654
  c->r[8]=c->r[26]+c->r[0]; // 800C6658
  {uint32_t ea=c->r[8]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C665C
  c->r[4]=c->r[1]+0x00000078u; // 800C6660
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 800C6664
  c->r[5]=c->r[1]+0x0000006Cu; // 800C6668
  {uint32_t ea=c->r[8]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C666C
  c->r[6]=c->r[1]+0x00000060u; // 800C6670
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6674
  c->r[7]=c->r[31]+0x0000002Cu; // 800C6678
  {uint32_t ea=c->r[8]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C667C
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 800C6680
  {uint32_t ea=c->r[8]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6684
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 800C6688
  {uint32_t ea=c->r[8]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C668C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 800C6690
  {uint32_t ea=c->r[31]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C6694
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[3]);} // 800C6698
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[2]);} // 800C669C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 800C66A0
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C66A4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 800C66A8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800C66AC
  c->lr=0x800C66B4u; f_801D0080(c); // 800C66B0
  cmps(c,0,(int32_t)c->r[3],0); // 800C66B4
  if (crb(c,2)) { goto L_800C66C4; } // 800C66B8
  c->r[29]=0u+0x00000000u; // 800C66BC
  c->r[30]=0u+0x00000002u; // 800C66C0
L_800C66C4:;
  c->r[30]=c->r[30]+0x00000001u; // 800C66C4
L_800C66C8:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 800C66C8
  cmpu(c,0,c->r[0],0x00000002u); // 800C66CC
  if (crb(c,0)) { IRQCHK(c); goto L_800C664C; } // 800C66D0
  cmps(c,0,(int32_t)c->r[29],0); // 800C66D4
  if (!crb(c,2)) { goto L_800C66E4; } // 800C66D8
  c->r[27]=0u+0x00000000u; // 800C66DC
  c->r[28]=R8(c->r[31]+0x000000ACu); // 800C66E0
L_800C66E4:;
  c->r[3]=c->r[1]+0x00000008u; // 800C66E4
  c->r[4]=0u+0xFFFFFFFFu; // 800C66E8
  c->lr=0x800C66F0u; f_800C6978(c); // 800C66EC
L_800C66F0:;
  c->r[26]=c->r[26]+0x0000002Cu; // 800C66F0
  c->r[28]=c->r[28]+0x00000001u; // 800C66F4
L_800C66F8:;
  c->r[0]=R8(c->r[31]+0x000000ACu); // 800C66F8
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 800C66FC
  cmpu(c,0,c->r[3],c->r[0]); // 800C6700
  if (crb(c,0)) { IRQCHK(c); goto L_800C6608; } // 800C6704
  cmps(c,0,(int32_t)c->r[27],0); // 800C6708
  if (crb(c,2)) { goto L_800C6728; } // 800C670C
  c->r[3]=c->r[31]|c->r[31]; // 800C6710
  c->r[4]=0u+0x00000000u; // 800C6714
  c->lr=0x800C671Cu; f_800C7E88(c); // 800C6718
  c->r[3]=c->r[31]|c->r[31]; // 800C671C
  c->r[4]=0u+0x00000001u; // 800C6720
  c->lr=0x800C6728u; f_800C7E88(c); // 800C6724
L_800C6728:;
  c->r[3]=c->r[1]+0x00000054u; // 800C6728
  c->r[4]=c->r[31]+0x0000002Cu; // 800C672C
  c->lr=0x800C6734u; f_800361A0(c); // 800C6730
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6734
  c->r[3]=0u+0x80550000u; // 800C6738
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C673C
  c->r[3]=c->r[3]+0x00003D60u; // 800C6740
  c->f[3]=c->f[1]; // 800C6744
  {uint32_t ea=c->r[2]+0xFFFF9F14u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C6748
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800C674C
  c->r[4]=c->r[1]+0x00000054u; // 800C6750
  c->r[5]=c->r[1]+0x00000010u; // 800C6754
  c->r[6]=0u+0x00040000u; // 800C6758
  c->r[7]=0u+0x00000000u; // 800C675C
  c->lr=0x800C6764u; f_801D5488(c); // 800C6760
  cmpu(c,0,c->r[3],0x00000001u); // 800C6764
  if (!crb(c,2)) { goto L_800C6774; } // 800C6768
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C676C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800C6770
L_800C6774:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C6774
  c->r[26]=0u+0x00000000u; // 800C6778
  c->r[27]=0u+0x00000000u; // 800C677C
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C6780
  cmpu(c,0,c->r[0],0x0000000Du); // 800C6784
  if (crb(c,1)) { goto L_800C67B4; } // 800C6788
  c->r[3]=0u+0x803D0000u; // 800C678C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C6790
  c->r[3]=c->r[3]+0x00000FBCu; // 800C6794
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C6798
  c->ctr=c->r[3]; // 800C679C
  if (true) { switch (c->ctr) { case 0x800C67A4u: goto L_800C67A4; case 0x800C67ACu: goto L_800C67AC; case 0x800C67B4u: goto L_800C67B4; default: break; } dispatch(c,c->ctr); return; } // 800C67A0
L_800C67A4:;
  c->r[26]=0u+0x00000001u; // 800C67A4
  goto L_800C67B4; // 800C67A8
L_800C67AC:;
  c->r[26]=0u+0x00000001u; // 800C67AC
  c->r[27]=0u+0x00000001u; // 800C67B0
L_800C67B4:;
  c->r[3]=c->r[31]|c->r[31]; // 800C67B4
  c->r[4]=0u+0x00000000u; // 800C67B8
  c->lr=0x800C67C0u; f_801F7C00(c); // 800C67BC
  c->r[3]=c->r[31]+0x00000210u; // 800C67C0
  c->lr=0x800C67C8u; f_80221698(c); // 800C67C4
  c->r[3]=c->r[31]|c->r[31]; // 800C67C8
  c->lr=0x800C67D0u; f_800C9B60(c); // 800C67CC
  c->r[3]=c->r[31]|c->r[31]; // 800C67D0
  c->lr=0x800C67D8u; f_800C7774(c); // 800C67D4
  cmps(c,0,(int32_t)c->r[26],0); // 800C67D8
  if (crb(c,2)) { goto L_800C6938; } // 800C67DC
  c->r[3]=0u+0x00000000u; // 800C67E0
  W32(c->r[1]+0x00000048u,c->r[3]); // 800C67E4
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800C67E8
  W32(c->r[1]+0x00000050u,c->r[3]); // 800C67EC
  c->r[0]=R8(c->r[31]+0x00000077u); // 800C67F0
  W32(c->r[1]+0x00000018u,c->r[3]); // 800C67F4
  cmps(c,0,(int32_t)c->r[0],0); // 800C67F8
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800C67FC
  W32(c->r[1]+0x00000020u,c->r[3]); // 800C6800
  if (!crb(c,2)) { goto L_800C682C; } // 800C6804
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C6808
  c->r[5]=c->r[1]+0x00000048u; // 800C680C
  c->r[4]=R8(c->r[31]+0x00000074u); // 800C6810
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C6814
  c->lr=0x800C681Cu; f_8025EA54(c); // 800C6818
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C681C
  c->r[0]=0u+0x00000001u; // 800C6820
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800C6824
  W8(c->r[31]+0x00000077u,c->r[0]); // 800C6828
L_800C682C:;
  cmps(c,0,(int32_t)c->r[27],0); // 800C682C
  if (crb(c,2)) { goto L_800C68E4; } // 800C6830
  c->r[3]=R32(c->r[31]+0x00000038u); // 800C6834
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 800C6838
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800C683C
  W32(c->r[1]+0x00000040u,c->r[0]); // 800C6840
  c->r[0]=R32(c->r[31]+0x00000040u); // 800C6844
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C6848
  c->r[0]=R16(c->r[31]+0x000000B4u); // 800C684C
  c->r[0]=rotl(c->r[0],20)&0x00000001u; cr0(c,c->r[0]); // 800C6850
  if (!crb(c,2)) { goto L_800C6890; } // 800C6854
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6858
  c->r[3]=0u+0x80550000u; // 800C685C
  {uint32_t ea=c->r[2]+0xFFFF9F28u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C6860
  c->r[3]=c->r[3]+0x00003D60u; // 800C6864
  c->f[3]=c->f[1]; // 800C6868
  c->r[4]=c->r[1]+0x0000003Cu; // 800C686C
  c->r[5]=c->r[1]+0x0000000Cu; // 800C6870
  c->r[6]=0u+0x00000000u; // 800C6874
  c->r[7]=0u+0x00000000u; // 800C6878
  c->lr=0x800C6880u; f_801D5488(c); // 800C687C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6880
  if (crb(c,2)) { goto L_800C6890; } // 800C6884
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6888
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800C688C
L_800C6890:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800C6890
  c->r[4]=c->r[1]+0x0000003Cu; // 800C6894
  c->lr=0x800C689Cu; f_80296CAC(c); // 800C6898
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C689C
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[5]=c->ps1[5]=RF32(ea);} // 800C68A0
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[1]); // 800C68A4
  {uint32_t ea=c->r[2]+0xFFFF9F34u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C68A8
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[5]); // 800C68AC
  {uint32_t ea=c->r[2]+0xFFFF9F38u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C68B0
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C68B4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[3]); // 800C68B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[5]); // 800C68BC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800C68C0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[3]); // 800C68C4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800C68C8
  fcmp(c,0,c->f[0],c->f[4]); // 800C68CC
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800C68D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C68D4
  if (!crb(c,2)) { goto L_800C68E4; } // 800C68D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 800C68DC
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800C68E0
L_800C68E4:;
  c->r[0]=0u+0x00000000u; // 800C68E4
  c->r[3]=c->r[1]+0x00000048u; // 800C68E8
  W32(c->r[1]+0x00000030u,c->r[0]); // 800C68EC
  c->r[4]=c->r[1]+0x00000030u; // 800C68F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C68F4
  W32(c->r[1]+0x00000038u,c->r[0]); // 800C68F8
  c->lr=0x800C6900u; f_800361A0(c); // 800C68FC
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6900
  c->r[5]=c->r[1]+0x00000024u; // 800C6904
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 800C6908
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800C690C
  c->r[0]=R32(c->r[1]+0x00000050u); // 800C6910
  c->r[4]=R32(c->r[1]+0x00000048u); // 800C6914
  W32(c->r[1]+0x00000028u,c->r[3]); // 800C6918
  W32(c->r[1]+0x00000024u,c->r[4]); // 800C691C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800C6920
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C6924
  c->r[4]=R8(c->r[31]+0x00000074u); // 800C6928
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C692C
  c->lr=0x800C6934u; f_8025E9C0(c); // 800C6930
  goto L_800C6940; // 800C6934
L_800C6938:;
  c->r[0]=0u+0x00000000u; // 800C6938
  W8(c->r[31]+0x00000077u,c->r[0]); // 800C693C
L_800C6940:;
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 800C6940
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 800C6944
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,30,ea,0,0);} // 800C6948
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 800C694C
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,29,ea,0,0);} // 800C6950
  {uint32_t ea=c->r[1]+0x00000100u; c->f[29]=RF64(ea);} // 800C6954
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,28,ea,0,0);} // 800C6958
  c->r[11]=c->r[1]+0x000000F0u; // 800C695C
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[28]=RF64(ea);} // 800C6960
  c->lr=0x800C6968u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C6964
  c->r[0]=R32(c->r[1]+0x00000134u); // 800C6968
  c->lr=c->r[0]; // 800C696C
  c->r[1]=c->r[1]+0x00000130u; // 800C6970
  return; // 800C6974
}

// dtor_800C6978
void f_800C6978(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6978
  c->r[0]=c->lr; // 800C697C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6980
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6984
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C6988
  c->r[31]=c->r[3]|c->r[3]; // 800C698C
  if (crb(c,2)) { goto L_800C69A0; } // 800C6990
  cmps(c,0,(int32_t)c->r[4],0); // 800C6994
  if (!crb(c,1)) { goto L_800C69A0; } // 800C6998
  c->lr=0x800C69A0u; f_800C69B8(c); // 800C699C
L_800C69A0:;
  c->r[3]=c->r[31]|c->r[31]; // 800C69A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C69A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C69A8
  c->lr=c->r[0]; // 800C69AC
  c->r[1]=c->r[1]+0x00000010u; // 800C69B0
  return; // 800C69B4
}

// dtor_800C69B8
void f_800C69B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C69B8
  c->r[0]=c->lr; // 800C69BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C69C0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C69C4
  c->r[31]=c->r[1]|c->r[1]; // 800C69C8
  c->lr=0x800C69D0u; f_8002B588(c); // 800C69CC
  goto L_800C69E0; // 800C69D0
  c->r[3]=c->r[31]+0x00000008u; // 800C69D4
  c->lr=0x800C69DCu; f_802BB5E0(c); // 800C69D8
L_800C69DC:;
  IRQCHK(c); goto L_800C69DC; // 800C69DC
L_800C69E0:;
  c->r[10]=c->r[31]|c->r[31]; // 800C69E0
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 800C69E4
  c->r[10]=R32(c->r[1]+0x00000000u); // 800C69E8
  c->r[0]=R32(c->r[10]+0x00000004u); // 800C69EC
  c->r[1]=c->r[10]|c->r[10]; // 800C69F0
  c->lr=c->r[0]; // 800C69F4
  return; // 800C69F8
}

// fn_800C69FC
void f_800C69FC(Ctx* __restrict c) {
  return; // 800C69FC
}

// fn_800C6A00
void f_800C6A00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6A00
  c->r[0]=c->lr; // 800C6A04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6A08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C6A0C
  c->r[31]=c->r[3]|c->r[3]; // 800C6A10
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C6A14
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800C6A18
  c->lr=0x800C6A20u; f_802501B0(c); // 800C6A1C
  c->r[3]=c->r[31]|c->r[31]; // 800C6A20
  c->r[4]=0u+0x00000000u; // 800C6A24
  c->lr=0x800C6A2Cu; f_801F5244(c); // 800C6A28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6A2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C6A30
  c->lr=c->r[0]; // 800C6A34
  c->r[1]=c->r[1]+0x00000010u; // 800C6A38
  return; // 800C6A3C
}

// fn_800C6A40
void f_800C6A40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6A40
  c->r[0]=c->lr; // 800C6A44
  c->r[5]=0u+0x00000000u; // 800C6A48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6A4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C6A50
  c->r[31]=c->r[3]|c->r[3]; // 800C6A54
  c->r[3]=0u+0x00000041u; // 800C6A58
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C6A5C
  c->r[4]=c->r[4]+0x0000010Cu; // 800C6A60
  c->lr=0x800C6A68u; f_8024EE50(c); // 800C6A64
  cmps(c,0,(int32_t)c->r[3],0); // 800C6A68
  if (!crb(c,2)) { goto L_800C6B04; } // 800C6A6C
  c->r[3]=c->r[31]+0x00000210u; // 800C6A70
  c->r[4]=0u+0x000000E1u; // 800C6A74
  c->lr=0x800C6A7Cu; f_80221630(c); // 800C6A78
  cmps(c,0,(int32_t)c->r[3],0); // 800C6A7C
  if (crb(c,2)) { goto L_800C6AF4; } // 800C6A80
  c->r[0]=R32(c->r[31]+0x00000210u); // 800C6A84
  c->r[4]=c->r[31]|c->r[31]; // 800C6A88
  c->r[3]=c->r[31]+0x00000210u; // 800C6A8C
  c->r[0]=c->r[0]|0xAA000000u; // 800C6A90
  W32(c->r[31]+0x00000210u,c->r[0]); // 800C6A94
  c->lr=0x800C6A9Cu; f_80043E44(c); // 800C6A98
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C6A9C
  c->r[4]=0u+0x803A0000u; // 800C6AA0
  c->r[4]=c->r[4]+0xFFFFDC38u; // 800C6AA4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C6AA8
  c->r[4]=c->r[4]+0x00000038u; // 800C6AAC
  c->lr=0x800C6AB4u; f_80256EC4(c); // 800C6AB0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C6AB4
  c->r[5]=c->r[3]|c->r[3]; // 800C6AB8
  c->r[3]=c->r[31]+0x00000210u; // 800C6ABC
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800C6AC0
  c->lr=0x800C6AC8u; f_8004BAC8(c); // 800C6AC4
  {uint32_t ea=c->r[2]+0xFFFF9F3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6AC8
  c->r[3]=c->r[31]+0x00000210u; // 800C6ACC
  {uint32_t ea=c->r[2]+0xFFFF9F40u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C6AD0
  {uint32_t ea=c->r[2]+0xFFFF9F44u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C6AD4
  c->lr=0x800C6ADCu; f_80043E24(c); // 800C6AD8
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6ADC
  c->r[3]=c->r[31]+0x00000210u; // 800C6AE0
  {uint32_t ea=c->r[2]+0xFFFF9F48u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C6AE4
  c->f[3]=c->f[1]; // 800C6AE8
  c->lr=0x800C6AF0u; f_80043E14(c); // 800C6AEC
  goto L_800C6AFC; // 800C6AF0
L_800C6AF4:;
  c->r[3]=0u+0x00000000u; // 800C6AF4
  goto L_800C6B08; // 800C6AF8
L_800C6AFC:;
  c->r[3]=0u+0x00000001u; // 800C6AFC
  goto L_800C6B08; // 800C6B00
L_800C6B04:;
  c->r[3]=0u+0x00000000u; // 800C6B04
L_800C6B08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6B08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C6B0C
  c->lr=c->r[0]; // 800C6B10
  c->r[1]=c->r[1]+0x00000010u; // 800C6B14
  return; // 800C6B18
}

// fn_800C6B1C
void f_800C6B1C(Ctx* __restrict c) {
  return; // 800C6B1C
}

// fn_800C6B20
void f_800C6B20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6B20
  c->r[0]=c->lr; // 800C6B24
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C6B28
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C6B2C
  c->r[31]=0u+0x803D0000u; // 800C6B30
  c->r[31]=c->r[31]+0x00000FA0u; // 800C6B34
  W32(c->r[1]+0x00000048u,c->r[30]); // 800C6B38
  c->r[30]=c->r[3]|c->r[3]; // 800C6B3C
  c->lr=0x800C6B44u; f_801F4F28(c); // 800C6B40
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800C6B44
  cmps(c,0,(int32_t)c->r[0],102); // 800C6B48
  if (crb(c,2)) { goto L_800C6BD4; } // 800C6B4C
  if (!crb(c,0)) { goto L_800C6B64; } // 800C6B50
  cmps(c,0,(int32_t)c->r[0],100); // 800C6B54
  if (crb(c,2)) { goto L_800C6B74; } // 800C6B58
  if (!crb(c,0)) { goto L_800C6BA4; } // 800C6B5C
  goto L_800C6C60; // 800C6B60
L_800C6B64:;
  cmps(c,0,(int32_t)c->r[0],104); // 800C6B64
  if (crb(c,2)) { goto L_800C6C34; } // 800C6B68
  if (!crb(c,0)) { goto L_800C6C60; } // 800C6B6C
  goto L_800C6C04; // 800C6B70
L_800C6B74:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800C6B74
  c->r[5]=c->r[31]+0x00000054u; // 800C6B78
  c->r[3]=c->r[30]|c->r[30]; // 800C6B7C
  c->r[4]=c->r[1]+0x00000038u; // 800C6B80
  c->r[7]=R32(c->r[31]+0x00000054u); // 800C6B84
  c->r[6]=R32(c->r[5]+0x00000004u); // 800C6B88
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C6B8C
  W32(c->r[1]+0x00000038u,c->r[7]); // 800C6B90
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 800C6B94
  W32(c->r[1]+0x00000040u,c->r[0]); // 800C6B98
  c->lr=0x800C6BA0u; f_800C6C78(c); // 800C6B9C
  goto L_800C6C60; // 800C6BA0
L_800C6BA4:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800C6BA4
  c->r[5]=c->r[31]+0x00000060u; // 800C6BA8
  c->r[3]=c->r[30]|c->r[30]; // 800C6BAC
  c->r[4]=c->r[1]+0x0000002Cu; // 800C6BB0
  c->r[7]=R32(c->r[31]+0x00000060u); // 800C6BB4
  c->r[6]=R32(c->r[5]+0x00000004u); // 800C6BB8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C6BBC
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800C6BC0
  W32(c->r[1]+0x00000030u,c->r[6]); // 800C6BC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C6BC8
  c->lr=0x800C6BD0u; f_800C6C78(c); // 800C6BCC
  goto L_800C6C60; // 800C6BD0
L_800C6BD4:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800C6BD4
  c->r[5]=c->r[31]+0x0000006Cu; // 800C6BD8
  c->r[3]=c->r[30]|c->r[30]; // 800C6BDC
  c->r[4]=c->r[1]+0x00000020u; // 800C6BE0
  c->r[7]=R32(c->r[31]+0x0000006Cu); // 800C6BE4
  c->r[6]=R32(c->r[5]+0x00000004u); // 800C6BE8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C6BEC
  W32(c->r[1]+0x00000020u,c->r[7]); // 800C6BF0
  W32(c->r[1]+0x00000024u,c->r[6]); // 800C6BF4
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C6BF8
  c->lr=0x800C6C00u; f_800C6C78(c); // 800C6BFC
  goto L_800C6C60; // 800C6C00
L_800C6C04:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800C6C04
  c->r[5]=c->r[31]+0x00000078u; // 800C6C08
  c->r[3]=c->r[30]|c->r[30]; // 800C6C0C
  c->r[4]=c->r[1]+0x00000014u; // 800C6C10
  c->r[7]=R32(c->r[31]+0x00000078u); // 800C6C14
  c->r[6]=R32(c->r[5]+0x00000004u); // 800C6C18
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C6C1C
  W32(c->r[1]+0x00000014u,c->r[7]); // 800C6C20
  W32(c->r[1]+0x00000018u,c->r[6]); // 800C6C24
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C6C28
  c->lr=0x800C6C30u; f_800C6C78(c); // 800C6C2C
  goto L_800C6C60; // 800C6C30
L_800C6C34:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800C6C34
  c->r[5]=c->r[31]+0x00000084u; // 800C6C38
  c->r[3]=c->r[30]|c->r[30]; // 800C6C3C
  c->r[4]=c->r[1]+0x00000008u; // 800C6C40
  c->r[7]=R32(c->r[31]+0x00000084u); // 800C6C44
  c->r[6]=R32(c->r[5]+0x00000004u); // 800C6C48
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C6C4C
  W32(c->r[1]+0x00000008u,c->r[7]); // 800C6C50
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C6C54
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C6C58
  c->lr=0x800C6C60u; f_800C6C78(c); // 800C6C5C
L_800C6C60:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C6C60
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C6C64
  c->r[30]=R32(c->r[1]+0x00000048u); // 800C6C68
  c->lr=c->r[0]; // 800C6C6C
  c->r[1]=c->r[1]+0x00000050u; // 800C6C70
  return; // 800C6C74
}

// fn_800C6C78
void f_800C6C78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6C78
  c->r[0]=c->lr; // 800C6C7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6C80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C6C84
  c->r[31]=c->r[4]|c->r[4]; // 800C6C88
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C6C8C
  c->r[30]=c->r[3]|c->r[3]; // 800C6C90
  c->r[3]=c->r[31]|c->r[31]; // 800C6C94
  c->lr=0x800C6C9Cu; f_802B9FDC(c); // 800C6C98
  cmps(c,0,(int32_t)c->r[3],0); // 800C6C9C
  if (crb(c,2)) { goto L_800C6CBC; } // 800C6CA0
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C6CA4
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C6CA8
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800C6CAC
  W32(c->r[30]+0x00000020u,c->r[0]); // 800C6CB0
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C6CB4
  W32(c->r[30]+0x00000024u,c->r[0]); // 800C6CB8
L_800C6CBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6CBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C6CC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C6CC4
  c->lr=c->r[0]; // 800C6CC8
  c->r[1]=c->r[1]+0x00000010u; // 800C6CCC
  return; // 800C6CD0
}

// fn_800C6CD4
void f_800C6CD4(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800C6CD4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800C6CD8
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800C6CDC
  return; // 800C6CE0
}

// fn_800C6CE4
void f_800C6CE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6CE4
  c->r[0]=c->lr; // 800C6CE8
  W32(c->r[1]+0x00000164u,c->r[0]); // 800C6CEC
  W32(c->r[1]+0x0000015Cu,c->r[31]); // 800C6CF0
  c->r[31]=0u+0x803A0000u; // 800C6CF4
  c->r[31]=c->r[31]+0xFFFFD208u; // 800C6CF8
  W32(c->r[1]+0x00000158u,c->r[30]); // 800C6CFC
  c->r[30]=c->r[3]|c->r[3]; // 800C6D00
  W32(c->r[1]+0x00000154u,c->r[29]); // 800C6D04
  W32(c->r[1]+0x00000150u,c->r[28]); // 800C6D08
  c->r[0]=R8(c->r[3]+0x00000078u); // 800C6D0C
  cmpu(c,0,c->r[0],0x000000FFu); // 800C6D10
  if (!crb(c,2)) { goto L_800C6D70; } // 800C6D14
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800C6D18
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800C6D1C
  if (!crb(c,2)) { goto L_800C6D70; } // 800C6D20
  c->r[0]=R8(c->r[3]+0x000000ADu); // 800C6D24
  cmps(c,0,(int32_t)c->r[0],0); // 800C6D28
  if (!crb(c,2)) { goto L_800C6D70; } // 800C6D2C
  c->r[3]=R32(c->r[3]+0x00000394u); // 800C6D30
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C6D34
  cmps(c,0,(int32_t)c->r[0],7); // 800C6D38
  if (crb(c,2)) { goto L_800C6D50; } // 800C6D3C
  if (!crb(c,0)) { goto L_800C6D70; } // 800C6D40
  cmps(c,0,(int32_t)c->r[0],3); // 800C6D44
  if (crb(c,2)) { goto L_800C6D50; } // 800C6D48
  goto L_800C6D70; // 800C6D4C
L_800C6D50:;
  c->r[4]=0u+0x803D0000u; // 800C6D50
  c->r[3]=0u+0x80550000u; // 800C6D54
  c->r[4]=R32(c->r[4]+0x00000FA0u); // 800C6D58
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C6D5C
  c->r[5]=0u+0x00000000u; // 800C6D60
  c->r[6]=0u+0x00000000u; // 800C6D64
  c->lr=0x800C6D6Cu; f_8018D3E4(c); // 800C6D68
  W8(c->r[30]+0x00000078u,c->r[3]); // 800C6D6C
L_800C6D70:;
  c->r[4]=R8(c->r[30]+0x00000078u); // 800C6D70
  cmpu(c,0,c->r[4],0x000000FFu); // 800C6D74
  if (crb(c,2)) { goto L_800C6E24; } // 800C6D78
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C6D7C
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800C6D80
  if (!crb(c,2)) { goto L_800C6E10; } // 800C6D84
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C6D88
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C6D8C
  cmps(c,0,(int32_t)c->r[0],7); // 800C6D90
  if (crb(c,2)) { goto L_800C6DA8; } // 800C6D94
  if (!crb(c,0)) { goto L_800C6DF8; } // 800C6D98
  cmps(c,0,(int32_t)c->r[0],3); // 800C6D9C
  if (crb(c,2)) { goto L_800C6DA8; } // 800C6DA0
  goto L_800C6DF8; // 800C6DA4
L_800C6DA8:;
  c->r[0]=R8(c->r[30]+0x000000ADu); // 800C6DA8
  cmps(c,0,(int32_t)c->r[0],0); // 800C6DAC
  if (!crb(c,2)) { goto L_800C6DE0; } // 800C6DB0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C6DB4
  c->r[5]=c->r[1]+0x00000118u; // 800C6DB8
  c->r[4]=R8(c->r[30]+0x00000076u); // 800C6DBC
  c->r[6]=0u+0x00000001u; // 800C6DC0
  c->lr=0x800C6DC8u; f_80257074(c); // 800C6DC4
  c->r[3]=0u+0x80550000u; // 800C6DC8
  c->r[4]=R8(c->r[30]+0x00000078u); // 800C6DCC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C6DD0
  c->r[5]=c->r[1]+0x00000118u; // 800C6DD4
  c->lr=0x800C6DDCu; f_8018DEB8(c); // 800C6DD8
  goto L_800C6E24; // 800C6DDC
L_800C6DE0:;
  c->r[3]=0u+0x80550000u; // 800C6DE0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C6DE4
  c->lr=0x800C6DECu; f_8018D738(c); // 800C6DE8
  c->r[0]=0u+0x000000FFu; // 800C6DEC
  W8(c->r[30]+0x00000078u,c->r[0]); // 800C6DF0
  goto L_800C6E24; // 800C6DF4
L_800C6DF8:;
  c->r[3]=0u+0x80550000u; // 800C6DF8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C6DFC
  c->lr=0x800C6E04u; f_8018D738(c); // 800C6E00
  c->r[0]=0u+0x000000FFu; // 800C6E04
  W8(c->r[30]+0x00000078u,c->r[0]); // 800C6E08
  goto L_800C6E24; // 800C6E0C
L_800C6E10:;
  c->r[3]=0u+0x80550000u; // 800C6E10
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C6E14
  c->lr=0x800C6E1Cu; f_8018D738(c); // 800C6E18
  c->r[0]=0u+0x000000FFu; // 800C6E1C
  W8(c->r[30]+0x00000078u,c->r[0]); // 800C6E20
L_800C6E24:;
  c->r[0]=R8(c->r[30]+0x000000ADu); // 800C6E24
  cmps(c,0,(int32_t)c->r[0],0); // 800C6E28
  if (crb(c,2)) { goto L_800C7004; } // 800C6E2C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C6E30
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800C6E34
  if (!crb(c,2)) { goto L_800C7004; } // 800C6E38
  c->r[0]=R8(c->r[30]+0x0000007Bu); // 800C6E3C
  cmpu(c,0,c->r[0],0x000000FFu); // 800C6E40
  if (!crb(c,2)) { goto L_800C6E74; } // 800C6E44
  c->r[4]=0u+0x803D0000u; // 800C6E48
  c->r[3]=0u+0x80550000u; // 800C6E4C
  c->r[4]=c->r[4]+0x00000FA0u; // 800C6E50
  c->r[5]=0u+0x00000000u; // 800C6E54
  c->r[4]=R32(c->r[4]+0x00000018u); // 800C6E58
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C6E5C
  c->r[6]=0u+0x00000000u; // 800C6E60
  c->lr=0x800C6E68u; f_8018D3E4(c); // 800C6E64
  c->r[0]=0u+0x00000000u; // 800C6E68
  W8(c->r[30]+0x0000007Bu,c->r[3]); // 800C6E6C
  W8(c->r[30]+0x000000AEu,c->r[0]); // 800C6E70
L_800C6E74:;
  c->r[0]=R8(c->r[30]+0x0000007Bu); // 800C6E74
  cmpu(c,0,c->r[0],0x000000FFu); // 800C6E78
  if (crb(c,2)) { goto L_800C702C; } // 800C6E7C
  c->r[3]=c->r[31]+0x000009B4u; // 800C6E80
  c->r[7]=R32(c->r[31]+0x000009B4u); // 800C6E84
  c->r[4]=R32(c->r[3]+0x00000004u); // 800C6E88
  c->r[5]=c->r[1]+0x000000E8u; // 800C6E8C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C6E90
  c->r[6]=0u+0x00000001u; // 800C6E94
  W32(c->r[1]+0x00000078u,c->r[7]); // 800C6E98
  W32(c->r[1]+0x0000007Cu,c->r[4]); // 800C6E9C
  W32(c->r[1]+0x00000080u,c->r[0]); // 800C6EA0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C6EA4
  c->r[4]=R8(c->r[30]+0x00000076u); // 800C6EA8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C6EAC
  c->lr=0x800C6EB4u; f_80257074(c); // 800C6EB0
  c->r[4]=c->r[1]+0x00000078u; // 800C6EB4
  c->r[3]=c->r[1]+0x000000E8u; // 800C6EB8
  c->r[5]=c->r[4]|c->r[4]; // 800C6EBC
  c->lr=0x800C6EC4u; f_80296750(c); // 800C6EC0
  c->r[3]=c->r[31]+0x000009C0u; // 800C6EC4
  c->r[5]=R32(c->r[31]+0x000009C0u); // 800C6EC8
  c->r[4]=R32(c->r[3]+0x00000004u); // 800C6ECC
  c->r[28]=0u+0x00000002u; // 800C6ED0
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C6ED4
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 800C6ED8
  W32(c->r[1]+0x00000070u,c->r[4]); // 800C6EDC
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C6EE0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C6EE4
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C6EE8
  cmps(c,0,(int32_t)c->r[0],7); // 800C6EEC
  if (crb(c,2)) { goto L_800C6F04; } // 800C6EF0
  if (!crb(c,0)) { goto L_800C6F30; } // 800C6EF4
  cmps(c,0,(int32_t)c->r[0],3); // 800C6EF8
  if (crb(c,2)) { goto L_800C6F04; } // 800C6EFC
  goto L_800C6F30; // 800C6F00
L_800C6F04:;
  c->r[4]=c->r[31]+0x000009A8u; // 800C6F04
  c->r[6]=R32(c->r[31]+0x000009A8u); // 800C6F08
  c->r[5]=R32(c->r[4]+0x00000004u); // 800C6F0C
  c->r[3]=c->r[1]+0x0000006Cu; // 800C6F10
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C6F14
  c->r[4]=c->r[1]+0x00000060u; // 800C6F18
  W32(c->r[1]+0x00000060u,c->r[6]); // 800C6F1C
  c->r[28]=0u+0x00000001u; // 800C6F20
  W32(c->r[1]+0x00000064u,c->r[5]); // 800C6F24
  W32(c->r[1]+0x00000068u,c->r[0]); // 800C6F28
  c->lr=0x800C6F30u; f_800361A0(c); // 800C6F2C
L_800C6F30:;
  c->r[0]=R8(c->r[30]+0x000000AEu); // 800C6F30
  cmps(c,0,(int32_t)c->r[0],0); // 800C6F34
  if (!crb(c,2)) { goto L_800C6F44; } // 800C6F38
  W8(c->r[30]+0x000000AEu,c->r[28]); // 800C6F3C
  goto L_800C6F8C; // 800C6F40
L_800C6F44:;
  cmpu(c,0,c->r[0],c->r[28]); // 800C6F44
  if (crb(c,2)) { goto L_800C6F8C; } // 800C6F48
  c->r[29]=0u+0x80550000u; // 800C6F4C
  c->r[4]=R8(c->r[30]+0x0000007Bu); // 800C6F50
  c->r[3]=c->r[29]+0xFFFFC848u; // 800C6F54
  c->lr=0x800C6F5Cu; f_8018D738(c); // 800C6F58
  c->r[0]=0u+0x000000FFu; // 800C6F5C
  c->r[4]=0u+0x803D0000u; // 800C6F60
  W8(c->r[30]+0x0000007Bu,c->r[0]); // 800C6F64
  c->r[4]=c->r[4]+0x00000FA0u; // 800C6F68
  c->r[3]=c->r[29]+0xFFFFC848u; // 800C6F6C
  c->r[5]=0u+0x00000000u; // 800C6F70
  c->r[4]=R32(c->r[4]+0x00000018u); // 800C6F74
  c->r[6]=0u+0x00000000u; // 800C6F78
  c->lr=0x800C6F80u; f_8018D3E4(c); // 800C6F7C
  c->r[0]=0u+0x00000000u; // 800C6F80
  W8(c->r[30]+0x0000007Bu,c->r[3]); // 800C6F84
  W8(c->r[30]+0x000000AEu,c->r[0]); // 800C6F88
L_800C6F8C:;
  c->r[0]=R8(c->r[30]+0x0000007Bu); // 800C6F8C
  cmpu(c,0,c->r[0],0x000000FFu); // 800C6F90
  if (crb(c,2)) { goto L_800C702C; } // 800C6F94
  W8(c->r[30]+0x000000AEu,c->r[28]); // 800C6F98
  c->r[3]=0u+0x80550000u; // 800C6F9C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C6FA0
  c->r[5]=c->r[1]+0x00000038u; // 800C6FA4
  c->r[8]=R32(c->r[1]+0x0000006Cu); // 800C6FA8
  c->r[6]=c->r[1]+0x0000002Cu; // 800C6FAC
  c->r[4]=R32(c->r[1]+0x00000070u); // 800C6FB0
  c->r[7]=c->r[1]+0x00000020u; // 800C6FB4
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C6FB8
  W32(c->r[1]+0x00000020u,c->r[8]); // 800C6FBC
  c->r[8]=R32(c->r[1]+0x00000078u); // 800C6FC0
  W32(c->r[1]+0x00000024u,c->r[4]); // 800C6FC4
  c->r[4]=R32(c->r[1]+0x0000007Cu); // 800C6FC8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C6FCC
  c->r[0]=R32(c->r[1]+0x00000080u); // 800C6FD0
  c->r[10]=R32(c->r[30]+0x00000060u); // 800C6FD4
  c->r[9]=R32(c->r[30]+0x00000064u); // 800C6FD8
  W32(c->r[1]+0x0000002Cu,c->r[10]); // 800C6FDC
  W32(c->r[1]+0x00000030u,c->r[9]); // 800C6FE0
  c->r[9]=R32(c->r[30]+0x00000068u); // 800C6FE4
  W32(c->r[1]+0x00000034u,c->r[9]); // 800C6FE8
  W32(c->r[1]+0x00000038u,c->r[8]); // 800C6FEC
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 800C6FF0
  W32(c->r[1]+0x00000040u,c->r[0]); // 800C6FF4
  c->r[4]=R8(c->r[30]+0x0000007Bu); // 800C6FF8
  c->lr=0x800C7000u; f_8018DD04(c); // 800C6FFC
  goto L_800C702C; // 800C7000
L_800C7004:;
  c->r[4]=R8(c->r[30]+0x0000007Bu); // 800C7004
  cmpu(c,0,c->r[4],0x000000FFu); // 800C7008
  if (crb(c,2)) { goto L_800C702C; } // 800C700C
  c->r[3]=0u+0x80550000u; // 800C7010
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C7014
  c->lr=0x800C701Cu; f_8018D738(c); // 800C7018
  c->r[3]=0u+0x000000FFu; // 800C701C
  c->r[0]=0u+0x00000000u; // 800C7020
  W8(c->r[30]+0x0000007Bu,c->r[3]); // 800C7024
  W8(c->r[30]+0x000000AEu,c->r[0]); // 800C7028
L_800C702C:;
  c->r[3]=c->r[30]|c->r[30]; // 800C702C
  c->r[4]=0u+0x00000000u; // 800C7030
  c->lr=0x800C7038u; f_800453A4(c); // 800C7034
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800C7038
  if (crb(c,2)) { goto L_800C70D0; } // 800C703C
  c->r[3]=c->r[30]|c->r[30]; // 800C7040
  c->r[4]=0u+0x00000000u; // 800C7044
  c->lr=0x800C704Cu; f_800453A4(c); // 800C7048
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800C704C
  if (crb(c,2)) { goto L_800C70A0; } // 800C7050
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C7054
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C7058
  cmps(c,0,(int32_t)c->r[0],9); // 800C705C
  if (crb(c,2)) { goto L_800C70A0; } // 800C7060
  if (!crb(c,0)) { goto L_800C7080; } // 800C7064
  cmps(c,0,(int32_t)c->r[0],2); // 800C7068
  if (crb(c,2)) { goto L_800C708C; } // 800C706C
  if (!crb(c,0)) { goto L_800C70A0; } // 800C7070
  cmps(c,0,(int32_t)c->r[0],1); // 800C7074
  if (!crb(c,0)) { goto L_800C7098; } // 800C7078
  goto L_800C70A0; // 800C707C
L_800C7080:;
  cmps(c,0,(int32_t)c->r[0],13); // 800C7080
  if (crb(c,2)) { goto L_800C70A0; } // 800C7084
  goto L_800C70A0; // 800C7088
L_800C708C:;
  c->r[0]=0u+0x00000001u; // 800C708C
  W8(c->r[30]+0x00000089u,c->r[0]); // 800C7090
  goto L_800C70A0; // 800C7094
L_800C7098:;
  c->r[0]=0u+0x00000000u; // 800C7098
  W8(c->r[30]+0x00000088u,c->r[0]); // 800C709C
L_800C70A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800C70A0
  c->r[4]=0u+0x00000000u; // 800C70A4
  c->lr=0x800C70ACu; f_800453A4(c); // 800C70A8
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 800C70AC
  if (crb(c,2)) { goto L_800C70D0; } // 800C70B0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C70B4
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C70B8
  cmps(c,0,(int32_t)c->r[0],2); // 800C70BC
  if (crb(c,2)) { goto L_800C70C8; } // 800C70C0
  goto L_800C70D0; // 800C70C4
L_800C70C8:;
  c->r[0]=0u+0x00000001u; // 800C70C8
  W8(c->r[30]+0x00000088u,c->r[0]); // 800C70CC
L_800C70D0:;
  c->r[0]=R8(c->r[30]+0x00000079u); // 800C70D0
  cmpu(c,0,c->r[0],0x000000FFu); // 800C70D4
  if (!crb(c,2)) { goto L_800C710C; } // 800C70D8
  c->r[0]=R8(c->r[30]+0x00000088u); // 800C70DC
  cmps(c,0,(int32_t)c->r[0],0); // 800C70E0
  if (crb(c,2)) { goto L_800C710C; } // 800C70E4
  c->r[4]=0u+0x803D0000u; // 800C70E8
  c->r[3]=0u+0x80550000u; // 800C70EC
  c->r[4]=c->r[4]+0x00000FA0u; // 800C70F0
  c->r[5]=0u+0x00000000u; // 800C70F4
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 800C70F8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C70FC
  c->r[6]=0u+0x00000000u; // 800C7100
  c->lr=0x800C7108u; f_8018D3E4(c); // 800C7104
  W8(c->r[30]+0x00000079u,c->r[3]); // 800C7108
L_800C710C:;
  c->r[0]=R8(c->r[30]+0x00000079u); // 800C710C
  cmpu(c,0,c->r[0],0x000000FFu); // 800C7110
  if (crb(c,2)) { goto L_800C7268; } // 800C7114
  c->r[0]=R8(c->r[30]+0x00000088u); // 800C7118
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800C711C
  if (crb(c,2)) { goto L_800C71C8; } // 800C7120
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C7124
  c->r[5]=c->r[1]+0x000000B8u; // 800C7128
  c->r[4]=R8(c->r[30]+0x00000075u); // 800C712C
  c->r[6]=0u+0x00000001u; // 800C7130
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C7134
  c->lr=0x800C713Cu; f_80257074(c); // 800C7138
  c->r[3]=0u+0x80550000u; // 800C713C
  c->r[4]=R8(c->r[30]+0x00000079u); // 800C7140
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C7144
  c->r[5]=c->r[1]+0x000000B8u; // 800C7148
  c->lr=0x800C7150u; f_8018DEB8(c); // 800C714C
  c->r[0]=R8(c->r[30]+0x00000088u); // 800C7150
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800C7154
  if (!crb(c,2)) { goto L_800C7268; } // 800C7158
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C715C
  c->lr=0x800C7164u; f_80035554(c); // 800C7160
  {uint32_t ea=c->r[30]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C7164
  {uint32_t ea=c->r[2]+0xFFFF9F1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7168
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800C716C
  fcmp(c,0,c->f[1],c->f[0]); // 800C7170
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800C7174
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C7178
  if (!crb(c,2)) { goto L_800C7190; } // 800C717C
  c->r[0]=R8(c->r[30]+0x00000088u); // 800C7180
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 800C7184
  c->r[0]=c->r[0]|0x00000002u; // 800C7188
  W8(c->r[30]+0x00000088u,c->r[0]); // 800C718C
L_800C7190:;
  {uint32_t ea=c->r[30]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C7190
  c->r[3]=0u+0x80550000u; // 800C7194
  {uint32_t ea=c->r[2]+0xFFFF9F1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7198
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C719C
  {uint32_t ea=c->r[2]+0xFFFF9F4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C71A0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800C71A4
  c->r[4]=R8(c->r[30]+0x00000079u); // 800C71A8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800C71AC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C71B0
  {uint32_t ea=c->r[1]+0x00000148u; WF64(ea,c->f[0]);} // 800C71B4
  c->r[0]=R32(c->r[1]+0x0000014Cu); // 800C71B8
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800C71BC
  c->lr=0x800C71C4u; f_8018EBA0(c); // 800C71C0
  goto L_800C7268; // 800C71C4
L_800C71C8:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C71C8
  c->r[5]=c->r[1]+0x00000088u; // 800C71CC
  c->r[4]=R8(c->r[30]+0x00000075u); // 800C71D0
  c->r[6]=0u+0x00000001u; // 800C71D4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C71D8
  c->lr=0x800C71E0u; f_80257074(c); // 800C71DC
  c->r[3]=0u+0x80550000u; // 800C71E0
  c->r[4]=R8(c->r[30]+0x00000079u); // 800C71E4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C71E8
  c->r[5]=c->r[1]+0x00000088u; // 800C71EC
  c->lr=0x800C71F4u; f_8018DEB8(c); // 800C71F0
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C71F4
  c->lr=0x800C71FCu; f_80035554(c); // 800C71F8
  {uint32_t ea=c->r[30]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C71FC
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7200
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800C7204
  fcmp(c,0,c->f[1],c->f[0]); // 800C7208
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800C720C
  if (!crb(c,0)) { goto L_800C7218; } // 800C7210
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 800C7214
L_800C7218:;
  {uint32_t ea=c->r[30]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C7218
  c->r[29]=0u+0x80550000u; // 800C721C
  {uint32_t ea=c->r[2]+0xFFFF9F1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7220
  c->r[3]=c->r[29]+0xFFFFC848u; // 800C7224
  {uint32_t ea=c->r[2]+0xFFFF9F4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7228
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800C722C
  c->r[4]=R8(c->r[30]+0x00000079u); // 800C7230
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800C7234
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C7238
  {uint32_t ea=c->r[1]+0x00000148u; WF64(ea,c->f[0]);} // 800C723C
  c->r[28]=R32(c->r[1]+0x0000014Cu); // 800C7240
  c->r[5]=rotl(c->r[28],0)&0x000000FFu; // 800C7244
  c->lr=0x800C724Cu; f_8018EBA0(c); // 800C7248
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; cr0(c,c->r[0]); // 800C724C
  if (!crb(c,2)) { goto L_800C7268; } // 800C7250
  c->r[4]=R8(c->r[30]+0x00000079u); // 800C7254
  c->r[3]=c->r[29]+0xFFFFC848u; // 800C7258
  c->lr=0x800C7260u; f_8018D738(c); // 800C725C
  c->r[0]=0u+0x000000FFu; // 800C7260
  W8(c->r[30]+0x00000079u,c->r[0]); // 800C7264
L_800C7268:;
  c->r[0]=R8(c->r[30]+0x00000091u); // 800C7268
  cmps(c,0,(int32_t)c->r[0],0); // 800C726C
  if (crb(c,2)) { goto L_800C7334; } // 800C7270
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C7274
  c->lr=0x800C727Cu; f_80035554(c); // 800C7278
  {uint32_t ea=c->r[30]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C727C
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7280
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800C7284
  fcmp(c,0,c->f[1],c->f[0]); // 800C7288
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[1]);} // 800C728C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C7290
  if (!crb(c,2)) { goto L_800C72A0; } // 800C7294
  c->r[0]=0u+0x00000000u; // 800C7298
  W8(c->r[30]+0x00000091u,c->r[0]); // 800C729C
L_800C72A0:;
  {uint32_t ea=c->r[30]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C72A0
  {uint32_t ea=c->r[2]+0xFFFF9F1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C72A4
  c->r[0]=R8(c->r[30]+0x00000092u); // 800C72A8
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 800C72AC
  cmps(c,0,(int32_t)c->r[0],1); // 800C72B0
  if (crb(c,2)) { goto L_800C72D0; } // 800C72B4
  if (!crb(c,0)) { goto L_800C72D0; } // 800C72B8
  cmps(c,0,(int32_t)c->r[0],0); // 800C72BC
  if (!crb(c,0)) { goto L_800C72C8; } // 800C72C0
  goto L_800C72D0; // 800C72C4
L_800C72C8:;
  {uint32_t ea=c->r[2]+0xFFFF9F40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C72C8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 800C72CC
L_800C72D0:;
  c->r[0]=R32(c->r[31]+0x000009D0u); // 800C72D0
  c->r[5]=c->r[31]+0x000009D0u; // 800C72D4
  c->r[7]=R32(c->r[5]+0x00000004u); // 800C72D8
  c->r[3]=0u+0x803A0000u; // 800C72DC
  W32(c->r[1]+0x00000050u,c->r[0]); // 800C72E0
  c->r[3]=c->r[3]+0xFFFFDC38u; // 800C72E4
  c->r[6]=R32(c->r[5]+0x00000008u); // 800C72E8
  c->r[4]=c->r[3]+0x0000002Fu; // 800C72EC
  W32(c->r[1]+0x00000054u,c->r[7]); // 800C72F0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C72F4
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C72F8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[3]); // 800C72FC
  W32(c->r[1]+0x00000058u,c->r[6]); // 800C7300
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 800C7304
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800C7308
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C730C
  c->r[5]=c->r[1]+0x00000050u; // 800C7310
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800C7314
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800C7318
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 800C731C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800C7320
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800C7324
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C7328
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C732C
  c->lr=0x800C7334u; f_8025892C(c); // 800C7330
L_800C7334:;
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C7334
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800C7338
  if (crb(c,2)) { goto L_800C7398; } // 800C733C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C7340
  c->r[3]=R32(c->r[3]+0x00000030u); // 800C7344
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 800C7348
  cmpu(c,0,c->r[0],0x0000000Au); // 800C734C
  if (crb(c,1)) { goto L_800C7378; } // 800C7350
  c->r[3]=0u+0x803D0000u; // 800C7354
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C7358
  c->r[3]=c->r[3]+0x00001030u; // 800C735C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C7360
  c->ctr=c->r[3]; // 800C7364
  if (true) { switch (c->ctr) { case 0x800C736Cu: goto L_800C736C; case 0x800C7378u: goto L_800C7378; default: break; } dispatch(c,c->ctr); return; } // 800C7368
L_800C736C:;
  c->r[0]=0u+0x00000001u; // 800C736C
  W8(c->r[30]+0x0000008Bu,c->r[0]); // 800C7370
  goto L_800C7380; // 800C7374
L_800C7378:;
  c->r[0]=0u+0x00000000u; // 800C7378
  W8(c->r[30]+0x0000008Bu,c->r[0]); // 800C737C
L_800C7380:;
  c->r[0]=R8(c->r[30]+0x000000ADu); // 800C7380
  cmps(c,0,(int32_t)c->r[0],0); // 800C7384
  if (crb(c,2)) { goto L_800C73AC; } // 800C7388
  c->r[0]=0u+0x00000001u; // 800C738C
  W8(c->r[30]+0x0000008Bu,c->r[0]); // 800C7390
  goto L_800C73AC; // 800C7394
L_800C7398:;
  c->r[0]=R8(c->r[30]+0x0000008Bu); // 800C7398
  cmps(c,0,(int32_t)c->r[0],0); // 800C739C
  if (crb(c,2)) { goto L_800C73AC; } // 800C73A0
  c->r[0]=0u+0x00000000u; // 800C73A4
  W8(c->r[30]+0x0000008Bu,c->r[0]); // 800C73A8
L_800C73AC:;
  c->r[0]=R8(c->r[30]+0x0000007Au); // 800C73AC
  cmpu(c,0,c->r[0],0x000000FFu); // 800C73B0
  if (!crb(c,2)) { goto L_800C73E8; } // 800C73B4
  c->r[0]=R8(c->r[30]+0x0000008Bu); // 800C73B8
  cmps(c,0,(int32_t)c->r[0],0); // 800C73BC
  if (crb(c,2)) { goto L_800C73E8; } // 800C73C0
  c->r[4]=0u+0x803D0000u; // 800C73C4
  c->r[3]=0u+0x80550000u; // 800C73C8
  c->r[4]=c->r[4]+0x00000FA0u; // 800C73CC
  c->r[5]=0u+0x00000000u; // 800C73D0
  c->r[4]=R32(c->r[4]+0x00000008u); // 800C73D4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C73D8
  c->r[6]=0u+0x00000000u; // 800C73DC
  c->lr=0x800C73E4u; f_8018D3E4(c); // 800C73E0
  W8(c->r[30]+0x0000007Au,c->r[3]); // 800C73E4
L_800C73E8:;
  c->r[4]=R8(c->r[30]+0x0000007Au); // 800C73E8
  cmpu(c,0,c->r[4],0x000000FFu); // 800C73EC
  if (crb(c,2)) { goto L_800C7478; } // 800C73F0
  c->r[0]=R8(c->r[30]+0x0000008Bu); // 800C73F4
  cmps(c,0,(int32_t)c->r[0],0); // 800C73F8
  if (crb(c,2)) { goto L_800C7464; } // 800C73FC
  c->r[0]=R32(c->r[30]+0x00000030u); // 800C7400
  c->r[3]=0u+0x80550000u; // 800C7404
  c->r[8]=R32(c->r[30]+0x0000002Cu); // 800C7408
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C740C
  c->r[7]=R32(c->r[30]+0x00000034u); // 800C7410
  c->r[5]=c->r[1]+0x00000014u; // 800C7414
  W32(c->r[1]+0x00000048u,c->r[0]); // 800C7418
  c->r[6]=c->r[1]+0x00000008u; // 800C741C
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7420
  c->r[0]=R32(c->r[30]+0x00000060u); // 800C7424
  c->r[4]=R32(c->r[30]+0x00000064u); // 800C7428
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800C742C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C7430
  c->r[0]=R32(c->r[1]+0x00000048u); // 800C7434
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C7438
  c->r[4]=R32(c->r[30]+0x00000068u); // 800C743C
  W32(c->r[1]+0x00000044u,c->r[8]); // 800C7440
  W32(c->r[1]+0x00000010u,c->r[4]); // 800C7444
  W32(c->r[1]+0x00000014u,c->r[8]); // 800C7448
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C744C
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 800C7450
  W32(c->r[1]+0x0000004Cu,c->r[7]); // 800C7454
  c->r[4]=R8(c->r[30]+0x0000007Au); // 800C7458
  c->lr=0x800C7460u; f_8018DBD0(c); // 800C745C
  goto L_800C7478; // 800C7460
L_800C7464:;
  c->r[3]=0u+0x80550000u; // 800C7464
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C7468
  c->lr=0x800C7470u; f_8018D738(c); // 800C746C
  c->r[0]=0u+0x000000FFu; // 800C7470
  W8(c->r[30]+0x0000007Au,c->r[0]); // 800C7474
L_800C7478:;
  c->r[0]=R8(c->r[30]+0x00000078u); // 800C7478
  cmpu(c,0,c->r[0],0x000000FFu); // 800C747C
  if (crb(c,2)) { goto L_800C74E0; } // 800C7480
  c->r[0]=R8(c->r[30]+0x00000090u); // 800C7484
  cmpu(c,0,c->r[0],0x00000001u); // 800C7488
  if (crb(c,2)) { goto L_800C75D4; } // 800C748C
  c->r[4]=R32(c->r[30]+0x0000008Cu); // 800C7490
  cmps(c,0,(int32_t)c->r[4],0); // 800C7494
  if (crb(c,2)) { goto L_800C74B0; } // 800C7498
  c->r[3]=0u+0x805D0000u; // 800C749C
  c->r[3]=c->r[3]+0x00006D70u; // 800C74A0
  c->lr=0x800C74A8u; f_8022B034(c); // 800C74A4
  c->r[0]=0u+0x00000000u; // 800C74A8
  W32(c->r[30]+0x0000008Cu,c->r[0]); // 800C74AC
L_800C74B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800C74B0
  c->r[4]=0u+0x00000004u; // 800C74B4
  c->r[5]=0u+0x0000000Au; // 800C74B8
  c->r[6]=0u+0x00000001u; // 800C74BC
  c->r[7]=0u+0x00000001u; // 800C74C0
  c->lr=0x800C74C8u; f_8017900C(c); // 800C74C4
  cmps(c,0,(int32_t)c->r[3],0); // 800C74C8
  W32(c->r[30]+0x0000008Cu,c->r[3]); // 800C74CC
  if (crb(c,2)) { goto L_800C75D4; } // 800C74D0
  c->r[0]=0u+0x00000001u; // 800C74D4
  W8(c->r[30]+0x00000090u,c->r[0]); // 800C74D8
  goto L_800C75D4; // 800C74DC
L_800C74E0:;
  c->r[0]=R8(c->r[30]+0x0000007Bu); // 800C74E0
  cmpu(c,0,c->r[0],0x000000FFu); // 800C74E4
  if (crb(c,2)) { goto L_800C7548; } // 800C74E8
  c->r[0]=R8(c->r[30]+0x00000090u); // 800C74EC
  cmpu(c,0,c->r[0],0x00000002u); // 800C74F0
  if (crb(c,2)) { goto L_800C75D4; } // 800C74F4
  c->r[4]=R32(c->r[30]+0x0000008Cu); // 800C74F8
  cmps(c,0,(int32_t)c->r[4],0); // 800C74FC
  if (crb(c,2)) { goto L_800C7518; } // 800C7500
  c->r[3]=0u+0x805D0000u; // 800C7504
  c->r[3]=c->r[3]+0x00006D70u; // 800C7508
  c->lr=0x800C7510u; f_8022B034(c); // 800C750C
  c->r[0]=0u+0x00000000u; // 800C7510
  W32(c->r[30]+0x0000008Cu,c->r[0]); // 800C7514
L_800C7518:;
  c->r[3]=c->r[30]|c->r[30]; // 800C7518
  c->r[4]=0u+0x00000004u; // 800C751C
  c->r[5]=0u+0x00000035u; // 800C7520
  c->r[6]=0u+0x00000001u; // 800C7524
  c->r[7]=0u+0x00000001u; // 800C7528
  c->lr=0x800C7530u; f_8017900C(c); // 800C752C
  cmps(c,0,(int32_t)c->r[3],0); // 800C7530
  W32(c->r[30]+0x0000008Cu,c->r[3]); // 800C7534
  if (crb(c,2)) { goto L_800C75D4; } // 800C7538
  c->r[0]=0u+0x00000002u; // 800C753C
  W8(c->r[30]+0x00000090u,c->r[0]); // 800C7540
  goto L_800C75D4; // 800C7544
L_800C7548:;
  c->r[0]=R8(c->r[30]+0x0000007Au); // 800C7548
  cmpu(c,0,c->r[0],0x000000FFu); // 800C754C
  if (crb(c,2)) { goto L_800C75B0; } // 800C7550
  c->r[0]=R8(c->r[30]+0x00000090u); // 800C7554
  cmpu(c,0,c->r[0],0x00000003u); // 800C7558
  if (crb(c,2)) { goto L_800C75D4; } // 800C755C
  c->r[4]=R32(c->r[30]+0x0000008Cu); // 800C7560
  cmps(c,0,(int32_t)c->r[4],0); // 800C7564
  if (crb(c,2)) { goto L_800C7580; } // 800C7568
  c->r[3]=0u+0x805D0000u; // 800C756C
  c->r[3]=c->r[3]+0x00006D70u; // 800C7570
  c->lr=0x800C7578u; f_8022B034(c); // 800C7574
  c->r[0]=0u+0x00000000u; // 800C7578
  W32(c->r[30]+0x0000008Cu,c->r[0]); // 800C757C
L_800C7580:;
  c->r[3]=c->r[30]|c->r[30]; // 800C7580
  c->r[4]=0u+0x00000004u; // 800C7584
  c->r[5]=0u+0x00000037u; // 800C7588
  c->r[6]=0u+0x00000001u; // 800C758C
  c->r[7]=0u+0x00000001u; // 800C7590
  c->lr=0x800C7598u; f_8017900C(c); // 800C7594
  cmps(c,0,(int32_t)c->r[3],0); // 800C7598
  W32(c->r[30]+0x0000008Cu,c->r[3]); // 800C759C
  if (crb(c,2)) { goto L_800C75D4; } // 800C75A0
  c->r[0]=0u+0x00000003u; // 800C75A4
  W8(c->r[30]+0x00000090u,c->r[0]); // 800C75A8
  goto L_800C75D4; // 800C75AC
L_800C75B0:;
  c->r[4]=R32(c->r[30]+0x0000008Cu); // 800C75B0
  c->r[31]=0u+0x00000000u; // 800C75B4
  W8(c->r[30]+0x00000090u,c->r[31]); // 800C75B8
  cmps(c,0,(int32_t)c->r[4],0); // 800C75BC
  if (crb(c,2)) { goto L_800C75D4; } // 800C75C0
  c->r[3]=0u+0x805D0000u; // 800C75C4
  c->r[3]=c->r[3]+0x00006D70u; // 800C75C8
  c->lr=0x800C75D0u; f_8022B034(c); // 800C75CC
  W32(c->r[30]+0x0000008Cu,c->r[31]); // 800C75D0
L_800C75D4:;
  c->r[4]=R32(c->r[30]+0x0000008Cu); // 800C75D4
  c->r[28]=0u+0x00000000u; // 800C75D8
  c->r[29]=0u+0x00000000u; // 800C75DC
  cmps(c,0,(int32_t)c->r[4],0); // 800C75E0
  if (crb(c,2)) { goto L_800C764C; } // 800C75E4
  c->r[3]=0u+0x805D0000u; // 800C75E8
  c->r[5]=c->r[30]+0x0000002Cu; // 800C75EC
  c->r[3]=c->r[3]+0x00006D70u; // 800C75F0
  c->r[29]=0u+0x00000001u; // 800C75F4
  c->lr=0x800C75FCu; f_8022AFB4(c); // 800C75F8
  c->r[0]=R8(c->r[30]+0x0000008Bu); // 800C75FC
  cmps(c,0,(int32_t)c->r[0],0); // 800C7600
  if (crb(c,2)) { goto L_800C761C; } // 800C7604
  {uint32_t ea=c->r[2]+0xFFFF9F14u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7608
  c->r[3]=c->r[30]+0x00000014u; // 800C760C
  c->r[28]=0u+0x00000002u; // 800C7610
  c->lr=0x800C7618u; f_80037668(c); // 800C7614
  goto L_800C764C; // 800C7618
L_800C761C:;
  c->r[0]=R8(c->r[30]+0x000000ADu); // 800C761C
  cmps(c,0,(int32_t)c->r[0],0); // 800C7620
  if (crb(c,2)) { goto L_800C763C; } // 800C7624
  {uint32_t ea=c->r[2]+0xFFFF9F14u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7628
  c->r[3]=c->r[30]+0x00000014u; // 800C762C
  c->r[28]=0u+0x00000003u; // 800C7630
  c->lr=0x800C7638u; f_80037668(c); // 800C7634
  goto L_800C764C; // 800C7638
L_800C763C:;
  {uint32_t ea=c->r[2]+0xFFFF9F14u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C763C
  c->r[3]=c->r[30]+0x00000014u; // 800C7640
  c->r[28]=0u+0x00000001u; // 800C7644
  c->lr=0x800C764Cu; f_80037668(c); // 800C7648
L_800C764C:;
  c->r[4]=R8(c->r[30]+0x0000008Au); // 800C764C
  cmpu(c,0,c->r[4],0x000000FFu); // 800C7650
  if (crb(c,2)) { goto L_800C76A4; } // 800C7654
  c->r[3]=0u+0x80550000u; // 800C7658
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800C765C
  c->lr=0x800C7664u; f_8019C920(c); // 800C7660
  cmps(c,0,(int32_t)c->r[3],0); // 800C7664
  if (crb(c,2)) { goto L_800C76A4; } // 800C7668
  c->r[0]=R8(c->r[3]+0x0000006Cu); // 800C766C
  cmpu(c,0,c->r[0],0x00000004u); // 800C7670
  if (!crb(c,2)) { goto L_800C76A4; } // 800C7674
  c->r[0]=R8(c->r[3]+0x0000006Du); // 800C7678
  cmpu(c,0,c->r[0],0x0000000Eu); // 800C767C
  if (!crb(c,2)) { goto L_800C76A4; } // 800C7680
  c->lr=0x800C7688u; f_80037AF8(c); // 800C7684
  cmps(c,0,(int32_t)c->r[3],0); // 800C7688
  if (crb(c,2)) { goto L_800C76A4; } // 800C768C
  {uint32_t ea=c->r[2]+0xFFFF9F50u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7690
  c->r[3]=c->r[30]+0x00000014u; // 800C7694
  c->r[29]=0u+0x00000001u; // 800C7698
  c->r[28]=0u+0x00000000u; // 800C769C
  c->lr=0x800C76A4u; f_80037668(c); // 800C76A0
L_800C76A4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800C76A4
  if (crb(c,2)) { goto L_800C7754; } // 800C76A8
  c->r[3]=c->r[30]+0x00000010u; // 800C76AC
  c->r[4]=0u+0x00000000u; // 800C76B0
  c->lr=0x800C76B8u; f_800366DC(c); // 800C76B4
  c->r[3]=c->r[30]+0x00000014u; // 800C76B8
  c->lr=0x800C76C0u; f_8003E460(c); // 800C76BC
  c->r[4]=c->r[3]|c->r[3]; // 800C76C0
  c->r[3]=c->r[30]+0x00000010u; // 800C76C4
  c->lr=0x800C76CCu; f_80038BCC(c); // 800C76C8
  cmps(c,0,(int32_t)c->r[3],0); // 800C76CC
  if (crb(c,2)) { goto L_800C7754; } // 800C76D0
  cmps(c,0,(int32_t)c->r[28],2); // 800C76D4
  if (crb(c,2)) { goto L_800C7724; } // 800C76D8
  if (!crb(c,0)) { goto L_800C76F0; } // 800C76DC
  cmps(c,0,(int32_t)c->r[28],0); // 800C76E0
  if (crb(c,2)) { goto L_800C76FC; } // 800C76E4
  if (!crb(c,0)) { goto L_800C7710; } // 800C76E8
  goto L_800C7748; // 800C76EC
L_800C76F0:;
  cmps(c,0,(int32_t)c->r[28],4); // 800C76F0
  if (!crb(c,0)) { goto L_800C7748; } // 800C76F4
  goto L_800C7738; // 800C76F8
L_800C76FC:;
  c->r[3]=0u+0x00000000u; // 800C76FC
  c->r[4]=0u+0x00000000u; // 800C7700
  c->r[5]=0u+0x00000004u; // 800C7704
  c->lr=0x800C770Cu; f_8027C0C8(c); // 800C7708
  goto L_800C7748; // 800C770C
L_800C7710:;
  c->r[3]=0u+0x00000000u; // 800C7710
  c->r[4]=0u+0x00000000u; // 800C7714
  c->r[5]=0u+0x00000006u; // 800C7718
  c->lr=0x800C7720u; f_8027C0C8(c); // 800C771C
  goto L_800C7748; // 800C7720
L_800C7724:;
  c->r[3]=0u+0x00000000u; // 800C7724
  c->r[4]=0u+0x00000003u; // 800C7728
  c->r[5]=0u+0x0000000Au; // 800C772C
  c->lr=0x800C7734u; f_8027C0C8(c); // 800C7730
  goto L_800C7748; // 800C7734
L_800C7738:;
  c->r[3]=0u+0x00000000u; // 800C7738
  c->r[4]=0u+0x00000004u; // 800C773C
  c->r[5]=0u+0x0000000Au; // 800C7740
  c->lr=0x800C7748u; f_8027C0C8(c); // 800C7744
L_800C7748:;
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7748
  c->r[3]=c->r[30]+0x00000010u; // 800C774C
  c->lr=0x800C7754u; f_80037668(c); // 800C7750
L_800C7754:;
  c->r[0]=R32(c->r[1]+0x00000164u); // 800C7754
  c->r[31]=R32(c->r[1]+0x0000015Cu); // 800C7758
  c->r[30]=R32(c->r[1]+0x00000158u); // 800C775C
  c->r[29]=R32(c->r[1]+0x00000154u); // 800C7760
  c->r[28]=R32(c->r[1]+0x00000150u); // 800C7764
  c->lr=c->r[0]; // 800C7768
  c->r[1]=c->r[1]+0x00000160u; // 800C776C
  return; // 800C7770
}

// fn_800C7774
void f_800C7774(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7774
  c->r[0]=c->lr; // 800C7778
  c->r[4]=0u+0x00000000u; // 800C777C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C7780
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C7784
  c->r[31]=c->r[3]|c->r[3]; // 800C7788
  c->lr=0x800C7790u; f_800453A4(c); // 800C778C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800C7790
  if (crb(c,2)) { goto L_800C79D0; } // 800C7794
  c->r[3]=c->r[31]|c->r[31]; // 800C7798
  c->r[4]=0u+0x00000000u; // 800C779C
  c->lr=0x800C77A4u; f_800453A4(c); // 800C77A0
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 800C77A4
  if (crb(c,2)) { goto L_800C7878; } // 800C77A8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C77AC
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C77B0
  cmpu(c,0,c->r[0],0x0000000Du); // 800C77B4
  if (crb(c,1)) { goto L_800C7878; } // 800C77B8
  c->r[3]=0u+0x803D0000u; // 800C77BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C77C0
  c->r[3]=c->r[3]+0x0000105Cu; // 800C77C4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C77C8
  c->ctr=c->r[3]; // 800C77CC
  if (true) { switch (c->ctr) { case 0x800C77D4u: goto L_800C77D4; case 0x800C77F0u: goto L_800C77F0; case 0x800C780Cu: goto L_800C780C; case 0x800C7828u: goto L_800C7828; case 0x800C7844u: goto L_800C7844; case 0x800C7860u: goto L_800C7860; case 0x800C7878u: goto L_800C7878; default: break; } dispatch(c,c->ctr); return; } // 800C77D0
L_800C77D4:;
  c->r[3]=c->r[31]|c->r[31]; // 800C77D4
  c->r[4]=0u+0x00000004u; // 800C77D8
  c->r[5]=0u+0x00000005u; // 800C77DC
  c->r[6]=0u+0x00000001u; // 800C77E0
  c->r[7]=0u+0x00000001u; // 800C77E4
  c->lr=0x800C77ECu; f_8017900C(c); // 800C77E8
  goto L_800C7878; // 800C77EC
L_800C77F0:;
  c->r[3]=c->r[31]|c->r[31]; // 800C77F0
  c->r[4]=0u+0x00000004u; // 800C77F4
  c->r[5]=0u+0x00000006u; // 800C77F8
  c->r[6]=0u+0x00000001u; // 800C77FC
  c->r[7]=0u+0x00000001u; // 800C7800
  c->lr=0x800C7808u; f_8017900C(c); // 800C7804
  goto L_800C7878; // 800C7808
L_800C780C:;
  c->r[3]=c->r[31]|c->r[31]; // 800C780C
  c->r[4]=0u+0x00000004u; // 800C7810
  c->r[5]=0u+0x00000006u; // 800C7814
  c->r[6]=0u+0x00000001u; // 800C7818
  c->r[7]=0u+0x00000001u; // 800C781C
  c->lr=0x800C7824u; f_8017900C(c); // 800C7820
  goto L_800C7878; // 800C7824
L_800C7828:;
  c->r[3]=c->r[31]|c->r[31]; // 800C7828
  c->r[4]=0u+0x00000004u; // 800C782C
  c->r[5]=0u+0x00000008u; // 800C7830
  c->r[6]=0u+0x00000001u; // 800C7834
  c->r[7]=0u+0x00000001u; // 800C7838
  c->lr=0x800C7840u; f_8017900C(c); // 800C783C
  goto L_800C7878; // 800C7840
L_800C7844:;
  c->r[3]=c->r[31]|c->r[31]; // 800C7844
  c->r[4]=0u+0x00000004u; // 800C7848
  c->r[5]=0u+0x00000008u; // 800C784C
  c->r[6]=0u+0x00000001u; // 800C7850
  c->r[7]=0u+0x00000001u; // 800C7854
  c->lr=0x800C785Cu; f_8017900C(c); // 800C7858
  goto L_800C7878; // 800C785C
L_800C7860:;
  c->r[3]=c->r[31]|c->r[31]; // 800C7860
  c->r[4]=0u+0x00000004u; // 800C7864
  c->r[5]=0u+0x00000008u; // 800C7868
  c->r[6]=0u+0x00000001u; // 800C786C
  c->r[7]=0u+0x00000001u; // 800C7870
  c->lr=0x800C7878u; f_8017900C(c); // 800C7874
L_800C7878:;
  c->r[3]=c->r[31]|c->r[31]; // 800C7878
  c->r[4]=0u+0x00000000u; // 800C787C
  c->lr=0x800C7884u; f_800453A4(c); // 800C7880
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 800C7884
  if (crb(c,2)) { goto L_800C7930; } // 800C7888
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C788C
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C7890
  cmps(c,0,(int32_t)c->r[0],5); // 800C7894
  if (crb(c,2)) { goto L_800C78FC; } // 800C7898
  if (!crb(c,0)) { goto L_800C78B8; } // 800C789C
  cmps(c,0,(int32_t)c->r[0],2); // 800C78A0
  if (crb(c,2)) { goto L_800C78C4; } // 800C78A4
  if (!crb(c,0)) { goto L_800C7930; } // 800C78A8
  cmps(c,0,(int32_t)c->r[0],1); // 800C78AC
  if (!crb(c,0)) { goto L_800C78E0; } // 800C78B0
  goto L_800C7930; // 800C78B4
L_800C78B8:;
  cmps(c,0,(int32_t)c->r[0],7); // 800C78B8
  if (!crb(c,0)) { goto L_800C7930; } // 800C78BC
  goto L_800C7918; // 800C78C0
L_800C78C4:;
  c->r[3]=c->r[31]|c->r[31]; // 800C78C4
  c->r[4]=0u+0x00000004u; // 800C78C8
  c->r[5]=0u+0x00000006u; // 800C78CC
  c->r[6]=0u+0x00000001u; // 800C78D0
  c->r[7]=0u+0x00000001u; // 800C78D4
  c->lr=0x800C78DCu; f_8017900C(c); // 800C78D8
  goto L_800C7930; // 800C78DC
L_800C78E0:;
  c->r[3]=c->r[31]|c->r[31]; // 800C78E0
  c->r[4]=0u+0x00000004u; // 800C78E4
  c->r[5]=0u+0x00000005u; // 800C78E8
  c->r[6]=0u+0x00000001u; // 800C78EC
  c->r[7]=0u+0x00000001u; // 800C78F0
  c->lr=0x800C78F8u; f_8017900C(c); // 800C78F4
  goto L_800C7930; // 800C78F8
L_800C78FC:;
  c->r[3]=c->r[31]|c->r[31]; // 800C78FC
  c->r[4]=0u+0x00000004u; // 800C7900
  c->r[5]=0u+0x00000009u; // 800C7904
  c->r[6]=0u+0x00000001u; // 800C7908
  c->r[7]=0u+0x00000001u; // 800C790C
  c->lr=0x800C7914u; f_8017900C(c); // 800C7910
  goto L_800C7930; // 800C7914
L_800C7918:;
  c->r[3]=c->r[31]|c->r[31]; // 800C7918
  c->r[4]=0u+0x00000004u; // 800C791C
  c->r[5]=0u+0x00000009u; // 800C7920
  c->r[6]=0u+0x00000001u; // 800C7924
  c->r[7]=0u+0x00000001u; // 800C7928
  c->lr=0x800C7930u; f_8017900C(c); // 800C792C
L_800C7930:;
  c->r[3]=c->r[31]|c->r[31]; // 800C7930
  c->r[4]=0u+0x00000000u; // 800C7934
  c->lr=0x800C793Cu; f_800453A4(c); // 800C7938
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 800C793C
  if (crb(c,2)) { goto L_800C79D0; } // 800C7940
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C7944
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C7948
  cmps(c,0,(int32_t)c->r[0],2); // 800C794C
  if (crb(c,2)) { goto L_800C7970; } // 800C7950
  if (!crb(c,0)) { goto L_800C7964; } // 800C7954
  cmps(c,0,(int32_t)c->r[0],1); // 800C7958
  if (!crb(c,0)) { goto L_800C799C; } // 800C795C
  goto L_800C79D0; // 800C7960
L_800C7964:;
  cmps(c,0,(int32_t)c->r[0],5); // 800C7964
  if (crb(c,2)) { goto L_800C79B8; } // 800C7968
  goto L_800C79D0; // 800C796C
L_800C7970:;
  c->r[3]=c->r[31]|c->r[31]; // 800C7970
  c->r[4]=0u+0x00000004u; // 800C7974
  c->r[5]=0u+0x00000007u; // 800C7978
  c->r[6]=0u+0x00000001u; // 800C797C
  c->r[7]=0u+0x00000001u; // 800C7980
  c->lr=0x800C7988u; f_8017900C(c); // 800C7984
  c->r[3]=0u+0x00000000u; // 800C7988
  c->r[4]=0u+0x00000003u; // 800C798C
  c->r[5]=0u+0x0000000Cu; // 800C7990
  c->lr=0x800C7998u; f_8027C0C8(c); // 800C7994
  goto L_800C79D0; // 800C7998
L_800C799C:;
  c->r[3]=c->r[31]|c->r[31]; // 800C799C
  c->r[4]=0u+0x00000004u; // 800C79A0
  c->r[5]=0u+0x0000001Bu; // 800C79A4
  c->r[6]=0u+0x00000001u; // 800C79A8
  c->r[7]=0u+0x00000001u; // 800C79AC
  c->lr=0x800C79B4u; f_8017900C(c); // 800C79B0
  goto L_800C79D0; // 800C79B4
L_800C79B8:;
  c->r[3]=c->r[31]|c->r[31]; // 800C79B8
  c->r[4]=0u+0x00000004u; // 800C79BC
  c->r[5]=0u+0x00000008u; // 800C79C0
  c->r[6]=0u+0x00000001u; // 800C79C4
  c->r[7]=0u+0x00000001u; // 800C79C8
  c->lr=0x800C79D0u; f_8017900C(c); // 800C79CC
L_800C79D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C79D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C79D4
  c->lr=c->r[0]; // 800C79D8
  c->r[1]=c->r[1]+0x00000010u; // 800C79DC
  return; // 800C79E0
}

// fn_800C79E4
void f_800C79E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C79E4
  c->r[0]=c->lr; // 800C79E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C79EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C79F0
  c->r[31]=c->r[3]|c->r[3]; // 800C79F4
  c->lr=0x800C79FCu; f_801F51B8(c); // 800C79F8
  c->r[7]=0u+0x803D0000u; // 800C79FC
  {uint32_t ea=c->r[7]+0x00001094u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C7A00
  c->r[3]=c->r[31]|c->r[31]; // 800C7A04
  c->r[4]=c->r[1]+0x00000008u; // 800C7A08
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C7A0C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C7A10
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C7A14
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C7A18
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C7A1C
  c->lr=0x800C7A24u; f_800C6C78(c); // 800C7A20
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C7A24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C7A28
  c->lr=c->r[0]; // 800C7A2C
  c->r[1]=c->r[1]+0x00000020u; // 800C7A30
  return; // 800C7A34
}

// fn_800C7A38
void f_800C7A38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7A38
  c->r[0]=c->lr; // 800C7A3C
  c->r[5]=0u+0x80620000u; // 800C7A40
  c->r[4]=0u+0x00000002u; // 800C7A44
  W32(c->r[1]+0x00000134u,c->r[0]); // 800C7A48
  c->r[5]=c->r[5]+0x00007688u; // 800C7A4C
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 800C7A50
  c->r[31]=c->r[3]|c->r[3]; // 800C7A54
  W32(c->r[1]+0x00000128u,c->r[30]); // 800C7A58
  c->r[3]=R32(c->r[5]+0x00000014u); // 800C7A5C
  c->lr=0x800C7A64u; f_80037670(c); // 800C7A60
  cmps(c,0,(int32_t)c->r[3],0); // 800C7A64
  if (!crb(c,2)) { goto L_800C7BE4; } // 800C7A68
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C7A6C
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800C7A70
  cmps(c,0,(int32_t)c->r[0],0); // 800C7A74
  if (!crb(c,2)) { goto L_800C7BE4; } // 800C7A78
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800C7A7C
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800C7A80
  if (crb(c,2)) { goto L_800C7AB8; } // 800C7A84
  c->r[0]=R8(c->r[31]+0x00000093u); // 800C7A88
  cmps(c,0,(int32_t)c->r[0],0); // 800C7A8C
  if (crb(c,2)) { goto L_800C7BE4; } // 800C7A90
  c->r[0]=0u+0x00000000u; // 800C7A94
  c->r[3]=c->r[31]|c->r[31]; // 800C7A98
  W8(c->r[31]+0x00000093u,c->r[0]); // 800C7A9C
  c->r[4]=c->r[31]+0x0000009Cu; // 800C7AA0
  c->r[5]=c->r[31]+0x0000009Eu; // 800C7AA4
  c->r[6]=c->r[31]+0x000000A0u; // 800C7AA8
  c->r[7]=c->r[31]+0x000000A2u; // 800C7AAC
  c->lr=0x800C7AB4u; f_801F60D0(c); // 800C7AB0
  goto L_800C7BE4; // 800C7AB4
L_800C7AB8:;
  c->r[0]=R8(c->r[31]+0x00000093u); // 800C7AB8
  cmps(c,0,(int32_t)c->r[0],0); // 800C7ABC
  if (!crb(c,2)) { goto L_800C7AE8; } // 800C7AC0
  c->r[0]=0u+0x00000001u; // 800C7AC4
  {uint32_t ea=c->r[2]+0xFFFF9F18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7AC8
  W8(c->r[31]+0x00000093u,c->r[0]); // 800C7ACC
  c->r[3]=c->r[31]|c->r[31]; // 800C7AD0
  c->r[4]=c->r[31]+0x0000009Cu; // 800C7AD4
  c->r[5]=c->r[31]+0x0000009Eu; // 800C7AD8
  c->r[6]=c->r[31]+0x000000A0u; // 800C7ADC
  c->r[7]=c->r[31]+0x000000A2u; // 800C7AE0
  c->lr=0x800C7AE8u; f_801F5EE4(c); // 800C7AE4
L_800C7AE8:;
  c->r[0]=R16(c->r[31]+0x000000B4u); // 800C7AE8
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7AEC
  c->r[0]=rotl(c->r[0],20)&0x00000001u; cr0(c,c->r[0]); // 800C7AF0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800C7AF4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800C7AF8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800C7AFC
  if (crb(c,2)) { goto L_800C7B44; } // 800C7B00
  c->r[3]=c->r[1]+0x00000020u; // 800C7B04
  c->r[4]=c->r[31]+0x0000002Cu; // 800C7B08
  c->lr=0x800C7B10u; f_800361A0(c); // 800C7B0C
  c->r[30]=0u+0x80550000u; // 800C7B10
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7B14
  c->r[30]=c->r[30]+0x00003D60u; // 800C7B18
  c->r[5]=c->r[31]|c->r[31]; // 800C7B1C
  c->r[3]=c->r[30]+0x00000010u; // 800C7B20
  c->r[6]=c->r[1]+0x00000020u; // 800C7B24
  c->r[7]=c->r[1]+0x000000C8u; // 800C7B28
  c->r[4]=0u+0x000001FFu; // 800C7B2C
  c->lr=0x800C7B34u; f_80226910(c); // 800C7B30
  c->r[3]=c->r[30]+0x00000010u; // 800C7B34
  c->r[4]=c->r[1]+0x000000C8u; // 800C7B38
  c->lr=0x800C7B40u; f_80226D68(c); // 800C7B3C
  goto L_800C7BE4; // 800C7B40
L_800C7B44:;
  {uint32_t ea=c->r[2]+0xFFFF9F20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7B44
  c->r[3]=c->r[1]+0x00000038u; // 800C7B48
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7B4C
  c->r[4]=0u+0x00000059u; // 800C7B50
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800C7B54
  c->lr=0x800C7B5Cu; f_80295FBC(c); // 800C7B58
  c->r[7]=0u+0x803A0000u; // 800C7B5C
  {uint32_t ea=c->r[7]+0xFFFFDBE8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C7B60
  c->r[3]=c->r[1]+0x00000014u; // 800C7B64
  c->r[4]=c->r[1]+0x00000008u; // 800C7B68
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C7B6C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C7B70
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C7B74
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C7B78
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C7B7C
  c->lr=0x800C7B84u; f_800361A0(c); // 800C7B80
  c->r[4]=c->r[1]+0x00000014u; // 800C7B84
  c->r[3]=c->r[1]+0x00000038u; // 800C7B88
  c->r[5]=c->r[4]|c->r[4]; // 800C7B8C
  c->lr=0x800C7B94u; f_80296750(c); // 800C7B90
  c->r[4]=c->r[1]+0x00000014u; // 800C7B94
  c->r[3]=c->r[31]+0x0000002Cu; // 800C7B98
  c->r[5]=c->r[4]|c->r[4]; // 800C7B9C
  c->lr=0x800C7BA4u; f_80296A4C(c); // 800C7BA0
  c->r[30]=0u+0x80550000u; // 800C7BA4
  {uint32_t ea=c->r[2]+0xFFFF9F58u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7BA8
  c->r[30]=c->r[30]+0x00003D60u; // 800C7BAC
  {uint32_t ea=c->r[2]+0xFFFF9F5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C7BB0
  c->r[5]=c->r[31]|c->r[31]; // 800C7BB4
  c->r[6]=c->r[1]+0x00000014u; // 800C7BB8
  c->r[3]=c->r[30]+0x00000010u; // 800C7BBC
  c->r[7]=c->r[1]+0x00000068u; // 800C7BC0
  c->r[4]=0u+0x000001FFu; // 800C7BC4
  c->lr=0x800C7BCCu; f_80226C38(c); // 800C7BC8
  c->r[3]=c->r[30]+0x00000010u; // 800C7BCC
  c->r[4]=c->r[1]+0x00000068u; // 800C7BD0
  c->lr=0x800C7BD8u; f_80226CE8(c); // 800C7BD4
  c->r[3]=c->r[30]+0x00000010u; // 800C7BD8
  c->r[4]=c->r[1]+0x00000068u; // 800C7BDC
  c->lr=0x800C7BE4u; f_80226D68(c); // 800C7BE0
L_800C7BE4:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 800C7BE4
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 800C7BE8
  c->r[30]=R32(c->r[1]+0x00000128u); // 800C7BEC
  c->lr=c->r[0]; // 800C7BF0
  c->r[1]=c->r[1]+0x00000130u; // 800C7BF4
  return; // 800C7BF8
}

// fn_800C7BFC
void f_800C7BFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[5]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C7BFC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C7C00
  {uint32_t ea=c->r[7]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7C04
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7C08
  fcmp(c,0,c->f[2],c->f[3]); // 800C7C0C
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[2]); // 800C7C10
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[0]); // 800C7C14
  if (!crb(c,0)) { goto L_800C7C24; } // 800C7C18
  c->f[1]=c->f[2]; // 800C7C1C
  goto L_800C7C2C; // 800C7C20
L_800C7C24:;
  c->f[1]=c->f[3]; // 800C7C24
  c->f[3]=c->f[2]; // 800C7C28
L_800C7C2C:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7C2C
  {uint32_t ea=c->r[7]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C7C30
  fcmp(c,0,c->f[0],c->f[4]); // 800C7C34
  if (!crb(c,0)) { goto L_800C7C44; } // 800C7C38
  c->f[2]=c->f[0]; // 800C7C3C
  goto L_800C7C4C; // 800C7C40
L_800C7C44:;
  c->f[2]=c->f[4]; // 800C7C44
  c->f[4]=c->f[0]; // 800C7C48
L_800C7C4C:;
  fcmp(c,0,c->f[1],c->f[4]); // 800C7C4C
  if (crb(c,1)) { goto L_800C7C5C; } // 800C7C50
  fcmp(c,0,c->f[2],c->f[3]); // 800C7C54
  if (!crb(c,1)) { goto L_800C7C64; } // 800C7C58
L_800C7C5C:;
  c->r[3]=0u+0x00000000u; // 800C7C5C
  return; // 800C7C60
L_800C7C64:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7C64
  {uint32_t ea=c->r[5]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C7C68
  fcmp(c,0,c->f[0],c->f[2]); // 800C7C6C
  if (!crb(c,0)) { goto L_800C7C7C; } // 800C7C70
  c->f[1]=c->f[0]; // 800C7C74
  goto L_800C7C84; // 800C7C78
L_800C7C7C:;
  c->f[1]=c->f[2]; // 800C7C7C
  c->f[2]=c->f[0]; // 800C7C80
L_800C7C84:;
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7C84
  {uint32_t ea=c->r[7]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C7C88
  fcmp(c,0,c->f[0],c->f[4]); // 800C7C8C
  if (!crb(c,0)) { goto L_800C7C9C; } // 800C7C90
  c->f[3]=c->f[0]; // 800C7C94
  goto L_800C7CA4; // 800C7C98
L_800C7C9C:;
  c->f[3]=c->f[4]; // 800C7C9C
  c->f[4]=c->f[0]; // 800C7CA0
L_800C7CA4:;
  fcmp(c,0,c->f[1],c->f[4]); // 800C7CA4
  if (crb(c,1)) { goto L_800C7CB4; } // 800C7CA8
  fcmp(c,0,c->f[3],c->f[2]); // 800C7CAC
  if (!crb(c,1)) { goto L_800C7CBC; } // 800C7CB0
L_800C7CB4:;
  c->r[3]=0u+0x00000000u; // 800C7CB4
  return; // 800C7CB8
L_800C7CBC:;
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7CBC
  fcmp(c,0,c->f[0],c->f[5]); // 800C7CC0
  if (!crb(c,2)) { goto L_800C7CFC; } // 800C7CC4
  fcmp(c,0,c->f[0],c->f[7]); // 800C7CC8
  if (!crb(c,2)) { goto L_800C7CD8; } // 800C7CCC
  c->r[3]=0u+0x00000000u; // 800C7CD0
  return; // 800C7CD4
L_800C7CD8:;
  {uint32_t ea=c->r[7]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7CD8
  {uint32_t ea=c->r[6]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C7CDC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 800C7CE0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 800C7CE4
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7CE8
  c->f[0]=c->ps1[0]=S(c->f[8]-c->f[0]); // 800C7CEC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[7]); // 800C7CF0
  c->f[5]=c->ps1[5]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 800C7CF4
  goto L_800C7D80; // 800C7CF8
L_800C7CFC:;
  fcmp(c,0,c->f[0],c->f[7]); // 800C7CFC
  if (!crb(c,2)) { goto L_800C7D28; } // 800C7D00
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7D04
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C7D08
  {uint32_t ea=c->r[6]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 800C7D0C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 800C7D10
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7D14
  c->f[0]=c->ps1[0]=S(c->f[8]-c->f[0]); // 800C7D18
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[5]); // 800C7D1C
  c->f[5]=c->ps1[5]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 800C7D20
  goto L_800C7D80; // 800C7D24
L_800C7D28:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7D28
  {uint32_t ea=c->r[4]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C7D2C
  {uint32_t ea=c->r[7]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7D30
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C7D34
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 800C7D38
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800C7D3C
  c->f[6]=c->ps1[6]=S(c->f[1]/c->f[5]); // 800C7D40
  c->f[5]=c->ps1[5]=S(c->f[0]/c->f[7]); // 800C7D44
  fcmp(c,0,c->f[6],c->f[5]); // 800C7D48
  if (!crb(c,2)) { goto L_800C7D58; } // 800C7D4C
  c->r[3]=0u+0x00000000u; // 800C7D50
  return; // 800C7D54
L_800C7D58:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7D58
  c->f[0]=c->ps1[0]=S(c->f[6]-c->f[5]); // 800C7D5C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C7D60
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 800C7D64
  c->f[1]=c->ps1[1]=S(std::fma(c->f[6],c->f[2],-c->f[1])); // 800C7D68
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 800C7D6C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 800C7D70
  c->f[8]=c->ps1[8]=S(c->f[1]/c->f[0]); // 800C7D74
  c->f[0]=c->ps1[0]=S(c->f[8]-c->f[2]); // 800C7D78
  c->f[5]=c->ps1[5]=S(std::fma(c->f[6],c->f[0],c->f[4])); // 800C7D7C
L_800C7D80:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7D80
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7D84
  fcmp(c,0,c->f[0],c->f[1]); // 800C7D88
  if (!crb(c,0)) { goto L_800C7D98; } // 800C7D8C
  c->f[2]=c->f[0]; // 800C7D90
  goto L_800C7DA0; // 800C7D94
L_800C7D98:;
  c->f[2]=c->f[1]; // 800C7D98
  c->f[1]=c->f[0]; // 800C7D9C
L_800C7DA0:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7DA0
  {uint32_t ea=c->r[5]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C7DA4
  fcmp(c,0,c->f[0],c->f[3]); // 800C7DA8
  if (!crb(c,0)) { goto L_800C7DB8; } // 800C7DAC
  c->f[4]=c->f[0]; // 800C7DB0
  goto L_800C7DC0; // 800C7DB4
L_800C7DB8:;
  c->f[4]=c->f[3]; // 800C7DB8
  c->f[3]=c->f[0]; // 800C7DBC
L_800C7DC0:;
  fcmp(c,0,c->f[2],c->f[8]); // 800C7DC0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C7DC4
  if (!crb(c,2)) { goto L_800C7E80; } // 800C7DC8
  fcmp(c,0,c->f[8],c->f[1]); // 800C7DCC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C7DD0
  if (!crb(c,2)) { goto L_800C7E80; } // 800C7DD4
  fcmp(c,0,c->f[4],c->f[5]); // 800C7DD8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C7DDC
  if (!crb(c,2)) { goto L_800C7E80; } // 800C7DE0
  fcmp(c,0,c->f[5],c->f[3]); // 800C7DE4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C7DE8
  if (!crb(c,2)) { goto L_800C7E80; } // 800C7DEC
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7DF0
  {uint32_t ea=c->r[7]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C7DF4
  fcmp(c,0,c->f[0],c->f[2]); // 800C7DF8
  if (!crb(c,0)) { goto L_800C7E08; } // 800C7DFC
  c->f[1]=c->f[0]; // 800C7E00
  goto L_800C7E10; // 800C7E04
L_800C7E08:;
  c->f[1]=c->f[2]; // 800C7E08
  c->f[2]=c->f[0]; // 800C7E0C
L_800C7E10:;
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7E10
  {uint32_t ea=c->r[7]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C7E14
  fcmp(c,0,c->f[0],c->f[4]); // 800C7E18
  if (!crb(c,0)) { goto L_800C7E28; } // 800C7E1C
  c->f[3]=c->f[0]; // 800C7E20
  goto L_800C7E30; // 800C7E24
L_800C7E28:;
  c->f[3]=c->f[4]; // 800C7E28
  c->f[4]=c->f[0]; // 800C7E2C
L_800C7E30:;
  fcmp(c,0,c->f[1],c->f[8]); // 800C7E30
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C7E34
  if (!crb(c,2)) { goto L_800C7E78; } // 800C7E38
  fcmp(c,0,c->f[8],c->f[2]); // 800C7E3C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C7E40
  if (!crb(c,2)) { goto L_800C7E78; } // 800C7E44
  fcmp(c,0,c->f[3],c->f[5]); // 800C7E48
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C7E4C
  if (!crb(c,2)) { goto L_800C7E78; } // 800C7E50
  fcmp(c,0,c->f[5],c->f[4]); // 800C7E54
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C7E58
  if (!crb(c,2)) { goto L_800C7E78; } // 800C7E5C
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7E60
  c->r[3]=0u+0x00000001u; // 800C7E64
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[8]);} // 800C7E68
  {uint32_t ea=c->r[8]+0x00000004u; WF32(ea,c->f[0]);} // 800C7E6C
  {uint32_t ea=c->r[8]+0x00000008u; WF32(ea,c->f[5]);} // 800C7E70
  return; // 800C7E74
L_800C7E78:;
  c->r[3]=0u+0x00000000u; // 800C7E78
  return; // 800C7E7C
L_800C7E80:;
  c->r[3]=0u+0x00000000u; // 800C7E80
  return; // 800C7E84
}

// fn_800C7E88
void f_800C7E88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7E88
  c->r[0]=c->lr; // 800C7E8C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800C7E90
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 800C7E94
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 800C7E98
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[30]);} // 800C7E9C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,30,ea,0,0);} // 800C7EA0
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[29]);} // 800C7EA4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,29,ea,0,0);} // 800C7EA8
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[28]);} // 800C7EAC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,28,ea,0,0);} // 800C7EB0
  c->r[11]=c->r[1]+0x000000A0u; // 800C7EB4
  c->lr=0x800C7EBCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C7EB8
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 800C7EBC
  c->r[31]=0u+0x803A0000u; // 800C7EC0
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C7EC4
  c->r[25]=c->r[3]|c->r[3]; // 800C7EC8
  c->r[26]=c->r[4]|c->r[4]; // 800C7ECC
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[29]=c->ps1[29]=RF32(ea);} // 800C7ED0
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 800C7ED4
  c->r[31]=c->r[31]+0xFFFFD278u; // 800C7ED8
  c->r[4]=c->r[25]+0x00000038u; // 800C7EDC
  c->r[30]=0u+0x00000000u; // 800C7EE0
  W32(c->r[1]+0x00000070u,c->r[0]); // 800C7EE4
  c->r[0]=R32(c->r[3]+0x00000034u); // 800C7EE8
  c->r[3]=c->r[3]+0x0000002Cu; // 800C7EEC
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C7EF0
  c->lr=0x800C7EF8u; f_80296C84(c); // 800C7EF4
  {uint32_t ea=c->r[2]+0xFFFF9F60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7EF8
  fcmp(c,0,c->f[1],c->f[0]); // 800C7EFC
  if (crb(c,0)) { goto L_800C81B8; } // 800C7F00
  {uint32_t ea=c->r[2]+0xFFFF9F64u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C7F04
  c->r[29]=0u+0x00000000u; // 800C7F08
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C7F0C
  c->r[24]=0u+0x00000001u; // 800C7F10
  goto L_800C817C; // 800C7F14
L_800C7F18:;
  c->r[3]=R8(c->r[31]+0x00000029u); // 800C7F18
  c->r[0]=R8(c->r[25]+0x000000A4u); // 800C7F1C
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800C7F20
  if (crb(c,2)) { goto L_800C8174; } // 800C7F24
  {uint32_t ea=c->r[25]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7F28
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7F2C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800C7F30
  c->lr=0x800C7F38u; f_8003EA88(c); // 800C7F34
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7F38
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[30]);} // 800C7F3C
  fcmp(c,0,c->f[1],c->f[0]); // 800C7F40
  if (!crb(c,0)) { goto L_800C8174; } // 800C7F44
  c->r[3]=c->r[1]+0x00000008u; // 800C7F48
  c->lr=0x800C7F50u; f_800C69FC(c); // 800C7F4C
  c->r[23]=R8(c->r[31]+0x00000028u); // 800C7F50
  c->r[28]=0u+0x00000000u; // 800C7F54
L_800C7F58:;
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 800C7F58
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[24]<<((c->r[0])&31)); // 800C7F5C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800C7F60
  c->r[0]=c->r[23]&c->r[0]; cr0(c,c->r[0]); // 800C7F64
  if (crb(c,2)) { goto L_800C815C; } // 800C7F68
  c->r[3]=c->r[1]+0x00000054u; // 800C7F6C
  c->r[4]=c->r[25]+0x00000038u; // 800C7F70
  c->lr=0x800C7F78u; f_800361A0(c); // 800C7F74
  {uint32_t ea=c->r[25]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7F78
  c->r[3]=c->r[1]+0x00000048u; // 800C7F7C
  c->r[4]=c->r[25]+0x0000002Cu; // 800C7F80
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800C7F84
  c->lr=0x800C7F8Cu; f_800361A0(c); // 800C7F88
  c->r[3]=rotl(c->r[28],3)&0x000007F8u; // 800C7F8C
  {uint32_t ea=c->r[3]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea); c->r[3]=ea;} // 800C7F90
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 800C7F94
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 800C7F98
  cmps(c,0,(int32_t)c->r[0],2); // 800C7F9C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7FA0
  {uint32_t ea=c->r[25]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7FA4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800C7FA8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800C7FAC
  if (crb(c,2)) { goto L_800C7FE4; } // 800C7FB0
  if (!crb(c,0)) { goto L_800C7FC8; } // 800C7FB4
  cmps(c,0,(int32_t)c->r[0],0); // 800C7FB8
  if (crb(c,2)) { goto L_800C7FD4; } // 800C7FBC
  if (!crb(c,0)) { goto L_800C7FDC; } // 800C7FC0
  goto L_800C7FF0; // 800C7FC4
L_800C7FC8:;
  cmps(c,0,(int32_t)c->r[0],4); // 800C7FC8
  if (!crb(c,0)) { goto L_800C7FF0; } // 800C7FCC
  goto L_800C7FEC; // 800C7FD0
L_800C7FD4:;
  c->r[27]=0u+0x00000001u; // 800C7FD4
  goto L_800C7FF0; // 800C7FD8
L_800C7FDC:;
  c->r[27]=0u+0x00000003u; // 800C7FDC
  goto L_800C7FF0; // 800C7FE0
L_800C7FE4:;
  c->r[27]=0u+0x00000000u; // 800C7FE4
  goto L_800C7FF0; // 800C7FE8
L_800C7FEC:;
  c->r[27]=0u+0x00000002u; // 800C7FEC
L_800C7FF0:;
  c->r[0]=rotl(c->r[27],3)&0x000007F8u; // 800C7FF0
  c->r[3]=c->r[25]|c->r[25]; // 800C7FF4
  {uint32_t ea=c->r[31]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7FF8
  c->r[6]=c->r[31]+c->r[0]; // 800C7FFC
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8000
  c->r[4]=c->r[1]+0x00000054u; // 800C8004
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800C8008
  c->r[5]=c->r[1]+0x00000048u; // 800C800C
  c->r[6]=c->r[1]+0x0000003Cu; // 800C8010
  c->r[7]=c->r[1]+0x00000030u; // 800C8014
  {uint32_t ea=c->r[25]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8018
  c->r[8]=c->r[1]+0x00000024u; // 800C801C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 800C8020
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800C8024
  c->lr=0x800C802Cu; f_800C7BFC(c); // 800C8028
  cmps(c,0,(int32_t)c->r[3],0); // 800C802C
  if (crb(c,2)) { goto L_800C815C; } // 800C8030
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8034
  c->r[3]=c->r[1]+0x00000024u; // 800C8038
  c->r[4]=c->r[1]+0x0000003Cu; // 800C803C
  c->r[5]=c->r[1]+0x00000018u; // 800C8040
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800C8044
  c->lr=0x800C804Cu; f_80296A70(c); // 800C8048
  c->r[3]=c->r[1]+0x00000018u; // 800C804C
  c->lr=0x800C8054u; f_80296B0C(c); // 800C8050
  c->r[3]=c->r[1]+0x00000030u; // 800C8054
  c->r[4]=c->r[1]+0x0000003Cu; // 800C8058
  c->r[5]=c->r[1]+0x00000018u; // 800C805C
  c->lr=0x800C8064u; f_80296A70(c); // 800C8060
  c->r[3]=c->r[1]+0x00000018u; // 800C8064
  c->lr=0x800C806Cu; f_80296B0C(c); // 800C8068
  c->r[3]=c->r[1]+0x00000018u; // 800C806C
  c->r[4]=c->r[3]|c->r[3]; // 800C8070
  c->lr=0x800C8078u; f_80296AB0(c); // 800C8074
  c->r[3]=c->r[1]+0x00000024u; // 800C8078
  c->r[5]=c->r[1]+0x0000000Cu; // 800C807C
  c->r[4]=c->r[3]|c->r[3]; // 800C8080
  c->lr=0x800C8088u; f_80296A70(c); // 800C8084
  c->r[3]=c->r[1]+0x00000048u; // 800C8088
  c->r[4]=c->r[1]+0x00000024u; // 800C808C
  c->r[5]=c->r[1]+0x0000000Cu; // 800C8090
  c->lr=0x800C8098u; f_80296A70(c); // 800C8094
  c->r[3]=c->r[1]+0x00000018u; // 800C8098
  c->r[4]=c->r[1]+0x0000000Cu; // 800C809C
  c->lr=0x800C80A4u; f_80296B50(c); // 800C80A0
  c->f[28]=c->f[1]; // 800C80A4
  c->r[3]=c->r[1]+0x00000048u; // 800C80A8
  c->r[4]=c->r[1]+0x00000054u; // 800C80AC
  c->r[5]=c->r[1]+0x0000000Cu; // 800C80B0
  c->lr=0x800C80B8u; f_80296A70(c); // 800C80B4
  c->r[3]=c->r[1]+0x0000000Cu; // 800C80B8
  c->r[4]=c->r[3]|c->r[3]; // 800C80BC
  c->lr=0x800C80C4u; f_80296AB0(c); // 800C80C0
  cmps(c,0,(int32_t)c->r[26],0); // 800C80C4
  if (crb(c,2)) { goto L_800C80D0; } // 800C80C8
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[28]=c->ps1[28]=RF32(ea);} // 800C80CC
L_800C80D0:;
  c->r[3]=c->r[1]+0x00000054u; // 800C80D0
  c->r[4]=c->r[1]+0x00000024u; // 800C80D4
  c->lr=0x800C80DCu; f_80296CAC(c); // 800C80D8
  fcmp(c,0,c->f[1],c->f[31]); // 800C80DC
  if (!crb(c,1)) { goto L_800C80EC; } // 800C80E0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800C80E4
  goto L_800C80F0; // 800C80E8
L_800C80EC:;
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C80EC
L_800C80F0:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800C80F0
  c->r[4]=c->r[3]|c->r[3]; // 800C80F4
  c->lr=0x800C80FCu; f_80296A94(c); // 800C80F8
  c->f[1]=c->f[28]; // 800C80FC
  c->r[3]=c->r[1]+0x00000018u; // 800C8100
  c->r[4]=c->r[3]|c->r[3]; // 800C8104
  c->lr=0x800C810Cu; f_80296A94(c); // 800C8108
  c->r[3]=c->r[1]+0x0000000Cu; // 800C810C
  c->r[4]=c->r[1]+0x00000054u; // 800C8110
  c->r[5]=c->r[3]|c->r[3]; // 800C8114
  c->lr=0x800C811Cu; f_80296A4C(c); // 800C8118
  c->r[3]=c->r[1]+0x0000000Cu; // 800C811C
  c->r[4]=c->r[1]+0x00000018u; // 800C8120
  c->r[5]=c->r[3]|c->r[3]; // 800C8124
  c->lr=0x800C812Cu; f_80296A4C(c); // 800C8128
  c->r[3]=c->r[1]+0x0000000Cu; // 800C812C
  c->r[4]=c->r[25]+0x00000038u; // 800C8130
  c->lr=0x800C8138u; f_80296C84(c); // 800C8134
  fcmp(c,0,c->f[29],c->f[1]); // 800C8138
  c->f[28]=c->f[1]; // 800C813C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C8140
  if (!crb(c,2)) { goto L_800C815C; } // 800C8144
  c->r[3]=c->r[1]+0x0000006Cu; // 800C8148
  c->r[4]=c->r[1]+0x0000000Cu; // 800C814C
  c->lr=0x800C8154u; f_800361A0(c); // 800C8150
  c->f[29]=c->f[28]; // 800C8154
  c->r[30]=0u+0x00000001u; // 800C8158
L_800C815C:;
  c->r[28]=c->r[28]+0x00000001u; // 800C815C
  cmpu(c,0,c->r[28],0x00000004u); // 800C8160
  if (crb(c,0)) { IRQCHK(c); goto L_800C7F58; } // 800C8164
  c->r[3]=c->r[1]+0x00000008u; // 800C8168
  c->r[4]=0u+0xFFFFFFFFu; // 800C816C
  c->lr=0x800C8174u; f_800C6978(c); // 800C8170
L_800C8174:;
  c->r[31]=c->r[31]+0x0000002Cu; // 800C8174
  c->r[29]=c->r[29]+0x00000001u; // 800C8178
L_800C817C:;
  c->r[0]=R8(c->r[25]+0x000000ACu); // 800C817C
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800C8180
  cmpu(c,0,c->r[3],c->r[0]); // 800C8184
  if (crb(c,0)) { IRQCHK(c); goto L_800C7F18; } // 800C8188
  cmps(c,0,(int32_t)c->r[30],0); // 800C818C
  if (crb(c,2)) { goto L_800C81A4; } // 800C8190
  c->r[3]=c->r[25]+0x0000002Cu; // 800C8194
  c->r[4]=c->r[1]+0x0000006Cu; // 800C8198
  c->lr=0x800C81A0u; f_800361A0(c); // 800C819C
  goto L_800C81B8; // 800C81A0
L_800C81A4:;
  cmps(c,0,(int32_t)c->r[26],0); // 800C81A4
  if (!crb(c,2)) { goto L_800C81B8; } // 800C81A8
  c->r[3]=c->r[25]+0x0000002Cu; // 800C81AC
  c->r[4]=c->r[25]+0x00000038u; // 800C81B0
  c->lr=0x800C81B8u; f_800361A0(c); // 800C81B4
L_800C81B8:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 800C81B8
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 800C81BC
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,30,ea,0,0);} // 800C81C0
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[30]=RF64(ea);} // 800C81C4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,29,ea,0,0);} // 800C81C8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[29]=RF64(ea);} // 800C81CC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,28,ea,0,0);} // 800C81D0
  c->r[11]=c->r[1]+0x000000A0u; // 800C81D4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[28]=RF64(ea);} // 800C81D8
  c->lr=0x800C81E0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C81DC
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800C81E0
  c->lr=c->r[0]; // 800C81E4
  c->r[1]=c->r[1]+0x000000E0u; // 800C81E8
  return; // 800C81EC
}

// fn_800C81F0
void f_800C81F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C81F0
  c->r[0]=c->lr; // 800C81F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C81F8
  c->r[0]=0u+0x00000000u; // 800C81FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C8200
  c->r[31]=c->r[3]|c->r[3]; // 800C8204
  c->r[4]=c->r[31]+0x0000002Cu; // 800C8208
  {uint32_t ea=c->r[3]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C820C
  W32(c->r[3]+0x000003C4u,c->r[0]); // 800C8210
  {uint32_t ea=c->r[3]+0x000003D0u; WF32(ea,c->f[0]);} // 800C8214
  c->r[3]=c->r[3]+0x000003D8u; // 800C8218
  c->lr=0x800C8220u; f_800361A0(c); // 800C821C
  c->r[0]=R8(c->r[31]+0x0000008Au); // 800C8220
  cmpu(c,0,c->r[0],0x000000FFu); // 800C8224
  if (crb(c,2)) { goto L_800C8254; } // 800C8228
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C822C
  c->r[3]=c->r[31]|c->r[31]; // 800C8230
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8234
  c->r[4]=0u+0x0000000Du; // 800C8238
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C823C
  c->r[5]=0u+0x00000001u; // 800C8240
  c->f[2]=c->f[1]; // 800C8244
  c->ctr=c->r[12]; // 800C8248
  if (true) { c->lr=0x800C8250u; dispatch(c,c->ctr); } // 800C824C
  goto L_800C8278; // 800C8250
L_800C8254:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C8254
  c->r[3]=c->r[31]|c->r[31]; // 800C8258
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C825C
  c->r[4]=0u+0x00000009u; // 800C8260
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C8264
  c->r[5]=0u+0x00000001u; // 800C8268
  c->f[2]=c->f[1]; // 800C826C
  c->ctr=c->r[12]; // 800C8270
  if (true) { c->lr=0x800C8278u; dispatch(c,c->ctr); } // 800C8274
L_800C8278:;
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8278
  c->r[3]=c->r[31]+0x0000000Cu; // 800C827C
  c->lr=0x800C8284u; f_80037668(c); // 800C8280
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C8284
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C8288
  c->lr=0x800C8290u; f_802501B0(c); // 800C828C
  c->r[7]=0u+0x803D0000u; // 800C8290
  {uint32_t ea=c->r[7]+0x000010A0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C8294
  c->r[3]=c->r[31]|c->r[31]; // 800C8298
  c->r[4]=c->r[1]+0x00000008u; // 800C829C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C82A0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C82A4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C82A8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C82AC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C82B0
  c->lr=0x800C82B8u; f_800C6C78(c); // 800C82B4
  c->r[3]=c->r[31]|c->r[31]; // 800C82B8
  c->r[4]=0u+0x00000000u; // 800C82BC
  c->lr=0x800C82C4u; f_801F5244(c); // 800C82C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C82C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C82C8
  c->lr=c->r[0]; // 800C82CC
  c->r[1]=c->r[1]+0x00000020u; // 800C82D0
  return; // 800C82D4
}

// fn_800C82D8
void f_800C82D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C82D8
  c->r[0]=c->lr; // 800C82DC
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800C82E0
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 800C82E4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 800C82E8
  c->r[4]=0u+0x00000000u; // 800C82EC
  W32(c->r[1]+0x000000DCu,c->r[31]); // 800C82F0
  c->r[31]=0u+0x803D0000u; // 800C82F4
  c->r[31]=c->r[31]+0x00000FA0u; // 800C82F8
  W32(c->r[1]+0x000000D8u,c->r[30]); // 800C82FC
  W32(c->r[1]+0x000000D4u,c->r[29]); // 800C8300
  c->r[29]=c->r[3]|c->r[3]; // 800C8304
  c->r[3]=c->r[3]+0x0000000Cu; // 800C8308
  W32(c->r[1]+0x000000D0u,c->r[28]); // 800C830C
  c->lr=0x800C8314u; f_800366DC(c); // 800C8310
  c->r[3]=c->r[29]+0x0000000Cu; // 800C8314
  c->lr=0x800C831Cu; f_8003E460(c); // 800C8318
  c->r[4]=0u+0x43300000u; // 800C831C
  W32(c->r[1]+0x000000C4u,c->r[3]); // 800C8320
  c->r[0]=R32(c->r[29]+0x000003C4u); // 800C8324
  c->r[3]=0u+0x803A0000u; // 800C8328
  W32(c->r[1]+0x000000C0u,c->r[4]); // 800C832C
  c->r[3]=c->r[3]+0xFFFFDB40u; // 800C8330
  {uint32_t ea=c->r[2]+0xFFFF9F78u; c->f[2]=RF64(ea);} // 800C8334
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800C8338
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[1]=RF64(ea);} // 800C833C
  c->r[3]=c->r[3]+c->r[0]; // 800C8340
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8344
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[2]); // 800C8348
  fcmp(c,0,c->f[0],c->f[31]); // 800C834C
  if (!crb(c,0)) { goto L_800C836C; } // 800C8350
  c->r[3]=c->r[29]+0x000003D8u; // 800C8354
  c->r[4]=c->r[29]+0x0000002Cu; // 800C8358
  c->lr=0x800C8360u; f_800361A0(c); // 800C835C
  c->r[3]=R32(c->r[29]+0x000003C4u); // 800C8360
  c->r[0]=c->r[3]+0x00000001u; // 800C8364
  W32(c->r[29]+0x000003C4u,c->r[0]); // 800C8368
L_800C836C:;
  c->r[28]=0u+0x00000000u; // 800C836C
  c->r[5]=0u+0x803A0000u; // 800C8370
  W32(c->r[1]+0x00000050u,c->r[28]); // 800C8374
  c->r[5]=c->r[5]+0xFFFFDB40u; // 800C8378
  {uint32_t ea=c->r[2]+0xFFFF9F20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C837C
  c->r[3]=c->r[1]+0x00000090u; // 800C8380
  W32(c->r[1]+0x00000054u,c->r[28]); // 800C8384
  c->r[4]=0u+0x00000059u; // 800C8388
  W32(c->r[1]+0x00000058u,c->r[28]); // 800C838C
  c->r[0]=R32(c->r[29]+0x000003C4u); // 800C8390
  W32(c->r[1]+0x00000014u,c->r[28]); // 800C8394
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800C8398
  {uint32_t ea=c->r[5]+c->r[0]; c->f[3]=c->ps1[3]=RF32(ea); c->r[5]=ea;} // 800C839C
  W32(c->r[1]+0x00000018u,c->r[28]); // 800C83A0
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C83A4
  c->f[4]=c->ps1[4]=S(c->f[31]-c->f[3]); // 800C83A8
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C83AC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 800C83B0
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C83B4
  W32(c->r[1]+0x0000001Cu,c->r[28]); // 800C83B8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800C83BC
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[3]); // 800C83C0
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800C83C4
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800C83C8
  {uint32_t ea=c->r[29]+0x000003D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C83CC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800C83D0
  c->lr=0x800C83D8u; f_80295FBC(c); // 800C83D4
  c->r[4]=c->r[1]+0x00000050u; // 800C83D8
  c->r[3]=c->r[1]+0x00000090u; // 800C83DC
  c->r[5]=c->r[4]|c->r[4]; // 800C83E0
  c->lr=0x800C83E8u; f_80296750(c); // 800C83E4
  c->r[3]=c->r[1]+0x00000050u; // 800C83E8
  c->r[4]=c->r[29]+0x000003D8u; // 800C83EC
  c->r[5]=c->r[29]+0x0000002Cu; // 800C83F0
  c->lr=0x800C83F8u; f_80296A4C(c); // 800C83F4
  c->r[3]=0u+0x80620000u; // 800C83F8
  c->r[3]=c->r[3]+0x00007688u; // 800C83FC
  c->r[3]=R32(c->r[3]+0x00000014u); // 800C8400
  cmps(c,0,(int32_t)c->r[3],0); // 800C8404
  if (crb(c,2)) { goto L_800C86E0; } // 800C8408
  c->r[4]=R8(c->r[29]+0x0000007Eu); // 800C840C
  c->lr=0x800C8414u; f_80038AF4(c); // 800C8410
  cmps(c,0,(int32_t)c->r[3],0); // 800C8414
  if (crb(c,2)) { goto L_800C86E0; } // 800C8418
  c->r[3]=R32(c->r[29]+0x00000394u); // 800C841C
  {uint32_t ea=c->r[2]+0xFFFF9F68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8420
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8424
  fcmp(c,0,c->f[1],c->f[0]); // 800C8428
  if (!crb(c,1)) { goto L_800C86E0; } // 800C842C
  c->r[3]=0u+0x80620000u; // 800C8430
  c->r[3]=c->r[3]+0x000079C0u; // 800C8434
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C8438
  c->r[0]=rotl(c->r[3],0)&0x0000000Fu; cr0(c,c->r[0]); // 800C843C
  if (crb(c,2)) { goto L_800C86E0; } // 800C8440
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 800C8444
  c->r[30]=R8(c->r[29]+0x0000007Du); // 800C8448
  if (crb(c,2)) { goto L_800C8480; } // 800C844C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C8450
  if (crb(c,2)) { goto L_800C8464; } // 800C8454
  c->r[0]=0u+0x00000001u; // 800C8458
  W8(c->r[29]+0x0000007Du,c->r[0]); // 800C845C
  goto L_800C84E0; // 800C8460
L_800C8464:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C8464
  if (crb(c,2)) { goto L_800C8478; } // 800C8468
  c->r[0]=0u+0x00000007u; // 800C846C
  W8(c->r[29]+0x0000007Du,c->r[0]); // 800C8470
  goto L_800C84E0; // 800C8474
L_800C8478:;
  W8(c->r[29]+0x0000007Du,c->r[28]); // 800C8478
  goto L_800C84E0; // 800C847C
L_800C8480:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800C8480
  if (crb(c,2)) { goto L_800C84BC; } // 800C8484
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C8488
  if (crb(c,2)) { goto L_800C849C; } // 800C848C
  c->r[0]=0u+0x00000003u; // 800C8490
  W8(c->r[29]+0x0000007Du,c->r[0]); // 800C8494
  goto L_800C84E0; // 800C8498
L_800C849C:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C849C
  if (crb(c,2)) { goto L_800C84B0; } // 800C84A0
  c->r[0]=0u+0x00000005u; // 800C84A4
  W8(c->r[29]+0x0000007Du,c->r[0]); // 800C84A8
  goto L_800C84E0; // 800C84AC
L_800C84B0:;
  c->r[0]=0u+0x00000004u; // 800C84B0
  W8(c->r[29]+0x0000007Du,c->r[0]); // 800C84B4
  goto L_800C84E0; // 800C84B8
L_800C84BC:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C84BC
  if (crb(c,2)) { goto L_800C84D0; } // 800C84C0
  c->r[0]=0u+0x00000002u; // 800C84C4
  W8(c->r[29]+0x0000007Du,c->r[0]); // 800C84C8
  goto L_800C84E0; // 800C84CC
L_800C84D0:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C84D0
  if (crb(c,2)) { goto L_800C84E0; } // 800C84D4
  c->r[0]=0u+0x00000006u; // 800C84D8
  W8(c->r[29]+0x0000007Du,c->r[0]); // 800C84DC
L_800C84E0:;
  c->r[0]=R8(c->r[29]+0x0000007Du); // 800C84E0
  c->r[4]=0u+0x00000000u; // 800C84E4
  cmpu(c,0,c->r[0],0x00000007u); // 800C84E8
  if (crb(c,1)) { goto L_800C8580; } // 800C84EC
  c->r[3]=0u+0x803D0000u; // 800C84F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C84F4
  c->r[3]=c->r[3]+0x000010D0u; // 800C84F8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C84FC
  c->ctr=c->r[3]; // 800C8500
  if (true) { switch (c->ctr) { case 0x800C8508u: goto L_800C8508; case 0x800C8518u: goto L_800C8518; case 0x800C8524u: goto L_800C8524; case 0x800C8534u: goto L_800C8534; case 0x800C8544u: goto L_800C8544; case 0x800C8554u: goto L_800C8554; case 0x800C8564u: goto L_800C8564; case 0x800C8574u: goto L_800C8574; default: break; } dispatch(c,c->ctr); return; } // 800C8504
L_800C8508:;
  c->r[0]=c->r[30]+0xFFFFFFFCu; // 800C8508
  c->r[0]=cntlz(c->r[0]); // 800C850C
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C8510
  goto L_800C8580; // 800C8514
L_800C8518:;
  c->r[0]=cntlz(c->r[30]); // 800C8518
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C851C
  goto L_800C8580; // 800C8520
L_800C8524:;
  c->r[0]=c->r[30]+0xFFFFFFFAu; // 800C8524
  c->r[0]=cntlz(c->r[0]); // 800C8528
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C852C
  goto L_800C8580; // 800C8530
L_800C8534:;
  c->r[0]=c->r[30]+0xFFFFFFFEu; // 800C8534
  c->r[0]=cntlz(c->r[0]); // 800C8538
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C853C
  goto L_800C8580; // 800C8540
L_800C8544:;
  c->r[0]=c->r[30]+0xFFFFFFFBu; // 800C8544
  c->r[0]=cntlz(c->r[0]); // 800C8548
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C854C
  goto L_800C8580; // 800C8550
L_800C8554:;
  c->r[0]=c->r[30]+0xFFFFFFF9u; // 800C8554
  c->r[0]=cntlz(c->r[0]); // 800C8558
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C855C
  goto L_800C8580; // 800C8560
L_800C8564:;
  c->r[0]=c->r[30]+0xFFFFFFFDu; // 800C8564
  c->r[0]=cntlz(c->r[0]); // 800C8568
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C856C
  goto L_800C8580; // 800C8570
L_800C8574:;
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 800C8574
  c->r[0]=cntlz(c->r[0]); // 800C8578
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C857C
L_800C8580:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C8580
  if (crb(c,2)) { goto L_800C85B4; } // 800C8584
  c->r[4]=c->r[31]+0x0000010Cu; // 800C8588
  c->r[6]=R32(c->r[31]+0x0000010Cu); // 800C858C
  c->r[5]=R32(c->r[4]+0x00000004u); // 800C8590
  c->r[3]=c->r[29]|c->r[29]; // 800C8594
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C8598
  c->r[4]=c->r[1]+0x00000038u; // 800C859C
  W32(c->r[1]+0x00000038u,c->r[6]); // 800C85A0
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 800C85A4
  W32(c->r[1]+0x00000040u,c->r[0]); // 800C85A8
  c->lr=0x800C85B0u; f_800C6C78(c); // 800C85AC
  goto L_800C86E0; // 800C85B0
L_800C85B4:;
  {uint32_t ea=c->r[29]+0x000003D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C85B4
  c->r[5]=0u+0x00000066u; // 800C85B8
  {uint32_t ea=c->r[2]+0xFFFF9F6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C85BC
  c->r[3]=c->r[29]|c->r[29]; // 800C85C0
  c->r[0]=R8(c->r[29]+0x0000008Au); // 800C85C4
  c->r[4]=0u+0x00000003u; // 800C85C8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800C85CC
  W16(c->r[29]+0x000003BCu,c->r[5]); // 800C85D0
  cmpu(c,0,c->r[0],0x000000FFu); // 800C85D4
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[0]);} // 800C85D8
  if (crb(c,2)) { goto L_800C85E4; } // 800C85DC
  c->r[4]=0u+0x00000007u; // 800C85E0
L_800C85E4:;
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800C85E4
  c->r[5]=0u+0x00000001u; // 800C85E8
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C85EC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C85F0
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C85F4
  c->ctr=c->r[12]; // 800C85F8
  if (true) { c->lr=0x800C8600u; dispatch(c,c->ctr); } // 800C85FC
  c->r[3]=R32(c->r[29]+0x00000394u); // 800C8600
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C8604
  c->lr=0x800C860Cu; f_802501B0(c); // 800C8608
  {uint32_t ea=c->r[2]+0xFFFF9F70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C860C
  c->r[0]=0u+0x00000000u; // 800C8610
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C8614
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C8618
  {uint32_t ea=c->r[29]+0x000003D4u; WF32(ea,c->f[0]);} // 800C861C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C8620
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C8624
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C8628
  W32(c->r[1]+0x00000048u,c->r[0]); // 800C862C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800C8630
  c->lr=0x800C8638u; f_80035554(c); // 800C8634
  {uint32_t ea=c->r[29]+0x000003D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8638
  c->r[3]=c->r[1]+0x00000060u; // 800C863C
  {uint32_t ea=c->r[2]+0xFFFF9F20u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C8640
  c->r[4]=0u+0x00000059u; // 800C8644
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800C8648
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C864C
  {uint32_t ea=c->r[29]+0x000003C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8650
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 800C8654
  c->lr=0x800C865Cu; f_80295FBC(c); // 800C8658
  c->r[4]=c->r[1]+0x00000044u; // 800C865C
  c->r[3]=c->r[1]+0x00000060u; // 800C8660
  c->r[5]=c->r[4]|c->r[4]; // 800C8664
  c->lr=0x800C866Cu; f_80296750(c); // 800C8668
  c->r[4]=c->r[29]+0x0000002Cu; // 800C866C
  c->r[3]=c->r[1]+0x00000044u; // 800C8670
  c->r[5]=c->r[4]|c->r[4]; // 800C8674
  c->lr=0x800C867Cu; f_80296A4C(c); // 800C8678
  c->r[0]=R8(c->r[29]+0x0000007Du); // 800C867C
  cmpu(c,0,c->r[0],c->r[30]); // 800C8680
  if (!crb(c,2)) { goto L_800C86B4; } // 800C8684
  c->r[4]=c->r[31]+0x00000118u; // 800C8688
  c->r[6]=R32(c->r[31]+0x00000118u); // 800C868C
  c->r[5]=R32(c->r[4]+0x00000004u); // 800C8690
  c->r[3]=c->r[29]|c->r[29]; // 800C8694
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C8698
  c->r[4]=c->r[1]+0x0000002Cu; // 800C869C
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800C86A0
  W32(c->r[1]+0x00000030u,c->r[5]); // 800C86A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C86A8
  c->lr=0x800C86B0u; f_800C6C78(c); // 800C86AC
  goto L_800C872C; // 800C86B0
L_800C86B4:;
  c->r[4]=c->r[31]+0x00000124u; // 800C86B4
  c->r[6]=R32(c->r[31]+0x00000124u); // 800C86B8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800C86BC
  c->r[3]=c->r[29]|c->r[29]; // 800C86C0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C86C4
  c->r[4]=c->r[1]+0x00000020u; // 800C86C8
  W32(c->r[1]+0x00000020u,c->r[6]); // 800C86CC
  W32(c->r[1]+0x00000024u,c->r[5]); // 800C86D0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C86D4
  c->lr=0x800C86DCu; f_800C6C78(c); // 800C86D8
  goto L_800C872C; // 800C86DC
L_800C86E0:;
  c->r[3]=R32(c->r[29]+0x00000394u); // 800C86E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C86E4
  c->lr=0x800C86ECu; f_802501B0(c); // 800C86E8
  cmps(c,0,(int32_t)c->r[3],0); // 800C86EC
  if (crb(c,2)) { goto L_800C8720; } // 800C86F0
  {uint32_t ea=c->r[29]+0x000003D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C86F4
  c->r[3]=c->r[29]|c->r[29]; // 800C86F8
  {uint32_t ea=c->r[2]+0xFFFF9F6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C86FC
  c->r[4]=0u+0x00000066u; // 800C8700
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8704
  c->r[5]=0u+0x00000000u; // 800C8708
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800C870C
  c->r[6]=0u+0x00000000u; // 800C8710
  c->r[7]=0u+0x00000000u; // 800C8714
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[0]);} // 800C8718
  c->lr=0x800C8720u; f_801F4D44(c); // 800C871C
L_800C8720:;
  c->r[3]=c->r[29]|c->r[29]; // 800C8720
  c->r[4]=0u+0x00000000u; // 800C8724
  c->lr=0x800C872Cu; f_801F5244(c); // 800C8728
L_800C872C:;
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 800C872C
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800C8730
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 800C8734
  c->r[31]=R32(c->r[1]+0x000000DCu); // 800C8738
  c->r[30]=R32(c->r[1]+0x000000D8u); // 800C873C
  c->r[29]=R32(c->r[1]+0x000000D4u); // 800C8740
  c->r[28]=R32(c->r[1]+0x000000D0u); // 800C8744
  c->lr=c->r[0]; // 800C8748
  c->r[1]=c->r[1]+0x000000F0u; // 800C874C
  return; // 800C8750
}

// fn_800C8754
void f_800C8754(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8754
  c->r[0]=c->lr; // 800C8758
  c->r[4]=0u+0x00000003u; // 800C875C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C8760
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C8764
  c->r[31]=c->r[3]|c->r[3]; // 800C8768
  c->r[0]=R8(c->r[3]+0x0000008Au); // 800C876C
  cmpu(c,0,c->r[0],0x000000FFu); // 800C8770
  if (crb(c,2)) { goto L_800C877C; } // 800C8774
  c->r[4]=0u+0x00000007u; // 800C8778
L_800C877C:;
  c->r[5]=R32(c->r[3]+0x00000394u); // 800C877C
  c->r[0]=R32(c->r[5]+0x00000030u); // 800C8780
  cmpu(c,0,c->r[0],c->r[4]); // 800C8784
  if (crb(c,2)) { goto L_800C87B8; } // 800C8788
  {uint32_t ea=c->r[2]+0xFFFF9F80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C878C
  c->r[5]=0u+0x00000001u; // 800C8790
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8794
  {uint32_t ea=c->r[3]+0x000003D4u; WF32(ea,c->f[0]);} // 800C8798
  c->r[3]=c->r[31]|c->r[31]; // 800C879C
  c->f[2]=c->f[1]; // 800C87A0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C87A4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C87A8
  c->ctr=c->r[12]; // 800C87AC
  if (true) { c->lr=0x800C87B4u; dispatch(c,c->ctr); } // 800C87B0
  goto L_800C87C0; // 800C87B4
L_800C87B8:;
  {uint32_t ea=c->r[2]+0xFFFF9F70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C87B8
  {uint32_t ea=c->r[3]+0x000003D4u; WF32(ea,c->f[0]);} // 800C87BC
L_800C87C0:;
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C87C0
  c->r[3]=c->r[31]+0x0000000Cu; // 800C87C4
  c->lr=0x800C87CCu; f_80037668(c); // 800C87C8
  c->r[7]=0u+0x803D0000u; // 800C87CC
  {uint32_t ea=c->r[7]+0x000010F0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C87D0
  c->r[3]=c->r[31]|c->r[31]; // 800C87D4
  c->r[4]=c->r[1]+0x00000008u; // 800C87D8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C87DC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C87E0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C87E4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C87E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C87EC
  c->lr=0x800C87F4u; f_800C6C78(c); // 800C87F0
  c->r[3]=c->r[31]|c->r[31]; // 800C87F4
  c->lr=0x800C87FCu; f_800C8810(c); // 800C87F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C87FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C8800
  c->lr=c->r[0]; // 800C8804
  c->r[1]=c->r[1]+0x00000020u; // 800C8808
  return; // 800C880C
}

// fn_800C8810
void f_800C8810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8810
  c->r[0]=c->lr; // 800C8814
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C8818
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C881C
  c->r[31]=c->r[3]|c->r[3]; // 800C8820
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C8824
  c->lr=0x800C882Cu; f_80035554(c); // 800C8828
  {uint32_t ea=c->r[2]+0xFFFF9F84u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C882C
  {uint32_t ea=c->r[31]+0x000003D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C8830
  {uint32_t ea=c->r[2]+0xFFFF9F70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8834
  c->f[1]=c->ps1[1]=S(std::fma(c->f[3],c->f[1],c->f[2])); // 800C8838
  fcmp(c,0,c->f[1],c->f[0]); // 800C883C
  {uint32_t ea=c->r[31]+0x000003D4u; WF32(ea,c->f[1]);} // 800C8840
  if (!crb(c,1)) { goto L_800C884C; } // 800C8844
  {uint32_t ea=c->r[31]+0x000003D4u; WF32(ea,c->f[0]);} // 800C8848
L_800C884C:;
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C884C
  c->r[3]=c->r[31]|c->r[31]; // 800C8850
  {uint32_t ea=c->r[31]+0x000003D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C8854
  c->lr=0x800C885Cu; f_801F6A20(c); // 800C8858
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C885C
  c->r[3]=c->r[31]|c->r[31]; // 800C8860
  c->lr=0x800C8868u; f_801F6B78(c); // 800C8864
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8868
  fcmp(c,0,c->f[0],c->f[1]); // 800C886C
  if (!crb(c,2)) { goto L_800C8888; } // 800C8870
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C8874
  c->r[3]=c->r[31]|c->r[31]; // 800C8878
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C887C
  c->ctr=c->r[12]; // 800C8880
  if (true) { c->lr=0x800C8888u; dispatch(c,c->ctr); } // 800C8884
L_800C8888:;
  c->r[0]=0u+0x00000000u; // 800C8888
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C888C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C8890
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C8894
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C8898
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C889C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C88A0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C88A4
  c->lr=0x800C88ACu; f_80035554(c); // 800C88A8
  {uint32_t ea=c->r[31]+0x000003D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C88AC
  c->r[3]=c->r[1]+0x00000020u; // 800C88B0
  {uint32_t ea=c->r[2]+0xFFFF9F20u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C88B4
  c->r[4]=0u+0x00000059u; // 800C88B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800C88BC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C88C0
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C88C4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 800C88C8
  c->lr=0x800C88D0u; f_80295FBC(c); // 800C88CC
  c->r[4]=c->r[1]+0x00000014u; // 800C88D0
  c->r[3]=c->r[1]+0x00000020u; // 800C88D4
  c->r[5]=c->r[4]|c->r[4]; // 800C88D8
  c->lr=0x800C88E0u; f_80296750(c); // 800C88DC
  c->r[4]=c->r[31]+0x0000002Cu; // 800C88E0
  c->r[3]=c->r[1]+0x00000014u; // 800C88E4
  c->r[5]=c->r[4]|c->r[4]; // 800C88E8
  c->lr=0x800C88F0u; f_80296A4C(c); // 800C88EC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C88F0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C88F4
  c->lr=0x800C88FCu; f_802501B0(c); // 800C88F8
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C88FC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C8900
  c->lr=c->r[0]; // 800C8904
  c->r[1]=c->r[1]+0x00000060u; // 800C8908
  return; // 800C890C
}

// fn_800C8910
void f_800C8910(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8910
  c->r[0]=c->lr; // 800C8914
  {uint32_t ea=c->r[2]+0xFFFF9F88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8918
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C891C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C8920
  c->r[31]=c->r[3]|c->r[3]; // 800C8924
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8928
  fcmp(c,0,c->f[1],c->f[0]); // 800C892C
  if (!crb(c,0)) { goto L_800C8940; } // 800C8930
  c->r[0]=0u+0x00000004u; // 800C8934
  W8(c->r[3]+0x0000007Du,c->r[0]); // 800C8938
  goto L_800C89F0; // 800C893C
L_800C8940:;
  {uint32_t ea=c->r[2]+0xFFFF9F8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8940
  fcmp(c,0,c->f[1],c->f[0]); // 800C8944
  if (!crb(c,0)) { goto L_800C8958; } // 800C8948
  c->r[0]=0u+0x00000005u; // 800C894C
  W8(c->r[3]+0x0000007Du,c->r[0]); // 800C8950
  goto L_800C89F0; // 800C8954
L_800C8958:;
  {uint32_t ea=c->r[2]+0xFFFF9F90u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8958
  fcmp(c,0,c->f[1],c->f[0]); // 800C895C
  if (!crb(c,0)) { goto L_800C8970; } // 800C8960
  c->r[0]=0u+0x00000006u; // 800C8964
  W8(c->r[3]+0x0000007Du,c->r[0]); // 800C8968
  goto L_800C89F0; // 800C896C
L_800C8970:;
  {uint32_t ea=c->r[2]+0xFFFF9F94u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8970
  fcmp(c,0,c->f[1],c->f[0]); // 800C8974
  if (!crb(c,0)) { goto L_800C8988; } // 800C8978
  c->r[0]=0u+0x00000007u; // 800C897C
  W8(c->r[3]+0x0000007Du,c->r[0]); // 800C8980
  goto L_800C89F0; // 800C8984
L_800C8988:;
  {uint32_t ea=c->r[2]+0xFFFF9F98u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8988
  fcmp(c,0,c->f[1],c->f[0]); // 800C898C
  if (!crb(c,0)) { goto L_800C89A0; } // 800C8990
  c->r[0]=0u+0x00000000u; // 800C8994
  W8(c->r[3]+0x0000007Du,c->r[0]); // 800C8998
  goto L_800C89F0; // 800C899C
L_800C89A0:;
  {uint32_t ea=c->r[2]+0xFFFF9F9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C89A0
  fcmp(c,0,c->f[1],c->f[0]); // 800C89A4
  if (!crb(c,0)) { goto L_800C89B8; } // 800C89A8
  c->r[0]=0u+0x00000001u; // 800C89AC
  W8(c->r[3]+0x0000007Du,c->r[0]); // 800C89B0
  goto L_800C89F0; // 800C89B4
L_800C89B8:;
  {uint32_t ea=c->r[2]+0xFFFF9FA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C89B8
  fcmp(c,0,c->f[1],c->f[0]); // 800C89BC
  if (!crb(c,0)) { goto L_800C89D0; } // 800C89C0
  c->r[0]=0u+0x00000002u; // 800C89C4
  W8(c->r[3]+0x0000007Du,c->r[0]); // 800C89C8
  goto L_800C89F0; // 800C89CC
L_800C89D0:;
  {uint32_t ea=c->r[2]+0xFFFF9FA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C89D0
  fcmp(c,0,c->f[1],c->f[0]); // 800C89D4
  if (!crb(c,0)) { goto L_800C89E8; } // 800C89D8
  c->r[0]=0u+0x00000003u; // 800C89DC
  W8(c->r[3]+0x0000007Du,c->r[0]); // 800C89E0
  goto L_800C89F0; // 800C89E4
L_800C89E8:;
  c->r[0]=0u+0x00000004u; // 800C89E8
  W8(c->r[3]+0x0000007Du,c->r[0]); // 800C89EC
L_800C89F0:;
  c->r[6]=R8(c->r[31]+0x0000008Au); // 800C89F0
  c->r[3]=c->r[31]|c->r[31]; // 800C89F4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C89F8
  c->r[5]=0u+0x00000001u; // 800C89FC
  c->r[4]=c->r[6]+0xFFFFFF01u; // 800C8A00
  c->r[0]=addc(c,~c->r[6],0x000000FFu,1); // 800C8A04
  c->r[0]=c->r[4]|c->r[0]; // 800C8A08
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C8A0C
  c->r[0]=sraw(c,c->r[0],31); // 800C8A10
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8A14
  c->r[4]=rotl(c->r[0],0)&0x00000004u; // 800C8A18
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C8A1C
  c->ctr=c->r[12]; // 800C8A20
  if (true) { c->lr=0x800C8A28u; dispatch(c,c->ctr); } // 800C8A24
  {uint32_t ea=c->r[2]+0xFFFF9F70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8A28
  c->r[3]=c->r[31]+0x0000000Cu; // 800C8A2C
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8A30
  {uint32_t ea=c->r[31]+0x000003D4u; WF32(ea,c->f[0]);} // 800C8A34
  c->lr=0x800C8A3Cu; f_80037668(c); // 800C8A38
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C8A3C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C8A40
  c->lr=0x800C8A48u; f_802501B0(c); // 800C8A44
  c->r[7]=0u+0x803D0000u; // 800C8A48
  {uint32_t ea=c->r[7]+0x000010FCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800C8A4C
  c->r[3]=c->r[31]|c->r[31]; // 800C8A50
  c->r[4]=c->r[1]+0x00000008u; // 800C8A54
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C8A58
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C8A5C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C8A60
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C8A64
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C8A68
  c->lr=0x800C8A70u; f_800C6C78(c); // 800C8A6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C8A70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C8A74
  c->lr=c->r[0]; // 800C8A78
  c->r[1]=c->r[1]+0x00000020u; // 800C8A7C
  return; // 800C8A80
}

// fn_800C8A84
void f_800C8A84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8A84
  c->r[0]=c->lr; // 800C8A88
  c->r[4]=0u+0x80620000u; // 800C8A8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C8A90
  c->r[4]=c->r[4]+0x00007688u; // 800C8A94
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C8A98
  c->r[31]=0u+0x00000001u; // 800C8A9C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800C8AA0
  c->r[30]=c->r[3]|c->r[3]; // 800C8AA4
  W8(c->r[3]+0x0000007Fu,c->r[31]); // 800C8AA8
  c->r[3]=R32(c->r[4]+0x00000014u); // 800C8AAC
  cmps(c,0,(int32_t)c->r[3],0); // 800C8AB0
  if (crb(c,2)) { goto L_800C8D98; } // 800C8AB4
  c->r[4]=R8(c->r[30]+0x0000007Eu); // 800C8AB8
  c->lr=0x800C8AC0u; f_80038AF4(c); // 800C8ABC
  cmps(c,0,(int32_t)c->r[3],0); // 800C8AC0
  if (crb(c,2)) { goto L_800C8D98; } // 800C8AC4
  c->r[3]=0u+0x80620000u; // 800C8AC8
  c->r[3]=c->r[3]+0x000079C0u; // 800C8ACC
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C8AD0
  c->r[0]=rotl(c->r[3],0)&0x0000000Fu; cr0(c,c->r[0]); // 800C8AD4
  if (crb(c,2)) { goto L_800C8D30; } // 800C8AD8
  c->r[0]=R8(c->r[30]+0x0000008Au); // 800C8ADC
  c->r[3]=0u+0x00000000u; // 800C8AE0
  W8(c->r[30]+0x0000007Fu,c->r[3]); // 800C8AE4
  cmpu(c,0,c->r[0],0x000000FFu); // 800C8AE8
  c->r[31]=R8(c->r[30]+0x0000007Du); // 800C8AEC
  if (crb(c,2)) { goto L_800C8B1C; } // 800C8AF0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C8AF4
  c->r[3]=c->r[30]|c->r[30]; // 800C8AF8
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8AFC
  c->r[4]=0u+0x00000007u; // 800C8B00
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C8B04
  c->r[5]=0u+0x00000001u; // 800C8B08
  c->f[2]=c->f[1]; // 800C8B0C
  c->ctr=c->r[12]; // 800C8B10
  if (true) { c->lr=0x800C8B18u; dispatch(c,c->ctr); } // 800C8B14
  goto L_800C8B40; // 800C8B18
L_800C8B1C:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C8B1C
  c->r[3]=c->r[30]|c->r[30]; // 800C8B20
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8B24
  c->r[4]=0u+0x00000003u; // 800C8B28
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C8B2C
  c->r[5]=0u+0x00000001u; // 800C8B30
  c->f[2]=c->f[1]; // 800C8B34
  c->ctr=c->r[12]; // 800C8B38
  if (true) { c->lr=0x800C8B40u; dispatch(c,c->ctr); } // 800C8B3C
L_800C8B40:;
  c->r[3]=0u+0x80620000u; // 800C8B40
  c->r[3]=c->r[3]+0x000079C0u; // 800C8B44
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C8B48
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 800C8B4C
  if (crb(c,2)) { goto L_800C8B88; } // 800C8B50
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C8B54
  if (crb(c,2)) { goto L_800C8B68; } // 800C8B58
  c->r[0]=0u+0x00000001u; // 800C8B5C
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C8B60
  goto L_800C8BE8; // 800C8B64
L_800C8B68:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C8B68
  if (crb(c,2)) { goto L_800C8B7C; } // 800C8B6C
  c->r[0]=0u+0x00000007u; // 800C8B70
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C8B74
  goto L_800C8BE8; // 800C8B78
L_800C8B7C:;
  c->r[0]=0u+0x00000000u; // 800C8B7C
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C8B80
  goto L_800C8BE8; // 800C8B84
L_800C8B88:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800C8B88
  if (crb(c,2)) { goto L_800C8BC4; } // 800C8B8C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C8B90
  if (crb(c,2)) { goto L_800C8BA4; } // 800C8B94
  c->r[0]=0u+0x00000003u; // 800C8B98
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C8B9C
  goto L_800C8BE8; // 800C8BA0
L_800C8BA4:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C8BA4
  if (crb(c,2)) { goto L_800C8BB8; } // 800C8BA8
  c->r[0]=0u+0x00000005u; // 800C8BAC
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C8BB0
  goto L_800C8BE8; // 800C8BB4
L_800C8BB8:;
  c->r[0]=0u+0x00000004u; // 800C8BB8
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C8BBC
  goto L_800C8BE8; // 800C8BC0
L_800C8BC4:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C8BC4
  if (crb(c,2)) { goto L_800C8BD8; } // 800C8BC8
  c->r[0]=0u+0x00000002u; // 800C8BCC
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C8BD0
  goto L_800C8BE8; // 800C8BD4
L_800C8BD8:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C8BD8
  if (crb(c,2)) { goto L_800C8BE8; } // 800C8BDC
  c->r[0]=0u+0x00000006u; // 800C8BE0
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C8BE4
L_800C8BE8:;
  c->r[0]=R8(c->r[30]+0x0000007Du); // 800C8BE8
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8BEC
  cmpu(c,0,c->r[0],c->r[31]); // 800C8BF0
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800C8BF4
  if (crb(c,2)) { goto L_800C8CF8; } // 800C8BF8
  cmpu(c,0,c->r[0],0x00000007u); // 800C8BFC
  c->r[4]=0u+0x00000000u; // 800C8C00
  if (crb(c,1)) { goto L_800C8C98; } // 800C8C04
  c->r[3]=0u+0x803D0000u; // 800C8C08
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C8C0C
  c->r[3]=c->r[3]+0x00001120u; // 800C8C10
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C8C14
  c->ctr=c->r[3]; // 800C8C18
  if (true) { switch (c->ctr) { case 0x800C8C20u: goto L_800C8C20; case 0x800C8C30u: goto L_800C8C30; case 0x800C8C3Cu: goto L_800C8C3C; case 0x800C8C4Cu: goto L_800C8C4C; case 0x800C8C5Cu: goto L_800C8C5C; case 0x800C8C6Cu: goto L_800C8C6C; case 0x800C8C7Cu: goto L_800C8C7C; case 0x800C8C8Cu: goto L_800C8C8C; default: break; } dispatch(c,c->ctr); return; } // 800C8C1C
L_800C8C20:;
  c->r[0]=c->r[31]+0xFFFFFFFCu; // 800C8C20
  c->r[0]=cntlz(c->r[0]); // 800C8C24
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C8C28
  goto L_800C8C98; // 800C8C2C
L_800C8C30:;
  c->r[0]=cntlz(c->r[31]); // 800C8C30
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C8C34
  goto L_800C8C98; // 800C8C38
L_800C8C3C:;
  c->r[0]=c->r[31]+0xFFFFFFFAu; // 800C8C3C
  c->r[0]=cntlz(c->r[0]); // 800C8C40
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C8C44
  goto L_800C8C98; // 800C8C48
L_800C8C4C:;
  c->r[0]=c->r[31]+0xFFFFFFFEu; // 800C8C4C
  c->r[0]=cntlz(c->r[0]); // 800C8C50
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C8C54
  goto L_800C8C98; // 800C8C58
L_800C8C5C:;
  c->r[0]=c->r[31]+0xFFFFFFFBu; // 800C8C5C
  c->r[0]=cntlz(c->r[0]); // 800C8C60
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C8C64
  goto L_800C8C98; // 800C8C68
L_800C8C6C:;
  c->r[0]=c->r[31]+0xFFFFFFF9u; // 800C8C6C
  c->r[0]=cntlz(c->r[0]); // 800C8C70
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C8C74
  goto L_800C8C98; // 800C8C78
L_800C8C7C:;
  c->r[0]=c->r[31]+0xFFFFFFFDu; // 800C8C7C
  c->r[0]=cntlz(c->r[0]); // 800C8C80
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C8C84
  goto L_800C8C98; // 800C8C88
L_800C8C8C:;
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800C8C8C
  c->r[0]=cntlz(c->r[0]); // 800C8C90
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C8C94
L_800C8C98:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C8C98
  if (crb(c,2)) { goto L_800C8CCC; } // 800C8C9C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C8CA0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C8CA4
  c->lr=0x800C8CACu; f_802501B0(c); // 800C8CA8
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8CAC
  c->r[3]=c->r[30]|c->r[30]; // 800C8CB0
  c->r[4]=0u+0x00000064u; // 800C8CB4
  c->r[5]=0u+0x00000000u; // 800C8CB8
  c->r[6]=0u+0x00000000u; // 800C8CBC
  c->r[7]=0u+0x00000000u; // 800C8CC0
  c->lr=0x800C8CC8u; f_801F4D44(c); // 800C8CC4
  goto L_800C8DA4; // 800C8CC8
L_800C8CCC:;
  c->r[7]=0u+0x803D0000u; // 800C8CCC
  {uint32_t ea=c->r[7]+0x00001108u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C8CD0
  c->r[3]=c->r[30]|c->r[30]; // 800C8CD4
  c->r[4]=c->r[1]+0x00000014u; // 800C8CD8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C8CDC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C8CE0
  W32(c->r[1]+0x00000014u,c->r[6]); // 800C8CE4
  W32(c->r[1]+0x00000018u,c->r[5]); // 800C8CE8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C8CEC
  c->lr=0x800C8CF4u; f_800C6C78(c); // 800C8CF0
  goto L_800C8D98; // 800C8CF4
L_800C8CF8:;
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8CF8
  c->r[7]=0u+0x803D0000u; // 800C8CFC
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800C8D00
  c->r[3]=c->r[30]|c->r[30]; // 800C8D04
  c->r[4]=c->r[1]+0x00000008u; // 800C8D08
  {uint32_t ea=c->r[30]+0x000000A8u; WF32(ea,c->f[0]);} // 800C8D0C
  {uint32_t ea=c->r[7]+0x00001114u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C8D10
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C8D14
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C8D18
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C8D1C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C8D20
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C8D24
  c->lr=0x800C8D2Cu; f_800C6C78(c); // 800C8D28
  goto L_800C8D98; // 800C8D2C
L_800C8D30:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 800C8D30
  if (crb(c,2)) { goto L_800C8D6C; } // 800C8D34
  W8(c->r[30]+0x000000ADu,c->r[31]); // 800C8D38
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C8D3C
  c->lr=0x800C8D44u; f_80035554(c); // 800C8D40
  {uint32_t ea=c->r[2]+0xFFFF9F1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8D44
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C8D48
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800C8D4C
  {uint32_t ea=c->r[2]+0xFFFF9F40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8D50
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800C8D54
  fcmp(c,0,c->f[1],c->f[0]); // 800C8D58
  {uint32_t ea=c->r[30]+0x000000A8u; WF32(ea,c->f[1]);} // 800C8D5C
  if (!crb(c,1)) { goto L_800C8D98; } // 800C8D60
  {uint32_t ea=c->r[30]+0x000000A8u; WF32(ea,c->f[0]);} // 800C8D64
  goto L_800C8D98; // 800C8D68
L_800C8D6C:;
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C8D6C
  c->lr=0x800C8D74u; f_80035554(c); // 800C8D70
  {uint32_t ea=c->r[2]+0xFFFF9FA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8D74
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C8D78
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800C8D7C
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8D80
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800C8D84
  fcmp(c,0,c->f[1],c->f[0]); // 800C8D88
  {uint32_t ea=c->r[30]+0x000000A8u; WF32(ea,c->f[1]);} // 800C8D8C
  if (!crb(c,0)) { goto L_800C8D98; } // 800C8D90
  {uint32_t ea=c->r[30]+0x000000A8u; WF32(ea,c->f[0]);} // 800C8D94
L_800C8D98:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C8D98
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C8D9C
  c->lr=0x800C8DA4u; f_802501B0(c); // 800C8DA0
L_800C8DA4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C8DA4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C8DA8
  c->r[30]=R32(c->r[1]+0x00000028u); // 800C8DAC
  c->lr=c->r[0]; // 800C8DB0
  c->r[1]=c->r[1]+0x00000030u; // 800C8DB4
  return; // 800C8DB8
}

// fn_800C8DBC
void f_800C8DBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8DBC
  c->r[0]=c->lr; // 800C8DC0
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C8DC4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800C8DC8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800C8DCC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 800C8DD0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 800C8DD4
  c->r[4]=0u+0x80620000u; // 800C8DD8
  c->r[4]=c->r[4]+0x00007688u; // 800C8DDC
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800C8DE0
  c->r[31]=c->r[3]|c->r[3]; // 800C8DE4
  c->r[3]=R32(c->r[4]+0x00000014u); // 800C8DE8
  cmps(c,0,(int32_t)c->r[3],0); // 800C8DEC
  if (crb(c,2)) { goto L_800C8F38; } // 800C8DF0
  c->r[4]=R8(c->r[31]+0x0000007Eu); // 800C8DF4
  c->lr=0x800C8DFCu; f_80038AF4(c); // 800C8DF8
  cmps(c,0,(int32_t)c->r[3],0); // 800C8DFC
  if (crb(c,2)) { goto L_800C8F38; } // 800C8E00
  c->r[3]=0u+0x80620000u; // 800C8E04
  c->r[3]=c->r[3]+0x000079C0u; // 800C8E08
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C8E0C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800C8E10
  if (crb(c,2)) { goto L_800C8E64; } // 800C8E14
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800C8E18
  c->r[3]=0u+0x00000001u; // 800C8E1C
  W8(c->r[31]+0x000000ADu,c->r[3]); // 800C8E20
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C8E24
  c->r[0]=c->r[0]|0x00004000u; // 800C8E28
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800C8E2C
  c->lr=0x800C8E34u; f_80035554(c); // 800C8E30
  {uint32_t ea=c->r[2]+0xFFFF9F1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8E34
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C8E38
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800C8E3C
  {uint32_t ea=c->r[2]+0xFFFF9F40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8E40
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800C8E44
  fcmp(c,0,c->f[1],c->f[0]); // 800C8E48
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[1]);} // 800C8E4C
  if (!crb(c,1)) { goto L_800C8E58; } // 800C8E50
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 800C8E54
L_800C8E58:;
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8E58
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C8E5C
  goto L_800C8E90; // 800C8E60
L_800C8E64:;
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C8E64
  c->lr=0x800C8E6Cu; f_80035554(c); // 800C8E68
  {uint32_t ea=c->r[2]+0xFFFF9FA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8E6C
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C8E70
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800C8E74
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8E78
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800C8E7C
  fcmp(c,0,c->f[1],c->f[0]); // 800C8E80
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[1]);} // 800C8E84
  if (!crb(c,0)) { goto L_800C8E90; } // 800C8E88
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 800C8E8C
L_800C8E90:;
  c->r[3]=0u+0x80620000u; // 800C8E90
  c->r[3]=c->r[3]+0x000079C0u; // 800C8E94
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C8E98
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 800C8E9C
  if (crb(c,2)) { goto L_800C8ED8; } // 800C8EA0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C8EA4
  if (crb(c,2)) { goto L_800C8EB8; } // 800C8EA8
  c->r[0]=0u+0x00000001u; // 800C8EAC
  W8(c->r[31]+0x0000007Du,c->r[0]); // 800C8EB0
  goto L_800C8F38; // 800C8EB4
L_800C8EB8:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C8EB8
  if (crb(c,2)) { goto L_800C8ECC; } // 800C8EBC
  c->r[0]=0u+0x00000007u; // 800C8EC0
  W8(c->r[31]+0x0000007Du,c->r[0]); // 800C8EC4
  goto L_800C8F38; // 800C8EC8
L_800C8ECC:;
  c->r[0]=0u+0x00000000u; // 800C8ECC
  W8(c->r[31]+0x0000007Du,c->r[0]); // 800C8ED0
  goto L_800C8F38; // 800C8ED4
L_800C8ED8:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800C8ED8
  if (crb(c,2)) { goto L_800C8F14; } // 800C8EDC
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C8EE0
  if (crb(c,2)) { goto L_800C8EF4; } // 800C8EE4
  c->r[0]=0u+0x00000003u; // 800C8EE8
  W8(c->r[31]+0x0000007Du,c->r[0]); // 800C8EEC
  goto L_800C8F38; // 800C8EF0
L_800C8EF4:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C8EF4
  if (crb(c,2)) { goto L_800C8F08; } // 800C8EF8
  c->r[0]=0u+0x00000005u; // 800C8EFC
  W8(c->r[31]+0x0000007Du,c->r[0]); // 800C8F00
  goto L_800C8F38; // 800C8F04
L_800C8F08:;
  c->r[0]=0u+0x00000004u; // 800C8F08
  W8(c->r[31]+0x0000007Du,c->r[0]); // 800C8F0C
  goto L_800C8F38; // 800C8F10
L_800C8F14:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C8F14
  if (crb(c,2)) { goto L_800C8F28; } // 800C8F18
  c->r[0]=0u+0x00000002u; // 800C8F1C
  W8(c->r[31]+0x0000007Du,c->r[0]); // 800C8F20
  goto L_800C8F38; // 800C8F24
L_800C8F28:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C8F28
  if (crb(c,2)) { goto L_800C8F38; } // 800C8F2C
  c->r[0]=0u+0x00000006u; // 800C8F30
  W8(c->r[31]+0x0000007Du,c->r[0]); // 800C8F34
L_800C8F38:;
  c->r[0]=R8(c->r[31]+0x0000007Du); // 800C8F38
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C8F3C
  cmpu(c,0,c->r[0],0x00000007u); // 800C8F40
  if (crb(c,1)) { goto L_800C8F98; } // 800C8F44
  c->r[3]=0u+0x803D0000u; // 800C8F48
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C8F4C
  c->r[3]=c->r[3]+0x0000114Cu; // 800C8F50
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C8F54
  c->ctr=c->r[3]; // 800C8F58
  if (true) { switch (c->ctr) { case 0x800C8F60u: goto L_800C8F60; case 0x800C8F68u: goto L_800C8F68; case 0x800C8F6Cu: goto L_800C8F6C; case 0x800C8F74u: goto L_800C8F74; case 0x800C8F7Cu: goto L_800C8F7C; case 0x800C8F84u: goto L_800C8F84; case 0x800C8F8Cu: goto L_800C8F8C; case 0x800C8F94u: goto L_800C8F94; default: break; } dispatch(c,c->ctr); return; } // 800C8F5C
L_800C8F60:;
  {uint32_t ea=c->r[2]+0xFFFF9F6Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C8F60
  goto L_800C8F98; // 800C8F64
L_800C8F68:;
  goto L_800C8F98; // 800C8F68
L_800C8F6C:;
  {uint32_t ea=c->r[2]+0xFFFF9FACu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C8F6C
  goto L_800C8F98; // 800C8F70
L_800C8F74:;
  {uint32_t ea=c->r[2]+0xFFFF9FB0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C8F74
  goto L_800C8F98; // 800C8F78
L_800C8F7C:;
  {uint32_t ea=c->r[2]+0xFFFF9FB4u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C8F7C
  goto L_800C8F98; // 800C8F80
L_800C8F84:;
  {uint32_t ea=c->r[2]+0xFFFF9FB8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C8F84
  goto L_800C8F98; // 800C8F88
L_800C8F8C:;
  {uint32_t ea=c->r[2]+0xFFFF9FBCu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C8F8C
  goto L_800C8F98; // 800C8F90
L_800C8F94:;
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C8F94
L_800C8F98:;
  c->r[3]=0u+0x80620000u; // 800C8F98
  c->r[4]=0u+0x00000000u; // 800C8F9C
  c->r[3]=c->r[3]+0x000079C0u; // 800C8FA0
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C8FA4
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C8FA8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C8FAC
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[0]); // 800C8FB0
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C8FB4
  W32(c->r[1]+0x00000010u,c->r[4]); // 800C8FB8
  W32(c->r[1]+0x00000020u,c->r[4]); // 800C8FBC
  W32(c->r[1]+0x00000024u,c->r[4]); // 800C8FC0
  W32(c->r[1]+0x00000028u,c->r[4]); // 800C8FC4
  if (crb(c,2)) { goto L_800C8FD0; } // 800C8FC8
  {uint32_t ea=c->r[31]+0x000003D4u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C8FCC
L_800C8FD0:;
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C8FD0
  c->lr=0x800C8FD8u; f_80035554(c); // 800C8FD4
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[1]); // 800C8FD8
  {uint32_t ea=c->r[2]+0xFFFF9F20u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8FDC
  c->r[3]=c->r[1]+0x00000030u; // 800C8FE0
  c->r[4]=0u+0x00000059u; // 800C8FE4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 800C8FE8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 800C8FEC
  c->lr=0x800C8FF4u; f_80295FBC(c); // 800C8FF0
  c->r[4]=c->r[1]+0x00000020u; // 800C8FF4
  c->r[3]=c->r[1]+0x00000030u; // 800C8FF8
  c->r[5]=c->r[4]|c->r[4]; // 800C8FFC
  c->lr=0x800C9004u; f_80296750(c); // 800C9000
  c->r[4]=c->r[31]+0x0000002Cu; // 800C9004
  c->r[3]=c->r[1]+0x00000020u; // 800C9008
  c->r[5]=c->r[4]|c->r[4]; // 800C900C
  c->lr=0x800C9014u; f_80296A4C(c); // 800C9010
  c->f[1]=c->f[31]; // 800C9014
  {uint32_t ea=c->r[2]+0xFFFF9F14u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C9018
  c->r[3]=c->r[31]|c->r[31]; // 800C901C
  c->lr=0x800C9024u; f_801F6A20(c); // 800C9020
  c->f[1]=c->f[31]; // 800C9024
  c->r[3]=c->r[31]|c->r[31]; // 800C9028
  c->lr=0x800C9030u; f_801F6B78(c); // 800C902C
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9030
  fcmp(c,0,c->f[0],c->f[1]); // 800C9034
  if (!crb(c,2)) { goto L_800C9064; } // 800C9038
  c->r[7]=0u+0x803D0000u; // 800C903C
  {uint32_t ea=c->r[7]+0x00001140u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C9040
  c->r[3]=c->r[31]|c->r[31]; // 800C9044
  c->r[4]=c->r[1]+0x00000014u; // 800C9048
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C904C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C9050
  W32(c->r[1]+0x00000014u,c->r[6]); // 800C9054
  W32(c->r[1]+0x00000018u,c->r[5]); // 800C9058
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C905C
  c->lr=0x800C9064u; f_800C6C78(c); // 800C9060
L_800C9064:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C9064
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C9068
  c->lr=0x800C9070u; f_802501B0(c); // 800C906C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800C9070
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800C9074
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 800C9078
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 800C907C
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C9080
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800C9084
  c->lr=c->r[0]; // 800C9088
  c->r[1]=c->r[1]+0x00000090u; // 800C908C
  return; // 800C9090
}

// fn_800C9094
void f_800C9094(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9094
  c->r[0]=c->lr; // 800C9098
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C909C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800C90A0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800C90A4
  c->r[4]=0u+0x80620000u; // 800C90A8
  c->r[4]=c->r[4]+0x00007688u; // 800C90AC
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800C90B0
  W32(c->r[1]+0x00000068u,c->r[30]); // 800C90B4
  c->r[30]=c->r[3]|c->r[3]; // 800C90B8
  c->r[31]=R8(c->r[3]+0x0000007Du); // 800C90BC
  c->r[3]=R32(c->r[4]+0x00000014u); // 800C90C0
  cmps(c,0,(int32_t)c->r[3],0); // 800C90C4
  if (crb(c,2)) { goto L_800C929C; } // 800C90C8
  c->r[4]=R8(c->r[30]+0x0000007Eu); // 800C90CC
  c->lr=0x800C90D4u; f_80038AF4(c); // 800C90D0
  cmps(c,0,(int32_t)c->r[3],0); // 800C90D4
  if (crb(c,2)) { goto L_800C929C; } // 800C90D8
  c->r[3]=0u+0x80620000u; // 800C90DC
  c->r[3]=c->r[3]+0x000079C0u; // 800C90E0
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C90E4
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800C90E8
  if (crb(c,2)) { goto L_800C913C; } // 800C90EC
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C90F0
  c->r[3]=0u+0x00000001u; // 800C90F4
  W8(c->r[30]+0x000000ADu,c->r[3]); // 800C90F8
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C90FC
  c->r[0]=c->r[0]|0x00004000u; // 800C9100
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800C9104
  c->lr=0x800C910Cu; f_80035554(c); // 800C9108
  {uint32_t ea=c->r[2]+0xFFFF9F1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C910C
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C9110
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800C9114
  {uint32_t ea=c->r[2]+0xFFFF9F40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9118
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800C911C
  fcmp(c,0,c->f[1],c->f[0]); // 800C9120
  {uint32_t ea=c->r[30]+0x000000A8u; WF32(ea,c->f[1]);} // 800C9124
  if (!crb(c,1)) { goto L_800C9130; } // 800C9128
  {uint32_t ea=c->r[30]+0x000000A8u; WF32(ea,c->f[0]);} // 800C912C
L_800C9130:;
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9130
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C9134
  goto L_800C9168; // 800C9138
L_800C913C:;
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C913C
  c->lr=0x800C9144u; f_80035554(c); // 800C9140
  {uint32_t ea=c->r[2]+0xFFFF9FA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9144
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C9148
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800C914C
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9150
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800C9154
  fcmp(c,0,c->f[1],c->f[0]); // 800C9158
  {uint32_t ea=c->r[30]+0x000000A8u; WF32(ea,c->f[1]);} // 800C915C
  if (!crb(c,0)) { goto L_800C9168; } // 800C9160
  {uint32_t ea=c->r[30]+0x000000A8u; WF32(ea,c->f[0]);} // 800C9164
L_800C9168:;
  c->r[3]=0u+0x80620000u; // 800C9168
  c->r[3]=c->r[3]+0x000079C0u; // 800C916C
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C9170
  c->r[0]=rotl(c->r[3],0)&0x0000000Fu; cr0(c,c->r[0]); // 800C9174
  if (crb(c,2)) { goto L_800C921C; } // 800C9178
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 800C917C
  if (crb(c,2)) { goto L_800C91B8; } // 800C9180
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C9184
  if (crb(c,2)) { goto L_800C9198; } // 800C9188
  c->r[0]=0u+0x00000001u; // 800C918C
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C9190
  goto L_800C929C; // 800C9194
L_800C9198:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C9198
  if (crb(c,2)) { goto L_800C91AC; } // 800C919C
  c->r[0]=0u+0x00000007u; // 800C91A0
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C91A4
  goto L_800C929C; // 800C91A8
L_800C91AC:;
  c->r[0]=0u+0x00000000u; // 800C91AC
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C91B0
  goto L_800C929C; // 800C91B4
L_800C91B8:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800C91B8
  if (crb(c,2)) { goto L_800C91F4; } // 800C91BC
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C91C0
  if (crb(c,2)) { goto L_800C91D4; } // 800C91C4
  c->r[0]=0u+0x00000003u; // 800C91C8
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C91CC
  goto L_800C929C; // 800C91D0
L_800C91D4:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C91D4
  if (crb(c,2)) { goto L_800C91E8; } // 800C91D8
  c->r[0]=0u+0x00000005u; // 800C91DC
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C91E0
  goto L_800C929C; // 800C91E4
L_800C91E8:;
  c->r[0]=0u+0x00000004u; // 800C91E8
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C91EC
  goto L_800C929C; // 800C91F0
L_800C91F4:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C91F4
  if (crb(c,2)) { goto L_800C9208; } // 800C91F8
  c->r[0]=0u+0x00000002u; // 800C91FC
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C9200
  goto L_800C929C; // 800C9204
L_800C9208:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C9208
  if (crb(c,2)) { goto L_800C929C; } // 800C920C
  c->r[0]=0u+0x00000006u; // 800C9210
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800C9214
  goto L_800C929C; // 800C9218
L_800C921C:;
  c->r[0]=R8(c->r[30]+0x0000008Au); // 800C921C
  cmpu(c,0,c->r[0],0x000000FFu); // 800C9220
  if (crb(c,2)) { goto L_800C9250; } // 800C9224
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C9228
  c->r[3]=c->r[30]|c->r[30]; // 800C922C
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C9230
  c->r[4]=0u+0x00000004u; // 800C9234
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C9238
  c->r[5]=0u+0x00000001u; // 800C923C
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C9240
  c->ctr=c->r[12]; // 800C9244
  if (true) { c->lr=0x800C924Cu; dispatch(c,c->ctr); } // 800C9248
  goto L_800C9274; // 800C924C
L_800C9250:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C9250
  c->r[3]=c->r[30]|c->r[30]; // 800C9254
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C9258
  c->r[4]=0u+0x00000000u; // 800C925C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C9260
  c->r[5]=0u+0x00000001u; // 800C9264
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C9268
  c->ctr=c->r[12]; // 800C926C
  if (true) { c->lr=0x800C9274u; dispatch(c,c->ctr); } // 800C9270
L_800C9274:;
  c->r[7]=0u+0x803D0000u; // 800C9274
  {uint32_t ea=c->r[7]+0x0000116Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800C9278
  c->r[3]=c->r[30]|c->r[30]; // 800C927C
  c->r[4]=c->r[1]+0x00000020u; // 800C9280
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C9284
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C9288
  W32(c->r[1]+0x00000020u,c->r[6]); // 800C928C
  W32(c->r[1]+0x00000024u,c->r[5]); // 800C9290
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C9294
  c->lr=0x800C929Cu; f_800C6C78(c); // 800C9298
L_800C929C:;
  c->r[0]=R8(c->r[30]+0x0000007Du); // 800C929C
  cmpu(c,0,c->r[0],c->r[31]); // 800C92A0
  if (crb(c,2)) { goto L_800C93A0; } // 800C92A4
  cmpu(c,0,c->r[0],0x00000007u); // 800C92A8
  c->r[4]=0u+0x00000000u; // 800C92AC
  if (crb(c,1)) { goto L_800C9344; } // 800C92B0
  c->r[3]=0u+0x803D0000u; // 800C92B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C92B8
  c->r[3]=c->r[3]+0x00001184u; // 800C92BC
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C92C0
  c->ctr=c->r[3]; // 800C92C4
  if (true) { switch (c->ctr) { case 0x800C92CCu: goto L_800C92CC; case 0x800C92DCu: goto L_800C92DC; case 0x800C92E8u: goto L_800C92E8; case 0x800C92F8u: goto L_800C92F8; case 0x800C9308u: goto L_800C9308; case 0x800C9318u: goto L_800C9318; case 0x800C9328u: goto L_800C9328; case 0x800C9338u: goto L_800C9338; default: break; } dispatch(c,c->ctr); return; } // 800C92C8
L_800C92CC:;
  c->r[0]=c->r[31]+0xFFFFFFFCu; // 800C92CC
  c->r[0]=cntlz(c->r[0]); // 800C92D0
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C92D4
  goto L_800C9344; // 800C92D8
L_800C92DC:;
  c->r[0]=cntlz(c->r[31]); // 800C92DC
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C92E0
  goto L_800C9344; // 800C92E4
L_800C92E8:;
  c->r[0]=c->r[31]+0xFFFFFFFAu; // 800C92E8
  c->r[0]=cntlz(c->r[0]); // 800C92EC
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C92F0
  goto L_800C9344; // 800C92F4
L_800C92F8:;
  c->r[0]=c->r[31]+0xFFFFFFFEu; // 800C92F8
  c->r[0]=cntlz(c->r[0]); // 800C92FC
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C9300
  goto L_800C9344; // 800C9304
L_800C9308:;
  c->r[0]=c->r[31]+0xFFFFFFFBu; // 800C9308
  c->r[0]=cntlz(c->r[0]); // 800C930C
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C9310
  goto L_800C9344; // 800C9314
L_800C9318:;
  c->r[0]=c->r[31]+0xFFFFFFF9u; // 800C9318
  c->r[0]=cntlz(c->r[0]); // 800C931C
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C9320
  goto L_800C9344; // 800C9324
L_800C9328:;
  c->r[0]=c->r[31]+0xFFFFFFFDu; // 800C9328
  c->r[0]=cntlz(c->r[0]); // 800C932C
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C9330
  goto L_800C9344; // 800C9334
L_800C9338:;
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800C9338
  c->r[0]=cntlz(c->r[0]); // 800C933C
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C9340
L_800C9344:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C9344
  if (crb(c,2)) { goto L_800C9378; } // 800C9348
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C934C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C9350
  c->lr=0x800C9358u; f_802501B0(c); // 800C9354
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C9358
  c->r[3]=c->r[30]|c->r[30]; // 800C935C
  c->r[4]=0u+0x00000064u; // 800C9360
  c->r[5]=0u+0x00000000u; // 800C9364
  c->r[6]=0u+0x00000000u; // 800C9368
  c->r[7]=0u+0x00000000u; // 800C936C
  c->lr=0x800C9374u; f_801F4D44(c); // 800C9370
  goto L_800C942C; // 800C9374
L_800C9378:;
  c->r[7]=0u+0x803D0000u; // 800C9378
  {uint32_t ea=c->r[7]+0x00001178u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C937C
  c->r[3]=c->r[30]|c->r[30]; // 800C9380
  c->r[4]=c->r[1]+0x00000014u; // 800C9384
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C9388
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C938C
  W32(c->r[1]+0x00000014u,c->r[6]); // 800C9390
  W32(c->r[1]+0x00000018u,c->r[5]); // 800C9394
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C9398
  c->lr=0x800C93A0u; f_800C6C78(c); // 800C939C
L_800C93A0:;
  c->r[3]=0u+0x80620000u; // 800C93A0
  c->r[4]=0u+0x00000000u; // 800C93A4
  c->r[3]=c->r[3]+0x000079C0u; // 800C93A8
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C93AC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C93B0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C93B4
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[0]); // 800C93B8
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C93BC
  W32(c->r[1]+0x00000010u,c->r[4]); // 800C93C0
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800C93C4
  W32(c->r[1]+0x00000030u,c->r[4]); // 800C93C8
  W32(c->r[1]+0x00000034u,c->r[4]); // 800C93CC
  if (crb(c,2)) { goto L_800C93D8; } // 800C93D0
  {uint32_t ea=c->r[30]+0x000003D4u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C93D4
L_800C93D8:;
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C93D8
  c->lr=0x800C93E0u; f_80035554(c); // 800C93DC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 800C93E0
  {uint32_t ea=c->r[2]+0xFFFF9F20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C93E4
  c->r[3]=c->r[1]+0x00000038u; // 800C93E8
  c->r[4]=0u+0x00000059u; // 800C93EC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800C93F0
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C93F4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800C93F8
  c->lr=0x800C9400u; f_80295FBC(c); // 800C93FC
  c->r[4]=c->r[1]+0x0000002Cu; // 800C9400
  c->r[3]=c->r[1]+0x00000038u; // 800C9404
  c->r[5]=c->r[4]|c->r[4]; // 800C9408
  c->lr=0x800C9410u; f_80296750(c); // 800C940C
  c->r[4]=c->r[30]+0x0000002Cu; // 800C9410
  c->r[3]=c->r[1]+0x0000002Cu; // 800C9414
  c->r[5]=c->r[4]|c->r[4]; // 800C9418
  c->lr=0x800C9420u; f_80296A4C(c); // 800C941C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800C9420
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C9424
  c->lr=0x800C942Cu; f_802501B0(c); // 800C9428
L_800C942C:;
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800C942C
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C9430
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800C9434
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800C9438
  c->r[30]=R32(c->r[1]+0x00000068u); // 800C943C
  c->lr=c->r[0]; // 800C9440
  c->r[1]=c->r[1]+0x00000080u; // 800C9444
  return; // 800C9448
}

// fn_800C944C
void f_800C944C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C944C
  c->r[0]=c->lr; // 800C9450
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C9454
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C9458
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C945C
  c->r[31]=c->r[3]|c->r[3]; // 800C9460
  c->r[3]=c->r[3]+0x0000000Cu; // 800C9464
  c->lr=0x800C946Cu; f_80037668(c); // 800C9468
  c->r[3]=c->r[31]+0x000003D8u; // 800C946C
  c->r[4]=c->r[31]+0x0000002Cu; // 800C9470
  c->lr=0x800C9478u; f_800361A0(c); // 800C9474
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C9478
  c->r[3]=c->r[31]|c->r[31]; // 800C947C
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C9480
  c->r[6]=0u+0x00000001u; // 800C9484
  c->r[12]=R32(c->r[12]+0x00000064u); // 800C9488
  c->f[2]=c->f[1]; // 800C948C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C9490
  c->r[5]=R32(c->r[31]+0x000003C4u); // 800C9494
  c->ctr=c->r[12]; // 800C9498
  if (true) { c->lr=0x800C94A0u; dispatch(c,c->ctr); } // 800C949C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C94A0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C94A4
  c->lr=0x800C94ACu; f_802501B0(c); // 800C94A8
  c->r[7]=0u+0x803D0000u; // 800C94AC
  {uint32_t ea=c->r[7]+0x000011A4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C94B0
  c->r[3]=c->r[31]|c->r[31]; // 800C94B4
  c->r[4]=c->r[1]+0x00000008u; // 800C94B8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C94BC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C94C0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C94C4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C94C8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C94CC
  c->lr=0x800C94D4u; f_800C6C78(c); // 800C94D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C94D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C94D8
  c->lr=c->r[0]; // 800C94DC
  c->r[1]=c->r[1]+0x00000020u; // 800C94E0
  return; // 800C94E4
}

// fn_800C94E8
void f_800C94E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C94E8
  c->r[0]=c->lr; // 800C94EC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C94F0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800C94F4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800C94F8
  c->r[4]=0u+0x00000000u; // 800C94FC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C9500
  c->r[31]=c->r[3]|c->r[3]; // 800C9504
  c->r[3]=c->r[3]+0x0000000Cu; // 800C9508
  c->lr=0x800C9510u; f_800366DC(c); // 800C950C
  c->r[3]=c->r[31]+0x0000000Cu; // 800C9510
  c->lr=0x800C9518u; f_8003E460(c); // 800C9514
  c->r[0]=0u+0x43300000u; // 800C9518
  W32(c->r[1]+0x00000024u,c->r[3]); // 800C951C
  {uint32_t ea=c->r[2]+0xFFFF9F78u; c->f[2]=RF64(ea);} // 800C9520
  W32(c->r[1]+0x00000020u,c->r[0]); // 800C9524
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9528
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800C952C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800C9530
  fcmp(c,0,c->f[1],c->f[0]); // 800C9534
  if (!crb(c,1)) { goto L_800C9560; } // 800C9538
  c->r[3]=c->r[31]+0x0000002Cu; // 800C953C
  c->r[4]=c->r[31]+0x000003CCu; // 800C9540
  c->lr=0x800C9548u; f_800361A0(c); // 800C9544
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C9548
  c->r[3]=c->r[31]|c->r[31]; // 800C954C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C9550
  c->ctr=c->r[12]; // 800C9554
  if (true) { c->lr=0x800C955Cu; dispatch(c,c->ctr); } // 800C9558
  goto L_800C9598; // 800C955C
L_800C9560:;
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800C9560
  {uint32_t ea=c->r[2]+0xFFFF9F40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9564
  c->r[3]=c->r[31]+0x000003D8u; // 800C9568
  c->r[4]=c->r[1]+0x00000014u; // 800C956C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800C9570
  c->lr=0x800C9578u; f_80296A94(c); // 800C9574
  c->f[1]=c->f[31]; // 800C9578
  c->r[3]=c->r[31]+0x000003CCu; // 800C957C
  c->r[4]=c->r[1]+0x00000008u; // 800C9580
  c->lr=0x800C9588u; f_80296A94(c); // 800C9584
  c->r[3]=c->r[1]+0x00000014u; // 800C9588
  c->r[4]=c->r[1]+0x00000008u; // 800C958C
  c->r[5]=c->r[31]+0x0000002Cu; // 800C9590
  c->lr=0x800C9598u; f_80296A4C(c); // 800C9594
L_800C9598:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C9598
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C959C
  c->lr=0x800C95A4u; f_802501B0(c); // 800C95A0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800C95A4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C95A8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800C95AC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C95B0
  c->lr=c->r[0]; // 800C95B4
  c->r[1]=c->r[1]+0x00000040u; // 800C95B8
  return; // 800C95BC
}

// fn_800C95C0
void f_800C95C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C95C0
  c->r[0]=c->lr; // 800C95C4
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C95C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C95CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C95D0
  c->r[31]=c->r[3]|c->r[3]; // 800C95D4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800C95D8
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C95DC
  fcmp(c,0,c->f[1],c->f[0]); // 800C95E0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C95E4
  if (!crb(c,2)) { goto L_800C961C; } // 800C95E8
  c->r[7]=0u+0x803D0000u; // 800C95EC
  {uint32_t ea=c->r[7]+0x000011B0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800C95F0
  c->r[4]=c->r[1]+0x00000008u; // 800C95F4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C95F8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C95FC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C9600
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800C9604
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C9608
  c->lr=0x800C9610u; f_800C6C78(c); // 800C960C
  c->r[3]=c->r[31]|c->r[31]; // 800C9610
  c->lr=0x800C9618u; f_800C9638(c); // 800C9614
  goto L_800C9624; // 800C9618
L_800C961C:;
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800C961C
  c->lr=0x800C9624u; f_802501B0(c); // 800C9620
L_800C9624:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C9624
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C9628
  c->lr=c->r[0]; // 800C962C
  c->r[1]=c->r[1]+0x00000020u; // 800C9630
  return; // 800C9634
}

// fn_800C9638
void f_800C9638(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9638
  c->r[0]=c->lr; // 800C963C
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C9640
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800C9644
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800C9648
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 800C964C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 800C9650
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800C9654
  c->r[31]=c->r[3]|c->r[3]; // 800C9658
  c->r[3]=0u+0x80550000u; // 800C965C
  W32(c->r[1]+0x00000068u,c->r[30]); // 800C9660
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800C9664
  W32(c->r[1]+0x00000064u,c->r[29]); // 800C9668
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800C966C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800C9670
  c->lr=0x800C9678u; f_8019C920(c); // 800C9674
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C9678
  c->r[30]=c->r[3]|c->r[3]; // 800C967C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800C9680
  c->lr=0x800C9688u; f_802501B0(c); // 800C9684
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C9688
  c->r[29]=0u+0x00000000u; // 800C968C
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9690
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C9694
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C9698
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C969C
  goto L_800C96A8; // 800C96A0
L_800C96A4:;
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 800C96A4
L_800C96A8:;
  fcmp(c,0,c->f[2],c->f[0]); // 800C96A8
  if (crb(c,0)) { IRQCHK(c); goto L_800C96A4; } // 800C96AC
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C96B0
  goto L_800C96BC; // 800C96B4
L_800C96B8:;
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C96B8
L_800C96BC:;
  fcmp(c,0,c->f[2],c->f[0]); // 800C96BC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C96C0
  if (crb(c,2)) { IRQCHK(c); goto L_800C96B8; } // 800C96C4
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C96C8
  {uint32_t ea=c->r[2]+0xFFFF9F40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C96CC
  fcmp(c,0,c->f[1],c->f[0]); // 800C96D0
  if (!crb(c,0)) { goto L_800C9730; } // 800C96D4
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C96D8
  fcmp(c,0,c->f[2],c->f[0]); // 800C96DC
  if (!crb(c,0)) { goto L_800C96EC; } // 800C96E0
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C96E4
  goto L_800C9764; // 800C96E8
L_800C96EC:;
  {uint32_t ea=c->r[2]+0xFFFF9FBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C96EC
  fcmp(c,0,c->f[2],c->f[0]); // 800C96F0
  if (!crb(c,0)) { goto L_800C9700; } // 800C96F4
  {uint32_t ea=c->r[2]+0xFFFF9FB0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C96F8
  goto L_800C9764; // 800C96FC
L_800C9700:;
  {uint32_t ea=c->r[2]+0xFFFF9FB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9700
  fcmp(c,0,c->f[2],c->f[0]); // 800C9704
  if (!crb(c,0)) { goto L_800C9714; } // 800C9708
  {uint32_t ea=c->r[2]+0xFFFF9F6Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C970C
  goto L_800C9764; // 800C9710
L_800C9714:;
  {uint32_t ea=c->r[2]+0xFFFF9FB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9714
  fcmp(c,0,c->f[2],c->f[0]); // 800C9718
  if (!crb(c,0)) { goto L_800C9728; } // 800C971C
  {uint32_t ea=c->r[2]+0xFFFF9FACu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C9720
  goto L_800C9764; // 800C9724
L_800C9728:;
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C9728
  goto L_800C9764; // 800C972C
L_800C9730:;
  {uint32_t ea=c->r[2]+0xFFFF9FB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9730
  fcmp(c,0,c->f[2],c->f[0]); // 800C9734
  if (!crb(c,0)) { goto L_800C9748; } // 800C9738
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C973C
  c->r[29]=0u+0x00000001u; // 800C9740
  goto L_800C9764; // 800C9744
L_800C9748:;
  {uint32_t ea=c->r[2]+0xFFFF9FACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9748
  fcmp(c,0,c->f[2],c->f[0]); // 800C974C
  if (!crb(c,0)) { goto L_800C975C; } // 800C9750
  {uint32_t ea=c->r[2]+0xFFFF9F6Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C9754
  goto L_800C9764; // 800C9758
L_800C975C:;
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C975C
  c->r[29]=0u+0x00000001u; // 800C9760
L_800C9764:;
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9764
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C9768
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 800C976C
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9770
  goto L_800C977C; // 800C9774
L_800C9778:;
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 800C9778
L_800C977C:;
  fcmp(c,0,c->f[31],c->f[0]); // 800C977C
  if (crb(c,0)) { IRQCHK(c); goto L_800C9778; } // 800C9780
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9784
  goto L_800C9790; // 800C9788
L_800C978C:;
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800C978C
L_800C9790:;
  fcmp(c,0,c->f[31],c->f[0]); // 800C9790
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C9794
  if (crb(c,2)) { IRQCHK(c); goto L_800C978C; } // 800C9798
  {uint32_t ea=c->r[30]+0x00000064u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C979C
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[30]); // 800C97A0
  c->lr=0x800C97A8u; f_8003EA88(c); // 800C97A4
  {uint32_t ea=c->r[2]+0xFFFF9F6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C97A8
  fcmp(c,0,c->f[1],c->f[0]); // 800C97AC
  if (!crb(c,1)) { goto L_800C97C8; } // 800C97B0
  fcmp(c,0,c->f[31],c->f[30]); // 800C97B4
  if (!crb(c,1)) { goto L_800C97C4; } // 800C97B8
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[0]); // 800C97BC
  goto L_800C97C8; // 800C97C0
L_800C97C4:;
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 800C97C4
L_800C97C8:;
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[30]); // 800C97C8
  c->lr=0x800C97D0u; f_8003EA88(c); // 800C97CC
  {uint32_t ea=c->r[2]+0xFFFF9FC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C97D0
  fcmp(c,0,c->f[1],c->f[0]); // 800C97D4
  if (!crb(c,1)) { goto L_800C97FC; } // 800C97D8
  fcmp(c,0,c->f[30],c->f[31]); // 800C97DC
  if (!crb(c,1)) { goto L_800C97F0; } // 800C97E0
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C97E4
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[0]); // 800C97E8
  goto L_800C9800; // 800C97EC
L_800C97F0:;
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C97F0
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[0]); // 800C97F4
  goto L_800C9800; // 800C97F8
L_800C97FC:;
  c->f[30]=c->f[31]; // 800C97FC
L_800C9800:;
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[30]);} // 800C9800
  c->r[5]=0u+0x803A0000u; // 800C9804
  {uint32_t ea=c->r[2]+0xFFFF9FCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9808
  {uint32_t ea=c->r[5]+0xFFFFDBF4u; c->r[4]=R32(ea); c->r[5]=ea;} // 800C980C
  c->r[3]=R32(c->r[5]+0x00000004u); // 800C9810
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C9814
  W32(c->r[1]+0x00000024u,c->r[4]); // 800C9818
  W32(c->r[1]+0x00000028u,c->r[3]); // 800C981C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800C9820
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C9824
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C9828
  fcmp(c,0,c->f[1],c->f[0]); // 800C982C
  if (!crb(c,0)) { goto L_800C99E8; } // 800C9830
  cmpu(c,0,c->r[29],0x00000001u); // 800C9834
  if (!crb(c,2)) { goto L_800C98C0; } // 800C9838
  c->r[5]=0u+0x803A0000u; // 800C983C
  {uint32_t ea=c->r[5]+0xFFFFDC00u; c->r[4]=R32(ea); c->r[5]=ea;} // 800C9840
  c->r[3]=R32(c->r[5]+0x00000004u); // 800C9844
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C9848
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C984C
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C9850
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9854
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C9858
  {uint32_t ea=c->r[3]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C985C
  fcmp(c,0,c->f[2],c->f[0]); // 800C9860
  if (!crb(c,0)) { goto L_800C9878; } // 800C9864
  c->r[3]=c->r[1]+0x00000024u; // 800C9868
  c->r[4]=c->r[1]+0x0000000Cu; // 800C986C
  c->lr=0x800C9874u; f_800361A0(c); // 800C9870
  goto L_800C98C0; // 800C9874
L_800C9878:;
  if (!crb(c,0)) { goto L_800C98C0; } // 800C9878
  {uint32_t ea=c->r[2]+0xFFFF9FB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C987C
  c->r[3]=c->r[1]+0x00000024u; // 800C9880
  {uint32_t ea=c->r[2]+0xFFFF9F64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9884
  c->r[4]=c->r[3]|c->r[3]; // 800C9888
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800C988C
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[1]); // 800C9890
  c->f[1]=c->f[30]; // 800C9894
  c->lr=0x800C989Cu; f_80296A94(c); // 800C9898
  {uint32_t ea=c->r[2]+0xFFFF9F40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C989C
  c->r[3]=c->r[1]+0x0000000Cu; // 800C98A0
  c->r[4]=c->r[3]|c->r[3]; // 800C98A4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[30]); // 800C98A8
  c->lr=0x800C98B0u; f_80296A94(c); // 800C98AC
  c->r[4]=c->r[1]+0x00000024u; // 800C98B0
  c->r[3]=c->r[1]+0x0000000Cu; // 800C98B4
  c->r[5]=c->r[4]|c->r[4]; // 800C98B8
  c->lr=0x800C98C0u; f_80296A4C(c); // 800C98BC
L_800C98C0:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C98C0
  c->r[4]=0u+0x803A0000u; // 800C98C4
  c->r[4]=c->r[4]+0xFFFFDC38u; // 800C98C8
  c->r[5]=c->r[1]+0x00000030u; // 800C98CC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C98D0
  c->r[4]=c->r[4]+0x00000041u; // 800C98D4
  c->r[6]=0u+0x00000001u; // 800C98D8
  c->lr=0x800C98E0u; f_80257018(c); // 800C98DC
  c->r[4]=c->r[1]+0x00000024u; // 800C98E0
  c->r[3]=c->r[1]+0x00000030u; // 800C98E4
  c->r[5]=c->r[4]|c->r[4]; // 800C98E8
  c->lr=0x800C98F0u; f_80296750(c); // 800C98EC
  c->r[3]=c->r[1]+0x00000024u; // 800C98F0
  c->r[4]=c->r[30]+0x0000002Cu; // 800C98F4
  c->r[5]=c->r[1]+0x00000018u; // 800C98F8
  c->lr=0x800C9900u; f_80296A70(c); // 800C98FC
  c->r[3]=c->r[1]+0x00000018u; // 800C9900
  c->lr=0x800C9908u; f_80296AF4(c); // 800C9904
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C9908
  c->f[30]=c->f[1]; // 800C990C
  {uint32_t ea=c->r[2]+0xFFFF9FD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9910
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C9914
  fcmp(c,0,c->f[1],c->f[0]); // 800C9918
  if (!crb(c,0)) { goto L_800C9934; } // 800C991C
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C9920
  c->lr=0x800C9928u; f_80035554(c); // 800C9924
  {uint32_t ea=c->r[2]+0xFFFF9FD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9928
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 800C992C
  goto L_800C9940; // 800C9930
L_800C9934:;
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800C9934
  c->lr=0x800C993Cu; f_80035554(c); // 800C9938
  c->f[31]=c->f[1]; // 800C993C
L_800C9940:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[31]); // 800C9940
  fcmp(c,0,c->f[30],c->f[0]); // 800C9944
  if (!crb(c,0)) { goto L_800C995C; } // 800C9948
  c->r[3]=c->r[30]+0x0000002Cu; // 800C994C
  c->r[4]=c->r[1]+0x00000024u; // 800C9950
  c->lr=0x800C9958u; f_800361A0(c); // 800C9954
  goto L_800C9A34; // 800C9958
L_800C995C:;
  c->r[3]=c->r[1]+0x00000018u; // 800C995C
  c->r[4]=c->r[3]|c->r[3]; // 800C9960
  c->lr=0x800C9968u; f_80296AB0(c); // 800C9964
  c->f[1]=c->f[31]; // 800C9968
  c->r[3]=c->r[1]+0x00000018u; // 800C996C
  c->r[4]=c->r[3]|c->r[3]; // 800C9970
  c->lr=0x800C9978u; f_80296A94(c); // 800C9974
  c->r[3]=c->r[30]+0x0000002Cu; // 800C9978
  c->r[4]=c->r[1]+0x00000018u; // 800C997C
  c->r[5]=c->r[3]|c->r[3]; // 800C9980
  c->lr=0x800C9988u; f_80296A4C(c); // 800C9984
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C9988
  c->r[3]=0u+0x80550000u; // 800C998C
  {uint32_t ea=c->r[2]+0xFFFF9F28u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C9990
  c->r[3]=c->r[3]+0x00003D60u; // 800C9994
  c->f[3]=c->f[1]; // 800C9998
  c->r[4]=c->r[30]+0x0000002Cu; // 800C999C
  c->r[5]=c->r[1]+0x00000008u; // 800C99A0
  c->r[6]=0u+0x00000000u; // 800C99A4
  c->r[7]=0u+0x00000000u; // 800C99A8
  c->lr=0x800C99B0u; f_801D5488(c); // 800C99AC
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C99B0
  {uint32_t ea=c->r[2]+0xFFFF9F40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C99B4
  fcmp(c,0,c->f[1],c->f[0]); // 800C99B8
  if (!crb(c,0)) { goto L_800C99D0; } // 800C99BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C99C0
  {uint32_t ea=c->r[2]+0xFFFF9F50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C99C4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800C99C8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800C99CC
L_800C99D0:;
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C99D0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C99D4
  fcmp(c,0,c->f[1],c->f[0]); // 800C99D8
  if (!crb(c,0)) { goto L_800C9A34; } // 800C99DC
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800C99E0
  goto L_800C9A34; // 800C99E4
L_800C99E8:;
  c->r[4]=0u+0x803A0000u; // 800C99E8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C99EC
  c->r[4]=c->r[4]+0xFFFFDC38u; // 800C99F0
  c->r[5]=c->r[1]+0x00000030u; // 800C99F4
  c->r[4]=c->r[4]+0x00000041u; // 800C99F8
  c->r[6]=0u+0x00000001u; // 800C99FC
  c->lr=0x800C9A04u; f_80257018(c); // 800C9A00
  c->r[4]=c->r[1]+0x00000024u; // 800C9A04
  c->r[3]=c->r[1]+0x00000030u; // 800C9A08
  c->r[5]=c->r[4]|c->r[4]; // 800C9A0C
  c->lr=0x800C9A14u; f_80296750(c); // 800C9A10
  c->r[3]=c->r[30]+0x0000002Cu; // 800C9A14
  c->r[4]=c->r[1]+0x00000024u; // 800C9A18
  c->lr=0x800C9A20u; f_800361A0(c); // 800C9A1C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C9A20
  c->r[3]=c->r[31]|c->r[31]; // 800C9A24
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C9A28
  c->ctr=c->r[12]; // 800C9A2C
  if (true) { c->lr=0x800C9A34u; dispatch(c,c->ctr); } // 800C9A30
L_800C9A34:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800C9A34
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800C9A38
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 800C9A3C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 800C9A40
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800C9A44
  c->r[30]=R32(c->r[1]+0x00000068u); // 800C9A48
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C9A4C
  c->r[29]=R32(c->r[1]+0x00000064u); // 800C9A50
  c->lr=c->r[0]; // 800C9A54
  c->r[1]=c->r[1]+0x00000090u; // 800C9A58
  return; // 800C9A5C
}

// fn_800C9A60
void f_800C9A60(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000093u); // 800C9A60
  cmps(c,0,(int32_t)c->r[0],0); // 800C9A64
  if (!crb(c,2)) return; // 800C9A68
  c->r[0]=0u+0x00000001u; // 800C9A6C
  {uint32_t ea=c->r[2]+0xFFFF9F18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C9A70
  W8(c->r[3]+0x00000093u,c->r[0]); // 800C9A74
  c->r[4]=c->r[3]+0x0000009Cu; // 800C9A78
  c->r[5]=c->r[3]+0x0000009Eu; // 800C9A7C
  c->r[6]=c->r[3]+0x000000A0u; // 800C9A80
  c->r[7]=c->r[3]+0x000000A2u; // 800C9A84
  f_801F5EE4(c); return; // 800C9A88
  return; // 800C9A8C
}

// fn_800C9A90
void f_800C9A90(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000093u); // 800C9A90
  cmps(c,0,(int32_t)c->r[0],0); // 800C9A94
  if (crb(c,2)) return; // 800C9A98
  c->r[0]=0u+0x00000000u; // 800C9A9C
  c->r[4]=c->r[3]+0x0000009Cu; // 800C9AA0
  W8(c->r[3]+0x00000093u,c->r[0]); // 800C9AA4
  c->r[5]=c->r[3]+0x0000009Eu; // 800C9AA8
  c->r[6]=c->r[3]+0x000000A0u; // 800C9AAC
  c->r[7]=c->r[3]+0x000000A2u; // 800C9AB0
  f_801F60D0(c); return; // 800C9AB4
  return; // 800C9AB8
}

// fn_800C9ABC
void f_800C9ABC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9ABC
  c->r[0]=c->lr; // 800C9AC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9AC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9AC8
  c->r[31]=c->r[3]|c->r[3]; // 800C9ACC
  c->r[4]=R8(c->r[3]+0x00000078u); // 800C9AD0
  cmpu(c,0,c->r[4],0x000000FFu); // 800C9AD4
  if (crb(c,2)) { goto L_800C9AE8; } // 800C9AD8
  c->r[3]=0u+0x80550000u; // 800C9ADC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C9AE0
  c->lr=0x800C9AE8u; f_8018D738(c); // 800C9AE4
L_800C9AE8:;
  c->r[4]=R8(c->r[31]+0x00000079u); // 800C9AE8
  cmpu(c,0,c->r[4],0x000000FFu); // 800C9AEC
  if (crb(c,2)) { goto L_800C9B00; } // 800C9AF0
  c->r[3]=0u+0x80550000u; // 800C9AF4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C9AF8
  c->lr=0x800C9B00u; f_8018D738(c); // 800C9AFC
L_800C9B00:;
  c->r[4]=R8(c->r[31]+0x0000007Au); // 800C9B00
  cmpu(c,0,c->r[4],0x000000FFu); // 800C9B04
  if (crb(c,2)) { goto L_800C9B18; } // 800C9B08
  c->r[3]=0u+0x80550000u; // 800C9B0C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C9B10
  c->lr=0x800C9B18u; f_8018D738(c); // 800C9B14
L_800C9B18:;
  c->r[3]=c->r[31]|c->r[31]; // 800C9B18
  c->lr=0x800C9B20u; f_801F4C78(c); // 800C9B1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9B20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9B24
  c->lr=c->r[0]; // 800C9B28
  c->r[1]=c->r[1]+0x00000010u; // 800C9B2C
  return; // 800C9B30
}

// fn_800C9B34
void f_800C9B34(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800C9B34
  if (crb(c,2)) { goto L_800C9B4C; } // 800C9B38
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800C9B3C
  c->r[0]=c->r[0]|0x00008000u; // 800C9B40
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800C9B44
  goto L_800C9B58; // 800C9B48
L_800C9B4C:;
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800C9B4C
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800C9B50
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800C9B54
L_800C9B58:;
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 800C9B58
  return; // 800C9B5C
}

// fn_800C9B60
void f_800C9B60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9B60
  c->r[0]=c->lr; // 800C9B64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C9B68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C9B6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C9B70
  c->r[30]=c->r[3]|c->r[3]; // 800C9B74
  c->lr=0x800C9B7Cu; f_801F56F4(c); // 800C9B78
  c->r[3]=c->r[30]|c->r[30]; // 800C9B7C
  c->lr=0x800C9B84u; f_800C6CE4(c); // 800C9B80
  c->r[4]=R8(c->r[30]+0x0000008Au); // 800C9B84
  cmpu(c,0,c->r[4],0x000000FFu); // 800C9B88
  if (crb(c,2)) { goto L_800C9BD0; } // 800C9B8C
  c->r[3]=0u+0x80550000u; // 800C9B90
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800C9B94
  c->lr=0x800C9B9Cu; f_8019C920(c); // 800C9B98
  cmps(c,0,(int32_t)c->r[3],0); // 800C9B9C
  c->r[31]=c->r[3]|c->r[3]; // 800C9BA0
  if (crb(c,2)) { goto L_800C9BD0; } // 800C9BA4
  c->r[4]=c->r[1]+0x0000000Cu; // 800C9BA8
  c->r[5]=0u+0x00000000u; // 800C9BAC
  c->lr=0x800C9BB4u; f_8007C6C8(c); // 800C9BB0
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800C9BB4
  c->r[4]=c->r[3]+0x000000B0u; // 800C9BB8
  c->lr=0x800C9BC0u; f_80250F18(c); // 800C9BBC
  c->r[3]=c->r[31]|c->r[31]; // 800C9BC0
  c->r[4]=0u+0x00000000u; // 800C9BC4
  c->lr=0x800C9BCCu; f_80039840(c); // 800C9BC8
  c->lr=0x800C9BD0u; f_8025037C(c); // 800C9BCC
L_800C9BD0:;
  c->r[4]=R8(c->r[30]+0x0000007Cu); // 800C9BD0
  cmpu(c,0,c->r[4],0x000000FFu); // 800C9BD4
  if (crb(c,2)) { goto L_800C9C34; } // 800C9BD8
  c->r[3]=0u+0x80550000u; // 800C9BDC
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800C9BE0
  c->lr=0x800C9BE8u; f_8019C920(c); // 800C9BE4
  cmps(c,0,(int32_t)c->r[3],0); // 800C9BE8
  c->r[31]=c->r[3]|c->r[3]; // 800C9BEC
  if (crb(c,2)) { goto L_800C9C34; } // 800C9BF0
  c->r[4]=c->r[1]+0x00000008u; // 800C9BF4
  c->r[5]=0u+0x00000000u; // 800C9BF8
  c->lr=0x800C9C00u; f_8007C6C8(c); // 800C9BFC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800C9C00
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800C9C04
  cmps(c,0,(int32_t)c->r[0],0); // 800C9C08
  if (crb(c,2)) { goto L_800C9C34; } // 800C9C0C
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800C9C10
  cmps(c,0,(int32_t)c->r[0],0); // 800C9C14
  if (!crb(c,2)) { goto L_800C9C34; } // 800C9C18
  c->r[4]=c->r[3]+0x000000B0u; // 800C9C1C
  c->lr=0x800C9C24u; f_80250F18(c); // 800C9C20
  c->r[3]=c->r[31]|c->r[31]; // 800C9C24
  c->r[4]=0u+0x00000000u; // 800C9C28
  c->lr=0x800C9C30u; f_80039840(c); // 800C9C2C
  c->lr=0x800C9C34u; f_8025037C(c); // 800C9C30
L_800C9C34:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C9C34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C9C38
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C9C3C
  c->lr=c->r[0]; // 800C9C40
  c->r[1]=c->r[1]+0x00000020u; // 800C9C44
  return; // 800C9C48
}

// fn_800C9C4C
void f_800C9C4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9F1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9C4C
  c->r[0]=0u+0x00000001u; // 800C9C50
  cmps(c,0,(int32_t)c->r[4],0); // 800C9C54
  W8(c->r[3]+0x00000091u,c->r[0]); // 800C9C58
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 800C9C5C
  if (crb(c,2)) { goto L_800C9C6C; } // 800C9C60
  c->r[0]=0u+0x00000000u; // 800C9C64
  W8(c->r[3]+0x00000088u,c->r[0]); // 800C9C68
L_800C9C6C:;
  W8(c->r[3]+0x00000092u,c->r[4]); // 800C9C6C
  return; // 800C9C70
}

// fn_800C9C74
void f_800C9C74(Ctx* __restrict c) {
  c->r[6]=0u+0x00000001u; // 800C9C74
  c->r[7]=0u+0x000000FFu; // 800C9C78
  c->r[8]=0u+0x00000000u; // 800C9C7C
  goto L_800C9CC0; // 800C9C80
L_800C9C84:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 800C9C84
  c->r[5]=c->r[3]+c->r[0]; // 800C9C88
  c->r[5]=R8(c->r[5]+0x00000098u); // 800C9C8C
  cmpu(c,0,c->r[4],c->r[5]); // 800C9C90
  if (!crb(c,2)) { goto L_800C9CA4; } // 800C9C94
  c->r[6]=0u+0x00000000u; // 800C9C98
  c->r[8]=0u+0x00000003u; // 800C9C9C
  goto L_800C9CBC; // 800C9CA0
L_800C9CA4:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 800C9CA4
  cmpu(c,0,c->r[0],0x000000FFu); // 800C9CA8
  if (!crb(c,2)) { goto L_800C9CBC; } // 800C9CAC
  cmpu(c,0,c->r[5],0x000000FFu); // 800C9CB0
  if (!crb(c,2)) { goto L_800C9CBC; } // 800C9CB4
  c->r[7]=c->r[8]|c->r[8]; // 800C9CB8
L_800C9CBC:;
  c->r[8]=c->r[8]+0x00000001u; // 800C9CBC
L_800C9CC0:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 800C9CC0
  cmpu(c,0,c->r[0],0x00000003u); // 800C9CC4
  if (crb(c,0)) { IRQCHK(c); goto L_800C9C84; } // 800C9CC8
  cmps(c,0,(int32_t)c->r[6],0); // 800C9CCC
  if (crb(c,2)) return; // 800C9CD0
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 800C9CD4
  cmpu(c,0,c->r[0],0x000000FFu); // 800C9CD8
  if (crb(c,2)) return; // 800C9CDC
  c->r[3]=c->r[0]+c->r[3]; // 800C9CE0
  W8(c->r[3]+0x00000098u,c->r[4]); // 800C9CE4
  return; // 800C9CE8
}

// fn_800C9CEC
void f_800C9CEC(Ctx* __restrict c) {
  W8(c->r[3]+0x0000008Au,c->r[4]); // 800C9CEC
  return; // 800C9CF0
}

// fn_800C9CF4
void f_800C9CF4(Ctx* __restrict c) {
  c->r[0]=0u+0x000000FFu; // 800C9CF4
  W8(c->r[3]+0x0000008Au,c->r[0]); // 800C9CF8
  return; // 800C9CFC
}

// fn_800C9D00
void f_800C9D00(Ctx* __restrict c) {
  c->r[4]=R8(c->r[3]+0x0000008Au); // 800C9D00
  c->r[3]=addc(c,~c->r[4],0x000000FFu,1); // 800C9D04
  c->r[0]=c->r[4]+0xFFFFFF01u; // 800C9D08
  c->r[0]=c->r[3]|c->r[0]; // 800C9D0C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800C9D10
  return; // 800C9D14
}

// fn_800C9D18
void f_800C9D18(Ctx* __restrict c) {
  W8(c->r[3]+0x0000007Cu,c->r[4]); // 800C9D18
  return; // 800C9D1C
}

// fn_800C9D20
void f_800C9D20(Ctx* __restrict c) {
  c->r[0]=0u+0x000000FFu; // 800C9D20
  W8(c->r[3]+0x0000007Cu,c->r[0]); // 800C9D24
  return; // 800C9D28
}

// fn_800C9D2C
void f_800C9D2C(Ctx* __restrict c) {
  W8(c->r[3]+0x0000007Eu,c->r[4]); // 800C9D2C
  return; // 800C9D30
}

// fn_800C9D34
void f_800C9D34(Ctx* __restrict c) {
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000003BCu); // 800C9D34
  cmps(c,0,(int32_t)c->r[0],102); // 800C9D38
  if (!crb(c,2)) { goto L_800C9D54; } // 800C9D3C
  c->r[0]=R8(c->r[3]+0x0000007Fu); // 800C9D40
  cmps(c,0,(int32_t)c->r[0],0); // 800C9D44
  if (crb(c,2)) { goto L_800C9D54; } // 800C9D48
  c->r[3]=0u+0x00000001u; // 800C9D4C
  return; // 800C9D50
L_800C9D54:;
  c->r[3]=0u+0x00000000u; // 800C9D54
  return; // 800C9D58
}

// fn_800C9D5C
void f_800C9D5C(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000000A4u); // 800C9D5C
  c->r[0]=c->r[0]|c->r[4]; // 800C9D60
  W8(c->r[3]+0x000000A4u,c->r[0]); // 800C9D64
  return; // 800C9D68
}

// fn_800C9D6C
void f_800C9D6C(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000000A4u); // 800C9D6C
  c->r[0]=c->r[0]&~c->r[4]; // 800C9D70
  W8(c->r[3]+0x000000A4u,c->r[0]); // 800C9D74
  return; // 800C9D78
}

// fn_800C9D7C
void f_800C9D7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9D7C
  c->r[0]=c->lr; // 800C9D80
  cmps(c,0,(int32_t)c->r[3],0); // 800C9D84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9D88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9D8C
  c->r[31]=c->r[4]|c->r[4]; // 800C9D90
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C9D94
  c->r[30]=c->r[3]|c->r[3]; // 800C9D98
  if (crb(c,2)) { goto L_800C9DB8; } // 800C9D9C
  c->r[4]=0u+0x00000000u; // 800C9DA0
  c->lr=0x800C9DA8u; f_8026A06C(c); // 800C9DA4
  cmps(c,0,(int32_t)c->r[31],0); // 800C9DA8
  if (!crb(c,1)) { goto L_800C9DB8; } // 800C9DAC
  c->r[3]=c->r[30]|c->r[30]; // 800C9DB0
  c->lr=0x800C9DB8u; f_8026A268(c); // 800C9DB4
L_800C9DB8:;
  c->r[3]=c->r[30]|c->r[30]; // 800C9DB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9DBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C9DC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9DC4
  c->lr=c->r[0]; // 800C9DC8
  c->r[1]=c->r[1]+0x00000010u; // 800C9DCC
  return; // 800C9DD0
}

// fn_800C9DD4
void f_800C9DD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9DD4
  c->r[0]=c->lr; // 800C9DD8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C9DDC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800C9DE0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800C9DE4
  c->r[4]=0u+0x00000000u; // 800C9DE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C9DEC
  c->r[31]=c->r[3]|c->r[3]; // 800C9DF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C9DF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C9DF8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800C9DFC
  c->lr=0x800C9E04u; f_801F57D0(c); // 800C9E00
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C9E04
  c->r[3]=c->r[31]|c->r[31]; // 800C9E08
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C9E0C
  c->ctr=c->r[12]; // 800C9E10
  if (true) { c->lr=0x800C9E18u; dispatch(c,c->ctr); } // 800C9E14
  c->r[3]=c->r[31]|c->r[31]; // 800C9E18
  c->lr=0x800C9E20u; f_801F4B94(c); // 800C9E1C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800C9E20
  c->r[5]=0u+0x00000003u; // 800C9E24
  {uint32_t ea=c->r[2]+0xFFFF9FE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C9E28
  c->r[4]=0u+0x0000002Cu; // 800C9E2C
  c->r[0]=c->r[0]|0x00000804u; // 800C9E30
  c->r[3]=0u+0x80550000u; // 800C9E34
  W8(c->r[31]+0x0000006Cu,c->r[5]); // 800C9E38
  c->f[3]=c->f[1]; // 800C9E3C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C9E40
  c->r[3]=c->r[3]+0x00003D60u; // 800C9E44
  W8(c->r[31]+0x0000006Du,c->r[4]); // 800C9E48
  c->r[4]=c->r[31]+0x0000002Cu; // 800C9E4C
  {uint32_t ea=c->r[2]+0xFFFF9FE4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C9E50
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800C9E54
  c->r[5]=c->r[31]+0x00000030u; // 800C9E58
  c->r[6]=0u+0x00000000u; // 800C9E5C
  c->r[7]=0u+0x00000000u; // 800C9E60
  c->lr=0x800C9E68u; f_801D5488(c); // 800C9E64
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C9E68
  c->r[3]=c->r[31]|c->r[31]; // 800C9E6C
  c->lr=0x800C9E74u; f_801F58BC(c); // 800C9E70
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C9E74
  c->r[28]=0u+0x00000001u; // 800C9E78
  c->r[30]=0u+0x803A0000u; // 800C9E7C
  W8(c->r[3]+0x0000001Cu,c->r[28]); // 800C9E80
  c->r[4]=c->r[30]+0xFFFFDCFCu; // 800C9E84
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C9E88
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C9E8C
  c->lr=0x800C9E94u; f_80256EC4(c); // 800C9E90
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C9E94
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800C9E98
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C9E9C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C9EA0
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800C9EA4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800C9EA8
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800C9EAC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C9EB0
  c->lr=0x800C9EB8u; f_802501B0(c); // 800C9EB4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C9EB8
  c->r[0]=0u+0x00000000u; // 800C9EBC
  c->r[29]=0u+0x000000FFu; // 800C9EC0
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800C9EC4
  c->r[3]=c->r[31]|c->r[31]; // 800C9EC8
  W8(c->r[31]+0x0000006Fu,c->r[28]); // 800C9ECC
  W32(c->r[31]+0x00000074u,c->r[29]); // 800C9ED0
  W8(c->r[31]+0x00000078u,c->r[28]); // 800C9ED4
  c->lr=0x800C9EDCu; f_801F56F4(c); // 800C9ED8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800C9EDC
  c->r[3]=c->r[31]|c->r[31]; // 800C9EE0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800C9EE4
  c->ctr=c->r[12]; // 800C9EE8
  if (true) { c->lr=0x800C9EF0u; dispatch(c,c->ctr); } // 800C9EEC
  c->r[3]=0u+0x805D0000u; // 800C9EF0
  c->r[4]=c->r[31]+0x0000002Cu; // 800C9EF4
  c->r[3]=c->r[3]+0x000078B0u; // 800C9EF8
  c->lr=0x800C9F00u; f_802351CC(c); // 800C9EFC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800C9F00
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800C9F04
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)112); // 800C9F08
  W32(c->r[31]+0x00000444u,c->r[28]); // 800C9F0C
  c->lr=0x800C9F14u; f_8024E174(c); // 800C9F10
  W32(c->r[31]+0x00000438u,c->r[3]); // 800C9F14
  c->r[4]=0u+0x00000000u; // 800C9F18
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C9F1C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C9F20
  c->lr=0x800C9F28u; f_80259C78(c); // 800C9F24
  c->r[30]=c->r[30]+0xFFFFDCFCu; // 800C9F28
  c->r[3]=0u+0x80550000u; // 800C9F2C
  W32(c->r[31]+0x0000007Cu,c->r[29]); // 800C9F30
  c->r[3]=c->r[3]+0xFFFFC848u; // 800C9F34
  c->r[4]=c->r[30]+0x00000009u; // 800C9F38
  c->r[5]=0u+0x00000000u; // 800C9F3C
  c->r[6]=0u+0x00000000u; // 800C9F40
  c->lr=0x800C9F48u; f_8018D3E4(c); // 800C9F44
  W32(c->r[31]+0x0000007Cu,c->r[3]); // 800C9F48
  c->r[4]=c->r[30]+0x0000000Du; // 800C9F4C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800C9F50
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800C9F54
  c->lr=0x800C9F5Cu; f_80256EC4(c); // 800C9F58
  W8(c->r[31]+0x00000079u,c->r[3]); // 800C9F5C
  c->r[3]=c->r[31]|c->r[31]; // 800C9F60
  c->lr=0x800C9F68u; f_800CAAE8(c); // 800C9F64
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800C9F68
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C9F6C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800C9F70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C9F74
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C9F78
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C9F7C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800C9F80
  c->lr=c->r[0]; // 800C9F84
  c->r[1]=c->r[1]+0x00000030u; // 800C9F88
  return; // 800C9F8C
}

// fn_800C9F90
void f_800C9F90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9F90
  c->r[0]=c->lr; // 800C9F94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9F98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9F9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C9FA0
  c->r[30]=c->r[3]|c->r[3]; // 800C9FA4
  c->lr=0x800C9FACu; f_800CA6A4(c); // 800C9FA8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800C9FAC
  c->r[3]=c->r[30]|c->r[30]; // 800C9FB0
  c->r[12]=R32(c->r[12]+0x00000068u); // 800C9FB4
  c->ctr=c->r[12]; // 800C9FB8
  if (true) { c->lr=0x800C9FC0u; dispatch(c,c->ctr); } // 800C9FBC
  c->r[3]=c->r[30]|c->r[30]; // 800C9FC0
  c->lr=0x800C9FC8u; f_801F4C0C(c); // 800C9FC4
  c->r[3]=c->r[30]|c->r[30]; // 800C9FC8
  c->lr=0x800C9FD0u; f_800CA87C(c); // 800C9FCC
  c->r[31]=0u+0x805D0000u; // 800C9FD0
  c->r[3]=c->r[31]+0x00003F6Cu; // 800C9FD4
  c->lr=0x800C9FDCu; f_80045264(c); // 800C9FD8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800C9FDC
  cmpu(c,0,c->r[0],0x0000001Au); // 800C9FE0
  if (!crb(c,2)) { goto L_800CA004; } // 800C9FE4
  c->r[3]=c->r[31]+0x00003F6Cu; // 800C9FE8
  c->lr=0x800C9FF0u; f_80037AF0(c); // 800C9FEC
  cmpu(c,0,c->r[3],c->r[30]); // 800C9FF0
  if (!crb(c,2)) { goto L_800CA004; } // 800C9FF4
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800C9FF8
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800C9FFC
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800CA000
L_800CA004:;
  c->r[0]=R8(c->r[30]+0x0000006Fu); // 800CA004
  c->r[31]=0u+0x00000001u; // 800CA008
  cmps(c,0,(int32_t)c->r[0],0); // 800CA00C
  if (!crb(c,2)) { goto L_800CA018; } // 800CA010
  c->r[31]=0u+0x00000000u; // 800CA014
L_800CA018:;
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800CA018
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 800CA01C
  cmps(c,0,(int32_t)c->r[0],128); // 800CA020
  if (!crb(c,2)) { goto L_800CA050; } // 800CA024
  c->r[3]=0u+0x80620000u; // 800CA028
  c->r[3]=c->r[3]+0x00007688u; // 800CA02C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800CA030
  cmps(c,0,(int32_t)c->r[3],0); // 800CA034
  if (crb(c,2)) { goto L_800CA050; } // 800CA038
  c->r[4]=0u+0x00000002u; // 800CA03C
  c->lr=0x800CA044u; f_80037670(c); // 800CA040
  cmps(c,0,(int32_t)c->r[3],0); // 800CA044
  if (crb(c,2)) { goto L_800CA050; } // 800CA048
  c->r[31]=0u+0x00000000u; // 800CA04C
L_800CA050:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CA050
  if (crb(c,2)) { goto L_800CA078; } // 800CA054
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 800CA058
  cmpu(c,0,c->r[4],0x000000FFu); // 800CA05C
  if (crb(c,2)) { goto L_800CA094; } // 800CA060
  c->r[3]=0u+0x80550000u; // 800CA064
  c->r[5]=0u+0x00000000u; // 800CA068
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CA06C
  c->lr=0x800CA074u; f_8018E2D4(c); // 800CA070
  goto L_800CA094; // 800CA074
L_800CA078:;
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 800CA078
  cmpu(c,0,c->r[4],0x000000FFu); // 800CA07C
  if (crb(c,2)) { goto L_800CA094; } // 800CA080
  c->r[3]=0u+0x80550000u; // 800CA084
  c->r[5]=0u+0x00000001u; // 800CA088
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CA08C
  c->lr=0x800CA094u; f_8018E2D4(c); // 800CA090
L_800CA094:;
  c->r[3]=c->r[30]|c->r[30]; // 800CA094
  c->lr=0x800CA09Cu; f_801F56F4(c); // 800CA098
  c->r[3]=c->r[30]|c->r[30]; // 800CA09C
  c->lr=0x800CA0A4u; f_800CA930(c); // 800CA0A0
  c->r[3]=c->r[30]|c->r[30]; // 800CA0A4
  c->lr=0x800CA0ACu; f_800CAB8C(c); // 800CA0A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA0AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA0B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CA0B4
  c->lr=c->r[0]; // 800CA0B8
  c->r[1]=c->r[1]+0x00000010u; // 800CA0BC
  return; // 800CA0C0
}

// fn_800CA0C4
void f_800CA0C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA0C4
  c->r[0]=c->lr; // 800CA0C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA0CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA0D0
  c->r[31]=c->r[3]|c->r[3]; // 800CA0D4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CA0D8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CA0DC
  c->lr=0x800CA0E4u; f_802501B0(c); // 800CA0E0
  c->r[3]=c->r[31]|c->r[31]; // 800CA0E4
  c->r[4]=0u+0x00000000u; // 800CA0E8
  c->lr=0x800CA0F0u; f_801F5244(c); // 800CA0EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA0F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA0F4
  c->lr=c->r[0]; // 800CA0F8
  c->r[1]=c->r[1]+0x00000010u; // 800CA0FC
  return; // 800CA100
}

// fn_800CA104
void f_800CA104(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA104
  c->r[0]=c->lr; // 800CA108
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA10C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA110
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CA114
  c->r[30]=c->r[3]|c->r[3]; // 800CA118
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CA11C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CA120
  c->lr=0x800CA128u; f_802501B0(c); // 800CA124
  c->r[3]=c->r[30]|c->r[30]; // 800CA128
  c->r[4]=0u+0x00000000u; // 800CA12C
  c->lr=0x800CA134u; f_801F5244(c); // 800CA130
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CA134
  c->r[3]=c->r[30]+0x0000002Cu; // 800CA138
  c->r[4]=c->r[4]+0x0000005Cu; // 800CA13C
  c->lr=0x800CA144u; f_800361A0(c); // 800CA140
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CA144
  c->r[3]=c->r[30]|c->r[30]; // 800CA148
  c->lr=0x800CA150u; f_801F5418(c); // 800CA14C
  cmps(c,0,(int32_t)c->r[3],0); // 800CA150
  if (!crb(c,0)) { goto L_800CA18C; } // 800CA154
  c->r[4]=R16(c->r[30]+0x000003BEu); // 800CA158
  c->r[0]=0u+0x00000001u; // 800CA15C
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800CA160
  c->r[3]=c->r[30]|c->r[30]; // 800CA164
  c->r[0]=c->r[4]|0x00000084u; // 800CA168
  {uint32_t ea=c->r[2]+0xFFFF9FE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA16C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800CA170
  c->r[4]=0u+0x00000064u; // 800CA174
  c->r[5]=0u+0x00000000u; // 800CA178
  c->r[6]=0u+0x00000000u; // 800CA17C
  c->r[7]=0u+0x00000000u; // 800CA180
  c->lr=0x800CA188u; f_801F4D44(c); // 800CA184
  goto L_800CA1C0; // 800CA188
L_800CA18C:;
  c->r[31]=0u+0x805D0000u; // 800CA18C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CA190
  c->lr=0x800CA198u; f_800447E4(c); // 800CA194
  cmpu(c,0,c->r[3],0x00000001u); // 800CA198
  if (!crb(c,2)) { goto L_800CA1AC; } // 800CA19C
  c->r[0]=0u+0x00000000u; // 800CA1A0
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800CA1A4
  goto L_800CA1B8; // 800CA1A8
L_800CA1AC:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CA1AC
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800CA1B0
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800CA1B4
L_800CA1B8:;
  c->r[3]=c->r[30]|c->r[30]; // 800CA1B8
  c->lr=0x800CA1C0u; f_801F5B14(c); // 800CA1BC
L_800CA1C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA1C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA1C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CA1C8
  c->lr=c->r[0]; // 800CA1CC
  c->r[1]=c->r[1]+0x00000010u; // 800CA1D0
  return; // 800CA1D4
}

// fn_800CA1D8
void f_800CA1D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA1D8
  c->r[0]=c->lr; // 800CA1DC
  W32(c->r[1]+0x00000074u,c->r[0]); // 800CA1E0
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800CA1E4
  c->r[31]=0u+0x803A0000u; // 800CA1E8
  c->r[31]=c->r[31]+0xFFFFDC80u; // 800CA1EC
  W32(c->r[1]+0x00000068u,c->r[30]); // 800CA1F0
  c->r[30]=c->r[3]|c->r[3]; // 800CA1F4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CA1F8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CA1FC
  c->lr=0x800CA204u; f_802501B0(c); // 800CA200
  c->r[3]=c->r[30]+0x00000038u; // 800CA204
  c->r[4]=c->r[30]+0x0000002Cu; // 800CA208
  c->lr=0x800CA210u; f_800361A0(c); // 800CA20C
  {uint32_t ea=c->r[2]+0xFFFF9FE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA210
  c->r[3]=0u+0x80550000u; // 800CA214
  c->r[3]=c->r[3]+0x00003D60u; // 800CA218
  c->r[4]=c->r[30]+0x00000038u; // 800CA21C
  c->f[2]=c->f[1]; // 800CA220
  c->r[5]=c->r[1]+0x00000008u; // 800CA224
  c->f[3]=c->f[1]; // 800CA228
  c->r[6]=0u+0x00000000u; // 800CA22C
  c->r[7]=0u+0x00000000u; // 800CA230
  c->lr=0x800CA238u; f_801D5488(c); // 800CA234
  c->r[0]=R32(c->r[30]+0x000003C4u); // 800CA238
  cmps(c,0,(int32_t)c->r[0],2); // 800CA23C
  if (crb(c,2)) { goto L_800CA260; } // 800CA240
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CA244
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CA248
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800CA24C
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CA250
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800CA254
  {uint32_t ea=c->r[3]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CA258
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800CA25C
L_800CA260:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CA260
  c->r[3]=c->r[30]+0x00000060u; // 800CA264
  c->r[4]=c->r[4]+0x00000068u; // 800CA268
  c->lr=0x800CA270u; f_800361A0(c); // 800CA26C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CA270
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CA274
  c->lr=0x800CA27Cu; f_802501B0(c); // 800CA278
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800CA27C
  c->r[5]=c->r[31]+0x0000003Cu; // 800CA280
  c->r[3]=c->r[30]+0x00000044u; // 800CA284
  c->r[4]=c->r[1]+0x00000054u; // 800CA288
  c->r[0]=c->r[0]|0x00002000u; // 800CA28C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800CA290
  c->r[7]=R32(c->r[31]+0x0000003Cu); // 800CA294
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CA298
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CA29C
  W32(c->r[1]+0x00000054u,c->r[7]); // 800CA2A0
  W32(c->r[1]+0x00000058u,c->r[6]); // 800CA2A4
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800CA2A8
  c->lr=0x800CA2B0u; f_800361A0(c); // 800CA2AC
  c->r[4]=c->r[31]+0x00000048u; // 800CA2B0
  c->r[6]=R32(c->r[31]+0x00000048u); // 800CA2B4
  c->r[5]=R32(c->r[4]+0x00000004u); // 800CA2B8
  c->r[3]=c->r[30]+0x00000050u; // 800CA2BC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800CA2C0
  c->r[4]=c->r[1]+0x00000048u; // 800CA2C4
  W32(c->r[1]+0x00000048u,c->r[6]); // 800CA2C8
  W32(c->r[1]+0x0000004Cu,c->r[5]); // 800CA2CC
  W32(c->r[1]+0x00000050u,c->r[0]); // 800CA2D0
  c->lr=0x800CA2D8u; f_800361A0(c); // 800CA2D4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CA2D8
  c->r[0]=0u+0x00000001u; // 800CA2DC
  c->r[4]=c->r[30]+0x0000002Cu; // 800CA2E0
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800CA2E4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CA2E8
  c->r[3]=c->r[3]+0x0000005Cu; // 800CA2EC
  c->lr=0x800CA2F4u; f_800361A0(c); // 800CA2F0
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CA2F4
  c->r[4]=0u+0x00000040u; // 800CA2F8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CA2FC
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800CA300
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CA304
  c->r[3]=c->r[3]+0x0000001Cu; // 800CA308
  c->lr=0x800CA310u; f_802518A4(c); // 800CA30C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CA310
  c->r[4]=0u+0x00000006u; // 800CA314
  c->r[3]=c->r[3]+0x0000001Cu; // 800CA318
  c->lr=0x800CA320u; f_80251824(c); // 800CA31C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800CA320
  c->r[3]=c->r[30]|c->r[30]; // 800CA324
  {uint32_t ea=c->r[2]+0xFFFF9FE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA328
  c->r[5]=0u+0x00000005u; // 800CA32C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800CA330
  c->r[6]=0u+0x00000001u; // 800CA334
  c->f[2]=c->f[1]; // 800CA338
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CA33C
  c->ctr=c->r[12]; // 800CA340
  if (true) { c->lr=0x800CA348u; dispatch(c,c->ctr); } // 800CA344
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CA348
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CA34C
  c->lr=0x800CA354u; f_802501B0(c); // 800CA350
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CA354
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800CA358
  cmps(c,0,(int32_t)c->r[0],0); // 800CA35C
  if (crb(c,2)) { goto L_800CA458; } // 800CA360
  c->r[3]=c->r[3]+0x00000068u; // 800CA364
  c->r[4]=c->r[30]+0x00000060u; // 800CA368
  c->lr=0x800CA370u; f_800361A0(c); // 800CA36C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CA370
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CA374
  c->lr=0x800CA37Cu; f_8025037C(c); // 800CA378
  c->r[6]=R32(c->r[30]+0x00000394u); // 800CA37C
  c->r[3]=c->r[1]+0x00000030u; // 800CA380
  c->r[4]=c->r[30]+0x00000060u; // 800CA384
  c->r[5]=c->r[1]+0x0000003Cu; // 800CA388
  c->r[6]=c->r[6]+0x000000B0u; // 800CA38C
  c->r[7]=0u+0x00000000u; // 800CA390
  c->lr=0x800CA398u; f_8002BE64(c); // 800CA394
  c->r[0]=R32(c->r[30]+0x000003C4u); // 800CA398
  cmps(c,0,(int32_t)c->r[0],0); // 800CA39C
  if (crb(c,2)) { goto L_800CA404; } // 800CA3A0
  c->r[3]=c->r[30]+0x00000060u; // 800CA3A4
  c->r[4]=c->r[31]+0x00000000u; // 800CA3A8
  c->lr=0x800CA3B0u; f_800361A0(c); // 800CA3AC
  {uint32_t ea=c->r[30]+0x000003C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CA3B0
  c->r[4]=c->r[30]+0x00000060u; // 800CA3B4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CA3B8
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[0]);} // 800CA3BC
  c->r[3]=c->r[3]+0x00000068u; // 800CA3C0
  c->lr=0x800CA3C8u; f_800361A0(c); // 800CA3C4
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800CA3C8
  c->r[4]=c->r[30]|c->r[30]; // 800CA3CC
  c->r[0]=R32(c->r[30]+0x00000030u); // 800CA3D0
  c->r[7]=c->r[1]+0x00000024u; // 800CA3D4
  c->r[6]=0u+0x00000023u; // 800CA3D8
  c->r[8]=0u+0x00000000u; // 800CA3DC
  W32(c->r[1]+0x00000024u,c->r[3]); // 800CA3E0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800CA3E4
  c->r[0]=R32(c->r[30]+0x00000034u); // 800CA3E8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800CA3EC
  c->r[3]=R32(c->r[30]+0x00000438u); // 800CA3F0
  c->r[5]=R32(c->r[30]+0x00000394u); // 800CA3F4
  {uint32_t ea=c->r[30]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA3F8
  c->lr=0x800CA400u; f_801FA6A4(c); // 800CA3FC
  goto L_800CA444; // 800CA400
L_800CA404:;
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 800CA404
  c->r[3]=0u+0x805D0000u; // 800CA408
  c->r[0]=R32(c->r[30]+0x00000030u); // 800CA40C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800CA410
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA414
  c->r[4]=c->r[30]|c->r[30]; // 800CA418
  W32(c->r[1]+0x00000018u,c->r[5]); // 800CA41C
  c->r[7]=c->r[1]+0x00000018u; // 800CA420
  c->r[6]=0u+0x00000023u; // 800CA424
  c->r[8]=0u+0x00000000u; // 800CA428
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CA42C
  c->r[0]=R32(c->r[30]+0x00000034u); // 800CA430
  W32(c->r[1]+0x00000020u,c->r[0]); // 800CA434
  c->r[3]=R32(c->r[30]+0x00000438u); // 800CA438
  c->r[5]=R32(c->r[30]+0x00000394u); // 800CA43C
  c->lr=0x800CA444u; f_801FA6A4(c); // 800CA440
L_800CA444:;
  c->r[3]=R32(c->r[30]+0x00000438u); // 800CA444
  c->r[5]=c->r[30]+0x00000044u; // 800CA448
  c->r[6]=c->r[31]+0x00000000u; // 800CA44C
  c->r[4]=0u+0x00000000u; // 800CA450
  c->lr=0x800CA458u; f_801FBEC0(c); // 800CA454
L_800CA458:;
  c->r[3]=c->r[30]|c->r[30]; // 800CA458
  c->r[4]=0u+0x00000000u; // 800CA45C
  c->lr=0x800CA464u; f_801F7C00(c); // 800CA460
  c->r[7]=0u+0x803D0000u; // 800CA464
  {uint32_t ea=c->r[7]+0x00001340u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CA468
  c->r[3]=c->r[30]|c->r[30]; // 800CA46C
  c->r[4]=c->r[1]+0x0000000Cu; // 800CA470
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CA474
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CA478
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800CA47C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800CA480
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA484
  c->lr=0x800CA48Cu; f_800CA4A4(c); // 800CA488
  c->r[0]=R32(c->r[1]+0x00000074u); // 800CA48C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800CA490
  c->r[30]=R32(c->r[1]+0x00000068u); // 800CA494
  c->lr=c->r[0]; // 800CA498
  c->r[1]=c->r[1]+0x00000070u; // 800CA49C
  return; // 800CA4A0
}

// fn_800CA4A4
void f_800CA4A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA4A4
  c->r[0]=c->lr; // 800CA4A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA4AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA4B0
  c->r[31]=c->r[4]|c->r[4]; // 800CA4B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CA4B8
  c->r[30]=c->r[3]|c->r[3]; // 800CA4BC
  c->r[3]=c->r[31]|c->r[31]; // 800CA4C0
  c->lr=0x800CA4C8u; f_802B9FDC(c); // 800CA4C4
  cmps(c,0,(int32_t)c->r[3],0); // 800CA4C8
  if (crb(c,2)) { goto L_800CA4E8; } // 800CA4CC
  c->r[3]=R32(c->r[31]+0x00000000u); // 800CA4D0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800CA4D4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800CA4D8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA4DC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CA4E0
  W32(c->r[30]+0x00000024u,c->r[0]); // 800CA4E4
L_800CA4E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA4E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA4EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CA4F0
  c->lr=c->r[0]; // 800CA4F4
  c->r[1]=c->r[1]+0x00000010u; // 800CA4F8
  return; // 800CA4FC
}

// fn_800CA500
void f_800CA500(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA500
  c->r[0]=c->lr; // 800CA504
  c->r[4]=0u+0x00000000u; // 800CA508
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CA50C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CA510
  c->r[31]=c->r[3]|c->r[3]; // 800CA514
  c->r[3]=R32(c->r[3]+0x00000438u); // 800CA518
  c->lr=0x800CA520u; f_801FAF00(c); // 800CA51C
  cmps(c,0,(int32_t)c->r[3],0); // 800CA520
  if (!crb(c,2)) { goto L_800CA5D0; } // 800CA524
  c->r[0]=0u+0x00000000u; // 800CA528
  c->r[3]=c->r[31]|c->r[31]; // 800CA52C
  W8(c->r[31]+0x00000078u,c->r[0]); // 800CA530
  c->r[4]=0u+0x0000001Au; // 800CA534
  c->lr=0x800CA53Cu; f_801F5AB4(c); // 800CA538
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800CA53C
  c->r[3]=c->r[31]+0x0000002Cu; // 800CA540
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CA544
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800CA548
  c->r[0]=c->r[0]|0x00000004u; // 800CA54C
  c->r[4]=c->r[4]+0x0000005Cu; // 800CA550
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CA554
  c->lr=0x800CA55Cu; f_800361A0(c); // 800CA558
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CA55C
  c->r[3]=c->r[31]+0x00000060u; // 800CA560
  c->r[4]=c->r[4]+0x00000068u; // 800CA564
  c->lr=0x800CA56Cu; f_800361A0(c); // 800CA568
  {uint32_t ea=c->r[2]+0xFFFF9FE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA56C
  c->r[3]=c->r[31]|c->r[31]; // 800CA570
  c->r[4]=0u+0x00000000u; // 800CA574
  c->lr=0x800CA57Cu; f_800CA620(c); // 800CA578
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800CA57C
  c->r[3]=0u+0x805D0000u; // 800CA580
  c->r[0]=R32(c->r[31]+0x00000030u); // 800CA584
  c->r[3]=c->r[3]+0x00006CF8u; // 800CA588
  c->r[4]=c->r[1]+0x00000008u; // 800CA58C
  c->r[5]=0u+0x00040000u; // 800CA590
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CA594
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CA598
  c->r[0]=R32(c->r[31]+0x00000034u); // 800CA59C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CA5A0
  c->lr=0x800CA5A8u; f_802236F8(c); // 800CA5A4
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800CA5A8
  c->r[3]=c->r[31]|c->r[31]; // 800CA5AC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CA5B0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CA5B4
  c->ctr=c->r[12]; // 800CA5B8
  if (true) { c->lr=0x800CA5C0u; dispatch(c,c->ctr); } // 800CA5BC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CA5C0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CA5C4
  c->lr=0x800CA5CCu; f_8025037C(c); // 800CA5C8
  goto L_800CA600; // 800CA5CC
L_800CA5D0:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CA5D0
  c->r[3]=c->r[31]+0x0000002Cu; // 800CA5D4
  c->r[4]=c->r[4]+0x0000005Cu; // 800CA5D8
  c->lr=0x800CA5E0u; f_800361A0(c); // 800CA5DC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CA5E0
  c->r[3]=c->r[31]+0x00000060u; // 800CA5E4
  c->r[4]=c->r[4]+0x00000068u; // 800CA5E8
  c->lr=0x800CA5F0u; f_800361A0(c); // 800CA5EC
  {uint32_t ea=c->r[2]+0xFFFF9FE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA5F0
  c->r[3]=c->r[31]|c->r[31]; // 800CA5F4
  c->r[4]=0u+0x00000000u; // 800CA5F8
  c->lr=0x800CA600u; f_800CA620(c); // 800CA5FC
L_800CA600:;
  c->r[3]=c->r[31]|c->r[31]; // 800CA600
  c->r[4]=0u+0x00000000u; // 800CA604
  c->lr=0x800CA60Cu; f_801F7C00(c); // 800CA608
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CA60C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CA610
  c->lr=c->r[0]; // 800CA614
  c->r[1]=c->r[1]+0x00000020u; // 800CA618
  return; // 800CA61C
}

// fn_800CA620
void f_800CA620(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800CA620
  c->r[4]=c->r[3]+c->r[0]; // 800CA624
  c->r[3]=R32(c->r[4]+0x00000394u); // 800CA628
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 800CA62C
  c->r[3]=R32(c->r[4]+0x00000394u); // 800CA630
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[1]);} // 800CA634
  c->r[3]=R32(c->r[4]+0x00000394u); // 800CA638
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 800CA63C
  return; // 800CA640
}

// fn_800CA644
void f_800CA644(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA644
  c->r[0]=c->lr; // 800CA648
  c->r[4]=0u+0x000000E1u; // 800CA64C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA650
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA654
  c->r[31]=c->r[3]|c->r[3]; // 800CA658
  c->r[3]=c->r[3]+0x00000210u; // 800CA65C
  c->lr=0x800CA664u; f_80221630(c); // 800CA660
  cmps(c,0,(int32_t)c->r[3],0); // 800CA664
  if (!crb(c,2)) { goto L_800CA674; } // 800CA668
  c->r[3]=0u+0x00000000u; // 800CA66C
  goto L_800CA690; // 800CA670
L_800CA674:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CA674
  c->r[3]=0u+0x000004D5u; // 800CA678
  c->r[5]=0u+0x00000000u; // 800CA67C
  c->r[4]=c->r[4]+0x0000010Cu; // 800CA680
  c->lr=0x800CA688u; f_8024EE50(c); // 800CA684
  c->r[0]=cntlz(c->r[3]); // 800CA688
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CA68C
L_800CA690:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA690
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA694
  c->lr=c->r[0]; // 800CA698
  c->r[1]=c->r[1]+0x00000010u; // 800CA69C
  return; // 800CA6A0
}

// fn_800CA6A4
void f_800CA6A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA6A4
  c->r[0]=c->lr; // 800CA6A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA6AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA6B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CA6B4
  c->r[30]=c->r[3]|c->r[3]; // 800CA6B8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000003BCu); // 800CA6BC
  cmps(c,0,(int32_t)c->r[0],102); // 800CA6C0
  if (crb(c,2)) { goto L_800CA718; } // 800CA6C4
  c->r[31]=0u+0x805D0000u; // 800CA6C8
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CA6CC
  c->lr=0x800CA6D4u; f_80045264(c); // 800CA6D0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800CA6D4
  cmpu(c,0,c->r[0],0x0000001Au); // 800CA6D8
  if (!crb(c,2)) { goto L_800CA718; } // 800CA6DC
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CA6E0
  c->lr=0x800CA6E8u; f_80037AF0(c); // 800CA6E4
  cmpu(c,0,c->r[3],c->r[30]); // 800CA6E8
  if (!crb(c,2)) { goto L_800CA718; } // 800CA6EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800CA6F0
  cmps(c,0,(int32_t)c->r[0],101); // 800CA6F4
  if (crb(c,2)) { goto L_800CA718; } // 800CA6F8
  {uint32_t ea=c->r[2]+0xFFFF9FE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA6FC
  c->r[3]=c->r[30]|c->r[30]; // 800CA700
  c->r[4]=0u+0x00000065u; // 800CA704
  c->r[5]=0u+0x00000000u; // 800CA708
  c->r[6]=0u+0x00000000u; // 800CA70C
  c->r[7]=0u+0x00000000u; // 800CA710
  c->lr=0x800CA718u; f_801F4D44(c); // 800CA714
L_800CA718:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA718
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA71C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CA720
  c->lr=c->r[0]; // 800CA724
  c->r[1]=c->r[1]+0x00000010u; // 800CA728
  return; // 800CA72C
}

// fn_800CA730
void f_800CA730(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA730
  c->r[0]=c->lr; // 800CA734
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CA738
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800CA73C
  c->r[31]=0u+0x803D0000u; // 800CA740
  c->r[31]=c->r[31]+0x00001340u; // 800CA744
  W32(c->r[1]+0x00000038u,c->r[30]); // 800CA748
  c->r[30]=c->r[3]|c->r[3]; // 800CA74C
  c->lr=0x800CA754u; f_801F4F28(c); // 800CA750
  c->r[3]=R32(c->r[30]+0x000003C0u); // 800CA754
  cmps(c,0,(int32_t)c->r[3],101); // 800CA758
  if (crb(c,2)) { goto L_800CA7AC; } // 800CA75C
  if (!crb(c,0)) { goto L_800CA770; } // 800CA760
  cmps(c,0,(int32_t)c->r[3],100); // 800CA764
  if (!crb(c,0)) { goto L_800CA77C; } // 800CA768
  goto L_800CA810; // 800CA76C
L_800CA770:;
  cmps(c,0,(int32_t)c->r[3],103); // 800CA770
  if (!crb(c,0)) { goto L_800CA810; } // 800CA774
  goto L_800CA7E4; // 800CA778
L_800CA77C:;
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800CA77C
  c->r[5]=c->r[31]+0x0000000Cu; // 800CA780
  c->r[3]=c->r[30]|c->r[30]; // 800CA784
  c->r[4]=c->r[1]+0x00000020u; // 800CA788
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800CA78C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CA790
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CA794
  W32(c->r[1]+0x00000020u,c->r[7]); // 800CA798
  W32(c->r[1]+0x00000024u,c->r[6]); // 800CA79C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800CA7A0
  c->lr=0x800CA7A8u; f_800CA4A4(c); // 800CA7A4
  goto L_800CA810; // 800CA7A8
L_800CA7AC:;
  c->r[0]=0u+0x00000000u; // 800CA7AC
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800CA7B0
  c->r[5]=c->r[31]+0x00000018u; // 800CA7B4
  c->r[3]=c->r[30]|c->r[30]; // 800CA7B8
  W8(c->r[30]+0x00000078u,c->r[0]); // 800CA7BC
  c->r[4]=c->r[1]+0x00000014u; // 800CA7C0
  c->r[7]=R32(c->r[31]+0x00000018u); // 800CA7C4
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CA7C8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CA7CC
  W32(c->r[1]+0x00000014u,c->r[7]); // 800CA7D0
  W32(c->r[1]+0x00000018u,c->r[6]); // 800CA7D4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CA7D8
  c->lr=0x800CA7E0u; f_800CA4A4(c); // 800CA7DC
  goto L_800CA810; // 800CA7E0
L_800CA7E4:;
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800CA7E4
  c->r[5]=c->r[31]+0x00000024u; // 800CA7E8
  c->r[3]=c->r[30]|c->r[30]; // 800CA7EC
  c->r[4]=c->r[1]+0x00000008u; // 800CA7F0
  c->r[7]=R32(c->r[31]+0x00000024u); // 800CA7F4
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CA7F8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CA7FC
  W32(c->r[1]+0x00000008u,c->r[7]); // 800CA800
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800CA804
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CA808
  c->lr=0x800CA810u; f_800CA4A4(c); // 800CA80C
L_800CA810:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800CA810
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800CA814
  c->r[30]=R32(c->r[1]+0x00000038u); // 800CA818
  c->lr=c->r[0]; // 800CA81C
  c->r[1]=c->r[1]+0x00000040u; // 800CA820
  return; // 800CA824
}

// fn_800CA828
void f_800CA828(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA828
  c->r[0]=c->lr; // 800CA82C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CA830
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CA834
  c->r[31]=c->r[3]|c->r[3]; // 800CA838
  c->lr=0x800CA840u; f_801F51B8(c); // 800CA83C
  c->r[7]=0u+0x803D0000u; // 800CA840
  {uint32_t ea=c->r[7]+0x00001370u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CA844
  c->r[3]=c->r[31]|c->r[31]; // 800CA848
  c->r[4]=c->r[1]+0x00000008u; // 800CA84C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CA850
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CA854
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CA858
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800CA85C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CA860
  c->lr=0x800CA868u; f_800CA4A4(c); // 800CA864
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CA868
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CA86C
  c->lr=c->r[0]; // 800CA870
  c->r[1]=c->r[1]+0x00000020u; // 800CA874
  return; // 800CA878
}

// fn_800CA87C
void f_800CA87C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA87C
  c->r[0]=c->lr; // 800CA880
  c->r[5]=0u+0x80620000u; // 800CA884
  c->r[4]=0u+0x00000002u; // 800CA888
  W32(c->r[1]+0x00000094u,c->r[0]); // 800CA88C
  c->r[5]=c->r[5]+0x00007688u; // 800CA890
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800CA894
  W32(c->r[1]+0x00000088u,c->r[30]); // 800CA898
  c->r[30]=c->r[3]|c->r[3]; // 800CA89C
  c->r[3]=R32(c->r[5]+0x00000014u); // 800CA8A0
  c->lr=0x800CA8A8u; f_80037670(c); // 800CA8A4
  cmps(c,0,(int32_t)c->r[3],0); // 800CA8A8
  if (!crb(c,2)) { goto L_800CA918; } // 800CA8AC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CA8B0
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800CA8B4
  cmps(c,0,(int32_t)c->r[0],0); // 800CA8B8
  if (!crb(c,2)) { goto L_800CA918; } // 800CA8BC
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800CA8C0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800CA8C4
  if (crb(c,2)) { goto L_800CA918; } // 800CA8C8
  {uint32_t ea=c->r[2]+0xFFFF9FECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CA8CC
  c->r[3]=c->r[1]+0x00000008u; // 800CA8D0
  c->r[4]=c->r[30]+0x0000002Cu; // 800CA8D4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800CA8D8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800CA8DC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800CA8E0
  c->lr=0x800CA8E8u; f_800361A0(c); // 800CA8E4
  c->r[31]=0u+0x80550000u; // 800CA8E8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA8EC
  c->r[31]=c->r[31]+0x00003D60u; // 800CA8F0
  c->r[5]=c->r[30]|c->r[30]; // 800CA8F4
  c->r[3]=c->r[31]+0x00000010u; // 800CA8F8
  c->r[6]=c->r[1]+0x00000008u; // 800CA8FC
  c->r[7]=c->r[1]+0x00000020u; // 800CA900
  c->r[4]=0u+0x000001FFu; // 800CA904
  c->lr=0x800CA90Cu; f_80226910(c); // 800CA908
  c->r[3]=c->r[31]+0x00000010u; // 800CA90C
  c->r[4]=c->r[1]+0x00000020u; // 800CA910
  c->lr=0x800CA918u; f_80226D68(c); // 800CA914
L_800CA918:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800CA918
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800CA91C
  c->r[30]=R32(c->r[1]+0x00000088u); // 800CA920
  c->lr=c->r[0]; // 800CA924
  c->r[1]=c->r[1]+0x00000090u; // 800CA928
  return; // 800CA92C
}

// fn_800CA930
void f_800CA930(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA930
  c->r[0]=c->lr; // 800CA934
  W32(c->r[1]+0x00000074u,c->r[0]); // 800CA938
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800CA93C
  c->r[31]=c->r[3]|c->r[3]; // 800CA940
  W32(c->r[1]+0x00000068u,c->r[30]); // 800CA944
  c->r[0]=R32(c->r[3]+0x00000074u); // 800CA948
  cmpu(c,0,c->r[0],0x000000FFu); // 800CA94C
  if (!crb(c,2)) { goto L_800CA9D0; } // 800CA950
  c->r[0]=R8(c->r[3]+0x00000078u); // 800CA954
  cmps(c,0,(int32_t)c->r[0],0); // 800CA958
  if (crb(c,2)) { goto L_800CA9D0; } // 800CA95C
  c->r[4]=0u+0x803A0000u; // 800CA960
  c->r[30]=0u+0x80550000u; // 800CA964
  c->r[4]=c->r[4]+0xFFFFDCFCu; // 800CA968
  c->r[5]=0u+0x00000000u; // 800CA96C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800CA970
  c->r[6]=0u+0x00000000u; // 800CA974
  c->r[4]=c->r[4]+0x00000016u; // 800CA978
  c->lr=0x800CA980u; f_8018D3E4(c); // 800CA97C
  cmpu(c,0,c->r[3],0x000000FFu); // 800CA980
  W32(c->r[31]+0x00000074u,c->r[3]); // 800CA984
  if (crb(c,2)) { goto L_800CA9D0; } // 800CA988
  c->r[4]=R32(c->r[31]+0x00000060u); // 800CA98C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800CA990
  c->r[0]=R32(c->r[31]+0x00000064u); // 800CA994
  c->r[5]=c->r[1]+0x0000002Cu; // 800CA998
  c->r[6]=c->r[1]+0x00000020u; // 800CA99C
  W32(c->r[1]+0x00000020u,c->r[4]); // 800CA9A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CA9A4
  c->r[0]=R32(c->r[31]+0x00000068u); // 800CA9A8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800CA9AC
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800CA9B0
  c->r[0]=R32(c->r[31]+0x00000030u); // 800CA9B4
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800CA9B8
  W32(c->r[1]+0x00000030u,c->r[0]); // 800CA9BC
  c->r[0]=R32(c->r[31]+0x00000034u); // 800CA9C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CA9C4
  c->r[4]=R32(c->r[31]+0x00000074u); // 800CA9C8
  c->lr=0x800CA9D0u; f_8018DBD0(c); // 800CA9CC
L_800CA9D0:;
  c->r[4]=R32(c->r[31]+0x00000074u); // 800CA9D0
  cmpu(c,0,c->r[4],0x000000FFu); // 800CA9D4
  if (crb(c,2)) { goto L_800CAA48; } // 800CA9D8
  c->r[0]=R8(c->r[31]+0x00000078u); // 800CA9DC
  cmps(c,0,(int32_t)c->r[0],0); // 800CA9E0
  if (crb(c,2)) { goto L_800CAA34; } // 800CA9E4
  c->r[4]=R32(c->r[31]+0x00000060u); // 800CA9E8
  c->r[3]=0u+0x80550000u; // 800CA9EC
  c->r[0]=R32(c->r[31]+0x00000064u); // 800CA9F0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CA9F4
  c->r[5]=c->r[1]+0x00000014u; // 800CA9F8
  c->r[6]=c->r[1]+0x00000008u; // 800CA9FC
  W32(c->r[1]+0x00000008u,c->r[4]); // 800CAA00
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CAA04
  c->r[0]=R32(c->r[31]+0x00000068u); // 800CAA08
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CAA0C
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800CAA10
  c->r[0]=R32(c->r[31]+0x00000030u); // 800CAA14
  W32(c->r[1]+0x00000014u,c->r[4]); // 800CAA18
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CAA1C
  c->r[0]=R32(c->r[31]+0x00000034u); // 800CAA20
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CAA24
  c->r[4]=R32(c->r[31]+0x00000074u); // 800CAA28
  c->lr=0x800CAA30u; f_8018DBD0(c); // 800CAA2C
  goto L_800CAA48; // 800CAA30
L_800CAA34:;
  c->r[3]=0u+0x80550000u; // 800CAA34
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CAA38
  c->lr=0x800CAA40u; f_8018D738(c); // 800CAA3C
  c->r[0]=0u+0x000000FFu; // 800CAA40
  W32(c->r[31]+0x00000074u,c->r[0]); // 800CAA44
L_800CAA48:;
  c->r[0]=R32(c->r[31]+0x0000007Cu); // 800CAA48
  cmpu(c,0,c->r[0],0x000000FFu); // 800CAA4C
  if (crb(c,2)) { goto L_800CAAC4; } // 800CAA50
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CAA54
  c->r[5]=c->r[1]+0x00000038u; // 800CAA58
  c->r[4]=R8(c->r[31]+0x00000079u); // 800CAA5C
  c->r[6]=0u+0x00000001u; // 800CAA60
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CAA64
  c->lr=0x800CAA6Cu; f_80257074(c); // 800CAA68
  c->r[30]=0u+0x80550000u; // 800CAA6C
  c->r[4]=R32(c->r[31]+0x0000007Cu); // 800CAA70
  c->r[3]=c->r[30]+0xFFFFC848u; // 800CAA74
  c->r[5]=c->r[1]+0x00000038u; // 800CAA78
  c->lr=0x800CAA80u; f_8018DEB8(c); // 800CAA7C
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800CAA80
  cmps(c,0,(int32_t)c->r[0],0); // 800CAA84
  if (crb(c,2)) { goto L_800CAAB0; } // 800CAA88
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CAA8C
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800CAA90
  cmps(c,0,(int32_t)c->r[0],0); // 800CAA94
  if (crb(c,2)) { goto L_800CAAB0; } // 800CAA98
  c->r[4]=R32(c->r[31]+0x0000007Cu); // 800CAA9C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800CAAA0
  c->r[5]=0u+0x00000000u; // 800CAAA4
  c->lr=0x800CAAACu; f_8018E2D4(c); // 800CAAA8
  goto L_800CAAC4; // 800CAAAC
L_800CAAB0:;
  c->r[3]=0u+0x80550000u; // 800CAAB0
  c->r[4]=R32(c->r[31]+0x0000007Cu); // 800CAAB4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CAAB8
  c->r[5]=0u+0x00000001u; // 800CAABC
  c->lr=0x800CAAC4u; f_8018E2D4(c); // 800CAAC0
L_800CAAC4:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800CAAC4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800CAAC8
  c->r[30]=R32(c->r[1]+0x00000068u); // 800CAACC
  c->lr=c->r[0]; // 800CAAD0
  c->r[1]=c->r[1]+0x00000070u; // 800CAAD4
  return; // 800CAAD8
}

// fn_800CAADC
void f_800CAADC(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800CAADC
}

// fn_800CAAE0
void f_800CAAE0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000007Cu); // 800CAAE0
  return; // 800CAAE4
}

// fn_800CAAE8
void f_800CAAE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAAE8
  c->r[0]=c->lr; // 800CAAEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAAF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CAAF4
  c->r[31]=c->r[3]|c->r[3]; // 800CAAF8
  c->r[3]=c->r[3]+0x00000210u; // 800CAAFC
  c->lr=0x800CAB04u; f_8004BAD4(c); // 800CAB00
  cmps(c,0,(int32_t)c->r[3],0); // 800CAB04
  if (crb(c,2)) { goto L_800CAB78; } // 800CAB08
  c->r[0]=R32(c->r[31]+0x00000210u); // 800CAB0C
  c->r[4]=c->r[31]|c->r[31]; // 800CAB10
  c->r[3]=c->r[31]+0x00000210u; // 800CAB14
  c->r[0]=c->r[0]|0xAA000000u; // 800CAB18
  W32(c->r[31]+0x00000210u,c->r[0]); // 800CAB1C
  c->lr=0x800CAB24u; f_80043E44(c); // 800CAB20
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAB24
  c->r[3]=c->r[31]+0x00000210u; // 800CAB28
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CAB2C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CAB30
  c->lr=0x800CAB38u; f_80043E34(c); // 800CAB34
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CAB38
  c->r[4]=0u+0x803A0000u; // 800CAB3C
  c->r[4]=c->r[4]+0xFFFFDCFCu; // 800CAB40
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CAB44
  c->r[4]=c->r[4]+0x0000000Du; // 800CAB48
  c->lr=0x800CAB50u; f_80256EC4(c); // 800CAB4C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CAB50
  c->r[5]=c->r[3]|c->r[3]; // 800CAB54
  c->r[3]=c->r[31]+0x00000210u; // 800CAB58
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800CAB5C
  c->lr=0x800CAB64u; f_8004BAC8(c); // 800CAB60
  {uint32_t ea=c->r[2]+0xFFFF9FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAB64
  c->r[3]=c->r[31]+0x00000210u; // 800CAB68
  c->f[2]=c->f[1]; // 800CAB6C
  c->f[3]=c->f[1]; // 800CAB70
  c->lr=0x800CAB78u; f_80043E24(c); // 800CAB74
L_800CAB78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAB78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CAB7C
  c->lr=c->r[0]; // 800CAB80
  c->r[1]=c->r[1]+0x00000010u; // 800CAB84
  return; // 800CAB88
}

// fn_800CAB8C
void f_800CAB8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAB8C
  c->r[0]=c->lr; // 800CAB90
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CAB94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CAB98
  c->r[31]=c->r[3]|c->r[3]; // 800CAB9C
  c->r[3]=c->r[3]+0x00000210u; // 800CABA0
  c->lr=0x800CABA8u; f_80221698(c); // 800CABA4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CABA8
  cmps(c,0,(int32_t)c->r[3],0); // 800CABAC
  if (crb(c,2)) { goto L_800CABD0; } // 800CABB0
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800CABB4
  cmps(c,0,(int32_t)c->r[0],0); // 800CABB8
  if (crb(c,2)) { goto L_800CABD0; } // 800CABBC
  c->r[0]=R32(c->r[31]+0x00000210u); // 800CABC0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800CABC4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800CABC8
  goto L_800CAC1C; // 800CABCC
L_800CABD0:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800CABD0
  c->r[3]=c->r[1]+0x00000008u; // 800CABD4
  c->r[6]=R32(c->r[31]+0x00000394u); // 800CABD8
  c->r[4]=c->r[3]|c->r[3]; // 800CABDC
  c->r[0]=c->r[0]|0x80000000u; // 800CABE0
  {uint32_t ea=c->r[2]+0xFFFF9FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CABE4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800CABE8
  c->r[5]=R32(c->r[6]+0x00000074u); // 800CABEC
  c->r[0]=R32(c->r[6]+0x00000078u); // 800CABF0
  W32(c->r[1]+0x00000008u,c->r[5]); // 800CABF4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CABF8
  c->r[0]=R32(c->r[6]+0x0000007Cu); // 800CABFC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CAC00
  c->lr=0x800CAC08u; f_80296A94(c); // 800CAC04
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAC08
  c->r[3]=c->r[31]+0x00000210u; // 800CAC0C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CAC10
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CAC14
  c->lr=0x800CAC1Cu; f_80043E24(c); // 800CAC18
L_800CAC1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CAC1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CAC20
  c->lr=c->r[0]; // 800CAC24
  c->r[1]=c->r[1]+0x00000020u; // 800CAC28
  return; // 800CAC2C
}

// fn_800CAC30
void f_800CAC30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAC30
  c->r[0]=c->lr; // 800CAC34
  cmps(c,0,(int32_t)c->r[3],0); // 800CAC38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAC3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CAC40
  c->r[31]=c->r[4]|c->r[4]; // 800CAC44
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CAC48
  c->r[30]=c->r[3]|c->r[3]; // 800CAC4C
  if (crb(c,2)) { goto L_800CAC6C; } // 800CAC50
  c->r[4]=0u+0x00000000u; // 800CAC54
  c->lr=0x800CAC5Cu; f_8026A06C(c); // 800CAC58
  cmps(c,0,(int32_t)c->r[31],0); // 800CAC5C
  if (!crb(c,1)) { goto L_800CAC6C; } // 800CAC60
  c->r[3]=c->r[30]|c->r[30]; // 800CAC64
  c->lr=0x800CAC6Cu; f_8026A268(c); // 800CAC68
L_800CAC6C:;
  c->r[3]=c->r[30]|c->r[30]; // 800CAC6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CAC70
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CAC74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAC78
  c->lr=c->r[0]; // 800CAC7C
  c->r[1]=c->r[1]+0x00000010u; // 800CAC80
  return; // 800CAC84
}

// fn_800CAC88
void f_800CAC88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAC88
  c->r[0]=c->lr; // 800CAC8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CAC90
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CAC94
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CAC98
  c->r[4]=0u+0x00000000u; // 800CAC9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CACA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CACA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CACA8
  c->r[29]=c->r[3]|c->r[3]; // 800CACAC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CACB0
  c->lr=0x800CACB8u; f_801F57D0(c); // 800CACB4
  c->r[3]=c->r[29]|c->r[29]; // 800CACB8
  c->r[4]=0u+0x00000001u; // 800CACBC
  c->lr=0x800CACC4u; f_801F57D0(c); // 800CACC0
  c->r[3]=c->r[29]|c->r[29]; // 800CACC4
  c->r[4]=0u+0x00000002u; // 800CACC8
  c->lr=0x800CACD0u; f_801F57D0(c); // 800CACCC
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800CACD0
  c->r[3]=c->r[29]|c->r[29]; // 800CACD4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800CACD8
  c->ctr=c->r[12]; // 800CACDC
  if (true) { c->lr=0x800CACE4u; dispatch(c,c->ctr); } // 800CACE0
  c->r[3]=c->r[29]|c->r[29]; // 800CACE4
  c->lr=0x800CACECu; f_801F4B94(c); // 800CACE8
  c->r[3]=0u+0x00000003u; // 800CACEC
  c->r[0]=0u+0x0000002Du; // 800CACF0
  W8(c->r[29]+0x0000006Cu,c->r[3]); // 800CACF4
  c->r[3]=c->r[29]+0x00000018u; // 800CACF8
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CACFC
  W8(c->r[29]+0x0000006Du,c->r[0]); // 800CAD00
  c->lr=0x800CAD08u; f_80037668(c); // 800CAD04
  c->r[4]=c->r[3]|c->r[3]; // 800CAD08
  c->r[3]=c->r[29]+0x00000014u; // 800CAD0C
  c->lr=0x800CAD14u; f_80037088(c); // 800CAD10
  c->r[4]=c->r[3]|c->r[3]; // 800CAD14
  c->r[3]=c->r[29]+0x00000010u; // 800CAD18
  c->lr=0x800CAD20u; f_80037088(c); // 800CAD1C
  c->r[4]=c->r[3]|c->r[3]; // 800CAD20
  c->r[3]=c->r[29]+0x0000000Cu; // 800CAD24
  c->lr=0x800CAD2Cu; f_80037088(c); // 800CAD28
  c->r[0]=R16(c->r[29]+0x000003BEu); // 800CAD2C
  c->r[3]=0u+0x80550000u; // 800CAD30
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAD34
  c->r[3]=c->r[3]+0x00003D60u; // 800CAD38
  c->r[0]=c->r[0]|0x00000814u; // 800CAD3C
  {uint32_t ea=c->r[29]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800CAD40
  c->f[3]=c->f[1]; // 800CAD44
  W16(c->r[29]+0x000003BEu,c->r[0]); // 800CAD48
  {uint32_t ea=c->r[2]+0xFFFFA004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CAD4C
  c->r[4]=c->r[29]+0x0000002Cu; // 800CAD50
  c->r[5]=c->r[29]+0x00000030u; // 800CAD54
  c->r[6]=0u+0x00000000u; // 800CAD58
  c->r[7]=0u+0x00000000u; // 800CAD5C
  c->lr=0x800CAD64u; f_801D5488(c); // 800CAD60
  c->r[4]=R32(c->r[29]+0x00000394u); // 800CAD64
  c->r[3]=c->r[29]|c->r[29]; // 800CAD68
  c->lr=0x800CAD70u; f_801F58BC(c); // 800CAD6C
  c->r[3]=R32(c->r[29]+0x00000394u); // 800CAD70
  c->r[30]=0u+0x00000001u; // 800CAD74
  c->r[28]=0u+0x803A0000u; // 800CAD78
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800CAD7C
  c->r[4]=c->r[28]+0xFFFFDD30u; // 800CAD80
  c->r[3]=R32(c->r[29]+0x00000394u); // 800CAD84
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CAD88
  c->lr=0x800CAD90u; f_80256EC4(c); // 800CAD8C
  c->r[4]=R32(c->r[29]+0x00000394u); // 800CAD90
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800CAD94
  {uint32_t ea=c->r[29]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAD98
  c->r[3]=R32(c->r[29]+0x00000394u); // 800CAD9C
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800CADA0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CADA4
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 800CADA8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CADAC
  c->lr=0x800CADB4u; f_802501B0(c); // 800CADB0
  c->r[3]=0u+0x805D0000u; // 800CADB4
  c->r[4]=c->r[29]+0x0000002Cu; // 800CADB8
  c->r[3]=c->r[3]+0x000078B0u; // 800CADBC
  c->lr=0x800CADC4u; f_802351CC(c); // 800CADC0
  c->r[4]=R32(c->r[29]+0x00000394u); // 800CADC4
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800CADC8
  c->r[3]=c->r[29]|c->r[29]; // 800CADCC
  W8(c->r[29]+0x0000006Fu,c->r[30]); // 800CADD0
  c->r[4]=R32(c->r[29]+0x00000398u); // 800CADD4
  c->lr=0x800CADDCu; f_801F58BC(c); // 800CADD8
  c->r[3]=R32(c->r[29]+0x00000398u); // 800CADDC
  c->r[31]=0u+0x00000000u; // 800CADE0
  c->r[4]=c->r[28]+0xFFFFDD30u; // 800CADE4
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800CADE8
  c->r[3]=R32(c->r[29]+0x00000398u); // 800CADEC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CADF0
  c->lr=0x800CADF8u; f_80256EC4(c); // 800CADF4
  c->r[5]=R32(c->r[29]+0x00000398u); // 800CADF8
  c->r[4]=0u+0x00000215u; // 800CADFC
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAE00
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800CAE04
  c->f[2]=c->f[1]; // 800CAE08
  c->r[5]=R32(c->r[29]+0x00000398u); // 800CAE0C
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800CAE10
  c->r[5]=R32(c->r[5]+0x00000034u); // 800CAE14
  c->lr=0x800CAE1Cu; f_8024FEAC(c); // 800CAE18
  c->r[3]=R32(c->r[29]+0x00000398u); // 800CAE1C
  c->r[4]=0u+0x00000001u; // 800CAE20
  c->r[3]=c->r[3]+0x0000001Cu; // 800CAE24
  c->lr=0x800CAE2Cu; f_80251824(c); // 800CAE28
  c->r[3]=R32(c->r[29]+0x00000398u); // 800CAE2C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CAE30
  c->lr=0x800CAE38u; f_802501B0(c); // 800CAE34
  c->r[6]=R32(c->r[29]+0x00000394u); // 800CAE38
  c->r[3]=c->r[29]|c->r[29]; // 800CAE3C
  c->r[4]=R32(c->r[29]+0x00000398u); // 800CAE40
  c->r[5]=0u+0x00000001u; // 800CAE44
  c->r[0]=R8(c->r[6]+0x0000001Du); // 800CAE48
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800CAE4C
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800CAE50
  c->r[4]=R32(c->r[29]+0x00000394u); // 800CAE54
  c->r[12]=R32(c->r[12]+0x00000038u); // 800CAE58
  c->ctr=c->r[12]; // 800CAE5C
  if (true) { c->lr=0x800CAE64u; dispatch(c,c->ctr); } // 800CAE60
  c->r[4]=R32(c->r[29]+0x0000039Cu); // 800CAE64
  c->r[3]=c->r[29]|c->r[29]; // 800CAE68
  c->lr=0x800CAE70u; f_801F58BC(c); // 800CAE6C
  c->r[3]=R32(c->r[29]+0x0000039Cu); // 800CAE70
  c->r[4]=c->r[28]+0xFFFFDD30u; // 800CAE74
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800CAE78
  c->r[3]=R32(c->r[29]+0x0000039Cu); // 800CAE7C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CAE80
  c->lr=0x800CAE88u; f_80256EC4(c); // 800CAE84
  c->r[5]=R32(c->r[29]+0x0000039Cu); // 800CAE88
  c->r[4]=0u+0x0000002Bu; // 800CAE8C
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAE90
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800CAE94
  c->f[2]=c->f[1]; // 800CAE98
  c->r[5]=R32(c->r[29]+0x0000039Cu); // 800CAE9C
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800CAEA0
  c->r[5]=R32(c->r[5]+0x00000034u); // 800CAEA4
  c->lr=0x800CAEACu; f_8024FEAC(c); // 800CAEA8
  c->r[3]=R32(c->r[29]+0x0000039Cu); // 800CAEAC
  c->r[4]=0u+0x00000001u; // 800CAEB0
  c->r[3]=c->r[3]+0x0000001Cu; // 800CAEB4
  c->lr=0x800CAEBCu; f_80251824(c); // 800CAEB8
  c->r[3]=R32(c->r[29]+0x0000039Cu); // 800CAEBC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CAEC0
  c->lr=0x800CAEC8u; f_802501B0(c); // 800CAEC4
  c->r[6]=R32(c->r[29]+0x00000394u); // 800CAEC8
  c->r[3]=c->r[29]|c->r[29]; // 800CAECC
  c->r[4]=R32(c->r[29]+0x0000039Cu); // 800CAED0
  c->r[5]=0u+0x00000002u; // 800CAED4
  c->r[0]=R8(c->r[6]+0x0000001Du); // 800CAED8
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800CAEDC
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800CAEE0
  c->r[4]=R32(c->r[29]+0x00000394u); // 800CAEE4
  c->r[12]=R32(c->r[12]+0x00000038u); // 800CAEE8
  c->ctr=c->r[12]; // 800CAEEC
  if (true) { c->lr=0x800CAEF4u; dispatch(c,c->ctr); } // 800CAEF0
  c->r[3]=c->r[29]|c->r[29]; // 800CAEF4
  c->lr=0x800CAEFCu; f_801F56F4(c); // 800CAEF8
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800CAEFC
  c->r[3]=c->r[29]|c->r[29]; // 800CAF00
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CAF04
  c->ctr=c->r[12]; // 800CAF08
  if (true) { c->lr=0x800CAF10u; dispatch(c,c->ctr); } // 800CAF0C
  W8(c->r[29]+0x00000074u,c->r[31]); // 800CAF10
  c->r[3]=c->r[29]|c->r[29]; // 800CAF14
  c->lr=0x800CAF1Cu; f_800CBAC0(c); // 800CAF18
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)112); // 800CAF1C
  W32(c->r[29]+0x00000444u,c->r[30]); // 800CAF20
  c->lr=0x800CAF28u; f_8024E174(c); // 800CAF24
  W32(c->r[29]+0x00000438u,c->r[3]); // 800CAF28
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CAF2C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CAF30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CAF34
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CAF38
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CAF3C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CAF40
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CAF44
  c->lr=c->r[0]; // 800CAF48
  c->r[1]=c->r[1]+0x00000030u; // 800CAF4C
  return; // 800CAF50
}

// fn_800CAF54
void f_800CAF54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAF54
  c->r[0]=c->lr; // 800CAF58
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800CAF5C
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800CAF60
  c->r[31]=c->r[3]|c->r[3]; // 800CAF64
  W32(c->r[1]+0x000000A8u,c->r[30]); // 800CAF68
  W32(c->r[1]+0x000000A4u,c->r[29]); // 800CAF6C
  c->r[29]=0u+0x805D0000u; // 800CAF70
  c->r[3]=c->r[29]+0x00003F6Cu; // 800CAF74
  W32(c->r[1]+0x000000A0u,c->r[28]); // 800CAF78
  c->lr=0x800CAF80u; f_80045264(c); // 800CAF7C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800CAF80
  cmpu(c,0,c->r[0],0x0000001Bu); // 800CAF84
  if (!crb(c,2)) { goto L_800CAFC4; } // 800CAF88
  c->r[3]=c->r[29]+0x00003F6Cu; // 800CAF8C
  c->lr=0x800CAF94u; f_80037AF0(c); // 800CAF90
  cmpu(c,0,c->r[3],c->r[31]); // 800CAF94
  if (!crb(c,2)) { goto L_800CAFC4; } // 800CAF98
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800CAF9C
  cmps(c,0,(int32_t)c->r[0],101); // 800CAFA0
  if (crb(c,2)) { goto L_800CAFC4; } // 800CAFA4
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAFA8
  c->r[3]=c->r[31]|c->r[31]; // 800CAFAC
  c->r[4]=0u+0x00000065u; // 800CAFB0
  c->r[5]=0u+0x00000000u; // 800CAFB4
  c->r[6]=0u+0x00000000u; // 800CAFB8
  c->r[7]=0u+0x00000000u; // 800CAFBC
  c->lr=0x800CAFC4u; f_801F4D44(c); // 800CAFC0
L_800CAFC4:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CAFC4
  c->r[3]=c->r[31]|c->r[31]; // 800CAFC8
  c->r[12]=R32(c->r[12]+0x00000068u); // 800CAFCC
  c->ctr=c->r[12]; // 800CAFD0
  if (true) { c->lr=0x800CAFD8u; dispatch(c,c->ctr); } // 800CAFD4
  c->r[3]=c->r[31]|c->r[31]; // 800CAFD8
  c->lr=0x800CAFE0u; f_801F4C0C(c); // 800CAFDC
  c->r[3]=c->r[31]|c->r[31]; // 800CAFE0
  c->lr=0x800CAFE8u; f_800CBA18(c); // 800CAFE4
  c->r[3]=R32(c->r[31]+0x00000398u); // 800CAFE8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CAFEC
  c->lr=0x800CAFF4u; f_802501B0(c); // 800CAFF0
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800CAFF4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CAFF8
  c->lr=0x800CB000u; f_802501B0(c); // 800CAFFC
  c->r[0]=R8(c->r[31]+0x00000074u); // 800CB000
  cmps(c,0,(int32_t)c->r[0],0); // 800CB004
  if (crb(c,2)) { goto L_800CB0C0; } // 800CB008
  c->r[3]=c->r[31]+0x0000000Cu; // 800CB00C
  c->r[4]=0u+0x00000000u; // 800CB010
  c->lr=0x800CB018u; f_800366DC(c); // 800CB014
  c->r[3]=c->r[31]|c->r[31]; // 800CB018
  c->r[4]=0u+0x00000000u; // 800CB01C
  c->lr=0x800CB024u; f_80039840(c); // 800CB020
  c->r[4]=0u+0x803A0000u; // 800CB024
  c->r[5]=c->r[1]+0x00000068u; // 800CB028
  c->r[4]=c->r[4]+0xFFFFDD30u; // 800CB02C
  c->r[6]=0u+0x00000001u; // 800CB030
  c->r[4]=c->r[4]+0x00000009u; // 800CB034
  c->lr=0x800CB03Cu; f_80257018(c); // 800CB038
  cmps(c,0,(int32_t)c->r[3],0); // 800CB03C
  if (crb(c,2)) { goto L_800CB05C; } // 800CB040
  c->r[3]=c->r[1]+0x0000002Cu; // 800CB044
  c->r[4]=c->r[1]+0x00000020u; // 800CB048
  c->r[5]=c->r[1]+0x00000014u; // 800CB04C
  c->r[6]=c->r[1]+0x00000068u; // 800CB050
  c->r[7]=0u+0x00000000u; // 800CB054
  c->lr=0x800CB05Cu; f_8002BE64(c); // 800CB058
L_800CB05C:;
  {uint32_t ea=c->r[2]+0xFFFFA008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB05C
  c->r[3]=c->r[31]+0x0000000Cu; // 800CB060
  c->lr=0x800CB068u; f_800CB318(c); // 800CB064
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 800CB068
  c->r[3]=c->r[31]|c->r[31]; // 800CB06C
  c->r[4]=0u+0x00000000u; // 800CB070
  c->lr=0x800CB078u; f_80039840(c); // 800CB074
  c->r[4]=0u+0x803A0000u; // 800CB078
  c->r[4]=c->r[4]+0xFFFFDD30u; // 800CB07C
  c->r[4]=c->r[4]+0x00000009u; // 800CB080
  c->lr=0x800CB088u; f_80256EC4(c); // 800CB084
  c->r[6]=R32(c->r[1]+0x00000020u); // 800CB088
  c->r[29]=c->r[3]|c->r[3]; // 800CB08C
  c->r[5]=R32(c->r[1]+0x00000024u); // 800CB090
  c->r[3]=c->r[31]|c->r[31]; // 800CB094
  c->r[0]=R32(c->r[1]+0x00000028u); // 800CB098
  c->r[4]=0u+0x00000000u; // 800CB09C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CB0A0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800CB0A4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CB0A8
  c->lr=0x800CB0B0u; f_80039840(c); // 800CB0AC
  c->r[4]=c->r[29]|c->r[29]; // 800CB0B0
  c->r[5]=c->r[1]+0x00000008u; // 800CB0B4
  c->lr=0x800CB0BCu; f_8025E9C0(c); // 800CB0B8
  goto L_800CB0CC; // 800CB0BC
L_800CB0C0:;
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB0C0
  c->r[3]=c->r[31]+0x0000000Cu; // 800CB0C4
  c->lr=0x800CB0CCu; f_80037668(c); // 800CB0C8
L_800CB0CC:;
  c->r[3]=c->r[31]|c->r[31]; // 800CB0CC
  c->lr=0x800CB0D4u; f_801F56F4(c); // 800CB0D0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB0D4
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800CB0D8
  cmps(c,0,(int32_t)c->r[0],0); // 800CB0DC
  if (crb(c,2)) { goto L_800CB148; } // 800CB0E0
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800CB0E4
  cmps(c,0,(int32_t)c->r[0],0); // 800CB0E8
  if (crb(c,2)) { goto L_800CB148; } // 800CB0EC
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800CB0F0
  cmps(c,0,(int32_t)c->r[0],0); // 800CB0F4
  if (crb(c,2)) { goto L_800CB114; } // 800CB0F8
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800CB0FC
  cmps(c,0,(int32_t)c->r[0],0); // 800CB100
  if (!crb(c,2)) { goto L_800CB114; } // 800CB104
  c->r[4]=c->r[3]+0x000000B0u; // 800CB108
  c->lr=0x800CB110u; f_80250F18(c); // 800CB10C
  goto L_800CB130; // 800CB110
L_800CB114:;
  c->r[3]=c->r[3]+0x0000005Cu; // 800CB114
  c->r[4]=c->r[31]+0x0000002Cu; // 800CB118
  c->lr=0x800CB120u; f_800361A0(c); // 800CB11C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB120
  c->r[4]=c->r[31]+0x00000060u; // 800CB124
  c->r[3]=c->r[3]+0x00000068u; // 800CB128
  c->lr=0x800CB130u; f_800361A0(c); // 800CB12C
L_800CB130:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CB130
  c->r[3]=c->r[31]|c->r[31]; // 800CB134
  c->lr=0x800CB13Cu; f_801F58FC(c); // 800CB138
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB13C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CB140
  c->lr=0x800CB148u; f_8025037C(c); // 800CB144
L_800CB148:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800CB148
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800CB14C
  cmps(c,0,(int32_t)c->r[0],0); // 800CB150
  if (crb(c,2)) { goto L_800CB1C8; } // 800CB154
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800CB158
  cmps(c,0,(int32_t)c->r[0],0); // 800CB15C
  if (crb(c,2)) { goto L_800CB1C8; } // 800CB160
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800CB164
  cmps(c,0,(int32_t)c->r[0],0); // 800CB168
  if (crb(c,2)) { goto L_800CB1BC; } // 800CB16C
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800CB170
  cmps(c,0,(int32_t)c->r[0],0); // 800CB174
  if (!crb(c,2)) { goto L_800CB1BC; } // 800CB178
  c->r[4]=c->r[3]+0x000000B0u; // 800CB17C
  c->lr=0x800CB184u; f_80250F18(c); // 800CB180
  c->r[4]=R32(c->r[31]+0x00000398u); // 800CB184
  c->r[3]=0u+0x805D0000u; // 800CB188
  c->r[3]=c->r[3]+0x00003F6Cu; // 800CB18C
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB190
  {uint32_t ea=c->r[4]+0x0000005Cu; WF32(ea,c->f[0]);} // 800CB194
  c->r[4]=R32(c->r[31]+0x00000398u); // 800CB198
  {uint32_t ea=c->r[4]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB19C
  {uint32_t ea=c->r[4]+0x00000060u; WF32(ea,c->f[0]);} // 800CB1A0
  c->r[4]=R32(c->r[31]+0x00000398u); // 800CB1A4
  {uint32_t ea=c->r[4]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB1A8
  {uint32_t ea=c->r[4]+0x00000064u; WF32(ea,c->f[0]);} // 800CB1AC
  c->r[4]=R32(c->r[31]+0x00000398u); // 800CB1B0
  c->r[4]=c->r[4]+0x00000068u; // 800CB1B4
  c->lr=0x800CB1BCu; f_80038E24(c); // 800CB1B8
L_800CB1BC:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800CB1BC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CB1C0
  c->lr=0x800CB1C8u; f_8025037C(c); // 800CB1C4
L_800CB1C8:;
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800CB1C8
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800CB1CC
  cmps(c,0,(int32_t)c->r[0],0); // 800CB1D0
  if (crb(c,2)) { goto L_800CB248; } // 800CB1D4
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800CB1D8
  cmps(c,0,(int32_t)c->r[0],0); // 800CB1DC
  if (crb(c,2)) { goto L_800CB248; } // 800CB1E0
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800CB1E4
  cmps(c,0,(int32_t)c->r[0],0); // 800CB1E8
  if (crb(c,2)) { goto L_800CB23C; } // 800CB1EC
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800CB1F0
  cmps(c,0,(int32_t)c->r[0],0); // 800CB1F4
  if (!crb(c,2)) { goto L_800CB23C; } // 800CB1F8
  c->r[4]=c->r[3]+0x000000B0u; // 800CB1FC
  c->lr=0x800CB204u; f_80250F18(c); // 800CB200
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800CB204
  c->r[3]=0u+0x805D0000u; // 800CB208
  c->r[3]=c->r[3]+0x00003F6Cu; // 800CB20C
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB210
  {uint32_t ea=c->r[4]+0x0000005Cu; WF32(ea,c->f[0]);} // 800CB214
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800CB218
  {uint32_t ea=c->r[4]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB21C
  {uint32_t ea=c->r[4]+0x00000060u; WF32(ea,c->f[0]);} // 800CB220
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800CB224
  {uint32_t ea=c->r[4]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB228
  {uint32_t ea=c->r[4]+0x00000064u; WF32(ea,c->f[0]);} // 800CB22C
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800CB230
  c->r[4]=c->r[4]+0x00000068u; // 800CB234
  c->lr=0x800CB23Cu; f_80038E24(c); // 800CB238
L_800CB23C:;
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800CB23C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CB240
  c->lr=0x800CB248u; f_8025037C(c); // 800CB244
L_800CB248:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB248
  c->r[3]=R32(c->r[3]+0x00000030u); // 800CB24C
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800CB250
  cmpu(c,0,c->r[0],0x00000001u); // 800CB254
  if (crb(c,1)) { goto L_800CB2F0; } // 800CB258
  c->r[3]=c->r[31]|c->r[31]; // 800CB25C
  c->r[4]=0u+0x00000000u; // 800CB260
  c->lr=0x800CB268u; f_800453A4(c); // 800CB264
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800CB268
  if (crb(c,2)) { goto L_800CB2C4; } // 800CB26C
  c->r[30]=0u+0x803A0000u; // 800CB270
  c->r[29]=0u+0x80550000u; // 800CB274
  c->r[30]=c->r[30]+0xFFFFDD30u; // 800CB278
  c->r[5]=0u+0x00000000u; // 800CB27C
  c->r[3]=c->r[29]+0xFFFFC848u; // 800CB280
  c->r[6]=0u+0x00000000u; // 800CB284
  c->r[4]=c->r[30]+0x00000012u; // 800CB288
  c->lr=0x800CB290u; f_8018D3E4(c); // 800CB28C
  c->r[6]=R32(c->r[31]+0x00000394u); // 800CB290
  c->r[28]=rotl(c->r[3],0)&0x000000FFu; // 800CB294
  c->r[4]=c->r[30]+0x00000009u; // 800CB298
  c->r[5]=c->r[1]+0x00000038u; // 800CB29C
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800CB2A0
  c->r[6]=0u+0x00000001u; // 800CB2A4
  c->lr=0x800CB2ACu; f_80257018(c); // 800CB2A8
  cmpu(c,0,c->r[28],0x000000FFu); // 800CB2AC
  if (crb(c,2)) { goto L_800CB2C4; } // 800CB2B0
  c->r[4]=c->r[28]|c->r[28]; // 800CB2B4
  c->r[3]=c->r[29]+0xFFFFC848u; // 800CB2B8
  c->r[5]=c->r[1]+0x00000038u; // 800CB2BC
  c->lr=0x800CB2C4u; f_8018DEB8(c); // 800CB2C0
L_800CB2C4:;
  c->r[3]=c->r[31]|c->r[31]; // 800CB2C4
  c->r[4]=0u+0x00000000u; // 800CB2C8
  c->lr=0x800CB2D0u; f_800453A4(c); // 800CB2CC
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800CB2D0
  if (crb(c,2)) { goto L_800CB2F0; } // 800CB2D4
  c->r[3]=c->r[31]|c->r[31]; // 800CB2D8
  c->r[4]=0u+0x00000004u; // 800CB2DC
  c->r[5]=0u+0x0000002Au; // 800CB2E0
  c->r[6]=0u+0x00000001u; // 800CB2E4
  c->r[7]=0u+0x00000001u; // 800CB2E8
  c->lr=0x800CB2F0u; f_8017900C(c); // 800CB2EC
L_800CB2F0:;
  c->r[3]=c->r[31]|c->r[31]; // 800CB2F0
  c->lr=0x800CB2F8u; f_800CBB64(c); // 800CB2F4
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800CB2F8
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800CB2FC
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800CB300
  c->r[29]=R32(c->r[1]+0x000000A4u); // 800CB304
  c->r[28]=R32(c->r[1]+0x000000A0u); // 800CB308
  c->lr=c->r[0]; // 800CB30C
  c->r[1]=c->r[1]+0x000000B0u; // 800CB310
  return; // 800CB314
}

// fn_800CB318
void f_800CB318(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB318
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800CB31C
  return; // 800CB320
}

// fn_800CB324
void f_800CB324(Ctx* __restrict c) {
  f_801F4C78(c); return; // 800CB324
}

// fn_800CB328
void f_800CB328(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB328
  c->r[0]=c->lr; // 800CB32C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB330
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CB334
  c->r[31]=c->r[3]|c->r[3]; // 800CB338
  c->lr=0x800CB340u; f_801F51B8(c); // 800CB33C
  c->r[7]=0u+0x803D0000u; // 800CB340
  {uint32_t ea=c->r[7]+0x000014C0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CB344
  c->r[3]=c->r[31]|c->r[31]; // 800CB348
  c->r[4]=c->r[1]+0x00000008u; // 800CB34C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CB350
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CB354
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CB358
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800CB35C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CB360
  c->lr=0x800CB368u; f_800CB37C(c); // 800CB364
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CB368
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CB36C
  c->lr=c->r[0]; // 800CB370
  c->r[1]=c->r[1]+0x00000020u; // 800CB374
  return; // 800CB378
}

// fn_800CB37C
void f_800CB37C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB37C
  c->r[0]=c->lr; // 800CB380
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB384
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB388
  c->r[31]=c->r[4]|c->r[4]; // 800CB38C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CB390
  c->r[30]=c->r[3]|c->r[3]; // 800CB394
  c->r[3]=c->r[31]|c->r[31]; // 800CB398
  c->lr=0x800CB3A0u; f_802B9FDC(c); // 800CB39C
  cmps(c,0,(int32_t)c->r[3],0); // 800CB3A0
  if (crb(c,2)) { goto L_800CB3C0; } // 800CB3A4
  c->r[3]=R32(c->r[31]+0x00000000u); // 800CB3A8
  c->r[0]=R32(c->r[31]+0x00000004u); // 800CB3AC
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800CB3B0
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CB3B4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CB3B8
  W32(c->r[30]+0x00000024u,c->r[0]); // 800CB3BC
L_800CB3C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB3C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB3C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CB3C8
  c->lr=c->r[0]; // 800CB3CC
  c->r[1]=c->r[1]+0x00000010u; // 800CB3D0
  return; // 800CB3D4
}

// fn_800CB3D8
void f_800CB3D8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800CB3D8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CB3DC
  f_802501B0(c); return; // 800CB3E0
}

// fn_800CB3E4
void f_800CB3E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB3E4
  c->r[0]=c->lr; // 800CB3E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB3EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CB3F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CB3F4
  c->r[30]=c->r[3]|c->r[3]; // 800CB3F8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CB3FC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CB400
  c->lr=0x800CB408u; f_802501B0(c); // 800CB404
  c->r[3]=c->r[30]|c->r[30]; // 800CB408
  c->r[4]=0u+0x00000000u; // 800CB40C
  c->lr=0x800CB414u; f_801F5244(c); // 800CB410
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CB414
  c->r[3]=c->r[30]+0x0000002Cu; // 800CB418
  c->r[4]=c->r[4]+0x0000005Cu; // 800CB41C
  c->lr=0x800CB424u; f_800361A0(c); // 800CB420
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CB424
  c->r[3]=c->r[30]|c->r[30]; // 800CB428
  c->lr=0x800CB430u; f_801F5418(c); // 800CB42C
  cmps(c,0,(int32_t)c->r[3],0); // 800CB430
  if (!crb(c,0)) { goto L_800CB478; } // 800CB434
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800CB438
  c->r[0]=0u+0x00000064u; // 800CB43C
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800CB440
  c->r[7]=0u+0x803D0000u; // 800CB444
  c->r[0]=c->r[3]|0x00000080u; // 800CB448
  c->r[3]=c->r[30]|c->r[30]; // 800CB44C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800CB450
  c->r[4]=c->r[1]+0x00000008u; // 800CB454
  {uint32_t ea=c->r[7]+0x000014CCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800CB458
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CB45C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CB460
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CB464
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800CB468
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CB46C
  c->lr=0x800CB474u; f_800CB37C(c); // 800CB470
  goto L_800CB4AC; // 800CB474
L_800CB478:;
  c->r[31]=0u+0x805D0000u; // 800CB478
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CB47C
  c->lr=0x800CB484u; f_800447E4(c); // 800CB480
  cmpu(c,0,c->r[3],0x00000001u); // 800CB484
  if (!crb(c,2)) { goto L_800CB498; } // 800CB488
  c->r[0]=0u+0x00000000u; // 800CB48C
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800CB490
  goto L_800CB4A4; // 800CB494
L_800CB498:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CB498
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800CB49C
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800CB4A0
L_800CB4A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800CB4A4
  c->lr=0x800CB4ACu; f_801F5B14(c); // 800CB4A8
L_800CB4AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CB4AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CB4B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CB4B4
  c->lr=c->r[0]; // 800CB4B8
  c->r[1]=c->r[1]+0x00000020u; // 800CB4BC
  return; // 800CB4C0
}

// fn_800CB4C4
void f_800CB4C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB4C4
  c->r[0]=c->lr; // 800CB4C8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CB4CC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800CB4D0
  c->r[31]=c->r[3]|c->r[3]; // 800CB4D4
  W32(c->r[1]+0x00000048u,c->r[30]); // 800CB4D8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CB4DC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CB4E0
  c->lr=0x800CB4E8u; f_802501B0(c); // 800CB4E4
  c->r[3]=c->r[31]+0x00000038u; // 800CB4E8
  c->r[4]=c->r[31]+0x0000002Cu; // 800CB4EC
  c->lr=0x800CB4F4u; f_800361A0(c); // 800CB4F0
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB4F4
  c->r[3]=0u+0x80550000u; // 800CB4F8
  c->r[3]=c->r[3]+0x00003D60u; // 800CB4FC
  c->r[4]=c->r[31]+0x00000038u; // 800CB500
  c->f[2]=c->f[1]; // 800CB504
  c->r[5]=c->r[1]+0x00000008u; // 800CB508
  c->f[3]=c->f[1]; // 800CB50C
  c->r[6]=0u+0x00000000u; // 800CB510
  c->r[7]=0u+0x00000000u; // 800CB514
  c->lr=0x800CB51Cu; f_801D5488(c); // 800CB518
  c->r[5]=R32(c->r[31]+0x00000394u); // 800CB51C
  c->r[3]=c->r[31]+0x00000060u; // 800CB520
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB524
  c->r[4]=c->r[5]+0x00000068u; // 800CB528
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800CB52C
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB530
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800CB534
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB538
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800CB53C
  c->lr=0x800CB544u; f_800361A0(c); // 800CB540
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB544
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CB548
  c->lr=0x800CB550u; f_802501B0(c); // 800CB54C
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800CB550
  c->r[0]=0u+0x00000001u; // 800CB554
  {uint32_t ea=c->r[2]+0xFFFFA00Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB558
  c->r[4]=c->r[31]+0x0000002Cu; // 800CB55C
  c->r[3]=c->r[3]|0x00002000u; // 800CB560
  {uint32_t ea=c->r[2]+0xFFFFA010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB564
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFBu; // 800CB568
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800CB56C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB570
  W16(c->r[31]+0x000003BEu,c->r[5]); // 800CB574
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800CB578
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800CB57C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB580
  c->r[3]=c->r[3]+0x0000005Cu; // 800CB584
  c->lr=0x800CB58Cu; f_800361A0(c); // 800CB588
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB58C
  c->r[4]=0u+0x00000040u; // 800CB590
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB594
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800CB598
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB59C
  c->r[3]=c->r[3]+0x0000001Cu; // 800CB5A0
  c->lr=0x800CB5A8u; f_802518A4(c); // 800CB5A4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB5A8
  c->r[4]=0u+0x00000006u; // 800CB5AC
  c->r[3]=c->r[3]+0x0000001Cu; // 800CB5B0
  c->lr=0x800CB5B8u; f_80251824(c); // 800CB5B4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CB5B8
  c->r[3]=c->r[31]|c->r[31]; // 800CB5BC
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB5C0
  c->r[5]=0u+0x00000000u; // 800CB5C4
  c->r[12]=R32(c->r[12]+0x00000064u); // 800CB5C8
  c->r[6]=0u+0x00000001u; // 800CB5CC
  c->f[2]=c->f[1]; // 800CB5D0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CB5D4
  c->ctr=c->r[12]; // 800CB5D8
  if (true) { c->lr=0x800CB5E0u; dispatch(c,c->ctr); } // 800CB5DC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB5E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CB5E4
  c->lr=0x800CB5ECu; f_802501B0(c); // 800CB5E8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB5EC
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800CB5F0
  cmps(c,0,(int32_t)c->r[0],0); // 800CB5F4
  if (crb(c,2)) { goto L_800CB6E0; } // 800CB5F8
  c->r[3]=c->r[3]+0x00000068u; // 800CB5FC
  c->r[4]=c->r[31]+0x00000060u; // 800CB600
  c->lr=0x800CB608u; f_800361A0(c); // 800CB604
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB608
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CB60C
  c->lr=0x800CB614u; f_8025037C(c); // 800CB610
  c->r[6]=R32(c->r[31]+0x00000394u); // 800CB614
  c->r[3]=c->r[1]+0x00000024u; // 800CB618
  c->r[4]=c->r[31]+0x00000060u; // 800CB61C
  c->r[5]=c->r[1]+0x00000030u; // 800CB620
  c->r[6]=c->r[6]+0x000000B0u; // 800CB624
  c->r[7]=0u+0x00000000u; // 800CB628
  c->lr=0x800CB630u; f_8002BE64(c); // 800CB62C
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 800CB630
  c->r[30]=0u+0x805D0000u; // 800CB634
  c->r[0]=R32(c->r[31]+0x00000030u); // 800CB638
  c->r[30]=c->r[30]+0x00003F6Cu; // 800CB63C
  {uint32_t ea=c->r[30]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB640
  c->r[4]=c->r[31]|c->r[31]; // 800CB644
  W32(c->r[1]+0x00000018u,c->r[3]); // 800CB648
  c->r[7]=c->r[1]+0x00000018u; // 800CB64C
  c->r[6]=0u+0x00000027u; // 800CB650
  c->r[8]=0u+0x00000000u; // 800CB654
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CB658
  c->r[0]=R32(c->r[31]+0x00000034u); // 800CB65C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800CB660
  c->r[3]=R32(c->r[31]+0x00000438u); // 800CB664
  c->r[5]=R32(c->r[31]+0x00000394u); // 800CB668
  c->lr=0x800CB670u; f_801FA6A4(c); // 800CB66C
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800CB670
  cmps(c,0,(int32_t)c->r[0],0); // 800CB674
  if (crb(c,2)) { goto L_800CB68C; } // 800CB678
  c->r[3]=c->r[31]+0x00000044u; // 800CB67C
  c->r[4]=c->r[31]+0x000003CCu; // 800CB680
  c->lr=0x800CB688u; f_800361A0(c); // 800CB684
  goto L_800CB6C8; // 800CB688
L_800CB68C:;
  c->r[3]=c->r[30]|c->r[30]; // 800CB68C
  c->lr=0x800CB694u; f_800567B4(c); // 800CB690
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800CB694
  cmpu(c,0,c->r[0],0x00000015u); // 800CB698
  if (crb(c,2)) { goto L_800CB6B0; } // 800CB69C
  cmpu(c,0,c->r[0],0x00000018u); // 800CB6A0
  if (crb(c,2)) { goto L_800CB6B0; } // 800CB6A4
  cmpu(c,0,c->r[0],0x0000001Au); // 800CB6A8
  if (!crb(c,2)) { goto L_800CB6C8; } // 800CB6AC
L_800CB6B0:;
  {uint32_t ea=c->r[2]+0xFFFFA014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CB6B0
  {uint32_t ea=c->r[2]+0xFFFFA018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB6B4
  {uint32_t ea=c->r[2]+0xFFFFA01Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB6B8
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[2]);} // 800CB6BC
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800CB6C0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800CB6C4
L_800CB6C8:;
  c->r[6]=0u+0x803A0000u; // 800CB6C8
  c->r[3]=R32(c->r[31]+0x00000438u); // 800CB6CC
  c->r[5]=c->r[31]+0x00000044u; // 800CB6D0
  c->r[4]=0u+0x00000000u; // 800CB6D4
  c->r[6]=c->r[6]+0xFFFFDD18u; // 800CB6D8
  c->lr=0x800CB6E0u; f_801FBEC0(c); // 800CB6DC
L_800CB6E0:;
  c->r[3]=c->r[31]|c->r[31]; // 800CB6E0
  c->r[4]=0u+0x00000000u; // 800CB6E4
  c->lr=0x800CB6ECu; f_801F7C00(c); // 800CB6E8
  c->r[7]=0u+0x803D0000u; // 800CB6EC
  {uint32_t ea=c->r[7]+0x000014D8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CB6F0
  c->r[3]=c->r[31]|c->r[31]; // 800CB6F4
  c->r[4]=c->r[1]+0x0000000Cu; // 800CB6F8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CB6FC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CB700
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800CB704
  W32(c->r[1]+0x00000010u,c->r[5]); // 800CB708
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB70C
  c->lr=0x800CB714u; f_800CB37C(c); // 800CB710
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CB714
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800CB718
  c->r[30]=R32(c->r[1]+0x00000048u); // 800CB71C
  c->lr=c->r[0]; // 800CB720
  c->r[1]=c->r[1]+0x00000050u; // 800CB724
  return; // 800CB728
}

// fn_800CB72C
void f_800CB72C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB72C
  c->r[0]=c->lr; // 800CB730
  c->r[4]=0u+0x00000000u; // 800CB734
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CB738
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CB73C
  c->r[31]=c->r[3]|c->r[3]; // 800CB740
  c->r[3]=R32(c->r[3]+0x00000438u); // 800CB744
  c->lr=0x800CB74Cu; f_801FAF00(c); // 800CB748
  cmps(c,0,(int32_t)c->r[3],0); // 800CB74C
  if (!crb(c,2)) { goto L_800CB890; } // 800CB750
  c->r[3]=c->r[31]|c->r[31]; // 800CB754
  c->r[4]=0u+0x0000001Bu; // 800CB758
  c->lr=0x800CB760u; f_801F5AB4(c); // 800CB75C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800CB760
  c->r[3]=0u+0x805D0000u; // 800CB764
  c->r[7]=R32(c->r[31]+0x00000394u); // 800CB768
  c->r[3]=c->r[3]+0x00006CF8u; // 800CB76C
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800CB770
  c->r[4]=c->r[1]+0x00000008u; // 800CB774
  c->r[0]=c->r[0]|0x00000004u; // 800CB778
  c->r[5]=0u+0x00040000u; // 800CB77C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CB780
  c->r[6]=R32(c->r[7]+0x0000005Cu); // 800CB784
  c->r[0]=R32(c->r[7]+0x00000060u); // 800CB788
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CB78C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CB790
  c->r[0]=R32(c->r[7]+0x00000064u); // 800CB794
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CB798
  c->lr=0x800CB7A0u; f_802236F8(c); // 800CB79C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800CB7A0
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800CB7A4
  cmpu(c,0,c->r[0],0x00000018u); // 800CB7A8
  if (crb(c,2)) { goto L_800CB7D4; } // 800CB7AC
  cmpu(c,0,c->r[0],0x0000001Au); // 800CB7B0
  if (crb(c,2)) { goto L_800CB7D4; } // 800CB7B4
  cmpu(c,0,c->r[0],0x00000015u); // 800CB7B8
  if (!crb(c,2)) { goto L_800CB84C; } // 800CB7BC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB7C0
  {uint32_t ea=c->r[2]+0xFFFFA020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB7C4
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB7C8
  fcmp(c,0,c->f[1],c->f[0]); // 800CB7CC
  if (!crb(c,1)) { goto L_800CB84C; } // 800CB7D0
L_800CB7D4:;
  c->r[6]=0u+0x803A0000u; // 800CB7D4
  {uint32_t ea=c->r[6]+0xFFFFDD24u; c->r[5]=R32(ea); c->r[6]=ea;} // 800CB7D8
  c->r[4]=c->r[1]+0x00000014u; // 800CB7DC
  c->r[3]=R32(c->r[6]+0x00000004u); // 800CB7E0
  c->r[0]=R32(c->r[6]+0x00000008u); // 800CB7E4
  W32(c->r[1]+0x00000014u,c->r[5]); // 800CB7E8
  W32(c->r[1]+0x00000018u,c->r[3]); // 800CB7EC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CB7F0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB7F4
  c->r[3]=c->r[3]+0x0000005Cu; // 800CB7F8
  c->lr=0x800CB800u; f_800361A0(c); // 800CB7FC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB800
  c->r[4]=0u+0x803A0000u; // 800CB804
  c->r[4]=c->r[4]+0xFFFFDD18u; // 800CB808
  c->r[3]=c->r[3]+0x00000068u; // 800CB80C
  c->lr=0x800CB814u; f_800361A0(c); // 800CB810
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB814
  c->r[3]=c->r[3]+0x000000B0u; // 800CB818
  c->lr=0x800CB820u; f_80295AE8(c); // 800CB81C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB820
  c->r[0]=0u+0x00000015u; // 800CB824
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB828
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[0]);} // 800CB82C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB830
  {uint32_t ea=c->r[3]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB834
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 800CB838
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB83C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB840
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 800CB844
  W16(c->r[31]+0x000003B8u,c->r[0]); // 800CB848
L_800CB84C:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CB84C
  c->r[3]=c->r[31]+0x0000002Cu; // 800CB850
  c->r[4]=c->r[4]+0x0000005Cu; // 800CB854
  c->lr=0x800CB85Cu; f_800361A0(c); // 800CB858
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CB85C
  c->r[3]=c->r[31]+0x00000060u; // 800CB860
  c->r[4]=c->r[4]+0x00000068u; // 800CB864
  c->lr=0x800CB86Cu; f_800361A0(c); // 800CB868
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CB86C
  c->r[3]=c->r[31]|c->r[31]; // 800CB870
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CB874
  c->ctr=c->r[12]; // 800CB878
  if (true) { c->lr=0x800CB880u; dispatch(c,c->ctr); } // 800CB87C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CB880
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CB884
  c->lr=0x800CB88Cu; f_8025037C(c); // 800CB888
  goto L_800CB8B0; // 800CB88C
L_800CB890:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CB890
  c->r[3]=c->r[31]+0x0000002Cu; // 800CB894
  c->r[4]=c->r[4]+0x0000005Cu; // 800CB898
  c->lr=0x800CB8A0u; f_800361A0(c); // 800CB89C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CB8A0
  c->r[3]=c->r[31]+0x00000060u; // 800CB8A4
  c->r[4]=c->r[4]+0x00000068u; // 800CB8A8
  c->lr=0x800CB8B0u; f_800361A0(c); // 800CB8AC
L_800CB8B0:;
  c->r[3]=c->r[31]|c->r[31]; // 800CB8B0
  c->r[4]=0u+0x00000000u; // 800CB8B4
  c->lr=0x800CB8BCu; f_801F7C00(c); // 800CB8B8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CB8BC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CB8C0
  c->lr=c->r[0]; // 800CB8C4
  c->r[1]=c->r[1]+0x00000030u; // 800CB8C8
  return; // 800CB8CC
}

// fn_800CB8D0
void f_800CB8D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB8D0
  c->r[0]=c->lr; // 800CB8D4
  c->r[5]=0u+0x00000000u; // 800CB8D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB8DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB8E0
  c->r[31]=c->r[3]|c->r[3]; // 800CB8E4
  c->r[3]=0u+0x000001ADu; // 800CB8E8
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CB8EC
  c->r[4]=c->r[4]+0x0000010Cu; // 800CB8F0
  c->lr=0x800CB8F8u; f_8024EE50(c); // 800CB8F4
  cmps(c,0,(int32_t)c->r[3],0); // 800CB8F8
  if (crb(c,2)) { goto L_800CB908; } // 800CB8FC
  c->r[3]=0u+0x00000000u; // 800CB900
  goto L_800CB960; // 800CB904
L_800CB908:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800CB908
  c->r[3]=0u+0x000000C9u; // 800CB90C
  c->r[5]=0u+0x00000000u; // 800CB910
  c->r[4]=c->r[4]+0x0000010Cu; // 800CB914
  c->lr=0x800CB91Cu; f_8024EE50(c); // 800CB918
  cmps(c,0,(int32_t)c->r[3],0); // 800CB91C
  if (crb(c,2)) { goto L_800CB92C; } // 800CB920
  c->r[3]=0u+0x00000000u; // 800CB924
  goto L_800CB960; // 800CB928
L_800CB92C:;
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800CB92C
  c->r[3]=0u+0x000000CAu; // 800CB930
  c->r[5]=0u+0x00000000u; // 800CB934
  c->r[4]=c->r[4]+0x0000010Cu; // 800CB938
  c->lr=0x800CB940u; f_8024EE50(c); // 800CB93C
  cmps(c,0,(int32_t)c->r[3],0); // 800CB940
  if (crb(c,2)) { goto L_800CB950; } // 800CB944
  c->r[3]=0u+0x00000000u; // 800CB948
  goto L_800CB960; // 800CB94C
L_800CB950:;
  c->r[3]=c->r[31]+0x00000210u; // 800CB950
  c->r[4]=0u+0x000000E1u; // 800CB954
  c->lr=0x800CB95Cu; f_80221630(c); // 800CB958
  c->r[3]=0u+0x00000000u; // 800CB95C
L_800CB960:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB960
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB964
  c->lr=c->r[0]; // 800CB968
  c->r[1]=c->r[1]+0x00000010u; // 800CB96C
  return; // 800CB970
}

// fn_800CB974
void f_800CB974(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB974
  c->r[0]=c->lr; // 800CB978
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CB97C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CB980
  c->r[31]=c->r[3]|c->r[3]; // 800CB984
  c->lr=0x800CB98Cu; f_801F4F28(c); // 800CB988
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800CB98C
  cmps(c,0,(int32_t)c->r[0],101); // 800CB990
  if (crb(c,2)) { goto L_800CB9D8; } // 800CB994
  if (!crb(c,0)) { goto L_800CBA04; } // 800CB998
  cmps(c,0,(int32_t)c->r[0],100); // 800CB99C
  if (!crb(c,0)) { goto L_800CB9A8; } // 800CB9A0
  goto L_800CBA04; // 800CB9A4
L_800CB9A8:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800CB9A8
  c->r[7]=0u+0x803D0000u; // 800CB9AC
  c->r[3]=c->r[31]|c->r[31]; // 800CB9B0
  c->r[4]=c->r[1]+0x00000014u; // 800CB9B4
  {uint32_t ea=c->r[7]+0x000014E4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CB9B8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CB9BC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CB9C0
  W32(c->r[1]+0x00000014u,c->r[6]); // 800CB9C4
  W32(c->r[1]+0x00000018u,c->r[5]); // 800CB9C8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CB9CC
  c->lr=0x800CB9D4u; f_800CB37C(c); // 800CB9D0
  goto L_800CBA04; // 800CB9D4
L_800CB9D8:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800CB9D8
  c->r[7]=0u+0x803D0000u; // 800CB9DC
  c->r[3]=c->r[31]|c->r[31]; // 800CB9E0
  c->r[4]=c->r[1]+0x00000008u; // 800CB9E4
  {uint32_t ea=c->r[7]+0x000014F0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CB9E8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CB9EC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CB9F0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CB9F4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800CB9F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CB9FC
  c->lr=0x800CBA04u; f_800CB37C(c); // 800CBA00
L_800CBA04:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CBA04
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CBA08
  c->lr=c->r[0]; // 800CBA0C
  c->r[1]=c->r[1]+0x00000030u; // 800CBA10
  return; // 800CBA14
}

// fn_800CBA18
void f_800CBA18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBA18
  c->r[0]=c->lr; // 800CBA1C
  c->r[5]=0u+0x80620000u; // 800CBA20
  c->r[4]=0u+0x00000002u; // 800CBA24
  W32(c->r[1]+0x00000094u,c->r[0]); // 800CBA28
  c->r[5]=c->r[5]+0x00007688u; // 800CBA2C
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800CBA30
  W32(c->r[1]+0x00000088u,c->r[30]); // 800CBA34
  c->r[30]=c->r[3]|c->r[3]; // 800CBA38
  c->r[3]=R32(c->r[5]+0x00000014u); // 800CBA3C
  c->lr=0x800CBA44u; f_80037670(c); // 800CBA40
  cmps(c,0,(int32_t)c->r[3],0); // 800CBA44
  if (!crb(c,2)) { goto L_800CBAA8; } // 800CBA48
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CBA4C
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800CBA50
  cmps(c,0,(int32_t)c->r[0],0); // 800CBA54
  if (!crb(c,2)) { goto L_800CBAA8; } // 800CBA58
  {uint32_t ea=c->r[2]+0xFFFFA024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBA5C
  c->r[3]=c->r[1]+0x00000008u; // 800CBA60
  c->r[4]=c->r[30]+0x0000002Cu; // 800CBA64
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800CBA68
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800CBA6C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800CBA70
  c->lr=0x800CBA78u; f_800361A0(c); // 800CBA74
  c->r[31]=0u+0x80550000u; // 800CBA78
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBA7C
  c->r[31]=c->r[31]+0x00003D60u; // 800CBA80
  c->r[5]=c->r[30]|c->r[30]; // 800CBA84
  c->r[3]=c->r[31]+0x00000010u; // 800CBA88
  c->r[6]=c->r[1]+0x00000008u; // 800CBA8C
  c->r[7]=c->r[1]+0x00000020u; // 800CBA90
  c->r[4]=0u+0x000001FFu; // 800CBA94
  c->lr=0x800CBA9Cu; f_80226910(c); // 800CBA98
  c->r[3]=c->r[31]+0x00000010u; // 800CBA9C
  c->r[4]=c->r[1]+0x00000020u; // 800CBAA0
  c->lr=0x800CBAA8u; f_80226D68(c); // 800CBAA4
L_800CBAA8:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800CBAA8
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800CBAAC
  c->r[30]=R32(c->r[1]+0x00000088u); // 800CBAB0
  c->lr=c->r[0]; // 800CBAB4
  c->r[1]=c->r[1]+0x00000090u; // 800CBAB8
  return; // 800CBABC
}

// fn_800CBAC0
void f_800CBAC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBAC0
  c->r[0]=c->lr; // 800CBAC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBAC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBACC
  c->r[31]=c->r[3]|c->r[3]; // 800CBAD0
  c->r[3]=c->r[3]+0x00000210u; // 800CBAD4
  c->lr=0x800CBADCu; f_8004BAD4(c); // 800CBAD8
  cmps(c,0,(int32_t)c->r[3],0); // 800CBADC
  if (crb(c,2)) { goto L_800CBB50; } // 800CBAE0
  c->r[0]=R32(c->r[31]+0x00000210u); // 800CBAE4
  c->r[4]=c->r[31]|c->r[31]; // 800CBAE8
  c->r[3]=c->r[31]+0x00000210u; // 800CBAEC
  c->r[0]=c->r[0]|0xAA000000u; // 800CBAF0
  W32(c->r[31]+0x00000210u,c->r[0]); // 800CBAF4
  c->lr=0x800CBAFCu; f_80043E44(c); // 800CBAF8
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBAFC
  c->r[3]=c->r[31]+0x00000210u; // 800CBB00
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CBB04
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CBB08
  c->lr=0x800CBB10u; f_80043E34(c); // 800CBB0C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CBB10
  c->r[4]=0u+0x803A0000u; // 800CBB14
  c->r[4]=c->r[4]+0xFFFFDD30u; // 800CBB18
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CBB1C
  c->r[4]=c->r[4]+0x00000009u; // 800CBB20
  c->lr=0x800CBB28u; f_80256EC4(c); // 800CBB24
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CBB28
  c->r[5]=c->r[3]|c->r[3]; // 800CBB2C
  c->r[3]=c->r[31]+0x00000210u; // 800CBB30
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800CBB34
  c->lr=0x800CBB3Cu; f_8004BAC8(c); // 800CBB38
  {uint32_t ea=c->r[2]+0xFFFFA028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBB3C
  c->r[3]=c->r[31]+0x00000210u; // 800CBB40
  c->f[2]=c->f[1]; // 800CBB44
  c->f[3]=c->f[1]; // 800CBB48
  c->lr=0x800CBB50u; f_80043E24(c); // 800CBB4C
L_800CBB50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBB50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBB54
  c->lr=c->r[0]; // 800CBB58
  c->r[1]=c->r[1]+0x00000010u; // 800CBB5C
  return; // 800CBB60
}

// fn_800CBB64
void f_800CBB64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBB64
  c->r[0]=c->lr; // 800CBB68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBB6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBB70
  c->r[31]=c->r[3]|c->r[3]; // 800CBB74
  c->r[3]=c->r[3]+0x00000210u; // 800CBB78
  c->lr=0x800CBB80u; f_80221698(c); // 800CBB7C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CBB80
  cmps(c,0,(int32_t)c->r[3],0); // 800CBB84
  if (crb(c,2)) { goto L_800CBBA8; } // 800CBB88
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800CBB8C
  cmps(c,0,(int32_t)c->r[0],0); // 800CBB90
  if (crb(c,2)) { goto L_800CBBA8; } // 800CBB94
  c->r[0]=R32(c->r[31]+0x00000210u); // 800CBB98
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800CBB9C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800CBBA0
  goto L_800CBBB4; // 800CBBA4
L_800CBBA8:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800CBBA8
  c->r[0]=c->r[0]|0x80000000u; // 800CBBAC
  W32(c->r[31]+0x00000210u,c->r[0]); // 800CBBB0
L_800CBBB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBBB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBBB8
  c->lr=c->r[0]; // 800CBBBC
  c->r[1]=c->r[1]+0x00000010u; // 800CBBC0
  return; // 800CBBC4
}

// fn_800CBBC8
void f_800CBBC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBBC8
  c->r[0]=c->lr; // 800CBBCC
  cmps(c,0,(int32_t)c->r[3],0); // 800CBBD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBBD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBBD8
  c->r[31]=c->r[4]|c->r[4]; // 800CBBDC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CBBE0
  c->r[30]=c->r[3]|c->r[3]; // 800CBBE4
  if (crb(c,2)) { goto L_800CBC04; } // 800CBBE8
  c->r[4]=0u+0x00000000u; // 800CBBEC
  c->lr=0x800CBBF4u; f_8026A06C(c); // 800CBBF0
  cmps(c,0,(int32_t)c->r[31],0); // 800CBBF4
  if (!crb(c,1)) { goto L_800CBC04; } // 800CBBF8
  c->r[3]=c->r[30]|c->r[30]; // 800CBBFC
  c->lr=0x800CBC04u; f_8026A268(c); // 800CBC00
L_800CBC04:;
  c->r[3]=c->r[30]|c->r[30]; // 800CBC04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBC08
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CBC0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBC10
  c->lr=c->r[0]; // 800CBC14
  c->r[1]=c->r[1]+0x00000010u; // 800CBC18
  return; // 800CBC1C
}

// fn_800CBC20
void f_800CBC20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBC20
  c->r[0]=c->lr; // 800CBC24
  c->r[4]=0u+0x00000000u; // 800CBC28
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CBC2C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CBC30
  c->r[31]=c->r[3]|c->r[3]; // 800CBC34
  W32(c->r[1]+0x00000028u,c->r[30]); // 800CBC38
  W32(c->r[1]+0x00000024u,c->r[29]); // 800CBC3C
  c->lr=0x800CBC44u; f_801F57D0(c); // 800CBC40
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CBC44
  c->r[3]=c->r[31]|c->r[31]; // 800CBC48
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800CBC4C
  c->ctr=c->r[12]; // 800CBC50
  if (true) { c->lr=0x800CBC58u; dispatch(c,c->ctr); } // 800CBC54
  c->r[3]=c->r[31]|c->r[31]; // 800CBC58
  c->lr=0x800CBC60u; f_801F4B94(c); // 800CBC5C
  c->r[3]=0u+0x00000003u; // 800CBC60
  c->r[0]=0u+0x0000002Du; // 800CBC64
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800CBC68
  c->r[3]=c->r[31]|c->r[31]; // 800CBC6C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CBC70
  W8(c->r[31]+0x0000006Du,c->r[0]); // 800CBC74
  c->lr=0x800CBC7Cu; f_801F58BC(c); // 800CBC78
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CBC7C
  c->r[29]=0u+0x00000001u; // 800CBC80
  c->r[30]=0u+0x803A0000u; // 800CBC84
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800CBC88
  c->r[4]=c->r[30]+0xFFFFDD48u; // 800CBC8C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CBC90
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CBC94
  c->lr=0x800CBC9Cu; f_80256EC4(c); // 800CBC98
  c->r[5]=R32(c->r[31]+0x00000394u); // 800CBC9C
  c->r[4]=0u+0x00000000u; // 800CBCA0
  {uint32_t ea=c->r[2]+0xFFFFA038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBCA4
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800CBCA8
  c->f[2]=c->f[1]; // 800CBCAC
  c->r[5]=R32(c->r[31]+0x00000394u); // 800CBCB0
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800CBCB4
  c->r[5]=R32(c->r[5]+0x00000034u); // 800CBCB8
  c->lr=0x800CBCC0u; f_8024FEAC(c); // 800CBCBC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CBCC0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CBCC4
  c->lr=0x800CBCCCu; f_802501B0(c); // 800CBCC8
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CBCCC
  c->r[0]=0u+0x00000000u; // 800CBCD0
  c->r[3]=c->r[31]|c->r[31]; // 800CBCD4
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800CBCD8
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800CBCDC
  c->lr=0x800CBCE4u; f_801F56F4(c); // 800CBCE0
  c->r[0]=0u+0x00000002u; // 800CBCE4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)1236); // 800CBCE8
  W32(c->r[31]+0x0000044Cu,c->r[0]); // 800CBCEC
  c->lr=0x800CBCF4u; f_8024E174(c); // 800CBCF0
  W32(c->r[31]+0x00000440u,c->r[3]); // 800CBCF4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CBCF8
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800CBCFC
  cmps(c,0,(int32_t)c->r[4],0); // 800CBD00
  if (crb(c,2)) { goto L_800CBD60; } // 800CBD04
  c->r[30]=c->r[30]+0xFFFFDD48u; // 800CBD08
  c->r[7]=0u+0x00000001u; // 800CBD0C
  c->r[5]=c->r[30]+0x00000009u; // 800CBD10
  c->r[8]=0u+0x00000001u; // 800CBD14
  c->r[6]=c->r[30]+0x0000000Eu; // 800CBD18
  c->lr=0x800CBD20u; f_8022F210(c); // 800CBD1C
  c->r[3]=R32(c->r[31]+0x00000440u); // 800CBD20
  {uint32_t ea=c->r[2]+0xFFFFA03Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBD24
  c->lr=0x800CBD2Cu; f_8004BE40(c); // 800CBD28
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CBD2C
  c->r[5]=c->r[30]+0x00000009u; // 800CBD30
  c->r[8]=R32(c->r[31]+0x00000440u); // 800CBD34
  c->r[6]=c->r[30]+0x00000016u; // 800CBD38
  c->r[4]=R32(c->r[3]+0x0000010Cu); // 800CBD3C
  c->r[7]=0u+0x00000001u; // 800CBD40
  c->r[3]=c->r[8]+0x000004D4u; // 800CBD44
  c->r[8]=0u+0x00000001u; // 800CBD48
  c->lr=0x800CBD50u; f_8022F210(c); // 800CBD4C
  c->r[3]=R32(c->r[31]+0x00000440u); // 800CBD50
  {uint32_t ea=c->r[2]+0xFFFFA03Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBD54
  c->r[3]=c->r[3]+0x000004D4u; // 800CBD58
  c->lr=0x800CBD60u; f_8004BE40(c); // 800CBD5C
L_800CBD60:;
  c->r[7]=0u+0x803D0000u; // 800CBD60
  {uint32_t ea=c->r[7]+0x00001598u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CBD64
  c->r[3]=c->r[31]|c->r[31]; // 800CBD68
  c->r[4]=c->r[1]+0x00000008u; // 800CBD6C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CBD70
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CBD74
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CBD78
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800CBD7C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CBD80
  c->lr=0x800CBD88u; f_800CBDA4(c); // 800CBD84
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CBD88
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CBD8C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800CBD90
  c->r[29]=R32(c->r[1]+0x00000024u); // 800CBD94
  c->lr=c->r[0]; // 800CBD98
  c->r[1]=c->r[1]+0x00000030u; // 800CBD9C
  return; // 800CBDA0
}

// fn_800CBDA4
void f_800CBDA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBDA4
  c->r[0]=c->lr; // 800CBDA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBDAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBDB0
  c->r[31]=c->r[4]|c->r[4]; // 800CBDB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CBDB8
  c->r[30]=c->r[3]|c->r[3]; // 800CBDBC
  c->r[3]=c->r[31]|c->r[31]; // 800CBDC0
  c->lr=0x800CBDC8u; f_802B9FDC(c); // 800CBDC4
  cmps(c,0,(int32_t)c->r[3],0); // 800CBDC8
  if (crb(c,2)) { goto L_800CBDE8; } // 800CBDCC
  c->r[3]=R32(c->r[31]+0x00000000u); // 800CBDD0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800CBDD4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800CBDD8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CBDDC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CBDE0
  W32(c->r[30]+0x00000024u,c->r[0]); // 800CBDE4
L_800CBDE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBDE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBDEC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CBDF0
  c->lr=c->r[0]; // 800CBDF4
  c->r[1]=c->r[1]+0x00000010u; // 800CBDF8
  return; // 800CBDFC
}

// fn_800CBE00
void f_800CBE00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBE00
  c->r[0]=c->lr; // 800CBE04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBE08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBE0C
  c->r[31]=c->r[3]|c->r[3]; // 800CBE10
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800CBE14
  c->r[12]=R32(c->r[12]+0x00000068u); // 800CBE18
  c->ctr=c->r[12]; // 800CBE1C
  if (true) { c->lr=0x800CBE24u; dispatch(c,c->ctr); } // 800CBE20
  c->r[3]=c->r[31]|c->r[31]; // 800CBE24
  c->lr=0x800CBE2Cu; f_801F4C0C(c); // 800CBE28
  c->r[3]=c->r[31]+0x00000210u; // 800CBE2C
  c->lr=0x800CBE34u; f_80221698(c); // 800CBE30
  c->r[3]=c->r[31]|c->r[31]; // 800CBE34
  c->lr=0x800CBE3Cu; f_801F56F4(c); // 800CBE38
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CBE3C
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800CBE40
  cmps(c,0,(int32_t)c->r[0],0); // 800CBE44
  if (crb(c,2)) { goto L_800CBE90; } // 800CBE48
  c->r[3]=R32(c->r[31]+0x00000440u); // 800CBE4C
  c->r[4]=0u+0x00000001u; // 800CBE50
  c->lr=0x800CBE58u; f_8005DA20(c); // 800CBE54
  c->r[3]=R32(c->r[31]+0x00000440u); // 800CBE58
  c->r[4]=0u+0x00000000u; // 800CBE5C
  c->lr=0x800CBE64u; f_8022F3E8(c); // 800CBE60
  c->r[3]=R32(c->r[31]+0x00000440u); // 800CBE64
  c->r[4]=0u+0x00000001u; // 800CBE68
  c->r[3]=c->r[3]+0x000004D4u; // 800CBE6C
  c->lr=0x800CBE74u; f_8005DA20(c); // 800CBE70
  c->r[3]=R32(c->r[31]+0x00000440u); // 800CBE74
  c->r[4]=0u+0x00000000u; // 800CBE78
  c->r[3]=c->r[3]+0x000004D4u; // 800CBE7C
  c->lr=0x800CBE84u; f_8022F3E8(c); // 800CBE80
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CBE84
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CBE88
  c->lr=0x800CBE90u; f_8025037C(c); // 800CBE8C
L_800CBE90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBE90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBE94
  c->lr=c->r[0]; // 800CBE98
  c->r[1]=c->r[1]+0x00000010u; // 800CBE9C
  return; // 800CBEA0
}

// fn_800CBEA4
void f_800CBEA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBEA4
  c->r[0]=c->lr; // 800CBEA8
  c->r[4]=c->r[3]|c->r[3]; // 800CBEAC
  c->r[3]=0u+0x0000033Fu; // 800CBEB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBEB4
  c->r[5]=0u+0x00000000u; // 800CBEB8
  c->r[4]=R32(c->r[4]+0x00000394u); // 800CBEBC
  c->r[4]=c->r[4]+0x0000010Cu; // 800CBEC0
  c->lr=0x800CBEC8u; f_8024EE50(c); // 800CBEC4
  c->r[0]=cntlz(c->r[3]); // 800CBEC8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CBECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBED0
  c->lr=c->r[0]; // 800CBED4
  c->r[1]=c->r[1]+0x00000010u; // 800CBED8
  return; // 800CBEDC
}

// fn_800CBEE0
void f_800CBEE0(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800CBEE0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800CBEE4
  c->ctr=c->r[12]; // 800CBEE8
  if (true) { dispatch(c,c->ctr); return; } // 800CBEEC
}

// fn_800CBEF0
void f_800CBEF0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800CBEF0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CBEF4
  f_802501B0(c); return; // 800CBEF8
}

// fn_800CBEFC
void f_800CBEFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBEFC
  c->r[0]=c->lr; // 800CBF00
  c->r[7]=0u+0x803D0000u; // 800CBF04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CBF08
  c->r[4]=c->r[1]+0x00000008u; // 800CBF0C
  {uint32_t ea=c->r[7]+0x000015A4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CBF10
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CBF14
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CBF18
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CBF1C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800CBF20
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CBF24
  c->lr=0x800CBF2Cu; f_800CBDA4(c); // 800CBF28
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CBF2C
  c->lr=c->r[0]; // 800CBF30
  c->r[1]=c->r[1]+0x00000020u; // 800CBF34
  return; // 800CBF38
}

// fn_800CBF3C
void f_800CBF3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBF3C
  c->r[0]=c->lr; // 800CBF40
  cmps(c,0,(int32_t)c->r[3],0); // 800CBF44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBF48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBF4C
  c->r[31]=c->r[4]|c->r[4]; // 800CBF50
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CBF54
  c->r[30]=c->r[3]|c->r[3]; // 800CBF58
  if (crb(c,2)) { goto L_800CBF78; } // 800CBF5C
  c->r[4]=0u+0x00000000u; // 800CBF60
  c->lr=0x800CBF68u; f_8026A06C(c); // 800CBF64
  cmps(c,0,(int32_t)c->r[31],0); // 800CBF68
  if (!crb(c,1)) { goto L_800CBF78; } // 800CBF6C
  c->r[3]=c->r[30]|c->r[30]; // 800CBF70
  c->lr=0x800CBF78u; f_8026A268(c); // 800CBF74
L_800CBF78:;
  c->r[3]=c->r[30]|c->r[30]; // 800CBF78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBF7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CBF80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBF84
  c->lr=c->r[0]; // 800CBF88
  c->r[1]=c->r[1]+0x00000010u; // 800CBF8C
  return; // 800CBF90
}

// fn_800CBF94
void f_800CBF94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBF94
  c->r[0]=c->lr; // 800CBF98
  W32(c->r[1]+0x00000064u,c->r[0]); // 800CBF9C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800CBFA0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800CBFA4
  c->r[4]=0u+0x00000000u; // 800CBFA8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800CBFAC
  c->r[31]=c->r[3]|c->r[3]; // 800CBFB0
  W32(c->r[1]+0x00000048u,c->r[30]); // 800CBFB4
  W32(c->r[1]+0x00000044u,c->r[29]); // 800CBFB8
  c->lr=0x800CBFC0u; f_801F57D0(c); // 800CBFBC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CBFC0
  c->r[3]=c->r[31]|c->r[31]; // 800CBFC4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800CBFC8
  c->ctr=c->r[12]; // 800CBFCC
  if (true) { c->lr=0x800CBFD4u; dispatch(c,c->ctr); } // 800CBFD0
  c->r[3]=c->r[31]|c->r[31]; // 800CBFD4
  c->lr=0x800CBFDCu; f_801F4B94(c); // 800CBFD8
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800CBFDC
  c->r[0]=0u+0x00000000u; // 800CBFE0
  {uint32_t ea=c->r[2]+0xFFFFA048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBFE4
  c->r[5]=0u+0x00000003u; // 800CBFE8
  c->r[7]=c->r[3]|0x00000804u; // 800CBFEC
  c->r[4]=0u+0x0000002Fu; // 800CBFF0
  c->r[29]=0u+0x00000001u; // 800CBFF4
  c->r[3]=0u+0x80550000u; // 800CBFF8
  W8(c->r[31]+0x0000006Cu,c->r[5]); // 800CBFFC
  c->f[3]=c->f[1]; // 800CC000
  {uint32_t ea=c->r[31]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800CC004
  c->r[3]=c->r[3]+0x00003D60u; // 800CC008
  W8(c->r[31]+0x0000006Du,c->r[4]); // 800CC00C
  c->r[4]=c->r[31]+0x0000002Cu; // 800CC010
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CC014
  W16(c->r[31]+0x000003BEu,c->r[7]); // 800CC018
  c->r[5]=c->r[31]+0x00000030u; // 800CC01C
  c->r[6]=0u+0x00000000u; // 800CC020
  c->r[7]=0u+0x00000000u; // 800CC024
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800CC028
  W8(c->r[31]+0x00000074u,c->r[0]); // 800CC02C
  W8(c->r[31]+0x00000075u,c->r[0]); // 800CC030
  c->lr=0x800CC038u; f_801D5488(c); // 800CC034
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CC038
  c->r[3]=c->r[31]|c->r[31]; // 800CC03C
  c->lr=0x800CC044u; f_801F58BC(c); // 800CC040
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CC044
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800CC048
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC04C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CC050
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800CC054
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CC058
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800CC05C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CC060
  c->lr=0x800CC068u; f_802501B0(c); // 800CC064
  c->r[3]=0u+0x805D0000u; // 800CC068
  c->r[4]=c->r[31]+0x0000002Cu; // 800CC06C
  c->r[3]=c->r[3]+0x000078B0u; // 800CC070
  c->lr=0x800CC078u; f_802351CC(c); // 800CC074
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CC078
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800CC07C
  c->r[3]=c->r[31]|c->r[31]; // 800CC080
  c->lr=0x800CC088u; f_801F56F4(c); // 800CC084
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CC088
  c->r[3]=c->r[31]|c->r[31]; // 800CC08C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CC090
  c->ctr=c->r[12]; // 800CC094
  if (true) { c->lr=0x800CC09Cu; dispatch(c,c->ctr); } // 800CC098
  c->r[29]=0u+0x80550000u; // 800CC09C
  c->r[30]=0u+0x803A0000u; // 800CC0A0
  c->r[3]=c->r[29]+0xFFFFC848u; // 800CC0A4
  c->r[5]=0u+0x00000000u; // 800CC0A8
  c->r[4]=c->r[30]+0xFFFFDD74u; // 800CC0AC
  c->r[6]=0u+0x00000000u; // 800CC0B0
  c->lr=0x800CC0B8u; f_8018D3E4(c); // 800CC0B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800CC0B8
  W8(c->r[31]+0x00000076u,c->r[3]); // 800CC0BC
  cmpu(c,0,c->r[0],0x000000FFu); // 800CC0C0
  if (crb(c,2)) { goto L_800CC100; } // 800CC0C4
  c->r[6]=R32(c->r[31]+0x00000394u); // 800CC0C8
  c->r[3]=c->r[30]+0xFFFFDD74u; // 800CC0CC
  c->r[4]=c->r[3]+0x00000004u; // 800CC0D0
  c->r[5]=c->r[1]+0x00000008u; // 800CC0D4
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800CC0D8
  c->r[6]=0u+0x00000001u; // 800CC0DC
  c->lr=0x800CC0E4u; f_80257018(c); // 800CC0E0
  c->r[4]=R8(c->r[31]+0x00000076u); // 800CC0E4
  c->r[3]=c->r[29]+0xFFFFC848u; // 800CC0E8
  c->r[5]=c->r[1]+0x00000008u; // 800CC0EC
  c->lr=0x800CC0F4u; f_8018DEB8(c); // 800CC0F0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800CC0F4
  c->r[0]=c->r[0]|0x00004000u; // 800CC0F8
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CC0FC
L_800CC100:;
  c->r[3]=c->r[31]|c->r[31]; // 800CC100
  c->lr=0x800CC108u; f_800CCD18(c); // 800CC104
  c->r[0]=0u+0x00000001u; // 800CC108
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 800CC10C
  W32(c->r[31]+0x00000444u,c->r[0]); // 800CC110
  c->lr=0x800CC118u; f_8024E174(c); // 800CC114
  W32(c->r[31]+0x00000438u,c->r[3]); // 800CC118
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800CC11C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800CC120
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800CC124
  c->r[30]=R32(c->r[1]+0x00000048u); // 800CC128
  c->r[29]=R32(c->r[1]+0x00000044u); // 800CC12C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800CC130
  c->lr=c->r[0]; // 800CC134
  c->r[1]=c->r[1]+0x00000060u; // 800CC138
  return; // 800CC13C
}

// fn_800CC140
void f_800CC140(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC140
  c->r[0]=c->lr; // 800CC144
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CC148
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800CC14C
  W32(c->r[1]+0x00000038u,c->r[30]); // 800CC150
  c->r[30]=c->r[3]|c->r[3]; // 800CC154
  c->lr=0x800CC15Cu; f_800CCA1C(c); // 800CC158
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800CC15C
  c->r[3]=c->r[30]|c->r[30]; // 800CC160
  c->r[12]=R32(c->r[12]+0x00000068u); // 800CC164
  c->ctr=c->r[12]; // 800CC168
  if (true) { c->lr=0x800CC170u; dispatch(c,c->ctr); } // 800CC16C
  c->r[3]=c->r[30]|c->r[30]; // 800CC170
  c->lr=0x800CC178u; f_801F4C0C(c); // 800CC174
  c->r[3]=c->r[30]|c->r[30]; // 800CC178
  c->lr=0x800CC180u; f_800CCC50(c); // 800CC17C
  c->r[3]=c->r[30]|c->r[30]; // 800CC180
  c->lr=0x800CC188u; f_801F56F4(c); // 800CC184
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800CC188
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800CC18C
  if (!crb(c,2)) { goto L_800CC1B4; } // 800CC190
  c->r[4]=R8(c->r[30]+0x00000076u); // 800CC194
  cmpu(c,0,c->r[4],0x000000FFu); // 800CC198
  if (crb(c,2)) { goto L_800CC1B4; } // 800CC19C
  c->r[3]=0u+0x80550000u; // 800CC1A0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CC1A4
  c->lr=0x800CC1ACu; f_8018D694(c); // 800CC1A8
  c->r[0]=0u+0x000000FFu; // 800CC1AC
  W8(c->r[30]+0x00000076u,c->r[0]); // 800CC1B0
L_800CC1B4:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 800CC1B4
  cmpu(c,0,c->r[0],0x000000FFu); // 800CC1B8
  if (crb(c,2)) { goto L_800CC2C0; } // 800CC1BC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CC1C0
  c->r[4]=0u+0x803A0000u; // 800CC1C4
  c->r[4]=c->r[4]+0xFFFFDD74u; // 800CC1C8
  c->r[5]=c->r[1]+0x00000008u; // 800CC1CC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CC1D0
  c->r[4]=c->r[4]+0x00000004u; // 800CC1D4
  c->r[6]=0u+0x00000001u; // 800CC1D8
  c->lr=0x800CC1E0u; f_80257018(c); // 800CC1DC
  c->r[31]=0u+0x80550000u; // 800CC1E0
  c->r[4]=R8(c->r[30]+0x00000076u); // 800CC1E4
  c->r[3]=c->r[31]+0xFFFFC848u; // 800CC1E8
  c->r[5]=c->r[1]+0x00000008u; // 800CC1EC
  c->lr=0x800CC1F4u; f_8018DEB8(c); // 800CC1F0
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800CC1F4
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 800CC1F8
  cmps(c,0,(int32_t)c->r[0],128); // 800CC1FC
  if (!crb(c,2)) { goto L_800CC23C; } // 800CC200
  c->r[3]=0u+0x80620000u; // 800CC204
  c->r[3]=c->r[3]+0x00007688u; // 800CC208
  c->r[3]=R32(c->r[3]+0x00000014u); // 800CC20C
  cmps(c,0,(int32_t)c->r[3],0); // 800CC210
  if (crb(c,2)) { goto L_800CC23C; } // 800CC214
  c->r[4]=0u+0x00000002u; // 800CC218
  c->lr=0x800CC220u; f_80037670(c); // 800CC21C
  cmps(c,0,(int32_t)c->r[3],0); // 800CC220
  if (crb(c,2)) { goto L_800CC23C; } // 800CC224
  c->r[4]=R8(c->r[30]+0x00000076u); // 800CC228
  c->r[3]=c->r[31]+0xFFFFC848u; // 800CC22C
  c->r[5]=0u+0x00000001u; // 800CC230
  c->lr=0x800CC238u; f_8018E2D4(c); // 800CC234
  goto L_800CC2C0; // 800CC238
L_800CC23C:;
  c->r[3]=0u+0x80620000u; // 800CC23C
  c->r[4]=0u+0x00000026u; // 800CC240
  c->r[3]=c->r[3]+0x00007688u; // 800CC244
  c->r[3]=R32(c->r[3]+0x00000014u); // 800CC248
  c->lr=0x800CC250u; f_80037670(c); // 800CC24C
  cmps(c,0,(int32_t)c->r[3],0); // 800CC250
  if (crb(c,2)) { goto L_800CC270; } // 800CC254
  c->r[3]=0u+0x80550000u; // 800CC258
  c->r[4]=R8(c->r[30]+0x00000076u); // 800CC25C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CC260
  c->r[5]=0u+0x00000001u; // 800CC264
  c->lr=0x800CC26Cu; f_8018E2D4(c); // 800CC268
  goto L_800CC2C0; // 800CC26C
L_800CC270:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CC270
  cmps(c,0,(int32_t)c->r[3],0); // 800CC274
  if (crb(c,2)) { goto L_800CC2C0; } // 800CC278
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800CC27C
  cmps(c,0,(int32_t)c->r[0],0); // 800CC280
  if (crb(c,2)) { goto L_800CC2AC; } // 800CC284
  c->r[0]=R8(c->r[30]+0x0000006Fu); // 800CC288
  cmps(c,0,(int32_t)c->r[0],0); // 800CC28C
  if (crb(c,2)) { goto L_800CC2AC; } // 800CC290
  c->r[3]=0u+0x80550000u; // 800CC294
  c->r[4]=R8(c->r[30]+0x00000076u); // 800CC298
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CC29C
  c->r[5]=0u+0x00000000u; // 800CC2A0
  c->lr=0x800CC2A8u; f_8018E2D4(c); // 800CC2A4
  goto L_800CC2C0; // 800CC2A8
L_800CC2AC:;
  c->r[3]=0u+0x80550000u; // 800CC2AC
  c->r[4]=R8(c->r[30]+0x00000076u); // 800CC2B0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CC2B4
  c->r[5]=0u+0x00000001u; // 800CC2B8
  c->lr=0x800CC2C0u; f_8018E2D4(c); // 800CC2BC
L_800CC2C0:;
  c->r[3]=c->r[30]|c->r[30]; // 800CC2C0
  c->lr=0x800CC2C8u; f_800CCDBC(c); // 800CC2C4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800CC2C8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800CC2CC
  c->r[30]=R32(c->r[1]+0x00000038u); // 800CC2D0
  c->lr=c->r[0]; // 800CC2D4
  c->r[1]=c->r[1]+0x00000040u; // 800CC2D8
  return; // 800CC2DC
}

// fn_800CC2E0
void f_800CC2E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC2E0
  c->r[0]=c->lr; // 800CC2E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC2E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC2EC
  c->r[31]=c->r[3]|c->r[3]; // 800CC2F0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CC2F4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CC2F8
  c->lr=0x800CC300u; f_802501B0(c); // 800CC2FC
  c->r[3]=c->r[31]|c->r[31]; // 800CC300
  c->r[4]=0u+0x00000000u; // 800CC304
  c->lr=0x800CC30Cu; f_801F5244(c); // 800CC308
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC30C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC310
  c->lr=c->r[0]; // 800CC314
  c->r[1]=c->r[1]+0x00000010u; // 800CC318
  return; // 800CC31C
}

// fn_800CC320
void f_800CC320(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC320
  c->r[0]=c->lr; // 800CC324
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC32C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CC330
  c->r[30]=c->r[3]|c->r[3]; // 800CC334
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CC338
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CC33C
  c->lr=0x800CC344u; f_802501B0(c); // 800CC340
  c->r[3]=c->r[30]|c->r[30]; // 800CC344
  c->r[4]=0u+0x00000000u; // 800CC348
  c->lr=0x800CC350u; f_801F5244(c); // 800CC34C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CC350
  c->r[3]=c->r[30]+0x0000002Cu; // 800CC354
  c->r[4]=c->r[4]+0x0000005Cu; // 800CC358
  c->lr=0x800CC360u; f_800361A0(c); // 800CC35C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CC360
  c->r[3]=c->r[30]|c->r[30]; // 800CC364
  c->lr=0x800CC36Cu; f_801F5418(c); // 800CC368
  cmps(c,0,(int32_t)c->r[3],0); // 800CC36C
  if (!crb(c,0)) { goto L_800CC3B0; } // 800CC370
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800CC374
  c->r[4]=0u+0x00000001u; // 800CC378
  c->r[0]=0u+0x00000000u; // 800CC37C
  W8(c->r[30]+0x0000006Fu,c->r[4]); // 800CC380
  c->r[3]=c->r[3]|0x00000880u; // 800CC384
  {uint32_t ea=c->r[2]+0xFFFFA048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC388
  W16(c->r[30]+0x000003BEu,c->r[3]); // 800CC38C
  c->r[3]=c->r[30]|c->r[30]; // 800CC390
  c->r[4]=0u+0x00000064u; // 800CC394
  c->r[5]=0u+0x00000000u; // 800CC398
  W8(c->r[30]+0x00000074u,c->r[0]); // 800CC39C
  c->r[6]=0u+0x00000000u; // 800CC3A0
  c->r[7]=0u+0x00000000u; // 800CC3A4
  c->lr=0x800CC3ACu; f_801F4D44(c); // 800CC3A8
  goto L_800CC3E4; // 800CC3AC
L_800CC3B0:;
  c->r[31]=0u+0x805D0000u; // 800CC3B0
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CC3B4
  c->lr=0x800CC3BCu; f_800447E4(c); // 800CC3B8
  cmpu(c,0,c->r[3],0x00000001u); // 800CC3BC
  if (!crb(c,2)) { goto L_800CC3D0; } // 800CC3C0
  c->r[0]=0u+0x00000000u; // 800CC3C4
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800CC3C8
  goto L_800CC3DC; // 800CC3CC
L_800CC3D0:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CC3D0
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800CC3D4
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800CC3D8
L_800CC3DC:;
  c->r[3]=c->r[30]|c->r[30]; // 800CC3DC
  c->lr=0x800CC3E4u; f_801F5B14(c); // 800CC3E0
L_800CC3E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC3E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC3E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CC3EC
  c->lr=c->r[0]; // 800CC3F0
  c->r[1]=c->r[1]+0x00000010u; // 800CC3F4
  return; // 800CC3F8
}

// fn_800CC3FC
void f_800CC3FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC3FC
  c->r[0]=c->lr; // 800CC400
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CC404
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800CC408
  W32(c->r[1]+0x00000048u,c->r[30]); // 800CC40C
  c->r[30]=c->r[3]|c->r[3]; // 800CC410
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CC414
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CC418
  c->lr=0x800CC420u; f_802501B0(c); // 800CC41C
  c->r[3]=c->r[30]+0x00000038u; // 800CC420
  c->r[4]=c->r[30]+0x0000002Cu; // 800CC424
  c->lr=0x800CC42Cu; f_800361A0(c); // 800CC428
  {uint32_t ea=c->r[2]+0xFFFFA048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC42C
  c->r[3]=0u+0x80550000u; // 800CC430
  c->r[3]=c->r[3]+0x00003D60u; // 800CC434
  c->r[4]=c->r[30]+0x00000038u; // 800CC438
  c->f[2]=c->f[1]; // 800CC43C
  c->r[5]=c->r[1]+0x00000008u; // 800CC440
  c->f[3]=c->f[1]; // 800CC444
  c->r[6]=0u+0x00000000u; // 800CC448
  c->r[7]=0u+0x00000000u; // 800CC44C
  c->lr=0x800CC454u; f_801D5488(c); // 800CC450
  c->r[5]=R32(c->r[30]+0x00000394u); // 800CC454
  c->r[3]=c->r[30]+0x00000060u; // 800CC458
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC45C
  c->r[4]=c->r[5]+0x00000068u; // 800CC460
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800CC464
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC468
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800CC46C
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC470
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800CC474
  c->lr=0x800CC47Cu; f_800361A0(c); // 800CC478
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CC47C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CC480
  c->lr=0x800CC488u; f_802501B0(c); // 800CC484
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800CC488
  c->r[31]=0u+0x00000001u; // 800CC48C
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC490
  c->r[4]=c->r[30]+0x0000002Cu; // 800CC494
  {uint32_t ea=c->r[2]+0xFFFFA054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC498
  c->r[0]=c->r[0]|0x00002000u; // 800CC49C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800CC4A0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CC4A4
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800CC4A8
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 800CC4AC
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800CC4B0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CC4B4
  c->r[3]=c->r[3]+0x0000005Cu; // 800CC4B8
  c->lr=0x800CC4C0u; f_800361A0(c); // 800CC4BC
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC4C0
  c->r[4]=0u+0x00000040u; // 800CC4C4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CC4C8
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800CC4CC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CC4D0
  c->r[3]=c->r[3]+0x0000001Cu; // 800CC4D4
  c->lr=0x800CC4DCu; f_802518A4(c); // 800CC4D8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CC4DC
  c->r[4]=0u+0x00000006u; // 800CC4E0
  c->r[3]=c->r[3]+0x0000001Cu; // 800CC4E4
  c->lr=0x800CC4ECu; f_80251824(c); // 800CC4E8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CC4EC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CC4F0
  c->lr=0x800CC4F8u; f_802501B0(c); // 800CC4F4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CC4F8
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800CC4FC
  cmps(c,0,(int32_t)c->r[0],0); // 800CC500
  if (crb(c,2)) { goto L_800CC5CC; } // 800CC504
  c->r[3]=c->r[3]+0x00000068u; // 800CC508
  c->r[4]=c->r[30]+0x00000060u; // 800CC50C
  c->lr=0x800CC514u; f_800361A0(c); // 800CC510
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CC514
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CC518
  c->lr=0x800CC520u; f_8025037C(c); // 800CC51C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800CC520
  c->r[3]=c->r[1]+0x00000024u; // 800CC524
  c->r[4]=c->r[30]+0x00000060u; // 800CC528
  c->r[5]=c->r[1]+0x00000030u; // 800CC52C
  c->r[6]=c->r[6]+0x000000B0u; // 800CC530
  c->r[7]=0u+0x00000000u; // 800CC534
  c->lr=0x800CC53Cu; f_8002BE64(c); // 800CC538
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 800CC53C
  c->r[6]=0u+0x803D0000u; // 800CC540
  c->r[0]=R32(c->r[30]+0x00000030u); // 800CC544
  c->r[3]=0u+0x805D0000u; // 800CC548
  c->r[3]=c->r[3]+0x00003F6Cu; // 800CC54C
  c->r[6]=c->r[6]+0x00001658u; // 800CC550
  W32(c->r[1]+0x00000018u,c->r[4]); // 800CC554
  c->r[4]=c->r[30]|c->r[30]; // 800CC558
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC55C
  c->r[7]=c->r[1]+0x00000018u; // 800CC560
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CC564
  c->r[8]=0u+0x00000000u; // 800CC568
  c->r[0]=R32(c->r[30]+0x00000034u); // 800CC56C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800CC570
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800CC574
  c->r[3]=R32(c->r[30]+0x00000438u); // 800CC578
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CC57C
  c->r[5]=R32(c->r[30]+0x00000394u); // 800CC580
  c->r[6]=R32(c->r[6]+c->r[0]); // 800CC584
  c->lr=0x800CC58Cu; f_801FA6A4(c); // 800CC588
  c->r[0]=R32(c->r[30]+0x000003C4u); // 800CC58C
  cmps(c,0,(int32_t)c->r[0],0); // 800CC590
  if (crb(c,2)) { goto L_800CC5AC; } // 800CC594
  c->r[3]=c->r[30]+0x00000044u; // 800CC598
  c->r[4]=c->r[30]+0x000003CCu; // 800CC59C
  c->lr=0x800CC5A4u; f_800361A0(c); // 800CC5A0
  W8(c->r[30]+0x00000075u,c->r[31]); // 800CC5A4
  goto L_800CC5B4; // 800CC5A8
L_800CC5AC:;
  c->r[0]=0u+0x00000000u; // 800CC5AC
  W8(c->r[30]+0x00000075u,c->r[0]); // 800CC5B0
L_800CC5B4:;
  c->r[6]=0u+0x803A0000u; // 800CC5B4
  c->r[3]=R32(c->r[30]+0x00000438u); // 800CC5B8
  c->r[5]=c->r[30]+0x00000044u; // 800CC5BC
  c->r[4]=0u+0x00000000u; // 800CC5C0
  c->r[6]=c->r[6]+0xFFFFDD68u; // 800CC5C4
  c->lr=0x800CC5CCu; f_801FBEC0(c); // 800CC5C8
L_800CC5CC:;
  c->r[3]=c->r[30]|c->r[30]; // 800CC5CC
  c->r[4]=0u+0x00000000u; // 800CC5D0
  c->lr=0x800CC5D8u; f_801F7C00(c); // 800CC5D4
  c->r[7]=0u+0x803D0000u; // 800CC5D8
  {uint32_t ea=c->r[7]+0x00001668u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CC5DC
  c->r[3]=c->r[30]|c->r[30]; // 800CC5E0
  c->r[4]=c->r[1]+0x0000000Cu; // 800CC5E4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CC5E8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CC5EC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800CC5F0
  W32(c->r[1]+0x00000010u,c->r[5]); // 800CC5F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC5F8
  c->lr=0x800CC600u; f_800CC618(c); // 800CC5FC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CC600
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800CC604
  c->r[30]=R32(c->r[1]+0x00000048u); // 800CC608
  c->lr=c->r[0]; // 800CC60C
  c->r[1]=c->r[1]+0x00000050u; // 800CC610
  return; // 800CC614
}

// fn_800CC618
void f_800CC618(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC618
  c->r[0]=c->lr; // 800CC61C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC620
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC624
  c->r[31]=c->r[4]|c->r[4]; // 800CC628
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CC62C
  c->r[30]=c->r[3]|c->r[3]; // 800CC630
  c->r[3]=c->r[31]|c->r[31]; // 800CC634
  c->lr=0x800CC63Cu; f_802B9FDC(c); // 800CC638
  cmps(c,0,(int32_t)c->r[3],0); // 800CC63C
  if (crb(c,2)) { goto L_800CC65C; } // 800CC640
  c->r[3]=R32(c->r[31]+0x00000000u); // 800CC644
  c->r[0]=R32(c->r[31]+0x00000004u); // 800CC648
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800CC64C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CC650
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CC654
  W32(c->r[30]+0x00000024u,c->r[0]); // 800CC658
L_800CC65C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC65C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC660
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CC664
  c->lr=c->r[0]; // 800CC668
  c->r[1]=c->r[1]+0x00000010u; // 800CC66C
  return; // 800CC670
}

// fn_800CC674
void f_800CC674(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC674
  c->r[0]=c->lr; // 800CC678
  W32(c->r[1]+0x00000064u,c->r[0]); // 800CC67C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800CC680
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800CC684
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 800CC688
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 800CC68C
  c->r[4]=0u+0x00000000u; // 800CC690
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800CC694
  c->r[31]=c->r[3]|c->r[3]; // 800CC698
  W32(c->r[1]+0x00000038u,c->r[30]); // 800CC69C
  c->r[3]=R32(c->r[3]+0x00000438u); // 800CC6A0
  c->lr=0x800CC6A8u; f_801FAF00(c); // 800CC6A4
  cmps(c,0,(int32_t)c->r[3],0); // 800CC6A8
  if (!crb(c,2)) { goto L_800CC764; } // 800CC6AC
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800CC6B0
  c->r[5]=0u+0x00000000u; // 800CC6B4
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800CC6B8
  c->r[4]=c->r[13]+0xFFFF8490u; // 800CC6BC
  c->r[3]=rotl(c->r[3],0)&0xFFFFDFFFu; // 800CC6C0
  W8(c->r[31]+0x00000075u,c->r[5]); // 800CC6C4
  c->r[3]=c->r[3]|0x00000004u; // 800CC6C8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800CC6CC
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800CC6D0
  c->r[3]=c->r[31]|c->r[31]; // 800CC6D4
  c->r[0]=R16(c->r[4]+c->r[0]); // 800CC6D8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800CC6DC
  c->lr=0x800CC6E4u; f_801F5AB4(c); // 800CC6E0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800CC6E4
  c->r[3]=c->r[31]+0x0000002Cu; // 800CC6E8
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CC6EC
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800CC6F0
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CC6F4
  c->r[4]=c->r[4]+0x0000005Cu; // 800CC6F8
  c->lr=0x800CC700u; f_800361A0(c); // 800CC6FC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CC700
  c->r[3]=c->r[31]+0x00000060u; // 800CC704
  c->r[4]=c->r[4]+0x00000068u; // 800CC708
  c->lr=0x800CC710u; f_800361A0(c); // 800CC70C
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800CC710
  c->r[3]=0u+0x805D0000u; // 800CC714
  c->r[0]=R32(c->r[31]+0x00000030u); // 800CC718
  c->r[3]=c->r[3]+0x00006CF8u; // 800CC71C
  c->r[4]=c->r[1]+0x00000008u; // 800CC720
  c->r[5]=0u+0x00040000u; // 800CC724
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CC728
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CC72C
  c->r[0]=R32(c->r[31]+0x00000034u); // 800CC730
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CC734
  c->lr=0x800CC73Cu; f_802236F8(c); // 800CC738
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800CC73C
  c->r[3]=c->r[31]|c->r[31]; // 800CC740
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CC744
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CC748
  c->ctr=c->r[12]; // 800CC74C
  if (true) { c->lr=0x800CC754u; dispatch(c,c->ctr); } // 800CC750
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CC754
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CC758
  c->lr=0x800CC760u; f_8025037C(c); // 800CC75C
  goto L_800CC870; // 800CC760
L_800CC764:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CC764
  c->r[3]=c->r[31]+0x0000002Cu; // 800CC768
  c->r[4]=c->r[4]+0x0000005Cu; // 800CC76C
  c->lr=0x800CC774u; f_800361A0(c); // 800CC770
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CC774
  c->r[3]=c->r[31]+0x00000060u; // 800CC778
  c->r[4]=c->r[4]+0x00000068u; // 800CC77C
  c->lr=0x800CC784u; f_800361A0(c); // 800CC780
  c->r[0]=R8(c->r[31]+0x00000075u); // 800CC784
  cmps(c,0,(int32_t)c->r[0],0); // 800CC788
  if (crb(c,2)) { goto L_800CC870; } // 800CC78C
  c->r[3]=R32(c->r[31]+0x00000438u); // 800CC790
  c->lr=0x800CC798u; f_80050BE4(c); // 800CC794
  cmps(c,0,(int32_t)c->r[3],0); // 800CC798
  if (crb(c,2)) { goto L_800CC870; } // 800CC79C
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800CC7A0
  c->r[30]=0u+0x43300000u; // 800CC7A4
  c->r[4]=0u+0x00000000u; // 800CC7A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CC7AC
  {uint32_t ea=c->r[2]+0xFFFFA068u; c->f[2]=RF64(ea);} // 800CC7B0
  c->r[3]=c->r[13]+0xFFFFAB38u; // 800CC7B4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CC7B8
  {uint32_t ea=c->r[2]+0xFFFFA048u; c->f[31]=c->ps1[31]=RF32(ea);} // 800CC7BC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 800CC7C0
  {uint32_t ea=c->r[2]+0xFFFFA058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC7C4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800CC7C8
  W8(c->r[31]+0x00000075u,c->r[4]); // 800CC7CC
  c->f[31]=c->ps1[31]=S(std::fma(c->f[0],c->f[1],c->f[31])); // 800CC7D0
  c->lr=0x800CC7D8u; f_80211724(c); // 800CC7D4
  c->r[4]=0u+0xAAAB0000u; // 800CC7D8
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800CC7DC
  c->r[4]=c->r[4]+0xFFFFAAABu; // 800CC7E0
  W32(c->r[1]+0x00000028u,c->r[30]); // 800CC7E4
  c->r[4]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[3])>>32); // 800CC7E8
  {uint32_t ea=c->r[2]+0xFFFFA068u; c->f[4]=RF64(ea);} // 800CC7EC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800CC7F0
  {uint32_t ea=c->r[2]+0xFFFFA05Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800CC7F4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 800CC7F8
  W32(c->r[1]+0x00000020u,c->r[30]); // 800CC7FC
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 800CC800
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 800CC804
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)3); // 800CC808
  {uint32_t ea=c->r[2]+0xFFFFA060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC80C
  {uint32_t ea=c->r[2]+0xFFFFA064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC810
  c->f[30]=c->ps1[30]=S(std::fma(c->f[1],c->f[2],c->f[3])); // 800CC814
  c->r[0]=c->r[3]-c->r[0]; // 800CC818
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CC81C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800CC820
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 800CC824
  c->f[31]=c->ps1[31]=S(std::fma(c->f[3],c->f[1],c->f[31])); // 800CC828
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 800CC82C
  c->lr=0x800CC834u; f_802C10A8(c); // 800CC830
  c->f[3]=c->ps1[3]=S(c->f[30]*c->f[1]); // 800CC834
  {uint32_t ea=c->r[2]+0xFFFFA064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC838
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CC83C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 800CC840
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[3]);} // 800CC844
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[2]);} // 800CC848
  c->lr=0x800CC850u; f_802C1080(c); // 800CC84C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 800CC850
  c->r[6]=0u+0x803A0000u; // 800CC854
  c->r[3]=R32(c->r[31]+0x00000438u); // 800CC858
  c->r[5]=c->r[31]+0x00000044u; // 800CC85C
  c->r[6]=c->r[6]+0xFFFFDD68u; // 800CC860
  c->r[4]=0u+0x00000000u; // 800CC864
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800CC868
  c->lr=0x800CC870u; f_801FBEC0(c); // 800CC86C
L_800CC870:;
  c->r[3]=c->r[31]|c->r[31]; // 800CC870
  c->r[4]=0u+0x00000000u; // 800CC874
  c->lr=0x800CC87Cu; f_801F7C00(c); // 800CC878
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800CC87C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800CC880
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 800CC884
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 800CC888
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800CC88C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800CC890
  c->r[30]=R32(c->r[1]+0x00000038u); // 800CC894
  c->lr=c->r[0]; // 800CC898
  c->r[1]=c->r[1]+0x00000060u; // 800CC89C
  return; // 800CC8A0
}

// fn_800CC8A4
void f_800CC8A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC8A4
  c->r[0]=c->lr; // 800CC8A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC8AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC8B0
  c->r[31]=c->r[3]|c->r[3]; // 800CC8B4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CC8B8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CC8BC
  c->lr=0x800CC8C4u; f_802501B0(c); // 800CC8C0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CC8C4
  c->r[6]=0u+0x00000000u; // 800CC8C8
  c->r[0]=0u+0x00000001u; // 800CC8CC
  c->r[3]=c->r[31]+0x0000002Cu; // 800CC8D0
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800CC8D4
  c->r[4]=c->r[31]+0x000003CCu; // 800CC8D8
  c->r[5]=R32(c->r[31]+0x00000394u); // 800CC8DC
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800CC8E0
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800CC8E4
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800CC8E8
  c->r[0]=rotl(c->r[5],0)&0xFFFFDFFFu; // 800CC8EC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CC8F0
  W8(c->r[31]+0x00000074u,c->r[6]); // 800CC8F4
  c->lr=0x800CC8FCu; f_800361A0(c); // 800CC8F8
  c->r[3]=c->r[31]+0x00000060u; // 800CC8FC
  c->r[4]=c->r[31]+0x000003D8u; // 800CC900
  c->lr=0x800CC908u; f_800361A0(c); // 800CC904
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC908
  {uint32_t ea=c->r[2]+0xFFFFA048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC90C
  fcmp(c,0,c->f[1],c->f[0]); // 800CC910
  if (!crb(c,0)) { goto L_800CC940; } // 800CC914
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800CC918
  c->r[4]=c->r[13]+0xFFFF8490u; // 800CC91C
  c->r[3]=c->r[31]|c->r[31]; // 800CC920
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800CC924
  c->r[0]=R16(c->r[4]+c->r[0]); // 800CC928
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800CC92C
  c->lr=0x800CC934u; f_801F5AB4(c); // 800CC930
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800CC934
  c->r[0]=c->r[0]|0x00000080u; // 800CC938
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CC93C
L_800CC940:;
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC940
  {uint32_t ea=c->r[2]+0xFFFFA048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC944
  fcmp(c,0,c->f[1],c->f[0]); // 800CC948
  if (!crb(c,1)) { goto L_800CC984; } // 800CC94C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800CC950
  {uint32_t ea=c->r[2]+0xFFFFA070u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC954
  c->r[0]=rotl(c->r[0],0)&0xFFFFF7FFu; // 800CC958
  fcmp(c,0,c->f[1],c->f[0]); // 800CC95C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CC960
  if (!crb(c,1)) { goto L_800CC984; } // 800CC964
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800CC968
  c->r[4]=c->r[13]+0xFFFF8490u; // 800CC96C
  c->r[3]=c->r[31]|c->r[31]; // 800CC970
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800CC974
  c->r[0]=R16(c->r[4]+c->r[0]); // 800CC978
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800CC97C
  c->lr=0x800CC984u; f_801F5AB4(c); // 800CC980
L_800CC984:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CC984
  c->r[3]=c->r[31]|c->r[31]; // 800CC988
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CC98C
  c->ctr=c->r[12]; // 800CC990
  if (true) { c->lr=0x800CC998u; dispatch(c,c->ctr); } // 800CC994
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC998
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC99C
  c->lr=c->r[0]; // 800CC9A0
  c->r[1]=c->r[1]+0x00000010u; // 800CC9A4
  return; // 800CC9A8
}

// fn_800CC9AC
void f_800CC9AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC9AC
  c->r[0]=c->lr; // 800CC9B0
  c->r[4]=0u+0x000000E1u; // 800CC9B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC9B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC9BC
  c->r[31]=c->r[3]|c->r[3]; // 800CC9C0
  c->r[3]=c->r[3]+0x00000210u; // 800CC9C4
  c->lr=0x800CC9CCu; f_80221630(c); // 800CC9C8
  cmps(c,0,(int32_t)c->r[3],0); // 800CC9CC
  if (!crb(c,2)) { goto L_800CC9DC; } // 800CC9D0
  c->r[3]=0u+0x00000000u; // 800CC9D4
  goto L_800CCA08; // 800CC9D8
L_800CC9DC:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800CC9DC
  c->r[3]=0u+0x803D0000u; // 800CC9E0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CC9E4
  c->r[3]=c->r[3]+0x00001648u; // 800CC9E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CC9EC
  c->r[5]=0u+0x00000000u; // 800CC9F0
  c->r[3]=R32(c->r[3]+c->r[0]); // 800CC9F4
  c->r[4]=c->r[4]+0x0000010Cu; // 800CC9F8
  c->lr=0x800CCA00u; f_8024EE50(c); // 800CC9FC
  c->r[0]=cntlz(c->r[3]); // 800CCA00
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CCA04
L_800CCA08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCA08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCA0C
  c->lr=c->r[0]; // 800CCA10
  c->r[1]=c->r[1]+0x00000010u; // 800CCA14
  return; // 800CCA18
}

// fn_800CCA1C
void f_800CCA1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCA1C
  c->r[0]=c->lr; // 800CCA20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCA24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCA28
  c->r[31]=0u+0x805D0000u; // 800CCA2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CCA30
  c->r[30]=c->r[3]|c->r[3]; // 800CCA34
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CCA38
  c->lr=0x800CCA40u; f_80045264(c); // 800CCA3C
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800CCA40
  c->r[4]=c->r[13]+0xFFFF8490u; // 800CCA44
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800CCA48
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800CCA4C
  c->r[0]=R16(c->r[4]+c->r[0]); // 800CCA50
  cmpu(c,0,c->r[0],c->r[3]); // 800CCA54
  if (!crb(c,2)) { goto L_800CCA94; } // 800CCA58
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CCA5C
  c->lr=0x800CCA64u; f_80037AF0(c); // 800CCA60
  cmpu(c,0,c->r[3],c->r[30]); // 800CCA64
  if (!crb(c,2)) { goto L_800CCA94; } // 800CCA68
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800CCA6C
  cmps(c,0,(int32_t)c->r[0],101); // 800CCA70
  if (crb(c,2)) { goto L_800CCA94; } // 800CCA74
  {uint32_t ea=c->r[2]+0xFFFFA048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCA78
  c->r[3]=c->r[30]|c->r[30]; // 800CCA7C
  c->r[4]=0u+0x00000065u; // 800CCA80
  c->r[5]=0u+0x00000000u; // 800CCA84
  c->r[6]=0u+0x00000000u; // 800CCA88
  c->r[7]=0u+0x00000000u; // 800CCA8C
  c->lr=0x800CCA94u; f_801F4D44(c); // 800CCA90
L_800CCA94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCA94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCA98
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CCA9C
  c->lr=c->r[0]; // 800CCAA0
  c->r[1]=c->r[1]+0x00000010u; // 800CCAA4
  return; // 800CCAA8
}

// fn_800CCAAC
void f_800CCAAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCAAC
  c->r[0]=c->lr; // 800CCAB0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CCAB4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800CCAB8
  c->r[31]=0u+0x803D0000u; // 800CCABC
  c->r[31]=c->r[31]+0x00001648u; // 800CCAC0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800CCAC4
  c->r[30]=c->r[3]|c->r[3]; // 800CCAC8
  c->lr=0x800CCAD0u; f_801F4F28(c); // 800CCACC
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800CCAD0
  cmps(c,0,(int32_t)c->r[0],101); // 800CCAD4
  if (crb(c,2)) { goto L_800CCB28; } // 800CCAD8
  if (!crb(c,0)) { goto L_800CCAEC; } // 800CCADC
  cmps(c,0,(int32_t)c->r[0],100); // 800CCAE0
  if (!crb(c,0)) { goto L_800CCAF8; } // 800CCAE4
  goto L_800CCB84; // 800CCAE8
L_800CCAEC:;
  cmps(c,0,(int32_t)c->r[0],103); // 800CCAEC
  if (!crb(c,0)) { goto L_800CCB84; } // 800CCAF0
  goto L_800CCB58; // 800CCAF4
L_800CCAF8:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800CCAF8
  c->r[5]=c->r[31]+0x0000002Cu; // 800CCAFC
  c->r[3]=c->r[30]|c->r[30]; // 800CCB00
  c->r[4]=c->r[1]+0x00000020u; // 800CCB04
  c->r[7]=R32(c->r[31]+0x0000002Cu); // 800CCB08
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CCB0C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CCB10
  W32(c->r[1]+0x00000020u,c->r[7]); // 800CCB14
  W32(c->r[1]+0x00000024u,c->r[6]); // 800CCB18
  W32(c->r[1]+0x00000028u,c->r[0]); // 800CCB1C
  c->lr=0x800CCB24u; f_800CC618(c); // 800CCB20
  goto L_800CCB84; // 800CCB24
L_800CCB28:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800CCB28
  c->r[5]=c->r[31]+0x00000038u; // 800CCB2C
  c->r[3]=c->r[30]|c->r[30]; // 800CCB30
  c->r[4]=c->r[1]+0x00000014u; // 800CCB34
  c->r[7]=R32(c->r[31]+0x00000038u); // 800CCB38
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CCB3C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CCB40
  W32(c->r[1]+0x00000014u,c->r[7]); // 800CCB44
  W32(c->r[1]+0x00000018u,c->r[6]); // 800CCB48
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CCB4C
  c->lr=0x800CCB54u; f_800CC618(c); // 800CCB50
  goto L_800CCB84; // 800CCB54
L_800CCB58:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800CCB58
  c->r[5]=c->r[31]+0x00000044u; // 800CCB5C
  c->r[3]=c->r[30]|c->r[30]; // 800CCB60
  c->r[4]=c->r[1]+0x00000008u; // 800CCB64
  c->r[7]=R32(c->r[31]+0x00000044u); // 800CCB68
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CCB6C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CCB70
  W32(c->r[1]+0x00000008u,c->r[7]); // 800CCB74
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800CCB78
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CCB7C
  c->lr=0x800CCB84u; f_800CC618(c); // 800CCB80
L_800CCB84:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800CCB84
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800CCB88
  c->r[30]=R32(c->r[1]+0x00000038u); // 800CCB8C
  c->lr=c->r[0]; // 800CCB90
  c->r[1]=c->r[1]+0x00000040u; // 800CCB94
  return; // 800CCB98
}

// fn_800CCB9C
void f_800CCB9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCB9C
  c->r[0]=c->lr; // 800CCBA0
  c->r[6]=c->r[4]|c->r[4]; // 800CCBA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCBA8
  c->r[0]=R8(c->r[3]+0x00000074u); // 800CCBAC
  cmps(c,0,(int32_t)c->r[0],1); // 800CCBB0
  if (crb(c,2)) { goto L_800CCBD4; } // 800CCBB4
  if (!crb(c,0)) { goto L_800CCBC0; } // 800CCBB8
  goto L_800CCBCC; // 800CCBBC
L_800CCBC0:;
  cmps(c,0,(int32_t)c->r[0],3); // 800CCBC0
  if (!crb(c,0)) { goto L_800CCBCC; } // 800CCBC4
  goto L_800CCBDC; // 800CCBC8
L_800CCBCC:;
  c->r[5]=0u+0x00000000u; // 800CCBCC
  goto L_800CCBE0; // 800CCBD0
L_800CCBD4:;
  c->r[5]=0u+0x00000001u; // 800CCBD4
  goto L_800CCBE0; // 800CCBD8
L_800CCBDC:;
  c->r[5]=0u+0x00000002u; // 800CCBDC
L_800CCBE0:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CCBE0
  c->r[3]=c->r[6]|c->r[6]; // 800CCBE4
  c->lr=0x800CCBECu; f_80250BF4(c); // 800CCBE8
  c->r[0]=cntlz(c->r[3]); // 800CCBEC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CCBF0
  c->r[3]=0u-c->r[0]; // 800CCBF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCBF8
  c->lr=c->r[0]; // 800CCBFC
  c->r[1]=c->r[1]+0x00000010u; // 800CCC00
  return; // 800CCC04
}

// fn_800CCC08
void f_800CCC08(Ctx* __restrict c) {
  W8(c->r[3]+0x00000074u,c->r[4]); // 800CCC08
  return; // 800CCC0C
}

// fn_800CCC10
void f_800CCC10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCC10
  c->r[0]=c->lr; // 800CCC14
  c->r[7]=0u+0x803D0000u; // 800CCC18
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CCC1C
  c->r[4]=c->r[1]+0x00000008u; // 800CCC20
  {uint32_t ea=c->r[7]+0x00001698u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CCC24
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CCC28
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CCC2C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CCC30
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800CCC34
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CCC38
  c->lr=0x800CCC40u; f_800CC618(c); // 800CCC3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CCC40
  c->lr=c->r[0]; // 800CCC44
  c->r[1]=c->r[1]+0x00000020u; // 800CCC48
  return; // 800CCC4C
}

// fn_800CCC50
void f_800CCC50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCC50
  c->r[0]=c->lr; // 800CCC54
  W32(c->r[1]+0x00000094u,c->r[0]); // 800CCC58
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800CCC5C
  W32(c->r[1]+0x00000088u,c->r[30]); // 800CCC60
  c->r[30]=c->r[3]|c->r[3]; // 800CCC64
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CCC68
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800CCC6C
  cmps(c,0,(int32_t)c->r[0],0); // 800CCC70
  if (!crb(c,2)) { goto L_800CCD00; } // 800CCC74
  c->r[3]=R16(c->r[3]+0x000003BEu); // 800CCC78
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800CCC7C
  if (crb(c,2)) { goto L_800CCD00; } // 800CCC80
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800CCC84
  cmps(c,0,(int32_t)c->r[0],128); // 800CCC88
  if (!crb(c,2)) { goto L_800CCCB4; } // 800CCC8C
  c->r[3]=0u+0x80620000u; // 800CCC90
  c->r[3]=c->r[3]+0x00007688u; // 800CCC94
  c->r[3]=R32(c->r[3]+0x00000014u); // 800CCC98
  cmps(c,0,(int32_t)c->r[3],0); // 800CCC9C
  if (crb(c,2)) { goto L_800CCCB4; } // 800CCCA0
  c->r[4]=0u+0x00000002u; // 800CCCA4
  c->lr=0x800CCCACu; f_80037670(c); // 800CCCA8
  cmps(c,0,(int32_t)c->r[3],0); // 800CCCAC
  if (!crb(c,2)) { goto L_800CCD00; } // 800CCCB0
L_800CCCB4:;
  {uint32_t ea=c->r[2]+0xFFFFA074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CCCB4
  c->r[3]=c->r[1]+0x00000008u; // 800CCCB8
  c->r[4]=c->r[30]+0x0000002Cu; // 800CCCBC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800CCCC0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800CCCC4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800CCCC8
  c->lr=0x800CCCD0u; f_800361A0(c); // 800CCCCC
  c->r[31]=0u+0x80550000u; // 800CCCD0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCCD4
  c->r[31]=c->r[31]+0x00003D60u; // 800CCCD8
  c->r[5]=c->r[30]|c->r[30]; // 800CCCDC
  c->r[3]=c->r[31]+0x00000010u; // 800CCCE0
  c->r[6]=c->r[1]+0x00000008u; // 800CCCE4
  c->r[7]=c->r[1]+0x00000020u; // 800CCCE8
  c->r[4]=0u+0x000001FFu; // 800CCCEC
  c->lr=0x800CCCF4u; f_80226910(c); // 800CCCF0
  c->r[3]=c->r[31]+0x00000010u; // 800CCCF4
  c->r[4]=c->r[1]+0x00000020u; // 800CCCF8
  c->lr=0x800CCD00u; f_80226D68(c); // 800CCCFC
L_800CCD00:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800CCD00
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800CCD04
  c->r[30]=R32(c->r[1]+0x00000088u); // 800CCD08
  c->lr=c->r[0]; // 800CCD0C
  c->r[1]=c->r[1]+0x00000090u; // 800CCD10
  return; // 800CCD14
}

// fn_800CCD18
void f_800CCD18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCD18
  c->r[0]=c->lr; // 800CCD1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCD20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCD24
  c->r[31]=c->r[3]|c->r[3]; // 800CCD28
  c->r[3]=c->r[3]+0x00000210u; // 800CCD2C
  c->lr=0x800CCD34u; f_8004BAD4(c); // 800CCD30
  cmps(c,0,(int32_t)c->r[3],0); // 800CCD34
  if (crb(c,2)) { goto L_800CCDA8; } // 800CCD38
  c->r[0]=R32(c->r[31]+0x00000210u); // 800CCD3C
  c->r[4]=c->r[31]|c->r[31]; // 800CCD40
  c->r[3]=c->r[31]+0x00000210u; // 800CCD44
  c->r[0]=c->r[0]|0xAA000000u; // 800CCD48
  W32(c->r[31]+0x00000210u,c->r[0]); // 800CCD4C
  c->lr=0x800CCD54u; f_80043E44(c); // 800CCD50
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCD54
  c->r[3]=c->r[31]+0x00000210u; // 800CCD58
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CCD5C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CCD60
  c->lr=0x800CCD68u; f_80043E34(c); // 800CCD64
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CCD68
  c->r[4]=0u+0x803A0000u; // 800CCD6C
  c->r[4]=c->r[4]+0xFFFFDD74u; // 800CCD70
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CCD74
  c->r[4]=c->r[4]+0x00000004u; // 800CCD78
  c->lr=0x800CCD80u; f_80256EC4(c); // 800CCD7C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CCD80
  c->r[5]=c->r[3]|c->r[3]; // 800CCD84
  c->r[3]=c->r[31]+0x00000210u; // 800CCD88
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800CCD8C
  c->lr=0x800CCD94u; f_8004BAC8(c); // 800CCD90
  {uint32_t ea=c->r[2]+0xFFFFA078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCD94
  c->r[3]=c->r[31]+0x00000210u; // 800CCD98
  c->f[2]=c->f[1]; // 800CCD9C
  c->f[3]=c->f[1]; // 800CCDA0
  c->lr=0x800CCDA8u; f_80043E24(c); // 800CCDA4
L_800CCDA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCDA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCDAC
  c->lr=c->r[0]; // 800CCDB0
  c->r[1]=c->r[1]+0x00000010u; // 800CCDB4
  return; // 800CCDB8
}

// fn_800CCDBC
void f_800CCDBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCDBC
  c->r[0]=c->lr; // 800CCDC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCDC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCDC8
  c->r[31]=c->r[3]|c->r[3]; // 800CCDCC
  c->r[3]=c->r[3]+0x00000210u; // 800CCDD0
  c->lr=0x800CCDD8u; f_80221698(c); // 800CCDD4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CCDD8
  cmps(c,0,(int32_t)c->r[3],0); // 800CCDDC
  if (crb(c,2)) { goto L_800CCE00; } // 800CCDE0
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800CCDE4
  cmps(c,0,(int32_t)c->r[0],0); // 800CCDE8
  if (crb(c,2)) { goto L_800CCE00; } // 800CCDEC
  c->r[0]=R32(c->r[31]+0x00000210u); // 800CCDF0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800CCDF4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800CCDF8
  goto L_800CCE0C; // 800CCDFC
L_800CCE00:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800CCE00
  c->r[0]=c->r[0]|0x80000000u; // 800CCE04
  W32(c->r[31]+0x00000210u,c->r[0]); // 800CCE08
L_800CCE0C:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800CCE0C
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800CCE10
  if (crb(c,2)) { goto L_800CCE24; } // 800CCE14
  c->r[0]=R32(c->r[31]+0x00000210u); // 800CCE18
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800CCE1C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800CCE20
L_800CCE24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCE24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCE28
  c->lr=c->r[0]; // 800CCE2C
  c->r[1]=c->r[1]+0x00000010u; // 800CCE30
  return; // 800CCE34
}

// fn_800CCE38
void f_800CCE38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCE38
  c->r[0]=c->lr; // 800CCE3C
  cmps(c,0,(int32_t)c->r[3],0); // 800CCE40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCE44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCE48
  c->r[31]=c->r[4]|c->r[4]; // 800CCE4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CCE50
  c->r[30]=c->r[3]|c->r[3]; // 800CCE54
  if (crb(c,2)) { goto L_800CCE74; } // 800CCE58
  c->r[4]=0u+0x00000000u; // 800CCE5C
  c->lr=0x800CCE64u; f_8026A06C(c); // 800CCE60
  cmps(c,0,(int32_t)c->r[31],0); // 800CCE64
  if (!crb(c,1)) { goto L_800CCE74; } // 800CCE68
  c->r[3]=c->r[30]|c->r[30]; // 800CCE6C
  c->lr=0x800CCE74u; f_8026A268(c); // 800CCE70
L_800CCE74:;
  c->r[3]=c->r[30]|c->r[30]; // 800CCE74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCE78
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CCE7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCE80
  c->lr=c->r[0]; // 800CCE84
  c->r[1]=c->r[1]+0x00000010u; // 800CCE88
  return; // 800CCE8C
}

// fn_800CCE90
void f_800CCE90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCE90
  c->r[0]=c->lr; // 800CCE94
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CCE98
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800CCE9C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800CCEA0
  c->r[4]=0u+0x00000000u; // 800CCEA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCEA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CCEAC
  c->r[30]=c->r[3]|c->r[3]; // 800CCEB0
  c->lr=0x800CCEB8u; f_801F57D0(c); // 800CCEB4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800CCEB8
  c->r[3]=c->r[30]|c->r[30]; // 800CCEBC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800CCEC0
  c->ctr=c->r[12]; // 800CCEC4
  if (true) { c->lr=0x800CCECCu; dispatch(c,c->ctr); } // 800CCEC8
  c->r[3]=c->r[30]|c->r[30]; // 800CCECC
  c->lr=0x800CCED4u; f_801F4B94(c); // 800CCED0
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800CCED4
  c->r[6]=0u+0x00000003u; // 800CCED8
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800CCEDC
  c->r[5]=0u+0x00000030u; // 800CCEE0
  c->r[3]=c->r[3]|0x00000804u; // 800CCEE4
  c->r[4]=0u+0x00000001u; // 800CCEE8
  c->r[3]=rotl(c->r[3],0)&0xFFFFBFFFu; // 800CCEEC
  cmps(c,0,(int32_t)c->r[0],1); // 800CCEF0
  W8(c->r[30]+0x0000006Cu,c->r[6]); // 800CCEF4
  W8(c->r[30]+0x0000006Du,c->r[5]); // 800CCEF8
  W8(c->r[30]+0x0000006Fu,c->r[4]); // 800CCEFC
  W16(c->r[30]+0x000003BEu,c->r[3]); // 800CCF00
  if (crb(c,2)) { goto L_800CCF24; } // 800CCF04
  if (!crb(c,0)) { goto L_800CCF30; } // 800CCF08
  cmps(c,0,(int32_t)c->r[0],0); // 800CCF0C
  if (!crb(c,0)) { goto L_800CCF18; } // 800CCF10
  goto L_800CCF30; // 800CCF14
L_800CCF18:;
  c->r[0]=rotl(c->r[3],0)&0x00007FFFu; // 800CCF18
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800CCF1C
  goto L_800CCF30; // 800CCF20
L_800CCF24:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800CCF24
  c->r[0]=c->r[0]|0x00008000u; // 800CCF28
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800CCF2C
L_800CCF30:;
  {uint32_t ea=c->r[2]+0xFFFFA088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCF30
  c->r[0]=0u+0x00000000u; // 800CCF34
  c->r[3]=0u+0x80550000u; // 800CCF38
  W8(c->r[30]+0x00000028u,c->r[0]); // 800CCF3C
  c->f[3]=c->f[1]; // 800CCF40
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800CCF44
  {uint32_t ea=c->r[2]+0xFFFFA08Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CCF48
  c->r[3]=c->r[3]+0x00003D60u; // 800CCF4C
  c->r[4]=c->r[30]+0x0000002Cu; // 800CCF50
  c->r[5]=c->r[30]+0x00000030u; // 800CCF54
  c->r[6]=0u+0x00000000u; // 800CCF58
  c->r[7]=0u+0x00000000u; // 800CCF5C
  c->lr=0x800CCF64u; f_801D5488(c); // 800CCF60
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CCF64
  c->r[3]=c->r[30]|c->r[30]; // 800CCF68
  c->lr=0x800CCF70u; f_801F58BC(c); // 800CCF6C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CCF70
  c->r[31]=0u+0x00000001u; // 800CCF74
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800CCF78
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCF7C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CCF80
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800CCF84
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CCF88
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800CCF8C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CCF90
  c->lr=0x800CCF98u; f_802501B0(c); // 800CCF94
  c->r[3]=0u+0x805D0000u; // 800CCF98
  c->r[4]=c->r[30]+0x0000002Cu; // 800CCF9C
  c->r[3]=c->r[3]+0x000078B0u; // 800CCFA0
  c->lr=0x800CCFA8u; f_802351CC(c); // 800CCFA4
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CCFA8
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800CCFAC
  c->r[3]=c->r[30]|c->r[30]; // 800CCFB0
  c->lr=0x800CCFB8u; f_801F56F4(c); // 800CCFB4
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800CCFB8
  c->r[3]=c->r[30]|c->r[30]; // 800CCFBC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CCFC0
  c->ctr=c->r[12]; // 800CCFC4
  if (true) { c->lr=0x800CCFCCu; dispatch(c,c->ctr); } // 800CCFC8
  c->r[3]=c->r[30]|c->r[30]; // 800CCFCC
  c->lr=0x800CCFD4u; f_800CD8F8(c); // 800CCFD0
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800CCFD4
  W32(c->r[30]+0x00000444u,c->r[31]); // 800CCFD8
  c->lr=0x800CCFE0u; f_8024E174(c); // 800CCFDC
  W32(c->r[30]+0x00000438u,c->r[3]); // 800CCFE0
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800CCFE4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800CCFE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCFEC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CCFF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CCFF4
  c->lr=c->r[0]; // 800CCFF8
  c->r[1]=c->r[1]+0x00000020u; // 800CCFFC
  return; // 800CD000
}

// fn_800CD004
void f_800CD004(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD004
  c->r[0]=c->lr; // 800CD008
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD00C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD010
  c->r[31]=c->r[3]|c->r[3]; // 800CD014
  c->lr=0x800CD01Cu; f_800CD670(c); // 800CD018
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CD01C
  c->r[3]=c->r[31]|c->r[31]; // 800CD020
  c->r[12]=R32(c->r[12]+0x00000068u); // 800CD024
  c->ctr=c->r[12]; // 800CD028
  if (true) { c->lr=0x800CD030u; dispatch(c,c->ctr); } // 800CD02C
  c->r[3]=c->r[31]|c->r[31]; // 800CD030
  c->lr=0x800CD038u; f_801F4C0C(c); // 800CD034
  c->r[3]=c->r[31]|c->r[31]; // 800CD038
  c->lr=0x800CD040u; f_800CD830(c); // 800CD03C
  c->r[3]=R8(c->r[31]+0x00000028u); // 800CD040
  cmps(c,0,(int32_t)c->r[3],2); // 800CD044
  if (crb(c,2)) { goto L_800CD090; } // 800CD048
  if (!crb(c,0)) { goto L_800CD060; } // 800CD04C
  cmps(c,0,(int32_t)c->r[3],0); // 800CD050
  if (crb(c,2)) { goto L_800CD06C; } // 800CD054
  if (!crb(c,0)) { goto L_800CD084; } // 800CD058
  goto L_800CD0B0; // 800CD05C
L_800CD060:;
  cmps(c,0,(int32_t)c->r[3],4); // 800CD060
  if (!crb(c,0)) { goto L_800CD0B0; } // 800CD064
  goto L_800CD0A8; // 800CD068
L_800CD06C:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800CD06C
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800CD070
  if (crb(c,2)) { goto L_800CD0B0; } // 800CD074
  c->r[0]=c->r[3]+0x00000001u; // 800CD078
  W8(c->r[31]+0x00000028u,c->r[0]); // 800CD07C
  goto L_800CD0B0; // 800CD080
L_800CD084:;
  c->r[0]=c->r[3]+0x00000001u; // 800CD084
  W8(c->r[31]+0x00000028u,c->r[0]); // 800CD088
  goto L_800CD0B0; // 800CD08C
L_800CD090:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800CD090
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800CD094
  if (!crb(c,2)) { goto L_800CD0B0; } // 800CD098
  c->r[0]=c->r[3]+0x00000001u; // 800CD09C
  W8(c->r[31]+0x00000028u,c->r[0]); // 800CD0A0
  goto L_800CD0B0; // 800CD0A4
L_800CD0A8:;
  c->r[0]=0u+0x00000000u; // 800CD0A8
  W8(c->r[31]+0x00000028u,c->r[0]); // 800CD0AC
L_800CD0B0:;
  c->r[3]=c->r[31]|c->r[31]; // 800CD0B0
  c->lr=0x800CD0B8u; f_801F56F4(c); // 800CD0B4
  c->r[3]=c->r[31]|c->r[31]; // 800CD0B8
  c->lr=0x800CD0C0u; f_800CD998(c); // 800CD0BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD0C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD0C4
  c->lr=c->r[0]; // 800CD0C8
  c->r[1]=c->r[1]+0x00000010u; // 800CD0CC
  return; // 800CD0D0
}

// fn_800CD0D4
void f_800CD0D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD0D4
  c->r[0]=c->lr; // 800CD0D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD0DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD0E0
  c->r[31]=c->r[3]|c->r[3]; // 800CD0E4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CD0E8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CD0EC
  c->lr=0x800CD0F4u; f_802501B0(c); // 800CD0F0
  c->r[3]=c->r[31]|c->r[31]; // 800CD0F4
  c->r[4]=0u+0x00000000u; // 800CD0F8
  c->lr=0x800CD100u; f_801F5244(c); // 800CD0FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD100
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD104
  c->lr=c->r[0]; // 800CD108
  c->r[1]=c->r[1]+0x00000010u; // 800CD10C
  return; // 800CD110
}

// fn_800CD114
void f_800CD114(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD114
  c->r[0]=c->lr; // 800CD118
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD11C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD120
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CD124
  c->r[30]=c->r[3]|c->r[3]; // 800CD128
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CD12C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CD130
  c->lr=0x800CD138u; f_802501B0(c); // 800CD134
  c->r[3]=c->r[30]|c->r[30]; // 800CD138
  c->r[4]=0u+0x00000000u; // 800CD13C
  c->lr=0x800CD144u; f_801F5244(c); // 800CD140
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CD144
  c->r[3]=c->r[30]+0x0000002Cu; // 800CD148
  c->r[4]=c->r[4]+0x0000005Cu; // 800CD14C
  c->lr=0x800CD154u; f_800361A0(c); // 800CD150
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CD154
  c->r[3]=c->r[30]|c->r[30]; // 800CD158
  c->lr=0x800CD160u; f_801F5418(c); // 800CD15C
  cmps(c,0,(int32_t)c->r[3],0); // 800CD160
  if (!crb(c,0)) { goto L_800CD19C; } // 800CD164
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800CD168
  c->r[3]=0u+0x00000001u; // 800CD16C
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800CD170
  c->r[3]=c->r[30]|c->r[30]; // 800CD174
  c->r[0]=c->r[0]|0x00000880u; // 800CD178
  {uint32_t ea=c->r[2]+0xFFFFA088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD17C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800CD180
  c->r[4]=0u+0x00000064u; // 800CD184
  c->r[5]=0u+0x00000000u; // 800CD188
  c->r[6]=0u+0x00000000u; // 800CD18C
  c->r[7]=0u+0x00000000u; // 800CD190
  c->lr=0x800CD198u; f_801F4D44(c); // 800CD194
  goto L_800CD1D0; // 800CD198
L_800CD19C:;
  c->r[31]=0u+0x805D0000u; // 800CD19C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CD1A0
  c->lr=0x800CD1A8u; f_800447E4(c); // 800CD1A4
  cmpu(c,0,c->r[3],0x00000001u); // 800CD1A8
  if (!crb(c,2)) { goto L_800CD1BC; } // 800CD1AC
  c->r[0]=0u+0x00000000u; // 800CD1B0
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800CD1B4
  goto L_800CD1C8; // 800CD1B8
L_800CD1BC:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CD1BC
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800CD1C0
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800CD1C4
L_800CD1C8:;
  c->r[3]=c->r[30]|c->r[30]; // 800CD1C8
  c->lr=0x800CD1D0u; f_801F5B14(c); // 800CD1CC
L_800CD1D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD1D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD1D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CD1D8
  c->lr=c->r[0]; // 800CD1DC
  c->r[1]=c->r[1]+0x00000010u; // 800CD1E0
  return; // 800CD1E4
}

// fn_800CD1E8
void f_800CD1E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD1E8
  c->r[0]=c->lr; // 800CD1EC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CD1F0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800CD1F4
  c->r[31]=c->r[3]|c->r[3]; // 800CD1F8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CD1FC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CD200
  c->lr=0x800CD208u; f_802501B0(c); // 800CD204
  c->r[3]=c->r[31]+0x00000038u; // 800CD208
  c->r[4]=c->r[31]+0x0000002Cu; // 800CD20C
  c->lr=0x800CD214u; f_800361A0(c); // 800CD210
  {uint32_t ea=c->r[2]+0xFFFFA088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD214
  c->r[3]=0u+0x80550000u; // 800CD218
  c->r[3]=c->r[3]+0x00003D60u; // 800CD21C
  c->r[4]=c->r[31]+0x00000038u; // 800CD220
  c->f[2]=c->f[1]; // 800CD224
  c->r[5]=c->r[1]+0x00000008u; // 800CD228
  c->f[3]=c->f[1]; // 800CD22C
  c->r[6]=0u+0x00000000u; // 800CD230
  c->r[7]=0u+0x00000000u; // 800CD234
  c->lr=0x800CD23Cu; f_801D5488(c); // 800CD238
  c->r[5]=R32(c->r[31]+0x00000394u); // 800CD23C
  c->r[3]=c->r[31]+0x00000060u; // 800CD240
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD244
  c->r[4]=c->r[5]+0x00000068u; // 800CD248
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800CD24C
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD250
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800CD254
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD258
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800CD25C
  c->lr=0x800CD264u; f_800361A0(c); // 800CD260
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CD264
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CD268
  c->lr=0x800CD270u; f_802501B0(c); // 800CD26C
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800CD270
  c->r[0]=0u+0x00000001u; // 800CD274
  {uint32_t ea=c->r[2]+0xFFFFA090u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD278
  c->r[4]=c->r[31]+0x0000002Cu; // 800CD27C
  {uint32_t ea=c->r[2]+0xFFFFA094u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD280
  c->r[3]=c->r[3]|0x00002000u; // 800CD284
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800CD288
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CD28C
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800CD290
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800CD294
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800CD298
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CD29C
  c->r[3]=c->r[3]+0x0000005Cu; // 800CD2A0
  c->lr=0x800CD2A8u; f_800361A0(c); // 800CD2A4
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD2A8
  c->r[4]=0u+0x00000040u; // 800CD2AC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CD2B0
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800CD2B4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CD2B8
  c->r[3]=c->r[3]+0x0000001Cu; // 800CD2BC
  c->lr=0x800CD2C4u; f_802518A4(c); // 800CD2C0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CD2C4
  c->r[4]=0u+0x00000006u; // 800CD2C8
  c->r[3]=c->r[3]+0x0000001Cu; // 800CD2CC
  c->lr=0x800CD2D4u; f_80251824(c); // 800CD2D0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CD2D4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CD2D8
  c->lr=0x800CD2E0u; f_802501B0(c); // 800CD2DC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CD2E0
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800CD2E4
  cmps(c,0,(int32_t)c->r[0],0); // 800CD2E8
  if (crb(c,2)) { goto L_800CD37C; } // 800CD2EC
  c->r[3]=c->r[3]+0x00000068u; // 800CD2F0
  c->r[4]=c->r[31]+0x00000060u; // 800CD2F4
  c->lr=0x800CD2FCu; f_800361A0(c); // 800CD2F8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CD2FC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CD300
  c->lr=0x800CD308u; f_8025037C(c); // 800CD304
  c->r[6]=R32(c->r[31]+0x00000394u); // 800CD308
  c->r[3]=c->r[1]+0x00000024u; // 800CD30C
  c->r[4]=c->r[31]+0x00000060u; // 800CD310
  c->r[5]=c->r[1]+0x00000030u; // 800CD314
  c->r[6]=c->r[6]+0x000000B0u; // 800CD318
  c->r[7]=0u+0x00000000u; // 800CD31C
  c->lr=0x800CD324u; f_8002BE64(c); // 800CD320
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800CD324
  c->r[3]=0u+0x805D0000u; // 800CD328
  c->r[0]=R32(c->r[31]+0x00000030u); // 800CD32C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800CD330
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD334
  c->r[4]=c->r[31]|c->r[31]; // 800CD338
  W32(c->r[1]+0x00000018u,c->r[5]); // 800CD33C
  c->r[7]=c->r[1]+0x00000018u; // 800CD340
  c->r[6]=0u+0x00000020u; // 800CD344
  c->r[8]=0u+0x00000000u; // 800CD348
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CD34C
  c->r[0]=R32(c->r[31]+0x00000034u); // 800CD350
  W32(c->r[1]+0x00000020u,c->r[0]); // 800CD354
  c->r[3]=R32(c->r[31]+0x00000438u); // 800CD358
  c->r[5]=R32(c->r[31]+0x00000394u); // 800CD35C
  c->lr=0x800CD364u; f_801FA6A4(c); // 800CD360
  c->r[6]=0u+0x803A0000u; // 800CD364
  c->r[3]=R32(c->r[31]+0x00000438u); // 800CD368
  c->r[5]=c->r[31]+0x00000044u; // 800CD36C
  c->r[4]=0u+0x00000000u; // 800CD370
  c->r[6]=c->r[6]+0xFFFFDD88u; // 800CD374
  c->lr=0x800CD37Cu; f_801FBEC0(c); // 800CD378
L_800CD37C:;
  c->r[3]=c->r[31]|c->r[31]; // 800CD37C
  c->r[4]=0u+0x00000000u; // 800CD380
  c->lr=0x800CD388u; f_801F7C00(c); // 800CD384
  c->r[7]=0u+0x803D0000u; // 800CD388
  {uint32_t ea=c->r[7]+0x000017E8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CD38C
  c->r[3]=c->r[31]|c->r[31]; // 800CD390
  c->r[4]=c->r[1]+0x0000000Cu; // 800CD394
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CD398
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CD39C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800CD3A0
  W32(c->r[1]+0x00000010u,c->r[5]); // 800CD3A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD3A8
  c->lr=0x800CD3B0u; f_800CD3C4(c); // 800CD3AC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CD3B0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800CD3B4
  c->lr=c->r[0]; // 800CD3B8
  c->r[1]=c->r[1]+0x00000050u; // 800CD3BC
  return; // 800CD3C0
}

// fn_800CD3C4
void f_800CD3C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD3C4
  c->r[0]=c->lr; // 800CD3C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD3CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD3D0
  c->r[31]=c->r[4]|c->r[4]; // 800CD3D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CD3D8
  c->r[30]=c->r[3]|c->r[3]; // 800CD3DC
  c->r[3]=c->r[31]|c->r[31]; // 800CD3E0
  c->lr=0x800CD3E8u; f_802B9FDC(c); // 800CD3E4
  cmps(c,0,(int32_t)c->r[3],0); // 800CD3E8
  if (crb(c,2)) { goto L_800CD408; } // 800CD3EC
  c->r[3]=R32(c->r[31]+0x00000000u); // 800CD3F0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800CD3F4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800CD3F8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CD3FC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CD400
  W32(c->r[30]+0x00000024u,c->r[0]); // 800CD404
L_800CD408:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD408
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD40C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CD410
  c->lr=c->r[0]; // 800CD414
  c->r[1]=c->r[1]+0x00000010u; // 800CD418
  return; // 800CD41C
}

// fn_800CD420
void f_800CD420(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD420
  c->r[0]=c->lr; // 800CD424
  c->r[4]=0u+0x00000000u; // 800CD428
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD42C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CD430
  c->r[31]=c->r[3]|c->r[3]; // 800CD434
  c->r[3]=R32(c->r[3]+0x00000438u); // 800CD438
  c->lr=0x800CD440u; f_801FAF00(c); // 800CD43C
  cmps(c,0,(int32_t)c->r[3],0); // 800CD440
  if (!crb(c,2)) { goto L_800CD4E8; } // 800CD444
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800CD448
  c->r[3]=c->r[31]+0x0000002Cu; // 800CD44C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CD450
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800CD454
  c->r[0]=c->r[0]|0x00000004u; // 800CD458
  c->r[4]=c->r[4]+0x0000005Cu; // 800CD45C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CD460
  c->lr=0x800CD468u; f_800361A0(c); // 800CD464
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CD468
  c->r[3]=c->r[31]+0x00000060u; // 800CD46C
  c->r[4]=c->r[4]+0x00000068u; // 800CD470
  c->lr=0x800CD478u; f_800361A0(c); // 800CD474
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800CD478
  c->r[3]=0u+0x805D0000u; // 800CD47C
  c->r[0]=R32(c->r[31]+0x00000030u); // 800CD480
  c->r[3]=c->r[3]+0x00006CF8u; // 800CD484
  c->r[4]=c->r[1]+0x00000008u; // 800CD488
  c->r[5]=0u+0x00040000u; // 800CD48C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CD490
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CD494
  c->r[0]=R32(c->r[31]+0x00000034u); // 800CD498
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CD49C
  c->lr=0x800CD4A4u; f_802236F8(c); // 800CD4A0
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800CD4A4
  c->r[4]=c->r[13]+0xFFFF84A0u; // 800CD4A8
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800CD4AC
  c->r[3]=c->r[31]|c->r[31]; // 800CD4B0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800CD4B4
  c->r[0]=R16(c->r[4]+c->r[0]); // 800CD4B8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800CD4BC
  c->lr=0x800CD4C4u; f_801F5AB4(c); // 800CD4C0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CD4C4
  c->r[3]=c->r[31]|c->r[31]; // 800CD4C8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CD4CC
  c->ctr=c->r[12]; // 800CD4D0
  if (true) { c->lr=0x800CD4D8u; dispatch(c,c->ctr); } // 800CD4D4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CD4D8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CD4DC
  c->lr=0x800CD4E4u; f_8025037C(c); // 800CD4E0
  goto L_800CD508; // 800CD4E4
L_800CD4E8:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CD4E8
  c->r[3]=c->r[31]+0x0000002Cu; // 800CD4EC
  c->r[4]=c->r[4]+0x0000005Cu; // 800CD4F0
  c->lr=0x800CD4F8u; f_800361A0(c); // 800CD4F4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CD4F8
  c->r[3]=c->r[31]+0x00000060u; // 800CD4FC
  c->r[4]=c->r[4]+0x00000068u; // 800CD500
  c->lr=0x800CD508u; f_800361A0(c); // 800CD504
L_800CD508:;
  c->r[3]=c->r[31]|c->r[31]; // 800CD508
  c->r[4]=0u+0x00000000u; // 800CD50C
  c->lr=0x800CD514u; f_801F7C00(c); // 800CD510
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CD514
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CD518
  c->lr=c->r[0]; // 800CD51C
  c->r[1]=c->r[1]+0x00000020u; // 800CD520
  return; // 800CD524
}

// fn_800CD528
void f_800CD528(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD528
  c->r[0]=c->lr; // 800CD52C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD530
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD534
  c->r[31]=c->r[3]|c->r[3]; // 800CD538
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CD53C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CD540
  c->lr=0x800CD548u; f_802501B0(c); // 800CD544
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CD548
  c->r[6]=0u+0x00000000u; // 800CD54C
  c->r[0]=0u+0x00000001u; // 800CD550
  c->r[3]=c->r[31]+0x0000002Cu; // 800CD554
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800CD558
  c->r[4]=c->r[31]+0x000003CCu; // 800CD55C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800CD560
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800CD564
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800CD568
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800CD56C
  c->r[0]=rotl(c->r[5],0)&0xFFFFDFFFu; // 800CD570
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CD574
  c->lr=0x800CD57Cu; f_800361A0(c); // 800CD578
  c->r[3]=c->r[31]+0x00000060u; // 800CD57C
  c->r[4]=c->r[31]+0x000003D8u; // 800CD580
  c->lr=0x800CD588u; f_800361A0(c); // 800CD584
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD588
  {uint32_t ea=c->r[2]+0xFFFFA088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD58C
  fcmp(c,0,c->f[1],c->f[0]); // 800CD590
  if (!crb(c,0)) { goto L_800CD5C0; } // 800CD594
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800CD598
  c->r[4]=c->r[13]+0xFFFF84A0u; // 800CD59C
  c->r[3]=c->r[31]|c->r[31]; // 800CD5A0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800CD5A4
  c->r[0]=R16(c->r[4]+c->r[0]); // 800CD5A8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800CD5AC
  c->lr=0x800CD5B4u; f_801F5AB4(c); // 800CD5B0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800CD5B4
  c->r[0]=c->r[0]|0x00000080u; // 800CD5B8
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CD5BC
L_800CD5C0:;
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD5C0
  {uint32_t ea=c->r[2]+0xFFFFA088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD5C4
  fcmp(c,0,c->f[1],c->f[0]); // 800CD5C8
  if (!crb(c,1)) { goto L_800CD5DC; } // 800CD5CC
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800CD5D0
  c->r[0]=rotl(c->r[0],0)&0xFFFFF7FFu; // 800CD5D4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CD5D8
L_800CD5DC:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CD5DC
  c->r[3]=c->r[31]|c->r[31]; // 800CD5E0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CD5E4
  c->ctr=c->r[12]; // 800CD5E8
  if (true) { c->lr=0x800CD5F0u; dispatch(c,c->ctr); } // 800CD5EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD5F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD5F4
  c->lr=c->r[0]; // 800CD5F8
  c->r[1]=c->r[1]+0x00000010u; // 800CD5FC
  return; // 800CD600
}

// fn_800CD604
void f_800CD604(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD604
  c->r[0]=c->lr; // 800CD608
  c->r[4]=0u+0x000000E1u; // 800CD60C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD610
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD614
  c->r[31]=c->r[3]|c->r[3]; // 800CD618
  c->r[3]=c->r[3]+0x00000210u; // 800CD61C
  c->lr=0x800CD624u; f_80221630(c); // 800CD620
  cmps(c,0,(int32_t)c->r[3],0); // 800CD624
  if (!crb(c,2)) { goto L_800CD634; } // 800CD628
  c->r[3]=0u+0x00000000u; // 800CD62C
  goto L_800CD65C; // 800CD630
L_800CD634:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800CD634
  c->r[3]=c->r[13]+0xFFFF84A8u; // 800CD638
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CD63C
  c->r[5]=0u+0x00000000u; // 800CD640
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CD644
  c->r[3]=R32(c->r[3]+c->r[0]); // 800CD648
  c->r[4]=c->r[4]+0x0000010Cu; // 800CD64C
  c->lr=0x800CD654u; f_8024EE50(c); // 800CD650
  c->r[0]=cntlz(c->r[3]); // 800CD654
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CD658
L_800CD65C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD65C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD660
  c->lr=c->r[0]; // 800CD664
  c->r[1]=c->r[1]+0x00000010u; // 800CD668
  return; // 800CD66C
}

// fn_800CD670
void f_800CD670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD670
  c->r[0]=c->lr; // 800CD674
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD678
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD67C
  c->r[31]=0u+0x805D0000u; // 800CD680
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CD684
  c->r[30]=c->r[3]|c->r[3]; // 800CD688
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CD68C
  c->lr=0x800CD694u; f_80045264(c); // 800CD690
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800CD694
  c->r[4]=c->r[13]+0xFFFF84A0u; // 800CD698
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800CD69C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800CD6A0
  c->r[0]=R16(c->r[4]+c->r[0]); // 800CD6A4
  cmpu(c,0,c->r[0],c->r[3]); // 800CD6A8
  if (!crb(c,2)) { goto L_800CD6E8; } // 800CD6AC
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CD6B0
  c->lr=0x800CD6B8u; f_80037AF0(c); // 800CD6B4
  cmpu(c,0,c->r[3],c->r[30]); // 800CD6B8
  if (!crb(c,2)) { goto L_800CD6E8; } // 800CD6BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800CD6C0
  cmps(c,0,(int32_t)c->r[0],101); // 800CD6C4
  if (crb(c,2)) { goto L_800CD6E8; } // 800CD6C8
  {uint32_t ea=c->r[2]+0xFFFFA088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD6CC
  c->r[3]=c->r[30]|c->r[30]; // 800CD6D0
  c->r[4]=0u+0x00000065u; // 800CD6D4
  c->r[5]=0u+0x00000000u; // 800CD6D8
  c->r[6]=0u+0x00000000u; // 800CD6DC
  c->r[7]=0u+0x00000000u; // 800CD6E0
  c->lr=0x800CD6E8u; f_801F4D44(c); // 800CD6E4
L_800CD6E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD6E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD6EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CD6F0
  c->lr=c->r[0]; // 800CD6F4
  c->r[1]=c->r[1]+0x00000010u; // 800CD6F8
  return; // 800CD6FC
}

// fn_800CD700
void f_800CD700(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD700
  c->r[0]=c->lr; // 800CD704
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CD708
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800CD70C
  c->r[31]=0u+0x803D0000u; // 800CD710
  c->r[31]=c->r[31]+0x000017E8u; // 800CD714
  W32(c->r[1]+0x00000038u,c->r[30]); // 800CD718
  c->r[30]=c->r[3]|c->r[3]; // 800CD71C
  c->lr=0x800CD724u; f_801F4F28(c); // 800CD720
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800CD724
  cmps(c,0,(int32_t)c->r[0],101); // 800CD728
  if (crb(c,2)) { goto L_800CD77C; } // 800CD72C
  if (!crb(c,0)) { goto L_800CD740; } // 800CD730
  cmps(c,0,(int32_t)c->r[0],100); // 800CD734
  if (!crb(c,0)) { goto L_800CD74C; } // 800CD738
  goto L_800CD7D8; // 800CD73C
L_800CD740:;
  cmps(c,0,(int32_t)c->r[0],103); // 800CD740
  if (!crb(c,0)) { goto L_800CD7D8; } // 800CD744
  goto L_800CD7AC; // 800CD748
L_800CD74C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800CD74C
  c->r[5]=c->r[31]+0x0000000Cu; // 800CD750
  c->r[3]=c->r[30]|c->r[30]; // 800CD754
  c->r[4]=c->r[1]+0x00000020u; // 800CD758
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800CD75C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CD760
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CD764
  W32(c->r[1]+0x00000020u,c->r[7]); // 800CD768
  W32(c->r[1]+0x00000024u,c->r[6]); // 800CD76C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800CD770
  c->lr=0x800CD778u; f_800CD3C4(c); // 800CD774
  goto L_800CD7D8; // 800CD778
L_800CD77C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800CD77C
  c->r[5]=c->r[31]+0x00000018u; // 800CD780
  c->r[3]=c->r[30]|c->r[30]; // 800CD784
  c->r[4]=c->r[1]+0x00000014u; // 800CD788
  c->r[7]=R32(c->r[31]+0x00000018u); // 800CD78C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CD790
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CD794
  W32(c->r[1]+0x00000014u,c->r[7]); // 800CD798
  W32(c->r[1]+0x00000018u,c->r[6]); // 800CD79C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CD7A0
  c->lr=0x800CD7A8u; f_800CD3C4(c); // 800CD7A4
  goto L_800CD7D8; // 800CD7A8
L_800CD7AC:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800CD7AC
  c->r[5]=c->r[31]+0x00000024u; // 800CD7B0
  c->r[3]=c->r[30]|c->r[30]; // 800CD7B4
  c->r[4]=c->r[1]+0x00000008u; // 800CD7B8
  c->r[7]=R32(c->r[31]+0x00000024u); // 800CD7BC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CD7C0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CD7C4
  W32(c->r[1]+0x00000008u,c->r[7]); // 800CD7C8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800CD7CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CD7D0
  c->lr=0x800CD7D8u; f_800CD3C4(c); // 800CD7D4
L_800CD7D8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800CD7D8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800CD7DC
  c->r[30]=R32(c->r[1]+0x00000038u); // 800CD7E0
  c->lr=c->r[0]; // 800CD7E4
  c->r[1]=c->r[1]+0x00000040u; // 800CD7E8
  return; // 800CD7EC
}

// fn_800CD7F0
void f_800CD7F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD7F0
  c->r[0]=c->lr; // 800CD7F4
  c->r[7]=0u+0x803D0000u; // 800CD7F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD7FC
  c->r[4]=c->r[1]+0x00000008u; // 800CD800
  {uint32_t ea=c->r[7]+0x00001818u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CD804
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CD808
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CD80C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CD810
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800CD814
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CD818
  c->lr=0x800CD820u; f_800CD3C4(c); // 800CD81C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CD820
  c->lr=c->r[0]; // 800CD824
  c->r[1]=c->r[1]+0x00000020u; // 800CD828
  return; // 800CD82C
}

// fn_800CD830
void f_800CD830(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD830
  c->r[0]=c->lr; // 800CD834
  W32(c->r[1]+0x00000094u,c->r[0]); // 800CD838
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800CD83C
  W32(c->r[1]+0x00000088u,c->r[30]); // 800CD840
  c->r[30]=c->r[3]|c->r[3]; // 800CD844
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CD848
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800CD84C
  cmps(c,0,(int32_t)c->r[0],0); // 800CD850
  if (!crb(c,2)) { goto L_800CD8E0; } // 800CD854
  c->r[3]=R16(c->r[3]+0x000003BEu); // 800CD858
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800CD85C
  if (crb(c,2)) { goto L_800CD8E0; } // 800CD860
  c->r[0]=rotl(c->r[3],0)&0x00000180u; // 800CD864
  cmps(c,0,(int32_t)c->r[0],128); // 800CD868
  if (!crb(c,2)) { goto L_800CD894; } // 800CD86C
  c->r[3]=0u+0x80620000u; // 800CD870
  c->r[3]=c->r[3]+0x00007688u; // 800CD874
  c->r[3]=R32(c->r[3]+0x00000014u); // 800CD878
  cmps(c,0,(int32_t)c->r[3],0); // 800CD87C
  if (crb(c,2)) { goto L_800CD894; } // 800CD880
  c->r[4]=0u+0x00000002u; // 800CD884
  c->lr=0x800CD88Cu; f_80037670(c); // 800CD888
  cmps(c,0,(int32_t)c->r[3],0); // 800CD88C
  if (!crb(c,2)) { goto L_800CD8E0; } // 800CD890
L_800CD894:;
  {uint32_t ea=c->r[2]+0xFFFFA098u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD894
  c->r[3]=c->r[1]+0x00000008u; // 800CD898
  c->r[4]=c->r[30]+0x0000002Cu; // 800CD89C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800CD8A0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800CD8A4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800CD8A8
  c->lr=0x800CD8B0u; f_800361A0(c); // 800CD8AC
  c->r[31]=0u+0x80550000u; // 800CD8B0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD8B4
  c->r[31]=c->r[31]+0x00003D60u; // 800CD8B8
  c->r[5]=c->r[30]|c->r[30]; // 800CD8BC
  c->r[3]=c->r[31]+0x00000010u; // 800CD8C0
  c->r[6]=c->r[1]+0x00000008u; // 800CD8C4
  c->r[7]=c->r[1]+0x00000020u; // 800CD8C8
  c->r[4]=0u+0x000001FFu; // 800CD8CC
  c->lr=0x800CD8D4u; f_80226910(c); // 800CD8D0
  c->r[3]=c->r[31]+0x00000010u; // 800CD8D4
  c->r[4]=c->r[1]+0x00000020u; // 800CD8D8
  c->lr=0x800CD8E0u; f_80226D68(c); // 800CD8DC
L_800CD8E0:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800CD8E0
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800CD8E4
  c->r[30]=R32(c->r[1]+0x00000088u); // 800CD8E8
  c->lr=c->r[0]; // 800CD8EC
  c->r[1]=c->r[1]+0x00000090u; // 800CD8F0
  return; // 800CD8F4
}

// fn_800CD8F8
void f_800CD8F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD8F8
  c->r[0]=c->lr; // 800CD8FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD900
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD904
  c->r[31]=c->r[3]|c->r[3]; // 800CD908
  c->r[3]=c->r[3]+0x00000210u; // 800CD90C
  c->lr=0x800CD914u; f_8004BAD4(c); // 800CD910
  cmps(c,0,(int32_t)c->r[3],0); // 800CD914
  if (crb(c,2)) { goto L_800CD984; } // 800CD918
  c->r[0]=R32(c->r[31]+0x00000210u); // 800CD91C
  c->r[4]=c->r[31]|c->r[31]; // 800CD920
  c->r[3]=c->r[31]+0x00000210u; // 800CD924
  c->r[0]=c->r[0]|0xAA000000u; // 800CD928
  W32(c->r[31]+0x00000210u,c->r[0]); // 800CD92C
  c->lr=0x800CD934u; f_80043E44(c); // 800CD930
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD934
  c->r[3]=c->r[31]+0x00000210u; // 800CD938
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD93C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CD940
  c->lr=0x800CD948u; f_80043E34(c); // 800CD944
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CD948
  c->r[4]=0u+0x803A0000u; // 800CD94C
  c->r[4]=c->r[4]+0xFFFFDD94u; // 800CD950
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CD954
  c->lr=0x800CD95Cu; f_80256EC4(c); // 800CD958
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CD95C
  c->r[5]=c->r[3]|c->r[3]; // 800CD960
  c->r[3]=c->r[31]+0x00000210u; // 800CD964
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800CD968
  c->lr=0x800CD970u; f_8004BAC8(c); // 800CD96C
  {uint32_t ea=c->r[2]+0xFFFFA09Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD970
  c->r[3]=c->r[31]+0x00000210u; // 800CD974
  c->f[2]=c->f[1]; // 800CD978
  c->f[3]=c->f[1]; // 800CD97C
  c->lr=0x800CD984u; f_80043E24(c); // 800CD980
L_800CD984:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD984
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD988
  c->lr=c->r[0]; // 800CD98C
  c->r[1]=c->r[1]+0x00000010u; // 800CD990
  return; // 800CD994
}

// fn_800CD998
void f_800CD998(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD998
  c->r[0]=c->lr; // 800CD99C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD9A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD9A4
  c->r[31]=c->r[3]|c->r[3]; // 800CD9A8
  c->r[3]=c->r[3]+0x00000210u; // 800CD9AC
  c->lr=0x800CD9B4u; f_80221698(c); // 800CD9B0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CD9B4
  cmps(c,0,(int32_t)c->r[3],0); // 800CD9B8
  if (crb(c,2)) { goto L_800CD9DC; } // 800CD9BC
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800CD9C0
  cmps(c,0,(int32_t)c->r[0],0); // 800CD9C4
  if (crb(c,2)) { goto L_800CD9DC; } // 800CD9C8
  c->r[0]=R32(c->r[31]+0x00000210u); // 800CD9CC
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800CD9D0
  W32(c->r[31]+0x00000210u,c->r[0]); // 800CD9D4
  goto L_800CD9E8; // 800CD9D8
L_800CD9DC:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800CD9DC
  c->r[0]=c->r[0]|0x80000000u; // 800CD9E0
  W32(c->r[31]+0x00000210u,c->r[0]); // 800CD9E4
L_800CD9E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD9E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD9EC
  c->lr=c->r[0]; // 800CD9F0
  c->r[1]=c->r[1]+0x00000010u; // 800CD9F4
  return; // 800CD9F8
}

// fn_800CD9FC
void f_800CD9FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD9FC
  c->r[0]=c->lr; // 800CDA00
  cmps(c,0,(int32_t)c->r[3],0); // 800CDA04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDA08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDA0C
  c->r[31]=c->r[4]|c->r[4]; // 800CDA10
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CDA14
  c->r[30]=c->r[3]|c->r[3]; // 800CDA18
  if (crb(c,2)) { goto L_800CDA38; } // 800CDA1C
  c->r[4]=0u+0x00000000u; // 800CDA20
  c->lr=0x800CDA28u; f_8026A06C(c); // 800CDA24
  cmps(c,0,(int32_t)c->r[31],0); // 800CDA28
  if (!crb(c,1)) { goto L_800CDA38; } // 800CDA2C
  c->r[3]=c->r[30]|c->r[30]; // 800CDA30
  c->lr=0x800CDA38u; f_8026A268(c); // 800CDA34
L_800CDA38:;
  c->r[3]=c->r[30]|c->r[30]; // 800CDA38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDA3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CDA40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDA44
  c->lr=c->r[0]; // 800CDA48
  c->r[1]=c->r[1]+0x00000010u; // 800CDA4C
  return; // 800CDA50
}

// fn_800CDA54
void f_800CDA54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDA54
  c->r[0]=c->lr; // 800CDA58
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CDA5C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CDA60
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CDA64
  c->r[4]=0u+0x00000000u; // 800CDA68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CDA6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CDA70
  c->r[30]=c->r[3]|c->r[3]; // 800CDA74
  c->lr=0x800CDA7Cu; f_801F57D0(c); // 800CDA78
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800CDA7C
  c->r[3]=c->r[30]|c->r[30]; // 800CDA80
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800CDA84
  c->ctr=c->r[12]; // 800CDA88
  if (true) { c->lr=0x800CDA90u; dispatch(c,c->ctr); } // 800CDA8C
  c->r[3]=c->r[30]|c->r[30]; // 800CDA90
  c->lr=0x800CDA98u; f_801F4B94(c); // 800CDA94
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800CDA98
  c->r[0]=0u+0x000000FFu; // 800CDA9C
  c->r[5]=0u+0x00000000u; // 800CDAA0
  c->r[4]=0u+0x00000003u; // 800CDAA4
  c->r[3]=c->r[3]|0x00000804u; // 800CDAA8
  c->r[7]=0u+0x00000031u; // 800CDAAC
  c->r[6]=rotl(c->r[3],0)&0x00003FFFu; // 800CDAB0
  c->r[31]=0u+0x00000001u; // 800CDAB4
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800CDAB8
  c->r[3]=c->r[30]+0x0000000Cu; // 800CDABC
  c->r[4]=0u+0x00000000u; // 800CDAC0
  W8(c->r[30]+0x0000006Du,c->r[7]); // 800CDAC4
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800CDAC8
  W16(c->r[30]+0x000003BEu,c->r[6]); // 800CDACC
  W32(c->r[30]+0x00000074u,c->r[5]); // 800CDAD0
  W8(c->r[30]+0x00000078u,c->r[5]); // 800CDAD4
  W8(c->r[30]+0x00000098u,c->r[0]); // 800CDAD8
  W8(c->r[30]+0x00000099u,c->r[0]); // 800CDADC
  W8(c->r[30]+0x0000009Au,c->r[0]); // 800CDAE0
  W8(c->r[30]+0x0000009Bu,c->r[0]); // 800CDAE4
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 800CDAE8
  c->lr=0x800CDAF0u; f_80036430(c); // 800CDAEC
  c->r[3]=c->r[30]+0x00000010u; // 800CDAF0
  c->r[4]=0u+0x00000000u; // 800CDAF4
  c->lr=0x800CDAFCu; f_80036430(c); // 800CDAF8
  c->r[3]=c->r[30]+0x00000014u; // 800CDAFC
  c->r[4]=0u+0x0000001Eu; // 800CDB00
  c->lr=0x800CDB08u; f_80036430(c); // 800CDB04
  c->r[3]=c->r[30]+0x00000018u; // 800CDB08
  c->r[4]=0u+0x0000001Eu; // 800CDB0C
  c->lr=0x800CDB14u; f_80036430(c); // 800CDB10
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDB14
  c->r[3]=0u+0x80550000u; // 800CDB18
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800CDB1C
  c->r[3]=c->r[3]+0x00003D60u; // 800CDB20
  c->f[3]=c->f[1]; // 800CDB24
  {uint32_t ea=c->r[2]+0xFFFFA0ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CDB28
  c->r[4]=c->r[30]+0x0000002Cu; // 800CDB2C
  c->r[5]=c->r[30]+0x00000030u; // 800CDB30
  c->r[6]=0u+0x00000000u; // 800CDB34
  c->r[7]=0u+0x00000000u; // 800CDB38
  c->lr=0x800CDB40u; f_801D5488(c); // 800CDB3C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CDB40
  c->r[3]=c->r[30]|c->r[30]; // 800CDB44
  c->lr=0x800CDB4Cu; f_801F58BC(c); // 800CDB48
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CDB4C
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800CDB50
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDB54
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CDB58
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800CDB5C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CDB60
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800CDB64
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CDB68
  c->lr=0x800CDB70u; f_802501B0(c); // 800CDB6C
  c->r[3]=0u+0x805D0000u; // 800CDB70
  c->r[4]=c->r[30]+0x0000002Cu; // 800CDB74
  c->r[3]=c->r[3]+0x000078B0u; // 800CDB78
  c->lr=0x800CDB80u; f_802351CC(c); // 800CDB7C
  c->r[5]=R32(c->r[30]+0x00000394u); // 800CDB80
  c->r[4]=0u+0x803A0000u; // 800CDB84
  c->r[4]=c->r[4]+0xFFFFDEA0u; // 800CDB88
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800CDB8C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800CDB90
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CDB94
  c->lr=0x800CDB9Cu; f_80256EC4(c); // 800CDB98
  c->r[6]=0u+0x80620000u; // 800CDB9C
  W8(c->r[30]+0x00000079u,c->r[3]); // 800CDBA0
  c->r[6]=c->r[6]+0x000079C0u; // 800CDBA4
  c->r[3]=0u+0x805D0000u; // 800CDBA8
  {uint32_t ea=c->r[6]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDBAC
  c->r[3]=c->r[3]+0x00003F6Cu; // 800CDBB0
  c->r[4]=c->r[1]+0x00000008u; // 800CDBB4
  c->r[5]=0u+0x00000000u; // 800CDBB8
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800CDBBC
  {uint32_t ea=c->r[6]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDBC0
  c->f[0]=-c->f[0]; // 800CDBC4
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[0]);} // 800CDBC8
  c->lr=0x800CDBD0u; f_8020C9AC(c); // 800CDBCC
  c->r[3]=c->r[30]+0x0000008Cu; // 800CDBD0
  c->r[4]=c->r[1]+0x00000008u; // 800CDBD4
  c->lr=0x800CDBDCu; f_800361A0(c); // 800CDBD8
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDBDC
  c->r[3]=c->r[30]|c->r[30]; // 800CDBE0
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 800CDBE4
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 800CDBE8
  c->lr=0x800CDBF0u; f_801F56F4(c); // 800CDBEC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800CDBF0
  c->r[3]=c->r[30]|c->r[30]; // 800CDBF4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CDBF8
  c->ctr=c->r[12]; // 800CDBFC
  if (true) { c->lr=0x800CDC04u; dispatch(c,c->ctr); } // 800CDC00
  c->r[3]=c->r[30]|c->r[30]; // 800CDC04
  c->lr=0x800CDC0Cu; f_800CF928(c); // 800CDC08
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800CDC0C
  W32(c->r[30]+0x00000444u,c->r[31]); // 800CDC10
  c->lr=0x800CDC18u; f_8024E174(c); // 800CDC14
  W32(c->r[30]+0x00000438u,c->r[3]); // 800CDC18
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CDC1C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CDC20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CDC24
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CDC28
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CDC2C
  c->lr=c->r[0]; // 800CDC30
  c->r[1]=c->r[1]+0x00000030u; // 800CDC34
  return; // 800CDC38
}

// fn_800CDC3C
void f_800CDC3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFC10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDC3C
  c->r[0]=c->lr; // 800CDC40
  W32(c->r[1]+0x000003F4u,c->r[0]); // 800CDC44
  {uint32_t ea=c->r[1]+0x000003E0u; WF64(ea,c->f[31]);} // 800CDC48
  {uint32_t ea=c->r[1]+0x000003E8u; psq_store(c,31,ea,0,0);} // 800CDC4C
  c->r[11]=c->r[1]+0x000003E0u; // 800CDC50
  c->lr=0x800CDC58u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CDC54
  c->r[30]=0u+0x803A0000u; // 800CDC58
  c->r[29]=c->r[3]|c->r[3]; // 800CDC5C
  c->r[30]=c->r[30]+0xFFFFDDA0u; // 800CDC60
  c->lr=0x800CDC68u; f_800CF4C8(c); // 800CDC64
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800CDC68
  c->r[3]=c->r[29]|c->r[29]; // 800CDC6C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800CDC70
  c->ctr=c->r[12]; // 800CDC74
  if (true) { c->lr=0x800CDC7Cu; dispatch(c,c->ctr); } // 800CDC78
  c->r[3]=c->r[29]|c->r[29]; // 800CDC7C
  c->lr=0x800CDC84u; f_801F4C0C(c); // 800CDC80
  c->r[3]=c->r[29]|c->r[29]; // 800CDC84
  c->lr=0x800CDC8Cu; f_800CF73C(c); // 800CDC88
  c->r[3]=R32(c->r[29]+0x00000394u); // 800CDC8C
  c->r[0]=R32(c->r[3]+0x00000030u); // 800CDC90
  cmps(c,0,(int32_t)c->r[0],1); // 800CDC94
  if (!crb(c,2)) { goto L_800CDCD0; } // 800CDC98
  c->r[3]=c->r[29]|c->r[29]; // 800CDC9C
  c->lr=0x800CDCA4u; f_800CF82C(c); // 800CDCA0
  cmps(c,0,(int32_t)c->r[3],0); // 800CDCA4
  if (!crb(c,2)) { goto L_800CDCD0; } // 800CDCA8
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800CDCAC
  c->r[3]=c->r[29]|c->r[29]; // 800CDCB0
  {uint32_t ea=c->r[2]+0xFFFFA0B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDCB4
  c->r[4]=0u+0x00000000u; // 800CDCB8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800CDCBC
  c->r[5]=0u+0x00000001u; // 800CDCC0
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CDCC4
  c->ctr=c->r[12]; // 800CDCC8
  if (true) { c->lr=0x800CDCD0u; dispatch(c,c->ctr); } // 800CDCCC
L_800CDCD0:;
  c->r[3]=R32(c->r[29]+0x00000394u); // 800CDCD0
  c->r[0]=R32(c->r[3]+0x00000030u); // 800CDCD4
  cmps(c,0,(int32_t)c->r[0],1); // 800CDCD8
  if (crb(c,2)) { goto L_800CDD14; } // 800CDCDC
  c->r[3]=c->r[29]|c->r[29]; // 800CDCE0
  c->lr=0x800CDCE8u; f_800CF82C(c); // 800CDCE4
  cmps(c,0,(int32_t)c->r[3],0); // 800CDCE8
  if (crb(c,2)) { goto L_800CDD14; } // 800CDCEC
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800CDCF0
  c->r[3]=c->r[29]|c->r[29]; // 800CDCF4
  {uint32_t ea=c->r[2]+0xFFFFA0B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDCF8
  c->r[4]=0u+0x00000001u; // 800CDCFC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800CDD00
  c->r[5]=0u+0x00000001u; // 800CDD04
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CDD08
  c->ctr=c->r[12]; // 800CDD0C
  if (true) { c->lr=0x800CDD14u; dispatch(c,c->ctr); } // 800CDD10
L_800CDD14:;
  c->r[0]=R16(c->r[29]+0x000003BEu); // 800CDD14
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800CDD18
  if (crb(c,2)) { goto L_800CDD48; } // 800CDD1C
  c->r[3]=0u+0x805D0000u; // 800CDD20
  c->r[4]=c->r[1]+0x0000000Cu; // 800CDD24
  c->r[3]=c->r[3]+0x00003F6Cu; // 800CDD28
  c->r[5]=0u+0x00000001u; // 800CDD2C
  c->lr=0x800CDD34u; f_8007C6C8(c); // 800CDD30
  c->r[3]=R32(c->r[29]+0x00000394u); // 800CDD34
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800CDD38
  c->r[3]=c->r[3]+0x00000074u; // 800CDD3C
  c->r[4]=c->r[4]+0x00000074u; // 800CDD40
  c->lr=0x800CDD48u; f_800361A0(c); // 800CDD44
L_800CDD48:;
  c->r[5]=0u+0x80620000u; // 800CDD48
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDD4C
  c->r[5]=c->r[5]+0x000079C0u; // 800CDD50
  c->r[3]=c->r[1]+0x000002F8u; // 800CDD54
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDD58
  c->r[4]=c->r[1]+0x000002ECu; // 800CDD5C
  {uint32_t ea=c->r[5]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CDD60
  c->r[5]=c->r[1]+0x000002E0u; // 800CDD64
  c->f[0]=-c->f[0]; // 800CDD68
  {uint32_t ea=c->r[1]+0x00000300u; WF32(ea,c->f[1]);} // 800CDD6C
  {uint32_t ea=c->r[1]+0x000002F8u; WF32(ea,c->f[2]);} // 800CDD70
  {uint32_t ea=c->r[1]+0x000002FCu; WF32(ea,c->f[0]);} // 800CDD74
  {uint32_t ea=c->r[29]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDD78
  {uint32_t ea=c->r[1]+0x000002ECu; WF32(ea,c->f[0]);} // 800CDD7C
  {uint32_t ea=c->r[29]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDD80
  {uint32_t ea=c->r[1]+0x000002F0u; WF32(ea,c->f[0]);} // 800CDD84
  {uint32_t ea=c->r[1]+0x000002F4u; WF32(ea,c->f[1]);} // 800CDD88
  c->lr=0x800CDD90u; f_80296A70(c); // 800CDD8C
  c->r[27]=0u+0x805D0000u; // 800CDD90
  c->r[4]=c->r[1]+0x000002C8u; // 800CDD94
  c->r[3]=c->r[27]+0x00003F6Cu; // 800CDD98
  c->r[5]=0u+0x00000000u; // 800CDD9C
  c->lr=0x800CDDA4u; f_8020C9AC(c); // 800CDDA0
  c->r[3]=c->r[1]+0x000002BCu; // 800CDDA4
  c->r[4]=c->r[29]+0x0000008Cu; // 800CDDA8
  c->lr=0x800CDDB0u; f_800361A0(c); // 800CDDAC
  c->r[3]=c->r[1]+0x000002C8u; // 800CDDB0
  c->r[4]=c->r[1]+0x000002BCu; // 800CDDB4
  c->r[5]=c->r[1]+0x000002B0u; // 800CDDB8
  c->lr=0x800CDDC0u; f_80296A70(c); // 800CDDBC
  c->r[3]=c->r[27]+0x00003F6Cu; // 800CDDC0
  c->r[4]=c->r[1]+0x00000008u; // 800CDDC4
  c->r[5]=0u+0x00000001u; // 800CDDC8
  c->lr=0x800CDDD0u; f_8007C6C8(c); // 800CDDCC
  c->r[8]=R32(c->r[1]+0x00000008u); // 800CDDD0
  c->r[3]=0u+0x803A0000u; // 800CDDD4
  c->r[3]=c->r[3]+0xFFFFDEA0u; // 800CDDD8
  c->r[5]=c->r[1]+0x00000398u; // 800CDDDC
  c->r[7]=R32(c->r[8]+0x00000074u); // 800CDDE0
  c->r[4]=c->r[3]+0x00000005u; // 800CDDE4
  c->r[0]=R32(c->r[8]+0x00000078u); // 800CDDE8
  c->r[6]=0u+0x00000001u; // 800CDDEC
  W32(c->r[1]+0x000002A4u,c->r[7]); // 800CDDF0
  W32(c->r[1]+0x000002A8u,c->r[0]); // 800CDDF4
  c->r[0]=R32(c->r[8]+0x0000007Cu); // 800CDDF8
  W32(c->r[1]+0x000002ACu,c->r[0]); // 800CDDFC
  c->r[3]=R32(c->r[29]+0x00000394u); // 800CDE00
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CDE04
  c->lr=0x800CDE0Cu; f_80257018(c); // 800CDE08
  {uint32_t ea=c->r[1]+0x000003A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CDE0C
  c->r[3]=c->r[1]+0x000002E0u; // 800CDE10
  {uint32_t ea=c->r[1]+0x000003B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDE14
  {uint32_t ea=c->r[1]+0x000003C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDE18
  {uint32_t ea=c->r[1]+0x000002D4u; WF32(ea,c->f[2]);} // 800CDE1C
  {uint32_t ea=c->r[1]+0x000002D8u; WF32(ea,c->f[1]);} // 800CDE20
  {uint32_t ea=c->r[1]+0x000002DCu; WF32(ea,c->f[0]);} // 800CDE24
  c->lr=0x800CDE2Cu; f_80296B0C(c); // 800CDE28
  c->f[31]=c->f[1]; // 800CDE2C
  c->r[3]=c->r[1]+0x000002B0u; // 800CDE30
  c->lr=0x800CDE38u; f_80296B0C(c); // 800CDE34
  {uint32_t ea=c->r[2]+0xFFFFA0B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDE38
  fcmp(c,0,c->f[31],c->f[0]); // 800CDE3C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800CDE40
  if (!crb(c,2)) { goto L_800CDE68; } // 800CDE44
  {uint32_t ea=c->r[2]+0xFFFFA0B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDE48
  fcmp(c,0,c->f[1],c->f[0]); // 800CDE4C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800CDE50
  if (!crb(c,2)) { goto L_800CDE68; } // 800CDE54
  c->r[0]=R32(c->r[29]+0x00000074u); // 800CDE58
  c->r[0]=c->r[0]|0x00000100u; // 800CDE5C
  W32(c->r[29]+0x00000074u,c->r[0]); // 800CDE60
  goto L_800CDE74; // 800CDE64
L_800CDE68:;
  c->r[0]=R32(c->r[29]+0x00000074u); // 800CDE68
  c->r[0]=rotl(c->r[0],0)&0xFFFFFEFFu; // 800CDE6C
  W32(c->r[29]+0x00000074u,c->r[0]); // 800CDE70
L_800CDE74:;
  c->r[0]=R32(c->r[29]+0x00000074u); // 800CDE74
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800CDE78
  if (crb(c,2)) { goto L_800CE3B8; } // 800CDE7C
  c->r[3]=c->r[29]|c->r[29]; // 800CDE80
  c->lr=0x800CDE88u; f_800CF800(c); // 800CDE84
  cmps(c,0,(int32_t)c->r[3],0); // 800CDE88
  if (crb(c,2)) { goto L_800CE24C; } // 800CDE8C
  c->r[3]=c->r[29]|c->r[29]; // 800CDE90
  c->lr=0x800CDE98u; f_800CF91C(c); // 800CDE94
  cmps(c,0,(int32_t)c->r[3],0); // 800CDE98
  if (crb(c,2)) { goto L_800CE068; } // 800CDE9C
  c->r[0]=R8(c->r[29]+0x00000098u); // 800CDEA0
  cmpu(c,0,c->r[0],0x000000FFu); // 800CDEA4
  if (!crb(c,2)) { goto L_800CDED0; } // 800CDEA8
  c->r[4]=0u+0x803A0000u; // 800CDEAC
  c->r[3]=0u+0x80550000u; // 800CDEB0
  c->r[4]=c->r[4]+0xFFFFDEA0u; // 800CDEB4
  c->r[5]=0u+0x00000000u; // 800CDEB8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CDEBC
  c->r[6]=0u+0x00000000u; // 800CDEC0
  c->r[4]=c->r[4]+0x0000000Au; // 800CDEC4
  c->lr=0x800CDECCu; f_8018D3E4(c); // 800CDEC8
  W8(c->r[29]+0x00000098u,c->r[3]); // 800CDECC
L_800CDED0:;
  c->r[0]=R8(c->r[29]+0x00000098u); // 800CDED0
  cmpu(c,0,c->r[0],0x000000FFu); // 800CDED4
  if (crb(c,2)) { goto L_800CE03C; } // 800CDED8
  {uint32_t ea=c->r[1]+0x000002D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CDEDC
  c->r[3]=0u+0x80550000u; // 800CDEE0
  {uint32_t ea=c->r[1]+0x000002D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDEE4
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800CDEE8
  {uint32_t ea=c->r[1]+0x000002DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDEEC
  {uint32_t ea=c->r[1]+0x00000298u; WF32(ea,c->f[2]);} // 800CDEF0
  {uint32_t ea=c->r[1]+0x0000029Cu; WF32(ea,c->f[1]);} // 800CDEF4
  {uint32_t ea=c->r[1]+0x000002A0u; WF32(ea,c->f[0]);} // 800CDEF8
  c->r[4]=R8(c->r[29]+0x0000007Bu); // 800CDEFC
  c->lr=0x800CDF04u; f_8019C920(c); // 800CDF00
  cmps(c,0,(int32_t)c->r[3],0); // 800CDF04
  c->r[7]=c->r[3]|c->r[3]; // 800CDF08
  if (crb(c,2)) { goto L_800CDF64; } // 800CDF0C
  c->r[4]=c->r[30]+0x0000003Cu; // 800CDF10
  c->r[6]=R32(c->r[30]+0x0000003Cu); // 800CDF14
  c->r[5]=R32(c->r[4]+0x00000004u); // 800CDF18
  c->r[3]=c->r[1]+0x00000368u; // 800CDF1C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800CDF20
  c->r[4]=0u+0x00000059u; // 800CDF24
  W32(c->r[1]+0x00000274u,c->r[6]); // 800CDF28
  {uint32_t ea=c->r[2]+0xFFFFA0BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDF2C
  W32(c->r[1]+0x00000278u,c->r[5]); // 800CDF30
  W32(c->r[1]+0x0000027Cu,c->r[0]); // 800CDF34
  {uint32_t ea=c->r[7]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDF38
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800CDF3C
  c->lr=0x800CDF44u; f_80295FBC(c); // 800CDF40
  c->r[4]=c->r[1]+0x00000274u; // 800CDF44
  c->r[3]=c->r[1]+0x00000368u; // 800CDF48
  c->r[5]=c->r[4]|c->r[4]; // 800CDF4C
  c->lr=0x800CDF54u; f_80296750(c); // 800CDF50
  c->r[3]=c->r[1]+0x00000298u; // 800CDF54
  c->r[4]=c->r[1]+0x00000274u; // 800CDF58
  c->r[5]=c->r[3]|c->r[3]; // 800CDF5C
  c->lr=0x800CDF64u; f_80296A4C(c); // 800CDF60
L_800CDF64:;
  c->r[0]=0u+0x00000000u; // 800CDF64
  c->r[3]=c->r[1]+0x0000028Cu; // 800CDF68
  W32(c->r[1]+0x00000268u,c->r[0]); // 800CDF6C
  c->r[4]=c->r[1]+0x00000268u; // 800CDF70
  W32(c->r[1]+0x0000026Cu,c->r[0]); // 800CDF74
  W32(c->r[1]+0x00000270u,c->r[0]); // 800CDF78
  c->lr=0x800CDF80u; f_800361A0(c); // 800CDF7C
  c->r[4]=c->r[30]+0x00000048u; // 800CDF80
  c->r[6]=R32(c->r[30]+0x00000048u); // 800CDF84
  c->r[5]=R32(c->r[4]+0x00000004u); // 800CDF88
  c->r[3]=c->r[1]+0x00000280u; // 800CDF8C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800CDF90
  c->r[4]=c->r[1]+0x0000025Cu; // 800CDF94
  W32(c->r[1]+0x0000025Cu,c->r[6]); // 800CDF98
  W32(c->r[1]+0x00000260u,c->r[5]); // 800CDF9C
  W32(c->r[1]+0x00000264u,c->r[0]); // 800CDFA0
  c->lr=0x800CDFA8u; f_800361A0(c); // 800CDFA4
  {uint32_t ea=c->r[1]+0x00000280u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDFA8
  c->r[3]=0u+0x80550000u; // 800CDFAC
  {uint32_t ea=c->r[1]+0x000002A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDFB0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CDFB4
  {uint32_t ea=c->r[1]+0x00000284u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CDFB8
  c->r[5]=c->r[1]+0x0000010Cu; // 800CDFBC
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 800CDFC0
  {uint32_t ea=c->r[1]+0x000002A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CDFC4
  {uint32_t ea=c->r[1]+0x00000288u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDFC8
  c->r[6]=c->r[1]+0x00000100u; // 800CDFCC
  {uint32_t ea=c->r[1]+0x000002ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDFD0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800CDFD4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CDFD8
  {uint32_t ea=c->r[1]+0x00000280u; WF32(ea,c->f[4]);} // 800CDFDC
  c->r[11]=R32(c->r[1]+0x0000028Cu); // 800CDFE0
  c->r[7]=c->r[1]+0x000000F4u; // 800CDFE4
  {uint32_t ea=c->r[1]+0x00000284u; WF32(ea,c->f[2]);} // 800CDFE8
  c->r[28]=R32(c->r[1]+0x00000280u); // 800CDFEC
  {uint32_t ea=c->r[1]+0x00000288u; WF32(ea,c->f[0]);} // 800CDFF0
  c->r[27]=R32(c->r[1]+0x00000284u); // 800CDFF4
  c->r[12]=R32(c->r[1]+0x00000288u); // 800CDFF8
  c->r[10]=R32(c->r[1]+0x00000290u); // 800CDFFC
  c->r[9]=R32(c->r[1]+0x00000294u); // 800CE000
  c->r[8]=R32(c->r[1]+0x00000298u); // 800CE004
  c->r[4]=R32(c->r[1]+0x0000029Cu); // 800CE008
  c->r[0]=R32(c->r[1]+0x000002A0u); // 800CE00C
  W32(c->r[1]+0x000000F4u,c->r[28]); // 800CE010
  W32(c->r[1]+0x000000F8u,c->r[27]); // 800CE014
  W32(c->r[1]+0x000000FCu,c->r[12]); // 800CE018
  W32(c->r[1]+0x00000100u,c->r[11]); // 800CE01C
  W32(c->r[1]+0x00000104u,c->r[10]); // 800CE020
  W32(c->r[1]+0x00000108u,c->r[9]); // 800CE024
  W32(c->r[1]+0x0000010Cu,c->r[8]); // 800CE028
  W32(c->r[1]+0x00000110u,c->r[4]); // 800CE02C
  W32(c->r[1]+0x00000114u,c->r[0]); // 800CE030
  c->r[4]=R8(c->r[29]+0x00000098u); // 800CE034
  c->lr=0x800CE03Cu; f_8018DD04(c); // 800CE038
L_800CE03C:;
  c->r[0]=R8(c->r[29]+0x0000009Au); // 800CE03C
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE040
  if (crb(c,2)) { goto L_800CE400; } // 800CE044
  c->r[3]=R32(c->r[29]+0x00000074u); // 800CE048
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 800CE04C
  if (!crb(c,2)) { goto L_800CE400; } // 800CE050
  c->r[3]=c->r[3]|0x00000020u; // 800CE054
  c->r[0]=0u+0x000000FFu; // 800CE058
  W32(c->r[29]+0x00000074u,c->r[3]); // 800CE05C
  W16(c->r[29]+0x0000009Cu,c->r[0]); // 800CE060
  goto L_800CE400; // 800CE064
L_800CE068:;
  c->r[0]=R8(c->r[29]+0x0000009Au); // 800CE068
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE06C
  if (!crb(c,2)) { goto L_800CE228; } // 800CE070
  c->r[4]=0u+0x803A0000u; // 800CE074
  c->r[3]=0u+0x80550000u; // 800CE078
  c->r[4]=c->r[4]+0xFFFFDEA0u; // 800CE07C
  c->r[5]=0u+0x00000000u; // 800CE080
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE084
  c->r[6]=0u+0x00000000u; // 800CE088
  c->r[4]=c->r[4]+0x0000000Eu; // 800CE08C
  c->lr=0x800CE094u; f_8018D3E4(c); // 800CE090
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800CE094
  W8(c->r[29]+0x0000009Au,c->r[3]); // 800CE098
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE09C
  if (crb(c,2)) { goto L_800CE228; } // 800CE0A0
  {uint32_t ea=c->r[1]+0x000002D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE0A4
  c->r[3]=0u+0x80550000u; // 800CE0A8
  {uint32_t ea=c->r[1]+0x000002D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE0AC
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800CE0B0
  {uint32_t ea=c->r[1]+0x000002DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE0B4
  {uint32_t ea=c->r[1]+0x00000250u; WF32(ea,c->f[2]);} // 800CE0B8
  {uint32_t ea=c->r[1]+0x00000254u; WF32(ea,c->f[1]);} // 800CE0BC
  {uint32_t ea=c->r[1]+0x00000258u; WF32(ea,c->f[0]);} // 800CE0C0
  c->r[4]=R8(c->r[29]+0x0000007Bu); // 800CE0C4
  c->lr=0x800CE0CCu; f_8019C920(c); // 800CE0C8
  cmps(c,0,(int32_t)c->r[3],0); // 800CE0CC
  c->r[7]=c->r[3]|c->r[3]; // 800CE0D0
  if (crb(c,2)) { goto L_800CE12C; } // 800CE0D4
  c->r[4]=c->r[30]+0x00000054u; // 800CE0D8
  c->r[6]=R32(c->r[30]+0x00000054u); // 800CE0DC
  c->r[5]=R32(c->r[4]+0x00000004u); // 800CE0E0
  c->r[3]=c->r[1]+0x00000338u; // 800CE0E4
  c->r[0]=R32(c->r[4]+0x00000008u); // 800CE0E8
  c->r[4]=0u+0x00000059u; // 800CE0EC
  W32(c->r[1]+0x0000022Cu,c->r[6]); // 800CE0F0
  {uint32_t ea=c->r[2]+0xFFFFA0BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE0F4
  W32(c->r[1]+0x00000230u,c->r[5]); // 800CE0F8
  W32(c->r[1]+0x00000234u,c->r[0]); // 800CE0FC
  {uint32_t ea=c->r[7]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE100
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800CE104
  c->lr=0x800CE10Cu; f_80295FBC(c); // 800CE108
  c->r[4]=c->r[1]+0x0000022Cu; // 800CE10C
  c->r[3]=c->r[1]+0x00000338u; // 800CE110
  c->r[5]=c->r[4]|c->r[4]; // 800CE114
  c->lr=0x800CE11Cu; f_80296750(c); // 800CE118
  c->r[3]=c->r[1]+0x00000250u; // 800CE11C
  c->r[4]=c->r[1]+0x0000022Cu; // 800CE120
  c->r[5]=c->r[3]|c->r[3]; // 800CE124
  c->lr=0x800CE12Cu; f_80296A4C(c); // 800CE128
L_800CE12C:;
  c->r[0]=0u+0x00000000u; // 800CE12C
  c->r[3]=c->r[1]+0x00000244u; // 800CE130
  W32(c->r[1]+0x00000220u,c->r[0]); // 800CE134
  c->r[4]=c->r[1]+0x00000220u; // 800CE138
  W32(c->r[1]+0x00000224u,c->r[0]); // 800CE13C
  W32(c->r[1]+0x00000228u,c->r[0]); // 800CE140
  c->lr=0x800CE148u; f_800361A0(c); // 800CE144
  c->r[4]=c->r[30]+0x00000060u; // 800CE148
  c->r[6]=R32(c->r[30]+0x00000060u); // 800CE14C
  c->r[5]=R32(c->r[4]+0x00000004u); // 800CE150
  c->r[3]=c->r[1]+0x00000238u; // 800CE154
  c->r[0]=R32(c->r[4]+0x00000008u); // 800CE158
  c->r[4]=c->r[1]+0x00000214u; // 800CE15C
  W32(c->r[1]+0x00000214u,c->r[6]); // 800CE160
  W32(c->r[1]+0x00000218u,c->r[5]); // 800CE164
  W32(c->r[1]+0x0000021Cu,c->r[0]); // 800CE168
  c->lr=0x800CE170u; f_800361A0(c); // 800CE16C
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE170
  c->r[3]=c->r[29]+0x000000A4u; // 800CE174
  c->r[4]=c->r[1]+0x000002A4u; // 800CE178
  {uint32_t ea=c->r[29]+0x000000A0u; WF32(ea,c->f[0]);} // 800CE17C
  c->lr=0x800CE184u; f_800361A0(c); // 800CE180
  {uint32_t ea=c->r[1]+0x00000238u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE184
  c->r[3]=c->r[1]+0x00000238u; // 800CE188
  {uint32_t ea=c->r[29]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE18C
  c->r[4]=c->r[3]|c->r[3]; // 800CE190
  {uint32_t ea=c->r[1]+0x0000023Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE194
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CE198
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE19C
  {uint32_t ea=c->r[1]+0x00000238u; WF32(ea,c->f[0]);} // 800CE1A0
  {uint32_t ea=c->r[29]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE1A4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800CE1A8
  {uint32_t ea=c->r[1]+0x0000023Cu; WF32(ea,c->f[0]);} // 800CE1AC
  {uint32_t ea=c->r[29]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE1B0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CE1B4
  {uint32_t ea=c->r[1]+0x00000240u; WF32(ea,c->f[0]);} // 800CE1B8
  {uint32_t ea=c->r[29]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE1BC
  c->lr=0x800CE1C4u; f_80296A94(c); // 800CE1C0
  c->r[28]=R32(c->r[1]+0x00000238u); // 800CE1C4
  c->r[3]=0u+0x80550000u; // 800CE1C8
  c->r[27]=R32(c->r[1]+0x0000023Cu); // 800CE1CC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE1D0
  c->r[12]=R32(c->r[1]+0x00000240u); // 800CE1D4
  c->r[5]=c->r[1]+0x000000E8u; // 800CE1D8
  c->r[11]=R32(c->r[1]+0x00000244u); // 800CE1DC
  c->r[6]=c->r[1]+0x000000DCu; // 800CE1E0
  c->r[10]=R32(c->r[1]+0x00000248u); // 800CE1E4
  c->r[7]=c->r[1]+0x000000D0u; // 800CE1E8
  c->r[9]=R32(c->r[1]+0x0000024Cu); // 800CE1EC
  c->r[8]=R32(c->r[1]+0x00000250u); // 800CE1F0
  c->r[4]=R32(c->r[1]+0x00000254u); // 800CE1F4
  c->r[0]=R32(c->r[1]+0x00000258u); // 800CE1F8
  W32(c->r[1]+0x000000D0u,c->r[28]); // 800CE1FC
  W32(c->r[1]+0x000000D4u,c->r[27]); // 800CE200
  W32(c->r[1]+0x000000D8u,c->r[12]); // 800CE204
  W32(c->r[1]+0x000000DCu,c->r[11]); // 800CE208
  W32(c->r[1]+0x000000E0u,c->r[10]); // 800CE20C
  W32(c->r[1]+0x000000E4u,c->r[9]); // 800CE210
  W32(c->r[1]+0x000000E8u,c->r[8]); // 800CE214
  W32(c->r[1]+0x000000ECu,c->r[4]); // 800CE218
  W32(c->r[1]+0x000000F0u,c->r[0]); // 800CE21C
  c->r[4]=R8(c->r[29]+0x0000009Au); // 800CE220
  c->lr=0x800CE228u; f_8018DD04(c); // 800CE224
L_800CE228:;
  c->r[4]=R8(c->r[29]+0x00000098u); // 800CE228
  cmpu(c,0,c->r[4],0x000000FFu); // 800CE22C
  if (crb(c,2)) { goto L_800CE400; } // 800CE230
  c->r[3]=0u+0x80550000u; // 800CE234
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE238
  c->lr=0x800CE240u; f_8018D738(c); // 800CE23C
  c->r[0]=0u+0x000000FFu; // 800CE240
  W8(c->r[29]+0x00000098u,c->r[0]); // 800CE244
  goto L_800CE400; // 800CE248
L_800CE24C:;
  c->r[3]=c->r[29]|c->r[29]; // 800CE24C
  c->lr=0x800CE254u; f_800CF91C(c); // 800CE250
  cmps(c,0,(int32_t)c->r[3],0); // 800CE254
  if (crb(c,2)) { goto L_800CE394; } // 800CE258
  c->r[0]=R8(c->r[29]+0x00000098u); // 800CE25C
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE260
  if (!crb(c,2)) { goto L_800CE28C; } // 800CE264
  c->r[4]=0u+0x803A0000u; // 800CE268
  c->r[3]=0u+0x80550000u; // 800CE26C
  c->r[4]=c->r[4]+0xFFFFDEA0u; // 800CE270
  c->r[5]=0u+0x00000000u; // 800CE274
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE278
  c->r[6]=0u+0x00000000u; // 800CE27C
  c->r[4]=c->r[4]+0x00000012u; // 800CE280
  c->lr=0x800CE288u; f_8018D3E4(c); // 800CE284
  W8(c->r[29]+0x00000098u,c->r[3]); // 800CE288
L_800CE28C:;
  c->r[0]=R8(c->r[29]+0x00000098u); // 800CE28C
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE290
  if (crb(c,2)) { goto L_800CE400; } // 800CE294
  {uint32_t ea=c->r[1]+0x000002D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE298
  c->r[0]=0u+0x00000000u; // 800CE29C
  {uint32_t ea=c->r[2]+0xFFFFA0C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE2A0
  c->r[3]=c->r[1]+0x000001FCu; // 800CE2A4
  {uint32_t ea=c->r[1]+0x000002D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE2A8
  c->r[4]=c->r[1]+0x000001E4u; // 800CE2AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800CE2B0
  {uint32_t ea=c->r[1]+0x000002DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE2B4
  {uint32_t ea=c->r[1]+0x00000208u; WF32(ea,c->f[2]);} // 800CE2B8
  {uint32_t ea=c->r[1]+0x0000020Cu; WF32(ea,c->f[1]);} // 800CE2BC
  {uint32_t ea=c->r[1]+0x00000210u; WF32(ea,c->f[0]);} // 800CE2C0
  W32(c->r[1]+0x000001E4u,c->r[0]); // 800CE2C4
  W32(c->r[1]+0x000001E8u,c->r[0]); // 800CE2C8
  W32(c->r[1]+0x000001ECu,c->r[0]); // 800CE2CC
  c->lr=0x800CE2D4u; f_800361A0(c); // 800CE2D0
  c->r[4]=c->r[30]+0x0000006Cu; // 800CE2D4
  c->r[6]=R32(c->r[30]+0x0000006Cu); // 800CE2D8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800CE2DC
  c->r[3]=c->r[1]+0x000001F0u; // 800CE2E0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800CE2E4
  c->r[4]=c->r[1]+0x000001D8u; // 800CE2E8
  W32(c->r[1]+0x000001D8u,c->r[6]); // 800CE2EC
  W32(c->r[1]+0x000001DCu,c->r[5]); // 800CE2F0
  W32(c->r[1]+0x000001E0u,c->r[0]); // 800CE2F4
  c->lr=0x800CE2FCu; f_800361A0(c); // 800CE2F8
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE2FC
  c->r[3]=0u+0x80550000u; // 800CE300
  {uint32_t ea=c->r[1]+0x000002A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE304
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE308
  {uint32_t ea=c->r[1]+0x000001F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CE30C
  c->r[5]=c->r[1]+0x000000C4u; // 800CE310
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 800CE314
  {uint32_t ea=c->r[1]+0x000002A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE318
  {uint32_t ea=c->r[1]+0x000001F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE31C
  c->r[6]=c->r[1]+0x000000B8u; // 800CE320
  {uint32_t ea=c->r[1]+0x000002ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE324
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800CE328
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CE32C
  {uint32_t ea=c->r[1]+0x000001F0u; WF32(ea,c->f[4]);} // 800CE330
  c->r[11]=R32(c->r[1]+0x000001FCu); // 800CE334
  c->r[7]=c->r[1]+0x000000ACu; // 800CE338
  {uint32_t ea=c->r[1]+0x000001F4u; WF32(ea,c->f[2]);} // 800CE33C
  c->r[28]=R32(c->r[1]+0x000001F0u); // 800CE340
  {uint32_t ea=c->r[1]+0x000001F8u; WF32(ea,c->f[0]);} // 800CE344
  c->r[27]=R32(c->r[1]+0x000001F4u); // 800CE348
  c->r[12]=R32(c->r[1]+0x000001F8u); // 800CE34C
  c->r[10]=R32(c->r[1]+0x00000200u); // 800CE350
  c->r[9]=R32(c->r[1]+0x00000204u); // 800CE354
  c->r[8]=R32(c->r[1]+0x00000208u); // 800CE358
  c->r[4]=R32(c->r[1]+0x0000020Cu); // 800CE35C
  c->r[0]=R32(c->r[1]+0x00000210u); // 800CE360
  W32(c->r[1]+0x000000ACu,c->r[28]); // 800CE364
  W32(c->r[1]+0x000000B0u,c->r[27]); // 800CE368
  W32(c->r[1]+0x000000B4u,c->r[12]); // 800CE36C
  W32(c->r[1]+0x000000B8u,c->r[11]); // 800CE370
  W32(c->r[1]+0x000000BCu,c->r[10]); // 800CE374
  W32(c->r[1]+0x000000C0u,c->r[9]); // 800CE378
  W32(c->r[1]+0x000000C4u,c->r[8]); // 800CE37C
  W32(c->r[1]+0x000000C8u,c->r[4]); // 800CE380
  W32(c->r[1]+0x000000CCu,c->r[0]); // 800CE384
  c->r[4]=R8(c->r[29]+0x00000098u); // 800CE388
  c->lr=0x800CE390u; f_8018DD04(c); // 800CE38C
  goto L_800CE400; // 800CE390
L_800CE394:;
  c->r[4]=R8(c->r[29]+0x00000098u); // 800CE394
  cmpu(c,0,c->r[4],0x000000FFu); // 800CE398
  if (crb(c,2)) { goto L_800CE400; } // 800CE39C
  c->r[3]=0u+0x80550000u; // 800CE3A0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE3A4
  c->lr=0x800CE3ACu; f_8018D738(c); // 800CE3A8
  c->r[0]=0u+0x000000FFu; // 800CE3AC
  W8(c->r[29]+0x00000098u,c->r[0]); // 800CE3B0
  goto L_800CE400; // 800CE3B4
L_800CE3B8:;
  c->r[4]=R8(c->r[29]+0x00000098u); // 800CE3B8
  cmpu(c,0,c->r[4],0x000000FFu); // 800CE3BC
  if (crb(c,2)) { goto L_800CE3D8; } // 800CE3C0
  c->r[3]=0u+0x80550000u; // 800CE3C4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE3C8
  c->lr=0x800CE3D0u; f_8018D738(c); // 800CE3CC
  c->r[0]=0u+0x000000FFu; // 800CE3D0
  W8(c->r[29]+0x00000098u,c->r[0]); // 800CE3D4
L_800CE3D8:;
  c->r[0]=R8(c->r[29]+0x0000009Au); // 800CE3D8
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE3DC
  if (crb(c,2)) { goto L_800CE400; } // 800CE3E0
  c->r[3]=R32(c->r[29]+0x00000074u); // 800CE3E4
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 800CE3E8
  if (!crb(c,2)) { goto L_800CE400; } // 800CE3EC
  c->r[3]=c->r[3]|0x00000020u; // 800CE3F0
  c->r[0]=0u+0x000000FFu; // 800CE3F4
  W32(c->r[29]+0x00000074u,c->r[3]); // 800CE3F8
  W16(c->r[29]+0x0000009Cu,c->r[0]); // 800CE3FC
L_800CE400:;
  c->r[0]=R8(c->r[29]+0x0000009Au); // 800CE400
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE404
  if (crb(c,2)) { goto L_800CE52C; } // 800CE408
  {uint32_t ea=c->r[29]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE40C
  {uint32_t ea=c->r[2]+0xFFFFA0C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE410
  fcmp(c,0,c->f[2],c->f[1]); // 800CE414
  if (!crb(c,0)) { goto L_800CE52C; } // 800CE418
  {uint32_t ea=c->r[2]+0xFFFFA0CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE41C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800CE420
  fcmp(c,0,c->f[0],c->f[1]); // 800CE424
  {uint32_t ea=c->r[29]+0x000000A0u; WF32(ea,c->f[0]);} // 800CE428
  if (!crb(c,1)) { goto L_800CE434; } // 800CE42C
  {uint32_t ea=c->r[29]+0x000000A0u; WF32(ea,c->f[1]);} // 800CE430
L_800CE434:;
  c->r[4]=c->r[30]+0x00000078u; // 800CE434
  c->r[8]=0u+0x00000000u; // 800CE438
  c->r[7]=R32(c->r[30]+0x00000078u); // 800CE43C
  c->r[27]=0u+0x80550000u; // 800CE440
  c->r[6]=R32(c->r[4]+0x00000004u); // 800CE444
  c->r[3]=c->r[27]+0xFFFFC848u; // 800CE448
  c->r[0]=R32(c->r[4]+0x00000008u); // 800CE44C
  c->r[5]=c->r[1]+0x00000308u; // 800CE450
  W32(c->r[1]+0x000001B4u,c->r[7]); // 800CE454
  W32(c->r[1]+0x000001B8u,c->r[6]); // 800CE458
  W32(c->r[1]+0x000001BCu,c->r[0]); // 800CE45C
  W32(c->r[1]+0x000001C0u,c->r[8]); // 800CE460
  c->r[4]=R8(c->r[29]+0x0000009Au); // 800CE464
  W32(c->r[1]+0x000001C4u,c->r[8]); // 800CE468
  W32(c->r[1]+0x000001C8u,c->r[8]); // 800CE46C
  c->lr=0x800CE474u; f_8018E0F4(c); // 800CE470
  {uint32_t ea=c->r[1]+0x000001B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE474
  c->r[3]=c->r[1]+0x000001B4u; // 800CE478
  {uint32_t ea=c->r[29]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE47C
  c->r[4]=c->r[3]|c->r[3]; // 800CE480
  {uint32_t ea=c->r[1]+0x00000314u; c->f[5]=c->ps1[5]=RF32(ea);} // 800CE484
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CE488
  {uint32_t ea=c->r[1]+0x00000324u; c->f[4]=c->ps1[4]=RF32(ea);} // 800CE48C
  {uint32_t ea=c->r[1]+0x00000334u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CE490
  {uint32_t ea=c->r[1]+0x000001B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE494
  {uint32_t ea=c->r[1]+0x000001B4u; WF32(ea,c->f[0]);} // 800CE498
  {uint32_t ea=c->r[1]+0x000001BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE49C
  {uint32_t ea=c->r[29]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE4A0
  {uint32_t ea=c->r[1]+0x000001CCu; WF32(ea,c->f[5]);} // 800CE4A4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800CE4A8
  {uint32_t ea=c->r[1]+0x000001D0u; WF32(ea,c->f[4]);} // 800CE4AC
  {uint32_t ea=c->r[1]+0x000001B8u; WF32(ea,c->f[0]);} // 800CE4B0
  {uint32_t ea=c->r[29]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE4B4
  {uint32_t ea=c->r[1]+0x000001D4u; WF32(ea,c->f[3]);} // 800CE4B8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CE4BC
  {uint32_t ea=c->r[1]+0x000001BCu; WF32(ea,c->f[0]);} // 800CE4C0
  {uint32_t ea=c->r[29]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE4C4
  c->lr=0x800CE4CCu; f_80296A94(c); // 800CE4C8
  c->r[28]=R32(c->r[1]+0x000001B4u); // 800CE4CC
  c->r[3]=c->r[27]+0xFFFFC848u; // 800CE4D0
  c->r[27]=R32(c->r[1]+0x000001B8u); // 800CE4D4
  c->r[5]=c->r[1]+0x000000A0u; // 800CE4D8
  c->r[12]=R32(c->r[1]+0x000001BCu); // 800CE4DC
  c->r[6]=c->r[1]+0x00000094u; // 800CE4E0
  c->r[11]=R32(c->r[1]+0x000001C0u); // 800CE4E4
  c->r[7]=c->r[1]+0x00000088u; // 800CE4E8
  c->r[10]=R32(c->r[1]+0x000001C4u); // 800CE4EC
  c->r[9]=R32(c->r[1]+0x000001C8u); // 800CE4F0
  c->r[8]=R32(c->r[1]+0x000001CCu); // 800CE4F4
  c->r[4]=R32(c->r[1]+0x000001D0u); // 800CE4F8
  c->r[0]=R32(c->r[1]+0x000001D4u); // 800CE4FC
  W32(c->r[1]+0x00000088u,c->r[28]); // 800CE500
  W32(c->r[1]+0x0000008Cu,c->r[27]); // 800CE504
  W32(c->r[1]+0x00000090u,c->r[12]); // 800CE508
  W32(c->r[1]+0x00000094u,c->r[11]); // 800CE50C
  W32(c->r[1]+0x00000098u,c->r[10]); // 800CE510
  W32(c->r[1]+0x0000009Cu,c->r[9]); // 800CE514
  W32(c->r[1]+0x000000A0u,c->r[8]); // 800CE518
  W32(c->r[1]+0x000000A4u,c->r[4]); // 800CE51C
  W32(c->r[1]+0x000000A8u,c->r[0]); // 800CE520
  c->r[4]=R8(c->r[29]+0x0000009Au); // 800CE524
  c->lr=0x800CE52Cu; f_8018DD04(c); // 800CE528
L_800CE52C:;
  c->r[4]=R8(c->r[29]+0x0000009Au); // 800CE52C
  cmpu(c,0,c->r[4],0x000000FFu); // 800CE530
  if (crb(c,2)) { goto L_800CE5A4; } // 800CE534
  c->r[0]=R32(c->r[29]+0x00000074u); // 800CE538
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800CE53C
  if (crb(c,2)) { goto L_800CE5A4; } // 800CE540
  c->r[3]=R16(c->r[29]+0x0000009Cu); // 800CE544
  cmpu(c,0,c->r[3],0x00000004u); // 800CE548
  if (crb(c,1)) { goto L_800CE58C; } // 800CE54C
  c->r[0]=0u+0x00000000u; // 800CE550
  c->r[27]=0u+0x80550000u; // 800CE554
  W16(c->r[29]+0x0000009Cu,c->r[0]); // 800CE558
  c->r[3]=c->r[27]+0xFFFFC848u; // 800CE55C
  c->r[5]=0u+0x00000000u; // 800CE560
  c->lr=0x800CE568u; f_8018EBA0(c); // 800CE564
  c->r[4]=R8(c->r[29]+0x0000009Au); // 800CE568
  c->r[3]=c->r[27]+0xFFFFC848u; // 800CE56C
  c->lr=0x800CE574u; f_8018D694(c); // 800CE570
  c->r[0]=R32(c->r[29]+0x00000074u); // 800CE574
  c->r[3]=0u+0x000000FFu; // 800CE578
  W8(c->r[29]+0x0000009Au,c->r[3]); // 800CE57C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 800CE580
  W32(c->r[29]+0x00000074u,c->r[0]); // 800CE584
  goto L_800CE5A4; // 800CE588
L_800CE58C:;
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800CE58C
  c->r[3]=0u+0x80550000u; // 800CE590
  W16(c->r[29]+0x0000009Cu,c->r[0]); // 800CE594
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE598
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800CE59C
  c->lr=0x800CE5A4u; f_8018EBA0(c); // 800CE5A0
L_800CE5A4:;
  c->r[0]=R32(c->r[29]+0x00000074u); // 800CE5A4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800CE5A8
  if (crb(c,2)) { goto L_800CE638; } // 800CE5AC
  c->r[0]=R8(c->r[29]+0x00000099u); // 800CE5B0
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE5B4
  if (!crb(c,2)) { goto L_800CE5E0; } // 800CE5B8
  c->r[4]=0u+0x803A0000u; // 800CE5BC
  c->r[3]=0u+0x80550000u; // 800CE5C0
  c->r[4]=c->r[4]+0xFFFFDEA0u; // 800CE5C4
  c->r[5]=0u+0x00000000u; // 800CE5C8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE5CC
  c->r[6]=0u+0x00000000u; // 800CE5D0
  c->r[4]=c->r[4]+0x00000016u; // 800CE5D4
  c->lr=0x800CE5DCu; f_8018D3E4(c); // 800CE5D8
  W8(c->r[29]+0x00000099u,c->r[3]); // 800CE5DC
L_800CE5E0:;
  c->r[0]=R32(c->r[29]+0x00000074u); // 800CE5E0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800CE5E4
  if (crb(c,2)) { goto L_800CE61C; } // 800CE5E8
  c->r[0]=R8(c->r[29]+0x0000009Eu); // 800CE5EC
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE5F0
  if (!crb(c,2)) { goto L_800CE61C; } // 800CE5F4
  c->r[4]=0u+0x803A0000u; // 800CE5F8
  c->r[3]=0u+0x80550000u; // 800CE5FC
  c->r[4]=c->r[4]+0xFFFFDEA0u; // 800CE600
  c->r[5]=0u+0x00000004u; // 800CE604
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE608
  c->r[6]=0u+0x00000000u; // 800CE60C
  c->r[4]=c->r[4]+0x0000001Au; // 800CE610
  c->lr=0x800CE618u; f_8018D3E4(c); // 800CE614
  W8(c->r[29]+0x0000009Eu,c->r[3]); // 800CE618
L_800CE61C:;
  c->r[0]=R32(c->r[29]+0x00000074u); // 800CE61C
  c->r[3]=c->r[29]+0x0000000Cu; // 800CE620
  c->r[4]=0u+0x00000000u; // 800CE624
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800CE628
  W32(c->r[29]+0x00000074u,c->r[0]); // 800CE62C
  c->lr=0x800CE634u; f_80036430(c); // 800CE630
  goto L_800CE6AC; // 800CE634
L_800CE638:;
  c->r[0]=R8(c->r[29]+0x00000099u); // 800CE638
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE63C
  if (crb(c,2)) { goto L_800CE6AC; } // 800CE640
  c->r[3]=c->r[29]+0x0000000Cu; // 800CE644
  c->r[4]=0u+0x00000000u; // 800CE648
  c->lr=0x800CE650u; f_800366DC(c); // 800CE64C
  c->r[3]=c->r[29]+0x0000000Cu; // 800CE650
  c->r[4]=0u+0x0000001Eu; // 800CE654
  c->lr=0x800CE65Cu; f_80038BCC(c); // 800CE658
  cmps(c,0,(int32_t)c->r[3],0); // 800CE65C
  if (crb(c,2)) { goto L_800CE6AC; } // 800CE660
  c->r[3]=c->r[29]+0x0000000Cu; // 800CE664
  c->r[4]=0u+0x00000000u; // 800CE668
  c->lr=0x800CE670u; f_80036430(c); // 800CE66C
  c->r[28]=0u+0x80550000u; // 800CE670
  c->r[4]=R8(c->r[29]+0x00000099u); // 800CE674
  c->r[3]=c->r[28]+0xFFFFC848u; // 800CE678
  c->lr=0x800CE680u; f_8018D738(c); // 800CE67C
  c->r[4]=R8(c->r[29]+0x0000009Eu); // 800CE680
  c->r[27]=0u+0x000000FFu; // 800CE684
  W8(c->r[29]+0x00000099u,c->r[27]); // 800CE688
  cmpu(c,0,c->r[4],0x000000FFu); // 800CE68C
  if (crb(c,2)) { goto L_800CE6AC; } // 800CE690
  c->r[3]=c->r[28]+0xFFFFC848u; // 800CE694
  c->lr=0x800CE69Cu; f_8018D738(c); // 800CE698
  c->r[0]=R32(c->r[29]+0x00000074u); // 800CE69C
  W8(c->r[29]+0x0000009Eu,c->r[27]); // 800CE6A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800CE6A4
  W32(c->r[29]+0x00000074u,c->r[0]); // 800CE6A8
L_800CE6AC:;
  c->r[0]=R8(c->r[29]+0x00000099u); // 800CE6AC
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE6B0
  if (crb(c,2)) { goto L_800CE8BC; } // 800CE6B4
  {uint32_t ea=c->r[1]+0x000002D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE6B8
  c->r[5]=c->r[30]+0x00000084u; // 800CE6BC
  {uint32_t ea=c->r[2]+0xFFFFA0C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE6C0
  c->r[3]=c->r[1]+0x0000019Cu; // 800CE6C4
  {uint32_t ea=c->r[1]+0x000002D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE6C8
  c->r[4]=c->r[1]+0x00000184u; // 800CE6CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800CE6D0
  {uint32_t ea=c->r[1]+0x000002DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE6D4
  c->r[7]=R32(c->r[30]+0x00000084u); // 800CE6D8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800CE6DC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CE6E0
  {uint32_t ea=c->r[1]+0x000001A8u; WF32(ea,c->f[2]);} // 800CE6E4
  {uint32_t ea=c->r[1]+0x000001ACu; WF32(ea,c->f[1]);} // 800CE6E8
  {uint32_t ea=c->r[1]+0x000001B0u; WF32(ea,c->f[0]);} // 800CE6EC
  W32(c->r[1]+0x00000184u,c->r[7]); // 800CE6F0
  W32(c->r[1]+0x00000188u,c->r[6]); // 800CE6F4
  W32(c->r[1]+0x0000018Cu,c->r[0]); // 800CE6F8
  c->lr=0x800CE700u; f_800361A0(c); // 800CE6FC
  c->r[3]=0u+0x80550000u; // 800CE700
  c->r[4]=R8(c->r[29]+0x0000007Au); // 800CE704
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800CE708
  c->lr=0x800CE710u; f_8019C920(c); // 800CE70C
  cmps(c,0,(int32_t)c->r[3],0); // 800CE710
  c->r[31]=c->r[3]|c->r[3]; // 800CE714
  if (crb(c,2)) { goto L_800CE724; } // 800CE718
  {uint32_t ea=c->r[3]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE71C
  {uint32_t ea=c->r[1]+0x000001A0u; WF32(ea,c->f[0]);} // 800CE720
L_800CE724:;
  c->r[4]=c->r[30]+0x00000090u; // 800CE724
  c->r[6]=R32(c->r[30]+0x00000090u); // 800CE728
  c->r[5]=R32(c->r[4]+0x00000004u); // 800CE72C
  c->r[3]=c->r[1]+0x00000190u; // 800CE730
  c->r[0]=R32(c->r[4]+0x00000008u); // 800CE734
  c->r[4]=c->r[1]+0x00000178u; // 800CE738
  W32(c->r[1]+0x00000178u,c->r[6]); // 800CE73C
  W32(c->r[1]+0x0000017Cu,c->r[5]); // 800CE740
  W32(c->r[1]+0x00000180u,c->r[0]); // 800CE744
  c->lr=0x800CE74Cu; f_800361A0(c); // 800CE748
  {uint32_t ea=c->r[1]+0x00000190u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE74C
  c->r[3]=0u+0x80550000u; // 800CE750
  {uint32_t ea=c->r[1]+0x000002A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE754
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE758
  {uint32_t ea=c->r[1]+0x00000194u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CE75C
  c->r[5]=c->r[1]+0x0000007Cu; // 800CE760
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 800CE764
  {uint32_t ea=c->r[1]+0x000002A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE768
  {uint32_t ea=c->r[1]+0x00000198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE76C
  c->r[6]=c->r[1]+0x00000070u; // 800CE770
  {uint32_t ea=c->r[1]+0x000002ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE774
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800CE778
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CE77C
  {uint32_t ea=c->r[1]+0x00000190u; WF32(ea,c->f[4]);} // 800CE780
  c->r[11]=R32(c->r[1]+0x0000019Cu); // 800CE784
  c->r[7]=c->r[1]+0x00000064u; // 800CE788
  {uint32_t ea=c->r[1]+0x00000194u; WF32(ea,c->f[2]);} // 800CE78C
  c->r[27]=R32(c->r[1]+0x00000190u); // 800CE790
  {uint32_t ea=c->r[1]+0x00000198u; WF32(ea,c->f[0]);} // 800CE794
  c->r[28]=R32(c->r[1]+0x00000194u); // 800CE798
  c->r[12]=R32(c->r[1]+0x00000198u); // 800CE79C
  c->r[10]=R32(c->r[1]+0x000001A0u); // 800CE7A0
  c->r[9]=R32(c->r[1]+0x000001A4u); // 800CE7A4
  c->r[8]=R32(c->r[1]+0x000001A8u); // 800CE7A8
  c->r[4]=R32(c->r[1]+0x000001ACu); // 800CE7AC
  c->r[0]=R32(c->r[1]+0x000001B0u); // 800CE7B0
  W32(c->r[1]+0x00000064u,c->r[27]); // 800CE7B4
  W32(c->r[1]+0x00000068u,c->r[28]); // 800CE7B8
  W32(c->r[1]+0x0000006Cu,c->r[12]); // 800CE7BC
  W32(c->r[1]+0x00000070u,c->r[11]); // 800CE7C0
  W32(c->r[1]+0x00000074u,c->r[10]); // 800CE7C4
  W32(c->r[1]+0x00000078u,c->r[9]); // 800CE7C8
  W32(c->r[1]+0x0000007Cu,c->r[8]); // 800CE7CC
  W32(c->r[1]+0x00000080u,c->r[4]); // 800CE7D0
  W32(c->r[1]+0x00000084u,c->r[0]); // 800CE7D4
  c->r[4]=R8(c->r[29]+0x00000099u); // 800CE7D8
  c->lr=0x800CE7E0u; f_8018DD04(c); // 800CE7DC
  c->r[0]=R8(c->r[29]+0x0000009Eu); // 800CE7E0
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE7E4
  if (crb(c,2)) { goto L_800CE8BC; } // 800CE7E8
  {uint32_t ea=c->r[1]+0x000002D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE7EC
  c->r[0]=0u+0x00000000u; // 800CE7F0
  {uint32_t ea=c->r[1]+0x000002D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE7F4
  c->r[3]=c->r[1]+0x0000019Cu; // 800CE7F8
  {uint32_t ea=c->r[1]+0x000002DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE7FC
  c->r[4]=c->r[1]+0x0000016Cu; // 800CE800
  {uint32_t ea=c->r[1]+0x000001A8u; WF32(ea,c->f[2]);} // 800CE804
  {uint32_t ea=c->r[1]+0x000001ACu; WF32(ea,c->f[1]);} // 800CE808
  {uint32_t ea=c->r[1]+0x000001B0u; WF32(ea,c->f[0]);} // 800CE80C
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 800CE810
  W32(c->r[1]+0x00000170u,c->r[0]); // 800CE814
  W32(c->r[1]+0x00000174u,c->r[0]); // 800CE818
  c->lr=0x800CE820u; f_800361A0(c); // 800CE81C
  cmps(c,0,(int32_t)c->r[31],0); // 800CE820
  if (crb(c,2)) { goto L_800CE830; } // 800CE824
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE828
  {uint32_t ea=c->r[1]+0x000001A0u; WF32(ea,c->f[0]);} // 800CE82C
L_800CE830:;
  c->r[4]=c->r[30]+0x0000009Cu; // 800CE830
  c->r[6]=R32(c->r[30]+0x0000009Cu); // 800CE834
  c->r[5]=R32(c->r[4]+0x00000004u); // 800CE838
  c->r[3]=c->r[1]+0x00000190u; // 800CE83C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800CE840
  c->r[4]=c->r[1]+0x00000160u; // 800CE844
  W32(c->r[1]+0x00000160u,c->r[6]); // 800CE848
  W32(c->r[1]+0x00000164u,c->r[5]); // 800CE84C
  W32(c->r[1]+0x00000168u,c->r[0]); // 800CE850
  c->lr=0x800CE858u; f_800361A0(c); // 800CE854
  c->r[28]=R32(c->r[1]+0x00000190u); // 800CE858
  c->r[3]=0u+0x80550000u; // 800CE85C
  c->r[31]=R32(c->r[1]+0x00000194u); // 800CE860
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE864
  c->r[12]=R32(c->r[1]+0x00000198u); // 800CE868
  c->r[5]=c->r[1]+0x00000058u; // 800CE86C
  c->r[11]=R32(c->r[1]+0x0000019Cu); // 800CE870
  c->r[6]=c->r[1]+0x0000004Cu; // 800CE874
  c->r[10]=R32(c->r[1]+0x000001A0u); // 800CE878
  c->r[7]=c->r[1]+0x00000040u; // 800CE87C
  c->r[9]=R32(c->r[1]+0x000001A4u); // 800CE880
  c->r[8]=R32(c->r[1]+0x000001A8u); // 800CE884
  c->r[4]=R32(c->r[1]+0x000001ACu); // 800CE888
  c->r[0]=R32(c->r[1]+0x000001B0u); // 800CE88C
  W32(c->r[1]+0x00000040u,c->r[28]); // 800CE890
  W32(c->r[1]+0x00000044u,c->r[31]); // 800CE894
  W32(c->r[1]+0x00000048u,c->r[12]); // 800CE898
  W32(c->r[1]+0x0000004Cu,c->r[11]); // 800CE89C
  W32(c->r[1]+0x00000050u,c->r[10]); // 800CE8A0
  W32(c->r[1]+0x00000054u,c->r[9]); // 800CE8A4
  W32(c->r[1]+0x00000058u,c->r[8]); // 800CE8A8
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 800CE8AC
  W32(c->r[1]+0x00000060u,c->r[0]); // 800CE8B0
  c->r[4]=R8(c->r[29]+0x0000009Eu); // 800CE8B4
  c->lr=0x800CE8BCu; f_8018DD04(c); // 800CE8B8
L_800CE8BC:;
  c->r[0]=R32(c->r[29]+0x00000074u); // 800CE8BC
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 800CE8C0
  if (crb(c,2)) { goto L_800CE914; } // 800CE8C4
  c->r[0]=R8(c->r[29]+0x0000009Bu); // 800CE8C8
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE8CC
  if (!crb(c,2)) { goto L_800CE8F8; } // 800CE8D0
  c->r[4]=0u+0x803A0000u; // 800CE8D4
  c->r[3]=0u+0x80550000u; // 800CE8D8
  c->r[4]=c->r[4]+0xFFFFDEA0u; // 800CE8DC
  c->r[5]=0u+0x00000000u; // 800CE8E0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE8E4
  c->r[6]=0u+0x00000000u; // 800CE8E8
  c->r[4]=c->r[4]+0x0000001Eu; // 800CE8EC
  c->lr=0x800CE8F4u; f_8018D3E4(c); // 800CE8F0
  W8(c->r[29]+0x0000009Bu,c->r[3]); // 800CE8F4
L_800CE8F8:;
  c->r[0]=R32(c->r[29]+0x00000074u); // 800CE8F8
  c->r[3]=c->r[29]+0x00000010u; // 800CE8FC
  c->r[4]=0u+0x00000000u; // 800CE900
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 800CE904
  W32(c->r[29]+0x00000074u,c->r[0]); // 800CE908
  c->lr=0x800CE910u; f_80036430(c); // 800CE90C
  goto L_800CE964; // 800CE910
L_800CE914:;
  c->r[0]=R8(c->r[29]+0x0000009Bu); // 800CE914
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE918
  if (crb(c,2)) { goto L_800CE964; } // 800CE91C
  c->r[3]=c->r[29]+0x00000010u; // 800CE920
  c->r[4]=0u+0x00000000u; // 800CE924
  c->lr=0x800CE92Cu; f_800366DC(c); // 800CE928
  c->r[3]=c->r[29]+0x00000010u; // 800CE92C
  c->r[4]=0u+0x0000001Eu; // 800CE930
  c->lr=0x800CE938u; f_80038BCC(c); // 800CE934
  cmps(c,0,(int32_t)c->r[3],0); // 800CE938
  if (crb(c,2)) { goto L_800CE964; } // 800CE93C
  c->r[3]=c->r[29]+0x00000010u; // 800CE940
  c->r[4]=0u+0x00000000u; // 800CE944
  c->lr=0x800CE94Cu; f_80036430(c); // 800CE948
  c->r[3]=0u+0x80550000u; // 800CE94C
  c->r[4]=R8(c->r[29]+0x0000009Bu); // 800CE950
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE954
  c->lr=0x800CE95Cu; f_8018D738(c); // 800CE958
  c->r[0]=0u+0x000000FFu; // 800CE95C
  W8(c->r[29]+0x0000009Bu,c->r[0]); // 800CE960
L_800CE964:;
  c->r[0]=R8(c->r[29]+0x0000009Bu); // 800CE964
  cmpu(c,0,c->r[0],0x000000FFu); // 800CE968
  if (crb(c,2)) { goto L_800CEA30; } // 800CE96C
  {uint32_t ea=c->r[1]+0x000002D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE970
  c->r[0]=0u+0x00000000u; // 800CE974
  {uint32_t ea=c->r[1]+0x000002D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE978
  c->r[3]=c->r[1]+0x00000148u; // 800CE97C
  {uint32_t ea=c->r[1]+0x000002DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE980
  c->r[4]=c->r[1]+0x00000130u; // 800CE984
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[2]);} // 800CE988
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[1]);} // 800CE98C
  {uint32_t ea=c->r[1]+0x0000015Cu; WF32(ea,c->f[0]);} // 800CE990
  W32(c->r[1]+0x00000130u,c->r[0]); // 800CE994
  W32(c->r[1]+0x00000134u,c->r[0]); // 800CE998
  W32(c->r[1]+0x00000138u,c->r[0]); // 800CE99C
  c->lr=0x800CE9A4u; f_800361A0(c); // 800CE9A0
  c->r[4]=c->r[30]+0x000000A8u; // 800CE9A4
  c->r[6]=R32(c->r[30]+0x000000A8u); // 800CE9A8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800CE9AC
  c->r[3]=c->r[1]+0x0000013Cu; // 800CE9B0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800CE9B4
  c->r[4]=c->r[1]+0x00000124u; // 800CE9B8
  W32(c->r[1]+0x00000124u,c->r[6]); // 800CE9BC
  W32(c->r[1]+0x00000128u,c->r[5]); // 800CE9C0
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 800CE9C4
  c->lr=0x800CE9CCu; f_800361A0(c); // 800CE9C8
  c->r[31]=R32(c->r[1]+0x0000013Cu); // 800CE9CC
  c->r[3]=0u+0x80550000u; // 800CE9D0
  c->r[30]=R32(c->r[1]+0x00000140u); // 800CE9D4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800CE9D8
  c->r[12]=R32(c->r[1]+0x00000144u); // 800CE9DC
  c->r[5]=c->r[1]+0x00000034u; // 800CE9E0
  c->r[11]=R32(c->r[1]+0x00000148u); // 800CE9E4
  c->r[6]=c->r[1]+0x00000028u; // 800CE9E8
  c->r[10]=R32(c->r[1]+0x0000014Cu); // 800CE9EC
  c->r[7]=c->r[1]+0x0000001Cu; // 800CE9F0
  c->r[9]=R32(c->r[1]+0x00000150u); // 800CE9F4
  c->r[8]=R32(c->r[1]+0x00000154u); // 800CE9F8
  c->r[4]=R32(c->r[1]+0x00000158u); // 800CE9FC
  c->r[0]=R32(c->r[1]+0x0000015Cu); // 800CEA00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CEA04
  W32(c->r[1]+0x00000020u,c->r[30]); // 800CEA08
  W32(c->r[1]+0x00000024u,c->r[12]); // 800CEA0C
  W32(c->r[1]+0x00000028u,c->r[11]); // 800CEA10
  W32(c->r[1]+0x0000002Cu,c->r[10]); // 800CEA14
  W32(c->r[1]+0x00000030u,c->r[9]); // 800CEA18
  W32(c->r[1]+0x00000034u,c->r[8]); // 800CEA1C
  W32(c->r[1]+0x00000038u,c->r[4]); // 800CEA20
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800CEA24
  c->r[4]=R8(c->r[29]+0x0000009Bu); // 800CEA28
  c->lr=0x800CEA30u; f_8018DD04(c); // 800CEA2C
L_800CEA30:;
  c->r[0]=R8(c->r[29]+0x00000098u); // 800CEA30
  cmpu(c,0,c->r[0],0x000000FFu); // 800CEA34
  if (!crb(c,2)) { goto L_800CEA48; } // 800CEA38
  c->r[0]=R8(c->r[29]+0x0000009Bu); // 800CEA3C
  cmpu(c,0,c->r[0],0x000000FFu); // 800CEA40
  if (crb(c,2)) { goto L_800CEB4C; } // 800CEA44
L_800CEA48:;
  c->r[3]=c->r[29]+0x00000014u; // 800CEA48
  c->r[4]=0u+0x00000000u; // 800CEA4C
  c->lr=0x800CEA54u; f_800366DC(c); // 800CEA50
  c->r[3]=c->r[29]+0x00000014u; // 800CEA54
  c->r[4]=0u+0x0000001Eu; // 800CEA58
  c->lr=0x800CEA60u; f_80038BCC(c); // 800CEA5C
  cmps(c,0,(int32_t)c->r[3],0); // 800CEA60
  if (crb(c,2)) { goto L_800CEB58; } // 800CEA64
  c->r[3]=c->r[29]+0x00000014u; // 800CEA68
  c->r[4]=0u+0x00000000u; // 800CEA6C
  c->lr=0x800CEA74u; f_80036430(c); // 800CEA70
  c->r[0]=R8(c->r[29]+0x00000098u); // 800CEA74
  cmpu(c,0,c->r[0],0x000000FFu); // 800CEA78
  if (crb(c,2)) { goto L_800CEB04; } // 800CEA7C
  c->r[3]=c->r[29]|c->r[29]; // 800CEA80
  c->lr=0x800CEA88u; f_800CF800(c); // 800CEA84
  cmps(c,0,(int32_t)c->r[3],0); // 800CEA88
  if (crb(c,2)) { goto L_800CEACC; } // 800CEA8C
  c->r[3]=0u+0x805D0000u; // 800CEA90
  c->r[6]=c->r[1]+0x000002D4u; // 800CEA94
  c->r[3]=c->r[3]+0x00006D70u; // 800CEA98
  c->r[4]=0u+0x00000004u; // 800CEA9C
  c->r[5]=0u+0x00000014u; // 800CEAA0
  c->r[7]=0u+0x00000001u; // 800CEAA4
  c->r[8]=0u+0x00000001u; // 800CEAA8
  c->r[9]=0u+0x00000000u; // 800CEAAC
  c->r[10]=0u+0x00000000u; // 800CEAB0
  c->lr=0x800CEAB8u; f_8022ACD8(c); // 800CEAB4
  c->r[3]=0u+0x00000000u; // 800CEAB8
  c->r[4]=0u+0x00000000u; // 800CEABC
  c->r[5]=0u+0x00000008u; // 800CEAC0
  c->lr=0x800CEAC8u; f_8027C0C8(c); // 800CEAC4
  goto L_800CEB04; // 800CEAC8
L_800CEACC:;
  c->r[3]=0u+0x805D0000u; // 800CEACC
  c->r[6]=c->r[1]+0x000002D4u; // 800CEAD0
  c->r[3]=c->r[3]+0x00006D70u; // 800CEAD4
  c->r[4]=0u+0x00000004u; // 800CEAD8
  c->r[5]=0u+0x00000007u; // 800CEADC
  c->r[7]=0u+0x00000001u; // 800CEAE0
  c->r[8]=0u+0x00000001u; // 800CEAE4
  c->r[9]=0u+0x00000000u; // 800CEAE8
  c->r[10]=0u+0x00000000u; // 800CEAEC
  c->lr=0x800CEAF4u; f_8022ACD8(c); // 800CEAF0
  c->r[3]=0u+0x00000000u; // 800CEAF4
  c->r[4]=0u+0x00000000u; // 800CEAF8
  c->r[5]=0u+0x00000008u; // 800CEAFC
  c->lr=0x800CEB04u; f_8027C0C8(c); // 800CEB00
L_800CEB04:;
  c->r[0]=R8(c->r[29]+0x0000009Bu); // 800CEB04
  cmpu(c,0,c->r[0],0x000000FFu); // 800CEB08
  if (crb(c,2)) { goto L_800CEB58; } // 800CEB0C
  c->r[3]=0u+0x805D0000u; // 800CEB10
  c->r[6]=c->r[1]+0x000002D4u; // 800CEB14
  c->r[3]=c->r[3]+0x00006D70u; // 800CEB18
  c->r[4]=0u+0x00000004u; // 800CEB1C
  c->r[5]=0u+0x00000014u; // 800CEB20
  c->r[7]=0u+0x00000001u; // 800CEB24
  c->r[8]=0u+0x00000001u; // 800CEB28
  c->r[9]=0u+0x00000000u; // 800CEB2C
  c->r[10]=0u+0x00000000u; // 800CEB30
  c->lr=0x800CEB38u; f_8022ACD8(c); // 800CEB34
  c->r[3]=0u+0x00000000u; // 800CEB38
  c->r[4]=0u+0x00000000u; // 800CEB3C
  c->r[5]=0u+0x00000008u; // 800CEB40
  c->lr=0x800CEB48u; f_8027C0C8(c); // 800CEB44
  goto L_800CEB58; // 800CEB48
L_800CEB4C:;
  c->r[3]=c->r[29]+0x00000014u; // 800CEB4C
  c->r[4]=0u+0x0000001Eu; // 800CEB50
  c->lr=0x800CEB58u; f_80036430(c); // 800CEB54
L_800CEB58:;
  c->r[0]=R8(c->r[29]+0x00000099u); // 800CEB58
  cmpu(c,0,c->r[0],0x000000FFu); // 800CEB5C
  if (crb(c,2)) { goto L_800CEBCC; } // 800CEB60
  c->r[3]=c->r[29]+0x00000018u; // 800CEB64
  c->r[4]=0u+0x00000000u; // 800CEB68
  c->lr=0x800CEB70u; f_800366DC(c); // 800CEB6C
  c->r[3]=c->r[29]+0x00000018u; // 800CEB70
  c->r[4]=0u+0x0000001Eu; // 800CEB74
  c->lr=0x800CEB7Cu; f_80038BCC(c); // 800CEB78
  cmps(c,0,(int32_t)c->r[3],0); // 800CEB7C
  if (crb(c,2)) { goto L_800CEBD8; } // 800CEB80
  c->r[3]=c->r[29]+0x00000018u; // 800CEB84
  c->r[4]=0u+0x00000000u; // 800CEB88
  c->lr=0x800CEB90u; f_80036430(c); // 800CEB8C
  c->r[3]=0u+0x805D0000u; // 800CEB90
  c->r[6]=c->r[1]+0x000002D4u; // 800CEB94
  c->r[3]=c->r[3]+0x00006D70u; // 800CEB98
  c->r[4]=0u+0x00000004u; // 800CEB9C
  c->r[5]=0u+0x00000008u; // 800CEBA0
  c->r[7]=0u+0x00000001u; // 800CEBA4
  c->r[8]=0u+0x00000001u; // 800CEBA8
  c->r[9]=0u+0x00000000u; // 800CEBAC
  c->r[10]=0u+0x00000000u; // 800CEBB0
  c->lr=0x800CEBB8u; f_8022ACD8(c); // 800CEBB4
  c->r[3]=0u+0x00000000u; // 800CEBB8
  c->r[4]=0u+0x00000003u; // 800CEBBC
  c->r[5]=0u+0x0000000Cu; // 800CEBC0
  c->lr=0x800CEBC8u; f_8027C0C8(c); // 800CEBC4
  goto L_800CEBD8; // 800CEBC8
L_800CEBCC:;
  c->r[3]=c->r[29]+0x00000018u; // 800CEBCC
  c->r[4]=0u+0x0000001Eu; // 800CEBD0
  c->lr=0x800CEBD8u; f_80036430(c); // 800CEBD4
L_800CEBD8:;
  c->r[3]=R32(c->r[29]+0x00000394u); // 800CEBD8
  c->r[0]=R32(c->r[3]+0x00000030u); // 800CEBDC
  cmps(c,0,(int32_t)c->r[0],1); // 800CEBE0
  if (!crb(c,2)) { goto L_800CECC8; } // 800CEBE4
  c->r[3]=c->r[29]|c->r[29]; // 800CEBE8
  c->lr=0x800CEBF0u; f_800CF910(c); // 800CEBEC
  cmps(c,0,(int32_t)c->r[3],0); // 800CEBF0
  if (!crb(c,2)) { goto L_800CECC8; } // 800CEBF4
  c->r[3]=c->r[29]|c->r[29]; // 800CEBF8
  c->lr=0x800CEC00u; f_800CF91C(c); // 800CEBFC
  cmps(c,0,(int32_t)c->r[3],0); // 800CEC00
  if (crb(c,2)) { goto L_800CECC0; } // 800CEC04
  c->r[3]=c->r[29]|c->r[29]; // 800CEC08
  c->lr=0x800CEC10u; f_800CF800(c); // 800CEC0C
  cmps(c,0,(int32_t)c->r[3],0); // 800CEC10
  if (crb(c,2)) { goto L_800CEC6C; } // 800CEC14
  {uint32_t ea=c->r[1]+0x000002E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEC18
  {uint32_t ea=c->r[1]+0x000002E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEC1C
  c->f[1]=-c->f[1]; // 800CEC20
  c->f[2]=-c->f[0]; // 800CEC24
  c->lr=0x800CEC2Cu; f_8005C22C(c); // 800CEC28
  c->f[2]=-c->f[1]; // 800CEC2C
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEC30
  fcmp(c,0,c->f[2],c->f[0]); // 800CEC34
  if (!crb(c,1)) { goto L_800CEC50; } // 800CEC38
  {uint32_t ea=c->r[2]+0xFFFFA0D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEC3C
  {uint32_t ea=c->r[2]+0xFFFFA0D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEC40
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800CEC44
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 800CEC48
  goto L_800CECCC; // 800CEC4C
L_800CEC50:;
  {uint32_t ea=c->r[2]+0xFFFFA0D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEC50
  {uint32_t ea=c->r[2]+0xFFFFA0D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEC54
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800CEC58
  {uint32_t ea=c->r[2]+0xFFFFA0D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEC5C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800CEC60
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[1]); // 800CEC64
  goto L_800CECCC; // 800CEC68
L_800CEC6C:;
  {uint32_t ea=c->r[1]+0x000002E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEC6C
  {uint32_t ea=c->r[1]+0x000002E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEC70
  c->f[1]=-c->f[1]; // 800CEC74
  c->f[2]=-c->f[0]; // 800CEC78
  c->lr=0x800CEC80u; f_8005C22C(c); // 800CEC7C
  c->f[2]=-c->f[1]; // 800CEC80
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEC84
  fcmp(c,0,c->f[2],c->f[0]); // 800CEC88
  if (!crb(c,1)) { goto L_800CECA4; } // 800CEC8C
  {uint32_t ea=c->r[2]+0xFFFFA0D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEC90
  {uint32_t ea=c->r[2]+0xFFFFA0D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEC94
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800CEC98
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 800CEC9C
  goto L_800CECCC; // 800CECA0
L_800CECA4:;
  {uint32_t ea=c->r[2]+0xFFFFA0D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CECA4
  {uint32_t ea=c->r[2]+0xFFFFA0D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CECA8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800CECAC
  {uint32_t ea=c->r[2]+0xFFFFA0D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CECB0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800CECB4
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[1]); // 800CECB8
  goto L_800CECCC; // 800CECBC
L_800CECC0:;
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CECC0
  goto L_800CECCC; // 800CECC4
L_800CECC8:;
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CECC8
L_800CECCC:;
  {uint32_t ea=c->r[2]+0xFFFFA0DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CECCC
  fcmp(c,0,c->f[3],c->f[1]); // 800CECD0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800CECD4
  if (!crb(c,2)) { goto L_800CECF4; } // 800CECD8
  {uint32_t ea=c->r[2]+0xFFFFA0D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CECDC
  fcmp(c,0,c->f[3],c->f[0]); // 800CECE0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800CECE4
  if (!crb(c,2)) { goto L_800CECF4; } // 800CECE8
  c->f[3]=c->f[1]; // 800CECEC
  goto L_800CED14; // 800CECF0
L_800CECF4:;
  {uint32_t ea=c->r[2]+0xFFFFA0D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CECF4
  fcmp(c,0,c->f[3],c->f[0]); // 800CECF8
  if (!crb(c,1)) { goto L_800CED14; } // 800CECFC
  {uint32_t ea=c->r[2]+0xFFFFA0E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CED00
  fcmp(c,0,c->f[3],c->f[0]); // 800CED04
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800CED08
  if (!crb(c,2)) { goto L_800CED14; } // 800CED0C
  c->f[3]=c->f[0]; // 800CED10
L_800CED14:;
  {uint32_t ea=c->r[2]+0xFFFFA0DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CED14
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CED18
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[1]); // 800CED1C
  fcmp(c,0,c->f[3],c->f[0]); // 800CED20
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800CED24
  if (!crb(c,2)) { goto L_800CED34; } // 800CED28
  {uint32_t ea=c->r[2]+0xFFFFA0D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CED2C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 800CED30
L_800CED34:;
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CED34
  {uint32_t ea=c->r[2]+0xFFFFA0DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CED38
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CED3C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800CED40
  fcmp(c,0,c->f[1],c->f[0]); // 800CED44
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[1]);} // 800CED48
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800CED4C
  if (!crb(c,2)) { goto L_800CED60; } // 800CED50
  {uint32_t ea=c->r[2]+0xFFFFA0D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CED54
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CED58
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[0]);} // 800CED5C
L_800CED60:;
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800CED60
  fcmp(c,0,c->f[3],c->f[31]); // 800CED64
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800CED68
  if (!crb(c,2)) { goto L_800CEDA0; } // 800CED6C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[31]); // 800CED70
  {uint32_t ea=c->r[2]+0xFFFFA0ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CED74
  fcmp(c,0,c->f[1],c->f[0]); // 800CED78
  if (!crb(c,1)) { goto L_800CED88; } // 800CED7C
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[31]); // 800CED80
  goto L_800CEDD0; // 800CED84
L_800CED88:;
  {uint32_t ea=c->r[2]+0xFFFFA0E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CED88
  fcmp(c,0,c->f[1],c->f[0]); // 800CED8C
  if (!crb(c,0)) { goto L_800CED98; } // 800CED90
  goto L_800CEDD0; // 800CED94
L_800CED98:;
  c->f[31]=c->f[3]; // 800CED98
  goto L_800CEDD0; // 800CED9C
L_800CEDA0:;
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[31]); // 800CEDA0
  {uint32_t ea=c->r[2]+0xFFFFA0E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEDA4
  fcmp(c,0,c->f[1],c->f[0]); // 800CEDA8
  if (!crb(c,0)) { goto L_800CEDBC; } // 800CEDAC
  {uint32_t ea=c->r[2]+0xFFFFA0ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEDB0
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800CEDB4
  goto L_800CEDD0; // 800CEDB8
L_800CEDBC:;
  {uint32_t ea=c->r[2]+0xFFFFA0ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEDBC
  fcmp(c,0,c->f[1],c->f[0]); // 800CEDC0
  if (!crb(c,1)) { goto L_800CEDCC; } // 800CEDC4
  goto L_800CEDD0; // 800CEDC8
L_800CEDCC:;
  c->f[31]=c->f[3]; // 800CEDCC
L_800CEDD0:;
  {uint32_t ea=c->r[2]+0xFFFFA0DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEDD0
  {uint32_t ea=c->r[2]+0xFFFFA0D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEDD4
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 800CEDD8
  fcmp(c,0,c->f[31],c->f[0]); // 800CEDDC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800CEDE0
  if (!crb(c,2)) { goto L_800CEDEC; } // 800CEDE4
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800CEDE8
L_800CEDEC:;
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CEDEC
  {uint32_t ea=c->r[2]+0xFFFFA0DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEDF0
  {uint32_t ea=c->r[2]+0xFFFFA0D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEDF4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800CEDF8
  fcmp(c,0,c->f[1],c->f[0]); // 800CEDFC
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[1]);} // 800CEE00
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800CEE04
  if (!crb(c,2)) { goto L_800CEE14; } // 800CEE08
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800CEE0C
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[0]);} // 800CEE10
L_800CEE14:;
  c->r[3]=R32(c->r[29]+0x00000394u); // 800CEE14
  c->r[5]=c->r[1]+0x00000118u; // 800CEE18
  c->r[4]=R8(c->r[29]+0x00000079u); // 800CEE1C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CEE20
  c->lr=0x800CEE28u; f_8025EA54(c); // 800CEE24
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[31]);} // 800CEE28
  c->r[3]=c->r[1]+0x00000118u; // 800CEE2C
  c->lr=0x800CEE34u; f_8002C540(c); // 800CEE30
  c->r[4]=R32(c->r[1]+0x00000118u); // 800CEE34
  c->r[5]=c->r[1]+0x00000010u; // 800CEE38
  c->r[3]=R32(c->r[1]+0x0000011Cu); // 800CEE3C
  c->r[0]=R32(c->r[1]+0x00000120u); // 800CEE40
  W32(c->r[1]+0x00000010u,c->r[4]); // 800CEE44
  W32(c->r[1]+0x00000014u,c->r[3]); // 800CEE48
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CEE4C
  c->r[3]=R32(c->r[29]+0x00000394u); // 800CEE50
  c->r[4]=R8(c->r[29]+0x00000079u); // 800CEE54
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CEE58
  c->lr=0x800CEE60u; f_8025E9C0(c); // 800CEE5C
  {uint32_t ea=c->r[1]+0x000002F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEE60
  c->r[3]=c->r[29]+0x0000008Cu; // 800CEE64
  c->r[4]=c->r[1]+0x000002C8u; // 800CEE68
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[0]);} // 800CEE6C
  {uint32_t ea=c->r[1]+0x000002FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEE70
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[0]);} // 800CEE74
  c->lr=0x800CEE7Cu; f_800361A0(c); // 800CEE78
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEE7C
  c->r[3]=c->r[29]|c->r[29]; // 800CEE80
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[0]);} // 800CEE84
  c->lr=0x800CEE8Cu; f_801F56F4(c); // 800CEE88
  c->r[3]=c->r[29]|c->r[29]; // 800CEE8C
  c->lr=0x800CEE94u; f_800CF9E0(c); // 800CEE90
  {uint32_t ea=c->r[1]+0x000003E8u; psq_load(c,31,ea,0,0);} // 800CEE94
  c->r[11]=c->r[1]+0x000003E0u; // 800CEE98
  {uint32_t ea=c->r[1]+0x000003E0u; c->f[31]=RF64(ea);} // 800CEE9C
  c->lr=0x800CEEA4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CEEA0
  c->r[0]=R32(c->r[1]+0x000003F4u); // 800CEEA4
  c->lr=c->r[0]; // 800CEEA8
  c->r[1]=c->r[1]+0x000003F0u; // 800CEEAC
  return; // 800CEEB0
}

// fn_800CEEB4
void f_800CEEB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEEB4
  c->r[0]=c->lr; // 800CEEB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEEBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CEEC0
  c->r[31]=c->r[3]|c->r[3]; // 800CEEC4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CEEC8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CEECC
  c->lr=0x800CEED4u; f_802501B0(c); // 800CEED0
  c->r[3]=c->r[31]|c->r[31]; // 800CEED4
  c->r[4]=0u+0x00000000u; // 800CEED8
  c->lr=0x800CEEE0u; f_801F5244(c); // 800CEEDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEEE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CEEE4
  c->lr=c->r[0]; // 800CEEE8
  c->r[1]=c->r[1]+0x00000010u; // 800CEEEC
  return; // 800CEEF0
}

// fn_800CEEF4
void f_800CEEF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEEF4
  c->r[0]=c->lr; // 800CEEF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEEFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CEF00
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CEF04
  c->r[30]=c->r[3]|c->r[3]; // 800CEF08
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CEF0C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CEF10
  c->lr=0x800CEF18u; f_802501B0(c); // 800CEF14
  c->r[3]=c->r[30]|c->r[30]; // 800CEF18
  c->r[4]=0u+0x00000000u; // 800CEF1C
  c->lr=0x800CEF24u; f_801F5244(c); // 800CEF20
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CEF24
  c->r[3]=c->r[30]+0x0000002Cu; // 800CEF28
  c->r[4]=c->r[4]+0x0000005Cu; // 800CEF2C
  c->lr=0x800CEF34u; f_800361A0(c); // 800CEF30
  c->r[4]=R32(c->r[30]+0x00000394u); // 800CEF34
  c->r[3]=c->r[30]|c->r[30]; // 800CEF38
  c->lr=0x800CEF40u; f_801F5418(c); // 800CEF3C
  cmps(c,0,(int32_t)c->r[3],0); // 800CEF40
  if (!crb(c,0)) { goto L_800CEF7C; } // 800CEF44
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800CEF48
  c->r[3]=0u+0x00000001u; // 800CEF4C
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800CEF50
  c->r[3]=c->r[30]|c->r[30]; // 800CEF54
  c->r[0]=c->r[0]|0x00000880u; // 800CEF58
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEF5C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800CEF60
  c->r[4]=0u+0x00000064u; // 800CEF64
  c->r[5]=0u+0x00000000u; // 800CEF68
  c->r[6]=0u+0x00000000u; // 800CEF6C
  c->r[7]=0u+0x00000000u; // 800CEF70
  c->lr=0x800CEF78u; f_801F4D44(c); // 800CEF74
  goto L_800CEFB0; // 800CEF78
L_800CEF7C:;
  c->r[31]=0u+0x805D0000u; // 800CEF7C
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CEF80
  c->lr=0x800CEF88u; f_800447E4(c); // 800CEF84
  cmpu(c,0,c->r[3],0x00000001u); // 800CEF88
  if (!crb(c,2)) { goto L_800CEF9C; } // 800CEF8C
  c->r[0]=0u+0x00000000u; // 800CEF90
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800CEF94
  goto L_800CEFA8; // 800CEF98
L_800CEF9C:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800CEF9C
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800CEFA0
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800CEFA4
L_800CEFA8:;
  c->r[3]=c->r[30]|c->r[30]; // 800CEFA8
  c->lr=0x800CEFB0u; f_801F5B14(c); // 800CEFAC
L_800CEFB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEFB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CEFB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CEFB8
  c->lr=c->r[0]; // 800CEFBC
  c->r[1]=c->r[1]+0x00000010u; // 800CEFC0
  return; // 800CEFC4
}

// fn_800CEFC8
void f_800CEFC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEFC8
  c->r[0]=c->lr; // 800CEFCC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CEFD0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800CEFD4
  c->r[31]=c->r[3]|c->r[3]; // 800CEFD8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CEFDC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CEFE0
  c->lr=0x800CEFE8u; f_802501B0(c); // 800CEFE4
  c->r[3]=c->r[31]+0x00000038u; // 800CEFE8
  c->r[4]=c->r[31]+0x0000002Cu; // 800CEFEC
  c->lr=0x800CEFF4u; f_800361A0(c); // 800CEFF0
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEFF4
  c->r[3]=0u+0x80550000u; // 800CEFF8
  c->r[3]=c->r[3]+0x00003D60u; // 800CEFFC
  c->r[4]=c->r[31]+0x00000038u; // 800CF000
  c->f[2]=c->f[1]; // 800CF004
  c->r[5]=c->r[1]+0x00000008u; // 800CF008
  c->f[3]=c->f[1]; // 800CF00C
  c->r[6]=0u+0x00000000u; // 800CF010
  c->r[7]=0u+0x00000000u; // 800CF014
  c->lr=0x800CF01Cu; f_801D5488(c); // 800CF018
  c->r[5]=R32(c->r[31]+0x00000394u); // 800CF01C
  c->r[3]=c->r[31]+0x00000060u; // 800CF020
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF024
  c->r[4]=c->r[5]+0x00000068u; // 800CF028
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800CF02C
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF030
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800CF034
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF038
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800CF03C
  c->lr=0x800CF044u; f_800361A0(c); // 800CF040
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CF044
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CF048
  c->lr=0x800CF050u; f_802501B0(c); // 800CF04C
  {uint32_t ea=c->r[31]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF050
  c->r[0]=0u+0x00000001u; // 800CF054
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF058
  c->r[4]=c->r[31]+0x0000002Cu; // 800CF05C
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800CF060
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800CF064
  {uint32_t ea=c->r[2]+0xFFFFA0F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CF068
  {uint32_t ea=c->r[2]+0xFFFFA0F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF06C
  c->r[3]=c->r[3]|0x00002000u; // 800CF070
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800CF074
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CF078
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[2]);} // 800CF07C
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[1]);} // 800CF080
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800CF084
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800CF088
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CF08C
  c->r[3]=c->r[3]+0x0000005Cu; // 800CF090
  c->lr=0x800CF098u; f_800361A0(c); // 800CF094
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF098
  c->r[4]=0u+0x00000040u; // 800CF09C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CF0A0
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800CF0A4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CF0A8
  c->r[3]=c->r[3]+0x0000001Cu; // 800CF0AC
  c->lr=0x800CF0B4u; f_802518A4(c); // 800CF0B0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CF0B4
  c->r[4]=0u+0x00000006u; // 800CF0B8
  c->r[3]=c->r[3]+0x0000001Cu; // 800CF0BC
  c->lr=0x800CF0C4u; f_80251824(c); // 800CF0C0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CF0C4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CF0C8
  c->lr=0x800CF0D0u; f_802501B0(c); // 800CF0CC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CF0D0
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800CF0D4
  cmps(c,0,(int32_t)c->r[0],0); // 800CF0D8
  if (crb(c,2)) { goto L_800CF16C; } // 800CF0DC
  c->r[3]=c->r[3]+0x00000068u; // 800CF0E0
  c->r[4]=c->r[31]+0x00000060u; // 800CF0E4
  c->lr=0x800CF0ECu; f_800361A0(c); // 800CF0E8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CF0EC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CF0F0
  c->lr=0x800CF0F8u; f_8025037C(c); // 800CF0F4
  c->r[6]=R32(c->r[31]+0x00000394u); // 800CF0F8
  c->r[3]=c->r[1]+0x00000024u; // 800CF0FC
  c->r[4]=c->r[31]+0x00000060u; // 800CF100
  c->r[5]=c->r[1]+0x00000030u; // 800CF104
  c->r[6]=c->r[6]+0x000000B0u; // 800CF108
  c->r[7]=0u+0x00000000u; // 800CF10C
  c->lr=0x800CF114u; f_8002BE64(c); // 800CF110
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800CF114
  c->r[3]=0u+0x805D0000u; // 800CF118
  c->r[0]=R32(c->r[31]+0x00000030u); // 800CF11C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800CF120
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF124
  c->r[4]=c->r[31]|c->r[31]; // 800CF128
  W32(c->r[1]+0x00000018u,c->r[5]); // 800CF12C
  c->r[7]=c->r[1]+0x00000018u; // 800CF130
  c->r[6]=0u+0x00000021u; // 800CF134
  c->r[8]=0u+0x00000000u; // 800CF138
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CF13C
  c->r[0]=R32(c->r[31]+0x00000034u); // 800CF140
  W32(c->r[1]+0x00000020u,c->r[0]); // 800CF144
  c->r[3]=R32(c->r[31]+0x00000438u); // 800CF148
  c->r[5]=R32(c->r[31]+0x00000394u); // 800CF14C
  c->lr=0x800CF154u; f_801FA6A4(c); // 800CF150
  c->r[6]=0u+0x803A0000u; // 800CF154
  c->r[3]=R32(c->r[31]+0x00000438u); // 800CF158
  c->r[5]=c->r[31]+0x00000044u; // 800CF15C
  c->r[4]=0u+0x00000000u; // 800CF160
  c->r[6]=c->r[6]+0xFFFFDDA0u; // 800CF164
  c->lr=0x800CF16Cu; f_801FBEC0(c); // 800CF168
L_800CF16C:;
  c->r[3]=c->r[31]|c->r[31]; // 800CF16C
  c->r[4]=0u+0x00000000u; // 800CF170
  c->lr=0x800CF178u; f_801F7C00(c); // 800CF174
  c->r[7]=0u+0x803D0000u; // 800CF178
  {uint32_t ea=c->r[7]+0x00001968u; c->r[6]=R32(ea); c->r[7]=ea;} // 800CF17C
  c->r[3]=c->r[31]|c->r[31]; // 800CF180
  c->r[4]=c->r[1]+0x0000000Cu; // 800CF184
  c->r[5]=R32(c->r[7]+0x00000004u); // 800CF188
  c->r[0]=R32(c->r[7]+0x00000008u); // 800CF18C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800CF190
  W32(c->r[1]+0x00000010u,c->r[5]); // 800CF194
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF198
  c->lr=0x800CF1A0u; f_800CF1B4(c); // 800CF19C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CF1A0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800CF1A4
  c->lr=c->r[0]; // 800CF1A8
  c->r[1]=c->r[1]+0x00000050u; // 800CF1AC
  return; // 800CF1B0
}

// fn_800CF1B4
void f_800CF1B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF1B4
  c->r[0]=c->lr; // 800CF1B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF1BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF1C0
  c->r[31]=c->r[4]|c->r[4]; // 800CF1C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CF1C8
  c->r[30]=c->r[3]|c->r[3]; // 800CF1CC
  c->r[3]=c->r[31]|c->r[31]; // 800CF1D0
  c->lr=0x800CF1D8u; f_802B9FDC(c); // 800CF1D4
  cmps(c,0,(int32_t)c->r[3],0); // 800CF1D8
  if (crb(c,2)) { goto L_800CF1F8; } // 800CF1DC
  c->r[3]=R32(c->r[31]+0x00000000u); // 800CF1E0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800CF1E4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800CF1E8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CF1EC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CF1F0
  W32(c->r[30]+0x00000024u,c->r[0]); // 800CF1F4
L_800CF1F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF1F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF1FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CF200
  c->lr=c->r[0]; // 800CF204
  c->r[1]=c->r[1]+0x00000010u; // 800CF208
  return; // 800CF20C
}

// fn_800CF210
void f_800CF210(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF210
  c->r[0]=c->lr; // 800CF214
  c->r[4]=0u+0x00000000u; // 800CF218
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF21C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CF220
  c->r[31]=c->r[3]|c->r[3]; // 800CF224
  c->r[3]=R32(c->r[3]+0x00000438u); // 800CF228
  c->lr=0x800CF230u; f_801FAF00(c); // 800CF22C
  cmps(c,0,(int32_t)c->r[3],0); // 800CF230
  if (!crb(c,2)) { goto L_800CF2E8; } // 800CF234
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800CF238
  c->r[3]=c->r[31]|c->r[31]; // 800CF23C
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800CF240
  c->r[0]=c->r[0]|0x00000004u; // 800CF244
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CF248
  c->lr=0x800CF250u; f_800CF800(c); // 800CF24C
  cmps(c,0,(int32_t)c->r[3],0); // 800CF250
  if (crb(c,2)) { goto L_800CF268; } // 800CF254
  c->r[3]=c->r[31]|c->r[31]; // 800CF258
  c->r[4]=0u+0x00000026u; // 800CF25C
  c->lr=0x800CF264u; f_801F5AB4(c); // 800CF260
  goto L_800CF274; // 800CF264
L_800CF268:;
  c->r[3]=c->r[31]|c->r[31]; // 800CF268
  c->r[4]=0u+0x00000025u; // 800CF26C
  c->lr=0x800CF274u; f_801F5AB4(c); // 800CF270
L_800CF274:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CF274
  c->r[3]=c->r[31]+0x0000002Cu; // 800CF278
  c->r[4]=c->r[4]+0x0000005Cu; // 800CF27C
  c->lr=0x800CF284u; f_800361A0(c); // 800CF280
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CF284
  c->r[3]=c->r[31]+0x00000060u; // 800CF288
  c->r[4]=c->r[4]+0x00000068u; // 800CF28C
  c->lr=0x800CF294u; f_800361A0(c); // 800CF290
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800CF294
  c->r[3]=0u+0x805D0000u; // 800CF298
  c->r[0]=R32(c->r[31]+0x00000030u); // 800CF29C
  c->r[3]=c->r[3]+0x00006CF8u; // 800CF2A0
  c->r[4]=c->r[1]+0x00000008u; // 800CF2A4
  c->r[5]=0u+0x00040000u; // 800CF2A8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CF2AC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CF2B0
  c->r[0]=R32(c->r[31]+0x00000034u); // 800CF2B4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CF2B8
  c->lr=0x800CF2C0u; f_802236F8(c); // 800CF2BC
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800CF2C0
  c->r[3]=c->r[31]|c->r[31]; // 800CF2C4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CF2C8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CF2CC
  c->ctr=c->r[12]; // 800CF2D0
  if (true) { c->lr=0x800CF2D8u; dispatch(c,c->ctr); } // 800CF2D4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800CF2D8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800CF2DC
  c->lr=0x800CF2E4u; f_8025037C(c); // 800CF2E0
  goto L_800CF308; // 800CF2E4
L_800CF2E8:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CF2E8
  c->r[3]=c->r[31]+0x0000002Cu; // 800CF2EC
  c->r[4]=c->r[4]+0x0000005Cu; // 800CF2F0
  c->lr=0x800CF2F8u; f_800361A0(c); // 800CF2F4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CF2F8
  c->r[3]=c->r[31]+0x00000060u; // 800CF2FC
  c->r[4]=c->r[4]+0x00000068u; // 800CF300
  c->lr=0x800CF308u; f_800361A0(c); // 800CF304
L_800CF308:;
  c->r[3]=c->r[31]|c->r[31]; // 800CF308
  c->r[4]=0u+0x00000000u; // 800CF30C
  c->lr=0x800CF314u; f_801F7C00(c); // 800CF310
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF314
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CF318
  c->lr=c->r[0]; // 800CF31C
  c->r[1]=c->r[1]+0x00000020u; // 800CF320
  return; // 800CF324
}

// fn_800CF328
void f_800CF328(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF328
  c->r[0]=c->lr; // 800CF32C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF330
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF334
  c->r[31]=c->r[3]|c->r[3]; // 800CF338
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CF33C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CF340
  c->lr=0x800CF348u; f_802501B0(c); // 800CF344
  c->r[4]=R16(c->r[31]+0x000003BEu); // 800CF348
  c->r[0]=0u+0x00000001u; // 800CF34C
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800CF350
  c->r[3]=c->r[31]+0x0000002Cu; // 800CF354
  c->r[0]=rotl(c->r[4],0)&0xFFFFDFFFu; // 800CF358
  c->r[4]=c->r[31]+0x000003CCu; // 800CF35C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800CF360
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CF364
  c->lr=0x800CF36Cu; f_800361A0(c); // 800CF368
  c->r[3]=c->r[31]+0x00000060u; // 800CF36C
  c->r[4]=c->r[31]+0x000003D8u; // 800CF370
  c->lr=0x800CF378u; f_800361A0(c); // 800CF374
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CF378
  c->r[3]=c->r[31]|c->r[31]; // 800CF37C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CF380
  c->ctr=c->r[12]; // 800CF384
  if (true) { c->lr=0x800CF38Cu; dispatch(c,c->ctr); } // 800CF388
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF38C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF390
  c->lr=c->r[0]; // 800CF394
  c->r[1]=c->r[1]+0x00000010u; // 800CF398
  return; // 800CF39C
}

// fn_800CF3A0
void f_800CF3A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF3A0
  c->r[0]=c->lr; // 800CF3A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF3A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF3AC
  c->r[31]=c->r[3]|c->r[3]; // 800CF3B0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800CF3B4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800CF3B8
  c->lr=0x800CF3C0u; f_802501B0(c); // 800CF3BC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CF3C0
  c->r[6]=0u+0x00000000u; // 800CF3C4
  c->r[0]=0u+0x00000001u; // 800CF3C8
  c->r[3]=c->r[31]+0x0000002Cu; // 800CF3CC
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800CF3D0
  c->r[4]=c->r[31]+0x000003CCu; // 800CF3D4
  c->r[5]=R32(c->r[31]+0x00000394u); // 800CF3D8
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800CF3DC
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800CF3E0
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800CF3E4
  c->r[0]=rotl(c->r[5],0)&0xFFFFDFFFu; // 800CF3E8
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CF3EC
  c->lr=0x800CF3F4u; f_800361A0(c); // 800CF3F0
  c->r[3]=c->r[31]+0x00000060u; // 800CF3F4
  c->r[4]=c->r[31]+0x000003D8u; // 800CF3F8
  c->lr=0x800CF400u; f_800361A0(c); // 800CF3FC
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF400
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF404
  fcmp(c,0,c->f[1],c->f[0]); // 800CF408
  if (!crb(c,0)) { goto L_800CF448; } // 800CF40C
  c->r[3]=c->r[31]|c->r[31]; // 800CF410
  c->lr=0x800CF418u; f_800CF800(c); // 800CF414
  cmps(c,0,(int32_t)c->r[3],0); // 800CF418
  if (crb(c,2)) { goto L_800CF430; } // 800CF41C
  c->r[3]=c->r[31]|c->r[31]; // 800CF420
  c->r[4]=0u+0x00000026u; // 800CF424
  c->lr=0x800CF42Cu; f_801F5AB4(c); // 800CF428
  goto L_800CF43C; // 800CF42C
L_800CF430:;
  c->r[3]=c->r[31]|c->r[31]; // 800CF430
  c->r[4]=0u+0x00000025u; // 800CF434
  c->lr=0x800CF43Cu; f_801F5AB4(c); // 800CF438
L_800CF43C:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800CF43C
  c->r[0]=c->r[0]|0x00000080u; // 800CF440
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800CF444
L_800CF448:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800CF448
  c->r[3]=c->r[31]|c->r[31]; // 800CF44C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CF450
  c->ctr=c->r[12]; // 800CF454
  if (true) { c->lr=0x800CF45Cu; dispatch(c,c->ctr); } // 800CF458
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF45C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF460
  c->lr=c->r[0]; // 800CF464
  c->r[1]=c->r[1]+0x00000010u; // 800CF468
  return; // 800CF46C
}

// fn_800CF470
void f_800CF470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF470
  c->r[0]=c->lr; // 800CF474
  c->r[5]=0u+0x00000000u; // 800CF478
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF47C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF480
  c->r[31]=c->r[3]|c->r[3]; // 800CF484
  c->r[3]=0u+0x000004B0u; // 800CF488
  c->r[4]=R32(c->r[31]+0x00000394u); // 800CF48C
  c->r[4]=c->r[4]+0x0000010Cu; // 800CF490
  c->lr=0x800CF498u; f_8024EE50(c); // 800CF494
  cmps(c,0,(int32_t)c->r[3],0); // 800CF498
  if (crb(c,2)) { goto L_800CF4A8; } // 800CF49C
  c->r[3]=0u+0x00000000u; // 800CF4A0
  goto L_800CF4B4; // 800CF4A4
L_800CF4A8:;
  c->r[3]=c->r[31]+0x00000210u; // 800CF4A8
  c->r[4]=0u+0x000000E1u; // 800CF4AC
  c->lr=0x800CF4B4u; f_80221630(c); // 800CF4B0
L_800CF4B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF4B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF4B8
  c->lr=c->r[0]; // 800CF4BC
  c->r[1]=c->r[1]+0x00000010u; // 800CF4C0
  return; // 800CF4C4
}

