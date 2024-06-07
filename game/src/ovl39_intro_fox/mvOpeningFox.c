#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningFox.h>

// ovl37 stuff
extern CameraVec7 dMvOpeningFoxCameraSettingsStart; // 0x8018E090
extern CameraVec7 dMvOpeningFoxCameraSettingsEnd; // 0x8018E0AC

// 0x8018E0C8
ftExplainCommand dMvOpeningFoxInputSeq[/* */] =
{
    FTEXPLAIN_EVENT_STICK(-32, 0, 1),                     // 0x2001, 0xCE00
    FTEXPLAIN_EVENT_BUTTON(B_BUTTON, 1),                  // 0x1001, 0x4000
    FTEXPLAIN_EVENT_BUTTON(0, 12),                        // 0x100C, 0x0000
    FTEXPLAIN_EVENT_BUTTON(B_BUTTON, 1),                  // 0x1001, 0x4000
    FTEXPLAIN_EVENT_BUTTON(0, 12),                        // 0x100C, 0x0000
    FTEXPLAIN_EVENT_END()                                 // 0x0000
};

extern RldmFileId D_ovl39_8018E0E0[2];
extern intptr_t dMvOpeningFoxNameOffsets[4]; // 0x8018E0E8;
extern Vec2f dMvOpeningFoxNameCharPositions[3]; // 0x8018E0F8;

extern scUnkDataBounds D_ovl39_8018E110;
extern scRuntimeInfo D_ovl39_8018E12C;

extern s32 gMvOpeningFoxFramesElapsed; // 0x8018E1F8
extern GObj* gMvOpeningFoxNameGObj; // 0x8018E1FC
extern GObj* gMvOpeningFoxStageFighterGObj; // 0x8018E200

extern GObj* gMvOpeningFoxStageCameraGObj; // 0x8018E208
extern void* gMvOpeningFoxAnimHeap; // 0x8018E20C
extern f32 gMvOpeningFoxPosedFighterYSpeed; // 0x8018E210

extern CameraVec7 dMvOpeningFoxCameraSettingsAdjustedStart; // 0x8018E218
extern CameraVec7 dMvOpeningFoxCameraSettingsAdjustedEnd; // 0x8018E238

extern rdFileNode D_ovl39_8018E258[48];
extern rdFileNode D_ovl39_8018E3D8[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningFoxFilesArray[2]; // 0x8018E410[2]
// gMvOpeningFoxFilesArray[0] - D_ovl39_8018E410; // file 0x025 pointer
// gMvOpeningFoxFilesArray[1] - D_ovl39_8018E414; // file 0x041 pointer

extern gmBattleState gMvOpeningFoxBattleState; // 0x8018E418

// Offsets
extern intptr_t FILE_041_FOX_CAMERA_PARAMS_OFFSET = 0x90; // file 0x041 offset for Fox's fighter pose camera settings

// 0x8018D0C0
void mvOpeningFoxLoadFiles()
{
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl39_8018E258;
    rldmSetup.statusBufSize = 0x30;
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl39_8018E3D8;
    rldmSetup.forceBufSize = 7;
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl39_8018E0E0, ARRAY_COUNT(D_ovl39_8018E0E0), gMvOpeningFoxFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl39_8018E0E0, ARRAY_COUNT(D_ovl39_8018E0E0)), 0x10));
}

// 0x8018D160
void mvOpeningFoxSetNameColor(SObj* name_sobj)
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
void mvOpeningFoxDrawName()
{
    GObj* name_gobj;
    SObj* name_sobj;
    intptr_t offsets[4] = dMvOpeningFoxNameOffsets;
    Vec2f positions[3] = dMvOpeningFoxNameCharPositions;
    s32 i;

    gMvOpeningFoxNameGObj = name_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    omAddGObjRenderProc(name_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);

    for (i = 0; offsets[i] != 0; i++)
    {
        name_sobj = gcAppendSObjWithSprite(name_gobj, GetAddressFromOffset(gMvOpeningFoxFilesArray[0], offsets[i]));
        name_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_sobj->sprite.attr |= SP_TRANSPARENT;
        name_sobj->pos.x = positions[i].x + 110.0F;
        name_sobj->pos.y = positions[i].y + 100.0F;

        mvOpeningFoxSetNameColor(name_sobj);
    }
}

// 0x8018D314
void mvOpeningFoxAnimateStageCamera(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);

    if (gMvOpeningFoxFramesElapsed >= 15)
    {
        cam->vec.eye.x += (((dMvOpeningFoxCameraSettingsAdjustedEnd.eye.x - dMvOpeningFoxCameraSettingsAdjustedStart.eye.x) / 45.0F));
        cam->vec.eye.y += (((dMvOpeningFoxCameraSettingsAdjustedEnd.eye.y - dMvOpeningFoxCameraSettingsAdjustedStart.eye.y) / 45.0F));
        cam->vec.eye.z += (((dMvOpeningFoxCameraSettingsAdjustedEnd.eye.z - dMvOpeningFoxCameraSettingsAdjustedStart.eye.z) / 45.0F));
        cam->vec.at.x += (((dMvOpeningFoxCameraSettingsAdjustedEnd.at.x - dMvOpeningFoxCameraSettingsAdjustedStart.at.x) / 45.0F));
        cam->vec.at.y += (((dMvOpeningFoxCameraSettingsAdjustedEnd.at.y - dMvOpeningFoxCameraSettingsAdjustedStart.at.y) / 45.0F));
        cam->vec.at.z += (((dMvOpeningFoxCameraSettingsAdjustedEnd.at.z - dMvOpeningFoxCameraSettingsAdjustedStart.at.z) / 45.0F));
        cam->vec.up.x += (((dMvOpeningFoxCameraSettingsAdjustedEnd.upx - dMvOpeningFoxCameraSettingsAdjustedStart.upx) / 45.0F));
    }
}

