#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningMario.h>

// // ovl35 stuff
extern CameraVec7 dMvOpeningMarioCameraSettingsStart; // 0x8018E090
extern CameraVec7 dMvOpeningMarioCameraSettingsEnd; // 0x8018E0AC

// 0x8018E0C8
ftExplainCommand dMvOpeningMarioInputSeq[/* */] =
{
    FTEXPLAIN_EVENT_STICK(0, 0, 0),                         // 0x2000, 0x0000
    FTEXPLAIN_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
    FTEXPLAIN_EVENT_BUTTON(0, 11),                          // 0x100B, 0x0000
    FTEXPLAIN_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
    FTEXPLAIN_EVENT_BUTTON(0, 20),                          // 0x1014, 0x0000
    FTEXPLAIN_EVENT_STICK(0, -I_CONTROLLER_RANGE_MAX, 0),   // 0x2000, 0x00B0
    FTEXPLAIN_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
    FTEXPLAIN_EVENT_END()                                   // 0x0000
};

extern RldmFileId D_ovl36_8018E0E8[2];
extern intptr_t dMvOpeningMarioNameOffsets[6]; // 0x8018E0F0;
extern f32 dMvOpeningMarioNameCharXPositions[5]; // 0x8018E108;

extern scUnkDataBounds D_ovl36_8018E11C;
extern scRuntimeInfo D_ovl36_8018E138;

extern s32 gMvOpeningMarioFramesElapsed; // 0x8018E208
extern GObj* gMvOpeningMarioNameGObj; // 0x8018E20C
extern GObj* gMvOpeningMarioStageFighterGObj; // 0x8018E210

extern GObj* gMvOpeningMarioStageCameraGObj;
extern void* gMvOpeningMarioAnimHeap; // 0x8018E21C
extern f32 gMvOpeningMarioPosedFighterYSpeed; // 0x8018E220

extern CameraVec7 dMvOpeningMarioCameraSettingsAdjustedStart; // 0x8018E228
extern CameraVec7 dMvOpeningMarioCameraSettingsAdjustedEnd; // 0x8018E248

extern rdFileNode D_ovl36_8018E268[48];
extern rdFileNode D_ovl36_8018E3E8[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningMarioFilesArray[2]; // 0x8018E420[2]
// gMvOpeningMarioFilesArray[0] - D_ovl36_8018E420; // file 0x025 pointer
// gMvOpeningMarioFilesArray[1] - D_ovl36_8018E424; // file 0x041 pointer

extern gmBattleState gMvOpeningMarioBattleState; // 0x8018E428

// Offsets
extern intptr_t FILE_041_MARIO_CAMERA_PARAMS_OFFSET = 0x0; // file 0x041 offset for Mario's fighter pose camera settings

// 0x8018D0C0
void mvOpeningMarioLoadFiles()
{
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = D_ovl36_8018E268;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl36_8018E268);
    rldmSetup.forceBuf = D_ovl36_8018E3E8;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl36_8018E3E8);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl36_8018E0E8, ARRAY_COUNT(D_ovl36_8018E0E8), gMvOpeningMarioFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl36_8018E0E8, ARRAY_COUNT(D_ovl36_8018E0E8)), 0x10));
}

// 0x8018D160
void mvOpeningMarioSetNameColor(SObj* name_sobj)
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
void mvOpeningMarioDrawName()
{
    GObj* name_gobj;
    SObj* name_sobj;
    intptr_t offsets[6] = dMvOpeningMarioNameOffsets;
    f32 x_positions[5] = dMvOpeningMarioNameCharXPositions;
    s32 i;

    gMvOpeningMarioNameGObj = name_gobj = omMakeGObjSPAfter(0, 0, 0x11, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(name_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);

    for (i = 0; offsets[i] != 0; i++)
    {
        name_sobj = gcAppendSObjWithSprite(name_gobj, GetAddressFromOffset(gMvOpeningMarioFilesArray[0], offsets[i]));
        name_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_sobj->sprite.attr |= SP_TRANSPARENT;
        name_sobj->pos.x = x_positions[i] + 80.0F;
        name_sobj->pos.y = 100.0F;

        mvOpeningMarioSetNameColor(name_sobj);
    }
}

// 0x8018D314
void mvOpeningMarioAnimateStageCamera(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);

    if (gMvOpeningMarioFramesElapsed >= 15)
    {
        cam->vec.eye.x += (((dMvOpeningMarioCameraSettingsAdjustedEnd.eye.x - dMvOpeningMarioCameraSettingsAdjustedStart.eye.x) / 45.0F));
        cam->vec.eye.y += (((dMvOpeningMarioCameraSettingsAdjustedEnd.eye.y - dMvOpeningMarioCameraSettingsAdjustedStart.eye.y) / 45.0F));
        cam->vec.eye.z += (((dMvOpeningMarioCameraSettingsAdjustedEnd.eye.z - dMvOpeningMarioCameraSettingsAdjustedStart.eye.z) / 45.0F));
        cam->vec.at.x += (((dMvOpeningMarioCameraSettingsAdjustedEnd.at.x - dMvOpeningMarioCameraSettingsAdjustedStart.at.x) / 45.0F));
        cam->vec.at.y += (((dMvOpeningMarioCameraSettingsAdjustedEnd.at.y - dMvOpeningMarioCameraSettingsAdjustedStart.at.y) / 45.0F));
        cam->vec.at.z += (((dMvOpeningMarioCameraSettingsAdjustedEnd.at.z - dMvOpeningMarioCameraSettingsAdjustedStart.at.z) / 45.0F));
        cam->vec.up.x += (((dMvOpeningMarioCameraSettingsAdjustedEnd.upx - dMvOpeningMarioCameraSettingsAdjustedStart.upx) / 45.0F));
    }
}

