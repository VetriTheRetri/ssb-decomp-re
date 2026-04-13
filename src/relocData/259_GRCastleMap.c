/* MPGroundData for relocData file 259 (GRCastleMap) */
/* File size: 192 bytes (0xC0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Item-randomizer weights, referenced by `header.item_weights` */
u8 dGRCastleMap_item_weights[20] = { 0x50, 0x1E, 0x78, 0x00, 0x0E, 0x07, 0x0C, 0x0A, 0x05, 0x0F, 0x0A, 0x08, 0x13, 0x08, 0x10, 0x16, 0x0A, 0x0A, 0x0A, 0x14 };

MPGroundData dGRCastleMap_header =
{
    /* gr_desc[4] */
    {
        { (DObjDesc *)0x00090614, NULL, NULL, NULL },
        { (DObjDesc *)0x000A0A82, (AObjEvent32 **)0x000D0B60, NULL, NULL },
        { (DObjDesc *)0x000E0C86, (AObjEvent32 **)0x00110CB4, NULL, NULL },
        { (DObjDesc *)0x00150D80, NULL, NULL, NULL },
    },
    (MPGeometryData *)0x00170B56,  /* map_geometry */
    0,  /* layer_mask */
    (Sprite *)0x00259B22,  /* wallpaper */
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
    0x00000006,  /* bgm_id */
    (void *)0xFFFF0000,  /* map_nodes */
    (MPItemWeights *)0xFFFF0000,  /* item_weights */
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