// 0x8018D40C
void mvOpeningFoxCreateStageViewport(Vec3f arg0)
{
    Camera *cam;

    dMvOpeningFoxCameraSettingsAdjustedStart = dMvOpeningFoxCameraSettingsStart;
    dMvOpeningFoxCameraSettingsAdjustedEnd = dMvOpeningFoxCameraSettingsEnd;

    gMvOpeningFoxStageCameraGObj = func_ovl2_8010DB2C(0);
    cam = CameraGetStruct(gMvOpeningFoxStageCameraGObj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 210.0F, 230.0F);
    cam->projection.persp.aspect = 10.0F / 11.0F;
    func_8000B39C(gMvOpeningFoxStageCameraGObj);
    omAddGObjCommonProc(gMvOpeningFoxStageCameraGObj, mvOpeningFoxAnimateStageCamera, 1, 1);

    dMvOpeningFoxCameraSettingsAdjustedStart.eye.x += arg0.x;
    dMvOpeningFoxCameraSettingsAdjustedStart.eye.y += arg0.y;
    dMvOpeningFoxCameraSettingsAdjustedStart.eye.z += arg0.z;
    dMvOpeningFoxCameraSettingsAdjustedStart.at.x += arg0.x;
    dMvOpeningFoxCameraSettingsAdjustedStart.at.y += arg0.y;
    dMvOpeningFoxCameraSettingsAdjustedStart.at.z += arg0.z;

    dMvOpeningFoxCameraSettingsAdjustedEnd.eye.x += arg0.x;
    dMvOpeningFoxCameraSettingsAdjustedEnd.eye.y += arg0.y;
    dMvOpeningFoxCameraSettingsAdjustedEnd.eye.z += arg0.z;
    dMvOpeningFoxCameraSettingsAdjustedEnd.at.x += arg0.x;
    dMvOpeningFoxCameraSettingsAdjustedEnd.at.y += arg0.y;
    dMvOpeningFoxCameraSettingsAdjustedEnd.at.z += arg0.z;

    cam->vec.eye.x = dMvOpeningFoxCameraSettingsAdjustedStart.eye.x;
    cam->vec.eye.y = dMvOpeningFoxCameraSettingsAdjustedStart.eye.y;
    cam->vec.eye.z = dMvOpeningFoxCameraSettingsAdjustedStart.eye.z;
    cam->vec.at.x = dMvOpeningFoxCameraSettingsAdjustedStart.at.x;
    cam->vec.at.y = dMvOpeningFoxCameraSettingsAdjustedStart.at.y;
    cam->vec.at.z = dMvOpeningFoxCameraSettingsAdjustedStart.at.z;
    cam->vec.up.x = dMvOpeningFoxCameraSettingsAdjustedStart.upx;
}

// 0x8018D61C
void mvOpeningFoxInitFighterStagePanel()
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
    mvOpeningFoxCreateStageViewport(spawn_position);
    gmRumble_SetPlayerRumble();
    ftPublicReactSetup();

    for (i = 0; i < ARRAY_COUNT(gBattleState->player_block); i++)
    {
        ftCreateDesc spawn_info = dFTDefaultFighterDesc;

        if (gBattleState->player_block[i].player_kind == Pl_Kind_Not) continue;

        ftManagerSetupDataKind(gBattleState->player_block[i].character_kind);

        spawn_info.ft_kind = gBattleState->player_block[i].character_kind;
        spawn_info.pos.x = spawn_position.x;
        spawn_info.pos.y = spawn_position.y;
        spawn_info.pos.z = spawn_position.z;
        spawn_info.lr_spawn = LR_Left;
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
        spawn_info.anim_heap = ftManagerAllocAnimHeapKind(gBattleState->player_block[i].character_kind);

        gMvOpeningFoxStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

        ftCommon_ClearPlayerMatchStats(i, fighter_gobj);
        ftCommon_SetHowToPlayInputSeq(fighter_gobj, dMvOpeningFoxInputSeq);
    }
}

