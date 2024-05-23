#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningGreatFox.h>

// ovl50 stuff
extern RldmFileId D_ovl50_801328F0[3];

// extern s32 dMvOpeningGreatFoxFighterAnims[4]; // 0x80132368
extern scUnkDataBounds D_ovl50_8013293C;
extern scRuntimeInfo D_ovl50_80132958;

// uintptr_t gMvOpeningGreatFoxFighterAnimHeaps[4]; // 0x80132428
extern s32 gMvOpeningGreatFoxFramesElapsed; // 0x80132A18
extern GObj* gMvOpeningGreatFoxBackgroundGObj; // 0x80132A20

extern f32 gMvOpeningGreatFoxBackgroundScrollSpeedX; // 0x80132A34
extern f32 gMvOpeningGreatFoxBackgroundScrollSpeedY; // 0x80132A38

extern s32 gMvOpeningGreatFoxUnusedCounter; // 0x80132A40

extern rdFileNode D_ovl50_80132A48[48];
extern rdFileNode D_ovl50_80132BC8[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningGreatFoxFilesArray[3]; // 0x80132C00[3]
// gMvOpeningGreatFoxFilesArray[0] - D_ovl50_80132C00; // file 0x049 pointer
// gMvOpeningGreatFoxFilesArray[1] - D_ovl50_80132C04; // file 0x0A1 pointer
// gMvOpeningGreatFoxFilesArray[2] - D_ovl50_80132C08; // file 0x04A pointer

// // Offsets
// extern intptr_t FILE_043_NEST_IMAGE_OFFSET = 0x9808; // file 0x043 offset for Yoshi's Nest image footer
// extern intptr_t FILE_043_STAGE_OBJECTS_OFFSET_1 = 0xB990; // file 0x043 offset for Yoshi's Nest stage objects (clouds, eggs, bg elements)
// extern intptr_t FILE_043_STAGE_OBJECTS_OFFSET_2 = 0xBF70; // file 0x043 offset for Yoshi's Nest stage objects (clouds, eggs, bg elements)
extern intptr_t FILE_049_CAMERA_PARAMETERS_OFFSET = 0xF9A0; // file 0x049 offset for camera parameters

// extern intptr_t FILE_05D_YOSHI_BACKGROUND_IMAGE_OFFSET = 0x26C88; // file 0x05D offset for Yoshi's Island background image footer

// 0x80131B00
void mvOpeningGreatFoxSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
void mvOpeningGreatFoxScrollBackground(GObj* bg_gobj)
{
    SObj* bg_sobj = SObjGetStruct(bg_gobj);

    switch (gMvOpeningGreatFoxFramesElapsed)
    {
        case 1:
            gMvOpeningGreatFoxBackgroundScrollSpeedX = 6.0F;
            break;
        case 120:
            gMvOpeningGreatFoxBackgroundScrollSpeedX = 6.0F;
            break;
        case 140:
            gMvOpeningGreatFoxBackgroundScrollSpeedX = 2.0F;
            break;
        case 160:
            gMvOpeningGreatFoxBackgroundScrollSpeedX = 1.0F;
            break;
    }

    switch (gMvOpeningGreatFoxFramesElapsed)
    {
        case 1:
            gMvOpeningGreatFoxBackgroundScrollSpeedY = 1.0F;
            break;
        case 120:
            gMvOpeningGreatFoxBackgroundScrollSpeedY = 1; // yes, 1, not 1.0F
            break;
        case 160:
            gMvOpeningGreatFoxBackgroundScrollSpeedY = 3.0F;
            break;
    }

    if ((gMvOpeningGreatFoxFramesElapsed >= 2) && (gMvOpeningGreatFoxFramesElapsed < 120))
    {
        gMvOpeningGreatFoxBackgroundScrollSpeedX += 0.0F;
    }
    if ((gMvOpeningGreatFoxFramesElapsed >= 121) && (gMvOpeningGreatFoxFramesElapsed < 140))
    {
        gMvOpeningGreatFoxBackgroundScrollSpeedX += -0.2F;
    }
    if ((gMvOpeningGreatFoxFramesElapsed >= 141) && (gMvOpeningGreatFoxFramesElapsed < 160))
    {
        gMvOpeningGreatFoxBackgroundScrollSpeedX += -0.05F;
    }
    if ((gMvOpeningGreatFoxFramesElapsed >= 2) && (gMvOpeningGreatFoxFramesElapsed < 120))
    {
        gMvOpeningGreatFoxBackgroundScrollSpeedY += 0.0F;
    }
    if ((gMvOpeningGreatFoxFramesElapsed >= 121) && (gMvOpeningGreatFoxFramesElapsed < 160))
    {
        gMvOpeningGreatFoxBackgroundScrollSpeedY += 0.05F;
    }

    bg_sobj->pos.x += gMvOpeningGreatFoxBackgroundScrollSpeedX;
    if (bg_sobj->pos.x > 10.0F)
    {
        bg_sobj->pos.x -= 300.0F;
    }

    if (bg_sobj->pos.y < -220.0F)
    {
        bg_sobj->pos.y += 220.0F;
    }

    SObjGetNext(bg_sobj)->pos.x = bg_sobj->pos.x + 300.0F;
    SObjGetNext(bg_sobj)->pos.y = bg_sobj->pos.y;
    SObjGetNext(SObjGetNext(bg_sobj))->pos.x = bg_sobj->pos.x;
    SObjGetNext(SObjGetNext(bg_sobj))->pos.y = bg_sobj->pos.y + 220.0F;
    SObjGetNext(SObjGetNext(SObjGetNext(bg_sobj)))->pos.x = bg_sobj->pos.x + 300.0F;
    SObjGetNext(SObjGetNext(SObjGetNext(bg_sobj)))->pos.y = bg_sobj->pos.y + 220.0F;
}

// 0x80131DEC
void mvOpeningGreatFoxCreateBackground()
{
    GObj* bg_gobj;
    SObj* bg_sobj;

    gMvOpeningGreatFoxBackgroundGObj = bg_gobj = omMakeGObjCommon(0, 0, 0x14, 0x80000000);
    omAddGObjRenderProc(bg_gobj, func_ovl0_800CCF00, 0x1C, 0x80000000, -1);
    omAddGObjCommonProc(bg_gobj, mvOpeningGreatFoxScrollBackground, 1, 1);

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(D_ovl50_80132C08, &D_NF_00026C88));
    bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    bg_sobj->pos.x = 10.0f;
    bg_sobj->pos.y = 10.0f;

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(D_ovl50_80132C08, &D_NF_00026C88));
    bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    bg_sobj->pos.x = 310.0f;
    bg_sobj->pos.y = 10.0f;

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(D_ovl50_80132C08, &D_NF_00026C88));
    bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    bg_sobj->pos.x = 10.0f;
    bg_sobj->pos.y = 230.0f;

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(D_ovl50_80132C08, &D_NF_00026C88));
    bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    bg_sobj->pos.x = 310.0f;
    bg_sobj->pos.y = 230.0f;
}

