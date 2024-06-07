#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningRunning.h>

// ovl43 stuff
extern RldmFileId D_ovl44_801325D0[3];

s32 dMvOpeningRunningFighterKinds[8]; // 0x80132610
intptr_t dMvOpeningRunningFighterAnims[8]; // 0x80132630
extern scUnkDataBounds D_ovl44_80132650;
extern scRuntimeInfo D_ovl44_8013266C;

uintptr_t gMvOpeningRunningFighterAnimHeaps[8]; // 0x80132718
GObj* gMvOpeningRunningLinkFighterGObj; // 0x80132738
extern s32 gMvOpeningRunningFramesElapsed; // 0x8013273C
extern s32 gMvOpeningRunningUnusedCounter; // 0x80132740

extern rdFileNode D_ovl44_80132748[100];
extern rdFileNode D_ovl44_80132A68[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningRunningFilesArray[3]; // 0x80132AA0[3]
// gMvOpeningRunningFilesArray[0] - D_ovl44_80132AA0; // file 0x037 pointer
// gMvOpeningRunningFilesArray[1] - D_ovl44_80132AA4; // file 0x03C pointer
// gMvOpeningRunningFilesArray[2] - D_ovl44_80132AA8; // file 0x04B pointer

// // Offsets
extern intptr_t FILE_037_BACKGROUND_IMAGE_OFFSET = 0x58A0; // file 0x037 offset for scrolling background image

extern intptr_t FILE_03C_TRANSITION_GFX_CAMERA_PARAMS_OFFSET = 0x0; // file 0x03C offset for camera settings

extern intptr_t FILE_04B_TRANSITION_GFX_OFFSET_1 = 0x2AA8; // file 0x04B offset for transition gfx
extern intptr_t FILE_04B_TRANSITION_GFX_OFFSET_2 = 0x35F8; // file 0x04B offset for transition gfx
extern intptr_t FILE_04B_TRANSITION_GFX_OFFSET_3 = 0x3700; // file 0x04B offset for transition gfx

// 0x80131B00
void mvOpeningRunningSetupDisplayList(Gfx **dl)
{
    gSPSetGeometryMode(dl[0]++, G_LIGHTING);

    ftRender_Lights_DisplayLightReflect(dl, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
void mvOpeningRunningAnimateFighter(GObj* fighter_proxy_gobj)
{
    GObj* fighter_gobj = fighter_proxy_gobj->user_data.p;

    func_8000DF34(fighter_proxy_gobj);
    DObjGetStruct(fighter_gobj)->translate.vec.f.x = DObjGetStruct(fighter_proxy_gobj)->translate.vec.f.x;
    DObjGetStruct(fighter_gobj)->translate.vec.f.y = DObjGetStruct(fighter_proxy_gobj)->translate.vec.f.y;
    DObjGetStruct(fighter_gobj)->translate.vec.f.z = DObjGetStruct(fighter_proxy_gobj)->translate.vec.f.z;
    DObjGetStruct(fighter_gobj)->rotate.vec.f.x = DObjGetStruct(fighter_proxy_gobj)->rotate.vec.f.x;
    DObjGetStruct(fighter_gobj)->rotate.vec.f.y = DObjGetStruct(fighter_proxy_gobj)->rotate.vec.f.y;
    DObjGetStruct(fighter_gobj)->rotate.vec.f.z = DObjGetStruct(fighter_proxy_gobj)->rotate.vec.f.z;
}

// 0x80131BE8
void mvOpeningRunningCreateFighters()
{
    GObj* fighter_gobj;
    GObj* fighter_proxy_gobj;
    DObj* fighter_proxy_dobj;
    s32 i;
    s32 ftKinds[8] = dMvOpeningRunningFighterKinds;
    intptr_t offsets[8] = dMvOpeningRunningFighterAnims;

    for (i = 0; i < ARRAY_COUNT(dMvOpeningRunningFighterKinds); i++)
    {
        ftCreateDesc spawn_info = dFTDefaultFighterDesc;
        spawn_info.ft_kind = ftKinds[i];
        spawn_info.costume = ftCostume_GetIndexFFA(ftKinds[i], 0);
        spawn_info.pos.x = 0.0F;
        spawn_info.pos.y = 0.0F;
        spawn_info.pos.z = 0.0F;
        spawn_info.anim_heap = gMvOpeningRunningFighterAnimHeaps[i];
        fighter_gobj = fighter_proxy_gobj = ftManagerMakeFighter(&spawn_info);

        if (ftKinds[i] == Ft_Kind_Link)
        {
            gMvOpeningRunningLinkFighterGObj = fighter_proxy_gobj;
        }

        func_ovl1_803905CC(fighter_proxy_gobj, 0x10006);

        fighter_proxy_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
        fighter_proxy_gobj->user_data.p = fighter_gobj;

        fighter_proxy_dobj = omAddDObjForGObj(fighter_proxy_gobj, NULL);
        omAddOMMtxForDObjFixed(fighter_proxy_dobj, 0x1C, 0);
        omAddDObjAnimAll(fighter_proxy_dobj, GetAddressFromOffset(gMvOpeningRunningFilesArray[0], offsets[i]), 0.0F);

        omAddGObjCommonProc(fighter_proxy_gobj, mvOpeningRunningAnimateFighter, 1, 1);
        func_8000DF34(fighter_proxy_gobj);
    }
}

// 0x80131E28
void mvOpeningRunningScrollBackground(GObj* arg0)
{
    SObj* temp_v0;

    temp_v0 = SObjGetStruct(arg0);
    temp_v0->pos.x = temp_v0->pos.x + 30.0F;

    if (temp_v0->pos.x > 0.0F)
    {
        temp_v0->pos.x += -320.0F;
    }

    SObjGetNext(temp_v0)->pos.x = temp_v0->pos.x + 320.0F;
}

// 0x80131E88
void mvOpeningRunningCreateBackground()
{
    GObj* bg_gobj;
    SObj* left_bg_sobj;
    SObj* right_bg_sobj;

    bg_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    omAddGObjRenderProc(bg_gobj, func_ovl0_800CCF00, 0x1C, 0x80000000, -1);

    left_bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMvOpeningRunningFilesArray[0], &FILE_037_BACKGROUND_IMAGE_OFFSET));
    left_bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    left_bg_sobj->sprite.scalex = 2.0f;
    left_bg_sobj->sprite.scaley = 2.0f;
    left_bg_sobj->pos.x = -320.0f;
    left_bg_sobj->pos.y = 0.0f;

    right_bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMvOpeningRunningFilesArray[0], &FILE_037_BACKGROUND_IMAGE_OFFSET));
    right_bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    right_bg_sobj->sprite.scalex = 2.0f;
    right_bg_sobj->sprite.scaley = 2.0f;
    right_bg_sobj->pos.x = 0.0f;
    right_bg_sobj->pos.y = 0.0f;

    omAddGObjCommonProc(bg_gobj, mvOpeningRunningScrollBackground, 1, 1);
}

