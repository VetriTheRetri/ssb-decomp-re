/* MPGroundData for relocData file 272 (GRBonus1FoxMap) */
/* File size: 176 bytes (0xB0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

MPGroundData dGRBonus1FoxMap_header =
{
    /* gr_desc[4] */
    {
        { (DObjDesc *)0x00040298, NULL, NULL, NULL },
        { (DObjDesc *)0x0005081A, (AObjEvent32 **)0x0010090C, NULL, NULL },
        { NULL, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
    },
    (MPGeometryData *)0x00120903,  /* map_geometry */
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
    4700,  /* camera_bound_top */
    -5000,  /* camera_bound_bottom */
    4700,  /* camera_bound_right */
    -4760,  /* camera_bound_left */
    9300,  /* map_bound_top */
    -9600,  /* map_bound_bottom */
    9300,  /* map_bound_right */
    -9340,  /* map_bound_left */
    0x0000001A,  /* bgm_id */
    NULL,  /* map_nodes */
    NULL,  /* item_weights */
    -32768,  /* alt_warning */
    4700,  /* camera_bound_team_top */
    -5000,  /* camera_bound_team_bottom */
    4700,  /* camera_bound_team_right */
    -4760,  /* camera_bound_team_left */
    9300,  /* map_bound_team_top */
    -9600,  /* map_bound_team_bottom */
    9300,  /* map_bound_team_right */
    -9340,  /* map_bound_team_left */
    { 250, -1300, 0 },  /* zoom_start */
    { 250, -1300, 17600 },  /* zoom_end */
};

/* 8 bytes of trailing pad to 16-byte file boundary */
u8 dGRBonus1FoxMap_pad[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
