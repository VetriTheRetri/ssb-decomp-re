#include <ft/fighter.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/display.h>
#include <lb/library.h>

extern void syRdpSetViewport(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80132BC0
s32 sMVEndingPad0x80132BC0[2];

// 0x80132BC8
void *sMVEndingFigatreeHeap;

// 0x80132BCC
s32 sMVEndingTotalTimeTics;

// 0x80132BD0
GObj *sMVEndingRoomCameraGObj;

// 0x80132BD4
GObj *sMVEndingFighterCameraGObj;

// 0x80132BD8
s32 sMVEndingPad0x80132BD8;

// 0x80132BDC
GObj *sMVEndingFighterGObj;

// 0x80132BE0
GObj *sMVEndingRoomBackgroundGObj;

// 0x80132BE4
GObj *sMVEndingRoomDeskGObj;

// 0x80132BE8
GObj *sMVEndingRoomBooksGObj;

// 0x80132BEC
GObj *sMVEndingRoomPencilsGObj;

// 0x80132BF0
GObj *sMVEndingRoomLampGObj;

// 0x80132BF4
GObj *sMVEndingRoomTissuesGObj;

// 0x80132BF8
s32 sMVEndingRoomFadeInAlpha;

// 0x80132BFC
f32 sMVEndingRoomLightAlpha;

// 0x80132C00
GObj *sMVEndingRoomFadeInGObj;

// 0x80132C04
GObj *sMVEndingRoomLightGObj;

// 0x80132C08
ftDemoDesc sMVEndingFighterDemoDesc;

// 0x80132C14
s32 sMVEndingUnused0x80132C14;

// 0x80132C18
lbFileNode sMVEndingStatusBuffer[100];

// 0x80132F38
lbFileNode sMVEndingForceStatusBuffer[7];

// 0x80132F70
void *sMVEndingFiles[2];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80132AD0
u32 dMVEndingFileIDs[/* */] = { &D_NF_00000034, &D_NF_0000004C };

// 0x80132AD8
Lights1 dMVEndingLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x80132AF0
Lights1 dMVEndingLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x00);

// 0x80132B08
syDisplaySetup dMVEndingDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x80132B24
syTaskmanSetup dMVEndingTaskmanSetup =
{
    // Task Logic Buffer Setup
    {
        0,                          // ???
        func_8000A5E4,              // Update function
        func_8000A340,              // Frame draw function
        &ovl54_BSS_END,             // Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        sizeof(Gfx) * 2500,         // Display List Buffer 0 Size
        sizeof(Gfx) * 512,          // Display List Buffer 1 Size
        0,                          // Display List Buffer 2 Size
        0,                          // Display List Buffer 3 Size
        0x8000,                     // Graphics Heap Size
        2,                          // ???
        0xC000,                     // RDP Output Buffer Size
        mvEndingFuncLights,         // Pre-render function
        update_contdata,            // Controller I/O function
    },

    0,                              // Number of GObjThreads
    sizeof(u64) * 192,              // Thread stack size
    0,                              // Number of thread stacks
    0,                              // ???
    0,                              // Number of GObjProcesses
    0,                              // Number of GObjs
    sizeof(GObj),                   // GObj size
    0,                              // Number of Object Manager Matrices
    dLBCommonFuncMatrixList,        // Matrix function list
    NULL,                           // Function for ejecting DObjDynamicStore?
    0,                              // Number of AObjs
    0,                              // Number of MObjs
    0,                              // Number of DObjs
    sizeof(DObj),                   // DObj size
    0,                              // Number of SObjs
    sizeof(SObj),                   // SObj size
    0,                              // Number of Cameras
    sizeof(Camera),                 // Camera size
    
    mvEndingFuncStart               // Task start function
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mvEndingFuncLights(Gfx **dls)
{
    gSPSetGeometryMode(dls[0]++, G_LIGHTING);

    ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
void mvEndingMakeRoomBackground(void)
{
    GObj *gobj;

    sMVEndingRoomBackgroundGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

    gcSetupCommonDObjs(gobj, lbRelocGetDataFromFile(DObjDesc*, sMVEndingFiles[0], &lMVCommonRoomBackgroundDObjDesc), NULL);
    gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddMObjAll(gobj, lbRelocGetDataFromFile(MObjSub***, sMVEndingFiles[0], &lMVCommonRoomBackgroundMObjSub));
    gcAddMatAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32***, sMVEndingFiles[0], &lMVCommonRoomBackgroundMatAnimJoint), 0.0F);
    gcPlayAnimAll(gobj);
}

