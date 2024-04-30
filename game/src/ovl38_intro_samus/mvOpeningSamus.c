#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningSamus.h>

// ovl38 stuff
extern CameraVec7 dMvOpeningSamusCameraSettingsStart; // 0x8018E120
extern CameraVec7 dMvOpeningSamusCameraSettingsEnd; // 0x8018E13C

// 0x8018E158
ftExplainCommand dMvOpeningSamusInputSeq[/* */] =
{
    FTEXPLAIN_EVENT_BUTTON(Z_TRIG, 1),   // 0x1001, 0x2000
    FTEXPLAIN_EVENT_BUTTON(A_BUTTON, 1), // 0x1001, 0x8000
    FTEXPLAIN_EVENT_END()                // 0x0000
};

extern RldmFileId D_ovl38_8018E164[2];
extern intptr_t dMvOpeningSamusNameOffsets[3]; // 0x8018E16C;
extern Vec2f dMvOpeningSamusNameCharPositions[2]; // 0x8018E184;

extern scUnkDataBounds D_ovl38_8018E198;
extern scRuntimeInfo D_ovl38_8018E1B4;

extern s32 gMvOpeningSamusFramesElapsed; // 0x8018E278
extern GObj* gMvOpeningSamusNameGObj; // 0x8018E27C
extern GObj* gMvOpeningSamusStageFighterGObj; // 0x8018E280

extern GObj* gMvOpeningSamusStageCameraGObj; // 0x8018E288
extern void* gMvOpeningSamusAnimHeap; // 0x8018E28C
extern f32 gMvOpeningSamusPosedFighterYSpeed; // 0x8018E290

extern CameraVec7 dMvOpeningSamusCameraSettingsAdjustedStart; // 0x8018E298
extern CameraVec7 dMvOpeningSamusCameraSettingsAdjustedEnd; // 0x8018E2B8

extern rdFileNode D_ovl38_8018E2D8[48];
extern rdFileNode D_ovl38_8018E458[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningSamusFilesArray[2]; // 0x8018E490[2]
// gMvOpeningSamusFilesArray[0] - D_ovl38_8018E490; // file 0x025 pointer
// gMvOpeningSamusFilesArray[1] - D_ovl38_8018E494; // file 0x041 pointer

extern gmBattleState gMvOpeningSamusBattleState; // 0x8018E498

// Offsets
extern intptr_t FILE_041_SAMUS_CAMERA_PARAMS_OFFSET = 0x60; // file 0x041 offset for Samus's fighter pose camera settings

// 0x8018D0C0
void mvOpeningSamusLoadFiles()
{
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl38_8018E2D8;
    rldmSetup.statusBufSize = 0x30;
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl38_8018E458;
    rldmSetup.forceBufSize = 7;
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl38_8018E164, ARRAY_COUNT(D_ovl38_8018E164), gMvOpeningSamusFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl38_8018E164, ARRAY_COUNT(D_ovl38_8018E164)), 0x10));
}

// 0x8018D160
void mvOpeningSamusSetNameColor(SObj* name_sobj)
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
void mvOpeningSamusDrawName()
{
    GObj* name_gobj;
    SObj* name_sobj;
    intptr_t offsets[6] = dMvOpeningSamusNameOffsets;
    f32 positions[5] = dMvOpeningSamusNameCharPositions;
    s32 i;

    gMvOpeningSamusNameGObj = name_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    omAddGObjRenderProc(name_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);

    for (i = 0; offsets[i] != 0; i++)
    {
        name_sobj = gcAppendSObjWithSprite(name_gobj, GetAddressFromOffset(gMvOpeningSamusFilesArray[0], offsets[i]));
        name_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_sobj->sprite.attr |= SP_TRANSPARENT;
        name_sobj->pos.x = positions[i] + 80.0F;
        name_sobj->pos.y = 100.0F;

        mvOpeningSamusSetNameColor(name_sobj);
    }
}

// 0x8018D314
void mvOpeningSamusAnimateStageCamera(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);

    if (gMvOpeningSamusFramesElapsed >= 15)
    {
        cam->vec.eye.x += (((dMvOpeningSamusCameraSettingsAdjustedEnd.eye.x - dMvOpeningSamusCameraSettingsAdjustedStart.eye.x) / 45.0F));
        cam->vec.eye.y += (((dMvOpeningSamusCameraSettingsAdjustedEnd.eye.y - dMvOpeningSamusCameraSettingsAdjustedStart.eye.y) / 45.0F));
        cam->vec.eye.z += (((dMvOpeningSamusCameraSettingsAdjustedEnd.eye.z - dMvOpeningSamusCameraSettingsAdjustedStart.eye.z) / 45.0F));
        cam->vec.at.x += (((dMvOpeningSamusCameraSettingsAdjustedEnd.at.x - dMvOpeningSamusCameraSettingsAdjustedStart.at.x) / 45.0F));
        cam->vec.at.y += (((dMvOpeningSamusCameraSettingsAdjustedEnd.at.y - dMvOpeningSamusCameraSettingsAdjustedStart.at.y) / 45.0F));
        cam->vec.at.z += (((dMvOpeningSamusCameraSettingsAdjustedEnd.at.z - dMvOpeningSamusCameraSettingsAdjustedStart.at.z) / 45.0F));
        cam->vec.up.x += (((dMvOpeningSamusCameraSettingsAdjustedEnd.upx - dMvOpeningSamusCameraSettingsAdjustedStart.upx) / 45.0F));
    }
}

