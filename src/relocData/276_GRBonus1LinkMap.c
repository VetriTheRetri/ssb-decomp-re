/* MPGroundData for relocData file 276 (GRBonus1LinkMap) */
/* File size: 176 bytes (0xB0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern DObjDesc dGRBonus1LinkFile2_Layer0DObj[];
extern DObjDesc dGRBonus1LinkFile2_Layer1DObj[];
extern u32 dGRBonus1LinkFile2_Layer1Anim_AnimJoint[];
extern u32 dGRBonus1LinkFile2_MPGeometryData_0x26E0[];

MPGroundData dGRBonus1LinkMap_header =
{
    /* gr_desc[4] */
    {
        { dGRBonus1LinkFile2_Layer0DObj, NULL, NULL, NULL },
        { dGRBonus1LinkFile2_Layer1DObj, dGRBonus1LinkFile2_Layer1Anim_AnimJoint, NULL, NULL },
        { NULL, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
    },
    dGRBonus1LinkFile2_MPGeometryData_0x26E0,  /* map_geometry */
    1,  /* layer_mask */
    (Sprite *)0xFFFF9B22,  /* wallpaper */
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
    -5000,  /* camera_bound_bottom */
    2600,  /* camera_bound_right */
    -2900,  /* camera_bound_left */
    9600,  /* map_bound_top */
    -9600,  /* map_bound_bottom */
    7200,  /* map_bound_right */
    -7500,  /* map_bound_left */
    0x0000001A,  /* bgm_id */
    NULL,  /* map_nodes */
    NULL,  /* item_weights */
    -32768,  /* alt_warning */
    5000,  /* camera_bound_team_top */
    -5000,  /* camera_bound_team_bottom */
    2600,  /* camera_bound_team_right */
    -2900,  /* camera_bound_team_left */
    9600,  /* map_bound_team_top */
    -9600,  /* map_bound_team_bottom */
    7200,  /* map_bound_team_right */
    -7500,  /* map_bound_team_left */
    { 0, -500, 0 },  /* zoom_start */
    { 0, -500, 19000 },  /* zoom_end */
};

/* 8 bytes of trailing pad to 16-byte file boundary */
u8 dGRBonus1LinkMap_pad[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
