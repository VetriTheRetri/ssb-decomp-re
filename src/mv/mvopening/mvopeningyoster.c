#include <ft/fighter.h>
#include <gr/ground.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/video.h>

extern void syTaskmanSetLoadScene();
extern u32 func_8000092C();
extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_00000043;
extern uintptr_t D_NF_0000005D;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80132420
s32 sMVOpeningYosterPad0x80132420[2];

// 0x80132428
void *sMVOpeningYosterFigatreeHeaps[4];

// 0x80132438
s32 sMVOpeningYosterTotalTimeTics;

// 0x8013243C
s32 sMVOpeningYosterUnused0x8013243C;

// 0x80132440
LBFileNode sMVOpeningYosterStatusBuffer[48];

// 0x801325C0
LBFileNode sMVOpeningYosterForceStatusBuffer[7];

// 0x801325F8
void *sMVOpeningYosterFiles[2];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80132330
u32 dMVOpeningYosterFileIDs[/* */] = { &D_NF_00000043, &D_NF_0000005D };

// 0x80132338
Lights1 dMVOpeningYosterLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x80132350
Lights1 dMVOpeningYosterLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x00);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mvOpeningYosterFuncLights(Gfx **dls)
{
    gSPSetGeometryMode(dls[0]++, G_LIGHTING);
    ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
void mvOpeningYosterMakeNest(void)
{
    GObj *nest_gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
    gcSetupCommonDObjs
    (
        nest_gobj,
        lbRelocGetFileData
        (
            DObjDesc*,
            sMVOpeningYosterFiles[0],
            &lMVOpeningYosterNestDObjDesc
        ),
        NULL
    );
    gcAddGObjDisplay(nest_gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);

    DObjGetStruct(nest_gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(nest_gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(nest_gobj)->translate.vec.f.z = 0.0F;
}

// 0x80131BEC
void mvOpeningYosterMakeFighters(void)
{
    GObj *fighter_gobj;

    // 0x80132368
    s32 status_ids[/* */] =
    {
        0x1000F,
        0x10010,
        0x10011,
        0x10012
    };

    s32 i;
    FTCreateDesc ft_desc = dFTManagerDefaultFighterDesc;

    for (i = 0; i < (ARRAY_COUNT(sMVOpeningYosterFigatreeHeaps) + ARRAY_COUNT(status_ids)) / 2; i++)
    {
        ft_desc.fkind = nFTKindYoshi;
        ft_desc.costume = ftParamGetCostumeCommonID(nFTKindYoshi, i);
        ft_desc.pos.x = 0.0F;
        ft_desc.pos.y = 0.0F;
        ft_desc.pos.z = 0.0F;
        ft_desc.figatree_heap = sMVOpeningYosterFigatreeHeaps[i];
        fighter_gobj = ftManagerMakeFighter(&ft_desc);

        scSubsysFighterSetStatus(fighter_gobj, status_ids[i]);

        DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0F;
        DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0F;
        DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0F;
    }
}

// 0x80131D38
void mvOpeningYosterMakeWallpaper(void)
{
    GObj *wallpaper_gobj;
    SObj *wallpaper_sobj;

    wallpaper_gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_PRIORITY_DEFAULT);
    gcAddGObjDisplay(wallpaper_gobj, lbCommonDrawSObjAttr, 28, GOBJ_PRIORITY_DEFAULT, ~0);

    wallpaper_sobj = lbCommonMakeSObjForGObj
    (
        wallpaper_gobj,
        lbRelocGetFileData
        (
            Sprite*,
            sMVOpeningYosterFiles[1],
            &lGRYosterWallpaperSprite
        )
    );
    wallpaper_sobj->pos.x = 10.0F;
    wallpaper_sobj->pos.y = 10.0F;
}

// 0x80131DB8
void mvOpeningYosterMakeGround(void)
{
    GObj *gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
    gcSetupCommonDObjs
    (
        gobj,
        lbRelocGetFileData
        (
            DObjDesc*,
            sMVOpeningYosterFiles[0],
            &lMVOpeningYosterGroundDObjDesc
        ),
        NULL
    );
    gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);

    DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

    gcAddAnimJointAll
    (
        gobj,
        lbRelocGetFileData
        (
            AObjEvent32**,
            sMVOpeningYosterFiles[0],
            &lMVOpeningYosterGroundAnimJoint
        ),
        0.0F
    );
    gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
}

// 0x80131E84
void mvOpeningYosterMakeMainCamera(void)
{
    GObj *camera_gobj = gcMakeCameraGObj
    (
        nGCCommonKindSceneCamera,
        NULL,
        16,
        GOBJ_PRIORITY_DEFAULT,
        func_80017EC0,
        80, 
        COBJ_MASK_DLLINK(18) | COBJ_MASK_DLLINK(15) |
        COBJ_MASK_DLLINK(10) | COBJ_MASK_DLLINK(9)  |
        COBJ_MASK_DLLINK(6),
        -1,
        TRUE,
        nGCProcessKindFunc,
        NULL,
        1,
        FALSE
    );
    CObj *cobj = CObjGetStruct(camera_gobj);

    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cobj->projection.persp.near = 128.0F;
    cobj->projection.persp.far = 16384.0F;

    gcAddCameraCamAnimJoint
    (
        cobj, 
        lbRelocGetFileData
        (
            AObjEvent32*,
            sMVOpeningYosterFiles[0],
            &lMVOpeningYosterCamAnimJoint
        ),
        0.0F
    );
    gcAddGObjProcess(camera_gobj, gcPlayCamAnim, nGCProcessKindFunc, 1);
    gcPlayCamAnim(camera_gobj);
}

// 0x80131F90
void mvOpeningYosterMakeWallpaperCamera(void)
{
    CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            nGCCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_PRIORITY_DEFAULT,
            lbCommonDrawSprite,
            90,
            COBJ_MASK_DLLINK(28),
            -1,
            FALSE,
            nGCProcessKindFunc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132030
void mvOpeningYosterInitTotalTimeTics(void)
{
    sMVOpeningYosterTotalTimeTics = 0;
}

// 0x8013203C
void mvOpeningYosterMainProc(GObj *gobj)
{
    sMVOpeningYosterTotalTimeTics++;

    if (sMVOpeningYosterTotalTimeTics >= 10)
    {
        if (sMVOpeningYosterUnused0x8013243C != 0)
        {
            sMVOpeningYosterUnused0x8013243C--;
        }
        if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-15, 15) != FALSE) &&
            (scSubsysControllerGetPlayerStickInRangeUD(-15, 15) != FALSE)
        )
        {
            sMVOpeningYosterUnused0x8013243C = 0;
        }
        if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
        {
            gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
            gSCManagerSceneData.scene_curr = nSCKindTitle;

            syTaskmanSetLoadScene();
        }
        if (sMVOpeningYosterTotalTimeTics == 160)
        {
            gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
            gSCManagerSceneData.scene_curr = nSCKindOpeningSector;

            syTaskmanSetLoadScene();
        }
    }
}

