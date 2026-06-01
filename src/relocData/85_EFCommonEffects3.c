/* relocData file 85: EFCommonEffects3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Gfx dEFCommonEffects3_MBallRays_DL_0x1908[];
extern Gfx dEFCommonEffects3_MBallRays_DL_0x2388[];
extern Gfx dEFCommonEffects3_MBallRays_DL_0x24A0[];
extern Gfx dEFCommonEffects3_MBallRays_DL_0x25B8[];
extern Gfx dEFCommonEffects3_MBallRays_DL_0x26D0[];
extern Gfx dEFCommonEffects3_MBallRays_DL_0x2810[];
extern u8 dEFCommonEffects3_MBallRays_Tex_0x09B8[];
extern u8 dEFCommonEffects3_MBallRays_Tex_0x0A40[];
extern u8 dEFCommonEffects3_MBallRays_Tex_0x0BC8[];
extern u8 dEFCommonEffects3_MBallRays_Tex_0x0DD0[];
extern u8 dEFCommonEffects3_MBallRays_Tex_0x0E58[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x0E98[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x0EC8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x0EF8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x0F28[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x0F58[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x0F88[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x0FB8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x0FE8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1018[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1048[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1078[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x10A8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x10D8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1108[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1138[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1168[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1198[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x11C8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x11F8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1228[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1258[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1288[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x12B8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x12E8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1318[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1348[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1378[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x13A8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x13D8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1408[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1438[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1468[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1498[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x14C8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x14F8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1528[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1558[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1588[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x15B8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x15E8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1618[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1648[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1678[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x16A8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x16D8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1708[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1738[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1768[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1798[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x17C8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x17F8[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1828[];
extern Vtx dEFCommonEffects3_MBallRays_Vtx_0x1858[];
extern u16 dEFCommonEffects3_MBallRays_palette_0x0918[];
extern u16 dEFCommonEffects3_MBallRays_palette_0x0940[];
extern u16 dEFCommonEffects3_MBallRays_palette_0x0968[];
extern u16 dEFCommonEffects3_MBallRays_palette_0x0990[];
extern u8 dEFCommonEffects3_Tex_0x0008[];
extern u8 dEFCommonEffects3_Tex_0x2BA8[];
extern Vtx dEFCommonEffects3_gap_0x0180_sub_0x190[];
extern Vtx dEFCommonEffects3_gap_0x0180_sub_0x1E0[];
extern Vtx dEFCommonEffects3_gap_0x0180_sub_0x230[];
extern Vtx dEFCommonEffects3_gap_0x0180_sub_0x270[];
extern Vtx dEFCommonEffects3_gap_0x2D20_sub_0x1A0[];
extern u32 dEFCommonEffects3_MBallRays_AnimJoint_0x720[];
extern u32 dEFCommonEffects3_MBallRays_AnimJoint_0x7C8[];

extern u32 dEFCommonEffects3_MBallRays_MatAnimJoint_data[];
extern u32 dEFCommonEffects3_MBallRays_MatAnimJoint_data_0x894[];
extern u32 dEFCommonEffects3_MBallRays_MatAnimJoint_data_0x8B8[];
extern u32 dEFCommonEffects3_MBallRays_MatAnimJoint_data_0x8DC[];
extern AObjEvent32 *dEFCommonEffects3_MBallRays_MatAnimJoint_ptrs_0x900[];
extern AObjEvent32 *dEFCommonEffects3_MBallRays_MatAnimJoint_ptrs_0x908[];
extern u8 dEFCommonEffects3_MBallRays_MatAnimJoint_data_trail_post[];
extern u32 dEFCommonEffects3_RebirthHalo_AnimJoint_data[];
extern u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x32C8[];
extern MObjSub *dEFCommonEffects3_gap_0x0180_sub_0x178[];
extern MObjSub *dEFCommonEffects3_gap_0x0180_sub_0x184[];
extern MObjSub dEFCommonEffects3_MBallRays_MObjSub_real[];
extern MObjSub dEFCommonEffects3_gap_0x0180_sub_0x10[];
extern MObjSub *dEFCommonEffects3_gap_0x2D20_sub_0x180[];
extern MObjSub *dEFCommonEffects3_gap_0x2D20_sub_0x188[];
extern MObjSub *dEFCommonEffects3_gap_0x2D20_sub_0x190[];
extern MObjSub *dEFCommonEffects3_gap_0x2D20_sub_0x198[];
extern MObjSub dEFCommonEffects3_ItemGetSwirl_MObjSub_real[];
extern u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x330C[];
extern u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x336C[];
extern u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x33CC[];
extern u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x342C[];

extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34A8[];
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34C4[];
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34E0[];
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34FC[];
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3518[];
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x351C[];
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3520[];
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3524[];

extern AObjEvent32 *dEFCommonEffects3_MBallRays_MatAnimJoint[];

/* Raw data from file offset 0x0000 to 0x0108 (264 bytes) */
PAD(8);

/* gap sub-block @ 0x0008 (was gap+0x8, 256 bytes) */
/* @tex fmt=IA8 dim=16x16 */
u8 dEFCommonEffects3_Tex_0x0008[256] = {
	#include <EFCommonEffects3/Tex_0x0008.tex.inc.c>
};

