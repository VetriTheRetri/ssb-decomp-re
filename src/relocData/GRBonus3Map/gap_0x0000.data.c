/* MPGroundData (typed via tools/typeStageMap.py) */

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern DObjDesc dGRBonus3File2_Layer0DObj[];
extern DObjDesc dGRBonus3File2_Layer1DObj[];
extern MObjSub dGRBonus3File2_Layer1MObj_MObjSub[];
extern u32 dGRBonus3File2_Layer1MatAnim_MatAnimJoint[];
extern u32 dGRBonus3File2_MPGeometryData_0x65A8[];
extern u32 dGRBonus3File2_gap_0x0000[];
MPGroundData dGRBonus3Map_gap_0x0000 =
{
    /* gr_desc[4] */
    {
        { dGRBonus3File2_Layer0DObj, NULL, NULL, NULL },
        { dGRBonus3File2_Layer1DObj, NULL, dGRBonus3File2_Layer1MObj_MObjSub, dGRBonus3File2_Layer1MatAnim_MatAnimJoint },
        { NULL, NULL, NULL, NULL },
        { NULL, NULL, NULL, NULL },
    },
    dGRBonus3File2_MPGeometryData_0x65A8,  /* map_geometry */
    2,  /* layer_mask */
    NULL,  /* wallpaper */
    { 0x00, 0x00, 0x00 },  /* fog_color */
    0x00,  /* fog_alpha */
    /* emblem_colors[4] */
    {
        { 0xFF, 0xA0, 0xA0 },
        { 0xB4, 0xB4, 0xFF },
        { 0xE6, 0xE6, 0x78 },
        { 0xA0, 0xFF, 0xA0 },
    },
    0xDCDCDC00,  /* unused */
    { 0.0f, -60.0f, -0.17453294f },  /* light_angle */
    7500,  /* camera_bound_top */
    -7500,  /* camera_bound_bottom */
    7500,  /* camera_bound_right */
    -7500,  /* camera_bound_left */
    8000,  /* map_bound_top */
    -8000,  /* map_bound_bottom */
    8000,  /* map_bound_right */
    -8000,  /* map_bound_left */
    0x0000001A,  /* bgm_id */
    dGRBonus3File2_gap_0x0000,  /* map_nodes */
    NULL,  /* item_weights */
    -32768,  /* alt_warning */
    7500,  /* camera_bound_team_top */
    -7500,  /* camera_bound_team_bottom */
    7500,  /* camera_bound_team_right */
    -7500,  /* camera_bound_team_left */
    8000,  /* map_bound_team_top */
    -8000,  /* map_bound_team_bottom */
    8000,  /* map_bound_team_right */
    -8000,  /* map_bound_team_left */
    { 0, 0, 0 },  /* zoom_start */
    { 0, 0, 0 },  /* zoom_end */
};
