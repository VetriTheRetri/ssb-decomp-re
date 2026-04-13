/* MPGroundData for relocData file 270 (GRYosterSmallMap) */
/* File size: 192 bytes (0xC0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Item-randomizer weights, referenced by `header.item_weights` */
u8 dGRYosterSmallMap_item_weights[20] = { 0x3C, 0x28, 0x00, 0x96, 0x0E, 0x07, 0x08, 0x0A, 0x06, 0x0E, 0x0F, 0x08, 0x0C, 0x0A, 0x0C, 0x0D, 0x08, 0x08, 0x0A, 0x14 };

MPGroundData dGRYosterSmallMap_header =
{
    /* gr_desc[4] */
    {
        { (DObjDesc *)0x000602A2, (AObjEvent32 **)0x00090348, NULL, NULL },
        { (DObjDesc *)0x000D0DFC, NULL, NULL, NULL },
        { (DObjDesc *)0x00110F2A, NULL, NULL, NULL },
        { (DObjDesc *)0x00151126, NULL, NULL, NULL },
    },
    (MPGeometryData *)0x00170E7C,  /* map_geometry */
    0,  /* layer_mask */
    (Sprite *)0xFFFF9B22,  /* wallpaper */
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
    0x00000008,  /* bgm_id */
    NULL,  /* map_nodes */
    (MPItemWeights *)0xFFFF0000,  /* item_weights */
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