/* MBallRays_MObjSub was MIS-TYPED (had field-aliased chain pointers).
 * Wrapper pattern: 8 B PAD, 8 B MObjSub **head[2] (chains to gap_0x0180_sub_0x178/0x184),
 * MObjSub_real_a @ +0x10 (120 B, absorbs the former PAD(16)), then a
 * second MObjSub_real_b at 0x190 (120 B — same content as _a, was the
 * mis-typed gap_0x0180_sub_0x10 raw block). */
PAD(8);

/* MObjSub** head table @ 0x110. */
MObjSub **dEFCommonEffects3_MBallRays_MObjSub_head[2] = {
	(MObjSub **)dEFCommonEffects3_gap_0x0180_sub_0x178,
	(MObjSub **)dEFCommonEffects3_gap_0x0180_sub_0x184,
};

/* Real MObjSub @ 0x118 (120 B, ends at 0x190 — absorbs the former 16 B
 * PAD(16) that followed MBallRays_MObjSub). IA16 sprite. */
MObjSub dEFCommonEffects3_MBallRays_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x004A, 0x0000, 0x0010, 0x0010,
		0,
		0.0f, 0.28499999642372131f,
		1.0f, 0.43000000715255737f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.0f, 0.28499999642372131f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0xFF, 0xFF, 0xFF, 0x0C } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x66, 0x66, 0x66, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Second MObjSub @ 0x190 (120 B, was untyped gap_0x0180_sub_0x10).
 * Identical byte content to MBallRays_MObjSub_real — second sprite head. */
MObjSub dEFCommonEffects3_gap_0x0180_sub_0x10[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x004A, 0x0000, 0x0010, 0x0010,
		0,
		0.0f, 0.28499999642372131f,
		1.0f, 0.43000000715255737f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.0f, 0.28499999642372131f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0xFF, 0xFF, 0xFF, 0x0C } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x66, 0x66, 0x66, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x208 */
