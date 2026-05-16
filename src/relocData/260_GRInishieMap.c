/* relocData file 260: GRInishieMap */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <it/ittypes.h>  // ITAttributes
#include <gr/grtypes.h>  // GRAttackColl
#include <gm/gmsound.h>  // gmFGMVoiceID

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern u8 dStageInishieFile2_Tex_0x02E0[];
extern u8 dStageInishieFile2_Tex_0x12E8[];
extern u32 dStageInishieFile3_AnimJoint_0x0A68[];
extern u32 dStageInishieFile3_AnimJoint_0x0C30[];
extern u32 dStageInishieFile3_AnimJoint_0x11F8[];
extern u32 dStageInishieFile3_AnimJoint_0x13B0[];

/* Item-randomizer weights — referenced by header.item_weights */
#if defined(REGION_JP)
MPItemWeights dGRInishieMap_item_weights = { { 0x50, 0x28, 0x78, 0x00, 0x0A, 0x07, 0x0A, 0x0A, 0x05, 0x0A, 0x0A, 0x08, 0x14, 0x12, 0x0A, 0x0E, 0x0A, 0x05, 0x05, 0x12 } };
#else
MPItemWeights dGRInishieMap_item_weights = { { 0x50, 0x28, 0x78, 0x00, 0x0A, 0x05, 0x0A, 0x0A, 0x05, 0x08, 0x08, 0x07, 0x14, 0x12, 0x08, 0x0E, 0x06, 0x19, 0x0A, 0x12 } };
#endif

/* MPGroundData (typed via tools/typeStageMap.py) */

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dStageInishieBackground_0x26c88[];
extern DObjDesc dStageInishieFile2_Layer0DObj[];
extern u32 dStageInishieFile2_Layer0Anim_AnimJoint[];
extern MObjSub dStageInishieFile2_Layer0MObj_MObjSub[];
extern u32 dStageInishieFile2_Layer0MatAnim_MatAnimJoint[];
extern DObjDesc dStageInishieFile2_Layer1DObj[];
extern DObjDesc dStageInishieFile2_Layer2DObj[];
extern DObjDesc dStageInishieFile2_Layer3DObj[];
extern u32 dStageInishieFile2_MPGeometryData_0x6698[];
extern u32 dStageInishieFile2_gap_0x0000[];
MPGroundData dGRInishieMap_MapHeader_0x0014 =
{
    /* gr_desc[4] */
    {
        { dStageInishieFile2_Layer0DObj, dStageInishieFile2_Layer0Anim_AnimJoint, dStageInishieFile2_Layer0MObj_MObjSub, dStageInishieFile2_Layer0MatAnim_MatAnimJoint },
        { dStageInishieFile2_Layer1DObj, NULL, NULL, NULL },
        { dStageInishieFile2_Layer2DObj, NULL, NULL, NULL },
        { dStageInishieFile2_Layer3DObj, NULL, NULL, NULL },
    },
    dStageInishieFile2_MPGeometryData_0x6698,  /* map_geometry */
    1,  /* layer_mask */
    dStageInishieBackground_0x26c88,  /* wallpaper */
    { 0x71, 0x88, 0xB8 },  /* fog_color */
    0x00,  /* fog_alpha */
    /* emblem_colors[4] */
    {
        { 0xFF, 0xA0, 0xA0 },
        { 0xB4, 0xB4, 0xFF },
        { 0xE6, 0xE6, 0x78 },
        { 0xA0, 0xFF, 0xA0 },
    },
    0xDCDCDC00,  /* unused */
    { 20.0f, 45.0f, -0.17453294f },  /* light_angle */
    3000,  /* camera_bound_top */
    -1000,  /* camera_bound_bottom */
    3400,  /* camera_bound_right */
    -3400,  /* camera_bound_left */
    9000,  /* map_bound_top */
    -4350,  /* map_bound_bottom */
    7400,  /* map_bound_right */
    -7400,  /* map_bound_left */
    nSYAudioBGMInishie,  /* bgm_id */
    (void *)((u8 *)dStageInishieFile2_gap_0x0000 + 0x5F0),  /* map_nodes */
    &dGRInishieMap_item_weights,  /* item_weights */
    -2200,  /* alt_warning */
    3000,  /* camera_bound_team_top */
    -1000,  /* camera_bound_team_bottom */
    4500,  /* camera_bound_team_right */
    -4500,  /* camera_bound_team_left */
    9000,  /* map_bound_team_top */
    -4350,  /* map_bound_team_bottom */
    4500,  /* map_bound_team_right */
    -4500,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* GRAttackColl @ 0xBC — POW-block hazard hit params; read by grinishie.c
 * via llGRInishieMapPowerBlockGRAttackColl. */
GRAttackColl dGRInishieMap_PowerBlock_GRAttackColl = { 1, 20, 90, 130, 0, 30, 0 };

/* ITAttributes @ 0xD8 */
ITAttributes dGRInishieMap_PowerBlock_ItemAttributes[1] = {{
	(void *)dStageInishieFile3_AnimJoint_0x11F8,  /* data */
	NULL,  /* p_mobjsubs */
	(void *)dStageInishieFile3_AnimJoint_0x13B0,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu,dobjs,colanim,hitlag,weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 400, 300, 300 },  /* damage_coll_size */
	110, 0, -110, 159,  /* map_coll top/center/bottom/width */
	10,  /* size */
	361,  /* angle */
	100,  /* ks */
	5,  /* dmg */
	0,  /* elem */
	0,  /* kw */
	0,  /* sd */
	1,  /* ac */
	1,  /* cso */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* pri */
	1,  /* cri */
	0,  /* crf */
	1,  /* hop */
	0,  /* refl */
	1,  /* shield */
	20,  /* kb */
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

/* ITAttributes @ 0x120 */
ITAttributes dGRInishieMap_Pakkun_ItemAttributes[1] = {{
	(void *)dStageInishieFile3_AnimJoint_0x0C30,  /* data */
	(void *)dStageInishieFile3_AnimJoint_0x0A68,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	0, 0, 0, 1, 1,  /* xlu,dobjs,colanim,hitlag,weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 450, 490, 450 },  /* damage_coll_size */
	110, 0, -110, 159,  /* map_coll top/center/bottom/width */
	200,  /* size */
	80,  /* angle */
	80,  /* ks */
	5,  /* dmg */
	0,  /* elem */
	0,  /* kw */
	0,  /* sd */
	1,  /* ac */
	1,  /* cso */
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
PAD(8);

