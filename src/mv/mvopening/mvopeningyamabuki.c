#include <ft/fighter.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/system_00.h>

extern void syTaskmanSetLoadScene();
extern u32 func_8000092C();
extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_00000047;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80132480
s32 sMVOpeningYamabukiPad0x80132480[2];

// 0x80132488
void *sMVOpeningYamabukiFigatreeHeap;

// 0x8013248C
s32 sMVOpeningYamabukiTotalTimeTics;

// 0x80132490
s32 sMVOpeningYamabukiPad0x80132490;

// 0x80132494
GObj* sMVOpeningYamabukiFighterGObj;

// 0x80132498
s32 sMVOpeningYamabukiPad0x80132498;

// 0x8013249C
s32 sMVOpeningYamabukiUnused0x8013249C;

// 0x801324A0
lbFileNode sMVOpeningYamabukiStatusBuffer[48];

// 0x80132620
lbFileNode sMVOpeningYamabukiForceStatusBuffer[7];

// 0x80132658
void *sMVOpeningYamabukiFiles[1];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x801323A0
u32 dMVOpeningYamabukiFileIDs[/* */] = { &D_NF_00000047 };

// 0x801323A8
Lights1 dMVOpeningYamabukiLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x801323C0
Lights1 dMVOpeningYamabukiLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x00);

// 0x801323D8
syDisplaySetup dMVOpeningYamabukiDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x801323F4
syTaskmanSetup dMVOpeningYamabukiTaskmanSetup =
{
    // Task Logic Buffer Setup
    {
        0,                              // ???
        func_8000A5E4,                  // Update function
        func_8000A340,                  // Frame draw function
        &ovl48_BSS_END,                 // Allocatable memory pool start
        0,                              // Allocatable memory pool size
        1,                              // ???
        2,                              // Number of contexts?
        sizeof(Gfx) * 2500,             // Display List Buffer 0 Size
        sizeof(Gfx) * 512,              // Display List Buffer 1 Size
        0,                              // Display List Buffer 2 Size
        0,                              // Display List Buffer 3 Size
        0x8000,                         // Graphics Heap Size
        2,                              // ???
        0xC000,                         // RDP Output Buffer Size
        mvOpeningYamabukiFuncLights,    // Pre-render function
        update_contdata,                // Controller I/O function
    },

    8,                                  // Number of GObjThreads
    sizeof(u64) * 192,                  // Thread stack size
    8,                                  // Number of thread stacks
    0,                                  // ???
    128,                                // Number of GObjProcesses
    128,                                // Number of GObjs
    sizeof(GObj),                       // GObj size
    512,                                // Number of Object Manager Matrices
    dLBCommonFuncMatrixList,            // Matrix function list
    NULL,                               // Function for ejecting DObjDynamicStore?
    512,                                // Number of AObjs
    160,                                // Number of MObjs
    512,                                // Number of DObjs
    sizeof(DObj),                       // DObj size
    128,                                // Number of SObjs
    sizeof(SObj),                       // SObj size
    16,                                 // Number of Cameras
    sizeof(Camera),                     // Camera size
    
    mvOpeningYamabukiFuncStart          // Task start function
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mvOpeningYamabukiFuncLights(Gfx **dls)
{
    gSPSetGeometryMode(dls[0]++, G_LIGHTING);
    ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
void mvOpeningYamabukiMakeWallpaper(void)
{
    GObj* gobj;
    SObj* sobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, nOMTransformTraRotRpyRSca, GOBJ_DLLINKORDER_DEFAULT, -1);

    sobj = lbCommonMakeSObjForGObj
    (
        gobj,
        lbRelocGetDataFromFile
        (
            Sprite*,
            sMVOpeningYamabukiFiles[0],
            &lMVOpeningYamabukiWallpaperSprite
        )
    );
    sobj->pos.x = 0.0F;
    sobj->pos.y = 0.0F;
}

// 0x80131BD4
void mvOpeningYamabukiMakeFighter(void)
{
    GObj* fighter_gobj;
    ftCreateDesc ft_desc = dFTManagerDefaultFighterDesc;

    ft_desc.ft_kind = nFTKindPikachu;
    ft_desc.costume = ftParamGetCostumeCommonID(nFTKindPikachu, 0);

    ft_desc.pos.x = 0.0F;
    ft_desc.pos.y = 0.0F;
    ft_desc.pos.z = 0.0F;

    ft_desc.figatree_heap = sMVOpeningYamabukiFigatreeHeap;
    sMVOpeningYamabukiFighterGObj = fighter_gobj = ftManagerMakeFighter(&ft_desc);

    scSubsysFighterSetStatus(fighter_gobj, 0x1000F);

    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0F;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0F;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0F;
}

// 0x80131CA4
void mvOpeningYamabukiMakeLegs(void)
{
    GObj* gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);
    gcSetupCustomDObjs
    (
        gobj,
        lbRelocGetDataFromFile
        (
            DObjDesc*,
            sMVOpeningYamabukiFiles[0],
            &lMVOpeningYamabukiLegsDObjDesc
        ),
        NULL,
        nOMTransformTraRotRpyRSca,
        nOMTransformNull,
        nOMTransformNull
    );
    gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 27, GOBJ_DLLINKORDER_DEFAULT, -1);

    DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

    gcAddAnimJointAll
    (
        gobj,
        lbRelocGetDataFromFile
        (
            AObjEvent32**,
            sMVOpeningYamabukiFiles[0],
            &lMVOpeningYamabukiLegsAnimJoint
        ),
        0.0F
    );
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);
}