// 0x80131C1C
void mvEndingMakeRoomDesk(void)
{
    GObj *gobj;

    sMVEndingRoomDeskGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

    gcSetupCommonDObjs(gobj, lbRelocGetDataFromFile(DObjDesc*, sMVEndingFiles[0], &lMVCommonRoomDeskDObjDesc), NULL);
    gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x80131C94
void mvEndingMakeRoomBooks(void)
{
    GObj *gobj;

    sMVEndingRoomBooksGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

    gcSetupCommonDObjs(gobj, lbRelocGetDataFromFile(DObjDesc*, sMVEndingFiles[0], &lMVCommonRoomBooksDObjDesc), NULL);
    gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32**, sMVEndingFiles[0], &lMVCommonRoomBooksAnimJoint), 300.0F);
    gcPlayAnimAll(gobj);
}

// 0x80131D34
void mvEndingMakeRoomPencils(void)
{
    GObj *gobj;

    sMVEndingRoomPencilsGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

    gcSetupCommonDObjs(gobj, lbRelocGetDataFromFile(DObjDesc*, sMVEndingFiles[0], &lMVCommonRoomPencilsDObjDesc), NULL);
    gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32**, sMVEndingFiles[0], &lMVCommonRoomPencilsAnimJoint), 300.0F);
    gcPlayAnimAll(gobj);
}

// 0x80131DD4
void mvEndingMakeRoomLamp(void)
{
    GObj *gobj;

    sMVEndingRoomLampGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

    gcSetupCommonDObjs(gobj, lbRelocGetDataFromFile(DObjDesc*, sMVEndingFiles[0], &lMVCommonRoomLampDObjDesc), NULL);
    gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32**, sMVEndingFiles[0], &lMVCommonRoomLampAnimJoint), 300.0F);
    gcPlayAnimAll(gobj);
}

// 0x80131E74
void mvEndingMakeRoomTissues(void)
{
    GObj *gobj;
    DObj *dobj;

    sMVEndingRoomTissuesGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

    dobj = gcAddDObjForGObj(gobj, lbRelocGetDataFromFile(void*, sMVEndingFiles[0], &lMVCommonRoomTissuesDisplayList));

    gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyRSca, 0);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead0, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddDObjAnimJoint(dobj, lbRelocGetDataFromFile(AObjEvent32*, sMVEndingFiles[0], &lMVCommonRoomTissuesAnimJoint), 300.0F);
    gcPlayAnimAll(gobj);
}

// 0x80131F24
void mvEndingMakeFighter(s32 ft_kind)
{
    GObj *fighter_gobj;
    ftCreateDesc ft_desc = dFTManagerDefaultFighterDesc;

    ft_desc.ft_kind = ft_kind;

    ft_desc.pos.x = -1077.804F;
    ft_desc.pos.y = 4038.864F;

    ft_desc.costume = sMVEndingFighterDemoDesc.costume;
    ft_desc.shade = sMVEndingFighterDemoDesc.shade;

    ft_desc.figatree_heap = sMVEndingFigatreeHeap;

    ft_desc.pos.z = -3688.5298F;

    sMVEndingFighterGObj = fighter_gobj = ftManagerMakeFighter(&ft_desc);

    scSubsysFighterSetStatus(fighter_gobj, 0x10009);
}

