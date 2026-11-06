#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800ACBBC
void f_800ACBBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ACBBC
  c->r[0]=c->lr; // 800ACBC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ACBC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ACBC8
  c->r[31]=c->r[3]|c->r[3]; // 800ACBCC
  c->lr=0x800ACBD4u; f_800ACC24(c); // 800ACBD0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800ACBD4
  c->r[3]=c->r[31]|c->r[31]; // 800ACBD8
  c->r[12]=R32(c->r[12]+0x00000068u); // 800ACBDC
  c->ctr=c->r[12]; // 800ACBE0
  if (true) { c->lr=0x800ACBE8u; dispatch(c,c->ctr); } // 800ACBE4
  c->r[3]=c->r[31]|c->r[31]; // 800ACBE8
  c->lr=0x800ACBF0u; f_801F4C0C(c); // 800ACBEC
  c->r[3]=c->r[31]|c->r[31]; // 800ACBF0
  c->lr=0x800ACBF8u; f_800ACEE4(c); // 800ACBF4
  c->r[3]=c->r[31]+0x00000210u; // 800ACBF8
  c->lr=0x800ACC00u; f_80221698(c); // 800ACBFC
  c->r[3]=c->r[31]|c->r[31]; // 800ACC00
  c->lr=0x800ACC08u; f_801F56F4(c); // 800ACC04
  c->r[3]=c->r[31]|c->r[31]; // 800ACC08
  c->lr=0x800ACC10u; f_800AD6FC(c); // 800ACC0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ACC10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ACC14
  c->lr=c->r[0]; // 800ACC18
  c->r[1]=c->r[1]+0x00000010u; // 800ACC1C
  return; // 800ACC20
}

// fn_800ACC24
void f_800ACC24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ACC24
  c->r[0]=c->lr; // 800ACC28
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ACC2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ACC30
  W32(c->r[1]+0x00000018u,c->r[30]); // 800ACC34
  c->r[30]=c->r[3]|c->r[3]; // 800ACC38
  c->lr=0x800ACC40u; f_8004D8EC(c); // 800ACC3C
  cmpu(c,0,c->r[3],0x00000001u); // 800ACC40
  if (crb(c,2)) { goto L_800ACDB4; } // 800ACC44
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800ACC48
  cmps(c,0,(int32_t)c->r[0],102); // 800ACC4C
  if (crb(c,2)) { goto L_800ACC98; } // 800ACC50
  c->r[3]=0u+0x805D0000u; // 800ACC54
  {uint32_t ea=c->r[2]+0xFFFF98B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACC58
  {uint32_t ea=c->r[2]+0xFFFF98B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ACC5C
  c->r[4]=c->r[30]|c->r[30]; // 800ACC60
  c->r[3]=c->r[3]+0x00003F6Cu; // 800ACC64
  c->r[5]=0u+0x00000000u; // 800ACC68
  c->lr=0x800ACC70u; f_801FEC8C(c); // 800ACC6C
  cmps(c,0,(int32_t)c->r[3],0); // 800ACC70
  if (crb(c,2)) { goto L_800ACC98; } // 800ACC74
  {uint32_t ea=c->r[2]+0xFFFF98B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACC78
  c->r[3]=c->r[30]|c->r[30]; // 800ACC7C
  c->r[4]=0u+0x00000066u; // 800ACC80
  c->r[5]=0u+0x00000000u; // 800ACC84
  c->r[6]=0u+0x00000000u; // 800ACC88
  c->r[7]=0u+0x00000000u; // 800ACC8C
  c->lr=0x800ACC94u; f_801F4D44(c); // 800ACC90
  goto L_800ACDB4; // 800ACC94
L_800ACC98:;
  c->r[31]=0u+0x805D0000u; // 800ACC98
  c->r[3]=c->r[30]+0x0000002Cu; // 800ACC9C
  c->r[31]=c->r[31]+0x00003F6Cu; // 800ACCA0
  c->r[5]=c->r[1]+0x00000008u; // 800ACCA4
  c->r[4]=c->r[31]+0x0000002Cu; // 800ACCA8
  c->lr=0x800ACCB0u; f_80296A70(c); // 800ACCAC
  {uint32_t ea=c->r[2]+0xFFFF98B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACCB0
  c->r[3]=c->r[1]+0x00000008u; // 800ACCB4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800ACCB8
  c->lr=0x800ACCC0u; f_80296B0C(c); // 800ACCBC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800ACCC0
  cmps(c,0,(int32_t)c->r[0],4); // 800ACCC4
  if (crb(c,2)) { goto L_800ACCF8; } // 800ACCC8
  {uint32_t ea=c->r[2]+0xFFFF98BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACCCC
  fcmp(c,0,c->f[1],c->f[0]); // 800ACCD0
  if (!crb(c,1)) { goto L_800ACD1C; } // 800ACCD4
  {uint32_t ea=c->r[2]+0xFFFF98C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACCD8
  c->r[3]=c->r[30]|c->r[30]; // 800ACCDC
  c->r[6]=c->r[31]+0x0000002Cu; // 800ACCE0
  c->r[4]=0u+0x00000004u; // 800ACCE4
  c->r[5]=0u+0x00000001u; // 800ACCE8
  c->r[7]=0u+0x00000000u; // 800ACCEC
  c->lr=0x800ACCF4u; f_801F4D44(c); // 800ACCF0
  goto L_800ACDB4; // 800ACCF4
L_800ACCF8:;
  {uint32_t ea=c->r[2]+0xFFFF98C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACCF8
  fcmp(c,0,c->f[1],c->f[0]); // 800ACCFC
  if (!crb(c,0)) { goto L_800ACD1C; } // 800ACD00
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800ACD04
  c->r[3]=c->r[30]|c->r[30]; // 800ACD08
  c->r[12]=R32(c->r[12]+0x00000050u); // 800ACD0C
  c->ctr=c->r[12]; // 800ACD10
  if (true) { c->lr=0x800ACD18u; dispatch(c,c->ctr); } // 800ACD14
  goto L_800ACDB4; // 800ACD18
L_800ACD1C:;
  cmps(c,0,(int32_t)c->r[0],102); // 800ACD1C
  if (crb(c,2)) { goto L_800ACD70; } // 800ACD20
  cmps(c,0,(int32_t)c->r[0],100); // 800ACD24
  if (crb(c,2)) { goto L_800ACD70; } // 800ACD28
  c->r[31]=0u+0x80550000u; // 800ACD2C
  c->r[3]=c->r[31]+0xFFFFCE54u; // 800ACD30
  c->lr=0x800ACD38u; f_800ACDD4(c); // 800ACD34
  cmpu(c,0,c->r[3],0x00000001u); // 800ACD38
  if (!crb(c,2)) { goto L_800ACD70; } // 800ACD3C
  c->r[3]=c->r[31]+0xFFFFCE54u; // 800ACD40
  c->lr=0x800ACD48u; f_800ACDCC(c); // 800ACD44
  cmpu(c,0,c->r[3],c->r[30]); // 800ACD48
  if (!crb(c,2)) { goto L_800ACD70; } // 800ACD4C
  {uint32_t ea=c->r[2]+0xFFFF98B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACD50
  c->r[3]=c->r[30]|c->r[30]; // 800ACD54
  c->r[4]=0u+0x00000064u; // 800ACD58
  c->r[5]=0u+0x00000000u; // 800ACD5C
  c->r[6]=0u+0x00000000u; // 800ACD60
  c->r[7]=0u+0x00000000u; // 800ACD64
  c->lr=0x800ACD6Cu; f_801F4D44(c); // 800ACD68
  goto L_800ACDB4; // 800ACD6C
L_800ACD70:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800ACD70
  cmps(c,0,(int32_t)c->r[0],100); // 800ACD74
  if (!crb(c,2)) { goto L_800ACDB4; } // 800ACD78
  c->r[31]=0u+0x80550000u; // 800ACD7C
  c->r[3]=c->r[31]+0xFFFFCE54u; // 800ACD80
  c->lr=0x800ACD88u; f_800ACDD4(c); // 800ACD84
  cmps(c,0,(int32_t)c->r[3],0); // 800ACD88
  if (crb(c,2)) { goto L_800ACDA0; } // 800ACD8C
  c->r[3]=c->r[31]+0xFFFFCE54u; // 800ACD90
  c->lr=0x800ACD98u; f_800ACDCC(c); // 800ACD94
  cmpu(c,0,c->r[3],c->r[30]); // 800ACD98
  if (crb(c,2)) { goto L_800ACDB4; } // 800ACD9C
L_800ACDA0:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800ACDA0
  c->r[3]=c->r[30]|c->r[30]; // 800ACDA4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800ACDA8
  c->ctr=c->r[12]; // 800ACDAC
  if (true) { c->lr=0x800ACDB4u; dispatch(c,c->ctr); } // 800ACDB0
L_800ACDB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ACDB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ACDB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800ACDBC
  c->lr=c->r[0]; // 800ACDC0
  c->r[1]=c->r[1]+0x00000020u; // 800ACDC4
  return; // 800ACDC8
}

// fn_800ACDCC
void f_800ACDCC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000010D0u); // 800ACDCC
  return; // 800ACDD0
}

// fn_800ACDD4
void f_800ACDD4(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000010B8u); // 800ACDD4
  return; // 800ACDD8
}

// fn_800ACDDC
void f_800ACDDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ACDDC
  c->r[0]=c->lr; // 800ACDE0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800ACDE4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800ACDE8
  c->r[31]=c->r[3]|c->r[3]; // 800ACDEC
  c->r[0]=R32(c->r[3]+0x000003C0u); // 800ACDF0
  cmps(c,0,(int32_t)c->r[0],101); // 800ACDF4
  if (crb(c,2)) { goto L_800ACE6C; } // 800ACDF8
  if (!crb(c,0)) { goto L_800ACE0C; } // 800ACDFC
  cmps(c,0,(int32_t)c->r[0],100); // 800ACE00
  if (!crb(c,0)) { goto L_800ACE18; } // 800ACE04
  goto L_800ACE6C; // 800ACE08
L_800ACE0C:;
  cmps(c,0,(int32_t)c->r[0],103); // 800ACE0C
  if (!crb(c,0)) { goto L_800ACE6C; } // 800ACE10
  goto L_800ACE44; // 800ACE14
L_800ACE18:;
  W16(c->r[3]+0x000003BCu,c->r[0]); // 800ACE18
  c->r[7]=0u+0x803D0000u; // 800ACE1C
  c->r[4]=c->r[1]+0x00000014u; // 800ACE20
  {uint32_t ea=c->r[7]+0xFFFFE680u; c->r[6]=R32(ea); c->r[7]=ea;} // 800ACE24
  c->r[5]=R32(c->r[7]+0x00000004u); // 800ACE28
  c->r[0]=R32(c->r[7]+0x00000008u); // 800ACE2C
  W32(c->r[1]+0x00000014u,c->r[6]); // 800ACE30
  W32(c->r[1]+0x00000018u,c->r[5]); // 800ACE34
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800ACE38
  c->lr=0x800ACE40u; f_800ACE88(c); // 800ACE3C
  goto L_800ACE6C; // 800ACE40
L_800ACE44:;
  W16(c->r[3]+0x000003BCu,c->r[0]); // 800ACE44
  c->r[7]=0u+0x803D0000u; // 800ACE48
  c->r[4]=c->r[1]+0x00000008u; // 800ACE4C
  {uint32_t ea=c->r[7]+0xFFFFE68Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800ACE50
  c->r[5]=R32(c->r[7]+0x00000004u); // 800ACE54
  c->r[0]=R32(c->r[7]+0x00000008u); // 800ACE58
  W32(c->r[1]+0x00000008u,c->r[6]); // 800ACE5C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800ACE60
  W32(c->r[1]+0x00000010u,c->r[0]); // 800ACE64
  c->lr=0x800ACE6Cu; f_800ACE88(c); // 800ACE68
L_800ACE6C:;
  c->r[3]=c->r[31]|c->r[31]; // 800ACE6C
  c->lr=0x800ACE74u; f_801F4F28(c); // 800ACE70
  c->r[0]=R32(c->r[1]+0x00000034u); // 800ACE74
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800ACE78
  c->lr=c->r[0]; // 800ACE7C
  c->r[1]=c->r[1]+0x00000030u; // 800ACE80
  return; // 800ACE84
}

// fn_800ACE88
void f_800ACE88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ACE88
  c->r[0]=c->lr; // 800ACE8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ACE90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ACE94
  c->r[31]=c->r[4]|c->r[4]; // 800ACE98
  W32(c->r[1]+0x00000008u,c->r[30]); // 800ACE9C
  c->r[30]=c->r[3]|c->r[3]; // 800ACEA0
  c->r[3]=c->r[31]|c->r[31]; // 800ACEA4
  c->lr=0x800ACEACu; f_802B9FDC(c); // 800ACEA8
  cmps(c,0,(int32_t)c->r[3],0); // 800ACEAC
  if (crb(c,2)) { goto L_800ACECC; } // 800ACEB0
  c->r[3]=R32(c->r[31]+0x00000000u); // 800ACEB4
  c->r[0]=R32(c->r[31]+0x00000004u); // 800ACEB8
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800ACEBC
  W32(c->r[30]+0x00000020u,c->r[0]); // 800ACEC0
  c->r[0]=R32(c->r[31]+0x00000008u); // 800ACEC4
  W32(c->r[30]+0x00000024u,c->r[0]); // 800ACEC8
L_800ACECC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ACECC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ACED0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ACED4
  c->lr=c->r[0]; // 800ACED8
  c->r[1]=c->r[1]+0x00000010u; // 800ACEDC
  return; // 800ACEE0
}

// fn_800ACEE4
void f_800ACEE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ACEE4
  c->r[0]=c->lr; // 800ACEE8
  c->r[4]=0u+0x00000000u; // 800ACEEC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800ACEF0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800ACEF4
  c->r[31]=c->r[3]|c->r[3]; // 800ACEF8
  W32(c->r[1]+0x00000038u,c->r[30]); // 800ACEFC
  W32(c->r[1]+0x00000034u,c->r[29]); // 800ACF00
  c->r[29]=0u+0x80620000u; // 800ACF04
  c->r[29]=c->r[29]+0x00007688u; // 800ACF08
  W32(c->r[1]+0x00000030u,c->r[28]); // 800ACF0C
  c->r[3]=R32(c->r[29]+0x00000014u); // 800ACF10
  c->lr=0x800ACF18u; f_8003560C(c); // 800ACF14
  cmps(c,0,(int32_t)c->r[3],0); // 800ACF18
  if (crb(c,2)) { goto L_800AD014; } // 800ACF1C
  c->r[3]=R32(c->r[29]+0x00000014u); // 800ACF20
  c->r[4]=0u+0x00000000u; // 800ACF24
  c->lr=0x800ACF2Cu; f_8003560C(c); // 800ACF28
  c->r[28]=c->r[3]|c->r[3]; // 800ACF2C
  c->r[3]=R32(c->r[29]+0x00000014u); // 800ACF30
  c->r[4]=0u+0x00000001u; // 800ACF34
  c->lr=0x800ACF3Cu; f_8003560C(c); // 800ACF38
  c->r[30]=c->r[3]|c->r[3]; // 800ACF3C
  c->r[3]=c->r[1]+0x00000014u; // 800ACF40
  c->r[4]=c->r[31]+0x0000002Cu; // 800ACF44
  c->lr=0x800ACF4Cu; f_800361A0(c); // 800ACF48
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACF4C
  c->r[3]=0u+0x80550000u; // 800ACF50
  {uint32_t ea=c->r[2]+0xFFFF98B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACF54
  c->r[3]=c->r[3]+0x00003D60u; // 800ACF58
  c->r[3]=c->r[3]+0x00000010u; // 800ACF5C
  c->r[4]=c->r[1]+0x00000014u; // 800ACF60
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800ACF64
  c->r[5]=c->r[1]+0x00000020u; // 800ACF68
  c->r[6]=c->r[1]+0x00000024u; // 800ACF6C
  c->r[7]=0u+0x00000000u; // 800ACF70
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800ACF74
  c->lr=0x800ACF7Cu; f_801D4A0C(c); // 800ACF78
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800ACF7C
  c->r[31]=0u+0x803A0000u; // 800ACF80
  {uint32_t ea=c->r[2]+0xFFFF98C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ACF84
  c->r[31]=c->r[31]+0xFFFFC8E8u; // 800ACF88
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACF8C
  c->r[3]=c->r[28]|c->r[28]; // 800ACF90
  {uint32_t ea=c->r[2]+0xFFFF98CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACF94
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800ACF98
  c->r[0]=R32(c->r[1]+0x00000028u); // 800ACF9C
  c->r[4]=c->r[31]+0x00000009u; // 800ACFA0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800ACFA4
  c->r[5]=c->r[1]+0x00000008u; // 800ACFA8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 800ACFAC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800ACFB0
  c->r[7]=R32(c->r[1]+0x00000020u); // 800ACFB4
  c->r[6]=R32(c->r[1]+0x00000024u); // 800ACFB8
  W32(c->r[1]+0x00000008u,c->r[7]); // 800ACFBC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800ACFC0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800ACFC4
  c->lr=0x800ACFCCu; f_801E2ACC(c); // 800ACFC8
  c->r[3]=c->r[28]|c->r[28]; // 800ACFCC
  c->r[4]=c->r[31]+0x00000009u; // 800ACFD0
  c->r[5]=rotl(c->r[30],0)&0x000000FFu; // 800ACFD4
  c->lr=0x800ACFDCu; f_801E3F8C(c); // 800ACFD8
  c->r[3]=R32(c->r[29]+0x00000014u); // 800ACFDC
  c->r[4]=0u+0x00000009u; // 800ACFE0
  c->lr=0x800ACFE8u; f_800AD034(c); // 800ACFE4
  cmps(c,0,(int32_t)c->r[3],0); // 800ACFE8
  if (crb(c,2)) { goto L_800AD004; } // 800ACFEC
  c->r[3]=c->r[28]|c->r[28]; // 800ACFF0
  c->r[4]=c->r[31]+0x00000017u; // 800ACFF4
  c->r[5]=0u+0x00000000u; // 800ACFF8
  c->lr=0x800AD000u; f_801E3A84(c); // 800ACFFC
  goto L_800AD014; // 800AD000
L_800AD004:;
  c->r[3]=c->r[28]|c->r[28]; // 800AD004
  c->r[4]=c->r[31]+0x00000024u; // 800AD008
  c->r[5]=0u+0x00000000u; // 800AD00C
  c->lr=0x800AD014u; f_801E3A84(c); // 800AD010
L_800AD014:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800AD014
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800AD018
  c->r[30]=R32(c->r[1]+0x00000038u); // 800AD01C
  c->r[29]=R32(c->r[1]+0x00000034u); // 800AD020
  c->r[28]=R32(c->r[1]+0x00000030u); // 800AD024
  c->lr=c->r[0]; // 800AD028
  c->r[1]=c->r[1]+0x00000040u; // 800AD02C
  return; // 800AD030
}

// fn_800AD034
void f_800AD034(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD034
  c->r[0]=c->lr; // 800AD038
  cmpu(c,0,c->r[4],0x00000012u); // 800AD03C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD040
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD044
  c->r[31]=c->r[4]|c->r[4]; // 800AD048
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AD04C
  c->r[30]=c->r[3]|c->r[3]; // 800AD050
  if (crb(c,0)) { goto L_800AD074; } // 800AD054
  c->r[3]=0u+0x803D0000u; // 800AD058
  c->r[5]=0u+0x803D0000u; // 800AD05C
  c->r[3]=c->r[3]+0xFFFFE780u; // 800AD060
  c->r[4]=0u+0x000001D7u; // 800AD064
  c->r[5]=c->r[5]+0xFFFFE758u; // 800AD068
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD06C
  c->lr=0x800AD074u; f_803732A8(c); // 800AD070
L_800AD074:;
  c->r[0]=rotl(c->r[31],29)&0x1FFFFFFCu; // 800AD074
  c->r[4]=rotl(c->r[31],0)&0x0000001Fu; // 800AD078
  c->r[3]=c->r[30]+c->r[0]; // 800AD07C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD080
  c->r[5]=0u+0x00000001u; // 800AD084
  c->r[0]=R32(c->r[3]+0x00000030u); // 800AD088
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 800AD08C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AD090
  c->r[3]=c->r[3]&c->r[0]; // 800AD094
  c->r[0]=0u-c->r[3]; // 800AD098
  c->r[0]=c->r[0]|c->r[3]; // 800AD09C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800AD0A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD0A4
  c->lr=c->r[0]; // 800AD0A8
  c->r[1]=c->r[1]+0x00000010u; // 800AD0AC
  return; // 800AD0B0
}

// fn_800AD0B4
void f_800AD0B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD0B4
  c->r[0]=c->lr; // 800AD0B8
  {uint32_t ea=c->r[2]+0xFFFF98B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD0BC
  c->r[4]=0u+0x00000000u; // 800AD0C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AD0C4
  c->r[5]=0u+0x00000000u; // 800AD0C8
  {uint32_t ea=c->r[2]+0xFFFF98B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD0CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AD0D0
  c->r[31]=c->r[3]|c->r[3]; // 800AD0D4
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800AD0D8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AD0DC
  c->ctr=c->r[12]; // 800AD0E0
  if (true) { c->lr=0x800AD0E8u; dispatch(c,c->ctr); } // 800AD0E4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AD0E8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AD0EC
  c->lr=0x800AD0F4u; f_802501B0(c); // 800AD0F0
  c->r[3]=c->r[31]|c->r[31]; // 800AD0F4
  c->r[4]=0u+0x00000000u; // 800AD0F8
  c->lr=0x800AD100u; f_801F5244(c); // 800AD0FC
  c->r[7]=0u+0x805D0000u; // 800AD100
  c->r[3]=c->r[31]|c->r[31]; // 800AD104
  c->r[7]=c->r[7]+0x00003F6Cu; // 800AD108
  c->r[4]=c->r[1]+0x00000008u; // 800AD10C
  c->r[6]=R32(c->r[7]+0x0000002Cu); // 800AD110
  c->r[5]=R32(c->r[7]+0x00000030u); // 800AD114
  c->r[0]=R32(c->r[7]+0x00000034u); // 800AD118
  W32(c->r[1]+0x00000008u,c->r[6]); // 800AD11C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800AD120
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AD124
  c->lr=0x800AD12Cu; f_801F6860(c); // 800AD128
  {uint32_t ea=c->r[2]+0xFFFF98D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD12C
  c->r[3]=c->r[31]|c->r[31]; // 800AD130
  c->lr=0x800AD138u; f_801F6A20(c); // 800AD134
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AD138
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AD13C
  c->lr=c->r[0]; // 800AD140
  c->r[1]=c->r[1]+0x00000020u; // 800AD144
  return; // 800AD148
}

// fn_800AD14C
void f_800AD14C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD14C
  c->r[0]=c->lr; // 800AD150
  {uint32_t ea=c->r[2]+0xFFFF98B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD154
  c->r[4]=0u+0x00000002u; // 800AD158
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD15C
  c->r[5]=0u+0x00000000u; // 800AD160
  {uint32_t ea=c->r[2]+0xFFFF98B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD164
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD168
  c->r[31]=c->r[3]|c->r[3]; // 800AD16C
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800AD170
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AD174
  c->ctr=c->r[12]; // 800AD178
  if (true) { c->lr=0x800AD180u; dispatch(c,c->ctr); } // 800AD17C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AD180
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AD184
  c->lr=0x800AD18Cu; f_802501B0(c); // 800AD188
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD18C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD190
  c->lr=c->r[0]; // 800AD194
  c->r[1]=c->r[1]+0x00000010u; // 800AD198
  return; // 800AD19C
}

// fn_800AD1A0
void f_800AD1A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD1A0
  c->r[0]=c->lr; // 800AD1A4
  c->r[4]=0u+0x00000004u; // 800AD1A8
  c->r[5]=0u+0x00000016u; // 800AD1AC
  W32(c->r[1]+0x00000074u,c->r[0]); // 800AD1B0
  c->r[6]=0u+0x00000001u; // 800AD1B4
  c->r[7]=0u+0x00000001u; // 800AD1B8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800AD1BC
  c->r[31]=c->r[3]|c->r[3]; // 800AD1C0
  c->lr=0x800AD1C8u; f_8017900C(c); // 800AD1C4
  c->r[3]=c->r[13]+0xFFFFAB38u; // 800AD1C8
  c->lr=0x800AD1D0u; f_80211724(c); // 800AD1CC
  c->r[4]=0u+0xAAAB0000u; // 800AD1D0
  c->r[0]=c->r[4]+0xFFFFAAABu; // 800AD1D4
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 800AD1D8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800AD1DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 800AD1E0
  c->r[0]=c->r[3]-c->r[0]; // 800AD1E4
  cmps(c,0,(int32_t)c->r[0],1); // 800AD1E8
  if (crb(c,2)) { goto L_800AD228; } // 800AD1EC
  if (!crb(c,0)) { goto L_800AD200; } // 800AD1F0
  cmps(c,0,(int32_t)c->r[0],0); // 800AD1F4
  if (!crb(c,0)) { goto L_800AD20C; } // 800AD1F8
  goto L_800AD25C; // 800AD1FC
L_800AD200:;
  cmps(c,0,(int32_t)c->r[0],3); // 800AD200
  if (!crb(c,0)) { goto L_800AD25C; } // 800AD204
  goto L_800AD244; // 800AD208
L_800AD20C:;
  c->r[3]=c->r[31]|c->r[31]; // 800AD20C
  c->r[4]=0u+0x00000004u; // 800AD210
  c->r[5]=0u+0x00000017u; // 800AD214
  c->r[6]=0u+0x00000001u; // 800AD218
  c->r[7]=0u+0x00000001u; // 800AD21C
  c->lr=0x800AD224u; f_8017900C(c); // 800AD220
  goto L_800AD25C; // 800AD224
L_800AD228:;
  c->r[3]=c->r[31]|c->r[31]; // 800AD228
  c->r[4]=0u+0x00000004u; // 800AD22C
  c->r[5]=0u+0x00000018u; // 800AD230
  c->r[6]=0u+0x00000001u; // 800AD234
  c->r[7]=0u+0x00000001u; // 800AD238
  c->lr=0x800AD240u; f_8017900C(c); // 800AD23C
  goto L_800AD25C; // 800AD240
L_800AD244:;
  c->r[3]=c->r[31]|c->r[31]; // 800AD244
  c->r[4]=0u+0x00000004u; // 800AD248
  c->r[5]=0u+0x00000019u; // 800AD24C
  c->r[6]=0u+0x00000001u; // 800AD250
  c->r[7]=0u+0x00000001u; // 800AD254
  c->lr=0x800AD25Cu; f_8017900C(c); // 800AD258
L_800AD25C:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AD25C
  c->r[3]=c->r[31]|c->r[31]; // 800AD260
  {uint32_t ea=c->r[2]+0xFFFF98B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD264
  c->r[4]=0u+0x00000001u; // 800AD268
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AD26C
  c->r[5]=0u+0x00000000u; // 800AD270
  c->f[2]=c->f[1]; // 800AD274
  c->ctr=c->r[12]; // 800AD278
  if (true) { c->lr=0x800AD280u; dispatch(c,c->ctr); } // 800AD27C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AD280
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AD284
  c->lr=0x800AD28Cu; f_802501B0(c); // 800AD288
  c->r[4]=0u+0x805D0000u; // 800AD28C
  c->r[3]=c->r[31]+0x0000002Cu; // 800AD290
  c->r[4]=c->r[4]+0x00003F6Cu; // 800AD294
  c->r[5]=c->r[1]+0x00000020u; // 800AD298
  c->r[4]=c->r[4]+0x0000002Cu; // 800AD29C
  c->lr=0x800AD2A4u; f_80296A70(c); // 800AD2A0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD2A4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD2A8
  {uint32_t ea=c->r[2]+0xFFFF98B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AD2AC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 800AD2B0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 800AD2B4
  fcmp(c,0,c->f[0],c->f[3]); // 800AD2B8
  if (!crb(c,1)) { goto L_800AD33C; } // 800AD2BC
  c->lr=0x800AD2C4u; f_8005C22C(c); // 800AD2C0
  {uint32_t ea=c->r[2]+0xFFFF98B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD2C4
  fcmp(c,0,c->f[1],c->f[0]); // 800AD2C8
  if (!crb(c,1)) { goto L_800AD2E8; } // 800AD2CC
  {uint32_t ea=c->r[2]+0xFFFF98D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD2D0
  {uint32_t ea=c->r[2]+0xFFFF98D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD2D4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800AD2D8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800AD2DC
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800AD2E0
  goto L_800AD304; // 800AD2E4
L_800AD2E8:;
  {uint32_t ea=c->r[2]+0xFFFF98D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD2E8
  {uint32_t ea=c->r[2]+0xFFFF98D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD2EC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800AD2F0
  {uint32_t ea=c->r[2]+0xFFFF98DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD2F4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800AD2F8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800AD2FC
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800AD300
L_800AD304:;
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD304
  {uint32_t ea=c->r[2]+0xFFFF98D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD308
  {uint32_t ea=c->r[2]+0xFFFF98DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD30C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800AD310
  fcmp(c,0,c->f[1],c->f[0]); // 800AD314
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[1]);} // 800AD318
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800AD31C
  if (!crb(c,2)) { goto L_800AD32C; } // 800AD320
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800AD324
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800AD328
L_800AD32C:;
  c->r[3]=c->r[1]+0x00000020u; // 800AD32C
  c->r[4]=c->r[3]|c->r[3]; // 800AD330
  c->lr=0x800AD338u; f_80296AB0(c); // 800AD334
  goto L_800AD370; // 800AD338
L_800AD33C:;
  {uint32_t ea=c->r[2]+0xFFFF98C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD33C
  c->r[3]=c->r[1]+0x00000030u; // 800AD340
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 800AD344
  c->r[4]=0u+0x00000059u; // 800AD348
  {uint32_t ea=c->r[2]+0xFFFF98E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD34C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800AD350
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD354
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800AD358
  c->lr=0x800AD360u; f_80295FBC(c); // 800AD35C
  c->r[4]=c->r[1]+0x00000020u; // 800AD360
  c->r[3]=c->r[1]+0x00000030u; // 800AD364
  c->r[5]=c->r[4]|c->r[4]; // 800AD368
  c->lr=0x800AD370u; f_80296750(c); // 800AD36C
L_800AD370:;
  {uint32_t ea=c->r[2]+0xFFFF98E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD370
  c->r[3]=c->r[1]+0x00000020u; // 800AD374
  c->r[4]=c->r[1]+0x00000014u; // 800AD378
  c->lr=0x800AD380u; f_80296A94(c); // 800AD37C
  c->r[3]=c->r[31]+0x00000044u; // 800AD380
  c->r[4]=c->r[1]+0x00000014u; // 800AD384
  c->lr=0x800AD38Cu; f_800361A0(c); // 800AD388
  {uint32_t ea=c->r[2]+0xFFFF98E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD38C
  c->r[3]=c->r[1]+0x00000020u; // 800AD390
  c->r[4]=c->r[1]+0x00000014u; // 800AD394
  c->lr=0x800AD39Cu; f_80296A94(c); // 800AD398
  c->r[3]=c->r[31]+0x00000050u; // 800AD39C
  c->r[4]=c->r[1]+0x00000014u; // 800AD3A0
  c->lr=0x800AD3A8u; f_800361A0(c); // 800AD3A4
  c->r[3]=c->r[31]+0x0000000Cu; // 800AD3A8
  c->r[4]=0u+0x00000000u; // 800AD3AC
  c->lr=0x800AD3B4u; f_80036430(c); // 800AD3B0
  c->r[7]=0u+0x803D0000u; // 800AD3B4
  {uint32_t ea=c->r[7]+0xFFFFE698u; c->r[6]=R32(ea); c->r[7]=ea;} // 800AD3B8
  c->r[3]=c->r[31]|c->r[31]; // 800AD3BC
  c->r[4]=c->r[1]+0x00000008u; // 800AD3C0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800AD3C4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800AD3C8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800AD3CC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800AD3D0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AD3D4
  c->lr=0x800AD3DCu; f_800ACE88(c); // 800AD3D8
  c->r[0]=R32(c->r[1]+0x00000074u); // 800AD3DC
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800AD3E0
  c->lr=c->r[0]; // 800AD3E4
  c->r[1]=c->r[1]+0x00000070u; // 800AD3E8
  return; // 800AD3EC
}

// fn_800AD3F0
void f_800AD3F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD3F0
  c->r[0]=c->lr; // 800AD3F4
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800AD3F8
  W32(c->r[1]+0x000000DCu,c->r[31]); // 800AD3FC
  W32(c->r[1]+0x000000D8u,c->r[30]); // 800AD400
  W32(c->r[1]+0x000000D4u,c->r[29]); // 800AD404
  c->r[29]=c->r[3]|c->r[3]; // 800AD408
  c->r[4]=R32(c->r[3]+0x00000394u); // 800AD40C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800AD410
  c->lr=0x800AD418u; f_802501B0(c); // 800AD414
  c->r[3]=c->r[29]+0x0000000Cu; // 800AD418
  c->r[4]=0u+0x00000014u; // 800AD41C
  c->lr=0x800AD424u; f_8004E0A4(c); // 800AD420
  cmps(c,0,(int32_t)c->r[3],0); // 800AD424
  if (crb(c,2)) { goto L_800AD530; } // 800AD428
  c->r[3]=c->r[29]+0x0000000Cu; // 800AD42C
  c->lr=0x800AD434u; f_80038C0C(c); // 800AD430
  c->r[3]=c->r[29]|c->r[29]; // 800AD434
  c->lr=0x800AD43Cu; f_80178FD0(c); // 800AD438
  {uint32_t ea=c->r[2]+0xFFFF98B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD43C
  c->r[3]=c->r[1]+0x000000A0u; // 800AD440
  {uint32_t ea=c->r[2]+0xFFFF98E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD444
  c->r[4]=0u+0x00000059u; // 800AD448
  {uint32_t ea=c->r[2]+0xFFFF98ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD44C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 800AD450
  {uint32_t ea=c->r[2]+0xFFFF98E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD454
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 800AD458
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 800AD45C
  {uint32_t ea=c->r[29]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD460
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800AD464
  c->lr=0x800AD46Cu; f_80295FBC(c); // 800AD468
  c->r[4]=c->r[1]+0x00000058u; // 800AD46C
  c->r[3]=c->r[1]+0x000000A0u; // 800AD470
  c->r[5]=c->r[4]|c->r[4]; // 800AD474
  c->lr=0x800AD47Cu; f_80296750(c); // 800AD478
  c->r[3]=c->r[29]+0x0000002Cu; // 800AD47C
  c->r[4]=c->r[1]+0x00000058u; // 800AD480
  c->r[5]=c->r[1]+0x00000040u; // 800AD484
  c->lr=0x800AD48Cu; f_80296A4C(c); // 800AD488
  c->r[3]=c->r[1]+0x0000004Cu; // 800AD48C
  c->r[4]=c->r[29]+0x00000038u; // 800AD490
  c->lr=0x800AD498u; f_800361A0(c); // 800AD494
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD498
  c->r[3]=c->r[1]+0x00000040u; // 800AD49C
  {uint32_t ea=c->r[2]+0xFFFF98E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD4A0
  c->r[4]=c->r[1]+0x0000004Cu; // 800AD4A4
  c->r[5]=c->r[1]+0x00000058u; // 800AD4A8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800AD4AC
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800AD4B0
  c->lr=0x800AD4B8u; f_80296A70(c); // 800AD4B4
  c->r[6]=R32(c->r[1]+0x00000058u); // 800AD4B8
  c->r[3]=0u+0x80550000u; // 800AD4BC
  c->r[10]=R32(c->r[1]+0x0000005Cu); // 800AD4C0
  c->r[0]=0u+0x00000000u; // 800AD4C4
  c->r[30]=R32(c->r[1]+0x00000060u); // 800AD4C8
  c->r[3]=c->r[3]+0x00003D60u; // 800AD4CC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800AD4D0
  c->r[4]=c->r[1]+0x00000028u; // 800AD4D4
  c->r[12]=R32(c->r[1]+0x00000050u); // 800AD4D8
  c->r[5]=c->r[1]+0x0000001Cu; // 800AD4DC
  c->r[11]=R32(c->r[1]+0x00000054u); // 800AD4E0
  c->r[7]=c->r[1]+0x00000034u; // 800AD4E4
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800AD4E8
  c->r[8]=c->r[1]+0x00000068u; // 800AD4EC
  c->r[6]=0u+0x00000000u; // 800AD4F0
  c->r[9]=0u+0x00000000u; // 800AD4F4
  W32(c->r[1]+0x00000020u,c->r[10]); // 800AD4F8
  c->r[10]=0u+0x00000000u; // 800AD4FC
  W32(c->r[1]+0x00000024u,c->r[30]); // 800AD500
  W32(c->r[1]+0x00000028u,c->r[31]); // 800AD504
  W32(c->r[1]+0x0000002Cu,c->r[12]); // 800AD508
  W32(c->r[1]+0x00000030u,c->r[11]); // 800AD50C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800AD510
  c->lr=0x800AD518u; f_801D5690(c); // 800AD514
  cmpu(c,0,c->r[3],0x00000001u); // 800AD518
  if (!crb(c,2)) { goto L_800AD57C; } // 800AD51C
  c->r[3]=c->r[29]+0x0000002Cu; // 800AD520
  c->r[4]=c->r[29]+0x00000038u; // 800AD524
  c->lr=0x800AD52Cu; f_800361A0(c); // 800AD528
  goto L_800AD57C; // 800AD52C
L_800AD530:;
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800AD530
  c->r[3]=c->r[29]|c->r[29]; // 800AD534
  {uint32_t ea=c->r[2]+0xFFFF98B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD538
  c->r[4]=0u+0x00000000u; // 800AD53C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AD540
  c->r[5]=0u+0x00000000u; // 800AD544
  {uint32_t ea=c->r[2]+0xFFFF98B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD548
  c->ctr=c->r[12]; // 800AD54C
  if (true) { c->lr=0x800AD554u; dispatch(c,c->ctr); } // 800AD550
  c->r[7]=0u+0x803D0000u; // 800AD554
  {uint32_t ea=c->r[7]+0xFFFFE6A4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800AD558
  c->r[3]=c->r[29]|c->r[29]; // 800AD55C
  c->r[4]=c->r[1]+0x00000010u; // 800AD560
  c->r[5]=R32(c->r[7]+0x00000004u); // 800AD564
  c->r[0]=R32(c->r[7]+0x00000008u); // 800AD568
  W32(c->r[1]+0x00000010u,c->r[6]); // 800AD56C
  W32(c->r[1]+0x00000014u,c->r[5]); // 800AD570
  W32(c->r[1]+0x00000018u,c->r[0]); // 800AD574
  c->lr=0x800AD57Cu; f_800ACE88(c); // 800AD578
L_800AD57C:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800AD57C
  c->r[31]=R32(c->r[1]+0x000000DCu); // 800AD580
  c->r[30]=R32(c->r[1]+0x000000D8u); // 800AD584
  c->r[29]=R32(c->r[1]+0x000000D4u); // 800AD588
  c->lr=c->r[0]; // 800AD58C
  c->r[1]=c->r[1]+0x000000E0u; // 800AD590
  return; // 800AD594
}

// fn_800AD598
void f_800AD598(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD598
  c->r[0]=c->lr; // 800AD59C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD5A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD5A4
  c->r[31]=c->r[3]|c->r[3]; // 800AD5A8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800AD5AC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800AD5B0
  c->lr=0x800AD5B8u; f_802501B0(c); // 800AD5B4
  c->r[3]=0u+0x805D0000u; // 800AD5B8
  {uint32_t ea=c->r[2]+0xFFFF98B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD5BC
  {uint32_t ea=c->r[2]+0xFFFF98B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD5C0
  c->r[4]=c->r[31]|c->r[31]; // 800AD5C4
  c->r[3]=c->r[3]+0x00003F6Cu; // 800AD5C8
  c->r[5]=0u+0x00000000u; // 800AD5CC
  c->lr=0x800AD5D4u; f_801FEC8C(c); // 800AD5D0
  cmps(c,0,(int32_t)c->r[3],0); // 800AD5D4
  if (!crb(c,2)) { goto L_800AD5F0; } // 800AD5D8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AD5DC
  c->r[3]=c->r[31]|c->r[31]; // 800AD5E0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800AD5E4
  c->ctr=c->r[12]; // 800AD5E8
  if (true) { c->lr=0x800AD5F0u; dispatch(c,c->ctr); } // 800AD5EC
L_800AD5F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD5F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD5F4
  c->lr=c->r[0]; // 800AD5F8
  c->r[1]=c->r[1]+0x00000010u; // 800AD5FC
  return; // 800AD600
}

// fn_800AD604
void f_800AD604(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD604
  c->r[0]=c->lr; // 800AD608
  c->r[5]=0u+0x00000000u; // 800AD60C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD610
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD614
  c->r[31]=c->r[3]|c->r[3]; // 800AD618
  c->r[3]=0u+0x00000094u; // 800AD61C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800AD620
  c->r[4]=c->r[4]+0x0000010Cu; // 800AD624
  c->lr=0x800AD62Cu; f_8024EE50(c); // 800AD628
  cmps(c,0,(int32_t)c->r[3],0); // 800AD62C
  if (crb(c,2)) { goto L_800AD63C; } // 800AD630
  c->r[3]=0u+0x00000000u; // 800AD634
  goto L_800AD6A0; // 800AD638
L_800AD63C:;
  c->r[3]=c->r[31]+0x00000210u; // 800AD63C
  c->r[4]=0u+0x000000E1u; // 800AD640
  c->lr=0x800AD648u; f_80221630(c); // 800AD644
  cmps(c,0,(int32_t)c->r[3],0); // 800AD648
  if (crb(c,2)) { goto L_800AD694; } // 800AD64C
  c->r[0]=R32(c->r[31]+0x00000210u); // 800AD650
  c->r[4]=c->r[31]|c->r[31]; // 800AD654
  c->r[3]=c->r[31]+0x00000210u; // 800AD658
  c->r[0]=c->r[0]|0xA8000000u; // 800AD65C
  W32(c->r[31]+0x00000210u,c->r[0]); // 800AD660
  c->lr=0x800AD668u; f_80043E44(c); // 800AD664
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD668
  c->r[3]=c->r[31]+0x00000210u; // 800AD66C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD670
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AD674
  c->lr=0x800AD67Cu; f_80043E34(c); // 800AD678
  {uint32_t ea=c->r[2]+0xFFFF98F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD67C
  c->r[3]=c->r[31]+0x00000210u; // 800AD680
  {uint32_t ea=c->r[2]+0xFFFF98E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD684
  c->f[3]=c->f[1]; // 800AD688
  c->lr=0x800AD690u; f_80043E24(c); // 800AD68C
  goto L_800AD69C; // 800AD690
L_800AD694:;
  c->r[3]=0u+0x00000000u; // 800AD694
  goto L_800AD6A0; // 800AD698
L_800AD69C:;
  c->r[3]=0u+0x00000001u; // 800AD69C
L_800AD6A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD6A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD6A4
  c->lr=c->r[0]; // 800AD6A8
  c->r[1]=c->r[1]+0x00000010u; // 800AD6AC
  return; // 800AD6B0
}

// fn_800AD6B4
void f_800AD6B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD6B4
  c->r[0]=c->lr; // 800AD6B8
  c->r[7]=0u+0x803D0000u; // 800AD6BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AD6C0
  c->r[0]=0u+0x00000000u; // 800AD6C4
  c->r[4]=c->r[1]+0x00000008u; // 800AD6C8
  W16(c->r[3]+0x000003BCu,c->r[0]); // 800AD6CC
  {uint32_t ea=c->r[7]+0xFFFFE6B0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800AD6D0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800AD6D4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800AD6D8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800AD6DC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800AD6E0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AD6E4
  c->lr=0x800AD6ECu; f_800ACE88(c); // 800AD6E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AD6EC
  c->lr=c->r[0]; // 800AD6F0
  c->r[1]=c->r[1]+0x00000020u; // 800AD6F4
  return; // 800AD6F8
}

// fn_800AD6FC
void f_800AD6FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD6FC
  c->r[0]=c->lr; // 800AD700
  c->r[5]=0u+0x80620000u; // 800AD704
  c->r[4]=0u+0x0000000Au; // 800AD708
  W32(c->r[1]+0x00000094u,c->r[0]); // 800AD70C
  c->r[5]=c->r[5]+0x00007688u; // 800AD710
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800AD714
  W32(c->r[1]+0x00000088u,c->r[30]); // 800AD718
  c->r[30]=c->r[3]|c->r[3]; // 800AD71C
  c->r[3]=R32(c->r[5]+0x00000014u); // 800AD720
  c->lr=0x800AD728u; f_80038AF4(c); // 800AD724
  cmps(c,0,(int32_t)c->r[3],0); // 800AD728
  if (!crb(c,2)) { goto L_800AD78C; } // 800AD72C
  c->r[3]=c->r[1]+0x00000008u; // 800AD730
  c->r[4]=c->r[30]+0x0000002Cu; // 800AD734
  c->lr=0x800AD73Cu; f_800361A0(c); // 800AD738
  {uint32_t ea=c->r[2]+0xFFFF98D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD73C
  c->r[31]=0u+0x80550000u; // 800AD740
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD744
  c->r[31]=c->r[31]+0x00003D60u; // 800AD748
  {uint32_t ea=c->r[2]+0xFFFF98B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD74C
  c->r[5]=c->r[30]|c->r[30]; // 800AD750
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800AD754
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 800AD758
  c->r[3]=c->r[31]+0x00000010u; // 800AD75C
  c->r[6]=c->r[1]+0x00000008u; // 800AD760
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800AD764
  c->r[7]=c->r[1]+0x00000014u; // 800AD768
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800AD76C
  c->r[8]=c->r[1]+0x00000020u; // 800AD770
  c->r[4]=0u+0x00000103u; // 800AD774
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 800AD778
  c->lr=0x800AD780u; f_802264E4(c); // 800AD77C
  c->r[3]=c->r[31]+0x00000010u; // 800AD780
  c->r[4]=c->r[1]+0x00000020u; // 800AD784
  c->lr=0x800AD78Cu; f_80226D68(c); // 800AD788
L_800AD78C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800AD78C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800AD790
  c->r[30]=R32(c->r[1]+0x00000088u); // 800AD794
  c->lr=c->r[0]; // 800AD798
  c->r[1]=c->r[1]+0x00000090u; // 800AD79C
  return; // 800AD7A0
}

// fn_800AD7A4
void f_800AD7A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD7A4
  c->r[0]=c->lr; // 800AD7A8
  cmps(c,0,(int32_t)c->r[3],0); // 800AD7AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD7B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD7B4
  c->r[31]=c->r[4]|c->r[4]; // 800AD7B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AD7BC
  c->r[30]=c->r[3]|c->r[3]; // 800AD7C0
  if (crb(c,2)) { goto L_800AD7E0; } // 800AD7C4
  c->r[4]=0u+0x00000000u; // 800AD7C8
  c->lr=0x800AD7D0u; f_8026A06C(c); // 800AD7CC
  cmps(c,0,(int32_t)c->r[31],0); // 800AD7D0
  if (!crb(c,1)) { goto L_800AD7E0; } // 800AD7D4
  c->r[3]=c->r[30]|c->r[30]; // 800AD7D8
  c->lr=0x800AD7E0u; f_8026A268(c); // 800AD7DC
L_800AD7E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800AD7E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD7E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AD7E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD7EC
  c->lr=c->r[0]; // 800AD7F0
  c->r[1]=c->r[1]+0x00000010u; // 800AD7F4
  return; // 800AD7F8
}

// fn_800AD7FC
void f_800AD7FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD7FC
  c->r[0]=c->lr; // 800AD800
  c->r[4]=0u+0x00000000u; // 800AD804
  W32(c->r[1]+0x00000094u,c->r[0]); // 800AD808
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800AD80C
  c->r[31]=c->r[3]|c->r[3]; // 800AD810
  W32(c->r[1]+0x00000088u,c->r[30]); // 800AD814
  W32(c->r[1]+0x00000084u,c->r[29]); // 800AD818
  W32(c->r[1]+0x00000080u,c->r[28]); // 800AD81C
  c->lr=0x800AD824u; f_801F57D0(c); // 800AD820
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AD824
  c->r[3]=c->r[31]|c->r[31]; // 800AD828
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800AD82C
  c->ctr=c->r[12]; // 800AD830
  if (true) { c->lr=0x800AD838u; dispatch(c,c->ctr); } // 800AD834
  c->r[3]=c->r[31]|c->r[31]; // 800AD838
  c->lr=0x800AD840u; f_801F4B94(c); // 800AD83C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800AD840
  c->r[4]=0u+0x00000003u; // 800AD844
  c->r[3]=0u+0x0000000Au; // 800AD848
  W8(c->r[31]+0x0000006Cu,c->r[4]); // 800AD84C
  c->r[0]=c->r[0]|0x00000800u; // 800AD850
  c->r[4]=R32(c->r[31]+0x00000394u); // 800AD854
  W8(c->r[31]+0x0000006Du,c->r[3]); // 800AD858
  c->r[3]=c->r[31]|c->r[31]; // 800AD85C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800AD860
  c->lr=0x800AD868u; f_801F58BC(c); // 800AD864
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AD868
  c->r[29]=0u+0x00000000u; // 800AD86C
  c->r[4]=0u+0x803A0000u; // 800AD870
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800AD874
  c->r[4]=c->r[4]+0xFFFFC920u; // 800AD878
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AD87C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AD880
  c->lr=0x800AD888u; f_80256EC4(c); // 800AD884
  c->r[5]=R32(c->r[31]+0x00000394u); // 800AD888
  c->r[4]=0u+0x00000000u; // 800AD88C
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800AD890
  c->r[3]=c->r[31]+0x0000000Cu; // 800AD894
  c->lr=0x800AD89Cu; f_80036430(c); // 800AD898
  c->r[3]=c->r[31]+0x00000010u; // 800AD89C
  c->r[4]=0u+0x00000014u; // 800AD8A0
  c->lr=0x800AD8A8u; f_80036430(c); // 800AD8A4
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800AD8A8
  W8(c->r[31]+0x00000028u,c->r[29]); // 800AD8AC
  cmpu(c,0,c->r[0],0x000000FFu); // 800AD8B0
  if (!crb(c,2)) { goto L_800AD97C; } // 800AD8B4
  c->r[7]=0u+0x000000FFu; // 800AD8B8
  c->r[0]=R8(c->r[31]+0x00000077u); // 800AD8BC
  c->r[6]=0u+0x00000001u; // 800AD8C0
  c->r[5]=0u+0x803D0000u; // 800AD8C4
  W8(c->r[31]+0x00000078u,c->r[29]); // 800AD8C8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800AD8CC
  c->r[5]=c->r[5]+0xFFFFE790u; // 800AD8D0
  c->r[3]=c->r[31]+0x0000002Cu; // 800AD8D4
  W8(c->r[31]+0x00000079u,c->r[7]); // 800AD8D8
  c->r[4]=c->r[5]+c->r[0]; // 800AD8DC
  W8(c->r[31]+0x0000007Au,c->r[7]); // 800AD8E0
  W8(c->r[31]+0x0000007Bu,c->r[6]); // 800AD8E4
  W8(c->r[31]+0x0000007Cu,c->r[29]); // 800AD8E8
  c->r[0]=R16(c->r[5]+c->r[0]); // 800AD8EC
  W8(c->r[31]+0x0000006Eu,c->r[0]); // 800AD8F0
  c->r[0]=R16(c->r[4]+0x00000002u); // 800AD8F4
  W16(c->r[31]+0x00000074u,c->r[0]); // 800AD8F8
  c->r[29]=R32(c->r[4]+0x00000004u); // 800AD8FC
  c->r[4]=c->r[29]+0x00000004u; // 800AD900
  c->lr=0x800AD908u; f_800361A0(c); // 800AD904
  c->r[3]=R8(c->r[31]+0x00000078u); // 800AD908
  c->r[4]=c->r[31]+0x0000002Cu; // 800AD90C
  c->r[0]=R32(c->r[29]+0x00000000u); // 800AD910
  c->r[5]=c->r[1]+0x00000038u; // 800AD914
  c->r[0]=c->r[3]+c->r[0]; // 800AD918
  W8(c->r[31]+0x00000078u,c->r[0]); // 800AD91C
  c->r[0]=R32(c->r[29]+0x00000000u); // 800AD920
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800AD924
  c->r[29]=c->r[29]+c->r[0]; // 800AD928
  c->r[3]=c->r[29]+0x00000004u; // 800AD92C
  c->lr=0x800AD934u; f_80296A70(c); // 800AD930
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD934
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD938
  c->lr=0x800AD940u; f_8005C22C(c); // 800AD93C
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD940
  fcmp(c,0,c->f[1],c->f[0]); // 800AD944
  if (!crb(c,1)) { goto L_800AD960; } // 800AD948
  {uint32_t ea=c->r[2]+0xFFFF9900u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD94C
  {uint32_t ea=c->r[2]+0xFFFF9904u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD950
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800AD954
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800AD958
  goto L_800AD978; // 800AD95C
L_800AD960:;
  {uint32_t ea=c->r[2]+0xFFFF9900u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD960
  {uint32_t ea=c->r[2]+0xFFFF9904u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD964
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800AD968
  {uint32_t ea=c->r[2]+0xFFFF9908u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD96C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800AD970
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800AD974
L_800AD978:;
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800AD978
L_800AD97C:;
  c->r[3]=0u+0x805D0000u; // 800AD97C
  c->r[4]=c->r[31]+0x0000002Cu; // 800AD980
  c->r[3]=c->r[3]+0x000078B0u; // 800AD984
  c->lr=0x800AD98Cu; f_802351CC(c); // 800AD988
  c->r[6]=R32(c->r[31]+0x00000394u); // 800AD98C
  c->r[0]=0u+0x00000001u; // 800AD990
  c->r[5]=0u+0x805D0000u; // 800AD994
  c->r[4]=0u+0x00000000u; // 800AD998
  W8(c->r[6]+0x0000001Du,c->r[3]); // 800AD99C
  c->r[3]=c->r[5]+0x00006D70u; // 800AD9A0
  c->r[5]=0u+0x00000027u; // 800AD9A4
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800AD9A8
  c->lr=0x800AD9B0u; f_8022B804(c); // 800AD9AC
  c->r[3]=c->r[31]|c->r[31]; // 800AD9B0
  c->r[4]=0u+0x00000003u; // 800AD9B4
  c->r[5]=0u+0x00000014u; // 800AD9B8
  c->r[6]=0u+0x00000001u; // 800AD9BC
  c->r[7]=0u+0x00000001u; // 800AD9C0
  c->lr=0x800AD9C8u; f_8017900C(c); // 800AD9C4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AD9C8
  c->r[3]=c->r[31]|c->r[31]; // 800AD9CC
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD9D0
  c->r[4]=0u+0x00000005u; // 800AD9D4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AD9D8
  c->r[5]=0u+0x00000001u; // 800AD9DC
  c->f[2]=c->f[1]; // 800AD9E0
  c->ctr=c->r[12]; // 800AD9E4
  if (true) { c->lr=0x800AD9ECu; dispatch(c,c->ctr); } // 800AD9E8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AD9EC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AD9F0
  c->lr=0x800AD9F8u; f_802501B0(c); // 800AD9F4
  c->r[3]=c->r[31]|c->r[31]; // 800AD9F8
  c->lr=0x800ADA00u; f_801F56F4(c); // 800AD9FC
  c->r[30]=0u+0x803A0000u; // 800ADA00
  c->r[29]=0u+0x80550000u; // 800ADA04
  c->r[30]=c->r[30]+0xFFFFC920u; // 800ADA08
  c->r[5]=0u+0x00000000u; // 800ADA0C
  c->r[3]=c->r[29]+0xFFFFC848u; // 800ADA10
  c->r[6]=0u+0x00000000u; // 800ADA14
  c->r[4]=c->r[30]+0x00000009u; // 800ADA18
  c->lr=0x800ADA20u; f_8018D3E4(c); // 800ADA1C
  c->r[28]=rotl(c->r[3],0)&0x000000FFu; // 800ADA20
  cmpu(c,0,c->r[28],0x000000FFu); // 800ADA24
  if (crb(c,2)) { goto L_800ADAA0; } // 800ADA28
  c->r[3]=R32(c->r[31]+0x00000394u); // 800ADA2C
  c->r[4]=c->r[30]+0x0000000Du; // 800ADA30
  c->r[5]=c->r[1]+0x00000048u; // 800ADA34
  c->r[6]=0u+0x00000001u; // 800ADA38
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800ADA3C
  c->lr=0x800ADA44u; f_80257018(c); // 800ADA40
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ADA44
  c->r[4]=c->r[28]|c->r[28]; // 800ADA48
  {uint32_t ea=c->r[1]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ADA4C
  c->r[3]=c->r[29]+0xFFFFC848u; // 800ADA50
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ADA54
  c->r[5]=c->r[1]+0x00000020u; // 800ADA58
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 800ADA5C
  c->r[6]=c->r[1]+0x00000014u; // 800ADA60
  c->r[0]=R32(c->r[31]+0x00000060u); // 800ADA64
  c->r[9]=R32(c->r[31]+0x00000064u); // 800ADA68
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800ADA6C
  c->r[8]=R32(c->r[1]+0x0000002Cu); // 800ADA70
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800ADA74
  c->r[7]=R32(c->r[1]+0x00000030u); // 800ADA78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADA7C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800ADA80
  W32(c->r[1]+0x00000018u,c->r[9]); // 800ADA84
  c->r[9]=R32(c->r[31]+0x00000068u); // 800ADA88
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800ADA8C
  W32(c->r[1]+0x00000020u,c->r[8]); // 800ADA90
  W32(c->r[1]+0x00000024u,c->r[7]); // 800ADA94
  W32(c->r[1]+0x00000028u,c->r[0]); // 800ADA98
  c->lr=0x800ADAA0u; f_8018DBD0(c); // 800ADA9C
L_800ADAA0:;
  c->r[3]=c->r[31]+0x00000014u; // 800ADAA0
  c->r[4]=0u+0x00000000u; // 800ADAA4
  c->lr=0x800ADAACu; f_80036430(c); // 800ADAA8
  c->r[0]=0u+0x00000000u; // 800ADAAC
  c->r[7]=0u+0x803D0000u; // 800ADAB0
  W8(c->r[31]+0x0000002Au,c->r[0]); // 800ADAB4
  c->r[3]=c->r[31]|c->r[31]; // 800ADAB8
  c->r[4]=c->r[1]+0x00000008u; // 800ADABC
  {uint32_t ea=c->r[7]+0xFFFFEB28u; c->r[6]=R32(ea); c->r[7]=ea;} // 800ADAC0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800ADAC4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800ADAC8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800ADACC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800ADAD0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800ADAD4
  c->lr=0x800ADADCu; f_800ADAFC(c); // 800ADAD8
  c->r[0]=R32(c->r[1]+0x00000094u); // 800ADADC
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800ADAE0
  c->r[30]=R32(c->r[1]+0x00000088u); // 800ADAE4
  c->r[29]=R32(c->r[1]+0x00000084u); // 800ADAE8
  c->r[28]=R32(c->r[1]+0x00000080u); // 800ADAEC
  c->lr=c->r[0]; // 800ADAF0
  c->r[1]=c->r[1]+0x00000090u; // 800ADAF4
  return; // 800ADAF8
}

// fn_800ADAFC
void f_800ADAFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADAFC
  c->r[0]=c->lr; // 800ADB00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADB04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ADB08
  c->r[31]=c->r[4]|c->r[4]; // 800ADB0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800ADB10
  c->r[30]=c->r[3]|c->r[3]; // 800ADB14
  c->r[3]=c->r[31]|c->r[31]; // 800ADB18
  c->lr=0x800ADB20u; f_802B9FDC(c); // 800ADB1C
  cmps(c,0,(int32_t)c->r[3],0); // 800ADB20
  if (crb(c,2)) { goto L_800ADB40; } // 800ADB24
  c->r[3]=R32(c->r[31]+0x00000000u); // 800ADB28
  c->r[0]=R32(c->r[31]+0x00000004u); // 800ADB2C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800ADB30
  W32(c->r[30]+0x00000020u,c->r[0]); // 800ADB34
  c->r[0]=R32(c->r[31]+0x00000008u); // 800ADB38
  W32(c->r[30]+0x00000024u,c->r[0]); // 800ADB3C
L_800ADB40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADB40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ADB44
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ADB48
  c->lr=c->r[0]; // 800ADB4C
  c->r[1]=c->r[1]+0x00000010u; // 800ADB50
  return; // 800ADB54
}

// fn_800ADB58
void f_800ADB58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADB58
  c->r[0]=c->lr; // 800ADB5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADB60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ADB64
  c->r[31]=c->r[3]|c->r[3]; // 800ADB68
  c->lr=0x800ADB70u; f_801F4C0C(c); // 800ADB6C
  c->r[3]=c->r[31]|c->r[31]; // 800ADB70
  c->lr=0x800ADB78u; f_800AF07C(c); // 800ADB74
  c->r[3]=c->r[31]|c->r[31]; // 800ADB78
  c->lr=0x800ADB80u; f_801F56F4(c); // 800ADB7C
  c->r[3]=c->r[31]+0x00000210u; // 800ADB80
  c->lr=0x800ADB88u; f_80221698(c); // 800ADB84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADB88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ADB8C
  c->lr=c->r[0]; // 800ADB90
  c->r[1]=c->r[1]+0x00000010u; // 800ADB94
  return; // 800ADB98
}

// fn_800ADB9C
void f_800ADB9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADB9C
  c->r[0]=c->lr; // 800ADBA0
  c->r[5]=0u+0x00000000u; // 800ADBA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADBA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ADBAC
  c->r[31]=c->r[3]|c->r[3]; // 800ADBB0
  c->r[3]=0u+0x00000413u; // 800ADBB4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800ADBB8
  c->r[4]=c->r[4]+0x0000010Cu; // 800ADBBC
  c->lr=0x800ADBC4u; f_8024EE50(c); // 800ADBC0
  cmps(c,0,(int32_t)c->r[3],0); // 800ADBC4
  if (crb(c,2)) { goto L_800ADBD4; } // 800ADBC8
  c->r[3]=0u+0x00000000u; // 800ADBCC
  goto L_800ADC38; // 800ADBD0
L_800ADBD4:;
  c->r[3]=c->r[31]+0x00000210u; // 800ADBD4
  c->r[4]=0u+0x000000E1u; // 800ADBD8
  c->lr=0x800ADBE0u; f_80221630(c); // 800ADBDC
  cmps(c,0,(int32_t)c->r[3],0); // 800ADBE0
  if (crb(c,2)) { goto L_800ADC2C; } // 800ADBE4
  c->r[0]=R32(c->r[31]+0x00000210u); // 800ADBE8
  c->r[4]=c->r[31]|c->r[31]; // 800ADBEC
  c->r[3]=c->r[31]+0x00000210u; // 800ADBF0
  c->r[0]=c->r[0]|0xA8000000u; // 800ADBF4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800ADBF8
  c->lr=0x800ADC00u; f_80043E44(c); // 800ADBFC
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ADC00
  c->r[3]=c->r[31]+0x00000210u; // 800ADC04
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ADC08
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800ADC0C
  c->lr=0x800ADC14u; f_80043E34(c); // 800ADC10
  {uint32_t ea=c->r[2]+0xFFFF9910u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ADC14
  c->r[3]=c->r[31]+0x00000210u; // 800ADC18
  c->f[2]=c->f[1]; // 800ADC1C
  c->f[3]=c->f[1]; // 800ADC20
  c->lr=0x800ADC28u; f_80043E24(c); // 800ADC24
  goto L_800ADC34; // 800ADC28
L_800ADC2C:;
  c->r[3]=0u+0x00000000u; // 800ADC2C
  goto L_800ADC38; // 800ADC30
L_800ADC34:;
  c->r[3]=0u+0x00000001u; // 800ADC34
L_800ADC38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADC38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ADC3C
  c->lr=c->r[0]; // 800ADC40
  c->r[1]=c->r[1]+0x00000010u; // 800ADC44
  return; // 800ADC48
}

// fn_800ADC4C
void f_800ADC4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADC4C
  c->r[0]=c->lr; // 800ADC50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADC54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ADC58
  c->r[31]=c->r[3]|c->r[3]; // 800ADC5C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800ADC60
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800ADC64
  c->lr=0x800ADC6Cu; f_802501B0(c); // 800ADC68
  c->r[3]=c->r[31]|c->r[31]; // 800ADC6C
  c->r[4]=0u+0x00000000u; // 800ADC70
  c->lr=0x800ADC78u; f_801F5244(c); // 800ADC74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADC78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ADC7C
  c->lr=c->r[0]; // 800ADC80
  c->r[1]=c->r[1]+0x00000010u; // 800ADC84
  return; // 800ADC88
}

// fn_800ADC8C
void f_800ADC8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADC8C
  c->r[0]=c->lr; // 800ADC90
  c->r[7]=0u+0x803D0000u; // 800ADC94
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ADC98
  c->r[4]=c->r[1]+0x00000008u; // 800ADC9C
  {uint32_t ea=c->r[7]+0xFFFFEB34u; c->r[6]=R32(ea); c->r[7]=ea;} // 800ADCA0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800ADCA4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800ADCA8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800ADCAC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800ADCB0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800ADCB4
  c->lr=0x800ADCBCu; f_800ADAFC(c); // 800ADCB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ADCBC
  c->lr=c->r[0]; // 800ADCC0
  c->r[1]=c->r[1]+0x00000020u; // 800ADCC4
  return; // 800ADCC8
}

// fn_800ADCCC
void f_800ADCCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADCCC
  c->r[0]=c->lr; // 800ADCD0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800ADCD4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800ADCD8
  c->r[31]=c->r[3]|c->r[3]; // 800ADCDC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800ADCE0
  c->r[30]=0u+0x803D0000u; // 800ADCE4
  c->r[30]=c->r[30]+0xFFFFE790u; // 800ADCE8
  c->r[0]=R8(c->r[3]+0x0000002Au); // 800ADCEC
  cmps(c,0,(int32_t)c->r[0],0); // 800ADCF0
  if (!crb(c,2)) { goto L_800ADD50; } // 800ADCF4
  c->r[3]=c->r[3]+0x00000014u; // 800ADCF8
  c->lr=0x800ADD00u; f_80038C0C(c); // 800ADCFC
  c->r[3]=c->r[31]+0x00000014u; // 800ADD00
  c->r[4]=0u+0x00000008u; // 800ADD04
  c->lr=0x800ADD0Cu; f_800395D0(c); // 800ADD08
  cmps(c,0,(int32_t)c->r[3],0); // 800ADD0C
  if (crb(c,2)) { goto L_800ADD50; } // 800ADD10
  c->r[4]=R8(c->r[31]+0x0000002Au); // 800ADD14
  c->r[0]=0u+0x00000001u; // 800ADD18
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ADD1C
  c->r[3]=c->r[31]|c->r[31]; // 800ADD20
  c->r[4]=c->r[4]+0x00000001u; // 800ADD24
  c->r[6]=R32(c->r[31]+0x00000394u); // 800ADD28
  W8(c->r[31]+0x0000002Au,c->r[4]); // 800ADD2C
  c->f[2]=c->f[1]; // 800ADD30
  c->r[4]=0u+0x00000003u; // 800ADD34
  c->r[5]=0u+0x00000001u; // 800ADD38
  W8(c->r[6]+0x0000001Cu,c->r[0]); // 800ADD3C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800ADD40
  c->r[12]=R32(c->r[12]+0x00000048u); // 800ADD44
  c->ctr=c->r[12]; // 800ADD48
  if (true) { c->lr=0x800ADD50u; dispatch(c,c->ctr); } // 800ADD4C
L_800ADD50:;
  c->r[0]=R8(c->r[31]+0x0000002Au); // 800ADD50
  cmps(c,0,(int32_t)c->r[0],0); // 800ADD54
  if (crb(c,2)) { goto L_800ADE94; } // 800ADD58
  c->r[3]=R32(c->r[31]+0x00000394u); // 800ADD5C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800ADD60
  c->lr=0x800ADD68u; f_802501B0(c); // 800ADD64
  cmps(c,0,(int32_t)c->r[3],0); // 800ADD68
  if (crb(c,2)) { goto L_800ADE94; } // 800ADD6C
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800ADD70
  cmps(c,0,(int32_t)c->r[0],1); // 800ADD74
  if (crb(c,2)) { goto L_800ADDF0; } // 800ADD78
  if (!crb(c,0)) { goto L_800ADD8C; } // 800ADD7C
  cmps(c,0,(int32_t)c->r[0],0); // 800ADD80
  if (!crb(c,0)) { goto L_800ADD98; } // 800ADD84
  goto L_800ADE94; // 800ADD88
L_800ADD8C:;
  cmps(c,0,(int32_t)c->r[0],3); // 800ADD8C
  if (!crb(c,0)) { goto L_800ADE94; } // 800ADD90
  goto L_800ADE40; // 800ADD94
L_800ADD98:;
  c->r[0]=0u+0x00000000u; // 800ADD98
  c->r[3]=c->r[31]|c->r[31]; // 800ADD9C
  W8(c->r[31]+0x00000076u,c->r[0]); // 800ADDA0
  c->r[4]=0u+0x00000000u; // 800ADDA4
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ADDA8
  c->r[5]=0u+0x00000000u; // 800ADDAC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800ADDB0
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800ADDB4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800ADDB8
  c->ctr=c->r[12]; // 800ADDBC
  if (true) { c->lr=0x800ADDC4u; dispatch(c,c->ctr); } // 800ADDC0
  c->r[4]=c->r[30]+0x000003B0u; // 800ADDC4
  c->r[6]=R32(c->r[30]+0x000003B0u); // 800ADDC8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800ADDCC
  c->r[3]=c->r[31]|c->r[31]; // 800ADDD0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800ADDD4
  c->r[4]=c->r[1]+0x00000020u; // 800ADDD8
  W32(c->r[1]+0x00000020u,c->r[6]); // 800ADDDC
  W32(c->r[1]+0x00000024u,c->r[5]); // 800ADDE0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800ADDE4
  c->lr=0x800ADDECu; f_800ADAFC(c); // 800ADDE8
  goto L_800ADE94; // 800ADDEC
L_800ADDF0:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800ADDF0
  c->r[3]=c->r[31]|c->r[31]; // 800ADDF4
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ADDF8
  c->r[4]=0u+0x00000001u; // 800ADDFC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800ADE00
  c->r[5]=0u+0x00000000u; // 800ADE04
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800ADE08
  c->ctr=c->r[12]; // 800ADE0C
  if (true) { c->lr=0x800ADE14u; dispatch(c,c->ctr); } // 800ADE10
  c->r[4]=c->r[30]+0x000003BCu; // 800ADE14
  c->r[6]=R32(c->r[30]+0x000003BCu); // 800ADE18
  c->r[5]=R32(c->r[4]+0x00000004u); // 800ADE1C
  c->r[3]=c->r[31]|c->r[31]; // 800ADE20
  c->r[0]=R32(c->r[4]+0x00000008u); // 800ADE24
  c->r[4]=c->r[1]+0x00000014u; // 800ADE28
  W32(c->r[1]+0x00000014u,c->r[6]); // 800ADE2C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800ADE30
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800ADE34
  c->lr=0x800ADE3Cu; f_800ADAFC(c); // 800ADE38
  goto L_800ADE94; // 800ADE3C
L_800ADE40:;
  c->r[0]=0u+0x00000000u; // 800ADE40
  c->r[3]=c->r[31]|c->r[31]; // 800ADE44
  W8(c->r[31]+0x0000007Du,c->r[0]); // 800ADE48
  c->r[4]=0u+0x00000000u; // 800ADE4C
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ADE50
  c->r[5]=0u+0x00000000u; // 800ADE54
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800ADE58
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800ADE5C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800ADE60
  c->ctr=c->r[12]; // 800ADE64
  if (true) { c->lr=0x800ADE6Cu; dispatch(c,c->ctr); } // 800ADE68
  c->r[4]=c->r[30]+0x000003C8u; // 800ADE6C
  c->r[6]=R32(c->r[30]+0x000003C8u); // 800ADE70
  c->r[5]=R32(c->r[4]+0x00000004u); // 800ADE74
  c->r[3]=c->r[31]|c->r[31]; // 800ADE78
  c->r[0]=R32(c->r[4]+0x00000008u); // 800ADE7C
  c->r[4]=c->r[1]+0x00000008u; // 800ADE80
  W32(c->r[1]+0x00000008u,c->r[6]); // 800ADE84
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800ADE88
  W32(c->r[1]+0x00000010u,c->r[0]); // 800ADE8C
  c->lr=0x800ADE94u; f_800ADAFC(c); // 800ADE90
L_800ADE94:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800ADE94
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800ADE98
  c->r[30]=R32(c->r[1]+0x00000038u); // 800ADE9C
  c->lr=c->r[0]; // 800ADEA0
  c->r[1]=c->r[1]+0x00000040u; // 800ADEA4
  return; // 800ADEA8
}

// fn_800ADEAC
void f_800ADEAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADEAC
  c->r[0]=c->lr; // 800ADEB0
  c->r[4]=0u+0x00000014u; // 800ADEB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800ADEB8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800ADEBC
  c->r[31]=c->r[3]|c->r[3]; // 800ADEC0
  c->r[3]=c->r[3]+0x00000010u; // 800ADEC4
  c->lr=0x800ADECCu; f_800395D0(c); // 800ADEC8
  cmps(c,0,(int32_t)c->r[3],0); // 800ADECC
  if (crb(c,2)) { goto L_800ADF24; } // 800ADED0
  c->r[0]=R16(c->r[31]+0x00000074u); // 800ADED4
  cmps(c,0,(int32_t)c->r[0],0); // 800ADED8
  if (crb(c,2)) { goto L_800ADF2C; } // 800ADEDC
  c->r[3]=c->r[31]|c->r[31]; // 800ADEE0
  c->lr=0x800ADEE8u; f_800AEBD0(c); // 800ADEE4
  cmpu(c,0,c->r[3],0x00000001u); // 800ADEE8
  if (!crb(c,2)) { goto L_800ADF2C; } // 800ADEEC
  c->r[0]=0u+0x00000001u; // 800ADEF0
  c->r[7]=0u+0x803D0000u; // 800ADEF4
  W8(c->r[31]+0x00000076u,c->r[0]); // 800ADEF8
  c->r[3]=c->r[31]|c->r[31]; // 800ADEFC
  c->r[4]=c->r[1]+0x00000014u; // 800ADF00
  {uint32_t ea=c->r[7]+0xFFFFEB64u; c->r[6]=R32(ea); c->r[7]=ea;} // 800ADF04
  c->r[5]=R32(c->r[7]+0x00000004u); // 800ADF08
  c->r[0]=R32(c->r[7]+0x00000008u); // 800ADF0C
  W32(c->r[1]+0x00000014u,c->r[6]); // 800ADF10
  W32(c->r[1]+0x00000018u,c->r[5]); // 800ADF14
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800ADF18
  c->lr=0x800ADF20u; f_800ADAFC(c); // 800ADF1C
  goto L_800ADF2C; // 800ADF20
L_800ADF24:;
  c->r[3]=c->r[31]+0x00000010u; // 800ADF24
  c->lr=0x800ADF2Cu; f_80038C0C(c); // 800ADF28
L_800ADF2C:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 800ADF2C
  cmps(c,0,(int32_t)c->r[0],0); // 800ADF30
  if (crb(c,2)) { goto L_800ADF7C; } // 800ADF34
  c->r[3]=c->r[31]+0x0000000Cu; // 800ADF38
  c->lr=0x800ADF40u; f_80038C0C(c); // 800ADF3C
  c->r[3]=c->r[31]+0x0000000Cu; // 800ADF40
  c->r[4]=0u+0x0000012Cu; // 800ADF44
  c->lr=0x800ADF4Cu; f_800395D0(c); // 800ADF48
  cmps(c,0,(int32_t)c->r[3],0); // 800ADF4C
  if (crb(c,2)) { goto L_800ADF7C; } // 800ADF50
  c->r[7]=0u+0x803D0000u; // 800ADF54
  {uint32_t ea=c->r[7]+0xFFFFEB70u; c->r[6]=R32(ea); c->r[7]=ea;} // 800ADF58
  c->r[3]=c->r[31]|c->r[31]; // 800ADF5C
  c->r[4]=c->r[1]+0x00000008u; // 800ADF60
  c->r[5]=R32(c->r[7]+0x00000004u); // 800ADF64
  c->r[0]=R32(c->r[7]+0x00000008u); // 800ADF68
  W32(c->r[1]+0x00000008u,c->r[6]); // 800ADF6C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800ADF70
  W32(c->r[1]+0x00000010u,c->r[0]); // 800ADF74
  c->lr=0x800ADF7Cu; f_800ADAFC(c); // 800ADF78
L_800ADF7C:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800ADF7C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800ADF80
  c->lr=0x800ADF88u; f_802501B0(c); // 800ADF84
  c->r[0]=R32(c->r[1]+0x00000034u); // 800ADF88
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800ADF8C
  c->lr=c->r[0]; // 800ADF90
  c->r[1]=c->r[1]+0x00000030u; // 800ADF94
  return; // 800ADF98
}

// fn_800ADF9C
void f_800ADF9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADF9C
  c->r[0]=c->lr; // 800ADFA0
  c->r[4]=0u+0x00000014u; // 800ADFA4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800ADFA8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800ADFAC
  c->r[31]=0u+0x803D0000u; // 800ADFB0
  c->r[31]=c->r[31]+0xFFFFE790u; // 800ADFB4
  W32(c->r[1]+0x00000048u,c->r[30]); // 800ADFB8
  c->r[30]=c->r[3]|c->r[3]; // 800ADFBC
  c->r[3]=c->r[3]+0x00000010u; // 800ADFC0
  c->lr=0x800ADFC8u; f_800395D0(c); // 800ADFC4
  cmps(c,0,(int32_t)c->r[3],0); // 800ADFC8
  if (crb(c,2)) { goto L_800AE020; } // 800ADFCC
  c->r[0]=R16(c->r[30]+0x00000074u); // 800ADFD0
  cmps(c,0,(int32_t)c->r[0],0); // 800ADFD4
  if (crb(c,2)) { goto L_800AE028; } // 800ADFD8
  c->r[3]=c->r[30]|c->r[30]; // 800ADFDC
  c->lr=0x800ADFE4u; f_800AEBD0(c); // 800ADFE0
  cmpu(c,0,c->r[3],0x00000001u); // 800ADFE4
  if (!crb(c,2)) { goto L_800AE028; } // 800ADFE8
  c->r[0]=0u+0x00000001u; // 800ADFEC
  c->r[5]=c->r[31]+0x000003ECu; // 800ADFF0
  W8(c->r[30]+0x00000076u,c->r[0]); // 800ADFF4
  c->r[3]=c->r[30]|c->r[30]; // 800ADFF8
  c->r[4]=c->r[1]+0x00000020u; // 800ADFFC
  c->r[7]=R32(c->r[31]+0x000003ECu); // 800AE000
  c->r[6]=R32(c->r[5]+0x00000004u); // 800AE004
  c->r[0]=R32(c->r[5]+0x00000008u); // 800AE008
  W32(c->r[1]+0x00000020u,c->r[7]); // 800AE00C
  W32(c->r[1]+0x00000024u,c->r[6]); // 800AE010
  W32(c->r[1]+0x00000028u,c->r[0]); // 800AE014
  c->lr=0x800AE01Cu; f_800ADAFC(c); // 800AE018
  goto L_800AE028; // 800AE01C
L_800AE020:;
  c->r[3]=c->r[30]+0x00000010u; // 800AE020
  c->lr=0x800AE028u; f_80038C0C(c); // 800AE024
L_800AE028:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 800AE028
  cmps(c,0,(int32_t)c->r[0],0); // 800AE02C
  if (crb(c,2)) { goto L_800AE078; } // 800AE030
  c->r[3]=c->r[30]+0x0000000Cu; // 800AE034
  c->lr=0x800AE03Cu; f_80038C0C(c); // 800AE038
  c->r[3]=c->r[30]+0x0000000Cu; // 800AE03C
  c->r[4]=0u+0x00000258u; // 800AE040
  c->lr=0x800AE048u; f_800395D0(c); // 800AE044
  cmps(c,0,(int32_t)c->r[3],0); // 800AE048
  if (crb(c,2)) { goto L_800AE078; } // 800AE04C
  c->r[4]=c->r[31]+0x000003F8u; // 800AE050
  c->r[6]=R32(c->r[31]+0x000003F8u); // 800AE054
  c->r[5]=R32(c->r[4]+0x00000004u); // 800AE058
  c->r[3]=c->r[30]|c->r[30]; // 800AE05C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800AE060
  c->r[4]=c->r[1]+0x00000014u; // 800AE064
  W32(c->r[1]+0x00000014u,c->r[6]); // 800AE068
  W32(c->r[1]+0x00000018u,c->r[5]); // 800AE06C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800AE070
  c->lr=0x800AE078u; f_800ADAFC(c); // 800AE074
L_800AE078:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800AE078
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AE07C
  c->lr=0x800AE084u; f_802501B0(c); // 800AE080
  c->r[3]=c->r[30]|c->r[30]; // 800AE084
  c->r[4]=c->r[1]+0x00000038u; // 800AE088
  c->lr=0x800AE090u; f_800AECEC(c); // 800AE08C
  cmps(c,0,(int32_t)c->r[3],0); // 800AE090
  if (!crb(c,2)) { goto L_800AE0C4; } // 800AE094
  c->r[4]=c->r[31]+0x00000404u; // 800AE098
  c->r[6]=R32(c->r[31]+0x00000404u); // 800AE09C
  c->r[5]=R32(c->r[4]+0x00000004u); // 800AE0A0
  c->r[3]=c->r[30]|c->r[30]; // 800AE0A4
  c->r[0]=R32(c->r[4]+0x00000008u); // 800AE0A8
  c->r[4]=c->r[1]+0x00000008u; // 800AE0AC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800AE0B0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800AE0B4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AE0B8
  c->lr=0x800AE0C0u; f_800ADAFC(c); // 800AE0BC
  goto L_800AE13C; // 800AE0C0
L_800AE0C4:;
  c->r[3]=c->r[1]+0x00000038u; // 800AE0C4
  c->r[4]=c->r[30]+0x0000002Cu; // 800AE0C8
  c->r[5]=c->r[1]+0x0000002Cu; // 800AE0CC
  c->lr=0x800AE0D4u; f_80296A70(c); // 800AE0D0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE0D4
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE0D8
  c->lr=0x800AE0E0u; f_8005C22C(c); // 800AE0DC
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE0E0
  fcmp(c,0,c->f[1],c->f[0]); // 800AE0E4
  if (!crb(c,1)) { goto L_800AE100; } // 800AE0E8
  {uint32_t ea=c->r[2]+0xFFFF9900u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE0EC
  {uint32_t ea=c->r[2]+0xFFFF9904u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE0F0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800AE0F4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800AE0F8
  goto L_800AE118; // 800AE0FC
L_800AE100:;
  {uint32_t ea=c->r[2]+0xFFFF9900u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE100
  {uint32_t ea=c->r[2]+0xFFFF9904u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE104
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800AE108
  {uint32_t ea=c->r[2]+0xFFFF9908u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE10C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800AE110
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800AE114
L_800AE118:;
  {uint32_t ea=c->r[2]+0xFFFF9918u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE118
  c->r[3]=c->r[30]|c->r[30]; // 800AE11C
  c->lr=0x800AE124u; f_801F6A20(c); // 800AE120
  c->r[3]=c->r[30]+0x0000002Cu; // 800AE124
  c->r[4]=c->r[1]+0x00000038u; // 800AE128
  c->lr=0x800AE130u; f_800361A0(c); // 800AE12C
  c->r[3]=c->r[30]|c->r[30]; // 800AE130
  c->r[4]=0u+0x00000000u; // 800AE134
  c->lr=0x800AE13Cu; f_801F7C00(c); // 800AE138
L_800AE13C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800AE13C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800AE140
  c->r[30]=R32(c->r[1]+0x00000048u); // 800AE144
  c->lr=c->r[0]; // 800AE148
  c->r[1]=c->r[1]+0x00000050u; // 800AE14C
  return; // 800AE150
}

// fn_800AE154
void f_800AE154(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE154
  c->r[0]=c->lr; // 800AE158
  W32(c->r[1]+0x00000064u,c->r[0]); // 800AE15C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800AE160
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800AE164
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800AE168
  c->r[31]=0u+0x803D0000u; // 800AE16C
  c->r[31]=c->r[31]+0xFFFFE790u; // 800AE170
  W32(c->r[1]+0x00000048u,c->r[30]); // 800AE174
  c->r[30]=c->r[3]|c->r[3]; // 800AE178
  c->r[4]=R32(c->r[3]+0x00000394u); // 800AE17C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800AE180
  c->lr=0x800AE188u; f_802501B0(c); // 800AE184
  c->r[0]=R8(c->r[30]+0x0000007Du); // 800AE188
  cmps(c,0,(int32_t)c->r[0],0); // 800AE18C
  if (!crb(c,2)) { goto L_800AE210; } // 800AE190
  c->r[3]=c->r[30]+0x00000010u; // 800AE194
  c->r[4]=0u+0x00000014u; // 800AE198
  c->lr=0x800AE1A0u; f_800395D0(c); // 800AE19C
  cmps(c,0,(int32_t)c->r[3],0); // 800AE1A0
  if (crb(c,2)) { goto L_800AE204; } // 800AE1A4
  c->r[0]=R16(c->r[30]+0x00000074u); // 800AE1A8
  cmps(c,0,(int32_t)c->r[0],0); // 800AE1AC
  if (crb(c,2)) { goto L_800AE358; } // 800AE1B0
  c->r[3]=c->r[30]|c->r[30]; // 800AE1B4
  c->lr=0x800AE1BCu; f_800AEBD0(c); // 800AE1B8
  cmpu(c,0,c->r[3],0x00000001u); // 800AE1BC
  if (!crb(c,2)) { goto L_800AE358; } // 800AE1C0
  c->r[0]=0u+0x00000001u; // 800AE1C4
  c->r[3]=c->r[30]+0x00000010u; // 800AE1C8
  W8(c->r[30]+0x0000007Du,c->r[0]); // 800AE1CC
  c->r[4]=0u+0x00000000u; // 800AE1D0
  c->lr=0x800AE1D8u; f_80036430(c); // 800AE1D4
  c->r[4]=c->r[31]+0x00000410u; // 800AE1D8
  c->r[6]=R32(c->r[31]+0x00000410u); // 800AE1DC
  c->r[5]=R32(c->r[4]+0x00000004u); // 800AE1E0
  c->r[3]=c->r[30]|c->r[30]; // 800AE1E4
  c->r[0]=R32(c->r[4]+0x00000008u); // 800AE1E8
  c->r[4]=c->r[1]+0x00000020u; // 800AE1EC
  W32(c->r[1]+0x00000020u,c->r[6]); // 800AE1F0
  W32(c->r[1]+0x00000024u,c->r[5]); // 800AE1F4
  W32(c->r[1]+0x00000028u,c->r[0]); // 800AE1F8
  c->lr=0x800AE200u; f_800ADAFC(c); // 800AE1FC
  goto L_800AE358; // 800AE200
L_800AE204:;
  c->r[3]=c->r[30]+0x00000010u; // 800AE204
  c->lr=0x800AE20Cu; f_80038C0C(c); // 800AE208
  goto L_800AE358; // 800AE20C
L_800AE210:;
  c->r[3]=c->r[30]+0x00000010u; // 800AE210
  c->lr=0x800AE218u; f_80038C0C(c); // 800AE214
  c->r[3]=c->r[30]+0x00000010u; // 800AE218
  c->r[4]=0u+0x0000001Eu; // 800AE21C
  c->lr=0x800AE224u; f_80038BCC(c); // 800AE220
  cmps(c,0,(int32_t)c->r[3],0); // 800AE224
  if (crb(c,2)) { goto L_800AE29C; } // 800AE228
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800AE22C
  c->r[3]=c->r[30]|c->r[30]; // 800AE230
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE234
  c->r[4]=0u+0x00000004u; // 800AE238
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AE23C
  c->r[5]=0u+0x00000000u; // 800AE240
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE244
  c->ctr=c->r[12]; // 800AE248
  if (true) { c->lr=0x800AE250u; dispatch(c,c->ctr); } // 800AE24C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800AE250
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AE254
  c->lr=0x800AE25Cu; f_802501B0(c); // 800AE258
  c->r[0]=0u+0x00000000u; // 800AE25C
  c->r[3]=c->r[30]+0x00000010u; // 800AE260
  W8(c->r[30]+0x00000029u,c->r[0]); // 800AE264
  c->r[4]=0u+0x00000000u; // 800AE268
  c->lr=0x800AE270u; f_80036430(c); // 800AE26C
  c->r[4]=c->r[31]+0x0000041Cu; // 800AE270
  c->r[6]=R32(c->r[31]+0x0000041Cu); // 800AE274
  c->r[5]=R32(c->r[4]+0x00000004u); // 800AE278
  c->r[3]=c->r[30]|c->r[30]; // 800AE27C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800AE280
  c->r[4]=c->r[1]+0x00000014u; // 800AE284
  W32(c->r[1]+0x00000014u,c->r[6]); // 800AE288
  W32(c->r[1]+0x00000018u,c->r[5]); // 800AE28C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800AE290
  c->lr=0x800AE298u; f_800ADAFC(c); // 800AE294
  goto L_800AE358; // 800AE298
L_800AE29C:;
  c->r[3]=c->r[30]|c->r[30]; // 800AE29C
  c->r[4]=c->r[1]+0x00000038u; // 800AE2A0
  c->lr=0x800AE2A8u; f_800AECEC(c); // 800AE2A4
  cmps(c,0,(int32_t)c->r[3],0); // 800AE2A8
  if (!crb(c,2)) { goto L_800AE2DC; } // 800AE2AC
  c->r[4]=c->r[31]+0x00000428u; // 800AE2B0
  c->r[6]=R32(c->r[31]+0x00000428u); // 800AE2B4
  c->r[5]=R32(c->r[4]+0x00000004u); // 800AE2B8
  c->r[3]=c->r[30]|c->r[30]; // 800AE2BC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800AE2C0
  c->r[4]=c->r[1]+0x00000008u; // 800AE2C4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800AE2C8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800AE2CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AE2D0
  c->lr=0x800AE2D8u; f_800ADAFC(c); // 800AE2D4
  goto L_800AE358; // 800AE2D8
L_800AE2DC:;
  c->r[3]=c->r[1]+0x00000038u; // 800AE2DC
  c->r[4]=c->r[30]+0x0000002Cu; // 800AE2E0
  c->r[5]=c->r[1]+0x0000002Cu; // 800AE2E4
  c->lr=0x800AE2ECu; f_80296A70(c); // 800AE2E8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE2EC
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE2F0
  c->lr=0x800AE2F8u; f_8005C22C(c); // 800AE2F4
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE2F8
  fcmp(c,0,c->f[1],c->f[0]); // 800AE2FC
  if (!crb(c,1)) { goto L_800AE318; } // 800AE300
  {uint32_t ea=c->r[2]+0xFFFF9900u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE304
  {uint32_t ea=c->r[2]+0xFFFF9904u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE308
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800AE30C
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800AE310
  goto L_800AE330; // 800AE314
L_800AE318:;
  {uint32_t ea=c->r[2]+0xFFFF9900u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE318
  {uint32_t ea=c->r[2]+0xFFFF9904u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE31C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800AE320
  {uint32_t ea=c->r[2]+0xFFFF9908u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE324
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800AE328
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 800AE32C
L_800AE330:;
  c->r[3]=c->r[30]+0x0000002Cu; // 800AE330
  c->r[4]=c->r[1]+0x00000038u; // 800AE334
  c->lr=0x800AE33Cu; f_800361A0(c); // 800AE338
  c->r[3]=c->r[30]|c->r[30]; // 800AE33C
  c->r[4]=0u+0x00000000u; // 800AE340
  c->lr=0x800AE348u; f_801F7C00(c); // 800AE344
  c->f[1]=c->f[31]; // 800AE348
  {uint32_t ea=c->r[2]+0xFFFF9918u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE34C
  c->r[3]=c->r[30]|c->r[30]; // 800AE350
  c->lr=0x800AE358u; f_801F6A20(c); // 800AE354
L_800AE358:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800AE358
  c->r[0]=R32(c->r[1]+0x00000064u); // 800AE35C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800AE360
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800AE364
  c->r[30]=R32(c->r[1]+0x00000048u); // 800AE368
  c->lr=c->r[0]; // 800AE36C
  c->r[1]=c->r[1]+0x00000060u; // 800AE370
  return; // 800AE374
}

// fn_800AE378
void f_800AE378(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE378
  c->r[0]=c->lr; // 800AE37C
  c->r[4]=0u+0x00000000u; // 800AE380
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AE384
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AE388
  c->r[31]=c->r[3]|c->r[3]; // 800AE38C
  c->r[3]=c->r[3]+0x00000010u; // 800AE390
  c->lr=0x800AE398u; f_80036430(c); // 800AE394
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AE398
  c->r[3]=c->r[31]|c->r[31]; // 800AE39C
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE3A0
  c->r[4]=0u+0x00000002u; // 800AE3A4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AE3A8
  c->r[5]=0u+0x00000000u; // 800AE3AC
  c->f[2]=c->f[1]; // 800AE3B0
  c->ctr=c->r[12]; // 800AE3B4
  if (true) { c->lr=0x800AE3BCu; dispatch(c,c->ctr); } // 800AE3B8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AE3BC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AE3C0
  c->lr=0x800AE3C8u; f_802501B0(c); // 800AE3C4
  c->r[7]=0u+0x803D0000u; // 800AE3C8
  {uint32_t ea=c->r[7]+0xFFFFEBC4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800AE3CC
  c->r[3]=c->r[31]|c->r[31]; // 800AE3D0
  c->r[4]=c->r[1]+0x00000008u; // 800AE3D4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800AE3D8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800AE3DC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800AE3E0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800AE3E4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AE3E8
  c->lr=0x800AE3F0u; f_800ADAFC(c); // 800AE3EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AE3F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AE3F4
  c->lr=c->r[0]; // 800AE3F8
  c->r[1]=c->r[1]+0x00000020u; // 800AE3FC
  return; // 800AE400
}

// fn_800AE404
void f_800AE404(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE404
  c->r[0]=c->lr; // 800AE408
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AE40C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800AE410
  c->r[31]=c->r[3]|c->r[3]; // 800AE414
  c->r[4]=R32(c->r[3]+0x00000394u); // 800AE418
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800AE41C
  c->lr=0x800AE424u; f_802501B0(c); // 800AE420
  cmps(c,0,(int32_t)c->r[3],0); // 800AE424
  if (crb(c,2)) { goto L_800AE4F4; } // 800AE428
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800AE42C
  c->r[3]=0u+0x00000000u; // 800AE430
  W8(c->r[31]+0x00000029u,c->r[3]); // 800AE434
  cmpu(c,0,c->r[0],0x00000002u); // 800AE438
  if (!crb(c,2)) { goto L_800AE49C; } // 800AE43C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AE440
  c->r[3]=c->r[31]|c->r[31]; // 800AE444
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE448
  c->r[4]=0u+0x00000004u; // 800AE44C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AE450
  c->r[5]=0u+0x00000000u; // 800AE454
  c->f[2]=c->f[1]; // 800AE458
  c->ctr=c->r[12]; // 800AE45C
  if (true) { c->lr=0x800AE464u; dispatch(c,c->ctr); } // 800AE460
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AE464
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AE468
  c->lr=0x800AE470u; f_802501B0(c); // 800AE46C
  c->r[7]=0u+0x803D0000u; // 800AE470
  {uint32_t ea=c->r[7]+0xFFFFEBD0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800AE474
  c->r[3]=c->r[31]|c->r[31]; // 800AE478
  c->r[4]=c->r[1]+0x00000014u; // 800AE47C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800AE480
  c->r[0]=R32(c->r[7]+0x00000008u); // 800AE484
  W32(c->r[1]+0x00000014u,c->r[6]); // 800AE488
  W32(c->r[1]+0x00000018u,c->r[5]); // 800AE48C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800AE490
  c->lr=0x800AE498u; f_800ADAFC(c); // 800AE494
  goto L_800AE4F4; // 800AE498
L_800AE49C:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AE49C
  c->r[3]=c->r[31]|c->r[31]; // 800AE4A0
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE4A4
  c->r[4]=0u+0x00000003u; // 800AE4A8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AE4AC
  c->r[5]=0u+0x00000000u; // 800AE4B0
  c->f[2]=c->f[1]; // 800AE4B4
  c->ctr=c->r[12]; // 800AE4B8
  if (true) { c->lr=0x800AE4C0u; dispatch(c,c->ctr); } // 800AE4BC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AE4C0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AE4C4
  c->lr=0x800AE4CCu; f_802501B0(c); // 800AE4C8
  c->r[7]=0u+0x803D0000u; // 800AE4CC
  {uint32_t ea=c->r[7]+0xFFFFEBDCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800AE4D0
  c->r[3]=c->r[31]|c->r[31]; // 800AE4D4
  c->r[4]=c->r[1]+0x00000008u; // 800AE4D8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800AE4DC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800AE4E0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800AE4E4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800AE4E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AE4EC
  c->lr=0x800AE4F4u; f_800ADAFC(c); // 800AE4F0
L_800AE4F4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AE4F4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800AE4F8
  c->lr=c->r[0]; // 800AE4FC
  c->r[1]=c->r[1]+0x00000030u; // 800AE500
  return; // 800AE504
}

// fn_800AE508
void f_800AE508(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE508
  c->r[0]=c->lr; // 800AE50C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800AE510
  c->r[11]=c->r[1]+0x000000B0u; // 800AE514
  c->lr=0x800AE51Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AE518
  c->r[5]=R8(c->r[3]+0x00000029u); // 800AE51C
  c->r[31]=0u+0x803D0000u; // 800AE520
  c->r[30]=c->r[3]|c->r[3]; // 800AE524
  cmps(c,0,(int32_t)c->r[5],0); // 800AE528
  c->r[31]=c->r[31]+0xFFFFE790u; // 800AE52C
  if (!crb(c,2)) { goto L_800AE5FC; } // 800AE530
  c->r[4]=R32(c->r[3]+0x00000394u); // 800AE534
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE538
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE53C
  fcmp(c,0,c->f[1],c->f[0]); // 800AE540
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800AE544
  if (!crb(c,2)) { goto L_800AE5FC; } // 800AE548
  c->r[0]=c->r[5]+0x00000001u; // 800AE54C
  c->r[29]=0u+0x803A0000u; // 800AE550
  c->r[29]=c->r[29]+0xFFFFC920u; // 800AE554
  W8(c->r[3]+0x00000029u,c->r[0]); // 800AE558
  c->r[28]=0u+0x80550000u; // 800AE55C
  c->r[5]=0u+0x00000000u; // 800AE560
  c->r[3]=c->r[28]+0xFFFFC848u; // 800AE564
  c->r[4]=c->r[29]+0x00000016u; // 800AE568
  c->r[6]=0u+0x00000000u; // 800AE56C
  c->lr=0x800AE574u; f_8018D3E4(c); // 800AE570
  c->r[27]=rotl(c->r[3],0)&0x000000FFu; // 800AE574
  cmpu(c,0,c->r[27],0x000000FFu); // 800AE578
  if (crb(c,2)) { goto L_800AE5F4; } // 800AE57C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800AE580
  c->r[4]=c->r[29]+0x0000001Au; // 800AE584
  c->r[5]=c->r[1]+0x00000060u; // 800AE588
  c->r[6]=0u+0x00000001u; // 800AE58C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AE590
  c->lr=0x800AE598u; f_80257018(c); // 800AE594
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE598
  c->r[4]=c->r[27]|c->r[27]; // 800AE59C
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE5A0
  c->r[3]=c->r[28]+0xFFFFC848u; // 800AE5A4
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE5A8
  c->r[5]=c->r[1]+0x00000044u; // 800AE5AC
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 800AE5B0
  c->r[6]=c->r[1]+0x00000038u; // 800AE5B4
  c->r[0]=R32(c->r[30]+0x00000060u); // 800AE5B8
  c->r[9]=R32(c->r[30]+0x00000064u); // 800AE5BC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800AE5C0
  c->r[8]=R32(c->r[1]+0x00000050u); // 800AE5C4
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800AE5C8
  c->r[7]=R32(c->r[1]+0x00000054u); // 800AE5CC
  W32(c->r[1]+0x00000038u,c->r[0]); // 800AE5D0
  c->r[0]=R32(c->r[1]+0x00000058u); // 800AE5D4
  W32(c->r[1]+0x0000003Cu,c->r[9]); // 800AE5D8
  c->r[9]=R32(c->r[30]+0x00000068u); // 800AE5DC
  W32(c->r[1]+0x00000040u,c->r[9]); // 800AE5E0
  W32(c->r[1]+0x00000044u,c->r[8]); // 800AE5E4
  W32(c->r[1]+0x00000048u,c->r[7]); // 800AE5E8
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800AE5EC
  c->lr=0x800AE5F4u; f_8018DBD0(c); // 800AE5F0
L_800AE5F4:;
  c->r[3]=c->r[30]|c->r[30]; // 800AE5F4
  c->lr=0x800AE5FCu; f_800AEC34(c); // 800AE5F8
L_800AE5FC:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800AE5FC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AE600
  c->lr=0x800AE608u; f_802501B0(c); // 800AE604
  cmps(c,0,(int32_t)c->r[3],0); // 800AE608
  if (crb(c,2)) { goto L_800AE75C; } // 800AE60C
  c->r[0]=R16(c->r[30]+0x00000074u); // 800AE610
  cmps(c,0,(int32_t)c->r[0],0); // 800AE614
  if (!crb(c,2)) { goto L_800AE648; } // 800AE618
  c->r[4]=c->r[31]+0x00000458u; // 800AE61C
  c->r[6]=R32(c->r[31]+0x00000458u); // 800AE620
  c->r[5]=R32(c->r[4]+0x00000004u); // 800AE624
  c->r[3]=c->r[30]|c->r[30]; // 800AE628
  c->r[0]=R32(c->r[4]+0x00000008u); // 800AE62C
  c->r[4]=c->r[1]+0x0000002Cu; // 800AE630
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800AE634
  W32(c->r[1]+0x00000030u,c->r[5]); // 800AE638
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AE63C
  c->lr=0x800AE644u; f_800ADAFC(c); // 800AE640
  goto L_800AE75C; // 800AE644
L_800AE648:;
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800AE648
  cmps(c,0,(int32_t)c->r[0],1); // 800AE64C
  if (crb(c,2)) { goto L_800AE6C0; } // 800AE650
  if (!crb(c,0)) { goto L_800AE664; } // 800AE654
  cmps(c,0,(int32_t)c->r[0],0); // 800AE658
  if (!crb(c,0)) { goto L_800AE670; } // 800AE65C
  goto L_800AE75C; // 800AE660
L_800AE664:;
  cmps(c,0,(int32_t)c->r[0],3); // 800AE664
  if (!crb(c,0)) { goto L_800AE75C; } // 800AE668
  goto L_800AE710; // 800AE66C
L_800AE670:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800AE670
  c->r[3]=c->r[30]|c->r[30]; // 800AE674
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE678
  c->r[4]=0u+0x00000000u; // 800AE67C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AE680
  c->r[5]=0u+0x00000001u; // 800AE684
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE688
  c->ctr=c->r[12]; // 800AE68C
  if (true) { c->lr=0x800AE694u; dispatch(c,c->ctr); } // 800AE690
  c->r[4]=c->r[31]+0x00000464u; // 800AE694
  c->r[6]=R32(c->r[31]+0x00000464u); // 800AE698
  c->r[5]=R32(c->r[4]+0x00000004u); // 800AE69C
  c->r[3]=c->r[30]|c->r[30]; // 800AE6A0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800AE6A4
  c->r[4]=c->r[1]+0x00000020u; // 800AE6A8
  W32(c->r[1]+0x00000020u,c->r[6]); // 800AE6AC
  W32(c->r[1]+0x00000024u,c->r[5]); // 800AE6B0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800AE6B4
  c->lr=0x800AE6BCu; f_800ADAFC(c); // 800AE6B8
  goto L_800AE75C; // 800AE6BC
L_800AE6C0:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800AE6C0
  c->r[3]=c->r[30]|c->r[30]; // 800AE6C4
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE6C8
  c->r[4]=0u+0x00000001u; // 800AE6CC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AE6D0
  c->r[5]=0u+0x00000001u; // 800AE6D4
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE6D8
  c->ctr=c->r[12]; // 800AE6DC
  if (true) { c->lr=0x800AE6E4u; dispatch(c,c->ctr); } // 800AE6E0
  c->r[4]=c->r[31]+0x00000470u; // 800AE6E4
  c->r[6]=R32(c->r[31]+0x00000470u); // 800AE6E8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800AE6EC
  c->r[3]=c->r[30]|c->r[30]; // 800AE6F0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800AE6F4
  c->r[4]=c->r[1]+0x00000014u; // 800AE6F8
  W32(c->r[1]+0x00000014u,c->r[6]); // 800AE6FC
  W32(c->r[1]+0x00000018u,c->r[5]); // 800AE700
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800AE704
  c->lr=0x800AE70Cu; f_800ADAFC(c); // 800AE708
  goto L_800AE75C; // 800AE70C
L_800AE710:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800AE710
  c->r[3]=c->r[30]|c->r[30]; // 800AE714
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE718
  c->r[4]=0u+0x00000001u; // 800AE71C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AE720
  c->r[5]=0u+0x00000001u; // 800AE724
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE728
  c->ctr=c->r[12]; // 800AE72C
  if (true) { c->lr=0x800AE734u; dispatch(c,c->ctr); } // 800AE730
  c->r[4]=c->r[31]+0x0000047Cu; // 800AE734
  c->r[6]=R32(c->r[31]+0x0000047Cu); // 800AE738
  c->r[5]=R32(c->r[4]+0x00000004u); // 800AE73C
  c->r[3]=c->r[30]|c->r[30]; // 800AE740
  c->r[0]=R32(c->r[4]+0x00000008u); // 800AE744
  c->r[4]=c->r[1]+0x00000008u; // 800AE748
  W32(c->r[1]+0x00000008u,c->r[6]); // 800AE74C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800AE750
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AE754
  c->lr=0x800AE75Cu; f_800ADAFC(c); // 800AE758
L_800AE75C:;
  c->r[11]=c->r[1]+0x000000B0u; // 800AE75C
  c->lr=0x800AE764u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AE760
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800AE764
  c->lr=c->r[0]; // 800AE768
  c->r[1]=c->r[1]+0x000000B0u; // 800AE76C
  return; // 800AE770
}

// fn_800AE774
void f_800AE774(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE774
  c->r[0]=c->lr; // 800AE778
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800AE77C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800AE780
  c->r[31]=c->r[3]|c->r[3]; // 800AE784
  W32(c->r[1]+0x00000098u,c->r[30]); // 800AE788
  W32(c->r[1]+0x00000094u,c->r[29]); // 800AE78C
  W32(c->r[1]+0x00000090u,c->r[28]); // 800AE790
  c->r[4]=R32(c->r[3]+0x00000394u); // 800AE794
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800AE798
  c->lr=0x800AE7A0u; f_802501B0(c); // 800AE79C
  cmps(c,0,(int32_t)c->r[3],0); // 800AE7A0
  if (crb(c,2)) { goto L_800AE810; } // 800AE7A4
  c->r[0]=R16(c->r[31]+0x00000074u); // 800AE7A8
  cmps(c,0,(int32_t)c->r[0],0); // 800AE7AC
  if (!crb(c,2)) { goto L_800AE7E0; } // 800AE7B0
  c->r[7]=0u+0x803D0000u; // 800AE7B4
  {uint32_t ea=c->r[7]+0xFFFFEC18u; c->r[6]=R32(ea); c->r[7]=ea;} // 800AE7B8
  c->r[3]=c->r[31]|c->r[31]; // 800AE7BC
  c->r[4]=c->r[1]+0x0000002Cu; // 800AE7C0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800AE7C4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800AE7C8
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800AE7CC
  W32(c->r[1]+0x00000030u,c->r[5]); // 800AE7D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AE7D4
  c->lr=0x800AE7DCu; f_800ADAFC(c); // 800AE7D8
  goto L_800AE8E4; // 800AE7DC
L_800AE7E0:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AE7E0
  c->r[3]=c->r[31]|c->r[31]; // 800AE7E4
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE7E8
  c->r[4]=0u+0x00000004u; // 800AE7EC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AE7F0
  c->r[5]=0u+0x00000000u; // 800AE7F4
  c->f[2]=c->f[1]; // 800AE7F8
  c->ctr=c->r[12]; // 800AE7FC
  if (true) { c->lr=0x800AE804u; dispatch(c,c->ctr); } // 800AE800
  c->r[0]=0u+0x00000000u; // 800AE804
  W8(c->r[31]+0x00000029u,c->r[0]); // 800AE808
  goto L_800AE8E4; // 800AE80C
L_800AE810:;
  c->r[4]=R8(c->r[31]+0x00000029u); // 800AE810
  cmps(c,0,(int32_t)c->r[4],0); // 800AE814
  if (!crb(c,2)) { goto L_800AE8E4; } // 800AE818
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AE81C
  {uint32_t ea=c->r[2]+0xFFFF991Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE820
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE824
  fcmp(c,0,c->f[1],c->f[0]); // 800AE828
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800AE82C
  if (!crb(c,2)) { goto L_800AE8E4; } // 800AE830
  c->r[0]=c->r[4]+0x00000001u; // 800AE834
  c->r[30]=0u+0x803A0000u; // 800AE838
  c->r[30]=c->r[30]+0xFFFFC920u; // 800AE83C
  c->r[29]=0u+0x80550000u; // 800AE840
  W8(c->r[31]+0x00000029u,c->r[0]); // 800AE844
  c->r[3]=c->r[29]+0xFFFFC848u; // 800AE848
  c->r[4]=c->r[30]+0x00000016u; // 800AE84C
  c->r[5]=0u+0x00000000u; // 800AE850
  c->r[6]=0u+0x00000000u; // 800AE854
  c->lr=0x800AE85Cu; f_8018D3E4(c); // 800AE858
  c->r[28]=rotl(c->r[3],0)&0x000000FFu; // 800AE85C
  cmpu(c,0,c->r[28],0x000000FFu); // 800AE860
  if (crb(c,2)) { goto L_800AE8DC; } // 800AE864
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AE868
  c->r[4]=c->r[30]+0x0000001Au; // 800AE86C
  c->r[5]=c->r[1]+0x00000060u; // 800AE870
  c->r[6]=0u+0x00000001u; // 800AE874
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AE878
  c->lr=0x800AE880u; f_80257018(c); // 800AE87C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE880
  c->r[4]=c->r[28]|c->r[28]; // 800AE884
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE888
  c->r[3]=c->r[29]+0xFFFFC848u; // 800AE88C
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE890
  c->r[5]=c->r[1]+0x00000020u; // 800AE894
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 800AE898
  c->r[6]=c->r[1]+0x00000014u; // 800AE89C
  c->r[0]=R32(c->r[31]+0x00000060u); // 800AE8A0
  c->r[9]=R32(c->r[31]+0x00000064u); // 800AE8A4
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800AE8A8
  c->r[8]=R32(c->r[1]+0x00000050u); // 800AE8AC
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800AE8B0
  c->r[7]=R32(c->r[1]+0x00000054u); // 800AE8B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE8B8
  c->r[0]=R32(c->r[1]+0x00000058u); // 800AE8BC
  W32(c->r[1]+0x00000018u,c->r[9]); // 800AE8C0
  c->r[9]=R32(c->r[31]+0x00000068u); // 800AE8C4
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800AE8C8
  W32(c->r[1]+0x00000020u,c->r[8]); // 800AE8CC
  W32(c->r[1]+0x00000024u,c->r[7]); // 800AE8D0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800AE8D4
  c->lr=0x800AE8DCu; f_8018DBD0(c); // 800AE8D8
L_800AE8DC:;
  c->r[3]=c->r[31]|c->r[31]; // 800AE8DC
  c->lr=0x800AE8E4u; f_800AEC34(c); // 800AE8E0
L_800AE8E4:;
  c->r[3]=c->r[31]|c->r[31]; // 800AE8E4
  c->r[4]=c->r[1]+0x00000044u; // 800AE8E8
  c->lr=0x800AE8F0u; f_800AECEC(c); // 800AE8EC
  cmps(c,0,(int32_t)c->r[3],0); // 800AE8F0
  if (!crb(c,2)) { goto L_800AE924; } // 800AE8F4
  c->r[7]=0u+0x803D0000u; // 800AE8F8
  {uint32_t ea=c->r[7]+0xFFFFEC24u; c->r[6]=R32(ea); c->r[7]=ea;} // 800AE8FC
  c->r[3]=c->r[31]|c->r[31]; // 800AE900
  c->r[4]=c->r[1]+0x00000008u; // 800AE904
  c->r[5]=R32(c->r[7]+0x00000004u); // 800AE908
  c->r[0]=R32(c->r[7]+0x00000008u); // 800AE90C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800AE910
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800AE914
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AE918
  c->lr=0x800AE920u; f_800ADAFC(c); // 800AE91C
  goto L_800AE99C; // 800AE920
L_800AE924:;
  c->r[3]=c->r[1]+0x00000044u; // 800AE924
  c->r[4]=c->r[31]+0x0000002Cu; // 800AE928
  c->r[5]=c->r[1]+0x00000038u; // 800AE92C
  c->lr=0x800AE934u; f_80296A70(c); // 800AE930
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE934
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE938
  c->lr=0x800AE940u; f_8005C22C(c); // 800AE93C
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE940
  fcmp(c,0,c->f[1],c->f[0]); // 800AE944
  if (!crb(c,1)) { goto L_800AE960; } // 800AE948
  {uint32_t ea=c->r[2]+0xFFFF9900u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE94C
  {uint32_t ea=c->r[2]+0xFFFF9904u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE950
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800AE954
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800AE958
  goto L_800AE978; // 800AE95C
L_800AE960:;
  {uint32_t ea=c->r[2]+0xFFFF9900u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE960
  {uint32_t ea=c->r[2]+0xFFFF9904u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE964
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800AE968
  {uint32_t ea=c->r[2]+0xFFFF9908u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE96C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800AE970
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800AE974
L_800AE978:;
  {uint32_t ea=c->r[2]+0xFFFF9918u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE978
  c->r[3]=c->r[31]|c->r[31]; // 800AE97C
  c->lr=0x800AE984u; f_801F6A20(c); // 800AE980
  c->r[3]=c->r[31]+0x0000002Cu; // 800AE984
  c->r[4]=c->r[1]+0x00000044u; // 800AE988
  c->lr=0x800AE990u; f_800361A0(c); // 800AE98C
  c->r[3]=c->r[31]|c->r[31]; // 800AE990
  c->r[4]=0u+0x00000000u; // 800AE994
  c->lr=0x800AE99Cu; f_801F7C00(c); // 800AE998
L_800AE99C:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800AE99C
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800AE9A0
  c->r[30]=R32(c->r[1]+0x00000098u); // 800AE9A4
  c->r[29]=R32(c->r[1]+0x00000094u); // 800AE9A8
  c->r[28]=R32(c->r[1]+0x00000090u); // 800AE9AC
  c->lr=c->r[0]; // 800AE9B0
  c->r[1]=c->r[1]+0x000000A0u; // 800AE9B4
  return; // 800AE9B8
}

// fn_800AE9BC
void f_800AE9BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE9BC
  c->r[0]=c->lr; // 800AE9C0
  c->r[4]=0u+0x00000003u; // 800AE9C4
  c->r[5]=0u+0x00000016u; // 800AE9C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AE9CC
  c->r[6]=0u+0x00000001u; // 800AE9D0
  c->r[7]=0u+0x00000001u; // 800AE9D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AE9D8
  c->r[31]=c->r[3]|c->r[3]; // 800AE9DC
  c->lr=0x800AE9E4u; f_8017900C(c); // 800AE9E0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AE9E4
  c->r[3]=c->r[31]|c->r[31]; // 800AE9E8
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE9EC
  c->r[4]=0u+0x00000005u; // 800AE9F0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AE9F4
  c->r[5]=0u+0x00000000u; // 800AE9F8
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE9FC
  c->ctr=c->r[12]; // 800AEA00
  if (true) { c->lr=0x800AEA08u; dispatch(c,c->ctr); } // 800AEA04
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AEA08
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AEA0C
  c->lr=0x800AEA14u; f_802501B0(c); // 800AEA10
  c->r[7]=0u+0x803D0000u; // 800AEA14
  {uint32_t ea=c->r[7]+0xFFFFEC30u; c->r[6]=R32(ea); c->r[7]=ea;} // 800AEA18
  c->r[3]=c->r[31]|c->r[31]; // 800AEA1C
  c->r[4]=c->r[1]+0x00000008u; // 800AEA20
  c->r[5]=R32(c->r[7]+0x00000004u); // 800AEA24
  c->r[0]=R32(c->r[7]+0x00000008u); // 800AEA28
  W32(c->r[1]+0x00000008u,c->r[6]); // 800AEA2C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800AEA30
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AEA34
  c->lr=0x800AEA3Cu; f_800ADAFC(c); // 800AEA38
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AEA3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AEA40
  c->lr=c->r[0]; // 800AEA44
  c->r[1]=c->r[1]+0x00000020u; // 800AEA48
  return; // 800AEA4C
}

// fn_800AEA50
void f_800AEA50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEA50
  c->r[0]=c->lr; // 800AEA54
  W32(c->r[1]+0x00000074u,c->r[0]); // 800AEA58
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800AEA5C
  W32(c->r[1]+0x00000068u,c->r[30]); // 800AEA60
  W32(c->r[1]+0x00000064u,c->r[29]); // 800AEA64
  W32(c->r[1]+0x00000060u,c->r[28]); // 800AEA68
  c->r[28]=c->r[3]|c->r[3]; // 800AEA6C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800AEA70
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800AEA74
  c->lr=0x800AEA7Cu; f_802501B0(c); // 800AEA78
  cmps(c,0,(int32_t)c->r[3],0); // 800AEA7C
  if (crb(c,2)) { goto L_800AEB58; } // 800AEA80
  c->r[31]=0u+0x803A0000u; // 800AEA84
  c->r[30]=0u+0x80550000u; // 800AEA88
  c->r[31]=c->r[31]+0xFFFFC920u; // 800AEA8C
  c->r[5]=0u+0x00000000u; // 800AEA90
  c->r[3]=c->r[30]+0xFFFFC848u; // 800AEA94
  c->r[6]=0u+0x00000000u; // 800AEA98
  c->r[4]=c->r[31]+0x00000009u; // 800AEA9C
  c->lr=0x800AEAA4u; f_8018D3E4(c); // 800AEAA0
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 800AEAA4
  cmpu(c,0,c->r[29],0x000000FFu); // 800AEAA8
  if (crb(c,2)) { goto L_800AEB24; } // 800AEAAC
  c->r[3]=R32(c->r[28]+0x00000394u); // 800AEAB0
  c->r[4]=c->r[31]+0x0000000Du; // 800AEAB4
  c->r[5]=c->r[1]+0x00000030u; // 800AEAB8
  c->r[6]=0u+0x00000001u; // 800AEABC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AEAC0
  c->lr=0x800AEAC8u; f_80257018(c); // 800AEAC4
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AEAC8
  c->r[4]=c->r[29]|c->r[29]; // 800AEACC
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEAD0
  c->r[3]=c->r[30]+0xFFFFC848u; // 800AEAD4
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEAD8
  c->r[5]=c->r[1]+0x00000014u; // 800AEADC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 800AEAE0
  c->r[6]=c->r[1]+0x00000008u; // 800AEAE4
  c->r[0]=R32(c->r[28]+0x00000060u); // 800AEAE8
  c->r[9]=R32(c->r[28]+0x00000064u); // 800AEAEC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 800AEAF0
  c->r[8]=R32(c->r[1]+0x00000020u); // 800AEAF4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800AEAF8
  c->r[7]=R32(c->r[1]+0x00000024u); // 800AEAFC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800AEB00
  c->r[0]=R32(c->r[1]+0x00000028u); // 800AEB04
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 800AEB08
  c->r[9]=R32(c->r[28]+0x00000068u); // 800AEB0C
  W32(c->r[1]+0x00000010u,c->r[9]); // 800AEB10
  W32(c->r[1]+0x00000014u,c->r[8]); // 800AEB14
  W32(c->r[1]+0x00000018u,c->r[7]); // 800AEB18
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800AEB1C
  c->lr=0x800AEB24u; f_8018DBD0(c); // 800AEB20
L_800AEB24:;
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800AEB24
  c->r[3]=c->r[28]|c->r[28]; // 800AEB28
  c->r[12]=R32(c->r[12]+0x00000018u); // 800AEB2C
  c->ctr=c->r[12]; // 800AEB30
  if (true) { c->lr=0x800AEB38u; dispatch(c,c->ctr); } // 800AEB34
  cmps(c,0,(int32_t)c->r[28],0); // 800AEB38
  if (crb(c,2)) { goto L_800AEB58; } // 800AEB3C
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800AEB40
  c->r[3]=c->r[28]|c->r[28]; // 800AEB44
  c->r[4]=0u+0x00000001u; // 800AEB48
  c->r[12]=R32(c->r[12]+0x00000008u); // 800AEB4C
  c->ctr=c->r[12]; // 800AEB50
  if (true) { c->lr=0x800AEB58u; dispatch(c,c->ctr); } // 800AEB54
L_800AEB58:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800AEB58
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800AEB5C
  c->r[30]=R32(c->r[1]+0x00000068u); // 800AEB60
  c->r[29]=R32(c->r[1]+0x00000064u); // 800AEB64
  c->r[28]=R32(c->r[1]+0x00000060u); // 800AEB68
  c->lr=c->r[0]; // 800AEB6C
  c->r[1]=c->r[1]+0x00000070u; // 800AEB70
  return; // 800AEB74
}

// fn_800AEB78
void f_800AEB78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEB78
  c->r[0]=c->lr; // 800AEB7C
  cmps(c,0,(int32_t)c->r[3],0); // 800AEB80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AEB84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AEB88
  c->r[31]=c->r[4]|c->r[4]; // 800AEB8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AEB90
  c->r[30]=c->r[3]|c->r[3]; // 800AEB94
  if (crb(c,2)) { goto L_800AEBB4; } // 800AEB98
  c->r[4]=0u+0x00000000u; // 800AEB9C
  c->lr=0x800AEBA4u; f_8026A06C(c); // 800AEBA0
  cmps(c,0,(int32_t)c->r[31],0); // 800AEBA4
  if (!crb(c,1)) { goto L_800AEBB4; } // 800AEBA8
  c->r[3]=c->r[30]|c->r[30]; // 800AEBAC
  c->lr=0x800AEBB4u; f_8026A268(c); // 800AEBB0
L_800AEBB4:;
  c->r[3]=c->r[30]|c->r[30]; // 800AEBB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AEBB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AEBBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AEBC0
  c->lr=c->r[0]; // 800AEBC4
  c->r[1]=c->r[1]+0x00000010u; // 800AEBC8
  return; // 800AEBCC
}

// fn_800AEBD0
void f_800AEBD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEBD0
  c->r[0]=c->lr; // 800AEBD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AEBD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AEBDC
  c->r[31]=c->r[3]|c->r[3]; // 800AEBE0
  c->r[3]=c->r[1]+0x00000008u; // 800AEBE4
  c->r[4]=c->r[31]+0x0000002Cu; // 800AEBE8
  c->lr=0x800AEBF0u; f_800361A0(c); // 800AEBEC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEBF0
  c->r[3]=0u+0x805D0000u; // 800AEBF4
  {uint32_t ea=c->r[2]+0xFFFF9920u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEBF8
  c->r[4]=c->r[31]|c->r[31]; // 800AEBFC
  c->r[3]=c->r[3]+0x00003F6Cu; // 800AEC00
  c->r[5]=c->r[1]+0x00000008u; // 800AEC04
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800AEC08
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800AEC0C
  c->lr=0x800AEC14u; f_801FEB2C(c); // 800AEC10
  c->r[0]=0u-c->r[3]; // 800AEC14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AEC18
  c->r[0]=c->r[0]|c->r[3]; // 800AEC1C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800AEC20
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AEC24
  c->lr=c->r[0]; // 800AEC28
  c->r[1]=c->r[1]+0x00000020u; // 800AEC2C
  return; // 800AEC30
}

// fn_800AEC34
void f_800AEC34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEC34
  c->r[0]=c->lr; // 800AEC38
  c->r[4]=0u+0x803A0000u; // 800AEC3C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800AEC40
  c->r[4]=c->r[4]+0xFFFFC920u; // 800AEC44
  c->r[5]=c->r[1]+0x00000020u; // 800AEC48
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800AEC4C
  c->r[31]=c->r[3]|c->r[3]; // 800AEC50
  c->r[4]=c->r[4]+0x0000000Du; // 800AEC54
  c->r[6]=R32(c->r[3]+0x00000394u); // 800AEC58
  c->r[3]=R32(c->r[6]+0x0000010Cu); // 800AEC5C
  c->r[6]=0u+0x00000001u; // 800AEC60
  c->lr=0x800AEC68u; f_80257018(c); // 800AEC64
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEC68
  c->r[4]=c->r[1]+0x00000008u; // 800AEC6C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEC70
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AEC74
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800AEC78
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEC7C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 800AEC80
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800AEC84
  c->r[5]=R32(c->r[1]+0x00000014u); // 800AEC88
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800AEC8C
  c->r[3]=R32(c->r[1]+0x00000018u); // 800AEC90
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800AEC94
  W32(c->r[1]+0x00000008u,c->r[5]); // 800AEC98
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800AEC9C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AECA0
  c->r[3]=R8(c->r[31]+0x0000007Eu); // 800AECA4
  c->lr=0x800AECACu; f_801F4ADC(c); // 800AECA8
  c->r[3]=R16(c->r[31]+0x00000074u); // 800AECAC
  cmpu(c,0,c->r[3],0x0000FFFFu); // 800AECB0
  if (crb(c,2)) { goto L_800AECC0; } // 800AECB4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800AECB8
  W16(c->r[31]+0x00000074u,c->r[0]); // 800AECBC
L_800AECC0:;
  c->r[3]=c->r[31]|c->r[31]; // 800AECC0
  c->r[4]=0u+0x00000003u; // 800AECC4
  c->r[5]=0u+0x00000015u; // 800AECC8
  c->r[6]=0u+0x00000001u; // 800AECCC
  c->r[7]=0u+0x00000001u; // 800AECD0
  c->lr=0x800AECD8u; f_8017900C(c); // 800AECD4
  c->r[0]=R32(c->r[1]+0x00000064u); // 800AECD8
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800AECDC
  c->lr=c->r[0]; // 800AECE0
  c->r[1]=c->r[1]+0x00000060u; // 800AECE4
  return; // 800AECE8
}

// fn_800AECEC
void f_800AECEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AECEC
  c->r[0]=c->lr; // 800AECF0
  W32(c->r[1]+0x00000134u,c->r[0]); // 800AECF4
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 800AECF8
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 800AECFC
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 800AED00
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 800AED04
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[29]);} // 800AED08
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,29,ea,0,0);} // 800AED0C
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[28]);} // 800AED10
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,28,ea,0,0);} // 800AED14
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[27]);} // 800AED18
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,27,ea,0,0);} // 800AED1C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[26]);} // 800AED20
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,26,ea,0,0);} // 800AED24
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[25]);} // 800AED28
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,25,ea,0,0);} // 800AED2C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[24]);} // 800AED30
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,24,ea,0,0);} // 800AED34
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[23]);} // 800AED38
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,23,ea,0,0);} // 800AED3C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[22]);} // 800AED40
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,22,ea,0,0);} // 800AED44
  c->r[11]=c->r[1]+0x00000090u; // 800AED48
  c->lr=0x800AED50u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AED4C
  c->r[5]=R32(c->r[3]+0x00000394u); // 800AED50
  c->r[28]=c->r[3]|c->r[3]; // 800AED54
  c->r[29]=c->r[4]|c->r[4]; // 800AED58
  c->r[4]=c->r[1]+0x0000005Cu; // 800AED5C
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800AED60
  c->lr=0x800AED68u; f_80250B4C(c); // 800AED64
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 800AED68
  c->r[3]=0u+0x803D0000u; // 800AED6C
  c->r[0]=R32(c->r[28]+0x00000030u); // 800AED70
  c->r[31]=c->r[3]+0xFFFFE790u; // 800AED74
  {uint32_t ea=c->r[1]+0x00000064u; c->f[24]=c->ps1[24]=RF32(ea);} // 800AED78
  c->r[30]=0u+0x00000001u; // 800AED7C
  W32(c->r[1]+0x00000038u,c->r[4]); // 800AED80
  c->r[26]=0u+0x43300000u; // 800AED84
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[25]=RF64(ea);} // 800AED88
  c->r[27]=0u+0x00000000u; // 800AED8C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800AED90
  {uint32_t ea=c->r[2]+0xFFFF9924u; c->f[26]=c->ps1[26]=RF32(ea);} // 800AED94
  c->r[0]=R32(c->r[28]+0x00000034u); // 800AED98
  {uint32_t ea=c->r[2]+0xFFFF992Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 800AED9C
  W32(c->r[1]+0x00000040u,c->r[0]); // 800AEDA0
  {uint32_t ea=c->r[2]+0xFFFF9928u; c->f[28]=c->ps1[28]=RF32(ea);} // 800AEDA4
  {uint32_t ea=c->r[2]+0xFFFF9910u; c->f[29]=c->ps1[29]=RF32(ea);} // 800AEDA8
  {uint32_t ea=c->r[2]+0xFFFF9930u; c->f[30]=c->ps1[30]=RF32(ea);} // 800AEDAC
L_800AEDB0:;
  c->r[0]=R8(c->r[28]+0x0000007Cu); // 800AEDB0
  cmps(c,0,(int32_t)c->r[0],0); // 800AEDB4
  if (!crb(c,2)) { goto L_800AEF48; } // 800AEDB8
  c->r[0]=R8(c->r[28]+0x00000079u); // 800AEDBC
  W8(c->r[28]+0x0000007Cu,c->r[30]); // 800AEDC0
  cmpu(c,0,c->r[0],0x000000FFu); // 800AEDC4
  if (!crb(c,2)) { goto L_800AEDDC; } // 800AEDC8
  c->r[3]=c->r[1]+0x0000002Cu; // 800AEDCC
  c->r[4]=c->r[28]+0x0000002Cu; // 800AEDD0
  c->lr=0x800AEDD8u; f_800361A0(c); // 800AEDD4
  goto L_800AEE00; // 800AEDD8
L_800AEDDC:;
  c->r[4]=R8(c->r[28]+0x00000077u); // 800AEDDC
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 800AEDE0
  c->r[3]=c->r[1]+0x0000002Cu; // 800AEDE4
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800AEDE8
  c->r[4]=c->r[31]+c->r[4]; // 800AEDEC
  c->r[4]=R32(c->r[4]+0x00000004u); // 800AEDF0
  c->r[4]=c->r[4]+c->r[0]; // 800AEDF4
  c->r[4]=c->r[4]+0x00000004u; // 800AEDF8
  c->lr=0x800AEE00u; f_800361A0(c); // 800AEDFC
L_800AEE00:;
  c->r[4]=R8(c->r[28]+0x00000077u); // 800AEE00
  c->r[3]=c->r[1]+0x00000020u; // 800AEE04
  c->r[0]=R8(c->r[28]+0x00000078u); // 800AEE08
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800AEE0C
  c->r[4]=c->r[31]+c->r[4]; // 800AEE10
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800AEE14
  c->r[25]=R32(c->r[4]+0x00000004u); // 800AEE18
  c->r[25]=c->r[25]+c->r[0]; // 800AEE1C
  c->r[4]=c->r[25]+0x00000004u; // 800AEE20
  c->lr=0x800AEE28u; f_800361A0(c); // 800AEE24
  c->r[0]=R32(c->r[25]+0x00000000u); // 800AEE28
  c->r[3]=c->r[1]+0x00000014u; // 800AEE2C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800AEE30
  c->r[25]=c->r[25]+c->r[0]; // 800AEE34
  c->r[4]=c->r[25]+0x00000004u; // 800AEE38
  c->lr=0x800AEE40u; f_800361A0(c); // 800AEE3C
  c->r[0]=R8(c->r[28]+0x0000007Au); // 800AEE40
  cmpu(c,0,c->r[0],0x000000FFu); // 800AEE44
  if (!crb(c,2)) { goto L_800AEE5C; } // 800AEE48
  c->r[3]=c->r[1]+0x00000008u; // 800AEE4C
  c->r[4]=c->r[28]+0x0000002Cu; // 800AEE50
  c->lr=0x800AEE58u; f_800361A0(c); // 800AEE54
  goto L_800AEE80; // 800AEE58
L_800AEE5C:;
  c->r[4]=R8(c->r[28]+0x00000077u); // 800AEE5C
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 800AEE60
  c->r[3]=c->r[1]+0x00000008u; // 800AEE64
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800AEE68
  c->r[4]=c->r[31]+c->r[4]; // 800AEE6C
  c->r[4]=R32(c->r[4]+0x00000004u); // 800AEE70
  c->r[4]=c->r[4]+c->r[0]; // 800AEE74
  c->r[4]=c->r[4]+0x00000004u; // 800AEE78
  c->lr=0x800AEE80u; f_800361A0(c); // 800AEE7C
L_800AEE80:;
  c->r[3]=c->r[1]+0x00000020u; // 800AEE80
  c->r[4]=c->r[1]+0x00000008u; // 800AEE84
  c->r[5]=c->r[1]+0x0000005Cu; // 800AEE88
  c->lr=0x800AEE90u; f_80296A70(c); // 800AEE8C
  c->r[3]=c->r[1]+0x00000014u; // 800AEE90
  c->r[4]=c->r[1]+0x0000002Cu; // 800AEE94
  c->r[5]=c->r[1]+0x00000050u; // 800AEE98
  c->lr=0x800AEEA0u; f_80296A70(c); // 800AEE9C
  c->r[0]=R8(c->r[28]+0x0000007Bu); // 800AEEA0
  c->r[3]=c->r[1]+0x0000002Cu; // 800AEEA4
  W32(c->r[1]+0x00000068u,c->r[26]); // 800AEEA8
  c->r[4]=c->r[28]+0x00000080u; // 800AEEAC
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800AEEB0
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 800AEEB4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[25]); // 800AEEB8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[26]); // 800AEEBC
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[3]); // 800AEEC0
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[4]); // 800AEEC4
  c->f[2]=c->ps1[2]=S(c->f[27]*c->f[4]); // 800AEEC8
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[28],c->f[4],-c->f[5])); // 800AEECC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[28],c->f[5],-c->f[2])); // 800AEED0
  c->f[31]=c->ps1[31]=S(std::fma(c->f[30],c->f[5],c->f[2])); // 800AEED4
  c->f[23]=c->ps1[23]=S(c->f[3]+c->f[0]); // 800AEED8
  c->f[1]=c->ps1[1]=S(c->f[29]+c->f[1]); // 800AEEDC
  c->f[22]=c->ps1[22]=S(c->f[5]-c->f[4]); // 800AEEE0
  c->lr=0x800AEEE8u; f_80296A94(c); // 800AEEE4
  c->f[1]=c->f[31]; // 800AEEE8
  c->r[3]=c->r[1]+0x00000020u; // 800AEEEC
  c->r[4]=c->r[1]+0x00000044u; // 800AEEF0
  c->lr=0x800AEEF8u; f_80296A94(c); // 800AEEF4
  c->r[3]=c->r[28]+0x00000080u; // 800AEEF8
  c->r[4]=c->r[1]+0x00000044u; // 800AEEFC
  c->r[5]=c->r[3]|c->r[3]; // 800AEF00
  c->lr=0x800AEF08u; f_80296A4C(c); // 800AEF04
  c->f[1]=c->f[23]; // 800AEF08
  c->r[3]=c->r[1]+0x0000005Cu; // 800AEF0C
  c->r[4]=c->r[1]+0x00000044u; // 800AEF10
  c->lr=0x800AEF18u; f_80296A94(c); // 800AEF14
  c->r[3]=c->r[28]+0x00000080u; // 800AEF18
  c->r[4]=c->r[1]+0x00000044u; // 800AEF1C
  c->r[5]=c->r[3]|c->r[3]; // 800AEF20
  c->lr=0x800AEF28u; f_80296A4C(c); // 800AEF24
  c->f[1]=c->f[22]; // 800AEF28
  c->r[3]=c->r[1]+0x00000050u; // 800AEF2C
  c->r[4]=c->r[1]+0x00000044u; // 800AEF30
  c->lr=0x800AEF38u; f_80296A94(c); // 800AEF34
  c->r[3]=c->r[28]+0x00000080u; // 800AEF38
  c->r[4]=c->r[1]+0x00000044u; // 800AEF3C
  c->r[5]=c->r[3]|c->r[3]; // 800AEF40
  c->lr=0x800AEF48u; f_80296A4C(c); // 800AEF44
L_800AEF48:;
  c->r[3]=c->r[28]+0x00000080u; // 800AEF48
  c->r[4]=c->r[1]+0x00000038u; // 800AEF4C
  c->r[5]=c->r[1]+0x0000005Cu; // 800AEF50
  c->lr=0x800AEF58u; f_80296A70(c); // 800AEF54
  c->r[3]=c->r[1]+0x0000005Cu; // 800AEF58
  c->lr=0x800AEF60u; f_80296B0C(c); // 800AEF5C
  c->f[31]=c->f[1]; // 800AEF60
  fcmp(c,0,c->f[1],c->f[24]); // 800AEF64
  if (!crb(c,0)) { goto L_800AEFE4; } // 800AEF68
  c->r[3]=c->r[1]+0x00000038u; // 800AEF6C
  c->r[4]=c->r[28]+0x00000080u; // 800AEF70
  c->lr=0x800AEF78u; f_800361A0(c); // 800AEF74
  c->r[3]=R8(c->r[28]+0x0000007Bu); // 800AEF78
  c->f[24]=c->ps1[24]=S(c->f[24]-c->f[31]); // 800AEF7C
  W8(c->r[28]+0x0000007Cu,c->r[27]); // 800AEF80
  cmpu(c,0,c->r[3],0x00000020u); // 800AEF84
  if (!crb(c,2)) { goto L_800AEFD8; } // 800AEF88
  c->r[0]=R8(c->r[28]+0x00000077u); // 800AEF8C
  c->r[4]=R8(c->r[28]+0x00000078u); // 800AEF90
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800AEF94
  W8(c->r[28]+0x0000007Bu,c->r[30]); // 800AEF98
  c->r[5]=c->r[31]+c->r[0]; // 800AEF9C
  c->r[3]=rotl(c->r[4],4)&0xFFFFFFF0u; // 800AEFA0
  c->r[5]=R32(c->r[5]+0x00000004u); // 800AEFA4
  c->r[0]=R32(c->r[5]+c->r[3]); // 800AEFA8
  cmps(c,0,(int32_t)c->r[0],0); // 800AEFAC
  if (!crb(c,2)) { goto L_800AEFBC; } // 800AEFB0
  c->r[3]=0u+0x00000000u; // 800AEFB4
  goto L_800AF014; // 800AEFB8
L_800AEFBC:;
  c->r[0]=R8(c->r[28]+0x00000079u); // 800AEFBC
  W8(c->r[28]+0x0000007Au,c->r[0]); // 800AEFC0
  W8(c->r[28]+0x00000079u,c->r[4]); // 800AEFC4
  c->r[0]=R32(c->r[5]+c->r[3]); // 800AEFC8
  c->r[0]=c->r[4]+c->r[0]; // 800AEFCC
  W8(c->r[28]+0x00000078u,c->r[0]); // 800AEFD0
  IRQCHK(c); goto L_800AEDB0; // 800AEFD4
L_800AEFD8:;
  c->r[0]=c->r[3]+0x00000001u; // 800AEFD8
  W8(c->r[28]+0x0000007Bu,c->r[0]); // 800AEFDC
  IRQCHK(c); goto L_800AEDB0; // 800AEFE0
L_800AEFE4:;
  c->r[3]=c->r[1]+0x0000005Cu; // 800AEFE4
  c->r[4]=c->r[3]|c->r[3]; // 800AEFE8
  c->lr=0x800AEFF0u; f_80296AB0(c); // 800AEFEC
  c->f[1]=c->f[24]; // 800AEFF0
  c->r[3]=c->r[1]+0x0000005Cu; // 800AEFF4
  c->r[4]=c->r[3]|c->r[3]; // 800AEFF8
  c->lr=0x800AF000u; f_80296A94(c); // 800AEFFC
  c->r[5]=c->r[29]|c->r[29]; // 800AF000
  c->r[3]=c->r[1]+0x00000038u; // 800AF004
  c->r[4]=c->r[1]+0x0000005Cu; // 800AF008
  c->lr=0x800AF010u; f_80296A4C(c); // 800AF00C
  c->r[3]=0u+0x00000001u; // 800AF010
L_800AF014:;
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 800AF014
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 800AF018
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,30,ea,0,0);} // 800AF01C
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 800AF020
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,29,ea,0,0);} // 800AF024
  {uint32_t ea=c->r[1]+0x00000100u; c->f[29]=RF64(ea);} // 800AF028
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,28,ea,0,0);} // 800AF02C
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[28]=RF64(ea);} // 800AF030
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,27,ea,0,0);} // 800AF034
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[27]=RF64(ea);} // 800AF038
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,26,ea,0,0);} // 800AF03C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[26]=RF64(ea);} // 800AF040
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,25,ea,0,0);} // 800AF044
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[25]=RF64(ea);} // 800AF048
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,24,ea,0,0);} // 800AF04C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[24]=RF64(ea);} // 800AF050
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,23,ea,0,0);} // 800AF054
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[23]=RF64(ea);} // 800AF058
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,22,ea,0,0);} // 800AF05C
  c->r[11]=c->r[1]+0x00000090u; // 800AF060
  {uint32_t ea=c->r[1]+0x00000090u; c->f[22]=RF64(ea);} // 800AF064
  c->lr=0x800AF06Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AF068
  c->r[0]=R32(c->r[1]+0x00000134u); // 800AF06C
  c->lr=c->r[0]; // 800AF070
  c->r[1]=c->r[1]+0x00000130u; // 800AF074
  return; // 800AF078
}

// fn_800AF07C
void f_800AF07C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF07C
  c->r[0]=c->lr; // 800AF080
  W32(c->r[1]+0x00000084u,c->r[0]); // 800AF084
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800AF088
  W32(c->r[1]+0x00000078u,c->r[30]); // 800AF08C
  c->r[30]=c->r[3]|c->r[3]; // 800AF090
  c->r[3]=c->r[1]+0x00000008u; // 800AF094
  c->r[4]=c->r[30]+0x0000002Cu; // 800AF098
  c->lr=0x800AF0A0u; f_800361A0(c); // 800AF09C
  c->r[31]=0u+0x80550000u; // 800AF0A0
  {uint32_t ea=c->r[2]+0xFFFF9940u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF0A4
  c->r[31]=c->r[31]+0x00003D60u; // 800AF0A8
  {uint32_t ea=c->r[2]+0xFFFF9918u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF0AC
  c->r[5]=c->r[30]|c->r[30]; // 800AF0B0
  c->r[6]=c->r[1]+0x00000008u; // 800AF0B4
  c->r[3]=c->r[31]+0x00000010u; // 800AF0B8
  c->r[7]=c->r[1]+0x00000018u; // 800AF0BC
  c->r[4]=0u+0x000001FFu; // 800AF0C0
  c->lr=0x800AF0C8u; f_80226ACC(c); // 800AF0C4
  c->r[3]=c->r[31]+0x00000010u; // 800AF0C8
  c->r[4]=c->r[1]+0x00000018u; // 800AF0CC
  c->lr=0x800AF0D4u; f_80226D68(c); // 800AF0D0
  c->r[0]=R32(c->r[1]+0x00000084u); // 800AF0D4
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800AF0D8
  c->r[30]=R32(c->r[1]+0x00000078u); // 800AF0DC
  c->lr=c->r[0]; // 800AF0E0
  c->r[1]=c->r[1]+0x00000080u; // 800AF0E4
  return; // 800AF0E8
}

// fn_800AF0EC
void f_800AF0EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF0EC
  c->r[0]=c->lr; // 800AF0F0
  c->r[4]=0u+0x00000000u; // 800AF0F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AF0F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AF0FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AF100
  W32(c->r[1]+0x00000014u,c->r[29]); // 800AF104
  c->r[29]=c->r[3]|c->r[3]; // 800AF108
  c->lr=0x800AF110u; f_801F57D0(c); // 800AF10C
  c->r[3]=c->r[29]|c->r[29]; // 800AF110
  c->r[4]=0u+0x00000001u; // 800AF114
  c->lr=0x800AF11Cu; f_801F57D0(c); // 800AF118
  c->r[3]=c->r[29]|c->r[29]; // 800AF11C
  c->r[4]=0u+0x00000002u; // 800AF120
  c->lr=0x800AF128u; f_801F57D0(c); // 800AF124
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800AF128
  c->r[3]=c->r[29]|c->r[29]; // 800AF12C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800AF130
  c->ctr=c->r[12]; // 800AF134
  if (true) { c->lr=0x800AF13Cu; dispatch(c,c->ctr); } // 800AF138
  c->r[3]=c->r[29]|c->r[29]; // 800AF13C
  c->lr=0x800AF144u; f_801F4B94(c); // 800AF140
  c->r[3]=0u+0x00000003u; // 800AF144
  c->r[0]=0u+0x0000000Bu; // 800AF148
  W8(c->r[29]+0x0000006Cu,c->r[3]); // 800AF14C
  c->r[3]=c->r[29]|c->r[29]; // 800AF150
  c->r[4]=R32(c->r[29]+0x00000394u); // 800AF154
  W8(c->r[29]+0x0000006Du,c->r[0]); // 800AF158
  c->lr=0x800AF160u; f_801F58BC(c); // 800AF15C
  c->r[4]=R32(c->r[29]+0x00000394u); // 800AF160
  c->r[30]=0u+0x00000001u; // 800AF164
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF168
  c->r[3]=c->r[29]|c->r[29]; // 800AF16C
  W8(c->r[4]+0x0000001Cu,c->r[30]); // 800AF170
  c->r[4]=0u+0x00000000u; // 800AF174
  c->f[2]=c->f[1]; // 800AF178
  c->r[5]=0u+0x00000001u; // 800AF17C
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800AF180
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AF184
  c->ctr=c->r[12]; // 800AF188
  if (true) { c->lr=0x800AF190u; dispatch(c,c->ctr); } // 800AF18C
  c->r[3]=R32(c->r[29]+0x00000394u); // 800AF190
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AF194
  c->lr=0x800AF19Cu; f_802501B0(c); // 800AF198
  c->r[4]=R32(c->r[29]+0x00000398u); // 800AF19C
  c->r[3]=c->r[29]|c->r[29]; // 800AF1A0
  c->lr=0x800AF1A8u; f_801F58BC(c); // 800AF1A4
  c->r[4]=R32(c->r[29]+0x00000398u); // 800AF1A8
  c->r[31]=0u+0x00000000u; // 800AF1AC
  c->r[3]=c->r[29]|c->r[29]; // 800AF1B0
  W8(c->r[4]+0x0000001Cu,c->r[31]); // 800AF1B4
  c->r[4]=R32(c->r[29]+0x0000039Cu); // 800AF1B8
  c->lr=0x800AF1C0u; f_801F58BC(c); // 800AF1BC
  c->r[4]=R32(c->r[29]+0x0000039Cu); // 800AF1C0
  c->r[3]=c->r[29]|c->r[29]; // 800AF1C4
  W8(c->r[4]+0x0000001Cu,c->r[31]); // 800AF1C8
  c->r[4]=R32(c->r[29]+0x00000394u); // 800AF1CC
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800AF1D0
  c->r[4]=R32(c->r[29]+0x00000398u); // 800AF1D4
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800AF1D8
  c->r[4]=R32(c->r[29]+0x0000039Cu); // 800AF1DC
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800AF1E0
  W8(c->r[29]+0x0000006Fu,c->r[30]); // 800AF1E4
  c->lr=0x800AF1ECu; f_801F56F4(c); // 800AF1E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AF1EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AF1F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800AF1F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800AF1F8
  c->lr=c->r[0]; // 800AF1FC
  c->r[1]=c->r[1]+0x00000020u; // 800AF200
  return; // 800AF204
}

// fn_800AF208
void f_800AF208(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF208
  c->r[0]=c->lr; // 800AF20C
  {uint32_t ea=c->r[2]+0xFFFF9954u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF210
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF214
  {uint32_t ea=c->r[2]+0xFFFF9958u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF218
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AF21C
  c->r[31]=c->r[3]|c->r[3]; // 800AF220
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AF224
  {uint32_t ea=c->r[3]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF228
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800AF22C
  fcmp(c,0,c->f[1],c->f[0]); // 800AF230
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 800AF234
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800AF238
  if (!crb(c,2)) { goto L_800AF248; } // 800AF23C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800AF240
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 800AF244
L_800AF248:;
  c->r[0]=R8(c->r[3]+0x00000074u); // 800AF248
  cmps(c,0,(int32_t)c->r[0],0); // 800AF24C
  if (!crb(c,2)) { goto L_800AF310; } // 800AF250
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800AF254
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800AF258
  if (crb(c,2)) { goto L_800AF350; } // 800AF25C
  c->r[30]=0u+0x00000001u; // 800AF260
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF264
  W8(c->r[3]+0x00000074u,c->r[30]); // 800AF268
  c->r[3]=c->r[31]|c->r[31]; // 800AF26C
  c->f[2]=c->f[1]; // 800AF270
  c->r[4]=0u+0x00000003u; // 800AF274
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AF278
  c->r[5]=0u+0x00000000u; // 800AF27C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800AF280
  c->ctr=c->r[12]; // 800AF284
  if (true) { c->lr=0x800AF28Cu; dispatch(c,c->ctr); } // 800AF288
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AF28C
  c->r[3]=c->r[31]|c->r[31]; // 800AF290
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF294
  c->r[5]=0u+0x00000002u; // 800AF298
  c->r[12]=R32(c->r[12]+0x00000064u); // 800AF29C
  c->r[6]=0u+0x00000001u; // 800AF2A0
  c->f[2]=c->f[1]; // 800AF2A4
  c->r[4]=R32(c->r[31]+0x00000398u); // 800AF2A8
  c->ctr=c->r[12]; // 800AF2AC
  if (true) { c->lr=0x800AF2B4u; dispatch(c,c->ctr); } // 800AF2B0
  c->r[3]=R32(c->r[31]+0x00000398u); // 800AF2B4
  c->r[4]=c->r[31]+0x00000060u; // 800AF2B8
  c->r[3]=c->r[3]+0x00000068u; // 800AF2BC
  c->lr=0x800AF2C4u; f_800361A0(c); // 800AF2C0
  c->r[4]=R32(c->r[31]+0x00000398u); // 800AF2C4
  c->r[3]=c->r[31]|c->r[31]; // 800AF2C8
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF2CC
  c->r[5]=0u+0x00000001u; // 800AF2D0
  W8(c->r[4]+0x0000001Cu,c->r[30]); // 800AF2D4
  c->r[6]=0u+0x00000001u; // 800AF2D8
  c->f[2]=c->f[1]; // 800AF2DC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AF2E0
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800AF2E4
  c->r[12]=R32(c->r[12]+0x00000064u); // 800AF2E8
  c->ctr=c->r[12]; // 800AF2EC
  if (true) { c->lr=0x800AF2F4u; dispatch(c,c->ctr); } // 800AF2F0
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800AF2F4
  c->r[4]=c->r[31]+0x00000060u; // 800AF2F8
  c->r[3]=c->r[3]+0x00000068u; // 800AF2FC
  c->lr=0x800AF304u; f_800361A0(c); // 800AF300
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800AF304
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800AF308
  goto L_800AF350; // 800AF30C
L_800AF310:;
  c->r[3]=R32(c->r[3]+0x00000398u); // 800AF310
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AF314
  c->lr=0x800AF31Cu; f_802501B0(c); // 800AF318
  cmps(c,0,(int32_t)c->r[3],0); // 800AF31C
  if (crb(c,2)) { goto L_800AF330; } // 800AF320
  c->r[3]=R32(c->r[31]+0x00000398u); // 800AF324
  c->r[0]=0u+0x00000000u; // 800AF328
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800AF32C
L_800AF330:;
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800AF330
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AF334
  c->lr=0x800AF33Cu; f_802501B0(c); // 800AF338
  cmps(c,0,(int32_t)c->r[3],0); // 800AF33C
  if (crb(c,2)) { goto L_800AF350; } // 800AF340
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800AF344
  c->r[0]=0u+0x00000000u; // 800AF348
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800AF34C
L_800AF350:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF350
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AF354
  c->lr=0x800AF35Cu; f_802501B0(c); // 800AF358
  c->r[3]=c->r[31]|c->r[31]; // 800AF35C
  c->lr=0x800AF364u; f_801F56F4(c); // 800AF360
  c->r[3]=R32(c->r[31]+0x00000398u); // 800AF364
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800AF368
  cmps(c,0,(int32_t)c->r[0],0); // 800AF36C
  if (crb(c,2)) { goto L_800AF398; } // 800AF370
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800AF374
  cmps(c,0,(int32_t)c->r[0],0); // 800AF378
  if (crb(c,2)) { goto L_800AF398; } // 800AF37C
  c->r[3]=c->r[3]+0x00000068u; // 800AF380
  c->r[4]=c->r[31]+0x00000060u; // 800AF384
  c->lr=0x800AF38Cu; f_800361A0(c); // 800AF388
  c->r[3]=R32(c->r[31]+0x00000398u); // 800AF38C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AF390
  c->lr=0x800AF398u; f_8025037C(c); // 800AF394
L_800AF398:;
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800AF398
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800AF39C
  cmps(c,0,(int32_t)c->r[0],0); // 800AF3A0
  if (crb(c,2)) { goto L_800AF3CC; } // 800AF3A4
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800AF3A8
  cmps(c,0,(int32_t)c->r[0],0); // 800AF3AC
  if (crb(c,2)) { goto L_800AF3CC; } // 800AF3B0
  c->r[3]=c->r[3]+0x00000068u; // 800AF3B4
  c->r[4]=c->r[31]+0x00000060u; // 800AF3B8
  c->lr=0x800AF3C0u; f_800361A0(c); // 800AF3BC
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800AF3C0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AF3C4
  c->lr=0x800AF3CCu; f_8025037C(c); // 800AF3C8
L_800AF3CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF3CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AF3D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AF3D4
  c->lr=c->r[0]; // 800AF3D8
  c->r[1]=c->r[1]+0x00000010u; // 800AF3DC
  return; // 800AF3E0
}

// fn_800AF3E4
void f_800AF3E4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AF3E4
  return; // 800AF3E8
}

// fn_800AF3EC
void f_800AF3EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF3EC
  c->r[0]=c->lr; // 800AF3F0
  cmps(c,0,(int32_t)c->r[3],0); // 800AF3F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF3F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AF3FC
  c->r[31]=c->r[4]|c->r[4]; // 800AF400
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AF404
  c->r[30]=c->r[3]|c->r[3]; // 800AF408
  if (crb(c,2)) { goto L_800AF428; } // 800AF40C
  c->r[4]=0u+0x00000000u; // 800AF410
  c->lr=0x800AF418u; f_8026A06C(c); // 800AF414
  cmps(c,0,(int32_t)c->r[31],0); // 800AF418
  if (!crb(c,1)) { goto L_800AF428; } // 800AF41C
  c->r[3]=c->r[30]|c->r[30]; // 800AF420
  c->lr=0x800AF428u; f_8026A268(c); // 800AF424
L_800AF428:;
  c->r[3]=c->r[30]|c->r[30]; // 800AF428
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AF42C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AF430
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF434
  c->lr=c->r[0]; // 800AF438
  c->r[1]=c->r[1]+0x00000010u; // 800AF43C
  return; // 800AF440
}

// fn_800AF444
void f_800AF444(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF444
  c->r[0]=c->lr; // 800AF448
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AF44C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800AF450
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800AF454
  c->r[4]=0u+0x00000000u; // 800AF458
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AF45C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AF460
  c->r[30]=c->r[3]|c->r[3]; // 800AF464
  c->lr=0x800AF46Cu; f_801F57D0(c); // 800AF468
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800AF46C
  c->r[3]=c->r[30]|c->r[30]; // 800AF470
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800AF474
  c->ctr=c->r[12]; // 800AF478
  if (true) { c->lr=0x800AF480u; dispatch(c,c->ctr); } // 800AF47C
  c->r[3]=c->r[30]|c->r[30]; // 800AF480
  c->lr=0x800AF488u; f_801F4B94(c); // 800AF484
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800AF488
  c->r[4]=0u+0x00000003u; // 800AF48C
  {uint32_t ea=c->r[2]+0xFFFF9968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF490
  c->r[5]=0u+0x0000000Cu; // 800AF494
  c->r[0]=c->r[0]|0x00000804u; // 800AF498
  c->r[3]=0u+0x80550000u; // 800AF49C
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800AF4A0
  c->f[3]=c->f[1]; // 800AF4A4
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800AF4A8
  c->r[3]=c->r[3]+0x00003D60u; // 800AF4AC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800AF4B0
  c->r[4]=c->r[30]+0x0000002Cu; // 800AF4B4
  W8(c->r[30]+0x0000006Du,c->r[5]); // 800AF4B8
  {uint32_t ea=c->r[2]+0xFFFF996Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF4BC
  c->r[5]=c->r[30]+0x00000030u; // 800AF4C0
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800AF4C4
  c->r[6]=0u+0x00000000u; // 800AF4C8
  c->r[7]=0u+0x00000000u; // 800AF4CC
  c->lr=0x800AF4D4u; f_801D5488(c); // 800AF4D0
  c->r[4]=R32(c->r[30]+0x00000394u); // 800AF4D4
  c->r[3]=c->r[30]|c->r[30]; // 800AF4D8
  c->lr=0x800AF4E0u; f_801F58BC(c); // 800AF4DC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800AF4E0
  c->r[31]=0u+0x00000001u; // 800AF4E4
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800AF4E8
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF4EC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800AF4F0
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800AF4F4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800AF4F8
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800AF4FC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AF500
  c->lr=0x800AF508u; f_802501B0(c); // 800AF504
  c->r[3]=0u+0x805D0000u; // 800AF508
  c->r[4]=c->r[30]+0x0000002Cu; // 800AF50C
  c->r[3]=c->r[3]+0x000078B0u; // 800AF510
  c->lr=0x800AF518u; f_802351CC(c); // 800AF514
  c->r[4]=R32(c->r[30]+0x00000394u); // 800AF518
  c->r[0]=0u+0x00000000u; // 800AF51C
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800AF520
  c->r[3]=c->r[30]|c->r[30]; // 800AF524
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800AF528
  W32(c->r[30]+0x00000078u,c->r[0]); // 800AF52C
  c->lr=0x800AF534u; f_80095E00(c); // 800AF530
  W32(c->r[30]+0x00000078u,c->r[3]); // 800AF534
  c->r[3]=c->r[30]|c->r[30]; // 800AF538
  c->lr=0x800AF540u; f_801F56F4(c); // 800AF53C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800AF540
  c->r[3]=c->r[30]|c->r[30]; // 800AF544
  c->r[12]=R32(c->r[12]+0x00000050u); // 800AF548
  c->ctr=c->r[12]; // 800AF54C
  if (true) { c->lr=0x800AF554u; dispatch(c,c->ctr); } // 800AF550
  c->r[3]=c->r[30]|c->r[30]; // 800AF554
  c->lr=0x800AF55Cu; f_800AFE24(c); // 800AF558
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800AF55C
  W32(c->r[30]+0x00000444u,c->r[31]); // 800AF560
  c->lr=0x800AF568u; f_8024E174(c); // 800AF564
  W32(c->r[30]+0x00000438u,c->r[3]); // 800AF568
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800AF56C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800AF570
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AF574
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AF578
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AF57C
  c->lr=c->r[0]; // 800AF580
  c->r[1]=c->r[1]+0x00000020u; // 800AF584
  return; // 800AF588
}

// fn_800AF58C
void f_800AF58C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF58C
  c->r[0]=c->lr; // 800AF590
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF594
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AF598
  c->r[31]=c->r[3]|c->r[3]; // 800AF59C
  c->lr=0x800AF5A4u; f_800AFBC8(c); // 800AF5A0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AF5A4
  c->r[3]=c->r[31]|c->r[31]; // 800AF5A8
  c->r[12]=R32(c->r[12]+0x00000068u); // 800AF5AC
  c->ctr=c->r[12]; // 800AF5B0
  if (true) { c->lr=0x800AF5B8u; dispatch(c,c->ctr); } // 800AF5B4
  c->r[3]=c->r[31]|c->r[31]; // 800AF5B8
  c->lr=0x800AF5C0u; f_801F4C0C(c); // 800AF5BC
  c->r[3]=c->r[31]|c->r[31]; // 800AF5C0
  c->lr=0x800AF5C8u; f_800AFD6C(c); // 800AF5C4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF5C8
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800AF5CC
  cmps(c,0,(int32_t)c->r[0],0); // 800AF5D0
  if (!crb(c,2)) { goto L_800AF5F4; } // 800AF5D4
  {uint32_t ea=c->r[2]+0xFFFF9970u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF5D8
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 800AF5DC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF5E0
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800AF5E4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF5E8
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800AF5EC
  goto L_800AF60C; // 800AF5F0
L_800AF5F4:;
  {uint32_t ea=c->r[2]+0xFFFF9974u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF5F4
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 800AF5F8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF5FC
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800AF600
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF604
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800AF608
L_800AF60C:;
  c->r[3]=c->r[31]|c->r[31]; // 800AF60C
  c->lr=0x800AF614u; f_801F56F4(c); // 800AF610
  c->r[3]=c->r[31]|c->r[31]; // 800AF614
  c->lr=0x800AF61Cu; f_800AFEC4(c); // 800AF618
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF61C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AF620
  c->lr=c->r[0]; // 800AF624
  c->r[1]=c->r[1]+0x00000010u; // 800AF628
  return; // 800AF62C
}

// fn_800AF630
void f_800AF630(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF630
  c->r[0]=c->lr; // 800AF634
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF638
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AF63C
  c->r[31]=c->r[3]|c->r[3]; // 800AF640
  c->r[4]=R32(c->r[3]+0x00000394u); // 800AF644
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800AF648
  c->lr=0x800AF650u; f_802501B0(c); // 800AF64C
  c->r[3]=c->r[31]|c->r[31]; // 800AF650
  c->r[4]=0u+0x00000000u; // 800AF654
  c->lr=0x800AF65Cu; f_801F5244(c); // 800AF658
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF65C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AF660
  c->lr=c->r[0]; // 800AF664
  c->r[1]=c->r[1]+0x00000010u; // 800AF668
  return; // 800AF66C
}

// fn_800AF670
void f_800AF670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF670
  c->r[0]=c->lr; // 800AF674
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF678
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AF67C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AF680
  c->r[30]=c->r[3]|c->r[3]; // 800AF684
  c->r[4]=R32(c->r[3]+0x00000394u); // 800AF688
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800AF68C
  c->lr=0x800AF694u; f_802501B0(c); // 800AF690
  c->r[3]=c->r[30]|c->r[30]; // 800AF694
  c->r[4]=0u+0x00000000u; // 800AF698
  c->lr=0x800AF6A0u; f_801F5244(c); // 800AF69C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800AF6A0
  c->r[3]=c->r[30]+0x0000002Cu; // 800AF6A4
  c->r[4]=c->r[4]+0x0000005Cu; // 800AF6A8
  c->lr=0x800AF6B0u; f_800361A0(c); // 800AF6AC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800AF6B0
  c->r[3]=c->r[30]|c->r[30]; // 800AF6B4
  c->lr=0x800AF6BCu; f_801F5418(c); // 800AF6B8
  cmps(c,0,(int32_t)c->r[3],0); // 800AF6BC
  if (!crb(c,0)) { goto L_800AF6F8; } // 800AF6C0
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800AF6C4
  c->r[3]=0u+0x00000001u; // 800AF6C8
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800AF6CC
  c->r[3]=c->r[30]|c->r[30]; // 800AF6D0
  c->r[0]=c->r[0]|0x00000080u; // 800AF6D4
  {uint32_t ea=c->r[2]+0xFFFF9968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF6D8
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800AF6DC
  c->r[4]=0u+0x00000064u; // 800AF6E0
  c->r[5]=0u+0x00000000u; // 800AF6E4
  c->r[6]=0u+0x00000000u; // 800AF6E8
  c->r[7]=0u+0x00000000u; // 800AF6EC
  c->lr=0x800AF6F4u; f_801F4D44(c); // 800AF6F0
  goto L_800AF72C; // 800AF6F4
L_800AF6F8:;
  c->r[31]=0u+0x805D0000u; // 800AF6F8
  c->r[3]=c->r[31]+0x00003F6Cu; // 800AF6FC
  c->lr=0x800AF704u; f_800447E4(c); // 800AF700
  cmpu(c,0,c->r[3],0x00000001u); // 800AF704
  if (!crb(c,2)) { goto L_800AF718; } // 800AF708
  c->r[0]=0u+0x00000000u; // 800AF70C
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800AF710
  goto L_800AF724; // 800AF714
L_800AF718:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800AF718
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800AF71C
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800AF720
L_800AF724:;
  c->r[3]=c->r[30]|c->r[30]; // 800AF724
  c->lr=0x800AF72Cu; f_801F5B14(c); // 800AF728
L_800AF72C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF72C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AF730
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AF734
  c->lr=c->r[0]; // 800AF738
  c->r[1]=c->r[1]+0x00000010u; // 800AF73C
  return; // 800AF740
}

// fn_800AF744
void f_800AF744(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF744
  c->r[0]=c->lr; // 800AF748
  W32(c->r[1]+0x00000054u,c->r[0]); // 800AF74C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800AF750
  c->r[31]=c->r[3]|c->r[3]; // 800AF754
  c->r[4]=R32(c->r[3]+0x00000394u); // 800AF758
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800AF75C
  c->lr=0x800AF764u; f_802501B0(c); // 800AF760
  c->r[3]=c->r[31]+0x00000038u; // 800AF764
  c->r[4]=c->r[31]+0x0000002Cu; // 800AF768
  c->lr=0x800AF770u; f_800361A0(c); // 800AF76C
  {uint32_t ea=c->r[2]+0xFFFF9968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF770
  c->r[3]=0u+0x80550000u; // 800AF774
  c->r[3]=c->r[3]+0x00003D60u; // 800AF778
  c->r[4]=c->r[31]+0x00000038u; // 800AF77C
  c->f[2]=c->f[1]; // 800AF780
  c->r[5]=c->r[1]+0x00000008u; // 800AF784
  c->f[3]=c->f[1]; // 800AF788
  c->r[6]=0u+0x00000000u; // 800AF78C
  c->r[7]=0u+0x00000000u; // 800AF790
  c->lr=0x800AF798u; f_801D5488(c); // 800AF794
  c->r[5]=R32(c->r[31]+0x00000394u); // 800AF798
  c->r[3]=c->r[31]+0x00000060u; // 800AF79C
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF7A0
  c->r[4]=c->r[5]+0x00000068u; // 800AF7A4
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800AF7A8
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF7AC
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800AF7B0
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF7B4
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800AF7B8
  c->lr=0x800AF7C0u; f_800361A0(c); // 800AF7BC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF7C0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AF7C4
  c->lr=0x800AF7CCu; f_802501B0(c); // 800AF7C8
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800AF7CC
  c->r[0]=0u+0x00000001u; // 800AF7D0
  {uint32_t ea=c->r[2]+0xFFFF9970u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF7D4
  c->r[4]=c->r[31]+0x0000002Cu; // 800AF7D8
  {uint32_t ea=c->r[2]+0xFFFF9978u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF7DC
  c->r[3]=c->r[3]|0x00002000u; // 800AF7E0
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800AF7E4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF7E8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800AF7EC
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800AF7F0
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800AF7F4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF7F8
  c->r[3]=c->r[3]+0x0000005Cu; // 800AF7FC
  c->lr=0x800AF804u; f_800361A0(c); // 800AF800
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF804
  c->r[4]=0u+0x00000040u; // 800AF808
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF80C
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800AF810
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF814
  c->r[3]=c->r[3]+0x0000001Cu; // 800AF818
  c->lr=0x800AF820u; f_802518A4(c); // 800AF81C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF820
  c->r[4]=0u+0x00000006u; // 800AF824
  c->r[3]=c->r[3]+0x0000001Cu; // 800AF828
  c->lr=0x800AF830u; f_80251824(c); // 800AF82C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF830
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AF834
  c->lr=0x800AF83Cu; f_802501B0(c); // 800AF838
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800AF83C
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800AF840
  if (crb(c,2)) { goto L_800AF870; } // 800AF844
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AF848
  c->r[3]=c->r[31]|c->r[31]; // 800AF84C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800AF850
  c->ctr=c->r[12]; // 800AF854
  if (true) { c->lr=0x800AF85Cu; dispatch(c,c->ctr); } // 800AF858
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800AF85C
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800AF860
  c->r[0]=c->r[0]|0x00000084u; // 800AF864
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800AF868
  goto L_800AF990; // 800AF86C
L_800AF870:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF870
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800AF874
  cmps(c,0,(int32_t)c->r[0],0); // 800AF878
  if (crb(c,2)) { goto L_800AF95C; } // 800AF87C
  c->r[3]=c->r[3]+0x00000068u; // 800AF880
  c->r[4]=c->r[31]+0x00000060u; // 800AF884
  c->lr=0x800AF88Cu; f_800361A0(c); // 800AF888
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AF88C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AF890
  c->lr=0x800AF898u; f_8025037C(c); // 800AF894
  c->r[6]=R32(c->r[31]+0x00000394u); // 800AF898
  c->r[3]=c->r[1]+0x00000030u; // 800AF89C
  c->r[4]=c->r[31]+0x00000060u; // 800AF8A0
  c->r[5]=c->r[1]+0x0000003Cu; // 800AF8A4
  c->r[6]=c->r[6]+0x000000B0u; // 800AF8A8
  c->r[7]=0u+0x00000000u; // 800AF8AC
  c->lr=0x800AF8B4u; f_8002BE64(c); // 800AF8B0
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800AF8B4
  cmps(c,0,(int32_t)c->r[0],0); // 800AF8B8
  if (!crb(c,2)) { goto L_800AF904; } // 800AF8BC
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800AF8C0
  c->r[3]=0u+0x805D0000u; // 800AF8C4
  c->r[0]=R32(c->r[31]+0x00000030u); // 800AF8C8
  c->r[3]=c->r[3]+0x00003F6Cu; // 800AF8CC
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF8D0
  c->r[4]=c->r[31]|c->r[31]; // 800AF8D4
  W32(c->r[1]+0x00000024u,c->r[5]); // 800AF8D8
  c->r[7]=c->r[1]+0x00000024u; // 800AF8DC
  c->r[6]=0u+0x0000000Eu; // 800AF8E0
  c->r[8]=0u+0x00000000u; // 800AF8E4
  W32(c->r[1]+0x00000028u,c->r[0]); // 800AF8E8
  c->r[0]=R32(c->r[31]+0x00000034u); // 800AF8EC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800AF8F0
  c->r[3]=R32(c->r[31]+0x00000438u); // 800AF8F4
  c->r[5]=R32(c->r[31]+0x00000394u); // 800AF8F8
  c->lr=0x800AF900u; f_801FA6A4(c); // 800AF8FC
  goto L_800AF944; // 800AF900
L_800AF904:;
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800AF904
  c->r[3]=0u+0x805D0000u; // 800AF908
  c->r[0]=R32(c->r[31]+0x00000030u); // 800AF90C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800AF910
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF914
  c->r[4]=c->r[31]|c->r[31]; // 800AF918
  W32(c->r[1]+0x00000018u,c->r[5]); // 800AF91C
  c->r[7]=c->r[1]+0x00000018u; // 800AF920
  c->r[6]=0u+0x0000000Du; // 800AF924
  c->r[8]=0u+0x00000000u; // 800AF928
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800AF92C
  c->r[0]=R32(c->r[31]+0x00000034u); // 800AF930
  W32(c->r[1]+0x00000020u,c->r[0]); // 800AF934
  c->r[3]=R32(c->r[31]+0x00000438u); // 800AF938
  c->r[5]=R32(c->r[31]+0x00000394u); // 800AF93C
  c->lr=0x800AF944u; f_801FA6A4(c); // 800AF940
L_800AF944:;
  c->r[6]=0u+0x803A0000u; // 800AF944
  c->r[3]=R32(c->r[31]+0x00000438u); // 800AF948
  c->r[5]=c->r[31]+0x00000044u; // 800AF94C
  c->r[4]=0u+0x00000000u; // 800AF950
  c->r[6]=c->r[6]+0xFFFFC940u; // 800AF954
  c->lr=0x800AF95Cu; f_801FBEC0(c); // 800AF958
L_800AF95C:;
  c->r[3]=c->r[31]|c->r[31]; // 800AF95C
  c->r[4]=0u+0x00000000u; // 800AF960
  c->lr=0x800AF968u; f_801F7C00(c); // 800AF964
  c->r[7]=0u+0x803D0000u; // 800AF968
  {uint32_t ea=c->r[7]+0xFFFFEDD8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800AF96C
  c->r[3]=c->r[31]|c->r[31]; // 800AF970
  c->r[4]=c->r[1]+0x0000000Cu; // 800AF974
  c->r[5]=R32(c->r[7]+0x00000004u); // 800AF978
  c->r[0]=R32(c->r[7]+0x00000008u); // 800AF97C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800AF980
  W32(c->r[1]+0x00000010u,c->r[5]); // 800AF984
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF988
  c->lr=0x800AF990u; f_800AF9A4(c); // 800AF98C
L_800AF990:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800AF990
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800AF994
  c->lr=c->r[0]; // 800AF998
  c->r[1]=c->r[1]+0x00000050u; // 800AF99C
  return; // 800AF9A0
}

// fn_800AF9A4
void f_800AF9A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF9A4
  c->r[0]=c->lr; // 800AF9A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF9AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AF9B0
  c->r[31]=c->r[4]|c->r[4]; // 800AF9B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AF9B8
  c->r[30]=c->r[3]|c->r[3]; // 800AF9BC
  c->r[3]=c->r[31]|c->r[31]; // 800AF9C0
  c->lr=0x800AF9C8u; f_802B9FDC(c); // 800AF9C4
  cmps(c,0,(int32_t)c->r[3],0); // 800AF9C8
  if (crb(c,2)) { goto L_800AF9E8; } // 800AF9CC
  c->r[3]=R32(c->r[31]+0x00000000u); // 800AF9D0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800AF9D4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800AF9D8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800AF9DC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800AF9E0
  W32(c->r[30]+0x00000024u,c->r[0]); // 800AF9E4
L_800AF9E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF9E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AF9EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AF9F0
  c->lr=c->r[0]; // 800AF9F4
  c->r[1]=c->r[1]+0x00000010u; // 800AF9F8
  return; // 800AF9FC
}

// fn_800AFA00
void f_800AFA00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFA00
  c->r[0]=c->lr; // 800AFA04
  c->r[4]=0u+0x00000000u; // 800AFA08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AFA0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AFA10
  c->r[31]=c->r[3]|c->r[3]; // 800AFA14
  c->r[3]=R32(c->r[3]+0x00000438u); // 800AFA18
  c->lr=0x800AFA20u; f_801FAF00(c); // 800AFA1C
  cmps(c,0,(int32_t)c->r[3],0); // 800AFA20
  if (!crb(c,2)) { goto L_800AFB00; } // 800AFA24
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800AFA28
  c->r[4]=c->r[13]+0xFFFF8358u; // 800AFA2C
  c->r[3]=c->r[31]|c->r[31]; // 800AFA30
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800AFA34
  c->r[0]=R16(c->r[4]+c->r[0]); // 800AFA38
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800AFA3C
  c->lr=0x800AFA44u; f_801F5AB4(c); // 800AFA40
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800AFA44
  c->r[3]=c->r[31]+0x0000002Cu; // 800AFA48
  c->r[4]=R32(c->r[31]+0x00000394u); // 800AFA4C
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800AFA50
  c->r[0]=c->r[0]|0x00000004u; // 800AFA54
  c->r[4]=c->r[4]+0x0000005Cu; // 800AFA58
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800AFA5C
  c->lr=0x800AFA64u; f_800361A0(c); // 800AFA60
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800AFA64
  cmps(c,0,(int32_t)c->r[0],0); // 800AFA68
  if (!crb(c,2)) { goto L_800AFA80; } // 800AFA6C
  {uint32_t ea=c->r[2]+0xFFFF9968u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFA70
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800AFA74
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800AFA78
  goto L_800AFA90; // 800AFA7C
L_800AFA80:;
  {uint32_t ea=c->r[2]+0xFFFF9968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFA80
  {uint32_t ea=c->r[2]+0xFFFF997Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFA84
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[1]);} // 800AFA88
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800AFA8C
L_800AFA90:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AFA90
  c->r[4]=c->r[31]+0x00000060u; // 800AFA94
  c->r[3]=c->r[3]+0x00000068u; // 800AFA98
  c->lr=0x800AFAA0u; f_800361A0(c); // 800AFA9C
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800AFAA0
  c->r[3]=0u+0x805D0000u; // 800AFAA4
  c->r[0]=R32(c->r[31]+0x00000030u); // 800AFAA8
  c->r[3]=c->r[3]+0x00006CF8u; // 800AFAAC
  c->r[4]=c->r[1]+0x00000008u; // 800AFAB0
  c->r[5]=0u+0x00040000u; // 800AFAB4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800AFAB8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800AFABC
  c->r[0]=R32(c->r[31]+0x00000034u); // 800AFAC0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AFAC4
  c->lr=0x800AFACCu; f_802236F8(c); // 800AFAC8
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800AFACC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AFAD0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AFAD4
  c->lr=0x800AFADCu; f_8025037C(c); // 800AFAD8
  c->r[3]=c->r[31]|c->r[31]; // 800AFADC
  c->r[4]=0u+0x00000000u; // 800AFAE0
  c->lr=0x800AFAE8u; f_801F7C00(c); // 800AFAE4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800AFAE8
  c->r[3]=c->r[31]|c->r[31]; // 800AFAEC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800AFAF0
  c->ctr=c->r[12]; // 800AFAF4
  if (true) { c->lr=0x800AFAFCu; dispatch(c,c->ctr); } // 800AFAF8
  goto L_800AFB48; // 800AFAFC
L_800AFB00:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800AFB00
  c->r[3]=c->r[31]+0x0000002Cu; // 800AFB04
  c->r[4]=c->r[4]+0x0000005Cu; // 800AFB08
  c->lr=0x800AFB10u; f_800361A0(c); // 800AFB0C
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800AFB10
  cmps(c,0,(int32_t)c->r[0],0); // 800AFB14
  if (!crb(c,2)) { goto L_800AFB2C; } // 800AFB18
  {uint32_t ea=c->r[2]+0xFFFF9968u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFB1C
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800AFB20
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800AFB24
  goto L_800AFB3C; // 800AFB28
L_800AFB2C:;
  {uint32_t ea=c->r[2]+0xFFFF9968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFB2C
  {uint32_t ea=c->r[2]+0xFFFF997Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFB30
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[1]);} // 800AFB34
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800AFB38
L_800AFB3C:;
  c->r[3]=c->r[31]|c->r[31]; // 800AFB3C
  c->r[4]=0u+0x00000000u; // 800AFB40
  c->lr=0x800AFB48u; f_801F7C00(c); // 800AFB44
L_800AFB48:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AFB48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AFB4C
  c->lr=c->r[0]; // 800AFB50
  c->r[1]=c->r[1]+0x00000020u; // 800AFB54
  return; // 800AFB58
}

// fn_800AFB5C
void f_800AFB5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFB5C
  c->r[0]=c->lr; // 800AFB60
  c->r[4]=0u+0x000000E1u; // 800AFB64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFB68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AFB6C
  c->r[31]=c->r[3]|c->r[3]; // 800AFB70
  c->r[3]=c->r[3]+0x00000210u; // 800AFB74
  c->lr=0x800AFB7Cu; f_80221630(c); // 800AFB78
  cmps(c,0,(int32_t)c->r[3],0); // 800AFB7C
  if (!crb(c,2)) { goto L_800AFB8C; } // 800AFB80
  c->r[3]=0u+0x00000000u; // 800AFB84
  goto L_800AFBB4; // 800AFB88
L_800AFB8C:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800AFB8C
  c->r[3]=c->r[13]+0xFFFF8360u; // 800AFB90
  c->r[4]=R32(c->r[31]+0x00000394u); // 800AFB94
  c->r[5]=0u+0x00000000u; // 800AFB98
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800AFB9C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800AFBA0
  c->r[4]=c->r[4]+0x0000010Cu; // 800AFBA4
  c->lr=0x800AFBACu; f_8024EE50(c); // 800AFBA8
  c->r[0]=cntlz(c->r[3]); // 800AFBAC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800AFBB0
L_800AFBB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AFBB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AFBB8
  c->lr=c->r[0]; // 800AFBBC
  c->r[1]=c->r[1]+0x00000010u; // 800AFBC0
  return; // 800AFBC4
}

// fn_800AFBC8
void f_800AFBC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFBC8
  c->r[0]=c->lr; // 800AFBCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AFBD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AFBD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AFBD8
  c->r[30]=0u+0x805D0000u; // 800AFBDC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800AFBE0
  c->r[29]=c->r[3]|c->r[3]; // 800AFBE4
  c->r[3]=c->r[30]+0x00003F6Cu; // 800AFBE8
  c->lr=0x800AFBF0u; f_80045264(c); // 800AFBEC
  c->r[0]=R8(c->r[29]+0x0000006Eu); // 800AFBF0
  c->r[31]=c->r[13]+0xFFFF8358u; // 800AFBF4
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800AFBF8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800AFBFC
  c->r[0]=R16(c->r[31]+c->r[0]); // 800AFC00
  cmpu(c,0,c->r[0],c->r[3]); // 800AFC04
  if (crb(c,2)) { goto L_800AFC30; } // 800AFC08
  c->r[3]=c->r[30]+0x00003F6Cu; // 800AFC0C
  c->lr=0x800AFC14u; f_80045264(c); // 800AFC10
  c->r[4]=R8(c->r[29]+0x0000006Eu); // 800AFC14
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800AFC18
  c->r[0]=c->r[4]+0x00000002u; // 800AFC1C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800AFC20
  c->r[0]=R16(c->r[31]+c->r[0]); // 800AFC24
  cmpu(c,0,c->r[0],c->r[3]); // 800AFC28
  if (!crb(c,2)) { goto L_800AFC6C; } // 800AFC2C
L_800AFC30:;
  c->r[3]=0u+0x805D0000u; // 800AFC30
  c->r[3]=c->r[3]+0x00003F6Cu; // 800AFC34
  c->lr=0x800AFC3Cu; f_80037AF0(c); // 800AFC38
  cmpu(c,0,c->r[3],c->r[29]); // 800AFC3C
  if (!crb(c,2)) { goto L_800AFC6C; } // 800AFC40
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x000003BCu); // 800AFC44
  cmps(c,0,(int32_t)c->r[0],101); // 800AFC48
  if (crb(c,2)) { goto L_800AFC6C; } // 800AFC4C
  {uint32_t ea=c->r[2]+0xFFFF9968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFC50
  c->r[3]=c->r[29]|c->r[29]; // 800AFC54
  c->r[4]=0u+0x00000065u; // 800AFC58
  c->r[5]=0u+0x00000000u; // 800AFC5C
  c->r[6]=0u+0x00000000u; // 800AFC60
  c->r[7]=0u+0x00000000u; // 800AFC64
  c->lr=0x800AFC6Cu; f_801F4D44(c); // 800AFC68
L_800AFC6C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AFC6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AFC70
  c->r[30]=R32(c->r[1]+0x00000018u); // 800AFC74
  c->r[29]=R32(c->r[1]+0x00000014u); // 800AFC78
  c->lr=c->r[0]; // 800AFC7C
  c->r[1]=c->r[1]+0x00000020u; // 800AFC80
  return; // 800AFC84
}

// fn_800AFC88
void f_800AFC88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFC88
  c->r[0]=c->lr; // 800AFC8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AFC90
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800AFC94
  c->r[31]=c->r[3]|c->r[3]; // 800AFC98
  c->lr=0x800AFCA0u; f_801F4F28(c); // 800AFC9C
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800AFCA0
  cmps(c,0,(int32_t)c->r[0],101); // 800AFCA4
  if (crb(c,2)) { goto L_800AFCEC; } // 800AFCA8
  if (!crb(c,0)) { goto L_800AFD18; } // 800AFCAC
  cmps(c,0,(int32_t)c->r[0],100); // 800AFCB0
  if (!crb(c,0)) { goto L_800AFCBC; } // 800AFCB4
  goto L_800AFD18; // 800AFCB8
L_800AFCBC:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800AFCBC
  c->r[7]=0u+0x803D0000u; // 800AFCC0
  c->r[3]=c->r[31]|c->r[31]; // 800AFCC4
  c->r[4]=c->r[1]+0x00000014u; // 800AFCC8
  {uint32_t ea=c->r[7]+0xFFFFEDE4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800AFCCC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800AFCD0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800AFCD4
  W32(c->r[1]+0x00000014u,c->r[6]); // 800AFCD8
  W32(c->r[1]+0x00000018u,c->r[5]); // 800AFCDC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800AFCE0
  c->lr=0x800AFCE8u; f_800AF9A4(c); // 800AFCE4
  goto L_800AFD18; // 800AFCE8
L_800AFCEC:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800AFCEC
  c->r[7]=0u+0x803D0000u; // 800AFCF0
  c->r[3]=c->r[31]|c->r[31]; // 800AFCF4
  c->r[4]=c->r[1]+0x00000008u; // 800AFCF8
  {uint32_t ea=c->r[7]+0xFFFFEDF0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800AFCFC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800AFD00
  c->r[0]=R32(c->r[7]+0x00000008u); // 800AFD04
  W32(c->r[1]+0x00000008u,c->r[6]); // 800AFD08
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800AFD0C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AFD10
  c->lr=0x800AFD18u; f_800AF9A4(c); // 800AFD14
L_800AFD18:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AFD18
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800AFD1C
  c->lr=c->r[0]; // 800AFD20
  c->r[1]=c->r[1]+0x00000030u; // 800AFD24
  return; // 800AFD28
}

// fn_800AFD2C
void f_800AFD2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFD2C
  c->r[0]=c->lr; // 800AFD30
  c->r[7]=0u+0x803D0000u; // 800AFD34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AFD38
  c->r[4]=c->r[1]+0x00000008u; // 800AFD3C
  {uint32_t ea=c->r[7]+0xFFFFEDFCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800AFD40
  c->r[5]=R32(c->r[7]+0x00000004u); // 800AFD44
  c->r[0]=R32(c->r[7]+0x00000008u); // 800AFD48
  W32(c->r[1]+0x00000008u,c->r[6]); // 800AFD4C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800AFD50
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AFD54
  c->lr=0x800AFD5Cu; f_800AF9A4(c); // 800AFD58
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AFD5C
  c->lr=c->r[0]; // 800AFD60
  c->r[1]=c->r[1]+0x00000020u; // 800AFD64
  return; // 800AFD68
}

// fn_800AFD6C
void f_800AFD6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFD6C
  c->r[0]=c->lr; // 800AFD70
  c->r[5]=0u+0x80620000u; // 800AFD74
  c->r[4]=0u+0x00000002u; // 800AFD78
  W32(c->r[1]+0x00000094u,c->r[0]); // 800AFD7C
  c->r[5]=c->r[5]+0x00007688u; // 800AFD80
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800AFD84
  W32(c->r[1]+0x00000088u,c->r[30]); // 800AFD88
  c->r[30]=c->r[3]|c->r[3]; // 800AFD8C
  c->r[3]=R32(c->r[5]+0x00000014u); // 800AFD90
  c->lr=0x800AFD98u; f_80037670(c); // 800AFD94
  cmps(c,0,(int32_t)c->r[3],0); // 800AFD98
  if (!crb(c,2)) { goto L_800AFDFC; } // 800AFD9C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800AFDA0
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800AFDA4
  cmps(c,0,(int32_t)c->r[0],0); // 800AFDA8
  if (!crb(c,2)) { goto L_800AFDFC; } // 800AFDAC
  {uint32_t ea=c->r[2]+0xFFFF9980u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFDB0
  c->r[3]=c->r[1]+0x00000008u; // 800AFDB4
  c->r[4]=c->r[30]+0x0000002Cu; // 800AFDB8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800AFDBC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800AFDC0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800AFDC4
  c->lr=0x800AFDCCu; f_800361A0(c); // 800AFDC8
  c->r[31]=0u+0x80550000u; // 800AFDCC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFDD0
  c->r[31]=c->r[31]+0x00003D60u; // 800AFDD4
  c->r[5]=c->r[30]|c->r[30]; // 800AFDD8
  c->r[3]=c->r[31]+0x00000010u; // 800AFDDC
  c->r[6]=c->r[1]+0x00000008u; // 800AFDE0
  c->r[7]=c->r[1]+0x00000020u; // 800AFDE4
  c->r[4]=0u+0x000001FFu; // 800AFDE8
  c->lr=0x800AFDF0u; f_80226910(c); // 800AFDEC
  c->r[3]=c->r[31]+0x00000010u; // 800AFDF0
  c->r[4]=c->r[1]+0x00000020u; // 800AFDF4
  c->lr=0x800AFDFCu; f_80226D68(c); // 800AFDF8
L_800AFDFC:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800AFDFC
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800AFE00
  c->r[30]=R32(c->r[1]+0x00000088u); // 800AFE04
  c->lr=c->r[0]; // 800AFE08
  c->r[1]=c->r[1]+0x00000090u; // 800AFE0C
  return; // 800AFE10
}

// fn_800AFE14
void f_800AFE14(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800AFE14
  c->r[0]=c->r[0]|0x00004000u; // 800AFE18
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800AFE1C
  return; // 800AFE20
}

// fn_800AFE24
void f_800AFE24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFE24
  c->r[0]=c->lr; // 800AFE28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFE2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AFE30
  c->r[31]=c->r[3]|c->r[3]; // 800AFE34
  c->r[3]=c->r[3]+0x00000210u; // 800AFE38
  c->lr=0x800AFE40u; f_8004BAD4(c); // 800AFE3C
  cmps(c,0,(int32_t)c->r[3],0); // 800AFE40
  if (crb(c,2)) { goto L_800AFEB0; } // 800AFE44
  c->r[0]=R32(c->r[31]+0x00000210u); // 800AFE48
  c->r[4]=c->r[31]|c->r[31]; // 800AFE4C
  c->r[3]=c->r[31]+0x00000210u; // 800AFE50
  c->r[0]=c->r[0]|0xAA000000u; // 800AFE54
  W32(c->r[31]+0x00000210u,c->r[0]); // 800AFE58
  c->lr=0x800AFE60u; f_80043E44(c); // 800AFE5C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFE60
  c->r[3]=c->r[31]+0x00000210u; // 800AFE64
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AFE68
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AFE6C
  c->lr=0x800AFE74u; f_80043E34(c); // 800AFE70
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AFE74
  c->r[4]=0u+0x803A0000u; // 800AFE78
  c->r[4]=c->r[4]+0xFFFFC94Cu; // 800AFE7C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800AFE80
  c->lr=0x800AFE88u; f_80256EC4(c); // 800AFE84
  c->r[4]=R32(c->r[31]+0x00000394u); // 800AFE88
  c->r[5]=c->r[3]|c->r[3]; // 800AFE8C
  c->r[3]=c->r[31]+0x00000210u; // 800AFE90
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800AFE94
  c->lr=0x800AFE9Cu; f_8004BAC8(c); // 800AFE98
  {uint32_t ea=c->r[2]+0xFFFF9984u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFE9C
  c->r[3]=c->r[31]+0x00000210u; // 800AFEA0
  c->f[2]=c->f[1]; // 800AFEA4
  c->f[3]=c->f[1]; // 800AFEA8
  c->lr=0x800AFEB0u; f_80043E24(c); // 800AFEAC
L_800AFEB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AFEB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AFEB4
  c->lr=c->r[0]; // 800AFEB8
  c->r[1]=c->r[1]+0x00000010u; // 800AFEBC
  return; // 800AFEC0
}

// fn_800AFEC4
void f_800AFEC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFEC4
  c->r[0]=c->lr; // 800AFEC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AFECC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AFED0
  c->r[31]=c->r[3]|c->r[3]; // 800AFED4
  c->r[3]=c->r[3]+0x00000210u; // 800AFED8
  c->lr=0x800AFEE0u; f_80221698(c); // 800AFEDC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800AFEE0
  cmps(c,0,(int32_t)c->r[3],0); // 800AFEE4
  if (crb(c,2)) { goto L_800AFF08; } // 800AFEE8
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800AFEEC
  cmps(c,0,(int32_t)c->r[0],0); // 800AFEF0
  if (crb(c,2)) { goto L_800AFF08; } // 800AFEF4
  c->r[0]=R32(c->r[31]+0x00000210u); // 800AFEF8
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800AFEFC
  W32(c->r[31]+0x00000210u,c->r[0]); // 800AFF00
  goto L_800AFF74; // 800AFF04
L_800AFF08:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800AFF08
  c->r[4]=R32(c->r[31]+0x00000394u); // 800AFF0C
  c->r[0]=c->r[0]|0x80000000u; // 800AFF10
  W32(c->r[31]+0x00000210u,c->r[0]); // 800AFF14
  c->r[3]=R32(c->r[4]+0x00000074u); // 800AFF18
  c->r[0]=R32(c->r[4]+0x00000078u); // 800AFF1C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800AFF20
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800AFF24
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 800AFF28
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AFF2C
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800AFF30
  cmps(c,0,(int32_t)c->r[0],0); // 800AFF34
  if (!crb(c,2)) { goto L_800AFF50; } // 800AFF38
  c->r[3]=c->r[1]+0x00000008u; // 800AFF3C
  {uint32_t ea=c->r[2]+0xFFFF9984u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFF40
  c->r[4]=c->r[3]|c->r[3]; // 800AFF44
  c->lr=0x800AFF4Cu; f_80296A94(c); // 800AFF48
  goto L_800AFF60; // 800AFF4C
L_800AFF50:;
  c->r[3]=c->r[1]+0x00000008u; // 800AFF50
  {uint32_t ea=c->r[2]+0xFFFF9974u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFF54
  c->r[4]=c->r[3]|c->r[3]; // 800AFF58
  c->lr=0x800AFF60u; f_80296A94(c); // 800AFF5C
L_800AFF60:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFF60
  c->r[3]=c->r[31]+0x00000210u; // 800AFF64
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AFF68
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AFF6C
  c->lr=0x800AFF74u; f_80043E24(c); // 800AFF70
L_800AFF74:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AFF74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AFF78
  c->lr=c->r[0]; // 800AFF7C
  c->r[1]=c->r[1]+0x00000020u; // 800AFF80
  return; // 800AFF84
}

// fn_800AFF88
void f_800AFF88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFF88
  c->r[0]=c->lr; // 800AFF8C
  cmps(c,0,(int32_t)c->r[3],0); // 800AFF90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFF94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AFF98
  c->r[31]=c->r[4]|c->r[4]; // 800AFF9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AFFA0
  c->r[30]=c->r[3]|c->r[3]; // 800AFFA4
  if (crb(c,2)) { goto L_800AFFC4; } // 800AFFA8
  c->r[4]=0u+0x00000000u; // 800AFFAC
  c->lr=0x800AFFB4u; f_8026A06C(c); // 800AFFB0
  cmps(c,0,(int32_t)c->r[31],0); // 800AFFB4
  if (!crb(c,1)) { goto L_800AFFC4; } // 800AFFB8
  c->r[3]=c->r[30]|c->r[30]; // 800AFFBC
  c->lr=0x800AFFC4u; f_8026A268(c); // 800AFFC0
L_800AFFC4:;
  c->r[3]=c->r[30]|c->r[30]; // 800AFFC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AFFC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AFFCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AFFD0
  c->lr=c->r[0]; // 800AFFD4
  c->r[1]=c->r[1]+0x00000010u; // 800AFFD8
  return; // 800AFFDC
}

// fn_800AFFE0
void f_800AFFE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFFE0
  c->r[0]=c->lr; // 800AFFE4
  c->r[4]=0u+0x00000000u; // 800AFFE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFFEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AFFF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AFFF4
  c->r[30]=c->r[3]|c->r[3]; // 800AFFF8
  c->lr=0x800B0000u; f_801F57D0(c); // 800AFFFC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B0000
  c->r[3]=c->r[30]|c->r[30]; // 800B0004
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800B0008
  c->ctr=c->r[12]; // 800B000C
  if (true) { c->lr=0x800B0014u; dispatch(c,c->ctr); } // 800B0010
  c->r[3]=c->r[30]|c->r[30]; // 800B0014
  c->lr=0x800B001Cu; f_801F4B94(c); // 800B0018
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800B001C
  c->r[4]=0u+0x00000003u; // 800B0020
  c->r[3]=0u+0x0000000Du; // 800B0024
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800B0028
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800B002C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B0030
  W8(c->r[30]+0x0000006Du,c->r[3]); // 800B0034
  c->r[3]=c->r[30]|c->r[30]; // 800B0038
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B003C
  c->lr=0x800B0044u; f_801F58BC(c); // 800B0040
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B0044
  c->r[31]=0u+0x00000001u; // 800B0048
  c->r[4]=0u+0x803A0000u; // 800B004C
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800B0050
  c->r[4]=c->r[4]+0xFFFFC958u; // 800B0054
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B0058
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B005C
  c->lr=0x800B0064u; f_80256EC4(c); // 800B0060
  c->r[6]=R32(c->r[30]+0x00000394u); // 800B0064
  c->r[5]=0u+0x805D0000u; // 800B0068
  c->r[4]=c->r[30]+0x0000002Cu; // 800B006C
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800B0070
  c->r[3]=c->r[5]+0x000078B0u; // 800B0074
  c->lr=0x800B007Cu; f_802351CC(c); // 800B0078
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B007C
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800B0080
  c->r[3]=c->r[30]|c->r[30]; // 800B0084
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800B0088
  c->lr=0x800B0090u; f_801F56F4(c); // 800B008C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B0090
  c->r[3]=c->r[30]|c->r[30]; // 800B0094
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B0098
  c->ctr=c->r[12]; // 800B009C
  if (true) { c->lr=0x800B00A4u; dispatch(c,c->ctr); } // 800B00A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B00A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B00A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B00AC
  c->lr=c->r[0]; // 800B00B0
  c->r[1]=c->r[1]+0x00000010u; // 800B00B4
  return; // 800B00B8
}

// fn_800B00BC
void f_800B00BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B00BC
  c->r[0]=c->lr; // 800B00C0
  c->r[4]=c->r[3]|c->r[3]; // 800B00C4
  c->r[3]=0u+0x000002B0u; // 800B00C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B00CC
  c->r[5]=0u+0x00000000u; // 800B00D0
  c->r[4]=R32(c->r[4]+0x00000394u); // 800B00D4
  c->r[4]=c->r[4]+0x0000010Cu; // 800B00D8
  c->lr=0x800B00E0u; f_8024EE50(c); // 800B00DC
  c->r[0]=cntlz(c->r[3]); // 800B00E0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B00E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B00E8
  c->lr=c->r[0]; // 800B00EC
  c->r[1]=c->r[1]+0x00000010u; // 800B00F0
  return; // 800B00F4
}

// fn_800B00F8
void f_800B00F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B00F8
  c->r[0]=c->lr; // 800B00FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0100
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0104
  c->r[31]=c->r[3]|c->r[3]; // 800B0108
  c->lr=0x800B0110u; f_801F4C0C(c); // 800B010C
  c->r[3]=c->r[31]|c->r[31]; // 800B0110
  c->lr=0x800B0118u; f_801F56F4(c); // 800B0114
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0118
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B011C
  c->lr=c->r[0]; // 800B0120
  c->r[1]=c->r[1]+0x00000010u; // 800B0124
  return; // 800B0128
}

// fn_800B012C
void f_800B012C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B012C
  c->r[0]=c->lr; // 800B0130
  cmps(c,0,(int32_t)c->r[3],0); // 800B0134
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0138
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B013C
  c->r[31]=c->r[4]|c->r[4]; // 800B0140
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B0144
  c->r[30]=c->r[3]|c->r[3]; // 800B0148
  if (crb(c,2)) { goto L_800B0168; } // 800B014C
  c->r[4]=0u+0x00000000u; // 800B0150
  c->lr=0x800B0158u; f_8026A06C(c); // 800B0154
  cmps(c,0,(int32_t)c->r[31],0); // 800B0158
  if (!crb(c,1)) { goto L_800B0168; } // 800B015C
  c->r[3]=c->r[30]|c->r[30]; // 800B0160
  c->lr=0x800B0168u; f_8026A268(c); // 800B0164
L_800B0168:;
  c->r[3]=c->r[30]|c->r[30]; // 800B0168
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B016C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B0170
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0174
  c->lr=c->r[0]; // 800B0178
  c->r[1]=c->r[1]+0x00000010u; // 800B017C
  return; // 800B0180
}

// fn_800B0184
void f_800B0184(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0184
  c->r[0]=c->lr; // 800B0188
  c->r[4]=0u+0x00000000u; // 800B018C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B0190
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B0194
  c->r[31]=c->r[3]|c->r[3]; // 800B0198
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B019C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B01A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B01A4
  c->lr=0x800B01ACu; f_801F57D0(c); // 800B01A8
  c->r[3]=c->r[31]|c->r[31]; // 800B01AC
  c->r[4]=0u+0x00000001u; // 800B01B0
  c->lr=0x800B01B8u; f_801F57D0(c); // 800B01B4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B01B8
  c->r[3]=c->r[31]|c->r[31]; // 800B01BC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800B01C0
  c->ctr=c->r[12]; // 800B01C4
  if (true) { c->lr=0x800B01CCu; dispatch(c,c->ctr); } // 800B01C8
  c->r[3]=c->r[31]|c->r[31]; // 800B01CC
  c->lr=0x800B01D4u; f_801F4B94(c); // 800B01D0
  c->r[3]=0u+0x00000003u; // 800B01D4
  c->r[0]=0u+0x0000000Fu; // 800B01D8
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800B01DC
  c->r[3]=c->r[31]|c->r[31]; // 800B01E0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B01E4
  W8(c->r[31]+0x0000006Du,c->r[0]); // 800B01E8
  c->lr=0x800B01F0u; f_801F58BC(c); // 800B01EC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B01F0
  c->r[28]=0u+0x00000001u; // 800B01F4
  c->r[29]=0u+0x803A0000u; // 800B01F8
  W8(c->r[3]+0x0000001Cu,c->r[28]); // 800B01FC
  c->r[4]=c->r[29]+0xFFFFC978u; // 800B0200
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B0204
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B0208
  c->lr=0x800B0210u; f_80256EC4(c); // 800B020C
  c->r[6]=R32(c->r[31]+0x00000394u); // 800B0210
  c->r[4]=0u+0x00000000u; // 800B0214
  {uint32_t ea=c->r[2]+0xFFFF9998u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0218
  c->r[5]=0u+0x00000001u; // 800B021C
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800B0220
  c->r[3]=c->r[31]|c->r[31]; // 800B0224
  c->f[2]=c->f[1]; // 800B0228
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B022C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800B0230
  c->ctr=c->r[12]; // 800B0234
  if (true) { c->lr=0x800B023Cu; dispatch(c,c->ctr); } // 800B0238
  c->r[30]=0u+0x805D0000u; // 800B023C
  c->r[4]=c->r[31]+0x0000002Cu; // 800B0240
  c->r[3]=c->r[30]+0x000078B0u; // 800B0244
  c->lr=0x800B024Cu; f_802351CC(c); // 800B0248
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B024C
  c->r[0]=0u+0x000000FFu; // 800B0250
  {uint32_t ea=c->r[2]+0xFFFF9998u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0254
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800B0258
  c->r[3]=c->r[31]|c->r[31]; // 800B025C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0260
  W8(c->r[31]+0x00000078u,c->r[0]); // 800B0264
  c->r[4]=R32(c->r[31]+0x00000398u); // 800B0268
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[1]);} // 800B026C
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 800B0270
  c->lr=0x800B0278u; f_801F58BC(c); // 800B0274
  c->r[3]=R32(c->r[31]+0x00000398u); // 800B0278
  c->r[0]=0u+0x00000000u; // 800B027C
  c->r[4]=c->r[29]+0xFFFFC978u; // 800B0280
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800B0284
  c->r[3]=R32(c->r[31]+0x00000398u); // 800B0288
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B028C
  c->lr=0x800B0294u; f_80256EC4(c); // 800B0290
  c->r[4]=R32(c->r[31]+0x00000398u); // 800B0294
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800B0298
  c->r[3]=c->r[31]|c->r[31]; // 800B029C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800B02A0
  c->r[4]=R32(c->r[31]+0x00000398u); // 800B02A4
  c->r[0]=R8(c->r[5]+0x0000001Du); // 800B02A8
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800B02AC
  W8(c->r[31]+0x0000006Fu,c->r[28]); // 800B02B0
  c->lr=0x800B02B8u; f_801F56F4(c); // 800B02B4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B02B8
  c->r[3]=c->r[31]|c->r[31]; // 800B02BC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B02C0
  c->ctr=c->r[12]; // 800B02C4
  if (true) { c->lr=0x800B02CCu; dispatch(c,c->ctr); } // 800B02C8
  c->r[3]=c->r[31]|c->r[31]; // 800B02CC
  c->lr=0x800B02D4u; f_800B0A50(c); // 800B02D0
  c->r[3]=0u+0x80550000u; // 800B02D4
  c->r[3]=c->r[3]+0x00003D60u; // 800B02D8
  c->r[3]=c->r[3]+0x00000010u; // 800B02DC
  c->lr=0x800B02E4u; f_80226E94(c); // 800B02E0
  c->r[4]=0u+0x00010000u; // 800B02E4
  c->r[3]=c->r[30]+0x000078B0u; // 800B02E8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800B02EC
  W16(c->r[31]+0x00000080u,c->r[0]); // 800B02F0
  W16(c->r[31]+0x00000082u,c->r[0]); // 800B02F4
  W16(c->r[31]+0x00000084u,c->r[0]); // 800B02F8
  W16(c->r[31]+0x00000086u,c->r[0]); // 800B02FC
  c->lr=0x800B0304u; f_80037028(c); // 800B0300
  cmps(c,0,(int32_t)c->r[3],6); // 800B0304
  if (!crb(c,2)) { goto L_800B031C; } // 800B0308
  c->r[3]=c->r[30]+0x000078B0u; // 800B030C
  c->lr=0x800B0314u; f_8003CEF4(c); // 800B0310
  cmps(c,0,(int32_t)c->r[3],5); // 800B0314
  if (crb(c,2)) { goto L_800B0338; } // 800B0318
L_800B031C:;
  {uint32_t ea=c->r[2]+0xFFFF999Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B031C
  c->r[3]=c->r[31]|c->r[31]; // 800B0320
  c->r[4]=c->r[31]+0x00000080u; // 800B0324
  c->r[5]=c->r[31]+0x00000082u; // 800B0328
  c->r[6]=c->r[31]+0x00000084u; // 800B032C
  c->r[7]=c->r[31]+0x00000086u; // 800B0330
  c->lr=0x800B0338u; f_801F5EE4(c); // 800B0334
L_800B0338:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B0338
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B033C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B0340
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B0344
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B0348
  c->lr=c->r[0]; // 800B034C
  c->r[1]=c->r[1]+0x00000020u; // 800B0350
  return; // 800B0354
}

// fn_800B0358
void f_800B0358(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0358
  c->r[0]=c->lr; // 800B035C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0360
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0364
  c->r[31]=c->r[3]|c->r[3]; // 800B0368
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800B036C
  c->r[12]=R32(c->r[12]+0x00000068u); // 800B0370
  c->ctr=c->r[12]; // 800B0374
  if (true) { c->lr=0x800B037Cu; dispatch(c,c->ctr); } // 800B0378
  c->r[3]=c->r[31]|c->r[31]; // 800B037C
  c->lr=0x800B0384u; f_801F4C0C(c); // 800B0380
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800B0384
  cmps(c,0,(int32_t)c->r[0],0); // 800B0388
  if (!crb(c,2)) { goto L_800B0398; } // 800B038C
  c->r[3]=c->r[31]|c->r[31]; // 800B0390
  c->lr=0x800B0398u; f_800B0A50(c); // 800B0394
L_800B0398:;
  c->r[3]=c->r[31]|c->r[31]; // 800B0398
  c->lr=0x800B03A0u; f_801F56F4(c); // 800B039C
  c->r[3]=R32(c->r[31]+0x00000398u); // 800B03A0
  cmps(c,0,(int32_t)c->r[3],0); // 800B03A4
  if (crb(c,2)) { goto L_800B0410; } // 800B03A8
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B03AC
  cmps(c,0,(int32_t)c->r[0],0); // 800B03B0
  if (crb(c,2)) { goto L_800B0410; } // 800B03B4
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800B03B8
  cmps(c,0,(int32_t)c->r[0],0); // 800B03BC
  if (crb(c,2)) { goto L_800B0410; } // 800B03C0
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B03C4
  cmps(c,0,(int32_t)c->r[0],0); // 800B03C8
  if (crb(c,2)) { goto L_800B03E8; } // 800B03CC
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800B03D0
  cmps(c,0,(int32_t)c->r[0],0); // 800B03D4
  if (!crb(c,2)) { goto L_800B03E8; } // 800B03D8
  c->r[4]=c->r[3]+0x000000B0u; // 800B03DC
  c->lr=0x800B03E4u; f_80250F18(c); // 800B03E0
  goto L_800B0404; // 800B03E4
L_800B03E8:;
  c->r[3]=c->r[3]+0x0000005Cu; // 800B03E8
  c->r[4]=c->r[31]+0x0000002Cu; // 800B03EC
  c->lr=0x800B03F4u; f_800361A0(c); // 800B03F0
  c->r[3]=R32(c->r[31]+0x00000398u); // 800B03F4
  c->r[4]=c->r[31]+0x00000060u; // 800B03F8
  c->r[3]=c->r[3]+0x00000068u; // 800B03FC
  c->lr=0x800B0404u; f_800361A0(c); // 800B0400
L_800B0404:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800B0404
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B0408
  c->lr=0x800B0410u; f_8025037C(c); // 800B040C
L_800B0410:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0410
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0414
  c->lr=c->r[0]; // 800B0418
  c->r[1]=c->r[1]+0x00000010u; // 800B041C
  return; // 800B0420
}

// fn_800B0424
void f_800B0424(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0424
  c->r[0]=c->lr; // 800B0428
  c->r[4]=c->r[3]+0x00000080u; // 800B042C
  c->r[5]=c->r[3]+0x00000082u; // 800B0430
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0434
  c->r[6]=c->r[3]+0x00000084u; // 800B0438
  c->r[7]=c->r[3]+0x00000086u; // 800B043C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0440
  c->r[31]=c->r[3]|c->r[3]; // 800B0444
  c->lr=0x800B044Cu; f_801F60D0(c); // 800B0448
  c->r[3]=c->r[31]|c->r[31]; // 800B044C
  c->lr=0x800B0454u; f_801F4C78(c); // 800B0450
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0454
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0458
  c->lr=c->r[0]; // 800B045C
  c->r[1]=c->r[1]+0x00000010u; // 800B0460
  return; // 800B0464
}

// fn_800B0468
void f_800B0468(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0468
  c->r[0]=c->lr; // 800B046C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B0470
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B0474
  c->r[31]=0u+0x805D0000u; // 800B0478
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B047C
  c->r[30]=0u+0x00000000u; // 800B0480
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B0484
  c->r[29]=c->r[3]|c->r[3]; // 800B0488
  c->r[3]=c->r[31]+0x000078B0u; // 800B048C
  c->lr=0x800B0494u; f_80037028(c); // 800B0490
  cmpu(c,0,c->r[3],0x00000009u); // 800B0494
  if (crb(c,1)) { goto L_800B04E0; } // 800B0498
  c->r[4]=0u+0x803D0000u; // 800B049C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800B04A0
  c->r[4]=c->r[4]+0xFFFFEF38u; // 800B04A4
  c->r[4]=R32(c->r[4]+c->r[0]); // 800B04A8
  c->ctr=c->r[4]; // 800B04AC
  if (true) { switch (c->ctr) { case 0x800B04B4u: goto L_800B04B4; case 0x800B04BCu: goto L_800B04BC; case 0x800B04DCu: goto L_800B04DC; case 0x800B04E0u: goto L_800B04E0; default: break; } dispatch(c,c->ctr); return; } // 800B04B0
L_800B04B4:;
  c->r[30]=0u+0x00000001u; // 800B04B4
  goto L_800B04E0; // 800B04B8
L_800B04BC:;
  c->r[3]=c->r[31]+0x000078B0u; // 800B04BC
  c->lr=0x800B04C4u; f_8003CEF4(c); // 800B04C0
  cmps(c,0,(int32_t)c->r[3],5); // 800B04C4
  if (crb(c,2)) { goto L_800B04D4; } // 800B04C8
  c->r[30]=0u+0x00000001u; // 800B04CC
  goto L_800B04E0; // 800B04D0
L_800B04D4:;
  c->r[30]=0u+0x00000003u; // 800B04D4
  goto L_800B04E0; // 800B04D8
L_800B04DC:;
  c->r[30]=0u+0x00000002u; // 800B04DC
L_800B04E0:;
  c->r[31]=0u+0x803A0000u; // 800B04E0
  c->r[3]=R32(c->r[29]+0x00000394u); // 800B04E4
  c->r[30]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800B04E8
  c->r[5]=0u+0x00000000u; // 800B04EC
  c->r[31]=c->r[31]+0xFFFFC968u; // 800B04F0
  c->r[4]=c->r[3]+0x0000010Cu; // 800B04F4
  c->r[3]=R16(c->r[31]+c->r[30]); // 800B04F8
  c->lr=0x800B0500u; f_8024EE50(c); // 800B04FC
  cmps(c,0,(int32_t)c->r[3],0); // 800B0500
  if (crb(c,2)) { goto L_800B0510; } // 800B0504
  c->r[3]=0u+0x00000000u; // 800B0508
  goto L_800B052C; // 800B050C
L_800B0510:;
  c->r[3]=c->r[31]+c->r[30]; // 800B0510
  c->r[4]=R32(c->r[29]+0x00000398u); // 800B0514
  c->r[3]=R16(c->r[3]+0x00000002u); // 800B0518
  c->r[5]=0u+0x00000000u; // 800B051C
  c->r[4]=c->r[4]+0x0000010Cu; // 800B0520
  c->lr=0x800B0528u; f_8024EE50(c); // 800B0524
  c->r[3]=0u+0x00000000u; // 800B0528
L_800B052C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B052C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B0530
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B0534
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B0538
  c->lr=c->r[0]; // 800B053C
  c->r[1]=c->r[1]+0x00000020u; // 800B0540
  return; // 800B0544
}

// fn_800B0548
void f_800B0548(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0548
  c->r[0]=c->lr; // 800B054C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B0550
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800B0554
  c->r[31]=c->r[3]|c->r[3]; // 800B0558
  c->lr=0x800B0560u; f_801F4F28(c); // 800B055C
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800B0560
  cmps(c,0,(int32_t)c->r[0],101); // 800B0564
  if (crb(c,2)) { goto L_800B05AC; } // 800B0568
  if (!crb(c,0)) { goto L_800B05D8; } // 800B056C
  cmps(c,0,(int32_t)c->r[0],100); // 800B0570
  if (!crb(c,0)) { goto L_800B057C; } // 800B0574
  goto L_800B05D8; // 800B0578
L_800B057C:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800B057C
  c->r[7]=0u+0x803D0000u; // 800B0580
  c->r[3]=c->r[31]|c->r[31]; // 800B0584
  c->r[4]=c->r[1]+0x00000014u; // 800B0588
  {uint32_t ea=c->r[7]+0xFFFFEF60u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B058C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B0590
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B0594
  W32(c->r[1]+0x00000014u,c->r[6]); // 800B0598
  W32(c->r[1]+0x00000018u,c->r[5]); // 800B059C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B05A0
  c->lr=0x800B05A8u; f_800B05EC(c); // 800B05A4
  goto L_800B05D8; // 800B05A8
L_800B05AC:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800B05AC
  c->r[7]=0u+0x803D0000u; // 800B05B0
  c->r[3]=c->r[31]|c->r[31]; // 800B05B4
  c->r[4]=c->r[1]+0x00000008u; // 800B05B8
  {uint32_t ea=c->r[7]+0xFFFFEF6Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800B05BC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B05C0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B05C4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B05C8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B05CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B05D0
  c->lr=0x800B05D8u; f_800B05EC(c); // 800B05D4
L_800B05D8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B05D8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800B05DC
  c->lr=c->r[0]; // 800B05E0
  c->r[1]=c->r[1]+0x00000030u; // 800B05E4
  return; // 800B05E8
}

// fn_800B05EC
void f_800B05EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B05EC
  c->r[0]=c->lr; // 800B05F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B05F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B05F8
  c->r[31]=c->r[4]|c->r[4]; // 800B05FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B0600
  c->r[30]=c->r[3]|c->r[3]; // 800B0604
  c->r[3]=c->r[31]|c->r[31]; // 800B0608
  c->lr=0x800B0610u; f_802B9FDC(c); // 800B060C
  cmps(c,0,(int32_t)c->r[3],0); // 800B0610
  if (crb(c,2)) { goto L_800B0630; } // 800B0614
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B0618
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B061C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B0620
  W32(c->r[30]+0x00000020u,c->r[0]); // 800B0624
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B0628
  W32(c->r[30]+0x00000024u,c->r[0]); // 800B062C
L_800B0630:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0630
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0634
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B0638
  c->lr=c->r[0]; // 800B063C
  c->r[1]=c->r[1]+0x00000010u; // 800B0640
  return; // 800B0644
}

// fn_800B0648
void f_800B0648(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0648
  c->r[0]=c->lr; // 800B064C
  {uint32_t ea=c->r[2]+0xFFFF99A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0650
  c->r[4]=0u+0x00000000u; // 800B0654
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B0658
  {uint32_t ea=c->r[2]+0xFFFF99A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B065C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B0660
  c->r[31]=c->r[3]|c->r[3]; // 800B0664
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 800B0668
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 800B066C
  c->r[3]=c->r[3]+0x0000000Cu; // 800B0670
  c->lr=0x800B0678u; f_80036430(c); // 800B0674
  c->r[3]=c->r[31]|c->r[31]; // 800B0678
  c->r[4]=c->r[31]+0x00000080u; // 800B067C
  c->r[5]=c->r[31]+0x00000082u; // 800B0680
  c->r[6]=c->r[31]+0x00000084u; // 800B0684
  c->r[7]=c->r[31]+0x00000086u; // 800B0688
  c->lr=0x800B0690u; f_801F60D0(c); // 800B068C
  c->r[7]=0u+0x803D0000u; // 800B0690
  {uint32_t ea=c->r[7]+0xFFFFEF78u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B0694
  c->r[3]=c->r[31]|c->r[31]; // 800B0698
  c->r[4]=c->r[1]+0x00000008u; // 800B069C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B06A0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B06A4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B06A8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B06AC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B06B0
  c->lr=0x800B06B8u; f_800B05EC(c); // 800B06B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B06B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B06BC
  c->lr=c->r[0]; // 800B06C0
  c->r[1]=c->r[1]+0x00000020u; // 800B06C4
  return; // 800B06C8
}

// fn_800B06CC
void f_800B06CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B06CC
  c->r[0]=c->lr; // 800B06D0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800B06D4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800B06D8
  c->r[31]=c->r[3]|c->r[3]; // 800B06DC
  W32(c->r[1]+0x00000058u,c->r[30]); // 800B06E0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B06E4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B06E8
  c->lr=0x800B06F0u; f_802501B0(c); // 800B06EC
  c->r[3]=c->r[31]|c->r[31]; // 800B06F0
  c->lr=0x800B06F8u; f_80178E98(c); // 800B06F4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B06F8
  c->r[4]=0u+0x803A0000u; // 800B06FC
  c->r[4]=c->r[4]+0xFFFFC978u; // 800B0700
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B0704
  c->r[4]=c->r[4]+0x00000009u; // 800B0708
  c->lr=0x800B0710u; f_80256EC4(c); // 800B070C
  {uint32_t ea=c->r[2]+0xFFFF9998u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0710
  c->r[30]=c->r[3]|c->r[3]; // 800B0714
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0718
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 800B071C
  fcmp(c,0,c->f[0],c->f[1]); // 800B0720
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 800B0724
  if (!crb(c,0)) { goto L_800B0840; } // 800B0728
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B072C
  {uint32_t ea=c->r[31]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0730
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0734
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800B0738
  fcmp(c,0,c->f[2],c->f[0]); // 800B073C
  if (!crb(c,0)) { goto L_800B0840; } // 800B0740
  {uint32_t ea=c->r[2]+0xFFFF99ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0744
  c->r[4]=c->r[30]|c->r[30]; // 800B0748
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[1]);} // 800B074C
  c->r[5]=c->r[1]+0x0000002Cu; // 800B0750
  c->r[3]=R32(c->r[1]+0x00000048u); // 800B0754
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800B0758
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800B075C
  c->r[6]=R32(c->r[1]+0x00000044u); // 800B0760
  W32(c->r[1]+0x00000030u,c->r[3]); // 800B0764
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800B0768
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B076C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B0770
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B0774
  c->lr=0x800B077Cu; f_8025E9C0(c); // 800B0778
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B077C
  c->r[4]=0u+0x00000000u; // 800B0780
  {uint32_t ea=c->r[2]+0xFFFF9998u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0784
  c->r[0]=0u+0x00000001u; // 800B0788
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 800B078C
  c->r[3]=c->r[31]|c->r[31]; // 800B0790
  c->f[2]=c->f[1]; // 800B0794
  c->r[5]=0u+0x00000000u; // 800B0798
  c->r[4]=R32(c->r[31]+0x00000398u); // 800B079C
  c->r[6]=0u+0x00000001u; // 800B07A0
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800B07A4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B07A8
  c->r[4]=R32(c->r[31]+0x00000398u); // 800B07AC
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B07B0
  c->ctr=c->r[12]; // 800B07B4
  if (true) { c->lr=0x800B07BCu; dispatch(c,c->ctr); } // 800B07B8
  c->r[3]=R32(c->r[31]+0x00000398u); // 800B07BC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B07C0
  c->lr=0x800B07C8u; f_802501B0(c); // 800B07C4
  c->r[3]=c->r[1]+0x00000038u; // 800B07C8
  c->r[4]=c->r[31]+0x0000002Cu; // 800B07CC
  c->lr=0x800B07D4u; f_800361A0(c); // 800B07D0
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B07D4
  {uint32_t ea=c->r[2]+0xFFFF99B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B07D8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B07DC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800B07E0
  c->r[0]=R8(c->r[31]+0x00000078u); // 800B07E4
  cmpu(c,0,c->r[0],0x000000FFu); // 800B07E8
  if (crb(c,2)) { goto L_800B0814; } // 800B07EC
  c->r[5]=R32(c->r[1]+0x00000038u); // 800B07F0
  c->r[4]=c->r[1]+0x00000020u; // 800B07F4
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800B07F8
  c->r[0]=R32(c->r[1]+0x00000040u); // 800B07FC
  W32(c->r[1]+0x00000020u,c->r[5]); // 800B0800
  W32(c->r[1]+0x00000024u,c->r[3]); // 800B0804
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B0808
  c->r[3]=R8(c->r[31]+0x00000078u); // 800B080C
  c->lr=0x800B0814u; f_801F4ADC(c); // 800B0810
L_800B0814:;
  c->r[7]=0u+0x803D0000u; // 800B0814
  {uint32_t ea=c->r[7]+0xFFFFEF84u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B0818
  c->r[3]=c->r[31]|c->r[31]; // 800B081C
  c->r[4]=c->r[1]+0x00000014u; // 800B0820
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B0824
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B0828
  W32(c->r[1]+0x00000014u,c->r[6]); // 800B082C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800B0830
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B0834
  c->lr=0x800B083Cu; f_800B05EC(c); // 800B0838
  goto L_800B08B4; // 800B083C
L_800B0840:;
  c->r[3]=c->r[31]+0x0000000Cu; // 800B0840
  c->lr=0x800B0848u; f_80038C0C(c); // 800B0844
  c->r[3]=c->r[31]+0x0000000Cu; // 800B0848
  c->lr=0x800B0850u; f_8003E460(c); // 800B084C
  c->r[0]=0u+0x43300000u; // 800B0850
  W32(c->r[1]+0x00000054u,c->r[3]); // 800B0854
  {uint32_t ea=c->r[2]+0xFFFF99C0u; c->f[3]=RF64(ea);} // 800B0858
  c->r[4]=c->r[30]|c->r[30]; // 800B085C
  W32(c->r[1]+0x00000050u,c->r[0]); // 800B0860
  c->r[5]=c->r[1]+0x00000008u; // 800B0864
  {uint32_t ea=c->r[2]+0xFFFF99ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0868
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 800B086C
  {uint32_t ea=c->r[2]+0xFFFF99B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0870
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 800B0874
  {uint32_t ea=c->r[2]+0xFFFF99B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0878
  c->r[3]=R32(c->r[1]+0x00000048u); // 800B087C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800B0880
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800B0884
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800B0888
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B088C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800B0890
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 800B0894
  c->r[6]=R32(c->r[1]+0x00000044u); // 800B0898
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B089C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B08A0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B08A4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B08A8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B08AC
  c->lr=0x800B08B4u; f_8025E9C0(c); // 800B08B0
L_800B08B4:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 800B08B4
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800B08B8
  c->r[30]=R32(c->r[1]+0x00000058u); // 800B08BC
  c->lr=c->r[0]; // 800B08C0
  c->r[1]=c->r[1]+0x00000060u; // 800B08C4
  return; // 800B08C8
}

// fn_800B08CC
void f_800B08CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B08CC
  c->r[0]=c->lr; // 800B08D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B08D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B08D8
  c->r[31]=c->r[3]|c->r[3]; // 800B08DC
  c->r[4]=R32(c->r[3]+0x00000398u); // 800B08E0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B08E4
  c->lr=0x800B08ECu; f_802501B0(c); // 800B08E8
  cmps(c,0,(int32_t)c->r[3],0); // 800B08EC
  if (crb(c,2)) { goto L_800B0930; } // 800B08F0
  c->r[0]=0u+0x00000000u; // 800B08F4
  c->r[3]=c->r[31]|c->r[31]; // 800B08F8
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800B08FC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B0900
  c->r[12]=R32(c->r[12]+0x00000018u); // 800B0904
  c->ctr=c->r[12]; // 800B0908
  if (true) { c->lr=0x800B0910u; dispatch(c,c->ctr); } // 800B090C
  cmps(c,0,(int32_t)c->r[31],0); // 800B0910
  if (crb(c,2)) { goto L_800B0930; } // 800B0914
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B0918
  c->r[3]=c->r[31]|c->r[31]; // 800B091C
  c->r[4]=0u+0x00000001u; // 800B0920
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B0924
  c->ctr=c->r[12]; // 800B0928
  if (true) { c->lr=0x800B0930u; dispatch(c,c->ctr); } // 800B092C
L_800B0930:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0930
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0934
  c->lr=c->r[0]; // 800B0938
  c->r[1]=c->r[1]+0x00000010u; // 800B093C
  return; // 800B0940
}

// fn_800B0944
void f_800B0944(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0944
  c->r[0]=c->lr; // 800B0948
  cmps(c,0,(int32_t)c->r[3],0); // 800B094C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0950
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0954
  c->r[31]=c->r[4]|c->r[4]; // 800B0958
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B095C
  c->r[30]=c->r[3]|c->r[3]; // 800B0960
  if (crb(c,2)) { goto L_800B0980; } // 800B0964
  c->r[4]=0u+0x00000000u; // 800B0968
  c->lr=0x800B0970u; f_8026A06C(c); // 800B096C
  cmps(c,0,(int32_t)c->r[31],0); // 800B0970
  if (!crb(c,1)) { goto L_800B0980; } // 800B0974
  c->r[3]=c->r[30]|c->r[30]; // 800B0978
  c->lr=0x800B0980u; f_8026A268(c); // 800B097C
L_800B0980:;
  c->r[3]=c->r[30]|c->r[30]; // 800B0980
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0984
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B0988
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B098C
  c->lr=c->r[0]; // 800B0990
  c->r[1]=c->r[1]+0x00000010u; // 800B0994
  return; // 800B0998
}

// fn_800B099C
void f_800B099C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B099C
  c->r[0]=c->lr; // 800B09A0
  c->r[4]=0u+0x805D0000u; // 800B09A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B09A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B09AC
  c->r[31]=c->r[3]|c->r[3]; // 800B09B0
  c->r[3]=c->r[4]+0x00003F6Cu; // 800B09B4
  c->lr=0x800B09BCu; f_800376F0(c); // 800B09B8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800B09BC
  cmps(c,0,(int32_t)c->r[0],114); // 800B09C0
  if (crb(c,2)) { goto L_800B09DC; } // 800B09C4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B09C8
  c->r[3]=c->r[31]|c->r[31]; // 800B09CC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B09D0
  c->ctr=c->r[12]; // 800B09D4
  if (true) { c->lr=0x800B09DCu; dispatch(c,c->ctr); } // 800B09D8
L_800B09DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B09DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B09E0
  c->lr=c->r[0]; // 800B09E4
  c->r[1]=c->r[1]+0x00000010u; // 800B09E8
  return; // 800B09EC
}

// fn_800B09F0
void f_800B09F0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800B09F0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B09F4
  f_802501B0(c); return; // 800B09F8
}

// fn_800B09FC
void f_800B09FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B09FC
  c->r[0]=c->lr; // 800B0A00
  c->r[7]=0u+0x803D0000u; // 800B0A04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B0A08
  c->r[0]=0u+0x00000000u; // 800B0A0C
  c->r[4]=R16(c->r[3]+0x000003BEu); // 800B0A10
  W16(c->r[3]+0x000003BCu,c->r[0]); // 800B0A14
  c->r[0]=rotl(c->r[4],0)&0x0000FFFEu; // 800B0A18
  c->r[4]=c->r[1]+0x00000008u; // 800B0A1C
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800B0A20
  {uint32_t ea=c->r[7]+0xFFFFEF90u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B0A24
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B0A28
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B0A2C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B0A30
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B0A34
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B0A38
  c->lr=0x800B0A40u; f_800B05EC(c); // 800B0A3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B0A40
  c->lr=c->r[0]; // 800B0A44
  c->r[1]=c->r[1]+0x00000020u; // 800B0A48
  return; // 800B0A4C
}

// fn_800B0A50
void f_800B0A50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0A50
  c->r[0]=c->lr; // 800B0A54
  W32(c->r[1]+0x00000084u,c->r[0]); // 800B0A58
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800B0A5C
  W32(c->r[1]+0x00000078u,c->r[30]); // 800B0A60
  c->r[30]=c->r[3]|c->r[3]; // 800B0A64
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B0A68
  cmps(c,0,(int32_t)c->r[4],0); // 800B0A6C
  if (crb(c,2)) { goto L_800B0ADC; } // 800B0A70
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800B0A74
  cmps(c,0,(int32_t)c->r[0],0); // 800B0A78
  if (!crb(c,2)) { goto L_800B0ADC; } // 800B0A7C
  c->r[3]=c->r[1]+0x00000008u; // 800B0A80
  c->r[4]=c->r[30]+0x0000002Cu; // 800B0A84
  c->lr=0x800B0A8Cu; f_800361A0(c); // 800B0A88
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0A8C
  c->r[31]=0u+0x80550000u; // 800B0A90
  {uint32_t ea=c->r[2]+0xFFFF99C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0A94
  c->r[31]=c->r[31]+0x00003D60u; // 800B0A98
  {uint32_t ea=c->r[2]+0xFFFF99CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0A9C
  c->r[5]=c->r[30]|c->r[30]; // 800B0AA0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B0AA4
  {uint32_t ea=c->r[2]+0xFFFF99B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0AA8
  c->r[3]=c->r[31]+0x00000010u; // 800B0AAC
  c->r[6]=c->r[1]+0x00000008u; // 800B0AB0
  c->r[7]=c->r[1]+0x00000018u; // 800B0AB4
  c->r[4]=0u+0x000001FFu; // 800B0AB8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800B0ABC
  c->lr=0x800B0AC4u; f_80226BE8(c); // 800B0AC0
  c->r[3]=c->r[31]+0x00000010u; // 800B0AC4
  c->r[4]=c->r[1]+0x00000018u; // 800B0AC8
  c->lr=0x800B0AD0u; f_80226CE8(c); // 800B0ACC
  c->r[3]=c->r[31]+0x00000010u; // 800B0AD0
  c->r[4]=c->r[1]+0x00000018u; // 800B0AD4
  c->lr=0x800B0ADCu; f_80226D68(c); // 800B0AD8
L_800B0ADC:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800B0ADC
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800B0AE0
  c->r[30]=R32(c->r[1]+0x00000078u); // 800B0AE4
  c->lr=c->r[0]; // 800B0AE8
  c->r[1]=c->r[1]+0x00000080u; // 800B0AEC
  return; // 800B0AF0
}

// fn_800B0AF4
void f_800B0AF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0AF4
  c->r[0]=c->lr; // 800B0AF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0AFC
  c->r[0]=c->r[3]|c->r[3]; // 800B0B00
  c->r[3]=0u+0x80550000u; // 800B0B04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0B08
  c->r[31]=c->r[4]|c->r[4]; // 800B0B0C
  c->r[4]=c->r[0]|c->r[0]; // 800B0B10
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800B0B14
  c->lr=0x800B0B1Cu; f_8019C920(c); // 800B0B18
  cmps(c,0,(int32_t)c->r[3],0); // 800B0B1C
  if (crb(c,2)) { goto L_800B0B28; } // 800B0B20
  W8(c->r[3]+0x0000006Eu,c->r[31]); // 800B0B24
L_800B0B28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0B28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0B2C
  c->lr=c->r[0]; // 800B0B30
  c->r[1]=c->r[1]+0x00000010u; // 800B0B34
  return; // 800B0B38
}

// fn_800B0B3C
void f_800B0B3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0B3C
  c->r[0]=c->lr; // 800B0B40
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B0B44
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800B0B48
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800B0B4C
  c->r[4]=0u+0x00000000u; // 800B0B50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0B54
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B0B58
  c->r[30]=c->r[3]|c->r[3]; // 800B0B5C
  c->lr=0x800B0B64u; f_801F57D0(c); // 800B0B60
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B0B64
  c->r[3]=c->r[30]|c->r[30]; // 800B0B68
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800B0B6C
  c->ctr=c->r[12]; // 800B0B70
  if (true) { c->lr=0x800B0B78u; dispatch(c,c->ctr); } // 800B0B74
  c->r[3]=c->r[30]|c->r[30]; // 800B0B78
  c->lr=0x800B0B80u; f_801F4B94(c); // 800B0B7C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800B0B80
  c->r[4]=0u+0x00000003u; // 800B0B84
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0B88
  c->r[5]=0u+0x00000010u; // 800B0B8C
  c->r[0]=c->r[0]|0x00000800u; // 800B0B90
  c->r[3]=0u+0x80550000u; // 800B0B94
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800B0B98
  c->f[3]=c->f[1]; // 800B0B9C
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800B0BA0
  c->r[3]=c->r[3]+0x00003D60u; // 800B0BA4
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B0BA8
  c->r[4]=c->r[30]+0x0000002Cu; // 800B0BAC
  W8(c->r[30]+0x0000006Du,c->r[5]); // 800B0BB0
  {uint32_t ea=c->r[2]+0xFFFF99DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0BB4
  c->r[5]=c->r[30]+0x00000030u; // 800B0BB8
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B0BBC
  c->r[6]=0u+0x00000000u; // 800B0BC0
  c->r[7]=0u+0x00000000u; // 800B0BC4
  c->lr=0x800B0BCCu; f_801D5488(c); // 800B0BC8
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B0BCC
  c->r[3]=c->r[30]|c->r[30]; // 800B0BD0
  c->lr=0x800B0BD8u; f_801F58BC(c); // 800B0BD4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B0BD8
  c->r[31]=0u+0x00000001u; // 800B0BDC
  c->r[0]=0u+0x00000000u; // 800B0BE0
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800B0BE4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B0BE8
  W32(c->r[3]+0x000000E4u,c->r[0]); // 800B0BEC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0BF0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B0BF4
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800B0BF8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B0BFC
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800B0C00
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B0C04
  c->lr=0x800B0C0Cu; f_802501B0(c); // 800B0C08
  c->r[0]=0u+0x000000FFu; // 800B0C0C
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800B0C10
  c->r[3]=c->r[30]|c->r[30]; // 800B0C14
  W32(c->r[30]+0x00000078u,c->r[0]); // 800B0C18
  W32(c->r[30]+0x00000098u,c->r[31]); // 800B0C1C
  c->lr=0x800B0C24u; f_800B1F68(c); // 800B0C20
  c->r[3]=c->r[30]|c->r[30]; // 800B0C24
  c->lr=0x800B0C2Cu; f_801F56F4(c); // 800B0C28
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B0C2C
  c->r[3]=c->r[30]|c->r[30]; // 800B0C30
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B0C34
  c->ctr=c->r[12]; // 800B0C38
  if (true) { c->lr=0x800B0C40u; dispatch(c,c->ctr); } // 800B0C3C
  c->r[3]=0u+0x805D0000u; // 800B0C40
  c->r[4]=c->r[30]+0x0000002Cu; // 800B0C44
  c->r[3]=c->r[3]+0x000078B0u; // 800B0C48
  c->lr=0x800B0C50u; f_802351CC(c); // 800B0C4C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B0C50
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800B0C54
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800B0C58
  W32(c->r[30]+0x00000444u,c->r[31]); // 800B0C5C
  c->lr=0x800B0C64u; f_8024E174(c); // 800B0C60
  W32(c->r[30]+0x00000438u,c->r[3]); // 800B0C64
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800B0C68
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800B0C6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0C70
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B0C74
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B0C78
  c->lr=c->r[0]; // 800B0C7C
  c->r[1]=c->r[1]+0x00000020u; // 800B0C80
  return; // 800B0C84
}

// fn_800B0C88
void f_800B0C88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0C88
  c->r[0]=c->lr; // 800B0C8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B0C90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B0C94
  c->r[31]=c->r[3]|c->r[3]; // 800B0C98
  c->lr=0x800B0CA0u; f_800B1A3C(c); // 800B0C9C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B0CA0
  c->r[3]=c->r[31]|c->r[31]; // 800B0CA4
  c->r[12]=R32(c->r[12]+0x00000068u); // 800B0CA8
  c->ctr=c->r[12]; // 800B0CAC
  if (true) { c->lr=0x800B0CB4u; dispatch(c,c->ctr); } // 800B0CB0
  c->r[3]=c->r[31]|c->r[31]; // 800B0CB4
  c->lr=0x800B0CBCu; f_801F4C0C(c); // 800B0CB8
  c->r[3]=c->r[31]|c->r[31]; // 800B0CBC
  c->lr=0x800B0CC4u; f_800B1C5C(c); // 800B0CC0
  c->r[3]=c->r[31]|c->r[31]; // 800B0CC4
  c->lr=0x800B0CCCu; f_801F56F4(c); // 800B0CC8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B0CCC
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B0CD0
  cmps(c,0,(int32_t)c->r[0],0); // 800B0CD4
  if (crb(c,2)) { goto L_800B0D5C; } // 800B0CD8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800B0CDC
  cmps(c,0,(int32_t)c->r[0],0); // 800B0CE0
  if (crb(c,2)) { goto L_800B0D5C; } // 800B0CE4
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B0CE8
  cmps(c,0,(int32_t)c->r[0],0); // 800B0CEC
  if (crb(c,2)) { goto L_800B0D28; } // 800B0CF0
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800B0CF4
  cmps(c,0,(int32_t)c->r[0],0); // 800B0CF8
  if (!crb(c,2)) { goto L_800B0D28; } // 800B0CFC
  c->r[4]=c->r[3]+0x000000B0u; // 800B0D00
  c->lr=0x800B0D08u; f_80250F18(c); // 800B0D04
  c->r[6]=R32(c->r[31]+0x00000394u); // 800B0D08
  c->r[3]=c->r[31]+0x0000002Cu; // 800B0D0C
  c->r[4]=c->r[31]+0x00000060u; // 800B0D10
  c->r[5]=c->r[1]+0x00000008u; // 800B0D14
  c->r[6]=c->r[6]+0x000000B0u; // 800B0D18
  c->r[7]=0u+0x00000000u; // 800B0D1C
  c->lr=0x800B0D24u; f_8002BE64(c); // 800B0D20
  goto L_800B0D44; // 800B0D24
L_800B0D28:;
  c->r[3]=c->r[3]+0x0000005Cu; // 800B0D28
  c->r[4]=c->r[31]+0x0000002Cu; // 800B0D2C
  c->lr=0x800B0D34u; f_800361A0(c); // 800B0D30
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B0D34
  c->r[4]=c->r[31]+0x00000060u; // 800B0D38
  c->r[3]=c->r[3]+0x00000068u; // 800B0D3C
  c->lr=0x800B0D44u; f_800361A0(c); // 800B0D40
L_800B0D44:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B0D44
  c->r[3]=c->r[31]|c->r[31]; // 800B0D48
  c->lr=0x800B0D50u; f_801F58FC(c); // 800B0D4C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B0D50
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B0D54
  c->lr=0x800B0D5Cu; f_8025037C(c); // 800B0D58
L_800B0D5C:;
  c->r[3]=c->r[31]|c->r[31]; // 800B0D5C
  c->lr=0x800B0D64u; f_800B1D40(c); // 800B0D60
  c->r[3]=c->r[31]|c->r[31]; // 800B0D64
  c->lr=0x800B0D6Cu; f_800B200C(c); // 800B0D68
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B0D6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B0D70
  c->lr=c->r[0]; // 800B0D74
  c->r[1]=c->r[1]+0x00000020u; // 800B0D78
  return; // 800B0D7C
}

// fn_800B0D80
void f_800B0D80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0D80
  c->r[0]=c->lr; // 800B0D84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0D88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0D8C
  c->r[31]=c->r[3]|c->r[3]; // 800B0D90
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B0D94
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B0D98
  c->lr=0x800B0DA0u; f_802501B0(c); // 800B0D9C
  c->r[3]=c->r[31]|c->r[31]; // 800B0DA0
  c->r[4]=0u+0x00000000u; // 800B0DA4
  c->lr=0x800B0DACu; f_801F5244(c); // 800B0DA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0DAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0DB0
  c->lr=c->r[0]; // 800B0DB4
  c->r[1]=c->r[1]+0x00000010u; // 800B0DB8
  return; // 800B0DBC
}

// fn_800B0DC0
void f_800B0DC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0DC0
  c->r[0]=c->lr; // 800B0DC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B0DC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B0DCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B0DD0
  c->r[30]=0u+0x00000000u; // 800B0DD4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B0DD8
  c->r[29]=c->r[3]|c->r[3]; // 800B0DDC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B0DE0
  W32(c->r[3]+0x00000098u,c->r[30]); // 800B0DE4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B0DE8
  c->lr=0x800B0DF0u; f_802501B0(c); // 800B0DEC
  c->r[3]=c->r[29]|c->r[29]; // 800B0DF0
  c->r[4]=0u+0x00000000u; // 800B0DF4
  c->lr=0x800B0DFCu; f_801F5244(c); // 800B0DF8
  c->r[4]=R32(c->r[29]+0x00000394u); // 800B0DFC
  c->r[3]=c->r[29]+0x0000002Cu; // 800B0E00
  c->r[4]=c->r[4]+0x0000005Cu; // 800B0E04
  c->lr=0x800B0E0Cu; f_800361A0(c); // 800B0E08
  c->r[4]=R32(c->r[29]+0x00000394u); // 800B0E0C
  c->r[3]=c->r[29]|c->r[29]; // 800B0E10
  c->lr=0x800B0E18u; f_801F5418(c); // 800B0E14
  cmps(c,0,(int32_t)c->r[3],0); // 800B0E18
  if (!crb(c,0)) { goto L_800B0F10; } // 800B0E1C
  c->r[4]=R16(c->r[29]+0x000003BEu); // 800B0E20
  c->r[0]=0u+0x00000001u; // 800B0E24
  W8(c->r[29]+0x0000006Fu,c->r[0]); // 800B0E28
  c->r[3]=0u+0x805D0000u; // 800B0E2C
  c->r[0]=c->r[4]|0x00000080u; // 800B0E30
  W16(c->r[29]+0x000003BEu,c->r[0]); // 800B0E34
  c->r[3]=c->r[3]+0x00003F6Cu; // 800B0E38
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0E3C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800B0E40
  c->lr=0x800B0E48u; f_800447F0(c); // 800B0E44
  c->r[0]=rotl(c->r[3],0)&0x00001000u; cr0(c,c->r[0]); // 800B0E48
  if (crb(c,2)) { goto L_800B0E8C; } // 800B0E4C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0E50
  c->r[3]=0u+0x80550000u; // 800B0E54
  {uint32_t ea=c->r[2]+0xFFFF99E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0E58
  c->r[3]=c->r[3]+0x00003D60u; // 800B0E5C
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0E60
  c->r[4]=c->r[29]+0x0000002Cu; // 800B0E64
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800B0E68
  c->r[5]=c->r[1]+0x00000008u; // 800B0E6C
  c->f[2]=c->f[1]; // 800B0E70
  c->r[6]=0u+0x00000000u; // 800B0E74
  c->f[3]=c->f[1]; // 800B0E78
  c->r[7]=0u+0x00000000u; // 800B0E7C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800B0E80
  c->lr=0x800B0E88u; f_801D5488(c); // 800B0E84
  goto L_800B0EF0; // 800B0E88
L_800B0E8C:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0E8C
  c->r[3]=0u+0x80550000u; // 800B0E90
  {uint32_t ea=c->r[2]+0xFFFF99E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0E94
  c->r[3]=c->r[3]+0x00003D60u; // 800B0E98
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0E9C
  c->r[4]=c->r[29]+0x0000002Cu; // 800B0EA0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B0EA4
  c->r[5]=c->r[1]+0x00000008u; // 800B0EA8
  c->f[2]=c->f[1]; // 800B0EAC
  c->r[6]=0u+0x00000000u; // 800B0EB0
  c->f[3]=c->f[1]; // 800B0EB4
  c->r[7]=0u+0x00000000u; // 800B0EB8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800B0EBC
  c->lr=0x800B0EC4u; f_801D5488(c); // 800B0EC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0EC4
  {uint32_t ea=c->r[29]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0EC8
  fcmp(c,0,c->f[1],c->f[0]); // 800B0ECC
  if (!crb(c,1)) { goto L_800B0EF0; } // 800B0ED0
  {uint32_t ea=c->r[2]+0xFFFF99E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0ED4
  c->r[3]=R32(c->r[29]+0x00000394u); // 800B0ED8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800B0EDC
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 800B0EE0
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 800B0EE4
  c->r[3]=R32(c->r[29]+0x00000394u); // 800B0EE8
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 800B0EEC
L_800B0EF0:;
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0EF0
  c->r[3]=c->r[29]|c->r[29]; // 800B0EF4
  c->r[4]=0u+0x00000064u; // 800B0EF8
  c->r[5]=0u+0x00000000u; // 800B0EFC
  c->r[6]=0u+0x00000000u; // 800B0F00
  c->r[7]=0u+0x00000000u; // 800B0F04
  c->lr=0x800B0F0Cu; f_801F4D44(c); // 800B0F08
  goto L_800B0F40; // 800B0F0C
L_800B0F10:;
  c->r[31]=0u+0x805D0000u; // 800B0F10
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B0F14
  c->lr=0x800B0F1Cu; f_800447E4(c); // 800B0F18
  cmpu(c,0,c->r[3],0x00000001u); // 800B0F1C
  if (!crb(c,2)) { goto L_800B0F2C; } // 800B0F20
  W8(c->r[29]+0x0000006Fu,c->r[30]); // 800B0F24
  goto L_800B0F38; // 800B0F28
L_800B0F2C:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B0F2C
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800B0F30
  W8(c->r[29]+0x0000006Fu,c->r[0]); // 800B0F34
L_800B0F38:;
  c->r[3]=c->r[29]|c->r[29]; // 800B0F38
  c->lr=0x800B0F40u; f_801F5B14(c); // 800B0F3C
L_800B0F40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B0F40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B0F44
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B0F48
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B0F4C
  c->lr=c->r[0]; // 800B0F50
  c->r[1]=c->r[1]+0x00000020u; // 800B0F54
  return; // 800B0F58
}

// fn_800B0F5C
void f_800B0F5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0F5C
  c->r[0]=c->lr; // 800B0F60
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B0F64
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800B0F68
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800B0F6C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 800B0F70
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 800B0F74
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800B0F78
  c->r[31]=0u+0x803A0000u; // 800B0F7C
  c->r[31]=c->r[31]+0xFFFFC990u; // 800B0F80
  W32(c->r[1]+0x00000098u,c->r[30]); // 800B0F84
  c->r[30]=c->r[3]|c->r[3]; // 800B0F88
  W32(c->r[1]+0x00000094u,c->r[29]); // 800B0F8C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B0F90
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B0F94
  c->lr=0x800B0F9Cu; f_802501B0(c); // 800B0F98
  c->r[3]=c->r[30]+0x00000038u; // 800B0F9C
  c->r[4]=c->r[30]+0x0000002Cu; // 800B0FA0
  c->lr=0x800B0FA8u; f_800361A0(c); // 800B0FA4
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0FA8
  c->r[3]=0u+0x80550000u; // 800B0FAC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0FB0
  c->r[3]=c->r[3]+0x00003D60u; // 800B0FB4
  c->f[2]=c->f[1]; // 800B0FB8
  c->r[4]=c->r[30]+0x00000038u; // 800B0FBC
  c->f[3]=c->f[1]; // 800B0FC0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800B0FC4
  c->r[5]=c->r[1]+0x00000008u; // 800B0FC8
  c->r[6]=0u+0x00000000u; // 800B0FCC
  c->r[7]=0u+0x00000000u; // 800B0FD0
  c->lr=0x800B0FD8u; f_801D5488(c); // 800B0FD4
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B0FD8
  c->r[3]=c->r[30]+0x00000060u; // 800B0FDC
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0FE0
  c->r[4]=c->r[5]+0x00000068u; // 800B0FE4
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B0FE8
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0FEC
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800B0FF0
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0FF4
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800B0FF8
  c->lr=0x800B1000u; f_800361A0(c); // 800B0FFC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B1000
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B1004
  c->lr=0x800B100Cu; f_802501B0(c); // 800B1008
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800B100C
  c->r[5]=c->r[31]+0x0000003Cu; // 800B1010
  c->r[3]=c->r[30]+0x00000044u; // 800B1014
  c->r[4]=c->r[1]+0x00000078u; // 800B1018
  c->r[0]=c->r[0]|0x00002000u; // 800B101C
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B1020
  c->r[7]=R32(c->r[31]+0x0000003Cu); // 800B1024
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B1028
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B102C
  W32(c->r[1]+0x00000078u,c->r[7]); // 800B1030
  W32(c->r[1]+0x0000007Cu,c->r[6]); // 800B1034
  W32(c->r[1]+0x00000080u,c->r[0]); // 800B1038
  c->lr=0x800B1040u; f_800361A0(c); // 800B103C
  c->r[4]=c->r[31]+0x00000048u; // 800B1040
  c->r[6]=R32(c->r[31]+0x00000048u); // 800B1044
  c->r[5]=R32(c->r[4]+0x00000004u); // 800B1048
  c->r[3]=c->r[30]+0x00000050u; // 800B104C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800B1050
  c->r[4]=c->r[1]+0x0000006Cu; // 800B1054
  W32(c->r[1]+0x0000006Cu,c->r[6]); // 800B1058
  W32(c->r[1]+0x00000070u,c->r[5]); // 800B105C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B1060
  c->lr=0x800B1068u; f_800361A0(c); // 800B1064
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B1068
  c->r[0]=0u+0x00000001u; // 800B106C
  c->r[4]=c->r[30]+0x0000002Cu; // 800B1070
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800B1074
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B1078
  c->r[3]=c->r[3]+0x0000005Cu; // 800B107C
  c->lr=0x800B1084u; f_800361A0(c); // 800B1080
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1084
  c->r[4]=0u+0x00000040u; // 800B1088
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B108C
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B1090
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B1094
  c->r[3]=c->r[3]+0x0000001Cu; // 800B1098
  c->lr=0x800B10A0u; f_802518A4(c); // 800B109C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B10A0
  c->r[4]=0u+0x00000006u; // 800B10A4
  c->r[3]=c->r[3]+0x0000001Cu; // 800B10A8
  c->lr=0x800B10B0u; f_80251824(c); // 800B10AC
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B10B0
  c->r[3]=c->r[30]|c->r[30]; // 800B10B4
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B10B8
  c->r[5]=0u+0x00000000u; // 800B10BC
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B10C0
  c->r[6]=0u+0x00000001u; // 800B10C4
  c->f[2]=c->f[1]; // 800B10C8
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B10CC
  c->ctr=c->r[12]; // 800B10D0
  if (true) { c->lr=0x800B10D8u; dispatch(c,c->ctr); } // 800B10D4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B10D8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B10DC
  c->lr=0x800B10E4u; f_802501B0(c); // 800B10E0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B10E4
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B10E8
  cmps(c,0,(int32_t)c->r[0],0); // 800B10EC
  if (crb(c,2)) { goto L_800B1310; } // 800B10F0
  c->r[3]=c->r[3]+0x00000068u; // 800B10F4
  c->r[4]=c->r[30]+0x00000060u; // 800B10F8
  c->lr=0x800B1100u; f_800361A0(c); // 800B10FC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B1100
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B1104
  c->lr=0x800B110Cu; f_8025037C(c); // 800B1108
  c->r[6]=R32(c->r[30]+0x00000394u); // 800B110C
  c->r[3]=c->r[1]+0x00000054u; // 800B1110
  c->r[4]=c->r[30]+0x00000060u; // 800B1114
  c->r[5]=c->r[1]+0x00000060u; // 800B1118
  c->r[6]=c->r[6]+0x000000B0u; // 800B111C
  c->r[7]=0u+0x00000000u; // 800B1120
  c->lr=0x800B1128u; f_8002BE64(c); // 800B1124
  c->r[0]=R32(c->r[30]+0x000003C4u); // 800B1128
  cmps(c,0,(int32_t)c->r[0],0); // 800B112C
  if (crb(c,2)) { goto L_800B117C; } // 800B1130
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800B1134
  c->r[4]=c->r[30]|c->r[30]; // 800B1138
  c->r[0]=R32(c->r[30]+0x00000030u); // 800B113C
  c->r[7]=c->r[1]+0x0000003Cu; // 800B1140
  c->r[6]=0u+0x0000000Au; // 800B1144
  c->r[8]=0u+0x00000000u; // 800B1148
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800B114C
  W32(c->r[1]+0x00000040u,c->r[0]); // 800B1150
  c->r[0]=R32(c->r[30]+0x00000034u); // 800B1154
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B1158
  c->r[3]=R32(c->r[30]+0x00000438u); // 800B115C
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B1160
  {uint32_t ea=c->r[30]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1164
  c->lr=0x800B116Cu; f_801FA6A4(c); // 800B1168
  c->r[3]=c->r[30]+0x00000044u; // 800B116C
  c->r[4]=c->r[30]+0x000003CCu; // 800B1170
  c->lr=0x800B1178u; f_800361A0(c); // 800B1174
  goto L_800B11BC; // 800B1178
L_800B117C:;
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 800B117C
  c->r[3]=0u+0x805D0000u; // 800B1180
  c->r[0]=R32(c->r[30]+0x00000030u); // 800B1184
  c->r[3]=c->r[3]+0x00003F6Cu; // 800B1188
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B118C
  c->r[4]=c->r[30]|c->r[30]; // 800B1190
  W32(c->r[1]+0x00000030u,c->r[5]); // 800B1194
  c->r[7]=c->r[1]+0x00000030u; // 800B1198
  c->r[6]=0u+0x0000000Au; // 800B119C
  c->r[8]=0u+0x00000000u; // 800B11A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B11A4
  c->r[0]=R32(c->r[30]+0x00000034u); // 800B11A8
  W32(c->r[1]+0x00000038u,c->r[0]); // 800B11AC
  c->r[3]=R32(c->r[30]+0x00000438u); // 800B11B0
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B11B4
  c->lr=0x800B11BCu; f_801FA6A4(c); // 800B11B8
L_800B11BC:;
  c->r[29]=0u+0x805D0000u; // 800B11BC
  c->r[3]=c->r[29]+0x000078B0u; // 800B11C0
  c->lr=0x800B11C8u; f_80037028(c); // 800B11C4
  cmps(c,0,(int32_t)c->r[3],2); // 800B11C8
  if (!crb(c,2)) { goto L_800B12FC; } // 800B11CC
  c->r[3]=c->r[29]+0x000078B0u; // 800B11D0
  c->lr=0x800B11D8u; f_8003CEF4(c); // 800B11D4
  cmps(c,0,(int32_t)c->r[3],2); // 800B11D8
  if (!crb(c,2)) { goto L_800B12FC; } // 800B11DC
  c->r[3]=0u+0x805D0000u; // 800B11E0
  c->r[3]=c->r[3]+0x00003F6Cu; // 800B11E4
  c->lr=0x800B11ECu; f_800447F0(c); // 800B11E8
  c->r[0]=rotl(c->r[3],0)&0x00001000u; cr0(c,c->r[0]); // 800B11EC
  if (crb(c,2)) { goto L_800B120C; } // 800B11F0
  c->r[3]=R32(c->r[30]+0x00000438u); // 800B11F4
  c->lr=0x800B11FCu; f_801FCBEC(c); // 800B11F8
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800B11FC
  c->r[0]=c->r[0]|0x00000004u; // 800B1200
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B1204
  goto L_800B12FC; // 800B1208
L_800B120C:;
  c->r[6]=R32(c->r[30]+0x0000002Cu); // 800B120C
  c->r[3]=0u+0x805D0000u; // 800B1210
  c->r[0]=R32(c->r[30]+0x00000030u); // 800B1214
  c->r[3]=c->r[3]+0x00006CF8u; // 800B1218
  c->r[4]=c->r[1]+0x00000024u; // 800B121C
  c->r[5]=0u+0x00040000u; // 800B1220
  W32(c->r[1]+0x00000024u,c->r[6]); // 800B1224
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B1228
  c->r[0]=R32(c->r[30]+0x00000034u); // 800B122C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800B1230
  c->lr=0x800B1238u; f_802236F8(c); // 800B1234
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800B1238
  cmpu(c,0,c->r[0],0x0000000Cu); // 800B123C
  if (!crb(c,2)) { goto L_800B12FC; } // 800B1240
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1244
  {uint32_t ea=c->r[2]+0xFFFF99ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1248
  fcmp(c,0,c->f[1],c->f[0]); // 800B124C
  if (!crb(c,0)) { goto L_800B12FC; } // 800B1250
  c->r[4]=c->r[31]+0x00000054u; // 800B1254
  c->r[5]=R32(c->r[31]+0x00000054u); // 800B1258
  c->r[0]=R32(c->r[4]+0x00000004u); // 800B125C
  c->r[3]=c->r[30]+0x00000044u; // 800B1260
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1264
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B1268
  c->r[4]=R32(c->r[4]+0x00000008u); // 800B126C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B1270
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1274
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800B1278
  W32(c->r[1]+0x00000048u,c->r[5]); // 800B127C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800B1280
  W32(c->r[1]+0x00000050u,c->r[4]); // 800B1284
  {uint32_t ea=c->r[30]+0x00000048u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B1288
  W32(c->r[1]+0x00000018u,c->r[5]); // 800B128C
  W32(c->r[1]+0x00000020u,c->r[4]); // 800B1290
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 800B1294
  c->lr=0x800B129Cu; f_80296B0C(c); // 800B1298
  {uint32_t ea=c->r[2]+0xFFFF99E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B129C
  c->f[30]=c->f[1]; // 800B12A0
  fcmp(c,0,c->f[1],c->f[0]); // 800B12A4
  if (!crb(c,0)) { goto L_800B12B0; } // 800B12A8
  c->f[30]=c->f[0]; // 800B12AC
L_800B12B0:;
  c->r[3]=c->r[1]+0x00000048u; // 800B12B0
  c->r[4]=c->r[30]+0x0000002Cu; // 800B12B4
  c->r[5]=c->r[3]|c->r[3]; // 800B12B8
  c->lr=0x800B12C0u; f_80296A70(c); // 800B12BC
  c->r[3]=c->r[1]+0x00000048u; // 800B12C0
  c->lr=0x800B12C8u; f_80296B0C(c); // 800B12C4
  {uint32_t ea=c->r[2]+0xFFFF99F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B12C8
  fcmp(c,0,c->f[1],c->f[0]); // 800B12CC
  if (!crb(c,0)) { goto L_800B12DC; } // 800B12D0
  {uint32_t ea=c->r[2]+0xFFFF99F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B12D4
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800B12D8
L_800B12DC:;
  c->r[3]=c->r[1]+0x00000048u; // 800B12DC
  c->r[4]=c->r[30]+0x00000044u; // 800B12E0
  c->lr=0x800B12E8u; f_80296AB0(c); // 800B12E4
  c->f[1]=c->f[30]; // 800B12E8
  c->r[3]=c->r[30]+0x00000044u; // 800B12EC
  c->r[4]=c->r[3]|c->r[3]; // 800B12F0
  c->lr=0x800B12F8u; f_80296A94(c); // 800B12F4
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[31]);} // 800B12F8
L_800B12FC:;
  c->r[3]=R32(c->r[30]+0x00000438u); // 800B12FC
  c->r[5]=c->r[30]+0x00000044u; // 800B1300
  c->r[6]=c->r[31]+0x00000000u; // 800B1304
  c->r[4]=0u+0x00000000u; // 800B1308
  c->lr=0x800B1310u; f_801FBEC0(c); // 800B130C
L_800B1310:;
  c->r[0]=0u+0x00000000u; // 800B1310
  c->r[3]=c->r[30]|c->r[30]; // 800B1314
  W32(c->r[30]+0x00000098u,c->r[0]); // 800B1318
  c->r[4]=0u+0x00000000u; // 800B131C
  c->lr=0x800B1324u; f_801F7C00(c); // 800B1320
  c->r[7]=0u+0x803D0000u; // 800B1324
  {uint32_t ea=c->r[7]+0xFFFFF038u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B1328
  c->r[3]=c->r[30]|c->r[30]; // 800B132C
  c->r[4]=c->r[1]+0x0000000Cu; // 800B1330
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B1334
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B1338
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B133C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800B1340
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1344
  c->lr=0x800B134Cu; f_800B1378(c); // 800B1348
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800B134C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800B1350
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 800B1354
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 800B1358
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800B135C
  c->r[30]=R32(c->r[1]+0x00000098u); // 800B1360
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800B1364
  c->r[29]=R32(c->r[1]+0x00000094u); // 800B1368
  c->lr=c->r[0]; // 800B136C
  c->r[1]=c->r[1]+0x000000C0u; // 800B1370
  return; // 800B1374
}

// fn_800B1378
void f_800B1378(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1378
  c->r[0]=c->lr; // 800B137C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1380
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B1384
  c->r[31]=c->r[4]|c->r[4]; // 800B1388
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B138C
  c->r[30]=c->r[3]|c->r[3]; // 800B1390
  c->r[3]=c->r[31]|c->r[31]; // 800B1394
  c->lr=0x800B139Cu; f_802B9FDC(c); // 800B1398
  cmps(c,0,(int32_t)c->r[3],0); // 800B139C
  if (crb(c,2)) { goto L_800B13BC; } // 800B13A0
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B13A4
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B13A8
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B13AC
  W32(c->r[30]+0x00000020u,c->r[0]); // 800B13B0
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B13B4
  W32(c->r[30]+0x00000024u,c->r[0]); // 800B13B8
L_800B13BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B13BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B13C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B13C4
  c->lr=c->r[0]; // 800B13C8
  c->r[1]=c->r[1]+0x00000010u; // 800B13CC
  return; // 800B13D0
}

// fn_800B13D4
void f_800B13D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B13D4
  c->r[0]=c->lr; // 800B13D8
  c->r[4]=0u+0x00000000u; // 800B13DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B13E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B13E4
  c->r[31]=c->r[3]|c->r[3]; // 800B13E8
  c->r[3]=R32(c->r[3]+0x00000438u); // 800B13EC
  c->lr=0x800B13F4u; f_801FAF00(c); // 800B13F0
  cmps(c,0,(int32_t)c->r[3],0); // 800B13F4
  if (!crb(c,2)) { goto L_800B1524; } // 800B13F8
  c->r[0]=0u+0x00000001u; // 800B13FC
  c->r[3]=c->r[31]|c->r[31]; // 800B1400
  W32(c->r[31]+0x00000098u,c->r[0]); // 800B1404
  c->r[4]=0u+0x00000004u; // 800B1408
  c->lr=0x800B1410u; f_801F5AB4(c); // 800B140C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B1410
  c->r[3]=c->r[31]+0x0000002Cu; // 800B1414
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B1418
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800B141C
  c->r[0]=c->r[0]|0x00000004u; // 800B1420
  c->r[4]=c->r[4]+0x0000005Cu; // 800B1424
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800B1428
  c->lr=0x800B1430u; f_800361A0(c); // 800B142C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B1430
  c->r[3]=c->r[31]+0x00000060u; // 800B1434
  c->r[4]=c->r[4]+0x00000068u; // 800B1438
  c->lr=0x800B1440u; f_800361A0(c); // 800B143C
  c->r[3]=R32(c->r[31]+0x00000438u); // 800B1440
  c->lr=0x800B1448u; f_8004457C(c); // 800B1444
  cmpu(c,0,c->r[3],0x00000001u); // 800B1448
  if (!crb(c,2)) { goto L_800B1478; } // 800B144C
  c->r[3]=0u+0x80620000u; // 800B1450
  c->r[4]=0u+0x0000000Bu; // 800B1454
  c->r[3]=c->r[3]+0x00007688u; // 800B1458
  c->r[3]=R32(c->r[3]+0x00000014u); // 800B145C
  c->lr=0x800B1464u; f_80038AF4(c); // 800B1460
  cmps(c,0,(int32_t)c->r[3],0); // 800B1464
  if (!crb(c,2)) { goto L_800B1478; } // 800B1468
  c->r[0]=0u+0x0000000Fu; // 800B146C
  W16(c->r[31]+0x000003B8u,c->r[0]); // 800B1470
  goto L_800B1500; // 800B1474
L_800B1478:;
  c->r[3]=0u+0x805D0000u; // 800B1478
  c->r[3]=c->r[3]+0x000078B0u; // 800B147C
  c->lr=0x800B1484u; f_8003CEF4(c); // 800B1480
  cmps(c,0,(int32_t)c->r[3],2); // 800B1484
  if (!crb(c,2)) { goto L_800B14D0; } // 800B1488
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B148C
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1490
  fcmp(c,0,c->f[1],c->f[0]); // 800B1494
  if (!crb(c,0)) { goto L_800B14D0; } // 800B1498
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B149C
  {uint32_t ea=c->r[2]+0xFFFF99FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B14A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800B14A4
  c->lr=0x800B14ACu; f_8002C1B0(c); // 800B14A8
  {uint32_t ea=c->r[2]+0xFFFF9A00u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B14AC
  fcmp(c,0,c->f[1],c->f[0]); // 800B14B0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800B14B4
  if (!crb(c,2)) { goto L_800B14D0; } // 800B14B8
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B14BC
  {uint32_t ea=c->r[2]+0xFFFF9A04u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B14C0
  fcmp(c,0,c->f[1],c->f[0]); // 800B14C4
  if (!crb(c,1)) { goto L_800B14D0; } // 800B14C8
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B14CC
L_800B14D0:;
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800B14D0
  c->r[3]=0u+0x805D0000u; // 800B14D4
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B14D8
  c->r[3]=c->r[3]+0x00006CF8u; // 800B14DC
  c->r[4]=c->r[1]+0x00000008u; // 800B14E0
  c->r[5]=0u+0x00040000u; // 800B14E4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B14E8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B14EC
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B14F0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B14F4
  c->lr=0x800B14FCu; f_802236F8(c); // 800B14F8
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800B14FC
L_800B1500:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B1500
  c->r[3]=c->r[31]|c->r[31]; // 800B1504
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B1508
  c->ctr=c->r[12]; // 800B150C
  if (true) { c->lr=0x800B1514u; dispatch(c,c->ctr); } // 800B1510
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B1514
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B1518
  c->lr=0x800B1520u; f_8025037C(c); // 800B151C
  goto L_800B1544; // 800B1520
L_800B1524:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B1524
  c->r[3]=c->r[31]+0x0000002Cu; // 800B1528
  c->r[4]=c->r[4]+0x0000005Cu; // 800B152C
  c->lr=0x800B1534u; f_800361A0(c); // 800B1530
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B1534
  c->r[3]=c->r[31]+0x00000060u; // 800B1538
  c->r[4]=c->r[4]+0x00000068u; // 800B153C
  c->lr=0x800B1544u; f_800361A0(c); // 800B1540
L_800B1544:;
  c->r[3]=c->r[31]|c->r[31]; // 800B1544
  c->r[4]=0u+0x00000000u; // 800B1548
  c->lr=0x800B1550u; f_801F7C00(c); // 800B154C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B1550
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B1554
  c->lr=c->r[0]; // 800B1558
  c->r[1]=c->r[1]+0x00000020u; // 800B155C
  return; // 800B1560
}

// fn_800B1564
void f_800B1564(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1564
  c->r[0]=c->lr; // 800B1568
  W32(c->r[1]+0x00000084u,c->r[0]); // 800B156C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800B1570
  c->r[31]=0u+0x803A0000u; // 800B1574
  c->r[31]=c->r[31]+0xFFFFC990u; // 800B1578
  W32(c->r[1]+0x00000078u,c->r[30]); // 800B157C
  c->r[30]=c->r[3]|c->r[3]; // 800B1580
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B1584
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B1588
  c->lr=0x800B1590u; f_802501B0(c); // 800B158C
  c->r[3]=c->r[30]+0x00000038u; // 800B1590
  c->r[4]=c->r[30]+0x0000002Cu; // 800B1594
  c->lr=0x800B159Cu; f_800361A0(c); // 800B1598
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B159C
  c->r[3]=0u+0x80550000u; // 800B15A0
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B15A4
  c->r[3]=c->r[3]+0x00003D60u; // 800B15A8
  c->f[2]=c->f[1]; // 800B15AC
  c->r[4]=c->r[30]+0x00000038u; // 800B15B0
  c->f[3]=c->f[1]; // 800B15B4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800B15B8
  c->r[5]=c->r[1]+0x00000008u; // 800B15BC
  c->r[6]=0u+0x00000000u; // 800B15C0
  c->r[7]=0u+0x00000000u; // 800B15C4
  c->lr=0x800B15CCu; f_801D5488(c); // 800B15C8
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B15CC
  c->r[3]=c->r[30]+0x00000060u; // 800B15D0
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B15D4
  c->r[4]=c->r[5]+0x00000068u; // 800B15D8
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B15DC
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B15E0
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800B15E4
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B15E8
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800B15EC
  c->lr=0x800B15F4u; f_800361A0(c); // 800B15F0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B15F4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B15F8
  c->lr=0x800B1600u; f_802501B0(c); // 800B15FC
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800B1600
  c->r[5]=c->r[31]+0x00000060u; // 800B1604
  c->r[3]=c->r[30]+0x00000044u; // 800B1608
  c->r[4]=c->r[1]+0x00000060u; // 800B160C
  c->r[0]=c->r[0]|0x00002000u; // 800B1610
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B1614
  c->r[7]=R32(c->r[31]+0x00000060u); // 800B1618
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B161C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B1620
  W32(c->r[1]+0x00000060u,c->r[7]); // 800B1624
  W32(c->r[1]+0x00000064u,c->r[6]); // 800B1628
  W32(c->r[1]+0x00000068u,c->r[0]); // 800B162C
  c->lr=0x800B1634u; f_800361A0(c); // 800B1630
  c->r[4]=c->r[31]+0x0000006Cu; // 800B1634
  c->r[6]=R32(c->r[31]+0x0000006Cu); // 800B1638
  c->r[5]=R32(c->r[4]+0x00000004u); // 800B163C
  c->r[3]=c->r[30]+0x00000050u; // 800B1640
  c->r[0]=R32(c->r[4]+0x00000008u); // 800B1644
  c->r[4]=c->r[1]+0x00000054u; // 800B1648
  W32(c->r[1]+0x00000054u,c->r[6]); // 800B164C
  W32(c->r[1]+0x00000058u,c->r[5]); // 800B1650
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800B1654
  c->lr=0x800B165Cu; f_800361A0(c); // 800B1658
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B165C
  c->r[0]=0u+0x00000001u; // 800B1660
  c->r[4]=c->r[30]+0x0000002Cu; // 800B1664
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800B1668
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B166C
  c->r[3]=c->r[3]+0x0000005Cu; // 800B1670
  c->lr=0x800B1678u; f_800361A0(c); // 800B1674
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1678
  c->r[4]=0u+0x00000040u; // 800B167C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B1680
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B1684
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B1688
  c->r[3]=c->r[3]+0x0000001Cu; // 800B168C
  c->lr=0x800B1694u; f_802518A4(c); // 800B1690
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B1694
  c->r[4]=0u+0x00000006u; // 800B1698
  c->r[3]=c->r[3]+0x0000001Cu; // 800B169C
  c->lr=0x800B16A4u; f_80251824(c); // 800B16A0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B16A4
  c->r[3]=c->r[30]|c->r[30]; // 800B16A8
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B16AC
  c->r[5]=0u+0x00000000u; // 800B16B0
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B16B4
  c->r[6]=0u+0x00000001u; // 800B16B8
  c->f[2]=c->f[1]; // 800B16BC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B16C0
  c->ctr=c->r[12]; // 800B16C4
  if (true) { c->lr=0x800B16CCu; dispatch(c,c->ctr); } // 800B16C8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B16CC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B16D0
  c->lr=0x800B16D8u; f_802501B0(c); // 800B16D4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B16D8
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B16DC
  cmps(c,0,(int32_t)c->r[0],0); // 800B16E0
  if (crb(c,2)) { goto L_800B17DC; } // 800B16E4
  c->r[3]=c->r[3]+0x00000068u; // 800B16E8
  c->r[4]=c->r[30]+0x00000060u; // 800B16EC
  c->lr=0x800B16F4u; f_800361A0(c); // 800B16F0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B16F4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B16F8
  c->lr=0x800B1700u; f_8025037C(c); // 800B16FC
  c->r[6]=R32(c->r[30]+0x00000394u); // 800B1700
  c->r[3]=c->r[1]+0x0000003Cu; // 800B1704
  c->r[4]=c->r[30]+0x00000060u; // 800B1708
  c->r[5]=c->r[1]+0x00000048u; // 800B170C
  c->r[6]=c->r[6]+0x000000B0u; // 800B1710
  c->r[7]=0u+0x00000000u; // 800B1714
  c->lr=0x800B171Cu; f_8002BE64(c); // 800B1718
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800B171C
  c->r[0]=R32(c->r[30]+0x00000030u); // 800B1720
  W32(c->r[1]+0x00000030u,c->r[3]); // 800B1724
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B1728
  c->r[0]=R32(c->r[30]+0x00000034u); // 800B172C
  W32(c->r[1]+0x00000038u,c->r[0]); // 800B1730
  c->r[0]=R32(c->r[30]+0x000003C4u); // 800B1734
  cmps(c,0,(int32_t)c->r[0],0); // 800B1738
  if (crb(c,2)) { goto L_800B1788; } // 800B173C
  c->r[3]=c->r[1]+0x00000030u; // 800B1740
  c->r[4]=c->r[30]+0x000003CCu; // 800B1744
  c->lr=0x800B174Cu; f_800361A0(c); // 800B1748
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800B174C
  c->r[4]=c->r[30]|c->r[30]; // 800B1750
  c->r[0]=R32(c->r[30]+0x00000030u); // 800B1754
  c->r[7]=c->r[1]+0x00000024u; // 800B1758
  c->r[6]=0u+0x0000000Au; // 800B175C
  c->r[8]=0u+0x00000000u; // 800B1760
  W32(c->r[1]+0x00000024u,c->r[3]); // 800B1764
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B1768
  c->r[0]=R32(c->r[30]+0x00000034u); // 800B176C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800B1770
  c->r[3]=R32(c->r[30]+0x00000438u); // 800B1774
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B1778
  {uint32_t ea=c->r[30]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B177C
  c->lr=0x800B1784u; f_801FA6A4(c); // 800B1780
  goto L_800B17C8; // 800B1784
L_800B1788:;
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 800B1788
  c->r[3]=0u+0x805D0000u; // 800B178C
  c->r[0]=R32(c->r[30]+0x00000030u); // 800B1790
  c->r[3]=c->r[3]+0x00003F6Cu; // 800B1794
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1798
  c->r[4]=c->r[30]|c->r[30]; // 800B179C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800B17A0
  c->r[7]=c->r[1]+0x00000018u; // 800B17A4
  c->r[6]=0u+0x0000000Au; // 800B17A8
  c->r[8]=0u+0x00000000u; // 800B17AC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B17B0
  c->r[0]=R32(c->r[30]+0x00000034u); // 800B17B4
  W32(c->r[1]+0x00000020u,c->r[0]); // 800B17B8
  c->r[3]=R32(c->r[30]+0x00000438u); // 800B17BC
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B17C0
  c->lr=0x800B17C8u; f_801FA6A4(c); // 800B17C4
L_800B17C8:;
  c->r[3]=R32(c->r[30]+0x00000438u); // 800B17C8
  c->r[5]=c->r[30]+0x00000044u; // 800B17CC
  c->r[6]=c->r[31]+0x00000000u; // 800B17D0
  c->r[4]=0u+0x00000000u; // 800B17D4
  c->lr=0x800B17DCu; f_801FBEC0(c); // 800B17D8
L_800B17DC:;
  c->r[0]=0u+0x00000000u; // 800B17DC
  c->r[7]=0u+0x803D0000u; // 800B17E0
  W32(c->r[30]+0x00000098u,c->r[0]); // 800B17E4
  c->r[3]=c->r[30]|c->r[30]; // 800B17E8
  c->r[4]=c->r[1]+0x0000000Cu; // 800B17EC
  {uint32_t ea=c->r[7]+0xFFFFF044u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B17F0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B17F4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B17F8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B17FC
  W32(c->r[1]+0x00000010u,c->r[5]); // 800B1800
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1804
  c->lr=0x800B180Cu; f_800B1378(c); // 800B1808
  c->r[0]=R32(c->r[1]+0x00000084u); // 800B180C
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800B1810
  c->r[30]=R32(c->r[1]+0x00000078u); // 800B1814
  c->lr=c->r[0]; // 800B1818
  c->r[1]=c->r[1]+0x00000080u; // 800B181C
  return; // 800B1820
}

// fn_800B1824
void f_800B1824(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1824
  c->r[0]=c->lr; // 800B1828
  c->r[4]=0u+0x00000000u; // 800B182C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B1830
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800B1834
  c->r[31]=c->r[3]|c->r[3]; // 800B1838
  c->r[3]=R32(c->r[3]+0x00000438u); // 800B183C
  c->lr=0x800B1844u; f_801FAF00(c); // 800B1840
  cmps(c,0,(int32_t)c->r[3],0); // 800B1844
  if (!crb(c,2)) { goto L_800B18E4; } // 800B1848
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B184C
  c->r[5]=0u+0x00000001u; // 800B1850
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B1854
  c->r[3]=c->r[31]+0x0000002Cu; // 800B1858
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800B185C
  W32(c->r[31]+0x00000098u,c->r[5]); // 800B1860
  c->r[0]=c->r[0]|0x00000004u; // 800B1864
  c->r[4]=c->r[4]+0x0000005Cu; // 800B1868
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800B186C
  c->lr=0x800B1874u; f_800361A0(c); // 800B1870
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B1874
  c->r[3]=c->r[31]+0x00000060u; // 800B1878
  c->r[4]=c->r[4]+0x00000068u; // 800B187C
  c->lr=0x800B1884u; f_800361A0(c); // 800B1880
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800B1884
  c->r[3]=0u+0x805D0000u; // 800B1888
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B188C
  c->r[3]=c->r[3]+0x00006CF8u; // 800B1890
  c->r[4]=c->r[1]+0x00000008u; // 800B1894
  c->r[5]=0u+0x00040000u; // 800B1898
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B189C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B18A0
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B18A4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B18A8
  c->lr=0x800B18B0u; f_802236F8(c); // 800B18AC
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800B18B0
  c->r[3]=c->r[31]|c->r[31]; // 800B18B4
  c->r[4]=0u+0x00000004u; // 800B18B8
  c->lr=0x800B18C0u; f_801F5AB4(c); // 800B18BC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B18C0
  c->r[3]=c->r[31]|c->r[31]; // 800B18C4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B18C8
  c->ctr=c->r[12]; // 800B18CC
  if (true) { c->lr=0x800B18D4u; dispatch(c,c->ctr); } // 800B18D0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B18D4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B18D8
  c->lr=0x800B18E0u; f_8025037C(c); // 800B18DC
  goto L_800B1934; // 800B18E0
L_800B18E4:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B18E4
  c->r[3]=c->r[31]+0x0000002Cu; // 800B18E8
  c->r[4]=c->r[4]+0x0000005Cu; // 800B18EC
  c->lr=0x800B18F4u; f_800361A0(c); // 800B18F0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B18F4
  c->r[3]=c->r[31]+0x00000060u; // 800B18F8
  c->r[4]=c->r[4]+0x00000068u; // 800B18FC
  c->lr=0x800B1904u; f_800361A0(c); // 800B1900
  c->r[3]=R32(c->r[31]+0x00000438u); // 800B1904
  c->r[5]=c->r[1]+0x00000014u; // 800B1908
  c->r[4]=0u+0x00000000u; // 800B190C
  c->lr=0x800B1914u; f_801FBF44(c); // 800B1910
  cmps(c,0,(int32_t)c->r[3],0); // 800B1914
  if (crb(c,2)) { goto L_800B1934; } // 800B1918
  c->r[3]=c->r[31]|c->r[31]; // 800B191C
  c->r[4]=0u+0x00000004u; // 800B1920
  c->r[5]=0u+0x00000004u; // 800B1924
  c->r[6]=0u+0x00000001u; // 800B1928
  c->r[7]=0u+0x00000001u; // 800B192C
  c->lr=0x800B1934u; f_8017900C(c); // 800B1930
L_800B1934:;
  c->r[3]=c->r[31]|c->r[31]; // 800B1934
  c->r[4]=0u+0x00000000u; // 800B1938
  c->lr=0x800B1940u; f_801F7C00(c); // 800B193C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B1940
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800B1944
  c->lr=c->r[0]; // 800B1948
  c->r[1]=c->r[1]+0x00000030u; // 800B194C
  return; // 800B1950
}

// fn_800B1954
void f_800B1954(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1954
  c->r[0]=c->lr; // 800B1958
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B195C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B1960
  c->r[0]=0u+0x00000001u; // 800B1964
  c->f[2]=c->f[1]; // 800B1968
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B196C
  c->r[31]=c->r[3]|c->r[3]; // 800B1970
  c->r[4]=R16(c->r[3]+0x000003BEu); // 800B1974
  W8(c->r[3]+0x0000006Fu,c->r[0]); // 800B1978
  c->r[5]=rotl(c->r[4],0)&0xFFFFDFFFu; // 800B197C
  c->r[4]=0u+0x00000000u; // 800B1980
  W16(c->r[3]+0x000003BEu,c->r[5]); // 800B1984
  c->r[5]=0u+0x00000001u; // 800B1988
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800B198C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800B1990
  c->ctr=c->r[12]; // 800B1994
  if (true) { c->lr=0x800B199Cu; dispatch(c,c->ctr); } // 800B1998
  c->r[7]=0u+0x803D0000u; // 800B199C
  {uint32_t ea=c->r[7]+0xFFFFF050u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B19A0
  c->r[3]=c->r[31]|c->r[31]; // 800B19A4
  c->r[4]=c->r[1]+0x00000008u; // 800B19A8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B19AC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B19B0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B19B4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B19B8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B19BC
  c->lr=0x800B19C4u; f_800B1378(c); // 800B19C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B19C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B19C8
  c->lr=c->r[0]; // 800B19CC
  c->r[1]=c->r[1]+0x00000020u; // 800B19D0
  return; // 800B19D4
}

// fn_800B19D8
void f_800B19D8(Ctx* __restrict c) {
  return; // 800B19D8
}

// fn_800B19DC
void f_800B19DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B19DC
  c->r[0]=c->lr; // 800B19E0
  c->r[4]=0u+0x000000E1u; // 800B19E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B19E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B19EC
  c->r[31]=c->r[3]|c->r[3]; // 800B19F0
  c->r[3]=c->r[3]+0x00000210u; // 800B19F4
  c->lr=0x800B19FCu; f_80221630(c); // 800B19F8
  cmps(c,0,(int32_t)c->r[3],0); // 800B19FC
  if (!crb(c,2)) { goto L_800B1A0C; } // 800B1A00
  c->r[3]=0u+0x00000000u; // 800B1A04
  goto L_800B1A28; // 800B1A08
L_800B1A0C:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B1A0C
  c->r[3]=0u+0x0000049Au; // 800B1A10
  c->r[5]=0u+0x00000000u; // 800B1A14
  c->r[4]=c->r[4]+0x0000010Cu; // 800B1A18
  c->lr=0x800B1A20u; f_8024EE50(c); // 800B1A1C
  c->r[0]=cntlz(c->r[3]); // 800B1A20
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B1A24
L_800B1A28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1A28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B1A2C
  c->lr=c->r[0]; // 800B1A30
  c->r[1]=c->r[1]+0x00000010u; // 800B1A34
  return; // 800B1A38
}

// fn_800B1A3C
void f_800B1A3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1A3C
  c->r[0]=c->lr; // 800B1A40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1A44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B1A48
  c->r[31]=0u+0x805D0000u; // 800B1A4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B1A50
  c->r[30]=c->r[3]|c->r[3]; // 800B1A54
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B1A58
  c->lr=0x800B1A60u; f_80045264(c); // 800B1A5C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800B1A60
  cmpu(c,0,c->r[0],0x00000004u); // 800B1A64
  if (!crb(c,2)) { goto L_800B1AA4; } // 800B1A68
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B1A6C
  c->lr=0x800B1A74u; f_80037AF0(c); // 800B1A70
  cmpu(c,0,c->r[3],c->r[30]); // 800B1A74
  if (!crb(c,2)) { goto L_800B1AA4; } // 800B1A78
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800B1A7C
  cmps(c,0,(int32_t)c->r[0],101); // 800B1A80
  if (crb(c,2)) { goto L_800B1AA4; } // 800B1A84
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1A88
  c->r[3]=c->r[30]|c->r[30]; // 800B1A8C
  c->r[4]=0u+0x00000065u; // 800B1A90
  c->r[5]=0u+0x00000000u; // 800B1A94
  c->r[6]=0u+0x00000000u; // 800B1A98
  c->r[7]=0u+0x00000000u; // 800B1A9C
  c->lr=0x800B1AA4u; f_801F4D44(c); // 800B1AA0
L_800B1AA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1AA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B1AA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B1AAC
  c->lr=c->r[0]; // 800B1AB0
  c->r[1]=c->r[1]+0x00000010u; // 800B1AB4
  return; // 800B1AB8
}

// fn_800B1ABC
void f_800B1ABC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1ABC
  c->r[0]=c->lr; // 800B1AC0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B1AC4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800B1AC8
  c->r[31]=0u+0x803D0000u; // 800B1ACC
  c->r[31]=c->r[31]+0xFFFFF038u; // 800B1AD0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800B1AD4
  c->r[30]=c->r[3]|c->r[3]; // 800B1AD8
  c->lr=0x800B1AE0u; f_801F4F28(c); // 800B1ADC
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800B1AE0
  cmps(c,0,(int32_t)c->r[0],102); // 800B1AE4
  if (crb(c,2)) { goto L_800B1B6C; } // 800B1AE8
  if (!crb(c,0)) { goto L_800B1B00; } // 800B1AEC
  cmps(c,0,(int32_t)c->r[0],100); // 800B1AF0
  if (crb(c,2)) { goto L_800B1B0C; } // 800B1AF4
  if (!crb(c,0)) { goto L_800B1B3C; } // 800B1AF8
  goto L_800B1BC8; // 800B1AFC
L_800B1B00:;
  cmps(c,0,(int32_t)c->r[0],104); // 800B1B00
  if (!crb(c,0)) { goto L_800B1BC8; } // 800B1B04
  goto L_800B1B9C; // 800B1B08
L_800B1B0C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B1B0C
  c->r[5]=c->r[31]+0x00000024u; // 800B1B10
  c->r[3]=c->r[30]|c->r[30]; // 800B1B14
  c->r[4]=c->r[1]+0x0000002Cu; // 800B1B18
  c->r[7]=R32(c->r[31]+0x00000024u); // 800B1B1C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B1B20
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B1B24
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800B1B28
  W32(c->r[1]+0x00000030u,c->r[6]); // 800B1B2C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B1B30
  c->lr=0x800B1B38u; f_800B1378(c); // 800B1B34
  goto L_800B1BC8; // 800B1B38
L_800B1B3C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B1B3C
  c->r[5]=c->r[31]+0x00000030u; // 800B1B40
  c->r[3]=c->r[30]|c->r[30]; // 800B1B44
  c->r[4]=c->r[1]+0x00000020u; // 800B1B48
  c->r[7]=R32(c->r[31]+0x00000030u); // 800B1B4C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B1B50
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B1B54
  W32(c->r[1]+0x00000020u,c->r[7]); // 800B1B58
  W32(c->r[1]+0x00000024u,c->r[6]); // 800B1B5C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B1B60
  c->lr=0x800B1B68u; f_800B1378(c); // 800B1B64
  goto L_800B1BC8; // 800B1B68
L_800B1B6C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B1B6C
  c->r[5]=c->r[31]+0x0000003Cu; // 800B1B70
  c->r[3]=c->r[30]|c->r[30]; // 800B1B74
  c->r[4]=c->r[1]+0x00000014u; // 800B1B78
  c->r[7]=R32(c->r[31]+0x0000003Cu); // 800B1B7C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B1B80
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B1B84
  W32(c->r[1]+0x00000014u,c->r[7]); // 800B1B88
  W32(c->r[1]+0x00000018u,c->r[6]); // 800B1B8C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B1B90
  c->lr=0x800B1B98u; f_800B1378(c); // 800B1B94
  goto L_800B1BC8; // 800B1B98
L_800B1B9C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B1B9C
  c->r[5]=c->r[31]+0x00000048u; // 800B1BA0
  c->r[3]=c->r[30]|c->r[30]; // 800B1BA4
  c->r[4]=c->r[1]+0x00000008u; // 800B1BA8
  c->r[7]=R32(c->r[31]+0x00000048u); // 800B1BAC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B1BB0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B1BB4
  W32(c->r[1]+0x00000008u,c->r[7]); // 800B1BB8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B1BBC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B1BC0
  c->lr=0x800B1BC8u; f_800B1378(c); // 800B1BC4
L_800B1BC8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B1BC8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800B1BCC
  c->r[30]=R32(c->r[1]+0x00000038u); // 800B1BD0
  c->lr=c->r[0]; // 800B1BD4
  c->r[1]=c->r[1]+0x00000040u; // 800B1BD8
  return; // 800B1BDC
}

// fn_800B1BE0
void f_800B1BE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1BE0
  c->r[0]=c->lr; // 800B1BE4
  c->r[5]=c->r[3]|c->r[3]; // 800B1BE8
  c->r[3]=c->r[4]|c->r[4]; // 800B1BEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1BF0
  c->r[4]=R32(c->r[5]+0x00000394u); // 800B1BF4
  c->r[5]=0u+0x00000000u; // 800B1BF8
  c->lr=0x800B1C00u; f_80250BF4(c); // 800B1BFC
  c->r[0]=cntlz(c->r[3]); // 800B1C00
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B1C04
  c->r[3]=0u-c->r[0]; // 800B1C08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1C0C
  c->lr=c->r[0]; // 800B1C10
  c->r[1]=c->r[1]+0x00000010u; // 800B1C14
  return; // 800B1C18
}

// fn_800B1C1C
void f_800B1C1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1C1C
  c->r[0]=c->lr; // 800B1C20
  c->r[7]=0u+0x803D0000u; // 800B1C24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B1C28
  c->r[4]=c->r[1]+0x00000008u; // 800B1C2C
  {uint32_t ea=c->r[7]+0xFFFFF08Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800B1C30
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B1C34
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B1C38
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B1C3C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B1C40
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B1C44
  c->lr=0x800B1C4Cu; f_800B1378(c); // 800B1C48
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B1C4C
  c->lr=c->r[0]; // 800B1C50
  c->r[1]=c->r[1]+0x00000020u; // 800B1C54
  return; // 800B1C58
}

// fn_800B1C5C
void f_800B1C5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1C5C
  c->r[0]=c->lr; // 800B1C60
  c->r[5]=0u+0x80620000u; // 800B1C64
  c->r[4]=0u+0x00000002u; // 800B1C68
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B1C6C
  c->r[5]=c->r[5]+0x00007688u; // 800B1C70
  W32(c->r[1]+0x000000BCu,c->r[31]); // 800B1C74
  W32(c->r[1]+0x000000B8u,c->r[30]); // 800B1C78
  c->r[30]=c->r[3]|c->r[3]; // 800B1C7C
  c->r[3]=R32(c->r[5]+0x00000014u); // 800B1C80
  c->lr=0x800B1C88u; f_80037670(c); // 800B1C84
  cmps(c,0,(int32_t)c->r[3],0); // 800B1C88
  if (!crb(c,2)) { goto L_800B1D28; } // 800B1C8C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B1C90
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B1C94
  cmps(c,0,(int32_t)c->r[0],0); // 800B1C98
  if (!crb(c,2)) { goto L_800B1D28; } // 800B1C9C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800B1CA0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800B1CA4
  if (crb(c,2)) { goto L_800B1D28; } // 800B1CA8
  c->r[4]=0u+0x803A0000u; // 800B1CAC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B1CB0
  c->r[4]=c->r[4]+0xFFFFCA40u; // 800B1CB4
  c->r[5]=c->r[1]+0x00000020u; // 800B1CB8
  c->r[6]=0u+0x00000001u; // 800B1CBC
  c->lr=0x800B1CC4u; f_80257018(c); // 800B1CC0
  {uint32_t ea=c->r[2]+0xFFFF9A08u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1CC4
  c->r[4]=c->r[1]+0x00000008u; // 800B1CC8
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1CCC
  c->r[5]=c->r[4]|c->r[4]; // 800B1CD0
  {uint32_t ea=c->r[2]+0xFFFF9A0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1CD4
  c->r[3]=c->r[1]+0x00000020u; // 800B1CD8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 800B1CDC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 800B1CE0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 800B1CE4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800B1CE8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800B1CEC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800B1CF0
  c->lr=0x800B1CF8u; f_80296750(c); // 800B1CF4
  c->r[31]=0u+0x80550000u; // 800B1CF8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1CFC
  c->r[31]=c->r[31]+0x00003D60u; // 800B1D00
  c->r[5]=c->r[30]|c->r[30]; // 800B1D04
  c->r[3]=c->r[31]+0x00000010u; // 800B1D08
  c->r[6]=c->r[1]+0x00000008u; // 800B1D0C
  c->r[7]=c->r[1]+0x00000050u; // 800B1D10
  c->r[4]=0u+0x000001FFu; // 800B1D14
  c->lr=0x800B1D1Cu; f_80226910(c); // 800B1D18
  c->r[3]=c->r[31]+0x00000010u; // 800B1D1C
  c->r[4]=c->r[1]+0x00000050u; // 800B1D20
  c->lr=0x800B1D28u; f_80226D68(c); // 800B1D24
L_800B1D28:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800B1D28
  c->r[31]=R32(c->r[1]+0x000000BCu); // 800B1D2C
  c->r[30]=R32(c->r[1]+0x000000B8u); // 800B1D30
  c->lr=c->r[0]; // 800B1D34
  c->r[1]=c->r[1]+0x000000C0u; // 800B1D38
  return; // 800B1D3C
}

// fn_800B1D40
void f_800B1D40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1D40
  c->r[0]=c->lr; // 800B1D44
  c->r[4]=0u+0x00000000u; // 800B1D48
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B1D4C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800B1D50
  c->r[31]=c->r[3]|c->r[3]; // 800B1D54
  W32(c->r[1]+0x00000068u,c->r[30]); // 800B1D58
  c->lr=0x800B1D60u; f_800453A4(c); // 800B1D5C
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800B1D60
  if (crb(c,2)) { goto L_800B1E0C; } // 800B1D64
  c->r[4]=0u+0x803A0000u; // 800B1D68
  c->r[30]=0u+0x80550000u; // 800B1D6C
  c->r[4]=c->r[4]+0xFFFFCA40u; // 800B1D70
  c->r[5]=0u+0x00000000u; // 800B1D74
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B1D78
  c->r[6]=0u+0x00000000u; // 800B1D7C
  c->r[4]=c->r[4]+0x00000009u; // 800B1D80
  c->lr=0x800B1D88u; f_8018D3E4(c); // 800B1D84
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800B1D88
  cmpu(c,0,c->r[4],0x000000FFu); // 800B1D8C
  if (crb(c,2)) { goto L_800B1E0C; } // 800B1D90
  c->r[7]=0u+0x803A0000u; // 800B1D94
  {uint32_t ea=c->r[7]+0xFFFFCA08u; c->r[9]=R32(ea); c->r[7]=ea;} // 800B1D98
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B1D9C
  c->r[5]=c->r[1]+0x00000050u; // 800B1DA0
  c->r[8]=R32(c->r[7]+0x00000004u); // 800B1DA4
  c->r[6]=c->r[1]+0x00000044u; // 800B1DA8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B1DAC
  c->r[7]=c->r[1]+0x00000038u; // 800B1DB0
  W32(c->r[1]+0x00000038u,c->r[9]); // 800B1DB4
  W32(c->r[1]+0x0000003Cu,c->r[8]); // 800B1DB8
  W32(c->r[1]+0x00000040u,c->r[0]); // 800B1DBC
  c->r[8]=R32(c->r[31]+0x00000060u); // 800B1DC0
  c->r[0]=R32(c->r[31]+0x00000064u); // 800B1DC4
  W32(c->r[1]+0x00000044u,c->r[8]); // 800B1DC8
  W32(c->r[1]+0x00000048u,c->r[0]); // 800B1DCC
  c->r[0]=R32(c->r[31]+0x00000068u); // 800B1DD0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800B1DD4
  c->r[8]=R32(c->r[31]+0x0000002Cu); // 800B1DD8
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B1DDC
  W32(c->r[1]+0x00000050u,c->r[8]); // 800B1DE0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B1DE4
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B1DE8
  W32(c->r[1]+0x00000058u,c->r[0]); // 800B1DEC
  c->lr=0x800B1DF4u; f_8018DD04(c); // 800B1DF0
  c->r[3]=c->r[31]|c->r[31]; // 800B1DF4
  c->r[4]=0u+0x00000004u; // 800B1DF8
  c->r[5]=0u+0x00000003u; // 800B1DFC
  c->r[6]=0u+0x00000001u; // 800B1E00
  c->r[7]=0u+0x00000001u; // 800B1E04
  c->lr=0x800B1E0Cu; f_8017900C(c); // 800B1E08
L_800B1E0C:;
  c->r[0]=R32(c->r[31]+0x00000098u); // 800B1E0C
  cmps(c,0,(int32_t)c->r[0],0); // 800B1E10
  if (crb(c,2)) { goto L_800B1EE4; } // 800B1E14
  c->r[0]=R32(c->r[31]+0x00000078u); // 800B1E18
  cmpu(c,0,c->r[0],0x000000FFu); // 800B1E1C
  if (crb(c,2)) { goto L_800B1E70; } // 800B1E20
  c->r[4]=R32(c->r[31]+0x00000060u); // 800B1E24
  c->r[3]=0u+0x80550000u; // 800B1E28
  c->r[0]=R32(c->r[31]+0x00000064u); // 800B1E2C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B1E30
  c->r[5]=c->r[1]+0x0000002Cu; // 800B1E34
  c->r[6]=c->r[1]+0x00000020u; // 800B1E38
  W32(c->r[1]+0x00000020u,c->r[4]); // 800B1E3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B1E40
  c->r[0]=R32(c->r[31]+0x00000068u); // 800B1E44
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B1E48
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800B1E4C
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B1E50
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800B1E54
  W32(c->r[1]+0x00000030u,c->r[0]); // 800B1E58
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B1E5C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B1E60
  c->r[4]=R32(c->r[31]+0x00000078u); // 800B1E64
  c->lr=0x800B1E6Cu; f_8018DBD0(c); // 800B1E68
  goto L_800B1F04; // 800B1E6C
L_800B1E70:;
  c->r[4]=0u+0x803A0000u; // 800B1E70
  c->r[30]=0u+0x80550000u; // 800B1E74
  c->r[4]=c->r[4]+0xFFFFCA40u; // 800B1E78
  c->r[5]=0u+0x00000000u; // 800B1E7C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B1E80
  c->r[6]=0u+0x00000000u; // 800B1E84
  c->r[4]=c->r[4]+0x0000000Du; // 800B1E88
  c->lr=0x800B1E90u; f_8018D3E4(c); // 800B1E8C
  cmpu(c,0,c->r[3],0x000000FFu); // 800B1E90
  W32(c->r[31]+0x00000078u,c->r[3]); // 800B1E94
  if (crb(c,2)) { goto L_800B1F04; } // 800B1E98
  c->r[4]=R32(c->r[31]+0x00000060u); // 800B1E9C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B1EA0
  c->r[0]=R32(c->r[31]+0x00000064u); // 800B1EA4
  c->r[5]=c->r[1]+0x00000014u; // 800B1EA8
  c->r[6]=c->r[1]+0x00000008u; // 800B1EAC
  W32(c->r[1]+0x00000008u,c->r[4]); // 800B1EB0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B1EB4
  c->r[0]=R32(c->r[31]+0x00000068u); // 800B1EB8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B1EBC
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800B1EC0
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B1EC4
  W32(c->r[1]+0x00000014u,c->r[4]); // 800B1EC8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800B1ECC
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B1ED0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B1ED4
  c->r[4]=R32(c->r[31]+0x00000078u); // 800B1ED8
  c->lr=0x800B1EE0u; f_8018DBD0(c); // 800B1EDC
  goto L_800B1F04; // 800B1EE0
L_800B1EE4:;
  c->r[4]=R32(c->r[31]+0x00000078u); // 800B1EE4
  cmpu(c,0,c->r[4],0x000000FFu); // 800B1EE8
  if (crb(c,2)) { goto L_800B1F04; } // 800B1EEC
  c->r[3]=0u+0x80550000u; // 800B1EF0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B1EF4
  c->lr=0x800B1EFCu; f_8018D738(c); // 800B1EF8
  c->r[0]=0u+0x000000FFu; // 800B1EFC
  W32(c->r[31]+0x00000078u,c->r[0]); // 800B1F00
L_800B1F04:;
  c->r[4]=R32(c->r[31]+0x00000078u); // 800B1F04
  cmpu(c,0,c->r[4],0x000000FFu); // 800B1F08
  if (crb(c,2)) { goto L_800B1F50; } // 800B1F0C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B1F10
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800B1F14
  cmps(c,0,(int32_t)c->r[0],0); // 800B1F18
  if (crb(c,2)) { goto L_800B1F40; } // 800B1F1C
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800B1F20
  cmps(c,0,(int32_t)c->r[0],0); // 800B1F24
  if (crb(c,2)) { goto L_800B1F40; } // 800B1F28
  c->r[3]=0u+0x80550000u; // 800B1F2C
  c->r[5]=0u+0x00000000u; // 800B1F30
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B1F34
  c->lr=0x800B1F3Cu; f_8018E2D4(c); // 800B1F38
  goto L_800B1F50; // 800B1F3C
L_800B1F40:;
  c->r[3]=0u+0x80550000u; // 800B1F40
  c->r[5]=0u+0x00000001u; // 800B1F44
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B1F48
  c->lr=0x800B1F50u; f_8018E2D4(c); // 800B1F4C
L_800B1F50:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800B1F50
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800B1F54
  c->r[30]=R32(c->r[1]+0x00000068u); // 800B1F58
  c->lr=c->r[0]; // 800B1F5C
  c->r[1]=c->r[1]+0x00000070u; // 800B1F60
  return; // 800B1F64
}

// fn_800B1F68
void f_800B1F68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1F68
  c->r[0]=c->lr; // 800B1F6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1F70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B1F74
  c->r[31]=c->r[3]|c->r[3]; // 800B1F78
  c->r[3]=c->r[3]+0x00000210u; // 800B1F7C
  c->lr=0x800B1F84u; f_8004BAD4(c); // 800B1F80
  cmps(c,0,(int32_t)c->r[3],0); // 800B1F84
  if (crb(c,2)) { goto L_800B1FF8; } // 800B1F88
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B1F8C
  c->r[4]=c->r[31]|c->r[31]; // 800B1F90
  c->r[3]=c->r[31]+0x00000210u; // 800B1F94
  c->r[0]=c->r[0]|0xAA000000u; // 800B1F98
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B1F9C
  c->lr=0x800B1FA4u; f_80043E44(c); // 800B1FA0
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1FA4
  c->r[3]=c->r[31]+0x00000210u; // 800B1FA8
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1FAC
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1FB0
  c->lr=0x800B1FB8u; f_80043E34(c); // 800B1FB4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B1FB8
  c->r[4]=0u+0x803A0000u; // 800B1FBC
  c->r[4]=c->r[4]+0xFFFFCA40u; // 800B1FC0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B1FC4
  c->r[4]=c->r[4]+0x00000011u; // 800B1FC8
  c->lr=0x800B1FD0u; f_80256EC4(c); // 800B1FCC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B1FD0
  c->r[5]=c->r[3]|c->r[3]; // 800B1FD4
  c->r[3]=c->r[31]+0x00000210u; // 800B1FD8
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800B1FDC
  c->lr=0x800B1FE4u; f_8004BAC8(c); // 800B1FE0
  {uint32_t ea=c->r[2]+0xFFFF9A10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1FE4
  c->r[3]=c->r[31]+0x00000210u; // 800B1FE8
  c->f[2]=c->f[1]; // 800B1FEC
  c->f[3]=c->f[1]; // 800B1FF0
  c->lr=0x800B1FF8u; f_80043E24(c); // 800B1FF4
L_800B1FF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1FF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B1FFC
  c->lr=c->r[0]; // 800B2000
  c->r[1]=c->r[1]+0x00000010u; // 800B2004
  return; // 800B2008
}

// fn_800B200C
void f_800B200C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B200C
  c->r[0]=c->lr; // 800B2010
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2014
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2018
  c->r[31]=c->r[3]|c->r[3]; // 800B201C
  c->r[3]=c->r[3]+0x00000210u; // 800B2020
  c->lr=0x800B2028u; f_80221698(c); // 800B2024
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B2028
  cmps(c,0,(int32_t)c->r[3],0); // 800B202C
  if (crb(c,2)) { goto L_800B2050; } // 800B2030
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B2034
  cmps(c,0,(int32_t)c->r[0],0); // 800B2038
  if (crb(c,2)) { goto L_800B2050; } // 800B203C
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B2040
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800B2044
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B2048
  goto L_800B205C; // 800B204C
L_800B2050:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B2050
  c->r[0]=c->r[0]|0x80000000u; // 800B2054
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B2058
L_800B205C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B205C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B2060
  c->lr=c->r[0]; // 800B2064
  c->r[1]=c->r[1]+0x00000010u; // 800B2068
  return; // 800B206C
}

// fn_800B2070
void f_800B2070(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2070
  c->r[0]=c->lr; // 800B2074
  cmps(c,0,(int32_t)c->r[3],0); // 800B2078
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B207C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2080
  c->r[31]=c->r[4]|c->r[4]; // 800B2084
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B2088
  c->r[30]=c->r[3]|c->r[3]; // 800B208C
  if (crb(c,2)) { goto L_800B20AC; } // 800B2090
  c->r[4]=0u+0x00000000u; // 800B2094
  c->lr=0x800B209Cu; f_8026A06C(c); // 800B2098
  cmps(c,0,(int32_t)c->r[31],0); // 800B209C
  if (!crb(c,1)) { goto L_800B20AC; } // 800B20A0
  c->r[3]=c->r[30]|c->r[30]; // 800B20A4
  c->lr=0x800B20ACu; f_8026A268(c); // 800B20A8
L_800B20AC:;
  c->r[3]=c->r[30]|c->r[30]; // 800B20AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B20B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B20B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B20B8
  c->lr=c->r[0]; // 800B20BC
  c->r[1]=c->r[1]+0x00000010u; // 800B20C0
  return; // 800B20C4
}

// fn_800B20C8
void f_800B20C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B20C8
  c->r[0]=c->lr; // 800B20CC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800B20D0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800B20D4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800B20D8
  c->r[11]=c->r[1]+0x00000090u; // 800B20DC
  c->lr=0x800B20E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B20E0
  c->r[29]=0u+0x803A0000u; // 800B20E4
  c->r[28]=c->r[3]|c->r[3]; // 800B20E8
  c->r[29]=c->r[29]+0xFFFFCA58u; // 800B20EC
  c->r[4]=0u+0x00000000u; // 800B20F0
  c->lr=0x800B20F8u; f_801F57D0(c); // 800B20F4
  c->r[3]=c->r[28]|c->r[28]; // 800B20F8
  c->r[4]=0u+0x00000001u; // 800B20FC
  c->lr=0x800B2104u; f_801F57D0(c); // 800B2100
  c->r[3]=c->r[28]|c->r[28]; // 800B2104
  c->r[4]=0u+0x00000002u; // 800B2108
  c->lr=0x800B2110u; f_801F57D0(c); // 800B210C
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800B2110
  c->r[3]=c->r[28]|c->r[28]; // 800B2114
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800B2118
  c->ctr=c->r[12]; // 800B211C
  if (true) { c->lr=0x800B2124u; dispatch(c,c->ctr); } // 800B2120
  c->r[3]=c->r[28]|c->r[28]; // 800B2124
  c->lr=0x800B212Cu; f_801F4B94(c); // 800B2128
  c->r[3]=0u+0x00000003u; // 800B212C
  c->r[0]=0u+0x00000011u; // 800B2130
  W8(c->r[28]+0x0000006Cu,c->r[3]); // 800B2134
  c->r[3]=c->r[28]+0x0000000Cu; // 800B2138
  {uint32_t ea=c->r[2]+0xFFFF9A20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B213C
  W8(c->r[28]+0x0000006Du,c->r[0]); // 800B2140
  c->lr=0x800B2148u; f_80037668(c); // 800B2144
  {uint32_t ea=c->r[2]+0xFFFF9A20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2148
  c->r[3]=c->r[28]+0x00000010u; // 800B214C
  c->lr=0x800B2154u; f_80037668(c); // 800B2150
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2154
  c->r[30]=0u+0x00000000u; // 800B2158
  W8(c->r[28]+0x000000A4u,c->r[30]); // 800B215C
  c->r[3]=c->r[28]|c->r[28]; // 800B2160
  c->r[4]=R32(c->r[28]+0x00000394u); // 800B2164
  W8(c->r[28]+0x000000A5u,c->r[30]); // 800B2168
  W32(c->r[28]+0x00000078u,c->r[30]); // 800B216C
  {uint32_t ea=c->r[28]+0x0000008Cu; WF32(ea,c->f[0]);} // 800B2170
  {uint32_t ea=c->r[28]+0x00000090u; WF32(ea,c->f[0]);} // 800B2174
  {uint32_t ea=c->r[28]+0x00000094u; WF32(ea,c->f[0]);} // 800B2178
  c->lr=0x800B2180u; f_801F58BC(c); // 800B217C
  c->r[3]=R32(c->r[28]+0x00000394u); // 800B2180
  c->r[31]=0u+0x00000001u; // 800B2184
  c->r[27]=0u+0x803A0000u; // 800B2188
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800B218C
  c->r[4]=c->r[27]+0xFFFFCB14u; // 800B2190
  c->r[3]=R32(c->r[28]+0x00000394u); // 800B2194
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B2198
  c->lr=0x800B21A0u; f_80256EC4(c); // 800B219C
  c->r[6]=R32(c->r[28]+0x00000394u); // 800B21A0
  c->r[4]=0u+0x00000001u; // 800B21A4
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B21A8
  c->r[5]=0u+0x00000000u; // 800B21AC
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800B21B0
  c->r[3]=c->r[28]|c->r[28]; // 800B21B4
  c->f[2]=c->f[1]; // 800B21B8
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800B21BC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800B21C0
  c->ctr=c->r[12]; // 800B21C4
  if (true) { c->lr=0x800B21CCu; dispatch(c,c->ctr); } // 800B21C8
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B21CC
  c->r[4]=0u+0x00000000u; // 800B21D0
  c->r[5]=R32(c->r[28]+0x00000394u); // 800B21D4
  c->f[2]=c->f[1]; // 800B21D8
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800B21DC
  c->r[5]=R32(c->r[5]+0x00000034u); // 800B21E0
  c->lr=0x800B21E8u; f_8024FEAC(c); // 800B21E4
  c->r[3]=R32(c->r[28]+0x00000394u); // 800B21E8
  c->r[4]=0u+0x00000001u; // 800B21EC
  c->r[3]=c->r[3]+0x0000001Cu; // 800B21F0
  c->lr=0x800B21F8u; f_80251824(c); // 800B21F4
  c->r[3]=R32(c->r[28]+0x00000394u); // 800B21F8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B21FC
  c->lr=0x800B2204u; f_802501B0(c); // 800B2200
  c->r[4]=R32(c->r[28]+0x00000394u); // 800B2204
  c->r[3]=c->r[28]|c->r[28]; // 800B2208
  W8(c->r[4]+0x0000001Du,c->r[30]); // 800B220C
  c->r[4]=R32(c->r[28]+0x00000398u); // 800B2210
  c->lr=0x800B2218u; f_801F58BC(c); // 800B2214
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B2218
  c->r[4]=c->r[27]+0xFFFFCB14u; // 800B221C
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800B2220
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B2224
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B2228
  c->lr=0x800B2230u; f_80256EC4(c); // 800B222C
  c->r[5]=R32(c->r[28]+0x00000398u); // 800B2230
  c->r[4]=0u+0x00000000u; // 800B2234
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2238
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800B223C
  c->f[2]=c->f[1]; // 800B2240
  c->r[5]=R32(c->r[28]+0x00000398u); // 800B2244
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800B2248
  c->r[5]=R32(c->r[5]+0x00000034u); // 800B224C
  c->lr=0x800B2254u; f_8024FEAC(c); // 800B2250
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B2254
  c->r[4]=0u+0x00000001u; // 800B2258
  c->r[3]=c->r[3]+0x0000001Cu; // 800B225C
  c->lr=0x800B2264u; f_80251824(c); // 800B2260
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B2264
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B2268
  c->lr=0x800B2270u; f_802501B0(c); // 800B226C
  c->r[4]=R32(c->r[28]+0x00000398u); // 800B2270
  c->r[3]=c->r[28]|c->r[28]; // 800B2274
  c->r[5]=0u+0x00000001u; // 800B2278
  W8(c->r[4]+0x0000001Du,c->r[30]); // 800B227C
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800B2280
  c->r[4]=R32(c->r[28]+0x00000394u); // 800B2284
  c->r[12]=R32(c->r[12]+0x00000038u); // 800B2288
  c->ctr=c->r[12]; // 800B228C
  if (true) { c->lr=0x800B2294u; dispatch(c,c->ctr); } // 800B2290
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2294
  c->r[3]=c->r[28]|c->r[28]; // 800B2298
  W32(c->r[28]+0x00000088u,c->r[30]); // 800B229C
  c->r[4]=R32(c->r[28]+0x0000039Cu); // 800B22A0
  {uint32_t ea=c->r[28]+0x00000084u; WF32(ea,c->f[0]);} // 800B22A4
  c->lr=0x800B22ACu; f_801F58BC(c); // 800B22A8
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800B22AC
  c->r[4]=c->r[27]+0xFFFFCB14u; // 800B22B0
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800B22B4
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800B22B8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B22BC
  c->lr=0x800B22C4u; f_80256EC4(c); // 800B22C0
  c->r[5]=R32(c->r[28]+0x0000039Cu); // 800B22C4
  c->r[4]=0u+0x000000C3u; // 800B22C8
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B22CC
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800B22D0
  c->f[2]=c->f[1]; // 800B22D4
  c->r[5]=R32(c->r[28]+0x0000039Cu); // 800B22D8
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800B22DC
  c->r[5]=R32(c->r[5]+0x00000034u); // 800B22E0
  c->lr=0x800B22E8u; f_8024FEAC(c); // 800B22E4
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800B22E8
  c->r[4]=0u+0x00000001u; // 800B22EC
  c->r[3]=c->r[3]+0x0000001Cu; // 800B22F0
  c->lr=0x800B22F8u; f_80251824(c); // 800B22F4
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800B22F8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B22FC
  c->lr=0x800B2304u; f_802501B0(c); // 800B2300
  c->r[4]=R32(c->r[28]+0x0000039Cu); // 800B2304
  c->r[3]=0u+0x00000030u; // 800B2308
  W8(c->r[4]+0x0000001Du,c->r[30]); // 800B230C
  c->lr=0x800B2314u; f_8024E174(c); // 800B2310
  W32(c->r[28]+0x00000074u,c->r[3]); // 800B2314
  c->r[3]=c->r[28]|c->r[28]; // 800B2318
  c->lr=0x800B2320u; f_800B2EB8(c); // 800B231C
  c->r[6]=R32(c->r[28]+0x00000074u); // 800B2320
  c->r[3]=c->r[28]+0x00000038u; // 800B2324
  c->r[4]=c->r[28]+0x00000060u; // 800B2328
  c->r[5]=c->r[1]+0x00000038u; // 800B232C
  c->r[7]=0u+0x00000000u; // 800B2330
  c->lr=0x800B2338u; f_8002BE64(c); // 800B2334
  c->r[3]=R32(c->r[28]+0x00000074u); // 800B2338
  c->r[4]=c->r[1]+0x00000048u; // 800B233C
  c->lr=0x800B2344u; f_80295B14(c); // 800B2340
  c->r[5]=c->r[29]+0x00000058u; // 800B2344
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2348
  c->r[7]=R32(c->r[29]+0x00000058u); // 800B234C
  c->r[3]=c->r[1]+0x00000038u; // 800B2350
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B2354
  c->r[4]=c->r[1]+0x0000002Cu; // 800B2358
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B235C
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800B2360
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 800B2364
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800B2368
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800B236C
  W32(c->r[1]+0x00000030u,c->r[6]); // 800B2370
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B2374
  c->lr=0x800B237Cu; f_800361A0(c); // 800B2378
  c->r[4]=c->r[1]+0x00000038u; // 800B237C
  c->r[3]=c->r[1]+0x00000048u; // 800B2380
  c->r[5]=c->r[4]|c->r[4]; // 800B2384
  c->lr=0x800B238Cu; f_80296750(c); // 800B2388
  c->r[3]=c->r[28]+0x00000038u; // 800B238C
  c->r[4]=c->r[1]+0x00000038u; // 800B2390
  c->r[5]=c->r[3]|c->r[3]; // 800B2394
  c->lr=0x800B239Cu; f_80296A4C(c); // 800B2398
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B239C
  c->r[5]=c->r[29]+0x00000064u; // 800B23A0
  {uint32_t ea=c->r[28]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B23A4
  c->r[3]=c->r[28]+0x00000044u; // 800B23A8
  {uint32_t ea=c->r[28]+0x00000068u; WF32(ea,c->f[1]);} // 800B23AC
  c->r[4]=c->r[1]+0x00000020u; // 800B23B0
  {uint32_t ea=c->r[28]+0x00000060u; WF32(ea,c->f[1]);} // 800B23B4
  {uint32_t ea=c->r[28]+0x00000080u; WF32(ea,c->f[0]);} // 800B23B8
  c->r[7]=R32(c->r[29]+0x00000064u); // 800B23BC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B23C0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B23C4
  W32(c->r[1]+0x00000020u,c->r[7]); // 800B23C8
  W32(c->r[1]+0x00000024u,c->r[6]); // 800B23CC
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B23D0
  c->lr=0x800B23D8u; f_800361A0(c); // 800B23D4
  c->r[3]=R32(c->r[28]+0x00000394u); // 800B23D8
  c->r[4]=c->r[28]+0x00000038u; // 800B23DC
  c->r[3]=c->r[3]+0x0000005Cu; // 800B23E0
  c->lr=0x800B23E8u; f_800361A0(c); // 800B23E4
  c->r[3]=R32(c->r[28]+0x00000394u); // 800B23E8
  c->r[4]=c->r[28]+0x00000060u; // 800B23EC
  c->r[3]=c->r[3]+0x00000068u; // 800B23F0
  c->lr=0x800B23F8u; f_800361A0(c); // 800B23F4
  c->r[3]=c->r[29]+0x00000040u; // 800B23F8
  c->r[4]=c->r[3]+0x0000000Cu; // 800B23FC
  c->lr=0x800B2404u; f_80296CAC(c); // 800B2400
  c->f[31]=c->f[1]; // 800B2404
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)392); // 800B2408
  W32(c->r[28]+0x00000448u,c->r[31]); // 800B240C
  c->lr=0x800B2414u; f_8024E174(c); // 800B2410
  {uint32_t ea=c->r[2]+0xFFFF9A28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2414
  c->r[4]=0u+0x00000015u; // 800B2418
  {uint32_t ea=c->r[2]+0xFFFF9A2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B241C
  c->r[5]=0u+0x00000002u; // 800B2420
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 800B2424
  W32(c->r[28]+0x0000043Cu,c->r[3]); // 800B2428
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800B242C
  c->lr=0x800B2434u; f_8017F624(c); // 800B2430
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800B2434
  {uint32_t ea=c->r[2]+0xFFFF9A2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2438
  c->lr=0x800B2440u; f_800B276C(c); // 800B243C
  W32(c->r[1]+0x00000014u,c->r[30]); // 800B2440
  c->r[3]=c->r[1]+0x00000038u; // 800B2444
  c->r[4]=c->r[1]+0x00000014u; // 800B2448
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B244C
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 800B2450
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 800B2454
  c->lr=0x800B245Cu; f_800361A0(c); // 800B2458
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800B245C
  c->r[5]=c->r[1]+0x00000038u; // 800B2460
  c->r[4]=0u+0x00000014u; // 800B2464
  c->lr=0x800B246Cu; f_800B26E8(c); // 800B2468
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800B246C
  c->r[4]=R32(c->r[28]+0x00000074u); // 800B2470
  c->lr=0x800B2478u; f_801801A8(c); // 800B2474
  c->r[27]=0u+0x00000001u; // 800B2478
L_800B247C:;
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800B247C
  c->r[4]=c->r[27]|c->r[27]; // 800B2480
  c->r[5]=0u+0x00000000u; // 800B2484
  c->lr=0x800B248Cu; f_800B26A4(c); // 800B2488
  c->r[27]=c->r[27]+0x00000001u; // 800B248C
  cmps(c,0,(int32_t)c->r[27],20); // 800B2490
  if (crb(c,0)) { IRQCHK(c); goto L_800B247C; } // 800B2494
  c->r[27]=0u+0x00000000u; // 800B2498
L_800B249C:;
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800B249C
  c->r[5]=c->r[27]|c->r[27]; // 800B24A0
  c->r[4]=c->r[27]+0x00000001u; // 800B24A4
  c->lr=0x800B24ACu; f_800B2648(c); // 800B24A8
  c->r[4]=addc(c,~c->r[27],0x00000013u,1); // 800B24AC
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800B24B0
  c->r[5]=addc(c,~c->r[27],0x00000014u,1); // 800B24B4
  c->lr=0x800B24BCu; f_800B2648(c); // 800B24B8
  c->r[27]=c->r[27]+0x00000001u; // 800B24BC
  cmps(c,0,(int32_t)c->r[27],10); // 800B24C0
  if (crb(c,0)) { IRQCHK(c); goto L_800B249C; } // 800B24C4
  c->r[3]=0u+0x00000050u; // 800B24C8
  c->lr=0x800B24D0u; f_8024E174(c); // 800B24CC
  W32(c->r[28]+0x0000007Cu,c->r[3]); // 800B24D0
  c->r[30]=c->r[3]|c->r[3]; // 800B24D4
  c->r[31]=0u+0x00000000u; // 800B24D8
  c->r[29]=0u+0x00000000u; // 800B24DC
L_800B24E0:;
  c->r[3]=0u+0x00000450u; // 800B24E0
  c->lr=0x800B24E8u; f_8026A1A4(c); // 800B24E4
  cmps(c,0,(int32_t)c->r[3],0); // 800B24E8
  c->r[27]=c->r[3]|c->r[3]; // 800B24EC
  if (crb(c,2)) { goto L_800B24F8; } // 800B24F0
  c->lr=0x800B24F8u; f_800B260C(c); // 800B24F4
L_800B24F8:;
  cmps(c,0,(int32_t)c->r[27],0); // 800B24F8
  if (crb(c,2)) { goto L_800B2590; } // 800B24FC
  W8(c->r[27]+0x0000006Eu,c->r[29]); // 800B2500
  c->r[3]=c->r[27]|c->r[27]; // 800B2504
  c->r[12]=R32(c->r[27]+0x000000B0u); // 800B2508
  c->r[12]=R32(c->r[12]+0x00000014u); // 800B250C
  c->ctr=c->r[12]; // 800B2510
  if (true) { c->lr=0x800B2518u; dispatch(c,c->ctr); } // 800B2514
  W32(c->r[30]+0x00000000u,c->r[27]); // 800B2518
  c->r[3]=c->r[28]|c->r[28]; // 800B251C
  c->lr=0x800B2524u; f_800B2FE8(c); // 800B2520
  c->r[27]=0u+0x00000000u; // 800B2524
L_800B2528:;
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800B2528
  c->r[4]=R32(c->r[28]+0x00000074u); // 800B252C
  c->lr=0x800B2534u; f_8017FC44(c); // 800B2530
  c->r[27]=c->r[27]+0x00000001u; // 800B2534
  cmps(c,0,(int32_t)c->r[27],16); // 800B2538
  if (crb(c,0)) { IRQCHK(c); goto L_800B2528; } // 800B253C
  c->r[3]=c->r[28]|c->r[28]; // 800B2540
  c->lr=0x800B2548u; f_800B3228(c); // 800B2544
  c->r[31]=c->r[31]+0x00000001u; // 800B2548
  c->r[30]=c->r[30]+0x00000004u; // 800B254C
  cmps(c,0,(int32_t)c->r[31],20); // 800B2550
  if (crb(c,0)) { IRQCHK(c); goto L_800B24E0; } // 800B2554
  c->r[0]=0u+0x00000001u; // 800B2558
  c->r[3]=c->r[28]|c->r[28]; // 800B255C
  W8(c->r[28]+0x0000006Fu,c->r[0]); // 800B2560
  c->lr=0x800B2568u; f_801F56F4(c); // 800B2564
  c->r[7]=0u+0x803D0000u; // 800B2568
  {uint32_t ea=c->r[7]+0xFFFFF218u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B256C
  c->r[3]=c->r[28]|c->r[28]; // 800B2570
  c->r[4]=c->r[1]+0x00000008u; // 800B2574
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B2578
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B257C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B2580
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B2584
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B2588
  c->lr=0x800B2590u; f_800B25B0(c); // 800B258C
L_800B2590:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800B2590
  c->r[11]=c->r[1]+0x00000090u; // 800B2594
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800B2598
  c->lr=0x800B25A0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B259C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800B25A0
  c->lr=c->r[0]; // 800B25A4
  c->r[1]=c->r[1]+0x000000A0u; // 800B25A8
  return; // 800B25AC
}

// fn_800B25B0
void f_800B25B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B25B0
  c->r[0]=c->lr; // 800B25B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B25B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B25BC
  c->r[31]=c->r[4]|c->r[4]; // 800B25C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B25C4
  c->r[30]=c->r[3]|c->r[3]; // 800B25C8
  c->r[3]=c->r[31]|c->r[31]; // 800B25CC
  c->lr=0x800B25D4u; f_802B9FDC(c); // 800B25D0
  cmps(c,0,(int32_t)c->r[3],0); // 800B25D4
  if (crb(c,2)) { goto L_800B25F4; } // 800B25D8
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B25DC
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B25E0
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B25E4
  W32(c->r[30]+0x00000020u,c->r[0]); // 800B25E8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B25EC
  W32(c->r[30]+0x00000024u,c->r[0]); // 800B25F0
L_800B25F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B25F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B25F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B25FC
  c->lr=c->r[0]; // 800B2600
  c->r[1]=c->r[1]+0x00000010u; // 800B2604
  return; // 800B2608
}

// fn_800B260C
void f_800B260C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B260C
  c->r[0]=c->lr; // 800B2610
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2614
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2618
  c->r[31]=c->r[3]|c->r[3]; // 800B261C
  c->lr=0x800B2624u; f_8026A014(c); // 800B2620
  c->r[4]=0u+0x803D0000u; // 800B2624
  c->r[3]=c->r[31]|c->r[31]; // 800B2628
  c->r[4]=c->r[4]+0xFFFFF2E0u; // 800B262C
  W32(c->r[31]+0x000000B0u,c->r[4]); // 800B2630
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B2634
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2638
  c->lr=c->r[0]; // 800B263C
  c->r[1]=c->r[1]+0x00000010u; // 800B2640
  return; // 800B2644
}

// fn_800B2648
void f_800B2648(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2648
  c->r[0]=c->lr; // 800B264C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2650
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2654
  c->r[31]=c->r[5]|c->r[5]; // 800B2658
  c->lr=0x800B2660u; f_800B2680(c); // 800B265C
  cmps(c,0,(int32_t)c->r[3],0); // 800B2660
  if (crb(c,2)) { goto L_800B266C; } // 800B2664
  W32(c->r[3]+0x00000004u,c->r[31]); // 800B2668
L_800B266C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B266C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B2670
  c->lr=c->r[0]; // 800B2674
  c->r[1]=c->r[1]+0x00000010u; // 800B2678
  return; // 800B267C
}

// fn_800B2680
void f_800B2680(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000048u); // 800B2680
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800B2684
  if (!crb(c,0)) { goto L_800B269C; } // 800B2688
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)268); // 800B268C
  c->r[3]=R32(c->r[3]+0x00000028u); // 800B2690
  c->r[3]=c->r[3]+c->r[0]; // 800B2694
  return; // 800B2698
L_800B269C:;
  c->r[3]=0u+0x00000000u; // 800B269C
  return; // 800B26A0
}

// fn_800B26A4
void f_800B26A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B26A4
  c->r[0]=c->lr; // 800B26A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B26AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B26B0
  c->r[31]=c->r[5]|c->r[5]; // 800B26B4
  c->lr=0x800B26BCu; f_800B2680(c); // 800B26B8
  cmps(c,0,(int32_t)c->r[3],0); // 800B26BC
  if (crb(c,2)) { goto L_800B26CC; } // 800B26C0
  c->r[4]=c->r[31]|c->r[31]; // 800B26C4
  c->lr=0x800B26CCu; f_800B26E0(c); // 800B26C8
L_800B26CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B26CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B26D0
  c->lr=c->r[0]; // 800B26D4
  c->r[1]=c->r[1]+0x00000010u; // 800B26D8
  return; // 800B26DC
}

// fn_800B26E0
void f_800B26E0(Ctx* __restrict c) {
  W8(c->r[3]+0x00000000u,c->r[4]); // 800B26E0
  return; // 800B26E4
}

// fn_800B26E8
void f_800B26E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B26E8
  c->r[0]=c->lr; // 800B26EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B26F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B26F4
  c->r[31]=c->r[5]|c->r[5]; // 800B26F8
  c->lr=0x800B2700u; f_800B2680(c); // 800B26FC
  cmps(c,0,(int32_t)c->r[3],0); // 800B2700
  if (crb(c,2)) { goto L_800B2710; } // 800B2704
  c->r[4]=c->r[31]|c->r[31]; // 800B2708
  c->lr=0x800B2710u; f_800B2724(c); // 800B270C
L_800B2710:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2710
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B2714
  c->lr=c->r[0]; // 800B2718
  c->r[1]=c->r[1]+0x00000010u; // 800B271C
  return; // 800B2720
}

// fn_800B2724
void f_800B2724(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2724
  c->r[0]=c->lr; // 800B2728
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B272C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2730
  c->r[31]=c->r[3]|c->r[3]; // 800B2734
  c->r[3]=c->r[3]+0x0000001Cu; // 800B2738
  c->lr=0x800B2740u; f_800361A0(c); // 800B273C
  c->r[4]=c->r[3]|c->r[3]; // 800B2740
  c->r[3]=c->r[31]+0x00000010u; // 800B2744
  c->lr=0x800B274Cu; f_800361A0(c); // 800B2748
  c->r[4]=c->r[3]|c->r[3]; // 800B274C
  c->r[3]=c->r[31]+0x00000028u; // 800B2750
  c->lr=0x800B2758u; f_800361A0(c); // 800B2754
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2758
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B275C
  c->lr=c->r[0]; // 800B2760
  c->r[1]=c->r[1]+0x00000010u; // 800B2764
  return; // 800B2768
}

// fn_800B276C
void f_800B276C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 800B276C
  return; // 800B2770
}

// fn_800B2774
void f_800B2774(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2774
  c->r[0]=c->lr; // 800B2778
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B277C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2780
  c->r[31]=c->r[3]|c->r[3]; // 800B2784
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800B2788
  c->r[12]=R32(c->r[12]+0x00000068u); // 800B278C
  c->ctr=c->r[12]; // 800B2790
  if (true) { c->lr=0x800B2798u; dispatch(c,c->ctr); } // 800B2794
  c->r[3]=c->r[31]|c->r[31]; // 800B2798
  c->lr=0x800B27A0u; f_801F4C0C(c); // 800B279C
  c->r[3]=c->r[31]+0x00000210u; // 800B27A0
  c->lr=0x800B27A8u; f_80221698(c); // 800B27A4
  c->r[3]=c->r[31]|c->r[31]; // 800B27A8
  c->lr=0x800B27B0u; f_800B3630(c); // 800B27AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B27B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B27B4
  c->lr=c->r[0]; // 800B27B8
  c->r[1]=c->r[1]+0x00000010u; // 800B27BC
  return; // 800B27C0
}

// fn_800B27C4
void f_800B27C4(Ctx* __restrict c) {
  f_801F50B4(c); return; // 800B27C4
}

// fn_800B27C8
void f_800B27C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B27C8
  c->r[0]=c->lr; // 800B27CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B27D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B27D4
  c->r[31]=c->r[3]|c->r[3]; // 800B27D8
  c->r[3]=R32(c->r[3]+0x00000074u); // 800B27DC
  c->lr=0x800B27E4u; f_8024E190(c); // 800B27E0
  c->r[3]=R32(c->r[31]+0x0000007Cu); // 800B27E4
  c->lr=0x800B27ECu; f_8024E190(c); // 800B27E8
  c->r[3]=c->r[31]|c->r[31]; // 800B27EC
  c->lr=0x800B27F4u; f_801F4C78(c); // 800B27F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B27F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B27F8
  c->lr=c->r[0]; // 800B27FC
  c->r[1]=c->r[1]+0x00000010u; // 800B2800
  return; // 800B2804
}

// fn_800B2808
void f_800B2808(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2808
  c->r[0]=c->lr; // 800B280C
  c->r[5]=0u+0x00000000u; // 800B2810
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2814
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2818
  c->r[31]=c->r[3]|c->r[3]; // 800B281C
  c->r[3]=0u+0x0000020Du; // 800B2820
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B2824
  c->r[4]=c->r[4]+0x0000010Cu; // 800B2828
  c->lr=0x800B2830u; f_8024EE50(c); // 800B282C
  cmps(c,0,(int32_t)c->r[3],0); // 800B2830
  if (crb(c,2)) { goto L_800B2840; } // 800B2834
  c->r[3]=0u+0x00000000u; // 800B2838
  goto L_800B28EC; // 800B283C
L_800B2840:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800B2840
  c->r[3]=0u+0x0000020Eu; // 800B2844
  c->r[5]=0u+0x00000000u; // 800B2848
  c->r[4]=c->r[4]+0x0000010Cu; // 800B284C
  c->lr=0x800B2854u; f_8024EE50(c); // 800B2850
  cmps(c,0,(int32_t)c->r[3],0); // 800B2854
  if (crb(c,2)) { goto L_800B2864; } // 800B2858
  c->r[3]=0u+0x00000000u; // 800B285C
  goto L_800B28EC; // 800B2860
L_800B2864:;
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800B2864
  c->r[3]=0u+0x000000C9u; // 800B2868
  c->r[5]=0u+0x00000000u; // 800B286C
  c->r[4]=c->r[4]+0x0000010Cu; // 800B2870
  c->lr=0x800B2878u; f_8024EE50(c); // 800B2874
  cmps(c,0,(int32_t)c->r[3],0); // 800B2878
  if (crb(c,2)) { goto L_800B2888; } // 800B287C
  c->r[3]=0u+0x00000000u; // 800B2880
  goto L_800B28EC; // 800B2884
L_800B2888:;
  c->r[3]=c->r[31]+0x00000210u; // 800B2888
  c->r[4]=0u+0x000000E1u; // 800B288C
  c->lr=0x800B2894u; f_80221630(c); // 800B2890
  cmps(c,0,(int32_t)c->r[3],0); // 800B2894
  if (crb(c,2)) { goto L_800B28E0; } // 800B2898
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B289C
  c->r[4]=c->r[31]|c->r[31]; // 800B28A0
  c->r[3]=c->r[31]+0x00000210u; // 800B28A4
  c->r[0]=c->r[0]|0xA8000000u; // 800B28A8
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B28AC
  c->lr=0x800B28B4u; f_80043E44(c); // 800B28B0
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B28B4
  c->r[3]=c->r[31]+0x00000210u; // 800B28B8
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B28BC
  {uint32_t ea=c->r[31]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B28C0
  c->lr=0x800B28C8u; f_80043E34(c); // 800B28C4
  {uint32_t ea=c->r[2]+0xFFFF9A30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B28C8
  c->r[3]=c->r[31]+0x00000210u; // 800B28CC
  {uint32_t ea=c->r[2]+0xFFFF9A34u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B28D0
  c->f[3]=c->f[1]; // 800B28D4
  c->lr=0x800B28DCu; f_80043E24(c); // 800B28D8
  goto L_800B28E8; // 800B28DC
L_800B28E0:;
  c->r[3]=0u+0x00000000u; // 800B28E0
  goto L_800B28EC; // 800B28E4
L_800B28E8:;
  c->r[3]=0u+0x00000001u; // 800B28E8
L_800B28EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B28EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B28F0
  c->lr=c->r[0]; // 800B28F4
  c->r[1]=c->r[1]+0x00000010u; // 800B28F8
  return; // 800B28FC
}

// fn_800B2900
void f_800B2900(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800B2900
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800B2904
  c->ctr=c->r[12]; // 800B2908
  if (true) { dispatch(c,c->ctr); return; } // 800B290C
}

// fn_800B2910
void f_800B2910(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2910
  c->r[0]=c->lr; // 800B2914
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800B2918
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800B291C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800B2920
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800B2924
  c->r[31]=c->r[3]|c->r[3]; // 800B2928
  W32(c->r[1]+0x00000088u,c->r[30]); // 800B292C
  W32(c->r[1]+0x00000084u,c->r[29]); // 800B2930
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B2934
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B2938
  c->lr=0x800B2940u; f_802501B0(c); // 800B293C
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2940
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2944
  fcmp(c,0,c->f[0],c->f[2]); // 800B2948
  if (crb(c,2)) { goto L_800B2C50; } // 800B294C
  c->r[0]=R32(c->r[31]+0x00000088u); // 800B2950
  cmpu(c,0,c->r[0],0x00000008u); // 800B2954
  if (!crb(c,1)) { goto L_800B297C; } // 800B2958
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B295C
  c->r[3]=c->r[31]|c->r[31]; // 800B2960
  c->r[4]=0u+0x00000000u; // 800B2964
  {uint32_t ea=c->r[2]+0xFFFF9A38u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2968
  c->r[12]=R32(c->r[12]+0x00000048u); // 800B296C
  c->r[5]=0u+0x00000000u; // 800B2970
  c->ctr=c->r[12]; // 800B2974
  if (true) { c->lr=0x800B297Cu; dispatch(c,c->ctr); } // 800B2978
L_800B297C:;
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B297C
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2980
  fcmp(c,0,c->f[1],c->f[0]); // 800B2984
  if (!crb(c,1)) { goto L_800B29D8; } // 800B2988
  c->r[0]=R8(c->r[31]+0x000000A4u); // 800B298C
  cmps(c,0,(int32_t)c->r[0],0); // 800B2990
  if (crb(c,2)) { goto L_800B29A8; } // 800B2994
  c->r[3]=c->r[0]^0x00000001u; // 800B2998
  c->r[0]=0u+0x00000000u; // 800B299C
  W8(c->r[31]+0x000000A4u,c->r[3]); // 800B29A0
  W8(c->r[31]+0x000000A5u,c->r[0]); // 800B29A4
L_800B29A8:;
  c->r[0]=R8(c->r[31]+0x000000A5u); // 800B29A8
  cmps(c,0,(int32_t)c->r[0],0); // 800B29AC
  if (!crb(c,2)) { goto L_800B2A20; } // 800B29B0
  {uint32_t ea=c->r[31]+0x00000084u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B29B4
  {uint32_t ea=c->r[2]+0xFFFF9A34u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B29B8
  {uint32_t ea=c->r[31]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B29BC
  {uint32_t ea=c->r[2]+0xFFFF9A2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B29C0
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 800B29C4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800B29C8
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[2]);} // 800B29CC
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 800B29D0
  goto L_800B2A20; // 800B29D4
L_800B29D8:;
  c->r[0]=R8(c->r[31]+0x000000A4u); // 800B29D8
  cmps(c,0,(int32_t)c->r[0],0); // 800B29DC
  if (!crb(c,2)) { goto L_800B29F4; } // 800B29E0
  c->r[3]=c->r[0]^0x00000001u; // 800B29E4
  c->r[0]=0u+0x00000000u; // 800B29E8
  W8(c->r[31]+0x000000A4u,c->r[3]); // 800B29EC
  W8(c->r[31]+0x000000A5u,c->r[0]); // 800B29F0
L_800B29F4:;
  c->r[0]=R8(c->r[31]+0x000000A5u); // 800B29F4
  cmps(c,0,(int32_t)c->r[0],0); // 800B29F8
  if (!crb(c,2)) { goto L_800B2A20; } // 800B29FC
  {uint32_t ea=c->r[31]+0x00000084u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2A00
  {uint32_t ea=c->r[2]+0xFFFF9A34u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2A04
  {uint32_t ea=c->r[31]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2A08
  {uint32_t ea=c->r[2]+0xFFFF9A2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2A0C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B2A10
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B2A14
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[2]);} // 800B2A18
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 800B2A1C
L_800B2A20:;
  c->r[0]=R8(c->r[31]+0x000000A5u); // 800B2A20
  cmps(c,0,(int32_t)c->r[0],0); // 800B2A24
  if (!crb(c,2)) { goto L_800B2C44; } // 800B2A28
  c->r[3]=c->r[31]+0x0000000Cu; // 800B2A2C
  c->r[4]=0u+0x00000000u; // 800B2A30
  c->lr=0x800B2A38u; f_800366DC(c); // 800B2A34
  c->r[3]=c->r[31]+0x0000000Cu; // 800B2A38
  c->r[4]=0u+0x00000042u; // 800B2A3C
  c->lr=0x800B2A44u; f_80038BCC(c); // 800B2A40
  cmps(c,0,(int32_t)c->r[3],0); // 800B2A44
  if (crb(c,2)) { goto L_800B2A7C; } // 800B2A48
  c->r[0]=R32(c->r[31]+0x00000088u); // 800B2A4C
  cmpu(c,0,c->r[0],0x00000008u); // 800B2A50
  if (!crb(c,1)) { goto L_800B2A7C; } // 800B2A54
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2A58
  c->r[3]=c->r[31]+0x0000000Cu; // 800B2A5C
  c->lr=0x800B2A64u; f_80037668(c); // 800B2A60
  c->r[3]=c->r[31]|c->r[31]; // 800B2A64
  c->r[4]=0u+0x00000004u; // 800B2A68
  c->r[5]=0u+0x00000023u; // 800B2A6C
  c->r[6]=0u+0x00000001u; // 800B2A70
  c->r[7]=0u+0x00000001u; // 800B2A74
  c->lr=0x800B2A7Cu; f_8017900C(c); // 800B2A78
L_800B2A7C:;
  c->r[3]=c->r[31]+0x0000000Cu; // 800B2A7C
  c->lr=0x800B2A84u; f_8003E460(c); // 800B2A80
  c->r[4]=0u+0xAAAB0000u; // 800B2A84
  c->r[0]=c->r[4]+0xFFFFAAABu; // 800B2A88
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 800B2A8C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800B2A90
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 800B2A94
  c->r[0]=c->r[3]-c->r[0]; cr0(c,c->r[0]); // 800B2A98
  if (!crb(c,2)) { goto L_800B2AB0; } // 800B2A9C
  c->r[3]=0u+0x00000000u; // 800B2AA0
  c->r[4]=0u+0x00000000u; // 800B2AA4
  c->r[5]=0u+0x00000006u; // 800B2AA8
  c->lr=0x800B2AB0u; f_8027C0C8(c); // 800B2AAC
L_800B2AB0:;
  c->r[3]=c->r[31]+0x00000010u; // 800B2AB0
  c->r[4]=0u+0x00000000u; // 800B2AB4
  c->lr=0x800B2ABCu; f_800366DC(c); // 800B2AB8
  c->r[3]=c->r[31]+0x00000010u; // 800B2ABC
  c->r[4]=0u+0x0000003Cu; // 800B2AC0
  c->lr=0x800B2AC8u; f_80038BCC(c); // 800B2AC4
  cmps(c,0,(int32_t)c->r[3],0); // 800B2AC8
  if (crb(c,2)) { goto L_800B2AF4; } // 800B2ACC
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2AD0
  c->r[3]=c->r[31]+0x00000010u; // 800B2AD4
  c->lr=0x800B2ADCu; f_80037668(c); // 800B2AD8
  c->r[3]=c->r[31]|c->r[31]; // 800B2ADC
  c->r[4]=0u+0x00000004u; // 800B2AE0
  c->r[5]=0u+0x00000024u; // 800B2AE4
  c->r[6]=0u+0x00000001u; // 800B2AE8
  c->r[7]=0u+0x00000001u; // 800B2AEC
  c->lr=0x800B2AF4u; f_8017900C(c); // 800B2AF0
L_800B2AF4:;
  c->r[3]=c->r[31]|c->r[31]; // 800B2AF4
  c->lr=0x800B2AFCu; f_800B3750(c); // 800B2AF8
  c->r[3]=R32(c->r[31]+0x00000044u); // 800B2AFC
  c->r[0]=R32(c->r[31]+0x00000048u); // 800B2B00
  {uint32_t ea=c->r[2]+0xFFFF9A3Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800B2B04
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800B2B08
  W32(c->r[1]+0x00000030u,c->r[0]); // 800B2B0C
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 800B2B10
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B2B14
  c->r[0]=R32(c->r[31]+0x00000088u); // 800B2B18
  cmpu(c,0,c->r[0],0x00000008u); // 800B2B1C
  if (crb(c,1)) { goto L_800B2B34; } // 800B2B20
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2B24
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2B28
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B2B2C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B2B30
L_800B2B34:;
  c->r[0]=R8(c->r[31]+0x000000A4u); // 800B2B34
  cmps(c,0,(int32_t)c->r[0],0); // 800B2B38
  if (crb(c,2)) { goto L_800B2B54; } // 800B2B3C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2B40
  {uint32_t ea=c->r[2]+0xFFFF9A40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2B44
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B2B48
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B2B4C
  goto L_800B2B5C; // 800B2B50
L_800B2B54:;
  {uint32_t ea=c->r[2]+0xFFFF9A44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2B54
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 800B2B58
L_800B2B5C:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800B2B5C
  c->r[4]=c->r[1]+0x00000050u; // 800B2B60
  c->lr=0x800B2B68u; f_80295B14(c); // 800B2B64
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2B68
  c->r[3]=c->r[1]+0x00000050u; // 800B2B6C
  c->r[4]=c->r[1]+0x0000002Cu; // 800B2B70
  c->r[5]=c->r[1]+0x00000020u; // 800B2B74
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800B2B78
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B2B7C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B2B80
  c->lr=0x800B2B88u; f_80296750(c); // 800B2B84
  c->r[3]=c->r[31]+0x00000038u; // 800B2B88
  c->r[4]=c->r[1]+0x00000020u; // 800B2B8C
  c->r[5]=c->r[3]|c->r[3]; // 800B2B90
  c->lr=0x800B2B98u; f_80296A4C(c); // 800B2B94
  c->r[0]=R8(c->r[31]+0x000000A4u); // 800B2B98
  c->r[30]=0u+0x803A0000u; // 800B2B9C
  c->r[30]=c->r[30]+0xFFFFCA98u; // 800B2BA0
  c->r[3]=c->r[31]+0x00000038u; // 800B2BA4
  c->r[0]=c->r[0]^0x00000001u; // 800B2BA8
  c->r[5]=c->r[1]+0x00000038u; // 800B2BAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800B2BB0
  c->r[29]=c->r[30]+c->r[0]; // 800B2BB4
  c->r[4]=c->r[29]|c->r[29]; // 800B2BB8
  c->lr=0x800B2BC0u; f_80296A70(c); // 800B2BBC
  c->r[0]=R8(c->r[31]+0x000000A4u); // 800B2BC0
  c->r[4]=c->r[29]|c->r[29]; // 800B2BC4
  c->r[5]=c->r[1]+0x00000044u; // 800B2BC8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800B2BCC
  c->r[3]=c->r[30]+c->r[0]; // 800B2BD0
  c->lr=0x800B2BD8u; f_80296A70(c); // 800B2BD4
  c->r[3]=c->r[1]+0x00000038u; // 800B2BD8
  c->r[4]=c->r[3]|c->r[3]; // 800B2BDC
  c->lr=0x800B2BE4u; f_80296B50(c); // 800B2BE0
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[31]); // 800B2BE4
  fcmp(c,0,c->f[1],c->f[0]); // 800B2BE8
  if (!crb(c,0)) { goto L_800B2C8C; } // 800B2BEC
  c->r[6]=R8(c->r[31]+0x000000A5u); // 800B2BF0
  c->r[3]=c->r[31]|c->r[31]; // 800B2BF4
  c->r[4]=0u+0x00000004u; // 800B2BF8
  c->r[5]=0u+0x0000002Au; // 800B2BFC
  c->r[0]=c->r[6]+0x00000001u; // 800B2C00
  c->r[6]=0u+0x00000001u; // 800B2C04
  W8(c->r[31]+0x000000A5u,c->r[0]); // 800B2C08
  c->r[7]=0u+0x00000001u; // 800B2C0C
  c->lr=0x800B2C14u; f_8017900C(c); // 800B2C10
  c->r[3]=c->r[1]+0x00000044u; // 800B2C14
  c->r[4]=c->r[3]|c->r[3]; // 800B2C18
  c->lr=0x800B2C20u; f_80296AB0(c); // 800B2C1C
  c->f[1]=c->f[31]; // 800B2C20
  c->r[3]=c->r[1]+0x00000044u; // 800B2C24
  c->r[4]=c->r[3]|c->r[3]; // 800B2C28
  c->lr=0x800B2C30u; f_80296A94(c); // 800B2C2C
  c->r[3]=c->r[29]|c->r[29]; // 800B2C30
  c->r[4]=c->r[1]+0x00000044u; // 800B2C34
  c->r[5]=c->r[31]+0x00000038u; // 800B2C38
  c->lr=0x800B2C40u; f_80296A4C(c); // 800B2C3C
  goto L_800B2C8C; // 800B2C40
L_800B2C44:;
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2C44
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800B2C48
  goto L_800B2C8C; // 800B2C4C
L_800B2C50:;
  {uint32_t ea=c->r[2]+0xFFFF9A20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2C50
  c->r[3]=c->r[31]+0x0000000Cu; // 800B2C54
  c->lr=0x800B2C5Cu; f_80037668(c); // 800B2C58
  {uint32_t ea=c->r[2]+0xFFFF9A20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2C5C
  c->r[3]=c->r[31]+0x00000010u; // 800B2C60
  c->lr=0x800B2C68u; f_80037668(c); // 800B2C64
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B2C68
  c->r[3]=c->r[31]|c->r[31]; // 800B2C6C
  {uint32_t ea=c->r[2]+0xFFFF9A38u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2C70
  c->r[4]=0u+0x00000001u; // 800B2C74
  c->r[12]=R32(c->r[12]+0x00000048u); // 800B2C78
  c->r[5]=0u+0x00000000u; // 800B2C7C
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2C80
  c->ctr=c->r[12]; // 800B2C84
  if (true) { c->lr=0x800B2C8Cu; dispatch(c,c->ctr); } // 800B2C88
L_800B2C8C:;
  c->r[4]=0u+0x803A0000u; // 800B2C8C
  c->r[3]=c->r[31]+0x00000060u; // 800B2C90
  c->r[4]=c->r[4]+0xFFFFCA58u; // 800B2C94
  c->lr=0x800B2C9Cu; f_800361A0(c); // 800B2C98
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2C9C
  c->r[4]=c->r[31]+0x00000060u; // 800B2CA0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B2CA4
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800B2CA8
  c->r[3]=c->r[3]+0x00000068u; // 800B2CAC
  c->lr=0x800B2CB4u; f_800361A0(c); // 800B2CB0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B2CB4
  c->r[4]=c->r[31]+0x00000038u; // 800B2CB8
  c->r[3]=c->r[3]+0x0000005Cu; // 800B2CBC
  c->lr=0x800B2CC4u; f_800361A0(c); // 800B2CC0
  c->r[3]=c->r[31]|c->r[31]; // 800B2CC4
  c->lr=0x800B2CCCu; f_800B2FE8(c); // 800B2CC8
  c->r[3]=R32(c->r[31]+0x0000043Cu); // 800B2CCC
  c->r[4]=R32(c->r[31]+0x00000078u); // 800B2CD0
  c->lr=0x800B2CD8u; f_800B2E70(c); // 800B2CD4
  c->r[29]=0u+0x00000000u; // 800B2CD8
L_800B2CDC:;
  c->r[3]=R32(c->r[31]+0x0000043Cu); // 800B2CDC
  c->r[4]=R32(c->r[31]+0x00000074u); // 800B2CE0
  c->lr=0x800B2CE8u; f_8017FC44(c); // 800B2CE4
  c->r[29]=c->r[29]+0x00000001u; // 800B2CE8
  cmps(c,0,(int32_t)c->r[29],16); // 800B2CEC
  if (crb(c,0)) { IRQCHK(c); goto L_800B2CDC; } // 800B2CF0
  c->r[3]=c->r[31]|c->r[31]; // 800B2CF4
  c->lr=0x800B2CFCu; f_800B3228(c); // 800B2CF8
  c->r[3]=c->r[31]|c->r[31]; // 800B2CFC
  c->lr=0x800B2D04u; f_800B33BC(c); // 800B2D00
  c->r[3]=c->r[31]|c->r[31]; // 800B2D04
  c->lr=0x800B2D0Cu; f_801F56F4(c); // 800B2D08
  c->r[3]=R32(c->r[31]+0x00000398u); // 800B2D0C
  c->r[4]=c->r[31]+0x00000060u; // 800B2D10
  c->r[3]=c->r[3]+0x00000068u; // 800B2D14
  c->lr=0x800B2D1Cu; f_800361A0(c); // 800B2D18
  c->r[3]=R32(c->r[31]+0x00000398u); // 800B2D1C
  c->r[4]=c->r[31]+0x00000038u; // 800B2D20
  c->r[3]=c->r[3]+0x0000005Cu; // 800B2D24
  c->lr=0x800B2D2Cu; f_800361A0(c); // 800B2D28
  c->r[3]=R32(c->r[31]+0x00000398u); // 800B2D2C
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B2D30
  cmps(c,0,(int32_t)c->r[0],0); // 800B2D34
  if (crb(c,2)) { goto L_800B2D94; } // 800B2D38
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800B2D3C
  cmps(c,0,(int32_t)c->r[0],0); // 800B2D40
  if (crb(c,2)) { goto L_800B2D94; } // 800B2D44
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B2D48
  cmps(c,0,(int32_t)c->r[0],0); // 800B2D4C
  if (crb(c,2)) { goto L_800B2D6C; } // 800B2D50
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800B2D54
  cmps(c,0,(int32_t)c->r[0],0); // 800B2D58
  if (!crb(c,2)) { goto L_800B2D6C; } // 800B2D5C
  c->r[4]=c->r[3]+0x000000B0u; // 800B2D60
  c->lr=0x800B2D68u; f_80250F18(c); // 800B2D64
  goto L_800B2D88; // 800B2D68
L_800B2D6C:;
  c->r[3]=c->r[3]+0x0000005Cu; // 800B2D6C
  c->r[4]=c->r[31]+0x0000002Cu; // 800B2D70
  c->lr=0x800B2D78u; f_800361A0(c); // 800B2D74
  c->r[3]=R32(c->r[31]+0x00000398u); // 800B2D78
  c->r[4]=c->r[31]+0x00000060u; // 800B2D7C
  c->r[3]=c->r[3]+0x00000068u; // 800B2D80
  c->lr=0x800B2D88u; f_800361A0(c); // 800B2D84
L_800B2D88:;
  c->r[3]=R32(c->r[31]+0x00000398u); // 800B2D88
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B2D8C
  c->lr=0x800B2D94u; f_8025037C(c); // 800B2D90
L_800B2D94:;
  c->r[0]=R8(c->r[31]+0x000000A6u); // 800B2D94
  cmps(c,0,(int32_t)c->r[0],0); // 800B2D98
  if (crb(c,2)) { goto L_800B2DB0; } // 800B2D9C
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800B2DA0
  c->r[0]=0u+0x00000001u; // 800B2DA4
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800B2DA8
  goto L_800B2DBC; // 800B2DAC
L_800B2DB0:;
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800B2DB0
  c->r[0]=0u+0x00000000u; // 800B2DB4
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800B2DB8
L_800B2DBC:;
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800B2DBC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B2DC0
  c->lr=0x800B2DC8u; f_802501B0(c); // 800B2DC4
  c->r[3]=c->r[31]|c->r[31]; // 800B2DC8
  c->r[4]=c->r[1]+0x00000014u; // 800B2DCC
  c->lr=0x800B2DD4u; f_800B36BC(c); // 800B2DD0
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800B2DD4
  c->r[4]=c->r[1]+0x00000014u; // 800B2DD8
  c->r[3]=c->r[3]+0x0000005Cu; // 800B2DDC
  c->lr=0x800B2DE4u; f_800361A0(c); // 800B2DE0
  c->r[3]=R32(c->r[31]+0x00000060u); // 800B2DE4
  c->r[4]=c->r[1]+0x00000008u; // 800B2DE8
  c->r[0]=R32(c->r[31]+0x00000064u); // 800B2DEC
  {uint32_t ea=c->r[2]+0xFFFF9A48u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2DF0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800B2DF4
  {uint32_t ea=c->r[2]+0xFFFF9A4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2DF8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B2DFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2E00
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2E04
  c->r[0]=R32(c->r[31]+0x00000068u); // 800B2E08
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B2E0C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B2E10
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B2E14
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 800B2E18
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800B2E1C
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800B2E20
  c->r[3]=c->r[3]+0x00000068u; // 800B2E24
  c->lr=0x800B2E2Cu; f_800361A0(c); // 800B2E28
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800B2E2C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B2E30
  cmps(c,0,(int32_t)c->r[3],0); // 800B2E34
  if (crb(c,2)) { goto L_800B2E4C; } // 800B2E38
  c->r[0]=R8(c->r[4]+0x0000001Cu); // 800B2E3C
  cmps(c,0,(int32_t)c->r[0],0); // 800B2E40
  if (crb(c,2)) { goto L_800B2E4C; } // 800B2E44
  c->lr=0x800B2E4Cu; f_8025037C(c); // 800B2E48
L_800B2E4C:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800B2E4C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800B2E50
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800B2E54
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800B2E58
  c->r[30]=R32(c->r[1]+0x00000088u); // 800B2E5C
  c->r[29]=R32(c->r[1]+0x00000084u); // 800B2E60
  c->lr=c->r[0]; // 800B2E64
  c->r[1]=c->r[1]+0x000000A0u; // 800B2E68
  return; // 800B2E6C
}

// fn_800B2E70
void f_800B2E70(Ctx* __restrict c) {
  W32(c->r[3]+0x00000050u,c->r[4]); // 800B2E70
  return; // 800B2E74
}

// fn_800B2E78
void f_800B2E78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2E78
  c->r[0]=c->lr; // 800B2E7C
  c->r[7]=0u+0x803D0000u; // 800B2E80
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B2E84
  c->r[4]=c->r[1]+0x00000008u; // 800B2E88
  {uint32_t ea=c->r[7]+0xFFFFF224u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B2E8C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B2E90
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B2E94
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B2E98
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B2E9C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B2EA0
  c->lr=0x800B2EA8u; f_800B25B0(c); // 800B2EA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B2EA8
  c->lr=c->r[0]; // 800B2EAC
  c->r[1]=c->r[1]+0x00000020u; // 800B2EB0
  return; // 800B2EB4
}

// fn_800B2EB8
void f_800B2EB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2EB8
  c->r[0]=c->lr; // 800B2EBC
  W32(c->r[1]+0x00000084u,c->r[0]); // 800B2EC0
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800B2EC4
  W32(c->r[1]+0x00000078u,c->r[30]); // 800B2EC8
  W32(c->r[1]+0x00000074u,c->r[29]); // 800B2ECC
  c->r[29]=c->r[3]|c->r[3]; // 800B2ED0
  c->r[3]=R32(c->r[3]+0x00000074u); // 800B2ED4
  c->lr=0x800B2EDCu; f_80295AE8(c); // 800B2ED8
  c->r[30]=0u+0x803A0000u; // 800B2EDC
  c->r[5]=c->r[1]+0x0000002Cu; // 800B2EE0
  c->r[31]=c->r[30]+0xFFFFCA98u; // 800B2EE4
  c->r[4]=c->r[31]|c->r[31]; // 800B2EE8
  c->r[3]=c->r[31]+0x0000000Cu; // 800B2EEC
  c->lr=0x800B2EF4u; f_80296A70(c); // 800B2EF0
  c->r[7]=0u+0x803A0000u; // 800B2EF4
  {uint32_t ea=c->r[7]+0xFFFFCAC8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B2EF8
  c->r[3]=c->r[1]+0x00000020u; // 800B2EFC
  c->r[4]=c->r[1]+0x00000008u; // 800B2F00
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B2F04
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B2F08
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B2F0C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B2F10
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B2F14
  c->lr=0x800B2F1Cu; f_800361A0(c); // 800B2F18
  c->r[3]=c->r[1]+0x0000002Cu; // 800B2F1C
  c->lr=0x800B2F24u; f_80296B0C(c); // 800B2F20
  c->r[3]=c->r[1]+0x0000002Cu; // 800B2F24
  c->r[4]=c->r[3]|c->r[3]; // 800B2F28
  c->lr=0x800B2F30u; f_80296AB0(c); // 800B2F2C
  c->r[3]=c->r[1]+0x0000002Cu; // 800B2F30
  c->r[4]=c->r[1]+0x00000020u; // 800B2F34
  c->r[5]=c->r[1]+0x00000014u; // 800B2F38
  c->lr=0x800B2F40u; f_80296B70(c); // 800B2F3C
  c->r[3]=c->r[1]+0x00000014u; // 800B2F40
  c->r[4]=c->r[1]+0x0000002Cu; // 800B2F44
  c->r[5]=c->r[1]+0x00000020u; // 800B2F48
  c->lr=0x800B2F50u; f_80296B70(c); // 800B2F4C
  c->r[3]=R32(c->r[29]+0x00000074u); // 800B2F50
  c->r[4]=c->r[1]+0x00000038u; // 800B2F54
  c->lr=0x800B2F5Cu; f_80295B14(c); // 800B2F58
  c->r[3]=c->r[1]+0x00000038u; // 800B2F5C
  c->r[4]=c->r[1]+0x0000002Cu; // 800B2F60
  c->lr=0x800B2F68u; f_800361A0(c); // 800B2F64
  c->r[3]=c->r[1]+0x00000048u; // 800B2F68
  c->r[4]=c->r[1]+0x00000020u; // 800B2F6C
  c->lr=0x800B2F74u; f_800361A0(c); // 800B2F70
  c->r[3]=c->r[1]+0x00000058u; // 800B2F74
  c->r[4]=c->r[1]+0x00000014u; // 800B2F78
  c->lr=0x800B2F80u; f_800361A0(c); // 800B2F7C
  c->r[3]=c->r[1]+0x00000038u; // 800B2F80
  c->r[4]=c->r[3]|c->r[3]; // 800B2F84
  c->lr=0x800B2F8Cu; f_80295DAC(c); // 800B2F88
  {uint32_t ea=c->r[30]+0xFFFFCA98u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2F8C
  c->r[3]=c->r[1]+0x00000038u; // 800B2F90
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2F94
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2F98
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 800B2F9C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800B2FA0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 800B2FA4
  c->r[4]=R32(c->r[29]+0x00000074u); // 800B2FA8
  c->lr=0x800B2FB0u; f_80295B14(c); // 800B2FAC
  c->r[0]=R32(c->r[1]+0x00000084u); // 800B2FB0
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800B2FB4
  c->r[30]=R32(c->r[1]+0x00000078u); // 800B2FB8
  c->r[29]=R32(c->r[1]+0x00000074u); // 800B2FBC
  c->lr=c->r[0]; // 800B2FC0
  c->r[1]=c->r[1]+0x00000080u; // 800B2FC4
  return; // 800B2FC8
}

// fn_800B2FCC
void f_800B2FCC(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000A5u); // 800B2FCC
  return; // 800B2FD0
}

// fn_800B2FD4
void f_800B2FD4(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000A4u); // 800B2FD4
  c->r[0]=0u-c->r[3]; // 800B2FD8
  c->r[0]=c->r[0]|c->r[3]; // 800B2FDC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B2FE0
  return; // 800B2FE4
}

// fn_800B2FE8
void f_800B2FE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2FE8
  c->r[0]=c->lr; // 800B2FEC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800B2FF0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800B2FF4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800B2FF8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 800B2FFC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 800B3000
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 800B3004
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 800B3008
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 800B300C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 800B3010
  c->r[5]=c->r[1]+0x00000034u; // 800B3014
  c->r[4]=0u+0x00000000u; // 800B3018
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800B301C
  W32(c->r[1]+0x00000058u,c->r[30]); // 800B3020
  W32(c->r[1]+0x00000054u,c->r[29]); // 800B3024
  W32(c->r[1]+0x00000050u,c->r[28]); // 800B3028
  c->r[28]=c->r[3]|c->r[3]; // 800B302C
  c->r[3]=R32(c->r[3]+0x0000043Cu); // 800B3030
  c->lr=0x800B3038u; f_800B31F4(c); // 800B3034
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[29]=c->ps1[29]=RF32(ea);} // 800B3038
  c->r[30]=0u+0x00000001u; // 800B303C
L_800B3040:;
  c->r[3]=c->r[1]+0x00000028u; // 800B3040
  c->r[4]=c->r[1]+0x00000034u; // 800B3044
  c->lr=0x800B304Cu; f_800361A0(c); // 800B3048
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800B304C
  c->r[4]=c->r[30]|c->r[30]; // 800B3050
  c->r[5]=c->r[1]+0x00000034u; // 800B3054
  c->lr=0x800B305Cu; f_800B31F4(c); // 800B3058
  c->r[3]=c->r[1]+0x00000034u; // 800B305C
  c->r[4]=c->r[1]+0x00000028u; // 800B3060
  c->r[5]=c->r[1]+0x0000001Cu; // 800B3064
  c->lr=0x800B306Cu; f_80296A70(c); // 800B3068
  c->r[3]=c->r[1]+0x0000001Cu; // 800B306C
  c->r[4]=c->r[1]+0x00000010u; // 800B3070
  c->lr=0x800B3078u; f_80296AB0(c); // 800B3074
  c->r[3]=c->r[28]+0x00000038u; // 800B3078
  c->r[4]=c->r[1]+0x00000028u; // 800B307C
  c->r[5]=c->r[1]+0x0000001Cu; // 800B3080
  c->lr=0x800B3088u; f_80296A70(c); // 800B3084
  c->r[3]=c->r[1]+0x00000010u; // 800B3088
  c->r[4]=c->r[1]+0x0000001Cu; // 800B308C
  c->lr=0x800B3094u; f_80296B50(c); // 800B3090
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800B3094
  c->r[3]=c->r[28]+0x00000038u; // 800B3098
  c->r[4]=c->r[1]+0x00000034u; // 800B309C
  c->r[5]=c->r[1]+0x0000001Cu; // 800B30A0
  c->lr=0x800B30A8u; f_80296A70(c); // 800B30A4
  c->r[3]=c->r[1]+0x00000010u; // 800B30A8
  c->r[4]=c->r[1]+0x0000001Cu; // 800B30AC
  c->lr=0x800B30B4u; f_80296B50(c); // 800B30B0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800B30B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B30B8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800B30BC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[0]); // 800B30C0
  fcmp(c,0,c->f[1],c->f[29]); // 800B30C4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800B30C8
  if (!crb(c,2)) { goto L_800B3170; } // 800B30CC
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800B30D0
  c->r[31]=0u+0x43300000u; // 800B30D4
  W32(c->r[1]+0x00000044u,c->r[30]); // 800B30D8
  c->r[29]=0u+0x00000000u; // 800B30DC
  {uint32_t ea=c->r[2]+0xFFFF9A58u; c->f[2]=RF64(ea);} // 800B30E0
  c->f[28]=c->ps1[28]=S(c->f[3]/c->f[0]); // 800B30E4
  W32(c->r[1]+0x00000040u,c->r[31]); // 800B30E8
  {uint32_t ea=c->r[2]+0xFFFF9A2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B30EC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 800B30F0
  W32(c->r[28]+0x00000078u,c->r[30]); // 800B30F4
  {uint32_t ea=c->r[2]+0xFFFF9A60u; c->f[30]=RF64(ea);} // 800B30F8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800B30FC
  {uint32_t ea=c->r[2]+0xFFFF9A50u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B3100
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[1]); // 800B3104
  c->f[29]=c->ps1[29]=S(c->f[0]-c->f[28]); // 800B3108
L_800B310C:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[30]); // 800B310C
  if (!crb(c,1)) { goto L_800B3134; } // 800B3110
  c->r[0]=addc(c,~c->r[29],0x00000014u,1); // 800B3114
  W32(c->r[1]+0x00000040u,c->r[31]); // 800B3118
  c->r[0]=c->r[0]^0x80000000u; // 800B311C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B3120
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 800B3124
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800B3128
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[29]); // 800B312C
  goto L_800B314C; // 800B3130
L_800B3134:;
  c->r[0]=c->r[29]^0x80000000u; // 800B3134
  W32(c->r[1]+0x00000048u,c->r[31]); // 800B3138
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800B313C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800B3140
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800B3144
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[28]); // 800B3148
L_800B314C:;
  {uint32_t ea=c->r[13]+0xFFFF8388u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B314C
  c->r[4]=c->r[29]|c->r[29]; // 800B3150
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800B3154
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[0],c->f[31])); // 800B3158
  c->lr=0x800B3160u; f_800B31BC(c); // 800B315C
  c->r[29]=c->r[29]+0x00000001u; // 800B3160
  cmps(c,0,(int32_t)c->r[29],20); // 800B3164
  if (crb(c,0)) { IRQCHK(c); goto L_800B310C; } // 800B3168
  goto L_800B317C; // 800B316C
L_800B3170:;
  c->r[30]=c->r[30]+0x00000001u; // 800B3170
  cmps(c,0,(int32_t)c->r[30],21); // 800B3174
  if (crb(c,0)) { IRQCHK(c); goto L_800B3040; } // 800B3178
L_800B317C:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800B317C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800B3180
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 800B3184
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 800B3188
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 800B318C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 800B3190
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,28,ea,0,0);} // 800B3194
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 800B3198
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800B319C
  c->r[30]=R32(c->r[1]+0x00000058u); // 800B31A0
  c->r[29]=R32(c->r[1]+0x00000054u); // 800B31A4
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800B31A8
  c->r[28]=R32(c->r[1]+0x00000050u); // 800B31AC
  c->lr=c->r[0]; // 800B31B0
  c->r[1]=c->r[1]+0x000000A0u; // 800B31B4
  return; // 800B31B8
}

// fn_800B31BC
void f_800B31BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B31BC
  c->r[0]=c->lr; // 800B31C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B31C4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 800B31C8
  c->f[31]=c->f[1]; // 800B31CC
  c->lr=0x800B31D4u; f_800B2680(c); // 800B31D0
  cmps(c,0,(int32_t)c->r[3],0); // 800B31D4
  if (crb(c,2)) { goto L_800B31E0; } // 800B31D8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[31]);} // 800B31DC
L_800B31E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B31E0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 800B31E4
  c->lr=c->r[0]; // 800B31E8
  c->r[1]=c->r[1]+0x00000010u; // 800B31EC
  return; // 800B31F0
}

// fn_800B31F4
void f_800B31F4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000048u); // 800B31F4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800B31F8
  if (!crb(c,0)) return; // 800B31FC
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800B3200
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)268); // 800B3204
  c->r[6]=R32(c->r[3]+0x00000028u); // 800B3208
  c->r[3]=c->r[5]|c->r[5]; // 800B320C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800B3210
  c->r[4]=c->r[6]+c->r[4]; // 800B3214
  c->r[4]=c->r[4]+c->r[0]; // 800B3218
  c->r[4]=c->r[4]+0x00000010u; // 800B321C
  f_800361A0(c); return; // 800B3220
  return; // 800B3224
}

// fn_800B3228
void f_800B3228(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3228
  c->r[0]=c->lr; // 800B322C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B3230
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800B3234
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800B3238
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800B323C
  W32(c->r[1]+0x00000058u,c->r[30]); // 800B3240
  c->r[30]=c->r[3]|c->r[3]; // 800B3244
  c->lr=0x800B324Cu; f_800B2FCC(c); // 800B3248
  cmps(c,0,(int32_t)c->r[3],0); // 800B324C
  if (!crb(c,2)) { goto L_800B335C; } // 800B3250
  c->r[3]=R32(c->r[30]+0x0000043Cu); // 800B3254
  c->r[5]=c->r[1]+0x0000004Cu; // 800B3258
  c->r[4]=0u+0x00000000u; // 800B325C
  c->lr=0x800B3264u; f_800B31F4(c); // 800B3260
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B3264
  c->r[31]=0u+0x00000001u; // 800B3268
L_800B326C:;
  c->r[3]=c->r[1]+0x00000040u; // 800B326C
  c->r[4]=c->r[1]+0x0000004Cu; // 800B3270
  c->lr=0x800B3278u; f_800361A0(c); // 800B3274
  c->r[3]=R32(c->r[30]+0x0000043Cu); // 800B3278
  c->r[4]=c->r[31]|c->r[31]; // 800B327C
  c->r[5]=c->r[1]+0x0000004Cu; // 800B3280
  c->lr=0x800B3288u; f_800B31F4(c); // 800B3284
  c->r[3]=c->r[1]+0x0000004Cu; // 800B3288
  c->r[4]=c->r[1]+0x00000040u; // 800B328C
  c->r[5]=c->r[1]+0x00000034u; // 800B3290
  c->lr=0x800B3298u; f_80296A70(c); // 800B3294
  c->r[3]=c->r[1]+0x00000034u; // 800B3298
  c->r[4]=c->r[1]+0x0000001Cu; // 800B329C
  c->lr=0x800B32A4u; f_80296AB0(c); // 800B32A0
  c->r[3]=c->r[30]+0x00000038u; // 800B32A4
  c->r[4]=c->r[1]+0x00000040u; // 800B32A8
  c->r[5]=c->r[1]+0x00000028u; // 800B32AC
  c->lr=0x800B32B4u; f_80296A70(c); // 800B32B0
  c->r[3]=c->r[1]+0x0000001Cu; // 800B32B4
  c->r[4]=c->r[1]+0x00000028u; // 800B32B8
  c->lr=0x800B32C0u; f_80296B50(c); // 800B32BC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800B32C0
  c->r[3]=c->r[30]+0x00000038u; // 800B32C4
  c->r[4]=c->r[1]+0x0000004Cu; // 800B32C8
  c->r[5]=c->r[1]+0x00000028u; // 800B32CC
  c->lr=0x800B32D4u; f_80296A70(c); // 800B32D0
  c->r[3]=c->r[1]+0x0000001Cu; // 800B32D4
  c->r[4]=c->r[1]+0x00000028u; // 800B32D8
  c->lr=0x800B32E0u; f_80296B50(c); // 800B32DC
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800B32E0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B32E4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800B32E8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 800B32EC
  fcmp(c,0,c->f[1],c->f[31]); // 800B32F0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800B32F4
  if (!crb(c,2)) { goto L_800B3350; } // 800B32F8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800B32FC
  c->r[3]=c->r[1]+0x00000034u; // 800B3300
  c->r[4]=c->r[1]+0x00000028u; // 800B3304
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[0]); // 800B3308
  c->lr=0x800B3310u; f_80296A94(c); // 800B330C
  c->r[3]=c->r[1]+0x00000040u; // 800B3310
  c->r[4]=c->r[1]+0x00000028u; // 800B3314
  c->r[5]=c->r[3]|c->r[3]; // 800B3318
  c->lr=0x800B3320u; f_80296A4C(c); // 800B331C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3320
  c->r[3]=c->r[30]|c->r[30]; // 800B3324
  c->r[5]=R32(c->r[30]+0x00000038u); // 800B3328
  c->r[4]=c->r[1]+0x00000010u; // 800B332C
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 800B3330
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800B3334
  W32(c->r[1]+0x00000010u,c->r[5]); // 800B3338
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B333C
  c->r[0]=R32(c->r[30]+0x00000040u); // 800B3340
  W32(c->r[1]+0x00000018u,c->r[0]); // 800B3344
  c->lr=0x800B334Cu; f_800B337C(c); // 800B3348
  goto L_800B335C; // 800B334C
L_800B3350:;
  c->r[31]=c->r[31]+0x00000001u; // 800B3350
  cmps(c,0,(int32_t)c->r[31],21); // 800B3354
  if (crb(c,0)) { IRQCHK(c); goto L_800B326C; } // 800B3358
L_800B335C:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800B335C
  c->r[0]=R32(c->r[1]+0x00000074u); // 800B3360
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800B3364
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800B3368
  c->r[30]=R32(c->r[1]+0x00000058u); // 800B336C
  c->lr=c->r[0]; // 800B3370
  c->r[1]=c->r[1]+0x00000070u; // 800B3374
  return; // 800B3378
}

// fn_800B337C
void f_800B337C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B337C
  c->r[0]=c->lr; // 800B3380
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3384
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B3388
  c->r[31]=c->r[3]|c->r[3]; // 800B338C
  c->r[3]=c->r[3]+0x0000002Cu; // 800B3390
  c->lr=0x800B3398u; f_800361A0(c); // 800B3394
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3398
  {uint32_t ea=c->r[2]+0xFFFF9A44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B339C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B33A0
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800B33A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B33A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B33AC
  c->lr=c->r[0]; // 800B33B0
  c->r[1]=c->r[1]+0x00000010u; // 800B33B4
  return; // 800B33B8
}

// fn_800B33BC
void f_800B33BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B33BC
  c->r[0]=c->lr; // 800B33C0
  W32(c->r[1]+0x00000104u,c->r[0]); // 800B33C4
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 800B33C8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 800B33CC
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[30]);} // 800B33D0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,30,ea,0,0);} // 800B33D4
  c->r[11]=c->r[1]+0x000000E0u; // 800B33D8
  c->lr=0x800B33E0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B33DC
  c->r[27]=c->r[3]|c->r[3]; // 800B33E0
  c->r[28]=R32(c->r[3]+0x0000007Cu); // 800B33E4
  c->r[3]=R32(c->r[3]+0x0000043Cu); // 800B33E8
  c->r[4]=c->r[1]+0x00000060u; // 800B33EC
  c->r[5]=0u+0x00000000u; // 800B33F0
  c->lr=0x800B33F8u; f_800B35E0(c); // 800B33F4
  c->r[3]=c->r[1]+0x00000054u; // 800B33F8
  c->r[4]=c->r[1]+0x0000003Cu; // 800B33FC
  c->r[5]=c->r[1]+0x00000024u; // 800B3400
  c->r[6]=c->r[1]+0x00000060u; // 800B3404
  c->r[7]=0u+0x00000000u; // 800B3408
  c->lr=0x800B3410u; f_8002BE64(c); // 800B340C
  c->r[31]=0u+0x803A0000u; // 800B3410
  {uint32_t ea=c->r[2]+0xFFFF9A6Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800B3414
  c->r[29]=0u+0x00000000u; // 800B3418
  c->r[31]=c->r[31]+0xFFFFCAD4u; // 800B341C
L_800B3420:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 800B3420
  c->r[4]=0u+0x00000000u; // 800B3424
  c->lr=0x800B342Cu; f_80039840(c); // 800B3428
  cmps(c,0,(int32_t)c->r[3],0); // 800B342C
  if (crb(c,2)) { goto L_800B35A8; } // 800B3430
  c->lr=0x800B3438u; f_80251620(c); // 800B3434
  c->r[30]=c->r[3]|c->r[3]; // 800B3438
  c->r[3]=c->r[1]+0x00000060u; // 800B343C
  c->r[4]=c->r[1]+0x00000090u; // 800B3440
  c->lr=0x800B3448u; f_80295DAC(c); // 800B3444
  c->r[3]=c->r[1]+0x00000048u; // 800B3448
  c->r[4]=c->r[1]+0x00000054u; // 800B344C
  c->lr=0x800B3454u; f_800361A0(c); // 800B3450
  c->r[3]=c->r[1]+0x00000030u; // 800B3454
  c->r[4]=c->r[1]+0x0000003Cu; // 800B3458
  c->lr=0x800B3460u; f_800361A0(c); // 800B345C
  c->r[3]=R32(c->r[27]+0x0000043Cu); // 800B3460
  c->r[4]=c->r[1]+0x00000060u; // 800B3464
  c->r[5]=c->r[29]+0x00000001u; // 800B3468
  c->lr=0x800B3470u; f_800B35E0(c); // 800B346C
  c->r[3]=c->r[1]+0x00000054u; // 800B3470
  c->r[4]=c->r[1]+0x0000003Cu; // 800B3474
  c->r[5]=c->r[1]+0x00000024u; // 800B3478
  c->r[6]=c->r[1]+0x00000060u; // 800B347C
  c->r[7]=0u+0x00000000u; // 800B3480
  c->lr=0x800B3488u; f_8002BE64(c); // 800B3484
  c->r[3]=c->r[1]+0x00000054u; // 800B3488
  c->r[4]=c->r[1]+0x00000048u; // 800B348C
  c->r[5]=c->r[1]+0x00000018u; // 800B3490
  c->lr=0x800B3498u; f_80296A70(c); // 800B3494
  c->r[3]=c->r[1]+0x00000018u; // 800B3498
  c->lr=0x800B34A0u; f_80296B0C(c); // 800B349C
  c->f[30]=c->f[1]; // 800B34A0
  c->r[3]=c->r[1]+0x00000018u; // 800B34A4
  {uint32_t ea=c->r[2]+0xFFFF9A68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B34A8
  c->r[4]=c->r[3]|c->r[3]; // 800B34AC
  c->lr=0x800B34B4u; f_80296A94(c); // 800B34B0
  c->r[3]=c->r[1]+0x00000048u; // 800B34B4
  c->r[4]=c->r[1]+0x00000018u; // 800B34B8
  c->r[5]=c->r[3]|c->r[3]; // 800B34BC
  c->lr=0x800B34C4u; f_80296A4C(c); // 800B34C0
  c->r[3]=c->r[1]+0x00000018u; // 800B34C4
  c->r[4]=c->r[3]|c->r[3]; // 800B34C8
  c->lr=0x800B34D0u; f_80296AB0(c); // 800B34CC
  c->r[3]=c->r[1]+0x00000030u; // 800B34D0
  c->r[4]=c->r[1]+0x000000A0u; // 800B34D4
  c->lr=0x800B34DCu; f_800361A0(c); // 800B34D8
  c->r[3]=c->r[1]+0x00000018u; // 800B34DC
  c->r[4]=c->r[1]+0x00000030u; // 800B34E0
  c->r[5]=c->r[1]+0x00000024u; // 800B34E4
  c->lr=0x800B34ECu; f_80296B70(c); // 800B34E8
  c->r[3]=c->r[1]+0x00000024u; // 800B34EC
  c->r[4]=c->r[1]+0x00000018u; // 800B34F0
  c->r[5]=c->r[1]+0x00000030u; // 800B34F4
  c->lr=0x800B34FCu; f_80296B70(c); // 800B34F8
  c->r[3]=c->r[1]+0x00000090u; // 800B34FC
  c->r[4]=c->r[1]+0x00000018u; // 800B3500
  c->lr=0x800B3508u; f_800361A0(c); // 800B3504
  c->r[3]=c->r[1]+0x000000A0u; // 800B3508
  c->r[4]=c->r[1]+0x00000030u; // 800B350C
  c->lr=0x800B3514u; f_800361A0(c); // 800B3510
  c->r[3]=c->r[1]+0x000000B0u; // 800B3514
  c->r[4]=c->r[1]+0x00000024u; // 800B3518
  c->lr=0x800B3520u; f_800361A0(c); // 800B351C
  c->r[3]=c->r[1]+0x00000090u; // 800B3520
  c->r[4]=c->r[3]|c->r[3]; // 800B3524
  c->lr=0x800B352Cu; f_80295DAC(c); // 800B3528
  c->r[3]=c->r[1]+0x00000018u; // 800B352C
  c->r[4]=c->r[1]+0x00000030u; // 800B3530
  c->r[5]=c->r[1]+0x00000024u; // 800B3534
  c->r[6]=c->r[1]+0x00000090u; // 800B3538
  c->r[7]=0u+0x00000000u; // 800B353C
  c->lr=0x800B3544u; f_8002BE64(c); // 800B3540
  c->r[3]=c->r[30]+0x00000040u; // 800B3544
  c->r[4]=c->r[1]+0x00000048u; // 800B3548
  c->lr=0x800B3550u; f_800361A0(c); // 800B354C
  c->r[3]=c->r[30]+0x0000004Cu; // 800B3550
  c->r[4]=c->r[1]+0x00000030u; // 800B3554
  c->lr=0x800B355Cu; f_800361A0(c); // 800B3558
  c->r[0]=R32(c->r[31]+0x00000000u); // 800B355C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[31]); // 800B3560
  c->r[5]=R32(c->r[31]+0x00000004u); // 800B3564
  c->r[3]=c->r[30]+0x00000058u; // 800B3568
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B356C
  c->r[4]=c->r[1]+0x00000008u; // 800B3570
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B3574
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B3578
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B357C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800B3580
  c->lr=0x800B3588u; f_800361A0(c); // 800B3584
  c->r[3]=R32(c->r[28]+0x00000000u); // 800B3588
  c->r[4]=c->r[1]+0x00000048u; // 800B358C
  c->r[3]=c->r[3]+0x0000002Cu; // 800B3590
  c->lr=0x800B3598u; f_800361A0(c); // 800B3594
  c->r[3]=R32(c->r[28]+0x00000000u); // 800B3598
  c->r[4]=c->r[1]+0x00000030u; // 800B359C
  c->r[3]=c->r[3]+0x00000060u; // 800B35A0
  c->lr=0x800B35A8u; f_800361A0(c); // 800B35A4
L_800B35A8:;
  c->r[29]=c->r[29]+0x00000001u; // 800B35A8
  c->r[28]=c->r[28]+0x00000004u; // 800B35AC
  cmps(c,0,(int32_t)c->r[29],20); // 800B35B0
  if (crb(c,0)) { IRQCHK(c); goto L_800B3420; } // 800B35B4
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 800B35B8
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 800B35BC
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,30,ea,0,0);} // 800B35C0
  c->r[11]=c->r[1]+0x000000E0u; // 800B35C4
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[30]=RF64(ea);} // 800B35C8
  c->lr=0x800B35D0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B35CC
  c->r[0]=R32(c->r[1]+0x00000104u); // 800B35D0
  c->lr=c->r[0]; // 800B35D4
  c->r[1]=c->r[1]+0x00000100u; // 800B35D8
  return; // 800B35DC
}

// fn_800B35E0
void f_800B35E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B35E0
  c->r[0]=c->lr; // 800B35E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B35E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B35EC
  c->r[31]=c->r[4]|c->r[4]; // 800B35F0
  c->r[4]=c->r[5]|c->r[5]; // 800B35F4
  c->lr=0x800B35FCu; f_800B2680(c); // 800B35F8
  cmps(c,0,(int32_t)c->r[3],0); // 800B35FC
  if (crb(c,2)) { goto L_800B3614; } // 800B3600
  c->r[4]=c->r[31]|c->r[31]; // 800B3604
  c->r[3]=c->r[3]+0x0000004Cu; // 800B3608
  c->lr=0x800B3610u; f_80295B14(c); // 800B360C
  goto L_800B361C; // 800B3610
L_800B3614:;
  c->r[3]=c->r[31]|c->r[31]; // 800B3614
  c->lr=0x800B361Cu; f_80295AE8(c); // 800B3618
L_800B361C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B361C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B3620
  c->lr=c->r[0]; // 800B3624
  c->r[1]=c->r[1]+0x00000010u; // 800B3628
  return; // 800B362C
}

// fn_800B3630
void f_800B3630(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3630
  c->r[0]=c->lr; // 800B3634
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B3638
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800B363C
  W32(c->r[1]+0x00000088u,c->r[30]); // 800B3640
  c->r[30]=c->r[3]|c->r[3]; // 800B3644
  c->r[3]=c->r[1]+0x00000008u; // 800B3648
  c->r[4]=c->r[30]+0x0000002Cu; // 800B364C
  c->lr=0x800B3654u; f_800361A0(c); // 800B3650
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3654
  c->r[31]=0u+0x80550000u; // 800B3658
  {uint32_t ea=c->r[2]+0xFFFF9A2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B365C
  c->r[31]=c->r[31]+0x00003D60u; // 800B3660
  {uint32_t ea=c->r[2]+0xFFFF9A3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3664
  c->r[5]=c->r[30]|c->r[30]; // 800B3668
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800B366C
  c->r[3]=c->r[31]+0x00000010u; // 800B3670
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800B3674
  c->r[6]=c->r[1]+0x00000008u; // 800B3678
  c->r[7]=c->r[1]+0x00000014u; // 800B367C
  c->r[8]=c->r[1]+0x00000020u; // 800B3680
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800B3684
  c->r[4]=0u+0x00000103u; // 800B3688
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800B368C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B3690
  c->lr=0x800B3698u; f_802264E4(c); // 800B3694
  c->r[3]=c->r[31]+0x00000010u; // 800B3698
  c->r[4]=c->r[1]+0x00000020u; // 800B369C
  c->lr=0x800B36A4u; f_80226D68(c); // 800B36A0
  c->r[0]=R32(c->r[1]+0x00000094u); // 800B36A4
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800B36A8
  c->r[30]=R32(c->r[1]+0x00000088u); // 800B36AC
  c->lr=c->r[0]; // 800B36B0
  c->r[1]=c->r[1]+0x00000090u; // 800B36B4
  return; // 800B36B8
}

// fn_800B36BC
void f_800B36BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B36BC
  c->r[0]=c->lr; // 800B36C0
  c->r[5]=0u+0x803A0000u; // 800B36C4
  c->r[6]=0u+0x00000001u; // 800B36C8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B36CC
  c->r[5]=c->r[5]+0xFFFFCB14u; // 800B36D0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800B36D4
  c->r[31]=c->r[4]|c->r[4]; // 800B36D8
  c->r[4]=c->r[5]+0x00000009u; // 800B36DC
  c->r[5]=c->r[1]+0x00000018u; // 800B36E0
  c->r[3]=R32(c->r[3]+0x00000398u); // 800B36E4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B36E8
  c->lr=0x800B36F0u; f_80257018(c); // 800B36EC
  c->r[4]=0u+0x803A0000u; // 800B36F0
  {uint32_t ea=c->r[4]+0xFFFFCAE0u; c->r[0]=R32(ea); c->r[4]=ea;} // 800B36F4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B36F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B36FC
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B3700
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3704
  c->r[0]=R32(c->r[4]+0x00000008u); // 800B3708
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B370C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B3710
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3714
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 800B3718
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B371C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B3720
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800B3724
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3728
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[1]);} // 800B372C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3730
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B3734
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 800B3738
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800B373C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800B3740
  c->lr=c->r[0]; // 800B3744
  c->r[1]=c->r[1]+0x00000050u; // 800B3748
  return; // 800B374C
}

// fn_800B3750
void f_800B3750(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3750
  c->r[0]=c->lr; // 800B3754
  c->r[4]=0u+0x803A0000u; // 800B3758
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B375C
  c->r[4]=c->r[4]+0xFFFFCB14u; // 800B3760
  c->r[4]=c->r[4]+0x00000010u; // 800B3764
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B3768
  c->r[31]=c->r[3]|c->r[3]; // 800B376C
  c->r[5]=R32(c->r[3]+0x00000398u); // 800B3770
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800B3774
  c->lr=0x800B377Cu; f_80256EC4(c); // 800B3778
  c->r[6]=R32(c->r[31]+0x0000008Cu); // 800B377C
  c->r[4]=c->r[3]|c->r[3]; // 800B3780
  c->r[0]=R32(c->r[31]+0x00000090u); // 800B3784
  c->r[5]=c->r[1]+0x00000008u; // 800B3788
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B378C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B3790
  c->r[0]=R32(c->r[31]+0x00000094u); // 800B3794
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B3798
  c->r[3]=R32(c->r[31]+0x00000398u); // 800B379C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B37A0
  c->lr=0x800B37A8u; f_8025E9C0(c); // 800B37A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B37A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B37AC
  c->lr=c->r[0]; // 800B37B0
  c->r[1]=c->r[1]+0x00000020u; // 800B37B4
  return; // 800B37B8
}

// fn_800B37BC
void f_800B37BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B37BC
  c->r[0]=c->lr; // 800B37C0
  cmps(c,0,(int32_t)c->r[3],0); // 800B37C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B37C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B37CC
  c->r[31]=c->r[4]|c->r[4]; // 800B37D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B37D4
  c->r[30]=c->r[3]|c->r[3]; // 800B37D8
  if (crb(c,2)) { goto L_800B37F8; } // 800B37DC
  c->r[4]=0u+0x00000000u; // 800B37E0
  c->lr=0x800B37E8u; f_8026A06C(c); // 800B37E4
  cmps(c,0,(int32_t)c->r[31],0); // 800B37E8
  if (!crb(c,1)) { goto L_800B37F8; } // 800B37EC
  c->r[3]=c->r[30]|c->r[30]; // 800B37F0
  c->lr=0x800B37F8u; f_8026A268(c); // 800B37F4
L_800B37F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800B37F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B37FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B3800
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3804
  c->lr=c->r[0]; // 800B3808
  c->r[1]=c->r[1]+0x00000010u; // 800B380C
  return; // 800B3810
}

// fn_800B3814
void f_800B3814(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3814
  c->r[0]=c->lr; // 800B3818
  c->r[4]=0u+0x00000000u; // 800B381C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B3820
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B3824
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B3828
  c->r[30]=c->r[3]|c->r[3]; // 800B382C
  c->lr=0x800B3834u; f_801F57D0(c); // 800B3830
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B3834
  c->r[3]=c->r[30]|c->r[30]; // 800B3838
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800B383C
  c->ctr=c->r[12]; // 800B3840
  if (true) { c->lr=0x800B3848u; dispatch(c,c->ctr); } // 800B3844
  c->r[3]=c->r[30]|c->r[30]; // 800B3848
  c->lr=0x800B3850u; f_801F4B94(c); // 800B384C
  c->r[3]=0u+0x00000003u; // 800B3850
  c->r[0]=0u+0x00000012u; // 800B3854
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800B3858
  c->r[3]=c->r[30]|c->r[30]; // 800B385C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B3860
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800B3864
  c->lr=0x800B386Cu; f_801F58BC(c); // 800B3868
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B386C
  c->r[31]=0u+0x00000001u; // 800B3870
  c->r[4]=0u+0x803A0000u; // 800B3874
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800B3878
  c->r[4]=c->r[4]+0xFFFFCB30u; // 800B387C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B3880
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3884
  c->lr=0x800B388Cu; f_80256EC4(c); // 800B3888
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B388C
  c->r[4]=0u+0x00000000u; // 800B3890
  {uint32_t ea=c->r[2]+0xFFFF9A78u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3894
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800B3898
  c->f[2]=c->f[1]; // 800B389C
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B38A0
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800B38A4
  c->r[5]=R32(c->r[5]+0x00000034u); // 800B38A8
  c->lr=0x800B38B0u; f_8024FEAC(c); // 800B38AC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B38B0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B38B4
  c->lr=0x800B38BCu; f_802501B0(c); // 800B38B8
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B38BC
  c->r[0]=0u+0x00000000u; // 800B38C0
  c->r[3]=c->r[30]|c->r[30]; // 800B38C4
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800B38C8
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800B38CC
  c->lr=0x800B38D4u; f_801F56F4(c); // 800B38D0
  c->r[7]=0u+0x803D0000u; // 800B38D4
  {uint32_t ea=c->r[7]+0xFFFFF2C8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B38D8
  c->r[3]=c->r[30]|c->r[30]; // 800B38DC
  c->r[4]=c->r[1]+0x00000008u; // 800B38E0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B38E4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B38E8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B38EC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B38F0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B38F4
  c->lr=0x800B38FCu; f_800B3914(c); // 800B38F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B38FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B3900
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B3904
  c->lr=c->r[0]; // 800B3908
  c->r[1]=c->r[1]+0x00000020u; // 800B390C
  return; // 800B3910
}

// fn_800B3914
void f_800B3914(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3914
  c->r[0]=c->lr; // 800B3918
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B391C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B3920
  c->r[31]=c->r[4]|c->r[4]; // 800B3924
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B3928
  c->r[30]=c->r[3]|c->r[3]; // 800B392C
  c->r[3]=c->r[31]|c->r[31]; // 800B3930
  c->lr=0x800B3938u; f_802B9FDC(c); // 800B3934
  cmps(c,0,(int32_t)c->r[3],0); // 800B3938
  if (crb(c,2)) { goto L_800B3958; } // 800B393C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B3940
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B3944
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B3948
  W32(c->r[30]+0x00000020u,c->r[0]); // 800B394C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B3950
  W32(c->r[30]+0x00000024u,c->r[0]); // 800B3954
L_800B3958:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3958
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B395C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B3960
  c->lr=c->r[0]; // 800B3964
  c->r[1]=c->r[1]+0x00000010u; // 800B3968
  return; // 800B396C
}

// fn_800B3970
void f_800B3970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3970
  c->r[0]=c->lr; // 800B3974
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B397C
  c->r[31]=c->r[3]|c->r[3]; // 800B3980
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800B3984
  c->r[12]=R32(c->r[12]+0x00000068u); // 800B3988
  c->ctr=c->r[12]; // 800B398C
  if (true) { c->lr=0x800B3994u; dispatch(c,c->ctr); } // 800B3990
  c->r[3]=c->r[31]|c->r[31]; // 800B3994
  c->lr=0x800B399Cu; f_801F4C0C(c); // 800B3998
  c->r[3]=c->r[31]+0x00000210u; // 800B399C
  c->lr=0x800B39A4u; f_80221698(c); // 800B39A0
  c->r[3]=c->r[31]|c->r[31]; // 800B39A4
  c->lr=0x800B39ACu; f_801F56F4(c); // 800B39A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B39AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B39B0
  c->lr=c->r[0]; // 800B39B4
  c->r[1]=c->r[1]+0x00000010u; // 800B39B8
  return; // 800B39BC
}

// fn_800B39C0
void f_800B39C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B39C0
  c->r[0]=c->lr; // 800B39C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B39C8
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 800B39CC
  cmps(c,0,(int32_t)c->r[0],1); // 800B39D0
  if (crb(c,2)) { goto L_800B39FC; } // 800B39D4
  if (!crb(c,0)) { goto L_800B39E8; } // 800B39D8
  cmps(c,0,(int32_t)c->r[0],0); // 800B39DC
  if (!crb(c,0)) { goto L_800B39F4; } // 800B39E0
  goto L_800B3A0C; // 800B39E4
L_800B39E8:;
  cmps(c,0,(int32_t)c->r[0],3); // 800B39E8
  if (!crb(c,0)) { goto L_800B3A0C; } // 800B39EC
  goto L_800B3A04; // 800B39F0
L_800B39F4:;
  c->r[0]=0u+0x0000020Fu; // 800B39F4
  goto L_800B3A10; // 800B39F8
L_800B39FC:;
  c->r[0]=0u+0x00000250u; // 800B39FC
  goto L_800B3A10; // 800B3A00
L_800B3A04:;
  c->r[0]=0u+0x00000251u; // 800B3A04
  goto L_800B3A10; // 800B3A08
L_800B3A0C:;
  c->r[0]=0u+0x0000020Fu; // 800B3A0C
L_800B3A10:;
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B3A10
  c->r[3]=c->r[0]|c->r[0]; // 800B3A14
  c->r[5]=0u+0x00000000u; // 800B3A18
  c->r[4]=c->r[4]+0x0000010Cu; // 800B3A1C
  c->lr=0x800B3A24u; f_8024EE50(c); // 800B3A20
  c->r[0]=cntlz(c->r[3]); // 800B3A24
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B3A28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3A2C
  c->lr=c->r[0]; // 800B3A30
  c->r[1]=c->r[1]+0x00000010u; // 800B3A34
  return; // 800B3A38
}

// fn_800B3A3C
void f_800B3A3C(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800B3A3C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800B3A40
  c->ctr=c->r[12]; // 800B3A44
  if (true) { dispatch(c,c->ctr); return; } // 800B3A48
}

// fn_800B3A4C
void f_800B3A4C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800B3A4C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3A50
  f_802501B0(c); return; // 800B3A54
}

// fn_800B3A58
void f_800B3A58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3A58
  c->r[0]=c->lr; // 800B3A5C
  c->r[7]=0u+0x803D0000u; // 800B3A60
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B3A64
  c->r[4]=c->r[1]+0x00000008u; // 800B3A68
  {uint32_t ea=c->r[7]+0xFFFFF2D4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B3A6C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B3A70
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B3A74
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B3A78
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B3A7C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B3A80
  c->lr=0x800B3A88u; f_800B3914(c); // 800B3A84
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B3A88
  c->lr=c->r[0]; // 800B3A8C
  c->r[1]=c->r[1]+0x00000020u; // 800B3A90
  return; // 800B3A94
}

// fn_800B3A98
void f_800B3A98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3A98
  c->r[0]=c->lr; // 800B3A9C
  cmps(c,0,(int32_t)c->r[3],0); // 800B3AA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3AA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B3AA8
  c->r[31]=c->r[4]|c->r[4]; // 800B3AAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B3AB0
  c->r[30]=c->r[3]|c->r[3]; // 800B3AB4
  if (crb(c,2)) { goto L_800B3AD4; } // 800B3AB8
  c->r[4]=0u+0x00000000u; // 800B3ABC
  c->lr=0x800B3AC4u; f_8026A06C(c); // 800B3AC0
  cmps(c,0,(int32_t)c->r[31],0); // 800B3AC4
  if (!crb(c,1)) { goto L_800B3AD4; } // 800B3AC8
  c->r[3]=c->r[30]|c->r[30]; // 800B3ACC
  c->lr=0x800B3AD4u; f_8026A268(c); // 800B3AD0
L_800B3AD4:;
  c->r[3]=c->r[30]|c->r[30]; // 800B3AD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B3AD8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B3ADC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3AE0
  c->lr=c->r[0]; // 800B3AE4
  c->r[1]=c->r[1]+0x00000010u; // 800B3AE8
  return; // 800B3AEC
}

// fn_800B3AF0
void f_800B3AF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3AF0
  c->r[0]=c->lr; // 800B3AF4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B3AF8
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800B3AFC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800B3B00
  c->r[4]=0u+0x00000000u; // 800B3B04
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800B3B08
  W32(c->r[1]+0x000000A8u,c->r[30]); // 800B3B0C
  c->r[30]=c->r[3]|c->r[3]; // 800B3B10
  W32(c->r[1]+0x000000A4u,c->r[29]); // 800B3B14
  W32(c->r[1]+0x000000A0u,c->r[28]); // 800B3B18
  c->lr=0x800B3B20u; f_801F57D0(c); // 800B3B1C
  c->r[3]=c->r[30]|c->r[30]; // 800B3B20
  c->r[4]=0u+0x00000001u; // 800B3B24
  c->lr=0x800B3B2Cu; f_801F57D0(c); // 800B3B28
  c->r[3]=c->r[30]|c->r[30]; // 800B3B2C
  c->r[4]=0u+0x00000002u; // 800B3B30
  c->lr=0x800B3B38u; f_801F57D0(c); // 800B3B34
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B3B38
  c->r[3]=c->r[30]|c->r[30]; // 800B3B3C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800B3B40
  c->ctr=c->r[12]; // 800B3B44
  if (true) { c->lr=0x800B3B4Cu; dispatch(c,c->ctr); } // 800B3B48
  c->r[3]=c->r[30]|c->r[30]; // 800B3B4C
  c->lr=0x800B3B54u; f_801F4B94(c); // 800B3B50
  c->r[3]=0u+0x00000003u; // 800B3B54
  c->r[0]=0u+0x00000013u; // 800B3B58
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800B3B5C
  c->r[3]=c->r[30]|c->r[30]; // 800B3B60
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B3B64
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800B3B68
  c->lr=0x800B3B70u; f_801F58BC(c); // 800B3B6C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B3B70
  c->r[28]=0u+0x00000001u; // 800B3B74
  c->r[29]=0u+0x803A0000u; // 800B3B78
  W8(c->r[3]+0x0000001Cu,c->r[28]); // 800B3B7C
  c->r[4]=c->r[29]+0xFFFFCC48u; // 800B3B80
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B3B84
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3B88
  c->lr=0x800B3B90u; f_80256EC4(c); // 800B3B8C
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B3B90
  c->r[4]=0u+0x00000001u; // 800B3B94
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3B98
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800B3B9C
  c->f[2]=c->f[1]; // 800B3BA0
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B3BA4
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800B3BA8
  c->r[5]=R32(c->r[5]+0x00000034u); // 800B3BAC
  c->lr=0x800B3BB4u; f_8024FEAC(c); // 800B3BB0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B3BB4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3BB8
  c->lr=0x800B3BC0u; f_802501B0(c); // 800B3BBC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B3BC0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3BC4
  c->lr=0x800B3BCCu; f_8025037C(c); // 800B3BC8
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B3BCC
  c->r[31]=0u+0x00000000u; // 800B3BD0
  c->r[3]=c->r[30]|c->r[30]; // 800B3BD4
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800B3BD8
  c->r[4]=R32(c->r[30]+0x00000398u); // 800B3BDC
  c->lr=0x800B3BE4u; f_801F58BC(c); // 800B3BE0
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3BE4
  c->r[4]=c->r[29]+0xFFFFCC48u; // 800B3BE8
  W8(c->r[3]+0x0000001Cu,c->r[28]); // 800B3BEC
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3BF0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3BF4
  c->lr=0x800B3BFCu; f_80256EC4(c); // 800B3BF8
  c->r[5]=R32(c->r[30]+0x00000398u); // 800B3BFC
  c->r[4]=0u+0x00000000u; // 800B3C00
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3C04
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800B3C08
  c->f[2]=c->f[1]; // 800B3C0C
  c->r[5]=R32(c->r[30]+0x00000398u); // 800B3C10
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800B3C14
  c->r[5]=R32(c->r[5]+0x00000034u); // 800B3C18
  c->lr=0x800B3C20u; f_8024FEAC(c); // 800B3C1C
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3C20
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3C24
  c->lr=0x800B3C2Cu; f_802501B0(c); // 800B3C28
  c->r[4]=R32(c->r[30]+0x00000398u); // 800B3C2C
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)392); // 800B3C30
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800B3C34
  W8(c->r[30]+0x000000ABu,c->r[31]); // 800B3C38
  W32(c->r[30]+0x00000098u,c->r[31]); // 800B3C3C
  W8(c->r[30]+0x000000ACu,c->r[31]); // 800B3C40
  W8(c->r[30]+0x000000ADu,c->r[31]); // 800B3C44
  W8(c->r[30]+0x000000AEu,c->r[31]); // 800B3C48
  W32(c->r[30]+0x00000448u,c->r[28]); // 800B3C4C
  c->lr=0x800B3C54u; f_8024E174(c); // 800B3C50
  W32(c->r[30]+0x0000043Cu,c->r[3]); // 800B3C54
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3C58
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3C5C
  cmps(c,0,(int32_t)c->r[3],0); // 800B3C60
  if (crb(c,2)) { goto L_800B402C; } // 800B3C64
  c->r[31]=c->r[29]+0xFFFFCC48u; // 800B3C68
  c->r[4]=c->r[31]+0x00000009u; // 800B3C6C
  c->lr=0x800B3C74u; f_80256EC4(c); // 800B3C70
  W8(c->r[30]+0x00000074u,c->r[3]); // 800B3C74
  c->r[4]=c->r[31]+0x00000010u; // 800B3C78
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3C7C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3C80
  c->lr=0x800B3C88u; f_80256EC4(c); // 800B3C84
  W8(c->r[30]+0x00000075u,c->r[3]); // 800B3C88
  c->r[4]=c->r[31]+0x00000017u; // 800B3C8C
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3C90
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3C94
  c->lr=0x800B3C9Cu; f_80256EC4(c); // 800B3C98
  W8(c->r[30]+0x00000076u,c->r[3]); // 800B3C9C
  c->r[4]=c->r[31]+0x0000001Eu; // 800B3CA0
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3CA4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3CA8
  c->lr=0x800B3CB0u; f_80256EC4(c); // 800B3CAC
  W8(c->r[30]+0x00000077u,c->r[3]); // 800B3CB0
  c->r[4]=c->r[31]+0x00000025u; // 800B3CB4
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3CB8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3CBC
  c->lr=0x800B3CC4u; f_80256EC4(c); // 800B3CC0
  W8(c->r[30]+0x00000078u,c->r[3]); // 800B3CC4
  c->r[4]=c->r[31]+0x0000002Cu; // 800B3CC8
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3CCC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3CD0
  c->lr=0x800B3CD8u; f_80256EC4(c); // 800B3CD4
  W8(c->r[30]+0x00000079u,c->r[3]); // 800B3CD8
  c->r[4]=c->r[31]+0x00000033u; // 800B3CDC
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3CE0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3CE4
  c->lr=0x800B3CECu; f_80256EC4(c); // 800B3CE8
  W8(c->r[30]+0x0000007Au,c->r[3]); // 800B3CEC
  c->r[4]=c->r[31]+0x0000003Au; // 800B3CF0
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3CF4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3CF8
  c->lr=0x800B3D00u; f_80256EC4(c); // 800B3CFC
  W8(c->r[30]+0x0000007Bu,c->r[3]); // 800B3D00
  c->r[4]=c->r[31]+0x00000041u; // 800B3D04
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3D08
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3D0C
  c->lr=0x800B3D14u; f_80256EC4(c); // 800B3D10
  W8(c->r[30]+0x0000007Cu,c->r[3]); // 800B3D14
  c->r[4]=c->r[31]+0x00000048u; // 800B3D18
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3D1C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3D20
  c->lr=0x800B3D28u; f_80256EC4(c); // 800B3D24
  W8(c->r[30]+0x0000007Du,c->r[3]); // 800B3D28
  c->r[4]=c->r[31]+0x00000050u; // 800B3D2C
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3D30
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3D34
  c->lr=0x800B3D3Cu; f_80256EC4(c); // 800B3D38
  W8(c->r[30]+0x0000007Eu,c->r[3]); // 800B3D3C
  c->r[4]=c->r[31]+0x00000058u; // 800B3D40
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3D44
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3D48
  c->lr=0x800B3D50u; f_80256EC4(c); // 800B3D4C
  W8(c->r[30]+0x0000007Fu,c->r[3]); // 800B3D50
  c->r[4]=c->r[31]+0x00000060u; // 800B3D54
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3D58
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3D5C
  c->lr=0x800B3D64u; f_80256EC4(c); // 800B3D60
  W8(c->r[30]+0x00000080u,c->r[3]); // 800B3D64
  c->r[4]=c->r[31]+0x00000068u; // 800B3D68
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3D6C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3D70
  c->lr=0x800B3D78u; f_80256EC4(c); // 800B3D74
  W8(c->r[30]+0x00000081u,c->r[3]); // 800B3D78
  c->r[4]=c->r[31]+0x00000070u; // 800B3D7C
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3D80
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3D84
  c->lr=0x800B3D8Cu; f_80256EC4(c); // 800B3D88
  W8(c->r[30]+0x00000082u,c->r[3]); // 800B3D8C
  c->r[4]=c->r[31]+0x00000078u; // 800B3D90
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3D94
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3D98
  c->lr=0x800B3DA0u; f_80256EC4(c); // 800B3D9C
  W8(c->r[30]+0x00000083u,c->r[3]); // 800B3DA0
  c->r[4]=c->r[31]+0x00000080u; // 800B3DA4
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3DA8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3DAC
  c->lr=0x800B3DB4u; f_80256EC4(c); // 800B3DB0
  W8(c->r[30]+0x00000084u,c->r[3]); // 800B3DB4
  c->r[4]=c->r[31]+0x00000088u; // 800B3DB8
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3DBC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3DC0
  c->lr=0x800B3DC8u; f_80256EC4(c); // 800B3DC4
  W8(c->r[30]+0x00000085u,c->r[3]); // 800B3DC8
  c->r[4]=c->r[31]+0x00000090u; // 800B3DCC
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3DD0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3DD4
  c->lr=0x800B3DDCu; f_80256EC4(c); // 800B3DD8
  W8(c->r[30]+0x00000086u,c->r[3]); // 800B3DDC
  c->r[4]=c->r[31]+0x00000098u; // 800B3DE0
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3DE4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3DE8
  c->lr=0x800B3DF0u; f_80256EC4(c); // 800B3DEC
  W8(c->r[30]+0x00000087u,c->r[3]); // 800B3DF0
  c->r[4]=c->r[31]+0x000000A0u; // 800B3DF4
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3DF8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3DFC
  c->lr=0x800B3E04u; f_80256EC4(c); // 800B3E00
  W8(c->r[30]+0x00000088u,c->r[3]); // 800B3E04
  c->r[4]=c->r[31]+0x000000A8u; // 800B3E08
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3E0C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3E10
  c->lr=0x800B3E18u; f_80256EC4(c); // 800B3E14
  W8(c->r[30]+0x00000089u,c->r[3]); // 800B3E18
  c->r[4]=c->r[31]+0x000000B0u; // 800B3E1C
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3E20
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3E24
  c->lr=0x800B3E2Cu; f_80256EC4(c); // 800B3E28
  W8(c->r[30]+0x0000008Au,c->r[3]); // 800B3E2C
  c->r[4]=c->r[31]+0x000000B8u; // 800B3E30
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3E34
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3E38
  c->lr=0x800B3E40u; f_80256EC4(c); // 800B3E3C
  W8(c->r[30]+0x0000008Bu,c->r[3]); // 800B3E40
  c->r[4]=c->r[31]+0x000000C0u; // 800B3E44
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3E48
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3E4C
  c->lr=0x800B3E54u; f_80256EC4(c); // 800B3E50
  W8(c->r[30]+0x0000008Cu,c->r[3]); // 800B3E54
  c->r[4]=c->r[31]+0x000000C8u; // 800B3E58
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3E5C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3E60
  c->lr=0x800B3E68u; f_80256EC4(c); // 800B3E64
  W8(c->r[30]+0x0000008Du,c->r[3]); // 800B3E68
  c->r[4]=c->r[31]+0x000000D0u; // 800B3E6C
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3E70
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3E74
  c->lr=0x800B3E7Cu; f_80256EC4(c); // 800B3E78
  W8(c->r[30]+0x0000008Eu,c->r[3]); // 800B3E7C
  c->r[4]=c->r[31]+0x000000D8u; // 800B3E80
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3E84
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3E88
  c->lr=0x800B3E90u; f_80256EC4(c); // 800B3E8C
  W8(c->r[30]+0x0000008Fu,c->r[3]); // 800B3E90
  c->r[4]=c->r[31]+0x000000E0u; // 800B3E94
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3E98
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3E9C
  c->lr=0x800B3EA4u; f_80256EC4(c); // 800B3EA0
  W8(c->r[30]+0x00000090u,c->r[3]); // 800B3EA4
  c->r[4]=c->r[31]+0x000000E8u; // 800B3EA8
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3EAC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3EB0
  c->lr=0x800B3EB8u; f_80256EC4(c); // 800B3EB4
  W8(c->r[30]+0x00000091u,c->r[3]); // 800B3EB8
  c->r[4]=c->r[31]+0x000000F0u; // 800B3EBC
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3EC0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3EC4
  c->lr=0x800B3ECCu; f_80256EC4(c); // 800B3EC8
  W8(c->r[30]+0x00000092u,c->r[3]); // 800B3ECC
  c->r[5]=c->r[1]+0x00000060u; // 800B3ED0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B3ED4
  c->r[6]=0u+0x00000001u; // 800B3ED8
  c->r[4]=R8(c->r[30]+0x000000A8u); // 800B3EDC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3EE0
  c->lr=0x800B3EE8u; f_80257074(c); // 800B3EE4
  c->r[3]=c->r[1]+0x00000038u; // 800B3EE8
  c->r[4]=c->r[1]+0x0000002Cu; // 800B3EEC
  c->r[5]=c->r[1]+0x00000020u; // 800B3EF0
  c->r[6]=c->r[1]+0x00000060u; // 800B3EF4
  c->r[7]=0u+0x00000000u; // 800B3EF8
  c->lr=0x800B3F00u; f_8002BE64(c); // 800B3EFC
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3F00
  c->r[4]=c->r[1]+0x00000038u; // 800B3F04
  c->r[3]=c->r[3]+0x0000005Cu; // 800B3F08
  c->lr=0x800B3F10u; f_800361A0(c); // 800B3F0C
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3F10
  c->r[4]=c->r[1]+0x0000002Cu; // 800B3F14
  c->r[3]=c->r[3]+0x00000068u; // 800B3F18
  c->lr=0x800B3F20u; f_800361A0(c); // 800B3F1C
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3F20
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3F24
  c->lr=0x800B3F2Cu; f_8025037C(c); // 800B3F28
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3F2C
  c->r[5]=c->r[1]+0x00000048u; // 800B3F30
  c->r[4]=R8(c->r[30]+0x00000074u); // 800B3F34
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3F38
  c->lr=0x800B3F40u; f_8025EB7C(c); // 800B3F3C
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B3F40
  c->r[5]=c->r[1]+0x00000054u; // 800B3F44
  c->r[4]=R8(c->r[30]+0x00000075u); // 800B3F48
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B3F4C
  c->lr=0x800B3F54u; f_8025EB7C(c); // 800B3F50
  {uint32_t ea=c->r[2]+0xFFFF9A8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3F54
  c->r[0]=0u+0x00000020u; // 800B3F58
  W8(c->r[30]+0x000000AAu,c->r[0]); // 800B3F5C
  c->r[4]=0u+0x00000020u; // 800B3F60
  c->r[3]=R32(c->r[30]+0x0000043Cu); // 800B3F64
  c->r[5]=0u+0x00000000u; // 800B3F68
  {uint32_t ea=c->r[30]+0x000000A4u; WF32(ea,c->f[1]);} // 800B3F6C
  c->lr=0x800B3F74u; f_8017F624(c); // 800B3F70
  c->r[6]=0u+0x803A0000u; // 800B3F74
  {uint32_t ea=c->r[6]+0xFFFFCBF8u; c->r[5]=R32(ea); c->r[6]=ea;} // 800B3F78
  c->r[4]=c->r[1]+0x00000014u; // 800B3F7C
  c->r[3]=R32(c->r[6]+0x00000004u); // 800B3F80
  c->r[0]=R32(c->r[6]+0x00000008u); // 800B3F84
  W32(c->r[1]+0x00000014u,c->r[5]); // 800B3F88
  W32(c->r[1]+0x00000018u,c->r[3]); // 800B3F8C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B3F90
  c->r[3]=R32(c->r[30]+0x0000043Cu); // 800B3F94
  c->r[3]=c->r[3]+0x00000010u; // 800B3F98
  c->lr=0x800B3FA0u; f_800361A0(c); // 800B3F9C
  c->r[3]=R32(c->r[30]+0x0000043Cu); // 800B3FA0
  c->r[4]=c->r[1]+0x00000060u; // 800B3FA4
  c->lr=0x800B3FACu; f_801801A8(c); // 800B3FA8
  {uint32_t ea=c->r[2]+0xFFFF9A98u; c->f[31]=RF64(ea);} // 800B3FAC
  c->r[28]=0u+0x00000001u; // 800B3FB0
  c->r[31]=0u+0x43300000u; // 800B3FB4
  goto L_800B4000; // 800B3FB8
L_800B3FBC:;
  c->r[3]=R32(c->r[30]+0x0000043Cu); // 800B3FBC
  c->r[4]=c->r[28]|c->r[28]; // 800B3FC0
  c->r[5]=0u+0x00000000u; // 800B3FC4
  c->lr=0x800B3FCCu; f_800B26A4(c); // 800B3FC8
  c->r[3]=R32(c->r[30]+0x0000043Cu); // 800B3FCC
  c->r[4]=c->r[28]|c->r[28]; // 800B3FD0
  c->r[5]=c->r[28]+0xFFFFFFFFu; // 800B3FD4
  c->lr=0x800B3FDCu; f_800B2648(c); // 800B3FD8
  c->r[0]=c->r[28]^0x80000000u; // 800B3FDC
  W32(c->r[1]+0x00000090u,c->r[31]); // 800B3FE0
  c->r[3]=R32(c->r[30]+0x0000043Cu); // 800B3FE4
  c->r[4]=c->r[28]|c->r[28]; // 800B3FE8
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B3FEC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 800B3FF0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800B3FF4
  c->lr=0x800B3FFCu; f_800B31BC(c); // 800B3FF8
  c->r[28]=c->r[28]+0x00000001u; // 800B3FFC
L_800B4000:;
  c->r[0]=R8(c->r[30]+0x000000AAu); // 800B4000
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 800B4004
  if (crb(c,0)) { IRQCHK(c); goto L_800B3FBC; } // 800B4008
  c->r[3]=R32(c->r[30]+0x0000043Cu); // 800B400C
  c->r[4]=0u+0x00000000u; // 800B4010
  c->lr=0x800B4018u; f_800B414C(c); // 800B4014
  c->r[4]=R8(c->r[30]+0x000000AAu); // 800B4018
  c->r[3]=R32(c->r[30]+0x0000043Cu); // 800B401C
  {uint32_t ea=c->r[2]+0xFFFF9A90u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4020
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800B4024
  c->lr=0x800B402Cu; f_800B31BC(c); // 800B4028
L_800B402C:;
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800B402C
  c->r[3]=c->r[30]|c->r[30]; // 800B4030
  c->lr=0x800B4038u; f_801F58BC(c); // 800B4034
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800B4038
  c->r[31]=0u+0x00000001u; // 800B403C
  c->r[4]=0u+0x803A0000u; // 800B4040
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800B4044
  c->r[4]=c->r[4]+0xFFFFCC48u; // 800B4048
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800B404C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B4050
  c->lr=0x800B4058u; f_80256EC4(c); // 800B4054
  c->r[5]=R32(c->r[30]+0x0000039Cu); // 800B4058
  c->r[4]=0u+0x00000000u; // 800B405C
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4060
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800B4064
  c->f[2]=c->f[1]; // 800B4068
  c->r[5]=R32(c->r[30]+0x0000039Cu); // 800B406C
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800B4070
  c->r[5]=R32(c->r[5]+0x00000034u); // 800B4074
  c->lr=0x800B407Cu; f_8024FEAC(c); // 800B4078
  c->r[3]=R32(c->r[30]+0x0000039Cu); // 800B407C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B4080
  c->lr=0x800B4088u; f_802501B0(c); // 800B4084
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800B4088
  c->r[0]=0u+0x00000000u; // 800B408C
  c->r[3]=c->r[30]|c->r[30]; // 800B4090
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800B4094
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800B4098
  c->lr=0x800B40A0u; f_801F56F4(c); // 800B409C
  c->r[7]=0u+0x803D0000u; // 800B40A0
  {uint32_t ea=c->r[7]+0xFFFFF378u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B40A4
  c->r[3]=c->r[30]|c->r[30]; // 800B40A8
  c->r[4]=c->r[1]+0x00000008u; // 800B40AC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B40B0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B40B4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B40B8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B40BC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B40C0
  c->lr=0x800B40C8u; f_800B40F0(c); // 800B40C4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800B40C8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800B40CC
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800B40D0
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800B40D4
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800B40D8
  c->r[29]=R32(c->r[1]+0x000000A4u); // 800B40DC
  c->r[28]=R32(c->r[1]+0x000000A0u); // 800B40E0
  c->lr=c->r[0]; // 800B40E4
  c->r[1]=c->r[1]+0x000000C0u; // 800B40E8
  return; // 800B40EC
}

// fn_800B40F0
void f_800B40F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B40F0
  c->r[0]=c->lr; // 800B40F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B40F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B40FC
  c->r[31]=c->r[4]|c->r[4]; // 800B4100
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B4104
  c->r[30]=c->r[3]|c->r[3]; // 800B4108
  c->r[3]=c->r[31]|c->r[31]; // 800B410C
  c->lr=0x800B4114u; f_802B9FDC(c); // 800B4110
  cmps(c,0,(int32_t)c->r[3],0); // 800B4114
  if (crb(c,2)) { goto L_800B4134; } // 800B4118
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B411C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B4120
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B4124
  W32(c->r[30]+0x00000020u,c->r[0]); // 800B4128
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B412C
  W32(c->r[30]+0x00000024u,c->r[0]); // 800B4130
L_800B4134:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4134
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B4138
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B413C
  c->lr=c->r[0]; // 800B4140
  c->r[1]=c->r[1]+0x00000010u; // 800B4144
  return; // 800B4148
}

// fn_800B414C
void f_800B414C(Ctx* __restrict c) {
  W8(c->r[3]+0x00000038u,c->r[4]); // 800B414C
  return; // 800B4150
}

// fn_800B4154
void f_800B4154(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4154
  c->r[0]=c->lr; // 800B4158
  W32(c->r[1]+0x000001A4u,c->r[0]); // 800B415C
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[31]);} // 800B4160
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,31,ea,0,0);} // 800B4164
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[30]);} // 800B4168
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,30,ea,0,0);} // 800B416C
  c->r[11]=c->r[1]+0x00000180u; // 800B4170
  c->lr=0x800B4178u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B4174
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800B4178
  c->r[30]=0u+0x803A0000u; // 800B417C
  c->r[28]=c->r[3]|c->r[3]; // 800B4180
  c->r[12]=R32(c->r[12]+0x00000068u); // 800B4184
  c->r[30]=c->r[30]+0xFFFFCB40u; // 800B4188
  c->ctr=c->r[12]; // 800B418C
  if (true) { c->lr=0x800B4194u; dispatch(c,c->ctr); } // 800B4190
  c->r[3]=c->r[28]|c->r[28]; // 800B4194
  c->lr=0x800B419Cu; f_801F4C0C(c); // 800B4198
  c->r[3]=c->r[28]+0x00000210u; // 800B419C
  c->lr=0x800B41A4u; f_80221698(c); // 800B41A0
  c->r[3]=c->r[28]|c->r[28]; // 800B41A4
  c->lr=0x800B41ACu; f_801F56F4(c); // 800B41A8
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B41AC
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B41B0
  cmps(c,0,(int32_t)c->r[0],0); // 800B41B4
  if (crb(c,2)) { goto L_800B4754; } // 800B41B8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800B41BC
  cmps(c,0,(int32_t)c->r[0],0); // 800B41C0
  if (crb(c,2)) { goto L_800B4754; } // 800B41C4
  c->r[3]=R32(c->r[28]+0x00000394u); // 800B41C8
  c->r[5]=c->r[1]+0x00000128u; // 800B41CC
  c->r[4]=R8(c->r[28]+0x000000A8u); // 800B41D0
  c->r[6]=0u+0x00000001u; // 800B41D4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B41D8
  c->lr=0x800B41E0u; f_80257074(c); // 800B41DC
  c->r[3]=c->r[1]+0x000000ECu; // 800B41E0
  c->r[4]=c->r[1]+0x000000E0u; // 800B41E4
  c->r[5]=c->r[1]+0x000000D4u; // 800B41E8
  c->r[6]=c->r[1]+0x00000128u; // 800B41EC
  c->r[7]=0u+0x00000000u; // 800B41F0
  c->lr=0x800B41F8u; f_8002BE64(c); // 800B41F4
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B41F8
  c->r[4]=c->r[1]+0x000000ECu; // 800B41FC
  c->r[3]=c->r[3]+0x0000005Cu; // 800B4200
  c->lr=0x800B4208u; f_800361A0(c); // 800B4204
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B4208
  c->r[4]=c->r[30]+0x00000000u; // 800B420C
  c->r[3]=c->r[3]+0x00000068u; // 800B4210
  c->lr=0x800B4218u; f_800361A0(c); // 800B4214
  c->r[3]=c->r[1]+0x00000128u; // 800B4218
  c->lr=0x800B4220u; f_80295AE8(c); // 800B421C
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4220
  c->r[3]=c->r[1]+0x00000128u; // 800B4224
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4228
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B422C
  c->lr=0x800B4234u; f_80296214(c); // 800B4230
  c->r[0]=R8(c->r[28]+0x000000ABu); // 800B4234
  cmps(c,0,(int32_t)c->r[0],0); // 800B4238
  if (crb(c,2)) { goto L_800B4258; } // 800B423C
  c->r[4]=R8(c->r[28]+0x000000AAu); // 800B4240
  c->r[5]=0u+0x00000001u; // 800B4244
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800B4248
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800B424C
  c->lr=0x800B4254u; f_800B26A4(c); // 800B4250
  goto L_800B426C; // 800B4254
L_800B4258:;
  c->r[4]=R8(c->r[28]+0x000000AAu); // 800B4258
  c->r[5]=0u+0x00000000u; // 800B425C
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800B4260
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800B4264
  c->lr=0x800B426Cu; f_800B26A4(c); // 800B4268
L_800B426C:;
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800B426C
  c->r[4]=c->r[1]+0x00000128u; // 800B4270
  c->lr=0x800B4278u; f_8017FC44(c); // 800B4274
  c->r[0]=R8(c->r[28]+0x000000ACu); // 800B4278
  cmps(c,0,(int32_t)c->r[0],0); // 800B427C
  if (crb(c,2)) { goto L_800B4328; } // 800B4280
  c->r[25]=0u+0x00000000u; // 800B4284
  goto L_800B4314; // 800B4288
L_800B428C:;
  c->r[3]=R32(c->r[28]+0x0000043Cu); // 800B428C
  c->r[5]=c->r[25]|c->r[25]; // 800B4290
  c->r[4]=c->r[1]+0x00000128u; // 800B4294
  c->lr=0x800B429Cu; f_800B4818(c); // 800B4298
  c->r[3]=c->r[1]+0x000000ECu; // 800B429C
  c->r[4]=c->r[1]+0x000000E0u; // 800B42A0
  c->r[5]=c->r[1]+0x000000D4u; // 800B42A4
  c->r[6]=c->r[1]+0x00000128u; // 800B42A8
  c->r[7]=0u+0x00000000u; // 800B42AC
  c->lr=0x800B42B4u; f_8002BE64(c); // 800B42B0
  c->r[4]=R32(c->r[1]+0x000000ECu); // 800B42B4
  c->r[26]=c->r[28]+c->r[25]; // 800B42B8
  c->r[3]=R32(c->r[1]+0x000000F0u); // 800B42BC
  c->r[5]=c->r[1]+0x0000008Cu; // 800B42C0
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800B42C4
  W32(c->r[1]+0x0000008Cu,c->r[4]); // 800B42C8
  W32(c->r[1]+0x00000090u,c->r[3]); // 800B42CC
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B42D0
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B42D4
  c->r[4]=R8(c->r[26]+0x00000074u); // 800B42D8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B42DC
  c->lr=0x800B42E4u; f_8025EAE8(c); // 800B42E0
  c->r[4]=R32(c->r[1]+0x000000E0u); // 800B42E4
  c->r[5]=c->r[1]+0x00000080u; // 800B42E8
  c->r[3]=R32(c->r[1]+0x000000E4u); // 800B42EC
  c->r[0]=R32(c->r[1]+0x000000E8u); // 800B42F0
  W32(c->r[1]+0x00000080u,c->r[4]); // 800B42F4
  W32(c->r[1]+0x00000084u,c->r[3]); // 800B42F8
  W32(c->r[1]+0x00000088u,c->r[0]); // 800B42FC
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B4300
  c->r[4]=R8(c->r[26]+0x00000074u); // 800B4304
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B4308
  c->lr=0x800B4310u; f_8025E9C0(c); // 800B430C
  c->r[25]=c->r[25]+0x00000001u; // 800B4310
L_800B4314:;
  c->r[3]=R8(c->r[28]+0x000000AAu); // 800B4314
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B4318
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 800B431C
  if (crb(c,0)) { IRQCHK(c); goto L_800B428C; } // 800B4320
  goto L_800B4748; // 800B4324
L_800B4328:;
  c->r[3]=R32(c->r[28]+0x00000394u); // 800B4328
  c->r[5]=c->r[1]+0x00000128u; // 800B432C
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B4330
  c->r[6]=0u+0x00000001u; // 800B4334
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B4338
  c->r[4]=R8(c->r[28]+0x000000A8u); // 800B433C
  c->lr=0x800B4344u; f_80257074(c); // 800B4340
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B4344
  c->r[4]=c->r[1]+0x000000E0u; // 800B4348
  c->r[5]=c->r[1]+0x000000D4u; // 800B434C
  c->r[6]=c->r[1]+0x00000128u; // 800B4350
  c->r[3]=c->r[3]+0x0000005Cu; // 800B4354
  c->r[7]=0u+0x00000000u; // 800B4358
  c->lr=0x800B4360u; f_8002BE64(c); // 800B435C
  c->r[0]=R8(c->r[28]+0x000000AEu); // 800B4360
  cmps(c,0,(int32_t)c->r[0],1); // 800B4364
  if (crb(c,2)) { goto L_800B44FC; } // 800B4368
  if (!crb(c,0)) { goto L_800B437C; } // 800B436C
  cmps(c,0,(int32_t)c->r[0],0); // 800B4370
  if (!crb(c,0)) { goto L_800B4388; } // 800B4374
  goto L_800B4748; // 800B4378
L_800B437C:;
  cmps(c,0,(int32_t)c->r[0],3); // 800B437C
  if (!crb(c,0)) { goto L_800B4748; } // 800B4380
  goto L_800B4710; // 800B4384
L_800B4388:;
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B4388
  c->r[4]=c->r[30]+0x00000000u; // 800B438C
  c->r[3]=c->r[3]+0x00000068u; // 800B4390
  c->lr=0x800B4398u; f_800361A0(c); // 800B4394
  {uint32_t ea=c->r[2]+0xFFFF9AA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4398
  c->r[3]=c->r[28]+0x00000010u; // 800B439C
  c->r[5]=R32(c->r[28]+0x00000398u); // 800B43A0
  c->r[4]=0u+0x00000000u; // 800B43A4
  {uint32_t ea=c->r[5]+0x00000068u; WF32(ea,c->f[0]);} // 800B43A8
  c->lr=0x800B43B0u; f_8003D7E8(c); // 800B43AC
  cmps(c,0,(int32_t)c->r[3],0); // 800B43B0
  if (crb(c,2)) { goto L_800B43D0; } // 800B43B4
  c->r[3]=c->r[28]|c->r[28]; // 800B43B8
  c->lr=0x800B43C0u; f_800B4C24(c); // 800B43BC
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B43C0
  {uint32_t ea=c->r[3]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B43C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B43C8
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 800B43CC
L_800B43D0:;
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B43D0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B43D4
  c->lr=0x800B43DCu; f_802501B0(c); // 800B43D8
  c->r[3]=c->r[30]+0x00000000u; // 800B43DC
  c->r[30]=R32(c->r[30]+0x00000000u); // 800B43E0
  c->r[31]=R32(c->r[3]+0x00000004u); // 800B43E4
  c->r[29]=0u+0x00000000u; // 800B43E8
  c->r[26]=R32(c->r[3]+0x00000008u); // 800B43EC
  c->r[27]=0u+0x00000000u; // 800B43F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B43F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B43F8
  W32(c->r[1]+0x00000010u,c->r[26]); // 800B43FC
  goto L_800B44E8; // 800B4400
L_800B4404:;
  c->r[0]=R8(c->r[28]+0x000000ADu); // 800B4404
  cmps(c,0,(int32_t)c->r[0],0); // 800B4408
  if (crb(c,2)) { goto L_800B446C; } // 800B440C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800B4410
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800B4414
  if (!crb(c,2)) { goto L_800B446C; } // 800B4418
  W32(c->r[1]+0x00000068u,c->r[27]); // 800B441C
  c->r[3]=c->r[28]|c->r[28]; // 800B4420
  W32(c->r[1]+0x0000006Cu,c->r[27]); // 800B4424
  W32(c->r[1]+0x00000070u,c->r[27]); // 800B4428
  c->lr=0x800B4430u; f_800B4AA8(c); // 800B442C
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[1]); // 800B4430
  c->r[0]=c->r[27]|c->r[27]; // 800B4434
  c->r[3]=c->r[27]|c->r[27]; // 800B4438
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B443C
  c->r[25]=c->r[28]+c->r[29]; // 800B4440
  c->r[5]=c->r[1]+0x00000074u; // 800B4444
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 800B4448
  c->r[0]=R32(c->r[1]+0x00000070u); // 800B444C
  W32(c->r[1]+0x00000078u,c->r[3]); // 800B4450
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800B4454
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B4458
  {uint32_t ea=c->r[25]+0x00000074u; c->r[4]=R8(ea); c->r[25]=ea;} // 800B445C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B4460
  c->lr=0x800B4468u; f_8025EAE8(c); // 800B4464
  goto L_800B44A4; // 800B4468
L_800B446C:;
  W32(c->r[1]+0x00000058u,c->r[27]); // 800B446C
  c->r[25]=c->r[28]+c->r[29]; // 800B4470
  c->r[5]=c->r[1]+0x0000005Cu; // 800B4474
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[31]);} // 800B4478
  c->r[0]=R32(c->r[1]+0x00000058u); // 800B447C
  W32(c->r[1]+0x0000005Cu,c->r[27]); // 800B4480
  W32(c->r[1]+0x00000060u,c->r[27]); // 800B4484
  W32(c->r[1]+0x00000064u,c->r[0]); // 800B4488
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B448C
  {uint32_t ea=c->r[25]+0x00000074u; c->r[4]=R8(ea); c->r[25]=ea;} // 800B4490
  W32(c->r[1]+0x00000050u,c->r[27]); // 800B4494
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B4498
  W32(c->r[1]+0x00000054u,c->r[27]); // 800B449C
  c->lr=0x800B44A4u; f_8025EAE8(c); // 800B44A0
L_800B44A4:;
  W32(c->r[1]+0x00000044u,c->r[30]); // 800B44A4
  c->r[5]=c->r[1]+0x00000044u; // 800B44A8
  W32(c->r[1]+0x00000048u,c->r[31]); // 800B44AC
  W32(c->r[1]+0x0000004Cu,c->r[26]); // 800B44B0
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B44B4
  c->r[4]=R8(c->r[25]+0x00000000u); // 800B44B8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B44BC
  c->lr=0x800B44C4u; f_8025E9C0(c); // 800B44C0
  cmps(c,0,(int32_t)c->r[29],0); // 800B44C4
  if (!crb(c,2)) { goto L_800B44E4; } // 800B44C8
  c->r[0]=R8(c->r[28]+0x000000ADu); // 800B44CC
  cmps(c,0,(int32_t)c->r[0],0); // 800B44D0
  if (crb(c,2)) { goto L_800B44E0; } // 800B44D4
  {uint32_t ea=c->r[2]+0xFFFF9AA4u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B44D8
  goto L_800B44E4; // 800B44DC
L_800B44E0:;
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B44E0
L_800B44E4:;
  c->r[29]=c->r[29]+0x00000001u; // 800B44E4
L_800B44E8:;
  c->r[3]=R8(c->r[28]+0x000000AAu); // 800B44E8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B44EC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800B44F0
  if (crb(c,0)) { IRQCHK(c); goto L_800B4404; } // 800B44F4
  goto L_800B4748; // 800B44F8
L_800B44FC:;
  c->r[3]=c->r[30]+0x000000D0u; // 800B44FC
  c->r[6]=R32(c->r[30]+0x000000D0u); // 800B4500
  c->r[5]=R32(c->r[3]+0x00000004u); // 800B4504
  c->r[4]=0u+0x00000000u; // 800B4508
  c->r[0]=R32(c->r[3]+0x00000008u); // 800B450C
  W32(c->r[1]+0x000000A4u,c->r[6]); // 800B4510
  W32(c->r[1]+0x000000A8u,c->r[5]); // 800B4514
  W32(c->r[1]+0x000000ACu,c->r[0]); // 800B4518
  c->r[3]=R32(c->r[28]+0x00000098u); // 800B451C
  c->lr=0x800B4524u; f_80039840(c); // 800B4520
  c->r[4]=R32(c->r[28]+0x0000009Cu); // 800B4524
  c->r[5]=c->r[1]+0x00000128u; // 800B4528
  c->r[6]=0u+0x00000001u; // 800B452C
  c->lr=0x800B4534u; f_80257074(c); // 800B4530
  c->r[3]=c->r[1]+0x000000ECu; // 800B4534
  c->r[4]=c->r[1]+0x000000E0u; // 800B4538
  c->r[5]=c->r[1]+0x000000D4u; // 800B453C
  c->r[6]=c->r[1]+0x00000128u; // 800B4540
  c->r[7]=0u+0x00000000u; // 800B4544
  c->lr=0x800B454Cu; f_8002BE64(c); // 800B4548
  c->r[3]=c->r[1]+0x00000128u; // 800B454C
  c->r[4]=c->r[1]+0x000000A4u; // 800B4550
  c->r[5]=c->r[1]+0x000000ECu; // 800B4554
  c->lr=0x800B455Cu; f_80296750(c); // 800B4558
  c->r[4]=R32(c->r[28]+0x00000398u); // 800B455C
  c->r[3]=c->r[1]+0x000000ECu; // 800B4560
  c->r[5]=c->r[1]+0x000000B0u; // 800B4564
  c->r[4]=c->r[4]+0x0000005Cu; // 800B4568
  c->lr=0x800B4570u; f_80296A70(c); // 800B456C
  c->r[3]=c->r[1]+0x000000B0u; // 800B4570
  c->lr=0x800B4578u; f_80296B0C(c); // 800B4574
  c->r[4]=R8(c->r[28]+0x000000AAu); // 800B4578
  c->r[0]=0u+0x43300000u; // 800B457C
  W32(c->r[1]+0x00000158u,c->r[0]); // 800B4580
  c->r[3]=c->r[1]+0x000000B0u; // 800B4584
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800B4588
  {uint32_t ea=c->r[2]+0xFFFF9A98u; c->f[2]=RF64(ea);} // 800B458C
  c->r[0]=c->r[0]^0x80000000u; // 800B4590
  c->r[4]=c->r[3]|c->r[3]; // 800B4594
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 800B4598
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 800B459C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800B45A0
  c->f[30]=c->ps1[30]=S(c->f[1]/c->f[0]); // 800B45A4
  c->lr=0x800B45ACu; f_80296AB0(c); // 800B45A8
  c->r[5]=c->r[30]+0x000000C4u; // 800B45AC
  {uint32_t ea=c->r[1]+0x00000128u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B45B0
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B45B4
  c->r[3]=c->r[1]+0x000000BCu; // 800B45B8
  {uint32_t ea=c->r[1]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B45BC
  c->r[4]=c->r[1]+0x00000098u; // 800B45C0
  c->r[7]=R32(c->r[30]+0x000000C4u); // 800B45C4
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B45C8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B45CC
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[2]);} // 800B45D0
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[1]);} // 800B45D4
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 800B45D8
  W32(c->r[1]+0x00000098u,c->r[7]); // 800B45DC
  W32(c->r[1]+0x0000009Cu,c->r[6]); // 800B45E0
  W32(c->r[1]+0x000000A0u,c->r[0]); // 800B45E4
  c->lr=0x800B45ECu; f_800361A0(c); // 800B45E8
  c->r[3]=c->r[1]+0x000000B0u; // 800B45EC
  c->r[4]=c->r[1]+0x000000C8u; // 800B45F0
  c->r[5]=c->r[1]+0x000000BCu; // 800B45F4
  c->lr=0x800B45FCu; f_80296B70(c); // 800B45F8
  c->r[3]=c->r[1]+0x000000BCu; // 800B45FC
  c->r[4]=c->r[1]+0x000000B0u; // 800B4600
  c->r[5]=c->r[1]+0x000000C8u; // 800B4604
  c->lr=0x800B460Cu; f_80296B70(c); // 800B4608
  c->r[3]=c->r[1]+0x00000128u; // 800B460C
  c->lr=0x800B4614u; f_80295AE8(c); // 800B4610
  c->r[3]=c->r[1]+0x00000128u; // 800B4614
  c->r[4]=c->r[1]+0x000000C8u; // 800B4618
  c->lr=0x800B4620u; f_800361A0(c); // 800B461C
  c->r[3]=c->r[1]+0x00000138u; // 800B4620
  c->r[4]=c->r[1]+0x000000BCu; // 800B4624
  c->lr=0x800B462Cu; f_800361A0(c); // 800B4628
  c->r[3]=c->r[1]+0x00000148u; // 800B462C
  c->r[4]=c->r[1]+0x000000B0u; // 800B4630
  c->lr=0x800B4638u; f_800361A0(c); // 800B4634
  c->r[3]=c->r[1]+0x00000128u; // 800B4638
  c->r[4]=c->r[3]|c->r[3]; // 800B463C
  c->lr=0x800B4644u; f_80295DAC(c); // 800B4640
  c->r[4]=R32(c->r[28]+0x00000398u); // 800B4644
  c->r[3]=c->r[1]+0x000000ECu; // 800B4648
  c->r[5]=c->r[1]+0x000000D4u; // 800B464C
  c->r[6]=c->r[1]+0x00000128u; // 800B4650
  c->r[4]=c->r[4]+0x00000068u; // 800B4654
  c->r[7]=0u+0x00000000u; // 800B4658
  c->lr=0x800B4660u; f_8002BE64(c); // 800B465C
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B4660
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B4664
  c->lr=0x800B466Cu; f_802501B0(c); // 800B4668
  c->r[3]=c->r[30]+0x00000000u; // 800B466C
  c->r[27]=R32(c->r[30]+0x00000000u); // 800B4670
  c->r[31]=R32(c->r[3]+0x00000004u); // 800B4674
  c->r[26]=0u+0x00000000u; // 800B4678
  c->r[30]=R32(c->r[3]+0x00000008u); // 800B467C
  c->r[29]=0u+0x00000000u; // 800B4680
  W32(c->r[1]+0x00000014u,c->r[27]); // 800B4684
  W32(c->r[1]+0x00000018u,c->r[31]); // 800B4688
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 800B468C
  goto L_800B46FC; // 800B4690
L_800B4694:;
  W32(c->r[1]+0x00000034u,c->r[29]); // 800B4694
  c->r[25]=c->r[28]+c->r[26]; // 800B4698
  c->r[5]=c->r[1]+0x00000038u; // 800B469C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[31]);} // 800B46A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B46A4
  W32(c->r[1]+0x00000038u,c->r[29]); // 800B46A8
  W32(c->r[1]+0x0000003Cu,c->r[29]); // 800B46AC
  W32(c->r[1]+0x00000040u,c->r[0]); // 800B46B0
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B46B4
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 800B46B8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B46BC
  W32(c->r[1]+0x00000030u,c->r[29]); // 800B46C0
  c->r[4]=R8(c->r[25]+0x00000074u); // 800B46C4
  c->lr=0x800B46CCu; f_8025EAE8(c); // 800B46C8
  W32(c->r[1]+0x00000020u,c->r[27]); // 800B46CC
  c->r[5]=c->r[1]+0x00000020u; // 800B46D0
  W32(c->r[1]+0x00000024u,c->r[31]); // 800B46D4
  W32(c->r[1]+0x00000028u,c->r[30]); // 800B46D8
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B46DC
  c->r[4]=R8(c->r[25]+0x00000074u); // 800B46E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B46E4
  c->lr=0x800B46ECu; f_8025E9C0(c); // 800B46E8
  cmps(c,0,(int32_t)c->r[26],0); // 800B46EC
  if (!crb(c,2)) { goto L_800B46F8; } // 800B46F0
  c->f[31]=c->f[30]; // 800B46F4
L_800B46F8:;
  c->r[26]=c->r[26]+0x00000001u; // 800B46F8
L_800B46FC:;
  c->r[3]=R8(c->r[28]+0x000000AAu); // 800B46FC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B4700
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800B4704
  if (crb(c,0)) { IRQCHK(c); goto L_800B4694; } // 800B4708
  goto L_800B4748; // 800B470C
L_800B4710:;
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B4710
  c->r[4]=c->r[30]+0x00000000u; // 800B4714
  c->r[3]=c->r[3]+0x00000068u; // 800B4718
  c->lr=0x800B4720u; f_800361A0(c); // 800B471C
  {uint32_t ea=c->r[2]+0xFFFF9AA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4720
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B4724
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 800B4728
  c->r[4]=R32(c->r[28]+0x00000394u); // 800B472C
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B4730
  {uint32_t ea=c->r[4]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4734
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B4738
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B473C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B4740
  c->lr=0x800B4748u; f_802501B0(c); // 800B4744
L_800B4748:;
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B4748
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B474C
  c->lr=0x800B4754u; f_8025037C(c); // 800B4750
L_800B4754:;
  c->r[3]=c->r[1]+0x000000F8u; // 800B4754
  c->lr=0x800B475Cu; f_80295AE8(c); // 800B4758
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800B475C
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B4760
  cmps(c,0,(int32_t)c->r[0],0); // 800B4764
  if (crb(c,2)) { goto L_800B47F0; } // 800B4768
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800B476C
  cmps(c,0,(int32_t)c->r[0],0); // 800B4770
  if (crb(c,2)) { goto L_800B47F0; } // 800B4774
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B4778
  c->r[5]=c->r[1]+0x00000128u; // 800B477C
  c->r[4]=R8(c->r[28]+0x000000A9u); // 800B4780
  c->r[6]=0u+0x00000001u; // 800B4784
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B4788
  c->lr=0x800B4790u; f_80257074(c); // 800B478C
  c->r[3]=c->r[1]+0x00000128u; // 800B4790
  c->r[4]=c->r[1]+0x000000F8u; // 800B4794
  c->r[5]=c->r[3]|c->r[3]; // 800B4798
  c->lr=0x800B47A0u; f_80295B48(c); // 800B479C
  c->r[3]=c->r[1]+0x000000ECu; // 800B47A0
  c->r[4]=c->r[1]+0x000000E0u; // 800B47A4
  c->r[5]=c->r[1]+0x000000D4u; // 800B47A8
  c->r[6]=c->r[1]+0x00000128u; // 800B47AC
  c->r[7]=0u+0x00000000u; // 800B47B0
  c->lr=0x800B47B8u; f_8002BE64(c); // 800B47B4
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800B47B8
  c->r[4]=c->r[1]+0x000000ECu; // 800B47BC
  c->r[3]=c->r[3]+0x0000005Cu; // 800B47C0
  c->lr=0x800B47C8u; f_800361A0(c); // 800B47C4
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800B47C8
  c->r[4]=c->r[1]+0x000000E0u; // 800B47CC
  c->r[3]=c->r[3]+0x00000068u; // 800B47D0
  c->lr=0x800B47D8u; f_800361A0(c); // 800B47D4
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800B47D8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B47DC
  c->lr=0x800B47E4u; f_802501B0(c); // 800B47E0
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800B47E4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B47E8
  c->lr=0x800B47F0u; f_8025037C(c); // 800B47EC
L_800B47F0:;
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,31,ea,0,0);} // 800B47F0
  {uint32_t ea=c->r[1]+0x00000190u; c->f[31]=RF64(ea);} // 800B47F4
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,30,ea,0,0);} // 800B47F8
  c->r[11]=c->r[1]+0x00000180u; // 800B47FC
  {uint32_t ea=c->r[1]+0x00000180u; c->f[30]=RF64(ea);} // 800B4800
  c->lr=0x800B4808u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B4804
  c->r[0]=R32(c->r[1]+0x000001A4u); // 800B4808
  c->lr=c->r[0]; // 800B480C
  c->r[1]=c->r[1]+0x000001A0u; // 800B4810
  return; // 800B4814
}

// fn_800B4818
void f_800B4818(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4818
  c->r[0]=c->lr; // 800B481C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4820
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4824
  c->r[31]=c->r[4]|c->r[4]; // 800B4828
  c->r[4]=c->r[5]|c->r[5]; // 800B482C
  c->lr=0x800B4834u; f_800B2680(c); // 800B4830
  cmps(c,0,(int32_t)c->r[3],0); // 800B4834
  if (crb(c,2)) { goto L_800B484C; } // 800B4838
  c->r[4]=c->r[31]|c->r[31]; // 800B483C
  c->r[3]=c->r[3]+0x0000007Cu; // 800B4840
  c->lr=0x800B4848u; f_80295B14(c); // 800B4844
  goto L_800B4854; // 800B4848
L_800B484C:;
  c->r[3]=c->r[31]|c->r[31]; // 800B484C
  c->lr=0x800B4854u; f_80295AE8(c); // 800B4850
L_800B4854:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B4858
  c->lr=c->r[0]; // 800B485C
  c->r[1]=c->r[1]+0x00000010u; // 800B4860
  return; // 800B4864
}

// fn_800B4868
void f_800B4868(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4868
  c->r[0]=c->lr; // 800B486C
  c->r[5]=0u+0x00000000u; // 800B4870
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4874
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4878
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B487C
  c->r[30]=c->r[3]|c->r[3]; // 800B4880
  c->r[3]=0u+0x000004A9u; // 800B4884
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B4888
  c->r[4]=c->r[4]+0x0000010Cu; // 800B488C
  c->lr=0x800B4894u; f_8024EE50(c); // 800B4890
  cmps(c,0,(int32_t)c->r[3],0); // 800B4894
  if (!crb(c,2)) { goto L_800B48BC; } // 800B4898
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B489C
  c->r[31]=0u+0x803A0000u; // 800B48A0
  c->r[31]=c->r[31]+0xFFFFCC48u; // 800B48A4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B48A8
  c->r[4]=c->r[31]+0x00000041u; // 800B48AC
  c->lr=0x800B48B4u; f_80256EC4(c); // 800B48B0
  W8(c->r[30]+0x000000A8u,c->r[3]); // 800B48B4
  goto L_800B48C4; // 800B48B8
L_800B48BC:;
  c->r[3]=0u+0x00000000u; // 800B48BC
  goto L_800B491C; // 800B48C0
L_800B48C4:;
  c->r[4]=R32(c->r[30]+0x00000398u); // 800B48C4
  c->r[3]=0u+0x000004A8u; // 800B48C8
  c->r[5]=0u+0x00000000u; // 800B48CC
  c->r[4]=c->r[4]+0x0000010Cu; // 800B48D0
  c->lr=0x800B48D8u; f_8024EE50(c); // 800B48D4
  cmps(c,0,(int32_t)c->r[3],0); // 800B48D8
  if (!crb(c,2)) { goto L_800B48F8; } // 800B48DC
  c->r[3]=R32(c->r[30]+0x00000398u); // 800B48E0
  c->r[4]=c->r[31]+0x00000080u; // 800B48E4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B48E8
  c->lr=0x800B48F0u; f_80256EC4(c); // 800B48EC
  W8(c->r[30]+0x000000A9u,c->r[3]); // 800B48F0
  goto L_800B4900; // 800B48F4
L_800B48F8:;
  c->r[3]=0u+0x00000000u; // 800B48F8
  goto L_800B491C; // 800B48FC
L_800B4900:;
  c->r[4]=R32(c->r[30]+0x0000039Cu); // 800B4900
  c->r[3]=0u+0x000004A6u; // 800B4904
  c->r[5]=0u+0x00000000u; // 800B4908
  c->r[4]=c->r[4]+0x0000010Cu; // 800B490C
  c->lr=0x800B4914u; f_8024EE50(c); // 800B4910
  c->r[0]=cntlz(c->r[3]); // 800B4914
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B4918
L_800B491C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B491C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B4920
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B4924
  c->lr=c->r[0]; // 800B4928
  c->r[1]=c->r[1]+0x00000010u; // 800B492C
  return; // 800B4930
}

// fn_800B4934
void f_800B4934(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800B4934
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800B4938
  c->ctr=c->r[12]; // 800B493C
  if (true) { dispatch(c,c->ctr); return; } // 800B4940
}

// fn_800B4944
void f_800B4944(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800B4944
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B4948
  f_802501B0(c); return; // 800B494C
}

// fn_800B4950
void f_800B4950(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4950
  c->r[0]=c->lr; // 800B4954
  c->r[7]=0u+0x803D0000u; // 800B4958
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B495C
  c->r[4]=c->r[1]+0x00000008u; // 800B4960
  {uint32_t ea=c->r[7]+0xFFFFF384u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B4964
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B4968
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B496C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B4970
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B4974
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B4978
  c->lr=0x800B4980u; f_800B40F0(c); // 800B497C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B4980
  c->lr=c->r[0]; // 800B4984
  c->r[1]=c->r[1]+0x00000020u; // 800B4988
  return; // 800B498C
}

// fn_800B4990
void f_800B4990(Ctx* __restrict c) {
  W8(c->r[3]+0x000000ACu,c->r[4]); // 800B4990
  c->r[4]=0u+0x00000000u; // 800B4994
  c->r[3]=c->r[3]+0x0000000Cu; // 800B4998
  f_80036430(c); return; // 800B499C
}

// fn_800B49A0
void f_800B49A0(Ctx* __restrict c) {
  W8(c->r[3]+0x000000ADu,c->r[4]); // 800B49A0
  c->r[4]=0u+0x00000000u; // 800B49A4
  c->r[3]=c->r[3]+0x0000000Cu; // 800B49A8
  f_80036430(c); return; // 800B49AC
}

// fn_800B49B0
void f_800B49B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B49B0
  c->r[0]=c->lr; // 800B49B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B49B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B49BC
  c->r[31]=c->r[6]|c->r[6]; // 800B49C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B49C4
  c->r[30]=c->r[5]|c->r[5]; // 800B49C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B49CC
  c->r[29]=c->r[4]|c->r[4]; // 800B49D0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B49D4
  c->r[28]=c->r[3]|c->r[3]; // 800B49D8
  c->r[0]=R8(c->r[3]+0x000000AEu); // 800B49DC
  cmpu(c,0,c->r[0],0x00000002u); // 800B49E0
  c->r[0]=0u+0x00000000u; // 800B49E4
  if (!crb(c,2)) { goto L_800B4A20; } // 800B49E8
  cmpu(c,0,c->r[4],0x00000002u); // 800B49EC
  if (crb(c,2)) { goto L_800B4A50; } // 800B49F0
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800B49F4
  c->r[5]=0u+0x00000000u; // 800B49F8
  c->r[4]=R32(c->r[3]+0x00000398u); // 800B49FC
  c->r[6]=0u+0x00000001u; // 800B4A00
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B4A04
  {uint32_t ea=c->r[2]+0xFFFF9AACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4A08
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4A0C
  c->ctr=c->r[12]; // 800B4A10
  if (true) { c->lr=0x800B4A18u; dispatch(c,c->ctr); } // 800B4A14
  c->r[0]=0u+0x00000001u; // 800B4A18
  goto L_800B4A50; // 800B4A1C
L_800B4A20:;
  cmpu(c,0,c->r[4],0x00000002u); // 800B4A20
  if (!crb(c,2)) { goto L_800B4A50; } // 800B4A24
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800B4A28
  c->r[5]=0u+0x00000001u; // 800B4A2C
  c->r[4]=R32(c->r[3]+0x00000398u); // 800B4A30
  c->r[6]=0u+0x00000001u; // 800B4A34
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B4A38
  {uint32_t ea=c->r[2]+0xFFFF9AACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4A3C
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4A40
  c->ctr=c->r[12]; // 800B4A44
  if (true) { c->lr=0x800B4A4Cu; dispatch(c,c->ctr); } // 800B4A48
  c->r[0]=0u+0x00000001u; // 800B4A4C
L_800B4A50:;
  cmpu(c,0,c->r[0],0x00000001u); // 800B4A50
  if (!crb(c,2)) { goto L_800B4A64; } // 800B4A54
  c->r[3]=R32(c->r[28]+0x00000398u); // 800B4A58
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B4A5C
  c->lr=0x800B4A64u; f_802501B0(c); // 800B4A60
L_800B4A64:;
  W8(c->r[28]+0x000000AEu,c->r[29]); // 800B4A64
  c->r[3]=c->r[28]+0x0000000Cu; // 800B4A68
  c->r[4]=0u+0x00000000u; // 800B4A6C
  W32(c->r[28]+0x00000098u,c->r[30]); // 800B4A70
  W32(c->r[28]+0x0000009Cu,c->r[31]); // 800B4A74
  c->lr=0x800B4A7Cu; f_80036430(c); // 800B4A78
  c->r[3]=c->r[28]+0x00000010u; // 800B4A7C
  c->r[4]=0u+0x00000000u; // 800B4A80
  c->lr=0x800B4A88u; f_80036430(c); // 800B4A84
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B4A88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B4A8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B4A90
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B4A94
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B4A98
  c->lr=c->r[0]; // 800B4A9C
  c->r[1]=c->r[1]+0x00000020u; // 800B4AA0
  return; // 800B4AA4
}

// fn_800B4AA8
void f_800B4AA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4AA8
  c->r[0]=c->lr; // 800B4AAC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B4AB0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800B4AB4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800B4AB8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800B4ABC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800B4AC0
  c->r[4]=0u+0x00000000u; // 800B4AC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B4AC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B4ACC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B4AD0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B4AD4
  c->r[28]=c->r[3]|c->r[3]; // 800B4AD8
  c->r[3]=c->r[3]+0x0000000Cu; // 800B4ADC
  c->lr=0x800B4AE4u; f_800366DC(c); // 800B4AE0
  c->r[3]=0u+0x803A0000u; // 800B4AE4
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B4AE8
  c->r[3]=c->r[3]+0xFFFFCB80u; // 800B4AEC
  {uint32_t ea=c->r[2]+0xFFFF9AB0u; c->f[31]=RF64(ea);} // 800B4AF0
  c->r[31]=c->r[3]+0x00000008u; // 800B4AF4
  c->r[29]=0u+0x00000001u; // 800B4AF8
  c->r[30]=0u+0x43300000u; // 800B4AFC
L_800B4B00:;
  c->r[3]=c->r[28]+0x0000000Cu; // 800B4B00
  c->lr=0x800B4B08u; f_8003E460(c); // 800B4B04
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B4B08
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4B0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B4B10
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800B4B14
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800B4B18
  fcmp(c,0,c->f[0],c->f[1]); // 800B4B1C
  if (crb(c,0)) { goto L_800B4B7C; } // 800B4B20
  c->r[30]=0u+0x803A0000u; // 800B4B24
  c->r[29]=rotl(c->r[29],3)&0xFFFFFFF8u; // 800B4B28
  c->r[30]=c->r[30]+0xFFFFCB80u; // 800B4B2C
  c->r[3]=c->r[28]+0x0000000Cu; // 800B4B30
  c->r[31]=c->r[30]+c->r[29]; // 800B4B34
  c->lr=0x800B4B3Cu; f_8003E460(c); // 800B4B38
  c->r[0]=0u+0x43300000u; // 800B4B3C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B4B40
  {uint32_t ea=c->r[2]+0xFFFF9AB0u; c->f[2]=RF64(ea);} // 800B4B44
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B4B48
  {uint32_t ea=c->r[31]+0xFFFFFFF8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B4B4C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800B4B50
  {uint32_t ea=c->r[30]+c->r[29]; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4B54
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[2]); // 800B4B58
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4B5C
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 800B4B60
  {uint32_t ea=c->r[31]+0xFFFFFFFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4B64
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[3]); // 800B4B68
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B4B6C
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 800B4B70
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[0],c->f[1])); // 800B4B74
  goto L_800B4B8C; // 800B4B78
L_800B4B7C:;
  c->r[29]=c->r[29]+0x00000001u; // 800B4B7C
  c->r[31]=c->r[31]+0x00000008u; // 800B4B80
  cmps(c,0,(int32_t)c->r[29],4); // 800B4B84
  if (crb(c,0)) { IRQCHK(c); goto L_800B4B00; } // 800B4B88
L_800B4B8C:;
  c->r[3]=c->r[28]+0x0000000Cu; // 800B4B8C
  c->lr=0x800B4B94u; f_8003E460(c); // 800B4B90
  cmps(c,0,(int32_t)c->r[3],60); // 800B4B94
  if (crb(c,0)) { goto L_800B4BA8; } // 800B4B98
  c->r[3]=c->r[28]+0x0000000Cu; // 800B4B9C
  c->r[4]=0u+0x0000003Cu; // 800B4BA0
  c->lr=0x800B4BA8u; f_800B4BDC(c); // 800B4BA4
L_800B4BA8:;
  c->f[1]=c->f[30]; // 800B4BA8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800B4BAC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800B4BB0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800B4BB4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800B4BB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B4BBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B4BC0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B4BC4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B4BC8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B4BCC
  c->lr=c->r[0]; // 800B4BD0
  c->r[1]=c->r[1]+0x00000040u; // 800B4BD4
  return; // 800B4BD8
}

// fn_800B4BDC
void f_800B4BDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4BDC
  c->r[0]=c->lr; // 800B4BE0
  c->r[4]=c->r[4]^0x80000000u; // 800B4BE4
  {uint32_t ea=c->r[2]+0xFFFF9A98u; c->f[2]=RF64(ea);} // 800B4BE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4BEC
  c->r[0]=0u+0x43300000u; // 800B4BF0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800B4BF4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4BF8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B4BFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800B4C00
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800B4C04
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800B4C08
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 800B4C0C
  c->lr=0x800B4C14u; f_802BA034(c); // 800B4C10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4C14
  c->lr=c->r[0]; // 800B4C18
  c->r[1]=c->r[1]+0x00000010u; // 800B4C1C
  return; // 800B4C20
}

// fn_800B4C24
void f_800B4C24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4C24
  c->r[0]=c->lr; // 800B4C28
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B4C2C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800B4C30
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800B4C34
  c->r[4]=0u+0x00000000u; // 800B4C38
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B4C3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B4C40
  c->r[31]=c->r[3]|c->r[3]; // 800B4C44
  c->r[3]=c->r[3]+0x00000010u; // 800B4C48
  c->lr=0x800B4C50u; f_8003D794(c); // 800B4C4C
  c->r[3]=c->r[31]+0x00000010u; // 800B4C50
  c->lr=0x800B4C58u; f_8003E460(c); // 800B4C54
  cmps(c,0,(int32_t)c->r[3],0); // 800B4C58
  if (crb(c,1)) { goto L_800B4C74; } // 800B4C5C
  c->r[3]=c->r[31]+0x00000010u; // 800B4C60
  c->r[4]=0u+0x00000000u; // 800B4C64
  c->lr=0x800B4C6Cu; f_80036430(c); // 800B4C68
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B4C6C
  goto L_800B4CFC; // 800B4C70
L_800B4C74:;
  c->r[3]=c->r[31]+0x00000010u; // 800B4C74
  c->lr=0x800B4C7Cu; f_8003E460(c); // 800B4C78
  c->r[3]=addc(c,~c->r[3],0x00000043u,1); // 800B4C7C
  c->r[0]=0u+0x43300000u; // 800B4C80
  c->r[4]=c->r[3]^0x80000000u; // 800B4C84
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B4C88
  c->r[3]=0u+0x803A0000u; // 800B4C8C
  {uint32_t ea=c->r[2]+0xFFFF9A98u; c->f[1]=RF64(ea);} // 800B4C90
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800B4C94
  c->r[3]=c->r[3]+0xFFFFCBA8u; // 800B4C98
  c->r[4]=0u+0x00000009u; // 800B4C9C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800B4CA0
  c->r[3]=c->r[3]+0x00000048u; // 800B4CA4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800B4CA8
  c->ctr=c->r[4]; // 800B4CAC
L_800B4CB0:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4CB0
  fcmp(c,0,c->f[0],c->f[3]); // 800B4CB4
  if (crb(c,1)) { goto L_800B4CF0; } // 800B4CB8
  c->r[3]=0u+0x803A0000u; // 800B4CBC
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800B4CC0
  c->r[3]=c->r[3]+0xFFFFCBA8u; // 800B4CC4
  {uint32_t ea=c->r[3]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea); c->r[3]=ea;} // 800B4CC8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4CCC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 800B4CD0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4CD4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 800B4CD8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4CDC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B4CE0
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 800B4CE4
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[0],c->f[1])); // 800B4CE8
  goto L_800B4CFC; // 800B4CEC
L_800B4CF0:;
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800B4CF0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800B4CF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B4CB0; } // 800B4CF8
L_800B4CFC:;
  c->f[1]=c->f[31]; // 800B4CFC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800B4D00
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800B4D04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B4D08
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B4D0C
  c->lr=c->r[0]; // 800B4D10
  c->r[1]=c->r[1]+0x00000030u; // 800B4D14
  return; // 800B4D18
}

// fn_800B4D1C
void f_800B4D1C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000043u; // 800B4D1C
  c->r[3]=c->r[3]+0x00000010u; // 800B4D20
  f_80036430(c); return; // 800B4D24
}

// fn_800B4D28
void f_800B4D28(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800B4D28
  c->r[5]=c->r[4]|c->r[4]; // 800B4D2C
  c->r[4]=R32(c->r[3]+0x00000398u); // 800B4D30
  c->r[6]=0u+0x00000001u; // 800B4D34
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B4D38
  {uint32_t ea=c->r[2]+0xFFFF9AACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4D3C
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4D40
  c->ctr=c->r[12]; // 800B4D44
  if (true) { dispatch(c,c->ctr); return; } // 800B4D48
}

// fn_800B4D4C
void f_800B4D4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4D4C
  c->r[0]=c->lr; // 800B4D50
  cmps(c,0,(int32_t)c->r[3],0); // 800B4D54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4D58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4D5C
  c->r[31]=c->r[4]|c->r[4]; // 800B4D60
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B4D64
  c->r[30]=c->r[3]|c->r[3]; // 800B4D68
  if (crb(c,2)) { goto L_800B4D88; } // 800B4D6C
  c->r[4]=0u+0x00000000u; // 800B4D70
  c->lr=0x800B4D78u; f_8026A06C(c); // 800B4D74
  cmps(c,0,(int32_t)c->r[31],0); // 800B4D78
  if (!crb(c,1)) { goto L_800B4D88; } // 800B4D7C
  c->r[3]=c->r[30]|c->r[30]; // 800B4D80
  c->lr=0x800B4D88u; f_8026A268(c); // 800B4D84
L_800B4D88:;
  c->r[3]=c->r[30]|c->r[30]; // 800B4D88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B4D8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B4D90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4D94
  c->lr=c->r[0]; // 800B4D98
  c->r[1]=c->r[1]+0x00000010u; // 800B4D9C
  return; // 800B4DA0
}

// fn_800B4DA4
void f_800B4DA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4DA4
  c->r[0]=c->lr; // 800B4DA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B4DAC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800B4DB0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800B4DB4
  c->r[4]=0u+0x00000000u; // 800B4DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4DBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B4DC0
  c->r[30]=c->r[3]|c->r[3]; // 800B4DC4
  c->lr=0x800B4DCCu; f_801F57D0(c); // 800B4DC8
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B4DCC
  c->r[3]=c->r[30]|c->r[30]; // 800B4DD0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800B4DD4
  c->ctr=c->r[12]; // 800B4DD8
  if (true) { c->lr=0x800B4DE0u; dispatch(c,c->ctr); } // 800B4DDC
  c->r[3]=c->r[30]|c->r[30]; // 800B4DE0
  c->lr=0x800B4DE8u; f_801F4B94(c); // 800B4DE4
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800B4DE8
  c->r[4]=0u+0x00000003u; // 800B4DEC
  {uint32_t ea=c->r[2]+0xFFFF9AC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4DF0
  c->r[5]=0u+0x00000014u; // 800B4DF4
  c->r[0]=c->r[0]|0x00000800u; // 800B4DF8
  c->r[3]=0u+0x80550000u; // 800B4DFC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800B4E00
  c->f[3]=c->f[1]; // 800B4E04
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800B4E08
  c->r[3]=c->r[3]+0x00003D60u; // 800B4E0C
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B4E10
  c->r[4]=c->r[30]+0x0000002Cu; // 800B4E14
  W8(c->r[30]+0x0000006Du,c->r[5]); // 800B4E18
  {uint32_t ea=c->r[2]+0xFFFF9AC4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4E1C
  c->r[5]=c->r[30]+0x00000030u; // 800B4E20
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B4E24
  c->r[6]=0u+0x00000000u; // 800B4E28
  c->r[7]=0u+0x00000000u; // 800B4E2C
  c->lr=0x800B4E34u; f_801D5488(c); // 800B4E30
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B4E34
  c->r[3]=c->r[30]|c->r[30]; // 800B4E38
  c->lr=0x800B4E40u; f_801F58BC(c); // 800B4E3C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B4E40
  c->r[31]=0u+0x00000001u; // 800B4E44
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800B4E48
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4E4C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B4E50
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800B4E54
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B4E58
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800B4E5C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B4E60
  c->lr=0x800B4E68u; f_802501B0(c); // 800B4E64
  c->r[3]=0u+0x805D0000u; // 800B4E68
  c->r[4]=c->r[30]+0x0000002Cu; // 800B4E6C
  c->r[3]=c->r[3]+0x000078B0u; // 800B4E70
  c->lr=0x800B4E78u; f_802351CC(c); // 800B4E74
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B4E78
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800B4E7C
  c->r[3]=c->r[30]|c->r[30]; // 800B4E80
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800B4E84
  c->lr=0x800B4E8Cu; f_801F56F4(c); // 800B4E88
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B4E8C
  c->r[3]=c->r[30]|c->r[30]; // 800B4E90
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B4E94
  c->ctr=c->r[12]; // 800B4E98
  if (true) { c->lr=0x800B4EA0u; dispatch(c,c->ctr); } // 800B4E9C
  c->r[3]=c->r[30]|c->r[30]; // 800B4EA0
  c->lr=0x800B4EA8u; f_800B57CC(c); // 800B4EA4
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800B4EA8
  W32(c->r[30]+0x00000444u,c->r[31]); // 800B4EAC
  c->lr=0x800B4EB4u; f_8024E174(c); // 800B4EB0
  W32(c->r[30]+0x00000438u,c->r[3]); // 800B4EB4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800B4EB8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800B4EBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B4EC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B4EC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B4EC8
  c->lr=c->r[0]; // 800B4ECC
  c->r[1]=c->r[1]+0x00000020u; // 800B4ED0
  return; // 800B4ED4
}

// fn_800B4ED8
void f_800B4ED8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4ED8
  c->r[0]=c->lr; // 800B4EDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4EE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4EE4
  c->r[31]=0u+0x805D0000u; // 800B4EE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B4EEC
  c->r[30]=c->r[3]|c->r[3]; // 800B4EF0
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B4EF4
  c->lr=0x800B4EFCu; f_80045264(c); // 800B4EF8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800B4EFC
  cmpu(c,0,c->r[0],0x00000005u); // 800B4F00
  if (!crb(c,2)) { goto L_800B4F44; } // 800B4F04
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B4F08
  c->lr=0x800B4F10u; f_80037AF0(c); // 800B4F0C
  cmpu(c,0,c->r[3],c->r[30]); // 800B4F10
  if (!crb(c,2)) { goto L_800B4F44; } // 800B4F14
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800B4F18
  cmps(c,0,(int32_t)c->r[0],101); // 800B4F1C
  if (crb(c,2)) { goto L_800B4F84; } // 800B4F20
  {uint32_t ea=c->r[2]+0xFFFF9AC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4F24
  c->r[3]=c->r[30]|c->r[30]; // 800B4F28
  c->r[4]=0u+0x00000065u; // 800B4F2C
  c->r[5]=0u+0x00000000u; // 800B4F30
  c->r[6]=0u+0x00000000u; // 800B4F34
  c->r[7]=0u+0x00000000u; // 800B4F38
  c->lr=0x800B4F40u; f_801F4D44(c); // 800B4F3C
  goto L_800B4F84; // 800B4F40
L_800B4F44:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B4F44
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B4F48
  cmps(c,0,(int32_t)c->r[0],0); // 800B4F4C
  if (crb(c,2)) { goto L_800B4F84; } // 800B4F50
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800B4F54
  cmps(c,0,(int32_t)c->r[0],102); // 800B4F58
  if (crb(c,2)) { goto L_800B4F84; } // 800B4F5C
  cmps(c,0,(int32_t)c->r[0],101); // 800B4F60
  if (crb(c,2)) { goto L_800B4F84; } // 800B4F64
  {uint32_t ea=c->r[2]+0xFFFF9AC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4F68
  c->r[3]=c->r[30]|c->r[30]; // 800B4F6C
  c->r[4]=0u+0x00000066u; // 800B4F70
  c->r[5]=0u+0x00000000u; // 800B4F74
  c->r[6]=0u+0x00000000u; // 800B4F78
  c->r[7]=0u+0x00000000u; // 800B4F7C
  c->lr=0x800B4F84u; f_801F4D44(c); // 800B4F80
L_800B4F84:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B4F84
  c->r[3]=c->r[30]|c->r[30]; // 800B4F88
  c->r[12]=R32(c->r[12]+0x00000068u); // 800B4F8C
  c->ctr=c->r[12]; // 800B4F90
  if (true) { c->lr=0x800B4F98u; dispatch(c,c->ctr); } // 800B4F94
  c->r[3]=c->r[30]|c->r[30]; // 800B4F98
  c->lr=0x800B4FA0u; f_801F4C0C(c); // 800B4F9C
  c->r[3]=c->r[30]|c->r[30]; // 800B4FA0
  c->lr=0x800B4FA8u; f_800B5724(c); // 800B4FA4
  c->r[3]=c->r[30]|c->r[30]; // 800B4FA8
  c->lr=0x800B4FB0u; f_801F56F4(c); // 800B4FAC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B4FB0
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B4FB4
  cmps(c,0,(int32_t)c->r[0],0); // 800B4FB8
  if (crb(c,2)) { goto L_800B5024; } // 800B4FBC
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800B4FC0
  cmps(c,0,(int32_t)c->r[0],0); // 800B4FC4
  if (crb(c,2)) { goto L_800B5024; } // 800B4FC8
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B4FCC
  cmps(c,0,(int32_t)c->r[0],0); // 800B4FD0
  if (crb(c,2)) { goto L_800B4FF0; } // 800B4FD4
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800B4FD8
  cmps(c,0,(int32_t)c->r[0],0); // 800B4FDC
  if (!crb(c,2)) { goto L_800B4FF0; } // 800B4FE0
  c->r[4]=c->r[3]+0x000000B0u; // 800B4FE4
  c->lr=0x800B4FECu; f_80250F18(c); // 800B4FE8
  goto L_800B500C; // 800B4FEC
L_800B4FF0:;
  c->r[3]=c->r[3]+0x0000005Cu; // 800B4FF0
  c->r[4]=c->r[30]+0x0000002Cu; // 800B4FF4
  c->lr=0x800B4FFCu; f_800361A0(c); // 800B4FF8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B4FFC
  c->r[4]=c->r[30]+0x00000060u; // 800B5000
  c->r[3]=c->r[3]+0x00000068u; // 800B5004
  c->lr=0x800B500Cu; f_800361A0(c); // 800B5008
L_800B500C:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B500C
  c->r[3]=c->r[30]|c->r[30]; // 800B5010
  c->lr=0x800B5018u; f_801F58FC(c); // 800B5014
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B5018
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B501C
  c->lr=0x800B5024u; f_8025037C(c); // 800B5020
L_800B5024:;
  c->r[3]=c->r[30]|c->r[30]; // 800B5024
  c->lr=0x800B502Cu; f_800B586C(c); // 800B5028
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B502C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5030
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B5034
  c->lr=c->r[0]; // 800B5038
  c->r[1]=c->r[1]+0x00000010u; // 800B503C
  return; // 800B5040
}

// fn_800B5044
void f_800B5044(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5044
  c->r[0]=c->lr; // 800B5048
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B504C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800B5050
  W32(c->r[1]+0x00000038u,c->r[30]); // 800B5054
  c->r[30]=c->r[3]|c->r[3]; // 800B5058
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B505C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B5060
  c->lr=0x800B5068u; f_802501B0(c); // 800B5064
  c->r[3]=c->r[30]|c->r[30]; // 800B5068
  c->r[4]=0u+0x00000000u; // 800B506C
  c->lr=0x800B5074u; f_801F5244(c); // 800B5070
  c->r[6]=R32(c->r[30]+0x00000394u); // 800B5074
  c->r[3]=c->r[1]+0x00000020u; // 800B5078
  c->r[4]=c->r[1]+0x00000014u; // 800B507C
  c->r[5]=c->r[1]+0x00000008u; // 800B5080
  c->r[6]=c->r[6]+0x000000B0u; // 800B5084
  c->r[7]=0u+0x00000000u; // 800B5088
  c->lr=0x800B5090u; f_8002BE64(c); // 800B508C
  c->r[3]=c->r[30]+0x0000002Cu; // 800B5090
  c->r[4]=c->r[1]+0x00000020u; // 800B5094
  c->lr=0x800B509Cu; f_800361A0(c); // 800B5098
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B509C
  c->r[3]=c->r[30]|c->r[30]; // 800B50A0
  c->lr=0x800B50A8u; f_801F5418(c); // 800B50A4
  cmps(c,0,(int32_t)c->r[3],0); // 800B50A8
  if (!crb(c,0)) { goto L_800B50E4; } // 800B50AC
  c->r[4]=R16(c->r[30]+0x000003BEu); // 800B50B0
  c->r[0]=0u+0x00000001u; // 800B50B4
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800B50B8
  c->r[3]=c->r[30]|c->r[30]; // 800B50BC
  c->r[0]=c->r[4]|0x00000080u; // 800B50C0
  {uint32_t ea=c->r[2]+0xFFFF9AC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B50C4
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B50C8
  c->r[4]=0u+0x00000064u; // 800B50CC
  c->r[5]=0u+0x00000000u; // 800B50D0
  c->r[6]=0u+0x00000000u; // 800B50D4
  c->r[7]=0u+0x00000000u; // 800B50D8
  c->lr=0x800B50E0u; f_801F4D44(c); // 800B50DC
  goto L_800B5118; // 800B50E0
L_800B50E4:;
  c->r[31]=0u+0x805D0000u; // 800B50E4
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B50E8
  c->lr=0x800B50F0u; f_800447E4(c); // 800B50EC
  cmpu(c,0,c->r[3],0x00000001u); // 800B50F0
  if (!crb(c,2)) { goto L_800B5104; } // 800B50F4
  c->r[0]=0u+0x00000000u; // 800B50F8
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800B50FC
  goto L_800B5110; // 800B5100
L_800B5104:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B5104
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800B5108
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800B510C
L_800B5110:;
  c->r[3]=c->r[30]|c->r[30]; // 800B5110
  c->lr=0x800B5118u; f_801F5B14(c); // 800B5114
L_800B5118:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B5118
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800B511C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800B5120
  c->lr=c->r[0]; // 800B5124
  c->r[1]=c->r[1]+0x00000040u; // 800B5128
  return; // 800B512C
}

// fn_800B5130
void f_800B5130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5130
  c->r[0]=c->lr; // 800B5134
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B5138
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800B513C
  c->r[31]=c->r[3]|c->r[3]; // 800B5140
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B5144
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B5148
  c->lr=0x800B5150u; f_802501B0(c); // 800B514C
  c->r[3]=c->r[31]|c->r[31]; // 800B5150
  c->r[4]=0u+0x00000000u; // 800B5154
  c->lr=0x800B515Cu; f_801F5244(c); // 800B5158
  c->r[6]=R32(c->r[31]+0x00000394u); // 800B515C
  c->r[3]=c->r[1]+0x00000038u; // 800B5160
  c->r[4]=c->r[1]+0x0000002Cu; // 800B5164
  c->r[5]=c->r[1]+0x00000020u; // 800B5168
  c->r[6]=c->r[6]+0x000000B0u; // 800B516C
  c->r[7]=0u+0x00000000u; // 800B5170
  c->lr=0x800B5178u; f_8002BE64(c); // 800B5174
  c->r[3]=c->r[31]+0x0000002Cu; // 800B5178
  c->r[4]=c->r[1]+0x00000038u; // 800B517C
  c->lr=0x800B5184u; f_800361A0(c); // 800B5180
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B5184
  c->r[3]=c->r[31]|c->r[31]; // 800B5188
  c->lr=0x800B5190u; f_801F5418(c); // 800B518C
  cmps(c,0,(int32_t)c->r[3],0); // 800B5190
  if (!crb(c,0)) { goto L_800B5214; } // 800B5194
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800B5198
  c->r[0]=0u+0x00000001u; // 800B519C
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800B51A0
  c->r[7]=0u+0x803A0000u; // 800B51A4
  c->r[0]=c->r[3]|0x00000080u; // 800B51A8
  {uint32_t ea=c->r[2]+0xFFFF9AC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B51AC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800B51B0
  c->r[3]=c->r[31]|c->r[31]; // 800B51B4
  c->r[6]=c->r[1]+0x00000014u; // 800B51B8
  c->r[4]=0u+0x00000064u; // 800B51BC
  {uint32_t ea=c->r[7]+0xFFFFCD4Cu; c->r[9]=R32(ea); c->r[7]=ea;} // 800B51C0
  c->r[5]=0u+0x00000001u; // 800B51C4
  c->r[8]=R32(c->r[7]+0x00000004u); // 800B51C8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B51CC
  c->r[7]=0u+0x00000000u; // 800B51D0
  W32(c->r[1]+0x00000014u,c->r[9]); // 800B51D4
  W32(c->r[1]+0x00000018u,c->r[8]); // 800B51D8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B51DC
  c->lr=0x800B51E4u; f_801F4D44(c); // 800B51E0
  c->r[0]=0u+0x00000064u; // 800B51E4
  c->r[7]=0u+0x803D0000u; // 800B51E8
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800B51EC
  c->r[3]=c->r[31]|c->r[31]; // 800B51F0
  c->r[4]=c->r[1]+0x00000008u; // 800B51F4
  {uint32_t ea=c->r[7]+0xFFFFF428u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B51F8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B51FC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B5200
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B5204
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B5208
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B520C
  c->lr=0x800B5214u; f_800B5228(c); // 800B5210
L_800B5214:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800B5214
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800B5218
  c->lr=c->r[0]; // 800B521C
  c->r[1]=c->r[1]+0x00000050u; // 800B5220
  return; // 800B5224
}

// fn_800B5228
void f_800B5228(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5228
  c->r[0]=c->lr; // 800B522C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5230
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5234
  c->r[31]=c->r[4]|c->r[4]; // 800B5238
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B523C
  c->r[30]=c->r[3]|c->r[3]; // 800B5240
  c->r[3]=c->r[31]|c->r[31]; // 800B5244
  c->lr=0x800B524Cu; f_802B9FDC(c); // 800B5248
  cmps(c,0,(int32_t)c->r[3],0); // 800B524C
  if (crb(c,2)) { goto L_800B526C; } // 800B5250
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B5254
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B5258
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B525C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800B5260
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B5264
  W32(c->r[30]+0x00000024u,c->r[0]); // 800B5268
L_800B526C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B526C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5270
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B5274
  c->lr=c->r[0]; // 800B5278
  c->r[1]=c->r[1]+0x00000010u; // 800B527C
  return; // 800B5280
}

// fn_800B5284
void f_800B5284(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5284
  c->r[0]=c->lr; // 800B5288
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B528C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800B5290
  c->r[31]=c->r[3]|c->r[3]; // 800B5294
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B5298
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B529C
  c->lr=0x800B52A4u; f_802501B0(c); // 800B52A0
  c->r[3]=c->r[31]+0x00000038u; // 800B52A4
  c->r[4]=c->r[31]+0x0000002Cu; // 800B52A8
  c->lr=0x800B52B0u; f_800361A0(c); // 800B52AC
  {uint32_t ea=c->r[2]+0xFFFF9AC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B52B0
  c->r[3]=0u+0x80550000u; // 800B52B4
  c->r[3]=c->r[3]+0x00003D60u; // 800B52B8
  c->r[4]=c->r[31]+0x00000038u; // 800B52BC
  c->f[2]=c->f[1]; // 800B52C0
  c->r[5]=c->r[1]+0x00000008u; // 800B52C4
  c->f[3]=c->f[1]; // 800B52C8
  c->r[6]=0u+0x00000000u; // 800B52CC
  c->r[7]=0u+0x00000000u; // 800B52D0
  c->lr=0x800B52D8u; f_801D5488(c); // 800B52D4
  c->r[5]=R32(c->r[31]+0x00000394u); // 800B52D8
  c->r[3]=c->r[31]+0x00000060u; // 800B52DC
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B52E0
  c->r[4]=c->r[5]+0x00000068u; // 800B52E4
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B52E8
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B52EC
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800B52F0
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B52F4
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800B52F8
  c->lr=0x800B5300u; f_800361A0(c); // 800B52FC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5300
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B5304
  c->lr=0x800B530Cu; f_802501B0(c); // 800B5308
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800B530C
  c->r[0]=0u+0x00000001u; // 800B5310
  {uint32_t ea=c->r[2]+0xFFFF9AC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5314
  c->r[4]=c->r[31]+0x0000002Cu; // 800B5318
  {uint32_t ea=c->r[2]+0xFFFF9ACCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B531C
  c->r[3]=c->r[3]|0x00002000u; // 800B5320
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800B5324
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5328
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800B532C
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800B5330
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800B5334
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5338
  c->r[3]=c->r[3]+0x0000005Cu; // 800B533C
  c->lr=0x800B5344u; f_800361A0(c); // 800B5340
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5344
  c->r[4]=0u+0x00000040u; // 800B5348
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B534C
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B5350
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5354
  c->r[3]=c->r[3]+0x0000001Cu; // 800B5358
  c->lr=0x800B5360u; f_802518A4(c); // 800B535C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5360
  c->r[4]=0u+0x00000006u; // 800B5364
  c->r[3]=c->r[3]+0x0000001Cu; // 800B5368
  c->lr=0x800B5370u; f_80251824(c); // 800B536C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B5370
  c->r[3]=c->r[31]|c->r[31]; // 800B5374
  {uint32_t ea=c->r[2]+0xFFFF9AC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5378
  c->r[5]=0u+0x00000000u; // 800B537C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B5380
  c->r[6]=0u+0x00000001u; // 800B5384
  c->f[2]=c->f[1]; // 800B5388
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B538C
  c->ctr=c->r[12]; // 800B5390
  if (true) { c->lr=0x800B5398u; dispatch(c,c->ctr); } // 800B5394
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5398
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B539C
  c->lr=0x800B53A4u; f_802501B0(c); // 800B53A0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B53A4
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B53A8
  cmps(c,0,(int32_t)c->r[0],0); // 800B53AC
  if (crb(c,2)) { goto L_800B5458; } // 800B53B0
  c->r[3]=c->r[3]+0x00000068u; // 800B53B4
  c->r[4]=c->r[31]+0x00000060u; // 800B53B8
  c->lr=0x800B53C0u; f_800361A0(c); // 800B53BC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B53C0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B53C4
  c->lr=0x800B53CCu; f_8025037C(c); // 800B53C8
  c->r[6]=R32(c->r[31]+0x00000394u); // 800B53CC
  c->r[3]=c->r[1]+0x00000024u; // 800B53D0
  c->r[4]=c->r[31]+0x00000060u; // 800B53D4
  c->r[5]=c->r[1]+0x00000030u; // 800B53D8
  c->r[6]=c->r[6]+0x000000B0u; // 800B53DC
  c->r[7]=0u+0x00000000u; // 800B53E0
  c->lr=0x800B53E8u; f_8002BE64(c); // 800B53E4
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800B53E8
  c->r[3]=0u+0x805D0000u; // 800B53EC
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B53F0
  c->r[3]=c->r[3]+0x00003F6Cu; // 800B53F4
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B53F8
  c->r[4]=c->r[31]|c->r[31]; // 800B53FC
  W32(c->r[1]+0x00000018u,c->r[5]); // 800B5400
  c->r[7]=c->r[1]+0x00000018u; // 800B5404
  c->r[6]=0u+0x0000000Cu; // 800B5408
  c->r[8]=0u+0x00000000u; // 800B540C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B5410
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B5414
  W32(c->r[1]+0x00000020u,c->r[0]); // 800B5418
  c->r[3]=R32(c->r[31]+0x00000438u); // 800B541C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800B5420
  c->lr=0x800B5428u; f_801FA6A4(c); // 800B5424
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800B5428
  cmps(c,0,(int32_t)c->r[0],0); // 800B542C
  if (crb(c,2)) { goto L_800B5440; } // 800B5430
  c->r[3]=c->r[31]+0x00000044u; // 800B5434
  c->r[4]=c->r[31]+0x000003CCu; // 800B5438
  c->lr=0x800B5440u; f_800361A0(c); // 800B543C
L_800B5440:;
  c->r[6]=0u+0x803A0000u; // 800B5440
  c->r[3]=R32(c->r[31]+0x00000438u); // 800B5444
  c->r[5]=c->r[31]+0x00000044u; // 800B5448
  c->r[4]=0u+0x00000000u; // 800B544C
  c->r[6]=c->r[6]+0xFFFFCD40u; // 800B5450
  c->lr=0x800B5458u; f_801FBEC0(c); // 800B5454
L_800B5458:;
  c->r[3]=c->r[31]|c->r[31]; // 800B5458
  c->r[4]=0u+0x00000000u; // 800B545C
  c->lr=0x800B5464u; f_801F7C00(c); // 800B5460
  c->r[7]=0u+0x803D0000u; // 800B5464
  {uint32_t ea=c->r[7]+0xFFFFF434u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B5468
  c->r[3]=c->r[31]|c->r[31]; // 800B546C
  c->r[4]=c->r[1]+0x0000000Cu; // 800B5470
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B5474
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B5478
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B547C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800B5480
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5484
  c->lr=0x800B548Cu; f_800B5228(c); // 800B5488
  c->r[0]=R32(c->r[1]+0x00000054u); // 800B548C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800B5490
  c->lr=c->r[0]; // 800B5494
  c->r[1]=c->r[1]+0x00000050u; // 800B5498
  return; // 800B549C
}

// fn_800B54A0
void f_800B54A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B54A0
  c->r[0]=c->lr; // 800B54A4
  c->r[4]=0u+0x00000000u; // 800B54A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B54AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B54B0
  c->r[31]=c->r[3]|c->r[3]; // 800B54B4
  c->r[3]=R32(c->r[3]+0x00000438u); // 800B54B8
  c->lr=0x800B54C0u; f_801FAF00(c); // 800B54BC
  cmps(c,0,(int32_t)c->r[3],0); // 800B54C0
  if (!crb(c,2)) { goto L_800B5558; } // 800B54C4
  c->r[3]=c->r[31]|c->r[31]; // 800B54C8
  c->r[4]=0u+0x00000005u; // 800B54CC
  c->lr=0x800B54D4u; f_801F5AB4(c); // 800B54D0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B54D4
  c->r[3]=c->r[31]+0x0000002Cu; // 800B54D8
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B54DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800B54E0
  c->r[0]=c->r[0]|0x00000004u; // 800B54E4
  c->r[4]=c->r[4]+0x0000005Cu; // 800B54E8
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800B54EC
  c->lr=0x800B54F4u; f_800361A0(c); // 800B54F0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B54F4
  c->r[3]=c->r[31]+0x00000060u; // 800B54F8
  c->r[4]=c->r[4]+0x00000068u; // 800B54FC
  c->lr=0x800B5504u; f_800361A0(c); // 800B5500
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800B5504
  c->r[3]=0u+0x805D0000u; // 800B5508
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B550C
  c->r[3]=c->r[3]+0x00006CF8u; // 800B5510
  c->r[4]=c->r[1]+0x00000008u; // 800B5514
  c->r[5]=0u+0x00040000u; // 800B5518
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B551C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B5520
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B5524
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B5528
  c->lr=0x800B5530u; f_802236F8(c); // 800B552C
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800B5530
  c->r[3]=c->r[31]|c->r[31]; // 800B5534
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B5538
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B553C
  c->ctr=c->r[12]; // 800B5540
  if (true) { c->lr=0x800B5548u; dispatch(c,c->ctr); } // 800B5544
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5548
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B554C
  c->lr=0x800B5554u; f_8025037C(c); // 800B5550
  goto L_800B5578; // 800B5554
L_800B5558:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B5558
  c->r[3]=c->r[31]+0x0000002Cu; // 800B555C
  c->r[4]=c->r[4]+0x0000005Cu; // 800B5560
  c->lr=0x800B5568u; f_800361A0(c); // 800B5564
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B5568
  c->r[3]=c->r[31]+0x00000060u; // 800B556C
  c->r[4]=c->r[4]+0x00000068u; // 800B5570
  c->lr=0x800B5578u; f_800361A0(c); // 800B5574
L_800B5578:;
  c->r[3]=c->r[31]|c->r[31]; // 800B5578
  c->r[4]=0u+0x00000000u; // 800B557C
  c->lr=0x800B5584u; f_801F7C00(c); // 800B5580
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B5584
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B5588
  c->lr=c->r[0]; // 800B558C
  c->r[1]=c->r[1]+0x00000020u; // 800B5590
  return; // 800B5594
}

// fn_800B5598
void f_800B5598(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5598
  c->r[0]=c->lr; // 800B559C
  c->r[4]=0u+0x000000E1u; // 800B55A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B55A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B55A8
  c->r[31]=c->r[3]|c->r[3]; // 800B55AC
  c->r[3]=c->r[3]+0x00000210u; // 800B55B0
  c->lr=0x800B55B8u; f_80221630(c); // 800B55B4
  cmps(c,0,(int32_t)c->r[3],0); // 800B55B8
  if (!crb(c,2)) { goto L_800B55C8; } // 800B55BC
  c->r[3]=0u+0x00000000u; // 800B55C0
  goto L_800B55E4; // 800B55C4
L_800B55C8:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B55C8
  c->r[3]=0u+0x000004A0u; // 800B55CC
  c->r[5]=0u+0x00000000u; // 800B55D0
  c->r[4]=c->r[4]+0x0000010Cu; // 800B55D4
  c->lr=0x800B55DCu; f_8024EE50(c); // 800B55D8
  c->r[0]=cntlz(c->r[3]); // 800B55DC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B55E0
L_800B55E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B55E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B55E8
  c->lr=c->r[0]; // 800B55EC
  c->r[1]=c->r[1]+0x00000010u; // 800B55F0
  return; // 800B55F4
}

// fn_800B55F8
void f_800B55F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B55F8
  c->r[0]=c->lr; // 800B55FC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B5600
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800B5604
  c->r[31]=0u+0x803D0000u; // 800B5608
  c->r[31]=c->r[31]+0xFFFFF428u; // 800B560C
  W32(c->r[1]+0x00000038u,c->r[30]); // 800B5610
  c->r[30]=c->r[3]|c->r[3]; // 800B5614
  c->lr=0x800B561Cu; f_801F4F28(c); // 800B5618
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800B561C
  cmps(c,0,(int32_t)c->r[0],101); // 800B5620
  if (crb(c,2)) { goto L_800B5674; } // 800B5624
  if (!crb(c,0)) { goto L_800B5638; } // 800B5628
  cmps(c,0,(int32_t)c->r[0],100); // 800B562C
  if (!crb(c,0)) { goto L_800B5644; } // 800B5630
  goto L_800B56D0; // 800B5634
L_800B5638:;
  cmps(c,0,(int32_t)c->r[0],103); // 800B5638
  if (!crb(c,0)) { goto L_800B56D0; } // 800B563C
  goto L_800B56A4; // 800B5640
L_800B5644:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B5644
  c->r[5]=c->r[31]+0x00000018u; // 800B5648
  c->r[3]=c->r[30]|c->r[30]; // 800B564C
  c->r[4]=c->r[1]+0x00000020u; // 800B5650
  c->r[7]=R32(c->r[31]+0x00000018u); // 800B5654
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B5658
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B565C
  W32(c->r[1]+0x00000020u,c->r[7]); // 800B5660
  W32(c->r[1]+0x00000024u,c->r[6]); // 800B5664
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B5668
  c->lr=0x800B5670u; f_800B5228(c); // 800B566C
  goto L_800B56D0; // 800B5670
L_800B5674:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B5674
  c->r[5]=c->r[31]+0x00000024u; // 800B5678
  c->r[3]=c->r[30]|c->r[30]; // 800B567C
  c->r[4]=c->r[1]+0x00000014u; // 800B5680
  c->r[7]=R32(c->r[31]+0x00000024u); // 800B5684
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B5688
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B568C
  W32(c->r[1]+0x00000014u,c->r[7]); // 800B5690
  W32(c->r[1]+0x00000018u,c->r[6]); // 800B5694
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B5698
  c->lr=0x800B56A0u; f_800B5228(c); // 800B569C
  goto L_800B56D0; // 800B56A0
L_800B56A4:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B56A4
  c->r[5]=c->r[31]+0x00000030u; // 800B56A8
  c->r[3]=c->r[30]|c->r[30]; // 800B56AC
  c->r[4]=c->r[1]+0x00000008u; // 800B56B0
  c->r[7]=R32(c->r[31]+0x00000030u); // 800B56B4
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B56B8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B56BC
  W32(c->r[1]+0x00000008u,c->r[7]); // 800B56C0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B56C4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B56C8
  c->lr=0x800B56D0u; f_800B5228(c); // 800B56CC
L_800B56D0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B56D0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800B56D4
  c->r[30]=R32(c->r[1]+0x00000038u); // 800B56D8
  c->lr=c->r[0]; // 800B56DC
  c->r[1]=c->r[1]+0x00000040u; // 800B56E0
  return; // 800B56E4
}

// fn_800B56E8
void f_800B56E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B56E8
  c->r[0]=c->lr; // 800B56EC
  c->r[5]=c->r[3]|c->r[3]; // 800B56F0
  c->r[3]=c->r[4]|c->r[4]; // 800B56F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B56F8
  c->r[4]=R32(c->r[5]+0x00000394u); // 800B56FC
  c->r[5]=0u+0x00000000u; // 800B5700
  c->lr=0x800B5708u; f_80250BF4(c); // 800B5704
  c->r[0]=cntlz(c->r[3]); // 800B5708
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B570C
  c->r[3]=0u-c->r[0]; // 800B5710
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5714
  c->lr=c->r[0]; // 800B5718
  c->r[1]=c->r[1]+0x00000010u; // 800B571C
  return; // 800B5720
}

// fn_800B5724
void f_800B5724(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5724
  c->r[0]=c->lr; // 800B5728
  c->r[5]=0u+0x80620000u; // 800B572C
  c->r[4]=0u+0x00000002u; // 800B5730
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B5734
  c->r[5]=c->r[5]+0x00007688u; // 800B5738
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800B573C
  W32(c->r[1]+0x00000088u,c->r[30]); // 800B5740
  c->r[30]=c->r[3]|c->r[3]; // 800B5744
  c->r[3]=R32(c->r[5]+0x00000014u); // 800B5748
  c->lr=0x800B5750u; f_80037670(c); // 800B574C
  cmps(c,0,(int32_t)c->r[3],0); // 800B5750
  if (!crb(c,2)) { goto L_800B57B4; } // 800B5754
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B5758
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B575C
  cmps(c,0,(int32_t)c->r[0],0); // 800B5760
  if (!crb(c,2)) { goto L_800B57B4; } // 800B5764
  {uint32_t ea=c->r[2]+0xFFFF9AD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5768
  c->r[3]=c->r[1]+0x00000008u; // 800B576C
  c->r[4]=c->r[30]+0x0000002Cu; // 800B5770
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800B5774
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800B5778
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B577C
  c->lr=0x800B5784u; f_800361A0(c); // 800B5780
  c->r[31]=0u+0x80550000u; // 800B5784
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5788
  c->r[31]=c->r[31]+0x00003D60u; // 800B578C
  c->r[5]=c->r[30]|c->r[30]; // 800B5790
  c->r[3]=c->r[31]+0x00000010u; // 800B5794
  c->r[6]=c->r[1]+0x00000008u; // 800B5798
  c->r[7]=c->r[1]+0x00000020u; // 800B579C
  c->r[4]=0u+0x000001FFu; // 800B57A0
  c->lr=0x800B57A8u; f_80226910(c); // 800B57A4
  c->r[3]=c->r[31]+0x00000010u; // 800B57A8
  c->r[4]=c->r[1]+0x00000020u; // 800B57AC
  c->lr=0x800B57B4u; f_80226D68(c); // 800B57B0
L_800B57B4:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800B57B4
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800B57B8
  c->r[30]=R32(c->r[1]+0x00000088u); // 800B57BC
  c->lr=c->r[0]; // 800B57C0
  c->r[1]=c->r[1]+0x00000090u; // 800B57C4
  return; // 800B57C8
}

// fn_800B57CC
void f_800B57CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B57CC
  c->r[0]=c->lr; // 800B57D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B57D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B57D8
  c->r[31]=c->r[3]|c->r[3]; // 800B57DC
  c->r[3]=c->r[3]+0x00000210u; // 800B57E0
  c->lr=0x800B57E8u; f_8004BAD4(c); // 800B57E4
  cmps(c,0,(int32_t)c->r[3],0); // 800B57E8
  if (crb(c,2)) { goto L_800B5858; } // 800B57EC
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B57F0
  c->r[4]=c->r[31]|c->r[31]; // 800B57F4
  c->r[3]=c->r[31]+0x00000210u; // 800B57F8
  c->r[0]=c->r[0]|0xAA000000u; // 800B57FC
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B5800
  c->lr=0x800B5808u; f_80043E44(c); // 800B5804
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5808
  c->r[3]=c->r[31]+0x00000210u; // 800B580C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B5810
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B5814
  c->lr=0x800B581Cu; f_80043E34(c); // 800B5818
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B581C
  c->r[4]=0u+0x803A0000u; // 800B5820
  c->r[4]=c->r[4]+0xFFFFCD58u; // 800B5824
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B5828
  c->lr=0x800B5830u; f_80256EC4(c); // 800B582C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B5830
  c->r[5]=c->r[3]|c->r[3]; // 800B5834
  c->r[3]=c->r[31]+0x00000210u; // 800B5838
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800B583C
  c->lr=0x800B5844u; f_8004BAC8(c); // 800B5840
  {uint32_t ea=c->r[2]+0xFFFF9AD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5844
  c->r[3]=c->r[31]+0x00000210u; // 800B5848
  c->f[2]=c->f[1]; // 800B584C
  c->f[3]=c->f[1]; // 800B5850
  c->lr=0x800B5858u; f_80043E24(c); // 800B5854
L_800B5858:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5858
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B585C
  c->lr=c->r[0]; // 800B5860
  c->r[1]=c->r[1]+0x00000010u; // 800B5864
  return; // 800B5868
}

// fn_800B586C
void f_800B586C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B586C
  c->r[0]=c->lr; // 800B5870
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5874
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5878
  c->r[31]=c->r[3]|c->r[3]; // 800B587C
  c->r[3]=c->r[3]+0x00000210u; // 800B5880
  c->lr=0x800B5888u; f_80221698(c); // 800B5884
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5888
  cmps(c,0,(int32_t)c->r[3],0); // 800B588C
  if (crb(c,2)) { goto L_800B58B0; } // 800B5890
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B5894
  cmps(c,0,(int32_t)c->r[0],0); // 800B5898
  if (crb(c,2)) { goto L_800B58B0; } // 800B589C
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B58A0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800B58A4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B58A8
  goto L_800B58BC; // 800B58AC
L_800B58B0:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B58B0
  c->r[0]=c->r[0]|0x80000000u; // 800B58B4
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B58B8
L_800B58BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B58BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B58C0
  c->lr=c->r[0]; // 800B58C4
  c->r[1]=c->r[1]+0x00000010u; // 800B58C8
  return; // 800B58CC
}

// fn_800B58D0
void f_800B58D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B58D0
  c->r[0]=c->lr; // 800B58D4
  cmps(c,0,(int32_t)c->r[3],0); // 800B58D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B58DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B58E0
  c->r[31]=c->r[4]|c->r[4]; // 800B58E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B58E8
  c->r[30]=c->r[3]|c->r[3]; // 800B58EC
  if (crb(c,2)) { goto L_800B590C; } // 800B58F0
  c->r[4]=0u+0x00000000u; // 800B58F4
  c->lr=0x800B58FCu; f_8026A06C(c); // 800B58F8
  cmps(c,0,(int32_t)c->r[31],0); // 800B58FC
  if (!crb(c,1)) { goto L_800B590C; } // 800B5900
  c->r[3]=c->r[30]|c->r[30]; // 800B5904
  c->lr=0x800B590Cu; f_8026A268(c); // 800B5908
L_800B590C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B590C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5910
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B5914
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5918
  c->lr=c->r[0]; // 800B591C
  c->r[1]=c->r[1]+0x00000010u; // 800B5920
  return; // 800B5924
}

// fn_800B5928
void f_800B5928(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5928
  c->r[0]=c->lr; // 800B592C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B5930
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800B5934
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800B5938
  c->r[4]=0u+0x00000000u; // 800B593C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5940
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B5944
  c->r[30]=c->r[3]|c->r[3]; // 800B5948
  c->lr=0x800B5950u; f_801F57D0(c); // 800B594C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B5950
  c->r[3]=c->r[30]|c->r[30]; // 800B5954
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800B5958
  c->ctr=c->r[12]; // 800B595C
  if (true) { c->lr=0x800B5964u; dispatch(c,c->ctr); } // 800B5960
  c->r[3]=c->r[30]|c->r[30]; // 800B5964
  c->lr=0x800B596Cu; f_801F4B94(c); // 800B5968
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800B596C
  c->r[4]=0u+0x00000003u; // 800B5970
  {uint32_t ea=c->r[2]+0xFFFF9AE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5974
  c->r[5]=0u+0x00000015u; // 800B5978
  c->r[0]=c->r[0]|0x00000800u; // 800B597C
  c->r[3]=0u+0x80550000u; // 800B5980
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800B5984
  c->f[3]=c->f[1]; // 800B5988
  W8(c->r[30]+0x0000006Cu,c->r[4]); // 800B598C
  c->r[3]=c->r[3]+0x00003D60u; // 800B5990
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B5994
  c->r[4]=c->r[30]+0x0000002Cu; // 800B5998
  W8(c->r[30]+0x0000006Du,c->r[5]); // 800B599C
  {uint32_t ea=c->r[2]+0xFFFF9AE4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B59A0
  c->r[5]=c->r[30]+0x00000030u; // 800B59A4
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B59A8
  c->r[6]=0u+0x00000000u; // 800B59AC
  c->r[7]=0u+0x00000000u; // 800B59B0
  c->lr=0x800B59B8u; f_801D5488(c); // 800B59B4
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B59B8
  c->r[3]=c->r[30]|c->r[30]; // 800B59BC
  c->lr=0x800B59C4u; f_801F58BC(c); // 800B59C0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B59C4
  c->r[31]=0u+0x00000001u; // 800B59C8
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800B59CC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B59D0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B59D4
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800B59D8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B59DC
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800B59E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B59E4
  c->lr=0x800B59ECu; f_802501B0(c); // 800B59E8
  c->r[3]=0u+0x805D0000u; // 800B59EC
  c->r[4]=c->r[30]+0x0000002Cu; // 800B59F0
  c->r[3]=c->r[3]+0x000078B0u; // 800B59F4
  c->lr=0x800B59FCu; f_802351CC(c); // 800B59F8
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B59FC
  c->r[4]=0u+0x803A0000u; // 800B5A00
  c->r[4]=c->r[4]+0xFFFFCDF0u; // 800B5A04
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800B5A08
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800B5A0C
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B5A10
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B5A14
  c->lr=0x800B5A1Cu; f_80256EC4(c); // 800B5A18
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B5A1C
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800B5A20
  c->r[3]=c->r[30]|c->r[30]; // 800B5A24
  c->lr=0x800B5A2Cu; f_801F56F4(c); // 800B5A28
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B5A2C
  c->r[3]=c->r[30]|c->r[30]; // 800B5A30
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B5A34
  c->ctr=c->r[12]; // 800B5A38
  if (true) { c->lr=0x800B5A40u; dispatch(c,c->ctr); } // 800B5A3C
  c->r[3]=c->r[30]|c->r[30]; // 800B5A40
  c->lr=0x800B5A48u; f_800B62E8(c); // 800B5A44
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800B5A48
  W32(c->r[30]+0x00000444u,c->r[31]); // 800B5A4C
  c->lr=0x800B5A54u; f_8024E174(c); // 800B5A50
  W32(c->r[30]+0x00000438u,c->r[3]); // 800B5A54
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800B5A58
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800B5A5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5A60
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B5A64
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B5A68
  c->lr=c->r[0]; // 800B5A6C
  c->r[1]=c->r[1]+0x00000020u; // 800B5A70
  return; // 800B5A74
}

// fn_800B5A78
void f_800B5A78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5A78
  c->r[0]=c->lr; // 800B5A7C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B5A80
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800B5A84
  c->r[31]=c->r[3]|c->r[3]; // 800B5A88
  W32(c->r[1]+0x00000038u,c->r[30]); // 800B5A8C
  c->r[30]=0u+0x805D0000u; // 800B5A90
  c->r[3]=c->r[30]+0x00003F6Cu; // 800B5A94
  c->lr=0x800B5A9Cu; f_80045264(c); // 800B5A98
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800B5A9C
  cmpu(c,0,c->r[0],0x00000006u); // 800B5AA0
  if (!crb(c,2)) { goto L_800B5AE0; } // 800B5AA4
  c->r[3]=c->r[30]+0x00003F6Cu; // 800B5AA8
  c->lr=0x800B5AB0u; f_80037AF0(c); // 800B5AAC
  cmpu(c,0,c->r[3],c->r[31]); // 800B5AB0
  if (!crb(c,2)) { goto L_800B5AE0; } // 800B5AB4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800B5AB8
  cmps(c,0,(int32_t)c->r[0],101); // 800B5ABC
  if (crb(c,2)) { goto L_800B5AE0; } // 800B5AC0
  {uint32_t ea=c->r[2]+0xFFFF9AE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5AC4
  c->r[3]=c->r[31]|c->r[31]; // 800B5AC8
  c->r[4]=0u+0x00000065u; // 800B5ACC
  c->r[5]=0u+0x00000000u; // 800B5AD0
  c->r[6]=0u+0x00000000u; // 800B5AD4
  c->r[7]=0u+0x00000000u; // 800B5AD8
  c->lr=0x800B5AE0u; f_801F4D44(c); // 800B5ADC
L_800B5AE0:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B5AE0
  c->r[3]=c->r[31]|c->r[31]; // 800B5AE4
  c->r[12]=R32(c->r[12]+0x00000068u); // 800B5AE8
  c->ctr=c->r[12]; // 800B5AEC
  if (true) { c->lr=0x800B5AF4u; dispatch(c,c->ctr); } // 800B5AF0
  c->r[3]=c->r[31]|c->r[31]; // 800B5AF4
  c->lr=0x800B5AFCu; f_801F4C0C(c); // 800B5AF8
  c->r[3]=c->r[31]|c->r[31]; // 800B5AFC
  c->lr=0x800B5B04u; f_800B6238(c); // 800B5B00
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5B04
  c->r[0]=R32(c->r[3]+0x00000030u); // 800B5B08
  cmps(c,0,(int32_t)c->r[0],0); // 800B5B0C
  if (!crb(c,2)) { goto L_800B5BB0; } // 800B5B10
  c->r[3]=c->r[31]|c->r[31]; // 800B5B14
  c->r[4]=0u+0x00000000u; // 800B5B18
  c->lr=0x800B5B20u; f_800453A4(c); // 800B5B1C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800B5B20
  if (crb(c,2)) { goto L_800B5BB0; } // 800B5B24
  c->r[3]=c->r[31]|c->r[31]; // 800B5B28
  c->r[4]=0u+0x00000004u; // 800B5B2C
  c->r[5]=0u+0x00000007u; // 800B5B30
  c->r[6]=0u+0x00000001u; // 800B5B34
  c->r[7]=0u+0x00000001u; // 800B5B38
  c->lr=0x800B5B40u; f_8017900C(c); // 800B5B3C
  c->r[4]=0u+0x803A0000u; // 800B5B40
  c->r[30]=0u+0x80550000u; // 800B5B44
  c->r[4]=c->r[4]+0xFFFFCDF0u; // 800B5B48
  c->r[5]=0u+0x00000000u; // 800B5B4C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B5B50
  c->r[6]=0u+0x00000000u; // 800B5B54
  c->r[4]=c->r[4]+0x00000009u; // 800B5B58
  c->lr=0x800B5B60u; f_8018D3E4(c); // 800B5B5C
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800B5B60
  c->r[0]=0u+0x00000000u; // 800B5B64
  cmpu(c,0,c->r[4],0x000000FFu); // 800B5B68
  W32(c->r[1]+0x00000020u,c->r[0]); // 800B5B6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B5B70
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B5B74
  if (crb(c,2)) { goto L_800B5BB0; } // 800B5B78
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B5B7C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B5B80
  c->r[5]=c->r[1]+0x00000014u; // 800B5B84
  c->r[6]=c->r[1]+0x00000008u; // 800B5B88
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B5B8C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B5B90
  c->r[7]=R32(c->r[31]+0x0000002Cu); // 800B5B94
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B5B98
  W32(c->r[1]+0x00000014u,c->r[7]); // 800B5B9C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800B5BA0
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B5BA4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B5BA8
  c->lr=0x800B5BB0u; f_8018DBD0(c); // 800B5BAC
L_800B5BB0:;
  c->r[3]=c->r[31]|c->r[31]; // 800B5BB0
  c->lr=0x800B5BB8u; f_801F56F4(c); // 800B5BB4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5BB8
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B5BBC
  cmps(c,0,(int32_t)c->r[0],0); // 800B5BC0
  if (crb(c,2)) { goto L_800B5C2C; } // 800B5BC4
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800B5BC8
  cmps(c,0,(int32_t)c->r[0],0); // 800B5BCC
  if (crb(c,2)) { goto L_800B5C2C; } // 800B5BD0
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B5BD4
  cmps(c,0,(int32_t)c->r[0],0); // 800B5BD8
  if (crb(c,2)) { goto L_800B5BF8; } // 800B5BDC
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800B5BE0
  cmps(c,0,(int32_t)c->r[0],0); // 800B5BE4
  if (!crb(c,2)) { goto L_800B5BF8; } // 800B5BE8
  c->r[4]=c->r[3]+0x000000B0u; // 800B5BEC
  c->lr=0x800B5BF4u; f_80250F18(c); // 800B5BF0
  goto L_800B5C14; // 800B5BF4
L_800B5BF8:;
  c->r[3]=c->r[3]+0x0000005Cu; // 800B5BF8
  c->r[4]=c->r[31]+0x0000002Cu; // 800B5BFC
  c->lr=0x800B5C04u; f_800361A0(c); // 800B5C00
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5C04
  c->r[4]=c->r[31]+0x00000060u; // 800B5C08
  c->r[3]=c->r[3]+0x00000068u; // 800B5C0C
  c->lr=0x800B5C14u; f_800361A0(c); // 800B5C10
L_800B5C14:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B5C14
  c->r[3]=c->r[31]|c->r[31]; // 800B5C18
  c->lr=0x800B5C20u; f_801F58FC(c); // 800B5C1C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5C20
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B5C24
  c->lr=0x800B5C2Cu; f_8025037C(c); // 800B5C28
L_800B5C2C:;
  c->r[3]=c->r[31]|c->r[31]; // 800B5C2C
  c->lr=0x800B5C34u; f_800B63A0(c); // 800B5C30
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B5C34
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800B5C38
  c->r[30]=R32(c->r[1]+0x00000038u); // 800B5C3C
  c->lr=c->r[0]; // 800B5C40
  c->r[1]=c->r[1]+0x00000040u; // 800B5C44
  return; // 800B5C48
}

// fn_800B5C4C
void f_800B5C4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5C4C
  c->r[0]=c->lr; // 800B5C50
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B5C54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B5C58
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B5C5C
  c->r[30]=c->r[3]|c->r[3]; // 800B5C60
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B5C64
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B5C68
  c->lr=0x800B5C70u; f_802501B0(c); // 800B5C6C
  c->r[3]=c->r[30]|c->r[30]; // 800B5C70
  c->r[4]=0u+0x00000000u; // 800B5C74
  c->lr=0x800B5C7Cu; f_801F5244(c); // 800B5C78
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B5C7C
  c->r[3]=c->r[30]+0x0000002Cu; // 800B5C80
  c->r[4]=c->r[4]+0x0000005Cu; // 800B5C84
  c->lr=0x800B5C8Cu; f_800361A0(c); // 800B5C88
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B5C8C
  c->r[3]=c->r[30]|c->r[30]; // 800B5C90
  c->lr=0x800B5C98u; f_801F5418(c); // 800B5C94
  cmps(c,0,(int32_t)c->r[3],0); // 800B5C98
  if (!crb(c,0)) { goto L_800B5CE8; } // 800B5C9C
  c->r[4]=R16(c->r[30]+0x000003BEu); // 800B5CA0
  c->r[3]=0u+0x00000001u; // 800B5CA4
  c->r[0]=0u+0x00000064u; // 800B5CA8
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 800B5CAC
  c->r[4]=c->r[4]|0x00000080u; // 800B5CB0
  c->r[7]=0u+0x803D0000u; // 800B5CB4
  W16(c->r[30]+0x000003BEu,c->r[4]); // 800B5CB8
  c->r[3]=c->r[30]|c->r[30]; // 800B5CBC
  c->r[4]=c->r[1]+0x00000008u; // 800B5CC0
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B5CC4
  {uint32_t ea=c->r[7]+0xFFFFF5A8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B5CC8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B5CCC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B5CD0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B5CD4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B5CD8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B5CDC
  c->lr=0x800B5CE4u; f_800B5D34(c); // 800B5CE0
  goto L_800B5D1C; // 800B5CE4
L_800B5CE8:;
  c->r[31]=0u+0x805D0000u; // 800B5CE8
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B5CEC
  c->lr=0x800B5CF4u; f_800447E4(c); // 800B5CF0
  cmpu(c,0,c->r[3],0x00000001u); // 800B5CF4
  if (!crb(c,2)) { goto L_800B5D08; } // 800B5CF8
  c->r[0]=0u+0x00000000u; // 800B5CFC
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800B5D00
  goto L_800B5D14; // 800B5D04
L_800B5D08:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B5D08
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800B5D0C
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800B5D10
L_800B5D14:;
  c->r[3]=c->r[30]|c->r[30]; // 800B5D14
  c->lr=0x800B5D1Cu; f_801F5B14(c); // 800B5D18
L_800B5D1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B5D1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B5D20
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B5D24
  c->lr=c->r[0]; // 800B5D28
  c->r[1]=c->r[1]+0x00000020u; // 800B5D2C
  return; // 800B5D30
}

// fn_800B5D34
void f_800B5D34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5D34
  c->r[0]=c->lr; // 800B5D38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5D3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5D40
  c->r[31]=c->r[4]|c->r[4]; // 800B5D44
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B5D48
  c->r[30]=c->r[3]|c->r[3]; // 800B5D4C
  c->r[3]=c->r[31]|c->r[31]; // 800B5D50
  c->lr=0x800B5D58u; f_802B9FDC(c); // 800B5D54
  cmps(c,0,(int32_t)c->r[3],0); // 800B5D58
  if (crb(c,2)) { goto L_800B5D78; } // 800B5D5C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B5D60
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B5D64
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B5D68
  W32(c->r[30]+0x00000020u,c->r[0]); // 800B5D6C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B5D70
  W32(c->r[30]+0x00000024u,c->r[0]); // 800B5D74
L_800B5D78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5D78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5D7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B5D80
  c->lr=c->r[0]; // 800B5D84
  c->r[1]=c->r[1]+0x00000010u; // 800B5D88
  return; // 800B5D8C
}

// fn_800B5D90
void f_800B5D90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5D90
  c->r[0]=c->lr; // 800B5D94
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B5D98
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800B5D9C
  c->r[31]=c->r[3]|c->r[3]; // 800B5DA0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B5DA4
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800B5DA8
  cmps(c,0,(int32_t)c->r[0],0); // 800B5DAC
  if (crb(c,2)) { goto L_800B5DD0; } // 800B5DB0
  c->r[0]=R8(c->r[4]+0x0000014Du); // 800B5DB4
  cmps(c,0,(int32_t)c->r[0],0); // 800B5DB8
  if (crb(c,2)) { goto L_800B5DD0; } // 800B5DBC
  c->r[0]=0u+0x00000000u; // 800B5DC0
  W8(c->r[4]+0x0000014Cu,c->r[0]); // 800B5DC4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B5DC8
  W8(c->r[4]+0x0000014Du,c->r[0]); // 800B5DCC
L_800B5DD0:;
  c->r[3]=R32(c->r[3]+0x00000394u); // 800B5DD0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B5DD4
  c->lr=0x800B5DDCu; f_802501B0(c); // 800B5DD8
  c->r[3]=c->r[31]+0x00000038u; // 800B5DDC
  c->r[4]=c->r[31]+0x0000002Cu; // 800B5DE0
  c->lr=0x800B5DE8u; f_800361A0(c); // 800B5DE4
  {uint32_t ea=c->r[2]+0xFFFF9AE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5DE8
  c->r[3]=0u+0x80550000u; // 800B5DEC
  c->r[3]=c->r[3]+0x00003D60u; // 800B5DF0
  c->r[4]=c->r[31]+0x00000038u; // 800B5DF4
  c->f[2]=c->f[1]; // 800B5DF8
  c->r[5]=c->r[1]+0x00000008u; // 800B5DFC
  c->f[3]=c->f[1]; // 800B5E00
  c->r[6]=0u+0x00000000u; // 800B5E04
  c->r[7]=0u+0x00000000u; // 800B5E08
  c->lr=0x800B5E10u; f_801D5488(c); // 800B5E0C
  c->r[5]=R32(c->r[31]+0x00000394u); // 800B5E10
  c->r[3]=c->r[31]+0x00000060u; // 800B5E14
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5E18
  c->r[4]=c->r[5]+0x00000068u; // 800B5E1C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B5E20
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5E24
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800B5E28
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5E2C
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800B5E30
  c->lr=0x800B5E38u; f_800361A0(c); // 800B5E34
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5E38
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B5E3C
  c->lr=0x800B5E44u; f_802501B0(c); // 800B5E40
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800B5E44
  c->r[0]=0u+0x00000001u; // 800B5E48
  {uint32_t ea=c->r[2]+0xFFFF9AE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5E4C
  c->r[4]=c->r[31]+0x0000002Cu; // 800B5E50
  {uint32_t ea=c->r[2]+0xFFFF9AECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5E54
  c->r[3]=c->r[3]|0x00002000u; // 800B5E58
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800B5E5C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5E60
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800B5E64
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800B5E68
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800B5E6C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5E70
  c->r[3]=c->r[3]+0x0000005Cu; // 800B5E74
  c->lr=0x800B5E7Cu; f_800361A0(c); // 800B5E78
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5E7C
  c->r[4]=0u+0x00000040u; // 800B5E80
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5E84
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B5E88
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5E8C
  c->r[3]=c->r[3]+0x0000001Cu; // 800B5E90
  c->lr=0x800B5E98u; f_802518A4(c); // 800B5E94
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5E98
  c->r[4]=0u+0x00000006u; // 800B5E9C
  c->r[3]=c->r[3]+0x0000001Cu; // 800B5EA0
  c->lr=0x800B5EA8u; f_80251824(c); // 800B5EA4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B5EA8
  c->r[3]=c->r[31]|c->r[31]; // 800B5EAC
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B5EB0
  c->r[5]=0u+0x00000004u; // 800B5EB4
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B5EB8
  c->r[6]=0u+0x00000001u; // 800B5EBC
  {uint32_t ea=c->r[2]+0xFFFF9AF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5EC0
  {uint32_t ea=c->r[2]+0xFFFF9AE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B5EC4
  c->ctr=c->r[12]; // 800B5EC8
  if (true) { c->lr=0x800B5ED0u; dispatch(c,c->ctr); } // 800B5ECC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5ED0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B5ED4
  c->lr=0x800B5EDCu; f_802501B0(c); // 800B5ED8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5EDC
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B5EE0
  cmps(c,0,(int32_t)c->r[0],0); // 800B5EE4
  if (crb(c,2)) { goto L_800B5FA4; } // 800B5EE8
  c->r[3]=c->r[3]+0x00000068u; // 800B5EEC
  c->r[4]=c->r[31]+0x00000060u; // 800B5EF0
  c->lr=0x800B5EF8u; f_800361A0(c); // 800B5EF4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B5EF8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B5EFC
  c->lr=0x800B5F04u; f_8025037C(c); // 800B5F00
  c->r[6]=R32(c->r[31]+0x00000394u); // 800B5F04
  c->r[3]=c->r[1]+0x00000024u; // 800B5F08
  c->r[4]=c->r[31]+0x00000060u; // 800B5F0C
  c->r[5]=c->r[1]+0x00000030u; // 800B5F10
  c->r[6]=c->r[6]+0x000000B0u; // 800B5F14
  c->r[7]=0u+0x00000000u; // 800B5F18
  c->lr=0x800B5F20u; f_8002BE64(c); // 800B5F1C
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800B5F20
  c->r[3]=0u+0x805D0000u; // 800B5F24
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B5F28
  c->r[3]=c->r[3]+0x00003F6Cu; // 800B5F2C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5F30
  c->r[4]=c->r[31]|c->r[31]; // 800B5F34
  W32(c->r[1]+0x00000018u,c->r[5]); // 800B5F38
  c->r[7]=c->r[1]+0x00000018u; // 800B5F3C
  c->r[6]=0u+0x00000012u; // 800B5F40
  c->r[8]=0u+0x00000000u; // 800B5F44
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B5F48
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B5F4C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800B5F50
  c->r[3]=R32(c->r[31]+0x00000438u); // 800B5F54
  c->r[5]=R32(c->r[31]+0x00000394u); // 800B5F58
  c->lr=0x800B5F60u; f_801FA6A4(c); // 800B5F5C
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800B5F60
  cmps(c,0,(int32_t)c->r[0],0); // 800B5F64
  if (crb(c,2)) { goto L_800B5F7C; } // 800B5F68
  c->r[3]=c->r[31]+0x00000044u; // 800B5F6C
  c->r[4]=c->r[31]+0x000003CCu; // 800B5F70
  c->lr=0x800B5F78u; f_800361A0(c); // 800B5F74
  goto L_800B5F8C; // 800B5F78
L_800B5F7C:;
  {uint32_t ea=c->r[2]+0xFFFF9AF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5F7C
  {uint32_t ea=c->r[2]+0xFFFF9AF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5F80
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 800B5F84
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B5F88
L_800B5F8C:;
  c->r[6]=0u+0x803A0000u; // 800B5F8C
  c->r[3]=R32(c->r[31]+0x00000438u); // 800B5F90
  c->r[5]=c->r[31]+0x00000044u; // 800B5F94
  c->r[4]=0u+0x00000000u; // 800B5F98
  c->r[6]=c->r[6]+0xFFFFCD68u; // 800B5F9C
  c->lr=0x800B5FA4u; f_801FBEC0(c); // 800B5FA0
L_800B5FA4:;
  c->r[3]=c->r[31]|c->r[31]; // 800B5FA4
  c->r[4]=0u+0x00000000u; // 800B5FA8
  c->lr=0x800B5FB0u; f_801F7C00(c); // 800B5FAC
  c->r[7]=0u+0x803D0000u; // 800B5FB0
  {uint32_t ea=c->r[7]+0xFFFFF5B4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B5FB4
  c->r[3]=c->r[31]|c->r[31]; // 800B5FB8
  c->r[4]=c->r[1]+0x0000000Cu; // 800B5FBC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B5FC0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B5FC4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B5FC8
  W32(c->r[1]+0x00000010u,c->r[5]); // 800B5FCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5FD0
  c->lr=0x800B5FD8u; f_800B5D34(c); // 800B5FD4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800B5FD8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800B5FDC
  c->lr=c->r[0]; // 800B5FE0
  c->r[1]=c->r[1]+0x00000050u; // 800B5FE4
  return; // 800B5FE8
}

// fn_800B5FEC
void f_800B5FEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5FEC
  c->r[0]=c->lr; // 800B5FF0
  c->r[4]=0u+0x00000000u; // 800B5FF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B5FF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B5FFC
  c->r[31]=c->r[3]|c->r[3]; // 800B6000
  c->r[3]=R32(c->r[3]+0x00000438u); // 800B6004
  c->lr=0x800B600Cu; f_801FAF00(c); // 800B6008
  cmps(c,0,(int32_t)c->r[3],0); // 800B600C
  if (!crb(c,2)) { goto L_800B60AC; } // 800B6010
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B6014
  c->r[3]=c->r[31]+0x0000002Cu; // 800B6018
  {uint32_t ea=c->r[2]+0xFFFF9AE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B601C
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800B6020
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B6024
  c->r[0]=c->r[0]|0x00000004u; // 800B6028
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800B602C
  c->r[4]=c->r[4]+0x0000005Cu; // 800B6030
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800B6034
  c->lr=0x800B603Cu; f_800361A0(c); // 800B6038
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B603C
  c->r[3]=c->r[31]+0x00000060u; // 800B6040
  c->r[4]=c->r[4]+0x00000068u; // 800B6044
  c->lr=0x800B604Cu; f_800361A0(c); // 800B6048
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800B604C
  c->r[3]=0u+0x805D0000u; // 800B6050
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B6054
  c->r[3]=c->r[3]+0x00006CF8u; // 800B6058
  c->r[4]=c->r[1]+0x00000008u; // 800B605C
  c->r[5]=0u+0x00040000u; // 800B6060
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B6064
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B6068
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B606C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B6070
  c->lr=0x800B6078u; f_802236F8(c); // 800B6074
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800B6078
  c->r[3]=c->r[31]|c->r[31]; // 800B607C
  c->r[4]=0u+0x00000006u; // 800B6080
  c->lr=0x800B6088u; f_801F5AB4(c); // 800B6084
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B6088
  c->r[3]=c->r[31]|c->r[31]; // 800B608C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B6090
  c->ctr=c->r[12]; // 800B6094
  if (true) { c->lr=0x800B609Cu; dispatch(c,c->ctr); } // 800B6098
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B609C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B60A0
  c->lr=0x800B60A8u; f_8025037C(c); // 800B60A4
  goto L_800B60CC; // 800B60A8
L_800B60AC:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B60AC
  c->r[3]=c->r[31]+0x0000002Cu; // 800B60B0
  c->r[4]=c->r[4]+0x0000005Cu; // 800B60B4
  c->lr=0x800B60BCu; f_800361A0(c); // 800B60B8
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B60BC
  c->r[3]=c->r[31]+0x00000060u; // 800B60C0
  c->r[4]=c->r[4]+0x00000068u; // 800B60C4
  c->lr=0x800B60CCu; f_800361A0(c); // 800B60C8
L_800B60CC:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B60CC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B60D0
  c->lr=0x800B60D8u; f_802501B0(c); // 800B60D4
  c->r[3]=c->r[31]|c->r[31]; // 800B60D8
  c->r[4]=0u+0x00000000u; // 800B60DC
  c->lr=0x800B60E4u; f_801F7C00(c); // 800B60E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B60E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B60E8
  c->lr=c->r[0]; // 800B60EC
  c->r[1]=c->r[1]+0x00000020u; // 800B60F0
  return; // 800B60F4
}

// fn_800B60F8
void f_800B60F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B60F8
  c->r[0]=c->lr; // 800B60FC
  c->r[4]=0u+0x000000E1u; // 800B6100
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6104
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6108
  c->r[31]=c->r[3]|c->r[3]; // 800B610C
  c->r[3]=c->r[3]+0x00000210u; // 800B6110
  c->lr=0x800B6118u; f_80221630(c); // 800B6114
  cmps(c,0,(int32_t)c->r[3],0); // 800B6118
  if (!crb(c,2)) { goto L_800B6128; } // 800B611C
  c->r[3]=0u+0x00000000u; // 800B6120
  goto L_800B6144; // 800B6124
L_800B6128:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B6128
  c->r[3]=0u+0x000004A1u; // 800B612C
  c->r[5]=0u+0x00000000u; // 800B6130
  c->r[4]=c->r[4]+0x0000010Cu; // 800B6134
  c->lr=0x800B613Cu; f_8024EE50(c); // 800B6138
  c->r[0]=cntlz(c->r[3]); // 800B613C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B6140
L_800B6144:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6144
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6148
  c->lr=c->r[0]; // 800B614C
  c->r[1]=c->r[1]+0x00000010u; // 800B6150
  return; // 800B6154
}

// fn_800B6158
void f_800B6158(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6158
  c->r[0]=c->lr; // 800B615C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B6160
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800B6164
  c->r[31]=c->r[3]|c->r[3]; // 800B6168
  c->lr=0x800B6170u; f_801F4F28(c); // 800B616C
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800B6170
  cmps(c,0,(int32_t)c->r[0],101); // 800B6174
  if (crb(c,2)) { goto L_800B61BC; } // 800B6178
  if (!crb(c,0)) { goto L_800B61E8; } // 800B617C
  cmps(c,0,(int32_t)c->r[0],100); // 800B6180
  if (!crb(c,0)) { goto L_800B618C; } // 800B6184
  goto L_800B61E8; // 800B6188
L_800B618C:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800B618C
  c->r[7]=0u+0x803D0000u; // 800B6190
  c->r[3]=c->r[31]|c->r[31]; // 800B6194
  c->r[4]=c->r[1]+0x00000014u; // 800B6198
  {uint32_t ea=c->r[7]+0xFFFFF5C0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B619C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B61A0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B61A4
  W32(c->r[1]+0x00000014u,c->r[6]); // 800B61A8
  W32(c->r[1]+0x00000018u,c->r[5]); // 800B61AC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B61B0
  c->lr=0x800B61B8u; f_800B5D34(c); // 800B61B4
  goto L_800B61E8; // 800B61B8
L_800B61BC:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800B61BC
  c->r[7]=0u+0x803D0000u; // 800B61C0
  c->r[3]=c->r[31]|c->r[31]; // 800B61C4
  c->r[4]=c->r[1]+0x00000008u; // 800B61C8
  {uint32_t ea=c->r[7]+0xFFFFF5CCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800B61CC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B61D0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B61D4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B61D8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B61DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B61E0
  c->lr=0x800B61E8u; f_800B5D34(c); // 800B61E4
L_800B61E8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B61E8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800B61EC
  c->lr=c->r[0]; // 800B61F0
  c->r[1]=c->r[1]+0x00000030u; // 800B61F4
  return; // 800B61F8
}

// fn_800B61FC
void f_800B61FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B61FC
  c->r[0]=c->lr; // 800B6200
  c->r[5]=c->r[3]|c->r[3]; // 800B6204
  c->r[3]=c->r[4]|c->r[4]; // 800B6208
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B620C
  c->r[4]=R32(c->r[5]+0x00000394u); // 800B6210
  c->r[5]=0u+0x00000000u; // 800B6214
  c->lr=0x800B621Cu; f_80250BF4(c); // 800B6218
  c->r[0]=cntlz(c->r[3]); // 800B621C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B6220
  c->r[3]=0u-c->r[0]; // 800B6224
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6228
  c->lr=c->r[0]; // 800B622C
  c->r[1]=c->r[1]+0x00000010u; // 800B6230
  return; // 800B6234
}

// fn_800B6238
void f_800B6238(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6238
  c->r[0]=c->lr; // 800B623C
  c->r[5]=0u+0x80620000u; // 800B6240
  c->r[4]=0u+0x00000002u; // 800B6244
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B6248
  c->r[5]=c->r[5]+0x00007688u; // 800B624C
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800B6250
  W32(c->r[1]+0x00000088u,c->r[30]); // 800B6254
  c->r[30]=c->r[3]|c->r[3]; // 800B6258
  c->r[3]=R32(c->r[5]+0x00000014u); // 800B625C
  c->lr=0x800B6264u; f_80037670(c); // 800B6260
  cmps(c,0,(int32_t)c->r[3],0); // 800B6264
  if (!crb(c,2)) { goto L_800B62D0; } // 800B6268
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B626C
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B6270
  cmps(c,0,(int32_t)c->r[0],0); // 800B6274
  if (!crb(c,2)) { goto L_800B62D0; } // 800B6278
  {uint32_t ea=c->r[2]+0xFFFF9AFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B627C
  c->r[3]=c->r[1]+0x00000008u; // 800B6280
  {uint32_t ea=c->r[2]+0xFFFF9B00u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6284
  c->r[4]=c->r[30]+0x0000002Cu; // 800B6288
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 800B628C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800B6290
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B6294
  c->lr=0x800B629Cu; f_800361A0(c); // 800B6298
  c->r[31]=0u+0x80550000u; // 800B629C
  c->r[5]=c->r[30]|c->r[30]; // 800B62A0
  c->r[31]=c->r[31]+0x00003D60u; // 800B62A4
  c->r[6]=c->r[1]+0x00000008u; // 800B62A8
  c->r[3]=c->r[31]+0x00000010u; // 800B62AC
  c->r[7]=c->r[1]+0x00000014u; // 800B62B0
  c->r[8]=c->r[30]+0x00000060u; // 800B62B4
  c->r[9]=c->r[1]+0x00000020u; // 800B62B8
  c->r[4]=0u+0x00000106u; // 800B62BC
  c->lr=0x800B62C4u; f_80226578(c); // 800B62C0
  c->r[3]=c->r[31]+0x00000010u; // 800B62C4
  c->r[4]=c->r[1]+0x00000020u; // 800B62C8
  c->lr=0x800B62D0u; f_80226D68(c); // 800B62CC
L_800B62D0:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800B62D0
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800B62D4
  c->r[30]=R32(c->r[1]+0x00000088u); // 800B62D8
  c->lr=c->r[0]; // 800B62DC
  c->r[1]=c->r[1]+0x00000090u; // 800B62E0
  return; // 800B62E4
}

// fn_800B62E8
void f_800B62E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B62E8
  c->r[0]=c->lr; // 800B62EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B62F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B62F4
  c->r[31]=c->r[3]|c->r[3]; // 800B62F8
  c->r[3]=c->r[3]+0x00000210u; // 800B62FC
  c->lr=0x800B6304u; f_8004BAD4(c); // 800B6300
  cmps(c,0,(int32_t)c->r[3],0); // 800B6304
  if (crb(c,2)) { goto L_800B638C; } // 800B6308
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B630C
  c->r[4]=c->r[31]|c->r[31]; // 800B6310
  c->r[3]=c->r[31]+0x00000210u; // 800B6314
  c->r[0]=c->r[0]|0xAA800000u; // 800B6318
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B631C
  c->lr=0x800B6324u; f_80043E44(c); // 800B6320
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6324
  c->r[3]=c->r[31]+0x00000210u; // 800B6328
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B632C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B6330
  c->lr=0x800B6338u; f_80043E34(c); // 800B6334
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6338
  c->r[4]=0u+0x803A0000u; // 800B633C
  c->r[4]=c->r[4]+0xFFFFCDF0u; // 800B6340
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B6344
  c->r[4]=c->r[4]+0x0000000Du; // 800B6348
  c->lr=0x800B6350u; f_80256EC4(c); // 800B634C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B6350
  c->r[5]=c->r[3]|c->r[3]; // 800B6354
  c->r[3]=c->r[31]+0x00000210u; // 800B6358
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800B635C
  c->lr=0x800B6364u; f_8004BAC8(c); // 800B6360
  {uint32_t ea=c->r[2]+0xFFFF9B04u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6364
  c->r[3]=c->r[31]+0x00000210u; // 800B6368
  c->f[2]=c->f[1]; // 800B636C
  c->f[3]=c->f[1]; // 800B6370
  c->lr=0x800B6378u; f_80043E24(c); // 800B6374
  {uint32_t ea=c->r[2]+0xFFFF9AE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6378
  c->r[3]=c->r[31]+0x00000210u; // 800B637C
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6380
  c->f[3]=c->f[1]; // 800B6384
  c->lr=0x800B638Cu; f_8005D58C(c); // 800B6388
L_800B638C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B638C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6390
  c->lr=c->r[0]; // 800B6394
  c->r[1]=c->r[1]+0x00000010u; // 800B6398
  return; // 800B639C
}

// fn_800B63A0
void f_800B63A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B63A0
  c->r[0]=c->lr; // 800B63A4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B63A8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800B63AC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800B63B0
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800B63B4
  c->r[31]=0u+0x803A0000u; // 800B63B8
  c->r[31]=c->r[31]+0xFFFFCD68u; // 800B63BC
  W32(c->r[1]+0x00000078u,c->r[30]); // 800B63C0
  c->r[30]=c->r[3]|c->r[3]; // 800B63C4
  c->r[3]=c->r[3]+0x00000210u; // 800B63C8
  c->lr=0x800B63D0u; f_80221698(c); // 800B63CC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B63D0
  cmps(c,0,(int32_t)c->r[3],0); // 800B63D4
  if (crb(c,2)) { goto L_800B63F8; } // 800B63D8
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B63DC
  cmps(c,0,(int32_t)c->r[0],0); // 800B63E0
  if (crb(c,2)) { goto L_800B63F8; } // 800B63E4
  c->r[0]=R32(c->r[30]+0x00000210u); // 800B63E8
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800B63EC
  W32(c->r[30]+0x00000210u,c->r[0]); // 800B63F0
  goto L_800B6634; // 800B63F4
L_800B63F8:;
  c->r[0]=R32(c->r[30]+0x00000210u); // 800B63F8
  c->r[7]=c->r[31]+0x0000003Cu; // 800B63FC
  c->r[6]=c->r[31]+0x00000048u; // 800B6400
  c->r[3]=c->r[1]+0x00000020u; // 800B6404
  c->r[0]=c->r[0]|0x80000000u; // 800B6408
  c->r[4]=c->r[1]+0x00000014u; // 800B640C
  W32(c->r[30]+0x00000210u,c->r[0]); // 800B6410
  c->r[5]=c->r[1]+0x00000038u; // 800B6414
  c->r[11]=R32(c->r[31]+0x0000003Cu); // 800B6418
  c->r[10]=R32(c->r[7]+0x00000004u); // 800B641C
  c->r[9]=R32(c->r[7]+0x00000008u); // 800B6420
  c->r[8]=R32(c->r[31]+0x00000048u); // 800B6424
  c->r[7]=R32(c->r[6]+0x00000004u); // 800B6428
  c->r[0]=R32(c->r[6]+0x00000008u); // 800B642C
  W32(c->r[1]+0x00000020u,c->r[11]); // 800B6430
  W32(c->r[1]+0x00000024u,c->r[10]); // 800B6434
  {uint32_t ea=c->r[1]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B6438
  W32(c->r[1]+0x00000028u,c->r[9]); // 800B643C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B6440
  W32(c->r[1]+0x00000014u,c->r[8]); // 800B6444
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B6448
  W32(c->r[1]+0x00000018u,c->r[7]); // 800B644C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B6450
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B6454
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6458
  c->r[6]=R32(c->r[30]+0x00000394u); // 800B645C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6460
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6464
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 800B6468
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800B646C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800B6470
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6474
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800B6478
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800B647C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800B6480
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6484
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800B6488
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800B648C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800B6490
  {uint32_t ea=c->r[6]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6494
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800B6498
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800B649C
  c->r[6]=R32(c->r[30]+0x00000394u); // 800B64A0
  {uint32_t ea=c->r[6]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B64A4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800B64A8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800B64AC
  c->r[6]=R32(c->r[30]+0x00000394u); // 800B64B0
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B64B4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B64B8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B64BC
  c->lr=0x800B64C4u; f_80296A70(c); // 800B64C0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B64C4
  c->r[4]=0u+0x803A0000u; // 800B64C8
  c->r[4]=c->r[4]+0xFFFFCDF0u; // 800B64CC
  c->r[5]=c->r[1]+0x00000048u; // 800B64D0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B64D4
  c->r[4]=c->r[4]+0x0000000Du; // 800B64D8
  c->r[6]=0u+0x00000001u; // 800B64DC
  c->lr=0x800B64E4u; f_80257018(c); // 800B64E0
  c->r[4]=c->r[1]+0x00000020u; // 800B64E4
  c->r[3]=c->r[1]+0x00000048u; // 800B64E8
  c->r[5]=c->r[4]|c->r[4]; // 800B64EC
  c->lr=0x800B64F4u; f_80296750(c); // 800B64F0
  c->r[4]=c->r[1]+0x00000014u; // 800B64F4
  c->r[3]=c->r[1]+0x00000048u; // 800B64F8
  c->r[5]=c->r[4]|c->r[4]; // 800B64FC
  c->lr=0x800B6504u; f_80296750(c); // 800B6500
  c->r[3]=c->r[1]+0x00000020u; // 800B6504
  c->r[4]=c->r[1]+0x00000014u; // 800B6508
  c->r[5]=c->r[1]+0x0000002Cu; // 800B650C
  c->lr=0x800B6514u; f_80296A70(c); // 800B6510
  c->r[4]=c->r[31]+0x00000054u; // 800B6514
  {uint32_t ea=c->r[2]+0xFFFF9AE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6518
  c->r[6]=R32(c->r[31]+0x00000054u); // 800B651C
  c->r[3]=c->r[1]+0x00000038u; // 800B6520
  c->r[5]=R32(c->r[4]+0x00000004u); // 800B6524
  c->r[0]=R32(c->r[4]+0x00000008u); // 800B6528
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800B652C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B6530
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B6534
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B6538
  c->lr=0x800B6540u; f_80296B0C(c); // 800B653C
  {uint32_t ea=c->r[2]+0xFFFF9AE0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B6540
  fcmp(c,0,c->f[3],c->f[1]); // 800B6544
  if (crb(c,2)) { goto L_800B65B8; } // 800B6548
  c->r[3]=c->r[1]+0x00000038u; // 800B654C
  c->lr=0x800B6554u; f_80296B0C(c); // 800B6550
  c->f[31]=c->f[1]; // 800B6554
  c->r[3]=c->r[1]+0x0000002Cu; // 800B6558
  c->lr=0x800B6560u; f_80296B0C(c); // 800B655C
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[31]); // 800B6560
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6564
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6568
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B656C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800B6570
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800B6574
  c->lr=0x800B657Cu; f_8005C22C(c); // 800B6578
  {uint32_t ea=c->r[2]+0xFFFF9AE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B657C
  fcmp(c,0,c->f[1],c->f[0]); // 800B6580
  if (!crb(c,1)) { goto L_800B659C; } // 800B6584
  {uint32_t ea=c->r[2]+0xFFFF9B08u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6588
  {uint32_t ea=c->r[2]+0xFFFF9B0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B658C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800B6590
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 800B6594
  goto L_800B65C8; // 800B6598
L_800B659C:;
  {uint32_t ea=c->r[2]+0xFFFF9B08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B659C
  {uint32_t ea=c->r[2]+0xFFFF9B0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B65A0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800B65A4
  {uint32_t ea=c->r[2]+0xFFFF9B10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B65A8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800B65AC
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 800B65B0
  goto L_800B65C8; // 800B65B4
L_800B65B8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B65B8
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B65BC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800B65C0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800B65C4
L_800B65C8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B65C8
  {uint32_t ea=c->r[2]+0xFFFF9B14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B65CC
  fcmp(c,0,c->f[1],c->f[0]); // 800B65D0
  if (!crb(c,0)) { goto L_800B65DC; } // 800B65D4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800B65D8
L_800B65DC:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B65DC
  c->r[3]=c->r[30]+0x00000210u; // 800B65E0
  {uint32_t ea=c->r[2]+0xFFFF9AE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B65E4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B65E8
  {uint32_t ea=c->r[4]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B65EC
  c->f[3]=c->f[1]; // 800B65F0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800B65F4
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[0]); // 800B65F8
  {uint32_t ea=c->r[4]+0x00000078u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B65FC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B6600
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6604
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 800B6608
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[7]);} // 800B660C
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800B6610
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 800B6614
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800B6618
  c->lr=0x800B6620u; f_8005D58C(c); // 800B661C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6620
  c->r[3]=c->r[30]+0x00000210u; // 800B6624
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6628
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B662C
  c->lr=0x800B6634u; f_80043E24(c); // 800B6630
L_800B6634:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800B6634
  c->r[0]=R32(c->r[1]+0x00000094u); // 800B6638
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800B663C
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800B6640
  c->r[30]=R32(c->r[1]+0x00000078u); // 800B6644
  c->lr=c->r[0]; // 800B6648
  c->r[1]=c->r[1]+0x00000090u; // 800B664C
  return; // 800B6650
}

// fn_800B6654
void f_800B6654(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6654
  c->r[0]=c->lr; // 800B6658
  cmps(c,0,(int32_t)c->r[3],0); // 800B665C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6660
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6664
  c->r[31]=c->r[4]|c->r[4]; // 800B6668
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B666C
  c->r[30]=c->r[3]|c->r[3]; // 800B6670
  if (crb(c,2)) { goto L_800B6690; } // 800B6674
  c->r[4]=0u+0x00000000u; // 800B6678
  c->lr=0x800B6680u; f_8026A06C(c); // 800B667C
  cmps(c,0,(int32_t)c->r[31],0); // 800B6680
  if (!crb(c,1)) { goto L_800B6690; } // 800B6684
  c->r[3]=c->r[30]|c->r[30]; // 800B6688
  c->lr=0x800B6690u; f_8026A268(c); // 800B668C
L_800B6690:;
  c->r[3]=c->r[30]|c->r[30]; // 800B6690
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6694
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B6698
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B669C
  c->lr=c->r[0]; // 800B66A0
  c->r[1]=c->r[1]+0x00000010u; // 800B66A4
  return; // 800B66A8
}

// fn_800B66AC
void f_800B66AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B66AC
  c->r[0]=c->lr; // 800B66B0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B66B4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800B66B8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800B66BC
  c->r[4]=0u+0x00000000u; // 800B66C0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800B66C4
  c->r[31]=c->r[3]|c->r[3]; // 800B66C8
  W32(c->r[1]+0x00000028u,c->r[30]); // 800B66CC
  W32(c->r[1]+0x00000024u,c->r[29]); // 800B66D0
  c->lr=0x800B66D8u; f_801F57D0(c); // 800B66D4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B66D8
  c->r[3]=c->r[31]|c->r[31]; // 800B66DC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800B66E0
  c->ctr=c->r[12]; // 800B66E4
  if (true) { c->lr=0x800B66ECu; dispatch(c,c->ctr); } // 800B66E8
  c->r[3]=c->r[31]|c->r[31]; // 800B66EC
  c->lr=0x800B66F4u; f_801F4B94(c); // 800B66F0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B66F4
  c->r[5]=0u+0x00000003u; // 800B66F8
  {uint32_t ea=c->r[2]+0xFFFF9B20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B66FC
  c->r[4]=0u+0x00000016u; // 800B6700
  c->r[0]=c->r[0]|0x00000804u; // 800B6704
  c->r[3]=0u+0x80550000u; // 800B6708
  W8(c->r[31]+0x0000006Cu,c->r[5]); // 800B670C
  c->f[3]=c->f[1]; // 800B6710
  {uint32_t ea=c->r[31]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B6714
  c->r[3]=c->r[3]+0x00003D60u; // 800B6718
  W8(c->r[31]+0x0000006Du,c->r[4]); // 800B671C
  c->r[4]=c->r[31]+0x0000002Cu; // 800B6720
  {uint32_t ea=c->r[2]+0xFFFF9B24u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6724
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800B6728
  c->r[5]=c->r[31]+0x00000030u; // 800B672C
  c->r[6]=0u+0x00000000u; // 800B6730
  c->r[7]=0u+0x00000000u; // 800B6734
  c->lr=0x800B673Cu; f_801D5488(c); // 800B6738
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B673C
  c->r[3]=c->r[31]|c->r[31]; // 800B6740
  c->lr=0x800B6748u; f_801F58BC(c); // 800B6744
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6748
  c->r[29]=0u+0x00000001u; // 800B674C
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800B6750
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6754
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6758
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800B675C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B6760
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800B6764
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B6768
  c->lr=0x800B6770u; f_802501B0(c); // 800B676C
  c->r[3]=0u+0x805D0000u; // 800B6770
  c->r[4]=c->r[31]+0x0000002Cu; // 800B6774
  c->r[3]=c->r[3]+0x000078B0u; // 800B6778
  c->lr=0x800B6780u; f_802351CC(c); // 800B677C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B6780
  c->r[30]=0u+0x803A0000u; // 800B6784
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800B6788
  c->r[4]=c->r[30]+0xFFFFCE14u; // 800B678C
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800B6790
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6794
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B6798
  c->lr=0x800B67A0u; f_80256EC4(c); // 800B679C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B67A0
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800B67A4
  c->r[3]=c->r[31]|c->r[31]; // 800B67A8
  c->lr=0x800B67B0u; f_801F56F4(c); // 800B67AC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B67B0
  c->r[3]=c->r[31]|c->r[31]; // 800B67B4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B67B8
  c->ctr=c->r[12]; // 800B67BC
  if (true) { c->lr=0x800B67C4u; dispatch(c,c->ctr); } // 800B67C0
  c->r[4]=c->r[30]+0xFFFFCE14u; // 800B67C4
  c->r[30]=0u+0x80550000u; // 800B67C8
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B67CC
  c->r[5]=0u+0x00000000u; // 800B67D0
  c->r[4]=c->r[4]+0x00000009u; // 800B67D4
  c->r[6]=0u+0x00000000u; // 800B67D8
  c->lr=0x800B67E0u; f_8018D3E4(c); // 800B67DC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800B67E0
  W8(c->r[31]+0x00000078u,c->r[3]); // 800B67E4
  cmpu(c,0,c->r[0],0x000000FFu); // 800B67E8
  if (crb(c,2)) { goto L_800B6834; } // 800B67EC
  c->r[4]=R32(c->r[31]+0x00000060u); // 800B67F0
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B67F4
  c->r[0]=R32(c->r[31]+0x00000064u); // 800B67F8
  c->r[5]=c->r[1]+0x00000014u; // 800B67FC
  c->r[6]=c->r[1]+0x00000008u; // 800B6800
  W32(c->r[1]+0x00000008u,c->r[4]); // 800B6804
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B6808
  c->r[0]=R32(c->r[31]+0x00000068u); // 800B680C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B6810
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800B6814
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B6818
  W32(c->r[1]+0x00000014u,c->r[4]); // 800B681C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800B6820
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B6824
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B6828
  c->r[4]=R8(c->r[31]+0x00000078u); // 800B682C
  c->lr=0x800B6834u; f_8018DBD0(c); // 800B6830
L_800B6834:;
  c->r[3]=c->r[31]|c->r[31]; // 800B6834
  c->lr=0x800B683Cu; f_800B72E0(c); // 800B6838
  c->r[0]=0u+0x00000001u; // 800B683C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 800B6840
  W32(c->r[31]+0x00000444u,c->r[0]); // 800B6844
  c->lr=0x800B684Cu; f_8024E174(c); // 800B6848
  W32(c->r[31]+0x00000438u,c->r[3]); // 800B684C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800B6850
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800B6854
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800B6858
  c->r[30]=R32(c->r[1]+0x00000028u); // 800B685C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800B6860
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B6864
  c->lr=c->r[0]; // 800B6868
  c->r[1]=c->r[1]+0x00000040u; // 800B686C
  return; // 800B6870
}

// fn_800B6874
void f_800B6874(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6874
  c->r[0]=c->lr; // 800B6878
  c->r[4]=0u+0x00000000u; // 800B687C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B6880
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800B6884
  c->r[31]=c->r[3]|c->r[3]; // 800B6888
  W32(c->r[1]+0x00000068u,c->r[30]); // 800B688C
  c->lr=0x800B6894u; f_800453A4(c); // 800B6890
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 800B6894
  if (crb(c,2)) { goto L_800B68B4; } // 800B6898
  c->r[3]=c->r[31]|c->r[31]; // 800B689C
  c->r[4]=0u+0x00000004u; // 800B68A0
  c->r[5]=0u+0x00000003u; // 800B68A4
  c->r[6]=0u+0x00000001u; // 800B68A8
  c->r[7]=0u+0x00000001u; // 800B68AC
  c->lr=0x800B68B4u; f_8017900C(c); // 800B68B0
L_800B68B4:;
  c->r[30]=0u+0x805D0000u; // 800B68B4
  c->r[3]=c->r[30]+0x00003F6Cu; // 800B68B8
  c->lr=0x800B68C0u; f_80045264(c); // 800B68BC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800B68C0
  cmpu(c,0,c->r[0],0x00000009u); // 800B68C4
  if (!crb(c,2)) { goto L_800B6904; } // 800B68C8
  c->r[3]=c->r[30]+0x00003F6Cu; // 800B68CC
  c->lr=0x800B68D4u; f_80037AF0(c); // 800B68D0
  cmpu(c,0,c->r[3],c->r[31]); // 800B68D4
  if (!crb(c,2)) { goto L_800B6904; } // 800B68D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000003BCu); // 800B68DC
  cmps(c,0,(int32_t)c->r[0],101); // 800B68E0
  if (crb(c,2)) { goto L_800B6904; } // 800B68E4
  {uint32_t ea=c->r[2]+0xFFFF9B20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B68E8
  c->r[3]=c->r[31]|c->r[31]; // 800B68EC
  c->r[4]=0u+0x00000065u; // 800B68F0
  c->r[5]=0u+0x00000000u; // 800B68F4
  c->r[6]=0u+0x00000000u; // 800B68F8
  c->r[7]=0u+0x00000000u; // 800B68FC
  c->lr=0x800B6904u; f_801F4D44(c); // 800B6900
L_800B6904:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B6904
  c->r[3]=c->r[31]|c->r[31]; // 800B6908
  c->r[12]=R32(c->r[12]+0x00000068u); // 800B690C
  c->ctr=c->r[12]; // 800B6910
  if (true) { c->lr=0x800B6918u; dispatch(c,c->ctr); } // 800B6914
  c->r[3]=c->r[31]|c->r[31]; // 800B6918
  c->lr=0x800B6920u; f_801F4C0C(c); // 800B691C
  c->r[3]=c->r[31]|c->r[31]; // 800B6920
  c->lr=0x800B6928u; f_800B7238(c); // 800B6924
  c->r[3]=c->r[31]|c->r[31]; // 800B6928
  c->r[4]=0u+0x00000000u; // 800B692C
  c->lr=0x800B6934u; f_800453A4(c); // 800B6930
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 800B6934
  if (crb(c,2)) { goto L_800B695C; } // 800B6938
  c->r[3]=0u+0x805D0000u; // 800B693C
  c->r[4]=0u+0x00000002u; // 800B6940
  c->r[3]=c->r[3]+0x00006D70u; // 800B6944
  c->r[5]=0u+0x00000014u; // 800B6948
  c->r[6]=0u+0x00000000u; // 800B694C
  c->r[7]=0u+0x00000000u; // 800B6950
  c->r[8]=0u+0x00000000u; // 800B6954
  c->lr=0x800B695Cu; f_8022AC00(c); // 800B6958
L_800B695C:;
  c->r[3]=c->r[31]|c->r[31]; // 800B695C
  c->lr=0x800B6964u; f_801F56F4(c); // 800B6960
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6964
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B6968
  cmps(c,0,(int32_t)c->r[0],0); // 800B696C
  if (crb(c,2)) { goto L_800B69D8; } // 800B6970
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800B6974
  cmps(c,0,(int32_t)c->r[0],0); // 800B6978
  if (crb(c,2)) { goto L_800B69D8; } // 800B697C
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B6980
  cmps(c,0,(int32_t)c->r[0],0); // 800B6984
  if (crb(c,2)) { goto L_800B69A4; } // 800B6988
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800B698C
  cmps(c,0,(int32_t)c->r[0],0); // 800B6990
  if (!crb(c,2)) { goto L_800B69A4; } // 800B6994
  c->r[4]=c->r[3]+0x000000B0u; // 800B6998
  c->lr=0x800B69A0u; f_80250F18(c); // 800B699C
  goto L_800B69C0; // 800B69A0
L_800B69A4:;
  c->r[3]=c->r[3]+0x0000005Cu; // 800B69A4
  c->r[4]=c->r[31]+0x0000002Cu; // 800B69A8
  c->lr=0x800B69B0u; f_800361A0(c); // 800B69AC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B69B0
  c->r[4]=c->r[31]+0x00000060u; // 800B69B4
  c->r[3]=c->r[3]+0x00000068u; // 800B69B8
  c->lr=0x800B69C0u; f_800361A0(c); // 800B69BC
L_800B69C0:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B69C0
  c->r[3]=c->r[31]|c->r[31]; // 800B69C4
  c->lr=0x800B69CCu; f_801F58FC(c); // 800B69C8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B69CC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B69D0
  c->lr=0x800B69D8u; f_8025037C(c); // 800B69D4
L_800B69D8:;
  c->r[0]=R8(c->r[31]+0x00000078u); // 800B69D8
  cmpu(c,0,c->r[0],0x000000FFu); // 800B69DC
  if (crb(c,2)) { goto L_800B6AC4; } // 800B69E0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B69E4
  c->r[0]=0u+0x00000000u; // 800B69E8
  c->r[4]=0u+0x803A0000u; // 800B69EC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800B69F0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B69F4
  c->r[4]=c->r[4]+0xFFFFCE14u; // 800B69F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B69FC
  c->r[5]=c->r[1]+0x00000038u; // 800B6A00
  c->r[6]=0u+0x00000001u; // 800B6A04
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B6A08
  c->lr=0x800B6A10u; f_80257018(c); // 800B6A0C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6A10
  c->r[30]=0u+0x80550000u; // 800B6A14
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6A18
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B6A1C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6A20
  c->r[5]=c->r[1]+0x00000014u; // 800B6A24
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 800B6A28
  c->r[6]=c->r[1]+0x00000008u; // 800B6A2C
  c->r[10]=R32(c->r[1]+0x00000020u); // 800B6A30
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800B6A34
  c->r[9]=R32(c->r[1]+0x00000024u); // 800B6A38
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800B6A3C
  c->r[8]=R32(c->r[1]+0x00000028u); // 800B6A40
  c->r[7]=R32(c->r[1]+0x0000002Cu); // 800B6A44
  c->r[4]=R32(c->r[1]+0x00000030u); // 800B6A48
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B6A4C
  W32(c->r[1]+0x00000008u,c->r[10]); // 800B6A50
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 800B6A54
  W32(c->r[1]+0x00000010u,c->r[8]); // 800B6A58
  W32(c->r[1]+0x00000014u,c->r[7]); // 800B6A5C
  W32(c->r[1]+0x00000018u,c->r[4]); // 800B6A60
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B6A64
  c->r[4]=R8(c->r[31]+0x00000078u); // 800B6A68
  c->lr=0x800B6A70u; f_8018DBD0(c); // 800B6A6C
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800B6A70
  cmps(c,0,(int32_t)c->r[0],0); // 800B6A74
  if (!crb(c,2)) { goto L_800B6A90; } // 800B6A78
  c->r[4]=R8(c->r[31]+0x00000078u); // 800B6A7C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B6A80
  c->r[5]=0u+0x00000001u; // 800B6A84
  c->lr=0x800B6A8Cu; f_8018E2D4(c); // 800B6A88
  goto L_800B6AC4; // 800B6A8C
L_800B6A90:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6A90
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800B6A94
  cmps(c,0,(int32_t)c->r[0],0); // 800B6A98
  if (!crb(c,2)) { goto L_800B6AB4; } // 800B6A9C
  c->r[4]=R8(c->r[31]+0x00000078u); // 800B6AA0
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B6AA4
  c->r[5]=0u+0x00000001u; // 800B6AA8
  c->lr=0x800B6AB0u; f_8018E2D4(c); // 800B6AAC
  goto L_800B6AC4; // 800B6AB0
L_800B6AB4:;
  c->r[4]=R8(c->r[31]+0x00000078u); // 800B6AB4
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B6AB8
  c->r[5]=0u+0x00000000u; // 800B6ABC
  c->lr=0x800B6AC4u; f_8018E2D4(c); // 800B6AC0
L_800B6AC4:;
  c->r[3]=c->r[31]|c->r[31]; // 800B6AC4
  c->lr=0x800B6ACCu; f_800B7384(c); // 800B6AC8
  c->r[0]=R32(c->r[1]+0x00000074u); // 800B6ACC
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800B6AD0
  c->r[30]=R32(c->r[1]+0x00000068u); // 800B6AD4
  c->lr=c->r[0]; // 800B6AD8
  c->r[1]=c->r[1]+0x00000070u; // 800B6ADC
  return; // 800B6AE0
}

// fn_800B6AE4
void f_800B6AE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6AE4
  c->r[0]=c->lr; // 800B6AE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6AEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6AF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B6AF4
  c->r[30]=c->r[3]|c->r[3]; // 800B6AF8
  c->r[4]=R16(c->r[3]+0x000003BEu); // 800B6AFC
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 800B6B00
  if (crb(c,2)) { goto L_800B6B48; } // 800B6B04
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 800B6B08
  if (crb(c,2)) { goto L_800B6B48; } // 800B6B0C
  c->r[31]=0u+0x80620000u; // 800B6B10
  c->r[31]=c->r[31]+0x00007688u; // 800B6B14
  c->r[3]=R32(c->r[31]+0x00000014u); // 800B6B18
  cmps(c,0,(int32_t)c->r[3],0); // 800B6B1C
  if (crb(c,2)) { goto L_800B6B48; } // 800B6B20
  c->r[4]=0u+0x0000002Au; // 800B6B24
  c->lr=0x800B6B2Cu; f_80037670(c); // 800B6B28
  cmps(c,0,(int32_t)c->r[3],0); // 800B6B2C
  if (!crb(c,2)) { goto L_800B6B60; } // 800B6B30
  c->r[3]=R32(c->r[31]+0x00000014u); // 800B6B34
  c->r[4]=0u+0x0000002Du; // 800B6B38
  c->lr=0x800B6B40u; f_80037670(c); // 800B6B3C
  cmps(c,0,(int32_t)c->r[3],0); // 800B6B40
  if (!crb(c,2)) { goto L_800B6B60; } // 800B6B44
L_800B6B48:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B6B48
  c->r[3]=c->r[30]|c->r[30]; // 800B6B4C
  c->r[12]=R32(c->r[12]+0x00000020u); // 800B6B50
  c->ctr=c->r[12]; // 800B6B54
  if (true) { c->lr=0x800B6B5Cu; dispatch(c,c->ctr); } // 800B6B58
  goto L_800B6B7C; // 800B6B5C
L_800B6B60:;
  c->r[4]=R8(c->r[30]+0x00000078u); // 800B6B60
  cmpu(c,0,c->r[4],0x000000FFu); // 800B6B64
  if (crb(c,2)) { goto L_800B6B7C; } // 800B6B68
  c->r[3]=0u+0x80550000u; // 800B6B6C
  c->r[5]=0u+0x00000001u; // 800B6B70
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B6B74
  c->lr=0x800B6B7Cu; f_8018E2D4(c); // 800B6B78
L_800B6B7C:;
  c->r[31]=0u+0x80620000u; // 800B6B7C
  c->r[31]=c->r[31]+0x00007688u; // 800B6B80
  c->r[3]=R32(c->r[31]+0x00000014u); // 800B6B84
  cmps(c,0,(int32_t)c->r[3],0); // 800B6B88
  if (crb(c,2)) { goto L_800B6BB4; } // 800B6B8C
  c->r[4]=0u+0x0000002Au; // 800B6B90
  c->lr=0x800B6B98u; f_80037670(c); // 800B6B94
  cmps(c,0,(int32_t)c->r[3],0); // 800B6B98
  if (!crb(c,2)) { goto L_800B6BB4; } // 800B6B9C
  c->r[3]=R32(c->r[31]+0x00000014u); // 800B6BA0
  c->r[4]=0u+0x0000002Du; // 800B6BA4
  c->lr=0x800B6BACu; f_80037670(c); // 800B6BA8
  cmps(c,0,(int32_t)c->r[3],0); // 800B6BAC
  if (crb(c,2)) { goto L_800B6BD0; } // 800B6BB0
L_800B6BB4:;
  c->r[4]=R8(c->r[30]+0x00000078u); // 800B6BB4
  cmpu(c,0,c->r[4],0x000000FFu); // 800B6BB8
  if (crb(c,2)) { goto L_800B6BD0; } // 800B6BBC
  c->r[3]=0u+0x80550000u; // 800B6BC0
  c->r[5]=0u+0x00000001u; // 800B6BC4
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B6BC8
  c->lr=0x800B6BD0u; f_8018E2D4(c); // 800B6BCC
L_800B6BD0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6BD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6BD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B6BD8
  c->lr=c->r[0]; // 800B6BDC
  c->r[1]=c->r[1]+0x00000010u; // 800B6BE0
  return; // 800B6BE4
}

// fn_800B6BE8
void f_800B6BE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6BE8
  c->r[0]=c->lr; // 800B6BEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6BF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6BF4
  c->r[31]=c->r[3]|c->r[3]; // 800B6BF8
  c->r[4]=R8(c->r[3]+0x00000078u); // 800B6BFC
  cmpu(c,0,c->r[4],0x000000FFu); // 800B6C00
  if (crb(c,2)) { goto L_800B6C14; } // 800B6C04
  c->r[3]=0u+0x80550000u; // 800B6C08
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B6C0C
  c->lr=0x800B6C14u; f_8018D694(c); // 800B6C10
L_800B6C14:;
  c->r[3]=c->r[31]|c->r[31]; // 800B6C14
  c->lr=0x800B6C1Cu; f_801F4C78(c); // 800B6C18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6C1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6C20
  c->lr=c->r[0]; // 800B6C24
  c->r[1]=c->r[1]+0x00000010u; // 800B6C28
  return; // 800B6C2C
}

// fn_800B6C30
void f_800B6C30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6C30
  c->r[0]=c->lr; // 800B6C34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B6C38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B6C3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B6C40
  c->r[30]=c->r[3]|c->r[3]; // 800B6C44
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B6C48
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B6C4C
  c->lr=0x800B6C54u; f_802501B0(c); // 800B6C50
  c->r[3]=c->r[30]|c->r[30]; // 800B6C54
  c->r[4]=0u+0x00000000u; // 800B6C58
  c->lr=0x800B6C60u; f_801F5244(c); // 800B6C5C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B6C60
  c->r[3]=c->r[30]+0x0000002Cu; // 800B6C64
  c->r[4]=c->r[4]+0x0000005Cu; // 800B6C68
  c->lr=0x800B6C70u; f_800361A0(c); // 800B6C6C
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B6C70
  c->r[3]=c->r[30]|c->r[30]; // 800B6C74
  c->lr=0x800B6C7Cu; f_801F5418(c); // 800B6C78
  cmps(c,0,(int32_t)c->r[3],0); // 800B6C7C
  if (!crb(c,0)) { goto L_800B6CC4; } // 800B6C80
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800B6C84
  c->r[0]=0u+0x00000064u; // 800B6C88
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B6C8C
  c->r[7]=0u+0x803D0000u; // 800B6C90
  c->r[0]=c->r[3]|0x00000080u; // 800B6C94
  c->r[3]=c->r[30]|c->r[30]; // 800B6C98
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B6C9C
  c->r[4]=c->r[1]+0x00000008u; // 800B6CA0
  {uint32_t ea=c->r[7]+0xFFFFF670u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B6CA4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B6CA8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B6CAC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B6CB0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B6CB4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B6CB8
  c->lr=0x800B6CC0u; f_800B6D10(c); // 800B6CBC
  goto L_800B6CF8; // 800B6CC0
L_800B6CC4:;
  c->r[31]=0u+0x805D0000u; // 800B6CC4
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B6CC8
  c->lr=0x800B6CD0u; f_800447E4(c); // 800B6CCC
  cmpu(c,0,c->r[3],0x00000001u); // 800B6CD0
  if (!crb(c,2)) { goto L_800B6CE4; } // 800B6CD4
  c->r[0]=0u+0x00000000u; // 800B6CD8
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800B6CDC
  goto L_800B6CF0; // 800B6CE0
L_800B6CE4:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B6CE4
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800B6CE8
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800B6CEC
L_800B6CF0:;
  c->r[3]=c->r[30]|c->r[30]; // 800B6CF0
  c->lr=0x800B6CF8u; f_801F5B14(c); // 800B6CF4
L_800B6CF8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B6CF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B6CFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B6D00
  c->lr=c->r[0]; // 800B6D04
  c->r[1]=c->r[1]+0x00000020u; // 800B6D08
  return; // 800B6D0C
}

// fn_800B6D10
void f_800B6D10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6D10
  c->r[0]=c->lr; // 800B6D14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6D18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6D1C
  c->r[31]=c->r[4]|c->r[4]; // 800B6D20
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B6D24
  c->r[30]=c->r[3]|c->r[3]; // 800B6D28
  c->r[3]=c->r[31]|c->r[31]; // 800B6D2C
  c->lr=0x800B6D34u; f_802B9FDC(c); // 800B6D30
  cmps(c,0,(int32_t)c->r[3],0); // 800B6D34
  if (crb(c,2)) { goto L_800B6D54; } // 800B6D38
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B6D3C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B6D40
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B6D44
  W32(c->r[30]+0x00000020u,c->r[0]); // 800B6D48
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B6D4C
  W32(c->r[30]+0x00000024u,c->r[0]); // 800B6D50
L_800B6D54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6D54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6D58
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B6D5C
  c->lr=c->r[0]; // 800B6D60
  c->r[1]=c->r[1]+0x00000010u; // 800B6D64
  return; // 800B6D68
}

// fn_800B6D6C
void f_800B6D6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6D6C
  c->r[0]=c->lr; // 800B6D70
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B6D74
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800B6D78
  c->r[31]=c->r[3]|c->r[3]; // 800B6D7C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B6D80
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B6D84
  c->lr=0x800B6D8Cu; f_802501B0(c); // 800B6D88
  c->r[3]=c->r[31]+0x00000038u; // 800B6D8C
  c->r[4]=c->r[31]+0x0000002Cu; // 800B6D90
  c->lr=0x800B6D98u; f_800361A0(c); // 800B6D94
  {uint32_t ea=c->r[2]+0xFFFF9B20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6D98
  c->r[3]=0u+0x80550000u; // 800B6D9C
  c->r[3]=c->r[3]+0x00003D60u; // 800B6DA0
  c->r[4]=c->r[31]+0x00000038u; // 800B6DA4
  c->f[2]=c->f[1]; // 800B6DA8
  c->r[5]=c->r[1]+0x00000008u; // 800B6DAC
  c->f[3]=c->f[1]; // 800B6DB0
  c->r[6]=0u+0x00000000u; // 800B6DB4
  c->r[7]=0u+0x00000000u; // 800B6DB8
  c->lr=0x800B6DC0u; f_801D5488(c); // 800B6DBC
  c->r[5]=R32(c->r[31]+0x00000394u); // 800B6DC0
  c->r[3]=c->r[31]+0x00000060u; // 800B6DC4
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6DC8
  c->r[4]=c->r[5]+0x00000068u; // 800B6DCC
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B6DD0
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6DD4
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800B6DD8
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6DDC
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800B6DE0
  c->lr=0x800B6DE8u; f_800361A0(c); // 800B6DE4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6DE8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B6DEC
  c->lr=0x800B6DF4u; f_802501B0(c); // 800B6DF0
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800B6DF4
  c->r[0]=0u+0x00000001u; // 800B6DF8
  {uint32_t ea=c->r[2]+0xFFFF9B28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6DFC
  c->r[4]=c->r[31]+0x0000002Cu; // 800B6E00
  {uint32_t ea=c->r[2]+0xFFFF9B2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6E04
  c->r[3]=c->r[3]|0x00002000u; // 800B6E08
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800B6E0C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6E10
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800B6E14
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800B6E18
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800B6E1C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6E20
  c->r[3]=c->r[3]+0x0000005Cu; // 800B6E24
  c->lr=0x800B6E2Cu; f_800361A0(c); // 800B6E28
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6E2C
  c->r[4]=0u+0x00000040u; // 800B6E30
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6E34
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B6E38
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6E3C
  c->r[3]=c->r[3]+0x0000001Cu; // 800B6E40
  c->lr=0x800B6E48u; f_802518A4(c); // 800B6E44
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6E48
  c->r[4]=0u+0x00000006u; // 800B6E4C
  c->r[3]=c->r[3]+0x0000001Cu; // 800B6E50
  c->lr=0x800B6E58u; f_80251824(c); // 800B6E54
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B6E58
  c->r[3]=c->r[31]|c->r[31]; // 800B6E5C
  {uint32_t ea=c->r[2]+0xFFFF9B20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6E60
  c->r[5]=0u+0x00000000u; // 800B6E64
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B6E68
  c->r[6]=0u+0x00000001u; // 800B6E6C
  c->f[2]=c->f[1]; // 800B6E70
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B6E74
  c->ctr=c->r[12]; // 800B6E78
  if (true) { c->lr=0x800B6E80u; dispatch(c,c->ctr); } // 800B6E7C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6E80
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B6E84
  c->lr=0x800B6E8Cu; f_802501B0(c); // 800B6E88
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6E8C
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B6E90
  cmps(c,0,(int32_t)c->r[0],0); // 800B6E94
  if (crb(c,2)) { goto L_800B6F28; } // 800B6E98
  c->r[3]=c->r[3]+0x00000068u; // 800B6E9C
  c->r[4]=c->r[31]+0x00000060u; // 800B6EA0
  c->lr=0x800B6EA8u; f_800361A0(c); // 800B6EA4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B6EA8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B6EAC
  c->lr=0x800B6EB4u; f_8025037C(c); // 800B6EB0
  c->r[6]=R32(c->r[31]+0x00000394u); // 800B6EB4
  c->r[3]=c->r[1]+0x00000024u; // 800B6EB8
  c->r[4]=c->r[31]+0x00000060u; // 800B6EBC
  c->r[5]=c->r[1]+0x00000030u; // 800B6EC0
  c->r[6]=c->r[6]+0x000000B0u; // 800B6EC4
  c->r[7]=0u+0x00000000u; // 800B6EC8
  c->lr=0x800B6ED0u; f_8002BE64(c); // 800B6ECC
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800B6ED0
  c->r[3]=0u+0x805D0000u; // 800B6ED4
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B6ED8
  c->r[3]=c->r[3]+0x00003F6Cu; // 800B6EDC
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6EE0
  c->r[4]=c->r[31]|c->r[31]; // 800B6EE4
  W32(c->r[1]+0x00000018u,c->r[5]); // 800B6EE8
  c->r[7]=c->r[1]+0x00000018u; // 800B6EEC
  c->r[6]=0u+0x00000013u; // 800B6EF0
  c->r[8]=0u+0x00000000u; // 800B6EF4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B6EF8
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B6EFC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800B6F00
  c->r[3]=R32(c->r[31]+0x00000438u); // 800B6F04
  c->r[5]=R32(c->r[31]+0x00000394u); // 800B6F08
  c->lr=0x800B6F10u; f_801FA6A4(c); // 800B6F0C
  c->r[6]=0u+0x803A0000u; // 800B6F10
  c->r[3]=R32(c->r[31]+0x00000438u); // 800B6F14
  c->r[5]=c->r[31]+0x00000044u; // 800B6F18
  c->r[4]=0u+0x00000000u; // 800B6F1C
  c->r[6]=c->r[6]+0xFFFFCE08u; // 800B6F20
  c->lr=0x800B6F28u; f_801FBEC0(c); // 800B6F24
L_800B6F28:;
  c->r[3]=c->r[31]|c->r[31]; // 800B6F28
  c->r[4]=0u+0x00000000u; // 800B6F2C
  c->lr=0x800B6F34u; f_801F7C00(c); // 800B6F30
  c->r[7]=0u+0x803D0000u; // 800B6F34
  {uint32_t ea=c->r[7]+0xFFFFF67Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800B6F38
  c->r[3]=c->r[31]|c->r[31]; // 800B6F3C
  c->r[4]=c->r[1]+0x0000000Cu; // 800B6F40
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B6F44
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B6F48
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B6F4C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800B6F50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6F54
  c->lr=0x800B6F5Cu; f_800B6D10(c); // 800B6F58
  c->r[0]=R32(c->r[1]+0x00000054u); // 800B6F5C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800B6F60
  c->lr=c->r[0]; // 800B6F64
  c->r[1]=c->r[1]+0x00000050u; // 800B6F68
  return; // 800B6F6C
}

// fn_800B6F70
void f_800B6F70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6F70
  c->r[0]=c->lr; // 800B6F74
  c->r[4]=0u+0x00000000u; // 800B6F78
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B6F7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B6F80
  c->r[31]=c->r[3]|c->r[3]; // 800B6F84
  c->r[3]=R32(c->r[3]+0x00000438u); // 800B6F88
  c->lr=0x800B6F90u; f_801FAF00(c); // 800B6F8C
  cmps(c,0,(int32_t)c->r[3],0); // 800B6F90
  if (!crb(c,2)) { goto L_800B7040; } // 800B6F94
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B6F98
  c->r[3]=c->r[31]+0x0000002Cu; // 800B6F9C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B6FA0
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800B6FA4
  c->r[0]=c->r[0]|0x00000004u; // 800B6FA8
  c->r[4]=c->r[4]+0x0000005Cu; // 800B6FAC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800B6FB0
  c->lr=0x800B6FB8u; f_800361A0(c); // 800B6FB4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B6FB8
  c->r[3]=c->r[31]+0x00000060u; // 800B6FBC
  c->r[4]=c->r[4]+0x00000068u; // 800B6FC0
  c->lr=0x800B6FC8u; f_800361A0(c); // 800B6FC4
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800B6FC8
  c->r[3]=0u+0x805D0000u; // 800B6FCC
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B6FD0
  c->r[3]=c->r[3]+0x00006CF8u; // 800B6FD4
  c->r[4]=c->r[1]+0x00000008u; // 800B6FD8
  c->r[5]=0u+0x00040000u; // 800B6FDC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B6FE0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B6FE4
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B6FE8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B6FEC
  c->lr=0x800B6FF4u; f_802236F8(c); // 800B6FF0
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800B6FF4
  c->r[3]=c->r[31]|c->r[31]; // 800B6FF8
  c->r[4]=0u+0x00000009u; // 800B6FFC
  c->lr=0x800B7004u; f_801F5AB4(c); // 800B7000
  c->r[3]=c->r[31]|c->r[31]; // 800B7004
  c->r[4]=0u+0x00000009u; // 800B7008
  c->lr=0x800B7010u; f_801F5AB4(c); // 800B700C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B7010
  c->r[3]=c->r[31]|c->r[31]; // 800B7014
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800B7018
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800B701C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B7020
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B7024
  c->ctr=c->r[12]; // 800B7028
  if (true) { c->lr=0x800B7030u; dispatch(c,c->ctr); } // 800B702C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B7030
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B7034
  c->lr=0x800B703Cu; f_8025037C(c); // 800B7038
  goto L_800B7060; // 800B703C
L_800B7040:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B7040
  c->r[3]=c->r[31]+0x0000002Cu; // 800B7044
  c->r[4]=c->r[4]+0x0000005Cu; // 800B7048
  c->lr=0x800B7050u; f_800361A0(c); // 800B704C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B7050
  c->r[3]=c->r[31]+0x00000060u; // 800B7054
  c->r[4]=c->r[4]+0x00000068u; // 800B7058
  c->lr=0x800B7060u; f_800361A0(c); // 800B705C
L_800B7060:;
  c->r[3]=c->r[31]|c->r[31]; // 800B7060
  c->r[4]=0u+0x00000000u; // 800B7064
  c->lr=0x800B706Cu; f_801F7C00(c); // 800B7068
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B706C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B7070
  c->lr=c->r[0]; // 800B7074
  c->r[1]=c->r[1]+0x00000020u; // 800B7078
  return; // 800B707C
}

// fn_800B7080
void f_800B7080(Ctx* __restrict c) {
  c->r[5]=R16(c->r[3]+0x000003BEu); // 800B7080
  c->r[0]=0u+0x00000001u; // 800B7084
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B7088
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFBu; // 800B708C
  W16(c->r[3]+0x000003BEu,c->r[5]); // 800B7090
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800B7094
  W8(c->r[3]+0x0000006Fu,c->r[0]); // 800B7098
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800B709C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B70A0
  c->ctr=c->r[12]; // 800B70A4
  if (true) { dispatch(c,c->ctr); return; } // 800B70A8
}

// fn_800B70AC
void f_800B70AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B70AC
  c->r[0]=c->lr; // 800B70B0
  c->r[4]=0u+0x000000E1u; // 800B70B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B70B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B70BC
  c->r[31]=c->r[3]|c->r[3]; // 800B70C0
  c->r[3]=c->r[3]+0x00000210u; // 800B70C4
  c->lr=0x800B70CCu; f_80221630(c); // 800B70C8
  cmps(c,0,(int32_t)c->r[3],0); // 800B70CC
  if (!crb(c,2)) { goto L_800B70DC; } // 800B70D0
  c->r[3]=0u+0x00000000u; // 800B70D4
  goto L_800B70F8; // 800B70D8
L_800B70DC:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B70DC
  c->r[3]=0u+0x00000499u; // 800B70E0
  c->r[5]=0u+0x00000000u; // 800B70E4
  c->r[4]=c->r[4]+0x0000010Cu; // 800B70E8
  c->lr=0x800B70F0u; f_8024EE50(c); // 800B70EC
  c->r[0]=cntlz(c->r[3]); // 800B70F0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B70F4
L_800B70F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B70F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B70FC
  c->lr=c->r[0]; // 800B7100
  c->r[1]=c->r[1]+0x00000010u; // 800B7104
  return; // 800B7108
}

// fn_800B710C
void f_800B710C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B710C
  c->r[0]=c->lr; // 800B7110
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B7114
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800B7118
  c->r[31]=0u+0x803D0000u; // 800B711C
  c->r[31]=c->r[31]+0xFFFFF670u; // 800B7120
  W32(c->r[1]+0x00000038u,c->r[30]); // 800B7124
  c->r[30]=c->r[3]|c->r[3]; // 800B7128
  c->lr=0x800B7130u; f_801F4F28(c); // 800B712C
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800B7130
  cmps(c,0,(int32_t)c->r[0],101); // 800B7134
  if (crb(c,2)) { goto L_800B7188; } // 800B7138
  if (!crb(c,0)) { goto L_800B714C; } // 800B713C
  cmps(c,0,(int32_t)c->r[0],100); // 800B7140
  if (!crb(c,0)) { goto L_800B7158; } // 800B7144
  goto L_800B71E4; // 800B7148
L_800B714C:;
  cmps(c,0,(int32_t)c->r[0],103); // 800B714C
  if (!crb(c,0)) { goto L_800B71E4; } // 800B7150
  goto L_800B71B8; // 800B7154
L_800B7158:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B7158
  c->r[5]=c->r[31]+0x00000018u; // 800B715C
  c->r[3]=c->r[30]|c->r[30]; // 800B7160
  c->r[4]=c->r[1]+0x00000020u; // 800B7164
  c->r[7]=R32(c->r[31]+0x00000018u); // 800B7168
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B716C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B7170
  W32(c->r[1]+0x00000020u,c->r[7]); // 800B7174
  W32(c->r[1]+0x00000024u,c->r[6]); // 800B7178
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B717C
  c->lr=0x800B7184u; f_800B6D10(c); // 800B7180
  goto L_800B71E4; // 800B7184
L_800B7188:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B7188
  c->r[5]=c->r[31]+0x00000024u; // 800B718C
  c->r[3]=c->r[30]|c->r[30]; // 800B7190
  c->r[4]=c->r[1]+0x00000014u; // 800B7194
  c->r[7]=R32(c->r[31]+0x00000024u); // 800B7198
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B719C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B71A0
  W32(c->r[1]+0x00000014u,c->r[7]); // 800B71A4
  W32(c->r[1]+0x00000018u,c->r[6]); // 800B71A8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B71AC
  c->lr=0x800B71B4u; f_800B6D10(c); // 800B71B0
  goto L_800B71E4; // 800B71B4
L_800B71B8:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B71B8
  c->r[5]=c->r[31]+0x00000030u; // 800B71BC
  c->r[3]=c->r[30]|c->r[30]; // 800B71C0
  c->r[4]=c->r[1]+0x00000008u; // 800B71C4
  c->r[7]=R32(c->r[31]+0x00000030u); // 800B71C8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B71CC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B71D0
  W32(c->r[1]+0x00000008u,c->r[7]); // 800B71D4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B71D8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B71DC
  c->lr=0x800B71E4u; f_800B6D10(c); // 800B71E0
L_800B71E4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B71E4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800B71E8
  c->r[30]=R32(c->r[1]+0x00000038u); // 800B71EC
  c->lr=c->r[0]; // 800B71F0
  c->r[1]=c->r[1]+0x00000040u; // 800B71F4
  return; // 800B71F8
}

// fn_800B71FC
void f_800B71FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B71FC
  c->r[0]=c->lr; // 800B7200
  c->r[5]=c->r[3]|c->r[3]; // 800B7204
  c->r[3]=c->r[4]|c->r[4]; // 800B7208
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B720C
  c->r[4]=R32(c->r[5]+0x00000394u); // 800B7210
  c->r[5]=0u+0x00000000u; // 800B7214
  c->lr=0x800B721Cu; f_80250BF4(c); // 800B7218
  c->r[0]=cntlz(c->r[3]); // 800B721C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B7220
  c->r[3]=0u-c->r[0]; // 800B7224
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7228
  c->lr=c->r[0]; // 800B722C
  c->r[1]=c->r[1]+0x00000010u; // 800B7230
  return; // 800B7234
}

// fn_800B7238
void f_800B7238(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7238
  c->r[0]=c->lr; // 800B723C
  c->r[5]=0u+0x80620000u; // 800B7240
  c->r[4]=0u+0x00000002u; // 800B7244
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B7248
  c->r[5]=c->r[5]+0x00007688u; // 800B724C
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800B7250
  W32(c->r[1]+0x00000088u,c->r[30]); // 800B7254
  c->r[30]=c->r[3]|c->r[3]; // 800B7258
  c->r[3]=R32(c->r[5]+0x00000014u); // 800B725C
  c->lr=0x800B7264u; f_80037670(c); // 800B7260
  cmps(c,0,(int32_t)c->r[3],0); // 800B7264
  if (!crb(c,2)) { goto L_800B72C8; } // 800B7268
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B726C
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B7270
  cmps(c,0,(int32_t)c->r[0],0); // 800B7274
  if (!crb(c,2)) { goto L_800B72C8; } // 800B7278
  {uint32_t ea=c->r[2]+0xFFFF9B30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B727C
  c->r[3]=c->r[1]+0x00000008u; // 800B7280
  c->r[4]=c->r[30]+0x0000002Cu; // 800B7284
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800B7288
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800B728C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B7290
  c->lr=0x800B7298u; f_800361A0(c); // 800B7294
  c->r[31]=0u+0x80550000u; // 800B7298
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B729C
  c->r[31]=c->r[31]+0x00003D60u; // 800B72A0
  c->r[5]=c->r[30]|c->r[30]; // 800B72A4
  c->r[3]=c->r[31]+0x00000010u; // 800B72A8
  c->r[6]=c->r[1]+0x00000008u; // 800B72AC
  c->r[7]=c->r[1]+0x00000020u; // 800B72B0
  c->r[4]=0u+0x000001FFu; // 800B72B4
  c->lr=0x800B72BCu; f_80226910(c); // 800B72B8
  c->r[3]=c->r[31]+0x00000010u; // 800B72BC
  c->r[4]=c->r[1]+0x00000020u; // 800B72C0
  c->lr=0x800B72C8u; f_80226D68(c); // 800B72C4
L_800B72C8:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800B72C8
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800B72CC
  c->r[30]=R32(c->r[1]+0x00000088u); // 800B72D0
  c->lr=c->r[0]; // 800B72D4
  c->r[1]=c->r[1]+0x00000090u; // 800B72D8
  return; // 800B72DC
}

// fn_800B72E0
void f_800B72E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B72E0
  c->r[0]=c->lr; // 800B72E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B72E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B72EC
  c->r[31]=c->r[3]|c->r[3]; // 800B72F0
  c->r[3]=c->r[3]+0x00000210u; // 800B72F4
  c->lr=0x800B72FCu; f_8004BAD4(c); // 800B72F8
  cmps(c,0,(int32_t)c->r[3],0); // 800B72FC
  if (crb(c,2)) { goto L_800B7370; } // 800B7300
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B7304
  c->r[4]=c->r[31]|c->r[31]; // 800B7308
  c->r[3]=c->r[31]+0x00000210u; // 800B730C
  c->r[0]=c->r[0]|0xAA000000u; // 800B7310
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B7314
  c->lr=0x800B731Cu; f_80043E44(c); // 800B7318
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B731C
  c->r[3]=c->r[31]+0x00000210u; // 800B7320
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B7324
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B7328
  c->lr=0x800B7330u; f_80043E34(c); // 800B732C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B7330
  c->r[4]=0u+0x803A0000u; // 800B7334
  c->r[4]=c->r[4]+0xFFFFCE14u; // 800B7338
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B733C
  c->r[4]=c->r[4]+0x0000000Du; // 800B7340
  c->lr=0x800B7348u; f_80256EC4(c); // 800B7344
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B7348
  c->r[5]=c->r[3]|c->r[3]; // 800B734C
  c->r[3]=c->r[31]+0x00000210u; // 800B7350
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800B7354
  c->lr=0x800B735Cu; f_8004BAC8(c); // 800B7358
  {uint32_t ea=c->r[2]+0xFFFF9B34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B735C
  c->r[3]=c->r[31]+0x00000210u; // 800B7360
  c->f[2]=c->f[1]; // 800B7364
  c->f[3]=c->f[1]; // 800B7368
  c->lr=0x800B7370u; f_80043E24(c); // 800B736C
L_800B7370:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7370
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7374
  c->lr=c->r[0]; // 800B7378
  c->r[1]=c->r[1]+0x00000010u; // 800B737C
  return; // 800B7380
}

// fn_800B7384
void f_800B7384(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7384
  c->r[0]=c->lr; // 800B7388
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B738C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7390
  c->r[31]=c->r[3]|c->r[3]; // 800B7394
  c->r[3]=c->r[3]+0x00000210u; // 800B7398
  c->lr=0x800B73A0u; f_80221698(c); // 800B739C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B73A0
  cmps(c,0,(int32_t)c->r[3],0); // 800B73A4
  if (crb(c,2)) { goto L_800B73C8; } // 800B73A8
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B73AC
  cmps(c,0,(int32_t)c->r[0],0); // 800B73B0
  if (crb(c,2)) { goto L_800B73C8; } // 800B73B4
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B73B8
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800B73BC
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B73C0
  goto L_800B73D4; // 800B73C4
L_800B73C8:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B73C8
  c->r[0]=c->r[0]|0x80000000u; // 800B73CC
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B73D0
L_800B73D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B73D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B73D8
  c->lr=c->r[0]; // 800B73DC
  c->r[1]=c->r[1]+0x00000010u; // 800B73E0
  return; // 800B73E4
}

// fn_800B73E8
void f_800B73E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B73E8
  c->r[0]=c->lr; // 800B73EC
  cmps(c,0,(int32_t)c->r[3],0); // 800B73F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B73F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B73F8
  c->r[31]=c->r[4]|c->r[4]; // 800B73FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B7400
  c->r[30]=c->r[3]|c->r[3]; // 800B7404
  if (crb(c,2)) { goto L_800B7424; } // 800B7408
  c->r[4]=0u+0x00000000u; // 800B740C
  c->lr=0x800B7414u; f_8026A06C(c); // 800B7410
  cmps(c,0,(int32_t)c->r[31],0); // 800B7414
  if (!crb(c,1)) { goto L_800B7424; } // 800B7418
  c->r[3]=c->r[30]|c->r[30]; // 800B741C
  c->lr=0x800B7424u; f_8026A268(c); // 800B7420
L_800B7424:;
  c->r[3]=c->r[30]|c->r[30]; // 800B7424
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7428
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B742C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7430
  c->lr=c->r[0]; // 800B7434
  c->r[1]=c->r[1]+0x00000010u; // 800B7438
  return; // 800B743C
}

// fn_800B7440
void f_800B7440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7440
  c->r[0]=c->lr; // 800B7444
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B7448
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800B744C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800B7450
  c->r[4]=0u+0x00000000u; // 800B7454
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7458
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B745C
  c->r[30]=c->r[3]|c->r[3]; // 800B7460
  c->lr=0x800B7468u; f_801F57D0(c); // 800B7464
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B7468
  c->r[3]=c->r[30]|c->r[30]; // 800B746C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800B7470
  c->ctr=c->r[12]; // 800B7474
  if (true) { c->lr=0x800B747Cu; dispatch(c,c->ctr); } // 800B7478
  c->r[3]=c->r[30]|c->r[30]; // 800B747C
  c->lr=0x800B7484u; f_801F4B94(c); // 800B7480
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800B7484
  c->r[5]=0u+0x00000003u; // 800B7488
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800B748C
  c->r[4]=0u+0x00000017u; // 800B7490
  c->r[3]=c->r[3]|0x00000800u; // 800B7494
  W8(c->r[30]+0x0000006Cu,c->r[5]); // 800B7498
  cmps(c,0,(int32_t)c->r[0],0); // 800B749C
  W8(c->r[30]+0x0000006Du,c->r[4]); // 800B74A0
  W16(c->r[30]+0x000003BEu,c->r[3]); // 800B74A4
  if (!crb(c,2)) { goto L_800B74B8; } // 800B74A8
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFBu; // 800B74AC
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B74B0
  goto L_800B74C0; // 800B74B4
L_800B74B8:;
  c->r[0]=c->r[3]|0x00000004u; // 800B74B8
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B74BC
L_800B74C0:;
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B74C0
  c->r[3]=0u+0x80550000u; // 800B74C4
  {uint32_t ea=c->r[30]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B74C8
  c->r[3]=c->r[3]+0x00003D60u; // 800B74CC
  c->f[3]=c->f[1]; // 800B74D0
  {uint32_t ea=c->r[2]+0xFFFF9B44u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B74D4
  c->r[4]=c->r[30]+0x0000002Cu; // 800B74D8
  c->r[5]=c->r[30]+0x00000030u; // 800B74DC
  c->r[6]=0u+0x00000000u; // 800B74E0
  c->r[7]=0u+0x00000000u; // 800B74E4
  c->lr=0x800B74ECu; f_801D5488(c); // 800B74E8
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B74EC
  c->r[3]=c->r[30]|c->r[30]; // 800B74F0
  c->lr=0x800B74F8u; f_801F58BC(c); // 800B74F4
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B74F8
  c->r[31]=0u+0x00000001u; // 800B74FC
  c->r[3]=0u+0x805D0000u; // 800B7500
  c->r[4]=c->r[30]+0x0000002Cu; // 800B7504
  W8(c->r[5]+0x0000001Cu,c->r[31]); // 800B7508
  c->r[3]=c->r[3]+0x000078B0u; // 800B750C
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7510
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800B7514
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B7518
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800B751C
  c->lr=0x800B7524u; f_802351CC(c); // 800B7520
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B7524
  c->r[4]=0u+0x803A0000u; // 800B7528
  c->r[4]=c->r[4]+0xFFFFCE34u; // 800B752C
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800B7530
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800B7534
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B7538
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B753C
  c->lr=0x800B7544u; f_80256EC4(c); // 800B7540
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B7544
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800B7548
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B754C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B7550
  c->lr=0x800B7558u; f_802501B0(c); // 800B7554
  c->r[3]=c->r[30]|c->r[30]; // 800B7558
  c->lr=0x800B7560u; f_801F56F4(c); // 800B755C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B7560
  c->r[3]=c->r[30]|c->r[30]; // 800B7564
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B7568
  c->ctr=c->r[12]; // 800B756C
  if (true) { c->lr=0x800B7574u; dispatch(c,c->ctr); } // 800B7570
  c->r[3]=c->r[30]|c->r[30]; // 800B7574
  c->lr=0x800B757Cu; f_800B7E24(c); // 800B7578
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800B757C
  W32(c->r[30]+0x00000444u,c->r[31]); // 800B7580
  c->lr=0x800B7588u; f_8024E174(c); // 800B7584
  W32(c->r[30]+0x00000438u,c->r[3]); // 800B7588
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800B758C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800B7590
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7594
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B7598
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B759C
  c->lr=c->r[0]; // 800B75A0
  c->r[1]=c->r[1]+0x00000020u; // 800B75A4
  return; // 800B75A8
}

// fn_800B75AC
void f_800B75AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B75AC
  c->r[0]=c->lr; // 800B75B0
  c->r[4]=0u+0x00000000u; // 800B75B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B75B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B75BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B75C0
  c->r[30]=c->r[3]|c->r[3]; // 800B75C4
  c->lr=0x800B75CCu; f_800453A4(c); // 800B75C8
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 800B75CC
  if (crb(c,2)) { goto L_800B75EC; } // 800B75D0
  c->r[3]=c->r[30]|c->r[30]; // 800B75D4
  c->r[4]=0u+0x00000004u; // 800B75D8
  c->r[5]=0u+0x00000003u; // 800B75DC
  c->r[6]=0u+0x00000001u; // 800B75E0
  c->r[7]=0u+0x00000001u; // 800B75E4
  c->lr=0x800B75ECu; f_8017900C(c); // 800B75E8
L_800B75EC:;
  c->r[31]=0u+0x805D0000u; // 800B75EC
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B75F0
  c->lr=0x800B75F8u; f_80045264(c); // 800B75F4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800B75F8
  cmpu(c,0,c->r[0],0x0000000Au); // 800B75FC
  if (!crb(c,2)) { goto L_800B763C; } // 800B7600
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B7604
  c->lr=0x800B760Cu; f_80037AF0(c); // 800B7608
  cmpu(c,0,c->r[3],c->r[30]); // 800B760C
  if (!crb(c,2)) { goto L_800B763C; } // 800B7610
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800B7614
  cmps(c,0,(int32_t)c->r[0],101); // 800B7618
  if (crb(c,2)) { goto L_800B763C; } // 800B761C
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7620
  c->r[3]=c->r[30]|c->r[30]; // 800B7624
  c->r[4]=0u+0x00000065u; // 800B7628
  c->r[5]=0u+0x00000000u; // 800B762C
  c->r[6]=0u+0x00000000u; // 800B7630
  c->r[7]=0u+0x00000000u; // 800B7634
  c->lr=0x800B763Cu; f_801F4D44(c); // 800B7638
L_800B763C:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B763C
  c->r[3]=c->r[30]|c->r[30]; // 800B7640
  c->r[12]=R32(c->r[12]+0x00000068u); // 800B7644
  c->ctr=c->r[12]; // 800B7648
  if (true) { c->lr=0x800B7650u; dispatch(c,c->ctr); } // 800B764C
  c->r[3]=c->r[30]|c->r[30]; // 800B7650
  c->lr=0x800B7658u; f_801F4C0C(c); // 800B7654
  c->r[3]=c->r[30]|c->r[30]; // 800B7658
  c->lr=0x800B7660u; f_800B7D7C(c); // 800B765C
  c->r[3]=c->r[30]|c->r[30]; // 800B7660
  c->r[4]=0u+0x00000000u; // 800B7664
  c->lr=0x800B766Cu; f_800453A4(c); // 800B7668
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 800B766C
  if (crb(c,2)) { goto L_800B7694; } // 800B7670
  c->r[3]=0u+0x805D0000u; // 800B7674
  c->r[4]=0u+0x00000002u; // 800B7678
  c->r[3]=c->r[3]+0x00006D70u; // 800B767C
  c->r[5]=0u+0x00000014u; // 800B7680
  c->r[6]=0u+0x00000000u; // 800B7684
  c->r[7]=0u+0x00000000u; // 800B7688
  c->r[8]=0u+0x00000000u; // 800B768C
  c->lr=0x800B7694u; f_8022AC00(c); // 800B7690
L_800B7694:;
  c->r[3]=c->r[30]|c->r[30]; // 800B7694
  c->lr=0x800B769Cu; f_801F56F4(c); // 800B7698
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B769C
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B76A0
  cmps(c,0,(int32_t)c->r[0],0); // 800B76A4
  if (crb(c,2)) { goto L_800B7728; } // 800B76A8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800B76AC
  cmps(c,0,(int32_t)c->r[0],0); // 800B76B0
  if (crb(c,2)) { goto L_800B7728; } // 800B76B4
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B76B8
  cmps(c,0,(int32_t)c->r[0],0); // 800B76BC
  if (crb(c,2)) { goto L_800B76E8; } // 800B76C0
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800B76C4
  cmps(c,0,(int32_t)c->r[0],0); // 800B76C8
  if (!crb(c,2)) { goto L_800B76E8; } // 800B76CC
  c->r[0]=0u+0x00000000u; // 800B76D0
  W32(c->r[3]+0x000000E4u,c->r[0]); // 800B76D4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B76D8
  c->r[4]=c->r[3]+0x000000B0u; // 800B76DC
  c->lr=0x800B76E4u; f_80250F18(c); // 800B76E0
  goto L_800B7710; // 800B76E4
L_800B76E8:;
  c->r[0]=0u+0x00000001u; // 800B76E8
  c->r[4]=c->r[30]+0x0000002Cu; // 800B76EC
  W32(c->r[3]+0x000000E4u,c->r[0]); // 800B76F0
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B76F4
  c->r[3]=c->r[3]+0x0000005Cu; // 800B76F8
  c->lr=0x800B7700u; f_800361A0(c); // 800B76FC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B7700
  c->r[4]=c->r[30]+0x00000060u; // 800B7704
  c->r[3]=c->r[3]+0x00000068u; // 800B7708
  c->lr=0x800B7710u; f_800361A0(c); // 800B770C
L_800B7710:;
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B7710
  c->r[3]=c->r[30]|c->r[30]; // 800B7714
  c->lr=0x800B771Cu; f_801F58FC(c); // 800B7718
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B771C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B7720
  c->lr=0x800B7728u; f_8025037C(c); // 800B7724
L_800B7728:;
  c->r[3]=c->r[30]|c->r[30]; // 800B7728
  c->lr=0x800B7730u; f_800B7EC8(c); // 800B772C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7730
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7734
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B7738
  c->lr=c->r[0]; // 800B773C
  c->r[1]=c->r[1]+0x00000010u; // 800B7740
  return; // 800B7744
}

// fn_800B7748
void f_800B7748(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7748
  c->r[0]=c->lr; // 800B774C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B7750
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B7754
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B7758
  c->r[30]=c->r[3]|c->r[3]; // 800B775C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B7760
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B7764
  c->lr=0x800B776Cu; f_802501B0(c); // 800B7768
  c->r[3]=c->r[30]|c->r[30]; // 800B776C
  c->r[4]=0u+0x00000000u; // 800B7770
  c->lr=0x800B7778u; f_801F5244(c); // 800B7774
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B7778
  c->r[3]=c->r[30]+0x0000002Cu; // 800B777C
  c->r[4]=c->r[4]+0x0000005Cu; // 800B7780
  c->lr=0x800B7788u; f_800361A0(c); // 800B7784
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B7788
  c->r[3]=c->r[30]|c->r[30]; // 800B778C
  c->lr=0x800B7794u; f_801F5418(c); // 800B7790
  cmps(c,0,(int32_t)c->r[3],0); // 800B7794
  if (!crb(c,0)) { goto L_800B77DC; } // 800B7798
  c->r[3]=R16(c->r[30]+0x000003BEu); // 800B779C
  c->r[0]=0u+0x00000064u; // 800B77A0
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B77A4
  c->r[7]=0u+0x803D0000u; // 800B77A8
  c->r[0]=c->r[3]|0x00000080u; // 800B77AC
  c->r[3]=c->r[30]|c->r[30]; // 800B77B0
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B77B4
  c->r[4]=c->r[1]+0x00000008u; // 800B77B8
  {uint32_t ea=c->r[7]+0xFFFFF7F0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B77BC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B77C0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B77C4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B77C8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B77CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B77D0
  c->lr=0x800B77D8u; f_800B7828(c); // 800B77D4
  goto L_800B7810; // 800B77D8
L_800B77DC:;
  c->r[31]=0u+0x805D0000u; // 800B77DC
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B77E0
  c->lr=0x800B77E8u; f_800447E4(c); // 800B77E4
  cmpu(c,0,c->r[3],0x00000001u); // 800B77E8
  if (!crb(c,2)) { goto L_800B77FC; } // 800B77EC
  c->r[0]=0u+0x00000000u; // 800B77F0
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800B77F4
  goto L_800B7808; // 800B77F8
L_800B77FC:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B77FC
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800B7800
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800B7804
L_800B7808:;
  c->r[3]=c->r[30]|c->r[30]; // 800B7808
  c->lr=0x800B7810u; f_801F5B14(c); // 800B780C
L_800B7810:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B7810
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B7814
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B7818
  c->lr=c->r[0]; // 800B781C
  c->r[1]=c->r[1]+0x00000020u; // 800B7820
  return; // 800B7824
}

// fn_800B7828
void f_800B7828(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7828
  c->r[0]=c->lr; // 800B782C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7830
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7834
  c->r[31]=c->r[4]|c->r[4]; // 800B7838
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B783C
  c->r[30]=c->r[3]|c->r[3]; // 800B7840
  c->r[3]=c->r[31]|c->r[31]; // 800B7844
  c->lr=0x800B784Cu; f_802B9FDC(c); // 800B7848
  cmps(c,0,(int32_t)c->r[3],0); // 800B784C
  if (crb(c,2)) { goto L_800B786C; } // 800B7850
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B7854
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B7858
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B785C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800B7860
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B7864
  W32(c->r[30]+0x00000024u,c->r[0]); // 800B7868
L_800B786C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B786C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7870
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B7874
  c->lr=c->r[0]; // 800B7878
  c->r[1]=c->r[1]+0x00000010u; // 800B787C
  return; // 800B7880
}

// fn_800B7884
void f_800B7884(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7884
  c->r[0]=c->lr; // 800B7888
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B788C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800B7890
  c->r[31]=c->r[3]|c->r[3]; // 800B7894
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B7898
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800B789C
  cmps(c,0,(int32_t)c->r[0],0); // 800B78A0
  if (crb(c,2)) { goto L_800B78C4; } // 800B78A4
  c->r[0]=R8(c->r[4]+0x0000014Du); // 800B78A8
  cmps(c,0,(int32_t)c->r[0],0); // 800B78AC
  if (crb(c,2)) { goto L_800B78C4; } // 800B78B0
  c->r[0]=0u+0x00000000u; // 800B78B4
  W8(c->r[4]+0x0000014Cu,c->r[0]); // 800B78B8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B78BC
  W8(c->r[4]+0x0000014Du,c->r[0]); // 800B78C0
L_800B78C4:;
  c->r[3]=R32(c->r[3]+0x00000394u); // 800B78C4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B78C8
  c->lr=0x800B78D0u; f_802501B0(c); // 800B78CC
  c->r[3]=c->r[31]+0x00000038u; // 800B78D0
  c->r[4]=c->r[31]+0x0000002Cu; // 800B78D4
  c->lr=0x800B78DCu; f_800361A0(c); // 800B78D8
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B78DC
  c->r[3]=0u+0x80550000u; // 800B78E0
  c->r[3]=c->r[3]+0x00003D60u; // 800B78E4
  c->r[4]=c->r[31]+0x00000038u; // 800B78E8
  c->f[2]=c->f[1]; // 800B78EC
  c->r[5]=c->r[1]+0x00000008u; // 800B78F0
  c->f[3]=c->f[1]; // 800B78F4
  c->r[6]=0u+0x00000000u; // 800B78F8
  c->r[7]=0u+0x00000000u; // 800B78FC
  c->lr=0x800B7904u; f_801D5488(c); // 800B7900
  c->r[5]=R32(c->r[31]+0x00000394u); // 800B7904
  c->r[3]=c->r[31]+0x00000060u; // 800B7908
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B790C
  c->r[4]=c->r[5]+0x00000068u; // 800B7910
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B7914
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7918
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800B791C
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7920
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800B7924
  c->lr=0x800B792Cu; f_800361A0(c); // 800B7928
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B792C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B7930
  c->lr=0x800B7938u; f_802501B0(c); // 800B7934
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800B7938
  c->r[0]=0u+0x00000001u; // 800B793C
  {uint32_t ea=c->r[2]+0xFFFF9B48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7940
  c->r[4]=c->r[31]+0x0000002Cu; // 800B7944
  {uint32_t ea=c->r[2]+0xFFFF9B4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7948
  c->r[3]=c->r[3]|0x00002000u; // 800B794C
  W16(c->r[31]+0x000003BEu,c->r[3]); // 800B7950
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B7954
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800B7958
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800B795C
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800B7960
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B7964
  c->r[3]=c->r[3]+0x0000005Cu; // 800B7968
  c->lr=0x800B7970u; f_800361A0(c); // 800B796C
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7970
  c->r[4]=0u+0x00000040u; // 800B7974
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B7978
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B797C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B7980
  c->r[3]=c->r[3]+0x0000001Cu; // 800B7984
  c->lr=0x800B798Cu; f_802518A4(c); // 800B7988
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B798C
  c->r[4]=0u+0x00000006u; // 800B7990
  c->r[3]=c->r[3]+0x0000001Cu; // 800B7994
  c->lr=0x800B799Cu; f_80251824(c); // 800B7998
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B799C
  c->r[3]=c->r[31]|c->r[31]; // 800B79A0
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B79A4
  c->r[5]=0u+0x00000000u; // 800B79A8
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B79AC
  c->r[6]=0u+0x00000001u; // 800B79B0
  c->f[2]=c->f[1]; // 800B79B4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B79B8
  c->ctr=c->r[12]; // 800B79BC
  if (true) { c->lr=0x800B79C4u; dispatch(c,c->ctr); } // 800B79C0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B79C4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B79C8
  c->lr=0x800B79D0u; f_802501B0(c); // 800B79CC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B79D0
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B79D4
  cmps(c,0,(int32_t)c->r[0],0); // 800B79D8
  if (crb(c,2)) { goto L_800B7A84; } // 800B79DC
  c->r[3]=c->r[3]+0x00000068u; // 800B79E0
  c->r[4]=c->r[31]+0x00000060u; // 800B79E4
  c->lr=0x800B79ECu; f_800361A0(c); // 800B79E8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B79EC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B79F0
  c->lr=0x800B79F8u; f_8025037C(c); // 800B79F4
  c->r[6]=R32(c->r[31]+0x00000394u); // 800B79F8
  c->r[3]=c->r[1]+0x00000024u; // 800B79FC
  c->r[4]=c->r[31]+0x00000060u; // 800B7A00
  c->r[5]=c->r[1]+0x00000030u; // 800B7A04
  c->r[6]=c->r[6]+0x000000B0u; // 800B7A08
  c->r[7]=0u+0x00000000u; // 800B7A0C
  c->lr=0x800B7A14u; f_8002BE64(c); // 800B7A10
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800B7A14
  c->r[3]=0u+0x805D0000u; // 800B7A18
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B7A1C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800B7A20
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7A24
  c->r[4]=c->r[31]|c->r[31]; // 800B7A28
  W32(c->r[1]+0x00000018u,c->r[5]); // 800B7A2C
  c->r[7]=c->r[1]+0x00000018u; // 800B7A30
  c->r[6]=0u+0x00000014u; // 800B7A34
  c->r[8]=0u+0x00000000u; // 800B7A38
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B7A3C
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B7A40
  W32(c->r[1]+0x00000020u,c->r[0]); // 800B7A44
  c->r[3]=R32(c->r[31]+0x00000438u); // 800B7A48
  c->r[5]=R32(c->r[31]+0x00000394u); // 800B7A4C
  c->lr=0x800B7A54u; f_801FA6A4(c); // 800B7A50
  c->r[0]=R32(c->r[31]+0x000003C4u); // 800B7A54
  cmps(c,0,(int32_t)c->r[0],0); // 800B7A58
  if (crb(c,2)) { goto L_800B7A6C; } // 800B7A5C
  c->r[3]=c->r[31]+0x00000044u; // 800B7A60
  c->r[4]=c->r[31]+0x000003CCu; // 800B7A64
  c->lr=0x800B7A6Cu; f_800361A0(c); // 800B7A68
L_800B7A6C:;
  c->r[6]=0u+0x803A0000u; // 800B7A6C
  c->r[3]=R32(c->r[31]+0x00000438u); // 800B7A70
  c->r[5]=c->r[31]+0x00000044u; // 800B7A74
  c->r[4]=0u+0x00000000u; // 800B7A78
  c->r[6]=c->r[6]+0xFFFFCE28u; // 800B7A7C
  c->lr=0x800B7A84u; f_801FBEC0(c); // 800B7A80
L_800B7A84:;
  c->r[3]=c->r[31]|c->r[31]; // 800B7A84
  c->r[4]=0u+0x00000000u; // 800B7A88
  c->lr=0x800B7A90u; f_801F7C00(c); // 800B7A8C
  c->r[7]=0u+0x803D0000u; // 800B7A90
  {uint32_t ea=c->r[7]+0xFFFFF7FCu; c->r[6]=R32(ea); c->r[7]=ea;} // 800B7A94
  c->r[3]=c->r[31]|c->r[31]; // 800B7A98
  c->r[4]=c->r[1]+0x0000000Cu; // 800B7A9C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B7AA0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B7AA4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B7AA8
  W32(c->r[1]+0x00000010u,c->r[5]); // 800B7AAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7AB0
  c->lr=0x800B7AB8u; f_800B7828(c); // 800B7AB4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800B7AB8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800B7ABC
  c->lr=c->r[0]; // 800B7AC0
  c->r[1]=c->r[1]+0x00000050u; // 800B7AC4
  return; // 800B7AC8
}

// fn_800B7ACC
void f_800B7ACC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7ACC
  c->r[0]=c->lr; // 800B7AD0
  c->r[4]=0u+0x00000000u; // 800B7AD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B7AD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B7ADC
  c->r[31]=c->r[3]|c->r[3]; // 800B7AE0
  c->r[3]=R32(c->r[3]+0x00000438u); // 800B7AE4
  c->lr=0x800B7AECu; f_801FAF00(c); // 800B7AE8
  cmps(c,0,(int32_t)c->r[3],0); // 800B7AEC
  if (!crb(c,2)) { goto L_800B7B84; } // 800B7AF0
  c->r[3]=c->r[31]|c->r[31]; // 800B7AF4
  c->r[4]=0u+0x0000000Au; // 800B7AF8
  c->lr=0x800B7B00u; f_801F5AB4(c); // 800B7AFC
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B7B00
  c->r[3]=c->r[31]+0x0000002Cu; // 800B7B04
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B7B08
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800B7B0C
  c->r[0]=c->r[0]|0x00000004u; // 800B7B10
  c->r[4]=c->r[4]+0x0000005Cu; // 800B7B14
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800B7B18
  c->lr=0x800B7B20u; f_800361A0(c); // 800B7B1C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B7B20
  c->r[3]=c->r[31]+0x00000060u; // 800B7B24
  c->r[4]=c->r[4]+0x00000068u; // 800B7B28
  c->lr=0x800B7B30u; f_800361A0(c); // 800B7B2C
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800B7B30
  c->r[3]=0u+0x805D0000u; // 800B7B34
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B7B38
  c->r[3]=c->r[3]+0x00006CF8u; // 800B7B3C
  c->r[4]=c->r[1]+0x00000008u; // 800B7B40
  c->r[5]=0u+0x00040000u; // 800B7B44
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B7B48
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B7B4C
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B7B50
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B7B54
  c->lr=0x800B7B5Cu; f_802236F8(c); // 800B7B58
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800B7B5C
  c->r[3]=c->r[31]|c->r[31]; // 800B7B60
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B7B64
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B7B68
  c->ctr=c->r[12]; // 800B7B6C
  if (true) { c->lr=0x800B7B74u; dispatch(c,c->ctr); } // 800B7B70
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B7B74
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B7B78
  c->lr=0x800B7B80u; f_8025037C(c); // 800B7B7C
  goto L_800B7BA4; // 800B7B80
L_800B7B84:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B7B84
  c->r[3]=c->r[31]+0x0000002Cu; // 800B7B88
  c->r[4]=c->r[4]+0x0000005Cu; // 800B7B8C
  c->lr=0x800B7B94u; f_800361A0(c); // 800B7B90
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B7B94
  c->r[3]=c->r[31]+0x00000060u; // 800B7B98
  c->r[4]=c->r[4]+0x00000068u; // 800B7B9C
  c->lr=0x800B7BA4u; f_800361A0(c); // 800B7BA0
L_800B7BA4:;
  c->r[3]=c->r[31]|c->r[31]; // 800B7BA4
  c->r[4]=0u+0x00000000u; // 800B7BA8
  c->lr=0x800B7BB0u; f_801F7C00(c); // 800B7BAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B7BB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B7BB4
  c->lr=c->r[0]; // 800B7BB8
  c->r[1]=c->r[1]+0x00000020u; // 800B7BBC
  return; // 800B7BC0
}

// fn_800B7BC4
void f_800B7BC4(Ctx* __restrict c) {
  c->r[5]=R16(c->r[3]+0x000003BEu); // 800B7BC4
  c->r[0]=0u+0x00000001u; // 800B7BC8
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B7BCC
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFBu; // 800B7BD0
  W16(c->r[3]+0x000003BEu,c->r[5]); // 800B7BD4
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800B7BD8
  W8(c->r[3]+0x0000006Fu,c->r[0]); // 800B7BDC
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800B7BE0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B7BE4
  c->ctr=c->r[12]; // 800B7BE8
  if (true) { dispatch(c,c->ctr); return; } // 800B7BEC
}

// fn_800B7BF0
void f_800B7BF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7BF0
  c->r[0]=c->lr; // 800B7BF4
  c->r[4]=0u+0x000000E1u; // 800B7BF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7BFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7C00
  c->r[31]=c->r[3]|c->r[3]; // 800B7C04
  c->r[3]=c->r[3]+0x00000210u; // 800B7C08
  c->lr=0x800B7C10u; f_80221630(c); // 800B7C0C
  cmps(c,0,(int32_t)c->r[3],0); // 800B7C10
  if (!crb(c,2)) { goto L_800B7C20; } // 800B7C14
  c->r[3]=0u+0x00000000u; // 800B7C18
  goto L_800B7C3C; // 800B7C1C
L_800B7C20:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B7C20
  c->r[3]=0u+0x00000498u; // 800B7C24
  c->r[5]=0u+0x00000000u; // 800B7C28
  c->r[4]=c->r[4]+0x0000010Cu; // 800B7C2C
  c->lr=0x800B7C34u; f_8024EE50(c); // 800B7C30
  c->r[0]=cntlz(c->r[3]); // 800B7C34
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B7C38
L_800B7C3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7C3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7C40
  c->lr=c->r[0]; // 800B7C44
  c->r[1]=c->r[1]+0x00000010u; // 800B7C48
  return; // 800B7C4C
}

// fn_800B7C50
void f_800B7C50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7C50
  c->r[0]=c->lr; // 800B7C54
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B7C58
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800B7C5C
  c->r[31]=0u+0x803D0000u; // 800B7C60
  c->r[31]=c->r[31]+0xFFFFF7F0u; // 800B7C64
  W32(c->r[1]+0x00000038u,c->r[30]); // 800B7C68
  c->r[30]=c->r[3]|c->r[3]; // 800B7C6C
  c->lr=0x800B7C74u; f_801F4F28(c); // 800B7C70
  c->r[0]=R32(c->r[30]+0x000003C0u); // 800B7C74
  cmps(c,0,(int32_t)c->r[0],101); // 800B7C78
  if (crb(c,2)) { goto L_800B7CCC; } // 800B7C7C
  if (!crb(c,0)) { goto L_800B7C90; } // 800B7C80
  cmps(c,0,(int32_t)c->r[0],100); // 800B7C84
  if (!crb(c,0)) { goto L_800B7C9C; } // 800B7C88
  goto L_800B7D28; // 800B7C8C
L_800B7C90:;
  cmps(c,0,(int32_t)c->r[0],103); // 800B7C90
  if (!crb(c,0)) { goto L_800B7D28; } // 800B7C94
  goto L_800B7CFC; // 800B7C98
L_800B7C9C:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B7C9C
  c->r[5]=c->r[31]+0x00000018u; // 800B7CA0
  c->r[3]=c->r[30]|c->r[30]; // 800B7CA4
  c->r[4]=c->r[1]+0x00000020u; // 800B7CA8
  c->r[7]=R32(c->r[31]+0x00000018u); // 800B7CAC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B7CB0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B7CB4
  W32(c->r[1]+0x00000020u,c->r[7]); // 800B7CB8
  W32(c->r[1]+0x00000024u,c->r[6]); // 800B7CBC
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B7CC0
  c->lr=0x800B7CC8u; f_800B7828(c); // 800B7CC4
  goto L_800B7D28; // 800B7CC8
L_800B7CCC:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B7CCC
  c->r[5]=c->r[31]+0x00000024u; // 800B7CD0
  c->r[3]=c->r[30]|c->r[30]; // 800B7CD4
  c->r[4]=c->r[1]+0x00000014u; // 800B7CD8
  c->r[7]=R32(c->r[31]+0x00000024u); // 800B7CDC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B7CE0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B7CE4
  W32(c->r[1]+0x00000014u,c->r[7]); // 800B7CE8
  W32(c->r[1]+0x00000018u,c->r[6]); // 800B7CEC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B7CF0
  c->lr=0x800B7CF8u; f_800B7828(c); // 800B7CF4
  goto L_800B7D28; // 800B7CF8
L_800B7CFC:;
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B7CFC
  c->r[5]=c->r[31]+0x00000030u; // 800B7D00
  c->r[3]=c->r[30]|c->r[30]; // 800B7D04
  c->r[4]=c->r[1]+0x00000008u; // 800B7D08
  c->r[7]=R32(c->r[31]+0x00000030u); // 800B7D0C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B7D10
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B7D14
  W32(c->r[1]+0x00000008u,c->r[7]); // 800B7D18
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B7D1C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B7D20
  c->lr=0x800B7D28u; f_800B7828(c); // 800B7D24
L_800B7D28:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B7D28
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800B7D2C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800B7D30
  c->lr=c->r[0]; // 800B7D34
  c->r[1]=c->r[1]+0x00000040u; // 800B7D38
  return; // 800B7D3C
}

// fn_800B7D40
void f_800B7D40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7D40
  c->r[0]=c->lr; // 800B7D44
  c->r[5]=c->r[3]|c->r[3]; // 800B7D48
  c->r[3]=c->r[4]|c->r[4]; // 800B7D4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7D50
  c->r[4]=R32(c->r[5]+0x00000394u); // 800B7D54
  c->r[5]=0u+0x00000000u; // 800B7D58
  c->lr=0x800B7D60u; f_80250BF4(c); // 800B7D5C
  c->r[0]=cntlz(c->r[3]); // 800B7D60
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B7D64
  c->r[3]=0u-c->r[0]; // 800B7D68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7D6C
  c->lr=c->r[0]; // 800B7D70
  c->r[1]=c->r[1]+0x00000010u; // 800B7D74
  return; // 800B7D78
}

// fn_800B7D7C
void f_800B7D7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7D7C
  c->r[0]=c->lr; // 800B7D80
  c->r[5]=0u+0x80620000u; // 800B7D84
  c->r[4]=0u+0x00000002u; // 800B7D88
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B7D8C
  c->r[5]=c->r[5]+0x00007688u; // 800B7D90
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800B7D94
  W32(c->r[1]+0x00000088u,c->r[30]); // 800B7D98
  c->r[30]=c->r[3]|c->r[3]; // 800B7D9C
  c->r[3]=R32(c->r[5]+0x00000014u); // 800B7DA0
  c->lr=0x800B7DA8u; f_80037670(c); // 800B7DA4
  cmps(c,0,(int32_t)c->r[3],0); // 800B7DA8
  if (!crb(c,2)) { goto L_800B7E0C; } // 800B7DAC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B7DB0
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B7DB4
  cmps(c,0,(int32_t)c->r[0],0); // 800B7DB8
  if (!crb(c,2)) { goto L_800B7E0C; } // 800B7DBC
  {uint32_t ea=c->r[2]+0xFFFF9B50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7DC0
  c->r[3]=c->r[1]+0x00000008u; // 800B7DC4
  c->r[4]=c->r[30]+0x0000002Cu; // 800B7DC8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800B7DCC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800B7DD0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B7DD4
  c->lr=0x800B7DDCu; f_800361A0(c); // 800B7DD8
  c->r[31]=0u+0x80550000u; // 800B7DDC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7DE0
  c->r[31]=c->r[31]+0x00003D60u; // 800B7DE4
  c->r[5]=c->r[30]|c->r[30]; // 800B7DE8
  c->r[3]=c->r[31]+0x00000010u; // 800B7DEC
  c->r[6]=c->r[1]+0x00000008u; // 800B7DF0
  c->r[7]=c->r[1]+0x00000020u; // 800B7DF4
  c->r[4]=0u+0x000001FFu; // 800B7DF8
  c->lr=0x800B7E00u; f_80226910(c); // 800B7DFC
  c->r[3]=c->r[31]+0x00000010u; // 800B7E00
  c->r[4]=c->r[1]+0x00000020u; // 800B7E04
  c->lr=0x800B7E0Cu; f_80226D68(c); // 800B7E08
L_800B7E0C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800B7E0C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800B7E10
  c->r[30]=R32(c->r[1]+0x00000088u); // 800B7E14
  c->lr=c->r[0]; // 800B7E18
  c->r[1]=c->r[1]+0x00000090u; // 800B7E1C
  return; // 800B7E20
}

// fn_800B7E24
void f_800B7E24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7E24
  c->r[0]=c->lr; // 800B7E28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7E2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7E30
  c->r[31]=c->r[3]|c->r[3]; // 800B7E34
  c->r[3]=c->r[3]+0x00000210u; // 800B7E38
  c->lr=0x800B7E40u; f_8004BAD4(c); // 800B7E3C
  cmps(c,0,(int32_t)c->r[3],0); // 800B7E40
  if (crb(c,2)) { goto L_800B7EB4; } // 800B7E44
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B7E48
  c->r[4]=c->r[31]|c->r[31]; // 800B7E4C
  c->r[3]=c->r[31]+0x00000210u; // 800B7E50
  c->r[0]=c->r[0]|0xAA000000u; // 800B7E54
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B7E58
  c->lr=0x800B7E60u; f_80043E44(c); // 800B7E5C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7E60
  c->r[3]=c->r[31]+0x00000210u; // 800B7E64
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B7E68
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B7E6C
  c->lr=0x800B7E74u; f_80043E34(c); // 800B7E70
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B7E74
  c->r[4]=0u+0x803A0000u; // 800B7E78
  c->r[4]=c->r[4]+0xFFFFCE34u; // 800B7E7C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B7E80
  c->r[4]=c->r[4]+0x00000009u; // 800B7E84
  c->lr=0x800B7E8Cu; f_80256EC4(c); // 800B7E88
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B7E8C
  c->r[5]=c->r[3]|c->r[3]; // 800B7E90
  c->r[3]=c->r[31]+0x00000210u; // 800B7E94
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800B7E98
  c->lr=0x800B7EA0u; f_8004BAC8(c); // 800B7E9C
  {uint32_t ea=c->r[2]+0xFFFF9B54u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7EA0
  c->r[3]=c->r[31]+0x00000210u; // 800B7EA4
  c->f[2]=c->f[1]; // 800B7EA8
  c->f[3]=c->f[1]; // 800B7EAC
  c->lr=0x800B7EB4u; f_80043E24(c); // 800B7EB0
L_800B7EB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7EB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7EB8
  c->lr=c->r[0]; // 800B7EBC
  c->r[1]=c->r[1]+0x00000010u; // 800B7EC0
  return; // 800B7EC4
}

// fn_800B7EC8
void f_800B7EC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7EC8
  c->r[0]=c->lr; // 800B7ECC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7ED0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7ED4
  c->r[31]=c->r[3]|c->r[3]; // 800B7ED8
  c->r[3]=c->r[3]+0x00000210u; // 800B7EDC
  c->lr=0x800B7EE4u; f_80221698(c); // 800B7EE0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B7EE4
  cmps(c,0,(int32_t)c->r[3],0); // 800B7EE8
  if (crb(c,2)) { goto L_800B7F0C; } // 800B7EEC
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B7EF0
  cmps(c,0,(int32_t)c->r[0],0); // 800B7EF4
  if (crb(c,2)) { goto L_800B7F0C; } // 800B7EF8
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B7EFC
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800B7F00
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B7F04
  goto L_800B7F18; // 800B7F08
L_800B7F0C:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B7F0C
  c->r[0]=c->r[0]|0x80000000u; // 800B7F10
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B7F14
L_800B7F18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7F18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7F1C
  c->lr=c->r[0]; // 800B7F20
  c->r[1]=c->r[1]+0x00000010u; // 800B7F24
  return; // 800B7F28
}

// fn_800B7F2C
void f_800B7F2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7F2C
  c->r[0]=c->lr; // 800B7F30
  cmps(c,0,(int32_t)c->r[3],0); // 800B7F34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7F38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7F3C
  c->r[31]=c->r[4]|c->r[4]; // 800B7F40
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B7F44
  c->r[30]=c->r[3]|c->r[3]; // 800B7F48
  if (crb(c,2)) { goto L_800B7F68; } // 800B7F4C
  c->r[4]=0u+0x00000000u; // 800B7F50
  c->lr=0x800B7F58u; f_8026A06C(c); // 800B7F54
  cmps(c,0,(int32_t)c->r[31],0); // 800B7F58
  if (!crb(c,1)) { goto L_800B7F68; } // 800B7F5C
  c->r[3]=c->r[30]|c->r[30]; // 800B7F60
  c->lr=0x800B7F68u; f_8026A268(c); // 800B7F64
L_800B7F68:;
  c->r[3]=c->r[30]|c->r[30]; // 800B7F68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7F6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B7F70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7F74
  c->lr=c->r[0]; // 800B7F78
  c->r[1]=c->r[1]+0x00000010u; // 800B7F7C
  return; // 800B7F80
}

// fn_800B7F84
void f_800B7F84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7F84
  c->r[0]=c->lr; // 800B7F88
  c->r[4]=0u+0x00000000u; // 800B7F8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7F90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7F94
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B7F98
  c->r[30]=c->r[3]|c->r[3]; // 800B7F9C
  c->lr=0x800B7FA4u; f_801F57D0(c); // 800B7FA0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B7FA4
  c->r[3]=c->r[30]|c->r[30]; // 800B7FA8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800B7FAC
  c->ctr=c->r[12]; // 800B7FB0
  if (true) { c->lr=0x800B7FB8u; dispatch(c,c->ctr); } // 800B7FB4
  c->r[3]=c->r[30]|c->r[30]; // 800B7FB8
  c->lr=0x800B7FC0u; f_801F4B94(c); // 800B7FBC
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800B7FC0
  c->r[3]=0u+0x00000003u; // 800B7FC4
  c->r[4]=0u+0x00000018u; // 800B7FC8
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800B7FCC
  c->r[0]=c->r[0]|0x00000834u; // 800B7FD0
  c->r[3]=c->r[30]+0x0000008Cu; // 800B7FD4
  W8(c->r[30]+0x0000006Du,c->r[4]); // 800B7FD8
  c->r[4]=c->r[30]+0x0000002Cu; // 800B7FDC
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B7FE0
  c->lr=0x800B7FE8u; f_800361A0(c); // 800B7FE4
  c->r[3]=c->r[30]+0x00000098u; // 800B7FE8
  c->r[4]=c->r[30]+0x00000060u; // 800B7FEC
  c->lr=0x800B7FF4u; f_800361A0(c); // 800B7FF0
  c->r[31]=0u+0x00000001u; // 800B7FF4
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B7FF8
  W8(c->r[30]+0x00000074u,c->r[31]); // 800B7FFC
  c->r[3]=c->r[30]|c->r[30]; // 800B8000
  c->lr=0x800B8008u; f_801F58BC(c); // 800B8004
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B8008
  c->r[4]=0u+0x803A0000u; // 800B800C
  c->r[4]=c->r[4]+0xFFFFCE60u; // 800B8010
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800B8014
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B8018
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B801C
  c->lr=0x800B8024u; f_80256EC4(c); // 800B8020
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B8024
  c->r[4]=0u+0x00000000u; // 800B8028
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B802C
  W32(c->r[5]+0x000000E4u,c->r[3]); // 800B8030
  c->f[2]=c->f[1]; // 800B8034
  c->r[5]=R32(c->r[30]+0x00000394u); // 800B8038
  c->r[3]=R32(c->r[5]+0x0000010Cu); // 800B803C
  c->r[5]=R32(c->r[5]+0x00000034u); // 800B8040
  c->lr=0x800B8048u; f_8024FEAC(c); // 800B8044
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B8048
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B804C
  c->lr=0x800B8054u; f_802501B0(c); // 800B8050
  c->r[3]=0u+0x805D0000u; // 800B8054
  c->r[4]=c->r[30]+0x0000002Cu; // 800B8058
  c->r[3]=c->r[3]+0x000078B0u; // 800B805C
  c->lr=0x800B8064u; f_802351CC(c); // 800B8060
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B8064
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800B8068
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)112); // 800B806C
  W32(c->r[30]+0x00000444u,c->r[31]); // 800B8070
  c->lr=0x800B8078u; f_8024E174(c); // 800B8074
  W32(c->r[30]+0x00000438u,c->r[3]); // 800B8078
  c->r[3]=c->r[30]|c->r[30]; // 800B807C
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800B8080
  c->lr=0x800B8088u; f_801F56F4(c); // 800B8084
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B8088
  c->r[3]=c->r[30]|c->r[30]; // 800B808C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B8090
  c->ctr=c->r[12]; // 800B8094
  if (true) { c->lr=0x800B809Cu; dispatch(c,c->ctr); } // 800B8098
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B809C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B80A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B80A4
  c->lr=c->r[0]; // 800B80A8
  c->r[1]=c->r[1]+0x00000010u; // 800B80AC
  return; // 800B80B0
}

// fn_800B80B4
void f_800B80B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B80B4
  c->r[0]=c->lr; // 800B80B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B80BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B80C0
  c->r[31]=0u+0x805D0000u; // 800B80C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B80C8
  c->r[30]=c->r[3]|c->r[3]; // 800B80CC
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B80D0
  c->lr=0x800B80D8u; f_80045264(c); // 800B80D4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800B80D8
  cmpu(c,0,c->r[0],0x0000000Bu); // 800B80DC
  if (!crb(c,2)) { goto L_800B811C; } // 800B80E0
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B80E4
  c->lr=0x800B80ECu; f_80037AF0(c); // 800B80E8
  cmpu(c,0,c->r[3],c->r[30]); // 800B80EC
  if (!crb(c,2)) { goto L_800B811C; } // 800B80F0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800B80F4
  cmps(c,0,(int32_t)c->r[0],101); // 800B80F8
  if (crb(c,2)) { goto L_800B811C; } // 800B80FC
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8100
  c->r[3]=c->r[30]|c->r[30]; // 800B8104
  c->r[4]=0u+0x00000065u; // 800B8108
  c->r[5]=0u+0x00000000u; // 800B810C
  c->r[6]=0u+0x00000000u; // 800B8110
  c->r[7]=0u+0x00000000u; // 800B8114
  c->lr=0x800B811Cu; f_801F4D44(c); // 800B8118
L_800B811C:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B811C
  c->r[3]=c->r[30]|c->r[30]; // 800B8120
  c->r[12]=R32(c->r[12]+0x00000068u); // 800B8124
  c->ctr=c->r[12]; // 800B8128
  if (true) { c->lr=0x800B8130u; dispatch(c,c->ctr); } // 800B812C
  c->r[3]=c->r[30]|c->r[30]; // 800B8130
  c->lr=0x800B8138u; f_801F4C0C(c); // 800B8134
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B8138
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B813C
  cmps(c,0,(int32_t)c->r[0],0); // 800B8140
  if (crb(c,2)) { goto L_800B8154; } // 800B8144
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800B8148
  cmps(c,0,(int32_t)c->r[0],0); // 800B814C
  if (crb(c,2)) { goto L_800B8188; } // 800B8150
L_800B8154:;
  c->r[3]=c->r[30]+0x0000002Cu; // 800B8154
  c->r[4]=c->r[30]+0x0000008Cu; // 800B8158
  c->lr=0x800B8160u; f_80296CAC(c); // 800B815C
  {uint32_t ea=c->r[2]+0xFFFF9B64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8160
  fcmp(c,0,c->f[1],c->f[0]); // 800B8164
  if (!crb(c,0)) { goto L_800B817C; } // 800B8168
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800B816C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800B8170
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B8174
  goto L_800B8188; // 800B8178
L_800B817C:;
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800B817C
  c->r[0]=c->r[0]|0x00000004u; // 800B8180
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B8184
L_800B8188:;
  c->r[3]=c->r[30]|c->r[30]; // 800B8188
  c->lr=0x800B8190u; f_800B8A94(c); // 800B818C
  c->r[3]=c->r[30]|c->r[30]; // 800B8190
  c->lr=0x800B8198u; f_801F56F4(c); // 800B8194
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8198
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B819C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B81A0
  c->lr=c->r[0]; // 800B81A4
  c->r[1]=c->r[1]+0x00000010u; // 800B81A8
  return; // 800B81AC
}

// fn_800B81B0
void f_800B81B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B81B0
  c->r[0]=c->lr; // 800B81B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B81B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B81BC
  c->r[31]=c->r[3]|c->r[3]; // 800B81C0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B81C4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B81C8
  c->lr=0x800B81D0u; f_802501B0(c); // 800B81CC
  c->r[3]=c->r[31]|c->r[31]; // 800B81D0
  c->r[4]=0u+0x00000000u; // 800B81D4
  c->lr=0x800B81DCu; f_801F5244(c); // 800B81D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B81DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B81E0
  c->lr=c->r[0]; // 800B81E4
  c->r[1]=c->r[1]+0x00000010u; // 800B81E8
  return; // 800B81EC
}

// fn_800B81F0
void f_800B81F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B81F0
  c->r[0]=c->lr; // 800B81F4
  c->r[7]=0u+0x803D0000u; // 800B81F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B81FC
  c->r[0]=0u+0x00000000u; // 800B8200
  c->r[4]=c->r[1]+0x00000008u; // 800B8204
  W16(c->r[3]+0x000003BCu,c->r[0]); // 800B8208
  {uint32_t ea=c->r[7]+0xFFFFF970u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B820C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B8210
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B8214
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B8218
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B821C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B8220
  c->lr=0x800B8228u; f_800B8238(c); // 800B8224
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8228
  c->lr=c->r[0]; // 800B822C
  c->r[1]=c->r[1]+0x00000020u; // 800B8230
  return; // 800B8234
}

// fn_800B8238
void f_800B8238(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8238
  c->r[0]=c->lr; // 800B823C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8240
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B8244
  c->r[31]=c->r[4]|c->r[4]; // 800B8248
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B824C
  c->r[30]=c->r[3]|c->r[3]; // 800B8250
  c->r[3]=c->r[31]|c->r[31]; // 800B8254
  c->lr=0x800B825Cu; f_802B9FDC(c); // 800B8258
  cmps(c,0,(int32_t)c->r[3],0); // 800B825C
  if (crb(c,2)) { goto L_800B827C; } // 800B8260
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B8264
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B8268
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B826C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800B8270
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B8274
  W32(c->r[30]+0x00000024u,c->r[0]); // 800B8278
L_800B827C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B827C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8280
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B8284
  c->lr=c->r[0]; // 800B8288
  c->r[1]=c->r[1]+0x00000010u; // 800B828C
  return; // 800B8290
}

// fn_800B8294
void f_800B8294(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8294
  c->r[0]=c->lr; // 800B8298
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B829C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B82A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B82A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B82A8
  c->r[29]=c->r[3]|c->r[3]; // 800B82AC
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B82B0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B82B4
  c->lr=0x800B82BCu; f_802501B0(c); // 800B82B8
  c->r[3]=c->r[29]|c->r[29]; // 800B82BC
  c->r[4]=0u+0x00000000u; // 800B82C0
  c->lr=0x800B82C8u; f_801F5244(c); // 800B82C4
  c->r[3]=R32(c->r[29]+0x00000394u); // 800B82C8
  c->r[4]=0u+0x803A0000u; // 800B82CC
  c->r[4]=c->r[4]+0xFFFFCE48u; // 800B82D0
  c->r[5]=c->r[29]+0x0000002Cu; // 800B82D4
  c->r[3]=c->r[3]+0x000000B0u; // 800B82D8
  c->lr=0x800B82E0u; f_80296750(c); // 800B82DC
  c->r[30]=0u+0x00000000u; // 800B82E0
  c->r[4]=R32(c->r[29]+0x00000394u); // 800B82E4
  W8(c->r[29]+0x00000074u,c->r[30]); // 800B82E8
  c->r[3]=c->r[29]|c->r[29]; // 800B82EC
  c->lr=0x800B82F4u; f_801F5418(c); // 800B82F0
  cmps(c,0,(int32_t)c->r[3],0); // 800B82F4
  if (!crb(c,0)) { goto L_800B8328; } // 800B82F8
  c->r[0]=R16(c->r[29]+0x000003BEu); // 800B82FC
  c->r[3]=c->r[29]|c->r[29]; // 800B8300
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8304
  c->r[4]=0u+0x00000064u; // 800B8308
  c->r[0]=c->r[0]|0x00000080u; // 800B830C
  c->r[5]=0u+0x00000000u; // 800B8310
  W16(c->r[29]+0x000003BEu,c->r[0]); // 800B8314
  c->r[6]=0u+0x00000000u; // 800B8318
  c->r[7]=0u+0x00000000u; // 800B831C
  c->lr=0x800B8324u; f_801F4D44(c); // 800B8320
  goto L_800B8358; // 800B8324
L_800B8328:;
  c->r[31]=0u+0x805D0000u; // 800B8328
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B832C
  c->lr=0x800B8334u; f_800447E4(c); // 800B8330
  cmpu(c,0,c->r[3],0x00000001u); // 800B8334
  if (!crb(c,2)) { goto L_800B8344; } // 800B8338
  W8(c->r[29]+0x0000006Fu,c->r[30]); // 800B833C
  goto L_800B8350; // 800B8340
L_800B8344:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B8344
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800B8348
  W8(c->r[29]+0x0000006Fu,c->r[0]); // 800B834C
L_800B8350:;
  c->r[3]=c->r[29]|c->r[29]; // 800B8350
  c->lr=0x800B8358u; f_801F5B14(c); // 800B8354
L_800B8358:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8358
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B835C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B8360
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B8364
  c->lr=c->r[0]; // 800B8368
  c->r[1]=c->r[1]+0x00000020u; // 800B836C
  return; // 800B8370
}

// fn_800B8374
void f_800B8374(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8374
  c->r[0]=c->lr; // 800B8378
  W32(c->r[1]+0x00000084u,c->r[0]); // 800B837C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800B8380
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800B8384
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 800B8388
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 800B838C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800B8390
  c->r[31]=c->r[3]|c->r[3]; // 800B8394
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B8398
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B839C
  c->lr=0x800B83A4u; f_802501B0(c); // 800B83A0
  c->r[0]=0u+0x00000000u; // 800B83A4
  c->r[3]=c->r[31]+0x00000038u; // 800B83A8
  W8(c->r[31]+0x00000074u,c->r[0]); // 800B83AC
  c->r[4]=c->r[31]+0x0000002Cu; // 800B83B0
  c->lr=0x800B83B8u; f_800361A0(c); // 800B83B4
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B83B8
  c->r[3]=0u+0x80550000u; // 800B83BC
  c->r[3]=c->r[3]+0x00003D60u; // 800B83C0
  c->r[4]=c->r[31]+0x00000038u; // 800B83C4
  c->f[2]=c->f[1]; // 800B83C8
  c->r[5]=c->r[1]+0x00000008u; // 800B83CC
  c->f[3]=c->f[1]; // 800B83D0
  c->r[6]=0u+0x00000000u; // 800B83D4
  c->r[7]=0u+0x00000000u; // 800B83D8
  c->lr=0x800B83E0u; f_801D5488(c); // 800B83DC
  c->r[5]=R32(c->r[31]+0x00000394u); // 800B83E0
  c->r[3]=c->r[31]+0x00000060u; // 800B83E4
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B83E8
  c->r[4]=c->r[5]+0x00000068u; // 800B83EC
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B83F0
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B83F4
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800B83F8
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B83FC
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800B8400
  c->lr=0x800B8408u; f_800361A0(c); // 800B8404
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B8408
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B840C
  c->lr=0x800B8414u; f_802501B0(c); // 800B8410
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800B8414
  c->r[0]=0u+0x00000001u; // 800B8418
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B841C
  c->r[4]=c->r[31]+0x0000002Cu; // 800B8420
  c->r[5]=c->r[5]|0x00002000u; // 800B8424
  W16(c->r[31]+0x000003BEu,c->r[5]); // 800B8428
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800B842C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B8430
  c->r[3]=c->r[3]+0x0000005Cu; // 800B8434
  c->lr=0x800B843Cu; f_800361A0(c); // 800B8438
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B843C
  c->r[4]=0u+0x00000040u; // 800B8440
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B8444
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B8448
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B844C
  c->r[3]=c->r[3]+0x0000001Cu; // 800B8450
  c->lr=0x800B8458u; f_802518A4(c); // 800B8454
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B8458
  c->r[4]=0u+0x00000006u; // 800B845C
  c->r[3]=c->r[3]+0x0000001Cu; // 800B8460
  c->lr=0x800B8468u; f_80251824(c); // 800B8464
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B8468
  c->r[3]=c->r[31]|c->r[31]; // 800B846C
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8470
  c->r[5]=0u+0x00000004u; // 800B8474
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B8478
  c->r[6]=0u+0x00000001u; // 800B847C
  c->f[2]=c->f[1]; // 800B8480
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B8484
  c->ctr=c->r[12]; // 800B8488
  if (true) { c->lr=0x800B8490u; dispatch(c,c->ctr); } // 800B848C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B8490
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B8494
  c->lr=0x800B849Cu; f_802501B0(c); // 800B8498
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B849C
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800B84A0
  cmps(c,0,(int32_t)c->r[0],0); // 800B84A4
  if (crb(c,2)) { goto L_800B85F4; } // 800B84A8
  c->r[3]=c->r[3]+0x00000068u; // 800B84AC
  c->r[4]=c->r[31]+0x00000060u; // 800B84B0
  c->lr=0x800B84B8u; f_800361A0(c); // 800B84B4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B84B8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B84BC
  c->lr=0x800B84C4u; f_8025037C(c); // 800B84C0
  c->r[6]=R32(c->r[31]+0x00000394u); // 800B84C4
  c->r[3]=c->r[1]+0x0000003Cu; // 800B84C8
  c->r[4]=c->r[31]+0x00000060u; // 800B84CC
  c->r[5]=c->r[1]+0x00000048u; // 800B84D0
  c->r[6]=c->r[6]+0x000000B0u; // 800B84D4
  c->r[7]=0u+0x00000000u; // 800B84D8
  c->lr=0x800B84E0u; f_8002BE64(c); // 800B84DC
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800B84E0
  c->r[3]=0u+0x805D0000u; // 800B84E4
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B84E8
  c->r[3]=c->r[3]+0x00003F6Cu; // 800B84EC
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B84F0
  c->r[4]=c->r[31]|c->r[31]; // 800B84F4
  W32(c->r[1]+0x00000024u,c->r[5]); // 800B84F8
  c->r[7]=c->r[1]+0x00000024u; // 800B84FC
  c->r[6]=0u+0x00000015u; // 800B8500
  c->r[8]=0u+0x00000000u; // 800B8504
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B8508
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B850C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800B8510
  c->r[3]=R32(c->r[31]+0x00000438u); // 800B8514
  c->r[5]=R32(c->r[31]+0x00000394u); // 800B8518
  c->lr=0x800B8520u; f_801FA6A4(c); // 800B851C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8520
  {uint32_t ea=c->r[2]+0xFFFF9B68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8524
  fcmp(c,0,c->f[1],c->f[0]); // 800B8528
  if (!crb(c,0)) { goto L_800B85DC; } // 800B852C
  c->r[4]=0u+0x803A0000u; // 800B8530
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8534
  c->r[4]=c->r[4]+0xFFFFCE54u; // 800B8538
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B853C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800B8540
  c->r[3]=c->r[31]+0x00000044u; // 800B8544
  c->r[5]=R32(c->r[4]+0x00000000u); // 800B8548
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B854C
  c->r[4]=R32(c->r[4]+0x00000008u); // 800B8550
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 800B8554
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800B8558
  W32(c->r[1]+0x00000030u,c->r[5]); // 800B855C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B8560
  W32(c->r[1]+0x00000038u,c->r[4]); // 800B8564
  {uint32_t ea=c->r[31]+0x00000048u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B8568
  W32(c->r[1]+0x00000018u,c->r[5]); // 800B856C
  W32(c->r[1]+0x00000020u,c->r[4]); // 800B8570
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800B8574
  c->lr=0x800B857Cu; f_80296B0C(c); // 800B8578
  {uint32_t ea=c->r[2]+0xFFFF9B6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B857C
  c->f[30]=c->f[1]; // 800B8580
  fcmp(c,0,c->f[1],c->f[0]); // 800B8584
  if (!crb(c,0)) { goto L_800B8590; } // 800B8588
  c->f[30]=c->f[0]; // 800B858C
L_800B8590:;
  c->r[3]=c->r[1]+0x00000030u; // 800B8590
  c->r[4]=c->r[31]+0x0000002Cu; // 800B8594
  c->r[5]=c->r[3]|c->r[3]; // 800B8598
  c->lr=0x800B85A0u; f_80296A70(c); // 800B859C
  c->r[3]=c->r[1]+0x00000030u; // 800B85A0
  c->lr=0x800B85A8u; f_80296B0C(c); // 800B85A4
  {uint32_t ea=c->r[2]+0xFFFF9B70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B85A8
  fcmp(c,0,c->f[1],c->f[0]); // 800B85AC
  if (!crb(c,0)) { goto L_800B85BC; } // 800B85B0
  {uint32_t ea=c->r[2]+0xFFFF9B74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B85B4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800B85B8
L_800B85BC:;
  c->r[3]=c->r[1]+0x00000030u; // 800B85BC
  c->r[4]=c->r[31]+0x00000044u; // 800B85C0
  c->lr=0x800B85C8u; f_80296AB0(c); // 800B85C4
  c->f[1]=c->f[30]; // 800B85C8
  c->r[3]=c->r[31]+0x00000044u; // 800B85CC
  c->r[4]=c->r[3]|c->r[3]; // 800B85D0
  c->lr=0x800B85D8u; f_80296A94(c); // 800B85D4
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[31]);} // 800B85D8
L_800B85DC:;
  c->r[6]=0u+0x803A0000u; // 800B85DC
  c->r[3]=R32(c->r[31]+0x00000438u); // 800B85E0
  c->r[5]=c->r[31]+0x00000044u; // 800B85E4
  c->r[4]=0u+0x00000000u; // 800B85E8
  c->r[6]=c->r[6]+0xFFFFCE48u; // 800B85EC
  c->lr=0x800B85F4u; f_801FBEC0(c); // 800B85F0
L_800B85F4:;
  c->r[3]=c->r[31]|c->r[31]; // 800B85F4
  c->r[4]=0u+0x00000000u; // 800B85F8
  c->lr=0x800B8600u; f_801F7C00(c); // 800B85FC
  c->r[7]=0u+0x803D0000u; // 800B8600
  {uint32_t ea=c->r[7]+0xFFFFF97Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800B8604
  c->r[3]=c->r[31]|c->r[31]; // 800B8608
  c->r[4]=c->r[1]+0x0000000Cu; // 800B860C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B8610
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B8614
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B8618
  W32(c->r[1]+0x00000010u,c->r[5]); // 800B861C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8620
  c->lr=0x800B8628u; f_800B8238(c); // 800B8624
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800B8628
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800B862C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 800B8630
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 800B8634
  c->r[0]=R32(c->r[1]+0x00000084u); // 800B8638
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800B863C
  c->lr=c->r[0]; // 800B8640
  c->r[1]=c->r[1]+0x00000080u; // 800B8644
  return; // 800B8648
}

// fn_800B864C
void f_800B864C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B864C
  c->r[0]=c->lr; // 800B8650
  c->r[4]=0u+0x00000000u; // 800B8654
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8658
  c->r[0]=0u+0x00000000u; // 800B865C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B8660
  c->r[31]=c->r[3]|c->r[3]; // 800B8664
  W8(c->r[3]+0x00000074u,c->r[0]); // 800B8668
  c->r[3]=R32(c->r[3]+0x00000438u); // 800B866C
  c->lr=0x800B8674u; f_801FAF00(c); // 800B8670
  cmps(c,0,(int32_t)c->r[3],0); // 800B8674
  if (!crb(c,2)) { goto L_800B8714; } // 800B8678
  c->r[3]=c->r[31]|c->r[31]; // 800B867C
  c->r[4]=0u+0x0000000Bu; // 800B8680
  c->lr=0x800B8688u; f_801F5AB4(c); // 800B8684
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B8688
  c->r[3]=c->r[31]+0x0000002Cu; // 800B868C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B8690
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800B8694
  c->r[0]=c->r[0]|0x00000004u; // 800B8698
  c->r[4]=c->r[4]+0x0000005Cu; // 800B869C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800B86A0
  c->lr=0x800B86A8u; f_800361A0(c); // 800B86A4
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B86A8
  c->r[3]=0u+0x805D0000u; // 800B86AC
  c->r[7]=R32(c->r[31]+0x00000394u); // 800B86B0
  c->r[3]=c->r[3]+0x00006CF8u; // 800B86B4
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800B86B8
  c->r[4]=c->r[1]+0x00000008u; // 800B86BC
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800B86C0
  c->r[5]=0u+0x00040000u; // 800B86C4
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800B86C8
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B86CC
  {uint32_t ea=c->r[7]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B86D0
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800B86D4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B86D8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B86DC
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B86E0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B86E4
  c->lr=0x800B86ECu; f_802236F8(c); // 800B86E8
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800B86EC
  c->r[3]=c->r[31]|c->r[31]; // 800B86F0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B86F4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B86F8
  c->ctr=c->r[12]; // 800B86FC
  if (true) { c->lr=0x800B8704u; dispatch(c,c->ctr); } // 800B8700
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B8704
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B8708
  c->lr=0x800B8710u; f_8025037C(c); // 800B870C
  goto L_800B873C; // 800B8710
L_800B8714:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B8714
  c->r[3]=c->r[31]+0x0000002Cu; // 800B8718
  c->r[4]=c->r[4]+0x0000005Cu; // 800B871C
  c->lr=0x800B8724u; f_800361A0(c); // 800B8720
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8724
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B8728
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800B872C
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800B8730
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8734
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800B8738
L_800B873C:;
  c->r[3]=c->r[31]|c->r[31]; // 800B873C
  c->r[4]=0u+0x00000000u; // 800B8740
  c->lr=0x800B8748u; f_801F7C00(c); // 800B8744
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8748
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B874C
  c->lr=c->r[0]; // 800B8750
  c->r[1]=c->r[1]+0x00000020u; // 800B8754
  return; // 800B8758
}

// fn_800B875C
void f_800B875C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B875C
  c->r[0]=c->lr; // 800B8760
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8764
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B8768
  c->r[31]=c->r[3]|c->r[3]; // 800B876C
  c->r[3]=c->r[3]+0x0000002Cu; // 800B8770
  c->r[4]=c->r[31]+0x0000008Cu; // 800B8774
  c->lr=0x800B877Cu; f_800361A0(c); // 800B8778
  c->r[3]=c->r[31]+0x00000060u; // 800B877C
  c->r[4]=c->r[31]+0x00000098u; // 800B8780
  c->lr=0x800B8788u; f_800361A0(c); // 800B8784
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B8788
  c->r[4]=c->r[31]+0x0000002Cu; // 800B878C
  c->r[3]=c->r[3]+0x0000005Cu; // 800B8790
  c->lr=0x800B8798u; f_800361A0(c); // 800B8794
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B8798
  c->r[4]=c->r[31]+0x00000060u; // 800B879C
  c->r[3]=c->r[3]+0x00000068u; // 800B87A0
  c->lr=0x800B87A8u; f_800361A0(c); // 800B87A4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B87A8
  c->r[3]=c->r[31]|c->r[31]; // 800B87AC
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B87B0
  c->r[5]=0u+0x00000004u; // 800B87B4
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B87B8
  c->r[6]=0u+0x00000001u; // 800B87BC
  c->f[2]=c->f[1]; // 800B87C0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B87C4
  c->ctr=c->r[12]; // 800B87C8
  if (true) { c->lr=0x800B87D0u; dispatch(c,c->ctr); } // 800B87CC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B87D0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B87D4
  c->lr=0x800B87DCu; f_802501B0(c); // 800B87D8
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B87DC
  c->r[3]=0u+0x805D0000u; // 800B87E0
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800B87E4
  c->r[3]=c->r[3]+0x00006CF8u; // 800B87E8
  c->r[4]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800B87EC
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B87F0
  c->r[5]=c->r[4]|0x00000004u; // 800B87F4
  W16(c->r[31]+0x000003BEu,c->r[5]); // 800B87F8
  c->r[4]=c->r[1]+0x00000008u; // 800B87FC
  c->r[5]=0u+0x00040000u; // 800B8800
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B8804
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B8808
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B880C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B8810
  c->lr=0x800B8818u; f_802236F8(c); // 800B8814
  c->r[0]=0u+0x00000001u; // 800B8818
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800B881C
  c->r[3]=c->r[31]|c->r[31]; // 800B8820
  c->r[4]=0u+0x0000000Bu; // 800B8824
  W8(c->r[31]+0x00000074u,c->r[0]); // 800B8828
  c->lr=0x800B8830u; f_801F5AB4(c); // 800B882C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B8830
  c->r[3]=c->r[31]|c->r[31]; // 800B8834
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B8838
  c->ctr=c->r[12]; // 800B883C
  if (true) { c->lr=0x800B8844u; dispatch(c,c->ctr); } // 800B8840
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8844
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B8848
  c->lr=c->r[0]; // 800B884C
  c->r[1]=c->r[1]+0x00000020u; // 800B8850
  return; // 800B8854
}

// fn_800B8858
void f_800B8858(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8858
  c->r[0]=c->lr; // 800B885C
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8860
  c->r[5]=0u+0x00000004u; // 800B8864
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8868
  c->r[6]=0u+0x00000001u; // 800B886C
  c->f[2]=c->f[1]; // 800B8870
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B8874
  c->r[31]=c->r[3]|c->r[3]; // 800B8878
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800B887C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B8880
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B8884
  c->ctr=c->r[12]; // 800B8888
  if (true) { c->lr=0x800B8890u; dispatch(c,c->ctr); } // 800B888C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B8890
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B8894
  c->lr=0x800B889Cu; f_802501B0(c); // 800B8898
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B889C
  c->r[3]=0u+0x805D0000u; // 800B88A0
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800B88A4
  c->r[3]=c->r[3]+0x00006CF8u; // 800B88A8
  c->r[4]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800B88AC
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B88B0
  c->r[5]=c->r[4]|0x00000004u; // 800B88B4
  W16(c->r[31]+0x000003BEu,c->r[5]); // 800B88B8
  c->r[4]=c->r[1]+0x00000008u; // 800B88BC
  c->r[5]=0u+0x00040000u; // 800B88C0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B88C4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B88C8
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B88CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B88D0
  c->lr=0x800B88D8u; f_802236F8(c); // 800B88D4
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800B88D8
  c->r[3]=c->r[31]|c->r[31]; // 800B88DC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B88E0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B88E4
  c->ctr=c->r[12]; // 800B88E8
  if (true) { c->lr=0x800B88F0u; dispatch(c,c->ctr); } // 800B88EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B88F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B88F4
  c->lr=c->r[0]; // 800B88F8
  c->r[1]=c->r[1]+0x00000020u; // 800B88FC
  return; // 800B8900
}

// fn_800B8904
void f_800B8904(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8904
  c->r[0]=c->lr; // 800B8908
  c->r[4]=c->r[3]|c->r[3]; // 800B890C
  c->r[3]=0u+0x000004A7u; // 800B8910
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8914
  c->r[5]=0u+0x00000000u; // 800B8918
  c->r[4]=R32(c->r[4]+0x00000394u); // 800B891C
  c->r[4]=c->r[4]+0x0000010Cu; // 800B8920
  c->lr=0x800B8928u; f_8024EE50(c); // 800B8924
  c->r[0]=cntlz(c->r[3]); // 800B8928
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B892C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8930
  c->lr=c->r[0]; // 800B8934
  c->r[1]=c->r[1]+0x00000010u; // 800B8938
  return; // 800B893C
}

// fn_800B8940
void f_800B8940(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8940
  c->r[0]=c->lr; // 800B8944
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B8948
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800B894C
  c->r[31]=0u+0x803D0000u; // 800B8950
  c->r[31]=c->r[31]+0xFFFFF970u; // 800B8954
  W32(c->r[1]+0x00000038u,c->r[30]); // 800B8958
  c->r[30]=c->r[3]|c->r[3]; // 800B895C
  c->lr=0x800B8964u; f_801F4F28(c); // 800B8960
  c->r[3]=R32(c->r[30]+0x000003C0u); // 800B8964
  cmps(c,0,(int32_t)c->r[3],102); // 800B8968
  if (crb(c,2)) { goto L_800B8A08; } // 800B896C
  if (!crb(c,0)) { goto L_800B8984; } // 800B8970
  cmps(c,0,(int32_t)c->r[3],100); // 800B8974
  if (crb(c,2)) { goto L_800B8990; } // 800B8978
  if (!crb(c,0)) { goto L_800B89CC; } // 800B897C
  goto L_800B8A7C; // 800B8980
L_800B8984:;
  cmps(c,0,(int32_t)c->r[3],104); // 800B8984
  if (!crb(c,0)) { goto L_800B8A7C; } // 800B8988
  goto L_800B8A44; // 800B898C
L_800B8990:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800B8990
  cmps(c,0,(int32_t)c->r[0],100); // 800B8994
  if (crb(c,2)) { goto L_800B8A7C; } // 800B8998
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800B899C
  c->r[5]=c->r[31]+0x00000018u; // 800B89A0
  c->r[3]=c->r[30]|c->r[30]; // 800B89A4
  c->r[4]=c->r[1]+0x0000002Cu; // 800B89A8
  c->r[7]=R32(c->r[31]+0x00000018u); // 800B89AC
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B89B0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B89B4
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800B89B8
  W32(c->r[1]+0x00000030u,c->r[6]); // 800B89BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B89C0
  c->lr=0x800B89C8u; f_800B8238(c); // 800B89C4
  goto L_800B8A7C; // 800B89C8
L_800B89CC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800B89CC
  cmps(c,0,(int32_t)c->r[0],101); // 800B89D0
  if (crb(c,2)) { goto L_800B8A7C; } // 800B89D4
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800B89D8
  c->r[5]=c->r[31]+0x00000024u; // 800B89DC
  c->r[3]=c->r[30]|c->r[30]; // 800B89E0
  c->r[4]=c->r[1]+0x00000020u; // 800B89E4
  c->r[7]=R32(c->r[31]+0x00000024u); // 800B89E8
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B89EC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B89F0
  W32(c->r[1]+0x00000020u,c->r[7]); // 800B89F4
  W32(c->r[1]+0x00000024u,c->r[6]); // 800B89F8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B89FC
  c->lr=0x800B8A04u; f_800B8238(c); // 800B8A00
  goto L_800B8A7C; // 800B8A04
L_800B8A08:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800B8A08
  cmps(c,0,(int32_t)c->r[0],102); // 800B8A0C
  if (crb(c,2)) { goto L_800B8A7C; } // 800B8A10
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800B8A14
  c->r[5]=c->r[31]+0x00000030u; // 800B8A18
  c->r[3]=c->r[30]|c->r[30]; // 800B8A1C
  c->r[4]=c->r[1]+0x00000014u; // 800B8A20
  c->r[7]=R32(c->r[31]+0x00000030u); // 800B8A24
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B8A28
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B8A2C
  W32(c->r[1]+0x00000014u,c->r[7]); // 800B8A30
  W32(c->r[1]+0x00000018u,c->r[6]); // 800B8A34
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B8A38
  c->lr=0x800B8A40u; f_800B8238(c); // 800B8A3C
  goto L_800B8A7C; // 800B8A40
L_800B8A44:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800B8A44
  cmps(c,0,(int32_t)c->r[0],103); // 800B8A48
  if (crb(c,2)) { goto L_800B8A7C; } // 800B8A4C
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800B8A50
  c->r[5]=c->r[31]+0x0000003Cu; // 800B8A54
  c->r[3]=c->r[30]|c->r[30]; // 800B8A58
  c->r[4]=c->r[1]+0x00000008u; // 800B8A5C
  c->r[7]=R32(c->r[31]+0x0000003Cu); // 800B8A60
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B8A64
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B8A68
  W32(c->r[1]+0x00000008u,c->r[7]); // 800B8A6C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B8A70
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B8A74
  c->lr=0x800B8A7Cu; f_800B8238(c); // 800B8A78
L_800B8A7C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B8A7C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800B8A80
  c->r[30]=R32(c->r[1]+0x00000038u); // 800B8A84
  c->lr=c->r[0]; // 800B8A88
  c->r[1]=c->r[1]+0x00000040u; // 800B8A8C
  return; // 800B8A90
}

// fn_800B8A94
void f_800B8A94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8A94
  c->r[0]=c->lr; // 800B8A98
  c->r[5]=0u+0x80620000u; // 800B8A9C
  c->r[4]=0u+0x00000002u; // 800B8AA0
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B8AA4
  c->r[5]=c->r[5]+0x00007688u; // 800B8AA8
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800B8AAC
  W32(c->r[1]+0x00000088u,c->r[30]); // 800B8AB0
  c->r[30]=c->r[3]|c->r[3]; // 800B8AB4
  c->r[3]=R32(c->r[5]+0x00000014u); // 800B8AB8
  c->lr=0x800B8AC0u; f_80037670(c); // 800B8ABC
  cmps(c,0,(int32_t)c->r[3],0); // 800B8AC0
  if (!crb(c,2)) { goto L_800B8B24; } // 800B8AC4
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B8AC8
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B8ACC
  cmps(c,0,(int32_t)c->r[0],0); // 800B8AD0
  if (!crb(c,2)) { goto L_800B8B24; } // 800B8AD4
  {uint32_t ea=c->r[2]+0xFFFF9B78u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8AD8
  c->r[3]=c->r[1]+0x00000008u; // 800B8ADC
  c->r[4]=c->r[30]+0x0000002Cu; // 800B8AE0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800B8AE4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800B8AE8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B8AEC
  c->lr=0x800B8AF4u; f_800361A0(c); // 800B8AF0
  c->r[31]=0u+0x80550000u; // 800B8AF4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8AF8
  c->r[31]=c->r[31]+0x00003D60u; // 800B8AFC
  c->r[5]=c->r[30]|c->r[30]; // 800B8B00
  c->r[3]=c->r[31]+0x00000010u; // 800B8B04
  c->r[6]=c->r[1]+0x00000008u; // 800B8B08
  c->r[7]=c->r[1]+0x00000020u; // 800B8B0C
  c->r[4]=0u+0x000001FFu; // 800B8B10
  c->lr=0x800B8B18u; f_80226910(c); // 800B8B14
  c->r[3]=c->r[31]+0x00000010u; // 800B8B18
  c->r[4]=c->r[1]+0x00000020u; // 800B8B1C
  c->lr=0x800B8B24u; f_80226D68(c); // 800B8B20
L_800B8B24:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800B8B24
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800B8B28
  c->r[30]=R32(c->r[1]+0x00000088u); // 800B8B2C
  c->lr=c->r[0]; // 800B8B30
  c->r[1]=c->r[1]+0x00000090u; // 800B8B34
  return; // 800B8B38
}

// fn_800B8B3C
void f_800B8B3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8B3C
  c->r[0]=c->lr; // 800B8B40
  cmps(c,0,(int32_t)c->r[3],0); // 800B8B44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8B48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B8B4C
  c->r[31]=c->r[4]|c->r[4]; // 800B8B50
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B8B54
  c->r[30]=c->r[3]|c->r[3]; // 800B8B58
  if (crb(c,2)) { goto L_800B8B78; } // 800B8B5C
  c->r[4]=0u+0x00000000u; // 800B8B60
  c->lr=0x800B8B68u; f_8026A06C(c); // 800B8B64
  cmps(c,0,(int32_t)c->r[31],0); // 800B8B68
  if (!crb(c,1)) { goto L_800B8B78; } // 800B8B6C
  c->r[3]=c->r[30]|c->r[30]; // 800B8B70
  c->lr=0x800B8B78u; f_8026A268(c); // 800B8B74
L_800B8B78:;
  c->r[3]=c->r[30]|c->r[30]; // 800B8B78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8B7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B8B80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8B84
  c->lr=c->r[0]; // 800B8B88
  c->r[1]=c->r[1]+0x00000010u; // 800B8B8C
  return; // 800B8B90
}

// fn_800B8B94
void f_800B8B94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8B94
  c->r[0]=c->lr; // 800B8B98
  c->r[4]=0u+0x00000000u; // 800B8B9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8BA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B8BA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B8BA8
  c->r[30]=c->r[3]|c->r[3]; // 800B8BAC
  c->lr=0x800B8BB4u; f_801F57D0(c); // 800B8BB0
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B8BB4
  c->r[3]=c->r[30]|c->r[30]; // 800B8BB8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800B8BBC
  c->ctr=c->r[12]; // 800B8BC0
  if (true) { c->lr=0x800B8BC8u; dispatch(c,c->ctr); } // 800B8BC4
  c->r[3]=c->r[30]|c->r[30]; // 800B8BC8
  c->lr=0x800B8BD0u; f_801F4B94(c); // 800B8BCC
  c->r[3]=0u+0x00000003u; // 800B8BD0
  c->r[0]=0u+0x00000019u; // 800B8BD4
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800B8BD8
  c->r[3]=c->r[30]|c->r[30]; // 800B8BDC
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B8BE0
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800B8BE4
  c->lr=0x800B8BECu; f_801F58BC(c); // 800B8BE8
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B8BEC
  c->r[31]=0u+0x00000001u; // 800B8BF0
  c->r[4]=0u+0x803A0000u; // 800B8BF4
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800B8BF8
  c->r[4]=c->r[4]+0xFFFFCE88u; // 800B8BFC
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B8C00
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B8C04
  c->lr=0x800B8C0Cu; f_80256EC4(c); // 800B8C08
  c->r[6]=R32(c->r[30]+0x00000394u); // 800B8C0C
  c->r[5]=0u+0x805D0000u; // 800B8C10
  c->r[4]=c->r[30]+0x0000002Cu; // 800B8C14
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800B8C18
  c->r[3]=c->r[5]+0x000078B0u; // 800B8C1C
  c->lr=0x800B8C24u; f_802351CC(c); // 800B8C20
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B8C24
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800B8C28
  c->r[3]=c->r[30]|c->r[30]; // 800B8C2C
  c->r[0]=R16(c->r[30]+0x000003BEu); // 800B8C30
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800B8C34
  c->r[0]=c->r[0]|0x00000814u; // 800B8C38
  W16(c->r[30]+0x000003BEu,c->r[0]); // 800B8C3C
  c->lr=0x800B8C44u; f_801F56F4(c); // 800B8C40
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B8C44
  c->r[3]=c->r[30]|c->r[30]; // 800B8C48
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B8C4C
  c->ctr=c->r[12]; // 800B8C50
  if (true) { c->lr=0x800B8C58u; dispatch(c,c->ctr); } // 800B8C54
  c->r[3]=c->r[30]|c->r[30]; // 800B8C58
  c->lr=0x800B8C60u; f_800B95B0(c); // 800B8C5C
  c->r[3]=0u+0x80550000u; // 800B8C60
  c->r[3]=c->r[3]+0x00003D60u; // 800B8C64
  c->r[3]=c->r[3]+0x00000010u; // 800B8C68
  c->lr=0x800B8C70u; f_80226E94(c); // 800B8C6C
  {uint32_t ea=c->r[2]+0xFFFF9B88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8C70
  c->r[3]=c->r[30]|c->r[30]; // 800B8C74
  c->r[4]=c->r[30]+0x00000080u; // 800B8C78
  c->r[5]=c->r[30]+0x00000082u; // 800B8C7C
  c->r[6]=c->r[30]+0x00000084u; // 800B8C80
  c->r[7]=c->r[30]+0x00000086u; // 800B8C84
  c->lr=0x800B8C8Cu; f_801F5EE4(c); // 800B8C88
  c->r[3]=c->r[30]|c->r[30]; // 800B8C8C
  c->lr=0x800B8C94u; f_800B968C(c); // 800B8C90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8C94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8C98
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B8C9C
  c->lr=c->r[0]; // 800B8CA0
  c->r[1]=c->r[1]+0x00000010u; // 800B8CA4
  return; // 800B8CA8
}

// fn_800B8CAC
void f_800B8CAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8CAC
  c->r[0]=c->lr; // 800B8CB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8CB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B8CB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B8CBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B8CC0
  c->r[29]=c->r[3]|c->r[3]; // 800B8CC4
  c->lr=0x800B8CCCu; f_800B8E0C(c); // 800B8CC8
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800B8CCC
  c->r[3]=c->r[29]|c->r[29]; // 800B8CD0
  c->r[12]=R32(c->r[12]+0x00000068u); // 800B8CD4
  c->ctr=c->r[12]; // 800B8CD8
  if (true) { c->lr=0x800B8CE0u; dispatch(c,c->ctr); } // 800B8CDC
  c->r[3]=c->r[29]|c->r[29]; // 800B8CE0
  c->lr=0x800B8CE8u; f_801F4C0C(c); // 800B8CE4
  c->r[3]=c->r[29]|c->r[29]; // 800B8CE8
  c->lr=0x800B8CF0u; f_800B95B0(c); // 800B8CEC
  c->r[30]=0u+0x805D0000u; // 800B8CF0
  c->r[3]=c->r[30]+0x00003F6Cu; // 800B8CF4
  c->lr=0x800B8CFCu; f_80037AF0(c); // 800B8CF8
  cmpu(c,0,c->r[3],c->r[29]); // 800B8CFC
  if (!crb(c,2)) { goto L_800B8D6C; } // 800B8D00
  c->r[3]=c->r[30]+0x00003F6Cu; // 800B8D04
  c->lr=0x800B8D0Cu; f_800376F0(c); // 800B8D08
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800B8D0C
  cmps(c,0,(int32_t)c->r[0],113); // 800B8D10
  if (!crb(c,2)) { goto L_800B8D40; } // 800B8D14
  c->r[3]=c->r[30]+0x00003F6Cu; // 800B8D18
  c->lr=0x800B8D20u; f_800B8D98(c); // 800B8D1C
  c->r[31]=c->r[3]|c->r[3]; // 800B8D20
  c->r[3]=c->r[30]+0x00003F6Cu; // 800B8D24
  c->lr=0x800B8D2Cu; f_80037AF0(c); // 800B8D28
  cmpu(c,0,c->r[3],c->r[31]); // 800B8D2C
  if (!crb(c,2)) { goto L_800B8D40; } // 800B8D30
  c->r[0]=0u+0x00000001u; // 800B8D34
  W8(c->r[29]+0x0000006Fu,c->r[0]); // 800B8D38
  goto L_800B8D6C; // 800B8D3C
L_800B8D40:;
  c->r[31]=0u+0x805D0000u; // 800B8D40
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B8D44
  c->lr=0x800B8D4Cu; f_800447E4(c); // 800B8D48
  cmpu(c,0,c->r[3],0x00000001u); // 800B8D4C
  if (!crb(c,2)) { goto L_800B8D60; } // 800B8D50
  c->r[0]=0u+0x00000000u; // 800B8D54
  W8(c->r[29]+0x0000006Fu,c->r[0]); // 800B8D58
  goto L_800B8D6C; // 800B8D5C
L_800B8D60:;
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B8D60
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800B8D64
  W8(c->r[29]+0x0000006Fu,c->r[0]); // 800B8D68
L_800B8D6C:;
  c->r[3]=c->r[29]|c->r[29]; // 800B8D6C
  c->lr=0x800B8D74u; f_801F56F4(c); // 800B8D70
  c->r[3]=c->r[29]|c->r[29]; // 800B8D74
  c->lr=0x800B8D7Cu; f_800B9730(c); // 800B8D78
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8D7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B8D80
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B8D84
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B8D88
  c->lr=c->r[0]; // 800B8D8C
  c->r[1]=c->r[1]+0x00000020u; // 800B8D90
  return; // 800B8D94
}

// fn_800B8D98
void f_800B8D98(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000003E4u); // 800B8D98
  return; // 800B8D9C
}

// fn_800B8DA0
void f_800B8DA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8DA0
  c->r[0]=c->lr; // 800B8DA4
  c->r[4]=0u+0x000000E1u; // 800B8DA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8DAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B8DB0
  c->r[31]=c->r[3]|c->r[3]; // 800B8DB4
  c->r[3]=c->r[3]+0x00000210u; // 800B8DB8
  c->lr=0x800B8DC0u; f_80221630(c); // 800B8DBC
  cmps(c,0,(int32_t)c->r[3],0); // 800B8DC0
  if (!crb(c,2)) { goto L_800B8DD0; } // 800B8DC4
  c->r[3]=0u+0x00000000u; // 800B8DC8
  goto L_800B8DF8; // 800B8DCC
L_800B8DD0:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800B8DD0
  c->r[3]=c->r[13]+0xFFFF83D0u; // 800B8DD4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B8DD8
  c->r[5]=0u+0x00000000u; // 800B8DDC
  c->r[0]=rotl(c->r[0],2)&0x000000FCu; // 800B8DE0
  c->r[3]=R32(c->r[3]+c->r[0]); // 800B8DE4
  c->r[4]=c->r[4]+0x0000010Cu; // 800B8DE8
  c->lr=0x800B8DF0u; f_8024EE50(c); // 800B8DEC
  c->r[0]=cntlz(c->r[3]); // 800B8DF0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B8DF4
L_800B8DF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8DF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8DFC
  c->lr=c->r[0]; // 800B8E00
  c->r[1]=c->r[1]+0x00000010u; // 800B8E04
  return; // 800B8E08
}

// fn_800B8E0C
void f_800B8E0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8E0C
  c->r[0]=c->lr; // 800B8E10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8E14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B8E18
  c->r[31]=0u+0x805D0000u; // 800B8E1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B8E20
  c->r[30]=c->r[3]|c->r[3]; // 800B8E24
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B8E28
  c->lr=0x800B8E30u; f_80045264(c); // 800B8E2C
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800B8E30
  c->r[4]=c->r[13]+0xFFFF83D8u; // 800B8E34
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800B8E38
  c->r[0]=rotl(c->r[0],2)&0x000000FCu; // 800B8E3C
  c->r[0]=R32(c->r[4]+c->r[0]); // 800B8E40
  cmpu(c,0,c->r[0],c->r[3]); // 800B8E44
  if (!crb(c,2)) { goto L_800B8E84; } // 800B8E48
  c->r[3]=c->r[31]+0x00003F6Cu; // 800B8E4C
  c->lr=0x800B8E54u; f_80037AF0(c); // 800B8E50
  cmpu(c,0,c->r[3],c->r[30]); // 800B8E54
  if (!crb(c,2)) { goto L_800B8E84; } // 800B8E58
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000003BCu); // 800B8E5C
  cmps(c,0,(int32_t)c->r[0],101); // 800B8E60
  if (crb(c,2)) { goto L_800B8E84; } // 800B8E64
  {uint32_t ea=c->r[2]+0xFFFF9B8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8E68
  c->r[3]=c->r[30]|c->r[30]; // 800B8E6C
  c->r[4]=0u+0x00000065u; // 800B8E70
  c->r[5]=0u+0x00000000u; // 800B8E74
  c->r[6]=0u+0x00000000u; // 800B8E78
  c->r[7]=0u+0x00000000u; // 800B8E7C
  c->lr=0x800B8E84u; f_801F4D44(c); // 800B8E80
L_800B8E84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8E84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8E88
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B8E8C
  c->lr=c->r[0]; // 800B8E90
  c->r[1]=c->r[1]+0x00000010u; // 800B8E94
  return; // 800B8E98
}

// fn_800B8E9C
void f_800B8E9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8E9C
  c->r[0]=c->lr; // 800B8EA0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B8EA4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800B8EA8
  c->r[31]=0u+0x803D0000u; // 800B8EAC
  c->r[31]=c->r[31]+0xFFFFFAF8u; // 800B8EB0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800B8EB4
  c->r[30]=c->r[3]|c->r[3]; // 800B8EB8
  c->lr=0x800B8EC0u; f_801F4F28(c); // 800B8EBC
  c->r[3]=R32(c->r[30]+0x000003C0u); // 800B8EC0
  cmps(c,0,(int32_t)c->r[3],101); // 800B8EC4
  if (crb(c,2)) { goto L_800B8F20; } // 800B8EC8
  if (!crb(c,0)) { goto L_800B8EDC; } // 800B8ECC
  cmps(c,0,(int32_t)c->r[3],100); // 800B8ED0
  if (!crb(c,0)) { goto L_800B8EE8; } // 800B8ED4
  goto L_800B8F7C; // 800B8ED8
L_800B8EDC:;
  cmps(c,0,(int32_t)c->r[3],103); // 800B8EDC
  if (!crb(c,0)) { goto L_800B8F7C; } // 800B8EE0
  goto L_800B8F50; // 800B8EE4
L_800B8EE8:;
  c->r[0]=0u+0x00000001u; // 800B8EE8
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800B8EEC
  c->r[5]=c->r[31]+0x00000000u; // 800B8EF0
  c->r[3]=c->r[30]|c->r[30]; // 800B8EF4
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800B8EF8
  c->r[4]=c->r[1]+0x00000020u; // 800B8EFC
  c->r[7]=R32(c->r[31]+0x00000000u); // 800B8F00
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B8F04
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B8F08
  W32(c->r[1]+0x00000020u,c->r[7]); // 800B8F0C
  W32(c->r[1]+0x00000024u,c->r[6]); // 800B8F10
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B8F14
  c->lr=0x800B8F1Cu; f_800B8F94(c); // 800B8F18
  goto L_800B8F7C; // 800B8F1C
L_800B8F20:;
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800B8F20
  c->r[5]=c->r[31]+0x0000000Cu; // 800B8F24
  c->r[3]=c->r[30]|c->r[30]; // 800B8F28
  c->r[4]=c->r[1]+0x00000014u; // 800B8F2C
  c->r[7]=R32(c->r[31]+0x0000000Cu); // 800B8F30
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B8F34
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B8F38
  W32(c->r[1]+0x00000014u,c->r[7]); // 800B8F3C
  W32(c->r[1]+0x00000018u,c->r[6]); // 800B8F40
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B8F44
  c->lr=0x800B8F4Cu; f_800B8F94(c); // 800B8F48
  goto L_800B8F7C; // 800B8F4C
L_800B8F50:;
  W16(c->r[30]+0x000003BCu,c->r[3]); // 800B8F50
  c->r[5]=c->r[31]+0x00000018u; // 800B8F54
  c->r[3]=c->r[30]|c->r[30]; // 800B8F58
  c->r[4]=c->r[1]+0x00000008u; // 800B8F5C
  c->r[7]=R32(c->r[31]+0x00000018u); // 800B8F60
  c->r[6]=R32(c->r[5]+0x00000004u); // 800B8F64
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B8F68
  W32(c->r[1]+0x00000008u,c->r[7]); // 800B8F6C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B8F70
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B8F74
  c->lr=0x800B8F7Cu; f_800B8F94(c); // 800B8F78
L_800B8F7C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B8F7C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800B8F80
  c->r[30]=R32(c->r[1]+0x00000038u); // 800B8F84
  c->lr=c->r[0]; // 800B8F88
  c->r[1]=c->r[1]+0x00000040u; // 800B8F8C
  return; // 800B8F90
}

// fn_800B8F94
void f_800B8F94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8F94
  c->r[0]=c->lr; // 800B8F98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8F9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B8FA0
  c->r[31]=c->r[4]|c->r[4]; // 800B8FA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B8FA8
  c->r[30]=c->r[3]|c->r[3]; // 800B8FAC
  c->r[3]=c->r[31]|c->r[31]; // 800B8FB0
  c->lr=0x800B8FB8u; f_802B9FDC(c); // 800B8FB4
  cmps(c,0,(int32_t)c->r[3],0); // 800B8FB8
  if (crb(c,2)) { goto L_800B8FD8; } // 800B8FBC
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B8FC0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B8FC4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B8FC8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800B8FCC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B8FD0
  W32(c->r[30]+0x00000024u,c->r[0]); // 800B8FD4
L_800B8FD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8FD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8FDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B8FE0
  c->lr=c->r[0]; // 800B8FE4
  c->r[1]=c->r[1]+0x00000010u; // 800B8FE8
  return; // 800B8FEC
}

// fn_800B8FF0
void f_800B8FF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8FF0
  c->r[0]=c->lr; // 800B8FF4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B8FF8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800B8FFC
  c->r[31]=c->r[3]|c->r[3]; // 800B9000
  W32(c->r[1]+0x00000038u,c->r[30]); // 800B9004
  W32(c->r[1]+0x00000034u,c->r[29]); // 800B9008
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B900C
  c->r[0]=R32(c->r[3]+0x00000438u); // 800B9010
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9014
  cmps(c,0,(int32_t)c->r[0],0); // 800B9018
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B901C
  {uint32_t ea=c->r[4]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9020
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800B9024
  {uint32_t ea=c->r[4]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9028
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800B902C
  if (!crb(c,2)) { goto L_800B9048; } // 800B9030
  c->r[0]=0u+0x00000001u; // 800B9034
  W32(c->r[3]+0x00000444u,c->r[0]); // 800B9038
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 800B903C
  c->lr=0x800B9044u; f_8024E174(c); // 800B9040
  W32(c->r[31]+0x00000438u,c->r[3]); // 800B9044
L_800B9048:;
  c->r[0]=R32(c->r[31]+0x00000438u); // 800B9048
  cmps(c,0,(int32_t)c->r[0],0); // 800B904C
  if (crb(c,2)) { goto L_800B9138; } // 800B9050
  c->r[7]=0u+0x803A0000u; // 800B9054
  {uint32_t ea=c->r[7]+0xFFFFCE7Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800B9058
  c->r[3]=c->r[31]+0x00000044u; // 800B905C
  c->r[4]=c->r[1]+0x00000020u; // 800B9060
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B9064
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B9068
  W32(c->r[1]+0x00000020u,c->r[6]); // 800B906C
  W32(c->r[1]+0x00000024u,c->r[5]); // 800B9070
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B9074
  c->lr=0x800B907Cu; f_800361A0(c); // 800B9078
  {uint32_t ea=c->r[2]+0xFFFF9B90u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B907C
  c->r[4]=c->r[31]+0x0000002Cu; // 800B9080
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B9084
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800B9088
  c->r[3]=c->r[3]+0x0000005Cu; // 800B908C
  c->lr=0x800B9094u; f_800361A0(c); // 800B9090
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9094
  c->r[3]=0u+0x805D0000u; // 800B9098
  c->r[5]=R32(c->r[31]+0x00000394u); // 800B909C
  c->r[3]=c->r[3]+0x00003F6Cu; // 800B90A0
  c->r[4]=c->r[31]|c->r[31]; // 800B90A4
  c->r[7]=c->r[1]+0x00000014u; // 800B90A8
  {uint32_t ea=c->r[5]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B90AC
  c->r[6]=0u+0x00000018u; // 800B90B0
  c->r[8]=0u+0x00000000u; // 800B90B4
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800B90B8
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B90BC
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B90C0
  W32(c->r[1]+0x00000014u,c->r[5]); // 800B90C4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800B90C8
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B90CC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B90D0
  c->r[3]=R32(c->r[31]+0x00000438u); // 800B90D4
  c->r[5]=R32(c->r[31]+0x00000394u); // 800B90D8
  c->lr=0x800B90E0u; f_801FA6A4(c); // 800B90DC
  c->r[29]=0u+0x805D0000u; // 800B90E0
  c->r[3]=c->r[29]+0x000078B0u; // 800B90E4
  c->lr=0x800B90ECu; f_80037028(c); // 800B90E8
  c->r[30]=c->r[3]|c->r[3]; // 800B90EC
  c->r[3]=c->r[29]+0x000078B0u; // 800B90F0
  c->lr=0x800B90F8u; f_8003CEF4(c); // 800B90F4
  cmps(c,0,(int32_t)c->r[30],2); // 800B90F8
  if (!crb(c,2)) { goto L_800B9120; } // 800B90FC
  cmps(c,0,(int32_t)c->r[3],4); // 800B9100
  if (!crb(c,2)) { goto L_800B9120; } // 800B9104
  {uint32_t ea=c->r[2]+0xFFFF9B94u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9108
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B910C
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B9110
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B9114
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9118
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800B911C
L_800B9120:;
  c->r[6]=0u+0x803A0000u; // 800B9120
  c->r[3]=R32(c->r[31]+0x00000438u); // 800B9124
  c->r[5]=c->r[31]+0x00000044u; // 800B9128
  c->r[4]=0u+0x00000000u; // 800B912C
  c->r[6]=c->r[6]+0xFFFFCE70u; // 800B9130
  c->lr=0x800B9138u; f_801FBEC0(c); // 800B9134
L_800B9138:;
  c->r[3]=c->r[31]|c->r[31]; // 800B9138
  c->r[4]=0u+0x00000000u; // 800B913C
  c->lr=0x800B9144u; f_801F7C00(c); // 800B9140
  c->r[7]=0u+0x803D0000u; // 800B9144
  {uint32_t ea=c->r[7]+0xFFFFFB1Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800B9148
  c->r[3]=c->r[31]|c->r[31]; // 800B914C
  c->r[4]=c->r[1]+0x00000008u; // 800B9150
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B9154
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B9158
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B915C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B9160
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B9164
  c->lr=0x800B916Cu; f_800B8F94(c); // 800B9168
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B916C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800B9170
  c->r[30]=R32(c->r[1]+0x00000038u); // 800B9174
  c->r[29]=R32(c->r[1]+0x00000034u); // 800B9178
  c->lr=c->r[0]; // 800B917C
  c->r[1]=c->r[1]+0x00000040u; // 800B9180
  return; // 800B9184
}

// fn_800B9188
void f_800B9188(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9188
  c->r[0]=c->lr; // 800B918C
  c->r[4]=0u+0x00000000u; // 800B9190
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B9194
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800B9198
  c->r[31]=c->r[3]|c->r[3]; // 800B919C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800B91A0
  W32(c->r[1]+0x00000024u,c->r[29]); // 800B91A4
  c->r[3]=R32(c->r[3]+0x00000438u); // 800B91A8
  c->lr=0x800B91B0u; f_801FAF00(c); // 800B91AC
  cmps(c,0,(int32_t)c->r[3],0); // 800B91B0
  if (!crb(c,2)) { goto L_800B9328; } // 800B91B4
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800B91B8
  c->r[4]=c->r[13]+0xFFFF83D8u; // 800B91BC
  c->r[3]=c->r[31]|c->r[31]; // 800B91C0
  c->r[0]=rotl(c->r[0],2)&0x000000FCu; // 800B91C4
  c->r[0]=R32(c->r[4]+c->r[0]); // 800B91C8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800B91CC
  c->lr=0x800B91D4u; f_801F5AB4(c); // 800B91D0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B91D4
  c->r[3]=0u+0x00000000u; // 800B91D8
  c->r[30]=0u+0x805D0000u; // 800B91DC
  W16(c->r[31]+0x000003BCu,c->r[3]); // 800B91E0
  c->r[0]=c->r[0]|0x00000004u; // 800B91E4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800B91E8
  c->r[3]=c->r[30]+0x000078B0u; // 800B91EC
  c->lr=0x800B91F4u; f_80037028(c); // 800B91F0
  c->r[29]=c->r[3]|c->r[3]; // 800B91F4
  c->r[3]=c->r[30]+0x000078B0u; // 800B91F8
  c->lr=0x800B9200u; f_8003CEF4(c); // 800B91FC
  cmps(c,0,(int32_t)c->r[29],2); // 800B9200
  if (!crb(c,2)) { goto L_800B9298; } // 800B9204
  cmps(c,0,(int32_t)c->r[3],4); // 800B9208
  if (!crb(c,2)) { goto L_800B9298; } // 800B920C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B9210
  {uint32_t ea=c->r[2]+0xFFFF9B98u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9214
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9218
  fcmp(c,0,c->f[0],c->f[1]); // 800B921C
  if (!crb(c,1)) { goto L_800B9298; } // 800B9220
  {uint32_t ea=c->r[3]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9224
  {uint32_t ea=c->r[2]+0xFFFF9B9Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9228
  fcmp(c,0,c->f[0],c->f[2]); // 800B922C
  if (!crb(c,0)) { goto L_800B9298; } // 800B9230
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[1]);} // 800B9234
  c->r[3]=0u+0x80550000u; // 800B9238
  {uint32_t ea=c->r[2]+0xFFFF9B8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B923C
  c->r[3]=c->r[3]+0x00003D60u; // 800B9240
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B9244
  c->r[5]=c->r[1]+0x00000008u; // 800B9248
  {uint32_t ea=c->r[2]+0xFFFF9B94u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B924C
  c->f[3]=c->f[1]; // 800B9250
  {uint32_t ea=c->r[4]+0x00000068u; WF32(ea,c->f[1]);} // 800B9254
  c->r[6]=0u+0x00000000u; // 800B9258
  c->r[7]=0u+0x00000000u; // 800B925C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B9260
  {uint32_t ea=c->r[4]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B9264
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B9268
  {uint32_t ea=c->r[4]+0x00000070u; WF32(ea,c->f[1]);} // 800B926C
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B9270
  c->r[4]=c->r[4]+0x0000005Cu; // 800B9274
  c->lr=0x800B927Cu; f_801D5488(c); // 800B9278
  cmpu(c,0,c->r[3],0x00000001u); // 800B927C
  if (!crb(c,2)) { goto L_800B9298; } // 800B9280
  {uint32_t ea=c->r[2]+0xFFFF9BA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9284
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9288
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B928C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B9290
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 800B9294
L_800B9298:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B9298
  c->r[3]=c->r[31]+0x0000002Cu; // 800B929C
  c->r[4]=c->r[4]+0x0000005Cu; // 800B92A0
  c->lr=0x800B92A8u; f_800361A0(c); // 800B92A4
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B92A8
  c->r[3]=c->r[31]+0x00000060u; // 800B92AC
  c->r[4]=c->r[4]+0x00000068u; // 800B92B0
  c->lr=0x800B92B8u; f_800361A0(c); // 800B92B4
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800B92B8
  c->r[3]=0u+0x805D0000u; // 800B92BC
  c->r[0]=R32(c->r[31]+0x00000030u); // 800B92C0
  c->r[3]=c->r[3]+0x00006CF8u; // 800B92C4
  c->r[4]=c->r[1]+0x0000000Cu; // 800B92C8
  c->r[5]=0u+0x00040000u; // 800B92CC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B92D0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B92D4
  c->r[0]=R32(c->r[31]+0x00000034u); // 800B92D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B92DC
  c->lr=0x800B92E4u; f_802236F8(c); // 800B92E0
  W16(c->r[31]+0x000003B8u,c->r[3]); // 800B92E4
  c->r[3]=c->r[31]|c->r[31]; // 800B92E8
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B92EC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B92F0
  c->ctr=c->r[12]; // 800B92F4
  if (true) { c->lr=0x800B92FCu; dispatch(c,c->ctr); } // 800B92F8
  {uint32_t ea=c->r[2]+0xFFFF9B88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B92FC
  c->r[3]=c->r[31]|c->r[31]; // 800B9300
  c->r[4]=c->r[31]+0x00000080u; // 800B9304
  c->r[5]=c->r[31]+0x00000082u; // 800B9308
  c->r[6]=c->r[31]+0x00000084u; // 800B930C
  c->r[7]=c->r[31]+0x00000086u; // 800B9310
  c->lr=0x800B9318u; f_801F5EE4(c); // 800B9314
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B9318
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B931C
  c->lr=0x800B9324u; f_8025037C(c); // 800B9320
  goto L_800B937C; // 800B9324
L_800B9328:;
  c->r[29]=0u+0x805D0000u; // 800B9328
  c->r[3]=c->r[29]+0x000078B0u; // 800B932C
  c->lr=0x800B9334u; f_80037028(c); // 800B9330
  c->r[30]=c->r[3]|c->r[3]; // 800B9334
  c->r[3]=c->r[29]+0x000078B0u; // 800B9338
  c->lr=0x800B9340u; f_8003CEF4(c); // 800B933C
  cmps(c,0,(int32_t)c->r[30],2); // 800B9340
  if (!crb(c,2)) { goto L_800B935C; } // 800B9344
  cmps(c,0,(int32_t)c->r[3],4); // 800B9348
  if (!crb(c,2)) { goto L_800B935C; } // 800B934C
  {uint32_t ea=c->r[2]+0xFFFF9B94u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9350
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B9354
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B9358
L_800B935C:;
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B935C
  c->r[3]=c->r[31]+0x0000002Cu; // 800B9360
  c->r[4]=c->r[4]+0x0000005Cu; // 800B9364
  c->lr=0x800B936Cu; f_800361A0(c); // 800B9368
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B936C
  c->r[3]=c->r[31]+0x00000060u; // 800B9370
  c->r[4]=c->r[4]+0x00000068u; // 800B9374
  c->lr=0x800B937Cu; f_800361A0(c); // 800B9378
L_800B937C:;
  c->r[3]=c->r[31]|c->r[31]; // 800B937C
  c->r[4]=0u+0x00000000u; // 800B9380
  c->lr=0x800B9388u; f_801F7C00(c); // 800B9384
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B9388
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800B938C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800B9390
  c->r[29]=R32(c->r[1]+0x00000024u); // 800B9394
  c->lr=c->r[0]; // 800B9398
  c->r[1]=c->r[1]+0x00000030u; // 800B939C
  return; // 800B93A0
}

// fn_800B93A4
void f_800B93A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B93A4
  c->r[0]=c->lr; // 800B93A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B93AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B93B0
  c->r[31]=c->r[3]|c->r[3]; // 800B93B4
  c->lr=0x800B93BCu; f_801F5B14(c); // 800B93B8
  c->r[3]=c->r[31]|c->r[31]; // 800B93BC
  c->r[4]=c->r[31]+0x00000080u; // 800B93C0
  c->r[5]=c->r[31]+0x00000082u; // 800B93C4
  c->r[6]=c->r[31]+0x00000084u; // 800B93C8
  c->r[7]=c->r[31]+0x00000086u; // 800B93CC
  c->lr=0x800B93D4u; f_801F60D0(c); // 800B93D0
  c->r[7]=0u+0x803D0000u; // 800B93D4
  {uint32_t ea=c->r[7]+0xFFFFFB28u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B93D8
  c->r[3]=c->r[31]|c->r[31]; // 800B93DC
  c->r[4]=c->r[1]+0x00000008u; // 800B93E0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B93E4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B93E8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B93EC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B93F0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B93F4
  c->lr=0x800B93FCu; f_800B8F94(c); // 800B93F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B93FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B9400
  c->lr=c->r[0]; // 800B9404
  c->r[1]=c->r[1]+0x00000020u; // 800B9408
  return; // 800B940C
}

// fn_800B9410
void f_800B9410(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9410
  c->r[0]=c->lr; // 800B9414
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9418
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B941C
  c->r[31]=c->r[3]|c->r[3]; // 800B9420
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B9424
  c->lr=0x800B942Cu; f_801F5418(c); // 800B9428
  cmps(c,0,(int32_t)c->r[3],0); // 800B942C
  if (!crb(c,0)) { goto L_800B9460; } // 800B9430
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B9434
  c->r[3]=c->r[31]|c->r[31]; // 800B9438
  {uint32_t ea=c->r[2]+0xFFFF9B8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B943C
  c->r[4]=0u+0x00000064u; // 800B9440
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800B9444
  c->r[5]=0u+0x00000000u; // 800B9448
  c->r[0]=c->r[0]|0x00000080u; // 800B944C
  c->r[6]=0u+0x00000000u; // 800B9450
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800B9454
  c->r[7]=0u+0x00000000u; // 800B9458
  c->lr=0x800B9460u; f_801F4D44(c); // 800B945C
L_800B9460:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9460
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9464
  c->lr=c->r[0]; // 800B9468
  c->r[1]=c->r[1]+0x00000010u; // 800B946C
  return; // 800B9470
}

// fn_800B9474
void f_800B9474(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9474
  c->r[0]=c->lr; // 800B9478
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B947C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B9480
  c->r[31]=c->r[3]|c->r[3]; // 800B9484
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B9488
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B948C
  c->lr=0x800B9494u; f_802501B0(c); // 800B9490
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B9494
  c->r[6]=0u+0x00000000u; // 800B9498
  c->r[0]=0u+0x00000001u; // 800B949C
  c->r[3]=c->r[31]+0x0000002Cu; // 800B94A0
  W8(c->r[4]+0x0000014Cu,c->r[6]); // 800B94A4
  c->r[4]=c->r[31]+0x000003CCu; // 800B94A8
  c->r[5]=R32(c->r[31]+0x00000394u); // 800B94AC
  W8(c->r[5]+0x0000014Du,c->r[6]); // 800B94B0
  c->r[5]=R16(c->r[31]+0x000003BEu); // 800B94B4
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800B94B8
  c->r[0]=rotl(c->r[5],0)&0xFFFFFFFBu; // 800B94BC
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800B94C0
  c->lr=0x800B94C8u; f_800361A0(c); // 800B94C4
  c->r[3]=c->r[31]+0x00000060u; // 800B94C8
  c->r[4]=c->r[31]+0x000003D8u; // 800B94CC
  c->lr=0x800B94D4u; f_800361A0(c); // 800B94D0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B94D4
  c->r[7]=0u+0x803D0000u; // 800B94D8
  c->r[3]=c->r[31]|c->r[31]; // 800B94DC
  c->r[4]=c->r[1]+0x00000008u; // 800B94E0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 800B94E4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800B94E8
  {uint32_t ea=c->r[7]+0xFFFFFB34u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B94EC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B94F0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B94F4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B94F8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B94FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B9500
  c->lr=0x800B9508u; f_800B8F94(c); // 800B9504
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B9508
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B950C
  c->lr=c->r[0]; // 800B9510
  c->r[1]=c->r[1]+0x00000020u; // 800B9514
  return; // 800B9518
}

// fn_800B951C
void f_800B951C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B951C
  c->r[0]=c->lr; // 800B9520
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9524
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9528
  c->r[31]=c->r[3]|c->r[3]; // 800B952C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B9530
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B9534
  c->lr=0x800B953Cu; f_802501B0(c); // 800B9538
  c->r[3]=c->r[31]|c->r[31]; // 800B953C
  c->r[4]=0u+0x00000000u; // 800B9540
  c->lr=0x800B9548u; f_801F5244(c); // 800B9544
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9548
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B954C
  c->lr=c->r[0]; // 800B9550
  c->r[1]=c->r[1]+0x00000010u; // 800B9554
  return; // 800B9558
}

// fn_800B955C
void f_800B955C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000394u); // 800B955C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B9560
  f_802501B0(c); return; // 800B9564
}

// fn_800B9568
void f_800B9568(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9568
  c->r[0]=c->lr; // 800B956C
  c->r[7]=0u+0x803D0000u; // 800B9570
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B9574
  c->r[0]=0u+0x00000000u; // 800B9578
  c->r[4]=c->r[1]+0x00000008u; // 800B957C
  W16(c->r[3]+0x000003BCu,c->r[0]); // 800B9580
  {uint32_t ea=c->r[7]+0xFFFFFB40u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B9584
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B9588
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B958C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B9590
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B9594
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B9598
  c->lr=0x800B95A0u; f_800B8F94(c); // 800B959C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B95A0
  c->lr=c->r[0]; // 800B95A4
  c->r[1]=c->r[1]+0x00000020u; // 800B95A8
  return; // 800B95AC
}

// fn_800B95B0
void f_800B95B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B95B0
  c->r[0]=c->lr; // 800B95B4
  W32(c->r[1]+0x00000084u,c->r[0]); // 800B95B8
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800B95BC
  W32(c->r[1]+0x00000078u,c->r[30]); // 800B95C0
  c->r[30]=c->r[3]|c->r[3]; // 800B95C4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B95C8
  cmps(c,0,(int32_t)c->r[4],0); // 800B95CC
  if (crb(c,2)) { goto L_800B9674; } // 800B95D0
  c->r[0]=R8(c->r[4]+0x0000014Cu); // 800B95D4
  cmps(c,0,(int32_t)c->r[0],0); // 800B95D8
  if (!crb(c,2)) { goto L_800B9674; } // 800B95DC
  c->r[4]=R16(c->r[3]+0x000003BEu); // 800B95E0
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 800B95E4
  if (crb(c,2)) { goto L_800B9674; } // 800B95E8
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 800B95EC
  cmps(c,0,(int32_t)c->r[0],0); // 800B95F0
  if (crb(c,2)) { goto L_800B9674; } // 800B95F4
  c->r[0]=rotl(c->r[4],0)&0x00000180u; // 800B95F8
  cmps(c,0,(int32_t)c->r[0],128); // 800B95FC
  if (!crb(c,2)) { goto L_800B9628; } // 800B9600
  c->r[3]=0u+0x80620000u; // 800B9604
  c->r[3]=c->r[3]+0x00007688u; // 800B9608
  c->r[3]=R32(c->r[3]+0x00000014u); // 800B960C
  cmps(c,0,(int32_t)c->r[3],0); // 800B9610
  if (crb(c,2)) { goto L_800B9628; } // 800B9614
  c->r[4]=0u+0x00000002u; // 800B9618
  c->lr=0x800B9620u; f_80037670(c); // 800B961C
  cmps(c,0,(int32_t)c->r[3],0); // 800B9620
  if (!crb(c,2)) { goto L_800B9674; } // 800B9624
L_800B9628:;
  c->r[3]=c->r[1]+0x00000008u; // 800B9628
  c->r[4]=c->r[30]+0x0000002Cu; // 800B962C
  c->lr=0x800B9634u; f_800361A0(c); // 800B9630
  c->r[31]=0u+0x80550000u; // 800B9634
  {uint32_t ea=c->r[2]+0xFFFF9BA4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9638
  c->r[31]=c->r[31]+0x00003D60u; // 800B963C
  {uint32_t ea=c->r[2]+0xFFFF9B88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9640
  c->r[5]=c->r[30]|c->r[30]; // 800B9644
  c->r[6]=c->r[1]+0x00000008u; // 800B9648
  c->r[3]=c->r[31]+0x00000010u; // 800B964C
  c->r[7]=c->r[1]+0x00000018u; // 800B9650
  c->r[4]=0u+0x000001FFu; // 800B9654
  c->lr=0x800B965Cu; f_80226BE8(c); // 800B9658
  c->r[3]=c->r[31]+0x00000010u; // 800B965C
  c->r[4]=c->r[1]+0x00000018u; // 800B9660
  c->lr=0x800B9668u; f_80226CE8(c); // 800B9664
  c->r[3]=c->r[31]+0x00000010u; // 800B9668
  c->r[4]=c->r[1]+0x00000018u; // 800B966C
  c->lr=0x800B9674u; f_80226D68(c); // 800B9670
L_800B9674:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800B9674
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800B9678
  c->r[30]=R32(c->r[1]+0x00000078u); // 800B967C
  c->lr=c->r[0]; // 800B9680
  c->r[1]=c->r[1]+0x00000080u; // 800B9684
  return; // 800B9688
}

// fn_800B968C
void f_800B968C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B968C
  c->r[0]=c->lr; // 800B9690
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9694
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9698
  c->r[31]=c->r[3]|c->r[3]; // 800B969C
  c->r[3]=c->r[3]+0x00000210u; // 800B96A0
  c->lr=0x800B96A8u; f_8004BAD4(c); // 800B96A4
  cmps(c,0,(int32_t)c->r[3],0); // 800B96A8
  if (crb(c,2)) { goto L_800B971C; } // 800B96AC
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B96B0
  c->r[4]=c->r[31]|c->r[31]; // 800B96B4
  c->r[3]=c->r[31]+0x00000210u; // 800B96B8
  c->r[0]=c->r[0]|0xAA000000u; // 800B96BC
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B96C0
  c->lr=0x800B96C8u; f_80043E44(c); // 800B96C4
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B96C8
  c->r[3]=c->r[31]+0x00000210u; // 800B96CC
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B96D0
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B96D4
  c->lr=0x800B96DCu; f_80043E34(c); // 800B96D8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B96DC
  c->r[4]=0u+0x803A0000u; // 800B96E0
  c->r[4]=c->r[4]+0xFFFFCE88u; // 800B96E4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B96E8
  c->r[4]=c->r[4]+0x00000009u; // 800B96EC
  c->lr=0x800B96F4u; f_80256EC4(c); // 800B96F0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800B96F4
  c->r[5]=c->r[3]|c->r[3]; // 800B96F8
  c->r[3]=c->r[31]+0x00000210u; // 800B96FC
  c->r[4]=R32(c->r[4]+0x0000010Cu); // 800B9700
  c->lr=0x800B9708u; f_8004BAC8(c); // 800B9704
  {uint32_t ea=c->r[2]+0xFFFF9BA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9708
  c->r[3]=c->r[31]+0x00000210u; // 800B970C
  c->f[2]=c->f[1]; // 800B9710
  c->f[3]=c->f[1]; // 800B9714
  c->lr=0x800B971Cu; f_80043E24(c); // 800B9718
L_800B971C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B971C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9720
  c->lr=c->r[0]; // 800B9724
  c->r[1]=c->r[1]+0x00000010u; // 800B9728
  return; // 800B972C
}

// fn_800B9730
void f_800B9730(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9730
  c->r[0]=c->lr; // 800B9734
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9738
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B973C
  c->r[31]=c->r[3]|c->r[3]; // 800B9740
  c->r[3]=c->r[3]+0x00000210u; // 800B9744
  c->lr=0x800B974Cu; f_80221698(c); // 800B9748
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B974C
  cmps(c,0,(int32_t)c->r[3],0); // 800B9750
  if (crb(c,2)) { goto L_800B9774; } // 800B9754
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800B9758
  cmps(c,0,(int32_t)c->r[0],0); // 800B975C
  if (crb(c,2)) { goto L_800B9774; } // 800B9760
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B9764
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800B9768
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B976C
  goto L_800B9780; // 800B9770
L_800B9774:;
  c->r[0]=R32(c->r[31]+0x00000210u); // 800B9774
  c->r[0]=c->r[0]|0x80000000u; // 800B9778
  W32(c->r[31]+0x00000210u,c->r[0]); // 800B977C
L_800B9780:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9780
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9784
  c->lr=c->r[0]; // 800B9788
  c->r[1]=c->r[1]+0x00000010u; // 800B978C
  return; // 800B9790
}

// fn_800B9794
void f_800B9794(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9794
  c->r[0]=c->lr; // 800B9798
  cmps(c,0,(int32_t)c->r[3],0); // 800B979C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B97A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B97A4
  c->r[31]=c->r[4]|c->r[4]; // 800B97A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B97AC
  c->r[30]=c->r[3]|c->r[3]; // 800B97B0
  if (crb(c,2)) { goto L_800B97D0; } // 800B97B4
  c->r[4]=0u+0x00000000u; // 800B97B8
  c->lr=0x800B97C0u; f_8026A06C(c); // 800B97BC
  cmps(c,0,(int32_t)c->r[31],0); // 800B97C0
  if (!crb(c,1)) { goto L_800B97D0; } // 800B97C4
  c->r[3]=c->r[30]|c->r[30]; // 800B97C8
  c->lr=0x800B97D0u; f_8026A268(c); // 800B97CC
L_800B97D0:;
  c->r[3]=c->r[30]|c->r[30]; // 800B97D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B97D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B97D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B97DC
  c->lr=c->r[0]; // 800B97E0
  c->r[1]=c->r[1]+0x00000010u; // 800B97E4
  return; // 800B97E8
}

// fn_800B97EC
void f_800B97EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B97EC
  c->r[0]=c->lr; // 800B97F0
  c->r[4]=0u+0x00000000u; // 800B97F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B97F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B97FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B9800
  c->r[30]=c->r[3]|c->r[3]; // 800B9804
  c->lr=0x800B980Cu; f_801F57D0(c); // 800B9808
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B980C
  c->r[3]=c->r[30]|c->r[30]; // 800B9810
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800B9814
  c->ctr=c->r[12]; // 800B9818
  if (true) { c->lr=0x800B9820u; dispatch(c,c->ctr); } // 800B981C
  c->r[3]=c->r[30]|c->r[30]; // 800B9820
  c->lr=0x800B9828u; f_801F4B94(c); // 800B9824
  c->r[3]=0u+0x00000003u; // 800B9828
  c->r[0]=0u+0x0000001Au; // 800B982C
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800B9830
  c->r[3]=c->r[30]|c->r[30]; // 800B9834
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B9838
  W8(c->r[30]+0x0000006Du,c->r[0]); // 800B983C
  c->lr=0x800B9844u; f_801F58BC(c); // 800B9840
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B9844
  c->r[31]=0u+0x00000001u; // 800B9848
  c->r[4]=0u+0x803A0000u; // 800B984C
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800B9850
  c->r[4]=c->r[4]+0xFFFFCEC4u; // 800B9854
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B9858
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B985C
  c->lr=0x800B9864u; f_80256EC4(c); // 800B9860
  c->r[6]=R32(c->r[30]+0x00000394u); // 800B9864
  c->r[5]=0u+0x805D0000u; // 800B9868
  c->r[4]=c->r[30]+0x0000002Cu; // 800B986C
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800B9870
  c->r[3]=c->r[5]+0x000078B0u; // 800B9874
  c->lr=0x800B987Cu; f_802351CC(c); // 800B9878
  c->r[4]=R32(c->r[30]+0x00000394u); // 800B987C
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800B9880
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800B9884
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 800B9888
  cmps(c,0,(int32_t)c->r[0],0); // 800B988C
  if (!crb(c,2)) { goto L_800B98BC; } // 800B9890
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B9894
  c->r[3]=c->r[30]|c->r[30]; // 800B9898
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B989C
  c->r[4]=0u+0x00000001u; // 800B98A0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800B98A4
  c->r[5]=0u+0x00000001u; // 800B98A8
  c->f[2]=c->f[1]; // 800B98AC
  c->ctr=c->r[12]; // 800B98B0
  if (true) { c->lr=0x800B98B8u; dispatch(c,c->ctr); } // 800B98B4
  goto L_800B98E0; // 800B98B8
L_800B98BC:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B98BC
  c->r[3]=c->r[30]|c->r[30]; // 800B98C0
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B98C4
  c->r[4]=0u+0x00000000u; // 800B98C8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800B98CC
  c->r[5]=0u+0x00000001u; // 800B98D0
  c->f[2]=c->f[1]; // 800B98D4
  c->ctr=c->r[12]; // 800B98D8
  if (true) { c->lr=0x800B98E0u; dispatch(c,c->ctr); } // 800B98DC
L_800B98E0:;
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B98E0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B98E4
  c->lr=0x800B98ECu; f_802501B0(c); // 800B98E8
  c->r[3]=c->r[30]|c->r[30]; // 800B98EC
  c->lr=0x800B98F4u; f_801F56F4(c); // 800B98F0
  c->r[4]=0u+0x00000000u; // 800B98F4
  c->r[0]=0u+0x000000FFu; // 800B98F8
  W8(c->r[30]+0x0000008Bu,c->r[4]); // 800B98FC
  c->r[3]=c->r[30]|c->r[30]; // 800B9900
  W8(c->r[30]+0x0000007Eu,c->r[0]); // 800B9904
  W8(c->r[30]+0x00000082u,c->r[0]); // 800B9908
  W8(c->r[30]+0x00000083u,c->r[0]); // 800B990C
  W8(c->r[30]+0x0000008Du,c->r[0]); // 800B9910
  W8(c->r[30]+0x0000007Fu,c->r[4]); // 800B9914
  W8(c->r[30]+0x00000080u,c->r[4]); // 800B9918
  W32(c->r[30]+0x00000084u,c->r[4]); // 800B991C
  W8(c->r[30]+0x00000088u,c->r[4]); // 800B9920
  W8(c->r[30]+0x0000008Cu,c->r[4]); // 800B9924
  W8(c->r[30]+0x00000089u,c->r[4]); // 800B9928
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800B992C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B9930
  c->ctr=c->r[12]; // 800B9934
  if (true) { c->lr=0x800B993Cu; dispatch(c,c->ctr); } // 800B9938
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B993C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9940
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B9944
  c->lr=c->r[0]; // 800B9948
  c->r[1]=c->r[1]+0x00000010u; // 800B994C
  return; // 800B9950
}

// fn_800B9954
void f_800B9954(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9954
  c->r[0]=c->lr; // 800B9958
  c->r[4]=c->r[3]|c->r[3]; // 800B995C
  c->r[3]=0u+0x0000007Au; // 800B9960
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9964
  c->r[5]=0u+0x00000000u; // 800B9968
  c->r[4]=R32(c->r[4]+0x00000394u); // 800B996C
  c->r[4]=c->r[4]+0x0000010Cu; // 800B9970
  c->lr=0x800B9978u; f_8024EE50(c); // 800B9974
  c->r[0]=cntlz(c->r[3]); // 800B9978
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B997C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9980
  c->lr=c->r[0]; // 800B9984
  c->r[1]=c->r[1]+0x00000010u; // 800B9988
  return; // 800B998C
}

// fn_800B9990
void f_800B9990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9990
  c->r[0]=c->lr; // 800B9994
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9998
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B999C
  c->r[31]=c->r[3]|c->r[3]; // 800B99A0
  c->lr=0x800B99A8u; f_800B9AE4(c); // 800B99A4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800B99A8
  c->r[3]=c->r[31]|c->r[31]; // 800B99AC
  c->r[12]=R32(c->r[12]+0x00000068u); // 800B99B0
  c->ctr=c->r[12]; // 800B99B4
  if (true) { c->lr=0x800B99BCu; dispatch(c,c->ctr); } // 800B99B8
  c->r[3]=c->r[31]|c->r[31]; // 800B99BC
  c->lr=0x800B99C4u; f_800B9CE8(c); // 800B99C0
  c->r[3]=c->r[31]|c->r[31]; // 800B99C4
  c->lr=0x800B99CCu; f_801F4C0C(c); // 800B99C8
  c->r[0]=R8(c->r[31]+0x00000089u); // 800B99CC
  cmps(c,0,(int32_t)c->r[0],0); // 800B99D0
  if (crb(c,2)) { goto L_800B9A34; } // 800B99D4
  c->r[3]=c->r[31]+0x00000010u; // 800B99D8
  c->lr=0x800B99E0u; f_80038C0C(c); // 800B99DC
  c->r[0]=R8(c->r[31]+0x00000089u); // 800B99E0
  c->r[4]=0u+0x803D0000u; // 800B99E4
  c->r[4]=c->r[4]+0xFFFFFF10u; // 800B99E8
  c->r[3]=c->r[31]+0x00000010u; // 800B99EC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800B99F0
  c->r[4]=R32(c->r[4]+c->r[0]); // 800B99F4
  c->lr=0x800B99FCu; f_800395D0(c); // 800B99F8
  cmps(c,0,(int32_t)c->r[3],0); // 800B99FC
  if (crb(c,2)) { goto L_800B9A34; } // 800B9A00
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9A04
  c->r[3]=0u+0x0000001Bu; // 800B9A08
  c->r[4]=0u+0x00000001u; // 800B9A0C
  c->lr=0x800B9A14u; f_802445B8(c); // 800B9A10
  c->r[3]=R8(c->r[31]+0x00000089u); // 800B9A14
  cmpu(c,0,c->r[3],0x00000004u); // 800B9A18
  if (!crb(c,2)) { goto L_800B9A2C; } // 800B9A1C
  c->r[0]=0u+0x00000000u; // 800B9A20
  W8(c->r[31]+0x00000089u,c->r[0]); // 800B9A24
  goto L_800B9A34; // 800B9A28
L_800B9A2C:;
  c->r[0]=c->r[3]+0x00000001u; // 800B9A2C
  W8(c->r[31]+0x00000089u,c->r[0]); // 800B9A30
L_800B9A34:;
  c->r[3]=c->r[31]|c->r[31]; // 800B9A34
  c->lr=0x800B9A3Cu; f_800BB6B4(c); // 800B9A38
  c->r[3]=c->r[31]|c->r[31]; // 800B9A3C
  c->lr=0x800B9A44u; f_801F56F4(c); // 800B9A40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9A44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9A48
  c->lr=c->r[0]; // 800B9A4C
  c->r[1]=c->r[1]+0x00000010u; // 800B9A50
  return; // 800B9A54
}

// fn_800B9A58
void f_800B9A58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9A58
  c->r[0]=c->lr; // 800B9A5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9A60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9A64
  c->r[31]=c->r[3]|c->r[3]; // 800B9A68
  c->lr=0x800B9A70u; f_801F4C78(c); // 800B9A6C
  c->r[4]=R8(c->r[31]+0x0000007Eu); // 800B9A70
  cmpu(c,0,c->r[4],0x000000FFu); // 800B9A74
  if (crb(c,2)) { goto L_800B9A90; } // 800B9A78
  c->r[3]=0u+0x80550000u; // 800B9A7C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B9A80
  c->lr=0x800B9A88u; f_8018D738(c); // 800B9A84
  c->r[0]=0u+0x000000FFu; // 800B9A88
  W8(c->r[31]+0x0000007Eu,c->r[0]); // 800B9A8C
L_800B9A90:;
  c->r[4]=R8(c->r[31]+0x00000082u); // 800B9A90
  cmpu(c,0,c->r[4],0x000000FFu); // 800B9A94
  if (crb(c,2)) { goto L_800B9AB0; } // 800B9A98
  c->r[3]=0u+0x80550000u; // 800B9A9C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B9AA0
  c->lr=0x800B9AA8u; f_8018D738(c); // 800B9AA4
  c->r[0]=0u+0x000000FFu; // 800B9AA8
  W8(c->r[31]+0x00000082u,c->r[0]); // 800B9AAC
L_800B9AB0:;
  c->r[4]=R8(c->r[31]+0x00000083u); // 800B9AB0
  cmpu(c,0,c->r[4],0x000000FFu); // 800B9AB4
  if (crb(c,2)) { goto L_800B9AD0; } // 800B9AB8
  c->r[3]=0u+0x80550000u; // 800B9ABC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B9AC0
  c->lr=0x800B9AC8u; f_8018D738(c); // 800B9AC4
  c->r[0]=0u+0x000000FFu; // 800B9AC8
  W8(c->r[31]+0x00000083u,c->r[0]); // 800B9ACC
L_800B9AD0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9AD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9AD4
  c->lr=c->r[0]; // 800B9AD8
  c->r[1]=c->r[1]+0x00000010u; // 800B9ADC
  return; // 800B9AE0
}

// fn_800B9AE4
void f_800B9AE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9AE4
  c->r[0]=c->lr; // 800B9AE8
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B9AEC
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800B9AF0
  W32(c->r[1]+0x00000068u,c->r[30]); // 800B9AF4
  c->r[30]=c->r[3]|c->r[3]; // 800B9AF8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000003BCu); // 800B9AFC
  cmps(c,0,(int32_t)c->r[0],101); // 800B9B00
  if (crb(c,2)) { goto L_800B9BF4; } // 800B9B04
  c->r[0]=R8(c->r[3]+0x00000080u); // 800B9B08
  cmps(c,0,(int32_t)c->r[0],0); // 800B9B0C
  if (crb(c,2)) { goto L_800B9BF4; } // 800B9B10
  c->r[3]=0u+0x80620000u; // 800B9B14
  c->r[4]=0u+0x00000087u; // 800B9B18
  c->r[3]=c->r[3]+0x00007688u; // 800B9B1C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800B9B20
  c->lr=0x800B9B28u; f_80038AF4(c); // 800B9B24
  cmps(c,0,(int32_t)c->r[3],0); // 800B9B28
  if (crb(c,2)) { goto L_800B9BF4; } // 800B9B2C
  c->r[3]=0u+0x80550000u; // 800B9B30
  c->r[4]=0u+0x0000000Du; // 800B9B34
  c->r[3]=c->r[3]+0xFFFFCE54u; // 800B9B38
  c->lr=0x800B9B40u; f_8019C920(c); // 800B9B3C
  cmps(c,0,(int32_t)c->r[3],0); // 800B9B40
  c->r[31]=c->r[3]|c->r[3]; // 800B9B44
  if (crb(c,2)) { goto L_800B9BF4; } // 800B9B48
  c->lr=0x800B9B50u; f_800376F0(c); // 800B9B4C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800B9B50
  cmps(c,0,(int32_t)c->r[0],113); // 800B9B54
  if (!crb(c,2)) { goto L_800B9BF4; } // 800B9B58
  c->r[3]=R32(c->r[30]+0x00000394u); // 800B9B5C
  c->r[4]=0u+0x803A0000u; // 800B9B60
  c->r[4]=c->r[4]+0xFFFFCEC4u; // 800B9B64
  c->r[5]=c->r[1]+0x00000030u; // 800B9B68
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B9B6C
  c->r[4]=c->r[4]+0x00000009u; // 800B9B70
  c->r[6]=0u+0x00000001u; // 800B9B74
  c->lr=0x800B9B7Cu; f_80257018(c); // 800B9B78
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9B7C
  c->r[4]=c->r[1]+0x00000020u; // 800B9B80
  {uint32_t ea=c->r[2]+0xFFFF9BBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9B84
  c->r[5]=c->r[4]|c->r[4]; // 800B9B88
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 800B9B8C
  c->r[3]=c->r[1]+0x00000030u; // 800B9B90
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 800B9B94
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800B9B98
  c->lr=0x800B9BA0u; f_80296750(c); // 800B9B9C
  c->r[3]=c->r[1]+0x00000020u; // 800B9BA0
  c->r[4]=c->r[31]+0x0000002Cu; // 800B9BA4
  c->r[5]=c->r[1]+0x00000014u; // 800B9BA8
  c->lr=0x800B9BB0u; f_80296A70(c); // 800B9BAC
  c->r[3]=c->r[1]+0x00000014u; // 800B9BB0
  c->lr=0x800B9BB8u; f_80296B0C(c); // 800B9BB4
  {uint32_t ea=c->r[2]+0xFFFF9BC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9BB8
  fcmp(c,0,c->f[1],c->f[0]); // 800B9BBC
  if (!crb(c,0)) { goto L_800B9BF4; } // 800B9BC0
  c->r[0]=0u+0x00000065u; // 800B9BC4
  c->r[7]=0u+0x803D0000u; // 800B9BC8
  W16(c->r[30]+0x000003BCu,c->r[0]); // 800B9BCC
  c->r[3]=c->r[30]|c->r[30]; // 800B9BD0
  c->r[4]=c->r[1]+0x00000008u; // 800B9BD4
  {uint32_t ea=c->r[7]+0xFFFFFF24u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B9BD8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B9BDC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B9BE0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B9BE4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B9BE8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B9BEC
  c->lr=0x800B9BF4u; f_800B9C0C(c); // 800B9BF0
L_800B9BF4:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800B9BF4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800B9BF8
  c->r[30]=R32(c->r[1]+0x00000068u); // 800B9BFC
  c->lr=c->r[0]; // 800B9C00
  c->r[1]=c->r[1]+0x00000070u; // 800B9C04
  return; // 800B9C08
}

// fn_800B9C0C
void f_800B9C0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9C0C
  c->r[0]=c->lr; // 800B9C10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9C14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9C18
  c->r[31]=c->r[4]|c->r[4]; // 800B9C1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B9C20
  c->r[30]=c->r[3]|c->r[3]; // 800B9C24
  c->r[3]=c->r[31]|c->r[31]; // 800B9C28
  c->lr=0x800B9C30u; f_802B9FDC(c); // 800B9C2C
  cmps(c,0,(int32_t)c->r[3],0); // 800B9C30
  if (crb(c,2)) { goto L_800B9C50; } // 800B9C34
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B9C38
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B9C3C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B9C40
  W32(c->r[30]+0x00000020u,c->r[0]); // 800B9C44
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B9C48
  W32(c->r[30]+0x00000024u,c->r[0]); // 800B9C4C
L_800B9C50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9C50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9C54
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B9C58
  c->lr=c->r[0]; // 800B9C5C
  c->r[1]=c->r[1]+0x00000010u; // 800B9C60
  return; // 800B9C64
}

// fn_800B9C68
void f_800B9C68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9C68
  c->r[0]=c->lr; // 800B9C6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B9C70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B9C74
  c->r[31]=c->r[3]|c->r[3]; // 800B9C78
  c->lr=0x800B9C80u; f_801F4F28(c); // 800B9C7C
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800B9C80
  cmps(c,0,(int32_t)c->r[0],100); // 800B9C84
  if (crb(c,2)) { goto L_800B9C90; } // 800B9C88
  goto L_800B9CD4; // 800B9C8C
L_800B9C90:;
  c->r[3]=0u+0x80620000u; // 800B9C90
  c->r[4]=0u+0x00000036u; // 800B9C94
  c->r[3]=c->r[3]+0x00007688u; // 800B9C98
  c->r[3]=R32(c->r[3]+0x00000014u); // 800B9C9C
  c->lr=0x800B9CA4u; f_8003DCAC(c); // 800B9CA0
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800B9CA4
  c->r[7]=0u+0x803D0000u; // 800B9CA8
  c->r[3]=c->r[31]|c->r[31]; // 800B9CAC
  c->r[4]=c->r[1]+0x00000008u; // 800B9CB0
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800B9CB4
  {uint32_t ea=c->r[7]+0xFFFFFF30u; c->r[6]=R32(ea); c->r[7]=ea;} // 800B9CB8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800B9CBC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800B9CC0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B9CC4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B9CC8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B9CCC
  c->lr=0x800B9CD4u; f_800B9C0C(c); // 800B9CD0
L_800B9CD4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B9CD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B9CD8
  c->lr=c->r[0]; // 800B9CDC
  c->r[1]=c->r[1]+0x00000020u; // 800B9CE0
  return; // 800B9CE4
}

// fn_800B9CE8
void f_800B9CE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9CE8
  c->r[0]=c->lr; // 800B9CEC
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800B9CF0
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800B9CF4
  c->r[31]=c->r[3]|c->r[3]; // 800B9CF8
  W32(c->r[1]+0x000000C8u,c->r[30]); // 800B9CFC
  c->r[5]=R16(c->r[3]+0x000003BEu); // 800B9D00
  c->r[0]=rotl(c->r[5],0)&0x00004000u; cr0(c,c->r[0]); // 800B9D04
  if (crb(c,2)) { goto L_800B9D7C; } // 800B9D08
  c->r[4]=R8(c->r[3]+0x0000008Du); // 800B9D0C
  c->r[0]=rotl(c->r[5],0)&0xFFFFBFFFu; // 800B9D10
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800B9D14
  cmpu(c,0,c->r[4],0x000000FFu); // 800B9D18
  if (crb(c,2)) { goto L_800B9D60; } // 800B9D1C
  c->r[30]=0u+0x80550000u; // 800B9D20
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B9D24
  c->lr=0x800B9D2Cu; f_8018D900(c); // 800B9D28
  cmps(c,0,(int32_t)c->r[3],0); // 800B9D2C
  if (crb(c,2)) { goto L_800B9D58; } // 800B9D30
  c->r[4]=R8(c->r[31]+0x0000008Du); // 800B9D34
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B9D38
  c->lr=0x800B9D40u; f_8018E238(c); // 800B9D3C
  c->r[0]=R32(c->r[31]+0x00000090u); // 800B9D40
  cmpu(c,0,c->r[0],c->r[3]); // 800B9D44
  if (!crb(c,2)) { goto L_800B9D58; } // 800B9D48
  c->r[4]=R8(c->r[31]+0x0000008Du); // 800B9D4C
  c->r[3]=c->r[30]+0xFFFFC848u; // 800B9D50
  c->lr=0x800B9D58u; f_8018D694(c); // 800B9D54
L_800B9D58:;
  c->r[0]=0u+0x000000FFu; // 800B9D58
  W8(c->r[31]+0x0000008Du,c->r[0]); // 800B9D5C
L_800B9D60:;
  c->r[3]=R32(c->r[31]+0x00000084u); // 800B9D60
  cmps(c,0,(int32_t)c->r[3],0); // 800B9D64
  if (crb(c,2)) { goto L_800B9D7C; } // 800B9D68
  c->lr=0x800B9D70u; f_801E2520(c); // 800B9D6C
  c->r[0]=0u+0x00000000u; // 800B9D70
  W32(c->r[31]+0x00000084u,c->r[0]); // 800B9D74
  W8(c->r[31]+0x00000088u,c->r[0]); // 800B9D78
L_800B9D7C:;
  c->r[0]=R8(c->r[31]+0x0000007Eu); // 800B9D7C
  cmpu(c,0,c->r[0],0x000000FFu); // 800B9D80
  if (!crb(c,2)) { goto L_800B9DAC; } // 800B9D84
  c->r[4]=0u+0x803A0000u; // 800B9D88
  c->r[3]=0u+0x80550000u; // 800B9D8C
  c->r[4]=c->r[4]+0xFFFFCEC4u; // 800B9D90
  c->r[5]=0u+0x00000000u; // 800B9D94
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B9D98
  c->r[6]=0u+0x00000000u; // 800B9D9C
  c->r[4]=c->r[4]+0x00000012u; // 800B9DA0
  c->lr=0x800B9DA8u; f_8018D3E4(c); // 800B9DA4
  W8(c->r[31]+0x0000007Eu,c->r[3]); // 800B9DA8
L_800B9DAC:;
  c->r[0]=R8(c->r[31]+0x0000007Eu); // 800B9DAC
  cmpu(c,0,c->r[0],0x000000FFu); // 800B9DB0
  if (crb(c,2)) { goto L_800B9DEC; } // 800B9DB4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B9DB8
  c->r[4]=0u+0x803A0000u; // 800B9DBC
  c->r[4]=c->r[4]+0xFFFFCEC4u; // 800B9DC0
  c->r[5]=c->r[1]+0x00000090u; // 800B9DC4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B9DC8
  c->r[4]=c->r[4]+0x00000009u; // 800B9DCC
  c->r[6]=0u+0x00000001u; // 800B9DD0
  c->lr=0x800B9DD8u; f_80257018(c); // 800B9DD4
  c->r[3]=0u+0x80550000u; // 800B9DD8
  c->r[4]=R8(c->r[31]+0x0000007Eu); // 800B9DDC
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B9DE0
  c->r[5]=c->r[1]+0x00000090u; // 800B9DE4
  c->lr=0x800B9DECu; f_8018DEB8(c); // 800B9DE8
L_800B9DEC:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B9DEC
  c->r[0]=R32(c->r[3]+0x00000030u); // 800B9DF0
  cmps(c,0,(int32_t)c->r[0],2); // 800B9DF4
  if (!crb(c,2)) { goto L_800B9EDC; } // 800B9DF8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9DFC
  {uint32_t ea=c->r[2]+0xFFFF9BC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9E00
  fcmp(c,0,c->f[1],c->f[0]); // 800B9E04
  if (!crb(c,0)) { goto L_800B9EDC; } // 800B9E08
  c->r[0]=R8(c->r[31]+0x00000082u); // 800B9E0C
  cmpu(c,0,c->r[0],0x000000FFu); // 800B9E10
  if (!crb(c,2)) { goto L_800B9E3C; } // 800B9E14
  c->r[4]=0u+0x803A0000u; // 800B9E18
  c->r[3]=0u+0x80550000u; // 800B9E1C
  c->r[4]=c->r[4]+0xFFFFCEC4u; // 800B9E20
  c->r[5]=0u+0x00000000u; // 800B9E24
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B9E28
  c->r[6]=0u+0x00000000u; // 800B9E2C
  c->r[4]=c->r[4]+0x00000016u; // 800B9E30
  c->lr=0x800B9E38u; f_8018D3E4(c); // 800B9E34
  W8(c->r[31]+0x00000082u,c->r[3]); // 800B9E38
L_800B9E3C:;
  c->r[0]=R8(c->r[31]+0x00000082u); // 800B9E3C
  cmpu(c,0,c->r[0],0x000000FFu); // 800B9E40
  if (crb(c,2)) { goto L_800B9EFC; } // 800B9E44
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B9E48
  c->r[4]=0u+0x803A0000u; // 800B9E4C
  c->r[4]=c->r[4]+0xFFFFCEC4u; // 800B9E50
  c->r[5]=c->r[1]+0x00000060u; // 800B9E54
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B9E58
  c->r[4]=c->r[4]+0x00000009u; // 800B9E5C
  c->r[6]=0u+0x00000001u; // 800B9E60
  c->lr=0x800B9E68u; f_80257018(c); // 800B9E64
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9E68
  c->r[4]=c->r[1]+0x00000020u; // 800B9E6C
  {uint32_t ea=c->r[2]+0xFFFF9BC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9E70
  c->r[5]=c->r[4]|c->r[4]; // 800B9E74
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 800B9E78
  c->r[3]=c->r[1]+0x00000060u; // 800B9E7C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 800B9E80
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800B9E84
  c->lr=0x800B9E8Cu; f_80296750(c); // 800B9E88
  c->r[5]=0u+0x803A0000u; // 800B9E8C
  {uint32_t ea=c->r[5]+0xFFFFCEA0u; c->r[10]=R32(ea); c->r[5]=ea;} // 800B9E90
  c->r[7]=R32(c->r[1]+0x00000020u); // 800B9E94
  c->r[3]=0u+0x80550000u; // 800B9E98
  c->r[4]=R32(c->r[1]+0x00000024u); // 800B9E9C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B9EA0
  c->r[9]=R32(c->r[5]+0x00000004u); // 800B9EA4
  c->r[6]=c->r[1]+0x00000008u; // 800B9EA8
  c->r[8]=R32(c->r[5]+0x00000008u); // 800B9EAC
  c->r[5]=c->r[1]+0x00000014u; // 800B9EB0
  c->r[0]=R32(c->r[1]+0x00000028u); // 800B9EB4
  W32(c->r[1]+0x00000008u,c->r[10]); // 800B9EB8
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 800B9EBC
  W32(c->r[1]+0x00000010u,c->r[8]); // 800B9EC0
  W32(c->r[1]+0x00000014u,c->r[7]); // 800B9EC4
  W32(c->r[1]+0x00000018u,c->r[4]); // 800B9EC8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B9ECC
  c->r[4]=R8(c->r[31]+0x00000082u); // 800B9ED0
  c->lr=0x800B9ED8u; f_8018DBD0(c); // 800B9ED4
  goto L_800B9EFC; // 800B9ED8
L_800B9EDC:;
  c->r[4]=R8(c->r[31]+0x00000082u); // 800B9EDC
  cmpu(c,0,c->r[4],0x000000FFu); // 800B9EE0
  if (crb(c,2)) { goto L_800B9EFC; } // 800B9EE4
  c->r[3]=0u+0x80550000u; // 800B9EE8
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B9EEC
  c->lr=0x800B9EF4u; f_8018D738(c); // 800B9EF0
  c->r[0]=0u+0x000000FFu; // 800B9EF4
  W8(c->r[31]+0x00000082u,c->r[0]); // 800B9EF8
L_800B9EFC:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800B9EFC
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800B9F00
  if (crb(c,2)) { goto L_800B9F78; } // 800B9F04
  c->r[0]=R8(c->r[31]+0x00000083u); // 800B9F08
  cmpu(c,0,c->r[0],0x000000FFu); // 800B9F0C
  if (!crb(c,2)) { goto L_800B9F38; } // 800B9F10
  c->r[4]=0u+0x803A0000u; // 800B9F14
  c->r[3]=0u+0x80550000u; // 800B9F18
  c->r[4]=c->r[4]+0xFFFFCEC4u; // 800B9F1C
  c->r[5]=0u+0x00000000u; // 800B9F20
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B9F24
  c->r[6]=0u+0x00000000u; // 800B9F28
  c->r[4]=c->r[4]+0x0000001Au; // 800B9F2C
  c->lr=0x800B9F34u; f_8018D3E4(c); // 800B9F30
  W8(c->r[31]+0x00000083u,c->r[3]); // 800B9F34
L_800B9F38:;
  c->r[0]=R8(c->r[31]+0x00000083u); // 800B9F38
  cmpu(c,0,c->r[0],0x000000FFu); // 800B9F3C
  if (crb(c,2)) { goto L_800B9F78; } // 800B9F40
  c->r[3]=R32(c->r[31]+0x00000394u); // 800B9F44
  c->r[4]=0u+0x803A0000u; // 800B9F48
  c->r[4]=c->r[4]+0xFFFFCEC4u; // 800B9F4C
  c->r[5]=c->r[1]+0x00000030u; // 800B9F50
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800B9F54
  c->r[4]=c->r[4]+0x00000009u; // 800B9F58
  c->r[6]=0u+0x00000001u; // 800B9F5C
  c->lr=0x800B9F64u; f_80257018(c); // 800B9F60
  c->r[3]=0u+0x80550000u; // 800B9F64
  c->r[4]=R8(c->r[31]+0x00000083u); // 800B9F68
  c->r[3]=c->r[3]+0xFFFFC848u; // 800B9F6C
  c->r[5]=c->r[1]+0x00000030u; // 800B9F70
  c->lr=0x800B9F78u; f_8018DEB8(c); // 800B9F74
L_800B9F78:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800B9F78
  c->r[31]=R32(c->r[1]+0x000000CCu); // 800B9F7C
  c->r[30]=R32(c->r[1]+0x000000C8u); // 800B9F80
  c->lr=c->r[0]; // 800B9F84
  c->r[1]=c->r[1]+0x000000D0u; // 800B9F88
  return; // 800B9F8C
}

// fn_800B9F90
void f_800B9F90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9F90
  c->r[0]=c->lr; // 800B9F94
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B9F98
  c->r[11]=c->r[1]+0x00000050u; // 800B9F9C
  c->lr=0x800B9FA4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B9FA0
  c->r[4]=R32(c->r[3]+0x00000394u); // 800B9FA4
  c->r[30]=c->r[3]|c->r[3]; // 800B9FA8
  c->r[31]=0u+0x803D0000u; // 800B9FAC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800B9FB0
  c->r[31]=c->r[31]+0xFFFFFC90u; // 800B9FB4
  c->lr=0x800B9FBCu; f_802501B0(c); // 800B9FB8
  c->r[28]=0u+0x80620000u; // 800B9FBC
  c->r[4]=0u+0x00000016u; // 800B9FC0
  c->r[28]=c->r[28]+0x00007688u; // 800B9FC4
  c->r[3]=R32(c->r[28]+0x00000014u); // 800B9FC8
  c->lr=0x800B9FD0u; f_80038AF4(c); // 800B9FCC
  cmps(c,0,(int32_t)c->r[3],0); // 800B9FD0
  if (!crb(c,2)) { goto L_800BA370; } // 800B9FD4
  c->r[3]=R32(c->r[28]+0x00000014u); // 800B9FD8
  c->r[4]=0u+0x00000079u; // 800B9FDC
  c->lr=0x800B9FE4u; f_80038AF4(c); // 800B9FE0
  cmps(c,0,(int32_t)c->r[3],0); // 800B9FE4
  if (!crb(c,2)) { goto L_800BA370; } // 800B9FE8
  c->r[3]=R32(c->r[28]+0x00000014u); // 800B9FEC
  c->r[4]=0u+0x00000018u; // 800B9FF0
  c->lr=0x800B9FF8u; f_8003560C(c); // 800B9FF4
  cmps(c,0,(int32_t)c->r[3],9); // 800B9FF8
  if (!crb(c,2)) { goto L_800BA02C; } // 800B9FFC
  c->r[3]=R32(c->r[28]+0x00000014u); // 800BA000
  c->r[4]=0u+0x00000039u; // 800BA004
  c->lr=0x800BA00Cu; f_80038AF4(c); // 800BA008
  cmps(c,0,(int32_t)c->r[3],0); // 800BA00C
  if (crb(c,2)) { goto L_800BA370; } // 800BA010
  c->r[3]=R32(c->r[28]+0x00000014u); // 800BA014
  c->r[4]=0u+0x0000003Au; // 800BA018
  c->lr=0x800BA020u; f_80038AF4(c); // 800BA01C
  cmps(c,0,(int32_t)c->r[3],0); // 800BA020
  if (!crb(c,2)) { goto L_800BA02C; } // 800BA024
  goto L_800BA370; // 800BA028
L_800BA02C:;
  c->r[3]=c->r[13]+0xFFFFAB38u; // 800BA02C
  c->lr=0x800BA034u; f_80211724(c); // 800BA030
  c->r[0]=R8(c->r[30]+0x0000008Cu); // 800BA034
  c->r[4]=rotl(c->r[3],0)&0x00000001u; // 800BA038
  c->r[3]=0u+0x00000000u; // 800BA03C
  W8(c->r[30]+0x00000075u,c->r[4]); // 800BA040
  cmps(c,0,(int32_t)c->r[0],0); // 800BA044
  W8(c->r[30]+0x00000074u,c->r[3]); // 800BA048
  if (!crb(c,2)) { goto L_800BA070; } // 800BA04C
  c->r[0]=0u+0x00000001u; // 800BA050
  c->r[3]=c->r[13]+0xFFFFAB38u; // 800BA054
  W8(c->r[30]+0x0000008Cu,c->r[0]); // 800BA058
  c->lr=0x800BA060u; f_80211724(c); // 800BA05C
  c->r[3]=rotl(c->r[3],0)&0x00000003u; // 800BA060
  c->r[0]=c->r[3]+0x00000003u; // 800BA064
  W16(c->r[30]+0x0000007Au,c->r[0]); // 800BA068
  goto L_800BA0A0; // 800BA06C
L_800BA070:;
  c->r[3]=c->r[13]+0xFFFFAB38u; // 800BA070
  c->lr=0x800BA078u; f_80211724(c); // 800BA074
  c->r[4]=0u+0x24920000u; // 800BA078
  c->r[0]=c->r[4]+0x00004925u; // 800BA07C
  c->r[4]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 800BA080
  c->r[0]=c->r[3]-c->r[4]; // 800BA084
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800BA088
  c->r[0]=c->r[0]+c->r[4]; // 800BA08C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800BA090
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)7); // 800BA094
  c->r[0]=c->r[3]-c->r[0]; // 800BA098
  W16(c->r[30]+0x0000007Au,c->r[0]); // 800BA09C
L_800BA0A0:;
  c->r[0]=0u+0x00000000u; // 800BA0A0
  c->r[29]=0u+0x80620000u; // 800BA0A4
  W16(c->r[30]+0x00000078u,c->r[0]); // 800BA0A8
  c->r[29]=c->r[29]+0x00007688u; // 800BA0AC
  c->r[27]=0u+0x00000000u; // 800BA0B0
  c->r[4]=0u+0x00000018u; // 800BA0B4
  W16(c->r[30]+0x0000007Cu,c->r[0]); // 800BA0B8
  W8(c->r[30]+0x00000029u,c->r[0]); // 800BA0BC
  c->r[3]=R32(c->r[29]+0x00000014u); // 800BA0C0
  c->lr=0x800BA0C8u; f_8003560C(c); // 800BA0C4
  c->r[28]=c->r[3]|c->r[3]; // 800BA0C8
  c->r[3]=R32(c->r[29]+0x00000014u); // 800BA0CC
  c->r[4]=0u+0x0000003Eu; // 800BA0D0
  c->lr=0x800BA0D8u; f_8003560C(c); // 800BA0D4
  c->r[26]=c->r[3]+0x00000001u; // 800BA0D8
  c->r[3]=R32(c->r[29]+0x00000014u); // 800BA0DC
  c->r[4]=0u+0x00000036u; // 800BA0E0
  c->lr=0x800BA0E8u; f_80038AF4(c); // 800BA0E4
  cmps(c,0,(int32_t)c->r[3],0); // 800BA0E8
  if (crb(c,2)) { goto L_800BA104; } // 800BA0EC
  c->r[3]=R32(c->r[29]+0x00000014u); // 800BA0F0
  c->r[27]=0u+0x00000000u; // 800BA0F4
  c->r[26]=0u+0x00000001u; // 800BA0F8
  c->r[4]=0u+0x00000036u; // 800BA0FC
  c->lr=0x800BA104u; f_8003DCAC(c); // 800BA100
L_800BA104:;
  cmps(c,0,(int32_t)c->r[28],8); // 800BA104
  if (crb(c,2)) { goto L_800BA1B8; } // 800BA108
  if (!crb(c,0)) { goto L_800BA128; } // 800BA10C
  cmps(c,0,(int32_t)c->r[28],6); // 800BA110
  if (crb(c,2)) { goto L_800BA14C; } // 800BA114
  if (!crb(c,0)) { goto L_800BA160; } // 800BA118
  cmps(c,0,(int32_t)c->r[28],5); // 800BA11C
  if (!crb(c,0)) { goto L_800BA138; } // 800BA120
  goto L_800BA21C; // 800BA124
L_800BA128:;
  cmps(c,0,(int32_t)c->r[28],10); // 800BA128
  if (crb(c,2)) { goto L_800BA214; } // 800BA12C
  if (!crb(c,0)) { goto L_800BA21C; } // 800BA130
  goto L_800BA1C4; // 800BA134
L_800BA138:;
  cmps(c,0,(int32_t)c->r[26],1); // 800BA138
  if (!crb(c,2)) { goto L_800BA21C; } // 800BA13C
  c->r[27]=0u+0x00000001u; // 800BA140
  c->r[26]=0u+0x00000000u; // 800BA144
  goto L_800BA21C; // 800BA148
L_800BA14C:;
  cmps(c,0,(int32_t)c->r[26],2); // 800BA14C
  if (!crb(c,2)) { goto L_800BA21C; } // 800BA150
  c->r[27]=0u+0x00000001u; // 800BA154
  c->r[26]=0u+0x00000000u; // 800BA158
  goto L_800BA21C; // 800BA15C
L_800BA160:;
  cmps(c,0,(int32_t)c->r[26],2); // 800BA160
  if (crb(c,2)) { goto L_800BA190; } // 800BA164
  if (!crb(c,0)) { goto L_800BA178; } // 800BA168
  cmps(c,0,(int32_t)c->r[26],1); // 800BA16C
  if (!crb(c,0)) { goto L_800BA184; } // 800BA170
  goto L_800BA1A4; // 800BA174
L_800BA178:;
  cmps(c,0,(int32_t)c->r[26],6); // 800BA178
  if (!crb(c,0)) { goto L_800BA1A4; } // 800BA17C
  goto L_800BA19C; // 800BA180
L_800BA184:;
  c->r[0]=0u+0x00000001u; // 800BA184
  W16(c->r[30]+0x0000007Au,c->r[0]); // 800BA188
  goto L_800BA1A4; // 800BA18C
L_800BA190:;
  c->r[0]=0u+0x00000000u; // 800BA190
  W16(c->r[30]+0x0000007Au,c->r[0]); // 800BA194
  goto L_800BA1A4; // 800BA198
L_800BA19C:;
  c->r[0]=0u+0x000000FFu; // 800BA19C
  W16(c->r[30]+0x0000007Au,c->r[0]); // 800BA1A0
L_800BA1A4:;
  cmps(c,0,(int32_t)c->r[26],5); // 800BA1A4
  if (!crb(c,2)) { goto L_800BA21C; } // 800BA1A8
  c->r[27]=0u+0x00000001u; // 800BA1AC
  c->r[26]=0u+0x00000000u; // 800BA1B0
  goto L_800BA21C; // 800BA1B4
L_800BA1B8:;
  c->r[27]=0u+0x00000000u; // 800BA1B8
  c->r[26]=0u+0x00000000u; // 800BA1BC
  goto L_800BA21C; // 800BA1C0
L_800BA1C4:;
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 800BA1C4
  cmps(c,0,(int32_t)c->r[0],0); // 800BA1C8
  if (!crb(c,2)) { goto L_800BA208; } // 800BA1CC
  c->r[29]=0u+0x80620000u; // 800BA1D0
  c->r[4]=0u+0x00000015u; // 800BA1D4
  c->r[29]=c->r[29]+0x00007688u; // 800BA1D8
  c->r[3]=R32(c->r[29]+0x00000014u); // 800BA1DC
  c->lr=0x800BA1E4u; f_80038AF4(c); // 800BA1E0
  cmps(c,0,(int32_t)c->r[3],0); // 800BA1E4
  if (crb(c,2)) { goto L_800BA208; } // 800BA1E8
  c->r[3]=R32(c->r[29]+0x00000014u); // 800BA1EC
  c->r[4]=0u+0x00000047u; // 800BA1F0
  c->lr=0x800BA1F8u; f_80038AF4(c); // 800BA1F4
  cmps(c,0,(int32_t)c->r[3],0); // 800BA1F8
  if (crb(c,2)) { goto L_800BA208; } // 800BA1FC
  c->r[27]=0u+0x00000001u; // 800BA200
  goto L_800BA20C; // 800BA204
L_800BA208:;
  c->r[27]=0u+0x00000000u; // 800BA208
L_800BA20C:;
  c->r[26]=0u+0x00000000u; // 800BA20C
  goto L_800BA21C; // 800BA210
L_800BA214:;
  c->r[27]=0u+0x00000001u; // 800BA214
  c->r[26]=0u+0x00000000u; // 800BA218
L_800BA21C:;
  c->r[3]=0u+0x80620000u; // 800BA21C
  c->r[5]=c->r[26]|c->r[26]; // 800BA220
  c->r[3]=c->r[3]+0x00007688u; // 800BA224
  c->r[4]=0u+0x0000003Eu; // 800BA228
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BA22C
  c->lr=0x800BA234u; f_80038998(c); // 800BA230
  cmps(c,0,(int32_t)c->r[28],8); // 800BA234
  W8(c->r[30]+0x00000081u,c->r[27]); // 800BA238
  if (!crb(c,0)) { goto L_800BA24C; } // 800BA23C
  c->r[0]=R16(c->r[30]+0x0000007Au); // 800BA240
  cmpu(c,0,c->r[0],0x000000FFu); // 800BA244
  if (!crb(c,2)) { goto L_800BA324; } // 800BA248
L_800BA24C:;
  cmps(c,0,(int32_t)c->r[28],8); // 800BA24C
  if (crb(c,1)) { goto L_800BA2D8; } // 800BA250
  c->r[3]=c->r[30]|c->r[30]; // 800BA254
  c->r[4]=0u+0x00000004u; // 800BA258
  c->r[5]=0u+0x00000014u; // 800BA25C
  c->r[6]=0u+0x00000001u; // 800BA260
  c->r[7]=0u+0x00000001u; // 800BA264
  c->lr=0x800BA26Cu; f_8017900C(c); // 800BA268
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800BA26C
  c->r[3]=c->r[30]|c->r[30]; // 800BA270
  {uint32_t ea=c->r[2]+0xFFFF9BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA274
  c->r[4]=0u+0x00000009u; // 800BA278
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BA27C
  c->r[5]=0u+0x00000000u; // 800BA280
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA284
  c->ctr=c->r[12]; // 800BA288
  if (true) { c->lr=0x800BA290u; dispatch(c,c->ctr); } // 800BA28C
  c->r[0]=0u+0x00000000u; // 800BA290
  c->r[3]=0u+0x80620000u; // 800BA294
  W8(c->r[30]+0x00000029u,c->r[0]); // 800BA298
  c->r[3]=c->r[3]+0x00007688u; // 800BA29C
  c->r[4]=0u+0x0000007Fu; // 800BA2A0
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BA2A4
  c->lr=0x800BA2ACu; f_80038A08(c); // 800BA2A8
  c->r[4]=c->r[31]+0x000002ACu; // 800BA2AC
  c->r[6]=R32(c->r[31]+0x000002ACu); // 800BA2B0
  c->r[5]=R32(c->r[4]+0x00000004u); // 800BA2B4
  c->r[3]=c->r[30]|c->r[30]; // 800BA2B8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800BA2BC
  c->r[4]=c->r[1]+0x00000020u; // 800BA2C0
  W32(c->r[1]+0x00000020u,c->r[6]); // 800BA2C4
  W32(c->r[1]+0x00000024u,c->r[5]); // 800BA2C8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800BA2CC
  c->lr=0x800BA2D4u; f_800B9C0C(c); // 800BA2D0
  goto L_800BA370; // 800BA2D4
L_800BA2D8:;
  c->r[0]=R8(c->r[30]+0x0000008Bu); // 800BA2D8
  cmps(c,0,(int32_t)c->r[0],0); // 800BA2DC
  if (!crb(c,2)) { goto L_800BA2EC; } // 800BA2E0
  c->r[0]=0u+0x00000001u; // 800BA2E4
  W8(c->r[30]+0x0000008Bu,c->r[0]); // 800BA2E8
L_800BA2EC:;
  c->r[3]=c->r[30]+0x0000000Cu; // 800BA2EC
  c->r[4]=0u+0x00000000u; // 800BA2F0
  c->lr=0x800BA2F8u; f_80036430(c); // 800BA2F4
  c->r[4]=c->r[31]+0x000002B8u; // 800BA2F8
  c->r[6]=R32(c->r[31]+0x000002B8u); // 800BA2FC
  c->r[5]=R32(c->r[4]+0x00000004u); // 800BA300
  c->r[3]=c->r[30]|c->r[30]; // 800BA304
  c->r[0]=R32(c->r[4]+0x00000008u); // 800BA308
  c->r[4]=c->r[1]+0x00000014u; // 800BA30C
  W32(c->r[1]+0x00000014u,c->r[6]); // 800BA310
  W32(c->r[1]+0x00000018u,c->r[5]); // 800BA314
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800BA318
  c->lr=0x800BA320u; f_800B9C0C(c); // 800BA31C
  goto L_800BA370; // 800BA320
L_800BA324:;
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800BA324
  c->r[3]=c->r[30]|c->r[30]; // 800BA328
  {uint32_t ea=c->r[2]+0xFFFF9BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA32C
  c->r[4]=0u+0x00000008u; // 800BA330
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BA334
  c->r[5]=0u+0x00000000u; // 800BA338
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA33C
  c->ctr=c->r[12]; // 800BA340
  if (true) { c->lr=0x800BA348u; dispatch(c,c->ctr); } // 800BA344
  c->r[4]=c->r[31]+0x000002C4u; // 800BA348
  c->r[6]=R32(c->r[31]+0x000002C4u); // 800BA34C
  c->r[5]=R32(c->r[4]+0x00000004u); // 800BA350
  c->r[3]=c->r[30]|c->r[30]; // 800BA354
  c->r[0]=R32(c->r[4]+0x00000008u); // 800BA358
  c->r[4]=c->r[1]+0x00000008u; // 800BA35C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BA360
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BA364
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BA368
  c->lr=0x800BA370u; f_800B9C0C(c); // 800BA36C
L_800BA370:;
  c->r[11]=c->r[1]+0x00000050u; // 800BA370
  c->lr=0x800BA378u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BA374
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BA378
  c->lr=c->r[0]; // 800BA37C
  c->r[1]=c->r[1]+0x00000050u; // 800BA380
  return; // 800BA384
}

// fn_800BA388
void f_800BA388(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA388
  c->r[0]=c->lr; // 800BA38C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800BA390
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800BA394
  c->r[31]=c->r[3]|c->r[3]; // 800BA398
  W32(c->r[1]+0x00000068u,c->r[30]); // 800BA39C
  W32(c->r[1]+0x00000064u,c->r[29]); // 800BA3A0
  W32(c->r[1]+0x00000060u,c->r[28]); // 800BA3A4
  c->r[4]=R32(c->r[3]+0x00000394u); // 800BA3A8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BA3AC
  c->lr=0x800BA3B4u; f_802501B0(c); // 800BA3B0
  c->r[0]=R8(c->r[31]+0x00000029u); // 800BA3B4
  cmps(c,0,(int32_t)c->r[0],0); // 800BA3B8
  if (!crb(c,2)) { goto L_800BA588; } // 800BA3BC
  c->r[4]=R8(c->r[31]+0x00000075u); // 800BA3C0
  c->r[3]=c->r[13]+0xFFFF83E8u; // 800BA3C4
  c->r[0]=R8(c->r[31]+0x00000074u); // 800BA3C8
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BA3CC
  c->r[3]=R32(c->r[3]+c->r[4]); // 800BA3D0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800BA3D4
  c->r[29]=c->r[3]+c->r[0]; // 800BA3D8
  c->r[0]=R16(c->r[29]+0x00000002u); // 800BA3DC
  cmps(c,0,(int32_t)c->r[0],1); // 800BA3E0
  if (crb(c,2)) { goto L_800BA420; } // 800BA3E4
  if (!crb(c,0)) { goto L_800BA3F8; } // 800BA3E8
  cmps(c,0,(int32_t)c->r[0],0); // 800BA3EC
  if (!crb(c,0)) { goto L_800BA404; } // 800BA3F0
  goto L_800BA4C4; // 800BA3F4
L_800BA3F8:;
  cmps(c,0,(int32_t)c->r[0],3); // 800BA3F8
  if (!crb(c,0)) { goto L_800BA4C4; } // 800BA3FC
  goto L_800BA4AC; // 800BA400
L_800BA404:;
  c->r[3]=c->r[31]|c->r[31]; // 800BA404
  c->r[4]=0u+0x00000004u; // 800BA408
  c->r[5]=0u+0x00000012u; // 800BA40C
  c->r[6]=0u+0x00000001u; // 800BA410
  c->r[7]=0u+0x00000001u; // 800BA414
  c->lr=0x800BA41Cu; f_8017900C(c); // 800BA418
  goto L_800BA4C4; // 800BA41C
L_800BA420:;
  c->r[3]=R16(c->r[31]+0x00000078u); // 800BA420
  c->r[0]=R16(c->r[31]+0x0000007Au); // 800BA424
  cmpu(c,0,c->r[3],c->r[0]); // 800BA428
  if (!crb(c,2)) { goto L_800BA4A0; } // 800BA42C
  c->r[3]=c->r[31]|c->r[31]; // 800BA430
  c->r[4]=0u+0x00000004u; // 800BA434
  c->r[5]=0u+0x00000014u; // 800BA438
  c->r[6]=0u+0x00000001u; // 800BA43C
  c->r[7]=0u+0x00000001u; // 800BA440
  c->lr=0x800BA448u; f_8017900C(c); // 800BA444
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BA448
  c->r[3]=c->r[31]|c->r[31]; // 800BA44C
  {uint32_t ea=c->r[2]+0xFFFF9BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA450
  c->r[4]=0u+0x00000009u; // 800BA454
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BA458
  c->r[5]=0u+0x00000000u; // 800BA45C
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA460
  c->ctr=c->r[12]; // 800BA464
  if (true) { c->lr=0x800BA46Cu; dispatch(c,c->ctr); } // 800BA468
  c->r[0]=0u+0x00000000u; // 800BA46C
  c->r[7]=0u+0x803D0000u; // 800BA470
  W8(c->r[31]+0x00000029u,c->r[0]); // 800BA474
  c->r[3]=c->r[31]|c->r[31]; // 800BA478
  c->r[4]=c->r[1]+0x00000008u; // 800BA47C
  {uint32_t ea=c->r[7]+0xFFFFFF60u; c->r[6]=R32(ea); c->r[7]=ea;} // 800BA480
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BA484
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BA488
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BA48C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BA490
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BA494
  c->lr=0x800BA49Cu; f_800B9C0C(c); // 800BA498
  goto L_800BA60C; // 800BA49C
L_800BA4A0:;
  c->r[0]=c->r[3]+0x00000001u; // 800BA4A0
  W16(c->r[31]+0x00000078u,c->r[0]); // 800BA4A4
  goto L_800BA4C4; // 800BA4A8
L_800BA4AC:;
  c->r[3]=c->r[31]|c->r[31]; // 800BA4AC
  c->r[4]=0u+0x00000004u; // 800BA4B0
  c->r[5]=0u+0x00000013u; // 800BA4B4
  c->r[6]=0u+0x00000001u; // 800BA4B8
  c->r[7]=0u+0x00000001u; // 800BA4BC
  c->lr=0x800BA4C4u; f_8017900C(c); // 800BA4C0
L_800BA4C4:;
  c->r[5]=R16(c->r[31]+0x0000007Cu); // 800BA4C4
  c->r[3]=c->r[31]+0x000003ECu; // 800BA4C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800BA4CC
  c->r[4]=c->r[29]+0x00000004u; // 800BA4D0
  c->r[0]=c->r[0]-c->r[5]; // 800BA4D4
  W16(c->r[31]+0x00000076u,c->r[0]); // 800BA4D8
  c->r[0]=R16(c->r[29]+0x00000000u); // 800BA4DC
  W16(c->r[31]+0x0000007Cu,c->r[0]); // 800BA4E0
  c->lr=0x800BA4E8u; f_800361A0(c); // 800BA4E4
  c->r[3]=c->r[31]+0x000003ECu; // 800BA4E8
  c->r[4]=c->r[31]+0x0000002Cu; // 800BA4EC
  c->r[5]=c->r[31]+0x00000044u; // 800BA4F0
  c->lr=0x800BA4F8u; f_80296A70(c); // 800BA4F4
  c->r[5]=R16(c->r[31]+0x00000076u); // 800BA4F8
  c->r[0]=0u+0x43300000u; // 800BA4FC
  c->r[3]=c->r[31]+0x00000044u; // 800BA500
  W32(c->r[1]+0x00000048u,c->r[0]); // 800BA504
  {uint32_t ea=c->r[2]+0xFFFF9BD8u; c->f[2]=RF64(ea);} // 800BA508
  c->r[4]=c->r[3]|c->r[3]; // 800BA50C
  W32(c->r[1]+0x0000004Cu,c->r[5]); // 800BA510
  {uint32_t ea=c->r[2]+0xFFFF9BD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA514
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 800BA518
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800BA51C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 800BA520
  c->lr=0x800BA528u; f_80296A94(c); // 800BA524
  c->r[30]=0u+0x803A0000u; // 800BA528
  c->r[29]=0u+0x80550000u; // 800BA52C
  c->r[30]=c->r[30]+0xFFFFCEC4u; // 800BA530
  c->r[5]=0u+0x00000000u; // 800BA534
  c->r[3]=c->r[29]+0xFFFFC848u; // 800BA538
  c->r[6]=0u+0x00000000u; // 800BA53C
  c->r[4]=c->r[30]+0x0000001Eu; // 800BA540
  c->lr=0x800BA548u; f_8018D3E4(c); // 800BA544
  c->r[28]=rotl(c->r[3],0)&0x000000FFu; // 800BA548
  cmpu(c,0,c->r[28],0x000000FFu); // 800BA54C
  if (crb(c,2)) { goto L_800BA57C; } // 800BA550
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BA554
  c->r[4]=c->r[30]|c->r[30]; // 800BA558
  c->r[5]=c->r[1]+0x00000018u; // 800BA55C
  c->r[6]=0u+0x00000001u; // 800BA560
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BA564
  c->lr=0x800BA56Cu; f_80257018(c); // 800BA568
  c->r[4]=c->r[28]|c->r[28]; // 800BA56C
  c->r[3]=c->r[29]+0xFFFFC848u; // 800BA570
  c->r[5]=c->r[1]+0x00000018u; // 800BA574
  c->lr=0x800BA57Cu; f_8018DEB8(c); // 800BA578
L_800BA57C:;
  c->r[3]=R8(c->r[31]+0x00000029u); // 800BA57C
  c->r[0]=c->r[3]+0x00000001u; // 800BA580
  W8(c->r[31]+0x00000029u,c->r[0]); // 800BA584
L_800BA588:;
  c->r[3]=c->r[31]|c->r[31]; // 800BA588
  c->lr=0x800BA590u; f_80178DDC(c); // 800BA58C
  c->lr=0x800BA594u; f_8024E040(c); // 800BA590
  c->r[0]=R16(c->r[31]+0x00000076u); // 800BA594
  c->r[30]=0u+0x43300000u; // 800BA598
  W32(c->r[1]+0x00000048u,c->r[30]); // 800BA59C
  {uint32_t ea=c->r[2]+0xFFFF9BD8u; c->f[2]=RF64(ea);} // 800BA5A0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800BA5A4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800BA5A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800BA5AC
  fcmp(c,0,c->f[0],c->f[1]); // 800BA5B0
  if (!crb(c,0)) { goto L_800BA5DC; } // 800BA5B4
  c->r[3]=c->r[31]+0x0000002Cu; // 800BA5B8
  c->r[4]=c->r[31]+0x000003ECu; // 800BA5BC
  c->lr=0x800BA5C4u; f_800361A0(c); // 800BA5C0
  c->r[3]=R8(c->r[31]+0x00000074u); // 800BA5C4
  c->r[0]=0u+0x00000000u; // 800BA5C8
  W8(c->r[31]+0x00000029u,c->r[0]); // 800BA5CC
  c->r[0]=c->r[3]+0x00000001u; // 800BA5D0
  W8(c->r[31]+0x00000074u,c->r[0]); // 800BA5D4
  goto L_800BA60C; // 800BA5D8
L_800BA5DC:;
  c->lr=0x800BA5E0u; f_8024E040(c); // 800BA5DC
  c->r[0]=R16(c->r[31]+0x00000076u); // 800BA5E0
  W32(c->r[1]+0x00000048u,c->r[30]); // 800BA5E4
  {uint32_t ea=c->r[2]+0xFFFF9BD8u; c->f[2]=RF64(ea);} // 800BA5E8
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800BA5EC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800BA5F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800BA5F4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BA5F8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BA5FC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800BA600
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BA604
  W16(c->r[31]+0x00000076u,c->r[0]); // 800BA608
L_800BA60C:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800BA60C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800BA610
  c->r[30]=R32(c->r[1]+0x00000068u); // 800BA614
  c->r[29]=R32(c->r[1]+0x00000064u); // 800BA618
  c->r[28]=R32(c->r[1]+0x00000060u); // 800BA61C
  c->lr=c->r[0]; // 800BA620
  c->r[1]=c->r[1]+0x00000070u; // 800BA624
  return; // 800BA628
}

// fn_800BA62C
void f_800BA62C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA62C
  c->r[0]=c->lr; // 800BA630
  W32(c->r[1]+0x00000074u,c->r[0]); // 800BA634
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800BA638
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800BA63C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800BA640
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 800BA644
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800BA648
  c->r[31]=c->r[3]|c->r[3]; // 800BA64C
  W32(c->r[1]+0x00000048u,c->r[30]); // 800BA650
  c->r[4]=R32(c->r[3]+0x00000394u); // 800BA654
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BA658
  c->lr=0x800BA660u; f_802501B0(c); // 800BA65C
  cmps(c,0,(int32_t)c->r[3],0); // 800BA660
  if (crb(c,2)) { goto L_800BA8B4; } // 800BA664
  c->r[0]=0u+0x00000000u; // 800BA668
  c->r[30]=0u+0x80620000u; // 800BA66C
  W32(c->r[31]+0x000003C4u,c->r[0]); // 800BA670
  c->r[30]=c->r[30]+0x00007688u; // 800BA674
  c->r[4]=0u+0x00000039u; // 800BA678
  c->r[3]=R32(c->r[30]+0x00000014u); // 800BA67C
  c->lr=0x800BA684u; f_8003DCAC(c); // 800BA680
  c->r[3]=R32(c->r[30]+0x00000014u); // 800BA684
  c->r[4]=0u+0x0000003Au; // 800BA688
  c->lr=0x800BA690u; f_8003DCAC(c); // 800BA68C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BA690
  c->r[3]=c->r[31]|c->r[31]; // 800BA694
  {uint32_t ea=c->r[2]+0xFFFF9BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA698
  c->r[4]=0u+0x00000016u; // 800BA69C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BA6A0
  c->r[5]=0u+0x00000000u; // 800BA6A4
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA6A8
  c->ctr=c->r[12]; // 800BA6AC
  if (true) { c->lr=0x800BA6B4u; dispatch(c,c->ctr); } // 800BA6B0
  c->r[3]=R32(c->r[30]+0x00000014u); // 800BA6B4
  c->r[4]=0u+0x00000018u; // 800BA6B8
  c->lr=0x800BA6C0u; f_8003560C(c); // 800BA6BC
  cmps(c,0,(int32_t)c->r[3],8); // 800BA6C0
  if (crb(c,0)) { goto L_800BA6F4; } // 800BA6C4
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800BA6C8
  cmps(c,0,(int32_t)c->r[0],0); // 800BA6CC
  if (!crb(c,2)) { goto L_800BA6E0; } // 800BA6D0
  {uint32_t ea=c->r[2]+0xFFFF9BE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA6D4
  {uint32_t ea=c->r[31]+0x000003ECu; WF32(ea,c->f[0]);} // 800BA6D8
  goto L_800BA6E8; // 800BA6DC
L_800BA6E0:;
  {uint32_t ea=c->r[2]+0xFFFF9BE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA6E0
  {uint32_t ea=c->r[31]+0x000003ECu; WF32(ea,c->f[0]);} // 800BA6E4
L_800BA6E8:;
  {uint32_t ea=c->r[2]+0xFFFF9BE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA6E8
  {uint32_t ea=c->r[31]+0x000003F0u; WF32(ea,c->f[0]);} // 800BA6EC
  goto L_800BA778; // 800BA6F0
L_800BA6F4:;
  c->r[3]=c->r[13]+0xFFFFAB38u; // 800BA6F4
  c->lr=0x800BA6FCu; f_80211724(c); // 800BA6F8
  c->r[4]=0u+0xA0A10000u; // 800BA6FC
  c->r[30]=0u+0x43300000u; // 800BA700
  c->r[0]=c->r[4]+0xFFFFA0A1u; // 800BA704
  W32(c->r[1]+0x00000038u,c->r[30]); // 800BA708
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 800BA70C
  {uint32_t ea=c->r[2]+0xFFFF9BD8u; c->f[2]=RF64(ea);} // 800BA710
  {uint32_t ea=c->r[2]+0xFFFF9BECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA714
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BA718
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)51); // 800BA71C
  c->r[0]=c->r[3]-c->r[0]; // 800BA720
  c->r[3]=c->r[13]+0xFFFFAB38u; // 800BA724
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800BA728
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 800BA72C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800BA730
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BA734
  {uint32_t ea=c->r[31]+0x000003ECu; WF32(ea,c->f[0]);} // 800BA738
  c->lr=0x800BA740u; f_80211724(c); // 800BA73C
  c->r[4]=0u+0x38E40000u; // 800BA740
  W32(c->r[1]+0x00000040u,c->r[30]); // 800BA744
  c->r[0]=c->r[4]+0xFFFF8E39u; // 800BA748
  {uint32_t ea=c->r[2]+0xFFFF9BD8u; c->f[2]=RF64(ea);} // 800BA74C
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 800BA750
  {uint32_t ea=c->r[2]+0xFFFF9BF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA754
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800BA758
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 800BA75C
  c->r[0]=c->r[3]-c->r[0]; // 800BA760
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BA764
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 800BA768
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800BA76C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BA770
  {uint32_t ea=c->r[31]+0x000003F0u; WF32(ea,c->f[0]);} // 800BA774
L_800BA778:;
  {uint32_t ea=c->r[2]+0xFFFF9BF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA778
  c->r[3]=0u+0x805D0000u; // 800BA77C
  c->r[3]=c->r[3]+0xFFFFC7D4u; // 800BA780
  c->r[4]=0u+0x00000074u; // 800BA784
  {uint32_t ea=c->r[31]+0x000003F4u; WF32(ea,c->f[0]);} // 800BA788
  c->r[5]=0u+0x00000002u; // 800BA78C
  c->lr=0x800BA794u; f_801E1F1C(c); // 800BA790
  cmps(c,0,(int32_t)c->r[3],0); // 800BA794
  c->r[30]=c->r[3]|c->r[3]; // 800BA798
  if (crb(c,2)) { goto L_800BA810; } // 800BA79C
  c->r[3]=0u+0x80550000u; // 800BA7A0
  c->r[4]=c->r[31]+0x000003ECu; // 800BA7A4
  c->r[3]=c->r[3]+0x00003D60u; // 800BA7A8
  c->r[5]=c->r[1]+0x0000002Cu; // 800BA7AC
  c->r[3]=c->r[3]+0x00000010u; // 800BA7B0
  c->r[6]=c->r[1]+0x00000030u; // 800BA7B4
  c->r[7]=0u+0x00000000u; // 800BA7B8
  c->lr=0x800BA7C0u; f_801D4A0C(c); // 800BA7BC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA7C0
  c->r[3]=c->r[30]|c->r[30]; // 800BA7C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BA7C8
  c->r[5]=c->r[1]+0x00000014u; // 800BA7CC
  c->f[1]=-c->f[0]; // 800BA7D0
  {uint32_t ea=c->r[2]+0xFFFF9BFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA7D4
  {uint32_t ea=c->r[2]+0xFFFF9BF8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BA7D8
  c->r[4]=0u+0x00000000u; // 800BA7DC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA7E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800BA7E4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 800BA7E8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800BA7EC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800BA7F0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 800BA7F4
  c->r[0]=R32(c->r[1]+0x00000030u); // 800BA7F8
  c->r[6]=R32(c->r[1]+0x0000002Cu); // 800BA7FC
  W32(c->r[1]+0x00000018u,c->r[0]); // 800BA800
  W32(c->r[1]+0x00000014u,c->r[6]); // 800BA804
  c->lr=0x800BA80Cu; f_801E2ACC(c); // 800BA808
  W32(c->r[31]+0x00000084u,c->r[30]); // 800BA80C
L_800BA810:;
  {uint32_t ea=c->r[2]+0xFFFF9C04u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA810
  c->r[3]=c->r[31]+0x000003ECu; // 800BA814
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA818
  c->r[4]=c->r[31]+0x0000002Cu; // 800BA81C
  {uint32_t ea=c->r[2]+0xFFFF9C08u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BA820
  c->r[5]=c->r[1]+0x00000020u; // 800BA824
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 800BA828
  {uint32_t ea=c->r[2]+0xFFFF9C00u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA82C
  {uint32_t ea=c->r[2]+0xFFFF9BD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA830
  {uint32_t ea=c->r[2]+0xFFFF9C0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA834
  c->f[31]=c->ps1[31]=S(std::fma(c->f[4],c->f[3],c->f[2])); // 800BA838
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[31]); // 800BA83C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800BA840
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[1]); // 800BA844
  c->lr=0x800BA84Cu; f_80296A70(c); // 800BA848
  {uint32_t ea=c->r[2]+0xFFFF9BD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA84C
  c->r[3]=c->r[1]+0x00000020u; // 800BA850
  {uint32_t ea=c->r[2]+0xFFFF9C10u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA854
  c->r[4]=c->r[31]+0x00000050u; // 800BA858
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[30]); // 800BA85C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA860
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[2],c->f[31],-c->f[0])); // 800BA864
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800BA868
  c->lr=0x800BA870u; f_80296A94(c); // 800BA86C
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA870
  c->r[0]=0u+0x00000001u; // 800BA874
  {uint32_t ea=c->r[2]+0xFFFF9C10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA878
  c->r[7]=0u+0x803D0000u; // 800BA87C
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 800BA880
  c->r[3]=c->r[31]|c->r[31]; // 800BA884
  c->r[4]=c->r[1]+0x00000008u; // 800BA888
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800BA88C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800BA890
  W8(c->r[31]+0x00000080u,c->r[0]); // 800BA894
  {uint32_t ea=c->r[7]+0xFFFFFF6Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800BA898
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BA89C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BA8A0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BA8A4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BA8A8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BA8AC
  c->lr=0x800BA8B4u; f_800B9C0C(c); // 800BA8B0
L_800BA8B4:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800BA8B4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800BA8B8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 800BA8BC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 800BA8C0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800BA8C4
  c->r[0]=R32(c->r[1]+0x00000074u); // 800BA8C8
  c->r[30]=R32(c->r[1]+0x00000048u); // 800BA8CC
  c->lr=c->r[0]; // 800BA8D0
  c->r[1]=c->r[1]+0x00000070u; // 800BA8D4
  return; // 800BA8D8
}

// fn_800BA8DC
void f_800BA8DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA8DC
  c->r[0]=c->lr; // 800BA8E0
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800BA8E4
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 800BA8E8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 800BA8EC
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800BA8F0
  c->r[31]=c->r[3]|c->r[3]; // 800BA8F4
  W32(c->r[1]+0x000000C8u,c->r[30]); // 800BA8F8
  W32(c->r[1]+0x000000C4u,c->r[29]); // 800BA8FC
  W32(c->r[1]+0x000000C0u,c->r[28]); // 800BA900
  c->r[29]=R32(c->r[3]+0x00000084u); // 800BA904
  cmps(c,0,(int32_t)c->r[29],0); // 800BA908
  if (crb(c,2)) { goto L_800BAA18; } // 800BA90C
  c->r[4]=R8(c->r[31]+0x00000088u); // 800BA910
  c->r[3]=c->r[29]|c->r[29]; // 800BA914
  c->lr=0x800BA91Cu; f_801E29A0(c); // 800BA918
  cmps(c,0,(int32_t)c->r[3],0); // 800BA91C
  if (crb(c,2)) { goto L_800BA94C; } // 800BA920
  c->r[3]=R8(c->r[31]+0x00000088u); // 800BA924
  cmps(c,0,(int32_t)c->r[3],0); // 800BA928
  if (!crb(c,2)) { goto L_800BA94C; } // 800BA92C
  c->r[0]=c->r[3]+0x00000001u; // 800BA930
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA934
  W8(c->r[31]+0x00000088u,c->r[0]); // 800BA938
  c->r[3]=c->r[29]|c->r[29]; // 800BA93C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800BA940
  c->r[5]=0u+0x00000011u; // 800BA944
  c->lr=0x800BA94Cu; f_801E27F8(c); // 800BA948
L_800BA94C:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BA94C
  c->r[4]=0u+0x803A0000u; // 800BA950
  c->r[4]=c->r[4]+0xFFFFCEC4u; // 800BA954
  c->r[5]=c->r[1]+0x00000090u; // 800BA958
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BA95C
  c->r[4]=c->r[4]+0x00000009u; // 800BA960
  c->r[6]=0u+0x00000001u; // 800BA964
  c->lr=0x800BA96Cu; f_80257018(c); // 800BA968
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA96C
  c->r[4]=c->r[1]+0x00000044u; // 800BA970
  {uint32_t ea=c->r[2]+0xFFFF9BBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA974
  c->r[5]=c->r[4]|c->r[4]; // 800BA978
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 800BA97C
  c->r[3]=c->r[1]+0x00000090u; // 800BA980
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 800BA984
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800BA988
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[1]);} // 800BA98C
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[1]);} // 800BA990
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 800BA994
  c->lr=0x800BA99Cu; f_80296750(c); // 800BA998
  c->r[4]=c->r[1]+0x00000044u; // 800BA99C
  c->r[3]=c->r[31]+0x000003ECu; // 800BA9A0
  c->r[5]=c->r[4]|c->r[4]; // 800BA9A4
  c->lr=0x800BA9ACu; f_80296A4C(c); // 800BA9A8
  c->r[3]=0u+0x80550000u; // 800BA9AC
  c->r[4]=c->r[1]+0x00000044u; // 800BA9B0
  c->r[3]=c->r[3]+0x00003D60u; // 800BA9B4
  c->r[5]=c->r[1]+0x00000050u; // 800BA9B8
  c->r[3]=c->r[3]+0x00000010u; // 800BA9BC
  c->r[6]=c->r[1]+0x00000054u; // 800BA9C0
  c->r[7]=0u+0x00000000u; // 800BA9C4
  c->lr=0x800BA9CCu; f_801D4A0C(c); // 800BA9C8
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA9CC
  c->r[3]=c->r[29]|c->r[29]; // 800BA9D0
  c->r[0]=R32(c->r[1]+0x00000058u); // 800BA9D4
  c->r[5]=c->r[1]+0x0000002Cu; // 800BA9D8
  c->f[1]=-c->f[0]; // 800BA9DC
  {uint32_t ea=c->r[2]+0xFFFF9BFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA9E0
  {uint32_t ea=c->r[2]+0xFFFF9BF8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BA9E4
  c->r[4]=0u+0x00000000u; // 800BA9E8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA9EC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800BA9F0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 800BA9F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BA9F8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800BA9FC
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 800BAA00
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BAA04
  c->r[6]=R32(c->r[1]+0x00000050u); // 800BAA08
  W32(c->r[1]+0x00000030u,c->r[0]); // 800BAA0C
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800BAA10
  c->lr=0x800BAA18u; f_801E2ACC(c); // 800BAA14
L_800BAA18:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BAA18
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BAA1C
  c->lr=0x800BAA24u; f_802501B0(c); // 800BAA20
  c->r[3]=c->r[31]|c->r[31]; // 800BAA24
  c->lr=0x800BAA2Cu; f_80178FD0(c); // 800BAA28
  c->r[3]=c->r[31]+0x00000044u; // 800BAA2C
  c->lr=0x800BAA34u; f_80296B0C(c); // 800BAA30
  {uint32_t ea=c->r[2]+0xFFFF9C14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAA34
  fcmp(c,0,c->f[1],c->f[0]); // 800BAA38
  if (!crb(c,1)) { goto L_800BAA5C; } // 800BAA3C
  c->r[3]=c->r[31]+0x00000044u; // 800BAA40
  c->r[4]=c->r[3]|c->r[3]; // 800BAA44
  c->lr=0x800BAA4Cu; f_80296AB0(c); // 800BAA48
  c->r[3]=c->r[31]+0x00000044u; // 800BAA4C
  {uint32_t ea=c->r[2]+0xFFFF9C14u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAA50
  c->r[4]=c->r[3]|c->r[3]; // 800BAA54
  c->lr=0x800BAA5Cu; f_80296A94(c); // 800BAA58
L_800BAA5C:;
  {uint32_t ea=c->r[31]+0x00000064u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BAA5C
  {uint32_t ea=c->r[2]+0xFFFF9C1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAA60
  fcmp(c,0,c->f[31],c->f[0]); // 800BAA64
  if (!crb(c,1)) { goto L_800BAA74; } // 800BAA68
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAA6C
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800BAA70
L_800BAA74:;
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAA74
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAA78
  c->lr=0x800BAA80u; f_8005C22C(c); // 800BAA7C
  {uint32_t ea=c->r[2]+0xFFFF9C1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAA80
  {uint32_t ea=c->r[2]+0xFFFF9C20u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BAA84
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[1]); // 800BAA88
  {uint32_t ea=c->r[2]+0xFFFF9C28u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAA8C
  {uint32_t ea=c->r[2]+0xFFFF9C24u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAA90
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAA94
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[3]); // 800BAA98
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800BAA9C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[31],c->f[2])); // 800BAAA0
  fcmp(c,0,c->f[1],c->f[0]); // 800BAAA4
  if (!crb(c,0)) { goto L_800BAABC; } // 800BAAA8
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAAAC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BAAB0
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800BAAB4
  goto L_800BAAC0; // 800BAAB8
L_800BAABC:;
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[1]);} // 800BAABC
L_800BAAC0:;
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAAC0
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAAC4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 800BAAC8
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[0],c->f[1])); // 800BAACC
  c->lr=0x800BAAD4u; f_800689C8(c); // 800BAAD0
  {uint32_t ea=c->r[31]+0x00000060u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BAAD4
  {uint32_t ea=c->r[2]+0xFFFF9C1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAAD8
  fcmp(c,0,c->f[31],c->f[0]); // 800BAADC
  if (!crb(c,1)) { goto L_800BAAEC; } // 800BAAE0
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAAE4
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 800BAAE8
L_800BAAEC:;
  c->f[2]=c->f[1]; // 800BAAEC
  {uint32_t ea=c->r[31]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAAF0
  c->lr=0x800BAAF8u; f_8005C22C(c); // 800BAAF4
  c->f[1]=-c->f[1]; // 800BAAF8
  {uint32_t ea=c->r[2]+0xFFFF9C1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAAFC
  {uint32_t ea=c->r[2]+0xFFFF9C20u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BAB00
  {uint32_t ea=c->r[2]+0xFFFF9C28u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAB04
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[1]); // 800BAB08
  {uint32_t ea=c->r[2]+0xFFFF9C24u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAB0C
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAB10
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[3]); // 800BAB14
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800BAB18
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[31],c->f[2])); // 800BAB1C
  fcmp(c,0,c->f[1],c->f[0]); // 800BAB20
  if (!crb(c,0)) { goto L_800BAB38; } // 800BAB24
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAB28
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BAB2C
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800BAB30
  goto L_800BAB3C; // 800BAB34
L_800BAB38:;
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[1]);} // 800BAB38
L_800BAB3C:;
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAB3C
  {uint32_t ea=c->r[2]+0xFFFF9BF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAB40
  fcmp(c,0,c->f[1],c->f[0]); // 800BAB44
  if (!crb(c,1)) { goto L_800BAE20; } // 800BAB48
  c->r[3]=0u+0x00000000u; // 800BAB4C
  c->r[4]=0u+0x00000006u; // 800BAB50
  c->r[5]=0u+0x00000020u; // 800BAB54
  c->lr=0x800BAB5Cu; f_8027C0C8(c); // 800BAB58
  c->r[29]=0u+0x80620000u; // 800BAB5C
  c->r[4]=0u+0x00000089u; // 800BAB60
  c->r[29]=c->r[29]+0x00007688u; // 800BAB64
  c->r[3]=R32(c->r[29]+0x00000014u); // 800BAB68
  c->lr=0x800BAB70u; f_80038AF4(c); // 800BAB6C
  cmps(c,0,(int32_t)c->r[3],0); // 800BAB70
  if (!crb(c,2)) { goto L_800BAB94; } // 800BAB74
  c->r[3]=R32(c->r[29]+0x00000014u); // 800BAB78
  c->r[4]=0u+0x00000027u; // 800BAB7C
  c->lr=0x800BAB84u; f_8003560C(c); // 800BAB80
  cmps(c,0,(int32_t)c->r[3],0); // 800BAB84
  if (crb(c,2)) { goto L_800BAB94; } // 800BAB88
  c->r[4]=0u+0x000003E8u; // 800BAB8C
  c->lr=0x800BAB94u; f_80085628(c); // 800BAB90
L_800BAB94:;
  c->r[30]=0u+0x80620000u; // 800BAB94
  c->r[4]=0u+0x0000007Fu; // 800BAB98
  c->r[30]=c->r[30]+0x00007688u; // 800BAB9C
  c->r[3]=R32(c->r[30]+0x00000014u); // 800BABA0
  c->lr=0x800BABA8u; f_8003DCAC(c); // 800BABA4
  c->r[3]=c->r[31]|c->r[31]; // 800BABA8
  c->r[4]=0u+0x00000004u; // 800BABAC
  c->r[5]=0u+0x00000015u; // 800BABB0
  c->r[6]=0u+0x00000001u; // 800BABB4
  c->r[7]=0u+0x00000001u; // 800BABB8
  c->lr=0x800BABC0u; f_8017900C(c); // 800BABBC
  c->r[3]=R32(c->r[30]+0x00000014u); // 800BABC0
  c->r[4]=0u+0x00000018u; // 800BABC4
  c->lr=0x800BABCCu; f_8003560C(c); // 800BABC8
  cmps(c,0,(int32_t)c->r[3],8); // 800BABCC
  c->r[29]=c->r[3]|c->r[3]; // 800BABD0
  c->r[28]=0u+0xFFFFFFFFu; // 800BABD4
  if (crb(c,2)) { goto L_800BAC4C; } // 800BABD8
  if (!crb(c,0)) { goto L_800BABF8; } // 800BABDC
  cmps(c,0,(int32_t)c->r[3],6); // 800BABE0
  if (crb(c,2)) { goto L_800BAC10; } // 800BABE4
  if (!crb(c,0)) { goto L_800BAC18; } // 800BABE8
  cmps(c,0,(int32_t)c->r[3],5); // 800BABEC
  if (!crb(c,0)) { goto L_800BAC08; } // 800BABF0
  goto L_800BAC4C; // 800BABF4
L_800BABF8:;
  cmps(c,0,(int32_t)c->r[3],10); // 800BABF8
  if (crb(c,2)) { goto L_800BAC48; } // 800BABFC
  if (!crb(c,0)) { goto L_800BAC4C; } // 800BAC00
  goto L_800BAC20; // 800BAC04
L_800BAC08:;
  c->r[28]=0u+0x00000002u; // 800BAC08
  goto L_800BAC4C; // 800BAC0C
L_800BAC10:;
  c->r[28]=0u+0x00000003u; // 800BAC10
  goto L_800BAC4C; // 800BAC14
L_800BAC18:;
  c->r[28]=0u+0x00000004u; // 800BAC18
  goto L_800BAC4C; // 800BAC1C
L_800BAC20:;
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800BAC20
  cmps(c,0,(int32_t)c->r[0],0); // 800BAC24
  if (!crb(c,2)) { goto L_800BAC4C; } // 800BAC28
  c->r[3]=R32(c->r[30]+0x00000014u); // 800BAC2C
  c->r[4]=0u+0x00000047u; // 800BAC30
  c->lr=0x800BAC38u; f_80038AF4(c); // 800BAC34
  cmps(c,0,(int32_t)c->r[3],0); // 800BAC38
  if (crb(c,2)) { goto L_800BAC4C; } // 800BAC3C
  c->r[28]=0u+0x00000005u; // 800BAC40
  goto L_800BAC4C; // 800BAC44
L_800BAC48:;
  c->r[28]=0u+0x00000006u; // 800BAC48
L_800BAC4C:;
  cmpu(c,0,c->r[29],0x00000009u); // 800BAC4C
  if (!crb(c,0)) { goto L_800BAC68; } // 800BAC50
  c->r[3]=0u+0x80620000u; // 800BAC54
  c->r[4]=0u+0x00000079u; // 800BAC58
  c->r[3]=c->r[3]+0x00007688u; // 800BAC5C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BAC60
  c->lr=0x800BAC68u; f_80038A08(c); // 800BAC64
L_800BAC68:;
  c->r[0]=c->r[28]+0x00010000u; // 800BAC68
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800BAC6C
  if (crb(c,2)) { goto L_800BACA0; } // 800BAC70
  c->r[29]=0u+0x80620000u; // 800BAC74
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; // 800BAC78
  c->r[29]=c->r[29]+0x00007688u; // 800BAC7C
  c->r[3]=R32(c->r[29]+0x00000014u); // 800BAC80
  c->lr=0x800BAC88u; f_8008358C(c); // 800BAC84
  cmps(c,0,(int32_t)c->r[3],0); // 800BAC88
  if (!crb(c,2)) { goto L_800BACA0; } // 800BAC8C
  c->r[3]=R32(c->r[29]+0x00000014u); // 800BAC90
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; // 800BAC94
  c->r[5]=0u+0x00002710u; // 800BAC98
  c->lr=0x800BACA0u; f_80083504(c); // 800BAC9C
L_800BACA0:;
  {uint32_t ea=c->r[2]+0xFFFF9BF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BACA0
  c->r[0]=0u+0x00000000u; // 800BACA4
  W8(c->r[31]+0x00000080u,c->r[0]); // 800BACA8
  c->r[3]=0u+0x00000004u; // 800BACAC
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800BACB0
  c->lr=0x800BACB8u; f_80269AD0(c); // 800BACB4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BACB8
  c->r[3]=c->r[31]|c->r[31]; // 800BACBC
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BACC0
  c->r[4]=0u+0x00000018u; // 800BACC4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BACC8
  c->r[5]=0u+0x00000000u; // 800BACCC
  c->f[2]=c->f[1]; // 800BACD0
  c->ctr=c->r[12]; // 800BACD4
  if (true) { c->lr=0x800BACDCu; dispatch(c,c->ctr); } // 800BACD8
  c->r[30]=0u+0x803A0000u; // 800BACDC
  c->r[29]=0u+0x80550000u; // 800BACE0
  c->r[30]=c->r[30]+0xFFFFCEC4u; // 800BACE4
  c->r[5]=0u+0x00000000u; // 800BACE8
  c->r[3]=c->r[29]+0xFFFFC848u; // 800BACEC
  c->r[6]=0u+0x00000000u; // 800BACF0
  c->r[4]=c->r[30]+0x00000022u; // 800BACF4
  c->lr=0x800BACFCu; f_8018D3E4(c); // 800BACF8
  c->r[28]=rotl(c->r[3],0)&0x000000FFu; // 800BACFC
  cmpu(c,0,c->r[28],0x000000FFu); // 800BAD00
  if (crb(c,2)) { goto L_800BADC4; } // 800BAD04
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BAD08
  c->r[4]=c->r[30]|c->r[30]; // 800BAD0C
  c->r[5]=c->r[1]+0x00000060u; // 800BAD10
  c->r[6]=0u+0x00000001u; // 800BAD14
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BAD18
  c->lr=0x800BAD20u; f_80257018(c); // 800BAD1C
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAD20
  c->r[4]=c->r[1]+0x00000038u; // 800BAD24
  {uint32_t ea=c->r[2]+0xFFFF9BBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAD28
  c->r[5]=c->r[4]|c->r[4]; // 800BAD2C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 800BAD30
  c->r[3]=c->r[1]+0x00000060u; // 800BAD34
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 800BAD38
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800BAD3C
  c->lr=0x800BAD44u; f_80296750(c); // 800BAD40
  c->r[5]=0u+0x803A0000u; // 800BAD44
  {uint32_t ea=c->r[5]+0xFFFFCEA0u; c->r[11]=R32(ea); c->r[5]=ea;} // 800BAD48
  c->r[8]=R32(c->r[1]+0x00000038u); // 800BAD4C
  c->r[4]=c->r[28]|c->r[28]; // 800BAD50
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 800BAD54
  c->r[3]=c->r[29]+0xFFFFC848u; // 800BAD58
  c->r[10]=R32(c->r[5]+0x00000004u); // 800BAD5C
  c->r[6]=c->r[1]+0x00000014u; // 800BAD60
  c->r[9]=R32(c->r[5]+0x00000008u); // 800BAD64
  c->r[5]=c->r[1]+0x00000020u; // 800BAD68
  c->r[0]=R32(c->r[1]+0x00000040u); // 800BAD6C
  W32(c->r[1]+0x00000014u,c->r[11]); // 800BAD70
  W32(c->r[1]+0x00000018u,c->r[10]); // 800BAD74
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800BAD78
  W32(c->r[1]+0x00000020u,c->r[8]); // 800BAD7C
  W32(c->r[1]+0x00000024u,c->r[7]); // 800BAD80
  W32(c->r[1]+0x00000028u,c->r[0]); // 800BAD84
  c->lr=0x800BAD8Cu; f_8018DBD0(c); // 800BAD88
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAD8C
  c->r[3]=0u+0x0000001Au; // 800BAD90
  c->r[4]=0u+0x00000000u; // 800BAD94
  c->lr=0x800BAD9Cu; f_802445B8(c); // 800BAD98
  c->r[0]=0u+0x00000001u; // 800BAD9C
  c->r[3]=c->r[31]+0x00000010u; // 800BADA0
  W8(c->r[31]+0x00000089u,c->r[0]); // 800BADA4
  c->r[4]=0u+0x00000000u; // 800BADA8
  c->lr=0x800BADB0u; f_80036430(c); // 800BADAC
  W8(c->r[31]+0x0000008Du,c->r[28]); // 800BADB0
  c->r[4]=c->r[28]|c->r[28]; // 800BADB4
  c->r[3]=c->r[29]+0xFFFFC848u; // 800BADB8
  c->lr=0x800BADC0u; f_8018E238(c); // 800BADBC
  W32(c->r[31]+0x00000090u,c->r[3]); // 800BADC0
L_800BADC4:;
  c->r[3]=c->r[31]|c->r[31]; // 800BADC4
  c->r[4]=0u+0x00000004u; // 800BADC8
  c->r[5]=0u+0x0000000Cu; // 800BADCC
  c->r[6]=0u+0x00000001u; // 800BADD0
  c->r[7]=0u+0x00000001u; // 800BADD4
  c->lr=0x800BADDCu; f_8017900C(c); // 800BADD8
  c->r[3]=R32(c->r[31]+0x00000084u); // 800BADDC
  cmps(c,0,(int32_t)c->r[3],0); // 800BADE0
  if (crb(c,2)) { goto L_800BADF8; } // 800BADE4
  c->lr=0x800BADECu; f_801E2520(c); // 800BADE8
  c->r[0]=0u+0x00000000u; // 800BADEC
  W32(c->r[31]+0x00000084u,c->r[0]); // 800BADF0
  W8(c->r[31]+0x00000088u,c->r[0]); // 800BADF4
L_800BADF8:;
  c->r[7]=0u+0x803D0000u; // 800BADF8
  {uint32_t ea=c->r[7]+0xFFFFFF78u; c->r[6]=R32(ea); c->r[7]=ea;} // 800BADFC
  c->r[3]=c->r[31]|c->r[31]; // 800BAE00
  c->r[4]=c->r[1]+0x00000008u; // 800BAE04
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BAE08
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BAE0C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BAE10
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BAE14
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BAE18
  c->lr=0x800BAE20u; f_800B9C0C(c); // 800BAE1C
L_800BAE20:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 800BAE20
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800BAE24
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 800BAE28
  c->r[31]=R32(c->r[1]+0x000000CCu); // 800BAE2C
  c->r[30]=R32(c->r[1]+0x000000C8u); // 800BAE30
  c->r[29]=R32(c->r[1]+0x000000C4u); // 800BAE34
  c->r[28]=R32(c->r[1]+0x000000C0u); // 800BAE38
  c->lr=c->r[0]; // 800BAE3C
  c->r[1]=c->r[1]+0x000000E0u; // 800BAE40
  return; // 800BAE44
}

// fn_800BAE48
void f_800BAE48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAE48
  c->r[0]=c->lr; // 800BAE4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BAE50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BAE54
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BAE58
  c->r[30]=c->r[3]|c->r[3]; // 800BAE5C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800BAE60
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BAE64
  c->lr=0x800BAE6Cu; f_802501B0(c); // 800BAE68
  cmps(c,0,(int32_t)c->r[3],0); // 800BAE6C
  if (crb(c,2)) { goto L_800BAEE8; } // 800BAE70
  c->r[31]=0u+0x80620000u; // 800BAE74
  c->r[4]=0u+0x00000036u; // 800BAE78
  c->r[31]=c->r[31]+0x00007688u; // 800BAE7C
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BAE80
  c->lr=0x800BAE88u; f_80038A08(c); // 800BAE84
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BAE88
  c->r[4]=0u+0x00000034u; // 800BAE8C
  c->lr=0x800BAE94u; f_80038A08(c); // 800BAE90
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800BAE94
  c->r[3]=c->r[30]|c->r[30]; // 800BAE98
  {uint32_t ea=c->r[2]+0xFFFF9BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAE9C
  c->r[4]=0u+0x00000008u; // 800BAEA0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BAEA4
  c->r[5]=0u+0x00000000u; // 800BAEA8
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAEAC
  c->ctr=c->r[12]; // 800BAEB0
  if (true) { c->lr=0x800BAEB8u; dispatch(c,c->ctr); } // 800BAEB4
  c->r[0]=0u+0x00000004u; // 800BAEB8
  c->r[7]=0u+0x803D0000u; // 800BAEBC
  W8(c->r[30]+0x00000029u,c->r[0]); // 800BAEC0
  c->r[3]=c->r[30]|c->r[30]; // 800BAEC4
  c->r[4]=c->r[1]+0x00000008u; // 800BAEC8
  {uint32_t ea=c->r[7]+0xFFFFFF84u; c->r[6]=R32(ea); c->r[7]=ea;} // 800BAECC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BAED0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BAED4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BAED8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BAEDC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BAEE0
  c->lr=0x800BAEE8u; f_800B9C0C(c); // 800BAEE4
L_800BAEE8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BAEE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BAEEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BAEF0
  c->lr=c->r[0]; // 800BAEF4
  c->r[1]=c->r[1]+0x00000020u; // 800BAEF8
  return; // 800BAEFC
}

// fn_800BAF00
void f_800BAF00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAF00
  c->r[0]=c->lr; // 800BAF04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BAF08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BAF0C
  c->r[31]=c->r[3]|c->r[3]; // 800BAF10
  c->r[4]=R32(c->r[3]+0x00000394u); // 800BAF14
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BAF18
  c->lr=0x800BAF20u; f_802501B0(c); // 800BAF1C
  c->r[0]=R8(c->r[31]+0x0000008Bu); // 800BAF20
  cmpu(c,0,c->r[0],0x00000001u); // 800BAF24
  if (!crb(c,2)) { goto L_800BAF3C; } // 800BAF28
  {uint32_t ea=c->r[2]+0xFFFF9C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAF2C
  c->r[3]=c->r[31]+0x0000000Cu; // 800BAF30
  c->lr=0x800BAF38u; f_800944D8(c); // 800BAF34
  goto L_800BAF44; // 800BAF38
L_800BAF3C:;
  c->r[3]=c->r[31]+0x0000000Cu; // 800BAF3C
  c->lr=0x800BAF44u; f_80038C0C(c); // 800BAF40
L_800BAF44:;
  c->r[3]=c->r[31]+0x0000000Cu; // 800BAF44
  c->r[4]=0u+0x000000B4u; // 800BAF48
  c->lr=0x800BAF50u; f_80038BCC(c); // 800BAF4C
  cmps(c,0,(int32_t)c->r[3],0); // 800BAF50
  if (crb(c,2)) { goto L_800BAFCC; } // 800BAF54
  c->r[0]=0u+0x00000002u; // 800BAF58
  c->r[3]=c->r[31]|c->r[31]; // 800BAF5C
  W8(c->r[31]+0x0000008Bu,c->r[0]); // 800BAF60
  c->r[4]=0u+0x00000004u; // 800BAF64
  c->r[5]=0u+0x00000014u; // 800BAF68
  c->r[6]=0u+0x00000001u; // 800BAF6C
  c->r[7]=0u+0x00000001u; // 800BAF70
  c->lr=0x800BAF78u; f_8017900C(c); // 800BAF74
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BAF78
  c->r[3]=c->r[31]|c->r[31]; // 800BAF7C
  {uint32_t ea=c->r[2]+0xFFFF9BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAF80
  c->r[4]=0u+0x00000009u; // 800BAF84
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BAF88
  c->r[5]=0u+0x00000000u; // 800BAF8C
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAF90
  c->ctr=c->r[12]; // 800BAF94
  if (true) { c->lr=0x800BAF9Cu; dispatch(c,c->ctr); } // 800BAF98
  c->r[0]=0u+0x00000000u; // 800BAF9C
  c->r[7]=0u+0x803D0000u; // 800BAFA0
  W8(c->r[31]+0x00000029u,c->r[0]); // 800BAFA4
  c->r[3]=c->r[31]|c->r[31]; // 800BAFA8
  c->r[4]=c->r[1]+0x00000008u; // 800BAFAC
  {uint32_t ea=c->r[7]+0xFFFFFF90u; c->r[6]=R32(ea); c->r[7]=ea;} // 800BAFB0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BAFB4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BAFB8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BAFBC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BAFC0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BAFC4
  c->lr=0x800BAFCCu; f_800B9C0C(c); // 800BAFC8
L_800BAFCC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BAFCC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BAFD0
  c->lr=c->r[0]; // 800BAFD4
  c->r[1]=c->r[1]+0x00000020u; // 800BAFD8
  return; // 800BAFDC
}

// fn_800BAFE0
void f_800BAFE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAFE0
  c->r[0]=c->lr; // 800BAFE4
  c->r[4]=0u+0x80550000u; // 800BAFE8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BAFEC
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800BAFF0
  W32(c->r[1]+0x00000058u,c->r[30]); // 800BAFF4
  c->r[30]=c->r[3]|c->r[3]; // 800BAFF8
  c->r[3]=c->r[4]+0xFFFFCE54u; // 800BAFFC
  c->r[4]=0u+0x0000000Du; // 800BB000
  c->lr=0x800BB008u; f_8019C920(c); // 800BB004
  cmps(c,0,(int32_t)c->r[3],0); // 800BB008
  c->r[31]=c->r[3]|c->r[3]; // 800BB00C
  if (crb(c,2)) { goto L_800BB0F4; } // 800BB010
  c->r[3]=0u+0x80620000u; // 800BB014
  c->r[4]=0u+0x00000044u; // 800BB018
  c->r[3]=c->r[3]+0x00007688u; // 800BB01C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BB020
  c->lr=0x800BB028u; f_80038A08(c); // 800BB024
  c->r[5]=R8(c->r[30]+0x00000081u); // 800BB028
  c->r[3]=c->r[31]|c->r[31]; // 800BB02C
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB030
  c->r[4]=0u+0x00000073u; // 800BB034
  c->r[6]=0u+0x00000000u; // 800BB038
  c->r[7]=0u+0x00000000u; // 800BB03C
  c->lr=0x800BB044u; f_801F4D44(c); // 800BB040
  c->r[3]=R32(c->r[30]+0x00000394u); // 800BB044
  c->r[4]=0u+0x803A0000u; // 800BB048
  c->r[4]=c->r[4]+0xFFFFCEC4u; // 800BB04C
  c->r[5]=c->r[1]+0x00000020u; // 800BB050
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BB054
  c->r[6]=0u+0x00000001u; // 800BB058
  c->lr=0x800BB060u; f_80257018(c); // 800BB05C
  {uint32_t ea=c->r[2]+0xFFFF9C30u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB060
  c->r[4]=c->r[1]+0x00000014u; // 800BB064
  {uint32_t ea=c->r[2]+0xFFFF9C34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB068
  c->r[5]=c->r[4]|c->r[4]; // 800BB06C
  {uint32_t ea=c->r[2]+0xFFFF9C38u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB070
  c->r[3]=c->r[1]+0x00000020u; // 800BB074
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 800BB078
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800BB07C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BB080
  c->lr=0x800BB088u; f_80296750(c); // 800BB084
  c->r[3]=c->r[31]+0x0000002Cu; // 800BB088
  c->r[4]=c->r[1]+0x00000014u; // 800BB08C
  c->lr=0x800BB094u; f_800361A0(c); // 800BB090
  {uint32_t ea=c->r[30]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB094
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB098
  c->f[2]=-c->f[1]; // 800BB09C
  c->f[1]=c->ps1[1]=S(c->f[2]); // 800BB0A0
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[2]);} // 800BB0A4
  fcmp(c,0,c->f[1],c->f[0]); // 800BB0A8
  if (!crb(c,0)) { goto L_800BB0C0; } // 800BB0AC
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB0B0
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB0B4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BB0B8
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800BB0BC
L_800BB0C0:;
  {uint32_t ea=c->r[2]+0xFFFF9C1Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB0C0
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB0C4
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB0C8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800BB0CC
  fcmp(c,0,c->f[0],c->f[1]); // 800BB0D0
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800BB0D4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BB0D8
  if (!crb(c,2)) { goto L_800BB0EC; } // 800BB0DC
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB0E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BB0E4
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800BB0E8
L_800BB0EC:;
  {uint32_t ea=c->r[30]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB0EC
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800BB0F0
L_800BB0F4:;
  c->r[0]=0u+0x00000000u; // 800BB0F4
  c->r[31]=0u+0x80620000u; // 800BB0F8
  W8(c->r[30]+0x00000029u,c->r[0]); // 800BB0FC
  c->r[31]=c->r[31]+0x00007688u; // 800BB100
  c->r[4]=0u+0x00000018u; // 800BB104
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB108
  c->lr=0x800BB110u; f_8003560C(c); // 800BB10C
  cmpu(c,0,c->r[3],0x0000000Au); // 800BB110
  if (!crb(c,2)) { goto L_800BB14C; } // 800BB114
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB118
  c->r[4]=0u+0x0000006Fu; // 800BB11C
  c->lr=0x800BB124u; f_80038AF4(c); // 800BB120
  cmps(c,0,(int32_t)c->r[3],0); // 800BB124
  if (!crb(c,2)) { goto L_800BB138; } // 800BB128
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB12C
  c->r[4]=0u+0x00000057u; // 800BB130
  c->lr=0x800BB138u; f_80038A08(c); // 800BB134
L_800BB138:;
  c->r[3]=0u+0x80620000u; // 800BB138
  c->r[4]=0u+0x0000006Eu; // 800BB13C
  c->r[3]=c->r[3]+0x00007688u; // 800BB140
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BB144
  c->lr=0x800BB14Cu; f_80038A08(c); // 800BB148
L_800BB14C:;
  c->r[3]=R32(c->r[30]+0x00000084u); // 800BB14C
  cmps(c,0,(int32_t)c->r[3],0); // 800BB150
  if (crb(c,2)) { goto L_800BB168; } // 800BB154
  c->lr=0x800BB15Cu; f_801E2520(c); // 800BB158
  c->r[0]=0u+0x00000000u; // 800BB15C
  W32(c->r[30]+0x00000084u,c->r[0]); // 800BB160
  W8(c->r[30]+0x00000088u,c->r[0]); // 800BB164
L_800BB168:;
  c->r[3]=0u+0x80620000u; // 800BB168
  c->r[4]=0u+0x0000007Fu; // 800BB16C
  c->r[3]=c->r[3]+0x00007688u; // 800BB170
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BB174
  c->lr=0x800BB17Cu; f_8003DCAC(c); // 800BB178
  c->r[0]=0u+0x00000000u; // 800BB17C
  c->r[7]=0u+0x803D0000u; // 800BB180
  W8(c->r[30]+0x0000002Au,c->r[0]); // 800BB184
  c->r[3]=c->r[30]|c->r[30]; // 800BB188
  c->r[4]=c->r[1]+0x00000008u; // 800BB18C
  {uint32_t ea=c->r[7]+0xFFFFFF9Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800BB190
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BB194
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BB198
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BB19C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BB1A0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BB1A4
  c->lr=0x800BB1ACu; f_800B9C0C(c); // 800BB1A8
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BB1AC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800BB1B0
  c->r[30]=R32(c->r[1]+0x00000058u); // 800BB1B4
  c->lr=c->r[0]; // 800BB1B8
  c->r[1]=c->r[1]+0x00000060u; // 800BB1BC
  return; // 800BB1C0
}

// fn_800BB1C4
void f_800BB1C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB1C4
  c->r[0]=c->lr; // 800BB1C8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BB1CC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800BB1D0
  c->r[31]=c->r[3]|c->r[3]; // 800BB1D4
  c->r[4]=R8(c->r[3]+0x00000029u); // 800BB1D8
  cmps(c,0,(int32_t)c->r[4],0); // 800BB1DC
  if (!crb(c,2)) { goto L_800BB20C; } // 800BB1E0
  c->r[0]=c->r[4]+0x00000001u; // 800BB1E4
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB1E8
  W8(c->r[3]+0x00000029u,c->r[0]); // 800BB1EC
  c->r[4]=0u+0x00000002u; // 800BB1F0
  c->f[2]=c->f[1]; // 800BB1F4
  c->r[5]=0u+0x00000000u; // 800BB1F8
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800BB1FC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BB200
  c->ctr=c->r[12]; // 800BB204
  if (true) { c->lr=0x800BB20Cu; dispatch(c,c->ctr); } // 800BB208
L_800BB20C:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BB20C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BB210
  c->lr=0x800BB218u; f_802501B0(c); // 800BB214
  cmps(c,0,(int32_t)c->r[3],0); // 800BB218
  if (crb(c,2)) { goto L_800BB338; } // 800BB21C
  c->r[3]=R8(c->r[31]+0x00000029u); // 800BB220
  cmps(c,0,(int32_t)c->r[3],3); // 800BB224
  if (crb(c,2)) { goto L_800BB338; } // 800BB228
  if (!crb(c,0)) { goto L_800BB240; } // 800BB22C
  cmps(c,0,(int32_t)c->r[3],1); // 800BB230
  if (crb(c,2)) { goto L_800BB250; } // 800BB234
  if (!crb(c,0)) { goto L_800BB2AC; } // 800BB238
  goto L_800BB338; // 800BB23C
L_800BB240:;
  cmps(c,0,(int32_t)c->r[3],5); // 800BB240
  if (crb(c,2)) { goto L_800BB330; } // 800BB244
  if (!crb(c,0)) { goto L_800BB338; } // 800BB248
  goto L_800BB318; // 800BB24C
L_800BB250:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 800BB250
  cmps(c,0,(int32_t)c->r[0],0); // 800BB254
  if (crb(c,2)) { goto L_800BB2A0; } // 800BB258
  c->r[0]=c->r[3]+0x00000001u; // 800BB25C
  c->r[3]=c->r[31]|c->r[31]; // 800BB260
  W8(c->r[31]+0x00000029u,c->r[0]); // 800BB264
  c->r[4]=0u+0x00000017u; // 800BB268
  {uint32_t ea=c->r[2]+0xFFFF9BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB26C
  c->r[5]=0u+0x00000000u; // 800BB270
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BB274
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB278
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BB27C
  c->ctr=c->r[12]; // 800BB280
  if (true) { c->lr=0x800BB288u; dispatch(c,c->ctr); } // 800BB284
  c->r[3]=0u+0x80620000u; // 800BB288
  c->r[4]=0u+0x00000036u; // 800BB28C
  c->r[3]=c->r[3]+0x00007688u; // 800BB290
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BB294
  c->lr=0x800BB29Cu; f_8003DCAC(c); // 800BB298
  goto L_800BB338; // 800BB29C
L_800BB2A0:;
  c->r[0]=0u+0x00000004u; // 800BB2A0
  W8(c->r[31]+0x00000029u,c->r[0]); // 800BB2A4
  goto L_800BB338; // 800BB2A8
L_800BB2AC:;
  {uint32_t ea=c->r[31]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB2AC
  c->r[0]=c->r[3]+0x00000001u; // 800BB2B0
  {uint32_t ea=c->r[2]+0xFFFF9C1Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB2B4
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB2B8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800BB2BC
  W8(c->r[31]+0x00000029u,c->r[0]); // 800BB2C0
  fcmp(c,0,c->f[1],c->f[0]); // 800BB2C4
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[1]);} // 800BB2C8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BB2CC
  if (!crb(c,2)) { goto L_800BB2DC; } // 800BB2D0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 800BB2D4
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800BB2D8
L_800BB2DC:;
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BB2DC
  c->r[3]=c->r[31]|c->r[31]; // 800BB2E0
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB2E4
  c->r[4]=0u+0x00000008u; // 800BB2E8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BB2EC
  c->r[5]=0u+0x00000000u; // 800BB2F0
  c->f[2]=c->f[1]; // 800BB2F4
  c->ctr=c->r[12]; // 800BB2F8
  if (true) { c->lr=0x800BB300u; dispatch(c,c->ctr); } // 800BB2FC
  c->r[3]=0u+0x80620000u; // 800BB300
  c->r[4]=0u+0x00000035u; // 800BB304
  c->r[3]=c->r[3]+0x00007688u; // 800BB308
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BB30C
  c->lr=0x800BB314u; f_80038A08(c); // 800BB310
  goto L_800BB338; // 800BB314
L_800BB318:;
  c->r[3]=0u+0x80620000u; // 800BB318
  c->r[4]=0u+0x00000034u; // 800BB31C
  c->r[3]=c->r[3]+0x00007688u; // 800BB320
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BB324
  c->lr=0x800BB32Cu; f_8003DCAC(c); // 800BB328
  goto L_800BB338; // 800BB32C
L_800BB330:;
  c->r[0]=0u+0x00000004u; // 800BB330
  W8(c->r[31]+0x00000029u,c->r[0]); // 800BB334
L_800BB338:;
  c->r[0]=R8(c->r[31]+0x00000029u); // 800BB338
  cmpu(c,0,c->r[0],0x00000002u); // 800BB33C
  if (!crb(c,2)) { goto L_800BB388; } // 800BB340
  c->r[0]=R8(c->r[31]+0x0000002Au); // 800BB344
  cmps(c,0,(int32_t)c->r[0],0); // 800BB348
  if (!crb(c,2)) { goto L_800BB388; } // 800BB34C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BB350
  {uint32_t ea=c->r[2]+0xFFFF9BC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB354
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB358
  fcmp(c,0,c->f[1],c->f[0]); // 800BB35C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BB360
  if (!crb(c,2)) { goto L_800BB388; } // 800BB364
  c->r[3]=c->r[31]|c->r[31]; // 800BB368
  c->r[4]=0u+0x00000004u; // 800BB36C
  c->r[5]=0u+0x0000001Bu; // 800BB370
  c->r[6]=0u+0x00000001u; // 800BB374
  c->r[7]=0u+0x00000001u; // 800BB378
  c->lr=0x800BB380u; f_8017900C(c); // 800BB37C
  c->r[0]=0u+0x00000001u; // 800BB380
  W8(c->r[31]+0x0000002Au,c->r[0]); // 800BB384
L_800BB388:;
  c->r[0]=R8(c->r[31]+0x00000029u); // 800BB388
  cmpu(c,0,c->r[0],0x00000004u); // 800BB38C
  if (!crb(c,2)) { goto L_800BB60C; } // 800BB390
  c->r[3]=0u+0x803A0000u; // 800BB394
  {uint32_t ea=c->r[3]+0xFFFFCEACu; c->r[8]=R32(ea); c->r[3]=ea;} // 800BB398
  c->r[5]=0u+0x803A0000u; // 800BB39C
  {uint32_t ea=c->r[5]+0xFFFFCEB8u; c->r[4]=R32(ea); c->r[5]=ea;} // 800BB3A0
  c->r[7]=R32(c->r[3]+0x00000004u); // 800BB3A4
  c->r[6]=R32(c->r[3]+0x00000008u); // 800BB3A8
  c->r[3]=R32(c->r[5]+0x00000004u); // 800BB3AC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800BB3B0
  W32(c->r[1]+0x00000038u,c->r[8]); // 800BB3B4
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 800BB3B8
  W32(c->r[1]+0x00000040u,c->r[6]); // 800BB3BC
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800BB3C0
  W32(c->r[1]+0x00000030u,c->r[3]); // 800BB3C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BB3C8
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800BB3CC
  cmps(c,0,(int32_t)c->r[0],0); // 800BB3D0
  if (!crb(c,2)) { goto L_800BB3E8; } // 800BB3D4
  c->r[3]=c->r[1]+0x00000020u; // 800BB3D8
  c->r[4]=c->r[1]+0x00000038u; // 800BB3DC
  c->lr=0x800BB3E4u; f_800361A0(c); // 800BB3E0
  goto L_800BB3F4; // 800BB3E4
L_800BB3E8:;
  c->r[3]=c->r[1]+0x00000020u; // 800BB3E8
  c->r[4]=c->r[1]+0x0000002Cu; // 800BB3EC
  c->lr=0x800BB3F4u; f_800361A0(c); // 800BB3F0
L_800BB3F4:;
  {uint32_t ea=c->r[2]+0xFFFF9C40u; c->f[5]=c->ps1[5]=RF32(ea);} // 800BB3F4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB3F8
  {uint32_t ea=c->r[2]+0xFFFF9C3Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800BB3FC
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[0]); // 800BB400
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB404
  {uint32_t ea=c->r[31]+0x00000060u; c->f[6]=c->ps1[6]=RF32(ea);} // 800BB408
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB40C
  c->f[3]=c->ps1[3]=S(std::fma(c->f[4],c->f[0],c->f[3])); // 800BB410
  {uint32_t ea=c->r[2]+0xFFFF9C1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB414
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB418
  fcmp(c,0,c->f[6],c->f[0]); // 800BB41C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[3]);} // 800BB420
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB424
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800BB428
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[2],c->f[0])); // 800BB42C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800BB430
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB434
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800BB438
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[1],c->f[0])); // 800BB43C
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800BB440
  if (!crb(c,1)) { goto L_800BB450; } // 800BB444
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB448
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[0]); // 800BB44C
L_800BB450:;
  {uint32_t ea=c->r[2]+0xFFFF9C3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB450
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB454
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 800BB458
  fcmp(c,0,c->f[1],c->f[0]); // 800BB45C
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[1]);} // 800BB460
  if (!crb(c,0)) { goto L_800BB474; } // 800BB464
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB468
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BB46C
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800BB470
L_800BB474:;
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB474
  {uint32_t ea=c->r[2]+0xFFFF9C1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB478
  fcmp(c,0,c->f[2],c->f[0]); // 800BB47C
  if (!crb(c,1)) { goto L_800BB48C; } // 800BB480
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB484
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800BB488
L_800BB48C:;
  {uint32_t ea=c->r[2]+0xFFFF9C3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB48C
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB490
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800BB494
  fcmp(c,0,c->f[1],c->f[0]); // 800BB498
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[1]);} // 800BB49C
  if (!crb(c,0)) { goto L_800BB4B0; } // 800BB4A0
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB4A4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BB4A8
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800BB4AC
L_800BB4B0:;
  {uint32_t ea=c->r[31]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB4B0
  {uint32_t ea=c->r[2]+0xFFFF9C1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB4B4
  fcmp(c,0,c->f[2],c->f[0]); // 800BB4B8
  if (!crb(c,1)) { goto L_800BB4C8; } // 800BB4BC
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB4C0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800BB4C4
L_800BB4C8:;
  {uint32_t ea=c->r[2]+0xFFFF9C3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB4C8
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB4CC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800BB4D0
  fcmp(c,0,c->f[1],c->f[0]); // 800BB4D4
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[1]);} // 800BB4D8
  if (!crb(c,0)) { goto L_800BB4EC; } // 800BB4DC
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB4E0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BB4E4
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800BB4E8
L_800BB4EC:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800BB4EC
  c->r[4]=c->r[1]+0x00000020u; // 800BB4F0
  c->r[5]=c->r[1]+0x00000014u; // 800BB4F4
  c->lr=0x800BB4FCu; f_80296A70(c); // 800BB4F8
  c->r[3]=c->r[1]+0x00000014u; // 800BB4FC
  c->lr=0x800BB504u; f_80296B0C(c); // 800BB500
  {uint32_t ea=c->r[2]+0xFFFF9BD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB504
  fcmp(c,0,c->f[1],c->f[0]); // 800BB508
  if (!crb(c,0)) { goto L_800BB60C; } // 800BB50C
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800BB510
  cmps(c,0,(int32_t)c->r[0],0); // 800BB514
  if (!crb(c,2)) { goto L_800BB564; } // 800BB518
  c->r[3]=c->r[31]+0x0000002Cu; // 800BB51C
  c->r[4]=c->r[1]+0x00000038u; // 800BB520
  c->lr=0x800BB528u; f_800361A0(c); // 800BB524
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BB528
  c->r[3]=c->r[31]|c->r[31]; // 800BB52C
  {uint32_t ea=c->r[2]+0xFFFF9BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB530
  c->r[4]=0u+0x00000001u; // 800BB534
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BB538
  c->r[5]=0u+0x00000000u; // 800BB53C
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB540
  c->ctr=c->r[12]; // 800BB544
  if (true) { c->lr=0x800BB54Cu; dispatch(c,c->ctr); } // 800BB548
  c->r[3]=0u+0x80620000u; // 800BB54C
  c->r[4]=0u+0x00000039u; // 800BB550
  c->r[3]=c->r[3]+0x00007688u; // 800BB554
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BB558
  c->lr=0x800BB560u; f_80038A08(c); // 800BB55C
  goto L_800BB5A8; // 800BB560
L_800BB564:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800BB564
  c->r[4]=c->r[1]+0x0000002Cu; // 800BB568
  c->lr=0x800BB570u; f_800361A0(c); // 800BB56C
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BB570
  c->r[3]=c->r[31]|c->r[31]; // 800BB574
  {uint32_t ea=c->r[2]+0xFFFF9BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB578
  c->r[4]=0u+0x00000000u; // 800BB57C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BB580
  c->r[5]=0u+0x00000000u; // 800BB584
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB588
  c->ctr=c->r[12]; // 800BB58C
  if (true) { c->lr=0x800BB594u; dispatch(c,c->ctr); } // 800BB590
  c->r[3]=0u+0x80620000u; // 800BB594
  c->r[4]=0u+0x0000003Au; // 800BB598
  c->r[3]=c->r[3]+0x00007688u; // 800BB59C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BB5A0
  c->lr=0x800BB5A8u; f_80038A08(c); // 800BB5A4
L_800BB5A8:;
  c->r[3]=0u+0x80620000u; // 800BB5A8
  c->r[4]=0u+0x00000018u; // 800BB5AC
  c->r[3]=c->r[3]+0x00007688u; // 800BB5B0
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BB5B4
  c->lr=0x800BB5BCu; f_8003560C(c); // 800BB5B8
  cmps(c,0,(int32_t)c->r[3],8); // 800BB5BC
  if (!crb(c,2)) { goto L_800BB5DC; } // 800BB5C0
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BB5C4
  c->r[3]=c->r[31]|c->r[31]; // 800BB5C8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BB5CC
  c->ctr=c->r[12]; // 800BB5D0
  if (true) { c->lr=0x800BB5D8u; dispatch(c,c->ctr); } // 800BB5D4
  goto L_800BB60C; // 800BB5D8
L_800BB5DC:;
  c->r[0]=0u+0x00000064u; // 800BB5DC
  c->r[7]=0u+0x803D0000u; // 800BB5E0
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800BB5E4
  c->r[3]=c->r[31]|c->r[31]; // 800BB5E8
  c->r[4]=c->r[1]+0x00000008u; // 800BB5EC
  {uint32_t ea=c->r[7]+0xFFFFFFA8u; c->r[6]=R32(ea); c->r[7]=ea;} // 800BB5F0
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BB5F4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BB5F8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BB5FC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BB600
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BB604
  c->lr=0x800BB60Cu; f_800B9C0C(c); // 800BB608
L_800BB60C:;
  c->r[3]=c->r[31]|c->r[31]; // 800BB60C
  c->r[4]=0u+0x00000000u; // 800BB610
  c->lr=0x800BB618u; f_801F5244(c); // 800BB614
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BB618
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800BB61C
  c->lr=c->r[0]; // 800BB620
  c->r[1]=c->r[1]+0x00000050u; // 800BB624
  return; // 800BB628
}

// fn_800BB62C
void f_800BB62C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB62C
  c->r[0]=c->lr; // 800BB630
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB634
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BB638
  c->r[31]=c->r[3]|c->r[3]; // 800BB63C
  c->r[4]=R32(c->r[3]+0x00000394u); // 800BB640
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BB644
  c->lr=0x800BB64Cu; f_802501B0(c); // 800BB648
  c->r[3]=c->r[31]|c->r[31]; // 800BB64C
  c->r[4]=0u+0x00000000u; // 800BB650
  c->lr=0x800BB658u; f_801F5244(c); // 800BB654
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB658
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BB65C
  c->lr=c->r[0]; // 800BB660
  c->r[1]=c->r[1]+0x00000010u; // 800BB664
  return; // 800BB668
}

// fn_800BB66C
void f_800BB66C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB66C
  c->r[0]=c->lr; // 800BB670
  c->r[7]=0u+0x803D0000u; // 800BB674
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BB678
  c->r[0]=0u+0x00000000u; // 800BB67C
  c->r[4]=c->r[1]+0x00000008u; // 800BB680
  W16(c->r[3]+0x000003BCu,c->r[0]); // 800BB684
  {uint32_t ea=c->r[7]+0xFFFFFFB4u; c->r[6]=R32(ea); c->r[7]=ea;} // 800BB688
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BB68C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BB690
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BB694
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BB698
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BB69C
  c->lr=0x800BB6A4u; f_800B9C0C(c); // 800BB6A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BB6A4
  c->lr=c->r[0]; // 800BB6A8
  c->r[1]=c->r[1]+0x00000020u; // 800BB6AC
  return; // 800BB6B0
}

// fn_800BB6B4
void f_800BB6B4(Ctx* __restrict c) {
  return; // 800BB6B4
}

// fn_800BB6B8
void f_800BB6B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB6B8
  c->r[0]=c->lr; // 800BB6BC
  cmps(c,0,(int32_t)c->r[3],0); // 800BB6C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB6C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BB6C8
  c->r[31]=c->r[4]|c->r[4]; // 800BB6CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BB6D0
  c->r[30]=c->r[3]|c->r[3]; // 800BB6D4
  if (crb(c,2)) { goto L_800BB6F4; } // 800BB6D8
  c->r[4]=0u+0x00000000u; // 800BB6DC
  c->lr=0x800BB6E4u; f_8026A06C(c); // 800BB6E0
  cmps(c,0,(int32_t)c->r[31],0); // 800BB6E4
  if (!crb(c,1)) { goto L_800BB6F4; } // 800BB6E8
  c->r[3]=c->r[30]|c->r[30]; // 800BB6EC
  c->lr=0x800BB6F4u; f_8026A268(c); // 800BB6F0
L_800BB6F4:;
  c->r[3]=c->r[30]|c->r[30]; // 800BB6F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BB6F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BB6FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB700
  c->lr=c->r[0]; // 800BB704
  c->r[1]=c->r[1]+0x00000010u; // 800BB708
  return; // 800BB70C
}

// fn_800BB710
void f_800BB710(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB710
  c->r[0]=c->lr; // 800BB714
  c->r[4]=0u+0x00000000u; // 800BB718
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BB71C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BB720
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BB724
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BB728
  c->r[29]=c->r[3]|c->r[3]; // 800BB72C
  c->lr=0x800BB734u; f_801F57D0(c); // 800BB730
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800BB734
  c->r[3]=c->r[29]|c->r[29]; // 800BB738
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800BB73C
  c->ctr=c->r[12]; // 800BB740
  if (true) { c->lr=0x800BB748u; dispatch(c,c->ctr); } // 800BB744
  c->r[3]=c->r[29]|c->r[29]; // 800BB748
  c->lr=0x800BB750u; f_801F4B94(c); // 800BB74C
  c->r[3]=0u+0x00000003u; // 800BB750
  c->r[0]=0u+0x0000001Bu; // 800BB754
  W8(c->r[29]+0x0000006Cu,c->r[3]); // 800BB758
  c->r[3]=c->r[29]|c->r[29]; // 800BB75C
  c->r[4]=R32(c->r[29]+0x00000394u); // 800BB760
  W8(c->r[29]+0x0000006Du,c->r[0]); // 800BB764
  c->lr=0x800BB76Cu; f_801F58BC(c); // 800BB768
  c->r[3]=R32(c->r[29]+0x00000394u); // 800BB76C
  c->r[30]=0u+0x00000001u; // 800BB770
  c->r[31]=0u+0x00000000u; // 800BB774
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800BB778
  c->r[3]=R32(c->r[29]+0x00000394u); // 800BB77C
  W8(c->r[3]+0x0000001Du,c->r[31]); // 800BB780
  c->r[3]=R32(c->r[29]+0x00000394u); // 800BB784
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BB788
  c->lr=0x800BB790u; f_802501B0(c); // 800BB78C
  c->r[3]=R32(c->r[29]+0x00000394u); // 800BB790
  c->r[4]=0u+0x803A0000u; // 800BB794
  c->r[4]=c->r[4]+0xFFFFCEF0u; // 800BB798
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BB79C
  c->lr=0x800BB7A4u; f_80256EC4(c); // 800BB7A0
  c->r[4]=R32(c->r[29]+0x00000394u); // 800BB7A4
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800BB7A8
  c->r[3]=c->r[29]|c->r[29]; // 800BB7AC
  c->r[4]=R32(c->r[29]+0x00000394u); // 800BB7B0
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800BB7B4
  W8(c->r[29]+0x0000006Fu,c->r[30]); // 800BB7B8
  c->lr=0x800BB7C0u; f_801F56F4(c); // 800BB7BC
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800BB7C0
  c->r[3]=c->r[29]|c->r[29]; // 800BB7C4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BB7C8
  c->ctr=c->r[12]; // 800BB7CC
  if (true) { c->lr=0x800BB7D4u; dispatch(c,c->ctr); } // 800BB7D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BB7D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BB7D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BB7DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BB7E0
  c->lr=c->r[0]; // 800BB7E4
  c->r[1]=c->r[1]+0x00000020u; // 800BB7E8
  return; // 800BB7EC
}

// fn_800BB7F0
void f_800BB7F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB7F0
  c->r[0]=c->lr; // 800BB7F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB7F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BB7FC
  c->r[31]=c->r[3]|c->r[3]; // 800BB800
  c->lr=0x800BB808u; f_801F4C0C(c); // 800BB804
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BB808
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BB80C
  c->lr=0x800BB814u; f_802501B0(c); // 800BB810
  c->r[3]=c->r[31]|c->r[31]; // 800BB814
  c->r[4]=0u+0x00000000u; // 800BB818
  c->lr=0x800BB820u; f_801F5244(c); // 800BB81C
  c->r[3]=c->r[31]|c->r[31]; // 800BB820
  c->lr=0x800BB828u; f_801F56F4(c); // 800BB824
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BB828
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800BB82C
  cmps(c,0,(int32_t)c->r[0],0); // 800BB830
  if (crb(c,2)) { goto L_800BB890; } // 800BB834
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800BB838
  cmps(c,0,(int32_t)c->r[0],0); // 800BB83C
  if (crb(c,2)) { goto L_800BB890; } // 800BB840
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800BB844
  cmps(c,0,(int32_t)c->r[0],0); // 800BB848
  if (crb(c,2)) { goto L_800BB868; } // 800BB84C
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800BB850
  cmps(c,0,(int32_t)c->r[0],0); // 800BB854
  if (!crb(c,2)) { goto L_800BB868; } // 800BB858
  c->r[4]=c->r[3]+0x000000B0u; // 800BB85C
  c->lr=0x800BB864u; f_80250F18(c); // 800BB860
  goto L_800BB884; // 800BB864
L_800BB868:;
  c->r[3]=c->r[3]+0x0000005Cu; // 800BB868
  c->r[4]=c->r[31]+0x0000002Cu; // 800BB86C
  c->lr=0x800BB874u; f_800361A0(c); // 800BB870
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BB874
  c->r[4]=c->r[31]+0x00000060u; // 800BB878
  c->r[3]=c->r[3]+0x00000068u; // 800BB87C
  c->lr=0x800BB884u; f_800361A0(c); // 800BB880
L_800BB884:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BB884
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BB888
  c->lr=0x800BB890u; f_8025037C(c); // 800BB88C
L_800BB890:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB890
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BB894
  c->lr=c->r[0]; // 800BB898
  c->r[1]=c->r[1]+0x00000010u; // 800BB89C
  return; // 800BB8A0
}

// fn_800BB8A4
void f_800BB8A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB8A4
  c->r[0]=c->lr; // 800BB8A8
  c->r[4]=c->r[3]|c->r[3]; // 800BB8AC
  c->r[3]=0u+0x000000CDu; // 800BB8B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB8B4
  c->r[5]=0u+0x00000000u; // 800BB8B8
  c->r[4]=R32(c->r[4]+0x00000394u); // 800BB8BC
  c->r[4]=c->r[4]+0x0000010Cu; // 800BB8C0
  c->lr=0x800BB8C8u; f_8024EE50(c); // 800BB8C4
  c->r[0]=cntlz(c->r[3]); // 800BB8C8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BB8CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB8D0
  c->lr=c->r[0]; // 800BB8D4
  c->r[1]=c->r[1]+0x00000010u; // 800BB8D8
  return; // 800BB8DC
}

// fn_800BB8E0
void f_800BB8E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB8E0
  c->r[0]=c->lr; // 800BB8E4
  cmps(c,0,(int32_t)c->r[3],0); // 800BB8E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB8EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BB8F0
  c->r[31]=c->r[4]|c->r[4]; // 800BB8F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BB8F8
  c->r[30]=c->r[3]|c->r[3]; // 800BB8FC
  if (crb(c,2)) { goto L_800BB91C; } // 800BB900
  c->r[4]=0u+0x00000000u; // 800BB904
  c->lr=0x800BB90Cu; f_8026A06C(c); // 800BB908
  cmps(c,0,(int32_t)c->r[31],0); // 800BB90C
  if (!crb(c,1)) { goto L_800BB91C; } // 800BB910
  c->r[3]=c->r[30]|c->r[30]; // 800BB914
  c->lr=0x800BB91Cu; f_8026A268(c); // 800BB918
L_800BB91C:;
  c->r[3]=c->r[30]|c->r[30]; // 800BB91C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BB920
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BB924
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB928
  c->lr=c->r[0]; // 800BB92C
  c->r[1]=c->r[1]+0x00000010u; // 800BB930
  return; // 800BB934
}

// fn_800BB938
void f_800BB938(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB938
  c->r[0]=c->lr; // 800BB93C
  c->r[4]=0u+0x00000000u; // 800BB940
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BB944
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BB948
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BB94C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BB950
  c->r[29]=c->r[3]|c->r[3]; // 800BB954
  c->lr=0x800BB95Cu; f_801F57D0(c); // 800BB958
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800BB95C
  c->r[3]=c->r[29]|c->r[29]; // 800BB960
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800BB964
  c->ctr=c->r[12]; // 800BB968
  if (true) { c->lr=0x800BB970u; dispatch(c,c->ctr); } // 800BB96C
  c->r[3]=c->r[29]|c->r[29]; // 800BB970
  c->lr=0x800BB978u; f_801F4B94(c); // 800BB974
  c->r[3]=0u+0x00000003u; // 800BB978
  c->r[0]=0u+0x0000001Cu; // 800BB97C
  W8(c->r[29]+0x0000006Cu,c->r[3]); // 800BB980
  c->r[3]=c->r[29]|c->r[29]; // 800BB984
  c->r[4]=R32(c->r[29]+0x00000394u); // 800BB988
  W8(c->r[29]+0x0000006Du,c->r[0]); // 800BB98C
  c->lr=0x800BB994u; f_801F58BC(c); // 800BB990
  c->r[3]=R32(c->r[29]+0x00000394u); // 800BB994
  c->r[30]=0u+0x00000001u; // 800BB998
  c->r[31]=0u+0x00000000u; // 800BB99C
  W8(c->r[3]+0x0000001Cu,c->r[30]); // 800BB9A0
  c->r[3]=R32(c->r[29]+0x00000394u); // 800BB9A4
  W8(c->r[3]+0x0000001Du,c->r[31]); // 800BB9A8
  c->r[3]=R32(c->r[29]+0x00000394u); // 800BB9AC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BB9B0
  c->lr=0x800BB9B8u; f_802501B0(c); // 800BB9B4
  c->r[3]=R32(c->r[29]+0x00000394u); // 800BB9B8
  c->r[4]=0u+0x803A0000u; // 800BB9BC
  c->r[4]=c->r[4]+0xFFFFCF0Cu; // 800BB9C0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BB9C4
  c->lr=0x800BB9CCu; f_80256EC4(c); // 800BB9C8
  c->r[4]=R32(c->r[29]+0x00000394u); // 800BB9CC
  {uint32_t ea=c->r[2]+0xFFFF9C58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB9D0
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800BB9D4
  c->r[3]=c->r[29]|c->r[29]; // 800BB9D8
  c->r[4]=R32(c->r[29]+0x00000394u); // 800BB9DC
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800BB9E0
  W8(c->r[29]+0x0000006Fu,c->r[30]); // 800BB9E4
  c->r[4]=R32(c->r[29]+0x00000394u); // 800BB9E8
  {uint32_t ea=c->r[4]+0x00000074u; WF32(ea,c->f[0]);} // 800BB9EC
  c->r[4]=R32(c->r[29]+0x00000394u); // 800BB9F0
  {uint32_t ea=c->r[4]+0x00000078u; WF32(ea,c->f[0]);} // 800BB9F4
  c->r[4]=R32(c->r[29]+0x00000394u); // 800BB9F8
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 800BB9FC
  c->lr=0x800BBA04u; f_801F56F4(c); // 800BBA00
  c->r[12]=R32(c->r[29]+0x000000B0u); // 800BBA04
  c->r[3]=c->r[29]|c->r[29]; // 800BBA08
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BBA0C
  c->ctr=c->r[12]; // 800BBA10
  if (true) { c->lr=0x800BBA18u; dispatch(c,c->ctr); } // 800BBA14
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BBA18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BBA1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BBA20
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BBA24
  c->lr=c->r[0]; // 800BBA28
  c->r[1]=c->r[1]+0x00000020u; // 800BBA2C
  return; // 800BBA30
}

// fn_800BBA34
void f_800BBA34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBA34
  c->r[0]=c->lr; // 800BBA38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBA3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BBA40
  c->r[31]=c->r[3]|c->r[3]; // 800BBA44
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800BBA48
  c->r[12]=R32(c->r[12]+0x00000068u); // 800BBA4C
  c->ctr=c->r[12]; // 800BBA50
  if (true) { c->lr=0x800BBA58u; dispatch(c,c->ctr); } // 800BBA54
  c->r[3]=c->r[31]|c->r[31]; // 800BBA58
  c->lr=0x800BBA60u; f_801F4C0C(c); // 800BBA5C
  {uint32_t ea=c->r[2]+0xFFFF9C58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBA60
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBA64
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 800BBA68
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBA6C
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800BBA70
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBA74
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800BBA78
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBA7C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BBA80
  c->lr=0x800BBA88u; f_802501B0(c); // 800BBA84
  c->r[3]=c->r[31]|c->r[31]; // 800BBA88
  c->r[4]=0u+0x00000000u; // 800BBA8C
  c->lr=0x800BBA94u; f_801F5244(c); // 800BBA90
  c->r[3]=c->r[31]|c->r[31]; // 800BBA94
  c->lr=0x800BBA9Cu; f_801F56F4(c); // 800BBA98
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBA9C
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800BBAA0
  cmps(c,0,(int32_t)c->r[0],0); // 800BBAA4
  if (crb(c,2)) { goto L_800BBB04; } // 800BBAA8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800BBAAC
  cmps(c,0,(int32_t)c->r[0],0); // 800BBAB0
  if (crb(c,2)) { goto L_800BBB04; } // 800BBAB4
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 800BBAB8
  cmps(c,0,(int32_t)c->r[0],0); // 800BBABC
  if (crb(c,2)) { goto L_800BBADC; } // 800BBAC0
  c->r[0]=R8(c->r[3]+0x0000014Du); // 800BBAC4
  cmps(c,0,(int32_t)c->r[0],0); // 800BBAC8
  if (!crb(c,2)) { goto L_800BBADC; } // 800BBACC
  c->r[4]=c->r[3]+0x000000B0u; // 800BBAD0
  c->lr=0x800BBAD8u; f_80250F18(c); // 800BBAD4
  goto L_800BBAF8; // 800BBAD8
L_800BBADC:;
  c->r[3]=c->r[3]+0x0000005Cu; // 800BBADC
  c->r[4]=c->r[31]+0x0000002Cu; // 800BBAE0
  c->lr=0x800BBAE8u; f_800361A0(c); // 800BBAE4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBAE8
  c->r[4]=c->r[31]+0x00000060u; // 800BBAEC
  c->r[3]=c->r[3]+0x00000068u; // 800BBAF0
  c->lr=0x800BBAF8u; f_800361A0(c); // 800BBAF4
L_800BBAF8:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBAF8
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BBAFC
  c->lr=0x800BBB04u; f_8025037C(c); // 800BBB00
L_800BBB04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BBB04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BBB08
  c->lr=c->r[0]; // 800BBB0C
  c->r[1]=c->r[1]+0x00000010u; // 800BBB10
  return; // 800BBB14
}

// fn_800BBB18
void f_800BBB18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBB18
  c->r[0]=c->lr; // 800BBB1C
  c->r[4]=c->r[3]|c->r[3]; // 800BBB20
  c->r[3]=0u+0x000004EEu; // 800BBB24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBB28
  c->r[5]=0u+0x00000000u; // 800BBB2C
  c->r[4]=R32(c->r[4]+0x00000394u); // 800BBB30
  c->r[4]=c->r[4]+0x0000010Cu; // 800BBB34
  c->lr=0x800BBB3Cu; f_8024EE50(c); // 800BBB38
  c->r[0]=cntlz(c->r[3]); // 800BBB3C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BBB40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BBB44
  c->lr=c->r[0]; // 800BBB48
  c->r[1]=c->r[1]+0x00000010u; // 800BBB4C
  return; // 800BBB50
}

// fn_800BBB54
void f_800BBB54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBB54
  c->r[0]=c->lr; // 800BBB58
  c->r[5]=0u+0x805D0000u; // 800BBB5C
  {uint32_t ea=c->r[2]+0xFFFF9C5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBB60
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BBB64
  c->r[5]=c->r[5]+0x00003F6Cu; // 800BBB68
  c->r[7]=0u+0x803D0000u; // 800BBB6C
  c->r[4]=c->r[1]+0x00000008u; // 800BBB70
  {uint32_t ea=c->r[3]+0x000003C8u; c->f[8]=c->ps1[8]=RF32(ea);} // 800BBB74
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBB78
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[8]);} // 800BBB7C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BBB80
  {uint32_t ea=c->r[5]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BBB84
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BBB88
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 800BBB8C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBB90
  {uint32_t ea=c->r[5]+0x00000034u; c->f[5]=c->ps1[5]=RF32(ea);} // 800BBB94
  c->f[7]=c->ps1[7]=S(c->f[3]-c->f[1]); // 800BBB98
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBB9C
  c->f[6]=c->ps1[6]=S(c->f[0]+c->f[2]); // 800BBBA0
  {uint32_t ea=c->r[2]+0xFFFF9C6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBBA4
  c->f[3]=c->ps1[3]=S(c->f[7]/c->f[8]); // 800BBBA8
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 800BBBAC
  {uint32_t ea=c->r[2]+0xFFFF9C60u; c->f[2]=RF64(ea);} // 800BBBB0
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 800BBBB4
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[1]);} // 800BBBB8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[7]);} // 800BBBBC
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[4]); // 800BBBC0
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[3]);} // 800BBBC4
  c->f[1]=c->ps1[1]=S(c->f[6]/c->f[8]); // 800BBBC8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[6]);} // 800BBBCC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BBBD0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[8]); // 800BBBD4
  c->f[1]=c->f[2]+c->f[1]; // 800BBBD8
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 800BBBDC
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800BBBE0
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 800BBBE4
  {uint32_t ea=c->r[7]+0x00000370u; c->r[6]=R32(ea); c->r[7]=ea;} // 800BBBE8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BBBEC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BBBF0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BBBF4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BBBF8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BBBFC
  c->lr=0x800BBC04u; f_800BBC14(c); // 800BBC00
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BBC04
  c->lr=c->r[0]; // 800BBC08
  c->r[1]=c->r[1]+0x00000020u; // 800BBC0C
  return; // 800BBC10
}

// fn_800BBC14
void f_800BBC14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBC14
  c->r[0]=c->lr; // 800BBC18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBC1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BBC20
  c->r[31]=c->r[4]|c->r[4]; // 800BBC24
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BBC28
  c->r[30]=c->r[3]|c->r[3]; // 800BBC2C
  c->r[3]=c->r[31]|c->r[31]; // 800BBC30
  c->lr=0x800BBC38u; f_802B9FDC(c); // 800BBC34
  cmps(c,0,(int32_t)c->r[3],0); // 800BBC38
  if (crb(c,2)) { goto L_800BBC58; } // 800BBC3C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800BBC40
  c->r[0]=R32(c->r[31]+0x00000004u); // 800BBC44
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800BBC48
  W32(c->r[30]+0x00000020u,c->r[0]); // 800BBC4C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800BBC50
  W32(c->r[30]+0x00000024u,c->r[0]); // 800BBC54
L_800BBC58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BBC58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BBC5C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BBC60
  c->lr=c->r[0]; // 800BBC64
  c->r[1]=c->r[1]+0x00000010u; // 800BBC68
  return; // 800BBC6C
}

// fn_800BBC70
void f_800BBC70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBC70
  c->r[0]=c->lr; // 800BBC74
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BBC78
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800BBC7C
  W32(c->r[1]+0x00000048u,c->r[30]); // 800BBC80
  c->r[30]=c->r[3]|c->r[3]; // 800BBC84
  c->lr=0x800BBC8Cu; f_8024E040(c); // 800BBC88
  {uint32_t ea=c->r[30]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BBC8C
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBC90
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800BBC94
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 800BBC98
  c->lr=0x800BBCA0u; f_8024E040(c); // 800BBC9C
  {uint32_t ea=c->r[30]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BBCA0
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBCA4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800BBCA8
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BBCAC
  c->lr=0x800BBCB4u; f_8024E040(c); // 800BBCB0
  {uint32_t ea=c->r[30]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BBCB4
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBCB8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800BBCBC
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800BBCC0
  c->lr=0x800BBCC8u; f_8024E040(c); // 800BBCC4
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BBCC8
  {uint32_t ea=c->r[30]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBCCC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800BBCD0
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800BBCD4
  c->lr=0x800BBCDCu; f_8024E040(c); // 800BBCD8
  {uint32_t ea=c->r[30]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BBCDC
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBCE0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800BBCE4
  fcmp(c,0,c->f[1],c->f[0]); // 800BBCE8
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 800BBCEC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BBCF0
  if (!crb(c,2)) { goto L_800BBDB0; } // 800BBCF4
  c->r[4]=0u+0x803A0000u; // 800BBCF8
  c->r[31]=0u+0x80550000u; // 800BBCFC
  c->r[4]=c->r[4]+0xFFFFCF0Cu; // 800BBD00
  c->r[5]=0u+0x00000000u; // 800BBD04
  c->r[3]=c->r[31]+0xFFFFC848u; // 800BBD08
  c->r[6]=0u+0x00000000u; // 800BBD0C
  c->r[4]=c->r[4]+0x00000009u; // 800BBD10
  c->lr=0x800BBD18u; f_8018D3E4(c); // 800BBD14
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800BBD18
  c->r[5]=0u+0x803A0000u; // 800BBD1C
  {uint32_t ea=c->r[5]+0xFFFFCF00u; c->r[3]=R32(ea); c->r[5]=ea;} // 800BBD20
  c->r[8]=0u+0x00000000u; // 800BBD24
  cmpu(c,0,c->r[4],0x000000FFu); // 800BBD28
  W32(c->r[1]+0x00000038u,c->r[8]); // 800BBD2C
  c->r[6]=R32(c->r[5]+0x00000004u); // 800BBD30
  c->r[0]=R32(c->r[5]+0x00000008u); // 800BBD34
  W32(c->r[1]+0x0000003Cu,c->r[8]); // 800BBD38
  W32(c->r[1]+0x00000040u,c->r[8]); // 800BBD3C
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800BBD40
  W32(c->r[1]+0x00000030u,c->r[6]); // 800BBD44
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BBD48
  if (crb(c,2)) { goto L_800BBD94; } // 800BBD4C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BBD50
  c->r[3]=c->r[31]+0xFFFFC848u; // 800BBD54
  c->r[5]=c->r[1]+0x00000020u; // 800BBD58
  c->r[7]=c->r[1]+0x00000008u; // 800BBD5C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800BBD60
  c->r[6]=c->r[1]+0x00000014u; // 800BBD64
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BBD68
  W32(c->r[1]+0x00000014u,c->r[8]); // 800BBD6C
  W32(c->r[1]+0x00000018u,c->r[8]); // 800BBD70
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800BBD74
  c->r[8]=R32(c->r[30]+0x0000002Cu); // 800BBD78
  c->r[0]=R32(c->r[30]+0x00000030u); // 800BBD7C
  W32(c->r[1]+0x00000020u,c->r[8]); // 800BBD80
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BBD84
  c->r[0]=R32(c->r[30]+0x00000034u); // 800BBD88
  W32(c->r[1]+0x00000028u,c->r[0]); // 800BBD8C
  c->lr=0x800BBD94u; f_8018DD04(c); // 800BBD90
L_800BBD94:;
  c->r[0]=0u+0x00000000u; // 800BBD94
  c->r[3]=c->r[30]|c->r[30]; // 800BBD98
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800BBD9C
  c->r[12]=R32(c->r[30]+0x000000B0u); // 800BBDA0
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BBDA4
  c->ctr=c->r[12]; // 800BBDA8
  if (true) { c->lr=0x800BBDB0u; dispatch(c,c->ctr); } // 800BBDAC
L_800BBDB0:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BBDB0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800BBDB4
  c->r[30]=R32(c->r[1]+0x00000048u); // 800BBDB8
  c->lr=c->r[0]; // 800BBDBC
  c->r[1]=c->r[1]+0x00000050u; // 800BBDC0
  return; // 800BBDC4
}

// fn_800BBDC8
void f_800BBDC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBDC8
  c->r[0]=c->lr; // 800BBDCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BBDD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BBDD4
  c->r[31]=c->r[3]|c->r[3]; // 800BBDD8
  c->lr=0x800BBDE0u; f_801F4F28(c); // 800BBDDC
  c->r[0]=R32(c->r[31]+0x000003C0u); // 800BBDE0
  cmps(c,0,(int32_t)c->r[0],100); // 800BBDE4
  if (crb(c,2)) { goto L_800BBDF0; } // 800BBDE8
  goto L_800BBE1C; // 800BBDEC
L_800BBDF0:;
  W16(c->r[31]+0x000003BCu,c->r[0]); // 800BBDF0
  c->r[7]=0u+0x803D0000u; // 800BBDF4
  c->r[3]=c->r[31]|c->r[31]; // 800BBDF8
  c->r[4]=c->r[1]+0x00000008u; // 800BBDFC
  {uint32_t ea=c->r[7]+0x0000037Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800BBE00
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BBE04
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BBE08
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BBE0C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BBE10
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BBE14
  c->lr=0x800BBE1Cu; f_800BBC14(c); // 800BBE18
L_800BBE1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BBE1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BBE20
  c->lr=c->r[0]; // 800BBE24
  c->r[1]=c->r[1]+0x00000020u; // 800BBE28
  return; // 800BBE2C
}

// fn_800BBE30
void f_800BBE30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBE30
  c->r[0]=c->lr; // 800BBE34
  cmps(c,0,(int32_t)c->r[3],0); // 800BBE38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBE3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BBE40
  c->r[31]=c->r[4]|c->r[4]; // 800BBE44
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BBE48
  c->r[30]=c->r[3]|c->r[3]; // 800BBE4C
  if (crb(c,2)) { goto L_800BBE6C; } // 800BBE50
  c->r[4]=0u+0x00000000u; // 800BBE54
  c->lr=0x800BBE5Cu; f_8026A06C(c); // 800BBE58
  cmps(c,0,(int32_t)c->r[31],0); // 800BBE5C
  if (!crb(c,1)) { goto L_800BBE6C; } // 800BBE60
  c->r[3]=c->r[30]|c->r[30]; // 800BBE64
  c->lr=0x800BBE6Cu; f_8026A268(c); // 800BBE68
L_800BBE6C:;
  c->r[3]=c->r[30]|c->r[30]; // 800BBE6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BBE70
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BBE74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BBE78
  c->lr=c->r[0]; // 800BBE7C
  c->r[1]=c->r[1]+0x00000010u; // 800BBE80
  return; // 800BBE84
}

// fn_800BBE88
void f_800BBE88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBE88
  c->r[0]=c->lr; // 800BBE8C
  c->r[4]=0u+0x00000000u; // 800BBE90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBE94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BBE98
  c->r[31]=c->r[3]|c->r[3]; // 800BBE9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BBEA0
  c->lr=0x800BBEA8u; f_801F57D0(c); // 800BBEA4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BBEA8
  c->r[3]=c->r[31]|c->r[31]; // 800BBEAC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800BBEB0
  c->ctr=c->r[12]; // 800BBEB4
  if (true) { c->lr=0x800BBEBCu; dispatch(c,c->ctr); } // 800BBEB8
  c->r[3]=c->r[31]|c->r[31]; // 800BBEBC
  c->lr=0x800BBEC4u; f_801F4B94(c); // 800BBEC0
  c->r[3]=0u+0x00000003u; // 800BBEC4
  c->r[0]=0u+0x0000001Eu; // 800BBEC8
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 800BBECC
  c->r[3]=c->r[31]|c->r[31]; // 800BBED0
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BBED4
  W8(c->r[31]+0x0000006Du,c->r[0]); // 800BBED8
  c->lr=0x800BBEE0u; f_801F58BC(c); // 800BBEDC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBEE0
  c->r[0]=0u+0x00000001u; // 800BBEE4
  c->r[30]=0u+0x803A0000u; // 800BBEE8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800BBEEC
  c->r[4]=c->r[30]+0xFFFFCF20u; // 800BBEF0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBEF4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BBEF8
  c->lr=0x800BBF00u; f_80256EC4(c); // 800BBEFC
  c->r[6]=R32(c->r[31]+0x00000394u); // 800BBF00
  c->r[5]=0u+0x805D0000u; // 800BBF04
  c->r[4]=c->r[31]+0x0000002Cu; // 800BBF08
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800BBF0C
  c->r[3]=c->r[5]+0x000078B0u; // 800BBF10
  c->lr=0x800BBF18u; f_802351CC(c); // 800BBF14
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BBF18
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800BBF1C
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800BBF20
  cmps(c,0,(int32_t)c->r[0],0); // 800BBF24
  if (!crb(c,2)) { goto L_800BBF7C; } // 800BBF28
  c->r[3]=c->r[31]|c->r[31]; // 800BBF2C
  c->r[4]=0u+0x00000003u; // 800BBF30
  c->lr=0x800BBF38u; f_801F5EB4(c); // 800BBF34
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBF38
  c->r[30]=c->r[30]+0xFFFFCF20u; // 800BBF3C
  c->r[4]=c->r[30]+0x00000009u; // 800BBF40
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BBF44
  c->lr=0x800BBF4Cu; f_80256EC4(c); // 800BBF48
  W8(c->r[31]+0x00000074u,c->r[3]); // 800BBF4C
  c->r[4]=c->r[30]+0x00000016u; // 800BBF50
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBF54
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BBF58
  c->lr=0x800BBF60u; f_80256EC4(c); // 800BBF5C
  W8(c->r[31]+0x00000075u,c->r[3]); // 800BBF60
  c->r[4]=c->r[30]+0x00000020u; // 800BBF64
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBF68
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BBF6C
  c->lr=0x800BBF74u; f_80256EC4(c); // 800BBF70
  W8(c->r[31]+0x00000076u,c->r[3]); // 800BBF74
  goto L_800BBFD0; // 800BBF78
L_800BBF7C:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBF7C
  c->r[30]=c->r[30]+0xFFFFCF20u; // 800BBF80
  c->r[4]=c->r[30]+0x0000002Au; // 800BBF84
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BBF88
  c->lr=0x800BBF90u; f_80256EC4(c); // 800BBF8C
  W8(c->r[31]+0x00000074u,c->r[3]); // 800BBF90
  c->r[4]=c->r[30]+0x00000020u; // 800BBF94
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBF98
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BBF9C
  c->lr=0x800BBFA4u; f_80256EC4(c); // 800BBFA0
  W8(c->r[31]+0x00000075u,c->r[3]); // 800BBFA4
  c->r[4]=c->r[30]+0x00000039u; // 800BBFA8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBFAC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BBFB0
  c->lr=0x800BBFB8u; f_80256EC4(c); // 800BBFB4
  W8(c->r[31]+0x00000076u,c->r[3]); // 800BBFB8
  c->r[4]=c->r[30]+0x00000043u; // 800BBFBC
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BBFC0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BBFC4
  c->lr=0x800BBFCCu; f_80256EC4(c); // 800BBFC8
  W8(c->r[31]+0x00000077u,c->r[3]); // 800BBFCC
L_800BBFD0:;
  c->r[0]=0u+0x00000001u; // 800BBFD0
  {uint32_t ea=c->r[2]+0xFFFF9C78u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBFD4
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 800BBFD8
  c->r[3]=c->r[31]|c->r[31]; // 800BBFDC
  c->f[2]=c->f[1]; // 800BBFE0
  c->r[4]=0u+0x00000000u; // 800BBFE4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BBFE8
  c->r[5]=0u+0x00000001u; // 800BBFEC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BBFF0
  c->ctr=c->r[12]; // 800BBFF4
  if (true) { c->lr=0x800BBFFCu; dispatch(c,c->ctr); } // 800BBFF8
  {uint32_t ea=c->r[2]+0xFFFF9C78u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBFFC
  {uint32_t ea=c->r[2]+0xFFFF9C7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC000
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[1]);} // 800BC004
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[1]);} // 800BC008
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800BC00C
  c->lr=0x800BC014u; f_8024E040(c); // 800BC010
  {uint32_t ea=c->r[2]+0xFFFF9C80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC014
  c->r[4]=0u+0x00000000u; // 800BC018
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BC01C
  c->r[3]=c->r[31]|c->r[31]; // 800BC020
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 800BC024
  {uint32_t ea=c->r[2]+0xFFFF9C7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC028
  {uint32_t ea=c->r[2]+0xFFFF9C84u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC02C
  c->r[0]=c->r[0]|0x00004000u; // 800BC030
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[1]);} // 800BC034
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[2]);} // 800BC038
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[0]);} // 800BC03C
  W8(c->r[31]+0x00000090u,c->r[4]); // 800BC040
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BC044
  c->lr=0x800BC04Cu; f_801F56F4(c); // 800BC048
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BC04C
  c->r[3]=c->r[31]|c->r[31]; // 800BC050
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BC054
  c->ctr=c->r[12]; // 800BC058
  if (true) { c->lr=0x800BC060u; dispatch(c,c->ctr); } // 800BC05C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC060
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BC064
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BC068
  c->lr=c->r[0]; // 800BC06C
  c->r[1]=c->r[1]+0x00000010u; // 800BC070
  return; // 800BC074
}

// fn_800BC078
void f_800BC078(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC078
  c->r[0]=c->lr; // 800BC07C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800BC080
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800BC084
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800BC088
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 800BC08C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 800BC090
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800BC094
  c->r[31]=c->r[3]|c->r[3]; // 800BC098
  W32(c->r[1]+0x00000088u,c->r[30]); // 800BC09C
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800BC0A0
  c->r[12]=R32(c->r[12]+0x00000068u); // 800BC0A4
  c->ctr=c->r[12]; // 800BC0A8
  if (true) { c->lr=0x800BC0B0u; dispatch(c,c->ctr); } // 800BC0AC
  c->r[3]=c->r[31]|c->r[31]; // 800BC0B0
  c->lr=0x800BC0B8u; f_801F4C0C(c); // 800BC0B4
  {uint32_t ea=c->r[31]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC0B8
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC0BC
  {uint32_t ea=c->r[2]+0xFFFF9C88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC0C0
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 800BC0C4
  fcmp(c,0,c->f[2],c->f[1]); // 800BC0C8
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[2]);} // 800BC0CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BC0D0
  if (!crb(c,2)) { goto L_800BC0E4; } // 800BC0D4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 800BC0D8
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800BC0DC
  goto L_800BC0F8; // 800BC0E0
L_800BC0E4:;
  {uint32_t ea=c->r[2]+0xFFFF9C78u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC0E4
  fcmp(c,0,c->f[2],c->f[0]); // 800BC0E8
  if (!crb(c,0)) { goto L_800BC0F8; } // 800BC0EC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 800BC0F0
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800BC0F4
L_800BC0F8:;
  {uint32_t ea=c->r[31]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC0F8
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC0FC
  {uint32_t ea=c->r[2]+0xFFFF9C88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC100
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800BC104
  fcmp(c,0,c->f[2],c->f[1]); // 800BC108
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[2]);} // 800BC10C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BC110
  if (!crb(c,2)) { goto L_800BC124; } // 800BC114
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 800BC118
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800BC11C
  goto L_800BC138; // 800BC120
L_800BC124:;
  {uint32_t ea=c->r[2]+0xFFFF9C78u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC124
  fcmp(c,0,c->f[2],c->f[0]); // 800BC128
  if (!crb(c,0)) { goto L_800BC138; } // 800BC12C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 800BC130
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800BC134
L_800BC138:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BC138
  {uint32_t ea=c->r[31]+0x0000008Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC13C
  {uint32_t ea=c->r[31]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC140
  {uint32_t ea=c->r[2]+0xFFFF9C78u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC144
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[3],c->f[2],-c->f[1])); // 800BC148
  fcmp(c,0,c->f[3],c->f[0]); // 800BC14C
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[1]);} // 800BC150
  if (!crb(c,1)) { goto L_800BC174; } // 800BC154
  fcmp(c,0,c->f[1],c->f[0]); // 800BC158
  if (!crb(c,0)) { goto L_800BC18C; } // 800BC15C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BC160
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC164
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BC168
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800BC16C
  goto L_800BC18C; // 800BC170
L_800BC174:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BC174
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC178
  fcmp(c,0,c->f[1],c->f[0]); // 800BC17C
  if (!crb(c,1)) { goto L_800BC18C; } // 800BC180
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800BC184
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800BC188
L_800BC18C:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BC18C
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 800BC190
  if (crb(c,2)) { goto L_800BC238; } // 800BC194
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC198
  {uint32_t ea=c->r[2]+0xFFFF9C78u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC19C
  fcmp(c,0,c->f[2],c->f[0]); // 800BC1A0
  if (!crb(c,0)) { goto L_800BC1D4; } // 800BC1A4
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC1A8
  {uint32_t ea=c->r[2]+0xFFFF9C8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC1AC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800BC1B0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800BC1B4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BC1B8
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[0]);} // 800BC1BC
  c->r[4]=R32(c->r[1]+0x0000007Cu); // 800BC1C0
  cmps(c,0,(int32_t)c->r[4],0); // 800BC1C4
  if (!crb(c,0)) { goto L_800BC1F4; } // 800BC1C8
  c->r[4]=c->r[4]+0x00000168u; // 800BC1CC
  goto L_800BC1F4; // 800BC1D0
L_800BC1D4:;
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC1D4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800BC1D8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BC1DC
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[0]);} // 800BC1E0
  c->r[4]=R32(c->r[1]+0x0000007Cu); // 800BC1E4
  cmps(c,0,(int32_t)c->r[4],0); // 800BC1E8
  if (crb(c,0)) { goto L_800BC1F4; } // 800BC1EC
  c->r[4]=c->r[4]+0xFFFFFE98u; // 800BC1F0
L_800BC1F4:;
  c->r[3]=0u+0x88890000u; // 800BC1F4
  c->r[0]=c->r[3]+0xFFFF8889u; // 800BC1F8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 800BC1FC
  c->r[0]=c->r[0]+c->r[4]; // 800BC200
  c->r[0]=sraw(c,c->r[0],4); // 800BC204
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800BC208
  c->r[0]=c->r[0]+c->r[3]; // 800BC20C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)30); // 800BC210
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 800BC214
  if (!crb(c,2)) { goto L_800BC22C; } // 800BC218
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BC21C
  c->r[0]=c->r[0]|0x00002000u; // 800BC220
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BC224
  goto L_800BC238; // 800BC228
L_800BC22C:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BC22C
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800BC230
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BC234
L_800BC238:;
  c->r[0]=R8(c->r[31]+0x00000090u); // 800BC238
  cmps(c,0,(int32_t)c->r[0],0); // 800BC23C
  if (crb(c,2)) { goto L_800BC3F4; } // 800BC240
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC244
  c->lr=0x800BC24Cu; f_8003EA88(c); // 800BC248
  c->f[30]=c->f[1]; // 800BC24C
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC250
  c->lr=0x800BC258u; f_8002C1B0(c); // 800BC254
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC258
  c->f[8]=c->ps1[8]=S(c->f[1]/c->f[30]); // 800BC25C
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC260
  c->r[30]=0u+0x43300000u; // 800BC264
  {uint32_t ea=c->r[2]+0xFFFF9C7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC268
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[5]=c->ps1[5]=RF32(ea);} // 800BC26C
  W32(c->r[1]+0x00000080u,c->r[30]); // 800BC270
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[0]); // 800BC274
  {uint32_t ea=c->r[2]+0xFFFF9C78u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC278
  c->f[7]=c->ps1[7]=S(c->f[1]+c->f[8]); // 800BC27C
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC280
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[3]=RF64(ea);} // 800BC284
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[5]); // 800BC288
  {uint32_t ea=c->r[2]+0xFFFF9C90u; c->f[6]=c->ps1[6]=RF32(ea);} // 800BC28C
  {uint32_t ea=c->r[2]+0xFFFF9C94u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC290
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800BC294
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 800BC298
  fcmp(c,0,c->f[1],c->f[0]); // 800BC29C
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[4]);} // 800BC2A0
  c->f[30]=c->ps1[30]=S(c->f[6]*c->f[7]); // 800BC2A4
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800BC2A8
  c->r[0]=c->r[0]^0x80000000u; // 800BC2AC
  W32(c->r[1]+0x00000084u,c->r[0]); // 800BC2B0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=RF64(ea);} // 800BC2B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800BC2B8
  c->f[31]=c->ps1[31]=S(std::fma(c->f[5],c->f[0],c->f[2])); // 800BC2BC
  if (!crb(c,0)) { goto L_800BC328; } // 800BC2C0
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC2C4
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 800BC2C8
  c->f[1]=c->f[30]; // 800BC2CC
  c->lr=0x800BC2D4u; f_8002C1B0(c); // 800BC2D0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800BC2D4
  c->r[3]=0u+0x88890000u; // 800BC2D8
  c->r[3]=c->r[3]+0xFFFF8889u; // 800BC2DC
  W32(c->r[1]+0x00000078u,c->r[30]); // 800BC2E0
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[3]=RF64(ea);} // 800BC2E4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[0]);} // 800BC2E8
  {uint32_t ea=c->r[2]+0xFFFF9C7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC2EC
  c->r[0]=R32(c->r[1]+0x00000084u); // 800BC2F0
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC2F4
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 800BC2F8
  c->r[0]=c->r[3]+c->r[0]; // 800BC2FC
  c->r[0]=sraw(c,c->r[0],4); // 800BC300
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800BC304
  c->r[0]=c->r[0]+c->r[3]; // 800BC308
  c->r[0]=c->r[0]^0x80000000u; // 800BC30C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800BC310
  {uint32_t ea=c->r[1]+0x00000078u; c->f[2]=RF64(ea);} // 800BC314
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800BC318
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800BC31C
  c->f[31]=c->ps1[31]=S(-std::fma(c->f[0],c->f[1],-c->f[31])); // 800BC320
  goto L_800BC384; // 800BC324
L_800BC328:;
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC328
  c->f[0]=-c->f[0]; // 800BC32C
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 800BC330
  c->f[1]=c->f[30]; // 800BC334
  c->lr=0x800BC33Cu; f_8002C1B0(c); // 800BC338
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800BC33C
  c->r[3]=0u+0x88890000u; // 800BC340
  c->r[3]=c->r[3]+0xFFFF8889u; // 800BC344
  W32(c->r[1]+0x00000078u,c->r[30]); // 800BC348
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[2]=RF64(ea);} // 800BC34C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[0]);} // 800BC350
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC354
  c->r[0]=R32(c->r[1]+0x00000084u); // 800BC358
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 800BC35C
  c->r[0]=c->r[3]+c->r[0]; // 800BC360
  c->r[0]=sraw(c,c->r[0],4); // 800BC364
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800BC368
  c->r[0]=c->r[0]+c->r[3]; // 800BC36C
  c->r[0]=c->r[0]^0x80000000u; // 800BC370
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800BC374
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=RF64(ea);} // 800BC378
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800BC37C
  c->f[31]=c->ps1[31]=S(std::fma(c->f[0],c->f[1],c->f[31])); // 800BC380
L_800BC384:;
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC384
  {uint32_t ea=c->r[2]+0xFFFF9C88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC388
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[30]); // 800BC38C
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 800BC390
  c->f[30]=c->ps1[30]=S(c->f[1]+c->f[0]); // 800BC394
  c->f[1]=c->ps1[1]=S(c->f[30]-c->f[31]); // 800BC398
  c->lr=0x800BC3A0u; f_800BC610(c); // 800BC39C
  {uint32_t ea=c->r[2]+0xFFFF9C7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC3A0
  fcmp(c,0,c->f[1],c->f[0]); // 800BC3A4
  if (!crb(c,0)) { goto L_800BC3F4; } // 800BC3A8
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[30]); // 800BC3AC
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC3B0
  c->r[3]=0u+0x00000066u; // 800BC3B4
  c->r[0]=0u+0x00000000u; // 800BC3B8
  W16(c->r[31]+0x000003BCu,c->r[3]); // 800BC3BC
  c->r[7]=0u+0x803D0000u; // 800BC3C0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BC3C4
  W8(c->r[31]+0x00000090u,c->r[0]); // 800BC3C8
  c->r[3]=c->r[31]|c->r[31]; // 800BC3CC
  c->r[4]=c->r[1]+0x0000005Cu; // 800BC3D0
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800BC3D4
  {uint32_t ea=c->r[7]+0x00000420u; c->r[6]=R32(ea); c->r[7]=ea;} // 800BC3D8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BC3DC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BC3E0
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 800BC3E4
  W32(c->r[1]+0x00000060u,c->r[5]); // 800BC3E8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BC3EC
  c->lr=0x800BC3F4u; f_800BC5B4(c); // 800BC3F0
L_800BC3F4:;
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BC3F4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BC3F8
  c->lr=0x800BC400u; f_802501B0(c); // 800BC3FC
  {uint32_t ea=c->r[31]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC400
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BC404
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BC408
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BC40C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BC410
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC414
  c->lr=0x800BC41Cu; f_802519A8(c); // 800BC418
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800BC41C
  {uint32_t ea=c->r[2]+0xFFFF9C78u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC420
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC424
  cmps(c,0,(int32_t)c->r[0],0); // 800BC428
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 800BC42C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 800BC430
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 800BC434
  if (!crb(c,2)) { goto L_800BC4CC; } // 800BC438
  c->r[4]=R32(c->r[1]+0x00000068u); // 800BC43C
  c->r[5]=c->r[1]+0x00000050u; // 800BC440
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 800BC444
  c->r[0]=R32(c->r[1]+0x00000070u); // 800BC448
  W32(c->r[1]+0x00000050u,c->r[4]); // 800BC44C
  W32(c->r[1]+0x00000054u,c->r[3]); // 800BC450
  W32(c->r[1]+0x00000058u,c->r[0]); // 800BC454
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BC458
  c->r[4]=R8(c->r[31]+0x00000074u); // 800BC45C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BC460
  c->lr=0x800BC468u; f_8025E9C0(c); // 800BC464
  c->r[4]=R32(c->r[1]+0x00000068u); // 800BC468
  c->r[5]=c->r[1]+0x00000044u; // 800BC46C
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 800BC470
  c->r[0]=R32(c->r[1]+0x00000070u); // 800BC474
  W32(c->r[1]+0x00000044u,c->r[4]); // 800BC478
  W32(c->r[1]+0x00000048u,c->r[3]); // 800BC47C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800BC480
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BC484
  c->r[4]=R8(c->r[31]+0x00000076u); // 800BC488
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BC48C
  c->lr=0x800BC494u; f_8025E9C0(c); // 800BC490
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC494
  c->r[5]=c->r[1]+0x00000038u; // 800BC498
  c->r[4]=R32(c->r[1]+0x00000068u); // 800BC49C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 800BC4A0
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 800BC4A4
  c->r[0]=R32(c->r[1]+0x00000070u); // 800BC4A8
  W32(c->r[1]+0x00000038u,c->r[4]); // 800BC4AC
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800BC4B0
  W32(c->r[1]+0x00000040u,c->r[0]); // 800BC4B4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BC4B8
  c->r[4]=R8(c->r[31]+0x00000075u); // 800BC4BC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BC4C0
  c->lr=0x800BC4C8u; f_8025E9C0(c); // 800BC4C4
  goto L_800BC584; // 800BC4C8
L_800BC4CC:;
  c->r[4]=R32(c->r[1]+0x00000068u); // 800BC4CC
  c->r[5]=c->r[1]+0x0000002Cu; // 800BC4D0
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 800BC4D4
  c->r[0]=R32(c->r[1]+0x00000070u); // 800BC4D8
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800BC4DC
  W32(c->r[1]+0x00000030u,c->r[3]); // 800BC4E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BC4E4
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BC4E8
  c->r[4]=R8(c->r[31]+0x00000074u); // 800BC4EC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BC4F0
  c->lr=0x800BC4F8u; f_8025E9C0(c); // 800BC4F4
  c->r[4]=R32(c->r[1]+0x00000068u); // 800BC4F8
  c->r[5]=c->r[1]+0x00000020u; // 800BC4FC
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 800BC500
  c->r[0]=R32(c->r[1]+0x00000070u); // 800BC504
  W32(c->r[1]+0x00000020u,c->r[4]); // 800BC508
  W32(c->r[1]+0x00000024u,c->r[3]); // 800BC50C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800BC510
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BC514
  c->r[4]=R8(c->r[31]+0x00000076u); // 800BC518
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BC51C
  c->lr=0x800BC524u; f_8025E9C0(c); // 800BC520
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC524
  c->r[5]=c->r[1]+0x00000014u; // 800BC528
  c->r[4]=R32(c->r[1]+0x00000068u); // 800BC52C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 800BC530
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 800BC534
  c->r[0]=R32(c->r[1]+0x00000070u); // 800BC538
  W32(c->r[1]+0x00000014u,c->r[4]); // 800BC53C
  W32(c->r[1]+0x00000018u,c->r[3]); // 800BC540
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800BC544
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BC548
  c->r[4]=R8(c->r[31]+0x00000075u); // 800BC54C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BC550
  c->lr=0x800BC558u; f_8025E9C0(c); // 800BC554
  c->r[4]=R32(c->r[1]+0x00000068u); // 800BC558
  c->r[5]=c->r[1]+0x00000008u; // 800BC55C
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 800BC560
  c->r[0]=R32(c->r[1]+0x00000070u); // 800BC564
  W32(c->r[1]+0x00000008u,c->r[4]); // 800BC568
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800BC56C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BC570
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BC574
  c->r[4]=R8(c->r[31]+0x00000077u); // 800BC578
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BC57C
  c->lr=0x800BC584u; f_8025E9C0(c); // 800BC580
L_800BC584:;
  c->r[3]=c->r[31]|c->r[31]; // 800BC584
  c->lr=0x800BC58Cu; f_801F56F4(c); // 800BC588
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800BC58C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800BC590
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 800BC594
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 800BC598
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800BC59C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800BC5A0
  c->r[30]=R32(c->r[1]+0x00000088u); // 800BC5A4
  c->lr=c->r[0]; // 800BC5A8
  c->r[1]=c->r[1]+0x000000B0u; // 800BC5AC
  return; // 800BC5B0
}

// fn_800BC5B4
void f_800BC5B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC5B4
  c->r[0]=c->lr; // 800BC5B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC5BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BC5C0
  c->r[31]=c->r[4]|c->r[4]; // 800BC5C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BC5C8
  c->r[30]=c->r[3]|c->r[3]; // 800BC5CC
  c->r[3]=c->r[31]|c->r[31]; // 800BC5D0
  c->lr=0x800BC5D8u; f_802B9FDC(c); // 800BC5D4
  cmps(c,0,(int32_t)c->r[3],0); // 800BC5D8
  if (crb(c,2)) { goto L_800BC5F8; } // 800BC5DC
  c->r[3]=R32(c->r[31]+0x00000000u); // 800BC5E0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800BC5E4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800BC5E8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800BC5EC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800BC5F0
  W32(c->r[30]+0x00000024u,c->r[0]); // 800BC5F4
L_800BC5F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC5F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BC5FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BC600
  c->lr=c->r[0]; // 800BC604
  c->r[1]=c->r[1]+0x00000010u; // 800BC608
  return; // 800BC60C
}

// fn_800BC610
void f_800BC610(Ctx* __restrict c) {
  f_802C10D0(c); return; // 800BC610
}

// fn_800BC614
void f_800BC614(Ctx* __restrict c) {
  return; // 800BC614
}

// fn_800BC618
void f_800BC618(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC618
  c->r[0]=c->lr; // 800BC61C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BC620
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000003BCu); // 800BC624
  cmps(c,0,(int32_t)c->r[0],102); // 800BC628
  if (!crb(c,2)) { goto L_800BC6D0; } // 800BC62C
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC630
  {uint32_t ea=c->r[2]+0xFFFF9C78u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC634
  fcmp(c,0,c->f[1],c->f[2]); // 800BC638
  if (!crb(c,1)) { goto L_800BC670; } // 800BC63C
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC640
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BC644
  fcmp(c,0,c->f[0],c->f[2]); // 800BC648
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800BC64C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BC650
  if (!crb(c,2)) { goto L_800BC7BC; } // 800BC654
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[2]);} // 800BC658
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800BC65C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BC660
  c->ctr=c->r[12]; // 800BC664
  if (true) { c->lr=0x800BC66Cu; dispatch(c,c->ctr); } // 800BC668
  goto L_800BC7BC; // 800BC66C
L_800BC670:;
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC670
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800BC674
  fcmp(c,0,c->f[0],c->f[2]); // 800BC678
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800BC67C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BC680
  if (!crb(c,2)) { goto L_800BC7BC; } // 800BC684
  {uint32_t ea=c->r[3]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC688
  c->r[0]=0u+0x43300000u; // 800BC68C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BC690
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BC694
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[1]=RF64(ea);} // 800BC698
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[2]);} // 800BC69C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800BC6A0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800BC6A4
  c->r[0]=c->r[0]^0x80000000u; // 800BC6A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC6AC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800BC6B0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BC6B4
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800BC6B8
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800BC6BC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BC6C0
  c->ctr=c->r[12]; // 800BC6C4
  if (true) { c->lr=0x800BC6CCu; dispatch(c,c->ctr); } // 800BC6C8
  goto L_800BC7BC; // 800BC6CC
L_800BC6D0:;
  cmps(c,0,(int32_t)c->r[0],100); // 800BC6D0
  if (!crb(c,2)) { goto L_800BC74C; } // 800BC6D4
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC6D8
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC6DC
  {uint32_t ea=c->r[2]+0xFFFF9CA8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC6E0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BC6E4
  fcmp(c,0,c->f[0],c->f[2]); // 800BC6E8
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800BC6EC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BC6F0
  if (!crb(c,2)) { goto L_800BC7BC; } // 800BC6F4
  {uint32_t ea=c->r[3]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC6F8
  c->r[4]=0u+0x43300000u; // 800BC6FC
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800BC700
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BC704
  W32(c->r[1]+0x00000008u,c->r[4]); // 800BC708
  c->r[0]=c->r[0]|0x00004000u; // 800BC70C
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[1]=RF64(ea);} // 800BC710
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800BC714
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800BC718
  c->r[4]=R32(c->r[1]+0x00000014u); // 800BC71C
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[2]);} // 800BC720
  c->r[0]=c->r[4]^0x80000000u; // 800BC724
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800BC728
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800BC72C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BC730
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800BC734
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800BC738
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BC73C
  c->ctr=c->r[12]; // 800BC740
  if (true) { c->lr=0x800BC748u; dispatch(c,c->ctr); } // 800BC744
  goto L_800BC7BC; // 800BC748
L_800BC74C:;
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC74C
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC750
  {uint32_t ea=c->r[2]+0xFFFF9C7Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC754
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800BC758
  fcmp(c,0,c->f[0],c->f[2]); // 800BC75C
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 800BC760
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BC764
  if (!crb(c,2)) { goto L_800BC7BC; } // 800BC768
  {uint32_t ea=c->r[3]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC76C
  c->r[4]=0u+0x43300000u; // 800BC770
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800BC774
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BC778
  W32(c->r[1]+0x00000008u,c->r[4]); // 800BC77C
  c->r[0]=c->r[0]|0x00004000u; // 800BC780
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[1]=RF64(ea);} // 800BC784
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800BC788
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800BC78C
  c->r[4]=R32(c->r[1]+0x00000014u); // 800BC790
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[2]);} // 800BC794
  c->r[0]=c->r[4]^0x80000000u; // 800BC798
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800BC79C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800BC7A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BC7A4
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800BC7A8
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800BC7AC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BC7B0
  c->ctr=c->r[12]; // 800BC7B4
  if (true) { c->lr=0x800BC7BCu; dispatch(c,c->ctr); } // 800BC7B8
L_800BC7BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BC7BC
  c->lr=c->r[0]; // 800BC7C0
  c->r[1]=c->r[1]+0x00000020u; // 800BC7C4
  return; // 800BC7C8
}

// fn_800BC7CC
void f_800BC7CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC7CC
  c->r[0]=c->lr; // 800BC7D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BC7D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BC7D8
  c->r[31]=c->r[3]|c->r[3]; // 800BC7DC
  c->lr=0x800BC7E4u; f_801F4F28(c); // 800BC7E0
  c->r[4]=R32(c->r[31]+0x000003C0u); // 800BC7E4
  cmps(c,0,(int32_t)c->r[4],102); // 800BC7E8
  if (crb(c,2)) { goto L_800BC844; } // 800BC7EC
  if (!crb(c,0)) { goto L_800BC858; } // 800BC7F0
  cmps(c,0,(int32_t)c->r[4],100); // 800BC7F4
  if (!crb(c,0)) { goto L_800BC800; } // 800BC7F8
  goto L_800BC858; // 800BC7FC
L_800BC800:;
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800BC800
  c->r[0]=0u+0x00000000u; // 800BC804
  W16(c->r[31]+0x000003BCu,c->r[4]); // 800BC808
  c->r[7]=0u+0x803D0000u; // 800BC80C
  c->r[4]=rotl(c->r[3],0)&0xFFFFBFFFu; // 800BC810
  c->r[3]=c->r[31]|c->r[31]; // 800BC814
  W16(c->r[31]+0x000003BEu,c->r[4]); // 800BC818
  c->r[4]=c->r[1]+0x00000008u; // 800BC81C
  W8(c->r[31]+0x00000090u,c->r[0]); // 800BC820
  {uint32_t ea=c->r[7]+0x0000042Cu; c->r[6]=R32(ea); c->r[7]=ea;} // 800BC824
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BC828
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BC82C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BC830
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BC834
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BC838
  c->lr=0x800BC840u; f_800BC5B4(c); // 800BC83C
  goto L_800BC858; // 800BC840
L_800BC844:;
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800BC844
  c->r[0]=0u+0x00000001u; // 800BC848
  W8(c->r[31]+0x00000090u,c->r[0]); // 800BC84C
  c->r[0]=rotl(c->r[3],0)&0xFFFFBFFFu; // 800BC850
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BC854
L_800BC858:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BC858
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BC85C
  c->lr=c->r[0]; // 800BC860
  c->r[1]=c->r[1]+0x00000020u; // 800BC864
  return; // 800BC868
}

// fn_800BC86C
void f_800BC86C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC86C
  c->r[0]=c->lr; // 800BC870
  c->r[5]=0u+0x00000000u; // 800BC874
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC878
  c->r[4]=R8(c->r[3]+0x0000006Eu); // 800BC87C
  c->r[3]=R32(c->r[3]+0x00000394u); // 800BC880
  c->r[0]=0u-c->r[4]; // 800BC884
  c->r[0]=c->r[0]|c->r[4]; // 800BC888
  c->r[4]=c->r[3]+0x0000010Cu; // 800BC88C
  c->r[3]=sraw(c,c->r[0],31); // 800BC890
  c->r[3]=c->r[3]+0x0000032Cu; // 800BC894
  c->lr=0x800BC89Cu; f_8024EE50(c); // 800BC898
  cmps(c,0,(int32_t)c->r[3],0); // 800BC89C
  if (!crb(c,2)) { goto L_800BC8AC; } // 800BC8A0
  c->r[3]=0u+0x00000001u; // 800BC8A4
  goto L_800BC8B0; // 800BC8A8
L_800BC8AC:;
  c->r[3]=0u+0x00000000u; // 800BC8AC
L_800BC8B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC8B0
  c->lr=c->r[0]; // 800BC8B4
  c->r[1]=c->r[1]+0x00000010u; // 800BC8B8
  return; // 800BC8BC
}

// fn_800BC8C0
void f_800BC8C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC8C0
  c->r[0]=c->lr; // 800BC8C4
  c->r[4]=0u+0x00000000u; // 800BC8C8
  c->r[7]=0u+0x803D0000u; // 800BC8CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BC8D0
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800BC8D4
  W16(c->r[3]+0x000003BCu,c->r[4]); // 800BC8D8
  c->r[4]=c->r[1]+0x00000008u; // 800BC8DC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 800BC8E0
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800BC8E4
  {uint32_t ea=c->r[7]+0x00000438u; c->r[6]=R32(ea); c->r[7]=ea;} // 800BC8E8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BC8EC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BC8F0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BC8F4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BC8F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BC8FC
  c->lr=0x800BC904u; f_800BC5B4(c); // 800BC900
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BC904
  c->lr=c->r[0]; // 800BC908
  c->r[1]=c->r[1]+0x00000020u; // 800BC90C
  return; // 800BC910
}

// fn_800BC914
void f_800BC914(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC914
  c->r[0]=c->lr; // 800BC918
  cmps(c,0,(int32_t)c->r[3],0); // 800BC91C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC920
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BC924
  c->r[31]=c->r[4]|c->r[4]; // 800BC928
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BC92C
  c->r[30]=c->r[3]|c->r[3]; // 800BC930
  if (crb(c,2)) { goto L_800BC950; } // 800BC934
  c->r[4]=0u+0x00000000u; // 800BC938
  c->lr=0x800BC940u; f_8026A06C(c); // 800BC93C
  cmps(c,0,(int32_t)c->r[31],0); // 800BC940
  if (!crb(c,1)) { goto L_800BC950; } // 800BC944
  c->r[3]=c->r[30]|c->r[30]; // 800BC948
  c->lr=0x800BC950u; f_8026A268(c); // 800BC94C
L_800BC950:;
  c->r[3]=c->r[30]|c->r[30]; // 800BC950
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BC954
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BC958
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC95C
  c->lr=c->r[0]; // 800BC960
  c->r[1]=c->r[1]+0x00000010u; // 800BC964
  return; // 800BC968
}

// fn_800BC96C
void f_800BC96C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC96C
  c->r[0]=c->lr; // 800BC970
  c->r[4]=0u+0x00000000u; // 800BC974
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BC978
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800BC97C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800BC980
  W32(c->r[1]+0x00000024u,c->r[29]); // 800BC984
  W32(c->r[1]+0x00000020u,c->r[28]); // 800BC988
  c->r[28]=c->r[3]|c->r[3]; // 800BC98C
  c->lr=0x800BC994u; f_801F57D0(c); // 800BC990
  c->r[3]=c->r[28]|c->r[28]; // 800BC994
  c->r[4]=0u+0x00000001u; // 800BC998
  c->lr=0x800BC9A0u; f_801F57D0(c); // 800BC99C
  c->r[3]=c->r[28]|c->r[28]; // 800BC9A0
  c->r[4]=0u+0x00000002u; // 800BC9A4
  c->lr=0x800BC9ACu; f_801F57D0(c); // 800BC9A8
  c->r[3]=c->r[28]|c->r[28]; // 800BC9AC
  c->r[4]=0u+0x00000003u; // 800BC9B0
  c->lr=0x800BC9B8u; f_801F57D0(c); // 800BC9B4
  c->r[3]=c->r[28]|c->r[28]; // 800BC9B8
  c->r[4]=0u+0x00000004u; // 800BC9BC
  c->lr=0x800BC9C4u; f_801F57D0(c); // 800BC9C0
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800BC9C4
  c->r[3]=c->r[28]|c->r[28]; // 800BC9C8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800BC9CC
  c->ctr=c->r[12]; // 800BC9D0
  if (true) { c->lr=0x800BC9D8u; dispatch(c,c->ctr); } // 800BC9D4
  c->r[3]=c->r[28]|c->r[28]; // 800BC9D8
  c->lr=0x800BC9E0u; f_801F4B94(c); // 800BC9DC
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BC9E0
  c->r[3]=0u+0x00000003u; // 800BC9E4
  {uint32_t ea=c->r[2]+0xFFFF9CBCu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BC9E8
  c->r[0]=0u+0x0000001Fu; // 800BC9EC
  {uint32_t ea=c->r[2]+0xFFFF9CC0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC9F0
  {uint32_t ea=c->r[2]+0xFFFF9CC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC9F4
  {uint32_t ea=c->r[2]+0xFFFF9CC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC9F8
  W8(c->r[28]+0x0000006Cu,c->r[3]); // 800BC9FC
  W8(c->r[28]+0x0000006Du,c->r[0]); // 800BCA00
  {uint32_t ea=c->r[28]+0x00000078u; WF32(ea,c->f[4]);} // 800BCA04
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[3]);} // 800BCA08
  {uint32_t ea=c->r[28]+0x00000080u; WF32(ea,c->f[2]);} // 800BCA0C
  {uint32_t ea=c->r[28]+0x00000084u; WF32(ea,c->f[1]);} // 800BCA10
  {uint32_t ea=c->r[28]+0x0000008Cu; WF32(ea,c->f[4]);} // 800BCA14
  {uint32_t ea=c->r[28]+0x00000088u; WF32(ea,c->f[4]);} // 800BCA18
  {uint32_t ea=c->r[28]+0x00000090u; WF32(ea,c->f[0]);} // 800BCA1C
  {uint32_t ea=c->r[28]+0x00000094u; WF32(ea,c->f[4]);} // 800BCA20
  {uint32_t ea=c->r[28]+0x0000009Cu; WF32(ea,c->f[4]);} // 800BCA24
  {uint32_t ea=c->r[28]+0x000000A8u; WF32(ea,c->f[4]);} // 800BCA28
  {uint32_t ea=c->r[28]+0x000000A0u; WF32(ea,c->f[4]);} // 800BCA2C
  c->lr=0x800BCA34u; f_8024E040(c); // 800BCA30
  {uint32_t ea=c->r[2]+0xFFFF9CCCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BCA34
  c->r[4]=c->r[28]+0x0000002Cu; // 800BCA38
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCA3C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800BCA40
  {uint32_t ea=c->r[28]+0x000000A4u; WF32(ea,c->f[1]);} // 800BCA44
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800BCA48
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800BCA4C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800BCA50
  c->r[3]=R32(c->r[28]+0x00000398u); // 800BCA54
  c->r[3]=c->r[3]+0x0000005Cu; // 800BCA58
  c->lr=0x800BCA60u; f_800361A0(c); // 800BCA5C
  c->r[3]=R32(c->r[28]+0x00000398u); // 800BCA60
  c->r[4]=c->r[1]+0x00000008u; // 800BCA64
  c->r[3]=c->r[3]+0x00000068u; // 800BCA68
  c->lr=0x800BCA70u; f_800361A0(c); // 800BCA6C
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800BCA70
  c->r[4]=c->r[28]+0x0000002Cu; // 800BCA74
  c->r[3]=c->r[3]+0x0000005Cu; // 800BCA78
  c->lr=0x800BCA80u; f_800361A0(c); // 800BCA7C
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800BCA80
  c->r[4]=c->r[1]+0x00000008u; // 800BCA84
  c->r[3]=c->r[3]+0x00000068u; // 800BCA88
  c->lr=0x800BCA90u; f_800361A0(c); // 800BCA8C
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800BCA90
  c->r[4]=c->r[28]+0x0000002Cu; // 800BCA94
  c->r[3]=c->r[3]+0x0000005Cu; // 800BCA98
  c->lr=0x800BCAA0u; f_800361A0(c); // 800BCA9C
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800BCAA0
  c->r[4]=c->r[1]+0x00000008u; // 800BCAA4
  c->r[3]=c->r[3]+0x00000068u; // 800BCAA8
  c->lr=0x800BCAB0u; f_800361A0(c); // 800BCAAC
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800BCAB0
  c->r[4]=c->r[28]+0x0000002Cu; // 800BCAB4
  c->r[3]=c->r[3]+0x0000005Cu; // 800BCAB8
  c->lr=0x800BCAC0u; f_800361A0(c); // 800BCABC
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800BCAC0
  c->r[4]=c->r[1]+0x00000008u; // 800BCAC4
  c->r[3]=c->r[3]+0x00000068u; // 800BCAC8
  c->lr=0x800BCAD0u; f_800361A0(c); // 800BCACC
  c->r[4]=R32(c->r[28]+0x00000394u); // 800BCAD0
  c->r[3]=c->r[28]|c->r[28]; // 800BCAD4
  c->lr=0x800BCADCu; f_801F58BC(c); // 800BCAD8
  c->r[3]=R32(c->r[28]+0x00000394u); // 800BCADC
  c->r[29]=0u+0x00000001u; // 800BCAE0
  c->r[30]=0u+0x803A0000u; // 800BCAE4
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800BCAE8
  c->r[4]=c->r[30]+0xFFFFCF70u; // 800BCAEC
  c->r[3]=R32(c->r[28]+0x00000394u); // 800BCAF0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BCAF4
  c->lr=0x800BCAFCu; f_80256EC4(c); // 800BCAF8
  c->r[6]=R32(c->r[28]+0x00000394u); // 800BCAFC
  c->r[5]=0u+0x805D0000u; // 800BCB00
  c->r[4]=c->r[28]+0x0000002Cu; // 800BCB04
  W32(c->r[6]+0x000000E4u,c->r[3]); // 800BCB08
  c->r[3]=c->r[5]+0x000078B0u; // 800BCB0C
  c->lr=0x800BCB14u; f_802351CC(c); // 800BCB10
  c->r[5]=R32(c->r[28]+0x00000394u); // 800BCB14
  c->r[30]=c->r[30]+0xFFFFCF70u; // 800BCB18
  c->r[4]=c->r[30]+0x00000009u; // 800BCB1C
  W8(c->r[5]+0x0000001Du,c->r[3]); // 800BCB20
  c->r[3]=R32(c->r[28]+0x00000394u); // 800BCB24
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BCB28
  c->lr=0x800BCB30u; f_80256EC4(c); // 800BCB2C
  W8(c->r[28]+0x00000098u,c->r[3]); // 800BCB30
  c->r[4]=c->r[30]+0x00000018u; // 800BCB34
  c->r[3]=R32(c->r[28]+0x00000394u); // 800BCB38
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BCB3C
  c->lr=0x800BCB44u; f_80256EC4(c); // 800BCB40
  W8(c->r[28]+0x00000099u,c->r[3]); // 800BCB44
  c->r[4]=c->r[30]+0x00000022u; // 800BCB48
  c->r[3]=R32(c->r[28]+0x00000394u); // 800BCB4C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BCB50
  c->lr=0x800BCB58u; f_80256EC4(c); // 800BCB54
  W8(c->r[28]+0x0000009Au,c->r[3]); // 800BCB58
  c->r[3]=c->r[28]|c->r[28]; // 800BCB5C
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCB60
  c->r[4]=0u+0x00000000u; // 800BCB64
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800BCB68
  c->r[5]=0u+0x00000001u; // 800BCB6C
  c->f[2]=c->f[1]; // 800BCB70
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BCB74
  c->ctr=c->r[12]; // 800BCB78
  if (true) { c->lr=0x800BCB80u; dispatch(c,c->ctr); } // 800BCB7C
  c->r[4]=R32(c->r[28]+0x00000398u); // 800BCB80
  c->r[3]=c->r[28]|c->r[28]; // 800BCB84
  c->lr=0x800BCB8Cu; f_801F58BC(c); // 800BCB88
  c->r[3]=R32(c->r[28]+0x00000398u); // 800BCB8C
  c->r[4]=c->r[30]|c->r[30]; // 800BCB90
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800BCB94
  c->r[3]=R32(c->r[28]+0x00000398u); // 800BCB98
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BCB9C
  c->lr=0x800BCBA4u; f_80256EC4(c); // 800BCBA0
  c->r[4]=R32(c->r[28]+0x00000398u); // 800BCBA4
  c->r[31]=0u+0x00000000u; // 800BCBA8
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCBAC
  c->r[5]=0u+0x00000001u; // 800BCBB0
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800BCBB4
  c->r[3]=c->r[28]|c->r[28]; // 800BCBB8
  c->f[2]=c->f[1]; // 800BCBBC
  c->r[6]=0u+0x00000001u; // 800BCBC0
  c->r[4]=R32(c->r[28]+0x00000398u); // 800BCBC4
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800BCBC8
  c->r[7]=R32(c->r[28]+0x00000394u); // 800BCBCC
  c->r[4]=R32(c->r[28]+0x00000398u); // 800BCBD0
  c->r[0]=R8(c->r[7]+0x0000001Du); // 800BCBD4
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800BCBD8
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800BCBDC
  c->r[4]=R32(c->r[28]+0x00000398u); // 800BCBE0
  c->r[12]=R32(c->r[12]+0x00000064u); // 800BCBE4
  c->ctr=c->r[12]; // 800BCBE8
  if (true) { c->lr=0x800BCBF0u; dispatch(c,c->ctr); } // 800BCBEC
  {uint32_t ea=c->r[28]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCBF0
  c->r[3]=R32(c->r[28]+0x00000398u); // 800BCBF4
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BCBF8
  c->r[4]=R32(c->r[28]+0x00000398u); // 800BCBFC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BCC00
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCC04
  c->lr=0x800BCC0Cu; f_802519A8(c); // 800BCC08
  c->r[4]=R32(c->r[28]+0x0000039Cu); // 800BCC0C
  c->r[3]=c->r[28]|c->r[28]; // 800BCC10
  c->lr=0x800BCC18u; f_801F58BC(c); // 800BCC14
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800BCC18
  c->r[4]=c->r[30]|c->r[30]; // 800BCC1C
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800BCC20
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800BCC24
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BCC28
  c->lr=0x800BCC30u; f_80256EC4(c); // 800BCC2C
  c->r[4]=R32(c->r[28]+0x0000039Cu); // 800BCC30
  c->r[5]=0u+0x00000001u; // 800BCC34
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCC38
  c->r[6]=0u+0x00000001u; // 800BCC3C
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800BCC40
  c->r[3]=c->r[28]|c->r[28]; // 800BCC44
  c->f[2]=c->f[1]; // 800BCC48
  c->r[4]=R32(c->r[28]+0x0000039Cu); // 800BCC4C
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800BCC50
  c->r[7]=R32(c->r[28]+0x00000394u); // 800BCC54
  c->r[4]=R32(c->r[28]+0x0000039Cu); // 800BCC58
  c->r[0]=R8(c->r[7]+0x0000001Du); // 800BCC5C
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800BCC60
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800BCC64
  c->r[4]=R32(c->r[28]+0x0000039Cu); // 800BCC68
  c->r[12]=R32(c->r[12]+0x00000064u); // 800BCC6C
  c->ctr=c->r[12]; // 800BCC70
  if (true) { c->lr=0x800BCC78u; dispatch(c,c->ctr); } // 800BCC74
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCC78
  c->r[3]=R32(c->r[28]+0x0000039Cu); // 800BCC7C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BCC80
  c->r[4]=R32(c->r[28]+0x0000039Cu); // 800BCC84
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BCC88
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCC8C
  c->lr=0x800BCC94u; f_802519A8(c); // 800BCC90
  c->r[4]=R32(c->r[28]+0x000003A0u); // 800BCC94
  c->r[3]=c->r[28]|c->r[28]; // 800BCC98
  c->lr=0x800BCCA0u; f_801F58BC(c); // 800BCC9C
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800BCCA0
  c->r[4]=c->r[30]|c->r[30]; // 800BCCA4
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800BCCA8
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800BCCAC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BCCB0
  c->lr=0x800BCCB8u; f_80256EC4(c); // 800BCCB4
  c->r[4]=R32(c->r[28]+0x000003A0u); // 800BCCB8
  c->r[5]=0u+0x00000001u; // 800BCCBC
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCCC0
  c->r[6]=0u+0x00000001u; // 800BCCC4
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800BCCC8
  c->r[3]=c->r[28]|c->r[28]; // 800BCCCC
  c->f[2]=c->f[1]; // 800BCCD0
  c->r[4]=R32(c->r[28]+0x000003A0u); // 800BCCD4
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800BCCD8
  c->r[7]=R32(c->r[28]+0x00000394u); // 800BCCDC
  c->r[4]=R32(c->r[28]+0x000003A0u); // 800BCCE0
  c->r[0]=R8(c->r[7]+0x0000001Du); // 800BCCE4
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800BCCE8
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800BCCEC
  c->r[4]=R32(c->r[28]+0x000003A0u); // 800BCCF0
  c->r[12]=R32(c->r[12]+0x00000064u); // 800BCCF4
  c->ctr=c->r[12]; // 800BCCF8
  if (true) { c->lr=0x800BCD00u; dispatch(c,c->ctr); } // 800BCCFC
  {uint32_t ea=c->r[28]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCD00
  c->r[3]=R32(c->r[28]+0x000003A0u); // 800BCD04
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BCD08
  c->r[4]=R32(c->r[28]+0x000003A0u); // 800BCD0C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BCD10
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCD14
  c->lr=0x800BCD1Cu; f_802519A8(c); // 800BCD18
  c->r[4]=R32(c->r[28]+0x000003A4u); // 800BCD1C
  c->r[3]=c->r[28]|c->r[28]; // 800BCD20
  c->lr=0x800BCD28u; f_801F58BC(c); // 800BCD24
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800BCD28
  c->r[4]=c->r[30]|c->r[30]; // 800BCD2C
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800BCD30
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800BCD34
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BCD38
  c->lr=0x800BCD40u; f_80256EC4(c); // 800BCD3C
  c->r[4]=R32(c->r[28]+0x000003A4u); // 800BCD40
  c->r[5]=0u+0x00000001u; // 800BCD44
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCD48
  c->r[6]=0u+0x00000001u; // 800BCD4C
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800BCD50
  c->r[3]=c->r[28]|c->r[28]; // 800BCD54
  c->f[2]=c->f[1]; // 800BCD58
  c->r[4]=R32(c->r[28]+0x000003A4u); // 800BCD5C
  W8(c->r[4]+0x0000001Du,c->r[31]); // 800BCD60
  c->r[7]=R32(c->r[28]+0x00000394u); // 800BCD64
  c->r[4]=R32(c->r[28]+0x000003A4u); // 800BCD68
  c->r[0]=R8(c->r[7]+0x0000001Du); // 800BCD6C
  W8(c->r[4]+0x0000001Du,c->r[0]); // 800BCD70
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800BCD74
  c->r[4]=R32(c->r[28]+0x000003A4u); // 800BCD78
  c->r[12]=R32(c->r[12]+0x00000064u); // 800BCD7C
  c->ctr=c->r[12]; // 800BCD80
  if (true) { c->lr=0x800BCD88u; dispatch(c,c->ctr); } // 800BCD84
  {uint32_t ea=c->r[28]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCD88
  c->r[3]=R32(c->r[28]+0x000003A4u); // 800BCD8C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BCD90
  c->r[4]=R32(c->r[28]+0x000003A4u); // 800BCD94
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BCD98
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCD9C
  c->lr=0x800BCDA4u; f_802519A8(c); // 800BCDA0
  W8(c->r[28]+0x0000006Fu,c->r[29]); // 800BCDA4
  c->r[3]=c->r[28]|c->r[28]; // 800BCDA8
  c->lr=0x800BCDB0u; f_801F56F4(c); // 800BCDAC
  c->r[12]=R32(c->r[28]+0x000000B0u); // 800BCDB0
  c->r[3]=c->r[28]|c->r[28]; // 800BCDB4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BCDB8
  c->ctr=c->r[12]; // 800BCDBC
  if (true) { c->lr=0x800BCDC4u; dispatch(c,c->ctr); } // 800BCDC0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BCDC4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800BCDC8
  c->r[30]=R32(c->r[1]+0x00000028u); // 800BCDCC
  c->r[29]=R32(c->r[1]+0x00000024u); // 800BCDD0
  c->r[28]=R32(c->r[1]+0x00000020u); // 800BCDD4
  c->lr=c->r[0]; // 800BCDD8
  c->r[1]=c->r[1]+0x00000030u; // 800BCDDC
  return; // 800BCDE0
}

// fn_800BCDE4
void f_800BCDE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCDE4
  c->r[0]=c->lr; // 800BCDE8
  W32(c->r[1]+0x00000084u,c->r[0]); // 800BCDEC
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800BCDF0
  c->r[31]=c->r[3]|c->r[3]; // 800BCDF4
  c->r[12]=R32(c->r[3]+0x000000B0u); // 800BCDF8
  c->r[12]=R32(c->r[12]+0x00000068u); // 800BCDFC
  c->ctr=c->r[12]; // 800BCE00
  if (true) { c->lr=0x800BCE08u; dispatch(c,c->ctr); } // 800BCE04
  c->r[3]=c->r[31]|c->r[31]; // 800BCE08
  c->lr=0x800BCE10u; f_801F4C0C(c); // 800BCE0C
  {uint32_t ea=c->r[31]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCE10
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BCE14
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BCE18
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BCE1C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BCE20
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCE24
  c->lr=0x800BCE2Cu; f_802519A8(c); // 800BCE28
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCE2C
  c->r[5]=c->r[1]+0x00000020u; // 800BCE30
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCE34
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 800BCE38
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800BCE3C
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 800BCE40
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800BCE44
  c->r[3]=R32(c->r[1]+0x00000030u); // 800BCE48
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BCE4C
  W32(c->r[1]+0x00000020u,c->r[4]); // 800BCE50
  W32(c->r[1]+0x00000024u,c->r[3]); // 800BCE54
  W32(c->r[1]+0x00000028u,c->r[0]); // 800BCE58
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BCE5C
  c->r[4]=R8(c->r[31]+0x00000098u); // 800BCE60
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BCE64
  c->lr=0x800BCE6Cu; f_8025E9C0(c); // 800BCE68
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 800BCE6C
  c->r[5]=c->r[1]+0x00000014u; // 800BCE70
  c->r[3]=R32(c->r[1]+0x00000030u); // 800BCE74
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BCE78
  W32(c->r[1]+0x00000014u,c->r[4]); // 800BCE7C
  W32(c->r[1]+0x00000018u,c->r[3]); // 800BCE80
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800BCE84
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BCE88
  c->r[4]=R8(c->r[31]+0x0000009Au); // 800BCE8C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BCE90
  c->lr=0x800BCE98u; f_8025E9C0(c); // 800BCE94
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCE98
  c->r[5]=c->r[1]+0x00000008u; // 800BCE9C
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 800BCEA0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800BCEA4
  c->r[3]=R32(c->r[1]+0x00000030u); // 800BCEA8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BCEAC
  W32(c->r[1]+0x00000008u,c->r[4]); // 800BCEB0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800BCEB4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BCEB8
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BCEBC
  c->r[4]=R8(c->r[31]+0x00000099u); // 800BCEC0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BCEC4
  c->lr=0x800BCECCu; f_8025E9C0(c); // 800BCEC8
  c->r[3]=c->r[31]|c->r[31]; // 800BCECC
  c->lr=0x800BCED4u; f_801F56F4(c); // 800BCED0
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BCED4
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800BCED8
  if (crb(c,2)) { goto L_800BD004; } // 800BCEDC
  c->r[0]=R16(c->r[31]+0x00000076u); // 800BCEE0
  cmps(c,0,(int32_t)c->r[0],3); // 800BCEE4
  if (crb(c,2)) { goto L_800BCF44; } // 800BCEE8
  if (!crb(c,0)) { goto L_800BCF00; } // 800BCEEC
  cmps(c,0,(int32_t)c->r[0],1); // 800BCEF0
  if (crb(c,2)) { goto L_800BCF0C; } // 800BCEF4
  if (!crb(c,0)) { goto L_800BCF28; } // 800BCEF8
  goto L_800BCF78; // 800BCEFC
L_800BCF00:;
  cmps(c,0,(int32_t)c->r[0],5); // 800BCF00
  if (!crb(c,0)) { goto L_800BCF78; } // 800BCF04
  goto L_800BCF60; // 800BCF08
L_800BCF0C:;
  c->lr=0x800BCF10u; f_8024E040(c); // 800BCF0C
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCF10
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BCF14
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BCF18
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[0]);} // 800BCF1C
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 800BCF20
  goto L_800BCF78; // 800BCF24
L_800BCF28:;
  c->lr=0x800BCF2Cu; f_8024E040(c); // 800BCF28
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCF2C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BCF30
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BCF34
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[0]);} // 800BCF38
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 800BCF3C
  goto L_800BCF78; // 800BCF40
L_800BCF44:;
  c->lr=0x800BCF48u; f_8024E040(c); // 800BCF44
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCF48
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BCF4C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BCF50
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[0]);} // 800BCF54
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 800BCF58
  goto L_800BCF78; // 800BCF5C
L_800BCF60:;
  c->lr=0x800BCF64u; f_8024E040(c); // 800BCF60
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCF64
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BCF68
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BCF6C
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[0]);} // 800BCF70
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 800BCF74
L_800BCF78:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800BCF78
  c->r[0]=0u+0x43300000u; // 800BCF7C
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 800BCF80
  {uint32_t ea=c->r[2]+0xFFFF9CD0u; c->f[1]=RF64(ea);} // 800BCF84
  W32(c->r[1]+0x00000068u,c->r[0]); // 800BCF88
  c->r[3]=R32(c->r[31]+0x00000398u); // 800BCF8C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 800BCF90
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BCF94
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BCF98
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BCF9C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BCFA0
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCFA4
  c->lr=0x800BCFACu; f_802519A8(c); // 800BCFA8
  c->r[3]=R32(c->r[31]+0x00000398u); // 800BCFAC
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BCFB0
  c->lr=0x800BCFB8u; f_8025037C(c); // 800BCFB4
  c->r[3]=R32(c->r[31]+0x00000398u); // 800BCFB8
  c->r[4]=0u+0x803A0000u; // 800BCFBC
  c->r[4]=c->r[4]+0xFFFFCF70u; // 800BCFC0
  c->r[5]=c->r[1]+0x00000038u; // 800BCFC4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BCFC8
  c->r[4]=c->r[4]+0x0000002Cu; // 800BCFCC
  c->r[6]=0u+0x00000001u; // 800BCFD0
  c->lr=0x800BCFD8u; f_80257018(c); // 800BCFD4
  c->r[3]=0u+0x805D0000u; // 800BCFD8
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCFDC
  c->r[3]=c->r[3]+0x00003F6Cu; // 800BCFE0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800BCFE4
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCFE8
  c->r[3]=R32(c->r[31]+0x00000398u); // 800BCFEC
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BCFF0
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BCFF4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BCFF8
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCFFC
  c->lr=0x800BD004u; f_802519A8(c); // 800BD000
L_800BD004:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BD004
  c->r[3]=c->r[31]|c->r[31]; // 800BD008
  c->lr=0x800BD010u; f_801F58FC(c); // 800BD00C
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800BD010
  c->r[3]=c->r[31]|c->r[31]; // 800BD014
  c->lr=0x800BD01Cu; f_801F58FC(c); // 800BD018
  c->r[4]=R32(c->r[31]+0x000003A0u); // 800BD01C
  c->r[3]=c->r[31]|c->r[31]; // 800BD020
  c->lr=0x800BD028u; f_801F58FC(c); // 800BD024
  c->r[4]=R32(c->r[31]+0x000003A4u); // 800BD028
  c->r[3]=c->r[31]|c->r[31]; // 800BD02C
  c->lr=0x800BD034u; f_801F58FC(c); // 800BD030
  c->r[3]=R32(c->r[31]+0x00000398u); // 800BD034
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BD038
  c->lr=0x800BD040u; f_8025037C(c); // 800BD03C
  c->r[3]=R32(c->r[31]+0x0000039Cu); // 800BD040
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BD044
  c->lr=0x800BD04Cu; f_8025037C(c); // 800BD048
  c->r[3]=R32(c->r[31]+0x000003A0u); // 800BD04C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BD050
  c->lr=0x800BD058u; f_8025037C(c); // 800BD054
  c->r[3]=R32(c->r[31]+0x000003A4u); // 800BD058
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BD05C
  c->lr=0x800BD064u; f_8025037C(c); // 800BD060
  c->r[0]=R32(c->r[1]+0x00000084u); // 800BD064
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800BD068
  c->lr=c->r[0]; // 800BD06C
  c->r[1]=c->r[1]+0x00000080u; // 800BD070
  return; // 800BD074
}

// fn_800BD078
void f_800BD078(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD078
  c->r[0]=c->lr; // 800BD07C
  c->r[5]=0u+0x43300000u; // 800BD080
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BD084
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800BD088
  c->r[31]=c->r[3]|c->r[3]; // 800BD08C
  W32(c->r[1]+0x00000048u,c->r[30]); // 800BD090
  c->r[4]=R16(c->r[3]+0x000003BEu); // 800BD094
  W32(c->r[1]+0x00000008u,c->r[5]); // 800BD098
  c->r[0]=rotl(c->r[4],0)&0x00002000u; cr0(c,c->r[0]); // 800BD09C
  c->r[0]=rotl(c->r[4],0)&0xFFFFBFFFu; // 800BD0A0
  W32(c->r[1]+0x00000010u,c->r[5]); // 800BD0A4
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800BD0A8
  if (crb(c,2)) { goto L_800BD1E8; } // 800BD0AC
  {uint32_t ea=c->r[3]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD0B0
  {uint32_t ea=c->r[2]+0xFFFF9CD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD0B4
  fcmp(c,0,c->f[2],c->f[1]); // 800BD0B8
  if (!crb(c,0)) { goto L_800BD1C0; } // 800BD0BC
  {uint32_t ea=c->r[2]+0xFFFF9CCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD0C0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800BD0C4
  fcmp(c,0,c->f[0],c->f[1]); // 800BD0C8
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 800BD0CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BD0D0
  if (!crb(c,2)) { goto L_800BD1C0; } // 800BD0D4
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[1]);} // 800BD0D8
  c->lr=0x800BD0E0u; f_8024E040(c); // 800BD0DC
  {uint32_t ea=c->r[31]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD0E0
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800BD0E4
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD0E8
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800BD0EC
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD0F0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BD0F4
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD0F8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[4]);} // 800BD0FC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800BD100
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BD104
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[2]);} // 800BD108
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 800BD10C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[3]);} // 800BD110
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800BD114
  c->r[4]=R32(c->r[1]+0x00000024u); // 800BD118
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 800BD11C
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 800BD120
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BD124
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[4]=RF64(ea);} // 800BD128
  c->r[6]=divw((int32_t)c->r[0],(int32_t)c->r[7]); // 800BD12C
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800BD130
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[1]);} // 800BD134
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BD138
  c->r[4]=R32(c->r[1]+0x00000034u); // 800BD13C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800BD140
  c->r[3]=divw((int32_t)c->r[5],(int32_t)c->r[7]); // 800BD144
  c->r[6]=c->r[6]+0x00000001u; // 800BD148
  c->r[5]=c->r[3]+0x00000001u; // 800BD14C
  c->r[4]=divw((int32_t)c->r[4],(int32_t)c->r[7]); // 800BD150
  c->r[3]=divw((int32_t)c->r[0],(int32_t)c->r[7]); // 800BD154
  c->r[4]=c->r[4]+0x00000001u; // 800BD158
  c->r[0]=c->r[3]+0x00000001u; // 800BD15C
  c->r[6]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[6]); // 800BD160
  c->r[3]=c->r[6]^0x80000000u; // 800BD164
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800BD168
  c->r[3]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[4]); // 800BD16C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800BD170
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 800BD174
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[5]); // 800BD178
  c->r[3]=c->r[3]^0x80000000u; // 800BD17C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800BD180
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[3]);} // 800BD184
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 800BD188
  c->r[4]=c->r[5]^0x80000000u; // 800BD18C
  W32(c->r[1]+0x00000014u,c->r[4]); // 800BD190
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800BD194
  c->r[0]=c->r[0]^0x80000000u; // 800BD198
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 800BD19C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800BD1A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD1A4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 800BD1A8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800BD1AC
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[2]);} // 800BD1B0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 800BD1B4
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[1]);} // 800BD1B8
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800BD1BC
L_800BD1C0:;
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD1C0
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD1C4
  {uint32_t ea=c->r[2]+0xFFFF9CD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD1C8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800BD1CC
  fcmp(c,0,c->f[1],c->f[0]); // 800BD1D0
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[1]);} // 800BD1D4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BD1D8
  if (!crb(c,2)) { goto L_800BD27C; } // 800BD1DC
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 800BD1E0
  goto L_800BD27C; // 800BD1E4
L_800BD1E8:;
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD1E8
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD1EC
  fcmp(c,0,c->f[2],c->f[1]); // 800BD1F0
  if (!crb(c,1)) { goto L_800BD254; } // 800BD1F4
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD1F8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800BD1FC
  fcmp(c,0,c->f[0],c->f[1]); // 800BD200
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 800BD204
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BD208
  if (!crb(c,2)) { goto L_800BD254; } // 800BD20C
  c->r[30]=0u+0x80620000u; // 800BD210
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[1]);} // 800BD214
  c->r[30]=c->r[30]+0x00007688u; // 800BD218
  c->r[4]=0u+0x00000003u; // 800BD21C
  c->r[3]=R32(c->r[30]+0x00000014u); // 800BD220
  c->lr=0x800BD228u; f_80083604(c); // 800BD224
  cmps(c,0,(int32_t)c->r[3],0); // 800BD228
  if (crb(c,2)) { goto L_800BD254; } // 800BD22C
  c->r[3]=R32(c->r[30]+0x00000014u); // 800BD230
  c->r[4]=0u+0x00000003u; // 800BD234
  c->lr=0x800BD23Cu; f_8008358C(c); // 800BD238
  cmps(c,0,(int32_t)c->r[3],0); // 800BD23C
  if (!crb(c,2)) { goto L_800BD254; } // 800BD240
  c->r[3]=R32(c->r[30]+0x00000014u); // 800BD244
  c->r[4]=0u+0x00000003u; // 800BD248
  c->r[5]=0u+0x00001388u; // 800BD24C
  c->lr=0x800BD254u; f_80083504(c); // 800BD250
L_800BD254:;
  {uint32_t ea=c->r[31]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD254
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD258
  fcmp(c,0,c->f[2],c->f[1]); // 800BD25C
  if (!crb(c,1)) { goto L_800BD27C; } // 800BD260
  {uint32_t ea=c->r[2]+0xFFFF9CDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD264
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800BD268
  fcmp(c,0,c->f[0],c->f[1]); // 800BD26C
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800BD270
  if (!crb(c,0)) { goto L_800BD27C; } // 800BD274
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[1]);} // 800BD278
L_800BD27C:;
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD27C
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD280
  {uint32_t ea=c->r[2]+0xFFFF9CE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD284
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 800BD288
  fcmp(c,0,c->f[2],c->f[1]); // 800BD28C
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[2]);} // 800BD290
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BD294
  if (!crb(c,2)) { goto L_800BD2A8; } // 800BD298
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 800BD29C
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 800BD2A0
  goto L_800BD2BC; // 800BD2A4
L_800BD2A8:;
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD2A8
  fcmp(c,0,c->f[2],c->f[0]); // 800BD2AC
  if (!crb(c,0)) { goto L_800BD2BC; } // 800BD2B0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 800BD2B4
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 800BD2B8
L_800BD2BC:;
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD2BC
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD2C0
  {uint32_t ea=c->r[2]+0xFFFF9CE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD2C4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800BD2C8
  fcmp(c,0,c->f[2],c->f[1]); // 800BD2CC
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[2]);} // 800BD2D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BD2D4
  if (!crb(c,2)) { goto L_800BD2E8; } // 800BD2D8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 800BD2DC
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 800BD2E0
  goto L_800BD2FC; // 800BD2E4
L_800BD2E8:;
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD2E8
  fcmp(c,0,c->f[2],c->f[0]); // 800BD2EC
  if (!crb(c,0)) { goto L_800BD2FC; } // 800BD2F0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 800BD2F4
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 800BD2F8
L_800BD2FC:;
  {uint32_t ea=c->r[31]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD2FC
  {uint32_t ea=c->r[31]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD300
  {uint32_t ea=c->r[31]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD304
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BD308
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800BD30C
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[1]);} // 800BD310
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD314
  fcmp(c,0,c->f[1],c->f[0]); // 800BD318
  if (!crb(c,1)) { goto L_800BD328; } // 800BD31C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800BD320
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[0]);} // 800BD324
L_800BD328:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BD328
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800BD32C
  if (crb(c,2)) { goto L_800BD358; } // 800BD330
  {uint32_t ea=c->r[31]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD334
  {uint32_t ea=c->r[2]+0xFFFF9CE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD338
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD33C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800BD340
  fcmp(c,0,c->f[1],c->f[0]); // 800BD344
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[1]);} // 800BD348
  if (!crb(c,1)) { goto L_800BD378; } // 800BD34C
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 800BD350
  goto L_800BD378; // 800BD354
L_800BD358:;
  {uint32_t ea=c->r[31]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD358
  {uint32_t ea=c->r[2]+0xFFFF9CE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD35C
  {uint32_t ea=c->r[2]+0xFFFF9CECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD360
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800BD364
  fcmp(c,0,c->f[1],c->f[0]); // 800BD368
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[1]);} // 800BD36C
  if (!crb(c,0)) { goto L_800BD378; } // 800BD370
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 800BD374
L_800BD378:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BD378
  c->r[3]=c->r[31]|c->r[31]; // 800BD37C
  c->r[5]=c->r[31]+0x00000078u; // 800BD380
  c->lr=0x800BD388u; f_800BD674(c); // 800BD384
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800BD388
  c->r[3]=c->r[31]|c->r[31]; // 800BD38C
  c->r[5]=c->r[31]+0x0000007Cu; // 800BD390
  c->lr=0x800BD398u; f_800BD674(c); // 800BD394
  c->r[4]=R32(c->r[31]+0x000003A0u); // 800BD398
  c->r[3]=c->r[31]|c->r[31]; // 800BD39C
  c->r[5]=c->r[31]+0x00000080u; // 800BD3A0
  c->lr=0x800BD3A8u; f_800BD674(c); // 800BD3A4
  c->r[4]=R32(c->r[31]+0x000003A4u); // 800BD3A8
  c->r[3]=c->r[31]|c->r[31]; // 800BD3AC
  c->r[5]=c->r[31]+0x00000084u; // 800BD3B0
  c->lr=0x800BD3B8u; f_800BD674(c); // 800BD3B4
  c->r[3]=R16(c->r[31]+0x000003BEu); // 800BD3B8
  c->r[0]=rotl(c->r[3],0)&0x00002000u; cr0(c,c->r[0]); // 800BD3BC
  if (crb(c,2)) { goto L_800BD4D4; } // 800BD3C0
  {uint32_t ea=c->r[2]+0xFFFF9CD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD3C4
  {uint32_t ea=c->r[31]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD3C8
  fcmp(c,0,c->f[1],c->f[0]); // 800BD3CC
  if (!crb(c,2)) { goto L_800BD4D4; } // 800BD3D0
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD3D4
  {uint32_t ea=c->r[2]+0xFFFF9CF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD3D8
  fcmp(c,0,c->f[1],c->f[0]); // 800BD3DC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BD3E0
  if (!crb(c,2)) { goto L_800BD40C; } // 800BD3E4
  {uint32_t ea=c->r[2]+0xFFFF9CF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD3E8
  fcmp(c,0,c->f[1],c->f[0]); // 800BD3EC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BD3F0
  if (!crb(c,2)) { goto L_800BD40C; } // 800BD3F4
  c->r[0]=c->r[3]|0x00004000u; // 800BD3F8
  c->r[3]=0u+0x00000001u; // 800BD3FC
  W16(c->r[31]+0x00000074u,c->r[3]); // 800BD400
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BD404
  goto L_800BD4BC; // 800BD408
L_800BD40C:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD40C
  {uint32_t ea=c->r[2]+0xFFFF9CF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD410
  fcmp(c,0,c->f[1],c->f[0]); // 800BD414
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BD418
  if (!crb(c,2)) { goto L_800BD448; } // 800BD41C
  {uint32_t ea=c->r[2]+0xFFFF9CF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD420
  fcmp(c,0,c->f[1],c->f[0]); // 800BD424
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BD428
  if (!crb(c,2)) { goto L_800BD448; } // 800BD42C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BD430
  c->r[3]=0u+0x00000002u; // 800BD434
  W16(c->r[31]+0x00000074u,c->r[3]); // 800BD438
  c->r[0]=c->r[0]|0x00004000u; // 800BD43C
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BD440
  goto L_800BD4BC; // 800BD444
L_800BD448:;
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD448
  {uint32_t ea=c->r[2]+0xFFFF9CF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD44C
  fcmp(c,0,c->f[1],c->f[0]); // 800BD450
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BD454
  if (!crb(c,2)) { goto L_800BD484; } // 800BD458
  {uint32_t ea=c->r[2]+0xFFFF9CF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD45C
  fcmp(c,0,c->f[1],c->f[0]); // 800BD460
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BD464
  if (!crb(c,2)) { goto L_800BD484; } // 800BD468
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BD46C
  c->r[3]=0u+0x00000003u; // 800BD470
  W16(c->r[31]+0x00000074u,c->r[3]); // 800BD474
  c->r[0]=c->r[0]|0x00004000u; // 800BD478
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BD47C
  goto L_800BD4BC; // 800BD480
L_800BD484:;
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD484
  {uint32_t ea=c->r[2]+0xFFFF9CF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD488
  fcmp(c,0,c->f[1],c->f[0]); // 800BD48C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BD490
  if (!crb(c,2)) { goto L_800BD4BC; } // 800BD494
  {uint32_t ea=c->r[2]+0xFFFF9CF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD498
  fcmp(c,0,c->f[1],c->f[0]); // 800BD49C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BD4A0
  if (!crb(c,2)) { goto L_800BD4BC; } // 800BD4A4
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BD4A8
  c->r[3]=0u+0x00000004u; // 800BD4AC
  W16(c->r[31]+0x00000074u,c->r[3]); // 800BD4B0
  c->r[0]=c->r[0]|0x00004000u; // 800BD4B4
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BD4B8
L_800BD4BC:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BD4BC
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 800BD4C0
  cmps(c,0,(int32_t)c->r[0],16384); // 800BD4C4
  if (!crb(c,2)) { goto L_800BD4D4; } // 800BD4C8
  c->r[0]=R16(c->r[31]+0x00000074u); // 800BD4CC
  W16(c->r[31]+0x00000076u,c->r[0]); // 800BD4D0
L_800BD4D4:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BD4D4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800BD4D8
  c->r[30]=R32(c->r[1]+0x00000048u); // 800BD4DC
  c->lr=c->r[0]; // 800BD4E0
  c->r[1]=c->r[1]+0x00000050u; // 800BD4E4
  return; // 800BD4E8
}

// fn_800BD4EC
void f_800BD4EC(Ctx* __restrict c) {
  f_801F4F28(c); return; // 800BD4EC
}

// fn_800BD4F0
void f_800BD4F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD4F0
  c->r[0]=c->lr; // 800BD4F4
  c->r[5]=0u+0x00000000u; // 800BD4F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD4FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD500
  c->r[31]=c->r[3]|c->r[3]; // 800BD504
  c->r[3]=0u+0x0000032Fu; // 800BD508
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BD50C
  c->r[4]=c->r[4]+0x0000010Cu; // 800BD510
  c->lr=0x800BD518u; f_8024EE50(c); // 800BD514
  cmps(c,0,(int32_t)c->r[3],0); // 800BD518
  if (crb(c,2)) { goto L_800BD528; } // 800BD51C
  c->r[3]=0u+0x00000000u; // 800BD520
  goto L_800BD5B0; // 800BD524
L_800BD528:;
  c->r[4]=R32(c->r[31]+0x00000398u); // 800BD528
  c->r[3]=0u+0x00000330u; // 800BD52C
  c->r[5]=0u+0x00000000u; // 800BD530
  c->r[4]=c->r[4]+0x0000010Cu; // 800BD534
  c->lr=0x800BD53Cu; f_8024EE50(c); // 800BD538
  cmps(c,0,(int32_t)c->r[3],0); // 800BD53C
  if (crb(c,2)) { goto L_800BD54C; } // 800BD540
  c->r[3]=0u+0x00000000u; // 800BD544
  goto L_800BD5B0; // 800BD548
L_800BD54C:;
  c->r[4]=R32(c->r[31]+0x0000039Cu); // 800BD54C
  c->r[3]=0u+0x00000330u; // 800BD550
  c->r[5]=0u+0x00000000u; // 800BD554
  c->r[4]=c->r[4]+0x0000010Cu; // 800BD558
  c->lr=0x800BD560u; f_8024EE50(c); // 800BD55C
  cmps(c,0,(int32_t)c->r[3],0); // 800BD560
  if (crb(c,2)) { goto L_800BD570; } // 800BD564
  c->r[3]=0u+0x00000000u; // 800BD568
  goto L_800BD5B0; // 800BD56C
L_800BD570:;
  c->r[4]=R32(c->r[31]+0x000003A0u); // 800BD570
  c->r[3]=0u+0x00000330u; // 800BD574
  c->r[5]=0u+0x00000000u; // 800BD578
  c->r[4]=c->r[4]+0x0000010Cu; // 800BD57C
  c->lr=0x800BD584u; f_8024EE50(c); // 800BD580
  cmps(c,0,(int32_t)c->r[3],0); // 800BD584
  if (crb(c,2)) { goto L_800BD594; } // 800BD588
  c->r[3]=0u+0x00000000u; // 800BD58C
  goto L_800BD5B0; // 800BD590
L_800BD594:;
  c->r[4]=R32(c->r[31]+0x000003A4u); // 800BD594
  c->r[3]=0u+0x00000330u; // 800BD598
  c->r[5]=0u+0x00000000u; // 800BD59C
  c->r[4]=c->r[4]+0x0000010Cu; // 800BD5A0
  c->lr=0x800BD5A8u; f_8024EE50(c); // 800BD5A4
  c->r[0]=cntlz(c->r[3]); // 800BD5A8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BD5AC
L_800BD5B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD5B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD5B4
  c->lr=c->r[0]; // 800BD5B8
  c->r[1]=c->r[1]+0x00000010u; // 800BD5BC
  return; // 800BD5C0
}

// fn_800BD5C4
void f_800BD5C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD5C4
  c->r[0]=c->lr; // 800BD5C8
  c->r[4]=0u+0x00000000u; // 800BD5CC
  c->r[7]=0u+0x803D0000u; // 800BD5D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD5D4
  c->r[0]=R16(c->r[3]+0x000003BEu); // 800BD5D8
  W16(c->r[3]+0x000003BCu,c->r[4]); // 800BD5DC
  c->r[4]=c->r[1]+0x00000008u; // 800BD5E0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 800BD5E4
  W16(c->r[3]+0x000003BEu,c->r[0]); // 800BD5E8
  {uint32_t ea=c->r[7]+0x000004E0u; c->r[6]=R32(ea); c->r[7]=ea;} // 800BD5EC
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BD5F0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BD5F4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BD5F8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BD5FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BD600
  c->lr=0x800BD608u; f_800BD618(c); // 800BD604
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD608
  c->lr=c->r[0]; // 800BD60C
  c->r[1]=c->r[1]+0x00000020u; // 800BD610
  return; // 800BD614
}

// fn_800BD618
void f_800BD618(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD618
  c->r[0]=c->lr; // 800BD61C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD620
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD624
  c->r[31]=c->r[4]|c->r[4]; // 800BD628
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BD62C
  c->r[30]=c->r[3]|c->r[3]; // 800BD630
  c->r[3]=c->r[31]|c->r[31]; // 800BD634
  c->lr=0x800BD63Cu; f_802B9FDC(c); // 800BD638
  cmps(c,0,(int32_t)c->r[3],0); // 800BD63C
  if (crb(c,2)) { goto L_800BD65C; } // 800BD640
  c->r[3]=R32(c->r[31]+0x00000000u); // 800BD644
  c->r[0]=R32(c->r[31]+0x00000004u); // 800BD648
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800BD64C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800BD650
  c->r[0]=R32(c->r[31]+0x00000008u); // 800BD654
  W32(c->r[30]+0x00000024u,c->r[0]); // 800BD658
L_800BD65C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD65C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD660
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BD664
  c->lr=c->r[0]; // 800BD668
  c->r[1]=c->r[1]+0x00000010u; // 800BD66C
  return; // 800BD670
}

// fn_800BD674
void f_800BD674(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD674
  c->r[0]=c->lr; // 800BD678
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BD67C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800BD680
  c->r[31]=c->r[5]|c->r[5]; // 800BD684
  W32(c->r[1]+0x00000028u,c->r[30]); // 800BD688
  c->r[30]=c->r[4]|c->r[4]; // 800BD68C
  W32(c->r[1]+0x00000024u,c->r[29]); // 800BD690
  c->r[29]=c->r[3]|c->r[3]; // 800BD694
  c->lr=0x800BD69Cu; f_8024E040(c); // 800BD698
  {uint32_t ea=c->r[29]+0x00000088u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BD69C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD6A0
  {uint32_t ea=c->r[2]+0xFFFF9D00u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD6A4
  c->f[1]=c->ps1[1]=S(std::fma(c->f[3],c->f[1],c->f[0])); // 800BD6A8
  fcmp(c,0,c->f[1],c->f[2]); // 800BD6AC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 800BD6B0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BD6B4
  if (!crb(c,2)) { goto L_800BD6D4; } // 800BD6B8
  c->r[0]=0u+0x00000001u; // 800BD6BC
  W8(c->r[30]+0x0000001Cu,c->r[0]); // 800BD6C0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD6C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800BD6C8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 800BD6CC
  goto L_800BD6E8; // 800BD6D0
L_800BD6D4:;
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD6D4
  fcmp(c,0,c->f[1],c->f[0]); // 800BD6D8
  if (!crb(c,1)) { goto L_800BD6E8; } // 800BD6DC
  c->r[0]=0u+0x00000000u; // 800BD6E0
  W8(c->r[30]+0x0000001Cu,c->r[0]); // 800BD6E4
L_800BD6E8:;
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 800BD6E8
  cmps(c,0,(int32_t)c->r[0],0); // 800BD6EC
  if (crb(c,2)) { goto L_800BD764; } // 800BD6F0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD6F4
  c->r[3]=R32(c->r[30]+0x0000010Cu); // 800BD6F8
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800BD6FC
  c->lr=0x800BD704u; f_802519A8(c); // 800BD700
  c->r[4]=0u+0x803A0000u; // 800BD704
  c->r[3]=R32(c->r[30]+0x0000010Cu); // 800BD708
  c->r[4]=c->r[4]+0xFFFFCF70u; // 800BD70C
  c->r[4]=c->r[4]+0x0000002Cu; // 800BD710
  c->lr=0x800BD718u; f_80256EC4(c); // 800BD714
  c->r[31]=c->r[3]|c->r[3]; // 800BD718
  c->r[3]=R32(c->r[30]+0x0000010Cu); // 800BD71C
  c->r[4]=c->r[31]|c->r[31]; // 800BD720
  c->r[5]=c->r[1]+0x00000014u; // 800BD724
  c->lr=0x800BD72Cu; f_8025EA54(c); // 800BD728
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD72C
  c->r[4]=c->r[31]|c->r[31]; // 800BD730
  {uint32_t ea=c->r[29]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD734
  c->r[5]=c->r[1]+0x00000008u; // 800BD738
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD73C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BD740
  c->r[3]=R32(c->r[1]+0x00000018u); // 800BD744
  W32(c->r[1]+0x00000008u,c->r[0]); // 800BD748
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BD74C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800BD750
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800BD754
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BD758
  c->r[3]=R32(c->r[30]+0x0000010Cu); // 800BD75C
  c->lr=0x800BD764u; f_8025E9C0(c); // 800BD760
L_800BD764:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BD764
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800BD768
  c->r[30]=R32(c->r[1]+0x00000028u); // 800BD76C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800BD770
  c->lr=c->r[0]; // 800BD774
  c->r[1]=c->r[1]+0x00000030u; // 800BD778
  return; // 800BD77C
}

// fn_800BD780
void f_800BD780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD780
  c->r[0]=c->lr; // 800BD784
  cmps(c,0,(int32_t)c->r[3],0); // 800BD788
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD78C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD790
  c->r[31]=c->r[4]|c->r[4]; // 800BD794
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BD798
  c->r[30]=c->r[3]|c->r[3]; // 800BD79C
  if (crb(c,2)) { goto L_800BD7BC; } // 800BD7A0
  c->r[4]=0u+0x00000000u; // 800BD7A4
  c->lr=0x800BD7ACu; f_8026A06C(c); // 800BD7A8
  cmps(c,0,(int32_t)c->r[31],0); // 800BD7AC
  if (!crb(c,1)) { goto L_800BD7BC; } // 800BD7B0
  c->r[3]=c->r[30]|c->r[30]; // 800BD7B4
  c->lr=0x800BD7BCu; f_8026A268(c); // 800BD7B8
L_800BD7BC:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD7BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD7C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BD7C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD7C8
  c->lr=c->r[0]; // 800BD7CC
  c->r[1]=c->r[1]+0x00000010u; // 800BD7D0
  return; // 800BD7D4
}

// fn_800BD7D8
void f_800BD7D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD7D8
  c->r[0]=c->lr; // 800BD7DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BD7E0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800BD7E4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800BD7E8
  c->r[4]=0u+0x00000000u; // 800BD7EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BD7F0
  c->r[31]=c->r[3]|c->r[3]; // 800BD7F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BD7F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BD7FC
  c->lr=0x800BD804u; f_801F57D0(c); // 800BD800
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BD804
  c->r[3]=c->r[31]|c->r[31]; // 800BD808
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800BD80C
  c->ctr=c->r[12]; // 800BD810
  if (true) { c->lr=0x800BD818u; dispatch(c,c->ctr); } // 800BD814
  c->r[3]=c->r[31]|c->r[31]; // 800BD818
  c->lr=0x800BD820u; f_801F4B94(c); // 800BD81C
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BD820
  c->r[4]=0u+0x00000003u; // 800BD824
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD828
  c->r[5]=0u+0x00000020u; // 800BD82C
  c->r[0]=c->r[0]|0x00000800u; // 800BD830
  c->r[3]=0u+0x80550000u; // 800BD834
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800BD838
  c->f[3]=c->f[1]; // 800BD83C
  W8(c->r[31]+0x0000006Cu,c->r[4]); // 800BD840
  c->r[3]=c->r[3]+0x00003D60u; // 800BD844
  {uint32_t ea=c->r[31]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BD848
  c->r[4]=c->r[31]+0x0000002Cu; // 800BD84C
  W8(c->r[31]+0x0000006Du,c->r[5]); // 800BD850
  {uint32_t ea=c->r[2]+0xFFFF9D14u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD854
  c->r[5]=c->r[31]+0x00000030u; // 800BD858
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BD85C
  c->r[6]=0u+0x00000000u; // 800BD860
  c->r[7]=0u+0x00000000u; // 800BD864
  c->lr=0x800BD86Cu; f_801D5488(c); // 800BD868
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BD86C
  c->r[3]=c->r[31]|c->r[31]; // 800BD870
  c->lr=0x800BD878u; f_801F58BC(c); // 800BD874
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BD878
  c->r[29]=0u+0x00000001u; // 800BD87C
  c->r[30]=0u+0x803A0000u; // 800BD880
  W8(c->r[3]+0x0000001Cu,c->r[29]); // 800BD884
  c->r[4]=c->r[30]+0xFFFFD054u; // 800BD888
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BD88C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BD890
  c->lr=0x800BD898u; f_80256EC4(c); // 800BD894
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BD898
  W32(c->r[4]+0x000000E4u,c->r[3]); // 800BD89C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD8A0
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BD8A4
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800BD8A8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BD8AC
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800BD8B0
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BD8B4
  c->lr=0x800BD8BCu; f_802501B0(c); // 800BD8B8
  W8(c->r[31]+0x0000006Fu,c->r[29]); // 800BD8BC
  c->r[3]=c->r[31]|c->r[31]; // 800BD8C0
  c->lr=0x800BD8C8u; f_801F56F4(c); // 800BD8C4
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BD8C8
  c->r[3]=c->r[31]|c->r[31]; // 800BD8CC
  c->r[12]=R32(c->r[12]+0x00000050u); // 800BD8D0
  c->ctr=c->r[12]; // 800BD8D4
  if (true) { c->lr=0x800BD8DCu; dispatch(c,c->ctr); } // 800BD8D8
  c->r[3]=0u+0x805D0000u; // 800BD8DC
  c->r[4]=c->r[31]+0x0000002Cu; // 800BD8E0
  c->r[3]=c->r[3]+0x000078B0u; // 800BD8E4
  c->lr=0x800BD8ECu; f_802351CC(c); // 800BD8E8
  c->r[4]=R32(c->r[31]+0x00000394u); // 800BD8EC
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800BD8F0
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)112); // 800BD8F4
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BD8F8
  W32(c->r[31]+0x00000444u,c->r[29]); // 800BD8FC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800BD900
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800BD904
  W16(c->r[31]+0x000003BEu,c->r[0]); // 800BD908
  c->lr=0x800BD910u; f_8024E174(c); // 800BD90C
  W32(c->r[31]+0x00000438u,c->r[3]); // 800BD910
  c->r[4]=0u+0x00000000u; // 800BD914
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BD918
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BD91C
  c->lr=0x800BD924u; f_80259C78(c); // 800BD920
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 800BD924
  c->r[29]=0u+0x00000000u; // 800BD928
  c->r[30]=c->r[30]+0xFFFFD054u; // 800BD92C
  W8(c->r[31]+0x00000079u,c->r[29]); // 800BD930
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BD934
  c->r[4]=c->r[30]+0x00000009u; // 800BD938
  W8(c->r[31]+0x00000078u,c->r[0]); // 800BD93C
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BD940
  c->lr=0x800BD948u; f_80256EC4(c); // 800BD944
  W8(c->r[31]+0x0000007Au,c->r[3]); // 800BD948
  c->r[4]=c->r[30]+0x0000000Fu; // 800BD94C
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BD950
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BD954
  c->lr=0x800BD95Cu; f_80256EC4(c); // 800BD958
  W8(c->r[31]+0x0000007Bu,c->r[3]); // 800BD95C
  c->r[4]=c->r[30]+0x00000015u; // 800BD960
  c->r[3]=R32(c->r[31]+0x00000394u); // 800BD964
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 800BD968
  c->lr=0x800BD970u; f_80256EC4(c); // 800BD96C
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD970
  c->r[4]=0u+0x00010000u; // 800BD974
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BD978
  W8(c->r[31]+0x0000007Cu,c->r[3]); // 800BD97C
  c->r[3]=c->r[31]|c->r[31]; // 800BD980
  W32(c->r[31]+0x00000080u,c->r[0]); // 800BD984
  W8(c->r[31]+0x00000074u,c->r[29]); // 800BD988
  W8(c->r[31]+0x00000075u,c->r[29]); // 800BD98C
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800BD990
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800BD994
  c->lr=0x800BD99Cu; f_800BE670(c); // 800BD998
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800BD99C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BD9A0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800BD9A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BD9A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BD9AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BD9B0
  c->lr=c->r[0]; // 800BD9B4
  c->r[1]=c->r[1]+0x00000030u; // 800BD9B8
  return; // 800BD9BC
}

// fn_800BD9C0
void f_800BD9C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD9C0
  c->r[0]=c->lr; // 800BD9C4
  W32(c->r[1]+0x00000084u,c->r[0]); // 800BD9C8
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800BD9CC
  c->r[31]=c->r[3]|c->r[3]; // 800BD9D0
  W32(c->r[1]+0x00000078u,c->r[30]); // 800BD9D4
  W32(c->r[1]+0x00000074u,c->r[29]); // 800BD9D8
  c->lr=0x800BD9E0u; f_800BE26C(c); // 800BD9DC
  c->r[12]=R32(c->r[31]+0x000000B0u); // 800BD9E0
  c->r[3]=c->r[31]|c->r[31]; // 800BD9E4
  c->r[12]=R32(c->r[12]+0x00000068u); // 800BD9E8
  c->ctr=c->r[12]; // 800BD9EC
  if (true) { c->lr=0x800BD9F4u; dispatch(c,c->ctr); } // 800BD9F0
  c->r[3]=c->r[31]|c->r[31]; // 800BD9F4
  c->lr=0x800BD9FCu; f_801F4C0C(c); // 800BD9F8
  c->r[3]=c->r[31]|c->r[31]; // 800BD9FC
  c->lr=0x800BDA04u; f_800BE4C0(c); // 800BDA00
  c->r[3]=c->r[31]|c->r[31]; // 800BDA04
  c->lr=0x800BDA0Cu; f_801F56F4(c); // 800BDA08
  c->r[0]=R8(c->r[31]+0x0000006Fu); // 800BDA0C
  c->r[29]=0u+0x00000001u; // 800BDA10
  cmps(c,0,(int32_t)c->r[0],0); // 800BDA14
  if (!crb(c,2)) { goto L_800BDA20; } // 800BDA18
  c->r[29]=0u+0x00000000u; // 800BDA1C
L_800BDA20:;
  c->r[0]=R16(c->r[31]+0x000003BEu); // 800BDA20
  c->r[0]=rotl(c->r[0],0)&0x00000180u; // 800BDA24
  cmps(c,0,(int32_t)c->r[0],128); // 800BDA28
  if (!crb(c,2)) { goto L_800BDA58; } // 800BDA2C
  c->r[3]=0u+0x80620000u; // 800BDA30
  c->r[3]=c->r[3]+0x00007688u; // 800BDA34
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BDA38
  cmps(c,0,(int32_t)c->r[3],0); // 800BDA3C
  if (crb(c,2)) { goto L_800BDA58; } // 800BDA40
  c->r[4]=0u+0x00000002u; // 800BDA44
  c->lr=0x800BDA4Cu; f_80037670(c); // 800BDA48
  cmps(c,0,(int32_t)c->r[3],0); // 800BDA4C
  if (crb(c,2)) { goto L_800BDA58; } // 800BDA50
  c->r[29]=0u+0x00000000u; // 800BDA54
L_800BDA58:;
  cmps(c,0,(int32_t)c->r[29],0); // 800BDA58
  if (crb(c,2)) { goto L_800BDBB0; } // 800BDA5C
  c->r[0]=R32(c->r[31]+0x00000080u); // 800BDA60
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800BDA64
  if (!crb(c,2)) { goto L_800BDA90; } // 800BDA68
  c->r[4]=0u+0x803A0000u; // 800BDA6C
  c->r[3]=0u+0x80550000u; // 800BDA70
  c->r[4]=c->r[4]+0xFFFFD054u; // 800BDA74
  c->r[5]=0u+0x00000004u; // 800BDA78
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BDA7C
  c->r[6]=0u+0x00000000u; // 800BDA80
  c->r[4]=c->r[4]+0x0000001Bu; // 800BDA84
  c->lr=0x800BDA8Cu; f_8018D3E4(c); // 800BDA88
  W32(c->r[31]+0x00000080u,c->r[3]); // 800BDA8C
L_800BDA90:;
  c->r[4]=R32(c->r[31]+0x00000080u); // 800BDA90
  cmpu(c,0,c->r[4],0x0000FFFFu); // 800BDA94
  if (crb(c,2)) { goto L_800BDBCC; } // 800BDA98
  c->r[29]=0u+0x80550000u; // 800BDA9C
  c->r[5]=0u+0x00000000u; // 800BDAA0
  c->r[3]=c->r[29]+0xFFFFC848u; // 800BDAA4
  c->lr=0x800BDAACu; f_8018E2D4(c); // 800BDAA8
  c->r[3]=c->r[31]|c->r[31]; // 800BDAAC
  c->r[4]=0u+0x00000000u; // 800BDAB0
  c->lr=0x800BDAB8u; f_80039840(c); // 800BDAB4
  c->r[4]=0u+0x803A0000u; // 800BDAB8
  c->r[5]=c->r[1]+0x00000030u; // 800BDABC
  c->r[4]=c->r[4]+0xFFFFD054u; // 800BDAC0
  c->r[6]=0u+0x00000001u; // 800BDAC4
  c->r[4]=c->r[4]+0x0000001Fu; // 800BDAC8
  c->lr=0x800BDAD0u; f_80257018(c); // 800BDACC
  c->r[5]=0u+0x803A0000u; // 800BDAD0
  {uint32_t ea=c->r[5]+0xFFFFCFE4u; c->r[9]=R32(ea); c->r[5]=ea;} // 800BDAD4
  c->r[30]=0u+0x00000000u; // 800BDAD8
  c->r[3]=c->r[1]+0x00000020u; // 800BDADC
  c->r[8]=R32(c->r[5]+0x00000004u); // 800BDAE0
  c->r[4]=c->r[1]+0x00000014u; // 800BDAE4
  c->r[0]=R32(c->r[5]+0x00000008u); // 800BDAE8
  c->r[5]=c->r[1]+0x00000008u; // 800BDAEC
  W32(c->r[1]+0x00000020u,c->r[30]); // 800BDAF0
  c->r[6]=c->r[1]+0x00000030u; // 800BDAF4
  c->r[7]=0u+0x00000000u; // 800BDAF8
  W32(c->r[1]+0x00000024u,c->r[30]); // 800BDAFC
  W32(c->r[1]+0x00000028u,c->r[30]); // 800BDB00
  W32(c->r[1]+0x00000014u,c->r[30]); // 800BDB04
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BDB08
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 800BDB0C
  W32(c->r[1]+0x00000008u,c->r[9]); // 800BDB10
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 800BDB14
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BDB18
  c->lr=0x800BDB20u; f_8002BE64(c); // 800BDB1C
  c->r[4]=R32(c->r[31]+0x00000080u); // 800BDB20
  c->r[3]=c->r[29]+0xFFFFC848u; // 800BDB24
  c->r[5]=c->r[1]+0x00000030u; // 800BDB28
  c->lr=0x800BDB30u; f_8018DEB8(c); // 800BDB2C
  c->r[0]=R8(c->r[31]+0x00000074u); // 800BDB30
  cmps(c,0,(int32_t)c->r[0],0); // 800BDB34
  if (crb(c,2)) { goto L_800BDBCC; } // 800BDB38
  c->r[3]=c->r[13]+0xFFFFAB58u; // 800BDB3C
  c->lr=0x800BDB44u; f_80035554(c); // 800BDB40
  {uint32_t ea=c->r[31]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BDB44
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDB48
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800BDB4C
  fcmp(c,0,c->f[1],c->f[0]); // 800BDB50
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[1]);} // 800BDB54
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BDB58
  if (!crb(c,2)) { goto L_800BDB64; } // 800BDB5C
  W8(c->r[31]+0x00000074u,c->r[30]); // 800BDB60
L_800BDB64:;
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDB64
  {uint32_t ea=c->r[31]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDB68
  c->r[0]=R8(c->r[31]+0x00000075u); // 800BDB6C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800BDB70
  cmps(c,0,(int32_t)c->r[0],0); // 800BDB74
  if (!crb(c,2)) { goto L_800BDB84; } // 800BDB78
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDB7C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800BDB80
L_800BDB84:;
  {uint32_t ea=c->r[2]+0xFFFF9D1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDB84
  c->r[3]=0u+0x80550000u; // 800BDB88
  c->r[4]=R32(c->r[31]+0x00000080u); // 800BDB8C
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BDB90
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800BDB94
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BDB98
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[0]);} // 800BDB9C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BDBA0
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800BDBA4
  c->lr=0x800BDBACu; f_8018EBA0(c); // 800BDBA8
  goto L_800BDBCC; // 800BDBAC
L_800BDBB0:;
  c->r[4]=R32(c->r[31]+0x00000080u); // 800BDBB0
  cmpu(c,0,c->r[4],0x0000FFFFu); // 800BDBB4
  if (crb(c,2)) { goto L_800BDBCC; } // 800BDBB8
  c->r[3]=0u+0x80550000u; // 800BDBBC
  c->r[5]=0u+0x00000001u; // 800BDBC0
  c->r[3]=c->r[3]+0xFFFFC848u; // 800BDBC4
  c->lr=0x800BDBCCu; f_8018E2D4(c); // 800BDBC8
L_800BDBCC:;
  c->r[3]=c->r[31]|c->r[31]; // 800BDBCC
  c->lr=0x800BDBD4u; f_800BE728(c); // 800BDBD0
  c->r[0]=R32(c->r[1]+0x00000084u); // 800BDBD4
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800BDBD8
  c->r[30]=R32(c->r[1]+0x00000078u); // 800BDBDC
  c->r[29]=R32(c->r[1]+0x00000074u); // 800BDBE0
  c->lr=c->r[0]; // 800BDBE4
  c->r[1]=c->r[1]+0x00000080u; // 800BDBE8
  return; // 800BDBEC
}

// fn_800BDBF0
void f_800BDBF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDBF0
  c->r[0]=c->lr; // 800BDBF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BDBF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BDBFC
  c->r[31]=c->r[3]|c->r[3]; // 800BDC00
  c->r[4]=R32(c->r[3]+0x00000394u); // 800BDC04
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800BDC08
  c->lr=0x800BDC10u; f_802501B0(c); // 800BDC0C
  c->r[3]=c->r[31]|c->r[31]; // 800BDC10
  c->r[4]=0u+0x00000000u; // 800BDC14
  c->lr=0x800BDC1Cu; f_801F5244(c); // 800BDC18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BDC1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BDC20
  c->lr=c->r[0]; // 800BDC24
  c->r[1]=c->r[1]+0x00000010u; // 800BDC28
  return; // 800BDC2C
}

