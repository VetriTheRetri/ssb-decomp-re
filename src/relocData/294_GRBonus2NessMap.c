/* MPGroundData for relocData file 294 (GRBonus2NessMap) */
/* File size: 176 bytes (0xB0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

MPGroundData dGRBonus2NessMap_header =
{
    /* gr_desc[4] */
    {
        { (DObjDesc *)0x000402DC, NULL, NULL, NULL },
        { (DObjDesc *)0x00050D28, (AObjEvent32 **)0x00100F78, NULL, NULL },
        { NULL, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
    },
    (MPGeometryData *)0x00120F70,  /* map_geometry */
    3,  /* layer_mask */
    (Sprite *)0x00209B22,  /* wallpaper */
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
    7000,  /* camera_bound_top */
    -5000,  /* camera_bound_bottom */
    5000,  /* camera_bound_right */
    -5000,  /* camera_bound_left */
    11600,  /* map_bound_top */
    -9600,  /* map_bound_bottom */
    9600,  /* map_bound_right */
    -9600,  /* map_bound_left */
    0x0000001A,  /* bgm_id */
    (void *)0xFFFF0FF8,  /* map_nodes */
    NULL,  /* item_weights */
    -32768,  /* alt_warning */
    7000,  /* camera_bound_team_top */
    -5000,  /* camera_bound_team_bottom */
    5000,  /* camera_bound_team_right */
    -5000,  /* camera_bound_team_left */
    11600,  /* map_bound_team_top */
    -9600,  /* map_bound_team_bottom */
    9600,  /* map_bound_team_right */
    -9600,  /* map_bound_team_left */
    { 0, -500, 0 },  /* zoom_start */
    { 0, -500, 26500 },  /* zoom_end */
};

/* 8 bytes of trailing pad to 16-byte file boundary */
u8 dGRBonus2NessMap_pad[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
