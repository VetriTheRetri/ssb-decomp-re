/* relocData file 251: ITCommonData
 *
 * Common-item attribute + weapon-attribute pool.
 *
 * Inlined block layout - edit this file directly. The .inc.c files
 * referenced below live under build/src/relocData/ and are regenerated
 * from the baserom by tools/extractRelocInc.py at extract time. */

#include "relocdata_types.h"
#include <macros.h>
#include <it/ittypes.h>
#include <wp/wptypes.h>

/* External symbols from ITCommonObject (file 86) */
extern u8 dITCommonObject_Bat_Item_data_DObjDesc[];
extern u8 dITCommonObject_BombHei_Item_data_DObjDesc[];
extern u8 dITCommonObject_BombHei_Item_mobjsubs_gap_0x3230[];
extern u8 dITCommonObject_Box_Item_data_DObjDesc[];
extern u8 dITCommonObject_Capsule_Item_data_DObjDesc[];
extern u8 dITCommonObject_DogasSmog_Weapon_animjoints[];
extern u8 dITCommonObject_DogasSmog_Weapon_data_DObjDesc[];
extern u8 dITCommonObject_DogasSmog_Weapon_matanimjoints[];
extern u8 dITCommonObject_DogasSmog_Weapon_mobjsubs[];
extern u8 dITCommonObject_Dogas_Item_data_DObjDesc[];
extern u8 dITCommonObject_Egg_Item_animjoints[];
extern u8 dITCommonObject_Egg_Item_data_DObjDesc[];
extern u8 dITCommonObject_FFlower_Item_data_DObjDesc[];
extern u8 dITCommonObject_FFlower_Item_matanimjoints[];
extern u8 dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388[];
extern u8 dITCommonObject_GShell_Item_data_DObjDesc[];
extern u8 dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0[];
extern u8 dITCommonObject_Hammer_Item_data_DObjDesc[];
extern u8 dITCommonObject_Harisen_Item_data_DObjDesc[];
extern u8 dITCommonObject_Heart_Item_data_DObjDesc[];
extern u8 dITCommonObject_Kabigon_Item_data_DObjDesc[];
extern u8 dITCommonObject_KamexHydro_Weapon_animjoints[];
extern u8 dITCommonObject_KamexHydro_Weapon_data_DObjDesc[];
extern u8 dITCommonObject_KamexHydro_Weapon_matanimjoints[];
extern u8 dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0[];
extern u8 dITCommonObject_Kamex_Item_data_DObjDesc[];
extern u8 dITCommonObject_LGunAmmo_Weapon_data[];
extern u8 dITCommonObject_LGun_Item_data_DObjDesc[];
extern u8 dITCommonObject_Lizardon_Item_data_DObjDesc[];
extern u8 dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410[];
extern u8 dITCommonObject_MBall_Item_data_DObjDesc[];
extern u8 dITCommonObject_MBall_Item_mobjsubs_gap_0x9120[];
extern u8 dITCommonObject_MLucky_Item_data_DObjDesc[];
extern u8 dITCommonObject_MSBomb_Item_data_DObjDesc[];
extern u8 dITCommonObject_Mew_Item_data_DObjDesc[];
extern u8 dITCommonObject_NBumper_Item_data_DObjDesc[];
extern u8 dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488[];
extern u8 dITCommonObject_NyarsCoin_Weapon_data_DObjDesc[];
extern u8 dITCommonObject_Sawamura_Item_data_DObjDesc[];
extern u8 dITCommonObject_Nyars_Item_data_DObjDesc[];
extern u8 dITCommonObject_Pippi_Item_data_DObjDesc[];
extern u8 dITCommonObject_SpearSwarm_Weapon_data_DObjDesc[];
extern u8 dITCommonObject_SpearSwarm_Weapon_matanimjoints[];
extern u8 dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0[];
extern u8 dITCommonObject_Spear_Item_data_DObjDesc[];
extern u8 dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70[];
extern u8 dITCommonObject_StarRod_Item_data_DObjDesc[];
extern u8 dITCommonObject_StarRod_Weapon_data[];
extern u8 dITCommonObject_Star_Item_data_DObjDesc[];
extern u8 dITCommonObject_Star_Item_matanimjoints[];
extern u8 dITCommonObject_Star_Item_mobjsubs_gap_0x12B8[];
extern u8 dITCommonObject_StarmieSwift_Weapon_data_DObjDesc[];
extern u8 dITCommonObject_Starmie_Item_data_DObjDesc[];
extern u8 dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0[];
extern u8 dITCommonObject_Sword_Item_data_DObjDesc[];
extern u8 dITCommonObject_Taru_Item_data_DObjDesc[];
extern u8 dITCommonObject_Tomato_Item_data_DObjDesc[];
extern u8 dITCommonObject_Tosakinto_Item_data_DObjDesc[];
extern u8 dITCommonObject_Tosakinto_Item_mobjsubs_gap_0xB540[];
extern u8 dITCommonObject_WarkRock_Weapon_data_DObjDesc[];
extern u8 dITCommonObject_WarkRock_Weapon_mobjsubs_gap_0xA9D0[];
extern u8 dITCommonObject_Wark_Item_data_DObjDesc[];

