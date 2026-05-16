/* MPGroundData for relocData file 269 (GRMetalMap) */
/* File size: 192 bytes (0xC0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dStageMetalBackground_0x26c88[];
extern DObjDesc dStageMetalFile2_Layer0DObj[];
extern MObjSub dStageMetalFile2_Layer0MObj_MObjSub[];
extern u32 dStageMetalFile2_Layer0MatAnim_MatAnimJoint[];
extern DObjDesc dStageMetalFile2_Layer1DObj[];
extern MObjSub dStageMetalFile2_Layer1MObj_MObjSub[];
extern u32 dStageMetalFile2_Layer1MatAnim_MatAnimJoint[];
extern DObjDesc dStageMetalFile2_Layer2DObj[];
extern MObjSub dStageMetalFile2_Layer2MObj_MObjSub[];
extern u32 dStageMetalFile2_Layer2MatAnim_MatAnimJoint[];
extern DObjDesc dStageMetalFile2_Layer3DObj[];
extern MObjSub dStageMetalFile2_Layer3MObj_MObjSub[];
extern u32 dStageMetalFile2_Layer3MatAnim_MatAnimJoint[];
extern u32 dStageMetalFile2_MPGeometryData_0x3068[];

/* Item-randomizer weights, referenced by `header.item_weights` */
#if defined(REGION_JP)
MPItemWeights dGRMetalMap_item_weights = { { 0x46, 0x28, 0x78, 0x00, 0x14, 0x08, 0x06, 0x0A, 0x05, 0x0C, 0x16, 0x08, 0x0A, 0x07, 0x0A, 0x0A, 0x0A, 0x05, 0x05, 0x12 } };
#else
MPItemWeights dGRMetalMap_item_weights = { { 0x3C, 0x28, 0x78, 0x00, 0x01, 0x00, 0x06, 0x0A, 0x05, 0x0C, 0x16, 0x08, 0x0A, 0x07, 0x0A, 0x0A, 0x0A, 0x05, 0x05, 0x12 } };
#endif

MPGroundData dGRMetalMap_header =
{
    /* gr_desc[4] */
    {
        { dStageMetalFile2_Layer0DObj, NULL, dStageMetalFile2_Layer0MObj_MObjSub, dStageMetalFile2_Layer0MatAnim_MatAnimJoint },
        { dStageMetalFile2_Layer1DObj, NULL, dStageMetalFile2_Layer1MObj_MObjSub, dStageMetalFile2_Layer1MatAnim_MatAnimJoint },
        { dStageMetalFile2_Layer2DObj, NULL, dStageMetalFile2_Layer2MObj_MObjSub, dStageMetalFile2_Layer2MatAnim_MatAnimJoint },
        { dStageMetalFile2_Layer3DObj, NULL, dStageMetalFile2_Layer3MObj_MObjSub, dStageMetalFile2_Layer3MatAnim_MatAnimJoint },
    },
    dStageMetalFile2_MPGeometryData_0x3068,  /* map_geometry */
    0,  /* layer_mask */
    dStageMetalBackground_0x26c88,  /* wallpaper */
    { 0x00, 0x00, 0x0A },  /* fog_color */
    0x00,  /* fog_alpha */
    /* emblem_colors[4] */
    {
        { 0xFF, 0x80, 0x80 },
        { 0x8C, 0x8C, 0xFF },
        { 0xE6, 0xE6, 0x64 },
        { 0x80, 0xFF, 0x80 },
    },
    0xC8C8C800,  /* unused */
    { -30.0f, -30.0f, -0.17453294f },  /* light_angle */
    5000,  /* camera_bound_top */
    -2400,  /* camera_bound_bottom */
    5000,  /* camera_bound_right */
    -5000,  /* camera_bound_left */
    9000,  /* map_bound_top */
    -4200,  /* map_bound_bottom */
    10000,  /* map_bound_right */
    -10000,  /* map_bound_left */
    nSYAudioBGMMetal,  /* bgm_id */
    NULL,  /* map_nodes */
    &dGRMetalMap_item_weights,  /* item_weights */
    -2900,  /* alt_warning */
    5000,  /* camera_bound_team_top */
    -2400,  /* camera_bound_team_bottom */
    5500,  /* camera_bound_team_right */
    -5500,  /* camera_bound_team_left */
    9000,  /* map_bound_team_top */
    -3800,  /* map_bound_team_bottom */
    9000,  /* map_bound_team_right */
    -9000,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* 4 bytes of trailing pad to 16-byte file boundary */
u8 dGRMetalMap_pad[4] = { 0, 0, 0, 0 };
