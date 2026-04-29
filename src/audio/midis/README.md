# `src/audio/midis/` — music sequence overrides

Drop standard MIDI Type 1 `.mid` files here to add or override BGM
sequences in `S1_music.sbk`. The build system reads this directory
on every `make`; nothing else lives here -- no committed extracted
sequences, no build artifacts.

For the full pipeline, override semantics, byte-match caveats, and
DAW round-trip recipe, see [`audio.md`](../../../audio.md) at the
repo root.

## Quick reference

* **Add a new sequence**: drop `MyNewSong.mid` here, run `make`. It
  appears as a new sequence at the next free slot index.
* **Override a base sequence**: drop a `.mid` whose **filename stem
  matches a `gmMusicID` short name** (e.g. `Hyrule.mid` overrides
  base sequence #9). Index, suffix, and load-id stay the same; only
  the bytes change.
* **Round-trip an existing sequence into a DAW**: build first
  (so the per-sequence `.cseq.s` files exist), then convert with
  `tools/cseq_to_mid.py`. See [`audio.md`](../../../audio.md) for
  the exact incantation.

## Byte-match caveat

Either path (override or append) breaks byte-identity with
`baserom.<v>.z64`: `mid_to_cseq.py` produces uncompressed output
(no Nintendo backup-ref compression). **Removing the `.mid` from
this directory restores byte-match automatically** on the next
build.

## Filename → override mapping

The 47 base sequences are indexed by `gmMusicID` short names from
[`src/gm/gmsound.h`](../../gm/gmsound.h). Examples:

| stem (case-sensitive) | overrides | stem | overrides |
|---|---|---|---|
| `Pupupu.mid` | seq #0 (Dream Land) | `Hyrule.mid` | seq #9 (Hyrule Castle) |
| `Castle.mid` | seq #6 (Peach's Castle) | `Sector.mid` | seq #4 (Sector Z) |
| `Yoster.mid` | seq #8 (Yoshi's Island) | `BattleSelect.mid` | seq #10 (VS-mode select) |
| `MyNewSong.mid` | *appends as a new sequence* | | |

Full table is in [`audio.md`](../../../audio.md).