// 0x80131FE8
void mvEndingRoomFadeInProcDisplay(GObj *gobj)
{
    if (sMVEndingTotalTimeTics >= 540)
    {
        sMVEndingRoomFadeInAlpha = 0xFF;
    }
    if ((sMVEndingTotalTimeTics >= 70) && (sMVEndingTotalTimeTics < 540))
    {
        if (sMVEndingRoomFadeInAlpha > 0x00)
        {
            sMVEndingRoomFadeInAlpha -= 0x07;

            if (sMVEndingRoomFadeInAlpha < 0x00)
            {
                sMVEndingRoomFadeInAlpha = 0x00;
            }
        }
    }
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x00, 0x00, 0x00, sMVEndingRoomFadeInAlpha);
    gDPSetCombineMode(gSYTaskmanDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
    gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 310, 230);
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132144
void mvEndingMakeRoomFadeIn(void)
{
    GObj *gobj;

    sMVEndingRoomFadeInAlpha = 0xFF;

    sMVEndingRoomFadeInGObj = gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, mvEndingRoomFadeInProcDisplay, 26, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x801321A4
void mvEndingMakeRoomFadeInCamera(void)
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
            60,
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
}

// 0x80132244
void mvEndingRoomLightProcDisplay(GObj *gobj)
{
    if ((sMVEndingTotalTimeTics >= 340) && (sMVEndingRoomLightAlpha < 220.0F))
    {
        sMVEndingRoomLightAlpha += 1.1F;

        if (sMVEndingRoomLightAlpha > 220.0F)
        {
            sMVEndingRoomLightAlpha = 220.0F;
        }
    }
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, (u8)sMVEndingRoomLightAlpha);
    gDPSetCombineMode(gSYTaskmanDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
    gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 310, 230);
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8013243C
void mvEndingMakeRoomLight(void)
{
    GObj *gobj;

    sMVEndingRoomLightAlpha = 0.0F;

    sMVEndingRoomLightGObj = gobj = gcMakeGObjSPAfter(0, NULL, 21, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, mvEndingRoomLightProcDisplay, 30, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x8013249C
void mvEndingMakeRoomLightCamera(void)
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
            30,
            CAMERA_MASK_DLLINK(30),
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

// 0x8013253C
void mvEndingEjectRoomGObjs(void)
{
    gcEjectGObj(sMVEndingRoomBackgroundGObj);
    gcEjectGObj(sMVEndingRoomBooksGObj);
    gcEjectGObj(sMVEndingRoomPencilsGObj);
    gcEjectGObj(sMVEndingRoomLampGObj);
    gcEjectGObj(sMVEndingRoomTissuesGObj);
}

// 0x80132590
void mvEndingSetupOperatorCamera(GObj *gobj)
{
    Camera *cam = CameraGetStruct(gobj);

    syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;

    gcAddCameraCamAnimJoint(cam, lbRelocGetDataFromFile(AObjEvent32*, sMVEndingFiles[1], &lMVEndingOperatorCamAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayCamAnim, nOMObjProcessKindProc, 1);
}

// 0x80132630
void mvEndingMakeMainCameras(void)
{
    GObj *gobj;

    sMVEndingRoomCameraGObj = gobj = gcMakeCameraGObj
    (
        nOMObjCommonKindSceneCamera,
        NULL,
        16,
        GOBJ_LINKORDER_DEFAULT,
        func_80017EC0,
        80,
        CAMERA_MASK_DLLINK(29),
        -1,
        FALSE,
        nOMObjProcessKindProc,
        NULL,
        1,
        FALSE
    );
    gcAddOMMtxForCamera(CameraGetStruct(gobj), nOMTransformPerspFastF, 0);
    gcAddOMMtxForCamera(CameraGetStruct(gobj), 8, 0);
    mvEndingSetupOperatorCamera(gobj);

    CameraGetStruct(gobj)->flags |= 4;

    sMVEndingFighterCameraGObj = gobj = gcMakeCameraGObj
    (
        nOMObjCommonKindSceneCamera,
        NULL,
        16,
        GOBJ_LINKORDER_DEFAULT,
        func_80017EC0,
        40,
        CAMERA_MASK_DLLINK(9),
        -1,
        TRUE,
        nOMObjProcessKindProc,
        NULL,
        1,
        FALSE
    );
    mvEndingSetupOperatorCamera(gobj);

    CameraGetStruct(gobj)->flags |= 4;
}

// 0x80132774
void mvEndingInitVars(void)
{
    sMVEndingTotalTimeTics = 0;

    sMVEndingFighterDemoDesc.ft_kind = gSCManager1PGameBattleState.players[gSceneData.spgame_player].ft_kind;
    sMVEndingFighterDemoDesc.costume = gSCManager1PGameBattleState.players[gSceneData.spgame_player].costume;
    sMVEndingFighterDemoDesc.shade   = gSCManager1PGameBattleState.players[gSceneData.spgame_player].shade;
}

// 0x801327C8
void mvEndingFuncRun(GObj *gobj)
{
    sMVEndingTotalTimeTics++;

    if (sMVEndingTotalTimeTics >= 10)
    {
        if (sMVEndingUnused0x80132C14 != 0)
        {
            sMVEndingUnused0x80132C14--;
        }
        if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-15, 15) != FALSE) &&
            (scSubsysControllerGetPlayerStickInRangeUD(-15, 15) != FALSE)
        )
        {
            sMVEndingUnused0x80132C14 = 0;
        }
        if (sMVEndingTotalTimeTics == 340)
        {
            mvEndingMakeRoomLight();
        }
        if (sMVEndingTotalTimeTics == 540)
        {
            mvEndingEjectRoomGObjs();
            ftManagerDestroyFighter(sMVEndingFighterGObj);
            gcEjectGObj(sMVEndingRoomLightGObj);
            func_800269C0_275C0(nSYAudioFGMDoorClose);
        }
        if (sMVEndingTotalTimeTics == 660)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindStaffroll;

            syTaskmanSetLoadScene();
        }
    }
}

