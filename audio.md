# Audio

This doc covers the audio source pipeline -- both the **music
sequences** (BGM, in `S1_music.sbk`) and the **instrument banks** (SFX
+ BGM samples, in `B1_sounds1.ctl/.tbl` and `B1_sounds2.ctl/.tbl`).

The big picture is the same for both: nothing audio-related is
committed under `src/audio/`. The 47 BGM tracks, the 117/322 per-bank
waveforms, and the aggregate `.c` files are all extracted from the
baserom on demand into `build/src/audio/`. User-supplied overrides
live in two committed directories:

* [src/audio/midis/](src/audio/midis/) -- drop a `.mid` to add or
  override a music sequence.
* [src/audio/instruments/](src/audio/instruments/) -- drop a
  `.aifc` to override an instrument-bank waveform.

For background on the file formats themselves (`ALSeqFile`,
`ALBankFile`, compressed-MIDI bytecode, VADPCM, `ALCMidiHdr`, etc.) see
[MUSIC_AND_SFX_DISCOVERIES.md](MUSIC_AND_SFX_DISCOVERIES.md).

---

# Part 1: Music sequences (`S1_music.sbk`)

---

## TL;DR

* Nothing under [src/audio/S1_music/](src/audio/S1_music/) is committed
  -- the directory doesn't exist in the repo. The 47 base sequences
  live only in `baserom.<version>.z64` and are extracted on demand into
  `build/src/audio/S1_music/`.
* The `_sbk.c` aggregate file is also a build artifact:
  `build/src/audio/S1_music_sbk.c`.
* To add a new song, drop a standard MIDI Type 1 `.mid` into
  [src/audio/midis/](src/audio/midis/) and rebuild.
* If your `.mid`'s filename stem matches a base sequence's name (e.g.
  `Hyrule.mid`), it **overrides** that sequence. Any other name appends
  it as a new sequence at the next free index.
* Both overrides and appends break ROM byte-identity (no backup-ref
  recompression, no Nintendo-leftover pad bytes). Removing the `.mid`
  restores byte-match automatically on the next build.

---

## Build pipeline

```
                          baserom.<v>.z64
                                 │
                                 │  tools/extractMusicSequences.py
                                 │   (auto-runs at parse time when the
                                 │    manifest is missing or any file
                                 │    under src/audio/midis/ is newer)
                                 ▼
       ┌─── src/audio/midis/*.mid  (committed user input)
       │           │
       │           │  tools/mid_to_cseq.py  (per .mid)
       │           ▼
       │     [.cseq.bin]  →  tools/disassemble_cseq.py
       │                                  │
       ▼                                  ▼
build/src/audio/S1_music.manifest.json   build/src/audio/S1_music/seq_NN_<Name>.cseq.s
                                 │
                                 │  tools/assemble_cseq.py
                                 ▼
build/src/audio/S1_music/seq_NN_<Name>.cseq.bin
                                 │
                                 │  tools/binToInc.py
                                 ▼
build/src/audio/S1_music/seq_NN_<Name>.cseq.inc.c
                                 │
                                 │  #include from
                                 ▼
build/src/audio/S1_music_sbk.c   (tools/gen_sbk_c.py)
                                 │
                                 │  custom Make rule (C compile)
                                 ▼
build/src/audio/S1_music_sbk.o   →  linked into the ROM
```

The `extract` step writes both the per-sequence `.cseq.s` files and a
small `S1_music.manifest.json` with `(idx, name, suffix, logical_len,
physical_len)` for every entry. `gen_sbk_c.py` reads only the manifest
to emit the C aggregate-struct layout; the sequence bytes themselves
flow through the per-sequence `#include` chain. See
[Makefile](Makefile) for the wiring.

---

## Adding a new MIDI

1. Author or export your sequence as a standard MIDI Type 1 file.
2. Drop the file into `src/audio/midis/`. Use a descriptive filename
   without spaces -- the stem becomes the sequence's symbol suffix.
