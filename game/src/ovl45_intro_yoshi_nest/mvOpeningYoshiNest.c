#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningYoshiNest.h>

// ovl45 stuff
extern RldmFileId D_ovl45_80132330[2];

extern s32 dMvOpeningYoshiNestFighterAnims[4]; // 0x80132368
extern scUnkDataBounds D_ovl45_80132378;
extern scRuntimeInfo D_ovl45_80132394;

uintptr_t gMvOpeningYoshiNestFighterAnimHeaps[4]; // 0x80132428
extern s32 gMvOpeningYoshiNestFramesElapsed; // 0x80132438
extern s32 gMvOpeningYoshiNestUnusedCounter; // 0x8013243C

extern rdFileNode D_ovl45_80132440[48];
extern rdFileNode D_ovl45_801325C0[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningYoshiNestFilesArray[2]; // 0x801325F8[2]
// gMvOpeningYoshiNestFilesArray[0] - D_ovl45_801325F8; // file 0x043 pointer
// gMvOpeningYoshiNestFilesArray[1] - D_ovl45_801325FC; // file 0x05D pointer

// Offsets
extern intptr_t FILE_043_NEST_IMAGE_OFFSET = 0x9808; // file 0x043 offset for Yoshi's Nest image footer
extern intptr_t FILE_043_STAGE_OBJECTS_OFFSET_1 = 0xB990; // file 0x043 offset for Yoshi's Nest stage objects (clouds, eggs, bg elements)
extern intptr_t FILE_043_STAGE_OBJECTS_OFFSET_2 = 0xBF70; // file 0x043 offset for Yoshi's Nest stage objects (clouds, eggs, bg elements)
extern intptr_t FILE_043_CAMERA_PARAMETERS_OFFSET = 0xC940; // file 0x043 offset for camera parameters

extern intptr_t FILE_05D_YOSHI_BACKGROUND_IMAGE_OFFSET = 0x26C88; // file 0x05D offset for Yoshi's Island background image footer

// 0x80131B00
void mvOpeningYoshiNestSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
void mvOpeningYoshiNestCreateNest()
{
    GObj* nest_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    func_8000F120(nest_gobj, GetAddressFromOffset(gMvOpeningYoshiNestFilesArray[0], &FILE_043_NEST_IMAGE_OFFSET), 0);
    omAddGObjRenderProc(nest_gobj, odRenderDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
    DObjGetStruct(nest_gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(nest_gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(nest_gobj)->translate.vec.f.z = 0.0F;
}

// 0x80131BEC
void mvOpeningYoshiNestCreateFighters()
{
    GObj* fighter_gobj;
    s32 anims[4] = dMvOpeningYoshiNestFighterAnims;
    s32 i;
    ftCreateDesc spawn_info = dFTDefaultFighterDesc;

    for (i = 0; i < ARRAY_COUNT(dMvOpeningYoshiNestFighterAnims); i++)
    {
        spawn_info.ft_kind = Ft_Kind_Yoshi;
        spawn_info.costume = ftCostume_GetIndexFFA(Ft_Kind_Yoshi, i);
        spawn_info.pos.x = 0.0F;
        spawn_info.pos.y = 0.0F;
        spawn_info.pos.z = 0.0F;
        spawn_info.anim_heap = gMvOpeningYoshiNestFighterAnimHeaps[i];
        fighter_gobj = ftManager_MakeFighter(&spawn_info);

        func_ovl1_803905CC(fighter_gobj, anims[i]);

        DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0F;
        DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0F;
        DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0F;
    }
}

// 0x80131D38
void mvOpeningYoshiNestCreateBackground()
{
    GObj* bg_gobj;
    SObj* bg_sobj;

    bg_gobj = omMakeGObjCommon(0, 0, 0x14, 0x80000000);
    omAddGObjRenderProc(bg_gobj, func_ovl0_800CCF00, 0x1C, 0x80000000, -1);

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMvOpeningYoshiNestFilesArray[1], &FILE_05D_YOSHI_BACKGROUND_IMAGE_OFFSET));
    bg_sobj->pos.x = 10.0F;
    bg_sobj->pos.y = 10.0F;
}

// 0x80131DB8
void mvOpeningYoshiNestCreateStageObjects()
{
    GObj* temp_v0 = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    func_8000F120(temp_v0, GetAddressFromOffset(gMvOpeningYoshiNestFilesArray[0], &FILE_043_STAGE_OBJECTS_OFFSET_1), 0);
    omAddGObjRenderProc(temp_v0, &odRenderDObjTreeDLLinksForGObj, 6, 0x80000000, -1);

    DObjGetStruct(temp_v0)->translate.vec.f.x = 0.0F;
    DObjGetStruct(temp_v0)->translate.vec.f.y = 0.0F;
    DObjGetStruct(temp_v0)->translate.vec.f.z = 0.0F;

    func_8000BD8C(temp_v0, GetAddressFromOffset(gMvOpeningYoshiNestFilesArray[0], &FILE_043_STAGE_OBJECTS_OFFSET_2), 0.0F);
    omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);
}

// 0x80131E84
void mvOpeningYoshiNestCreateMainViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x50, 0x48640, -1, 1, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningYoshiNestFilesArray[0], &FILE_043_CAMERA_PARAMETERS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
    func_80010580(camera_gobj);
}