// 0x80131F80
void mvOpeningRunningCreateTransitionGfx()
{
    GObj* gfx_gobj = omMakeGObjSPAfter(0, 0, 0x13, 0x80000000);
    func_8000F120(gfx_gobj, GetAddressFromOffset(gMvOpeningRunningFilesArray[2], &FILE_04B_TRANSITION_GFX_OFFSET_2), 0);
    omAddGObjRenderProc(gfx_gobj, odRenderDObjTreeForGObj, 6, 0x80000000, -1);

    DObjGetStruct(gfx_gobj)->translate.vec.f.x = 960.0f;
    DObjGetStruct(gfx_gobj)->translate.vec.f.y = 360.0f;
    DObjGetStruct(gfx_gobj)->translate.vec.f.z = -13.5f;
    DObjGetStruct(gfx_gobj)->rotate.vec.f.y = HALF_PI32;
    DObjGetStruct(gfx_gobj)->scale.vec.f.x = 0.9F;
    DObjGetStruct(gfx_gobj)->scale.vec.f.y = 0.9F;
    DObjGetStruct(gfx_gobj)->scale.vec.f.z = 0.9F;

    func_8000F8F4(gfx_gobj, GetAddressFromOffset(gMvOpeningRunningFilesArray[2], &FILE_04B_TRANSITION_GFX_OFFSET_1));
    func_8000BE28(gfx_gobj, GetAddressFromOffset(gMvOpeningRunningFilesArray[2], &FILE_04B_TRANSITION_GFX_OFFSET_3), 0);
    omAddGObjCommonProc(gfx_gobj, func_8000DF34, 1, 1);
    func_8000DF34(gfx_gobj);
}

