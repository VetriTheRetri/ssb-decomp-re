/* relocData file 71: MVOpeningYamabuki — opening scene where the Pikachu
 * figure topples onto the carpet in the yellow room.
 *
 * Second-pass typing: the 10 symbol-bounded blocks from the first pass
 * are now broken down into the sub-structures recoverable from the
 * file's 151-entry reloc chain and the F3DEX2 DL walk:
 *
 *   - pre_start (0x0000..0x9548) splits into a 35,472-byte texture /
 *     palette pool and seven standalone F3DEX2 display lists that the
 *     LegsDObjDesc tree below references via its `dl` pointers.
 *
 *   - CamAnimJoint_and_wallpaper (0xD330..0x3EE58) is actually FOUR
 *     sub-blocks:
 *         0xD330..0xD368    CamAnimJoint   — 14 u32s, 1 AObjEvent32 track
 *         0xD368..0x3EB08   Wallpaper_tex_tiles — 53 × 3840-byte RGBA16 tiles
 *         0x3EB08..0x3EE58  Wallpaper_bitmaps   — 53 × 16-byte Bitmap structs
 *                                                whose .buf fields patch to
 *                                                the tiles above via the
 *                                                intern chain.
 *         0x3EE58..0x3EE9C  Wallpaper_sprite    — 68-byte Sprite struct,
 *                                                320×264 RGBA16, attr
 *                                                SP_OVERLAP|SP_TEXSHUF.
 *
 *   - The three DObjDesc blocks (Legs / LegsShadow / MBall) each contain
 *     a DObjDesc[] array terminated by a DOBJ_ARRAY_MAX (18) sentinel,
 *     followed by 4–8 bytes of zero alignment padding to the next 0x10
 *     boundary. Entry counts: Legs = 19+term, LegsShadow = 4+term,
 *     MBall = 4+term. Six LegsDObjDesc entries (indices 4, 5, 7, 10, 11,
 *     13) have their `dl` fields chain-patched to the seven DLs in the
 *     pre region; the remaining entries are null-dl joint hierarchy nodes.
 *
 * The AnimJoint blocks (Legs, LegsShadow, MBall, Cam) are kept as named
 * `u8` wrappers — they're AObjEvent32 scripts with their own internal
 * chain structure and extracting them into typed `AObjEvent32[]` arrays
 * needs a per-script walker that isn't built yet. The Sprite and Bitmap
 * struct blocks stay as `u8` too because their pointer fields live
 * inside chain-encoded raw bytes that would need a `.reloc` sidecar to
 * patch — a bigger structural change than this refinement pass.
 */

#include "relocdata_types.h"

/* ──────────────── Pre-region: texture pool + 7 display lists ──────────── */

/* Shared texture / palette pool referenced by the 7 DLs below (35,472 B).
 * The DLs at 0x08A90.. pull Vtx / Tex / LUT data from everywhere inside
 * this block via SETTIMG / LOADTLUT / VTX commands. */
u8 dMVOpeningYamabuki_Tex_pool[0x8A90] = {
	#include <MVOpeningYamabuki/Tex_pool.data.inc.c>
};

/* Display list 0 @ 0x08A90 (40 bytes). */
u8 dMVOpeningYamabuki_DL_0x08A90[0x28] = {
	#include <MVOpeningYamabuki/DL_0x08A90.data.inc.c>
};

/* Display list 1 @ 0x08AB8 (240 bytes). */
u8 dMVOpeningYamabuki_DL_0x08AB8[0xF0] = {
	#include <MVOpeningYamabuki/DL_0x08AB8.data.inc.c>
};

/* Display list 2 @ 0x08BA8 (320 bytes). */
u8 dMVOpeningYamabuki_DL_0x08BA8[0x140] = {
	#include <MVOpeningYamabuki/DL_0x08BA8.data.inc.c>
};

/* Display list 3 @ 0x08CE8 (784 bytes). */
u8 dMVOpeningYamabuki_DL_0x08CE8[0x310] = {
	#include <MVOpeningYamabuki/DL_0x08CE8.data.inc.c>
};

/* Display list 4 @ 0x08FF8 (272 bytes). */
u8 dMVOpeningYamabuki_DL_0x08FF8[0x110] = {
	#include <MVOpeningYamabuki/DL_0x08FF8.data.inc.c>
};

/* Display list 5 @ 0x09108 (320 bytes). */
u8 dMVOpeningYamabuki_DL_0x09108[0x140] = {
	#include <MVOpeningYamabuki/DL_0x09108.data.inc.c>
};

/* Display list 6 @ 0x09248 (768 bytes). */
u8 dMVOpeningYamabuki_DL_0x09248[0x300] = {
	#include <MVOpeningYamabuki/DL_0x09248.data.inc.c>
};

