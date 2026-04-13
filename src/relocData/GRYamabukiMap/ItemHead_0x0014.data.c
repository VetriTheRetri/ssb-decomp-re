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
    0x00000007,  /* bgm_id */
    (void *)0x002F0228,  /* map_nodes */
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