// 0x801320B4
void mvOpeningRunningConfigureTransitionGfxViewport(GObj* camera_gobj)
{
    Camera* cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningRunningFilesArray[1], &FILE_03C_TRANSITION_GFX_CAMERA_PARAMS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x80132138
void mvOpeningRunningCreateTransitionGfxViewport()
{
    mvOpeningRunningConfigureTransitionGfxViewport(func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x3C, 0x48640, -1, 1, 1, 0, 1, 0));
}

// 0x801321BC
void mvOpeningRunningCreateBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x10000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013225C
void mvOpeningRunningInitFramesElapsed()
{
    gMvOpeningRunningFramesElapsed = 0;
}

// 0x80132268
void mvOpeningRunningMainProc(s32 arg0)
{
    gMvOpeningRunningFramesElapsed += 1;

    if (gMvOpeningRunningFramesElapsed >= 10)
    {
        if (gMvOpeningRunningUnusedCounter != 0)
        {
            gMvOpeningRunningUnusedCounter -= 1;
        }

        if ((func_ovl1_80390A04(-0xF, 0xF) != 0) && (func_ovl1_80390AC0(-0xF, 0xF) != 0))
        {
            gMvOpeningRunningUnusedCounter = 0;
        }

        if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != 0)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 1;
            func_80005C74();
        }

        if (gMvOpeningRunningFramesElapsed == 45)
        {
            func_ovl1_803905CC(gMvOpeningRunningLinkFighterGObj, 0x10007);
        }

        if (gMvOpeningRunningFramesElapsed == 190)
        {
            mvOpeningRunningCreateTransitionGfx();
            func_800269C0(1);
        }

        if (gMvOpeningRunningFramesElapsed == 220)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 0x28;
            func_80005C74();
        }
    }
}

// 0x8013237C
void mvOpeningRunningInit()
{
    s32 i;
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = D_ovl44_80132748;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl44_80132748);
    rldmSetup.forceBuf = D_ovl44_80132A68;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl44_80132A68);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl44_801325D0, ARRAY_COUNT(D_ovl44_801325D0), gMvOpeningRunningFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl44_801325D0, ARRAY_COUNT(D_ovl44_801325D0)), 0x10));

    omMakeGObjSPAfter(0, mvOpeningRunningMainProc, 0, 0x80000000);

    func_8000B9FC(0, 0x80000000, 0x64, 1, 0);

    func_ovl2_80115890();
    mvOpeningRunningInitFramesElapsed();

    efManager_AllocUserData();
    ftManagerAllocFighter(1, 8);
    ftManagerSetupDataKind(Ft_Kind_Mario);
    ftManagerSetupDataKind(Ft_Kind_Fox);
    ftManagerSetupDataKind(Ft_Kind_Donkey);
    ftManagerSetupDataKind(Ft_Kind_Samus);
    ftManagerSetupDataKind(Ft_Kind_Link);
    ftManagerSetupDataKind(Ft_Kind_Yoshi);
    ftManagerSetupDataKind(Ft_Kind_Kirby);
    ftManagerSetupDataKind(Ft_Kind_Pikachu);

    for (i = 0; i < ARRAY_COUNT(gMvOpeningRunningFighterAnimHeaps); i++)
    {
        gMvOpeningRunningFighterAnimHeaps[i] = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    }

    mvOpeningRunningCreateTransitionGfxViewport();
    mvOpeningRunningCreateBackgroundViewport();
    mvOpeningRunningCreateBackground();
    mvOpeningRunningCreateFighters();

    func_ovl1_803904E0(45.0F, 10.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    while (func_8000092C() < 0x8CAU)
    {
        // sleep
    }
}

// intro_chars_running_entry
void intro_chars_running_entry()
{
    D_ovl44_80132650.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl44_80132650);
    D_ovl44_8013266C.arena_size = (u32) ((uintptr_t)&lOverlay44ArenaHi - (uintptr_t)&lOverlay44ArenaLo);
    gsGTLSceneInit(&D_ovl44_8013266C);
}
