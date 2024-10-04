#include <ft/fighter.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/system_00.h>

extern u32 func_8000092C();
extern void func_80007080(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_0000003D;
extern uintptr_t D_NF_0000003E;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80132740
s32 sMVOpeningNewcomersPad0x80132740[2];

// 0x80132748
s32 sMVOpeningNewcomersTotalTimeTics;

// 0x8013274C
s32 sMVOpeningNewcomersOverlayAlpha; 

// 0x80132750
u16 sMVOpeningNewcomersCharacterMask; 

// 0x80132754
s32 sMVOpeningNewcomersUnused0x80132754;

// 0x80132758
lbFileNode dMVOpeningNewcomersStatusBuffer[48];

// 0x801328D8
lbFileNode dMVOpeningNewcomersForceStatusBuffer[7];

// 0x80132910
void *sMVOpeningNewcomersFiles[2];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80132640
u32 dMVOpeningNewcomersFileIDs[/* */] = { &D_NF_0000003D, &D_NF_0000003E };

// 0x80132648
Lights1 dMVOpeningNewcomersLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x8013265C
u32 dMVOpeningUnused0x8013265C[/* */] =
{
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x0000EC00,
    0x00000000
};

// 0x80132678
syDisplaySetup dMVOpeningNewcomersDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x80132694
syTasklogSetup dMVOpeningNewcomersTasklogSetup =
{
    // Task Logic Buffer Setup
    {
        0,                              // ???
        func_8000A5E4,                  // Update function
        func_8000A340,                  // Frame draw function
        &ovl52_BSS_END,                 // Allocatable memory pool start
        0,                              // Allocatable memory pool size
        1,                              // ???
        2,                              // Number of contexts?
        0x2710,                         // ???
        0x1000,                         // ???
        0,                              // ???
        0,                              // ???
        0x8000,                         // ???
        2,                              // ???
        0xC000,                         // ???
        mvOpeningNewcomersFuncLights,   // Pre-render function
        update_contdata,                // Controller I/O function
    },

    0,                                  // Number of GObjThreads
    0x600,                              // Thread stack size
    0,                                  // Number of thread stacks
    0,                                  // ???
    0,                                  // Number of GObjProcesses
    0,                                  // Number of GObjs
    sizeof(GObj),                       // GObj size
    0,                                  // Number of Object Manager Matrices
    dLBCommonProcMatrixList,            // Matrix function list
    NULL,                               // Function for ejecting DObjDynamicStore?
    0,                                  // Number of AObjs
    0,                                  // Number of MObjs
    0,                                  // Number of DObjs
    sizeof(DObj),                       // DObj size
    0,                                  // Number of SObjs
    sizeof(SObj),                       // SObj size
    0,                                  // Number of Cameras
    sizeof(Camera),                     // Camera size
    
    mvOpeningNewcomersFuncStart         // Task start function
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mvOpeningNewcomersFuncLights(Gfx **dls)
{
    gSPSetGeometryMode(dls[0]++, G_LIGHTING);
    ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
sb32 mvOpeningNewcomersCheckLocked(s32 ft_kind)
{
    switch (ft_kind)
    {
    case nFTKindCaptain:
        return (sMVOpeningNewcomersCharacterMask & LBBACKUP_FIGHTER_MASK_DEFINE(nFTKindCaptain)) ? FALSE : TRUE;

    case nFTKindNess:
        return (sMVOpeningNewcomersCharacterMask & LBBACKUP_FIGHTER_MASK_DEFINE(nFTKindNess)) ? FALSE : TRUE;

    case nFTKindPurin:
        return (sMVOpeningNewcomersCharacterMask & LBBACKUP_FIGHTER_MASK_DEFINE(nFTKindPurin)) ? FALSE : TRUE;

    case nFTKindLuigi:
        return (sMVOpeningNewcomersCharacterMask & LBBACKUP_FIGHTER_MASK_DEFINE(nFTKindLuigi)) ? FALSE : TRUE;

    default:
        return FALSE;
    }
}

// 0x80131C28 - Unused?
void func_ovl52_80131C28()
{
    return;
}

// 0x80131C30 - Unused?
void func_ovl52_80131C30()
{
    return;
}

// 0x80131C38
void mvOpeningNewcomersMakePurin(void)
{
    GObj* gobj;
    DObj* dobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);

    if (mvOpeningNewcomersCheckLocked(nFTKindPurin) != FALSE)
    {
        dobj = gcAddDObjForGObj(gobj, lbGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersPurinHiddenDisplayList));
    }
    else dobj = gcAddDObjForGObj(gobj, lbGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersPurinShowDisplayList));
    
    gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyRSca, 0);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddDObjAnimJoint(dobj, lbGetDataFromFile(AObjEvent32*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersPurinAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);
}