// 0x801328D0
void mvEndingFuncStart(void)
{
    s32 unused;
    lbRelocSetup rl_setup;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sMVEndingStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sMVEndingStatusBuffer);
    rl_setup.force_status_buffer = sMVEndingForceStatusBuffer;
    rl_setup.force_status_buffer_size = ARRAY_COUNT(sMVEndingForceStatusBuffer);

    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dMVEndingFileIDs,
        ARRAY_COUNT(dMVEndingFileIDs),
        sMVEndingFiles,
        syTaskmanMalloc
        (
            lbRelocGetAllocSize
            (
                dMVEndingFileIDs,
                ARRAY_COUNT(dMVEndingFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mvEndingFuncRun, 0, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2 | 0x1, GPACK_RGBA8888(0xFF, 0xFF, 0xFF, 0xFF));
    efAllocInitParticleBank();
    mvEndingInitVars();
    efManagerInitEffects();
    ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 1);
    ftManagerSetupFilesAllKind(sMVEndingFighterDemoDesc.ft_kind);

    sMVEndingFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);

    mvEndingMakeMainCameras();
    mvEndingMakeRoomFadeInCamera();
    mvEndingMakeRoomLightCamera();
    mvEndingMakeRoomBackground();
    mvEndingMakeRoomDesk();
    mvEndingMakeRoomBooks();
    mvEndingMakeRoomLamp();
    mvEndingMakeRoomPencils();
    mvEndingMakeRoomTissues();
    mvEndingMakeFighter(sMVEndingFighterDemoDesc.ft_kind);
    mvEndingMakeRoomFadeIn();

    scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);
    auPlaySong(0, nSYAudioBGMEnding);
}

// 0x80132A78
void mvEndingStartScene(void)
{
    dMVEndingDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);

    syDisplayInit(&dMVEndingDisplaySetup);

    dMVEndingTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl54_BSS_END);

    syTaskmanInit(&dMVEndingTaskmanSetup);
}
