/* MPGroundData for relocData file 256 (GRPupupuSmallMap) */
/* File size: 192 bytes (0xC0) */

#include <mp/mptypes.h>
#include "relocdata_types.h"

/* Item-randomizer weights, referenced by `header.item_weights` */
u8 dGRPupupuSmallMap_item_weights[20] = { 0x3C, 0x28, 0x78, 0x00, 0x0A, 0x07, 0x06, 0x0A, 0x05, 0x0A, 0x0A, 0x08, 0x0A, 0x07, 0x0A, 0x0A, 0x0A, 0x05, 0x05, 0x12 };

MPGroundData dGRPupupuSmallMap_header =
{
    /* gr_desc[4] */
    {
        { (DObjDesc *)0x0006021C, (AObjEvent32 **)0x0009026C, NULL, NULL },
        { (DObjDesc *)0x00110496, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
        { (DObjDesc *)0x00150644, NULL, NULL, NULL },
    },
    (MPGeometryData *)0x001704DD,  /* map_geometry */
    0,  /* layer_mask */
    (Sprite *)0xFFFF9B22,  /* wallpaper */
    { 0x4B, 0xC2, 0xF4 },  /* fog_color */
    0x00,  /* fog_alpha */
    /* emblem_colors[4] */
    {
        { 0xFF, 0xFF, 0xFF },
        { 0xFF, 0xFF, 0xFF },
        { 0xFF, 0xFF, 0xFF },
        { 0xFF, 0xFF, 0xFF },
    },
    0xFFFFFF00,  /* unused */
    { 20.0f, 45.0f, -0.17453294f },  /* light_angle */
    4000,  /* camera_bound_top */
    -2500,  /* camera_bound_bottom */
    3500,  /* camera_bound_right */
    -3500,  /* camera_bound_left */
    8500,  /* map_bound_top */
    -5000,  /* map_bound_bottom */
    11000,  /* map_bound_right */
    -11000,  /* map_bound_left */
    0x00000000,  /* bgm_id */
    NULL,  /* map_nodes */
    (MPItemWeights *)0xFFFF0000,  /* item_weights */
    -2900,  /* alt_warning */
    4000,  /* camera_bound_team_top */
    -2500,  /* camera_bound_team_bottom */
    3500,  /* camera_bound_team_right */
    -3500,  /* camera_bound_team_left */
    8500,  /* map_bound_team_top */
    -5000,  /* map_bound_team_bottom */
    11000,  /* map_bound_team_right */
    -11000,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* 4 bytes of trailing pad to 16-byte file boundary */
u8 dGRPupupuSmallMap_pad[4] = { 0, 0, 0, 0 };
