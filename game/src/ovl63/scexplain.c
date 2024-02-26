#include <ft/fighter.h>
#include <it/item.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

extern intptr_t D_NF_000000C6;
extern intptr_t D_NF_000000FC;
extern intptr_t D_NF_00001404;
extern intptr_t D_NF_00005028;
extern intptr_t D_NF_00005300;
extern intptr_t D_NF_00005A98;
extern intptr_t D_NF_00005B68;
extern intptr_t D_NF_00005C20;
extern intptr_t D_NF_00005E40;
extern intptr_t D_NF_00009628;
extern intptr_t D_NF_00011F60;
extern intptr_t D_NF_0001D338;
extern intptr_t D_NF_0001D948;
extern intptr_t D_NF_0001DF58;
extern intptr_t D_NF_0001E018;
extern intptr_t D_NF_800A5240;
extern intptr_t D_NF_8018EC00;
extern intptr_t D_NF_80392A00;

// 0x8018E6E0
s32 dExplainInterfacePositions[/* */] = {  55, 125, 195, 265 };

// 0x8018E6F4
intptr_t dExplainStickACommandOffsets[/* */] = { 0x00000000, 0x00005390, 0x00005390, 0x000053C0, 0x000053F0, 0x00005430, 0x00005430 };

// 0x8018E710
intptr_t dExplainInputSequenceOffsets[/* */] = { 0x00000000, 0x000009D4, 0x000013FC, 0x00001400 };

// 0x8018E720
Unk800D4060 D_ovl63_8018E720;

// 0x8018E724
s32 D_ovl63_8018E724;

// 0x8018E728
s32 D_ovl63_8018E728;

// 0x8018E72C
scUnkDataBounds D_ovl63_8018E72C;

// 0x8018E748
scRuntimeInfo D_ovl63_8018E748;

// 0x8018E7F0
gmMatchInfo gExplainBattleState;

// 0x8018E9E0
void *gExplainAnimFileHead;

// 0x8018E9E4
void *gExplainMainFileHead;

// 0x8018E9E8
scExplainPhase *gExplainPhase;

// 0x8018E9F0
scExplainMain gExplainStruct;

// 0x8018EA30
RldmFileNode D_ovl63_8018EA30[50];

// 0x8018EBC0
RldmFileNode D_ovl63_8018EBC0[7];

// 0x8018D0C0
void func_ovl63_8018D0C0(void)
{
    gExplainAnimFileHead = rldm_get_file_with_external_heap((uintptr_t)&D_NF_000000C6, hal_alloc(rldm_bytes_needed_to_load((uintptr_t)&D_NF_000000C6), 0x10));
    gExplainMainFileHead = rldm_get_file_with_external_heap((uintptr_t)&D_NF_000000FC, hal_alloc(rldm_bytes_needed_to_load((uintptr_t)&D_NF_000000FC), 0x10));
    gExplainPhase = (scExplainPhase*) ((uintptr_t)gExplainMainFileHead + (intptr_t)&D_NF_00001404);
}

// 0x8018E7F0
void scExplainSetBattleState(void)
{
    gExplainBattleState = gDefaultBattleState;

    gBattleState = &gExplainBattleState;

    gBattleState->game_type = gmMatch_GameType_Explain;

    gBattleState->gr_kind = Gr_Kind_Explain;

    gBattleState->pl_count = 2;
    gBattleState->cp_count = 0;

    gBattleState->player_block[0].character_kind = Ft_Kind_Mario;
    gBattleState->player_block[1].character_kind = Ft_Kind_Luigi;

    gBattleState->player_block[0].player_kind = Pl_Kind_GameKey;
    gBattleState->player_block[1].player_kind = Pl_Kind_GameKey;
}

// 0x8018D1D4
void scExplainSetStartExplain(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        ftCommon_Appear_SetStatus(fighter_gobj);
        ftCommon_SetAllowPlayerControl(fighter_gobj);

        fp->camera_mode = 4;

        fighter_gobj = fighter_gobj->group_gobj_next;
    }
    gBattleState->game_status = gmMatch_GameStatus_Go;
}