MObjSub dEFCommonEffects3_gap_0x0180_sub_0x88[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0047, 0x0001, 0x0010, 0x0010,
		0,
		0.007329999934881926f, 0.2785930037498474f,
		1.0f, 0.4473310112953186f,
		0.007329999934881926f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.007329999934881926f, 0.2785930037498474f,
		0.007329999934881926f, 0.0f,
		0x00002001,
		{ { 0xFF, 0xFF, 0xFF, 0x0C } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x66, 0x66, 0x66, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x280 */
MObjSub dEFCommonEffects3_gap_0x0180_sub_0x100[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x004A, 0x0000, 0x0010, 0x0010,
		0,
		0.0f, 0.2858000099658966f,
		1.0f, 0.4284000098705292f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.0f, 0.2858000099658966f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0xFF, 0xFF, 0xFF, 0x0C } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x66, 0x66, 0x66, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x02F8 (was gap+0x178, 12 bytes) */
MObjSub *dEFCommonEffects3_gap_0x0180_sub_0x178[3] = {
	dEFCommonEffects3_MBallRays_MObjSub_real,
	dEFCommonEffects3_gap_0x0180_sub_0x10,
	NULL,
};

/* gap sub-block @ 0x0304 (was gap+0x184, 12 bytes) */
MObjSub *dEFCommonEffects3_gap_0x0180_sub_0x184[3] = {
	(MObjSub *)dEFCommonEffects3_gap_0x0180_sub_0x88,
	(MObjSub *)dEFCommonEffects3_gap_0x0180_sub_0x100,
	NULL,
};

/* gap sub-block @ 0x0310 (was gap+0x190, 80 bytes) */
Vtx dEFCommonEffects3_gap_0x0180_sub_0x190[5] = {
	#include <EFCommonEffects3/gap_0x0180_sub_0x190.vtx.inc.c>
};

/* Vtx: gap_0x0180_sub_0x1E0 @ 0x360 (5 vertices) */
Vtx dEFCommonEffects3_gap_0x0180_sub_0x1E0[5] = {
	#include <EFCommonEffects3/gap_0x0180_sub_0x1E0.vtx.inc.c>
};

/* gap sub-block @ 0x03B0 (was gap+0x230, 64 bytes) */
Vtx dEFCommonEffects3_gap_0x0180_sub_0x230[4] = {
	#include <EFCommonEffects3/gap_0x0180_sub_0x230.vtx.inc.c>
};

/* gap sub-block @ 0x03F0 (was gap+0x270, 80 bytes) */
Vtx dEFCommonEffects3_gap_0x0180_sub_0x270[5] = {
	#include <EFCommonEffects3/gap_0x0180_sub_0x270.vtx.inc.c>
};

/* gap sub-block @ 0x0440 (was gap+0x2C0, 216 bytes) */
Gfx dEFCommonEffects3_DL_0x0440[27] = {
	#include <EFCommonEffects3/DL_0x0440.dl.inc.c>
};

/* gap sub-block @ 0x0518 (was gap+0x398, 240 bytes) */
Gfx dEFCommonEffects3_DL_0x0518[30] = {
	#include <EFCommonEffects3/DL_0x0518.dl.inc.c>
};

/* DObjDLLink @ 0x488 (2 entries) */
DObjDLLink dEFCommonEffects3_DLLink_0x0608[] = {
	{ 1, dEFCommonEffects3_DL_0x0440 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x498 (2 entries) */
DObjDLLink dEFCommonEffects3_DLLink_0x0618[] = {
	{ 1, dEFCommonEffects3_DL_0x0518 },
	{ 4, NULL },
};

/* DObjDesc: MBallRays @ 0x628 (5 entries) */
DObjDesc dEFCommonEffects3_MBallRays[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 3.0f, 3.0f, 3.0f } },
	{ 2, (void*)dEFCommonEffects3_DLLink_0x0608, { -9.0f, -4.5f, 0.0f }, { 0.0f, -31.38558006286621f, 0.0f }, { 36.41071701049805f, 2.9694700241088867f, 36.40849304199219f } },
	{ 2, (void*)dEFCommonEffects3_DLLink_0x0618, { -9.0f, -4.5f, 0.0f }, { 0.0f, 31.72962188720703f, 0.0f }, { 36.41071701049805f, 2.829946994781494f, 36.40849304199219f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x0710 to 0x0860 (336 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dEFCommonEffects3_MBallRays_AnimJoint[4] = {
	NULL,
	NULL,
	(AObjEvent32 *)dEFCommonEffects3_MBallRays_AnimJoint_0x720,
	(AObjEvent32 *)dEFCommonEffects3_MBallRays_AnimJoint_0x7C8,
};

u32 dEFCommonEffects3_MBallRays_AnimJoint_0x720[] = {
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x074, 0),
	    0x00000000,  /* 0.0f */
	    0xC1100000,  /* -9.0f */
	    0xC0900000,  /* -4.5f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x001, 90),
	    0x2F0EFA35,  /* 1.3003716159420975e-10f */
	aobjEvent32Cmd12(0x001, 40),
	aobjEvent32SetVal(0x380, 0),
	    0x40400000,  /* 3.0f */
	    0x40C1F230,  /* 6.060813903808594f */
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValRate(0x002, 0),
	    0x00000000,  /* 0.0f */
	    0xBEB2F263,  /* -0.3495055139064789f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0Rate(0x002, 50),
	    0xC1FB53D1,  /* -31.415925979614258f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3DD28390,  /* 0.1027899980545044f */
	    0x3E88CE70,  /* 0.2671999931335449f */
	    0x3DC826AB,  /* 0.09773000329732895f */
	aobjEvent32SetVal(0x100, 28),
	    0x405BEA92,  /* 3.436192035675049f */
	aobjEvent32SetValBlock(0x280, 12),
	    0x3FCDF0EF,  /* 1.6089152097702026f */
	    0x3FCDF192,  /* 1.6089346408843994f */
	aobjEvent32SetValBlock(0x280, 16),
	    0x4082D4FF,  /* 4.088500499725342f */
	    0x4082D4FF,  /* 4.088500499725342f */
	aobjEvent32SetTargetRate(0x280, 0),
	    0x3E059C54,  /* 0.13047915697097778f */
	    0x3DB8FCE1,  /* 0.09032607823610306f */
	aobjEvent32SetVal0Rate(0x280, 17),
	    0x4212EA88,  /* 36.729034423828125f */
	    0x4212EA88,  /* 36.729034423828125f */
	aobjEvent32SetValBlock(0x100, 17),
	    0x403C2DDF,  /* 2.9402997493743896f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

u32 dEFCommonEffects3_MBallRays_AnimJoint_0x7C8[] = {
	aobjEvent32SetValBlock(0x002, 0),
	    0xC1240819,  /* -10.25197696685791f */
	aobjEvent32SetValAfterBlock(0x075, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xC1100000,  /* -9.0f */
	    0xC0900000,  /* -4.5f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x002, 90),
	    0x4200CE28,  /* 32.201324462890625f */
	aobjEvent32Cmd12(0x002, 40),
	aobjEvent32SetVal(0x380, 0),
	    0x3BF90998,  /* 0.007600020617246628f */
	    0x3BF90998,  /* 0.007600020617246628f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal(0x200, 17),
	    0x3FCDF192,  /* 1.6089346408843994f */
	aobjEvent32SetVal(0x100, 33),
	    0x3F883B5D,  /* 1.0643116235733032f */
	aobjEvent32SetValBlock(0x080, 2),
	    0x3D9EB95B,  /* 0.07750197499990463f */
	aobjEvent32SetValBlock(0x080, 15),
	    0x3FCDF0EF,  /* 1.6089152097702026f */
	aobjEvent32SetValBlock(0x280, 16),
	    0x4082D4FF,  /* 4.088500499725342f */
	    0x4082D4FF,  /* 4.088500499725342f */
	aobjEvent32SetTargetRate(0x280, 0),
	    0x3E059C54,  /* 0.13047915697097778f */
	    0x3DB8FCE1,  /* 0.09032607823610306f */
	aobjEvent32SetVal0Rate(0x280, 17),
	    0x4212EA88,  /* 36.729034423828125f */
	    0x4212EA88,  /* 36.729034423828125f */
	aobjEvent32SetValBlock(0x100, 17),
	    0x403C2DDF,  /* 2.9402997493743896f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x0860 to 0x2AC0 (8800 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dEFCommonEffects3_MBallRays_MatAnimJoint[4] = {
	NULL,
	NULL,
	(AObjEvent32 *)dEFCommonEffects3_MBallRays_MatAnimJoint_ptrs_0x900,
	(AObjEvent32 *)dEFCommonEffects3_MBallRays_MatAnimJoint_ptrs_0x908,
};

/* Script 0 @ 0x870 — material color/alpha ramp. */
u32 dEFCommonEffects3_MBallRays_MatAnimJoint_data[9] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFFFFF80,
	aobjEvent32SetExtValBlock(0x001, 5),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 25),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFF00,
	aobjEvent32End(),
};

/* Script 1 @ 0x894 — identical content to Script 0. */
u32 dEFCommonEffects3_MBallRays_MatAnimJoint_data_0x894[9] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFFFFF80,
	aobjEvent32SetExtValBlock(0x001, 5),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 25),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFF00,
	aobjEvent32End(),
};

/* Script 2 @ 0x8B8 — identical content. */
u32 dEFCommonEffects3_MBallRays_MatAnimJoint_data_0x8B8[9] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFFFFF80,
	aobjEvent32SetExtValBlock(0x001, 5),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 25),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFF00,
	aobjEvent32End(),
};

/* Script 3 @ 0x8DC — identical content. */
u32 dEFCommonEffects3_MBallRays_MatAnimJoint_data_0x8DC[9] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFFFFF80,
	aobjEvent32SetExtValBlock(0x001, 5),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 25),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFF00,
	aobjEvent32End(),
};

