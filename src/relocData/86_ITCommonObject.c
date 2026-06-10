/* relocData file 86: ITCommonObject — common-item geometry pool.
 * Every item in ITCommonData has an ITAttributes struct whose `data`,
 * `p_mobjsubs`, `anim_joints`, and `p_matanim_joints` fields are patched
 * by fixRelocChain to point at offsets in this file. The block names
 * below mirror those extern reloc entries in 251_ITCommonData.reloc so
 * each chunk carries the same <Item>_<AttrType>_<Field> label as its
 * caller on the ITCommonData side. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Gfx dITCommonObject_Gfx_0x1C48[];
extern Gfx dITCommonObject_Gfx_0x4578[];
extern Gfx dITCommonObject_Gfx_0x4A18[];
extern Gfx dITCommonObject_Gfx_0xF8A8[];
extern Gfx dITCommonObject_Gfx_0x0440[];
extern Vtx dITCommonObject_BombHei_Item_data_remainder_gap_0x347C_sub_0x4[];
extern u8 dITCommonObject_Box_Item_data_remainder_gap_0x67FC_sub_0x34[];
extern Vtx dITCommonObject_Box_Item_data_remainder_gap_0x67FC_sub_0xB4[];
extern u16 dITCommonObject_Box_Item_data_remainder_gap_0x67FC_sub_0xC[];
extern u16 dITCommonObject_DogasSmog_Weapon_matanimjoints_trailing_LUT[];
extern u8 dITCommonObject_DogasSmog_Weapon_matanimjoints_trailing_Tex[];
extern Vtx dITCommonObject_DogasSmog_Weapon_matanimjoints_trailing_Vtx[];
extern Vtx dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0x98[];
extern u16 dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4_sub_0x14[];
extern Vtx dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4_sub_0x23C[];
extern Gfx dITCommonObject_LGunAmmo_Weapon_data[];
extern Vtx dITCommonObject_LGun_Item_data_remainder_sub_0x94[];
extern u16 dITCommonObject_LUT_0x0008[];
extern u16 dITCommonObject_LUT_0x0030[];
extern u16 dITCommonObject_LUT_0x0058[];
extern u16 dITCommonObject_LUT_0x0758[];
extern u16 dITCommonObject_LUT_0x0B48[];
extern u16 dITCommonObject_LUT_0x10158[];
extern u16 dITCommonObject_LUT_0x10698[];
extern u16 dITCommonObject_LUT_0x11A68[];
extern u16 dITCommonObject_LUT_0x124C8[];
extern u16 dITCommonObject_LUT_0x19D8[];
extern u16 dITCommonObject_LUT_0x1A20[];
extern u16 dITCommonObject_LUT_0x1EB8[];
extern u16 dITCommonObject_LUT_0x22C8[];
extern u16 dITCommonObject_LUT_0x27E8[];
extern u16 dITCommonObject_LUT_0x3608[];
extern u16 dITCommonObject_LUT_0x3630[];
extern u16 dITCommonObject_LUT_0x3A88[];
extern u16 dITCommonObject_LUT_0x4798[];
extern u16 dITCommonObject_LUT_0x47C0[];
extern u16 dITCommonObject_LUT_0x6098[];
extern u16 dITCommonObject_LUT_0x60C0[];
extern u16 dITCommonObject_LUT_0x69E8[];
extern u16 dITCommonObject_LUT_0x6A10[];
extern u16 dITCommonObject_LUT_0x7D90[];
extern u16 dITCommonObject_LUT_0x7DB8[];
extern u16 dITCommonObject_LUT_0x98E8[];
extern u16 dITCommonObject_LUT_0xA818[];
extern u16 dITCommonObject_LUT_0xAC88[];
extern u16 dITCommonObject_LUT_0xB210[];
extern u16 dITCommonObject_LUT_0xB968[];
extern u16 dITCommonObject_LUT_0xBD58[];
extern u16 dITCommonObject_LUT_0xC1C8[];
extern u16 dITCommonObject_LUT_0xC5E0[];
extern u16 dITCommonObject_LUT_0xD738[];
extern u16 dITCommonObject_LUT_0xE688[];
extern u16 dITCommonObject_LUT_0xEF38[];
extern u16 dITCommonObject_LUT_0xEFB0[];
extern u16 dITCommonObject_LUT_0xFCB8[];
extern Vtx dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x3EC[];
extern u16 dITCommonObject_Sawamura_Item_data_remainder_gap_0x11FC4_sub_0x14[];
extern Vtx dITCommonObject_Sawamura_Item_data_remainder_gap_0x11FC4_sub_0x33C[];
extern Vtx dITCommonObject_StarRod_Item_data_remainder_sub_0x808[];
extern Vtx dITCommonObject_Starmie_Item_data_remainder_sub_0x5B4[];
extern u8 dITCommonObject_Tex_0x0080[];
extern u8 dITCommonObject_Tex_0x0108[];
extern u8 dITCommonObject_Tex_0x0190[];
extern u8 dITCommonObject_Tex_0x0780[];
extern u8 dITCommonObject_Tex_0x0B70[];
extern u8 dITCommonObject_Tex_0x0D78[];
extern u8 dITCommonObject_Tex_0x10180[];
extern u8 dITCommonObject_Tex_0x11458[];
extern u8 dITCommonObject_Tex_0x11A90[];
extern u8 dITCommonObject_Tex_0x12000[];
extern u8 dITCommonObject_Tex_0x1238[];
extern u8 dITCommonObject_Tex_0x124F0[];
extern u8 dITCommonObject_Tex_0x1668[];
extern u8 dITCommonObject_Tex_0x1A68[];
extern u8 dITCommonObject_Tex_0x1AB0[];
extern u8 dITCommonObject_Tex_0x1EE0[];
extern u8 dITCommonObject_Tex_0x22F0[];
extern u8 dITCommonObject_Tex_0x3658[];
extern u8 dITCommonObject_Tex_0x36E0[];
extern u8 dITCommonObject_Tex_0x3AF0[];
extern u8 dITCommonObject_Tex_0x3B38[];
extern u8 dITCommonObject_Tex_0x3B80[];
extern u8 dITCommonObject_Tex_0x3FE8[];
extern u8 dITCommonObject_Tex_0x47E8[];
extern u8 dITCommonObject_Tex_0x4870[];
extern u8 dITCommonObject_Tex_0x4C18[];
extern u8 dITCommonObject_Tex_0x60E8[];
extern u8 dITCommonObject_Tex_0x62F0[];
extern u8 dITCommonObject_Tex_0x6A38[];
extern u8 dITCommonObject_Tex_0x6C40[];
extern u8 dITCommonObject_Tex_0x7288[];
extern u8 dITCommonObject_Tex_0x7728[];
extern u8 dITCommonObject_Tex_0x8E20[];
extern u8 dITCommonObject_Tex_0x9910[];
extern u8 dITCommonObject_Tex_0xA200[];
extern u8 dITCommonObject_Tex_0xACB0[];
extern u8 dITCommonObject_Tex_0xB990[];
extern u8 dITCommonObject_Tex_0xBD80[];
extern u8 dITCommonObject_Tex_0xC1F0[];
extern u8 dITCommonObject_Tex_0xE6B0[];
extern u8 dITCommonObject_Tex_0xEB20[];
extern u8 dITCommonObject_Tex_0xFCE0[];
extern Vtx dITCommonObject_Vtx_0x0210[];
extern Vtx dITCommonObject_Vtx_0x02F0[];
extern Vtx dITCommonObject_Vtx_0x03A0[];
extern Vtx dITCommonObject_Vtx_0x0980[];
extern Vtx dITCommonObject_Vtx_0x0F78[];
extern Vtx dITCommonObject_Vtx_0x0FB8[];
extern Vtx dITCommonObject_Vtx_0x10380[];
extern Vtx dITCommonObject_Vtx_0x11180[];
extern Vtx dITCommonObject_Vtx_0x11E10[];
extern Vtx dITCommonObject_Vtx_0x126F0[];
extern Vtx dITCommonObject_Vtx_0x13D0[];
extern Vtx dITCommonObject_Vtx_0x1400[];
extern Vtx dITCommonObject_Vtx_0x16E8[];
extern Vtx dITCommonObject_Vtx_0x1798[];
extern Vtx dITCommonObject_Vtx_0x1AF0[];
extern Vtx dITCommonObject_Vtx_0x1B20[];
extern Vtx dITCommonObject_Vtx_0x1BB0[];
extern Vtx dITCommonObject_Vtx_0x1F20[];
extern Vtx dITCommonObject_Vtx_0x23B0[];
extern Vtx dITCommonObject_Vtx_0x2470[];
extern Vtx dITCommonObject_Vtx_0x32D0[];
extern Vtx dITCommonObject_Vtx_0x3720[];
extern Vtx dITCommonObject_Vtx_0x3760[];
extern Vtx dITCommonObject_Vtx_0x3BC0[];
extern Vtx dITCommonObject_Vtx_0x3C00[];
extern Vtx dITCommonObject_Vtx_0x3CC0[];
extern Vtx dITCommonObject_Vtx_0x4420[];
extern Vtx dITCommonObject_Vtx_0x44E0[];
extern Vtx dITCommonObject_Vtx_0x48F0[];
extern Vtx dITCommonObject_Vtx_0x4970[];
extern Vtx dITCommonObject_Vtx_0x5E80[];
extern Vtx dITCommonObject_Vtx_0x64F0[];
extern Vtx dITCommonObject_Vtx_0x65D0[];
extern Vtx dITCommonObject_Vtx_0x6E40[];
extern Vtx dITCommonObject_Vtx_0x6EE0[];
extern Vtx dITCommonObject_Vtx_0x7518[];
extern Vtx dITCommonObject_Vtx_0x91D0[];
extern Vtx dITCommonObject_Vtx_0x9210[];
extern Vtx dITCommonObject_Vtx_0xA010[];
extern Vtx dITCommonObject_Vtx_0xAA68[];
extern Vtx dITCommonObject_Vtx_0xB030[];
extern Vtx dITCommonObject_Vtx_0xB5D8[];
extern Vtx dITCommonObject_Vtx_0xBB90[];
extern Vtx dITCommonObject_Vtx_0xC000[];
extern Vtx dITCommonObject_Vtx_0xC3F0[];
extern Vtx dITCommonObject_Vtx_0xD4A0[];
extern Vtx dITCommonObject_Vtx_0xDE08[];
extern Vtx dITCommonObject_Vtx_0xE378[];
extern Vtx dITCommonObject_Vtx_0xE930[];
extern Vtx dITCommonObject_Vtx_0xF7E8[];
extern Vtx dITCommonObject_Vtx_0xF828[];
extern Vtx dITCommonObject_Vtx_0xFEE0[];
extern u16 dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4_sub_0x14[];
extern Vtx dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4_sub_0x43C[];
extern MObjSub *dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x3E4[];
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
extern AObjEvent32 *dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0xC4[];
extern u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0xE4[];
extern u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x15C[];
extern u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x16C[];
extern u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x194[];
extern u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x20C[];
extern u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x21C[];
extern AObjEvent32 * dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x3C4[];
extern AObjEvent32 * dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8_sub_0x1A4[];
extern AObjEvent32 *dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x8C[];
extern u32 dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388_sub_0x90[];
extern u32 dITCommonObject_BombHei_Item_mobjsubs_gap_0x3230_sub_0x98[];
extern u32 dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0x90[];
extern u32 dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0_sub_0x98[];
extern u32 dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0x118[];
extern u32 dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0x120[];
extern u32 dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410_sub_0x88[];
extern u32 dITCommonObject_MBall_Item_mobjsubs_gap_0x9120_sub_0xA8[];
extern u32 dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488_sub_0x88[];
extern u32 dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0_sub_0x90[];
extern u32 dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70_sub_0x90[];
extern u32 dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x108[];
extern u32 dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0_sub_0x98[];
extern u32 dITCommonObject_Tosakinto_Item_mobjsubs_gap_0xB540_sub_0x90[];
extern u32 dITCommonObject_WarkRock_Weapon_mobjsubs_gap_0xA9D0_sub_0x90[];
extern AObjEvent32 * dITCommonObject_GShell_Item_data_remainder_gap_0x600C_sub_0x78[];
extern u32 dITCommonObject_Harisen_Item_data_remainder_gap_0x2248_sub_0x34[];
extern u32* dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x2F4[];
extern AObjEvent32 * dITCommonObject_Spear_Item_data_remainder_sub_0x2F4[];
extern u32 dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8_sub_0x14[];
extern u32 dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x14[];
extern u32 dITCommonObject_Spear_Item_data_remainder_sub_0x14[];

extern u32 dITCommonObject_DogasSmog_Weapon_animjoints_0x13198[];
extern u16 dITCommonObject_LGunAmmo_Weapon_data_post_0x40[];
extern u8 dITCommonObject_LGunAmmo_data_0x41B8[];
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

/* @ 0x1238, 128 bytes — CI4 texture (Gfx_0x1440 SetTextureImage + LoadBlock) */
/* @tex fmt=CI4 dim=16x16 */
u8 dITCommonObject_Tex_0x1238[128] = {
	#include <ITCommonObject/Tex_0x1238.tex.inc.c>
};