// 0x8018D248
void func_ovl63_8018D248(void)
{
    OMCamera *cam = OMCameraGetStruct(func_8000B9FC(9, 0x80000000U, 0x64, 1, 0xFF));

    func_80007080
    (
        &cam->viewport,
        gCameraStruct.scissor_ulx,
        gCameraStruct.scissor_uly,
        gCameraStruct.scissor_lrx,
        gCameraStruct.scissor_lry
    );
}

// 0x8018D2D0
void func_ovl63_8018D2D0(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetScissor(gDisplayListHead[0]++, G_SC_NON_INTERLACE, 10, 160, 310, 230);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gDisplayListHead[0]++, rgba32_to_fill_color(0xFF, gDisplayListHead));
    gDPFillRectangle(gDisplayListHead[0]++, 10, 160, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x8018D3D8
void func_ovl63_8018D3D8(void)
{
    func_8000B93C(0x3EC, NULL, 9, 0x80000000, func_ovl63_8018D2D0, 0xF, 0, 0, 0, 0, 0, 0, 0);
}

// 0x8018D440
void scExplainSetPlayerInterfacePositions(void)
{
    gPlayerCommonInterface.ifplayers_pos_x = dExplainInterfacePositions;
    gPlayerCommonInterface.ifplayers_pos_y = 150;
}

// 0x8018D460
GObj* func_ovl63_8018D460(void)
{
    GObj *camera_gobj = func_8000B93C(0x3EC, NULL, 9, 0x80000000, func_ovl0_800CD2CC, 0xF, 0x04000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);

    func_80007080(&cam->viewport, 10.0F, 160.0F, 310.0F, 230.0F);

    return camera_gobj;
}

// 0x8018D500
GObj* func_ovl63_8018D500(void)
{
    GObj *camera_gobj = func_8000B93C(0x3EC, NULL, 9, 0x80000000, func_80017EC0, 0xF, 0x08000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);

    func_80008CF0(cam, 5, 1);
    func_80008CF0(cam, 6, 1);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->mtx_types.f6.f[0] = -150.0F;
    cam->mtx_types.f6.f[1] = 150.0F;
    cam->mtx_types.f6.f[2] = -110.0F;
    cam->mtx_types.f6.f[3] = 110.0F;

    return camera_gobj;
}

// 0x8018D5FC
void scExplainProcRenderControlStickSprite(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[1]++);
    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    func_80014768(gobj);

    gDPPipeSync(gDisplayListHead[1]++);
    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
}

// 0x8018D6DC
void scExplainProcUpdateControlStickSprite(GObj *gobj)
{
    func_8000DF34(gobj);

    if (DObjGetStruct(gobj)->mobj->mobj_f2 == 15.0F)
    {
        if ((gExplainStruct.stick_status == 4) || (gExplainStruct.stick_status == 6))
        {
            scExplainUpdateTapSparkEffect();
        }
    }
}

// 0x8018D748
GObj* scExplainMakeControlStickInterface(void)
{
    GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, scExplainProcRenderControlStickSprite, 0x1B, 0x80000000, -1);
    func_8000F590(interface_gobj, ((uintptr_t)gExplainAnimFileHead + (intptr_t)&D_NF_00005300), NULL, 0x12, 0, 0);
    func_8000F8F4(interface_gobj, ((uintptr_t)gExplainAnimFileHead + (intptr_t)&D_NF_00005028));
    omAddGObjCommonProc(interface_gobj, scExplainProcUpdateControlStickSprite, 1, 5);

    interface_gobj->obj_renderflags = GOBJ_RENDERFLAG_HIDDEN;

    return interface_gobj;
}

// 0x8018D808
void scExplainProcRenderTapSpark(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[1]++);
    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    func_80013E8C(gobj);

    gDPPipeSync(gDisplayListHead[1]++);
    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
}

