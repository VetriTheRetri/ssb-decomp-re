/* relocData file 262: GRSectorMap */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x0014 (20 bytes) */
u8 dGRSectorMap_Arwing0_AnimJoint[20] = {
	#include <GRSectorMap/Arwing0_AnimJoint.data.inc.c>
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
    dGRSectorMap_Arwing0_AnimJoint,  /* item_weights */
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

/* Raw data from file offset 0x00BC to 0x00F0 (52 bytes) */
u8 dGRSectorMap_ArwingLaser2D_WeaponAttributes[52] = {
	#include <GRSectorMap/ArwingLaser2D_WeaponAttributes.data.inc.c>
};

/* Raw data from file offset 0x00F0 to 0x0130 (64 bytes) */
u8 dGRSectorMap_ArwingLaser3D_WeaponAttributes[64] = {
	#include <GRSectorMap/ArwingLaser3D_WeaponAttributes.data.inc.c>
};

