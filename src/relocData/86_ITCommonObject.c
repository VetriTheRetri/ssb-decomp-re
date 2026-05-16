/* relocData file 86: ITCommonObject — common-item geometry pool.
 * Every item in ITCommonData has an ITAttributes struct whose `data`,
 * `p_mobjsubs`, `anim_joints`, and `p_matanim_joints` fields are patched
 * by fixRelocChain to point at offsets in this file. The block names
 * below mirror those extern reloc entries in 251_ITCommonData.reloc so
 * each chunk carries the same <Item>_<AttrType>_<Field> label as its
 * caller on the ITCommonData side. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros
extern u32 dITCommonObject_KamexHydro_Weapon_animjoints_0xFA9C[];
extern u32 dITCommonObject_KamexHydro_Weapon_animjoints_0xFB4C[];
extern AObjEvent32 *dITCommonObject_Star_Item_matanimjoints_0x1658[];
extern AObjEvent32 *dITCommonObject_FFlower_Item_matanimjoints_0x4788[];
extern AObjEvent32 *dITCommonObject_SpearSwarm_Weapon_matanimjoints_0xE67C[];
extern AObjEvent32 *dITCommonObject_KamexHydro_Weapon_matanimjoints_0xFC9C[];
extern u32 dITCommonObject_Dogas_Item_data_remainder_sub_0xC[];
extern u32 dITCommonObject_MLucky_Item_data_remainder_gap_0x100B0_sub_0xC[];
extern u32 dITCommonObject_Pippi_Item_data_remainder_sub_0x8[];
extern AObjEvent32 *dITCommonObject_Starmie_Item_data_remainder_sub_0x124[];
extern AObjEvent32 *dITCommonObject_WarkRock_Weapon_data_remainder_gap_0xAC1C_sub_0x5C[];
extern u32 dITCommonObject_Harisen_Item_data_remainder_gap_0x2248_sub_0x14[];
extern AObjEvent32 *dITCommonObject_BombHei_Item_data_remainder_gap_0x347C_sub_0x178[];
extern u32 dITCommonObject_GShell_Item_data_remainder_gap_0x600C_sub_0xC[];
extern u16 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0xC4[];
extern u32 dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8_sub_0x14[];
extern u32 dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x14[];
extern u32 dITCommonObject_Spear_Item_data_remainder_sub_0x14[];

extern u32 dITCommonObject_DogasSmog_Weapon_animjoints_0x13198[];
extern u16 dITCommonObject_LGunAmmo_Weapon_data_post_0x40[];
extern u8 dITCommonObject_LGunAmmo_Weapon_data_post_0x68[];
extern u16 dITCommonObject_StarRod_Weapon_data_post_0x70[];
extern u16 dITCommonObject_StarRod_Weapon_data_post_0x98[];
extern u8 dITCommonObject_Tex_0x55C8[];
extern u8 dITCommonObject_Tex_0x57D0[];
extern u8 dITCommonObject_Tex_0x59D8[];
extern u8 dITCommonObject_Tex_0x5BE0[];


/* Shared vertex / DL pool the item DObjDesc trees reference via the
 * intern chain. Not yet broken down into typed Vtx / Gfx / Tex blocks. */
/* @ 0x0000, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0008, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x0008[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x0008.palette.inc.c>
};

/* @ 0x0028, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0030, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x0030[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x0030.palette.inc.c>
};

/* @ 0x0050, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0058, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x0058[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x0058.palette.inc.c>
};

/* @ 0x0078, 408 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0x0080 (was gap+0x8, 136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dITCommonObject_LUT_0x0008 */
u8 dITCommonObject_Tex_0x0080[136] = {
	#include <ITCommonObject/Tex_0x0080.tex.inc.c>
};

/* gap sub-block @ 0x0108 (was gap+0x90, 136 bytes) */
u8 dITCommonObject_Tex_0x0108[136] = {
	#include <ITCommonObject/Tex_0x0108.tex.inc.c>
};

/* gap sub-block @ 0x0190 (was gap+0x118, 128 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dITCommonObject_LUT_0x0058 */
u8 dITCommonObject_Tex_0x0190[128] = {
	#include <ITCommonObject/Tex_0x0190.tex.inc.c>
};

/* @ 0x0210, 224 bytes (14 vertices) */
Vtx dITCommonObject_Vtx_0x0210[14] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x0210.vtx.inc.c>
};

/* @ 0x02F0, 176 bytes (11 vertices) */
Vtx dITCommonObject_Vtx_0x02F0[11] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x02F0.vtx.inc.c>
};

/* @ 0x03A0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x03A0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x03A0.vtx.inc.c>
};

/* @ 0x03E0, 96 bytes (12 Gfx commands) */
Gfx dITCommonObject_Gfx_0x03E0[12] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x03E0.dl.inc.c>
};

/* @ 0x0440, 256 bytes (32 Gfx commands) */
Gfx dITCommonObject_Gfx_0x0440[32] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x0440.dl.inc.c>
};

/* @ 0x0540, 160 bytes (20 Gfx commands) */
Gfx dITCommonObject_Gfx_0x0540[20] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x0540.dl.inc.c>
};

/* @ 0x05E0, 144 bytes (18 Gfx commands) */
Gfx dITCommonObject_Gfx_0x05E0[18] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x05E0.dl.inc.c>
};

/* @ 0x00670, 1088 bytes */
DObjDesc dITCommonObject_Capsule_Item_data_DObjDesc[5] = {
	{ 0, NULL, { 0.0f, -90.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x03E0, { 0.0f, 90.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)dITCommonObject_Gfx_0x0540, { 0.0f, 45.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)dITCommonObject_Gfx_0x05E0, { 0.0f, -45.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x074C, 12 bytes (raw gap) */
PAD(12);

/* @ 0x0758, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x0758[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x0758.palette.inc.c>
};

/* @ 0x0778, 520 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0x0780 (was gap+0x8, 512 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_LUT_0x0758 */
u8 dITCommonObject_Tex_0x0780[512] = {
	#include <ITCommonObject/Tex_0x0780.tex.inc.c>
};

/* @ 0x0980, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x0980[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x0980.vtx.inc.c>
};

/* @ 0x09C0, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x09C0[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x09C0.dl.inc.c>
};

/* @ 0x00AB0, 1704 bytes */
DObjDesc dITCommonObject_Tomato_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 390.0f, -75.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x09C0, { 0.0f, 75.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x0B34, 20 bytes (raw gap) */
PAD(20);

/* @ 0x0B48, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x0B48[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x0B48.palette.inc.c>
};

/* @ 0x0B68, 1040 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0x0B70 (was gap+0x8, 520 bytes) */
/* @tex fmt=I4 dim=32x32 */
u8 dITCommonObject_Tex_0x0B70[520] = {
	#include <ITCommonObject/Tex_0x0B70.tex.inc.c>
};

/* gap sub-block @ 0x0D78 (was gap+0x210, 512 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_LUT_0x0B48 */
u8 dITCommonObject_Tex_0x0D78[512] = {
	#include <ITCommonObject/Tex_0x0D78.tex.inc.c>
};

/* @ 0x0F78, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x0F78[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x0F78.vtx.inc.c>
};

/* @ 0x0FB8, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x0FB8[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x0FB8.vtx.inc.c>
};

/* @ 0x0FF8, 336 bytes — 42 Gfx commands (Tomato display list, also referenced by Heart) */
Gfx dITCommonObject_Tomato_Item_DL[42] = {
	#include <ITCommonObject/dITCommonObject_Tomato_Item_DL.dl.inc.c>
};

/* @ 0x1148, 16 bytes — Heart item DLLink (selects Tomato DL via DObjDLLink indirection) */
DObjDLLink dITCommonObject_Heart_Item_DLLink[] = {
	{ 1, dITCommonObject_Tomato_Item_DL },
	{ 4, NULL },
};

/* @ 0x01158, 352 bytes */
DObjDesc dITCommonObject_Heart_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Heart_Item_DLLink, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x11DC, 92 bytes (raw gap) */
/* gap sub-block @ 0x11DC (was gap+0x0, 12 bytes) */
PAD(12);

/* gap sub-block @ 0x11E8 (was gap+0xC, 40 bytes) */
u16 dITCommonObject_Heart_Item_data_remainder_gap_0x11DC_sub_0xC[16] = {
	#include <ITCommonObject/gap_0x11DC_sub_0xC.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x1210 (was gap+0x34, 40 bytes) */
u16 dITCommonObject_Heart_Item_data_remainder_gap_0x11DC_sub_0x34[16] = {
	#include <ITCommonObject/gap_0x11DC_sub_0x34.palette.inc.c>
};
PAD(8);

/* @ 0x1238, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x1238[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x1238.palette.inc.c>
};

/* @ 0x1258, 96 bytes (trailing gap) */
u8 dITCommonObject_Heart_Item_data_remainder_gap_0x1258[0x60] = {
	#include <ITCommonObject/dITCommonObject_Heart_Item_data_remainder_gap_0x1258.data.inc.c>
};

/* @ 0x012B8, 680 bytes */
/* @ 0x12B8, 280 bytes (raw gap) */
/* u32 pointer array @ 0x12B8 (2 entries) */
u32 dITCommonObject_Star_Item_mobjsubs_gap_0x12B8[2] = {
	0x00000000,
	0x04B004F0,
};

/* u32 pointer array @ 0x12C0 (2 entries) */
u32 dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x8[2] = {
	(u32)&dITCommonObject_Heart_Item_data_remainder_gap_0x11DC_sub_0x34,
	(u32)&dITCommonObject_Heart_Item_data_remainder_gap_0x11DC_sub_0xC,
};

/* u32 pointer array @ 0x12C8 (2 entries) */
u32 dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x10[2] = {
	(u32)&dITCommonObject_Heart_Item_data_remainder_gap_0x11DC_sub_0x34,
	(u32)&dITCommonObject_Heart_Item_data_remainder_gap_0x11DC_sub_0xC,
};

/* MObjSub @ 0x12D0 */
MObjSub dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x18[1] = {
	{
		0x0000,
		0x02, 0x02,
		NULL,
		0x0080, 0x0007, 0x0010, 0x0010,
		0,
		0.3804999887943268f, -0.12200000137090683f,
		0.24899999797344208f, 0.8500000238418579f,
		0.3804999887943268f, 0.24899999797344208f,
		(void**)dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x8,
		0x0004,
		0x02, 0x00,
		0x0008,
		0x0010, 0x0010, 0x0010,
		0.3804999887943268f, -0.12200000137090683f,
		0.3804999887943268f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFD, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x1348 */
MObjSub dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x90[1] = {
	{
		0x0000,
		0x02, 0x02,
		NULL,
		0x005E, 0x0005, 0x0010, 0x0010,
		0,
		0.29670000076293945f, 0.3400000035762787f,
		0.4065999984741211f, 0.34040001034736633f,
		0.29670000076293945f, 0.4065999984741211f,
		(void**)dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x10,
		0x0004,
		0x02, 0x00,
		0x0008,
		0x0010, 0x0010, 0x0010,
		0.29670000076293945f, 0.3400000035762787f,
		0.29670000076293945f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFE, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* u32 pointer array @ 0x13C0 (4 entries) */
u32 dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x108[4] = {
	(u32)&dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x18,
	(u32)&dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x90,
	0x00000000,
	0x00000000,
};

/* @ 0x13D0, 48 bytes (3 vertices) */
Vtx dITCommonObject_Vtx_0x13D0[3] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x13D0.vtx.inc.c>
};

/* @ 0x1400, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x1400[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x1400.vtx.inc.c>
};

/* @ 0x1440, 288 bytes (36 Gfx commands) */
Gfx dITCommonObject_Gfx_0x1440[36] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x1440.dl.inc.c>
};

/* @ 0x01560, 144 bytes */
DObjDesc dITCommonObject_Star_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x1440, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x15E4, 12 bytes (vertex / DL / texture pool) */
PAD(12);

/* @ 0x015F0, 8 bytes — Star item matanim joint table (per-MObj AObjEvent32** entries) */
AObjEvent32 **dITCommonObject_Star_Item_matanimjoints[2] = {
	NULL,
	(AObjEvent32 **)dITCommonObject_Star_Item_matanimjoints_0x1658,
};

/* @ 0x015F8, 48 bytes — AObjEvent32 matanim script */
u32 dITCommonObject_Star_Item_matanimjoints_0x15F8[12] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dITCommonObject_Star_Item_matanimjoints_0x15F8),
};

/* @ 0x01628, 48 bytes — AObjEvent32 matanim script */
u32 dITCommonObject_Star_Item_matanimjoints_0x1628[12] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dITCommonObject_Star_Item_matanimjoints_0x1628),
};

/* @ 0x01658, 8 bytes — Star item matanim joint table (per-track AObjEvent32* entries) */
AObjEvent32 *dITCommonObject_Star_Item_matanimjoints_0x1658[2] = {
	(AObjEvent32 *)dITCommonObject_Star_Item_matanimjoints_0x15F8,
	(AObjEvent32 *)dITCommonObject_Star_Item_matanimjoints_0x1628,
};

/* @ 0x01660, 8 bytes (raw gap) */
PAD(8);

/* @ 0x01668, 128 bytes — Sword item texture */
u8 dITCommonObject_Tex_0x1668[128] = {
	#include <ITCommonObject/dITCommonObject_Tex_0x1668.tex.inc.c>
};

/* @ 0x016E8, 176 bytes (11 vertices) */
Vtx dITCommonObject_Vtx_0x16E8[11] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x16E8.vtx.inc.c>
};

/* @ 0x01798, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x1798[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x1798.vtx.inc.c>
};

/* @ 0x017D8, 120 bytes (15 Gfx commands) — Sword joint 1 DL */
Gfx dITCommonObject_Gfx_0x17D8[15] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x17D8.dl.inc.c>
};

/* @ 0x01850, 168 bytes (21 Gfx commands) — Sword joint 2 DL */
Gfx dITCommonObject_Gfx_0x1850[21] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x1850.dl.inc.c>
};

/* @ 0x018F8, 16 bytes — Sword joint 1 DL links */
DObjDLLink dITCommonObject_Sword_Item_DLLink_0x18F8[2] = {
	{ 0, dITCommonObject_Gfx_0x17D8 },
	{ 4, NULL },
};

/* @ 0x01908, 16 bytes — Sword joint 2 DL links */
DObjDLLink dITCommonObject_Sword_Item_DLLink_0x1908[2] = {
	{ 1, dITCommonObject_Gfx_0x1850 },
	{ 4, NULL },
};

/* @ 0x01918, 1256 bytes */
DObjDesc dITCommonObject_Sword_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dITCommonObject_Star_Item_matanimjoints + 0x308), { 0.0f, 360.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dITCommonObject_Star_Item_matanimjoints + 0x318), { 0.0f, -267.0000305175781f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x19C8, 16 bytes (raw gap) */
PAD(16);

/* @ 0x19D8, 64 bytes (32-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x19D8[32] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x19D8.palette.inc.c>
};

/* @ 0x1A18, 8 bytes (raw gap) */
PAD(8);

/* @ 0x1A20, 64 bytes (32-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x1A20[32] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x1A20.palette.inc.c>
};

/* @ 0x1A60, 144 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0x1A68 (was gap+0x8, 72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dITCommonObject_LUT_0x19D8 */
u8 dITCommonObject_Tex_0x1A68[72] = {
	#include <ITCommonObject/Tex_0x1A68.tex.inc.c>
};

/* gap sub-block @ 0x1AB0 (was gap+0x50, 64 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dITCommonObject_LUT_0x1A20 */
u8 dITCommonObject_Tex_0x1AB0[64] = {
	#include <ITCommonObject/Tex_0x1AB0.tex.inc.c>
};

/* @ 0x1AF0, 48 bytes (3 vertices) */
Vtx dITCommonObject_Vtx_0x1AF0[3] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x1AF0.vtx.inc.c>
};

/* @ 0x1B20, 144 bytes (9 vertices) */
Vtx dITCommonObject_Vtx_0x1B20[9] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x1B20.vtx.inc.c>
};

/* @ 0x1BB0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x1BB0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x1BB0.vtx.inc.c>
};

/* @ 0x1BF0, 88 bytes (11 Gfx commands) */
Gfx dITCommonObject_Gfx_0x1BF0[11] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x1BF0.dl.inc.c>
};

/* @ 0x1C48, 256 bytes (32 Gfx commands) */
Gfx dITCommonObject_Gfx_0x1C48[32] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x1C48.dl.inc.c>
};

