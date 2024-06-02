#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningKirby.h>

// ovl43 stuff
extern CameraVec7 dMvOpeningKirbyCameraSettingsStart; // 0x8018E0B0
extern CameraVec7 dMvOpeningKirbyCameraSettingsEnd; // 0x8018E0CC

// 0x8018E0E8
ftExplainCommand dMvOpeningKirbyInputSeq[/* */] =
{
    FTEXPLAIN_EVENT_STICK(45, I_CONTROLLER_RANGE_MAX, 1),   // 0x2001, 0x2D50
    FTEXPLAIN_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
    FTEXPLAIN_EVENT_END()                                   // 0x0000
};

extern RldmFileId D_ovl43_8018E0F4[2];
extern intptr_t dMvOpeningKirbyNameOffsets[8]; // 0x8018E0FC;
extern f32 dMvOpeningKirbyNameCharPositions[7]; // 0x8018E114;

extern scUnkDataBounds D_ovl43_8018E13C;
extern scRuntimeInfo D_ovl43_8018E158;

extern s32 gMvOpeningKirbyFramesElapsed; // 0x8018E228
extern GObj* gMvOpeningKirbyNameGObj; // 0x8018E22C
extern GObj* gMvOpeningKirbyStageFighterGObj; // 0x8018E230

extern GObj* gMvOpeningKirbyStageCameraGObj; // 0x8018E238
extern void* gMvOpeningKirbyAnimHeap; // 0x8018E23C
extern f32 gMvOpeningKirbyPosedFighterYSpeed; // 0x8018E240

extern CameraVec7 dMvOpeningKirbyCameraSettingsAdjustedStart; // 0x8018E248
extern CameraVec7 dMvOpeningKirbyCameraSettingsAdjustedEnd; // 0x8018E268

extern rdFileNode D_ovl43_8018E288[48];
extern rdFileNode D_ovl43_8018E408[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningKirbyFilesArray[2]; // 0x8018E440[2]
// gMvOpeningKirbyFilesArray[0] - D_ovl43_8018E440; // file 0x025 pointer
// gMvOpeningKirbyFilesArray[1] - D_ovl43_8018E444; // file 0x041 pointer

extern gmBattleState gMvOpeningKirbyBattleState; // 0x8018E448

// Offsets
extern intptr_t FILE_041_KIRBY_CAMERA_PARAMS_OFFSET = 0x150; // file 0x041 offset for Kirby's fighter pose camera settings

// 0x8018D0C0
void mvOpeningKirbyLoadFiles()
{
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = D_ovl43_8018E288;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl43_8018E288);
    rldmSetup.forceBuf = D_ovl43_8018E408;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl43_8018E408);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl43_8018E0F4, ARRAY_COUNT(D_ovl43_8018E0F4), gMvOpeningKirbyFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl43_8018E0F4, ARRAY_COUNT(D_ovl43_8018E0F4)), 0x10));
}

// 0x8018D160
void mvOpeningKirbySetNameColor(SObj* name_sobj)
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
void mvOpeningKirbyDrawName()
{
    GObj* name_gobj;
    SObj* name_sobj;
    intptr_t offsets[6] = dMvOpeningKirbyNameOffsets;
    Vec2f positions[5] = dMvOpeningKirbyNameCharPositions;
    s32 i;

    gMvOpeningKirbyNameGObj = name_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    omAddGObjRenderProc(name_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);

    for (i = 0; offsets[i] != 0; i++)
    {
        name_sobj = gcAppendSObjWithSprite(name_gobj, GetAddressFromOffset(gMvOpeningKirbyFilesArray[0], offsets[i]));
        name_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_sobj->sprite.attr |= SP_TRANSPARENT;
        name_sobj->pos.x = positions[i].x + 90.0F;
        name_sobj->pos.y = positions[i].y + 100.0F;

        mvOpeningKirbySetNameColor(name_sobj);
    }
}

// 0x8018D324
void mvOpeningKirbyAnimateStageCamera(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);

    if (gMvOpeningKirbyFramesElapsed >= 15)
    {
        cam->vec.eye.x += (((dMvOpeningKirbyCameraSettingsAdjustedEnd.eye.x - dMvOpeningKirbyCameraSettingsAdjustedStart.eye.x) / 45.0F));
        cam->vec.eye.y += (((dMvOpeningKirbyCameraSettingsAdjustedEnd.eye.y - dMvOpeningKirbyCameraSettingsAdjustedStart.eye.y) / 45.0F));
        cam->vec.eye.z += (((dMvOpeningKirbyCameraSettingsAdjustedEnd.eye.z - dMvOpeningKirbyCameraSettingsAdjustedStart.eye.z) / 45.0F));
        cam->vec.at.x += (((dMvOpeningKirbyCameraSettingsAdjustedEnd.at.x - dMvOpeningKirbyCameraSettingsAdjustedStart.at.x) / 45.0F));
        cam->vec.at.y += (((dMvOpeningKirbyCameraSettingsAdjustedEnd.at.y - dMvOpeningKirbyCameraSettingsAdjustedStart.at.y) / 45.0F));
        cam->vec.at.z += (((dMvOpeningKirbyCameraSettingsAdjustedEnd.at.z - dMvOpeningKirbyCameraSettingsAdjustedStart.at.z) / 45.0F));
        cam->vec.up.x += (((dMvOpeningKirbyCameraSettingsAdjustedEnd.upx - dMvOpeningKirbyCameraSettingsAdjustedStart.upx) / 45.0F));
    }
}