// 0x80131F90
void mvOpeningYoshiNestCreateBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x5A, 0x10000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132030
void mvOpeningYoshiNestInitFramesElapsed()
{
    gMvOpeningYoshiNestFramesElapsed = 0;
}

// 0x8013203C
void mvOpeningYoshiNestMainProc(s32 arg0)
{
    gMvOpeningYoshiNestFramesElapsed += 1;

    if (gMvOpeningYoshiNestFramesElapsed >= 10)
    {
        if (gMvOpeningYoshiNestUnusedCounter != 0)
        {
            gMvOpeningYoshiNestUnusedCounter -= 1;
        }
        if ((func_ovl1_80390A04(-0xF, 0xF) != 0) && (func_ovl1_80390AC0(-0xF, 0xF) != 0))
        {
            gMvOpeningYoshiNestUnusedCounter = 0;
        }
        if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != 0) {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 1U;
            func_80005C74();
        }
        if (gMvOpeningYoshiNestFramesElapsed == 160) {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 0x2C;
            func_80005C74();
        }
    }
}

// 0x80132108
void mvOpeningYoshiNestInit()
{
    s32 i;
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl45_80132440;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl45_80132440);
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl45_801325C0;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl45_801325C0);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl45_80132330, ARRAY_COUNT(D_ovl45_80132330), gMvOpeningYoshiNestFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl45_80132330, ARRAY_COUNT(D_ovl45_80132330)), 0x10));

    omMakeGObjCommon(0, mvOpeningYoshiNestMainProc, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 1, 0);
    func_ovl2_80115890();
    mvOpeningYoshiNestInitFramesElapsed();
    efManager_AllocUserData();
    ftManager_AllocFighterData(1, 4);
    ftManager_SetFileDataKind(Ft_Kind_Yoshi);

    for (i = 0; i < ARRAY_COUNT(gMvOpeningYoshiNestFighterAnimHeaps); i++)
    {
        gMvOpeningYoshiNestFighterAnimHeaps[i] = gsMemoryAlloc(D_ovl2_80130D9C, 0x10);
    }

    mvOpeningYoshiNestCreateMainViewport();
    mvOpeningYoshiNestCreateBackgroundViewport();
    mvOpeningYoshiNestCreateBackground();
    mvOpeningYoshiNestCreateNest();
    mvOpeningYoshiNestCreateStageObjects();
    mvOpeningYoshiNestCreateFighters();
    func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

   while (func_8000092C() < 3230U) {
       // sleep
   }
}

// intro_yoshi_nest_entry
void intro_yoshi_nest_entry()
{
    D_ovl45_80132378.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl45_80132378);
    D_ovl45_80132394.arena_size = (u32) ((uintptr_t)&lOverlay45ArenaHi - (uintptr_t)&lOverlay45ArenaLo);
    func_8000683C(&D_ovl45_80132394);
}