/* MPGroundData for relocData file 263 (GRYosterMap) */
/* File size: 192 bytes (0xC0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern u8 dStageYosterFile3[];
extern u32 dStageYosterFile3_DObjDesc_0x0100[];

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dStageYoshi_sprite_0x26C88[];
extern DObjDesc dStageYosterFile2_Layer0DObj[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint[];
extern MObjSub dStageYosterFile2_Layer0MObj_MObjSub[];
extern u32 dStageYosterFile2_Layer0MatAnim_MatAnimJoint[];
extern DObjDesc dStageYosterFile2_Layer1DObj[];
extern DObjDesc dStageYosterFile2_Layer2DObj[];
extern DObjDesc dStageYosterFile2_Layer3DObj[];
extern u32 dStageYosterFile2_MPGeometryData_0x5188[];

/* Item-randomizer weights, referenced by `header.item_weights` */
#if defined(REGION_JP)
MPItemWeights dGRYosterMap_item_weights = { { 0x3C, 0x32, 0x96, 0x00, 0x0A, 0x07, 0x06, 0x0A, 0x05, 0x0A, 0x0F, 0x08, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x05, 0x05, 0x12 } };
#else
MPItemWeights dGRYosterMap_item_weights = { { 0x3C, 0x28, 0x00, 0x96, 0x0E, 0x07, 0x08, 0x0A, 0x06, 0x0E, 0x0F, 0x08, 0x0C, 0x0A, 0x0C, 0x0D, 0x08, 0x08, 0x0A, 0x14 } };
#endif


MPGroundData dGRYosterMap_header =
{
    /* gr_desc[4] */
    {
        { dStageYosterFile2_Layer0DObj, dStageYosterFile2_Layer0Anim_AnimJoint, dStageYosterFile2_Layer0MObj_MObjSub, dStageYosterFile2_Layer0MatAnim_MatAnimJoint },
        { dStageYosterFile2_Layer1DObj, NULL, NULL, NULL },
        { dStageYosterFile2_Layer2DObj, NULL, NULL, NULL },
        { dStageYosterFile2_Layer3DObj, NULL, NULL, NULL },
    },
    dStageYosterFile2_MPGeometryData_0x5188,  /* map_geometry */
    0,  /* layer_mask */
    dStageYoshi_sprite_0x26C88,  /* wallpaper */
    { 0xF3, 0xC7, 0xA5 },  /* fog_color */
    0x00,  /* fog_alpha */
    /* emblem_colors[4] */
    {
        { 0xFF, 0xA0, 0xA0 },
        { 0xA0, 0xA0, 0xFF },
        { 0xF0, 0xF0, 0x64 },
        { 0xAA, 0xFF, 0xAA },
    },
    0xDCDCDC00,  /* unused */
    { 20.0f, 45.0f, -0.17453294f },  /* light_angle */
    4300,  /* camera_bound_top */
    -2000,  /* camera_bound_bottom */
    7000,  /* camera_bound_right */
    -4300,  /* camera_bound_left */
    8200,  /* map_bound_top */
    -4000,  /* map_bound_bottom */
    10500,  /* map_bound_right */
    -7800,  /* map_bound_left */
    nSYAudioBGMYoster,  /* bgm_id */
    (void *)dStageYosterFile3_DObjDesc_0x0100,  /* map_nodes */
    &dGRYosterMap_item_weights,  /* item_weights */
    -2500,  /* alt_warning */
    4300,  /* camera_bound_team_top */
    -2000,  /* camera_bound_team_bottom */
    7000,  /* camera_bound_team_right */
    -4300,  /* camera_bound_team_left */
    8200,  /* map_bound_team_top */
    -4000,  /* map_bound_team_bottom */
    10500,  /* map_bound_team_right */
    -7800,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* 4 bytes of trailing pad to 16-byte file boundary */
u8 dGRYosterMap_pad[4] = { 0, 0, 0, 0 };