// 0x80131D28
void mvOpeningNewcomersMakeCaptain(void)
{
    GObj* gobj;
    DObj* dobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);

    if (mvOpeningNewcomersCheckLocked(nFTKindCaptain) != FALSE)
    {
        dobj = gcAddDObjForGObj(gobj, lbGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersCaptainHiddenDisplayList));
    }
    else dobj = gcAddDObjForGObj(gobj, lbGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersCaptainShowDisplayList));

    gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyRSca, 0);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddDObjAnimJoint(dobj, lbGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersCaptainAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);
}

// 0x80131E18
void mvOpeningNewcomersMakeLuigi(void)
{
    GObj* gobj;
    DObj* dobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);

    if (mvOpeningNewcomersCheckLocked(nFTKindLuigi) != FALSE)
    {
        dobj = gcAddDObjForGObj(gobj, lbGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersLuigiHiddenDisplayList));
    }
    else dobj = gcAddDObjForGObj(gobj, lbGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersLuigiShowDisplayList));
    
    gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyRSca, 0);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddDObjAnimJoint(dobj, lbGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersLuigiAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);
}

// 0x80131F08
void mvOpeningNewcomersMakeNess(void)
{
    GObj* gobj;
    DObj* dobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);

    if (mvOpeningNewcomersCheckLocked(nFTKindNess) != FALSE)
    {
        dobj = gcAddDObjForGObj(gobj, lbGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersNessHiddenDisplayList));
    }
    else dobj = gcAddDObjForGObj(gobj, lbGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersNessShowDisplayList));

    gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyRSca, 0);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddDObjAnimJoint(dobj, lbGetDataFromFile(AObjEvent32*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersNessAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);
}

// 0x80131FF8
void mvOpeningNewcomersMakeAll(void)
{
    mvOpeningNewcomersMakePurin();
    mvOpeningNewcomersMakeCaptain();
    mvOpeningNewcomersMakeLuigi();
    mvOpeningNewcomersMakeNess();
}

