#include <ft/fighter.h>
#include <gr/ground.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <lb/library.h>

extern void leoInitUnit_atten();
extern u32 func_8000092C();
extern void func_800A26B8();
extern void func_80007080(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4);


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
void *sMVOpeningClashFighterAnimHeaps[8];

// 0x801329F8
s32 sMVOpeningClashPad0x801329F8[4];

// 0x80132A08
s32 sMVOpeningClashTotalTimeTics;

// 0x80132A0C
s32 sMVOpeningClashVoidAlpha;

// 0x80132A10
s32 sMVOpeningClashUnused0x80132A10;

// 0x80132A18
lbFileNode sMVOpeningClashStatusBuf[100];

// 0x80132D38
lbFileNode sMVOpeningClashForceBuf[7];

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
void mvOpeningClashProcLights(Gfx **dls)
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

    for (i = 0; i < (ARRAY_COUNT(ft_kinds) + ARRAY_COUNT(sMVOpeningClashFighterAnimHeaps)) / 2; i++)
    {
        ft_desc.ft_kind = ft_kinds[i];
        ft_desc.costume = ftParamGetCostumeCommonID(ft_kinds[i], 0);

        ft_desc.pos.x = 0.0F;
        ft_desc.pos.y = 0.0F;
        ft_desc.pos.z = 0.0F;

        ft_desc.figatree_heap = sMVOpeningClashFighterAnimHeaps[i];
        fighter_gobj = ftManagerMakeFighter(&ft_desc);

        scSubsysFighterSetStatus(fighter_gobj, 0x1000B);

        DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0F;
        DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0F;
        DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0F;
    }
}

// 0x80131CCC
void mvOpeningClashVoidProcDraw(GObj *gobj)
{
    if (sMVOpeningClashVoidAlpha < 0xFF)
    {
        sMVOpeningClashVoidAlpha += 0x1E;

        if (sMVOpeningClashVoidAlpha > 0xFF)
        {
            sMVOpeningClashVoidAlpha = 0xFF;
        }
    }
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, sMVOpeningClashVoidAlpha);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
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
        mvOpeningClashVoidProcDraw,
        26,
        GOBJ_DLLINKORDER_DEFAULT,
        GOBJ_CAMTAG_DEFAULT
    );
}

// 0x80131E5C
void mvOpeningClashMakeWallpaper(void)
{
    // lower left quadrant
    GObj* gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead0, 29, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gcAddOMMtxForDObjFixed(gcAddDObjForGObj(gobj, gcGetDataFromFile(void*, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLLDisplayList)), 0x1C, 0);
    gcAddMObjAll(gobj, gcGetDataFromFile(MObjSub***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLLMObjSub));
    gcAddMatAnimJointAll(gobj, gcGetDataFromFile(AObjEvent32***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLLMatAnimJoint), 0.0F);

    DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

    gcAddAnimJointAll(gobj, gcGetDataFromFile(AObjEvent32**, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLLAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);

    // lower right quadrant
    gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead0, 29, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gcAddOMMtxForDObjFixed(gcAddDObjForGObj(gobj, gcGetDataFromFile(void*, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLRDisplayList)), 0x1C, 0);
    gcAddMObjAll(gobj, gcGetDataFromFile(MObjSub***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLRMObjSub));
    gcAddMatAnimJointAll(gobj, gcGetDataFromFile(AObjEvent32***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLRMatAnimJoint), 0.0F);

    DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

    gcAddAnimJointAll(gobj, gcGetDataFromFile(AObjEvent32**, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperLRAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);

    // upper left quadrant
    gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead0, 29, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gcAddOMMtxForDObjFixed(gcAddDObjForGObj(gobj, gcGetDataFromFile(void*, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperULDisplayList)), 0x1C, 0);
    gcAddMObjAll(gobj, gcGetDataFromFile(MObjSub***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperULMObjSub));
    gcAddMatAnimJointAll(gobj, gcGetDataFromFile(AObjEvent32***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperULMatAnimJoint), 0.0F);

    DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

    gcAddAnimJointAll(gobj, gcGetDataFromFile(AObjEvent32**, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperULAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);

    // upper right quadrant
    gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, gcDrawDObjDLHead0, 29, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gcAddOMMtxForDObjFixed(gcAddDObjForGObj(gobj, gcGetDataFromFile(void*, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperURDisplayList)), 0x1C, 0);
    gcAddMObjAll(gobj, gcGetDataFromFile(MObjSub***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperURMObjSub));
    gcAddMatAnimJointAll(gobj, gcGetDataFromFile(AObjEvent32***, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperURMatAnimJoint), 0.0F);

    DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

    gcAddAnimJointAll(gobj, gcGetDataFromFile(AObjEvent32**, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperURAnimJoint), 0.0F);
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);
}

// 0x80132204
void mvOpeningClashMakeFightersViewport(void)
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
        1,
        1,
        NULL,
        1,
        0
    );
    Camera *cam = CameraGetStruct(camera_gobj);

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->flags |= 1;

    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;

    gcAddCameraCamAnimJoint(cam, gcGetDataFromFile(AObjEvent32*, sMVOpeningClashFiles[0], &lMVOpeningClashFightersCamAnimJoint), 0.0F);
    gcAddGObjProcess(camera_gobj, gcPlayCamAnim, nOMObjProcessKindProc, 1);
}

