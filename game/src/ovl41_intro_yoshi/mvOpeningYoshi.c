#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningYoshi.h>

// ovl41 stuff
extern CameraVec7 dMvOpeningYoshiCameraSettingsStart; // 0x8018E0C0
extern CameraVec7 dMvOpeningYoshiCameraSettingsEnd; // 0x8018E0DC

// 0x8018E0F8
ftExplainCommand dMvOpeningYoshiInputSeq[/* */] =
{
    FTEXPLAIN_EVENT_STICK(I_CONTROLLER_RANGE_MAX, 0, 14),   // 0x2014, 0x5000
    FTEXPLAIN_EVENT_BUTTON(Z_TRIG, 1),                      // 0x1001, 0x2000
    FTEXPLAIN_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
    FTEXPLAIN_EVENT_END()                                   // 0x0000
};

extern RldmFileId D_ovl41_8018E108[2];
extern intptr_t dMvOpeningYoshiNameOffsets[6]; // 0x8018E110;
extern f32 dMvOpeningYoshiNameCharPositions[5]; // 0x8018E128;

extern scUnkDataBounds D_ovl41_8018E13C;
extern scRuntimeInfo D_ovl41_8018E158;

extern s32 gMvOpeningYoshiFramesElapsed; // 0x8018E228
extern GObj* gMvOpeningYoshiNameGObj; // 0x8018E22C
extern GObj* gMvOpeningYoshiStageFighterGObj; // 0x8018E230

extern GObj* gMvOpeningYoshiStageCameraGObj; // 0x8018E238
extern void* gMvOpeningYoshiAnimHeap; // 0x8018E23C
extern f32 gMvOpeningYoshiPosedFighterXSpeed; // 0x8018E240

extern CameraVec7 dMvOpeningYoshiCameraSettingsAdjustedStart; // 0x8018E248
extern CameraVec7 dMvOpeningYoshiCameraSettingsAdjustedEnd; // 0x8018E268

extern rdFileNode D_ovl41_8018E288[48];
extern rdFileNode D_ovl41_8018E408[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningYoshiFilesArray[2]; // 0x8018E440[2]
// gMvOpeningYoshiFilesArray[0] - D_ovl41_8018E440; // file 0x025 pointer
// gMvOpeningYoshiFilesArray[1] - D_ovl41_8018E444; // file 0x041 pointer

extern gmBattleState gMvOpeningYoshiBattleState; // 0x8018E448

// // Offsets
extern intptr_t FILE_041_YOSHI_CAMERA_PARAMS_OFFSET = 0xF0; // file 0x041 offset for Yoshi's fighter pose camera settings

// 0x8018D0C0
void mvOpeningYoshiLoadFiles()
{
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = D_ovl41_8018E288;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl41_8018E288);
    rldmSetup.forceBuf = D_ovl41_8018E408;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl41_8018E408);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl41_8018E108, ARRAY_COUNT(D_ovl41_8018E108), gMvOpeningYoshiFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl41_8018E108, ARRAY_COUNT(D_ovl41_8018E108)), 0x10));
}

// 0x8018D160
void mvOpeningYoshiSetNameColor(SObj* name_sobj)
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
void mvOpeningYoshiDrawName()
{
    GObj* name_gobj;
    SObj* name_sobj;
    intptr_t offsets[6] = dMvOpeningYoshiNameOffsets;
    f32 x_positions[5] = dMvOpeningYoshiNameCharPositions;
    s32 i;

    gMvOpeningYoshiNameGObj = name_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    omAddGObjRenderProc(name_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);

    for (i = 0; offsets[i] != 0; i++)
    {
        name_sobj = gcAppendSObjWithSprite(name_gobj, GetAddressFromOffset(gMvOpeningYoshiFilesArray[0], offsets[i]));
        name_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_sobj->sprite.attr |= SP_TRANSPARENT;
        name_sobj->pos.x = x_positions[i] + 80.0F;
        name_sobj->pos.y = 100.0F;

        mvOpeningYoshiSetNameColor(name_sobj);
    }
}

// 0x8018D314
void mvOpeningYoshiAnimateStageCamera(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);

    if (gMvOpeningYoshiFramesElapsed >= 15)
    {
        cam->vec.eye.x += (((dMvOpeningYoshiCameraSettingsAdjustedEnd.eye.x - dMvOpeningYoshiCameraSettingsAdjustedStart.eye.x) / 45.0F));
        cam->vec.eye.y += (((dMvOpeningYoshiCameraSettingsAdjustedEnd.eye.y - dMvOpeningYoshiCameraSettingsAdjustedStart.eye.y) / 45.0F));
        cam->vec.eye.z += (((dMvOpeningYoshiCameraSettingsAdjustedEnd.eye.z - dMvOpeningYoshiCameraSettingsAdjustedStart.eye.z) / 45.0F));
        cam->vec.at.x += (((dMvOpeningYoshiCameraSettingsAdjustedEnd.at.x - dMvOpeningYoshiCameraSettingsAdjustedStart.at.x) / 45.0F));
        cam->vec.at.y += (((dMvOpeningYoshiCameraSettingsAdjustedEnd.at.y - dMvOpeningYoshiCameraSettingsAdjustedStart.at.y) / 45.0F));
        cam->vec.at.z += (((dMvOpeningYoshiCameraSettingsAdjustedEnd.at.z - dMvOpeningYoshiCameraSettingsAdjustedStart.at.z) / 45.0F));
        cam->vec.up.x += (((dMvOpeningYoshiCameraSettingsAdjustedEnd.upx - dMvOpeningYoshiCameraSettingsAdjustedStart.upx) / 45.0F));
    }
}