// 0x8018D84C
void mvOpeningFoxRenderPosedFighterBackground(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 60, 40, 255);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 210, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D94C
void mvOpeningFoxCreatePosedFighterBackground()
{
    omAddGObjRenderProc(omMakeGObjSPAfter(0, 0, 0x13, 0x80000000), &mvOpeningFoxRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 0x8018D998
void mvOpeningFoxAnimatePosedFighter(GObj* fighter_gobj)
{
    switch (gMvOpeningFoxFramesElapsed)
    {
        default:
            break;
        case 15:
            gMvOpeningFoxPosedFighterYSpeed = 17.0F;
            break;
        case 45:
            gMvOpeningFoxPosedFighterYSpeed = 15.0F;
            break;
        case 60:
            gMvOpeningFoxPosedFighterYSpeed = 0.0F;
            break;
    }

    if ((gMvOpeningFoxFramesElapsed > 15) && (gMvOpeningFoxFramesElapsed < 45))
    {
        gMvOpeningFoxPosedFighterYSpeed += -1.0F / 15.0F;
    }
    if ((gMvOpeningFoxFramesElapsed > 45) && (gMvOpeningFoxFramesElapsed < 60))
    {
        gMvOpeningFoxPosedFighterYSpeed += -1.0F;
    }

    DObjGetStruct(fighter_gobj)->translate.vec.f.y -= gMvOpeningFoxPosedFighterYSpeed;
}

// 0x8018DA68
void mvOpeningFoxCreatePosedFighter()
{
    GObj* fighter_gobj;
    ftCreateDesc spawn_info = dFTDefaultFighterDesc;

    spawn_info.ft_kind = Ft_Kind_Fox;
    spawn_info.costume = ftCostume_GetIndexFFA(Ft_Kind_Fox, 0);
    spawn_info.anim_heap = gMvOpeningFoxAnimHeap;
    spawn_info.pos.x = 0.0f;
    spawn_info.pos.y = 600.0f;
    spawn_info.pos.z = 0.0f;

    fighter_gobj = ftManagerMakeFighter(&spawn_info);
    func_ovl1_803905CC(fighter_gobj, 0x1000C);
    omMoveGObjDL(fighter_gobj, 0x1A, -1);
    omAddGObjCommonProc(fighter_gobj, mvOpeningFoxAnimatePosedFighter, 1, 1);

    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 0x8018DB68
void mvOpeningFoxCreateNameViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DC08
void mvOpeningFoxCreatePosedFighterViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
    cam->projection.persp.aspect = 5.0F / 11.0F;
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningFoxFilesArray[1], &FILE_041_FOX_CAMERA_PARAMS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x8018DCF0
void mvOpeningFoxCreatePosedFighterBackgroundViewport()
{
    Camera *cam;
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
    cam->flags = 5;
}

// 0x8018DD98
void mvOpeningFoxMainProc(GObj* arg0)
{
    gMvOpeningFoxFramesElapsed += 1;

    if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 1U;
        func_80005C74();
    }

    if (gMvOpeningFoxFramesElapsed == 15)
    {
        omEjectGObj(gMvOpeningFoxNameGObj);
        mvOpeningFoxInitFighterStagePanel();
        mvOpeningFoxCreatePosedFighterBackground();
        mvOpeningFoxCreatePosedFighter();
    }

    if (gMvOpeningFoxFramesElapsed == 60)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 0x24;
        func_80005C74();
    }
}

// 0x8018DE54
void mvOpeningFoxInitFramesElapsed()
{
    gMvOpeningFoxFramesElapsed = 0;
}

// 0x8018DE60
void mvOpeningFoxInit()
{
    gMvOpeningFoxBattleState = gDefaultBattleState;
    gBattleState = &gMvOpeningFoxBattleState;

    gBattleState->game_type = gmMatch_GameType_Intro;

    gBattleState->gr_kind = Gr_Kind_Sector;
    gBattleState->pl_count = 1;

    gBattleState->player_block[0].character_kind = Ft_Kind_Fox;
    gBattleState->player_block[0].player_kind = Pl_Kind_Key;

    mvOpeningFoxLoadFiles();
    omMakeGObjSPAfter(0x3F7, mvOpeningFoxMainProc, 0xD, 0x80000000);
    func_8000B9FC(9, 0x80000000, 0x64, 3, 0xFF);
    mvOpeningFoxInitFramesElapsed();
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_InitMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    ftManagerAllocFighter(3, 2);
    wpManagerAllocWeapons();
    itManagerInitItems();
    efManager_AllocUserData();
    ftManagerSetupDataKind(Ft_Kind_Fox);

    gMvOpeningFoxAnimHeap = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    mvOpeningFoxCreateNameViewport();
    mvOpeningFoxCreatePosedFighterBackgroundViewport();
    mvOpeningFoxCreatePosedFighterViewport();
    mvOpeningFoxDrawName();

    while (func_8000092C() < 2055U)
    {
        // sleep
    }
}

// 0x8018DFE0
void mvOpeningFoxSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, gMPLightAngleX, gMPLightAngleY);
}

// intro_focus_fox_entry
void intro_focus_fox_entry()
{
    D_ovl39_8018E110.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl39_8018E110);
    D_ovl39_8018E12C.arena_size = (u32) ((uintptr_t)&lOverlay39ArenaHi - (uintptr_t)&lOverlay39ArenaLo);
    gsGTLSceneInit(&D_ovl39_8018E12C);
}