// 0x80132030
void mvOpeningNewcomersHideProcDisplay(GObj *gobj)
{
    if (sMVOpeningNewcomersOverlayAlpha < 0xFF)
    {
        sMVOpeningNewcomersOverlayAlpha += 0x28;

        if (sMVOpeningNewcomersOverlayAlpha > 0xFF)
        {
            sMVOpeningNewcomersOverlayAlpha = 0xFF;
        }
    }
    gDPPipeSync(gSYTasklogDLHeads[1]++);
    gDPSetCycleType(gSYTasklogDLHeads[1]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYTasklogDLHeads[1]++, 0, 0, 0x00, 0x00, 0x00, sMVOpeningNewcomersOverlayAlpha);
    gDPSetCombineLERP(gSYTasklogDLHeads[1]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gSYTasklogDLHeads[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gSYTasklogDLHeads[1]++, 10, 10, 310, 230);
    gDPPipeSync(gSYTasklogDLHeads[1]++);
    gDPSetRenderMode(gSYTasklogDLHeads[1]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132164
void mvOpeningNewcomersMakeHide(void)
{
    sMVOpeningNewcomersOverlayAlpha = 0x00;
    gcAddGObjDisplay
    (
        gcMakeGObjSPAfter
        (
            0,
            NULL,
            18,
            GOBJ_LINKORDER_DEFAULT
        ),
        mvOpeningNewcomersHideProcDisplay,
        26,
        GOBJ_DLLINKORDER_DEFAULT,
        -1
    );
}

// 0x801321B8
void mvOpeningNewcomersMakeNewcomersCamera(void)
{
    s32 unused;
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            nOMObjCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            func_80017EC0,
            40,
            CAMERA_MASK_DLLINK(27),
            -1,
            TRUE,
            nOMObjProcessKindProc,
            NULL, 
            1,
            FALSE
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->vec.eye.x = 45.36104F;
    cam->vec.eye.y = 19.91594F;
    cam->vec.eye.z = 15494.226F;

    cam->vec.at.x = -109.73612F;
    cam->vec.at.y = 257.7266F;
    cam->vec.at.z = -14.981689F;

    cam->vec.up.x = 0.0F;
    cam->vec.up.y = 1.0F;
    cam->vec.up.z = 0.0F;

    cam->projection.persp.fovy = 2.864789F;
    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;
}

// 0x801322E8
void mvOpeningNewcomersMakeHideCamera(void)
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
            20,
            CAMERA_MASK_DLLINK(26),
            -1,
            FALSE,
            nOMObjProcessKindProc,
            NULL, 
            1,
            FALSE
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132388
void mvOpeningNewcomersInitVars(void)
{
    sMVOpeningNewcomersTotalTimeTics = 0;
    sMVOpeningNewcomersCharacterMask = gSaveData.fighter_mask;
}

// 0x801323A4
void mvOpeningNewcomersFuncRun(GObj *gobj)
{
    s32 unused;

    sMVOpeningNewcomersTotalTimeTics++;

    if (sMVOpeningNewcomersTotalTimeTics >= 10)
    {
        if (sMVOpeningNewcomersUnused0x80132754 != 0)
        {
            sMVOpeningNewcomersUnused0x80132754--;
        }
        if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-15, 15) != FALSE) &&
            (scSubsysControllerGetPlayerStickInRangeUD(-15, 15) != FALSE)
        )
        {
            sMVOpeningNewcomersUnused0x80132754 = 0;
        }
        if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

            syTasklogSetLoadScene();
        }
        if (sMVOpeningNewcomersTotalTimeTics == 30)
        {
            mvOpeningNewcomersMakeHide();
        }
        if (sMVOpeningNewcomersTotalTimeTics == 40)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

            syTasklogSetLoadScene();
        }
    }
}

// 0x80132490
void mvOpeningNewcomersFuncStart(void)
{
    s32 unused;
    lbRelocSetup rldmSetup;

    rldmSetup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rldmSetup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
    rldmSetup.file_heap = NULL;
    rldmSetup.file_heap_size = 0;
    rldmSetup.status_buffer = dMVOpeningNewcomersStatusBuffer;
    rldmSetup.status_buffer_size = ARRAY_COUNT(dMVOpeningNewcomersStatusBuffer);
    rldmSetup.force_status_buffer = dMVOpeningNewcomersForceStatusBuffer;
    rldmSetup.force_status_buffer_size = ARRAY_COUNT(dMVOpeningNewcomersForceStatusBuffer);

    lbRelocInitSetup(&rldmSetup);
    lbRelocLoadFilesExtern
    (
        dMVOpeningNewcomersFileIDs,
        ARRAY_COUNT(dMVOpeningNewcomersFileIDs),
        sMVOpeningNewcomersFiles,
        syTasklogMalloc
        (
            lbRelocGetAllocSize
            (
                dMVOpeningNewcomersFileIDs,
                ARRAY_COUNT(dMVOpeningNewcomersFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mvOpeningNewcomersFuncRun, 0, GOBJ_LINKORDER_DEFAULT);

    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2 | 0x1, GPACK_RGBA8888(0xFF, 0xFF, 0xFF, 0xFF));

    mvOpeningNewcomersInitVars();
    mvOpeningNewcomersMakeNewcomersCamera();
    mvOpeningNewcomersMakeHideCamera();
    mvOpeningNewcomersMakeAll();

    scSubsysFighterSetLightParams(0.0F, 0.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    func_800269C0_275C0(nSYAudioFGMOpeningNewcomersClash);
    func_800269C0_275C0(nSYAudioVoiceAnnounceTitleWait);

    while (func_8000092C() < 4155)
    {
        continue;
    }
}

// 0x801325E0
void mvOpeningNewcomersStartScene(void)
{
    dMVOpeningNewcomersDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    syDisplayInit(&dMVOpeningNewcomersDisplaySetup);

    dMVOpeningNewcomersTasklogSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl52_BSS_END);
    syTasklogInit(&dMVOpeningNewcomersTasklogSetup);
}
