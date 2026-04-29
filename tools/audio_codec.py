#!/usr/bin/env python3
"""VADPCM decoder + AIFC/AIFF I/O for the .ctl/.tbl extraction pipeline.

For v1 we only DECODE VADPCM (so we can write a listenable .aiff preview
alongside each waveform's .aifc). We don't encode -- byte-match round-
trips work because each waveform's AIFC keeps the original VADPCM bytes
verbatim in its SSND chunk; reassembling the .tbl is just memcpy +
offset-table rewrite. User-supplied AIFC overrides also pass through
unchanged.

Module layout:
  * adpcm_decode(...)        - VADPCM bytes + codebook -> PCM s16
  * write_aifc(...)          - VADPCM SSND + APPL chunks (CODES/LOOPS)
  * read_aifc(...)           - inverse: pulls codebook, loop, and SSND
  * write_aiff(...)          - PCM s16 SSND (uncompressed, for preview)

References:
  * Nintendo "Audio Development Tools and Information" docs (the
    canonical layout of `VADPCMCODES` / `VADPCMLOOPS` APPL chunks).
  * The standard VADPCM decode algorithm as used by the N64 SDK and
    every public N64 decomp (sm64, oot, mm, ...): per-frame parse a
    1-byte (scale|predictor) header + 16 signed-nibble residuals, then
    decode 16 PCM samples in two halves of 8, using the predictor's
    codebook against the last `order` history samples.
"""
import struct


# ---------- VADPCM decoder ------------------------------------------------

ADPCM_FRAME_BYTES = 9
ADPCM_FRAME_SAMPLES = 16


def _clip_s16(v: int) -> int:
    if v > 32767:
        return 32767
    if v < -32768:
        return -32768
    return v


def adpcm_decode(adpcm_bytes: bytes,
                 codebook: list,
                 order: int,
                 npredictors: int,
                 initial_state=None) -> list:
    """Decode VADPCM bytes to a list of s16 PCM samples.

    Args:
      adpcm_bytes: raw bytes; length must be a multiple of 9.
      codebook:    flat list of `npredictors * order * 8` s16 values, in
                   the same on-disk order as the .ctl's ALADPCMBook.
      order:       prediction order (always 2 in baserom; we don't assume).
      npredictors: number of codebook entries.
      initial_state: optional list of `order` s16 values seeding the
                   history (used when decoding into a loop point); zero
                   if None.

    Returns: list of decoded s16 samples (length = nframes * 16).
    """
    # Lay out the codebook as coefs[predictor][k][j] for 0<=k<order, 0<=j<8.
    coefs = []
    for p in range(npredictors):
        rows = []
        base = p * order * 8
        for k in range(order):
            rows.append(list(codebook[base + k * 8 : base + k * 8 + 8]))
        coefs.append(rows)

    state = list(initial_state) if initial_state else [0] * order
    out = []

    for fstart in range(0, len(adpcm_bytes), ADPCM_FRAME_BYTES):
        frame = adpcm_bytes[fstart : fstart + ADPCM_FRAME_BYTES]
        if len(frame) < ADPCM_FRAME_BYTES:
            break

        header = frame[0]
        scale_idx = header >> 4
        predictor_idx = header & 0x0F
        # Out-of-range scale_idx is treated as zero by the RSP microcode.
        scale = (1 << scale_idx) if scale_idx < 12 else 0

        # 16 signed 4-bit nibbles, pre-multiplied by scale.
        residuals = []
        for b in frame[1:]:
            hi = (b >> 4) & 0x0F
            lo = b & 0x0F
            if hi >= 8:
                hi -= 16
            if lo >= 8:
                lo -= 16
            residuals.append(hi * scale)
            residuals.append(lo * scale)

        pred_book = coefs[predictor_idx]  # order rows of 8 cols

        # Two halves of 8 samples each. Standard VADPCM decode: the
        # codebook coefficients encode the within-half AR structure
        # implicitly, so each half's samples are computed in a single
        # pass against the history state from before the half.
        for half in range(2):
            half_resid = residuals[half * 8 : half * 8 + 8]
            decoded = [0] * 8
            # Prefix sums of (residual << 11) encode each within-half
            # earlier residual's contribution to later samples through
            # the predictor's "newest history" row (book[order-1]).
            for j in range(8):
                acc = 0
                # History from before the half: state[k] paired with
                # book row k.
                for k in range(order):
                    acc += state[k] * pred_book[k][j]
                # Within-half residuals act as additional "history" via
                # the order-1 (newest) row, evaluated at the offset
                # between this sample and the residual position.
                for m in range(j):
                    acc += half_resid[m] * pred_book[order - 1][j - 1 - m]
                acc >>= 11
                decoded[j] = _clip_s16(acc + half_resid[j])
            out.extend(decoded)
            # Update state to last `order` samples for the next half.
            state = decoded[8 - order : 8]

    return out


