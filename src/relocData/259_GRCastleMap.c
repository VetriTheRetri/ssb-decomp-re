/* MPGroundData for relocData file 259 (GRCastleMap) */
/* File size: 192 bytes (0xC0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dMVOpeningRoomWallpaper_sprite_0x26C88[];
extern u8 dStageCastleFile3[];

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dStageCastle_sprite_0x26C88[];
extern DObjDesc dStageCastleFile2_Layer0DObj[];
extern DObjDesc dStageCastleFile2_Layer1DObj[];
extern u32 dStageCastleFile2_Layer1Anim_AnimJoint[];
extern DObjDesc dStageCastleFile2_Layer2DObj[];
extern u32 dStageCastleFile2_Layer2Anim_AnimJoint[];
extern DObjDesc dStageCastleFile2_Layer3DObj[];
extern u32 dStageCastleFile2_MPGeometryData_0x2D58[];
extern u32 dStageCastleFile2_gap_0x0000[];

/* Item-randomizer weights, referenced by `header.item_weights` */
#if defined(REGION_JP)
MPItemWeights dGRCastleMap_item_weights = { { 0x50, 0x28, 0x78, 0x00, 0x0A, 0x07, 0x0A, 0x0A, 0x05, 0x0C, 0x0A, 0x08, 0x12, 0x07, 0x0A, 0x16, 0x0A, 0x05, 0x05, 0x12 } };
#else
MPItemWeights dGRCastleMap_item_weights = { { 0x50, 0x1E, 0x78, 0x00, 0x0E, 0x07, 0x0C, 0x0A, 0x05, 0x0F, 0x0A, 0x08, 0x13, 0x08, 0x10, 0x16, 0x0A, 0x0A, 0x0A, 0x14 } };
#endif

MPGroundData dGRCastleMap_header =
{
    /* gr_desc[4] */
    {
        { dStageCastleFile2_Layer0DObj, NULL, NULL, NULL },
        { dStageCastleFile2_Layer1DObj, dStageCastleFile2_Layer1Anim_AnimJoint, NULL, NULL },
        { dStageCastleFile2_Layer2DObj, dStageCastleFile2_Layer2Anim_AnimJoint, NULL, NULL },
        { dStageCastleFile2_Layer3DObj, NULL, NULL, NULL },
    },
    dStageCastleFile2_MPGeometryData_0x2D58,  /* map_geometry */
    0,  /* layer_mask */
    dStageCastle_sprite_0x26C88,  /* wallpaper */
    { 0xB0, 0xC2, 0xE0 },  /* fog_color */
    0x00,  /* fog_alpha */
    /* emblem_colors[4] */
    {
        { 0xFF, 0x96, 0x96 },
        { 0x96, 0x96, 0xFF },
        { 0xE6, 0xE6, 0x50 },
        { 0x96, 0xFF, 0x96 },
    },
    0xDCDCDC00,  /* unused */
    { 20.0f, 45.0f, -0.17453294f },  /* light_angle */
    4800,  /* camera_bound_top */
    -1300,  /* camera_bound_bottom */
    4000,  /* camera_bound_right */
    -4000,  /* camera_bound_left */
    9500,  /* map_bound_top */
    -4000,  /* map_bound_bottom */
    9000,  /* map_bound_right */
    -9000,  /* map_bound_left */
    nSYAudioBGMCastle,  /* bgm_id */
    dStageCastleFile2_gap_0x0000,  /* map_nodes */
    &dGRCastleMap_item_weights,  /* item_weights */
    -1900,  /* alt_warning */
    4800,  /* camera_bound_team_top */
    -1300,  /* camera_bound_team_bottom */
    4000,  /* camera_bound_team_right */
    -4000,  /* camera_bound_team_left */
    9200,  /* map_bound_team_top */
    -4000,  /* map_bound_team_bottom */
    9000,  /* map_bound_team_right */
    -9000,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* 4 bytes of trailing pad to 16-byte file boundary */
u8 dGRCastleMap_pad[4] = { 0, 0, 0, 0 };
