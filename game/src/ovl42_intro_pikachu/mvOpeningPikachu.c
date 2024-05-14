#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningPikachu.h>

// ovl42 stuff
extern CameraVec7 dMvOpeningPikachuCameraSettingsStart; // 0x8018E0C0
extern CameraVec7 dMvOpeningPikachuCameraSettingsEnd; // 0x8018E0DC

// 0x8018E0F8
ftExplainCommand dMvOpeningPikachuInputSeq[/* */] =
{
    FTEXPLAIN_EVENT_END()                          // 0x0000
};

extern RldmFileId D_ovl42_8018E0FC[2];
extern intptr_t dMvOpeningPikachuNameOffsets[8]; // 0x8018E104;
extern f32 dMvOpeningPikachuNameCharPositions[7]; // 0x8018E124;

extern scUnkDataBounds D_ovl42_8018E140;
extern scRuntimeInfo D_ovl42_8018E15C;

extern s32 gMvOpeningPikachuFramesElapsed; // 0x8018E228
extern GObj* gMvOpeningPikachuNameGObj; // 0x8018E22C
extern GObj* gMvOpeningPikachuStageFighterGObj; // 0x8018E230

extern GObj* gMvOpeningPikachuStageCameraGObj; // 0x8018E238
extern void* gMvOpeningPikachuAnimHeap; // 0x8018E23C
extern f32 gMvOpeningPikachuPosedFighterYSpeed; // 0x8018E240

extern CameraVec7 dMvOpeningPikachuCameraSettingsAdjustedStart; // 0x8018E248
extern CameraVec7 dMvOpeningPikachuCameraSettingsAdjustedEnd; // 0x8018E268

extern rdFileNode D_ovl42_8018E288[48];
extern rdFileNode D_ovl42_8018E408[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningPikachuFilesArray[2]; // 0x8018E440[2]
// gMvOpeningPikachuFilesArray[0] - D_ovl42_8018E440; // file 0x025 pointer
// gMvOpeningPikachuFilesArray[1] - D_ovl42_8018E444; // file 0x041 pointer

extern gmBattleState gMvOpeningPikachuBattleState; // 0x8018E448

// Offsets
extern intptr_t FILE_041_PIKACHU_CAMERA_PARAMS_OFFSET = 0x120; // file 0x041 offset for Pikachu's fighter pose camera settings

// 0x8018D0C0
void mvOpeningPikachuLoadFiles()
{
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = D_ovl42_8018E288;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl42_8018E288);
    rldmSetup.forceBuf = D_ovl42_8018E408;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl42_8018E408);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl42_8018E0FC, ARRAY_COUNT(D_ovl42_8018E0FC), gMvOpeningPikachuFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl42_8018E0FC, ARRAY_COUNT(D_ovl42_8018E0FC)), 0x10));
}

// 0x8018D160
void mvOpeningPikachuSetNameColor(SObj* name_sobj)
{
    name_sobj->sprite.attr &= ~SP_FASTCOPY;
    name_sobj->sprite.attr |= SP_TRANSPARENT;
    name_sobj->shadow_color.r = 0xFF;
    name_sobj->shadow_color.g = 0xFF;
    name_sobj->shadow_color.b = 0xFF;
    name_sobj->sprite.red = 0xFF;
    name_sobj->sprite.green = 0xFF;
    name_sobj->sprite.blue = 0xFF;
}

// 0x8018D194
void mvOpeningPikachuDrawName()
{
    GObj* name_gobj;
    SObj* name_sobj;
    intptr_t offsets[8] = dMvOpeningPikachuNameOffsets;
    f32 x_positions[7] = dMvOpeningPikachuNameCharPositions;
    s32 i;

    gMvOpeningPikachuNameGObj = name_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    omAddGObjRenderProc(name_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);

    for (i = 0; offsets[i] != 0; i++)
    {
        name_sobj = gcAppendSObjWithSprite(name_gobj, GetAddressFromOffset(gMvOpeningPikachuFilesArray[0], offsets[i]));
        name_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_sobj->sprite.attr |= SP_TRANSPARENT;
        name_sobj->pos.x = x_positions[i] + 65.0F;
        name_sobj->pos.y = 100.0F;

        mvOpeningPikachuSetNameColor(name_sobj);
    }
}

