#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningDKVsSamus.h>

// ovl51 stuff
extern CameraVec7 dMvOpeningDKVsSamusCameraSettingsStart; // 0x8018D870
extern CameraVec7 dMvOpeningDKVsSamusCameraSettingsEnd; // 0x8018D88C

// 0x8018D8A8
ftExplainCommand dMvOpeningDKVsSamusInputSeqDonkey[/* */] =
{
    FTEXPLAIN_EVENT_STICK(0, -I_CONTROLLER_RANGE_MAX, 0),   // 0x2000, 0x00B0
    FTEXPLAIN_EVENT_BUTTON(B_BUTTON, 1),                    // 0x1001, 0x4000
    FTEXPLAIN_EVENT_BUTTON(0, 1),                           // 0x1001, 0x0000
    FTEXPLAIN_EVENT_STICK(0, 0, 50),                        // 0x2032, 0x0000
    FTEXPLAIN_EVENT_STICK(15, I_CONTROLLER_RANGE_MAX, 30),  // 0x201E, 0x0F50
    FTEXPLAIN_EVENT_STICK(I_CONTROLLER_RANGE_MAX, 0, 10),   // 0x200A, 0x5000
    FTEXPLAIN_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
    FTEXPLAIN_EVENT_BUTTON(0, 1),                           // 0x1001, 0x0000
    FTEXPLAIN_EVENT_STICK(I_CONTROLLER_RANGE_MAX, 0, 60),   // 0x203C, 0x5000
    FTEXPLAIN_EVENT_STICK(-30, 0, 3),                       // 0x2003, 0xE200
    FTEXPLAIN_EVENT_STICK(0, 0, 10),                        // 0x200A, 0x0000
    FTEXPLAIN_EVENT_STICK(-I_CONTROLLER_RANGE_MAX, 0, 1),   // 0x2001, 0xB000
    FTEXPLAIN_EVENT_BUTTON(B_BUTTON, 1),                    // 0x1001, 0x4000
    FTEXPLAIN_EVENT_BUTTON(0, 1),                           // 0x1001, 0x0000
    FTEXPLAIN_EVENT_BUTTON(B_BUTTON, 1),                    // 0x1001, 0x4000
    FTEXPLAIN_EVENT_BUTTON(0, 1),                           // 0x1001, 0x0000
    FTEXPLAIN_EVENT_STICK(0, 0, 1),                         // 0x2001, 0x0000
    FTEXPLAIN_EVENT_END()                                   // 0x0000
};

// 0x8018D8F0
ftExplainCommand dMvOpeningDKVsSamusInputSeqSamus[/* */] =
{
    FTEXPLAIN_EVENT_STICK(-I_CONTROLLER_RANGE_MAX, 0, 20),  // 0x2014, 0xB000
    FTEXPLAIN_EVENT_STICK(0, 0, 75),                        // 0x204B, 0x0000
    FTEXPLAIN_EVENT_BUTTON(Z_TRIG, 1),                      // 0x1001, 0x2000
    FTEXPLAIN_EVENT_STICK(-I_CONTROLLER_RANGE_MAX, 0, 60),  // 0x203C, 0xB000
    FTEXPLAIN_EVENT_STICK(0, 0, 1),                         // 0x2001, 0x0000
    FTEXPLAIN_EVENT_STICK(-I_CONTROLLER_RANGE_MAX, 0, 5),   // 0x2005, 0xB000
    FTEXPLAIN_EVENT_STICK(0, 0, 1),                         // 0x2001, 0x0000
    FTEXPLAIN_EVENT_STICK(0, 0, 23),                        // 0x2017, 0x0000
    FTEXPLAIN_EVENT_STICK(-I_CONTROLLER_RANGE_MAX, 0, 5),   // 0x2005, 0xB000
    FTEXPLAIN_EVENT_BUTTON(0, 1),                           // 0x1001, 0x0000
    FTEXPLAIN_EVENT_STICK(0, 0, 40),                        // 0x2028, 0x0000
    FTEXPLAIN_EVENT_STICK(30, 0, 3),                        // 0x2003, 0x1E00
    FTEXPLAIN_EVENT_STICK(0, 0, 1),                         // 0x2001, 0x0000
    FTEXPLAIN_EVENT_BUTTON(B_BUTTON, 1),                    // 0x1001, 0x4000
    FTEXPLAIN_EVENT_BUTTON(0, 1),                           // 0x1001, 0x0000
    FTEXPLAIN_EVENT_BUTTON(B_BUTTON, 1),                    // 0x1001, 0x4000
    FTEXPLAIN_EVENT_END()                                   // 0x0000
};

extern RldmFileId D_ovl51_8018D934[2];
extern scUnkDataBounds D_ovl51_8018D93C;
extern scRuntimeInfo D_ovl51_8018D958;