// 0x8018D41C
void mvOpeningKirbyCreateStageViewport(Vec3f arg0)
{
    Camera *cam;

    dMvOpeningKirbyCameraSettingsAdjustedStart = dMvOpeningKirbyCameraSettingsStart;
    dMvOpeningKirbyCameraSettingsAdjustedEnd = dMvOpeningKirbyCameraSettingsEnd;

    gMvOpeningKirbyStageCameraGObj = func_ovl2_8010DB2C(0);
    cam = CameraGetStruct(gMvOpeningKirbyStageCameraGObj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 210.0F, 230.0F);
    cam->projection.persp.aspect = 10.0F / 11.0F;
    func_8000B39C(gMvOpeningKirbyStageCameraGObj);
    omAddGObjCommonProc(gMvOpeningKirbyStageCameraGObj, mvOpeningKirbyAnimateStageCamera, 1, 1);

    dMvOpeningKirbyCameraSettingsAdjustedStart.eye.x += arg0.x;
    dMvOpeningKirbyCameraSettingsAdjustedStart.eye.y += arg0.y;
    dMvOpeningKirbyCameraSettingsAdjustedStart.eye.z += arg0.z;
    dMvOpeningKirbyCameraSettingsAdjustedStart.at.x += arg0.x;
    dMvOpeningKirbyCameraSettingsAdjustedStart.at.y += arg0.y;
    dMvOpeningKirbyCameraSettingsAdjustedStart.at.z += arg0.z;

    dMvOpeningKirbyCameraSettingsAdjustedEnd.eye.x += arg0.x;
    dMvOpeningKirbyCameraSettingsAdjustedEnd.eye.y += arg0.y;
    dMvOpeningKirbyCameraSettingsAdjustedEnd.eye.z += arg0.z;
    dMvOpeningKirbyCameraSettingsAdjustedEnd.at.x += arg0.x;
    dMvOpeningKirbyCameraSettingsAdjustedEnd.at.y += arg0.y;
    dMvOpeningKirbyCameraSettingsAdjustedEnd.at.z += arg0.z;

    cam->vec.eye.x = dMvOpeningKirbyCameraSettingsAdjustedStart.eye.x;
    cam->vec.eye.y = dMvOpeningKirbyCameraSettingsAdjustedStart.eye.y;
    cam->vec.eye.z = dMvOpeningKirbyCameraSettingsAdjustedStart.eye.z;
    cam->vec.at.x = dMvOpeningKirbyCameraSettingsAdjustedStart.at.x;
    cam->vec.at.y = dMvOpeningKirbyCameraSettingsAdjustedStart.at.y;
    cam->vec.at.z = dMvOpeningKirbyCameraSettingsAdjustedStart.at.z;
    cam->vec.up.x = dMvOpeningKirbyCameraSettingsAdjustedStart.upx;
}

// 0x8018D62C
void mvOpeningKirbyInitFighterStagePanel()
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
    spawn_position.y += 30.0F;
    mvOpeningKirbyCreateStageViewport(spawn_position);
    gmRumble_SetPlayerRumble();
    ftPublicReactSetup();

    for (i = 0; i < ARRAY_COUNT(gBattleState->player_block); i++)
    {
        ftCreateDesc spawn_info = dFTDefaultFighterDesc;

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

        gMvOpeningKirbyStageFighterGObj = fighter_gobj = ftManager_MakeFighter(&spawn_info);

        ftCommon_ClearPlayerMatchStats(i, fighter_gobj);
        ftCommon_SetHowToPlayInputSeq(fighter_gobj, dMvOpeningKirbyInputSeq);
    }
}