// 0x8018D334
void mvOpeningPikachuAnimateStageCamera(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);

    if (gMvOpeningPikachuFramesElapsed >= 15)
    {
        cam->vec.eye.x += (((dMvOpeningPikachuCameraSettingsAdjustedEnd.eye.x - dMvOpeningPikachuCameraSettingsAdjustedStart.eye.x) / 45.0F));
        cam->vec.eye.y += (((dMvOpeningPikachuCameraSettingsAdjustedEnd.eye.y - dMvOpeningPikachuCameraSettingsAdjustedStart.eye.y) / 45.0F));
        cam->vec.eye.z += (((dMvOpeningPikachuCameraSettingsAdjustedEnd.eye.z - dMvOpeningPikachuCameraSettingsAdjustedStart.eye.z) / 45.0F));
        cam->vec.at.x += (((dMvOpeningPikachuCameraSettingsAdjustedEnd.at.x - dMvOpeningPikachuCameraSettingsAdjustedStart.at.x) / 45.0F));
        cam->vec.at.y += (((dMvOpeningPikachuCameraSettingsAdjustedEnd.at.y - dMvOpeningPikachuCameraSettingsAdjustedStart.at.y) / 45.0F));
        cam->vec.at.z += (((dMvOpeningPikachuCameraSettingsAdjustedEnd.at.z - dMvOpeningPikachuCameraSettingsAdjustedStart.at.z) / 45.0F));
        cam->vec.up.x += (((dMvOpeningPikachuCameraSettingsAdjustedEnd.upx - dMvOpeningPikachuCameraSettingsAdjustedStart.upx) / 45.0F));
    }
}

// 0x8018D42C
void mvOpeningPikachuCreateStageViewport(Vec3f arg0)
{
    Camera *cam;

    dMvOpeningPikachuCameraSettingsAdjustedStart = dMvOpeningPikachuCameraSettingsStart;
    dMvOpeningPikachuCameraSettingsAdjustedEnd = dMvOpeningPikachuCameraSettingsEnd;

    gMvOpeningPikachuStageCameraGObj = func_ovl2_8010DB2C(0);
    cam = CameraGetStruct(gMvOpeningPikachuStageCameraGObj);
    func_80007080(&cam->viewport, 110.0F, 10.0F, 310.0F, 230.0F);
    cam->projection.persp.aspect = 10.0F / 11.0F;
    func_8000B39C(gMvOpeningPikachuStageCameraGObj);
    omAddGObjCommonProc(gMvOpeningPikachuStageCameraGObj, mvOpeningPikachuAnimateStageCamera, 1, 1);

    dMvOpeningPikachuCameraSettingsAdjustedStart.eye.x += arg0.x;
    dMvOpeningPikachuCameraSettingsAdjustedStart.eye.y += arg0.y;
    dMvOpeningPikachuCameraSettingsAdjustedStart.eye.z += arg0.z;
    dMvOpeningPikachuCameraSettingsAdjustedStart.at.x += arg0.x;
    dMvOpeningPikachuCameraSettingsAdjustedStart.at.y += arg0.y;
    dMvOpeningPikachuCameraSettingsAdjustedStart.at.z += arg0.z;

    dMvOpeningPikachuCameraSettingsAdjustedEnd.eye.x += arg0.x;
    dMvOpeningPikachuCameraSettingsAdjustedEnd.eye.y += arg0.y;
    dMvOpeningPikachuCameraSettingsAdjustedEnd.eye.z += arg0.z;
    dMvOpeningPikachuCameraSettingsAdjustedEnd.at.x += arg0.x;
    dMvOpeningPikachuCameraSettingsAdjustedEnd.at.y += arg0.y;
    dMvOpeningPikachuCameraSettingsAdjustedEnd.at.z += arg0.z;

    cam->vec.eye.x = dMvOpeningPikachuCameraSettingsAdjustedStart.eye.x;
    cam->vec.eye.y = dMvOpeningPikachuCameraSettingsAdjustedStart.eye.y;
    cam->vec.eye.z = dMvOpeningPikachuCameraSettingsAdjustedStart.eye.z;
    cam->vec.at.x = dMvOpeningPikachuCameraSettingsAdjustedStart.at.x;
    cam->vec.at.y = dMvOpeningPikachuCameraSettingsAdjustedStart.at.y;
    cam->vec.at.z = dMvOpeningPikachuCameraSettingsAdjustedStart.at.z;
    cam->vec.up.x = dMvOpeningPikachuCameraSettingsAdjustedStart.upx;
}

