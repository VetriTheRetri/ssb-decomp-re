/* relocData file 251: ITCommonData
 *
 * Common-item attribute + weapon-attribute pool. Every `*_ItemAttributes`
 * block is a 72-byte ITAttributes (see src/it/ittypes.h) and every
 * `*_WeaponAttributes` block is a 52-byte WPAttributes (see src/wp/wptypes.h).
 * Both struct definitions now use `u32 size : 16` (not `u16 size`) so that
 * future work can promote any of these u8 blobs to typed initializers —
 * see the comment above struct ITAttributes for the verified IDO bitfield
 * layout (Vec3h damage_coll_* at 0x1E/0x24, map_coll at 0x2A, size :16 at
 * 0x32, then packed bitfield tail at 0x34+).
 *
 * Inlined block layout - edit this file directly. The .inc.c files
 * referenced below live under build/src/relocData/ and are regenerated
 * from the baserom by tools/extractRelocInc.py at extract time. */

#include "relocdata_types.h"
#include <it/ittypes.h>
#include <wp/wptypes.h>

/* Raw data from file offset 0x0000 to 0x0050 (80 bytes) */
u8 dITCommonData_Container_VelocitiesY[80] = {
	#include <ITCommonData/Container_VelocitiesY.data.inc.c>
};

/* ItemAttributes @ 0x0050 — Capsule */
ITAttributes dITCommonData_Capsule_ItemAttributes[1] = {{
	(void *)0x002E019C,  /* data (chain) */
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
u32 dITCommonData_Capsule_AttackEvents[8] = {
	#include <ITCommonData/Capsule_AttackEvents.data.inc.c>
};

/* ItemAttributes @ 0x00B8 — Tomato */
ITAttributes dITCommonData_Tomato_ItemAttributes[1] = {{
	(void *)0x004002AC,  /* data (chain) */
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
	(void *)0x00520456,  /* data (chain) */
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
	(void *)0x00530558,  /* data (chain) */
	(MObjSub ***)0x005504AE,  /* p_mobjsubs (chain) */
	NULL,  /* anim_joints */
	(AObjEvent32 ***)0x0064057C,  /* p_matanim_joints (chain) */
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
	(void *)0x00760646,  /* data (chain) */
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
	(void *)0x00880780,  /* data (chain) */
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
	(void *)0x009A0866,  /* data (chain) */
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
	(void *)0x00AC0FD4,  /* data (chain) */
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
    (void *)0x00B9102A,  /* data (chain) */
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
	(void *)0x00BA11AC,  /* data (chain) */
	(MObjSub ***)0x00BC10E2,  /* p_mobjsubs (chain) */
	NULL,  /* anim_joints */
	(AObjEvent32 ***)0x00DD11D8,  /* p_matanim_joints (chain) */
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

/* Raw data from file offset 0x0360 to 0x0374 (20 bytes) */
u8 dITCommonData_FFlowerFlame_Angles[20] = {
	#include <ITCommonData/FFlowerFlame_Angles.data.inc.c>
};

/* ItemAttributes @ 0x0374 — Hammer */
ITAttributes dITCommonData_Hammer_ItemAttributes[1] = {{
	(void *)0x00EF09D4,  /* data (chain) */
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
	(void *)0x01090E68,  /* data (chain) */
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
u32 dITCommonData_MSBomb_AttackEvents[8] = {
	#include <ITCommonData/MSBomb_AttackEvents.data.inc.c>
};

/* ItemAttributes @ 0x0424 — BombHei */
ITAttributes dITCommonData_BombHei_ItemAttributes[1] = {{
	(void *)0x010A0CFE,  /* data (chain) */
	(MObjSub ***)0x01230C8C,  /* p_mobjsubs (chain) */
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
u32 dITCommonData_BombHei_AttackEvents[8] = {
	#include <ITCommonData/BombHei_AttackEvents.data.inc.c>
};

/* ItemAttributes @ 0x048C — StarRod */
ITAttributes dITCommonData_StarRod_ItemAttributes[1] = {{
	(void *)0x013512D8,  /* data (chain) */
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
    (void *)0x01421516,  /* data (chain) */
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
    (void *)0x014F1516,  /* data (chain) */
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
	(void *)0x015017E2,  /* data (chain) */
	(MObjSub ***)0x01611778,  /* p_mobjsubs (chain) */
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
	(void *)0x016217E2,  /* data (chain) */
	(MObjSub ***)0x01731778,  /* p_mobjsubs (chain) */
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
	(void *)0x018D19DE,  /* data (chain) */
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
u32 dITCommonData_Box_AttackEvents[8] = {
	#include <ITCommonData/Box_AttackEvents.data.inc.c>
};

/* ItemAttributes @ 0x0634 — Taru */
ITAttributes dITCommonData_Taru_ItemAttributes[1] = {{
	(void *)0x01A71C6A,  /* data (chain) */
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
u32 dITCommonData_Taru_AttackEvents[8] = {
	#include <ITCommonData/Taru_AttackEvents.data.inc.c>
};

/* ItemAttributes @ 0x069C — NBumper */
ITAttributes dITCommonData_NBumper_ItemAttributes[1] = {{
	(void *)0x01A81D92,  /* data (chain) */
	(MObjSub ***)0x01B91D22,  /* p_mobjsubs (chain) */
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
	(void *)0x01BA250C,  /* data (chain) */
	(MObjSub ***)0x01CB2448,  /* p_mobjsubs (chain) */
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
	(void *)0x01DD2850,  /* data (chain) */
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
    (void *)0x01DE2AE6,  /* data (chain) */
    (MObjSub ***)0x01EA2A74,  /* p_mobjsubs (chain) */
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
	(void *)0x01FC2C56,  /* data (chain) */
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
	(void *)0x01FD2DC2,  /* data (chain) */
	(MObjSub ***)0x020E2D50,  /* p_mobjsubs (chain) */
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
	(void *)0x02202F30,  /* data (chain) */
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
	(void *)0x0232304C,  /* data (chain) */
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
    (void *)0x023F3148,  /* data (chain) */
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
	(void *)0x02403570,  /* data (chain) */
	(MObjSub ***)0x02633504,  /* p_mobjsubs (chain) */
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
	(void *)0x026437CE,  /* data (chain) */
	(MObjSub ***)0x0275375C,  /* p_mobjsubs (chain) */
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
    (void *)0x0276392A,  /* data (chain) */
    (MObjSub ***)0x027838B8,  /* p_mobjsubs (chain) */
    NULL,  /* anim_joints */
    (AObjEvent32 ***)0x02823958,  /* p_matanim_joints (chain) */
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
	(void *)0x02943A98,  /* data (chain) */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu, dobjs, colanim, hitlag, weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 150, 150, 150 },  /* damage_coll_size */
	317, 0, -300, 300,  /* map_coll top/center/bottom/width */
	400,  /* size */
	130,  /* angle */
	60,  /* knockback_scale */
	13,  /* damage */
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

/* WPAttributes @ 0x0A50 */
WPAttributes dITCommonData_KamexHydro_WeaponAttributes = {
    (void *)0x02953E76,  /* data (chain) */
    (MObjSub ***)0x02963DB0,  /* p_mobjsubs (chain) */
    (AObjEvent32 **)0x02973EA4,  /* anim_joints (chain) */
    (AObjEvent32 ***)0x02A13EDC,  /* p_matanim_joints (chain) */
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
	(void *)0x02B34000,  /* data (chain) */
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
	(void *)0x02B54128,  /* data (chain) */
	NULL,  /* p_mobjsubs */
	(AObjEvent32 **)0x02CD4154,  /* anim_joints (chain) */
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
u32 dITCommonData_Egg_AttackEvents[8] = {
	#include <ITCommonData/Egg_AttackEvents.data.inc.c>
};

/* ItemAttributes @ 0x0B34 — Starmie */
ITAttributes dITCommonData_Starmie_ItemAttributes[1] = {{
	(void *)0x02CE44A8,  /* data (chain) */
	(MObjSub ***)0x02DF4438,  /* p_mobjsubs (chain) */
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
    (void *)0x02EC4676,  /* data (chain) */
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
/* NOTE: kept as u8 blob because shield_damage=30 but IDO s32:8 in the
 * second bitfield run always compiles to 0 in static initializers.
 * Changing s32 to u32 fixes the initializer but breaks runtime codegen.
 * The typed form would be:
 *
 * ITAttributes dITCommonData_Sawamura_ItemAttributes[1] = {{
 *     (void *)0x02FE47D0, NULL, NULL, NULL,
 *     0, 0, 0, 1, 1,
 *     0, 0, 0, 0, 0, 0,
 *     { 0, 0, 0 }, { 150, 150, 150 },
 *     317, 0, -317, 195,
 *     300,
 *     90, 100, 24, 0,
 *     0, 30, 1, 0,
 *     nSYAudioFGMPunchL, 1, 1, 0,
 *     0, 0, 1,
 *     20, 6, 0, 0, 0,
 *     nSYAudioFGMItemMapCollide, nSYAudioFGMItemMapCollide, nSYAudioFGMItemMapCollide,
 *     100, 0,
 * }};
 */
u8 dITCommonData_Sawamura_ItemAttributes[72] = {
	#include <ITCommonData/Sawamura_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0BF8 — Dogas */
ITAttributes dITCommonData_Dogas_ItemAttributes[1] = {{
	(void *)0x03104A08,  /* data (chain) */
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
    (void *)0x03114C40,  /* data (chain) */
    (MObjSub ***)0x03124BDE,  /* p_mobjsubs (chain) */
    (AObjEvent32 **)0x03134C64,  /* anim_joints (chain) */
    (AObjEvent32 ***)0x031D4C78,  /* p_matanim_joints (chain) */
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
	(void *)0x032F4D66,  /* data (chain) */
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
    (void *)0x033C4D66,  /* data (chain) */
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

/* Raw data from file offset 0x0CF0 to 0x0D40 (80 bytes) */
u8 dITCommonData_GBumper_ItemAttributes[80] = {
	#include <ITCommonData/GBumper_ItemAttributes.data.inc.c>
};