// 0x8018D8E8
void scExplainUpdateTapSparkEffect(void)
{
    GObj *gobj = gExplainStruct.spark_gobj;
    DObj *dobj = DObjGetStruct(gobj);
    Vec3f *pos = &DObjGetStruct(gExplainStruct.stick_gobj)->translate.vec.f;

    if (gExplainStruct.stick_status == 4)
    {
        dobj->translate.vec.f.x = pos->x + 5.0F;
        dobj->translate.vec.f.y = pos->y + 15.0F;
    }
    else
    {
        dobj->translate.vec.f.x = pos->x + 15.0F;
        dobj->translate.vec.f.y = pos->y + 5.0F;
    }
    func_8000BED8(gobj, NULL, ((uintptr_t)gExplainAnimFileHead + (intptr_t)&D_NF_00005C20), 0.0F);
    func_8000DF34(gobj);

    gobj->obj_renderflags = GOBJ_RENDERFLAG_NONE;
}

// 0x8018D9B4
void scExplainProcUpdateTapSpark(GObj *gobj)
{
    func_8000DF34(gobj);

    if (DObjGetStruct(gobj)->mobj->mobj_f0 == AOBJ_FRAME_NULL)
    {
        gobj->obj_renderflags = GOBJ_RENDERFLAG_HIDDEN;
    }
}

// 0x8018DA04
GObj* scExplainMakeTapSpark(void)
{
    GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, scExplainProcRenderTapSpark, 0x1B, 0x80000000, -1);
    func_800092D0(interface_gobj, ((uintptr_t)gExplainAnimFileHead + (intptr_t)&D_NF_00005B68));
    func_80008CC0(DObjGetStruct(interface_gobj), 0x12, 0);
    func_8000F8F4(interface_gobj, ((uintptr_t)gExplainAnimFileHead + (intptr_t)&D_NF_00005A98));
    omAddGObjCommonProc(interface_gobj, scExplainProcUpdateTapSpark, 1, 5);

    interface_gobj->obj_renderflags = GOBJ_RENDERFLAG_HIDDEN;

    gExplainStruct.stick_status = 0;

    return interface_gobj;
}

// 0x8018DACC
void scExplainProcUpdateSpecialMoveRGBOverlay(void)
{
    s32 sw = gExplainPhase->rgb_overlay_args.sprite_status;
    GObj *gobj = gExplainStruct.rgb_gobj;

    // Check to apply trarnsparent RGB color overlay over control stick sprite when explaining B-button moves

    if (sw == 1)
    {
        DObj *dobj = DObjGetStruct(gobj);

        dobj->translate.vec.f.x = (gExplainPhase->control_stick_args.sprite_pos_x - 0x96);
        dobj->translate.vec.f.y = (-0x28 - gExplainPhase->control_stick_args.sprite_pos_y);

        gobj->obj_renderflags = GOBJ_RENDERFLAG_NONE;
    }
    else gobj->obj_renderflags = GOBJ_RENDERFLAG_HIDDEN;
}

// 0x8018DB44
GObj* scExplainMakeSpecialMoveRGBOverlay(void)
{
    GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, scExplainProcRenderTapSpark, 0x1B, 0x80000000, -1);
    func_800092D0(interface_gobj, ((uintptr_t)gExplainAnimFileHead + (intptr_t)&D_NF_00005E40));
    func_80008CC0(DObjGetStruct(interface_gobj), 0x12, 0);

    interface_gobj->obj_renderflags = GOBJ_RENDERFLAG_HIDDEN;

    return interface_gobj;
}

// 0x8018DBD0
void scExplainSetInterfaceGObjs(void)
{
    gExplainStruct.stick_gobj = scExplainMakeControlStickInterface();
    gExplainStruct.spark_gobj = scExplainMakeTapSpark();
    gExplainStruct.rgb_gobj   = scExplainMakeSpecialMoveRGBOverlay();
}