// 0x8018D40C
void mvOpeningYoshiCreateStageViewport(Vec3f arg0)
{
    Camera *cam;

    dMvOpeningYoshiCameraSettingsAdjustedStart = dMvOpeningYoshiCameraSettingsStart;
    dMvOpeningYoshiCameraSettingsAdjustedEnd = dMvOpeningYoshiCameraSettingsEnd;

    gMvOpeningYoshiStageCameraGObj = func_ovl2_8010DB2C(0);
    cam = CameraGetStruct(gMvOpeningYoshiStageCameraGObj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 150.0F);
    cam->projection.persp.aspect = 10.0F / 11.0F;
    func_8000B39C(gMvOpeningYoshiStageCameraGObj);
    omAddGObjCommonProc(gMvOpeningYoshiStageCameraGObj, mvOpeningYoshiAnimateStageCamera, 1, 1);

    dMvOpeningYoshiCameraSettingsAdjustedStart.eye.x += arg0.x;
    dMvOpeningYoshiCameraSettingsAdjustedStart.eye.y += arg0.y;
    dMvOpeningYoshiCameraSettingsAdjustedStart.eye.z += arg0.z;
    dMvOpeningYoshiCameraSettingsAdjustedStart.at.x += arg0.x;
    dMvOpeningYoshiCameraSettingsAdjustedStart.at.y += arg0.y;
    dMvOpeningYoshiCameraSettingsAdjustedStart.at.z += arg0.z;

    dMvOpeningYoshiCameraSettingsAdjustedEnd.eye.x += arg0.x;
    dMvOpeningYoshiCameraSettingsAdjustedEnd.eye.y += arg0.y;
    dMvOpeningYoshiCameraSettingsAdjustedEnd.eye.z += arg0.z;
    dMvOpeningYoshiCameraSettingsAdjustedEnd.at.x += arg0.x;
    dMvOpeningYoshiCameraSettingsAdjustedEnd.at.y += arg0.y;
    dMvOpeningYoshiCameraSettingsAdjustedEnd.at.z += arg0.z;

    cam->vec.eye.x = dMvOpeningYoshiCameraSettingsAdjustedStart.eye.x;
    cam->vec.eye.y = dMvOpeningYoshiCameraSettingsAdjustedStart.eye.y;
    cam->vec.eye.z = dMvOpeningYoshiCameraSettingsAdjustedStart.eye.z;
    cam->vec.at.x = dMvOpeningYoshiCameraSettingsAdjustedStart.at.x;
    cam->vec.at.y = dMvOpeningYoshiCameraSettingsAdjustedStart.at.y;
    cam->vec.at.z = dMvOpeningYoshiCameraSettingsAdjustedStart.at.z;
    cam->vec.up.x = dMvOpeningYoshiCameraSettingsAdjustedStart.upx;
}

// 0x8018D61C
void mvOpeningYoshiInitFighterStagePanel()
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
    spawn_position.x += -1000.0F;
    spawn_position.y += 70.0F;
    mvOpeningYoshiCreateStageViewport(spawn_position);
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

        gMvOpeningYoshiStageFighterGObj = fighter_gobj = ftManager_MakeFighter(&spawn_info);

        ftCommon_ClearPlayerMatchStats(i, fighter_gobj);
        ftCommon_SetHowToPlayInputSeq(fighter_gobj, dMvOpeningYoshiInputSeq);
    }
}