f32 dITCommonData_Container_VelocitiesY[20] = {
	26.0f, 26.0f, 26.0f, 26.0f, 26.0f, 26.0f, 26.0f, 40.0f,
	26.0f, 26.0f, 26.0f, 26.0f, 26.0f, 26.0f, 26.0f, 26.0f,
	26.0f, 26.0f, 26.0f, 26.0f,
};

/* ItemAttributes @ 0x0050 — Capsule */
ITAttributes dITCommonData_Capsule_ItemAttributes[1] = {{
	(void *)dITCommonObject_Capsule_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	120, 0, -100, 60,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	5,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	20,  /* knockback_base */
	3,  /* type */
	1,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	80,  /* vel_scale */
	120,  /* spin_speed */
}};

/* Raw data from file offset 0x0098 to 0x00B8 (32 bytes) */
ITAttackEvent dITCommonData_Capsule_AttackEvents[4] = {
	{ 0, 361, 30, 350 },
	{ 2, 361, 30, 250 },
	{ 4, 361, 20, 150 },
	{ 6, 361, 1, 0 },
};

/* ItemAttributes @ 0x00B8 — Tomato */
ITAttributes dITCommonData_Tomato_ItemAttributes[1] = {{
	(void *)dITCommonObject_Tomato_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	180, 0, -180, 180,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	100,  /* knockback_scale */
	1,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchS,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	0,  /* knockback_base */
	5,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	100,  /* spin_speed */
}};

