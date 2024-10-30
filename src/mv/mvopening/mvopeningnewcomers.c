#include <ft/fighter.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/video.h>

extern u32 func_8000092C();
extern void syRdpSetViewport(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4);

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
LBFileNode dMVOpeningNewcomersStatusBuffer[48];

// 0x801328D8
LBFileNode dMVOpeningNewcomersForceStatusBuffer[7];

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
syVideoSetup dMVOpeningNewcomersDisplaySetup = SYVIDEO_DEFINE_DEFAULT();

// 0x80132694
syTaskmanSetup dMVOpeningNewcomersTaskmanSetup =
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
        sizeof(Gfx) * 1250,             // Display List Buffer 0 Size
        sizeof(Gfx) * 512,              // Display List Buffer 1 Size
        0,                              // Display List Buffer 2 Size
        0,                              // Display List Buffer 3 Size
        0x8000,                         // Graphics Heap Size
        2,                              // ???
        0xC000,                         // RDP Output Buffer Size
        mvOpeningNewcomersFuncLights,   // Pre-render function
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
sb32 mvOpeningNewcomersCheckLocked(s32 fkind)
{
    switch (fkind)
    {
    case nFTKindCaptain:
        return (sMVOpeningNewcomersCharacterMask & LBBACKUP_MASK_FIGHTER(nFTKindCaptain)) ? FALSE : TRUE;

    case nFTKindNess:
        return (sMVOpeningNewcomersCharacterMask & LBBACKUP_MASK_FIGHTER(nFTKindNess)) ? FALSE : TRUE;

    case nFTKindPurin:
        return (sMVOpeningNewcomersCharacterMask & LBBACKUP_MASK_FIGHTER(nFTKindPurin)) ? FALSE : TRUE;

    case nFTKindLuigi:
        return (sMVOpeningNewcomersCharacterMask & LBBACKUP_MASK_FIGHTER(nFTKindLuigi)) ? FALSE : TRUE;

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
        dobj = gcAddDObjForGObj(gobj, lbRelocGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersPurinHiddenDisplayList));
    }
    else dobj = gcAddDObjForGObj(gobj, lbRelocGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersPurinShowDisplayList));
    
    gcAddXObjForDObjFixed(dobj, nGCTransformTraRotRpyRSca, 0);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddDObjAnimJoint(dobj, lbRelocGetDataFromFile(AObjEvent32*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersPurinAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindProc, 1);
}

// 0x80131D28
void mvOpeningNewcomersMakeCaptain(void)
{
    GObj* gobj;
    DObj* dobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);

    if (mvOpeningNewcomersCheckLocked(nFTKindCaptain) != FALSE)
    {
        dobj = gcAddDObjForGObj(gobj, lbRelocGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersCaptainHiddenDisplayList));
    }
    else dobj = gcAddDObjForGObj(gobj, lbRelocGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersCaptainShowDisplayList));

    gcAddXObjForDObjFixed(dobj, nGCTransformTraRotRpyRSca, 0);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddDObjAnimJoint(dobj, lbRelocGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersCaptainAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindProc, 1);
}

// 0x80131E18
void mvOpeningNewcomersMakeLuigi(void)
{
    GObj* gobj;
    DObj* dobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);

    if (mvOpeningNewcomersCheckLocked(nFTKindLuigi) != FALSE)
    {
        dobj = gcAddDObjForGObj(gobj, lbRelocGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersLuigiHiddenDisplayList));
    }
    else dobj = gcAddDObjForGObj(gobj, lbRelocGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersLuigiShowDisplayList));
    
    gcAddXObjForDObjFixed(dobj, nGCTransformTraRotRpyRSca, 0);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddDObjAnimJoint(dobj, lbRelocGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersLuigiAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindProc, 1);
}