/* @ 0x1D48, 184 bytes (23 Gfx commands) */
Gfx dITCommonObject_Gfx_0x1D48[23] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x1D48.dl.inc.c>
};

/* @ 0x01E00, 920 bytes */
DObjDesc dITCommonObject_Bat_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x1BF0, { 0.0f, 139.58062744140625f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)dITCommonObject_Gfx_0x1D48, { 9.999999974752427e-07f, -198.36004638671875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x1EB0, 8 bytes (raw gap) */
PAD(8);

/* @ 0x1EB8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x1EB8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x1EB8.palette.inc.c>
};

/* @ 0x1ED8, 72 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0x1EE0 (was gap+0x8, 64 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dITCommonObject_LUT_0x1EB8 */
u8 dITCommonObject_Tex_0x1EE0[64] = {
	#include <ITCommonObject/Tex_0x1EE0.tex.inc.c>
};

/* @ 0x1F20, 384 bytes (24 vertices) */
Vtx dITCommonObject_Vtx_0x1F20[24] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x1F20.vtx.inc.c>
};

/* @ 0x20A0, 248 bytes (31 Gfx commands) */
Gfx dITCommonObject_Gfx_0x20A0[31] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x20A0.dl.inc.c>
};

/* @ 0x02198, 1464 bytes */
DObjDesc dITCommonObject_Harisen_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 158.99996948242188f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0x20A0, { 0.0f, -209.99996948242188f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x2248, 128 bytes (raw gap) */
/* gap sub-block @ 0x2248 (was gap+0x0, 20 bytes) */
AObjEvent32 *dITCommonObject_Harisen_Item_data_remainder_gap_0x2248[5] = {
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dITCommonObject_Harisen_Item_data_remainder_gap_0x2248_sub_0x14,
};

/* gap sub-block @ 0x225C (was gap+0x14, 32 bytes) */
u32 dITCommonObject_Harisen_Item_data_remainder_gap_0x2248_sub_0x14[8] = {
	#include <ITCommonObject/gap_0x2248_sub_0x14.data.inc.c>
};

/* gap sub-block @ 0x227C (was gap+0x34, 76 bytes) */
u32 dITCommonObject_Harisen_Item_data_remainder_gap_0x2248_sub_0x34[16] = {
	aobjEvent32SetVal0RateBlock(0x200, 0),
	    0x40200000,  /* 2.5f */
	aobjEvent32SetValRateBlock(0x200, 1),
	    0x3DCCCCCD,  /* 0.10000000149011612f */
	    0xBE2932A2,  /* -0.16523221135139465f */
	aobjEvent32SetVal0RateBlock(0x200, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x200, 1),
	    0x3DCCCCCD,  /* 0.10000000149011612f */
	    0x3E974EE0,  /* 0.29552364349365234f */
	aobjEvent32SetValRateBlock(0x200, 2),
	    0x3FA00000,  /* 1.25f */
	    0x3E03A83B,  /* 0.12857143580913544f */
	aobjEvent32SetVal0RateBlock(0x200, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};
PAD(12);

/* @ 0x22C8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x22C8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x22C8.palette.inc.c>
};

/* @ 0x22E8, 200 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0x22F0 (was gap+0x8, 192 bytes) */
/* @tex fmt=CI4 dim=16x24 lut=dITCommonObject_LUT_0x22C8 */
u8 dITCommonObject_Tex_0x22F0[192] = {
	#include <ITCommonObject/Tex_0x22F0.tex.inc.c>
};

/* @ 0x23B0, 192 bytes (12 vertices) */
Vtx dITCommonObject_Vtx_0x23B0[12] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x23B0.vtx.inc.c>
};

/* @ 0x2470, 384 bytes (24 vertices) */
Vtx dITCommonObject_Vtx_0x2470[24] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x2470.vtx.inc.c>
};

/* @ 0x25F0, 352 bytes (44 Gfx commands) */
Gfx dITCommonObject_Gfx_0x25F0[44] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x25F0.dl.inc.c>
};

/* @ 0x02750, 2784 bytes */
DObjDesc dITCommonObject_Hammer_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x25F0, { 0.0f, 239.9998779296875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x27D4, 20 bytes (raw gap) */
PAD(20);

/* @ 0x27E8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x27E8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x27E8.palette.inc.c>
};

/* @ 0x2808, 2600 bytes (trailing gap) */
PAD(8);

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x2810[520] = {
	#include <ITCommonObject/Tex_0x2810.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x2A18[520] = {
	#include <ITCommonObject/Tex_0x2A18.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x2C20[520] = {
	#include <ITCommonObject/Tex_0x2C20.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x2E28[520] = {
	#include <ITCommonObject/Tex_0x2E28.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x3030[512] = {
	#include <ITCommonObject/Tex_0x3030.tex.inc.c>
};

/* @ 0x03230, 456 bytes */
/* @ 0x3230, 160 bytes (raw gap) */
/* u32 pointer array @ 0x3230 (2 entries) */
u32 dITCommonObject_BombHei_Item_mobjsubs_gap_0x3230[2] = {
	0x00000000,
	0x0C8E0CB2,
};

/* u32 pointer array @ 0x3238 (6 entries) */
u32 dITCommonObject_BombHei_Item_mobjsubs_gap_0x3230_sub_0x8[6] = {
	(u32)&dITCommonObject_Tex_0x3030,
	(u32)&dITCommonObject_Tex_0x2E28,
	(u32)&dITCommonObject_Tex_0x2C20,
	(u32)&dITCommonObject_Tex_0x2A18,
	(u32)&dITCommonObject_Tex_0x2810,
	0x00000000,
};

/* MObjSub @ 0x3250 */
MObjSub dITCommonObject_BombHei_Item_mobjsubs_gap_0x3230_sub_0x20[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dITCommonObject_BombHei_Item_mobjsubs_gap_0x3230_sub_0x8,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		0x02, 0x00,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* u32 pointer array @ 0x32C8 (2 entries) */
u32 dITCommonObject_BombHei_Item_mobjsubs_gap_0x3230_sub_0x98[2] = {
	(u32)&dITCommonObject_BombHei_Item_mobjsubs_gap_0x3230_sub_0x20,
	0x00000000,
};

/* @ 0x32D0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x32D0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x32D0.vtx.inc.c>
};

/* @ 0x3310, 232 bytes (29 Gfx commands) */
Gfx dITCommonObject_Gfx_0x3310[29] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x3310.dl.inc.c>
};

/* @ 0x033F8, 1448 bytes */
DObjDesc dITCommonObject_BombHei_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x3310, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x347C, 396 bytes (raw gap) */
/* gap sub-block @ 0x347C (was gap+0x0, 4 bytes) */
PAD(4);

/* @ 0x3480, 64 bytes (4 vertices) */
Vtx dITCommonObject_BombHei_Item_data_remainder_gap_0x347C_sub_0x4[4] = {
	#include <ITCommonObject/dITCommonObject_BombHei_Item_data_remainder_gap_0x347C_sub_0x4.vtx.inc.c>
};

/* @ 0x34C0, 232 bytes (29 Gfx commands) — BombHei item DL */
Gfx dITCommonObject_Gfx_0x34C0[29] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x34C0.dl.inc.c>
};

/* @ 0x35A8, 16 bytes — DL-fragment link table */
void *dITCommonObject_BombHei_Item_data_remainder_gap_0x347C_sub_0x12C[4] = {
	NULL,
	NULL,
	NULL,
	(void *)dITCommonObject_BombHei_Item_data_remainder_gap_0x347C_sub_0x178,
};

/* gap sub-block @ 0x35B8 (was gap+0x13C, 60 bytes) */
u32 dITCommonObject_BombHei_Item_data_remainder_gap_0x347C_sub_0x13C[15] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 7),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 7),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 7),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 7),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x001, 7),
	    0x40000000,  /* 2.0f */
	aobjEvent32Wait(14),
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dITCommonObject_BombHei_Item_data_remainder_gap_0x347C_sub_0x13C,
};

/* gap sub-block @ 0x35F4 (was gap+0x178, 20 bytes) */
AObjEvent32 *dITCommonObject_BombHei_Item_data_remainder_gap_0x347C_sub_0x178[5] = {
	(AObjEvent32 *)dITCommonObject_BombHei_Item_data_remainder_gap_0x347C_sub_0x13C,
	NULL,
	NULL,
	NULL,
	NULL,
};

/* @ 0x3608, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x3608[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x3608.palette.inc.c>
};

/* @ 0x3628, 8 bytes (raw gap) */
PAD(8);

/* @ 0x3630, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x3630[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x3630.palette.inc.c>
};

/* @ 0x3650, 208 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0x3658 (was gap+0x8, 136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dITCommonObject_LUT_0x3608 */
u8 dITCommonObject_Tex_0x3658[136] = {
	#include <ITCommonObject/Tex_0x3658.tex.inc.c>
};

/* gap sub-block @ 0x36E0 (was gap+0x90, 64 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dITCommonObject_LUT_0x3630 */
u8 dITCommonObject_Tex_0x36E0[64] = {
	#include <ITCommonObject/Tex_0x36E0.tex.inc.c>
};

/* @ 0x3720, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x3720[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x3720.vtx.inc.c>
};

/* @ 0x3760, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x3760[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x3760.vtx.inc.c>
};

/* @ 0x37A0, 272 bytes (34 Gfx commands) */
Gfx dITCommonObject_Gfx_0x37A0[34] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x37A0.dl.inc.c>
};

/* @ 0x38B0, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x38B0[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x38B0.dl.inc.c>
};

/* @ 0x039A0, 1456 bytes */
DObjDesc dITCommonObject_MSBomb_Item_data_DObjDesc[5] = {
	{ 0, NULL, { -9.999999974752427e-07f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 9.999999974752427e-07f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0x37A0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0x38B0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x3A7C, 12 bytes (raw gap) */
PAD(12);

/* @ 0x3A88, 96 bytes (48-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x3A88[48] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x3A88.palette.inc.c>
};

/* @ 0x3AE8, 216 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0x3AF0 (was gap+0x8, 72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dITCommonObject_LUT_0x3A88 */
u8 dITCommonObject_Tex_0x3AF0[72] = {
	#include <ITCommonObject/Tex_0x3AF0.tex.inc.c>
};

/* gap sub-block @ 0x3B38 (was gap+0x50, 72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dITCommonObject_LUT_0x3A88 */
u8 dITCommonObject_Tex_0x3B38[72] = {
	#include <ITCommonObject/Tex_0x3B38.tex.inc.c>
};

/* gap sub-block @ 0x3B80 (was gap+0x98, 64 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dITCommonObject_LUT_0x3A88 */
u8 dITCommonObject_Tex_0x3B80[64] = {
	#include <ITCommonObject/Tex_0x3B80.tex.inc.c>
};

/* @ 0x3BC0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x3BC0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x3BC0.vtx.inc.c>
};

/* @ 0x3C00, 192 bytes (12 vertices) */
Vtx dITCommonObject_Vtx_0x3C00[12] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x3C00.vtx.inc.c>
};

/* @ 0x3CC0, 240 bytes (15 vertices) */
Vtx dITCommonObject_Vtx_0x3CC0[15] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x3CC0.vtx.inc.c>
};

/* @ 0x3DB0, 416 bytes (52 Gfx commands) */
Gfx dITCommonObject_Gfx_0x3DB0[52] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x3DB0.dl.inc.c>
};

/* @ 0x03F50, 344 bytes */
DObjDesc dITCommonObject_LGun_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x3DB0, { 0.0f, 39.89999771118164f, 78.00001525878906f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x3FD4, 212 bytes (vertex / DL / texture pool) */
/* gap sub-block @ 0x3FD4 (was gap+0x0, 20 bytes) */
PAD(20);

/* gap sub-block @ 0x3FE8 (was gap+0x14, 128 bytes) */
/* @tex fmt=I4 dim=16x16 */
u8 dITCommonObject_Tex_0x3FE8[128] = {
	#include <ITCommonObject/Tex_0x3FE8.tex.inc.c>
};

/* gap sub-block @ 0x4068 (was gap+0x94, 64 bytes) */
Vtx dITCommonObject_LGun_Item_data_remainder_sub_0x94[4] = {
	#include <ITCommonObject/dITCommonObject_LGun_Item_data_remainder_sub_0x94.vtx.inc.c>
};

/* Gfx DL: LGunAmmo_Weapon_data @ 0x40A8 (21 cmds) */
Gfx dITCommonObject_LGunAmmo_Weapon_data[21] = {
	#include <ITCommonObject/LGunAmmo_Weapon_data.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0x4150 (568 bytes) */
u8 dITCommonObject_LGunAmmo_Weapon_data_post[64] = {
	#include <ITCommonObject/LGunAmmo_Weapon_data_post.data.inc.c>
};
/* split-self chunk @ +0x40 (40 bytes, abs 0x4190) */
u16 dITCommonObject_LGunAmmo_Weapon_data_post_0x40[16] = {
	#include <ITCommonObject/LGunAmmo_Weapon_data_post_0x40.palette.inc.c>
};
PAD(8);
/* split-self chunk @ +0x68 (464 bytes, abs 0x41B8) */
u8 dITCommonObject_LGunAmmo_Weapon_data_post_0x68[464] = {
	#include <ITCommonObject/LGunAmmo_Weapon_data_post_0x68.data.inc.c>
};

/* @ 0x04388, 808 bytes */
/* @ 0x4388, 152 bytes (raw gap) */
/* u32 pointer array @ 0x4388 (3 entries) */
u32 dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388[3] = {
	0x00000000,
	0x00000000,
	0x10E51106,
};

/* u32 pointer array @ 0x4394 (3 entries) */
u32 dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388_sub_0xC[3] = {
	(u32)&dITCommonObject_LGunAmmo_Weapon_data_post_0x68,
	(u32)&dITCommonObject_LGunAmmo_Weapon_data_post_0x40,
	0x00000000,
};

/* MObjSub @ 0x43A0 */
MObjSub dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388_sub_0x18[1] = {
	{
		0x0000,
		0x02, 0x02,
		NULL,
		0x0020, 0x0001, 0x0020, 0x0020,
		0,
		0.012500000186264515f, -0.02500000037252903f,
		1.0f, 1.0f,
		0.012500000186264515f, 1.0f,
		(void**)dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388_sub_0xC,
		0x0004,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0020, 0x0020,
		0.012500000186264515f, -0.02500000037252903f,
		0.012500000186264515f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* u32 pointer array @ 0x4418 (2 entries) */
u32 dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388_sub_0x90[2] = {
	(u32)&dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388_sub_0x18,
	0x00000000,
};

/* @ 0x4420, 192 bytes (12 vertices) */
Vtx dITCommonObject_Vtx_0x4420[12] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x4420.vtx.inc.c>
};

/* @ 0x44E0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x44E0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x44E0.vtx.inc.c>
};

/* @ 0x4520, 88 bytes (11 Gfx commands) */
Gfx dITCommonObject_Gfx_0x4520[11] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x4520.dl.inc.c>
};

/* @ 0x4578, 144 bytes (18 Gfx commands) */
Gfx dITCommonObject_Gfx_0x4578[18] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x4578.dl.inc.c>
};

/* @ 0x4608, 168 bytes (21 Gfx commands) */
Gfx dITCommonObject_Gfx_0x4608[21] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x4608.dl.inc.c>
};

/* @ 0x046B0, 176 bytes */
DObjDesc dITCommonObject_FFlower_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, -105.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x4520, { 0.0f, 105.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)dITCommonObject_Gfx_0x4608, { 0.0f, 37.499977111816406f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x04760, 12 bytes — FFlower item matanim joint table (per-MObj AObjEvent32** entries) */
AObjEvent32 *dITCommonObject_FFlower_Item_matanimjoints[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dITCommonObject_FFlower_Item_matanimjoints_0x4788,
};

/* @ 0x0476C, 28 bytes — AObjEvent32 matanim script */
u32 dITCommonObject_FFlower_Item_matanimjoints_0x476C[7] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x200, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(6),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dITCommonObject_FFlower_Item_matanimjoints_0x476C),
};

/* @ 0x04788, 4 bytes — FFlower item matanim joint table (per-track AObjEvent32* entries) */
AObjEvent32 *dITCommonObject_FFlower_Item_matanimjoints_0x4788[1] = {
	(AObjEvent32 *)dITCommonObject_FFlower_Item_matanimjoints_0x476C,
};

/* @ 0x0478C, 12 bytes (raw gap) */
PAD(12);

/* @ 0x04798, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x4798[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x4798.palette.inc.c>
};

/* @ 0x047B8, 8 bytes (raw gap) */
PAD(8);

