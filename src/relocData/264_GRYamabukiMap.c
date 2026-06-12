/* relocData file 264: GRYamabukiMap */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <it/ittypes.h>  // ITAttributes
#include <wp/wptypes.h>  // WPAttributes
#include <gm/gmsound.h>  // gmFGMVoiceID

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern u8 dStageYamabukiFile2_Tex_0x28F0[];
extern u8 dStageYamabukiFile2_Tex_0x1BA0[];
extern u8 dStageYamabukiFile2_Tex_0x2360[];
extern u8 dStageYamabukiFile2_Tex_0x0460[];
extern u32 dStageYamabukiFile3_DObjDesc_0x0360[];
extern u32 dStageYamabukiFile3_mobjlink_0x03F0[];
extern u32 dStageYamabukiFile3_DObjDesc_0x0790[];
extern u32 dStageYamabukiFile3_mobjlink_0x0820[];
extern u32 dStageYamabukiFile3_DObjDesc_0x0EA0[];
extern u32 dStageYamabukiFile3_mobjlink_0x0F30[];
extern u32 dStageYamabukiFile3_mobjlink_0x17D0[];
extern u32 dStageYamabukiFile3_DObjDesc_0x1990[];
extern u32 dStageYamabukiFile3_mobjlink_0x1A20[];
extern u32 dStageYamabukiFile3_mobjlink_0x2180[];
extern u32 dStageYamabukiFile3_DObjDesc_0x2340[];
extern u32 dStageYamabukiFile3_mobjlink_0x23D0[];
extern u32 dStageYamabukiFile3_DObjDesc_0x2A50[];
extern DObjDesc dStageYamabukiFile4_DObjDesc_0x08A0[];

/* Item-randomizer weights — referenced by header.item_weights */
#if defined(REGION_JP)
MPItemWeights dGRYamabukiMap_item_weights = { { 0x5A, 0x28, 0x50, 0x00, 0x0A, 0x07, 0x06, 0x0A, 0x05, 0x0A, 0x0A, 0x0D, 0x0A, 0x07, 0x0F, 0x0A, 0x0A, 0x05, 0x05, 0x28 } };
#else
MPItemWeights dGRYamabukiMap_item_weights = { { 0x64, 0x28, 0x50, 0x00, 0x0C, 0x06, 0x08, 0x0A, 0x08, 0x0C, 0x09, 0x0D, 0x0A, 0x0A, 0x11, 0x0A, 0x12, 0x04, 0x08, 0x28 } };
#endif