# ---------- IEEE 754 80-bit extended (used for AIFF/AIFC sample rate) -----

def _f64_to_extended80(value: float) -> bytes:
    """Encode a finite float as IEEE 754 80-bit big-endian extended.
    Sample rates are always positive integers in our use case, so a
    finite-only encoder is enough."""
    if value == 0.0:
        return b"\x00" * 10
    sign = 0
    if value < 0:
        sign = 0x8000
        value = -value
    # Normalize so 1.0 <= value < 2.0
    exp = 0
    while value >= 2.0:
        value /= 2.0
        exp += 1
    while value < 1.0:
        value *= 2.0
        exp -= 1
    biased = exp + 16383
    mantissa = int(value * (1 << 63))  # explicit-leading-1 mantissa
    return struct.pack(">HQ", sign | (biased & 0x7FFF), mantissa)


def _extended80_to_f64(b: bytes) -> float:
    sign_exp, mantissa = struct.unpack(">HQ", b)
    sign = -1.0 if (sign_exp & 0x8000) else 1.0
    biased = sign_exp & 0x7FFF
    if biased == 0 and mantissa == 0:
        return 0.0
    exp = biased - 16383
    return sign * (mantissa / (1 << 63)) * (2.0 ** exp)


# ---------- AIFC writer (Nintendo VADPCM payload) -------------------------

def _pad_chunk(body: bytes) -> bytes:
    """AIFF/AIFC chunks are 2-byte aligned; trailing pad byte if odd."""
    if len(body) & 1:
        return body + b"\x00"
    return body


def _make_chunk(magic: bytes, body: bytes) -> bytes:
    return magic + struct.pack(">I", len(body)) + _pad_chunk(body)


def _make_appl(name: str, version: int, payload: bytes) -> bytes:
    """Build an APPL `stoc` chunk holding a Pascal-style name (length
    byte + ASCII, padded to even length), a u16 version, and `payload`."""
    name_bytes = name.encode("ascii")
    if len(name_bytes) > 255:
        raise ValueError(f"APPL name too long: {name}")
    pstr = bytes([len(name_bytes)]) + name_bytes
    if len(pstr) & 1:
        pstr += b"\x00"
    body = b"stoc" + pstr + struct.pack(">h", version) + payload
    return _make_chunk(b"APPL", body)


def _make_comm_aifc(channels: int, num_frames: int, sample_size: int,
                    sample_rate: float, compression: bytes,
                    compression_name: str) -> bytes:
    """COMM chunk for AIFC (compressed). `compression` is a 4-byte type
    code; `compression_name` is a Pascal-style name."""
    name_bytes = compression_name.encode("ascii")
    pstr = bytes([len(name_bytes)]) + name_bytes
    if len(pstr) & 1:
        pstr += b"\x00"
    body = (struct.pack(">hIh", channels, num_frames, sample_size)
            + _f64_to_extended80(sample_rate)
            + compression
            + pstr)
    return _make_chunk(b"COMM", body)


def _make_comm_aiff(channels: int, num_frames: int, sample_size: int,
                    sample_rate: float) -> bytes:
    body = (struct.pack(">hIh", channels, num_frames, sample_size)
            + _f64_to_extended80(sample_rate))
    return _make_chunk(b"COMM", body)


def _make_ssnd(sample_bytes: bytes) -> bytes:
    body = struct.pack(">II", 0, 0) + sample_bytes
    return _make_chunk(b"SSND", body)


def write_aifc(path: str,
               adpcm_bytes: bytes,
               codebook: list,
               order: int,
               npredictors: int,
               sample_rate: float,
               loop=None) -> None:
    """Write a Nintendo-flavor AIFC.

    Args:
      adpcm_bytes: VADPCM payload (multiple of 9).
      codebook:    flat list of order*npredictors*8 s16 codebook values.
      order/npredictors: codebook geometry (typ. 2/4).
      sample_rate: native sample rate (passed through; ALBank.sampleRate).
      loop: optional dict {"start","end","count","state":[16 s16]}.
    """
    # We don't enforce a multiple-of-9 length: some baserom slices end
    # with a partial frame (alignment padding) that the engine ignores.
    # The AIFC stores the bytes verbatim so the rebuilt .tbl matches.
    n_full_frames = len(adpcm_bytes) // ADPCM_FRAME_BYTES
    num_samples = n_full_frames * ADPCM_FRAME_SAMPLES

    # APPL VADPCMCODES: version=1, order, npredictors, then s16 book values.
    codes_payload = (struct.pack(">hh", order, npredictors)
                     + struct.pack(f">{len(codebook)}h", *codebook))
    codes_chunk = _make_appl("VADPCMCODES", 1, codes_payload)

    # APPL VADPCMLOOPS: version=1, nloops, [{start,end,count,state[16]}].
    if loop is not None:
        nloops = 1
        loop_payload = (struct.pack(">h", nloops)
                        + struct.pack(">III", loop["start"], loop["end"],
                                       loop["count"] & 0xFFFFFFFF)
                        + struct.pack(">16h", *loop["state"]))
    else:
        nloops = 0
        loop_payload = struct.pack(">h", 0)
    loops_chunk = _make_appl("VADPCMLOOPS", 1, loop_payload)

    comm = _make_comm_aifc(1, num_samples, 16, sample_rate,
                           b"VAPC", "VADPCM ~4-1")
    ssnd = _make_ssnd(adpcm_bytes)
    fver = _make_chunk(b"FVER", struct.pack(">I", 0xA2805140))

    body = b"AIFC" + fver + comm + codes_chunk + loops_chunk + ssnd
    form = _make_chunk(b"FORM", body)
    with open(path, "wb") as f:
        f.write(form)


