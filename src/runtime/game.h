// Per-game constants for Zack & Wiki: Quest for Barbaros' Treasure (Wii disc, NTSC-U, RTZE08).
// Addresses come from config/symbols.txt (dtk + naming passes vs TARGET: Terror, Geometry Wars: Galaxies
// and Chocobo's Dungeon); r13 offsets were read from the instruction that loads the variable in the named
// SDK function.
#pragma once
#define GAME_NAME        "Zack & Wiki"
#define GAME_EXE         "zackwiki"
#define GAME_INI         "zackwiki.ini"

#define G_AX_RESUME_CB          0x802A4F44u   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x8028B0ECu   // DecrementerExceptionCallback
#define G_IOS_FREE              0x802D2934u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x802931E0u   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x5208u       // __OSGetInterruptHandler: lwz r4,-0x5208(r13)
#define G_SDA_IOS_HEAP          0x58B4u       // __ios_Ipc2: lwz r3,-0x58B4(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_802931E0
#define G_FN_IOS_FREE           f_802D2934
