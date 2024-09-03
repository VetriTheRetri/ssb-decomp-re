#include <ft/fighter.h>
#include <gr/ground.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <ovl0/reloc_data_mgr.h>

extern void leoInitUnit_atten();
extern u32 func_8000092C();
extern void func_800A26B8();
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
void *sMVOpeningYosterFighterAnimHeaps[4];

// 0x80132438
s32 sMVOpeningYosterTotalTimeTics;

// 0x8013243C
s32 sMVOpeningYosterUnused0x8013243C;

// 0x80132440
rdFileNode sMVOpeningYosterStatusBuf[48];

// 0x801325C0
rdFileNode sMVOpeningYosterForceBuf[7];

// 0x801325F8
void *sMVOpeningYosterFiles[2];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80132330
rdFileID dMVOpeningYosterFileIDs[/* */] = { &D_NF_00000043, &D_NF_0000005D };

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
void mvOpeningYosterProcLights(Gfx **dls)
{
    gSPSetGeometryMode(dls[0]++, G_LIGHTING);
    ftRenderLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
void mvOpeningYosterMakeNest(void)
{
    GObj *nest_gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);
    gcSetupCommonDObjs
    (
        nest_gobj,
        gcGetDataFromFile
        (
            DObjDesc*,
            sMVOpeningYosterFiles[0],
            &lMVOpeningYosterNestDObjDesc
        ),
        NULL
    );
    gcAddGObjDisplay(nest_gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_DLLINKORDER_DEFAULT, -1);

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
    ftCreateDesc ft_desc = dFTManagerDefaultFighterDesc;

    for (i = 0; i < (ARRAY_COUNT(sMVOpeningYosterFighterAnimHeaps) + ARRAY_COUNT(status_ids)) / 2; i++)
    {
        ft_desc.ft_kind = nFTKindYoshi;
        ft_desc.costume = ftParamGetCostumeCommonID(nFTKindYoshi, i);
        ft_desc.pos.x = 0.0F;
        ft_desc.pos.y = 0.0F;
        ft_desc.pos.z = 0.0F;
        ft_desc.anim_heap = sMVOpeningYosterFighterAnimHeaps[i];
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

    wallpaper_gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(wallpaper_gobj, func_ovl0_800CCF00, 28, GOBJ_DLLINKORDER_DEFAULT, -1);

    wallpaper_sobj = gcAppendSObjWithSprite
    (
        wallpaper_gobj,
        gcGetDataFromFile
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
    GObj *gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);
    gcSetupCommonDObjs
    (
        gobj,
        gcGetDataFromFile
        (
            DObjDesc*,
            sMVOpeningYosterFiles[0],
            &lMVOpeningYosterGroundDObjDesc
        ),
        NULL
    );
    gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_DLLINKORDER_DEFAULT, -1);

    DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

    gcAddAnimJointAll
    (
        gobj,
        gcGetDataFromFile
        (
            AObjEvent**,
            sMVOpeningYosterFiles[0],
            &lMVOpeningYosterGroundAnimJoint
        ),
        0.0F
    );
    gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);
}

// 0x80131E84
void mvOpeningYosterMakeMainViewport(void)
{
    GObj *camera_gobj = func_8000B93C
    (
        nOMObjCommonKindSceneCamera,
        NULL,
        16,
        GOBJ_LINKORDER_DEFAULT,
        func_80017EC0,
        80, 
        CAMERA_MASK_DLLINK(18) | CAMERA_MASK_DLLINK(15) |
        CAMERA_MASK_DLLINK(10) | CAMERA_MASK_DLLINK(9)  |
        CAMERA_MASK_DLLINK(6),
        -1,
        1,
        1,
        NULL,
        1,
        0
    );
    Camera *cam = CameraGetStruct(camera_gobj);

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;

    gcAddCameraCamAnimJoint
    (
        cam, 
        gcGetDataFromFile
        (
            AObjEvent*,
            sMVOpeningYosterFiles[0],
            &lMVOpeningYosterCamAnimJoint
        ),
        0.0F
    );
    gcAddGObjProcess(camera_gobj, gcPlayCamAnim, nOMObjProcessKindProc, 1);
    gcPlayCamAnim(camera_gobj);
}

// 0x80131F90
void mvOpeningYosterMakeWallpaperViewport(void)
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
            90,
            CAMERA_MASK_DLLINK(28),
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
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

            leoInitUnit_atten();
        }
        if (sMVOpeningYosterTotalTimeTics == 160)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindOpeningSector;

            leoInitUnit_atten();
        }
    }
}

// 0x80132108
void mvOpeningYosterProcStart(void)
{
    s32 i;
    rdSetup rd_setup;

    rd_setup.table_addr = (uintptr_t)&lRDManagerTableAddr;
    rd_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
    rd_setup.file_heap = NULL;
    rd_setup.file_heap_size = 0;
    rd_setup.status_buf = sMVOpeningYosterStatusBuf;
    rd_setup.status_buf_size = ARRAY_COUNT(sMVOpeningYosterStatusBuf);
    rd_setup.force_buf = sMVOpeningYosterForceBuf;
    rd_setup.force_buf_size = ARRAY_COUNT(sMVOpeningYosterForceBuf);

    rdManagerInitSetup(&rd_setup);
    rdManagerLoadFiles
    (
        dMVOpeningYosterFileIDs,
        ARRAY_COUNT(dMVOpeningYosterFileIDs),
        sMVOpeningYosterFiles,
        gsMemoryAlloc
        (
            rdManagerGetAllocSize
            (
                dMVOpeningYosterFileIDs,
                ARRAY_COUNT(dMVOpeningYosterFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mvOpeningYosterMainProc, 0, GOBJ_LINKORDER_DEFAULT);
    func_8000B9FC(0, 0x80000000, 0x64, 1, 0);

    efAllocInitParticleBank();
    mvOpeningYosterInitTotalTimeTics();
    efManagerInitEffects();
    ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 4);
    ftManagerSetupFilesAllKind(nFTKindYoshi);

    for (i = 0; i < ARRAY_COUNT(sMVOpeningYosterFighterAnimHeaps); i++)
    {
        sMVOpeningYosterFighterAnimHeaps[i] = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);
    }
    mvOpeningYosterMakeMainViewport();
    mvOpeningYosterMakeWallpaperViewport();
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
syDisplaySetup dMVOpeningYosterDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x80132394
scRuntimeInfo dMVOpeningYosterGtlSetup =
{
    0x00000000,
	func_8000A5E4,
	func_8000A340,
	&ovl45_BSS_END,
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
	mvOpeningYosterProcLights,
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
	mvOpeningYosterProcStart
};

// 0x801322CC
void mvOpeningYosterStartScene(void)
{
    dMVOpeningYosterDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    func_80007024(&dMVOpeningYosterDisplaySetup);

    dMVOpeningYosterGtlSetup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl45_BSS_END);
    gsGTLSceneInit(&dMVOpeningYosterGtlSetup);
}