/* @ 0x047C0, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x47C0[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x47C0.palette.inc.c>
};

/* @ 0x047E0, 8 bytes (raw gap) */
PAD(8);

/* @ 0x047E8, 128 bytes — StarRod item texture */
u8 dITCommonObject_Tex_0x47E8[128] = {
	#include <ITCommonObject/dITCommonObject_Tex_0x47E8.tex.inc.c>
};

/* @ 0x04868, 8 bytes (raw gap) */
PAD(8);

/* @ 0x04870, 128 bytes — StarRod item texture */
u8 dITCommonObject_Tex_0x4870[128] = {
	#include <ITCommonObject/dITCommonObject_Tex_0x4870.tex.inc.c>
};

/* @ 0x048F0, 128 bytes (8 vertices) */
Vtx dITCommonObject_Vtx_0x48F0[8] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x48F0.vtx.inc.c>
};

/* @ 0x04970, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x4970[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x4970.vtx.inc.c>
};

/* @ 0x049B0, 104 bytes (13 Gfx commands) — StarRod joint 1 DL */
Gfx dITCommonObject_Gfx_0x49B0[13] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x49B0.dl.inc.c>
};

/* @ 0x04A18, 136 bytes (17 Gfx commands) — StarRod shared DL */
Gfx dITCommonObject_Gfx_0x4A18[17] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x4A18.dl.inc.c>
};

/* @ 0x04AA0, 192 bytes (24 Gfx commands) — StarRod joint 2 DL */
Gfx dITCommonObject_Gfx_0x4AA0[24] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x4AA0.dl.inc.c>
};

/* @ 0x04B60, 2296 bytes */
DObjDesc dITCommonObject_StarRod_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dITCommonObject_FFlower_Item_matanimjoints + 0x250), { 0.0f, 157.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)((u8*)dITCommonObject_FFlower_Item_matanimjoints + 0x340), { 0.0f, 105.44328308105469f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x4C10, 2120 bytes (vertex / DL / texture pool) */
/* gap sub-block @ 0x4C10 (was gap+0x0, 8 bytes) */
PAD(8);

/* gap sub-block @ 0x4C18 (was gap+0x8, 2048 bytes) */
/* @tex fmt=I8 dim=32x64 */
u8 dITCommonObject_Tex_0x4C18[2048] = {
	#include <ITCommonObject/Tex_0x4C18.tex.inc.c>
};

/* gap sub-block @ 0x5418 (was gap+0x808, 64 bytes) */
Vtx dITCommonObject_StarRod_Item_data_remainder_sub_0x808[4] = {
	#include <ITCommonObject/dITCommonObject_StarRod_Item_data_remainder_sub_0x808.vtx.inc.c>
};

/* Gfx DL: StarRod_Weapon_data @ 0x5458 (22 cmds) */
Gfx dITCommonObject_StarRod_Weapon_data[22] = {
	#include <ITCommonObject/StarRod_Weapon_data.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0x5508 (2264 bytes) */
u8 dITCommonObject_StarRod_Weapon_data_post[112] = {
	#include <ITCommonObject/StarRod_Weapon_data_post.data.inc.c>
};
/* split-self chunk @ +0x70 (40 bytes, abs 0x5578) */
u16 dITCommonObject_StarRod_Weapon_data_post_0x70[16] = {
	#include <ITCommonObject/StarRod_Weapon_data_post_0x70.palette.inc.c>
};

PAD(8);
/* split-self chunk @ +0x98 (40 bytes, abs 0x55A0) */
u16 dITCommonObject_StarRod_Weapon_data_post_0x98[16] = {
	#include <ITCommonObject/StarRod_Weapon_data_post_0x98.palette.inc.c>
};
PAD(8);
/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x55C8[520] = {
	#include <ITCommonObject/Tex_0x55C8.tex.inc.c>
};
/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x57D0[520] = {
	#include <ITCommonObject/Tex_0x57D0.tex.inc.c>
};
/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x59D8[520] = {
	#include <ITCommonObject/Tex_0x59D8.tex.inc.c>
};
/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x5BE0[512] = {
	#include <ITCommonObject/Tex_0x5BE0.tex.inc.c>
};

/* @ 0x05DE0, 424 bytes */
/* @ 0x5DE0, 160 bytes (raw gap) */
/* u32 pointer array @ 0x5DE0 (2 entries) */
u32 dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0[2] = {
	0x00000000,
	0x177A179E,
};

/* u32 pointer array @ 0x5DE8 (4 entries) */
u32 dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0_sub_0x8[4] = {
	(u32)&dITCommonObject_Tex_0x5BE0,
	(u32)&dITCommonObject_Tex_0x59D8,
	(u32)&dITCommonObject_Tex_0x57D0,
	(u32)&dITCommonObject_Tex_0x55C8,
};

/* u32 pointer array @ 0x5DF8 (2 entries) */
u32 dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0_sub_0x18[2] = {
	(u32)&dITCommonObject_StarRod_Weapon_data_post_0x98,
	(u32)&dITCommonObject_StarRod_Weapon_data_post_0x70,
};

/* MObjSub @ 0x5E00 */
MObjSub dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0_sub_0x20[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0_sub_0x8,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0_sub_0x18,
		0x0005,
		0x02, 0x00,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* u32 pointer array @ 0x5E78 (2 entries) */
u32 dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0_sub_0x98[2] = {
	(u32)&dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0_sub_0x20,
	0x00000000,
};

/* @ 0x5E80, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x5E80[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x5E80.vtx.inc.c>
};

/* @ 0x5EC0, 200 bytes (25 Gfx commands) */
Gfx dITCommonObject_Gfx_0x5EC0[25] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x5EC0.dl.inc.c>
};

/* @ 0x05F88, 2032 bytes */
DObjDesc dITCommonObject_GShell_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x5EC0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x600C, 140 bytes (raw gap) */
/* gap sub-block @ 0x600C (was gap+0x0, 12 bytes) */
AObjEvent32 *dITCommonObject_GShell_Item_data_remainder_gap_0x600C[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dITCommonObject_GShell_Item_data_remainder_gap_0x600C_sub_0xC,
};

/* gap sub-block @ 0x6018 (was gap+0xC, 48 bytes) */
u32 dITCommonObject_GShell_Item_data_remainder_gap_0x600C_sub_0xC[12] = {
	#include <ITCommonObject/gap_0x600C_sub_0xC.data.inc.c>
};

/* gap sub-block @ 0x6048 (was gap+0x3C, 60 bytes) */
u32 dITCommonObject_GShell_Item_data_remainder_gap_0x600C_sub_0x3C[15] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(4),
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dITCommonObject_GShell_Item_data_remainder_gap_0x600C_sub_0x3C,
};

/* gap sub-block @ 0x6084 (was gap+0x78, 20 bytes) */
AObjEvent32 *dITCommonObject_GShell_Item_data_remainder_gap_0x600C_sub_0x78[5] = {
	(AObjEvent32 *)dITCommonObject_GShell_Item_data_remainder_gap_0x600C_sub_0x3C,
	NULL,
	NULL,
	NULL,
	NULL,
};

/* @ 0x6098, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x6098[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x6098.palette.inc.c>
};

/* @ 0x60B8, 8 bytes (raw gap) */
PAD(8);

/* @ 0x60C0, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x60C0[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x60C0.palette.inc.c>
};

/* @ 0x60E0, 1040 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0x60E8 (was gap+0x8, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_LUT_0x6098 */
u8 dITCommonObject_Tex_0x60E8[520] = {
	#include <ITCommonObject/Tex_0x60E8.tex.inc.c>
};

/* gap sub-block @ 0x62F0 (was gap+0x210, 512 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_LUT_0x60C0 */
u8 dITCommonObject_Tex_0x62F0[512] = {
	#include <ITCommonObject/Tex_0x62F0.tex.inc.c>
};

/* @ 0x64F0, 224 bytes (14 vertices) */
Vtx dITCommonObject_Vtx_0x64F0[14] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x64F0.vtx.inc.c>
};

/* @ 0x65D0, 96 bytes (6 vertices) */
Vtx dITCommonObject_Vtx_0x65D0[6] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x65D0.vtx.inc.c>
};

/* @ 0x6630, 328 bytes (41 Gfx commands) */
Gfx dITCommonObject_Gfx_0x6630[41] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x6630.dl.inc.c>
};

/* @ 0x06778, 2608 bytes */
DObjDesc dITCommonObject_Box_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 9.999999974752427e-07f, -225.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x6630, { 0.0f, -9.999999974752427e-07f, 224.99998474121094f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x67FC, 492 bytes (raw gap) */
/* gap sub-block @ 0x67FC (was gap+0x0, 12 bytes) */
PAD(12);

/* gap sub-block @ 0x6808 (was gap+0xC, 40 bytes) */
u16 dITCommonObject_Box_Item_data_remainder_gap_0x67FC_sub_0xC[16] = {
	#include <ITCommonObject/gap_0x67FC_sub_0xC.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6830 (was gap+0x34, 128 bytes) */
u8 dITCommonObject_Box_Item_data_remainder_gap_0x67FC_sub_0x34[128] = {
	#include <ITCommonObject/gap_0x67FC_sub_0x34.data.inc.c>
};

/* gap sub-block @ 0x68B0 (was gap+0xB4, 312 bytes) */
u8 dITCommonObject_Box_Item_data_remainder_gap_0x67FC_sub_0xB4[312] = {
	#include <ITCommonObject/gap_0x67FC_sub_0xB4.data.inc.c>
};

/* @ 0x69E8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x69E8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x69E8.palette.inc.c>
};

/* @ 0x6A08, 8 bytes (raw gap) */
PAD(8);

/* @ 0x6A10, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x6A10[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x6A10.palette.inc.c>
};

/* @ 0x6A30, 1040 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0x6A38 (was gap+0x8, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_LUT_0x69E8 */
u8 dITCommonObject_Tex_0x6A38[520] = {
	#include <ITCommonObject/Tex_0x6A38.tex.inc.c>
};

/* gap sub-block @ 0x6C40 (was gap+0x210, 512 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_LUT_0x6A10 */
u8 dITCommonObject_Tex_0x6C40[512] = {
	#include <ITCommonObject/Tex_0x6C40.tex.inc.c>
};

/* @ 0x6E40, 160 bytes (10 vertices) */
Vtx dITCommonObject_Vtx_0x6E40[10] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x6E40.vtx.inc.c>
};

/* @ 0x6EE0, 288 bytes (18 vertices) */
Vtx dITCommonObject_Vtx_0x6EE0[18] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x6EE0.vtx.inc.c>
};

/* @ 0x7000, 424 bytes (53 Gfx commands) */
Gfx dITCommonObject_Gfx_0x7000[53] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x7000.dl.inc.c>
};