// 0x8018DC0C
SObj* scExplainMakeSObjOffset(intptr_t offset)
{
    GObj *interface_gobj;
    SObj *sobj;

    interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x1A, 0x80000000, -1);

    sobj = func_ovl0_800CCFDC(interface_gobj, (Sprite*) ((uintptr_t)gExplainAnimFileHead + offset));

    sobj->sprite.attr |= SP_HIDDEN;

    return sobj;
}

// 0x8018DC84
void scExplainSetPhaseSObjs(void)
{
    gExplainStruct.textbox_sobj  = scExplainMakeSObjOffset((intptr_t)&D_NF_00011F60);
    gExplainStruct.phase_sobj0 = scExplainMakeSObjOffset((intptr_t)&D_NF_0001D338);
    gExplainStruct.phase_sobj1 = scExplainMakeSObjOffset((intptr_t)&D_NF_0001D948);
    gExplainStruct.phase_sobj2 = scExplainMakeSObjOffset((intptr_t)&D_NF_0001DF58);
    gExplainStruct.phase_sobj3 = scExplainMakeSObjOffset((intptr_t)&D_NF_00009628);
    gExplainStruct.phase_sobj4 = scExplainMakeSObjOffset((intptr_t)&D_NF_0001E018);
    gExplainStruct.phase_sobj5 = scExplainMakeSObjOffset((intptr_t)&D_NF_0001E018);
}

// 0x8018DD18
void scExplainUpdateTextBoxSprite(void)
{
    gExplainStruct.textbox_sobj->sprite = *gExplainPhase->sprite;

    gExplainStruct.textbox_sobj->pos.x = gExplainPhase->textbox_pos_x + 10;
    gExplainStruct.textbox_sobj->pos.y = gExplainPhase->textbox_pos_y + 160;

    gExplainStruct.textbox_sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
}

// 0x8018DDBC
void func_ovl63_8018DDBC(void)
{
    s32 sw = gExplainPhase->control_stick_args.sprite_status;
    GObj *stick_gobj = gExplainStruct.stick_gobj;

    if (sw == FALSE)
    {
        stick_gobj->obj_renderflags = GOBJ_RENDERFLAG_HIDDEN;
    }
    else
    {
        DObj *dobj = DObjGetStruct(stick_gobj);

        dobj->translate.vec.f.x = gExplainPhase->control_stick_args.sprite_pos_x - 0x96;
        dobj->translate.vec.f.y = -0x28 - gExplainPhase->control_stick_args.sprite_pos_y;

        DObjGetStruct(stick_gobj)->child->flags = (sw == 2) ? DOBJ_RENDERFLAG_NONE : DOBJ_RENDERFLAG_HIDDEN;

        func_8000BED8(stick_gobj, NULL, dExplainStickACommandOffsets[sw] + (uintptr_t)gExplainAnimFileHead, 0.0F);
        func_8000DF34(stick_gobj);

        stick_gobj->obj_renderflags = GOBJ_RENDERFLAG_NONE;
    }
    gExplainStruct.stick_status = sw;
}

// 0x8018DEA0
void scExplainHideTapSpark(void)
{
    gExplainStruct.spark_gobj->obj_renderflags = GOBJ_RENDERFLAG_HIDDEN;
}

// 0x8018DEB4
void scExplainUpdateArgsSObj(scExplainArgs *args, SObj *sobj)
{
    if (args->sprite_status == 1)
    {
        sobj->sprite.attr &= ~SP_HIDDEN;

        sobj->pos.x = args->sprite_pos_x + 10;
        sobj->pos.y = args->sprite_pos_y + 160;
    }
    else sobj->sprite.attr |= SP_HIDDEN;
}

