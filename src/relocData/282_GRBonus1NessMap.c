/* MPGroundData for relocData file 282 (GRBonus1NessMap) */
/* File size: 176 bytes (0xB0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dBonus1CommonBackground_0x26c88[];

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern DObjDesc dGRBonus1NessFile2_Layer0DObj[];
extern DObjDesc dGRBonus1NessFile2_Layer1DObj[];
extern u32 dGRBonus1NessFile2_Layer1Anim_AnimJoint[];
extern u32 dGRBonus1NessFile2_MPGeometryData_0x2DF8[];

MPGroundData dGRBonus1NessMap_header =
{
    /* gr_desc[4] */
    {
        { dGRBonus1NessFile2_Layer0DObj, NULL, NULL, NULL },
        { dGRBonus1NessFile2_Layer1DObj, dGRBonus1NessFile2_Layer1Anim_AnimJoint, NULL, NULL },
        { NULL, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
    },
    dGRBonus1NessFile2_MPGeometryData_0x2DF8,  /* map_geometry */
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
    4550,  /* camera_bound_top */
    -4400,  /* camera_bound_bottom */
    4350,  /* camera_bound_right */
    -4330,  /* camera_bound_left */
    9150,  /* map_bound_top */
    -9000,  /* map_bound_bottom */
    9450,  /* map_bound_right */
    -9420,  /* map_bound_left */
    nSYAudioBGM1PBonusStage,  /* bgm_id */
    NULL,  /* map_nodes */
    NULL,  /* item_weights */
    -32768,  /* alt_warning */
    4550,  /* camera_bound_team_top */
    -4400,  /* camera_bound_team_bottom */
    4350,  /* camera_bound_team_right */
    -4330,  /* camera_bound_team_left */
    9150,  /* map_bound_team_top */
    -9000,  /* map_bound_team_bottom */
    9450,  /* map_bound_team_right */
    -9420,  /* map_bound_team_left */
    { 300, -900, 0 },  /* zoom_start */
    { 300, -900, 15500 },  /* zoom_end */
};

/* 8 bytes of trailing pad to 16-byte file boundary */
u8 dGRBonus1NessMap_pad[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