/* ItemAttributes @ 0x0100 — Heart */
ITAttributes dITCommonData_Heart_ItemAttributes[1] = {{
	(void *)dITCommonObject_Heart_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	1, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	165, 0, -165, 180,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	100,  /* knockback_scale */
	1,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchS,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	0,  /* knockback_base */
	5,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* ItemAttributes @ 0x0148 — Star */
ITAttributes dITCommonData_Star_ItemAttributes[1] = {{
	(void *)dITCommonObject_Star_Item_data_DObjDesc,  /* data */
	(MObjSub ***)dITCommonObject_Star_Item_mobjsubs_gap_0x12B8,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	(AObjEvent32 ***)dITCommonObject_Star_Item_matanimjoints,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	30, 0, -30, 30,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	100,  /* knockback_scale */
	1,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	0,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	0,  /* can_shield */
	0,  /* knockback_base */
	4,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* ItemAttributes @ 0x0190 — Sword */
ITAttributes dITCommonData_Sword_ItemAttributes[1] = {{
	(void *)dITCommonObject_Sword_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	1, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 700, 150 },  /* damage_coll_size */
	422, 0, -422, 72,  /* map_coll top/center/bottom/width */
	300,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	10,  /* damage */
	3,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMSlashL,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	1,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	100,  /* spin_speed */
}};

/* ItemAttributes @ 0x01D8 — Bat */
ITAttributes dITCommonData_Bat_ItemAttributes[1] = {{
	(void *)dITCommonObject_Bat_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	240, 0, -240, 27,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	12,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	1,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	110,  /* vel_scale */
	100,  /* spin_speed */
}};

/* ItemAttributes @ 0x0220 — Harisen */
ITAttributes dITCommonData_Harisen_ItemAttributes[1] = {{
	(void *)dITCommonObject_Harisen_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	210, 0, -210, 90,  /* map_coll top/center/bottom/width */
	200,  /* size */
	96,  /* angle */
	100,  /* knockback_scale */
	1,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMHarisenHit,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	70,  /* knockback_base */
	1,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	70,  /* vel_scale */
	50,  /* spin_speed */
}};

/* ItemAttributes @ 0x0268 — LGun */
ITAttributes dITCommonData_LGun_ItemAttributes[1] = {{
	(void *)dITCommonObject_LGun_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 60, 60, 60 },  /* damage_coll_size */
	100, 0, -100, 100,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	110,  /* knockback_scale */
	2,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMKickM,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	10,  /* knockback_base */
	2,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	140,  /* spin_speed */
}};

/* WPAttributes @ 0x02B0 */
WPAttributes dITCommonData_LGunAmmo_WeaponAttributes = {
    (void *)dITCommonObject_LGunAmmo_Weapon_data,  /* data */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { -5, 0, 0 } },  /* attack_offsets */
    10, 0, -10, 10,  /* map_coll top/center/bottom/width */
    120,  /* size */
    70,  /* angle            : 10 */
    40,  /* knockback_scale  : 10 */
    10,  /* damage           :  8 */
    2,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    -8,  /* shield_damage    :  8 */
    2,  /* attack_count     :  2 */
    0,  /* can_setoff       :  1 */
    2,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    0,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    1,  /* can_hop          :  1 */
    1,  /* can_reflect      :  1 */
    1,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    50,  /* knockback_base   : 10 */
};

/* ItemAttributes @ 0x02E4 — FFlower */
ITAttributes dITCommonData_FFlower_ItemAttributes[1] = {{
	(void *)dITCommonObject_FFlower_Item_data_DObjDesc,  /* data */
	(MObjSub ***)dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	(AObjEvent32 ***)dITCommonObject_FFlower_Item_matanimjoints,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 60, 60, 60 },  /* damage_coll_size */
	127, 0, -107, 107,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	100,  /* knockback_scale */
	2,  /* damage */
	1,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMBurnM,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	30,  /* knockback_base */
	2,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	80,  /* vel_scale */
	0,  /* spin_speed */
}};

/* WPAttributes @ 0x032C */
WPAttributes dITCommonData_FFlowerFlame_WeaponAttributes = {
    NULL,  /* data (chain-encoded — fixRelocChain patches if .reloc has entry) */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    50, 0, -50, 50,  /* map_coll top/center/bottom/width */
    270,  /* size */
    0,  /* angle            : 10 */
    100,  /* knockback_scale  : 10 */
    3,  /* damage           :  8 */
    1,  /* element          :  4 */
    3,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    0,  /* can_setoff       :  1 */
    28,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    1,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    0,  /* can_hop          :  1 */
    1,  /* can_reflect      :  1 */
    1,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    0,  /* knockback_base   : 10 */
};

f32 dITCommonData_FFlowerFlame_Angles[5] = {
	F_CST_DTOR32(-15.0F),
	F_CST_DTOR32(-7.5F),
	F_CST_DTOR32(0.0F),
	F_CST_DTOR32(7.5F),
	F_CST_DTOR32(15.0F),
};