/* @ 0x071A8, 736 bytes */
DObjDesc dITCommonObject_Taru_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, -210.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x7000, { 0.0f, 0.0f, 210.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x722C, 604 bytes (vertex / DL / texture pool) */
/* gap sub-block @ 0x722C (was gap+0x0, 12 bytes) */
PAD(12);

/* gap sub-block @ 0x7238 (was gap+0xC, 40 bytes) */
u16 dITCommonObject_Taru_Item_data_remainder_sub_0xC[16] = {
	#include <ITCommonObject/dITCommonObject_Taru_Item_data_remainder_sub_0xC.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x7260 (was gap+0x34, 40 bytes) */
u16 dITCommonObject_Taru_Item_data_remainder_sub_0x34[16] = {
	#include <ITCommonObject/dITCommonObject_Taru_Item_data_remainder_sub_0x34.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x7288 (was gap+0x5C, 512 bytes) */
/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x7288[512] = {
	#include <ITCommonObject/Tex_0x7288.tex.inc.c>
};

/* @ 0x07488, 448 bytes */
/* @ 0x7488, 144 bytes (raw gap) */
/* u32 pointer array @ 0x7488 (2 entries) */
u32 dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488[2] = {
	0x00000000,
	0x1D241D44,
};

/* u32 pointer array @ 0x7490 (2 entries) */
u32 dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488_sub_0x8[2] = {
	(u32)&dITCommonObject_Taru_Item_data_remainder_sub_0x34,
	(u32)&dITCommonObject_Taru_Item_data_remainder_sub_0xC,
};

/* MObjSub @ 0x7498 */
MObjSub dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488_sub_0x10[1] = {
	{
		0x0000,
		0x02, 0x02,
		NULL,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488_sub_0x8,
		0x0004,
		0x02, 0x00,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* u32 pointer array @ 0x7510 (2 entries) */
u32 dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488_sub_0x88[2] = {
	(u32)&dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488_sub_0x10,
	0x00000000,
};

/* @ 0x7518, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x7518[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x7518.vtx.inc.c>
};

/* @ 0x7558, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x7558[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x7558.dl.inc.c>
};

/* @ 0x07648, 6872 bytes */
DObjDesc dITCommonObject_NBumper_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x7558, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x76CC, 1732 bytes (raw gap) */
/* gap sub-block @ 0x76CC (was gap+0x0, 12 bytes) */
PAD(12);

/* gap sub-block @ 0x76D8 (was gap+0xC, 40 bytes) */
u16 dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0xC[16] = {
	#include <ITCommonObject/gap_0x76CC_sub_0xC.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x7700 (was gap+0x34, 40 bytes) */
u16 dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x34[16] = {
	#include <ITCommonObject/gap_0x76CC_sub_0x34.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x7728 (was gap+0x5C, 776 bytes) */
/* @tex fmt=CI4 dim=32x48 */
u8 dITCommonObject_Tex_0x7728[776] = {
	#include <ITCommonObject/Tex_0x7728.tex.inc.c>
};

/* u32 pointer array @ 0x7A30 (2 entries) */
u32 dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x364[2] = {
	(u32)&dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x34,
	(u32)&dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0xC,
};

/* MObjSub @ 0x7A38 */
MObjSub dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x36C[1] = {
	{
		0x0000,
		0x02, 0x02,
		NULL,
		0x0020, 0x0000, 0x0030, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x364,
		0x0004,
		0x02, 0x00,
		0x0030,
		0x0020, 0x0030, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x7AB0 (was gap+0x3E4, 8 bytes) */
MObjSub *dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x3E4[2] = {
	(MObjSub *)dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x36C,
	NULL,
};

/* gap sub-block @ 0x7AB8 (was gap+0x3EC, 64 bytes) */
Vtx dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x3EC[4] = {
	#include <ITCommonObject/gap_0x76CC_sub_0x3EC.vtx.inc.c>
};

/* Gfx DL: NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C @ 0x7AF8 (30 cmds) */
Gfx dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C[30] = {
	#include <ITCommonObject/gap_0x76CC_sub_0x42C.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0x7BE8 (424 bytes) */
u8 dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post[424] = {
	#include <ITCommonObject/gap_0x76CC_sub_0x42C_post.data.inc.c>
};

/* @ 0x7D90, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x7D90[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x7D90.palette.inc.c>
};

/* @ 0x7DB0, 8 bytes (raw gap) */
PAD(8);

/* @ 0x7DB8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x7DB8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x7DB8.palette.inc.c>
};

/* @ 0x7DD8, 4936 bytes (trailing gap) */
PAD(8);

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x7DE0[520] = {
	#include <ITCommonObject/Tex_0x7DE0.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x7FE8[520] = {
	#include <ITCommonObject/Tex_0x7FE8.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x81F0[520] = {
	#include <ITCommonObject/Tex_0x81F0.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x83F8[520] = {
	#include <ITCommonObject/Tex_0x83F8.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x8600[520] = {
	#include <ITCommonObject/Tex_0x8600.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x8808[520] = {
	#include <ITCommonObject/Tex_0x8808.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x8A10[520] = {
	#include <ITCommonObject/Tex_0x8A10.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x8C18[520] = {
	#include <ITCommonObject/Tex_0x8C18.tex.inc.c>
};

/* gap sub-block @ 0x8E20 (was gap+0x1048, 768 bytes) */
/* @tex fmt=CI4 dim=32x48 lut=dITCommonObject_LUT_0x7DB8 */
u8 dITCommonObject_Tex_0x8E20[768] = {
	#include <ITCommonObject/Tex_0x8E20.tex.inc.c>
};

/* @ 0x09120, 784 bytes */
/* @ 0x9120, 176 bytes (raw gap) */
/* u32 pointer array @ 0x9120 (4 entries) */
u32 dITCommonObject_MBall_Item_mobjsubs_gap_0x9120[4] = {
	0x00000000,
	0x00000000,
	0x00000000,
	0x244C2472,
};

/* u32 pointer array @ 0x9130 (8 entries) */
u32 dITCommonObject_MBall_Item_mobjsubs_gap_0x9120_sub_0x10[8] = {
	(u32)&dITCommonObject_Tex_0x8C18,
	(u32)&dITCommonObject_Tex_0x8A10,
	(u32)&dITCommonObject_Tex_0x8808,
	(u32)&dITCommonObject_Tex_0x8600,
	(u32)&dITCommonObject_Tex_0x83F8,
	(u32)&dITCommonObject_Tex_0x81F0,
	(u32)&dITCommonObject_Tex_0x7FE8,
	(u32)&dITCommonObject_Tex_0x7DE0,
};

/* MObjSub @ 0x9150 */
MObjSub dITCommonObject_MBall_Item_mobjsubs_gap_0x9120_sub_0x30[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dITCommonObject_MBall_Item_mobjsubs_gap_0x9120_sub_0x10,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		0x02, 0x00,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x66, 0x66, 0x66, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* u32 pointer array @ 0x91C8 (2 entries) */
u32 dITCommonObject_MBall_Item_mobjsubs_gap_0x9120_sub_0xA8[2] = {
	(u32)&dITCommonObject_MBall_Item_mobjsubs_gap_0x9120_sub_0x30,
	0x00000000,
};

/* @ 0x91D0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x91D0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x91D0.vtx.inc.c>
};

/* @ 0x9210, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x9210[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x9210.vtx.inc.c>
};

/* @ 0x9250, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x9250[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x9250.dl.inc.c>
};

/* @ 0x9340, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x9340[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x9340.dl.inc.c>
};

/* @ 0x09430, 3344 bytes */
DObjDesc dITCommonObject_MBall_Item_data_DObjDesc[5] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0x9250, { -75.0f, 9.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0x9340, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x950C, 988 bytes (raw gap) */
/* gap sub-block @ 0x950C (was gap+0x0, 20 bytes) */
u16 *dITCommonObject_MBall_Item_data_remainder_gap_0x950C[5] = {
	NULL,
	NULL,
	NULL,
	NULL,
	dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0xC4,
};

/* gap sub-block @ 0x9520 (was gap+0x14, 176 bytes) */
u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x14[44] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x14,
};

/* gap sub-block @ 0x95D0 (was gap+0xC4, 32 bytes) */
u16 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0xC4[16] = {
	#include <ITCommonObject/gap_0x950C_sub_0xC4.palette.inc.c>
};

/* gap sub-block @ 0x95F0 (was gap+0xE4, 120 bytes) */
u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0xE4[30] = {
	aobjEvent32SetValRate(0x070, 0),
	    0x453B8000,  /* 3000.0f */
	    0xC33A9701,  /* -186.58985900878906f */
	    0xC53B8000,  /* -3000.0f */
	    0x43E60595,  /* 460.0436096191406f */
	    0x45BB8000,  /* 6000.0f */
	    0xC38811B8,  /* -272.138427734375f */
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3FC00000,  /* 1.5f */
	    0x3FC00000,  /* 1.5f */
	    0x3FC00000,  /* 1.5f */
	aobjEvent32SetValRate(0x020, 40),
	    0x42B40000,  /* 90.0f */
	    0xC280F1D0,  /* -64.4722900390625f */
	aobjEvent32SetVal0RateBlock(0x3D0, 40),
	    0x41F00000,  /* 30.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x3F0, 80),
	    0x41F00000,  /* 30.0f */
	    0x42B40000,  /* 90.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

/* gap sub-block @ 0x9668 (was gap+0x15C, 16 bytes) */
u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x15C[4] = {
	aobjEvent32SetFlags(0x002, 40),
	aobjEvent32SetFlags(0x000, 35),
	aobjEvent32SetFlags(0x002, 45),
	aobjEvent32End(),
};

/* gap sub-block @ 0x9678 (was gap+0x16C, 40 bytes) */
u8 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x16C[40] = {
	#include <ITCommonObject/gap_0x950C_sub_0x16C.data.inc.c>
};

/* gap sub-block @ 0x96A0 (was gap+0x194, 120 bytes) */
u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x194[30] = {
	aobjEvent32SetValRate(0x070, 0),
	    0xC53B8000,  /* -3000.0f */
	    0x4338665C,  /* 184.39984130859375f */
	    0xC53B8000,  /* -3000.0f */
	    0x43E4B91A,  /* 457.44610595703125f */
	    0x45BB8000,  /* 6000.0f */
	    0xC38D86F7,  /* -283.0544128417969f */
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3FC00000,  /* 1.5f */
	    0x3FC00000,  /* 1.5f */
	    0x3FC00000,  /* 1.5f */
	aobjEvent32SetValRate(0x020, 40),
	    0x42B40000,  /* 90.0f */
	    0xC280F1D0,  /* -64.4722900390625f */
	aobjEvent32SetVal0RateBlock(0x3D0, 40),
	    0x41F00000,  /* 30.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x3F0, 80),
	    0x41F00000,  /* 30.0f */
	    0x42B40000,  /* 90.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

/* gap sub-block @ 0x9718 (was gap+0x20C, 16 bytes) */
u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x20C[4] = {
	aobjEvent32SetFlags(0x002, 40),
	aobjEvent32SetFlags(0x000, 35),
	aobjEvent32SetFlags(0x002, 45),
	aobjEvent32End(),
};

/* gap sub-block @ 0x9728 (was gap+0x21C, 40 bytes) */
u8 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x21C[40] = {
	#include <ITCommonObject/gap_0x950C_sub_0x21C.data.inc.c>
};

/* gap sub-block @ 0x9750 (was gap+0x244, 176 bytes) */
u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x244[44] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(82),
	aobjEvent32End(),
};

/* gap sub-block @ 0x9800 (was gap+0x2F4, 32 bytes) */
u8 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x2F4[32] = {
	#include <ITCommonObject/gap_0x950C_sub_0x2F4.data.inc.c>
};

/* gap sub-block @ 0x9820 (was gap+0x314, 176 bytes) */
u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x314[44] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(82),
	aobjEvent32End(),
};

/* gap sub-block @ 0x98D0 (was gap+0x3C4, 24 bytes) */
AObjEvent32 *dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x3C4[6] = {
	(AObjEvent32 *)dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x314,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};

/* @ 0x98E8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x98E8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x98E8.palette.inc.c>
};

/* @ 0x9908, 1800 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0x9910 (was gap+0x8, 1792 bytes) */
/* @tex fmt=CI4 dim=64x56 lut=dITCommonObject_LUT_0x98E8 */
u8 dITCommonObject_Tex_0x9910[1792] = {
	#include <ITCommonObject/Tex_0x9910.tex.inc.c>
};

/* @ 0xA010, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xA010[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xA010.vtx.inc.c>
};

/* @ 0xA050, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xA050[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xA050.dl.inc.c>
};

/* @ 0x0A140, 2192 bytes */
DObjDesc dITCommonObject_Wark_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xA050, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xA1C4, 1620 bytes (raw gap) */
/* gap sub-block @ 0xA1C4 (was gap+0x0, 20 bytes) */
PAD(20);

/* gap sub-block @ 0xA1D8 (was gap+0x14, 40 bytes) */
u16 dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4_sub_0x14[16] = {
	#include <ITCommonObject/gap_0xA1C4_sub_0x14.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0xA200 (was gap+0x3C, 1024 bytes) */
/* @tex fmt=CI4 dim=32x64 lut=dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4_sub_0x14 */
u8 dITCommonObject_Tex_0xA200[1024] = {
	#include <ITCommonObject/Tex_0xA200.tex.inc.c>
};

/* gap sub-block @ 0xA600 (was gap+0x43C, 64 bytes) */
Vtx dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4_sub_0x43C[4] = {
	#include <ITCommonObject/gap_0xA1C4_sub_0x43C.vtx.inc.c>
};

/* Gfx DL: Wark_Item_data_remainder_gap_0xA1C4_sub_0x47C @ 0xA640 (30 cmds) */
Gfx dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4_sub_0x47C[30] = {
	#include <ITCommonObject/gap_0xA1C4_sub_0x47C.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0xA730 (232 bytes) */
u8 dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4_sub_0x47C_post[232] = {
	#include <ITCommonObject/gap_0xA1C4_sub_0x47C_post.data.inc.c>
};

/* @ 0xA818, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xA818[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xA818.palette.inc.c>
};

/* @ 0xA838, 408 bytes (trailing gap) */
PAD(8);

/* @tex fmt=CI4 dim=16x16 */
u8 dITCommonObject_Tex_0xA840[136] = {
	#include <ITCommonObject/Tex_0xA840.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x16 */
u8 dITCommonObject_Tex_0xA8C8[136] = {
	#include <ITCommonObject/Tex_0xA8C8.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x16 */
u8 dITCommonObject_Tex_0xA950[128] = {
	#include <ITCommonObject/Tex_0xA950.tex.inc.c>
};

/* @ 0x0A9D0, 456 bytes */
/* @ 0xA9D0, 152 bytes (raw gap) */
/* u32 pointer array @ 0xA9D0 (2 entries) */
u32 dITCommonObject_WarkRock_Weapon_mobjsubs_gap_0xA9D0[2] = {
	0x00000000,
	0x2A762A98,
};

/* u32 pointer array @ 0xA9D8 (4 entries) */
u32 dITCommonObject_WarkRock_Weapon_mobjsubs_gap_0xA9D0_sub_0x8[4] = {
	(u32)&dITCommonObject_Tex_0xA950,
	(u32)&dITCommonObject_Tex_0xA8C8,
	(u32)&dITCommonObject_Tex_0xA840,
	0x00000000,
};

/* MObjSub @ 0xA9E8 */
MObjSub dITCommonObject_WarkRock_Weapon_mobjsubs_gap_0xA9D0_sub_0x18[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dITCommonObject_WarkRock_Weapon_mobjsubs_gap_0xA9D0_sub_0x8,
		0x0020, 0x0000, 0x0010, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x59, 0x59, 0x59, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* u32 pointer array @ 0xAA60 (2 entries) */
u32 dITCommonObject_WarkRock_Weapon_mobjsubs_gap_0xA9D0_sub_0x90[2] = {
	(u32)&dITCommonObject_WarkRock_Weapon_mobjsubs_gap_0xA9D0_sub_0x18,
	0x00000000,
};

/* @ 0xAA68, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xAA68[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xAA68.vtx.inc.c>
};

/* @ 0xAAA8, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xAAA8[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xAAA8.dl.inc.c>
};

/* @ 0x0AB98, 1472 bytes */
DObjDesc dITCommonObject_WarkRock_Weapon_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xAAA8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xAC1C, 108 bytes (raw gap) */
/* gap sub-block @ 0xAC1C (was gap+0x0, 12 bytes) */
AObjEvent32 **dITCommonObject_WarkRock_Weapon_data_remainder_gap_0xAC1C[3] = {
	NULL,
	NULL,
	(AObjEvent32 **)dITCommonObject_WarkRock_Weapon_data_remainder_gap_0xAC1C_sub_0x5C,
};

/* gap sub-block @ 0xAC28 (was gap+0xC, 80 bytes) */
u32 dITCommonObject_WarkRock_Weapon_data_remainder_gap_0xAC1C_sub_0xC[20] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dITCommonObject_WarkRock_Weapon_data_remainder_gap_0xAC1C_sub_0xC,
};

/* gap sub-block @ 0xAC78 (was gap+0x5C, 16 bytes) */
AObjEvent32 *dITCommonObject_WarkRock_Weapon_data_remainder_gap_0xAC1C_sub_0x5C[4] = {
	(AObjEvent32 *)dITCommonObject_WarkRock_Weapon_data_remainder_gap_0xAC1C_sub_0xC,
	NULL,
	NULL,
	NULL,
};

/* @ 0xAC88, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xAC88[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xAC88.palette.inc.c>
};

/* @ 0xACA8, 904 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0xACB0 (was gap+0x8, 896 bytes) */
/* @tex fmt=CI4 dim=32x56 lut=dITCommonObject_LUT_0xAC88 */
u8 dITCommonObject_Tex_0xACB0[896] = {
	#include <ITCommonObject/Tex_0xACB0.tex.inc.c>
};

/* @ 0xB030, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xB030[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xB030.vtx.inc.c>
};

/* @ 0xB070, 232 bytes (29 Gfx commands) */
Gfx dITCommonObject_Gfx_0xB070[29] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xB070.dl.inc.c>
};

/* @ 0x0B158, 1000 bytes */
DObjDesc dITCommonObject_Kabigon_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xB070, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xB1DC, 52 bytes: PAD(12) + 16-color palette + PAD(8) leading
 * into LUT_0xB210. The palette is byte-similar to LUT_0xB210 — likely
 * the team-color variant for the same Kabigon sprite. No chain entry
 * points at it. */
PAD(12);

/* @ 0xB1E8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xB1E8[16] = {
	#include <ITCommonObject/LUT_0xB1E8.palette.inc.c>
};

PAD(8);

/* @ 0xB210, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xB210[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xB210.palette.inc.c>
};

/* @ 0xB230, 784 bytes (trailing gap) */
PAD(8);

/* @tex fmt=CI4 dim=32x24 */
u8 dITCommonObject_Tex_0xB238[392] = {
	#include <ITCommonObject/Tex_0xB238.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x24 */
u8 dITCommonObject_Tex_0xB3C0[384] = {
	#include <ITCommonObject/Tex_0xB3C0.tex.inc.c>
};

/* @ 0x0B540, 456 bytes */
/* @ 0xB540, 152 bytes (raw gap) */
/* u32 pointer array @ 0xB540 (3 entries) */
u32 dITCommonObject_Tosakinto_Item_mobjsubs_gap_0xB540[3] = {
	0x00000000,
	0x00000000,
	0x2D532D74,
};

/* u32 pointer array @ 0xB54C (3 entries) */
u32 dITCommonObject_Tosakinto_Item_mobjsubs_gap_0xB540_sub_0xC[3] = {
	(u32)&dITCommonObject_Tex_0xB3C0,
	(u32)&dITCommonObject_Tex_0xB238,
	0x00000000,
};

/* MObjSub @ 0xB558 */
MObjSub dITCommonObject_Tosakinto_Item_mobjsubs_gap_0xB540_sub_0x18[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dITCommonObject_Tosakinto_Item_mobjsubs_gap_0xB540_sub_0xC,
		0x0020, 0x0000, 0x0020, 0x0018,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		0x02, 0x00,
		0x0020,
		0x0018, 0x0020, 0x0018,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x59, 0x59, 0x59, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* u32 pointer array @ 0xB5D0 (2 entries) */
u32 dITCommonObject_Tosakinto_Item_mobjsubs_gap_0xB540_sub_0x90[2] = {
	(u32)&dITCommonObject_Tosakinto_Item_mobjsubs_gap_0xB540_sub_0x18,
	0x00000000,
};

/* @ 0xB5D8, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xB5D8[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xB5D8.vtx.inc.c>
};

/* @ 0xB618, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xB618[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xB618.dl.inc.c>
};

/* @ 0x0B708, 1464 bytes */
DObjDesc dITCommonObject_Tosakinto_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0xB618, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xB7B8, 432 bytes (raw gap) */
/* gap sub-block @ 0xB7B8 (was gap+0x0, 20 bytes) */
AObjEvent32 *dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8[5] = {
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8_sub_0x14,
};

/* gap sub-block @ 0xB7CC (was gap+0x14, 320 bytes) */
u32 dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8_sub_0x14[80] = {
	#include <ITCommonObject/gap_0xB7B8_sub_0x14.data.inc.c>
};

/* gap sub-block @ 0xB90C (was gap+0x154, 80 bytes) */
u32 dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8_sub_0x154[20] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8_sub_0x154,
};

/* gap sub-block @ 0xB95C (was gap+0x1A4, 12 bytes) */
AObjEvent32 *dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8_sub_0x1A4[3] = {
	(AObjEvent32 *)dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8_sub_0x154,
	NULL,
	NULL,
};

/* @ 0xB968, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xB968[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xB968.palette.inc.c>
};

/* @ 0xB988, 520 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0xB990 (was gap+0x8, 512 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_LUT_0xB968 */
u8 dITCommonObject_Tex_0xB990[512] = {
	#include <ITCommonObject/Tex_0xB990.tex.inc.c>
};

/* @ 0xBB90, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xBB90[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xBB90.vtx.inc.c>
};

/* @ 0xBBD0, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xBBD0[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xBBD0.dl.inc.c>
};

/* @ 0x0BCC0, 1136 bytes */
DObjDesc dITCommonObject_Mew_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xBBD0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xBD44, 20 bytes (raw gap) */
PAD(20);

/* @ 0xBD58, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xBD58[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xBD58.palette.inc.c>
};

/* @ 0xBD78, 648 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0xBD80 (was gap+0x8, 640 bytes) */
/* @tex fmt=CI4 dim=32x40 lut=dITCommonObject_LUT_0xBD58 */
u8 dITCommonObject_Tex_0xBD80[640] = {
	#include <ITCommonObject/Tex_0xBD80.tex.inc.c>
};

/* @ 0xC000, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xC000[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xC000.vtx.inc.c>
};

/* @ 0xC040, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xC040[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xC040.dl.inc.c>
};

/* @ 0x0C130, 1008 bytes */
DObjDesc dITCommonObject_Nyars_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xC040, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xC1B4, 20 bytes (raw gap) */
PAD(20);

/* @ 0xC1C8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xC1C8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xC1C8.palette.inc.c>
};

/* @ 0xC1E8, 520 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0xC1F0 (was gap+0x8, 512 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_LUT_0xC1C8 */
u8 dITCommonObject_Tex_0xC1F0[512] = {
	#include <ITCommonObject/Tex_0xC1F0.tex.inc.c>
};

/* @ 0xC3F0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xC3F0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xC3F0.vtx.inc.c>
};

/* @ 0xC430, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xC430[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xC430.dl.inc.c>
};

/* @ 0x0C520, 3824 bytes */
DObjDesc dITCommonObject_NyarsCoin_Weapon_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xC430, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xC5A4, 60 bytes: PAD(20) + 16-color palette + PAD(8) leading
 * into LUT_0xC5E0 (likely a team-color variant for NyarsCoin). No
 * chain entry points at it. */
PAD(20);

/* @ 0xC5B8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xC5B8[16] = {
	#include <ITCommonObject/LUT_0xC5B8.palette.inc.c>
};

PAD(8);

/* @ 0xC5E0, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xC5E0[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xC5E0.palette.inc.c>
};

/* @ 0xC600, 3600 bytes (trailing gap) */
PAD(8);

/* @tex fmt=CI4 dim=64x56 */
u8 dITCommonObject_Tex_0xC608[1800] = {
	#include <ITCommonObject/Tex_0xC608.tex.inc.c>
};

/* @tex fmt=CI4 dim=64x56 */
u8 dITCommonObject_Tex_0xCD10[1792] = {
	#include <ITCommonObject/Tex_0xCD10.tex.inc.c>
};

/* @ 0x0D410, 432 bytes */
/* @ 0xD410, 144 bytes (raw gap) */
/* u32 pointer array @ 0xD410 (2 entries) */
u32 dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410[2] = {
	0x00000000,
	0x35063526,
};

/* u32 pointer array @ 0xD418 (2 entries) */
u32 dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410_sub_0x8[2] = {
	(u32)&dITCommonObject_Tex_0xCD10,
	(u32)&dITCommonObject_Tex_0xC608,
};

/* MObjSub @ 0xD420 */
MObjSub dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410_sub_0x10[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410_sub_0x8,
		0x0020, 0x0000, 0x0040, 0x0038,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x00A1,
		0x02, 0x00,
		0x0040,
		0x0038, 0x0040, 0x0038,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x59, 0x59, 0x59, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* u32 pointer array @ 0xD498 (2 entries) */
u32 dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410_sub_0x88[2] = {
	(u32)&dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410_sub_0x10,
	0x00000000,
};

/* @ 0xD4A0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xD4A0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xD4A0.vtx.inc.c>
};

/* @ 0xD4E0, 224 bytes (28 Gfx commands) */
Gfx dITCommonObject_Gfx_0xD4E0[28] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xD4E0.dl.inc.c>
};

/* @ 0x0D5C0, 1968 bytes */
DObjDesc dITCommonObject_Lizardon_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 9.999999974752427e-07f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xD4E0, { 0.0f, 0.0f, 0.0f }, { 0.0f, -3.1415929794311523f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xD644, 244 bytes (raw gap) */
/* gap sub-block @ 0xD644 (was gap+0x0, 20 bytes) */
AObjEvent32 *dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644[5] = {
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x14,
};

/* gap sub-block @ 0xD658 (was gap+0x14, 48 bytes) */
u32 dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x14[12] = {
	#include <ITCommonObject/gap_0xD644_sub_0x14.data.inc.c>
};

/* gap sub-block @ 0xD688 (was gap+0x44, 72 bytes) */
u32 dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x44[18] = {
	aobjEvent32SetValAfterBlock(0x01F, 0),
	    0x3F800000,  /* 1.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 6),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 16),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 16),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x44,
};

/* gap sub-block @ 0xD6D0 (was gap+0x8C, 104 bytes) */
u8 dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x8C[104] = {
	#include <ITCommonObject/gap_0xD644_sub_0x8C.data.inc.c>
};

/* @ 0xD738, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xD738[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xD738.palette.inc.c>
};

/* @ 0xD758, 1560 bytes (trailing gap) */
PAD(8);

/* @tex fmt=CI4 dim=24x32 */
u8 dITCommonObject_Tex_0xD760[520] = {
	#include <ITCommonObject/Tex_0xD760.tex.inc.c>
};

/* @tex fmt=CI4 dim=24x32 */
u8 dITCommonObject_Tex_0xD968[520] = {
	#include <ITCommonObject/Tex_0xD968.tex.inc.c>
};

/* @tex fmt=CI4 dim=24x32 */
u8 dITCommonObject_Tex_0xDB70[512] = {
	#include <ITCommonObject/Tex_0xDB70.tex.inc.c>
};

/* @ 0x0DD70, 456 bytes */
/* @ 0xDD70, 152 bytes (raw gap) */
/* u32 pointer array @ 0xDD70 (3 entries) */
u32 dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70[3] = {
	0x00000000,
	0x00000000,
	0x375F3780,
};

/* u32 pointer array @ 0xDD7C (3 entries) */
u32 dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70_sub_0xC[3] = {
	(u32)&dITCommonObject_Tex_0xDB70,
	(u32)&dITCommonObject_Tex_0xD968,
	(u32)&dITCommonObject_Tex_0xD760,
};

/* MObjSub @ 0xDD88 */
MObjSub dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70_sub_0x18[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70_sub_0xC,
		0x0020, 0x0000, 0x0018, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		0x02, 0x00,
		0x0018,
		0x0020, 0x0018, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x59, 0x59, 0x59, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* u32 pointer array @ 0xDE00 (2 entries) */
u32 dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70_sub_0x90[2] = {
	(u32)&dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70_sub_0x18,
	0x00000000,
};

/* @ 0xDE08, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xDE08[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xDE08.vtx.inc.c>
};

/* @ 0xDE48, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xDE48[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xDE48.dl.inc.c>
};

/* @ 0x0DF38, 936 bytes */
DObjDesc dITCommonObject_Spear_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0xDE48, { -135.0f, -135.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xDFE8, 760 bytes (vertex / DL / texture pool) */
/* gap sub-block @ 0xDFE8 (was gap+0x0, 20 bytes) */
AObjEvent32 *dITCommonObject_Spear_Item_data_remainder[5] = {
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dITCommonObject_Spear_Item_data_remainder_sub_0x14,
};

/* gap sub-block @ 0xDFFC (was gap+0x14, 304 bytes) */
u32 dITCommonObject_Spear_Item_data_remainder_sub_0x14[76] = {
	#include <ITCommonObject/dITCommonObject_Spear_Item_data_remainder_sub_0x14.data.inc.c>
};

/* gap sub-block @ 0xE12C (was gap+0x144, 432 bytes) */
u32 dITCommonObject_Spear_Item_data_remainder_sub_0x144[108] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dITCommonObject_Spear_Item_data_remainder_sub_0x144,
};

/* gap sub-block @ 0xE2DC (was gap+0x2F4, 4 bytes) */
AObjEvent32 *dITCommonObject_Spear_Item_data_remainder_sub_0x2F4[1] = {
	(AObjEvent32 *)dITCommonObject_Spear_Item_data_remainder_sub_0x144,
};

/* @ 0x0E2E0, 456 bytes */
/* @ 0xE2E0, 152 bytes (raw gap) */
/* u32 pointer array @ 0xE2E0 (3 entries) */
u32 dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0[3] = {
	0x00000000,
	0x00000000,
	0x38BB38DC,
};

/* u32 pointer array @ 0xE2EC (3 entries) */
u32 dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0_sub_0xC[3] = {
	(u32)&dITCommonObject_Tex_0xDB70,
	(u32)&dITCommonObject_Tex_0xD968,
	(u32)&dITCommonObject_Tex_0xD760,
};

/* MObjSub @ 0xE2F8 */
MObjSub dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0_sub_0x18[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0_sub_0xC,
		0x0020, 0x0000, 0x0018, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		0x02, 0x00,
		0x0018,
		0x0020, 0x0018, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x59, 0x59, 0x59, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* u32 pointer array @ 0xE370 (2 entries) */
u32 dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0_sub_0x90[2] = {
	(u32)&dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0_sub_0x18,
	0x00000000,
};

/* @ 0xE378, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xE378[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xE378.vtx.inc.c>
};

/* @ 0xE3B8, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xE3B8[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xE3B8.dl.inc.c>
};

/* @ 0x0E4A8, 184 bytes */
DObjDesc dITCommonObject_SpearSwarm_Weapon_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0xE3B8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xE558, 8 bytes (vertex / DL / texture pool) */
PAD(8);

/* @ 0x0E560, 12 bytes — SpearSwarm weapon matanim joint table (per-MObj AObjEvent32** entries) */
AObjEvent32 *dITCommonObject_SpearSwarm_Weapon_matanimjoints[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dITCommonObject_SpearSwarm_Weapon_matanimjoints_0xE67C,
};

/* @ 0x0E56C, 272 bytes — AObjEvent32 matanim script */
u32 dITCommonObject_SpearSwarm_Weapon_matanimjoints_0xE56C[68] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dITCommonObject_SpearSwarm_Weapon_matanimjoints_0xE56C),
};

/* @ 0x0E67C, 4 bytes — SpearSwarm weapon matanim joint table (per-track AObjEvent32* entries) */
AObjEvent32 *dITCommonObject_SpearSwarm_Weapon_matanimjoints_0xE67C[1] = {
	(AObjEvent32 *)dITCommonObject_SpearSwarm_Weapon_matanimjoints_0xE56C,
};

/* @ 0x0E680, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0E688, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xE688[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xE688.palette.inc.c>
};

/* @ 0x0E6A8, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0E6B0, 640 bytes — Kamex weapon texture */
u8 dITCommonObject_Tex_0xE6B0[640] = {
	#include <ITCommonObject/dITCommonObject_Tex_0xE6B0.tex.inc.c>
};

/* @ 0x0E930, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xE930[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xE930.vtx.inc.c>
};

/* @ 0x0E970, 240 bytes (30 Gfx commands) — Kamex weapon DL */
Gfx dITCommonObject_Gfx_0xE970[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xE970.dl.inc.c>
};

/* @ 0x0EA60, 3168 bytes */
DObjDesc dITCommonObject_Kamex_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dITCommonObject_SpearSwarm_Weapon_matanimjoints + 0x410), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xEAE4, 1108 bytes (raw gap) */
/* gap sub-block @ 0xEAE4 (was gap+0x0, 20 bytes) */
PAD(20);

/* gap sub-block @ 0xEAF8 (was gap+0x14, 40 bytes) */
u16 dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4_sub_0x14[16] = {
	#include <ITCommonObject/gap_0xEAE4_sub_0x14.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0xEB20 (was gap+0x3C, 512 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4_sub_0x14 */
u8 dITCommonObject_Tex_0xEB20[512] = {
	#include <ITCommonObject/Tex_0xEB20.tex.inc.c>
};

/* gap sub-block @ 0xED20 (was gap+0x23C, 64 bytes) */
Vtx dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4_sub_0x23C[4] = {
	#include <ITCommonObject/gap_0xEAE4_sub_0x23C.vtx.inc.c>
};

/* Gfx DL: Kamex_Item_data_remainder_gap_0xEAE4_sub_0x27C @ 0xED60 (30 cmds) */
Gfx dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4_sub_0x27C[30] = {
	#include <ITCommonObject/gap_0xEAE4_sub_0x27C.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0xEE50 (232 bytes) */
u8 dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4_sub_0x27C_post[232] = {
	#include <ITCommonObject/gap_0xEAE4_sub_0x27C_post.data.inc.c>
};

/* @ 0xEF38, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xEF38[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xEF38.palette.inc.c>
};

/* @ 0xEF58, 88 bytes (raw gap) */
u8 dITCommonObject_Kamex_Item_data_remainder_gap_0xEF58[0x58] = {
	#include <ITCommonObject/dITCommonObject_Kamex_Item_data_remainder_gap_0xEF58.data.inc.c>
};

/* @ 0xEFB0, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xEFB0[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xEFB0.palette.inc.c>
};

/* @ 0xEFD0, 1776 bytes (trailing gap) */
PAD(8);

/* @tex fmt=CI4 dim=16x24 */
u8 dITCommonObject_Tex_0xEFD8[200] = {
	#include <ITCommonObject/Tex_0xEFD8.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x24 */
u8 dITCommonObject_Tex_0xF0A0[200] = {
	#include <ITCommonObject/Tex_0xF0A0.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x24 */
u8 dITCommonObject_Tex_0xF168[200] = {
	#include <ITCommonObject/Tex_0xF168.tex.inc.c>
};

/* @tex fmt=CI4 dim=24x24 */
u8 dITCommonObject_Tex_0xF230[392] = {
	#include <ITCommonObject/Tex_0xF230.tex.inc.c>
};

/* @tex fmt=CI4 dim=24x24 */
u8 dITCommonObject_Tex_0xF3B8[392] = {
	#include <ITCommonObject/Tex_0xF3B8.tex.inc.c>
};

/* @tex fmt=CI4 dim=24x24 */
u8 dITCommonObject_Tex_0xF540[384] = {
	#include <ITCommonObject/Tex_0xF540.tex.inc.c>
};

/* @ 0x0F6C0, 792 bytes */
/* @ 0xF6C0, 296 bytes (raw gap) */
/* u32 pointer array @ 0xF6C0 (3 entries) */
u32 dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0[3] = {
	0x00000000,
	0x3DB23DF6,
	0x3DB33DF8,
};

/* u32 pointer array @ 0xF6CC (3 entries) */
u32 dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0xC[3] = {
	(u32)&dITCommonObject_Tex_0xF540,
	(u32)&dITCommonObject_Tex_0xF3B8,
	(u32)&dITCommonObject_Tex_0xF230,
};

/* u32 pointer array @ 0xF6D8 (4 entries) */
u32 dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0x18[4] = {
	(u32)&dITCommonObject_Tex_0xF168,
	(u32)&dITCommonObject_Tex_0xF0A0,
	(u32)&dITCommonObject_Tex_0xEFD8,
	0x00000000,
};

/* MObjSub @ 0xF6E8 */
MObjSub dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0x28[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0xC,
		0x0020, 0x0000, 0x0018, 0x0018,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		0x02, 0x00,
		0x0018,
		0x0018, 0x0018, 0x0018,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x59, 0x59, 0x59, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0xF760 */
MObjSub dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0xA0[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0x18,
		0x0020, 0x0000, 0x0010, 0x0018,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		0x02, 0x00,
		0x0010,
		0x0018, 0x0010, 0x0018,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x59, 0x59, 0x59, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* u32 pointer array @ 0xF7D8 (2 entries) */
u32 dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0x118[2] = {
	(u32)&dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0xA0,
	0x00000000,
};

/* u32 pointer array @ 0xF7E0 (2 entries) */
u32 dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0x120[2] = {
	(u32)&dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0x28,
	0x00000000,
};

/* @ 0xF7E8, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xF7E8[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xF7E8.vtx.inc.c>
};

/* @ 0xF828, 32 bytes (2 vertices) */
Vtx dITCommonObject_Vtx_0xF828[2] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xF828.vtx.inc.c>
};

/* @ 0xF848, 96 bytes (12 Gfx commands) */
Gfx dITCommonObject_Gfx_0xF848[12] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xF848.dl.inc.c>
};

/* @ 0xF8A8, 120 bytes (15 Gfx commands) */
Gfx dITCommonObject_Gfx_0xF8A8[15] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xF8A8.dl.inc.c>
};

/* @ 0xF920, 184 bytes (23 Gfx commands) */
Gfx dITCommonObject_Gfx_0xF920[23] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xF920.dl.inc.c>
};

/* @ 0x0F9D8, 184 bytes */
DObjDesc dITCommonObject_KamexHydro_Weapon_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xF848, { 4391.25f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 9.999999747378752e-06f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0xF920, { -4481.25f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xFA88, 8 bytes (vertex / DL / texture pool) */
PAD(8);

/* @ 0x0FA90, 224 bytes */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dITCommonObject_KamexHydro_Weapon_animjoints[3] = {
	NULL,
	(AObjEvent32 *)dITCommonObject_KamexHydro_Weapon_animjoints_0xFA9C,
	(AObjEvent32 *)dITCommonObject_KamexHydro_Weapon_animjoints_0xFB4C,
};

u32 dITCommonObject_KamexHydro_Weapon_animjoints_0xFA9C[] = {
	aobjEvent32SetValAfter(0x2E0, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x100, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F80B307,  /* 1.0054634809494019f */
	aobjEvent32SetValBlock(0x010, 0),
	    0x42700000,  /* 60.0f */
	aobjEvent32SetVal(0x010, 32),
	    0x45924000,  /* 4680.0f */
	aobjEvent32SetVal0RateBlock(0x100, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetVal0RateBlock(0x100, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValRateBlock(0x100, 2),
	    0x3F800000,  /* 1.0f */
	    0xB923704A,  /* -0.00015586722292937338f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(0x100, 2),
	    0x40000000,  /* 2.0f */
	    0x39400277,  /* 0.0001831146510085091f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(0x100, 1),
	    0x40000000,  /* 2.0f */
	    0xBA02A295,  /* -0.0004983333055861294f */
	aobjEvent32SetValRateBlock(0x100, 4),
	    0x00000000,  /* 0.0f */
	    0xBEE77244,  /* -0.45204365253448486f */
	aobjEvent32SetValBlock(0x100, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dITCommonObject_KamexHydro_Weapon_animjoints_0xFA9C),
};

u32 dITCommonObject_KamexHydro_Weapon_animjoints_0xFB4C[] = {
	aobjEvent32SetVal(0x010, 0),
	    0xC3160000,  /* -150.0f */
	aobjEvent32SetValAfter(0x060, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 32),
	    0xC5951000,  /* -4770.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dITCommonObject_KamexHydro_Weapon_animjoints_0xFB4C),
};

/* @ 0x0FB70, 12 bytes — KamexHydro weapon matanim joint table (per-MObj AObjEvent32** entries) */
AObjEvent32 *dITCommonObject_KamexHydro_Weapon_matanimjoints[3] = {
	NULL,
	(AObjEvent32 *)dITCommonObject_KamexHydro_Weapon_matanimjoints_0xFC9C,
	(AObjEvent32 *)&dITCommonObject_KamexHydro_Weapon_matanimjoints_0xFC9C[1],
};

/* @ 0x0FB7C, 144 bytes — AObjEvent32 matanim script */
u32 dITCommonObject_KamexHydro_Weapon_matanimjoints_0xFB7C[36] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dITCommonObject_KamexHydro_Weapon_matanimjoints_0xFB7C),
};

/* @ 0x0FC0C, 144 bytes — AObjEvent32 matanim script */
u32 dITCommonObject_KamexHydro_Weapon_matanimjoints_0xFC0C[36] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dITCommonObject_KamexHydro_Weapon_matanimjoints_0xFC0C),
};

/* @ 0x0FC9C, 8 bytes — KamexHydro weapon matanim joint table (per-track AObjEvent32* entries) */
AObjEvent32 *dITCommonObject_KamexHydro_Weapon_matanimjoints_0xFC9C[2] = {
	(AObjEvent32 *)dITCommonObject_KamexHydro_Weapon_matanimjoints_0xFC0C,
	(AObjEvent32 *)dITCommonObject_KamexHydro_Weapon_matanimjoints_0xFB7C,
};

/* @ 0x0FCA4, 20 bytes (raw gap) */
PAD(20);

/* @ 0x0FCB8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xFCB8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xFCB8.palette.inc.c>
};

/* @ 0x0FCD8, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0FCE0, 512 bytes — Kamex weapon texture */
u8 dITCommonObject_Tex_0xFCE0[512] = {
	#include <ITCommonObject/dITCommonObject_Tex_0xFCE0.tex.inc.c>
};

/* @ 0x0FEE0, 48 bytes (3 vertices) */
Vtx dITCommonObject_Vtx_0xFEE0[3] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xFEE0.vtx.inc.c>
};

/* @ 0x0FF10, 240 bytes (30 Gfx commands) — Kamex weapon DL */
Gfx dITCommonObject_Gfx_0xFF10[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xFF10.dl.inc.c>
};

/* @ 0x10000, 1184 bytes */
DObjDesc dITCommonObject_MLucky_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dITCommonObject_KamexHydro_Weapon_matanimjoints + 0x3A0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x100B0, 168 bytes (raw gap) */
/* gap sub-block @ 0x100B0 (was gap+0x0, 12 bytes) */
AObjEvent32 *dITCommonObject_MLucky_Item_data_remainder_gap_0x100B0[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dITCommonObject_MLucky_Item_data_remainder_gap_0x100B0_sub_0xC,
};

/* gap sub-block @ 0x100BC (was gap+0xC, 156 bytes) */
u32 dITCommonObject_MLucky_Item_data_remainder_gap_0x100B0_sub_0xC[36] = {
	aobjEvent32SetValRate(0x1A0, 0),
	    0x00000000,  /* 0.0f */
	    0x3F745303,  /* 0.9543916583061218f */
	    0x3F800000,  /* 1.0f */
	    0xBB9461C7,  /* -0.0045282575301826f */
	    0x3F800000,  /* 1.0f */
	    0x3B9E7784,  /* 0.004836024716496468f */
	aobjEvent32SetValAfterBlock(0x250, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x1A0, 16),
	    0x411C0000,  /* 9.75f */
	    0x3F733333,  /* 0.949999988079071f */
	    0x3F866666,  /* 1.0499999523162842f */
	aobjEvent32SetValRateBlock(0x1A0, 16),
	    0x00000000,  /* 0.0f */
	    0xBF617C7F,  /* -0.8808059096336365f */
	    0x3F800000,  /* 1.0f */
	    0x3B95F5F2,  /* 0.00457643810659647f */
	    0x3F800000,  /* 1.0f */
	    0xBB88762C,  /* -0.004164477810263634f */
	aobjEvent32SetVal0RateBlock(0x1A0, 16),
	    0xC11C0000,  /* -9.75f */
	    0x3F866666,  /* 1.0499999523162842f */
	    0x3F733333,  /* 0.949999988079071f */
	aobjEvent32SetValRateBlock(0x1A0, 16),
	    0x00000000,  /* 0.0f */
	    0x3F5D419A,  /* 0.8642822504043579f */
	    0x3F800000,  /* 1.0f */
	    0xBB916343,  /* -0.004436881747096777f */
	    0x3F800000,  /* 1.0f */
	    0x3B8E06C2,  /* 0.004334301687777042f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dITCommonObject_MLucky_Item_data_remainder_gap_0x100B0_sub_0xC,
	aobjEvent32End(),
};
PAD(12);

/* @ 0x10158, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x10158[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x10158.palette.inc.c>
};

/* @ 0x10178, 520 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0x10180 (was gap+0x8, 512 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_LUT_0x10158 */
u8 dITCommonObject_Tex_0x10180[512] = {
	#include <ITCommonObject/Tex_0x10180.tex.inc.c>
};

/* @ 0x10380, 48 bytes (3 vertices) */
Vtx dITCommonObject_Vtx_0x10380[3] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x10380.vtx.inc.c>
};

/* @ 0x103B0, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x103B0[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x103B0.dl.inc.c>
};

/* @ 0x104A0, 176 bytes */
DObjDesc dITCommonObject_Egg_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0x103B0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x10550, 2960 bytes */
u32 dITCommonObject_Egg_Item_animjoints[736] = {
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dITCommonObject_Egg_Item_animjoints + 0xC),
	aobjEvent32SetValRate(0x1A0, 0),
	    0x00000000,  /* 0.0f */
	    0x3F5295BC,  /* 0.8225972652435303f */
	    0x3F800000,  /* 1.0f */
	    0xBC0FA4F7,  /* -0.008767358027398586f */
	    0x3F800000,  /* 1.0f */
	    0x3C139FAB,  /* 0.009010235778987408f */
	aobjEvent32SetValAfterBlock(0x250, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x1A0, 4),
	    0x42966FA8,  /* 75.21807861328125f */
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3FCCCCCD,  /* 1.600000023841858f */
	aobjEvent32SetValRateBlock(0x1A0, 4),
	    0x00000000,  /* 0.0f */
	    0xBF63F565,  /* -0.8904631733894348f */
	    0x3F800000,  /* 1.0f */
	    0x3C172EAE,  /* 0.009227437898516655f */
	    0x3F800000,  /* 1.0f */
	    0xBC10ED80,  /* -0.008845686912536621f */
	aobjEvent32SetVal0RateBlock(0x1A0, 4),
	    0xC23D77D5,  /* -47.36702346801758f */
	    0x3FCCCCCD,  /* 1.600000023841858f */
	    0x3F19999A,  /* 0.6000000238418579f */
	aobjEvent32SetValRateBlock(0x1A0, 4),
	    0x00000000,  /* 0.0f */
	    0x3F6B6BEC,  /* 0.9196155071258545f */
	    0x3F800000,  /* 1.0f */
	    0xBC12E1E7,  /* -0.008964992128312588f */
	    0x3F800000,  /* 1.0f */
	    0x3C13EFC2,  /* 0.009029330685734749f */
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xAC68E66B,
	    0xF713C561,
	    0xD4CDDB11,
	    0x93555AD7,
	    0x5A93CCF1,
	    0xC4AFF26D,
	    0xAC698BA1,
	    0x731DE08B,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xAC68E66B,
	    0xF713C561,
	    0xD4CDDB11,
	    0x93555AD7,
	    0x5A93CCF1,
	    0xC4AFF26D,
	    0xAC698BA1,
	    0x731DE08B,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xAC68E66B,
	    0xF713C561,
	    0xD4CDDB11,
	    0x93555AD7,
	    0x5A93CCF1,
	    0xC4AFF26D,
	    0xAC698BA1,
	    0x731DE08B,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xAC68E66B,
	    0xF713C561,
	    0xD4CDDB11,
	    0x93555AD7,
	    0x5A93CCF1,
	    0xC4AFF26D,
	    0xAC698BA1,
	    0x731DE08B,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xAC68E66B,
	    0xF713C561,
	    0xD4CDDB11,
	    0x93555AD7,
	    0x5A93CCF1,
	    0xC4AFF26D,
	    0xAC698BA1,
	    0x731DE08B,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x01B, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x019, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xED000000,
	aobjEvent32EndRaw(0x1D3, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xEDE00000,
	aobjEvent32SetVal(0x193, 16512),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xEDD00000,  /* -8.046610255354972e+27f */
	    0x0799C7CE,  /* 2.313831600721571e-34f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32SetValRate(0x3BC, 0),
	    0x8C99CA9E,  /* -2.369532830325407e-31f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0EDDE008,  /* 5.469644051325288e-30f */
	    0xE99999C8,  /* -2.3211482727716508e+25f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0ED66E88,  /* 5.286151075873794e-30f */
	    0x999999E0,  /* -1.5881978832633586e-23f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0EDD9D86,  /* 5.463239581943816e-30f */
	    0x99999C80,  /* -1.5883039061690204e-23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	    0x88D31642,
	    0x99999D80,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x86664421,
	    0x99999D00,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x85FF5421,
	    0x999A9E00,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6FFFF422,
	    0x9ADDDE00,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6BBFF522,
	    0xDEEDDE00,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 8),
	    0x5BBFF513,
	    0x333DDDE0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 136),
	    0x5BBFF522,
	aobjEvent32SetVal0RateBlock(0x39B, 24030),
	    0x00000000,  /* 0.0f */
	    0x00000888,  /* 3.0604358460854005e-42f */
	    0x6BBFF522,  /* 4.641248770479915e+26f */
	    0x6EEDDDEE,  /* 3.680812192850827e+28f */
	    0xE0000000,  /* -3.6893488147419103e+19f */
	    0x00008887,  /* 4.897678262661668e-41f */
	    0xCBBFF413,  /* -25159718.0f */
	    0xCCCDDDEE,
	    0xEE000000,
	aobjEvent32EndRaw(0x001, 28073),
	    0x94554223,
	    0x99999AAC,
	    0xDDD00000,
	aobjEvent32EndRaw(0x000, 237),
	    0xA2222243,
	    0x99999999,
	    0x9AD00000,
	aobjEvent32End(),
	    0xE2121124,
	    0xA999999C,
	    0xCC000000,
	aobjEvent32End(),
	    0x8D331932,
	    0x3999999A,
	    0xCCD00000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x11C, 6553),
	    0x99AECCCA,
	    0xACC00000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x011, 22937),
	    0x99D88CCC,
	    0xCCCE0000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3225),
	    0x99E00000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3225),
	    0x9C000000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3225),
	    0x9E000000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3241),
	    0xD0000000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3226),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3228),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x01B, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x019, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xED000000,
	aobjEvent32EndRaw(0x1D3, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8DED0000,
	aobjEvent32SetVal(0x1B3, 8192),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xEDDCD000,  /* -8.54226984139697e+27f */
	    0x0899C000,  /* 9.253491529673047e-34f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x3BB, 22528),
	    0x8C99C000,  /* -2.3688938315963e-31f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0EDEDD08,  /* 5.4940070651217865e-30f */
	    0x7999D808,  /* 9.985038170693969e+34f */
	    0x88000000,  /* -3.851859888774472e-34f */
	    0x00000000,  /* 0.0f */
	    0x0ED66D88,  /* 5.286054779376575e-30f */
	    0x9999E888,  /* -1.5913747839008647e-23f */
	    0xCD000000,  /* -134217728.0f */
	    0x00000000,  /* 0.0f */
	    0x08DD9D86,  /* 1.333798726060502e-33f */
	    0x999978DA,  /* -1.586864077244811e-23f */
	    0x9D000000,  /* -1.6940658945086007e-21f */
	    0x00000000,  /* 0.0f */
	    0x08E31642,  /* 1.3667298329568037e-33f */
	    0x999ADA99,
	    0xC0000000,
	aobjEvent32End(),
	    0x86664421,
	    0x9999999A,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x85FF5421,
	    0x999A999D,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6FFFF422,
	    0x9ADEC9A0,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6BBFF522,
	    0xDEEEEDD0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 8),
	    0x5BBFF513,
	    0x333DEEE0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 136),
	    0x5BBFF522,
	aobjEvent32SetVal0RateBlock(0x39D, 28398),
	    0x00000000,  /* 0.0f */
	    0x00000888,  /* 3.0604358460854005e-42f */
	    0x6BBFF522,  /* 4.641248770479915e+26f */
	    0x6EEEEEEE,  /* 3.6973140302885666e+28f */
	    0xE0000000,  /* -3.6893488147419103e+19f */
	    0x00008887,  /* 4.897678262661668e-41f */
	    0xCBBFF413,  /* -25159718.0f */
	    0xCCCDDEEE,
	    0xEE000000,
	aobjEvent32EndRaw(0x001, 28073),
	    0x94554223,
	    0x99999ACC,
	    0xDED00000,
	aobjEvent32EndRaw(0x000, 237),
	    0xD2222243,
	    0x99999999,
	    0xCCE00000,
	aobjEvent32EndRaw(0x000, 8),
	    0x82121124,
	    0xA99AAAAC,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8DE31932,
	    0x399ACAAA,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x11C, 6553),
	    0x999AAAAA,
	    0xE0000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x011, 27033),
	    0x9DCCAAAA,
	    0xD0000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x01D, 23193),
	    0x900CCCA9,
	    0xC0000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x019, 19609),
	    0xC000CCC9,
	    0xC0000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x019, 7321),
	    0xD00000CC,
	    0x90000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x195, 23706),
	aobjEvent32EndRaw(0x000, 12),
	    0xD0000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x1B8, 3228),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3277),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x01B, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 224),
	aobjEvent32EndRaw(0x019, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xED000EA0,
	aobjEvent32EndRaw(0x1D3, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xEDE08EAE,
	aobjEvent32SetVal(0x1B3, 8192),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xEDD08EAD,  /* -8.068170809828324e+27f */
	    0x88A9A000,  /* -1.0208933338021403e-33f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x3BC, 32172),
	    0x8D99C000,  /* -9.4755753263852e-31f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0DDDEDAE,  /* 1.3677395870122638e-30f */
	    0x8999C000,  /* -3.701396611869219e-33f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0EDE6DD8,  /* 5.483300098337209e-30f */
	    0xA999D000,  /* -6.830647159006276e-14f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0EDD9D86,  /* 5.463239581943816e-30f */
	    0x9999E000,  /* -1.5910302094574642e-23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32SetVal(0x0E6, 5698),
	    0x99997000,  /* -1.5865065654825648e-23f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x86664421,  /* -4.330824532552554e-35f */
	    0x999C8888,  /* -1.618516647750261e-23f */
	    0x88E00000,
	aobjEvent32End(),
	    0x85FF5421,
	    0x999C87ED,
	    0xCA960000,
	aobjEvent32End(),
	    0x6FFFF422,
	    0x9ADEEA99,
	    0x99D70000,
	aobjEvent32End(),
	    0x6BBFF522,
	    0xDEEEEDA9,
	    0xAE800000,
	aobjEvent32EndRaw(0x000, 8),
	    0x5BBFF513,
	    0x333EEEDC,
	    0xE8000000,
	aobjEvent32EndRaw(0x000, 136),
	    0x5BBFF522,
	aobjEvent32SetVal0RateBlock(0x39D, 28398),
	    0x70000000,  /* 1.5845632502852868e+29f */
	    0x00000888,  /* 3.0604358460854005e-42f */
	    0x6BBFF522,  /* 4.641248770479915e+26f */
	    0x6EEEEEE7,  /* 3.6973123774602975e+28f */
	    0x80000000,  /* -0.0f */
	    0x0000888E,  /* 4.898659171586696e-41f */
	    0xABBFF413,  /* -1.3639110457361325e-12f */
	    0xCCCDDEE7,
	    0x88000000,
	aobjEvent32EndRaw(0x001, 27817),
	    0x94554223,
	    0x99999ACD,
	    0xEEE00000,
	aobjEvent32EndRaw(0x000, 237),
	    0xC2222243,
	    0x99999999,
	    0xCCE80000,
	aobjEvent32EndRaw(0x000, 8),
	    0x82121124,
	    0xA99A9AE8,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetValRate(0x31A, 6450),
	    0x39AAA9E8,  /* 0.0003255151677876711f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x08891999,  /* 8.251405554471087e-34f */
	    0x9AAA99D8,  /* -7.055890005013715e-23f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0CC9C999,  /* 3.1090285681649927e-31f */
	    0x9CC999D8,  /* -1.3340831927153452e-21f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	    0xCA9ADA99,
	    0xADCA99D8,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xCCC00A99,
	    0xC8DC99D8,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xC0000C99,
	    0xE80CA9D8,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3228),
	    0x8000C9D0,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3229),
	    0x8000C9D0,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3246),
	aobjEvent32EndRaw(0x000, 3296),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x01B, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xEC7CA000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xED000000,
	    0xDAE9A000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8DE00007,
	    0xCCD9A000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8DD00007,
	    0xAEA9A000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8DDE000D,
	    0xDD99C000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8EDDE088,
	    0x8999C000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8EDE6D88,
	    0xC999D000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x88ED9D86,
	    0x9999D000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x88831642,
	    0x9999E000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x86664421,
	    0x999A7000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x85FF5421,
	    0x999C7000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6FFFF422,
	    0x9ACEE800,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6BBFF522,
	    0xDEEEEE88,
	    0x88800000,
	aobjEvent32EndRaw(0x000, 8),
	    0x5BBFF513,
	    0x333EEEED,
	    0xDDE60000,
	aobjEvent32EndRaw(0x000, 136),
	    0x5BBFF522,
	aobjEvent32SetVal0RateBlock(0x39D, 28398),
	    0xA9960000,  /* -6.661338147750939e-14f */
	    0x00000888,  /* 3.0604358460854005e-42f */
	    0x6BBFF522,  /* 4.641248770479915e+26f */
	    0x6EEEEEE8,  /* 3.6973126135786217e+28f */
	    0xDAD70000,  /* -3.025855999639552e+16f */
	    0x0000888D,  /* 4.898519041740263e-41f */
	    0xABBFF413,  /* -1.3639110457361325e-12f */
	    0xCCDDEE78,
	    0x88880000,
	aobjEvent32EndRaw(0x001, 27801),
	    0x94554223,
	    0x9999AACD,
	    0xEEEE0000,
	aobjEvent32EndRaw(0x000, 237),
	    0xD2222243,
	    0x99999999,
	    0xCC000000,
	aobjEvent32EndRaw(0x000, 8),
	    0x82121124,
	    0xA999ADE0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 14),
	    0xC1911932,
	    0x3999A000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 13),
	    0xCCC91999,
	    0x9999C000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 12),
	    0xC000C999,
	    0x9999C000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 18841),
	    0xAA99C000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 19097),
	    0xCC99D000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 19610),
	    0xEC99D000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 23708),
	    0x8C99E000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3229),
	aobjEvent32SetValRate(0x134, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000DA0,  /* 4.887729043564962e-42f */
	    0x009C0000,  /* 1.432633740064663e-38f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x01B, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x019, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xED000000,
	aobjEvent32EndRaw(0x1D3, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xEDE00000,
	aobjEvent32SetVal(0x1B3, 8192),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xEDDE0000,  /* -8.588209022542326e+27f */
	    0x08A9A000,  /* 1.0208933338021403e-33f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x3BA, 0),
	    0x8D99C000,  /* -9.4755753263852e-31f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0EDDE008,  /* 5.469644051325288e-30f */
	    0x8A99C000,  /* -1.4805586447476876e-32f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0EDE6D08,  /* 5.483221857433218e-30f */
	    0xC999D000,  /* -1260032.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x08ED9C86,  /* 1.4300717133928473e-33f */
	    0xA999D000,  /* -6.830647159006276e-14f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32SetVal(0x106, 5698),
	    0x9999D000,  /* -1.590383974603907e-23f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x86664421,
	    0xA999D000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x85FF5421,
	    0x999AD000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6FFFF422,
	    0x9ADEEE00,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6BBFF522,
	    0x6EEEEEE0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 8),
	    0x5BBFF513,
	    0x333EEEEE,
	    0xE0000000,
	aobjEvent32EndRaw(0x000, 136),
	    0x5BBFF522,
	aobjEvent32SetVal0RateBlock(0x39D, 28398),
	    0xEE000000,  /* -9.903520314283042e+27f */
	    0x00000887,  /* 3.0590345476210757e-42f */
	    0x6BBFF522,  /* 4.641248770479915e+26f */
	    0xEEEEEEE7,  /* -3.6973123774602975e+28f */
	    0x7EE00000,  /* 1.4887353552791058e+38f */
	    0x0000887D,  /* 4.896276964197343e-41f */
	    0xCBBFF413,  /* -25159718.0f */
	    0xCCDDEE78,
	    0x87E80000,
	aobjEvent32EndRaw(0x001, 23705),
	    0x94554223,
	    0x9999ACDE,
	    0x7DAD0000,
	aobjEvent32EndRaw(0x000, 220),
	    0x32222243,
	    0x99999999,
	    0xACC60000,
	aobjEvent32End(),
	    0x62121124,
	    0xA9999CDE,
	    0xE0000000,
	aobjEvent32End(),
	aobjEvent32SetValRate(0x386, 6450),
	    0x399AE000,  /* 0.00029540061950683594f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x008D1999,  /* 1.2957987667113481e-38f */
	    0x999C0000,  /* -1.613002194478404e-23f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0000C999,  /* 7.231961244533948e-41f */
	    0x999D0000,  /* -1.6233419521353168e-23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 18841),
	    0x99AE0000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 18841),
	    0x99C00000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 23193),
	    0x99D00000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3226),
	    0x9AE00000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3244),
	    0x9C000000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3277),
	    0x9E000000,
	aobjEvent32End(),
};
PAD(16);

/* @ 0x110E0, 160 bytes (raw gap) */
/* u32 pointer array @ 0x110E0 (2 entries) */
u32 dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0[2] = {
	0x00000000,
	0x443A445E,
};

/* u32 pointer array @ 0x110E8 (6 entries) */
u32 dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0_sub_0x8[6] = {
	(u32)((u8*)&dITCommonObject_Egg_Item_animjoints + 0x990),
	(u32)((u8*)&dITCommonObject_Egg_Item_animjoints + 0x788),
	(u32)((u8*)&dITCommonObject_Egg_Item_animjoints + 0x580),
	(u32)((u8*)&dITCommonObject_Egg_Item_animjoints + 0x378),
	(u32)((u8*)&dITCommonObject_Egg_Item_animjoints + 0x170),
	0x00000000,
};

/* MObjSub @ 0x11100 */
MObjSub dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0_sub_0x20[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0_sub_0x8,
		0x0035, 0x0007, 0x0020, 0x0020,
		0,
		0.20000000298023224f, 0.30160000920295715f,
		0.6000000238418579f, 0.699999988079071f,
		0.20000000298023224f, 0.6000000238418579f,
		NULL,
		0x0001,
		0x02, 0x00,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.20000000298023224f, 0.30160000920295715f,
		0.20000000298023224f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x59, 0x59, 0x59, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* u32 pointer array @ 0x11178 (2 entries) */
u32 dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0_sub_0x98[2] = {
	(u32)&dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0_sub_0x20,
	0x00000000,
};

/* @ 0x11180, 48 bytes (3 vertices) */
Vtx dITCommonObject_Vtx_0x11180[3] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x11180.vtx.inc.c>
};

/* @ 0x111B0, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x111B0[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x111B0.dl.inc.c>
};

/* @ 0x112A0, 1848 bytes */
DObjDesc dITCommonObject_Starmie_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x111B0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x11324, 1716 bytes (vertex / DL / texture pool) */
/* gap sub-block @ 0x11324 (was gap+0x0, 20 bytes) */
AObjEvent32 **dITCommonObject_Starmie_Item_data_remainder[5] = {
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 **)dITCommonObject_Starmie_Item_data_remainder_sub_0x124,
};