// 0x8018D40C
void mvOpeningSamusCreateStageViewport(Vec3f arg0)
{
    Camera *cam;

    dMvOpeningSamusCameraSettingsAdjustedStart = dMvOpeningSamusCameraSettingsStart;
    dMvOpeningSamusCameraSettingsAdjustedEnd = dMvOpeningSamusCameraSettingsEnd;

    gMvOpeningSamusStageCameraGObj = func_ovl2_8010DB2C(0);
    cam = CameraGetStruct(gMvOpeningSamusStageCameraGObj);
    func_80007080(&cam->viewport, 110.0F, 10.0F, 310.0F, 230.0F);
    cam->projection.persp.aspect = 10.0F / 11.0F;
    func_8000B39C(gMvOpeningSamusStageCameraGObj);
    omAddGObjCommonProc(gMvOpeningSamusStageCameraGObj, mvOpeningSamusAnimateStageCamera, 1, 1);

    dMvOpeningSamusCameraSettingsAdjustedStart.eye.x += arg0.x;
    dMvOpeningSamusCameraSettingsAdjustedStart.eye.y += arg0.y;
    dMvOpeningSamusCameraSettingsAdjustedStart.eye.z += arg0.z;
    dMvOpeningSamusCameraSettingsAdjustedStart.at.x += arg0.x;
    dMvOpeningSamusCameraSettingsAdjustedStart.at.y += arg0.y;
    dMvOpeningSamusCameraSettingsAdjustedStart.at.z += arg0.z;

    dMvOpeningSamusCameraSettingsAdjustedEnd.eye.x += arg0.x;
    dMvOpeningSamusCameraSettingsAdjustedEnd.eye.y += arg0.y;
    dMvOpeningSamusCameraSettingsAdjustedEnd.eye.z += arg0.z;
    dMvOpeningSamusCameraSettingsAdjustedEnd.at.x += arg0.x;
    dMvOpeningSamusCameraSettingsAdjustedEnd.at.y += arg0.y;
    dMvOpeningSamusCameraSettingsAdjustedEnd.at.z += arg0.z;

    cam->vec.eye.x = dMvOpeningSamusCameraSettingsAdjustedStart.eye.x;
    cam->vec.eye.y = dMvOpeningSamusCameraSettingsAdjustedStart.eye.y;
    cam->vec.eye.z = dMvOpeningSamusCameraSettingsAdjustedStart.eye.z;
    cam->vec.at.x = dMvOpeningSamusCameraSettingsAdjustedStart.at.x;
    cam->vec.at.y = dMvOpeningSamusCameraSettingsAdjustedStart.at.y;
    cam->vec.at.z = dMvOpeningSamusCameraSettingsAdjustedStart.at.z;
    cam->vec.up.x = dMvOpeningSamusCameraSettingsAdjustedStart.upx;
}

// 0x8018D614
void mvOpeningSamusInitFighterStagePanel()
{
    GObj* fighter_gobj;
    s32 i, j;
    s32 foo;
    s32 bar;
    s32 pos_ids;
    Vec3f spawn_position;
    DObj* stage_dobj;
    DObj* next_dobj;
    s32 baz;
    s32 biz;

    grWallpaper_SetGroundWallpaper();
    grNodeInit_SetGroundFiles();

    next_dobj = stage_dobj = DObjGetStruct(D_ovl2_801313E4);

    // This fixes the spot light things on Zebes
    while (next_dobj != NULL)
    {
        for (j = 0; j < next_dobj->ommtx_len; j++)
        {
            if (next_dobj->ommtx[j]->kind == 0x30)
            {
                next_dobj->ommtx[j]->kind = 0x25;
            }
        }

        next_dobj = func_ovl0_800C86E8(next_dobj, stage_dobj);
    }

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
    mvOpeningSamusCreateStageViewport(spawn_position);
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

        gMvOpeningSamusStageFighterGObj = fighter_gobj = ftManager_MakeFighter(&spawn_info);

        ftCommon_ClearPlayerMatchStats(i, fighter_gobj);
        ftCommon_SetHowToPlayInputSeq(fighter_gobj, dMvOpeningSamusInputSeq);
    }
}

