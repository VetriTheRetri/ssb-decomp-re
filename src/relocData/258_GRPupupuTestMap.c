/* MPGroundData for relocData file 258 (GRPupupuTestMap) */
/* File size: 192 bytes (0xC0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dStageDreamLand_sprite_0x26C88[];
extern u32 dStagePupupuFile2_gap_0x0898[];
extern u32 dStagePupupuFile2_Layer0Anim_AnimJoint[];
extern u32 dStagePupupuFile2_gap_0x1D00[];
extern u32 dStagePupupuFile2_Layer1Anim_AnimJoint[];
extern u32 dStagePupupuFile2_gap_0x22D0[];
extern u32 dStagePupupuFile2_gap_0x2810[];
extern u32 dStagePupupuFile2_Layer3Anim_AnimJoint[];
extern u32 dStagePupupuFile2_MPGeometryData_0x2094[];

/* Item-randomizer weights, referenced by `header.item_weights` */
u8 dGRPupupuTestMap_item_weights[20] = { 0x46, 0x28, 0x78, 0x00, 0x0A, 0x07, 0x06, 0x0A, 0x05, 0x0A, 0x0A, 0x08, 0x0A, 0x07, 0x0A, 0x0A, 0x0A, 0x05, 0x05, 0x12 };

MPGroundData dGRPupupuTestMap_header =
{
    /* gr_desc[4] */
    {
        { dStagePupupuFile2_gap_0x0898, dStagePupupuFile2_Layer0Anim_AnimJoint, NULL, NULL },
        { dStagePupupuFile2_gap_0x1D00, dStagePupupuFile2_Layer1Anim_AnimJoint, NULL, NULL },
        { dStagePupupuFile2_gap_0x22D0, NULL, NULL, NULL },
        { dStagePupupuFile2_gap_0x2810, dStagePupupuFile2_Layer3Anim_AnimJoint, NULL, NULL },
    },
    dStagePupupuFile2_MPGeometryData_0x2094,  /* map_geometry */
    0,  /* layer_mask */
    dStageDreamLand_sprite_0x26C88,  /* wallpaper */
    { 0x4B, 0xC2, 0xF4 },  /* fog_color */
    0x00,  /* fog_alpha */
    /* emblem_colors[4] */
    {
        { 0xFF, 0xFF, 0xFF },
        { 0xFF, 0xFF, 0xFF },
        { 0xFF, 0xFF, 0xFF },
        { 0xFF, 0xFF, 0xFF },
    },
    0xFFFFFF00,  /* unused */
    { 20.0f, 45.0f, -0.17453294f },  /* light_angle */
    4000,  /* camera_bound_top */
    -2500,  /* camera_bound_bottom */
    5500,  /* camera_bound_right */
    -5500,  /* camera_bound_left */
    9000,  /* map_bound_top */
    -5000,  /* map_bound_bottom */
    11000,  /* map_bound_right */
    -11000,  /* map_bound_left */
    0x00000000,  /* bgm_id */
    NULL,  /* map_nodes */
    dGRPupupuTestMap_item_weights,  /* item_weights */
    -2900,  /* alt_warning */
    4000,  /* camera_bound_team_top */
    -2500,  /* camera_bound_team_bottom */
    5500,  /* camera_bound_team_right */
    -5500,  /* camera_bound_team_left */
    9000,  /* map_bound_team_top */
    -5000,  /* map_bound_team_bottom */
    11000,  /* map_bound_team_right */
    -11000,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* 4 bytes of trailing pad to 16-byte file boundary */
u8 dGRPupupuTestMap_pad[4] = { 0, 0, 0, 0 };