def write_aiff(path: str, samples: list, sample_rate: float,
               channels: int = 1) -> None:
    """Write an uncompressed AIFF (s16 PCM big-endian SSND). Used for
    listenable previews of the decoded baserom waveforms."""
    pcm = struct.pack(f">{len(samples)}h", *samples)
    n_frames = len(samples) // channels
    comm = _make_comm_aiff(channels, n_frames, 16, sample_rate)
    ssnd = _make_ssnd(pcm)
    body = b"AIFF" + comm + ssnd
    form = _make_chunk(b"FORM", body)
    with open(path, "wb") as f:
        f.write(form)


# ---------- AIFC reader ---------------------------------------------------

def _iter_chunks(form_body: bytes):
    """Yield (magic, body) for each chunk inside a FORM body (after the
    leading 4-byte form-type). Skips the alignment pad byte."""
    pos = 0
    end = len(form_body)
    while pos + 8 <= end:
        magic = form_body[pos : pos + 4]
        size = struct.unpack(">I", form_body[pos + 4 : pos + 8])[0]
        body = form_body[pos + 8 : pos + 8 + size]
        yield magic, body
        pos += 8 + size + (size & 1)


def _read_pstring(body: bytes, off: int):
    """Pascal-style string at `off`. Returns (text, next_off after even pad)."""
    n = body[off]
    text = body[off + 1 : off + 1 + n].decode("ascii", errors="replace")
    end = off + 1 + n
    if (1 + n) & 1:
        end += 1
    return text, end


def read_aifc(path: str) -> dict:
    """Parse a Nintendo AIFC. Returns:
       {sample_rate, num_frames, adpcm_bytes, codebook, order, npredictors,
        loop (or None)}."""
    with open(path, "rb") as f:
        form_magic = f.read(4)
        if form_magic != b"FORM":
            raise ValueError(f"not a FORM chunk: {form_magic!r}")
        form_size = struct.unpack(">I", f.read(4))[0]
        body = f.read(form_size)

    if body[:4] not in (b"AIFC", b"AIFF"):
        raise ValueError(f"not AIFC/AIFF: {body[:4]!r}")
    is_aifc = body[:4] == b"AIFC"

    info = {
        "sample_rate": 0.0,
        "num_frames": 0,
        "adpcm_bytes": b"",
        "codebook": [],
        "order": 0,
        "npredictors": 0,
        "loop": None,
    }

    for magic, b in _iter_chunks(body[4:]):
        if magic == b"COMM":
            channels, n_frames, sample_size = struct.unpack(">hIh", b[:8])
            info["sample_rate"] = _extended80_to_f64(b[8:18])
            info["num_frames"] = n_frames
            # AIFC has compression code (4 bytes) + name (Pascal); skip.
        elif magic == b"SSND":
            # offset (u32), blocksize (u32), then samples
            info["adpcm_bytes"] = b[8:]
        elif magic == b"APPL":
            if not b.startswith(b"stoc"):
                continue
            name, off = _read_pstring(b, 4)
            version = struct.unpack(">h", b[off : off + 2])[0]
            payload = b[off + 2 :]
            if name == "VADPCMCODES" and version == 1:
                order, npred = struct.unpack(">hh", payload[:4])
                n = order * npred * 8
                book = list(struct.unpack(f">{n}h", payload[4 : 4 + n * 2]))
                info["codebook"] = book
                info["order"] = order
                info["npredictors"] = npred
            elif name == "VADPCMLOOPS" and version == 1:
                nloops = struct.unpack(">h", payload[:2])[0]
                if nloops > 0:
                    start, end_, count = struct.unpack(">III", payload[2:14])
                    state = list(struct.unpack(">16h", payload[14:46]))
                    info["loop"] = {
                        "start": start,
                        "end": end_,
                        "count": count,
                        "state": state,
                    }
    return info