// 0x80132314
void mvOpeningClashMakeVoidViewport(void)
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
            0,
            1,
            NULL,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    
    cam->flags |= 1;
}

// 0x801323C8
void mvOpeningClashWallpaperProcDraw(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    func_80017DBC(gobj);
    
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8013246C
void mvOpeningClashMakeWallpaperViewport(void)
{
    GObj *camera_gobj = gcMakeCameraGObj
    (
        nOMObjCommonKindSceneCamera,
        NULL,
        16,
        GOBJ_LINKORDER_DEFAULT,
        mvOpeningClashWallpaperProcDraw,
        90,
        CAMERA_MASK_DLLINK(29),
        -1,
        1,
        1,
        NULL,
        1,
        0
    );
    Camera *cam = CameraGetStruct(camera_gobj);

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    gcAddCameraCamAnimJoint(cam, gcGetDataFromFile(AObjEvent32*, sMVOpeningClashFiles[1], &lMVOpeningClashWallpaperCamAnimJoint), 0.0F);

    gcAddGObjProcess(camera_gobj, gcPlayCamAnim, nOMObjProcessKindProc, 1);
}

// 0x80132550
void mvOpeningClashInitTotalTimeTics(void)
{
    sMVOpeningClashTotalTimeTics = 0;
}

// 0x8013255C
void mvOpeningClashProcRun(GObj *gobj)
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
            
            leoInitUnit_atten();
        }

        if (sMVOpeningClashTotalTimeTics == 144)
        {
            mvOpeningClashMakeVoid();
        }
        if (sMVOpeningClashTotalTimeTics == 160)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindOpeningNewcomers;

            leoInitUnit_atten();
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
void mvOpeningClashProcStart(void)
{
    s32 i;
    lbRelocSetup rl_setup;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buf = sMVOpeningClashStatusBuf;
    rl_setup.status_buf_size = ARRAY_COUNT(sMVOpeningClashStatusBuf);
    rl_setup.force_buf = sMVOpeningClashForceBuf;
    rl_setup.force_buf_size = ARRAY_COUNT(sMVOpeningClashForceBuf);

    lbRelocInitSetup(&rl_setup);
    lbRelocGetLoadFilesNum
    (
        dMVOpeningClashFileIDs,
        ARRAY_COUNT(dMVOpeningClashFileIDs),
        sMVOpeningClashFiles,
        gsMemoryAlloc
        (
            lbRelocGetAllocSize
            (
                dMVOpeningClashFileIDs,
                ARRAY_COUNT(dMVOpeningClashFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mvOpeningClashProcRun, 0, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2 | 0x1, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));

    efAllocInitParticleBank();
    mvOpeningClashInitTotalTimeTics();
    efManagerInitEffects();

    // Not quite correct to use the length of sMVOpeningClashFighterAnimHeaps here, but also probably not worth a #define
    ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, ARRAY_COUNT(sMVOpeningClashFighterAnimHeaps));

    ftManagerSetupFilesAllKind(nFTKindMario);
    ftManagerSetupFilesAllKind(nFTKindFox);
    ftManagerSetupFilesAllKind(nFTKindDonkey);
    ftManagerSetupFilesAllKind(nFTKindSamus);
    ftManagerSetupFilesAllKind(nFTKindLink);
    ftManagerSetupFilesAllKind(nFTKindYoshi);
    ftManagerSetupFilesAllKind(nFTKindKirby);
    ftManagerSetupFilesAllKind(nFTKindPikachu);

    for (i = 0; i < ARRAY_COUNT(sMVOpeningClashFighterAnimHeaps); i++)
    {
        sMVOpeningClashFighterAnimHeaps[i] = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);
    }
    mvOpeningClashMakeFightersViewport();
    mvOpeningClashMakeVoidViewport();
    mvOpeningClashMakeWallpaperViewport();
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
scRuntimeInfo dMVOpeningClashGtlSetup =
{
    0x00000000,
	func_8000A5E4,
	func_8000A340,
	&ovl49_BSS_END,
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
	mvOpeningClashProcLights,
	update_contdata,
	0x00000008,
	0x00000600,
	0x00000008,
	0x00000000,
	0x00000080,
	0x00000080,
	0x00000088,
	0x00000200,
	0x800D5CAC,
	0x00000000,
	0x00000200,
	0x000000A0,
	0x00000200,
	0x00000088,
	0x00000080,
	0x0000006C,
	0x00000010,
	0x00000090,
	mvOpeningClashProcStart
};

// 0x80132874
void mvOpeningClashStartScene(void)
{
    dMVOpeningClashDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    func_80007024(&dMVOpeningClashDisplaySetup);

    dMVOpeningClashGtlSetup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl49_BSS_END);
    gsGTLSceneInit(&dMVOpeningClashGtlSetup);
}
