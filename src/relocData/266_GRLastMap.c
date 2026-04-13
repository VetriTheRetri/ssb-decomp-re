/* MPGroundData for relocData file 266 (GRLastMap) */
/* File size: 176 bytes (0xB0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

MPGroundData dGRLastMap_header =
{
    /* gr_desc[4] */
    {
        { NULL, NULL, NULL, NULL },
        { (DObjDesc *)0x00051352, (AObjEvent32 **)0x000613C4, (MObjSub ***)0x0007081E, (AObjEvent32 ***)0x001013D0 },
        { NULL, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
    },
    (MPGeometryData *)0x001213BD,  /* map_geometry */
    0,  /* layer_mask */
    (Sprite *)0xFFFF9B22,  /* wallpaper */
    { 0x00, 0x00, 0x32 },  /* fog_color */
    0x00,  /* fog_alpha */
    /* emblem_colors[4] */
    {
        { 0xFF, 0x80, 0x80 },
        { 0x8C, 0x8C, 0xFF },
        { 0xE6, 0xE6, 0x64 },
        { 0x80, 0xFF, 0x80 },
    },
    0xC8C8C800,  /* unused */
    { 0.0f, -60.0f, -0.17453294f },  /* light_angle */
    5000,  /* camera_bound_top */
    -2400,  /* camera_bound_bottom */
    5500,  /* camera_bound_right */
    -5500,  /* camera_bound_left */
    9000,  /* map_bound_top */
    -4200,  /* map_bound_bottom */
    11000,  /* map_bound_right */
    -11000,  /* map_bound_left */
    0x00000018,  /* bgm_id */
    NULL,  /* map_nodes */
    NULL,  /* item_weights */
    -2900,  /* alt_warning */
    5000,  /* camera_bound_team_top */
    -2400,  /* camera_bound_team_bottom */
    5500,  /* camera_bound_team_right */
    -5500,  /* camera_bound_team_left */
    9000,  /* map_bound_team_top */
    -4200,  /* map_bound_team_bottom */
    11000,  /* map_bound_team_right */
    -11000,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* 8 bytes of trailing pad to 16-byte file boundary */
u8 dGRLastMap_pad[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
