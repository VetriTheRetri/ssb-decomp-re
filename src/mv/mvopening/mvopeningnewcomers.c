#include <ft/fighter.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <ovl0/reloc_data_mgr.h>
#include <sys/system_00.h>

extern u32 func_8000092C();
extern void func_ovl0_800CD2CC(GObj*);
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
rdFileNode dMVOpeningNewcomersStatusBuf[48];

// 0x801328D8
rdFileNode dMVOpeningNewcomersForceBuf[7];

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
scRuntimeInfo dMVOpeningNewcomersGtlSetup =
{
	0x00000000,
	func_8000A5E4,
	func_8000A340,
	&ovl52_BSS_END,
	0x00000000,
	0x00000001,
	0x00000002,
	0x00002710,
	0x00001000,
	0x00000000,
	0x00000000,
	0x00008000,
	0x00020000,
	0x0000C000,
	mvOpeningNewcomersProcLights,
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
	mvOpeningNewcomersProcStart
};
// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mvOpeningNewcomersProcLights(Gfx **dls)
{
    gSPSetGeometryMode(dls[0]++, G_LIGHTING);
    ftRenderLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
sb32 mvOpeningNewcomersCheckLocked(s32 ft_kind)
{
    switch (ft_kind)
    {
    case nFTKindCaptain:
        return (sMVOpeningNewcomersCharacterMask & SCBACKUP_FIGHTER_MASK_DEFINE(nFTKindCaptain)) ? FALSE : TRUE;

    case nFTKindNess:
        return (sMVOpeningNewcomersCharacterMask & SCBACKUP_FIGHTER_MASK_DEFINE(nFTKindNess)) ? FALSE : TRUE;

    case nFTKindPurin:
        return (sMVOpeningNewcomersCharacterMask & SCBACKUP_FIGHTER_MASK_DEFINE(nFTKindPurin)) ? FALSE : TRUE;

    case nFTKindLuigi:
        return (sMVOpeningNewcomersCharacterMask & SCBACKUP_FIGHTER_MASK_DEFINE(nFTKindLuigi)) ? FALSE : TRUE;

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
        dobj = gcAddDObjForGObj(gobj, gcGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersPurinHiddenDisplayList));
    }
    else dobj = gcAddDObjForGObj(gobj, gcGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersPurinShowDisplayList));
    
    gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyRSca, 0);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddDObjAnimJoint(dobj, gcGetDataFromFile(AObjEvent*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersPurinAnimJoint), 0.0F);
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
        dobj = gcAddDObjForGObj(gobj, gcGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersCaptainHiddenDisplayList));
    }
    else dobj = gcAddDObjForGObj(gobj, gcGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersCaptainShowDisplayList));

    gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyRSca, 0);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddDObjAnimJoint(dobj, gcGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersCaptainAnimJoint), 0.0F);
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
        dobj = gcAddDObjForGObj(gobj, gcGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersLuigiHiddenDisplayList));
    }
    else dobj = gcAddDObjForGObj(gobj, gcGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersLuigiShowDisplayList));
    
    gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyRSca, 0);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddDObjAnimJoint(dobj, gcGetDataFromFile(void*, sMVOpeningNewcomersFiles[0], &lMVOpeningNewcomersLuigiAnimJoint), 0.0F);
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
        dobj = gcAddDObjForGObj(gobj, gcGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersNessHiddenDisplayList));
    }
    else dobj = gcAddDObjForGObj(gobj, gcGetDataFromFile(void*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersNessShowDisplayList));

    gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyRSca, 0);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddDObjAnimJoint(dobj, gcGetDataFromFile(AObjEvent*, sMVOpeningNewcomersFiles[1], &lMVOpeningNewcomersNessAnimJoint), 0.0F);
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
void mvOpeningNewcomersHideProcRender(GObj *gobj)
{
    if (sMVOpeningNewcomersOverlayAlpha < 0xFF)
    {
        sMVOpeningNewcomersOverlayAlpha += 0x28;

        if (sMVOpeningNewcomersOverlayAlpha > 0xFF)
        {
            sMVOpeningNewcomersOverlayAlpha = 0xFF;
        }
    }
    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetCycleType(gDisplayListHead[1]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, 0x00, 0x00, 0x00, sMVOpeningNewcomersOverlayAlpha);
    gDPSetCombineLERP(gDisplayListHead[1]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[1]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
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
        mvOpeningNewcomersHideProcRender,
        26,
        GOBJ_DLLINKORDER_DEFAULT,
        -1
    );
}

// 0x801321B8
void mvOpeningNewcomersMakeCharacterViewport(void)
{
    s32 unused;
    Camera *cam = CameraGetStruct
    (
        func_8000B93C
        (
            nOMObjCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            func_80017EC0,
            40,
            CAMERA_MASK_DLLINK(27),
            -1,
            1,
            1,
            NULL, 
            1,
            0
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
void mvOpeningNewcomersMakeHideViewport(void)
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
            20,
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

// 0x80132388
void mvOpeningNewcomersInitVars(void)
{
    sMVOpeningNewcomersTotalTimeTics = 0;
    sMVOpeningNewcomersCharacterMask = gSaveData.character_mask;
}

// 0x801323A4
void mvOpeningNewcomersProcRun(GObj *gobj)
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

            leoInitUnit_atten();
        }
        if (sMVOpeningNewcomersTotalTimeTics == 30)
        {
            mvOpeningNewcomersMakeHide();
        }
        if (sMVOpeningNewcomersTotalTimeTics == 40)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

            leoInitUnit_atten();
        }
    }
}

// 0x80132490
void mvOpeningNewcomersProcStart(void)
{
    s32 unused;
    rdSetup rldmSetup;

    rldmSetup.table_addr = (uintptr_t)&lRDManagerTableAddr;
    rldmSetup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
    rldmSetup.file_heap = 0;
    rldmSetup.file_heap_size = 0;
    rldmSetup.status_buf = dMVOpeningNewcomersStatusBuf;
    rldmSetup.status_buf_size = ARRAY_COUNT(dMVOpeningNewcomersStatusBuf);
    rldmSetup.force_buf = dMVOpeningNewcomersForceBuf;
    rldmSetup.force_buf_size = ARRAY_COUNT(dMVOpeningNewcomersForceBuf);

    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles
    (
        dMVOpeningNewcomersFileIDs,
        ARRAY_COUNT(dMVOpeningNewcomersFileIDs),
        sMVOpeningNewcomersFiles,
        gsMemoryAlloc
        (
            rdManagerGetAllocSize
            (
                dMVOpeningNewcomersFileIDs,
                ARRAY_COUNT(dMVOpeningNewcomersFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mvOpeningNewcomersProcRun, 0, GOBJ_LINKORDER_DEFAULT);

    func_8000B9FC(0, 0x80000000, 0x64, 3, -1);

    mvOpeningNewcomersInitVars();
    mvOpeningNewcomersMakeCharacterViewport();
    mvOpeningNewcomersMakeHideViewport();
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
    func_80007024(&dMVOpeningNewcomersDisplaySetup);

    dMVOpeningNewcomersGtlSetup.arena_size = (size_t) ((uintptr_t)&ovl1_TEXT_START - (uintptr_t)&ovl52_BSS_END);
    gsGTLSceneInit(&dMVOpeningNewcomersGtlSetup);
}
