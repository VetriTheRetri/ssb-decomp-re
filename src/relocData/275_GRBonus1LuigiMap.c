/* MPGroundData for relocData file 275 (GRBonus1LuigiMap) */
/* File size: 176 bytes (0xB0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dBonus1CommonBackground_0x26c88[];

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern DObjDesc dGRBonus1LuigiFile2_Layer0DObj[];
extern DObjDesc dGRBonus1LuigiFile2_Layer1DObj[];
extern u32 dGRBonus1LuigiFile2_Layer1Anim_AnimJoint[];
extern u32 dGRBonus1LuigiFile2_MPGeometryData_0x1F38[];

MPGroundData dGRBonus1LuigiMap_header =
{
    /* gr_desc[4] */
    {
        { dGRBonus1LuigiFile2_Layer0DObj, NULL, NULL, NULL },
        { dGRBonus1LuigiFile2_Layer1DObj, dGRBonus1LuigiFile2_Layer1Anim_AnimJoint, NULL, NULL },
        { NULL, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
    },
    dGRBonus1LuigiFile2_MPGeometryData_0x1F38,  /* map_geometry */
    1,  /* layer_mask */
    (Sprite *)dBonus1CommonBackground_0x26c88,  /* wallpaper */
    { 0x4B, 0xC2, 0xF4 },  /* fog_color */
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
    5000,  /* camera_bound_top */
    -4000,  /* camera_bound_bottom */
    3800,  /* camera_bound_right */
    -3800,  /* camera_bound_left */
    9600,  /* map_bound_top */
    -8600,  /* map_bound_bottom */
    8400,  /* map_bound_right */
    -8400,  /* map_bound_left */
    nSYAudioBGM1PBonusStage,  /* bgm_id */
    NULL,  /* map_nodes */
    NULL,  /* item_weights */
    -32768,  /* alt_warning */
    5000,  /* camera_bound_team_top */
    -4000,  /* camera_bound_team_bottom */
    3800,  /* camera_bound_team_right */
    -3800,  /* camera_bound_team_left */
    9600,  /* map_bound_team_top */
    -8600,  /* map_bound_team_bottom */
    8400,  /* map_bound_team_right */
    -8400,  /* map_bound_team_left */
    { 300, 1350, 0 },  /* zoom_start */
    { 300, 1350, 15000 },  /* zoom_end */
};

/* 8 bytes of trailing pad to 16-byte file boundary */
u8 dGRBonus1LuigiMap_pad[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
