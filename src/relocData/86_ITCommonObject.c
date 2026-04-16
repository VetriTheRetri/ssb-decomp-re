/* relocData file 86: ITCommonObject — common-item geometry pool.
 * Every item in ITCommonData has an ITAttributes struct whose `data`,
 * `p_mobjsubs`, `anim_joints`, and `p_matanim_joints` fields are patched
 * by fixRelocChain to point at offsets in this file. The block names
 * below mirror those extern reloc entries in 251_ITCommonData.reloc so
 * each chunk carries the same <Item>_<AttrType>_<Field> label as its
 * caller on the ITCommonData side. */

#include "relocdata_types.h"

/* Shared vertex / DL pool the item DObjDesc trees reference via the
 * intern chain. Not yet broken down into typed Vtx / Gfx / Tex blocks. */
u8 dITCommonObject_data_0x0000[0x670] = {
	#include <ITCommonObject/data_0x0000.data.inc.c>
};

/* @ 0x00670, 1088 bytes */
DObjDesc dITCommonObject_Capsule_Item_data_DObjDesc[5] = {
	{ 0, NULL, { 0.0f, -90.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x01B300F8, { 0.0f, 90.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)0x01BE0150, { 0.0f, 45.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)0x02870178, { 0.0f, -45.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x074C, 868 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Capsule_Item_data_remainder[0x364] = {
	#include <ITCommonObject/dITCommonObject_Capsule_Item_data_remainder.data.inc.c>
};

/* @ 0x00AB0, 1704 bytes */
DObjDesc dITCommonObject_Tomato_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 390.0f, -75.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x04150270, { 0.0f, 75.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x0B34, 1572 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Tomato_Item_data_remainder[0x624] = {
	#include <ITCommonObject/dITCommonObject_Tomato_Item_data_remainder.data.inc.c>
};

/* @ 0x01158, 352 bytes */
DObjDesc dITCommonObject_Heart_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x04AF0452, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x11DC, 220 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Heart_Item_data_remainder[0xDC] = {
	#include <ITCommonObject/dITCommonObject_Heart_Item_data_remainder.data.inc.c>
};

/* @ 0x012B8, 680 bytes */
u8 dITCommonObject_Star_Item_mobjsubs[0x2A8] = {
	#include <ITCommonObject/Star_Item_mobjsubs.data.inc.c>
};

/* @ 0x01560, 144 bytes */
DObjDesc dITCommonObject_Star_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x057D0510, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x15E4, 12 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Star_Item_data_remainder[0xC] = {
	#include <ITCommonObject/dITCommonObject_Star_Item_data_remainder.data.inc.c>
};

/* @ 0x015F0, 808 bytes */
u32 dITCommonObject_Star_Item_matanimjoints[202] = {
	#include <ITCommonObject/Star_Item_matanimjoints.data.inc.c>
};

/* @ 0x01918, 1256 bytes */
DObjDesc dITCommonObject_Sword_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x065D063E, { 0.0f, 360.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x070F0642, { 0.0f, -267.0000305175781f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x19C8, 1080 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Sword_Item_data_remainder[0x438] = {
	#include <ITCommonObject/dITCommonObject_Sword_Item_data_remainder.data.inc.c>
};

/* @ 0x01E00, 920 bytes */
DObjDesc dITCommonObject_Bat_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x079706FC, { 0.0f, 139.58062744140625f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)0x083F0752, { 9.999999974752427e-07f, -198.36004638671875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x1EB0, 744 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Bat_Item_data_remainder[0x2E8] = {
	#include <ITCommonObject/dITCommonObject_Bat_Item_data_remainder.data.inc.c>
};

/* @ 0x02198, 1464 bytes */
DObjDesc dITCommonObject_Harisen_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 158.99996948242188f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x08960828, { 0.0f, -209.99996948242188f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x2248, 1288 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Harisen_Item_data_remainder[0x508] = {
	#include <ITCommonObject/dITCommonObject_Harisen_Item_data_remainder.data.inc.c>
};

/* @ 0x02750, 2784 bytes */
DObjDesc dITCommonObject_Hammer_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x0C8D097C, { 0.0f, 239.9998779296875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x27D4, 2652 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Hammer_Item_data_remainder[0xA5C] = {
	#include <ITCommonObject/dITCommonObject_Hammer_Item_data_remainder.data.inc.c>
};

/* @ 0x03230, 456 bytes */
u8 dITCommonObject_BombHei_Item_mobjsubs[0x1C8] = {
	#include <ITCommonObject/BombHei_Item_mobjsubs.data.inc.c>
};

/* @ 0x033F8, 1448 bytes */
DObjDesc dITCommonObject_BombHei_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x0D470CC4, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x347C, 1316 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_BombHei_Item_data_remainder[0x524] = {
	#include <ITCommonObject/dITCommonObject_BombHei_Item_data_remainder.data.inc.c>
};

/* @ 0x039A0, 1456 bytes */
DObjDesc dITCommonObject_MSBomb_Item_data_DObjDesc[5] = {
	{ 0, NULL, { -9.999999974752427e-07f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 9.999999974752427e-07f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x0E8A0DE8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x0F830E2C, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x3A7C, 1236 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_MSBomb_Item_data_remainder[0x4D4] = {
	#include <ITCommonObject/dITCommonObject_MSBomb_Item_data_remainder.data.inc.c>
};

/* @ 0x03F50, 344 bytes */
DObjDesc dITCommonObject_LGun_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x103F0F6C, { 0.0f, 39.89999771118164f, 78.00001525878906f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x3FD4, 212 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_LGun_Item_data_remainder[0xD4] = {
	#include <ITCommonObject/dITCommonObject_LGun_Item_data_remainder.data.inc.c>
};

/* @ 0x040A8, 736 bytes */
u8 dITCommonObject_LGunAmmo_Weapon_data[0x2E0] = {
	#include <ITCommonObject/LGunAmmo_Weapon_data.data.inc.c>
};

/* @ 0x04388, 808 bytes */
u8 dITCommonObject_FFlower_Item_mobjsubs[0x328] = {
	#include <ITCommonObject/FFlower_Item_mobjsubs.data.inc.c>
};

/* @ 0x046B0, 176 bytes */
DObjDesc dITCommonObject_FFlower_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, -105.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x11C31148, { 0.0f, 105.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)0x11DA1182, { 0.0f, 37.499977111816406f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x04760, 1024 bytes */
u32 dITCommonObject_FFlower_Item_matanimjoints[256] = {
	#include <ITCommonObject/FFlower_Item_matanimjoints.data.inc.c>
};

/* @ 0x04B60, 2296 bytes */
DObjDesc dITCommonObject_StarRod_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x12EF126C, { 0.0f, 157.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)0x152D12A8, { 0.0f, 105.44328308105469f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x4C10, 2120 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_StarRod_Item_data_remainder[0x848] = {
	#include <ITCommonObject/dITCommonObject_StarRod_Item_data_remainder.data.inc.c>
};

/* @ 0x05458, 2440 bytes */
u8 dITCommonObject_StarRod_Weapon_data[0x988] = {
	#include <ITCommonObject/StarRod_Weapon_data.data.inc.c>
};

/* @ 0x05DE0, 424 bytes */
u8 dITCommonObject_GShell_Item_mobjsubs[0x1A8] = {
	#include <ITCommonObject/GShell_Item_mobjsubs.data.inc.c>
};

/* @ 0x05F88, 2032 bytes */
DObjDesc dITCommonObject_GShell_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x180517B0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x600C, 1900 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_GShell_Item_data_remainder[0x76C] = {
	#include <ITCommonObject/dITCommonObject_GShell_Item_data_remainder.data.inc.c>
};

/* @ 0x06778, 2608 bytes */
DObjDesc dITCommonObject_Box_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 9.999999974752427e-07f, -225.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x1A51198C, { 0.0f, -9.999999974752427e-07f, 224.99998474121094f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x67FC, 2476 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Box_Item_data_remainder[0x9AC] = {
	#include <ITCommonObject/dITCommonObject_Box_Item_data_remainder.data.inc.c>
};

/* @ 0x071A8, 736 bytes */
DObjDesc dITCommonObject_Taru_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, -210.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x1D231C00, { 0.0f, 0.0f, 210.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x722C, 604 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Taru_Item_data_remainder[0x25C] = {
	#include <ITCommonObject/dITCommonObject_Taru_Item_data_remainder.data.inc.c>
};

/* @ 0x07488, 448 bytes */
u8 dITCommonObject_NBumper_Item_mobjsubs[0x1C0] = {
	#include <ITCommonObject/NBumper_Item_mobjsubs.data.inc.c>
};

/* @ 0x07648, 6872 bytes */
DObjDesc dITCommonObject_NBumper_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x1E8B1D56, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x76CC, 6740 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_NBumper_Item_data_remainder[0x1A54] = {
	#include <ITCommonObject/dITCommonObject_NBumper_Item_data_remainder.data.inc.c>
};

/* @ 0x09120, 784 bytes */
u8 dITCommonObject_MBall_Item_mobjsubs[0x310] = {
	#include <ITCommonObject/MBall_Item_mobjsubs.data.inc.c>
};

/* @ 0x09430, 3344 bytes */
DObjDesc dITCommonObject_MBall_Item_data_DObjDesc[5] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x252E2494, { -75.0f, 9.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x254724D0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x950C, 3124 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_MBall_Item_data_remainder[0xC34] = {
	#include <ITCommonObject/dITCommonObject_MBall_Item_data_remainder.data.inc.c>
};

/* @ 0x0A140, 2192 bytes */
DObjDesc dITCommonObject_Wark_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x29A52814, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xA1C4, 2060 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Wark_Item_data_remainder[0x80C] = {
	#include <ITCommonObject/dITCommonObject_Wark_Item_data_remainder.data.inc.c>
};

/* @ 0x0A9D0, 456 bytes */
u8 dITCommonObject_WarkRock_Weapon_mobjsubs[0x1C8] = {
	#include <ITCommonObject/WarkRock_Weapon_mobjsubs.data.inc.c>
};

/* @ 0x0AB98, 1472 bytes */
DObjDesc dITCommonObject_WarkRock_Weapon_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x2B092AAA, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xAC1C, 1340 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_WarkRock_Weapon_data_remainder[0x53C] = {
	#include <ITCommonObject/dITCommonObject_WarkRock_Weapon_data_remainder.data.inc.c>
};

/* @ 0x0B158, 1000 bytes */
DObjDesc dITCommonObject_Kabigon_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x2D522C1C, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xB1DC, 868 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Kabigon_Item_data_remainder[0x364] = {
	#include <ITCommonObject/dITCommonObject_Kabigon_Item_data_remainder.data.inc.c>
};

/* @ 0x0B540, 456 bytes */
u8 dITCommonObject_Tosakinto_Item_mobjsubs[0x1C8] = {
	#include <ITCommonObject/Tosakinto_Item_mobjsubs.data.inc.c>
};

/* @ 0x0B708, 1464 bytes */
DObjDesc dITCommonObject_Tosakinto_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x2DF22D86, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xB7B8, 1288 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Tosakinto_Item_data_remainder[0x508] = {
	#include <ITCommonObject/dITCommonObject_Tosakinto_Item_data_remainder.data.inc.c>
};

/* @ 0x0BCC0, 1136 bytes */
DObjDesc dITCommonObject_Mew_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x30252EF4, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xBD44, 1004 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Mew_Item_data_remainder[0x3EC] = {
	#include <ITCommonObject/dITCommonObject_Mew_Item_data_remainder.data.inc.c>
};

/* @ 0x0C130, 1008 bytes */
DObjDesc dITCommonObject_Nyars_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x31213010, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xC1B4, 876 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Nyars_Item_data_remainder[0x36C] = {
	#include <ITCommonObject/dITCommonObject_Nyars_Item_data_remainder.data.inc.c>
};

/* @ 0x0C520, 3824 bytes */
DObjDesc dITCommonObject_NyarsCoin_Weapon_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x3505310C, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xC5A4, 3692 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_NyarsCoin_Weapon_data_remainder[0xE6C] = {
	#include <ITCommonObject/dITCommonObject_NyarsCoin_Weapon_data_remainder.data.inc.c>
};

/* @ 0x0D410, 432 bytes */
u8 dITCommonObject_Lizardon_Item_mobjsubs[0x1B0] = {
	#include <ITCommonObject/Lizardon_Item_mobjsubs.data.inc.c>
};

/* @ 0x0D5C0, 1968 bytes */
DObjDesc dITCommonObject_Lizardon_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 9.999999974752427e-07f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x35953538, { 0.0f, 0.0f, 0.0f }, { 0.0f, -3.1415929794311523f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xD644, 1836 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Lizardon_Item_data_remainder[0x72C] = {
	#include <ITCommonObject/dITCommonObject_Lizardon_Item_data_remainder.data.inc.c>
};

/* @ 0x0DD70, 456 bytes */
u8 dITCommonObject_Spear_Item_mobjsubs[0x1C8] = {
	#include <ITCommonObject/Spear_Item_mobjsubs.data.inc.c>
};

/* @ 0x0DF38, 936 bytes */
DObjDesc dITCommonObject_Spear_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x37FE3792, { -135.0f, -135.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xDFE8, 760 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Spear_Item_data_remainder[0x2F8] = {
	#include <ITCommonObject/dITCommonObject_Spear_Item_data_remainder.data.inc.c>
};

/* @ 0x0E2E0, 456 bytes */
u8 dITCommonObject_SpearSwarm_Weapon_mobjsubs[0x1C8] = {
	#include <ITCommonObject/SpearSwarm_Weapon_mobjsubs.data.inc.c>
};

/* @ 0x0E4A8, 184 bytes */
DObjDesc dITCommonObject_SpearSwarm_Weapon_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x395A38EE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xE558, 8 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_SpearSwarm_Weapon_data_remainder[0x8] = {
	#include <ITCommonObject/dITCommonObject_SpearSwarm_Weapon_data_remainder.data.inc.c>
};

/* @ 0x0E560, 1280 bytes */
u32 dITCommonObject_SpearSwarm_Weapon_matanimjoints[320] = {
	#include <ITCommonObject/SpearSwarm_Weapon_matanimjoints.data.inc.c>
};

/* @ 0x0EA60, 3168 bytes */
DObjDesc dITCommonObject_Kamex_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x3B6D3A5C, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xEAE4, 3036 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Kamex_Item_data_remainder[0xBDC] = {
	#include <ITCommonObject/dITCommonObject_Kamex_Item_data_remainder.data.inc.c>
};

/* @ 0x0F6C0, 792 bytes */
u8 dITCommonObject_KamexHydro_Weapon_mobjsubs[0x318] = {
	#include <ITCommonObject/KamexHydro_Weapon_mobjsubs.data.inc.c>
};

/* @ 0x0F9D8, 184 bytes */
DObjDesc dITCommonObject_KamexHydro_Weapon_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x3E8D3E12, { 4391.25f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 9.999999747378752e-06f, 1.0f } },
	{ 2, (void*)0x3EA53E48, { -4481.25f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xFA88, 8 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_KamexHydro_Weapon_data_remainder[0x8] = {
	#include <ITCommonObject/dITCommonObject_KamexHydro_Weapon_data_remainder.data.inc.c>
};

/* @ 0x0FA90, 224 bytes */
u32 dITCommonObject_KamexHydro_Weapon_animjoints[56] = {
	#include <ITCommonObject/KamexHydro_Weapon_animjoints.data.inc.c>
};

/* @ 0x0FB70, 1168 bytes */
u32 dITCommonObject_KamexHydro_Weapon_matanimjoints[292] = {
	#include <ITCommonObject/KamexHydro_Weapon_matanimjoints.data.inc.c>
};

/* @ 0x10000, 1184 bytes */
DObjDesc dITCommonObject_MLucky_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x402E3FC4, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x100B0, 1008 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_MLucky_Item_data_remainder[0x3F0] = {
	#include <ITCommonObject/dITCommonObject_MLucky_Item_data_remainder.data.inc.c>
};

/* @ 0x104A0, 176 bytes */
DObjDesc dITCommonObject_Egg_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x415640EC, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x10550, 2960 bytes */
u32 dITCommonObject_Egg_Item_animjoints[740] = {
	#include <ITCommonObject/Egg_Item_animjoints.data.inc.c>
};

/* @ 0x110E0, 448 bytes */
u8 dITCommonObject_Starmie_Item_mobjsubs[0x1C0] = {
	#include <ITCommonObject/Starmie_Item_mobjsubs.data.inc.c>
};

/* @ 0x112A0, 1848 bytes */
DObjDesc dITCommonObject_Starmie_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x44CD446C, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x11324, 1716 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Starmie_Item_data_remainder[0x6B4] = {
	#include <ITCommonObject/dITCommonObject_Starmie_Item_data_remainder.data.inc.c>
};

/* @ 0x119D8, 1384 bytes */
DObjDesc dITCommonObject_StarmieSwift_Weapon_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x47A94672, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x11A5C, 1252 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_StarmieSwift_Weapon_data_remainder[0x4E4] = {
	#include <ITCommonObject/dITCommonObject_StarmieSwift_Weapon_data_remainder.data.inc.c>
};

/* @ 0x11F40, 2272 bytes */
DObjDesc dITCommonObject_Sawamura_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x48E54794, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x11FC4, 2140 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Sawamura_Item_data_remainder[0x85C] = {
	#include <ITCommonObject/dITCommonObject_Sawamura_Item_data_remainder.data.inc.c>
};

/* @ 0x12820, 1880 bytes */
DObjDesc dITCommonObject_Dogas_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x4A3649CC, { 0.0f, -5.439370155334473f, 0.0f }, { 0.0f, 0.0f, 0.0866909995675087f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x128D0, 1704 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Dogas_Item_data_remainder[0x6A8] = {
	#include <ITCommonObject/dITCommonObject_Dogas_Item_data_remainder.data.inc.c>
};

/* @ 0x12F78, 392 bytes */
u8 dITCommonObject_DogasSmog_Weapon_mobjsubs[0x188] = {
	#include <ITCommonObject/DogasSmog_Weapon_mobjsubs.data.inc.c>
};

/* @ 0x13100, 144 bytes */
DObjDesc dITCommonObject_DogasSmog_Weapon_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x4C654C3C, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 5.5f, 5.5f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x13184, 12 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_DogasSmog_Weapon_data_remainder[0xC] = {
	#include <ITCommonObject/dITCommonObject_DogasSmog_Weapon_data_remainder.data.inc.c>
};

/* @ 0x13190, 80 bytes */
u32 dITCommonObject_DogasSmog_Weapon_animjoints[20] = {
	#include <ITCommonObject/DogasSmog_Weapon_animjoints.data.inc.c>
};

/* @ 0x131E0, 952 bytes */
u32 dITCommonObject_DogasSmog_Weapon_matanimjoints[238] = {
	#include <ITCommonObject/DogasSmog_Weapon_matanimjoints.data.inc.c>
};

/* @ 0x13598, 328 bytes */
DObjDesc dITCommonObject_Pippi_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x4D884D2C, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x1361C, 196 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Pippi_Item_data_remainder[0xC4] = {
	#include <ITCommonObject/dITCommonObject_Pippi_Item_data_remainder.data.inc.c>
};
