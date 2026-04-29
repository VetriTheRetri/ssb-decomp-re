# `src/audio/instruments/` — instrument-bank waveform overrides

Drop Nintendo-flavor `.aifc` files here to override individual
waveforms in `B1_sounds1.{ctl,tbl}` and `B1_sounds2.{ctl,tbl}`.
The build reads this directory on every `make`.

For the full pipeline (the `.ctl` graph walker, per-wave AIFC
extraction, codebook + loop preservation, byte-match analysis, and
the v2 roadmap for raw-audio overrides), see
[`audio.md`](../../../audio.md) at the repo root.

## Quick reference

* **Filename**: `wave_NNN.aifc` (zero-padded to 3 digits, matching
  the `wave_NNN.aifc` files written into `build/src/audio/<bank>/`).
  Drop `wave_023.aifc` here to override base waveform 23 in whichever
  bank exposes index 23. The current pipeline scopes overrides per
  bank by directory, but for now, names are global -- if both banks
  have a `wave_023`, the override applies wherever it matches.
* **Format**: Nintendo VADPCM `.aifc` with `VADPCMCODES` and
  `VADPCMLOOPS` APPL chunks. The build's per-bank extractor writes
  these alongside `.aiff` previews; the AIFC files are the
  byte-faithful source-of-truth, the AIFF files are listening-only
  previews.

## Workflow

1. Build once (`make`). The extractor populates
   `build/src/audio/B1_sounds1/wave_NNN.aifc` and
   `build/src/audio/B1_sounds2/wave_NNN.aifc` plus AIFF previews.
2. Browse / listen to the AIFFs to find the waveform you want.
3. Author or export your replacement as a Nintendo-flavor AIFC
   (matching the original VADPCM compression and codebook). Drop it
   here as `wave_NNN.aifc`.
4. `make`. The override slots in.

## Byte-match caveats

* **Self-override** (drop in the exact AIFC the extractor produced)
  → byte-identical ROM. The VADPCM bytes round-trip exactly.
* **Any other override** (different content / size / codebook) →
  the rebuilt `.tbl` shifts subsequent waveform offsets and the
  `.ctl` reflects that, so the ROM hash diverges from
  `baserom.<v>.z64`. **Removing the override restores byte-match**
  on the next build.

## Why AIFC and not AIFF/WAV?

Nintendo's audio engine only accepts VADPCM (block-encoded ADPCM
with a per-bank codebook). The `.aifc` format carries those VADPCM
bytes intact along with the codebook, so a self-override is exactly
the original bytes -- the `.tbl` / `.ctl` rebuild is just memcpy +
offset table rewrite, nothing has to be re-encoded.

Going `.wav/.aiff -> .aifc` requires a VADPCM **encoder** plus
`tabledesign` to fit a new codebook to the audio. That isn't shipped
yet; v1 only ships the **decoder** (used to make the AIFF previews).
A future v2 can add encoder + tabledesign to accept raw audio
overrides; the pipeline shape doesn't change.
