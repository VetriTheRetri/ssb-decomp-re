/* MPGroundData for relocData file 256 (GRPupupuSmallMap) */
/* File size: 192 bytes (0xC0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern u8 dStagePupupuBeta1[];
extern Gfx dStagePupupuBeta1_DL_0x0870[];

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern u8 dStagePupupuFile2_gap_0x0000[];
extern u8 dStagePupupuFile2_Layer0Anim_AnimJoint[];
extern Sprite dStageDreamLand_sprite_0x26C88[];

/* Item-randomizer weights, referenced by `header.item_weights` */
MPItemWeights dGRPupupuSmallMap_item_weights = { { 0x3C, 0x28, 0x78, 0x00, 0x0A, 0x07, 0x06, 0x0A, 0x05, 0x0A, 0x0A, 0x08, 0x0A, 0x07, 0x0A, 0x0A, 0x0A, 0x05, 0x05, 0x12 } };

MPGroundData dGRPupupuSmallMap_header =
{
    /* gr_desc[4] */
    {
        { (void *)((u8 *)dStagePupupuFile2_gap_0x0000 + 0x870), (void *)((u8 *)dStagePupupuBeta1_DL_0x0870 + 0x140), NULL, NULL },
        { (void *)((u8 *)dStagePupupuFile2_Layer0Anim_AnimJoint + 0x888), NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
        { (void *)((u8 *)dStagePupupuFile2_Layer0Anim_AnimJoint + 0xF40), NULL, NULL, NULL },
    },
    (void *)((u8 *)dStagePupupuFile2_Layer0Anim_AnimJoint + 0x9A4),  /* map_geometry */
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
    3500,  /* camera_bound_right */
    -3500,  /* camera_bound_left */
    8500,  /* map_bound_top */
    -5000,  /* map_bound_bottom */
    11000,  /* map_bound_right */
    -11000,  /* map_bound_left */
    nSYAudioBGMPupupu,  /* bgm_id */
    NULL,  /* map_nodes */
    &dGRPupupuSmallMap_item_weights,  /* item_weights */
    -2900,  /* alt_warning */
    4000,  /* camera_bound_team_top */
    -2500,  /* camera_bound_team_bottom */
    3500,  /* camera_bound_team_right */
    -3500,  /* camera_bound_team_left */
    8500,  /* map_bound_team_top */
    -5000,  /* map_bound_team_bottom */
    11000,  /* map_bound_team_right */
    -11000,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* 4 bytes of trailing pad to 16-byte file boundary */
u8 dGRPupupuSmallMap_pad[4] = { 0, 0, 0, 0 };
