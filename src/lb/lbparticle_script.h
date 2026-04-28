#ifndef _LBPARTICLE_SCRIPT_H_
#define _LBPARTICLE_SCRIPT_H_

#include <ssb_types.h>
#include <lb/lbdef.h>

/* ============================================================================
 * Macros for hand-writing LBScript bytecode in src/particles/.
 *
 * Each macro expands to one or more comma-separated u8 expressions, intended
 * to appear inside a `u8 bytecode[N] = { ... };` initializer (the same shape
 * as the ftAnim macros in src/relocData/relocdata_types.h). Bytecode
 * arguments that aren't fixed-width -- multi-byte ushorts, big-endian f32s --
 * have their own helpers that emit additional bytes after the opcode.
 *
 * Authoritative reference for what each opcode does and reads is
 * lbParticleUpdateStruct in src/lb/lbparticle.c. The opcode constants
 * themselves live in src/lb/lbdef.h -- these macros build on top of them.
 *
 * Coordinate / channel selectors:
 *   LBP_X / LBP_Y / LBP_Z      pick axes for SETPOS/ADDPOS/SETVEL/ADDVEL
 *   LBP_R / LBP_G / LBP_B / LBP_A  pick channels for SETPRIMBLEND/SETENVBLEND
 *
 * Float and ushort encoding helpers:
 *   LBP_F32(0x43960000)   emit a big-endian f32 from its IEEE-754 bit pattern
 *   LBP_U16(value)        emit a big-endian u16
 *   LBP_USHORT_S(len)     ushort short form, len in 1..128 (1 byte)
 *   LBP_USHORT_L(len)     ushort long form, len in 1..32768 (2 bytes)
 *
 * The "+1 inside the loader" idiom: lbParticleReadUShort returns value+1.
 * The macros below take the *length the runtime sees* (i.e. they do the -1
 * for you), so you write `LBP_USHORT_S(1)` to mean "interpolation length 1".
 * ========================================================================= */

/* Channel masks ----------------------------------------------------------- */

#define LBP_X 0x01
#define LBP_Y 0x02
#define LBP_Z 0x04

#define LBP_R 0x01
#define LBP_G 0x02
#define LBP_B 0x04
#define LBP_A 0x08

/* Width helpers ----------------------------------------------------------- */

/* Big-endian f32 from a u32 bit pattern. */
#define LBP_F32(hex32)              \
    (u8)(((hex32) >> 24) & 0xFF),   \
    (u8)(((hex32) >> 16) & 0xFF),   \
    (u8)(((hex32) >>  8) & 0xFF),   \
    (u8)( (hex32)        & 0xFF)

/* Big-endian u16 (2 bytes). Always 2 bytes -- for opcodes that hardcode u16
 * args (e.g. MAKESCRIPT), distinct from the variable-length ushort below. */
#define LBP_U16(v)                  \
    (u8)(((v) >> 8) & 0xFF),        \
    (u8)( (v)       & 0xFF)

/* Variable-length ushort short form, 1 byte. len in 1..128.
 * Encodes value-1; high bit must be clear. */
#define LBP_USHORT_S(len) (u8)(((len) - 1) & 0x7F)

/* Variable-length ushort long form, 2 bytes. len in 1..32768.
 * High bit set in the first byte signals "long form" to the loader. */
#define LBP_USHORT_L(len)                       \
    (u8)(0x80 | ((((len) - 1) >> 8) & 0x7F)),   \
    (u8)( ((len) - 1) & 0xFF)

/* Wait commands (cmd < 0x80) ---------------------------------------------- */

/* Wait `frames` (0..31). frames=0 means "no wait, keep parsing".
 * Loops in the dispatcher until bytecode_timer != 0. */
#define lbpWait(frames)             (u8)((frames) & 0x1F)

/* Wait `frames` (0..0x1FFF) using the 2-byte extended form (bit 0x20 set). */
#define lbpWaitLong(frames)                     \
    (u8)(0x20 | (((frames) >> 8) & 0x1F)),      \
    (u8)( (frames) & 0xFF)

/* Wait `frames` (0..31) and then advance frame_id to `id`. */
#define lbpWaitFrame(frames, id)                \
    (u8)(0x40 | ((frames) & 0x1F)),             \
    (u8)(id)

