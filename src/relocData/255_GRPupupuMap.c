/* MPGroundData for relocData file 255 (GRPupupuMap) */
/* File size: 192 bytes (0xC0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dStageDreamLand_sprite_0x26C88[];
extern DObjDesc dStagePupupuFile3_DObjDesc_0x10F0[];
extern DObjDesc dStagePupupuFile2_data_0x1008[];
extern DObjDesc dStagePupupuFile2_Layer0Anim_DObjDesc_0x1CE0[];
extern DObjDesc dStagePupupuFile2_gap_0x22D0_sub_0x180[];
extern MObjSub **dStagePupupuFile2_gap_0x1D00_sub_0x250[];
extern void *dStagePupupuFile2_gap_0x22D0_sub_0x260[];
extern DObjDesc dStagePupupuFile2_Layer3Anim_DObjDesc_0x2BF8[];
extern MPGeometryData dStagePupupuFile2_gap_0x1D00_MPGeometryData_0x1F34;

/* Item-randomizer weights, referenced by `header.item_weights` */
#if defined(REGION_JP)
MPItemWeights dGRPupupuMap_item_weights = { { 0x46, 0x28, 0x78, 0x00, 0x14, 0x08, 0x06, 0x0A, 0x05, 0x0C, 0x16, 0x08, 0x0A, 0x07, 0x0A, 0x0A, 0x0A, 0x05, 0x05, 0x12 } };
#else
MPItemWeights dGRPupupuMap_item_weights = { { 0x46, 0x28, 0x78, 0x00, 0x14, 0x04, 0x06, 0x0E, 0x07, 0x0C, 0x16, 0x07, 0x0A, 0x07, 0x0A, 0x09, 0x0E, 0x05, 0x05, 0x14 } };
#endif

MPGroundData dGRPupupuMap_header =
{
    /* gr_desc[4] */
    {
        { (void *)dStagePupupuFile2_data_0x1008, NULL, NULL, NULL },
        { (void *)dStagePupupuFile2_Layer0Anim_DObjDesc_0x1CE0, NULL, NULL, NULL },
        { (void *)dStagePupupuFile2_gap_0x22D0_sub_0x180, NULL, (void *)dStagePupupuFile2_gap_0x1D00_sub_0x250, (void *)dStagePupupuFile2_gap_0x22D0_sub_0x260 },
        { (void *)dStagePupupuFile2_Layer3Anim_DObjDesc_0x2BF8, NULL, NULL, NULL },
    },
    &dStagePupupuFile2_gap_0x1D00_MPGeometryData_0x1F34,  /* map_geometry */
    0,  /* layer_mask */
    dStageDreamLand_sprite_0x26C88,  /* wallpaper */
    { 0x6E, 0xD2, 0xFF },  /* fog_color */
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
    4000,  /* camera_bound_top */
    -2000,  /* camera_bound_bottom */
    3900,  /* camera_bound_right */
    -3900,  /* camera_bound_left */
    8300,  /* map_bound_top */
    -3500,  /* map_bound_bottom */
    9000,  /* map_bound_right */
    -9000,  /* map_bound_left */
    nSYAudioBGMPupupu,  /* bgm_id */
    (void *)dStagePupupuFile3_DObjDesc_0x10F0,  /* map_nodes */
    &dGRPupupuMap_item_weights,  /* item_weights */
    -2900,  /* alt_warning */
    3500,  /* camera_bound_team_top */
    -1000,  /* camera_bound_team_bottom */
    2500,  /* camera_bound_team_right */
    -2500,  /* camera_bound_team_left */
    7000,  /* map_bound_team_top */
    -3500,  /* map_bound_team_bottom */
    7500,  /* map_bound_team_right */
    -7500,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* 4 bytes of trailing pad to 16-byte file boundary */
u8 dGRPupupuMap_pad[4] = { 0, 0, 0, 0 };
