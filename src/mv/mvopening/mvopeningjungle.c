#include <ft/fighter.h>
#include <gr/ground.h>
#include <if/interface.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/video.h>

extern void syTaskmanSetLoadScene();
extern u32 func_8000092C();
extern void func_800A26B8();
extern void syRdpSetViewport(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_00000025;
extern uintptr_t D_NF_00000040;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x8018DA40
s32 sMVOpeningJunglePad0x8018DA40[2];

// 0x8018DA48
s32 sMVOpeningJungleTotalTimeTics;

// 0x8018DA4C
s32 sMVOpeningJunglePad0x8018DA4C;

// 0x8018DA50
GObj* sMVOpeningJungleFighterGObj;

// 0x8018DA54
s32 sMVOpeningJunglePad0x8018DA54;

// 0x8018DA58
GObj* sMVOpeningJungleStageCameraGObj;

// 0x8018DA5C
s32 sMVOpeningJunglePad0x8018DA5C[2];

// 0x8018DA68
CObjDesc sMVOpeningJungleUnusedCObjDescAdjustedStart;

// 0x8018DA88
CObjDesc sMVOpeningJungleUnusedCObjDescAdjustedEnd;

// 0x8018DAA8
LBFileNode sMVOpeningJungleStatusBuffer[48];

// 0x8018DC28
LBFileNode sMVOpeningJungleForceStatusBuffer[7];

// 0x8018DC60
void *sMVOpeningJungleFiles[2];

// 0x8018DC68
SCBattleState sMVOpeningJungleBattleState;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018D870
CObjDesc dMVOpeningJungleCObjDescStart =
{
    // Eye
    { 1000.0F, 900.0F, 3600.0F },

    // At
    { 600.0F, 800.0F, 0.0F },

    // Roll (Up X)
    0.0F
};

// 0x8018D88C
CObjDesc dMVOpeningJungleCObjDescEnd =
{
    // Eye
    { -1800.0F, 800.0F, 1500.0F },

    // At
    { 1000.0F, 700.0F, 0.0F },

    // Roll (Up X)
    0.0F
};

// 0x8018D8A8
FTKeyCommand dMVOpeningJungleDonkeyInputSeq[/* */] =
{
    FTKEY_EVENT_STICK(0, -I_CONTROLLER_RANGE_MAX, 0),   // 0x2000, 0x00B0
    FTKEY_EVENT_BUTTON(B_BUTTON, 1),                    // 0x1001, 0x4000
    FTKEY_EVENT_BUTTON(0, 1),                           // 0x1001, 0x0000
    FTKEY_EVENT_STICK(0, 0, 50),                        // 0x2032, 0x0000
    FTKEY_EVENT_STICK(15, I_CONTROLLER_RANGE_MAX, 30),  // 0x201E, 0x0F50
    FTKEY_EVENT_STICK(I_CONTROLLER_RANGE_MAX, 0, 10),   // 0x200A, 0x5000
    FTKEY_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
    FTKEY_EVENT_BUTTON(0, 1),                           // 0x1001, 0x0000
    FTKEY_EVENT_STICK(I_CONTROLLER_RANGE_MAX, 0, 60),   // 0x203C, 0x5000
    FTKEY_EVENT_STICK(-30, 0, 3),                       // 0x2003, 0xE200
    FTKEY_EVENT_STICK(0, 0, 10),                        // 0x200A, 0x0000
    FTKEY_EVENT_STICK(-I_CONTROLLER_RANGE_MAX, 0, 1),   // 0x2001, 0xB000
    FTKEY_EVENT_BUTTON(B_BUTTON, 1),                    // 0x1001, 0x4000
    FTKEY_EVENT_BUTTON(0, 1),                           // 0x1001, 0x0000
    FTKEY_EVENT_BUTTON(B_BUTTON, 1),                    // 0x1001, 0x4000
    FTKEY_EVENT_BUTTON(0, 1),                           // 0x1001, 0x0000
    FTKEY_EVENT_STICK(0, 0, 1),                         // 0x2001, 0x0000
    FTKEY_EVENT_END()                                   // 0x0000
};

// 0x8018D8F0
FTKeyCommand dMVOpeningJungleSamusInputSeq[/* */] =
{
    FTKEY_EVENT_STICK(-I_CONTROLLER_RANGE_MAX, 0, 20),  // 0x2014, 0xB000
    FTKEY_EVENT_STICK(0, 0, 75),                        // 0x204B, 0x0000
    FTKEY_EVENT_BUTTON(Z_TRIG, 1),                      // 0x1001, 0x2000
    FTKEY_EVENT_STICK(-I_CONTROLLER_RANGE_MAX, 0, 60),  // 0x203C, 0xB000
    FTKEY_EVENT_STICK(0, 0, 1),                         // 0x2001, 0x0000
    FTKEY_EVENT_STICK(-I_CONTROLLER_RANGE_MAX, 0, 5),   // 0x2005, 0xB000
    FTKEY_EVENT_STICK(0, 0, 1),                         // 0x2001, 0x0000
    FTKEY_EVENT_STICK(0, 0, 23),                        // 0x2017, 0x0000
    FTKEY_EVENT_STICK(-I_CONTROLLER_RANGE_MAX, 0, 5),   // 0x2005, 0xB000
    FTKEY_EVENT_BUTTON(0, 1),                           // 0x1001, 0x0000
    FTKEY_EVENT_STICK(0, 0, 40),                        // 0x2028, 0x0000
    FTKEY_EVENT_STICK(30, 0, 3),                        // 0x2003, 0x1E00
    FTKEY_EVENT_STICK(0, 0, 1),                         // 0x2001, 0x0000
    FTKEY_EVENT_BUTTON(B_BUTTON, 1),                    // 0x1001, 0x4000
    FTKEY_EVENT_BUTTON(0, 1),                           // 0x1001, 0x0000
    FTKEY_EVENT_BUTTON(B_BUTTON, 1),                    // 0x1001, 0x4000
    FTKEY_EVENT_END()                                   // 0x0000
};

// 0x8018D934?
u32 dMVOpeningJungleFileIDs[/* */] = { &D_NF_00000025, &D_NF_00000040 };

// 0x8018D93C
syVideoSetup dMVOpeningJungleVideoSetup = SYVIDEO_DEFINE_DEFAULT();

// 0x8018D958
syTaskmanSetup dMVOpeningJungleTaskmanSetup =
{
    // Task Logic Buffer Setup
    {
        0,                              // ???
        func_8000A5E4,                  // Update function
        func_800A26B8,                  // Frame draw function
        &ovl51_BSS_END,                 // Allocatable memory pool start
        0,                              // Allocatable memory pool size
        1,                              // ???
        2,                              // Number of contexts?
        sizeof(Gfx) * 2048,             // Display List Buffer 0 Size
        sizeof(Gfx) * 1024,             // Display List Buffer 1 Size
        0,                              // Display List Buffer 2 Size
        0,                              // Display List Buffer 3 Size
        0x8000,                         // Graphics Heap Size
        2,                              // ???
        0xC000,                         // RDP Output Buffer Size
        mvOpeningJungleFuncLights,      // Pre-render function
        update_contdata,                // Controller I/O function
    },

    0,                                  // Number of GObjThreads
    sizeof(u64) * 192,                  // Thread stack size
    0,                                  // Number of thread stacks
    0,                                  // ???
    0,                                  // Number of GObjProcesses
    0,                                  // Number of GObjs
    sizeof(GObj),                       // GObj size
    0,                                  // Number of Object Manager Matrices
    dLBCommonFuncMatrixList,            // Matrix function list
    NULL,                               // Function for ejecting DObjVec?
    0,                                  // Number of AObjs
    0,                                  // Number of MObjs
    0,                                  // Number of DObjs
    sizeof(DObj),                       // DObj size
    0,                                  // Number of SObjs
    sizeof(SObj),                       // SObj size
    0,                                  // Number of Cameras
    sizeof(CObj),                     // Camera size
    
    mvOpeningJungleFuncStart            // Task start function
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8018D0C0
void mvOpeningJungleSetupFiles(void)
{
    LBRelocSetup rl_setup;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sMVOpeningJungleStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sMVOpeningJungleStatusBuffer);
    rl_setup.force_status_buffer = sMVOpeningJungleForceStatusBuffer;
    rl_setup.force_status_buffer_size = ARRAY_COUNT(sMVOpeningJungleForceStatusBuffer);

    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dMVOpeningJungleFileIDs,
        ARRAY_COUNT(dMVOpeningJungleFileIDs),
        sMVOpeningJungleFiles,
        syTaskmanMalloc
        (
            lbRelocGetAllocSize
            (
                dMVOpeningJungleFileIDs, 
                ARRAY_COUNT(dMVOpeningJungleFileIDs)
            ),
            0x10
        )
    );
}