// 0x8018D40C
void mvOpeningMarioCreateStageViewport(Vec3f arg0)
{
    Camera *cam;

    dMvOpeningMarioCameraSettingsAdjustedStart = dMvOpeningMarioCameraSettingsStart;
    dMvOpeningMarioCameraSettingsAdjustedEnd = dMvOpeningMarioCameraSettingsEnd;

    gMvOpeningMarioStageCameraGObj = func_ovl2_8010DB2C(0);
    cam = CameraGetStruct(gMvOpeningMarioStageCameraGObj);
    func_80007080(&cam->viewport, 110.0F, 10.0F, 310.0F, 230.0F);
    cam->projection.persp.aspect = 10.0F / 11.0F;
    func_8000B39C(gMvOpeningMarioStageCameraGObj);
    omAddGObjCommonProc(gMvOpeningMarioStageCameraGObj, mvOpeningMarioAnimateStageCamera, 1, 1);

    dMvOpeningMarioCameraSettingsAdjustedStart.eye.x += arg0.x;
    dMvOpeningMarioCameraSettingsAdjustedStart.eye.y += arg0.y;
    dMvOpeningMarioCameraSettingsAdjustedStart.eye.z += arg0.z;
    dMvOpeningMarioCameraSettingsAdjustedStart.at.x += arg0.x;
    dMvOpeningMarioCameraSettingsAdjustedStart.at.y += arg0.y;
    dMvOpeningMarioCameraSettingsAdjustedStart.at.z += arg0.z;

    dMvOpeningMarioCameraSettingsAdjustedEnd.eye.x += arg0.x;
    dMvOpeningMarioCameraSettingsAdjustedEnd.eye.y += arg0.y;
    dMvOpeningMarioCameraSettingsAdjustedEnd.eye.z += arg0.z;
    dMvOpeningMarioCameraSettingsAdjustedEnd.at.x += arg0.x;
    dMvOpeningMarioCameraSettingsAdjustedEnd.at.y += arg0.y;
    dMvOpeningMarioCameraSettingsAdjustedEnd.at.z += arg0.z;

    cam->vec.eye.x = dMvOpeningMarioCameraSettingsAdjustedStart.eye.x;
    cam->vec.eye.y = dMvOpeningMarioCameraSettingsAdjustedStart.eye.y;
    cam->vec.eye.z = dMvOpeningMarioCameraSettingsAdjustedStart.eye.z;
    cam->vec.at.x = dMvOpeningMarioCameraSettingsAdjustedStart.at.x;
    cam->vec.at.y = dMvOpeningMarioCameraSettingsAdjustedStart.at.y;
    cam->vec.at.z = dMvOpeningMarioCameraSettingsAdjustedStart.at.z;
    cam->vec.up.x = dMvOpeningMarioCameraSettingsAdjustedStart.upx;
}

// 0x8018D614
void mvOpeningMarioInitFighterStagePanel()
{
    GObj* fighter_gobj;
    s32 i;
    s32 foo;
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
    mvOpeningMarioCreateStageViewport(spawn_position);
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

        gMvOpeningMarioStageFighterGObj = fighter_gobj = ftManager_MakeFighter(&spawn_info);

        ftCommon_ClearPlayerMatchStats(i, fighter_gobj);
        ftCommon_SetHowToPlayInputSeq(fighter_gobj, dMvOpeningMarioInputSeq);
    }
}

