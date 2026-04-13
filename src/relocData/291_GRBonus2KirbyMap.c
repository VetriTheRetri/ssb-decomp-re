/* MPGroundData for relocData file 291 (GRBonus2KirbyMap) */
/* File size: 176 bytes (0xB0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dBonus1CommonBackground_0x26c88[];
extern DObjDesc dGRBonus2KirbyFile2_Layer0DObj[];
extern DObjDesc dGRBonus2KirbyFile2_Layer1DObj[];
extern u32 dGRBonus2KirbyFile2_Layer1Anim_AnimJoint[];
extern u32 dGRBonus2KirbyFile2_MPGeometryData_0x3670[];

MPGroundData dGRBonus2KirbyMap_header =
{
    /* gr_desc[4] */
    {
        { dGRBonus2KirbyFile2_Layer0DObj, NULL, NULL, NULL },
        { dGRBonus2KirbyFile2_Layer1DObj, dGRBonus2KirbyFile2_Layer1Anim_AnimJoint, NULL, NULL },
        { NULL, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
    },
    dGRBonus2KirbyFile2_MPGeometryData_0x3670,  /* map_geometry */
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
    -6400,  /* camera_bound_bottom */
    5000,  /* camera_bound_right */
    -5000,  /* camera_bound_left */
    9600,  /* map_bound_top */
    -11000,  /* map_bound_bottom */
    9600,  /* map_bound_right */
    -9600,  /* map_bound_left */
    0x0000001A,  /* bgm_id */
    (void *)0xFFFF0E48,  /* map_nodes */
    NULL,  /* item_weights */
    -32768,  /* alt_warning */
    5000,  /* camera_bound_team_top */
    -6400,  /* camera_bound_team_bottom */
    5000,  /* camera_bound_team_right */
    -5000,  /* camera_bound_team_left */
    9600,  /* map_bound_team_top */
    -11000,  /* map_bound_team_bottom */
    9600,  /* map_bound_team_right */
    -9600,  /* map_bound_team_left */
    { 0, -300, 0 },  /* zoom_start */
    { 0, -300, 26000 },  /* zoom_end */
};

/* 8 bytes of trailing pad to 16-byte file boundary */
u8 dGRBonus2KirbyMap_pad[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
