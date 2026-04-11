#ifndef _RELOCDATA_TYPES_H_
#define _RELOCDATA_TYPES_H_

#include <PR/ultratypes.h>
#include <PR/gbi.h>
#include <PR/sp.h>
#include <sys/objtypes.h>
#include <mp/mptypes.h>
#include <it/ittypes.h>

/* PAD(n) inserts n zero bytes into .data for 16-byte alignment between
 * sprite blocks. The variable name is auto-generated from __LINE__ so each
 * pad gets a unique static identifier within the master file. */
#define _PAD_CONCAT(a, b) a##b
#define _PAD_NAME(line) _PAD_CONCAT(_relocdata_pad_, line)
#define PAD(n) static u8 _PAD_NAME(__LINE__)[n] = {0}

/* ── AObjEvent16 (figatree) animation command macros ──────────────────
 *
 * Fighter animation data is encoded as AObjEvent16 (u16) commands.
 * Each command word has: opcode (5 bits), flags (10 bits), toggle (1 bit).
 *
 * flags is a track bitmask — each bit selects a joint transform track:
 *   bit 0: RotX   bit 1: RotY   bit 2: RotZ   bit 3: TraI
 *   bit 4: TraX   bit 5: TraY   bit 6: TraZ
 *   bit 7: ScaX   bit 8: ScaY   bit 9: ScaZ
 *
 * After the command word, optional payload/track values follow as u16s.
 */

/* Track flag constants */
#define FT_ANIM_ROTX  (1 << 0)
#define FT_ANIM_ROTY  (1 << 1)
#define FT_ANIM_ROTZ  (1 << 2)
#define FT_ANIM_TRAI  (1 << 3)
#define FT_ANIM_TRAX  (1 << 4)
#define FT_ANIM_TRAY  (1 << 5)
#define FT_ANIM_TRAZ  (1 << 6)
#define FT_ANIM_SCAX  (1 << 7)
#define FT_ANIM_SCAY  (1 << 8)
#define FT_ANIM_SCAZ  (1 << 9)

/* Command word builder: opcode in bits 15-11, flags in bits 10-1, toggle in bit 0 */
#define _FT_ANIM_CMD(op, flags, toggle) (((op) << 11) | ((flags) << 1) | (toggle))

/* End — terminates the joint's animation script */
#define ftAnimEnd() _FT_ANIM_CMD(0, 0, 0)

/* Block(duration) — wait for `duration` frames before next command.
 * flags field is unused by the game but present in the binary data. */
#define ftAnimBlock(flags, dur) _FT_ANIM_CMD(1, flags, 1), (dur)
#define ftAnimBlock0(flags) _FT_ANIM_CMD(1, flags, 0)

/* SetVal / SetValBlock — set value_target for flagged tracks (cubic interp).
 * Per-track s16 values follow after the macro expansion.
 *
 * Naming convention:
 *   "Block" = adds payload to anim_wait (opcode 2/4/7/9)
 *   no "Block" = doesn't wait (opcode 3/5/8/10)
 *   trailing "T" = toggle=1 (payload u16 follows the command word)
 *   no "T"  = toggle=0 (no payload, interpolation length = 0)
 */
#define ftAnimSetValBlockT(flags, dur) _FT_ANIM_CMD(2, flags, 1), (dur)
#define ftAnimSetValBlock(flags) _FT_ANIM_CMD(2, flags, 0)
#define ftAnimSetValT(flags, dur) _FT_ANIM_CMD(3, flags, 1), (dur)
#define ftAnimSetVal(flags) _FT_ANIM_CMD(3, flags, 0)

/* SetValRate / SetValRateBlock — set value_target + rate_target per track.
 * Per-track pairs of (value, rate) s16 values follow. */
#define ftAnimSetValRateBlockT(flags, dur) _FT_ANIM_CMD(4, flags, 1), (dur)
#define ftAnimSetValRateBlock(flags) _FT_ANIM_CMD(4, flags, 0)
#define ftAnimSetValRateT(flags, dur) _FT_ANIM_CMD(5, flags, 1), (dur)
#define ftAnimSetValRate(flags) _FT_ANIM_CMD(5, flags, 0)

/* SetTargetRate — set rate_target only */
#define ftAnimSetTargetRateBlockT(flags, dur) _FT_ANIM_CMD(6, flags, 1), (dur)
#define ftAnimSetTargetRateBlock(flags) _FT_ANIM_CMD(6, flags, 0)
#define ftAnimSetTargetRateT(flags, dur) _FT_ANIM_CMD(6, flags, 1), (dur)
#define ftAnimSetTargetRate(flags) _FT_ANIM_CMD(6, flags, 0)

/* SetVal0Rate / SetVal0RateBlock — set value_target, rate_target=0 (cubic) */
#define ftAnimSetVal0RateBlockT(flags, dur) _FT_ANIM_CMD(7, flags, 1), (dur)
#define ftAnimSetVal0RateBlock(flags) _FT_ANIM_CMD(7, flags, 0)
#define ftAnimSetVal0RateT(flags, dur) _FT_ANIM_CMD(8, flags, 1), (dur)
#define ftAnimSetVal0Rate(flags) _FT_ANIM_CMD(8, flags, 0)

/* SetValAfter / SetValAfterBlock — step interpolation */
#define ftAnimSetValAfterBlockT(flags, dur) _FT_ANIM_CMD(9, flags, 1), (dur)
#define ftAnimSetValAfterBlock(flags) _FT_ANIM_CMD(9, flags, 0)
#define ftAnimSetValAfterT(flags, dur) _FT_ANIM_CMD(10, flags, 1), (dur)
#define ftAnimSetValAfter(flags) _FT_ANIM_CMD(10, flags, 0)

/* Loop — jump by relative offset u16s. The command word's lower bits
 * are unused by the game but present in the binary data. */
#define ftAnimLoop(cmd_word, offset) (cmd_word), (u16)(offset)

/* SetFlags — sets anim flags from the flags field */
#define ftAnimSetFlagsT(flags, dur) _FT_ANIM_CMD(14, flags, 1), (dur)
#define ftAnimSetFlags(flags) _FT_ANIM_CMD(14, flags, 0)

#endif /* _RELOCDATA_TYPES_H_ */