/* Wait `frames` (0..0x1FFF) and then advance frame_id to `id`. */
#define lbpWaitLongFrame(frames, id)            \
    (u8)(0x60 | (((frames) >> 8) & 0x1F)),      \
    (u8)( (frames) & 0xFF),                     \
    (u8)(id)

/* Position / velocity ----------------------------------------------------- */

/* SETPOS / ADDPOS / SETVEL / ADDVEL -- `mask` is LBP_X|LBP_Y|LBP_Z.
 * Per-axis f32 args follow the macro (one LBP_F32 per set bit). */
#define lbpSetPos(mask) (u8)(LBPARTICLE_OPCODE_SETPOS | ((mask) & 0x07))
#define lbpAddPos(mask) (u8)(LBPARTICLE_OPCODE_ADDPOS | ((mask) & 0x07))
#define lbpSetVel(mask) (u8)(LBPARTICLE_OPCODE_SETVEL | ((mask) & 0x07))
#define lbpAddVel(mask) (u8)(LBPARTICLE_OPCODE_ADDVEL | ((mask) & 0x07))

/* Size -------------------------------------------------------------------- */

/* SETSIZELERP -- interpolate size to target over `length` frames.
 * Emit as: lbpSetSizeLerp, LBP_USHORT_S(len), LBP_F32(target_hex) */
#define lbpSetSizeLerp LBPARTICLE_OPCODE_SETSIZELERP

/* SETSIZERAND -- like SETSIZELERP but adds rand*[0..1)*amount to target.
 * Emit as: lbpSetSizeRand, LBP_USHORT_S(len), LBP_F32(target), LBP_F32(rand) */
#define lbpSetSizeRand LBPARTICLE_OPCODE_SETSIZERAND

/* Flags / physics --------------------------------------------------------- */

#define lbpSetFlag(flags)   LBPARTICLE_OPCODE_SETFLAG, (u8)(flags)

#define lbpSetGravity       LBPARTICLE_OPCODE_SETGRAVITY  /* + LBP_F32(g) */
#define lbpSetFriction      LBPARTICLE_OPCODE_SETFRICTION /* + LBP_F32(f) */

#define lbpEnvColor()       LBPARTICLE_OPCODE_ENVCOLOR
#define lbpNoMaskST()       LBPARTICLE_OPCODE_NOMASKST
#define lbpMaskS()          LBPARTICLE_OPCODE_MASKS
#define lbpMaskT()          LBPARTICLE_OPCODE_MASKT
#define lbpMaskST()         LBPARTICLE_OPCODE_MASKST
#define lbpAlphaBlend()     LBPARTICLE_OPCODE_ALPHABLEND
#define lbpNoDither()       LBPARTICLE_OPCODE_NODITHER
#define lbpDither()         LBPARTICLE_OPCODE_DITHER
/* Naming in lbdef.h is inverted relative to behaviour: NONOISE *sets* the
 * NOISE flag, NOISE *clears* it. Keeping the source-of-truth names here. */
#define lbpNoNoise()        LBPARTICLE_OPCODE_NONOISE
#define lbpNoise()          LBPARTICLE_OPCODE_NOISE

/* Lifetime / spawning ----------------------------------------------------- */

#define lbpMakeScript(id)         LBPARTICLE_OPCODE_MAKESCRIPT,    LBP_U16(id)
#define lbpMakeGenerator(id)      LBPARTICLE_OPCODE_MAKEGENERATOR, LBP_U16(id)
#define lbpMakeID(id)             LBPARTICLE_OPCODE_MAKEID,        LBP_U16(id)
#define lbpMakeRand(base, rand)   LBPARTICLE_OPCODE_MAKERAND,      LBP_U16(base), LBP_U16(rand)
#define lbpSetLifeRand(b, r)      LBPARTICLE_OPCODE_SETLIFERAND,   LBP_U16(b), LBP_U16(r)
#define lbpTryDeadRand(percent)   LBPARTICLE_OPCODE_TRYDEADRAND,   (u8)(percent)

/* Velocity tweaks --------------------------------------------------------- */