/* Two AObjEvent32 *[2] per-MObj script-pointer lists at 0x900 / 0x908.
 * MatAnimJoint[2] → ptrs_0x900, MatAnimJoint[3] → ptrs_0x908. */
AObjEvent32 *dEFCommonEffects3_MBallRays_MatAnimJoint_ptrs_0x900[2] = {
	(AObjEvent32 *)dEFCommonEffects3_MBallRays_MatAnimJoint_data,
	(AObjEvent32 *)dEFCommonEffects3_MBallRays_MatAnimJoint_data_0x894,
};

AObjEvent32 *dEFCommonEffects3_MBallRays_MatAnimJoint_ptrs_0x908[2] = {
	(AObjEvent32 *)dEFCommonEffects3_MBallRays_MatAnimJoint_data_0x8B8,
	(AObjEvent32 *)dEFCommonEffects3_MBallRays_MatAnimJoint_data_0x8DC,
};

PAD(8);

/* trail_post tex/palette region: 1408 B at file 0x918..0xE98 — palettes
 * and CI texture data referenced by SetTextureImage commands across the
 * scene DLs. Kept as raw u8 pending further classification. */
u16 dEFCommonEffects3_MBallRays_palette_0x0918[16] = {
	#include <EFCommonEffects3/palette_0x0918.palette.inc.c>
};

PAD(8);

u16 dEFCommonEffects3_MBallRays_palette_0x0940[16] = {
	#include <EFCommonEffects3/palette_0x0940.palette.inc.c>
};

PAD(8);

u16 dEFCommonEffects3_MBallRays_palette_0x0968[16] = {
	#include <EFCommonEffects3/palette_0x0968.palette.inc.c>
};

PAD(8);

u16 dEFCommonEffects3_MBallRays_palette_0x0990[16] = {
	#include <EFCommonEffects3/palette_0x0990.palette.inc.c>
};

PAD(8);

/* @tex fmt=I4 dim=16x16 */
u8 dEFCommonEffects3_MBallRays_Tex_0x09B8[0x80] = {
	#include <EFCommonEffects3/Tex_0x09B8.tex.inc.c>
};

PAD(8);

/* @tex fmt=CI4 dim=32x24 lut=dEFCommonEffects3_MBallRays_palette_0x0918 */
u8 dEFCommonEffects3_MBallRays_Tex_0x0A40[0x180] = {
	#include <EFCommonEffects3/Tex_0x0A40.tex.inc.c>
};

PAD(8);

/* @tex fmt=CI4 dim=32x32 lut=dEFCommonEffects3_MBallRays_palette_0x0940 */
u8 dEFCommonEffects3_MBallRays_Tex_0x0BC8[0x200] = {
	#include <EFCommonEffects3/Tex_0x0BC8.tex.inc.c>
};

PAD(8);

/* @tex fmt=CI4 dim=16x16 lut=dEFCommonEffects3_MBallRays_palette_0x0968 */
u8 dEFCommonEffects3_MBallRays_Tex_0x0DD0[0x80] = {
	#include <EFCommonEffects3/Tex_0x0DD0.tex.inc.c>
};

PAD(8);

