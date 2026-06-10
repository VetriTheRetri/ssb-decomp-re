/* relocData file 296: MarioModel */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u8 *dMarioModel_Joint_0x0040_post_sub_0x38[];
extern u8 dMarioModel_Tex_0x65F0[];
extern Vtx dMarioModel_Vtx_0x0798_Vtx[];
extern Vtx dMarioModel_Vtx_0x0928_Vtx[];
extern Vtx dMarioModel_Vtx_0x09B8_Vtx[];
extern Vtx dMarioModel_Vtx_0x09F8_Vtx[];
extern Vtx dMarioModel_Vtx_0x1058_Vtx[];
extern Vtx dMarioModel_Vtx_0x10E8_Vtx[];
extern Vtx dMarioModel_Vtx_0x1148_Vtx[];
extern Vtx dMarioModel_Vtx_0x1248_Vtx[];
extern Vtx dMarioModel_Vtx_0x12F8_Vtx[];
extern Vtx dMarioModel_Vtx_0x1358_Vtx[];
extern Vtx dMarioModel_Vtx_0x1458_Vtx[];
extern Vtx dMarioModel_Vtx_0x1508_Vtx[];
extern Vtx dMarioModel_Vtx_0x1568_Vtx[];
extern Vtx dMarioModel_Vtx_0x3188_Vtx[];
extern Vtx dMarioModel_Vtx_0x32F8_Vtx[];
extern Vtx dMarioModel_Vtx_0x3368_Vtx[];
extern Vtx dMarioModel_Vtx_0x3398_Vtx[];
extern Vtx dMarioModel_Vtx_0x3878_Vtx[];
extern Vtx dMarioModel_Vtx_0x38E8_Vtx[];
extern Vtx dMarioModel_Vtx_0x3918_Vtx[];
extern Vtx dMarioModel_Vtx_0x3A18_Vtx[];
extern Vtx dMarioModel_Vtx_0x3A78_Vtx[];
extern Vtx dMarioModel_Vtx_0x3AA8_Vtx[];
extern Vtx dMarioModel_Vtx_0x3B48_Vtx[];
extern Vtx dMarioModel_Vtx_0x3BA8_Vtx[];
extern Vtx dMarioModel_Vtx_0x3BD8_Vtx[];
extern MObjSub **dMarioModel_gap_0x0000[];
extern Vtx dMarioModel_gap_0x4A60_sub_0x1040[];
extern Vtx dMarioModel_gap_0x4A60_sub_0x12C0[];
extern Vtx dMarioModel_gap_0x4A60_sub_0x13D0[];
extern Vtx dMarioModel_gap_0x4A60_sub_0x14E0[];
extern Vtx dMarioModel_gap_0x4A60_sub_0x15E0[];
extern Vtx dMarioModel_gap_0x4A60_sub_0x16E0[];
extern Vtx dMarioModel_gap_0x4A60_sub_0x17F0[];
extern Vtx dMarioModel_gap_0x4A60_sub_0x1900[];
extern Vtx dMarioModel_gap_0x4A60_sub_0x19E0[];
extern Vtx dMarioModel_gap_0x4A60_sub_0x340[];
extern Vtx dMarioModel_gap_0x4A60_sub_0x570[];
extern Vtx dMarioModel_gap_0x4A60_sub_0x730[];
extern Vtx dMarioModel_gap_0x4A60_sub_0x960[];
extern Vtx dMarioModel_gap_0x4A60_sub_0xB20[];
extern Vtx dMarioModel_gap_0x4A60_sub_0xC10[];
extern Vtx dMarioModel_gap_0x4A60_sub_0xD70[];
extern Vtx dMarioModel_gap_0x4A60_sub_0xDD0[];
extern Vtx dMarioModel_gap_0x4A60_sub_0xFD0[];
extern AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x2F4[];
extern AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x314[];

/* Forward decls — anim-chain pointer cells in gap_0x26D0 (defined later)
 * referenced by JointTree_post / gap_0x26D0_sub_0xC. */
extern AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x2DC[];
extern AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x2E0[];
extern AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x2E4[];
extern AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x2E8[];
extern AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x2F8[];
extern AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x2FC[];
extern AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x300[];
extern AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x304[];
extern AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x308[];
extern AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x30C[];
extern AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x310[];

/* Forward decls — anim-chain pointer cells in gap_0x4A60 (defined later)
 * referenced by JointTree_0x4590_post / gap_0x4A60_sub_0xC. */
extern AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x2FC[];
extern AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x300[];
extern AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x304[];
extern AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x308[];
extern AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x318[];
extern AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x31C[];
extern AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x320[];
extern AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x324[];
extern AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x328[];
extern AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x32C[];
extern AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x330[];

/* Forward decls — MObjSub * trailing-index cells of the Joint_0x0040_post
 * region (each cell is { MObjSub *, u32 zero pad }). Referenced by the
 * three small dispatch tables (gap_0x0000_sub_0x8, Joint_0x0020_post,
 * Joint_0x0040_post) that live earlier in the file. */
extern MObjSub *dMarioModel_Joint_0x0040_post_sub_0x6F0[];
extern MObjSub *dMarioModel_Joint_0x0040_post_sub_0x6F8[];
extern MObjSub *dMarioModel_Joint_0x0040_post_sub_0x700[];
extern MObjSub *dMarioModel_Joint_0x0040_post_sub_0x708[];
extern MObjSub *dMarioModel_Joint_0x0040_post_sub_0x718[];
extern MObjSub *dMarioModel_Joint_0x0040_post_sub_0x720[];
extern MObjSub *dMarioModel_Joint_0x0040_post_sub_0x728[];
extern MObjSub *dMarioModel_Joint_0x0040_post_sub_0x730[];
extern MObjSub *dMarioModel_Joint_0x0040_post_sub_0x738[];
extern MObjSub *dMarioModel_Joint_0x0040_post_sub_0x740[];
extern MObjSub *dMarioModel_Joint_0x0040_post_sub_0x748[];
extern MObjSub *dMarioModel_Joint_0x0040_post_sub_0x750[];

/* Forward decls — palette frames split out of Tex_0x65F0 (defined later
 * at file offsets 0x6BD8/0x6C00/0x6C28/0x6C50) referenced by gap_0x26D0_sub_0x3A8. */
extern u8 dMarioModel_Tex_0x67A0[];
extern u8 dMarioModel_Tex_0x69D0[];
extern u8 dMarioModel_Tex_0x6C78[];
extern u8 dMarioModel_Tex_0x6D68[];
extern u8 dMarioModel_Tex_0x6F98[];
extern u16 dMarioModel_palette_0x6BD8[];
extern u16 dMarioModel_palette_0x6C00[];
extern u16 dMarioModel_palette_0x6C28[];
extern u16 dMarioModel_palette_0x6C50[];

/* Forward decls — palette frames in 0x4A60 region (defined later at file
 * offsets 0x6528/0x6550/0x6578/0x65A0/0x65C8). */
extern u16 dMarioModel_gap_0x4A60_sub_0x1AC8[];
extern u16 dMarioModel_gap_0x4A60_sub_0x1AF0[];
extern u16 dMarioModel_gap_0x4A60_sub_0x1B18[];
extern u16 dMarioModel_gap_0x4A60_sub_0x1B40[];
extern u16 dMarioModel_gap_0x4A60_sub_0x1B68[];

extern MObjSub *dMarioModel_gap_0x26D0_sub_0xA60[];
extern MObjSub *dMarioModel_gap_0x26D0_sub_0xA68[];
extern MObjSub *dMarioModel_gap_0x26D0_sub_0xA98[];
extern MObjSub *dMarioModel_gap_0x26D0_sub_0xA90[];
extern MObjSub *dMarioModel_gap_0x26D0_sub_0xAA8[];
extern MObjSub *dMarioModel_gap_0x26D0_sub_0xA78[];
extern MObjSub *dMarioModel_gap_0x26D0_sub_0xA58[];
extern MObjSub *dMarioModel_gap_0x26D0_sub_0xA88[];
extern MObjSub *dMarioModel_gap_0x26D0_sub_0xAA0[];
extern MObjSub *dMarioModel_gap_0x26D0_sub_0xAB0[];
extern MObjSub *dMarioModel_gap_0x26D0_sub_0xA50[];
extern MObjSub *dMarioModel_gap_0x26D0_sub_0xA80[];

/* MObjSub-dispatch table at file 0x0000 (100 bytes, 25 u32 slots). Sparse
 * pointer array — 12 of 25 slots hold chain-encoded `MObjSub **` pointers
 * to the trailing-index cells of the original Joint_0x0040_post region;
 * the rest are NULL filler. The original splitter sliced this region into
 * three pieces (`gap_0x0000_sub_0x8`, `Joint_0x0020_post`, the first 0x20
 * bytes of `Joint_0x0040_post`) plus three internal PADs, but the .reloc
 * relationships only make sense as one continuous table. */
MObjSub **dMarioModel_gap_0x0000[25] = {
	NULL,                                            /* +0x00 (was PAD(8)) */
	NULL,                                            /* +0x04 */
	dMarioModel_Joint_0x0040_post_sub_0x6F0,        /* +0x08 → cell 0 */
	NULL,                                            /* +0x0C */
	dMarioModel_Joint_0x0040_post_sub_0x6F8,        /* +0x10 → cell 1 */
	dMarioModel_Joint_0x0040_post_sub_0x700,        /* +0x14 → cell 2 */
	NULL,                                            /* +0x18 (was PAD(8)) */
	NULL,                                            /* +0x1C */
	dMarioModel_Joint_0x0040_post_sub_0x708,        /* +0x20 → cell 3 (3-tuple) */
	NULL,                                            /* +0x24 */
	dMarioModel_Joint_0x0040_post_sub_0x718,        /* +0x28 → cell 4 */
	dMarioModel_Joint_0x0040_post_sub_0x720,        /* +0x2C → cell 5 */
	NULL,                                            /* +0x30 */
	NULL,                                            /* +0x34 */
	NULL,                                            /* +0x38 */
	dMarioModel_Joint_0x0040_post_sub_0x728,        /* +0x3C → cell 6 */
	dMarioModel_Joint_0x0040_post_sub_0x730,        /* +0x40 → cell 7 */
	NULL,                                            /* +0x44 */
	dMarioModel_Joint_0x0040_post_sub_0x738,        /* +0x48 → cell 8 */
	NULL,                                            /* +0x4C */
	dMarioModel_Joint_0x0040_post_sub_0x740,        /* +0x50 → cell 9 */
	dMarioModel_Joint_0x0040_post_sub_0x748,        /* +0x54 → cell 10 */
	NULL,                                            /* +0x58 */
	dMarioModel_Joint_0x0040_post_sub_0x750,        /* +0x5C → cell 11 */
	NULL,                                            /* +0x60 (was PAD(4)) */
};

