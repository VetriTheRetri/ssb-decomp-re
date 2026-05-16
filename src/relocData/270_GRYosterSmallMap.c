/* MPGroundData for relocData file 270 (GRYosterSmallMap) */
/* File size: 192 bytes (0xC0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dStageYoshi_sprite_0x26C88[];
extern DObjDesc dStageYosterSmallFile2_Layer0DObj[];
extern u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint[];
extern DObjDesc dStageYosterSmallFile2_Layer1DObj[];
extern DObjDesc dStageYosterSmallFile2_Layer2DObj[];
extern DObjDesc dStageYosterSmallFile2_Layer3DObj[];
extern u32 dStageYosterSmallFile2_MPGeometryData_0x39F0[];

/* Item-randomizer weights, referenced by `header.item_weights` */
#if defined(REGION_JP)
MPItemWeights dGRYosterSmallMap_item_weights = { { 0x3C, 0x32, 0x96, 0x00, 0x0A, 0x07, 0x06, 0x0A, 0x05, 0x0A, 0x0F, 0x08, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x05, 0x05, 0x12 } };
#else
MPItemWeights dGRYosterSmallMap_item_weights = { { 0x3C, 0x28, 0x00, 0x96, 0x0E, 0x07, 0x08, 0x0A, 0x06, 0x0E, 0x0F, 0x08, 0x0C, 0x0A, 0x0C, 0x0D, 0x08, 0x08, 0x0A, 0x14 } };
#endif

MPGroundData dGRYosterSmallMap_header =
{
    /* gr_desc[4] */
    {
        { dStageYosterSmallFile2_Layer0DObj, dStageYosterSmallFile2_Layer0Anim_AnimJoint, NULL, NULL },
        { dStageYosterSmallFile2_Layer1DObj, NULL, NULL, NULL },
        { dStageYosterSmallFile2_Layer2DObj, NULL, NULL, NULL },
        { dStageYosterSmallFile2_Layer3DObj, NULL, NULL, NULL },
    },
    dStageYosterSmallFile2_MPGeometryData_0x39F0,  /* map_geometry */
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
    4100,  /* camera_bound_top */
    -2000,  /* camera_bound_bottom */
    5500,  /* camera_bound_right */
    -5500,  /* camera_bound_left */
    8000,  /* map_bound_top */
    -4000,  /* map_bound_bottom */
    7000,  /* map_bound_right */
    -7000,  /* map_bound_left */
    nSYAudioBGMYoster,  /* bgm_id */
    NULL,  /* map_nodes */
    &dGRYosterSmallMap_item_weights,  /* item_weights */
    -2500,  /* alt_warning */
    3500,  /* camera_bound_team_top */
    -1000,  /* camera_bound_team_bottom */
    2500,  /* camera_bound_team_right */
    -2500,  /* camera_bound_team_left */
    7500,  /* map_bound_team_top */
    -4000,  /* map_bound_team_bottom */
    5500,  /* map_bound_team_right */
    -5500,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* 4 bytes of trailing pad to 16-byte file boundary */
u8 dGRYosterSmallMap_pad[4] = { 0, 0, 0, 0 };