// 0x80131F4C
void func_ovl50_80131F4C()
{
    GObj* temp_v0;

    D_ovl50_80132A1C = temp_v0 = omMakeGObjCommon(0, 0, 0x13, 0x80000000);

    func_8000F590(temp_v0, GetAddressFromOffset(gMvOpeningGreatFoxFilesArray[0], &D_NF_0000D820), 0, 0x1C, 0, 0);
    omAddGObjRenderProc(temp_v0, odRenderDObjTreeDLLinksForGObj, 0x1B, 0x80000000, -1);

    DObjGetStruct(temp_v0)->translate.vec.f.x = 0.0F;
    DObjGetStruct(temp_v0)->translate.vec.f.y = 0.0F;
    DObjGetStruct(temp_v0)->translate.vec.f.z = 0.0F;

    func_8000BD8C(temp_v0, GetAddressFromOffset(gMvOpeningGreatFoxFilesArray[0], &D_NF_0000DA10), 0.0F);
    omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);
}

// 0x8013202C
void func_ovl50_8013202C(GObj *arg0)
{
    SObj* temp_t3 = SObjGetStruct(arg0);

    if (D_ovl50_80132A3C < 0xFF)
    {
        D_ovl50_80132A3C += 9;

        if (D_ovl50_80132A3C >= 0x100)
        {
            D_ovl50_80132A3C = 0xFF;
        }
    }

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, D_ovl50_80132A3C);
    gDPSetEnvColor(gDisplayListHead[0]++, temp_t3->shadow_color.r, temp_t3->shadow_color.g, temp_t3->shadow_color.b, temp_t3->shadow_color.a);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, TEXEL0,  0, 0, 0, PRIMITIVE,  0, 0, 0, TEXEL0,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    func_ovl0_800CCF74(arg0);
}

// func_ovl50_8013215C