/* MPGroundData (typed via tools/typeStageMap.py) */

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dStagePokemon_sprite_0x26C88[];
extern DObjDesc dStageYamabukiFile2_Layer0DObj[];
extern u32 dStageYamabukiFile2_Layer0Anim_AnimJoint[];
extern DObjDesc dStageYamabukiFile2_Layer1DObj[];
extern u32 dStageYamabukiFile2_Layer1Anim_AnimJoint[];
extern MObjSub dStageYamabukiFile2_Layer1MObj_MObjSub[];
extern u32 dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint[];
extern DObjDesc dStageYamabukiFile2_Layer3DObj[];
extern u32 dStageYamabukiFile2_MPGeometryData_0x6E8C[];
MPGroundData dGRYamabukiMap_ItemHead_0x0014 =
{
    /* gr_desc[4] */
    {
        { dStageYamabukiFile2_Layer0DObj, dStageYamabukiFile2_Layer0Anim_AnimJoint, NULL, NULL },
        { dStageYamabukiFile2_Layer1DObj, dStageYamabukiFile2_Layer1Anim_AnimJoint, dStageYamabukiFile2_Layer1MObj_MObjSub, dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint },
        { NULL, NULL, NULL, NULL },
        { dStageYamabukiFile2_Layer3DObj, NULL, NULL, NULL },
    },
    dStageYamabukiFile2_MPGeometryData_0x6E8C,  /* map_geometry */
    10,  /* layer_mask */
    dStagePokemon_sprite_0x26C88,  /* wallpaper */
    { 0xCD, 0xE6, 0xFF },  /* fog_color */
    0x00,  /* fog_alpha */
    /* emblem_colors[4] */
    {
        { 0xFF, 0xA0, 0xA0 },
        { 0xA0, 0xA0, 0xFF },
        { 0xF0, 0xF0, 0x64 },
        { 0xAA, 0xFF, 0xAA },
    },
    0xDCDCDC00,  /* unused */
    { 20.0f, 45.0f, -0.27925268f },  /* light_angle */
    5000,  /* camera_bound_top */
    -2500,  /* camera_bound_bottom */
    5700,  /* camera_bound_right */
    -5700,  /* camera_bound_left */
    9000,  /* map_bound_top */
    -6000,  /* map_bound_bottom */
    10000,  /* map_bound_right */
    -10000,  /* map_bound_left */
    nSYAudioBGMYamabuki,  /* bgm_id */
    (void *)dStageYamabukiFile4_DObjDesc_0x08A0,  /* map_nodes */
    &dGRYamabukiMap_item_weights,  /* item_weights */
    -2900,  /* alt_warning */
    5000,  /* camera_bound_team_top */
    -2500,  /* camera_bound_team_bottom */
    5300,  /* camera_bound_team_right */
    -5300,  /* camera_bound_team_left */
    9000,  /* map_bound_team_top */
    -5700,  /* map_bound_team_bottom */
    9700,  /* map_bound_team_right */
    -9700,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* ITAttributes @ 0xBC */
ITAttributes dGRYamabukiMap_GLucky_ItemAttributes[1] = {{
	(void *)dStageYamabukiFile3_DObjDesc_0x0360,  /* data */
	NULL,  /* p_mobjsubs */
	(void *)dStageYamabukiFile3_mobjlink_0x03F0,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 1, 0, 1, 1,  /* xlu,dobjs,colanim,hitlag,weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 390, 360, 360 },  /* damage_coll_size */
	180, 0, -180, 195,  /* map_coll top/center/bottom/width */
	300,  /* size */
	361,  /* angle */
	100,  /* ks */
	5,  /* dmg */
	0,  /* elem */
	0,  /* kw */
	0,  /* sd */
	1,  /* ac */
	0,  /* cso */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* pri */
	0,  /* cri */
	0,  /* crf */
	0,  /* hop */
	0,  /* refl */
	0,  /* shield */
	20,  /* kb */
	4,  /* type */
	1,  /* hitstatus */
	0,  /* b6 */
	0,  /* b7 */
	nSYAudioFGMItemThrow,  /* drop */
	nSYAudioFGMItemThrow,  /* throw */
	nSYAudioFGMItemThrow,  /* smash */
	100,  /* vel */
	0,  /* spin */
}};

/* ITAttributes @ 0x104 */
ITAttributes dGRYamabukiMap_Marumine_ItemAttributes[1] = {{
	(void *)dStageYamabukiFile3_DObjDesc_0x0790,  /* data */
	NULL,  /* p_mobjsubs */
	(void *)dStageYamabukiFile3_mobjlink_0x0820,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu,dobjs,colanim,hitlag,weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 390, 360, 360 },  /* damage_coll_size */
	225, 0, -225, 248,  /* map_coll top/center/bottom/width */
	400,  /* size */
	361,  /* angle */
	100,  /* ks */
	10,  /* dmg */
	1,  /* elem */
	0,  /* kw */
	0,  /* sd */
	1,  /* ac */
	0,  /* cso */
	nSYAudioFGMBurnM,  /* hit_sfx */
	1,  /* pri */
	1,  /* cri */
	1,  /* crf */
	0,  /* hop */
	0,  /* refl */
	1,  /* shield */
	40,  /* kb */
	6,  /* type */
	0,  /* hitstatus */
	0,  /* b6 */
	0,  /* b7 */
	nSYAudioFGMItemThrow,  /* drop */
	nSYAudioFGMItemThrow,  /* throw */
	nSYAudioFGMItemThrow,  /* smash */
	100,  /* vel */
	0,  /* spin */
}};

/* ITAttackEvent[4] @ 0x14C */
ITAttackEvent dGRYamabukiMap_Marumine_AttackEvents[4] = {
	{ 0, 361, 30, 700 },
	{ 2, 361, 30, 350 },
	{ 4, 361, 20, 300 },
	{ 6, 361, 10, 200 },
};

/* ITAttributes @ 0x16C */
ITAttributes dGRYamabukiMap_Porygon_ItemAttributes[1] = {{
	(void *)dStageYamabukiFile3_DObjDesc_0x0EA0,  /* data */
	NULL,  /* p_mobjsubs */
	(void *)dStageYamabukiFile3_mobjlink_0x0F30,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 1, 0, 1, 1,  /* xlu,dobjs,colanim,hitlag,weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 390, 360, 360 },  /* damage_coll_size */
	300, 0, -300, 360,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	40,  /* ks */
	16,  /* dmg */
	0,  /* elem */
	0,  /* kw */
	0,  /* sd */
	1,  /* ac */
	0,  /* cso */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* pri */
	1,  /* cri */
	1,  /* crf */
	0,  /* hop */
	0,  /* refl */
	1,  /* shield */
	80,  /* kb */
	6,  /* type */
	1,  /* hitstatus */
	0,  /* b6 */
	0,  /* b7 */
	nSYAudioFGMItemThrow,  /* drop */
	nSYAudioFGMItemThrow,  /* throw */
	nSYAudioFGMItemThrow,  /* smash */
	100,  /* vel */
	0,  /* spin */
}};

