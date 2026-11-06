Zack & Wiki: Quest for Barbaros' Treasure (Wii) - native Windows build (static recompilation)  @VERSION@
https://github.com/darkuni/zak-wiki-recomp

No game data is included. You need your own Zack & Wiki disc image (Wii, NTSC-U, RTZE08)
as .iso or .ciso.

Setup
  Put your disc image (.iso or .ciso) in this folder and run zackwiki.exe. On the first start it
  builds the "game" folder from it (a few minutes - the disc is 4.4 GB); after that the disc image isn't
  needed any more.

Requirements: 64-bit Windows 10/11, a GPU with OpenGL 3.3.

Controls (the mouse is the Wii Remote pointer)
  Mouse:    point = Wii Remote pointer, left button = A, right button = B ("Mouse buttons" in the
            settings menu, or controls = mouse_swap in zackwiki.ini, swaps them)
  Gamepad:  left stick = move the pointer, A = A, B/RT/RB = B, d-pad = d-pad, X/Y = 1/2
  Keyboard: X = A, Z/Space = B, arrows = d-pad, A/S = 1/2

Wii Remote motions (levers, keys, saws, bells... the game shows the motion it wants)
  Mouse:    hold the middle button (or Ctrl) and move the mouse: left/right twists the remote,
            up/down tilts its tip up/down; fast moves are swings. Release = back to level.
            Wheel up/down = thrust the remote toward the screen / pull it back.
            (motion_sensitivity in zackwiki.ini sets the turning speed)
  Gamepad:  right stick = twist (left/right) and tilt (up/down), LT/LB = shake
  Keyboard: Q/E = twist left/right, R/F = tilt up/down, Shift = shake

Real Wii Remote (optional)
  Pair it with Windows: Settings > Bluetooth > Add device, press the red SYNC button under the
  battery cover, pick "Nintendo RVL-CNT-01" (skip/leave the PIN empty). A Mayflash DolphinBar
  in mode 4 works too. Start the game (or wait a few seconds): LED 1 lights up and the remote's
  buttons, motions and pointer work. The pointer needs a powered sensor bar (or the DolphinBar)
  under or over the screen; ir_span in zackwiki.ini sets how far you move it to cross the screen.
  wiimote = 0 in zackwiki.ini turns it off.
  This is a test build: tell us on GitHub if your remote is not found or a motion does not work.

Keys
  F1 / Esc (or Start+Back on a gamepad)  settings menu (resolution, widescreen, vsync, MSAA,
                                         texture filtering, mouse buttons, game speed)
  F11 / Alt+Enter                        fullscreen
  Hold Tab (or click the right stick)    fast-forward

Files
  zackwiki.ini        settings (created on first run)
  zackwiki.log        log of the last run - include it with bug reports
  zackwiki_hang.txt   written if no frame is shown for 8 seconds - include it too
  nand\              saves


Unofficial fan project, not affiliated with Capcom or Nintendo.
The exe contains code machine-translated from the game's executable; game data comes from your
own disc image.
System font: Droid Sans replacements from Dolphin (Apache 2.0, see ipl-font-licenses.txt).