// 0x80131F08
void mvOpeningNewcomersMakeNess(void)
{
    GObj* gobj;
    DObj* dobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);

    if (mvOpeningNewcomersCheckLocked(nFTKindNess) != FALSE)
    {
        dobj = gcAddDObjForGObj(gobj, lbRelocGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersNessHiddenDisplayList));
    }
    else dobj = gcAddDObjForGObj(gobj, lbRelocGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersNessShowDisplayList));

    gcAddXObjForDObjFixed(dobj, nGCTransformTraRotRpyRSca, 0);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddDObjAnimJoint(dobj, lbRelocGetDataFromFile(AObjEvent32*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersNessAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindProc, 1);
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
void mvOpeningNewcomersHideFuncDisplay(GObj *gobj)
{
    if (sMVOpeningNewcomersOverlayAlpha < 0xFF)
    {
        sMVOpeningNewcomersOverlayAlpha += 0x28;

        if (sMVOpeningNewcomersOverlayAlpha > 0xFF)
        {
            sMVOpeningNewcomersOverlayAlpha = 0xFF;
        }
    }
    gDPPipeSync(gSYTaskmanDLHeads[1]++);
    gDPSetCycleType(gSYTaskmanDLHeads[1]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYTaskmanDLHeads[1]++, 0, 0, 0x00, 0x00, 0x00, sMVOpeningNewcomersOverlayAlpha);
    gDPSetCombineLERP(gSYTaskmanDLHeads[1]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gSYTaskmanDLHeads[1]++, 10, 10, 310, 230);
    gDPPipeSync(gSYTaskmanDLHeads[1]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
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
        mvOpeningNewcomersHideFuncDisplay,
        26,
        GOBJ_DLLINKORDER_DEFAULT,
        -1
    );
}

// 0x801321B8
void mvOpeningNewcomersMakeNewcomersCamera(void)
{
    s32 unused;
    CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            nGCCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            func_80017EC0,
            40,
            COBJ_MASK_DLLINK(27),
            -1,
            TRUE,
            nGCProcessKindProc,
            NULL, 
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cobj->vec.eye.x = 45.36104F;
    cobj->vec.eye.y = 19.91594F;
    cobj->vec.eye.z = 15494.226F;

    cobj->vec.at.x = -109.73612F;
    cobj->vec.at.y = 257.7266F;
    cobj->vec.at.z = -14.981689F;

    cobj->vec.up.x = 0.0F;
    cobj->vec.up.y = 1.0F;
    cobj->vec.up.z = 0.0F;

    cobj->projection.persp.fovy = 2.864789F;
    cobj->projection.persp.near = 128.0F;
    cobj->projection.persp.far = 16384.0F;
}

// 0x801322E8
void mvOpeningNewcomersMakeHideCamera(void)
{
    CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            nGCCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            20,
            COBJ_MASK_DLLINK(26),
            -1,
            FALSE,
            nGCProcessKindProc,
            NULL, 
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
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

            syTaskmanSetLoadScene();
        }
        if (sMVOpeningNewcomersTotalTimeTics == 30)
        {
            mvOpeningNewcomersMakeHide();
        }
        if (sMVOpeningNewcomersTotalTimeTics == 40)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

            syTaskmanSetLoadScene();
        }
    }
}

// 0x80132490
void mvOpeningNewcomersFuncStart(void)
{
    s32 unused;
    LBRelocSetup rl_setup;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = dMVOpeningNewcomersStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(dMVOpeningNewcomersStatusBuffer);
    rl_setup.force_status_buffer = dMVOpeningNewcomersForceStatusBuffer;
    rl_setup.force_status_buffer_size = ARRAY_COUNT(dMVOpeningNewcomersForceStatusBuffer);

    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dMVOpeningNewcomersFileIDs,
        ARRAY_COUNT(dMVOpeningNewcomersFileIDs),
        sMVOpeningNewcomersFiles,
        syTaskmanMalloc
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

    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, COBJ_FLAG_FILLCOLOR | COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0xFF, 0xFF, 0xFF, 0xFF));

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
    dMVOpeningNewcomersDisplaySetup.zbuffer = syVideoGetZBuffer(6400);
    syVideoInit(&dMVOpeningNewcomersDisplaySetup);

    dMVOpeningNewcomersTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl52_BSS_END);
    syTaskmanInit(&dMVOpeningNewcomersTaskmanSetup);
}
