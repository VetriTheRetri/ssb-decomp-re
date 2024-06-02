#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningLinkHill.h>

// ovl46 stuff
extern RldmFileId D_ovl46_801326D0[2];

extern scUnkDataBounds D_ovl46_80132708;
extern scRuntimeInfo D_ovl46_80132724;

uintptr_t gMvOpeningLinkHillFighterAnimHeap; // 0x801327C8
extern s32 gMvOpeningLinkHillFramesElapsed; // 0x801327CC
extern GObj* gMvOpeningLinkHillOcarinaGObj; // 0x801327D0
extern GObj* gMvOpeningLinkHillFighterGObj; // 0x801327D4
extern f32 gMvOpeningLinkHillBackgroundScrollSpeed; // 0x801327D8
extern s32 gMvOpeningLinkHillUnusedCounter; // 0x801327DC
extern rdFileNode D_ovl46_801327E0[48];
extern rdFileNode D_ovl46_80132960[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningLinkHillFilesArray[2]; // 0x80132998[2]
// gMvOpeningLinkHillFilesArray[0] - D_ovl46_80132998; // file 0x044 pointer
// gMvOpeningLinkHillFilesArray[1] - D_ovl46_8013299C; // file 0x046 pointer

// Offsets
extern intptr_t FILE_044_HILL_OBJECT_OFFSET = 0x37A0; // file 0x044 offset for Link Hill's Hills
extern intptr_t FILE_044_OCARINA_OFFSET_1 = 0x67A0; // file 0x044 offset for Link Hill ocarina
extern intptr_t FILE_044_OCARINA_OFFSET_2 = 0x6850; // file 0x044 offset for Link Hill ocarina
extern intptr_t FILE_044_CAMERA_PARAMETERS_OFFSET = 0x8910; // file 0x044 offset for camera parameters

extern intptr_t FILE_046_BACKGROUND_IMAGE_OFFSET = 0xB500; // file 0x046 offset for background image footer

// 0x80131B00
void mvOpeningLinkHillSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
void mvOpeningLinkHillRenderHills(GObj* hills_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    odRenderDObjTreeForGObj(hills_gobj);

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80131C34
void mvOpeningLinkHillCreateHills()
{
    GObj* hills_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    func_8000F120(hills_gobj, GetAddressFromOffset(gMvOpeningLinkHillFilesArray[0], &FILE_044_HILL_OBJECT_OFFSET), 0);
    omAddGObjRenderProc(hills_gobj, mvOpeningLinkHillRenderHills, 0x1A, 0x80000000, -1);
}

// 0x80131CA4 - Unused?
void func_ovl46_80131CA4()
{
    return;
}

// 0x80131CAC
void mvOpeningLinkHillCreateFighter()
{
    GObj* fighter_gobj;
    ftCreateDesc spawn_info = dFTDefaultFighterDesc;

    spawn_info.ft_kind = Ft_Kind_Link;
    spawn_info.costume = ftCostume_GetIndexFFA(Ft_Kind_Link, 0);
    spawn_info.pos.x = 0.0F;
    spawn_info.pos.y = 0.0F;
    spawn_info.pos.z = 0.0F;
    spawn_info.anim_heap = gMvOpeningLinkHillFighterAnimHeap;
    gMvOpeningLinkHillFighterGObj = fighter_gobj = ftManager_MakeFighter(&spawn_info);

    func_ovl1_803905CC(fighter_gobj, 0x1000F);

    omMoveGObjDL(fighter_gobj, 0x1C, -1);

    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0F;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0F;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0F;
}

// 0x80131D8C
void mvOpeningLinkHillScrollBackground(GObj* arg0)
{
    SObj* temp_v0 = SObjGetStruct(arg0);

    switch (gMvOpeningLinkHillFramesElapsed)
    {
        case 1:
            gMvOpeningLinkHillBackgroundScrollSpeed = 15.0F;
            break;
        case 80:
            gMvOpeningLinkHillBackgroundScrollSpeed = 10.0F;
            break;
        case 90:
            gMvOpeningLinkHillBackgroundScrollSpeed = 6.0F;
            break;
        case 120:
            gMvOpeningLinkHillBackgroundScrollSpeed = 2.0F;
            break;
        case 180:
            gMvOpeningLinkHillBackgroundScrollSpeed = 0.0F;
            break;
    }

    if ((gMvOpeningLinkHillFramesElapsed >= 2) && (gMvOpeningLinkHillFramesElapsed < 80))
    {
        gMvOpeningLinkHillBackgroundScrollSpeed += -0.0632911F;
    }

    if ((gMvOpeningLinkHillFramesElapsed >= 81) && (gMvOpeningLinkHillFramesElapsed < 90))
    {
        gMvOpeningLinkHillBackgroundScrollSpeed += -2.0F / 5.0F;
    }

    if ((gMvOpeningLinkHillFramesElapsed >= 91) && (gMvOpeningLinkHillFramesElapsed < 120))
    {
        gMvOpeningLinkHillBackgroundScrollSpeed += -2.0F / 15.0F;
    }

    if ((gMvOpeningLinkHillFramesElapsed >= 121) && (gMvOpeningLinkHillFramesElapsed < 180))
    {
        gMvOpeningLinkHillBackgroundScrollSpeed += -1.0F / 30.0F;
    }

    temp_v0->pos.x -= gMvOpeningLinkHillBackgroundScrollSpeed;

    if (temp_v0->pos.x < -320.0F)
    {
        temp_v0->pos.x += 320.0F;
    }

    SObjGetNext(temp_v0)->pos.x = temp_v0->pos.x + 320.0F;
}

// 0x80131F2C
void mvOpeningLinkHillCreateBackground()
{
    GObj* bg_gobj;
    SObj* bg_sobj;

    bg_gobj = omMakeGObjCommon(0, 0, 0x12, 0x80000000);
    omAddGObjRenderProc(bg_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);
    omAddGObjCommonProc(bg_gobj, mvOpeningLinkHillScrollBackground, 1, 1);

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMvOpeningLinkHillFilesArray[1], &FILE_046_BACKGROUND_IMAGE_OFFSET));
    bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    bg_sobj->sprite.scalex = 2.0f;
    bg_sobj->sprite.scaley = 2.0f;
    bg_sobj->pos.x = 0.0f;
    bg_sobj->pos.y = 0.0f;

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMvOpeningLinkHillFilesArray[1], &FILE_046_BACKGROUND_IMAGE_OFFSET));
    bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    bg_sobj->sprite.scalex = 2.0f;
    bg_sobj->sprite.scaley = 2.0f;
    bg_sobj->pos.x = 320.0f;
    bg_sobj->pos.y = 0.0f;
}

