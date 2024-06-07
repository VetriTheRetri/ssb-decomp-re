#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningKickEntry.h>

// ovl49 stuff
extern RldmFileId D_ovl49_801328D0[2];

extern s32 dMvOpeningKickEntryFighterKinds[8]; // 0x80132908
extern scUnkDataBounds D_ovl49_80132928;
extern scRuntimeInfo D_ovl49_80132944;

uintptr_t gMvOpeningKickEntryFighterAnimHeaps[8]; // 0x801329D8

extern s32 gMvOpeningKickEntryFramesElapsed; // 0x80132A08
extern s32 gMvOpeningKickEntryWhiteOverlayAlpha; // 0x80132A0C
extern s32 gMvOpeningKickEntryUnusedCounter; // 0x80132A10

extern rdFileNode D_ovl49_80132A18[100];
extern rdFileNode D_ovl49_80132D38[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningKickEntryFilesArray[2]; // 0x80132D70[2]
// gMvOpeningKickEntryFilesArray[0] - D_ovl49_80132D70; // file 0x048 pointer
// gMvOpeningKickEntryFilesArray[1] - D_ovl49_80132D74; // file 0x042 pointer

// Offsets
extern intptr_t FILE_048_CAMERA_PARAMETERS_OFFSET = 0x1440; // file 0x042 offset for camera parameters

extern intptr_t FILE_042_CAMERA_PARAMETERS_OFFSET = 0x4AB0; // file 0x042 offset for camera parameters
extern intptr_t FILE_042_BACKGROUND_LOWER_LEFT_OFFSET_1 = 0x3050; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_LOWER_LEFT_OFFSET_2 = 0x32A8; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_LOWER_LEFT_OFFSET_3 = 0x3458; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_LOWER_LEFT_OFFSET_4 = 0x36D0; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_LOWER_RIGHT_OFFSET_1 = 0x36E0; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_LOWER_RIGHT_OFFSET_2 = 0x3938; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_LOWER_RIGHT_OFFSET_3 = 0x3AE8; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_LOWER_RIGHT_OFFSET_4 = 0x3D60; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_UPPER_LEFT_OFFSET_1 = 0x3D70; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_UPPER_LEFT_OFFSET_2 = 0x3FC8; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_UPPER_LEFT_OFFSET_3 = 0x4180; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_UPPER_LEFT_OFFSET_4 = 0x4400; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_UPPER_RIGHT_OFFSET_1 = 0x4410; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_UPPER_RIGHT_OFFSET_2 = 0x4668; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_UPPER_RIGHT_OFFSET_3 = 0x4820; // file 0x042 offset for background quadrant
extern intptr_t FILE_042_BACKGROUND_UPPER_RIGHT_OFFSET_4 = 0x4AA0; // file 0x042 offset for background quadrant

// 0x80131B00
void mvOpeningKickEntrySetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58 - Unused?
void func_ovl49_80131B58()
{
    return;
}

// 0x80131B60
void mvOpeningKickEntryCreateFighters()
{
    GObj* fighter_gobj;
    s32 ft_kinds[8] = dMvOpeningKickEntryFighterKinds;
    s32 i;
    ftCreateDesc spawn_info = dFTDefaultFighterDesc;

    for (i = 0; i < ARRAY_COUNT(gMvOpeningKickEntryFighterAnimHeaps); i++)
    {
        spawn_info.ft_kind = ft_kinds[i];
        spawn_info.costume = ftCostume_GetIndexFFA(ft_kinds[i], 0);
        spawn_info.pos.x = 0.0F;
        spawn_info.pos.y = 0.0F;
        spawn_info.pos.z = 0.0F;
        spawn_info.anim_heap = gMvOpeningKickEntryFighterAnimHeaps[i];
        fighter_gobj = ftManagerMakeFighter(&spawn_info);

        func_ovl1_803905CC(fighter_gobj, 0x1000B);

        DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0F;
        DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0F;
        DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0F;
    }
}

// 0x80131CCC
void func_ovl49_80131CCC(GObj* arg0)
{
    if (gMvOpeningKickEntryWhiteOverlayAlpha < 0xFF)
    {
        gMvOpeningKickEntryWhiteOverlayAlpha += 0x1E;

        if (gMvOpeningKickEntryWhiteOverlayAlpha >= 0x100)
        {
            gMvOpeningKickEntryWhiteOverlayAlpha = 0xFF;
        }
    }

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 255, 255, 255, gMvOpeningKickEntryWhiteOverlayAlpha);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80131E08
void mvOpeningKickEntryCreateWhiteOverlay()
{
    gMvOpeningKickEntryWhiteOverlayAlpha = 0;
    omAddGObjRenderProc(omMakeGObjSPAfter(0, 0, 0x12, 0x80000000), func_ovl49_80131CCC, 0x1A, 0x80000000, -1);
}

// 0x80131E5C
void mvOpeningKickEntryCreateBackground()
{
    GObj* temp_v0;

    // lower left quadrant
    temp_v0 = omMakeGObjSPAfter(0, 0, 0x14, 0x80000000);
    omAddGObjRenderProc(temp_v0, odRenderDObjDLHead0, 0x1D, 0x80000000, -1);
    omAddOMMtxForDObjFixed(omAddDObjForGObj(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_LOWER_LEFT_OFFSET_2)), 0x1C, 0);
    func_8000F8F4(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_LOWER_LEFT_OFFSET_1));
    func_8000BE28(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_LOWER_LEFT_OFFSET_3), 0.0F);

    DObjGetStruct(temp_v0)->translate.vec.f.x = 0.0f;
    DObjGetStruct(temp_v0)->translate.vec.f.y = 0.0f;
    DObjGetStruct(temp_v0)->translate.vec.f.z = 0.0f;

    func_8000BD8C(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_LOWER_LEFT_OFFSET_4), 0.0F);
    omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);

    // lower right quadrant
    temp_v0 = omMakeGObjSPAfter(0, 0, 0x14, 0x80000000);
    omAddGObjRenderProc(temp_v0, odRenderDObjDLHead0, 0x1D, 0x80000000, -1);
    omAddOMMtxForDObjFixed(omAddDObjForGObj(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_LOWER_RIGHT_OFFSET_2)), 0x1C, 0);
    func_8000F8F4(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_LOWER_RIGHT_OFFSET_1));
    func_8000BE28(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_LOWER_RIGHT_OFFSET_3), 0.0F);

    DObjGetStruct(temp_v0)->translate.vec.f.x = 0.0f;
    DObjGetStruct(temp_v0)->translate.vec.f.y = 0.0f;
    DObjGetStruct(temp_v0)->translate.vec.f.z = 0.0f;

    func_8000BD8C(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_LOWER_RIGHT_OFFSET_4), 0.0F);
    omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);

    // upper left quadrant
    temp_v0 = omMakeGObjSPAfter(0, 0, 0x14, 0x80000000);
    omAddGObjRenderProc(temp_v0, odRenderDObjDLHead0, 0x1D, 0x80000000, -1);
    omAddOMMtxForDObjFixed(omAddDObjForGObj(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_UPPER_LEFT_OFFSET_2)), 0x1C, 0);
    func_8000F8F4(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_UPPER_LEFT_OFFSET_1));
    func_8000BE28(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_UPPER_LEFT_OFFSET_3), 0.0F);

    DObjGetStruct(temp_v0)->translate.vec.f.x = 0.0f;
    DObjGetStruct(temp_v0)->translate.vec.f.y = 0.0f;
    DObjGetStruct(temp_v0)->translate.vec.f.z = 0.0f;

    func_8000BD8C(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_UPPER_LEFT_OFFSET_4), 0.0F);
    omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);

    // upper right quadrant
    temp_v0 = omMakeGObjSPAfter(0, 0, 0x14, 0x80000000);
    omAddGObjRenderProc(temp_v0, odRenderDObjDLHead0, 0x1D, 0x80000000, -1);
    omAddOMMtxForDObjFixed(omAddDObjForGObj(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_UPPER_RIGHT_OFFSET_2)), 0x1C, 0);
    func_8000F8F4(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_UPPER_RIGHT_OFFSET_1));
    func_8000BE28(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_UPPER_RIGHT_OFFSET_3), 0.0F);

    DObjGetStruct(temp_v0)->translate.vec.f.x = 0.0f;
    DObjGetStruct(temp_v0)->translate.vec.f.y = 0.0f;
    DObjGetStruct(temp_v0)->translate.vec.f.z = 0.0f;

    func_8000BD8C(temp_v0, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_BACKGROUND_UPPER_RIGHT_OFFSET_4), 0.0F);
    omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);
}

