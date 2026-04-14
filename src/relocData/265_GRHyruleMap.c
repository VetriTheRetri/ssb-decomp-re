/* relocData file 265: GRHyruleMap */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Item-randomizer weights — referenced by header.item_weights */
u8 dGRHyruleMap_gap_0x0000[20] = {
	#include <GRHyruleMap/gap_0x0000.data.inc.c>
};

/* MPGroundData (typed via tools/typeStageMap.py) */

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern DObjDesc dStageHyruleFile2_Layer0DObj[];
extern DObjDesc dStageHyruleFile2_Layer1DObj[];
extern DObjDesc dStageHyruleFile2_Layer3DObj[];
extern u32 dStageHyruleFile2_MPGeometryData_0x599C[];
MPGroundData dGRHyruleMap_MapHeader_0x0014 =
{
    /* gr_desc[4] */
    {
        { dStageHyruleFile2_Layer0DObj, NULL, NULL, NULL },
        { dStageHyruleFile2_Layer1DObj, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
        { dStageHyruleFile2_Layer3DObj, NULL, NULL, NULL },
    },
    dStageHyruleFile2_MPGeometryData_0x599C,  /* map_geometry */
    1,  /* layer_mask */
    (Sprite *)0xFFFF9B22,  /* wallpaper */
    { 0xE1, 0xC8, 0xFF },  /* fog_color */
    0x00,  /* fog_alpha */
    /* emblem_colors[4] */
    {
        { 0xFF, 0xA0, 0xA0 },
        { 0xA0, 0xA0, 0xFF },
        { 0xF0, 0xF0, 0x64 },
        { 0xAA, 0xFF, 0xAA },
    },
    0xDCDCDC00,  /* unused */
    { 80.0f, 25.0f, -0.17453294f },  /* light_angle */
    6000,  /* camera_bound_top */
    -2100,  /* camera_bound_bottom */
    6000,  /* camera_bound_right */
    -6000,  /* camera_bound_left */
    9000,  /* map_bound_top */
    -5000,  /* map_bound_bottom */
    12000,  /* map_bound_right */
    -12000,  /* map_bound_left */
    0x00000009,  /* bgm_id */
    NULL,  /* map_nodes */
    dGRHyruleMap_gap_0x0000,  /* item_weights */
    -2600,  /* alt_warning */
    6000,  /* camera_bound_team_top */
    -2100,  /* camera_bound_team_bottom */
    6000,  /* camera_bound_team_right */
    -6000,  /* camera_bound_team_left */
    9000,  /* map_bound_team_top */
    -5000,  /* map_bound_team_bottom */
    11000,  /* map_bound_team_right */
    -11000,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* Raw data from file offset 0x00BC to 0x00E0 (36 bytes) */
u8 dGRHyruleMap_TwisterThrow_HitDesc[36] = {
	#include <GRHyruleMap/TwisterThrow_HitDesc.data.inc.c>
};

