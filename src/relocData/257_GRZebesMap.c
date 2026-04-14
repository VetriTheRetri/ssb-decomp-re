/* relocData file 257: GRZebesMap */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Item-randomizer weights — referenced by header.item_weights */
u8 dGRZebesMap_gap_0x0000[20] = {
	#include <GRZebesMap/gap_0x0000.data.inc.c>
};

/* MPGroundData (typed via tools/typeStageMap.py) */

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dStageZebes_sprite_0x26C88[];
extern DObjDesc dStageZebesFile2_Layer1DObj[];
extern u32 dStageZebesFile2_Layer1Anim_AnimJoint[];
extern MObjSub dStageZebesFile2_Layer1MObj_MObjSub[];
extern u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint[];
extern u32 dStageZebesFile2_MPGeometryData_0x6160[];
extern u32 dStageZebesFile2_gap_0x0000[];
MPGroundData dGRZebesMap_MapHeader_0x0014 =
{
    /* gr_desc[4] */
    {
        { NULL, NULL, NULL, NULL },
        { dStageZebesFile2_Layer1DObj, dStageZebesFile2_Layer1Anim_AnimJoint, dStageZebesFile2_Layer1MObj_MObjSub, dStageZebesFile2_Layer1MatAnim_MatAnimJoint },
        { NULL, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
    },
    dStageZebesFile2_MPGeometryData_0x6160,  /* map_geometry */
    2,  /* layer_mask */
    dStageZebes_sprite_0x26C88,  /* wallpaper */
    { 0x00, 0x00, 0x00 },  /* fog_color */
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
    4700,  /* camera_bound_top */
    -2400,  /* camera_bound_bottom */
    4500,  /* camera_bound_right */
    -4500,  /* camera_bound_left */
    9000,  /* map_bound_top */
    -4200,  /* map_bound_bottom */
    9500,  /* map_bound_right */
    -9500,  /* map_bound_left */
    0x00000001,  /* bgm_id */
    (void *)((u8 *)dStageZebesFile2_gap_0x0000 + 0xB08),  /* map_nodes */
    dGRZebesMap_gap_0x0000,  /* item_weights */
    -2900,  /* alt_warning */
    4400,  /* camera_bound_team_top */
    -2100,  /* camera_bound_team_bottom */
    4000,  /* camera_bound_team_right */
    -4000,  /* camera_bound_team_left */
    9000,  /* map_bound_team_top */
    -4200,  /* map_bound_team_bottom */
    9500,  /* map_bound_team_right */
    -9500,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* Raw data from file offset 0x00BC to 0x00E0 (36 bytes) */
u8 dGRZebesMap_Acid_GRAttackColl[36] = {
	#include <GRZebesMap/Acid_GRAttackColl.data.inc.c>
};

