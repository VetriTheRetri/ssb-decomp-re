#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningPikachuPokeball.h>

// ovl48 stuff
extern RldmFileId D_ovl48_801323A0[1];

extern scUnkDataBounds D_ovl48_801323D8;
extern scRuntimeInfo D_ovl48_801323F4;

uintptr_t gMvOpeningPikachuPokeballFighterAnimHeap; // 0x80132488
extern s32 gMvOpeningPikachuPokeballFramesElapsed; // 0x8013248C

extern GObj* gMvOpeningPikachuPokeballFighterGObj; // 0x80132494

extern s32 gMvOpeningPikachuPokeballUnusedCounter; // 0x8013249C
extern rdFileNode D_ovl48_801324A0[48];
extern rdFileNode D_ovl48_80132620[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningPikachuPokeballFilesArray[1]; // 0x80132658[1]
// gMvOpeningPikachuPokeballFilesArray[0] - D_ovl48_80132658; // file 0x047 pointer

// // Offsets
extern intptr_t FILE_047_LEGS_OFFSET_1 = 0x9548; // file 0x047 offset for legs
extern intptr_t FILE_047_LEGS_OFFSET_2 = 0x98C0; // file 0x047 offset for legs
extern intptr_t FILE_047_LEGS_SHADOW_OFFSET_1 = 0xB2B0; // file 0x047 offset for legs shadow
extern intptr_t FILE_047_LEGS_SHADOW_OFFSET_2 = 0xB390; // file 0x047 offset for legs shadow
extern intptr_t FILE_047_POKEBALL_OFFSET_1 = 0xC9E0; // file 0x047 offset for pokeball
extern intptr_t FILE_047_POKEBALL_OFFSET_2 = 0xCAC0; // file 0x047 offset for pokeball
extern intptr_t FILE_047_CAMERA_PARAMETERS_OFFSET = 0xD330; // file 0x047 offset for camera parameters
extern intptr_t FILE_047_BACKGROUND_IMAGE_OFFSET = 0x3EE58; // file 0x047 offset for background

// 0x80131B00
void mvOpeningPikachuPokeballSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
void mvOpeningPikachuPokeballCreateBackground()
{
    GObj* temp_v0;
    SObj* temp_v0_2;

    temp_v0 = omMakeGObjSPAfter(0, 0, 0x14, 0x80000000);
    omAddGObjRenderProc(temp_v0, func_ovl0_800CCF00, 0x1C, 0x80000000, -1);

    temp_v0_2 = gcAppendSObjWithSprite(temp_v0, GetAddressFromOffset(gMvOpeningPikachuPokeballFilesArray[1], &FILE_047_BACKGROUND_IMAGE_OFFSET));
    temp_v0_2->pos.x = 0.0F;
    temp_v0_2->pos.y = 0.0F;
}

// 0x80131BD4
void mvOpeningPikachuPokeballCreateFighter()
{
    GObj* fighter_gobj;
    ftCreateDesc spawn_info = dFTDefaultFighterDesc;

    spawn_info.ft_kind = Ft_Kind_Pikachu;
    spawn_info.costume = ftCostume_GetIndexFFA(Ft_Kind_Pikachu, 0);
    spawn_info.pos.x = 0.0F;
    spawn_info.pos.y = 0.0F;
    spawn_info.pos.z = 0.0F;
    spawn_info.anim_heap = gMvOpeningPikachuPokeballFighterAnimHeap;
    gMvOpeningPikachuPokeballFighterGObj = fighter_gobj = ftManager_MakeFighter(&spawn_info);

    func_ovl1_803905CC(fighter_gobj, 0x1000F);

    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 0x80131CA4
void mvOpeningPikachuPokeballCreateLegs()
{
    GObj* temp_v0 = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    func_8000F590(temp_v0, GetAddressFromOffset(gMvOpeningPikachuPokeballFilesArray[1], &FILE_047_LEGS_OFFSET_1), 0, 0x1C, 0, 0);
    omAddGObjRenderProc(temp_v0, odRenderDObjTreeForGObj, 0x1B, 0x80000000, -1);

    DObjGetStruct(temp_v0)->translate.vec.f.x = 0.0F;
    DObjGetStruct(temp_v0)->translate.vec.f.y = 0.0F;
    DObjGetStruct(temp_v0)->translate.vec.f.z = 0.0F;

    func_8000BD8C(temp_v0, GetAddressFromOffset(gMvOpeningPikachuPokeballFilesArray[1], &FILE_047_LEGS_OFFSET_2), 0.0F);
    omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);
}

// 0x80131D7C
void mvOpeningPikachuPokeballCreateLegsShadow()
{
    GObj* temp_v0 = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    func_8000F590(temp_v0, GetAddressFromOffset(gMvOpeningPikachuPokeballFilesArray[1], &FILE_047_LEGS_SHADOW_OFFSET_1), 0, 0x1C, 0, 0);
    omAddGObjRenderProc(temp_v0, odRenderDObjTreeDLLinksForGObj, 0x1B, 0x80000000, -1);

    DObjGetStruct(temp_v0)->translate.vec.f.x = 0.0F;
    DObjGetStruct(temp_v0)->translate.vec.f.y = 0.0F;
    DObjGetStruct(temp_v0)->translate.vec.f.z = 0.0F;

    func_8000BD8C(temp_v0, GetAddressFromOffset(gMvOpeningPikachuPokeballFilesArray[1], &FILE_047_LEGS_SHADOW_OFFSET_2), 0.0F);
    omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);
}

