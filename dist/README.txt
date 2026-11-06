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
  Gamepad:  either stick = move the pointer, A = A, B/RT = B, d-pad = d-pad, X/Y = 1/2
  Keyboard: X = A, Z/Space = B, arrows = d-pad, A/S = 1/2
  All:      Start/Enter = +, Back/Backspace = -, Guide/H = HOME
  Not yet:  Wii Remote motions (tilting, twisting, shaking the remote for items) - test build.

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
