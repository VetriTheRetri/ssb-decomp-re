/* MPGroundData for relocData file 263 (GRYosterMap) */
/* File size: 192 bytes (0xC0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Item-randomizer weights, referenced by `header.item_weights` */
u8 dGRYosterMap_item_weights[20] = { 0x3C, 0x28, 0x00, 0x96, 0x0E, 0x07, 0x08, 0x0A, 0x06, 0x0E, 0x0F, 0x08, 0x0C, 0x0A, 0x0C, 0x0D, 0x08, 0x08, 0x0A, 0x14 };

MPGroundData dGRYosterMap_header =
{
    /* gr_desc[4] */
    {
        { (DObjDesc *)0x00060380, (AObjEvent32 **)0x00070454, (MObjSub ***)0x00080000, (AObjEvent32 ***)0x00090DE0 },
        { (DObjDesc *)0x000D139E, NULL, NULL, NULL },
        { (DObjDesc *)0x00111512, NULL, NULL, NULL },
        { (DObjDesc *)0x0015170E, NULL, NULL, NULL },
    },
    (MPGeometryData *)0x00171462,  /* map_geometry */
    0,  /* layer_mask */
    (Sprite *)0x00259B22,  /* wallpaper */
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
    0x00000008,  /* bgm_id */
    (void *)0xFFFF0040,  /* map_nodes */
    (MPItemWeights *)0xFFFF0000,  /* item_weights */
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