// 0x8018D160 - Unused?
void func_ovl51_8018D160(void)
{
    return;
}

// 0x8018D168
void mvOpeningJungleMakeGroundViewport(Vec3f unused)
{
    CObj *cobj;

    sMVOpeningJungleUnusedCObjDescAdjustedStart = dMVOpeningJungleCObjDescStart;
    sMVOpeningJungleUnusedCObjDescAdjustedEnd = dMVOpeningJungleCObjDescEnd;

    sMVOpeningJungleStageCameraGObj = func_ovl2_8010DB2C(NULL);

    cobj = CObjGetStruct(sMVOpeningJungleStageCameraGObj);

    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cobj->projection.persp.aspect = 15.0F / 11.0F;

    gcEndProcessAll(sMVOpeningJungleStageCameraGObj);

    cobj->projection.persp.near = 50.0F;
    cobj->projection.persp.far = 15000.0F;

    gcAddCameraCamAnimJoint(cobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningJungleFiles[1], &lMVOpeningJungleCamAnimJoint), 0.0F);
    gcAddGObjProcess(sMVOpeningJungleStageCameraGObj, gcPlayCamAnim, nGCProcessKindProc, 1);

    gcPlayCamAnim(sMVOpeningJungleStageCameraGObj);
}

// 0x8018D2DC
void mvOpeningJungleMakeFighters(void)
{
    GObj* fighter_gobj;
    s32 i;
    s32 unused[2];
    s32 pos_ids[2];
    Vec3f spawn_position[2];
    FTStruct *fp;

    grWallpaperMakeDecideKind();
    grCommonSetupInitAll();

    if (mpCollisionGetMapObjCountKind(nMPMapObjKindMovieSpawn2) != 1)
    {
        while (TRUE)
        {
            syErrorPrintf("wrong number of mapobject\n");
            scManagerRunPrintGObjStatus();
        }
    }
    mpCollisionGetMapObjIDsKind(nMPMapObjKindMovieSpawn2, &pos_ids[1]);
    mpCollisionGetMapObjPositionID(pos_ids[1], &spawn_position[1]);

    if (mpCollisionGetMapObjCountKind(nMPMapObjKindMovieSpawn3) != 1)
    {
        while (TRUE)
        {
            syErrorPrintf("wrong number of mapobject\n");
            scManagerRunPrintGObjStatus();
        }
    }
    mpCollisionGetMapObjIDsKind(nMPMapObjKindMovieSpawn3, &pos_ids[0]);
    mpCollisionGetMapObjPositionID(pos_ids[0], &spawn_position[0]);

    spawn_position[0].x += 1100.0F;

    mvOpeningJungleMakeGroundViewport(spawn_position[1]);

    gmRumbleMakeActor();
    ftPublicityMakeActor();

    for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
    {
        FTCreateDesc ft_desc = dFTManagerDefaultFighterDesc;

        if (gBattleState->players[i].pkind == nFTPlayerKindNot)
        {
            continue;
        }
        ftManagerSetupFilesAllKind(gBattleState->players[i].fkind);

        ft_desc.fkind = gBattleState->players[i].fkind;

        if (gBattleState->players[i].fkind == nFTKindDonkey)
        {
            ft_desc.pos.x = spawn_position[1].x;
            ft_desc.pos.y = spawn_position[1].y;
            ft_desc.pos.z = spawn_position[1].z;

            ft_desc.lr_spawn = +1;

            ft_desc.damage = 200;
        }
        else
        {
            ft_desc.pos.x = spawn_position[0].x;
            ft_desc.pos.y = spawn_position[0].y;
            ft_desc.pos.z = spawn_position[0].z;

            ft_desc.lr_spawn = -1;

            ft_desc.damage = 40;
        }
        ft_desc.team = gBattleState->players[i].team;
        ft_desc.player = i;
        ft_desc.detail = nFTPartsDetailHigh;
        ft_desc.costume = gBattleState->players[i].costume;
        ft_desc.handicap = gBattleState->players[i].handicap;
        ft_desc.cp_level = gBattleState->players[i].level;
        ft_desc.stock_count = gBattleState->stock_setting;
        ft_desc.pkind = gBattleState->players[i].pkind;
        ft_desc.controller = &gPlayerControllers[i];
        ft_desc.figatree_heap = ftManagerAllocFigatreeHeapKind(gBattleState->players[i].fkind);

        sMVOpeningJungleFighterGObj = fighter_gobj = ftManagerMakeFighter(&ft_desc);

        if (gBattleState->players[i].fkind == nFTKindDonkey)
        {
            fp = ftGetStruct(fighter_gobj);

            fp->fighter_vars.donkey.charge_level = 9;
        }
        else
        {
            fp = ftGetStruct(fighter_gobj);

            fp->fighter_vars.samus.charge_level = 6;
        }
        ftParamInitPlayerBattleStats(i, fighter_gobj);

        if (gBattleState->players[i].fkind == nFTKindDonkey)
        {
            ftParamSetKey(fighter_gobj, dMVOpeningJungleDonkeyInputSeq);
        }
        else ftParamSetKey(fighter_gobj, dMVOpeningJungleSamusInputSeq);
    }
}