extern s32 gMvOpeningDKVsSamusFramesElapsed; // 0x8018DA48

extern GObj* gMvOpeningDKVsSamusFighterGObj; // 0x8018DA50

extern GObj* gMvOpeningDKVsSamusStageCameraGObj; // 0x8018DA58

extern CameraVec7 gMvOpeningDKVsSamusUnusedCameraSettingsAdjustedStart; // 0x8018DA68
extern CameraVec7 gMvOpeningDKVsSamusUnusedCameraSettingsAdjustedEnd; // 0x8018DA88

extern rdFileNode D_ovl51_8018DAA8[48];
extern rdFileNode D_ovl51_8018DC28[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningDKVsSamusFilesArray[2]; // 0x8018DC60[2]
// gMvOpeningDKVsSamusFilesArray[0] - D_ovl51_8018DC60; // file 0x025 pointer
// gMvOpeningDKVsSamusFilesArray[1] - D_ovl51_8018DC64; // file 0x040 pointer

extern gmBattleState gMvOpeningDKVsSamusBattleState; // 0x8018DC68

// Offsets
extern intptr_t FILE_040_CAMERA_PARAMETERS_OFFSET = 0x0000; // file 0x040 offset for camera parameters

// 0x8018D0C0
void mvOpeningDKVsSamusLoadFiles()
{
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl51_8018DAA8;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl51_8018DAA8);
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl51_8018DC28;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl51_8018DC28);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl51_8018D934, ARRAY_COUNT(D_ovl51_8018D934), gMvOpeningDKVsSamusFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl51_8018D934, ARRAY_COUNT(D_ovl51_8018D934)), 0x10));
}

// 0x8018D160 - Unused?
void func_ovl49_8018D160()
{
    return;
}

// 0x8018D168
void mvOpeningDKVsSamusCreateStageViewport(Vec3f arg0)
{
    Camera *cam;

    gMvOpeningDKVsSamusUnusedCameraSettingsAdjustedStart = dMvOpeningDKVsSamusCameraSettingsStart;
    gMvOpeningDKVsSamusUnusedCameraSettingsAdjustedEnd = dMvOpeningDKVsSamusCameraSettingsEnd;

    gMvOpeningDKVsSamusStageCameraGObj = func_ovl2_8010DB2C(0);
    cam = CameraGetStruct(gMvOpeningDKVsSamusStageCameraGObj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->projection.persp.aspect = 15.0F / 11.0F;
    func_8000B39C(gMvOpeningDKVsSamusStageCameraGObj);
    cam->projection.persp.near = 50.0F;
    cam->projection.persp.far = 15000.0F;

    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningDKVsSamusFilesArray[1], &FILE_040_CAMERA_PARAMETERS_OFFSET), 0.0F);
    omAddGObjCommonProc(gMvOpeningDKVsSamusStageCameraGObj, func_80010580, 1, 1);

    func_80010580(gMvOpeningDKVsSamusStageCameraGObj);
}

