/* relocData file 71: MVOpeningYamabuki — opening scene where the Pikachu
 * figure topples onto the carpet in the yellow room.
 *
 * Third-pass typing: the three `DObjDesc` arrays, the 53-entry wallpaper
 * `Bitmap` array, and the final `Sprite` struct are all real typed
 * declarations now. Every pointer field (`.dl`, `.buf`, `.bitmap`) with
 * a chain entry is written as a real C reference to its target symbol;
 * the companion 71_MVOpeningYamabuki.reloc file feeds `fixRelocChain` a
 * symbolic ptr/target list that overwrites those positions with the
 * chain-encoded form at link time.
 *
 * The remaining `u8`-wrapped blocks (the shared Tex pool, 7 DLs, 4 AnimJoint
 * scripts, and the 203 KB wallpaper texture tile pool) stay as raw byte
 * wrappers — their bytes are already regenerable from the ROM and their
 * internal structure (F3DEX2 streams, AObjEvent32 tracks, raw RGBA16
 * pixels) is best left as-is for now.
 */

#include "relocdata_types.h"

/* ──────────────── Pre-region: texture pool + 7 display lists ──────────── */

/* Shared texture / palette / Vtx pool referenced by the 7 DLs below
 * (35,472 B). Each DL at 0x08A90.. pulls data out of this region via
 * SETTIMG / LOADTLUT / VTX commands. */
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

/* `llMVOpeningYamabukiLegsDObjDesc` — 19-joint DObjDesc tree. Entries 4,
 * 5, 7, 10, 11, 13 have their `.dl` fields pointing at the 7 DLs above;
 * the rest are null-dl hierarchy nodes. */