/* gap sub-block @ 0x11338 (was gap+0x14, 272 bytes) */
u32 dITCommonObject_Starmie_Item_data_remainder_sub_0x14[68] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dITCommonObject_Starmie_Item_data_remainder_sub_0x14,
};

/* gap sub-block @ 0x11448 (was gap+0x124, 16 bytes) */
AObjEvent32 *dITCommonObject_Starmie_Item_data_remainder_sub_0x124[4] = {
	(AObjEvent32 *)dITCommonObject_Starmie_Item_data_remainder_sub_0x14,
	NULL,
	NULL,
	NULL,
};

/* gap sub-block @ 0x11458 (was gap+0x134, 1152 bytes) */
/* @tex fmt=IA8 dim=64x18 */
u8 dITCommonObject_Tex_0x11458[1152] = {
	#include <ITCommonObject/Tex_0x11458.tex.inc.c>
};

/* gap sub-block @ 0x118D8 (was gap+0x5B4, 64 bytes) */
Vtx dITCommonObject_Starmie_Item_data_remainder_sub_0x5B4[4] = {
	#include <ITCommonObject/dITCommonObject_Starmie_Item_data_remainder_sub_0x5B4.vtx.inc.c>
};

/* Gfx DL: Starmie_Item_data_remainder_sub_0x5F4 @ 0x11918 (22 cmds) */
Gfx dITCommonObject_Starmie_Item_data_remainder_sub_0x5F4[22] = {
	#include <ITCommonObject/dITCommonObject_Starmie_Item_data_remainder_sub_0x5F4.dl.inc.c>
};

