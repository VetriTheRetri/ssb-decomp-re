#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningHiddenChars.h>

// ovl52 stuff
extern RldmFileId D_ovl52_80132640[2];

extern scUnkDataBounds D_ovl52_80132678;
extern scRuntimeInfo D_ovl52_80132694;

extern s32 gMvOpeningHiddenCharsFramesElapsed; // 0x80132748
extern s32 gMvOpeningHiddenCharsOverlayAlpha; // 0x8013274C
extern u16 gMvOpeningHiddenCharsCharacterMask; // 0x80132750
extern s32 gMvOpeningHiddenCharsUnusedCounter; // 0x80132754
extern rdFileNode D_ovl52_80132758[48];
extern rdFileNode D_ovl52_801328D8[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningHiddenCharsFilesArray[2]; // 0x80132910[2]
// // gMvOpeningHiddenCharsFilesArray[0] - D_ovl52_80132910; // file 0x03D pointer
// // gMvOpeningHiddenCharsFilesArray[1] - D_ovl52_80132914; // file 0x03E pointer

// Offsets
extern intptr_t FILE_03D_PURIN_OFFSET = 0x5C28; // file 0x03D offset for Purin unlocked portrait
extern intptr_t FILE_03D_PURIN_ANIM_OFFSET = 0x5E44; // file 0x03D offset for Purin animation
extern intptr_t FILE_03D_PURIN_LOCKED_OFFSET = 0x203A8; // file 0x03D offset for Purin locked portrait

extern intptr_t FILE_03D_LUIGI_OFFSET = 0x1C838; // file 0x03D offset for Luigi unlocked portrait
extern intptr_t FILE_03D_LUIGI_ANIM_OFFSET = 0x1CE94; // file 0x03D offset for Luigi animation
extern intptr_t FILE_03D_LUIGI_LOCKED_OFFSET = 0x28C28; // file 0x03D offset for Luigi locked portrait

extern intptr_t FILE_03E_CAPTAIN_OFFSET = 0x1C238; // file 0x03E offset for Captain Falcon unlocked portrait
extern intptr_t FILE_03E_CAPTAIN_ANIM_OFFSET = 0x1C9D4; // file 0x03E offset for Captain Falcon animation
extern intptr_t FILE_03E_CAPTAIN_LOCKED_OFFSET = 0x355C0; // file 0x03E offset for Captain Falcon locked portrait

extern intptr_t FILE_03E_NESS_OFFSET = 0x2A448; // file 0x03E offset for Ness unlocked portrait
extern intptr_t FILE_03E_NESS_ANIM_OFFSET = 0x2A864; // file 0x03E offset for Ness animation
extern intptr_t FILE_03E_NESS_LOCKED_OFFSET = 0x3BAF8; // file 0x03E offset for Ness locked portrait

// 0x80131B00
void mvOpeningHiddenCharsSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
sb32 mvOpeningHiddenCharsIsLocked(s32 ft_kind)
{
    switch (ft_kind)
    {
        case Ft_Kind_Captain:
            return (gMvOpeningHiddenCharsCharacterMask & gmSaveChrMask(Ft_Kind_Captain)) ? FALSE : TRUE;
        case Ft_Kind_Ness:
            return (gMvOpeningHiddenCharsCharacterMask & gmSaveChrMask(Ft_Kind_Ness)) ? FALSE : TRUE;
        case Ft_Kind_Purin:
            return (gMvOpeningHiddenCharsCharacterMask & gmSaveChrMask(Ft_Kind_Purin)) ? FALSE : TRUE;
        case Ft_Kind_Luigi:
            return (gMvOpeningHiddenCharsCharacterMask & gmSaveChrMask(Ft_Kind_Luigi)) ? FALSE : TRUE;
        default:
            return FALSE;
    }
}

// 0x80131C28 - Unused?
void func_ovl52_80131C28()
{
    return;
}

// 0x80131C30 - Unused?
void func_ovl52_80131C30()
{
    return;
}

// 0x80131C38
void mvOpeningHiddenCreatePurin()
{
    GObj* char_gobj;
    DObj* char_dobj;

    char_gobj = omMakeGObjSPAfter(0, 0, 0x13, 0x80000000);

    if (mvOpeningHiddenCharsIsLocked(Ft_Kind_Purin) != FALSE)
    {
        char_dobj = omAddDObjForGObj(char_gobj, GetAddressFromOffset(gMvOpeningHiddenCharsFilesArray[0], &FILE_03D_PURIN_LOCKED_OFFSET));
    }
    else
    {
        char_dobj = omAddDObjForGObj(char_gobj, GetAddressFromOffset(gMvOpeningHiddenCharsFilesArray[0], &FILE_03D_PURIN_OFFSET));
    }

    omAddOMMtxForDObjFixed(char_dobj, 0x1C, 0);
    omAddGObjRenderProc(char_gobj, odRenderDObjDLHead1, 0x1B, 0x80000000, -1);
    omAddDObjAnimAll(char_dobj, GetAddressFromOffset(gMvOpeningHiddenCharsFilesArray[0], &FILE_03D_PURIN_ANIM_OFFSET), 0);
    omAddGObjCommonProc(char_gobj, func_8000DF34, 1, 1);
}

// 0x80131D28
void mvOpeningHiddenCreateCaptain()
{
    GObj* char_gobj;
    DObj* char_dobj;

    char_gobj = omMakeGObjSPAfter(0, 0, 0x13, 0x80000000);

    if (mvOpeningHiddenCharsIsLocked(Ft_Kind_Captain) != FALSE)
    {
        char_dobj = omAddDObjForGObj(char_gobj, GetAddressFromOffset(gMvOpeningHiddenCharsFilesArray[1], &FILE_03E_CAPTAIN_LOCKED_OFFSET));
    }
    else
    {
        char_dobj = omAddDObjForGObj(char_gobj, GetAddressFromOffset(gMvOpeningHiddenCharsFilesArray[1], &FILE_03E_CAPTAIN_OFFSET));
    }

    omAddOMMtxForDObjFixed(char_dobj, 0x1C, 0);
    omAddGObjRenderProc(char_gobj, odRenderDObjDLHead1, 0x1B, 0x80000000, -1);
    omAddDObjAnimAll(char_dobj, GetAddressFromOffset(gMvOpeningHiddenCharsFilesArray[1], &FILE_03E_CAPTAIN_ANIM_OFFSET), 0);
    omAddGObjCommonProc(char_gobj, func_8000DF34, 1, 1);
}

// 0x80131E18
void mvOpeningHiddenCreateLuigi()
{
    GObj* char_gobj;
    DObj* char_dobj;

    char_gobj = omMakeGObjSPAfter(0, 0, 0x13, 0x80000000);

    if (mvOpeningHiddenCharsIsLocked(Ft_Kind_Luigi) != FALSE)
    {
        char_dobj = omAddDObjForGObj(char_gobj, GetAddressFromOffset(gMvOpeningHiddenCharsFilesArray[0], &FILE_03D_LUIGI_OFFSET));
    }
    else
    {
        char_dobj = omAddDObjForGObj(char_gobj, GetAddressFromOffset(gMvOpeningHiddenCharsFilesArray[0], &FILE_03D_LUIGI_LOCKED_OFFSET));
    }

    omAddOMMtxForDObjFixed(char_dobj, 0x1C, 0);
    omAddGObjRenderProc(char_gobj, odRenderDObjDLHead1, 0x1B, 0x80000000, -1);
    omAddDObjAnimAll(char_dobj, GetAddressFromOffset(gMvOpeningHiddenCharsFilesArray[0], &FILE_03D_LUIGI_ANIM_OFFSET), 0);
    omAddGObjCommonProc(char_gobj, func_8000DF34, 1, 1);
}

// 0x80131F08
void mvOpeningHiddenCreateNess()
{
    GObj* char_gobj;
    DObj* char_dobj;

    char_gobj = omMakeGObjSPAfter(0, 0, 0x13, 0x80000000);

    if (mvOpeningHiddenCharsIsLocked(Ft_Kind_Ness) != FALSE)
    {
        char_dobj = omAddDObjForGObj(char_gobj, GetAddressFromOffset(gMvOpeningHiddenCharsFilesArray[1], &FILE_03E_NESS_LOCKED_OFFSET));
    }
    else
    {
        char_dobj = omAddDObjForGObj(char_gobj, GetAddressFromOffset(gMvOpeningHiddenCharsFilesArray[1], &FILE_03E_NESS_OFFSET));
    }

    omAddOMMtxForDObjFixed(char_dobj, 0x1C, 0);
    omAddGObjRenderProc(char_gobj, odRenderDObjDLHead1, 0x1B, 0x80000000, -1);
    omAddDObjAnimAll(char_dobj, GetAddressFromOffset(gMvOpeningHiddenCharsFilesArray[1], &FILE_03E_NESS_ANIM_OFFSET), 0);
    omAddGObjCommonProc(char_gobj, func_8000DF34, 1, 1);
}

// 0x80131FF8
void mvOpeningHiddenCreateCharacters()
{
    mvOpeningHiddenCreatePurin();
    mvOpeningHiddenCreateCaptain();
    mvOpeningHiddenCreateLuigi();
    mvOpeningHiddenCreateNess();
}

// 0x80132030
void mvOpeningHiddenRenderOverlay(GObj* arg0)
{
    if (gMvOpeningHiddenCharsOverlayAlpha < 0xFF)
    {
        gMvOpeningHiddenCharsOverlayAlpha += 0x28;

        if (gMvOpeningHiddenCharsOverlayAlpha >= 0x100)
        {
            gMvOpeningHiddenCharsOverlayAlpha = 0xFF;
        }
    }

    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetCycleType(gDisplayListHead[1]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, 0, 0, 0, gMvOpeningHiddenCharsOverlayAlpha);
    gDPSetCombineLERP(gDisplayListHead[1]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[1]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132164
void mvOpeningHiddenCreateOverlay()
{
    gMvOpeningHiddenCharsOverlayAlpha = 0;
    omAddGObjRenderProc(omMakeGObjSPAfter(0, 0, 0x12, 0x80000000), mvOpeningHiddenRenderOverlay, 0x1A, 0x80000000, -1);
}

// 0x801321B8
void mvOpeningHiddenCreateCharacterViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x28, 0x08000000, -1, 1, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->vec.eye.x = 45.361F;
    cam->vec.eye.y = 19.9159F;
    cam->vec.eye.z = 15494.2F;
    cam->vec.at.x = -109.736F;
    cam->vec.at.y = 257.727F;
    cam->vec.at.z = -14.9817F;
    cam->vec.up.x = 0.0F;
    cam->vec.up.y = 1.0F;
    cam->vec.up.z = 0.0F;
    cam->projection.persp.fovy = 2.86479F;
    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;
}

// 0x801322E8
void mvOpeningHiddenCreateOverlayViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x14, 0x04000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132388
void mvOpeningHiddenCharsInitGlobals()
{
    gMvOpeningHiddenCharsFramesElapsed = 0;
    gMvOpeningHiddenCharsCharacterMask = gSaveData.character_mask;
}

// 0x801323A4
void mvOpeningHiddenCharsMainProc(GObj* arg0)
{
    s32 temp_v0;

    gMvOpeningHiddenCharsFramesElapsed += 1;

    if (gMvOpeningHiddenCharsFramesElapsed >= 10)
    {
        if (gMvOpeningHiddenCharsUnusedCounter != 0)
        {
            gMvOpeningHiddenCharsUnusedCounter -= 1;
        }

        if ((func_ovl1_80390A04(-15, 15) != 0) && (func_ovl1_80390AC0(-15, 15) != 0))
        {
            gMvOpeningHiddenCharsUnusedCounter = 0;
        }

        if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != 0)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 1;
            func_80005C74();
        }

        if (gMvOpeningHiddenCharsFramesElapsed == 30)
        {
            mvOpeningHiddenCreateOverlay();
        }

        if (gMvOpeningHiddenCharsFramesElapsed == 40)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 1;
            func_80005C74();
        }
    }
}

// 0x80132490
void mvOpeningHiddenCharsInit()
{
    s32 foo;
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl52_80132758;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl52_80132758);
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl52_801328D8;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl52_801328D8);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl52_80132640, ARRAY_COUNT(D_ovl52_80132640), gMvOpeningHiddenCharsFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl52_80132640, ARRAY_COUNT(D_ovl52_80132640)), 0x10));

    omMakeGObjSPAfter(0, mvOpeningHiddenCharsMainProc, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 3, -1);
    mvOpeningHiddenCharsInitGlobals();
    mvOpeningHiddenCreateCharacterViewport();
    mvOpeningHiddenCreateOverlayViewport();
    mvOpeningHiddenCreateCharacters();
    func_ovl1_803904E0(0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
    func_800269C0(0x95);
    func_800269C0(0x1CF);

    while (func_8000092C() < 0x103BU) {
        // sleep
    }
}

// intro_hidden_chars_entry
void intro_hidden_chars_entry()
{
    D_ovl52_80132678.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl52_80132678);
    D_ovl52_80132694.arena_size = (u32) ((uintptr_t)&lOverlay52ArenaHi - (uintptr_t)&lOverlay52ArenaLo);
    gsGTLSceneInit(&D_ovl52_80132694);
}
