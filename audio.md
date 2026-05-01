# Audio

This doc covers the audio source pipeline -- both the **music
sequences** (BGM, in `S1_music.sbk`) and the **instrument banks** (SFX
+ BGM samples, in `B1_sounds1.ctl/.tbl` and `B1_sounds2.ctl/.tbl`).

The big picture is the same for all of them: nothing audio-related is
committed under `src/audio/`. The 47 BGM tracks, the 117/322 per-bank
waveforms, the aggregate `.c` files, and the FGM (sound-effect-engine)
blobs are all extracted from the baserom on demand into
`build/<v>/src/audio/`. User-supplied overrides live in three committed
directories:

* [src/audio/midis/](src/audio/midis/) -- drop a `.mid` to add or
  override a music sequence.
* [src/audio/instruments/](src/audio/instruments/) -- drop a
  `.aifc` to override an instrument-bank waveform.
* [src/audio/fgm/](src/audio/fgm/) -- drop a whole-file `.bin` to
  override one of the FGM data files.

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
  `build/<v>/src/audio/S1_music/`.
* The `_sbk.c` aggregate file is also a build artifact:
  `build/<v>/src/audio/S1_music_sbk.c`.
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
build/<v>/src/audio/S1_music.manifest.json   build/<v>/src/audio/S1_music/seq_NN_<Name>.cseq.s
                                 │
                                 │  tools/assemble_cseq.py
                                 ▼
build/<v>/src/audio/S1_music/seq_NN_<Name>.cseq.bin
                                 │
                                 │  tools/binToInc.py
                                 ▼
build/<v>/src/audio/S1_music/seq_NN_<Name>.cseq.inc.c
                                 │
                                 │  #include from
                                 ▼
build/<v>/src/audio/S1_music_sbk.c   (tools/gen_sbk_c.py)
                                 │
                                 │  custom Make rule (C compile)
                                 ▼
build/<v>/src/audio/S1_music_sbk.o   →  linked into the ROM
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
build/<v>/src/audio/S1_music/seq_47_MyNewSong.cseq.s
build/<v>/src/audio/S1_music_sbk.c   ← seq_count bumped to 48
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
   `build/<v>/src/audio/S1_music/`.
