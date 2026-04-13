/* MPGroundData (typed via tools/typeStageMap.py) */

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dStageJungle_sprite_0x26C88[];
extern DObjDesc dStageJungleFile2_Layer0DObj[];
extern DObjDesc dStageJungleFile2_Layer1DObj[];
extern u32 dStageJungleFile2_Layer1Anim_AnimJoint[];
extern DObjDesc dStageJungleFile2_Layer2DObj[];
extern DObjDesc dStageJungleFile2_Layer3DObj[];
extern u32 dStageJungleFile2_MPGeometryData_0x9AFC[];
MPGroundData dGRJungleMap_MapHeader_0x0014 =
{
    /* gr_desc[4] */
    {
        { dStageJungleFile2_Layer0DObj, NULL, NULL, NULL },
        { dStageJungleFile2_Layer1DObj, dStageJungleFile2_Layer1Anim_AnimJoint, NULL, NULL },
        { dStageJungleFile2_Layer2DObj, NULL, NULL, NULL },
        { dStageJungleFile2_Layer3DObj, NULL, NULL, NULL },
    },
    dStageJungleFile2_MPGeometryData_0x9AFC,  /* map_geometry */
    0,  /* layer_mask */
    dStageJungle_sprite_0x26C88,  /* wallpaper */
    { 0x5A, 0x0F, 0x00 },  /* fog_color */
    0x00,  /* fog_alpha */
    /* emblem_colors[4] */
    {
        { 0xFF, 0x80, 0x80 },
        { 0x80, 0x80, 0xFF },
        { 0xFF, 0xFF, 0x80 },
        { 0x80, 0xFF, 0x80 },
    },
    0xC8C8C800,  /* unused */
    { 0.0f, 120.0f, -0.17453294f },  /* light_angle */
    4000,  /* camera_bound_top */
    -2000,  /* camera_bound_bottom */
    3700,  /* camera_bound_right */
    -3700,  /* camera_bound_left */
    8000,  /* map_bound_top */
    -4700,  /* map_bound_bottom */
    8100,  /* map_bound_right */
    -8100,  /* map_bound_left */
    0x00000005,  /* bgm_id */
    (void *)0xFFFF02A6,  /* map_nodes */
    dGRJungleMap_gap_0x0000,  /* item_weights */
    -1900,  /* alt_warning */
    4000,  /* camera_bound_team_top */
    -2000,  /* camera_bound_team_bottom */
    3600,  /* camera_bound_team_right */
    -3600,  /* camera_bound_team_left */
    8000,  /* map_bound_team_top */
    -4700,  /* map_bound_team_bottom */
    8400,  /* map_bound_team_right */
    -8400,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};