DObjDesc dMVOpeningYamabuki_LegsDObjDesc[20] = {
	{ 0, NULL, { 56.15043f, -29.66133f, -607.43524f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 522.5648f, 0.0f, -525.3599f }, { 0.0f, 0.41469f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, NULL, { -168.31274f, 138.55083f, 496.86102f }, { 0.0f, -0.020944f, 0.0f }, { 0.999999f, 1.0f, 0.999999f } },
	{ 3, NULL, { -0.099907f, 1149.8403f, -366.29163f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMVOpeningYamabuki_DL_0x08A90, { -0.000114f, 0.0f, 0.0f }, { 0.241375f, -0.027391f, -1.694158f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMVOpeningYamabuki_DL_0x08BA8, { 640.3021f, 0.0f, 0.0f }, { 0.0f, 0.0f, 1.322579f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, NULL, { 562.4227f, 12.692986f, 0.183249f }, { -8e-06f, -5e-06f, 1.003806f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)dMVOpeningYamabuki_DL_0x08CE8, { -0.000114f, -7e-06f, 0.0f }, { 0.045205f, 0.024147f, -2.374348f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, NULL, { -475.98587f, -459.01047f, -15.970173f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, NULL, { -0.099907f, 1149.8403f, -673.55566f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMVOpeningYamabuki_DL_0x08FF8, { -0.000114f, 0.0f, -0.000114f }, { 0.407719f, 0.143131f, -1.803483f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMVOpeningYamabuki_DL_0x09108, { 640.3021f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.231169f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, NULL, { 562.35223f, 18.216934f, -1.564922f }, { 0.0f, 0.0f, 1.008399f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)dMVOpeningYamabuki_DL_0x09248, { -0.000114f, 2.9e-05f, 0.0f }, { -3.131045f, 3.144606f, 0.626922f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, NULL, { -564.25714f, -408.75436f, 2.099419f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, NULL, { 919.2105f, 514.5704f, -108.19203f }, { 0.0f, 0.0f, 0.0f }, { 5.000003f, 5.0f, 5.000003f } },
	{ 4, NULL, { -7.866493f, -415.9666f, 20.406769f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, NULL, { 553.44696f, 511.78116f, -445.38196f }, { 0.0f, 0.0f, 0.0f }, { 5.000003f, 5.0f, 5.000003f } },
	{ 4, NULL, { -114.84872f, -227.21042f, -60.610836f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },  /* DOBJ_ARRAY_MAX terminator */
};
PAD(8);  /* tail pad after the DObjDesc array */

/* `llMVOpeningYamabukiLegsAnimJoint` — AObjEvent32 tracks driving the
 * leg joints (6,640 B). Fed to `gcAddAnimJointAll` in
 * `mvOpeningYamabukiMakeLegs()`. */
u8 dMVOpeningYamabuki_LegsAnimJoint[0x19F0] = {
	#include <MVOpeningYamabuki/LegsAnimJoint.data.inc.c>
};

/* ──────────────── Projected leg shadow ─────────────────────────────────── */

/* `llMVOpeningYamabukiLegsShadowDObjDesc` — 4-joint DObjDesc tree.
 * Entries 1, 2, 3 each point into the tail of LegsAnimJoint where three
 * small shadow-render DLs are packed. */

DObjDesc dMVOpeningYamabuki_LegsShadowDObjDesc[5] = {
	{ 0, NULL, { 26.818335f, -29.66133f, -670.0845f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x19C0), { 1285.9763f, 0.989575f, -366.32028f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x19D0), { 1645.5571f, 0.989575f, -673.21893f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x19E0), { 1523.6108f, 0.989575f, -519.7696f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },  /* DOBJ_ARRAY_MAX terminator */
};
PAD(4);

/* `llMVOpeningYamabukiLegsShadowAnimJoint` (5,712 B). */
u8 dMVOpeningYamabuki_LegsShadowAnimJoint[0x1650] = {
	#include <MVOpeningYamabuki/LegsShadowAnimJoint.data.inc.c>
};

/* ──────────────── Master Ball on the carpet ────────────────────────────── */

/* `llMVOpeningYamabukiMBallDObjDesc` — 4-joint DObjDesc tree. Entries 1
 * and 2 point into the tail of LegsShadowAnimJoint where two small
 * MBall-render DLs are packed. */

DObjDesc dMVOpeningYamabuki_MBallDObjDesc[5] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, -0.27f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x1630), { 0.0f, 15.111347f, 103.71317f }, { 0.0f, 0.3f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x1640), { -2.1e-05f, 125.51372f, 2.9e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.022218f, 1.022218f, 1.022218f } },
	{ 3, NULL, { -76.396164f, 161.02469f, -26.60802f }, { 0.738324f, 0.491944f, 0.149688f }, { 0.978265f, 0.978265f, 0.978265f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },  /* DOBJ_ARRAY_MAX terminator */
};
PAD(4);

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

/* Wallpaper texture tiles @ 0x0D368..0x3EB08 (203,680 B). 53 × 320×6
 * RGBA16 tiles packed at 0xF08 byte stride each (8 B of slack per tile
 * from the N64 LOADBLOCK 64-bit alignment). Each `Bitmap.buf` in the
 * array below gets chain-patched to point at `tex_tiles[i * 0xF08]`. */
u8 dMVOpeningYamabuki_Wallpaper_tex_tiles[0x317A0] = {
	#include <MVOpeningYamabuki/Wallpaper_tex_tiles.data.inc.c>
};

/* 53-entry Bitmap array. Each `.buf` points at the matching tile inside
 * the tex pool above (0xF08-byte stride). fixRelocChain rewrites these
 * positions from the .reloc sidecar at link time. */

Bitmap dMVOpeningYamabuki_Wallpaper_bitmaps[53] = {
	{ 320, 320, 0, 0, (void*)dMVOpeningYamabuki_Wallpaper_tex_tiles, 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xF08), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1E10), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2D18), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x3C20), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x4B28), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x5A30), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x6938), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x7840), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x8748), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x9650), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xA558), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xB460), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xC368), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xD270), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xE178), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xF080), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xFF88), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x10E90), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x11D98), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x12CA0), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x13BA8), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x14AB0), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x159B8), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x168C0), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x177C8), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x186D0), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x195D8), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1A4E0), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1B3E8), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1C2F0), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1D1F8), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1E100), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1F008), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1FF10), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x20E18), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x21D20), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x22C28), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x23B30), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x24A38), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x25940), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x26848), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x27750), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x28658), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x29560), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2A468), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2B370), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2C278), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2D180), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2E088), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2EF90), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2FE98), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x30DA0), 4, 0 },
};

/* `llMVOpeningYamabukiWallpaperSprite` — the 320×264 RGBA16 background
 * sprite drawn by `mvOpeningYamabukiMakeWallpaper()`. `.bitmap` points
 * at the array above; its on-disk value is written by fixRelocChain
 * from the .reloc sidecar. */
Sprite dMVOpeningYamabuki_WallpaperSprite = {
	0, 0,
	320, 264,
	1.0f, 1.0f,
	0, 0,
	0x0240,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)NULL,
	0, 1,
	53, 660,
	5, 6,
	0, 2,
	dMVOpeningYamabuki_Wallpaper_bitmaps,
	(Gfx*)NULL,
	(Gfx*)NULL,
	0, 0,
};

/* Trailing 4-byte pad @ 0x3EE9C..0x3EEA0. */
PAD(4);