/* ──────────────── Pikachu legs joint hierarchy ─────────────────────────── */

/* `llMVOpeningYamabukiLegsDObjDesc` — 19 DObjDesc entries + DOBJ_ARRAY_MAX
 * terminator (880 B) + 8 B zero pad. Six of the 19 non-terminator entries
 * (indices 4, 5, 7, 10, 11, 13) have non-null `dl` fields patched to the
 * seven DLs in the pre region. */
u8 dMVOpeningYamabuki_LegsDObjDesc[0x378] = {
	#include <MVOpeningYamabuki/LegsDObjDesc.data.inc.c>
};

/* `llMVOpeningYamabukiLegsAnimJoint` — AObjEvent32 tracks driving the
 * leg joints (6,640 B). Fed to `gcAddAnimJointAll` in
 * `mvOpeningYamabukiMakeLegs()`. */
u8 dMVOpeningYamabuki_LegsAnimJoint[0x19F0] = {
	#include <MVOpeningYamabuki/LegsAnimJoint.data.inc.c>
};

/* ──────────────── Projected leg shadow ─────────────────────────────────── */

/* `llMVOpeningYamabukiLegsShadowDObjDesc` — 4 entries + terminator
 * (220 B) + 4 B pad. */
u8 dMVOpeningYamabuki_LegsShadowDObjDesc[0xE0] = {
	#include <MVOpeningYamabuki/LegsShadowDObjDesc.data.inc.c>
};

/* `llMVOpeningYamabukiLegsShadowAnimJoint` (5,712 B). */
u8 dMVOpeningYamabuki_LegsShadowAnimJoint[0x1650] = {
	#include <MVOpeningYamabuki/LegsShadowAnimJoint.data.inc.c>
};

/* ──────────────── Master Ball on the carpet ────────────────────────────── */

/* `llMVOpeningYamabukiMBallDObjDesc` — 4 entries + terminator
 * (220 B) + 4 B pad. */
u8 dMVOpeningYamabuki_MBallDObjDesc[0xE0] = {
	#include <MVOpeningYamabuki/MBallDObjDesc.data.inc.c>
};

/* `llMVOpeningYamabukiMBallAnimJoint` (2,160 B). */
u8 dMVOpeningYamabuki_MBallAnimJoint[0x870] = {
	#include <MVOpeningYamabuki/MBallAnimJoint.data.inc.c>
};

/* ──────────────── Cam + wallpaper sprite resource pool ─────────────────── */

/* `llMVOpeningYamabukiCamAnimJoint` — 56 bytes, 14 u32 words driving the
 * scene camera via `gcAddCObjCamAnimJoint` in
 * `mvOpeningYamabukiMakeMainCamera()`. */
u8 dMVOpeningYamabuki_CamAnimJoint[0x38] = {
	#include <MVOpeningYamabuki/CamAnimJoint.data.inc.c>
};

/* Wallpaper texture tiles @ 0x0D368..0x3EB08 (203,680 B). The Sprite at
 * the end of the file is 320×264 RGBA16, split into 53 tiles of 320×6
 * pixels each. Each tile spans 0x0D368 + i × 0xF08 bytes — the 8 bytes of
 * slack per tile come from the N64 texture engine's 64-bit alignment
 * requirement on LOADBLOCK stride. The 53 `Bitmap.buf` fields in the
 * block below get chain-patched to point at each tile start. */
u8 dMVOpeningYamabuki_Wallpaper_tex_tiles[0x317A0] = {
	#include <MVOpeningYamabuki/Wallpaper_tex_tiles.data.inc.c>
};

/* Wallpaper Bitmap array @ 0x3EB08..0x3EE58 (53 × 16 bytes). Each entry
 * is 304(304)x6 RGBA16 with its `buf` field patched at link time to the
 * corresponding tile start in the pool above. */
u8 dMVOpeningYamabuki_Wallpaper_bitmaps[0x350] = {
	#include <MVOpeningYamabuki/Wallpaper_bitmaps.data.inc.c>
};

/* `llMVOpeningYamabukiWallpaperSprite` @ 0x3EE58..0x3EE9C — the 68-byte
 * Sprite struct drawn by `mvOpeningYamabukiMakeWallpaper()` as the
 * background layer. 320×264 RGBA16, attr SP_OVERLAP | SP_TEXSHUF, with
 * its `bitmap` field chain-patched to dMVOpeningYamabuki_Wallpaper_bitmaps. */
u8 dMVOpeningYamabuki_WallpaperSprite[0x44] = {
	#include <MVOpeningYamabuki/WallpaperSprite.data.inc.c>
};

/* Trailing 4-byte pad @ 0x3EE9C..0x3EEA0. */
PAD(4);
