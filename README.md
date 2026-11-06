# Zack & Wiki: Quest for Barbaros' Treasure (Wii, NTSC-U) - native recompilation

A static recompilation of **Zack & Wiki: Quest for Barbaros' Treasure** for Wii (disc, NTSC-U, `RTZE08`, Capcom, 2007)
to native code. The game's PowerPC executable is translated to C++ and runs on Windows (and Linux) with a small runtime
that replaces the Wii hardware, IOS and the DSP.

**No game data is included.** You need your own copy of the game as a disc image (`.iso` or `.ciso`).

## Status

Work in progress. Boots through the safety screen, Capcom logo, title, TV settings check, save select and the story
intro (Linux headless tests). The mouse is the Wii Remote pointer (left = A, right = B). Wii Remote motions (twisting,
tilting, swinging, shaking) are simulated with the mouse (hold the middle button or Ctrl), the keyboard (Q/E, R/F,
Shift) or a gamepad's right stick and LT, and a real Wii Remote paired over Bluetooth (or on a DolphinBar in mode 4)
works directly: buttons, motion and, with a sensor bar, the pointer.

## Download

Get the Windows zip or the Linux (SteamOS / Steam Deck) tar.gz from
[Releases](https://github.com/darkuni/zak-wiki-recomp/releases) (test builds: GitHub Actions). Unpack, put your disc
image in the same folder and run `zackwiki.exe` (Windows) or `./zackwiki` (Linux): the first start builds the `game`
folder from it. The zip's `README.txt` has the controls.

## Building

Same as the other Wii recomps (Geometry Wars: Galaxies, TARGET: Terror): the generated C++ is in `src/gen`; GitHub
Actions cross-compiles the Windows exe with mingw-w64 and SDL2 and builds the Linux one with `-DUSE_SDL=ON`. See [NOTES.md](NOTES.md) for how the game was named,
recompiled and what the runtime needed.

## Disclaimer

Unofficial fan project, **not affiliated with, endorsed by, or sponsored by** Capcom or Nintendo. *Zack & Wiki* and
all related names and marks belong to their respective owners. This repository and its releases contain no game data;
`src/gen` and the release exe contain code machine-translated from the game's executable.

## License

The project's own code is released under the [MIT License](LICENSE). Bundled third-party components keep their own
licenses; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
