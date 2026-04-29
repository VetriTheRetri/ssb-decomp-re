# `src/audio/fgm/` — FGM data overrides

Drop overrides for the FGM (sound-effect engine) data files here.
The build reads this directory on every `make`.

For the full architecture (gmFGMVoiceID → fgm.ucd → fgm.tbl → fgm.unk
layered playback engine), opcode tables, JSON schema, and round-trip
guarantees, see [`audio.md`](../../../audio.md) at the repo root and
section 3 of [`MUSIC_AND_SFX_DISCOVERIES.md`](../../../MUSIC_AND_SFX_DISCOVERIES.md).

## What lives in the three FGM files

| File | What it is | Indexed by |
|------|------------|------------|
| `fgm.unk` | LFO/modulator parameter table | numeric (referenced from fgm.tbl via `spawn_mod`) |
| `fgm.tbl` | Instrument articulation programs (envelope/modulation bytecode) | numeric (referenced from fgm.ucd via `set_articulation`) |
| `fgm.ucd` | Voice scripts -- the actual SFX programs | [`gmFGMVoiceID`](../../gm/gmsound.h) |

## Override paths (priority order, per file)

1. **`fgm.{unk,tbl,ucd}.json`** -- per-entry decomp. Each build writes
   the canonical decomp to `build/src/audio/fgm.{unk,tbl,ucd}.json`
   with cross-references between the three. Copy one here, edit any
   field, the build picks up your version.
2. **`fgm.{unk,tbl,ucd}.bin`** -- whole-file binary replacement.
3. Otherwise the bytes come from the baserom slice.

## Quick examples

### Edit one fgm.ucd voice's volume (using the per-entry JSON)

```bash
# 1. After an initial build, copy the canonical decomp here.
cp build/src/audio/fgm.ucd.json src/audio/fgm/

# 2. Find your voice by name (gmFGMVoiceID populates the `name`
#    field). For example, change nSYAudioFGMExplodeS's volume:
python3 -c '
import json
d = json.load(open("src/audio/fgm/fgm.ucd.json"))
explode = next(e for e in d["entries"] if e["name"] == "nSYAudioFGMExplodeS")
for op in explode["program"]:
    if op[0] == "set_volume":
        op[1] = 200  # was 220
        break
json.dump(d, open("src/audio/fgm/fgm.ucd.json","w"), indent=2)
'

# 3. Rebuild. ROM diverges from baserom; remove the .json to restore.
make
```

### Replace one fgm.unk LFO

`fgm.unk` entries are 16-byte modulator records. Open
`build/src/audio/fgm.unk.json` to see the canonical view (one entry
per line, with `used_by_tbl` showing which articulations spawn each
LFO). Copy it here and edit any `shape` / `target` / `period` /
`amplitude` / `offset` / `init_phase` / `postproc`. The encoder
preserves the file's fixed 2080-byte total and the `trailing_hex`
leftover-from-buffer bytes for byte-match.

## Byte-match notes

* No `.json` or `.bin` override → byte-identical ROM (`make init`
  builds `baserom.<v>.z64` verbatim).
* `*.json` self-override (file copied here unchanged) → ROM still
  byte-identical. The decoder + encoder pair round-trips exactly for
  all three files (verified for both US and JP).
* Edit any field → ROM diverges in just those bytes; cross-references
  and trailing data preserved.
* Remove the override → next `make` auto-restores byte-match.

## Cross-references between the three files

Every JSON the extractor writes already has the cross-refs filled in:

* `fgm.ucd[i].name` ← `gmFGMVoiceID` (when an enum entry exists for
  index `i`; ~94% coverage on US, ~96% on JP).
* `fgm.tbl[i].used_by_voices` ← list of `[voice_idx, voice_name]`
  pairs from each fgm.ucd entry that calls `set_articulation i`.
* `fgm.unk[i].used_by_tbl` ← list of fgm.tbl indices that call
  `spawn_mod (id, i)`.

This makes it easy to see the sharing graph -- e.g. articulation
`tbl[3]` is the universal "landing/footstep" envelope, used by every
character's landing sound.