// 0x8018D634
void mvOpeningPikachuInitFighterStagePanel()
{
    GObj* fighter_gobj;
    s32 i;
    s32 foo, bar;
    s32 pos_ids;
    Vec3f spawn_position;

    grWallpaper_SetGroundWallpaper();
    grNodeInit_SetGroundFiles();

    if (mpCollision_GetMPointCountKind(mpMPoint_Kind_AutoDemoSpawn1) != 1)
    {
        while (TRUE)
        {
            gsFatalPrintF("wrong number of mapobject");
            smCrashPrintGObjStatus();
        }
    }

    mpCollision_GetMPointIDsKind(mpMPoint_Kind_AutoDemoSpawn1, &pos_ids);
    mpCollision_GetMPointPositionID(pos_ids, &spawn_position);
    mvOpeningPikachuCreateStageViewport(spawn_position);
    gmRumble_SetPlayerRumble();
    ftPublicReactSetup();

    for (i = 0; i < ARRAY_COUNT(gBattleState->player_block); i++)
    {
        ftCreateDesc spawn_info = dFtDefaultFighterDesc;

        if (gBattleState->player_block[i].player_kind == Pl_Kind_Not) continue;

        ftManager_SetFileDataKind(gBattleState->player_block[i].character_kind);

        spawn_info.ft_kind = gBattleState->player_block[i].character_kind;
        spawn_info.pos.x = spawn_position.x;
        spawn_info.pos.y = spawn_position.y;
        spawn_info.pos.z = spawn_position.z;
        spawn_info.lr_spawn = LR_Right;
        spawn_info.team = gBattleState->player_block[i].team_index;
        spawn_info.player = i;
        spawn_info.model_lod = ftParts_LOD_HighPoly;
        spawn_info.costume = gBattleState->player_block[i].costume_index;
        spawn_info.handicap = gBattleState->player_block[i].handicap;
        spawn_info.cp_level = gBattleState->player_block[i].level;
        spawn_info.stock_count = gBattleState->stock_setting;
        spawn_info.damage = 0;
        spawn_info.pl_kind = gBattleState->player_block[i].player_kind;
        spawn_info.controller = &gPlayerControllers[i];
        spawn_info.anim_heap = ftManager_AllocAnimHeapKind(gBattleState->player_block[i].character_kind);

        gMvOpeningPikachuStageFighterGObj = fighter_gobj = ftManager_MakeFighter(&spawn_info);

        ftCommon_ClearPlayerMatchStats(i, fighter_gobj);
        ftCommon_SetHowToPlayInputSeq(fighter_gobj, dMvOpeningPikachuInputSeq);
    }
}

