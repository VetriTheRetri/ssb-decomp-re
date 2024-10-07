#include <ft/fighter.h>
#include <gr/ground.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <lb/library.h>

extern void syTaskmanSetLoadScene();
extern u32 func_8000092C();
extern void func_800A26B8();
extern void syRdpSetViewport(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4);


// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_00000042;
extern uintptr_t D_NF_00000048;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801329D0
s32 sMVOpeningClashPad0x801329D0[2];

// 0x801329D8
void *sMVOpeningClashFigatreeHeaps[8];

// 0x801329F8
s32 sMVOpeningClashPad0x801329F8[4];

// 0x80132A08
s32 sMVOpeningClashTotalTimeTics;

// 0x80132A0C
s32 sMVOpeningClashVoidAlpha;

// 0x80132A10
s32 sMVOpeningClashUnused0x80132A10;

// 0x80132A18
lbFileNode sMVOpeningClashStatusBuffer[100];

// 0x80132D38
lbFileNode sMVOpeningClashForceStatusBuffer[7];

// 0x80132D70
void *sMVOpeningClashFiles[2];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x801328D0
u32 dMVOpeningClashFileIDs[/* */] = { &D_NF_00000048, &D_NF_00000042 };

// 0x801328D8
Lights1 dMVOpeningClashLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x801328F0
Lights1 dMVOpeningClashLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x00);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mvOpeningClashFuncLights(Gfx **dls)
{
    gSPSetGeometryMode(dls[0]++, G_LIGHTING);
    ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58 - Unused?
void func_ovl49_80131B58()
{
    return;
}

// 0x80131B60
void mvOpeningClashMakeFighters(void)
{
    GObj* fighter_gobj;

    // 0x80132908
    s32 ft_kinds[/* */] =
    {
        nFTKindMario,
        nFTKindKirby,
        nFTKindLink,
        nFTKindYoshi,
        nFTKindFox,
        nFTKindDonkey,
        nFTKindSamus,
        nFTKindPikachu
    };

    s32 i;
    ftCreateDesc ft_desc = dFTManagerDefaultFighterDesc;

    for (i = 0; i < (ARRAY_COUNT(ft_kinds) + ARRAY_COUNT(sMVOpeningClashFigatreeHeaps)) / 2; i++)
    {
        ft_desc.ft_kind = ft_kinds[i];
        ft_desc.costume = ftParamGetCostumeCommonID(ft_kinds[i], 0);

        ft_desc.pos.x = 0.0F;
        ft_desc.pos.y = 0.0F;
        ft_desc.pos.z = 0.0F;

        ft_desc.figatree_heap = sMVOpeningClashFigatreeHeaps[i];
        fighter_gobj = ftManagerMakeFighter(&ft_desc);

        scSubsysFighterSetStatus(fighter_gobj, 0x1000B);

        DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0F;
        DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0F;
        DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0F;
    }
}

// 0x80131CCC
void mvOpeningClashVoidProcDisplay(GObj *gobj)
{
    if (sMVOpeningClashVoidAlpha < 0xFF)
    {
        sMVOpeningClashVoidAlpha += 0x1E;

        if (sMVOpeningClashVoidAlpha > 0xFF)
        {
            sMVOpeningClashVoidAlpha = 0xFF;
        }
    }
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, sMVOpeningClashVoidAlpha);
    gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 310, 230);
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80131E08
void mvOpeningClashMakeVoid(void)
{
    sMVOpeningClashVoidAlpha = 0;
    gcAddGObjDisplay
    (
        gcMakeGObjSPAfter
        (
            0,
            NULL,
            18,
            GOBJ_LINKORDER_DEFAULT
        ),
        mvOpeningClashVoidProcDisplay,
        26,
        GOBJ_DLLINKORDER_DEFAULT,
        -1
    );
}