/* @tex fmt=CI4 dim=16x8 lut=dEFCommonEffects3_MBallRays_palette_0x0990 */
u8 dEFCommonEffects3_MBallRays_Tex_0x0E58[0x40] = {
	#include <EFCommonEffects3/Tex_0x0E58.tex.inc.c>
};

/* 53 × Vtx[3] blocks at file 0xE98..0x1888 — every quad/tri in the scene
 * DLs references one of these as a 3-vertex slice (single triangle). */
Vtx dEFCommonEffects3_MBallRays_Vtx_0x0E98[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x0E98.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x0EC8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x0EC8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x0EF8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x0EF8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x0F28[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x0F28.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x0F58[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x0F58.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x0F88[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x0F88.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x0FB8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x0FB8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x0FE8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x0FE8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1018[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1018.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1048[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1048.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1078[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1078.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x10A8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x10A8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x10D8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x10D8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1108[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1108.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1138[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1138.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1168[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1168.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1198[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1198.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x11C8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x11C8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x11F8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x11F8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1228[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1228.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1258[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1258.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1288[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1288.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x12B8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x12B8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x12E8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x12E8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1318[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1318.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1348[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1348.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1378[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1378.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x13A8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x13A8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x13D8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x13D8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1408[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1408.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1438[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1438.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1468[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1468.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1498[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1498.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x14C8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x14C8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x14F8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x14F8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1528[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1528.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1558[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1558.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1588[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1588.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x15B8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x15B8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x15E8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x15E8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1618[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1618.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1648[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1648.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1678[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1678.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x16A8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x16A8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x16D8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x16D8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1708[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1708.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1738[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1738.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1768[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1768.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1798[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1798.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x17C8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x17C8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x17F8[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x17F8.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1828[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1828.vtx.inc.c>
};

Vtx dEFCommonEffects3_MBallRays_Vtx_0x1858[3] = {
	#include <EFCommonEffects3/MBallRays_Vtx_0x1858.vtx.inc.c>
};

/* Setup prologue (file 0x1888 = trail_post+0xF70, 128 B = 16 cmds) that
 * runs by fall-through into the main DL at file 0x1908. No internal
 * gsSPEndDisplayList — execution flows directly into DL_0x1908. */
Gfx dEFCommonEffects3_MBallRays_DL_0x1888[16] = {
	#include <EFCommonEffects3/MBallRays_DL_0x1888.dl.inc.c>
};

/* Main scene DL (file 0x1908, was trail_post+0xFF0) — 334 cmds, 2672 B.
 * Heavy Vtx/Tex references back into trail_post data region. */
Gfx dEFCommonEffects3_MBallRays_DL_0x1908[334] = {
	#include <EFCommonEffects3/MBallRays_DL_0x1908.dl.inc.c>
};

/* Wrapper DL @ 0x2378 — chains into DL_0x1908. Referenced by DLLink_0x2A98[0]. */
Gfx dEFCommonEffects3_MBallRays_DL_0x2378[2] = {
	#include <EFCommonEffects3/MBallRays_DL_0x2378.dl.inc.c>
};

/* Leaf DLs called by wrapper DL_0x27E8. Each 280 B / 35 cmds, drawing
 * one quad pair against an indexed Tex/Vtx slice of trail_post data. */
Gfx dEFCommonEffects3_MBallRays_DL_0x2388[35] = {
	#include <EFCommonEffects3/MBallRays_DL_0x2388.dl.inc.c>
};

Gfx dEFCommonEffects3_MBallRays_DL_0x24A0[35] = {
	#include <EFCommonEffects3/MBallRays_DL_0x24A0.dl.inc.c>
};

Gfx dEFCommonEffects3_MBallRays_DL_0x25B8[35] = {
	#include <EFCommonEffects3/MBallRays_DL_0x25B8.dl.inc.c>
};

Gfx dEFCommonEffects3_MBallRays_DL_0x26D0[35] = {
	#include <EFCommonEffects3/MBallRays_DL_0x26D0.dl.inc.c>
};

/* Wrapper DL @ 0x27E8 — chains into the 4 leaf DLs above.
 * Referenced by DLLink_0x2AB0[0]. */
Gfx dEFCommonEffects3_MBallRays_DL_0x27E8[5] = {
	#include <EFCommonEffects3/MBallRays_DL_0x27E8.dl.inc.c>
};

/* Medium DL @ 0x2810 — 632 B / 79 cmds. The wrapper DL_0x2A88 entry point
 * is at +0x80 (cmd 16) of this DL; cmds 0..15 are a setup prologue that
 * is only executed when control falls through from the prior wrapper —
 * the block has no internal gsSPEndDisplayList until command 78. */
Gfx dEFCommonEffects3_MBallRays_DL_0x2810[79] = {
	#include <EFCommonEffects3/MBallRays_DL_0x2810.dl.inc.c>
};

/* Wrapper DL @ 0x2A88 — chains into DL_0x2810 + 16 cmds (the drawable
 * mid-point). Referenced by DLLink_0x2A98[1]. */
Gfx dEFCommonEffects3_MBallRays_DL_0x2A88[2] = {
	#include <EFCommonEffects3/MBallRays_DL_0x2A88.dl.inc.c>
};

/* DObjDLLink table @ 0x2A98 — referenced by RebirthHalo[1]. */
DObjDLLink dEFCommonEffects3_MBallRays_DLLink_0x2A98[3] = {
	{ 0, dEFCommonEffects3_MBallRays_DL_0x2378 },
	{ 1, dEFCommonEffects3_MBallRays_DL_0x2A88 },
	{ 4, NULL },
};

/* DObjDLLink table @ 0x2AB0 — referenced by RebirthHalo[2]. */
DObjDLLink dEFCommonEffects3_MBallRays_DLLink_0x2AB0[2] = {
	{ 0, dEFCommonEffects3_MBallRays_DL_0x27E8 },
	{ 4, NULL },
};

/* DObjDesc: RebirthHalo @ 0x2AC0 (4 entries) */
DObjDesc dEFCommonEffects3_RebirthHalo[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, dEFCommonEffects3_MBallRays_DLLink_0x2A98, { 0.0f, -60.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, dEFCommonEffects3_MBallRays_DLLink_0x2AB0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x2B70 to 0x2CA8 (312 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dEFCommonEffects3_RebirthHalo_AnimJoint[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dEFCommonEffects3_RebirthHalo_AnimJoint_data,
};

u32 dEFCommonEffects3_RebirthHalo_AnimJoint_data[9] = {
	aobjEvent32SetValBlock(0x002, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x002, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x002, 30),
	    0x40C90FDB,  /* 6.2831854820251465f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dEFCommonEffects3_RebirthHalo_AnimJoint_data,
	aobjEvent32End(),
};

/* Halo glow texture @ file 0x2BA8 — I4 32×16, 256 B. Referenced by
 * DL_0x2EF0/0x2F80/0x3010/0x30A0 each at their SetTextureImage cmd
 * (load tile = I 16b, render tile = I 4b, SetTileSize 32×16). The
 * 8-B leading pad is the residue after RebirthHalo_AnimJoint_data's
 * aobjEvent32End() — kept as PAD(8) for alignment. */
PAD(8);

/* @tex fmt=I dim=32x16 */
u8 dEFCommonEffects3_Tex_0x2BA8[256] = {
	#include <EFCommonEffects3/Tex_0x2BA8.tex.inc.c>
};

/* ItemGetSwirl_MObjSub was MIS-TYPED (had field-aliased chain pointers).
 * Same wrapper pattern as fid 84's ShockSmall/CatchSwirl: 8 B leading PAD,
 * 16 B MObjSub **head[4], then MObjSub_real @ +0x18 that spans 120 B and
 * absorbs the former 24 B gap_0x2D20. */
PAD(8);

/* MObjSub** head table @ 0x2CB0 — 4 entries chaining to MObjSub*[2] lists. */
MObjSub **dEFCommonEffects3_ItemGetSwirl_MObjSub_head[4] = {
	(MObjSub **)dEFCommonEffects3_gap_0x2D20_sub_0x180,
	(MObjSub **)dEFCommonEffects3_gap_0x2D20_sub_0x188,
	(MObjSub **)dEFCommonEffects3_gap_0x2D20_sub_0x190,
	(MObjSub **)dEFCommonEffects3_gap_0x2D20_sub_0x198,
};

/* Real MObjSub @ 0x2CC0 (120 B, ends at 0x2D38 — absorbs the former 24 B
 * gap_0x2D20). I16-format sprite (32×16). */
MObjSub dEFCommonEffects3_ItemGetSwirl_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_I, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_I, G_IM_SIZ_4b,
		0x0020,
		0x0010, 0x0020, 0x0010,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0x09, 0xFF, 0x90, 0xB3 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0x09, 0xFF, 0x90, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x2D38 to 0x3170 (1080 bytes) — leading 24 B
 * (former gap_0x2D20) absorbed by ItemGetSwirl_MObjSub_real above. */

/* MObjSub @ 0x2D38 */
MObjSub dEFCommonEffects3_gap_0x2D20_sub_0x18[1] = {
	{
		0x0000,
		G_IM_FMT_I, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_I, G_IM_SIZ_4b,
		0x0020,
		0x0010, 0x0020, 0x0010,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0x09, 0xFF, 0x90, 0xB3 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0x09, 0xFF, 0x90, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2DB0 */
MObjSub dEFCommonEffects3_gap_0x2D20_sub_0x90[1] = {
	{
		0x0000,
		G_IM_FMT_I, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_I, G_IM_SIZ_4b,
		0x0020,
		0x0010, 0x0020, 0x0010,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0x09, 0xFF, 0x90, 0xB3 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0x09, 0xFF, 0x90, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2E28 */
MObjSub dEFCommonEffects3_gap_0x2D20_sub_0x108[1] = {
	{
		0x0000,
		G_IM_FMT_I, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_I, G_IM_SIZ_4b,
		0x0020,
		0x0010, 0x0020, 0x0010,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0x09, 0xFF, 0x90, 0xB3 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0x09, 0xFF, 0x90, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x2EA0 (was gap+0x180, 8 bytes) */
MObjSub *dEFCommonEffects3_gap_0x2D20_sub_0x180[2] = {
	dEFCommonEffects3_ItemGetSwirl_MObjSub_real,
	NULL,
};

/* gap sub-block @ 0x2EA8 (was gap+0x188, 8 bytes) */
MObjSub *dEFCommonEffects3_gap_0x2D20_sub_0x188[2] = {
	(MObjSub *)dEFCommonEffects3_gap_0x2D20_sub_0x18,
	NULL,
};

/* gap sub-block @ 0x2EB0 (was gap+0x190, 8 bytes) */
MObjSub *dEFCommonEffects3_gap_0x2D20_sub_0x190[2] = {
	(MObjSub *)dEFCommonEffects3_gap_0x2D20_sub_0x90,
	NULL,
};

/* gap sub-block @ 0x2EB8 (was gap+0x198, 8 bytes) */
MObjSub *dEFCommonEffects3_gap_0x2D20_sub_0x198[2] = {
	(MObjSub *)dEFCommonEffects3_gap_0x2D20_sub_0x108,
	NULL,
};

/* gap sub-block @ 0x2EC0 (was gap+0x1A0, 48 bytes) */
Vtx dEFCommonEffects3_gap_0x2D20_sub_0x1A0[3] = {
	#include <EFCommonEffects3/gap_0x2D20_sub_0x1A0.vtx.inc.c>
};

/* gap sub-block @ 0x2EF0 (was gap+0x1D0, 144 bytes) */
Gfx dEFCommonEffects3_DL_0x2EF0[18] = {
	#include <EFCommonEffects3/DL_0x2EF0.dl.inc.c>
};

/* gap sub-block @ 0x2F80 (was gap+0x260, 144 bytes) */
Gfx dEFCommonEffects3_DL_0x2F80[18] = {
	#include <EFCommonEffects3/DL_0x2F80.dl.inc.c>
};

/* gap sub-block @ 0x3010 (was gap+0x2F0, 144 bytes) */
Gfx dEFCommonEffects3_DL_0x3010[18] = {
	#include <EFCommonEffects3/DL_0x3010.dl.inc.c>
};

/* gap sub-block @ 0x30A0 (was gap+0x380, 144 bytes) */
Gfx dEFCommonEffects3_DL_0x30A0[18] = {
	#include <EFCommonEffects3/DL_0x30A0.dl.inc.c>
};

/* DObjDLLink @ 0x410 (2 entries) */
DObjDLLink dEFCommonEffects3_DLLink_0x3130[] = {
	{ 1, dEFCommonEffects3_DL_0x2EF0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x420 (2 entries) */
DObjDLLink dEFCommonEffects3_DLLink_0x3140[] = {
	{ 1, dEFCommonEffects3_DL_0x2F80 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x430 (2 entries) */
DObjDLLink dEFCommonEffects3_DLLink_0x3150[] = {
	{ 1, dEFCommonEffects3_DL_0x3010 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x440 (2 entries) */
DObjDLLink dEFCommonEffects3_DLLink_0x3160[] = {
	{ 1, dEFCommonEffects3_DL_0x30A0 },
	{ 4, NULL },
};

/* DObjDesc: ItemGetSwirl @ 0x3170 (7 entries) */
DObjDesc dEFCommonEffects3_ItemGetSwirl[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { -0.8541679978370667f, 1.570796012878418f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dEFCommonEffects3_DLLink_0x3130, { 0.24000099301338196f, -2.7028450965881348f, -233.6550750732422f }, { -0.27849701046943665f, 0.0f, 0.0f }, { 0.9855470061302185f, 0.5486469864845276f, 0.5575129985809326f } },
	{ 2, (void*)dEFCommonEffects3_DLLink_0x3140, { 0.24000099301338196f, 233.6550750732422f, -2.70284104347229f }, { 1.2919600009918213f, 0.0f, 0.0f }, { 0.9855470061302185f, 0.5486469864845276f, 0.5575129985809326f } },
	{ 2, (void*)dEFCommonEffects3_DLLink_0x3150, { 0.24000099301338196f, 2.702807903289795f, 233.65505981445312f }, { 2.8615520000457764f, 0.0f, 0.0f }, { 0.9855470061302185f, 0.5486469864845276f, 0.5575129985809326f } },
	{ 2, (void*)dEFCommonEffects3_DLLink_0x3160, { 0.24000099301338196f, -233.6550750732422f, 2.7028489112854004f }, { -1.8504990339279175f, 0.0f, 0.0f }, { 0.9855470061302185f, 0.5486469864845276f, 0.5575129985809326f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x32B0 to 0x3490 (480 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dEFCommonEffects3_ItemGetSwirl_AnimJoint[6] = {
	NULL,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x32C8,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x330C,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x336C,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x33CC,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x342C,
};

u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x32C8[] = {
	aobjEvent32SetValAfter(0x3F6, 0),
	    0x3FC90FDB,  /* 1.5707963705062866f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x001, 0),
	    0xBDA58095,  /* -0.08081165701150894f */
	    0xBD46FB0D,  /* -0.04857926443219185f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValRateBlock(0x001, 8),
	    0xBF860A92,  /* -1.0471975803375244f */
	    0xBE51BD8D,  /* -0.20482464134693146f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x330C[] = {
	aobjEvent32SetValAfterBlock(0x006, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x010, 0),
	    0x3E75C2E1,  /* 0.24000121653079987f */
	aobjEvent32SetVal0Rate(0x381, 0),
	    0x3E7AD95E,  /* 0.24496981501579285f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	    0x3F1D5256,  /* 0.6145375967025757f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	aobjEvent32SetValRate(0x060, 0),
	    0x42BD0DCC,  /* 94.52694702148438f */
	    0xC13E147B,  /* -11.880000114440918f */
	    0xC2A1ACB8,  /* -80.83734130859375f */
	    0xC1956042,  /* -18.672000885009766f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x3E1, 8),
	    0xBE9A9FC0,  /* -0.3020000457763672f */
	    0xC0B6BCDB,  /* -5.7105536460876465f */
	    0xC36E61E2,  /* -238.38235473632812f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x336C[] = {
	aobjEvent32SetValAfterBlock(0x006, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x010, 0),
	    0x3E75C2E1,  /* 0.24000121653079987f */
	aobjEvent32SetVal0Rate(0x381, 0),
	    0x3FE7689E,  /* 1.807880163192749f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	    0x3F1D5256,  /* 0.6145375967025757f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	aobjEvent32SetValRate(0x060, 0),
	    0x42A1ACB8,  /* 80.83734130859375f */
	    0x41956042,  /* 18.672000885009766f */
	    0x42BD0DCC,  /* 94.52694702148438f */
	    0xC13E147B,  /* -11.880000114440918f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x3E1, 8),
	    0x3FA267EC,  /* 1.268796443939209f */
	    0x436E61E2,  /* 238.38235473632812f */
	    0xC0B6BCD1,  /* -5.7105488777160645f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x33CC[] = {
	aobjEvent32SetValAfterBlock(0x006, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x010, 0),
	    0x3E75C2E1,  /* 0.24000121653079987f */
	aobjEvent32SetVal0Rate(0x381, 0),
	    0x40567139,  /* 3.350660562515259f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	    0x3F1D5256,  /* 0.6145375967025757f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	aobjEvent32SetValRate(0x060, 0),
	    0xC2BD0DCF,  /* -94.52696990966797f */
	    0x413E1477,  /* 11.879996299743652f */
	    0x42A1ACB4,  /* 80.83731079101562f */
	    0x41956042,  /* 18.672000885009766f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x3E1, 8),
	    0x4035BBE3,  /* 2.839592695236206f */
	    0x40B6BC8C,  /* 5.710515975952148f */
	    0x436E61E0,  /* 238.38232421875f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x342C[] = {
	aobjEvent32SetValAfterBlock(0x006, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x010, 0),
	    0x3E75C2E1,  /* 0.24000121653079987f */
	aobjEvent32SetVal0Rate(0x381, 0),
	    0xBFAD4C0E,  /* -1.3538835048675537f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	    0x3F1D5256,  /* 0.6145375967025757f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	aobjEvent32SetValRate(0x060, 0),
	    0xC2A1ACB8,  /* -80.83734130859375f */
	    0xC1956042,  /* -18.672000885009766f */
	    0xC2BD0DCC,  /* -94.52694702148438f */
	    0x413E147B,  /* 11.880000114440918f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x3E1, 8),
	    0xBFEFB7CB,  /* -1.8727964162826538f */
	    0xC36E61E2,  /* -238.38235473632812f */
	    0x40B6BCE4,  /* 5.71055793762207f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x3490 to 0x3530 (160 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dEFCommonEffects3_ItemGetSwirl_MatAnimJoint[6] = {
	NULL,
	NULL,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3518,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x351C,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3520,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3524,
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34A8[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0x4CFFFFFF,  /* 134217720.0f */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0x1CFFB0FF,  /* 1.6920236913971645e-21f */
	aobjEvent32SetExtValBlock(0x001, 3),
	    0x00FF808D,  /* 2.3464166851450224e-38f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34C4[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0x4CFFFFFF,  /* 134217720.0f */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0x1CFFB0FF,  /* 1.6920236913971645e-21f */
	aobjEvent32SetExtValBlock(0x001, 3),
	    0x00FF808D,  /* 2.3464166851450224e-38f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34E0[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0x4CFFFFFF,  /* 134217720.0f */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0x1CFFB0FF,  /* 1.6920236913971645e-21f */
	aobjEvent32SetExtValBlock(0x001, 3),
	    0x00FF808D,  /* 2.3464166851450224e-38f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34FC[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0x4CFFFFFF,  /* 134217720.0f */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0x1CFFB0FF,  /* 1.6920236913971645e-21f */
	aobjEvent32SetExtValBlock(0x001, 3),
	    0x00FF808D,  /* 2.3464166851450224e-38f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3518[] = {
	(u32)(dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34A8),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x351C[] = {
	(u32)(dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34C4),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3520[] = {
	(u32)(dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34E0),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3524[] = {
	(u32)(dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34FC),
	aobjEvent32End(),
};