/* The original Joint_0x0040_post block (file 0x0040..0x0798, 1880 bytes)
 * has been split: the dispatch header is now part of gap_0x0000 above;
 * the palette/sprite tables, 14 MObjSubs, and 12 trailing-index cells
 * follow. The `_sub_0xNN` suffix is still keyed on the original
 * Joint_0x0040_post-relative offset. */

/* Palette table A @ 0x0064 — 5 RGBA5551 palette frames in the gap_0x4A60
 * region. Same shape as the JointTree-side palette tables. */
u16 *dMarioModel_Joint_0x0040_post_sub_0x24[5] = {
	dMarioModel_gap_0x4A60_sub_0x1B68,
	dMarioModel_gap_0x4A60_sub_0x1AC8,
	dMarioModel_gap_0x4A60_sub_0x1AF0,
	dMarioModel_gap_0x4A60_sub_0x1B18,
	dMarioModel_gap_0x4A60_sub_0x1B40,
};

/* Sprite table @ 0x0078 — 4 CI4 texture frames. Mirrors the
 * gap_0x26D0_sub_0x398 sprite table. */
u8 *dMarioModel_Joint_0x0040_post_sub_0x38[4] = {
	dMarioModel_Tex_0x6F98,
	dMarioModel_Tex_0x6D68,dMarioModel_Tex_0x67A0,dMarioModel_Tex_0x69D0,
};

/* Palette table B @ 0x0088 — 5 RGBA5551 palette frames (one shared with
 * table A; the next four are the frames split out of Tex_0x65F0). */
u16 *dMarioModel_Joint_0x0040_post_sub_0x48[5] = {
	dMarioModel_gap_0x4A60_sub_0x1B68,
	dMarioModel_palette_0x6BD8,
	dMarioModel_palette_0x6C00,
	dMarioModel_palette_0x6C28,
	dMarioModel_palette_0x6C50,
};

PAD(4);  /* original Joint_0x0040_post+0x5C: zero word */

/* === 14 individual MObjSub structs (file 0x00A0..0x0730, 0x690 bytes) ===
 * Each entry is referenced from one slot of a trailing-index cell below.
 * Decoded field-by-field from the baserom; the .sprites/.palettes pointer
 * fields are wired to the inline tables above (sub_0x24/sub_0x38/sub_0x48). */