// 0x8018D8B0
void mvOpeningSamusRenderPosedFighterBackground(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 80, 255);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 110, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D9AC
void mvOpeningSamusCreatePosedFighterBackground()
{
    omAddGObjRenderProc(omMakeGObjCommon(0, 0, 0x13, 0x80000000), mvOpeningSamusRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 0x8018D9F8
void mvOpeningSamusAnimatePosedFighter(GObj* fighter_gobj)
{
    switch (gMvOpeningSamusFramesElapsed)
    {
        default:
            break;
        case 15:
            gMvOpeningSamusPosedFighterYSpeed = 17.0F;
            break;
        case 45:
            gMvOpeningSamusPosedFighterYSpeed = 15.0F;
            break;
        case 60:
            gMvOpeningSamusPosedFighterYSpeed = 0.0F;
            break;
    }

    if ((gMvOpeningSamusFramesElapsed > 15) && (gMvOpeningSamusFramesElapsed < 45))
    {
        gMvOpeningSamusPosedFighterYSpeed += -1.0F / 15.0F;
    }
    if ((gMvOpeningSamusFramesElapsed > 45) && (gMvOpeningSamusFramesElapsed < 60))
    {
        gMvOpeningSamusPosedFighterYSpeed += -1.0F;
    }

    DObjGetStruct(fighter_gobj)->translate.vec.f.y -= gMvOpeningSamusPosedFighterYSpeed;
}

// 0x8018DAC8
void mvOpeningSamusCreatePosedFighter()
{
    GObj* fighter_gobj;
    ftCreateDesc spawn_info = dFtDefaultFighterDesc;

    spawn_info.ft_kind = Ft_Kind_Samus;
    spawn_info.costume = ftCostume_GetIndexFFA(Ft_Kind_Samus, 0);
    spawn_info.anim_heap = gMvOpeningSamusAnimHeap;
    spawn_info.pos.x = 0.0f;
    spawn_info.pos.y = 600.0f;
    spawn_info.pos.z = 0.0f;

    fighter_gobj = ftManager_MakeFighter(&spawn_info);
    func_ovl1_803905CC(fighter_gobj, 0x1000C);
    omMoveGObjDL(fighter_gobj, 0x1A, -1);
    omAddGObjCommonProc(fighter_gobj, mvOpeningSamusAnimatePosedFighter, 1, 1);

    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 0x8018DBC8
void mvOpeningSamusCreateNameViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DC68
void mvOpeningSamusCreatePosedFighterViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
    cam->projection.persp.aspect = 5.0F / 11.0F;
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningSamusFilesArray[1], &FILE_041_SAMUS_CAMERA_PARAMS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x8018DD58
void mvOpeningSamusCreatePosedFighterBackgroundViewport()
{
    Camera *cam;
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
    cam->flags = 5;
}

// 0x8018DE08
void mvOpeningSamusMainProc(GObj* arg0)
{

    gMvOpeningSamusFramesElapsed += 1;

    if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 1U;
        func_80005C74();
    }

    if (gMvOpeningSamusFramesElapsed == 15)
    {
        omEjectGObjCommon(gMvOpeningSamusNameGObj);
        mvOpeningSamusInitFighterStagePanel();
        mvOpeningSamusCreatePosedFighterBackground();
        mvOpeningSamusCreatePosedFighter();
    }

    if (gMvOpeningSamusFramesElapsed == 60)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 0x23;
        func_80005C74();
    }
}

// 0x8018DEC4
void mvOpeningSamusInitFramesElapsed()
{
    gMvOpeningSamusFramesElapsed = 0;
}

// 0x8018DED0
void mvOpeningSamusInit()
{
    gMvOpeningSamusBattleState = gDefaultBattleState;
    gBattleState = &gMvOpeningSamusBattleState;

    gBattleState->game_type = gmMatch_GameType_Intro;

    gBattleState->gr_kind = Gr_Kind_Zebes;
    gBattleState->pl_count = 1;

    gBattleState->player_block[0].character_kind = Ft_Kind_Samus;
    gBattleState->player_block[0].player_kind = Pl_Kind_Key;

    mvOpeningSamusLoadFiles();
    omMakeGObjCommon(0x3F7, mvOpeningSamusMainProc, 0xD, 0x80000000);
    func_8000B9FC(9, 0x80000000, 0x64, 3, 0xFF);
    mvOpeningSamusInitFramesElapsed();
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_InitMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    ftManager_AllocFighterData(3, 2);
    wpManagerAllocWeapons();
    itManagerInitItems();
    efManager_AllocUserData();
    func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);
    ftManager_SetFileDataKind(Ft_Kind_Samus);

    gMvOpeningSamusAnimHeap = gsMemoryAlloc(D_ovl2_80130D9C, 0x10);
    mvOpeningSamusCreateNameViewport();
    mvOpeningSamusCreatePosedFighterBackgroundViewport();
    mvOpeningSamusCreatePosedFighterViewport();
    mvOpeningSamusDrawName();

    while (func_8000092C() < 1785U)
    {
        // sleep
    }
}

// 0x8018E07C
void mvOpeningSamusSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, gMapLightAngleX, gMapLightAngleY);
}

// intro_focus_samus_entry
void intro_focus_samus_entry()
{
    D_ovl38_8018E198.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl38_8018E198);
    D_ovl38_8018E1B4.arena_size = (u32) ((uintptr_t)&lOverlay38ArenaHi - (uintptr_t)&lOverlay38ArenaLo);
    func_8000683C(&D_ovl38_8018E1B4);
}
