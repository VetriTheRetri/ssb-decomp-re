#include <ft/fighter.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <lb/reloc_data_mgr.h>

extern void leoInitUnit_atten();
extern u32 func_8000092C();
extern void func_800A26B8();
extern void func_80007080(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4);


// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_00000044;
extern uintptr_t D_NF_00000046;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801327C0
s32 sMVOpeningCliffPad0x801327C0[2];

// 0x801327C8
void *sMVOpeningCliffFighterAnimHeap;

// 0x801327CC
s32 sMVOpeningCliffTotalTimeTics;

// 0x801327D0
GObj* sMVOpeningCliffOcarinaGObj;

// 0x801327D4
GObj* sMVOpeningCliffFighterGObj;

// 0x801327D8
f32 sMVOpeningCliffWallpaperScrollSpeed;

// 0x801327DC
s32 sMVOpeningCliffUnused0x801327DC;

// 0x801327E0
rdFileNode sMVOpeningCliffStatusBuf[48];

// 0x80132960
rdFileNode sMVOpeningCliffForceBuf[7];

// 0x80132998
void *sMVOpeningCliffFiles[2];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x801326D0
u32 dMVOpeningCliffFileIDs[/* */] = { &D_NF_00000044, &D_NF_00000046 };

// 0x801326D8
Lights1 dMVOpeningCliffLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x801326F0
Lights1 dMVOpeningCliffLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x00);