// 0x8018D5E4
void mvOpeningJungleFuncRun(GObj *gobj)
{
    sMVOpeningJungleTotalTimeTics++;

    if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = nSCKindTitle;

        syTaskmanSetLoadScene();
    }
    if (sMVOpeningJungleTotalTimeTics == 320)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = nSCKindOpeningYoster;

        syTaskmanSetLoadScene();
    }
}

// 0x8018D668 - Unused?
void func_ovl51_8018D668(void)
{
    return;
}

// 0x8018D670
void mvOpeningJungleFuncStart(void)
{
    sMVOpeningJungleBattleState = gDefaultBattleState;
    gBattleState = &sMVOpeningJungleBattleState;

    gBattleState->game_type = nSCBattleGameTypeOpening;

    gBattleState->gr_kind = nGRKindJungle;
    gBattleState->pl_count = 1;

    gBattleState->players[0].fkind = nFTKindDonkey;
    gBattleState->players[0].pkind = nFTPlayerKindKey;
    gBattleState->players[1].fkind = nFTKindSamus;
    gBattleState->players[1].pkind = nFTPlayerKindKey;

    mvOpeningJungleSetupFiles();
    gcMakeGObjSPAfter(nGCCommonKindMovie, mvOpeningJungleFuncRun, 13, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 3, 0xFF);
    efParticleInitAll();
    ftParamInitGame();
    mpCollisionInitGroundData();
    cmManagerSetViewportDimensions(10, 10, 310, 230);
    cmManagerMakeWallpaperCamera();
    ftManagerAllocFighter(FTDATA_FLAG_MAINMOTION, 2);
    wpManagerAllocWeapons();
    itManagerInitItems();
    efManagerInitEffects();
    ifScreenFlashMakeInterface(0xFF);
    mvOpeningJungleMakeFighters();

    while (func_8000092C() < 2880)
    {
        continue;
    }
}

// 0x8018D7CC
void mvOpeningJungleFuncLights(Gfx **dls)
{
    gSPSetGeometryMode(dls[0]++, G_LIGHTING);
    ftDisplayLightsDrawReflect(dls, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018D818
void mvOpeningJungleStartScene(void)
{
    dMVOpeningJungleVideoSetup.zbuffer = syVideoGetZBuffer(6400);
    syVideoInit(&dMVOpeningJungleVideoSetup);

    dMVOpeningJungleTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl51_BSS_END);
    syTaskmanInit(&dMVOpeningJungleTaskmanSetup);
}