// 0x801321E0
void func_ovl50_801321E0()
{
    GObj* temp_v0;
    SObj* temp_v0_2;

    D_ovl50_80132A3C = 0;
    temp_v0 = omMakeGObjCommon(0, 0, 0x15, 0x80000000);
    omAddGObjRenderProc(temp_v0, &func_ovl50_8013202C, 0x1D, 0x80000000, -1);
    omAddGObjCommonProc(temp_v0, &func_ovl50_8013215C, 1, 1);

    temp_v0_2 = gcAppendSObjWithSprite(temp_v0, GetAddressFromOffset(gMvOpeningGreatFoxFilesArray[0], &D_NF_0003CC90));
    temp_v0_2->sprite.attr &= ~SP_FASTCOPY;
    temp_v0_2->sprite.attr |= SP_TRANSPARENT;
    temp_v0_2->sprite.scalex = 0.25f;
    temp_v0_2->sprite.scaley = 0.25f;
}

// 0x80132290
void func_ovl50_80132290()
{
    GObj* temp_v0;
    s32 sp68[3] = D_ovl50_80132930;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_ovl50_80132930); i++)
    {
        D_ovl50_80132A28[i] = temp_v0 = omMakeGObjCommon(0, 0, 0x13, 0x80000000);
        func_8000F590(temp_v0, GetAddressFromOffset(gMvOpeningGreatFoxFilesArray[1], &D_NF_00002C30), 0, 0x1C, 0, 0);
        omAddGObjRenderProc(temp_v0, odRenderDObjTreeDLLinksForGObj, 0x1B, 0x80000000, -1);
        func_8000BD8C(temp_v0, GetAddressFromOffset(gMvOpeningGreatFoxFilesArray[0], sp68[i]), 0.0F);
        omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);
    }
}

// 0x801323E0
void func_ovl50_801323E0(GObj* arg0)
{
    func_80010580(arg0);
}

// 0x80132400
void func_ovl50_80132400()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x28, 0x08000000, -1, 1, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 30000.0F;

    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningGreatFoxFilesArray[0], &FILE_049_CAMERA_PARAMETERS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_ovl50_801323E0, 1, 1);
}

// 0x80132500
void func_ovl50_80132500()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x5A, 0x10000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801325A0
void func_ovl50_801325A0()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x14, 0x20000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132640
void mvOpeningGreatFoxInitFramesElapsed()
{
    gMvOpeningGreatFoxFramesElapsed = 0;
}

// 0x8013264C
void mvOpeningGreatFoxMainProc(s32 arg0)
{
    s32 temp_v0;
    u8 temp_t0;
    u8 temp_t2;

    gMvOpeningGreatFoxFramesElapsed += 1;

    if (gMvOpeningGreatFoxFramesElapsed >= 10)
    {
        if (gMvOpeningGreatFoxUnusedCounter != 0)
        {
            gMvOpeningGreatFoxUnusedCounter -= 1;
        }

        if ((func_ovl1_80390A04(-15, 15) != 0) && (func_ovl1_80390AC0(-15, 15) != 0))
        {
            gMvOpeningGreatFoxUnusedCounter = 0;
        }

        if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != 0)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 1;
            func_80005C74();
        }

        if (gMvOpeningGreatFoxFramesElapsed == 120)
        {
            func_ovl50_801321E0();
        }

        if (gMvOpeningGreatFoxFramesElapsed == 160)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 0x29;
            func_80005C74();
        }
    }
}

// 0x80132738
void mvOpeningGreatFoxInit()
{
    s32 i;
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl50_80132A48;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl50_80132A48);
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl50_80132BC8;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl50_80132BC8);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl50_801328F0, ARRAY_COUNT(D_ovl50_801328F0), gMvOpeningGreatFoxFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl50_801328F0, ARRAY_COUNT(D_ovl50_801328F0)), 0x10));

    omMakeGObjCommon(0, &mvOpeningGreatFoxMainProc, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 1, 0);
    mvOpeningGreatFoxInitFramesElapsed();
    func_ovl50_80132400();
    func_ovl50_80132500();
    func_ovl50_801325A0();
    mvOpeningGreatFoxCreateBackground();
    func_ovl50_80131F4C();
    func_ovl50_80132290();
    func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    while (func_8000092C() < 0xD5CU)
    {
        // sleep
    }

    func_800269C0(0x94);
}

// intro_great_fox_entry
void intro_sex_kicks_entry()
{
    D_ovl50_8013293C.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl50_8013293C);
    D_ovl50_80132958.arena_size = (u32) ((uintptr_t)&lOverlay50ArenaHi - (uintptr_t)&lOverlay50ArenaLo);
    gsGTLSceneInit(&D_ovl50_80132958);
}