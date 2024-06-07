#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningMarioVsKirby.h>

// ovl47 stuff
extern RldmFileId D_ovl47_801328D0[2];

extern scUnkDataBounds D_ovl47_80132908;
extern scRuntimeInfo D_ovl47_80132924;

uintptr_t gMvOpeningMarioVsKirbyAnimHeapMario; // 0x801329C8
uintptr_t gMvOpeningMarioVsKirbyAnimHeapKirby; // 0x801329CC
extern s32 gMvOpeningMarioVsKirbyFramesElapsed; // 0x801329D0
extern f32 gMvOpeningMarioVsKirbyBackgroundScrollSpeed; // 0x801329D4

extern s32 gMvOpeningMarioVsKirbyUnusedCounter; // 0x801329DC
extern rdFileNode D_ovl47_801329E0[48];
extern rdFileNode D_ovl47_80132B60[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningMarioVsKirbyFilesArray[2]; // 0x80132B98[2]
// gMvOpeningMarioVsKirbyFilesArray[0] - D_ovl47_80132B98; // file 0x045 pointer
// gMvOpeningMarioVsKirbyFilesArray[1] - D_ovl47_80132B9C; // file 0x046 pointer

// // Offsets
extern intptr_t FILE_045_STAGE_GEOMETRY_OFFSET = 0x1C10; // file 0x045 offset for stage geometry
extern intptr_t FILE_045_LIGHTNING_OFFSET_1 = 0x6140; // file 0x045 offset for lightning
extern intptr_t FILE_045_LIGHTNING_OFFSET_2 = 0x6950; // file 0x045 offset for lightning
extern intptr_t FILE_045_LIGHTNING_OFFSET_3 = 0x6BB8; // file 0x045 offset for lightning
extern intptr_t FILE_045_LIGHTNING_OFFSET_4 = 0x6D60; // file 0x045 offset for lightning
extern intptr_t FILE_045_CAMERA_PARAMETERS_OFFSET = 0x7250; // file 0x045 offset for camera parameters

extern intptr_t FILE_046_BACKGROUND_IMAGE_OFFSET = 0xB500; // file 0x046 offset for background image footer

// 0x80131B00
void mvOpeningMarioVsKirbySetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
void mvOpeningMarioVsKirbyCreateStageGeometry()
{
    GObj* temp_v0 = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    omAddDObjForGObj(temp_v0, GetAddressFromOffset(gMvOpeningMarioVsKirbyFilesArray[0], &FILE_045_STAGE_GEOMETRY_OFFSET));
    omAddOMMtxForDObjFixed(DObjGetStruct(temp_v0), 0x1C, 0);
    omAddGObjRenderProc(temp_v0, odRenderDObjDLHead0, 0x1A, 0x80000000, -1);

    DObjGetStruct(temp_v0)->translate.vec.f.x = 0.0f;
    DObjGetStruct(temp_v0)->translate.vec.f.y = 0.0f;
    DObjGetStruct(temp_v0)->translate.vec.f.z = 0.0f;
}

// 0x80131BF8 - Unused?
void func_ovl47_80131BF8()
{
    return;
}

// 0x80131C00
void mvOpeningMarioVsKirbyCreateFighters()
{
    GObj* fighter_gobj;
    ftCreateDesc spawn_info = dFTDefaultFighterDesc;

    spawn_info.ft_kind = Ft_Kind_Mario;
    spawn_info.costume = ftCostume_GetIndexFFA(Ft_Kind_Mario, 0);
    spawn_info.pos.x = 0.0f;
    spawn_info.pos.y = 0.0f;
    spawn_info.pos.z = 0.0f;
    spawn_info.anim_heap = gMvOpeningMarioVsKirbyAnimHeapMario;
    fighter_gobj = ftManagerMakeFighter(&spawn_info);

    func_ovl1_803905CC(fighter_gobj, 0x1000F);
    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;

    spawn_info.ft_kind = Ft_Kind_Kirby;
    spawn_info.costume = ftCostume_GetIndexFFA(Ft_Kind_Kirby, 0);
    spawn_info.pos.x = 0.0f;
    spawn_info.pos.y = 0.0f;
    spawn_info.pos.z = 0.0f;
    spawn_info.anim_heap = gMvOpeningMarioVsKirbyAnimHeapKirby;
    fighter_gobj = ftManagerMakeFighter(&spawn_info);

    func_ovl1_803905CC(fighter_gobj, 0x1000F);
    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 0x80131D38
void mvOpeningMarioVsKirbyScrollBackground(GObj* bg_gobj)
{
    SObj* bg_sobj = SObjGetStruct(bg_gobj);

    switch (gMvOpeningMarioVsKirbyFramesElapsed)
    {
        case 1:
            gMvOpeningMarioVsKirbyBackgroundScrollSpeed = 2.0F;
            break;
        case 90:
            gMvOpeningMarioVsKirbyBackgroundScrollSpeed = 8.0F;
            break;
        case 105:
            gMvOpeningMarioVsKirbyBackgroundScrollSpeed = 2.0F;
            break;
        case 180:
            gMvOpeningMarioVsKirbyBackgroundScrollSpeed = 8.0F;
            break;
        case 195:
            gMvOpeningMarioVsKirbyBackgroundScrollSpeed = 2.0F;
            break;
        case 280:
            gMvOpeningMarioVsKirbyBackgroundScrollSpeed = 2.0F;
            break;
        case 300:
            gMvOpeningMarioVsKirbyBackgroundScrollSpeed = 7.0F;
            break;
    }

    if ((gMvOpeningMarioVsKirbyFramesElapsed >= 281) && (gMvOpeningMarioVsKirbyFramesElapsed < 300))
    {
        gMvOpeningMarioVsKirbyBackgroundScrollSpeed += -0.05F;
    }

    if ((gMvOpeningMarioVsKirbyFramesElapsed >= 301) && (gMvOpeningMarioVsKirbyFramesElapsed < 320))
    {
        gMvOpeningMarioVsKirbyBackgroundScrollSpeed += 0.4F;
    }

    if (gMvOpeningMarioVsKirbyFramesElapsed >= 301)
    {
        bg_sobj->pos.y += gMvOpeningMarioVsKirbyBackgroundScrollSpeed;
    }
    else
    {
        bg_sobj->pos.x += gMvOpeningMarioVsKirbyBackgroundScrollSpeed;
        if (bg_sobj->pos.x > 320.0F)
        {
            bg_sobj->pos.x -= 320.0F;
        }
    }
    if (((gMvOpeningMarioVsKirbyFramesElapsed >= 91) && (gMvOpeningMarioVsKirbyFramesElapsed < 105)) ||
        ((gMvOpeningMarioVsKirbyFramesElapsed >= 181) && (gMvOpeningMarioVsKirbyFramesElapsed < 195)))
    {
        SObjGetNext(bg_sobj)->pos.x = bg_sobj->pos.x - 640.0F;
        SObjGetNext(bg_sobj)->pos.y = bg_sobj->pos.y;
        bg_sobj->sprite.scalex = 4.0F;
        bg_sobj->sprite.scaley = 4.0F;

        SObjGetNext(bg_sobj)->sprite.scalex = 4.0F;
        SObjGetNext(bg_sobj)->sprite.scaley = 4.0F;
        bg_sobj->pos.y = -240.0F;
    }
    else
    {
        SObjGetNext(bg_sobj)->pos.x = bg_sobj->pos.x - 320.0F;
        SObjGetNext(bg_sobj)->pos.y = bg_sobj->pos.y;
        bg_sobj->sprite.scalex = 2.0F;
        bg_sobj->sprite.scaley = 2.0F;

        SObjGetNext(bg_sobj)->sprite.scalex = 2.0F;
        SObjGetNext(bg_sobj)->sprite.scaley = 2.0F;

        if (gMvOpeningMarioVsKirbyFramesElapsed < 0x12C)
        {
            bg_sobj->pos.y = 0.0F;
        }
    }
}

// 0x80131FC8
void mvOpeningMarioVsKirbyCreateBackground()
{
    GObj* bg_gobj;
    SObj* bg_sobj;

    bg_gobj = omMakeGObjSPAfter(0, 0, 0x13, 0x80000000);
    omAddGObjRenderProc(bg_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);
    omAddGObjCommonProc(bg_gobj, mvOpeningMarioVsKirbyScrollBackground, 1, 1);

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMvOpeningMarioVsKirbyFilesArray[1], &FILE_046_BACKGROUND_IMAGE_OFFSET));
    bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    bg_sobj->sprite.scalex = 2.0F;
    bg_sobj->sprite.scaley = 2.0F;
    bg_sobj->pos.x = 0.0F;
    bg_sobj->pos.y = 0.0F;

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMvOpeningMarioVsKirbyFilesArray[1], &FILE_046_BACKGROUND_IMAGE_OFFSET));
    bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    bg_sobj->sprite.scalex = 2.0F;
    bg_sobj->sprite.scaley = 2.0F;
    bg_sobj->pos.x = 320.0F;
    bg_sobj->pos.y = 0.0F;
}