3. `make`. The build system detects the new `.mid`, runs
   `tools/extractMusicSequences.py`, which calls
   [tools/mid_to_cseq.py](tools/mid_to_cseq.py) on each user `.mid` and
   appends the result to the bank.

```
src/audio/midis/MyNewSong.mid
        ↓ make
build/src/audio/S1_music/seq_47_MyNewSong.cseq.s
build/src/audio/S1_music_sbk.c   ← seq_count bumped to 48
```

The new sequence is loadable by index (47 in the example). To add a
matching `gmMusicID` enum entry so it's loadable by symbolic name, edit
[src/gm/gmsound.h](src/gm/gmsound.h) -- the extractor reads that file
to derive the base 47 names but does *not* round-trip new ones into it.

---

## Overriding a base sequence

The 47 baserom sequences are named after their `gmMusicID` short names
(see the table below). If the stem of your `.mid` filename **exactly
matches** one of these names, the build replaces that sequence's bytes
with the converted output of your `.mid`. Index, suffix, and load-id
stay the same; only the bytes change.

```
src/audio/midis/Hyrule.mid       ← overrides base sequence #9 (Hyrule)
```

This is the workflow for retuning, remixing, or replacing a stock
track. The `gmMusicID` enum doesn't need updating since the slot id
is unchanged.

### Caveat: byte-identity is broken when overriding

The matching ROM build matches the original baserom byte-for-byte. The
extracted `.cseq.s` files round-trip back to byte-identical
`.cseq.bin`, including Nintendo's `0xFE A B L` *backup-ref*
compression and the 1-3 byte non-zero pad bytes between sequences.

A `.mid` round-trip via `mid_to_cseq.py` produces:

* **No backup-refs** -- output is uncompressed (typically ~2× the
  baserom size for the same musical content).
* **No leftover pad bytes** -- only the natural 4-byte alignment.

So overriding *any* sequence shifts the `.sbk` layout and the ROM hash
no longer matches `baserom.<v>.z64`. Adding new sequences has the same
effect (the seqArray grows). Both are fine for hacks, mods, or
authoring, but mean you can't `make validate` against the original
ROM.

**To return to a byte-identical build, simply remove the `.mid` from
`src/audio/midis/`.** Make detects the directory mtime change, re-runs
extraction, and the original baserom slice is restored.

---

## Base sequence names (override targets for `S1_music`)

These come from [src/gm/gmsound.h](src/gm/gmsound.h)'s `gmMusicID`
enum. Drop a `.mid` with one of these stems into `src/audio/midis/` to
override that sequence:

| idx | filename stem      | idx | filename stem            |
|-----|--------------------|-----|--------------------------|
| 0   | `Pupupu`           | 24  | `BossEntry`              |
| 1   | `Zebes`            | 25  | `Last`                   |
| 2   | `Inishie`          | 26  | `1PBonusStage`           |
| 3   | `InishieHurry`     | 27  | `1PStageClear`           |
| 4   | `Sector`           | 28  | `1PBonusStageClear`      |
| 5   | `Jungle`           | 29  | `1PGameClear`            |
| 6   | `Castle`           | 30  | `1PBonusStageFailure`    |
| 7   | `Yamabuki`         | 31  | `1PGameEndChoice`        |
| 8   | `Yoster`           | 32  | `1PGameOver`             |
| 9   | `Hyrule`           | 33  | `Opening`                |
| 10  | `BattleSelect`     | 34  | `Explain`                |
| 11  | `WinDefault`       | 35  | `1PIntro`                |
| 12  | `WinMario`         | 36  | `Zako`                   |
| 13  | `WinMetroid`       | 37  | `Metal`                  |
| 14  | `WinDonkey`        | 38  | `Ending`                 |
| 15  | `WinKirby`         | 39  | `Staffroll`              |
| 16  | `WinFox`           | 40  | `Message`                |
| 17  | `WinMother`        | 41  | `1PChallenger`           |
| 18  | `WinYoshi`         | 42  | `TrainingMode`           |
| 19  | `WinFZero`         | 43  | `Data`                   |
| 20  | `WinPMonsters`     | 44  | `ModeSelect`             |
| 21  | `WinZelda`         | 45  | `Hammer`                 |
| 22  | `Results`          | 46  | `Star`                   |
| 23  | `BossStage`        |     |                          |