// 0x80132108
void mvOpeningYosterFuncStart(void)
{
    s32 i;
    LBRelocSetup rl_setup;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sMVOpeningYosterStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sMVOpeningYosterStatusBuffer);
    rl_setup.force_status_buffer = sMVOpeningYosterForceStatusBuffer;
    rl_setup.force_status_buffer_size = ARRAY_COUNT(sMVOpeningYosterForceStatusBuffer);

    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dMVOpeningYosterFileIDs,
        ARRAY_COUNT(dMVOpeningYosterFileIDs),
        sMVOpeningYosterFiles,
        syTaskmanMalloc
        (
            lbRelocGetAllocSize
            (
                dMVOpeningYosterFileIDs,
                ARRAY_COUNT(dMVOpeningYosterFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mvOpeningYosterMainProc, 0, GOBJ_PRIORITY_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));

    efParticleInitAll();
    mvOpeningYosterInitTotalTimeTics();
    efManagerInitEffects();
    ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 4);
    ftManagerSetupFilesAllKind(nFTKindYoshi);

    for (i = 0; i < ARRAY_COUNT(sMVOpeningYosterFigatreeHeaps); i++)
    {
        sMVOpeningYosterFigatreeHeaps[i] = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
    }
    mvOpeningYosterMakeMainCamera();
    mvOpeningYosterMakeWallpaperCamera();
    mvOpeningYosterMakeWallpaper();
    mvOpeningYosterMakeNest();
    mvOpeningYosterMakeGround();
    mvOpeningYosterMakeFighters();
    scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    while (func_8000092C() < 3230)
    {
        continue;
    }
}

// 0x80132378
SYVideoSetup dMVOpeningYosterVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 0x80132394
SYTaskmanSetup dMVOpeningYosterTaskmanSetup =
{
    // Task Manager Buffer Setup
    {
        0,                              // ???
        gcRunAll,                       // Update function
        gcDrawAll,                  // Frame draw function
        &ovl45_BSS_END,                 // Allocatable memory pool start
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
        mvOpeningYosterFuncLights,      // Pre-render function
        update_contdata,                // Controller I/O function
    },

    8,                                  // Number of GObjThreads
    sizeof(u64) * 192,                  // Thread stack size
    8,                                  // Number of thread stacks
    0,                                  // ???
    128,                                // Number of GObjProcesses
    128,                                // Number of GObjs
    sizeof(GObj),                       // GObj size
    512,                                // Number of XObjs
    dLBCommonFuncMatrixList,            // Matrix function list
    NULL,                               // Function for ejecting DObjVec?
    512,                                // Number of AObjs
    160,                                // Number of MObjs
    512,                                // Number of DObjs
    sizeof(DObj),                       // DObj size
    128,                                // Number of SObjs
    sizeof(SObj),                       // SObj size
    16,                                 // Number of Cameras
    sizeof(CObj),                       // Camera size
    
    mvOpeningYosterFuncStart            // Task start function
};

// 0x801322CC
void mvOpeningYosterStartScene(void)
{
    dMVOpeningYosterVideoSetup.zbuffer = syVideoGetZBuffer(6400);
    syVideoInit(&dMVOpeningYosterVideoSetup);

    dMVOpeningYosterTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl45_BSS_END);
    syTaskmanRun(&dMVOpeningYosterTaskmanSetup);
}