// 0x80131E54
void mvOpeningPikachuPokeballCreatePokeball()
{
    GObj* temp_v0 = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    func_8000F590(temp_v0, GetAddressFromOffset(gMvOpeningPikachuPokeballFilesArray[1], &FILE_047_POKEBALL_OFFSET_1), 0, 0x1C, 0, 0);
    omAddGObjRenderProc(temp_v0, odRenderDObjTreeDLLinksForGObj, 0x1B, 0x80000000, -1);

    DObjGetStruct(temp_v0)->translate.vec.f.x = 0.0F;
    DObjGetStruct(temp_v0)->translate.vec.f.y = 0.0F;
    DObjGetStruct(temp_v0)->translate.vec.f.z = 0.0F;

    func_8000BD8C(temp_v0, GetAddressFromOffset(gMvOpeningPikachuPokeballFilesArray[1], &FILE_047_POKEBALL_OFFSET_2), 0.0F);
    omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);
}

// 0x80131F2C
void mvOpeningPikachuPokeballCreateMainViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x50, 0x8000200, -1, 1, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningPikachuPokeballFilesArray[1], &FILE_047_CAMERA_PARAMETERS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x80132030
void mvOpeningPikachuPokeballCreateBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x5A, 0x10000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801320D0
void mvOpeningPikachuPokeballInitFramesElapsed()
{
    gMvOpeningPikachuPokeballFramesElapsed = 0;
}

// 0x801320DC
void mvOpeningPikachuPokeballMainProc(GObj* arg0)
{
    gMvOpeningPikachuPokeballFramesElapsed += 1;

    if (gMvOpeningPikachuPokeballFramesElapsed >= 10)
    {
        if (gMvOpeningPikachuPokeballUnusedCounter != 0)
        {
            gMvOpeningPikachuPokeballUnusedCounter -= 1;
        }

        if ((func_ovl1_80390A04(-15, 15) != 0) && (func_ovl1_80390AC0(-15, 15) != 0))
        {
            gMvOpeningPikachuPokeballUnusedCounter = 0;
        }

        if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != 0)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 1;
            func_80005C74();
        }

        if (gMvOpeningPikachuPokeballFramesElapsed == 160)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 0x2D;
            func_80005C74();
        }
    }
}

// 0x801321A8
void mvOpeningPikachuPokeballInit()
{
    s32 foo;
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl48_801324A0;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl48_801324A0);
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl48_80132620;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl48_80132620);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl48_801323A0, ARRAY_COUNT(D_ovl48_801323A0), gMvOpeningPikachuPokeballFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl48_801323A0, ARRAY_COUNT(D_ovl48_801323A0)), 0x10));

    omMakeGObjSPAfter(0, &mvOpeningPikachuPokeballMainProc, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 3, 0xFF);
    func_ovl2_80115890();
    mvOpeningPikachuPokeballInitFramesElapsed();
    efManager_AllocUserData();
    ftManager_AllocFighterData(1, 1);
    ftManager_SetFileDataKind(Ft_Kind_Pikachu);

    gMvOpeningPikachuPokeballFighterAnimHeap = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    mvOpeningPikachuPokeballCreateMainViewport();
    mvOpeningPikachuPokeballCreateBackgroundViewport();
    mvOpeningPikachuPokeballCreateBackground();
    mvOpeningPikachuPokeballCreateFighter();
    mvOpeningPikachuPokeballCreateLegs();
    mvOpeningPikachuPokeballCreateLegsShadow();
    mvOpeningPikachuPokeballCreatePokeball();
    func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    while (func_8000092C() < 2690U)
    {
        // sleep
    }
}

// intro_pika_pokeball_entry
void intro_pika_pokeball_entry()
{
    D_ovl48_801323D8.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl48_801323D8);
    D_ovl48_801323F4.arena_size = (u32) ((uintptr_t)&lOverlay48ArenaHi - (uintptr_t)&lOverlay48ArenaLo);
    gsGTLSceneInit(&D_ovl48_801323F4);
}