// 0x80132204
void mvOpeningKickEntryCreateFighterViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x3C, 0x08000200, -1, 1, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->flags |= 1;
    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[0], &FILE_048_CAMERA_PARAMETERS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x80132314
void mvOpeningKickEntryCreateWhiteOverlayViewport()
{
    Camera *cam;
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x28, 0x04000000, -1, 0, 1, 0, 1, 0);
    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->flags |= 1;
}

// 0x801323C8
void mvOpeningKickEntryRenderBackgroundViewport()
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);
    func_80017DBC();
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8013246C
void mvOpeningKickEntryCreateBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, mvOpeningKickEntryRenderBackgroundViewport, 0x5A, 0x20000000, -1, 1, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningKickEntryFilesArray[1], &FILE_042_CAMERA_PARAMETERS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x80132550
void mvOpeningKickEntryInitFramesElapsed()
{
    gMvOpeningKickEntryFramesElapsed = 0;
}

// 0x8013255C
void mvOpeningKickEntryMainProc(GObj* arg0)
{
    gMvOpeningKickEntryFramesElapsed += 1;

    if (gMvOpeningKickEntryFramesElapsed >= 10)
    {
        if (gMvOpeningKickEntryUnusedCounter != 0)
        {
            gMvOpeningKickEntryUnusedCounter -= 1;
        }

        if ((func_ovl1_80390A04(-15, 15) != 0) && (func_ovl1_80390AC0(-15, 15) != 0))
        {
            gMvOpeningKickEntryUnusedCounter = 0;
        }

        if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != 0)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 1;
            func_80005C74();
        }

        if (gMvOpeningKickEntryFramesElapsed == 0x90)
        {
            mvOpeningKickEntryCreateWhiteOverlay();
        }
        if (gMvOpeningKickEntryFramesElapsed == 0xA0)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 0x2E;
            func_80005C74();
        }
        if ((gMvOpeningKickEntryFramesElapsed == 0xF) || (gMvOpeningKickEntryFramesElapsed == 0x4B) || (gMvOpeningKickEntryFramesElapsed == 0x5A) || (gMvOpeningKickEntryFramesElapsed == 0x69))
        {
            func_800269C0(0x97);
        }
    }
}