// 0x80132024
void mvOpeningLinkHillCreateOcarina()
{
    GObj* ocarina_gobj;

    gMvOpeningLinkHillOcarinaGObj = ocarina_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    func_8000F590(ocarina_gobj, GetAddressFromOffset(gMvOpeningLinkHillFilesArray[0], &FILE_044_OCARINA_OFFSET_1), 0, 0x1C, 0, 0);
    omAddGObjRenderProc(ocarina_gobj, odRenderDObjTreeForGObj, 0x1A, 0x80000000, -1);

    DObjGetStruct(ocarina_gobj)->scale.vec.f.x = DObjGetStruct(gMvOpeningLinkHillFighterGObj)->scale.vec.f.x;
    DObjGetStruct(ocarina_gobj)->scale.vec.f.y = DObjGetStruct(gMvOpeningLinkHillFighterGObj)->scale.vec.f.y;
    DObjGetStruct(ocarina_gobj)->scale.vec.f.z = DObjGetStruct(gMvOpeningLinkHillFighterGObj)->scale.vec.f.z;

    func_8000BD8C(ocarina_gobj, GetAddressFromOffset(gMvOpeningLinkHillFilesArray[0], &FILE_044_OCARINA_OFFSET_2), 0);
    omAddGObjCommonProc(ocarina_gobj, func_8000DF34, 1, 1);
}