// 0x80131E5C
void mvOpeningClashMakeWallpaper(void)
{
    // lower left quadrant
    GObj* gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead0, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddOMMtxForDObjFixed(gcAddDObjForGObj(gobj, lbRelocGetDataFromFile(void*, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLLDisplayList)), 0x1C, 0);
    gcAddMObjAll(gobj, lbRelocGetDataFromFile(MObjSub***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLLMObjSub));
    gcAddMatAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLLMatAnimJoint), 0.0F);

    DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

    gcAddAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32**, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLLAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);

    // lower right quadrant
    gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead0, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddOMMtxForDObjFixed(gcAddDObjForGObj(gobj, lbRelocGetDataFromFile(void*, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLRDisplayList)), 0x1C, 0);
    gcAddMObjAll(gobj, lbRelocGetDataFromFile(MObjSub***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLRMObjSub));
    gcAddMatAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLRMatAnimJoint), 0.0F);

    DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

    gcAddAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32**, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLRAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);

    // upper left quadrant
    gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead0, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddOMMtxForDObjFixed(gcAddDObjForGObj(gobj, lbRelocGetDataFromFile(void*, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperULDisplayList)), 0x1C, 0);
    gcAddMObjAll(gobj, lbRelocGetDataFromFile(MObjSub***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperULMObjSub));
    gcAddMatAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperULMatAnimJoint), 0.0F);

    DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

    gcAddAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32**, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperULAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);

    // upper right quadrant
    gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead0, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddOMMtxForDObjFixed(gcAddDObjForGObj(gobj, lbRelocGetDataFromFile(void*, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperURDisplayList)), 0x1C, 0);
    gcAddMObjAll(gobj, lbRelocGetDataFromFile(MObjSub***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperURMObjSub));
    gcAddMatAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperURMatAnimJoint), 0.0F);

    DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

    gcAddAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32**, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperURAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);
}

// 0x80132204
void mvOpeningClashMakeFightersCamera(void)
{
    GObj *camera_gobj = gcMakeCameraGObj
    (
        nOMObjCommonKindSceneCamera,
        NULL,
        16,
        GOBJ_LINKORDER_DEFAULT,
        func_80017EC0,
        60,
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

    cam->flags |= 1;

    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;

    gcAddCameraCamAnimJoint(cam, lbRelocGetDataFromFile(AObjEvent32*, sMVOpeningClashFiles[0], &lMVOpeningClashFightersCamAnimJoint), 0.0F);
    gcAddGObjProcess(camera_gobj, gcPlayCamAnim, nOMObjProcessKindProc, 1);
}

// 0x80132314
void mvOpeningClashMakeVoidCamera(void)
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
            40,
            CAMERA_MASK_DLLINK(26),
            -1,
            FALSE,
            nOMObjProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    
    cam->flags |= 1;
}

// 0x801323C8
void mvOpeningClashWallpaperProcDisplay(GObj *gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    func_80017DBC(gobj);
    
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8013246C
void mvOpeningClashMakeWallpaperCamera(void)
{
    GObj *camera_gobj = gcMakeCameraGObj
    (
        nOMObjCommonKindSceneCamera,
        NULL,
        16,
        GOBJ_LINKORDER_DEFAULT,
        mvOpeningClashWallpaperProcDisplay,
        90,
        CAMERA_MASK_DLLINK(29),
        -1,
        TRUE,
        nOMObjProcessKindProc,
        NULL,
        1,
        FALSE
    );
    Camera *cam = CameraGetStruct(camera_gobj);

    syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    gcAddCameraCamAnimJoint(cam, lbRelocGetDataFromFile(AObjEvent32*, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperCamAnimJoint), 0.0F);

    gcAddGObjProcess(camera_gobj, gcPlayCamAnim, nOMObjProcessKindProc, 1);
}

// 0x80132550
void mvOpeningClashInitTotalTimeTics(void)
{
    sMVOpeningClashTotalTimeTics = 0;
}

// 0x8013255C
void mvOpeningClashFuncRun(GObj *gobj)
{
    sMVOpeningClashTotalTimeTics++;

    if (sMVOpeningClashTotalTimeTics >= 10)
    {
        if (sMVOpeningClashUnused0x80132A10 != 0)
        {
            sMVOpeningClashUnused0x80132A10--;
        }
        if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-15, 15) != FALSE) &&
            (scSubsysControllerGetPlayerStickInRangeUD(-15, 15) != FALSE)
        )
        {
            sMVOpeningClashUnused0x80132A10 = 0;
        }
        if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;
            
            syTaskmanSetLoadScene();
        }

        if (sMVOpeningClashTotalTimeTics == 144)
        {
            mvOpeningClashMakeVoid();
        }
        if (sMVOpeningClashTotalTimeTics == 160)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindOpeningNewcomers;

            syTaskmanSetLoadScene();
        }
        if
        (
            (sMVOpeningClashTotalTimeTics == 15) ||
            (sMVOpeningClashTotalTimeTics == 75) ||
            (sMVOpeningClashTotalTimeTics == 90) ||
            (sMVOpeningClashTotalTimeTics == 105)
        )
        {
            func_800269C0_275C0(nSYAudioFGMOpeningClash);
        }
    }
}