// 0x8018DF18
void scExplainDetectExit(void)
{
    s32 player;

    for (player = 0; player < ARRAY_COUNT(gPlayerControllers); player++)
    {
        u16 button_new = gPlayerControllers[player].button_new;

        if (button_new & (A_BUTTON | B_BUTTON | START_BUTTON))
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_Title;

            func_80005C74();
            break;
        }
    }
}

// 0x8018DF80
void scExplainCheckMakeFireFlower(void)
{
    Vec3f pos;
    Vec3f vel;

    if (gExplainStruct.phase == 16)
    {
        pos.x = -1400.0F;
        pos.y = 1500.0F;
        pos.z = 0.0F;

        vel.x = vel.z = 0.0F;
        vel.y = 10.0F;

        itManager_MakeItemSetupCommon(NULL, It_Kind_FFlower, &pos, &vel, ITEM_MASK_SPAWN_DEFAULT);
    }
}

// 0x8018DFF8
void scExplainUpdatePhase(void)
{
    if (gExplainStruct.phase_advance_wait == 0)
    {
        scExplainCheckMakeFireFlower();

        gExplainStruct.phase++;

        if (gExplainStruct.phase > 22)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_CharacterData;
            func_80005C74();

            return;
        }
        else
        {
            scExplainUpdateTextBoxSprite();
            func_ovl63_8018DDBC();
            scExplainHideTapSpark();
            scExplainProcUpdateSpecialMoveRGBOverlay();
            scExplainUpdateArgsSObj(&gExplainPhase->phase_args0, gExplainStruct.phase_sobj0);
            scExplainUpdateArgsSObj(&gExplainPhase->phase_args1, gExplainStruct.phase_sobj1);
            scExplainUpdateArgsSObj(&gExplainPhase->phase_args2, gExplainStruct.phase_sobj2);
            scExplainUpdateArgsSObj(&gExplainPhase->phase_args3, gExplainStruct.phase_sobj3);
            scExplainUpdateArgsSObj(&gExplainPhase->phase_args4, gExplainStruct.phase_sobj4);
            scExplainUpdateArgsSObj(&gExplainPhase->phase_args5, gExplainStruct.phase_sobj5);

            gExplainStruct.phase_advance_wait = gExplainPhase->phase_time;

            gExplainPhase++;
        }
    }
    gExplainStruct.phase_advance_wait--;
}

// 0x8018E114
void scExplainProcUpdateScene(GObj *gobj)
{
    scExplainDetectExit();
    scExplainUpdatePhase();
}

// 0x8018E13C
GObj* scExplainMakeSceneUpdateGObj(void)
{
    GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjCommonProc(interface_gobj, scExplainProcUpdateScene, 1, 5);

    gExplainStruct.phase_advance_wait = 0;
    gExplainStruct.phase = 0;

    scExplainProcUpdateScene(interface_gobj);

    return interface_gobj;
}