// 0x8018D870
void mvOpeningKirbyRenderPosedFighterBackground(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 80, 170, 255, 255);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 210, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D970
void mvOpeningKirbyCreatePosedFighterBackground()
{
    omAddGObjRenderProc(omMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningKirbyRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 0x8018D9BC
void mvOpeningKirbyAnimatePosedFighter(GObj* fighter_gobj)
{
    switch (gMvOpeningKirbyFramesElapsed)
    {
        default:
            break;
        case 15:
            gMvOpeningKirbyPosedFighterYSpeed = 17.0F;
            break;
        case 45:
            gMvOpeningKirbyPosedFighterYSpeed = 15.0F;
            break;
        case 60:
            gMvOpeningKirbyPosedFighterYSpeed = 0.0F;
            break;
    }

    if ((gMvOpeningKirbyFramesElapsed > 15) && (gMvOpeningKirbyFramesElapsed < 45))
    {
        gMvOpeningKirbyPosedFighterYSpeed += -1.0F / 15.0F;
    }
    if ((gMvOpeningKirbyFramesElapsed > 45) && (gMvOpeningKirbyFramesElapsed < 60))
    {
        gMvOpeningKirbyPosedFighterYSpeed += -1.0F;
    }

    DObjGetStruct(fighter_gobj)->translate.vec.f.y -= gMvOpeningKirbyPosedFighterYSpeed;
}

// 0x8018DA8C
void mvOpeningKirbyCreatePosedFighter()
{
    GObj* fighter_gobj;
    ftCreateDesc spawn_info = dFTDefaultFighterDesc;

    spawn_info.ft_kind = Ft_Kind_Kirby;
    spawn_info.costume = ftCostume_GetIndexFFA(Ft_Kind_Kirby, 0);
    spawn_info.anim_heap = gMvOpeningKirbyAnimHeap;
    spawn_info.pos.x = 0.0f;
    spawn_info.pos.y = 600.0f;
    spawn_info.pos.z = 0.0f;

    fighter_gobj = ftManager_MakeFighter(&spawn_info);
    func_ovl1_803905CC(fighter_gobj, 0x1000C);
    omMoveGObjDL(fighter_gobj, 0x1A, -1);
    omAddGObjCommonProc(fighter_gobj, mvOpeningKirbyAnimatePosedFighter, 1, 1);

    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 0x8018DB8C
void mvOpeningKirbyCreateNameViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DC2C
void mvOpeningKirbyCreatePosedFighterViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
    cam->projection.persp.aspect = 5.0F / 11.0F;
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningKirbyFilesArray[1], &FILE_041_KIRBY_CAMERA_PARAMS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x8018DD14
void mvOpeningKirbyCreatePosedFighterBackgroundViewport()
{
    Camera *cam;
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
    cam->flags = 5;
}

// 0x8018DDBC
void mvOpeningKirbyMainProc(GObj* arg0)
{
    gMvOpeningKirbyFramesElapsed += 1;

    if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 1U;
        func_80005C74();
    }

    if (gMvOpeningKirbyFramesElapsed == 15)
    {
        omEjectGObj(gMvOpeningKirbyNameGObj);
        mvOpeningKirbyInitFighterStagePanel();
        mvOpeningKirbyCreatePosedFighterBackground();
        mvOpeningKirbyCreatePosedFighter();
    }

    if (gMvOpeningKirbyFramesElapsed == 60)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 0x21;
        func_80005C74();
    }
}

// 0x8018DE78
void mvOpeningKirbyInitFramesElapsed()
{
    gMvOpeningKirbyFramesElapsed = 0;
}

// 0x8018DE84
void mvOpeningKirbyInit()
{
    gMvOpeningKirbyBattleState = gDefaultBattleState;
    gBattleState = &gMvOpeningKirbyBattleState;

    gBattleState->game_type = gmMatch_GameType_Intro;

    gBattleState->gr_kind = Gr_Kind_Pupupu;
    gBattleState->pl_count = 1;

    gBattleState->player_block[0].character_kind = Ft_Kind_Kirby;
    gBattleState->player_block[0].player_kind = Pl_Kind_Key;

    mvOpeningKirbyLoadFiles();
    omMakeGObjSPAfter(0x3F7, mvOpeningKirbyMainProc, 0xD, 0x80000000);
    func_8000B9FC(9, 0x80000000, 0x64, 3, 0xFF);
    mvOpeningKirbyInitFramesElapsed();
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_InitMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    ftManager_AllocFighterData(3, 2);
    wpManagerAllocWeapons();
    itManagerInitItems();
    efManager_AllocUserData();
    ftManager_SetFileDataKind(Ft_Kind_Kirby);

    gMvOpeningKirbyAnimHeap = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    mvOpeningKirbyCreateNameViewport();
    mvOpeningKirbyCreatePosedFighterBackgroundViewport();
    mvOpeningKirbyCreatePosedFighterViewport();
    mvOpeningKirbyDrawName();

    while (func_8000092C() < 1965U)
    {
        // sleep
    }
}

// 0x8018E00C
void gMvOpeningKirbySetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, gMapLightAngleX, gMapLightAngleY);
}

// intro_focus_kirby_entry
void intro_focus_kirby_entry()
{
    D_ovl43_8018E13C.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl43_8018E13C);
    D_ovl43_8018E158.arena_size = (u32) ((uintptr_t)&lOverlay43ArenaHi - (uintptr_t)&lOverlay43ArenaLo);
    gsGTLSceneInit(&D_ovl43_8018E158);
}