// 0x80132708
syDisplaySetup dMVOpeningCliffDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x80132724
scRuntimeInfo dMVOpeningCliffGtlSetup =
{
    0x00000000,
	func_8000A5E4,
	func_8000A340,
	&ovl46_BSS_END,
	0x00000000,
	0x00000001,
	0x00000002,
	0x00009C40,
	0x00001000,
	0x00000000,
	0x00000000,
	0x00008000,
	0x00020000,
	0x0000C000,
	mvOpeningCliffProcLights,
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
	mvOpeningCliffProcStart
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mvOpeningCliffProcLights(Gfx **dls)
{
    gSPSetGeometryMode(dls[0]++, G_LIGHTING);
    ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
void mvOpeningCliffHillsProcDraw(GObj *hills_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    gcDrawDObjTreeForGObj(hills_gobj);

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80131C34
void mvOpeningCliffMakeHills(void)
{
    GObj* hills_gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);
    gcSetupCommonDObjs
    (
        hills_gobj,
        gcGetDataFromFile
        (
            DObjDesc*,
            sMVOpeningCliffFiles[0],
            &lMVOpeningCliffHillsDObjDesc
        ),
        NULL
    );
    gcAddGObjDisplay(hills_gobj, mvOpeningCliffHillsProcDraw, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
}

// 0x80131CA4 - Unused?
void func_ovl46_80131CA4()
{
    return;
}

// 0x80131CAC
void mvOpeningCliffMakeFighter(void)
{
    GObj* fighter_gobj;
    ftCreateDesc ft_desc = dFTManagerDefaultFighterDesc;

    ft_desc.ft_kind = nFTKindLink;
    ft_desc.costume = ftParamGetCostumeCommonID(nFTKindLink, 0);
    ft_desc.pos.x = 0.0F;
    ft_desc.pos.y = 0.0F;
    ft_desc.pos.z = 0.0F;
    ft_desc.figatree_heap = sMVOpeningCliffFighterAnimHeap;

    sMVOpeningCliffFighterGObj = fighter_gobj = ftManagerMakeFighter(&ft_desc);

    scSubsysFighterSetStatus(fighter_gobj, 0x1000F);

    gcMoveGObjDL(fighter_gobj, 28, -1);

    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0F;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0F;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0F;
}

// 0x80131D8C
void mvOpeningCliffWallpaperProcDraw(GObj *gobj)
{
    SObj *sobj = SObjGetStruct(gobj);

    switch (sMVOpeningCliffTotalTimeTics)
    {
    case 1:
        sMVOpeningCliffWallpaperScrollSpeed = 15.0F;
        break;

    case 80:
        sMVOpeningCliffWallpaperScrollSpeed = 10.0F;
        break;

    case 90:
        sMVOpeningCliffWallpaperScrollSpeed = 6.0F;
        break;

    case 120:
        sMVOpeningCliffWallpaperScrollSpeed = 2.0F;
        break;

    case 180:
        sMVOpeningCliffWallpaperScrollSpeed = 0.0F;
        break;
    }
    if ((sMVOpeningCliffTotalTimeTics > 1) && (sMVOpeningCliffTotalTimeTics < 80))
    {
        sMVOpeningCliffWallpaperScrollSpeed += (-5.0F / 79.0F);
    }
    if ((sMVOpeningCliffTotalTimeTics > 80) && (sMVOpeningCliffTotalTimeTics < 90))
    {
        sMVOpeningCliffWallpaperScrollSpeed += (-2.0F / 5.0F);
    }
    if ((sMVOpeningCliffTotalTimeTics > 90) && (sMVOpeningCliffTotalTimeTics < 120))
    {
        sMVOpeningCliffWallpaperScrollSpeed += (-2.0F / 15.0F);
    }
    if ((sMVOpeningCliffTotalTimeTics > 120) && (sMVOpeningCliffTotalTimeTics < 180))
    {
        sMVOpeningCliffWallpaperScrollSpeed += (-1.0F / 30.0F);
    }
    sobj->pos.x -= sMVOpeningCliffWallpaperScrollSpeed;

    if (sobj->pos.x < -320.0F)
    {
        sobj->pos.x += 320.0F;
    }
    sobj->next->pos.x = sobj->pos.x + 320.0F;
}

// 0x80131F2C
void mvOpeningCliffMakeWallpaper(void)
{
    GObj *wallpaper_gobj;
    SObj *wallpaper_sobj;

    wallpaper_gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(wallpaper_gobj, lbCommonDrawSObjAttr, 27, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gcAddGObjProcess(wallpaper_gobj, mvOpeningCliffWallpaperProcDraw, nOMObjProcessKindProc, 1);

    wallpaper_sobj = lbCommonMakeSObjForGObj(wallpaper_gobj, gcGetDataFromFile(Sprite*, sMVOpeningCliffFiles[1], &lMVOpeningCliffWallpaperSprite));
    wallpaper_sobj->sprite.attr &= ~SP_FASTCOPY;

    wallpaper_sobj->sprite.scalex = 2.0F;
    wallpaper_sobj->sprite.scaley = 2.0F;

    wallpaper_sobj->pos.x = 0.0F;
    wallpaper_sobj->pos.y = 0.0F;

    wallpaper_sobj = lbCommonMakeSObjForGObj(wallpaper_gobj, gcGetDataFromFile(Sprite*, sMVOpeningCliffFiles[1], &lMVOpeningCliffWallpaperSprite));
    wallpaper_sobj->sprite.attr &= ~SP_FASTCOPY;

    wallpaper_sobj->sprite.scalex = 2.0F;
    wallpaper_sobj->sprite.scaley = 2.0F;

    wallpaper_sobj->pos.x = 320.0F;
    wallpaper_sobj->pos.y = 0.0F;
}

// 0x80132024
void mvOpeningCliffMakeOcarina(void)
{
    GObj *ocarina_gobj;

    sMVOpeningCliffOcarinaGObj = ocarina_gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);
    gcSetupCustomDObjs
    (
        ocarina_gobj,
        gcGetDataFromFile
        (
            DObjDesc*,
            sMVOpeningCliffFiles[0],
            &lMVOpeningCliffOcarinaDObjDesc
        ),
        NULL,
        nOMTransformTraRotRpyRSca,
        nOMTransformNull,
        nOMTransformNull
    );
    gcAddGObjDisplay(ocarina_gobj, gcDrawDObjTreeForGObj, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);

    DObjGetStruct(ocarina_gobj)->scale.vec.f.x = DObjGetStruct(sMVOpeningCliffFighterGObj)->scale.vec.f.x;
    DObjGetStruct(ocarina_gobj)->scale.vec.f.y = DObjGetStruct(sMVOpeningCliffFighterGObj)->scale.vec.f.y;
    DObjGetStruct(ocarina_gobj)->scale.vec.f.z = DObjGetStruct(sMVOpeningCliffFighterGObj)->scale.vec.f.z;

    gcAddAnimJointAll
    (
        ocarina_gobj,
        gcGetDataFromFile
        (
            AObjEvent32**,
            sMVOpeningCliffFiles[0],
            &lMVOpeningCliffOcarinaAnimJoint
        ),
        0.0F
    );
    gcAddGObjProcess(ocarina_gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);
}

// 0x8013212C
void mvOpeningCliffCameraProcUpdate(GObj *gobj)
{
    gcPlayCamAnim(gobj);
}

// 0x8013214C
void mvOpeningCliffMakeMainViewport(void)
{
    GObj* camera_gobj;
    Camera* cam;

    camera_gobj = gcMakeCameraGObj
    (
        nOMObjCommonKindSceneCamera,
        NULL,
        16,
        GOBJ_LINKORDER_DEFAULT,
        func_80017EC0,
        80,
        CAMERA_MASK_DLLINK(26),
        -1,
        0,
        1,
        NULL,
        1,
        0
    );
    gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), nOMTransformPerspF, 0);
    gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), 6, 0);

    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;

    gcAddCameraCamAnimJoint
    (
        cam,
        gcGetDataFromFile
        (
            AObjEvent32*,
            sMVOpeningCliffFiles[0],
            &lMVOpeningCliffCamAnimJoint
        ),
        0.0F
    );
    gcAddGObjProcess(camera_gobj, mvOpeningCliffCameraProcUpdate, nOMObjProcessKindProc, 1);

    camera_gobj = gcMakeCameraGObj
    (
        nOMObjCommonKindSceneCamera,
        NULL,
        16,
        GOBJ_LINKORDER_DEFAULT,
        func_80017EC0,
        70,
        CAMERA_MASK_DLLINK(28),
        -1,
        0,
        1,
        NULL,
        1,
        0
    );
    gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), nOMTransformPerspF, 0);
    gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), 6, 0);

    cam = CameraGetStruct(camera_gobj);
    
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;

    gcAddCameraCamAnimJoint
    (
        cam,
        gcGetDataFromFile
        (
            AObjEvent32*,
            sMVOpeningCliffFiles[0],
            &lMVOpeningCliffCamAnimJoint
        ),
        0.0F
    );
    gcAddGObjProcess(camera_gobj, mvOpeningCliffCameraProcUpdate, nOMObjProcessKindProc, 1);
}