// 0x8013267C
void mvOpeningClashFuncStart(void)
{
    s32 i;
    lbRelocSetup rl_setup;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sMVOpeningClashStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sMVOpeningClashStatusBuffer);
    rl_setup.force_status_buffer = sMVOpeningClashForceStatusBuffer;
    rl_setup.force_status_buffer_size = ARRAY_COUNT(sMVOpeningClashForceStatusBuffer);

    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dMVOpeningClashFileIDs,
        ARRAY_COUNT(dMVOpeningClashFileIDs),
        sMVOpeningClashFiles,
        syTaskmanMalloc
        (
            lbRelocGetAllocSize
            (
                dMVOpeningClashFileIDs,
                ARRAY_COUNT(dMVOpeningClashFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mvOpeningClashFuncRun, 0, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2 | 0x1, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));

    efAllocInitParticleBank();
    mvOpeningClashInitTotalTimeTics();
    efManagerInitEffects();

    // Not quite correct to use the length of sMVOpeningClashFigatreeHeaps here, but also probably not worth a #define
    ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, ARRAY_COUNT(sMVOpeningClashFigatreeHeaps));

    ftManagerSetupFilesAllKind(nFTKindMario);
    ftManagerSetupFilesAllKind(nFTKindFox);
    ftManagerSetupFilesAllKind(nFTKindDonkey);
    ftManagerSetupFilesAllKind(nFTKindSamus);
    ftManagerSetupFilesAllKind(nFTKindLink);
    ftManagerSetupFilesAllKind(nFTKindYoshi);
    ftManagerSetupFilesAllKind(nFTKindKirby);
    ftManagerSetupFilesAllKind(nFTKindPikachu);

    for (i = 0; i < ARRAY_COUNT(sMVOpeningClashFigatreeHeaps); i++)
    {
        sMVOpeningClashFigatreeHeaps[i] = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
    }
    mvOpeningClashMakeFightersCamera();
    mvOpeningClashMakeVoidCamera();
    mvOpeningClashMakeWallpaperCamera();
    mvOpeningClashMakeFighters();
    mvOpeningClashMakeWallpaper();

    scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    while (func_8000092C() < 3975)
    {
        continue;
    }
}

// 0x80132928
syDisplaySetup dMVOpeningClashDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x80132944
syTaskmanSetup dMVOpeningClashTaskmanSetup =
{
    // Task Logic Buffer Setup
    {
        0,                              // ???
        func_8000A5E4,                  // Update function
        func_8000A340,                  // Frame draw function
        &ovl49_BSS_END,                 // Allocatable memory pool start
        0,                              // Allocatable memory pool size
        1,                              // ???
        2,                              // Number of contexts?
        sizeof(Gfx) * 1250,             // Display List Buffer 0 Size
        sizeof(Gfx) * 512,              // Display List Buffer 1 Size
        0,                              // Display List Buffer 2 Size
        0,                              // Display List Buffer 3 Size
        0x8000,                         // Graphics Heap Size
        2,                              // ???
        0xC000,                         // RDP Output Buffer Size
        mvOpeningClashFuncLights,       // Pre-render function
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
    
    mvOpeningClashFuncStart             // Task start function
};

// 0x80132874
void mvOpeningClashStartScene(void)
{
    dMVOpeningClashDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    syDisplayInit(&dMVOpeningClashDisplaySetup);

    dMVOpeningClashTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl49_BSS_END);
    syTaskmanInit(&dMVOpeningClashTaskmanSetup);
}