/* gap sub-block @ 0x119C8 (was gap+0x6A4, 16 bytes) */
u8 dITCommonObject_Starmie_Item_data_remainder_sub_0x6A4[16] = {
	#include <ITCommonObject/dITCommonObject_Starmie_Item_data_remainder_sub_0x6A4.data.inc.c>
};

/* @ 0x119D8, 1384 bytes */
DObjDesc dITCommonObject_StarmieSwift_Weapon_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dITCommonObject_Starmie_Item_data_remainder + 0x6A4), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x11A5C, 12 bytes (raw gap) */
PAD(12);

/* @ 0x11A68, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x11A68[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x11A68.palette.inc.c>
};

/* @ 0x11A88, 904 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0x11A90 (was gap+0x8, 896 bytes) */
/* @tex fmt=CI4 dim=32x56 lut=dITCommonObject_LUT_0x11A68 */
u8 dITCommonObject_Tex_0x11A90[896] = {
	#include <ITCommonObject/Tex_0x11A90.tex.inc.c>
};

/* @ 0x11E10, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x11E10[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x11E10.vtx.inc.c>
};

/* @ 0x11E50, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x11E50[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x11E50.dl.inc.c>
};

/* @ 0x11F40, 2272 bytes */
DObjDesc dITCommonObject_Sawamura_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x11E50, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x11FC4, 1284 bytes (raw gap) */
/* gap sub-block @ 0x11FC4 (was gap+0x0, 20 bytes) */
PAD(20);

