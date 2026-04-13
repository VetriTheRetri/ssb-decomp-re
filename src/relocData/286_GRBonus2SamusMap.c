/* MPGroundData for relocData file 286 (GRBonus2SamusMap) */
/* File size: 176 bytes (0xB0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dBonus1CommonBackground_0x26c88[];
extern DObjDesc dGRBonus2SamusFile2_Layer0DObj[];
extern DObjDesc dGRBonus2SamusFile2_Layer1DObj[];
extern u32 dGRBonus2SamusFile2_Layer1Anim_AnimJoint[];
extern u32 dGRBonus2SamusFile2_MPGeometryData_0x2460[];

MPGroundData dGRBonus2SamusMap_header =
{
    /* gr_desc[4] */
    {
        { dGRBonus2SamusFile2_Layer0DObj, NULL, NULL, NULL },
        { dGRBonus2SamusFile2_Layer1DObj, dGRBonus2SamusFile2_Layer1Anim_AnimJoint, NULL, NULL },
        { NULL, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
    },
    dGRBonus2SamusFile2_MPGeometryData_0x2460,  /* map_geometry */
    3,  /* layer_mask */
    dBonus1CommonBackground_0x26c88,  /* wallpaper */
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
    -4400,  /* camera_bound_bottom */
    4700,  /* camera_bound_right */
    -4325,  /* camera_bound_left */
    9600,  /* map_bound_top */
    -9000,  /* map_bound_bottom */
    9300,  /* map_bound_right */
    -8925,  /* map_bound_left */
    0x0000001A,  /* bgm_id */
    (void *)0xFFFF0A44,  /* map_nodes */
    NULL,  /* item_weights */
    -32768,  /* alt_warning */
    5000,  /* camera_bound_team_top */
    -4400,  /* camera_bound_team_bottom */
    4700,  /* camera_bound_team_right */
    -4325,  /* camera_bound_team_left */
    9600,  /* map_bound_team_top */
    -9000,  /* map_bound_team_bottom */
    9300,  /* map_bound_team_right */
    -8925,  /* map_bound_team_left */
    { 0, -1700, 0 },  /* zoom_start */
    { 0, -1700, 20500 },  /* zoom_end */
};

/* 8 bytes of trailing pad to 16-byte file boundary */
u8 dGRBonus2SamusMap_pad[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