/* ADDVELRAND in lbdef.h, but the handler actually writes pos.x/y/z (yes,
 * the name is misleading). Three f32 random ranges follow the opcode. */
#define lbpAddPosRand       LBPARTICLE_OPCODE_ADDVELRAND
/* + LBP_F32(rx), LBP_F32(ry), LBP_F32(rz) */

/* SETVELANGLE -- rotates velocity by f32 angle. */
#define lbpSetVelAngle      LBPARTICLE_OPCODE_SETVELANGLE  /* + LBP_F32(angle) */

/* MULVELUFORM -- multiply all axes by a single f32. */
#define lbpMulVelUniform    LBPARTICLE_OPCODE_MULVELUFORM  /* + LBP_F32(scale) */

/* SETVELMAG -- clamp velocity to base + rand*[0..1)*range, preserving direction. */
#define lbpSetVelMag        LBPARTICLE_OPCODE_SETVELMAG    /* + LBP_F32(base), LBP_F32(rand) */

/* MULVELAXIS -- multiply each axis by its own f32. */
#define lbpMulVelAxis       LBPARTICLE_OPCODE_MULVELAXIS   /* + LBP_F32(mx), LBP_F32(my), LBP_F32(mz) */

/* DObj attachment --------------------------------------------------------- */

/* The runtime indexes sLBParticleAttachDObjs[id-1], so `id` here is 1-based
 * (1..LBPARTICLE_ATTACH_DOBJ_NUM_MAX). 0 is invalid. */
#define lbpSetDistVel(id)         LBPARTICLE_OPCODE_SETDISTVEL,    (u8)(id)
#define lbpAddDistVelMag(id)      LBPARTICLE_OPCODE_ADDDISTVELMAG, (u8)(id)
/* (lbpAddDistVelMag also takes a trailing LBP_F32(magnitude).) */

#define lbpSetAttachID(id)        LBPARTICLE_OPCODE_SETATTACHID,   (u8)(id)

/* Color ------------------------------------------------------------------- */

/* PRIMBLENDRAND / ENVBLENDRAND -- add (rand*[0..1))*byte to each channel. */
#define lbpPrimBlendRand(r, g, b, a) \
    LBPARTICLE_OPCODE_PRIMBLENDRAND, (u8)(r), (u8)(g), (u8)(b), (u8)(a)
#define lbpEnvBlendRand(r, g, b, a) \
    LBPARTICLE_OPCODE_ENVBLENDRAND, (u8)(r), (u8)(g), (u8)(b), (u8)(a)

/* SETPRIMBLEND / SETENVBLEND -- interpolate to target color over ushort frames.
 * `channels` is LBP_R|LBP_G|LBP_B|LBP_A; per-channel u8 follows in that order
 * after the ushort. Use as:
 *   lbpSetPrimBlend(LBP_R | LBP_G | LBP_B), LBP_USHORT_S(1), 0xFF, 0xFF, 0xFF
 */
#define lbpSetPrimBlend(channels) (u8)(0xC0 | ((channels) & 0x0F))
#define lbpSetEnvBlend(channels)  (u8)(0xD0 | ((channels) & 0x0F))

/* Frame animation --------------------------------------------------------- */

/* SETFRAMEIDRAND -- base + rand*[0..1)*range, both u8. (Opcode 0xBC has no
 * mnemonic in lbdef.h yet; the dispatcher tags it as a literal `case 0xBC`.) */
#define lbpSetFrameIDRand(base, rand) \
    0xBC, (u8)(base), (u8)(rand)

/* Control flow ------------------------------------------------------------ */

#define lbpSetLoop(count)   LBPARTICLE_OPCODE_SETLOOP, (u8)(count)
#define lbpLoop()           LBPARTICLE_OPCODE_LOOP
#define lbpSetReturn()      LBPARTICLE_OPCODE_SETRETURN
#define lbpReturn()         LBPARTICLE_OPCODE_RETURN

/* Termination ------------------------------------------------------------- */

#define lbpDead()           LBPARTICLE_OPCODE_DEAD
#define lbpEnd()            LBPARTICLE_OPCODE_END

#endif /* _LBPARTICLE_SCRIPT_H_ */