// 0x8018D864
void mvOpeningPikachuRenderPosedFighterBackground(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 110, 170, 110, 255);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 110, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D964
void mvOpeningPikachuCreatePosedFighterBackground() {
    omAddGObjRenderProc(omMakeGObjCommon(0, 0, 0x13, 0x80000000), mvOpeningPikachuRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 0x8018D9B0
void mvOpeningPikachuAnimatePosedFighter(GObj* fighter_gobj)
{
    switch (gMvOpeningPikachuFramesElapsed)
    {
        default:
            break;
        case 15:
            gMvOpeningPikachuPosedFighterYSpeed = 17.0F;
            break;
        case 45:
            gMvOpeningPikachuPosedFighterYSpeed = 15.0F;
            break;
        case 60:
            gMvOpeningPikachuPosedFighterYSpeed = 0.0F;
            break;
    }

    if ((gMvOpeningPikachuFramesElapsed > 15) && (gMvOpeningPikachuFramesElapsed < 45))
    {
        gMvOpeningPikachuPosedFighterYSpeed += -1.0F / 15.0F;
    }
    if ((gMvOpeningPikachuFramesElapsed > 45) && (gMvOpeningPikachuFramesElapsed < 60))
    {
        gMvOpeningPikachuPosedFighterYSpeed += -1.0F;
    }

    DObjGetStruct(fighter_gobj)->translate.vec.f.y += gMvOpeningPikachuPosedFighterYSpeed;
}

// 0x8018DA80
void mvOpeningPikachuCreatePosedFighter()
{
    GObj* fighter_gobj;
    ftCreateDesc spawn_info = dFtDefaultFighterDesc;

    spawn_info.ft_kind = Ft_Kind_Pikachu;
    spawn_info.costume = ftCostume_GetIndexFFA(Ft_Kind_Pikachu, 0);
    spawn_info.anim_heap = gMvOpeningPikachuAnimHeap;
    spawn_info.pos.x = 0.0f;
    spawn_info.pos.y = -600.0f;
    spawn_info.pos.z = 0.0f;

    fighter_gobj = ftManager_MakeFighter(&spawn_info);
    func_ovl1_803905CC(fighter_gobj, 0x1000C);
    omMoveGObjDL(fighter_gobj, 0x1A, -1);
    omAddGObjCommonProc(fighter_gobj, mvOpeningPikachuAnimatePosedFighter, 1, 1);

    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 0x8018DB80
void mvOpeningPikachuCreateNameViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DC20
void mvOpeningPikachuCreatePosedFighterViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
    cam->projection.persp.aspect = 5.0F / 11.0F;
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningPikachuFilesArray[1], &FILE_041_PIKACHU_CAMERA_PARAMS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x8018DD10
void mvOpeningPikachuCreatePosedFighterBackgroundViewport()
{
    Camera *cam;
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
    cam->flags = 5;
}

// 0x8018DDC0
void mvOpeningPikachuMainProc(GObj* arg0)
{
    gMvOpeningPikachuFramesElapsed += 1;

    if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 1U;
        func_80005C74();
    }

    if (gMvOpeningPikachuFramesElapsed == 15)
    {
        omEjectGObjCommon(gMvOpeningPikachuNameGObj);
        mvOpeningPikachuInitFighterStagePanel();
        mvOpeningPikachuCreatePosedFighterBackground();
        mvOpeningPikachuCreatePosedFighter();
    }

    if (gMvOpeningPikachuFramesElapsed == 60)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 0x26;
        func_80005C74();
    }
}

// 0x8018DE7C
void mvOpeningPikachuInitFramesElapsed()
{
    gMvOpeningPikachuFramesElapsed = 0;
}

// 0x8018DE88
void mvOpeningPikachuInit()
{
    gMvOpeningPikachuBattleState = gDefaultBattleState;
    gBattleState = &gMvOpeningPikachuBattleState;

    gBattleState->game_type = gmMatch_GameType_Intro;

    gBattleState->gr_kind = Gr_Kind_Yamabuki;
    gBattleState->pl_count = 1;

    gBattleState->player_block[0].character_kind = Ft_Kind_Pikachu;
    gBattleState->player_block[0].player_kind = Pl_Kind_Key;

    mvOpeningPikachuLoadFiles();
    omMakeGObjCommon(0x3F7, mvOpeningPikachuMainProc, 0xD, 0x80000000);
    func_8000B9FC(9, 0x80000000, 0x64, 3, 0xFF);
    mvOpeningPikachuInitFramesElapsed();
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_InitMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    ftManager_AllocFighterData(3, 2);
    wpManagerAllocWeapons();
    itManagerInitItems();
    efManager_AllocUserData();
    ftManager_SetFileDataKind(Ft_Kind_Pikachu);

    gMvOpeningPikachuAnimHeap = gsMemoryAlloc(D_ovl2_80130D9C, 0x10);
    mvOpeningPikachuCreateNameViewport();
    mvOpeningPikachuCreatePosedFighterBackgroundViewport();
    mvOpeningPikachuCreatePosedFighterViewport();
    mvOpeningPikachuDrawName();

    while (func_8000092C() < 2145U)
    {
        // sleep
    }
}

// 0x8018E010
void gMvOpeningPikachuSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, gMapLightAngleX, gMapLightAngleY);
}

// intro_focus_pikachu_entry
void intro_focus_pikachu_entry()
{
    D_ovl42_8018E140.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl42_8018E140);
    D_ovl42_8018E15C.arena_size = (u32) ((uintptr_t)&lOverlay42ArenaHi - (uintptr_t)&lOverlay42ArenaLo);
    func_8000683C(&D_ovl42_8018E15C);
}