/* ITMonsterEvent[2] @ 0x1B4 */
ITMonsterEvent dGRYamabukiMap_Porygon_HitParties[2] = {
	{ 0, 40, 18, 300, 40, 0, 70, 0, 0, 0, nSYAudioFGMPunchL },
	{ 8, 40, 8, 300, 70, 0, 40, 0, 0, 0, nSYAudioFGMPunchL },
};

/* ITAttributes @ 0x1FC */
ITAttributes dGRYamabukiMap_Hitokage_ItemAttributes[1] = {{
	(void *)dStageYamabukiFile3_DObjDesc_0x1990,  /* data */
	(void *)dStageYamabukiFile3_mobjlink_0x17D0,  /* p_mobjsubs */
	(void *)dStageYamabukiFile3_mobjlink_0x1A20,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 1, 0, 1, 1,  /* xlu,dobjs,colanim,hitlag,weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 200, 200, 200 },  /* damage_coll_size */
	252, 0, -252, 273,  /* map_coll top/center/bottom/width */
	340,  /* size */
	361,  /* angle */
	100,  /* ks */
	5,  /* dmg */
	0,  /* elem */
	0,  /* kw */
	0,  /* sd */
	1,  /* ac */
	0,  /* cso */
	nSYAudioFGMBurnM,  /* hit_sfx */
	1,  /* pri */
	1,  /* cri */
	1,  /* crf */
	0,  /* hop */
	0,  /* refl */
	1,  /* shield */
	20,  /* kb */
	6,  /* type */
	1,  /* hitstatus */
	0,  /* b6 */
	0,  /* b7 */
	nSYAudioFGMItemThrow,  /* drop */
	nSYAudioFGMItemThrow,  /* throw */
	nSYAudioFGMItemThrow,  /* smash */
	100,  /* vel */
	0,  /* spin */
}};

/* WPAttributes @ 0x244 */
WPAttributes dGRYamabukiMap_HitokageFlame_WeaponAttributes = {
    NULL,  /* data (chain-encoded — fixRelocChain patches if .reloc has entry) */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    50, 0, -50, 50,  /* map_coll top/center/bottom/width */
    320,  /* size */
    0,  /* angle            : 10 */
    100,  /* knockback_scale  : 10 */
    2,  /* damage           :  8 */
    1,  /* element          :  4 */
    3,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    0,  /* can_setoff       :  1 */
    nSYAudioFGMBurnS,  /* sfx              : 10 */
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

/* ITAttributes @ 0x278 */
ITAttributes dGRYamabukiMap_Fushigibana_ItemAttributes[1] = {{
	(void *)dStageYamabukiFile3_DObjDesc_0x2340,  /* data */
	(void *)dStageYamabukiFile3_mobjlink_0x2180,  /* p_mobjsubs */
	(void *)dStageYamabukiFile3_mobjlink_0x23D0,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 1, 0, 1, 1,  /* xlu,dobjs,colanim,hitlag,weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 200, 200, 200 },  /* damage_coll_size */
	360, 0, -360, 510,  /* map_coll top/center/bottom/width */
	200,  /* size */
	361,  /* angle */
	100,  /* ks */
	5,  /* dmg */
	0,  /* elem */
	0,  /* kw */
	0,  /* sd */
	1,  /* ac */
	0,  /* cso */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* pri */
	1,  /* cri */
	1,  /* crf */
	0,  /* hop */
	0,  /* refl */
	1,  /* shield */
	20,  /* kb */
	6,  /* type */
	1,  /* hitstatus */
	0,  /* b6 */
	0,  /* b7 */
	nSYAudioFGMItemThrow,  /* drop */
	nSYAudioFGMItemThrow,  /* throw */
	nSYAudioFGMItemThrow,  /* smash */
	100,  /* vel */
	0,  /* spin */
}};

/* ITMonsterEvent[2] @ 0x2C0 */
ITMonsterEvent dGRYamabukiMap_Fushigibana_HitParties[2] = {
	{ 0, 40, 20, 300, 100, 90, 0, 0, 0, 0, nSYAudioFGMPunchL },
	{ 8, 361, 8, 300, 70, 0, 30, 0, 0, 0, nSYAudioFGMPunchL },
};

/* WPAttributes @ 0x308 */
WPAttributes dGRYamabukiMap_FushigibanaRazor_WeaponAttributes = {
    (void *)dStageYamabukiFile3_DObjDesc_0x2A50,  /* data */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    120, 0, -120, 360,  /* map_coll top/center/bottom/width */
    200,  /* size */
    90,  /* angle            : 10 */
    60,  /* knockback_scale  : 10 */
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
    30,  /* knockback_base   : 10 */
};
