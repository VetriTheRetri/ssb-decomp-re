#include <ft/fighter.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <ovl0/reloc_data_mgr.h>

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
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80132BC0
s32 sMVEndingPad0x80132BC0[2];

// 0x80132BC8
void *sMVEndingFighterAnimHeap;

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
rdFileNode sMVEndingStatusBuf[100];

// 0x80132F38
rdFileNode sMVEndingForceBuf[7];

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
scRuntimeInfo dMVEndingGtlSetup =
{
	0x00000000,
	func_8000A5E4,
	func_8000A340,
	&ovl54_BSS_END,
	0x00000000,
	0x00000001,
	0x00000002,
	0x00004E20,
	0x00001000,
	0x00000000,
	0x00000000,
	0x00008000,
	0x00020000,
	0x0000C000,
	mvEndingProcLights,
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
	mvEndingProcStart
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mvEndingProcLights(Gfx **dls)
{
    gSPSetGeometryMode(dls[0]++, G_LIGHTING);

    ftRenderLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
void mvEndingMakeRoomBackground(void)
{
    GObj *gobj;

    sMVEndingRoomBackgroundGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

    gcSetupCommonDObjs(gobj, gcGetDataFromFile(DObjDesc*, sMVEndingFiles[0], &lMVCommonRoomBackgroundDObjDesc), NULL);
    gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddMObjAll(gobj, gcGetDataFromFile(MObjSub***, sMVEndingFiles[0], &lMVCommonRoomBackgroundMObjSub));
    gcAddMatAnimJointAll(gobj, gcGetDataFromFile(AObjEvent***, sMVEndingFiles[0], &lMVCommonRoomBackgroundMatAnimJoint), 0.0F);
    gcPlayAnimAll(gobj);
}

// 0x80131C1C
void mvEndingMakeRoomDesk(void)
{
    GObj *gobj;

    sMVEndingRoomDeskGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

    gcSetupCommonDObjs(gobj, gcGetDataFromFile(DObjDesc*, sMVEndingFiles[0], &lMVCommonRoomDeskDObjDesc), NULL);
    gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x80131C94
void mvEndingMakeRoomBooks(void)
{
    GObj *gobj;

    sMVEndingRoomBooksGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

    gcSetupCommonDObjs(gobj, gcGetDataFromFile(DObjDesc*, sMVEndingFiles[0], &lMVCommonRoomBooksDObjDesc), NULL);
    gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddAnimJointAll(gobj, gcGetDataFromFile(AObjEvent**, sMVEndingFiles[0], &lMVCommonRoomBooksAnimJoint), 300.0F);
    gcPlayAnimAll(gobj);
}

// 0x80131D34
void mvEndingMakeRoomPencils(void)
{
    GObj *gobj;

    sMVEndingRoomPencilsGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

    gcSetupCommonDObjs(gobj, gcGetDataFromFile(DObjDesc*, sMVEndingFiles[0], &lMVCommonRoomPencilsDObjDesc), NULL);
    gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddAnimJointAll(gobj, gcGetDataFromFile(AObjEvent**, sMVEndingFiles[0], &lMVCommonRoomPencilsAnimJoint), 300.0F);
    gcPlayAnimAll(gobj);
}

// 0x80131DD4
void mvEndingMakeRoomLamp(void)
{
    GObj *gobj;

    sMVEndingRoomLampGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

    gcSetupCommonDObjs(gobj, gcGetDataFromFile(DObjDesc*, sMVEndingFiles[0], &lMVCommonRoomLampDObjDesc), NULL);
    gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddAnimJointAll(gobj, gcGetDataFromFile(AObjEvent**, sMVEndingFiles[0], &lMVCommonRoomLampAnimJoint), 300.0F);
    gcPlayAnimAll(gobj);
}

// 0x80131E74
void mvEndingMakeRoomTissues(void)
{
    GObj *gobj;
    DObj *dobj;

    sMVEndingRoomTissuesGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

    dobj = gcAddDObjForGObj(gobj, gcGetDataFromFile(void*, sMVEndingFiles[0], &lMVCommonRoomTissuesDisplayList));

    gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyRSca, 0);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead0, 29, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddDObjAnimJoint(dobj, gcGetDataFromFile(AObjEvent*, sMVEndingFiles[0], &lMVCommonRoomTissuesAnimJoint), 300.0F);
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

    ft_desc.anim_heap = sMVEndingFighterAnimHeap;

    ft_desc.pos.z = -3688.5298F;

    sMVEndingFighterGObj = fighter_gobj = ftManagerMakeFighter(&ft_desc);

    scSubsysFighterSetStatus(fighter_gobj, 0x10009);
}

// 0x80131FE8
void mvEndingRoomFadeInProcRender(GObj *gobj)
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
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x00, 0x00, 0x00, sMVEndingRoomFadeInAlpha);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132144
void mvEndingMakeRoomFadeIn(void)
{
    GObj *gobj;

    sMVEndingRoomFadeInAlpha = 0xFF;

    sMVEndingRoomFadeInGObj = gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, mvEndingRoomFadeInProcRender, 26, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x801321A4
void mvEndingMakeRoomFadeInCamera(void)
{
    Camera *cam = CameraGetStruct
    (
        func_8000B93C
        (
            nOMObjCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            func_ovl0_800CD2CC,
            60,
            CAMERA_MASK_DLLINK(26),
            -1,
            0,
            1,
            NULL,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132244
void mvEndingRoomLightProcRender(GObj *gobj)
{
    if ((sMVEndingTotalTimeTics >= 340) && (sMVEndingRoomLightAlpha < 220.0F))
    {
        sMVEndingRoomLightAlpha += 1.1F;

        if (sMVEndingRoomLightAlpha > 220.0F)
        {
            sMVEndingRoomLightAlpha = 220.0F;
        }
    }
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, (u8)sMVEndingRoomLightAlpha);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8013243C
void mvEndingMakeRoomLight(void)
{
    GObj *gobj;

    sMVEndingRoomLightAlpha = 0.0F;

    sMVEndingRoomLightGObj = gobj = gcMakeGObjSPAfter(0, NULL, 21, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, mvEndingRoomLightProcRender, 30, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x8013249C
void mvEndingMakeRoomLightCamera(void)
{
    Camera *cam = CameraGetStruct
    (
        func_8000B93C
        (
            nOMObjCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            func_ovl0_800CD2CC,
            30,
            CAMERA_MASK_DLLINK(30),
            -1,
            0,
            1,
            NULL,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
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

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;

    gcAddCameraCamAnimJoint(cam, gcGetDataFromFile(AObjEvent*, sMVEndingFiles[1], &lMVEndingOperatorCamAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcUpdateCameraCamAnim, nOMObjProcessKindProc, 1);
}

// 0x80132630
void mvEndingMakeMainCameras(void)
{
    GObj *gobj;

    sMVEndingRoomCameraGObj = gobj = func_8000B93C
    (
        nOMObjCommonKindSceneCamera,
        NULL,
        16,
        GOBJ_LINKORDER_DEFAULT,
        func_80017EC0,
        80,
        CAMERA_MASK_DLLINK(29),
        -1,
        0,
        1,
        NULL,
        1,
        0
    );
    gcAddOMMtxForCamera(CameraGetStruct(gobj), nOMTransformPerspFastF, 0);
    gcAddOMMtxForCamera(CameraGetStruct(gobj), 8, 0);
    mvEndingSetupOperatorCamera(gobj);

    CameraGetStruct(gobj)->flags |= 4;

    sMVEndingFighterCameraGObj = gobj = func_8000B93C
    (
        nOMObjCommonKindSceneCamera,
        NULL,
        16,
        GOBJ_LINKORDER_DEFAULT,
        func_80017EC0,
        40,
        CAMERA_MASK_DLLINK(9),
        -1,
        1,
        1,
        NULL,
        1,
        0
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
void mvEndingProcRun(GObj *gobj)
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
            gSceneData.scene_current = nSCKindCredits;

            leoInitUnit_atten();
        }
    }
}

// 0x801328D0
void mvEndingProcStart(void)
{
    s32 unused;
    rdSetup rd_setup;

    rd_setup.table_addr = (uintptr_t)&lRDManagerTableAddr;
    rd_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
    rd_setup.file_heap = NULL;
    rd_setup.file_heap_size = 0;
    rd_setup.status_buf = sMVEndingStatusBuf;
    rd_setup.status_buf_size = ARRAY_COUNT(sMVEndingStatusBuf);
    rd_setup.force_buf = sMVEndingForceBuf;
    rd_setup.force_buf_size = ARRAY_COUNT(sMVEndingForceBuf);

    rdManagerInitSetup(&rd_setup);
    rdManagerLoadFiles
    (
        dMVEndingFileIDs,
        ARRAY_COUNT(dMVEndingFileIDs),
        sMVEndingFiles,
        gsMemoryAlloc
        (
            rdManagerGetAllocSize
            (
                dMVEndingFileIDs,
                ARRAY_COUNT(dMVEndingFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mvEndingProcRun, 0, GOBJ_LINKORDER_DEFAULT);
    func_8000B9FC(0, 0x80000000, 0x64, 3, -1);
    efAllocInitParticleBank();
    mvEndingInitVars();
    efManagerInitEffects();
    ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 1);
    ftManagerSetupFilesAllKind(sMVEndingFighterDemoDesc.ft_kind);

    sMVEndingFighterAnimHeap = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);

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

    func_80007024(&dMVEndingDisplaySetup);

    dMVEndingGtlSetup.arena_size = (size_t) ((uintptr_t)&ovl1_TEXT_START - (uintptr_t)&ovl54_BSS_END);

    gsGTLSceneInit(&dMVEndingGtlSetup);
}