2. Convert the one you want:

   ```
   python3 tools/cseq_to_mid.py build/<v>/src/audio/S1_music/seq_09_Hyrule.cseq.s -o Hyrule.mid
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
build/<v>/src/audio/<bank>.ctl.json  build/<v>/src/audio/<bank>/wave_NNN.aifc   (Nintendo AIFC)
build/<v>/src/audio/<bank>.tbl.bin   build/<v>/src/audio/<bank>/wave_NNN.aiff   (decoded preview)
        │                                 │
        │  tools/gen_ctl_c.py             │  (preview only -- not used by build)
        ▼                                 │
build/<v>/src/audio/<bank>_ctl.c              │
        │                                 │
        │  C compile (custom Make rule)   │
        ▼                                 │
build/<v>/src/audio/<bank>_ctl.o              │
build/<v>/assets/<v>/<bank>.tbl.o (objcopy bin)   │
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
   `build/<v>/src/audio/B1_sounds1/wave_*.aiff` to listen and decide.
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

---

# Part 3: FGM blobs (`fgm.unk`, `fgm.tbl`, `fgm.ucd`)

The "FGM" group is three opaque-ish data files used by the
sound-effect engine. They live just past the instrument banks in the
ROM and are loaded together by the audio init in
[src/sys/audio.c](src/sys/audio.c).

| File | US size | JP size | Format |
|------|---------|---------|--------|
| `fgm.unk` |  2 080 B | 2 080 B | Per-SFX **LFO/modulator** parameter table. `{ u32 count; FGMUnkEntry entries[count]; u8 _trail[]; }`, count=100 (US) / 95 (JP). Each 16-byte entry: `{ u8 shape, target, postproc, init_phase; f32 period, amplitude, offset; }`. `shape` selects the LFO waveform (sine / square / saw / sample-and-hold); `target` routes the per-frame output to volume / pitch / pan / scratch register / another voice. See §3 of [MUSIC_AND_SFX_DISCOVERIES.md](MUSIC_AND_SFX_DISCOVERIES.md) for the full enum tables. The file is a fixed 2080-byte buffer; the bytes past `entries[count]` are leftover-from-buffer (preserved verbatim). |
| `fgm.tbl` | 11 728 B | 11 088 B | **Instrument articulations** (envelope/modulator programs). `{ u32 count; s32 offsets[count]; u8 data[]; }` (464 entries US / 454 entries JP). Each entry is bytecode for the EE0C interpreter ([n_env.c:3746](src/libultra/n_audio/n_env.c#L3746)): set vol/pan/pitch, spawn LFO modulators from `fgm.unk` via opcode 0x40, mark/jump for loops. Articulations are **shared** across many `fgm.ucd` voices -- e.g. tbl[3] is the "landing" envelope used by `nSYAudioFGMDonkeyLanding` / `Captain` / `Kirby` / `Link` / `Ness` / etc. Per-entry decomp lists each articulation's `used_by_voices` so you can see which gmFGMVoiceIDs share it. |
| `fgm.ucd` | 19 232 B | 18 384 B | **Voice scripts**, indexed directly by [`gmFGMVoiceID`](src/gm/gmsound.h). Same `{count, offsets[], data}` shape (695 US / 669 JP entries). `syAudioPlayFGM(id)` fetches `fgm.ucd[id]` and runs it through the siz34 interpreter ([n_env.c:4600](src/libultra/n_audio/n_env.c#L4600)) -- a small MIDI-like script: set the articulation slot via `set_articulation` (which fgm.tbl entry to spawn), set channel state (volume / pan / key range), play notes (pitch + duration), end. Per-entry decomp now available with `name` populated from the gmFGMVoiceID enum (where defined; ~94% coverage on US, ~96% on JP -- the unnamed tail entries haven't been attributed yet). |

## Pipeline

```
                          baserom.<v>.z64
                                 │
                                 │  tools/extract_fgm.py
                                 │   (auto-runs at parse time when the
                                 │    extras-dir fingerprint changes)
                                 ▼
       ┌─── src/audio/fgm/{fgm.unk,fgm.tbl,fgm.ucd}.bin   (committed user input)
       │           │
       ▼           ▼
build/<v>/src/audio/fgm.unk.bin
build/<v>/src/audio/fgm.tbl.bin
build/<v>/src/audio/fgm.ucd.bin
        │
        │  objcopy -I binary
        ▼