// 0x8018D844
void mvOpeningMarioRenderPosedFighterBackground(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 160, 170, 255, 255);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 110, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D944
void mvOpeningMarioCreatePosedFighterBackground()
{
    omAddGObjRenderProc(omMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningMarioRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 0x8018D990
void mvOpeningMarioAnimatePosedFighter(GObj* fighter_gobj)
{
    switch (gMvOpeningMarioFramesElapsed)
    {
        default:
            break;
        case 15:
            gMvOpeningMarioPosedFighterYSpeed = 17.0F;
            break;
        case 45:
            gMvOpeningMarioPosedFighterYSpeed = 15.0F;
            break;
        case 60:
            gMvOpeningMarioPosedFighterYSpeed = 0.0F;
            break;
    }

    if ((gMvOpeningMarioFramesElapsed > 15) && (gMvOpeningMarioFramesElapsed < 45))
    {
        gMvOpeningMarioPosedFighterYSpeed += -1.0F / 15.0F;
    }
    if ((gMvOpeningMarioFramesElapsed > 45) && (gMvOpeningMarioFramesElapsed < 60))
    {
        gMvOpeningMarioPosedFighterYSpeed += -1.0F;
    }

    DObjGetStruct(fighter_gobj)->translate.vec.f.y -= gMvOpeningMarioPosedFighterYSpeed;
}

// 0x8018DA60
void mvOpeningMarioCreatePosedFighter()
{
    GObj* fighter_gobj;
    ftCreateDesc spawn_info = dFTDefaultFighterDesc;

    spawn_info.ft_kind = Ft_Kind_Mario;
    spawn_info.costume = ftCostume_GetIndexFFA(Ft_Kind_Mario, 0);
    spawn_info.anim_heap = gMvOpeningMarioAnimHeap;
    spawn_info.pos.x = 0.0f;
    spawn_info.pos.y = 600.0f;
    spawn_info.pos.z = 0.0f;

    fighter_gobj = ftManager_MakeFighter(&spawn_info);
    func_ovl1_803905CC(fighter_gobj, 0x1000C);
    omMoveGObjDL(fighter_gobj, 0x1A, -1);
    omAddGObjCommonProc(fighter_gobj, mvOpeningMarioAnimatePosedFighter, 1, 1);

    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 0x8018DB5C
void mvOpeningMarioCreateNameViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DBFC
void mvOpeningMarioCreatePosedFighterViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
    cam->projection.persp.aspect = 5.0F / 11.0F;
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningMarioFilesArray[1], &FILE_041_MARIO_CAMERA_PARAMS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x8018DCEC
void mvOpeningMarioCreatePosedFighterBackgroundViewport()
{
    Camera *cam;
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
    cam->flags = 5;
}

// 0x8018DD9C
void mvOpeningMarioMainProc(GObj* arg0)
{

    gMvOpeningMarioFramesElapsed += 1;

    if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 1U;
        func_80005C74();
    }

    if (gMvOpeningMarioFramesElapsed == 15)
    {
        omEjectGObj(gMvOpeningMarioNameGObj);
        mvOpeningMarioInitFighterStagePanel();
        mvOpeningMarioCreatePosedFighterBackground();
        mvOpeningMarioCreatePosedFighter();
    }

    if (gMvOpeningMarioFramesElapsed == 60)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 0x1F;
        func_80005C74();
    }
}

// 0x8018DE58
void mvOpeningMarioInitFramesElapsed()
{
    gMvOpeningMarioFramesElapsed = 0;
}

// 0x8018DE64
void mvOpeningMarioInit()
{
    gMvOpeningMarioBattleState = gDefaultBattleState;
    gBattleState = &gMvOpeningMarioBattleState;

    gBattleState->game_type = gmMatch_GameType_Intro;

    gBattleState->gr_kind = Gr_Kind_Castle;
    gBattleState->pl_count = 1;

    gBattleState->player_block[0].character_kind = Ft_Kind_Mario;
    gBattleState->player_block[0].player_kind = Pl_Kind_Key;

    mvOpeningMarioLoadFiles();
    omMakeGObjSPAfter(0x3F7, mvOpeningMarioMainProc, 0xD, 0x80000000);
    func_8000B9FC(9, 0x80000000, 0x64, 3, 0xFF);
    mvOpeningMarioInitFramesElapsed();
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_InitMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    ftManager_AllocFighterData(3, 2);
    wpManagerAllocWeapons();
    itManagerInitItems();
    efManager_AllocUserData();
    ftManager_SetFileDataKind(Ft_Kind_Mario);

    gMvOpeningMarioAnimHeap = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    mvOpeningMarioCreateNameViewport();
    mvOpeningMarioCreatePosedFighterBackgroundViewport();
    mvOpeningMarioCreatePosedFighterViewport();
    mvOpeningMarioDrawName();

    while (func_8000092C() < 1515U)
    {
        // sleep
    }
}

// 0x8018DFE4
void mvOpeningMarioSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, gMapLightAngleX, gMapLightAngleY);
}

// intro_focus_mario_entry
void intro_focus_mario_entry()
{
    D_ovl36_8018E11C.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl36_8018E11C);
    D_ovl36_8018E138.arena_size = (u32) ((uintptr_t)&lOverlay36ArenaHi - (uintptr_t)&lOverlay36ArenaLo);
    gsGTLSceneInit(&D_ovl36_8018E138);
}
