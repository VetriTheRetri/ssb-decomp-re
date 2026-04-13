/* MPGroundData for relocData file 281 (GRBonus1PurinMap) */
/* File size: 176 bytes (0xB0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

MPGroundData dGRBonus1PurinMap_header =
{
    /* gr_desc[4] */
    {
        { (DObjDesc *)0x00040254, NULL, NULL, NULL },
        { (DObjDesc *)0x000507FE, (AObjEvent32 **)0x001008C8, NULL, NULL },
        { NULL, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
    },
    (MPGeometryData *)0x001208C1,  /* map_geometry */
    1,  /* layer_mask */
    (Sprite *)0xFFFF9B22,  /* wallpaper */
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
    4940,  /* camera_bound_top */
    -4700,  /* camera_bound_bottom */
    4640,  /* camera_bound_right */
    -4850,  /* camera_bound_left */
    9540,  /* map_bound_top */
    -9300,  /* map_bound_bottom */
    9240,  /* map_bound_right */
    -9450,  /* map_bound_left */
    0x0000001A,  /* bgm_id */
    NULL,  /* map_nodes */
    NULL,  /* item_weights */
    -32768,  /* alt_warning */
    4940,  /* camera_bound_team_top */
    -4700,  /* camera_bound_team_bottom */
    4640,  /* camera_bound_team_right */
    -4850,  /* camera_bound_team_left */
    9540,  /* map_bound_team_top */
    -9300,  /* map_bound_team_bottom */
    9240,  /* map_bound_team_right */
    -9450,  /* map_bound_team_left */
    { -1100, 0, 0 },  /* zoom_start */
    { -1100, 0, 16200 },  /* zoom_end */
};

/* 8 bytes of trailing pad to 16-byte file boundary */
u8 dGRBonus1PurinMap_pad[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
