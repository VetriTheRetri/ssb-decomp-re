#include <ft/fighter.h>
#include <gr/ground.h>
#include <if/interface.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <ovl0/reloc_data_mgr.h>

extern void leoInitUnit_atten();
extern u32 func_8000092C();
extern void func_800A26B8();
extern void func_ovl0_800CCF00(GObj*);
extern void func_80007080(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
extern void func_ovl0_800CD2CC();
extern GObj* func_8000B93C(
	u32 id,
	void (*arg1)(GObj *),
	s32 link,
	u32 arg3,
	void (*arg4)(GObj *),
	u32 arg5,
	s64 arg7,
	s32 arg8,
	s32 arg9,
	s32 arg10,
	void *arg11,
	u32 arg12,
	s32 arg13);

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
s32 sMVOpeningKongoPad0x8018DA40[2];

// 0x8018DA48
s32 sMVOpeningKongoTotalTimeTics;

// 0x8018DA4C
s32 sMVOpeningKongoPad0x8018DA4C;

// 0x8018DA50
GObj* sMVOpeningKongoFighterGObj;

// 0x8018DA54
s32 sMVOpeningKongoPad0x8018DA54;

// 0x8018DA58
GObj* sMVOpeningKongoStageCameraGObj;

// 0x8018DA5C
s32 sMVOpeningKongoPad0x8018DA5C[2];

// 0x8018DA68
CameraDesc sMVOpeningKongoUnusedCameraDescAdjustedStart;

// 0x8018DA88
CameraDesc sMVOpeningKongoUnusedCameraDescAdjustedEnd;

// 0x8018DAA8
rdFileNode sMVOpeningKongoStatusBuf[48];

// 0x8018DC28
rdFileNode sMVOpeningKongoForceBuf[7];

// 0x8018DC60
void *sMVOpeningKongoFiles[2];

// 0x8018DC68
scBattleState sMVOpeningKongoBattleState;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018D870
CameraDesc dMVOpeningKongoCameraDescStart =
{
    // Eye
    { 1000.0F, 900.0F, 3600.0F },

    // At
    { 600.0F, 800.0F, 0.0F },

    // Roll (Up X)
    0.0F
};

// 0x8018D88C
CameraDesc dMVOpeningKongoCameraDescEnd =
{
    // Eye
    { -1800.0F, 800.0F, 1500.0F },

    // At
    { 1000.0F, 700.0F, 0.0F },

    // Roll (Up X)
    0.0F
};

// 0x8018D8A8
ftKeyCommand dMVOpeningKongoDonkeyInputSeq[/* */] =
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
ftKeyCommand dMVOpeningKongoSamusInputSeq[/* */] =
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
u32 dMVOpeningKongoFileIDs[/* */] = { &D_NF_00000025, &D_NF_00000040 };

// 0x8018D93C
syDisplaySetup dMVOpeningKongoDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x8018D958
scRuntimeInfo dMVOpeningKongoGtlSetup =
{
    0x00000000,
	func_8000A5E4,
	func_800A26B8,
	&ovl51_BSS_END,
	0x00000000,
	0x00000001,
	0x00000002,
	0x00004000,
	0x00002000,
	0x00000000,
	0x00000000,
	0x00008000,
	0x00020000,
	0x0000C000,
	mvOpeningKongoProcLights,
	update_contdata,
	0x00000000,
	0x00000600,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000088,
	0x00000000,
	0x800D5CAC,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000088,
	0x00000000,
	0x0000006C,
	0x00000000,
	0x00000090,
	mvOpeningKongoProcStart
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8018D0C0
void mvOpeningKongoSetupFiles(void)
{
    rdSetup rd_setup;

    rd_setup.table_addr = (uintptr_t)&lRDManagerTableAddr;
    rd_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
    rd_setup.file_heap = 0;
    rd_setup.file_heap_size = 0;
    rd_setup.status_buf = sMVOpeningKongoStatusBuf;
    rd_setup.status_buf_size = ARRAY_COUNT(sMVOpeningKongoStatusBuf);
    rd_setup.force_buf = sMVOpeningKongoForceBuf;
    rd_setup.force_buf_size = ARRAY_COUNT(sMVOpeningKongoForceBuf);

    rdManagerInitSetup(&rd_setup);
    rdManagerLoadFiles
    (
        dMVOpeningKongoFileIDs,
        ARRAY_COUNT(dMVOpeningKongoFileIDs),
        sMVOpeningKongoFiles,
        gsMemoryAlloc
        (
            rdManagerGetAllocSize
            (
                dMVOpeningKongoFileIDs, 
                ARRAY_COUNT(dMVOpeningKongoFileIDs)
            ),
            0x10
        )
    );
}

// 0x8018D160 - Unused?
void func_ovl49_8018D160(void)
{
    return;
}

// 0x8018D168
void mvOpeningKongoMakeStageViewport(Vec3f unused)
{
    Camera *cam;

    sMVOpeningKongoUnusedCameraDescAdjustedStart = dMVOpeningKongoCameraDescStart;
    sMVOpeningKongoUnusedCameraDescAdjustedEnd = dMVOpeningKongoCameraDescEnd;

    sMVOpeningKongoStageCameraGObj = func_ovl2_8010DB2C(NULL);

    cam = CameraGetStruct(sMVOpeningKongoStageCameraGObj);

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->projection.persp.aspect = 15.0F / 11.0F;

    func_8000B39C(sMVOpeningKongoStageCameraGObj);

    cam->projection.persp.near = 50.0F;
    cam->projection.persp.far = 15000.0F;

    gcAddCameraCamAnimJoint(cam, gcGetDataFromFile(AObjEvent*, sMVOpeningKongoFiles[1], &lMVOpeningKongoCamAnimJoint), 0.0F);
    gcAddGObjProcess(sMVOpeningKongoStageCameraGObj, gcPlayCamAnim, nOMObjProcessKindProc, 1);

    gcPlayCamAnim(sMVOpeningKongoStageCameraGObj);
}

// 0x8018D2DC
void mvOpeningKongoMakeFighters(void)
{
    GObj* fighter_gobj;
    s32 i;
    s32 unused[2];
    s32 pos_ids[2];
    Vec3f spawn_position[2];
    ftStruct *fp;

    grWallpaperMakeGroundWallpaper();
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

    mvOpeningKongoMakeStageViewport(spawn_position[1]);

    gmRumbleMakeActor();
    ftPublicityMakeActor();

    for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
    {
        ftCreateDesc ft_desc = dFTManagerDefaultFighterDesc;

        if (gBattleState->players[i].pl_kind == nFTPlayerKindNot)
        {
            continue;
        }
        ftManagerSetupFilesAllKind(gBattleState->players[i].ft_kind);

        ft_desc.ft_kind = gBattleState->players[i].ft_kind;

        if (gBattleState->players[i].ft_kind == nFTKindDonkey)
        {
            ft_desc.pos.x = spawn_position[1].x;
            ft_desc.pos.y = spawn_position[1].y;
            ft_desc.pos.z = spawn_position[1].z;

            ft_desc.lr_spawn = nGMFacingR;

            ft_desc.damage = 200;
        }
        else
        {
            ft_desc.pos.x = spawn_position[0].x;
            ft_desc.pos.y = spawn_position[0].y;
            ft_desc.pos.z = spawn_position[0].z;

            ft_desc.lr_spawn = nGMFacingL;

            ft_desc.damage = 40;
        }
        ft_desc.team = gBattleState->players[i].team;
        ft_desc.player = i;
        ft_desc.detail = nFTPartsDetailHigh;
        ft_desc.costume = gBattleState->players[i].costume;
        ft_desc.handicap = gBattleState->players[i].handicap;
        ft_desc.cp_level = gBattleState->players[i].level;
        ft_desc.stock_count = gBattleState->stock_setting;
        ft_desc.pl_kind = gBattleState->players[i].pl_kind;
        ft_desc.controller = &gPlayerControllers[i];
        ft_desc.anim_heap = ftManagerAllocAnimHeapKind(gBattleState->players[i].ft_kind);

        sMVOpeningKongoFighterGObj = fighter_gobj = ftManagerMakeFighter(&ft_desc);

        if (gBattleState->players[i].ft_kind == nFTKindDonkey)
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

        if (gBattleState->players[i].ft_kind == nFTKindDonkey)
        {
            ftParamSetKey(fighter_gobj, dMVOpeningKongoDonkeyInputSeq);
        }
        else ftParamSetKey(fighter_gobj, dMVOpeningKongoSamusInputSeq);
    }
}

// 0x8018D5E4
void mvOpeningKongoProcRun(GObj *gobj)
{
    sMVOpeningKongoTotalTimeTics++;

    if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = nSCKindTitle;

        leoInitUnit_atten();
    }
    if (sMVOpeningKongoTotalTimeTics == 320)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = nSCKindOpeningYoster;

        leoInitUnit_atten();
    }
}