Filenames are case-sensitive. Both `.mid` and `.midi` extensions are
recognized.

---

## Round-tripping a base sequence to `.mid` for editing

To pull an existing sequence into a DAW:

1. Build once (`make`) so the per-sequence `.cseq.s` files exist under
   `build/src/audio/S1_music/`.
2. Convert the one you want:

   ```
   python3 tools/cseq_to_mid.py build/src/audio/S1_music/seq_09_Hyrule.cseq.s -o Hyrule.mid
   ```

3. Open `Hyrule.mid` in any DAW. It's a normal Type 1 MIDI file:
   backup-refs are expanded, NoteOn-with-duration is split into
   NoteOn+NoteOff pairs, tempo regains its standard length byte, and
   the cseq's custom `0xFF 0x2D` / `0xFF 0x2E` loop markers are
   converted to standard text markers.
4. To put your edits back in, save out the `.mid` and drop it into
   `src/audio/midis/Hyrule.mid` (override path above).

The cseq slot index (0..15 inside each sequence's track header) is
preserved through `cseq_to_mid.py` ↔ `mid_to_cseq.py` via a
`cseq_track_NN` track-name meta event in the `.mid`, so per-track
channel routing and instrument banks survive the round trip.

---

## Music tools

| Tool                               | Direction                       | Notes                                                     |
|------------------------------------|--------------------------------|-----------------------------------------------------------|
| `tools/extractMusicSequences.py`   | baserom + `midis/*.mid` → build | Auto-run by Make. Writes manifest + per-sequence `.cseq.s`. |
| `tools/disassemble_cseq.py`        | `.cseq.bin` → `.cseq.s`         | Byte-faithful. Round-trips through `assemble_cseq.py`.    |
| `tools/assemble_cseq.py`           | `.cseq.s` → `.cseq.bin`         | Inverse of disassemble.                                   |
| `tools/cseq_to_mid.py`             | `.cseq.bin`/`.cseq.s` → `.mid`  | For DAW export.                                           |
| `tools/mid_to_cseq.py`             | `.mid` → `.cseq.bin`/`.cseq.s`  | For DAW import. Output is uncompressed.                   |
| `tools/binToInc.py`                | `.cseq.bin` → `.cseq.inc.c`     | Hex initializer for `#include`.                           |
| `tools/gen_sbk_c.py`               | manifest → `_sbk.c`             | Aggregate struct + per-sequence `#include`s.              |

---

# Part 2: Instrument banks (`B1_sounds{1,2}.ctl/.tbl`)

The same "extract everything to `build/`, allow targeted overrides"
shape, applied to Nintendo's audio instrument banks. Each bank is a
pair: `.ctl` describes the bank/instrument/sound graph (with an
ALADPCMBook codebook + ALADPCMloop loop info per waveform), and `.tbl`
holds the concatenated VADPCM sample bytes.

Two banks today:

| Bank | Waveforms (US) | Instruments (US) | US bytes match | JP bytes match |
|------|----------------|------------------|----------------|----------------|
| `B1_sounds1` | 117 | 42 | yes | yes (.ctl/.tbl shared with US) |
| `B1_sounds2` | 322 | 1 (percussion) | yes | yes (Japanese voice samples; .ctl/.tbl differ from US but extract cleanly) |

The pipeline is fully version-aware: each invocation reads from
`baserom.<v>.z64`, so the same source path produces version-correct
bytes for both US and JP without per-version source forks.

## Build pipeline

```
                          baserom.<v>.z64
                                 │
                                 │  tools/extract_ctl_bank.py
                                 │   (auto-runs at parse time when the
                                 │    .ctl.json manifest is missing or
                                 │    src/audio/instruments/ is newer)
                                 ▼
       ┌─── src/audio/instruments/wave_NNN.aifc  (committed user input)
       │           │
       │           │  tools/audio_codec.py: read_aifc()
       │           ▼
       │     [VADPCM bytes + codebook + loop]
       │                                  │
       ▼                                  ▼
build/src/audio/<bank>.ctl.json  build/src/audio/<bank>/wave_NNN.aifc   (Nintendo AIFC)
build/src/audio/<bank>.tbl.bin   build/src/audio/<bank>/wave_NNN.aiff   (decoded preview)
        │                                 │
        │  tools/gen_ctl_c.py             │  (preview only -- not used by build)
        ▼                                 │
build/src/audio/<bank>_ctl.c              │
        │                                 │
        │  C compile (custom Make rule)   │
        ▼                                 │
build/src/audio/<bank>_ctl.o              │
build/assets/<bank>.tbl.o (objcopy bin)   │
        │                                 │
        ▼                                 │
   linked into the ROM
```

The `.aifc` files are full Nintendo-flavor AIFC: VADPCM bytes verbatim
in the SSND chunk, codebook in a `VADPCMCODES` APPL chunk, loop info
in a `VADPCMLOOPS` APPL chunk, plus a COMM chunk with the bank's
sample rate. The `.aiff` files are decoded uncompressed PCM; click them
to listen in any audio app, but **the build doesn't read them** -- they
exist purely as previews next to each waveform.

## Adding/overriding a waveform

1. Pick the waveform you want to replace by index. Example:
   `wave_023` is index 23 in `B1_sounds1`. Browse
   `build/src/audio/B1_sounds1/wave_*.aiff` to listen and decide.
2. Author your replacement and save it as a Nintendo-flavor `.aifc`
   matching the index: `src/audio/instruments/wave_023.aifc`.
3. `make`. The build sees the new `.aifc` (via the directory-mtime
   check), re-runs extraction, and the override slots into place.

Filename stem `wave_NNN` (zero-padded to 3 digits) is the only
override convention right now -- a numeric index is unambiguous and
the only thing the manifest currently tracks per waveform.

### Why AIFC and not AIFF/WAV?

Nintendo's audio engine only accepts VADPCM (block-encoded ADPCM with
a per-bank codebook). The `.aifc` format carries those VADPCM bytes
intact along with the codebook, so a "self-override" (drop in the
exact AIFC the extractor produced) is byte-identical to the baserom.