/* MObjSub @ Joint_0x0040_post+0x60 (entry 0) */
MObjSub dMarioModel_Joint_0x0040_post_sub_0x60[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0040, 0x0000, 0x0040, 0x0018,
		1,
		0.0f, -0.10000000149011612f,
		1.0f, 0.8199999928474426f,
		0.0f, 1.0f,
		(void**)dMarioModel_Joint_0x0040_post_sub_0x24,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0018, 0x0040, 0x0018,
		0.0f, -0.10000000149011612f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0040_post+0xD8 (entry 1) */
MObjSub dMarioModel_Joint_0x0040_post_sub_0xD8[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x00, 0xCE, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0040_post+0x150 (entry 2) */
MObjSub dMarioModel_Joint_0x0040_post_sub_0x150[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x00, 0xCE, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0040_post+0x1C8 (entry 3) */
MObjSub dMarioModel_Joint_0x0040_post_sub_0x1C8[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dMarioModel_Joint_0x0040_post_sub_0x38,
		0x007D, 0x0010, 0x0040, 0x0020,
		1,
		0.24500000476837158f, 0.39160001277923584f,
		0.5099999904632568f, 0.5f,
		0.24500000476837158f, 0.5099999904632568f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0040, 0x0020,
		0.24500000476837158f, 0.39160001277923584f,
		0.24500000476837158f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x8C, 0x66, 0x66, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0040_post+0x240 (entry 4) */
MObjSub dMarioModel_Joint_0x0040_post_sub_0x240[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x006A, 0x000B, 0x0020, 0x0018,
		0,
		0.32499998807907104f, 0.09000000357627869f,
		0.3499999940395355f, 0.30000001192092896f,
		0.32499998807907104f, 0.3499999940395355f,
		(void**)dMarioModel_Joint_0x0040_post_sub_0x48,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0010,
		0x0018, 0x0020, 0x0018,
		0.32499998807907104f, 0.09000000357627869f,
		0.32499998807907104f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0040_post+0x2B8 (entry 5) */
MObjSub dMarioModel_Joint_0x0040_post_sub_0x2B8[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x00, 0xCE, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0040_post+0x330 (entry 6) */
MObjSub dMarioModel_Joint_0x0040_post_sub_0x330[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x00, 0xCE, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0040_post+0x3A8 (entry 7) */
MObjSub dMarioModel_Joint_0x0040_post_sub_0x3A8[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x00, 0xCE, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0040_post+0x420 (entry 8) */
MObjSub dMarioModel_Joint_0x0040_post_sub_0x420[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0x50, 0x00, 0x46, 0x00 } },
		{ { 0x24, 0x00, 0x1C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0040_post+0x498 (entry 9) */
MObjSub dMarioModel_Joint_0x0040_post_sub_0x498[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0x63, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0040_post+0x510 (entry 10) */
MObjSub dMarioModel_Joint_0x0040_post_sub_0x510[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0x63, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0040_post+0x588 (entry 11) */
MObjSub dMarioModel_Joint_0x0040_post_sub_0x588[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0x50, 0x00, 0x46, 0x00 } },
		{ { 0x24, 0x00, 0x1C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0040_post+0x600 (entry 12) */
MObjSub dMarioModel_Joint_0x0040_post_sub_0x600[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0x63, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0040_post+0x678 (entry 13) */
MObjSub dMarioModel_Joint_0x0040_post_sub_0x678[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0x63, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* === 12 trailing-index cells (file 0x0730..0x0798, 0x68 bytes) ===
 * Each cell holds a chain pointer to one MObjSub (the 3-tuple cell holds 3)
 * followed by a 4-byte zero pad, except the 3-tuple ends with a single
 * zero pad after 3 pointers. */

MObjSub *dMarioModel_Joint_0x0040_post_sub_0x6F0[2] = {
	(MObjSub *)dMarioModel_Joint_0x0040_post_sub_0x60,
	NULL,
};

MObjSub *dMarioModel_Joint_0x0040_post_sub_0x6F8[2] = {
	(MObjSub *)dMarioModel_Joint_0x0040_post_sub_0x150,
	NULL,
};

MObjSub *dMarioModel_Joint_0x0040_post_sub_0x700[2] = {
	(MObjSub *)dMarioModel_Joint_0x0040_post_sub_0xD8,
	NULL,
};

/* 3-tuple cell: 3 chain pointers + 1 zero pad = 16 bytes. */
MObjSub *dMarioModel_Joint_0x0040_post_sub_0x708[4] = {
	(MObjSub *)dMarioModel_Joint_0x0040_post_sub_0x1C8,
	(MObjSub *)dMarioModel_Joint_0x0040_post_sub_0x240,
	(MObjSub *)dMarioModel_Joint_0x0040_post_sub_0x2B8,
	NULL,
};

MObjSub *dMarioModel_Joint_0x0040_post_sub_0x718[2] = {
	(MObjSub *)dMarioModel_Joint_0x0040_post_sub_0x3A8,
	NULL,
};

MObjSub *dMarioModel_Joint_0x0040_post_sub_0x720[2] = {
	(MObjSub *)dMarioModel_Joint_0x0040_post_sub_0x330,
	NULL,
};

MObjSub *dMarioModel_Joint_0x0040_post_sub_0x728[2] = {
	(MObjSub *)dMarioModel_Joint_0x0040_post_sub_0x510,
	NULL,
};

MObjSub *dMarioModel_Joint_0x0040_post_sub_0x730[2] = {
	(MObjSub *)dMarioModel_Joint_0x0040_post_sub_0x498,
	NULL,
};

MObjSub *dMarioModel_Joint_0x0040_post_sub_0x738[2] = {
	(MObjSub *)dMarioModel_Joint_0x0040_post_sub_0x420,
	NULL,
};

MObjSub *dMarioModel_Joint_0x0040_post_sub_0x740[2] = {
	(MObjSub *)dMarioModel_Joint_0x0040_post_sub_0x678,
	NULL,
};

MObjSub *dMarioModel_Joint_0x0040_post_sub_0x748[2] = {
	(MObjSub *)dMarioModel_Joint_0x0040_post_sub_0x600,
	NULL,
};

MObjSub *dMarioModel_Joint_0x0040_post_sub_0x750[2] = {
	(MObjSub *)dMarioModel_Joint_0x0040_post_sub_0x588,
	NULL,
};

/* Vtx: Vtx_0x0798 @ 0x798 (25 vertices) */
Vtx dMarioModel_Vtx_0x0798_Vtx[25] = {
	#include <MarioModel/Vtx_0x0798.vtx.inc.c>
};

/* Vtx: Vtx_0x0928 @ 0x928 (9 vertices) */
Vtx dMarioModel_Vtx_0x0928_Vtx[9] = {
	#include <MarioModel/Vtx_0x0928.vtx.inc.c>
};

/* Vtx: Vtx_0x09B8 @ 0x9B8 (4 vertices) */
Vtx dMarioModel_Vtx_0x09B8_Vtx[4] = {
	#include <MarioModel/Vtx_0x09B8.vtx.inc.c>
};

/* Vtx: Vtx_0x09F8 @ 0x9F8 (16 vertices) */
Vtx dMarioModel_Vtx_0x09F8_Vtx[16] = {
	#include <MarioModel/Vtx_0x09F8.vtx.inc.c>
};

/* Vtx: Vtx_0x0AF8 @ 0xAF8 (19 vertices) */
Vtx dMarioModel_Vtx_0x0AF8_Vtx[19] = {
	#include <MarioModel/Vtx_0x0AF8.vtx.inc.c>
};

/* Vtx: Vtx_0x0C28 @ 0xC28 (6 vertices) */
Vtx dMarioModel_Vtx_0x0C28_Vtx[6] = {
	#include <MarioModel/Vtx_0x0C28.vtx.inc.c>
};

/* Vtx: Vtx_0x0C88 @ 0xC88 (22 vertices) */
Vtx dMarioModel_Vtx_0x0C88_Vtx[22] = {
	#include <MarioModel/Vtx_0x0C88.vtx.inc.c>
};

/* Vtx: Vtx_0x0DE8 @ 0xDE8 (16 vertices) */
Vtx dMarioModel_Vtx_0x0DE8_Vtx[16] = {
	#include <MarioModel/Vtx_0x0DE8.vtx.inc.c>
};

/* Vtx: Vtx_0x0EE8 @ 0xEE8 (23 vertices) */
Vtx dMarioModel_Vtx_0x0EE8_Vtx[23] = {
	#include <MarioModel/Vtx_0x0EE8.vtx.inc.c>
};

/* Vtx: Vtx_0x1058 @ 0x1058 (9 vertices) */
Vtx dMarioModel_Vtx_0x1058_Vtx[9] = {
	#include <MarioModel/Vtx_0x1058.vtx.inc.c>
};

/* Vtx: Vtx_0x10E8 @ 0x10E8 (6 vertices) */
Vtx dMarioModel_Vtx_0x10E8_Vtx[6] = {
	#include <MarioModel/Vtx_0x10E8.vtx.inc.c>
};

/* Vtx: Vtx_0x1148 @ 0x1148 (16 vertices) */
Vtx dMarioModel_Vtx_0x1148_Vtx[16] = {
	#include <MarioModel/Vtx_0x1148.vtx.inc.c>
};

/* Vtx: Vtx_0x1248 @ 0x1248 (11 vertices) */
Vtx dMarioModel_Vtx_0x1248_Vtx[11] = {
	#include <MarioModel/Vtx_0x1248.vtx.inc.c>
};

/* Vtx: Vtx_0x12F8 @ 0x12F8 (6 vertices) */
Vtx dMarioModel_Vtx_0x12F8_Vtx[6] = {
	#include <MarioModel/Vtx_0x12F8.vtx.inc.c>
};

/* Vtx: Vtx_0x1358 @ 0x1358 (16 vertices) */
Vtx dMarioModel_Vtx_0x1358_Vtx[16] = {
	#include <MarioModel/Vtx_0x1358.vtx.inc.c>
};

/* Vtx: Vtx_0x1458 @ 0x1458 (11 vertices) */
Vtx dMarioModel_Vtx_0x1458_Vtx[11] = {
	#include <MarioModel/Vtx_0x1458.vtx.inc.c>
};

/* Vtx: Vtx_0x1508 @ 0x1508 (6 vertices) */
Vtx dMarioModel_Vtx_0x1508_Vtx[6] = {
	#include <MarioModel/Vtx_0x1508.vtx.inc.c>
};

/* Vtx: Vtx_0x1568 @ 0x1568 (16 vertices) */
Vtx dMarioModel_Vtx_0x1568_Vtx[16] = {
	#include <MarioModel/Vtx_0x1568.vtx.inc.c>
};

/* DisplayList: Joint_0x1668 @ 0x1668 (352 bytes, 44 cmds) */
Gfx dMarioModel_Joint_0x1668_DisplayList[44] = {
	#include <MarioModel/Joint_0x1668.dl.inc.c>
};

/* DisplayList: Joint_0x17C8 @ 0x17C8 (128 bytes, 16 cmds) */
Gfx dMarioModel_Joint_0x17C8_DisplayList[16] = {
	#include <MarioModel/Joint_0x17C8.dl.inc.c>
};

/* DisplayList: Joint_0x1848 @ 0x1848 (144 bytes, 18 cmds) */
Gfx dMarioModel_Joint_0x1848_DisplayList[18] = {
	#include <MarioModel/Joint_0x1848.dl.inc.c>
};

/* DisplayList: Joint_0x18D8 @ 0x18D8 (184 bytes, 23 cmds) */
Gfx dMarioModel_Joint_0x18D8_DisplayList[23] = {
	#include <MarioModel/Joint_0x18D8.dl.inc.c>
};

/* DisplayList: Joint_0x1990 @ 0x1990 (US 808 bytes/101 cmds, JP 824 bytes/103 cmds) */
#if defined(REGION_JP)
Gfx dMarioModel_Joint_0x1990_DisplayList[103] = {
#else
Gfx dMarioModel_Joint_0x1990_DisplayList[101] = {
#endif
	#include <MarioModel/Joint_0x1990.dl.inc.c>
};

/* DisplayList: Joint_0x1CB8 @ 0x1CB8 (128 bytes, 16 cmds) */
Gfx dMarioModel_Joint_0x1CB8_DisplayList[16] = {
	#include <MarioModel/Joint_0x1CB8.dl.inc.c>
};

/* DisplayList: Joint_0x1D38 @ 0x1D38 (144 bytes, 18 cmds) */
Gfx dMarioModel_Joint_0x1D38_DisplayList[18] = {
	#include <MarioModel/Joint_0x1D38.dl.inc.c>
};

/* DisplayList: Joint_0x1DC8 @ 0x1DC8 (184 bytes, 23 cmds) */
Gfx dMarioModel_Joint_0x1DC8_DisplayList[23] = {
	#include <MarioModel/Joint_0x1DC8.dl.inc.c>
};

/* DisplayList: Joint_0x1E80 @ 0x1E80 (144 bytes, 18 cmds) */
Gfx dMarioModel_Joint_0x1E80_DisplayList[18] = {
	#include <MarioModel/Joint_0x1E80.dl.inc.c>
};

/* DisplayList: Joint_0x1F10 @ 0x1F10 (184 bytes, 23 cmds) */
Gfx dMarioModel_Joint_0x1F10_DisplayList[23] = {
	#include <MarioModel/Joint_0x1F10.dl.inc.c>
};

/* DisplayList: Joint_0x1FC8 @ 0x1FC8 (120 bytes, 15 cmds) */
Gfx dMarioModel_Joint_0x1FC8_DisplayList[15] = {
	#include <MarioModel/Joint_0x1FC8.dl.inc.c>
};

/* DisplayList: Joint_0x2040 @ 0x2040 (144 bytes, 18 cmds) */
Gfx dMarioModel_Joint_0x2040_DisplayList[18] = {
	#include <MarioModel/Joint_0x2040.dl.inc.c>
};

/* DisplayList: Joint_0x20D0 @ 0x20D0 (184 bytes, 23 cmds) */
Gfx dMarioModel_Joint_0x20D0_DisplayList[23] = {
	#include <MarioModel/Joint_0x20D0.dl.inc.c>
};

/* DisplayList: Joint_0x2188 @ 0x2188 (120 bytes, 15 cmds) */
Gfx dMarioModel_Joint_0x2188_DisplayList[15] = {
	#include <MarioModel/Joint_0x2188.dl.inc.c>
};

/* DObjDesc: JointTree @ 0x2200 (28 entries) */
DObjDesc dMarioModel_JointTree[] = {
	{ 0, (void*)0x00000000, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMarioModel_Joint_0x1668_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 51.06291961669922f, 53.745887756347656f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x17C8_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { -0.10280100256204605f, -0.4999369978904724f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMarioModel_Joint_0x1848_DisplayList, { 40.34217071533203f, 3.999999989900971e-06f, 1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dMarioModel_Joint_0x18D8_DisplayList, { 35.965396881103516f, 0.00101500004529953f, 2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 72.0720443725586f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x1990_DisplayList, { 0.0f, 13.513498306274414f, -4.5f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -51.06291961669922f, 53.74599075317383f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x1CB8_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { 0.10735200345516205f, 0.49905699491500854f, 0.00950200017541647f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMarioModel_Joint_0x1D38_DisplayList, { 40.325016021728516f, -9.999999974752427e-07f, -2.300000051036477e-05f }, { 0.0f, 0.0f, -0.017805000767111778f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dMarioModel_Joint_0x1DC8_DisplayList, { 35.993019104003906f, 0.001016999944113195f, -1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 35.0625114440918f, -17.551250457763672f, 3.520073890686035f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 31.6803035736084f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMarioModel_Joint_0x1E80_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.11142999678850174f, -0.08334500342607498f, -0.03497999906539917f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x1F10_DisplayList, { 55.57932662963867f, 3.999999989900971e-06f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 66.10771179199219f, 1.3644230365753174f, 2.316188097000122f }, { 0.0f, -9.000000318337698e-06f, -1.6418110132217407f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dMarioModel_Joint_0x1FC8_DisplayList, { 0.0f, -1.2999999853491317e-05f, -7.000000096013537e-06f }, { -0.07527299970388412f, -0.4641610085964203f, 0.21304699778556824f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -31.680540084838867f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMarioModel_Joint_0x2040_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.10911700129508972f, 0.08337900042533875f, -0.018825000151991844f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x20D0_DisplayList, { 55.579776763916016f, 3.999999989900971e-06f, -7.000000096013537e-06f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 65.8060302734375f, 1.3083360195159912f, 2.316215991973877f }, { 0.0f, 9.000000318337698e-06f, -1.6418240070343018f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dMarioModel_Joint_0x2188_DisplayList, { 0.0f, 0.0f, -3.999999989900971e-06f }, { 0.030578000470995903f, 0.4896720051765442f, 0.19668099284172058f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 120.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* AObjEvent32 ** dispatch table @ file 0x2680 (100 bytes, 25 slots). NOT
 * additional DObjDesc entries — the chain-encoded values would decode as
 * f32 ~e-33 if read as DObjDesc. 12 chain pointers at offsets 0x08, 0x10,
 * 0x14, 0x20, 0x28, 0x2C, 0x3C, 0x40, 0x48, 0x50, 0x54, 0x5C; the rest
 * are NULL filler.
 *
 * Each target is a `gap_0x26D0_sub_0x2DC..0x310` cell holding 1, 3, or 4
 * `AObjEvent32 *` script entries. Likely a per-joint anim/material
 * dispatch lookup keyed by joint slot in JointTree. Same 25-slot shape
 * (with PAD(8) prefix) is used by JointTree_0x4590_post and by the
 * file-header `gap_0x0000` MObjSub** dispatch table. */
AObjEvent32 **dMarioModel_JointTree_post[25] = {
	NULL, NULL,
	dMarioModel_gap_0x26D0_sub_0x2DC,                     /* +0x08 */
	NULL,
	dMarioModel_gap_0x26D0_sub_0x2E0,                     /* +0x10 */
	dMarioModel_gap_0x26D0_sub_0x2E4,                     /* +0x14 */
	NULL, NULL,
	dMarioModel_gap_0x26D0_sub_0x2E8,                     /* +0x20 */
	NULL,
	dMarioModel_gap_0x26D0_sub_0x2F4,                     /* +0x28 */
	dMarioModel_gap_0x26D0_sub_0x2F8,                     /* +0x2C */
	NULL, NULL, NULL,
	dMarioModel_gap_0x26D0_sub_0x2FC,                     /* +0x3C */
	dMarioModel_gap_0x26D0_sub_0x300,                     /* +0x40 */
	NULL,
	dMarioModel_gap_0x26D0_sub_0x304,                     /* +0x48 */
	NULL,
	dMarioModel_gap_0x26D0_sub_0x308,                     /* +0x50 (was gap_0x26D0+0x0) */
	dMarioModel_gap_0x26D0_sub_0x30C,                     /* +0x54 (was gap_0x26D0+0x4) */
	NULL,                                                  /* +0x58 (was gap_0x26D0+0x8) */
	dMarioModel_gap_0x26D0_sub_0x310,                     /* +0x5C (was gap_0x26D0+0xC) */
	NULL,                                                  /* +0x60 (was gap_0x26D0+0x10) */
};

/* gap sub-block @ 0x26E4 (was gap+0x14, 48 bytes) — AObjEvent32 anim script */
u32 dMarioModel_gap_0x26D0_sub_0x14[12] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* AObjEvent32 anim/matanim scripts pointed to by sub_0x2DC..0x308 cells. */
u32 dMarioModel_gap_0x26D0_sub_0x44[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFF0000FF,  /* -1.7014635547491816e+38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFE700FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF7E78CFF,  /* -9.392814959746075e+33f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x5242FFFF,  /* 209379639296.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x00CE00FF,  /* 1.8918469539654592e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x26D0_sub_0x74[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFF0000FF,  /* -1.7014635547491816e+38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFE700FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF7E78CFF,  /* -9.392814959746075e+33f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x5242FFFF,  /* 209379639296.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x00CE00FF,  /* 1.8918469539654592e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x26D0_sub_0xA4[12] = {
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(48),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x26D0_sub_0xD4[12] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x26D0_sub_0x104[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFF0000FF,  /* -1.7014635547491816e+38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFE700FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x7B2108FF,  /* 8.361422566823776e+35f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x5242FFFF,  /* 209379639296.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x00CE00FF,  /* 1.8918469539654592e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x26D0_sub_0x134[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFF0000FF,  /* -1.7014635547491816e+38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFE700FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF7E78CFF,  /* -9.392814959746075e+33f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x5242FFFF,  /* 209379639296.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x00CE00FF,  /* 1.8918469539654592e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x26D0_sub_0x164[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFF0000FF,  /* -1.7014635547491816e+38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFE700FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF7E78CFF,  /* -9.392814959746075e+33f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x5242FFFF,  /* 209379639296.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x00CE00FF,  /* 1.8918469539654592e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x26D0_sub_0x194[17] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0x83271400,  /* -4.909984802087e-37f */
	    0x240F1100,  /* 3.102258169318875e-17f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00530000,  /* 7.62234618111327e-39f */
	    0x000F0000,  /* 1.3775324423698682e-39f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00278700,  /* 3.630013225088723e-39f */
	    0x240F1100,  /* 3.102258169318875e-17f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x36120800,  /* 2.1760351955890656e-06f */
	    0x17070000,  /* 4.362085261510107e-25f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x50004600,  /* 8608284672.0f */
	    0x24001C00,  /* 2.7779292538152034e-17f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x26D0_sub_0x1D8[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x0000F7FF,  /* 8.896423560458966e-41f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xBD009CFF,  /* -0.03139972314238548f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x521008FF,  /* 154656555008.0f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xEF0018FF,  /* -3.964429968025605e+28f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xEF6300FF,  /* -7.025430143289846e+28f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x26D0_sub_0x208[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x0000F7FF,  /* 8.896423560458966e-41f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xBD009CFF,  /* -0.03139972314238548f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x521008FF,  /* 154656555008.0f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xEF0018FF,  /* -3.964429968025605e+28f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xEF6300FF,  /* -7.025430143289846e+28f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x26D0_sub_0x238[17] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0x83271400,  /* -4.909984802087e-37f */
	    0x240F1100,  /* 3.102258169318875e-17f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00530000,  /* 7.62234618111327e-39f */
	    0x000F0000,  /* 1.3775324423698682e-39f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00278700,  /* 3.630013225088723e-39f */
	    0x240F1100,  /* 3.102258169318875e-17f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x36120800,  /* 2.1760351955890656e-06f */
	    0x17070000,  /* 4.362085261510107e-25f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x50004600,  /* 8608284672.0f */
	    0x24001C00,  /* 2.7779292538152034e-17f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x26D0_sub_0x27C[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x0000F7FF,  /* 8.896423560458966e-41f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xBD009CFF,  /* -0.03139972314238548f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x521008FF,  /* 154656555008.0f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xEF0018FF,  /* -3.964429968025605e+28f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xEF6300FF,  /* -7.025430143289846e+28f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x26D0_sub_0x2AC[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x0000F7FF,  /* 8.896423560458966e-41f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xBD009CFF,  /* -0.03139972314238548f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x521008FF,  /* 154656555008.0f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xEF0018FF,  /* -3.964429968025605e+28f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xEF6300FF,  /* -7.025430143289846e+28f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* AObj32 anim-event chain pointer cells. Each 4-byte cell is a single
 * pointer to a per-track AObjEvent32 script (sub_0x14, 0x44, ... below). */
AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x2DC[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x26D0_sub_0x14,
};

AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x2E0[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x26D0_sub_0x74,
};

AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x2E4[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x26D0_sub_0x44,
};

/* 3-pointer cell: sprites/sub-tracks for a single joint */
AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x2E8[3] = {
	(AObjEvent32 *)dMarioModel_gap_0x26D0_sub_0xA4,
	(AObjEvent32 *)dMarioModel_gap_0x26D0_sub_0xD4,
	(AObjEvent32 *)dMarioModel_gap_0x26D0_sub_0x104,
};

AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x2F4[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x26D0_sub_0x164,
};

AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x2F8[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x26D0_sub_0x134,
};

AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x2FC[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x26D0_sub_0x208,
};

AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x300[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x26D0_sub_0x1D8,
};

AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x304[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x26D0_sub_0x194,
};

AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x308[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x26D0_sub_0x2AC,
};

AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x30C[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x26D0_sub_0x27C,
};

/* 16-byte AObjEvent32 *[4] cell: 1 chain pointer at offset 0, 3 NULL slots. */
AObjEvent32 *dMarioModel_gap_0x26D0_sub_0x310[4] = {
	(AObjEvent32 *)dMarioModel_gap_0x26D0_sub_0x238,
	NULL, NULL, NULL,
};

/* gap sub-block @ 0x29F0 (was gap+0x320, 100 bytes) */
MObjSub **dMarioModel_gap_0x26D0_sub_0x320[25] = {
	NULL,
	NULL,
	dMarioModel_gap_0x26D0_sub_0xA50,
	NULL,
	dMarioModel_gap_0x26D0_sub_0xA58,
	dMarioModel_gap_0x26D0_sub_0xA60,
	NULL,
	NULL,
	dMarioModel_gap_0x26D0_sub_0xA68,
	NULL,
	dMarioModel_gap_0x26D0_sub_0xA78,
	dMarioModel_gap_0x26D0_sub_0xA80,
	NULL,
	NULL,
	NULL,
	dMarioModel_gap_0x26D0_sub_0xA88,
	dMarioModel_gap_0x26D0_sub_0xA90,
	NULL,
	dMarioModel_gap_0x26D0_sub_0xA98,
	NULL,
	dMarioModel_gap_0x26D0_sub_0xAA0,
	dMarioModel_gap_0x26D0_sub_0xAA8,
	NULL,
	dMarioModel_gap_0x26D0_sub_0xAB0,
	NULL,
};

/* MObjSub.palettes table @ 0x2A54 — referenced by sub_0x3C0+0x2C.
 * Five RGBA5551 palette frames (animated). */
u16 *dMarioModel_gap_0x26D0_sub_0x384[5] = {
	(u16 *)dMarioModel_gap_0x4A60_sub_0x1B68,
	(u16 *)dMarioModel_gap_0x4A60_sub_0x1AC8,
	(u16 *)dMarioModel_gap_0x4A60_sub_0x1AF0,
	(u16 *)dMarioModel_gap_0x4A60_sub_0x1B18,
	(u16 *)dMarioModel_gap_0x4A60_sub_0x1B40,
};

/* MObjSub.sprites table @ 0x2A68 — referenced by sub_0x528+0x4.
 * Four CI4 texture-frame pointers; second points at the standalone
 * Tex_0x6D68 block (split out of the original Tex_0x6C78 region), the
 * last two are sub-regions of Tex_0x65F0. */
u8 *dMarioModel_gap_0x26D0_sub_0x398[4] = {
	(u8 *)dMarioModel_Tex_0x6F98,
	(u8 *)dMarioModel_Tex_0x6D68,dMarioModel_Tex_0x67A0,dMarioModel_Tex_0x69D0,
};

/* MObjSub.palettes table @ 0x2A78 — referenced by sub_0x5A0+0x2C.
 * Six RGBA5551 palette frames; first is in 0x4A60 region, the next four
 * are the frames split out of Tex_0x65F0; last is NULL terminator. */
u16 *dMarioModel_gap_0x26D0_sub_0x3A8[6] = {
	(u16 *)dMarioModel_gap_0x4A60_sub_0x1B68,
	dMarioModel_palette_0x6BD8,
	dMarioModel_palette_0x6C00,
	dMarioModel_palette_0x6C28,
	dMarioModel_palette_0x6C50,
	NULL,
};

/* MObjSub @ 0x2A90 */
MObjSub dMarioModel_gap_0x26D0_sub_0x3C0[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x002E, 0x0006, 0x0020, 0x0018,
		0,
		0.15669000148773193f, -0.01940000057220459f,
		0.686618983745575f, 0.8100000023841858f,
		0.15669000148773193f, 0.686618983745575f,
		(void**)dMarioModel_gap_0x26D0_sub_0x384,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0018, 0x0020, 0x0018,
		0.15669000148773193f, -0.01940000057220459f,
		0.15669000148773193f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2B08 */
MObjSub dMarioModel_gap_0x26D0_sub_0x438[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x00, 0xCE, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2B80 */
MObjSub dMarioModel_gap_0x26D0_sub_0x4B0[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x00, 0xCE, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2BF8 */
MObjSub dMarioModel_gap_0x26D0_sub_0x528[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dMarioModel_gap_0x26D0_sub_0x398,
		0x007D, 0x0018, 0x0040, 0x0020,
		0,
		0.3725000023841858f, 0.39160001277923584f,
		0.2549999952316284f, 0.5f,
		0.3725000023841858f, 0.2549999952316284f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0040, 0x0020,
		0.3725000023841858f, 0.39160001277923584f,
		0.3725000023841858f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x8C, 0x66, 0x66, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2C70 */
MObjSub dMarioModel_gap_0x26D0_sub_0x5A0[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x006A, 0x000B, 0x0020, 0x0018,
		0,
		0.32499998807907104f, 0.11400000005960464f,
		0.3499999940395355f, 0.30000001192092896f,
		0.32499998807907104f, 0.3499999940395355f,
		(void**)dMarioModel_gap_0x26D0_sub_0x3A8,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0010,
		0x0018, 0x0020, 0x0018,
		0.32499998807907104f, 0.11400000005960464f,
		0.32499998807907104f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2CE8 */
MObjSub dMarioModel_gap_0x26D0_sub_0x618[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x00, 0xCE, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2D60 */
MObjSub dMarioModel_gap_0x26D0_sub_0x690[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x00, 0xCE, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2DD8 */
MObjSub dMarioModel_gap_0x26D0_sub_0x708[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x00, 0xCE, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2E50 */
MObjSub dMarioModel_gap_0x26D0_sub_0x780[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0x50, 0x00, 0x46, 0x00 } },
		{ { 0x24, 0x00, 0x1C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2EC8 */
MObjSub dMarioModel_gap_0x26D0_sub_0x7F8[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0x63, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2F40 */
MObjSub dMarioModel_gap_0x26D0_sub_0x870[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0x63, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2FB8 */
MObjSub dMarioModel_gap_0x26D0_sub_0x8E8[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0x50, 0x00, 0x46, 0x00 } },
		{ { 0x24, 0x00, 0x1C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3030 */
MObjSub dMarioModel_gap_0x26D0_sub_0x960[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0x63, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x30A8 */
MObjSub dMarioModel_gap_0x26D0_sub_0x9D8[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0x63, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x3120 (was gap+0xA50, 8 bytes) */
MObjSub *dMarioModel_gap_0x26D0_sub_0xA50[2] = {
	(MObjSub *)dMarioModel_gap_0x26D0_sub_0x3C0,
	NULL,
};

/* gap sub-block @ 0x3128 (was gap+0xA58, 8 bytes) */
MObjSub *dMarioModel_gap_0x26D0_sub_0xA58[2] = {
	(MObjSub *)dMarioModel_gap_0x26D0_sub_0x4B0,
	NULL,
};

/* gap sub-block @ 0x3130 (was gap+0xA60, 8 bytes) */
MObjSub *dMarioModel_gap_0x26D0_sub_0xA60[2] = {
	(MObjSub *)dMarioModel_gap_0x26D0_sub_0x438,
	NULL,
};

/* gap sub-block @ 0x3138 (was gap+0xA68, 16 bytes) */
MObjSub *dMarioModel_gap_0x26D0_sub_0xA68[4] = {
	(MObjSub *)dMarioModel_gap_0x26D0_sub_0x528,
	(MObjSub *)dMarioModel_gap_0x26D0_sub_0x5A0,
	(MObjSub *)dMarioModel_gap_0x26D0_sub_0x618,
	NULL,
};

/* gap sub-block @ 0x3148 (was gap+0xA78, 8 bytes) */
MObjSub *dMarioModel_gap_0x26D0_sub_0xA78[2] = {
	(MObjSub *)dMarioModel_gap_0x26D0_sub_0x708,
	NULL,
};

/* gap sub-block @ 0x3150 (was gap+0xA80, 8 bytes) */
MObjSub *dMarioModel_gap_0x26D0_sub_0xA80[2] = {
	(MObjSub *)dMarioModel_gap_0x26D0_sub_0x690,
	NULL,
};

/* gap sub-block @ 0x3158 (was gap+0xA88, 8 bytes) */
MObjSub *dMarioModel_gap_0x26D0_sub_0xA88[2] = {
	(MObjSub *)dMarioModel_gap_0x26D0_sub_0x870,
	NULL,
};

/* gap sub-block @ 0x3160 (was gap+0xA90, 8 bytes) */
MObjSub *dMarioModel_gap_0x26D0_sub_0xA90[2] = {
	(MObjSub *)dMarioModel_gap_0x26D0_sub_0x7F8,
	NULL,
};

/* gap sub-block @ 0x3168 (was gap+0xA98, 8 bytes) */
MObjSub *dMarioModel_gap_0x26D0_sub_0xA98[2] = {
	(MObjSub *)dMarioModel_gap_0x26D0_sub_0x780,
	NULL,
};

/* gap sub-block @ 0x3170 (was gap+0xAA0, 8 bytes) */
MObjSub *dMarioModel_gap_0x26D0_sub_0xAA0[2] = {
	(MObjSub *)dMarioModel_gap_0x26D0_sub_0x9D8,
	NULL,
};

/* gap sub-block @ 0x3178 (was gap+0xAA8, 8 bytes) */
MObjSub *dMarioModel_gap_0x26D0_sub_0xAA8[2] = {
	(MObjSub *)dMarioModel_gap_0x26D0_sub_0x960,
	NULL,
};

/* gap sub-block @ 0x3180 (was gap+0xAB0, 8 bytes) */
MObjSub *dMarioModel_gap_0x26D0_sub_0xAB0[2] = {
	(MObjSub *)dMarioModel_gap_0x26D0_sub_0x8E8,
	NULL,
};

/* Vtx: Vtx_0x3188 @ 0x3188 (23 vertices) */
Vtx dMarioModel_Vtx_0x3188_Vtx[23] = {
	#include <MarioModel/Vtx_0x3188.vtx.inc.c>
};

/* Vtx: Vtx_0x32F8 @ 0x32F8 (7 vertices) */
Vtx dMarioModel_Vtx_0x32F8_Vtx[7] = {
	#include <MarioModel/Vtx_0x32F8.vtx.inc.c>
};

/* Vtx: Vtx_0x3368 @ 0x3368 (3 vertices) */
Vtx dMarioModel_Vtx_0x3368_Vtx[3] = {
	#include <MarioModel/Vtx_0x3368.vtx.inc.c>
};

/* Vtx: Vtx_0x3398 @ 0x3398 (16 vertices) */
Vtx dMarioModel_Vtx_0x3398_Vtx[16] = {
	#include <MarioModel/Vtx_0x3398.vtx.inc.c>
};

/* Vtx: Vtx_0x3498 @ 0x3498 (17 vertices) */
Vtx dMarioModel_Vtx_0x3498_Vtx[17] = {
	#include <MarioModel/Vtx_0x3498.vtx.inc.c>
};

/* Vtx: Vtx_0x35A8 @ 0x35A8 (6 vertices) */
Vtx dMarioModel_Vtx_0x35A8_Vtx[6] = {
	#include <MarioModel/Vtx_0x35A8.vtx.inc.c>
};

/* Vtx: Vtx_0x3608 @ 0x3608 (16 vertices) */
Vtx dMarioModel_Vtx_0x3608_Vtx[16] = {
	#include <MarioModel/Vtx_0x3608.vtx.inc.c>
};

/* Vtx: Vtx_0x3708 @ 0x3708 (11 vertices) */
Vtx dMarioModel_Vtx_0x3708_Vtx[11] = {
	#include <MarioModel/Vtx_0x3708.vtx.inc.c>
};

/* Vtx: Vtx_0x37B8 @ 0x37B8 (6 vertices) */
Vtx dMarioModel_Vtx_0x37B8_Vtx[6] = {
	#include <MarioModel/Vtx_0x37B8.vtx.inc.c>
};

/* Vtx: Vtx_0x3818 @ 0x3818 (6 vertices) */
Vtx dMarioModel_Vtx_0x3818_Vtx[6] = {
	#include <MarioModel/Vtx_0x3818.vtx.inc.c>
};

/* Vtx: Vtx_0x3878 @ 0x3878 (7 vertices) */
Vtx dMarioModel_Vtx_0x3878_Vtx[7] = {
	#include <MarioModel/Vtx_0x3878.vtx.inc.c>
};

/* Vtx: Vtx_0x38E8 @ 0x38E8 (3 vertices) */
Vtx dMarioModel_Vtx_0x38E8_Vtx[3] = {
	#include <MarioModel/Vtx_0x38E8.vtx.inc.c>
};

/* Vtx: Vtx_0x3918 @ 0x3918 (16 vertices) */
Vtx dMarioModel_Vtx_0x3918_Vtx[16] = {
	#include <MarioModel/Vtx_0x3918.vtx.inc.c>
};

/* Vtx: Vtx_0x3A18 @ 0x3A18 (6 vertices) */
Vtx dMarioModel_Vtx_0x3A18_Vtx[6] = {
	#include <MarioModel/Vtx_0x3A18.vtx.inc.c>
};

/* Vtx: Vtx_0x3A78 @ 0x3A78 (3 vertices) */
Vtx dMarioModel_Vtx_0x3A78_Vtx[3] = {
	#include <MarioModel/Vtx_0x3A78.vtx.inc.c>
};

/* Vtx: Vtx_0x3AA8 @ 0x3AA8 (10 vertices) */
Vtx dMarioModel_Vtx_0x3AA8_Vtx[10] = {
	#include <MarioModel/Vtx_0x3AA8.vtx.inc.c>
};

/* Vtx: Vtx_0x3B48 @ 0x3B48 (6 vertices) */
Vtx dMarioModel_Vtx_0x3B48_Vtx[6] = {
	#include <MarioModel/Vtx_0x3B48.vtx.inc.c>
};

/* Vtx: Vtx_0x3BA8 @ 0x3BA8 (3 vertices) */
Vtx dMarioModel_Vtx_0x3BA8_Vtx[3] = {
	#include <MarioModel/Vtx_0x3BA8.vtx.inc.c>
};

/* Vtx: Vtx_0x3BD8 @ 0x3BD8 (10 vertices) */
Vtx dMarioModel_Vtx_0x3BD8_Vtx[10] = {
	#include <MarioModel/Vtx_0x3BD8.vtx.inc.c>
};

/* DisplayList: Joint_0x3C78 @ 0x3C78 (304 bytes, 38 cmds) */
Gfx dMarioModel_Joint_0x3C78_DisplayList[38] = {
	#include <MarioModel/Joint_0x3C78.dl.inc.c>
};

/* DisplayList: Joint_0x3DA8 @ 0x3DA8 (88 bytes, 11 cmds) */
Gfx dMarioModel_Joint_0x3DA8_DisplayList[11] = {
	#include <MarioModel/Joint_0x3DA8.dl.inc.c>
};

/* DisplayList: Joint_0x3E00 @ 0x3E00 (96 bytes, 12 cmds) */
Gfx dMarioModel_Joint_0x3E00_DisplayList[12] = {
	#include <MarioModel/Joint_0x3E00.dl.inc.c>
};

/* DisplayList: Joint_0x3E60 @ 0x3E60 (152 bytes, 19 cmds) */
Gfx dMarioModel_Joint_0x3E60_DisplayList[19] = {
	#include <MarioModel/Joint_0x3E60.dl.inc.c>
};

/* DisplayList: Joint_0x3EF8 @ 0x3EF8 (US 712 bytes/89 cmds, JP 728 bytes/91 cmds) */
#if defined(REGION_JP)
Gfx dMarioModel_Joint_0x3EF8_DisplayList[91] = {
#else
Gfx dMarioModel_Joint_0x3EF8_DisplayList[89] = {
#endif
	#include <MarioModel/Joint_0x3EF8.dl.inc.c>
};

/* DisplayList: Joint_0x41C0 @ 0x41C0 (88 bytes, 11 cmds) */
Gfx dMarioModel_Joint_0x41C0_DisplayList[11] = {
	#include <MarioModel/Joint_0x41C0.dl.inc.c>
};

/* DisplayList: Joint_0x4218 @ 0x4218 (96 bytes, 12 cmds) */
Gfx dMarioModel_Joint_0x4218_DisplayList[12] = {
	#include <MarioModel/Joint_0x4218.dl.inc.c>
};

/* DisplayList: Joint_0x4278 @ 0x4278 (152 bytes, 19 cmds) */
Gfx dMarioModel_Joint_0x4278_DisplayList[19] = {
	#include <MarioModel/Joint_0x4278.dl.inc.c>
};

/* DisplayList: Joint_0x4310 @ 0x4310 (104 bytes, 13 cmds) */
Gfx dMarioModel_Joint_0x4310_DisplayList[13] = {
	#include <MarioModel/Joint_0x4310.dl.inc.c>
};

/* DisplayList: Joint_0x4378 @ 0x4378 (128 bytes, 16 cmds) */
Gfx dMarioModel_Joint_0x4378_DisplayList[16] = {
	#include <MarioModel/Joint_0x4378.dl.inc.c>
};

/* DisplayList: Joint_0x43F8 @ 0x43F8 (88 bytes, 11 cmds) */
Gfx dMarioModel_Joint_0x43F8_DisplayList[11] = {
	#include <MarioModel/Joint_0x43F8.dl.inc.c>
};

/* DisplayList: Joint_0x4450 @ 0x4450 (104 bytes, 13 cmds) */
Gfx dMarioModel_Joint_0x4450_DisplayList[13] = {
	#include <MarioModel/Joint_0x4450.dl.inc.c>
};

/* DisplayList: Joint_0x44B8 @ 0x44B8 (128 bytes, 16 cmds) */
Gfx dMarioModel_Joint_0x44B8_DisplayList[16] = {
	#include <MarioModel/Joint_0x44B8.dl.inc.c>
};

/* DisplayList: Joint_0x4538 @ 0x4538 (88 bytes, 11 cmds) */
Gfx dMarioModel_Joint_0x4538_DisplayList[11] = {
	#include <MarioModel/Joint_0x4538.dl.inc.c>
};

/* DObjDesc: JointTree_0x4590 @ 0x4590 (28 entries) */
DObjDesc dMarioModel_JointTree_0x4590[] = {
	{ 0, (void*)0x00000000, { 0.0f, 150.0f, -9.999999974752427e-07f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMarioModel_Joint_0x3C78_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 51.06291961669922f, 53.745887756347656f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
#if defined(REGION_JP)
	{ 4, (void*)dMarioModel_Joint_0x3DA8_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { -0.10734699666500092f, -0.4990589916706085f, 0.00949000008404255f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMarioModel_Joint_0x3E00_DisplayList, { 40.34217071533203f, 3.999999989900971e-06f, 1.4000000192027073e-05f }, { 0.0f, 0.0f, -0.017795000225305557f }, { 1.0f, 1.0f, 1.0f } },
#else
	{ 4, (void*)dMarioModel_Joint_0x3DA8_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { -0.10734499990940094f, -0.4990589916706085f, 0.009487000294029713f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMarioModel_Joint_0x3E00_DisplayList, { 40.34217071533203f, 3.999999989900971e-06f, 1.4000000192027073e-05f }, { 0.0f, 0.0f, -0.017788000404834747f }, { 1.0f, 1.0f, 1.0f } },
#endif
	{ 6, (void*)dMarioModel_Joint_0x3E60_DisplayList, { 35.965396881103516f, 0.00101500004529953f, 2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 72.0720443725586f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x3EF8_DisplayList, { 0.0f, 13.513498306274414f, -4.5f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -51.06291961669922f, 53.74599075317383f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x41C0_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { 0.1073480024933815f, 0.4990580081939697f, 0.009492999874055386f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMarioModel_Joint_0x4218_DisplayList, { 40.325016021728516f, -9.999999974752427e-07f, -2.300000051036477e-05f }, { 0.0f, 0.0f, -0.017788000404834747f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dMarioModel_Joint_0x4278_DisplayList, { 35.993019104003906f, 0.001016999944113195f, -1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 35.062339782714844f, -17.55162239074707f, 3.520087957382202f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 31.6803035736084f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
#if defined(REGION_JP)
	{ 3, (void*)dMarioModel_Joint_0x4310_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.04165399819612503f, -0.08303400129079819f, -0.04252900183200836f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x4378_DisplayList, { 55.57932662963867f, 3.999999989900971e-06f, 0.0f }, { 0.0f, 0.0f, 0.01440299954265356f }, { 1.0f, 1.0f, 1.0f } },
#else
	{ 3, (void*)dMarioModel_Joint_0x4310_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.04165500029921532f, -0.08303400129079819f, -0.042534999549388885f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x4378_DisplayList, { 55.57932662963867f, 3.999999989900971e-06f, 0.0f }, { 0.0f, 0.0f, 0.014414999634027481f }, { 1.0f, 1.0f, 1.0f } },
#endif
	{ 5, (void*)0x00000000, { 66.10771179199219f, 1.3644230365753174f, 2.316188097000122f }, { 0.0f, -9.000000318337698e-06f, -1.6418110132217407f }, { 1.0f, 1.0f, 1.0f } },
#if defined(REGION_JP)
	{ 6, (void*)dMarioModel_Joint_0x43F8_DisplayList, { 0.0f, -1.2999999853491317e-05f, -7.000000096013537e-06f }, { -0.17834100127220154f, -0.39459899067878723f, 0.20836299657821655f }, { 1.0f, 1.0f, 1.0f } },
#else
	{ 6, (void*)dMarioModel_Joint_0x43F8_DisplayList, { 0.0f, -1.2999999853491317e-05f, -7.000000096013537e-06f }, { -0.1783429980278015f, -0.39459899067878723f, 0.20836299657821655f }, { 1.0f, 1.0f, 1.0f } },
#endif
	{ 2, (void*)0x00000000, { -31.680540084838867f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
#if defined(REGION_JP)
	{ 3, (void*)dMarioModel_Joint_0x4450_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.04041999951004982f, 0.0830719992518425f, -0.026506999507546425f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x44B8_DisplayList, { 55.579776763916016f, 3.999999989900971e-06f, -7.000000096013537e-06f }, { 0.0f, 0.0f, 0.014657000079751015f }, { 1.0f, 1.0f, 1.0f } },
#else
	{ 3, (void*)dMarioModel_Joint_0x4450_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.040421001613140106f, 0.0830719992518425f, -0.026528000831604004f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x44B8_DisplayList, { 55.579776763916016f, 3.999999989900971e-06f, -7.000000096013537e-06f }, { 0.0f, 0.0f, 0.014697999693453312f }, { 1.0f, 1.0f, 1.0f } },
#endif
	{ 5, (void*)0x00000000, { 65.8060302734375f, 1.3083360195159912f, 2.316215991973877f }, { 0.0f, 9.000000318337698e-06f, -1.6418240070343018f }, { 1.0f, 1.0f, 1.0f } },
#if defined(REGION_JP)
	{ 6, (void*)dMarioModel_Joint_0x4538_DisplayList, { 0.0f, 0.0f, -3.999999989900971e-06f }, { 0.12845900654792786f, 0.4220089912414551f, 0.19265300035476685f }, { 1.0f, 1.0f, 1.0f } },
#else
	{ 6, (void*)dMarioModel_Joint_0x4538_DisplayList, { 0.0f, 0.0f, -3.999999989900971e-06f }, { 0.12846599519252777f, 0.4220089912414551f, 0.19265300035476685f }, { 1.0f, 1.0f, 1.0f } },
#endif
	{ 1, (void*)0x00000000, { -9.999999974752427e-07f, 0.0f, 119.99999237060547f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* AObjEvent32 ** dispatch table @ file 0x4A10 (100 bytes, 25 slots). Same
 * shape as JointTree_post — 12 chain pointers at offsets 0x08..0x5C, here
 * targeting gap_0x4A60_sub_0x2FC..0x330. */
AObjEvent32 **dMarioModel_JointTree_0x4590_post[25] = {
	NULL, NULL,
	dMarioModel_gap_0x4A60_sub_0x2FC,                     /* +0x08 */
	NULL,
	dMarioModel_gap_0x4A60_sub_0x300,                     /* +0x10 */
	dMarioModel_gap_0x4A60_sub_0x304,                     /* +0x14 */
	NULL, NULL,
	dMarioModel_gap_0x4A60_sub_0x308,                     /* +0x20 */
	NULL,
	dMarioModel_gap_0x4A60_sub_0x314,                     /* +0x28 */
	dMarioModel_gap_0x4A60_sub_0x318,                     /* +0x2C */
	NULL, NULL, NULL,
	dMarioModel_gap_0x4A60_sub_0x31C,                     /* +0x3C */
	dMarioModel_gap_0x4A60_sub_0x320,                     /* +0x40 */
	NULL,
	dMarioModel_gap_0x4A60_sub_0x324,                     /* +0x48 */
	NULL,
	dMarioModel_gap_0x4A60_sub_0x328,                     /* +0x50 (was gap_0x4A60+0x0) */
	dMarioModel_gap_0x4A60_sub_0x32C,                     /* +0x54 (was gap_0x4A60+0x4) */
	NULL,                                                  /* +0x58 (was gap_0x4A60+0x8) */
	dMarioModel_gap_0x4A60_sub_0x330,                     /* +0x5C (was gap_0x4A60+0xC) */
	NULL,                                                  /* +0x60 (was gap_0x4A60+0x10) */
};

/* AObjEvent32 anim/matanim scripts pointed to by sub_0x2FC..0x32C cells. */
u32 dMarioModel_gap_0x4A60_sub_0x14[12] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x4A60_sub_0x44[14] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFF0000FF,  /* -1.7014635547491816e+38f */
	    0xFFFFFF00,  /* nanf */
	    0x4C4C4C00,  /* 53555200.0f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFE700FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF7E78CFF,  /* -9.392814959746075e+33f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x5242FFFF,  /* 209379639296.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x00CE00FF,  /* 1.8918469539654592e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x4A60_sub_0x7C[14] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFF0000FF,  /* -1.7014635547491816e+38f */
	    0xFFFFFF00,  /* nanf */
	    0x4C4C4C00,  /* 53555200.0f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFE700FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF7E78CFF,  /* -9.392814959746075e+33f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x5242FFFF,  /* 209379639296.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x00CE00FF,  /* 1.8918469539654592e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x4A60_sub_0xB4[12] = {
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(48),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x4A60_sub_0xE4[12] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x4A60_sub_0x114[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFF0000FF,  /* -1.7014635547491816e+38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFE700FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x7B2108FF,  /* 8.361422566823776e+35f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x5242FFFF,  /* 209379639296.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x00CE00FF,  /* 1.8918469539654592e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x4A60_sub_0x144[14] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFF0000FF,  /* -1.7014635547491816e+38f */
	    0xFFFFFF00,  /* nanf */
	    0x4C4C4C00,  /* 53555200.0f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFE700FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF7E78CFF,  /* -9.392814959746075e+33f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x5242FFFF,  /* 209379639296.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x00CE00FF,  /* 1.8918469539654592e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x4A60_sub_0x17C[14] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFF0000FF,  /* -1.7014635547491816e+38f */
	    0xFFFFFF00,  /* nanf */
	    0x4C4C4C00,  /* 53555200.0f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFE700FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF7E78CFF,  /* -9.392814959746075e+33f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x5242FFFF,  /* 209379639296.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x00CE00FF,  /* 1.8918469539654592e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x4A60_sub_0x1B4[17] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0x83271400,  /* -4.909984802087e-37f */
	    0x240F1100,  /* 3.102258169318875e-17f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00530000,  /* 7.62234618111327e-39f */
	    0x000F0000,  /* 1.3775324423698682e-39f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00278700,  /* 3.630013225088723e-39f */
	    0x240F1100,  /* 3.102258169318875e-17f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x36120800,  /* 2.1760351955890656e-06f */
	    0x17070000,  /* 4.362085261510107e-25f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x50004600,  /* 8608284672.0f */
	    0x24001C00,  /* 2.7779292538152034e-17f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x4A60_sub_0x1F8[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x0000F7FF,  /* 8.896423560458966e-41f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xBD009CFF,  /* -0.03139972314238548f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x521008FF,  /* 154656555008.0f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xEF0018FF,  /* -3.964429968025605e+28f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xEF6300FF,  /* -7.025430143289846e+28f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x4A60_sub_0x228[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x0000F7FF,  /* 8.896423560458966e-41f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xBD009CFF,  /* -0.03139972314238548f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x521008FF,  /* 154656555008.0f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xEF0018FF,  /* -3.964429968025605e+28f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xEF6300FF,  /* -7.025430143289846e+28f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x4A60_sub_0x258[17] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0x83271400,  /* -4.909984802087e-37f */
	    0x240F1100,  /* 3.102258169318875e-17f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00530000,  /* 7.62234618111327e-39f */
	    0x000F0000,  /* 1.3775324423698682e-39f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00278700,  /* 3.630013225088723e-39f */
	    0x240F1100,  /* 3.102258169318875e-17f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x36120800,  /* 2.1760351955890656e-06f */
	    0x17070000,  /* 4.362085261510107e-25f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x50004600,  /* 8608284672.0f */
	    0x24001C00,  /* 2.7779292538152034e-17f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x4A60_sub_0x29C[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x0000F7FF,  /* 8.896423560458966e-41f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xBD009CFF,  /* -0.03139972314238548f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x521008FF,  /* 154656555008.0f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xEF0018FF,  /* -3.964429968025605e+28f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xEF6300FF,  /* -7.025430143289846e+28f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

u32 dMarioModel_gap_0x4A60_sub_0x2CC[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x0000F7FF,  /* 8.896423560458966e-41f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xBD009CFF,  /* -0.03139972314238548f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x521008FF,  /* 154656555008.0f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xEF0018FF,  /* -3.964429968025605e+28f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xEF6300FF,  /* -7.025430143289846e+28f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* AObj32 anim-event chain pointer cells (costume/JP variant — same shape as 0x26D0). */
AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x2FC[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x4A60_sub_0x14,
};

AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x300[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x4A60_sub_0x7C,
};

AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x304[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x4A60_sub_0x44,
};

AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x308[3] = {
	(AObjEvent32 *)dMarioModel_gap_0x4A60_sub_0xB4,
	(AObjEvent32 *)dMarioModel_gap_0x4A60_sub_0xE4,
	(AObjEvent32 *)dMarioModel_gap_0x4A60_sub_0x114,
};

AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x314[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x4A60_sub_0x17C,
};

AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x318[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x4A60_sub_0x144,
};

AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x31C[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x4A60_sub_0x228,
};

AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x320[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x4A60_sub_0x1F8,
};

AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x324[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x4A60_sub_0x1B4,
};

AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x328[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x4A60_sub_0x2CC,
};

AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x32C[1] = {
	(AObjEvent32 *)dMarioModel_gap_0x4A60_sub_0x29C,
};

/* 16-byte AObjEvent32 *[4] cell: 1 chain pointer at offset 0, 3 NULL slots. */
AObjEvent32 *dMarioModel_gap_0x4A60_sub_0x330[4] = {
	(AObjEvent32 *)dMarioModel_gap_0x4A60_sub_0x258,
	NULL, NULL, NULL,
};

/* gap sub-block @ 0x4DA0 (was gap+0x340, 368 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x340[23] = {
	#include <MarioModel/gap_0x4A60_sub_0x340.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x4B0 @ 0x4F10 (23 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x4B0[23] = {
	#include <MarioModel/gap_0x4A60_sub_0x4B0.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x4FD0 (was gap+0x570, 288 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x570[18] = {
	#include <MarioModel/gap_0x4A60_sub_0x570.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x690 @ 0x50F0 (19 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x690[19] = {
	#include <MarioModel/gap_0x4A60_sub_0x690.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x5190 (was gap+0x730, 368 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x730[23] = {
	#include <MarioModel/gap_0x4A60_sub_0x730.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x8A0 @ 0x5300 (23 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x8A0[23] = {
	#include <MarioModel/gap_0x4A60_sub_0x8A0.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x53C0 (was gap+0x960, 288 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x960[18] = {
	#include <MarioModel/gap_0x4A60_sub_0x960.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0xA80 @ 0x54E0 (19 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0xA80[19] = {
	#include <MarioModel/gap_0x4A60_sub_0xA80.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x5580 (was gap+0xB20, 128 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0xB20[8] = {
	#include <MarioModel/gap_0x4A60_sub_0xB20.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0xBA0 @ 0x5600 (13 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0xBA0[13] = {
	#include <MarioModel/gap_0x4A60_sub_0xBA0.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x5670 (was gap+0xC10, 112 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0xC10[7] = {
	#include <MarioModel/gap_0x4A60_sub_0xC10.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0xC80 @ 0x56E0 (29 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0xC80[29] = {
	#include <MarioModel/gap_0x4A60_sub_0xC80.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x57D0 (was gap+0xD70, 96 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0xD70[6] = {
	#include <MarioModel/gap_0x4A60_sub_0xD70.vtx.inc.c>
};

/* gap sub-block @ 0x5830 (was gap+0xDD0, 512 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0xDD0[32] = {
	#include <MarioModel/gap_0x4A60_sub_0xDD0.vtx.inc.c>
};

/* gap sub-block @ 0x5A30 (was gap+0xFD0, 112 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0xFD0[7] = {
	#include <MarioModel/gap_0x4A60_sub_0xFD0.vtx.inc.c>
};

/* gap sub-block @ 0x5AA0 (was gap+0x1040, 96 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x1040[6] = {
	#include <MarioModel/gap_0x4A60_sub_0x1040.vtx.inc.c>
};

/* gap sub-block @ 0x5B00 (was gap+0x10A0, 544 bytes) */
Gfx dMarioModel_DL_0x5B00[68] = {
	#include <MarioModel/DL_0x5B00.dl.inc.c>
};

/* gap sub-block @ 0x5D20 (was gap+0x12C0, 160 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x12C0[10] = {
	#include <MarioModel/gap_0x4A60_sub_0x12C0.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x1360 @ 0x5DC0 (13 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x1360[13] = {
	#include <MarioModel/gap_0x4A60_sub_0x1360.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x5E30 (was gap+0x13D0, 160 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x13D0[10] = {
	#include <MarioModel/gap_0x4A60_sub_0x13D0.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x1470 @ 0x5ED0 (13 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x1470[13] = {
	#include <MarioModel/gap_0x4A60_sub_0x1470.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x5F40 (was gap+0x14E0, 128 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x14E0[8] = {
	#include <MarioModel/gap_0x4A60_sub_0x14E0.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x1560 @ 0x5FC0 (15 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x1560[15] = {
	#include <MarioModel/gap_0x4A60_sub_0x1560.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6040 (was gap+0x15E0, 128 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x15E0[8] = {
	#include <MarioModel/gap_0x4A60_sub_0x15E0.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x1660 @ 0x60C0 (15 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x1660[15] = {
	#include <MarioModel/gap_0x4A60_sub_0x1660.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6140 (was gap+0x16E0, 160 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x16E0[10] = {
	#include <MarioModel/gap_0x4A60_sub_0x16E0.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x1780 @ 0x61E0 (13 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x1780[13] = {
	#include <MarioModel/gap_0x4A60_sub_0x1780.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6250 (was gap+0x17F0, 160 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x17F0[10] = {
	#include <MarioModel/gap_0x4A60_sub_0x17F0.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x1890 @ 0x62F0 (13 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x1890[13] = {
	#include <MarioModel/gap_0x4A60_sub_0x1890.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6360 (was gap+0x1900, 112 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x1900[7] = {
	#include <MarioModel/gap_0x4A60_sub_0x1900.vtx.inc.c>
};

/* gap sub-block @ 0x63D0 (was gap+0x1970, 112 bytes) */
Gfx dMarioModel_DL_0x63D0[14] = {
	#include <MarioModel/DL_0x63D0.dl.inc.c>
};

/* gap sub-block @ 0x6440 (was gap+0x19E0, 232 bytes).
 * Self-referencing block (reloc at +0x94 points back to itself); structure
 * unidentified. Not reached by any other intern reloc. Leave as u8 until a
 * code consumer is found. */
/* Vtx data @ 0x6440 (was gap+0x19E0, 112 B / 7 vertices) */
Vtx dMarioModel_gap_0x4A60_sub_0x19E0[7] = {
	#include <MarioModel/gap_0x4A60_sub_0x19E0.vtx.inc.c>
};

/* Gfx DL @ 0x64B0 (112 B / 14 cmds) */
Gfx dMarioModel_DL_0x64B0[14] = {
	#include <MarioModel/DL_0x64B0.dl.inc.c>
};

PAD(8);  /* trailing zeros after gap+0x19E0 DL */

/* MObjSub.palettes frames (RGBA5551 16-color palette + 8 bytes pad each).
 * Five frames cycled via gap_0x26D0_sub_0x384[5] / gap_0x4A60 equivalent. */
u16 dMarioModel_gap_0x4A60_sub_0x1AC8[16] = {
	#include <MarioModel/gap_0x4A60_sub_0x1AC8.palette.inc.c>
};
PAD(8);

u16 dMarioModel_gap_0x4A60_sub_0x1AF0[16] = {
	#include <MarioModel/gap_0x4A60_sub_0x1AF0.palette.inc.c>
};
PAD(8);

u16 dMarioModel_gap_0x4A60_sub_0x1B18[16] = {
	#include <MarioModel/gap_0x4A60_sub_0x1B18.palette.inc.c>
};
PAD(8);

u16 dMarioModel_gap_0x4A60_sub_0x1B40[16] = {
	#include <MarioModel/gap_0x4A60_sub_0x1B40.palette.inc.c>
};
PAD(8);

u16 dMarioModel_gap_0x4A60_sub_0x1B68[16] = {
	#include <MarioModel/gap_0x4A60_sub_0x1B68.palette.inc.c>
};
PAD(8);

/* Texture data @ 0x65F0 (1512 bytes — CI4). The original 1672-byte chunk
 * was split: 1512 bytes of texture proper, then four 40-byte RGBA5551
 * palette frames (sub_0x3A8 cycles them). */
/* @tex fmt=CI4 dim=32x24 */
u8 dMarioModel_Tex_0x65F0[432] = {
	#include <MarioModel/Tex_0x65F0.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x35 */
u8 dMarioModel_Tex_0x67A0[560] = {
	#include <MarioModel/Tex_0x67A0.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dMarioModel_Tex_0x69D0[520] = {
	#include <MarioModel/Tex_0x69D0.tex.inc.c>
};

/* RGBA5551 palette frames embedded after Tex_0x65F0. Each is 16 colors
 * + 8 bytes pad (40 bytes), referenced by gap_0x26D0_sub_0x3A8. */
u16 dMarioModel_palette_0x6BD8[16] = {
	#include <MarioModel/palette_0x6BD8.palette.inc.c>
};
PAD(8);

u16 dMarioModel_palette_0x6C00[16] = {
	#include <MarioModel/palette_0x6C00.palette.inc.c>
};
PAD(8);

u16 dMarioModel_palette_0x6C28[16] = {
	#include <MarioModel/palette_0x6C28.palette.inc.c>
};
PAD(8);

u16 dMarioModel_palette_0x6C50[16] = {
	#include <MarioModel/palette_0x6C50.palette.inc.c>
};
PAD(8);

/* Texture data @ 0x6C78 (240 bytes — CI4). Original 760-byte chunk was
 * split: 240 bytes referenced by Joint DLs at +0x0, then a separate
 * Tex_0x6D68 sprite frame referenced by gap_0x26D0_sub_0x398[1]. */
u8 dMarioModel_Tex_0x6C78[240] = {
	#include <MarioModel/Tex_0x6C78.tex.inc.c>
};

/* CI4 sprite frame @ 0x6D68 (520 bytes) — referenced as
 * gap_0x26D0_sub_0x398[1]. Split out of the original Tex_0x6C78 region
 * so the chain pointer resolves to a typed symbol. */
/* @tex fmt=CI4 dim=32x32 */
u8 dMarioModel_Tex_0x6D68[520] = {
	#include <MarioModel/Tex_0x6D68.tex.inc.c>
};

/* Palette: Lut_0x6F70 @ 0x6F70 (16 colors RGBA5551) */
u16 dMarioModel_Lut_0x6F70_palette[16] = {
	#include <MarioModel/Lut_0x6F70.palette.inc.c>
};

/* 8-byte alignment pad after Lut_0x6F70 before the next CI4 texture frame. */
PAD(8);

/* CI4 texture frame @ file 0x6F98 (528 bytes = 32x32 CI4 + 16-byte pad)
 * referenced by MObjSub.sprites tables (gap_0x26D0_sub_0x398[0] and
 * Joint_0x0040_post_sub_0x38[0]). */
/* @tex fmt=CI4 dim=32x33 */
u8 dMarioModel_Tex_0x6F98[528] = {
	#include <MarioModel/Tex_0x6F98.tex.inc.c>
};

/* Texture data for sprite Stock */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Stock (8(16)x10 ci4) */
u8 dMarioModel_Stock_tex[88] = {
    #include <MarioModel/Stock.ci4.inc.c>
};

/* "Stock LUTs" — 5 RGBA5551 16-color palette frames. MarioMain references
 * all 5 as `dMarioMain_stock_luts[+0x0..+0x10]` (costume color frames for
 * the Stock icon). First four are 16 colors + 8 bytes trailing pad
 * (40 bytes each); the last is exactly 32 bytes (no trailing pad). */
u16 dMarioModel_palette_0x7200[16] = {
	#include <MarioModel/palette_0x7200.palette.inc.c>
};
PAD(8);

u16 dMarioModel_gap_0x7220_sub_0x8[16] = {
	#include <MarioModel/gap_0x7220_sub_0x8.palette.inc.c>
};
PAD(8);

u16 dMarioModel_gap_0x7220_sub_0x30[16] = {
	#include <MarioModel/gap_0x7220_sub_0x30.palette.inc.c>
};
PAD(8);

u16 dMarioModel_gap_0x7220_sub_0x58[16] = {
	#include <MarioModel/gap_0x7220_sub_0x58.palette.inc.c>
};
PAD(8);

u16 dMarioModel_gap_0x7220_sub_0x80[16] = {
	#include <MarioModel/gap_0x7220_sub_0x80.palette.inc.c>
};

/* Sprite: Stock */

/* Sprite: Stock (8x10 ci4) */

Bitmap dMarioModel_Stock_bitmaps[] = {
	{ 8, 16, 0, 0, dMarioModel_Stock_tex, 10, 0 },
};

Sprite dMarioModel_Stock = {
	0, 0,
	8, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMarioModel_palette_0x7200,
	0, 1,
	1, 36,
	10, 10,
	2, 0,
	(Bitmap*)dMarioModel_Stock_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: FTEmblem */

Gfx dMarioModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (27(32)x25 i4) */
u8 dMarioModel_FTEmblem_tex[400] = {
    #include <MarioModel/FTEmblem.i4.inc.c>
};

Bitmap dMarioModel_FTEmblem_bitmaps[] = {
	{ 27, 32, 0, 0, dMarioModel_FTEmblem_tex, 25, 0 },
};

/* Sprite: FTEmblem (27x25 i4) */
Sprite dMarioModel_FTEmblem = {
	0, 0,
	27, 25,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	25, 25,
	4, 0,
	(Bitmap*)dMarioModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
