/* relocData file 295: GRBonus3Map */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <it/ittypes.h>  // ITAttributes
#include <gm/gmsound.h>  // gmFGMVoiceID

/* MPGroundData (typed via tools/typeStageMap.py) */

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern DObjDesc dGRBonus3File2_Layer0DObj[];
extern DObjDesc dGRBonus3File2_Layer1DObj[];
extern MObjSub dGRBonus3File2_Layer1MObj_MObjSub[];
extern u32 dGRBonus3File2_Layer1MatAnim_MatAnimJoint[];
extern u32 dGRBonus3File2_MPGeometryData_0x65A8[];
extern u32 dGRBonus3File2_gap_0x0000[];
extern u32 dGRBonus3File3_AnimJoint_0x0788[];
MPGroundData dGRBonus3Map_gap_0x0000 =
{
    /* gr_desc[4] */
    {
        { dGRBonus3File2_Layer0DObj, NULL, NULL, NULL },
        { dGRBonus3File2_Layer1DObj, NULL, dGRBonus3File2_Layer1MObj_MObjSub, dGRBonus3File2_Layer1MatAnim_MatAnimJoint },
        { NULL, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
    },
    dGRBonus3File2_MPGeometryData_0x65A8,  /* map_geometry */
    2,  /* layer_mask */
    NULL,  /* wallpaper */
    { 0x00, 0x00, 0x00 },  /* fog_color */
    0x00,  /* fog_alpha */
    /* emblem_colors[4] */
    {
        { 0xFF, 0xA0, 0xA0 },
        { 0xB4, 0xB4, 0xFF },
        { 0xE6, 0xE6, 0x78 },
        { 0xA0, 0xFF, 0xA0 },
    },
    0xDCDCDC00,  /* unused */
    { 0.0f, -60.0f, -0.17453294f },  /* light_angle */
    7500,  /* camera_bound_top */
    -7500,  /* camera_bound_bottom */
    7500,  /* camera_bound_right */
    -7500,  /* camera_bound_left */
    8000,  /* map_bound_top */
    -8000,  /* map_bound_bottom */
    8000,  /* map_bound_right */
    -8000,  /* map_bound_left */
    nSYAudioBGM1PBonusStage,  /* bgm_id */
    dGRBonus3File2_gap_0x0000,  /* map_nodes */
    NULL,  /* item_weights */
    -32768,  /* alt_warning */
    7500,  /* camera_bound_team_top */
    -7500,  /* camera_bound_team_bottom */
    7500,  /* camera_bound_team_right */
    -7500,  /* camera_bound_team_left */
    8000,  /* map_bound_team_top */
    -8000,  /* map_bound_team_bottom */
    8000,  /* map_bound_team_right */
    -8000,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 0 },  /* zoom_end */
};

/* ITAttributes @ 0xA8 */
ITAttributes dGRBonus3Map_TaruBomb_ItemAttributes[1] = {{
	(void *)dGRBonus3File3_AnimJoint_0x0788,  /* data */
	NULL,  /* p_mobjsubs */
	NULL,  /* anim_joints */
	NULL,  /* p_matanim_joints */
	1, 0, 0, 1, 0,  /* xlu,dobjs,colanim,hitlag,weight */
	0, 0, 0,  /* attack_offset0 x/y/z */
	0, 0, 0,  /* attack_offset1 x/y/z */
	{ 0, 0, 0 },  /* damage_coll_offset */
	{ 294, 316, 294 },  /* damage_coll_size */
	236, 0, -236, 221,  /* map_coll top/center/bottom/width */
	290,  /* size */
	70,  /* angle */
	20,  /* ks */
	10,  /* dmg */
	0,  /* elem */
	0,  /* kw */
	0,  /* sd */
	1,  /* ac */
	1,  /* cso */
	nSYAudioFGMPunchL,  /* hit_sfx */
	1,  /* pri */
	0,  /* cri */
	0,  /* crf */
	0,  /* hop */
	1,  /* refl */
	1,  /* shield */
	90,  /* kb */
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

/* ITAttackEvent[4] @ 0xF0 */
ITAttackEvent dGRBonus3Map_TaruBomb_AttackEvents[4] = {
	{ 0, 361, 16, 350 },
	{ 2, 361, 11, 250 },
	{ 4, 361, 8, 150 },
	{ 6, 361, 1, 0 },
};