// 0x801320C0
void mvOpeningMarioVsKirbyCreateLightning()
{
    GObj* lightning_gobj;

    lightning_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    func_8000F590(lightning_gobj, GetAddressFromOffset(gMvOpeningMarioVsKirbyFilesArray[0], &FILE_045_LIGHTNING_OFFSET_2), 0, 0x1C, 0, 0);
    func_8000F8F4(lightning_gobj, GetAddressFromOffset(gMvOpeningMarioVsKirbyFilesArray[0], &FILE_045_LIGHTNING_OFFSET_1));
    func_8000BE28(lightning_gobj, GetAddressFromOffset(gMvOpeningMarioVsKirbyFilesArray[0], &FILE_045_LIGHTNING_OFFSET_3), 0.0F);
    omAddGObjRenderProc(lightning_gobj, odRenderDObjTreeDLLinksForGObj, 0x1A, 0x80000000, -1);

    DObjGetStruct(lightning_gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(lightning_gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(lightning_gobj)->translate.vec.f.z = 0.0F;

    func_8000BD8C(lightning_gobj, GetAddressFromOffset(gMvOpeningMarioVsKirbyFilesArray[0], &FILE_045_LIGHTNING_OFFSET_4), 0.0F);
    omAddGObjCommonProc(lightning_gobj, func_8000DF34, 1, 1);
}

// 0x801321D8
void mvOpeningMarioVsKirbyRenderLightningFlash(GObj* arg0)
{
    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetCycleType(gDisplayListHead[1]++, G_CYC_1CYCLE);

    if (((gMvOpeningMarioVsKirbyFramesElapsed >= 20) && (gMvOpeningMarioVsKirbyFramesElapsed < 23)) ||
        ((gMvOpeningMarioVsKirbyFramesElapsed >= 150) && (gMvOpeningMarioVsKirbyFramesElapsed < 153)) ||
        ((gMvOpeningMarioVsKirbyFramesElapsed >= 261) && (gMvOpeningMarioVsKirbyFramesElapsed < 264)))
    {
        gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, 255, 255, 255, 64);
    }
    else
    {
        gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, 255, 255, 255, 0);
    }

    gDPSetCombineLERP(gDisplayListHead[1]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[1]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132330 - Unused?
void func_ovl147_80132330() {
    return;
}

// 0x80132338
void mvOpeningMarioVsKirbyCreateLightningFlash()
{
    omAddGObjRenderProc(omMakeGObjSPAfter(0, 0, 0x12, 0x80000000), mvOpeningMarioVsKirbyRenderLightningFlash, 0x1C, 0x80000000, -1);
}

// 0x80132384
void mvOpeningMarioVsKirbyCreateLightningFlashViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132424 - Unused?
void func_ovl147_80132424() {
    return;
}

// 0x8013242C
void mvOpeningMarioVsKirbyCreateMainViewport()
{
    GObj* camera_gobj;
    Camera* cam;

    camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x04000200, -1, 1, 1, 0, 1, 0);
    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0f);
    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningMarioVsKirbyFilesArray[0], &FILE_045_CAMERA_PARAMETERS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x80132530
void mvOpeningMarioVsKirbyCreateBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x5A, 0x08000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801325D0
void mvOpeningMarioVsKirbyInitFramesElapsed()
{
    gMvOpeningMarioVsKirbyFramesElapsed = 0;
}

// 0x801325DC
void mvOpeningMarioVsKirbyMainProc(GObj* arg0)
{
    gMvOpeningMarioVsKirbyFramesElapsed += 1;

    if (gMvOpeningMarioVsKirbyFramesElapsed >= 10)
    {
        if (gMvOpeningMarioVsKirbyUnusedCounter != 0)
        {
            gMvOpeningMarioVsKirbyUnusedCounter -= 1;
        }

        if ((func_ovl1_80390A04(-15, 15) != 0) && (func_ovl1_80390AC0(-15, 15) != 0))
        {
            gMvOpeningMarioVsKirbyUnusedCounter = 0;
        }

        if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != 0)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 1;
            func_80005C74();
        }

        if (gMvOpeningMarioVsKirbyFramesElapsed == 320)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 0x2B;
            func_80005C74();
        }
    }
}