// 0x8013212C
void mvOpeningLinkHillMainCameraProc()
{
    func_80010580();
}

// 0x8013214C
void mvOpeningLinkHillCreateMainViewport()
{
    GObj* camera_gobj;
    Camera* cam;

    camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x04000000, -1, 0, 1, 0, 1, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 4, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 6, 0);

    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0f);
    cam->projection.persp.near = 128.0f;
    cam->projection.persp.far = 16384.0f;

    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningLinkHillFilesArray[0], &FILE_044_CAMERA_PARAMETERS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, mvOpeningLinkHillMainCameraProc, 1, 1);

    camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x46, 0x10000000, -1, 0, 1, 0, 1, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 4, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 6, 0);

    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0f);
    cam->projection.persp.near = 128.0f;
    cam->projection.persp.far = 16384.0f;

    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningLinkHillFilesArray[0], &FILE_044_CAMERA_PARAMETERS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, mvOpeningLinkHillMainCameraProc, 1, 1);
}

// 0x80132368
void mvOpeningLinkHillCreateBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x5A, 0x08000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132408
void mvOpeningLinkHillInitFramesElapsed()
{
    gMvOpeningLinkHillFramesElapsed = 0;
}

// 0x80132414
void mvOpeningLinkHillMainProc(GObj* arg0)
{
    gMvOpeningLinkHillFramesElapsed += 1;

    if (gMvOpeningLinkHillFramesElapsed >= 10)
    {
        if (gMvOpeningLinkHillUnusedCounter != 0)
        {
            gMvOpeningLinkHillUnusedCounter -= 1;
        }

        if ((func_ovl1_80390A04(-15, 15) != 0) && (func_ovl1_80390AC0(-15, 15) != 0))
        {
            gMvOpeningLinkHillUnusedCounter = 0;
        }

        if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != 0)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 1;
            func_80005C74();
        }

        if (gMvOpeningLinkHillFramesElapsed == 160)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 0x2A;
            func_80005C74();
        }
    }
}

// 0x801324E0
void mvOpeningLinkHillInit()
{
    s32 foo;
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl46_801327E0;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl46_801327E0);
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl46_80132960;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl46_80132960);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl46_801326D0, ARRAY_COUNT(D_ovl46_801326D0), gMvOpeningLinkHillFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl46_801326D0, ARRAY_COUNT(D_ovl46_801326D0)), 0x10));

    omMakeGObjCommon(0, mvOpeningLinkHillMainProc, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 1, 0);
    func_ovl2_80115890();
    mvOpeningLinkHillInitFramesElapsed();
    efManager_AllocUserData();
    ftManager_AllocFighterData(1, 1);
    ftManager_SetFileDataKind(Ft_Kind_Link);

    gMvOpeningLinkHillFighterAnimHeap = gsMemoryAlloc(D_ovl2_80130D9C, 0x10);
    mvOpeningLinkHillCreateMainViewport();
    mvOpeningLinkHillCreateBackgroundViewport();
    mvOpeningLinkHillCreateBackground();
    mvOpeningLinkHillCreateHills();
    mvOpeningLinkHillCreateFighter();
    mvOpeningLinkHillCreateOcarina();
    func_ovl1_803904E0(-45.0F, 25.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    while (func_8000092C() < 2500U)
    {
        // sleep
    }
}

// intro_link_hill_entry
void intro_link_hill_entry()
{
    D_ovl46_80132708.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl46_80132708);
    D_ovl46_80132724.arena_size = (u32) ((uintptr_t)&lOverlay46ArenaHi - (uintptr_t)&lOverlay46ArenaLo);
    func_8000683C(&D_ovl46_80132724);
}