Going `.aiff/.wav -> .aifc` requires a VADPCM **encoder** plus
`tabledesign` to fit a new codebook to the audio. The encoder side
isn't shipped here yet -- v1 only ships the **decoder** (used to make
the AIFF previews). So today, overriding a waveform requires
hand-authoring or external-tool-generating an AIFC. A future v2 can
add encoder + tabledesign to accept raw audio overrides; the pipeline
shape doesn't change.

### Caveat: byte-identity is broken when overriding

A self-override of an extracted AIFC keeps the ROM matching, since the
VADPCM bytes round-trip exactly. Any other override (different
content, different size, different codebook) makes the rebuilt `.tbl`
shift the offsets of every subsequent waveform, and the regenerated
`.ctl` reflects that. The ROM hash will differ from
`baserom.<v>.z64`. As with the music side, **removing the `.aifc`
restores byte-match automatically** on the next build.

## Instrument bank tools

| Tool | Direction | Notes |
|------|-----------|-------|
| `tools/audio_codec.py` | library | VADPCM decoder + AIFC reader/writer + AIFF writer. |
| `tools/extract_ctl_bank.py` | baserom + `instruments/*.aifc` → build | Auto-run by Make. Walks the .ctl, splits the .tbl, applies overrides, writes per-wave AIFC + AIFF + manifest + rebuilt .tbl. |
| `tools/decode_ctl.py` | library + legacy CLI | The original .ctl walker; still used as a library by extract_ctl_bank.py and gen_ctl_c.py. |
| `tools/gen_ctl_c.py` | manifest → `_ctl.c` | Aggregate struct + offsetof initializer; mirrors decode_ctl.py output 1:1. |