// 0x8018D2DC
void mvOpeningDKVsSamusCreateFighters()
{
    GObj* fighter_gobj;
    s32 i;
    s32 unused[2];
    s32 pos_ids[2];
    Vec3f spawn_position[2];
    ftStruct *fp;

    grWallpaper_SetGroundWallpaper();
    grNodeInit_SetGroundFiles();

    if (mpCollision_GetMPointCountKind(mpMPoint_Kind_AutoDemoSpawn2) != 1)
    {
        while (TRUE)
        {
            gsFatalPrintF("wrong number of mapobject");
            smCrashPrintGObjStatus();
        }
    }

    mpCollision_GetMPointIDsKind(mpMPoint_Kind_AutoDemoSpawn2, &pos_ids[1]);
    mpCollision_GetMPointPositionID(pos_ids[1], &spawn_position[1]);

    if (mpCollision_GetMPointCountKind(mpMPoint_Kind_AutoDemoSpawn3) != 1)
    {
        while (TRUE)
        {
            gsFatalPrintF("wrong number of mapobject");
            smCrashPrintGObjStatus();
        }
    }

    mpCollision_GetMPointIDsKind(mpMPoint_Kind_AutoDemoSpawn3, &pos_ids[0]);
    mpCollision_GetMPointPositionID(pos_ids[0], &spawn_position[0]);
    spawn_position[0].x += 1100.0F;

    mvOpeningDKVsSamusCreateStageViewport(spawn_position[1]);
    gmRumble_SetPlayerRumble();
    ftPublicitySetup();

    for (i = 0; i < ARRAY_COUNT(gBattleState->player_block); i++)
    {
        ftCreateDesc spawn_info = dFTDefaultFighterDesc;

        if (gBattleState->player_block[i].player_kind == Pl_Kind_Not) continue;

        ftManagerSetupDataKind(gBattleState->player_block[i].character_kind);

        spawn_info.ft_kind = gBattleState->player_block[i].character_kind;

        if (gBattleState->player_block[i].character_kind == Ft_Kind_Donkey)
        {
            spawn_info.pos.x = spawn_position[1].x;
            spawn_info.pos.y = spawn_position[1].y;
            spawn_info.pos.z = spawn_position[1].z;
            spawn_info.lr_spawn = LR_Right;
            spawn_info.damage = 200;
        }
        else
        {
            spawn_info.pos.x = spawn_position[0].x;
            spawn_info.pos.y = spawn_position[0].y;
            spawn_info.pos.z = spawn_position[0].z;
            spawn_info.lr_spawn = LR_Left;
            spawn_info.damage = 40;
        }
        spawn_info.team = gBattleState->player_block[i].team_index;
        spawn_info.player = i;
        spawn_info.model_lod = ftParts_LOD_HighPoly;
        spawn_info.costume = gBattleState->player_block[i].costume_index;
        spawn_info.handicap = gBattleState->player_block[i].handicap;
        spawn_info.cp_level = gBattleState->player_block[i].level;
        spawn_info.stock_count = gBattleState->stock_setting;
        spawn_info.pl_kind = gBattleState->player_block[i].player_kind;
        spawn_info.controller = &gPlayerControllers[i];
        spawn_info.anim_heap = ftManagerAllocAnimHeapKind(gBattleState->player_block[i].character_kind);

        gMvOpeningDKVsSamusFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

        if (gBattleState->player_block[i].character_kind == Ft_Kind_Donkey)
        {
            fp = ftGetStruct(fighter_gobj);

            fp->fighter_vars.donkey.charge_level = 9;
        }
        else
        {
            fp = ftGetStruct(fighter_gobj);

            fp->fighter_vars.samus.charge_level = 6;
        }

        ftCommon_ClearPlayerMatchStats(i, fighter_gobj);

        if (gBattleState->player_block[i].character_kind == Ft_Kind_Donkey)
        {
            ftCommon_SetHowToPlayInputSeq(fighter_gobj, dMvOpeningDKVsSamusInputSeqDonkey);
        }
        else
        {
            ftCommon_SetHowToPlayInputSeq(fighter_gobj, dMvOpeningDKVsSamusInputSeqSamus);
        }
    }
}

// 0x8018D5E4
void mvOpeningDKVsSamusMainProc(s32 arg0)
{
    gMvOpeningDKVsSamusFramesElapsed += 1;

    if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != 0)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 1;
        func_80005C74();
    }
    if (gMvOpeningDKVsSamusFramesElapsed == 0x140) {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 0x27;
        func_80005C74();
    }
}

// 0x8018D668 - Unused?
void func_ovl51_8018D668()
{
    return;
}

// 0x8018D670
void mvOpeningDKVsSamusInit()
{
    gMvOpeningDKVsSamusBattleState = gDefaultBattleState;
    gBattleState = &gMvOpeningDKVsSamusBattleState;

    gBattleState->game_type = gmMatch_GameType_Intro;

    gBattleState->gr_kind = Gr_Kind_Jungle;
    gBattleState->pl_count = 1;

    gBattleState->player_block[0].character_kind = Ft_Kind_Donkey;
    gBattleState->player_block[0].player_kind = Pl_Kind_Key;
    gBattleState->player_block[1].character_kind = Ft_Kind_Samus;
    gBattleState->player_block[1].player_kind = Pl_Kind_Key;

    mvOpeningDKVsSamusLoadFiles();
    omMakeGObjSPAfter(0x3F7, mvOpeningDKVsSamusMainProc, 0xD, 0x80000000);
    func_8000B9FC(9, 0x80000000, 0x64, 3, 0xFF);
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_InitMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    ftManagerAllocFighter(2, 2);
    wpManagerAllocWeapons();
    itManagerInitItems();
    efManager_AllocUserData();
    ifScreenFlash_InitInterfaceVars(0xFF);
    mvOpeningDKVsSamusCreateFighters();

    while (func_8000092C() < 2880U)
    {
        // sleep;
    }
}

// 0x8018D7CC
void mvOpeningDKVsSamusSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, gMPLightAngleX, gMPLightAngleY);
}

// intro_dk_vs_samus_entry
void intro_sex_kicks_entry()
{
    D_ovl51_8018D93C.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl51_8018D93C);
    D_ovl51_8018D958.arena_size = (u32) ((uintptr_t)&lOverlay51ArenaHi - (uintptr_t)&lOverlay51ArenaLo);
    gsGTLSceneInit(&D_ovl51_8018D958);
}