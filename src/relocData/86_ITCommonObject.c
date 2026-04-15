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
u8 dITCommonObject_Capsule_Item_data[0x440] = {
	#include <ITCommonObject/Capsule_Item_data.data.inc.c>
};

/* @ 0x00AB0, 1704 bytes */
u8 dITCommonObject_Tomato_Item_data[0x6A8] = {
	#include <ITCommonObject/Tomato_Item_data.data.inc.c>
};

/* @ 0x01158, 352 bytes */
u8 dITCommonObject_Heart_Item_data[0x160] = {
	#include <ITCommonObject/Heart_Item_data.data.inc.c>
};

/* @ 0x012B8, 680 bytes */
u8 dITCommonObject_Star_Item_mobjsubs[0x2A8] = {
	#include <ITCommonObject/Star_Item_mobjsubs.data.inc.c>
};

/* @ 0x01560, 144 bytes */
u8 dITCommonObject_Star_Item_data[0x90] = {
	#include <ITCommonObject/Star_Item_data.data.inc.c>
};

/* @ 0x015F0, 808 bytes */
u8 dITCommonObject_Star_Item_matanimjoints[0x328] = {
	#include <ITCommonObject/Star_Item_matanimjoints.data.inc.c>
};

/* @ 0x01918, 1256 bytes */
u8 dITCommonObject_Sword_Item_data[0x4E8] = {
	#include <ITCommonObject/Sword_Item_data.data.inc.c>
};

/* @ 0x01E00, 920 bytes */
u8 dITCommonObject_Bat_Item_data[0x398] = {
	#include <ITCommonObject/Bat_Item_data.data.inc.c>
};

/* @ 0x02198, 1464 bytes */
u8 dITCommonObject_Harisen_Item_data[0x5B8] = {
	#include <ITCommonObject/Harisen_Item_data.data.inc.c>
};

/* @ 0x02750, 2784 bytes */
u8 dITCommonObject_Hammer_Item_data[0xAE0] = {
	#include <ITCommonObject/Hammer_Item_data.data.inc.c>
};

/* @ 0x03230, 456 bytes */
u8 dITCommonObject_BombHei_Item_mobjsubs[0x1C8] = {
	#include <ITCommonObject/BombHei_Item_mobjsubs.data.inc.c>
};

/* @ 0x033F8, 1448 bytes */
u8 dITCommonObject_BombHei_Item_data[0x5A8] = {
	#include <ITCommonObject/BombHei_Item_data.data.inc.c>
};

/* @ 0x039A0, 1456 bytes */
u8 dITCommonObject_MSBomb_Item_data[0x5B0] = {
	#include <ITCommonObject/MSBomb_Item_data.data.inc.c>
};

