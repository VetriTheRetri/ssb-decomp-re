/* relocData file 264: GRYamabukiMap */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern u8 dStageYamabukiFile2_Tex_0x28F0[];
extern u8 dStageYamabukiFile2_Tex_0x1BA0[];
extern u8 dStageYamabukiFile2_Tex_0x2360[];
extern u8 dStageYamabukiFile2_Tex_0x0460[];

/* Item-randomizer weights — referenced by header.item_weights */
u8 dGRYamabukiMap_gap_0x0000[20] = {
	#include <GRYamabukiMap/gap_0x0000.data.inc.c>
};

/* MPGroundData (typed via tools/typeStageMap.py) */

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dStagePokemon_sprite_0x26C88[];
extern DObjDesc dStageYamabukiFile2_Layer0DObj[];
extern u32 dStageYamabukiFile2_Layer0Anim_AnimJoint[];
extern DObjDesc dStageYamabukiFile2_Layer1DObj[];
extern u32 dStageYamabukiFile2_Layer1Anim_AnimJoint[];
extern MObjSub dStageYamabukiFile2_Layer1MObj_MObjSub[];
extern u32 dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint[];
extern DObjDesc dStageYamabukiFile2_Layer3DObj[];
extern u32 dStageYamabukiFile2_MPGeometryData_0x6E8C[];
extern u32 dStageYamabukiFile2_gap_0x0000[];
MPGroundData dGRYamabukiMap_ItemHead_0x0014 =
{
    /* gr_desc[4] */
    {
        { dStageYamabukiFile2_Layer0DObj, dStageYamabukiFile2_Layer0Anim_AnimJoint, NULL, NULL },
        { dStageYamabukiFile2_Layer1DObj, dStageYamabukiFile2_Layer1Anim_AnimJoint, dStageYamabukiFile2_Layer1MObj_MObjSub, dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint },
        { NULL, NULL, NULL, NULL },
        { dStageYamabukiFile2_Layer3DObj, NULL, NULL, NULL },
    },
    dStageYamabukiFile2_MPGeometryData_0x6E8C,  /* map_geometry */
    10,  /* layer_mask */
    dStagePokemon_sprite_0x26C88,  /* wallpaper */
    { 0xCD, 0xE6, 0xFF },  /* fog_color */
    0x00,  /* fog_alpha */
    /* emblem_colors[4] */
    {
        { 0xFF, 0xA0, 0xA0 },
        { 0xA0, 0xA0, 0xFF },
        { 0xF0, 0xF0, 0x64 },
        { 0xAA, 0xFF, 0xAA },
    },
    0xDCDCDC00,  /* unused */
    { 20.0f, 45.0f, -0.27925268f },  /* light_angle */
    5000,  /* camera_bound_top */
    -2500,  /* camera_bound_bottom */
    5700,  /* camera_bound_right */
    -5700,  /* camera_bound_left */
    9000,  /* map_bound_top */
    -6000,  /* map_bound_bottom */
    10000,  /* map_bound_right */
    -10000,  /* map_bound_left */
    nSYAudioBGMYamabuki,  /* bgm_id */
    (void *)((u8 *)dStageYamabukiFile2_gap_0x0000 + 0x8A0),  /* map_nodes */
    dGRYamabukiMap_gap_0x0000,  /* item_weights */
    -2900,  /* alt_warning */
    5000,  /* camera_bound_team_top */
    -2500,  /* camera_bound_team_bottom */
    5300,  /* camera_bound_team_right */
    -5300,  /* camera_bound_team_left */
    9000,  /* map_bound_team_top */
    -5700,  /* map_bound_team_bottom */
    9700,  /* map_bound_team_right */
    -9700,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};

/* Raw data from file offset 0x00BC to 0x0104 (72 bytes) */
u8 dGRYamabukiMap_GLucky_ItemAttributes[72] = {
	#include <GRYamabukiMap/GLucky_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x0104 to 0x014C (72 bytes) */
u8 dGRYamabukiMap_Marumine_ItemAttributes[72] = {
	#include <GRYamabukiMap/Marumine_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x014C to 0x016C (32 bytes) */
u8 dGRYamabukiMap_Marumine_AttackEvents[32] = {
	#include <GRYamabukiMap/Marumine_AttackEvents.data.inc.c>
};

/* Raw data from file offset 0x016C to 0x01B4 (72 bytes) */
u8 dGRYamabukiMap_Porygon_ItemAttributes[72] = {
	#include <GRYamabukiMap/Porygon_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x01B4 to 0x01FC (72 bytes) */
u8 dGRYamabukiMap_Porygon_HitParties[72] = {
	#include <GRYamabukiMap/Porygon_HitParties.data.inc.c>
};

/* Raw data from file offset 0x01FC to 0x0244 (72 bytes) */
u8 dGRYamabukiMap_Hitokage_ItemAttributes[72] = {
	#include <GRYamabukiMap/Hitokage_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x0244 to 0x0278 (52 bytes) */
u8 dGRYamabukiMap_HitokageFlame_WeaponAttributes[52] = {
	#include <GRYamabukiMap/HitokageFlame_WeaponAttributes.data.inc.c>
};

/* Raw data from file offset 0x0278 to 0x02C0 (72 bytes) */
u8 dGRYamabukiMap_Fushigibana_ItemAttributes[72] = {
	#include <GRYamabukiMap/Fushigibana_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x02C0 to 0x0308 (72 bytes) */
u8 dGRYamabukiMap_Fushigibana_HitParties[72] = {
	#include <GRYamabukiMap/Fushigibana_HitParties.data.inc.c>
};

/* Raw data from file offset 0x0308 to 0x0340 (56 bytes) */
u8 dGRYamabukiMap_FushigibanaRazor_WeaponAttributes[56] = {
	#include <GRYamabukiMap/FushigibanaRazor_WeaponAttributes.data.inc.c>
};