// 0x8013267C
void mvOpeningKickEntryInit()
{
    s32 i;
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl49_80132A18;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl49_80132A18);
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl49_80132D38;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl49_80132D38);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl49_801328D0, ARRAY_COUNT(D_ovl49_801328D0), gMvOpeningKickEntryFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl49_801328D0, ARRAY_COUNT(D_ovl49_801328D0)), 0x10));

    omMakeGObjSPAfter(0, mvOpeningKickEntryMainProc, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 3, 0xFF);
    func_ovl2_80115890();
    mvOpeningKickEntryInitFramesElapsed();
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

    for (i = 0; i < ARRAY_COUNT(gMvOpeningKickEntryFighterAnimHeaps); i++)
    {
        gMvOpeningKickEntryFighterAnimHeaps[i] = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    }

    mvOpeningKickEntryCreateFighterViewport();
    mvOpeningKickEntryCreateWhiteOverlayViewport();
    mvOpeningKickEntryCreateBackgroundViewport();
    mvOpeningKickEntryCreateFighters();
    mvOpeningKickEntryCreateBackground();
    func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    while (func_8000092C() < 3975U) {
        // sleep
    }
}

// intro_sex_kicks_entry
void intro_sex_kicks_entry()
{
    D_ovl49_80132928.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl49_80132928);
    D_ovl49_80132944.arena_size = (u32) ((uintptr_t)&lOverlay49ArenaHi - (uintptr_t)&lOverlay49ArenaLo);
    gsGTLSceneInit(&D_ovl49_80132944);
}