// 0x8018D668 - Unused?
void func_ovl51_8018D668(void)
{
    return;
}

// 0x8018D670
void mvOpeningKongoProcStart(void)
{
    sMVOpeningKongoBattleState = gDefaultBattleState;
    gBattleState = &sMVOpeningKongoBattleState;

    gBattleState->game_type = nSCBattleGameTypeOpening;

    gBattleState->gr_kind = nGRKindJungle;
    gBattleState->pl_count = 1;

    gBattleState->players[0].ft_kind = nFTKindDonkey;
    gBattleState->players[0].pl_kind = nFTPlayerKindKey;
    gBattleState->players[1].ft_kind = nFTKindSamus;
    gBattleState->players[1].pl_kind = nFTPlayerKindKey;

    mvOpeningKongoSetupFiles();
    gcMakeGObjSPAfter(nOMObjCommonKindMovie, mvOpeningKongoProcRun, 13, GOBJ_LINKORDER_DEFAULT);
    func_8000B9FC(9, 0x80000000, 0x64, 3, 0xFF);
    efAllocInitParticleBank();
    ftParamInitGame();
    mpCollisionInitGroundData();
    cmManagerSetViewportDimensions(10, 10, 310, 230);
    cmManagerMakeWallpaperCamera();
    ftManagerAllocFighter(FTDATA_FLAG_MAINMOTION, 2);
    wpManagerAllocWeapons();
    itManagerInitItems();
    efManagerInitEffects();
    ifScreenFlashMakeInterface(0xFF);
    mvOpeningKongoMakeFighters();

    while (func_8000092C() < 2880)
    {
        continue;
    }
}

// 0x8018D7CC
void mvOpeningKongoProcLights(Gfx **dls)
{
    gSPSetGeometryMode(dls[0]++, G_LIGHTING);
    ftRenderLightsDrawReflect(dls, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018D818
void mvOpeningKongoStartScene(void)
{
    dMVOpeningKongoDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    func_80007024(&dMVOpeningKongoDisplaySetup);

    dMVOpeningKongoGtlSetup.arena_size = (size_t) ((uintptr_t)&ovl1_TEXT_START - (uintptr_t)&ovl51_BSS_END);
    gsGTLSceneInit(&dMVOpeningKongoGtlSetup);
}