/* gap sub-block @ 0x11FD8 (was gap+0x14, 40 bytes) */
u16 dITCommonObject_Sawamura_Item_data_remainder_gap_0x11FC4_sub_0x14[16] = {
	#include <ITCommonObject/gap_0x11FC4_sub_0x14.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x12000 (was gap+0x3C, 768 bytes) */
/* @tex fmt=CI4 dim=32x48 lut=dITCommonObject_Sawamura_Item_data_remainder_gap_0x11FC4_sub_0x14 */
u8 dITCommonObject_Tex_0x12000[768] = {
	#include <ITCommonObject/Tex_0x12000.tex.inc.c>
};

/* gap sub-block @ 0x12300 (was gap+0x33C, 64 bytes) */
Vtx dITCommonObject_Sawamura_Item_data_remainder_gap_0x11FC4_sub_0x33C[4] = {
	#include <ITCommonObject/gap_0x11FC4_sub_0x33C.vtx.inc.c>
};

/* Gfx DL: Sawamura_Item_data_remainder_gap_0x11FC4_sub_0x37C @ 0x12340 (30 cmds) */
Gfx dITCommonObject_Sawamura_Item_data_remainder_gap_0x11FC4_sub_0x37C[30] = {
	#include <ITCommonObject/gap_0x11FC4_sub_0x37C.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0x12430 (152 bytes) */
u8 dITCommonObject_Sawamura_Item_data_remainder_gap_0x11FC4_sub_0x37C_post[152] = {
	#include <ITCommonObject/gap_0x11FC4_sub_0x37C_post.data.inc.c>
};

/* @ 0x124C8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x124C8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x124C8.palette.inc.c>
};

/* @ 0x124E8, 520 bytes (raw gap) */
PAD(8);

/* gap sub-block @ 0x124F0 (was gap+0x8, 512 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_LUT_0x124C8 */
u8 dITCommonObject_Tex_0x124F0[512] = {
	#include <ITCommonObject/Tex_0x124F0.tex.inc.c>
};

/* @ 0x126F0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x126F0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x126F0.vtx.inc.c>
};

/* @ 0x12730, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x12730[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x12730.dl.inc.c>
};

/* @ 0x12820, 1880 bytes */
DObjDesc dITCommonObject_Dogas_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0x12730, { 0.0f, -5.439370155334473f, 0.0f }, { 0.0f, 0.0f, 0.0866909995675087f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x128D0, 1704 bytes (vertex / DL / texture pool) */
/* gap sub-block @ 0x128D0 (was gap+0x0, 12 bytes) */
AObjEvent32 *dITCommonObject_Dogas_Item_data_remainder[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dITCommonObject_Dogas_Item_data_remainder_sub_0xC,
};

/* gap sub-block @ 0x128DC (was gap+0xC, 140 bytes) */
u32 dITCommonObject_Dogas_Item_data_remainder_sub_0xC[31] = {
	aobjEvent32SetVal0Rate(0x004, 0),
	    0x3DB2B8C2,  /* 0.0872664600610733f */
	aobjEvent32SetValRate(0x020, 0),
	    0x00000000,  /* 0.0f */
	    0x40B3661E,  /* 5.606215476989746f */
	aobjEvent32SetValAfterBlock(0x050, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x004, 16),
	    0x00000000,  /* 0.0f */
	    0xBBFD4A3F,  /* -0.007729798089712858f */
	aobjEvent32SetVal0RateBlock(0x020, 16),
	    0x42700000,  /* 60.0f */
	aobjEvent32SetValRate(0x020, 16),
	    0x00000000,  /* 0.0f */
	    0xC09E6030,  /* -4.949241638183594f */
	aobjEvent32SetVal0RateBlock(0x004, 16),
	    0xBDB2B8C2,  /* -0.0872664600610733f */
	aobjEvent32SetValRate(0x004, 16),
	    0x00000000,  /* 0.0f */
	    0x3BE270EF,  /* 0.006910435389727354f */
	aobjEvent32SetVal0RateBlock(0x020, 16),
	    0xC2700000,  /* -60.0f */
	aobjEvent32SetValRate(0x020, 16),
	    0x00000000,  /* 0.0f */
	    0x40AD81C2,  /* 5.422089576721191f */
	aobjEvent32SetVal0RateBlock(0x004, 16),
	    0x3DB2B8C2,  /* 0.0872664600610733f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dITCommonObject_Dogas_Item_data_remainder_sub_0xC,
	aobjEvent32End(),
};
PAD(16);

/* @tex fmt=I4 dim=32x32 */
u8 dITCommonObject_Tex_0x12968[520] = {
	#include <ITCommonObject/Tex_0x12968.tex.inc.c>
};

/* @tex fmt=I4 dim=32x32 */
u8 dITCommonObject_Tex_0x12B70[520] = {
	#include <ITCommonObject/Tex_0x12B70.tex.inc.c>
};

/* @tex fmt=I4 dim=32x32 */
u8 dITCommonObject_Tex_0x12D78[512] = {
	#include <ITCommonObject/Tex_0x12D78.tex.inc.c>
};

/* @ 0x12F78, 392 bytes */
/* u32 pointer array @ 0x12F78 (2 entries) */
u32 dITCommonObject_DogasSmog_Weapon_mobjsubs[2] = {
	0x00000000,
	0x4BE04C02,
};

/* u32 pointer array @ 0x12F80 (4 entries) */
u32 dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0x8[4] = {
	(u32)&dITCommonObject_Tex_0x12D78,
	(u32)&dITCommonObject_Tex_0x12B70,
	(u32)&dITCommonObject_Tex_0x12968,
	0x00000000,
};

/* MObjSub @ 0x12F90 */
MObjSub dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0x18[1] = {
	{
		0x0000,
		0x04, 0x02,
		(void**)dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0x8,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x3201,
		0x04, 0x00,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0x99, 0x66, 0x00, 0x00 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xB3, 0x80, 0x00, 0x00 } },
		{ { 0x59, 0x59, 0x59, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* u32 pointer array @ 0x13008 (2 entries) */
u32 dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0x90[2] = {
	(u32)&dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0x18,
	0x00000000,
};

/* gap sub-block @ 0x13010 (was gap+0x98, 64 bytes) */
Vtx dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0x98[4] = {
	#include <ITCommonObject/dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0x98.vtx.inc.c>
};

/* Gfx DL: DogasSmog_Weapon_mobjsubs_sub_0xD8 @ 0x13050 (20 cmds) */
Gfx dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0xD8[20] = {
	#include <ITCommonObject/dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0xD8.dl.inc.c>
};

/* u32 pointer array @ 0x130F0 (4 entries) */
u32 dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0x178[4] = {
	0x00000001,
	(u32)&dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0xD8,
	0x00000004,
	0x00000000,
};

/* @ 0x13100, 144 bytes */
DObjDesc dITCommonObject_DogasSmog_Weapon_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dITCommonObject_DogasSmog_Weapon_mobjsubs + 0x178), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 5.5f, 5.5f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x13184, 12 bytes (vertex / DL / texture pool) */
PAD(12);

/* @ 0x13190, 80 bytes */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dITCommonObject_DogasSmog_Weapon_animjoints[2] = {
	NULL,
	(AObjEvent32 *)dITCommonObject_DogasSmog_Weapon_animjoints_0x13198,
};

u32 dITCommonObject_DogasSmog_Weapon_animjoints_0x13198[] = {
	aobjEvent32SetVal0Rate(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(0x180, 1),
	    0x3F800000,  /* 1.0f */
	    0x3F38B996,  /* 0.7215818166732788f */
	    0x3F800000,  /* 1.0f */
	    0x3F38A6F3,  /* 0.7212974429130554f */
	aobjEvent32SetVal0RateBlock(0x180, 15),
	    0x40B00000,  /* 5.5f */
	    0x40B00000,  /* 5.5f */
	aobjEvent32SetValBlock(0x180, 48),
	    0x40B00000,  /* 5.5f */
	    0x40B00000,  /* 5.5f */
	aobjEvent32End(),
};

PAD(4);

/* @ 0x131E0, 952 bytes */
u32 dITCommonObject_DogasSmog_Weapon_matanimjoints[238] = {
	aobjEvent32End(),
	(u32)((u8*)dITCommonObject_DogasSmog_Weapon_matanimjoints + 0x64),
	aobjEvent32SetExtValAfter(0x018, 0),
	    0xB3800000,  /* -5.960464477539063e-08f */
	    0x59595900,  /* 3823620405067776.0f */
	aobjEvent32SetExtVal(0x001, 0),
	    0x996600FF,  /* -1.1890922464980604e-23f */
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtVal(0x001, 10),
	    0x996600FF,  /* -1.1890922464980604e-23f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetExtVal(0x001, 38),
	    0x99660000,  /* -1.1890721305449773e-23f */
	aobjEvent32Wait(2),
	aobjEvent32SetValAfter(0x001, 52),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(36),
	aobjEvent32SetExtValBlock(0x001, 16),
	    0x99660000,  /* -1.1890721305449773e-23f */
	aobjEvent32End(),
	(u32)((u8*)dITCommonObject_DogasSmog_Weapon_matanimjoints + 0x8),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	    0x4A4AF7BB,
	    0xF6F7EEF5,
	    0xE62FD56B,
	    0xC4E5B421,
	    0x9C21835B,
	    0x6B17FB19,
	    0x5AD56B0D,
	    0x4A4B2183,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 19456),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 2440),
	    0x90000000,
	aobjEvent32EndRaw(0x001, 1690),
	    0xC0000000,
	aobjEvent32EndRaw(0x013, 1075),
	    0x49000000,
	aobjEvent32EndRaw(0x001, 1417),
	    0xAAACCCAA,
	    0x99753311,
	aobjEvent32Cmd12(0x000, 0),
	aobjEvent32EndRaw(0x001, 10377),
	    0xAAAA9998,
	    0x87531111,
	aobjEvent32Cmd12(0x000, 0),
	aobjEvent32EndRaw(0x000, 2185),
	    0xAA998877,
	    0x66421111,
	aobjEvent32SetValAfter(0x200, 0),
	    0x0000088A,  /* 3.06323844301405e-42f */
	    0xC9986666,
	    0x66411111,
	aobjEvent32SetValAfter(0x000, 0),
	aobjEvent32EndRaw(0x000, 2460),
	    0xA9865556,
	    0x84431111,
	aobjEvent32SetVal0Rate(0x092, 0),
	    0x000968CA,  /* 8.641106980258984e-40f */
	    0x98654447,  /* -2.9632027542318917e-24f */
	    0x71144111,  /* 7.341190705930277e+29f */
	aobjEvent32SetVal0RateBlock(0x227, 4096),
	    0x000515C9,  /* 4.669925223254956e-40f */
	    0x86543225,  /* -3.990960876314762e-35f */
	    0x21114631,  /* 4.922080849341795e-19f */
	    0x11113000,  /* 1.1453274267677565e-28f */
	    0x00921398,  /* 1.341501135216377e-38f */
	    0x65422214,
	    0x41111451,
	aobjEvent32SetVal0Rate(0x084, 6144),
	    0x00811166,  /* 1.185302038774097e-38f */
	    0x54222111,  /* 2785357856768.0f */
	    0x52111142,
	aobjEvent32SetVal0Rate(0x0C4, 5632),
	    0x00611155,  /* 8.914260688611357e-39f */
	    0x42211111,  /* 40.266666412353516f */
	    0x35211133,  /* 6.000220196256123e-07f */
	aobjEvent32SetVal0Rate(0x0E8, 5120),
	    0x00411144,  /* 5.975500989481744e-39f */
	    0x22111111,  /* 1.966019925654038e-18f */
	    0x15411122,  /* 3.8989555011137483e-26f */
	    0x11541400,  /* 1.673001416650749e-28f */
	aobjEvent32EndRaw(0x0A2, 4675),
	aobjEvent32Cmd16(0x288, 4369),
	aobjEvent32SetVal0Rate(0x042, 4385),
	    0x11321600,  /* 1.4048503386338253e-28f */
	    0x00811242,  /* 1.185332867340312e-38f */
	aobjEvent32SetVal0Rate(0x116, 8465),
	    0x11111111,  /* 1.1443742118159064e-28f */
	    0x11111000,  /* 1.1443413506362303e-28f */
	    0x00A41222,  /* 1.5067526197381954e-38f */
	    0x14FE4121,  /* 2.567313457451575e-26f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x11114000,  /* 1.1458204648335196e-28f */
	    0x0008422B,  /* 7.584205639511278e-40f */
	    0xB12111BB,  /* -2.343866212228818e-09f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x11150000,  /* 1.1754027487793076e-28f */
	    0x00096312,  /* 8.620591970741269e-40f */
	    0x32112321,  /* 8.448098220981137e-09f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x12700000,  /* 7.573064690121713e-28f */
	    0x00008411,  /* 4.737649978035774e-41f */
	    0x4F312F11,  /* 2972651776.0f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x14900000,  /* 1.454028420503369e-26f */
	    0x00008421,  /* 4.739892055578694e-41f */
	    0x2F212F11,  /* 1.465958604507378e-10f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x12380000,  /* 5.806016262426647e-28f */
	    0x00009521,  /* 5.349737147252854e-41f */
	    0x1F111F11,  /* 3.0730641866920083e-20f */
	aobjEvent32SetVal0RateBlock(0x222, 4387),
	    0x11160000,  /* 1.1832913578315177e-28f */
	    0x00008621,  /* 4.811638536952124e-41f */
	    0x11342111,  /* 1.4209685667090236e-28f */
	aobjEvent32SetVal0RateBlock(0x222, 4431),
	    0xE8500000,  /* -3.929008913747545e+24f */
	    0x00005442,  /* 3.0226007875486304e-41f */
	    0x58997411,  /* 1349790243749888.0f */
	aobjEvent32SetVal0RateBlock(0x222, 4376),
	    0xFFA00000,  /* nanf */
	    0x00082225,  /* 7.46932719140593e-40f */
	    0x99864431,  /* -1.38828175499081e-23f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x6FF00000,  /* 1.4855280471424563e+29f */
	    0x00E81115,  /* 2.1311962986838454e-38f */
	    0x86542122,  /* -3.989711052609237e-35f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x4DFF0000,  /* 534773760.0f */
	    0x00ED6115,  /* 2.1799839060177782e-38f */
	    0x64211112,  /* 1.1884623366061854e+22f */
	aobjEvent32SetVal0RateBlock(0x222, 4371),
	    0x9DEFE000,  /* -6.3494383819570404e-21f */
	    0x0EEDD415,  /* 5.862923836025661e-30f */
	    0x52111111,  /* 155764146176.0f */
	aobjEvent32SetVal0RateBlock(0x222, 4372),
	    0xDDDEF000,  /* -2.00804248385382e+18f */
	    0x0EEED922,  /* 5.888062111856414e-30f */
	    0x31111111,  /* 2.110997820992111e-09f */
	aobjEvent32SetVal0RateBlock(0x222, 4372),
	    0xDDDDDE00,  /* -1.99840196590148e+18f */
	    0x00000099,  /* 2.14398665041697e-43f */
	    0x72112211,  /* 2.874656651660297e+30f */
	aobjEvent32SetVal0RateBlock(0x293, 6246),
	    0x9DDDDD00,  /* -5.872672156396789e-21f */
	    0x00000000,  /* 0.0f */
	    0x06111111,  /* 2.728400735416189e-35f */
	    0x14A00000,  /* 1.6155871338926322e-26f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32EndRaw(0x004, 4389),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x349, 32588),
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x001, 32763),
	    0xFFFFFF00,  /* nanf */
	    0xFE5CFF4C,
	aobjEvent32End(),
	    0xFE00FFFB,
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x000, 453),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x3FE, 1774),
	    0xFFFFFF00,
	    0xE7000000,
	aobjEvent32End(),
	    0xE3001001,
	aobjEvent32EndRaw(0x001, 0),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xF9000000,
	aobjEvent32End(),
	    0xE8000000,
	aobjEvent32End(),
	    0xF5000100,
	aobjEvent32WaitRaw(0x200, 0),
	    0xF5500000,
	aobjEvent32SetValBlock(0x202, 16464),
	    0xF5400400,  /* -2.434087222844486e+32f */
	    0x00094250,  /* 8.50307908152299e-40f */
	    0xFD100000,
	(u32)((u8*)dITCommonObject_DogasSmog_Weapon_matanimjoints + 0x78),
	    0xE6000000,
	aobjEvent32End(),
	    0xF0000000,
	aobjEvent32WaitRaw(0x207, 16384),
	    0xE7000000,
	aobjEvent32End(),
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x00F, 16508),
	    0xFD500000,
	(u32)((u8*)dITCommonObject_DogasSmog_Weapon_matanimjoints + 0xA0),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x070FF400,
	    0xE7000000,
	aobjEvent32End(),
	    0xD9DDFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dITCommonObject_DogasSmog_Weapon_matanimjoints + 0x2A0),
	aobjEvent32WaitRaw(0x208, 512),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x044, 1024),
	    0xE3001001,
	aobjEvent32End(),
	    0xE2001E01,
	aobjEvent32End(),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 8312),
	    0xDF000000,
	aobjEvent32End(),
};