// 0x8018E1A0
void scExplainProcStart(void)
{
    s32 unused[3];
    GObj *fighter_gobj;
    s32 player;
    ftSpawnInfo player_spawn;
    Unk800D4060 sp58;

    scExplainSetBattleState();
    func_ovl63_8018E640();
    func_ovl63_8018D0C0();
    cmManager_SetViewportCoordinates(10, 10, 310, 160);
    func_ovl63_8018D248();
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_InitMapCollisionData();
    cmManager_MakeWallpaperCamera();
    grWallpaper_SetGroundWallpaper();
    func_ovl2_8010DB00();
    itManager_AllocUserData();
    grNodeInit_SetGroundFiles();
    ftManager_AllocFighterData(2, 2);
    wpManager_AllocUserData();
    efManager_AllocUserData();
    ifScreenFlash_InitInterfaceVars(0xFF);
    gmRumble_SetPlayerRumble();
    ftPublicity_SetPlayerPublicReact();

    for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
    {
        player_spawn = ftGlobal_SpawnInfo_MainData;

        if (gBattleState->player_block[player].player_kind == Pl_Kind_Not) continue;

        ftManager_SetFileDataKind(gBattleState->player_block[player].character_kind);

        player_spawn.ft_kind = gBattleState->player_block[player].character_kind;

        mpCollision_GetPlayerMPointPosition(player, &player_spawn.pos);

        player_spawn.lr_spawn = (player_spawn.pos.x >= 0.0F) ? LR_Left : LR_Right;

        player_spawn.team = gBattleState->player_block[player].team_index;

        player_spawn.player = player;

        player_spawn.model_lod = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? ftParts_LOD_HighPoly : ftParts_LOD_LowPoly;

        player_spawn.costume = gBattleState->player_block[player].costume_index;

        player_spawn.handicap = gBattleState->player_block[player].handicap;

        player_spawn.cp_level = gBattleState->player_block[player].level;

        player_spawn.stock_count = gBattleState->stock_setting;

        player_spawn.damage = 0;

        player_spawn.pl_kind = gBattleState->player_block[player].player_kind;

        player_spawn.p_controller = &gPlayerControllers[player];

        player_spawn.anim_heap = ftManager_AllocAnimHeapKind(gBattleState->player_block[player].character_kind);

        fighter_gobj = ftManager_MakeFighter(&player_spawn);

        gBattleState->player_block[player].player_color_index = player;
        gBattleState->player_block[player].tag_index = player;

        ftCommon_ClearPlayerMatchStats(player, fighter_gobj);

        ftCommon_SetHowToPlayInputSeq(fighter_gobj, (dExplainInputSequenceOffsets[player] + (uintptr_t)gExplainMainFileHead));
    }
    scExplainSetStartExplain();
    func_ovl2_8010E2D4();
    ifPlayer_MagnifyArrows_SetInterface();
    func_ovl2_8010E1A4();
    ifPlayer_MagnifyGlass_SetInterface();

    gPlayerCommonInterface.is_ifmagnify_display = TRUE;

    func_ovl2_8010DDC4();
    func_ovl2_8010E374();
    func_ovl2_8010E498();
    ifPlayer_Tag_SetInterface();
    scExplainSetPlayerInterfacePositions();
    func_ovl2_8010F3C0();
    ifPlayer_Damage_InitInterface();
    ifPlayer_Stocks_SetInterface();
    func_ovl63_8018D3D8();
    func_ovl63_8018D460();
    func_ovl63_8018D500();
    scExplainSetInterfaceGObjs();
    scExplainSetPhaseSObjs();
    scExplainMakeSceneUpdateGObj();
    mpCollision_SetPlayMusicID();
    func_800269C0(0x1EE);

    sp58 = D_ovl63_8018E720;

    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp58, 0xC, 1, 0);
}

// 0x8018E51C
void func_ovl63_8018E51C(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);

    ftRender_Lights_DisplayLightReflect(display_list, gMapLightAngleX, gMapLightAngleY);
}

// 0x8018E568
void jtgt_ovl63_8018E568(void)
{
    set_lcg_seed_ptr(&D_ovl63_8018E724);
    func_8000A5E4();
}

// 0x8018E594
void jtgt_ovl63_8018E594(void)
{
    set_lcg_seed_ptr(&D_ovl63_8018E728);
    func_800A26B8();
}

// 0x8018E5C0
void scExplainStartScene(void)
{
    D_ovl63_8018E72C.unk_scdatabounds_0xC = (uintptr_t) ((uintptr_t)&D_NF_800A5240 - 0x1900);

    func_80007024(&D_ovl63_8018E72C);
    set_lcg_seed_ptr(&D_ovl63_8018E724);

    D_ovl63_8018E748.arena_size = (uintptr_t) ((uintptr_t)&D_NF_80392A00 - (uintptr_t)&D_NF_8018EC00);
    D_ovl63_8018E748.proc_start = scExplainProcStart;

    func_800A2698(&D_ovl63_8018E748);
    func_ovl2_801157EC();
    set_lcg_seed_ptr(NULL);
}