build/<v>/assets/<v>/fgm.{unk,tbl,ucd}.o   →  linked into the ROM
```

The fingerprint stored in `build/<v>/src/audio/.fgm.stamp.json` records
each override file's name + size + nanosecond mtime. The Makefile
parse-time trigger compares the current state of `src/audio/fgm/` to
this fingerprint via Python (so adds, removals, and edits within the
same wall-clock second all trigger correctly -- second-granularity
`find -newer` was unreliable in tight test loops).

## Overriding

Three override paths, checked in priority order per file:

1. **`src/audio/fgm/fgm.{unk,tbl,ucd}.json`** -- per-entry decomp.
   Each build writes the canonical decomp to
   `build/<v>/src/audio/fgm.{unk,tbl,ucd}.json`; copy one into
   `src/audio/fgm/`, edit any field, and the build picks up your
   version.
2. **`src/audio/fgm/fgm.{unk,tbl,ucd}.bin`** -- whole-file binary
   replacement. The bytes go straight in. Useful for binary-only
   edits.
3. Otherwise the bytes come from the baserom slice.

All three FGM files now have per-entry decomp, with cross-references
between them:

* `fgm.ucd` entries get a `name` field populated from
  [`gmFGMVoiceID`](src/gm/gmsound.h) (when one exists for that index).
* `fgm.tbl` entries get a `used_by_voices` array of
  `[idx, name]` tuples for every fgm.ucd voice that selects this
  articulation via `set_articulation`.
* `fgm.unk` entries get a `used_by_tbl` array of fgm.tbl indices that
  spawn this LFO via the `spawn_mod` opcode.

### Per-entry decomp format (`fgm.tbl.json`)

Each entry is a small SFX program. The decoded form is a list of
instruction rows, each shaped `[op, ...args, wait_frames]`:

```json
{
  "count": 464,
  "total_size": 11728,
  "entries": [
    {
      "idx": 0,
      "program": [
        ["trigger",   0,         0],
        ["pitch",     -750,      0],
        ["unk36",     127,       0],
        ["vol",       60,        2],
        ["vol",       80,        2],
        ["vol",       107,       2],
        ["vol",       127,       2],
        ["vol",       120,       7],
        ...
        ["vol",       15,        7],
        ["end",       0]
      ],
      "tail_hex": ""
    },
    ...
  ]
}
```

The opcodes correspond directly to the cases in
[func_80027460_28060](src/libultra/n_audio/n_env.c#L3746):

| op | args | what it does |
|----|------|--------------|
| `vol` | `<u8>` | set channel volume (0..127); >127 means relative `arg − 64`, clamped |
| `pan` | `<u8>` | set channel pan, same set/relative scheme |
| `pitch` | `<s16>` | pitch in cents; ±1200 range; |arg|>1200 means relative |
| `unk36` | `<u8>` | sets `arg0->unk36` (semantics still TBD) |
| `spawn_mod` | `<u8 id> <varint idx>` | attach an LFO modulator from `fgm.unk[idx]` to slot `id` |
| `stop_mod` | `<u8 id>` | detach modulator at slot `id` |
| `trigger` | `<varint idx>` | begin a sub-sound (consumes a separate ALWhatever array) |
| `end` |  | freeze the program (sets runtime timer to 10000) |
| `mark_loop` |  | save current bytecode position |
| `jump_loop` |  | restore saved position (loops back to `mark_loop`) |

The trailing element of each row is the wait time (in frames) before
the next instruction runs. `tail_hex` captures any zero/leftover bytes
between this entry's last instruction and the next entry's start
offset (some entries are zero-padded by the encoder).

### Per-entry decomp format (`fgm.ucd.json`)

Each entry is a short voice script (MIDI-like). Top-level state
opcodes (`set_articulation`, `set_volume`, `set_pan`, `mark_loop`,
`jump_loop`, `fork_voice`, ...) plus packed "play note" rows where
`pitch_code * 100 - 1300` cents is the note's pitch and `dur_code`
selects the duration:

```json
{
  "count": 695,
  "total_size": 19232,
  "entries": [
    {
      "idx": 0,
      "name": "nSYAudioFGMExplodeS",
      "program": [
        ["set_unk2D", 0],
        ["set_articulation", 7],
        ["set_unk1E", 255],
        ["set_unk1F", 68],
        ["set_unk1E", 33],
        ["set_volume", 220],
        ["note", 3, 7, 20],     // pitch_code=3 (-1000 cents), dur_code=7 (varint timer), timer=20
        ["set_unk1F", 50],
        ["note", 3, 7, 30],
        ["set_unk1F", 20],
        ["note", 3, 7, 85],
        ["stop_voice"]
      ],
      "tail_hex": ""
    },
    ...
  ]
}
```

Note rows: `["note", pitch_code, dur_code, timer]`.
* `pitch_code = 0` → rest (don't play); otherwise pitch in cents =
  `pitch_code * 100 - 1300` (so `pitch_code=13` is 0 cents = the
  reference pitch, `pitch_code=25` is +1200 cents = one octave up).
* `dur_code = 0` → execute immediately; `1..6` → look up
  `siz34_0x12[code-1]` (set earlier by `set_dur_table`); `7` → use the
  varint `timer` directly.

Top-level opcodes: see the
[extract_fgm.py docstring](tools/extract_fgm.py) for the full table
(stop_voice, set_articulation, set_unk1E/1F/22/23/2C/2D, set_volume,
vol_delta, set_pan, pan_delta, fork_voice, mark_loop, jump_loop,
set_t5_neg2400/4800).

`name` is populated from `gmFGMVoiceID` when the index has a
defined enum entry. ~94% of US entries (653 of 695) and ~96% of JP
entries (641 of 669) are named; tail entries past the enum's coverage
have `name: null`.

### Per-entry decomp format (`fgm.unk.json`)

```json
{
  "count": 100,
  "total_size": 2080,
  "entries": [
    {"shape": 7, "target": 12, "postproc": 0, "init_phase": 0,
     "period": 100.0, "amplitude": 190.0, "offset": -200.0},
    ...
  ],
  "trailing_hex": "07 0a 00 00 ..."
}
```

Field meanings are in the table above (or see the
[extract_fgm.py docstring](tools/extract_fgm.py) for the full enum
listing). `used_by_tbl` is the cross-reference back to fgm.tbl entries
that spawn this LFO. `total_size` is fixed at 2080 (matching the
original preallocated buffer).

#### `trailing_hex` is **not undecomped data**

The on-disk file is a fixed 2080-byte buffer. Active entries occupy
`4 + count*16` bytes (1604 on US / 1524 on JP); the remaining 476/556
bytes after `entries[count]` are *stale leftover from a previous
version of the file* -- the bytes match the same 16-byte
`{u8×4, f32×3}` entry shape, but `count` doesn't reach them so the
engine ignores them. The encoder didn't clear the unused tail of the
buffer when writing, leaving the previous draft visible there. We
capture those bytes verbatim in `trailing_hex` so re-encoding produces
byte-identical output. Same pattern as the leftover-buffer pad bytes
in the audio banks.

### Round-trip semantics

* No `.json` override → extract from baserom → byte-identical ROM.
* `*.json` self-override (file copied unchanged) → bytes reconstructed
  identically → byte-identical ROM.
* Edit one field/instruction → ROM diverges in just those bytes;
  per-entry tail/trailing bytes preserved unchanged.
* For `fgm.unk`: changing the count shifts trailing bytes within the
  2080-byte total budget (truncated or zero-padded).
* For `fgm.tbl`: each entry's encoded length depends on its
  instruction list; the offsets table at the head is rebuilt
  automatically. Changing the total entry count is allowed but won't
  byte-match.

Verified for all three files, both versions:

| File | Version | bin → json → bin |
|------|---------|------------------|
| `fgm.unk` | US (count=100) | byte-identical ✓ |
| `fgm.unk` | JP (count=95)  | byte-identical ✓ |
| `fgm.tbl` | US (count=464) | byte-identical ✓ |
| `fgm.tbl` | JP (count=454) | byte-identical ✓ |
| `fgm.ucd` | US (count=695) | byte-identical ✓ |
| `fgm.ucd` | JP (count=669) | byte-identical ✓ |

### Caveat: any override breaks byte-match

`fgm.unk`, `fgm.tbl`, and `fgm.ucd` are linked as raw `.data` blobs;
any change to their bytes flows directly into the ROM. A
self-override (the exact bytes the extractor produced) keeps the ROM
matching; anything else doesn't. Removing the override restores
byte-match.

## FGM tools

| Tool | Direction | Notes |
|------|-----------|-------|
| `tools/extract_fgm.py` | baserom + `fgm/*.json` + `fgm/*.bin` → build | Auto-run by Make. Resolves the override priority (`.json` > `.bin` > baserom) per file, writes per-build `fgm.{unk,tbl,ucd}.json` decomps alongside the binaries, parses `gmFGMVoiceID` from gmsound.h to label fgm.ucd entries, computes cross-references (`used_by_voices` / `used_by_tbl`), and stamps the extras-dir fingerprint for the parse-time trigger. The `decode_*` / `encode_*` helpers (`fgm_unk`, `fgm_tbl`, `fgm_ucd`) are the canonical parsers/serializers. |
