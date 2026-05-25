/* relocData file 262: GRSectorMap */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <wp/wptypes.h>  // WPAttributes
#include <sys/objdef.h>  // aobjEvent32* macros
#include <gm/gmsound.h>  // gmFGMVoiceID

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern u8 dStageSectorFile2_Tex_0x1C00[];
extern u32 dStageSectorFile3_AnimJoint_0x1C50[];

/* item_weights for dGRSectorMap_MapHeader_0x0014 below: one u8 randomizer
 * weight per common item kind (nITKindCommonStart..nITKindCommonEnd, 20 in
 * total). Several weights differ between US and JP. */
u8 dGRSectorMap_Arwing0_AnimJoint[20] = {
	0x3C, 0x64, 0x96, 0x00,
#if defined(REGION_JP)
	0x0A, 0x07, 0x06, 0x0F,
#else
	0x06, 0x03, 0x08, 0x14,
#endif
	0x05, 0x08, 0x05, 0x0F,
#if defined(REGION_JP)
	0x0A, 0x07, 0x14, 0x0A,
	0x0A, 0x05, 0x05, 0x12,
#else
	0x0B, 0x07, 0x15, 0x0C,
	0x0A, 0x0A, 0x04, 0x12,
#endif
};

/* MPGroundData (typed via tools/typeStageMap.py) */

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dStageSector_sprite_0x26C88[];
extern DObjDesc dStageSectorFile2_Layer0DObj[];
extern u32 dStageSectorFile2_Layer0Anim_AnimJoint[];
extern DObjDesc dStageSectorFile2_Layer1DObj[];
extern u32 dStageSectorFile2_Layer1Anim_AnimJoint[];
extern u32 dStageSectorFile2_MPGeometryData_0x8AD8[];
extern u32 dStageSectorFile2_gap_0x0000[];
MPGroundData dGRSectorMap_MapHeader_0x0014 =
{
    /* gr_desc[4] */
    {
        { dStageSectorFile2_Layer0DObj, dStageSectorFile2_Layer0Anim_AnimJoint, NULL, NULL },
        { dStageSectorFile2_Layer1DObj, dStageSectorFile2_Layer1Anim_AnimJoint, NULL, NULL },
        { NULL, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
    },
    dStageSectorFile2_MPGeometryData_0x8AD8,  /* map_geometry */
    3,  /* layer_mask */
    dStageSector_sprite_0x26C88,  /* wallpaper */
    { 0x00, 0x00, 0x32 },  /* fog_color */
    0x00,  /* fog_alpha */
    /* emblem_colors[4] */
    {
        { 0xFF, 0x80, 0x80 },
        { 0x80, 0x80, 0xFF },
        { 0xFF, 0xFF, 0x80 },
        { 0x80, 0xFF, 0x80 },
    },
    0xC8C8C800,  /* unused */
    { 0.0f, 90.0f, -0.17453294f },  /* light_angle */
    7500,  /* camera_bound_top */
    -1800,  /* camera_bound_bottom */
    10100,  /* camera_bound_right */
    -9800,  /* camera_bound_left */
    11000,  /* map_bound_top */
    -6500,  /* map_bound_bottom */
    14000,  /* map_bound_right */
    -14000,  /* map_bound_left */
    nSYAudioBGMSector,  /* bgm_id */
    dStageSectorFile2_gap_0x0000,  /* map_nodes */
    (MPItemWeights *)dGRSectorMap_Arwing0_AnimJoint,  /* item_weights */
    -2300,  /* alt_warning */
    7000,  /* camera_bound_team_top */
    -1500,  /* camera_bound_team_bottom */
    9800,  /* camera_bound_team_right */
    -9500,  /* camera_bound_team_left */
    11000,  /* map_bound_team_top */
    -6500,  /* map_bound_team_bottom */
    14000,  /* map_bound_team_right */
    -14000,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* WPAttributes @ 0xBC */
WPAttributes dGRSectorMap_ArwingLaser2D_WeaponAttributes = {
    (void *)dStageSectorFile3_AnimJoint_0x1C50,  /* data */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    28, 0, -28, 564,  /* map_coll top/center/bottom/width */
    300,  /* size */
    361,  /* angle            : 10 */
    75,  /* knockback_scale  : 10 */
    16,  /* damage           :  8 */
    0,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    5,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    0,  /* can_setoff       :  1 */
    nSYAudioFGMExplodeS,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    0,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    1,  /* can_hop          :  1 */
    1,  /* can_reflect      :  1 */
    1,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    70,  /* knockback_base   : 10 */
};

/* WPAttributes @ 0xF0 */
WPAttributes dGRSectorMap_ArwingLaser3D_WeaponAttributes = {
    (void *)dStageSectorFile3_AnimJoint_0x1C50,  /* data */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    28, 0, -28, 28,  /* map_coll top/center/bottom/width */
    300,  /* size */
    361,  /* angle            : 10 */
    100,  /* knockback_scale  : 10 */
    18,  /* damage           :  8 */
    1,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    2,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    0,  /* can_setoff       :  1 */
    nSYAudioFGMExplodeS,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    1,  /* can_rehit_item   :  1 */
    1,  /* can_rehit_fighter:  1 */
    0,  /* can_hop          :  1 */
    0,  /* can_reflect      :  1 */
    1,  /* can_absorb       :  1 */
    0,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    10,  /* knockback_base   : 10 */
};
PAD(12);