// 0x8018D874
void mvOpeningYoshiRenderPosedFighterBackground(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 255, 190, 90, 255);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 150, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D974
void mvOpeningYoshiCreatePosedFighterBackground()
{
    omAddGObjRenderProc(omMakeGObjCommon(0, 0, 0x13, 0x80000000), mvOpeningYoshiRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 0x8018D9C0
void mvOpeningYoshiAnimatePosedFighter(GObj* fighter_gobj)
{
    switch (gMvOpeningYoshiFramesElapsed)
    {
        default:
            break;
        case 15:
            gMvOpeningYoshiPosedFighterXSpeed = 17.0F;
            break;
        case 45:
            gMvOpeningYoshiPosedFighterXSpeed = 15.0F;
            break;
        case 60:
            gMvOpeningYoshiPosedFighterXSpeed = 0.0F;
            break;
    }

    if ((gMvOpeningYoshiFramesElapsed > 15) && (gMvOpeningYoshiFramesElapsed < 45))
    {
        gMvOpeningYoshiPosedFighterXSpeed += -1.0F / 15.0F;
    }
    if ((gMvOpeningYoshiFramesElapsed > 45) && (gMvOpeningYoshiFramesElapsed < 60))
    {
        gMvOpeningYoshiPosedFighterXSpeed += -1.0F;
    }

    DObjGetStruct(fighter_gobj)->translate.vec.f.x += gMvOpeningYoshiPosedFighterXSpeed;
}

// 0x8018DA90
void mvOpeningYoshiCreatePosedFighter()
{
    GObj* fighter_gobj;
    ftCreateDesc spawn_info = dFtDefaultFighterDesc;

    spawn_info.ft_kind = Ft_Kind_Yoshi;
    spawn_info.costume = ftCostume_GetIndexFFA(Ft_Kind_Yoshi, 0);
    spawn_info.anim_heap = gMvOpeningYoshiAnimHeap;
    spawn_info.pos.x = -600.0f;
    spawn_info.pos.y = 0.0f;
    spawn_info.pos.z = 0.0f;

    fighter_gobj = ftManager_MakeFighter(&spawn_info);
    func_ovl1_803905CC(fighter_gobj, 0x1000C);
    omMoveGObjDL(fighter_gobj, 0x1A, -1);
    omAddGObjCommonProc(fighter_gobj, mvOpeningYoshiAnimatePosedFighter, 1, 1);

    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 0x8018DB90
void mvOpeningYoshiCreateNameViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DC30
void mvOpeningYoshiCreatePosedFighterViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 150.0F, 310.0F, 230.0F);
    cam->projection.persp.aspect = 3.75F;
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningYoshiFilesArray[1], &FILE_041_YOSHI_CAMERA_PARAMS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x8018DD18
void mvOpeningYoshiCreatePosedFighterBackgroundViewport()
{
    Camera *cam;
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 150.0F, 310.0F, 230.0F);
    cam->flags = 5;
}

// 0x8018DDC0
void mvOpeningYoshiMainProc(GObj* arg0)
{
    gMvOpeningYoshiFramesElapsed += 1;

    if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 1U;
        func_80005C74();
    }

    if (gMvOpeningYoshiFramesElapsed == 15)
    {
        omEjectGObjCommon(gMvOpeningYoshiNameGObj);
        mvOpeningYoshiInitFighterStagePanel();
        mvOpeningYoshiCreatePosedFighterBackground();
        mvOpeningYoshiCreatePosedFighter();
    }

    if (gMvOpeningYoshiFramesElapsed == 60)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 0x25;
        func_80005C74();
    }
}

// 0x8018DE7C
void mvOpeningYoshiInitFramesElapsed()
{
    gMvOpeningYoshiFramesElapsed = 0;
}

// 0x8018DE88
void mvOpeningYoshiInit()
{
    gMvOpeningYoshiBattleState = gDefaultBattleState;
    gBattleState = &gMvOpeningYoshiBattleState;

    gBattleState->game_type = gmMatch_GameType_Intro;

    gBattleState->gr_kind = Gr_Kind_Yoster;
    gBattleState->pl_count = 1;

    gBattleState->player_block[0].character_kind = Ft_Kind_Yoshi;
    gBattleState->player_block[0].player_kind = Pl_Kind_Key;

    mvOpeningYoshiLoadFiles();
    omMakeGObjCommon(0x3F7, mvOpeningYoshiMainProc, 0xD, 0x80000000);
    func_8000B9FC(9, 0x80000000, 0x64, 3, 0xFF);
    mvOpeningYoshiInitFramesElapsed();
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_InitMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    ftManager_AllocFighterData(3, 2);
    wpManagerAllocWeapons();
    itManagerInitItems();
    efManager_AllocUserData();
    ftManager_SetFileDataKind(Ft_Kind_Yoshi);

    gMvOpeningYoshiAnimHeap = gsMemoryAlloc(D_ovl2_80130D9C, 0x10);
    mvOpeningYoshiCreateNameViewport();
    mvOpeningYoshiCreatePosedFighterBackgroundViewport();
    mvOpeningYoshiCreatePosedFighterViewport();
    mvOpeningYoshiDrawName();

    while (func_8000092C() < 1875U)
    {
        // sleep
    }
}

// 0x8018E010
void gMvOpeningYoshiSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, gMapLightAngleX, gMapLightAngleY);
}

// intro_focus_yoshi_entry
void intro_focus_yoshi_entry()
{
    D_ovl41_8018E13C.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl41_8018E13C);
    D_ovl41_8018E158.arena_size = (u32) ((uintptr_t)&lOverlay41ArenaHi - (uintptr_t)&lOverlay41ArenaLo);
    func_8000683C(&D_ovl41_8018E158);
}