/* @ 0x012B8, 680 bytes */
/* @ 0x12B8, 280 bytes (raw gap) */
/* u32 pointer array @ 0x12B8 (2 entries) */
u32 dITCommonObject_Star_Item_mobjsubs_gap_0x12B8[2] = {
	0x00000000,
	(u32)&dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x108,
};

/* u32 pointer array @ 0x12C0 (2 entries) */
u16 * dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x8[2] = { dITCommonObject_Heart_Item_data_remainder_gap_0x11DC_sub_0x34, dITCommonObject_Heart_Item_data_remainder_gap_0x11DC_sub_0xC };

/* u32 pointer array @ 0x12C8 (2 entries) */
u16 * dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x10[2] = { dITCommonObject_Heart_Item_data_remainder_gap_0x11DC_sub_0x34, dITCommonObject_Heart_Item_data_remainder_gap_0x11DC_sub_0xC };

/* MObjSub @ 0x12D0 */
MObjSub dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x18[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		NULL,
		0x0080, 0x0007, 0x0010, 0x0010,
		0,
		0.3804999887943268f, -0.12200000137090683f,
		0.24899999797344208f, 0.8500000238418579f,
		0.3804999887943268f, 0.24899999797344208f,
		(void**)dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x8,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
		G_IM_FMT_CI, G_IM_SIZ_16b,
		NULL,
		0x005E, 0x0005, 0x0010, 0x0010,
		0,
		0.29670000076293945f, 0.3400000035762787f,
		0.4065999984741211f, 0.34040001034736633f,
		0.29670000076293945f, 0.4065999984741211f,
		(void**)dITCommonObject_Star_Item_mobjsubs_gap_0x12B8_sub_0x10,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
/* @tex fmt=I4 dim=16x16 */
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
	{ 1, (void*)dITCommonObject_Sword_Item_DLLink_0x18F8, { 0.0f, 360.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Sword_Item_DLLink_0x1908, { 0.0f, -267.0000305175781f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
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
u32 dITCommonObject_Harisen_Item_data_remainder_gap_0x2248_sub_0x14[5] = {
	aobjEvent32SetVal0RateBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x200, 5),
	    0x40200000,  /* 2.5f */
	aobjEvent32End(),
};

/* AObjEvent32* array trailing the script */
AObjEvent32 *dITCommonObject_Harisen_Item_data_remainder_gap_0x2248_sub_0x14_post[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dITCommonObject_Harisen_Item_data_remainder_gap_0x2248_sub_0x34,
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
	(u32)&dITCommonObject_BombHei_Item_mobjsubs_gap_0x3230_sub_0x98,
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
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dITCommonObject_BombHei_Item_mobjsubs_gap_0x3230_sub_0x8,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
/* @ 0x4150, 16 bytes — LGunAmmo DL link */
DObjDLLink dITCommonObject_LGunAmmo_Weapon_data_post[2] = {
	{ 1, dITCommonObject_LGunAmmo_Weapon_data },
	{ 4, NULL },
};

/* @ 0x4160, 8 bytes (raw gap) */
PAD(8);

/* @ 0x4168, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LGunAmmo_Weapon_data_post_0x18[16] = {
	#include <ITCommonObject/dITCommonObject_LGunAmmo_Weapon_data_post_0x18.palette.inc.c>
};

/* @ 0x4188, 8 bytes (raw gap) */
PAD(8);
/* split-self chunk @ +0x40 (40 bytes, abs 0x4190) */
u16 dITCommonObject_LGunAmmo_Weapon_data_post_0x40[16] = {
	#include <ITCommonObject/LGunAmmo_Weapon_data_post_0x40.palette.inc.c>
};
PAD(8);
/* @ 0x41B8, 72 bytes — CI texture (paired with the _post_0x40
 * palette by the FFlower_…_sub_0xC image descriptor) */
u8 dITCommonObject_LGunAmmo_data_0x41B8[0x48] = {
	#include <ITCommonObject/data_0x41B8.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x32 */
u8 dITCommonObject_LGunAmmo_Tex_0x4200[0x100] = {
	#include <ITCommonObject/Tex_0x4200.tex.inc.c>
};

/* @ 0x4300, 8 bytes (zero pad between textures) */
PAD(8);

/* @tex fmt=CI4 dim=16x16 */
u8 dITCommonObject_LGunAmmo_Tex_0x4308[0x80] = {
	#include <ITCommonObject/Tex_0x4308.tex.inc.c>
};

/* @ 0x04388, 808 bytes */
/* @ 0x4388, 152 bytes (raw gap) */
/* u32 pointer array @ 0x4388 (3 entries) */
u32 dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388[3] = {
	0x00000000,
	0x00000000,
	(u32)&dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388_sub_0x90,
};

/* u32 pointer array @ 0x4394 (3 entries) */
u32 dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388_sub_0xC[3] = {
	(u32)&dITCommonObject_LGunAmmo_data_0x41B8,
	(u32)&dITCommonObject_LGunAmmo_Weapon_data_post_0x40,
	0x00000000,
};

/* MObjSub @ 0x43A0 */
MObjSub dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388_sub_0x18[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		NULL,
		0x0020, 0x0001, 0x0020, 0x0020,
		0,
		0.012500000186264515f, -0.02500000037252903f,
		1.0f, 1.0f,
		0.012500000186264515f, 1.0f,
		(void**)dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388_sub_0xC,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
AObjEvent32 **dITCommonObject_FFlower_Item_matanimjoints[3] = {
	NULL,
	NULL,
	dITCommonObject_FFlower_Item_matanimjoints_0x4788,
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
/* @tex fmt=CI4 dim=16x16 lut=dITCommonObject_LUT_0x4798 */
u8 dITCommonObject_Tex_0x47E8[128] = {
	#include <ITCommonObject/dITCommonObject_Tex_0x47E8.tex.inc.c>
};

/* @ 0x04868, 8 bytes (raw gap) */
PAD(8);

/* @ 0x04870, 128 bytes — StarRod item texture */
/* @tex fmt=CI4 dim=16x16 lut=dITCommonObject_LUT_0x47C0 */
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
	{ 1, (void*)dITCommonObject_Gfx_0x49B0, { 0.0f, 157.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)dITCommonObject_Gfx_0x4AA0, { 0.0f, 105.44328308105469f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
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
/* @ 0x5508, 16 bytes — StarRod DL link */
DObjDLLink dITCommonObject_StarRod_Weapon_data_post[2] = {
	{ 1, dITCommonObject_StarRod_Weapon_data },
	{ 4, NULL },
};

/* @ 0x5518, 16 bytes (raw gap) */
PAD(16);

/* @ 0x5528, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_StarRod_Weapon_data_post_0x20[16] = {
	#include <ITCommonObject/dITCommonObject_StarRod_Weapon_data_post_0x20.palette.inc.c>
};

/* @ 0x5548, 8 bytes (raw gap) */
PAD(8);

/* @ 0x5550, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_StarRod_Weapon_data_post_0x48[16] = {
	#include <ITCommonObject/dITCommonObject_StarRod_Weapon_data_post_0x48.palette.inc.c>
};

/* @ 0x5570, 8 bytes (raw gap) */
PAD(8);
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
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_StarRod_Weapon_data_post_0x70 */
u8 dITCommonObject_Tex_0x55C8[520] = {
	#include <ITCommonObject/Tex_0x55C8.tex.inc.c>
};
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_StarRod_Weapon_data_post_0x98 */
u8 dITCommonObject_Tex_0x57D0[520] = {
	#include <ITCommonObject/Tex_0x57D0.tex.inc.c>
};
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_StarRod_Weapon_data_post_0x70 */
u8 dITCommonObject_Tex_0x59D8[520] = {
	#include <ITCommonObject/Tex_0x59D8.tex.inc.c>
};
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_StarRod_Weapon_data_post_0x98 */
u8 dITCommonObject_Tex_0x5BE0[512] = {
	#include <ITCommonObject/Tex_0x5BE0.tex.inc.c>
};

/* @ 0x05DE0, 424 bytes */
/* @ 0x5DE0, 160 bytes (raw gap) */
/* u32 pointer array @ 0x5DE0 (2 entries) */
u32 dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0[2] = {
	0x00000000,
	(u32)&dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0_sub_0x98,
};

/* u32 pointer array @ 0x5DE8 (4 entries) */
u8 * dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0_sub_0x8[4] = { dITCommonObject_Tex_0x5BE0, dITCommonObject_Tex_0x59D8, dITCommonObject_Tex_0x57D0, dITCommonObject_Tex_0x55C8 };

/* u32 pointer array @ 0x5DF8 (2 entries) */
u16 * dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0_sub_0x18[2] = { dITCommonObject_StarRod_Weapon_data_post_0x98, dITCommonObject_StarRod_Weapon_data_post_0x70 };

/* MObjSub @ 0x5E00 */
MObjSub dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0_sub_0x20[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0_sub_0x8,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0_sub_0x18,
		0x0005,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
u32 dITCommonObject_GShell_Item_data_remainder_gap_0x600C_sub_0xC[8] = {
	aobjEvent32SetValAfterBlock(0x002, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x002, 6),
	    0x40490FDB,  /* 3.1415927410125732f */
	aobjEvent32Wait(12),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dITCommonObject_GShell_Item_data_remainder_gap_0x600C_sub_0xC,
	aobjEvent32End(),
};

/* AObjEvent32* array trailing the script */
AObjEvent32 **dITCommonObject_GShell_Item_data_remainder_gap_0x600C_sub_0xC_post[4] = {
	NULL,
	NULL,
	NULL,
	dITCommonObject_GShell_Item_data_remainder_gap_0x600C_sub_0x78,
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
	#include <ITCommonObject/gap_0x67FC_sub_0x34.tex.inc.c>
};

/* gap sub-block @ 0x68B0 (was gap+0xB4, 312 bytes) */
/* @ 0x68B0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Box_Item_data_remainder_gap_0x67FC_sub_0xB4[4] = {
	#include <ITCommonObject/dITCommonObject_Box_Item_data_remainder_gap_0x67FC_sub_0xB4.vtx.inc.c>
};

/* @ 0x68F0, 232 bytes (29 Gfx commands) — Box item DL */
Gfx dITCommonObject_Gfx_0x68F0[29] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x68F0.dl.inc.c>
};

/* @ 0x69D8, 16 bytes (raw gap) */
PAD(16);

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
	(u32)&dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488_sub_0x88,
};

/* u32 pointer array @ 0x7490 (2 entries) */
u16 * dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488_sub_0x8[2] = { dITCommonObject_Taru_Item_data_remainder_sub_0x34, dITCommonObject_Taru_Item_data_remainder_sub_0xC };

/* MObjSub @ 0x7498 */
MObjSub dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488_sub_0x10[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		NULL,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488_sub_0x8,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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

/* @tex fmt=CI4 dim=48x32 lut=dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x34 */
u8 dITCommonObject_Tex_0x7728[0x300] = {
	#include <ITCommonObject/Tex_0x7728.tex.inc.c>
};

PAD(4);

MObjSub ** dITCommonObject_data_0x7A2C[1] = { dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x3E4 };


/* u32 pointer array @ 0x7A30 (2 entries) */
u16 * dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x364[2] = { dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x34, dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0xC };

/* MObjSub @ 0x7A38 */
MObjSub dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x36C[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		NULL,
		0x0020, 0x0000, 0x0030, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x364,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
DObjDesc dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post[3] = {
	{ 0, NULL, { 0.0f, 390.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x07C6C, 12 bytes (raw gap) */
PAD(12);

/* @ 0x07C78, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post_0x90[16] = {
	#include <ITCommonObject/dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post_0x90.palette.inc.c>
};

/* @ 0x07C98, 8 bytes (raw gap) */
PAD(8);

/* @ 0x07CA0, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post_0xB8[16] = {
	#include <ITCommonObject/dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post_0xB8.palette.inc.c>
};

/* @ 0x07CC0, 8 bytes (raw gap) */
PAD(8);

/* @ 0x07CC8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post_0xE0[16] = {
	#include <ITCommonObject/dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post_0xE0.palette.inc.c>
};

/* @ 0x07CE8, 8 bytes (raw gap) */
PAD(8);

/* @ 0x07CF0, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post_0x108[16] = {
	#include <ITCommonObject/dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post_0x108.palette.inc.c>
};

/* @ 0x07D10, 8 bytes (raw gap) */
PAD(8);

/* @ 0x07D18, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post_0x130[16] = {
	#include <ITCommonObject/dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post_0x130.palette.inc.c>
};

/* @ 0x07D38, 8 bytes (raw gap) */
PAD(8);

/* @ 0x07D40, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post_0x158[16] = {
	#include <ITCommonObject/dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post_0x158.palette.inc.c>
};

/* @ 0x07D60, 8 bytes (raw gap) */
PAD(8);

/* @ 0x07D68, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post_0x180[16] = {
	#include <ITCommonObject/dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC_sub_0x42C_post_0x180.palette.inc.c>
};

/* @ 0x07D88, 8 bytes (raw gap) */
PAD(8);

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
	(u32)&dITCommonObject_MBall_Item_mobjsubs_gap_0x9120_sub_0xA8,
};

/* u32 pointer array @ 0x9130 (8 entries) */
u8 * dITCommonObject_MBall_Item_mobjsubs_gap_0x9120_sub_0x10[8] = { dITCommonObject_Tex_0x8C18, dITCommonObject_Tex_0x8A10, dITCommonObject_Tex_0x8808, dITCommonObject_Tex_0x8600, dITCommonObject_Tex_0x83F8, dITCommonObject_Tex_0x81F0, dITCommonObject_Tex_0x7FE8, dITCommonObject_Tex_0x7DE0 };

/* MObjSub @ 0x9150 */
MObjSub dITCommonObject_MBall_Item_mobjsubs_gap_0x9120_sub_0x30[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dITCommonObject_MBall_Item_mobjsubs_gap_0x9120_sub_0x10,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
AObjEvent32 **dITCommonObject_MBall_Item_data_remainder_gap_0x950C[5] = {
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

/* @ 0x95D0, 32 bytes - MBall AObjEvent32 script-pointer table */
AObjEvent32 *dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0xC4[8] = {
	(AObjEvent32 *)dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x14,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0xE4,
	(AObjEvent32 *)dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x15C,
	(AObjEvent32 *)dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x16C,
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
u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x16C[3] = {
	aobjEvent32SetFlags(0x000, 40),
	aobjEvent32SetFlags(0x002, 80),
	aobjEvent32End(),
};

/* AObjEvent32* array trailing the script */
AObjEvent32 *dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x16C_post[7] = {
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x194,
	(AObjEvent32 *)dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x20C,
	(AObjEvent32 *)dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x21C,
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
u32 dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x21C[3] = {
	aobjEvent32SetFlags(0x000, 40),
	aobjEvent32SetFlags(0x002, 80),
	aobjEvent32End(),
};

/* AObjEvent32* array trailing the script */
AObjEvent32 *dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x21C_post[7] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x2F4,
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
u32 * dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x2F4[2] = { dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x244, NULL };

/* AObjEvent32* array trailing the script */
AObjEvent32 **dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x2F4_post[6] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	dITCommonObject_MBall_Item_data_remainder_gap_0x950C_sub_0x3C4,
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
DObjDesc dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4_sub_0x47C_post[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4_sub_0x47C, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x0A7B4, 20 bytes (raw gap) */
PAD(20);

/* @ 0x0A7C8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4_sub_0x47C_post_0x98[16] = {
	#include <ITCommonObject/dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4_sub_0x47C_post_0x98.palette.inc.c>
};

/* @ 0x0A7E8, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0A7F0, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4_sub_0x47C_post_0xC0[16] = {
	#include <ITCommonObject/dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4_sub_0x47C_post_0xC0.palette.inc.c>
};

/* @ 0x0A810, 8 bytes (raw gap) */
PAD(8);

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
	(u32)&dITCommonObject_WarkRock_Weapon_mobjsubs_gap_0xA9D0_sub_0x90,
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
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dITCommonObject_WarkRock_Weapon_mobjsubs_gap_0xA9D0_sub_0x8,
		0x0020, 0x0000, 0x0010, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
	(u32)&dITCommonObject_Tosakinto_Item_mobjsubs_gap_0xB540_sub_0x90,
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
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dITCommonObject_Tosakinto_Item_mobjsubs_gap_0xB540_sub_0xC,
		0x0020, 0x0000, 0x0020, 0x0018,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
u32 dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8_sub_0x14[75] = {
	aobjEvent32SetVal0Rate(0x1A0, 0),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x250, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x020, 8),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x020, 8),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x020, 8),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x020, 8),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x020, 8),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x020, 8),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x020, 8),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x020, 8),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8_sub_0x14,
	aobjEvent32End(),
};

/* AObjEvent32* array trailing the script */
AObjEvent32 **dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8_sub_0x14_post[5] = {
	NULL,
	NULL,
	NULL,
	NULL,
	dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8_sub_0x1A4,
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
	(u32)&dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410_sub_0x88,
};

/* u32 pointer array @ 0xD418 (2 entries) */
u8 * dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410_sub_0x8[2] = { dITCommonObject_Tex_0xCD10, dITCommonObject_Tex_0xC608 };

/* MObjSub @ 0xD420 */
MObjSub dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410_sub_0x10[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410_sub_0x8,
		0x0020, 0x0000, 0x0040, 0x0038,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x00A1,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
u32 dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x14[11] = {
	aobjEvent32SetValAfterBlock(0x007, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x002, 26),
	    0xC0490FDB,  /* -3.1415927410125732f */
	aobjEvent32SetValAfterBlock(0x002, 26),
	    0xC0490FDB,  /* -3.1415927410125732f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x14,
	aobjEvent32End(),
};

/* AObjEvent32* array trailing the script */
AObjEvent32 **dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x14_post[1] = {
	dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x8C,
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
/* @ 0x0D6D0, 24 bytes - Lizardon AObjEvent32 script-pointer table */
AObjEvent32 *dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x8C[6] = {
	(AObjEvent32 *)dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x44,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};

/* @ 0x0D6E8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x8C_0x18[16] = {
	#include <ITCommonObject/dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x8C_0x18.palette.inc.c>
};

/* @ 0x0D708, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0D710, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x8C_0x40[16] = {
	#include <ITCommonObject/dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644_sub_0x8C_0x40.palette.inc.c>
};

/* @ 0x0D730, 8 bytes (raw gap) */
PAD(8);

/* @ 0xD738, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xD738[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xD738.palette.inc.c>
};

/* @ 0xD758, 1560 bytes (trailing gap) */
PAD(8);

/* @tex fmt=CI4 dim=16x65 */
u8 dITCommonObject_Tex_0xD760[520] = {
	#include <ITCommonObject/Tex_0xD760.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x65 */
u8 dITCommonObject_Tex_0xD968[520] = {
	#include <ITCommonObject/Tex_0xD968.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0xDB70[512] = {
	#include <ITCommonObject/Tex_0xDB70.tex.inc.c>
};

/* @ 0x0DD70, 456 bytes */
/* @ 0xDD70, 152 bytes (raw gap) */
/* u32 pointer array @ 0xDD70 (3 entries) */
u32 dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70[3] = {
	0x00000000,
	0x00000000,
	(u32)&dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70_sub_0x90,
};

/* u32 pointer array @ 0xDD7C (3 entries) */
u8 * dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70_sub_0xC[3] = { dITCommonObject_Tex_0xDB70, dITCommonObject_Tex_0xD968, dITCommonObject_Tex_0xD760 };

/* MObjSub @ 0xDD88 */
MObjSub dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70_sub_0x18[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70_sub_0xC,
		0x0020, 0x0000, 0x0018, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
u32 dITCommonObject_Spear_Item_data_remainder_sub_0x14[73] = {
	aobjEvent32SetValRate(0x030, 0),
	    0x00000000,  /* 0.0f */
	    0x42087FFF,  /* 34.124996185302734f */
	    0x43430000,  /* 195.0f */
	    0x3EC003EE,  /* 0.375029981136322f */
	aobjEvent32SetValAfterBlock(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x030, 4),
	    0x430A0000,  /* 138.0f */
	    0x41C2FFFF,  /* 24.374998092651367f */
	    0x430A0010,  /* 138.000244140625f */
	    0xC1C2FFFF,  /* -24.374998092651367f */
	aobjEvent32SetValRateBlock(0x030, 4),
	    0x43430000,  /* 195.0f */
	    0xBEBFFFF5,  /* -0.37499967217445374f */
	    0x00000000,  /* 0.0f */
	    0xC2088008,  /* -34.125030517578125f */
	aobjEvent32SetValRateBlock(0x030, 4),
	    0x43070000,  /* 135.0f */
	    0xC1C30003,  /* -24.3750057220459f */
	    0xC3070000,  /* -135.0f */
	    0xC1C30003,  /* -24.3750057220459f */
	aobjEvent32SetValRate(0x010, 4),
	    0xB8700000,  /* -5.7220458984375e-05f */
	    0xC2070000,  /* -33.75f */
	aobjEvent32SetVal0RateBlock(0x020, 4),
	    0xC3430004,  /* -195.00006103515625f */
	aobjEvent32SetValRateBlock(0x030, 4),
	    0xC3070000,  /* -135.0f */
	    0xC1C2FFFD,  /* -24.3749942779541f */
	    0xC3070000,  /* -135.0f */
	    0x41C30005,  /* 24.375009536743164f */
	aobjEvent32SetValRate(0x020, 4),
	    0x00000000,  /* 0.0f */
	    0x42070001,  /* 33.750003814697266f */
	aobjEvent32SetVal0RateBlock(0x010, 4),
	    0xC3430000,  /* -195.0f */
	aobjEvent32SetValRateBlock(0x030, 4),
	    0xC3070000,  /* -135.0f */
	    0x41C2FFFE,  /* 24.374996185302734f */
	    0x43070000,  /* 135.0f */
	    0x41C30000,  /* 24.375f */
	aobjEvent32SetValRateBlock(0x030, 4),
	    0x00000000,  /* 0.0f */
	    0x42087FFF,  /* 34.124996185302734f */
	    0x43430002,  /* 195.00003051757812f */
	    0x3EC003EE,  /* 0.375029981136322f */
	aobjEvent32SetValRateBlock(0x030, 4),
	    0x430A0000,  /* 138.0f */
	    0x41C2FFFB,  /* 24.374990463256836f */
	    0x430A0010,  /* 138.000244140625f */
	    0xC1C2FFFD,  /* -24.3749942779541f */
	aobjEvent32SetValRateBlock(0x030, 4),
	    0x43430000,  /* 195.0f */
	    0xBEBFFFF5,  /* -0.37499967217445374f */
	    0x00000000,  /* 0.0f */
	    0xC2088008,  /* -34.125030517578125f */
	aobjEvent32SetValRateBlock(0x030, 4),
	    0x43070000,  /* 135.0f */
	    0xC1C30005,  /* -24.375009536743164f */
	    0xC3070000,  /* -135.0f */
	    0xC1C30005,  /* -24.375009536743164f */
	aobjEvent32SetValRate(0x010, 4),
	    0xB8700000,  /* -5.7220458984375e-05f */
	    0xC2070001,  /* -33.750003814697266f */
	aobjEvent32SetVal0RateBlock(0x020, 4),
	    0xC3430004,  /* -195.00006103515625f */
	aobjEvent32SetValRateBlock(0x030, 4),
	    0xC3070000,  /* -135.0f */
	    0xC1C2FFFD,  /* -24.3749942779541f */
	    0xC3070000,  /* -135.0f */
	    0x41C30005,  /* 24.375009536743164f */
	aobjEvent32End(),
};

/* AObjEvent32* array trailing the script */
AObjEvent32 **dITCommonObject_Spear_Item_data_remainder_sub_0x14_post[3] = {
	NULL,
	NULL,
	dITCommonObject_Spear_Item_data_remainder_sub_0x2F4,
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
	(u32)&dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0_sub_0x90,
};

/* u32 pointer array @ 0xE2EC (3 entries) */
u8 * dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0_sub_0xC[3] = { dITCommonObject_Tex_0xDB70, dITCommonObject_Tex_0xD968, dITCommonObject_Tex_0xD760 };

/* MObjSub @ 0xE2F8 */
MObjSub dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0_sub_0x18[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0_sub_0xC,
		0x0020, 0x0000, 0x0018, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
AObjEvent32 **dITCommonObject_SpearSwarm_Weapon_matanimjoints[3] = {
	NULL,
	NULL,
	dITCommonObject_SpearSwarm_Weapon_matanimjoints_0xE67C,
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
/* @tex fmt=CI4 dim=32x40 lut=dITCommonObject_LUT_0xE688 */
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
	{ 1, (void*)dITCommonObject_Gfx_0xE970, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
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
DObjDesc dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4_sub_0x27C_post[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4_sub_0x27C, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x0EED4, 20 bytes (raw gap) */
PAD(20);

/* @ 0x0EEE8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4_sub_0x27C_post_0x98[16] = {
	#include <ITCommonObject/dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4_sub_0x27C_post_0x98.palette.inc.c>
};

/* @ 0x0EF08, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0EF10, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4_sub_0x27C_post_0xC0[16] = {
	#include <ITCommonObject/dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4_sub_0x27C_post_0xC0.palette.inc.c>
};

/* @ 0x0EF30, 8 bytes (raw gap) */
PAD(8);

/* @ 0xEF38, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xEF38[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xEF38.palette.inc.c>
};

/* @ 0xEF58, 88 bytes (raw gap) */
/* @ 0x0EF58, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0EF60, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_Kamex_Item_data_remainder_gap_0xEF58_0x8[16] = {
	#include <ITCommonObject/dITCommonObject_Kamex_Item_data_remainder_gap_0xEF58_0x8.palette.inc.c>
};

/* @ 0x0EF80, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0EF88, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_Kamex_Item_data_remainder_gap_0xEF58_0x30[16] = {
	#include <ITCommonObject/dITCommonObject_Kamex_Item_data_remainder_gap_0xEF58_0x30.palette.inc.c>
};

/* @ 0x0EFA8, 8 bytes (raw gap) */
PAD(8);

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

/* @tex fmt=CI4 dim=16x49 */
u8 dITCommonObject_Tex_0xF230[392] = {
	#include <ITCommonObject/Tex_0xF230.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x49 */
u8 dITCommonObject_Tex_0xF3B8[392] = {
	#include <ITCommonObject/Tex_0xF3B8.tex.inc.c>
};

/* @tex fmt=CI4 dim=24x32 */
u8 dITCommonObject_Tex_0xF540[384] = {
	#include <ITCommonObject/Tex_0xF540.tex.inc.c>
};

/* @ 0x0F6C0, 792 bytes */
/* @ 0xF6C0, 296 bytes (raw gap) */
/* u32 pointer array @ 0xF6C0 (3 entries) */
u32 dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0[3] = {
	0x00000000,
	(u32)&dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0x118,
	(u32)&dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0x120,
};

/* u32 pointer array @ 0xF6CC (3 entries) */
u8 * dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0xC[3] = { dITCommonObject_Tex_0xF540, dITCommonObject_Tex_0xF3B8, dITCommonObject_Tex_0xF230 };

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
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0xC,
		0x0020, 0x0000, 0x0018, 0x0018,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0_sub_0x18,
		0x0020, 0x0000, 0x0010, 0x0018,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
AObjEvent32 **dITCommonObject_KamexHydro_Weapon_matanimjoints[3] = {
	NULL,
	dITCommonObject_KamexHydro_Weapon_matanimjoints_0xFC9C,
	&dITCommonObject_KamexHydro_Weapon_matanimjoints_0xFC9C[1],
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
/* @tex fmt=CI4 dim=32x32 lut=dITCommonObject_LUT_0xFCB8 */
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
	{ 2, (void*)dITCommonObject_Gfx_0xFF10, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
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
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dITCommonObject_Egg_Item_animjoints_0x1055C[];

AObjEvent32 *dITCommonObject_Egg_Item_animjoints[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dITCommonObject_Egg_Item_animjoints_0x1055C,
};

u32 dITCommonObject_Egg_Item_animjoints_0x1055C[] = {
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
};

/* @ 0x105E4 — sparse AObjEvent32* table. The five zero words after
 * the script terminator are NULL pointer slots, not extra End
 * opcodes (a script has exactly one End). */
AObjEvent32 *dITCommonObject_Egg_Item_animjoints_0x105E4[5] = {
	NULL, NULL, NULL, NULL, NULL,
};

/* Trailing region: the Egg item's Starmie-variant sprite pool —
 * five 16-colour RGBA16 palettes (one per sprite frame), then the
 * five 32x32 CI4 sprite frames of the MObjSub (sub_0x20) table.
 * The four leading palettes are identical (shared frame palette). */
u16 dITCommonObject_LUT_0x105F8[16] = {
	#include <ITCommonObject/LUT_0x105F8.palette.inc.c>
};
PAD(8);

u16 dITCommonObject_LUT_0x10620[16] = {
	#include <ITCommonObject/LUT_0x10620.palette.inc.c>
};
PAD(8);

u16 dITCommonObject_LUT_0x10648[16] = {
	#include <ITCommonObject/LUT_0x10648.palette.inc.c>
};
PAD(8);

u16 dITCommonObject_LUT_0x10670[16] = {
	#include <ITCommonObject/LUT_0x10670.palette.inc.c>
};
PAD(8);

/* 16-colour RGBA16 TLUT (loaded by Gfx_0x111B0) */
u16 dITCommonObject_LUT_0x10698[16] = {
	#include <ITCommonObject/LUT_0x10698.palette.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x106C0[520] = {
	#include <ITCommonObject/Tex_0x106C0.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x108C8[520] = {
	#include <ITCommonObject/Tex_0x108C8.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x10AD0[520] = {
	#include <ITCommonObject/Tex_0x10AD0.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x10CD8[520] = {
	#include <ITCommonObject/Tex_0x10CD8.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 */
u8 dITCommonObject_Tex_0x10EE0[512] = {
	#include <ITCommonObject/Tex_0x10EE0.tex.inc.c>
};

/* @ 0x110E0, 160 bytes (raw gap) */
/* u32 pointer array @ 0x110E0 (2 entries) */
u32 dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0[2] = {
	0x00000000,
	(u32)&dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0_sub_0x98,
};

/* u32 pointer array @ 0x110E8 (6 entries) */
u32 dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0_sub_0x8[6] = {
	(u32)dITCommonObject_Tex_0x10EE0,
	(u32)dITCommonObject_Tex_0x10CD8,
	(u32)dITCommonObject_Tex_0x10AD0,
	(u32)dITCommonObject_Tex_0x108C8,
	(u32)dITCommonObject_Tex_0x106C0,
	0x00000000,
};

/* MObjSub @ 0x11100 */
MObjSub dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0_sub_0x20[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0_sub_0x8,
		0x0035, 0x0007, 0x0020, 0x0020,
		0,
		0.20000000298023224f, 0.30160000920295715f,
		0.6000000238418579f, 0.699999988079071f,
		0.20000000298023224f, 0.6000000238418579f,
		NULL,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
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
/* @ 0x119C8, 16 bytes — Starmie DL link */
DObjDLLink dITCommonObject_Starmie_Item_data_remainder_sub_0x6A4[2] = {
	{ 1, (Gfx *)dITCommonObject_Starmie_Item_data_remainder_sub_0x5F4 },
	{ 4, NULL },
};

/* @ 0x119D8, 1384 bytes */
DObjDesc dITCommonObject_StarmieSwift_Weapon_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Starmie_Item_data_remainder_sub_0x6A4, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
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
DObjDesc dITCommonObject_Sawamura_Item_data_remainder_gap_0x11FC4_sub_0x37C_post[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dITCommonObject_Sawamura_Item_data_remainder_gap_0x11FC4_sub_0x37C, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x124B4, 20 bytes (raw gap) */
PAD(20);

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
	(u32)&dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0x90,
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
		G_IM_FMT_I, G_IM_SIZ_16b,
		(void**)dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0x8,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		NULL,
		0x3201,
		G_IM_FMT_I, G_IM_SIZ_4b,
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
	{ 1, (void*)dITCommonObject_DogasSmog_Weapon_mobjsubs_sub_0x178, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 5.5f, 5.5f, 1.0f } },
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
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dITCommonObject_DogasSmog_Weapon_matanimjoints_0x131E8[];
extern AObjEvent32 *dITCommonObject_DogasSmog_Weapon_matanimjoints_trailing[];

AObjEvent32 *dITCommonObject_DogasSmog_Weapon_matanimjoints[2] = {
	NULL,
	(u32)dITCommonObject_DogasSmog_Weapon_matanimjoints_trailing,
};

u32 dITCommonObject_DogasSmog_Weapon_matanimjoints_0x131E8[] = {
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
};

/* Trailing region: _trailing is a 5-entry AObjEvent32* table
 * (only [0] used -> the _0x131E8 matanim script). The block that
 * followed it is a self-contained textured quad, decoded below
 * into TLUT / texture / Vtx / DL. */
AObjEvent32 *dITCommonObject_DogasSmog_Weapon_matanimjoints_trailing[5] = {
	(u32)dITCommonObject_DogasSmog_Weapon_matanimjoints_0x131E8,
	NULL,
	NULL,
	NULL,
	NULL,
};

/* @ 0x13258, 40 bytes — 16-colour RGBA16 TLUT + 8 B pad */
u16 dITCommonObject_DogasSmog_Weapon_matanimjoints_trailing_LUT[16] = {
	#include <ITCommonObject/DogasSmog_Weapon_matanimjoints_trailing_LUT.palette.inc.c>
};
PAD(8);

/* @ 0x13280, 512 bytes — texture image */
u8 dITCommonObject_DogasSmog_Weapon_matanimjoints_trailing_Tex[512] = {
	#include <ITCommonObject/DogasSmog_Weapon_matanimjoints_trailing_Tex.tex.inc.c>
};

/* @ 0x13480, 48 bytes — quad geometry (3 vertices) */
Vtx dITCommonObject_DogasSmog_Weapon_matanimjoints_trailing_Vtx[3] = {
	#include <ITCommonObject/DogasSmog_Weapon_matanimjoints_trailing_Vtx.vtx.inc.c>
};

/* @ 0x134B0, 232 bytes — DL: loads the TLUT + texture, draws the quad */
Gfx dITCommonObject_DogasSmog_Weapon_matanimjoints_trailing_DL[29] = {
	#include <ITCommonObject/DogasSmog_Weapon_matanimjoints_trailing_DL.dl.inc.c>
};

/* @ 0x13598, 328 bytes */
DObjDesc dITCommonObject_Pippi_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_DogasSmog_Weapon_matanimjoints_trailing_DL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
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