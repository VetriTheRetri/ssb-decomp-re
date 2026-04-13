/* MPGroundData (typed via tools/typeStageMap.py) */

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dStageInishieBackground_0x26c88[];
extern DObjDesc dStageInishieFile2_Layer0DObj[];
extern u32 dStageInishieFile2_Layer0Anim_AnimJoint[];
extern MObjSub dStageInishieFile2_Layer0MObj_MObjSub[];
extern u32 dStageInishieFile2_Layer0MatAnim_MatAnimJoint[];
extern DObjDesc dStageInishieFile2_Layer1DObj[];
extern DObjDesc dStageInishieFile2_Layer2DObj[];
extern DObjDesc dStageInishieFile2_Layer3DObj[];
extern u32 dStageInishieFile2_MPGeometryData_0x6698[];
MPGroundData dGRInishieMap_MapHeader_0x0014 =
{
    /* gr_desc[4] */
    {
        { dStageInishieFile2_Layer0DObj, dStageInishieFile2_Layer0Anim_AnimJoint, dStageInishieFile2_Layer0MObj_MObjSub, dStageInishieFile2_Layer0MatAnim_MatAnimJoint },
        { dStageInishieFile2_Layer1DObj, NULL, NULL, NULL },
        { dStageInishieFile2_Layer2DObj, NULL, NULL, NULL },
        { dStageInishieFile2_Layer3DObj, NULL, NULL, NULL },
    },
    dStageInishieFile2_MPGeometryData_0x6698,  /* map_geometry */
    1,  /* layer_mask */
    dStageInishieBackground_0x26c88,  /* wallpaper */
    { 0x71, 0x88, 0xB8 },  /* fog_color */
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
    3000,  /* camera_bound_top */
    -1000,  /* camera_bound_bottom */
    3400,  /* camera_bound_right */
    -3400,  /* camera_bound_left */
    9000,  /* map_bound_top */
    -4350,  /* map_bound_bottom */
    7400,  /* map_bound_right */
    -7400,  /* map_bound_left */
    0x00000002,  /* bgm_id */
    (void *)0x0036017C,  /* map_nodes */
    dGRInishieMap_gap_0x0000,  /* item_weights */
    -2200,  /* alt_warning */
    3000,  /* camera_bound_team_top */
    -1000,  /* camera_bound_team_bottom */
    4500,  /* camera_bound_team_right */
    -4500,  /* camera_bound_team_left */
    9000,  /* map_bound_team_top */
    -4350,  /* map_bound_team_bottom */
    4500,  /* map_bound_team_right */
    -4500,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 15000 },  /* zoom_end */
};
