# Zack & Wiki (RTZE08, Wii disc, NTSC-U) - native recomp notes

Same recompiler and runtime as TARGET: Terror and Geometry Wars: Galaxies.

## Source
- main.dol sha1 6364cfd9c311ab5249584cae6674e60f678233bd, .text 0x8002B520 (3.4 MB), entry 0x8000403C.
- RVL SDK: OS/DVD Apr 24 2007, GX Nov 30 2006, WPAD/KPAD May 17 2007, HBM Jul 9 2007, THP; NW4R LYT (Aug 2007).

## Naming
- dtk: 13,803 functions. xmatch vs TARGET: Terror, Geometry Wars and Chocobo's Dungeon: 2,881 named.
- dtk merged 13 two-entry stubs (`b next` followed by the real function, entered at either address); they are
  split in symbols.txt. SCGetAspectRatio 0x802D6D78 by byte match with Geometry Wars.

## game.h constants
- __AXDSPResumeCallback 0x802A4F44, DecrementerExceptionCallback 0x8028B0EC, iosFree 0x802D2934, OSExitThread
  0x802931E0, SelectThread idle loop branch 0x80292E4C, interrupt table r13-0x5208, IOS heap r13-0x58B4.

## Runtime changes for this game
- **Presenting the XFB the video interface shows.** The game keeps three XFBs and copies into all of them, but one
  is a capture buffer it never displays (black most of the time). The renderer used to present every EFB->XFB copy,
  so screens flickered or looked black. Each XFB address now has its own texture and the one at the VI top-field
  base is presented; an XFB the game fills with the CPU (no copy goes there) is decoded from RAM (YUYV).
  `XFB_LAST=1` restores the old behaviour.
- Retrace pacing (from Geometry Wars 0.5) and precise decrementer sleeps (from TARGET: Terror).

## Input
- KPADRead (pos @0x20, dpd_valid_fg @0x5E, core buttons), one new sample per video frame (see TARGET: Terror).
  Mouse = pointer, left = A, right = B.
- TODO: Wii Remote motions (acc @0x0C) for the item gestures.

## Testing
- `POINTER=x,y` fixes the pointer, `AUTOPRESS_FRAMES=1 AUTOPRESS=A@400-406,...` presses buttons, `SHOT_EVERY`,
  `FRAMEDUMP=n` (one line per draw of frame n), `VIXFB=1` (VI framebuffer vs copies).