/* ItemAttributes @ 0x0374 — Hammer */
ITAttributes dITCommonData_Hammer_ItemAttributes[1] = {{
	(void *)dITCommonObject_Hammer_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 1, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	258, 0, -249, 105,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	100,  /* knockback_scale */
	10,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchS,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	30,  /* knockback_base */
	5,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* ItemAttributes @ 0x03BC — MSBomb */
ITAttributes dITCommonData_MSBomb_ItemAttributes[1] = {{
	(void *)dITCommonObject_MSBomb_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	60, 0, -60, 60,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	100,  /* knockback_scale */
	5,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchS,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	10,  /* knockback_base */
	3,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	90,  /* vel_scale */
	120,  /* spin_speed */
}};

/* Raw data from file offset 0x0404 to 0x0424 (32 bytes) */
ITAttackEvent dITCommonData_MSBomb_AttackEvents[4] = {
	{ 0, 361, 30, 360 },
	{ 4, 361, 30, 300 },
	{ 8, 361, 20, 200 },
	{ 16, 361, 1, 0 },
};

/* ItemAttributes @ 0x0424 — BombHei */
ITAttributes dITCommonData_BombHei_ItemAttributes[1] = {{
	(void *)dITCommonObject_BombHei_Item_data_DObjDesc,  /* data */
	(MObjSub ***)dITCommonObject_BombHei_Item_mobjsubs_gap_0x3230,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 1, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	150, 0, -150, 150,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	100,  /* knockback_scale */
	1,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMExplodeL,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	30,  /* knockback_base */
	3,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* Raw data from file offset 0x046C to 0x048C (32 bytes) */
ITAttackEvent dITCommonData_BombHei_AttackEvents[4] = {
	{ 0, 361, 30, 350 },
	{ 2, 361, 30, 250 },
	{ 4, 361, 20, 150 },
	{ 6, 361, 1, 0 },
};

/* ItemAttributes @ 0x048C — StarRod */
ITAttributes dITCommonData_StarRod_ItemAttributes[1] = {{
	(void *)dITCommonObject_StarRod_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 60, 60, 60 },  /* damage_coll_size */
	195, 0, -195, 90,  /* map_coll top/center/bottom/width */
	200,  /* size */
	0,  /* angle */
	70,  /* knockback_scale */
	6,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	20,  /* knockback_base */
	1,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	110,  /* spin_speed */
}};

/* WPAttributes @ 0x04D4 */
WPAttributes dITCommonData_StarRod_WeaponAttributes = {
    (void *)dITCommonObject_StarRod_Weapon_data,  /* data */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    10, -10, -10, 10,  /* map_coll top/center/bottom/width */
    200,  /* size */
    361,  /* angle            : 10 */
    100,  /* knockback_scale  : 10 */
    8,  /* damage           :  8 */
    0,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    nSYAudioFGMPunchM,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    0,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    1,  /* can_hop          :  1 */
    1,  /* can_reflect      :  1 */
    1,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    10,  /* knockback_base   : 10 */
};

/* WPAttributes @ 0x0508 */
WPAttributes dITCommonData_StarRodSmash_WeaponAttributes = {
    (void *)dITCommonObject_StarRod_Weapon_data,  /* data */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    10, -10, -10, 10,  /* map_coll top/center/bottom/width */
    200,  /* size */
    361,  /* angle            : 10 */
    100,  /* knockback_scale  : 10 */
    12,  /* damage           :  8 */
    0,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    nSYAudioFGMPunchL,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    0,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    1,  /* can_hop          :  1 */
    1,  /* can_reflect      :  1 */
    1,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    10,  /* knockback_base   : 10 */
};

/* ItemAttributes @ 0x053C — GShell */
ITAttributes dITCommonData_GShell_ItemAttributes[1] = {{
	(void *)dITCommonObject_GShell_Item_data_DObjDesc,  /* data */
	(MObjSub ***)dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	150, 0, -150, 150,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	18,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	0,  /* can_setoff */
	nSYAudioFGMShellHit,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	3,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* ItemAttributes @ 0x0584 — RShell */
ITAttributes dITCommonData_RShell_ItemAttributes[1] = {{
	(void *)dITCommonObject_GShell_Item_data_DObjDesc,  /* data */
	(MObjSub ***)dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	150, 0, -150, 150,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	10,  /* damage */
	0,  /* element */
	90,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	0,  /* can_setoff */
	nSYAudioFGMShellHit,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	1,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	3,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* ItemAttributes @ 0x05CC — Box */
ITAttributes dITCommonData_Box_ItemAttributes[1] = {{
	(void *)dITCommonObject_Box_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 0,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 450, 450, 450 },  /* damage_coll_size */
	225, 0, -225, 225,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	100,  /* knockback_scale */
	15,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	0,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	40,  /* knockback_base */
	0,  /* type */
	1,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	40,  /* spin_speed */
}};

/* Raw data from file offset 0x0614 to 0x0634 (32 bytes) */
ITAttackEvent dITCommonData_Box_AttackEvents[4] = {
	{ 0, 361, 20, 350 },
	{ 4, 361, 15, 250 },
	{ 6, 361, 10, 150 },
	{ 8, 361, 1, 0 },
};

/* ItemAttributes @ 0x0634 — Taru */
ITAttributes dITCommonData_Taru_ItemAttributes[1] = {{
	(void *)dITCommonObject_Taru_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 0,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 294, 316, 294 },  /* damage_coll_size */
	236, 0, -236, 221,  /* map_coll top/center/bottom/width */
	290,  /* size */
	361,  /* angle */
	100,  /* knockback_scale */
	12,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	0,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	40,  /* knockback_base */
	0,  /* type */
	1,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* Raw data from file offset 0x067C to 0x069C (32 bytes) */
ITAttackEvent dITCommonData_Taru_AttackEvents[4] = {
	{ 0, 361, 20, 350 },
	{ 4, 361, 15, 250 },
	{ 6, 361, 10, 150 },
	{ 8, 361, 1, 0 },
};

/* ItemAttributes @ 0x069C — NBumper */
ITAttributes dITCommonData_NBumper_ItemAttributes[1] = {{
	(void *)dITCommonObject_NBumper_Item_data_DObjDesc,  /* data */
	(MObjSub ***)dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	180, 0, -180, 180,  /* map_coll top/center/bottom/width */
	200,  /* size */
	362,  /* angle */
	50,  /* knockback_scale */
	1,  /* damage */
	0,  /* element */
	250,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	0,  /* can_setoff */
	nSYAudioFGMBumperHit,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	1,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	0,  /* knockback_base */
	3,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	70,  /* spin_speed */
}};

/* ItemAttributes @ 0x06E4 — MBall */
ITAttributes dITCommonData_MBall_ItemAttributes[1] = {{
	(void *)dITCommonObject_MBall_Item_data_DObjDesc,  /* data */
	(MObjSub ***)dITCommonObject_MBall_Item_mobjsubs_gap_0x9120,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 1, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	109, 0, -109, 164,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	12,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	3,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	80,  /* vel_scale */
	20,  /* spin_speed */
}};

/* ItemAttributes @ 0x072C — Wark */
ITAttributes dITCommonData_Wark_ItemAttributes[1] = {{
	(void *)dITCommonObject_Wark_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	324, 0, -324, 459,  /* map_coll top/center/bottom/width */
	600,  /* size */
	90,  /* angle */
	100,  /* knockback_scale */
	21,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	0,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	6,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* WPAttributes @ 0x0774 */
WPAttributes dITCommonData_WarkRock_WeaponAttributes = {
    (void *)dITCommonObject_WarkRock_Weapon_data_DObjDesc,  /* data */
    (MObjSub ***)dITCommonObject_WarkRock_Weapon_mobjsubs_gap_0xA9D0,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    210, 0, -210, 210,  /* map_coll top/center/bottom/width */
    360,  /* size */
    80,  /* angle            : 10 */
    80,  /* knockback_scale  : 10 */
    8,  /* damage           :  8 */
    0,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    2,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    1,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    1,  /* can_hop          :  1 */
    0,  /* can_reflect      :  1 */
    0,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    30,  /* knockback_base   : 10 */
};

/* ItemAttributes @ 0x07A8 — Kabigon */
ITAttributes dITCommonData_Kabigon_ItemAttributes[1] = {{
	(void *)dITCommonObject_Kabigon_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 1, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 580, 580, 780 },  /* damage_coll_size */
	585, 0, -585, 780,  /* map_coll top/center/bottom/width */
	800,  /* size */
	361,  /* angle */
	70,  /* knockback_scale */
	22,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	0,  /* can_setoff */
	nSYAudioFGMExplodeL,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	6,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* ItemAttributes @ 0x07F0 — Tosakinto */
ITAttributes dITCommonData_Tosakinto_ItemAttributes[1] = {{
	(void *)dITCommonObject_Tosakinto_Item_data_DObjDesc,  /* data */
	(MObjSub ***)dITCommonObject_Tosakinto_Item_mobjsubs_gap_0xB540,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	135, 0, -135, 195,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	12,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	1,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	6,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* ItemAttributes @ 0x0838 — Mew */
ITAttributes dITCommonData_Mew_ItemAttributes[1] = {{
	(void *)dITCommonObject_Mew_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 1, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	218, 0, -218, 218,  /* map_coll top/center/bottom/width */
	300,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	12,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	1,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	6,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* ItemAttributes @ 0x0880 — Nyars */
ITAttributes dITCommonData_Nyars_ItemAttributes[1] = {{
	(void *)dITCommonObject_Nyars_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	244, 0, -244, 244,  /* map_coll top/center/bottom/width */
	300,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	12,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	0,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	1,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	6,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* WPAttributes @ 0x08C8 */
WPAttributes dITCommonData_NyarsCoin_WeaponAttributes = {
    (void *)dITCommonObject_NyarsCoin_Weapon_data_DObjDesc,  /* data */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    113, 0, -113, 94,  /* map_coll top/center/bottom/width */
    200,  /* size */
    90,  /* angle            : 10 */
    60,  /* knockback_scale  : 10 */
    6,  /* damage           :  8 */
    4,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    2,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    nSYAudioFGMMarioSpecialHiCoin,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    0,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    1,  /* can_hop          :  1 */
    1,  /* can_reflect      :  1 */
    1,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    30,  /* knockback_base   : 10 */
};

/* ItemAttributes @ 0x08FC — Lizardon */
ITAttributes dITCommonData_Lizardon_ItemAttributes[1] = {{
	(void *)dITCommonObject_Lizardon_Item_data_DObjDesc,  /* data */
	(MObjSub ***)dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	400, 0, -390, 420,  /* map_coll top/center/bottom/width */
	600,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	18,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	0,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	1,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	6,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* WPAttributes @ 0x0944 — LizardonFlame (52 bytes) + 20 trailing bytes
 * holding a 5-float radian-angle spread pattern (-15°, -7.5°, 0°, 7.5°, 15°)
 * the engine uses to fan out individual flame projectiles. */
WPAttributes dITCommonData_LizardonFlame_WeaponAttributes = {
    NULL,  /* data (chain-encoded — fixRelocChain patches if .reloc has entry) */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    4, 0, -4, 4,  /* map_coll top/center/bottom/width */
    320,  /* size */
    0,  /* angle            : 10 */
    100,  /* knockback_scale  : 10 */
    4,  /* damage           :  8 */
    1,  /* element          :  4 */
    8,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    0,  /* can_setoff       :  1 */
    28,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    1,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    0,  /* can_hop          :  1 */
    1,  /* can_reflect      :  1 */
    1,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    0,  /* knockback_base   : 10 */
};

/* @ 0x0978 — flame spread angles (radians) */
f32 dITCommonData_LizardonFlame_AngleSpread[5] = {
    -0.2617993950843811f, -0.13089969754219055f, 0.0f,
    0.13089969754219055f, 0.2617993950843811f,
};

/* ItemAttributes @ 0x098C — Spear */
ITAttributes dITCommonData_Spear_ItemAttributes[1] = {{
	(void *)dITCommonObject_Spear_Item_data_DObjDesc,  /* data */
	(MObjSub ***)dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	244, 0, -244, 244,  /* map_coll top/center/bottom/width */
	300,  /* size */
	90,  /* angle */
	100,  /* knockback_scale */
	18,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	0,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	6,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* WPAttributes @ 0x09D4 */
WPAttributes dITCommonData_SpearSwarm_WeaponAttributes = {
    (void *)dITCommonObject_SpearSwarm_Weapon_data_DObjDesc,  /* data */
    (MObjSub ***)dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    (AObjEvent32 ***)dITCommonObject_SpearSwarm_Weapon_matanimjoints,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    244, 0, -244, 244,  /* map_coll top/center/bottom/width */
    300,  /* size */
    80,  /* angle            : 10 */
    100,  /* knockback_scale  : 10 */
    12,  /* damage           :  8 */
    0,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    2,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    1,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    0,  /* can_hop          :  1 */
    0,  /* can_reflect      :  1 */
    0,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    40,  /* knockback_base   : 10 */
};

/* ItemAttributes @ 0x0A08 — Kamex */
ITAttributes dITCommonData_Kamex_ItemAttributes[1] = {{
	(void *)dITCommonObject_Kamex_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	317, 0, -300, 300,  /* map_coll top/center/bottom/width */
#if defined(REGION_JP)
	400, 361, 60, 13, 0,  /* size, angle(JP), ks, dmg, elem */
#else
	400, 130, 60, 13, 0,  /* size, angle(US), ks, dmg, elem */
#endif
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	0,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	1,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	6,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* WPAttributes @ 0x0A50 */
WPAttributes dITCommonData_KamexHydro_WeaponAttributes = {
    (void *)dITCommonObject_KamexHydro_Weapon_data_DObjDesc,  /* data */
    (MObjSub ***)dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0,  /* p_mobjsubs */
    (AObjEvent32 **)dITCommonObject_KamexHydro_Weapon_animjoints,  /* anim_joints */
    (AObjEvent32 ***)dITCommonObject_KamexHydro_Weapon_matanimjoints,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    213, 0, -213, 180,  /* map_coll top/center/bottom/width */
#if defined(REGION_JP)
    400,  /* size */
    20,  /* angle            : 10 */
    100,  /* knockback_scale  : 10 */
#else
    200,  /* size */
    0,  /* angle            : 10 */
    30,  /* knockback_scale  : 10 */
#endif
    6,  /* damage           :  8 */
    0,  /* element          :  4 */
#if defined(REGION_JP)
    40,  /* knockback_weight : 10 */
#else
    0,  /* knockback_weight : 10 */
#endif
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    2,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    1,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    0,  /* can_hop          :  1 */
    0,  /* can_reflect      :  1 */
    0,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
#if defined(REGION_JP)
    0,  /* knockback_base   : 10 */
#else
    78,  /* knockback_base   : 10 */
#endif
};

/* ItemAttributes @ 0x0A84 — MLucky */
ITAttributes dITCommonData_MLucky_ItemAttributes[1] = {{
	(void *)dITCommonObject_MLucky_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 250, 250, 250 },  /* damage_coll_size */
	300, 0, -200, 240,  /* map_coll top/center/bottom/width */
	500,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	12,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	1,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	6,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* ItemAttributes @ 0x0ACC — Egg */
ITAttributes dITCommonData_Egg_ItemAttributes[1] = {{
	(void *)dITCommonObject_Egg_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	(AObjEvent32 **)dITCommonObject_Egg_Item_animjoints,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	200, 0, -140, 280,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	3,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	1,  /* can_hop */
	1,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	3,  /* type */
	1,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	100,  /* spin_speed */
}};

/* Raw data from file offset 0x0B14 to 0x0B34 (32 bytes) */
ITAttackEvent dITCommonData_Egg_AttackEvents[4] = {
	{ 0, 361, 30, 350 },
	{ 4, 361, 30, 250 },
	{ 6, 361, 20, 150 },
	{ 8, 361, 1, 0 },
};

/* ItemAttributes @ 0x0B34 — Starmie */
ITAttributes dITCommonData_Starmie_ItemAttributes[1] = {{
	(void *)dITCommonObject_Starmie_Item_data_DObjDesc,  /* data */
	(MObjSub ***)dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	300, 0, -220, 300,  /* map_coll top/center/bottom/width */
	400,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	12,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	0,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	1,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	6,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* WPAttributes @ 0x0B7C */
WPAttributes dITCommonData_StarmieSwift_WeaponAttributes = {
    (void *)dITCommonObject_StarmieSwift_Weapon_data_DObjDesc,  /* data */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    113, 0, -113, 309,  /* map_coll top/center/bottom/width */
    200,  /* size */
    100,  /* angle            : 10 */
    20,  /* knockback_scale  : 10 */
    3,  /* damage           :  8 */
    0,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    nSYAudioFGMKickM,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    0,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    1,  /* can_hop          :  1 */
    1,  /* can_reflect      :  1 */
    1,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    40,  /* knockback_base   : 10 */
};

/* ItemAttributes @ 0x0BB0 — Sawamura */
ITAttributes dITCommonData_Sawamura_ItemAttributes[1] = {{
	(void *)dITCommonObject_Sawamura_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	317, 0, -317, 195,  /* map_coll top/center/bottom/width */
	300, /* size */
	90,  /* angle */
	100, /* knockback_scale */
	24,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	30, /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	0,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	0,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	20,  /* knockback_base */
	6,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* ItemAttributes @ 0x0BF8 — Dogas */
ITAttributes dITCommonData_Dogas_ItemAttributes[1] = {{
	(void *)dITCommonObject_Dogas_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	240, 0, -240, 240,  /* map_coll top/center/bottom/width */
	50,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	12,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	0,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	1,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	6,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* WPAttributes @ 0x0C40 */
WPAttributes dITCommonData_DogasSmog_WeaponAttributes = {
    (void *)dITCommonObject_DogasSmog_Weapon_data_DObjDesc,  /* data */
    (MObjSub ***)dITCommonObject_DogasSmog_Weapon_mobjsubs,  /* p_mobjsubs */
    (AObjEvent32 **)dITCommonObject_DogasSmog_Weapon_animjoints,  /* anim_joints */
    (AObjEvent32 ***)dITCommonObject_DogasSmog_Weapon_matanimjoints,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    75, 0, -75, 75,  /* map_coll top/center/bottom/width */
    50,  /* size */
    150,  /* angle            : 10 */
    100,  /* knockback_scale  : 10 */
    3,  /* damage           :  8 */
    0,  /* element          :  4 */
    60,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    2,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    1,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    0,  /* can_hop          :  1 */
    0,  /* can_reflect      :  1 */
    0,  /* can_absorb       :  1 */
    0,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    0,  /* knockback_base   : 10 */
};

/* ItemAttributes @ 0x0C74 — Pippi */
ITAttributes dITCommonData_Pippi_ItemAttributes[1] = {{
	(void *)dITCommonObject_Pippi_Item_data_DObjDesc,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	192, 0, -192, 192,  /* map_coll top/center/bottom/width */
	300,  /* size */
	361,  /* angle */
	80,  /* knockback_scale */
	12,  /* damage */
	0,  /* element */
	0,  /* knockback_weight */
	0,  /* shield_damage (IDO bug: always 0 in static init) */
	1,  /* attack_count */
	1,  /* can_setoff */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* priority */
	1,  /* can_rehit_item */
	1,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	60,  /* knockback_base */
	6,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};

/* WPAttributes @ 0x0CBC */
WPAttributes dITCommonData_PippiSwarm_WeaponAttributes = {
    (void *)dITCommonObject_Pippi_Item_data_DObjDesc,  /* data */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    192, 0, -192, 192,  /* map_coll top/center/bottom/width */
    200,  /* size */
    80,  /* angle            : 10 */
    100,  /* knockback_scale  : 10 */
    12,  /* damage           :  8 */
    0,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    2,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    1,  /* can_rehit_item   :  1 */
    1,  /* can_rehit_fighter:  1 */
    0,  /* can_hop          :  1 */
    0,  /* can_reflect      :  1 */
    0,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    40,  /* knockback_base   : 10 */
};

ITAttributes dITCommonData_GBumper_ItemAttributes[1] = {{
	(void *)dITCommonObject_NBumper_Item_data_DObjDesc,  /* data */
	(MObjSub ***)dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 1, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	180, 0, -180, 180,  /* map_coll top/center/bottom/width */
	250,  /* size */
	362,  /* angle */
	50,  /* knockback_scale */
	1,  /* damage */
	0,  /* element */
	200,  /* knockback_weight */
	0,  /* shield_damage */
	1,  /* attack_count */
	0,  /* can_setoff */
	nSYAudioFGMBumperHit,  /* hit_sfx */
	1,  /* priority */
	0,  /* can_rehit_item */
	1,  /* can_rehit_fighter */
	0,  /* can_hop */
	0,  /* can_reflect */
	1,  /* can_shield */
	0,  /* knockback_base */
	3,  /* type */
	0,  /* hitstatus */
	0,  /* unk_atca_0x3C_b6 */
	0,  /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow,  /* drop_sfx */
	nSYAudioFGMItemThrow,  /* throw_sfx */
	nSYAudioFGMItemThrow,  /* smash_sfx */
	100,  /* vel_scale */
	0,  /* spin_speed */
}};