// 0x801326A8
void mvOpeningMarioVsKirbyInit()
{
    s32 foo;
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl47_801329E0;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl47_801329E0);
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl47_80132B60;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl47_80132B60);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl47_801328D0, ARRAY_COUNT(D_ovl47_801328D0), gMvOpeningMarioVsKirbyFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl47_801328D0, ARRAY_COUNT(D_ovl47_801328D0)), 0x10));

    omMakeGObjSPAfter(0, mvOpeningMarioVsKirbyMainProc, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 3, 0xFF);
    func_ovl2_80115890();
    mvOpeningMarioVsKirbyInitFramesElapsed();
    efManager_AllocUserData();
    ftManagerAllocFighter(1, 2);
    ftManagerSetupDataKind(Ft_Kind_Mario);
    ftManagerSetupDataKind(Ft_Kind_Kirby);

    gMvOpeningMarioVsKirbyAnimHeapMario = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    gMvOpeningMarioVsKirbyAnimHeapKirby = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    mvOpeningMarioVsKirbyCreateMainViewport();
    mvOpeningMarioVsKirbyCreateBackgroundViewport();
    mvOpeningMarioVsKirbyCreateLightningFlashViewport();
    mvOpeningMarioVsKirbyCreateBackground();
    mvOpeningMarioVsKirbyCreateFighters();
    mvOpeningMarioVsKirbyCreateStageGeometry();
    mvOpeningMarioVsKirbyCreateLightning();
    mvOpeningMarioVsKirbyCreateLightningFlash();
    func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    while (func_8000092C() < 3610U)
    {
        // sleep
    }
}

// intro_mario_vs_kirby_entry
void intro_mario_vs_kirby_entry()
{
    D_ovl47_80132908.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl47_80132908);
    D_ovl47_80132924.arena_size = (u32) ((uintptr_t)&lOverlay47ArenaHi - (uintptr_t)&lOverlay47ArenaLo);
    gsGTLSceneInit(&D_ovl47_80132924);
}
