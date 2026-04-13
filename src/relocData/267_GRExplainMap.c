/* MPGroundData for relocData file 267 (GRExplainMap) */
/* File size: 176 bytes (0xB0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

MPGroundData dGRExplainMap_header =
{
    /* gr_desc[4] */
    {
        { (DObjDesc *)0x00040042, NULL, NULL, NULL },
        { (DObjDesc *)0x000801C8, NULL, NULL, NULL },
        { (DObjDesc *)0x000C026E, NULL, NULL, NULL },
        { (DObjDesc *)0x00100374, NULL, NULL, NULL },
    },
    (MPGeometryData *)0x00120215,  /* map_geometry */
    0,  /* layer_mask */
    (Sprite *)0xFFFF9B22,  /* wallpaper */
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
    2300,  /* camera_bound_top */
    -1400,  /* camera_bound_bottom */
    2600,  /* camera_bound_right */
    -1500,  /* camera_bound_left */
    6000,  /* map_bound_top */
    -3000,  /* map_bound_bottom */
    6300,  /* map_bound_right */
    -10000,  /* map_bound_left */
    0x00000022,  /* bgm_id */
    NULL,  /* map_nodes */
    NULL,  /* item_weights */
    -1900,  /* alt_warning */
    2300,  /* camera_bound_team_top */
    -1400,  /* camera_bound_team_bottom */
    2600,  /* camera_bound_team_right */
    -1500,  /* camera_bound_team_left */
    6000,  /* map_bound_team_top */
    -3000,  /* map_bound_team_bottom */
    6300,  /* map_bound_team_right */
    -10000,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* 8 bytes of trailing pad to 16-byte file boundary */
u8 dGRExplainMap_pad[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
