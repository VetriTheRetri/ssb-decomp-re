# Music & SFX Decomp — Discoveries

Working notes on the audio binary segments declared starting at line 2006 of
[smashbrothers.us.yaml](smashbrothers.us.yaml#L2006). Audio runtime is split
between [src/sys/audio.c](src/sys/audio.c) (game-side glue) and
[src/libultra/n_audio/](src/libultra/n_audio/) (Nintendo's `n_audio` library
— a successor to the older `audio` library). All file-format types are the
standard Nintendo N64 audio ones declared in
[include/PR/libaudio.h](include/PR/libaudio.h), per the
[Nintendo 64 Programming Manual ch. 18](https://ultra64.ca/files/documentation/online-manuals/man/pro-man/pro18/index.html).

## 1. The five files

| File | ROM | Size | Format |
|---|---:|---:|---|
| `S1_music.sbk` | 0xB277B0 | 159,248 | `ALSeqFile` — music sequence bank |
| `B1_sounds1.ctl` | 0xB4E5C0 | 26,400 | `ALBankFile` — instrument bank for music (32 kHz) |
| `B1_sounds1.tbl` | 0xB54CE0 | 1,141,104 | Wave-table sample data for `B1_sounds1.ctl` |
| `B1_sounds2.ctl` | 0xC6B650 | 64,416 | `ALBankFile` — single-instrument bank for sound effects (44.1 kHz) |
| `B1_sounds2.tbl` | 0xC7B1F0 | 2,998,752 | Wave-table sample data for `B1_sounds2.ctl` |

Each `.ctl` is followed in ROM immediately by its paired `.tbl`. The Nintendo
audio library treats them as a *pair*: the `.ctl` declares
`ALWaveTable.base` as a byte offset *relative to the start of its `.tbl`*,
and the loader patches those into absolute pointers using the `.tbl`'s ROM
address.

The naming convention is explicit in the file content itself: every file's
`revision` field is two ASCII characters at offset 0:

- `0x5331` = `"S1"` for `ALSeqFile` (`.sbk`)
- `0x4231` = `"B1"` for `ALBankFile` (`.ctl`)

The file extensions echo whichever number that is. `S1` and `B1` together
look like the format-version stamps Nintendo uses; later games / SDKs
revved them but SSB64 stays on `S1` / `B1`.

## 2. File formats

All structs come from [include/PR/libaudio.h](include/PR/libaudio.h#L200-L320).
Internal pointers are stored as **file-relative byte offsets** in ROM and
are converted to absolute RAM pointers at load time.

### 2a. `.sbk` — `ALSeqFile`

```
ALSeqFile {
    s16 revision;           // 0x5331 ("S1")
    s16 seqCount;
    ALSeqData seqArray[seqCount];
}
ALSeqData { u8 *offset; s32 len; }   // offset is file-relative
```

`S1_music.sbk` has `seqCount = 47` — 47 BGM tracks (stage themes, menu music,
victory jingles, etc.). The first sequence starts at 0x17C, exactly past the
header (4 + 47*8 = 380 = 0x17C).

Each sequence is itself an **`ALCMidiHdr`-prefixed compressed MIDI** track,
loaded by [n_alCSeqNew](src/libultra/n_audio/n_env.c#L3429) (the *compressed*
sequence loader, called from
[syAudioMakeBGMPlayers](src/sys/audio.c#L865)). Format:

```
ALCMidiHdr {
    u32 trackOffset[16];    // file-relative offsets to each MIDI track's events
    u32 division;           // ticks per quarter-note (typical: 480)
}
```

Sequence 0 has 11 of 16 tracks valid (channels 0..8, 11, 14) and a division
of 0x1E0 = 480 ticks/quarter — bog-standard MIDI. The track event format is
Nintendo's "compressed MIDI" — running status with implicit deltas, length-
encoded variable-length quantities. Decoder lives in `n_csq.c` (now
inlined into `src/libultra/n_audio/n_env.c` around line 3422).

### 2b. `.ctl` — `ALBankFile`

```
ALBankFile {
    s16 revision;           // 0x4231 ("B1")
    s16 bankCount;
    ALBank *bankArray[bankCount];   // file-relative offsets
}

ALBank {
    s16 instCount;
    u8 flags;               // patched 0->1 by alBnkfNew so banks aren't double-patched
    u8 pad;
    s32 sampleRate;
    ALInstrument *percussion;       // file-relative; may be NULL
    ALInstrument *instArray[instCount];
}

ALInstrument {
    u8 volume, pan, priority, flags;
    u8 tremType, tremRate, tremDepth, tremDelay;
    u8 vibType,  vibRate,  vibDepth,  vibDelay;
    s16 bendRange;
    s16 soundCount;
    ALSound *soundArray[soundCount];
}

ALSound {
    ALEnvelope *envelope;   // attack/decay/release times + attack/decay volumes
    ALKeyMap *keyMap;       // velocity range, key range, key base, detune
    ALWaveTable *wavetable;
    ALPan samplePan;
    u8 sampleVolume;
    u8 flags;
}

ALWaveTable {
    u8 *base;               // offset into the paired .tbl
    s32 len;                // bytes
    u8 type;                // AL_ADPCM_WAVE = 0, AL_RAW16_WAVE = 1
    u8 flags;
    union {
        struct { ALADPCMloop *loop; ALADPCMBook *book; } adpcmWave;
        struct { ALRawLoop  *loop; }                    rawWave;
    } waveInfo;
}
```

For the two banks in this game:

- **`B1_sounds1.ctl`** (music): 1 bank, 43 instruments + percussion,
  `sampleRate = 32000`, 117 unique wavetables, **all VADPCM-compressed**
  (`type == AL_ADPCM_WAVE`). This is the General-MIDI-style instrument
  bank used by every BGM sequence in `S1_music.sbk`.
- **`B1_sounds2.ctl`** (SFX): 1 bank, **1 instrument**, no percussion,
  `sampleRate = 44100`. The single instrument's `soundArray[]` holds every
  sound effect — voice clips, hits, whooshes, etc. — as discrete sounds.
  Pulling SFX through a single ALInstrument lets the SFX player address
  effects by sound index instead of program number, which is how
  [alSoundEffect](src/sys/audio.c#L11)-shaped data and the `gm/gmsound.h`
  constants address them.

### 2c. `.tbl` — wave-table sample data

Just bytes. No header. Each `ALWaveTable.base` is the byte offset within
the file where one waveform starts; `len` says how many bytes long it is.

The format of those bytes is determined by `wavetable->type`:

- **VADPCM** (`AL_ADPCM_WAVE`, type 0): 9-byte frames — 1 byte
  predictor-index/shift + 8 bytes of 4-bit nibble-packed residuals,
  decoded against the per-wavetable `ALADPCMBook` (predictor coefficients).
  The book and (optional) loop point are stored in the `.ctl`, not the
  `.tbl`. All 117 wavetables in `B1_sounds1.ctl` are this type.
- **Raw 16-bit PCM** (`AL_RAW16_WAVE`, type 1): big-endian s16 samples,
  no compression. Used in some games for high-fidelity samples; SSB64
  doesn't appear to have any in `B1_sounds1`.

`B1_sounds2.tbl` (SFX) is 2.86 MB — the biggest single chunk in the ROM
after the relocData blob.

## 3. Loading at runtime

All five files are DMA'd into the audio heap on init by
[syAudioLoadAssets](src/sys/audio.c#L764), then the offset-tables get
"pointerized" by walking the structure and adding the file's RAM address
to every internal pointer:

- [alSeqFileNew](src/sys/audio.c#L297) walks `seqArray[]` and turns each
  file-relative `offset` into an absolute pointer into the loaded `.sbk`.
- [alBnkfNew](src/sys/audio.c#L312) does the same for `bankArray[]`, then
  recurses through every bank → instArray → soundArray, patching pointers
  via [syAudioBnkfPatchBank](src/sys/audio.c#L333) /
  [syAudioBnkfPatchInst](src/sys/audio.c#L360) /
  [syAudioBnkfPatchSound](src/sys/audio.c#L378) /
  [syAudioBnkfPatchWaveTable](src/sys/audio.c#L394). Each level uses the
  `flags` field as a "already-patched" sentinel so cycles or re-init
  don't double-add.
- For `ALWaveTable`s specifically, `wavetable->base` gets the **`.tbl`'s
  RAM address** added (not the `.ctl`'s) — that's what makes the
  `.ctl` ↔ `.tbl` pairing work.

A small bit of cleverness in
[`dSYAudioPublicSettings`](src/sys/audio.c#L91): the struct stores
`ctl_start` / `ctl_end` / `tbl_start` for each bank, but uses
**`<bank>_ctl_ROM_END` for both `ctl_end` AND `tbl_start`**, since they're
the same address (the .ctl and .tbl are contiguous in ROM). That's why
[symbols/linker_constants.txt](symbols/linker_constants.txt) doesn't even
have separate `B1_sounds1_tbl_ROM_START` aliases — splat already emits
`_tbl_ROM_START` from the yaml segment, and the audio code references
`_ctl_ROM_END` instead.

## 4. The "FGM" sibling system

Three more audio-adjacent files live further into ROM and are loaded by
the same [syAudioLoadAssets](src/sys/audio.c#L839):

| File | ROM | Size | Field in `SYAudioSettings` |
|---|---:|---:|---|
| `fgm.unk` | 0xF573D0 | 2,080 | `unk50` / `unk54` |
| `fgm.tbl` | 0xF57BF0 | 11,728 | `fgm_table_start` / `_end` |
| `fgm.ucd` | 0xF5A9C0 | 19,232 | `fgm_ucode_start` / `_end` |

`fgm.tbl` and `fgm.ucd` are both Nintendo's generic "package file" shape:

```
SYAudioPackage {
    s32 count;
    u32 offsets[count];    // file-relative; pointerized at load
    /* ...payload... */
}
```

`fgm.tbl` has `count = 464` entries (US) / `454` (JP); `fgm.ucd` has
`count = 695` (US). Both get their offset arrays patched-in-place by
adding the package's RAM base.

### How the three FGM tables compose

The three FGM tables form a layered playback engine:

```
syAudioPlayFGM(id)           // public API (sys/audio.c)
  ↓
fgm.ucd[id]                  // gmFGMVoiceID-indexed voice script
  ↓ siz34 interpreter (n_env.c:4600)
  │  - set_articulation N    → siz34_0x24 = N (selects fgm.tbl entry)
  │  - set_volume / set_pan / set_unk1E/F / set_dur_table / etc.
  │  - note (pitch_code, dur_code) → spawn EE0C voice from fgm.tbl[siz34_0x24]
  │  - mark_loop / jump_loop / fork_voice / stop_voice
  ↓ for each note
fgm.tbl[siz34_0x24]          // instrument articulation
  ↓ EE0C interpreter (n_env.c:3746)
  │  - vol / pan / pitch / unk36 (envelope shape)
  │  - spawn_mod (id, idx)   → attach LFO from fgm.unk[idx]
  │  - stop_mod / trigger / mark_loop / jump_loop / end
  ↓ each modulator
fgm.unk[idx]                 // LFO/modulator parameters
  // shape, target, period, amplitude, offset (see §3 above)
```

So a single `nSYAudioFGMxxx` voice ID resolves to one fgm.ucd script;
that script selects one (or a few) fgm.tbl articulations as the
"instrument tone"; each articulation can spawn one or more fgm.unk
LFOs for vibrato / tremolo / pitch sweeps.

`fgm.tbl` articulations are **shared across many voices**:
e.g. articulation `tbl[3]` is the universal "landing/footstep"
envelope -- spawned by `nSYAudioFGMDonkeyLanding`,
`nSYAudioFGMCaptainLanding`, `nSYAudioFGMKirbyLanding`,
`nSYAudioFGMLinkLanding`, `nSYAudioFGMNessLanding`, etc.
[tools/extract_fgm.py](tools/extract_fgm.py) writes the
cross-references into each `fgm.tbl.json` entry's `used_by_voices`
field so the sharing graph is visible at a glance.

### `fgm.tbl` bytecode (instrument articulations)

**`fgm.tbl` entries are SFX articulation programs** -- short
instruction streams that the EE0C interpreter at
[func_80027460_28060](src/libultra/n_audio/n_env.c#L3746) executes
per frame. The instruction format:

```
instr  = *p++
timer  = instr & 0x0F                     # delay until next instruction
if timer & 0x8:                            # extended timer (varint)
    v = *p++
    timer = ((timer & 0x7) << 7) | (v & 0x7F)
    if v & 0x80: timer = (timer << 8) | *p++
opcode = instr & 0xF0                      # high nibble selects op
```

Opcodes:

| op | name | args | effect |
|----|------|------|--------|
| 0x00 | `vol` | u8 | set channel volume (0..127); >127 → relative `arg − 64` |
| 0x10 | `pan` | u8 | set channel pan, same set/relative scheme |
| 0x20 | `pitch` | s16 BE | pitch in cents; ±1200 range; |arg|>1200 → relative |
| 0x30 | `unk36` | u8 | sets `arg0->unk36` (semantics still TBD) |
| 0x40 | `spawn_mod` | u8 id, varint idx | attach LFO modulator from `fgm.unk[idx]` to slot `id` |
| 0x50 | `stop_mod` | u8 id | detach modulator at slot `id` |
| 0x60 | `trigger` | varint idx | begin a sub-sound (consumes a separate ALWhatever array) |
| 0x70 | `end` | -- | freeze (sets runtime timer to 10000) |
| 0x80 | `mark_loop` | -- | save current bytecode position |
| 0x90 | `jump_loop` | -- | restore saved position (loops back to `mark_loop`) |

The varint encoding for opcode-arg indices is: first byte; if its MSB
is set, second byte extends the value as `((first & 0x7F) << 8) | second`.

Example -- US entry 0 (a "thud" envelope):

```
trigger 0          ; play sub-sound 0
pitch -750         ; tune down
unk36 127
vol 60   ; wait 2  ; ramp up: 60→80→107→127
vol 80   ; wait 2
vol 107  ; wait 2
vol 127  ; wait 2
vol 120  ; wait 7  ; then a long decay to silence
... (24 more vol steps with varying waits) ...
vol 15   ; wait 7
end
```

This is the classic "set initial state, ramp through a volume
envelope, end" pattern; entries that loop spawn modulators between
`mark_loop` and `jump_loop` for sustained sounds.

### `fgm.ucd` bytecode (voice scripts)

**`fgm.ucd` entries are voice scripts** indexed by `gmFGMVoiceID`.
The siz34 interpreter at
[func_80026B90_27790](src/libultra/n_audio/n_env.c#L4600) runs them.
Two opcode classes:

* **State opcodes** (`instr & 0xF8 >= 0xD0`):

| op | name | args | effect |
|----|------|------|--------|
| 0xD0 | `stop_voice` | -- | end of voice |
| 0xD1 | `set_articulation` | varint | select `fgm.tbl[arg]` for subsequent notes |
| 0xD2 | `set_unk1E` | u8 | -- |
| 0xD3 | `set_unk1F` | u8 | per-note key/voice ID? |
| 0xD4 | `set_dur_table` | 6×varint | fills `siz34_0x12[6]` for note `dur_code` 1..6 lookup |
| 0xD5 | `set_volume` | u8 | channel volume |
| 0xD6 | `vol_delta` | s8 | additive |
| 0xD7 | `set_pan` | u8 | channel pan |
| 0xD8 | `pan_delta` | s8 | additive |
| 0xD9 | `fork_voice` | varint | spawn sub-voice from `fgm.ucd[arg]` (recursive!) |
| 0xDA | `mark_loop` | -- | save bytecode position |
| 0xDB | `jump_loop` | -- | restore (loops back) |
| 0xDC | `set_unk2C` | u8 | -- |
| 0xDD | `unk2C_delta` | s8 | additive |
| 0xDE | `set_unk2D` | u8 | priority/group |
| 0xDF | `set_t5_neg2400` | -- | next note pitch += -2400 cents |
| 0xE0 | `set_t5_neg4800` | -- | next note pitch += -4800 cents |

* **Note-play opcodes** (`instr < 0xD0`): bit-packed `instr =
  (pitch_code << 3) | dur_code`. Pitch in cents = `pitch_code * 100 -
  1300` (so `pitch_code = 13` is the reference pitch 0;
  `pitch_code = 0` means "rest"). Duration code `0` is immediate;
  `1..6` is a runtime lookup into `siz34_0x12[code-1]`; `7` is
  followed by an inline varint timer.

When a note plays, the siz34 interpreter spawns an EE0C voice from
`fgm.tbl[siz34_0x24]` at the computed pitch. So one fgm.ucd voice
script effectively does "select articulation, set channel state,
play notes through that articulation, end."

Example -- US `nSYAudioFGMExplodeS` (entry 0):

```
set_unk2D 0
set_articulation 7
set_unk1E 255
set_unk1F 68
set_unk1E 33
set_volume 220
note pitch_code=3 (-1000 cents) dur=7 timer=20    ; spawn EE0C from tbl[7] at -1000 cents
set_unk1F 50
note pitch_code=3 dur=7 timer=30
set_unk1F 20
note pitch_code=3 dur=7 timer=85
stop_voice
```

I.e., the "small explosion" SFX is three quick low-pitch notes
through articulation 7.

`fgm.unk` is a **per-SFX LFO/modulator parameter table**. Layout is
`{ u32 count; FGMUnkEntry entries[count]; u8 _trail[]; }`. Each
16-byte entry specifies one low-frequency oscillator (sine / square /
sawtooth / sample-and-hold / etc.) and where its output gets written
on each frame (volume / pitch / pan / scratch register / another
voice's field). The FGM microcode dispatches them via opcode `0x40`,
which reads two operands `id, idx` and instantiates `entries[idx]` as
an active modulator attached to the sound effect named by `id`.

```c
typedef struct {                  // 16 bytes
    u8  shape;                    // unk0: LFO waveform
                                  //   0 = sine
                                  //   1 = square
                                  //   2 = sawtooth ramp up
                                  //   3 = sawtooth ramp down
                                  //   4 = random sample-and-hold (RNG#1)
                                  //   5 = random with linear interp (RNG#1)
                                  //   6 = ramp-up one-shot (clamps)
                                  //   7 = ramp-down one-shot (clamps)
                                  //   8 = random sample-and-hold (RNG#2)
    u8  target;                   // unk1: where the per-frame LFO value goes
                                  //   0..9   = scratch register slot (spC0[i])
                                  //   10/11  = SFX volume   (set / add) [0..127]
                                  //   12/13  = SFX pitch    (set / add) [-1200..1200 cents]
                                  //   14/15  = SFX pan      (set / add) [0..127]
                                  //   16..23 = self-modulate this LFO's
                                  //            own period / amplitude / offset / phase
                                  //   24+    = cross-modulate another voice's fields
    u8  postproc;                 // unk2: high nibble: 0=none, 1=add, 2=mul
                                  //       low nibble: scratch register index
                                  //       (always 0 in shipped data; format-only)
    u8  init_phase_q8;            // unk3: initial phase, units of (period / 256)
                                  //       (mostly 0; outliers: 7, 42, 49, 56)
    f32 period;                   // unk4: LFO period, frames
    f32 amplitude;                // unk8: LFO peak-to-peak amplitude / depth
    f32 offset;                   // unkC: LFO center value (DC offset)
} FGMUnkEntry;
```

Both versions ship a fixed-size 2080-byte buffer (`count = 100` US,
`count = 95` JP). The bytes past `entries[count]` are leftover from a
prior version of the file (their pattern matches the same 16-byte
entry shape -- they're stale entries the encoder didn't clear) and we
preserve them verbatim for byte-match.

**Where to look in the engine:**

* [n_env.c:3906](src/libultra/n_audio/n_env.c#L3906) -- opcode 0x40
  copies the entry into a fresh modulator voice (`siz24` struct)
  via fields `0x5..0x10`. `init_phase_q8` is consumed as
  `phase = period * init_phase_q8 / 256` to seed the timer.
* [n_env.c:4078](src/libultra/n_audio/n_env.c#L4078) -- per-frame
  loop ticks each active voice's `phase` counter and computes the
  output value for the chosen waveform shape.
* [n_env.c:4202](src/libultra/n_audio/n_env.c#L4202) -- the
  `postproc` byte (high nibble) selects optional add/mul mixing of a
  scratch-register value into the LFO output before routing.
* [n_env.c:4215](src/libultra/n_audio/n_env.c#L4215) -- the
  `target` byte routes the post-processed value into the active SFX
  state (volume `unk32`, pitch `unk2C`, pan `unk34`) or into another
  voice's parameters for cross-modulation.

This is a textbook modulator architecture: SFX in this engine aren't
just static samples; each can have several LFOs running concurrently
on its volume / pitch / pan, with the per-LFO parameters defined in
this table and selected by the FGM microcode. The float ranges seen
in the shipped data line up with this:

* `period` 30..2600 frames (≈1..87 seconds at 30 fps; long periods are
  for slow ambient breathing-room shifts).
* `amplitude` and `offset` together cover the usual MIDI-style ranges
  (`±1200` cents for pitch LFOs, `0..127` for volume/pan).

"FGM" appears throughout the codebase (`alSoundEffect`,
[lbCommonMakePositionFGM](src/lb/lbcommon.c#L725), `gm/gmsound.h` constants)
as the game's high-level identifier for sound effects — likely Japanese
"効果音" rendered as `FGM` (game manual abbreviation). The `fgm.*` files are
the data side of that subsystem, parallel to but separate from
`B1_sounds2.ctl` (which is the underlying ALBankFile holding the actual
samples). Tracing exactly how an FGM id resolves through `fgm.tbl` /
`fgm.ucd` to a play call on the sounds2 bank is not yet figured out —
flagged below.

## 5. Status

| File | Status | C source |
|---|---|---|
| `S1_music.sbk` | byte-identical | `build/<v>/src/audio/S1_music_sbk.c` (auto-generated from baserom; see §4) |
| `B1_sounds1.ctl` | byte-identical | [src/audio/B1_sounds1_ctl.c](src/audio/B1_sounds1_ctl.c) |
| `B1_sounds1.tbl` | raw bin (waveform data, no decomp needed yet) | -- |
| `B1_sounds2.ctl` | byte-identical (US only) | [src/audio/B1_sounds2_ctl.c](src/audio/B1_sounds2_ctl.c) |
| `B1_sounds2.tbl` | raw bin (US different from JP, both kept as bin) | -- |

`make` produces a byte-identical ROM for both `VERSION=us` and
`VERSION=jp`. `S1_music.sbk` and `B1_sounds1.ctl` are byte-identical
between US and JP, so the same C source serves both. `B1_sounds2.ctl`
differs between versions (different voice samples) -- the C source is
US-only for now; JP keeps the bin extraction.

### Tooling

Following the [Nintendo audio workflow](https://ultra64.ca/files/documentation/online-manuals/man/pro-man/pro18/index.html)
(samples + .inst -> .ctl/.tbl, .seq files -> .sbk), the decomp side is:

- [tools/decode_ctl.py](tools/decode_ctl.py): walks the
  ALBankFile -> ALBank -> ALInstrument -> ALSound graph, captures every
  reachable struct's bytes (including the *non-zero leftover bytes* in
  the implicit pad regions some banks have), emits one big aggregate C
  struct with all internal pointers as `offsetof()` references.
- [tools/decode_sbk.py](tools/decode_sbk.py): walks `ALSeqFile`, emits
  the descriptor with `offsetof()` references and one `#include` line
  per sequence pointing at the per-MIDI hex blob.
- [tools/extractMusicSequences.py](tools/extractMusicSequences.py):
  pulls each MIDI sequence out of the baserom .sbk slice and immediately
  disassembles it (via [disassemble_cseq.py](tools/disassemble_cseq.py),
  see below) into a `.cseq.s` source file under
  `build/<v>/src/audio/<bank>/seq_NN_<Name>.cseq.s`. Filenames combine the
  numeric-index + the `gmMusicID` short name from
  [src/gm/gmsound.h](src/gm/gmsound.h#L30) so the on-disk listing is
  human-readable (e.g. `seq_09_Hyrule.cseq.s`, `seq_38_Ending.cseq.s`).
  Also writes `build/<v>/src/audio/<bank>.manifest.json` with the bank's
  revision, sequence count, and per-sequence (logical_len, physical_len)
  pairs needed to reconstruct the `_sbk.c` file. The Makefile auto-runs
  this script at parse time when the manifest is missing.
- [tools/gen_sbk_c.py](tools/gen_sbk_c.py): emits the
  `build/<v>/src/audio/<bank>_sbk.c` aggregate-struct C source from the
  manifest. The output mirrors the original hand-edited file 1:1 (same
  struct layout, same `offsetof`-based `seqArray` initializer, same
  per-sequence `#include`s); only the comment header differs. The `.c`
  file is a build artifact -- not committed.
- [tools/disassemble_cseq.py](tools/disassemble_cseq.py) /
  [tools/assemble_cseq.py](tools/assemble_cseq.py): byte-faithful
  round-trip between Nintendo's compressed-MIDI bytes and a readable
  text format with `.delta` / `.b` / `.raw` / `.backup` directives.
  Verified round-trip byte-identical on all 47 sequences. Mnemonic
  comments inline (e.g. `ch3 note_on 60 100 dur=240`) are best-effort
  and do not affect round-trip.
- [tools/cseq_to_mid.py](tools/cseq_to_mid.py) /
  [tools/mid_to_cseq.py](tools/mid_to_cseq.py): semantic conversion
  between `.cseq.bin`/`.cseq.s` and standard MIDI Type 1 `.mid` files
  for editing in any DAW. The MIDI direction expands backup-refs,
  re-pairs Nintendo's NoteOn-with-duration into NoteOn+NoteOff, drops
  the `0x03` length byte from tempo, and emits `0x2D`/`0x2E`
  (loopend/loopstart) as standard text markers. The cseq direction
  re-fuses the note pairs into duration form, escapes 0xFE bytes
  passing through `__getTrackByte`, and emits the loopend body raw
  (engine reads it via `*tmpPtr++`, not the escape-aware path).
  Track-slot identity (0..15 in the cseq header) is preserved through
  a `cseq_track_NN` track-name meta. Round-trip is *not* byte-identical
  (Nintendo's backup-ref compression isn't reconstructed), but is
  semantically lossless: the canonical event stream is identical for
  all 47 S1_music sequences.
- [tools/binToInc.py](tools/binToInc.py): trivial `.bin -> hex .inc.c`
  converter shared by the audio-sequence and the (future) waveform
  pipelines.
- [tools/_audio_seq_names.py](tools/_audio_seq_names.py): shared helper;
  parses the `gmMusicID` enum out of the header so the extractor uses
  consistent per-sequence names.

### Build pipeline for sequences

Nothing music-related is committed under `src/audio/`. The `_sbk.c` file
and every `.cseq.s` source are extracted from the baserom into `build/`
on first use (or after `make clean`). The Makefile triggers extraction
at parse time when the bank's manifest is missing, so a plain `make`
just works after a fresh checkout — no separate `make extract` step is
required for music.

```
baserom.<v>.z64
        |
        | tools/extractMusicSequences.py
        |   (auto-triggered when build/<v>/src/audio/<bank>.manifest.json
        |    is missing; run explicitly via the script for re-extraction)
        v
build/<v>/src/audio/<bank>.manifest.json           (extraction metadata)
build/<v>/src/audio/<bank>/seq_NN_<Name>.cseq.s    (per-sequence source)
        |
        | tools/assemble_cseq.py
        v
build/<v>/src/audio/<bank>/seq_NN_<Name>.cseq.bin
        |
        | tools/binToInc.py
        v
build/<v>/src/audio/<bank>/seq_NN_<Name>.cseq.inc.c
        |
        | #include from
        v
build/<v>/src/audio/<bank>_sbk.c                   (tools/gen_sbk_c.py)
        |
        | C compile (custom Makefile rule)
        v
build/<v>/src/audio/<bank>_sbk.o                   (linked into the ROM)
```

This mirrors the [Nintendo audio workflow](https://ultra64.ca/files/documentation/online-manuals/man/pro-man/pro18/index.html):
the musician edits source (in our case `.cseq.s`) and the build compiles
it down to the bytes that go into the .sbk. For musician-friendly
editing, the `cseq_to_mid.py` / `mid_to_cseq.py` pair lets a DAW round
trip `.cseq.s -> .mid -> edit -> .cseq.s` with audibly identical
results (not byte-identical: Nintendo's backup-ref compression isn't
reconstructed; the output is uncompressed).

All three tools follow the same offset-table-with-pointerization shape
we used for particle banks: declare a single `const` aggregate that the
runtime DMAs and patches in-place via
[alBnkfNew](src/sys/audio.c#L312) /
[alSeqFileNew](src/sys/audio.c#L297).

### Surprises captured during the walk

- **Non-zero "pad" bytes are real and must be preserved.** B1_sounds1
  has all-zero trailing pad bytes between every struct, but B1_sounds2's
  bank-builder leaked stack/buffer leftovers into them (see e.g. the
  ALKeyMap and ALSound implicit-pad bytes in `B1_sounds2_ctl.c`). We
  capture them per-instance into explicit `_trail` fields.
- **`ALWaveTable` has *internal* leftover too.** The 2-byte gap between
  `flags` and the union (added by C alignment in libaudio.h) holds
  arbitrary bank-builder bytes in B1_sounds2; we expose it as `_hpad[2]`
  so it can be initialized per-instance.
- **Sequence-data trailing pad isn't zero either.** Each sequence's
  `len` field is the natural sequence length (often odd), but the file
  rounds to 4-byte alignment before the next sequence, with the gap
  bytes being more leftover-from-buffer data. We bake those into each
  sequence's `u8 seq_N[]` (so `sizeof(seq_N) >= len`).

## 6. Remaining work

The .ctl/.sbk side is done for US (and partially JP). Remaining:

1. **Per-waveform extraction from `.tbl`.** Currently the .tbl files stay
   as raw `bin` segments. Splitting each waveform out as a separate
   `.bin` / `.aifc` / `.wav` -- matching the per-frame texture pipeline
   in [tools/extractParticleTextures.py](tools/extractParticleTextures.py)
   -- would let us reference samples by name and preview them. Needs a
   small VADPCM decoder (Python, ~100 lines). Not blocking for
   matching.
2. **JP `B1_sounds2.ctl` / `B1_sounds2.tbl`.** Different from US (Japanese
   voice samples). Either generate a separate `B1_sounds2_ctl_jp.c` and
   gate via `VERSION` in the Makefile, or share the typedefs and switch
   only the initializer per version.
3. **Backup-ref recompression.** [mid_to_cseq.py](tools/mid_to_cseq.py)
   already produces working sequences from edited `.mid` files, but its
   output is uncompressed -- it never emits `0xFE A B L` backup refs.
   Sequences imported from a DAW will play correctly but be larger than
   Nintendo's originals (typically ~2x). A re-compressor that finds
   matching past-byte-runs and emits backup refs would close the gap.
   Required only if we want imported `.cseq.s` files to byte-match the
   originals; not blocking for matching the existing baserom build.
4. **~~`fgm.unk` format.~~** Resolved -- see §3 above. Each entry is
   `{ u8 unk0..3; f32 unk4, unk8, unkC; }` (16 bytes); the consumer is
   the FGM microcode opcode 0x40 handler in
   [n_env.c:3906](src/libultra/n_audio/n_env.c#L3906).

## 7. Open questions

- ~~**What the FGM `unk0`/`unk1`/`unk4`/`unk8`/`unkC` fields actually
  represent.**~~ Resolved -- see §3 above. They're an LFO/modulator
  table (shape, target, period, amplitude, offset).
- **Sequence ↔ stage mapping.** The 47 sequences in `S1_music.sbk` need
  named labels (`SEQ_HYRULE`, `SEQ_TITLE`, …). The mapping likely lives
  in a table in the BGM player init code.
- **Per-sound mapping for the SFX bank.** `B1_sounds2`'s single
  instrument has hundreds of sounds; each one corresponds to an
  `nGMSoundFx*` ID. The lookup table is presumably in `gm/gmsound.h`
  or generated from `fgm.tbl`/`fgm.ucd`. Worth tracing one full call
  path (e.g. `nGMSoundFxPunchHit` → which sound index → which `ALSound`
  → which `ALWaveTable.base`) to confirm.
- **VADPCM book lifetime.** The books live in the `.ctl` (per-wavetable),
  not the `.tbl`. So when we re-build the `.ctl` from C, we need to
  faithfully include each book's coefficients. `tabledesign` produces
  these from a `.aiff`; there's a one-to-one correspondence per
  waveform.