// 0x80132368
void mvOpeningCliffMakeWallpaperViewport(void)
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
            CAMERA_MASK_DLLINK(27),
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

// 0x80132408
void mvOpeningCliffInitTotalTimeTics(void)
{
    sMVOpeningCliffTotalTimeTics = 0;
}

// 0x80132414
void mvOpeningCliffProcRun(GObj *gobj)
{
    sMVOpeningCliffTotalTimeTics++;

    if (sMVOpeningCliffTotalTimeTics >= 10)
    {
        if (sMVOpeningCliffUnused0x801327DC != 0)
        {
            sMVOpeningCliffUnused0x801327DC--;
        }
        if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-15, 15) != FALSE) &&
            (scSubsysControllerGetPlayerStickInRangeUD(-15, 15) != FALSE)
        )
        {
            sMVOpeningCliffUnused0x801327DC = 0;
        }
        if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

            leoInitUnit_atten();
        }
        if (sMVOpeningCliffTotalTimeTics == 160)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindOpeningYamabuki;

            leoInitUnit_atten();
        }
    }
}

// 0x801324E0
void mvOpeningCliffProcStart(void)
{
    s32 unused;
    rdSetup rd_setup;

    rd_setup.table_addr = (uintptr_t)&lRDManagerTableAddr;
    rd_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
    rd_setup.file_heap = NULL;
    rd_setup.file_heap_size = 0;
    rd_setup.status_buf = sMVOpeningCliffStatusBuf;
    rd_setup.status_buf_size = ARRAY_COUNT(sMVOpeningCliffStatusBuf);
    rd_setup.force_buf = sMVOpeningCliffForceBuf;
    rd_setup.force_buf_size = ARRAY_COUNT(sMVOpeningCliffForceBuf);

    rdManagerInitSetup(&rd_setup);
    rdManagerLoadFiles
    (
        dMVOpeningCliffFileIDs,
        ARRAY_COUNT(dMVOpeningCliffFileIDs),
        sMVOpeningCliffFiles,
        gsMemoryAlloc
        (
            rdManagerGetAllocSize
            (
                dMVOpeningCliffFileIDs,
                ARRAY_COUNT(dMVOpeningCliffFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mvOpeningCliffProcRun, 0, GOBJ_LINKORDER_DEFAULT);

    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x1, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));

    efAllocInitParticleBank();
    mvOpeningCliffInitTotalTimeTics();
    efManagerInitEffects();
    ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 1);
    ftManagerSetupFilesAllKind(nFTKindLink);

    sMVOpeningCliffFighterAnimHeap = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);

    mvOpeningCliffMakeMainViewport();
    mvOpeningCliffMakeWallpaperViewport();
    mvOpeningCliffMakeWallpaper();
    mvOpeningCliffMakeHills();
    mvOpeningCliffMakeFighter();
    mvOpeningCliffMakeOcarina();

    scSubsysFighterSetLightParams(-45.0F, 25.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    while (func_8000092C() < 2500)
    {
        continue;
    }
}

// 0x80132674
void mvOpeningCliffStartScene(void)
{
    dMVOpeningCliffDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    func_80007024(&dMVOpeningCliffDisplaySetup);

    dMVOpeningCliffGtlSetup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl46_BSS_END);
    gsGTLSceneInit(&dMVOpeningCliffGtlSetup);
}