// 0x80131D7C
void mvOpeningYamabukiMakeLegsShadow(void)
{
    GObj* gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);
    gcSetupCustomDObjs
    (
        gobj,
        lbRelocGetDataFromFile
        (
            void*,
            sMVOpeningYamabukiFiles[0],
            &lMVOpeningYamabukiLegsShadowDObjDesc
        ),
        NULL,
        nOMTransformTraRotRpyRSca,
        nOMTransformNull,
        nOMTransformNull
    );
    gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 27, GOBJ_LINKORDER_DEFAULT, -1);

    DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

    gcAddAnimJointAll
    (
        gobj,
        lbRelocGetDataFromFile
        (
            AObjEvent32**,
            sMVOpeningYamabukiFiles[0],
            &lMVOpeningYamabukiLegsShadowAnimJoint
        ),
        0.0F
    );
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);
}

// 0x80131E54
void mvOpeningYamabukiMakeMBall(void)
{
    GObj* gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);
    gcSetupCustomDObjs
    (
        gobj,
        lbRelocGetDataFromFile
        (
            DObjDesc*,
            sMVOpeningYamabukiFiles[0],
            &lMVOpeningYamabukiMBallDObjDesc
        ),
        NULL,
        nOMTransformTraRotRpyRSca,
        nOMTransformNull,
        nOMTransformNull
    );
    gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 27, GOBJ_DLLINKORDER_DEFAULT, -1);

    DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

    gcAddAnimJointAll
    (
        gobj,
        lbRelocGetDataFromFile
        (
            AObjEvent32**,
            sMVOpeningYamabukiFiles[0],
            &lMVOpeningYamabukiMBallAnimJoint
        ),
        0.0F
    );
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);
}

// 0x80131F2C
void mvOpeningYamabukiMakeMainCamera(void)
{
    GObj *camera_gobj = gcMakeCameraGObj
    (
        nOMObjCommonKindSceneCamera,
        NULL,
        16,
        GOBJ_LINKORDER_DEFAULT,
        func_80017EC0,
        80,
        CAMERA_MASK_DLLINK(27) |
        CAMERA_MASK_DLLINK(9),
        -1,
        TRUE,
        nOMObjProcessKindProc,
        NULL,
        1,
        FALSE
    );
    Camera *cam = CameraGetStruct(camera_gobj);

    syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;

    gcAddCameraCamAnimJoint
    (
        cam,
        lbRelocGetDataFromFile
        (
            AObjEvent32*,
            sMVOpeningYamabukiFiles[0],
            &lMVOpeningYamabukiCamAnimJoint
        ),
        0.0F
    );
    gcAddGObjProcess(camera_gobj, gcPlayCamAnim, nOMObjProcessKindProc, 1);
}

// 0x80132030
void mvOpeningYamabukiMakeWallpaperCamera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            nOMObjCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            90,
            CAMERA_MASK_DLLINK(28),
            -1,
            FALSE,
            nOMObjProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801320D0
void mvOpeningYamabukiInitTotalTimeTics(void)
{
    sMVOpeningYamabukiTotalTimeTics = 0;
}

// 0x801320DC
void mvOpeningYamabukiFuncRun(GObj *gobj)
{
    sMVOpeningYamabukiTotalTimeTics++;

    if (sMVOpeningYamabukiTotalTimeTics >= 10)
    {
        if (sMVOpeningYamabukiUnused0x8013249C != 0)
        {
            sMVOpeningYamabukiUnused0x8013249C--;
        }
        if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-15, 15) != FALSE) &&
            (scSubsysControllerGetPlayerStickInRangeUD(-15, 15) != FALSE)
        )
        {
            sMVOpeningYamabukiUnused0x8013249C = 0;
        }
        if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

            syTaskmanSetLoadScene();
        }
        if (sMVOpeningYamabukiTotalTimeTics == 160)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindOpeningJungle;

            syTaskmanSetLoadScene();
        }
    }
}

// 0x801321A8
void mvOpeningYamabukiFuncStart(void)
{
    s32 unused;
    lbRelocSetup rl_setup;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sMVOpeningYamabukiStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sMVOpeningYamabukiStatusBuffer);
    rl_setup.force_status_buffer = sMVOpeningYamabukiForceStatusBuffer;
    rl_setup.force_status_buffer_size = ARRAY_COUNT(sMVOpeningYamabukiForceStatusBuffer);

    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dMVOpeningYamabukiFileIDs,
        ARRAY_COUNT(dMVOpeningYamabukiFileIDs),
        sMVOpeningYamabukiFiles,
        syTaskmanMalloc
        (
            lbRelocGetAllocSize
            (
                dMVOpeningYamabukiFileIDs,
                ARRAY_COUNT(dMVOpeningYamabukiFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mvOpeningYamabukiFuncRun, 0, GOBJ_LINKORDER_DEFAULT);

    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2 | 0x1, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));

    efAllocInitParticleBank();
    mvOpeningYamabukiInitTotalTimeTics();
    efManagerInitEffects();
    ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 1);
    ftManagerSetupFilesAllKind(nFTKindPikachu);

    sMVOpeningYamabukiFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);

    mvOpeningYamabukiMakeMainCamera();
    mvOpeningYamabukiMakeWallpaperCamera();
    mvOpeningYamabukiMakeWallpaper();
    mvOpeningYamabukiMakeFighter();
    mvOpeningYamabukiMakeLegs();
    mvOpeningYamabukiMakeLegsShadow();
    mvOpeningYamabukiMakeMBall();

    scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    while (func_8000092C() < 2690)
    {
        continue;
    }
}

// 0x80132344
void mvOpeningYamabukiStartScene(void)
{
    dMVOpeningYamabukiDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    syDisplayInit(&dMVOpeningYamabukiDisplaySetup);

    dMVOpeningYamabukiTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl48_BSS_END);
    syTaskmanInit(&dMVOpeningYamabukiTaskmanSetup);
}
