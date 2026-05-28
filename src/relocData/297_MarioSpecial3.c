/* relocData file 297: MarioSpecial3 — Mario's "Super Jump Punch" CI4 sprite
 * with its accompanying MObjSub binding (palettes, render params). */

#include "relocdata_types.h"
#include <sys/objtypes.h>

extern Vtx dMarioSpecial3_JointVerts_Vtx[];
extern u16 dMarioSpecial3_palette_0x0008[];
extern u16 dMarioSpecial3_palette_0x0030[];
extern u16 *dMarioSpecial3_palettes_0x00DC[];
extern MObjSub dMarioSpecial3_MObjSub_0x00E8;
extern MObjSub *dMarioSpecial3_MObjSubArr_0x00160[];
extern MObjSub **dMarioSpecial3_mobjsubs_ptr_0x00D8[];

/* Raw data from file offset 0x0000 to 0x0058 (88 bytes) */
PAD(8);

/* Palette: 0x0008 (16 colors RGBA5551 + 4 zero pad entries = 40 bytes total) */
u16 dMarioSpecial3_palette_0x0008[20] = {
	#include <MarioSpecial3/palette_0x0008.palette.inc.c>
};

/* Palette: 0x0030 (16 colors RGBA5551 + 4 zero pad entries = 40 bytes total) */
u16 dMarioSpecial3_palette_0x0030[20] = {
	#include <MarioSpecial3/palette_0x0030.palette.inc.c>
};

/* Raw data from file offset 0x0058 to 0x0168 (272 bytes) */
/* @tex fmt=CI4 dim=16x16 */
u8 dMarioSpecial3_Tex_0x0058[128] = {
	#include <MarioSpecial3/Tex_0x0058.tex.inc.c>
};

/* @ 0x00D8, 4 bytes: pointer to the MObjSub array (file 0x160). */
MObjSub **dMarioSpecial3_mobjsubs_ptr_0x00D8[1] = {
	dMarioSpecial3_MObjSubArr_0x00160,
};

/* @ 0x00DC, 12 bytes: palette-pointer array — targeted by MObjSub.palettes at +0x2C. */
u16 *dMarioSpecial3_palettes_0x00DC[3] = {
	dMarioSpecial3_palette_0x0030,
	dMarioSpecial3_palette_0x0008,
	NULL,
};

/* @ 0x00E8, 120 bytes: MObjSub describing the CI4 texture rendering setup. */
MObjSub dMarioSpecial3_MObjSub_0x00E8 = {
	0x0000,                                            /* pad00 */
	G_IM_FMT_CI, G_IM_SIZ_16b,                                        /* fmt (CI), siz (16b) */
	(void **)0x00000000,                               /* sprites */
	0x0020, 0x0000, 0x0010, 0x0010,                    /* unk08, unk0A, unk0C, unk0E */
	0,                                                 /* unk10 */
	0.0f, 0.0f,                                        /* trau, trav */
	1.0f, 1.0f,                                        /* scau, scav */
	0.0f, 1.0f,                                        /* unk24, unk28 */
	(void **)dMarioSpecial3_palettes_0x00DC,           /* palettes (chain-rewritten) */
	0x0004,                                            /* flags (MOBJ_FLAG_PALETTE) */
	G_IM_FMT_CI, G_IM_SIZ_4b,                                        /* block_fmt (CI), block_siz (4b) */
	0x0010,                                            /* block_dxt */
	0x0010, 0x0010, 0x0010,                            /* unk36, unk38, unk3A */
	0.0f, 0.0f,                                        /* scrollu, scrollv */
	0.0f, 0.0f,                                        /* unk44, unk48 */
	0x00002005,                                        /* unk4C */
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },                    /* primcolor */
	0x00, 0x00, { 0x00, 0x00 },                        /* prim_l, prim_m, prim_pad */
	{ { 0x00, 0x00, 0x00, 0xFF } },                    /* envcolor */
	{ { 0x00, 0x00, 0x00, 0x00 } },                    /* blendcolor */
	{ { 0xFF, 0xFF, 0xFF, 0x00 } },                    /* light1color */
	{ { 0xFF, 0xFF, 0xFF, 0x00 } },                    /* light2color */
	0, 0,                                              /* unk68, unk6C */
	0, 0,                                              /* unk70, unk74 */
};

/* @ 0x00160, 8 bytes: NULL-terminated MObjSub* array — referenced by
 * mobjsubs_ptr_0x00D8. */
MObjSub *dMarioSpecial3_MObjSubArr_0x00160[2] = {
	&dMarioSpecial3_MObjSub_0x00E8,
	NULL,
};

/* Vtx: JointVerts @ 0x168 (7 vertices) */
Vtx dMarioSpecial3_JointVerts_Vtx[7] = {
	#include <MarioSpecial3/JointVerts.vtx.inc.c>
};

/* DisplayList: SuperJumpPunchDL @ 0x1D8 (184 bytes) */
Gfx dMarioSpecial3_SuperJumpPunchDL_DisplayList[23] = {
	#include <MarioSpecial3/SuperJumpPunchDL.dl.inc.c>
};
