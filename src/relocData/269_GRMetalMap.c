/* MPGroundData for relocData file 269 (GRMetalMap) */
/* File size: 192 bytes (0xC0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Item-randomizer weights, referenced by `header.item_weights` */
u8 dGRMetalMap_item_weights[20] = { 0x3C, 0x28, 0x78, 0x00, 0x01, 0x00, 0x06, 0x0A, 0x05, 0x0C, 0x16, 0x08, 0x0A, 0x07, 0x0A, 0x0A, 0x0A, 0x05, 0x05, 0x12 };

MPGroundData dGRMetalMap_header =
{
    /* gr_desc[4] */
    {
        { (DObjDesc *)0x000706C4, NULL, (MObjSub ***)0x0008030C, (AObjEvent32 ***)0x000906E8 },
        { (DObjDesc *)0x000B0BB8, NULL, (MObjSub ***)0x000C0774, (AObjEvent32 ***)0x000D0C24 },
        { (DObjDesc *)0x000F0D1A, NULL, (MObjSub ***)0x00100C88, (AObjEvent32 ***)0x00110D3C },
        { (DObjDesc *)0x00130F76, NULL, (MObjSub ***)0x00140D54, (AObjEvent32 ***)0x00150F98 },
    },
    (MPGeometryData *)0x00170C1A,  /* map_geometry */
    0,  /* layer_mask */
    (Sprite *)0xFFFF9B22,  /* wallpaper */
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
    0x00000025,  /* bgm_id */
    NULL,  /* map_nodes */
    (MPItemWeights *)0xFFFF0000,  /* item_weights */
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