/* @ 0x03F50, 344 bytes */
u8 dITCommonObject_LGun_Item_data[0x158] = {
	#include <ITCommonObject/LGun_Item_data.data.inc.c>
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
u8 dITCommonObject_FFlower_Item_data[0xB0] = {
	#include <ITCommonObject/FFlower_Item_data.data.inc.c>
};

/* @ 0x04760, 1024 bytes */
u8 dITCommonObject_FFlower_Item_matanimjoints[0x400] = {
	#include <ITCommonObject/FFlower_Item_matanimjoints.data.inc.c>
};

/* @ 0x04B60, 2296 bytes */
u8 dITCommonObject_StarRod_Item_data[0x8F8] = {
	#include <ITCommonObject/StarRod_Item_data.data.inc.c>
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
u8 dITCommonObject_GShell_Item_data[0x7F0] = {
	#include <ITCommonObject/GShell_Item_data.data.inc.c>
};

/* @ 0x06778, 2608 bytes */
u8 dITCommonObject_Box_Item_data[0xA30] = {
	#include <ITCommonObject/Box_Item_data.data.inc.c>
};

/* @ 0x071A8, 736 bytes */
u8 dITCommonObject_Taru_Item_data[0x2E0] = {
	#include <ITCommonObject/Taru_Item_data.data.inc.c>
};

/* @ 0x07488, 448 bytes */
u8 dITCommonObject_NBumper_Item_mobjsubs[0x1C0] = {
	#include <ITCommonObject/NBumper_Item_mobjsubs.data.inc.c>
};

/* @ 0x07648, 6872 bytes */
u8 dITCommonObject_NBumper_Item_data[0x1AD8] = {
	#include <ITCommonObject/NBumper_Item_data.data.inc.c>
};

/* @ 0x09120, 784 bytes */
u8 dITCommonObject_MBall_Item_mobjsubs[0x310] = {
	#include <ITCommonObject/MBall_Item_mobjsubs.data.inc.c>
};

/* @ 0x09430, 3344 bytes */
u8 dITCommonObject_MBall_Item_data[0xD10] = {
	#include <ITCommonObject/MBall_Item_data.data.inc.c>
};

/* @ 0x0A140, 2192 bytes */
u8 dITCommonObject_Wark_Item_data[0x890] = {
	#include <ITCommonObject/Wark_Item_data.data.inc.c>
};

/* @ 0x0A9D0, 456 bytes */
u8 dITCommonObject_WarkRock_Weapon_mobjsubs[0x1C8] = {
	#include <ITCommonObject/WarkRock_Weapon_mobjsubs.data.inc.c>
};

/* @ 0x0AB98, 1472 bytes */
u8 dITCommonObject_WarkRock_Weapon_data[0x5C0] = {
	#include <ITCommonObject/WarkRock_Weapon_data.data.inc.c>
};

/* @ 0x0B158, 1000 bytes */
u8 dITCommonObject_Kabigon_Item_data[0x3E8] = {
	#include <ITCommonObject/Kabigon_Item_data.data.inc.c>
};

/* @ 0x0B540, 456 bytes */
u8 dITCommonObject_Tosakinto_Item_mobjsubs[0x1C8] = {
	#include <ITCommonObject/Tosakinto_Item_mobjsubs.data.inc.c>
};

/* @ 0x0B708, 1464 bytes */
u8 dITCommonObject_Tosakinto_Item_data[0x5B8] = {
	#include <ITCommonObject/Tosakinto_Item_data.data.inc.c>
};

/* @ 0x0BCC0, 1136 bytes */
u8 dITCommonObject_Mew_Item_data[0x470] = {
	#include <ITCommonObject/Mew_Item_data.data.inc.c>
};

/* @ 0x0C130, 1008 bytes */
u8 dITCommonObject_Nyars_Item_data[0x3F0] = {
	#include <ITCommonObject/Nyars_Item_data.data.inc.c>
};

/* @ 0x0C520, 3824 bytes */
u8 dITCommonObject_NyarsCoin_Weapon_data[0xEF0] = {
	#include <ITCommonObject/NyarsCoin_Weapon_data.data.inc.c>
};

/* @ 0x0D410, 432 bytes */
u8 dITCommonObject_Lizardon_Item_mobjsubs[0x1B0] = {
	#include <ITCommonObject/Lizardon_Item_mobjsubs.data.inc.c>
};

/* @ 0x0D5C0, 1968 bytes */
u8 dITCommonObject_Lizardon_Item_data[0x7B0] = {
	#include <ITCommonObject/Lizardon_Item_data.data.inc.c>
};

/* @ 0x0DD70, 456 bytes */
u8 dITCommonObject_Spear_Item_mobjsubs[0x1C8] = {
	#include <ITCommonObject/Spear_Item_mobjsubs.data.inc.c>
};

/* @ 0x0DF38, 936 bytes */
u8 dITCommonObject_Spear_Item_data[0x3A8] = {
	#include <ITCommonObject/Spear_Item_data.data.inc.c>
};

/* @ 0x0E2E0, 456 bytes */
u8 dITCommonObject_SpearSwarm_Weapon_mobjsubs[0x1C8] = {
	#include <ITCommonObject/SpearSwarm_Weapon_mobjsubs.data.inc.c>
};

/* @ 0x0E4A8, 184 bytes */
u8 dITCommonObject_SpearSwarm_Weapon_data[0xB8] = {
	#include <ITCommonObject/SpearSwarm_Weapon_data.data.inc.c>
};

/* @ 0x0E560, 1280 bytes */
u8 dITCommonObject_SpearSwarm_Weapon_matanimjoints[0x500] = {
	#include <ITCommonObject/SpearSwarm_Weapon_matanimjoints.data.inc.c>
};

/* @ 0x0EA60, 3168 bytes */
u8 dITCommonObject_Kamex_Item_data[0xC60] = {
	#include <ITCommonObject/Kamex_Item_data.data.inc.c>
};

/* @ 0x0F6C0, 792 bytes */
u8 dITCommonObject_KamexHydro_Weapon_mobjsubs[0x318] = {
	#include <ITCommonObject/KamexHydro_Weapon_mobjsubs.data.inc.c>
};

/* @ 0x0F9D8, 184 bytes */
u8 dITCommonObject_KamexHydro_Weapon_data[0xB8] = {
	#include <ITCommonObject/KamexHydro_Weapon_data.data.inc.c>
};

/* @ 0x0FA90, 224 bytes */
u8 dITCommonObject_KamexHydro_Weapon_animjoints[0xE0] = {
	#include <ITCommonObject/KamexHydro_Weapon_animjoints.data.inc.c>
};

/* @ 0x0FB70, 1168 bytes */
u8 dITCommonObject_KamexHydro_Weapon_matanimjoints[0x490] = {
	#include <ITCommonObject/KamexHydro_Weapon_matanimjoints.data.inc.c>
};

/* @ 0x10000, 1184 bytes */
u8 dITCommonObject_MLucky_Item_data[0x4A0] = {
	#include <ITCommonObject/MLucky_Item_data.data.inc.c>
};

/* @ 0x104A0, 176 bytes */
u8 dITCommonObject_Egg_Item_data[0xB0] = {
	#include <ITCommonObject/Egg_Item_data.data.inc.c>
};

/* @ 0x10550, 2960 bytes */
u8 dITCommonObject_Egg_Item_animjoints[0xB90] = {
	#include <ITCommonObject/Egg_Item_animjoints.data.inc.c>
};

/* @ 0x110E0, 448 bytes */
u8 dITCommonObject_Starmie_Item_mobjsubs[0x1C0] = {
	#include <ITCommonObject/Starmie_Item_mobjsubs.data.inc.c>
};

/* @ 0x112A0, 1848 bytes */
u8 dITCommonObject_Starmie_Item_data[0x738] = {
	#include <ITCommonObject/Starmie_Item_data.data.inc.c>
};

/* @ 0x119D8, 1384 bytes */
u8 dITCommonObject_StarmieSwift_Weapon_data[0x568] = {
	#include <ITCommonObject/StarmieSwift_Weapon_data.data.inc.c>
};

/* @ 0x11F40, 2272 bytes */
u8 dITCommonObject_Sawamura_Item_data[0x8E0] = {
	#include <ITCommonObject/Sawamura_Item_data.data.inc.c>
};

/* @ 0x12820, 1880 bytes */
u8 dITCommonObject_Dogas_Item_data[0x758] = {
	#include <ITCommonObject/Dogas_Item_data.data.inc.c>
};

/* @ 0x12F78, 392 bytes */
u8 dITCommonObject_DogasSmog_Weapon_mobjsubs[0x188] = {
	#include <ITCommonObject/DogasSmog_Weapon_mobjsubs.data.inc.c>
};

/* @ 0x13100, 144 bytes */
u8 dITCommonObject_DogasSmog_Weapon_data[0x90] = {
	#include <ITCommonObject/DogasSmog_Weapon_data.data.inc.c>
};

/* @ 0x13190, 80 bytes */
u8 dITCommonObject_DogasSmog_Weapon_animjoints[0x50] = {
	#include <ITCommonObject/DogasSmog_Weapon_animjoints.data.inc.c>
};

/* @ 0x131E0, 952 bytes */
u8 dITCommonObject_DogasSmog_Weapon_matanimjoints[0x3B8] = {
	#include <ITCommonObject/DogasSmog_Weapon_matanimjoints.data.inc.c>
};

/* @ 0x13598, 328 bytes */
u8 dITCommonObject_Pippi_Item_data[0x148] = {
	#include <ITCommonObject/Pippi_Item_data.data.inc.c>
};