/* @ 0x13598, 328 bytes */
DObjDesc dITCommonObject_Pippi_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dITCommonObject_DogasSmog_Weapon_matanimjoints + 0x2D0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x1361C, 196 bytes (vertex / DL / texture pool) */
/* gap sub-block @ 0x1361C (was gap+0x0, 8 bytes) */
AObjEvent32 *dITCommonObject_Pippi_Item_data_remainder[2] = {
	NULL,
	(AObjEvent32 *)dITCommonObject_Pippi_Item_data_remainder_sub_0x8,
};

/* gap sub-block @ 0x13624 (was gap+0x8, 188 bytes) */
u32 dITCommonObject_Pippi_Item_data_remainder_sub_0x8[47] = {
	aobjEvent32SetValRate(0x180, 0),
	    0x3ECB5FEB,  /* 0.39721617102622986f */
	    0x3C46F69E,  /* 0.012143759056925774f */
	    0x3ED1DF43,  /* 0.4099064767360687f */
	    0x3F4A6EA4,  /* 0.7907507419586182f */
	aobjEvent32SetValBlock(0x200, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal(0x200, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x080, 8),
	    0x3FA3BC8B,  /* 1.2791913747787476f */
	    0x3EC4A971,  /* 0.38410523533821106f */
	aobjEvent32SetVal0RateBlock(0x100, 4),
	    0x3FFEB354,  /* 1.9898476600646973f */
	aobjEvent32SetValRate(0x100, 4),
	    0x3F89BF2D,  /* 1.0761467218399048f */
	    0xBF078A89,  /* -0.5294576287269592f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x200, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x080, 2),
	    0x4004A121,  /* 2.0723345279693604f */
	    0xBABB38B9,  /* -0.001428387244231999f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x3E53D395,  /* 0.20686180889606476f */
	aobjEvent32SetVal(0x200, 11),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(0x180, 3),
	    0x3FB32AFB,  /* 1.3997491598129272f */
	    0xBF0034D0,  /* -0.5008058547973633f */
	    0x3F29E90C,  /* 0.6637122631072998f */
	    0x3EC6D60F,  /* 0.3883518874645233f */
	aobjEvent32SetValRate(0x080, 2),
	    0x3F3BC73D,  /* 0.7335088849067688f */
	    0xBD6E3D39,  /* -0.058163855224847794f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x3F9FACF4,  /* 1.2474656105041504f */
	aobjEvent32SetValRateBlock(0x180, 4),
	    0x3F867F81,  /* 1.050766110420227f */
	    0x3B850433,  /* 0.004059338476508856f */
	    0x3F6C824D,  /* 0.9238632321357727f */
	    0xBC5198EB,  /* -0.012792806141078472f */
	aobjEvent32SetVal0RateBlock(0x180, 2),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};