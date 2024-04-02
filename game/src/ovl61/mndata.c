#include <mn/menu.h>
#include <gm/gmsound.h>
#include <gm/battle.h>
#include <sys/obj_renderer.h>
#include <PR/gbi.h>
#include <PR/os.h>
#include <ovl0/reloc_data_mgr.h>

#define mnDataCheckGetOptionButtonInput(is_button, mask) mnCommonCheckGetOptionButtonInput(sMnDataOptionChangeWait, is_button, mask)

#define mnDataCheckGetOptionStickInputUD(stick_range, min, b) mnCommonCheckGetOptionStickInputUD(sMnDataOptionChangeWait, stick_range, min, b)

#define mnDataCheckGetOptionStickInputLR(stick_range, min, b) mnCommonCheckGetOptionStickInputLR(sMnDataOptionChangeWait, stick_range, min, b)

#define mnDataSetOptionChangeWaitP(is_button, stick_range, div) mnCommonSetOptionChangeWaitP(sMnDataOptionChangeWait, is_button, stick_range, div)

#define mnDataSetOptionChangeWaitN(is_button, stick_range, div) mnCommonSetOptionChangeWaitN(sMnDataOptionChangeWait, is_button, stick_range, div)

// EXTERN

extern intptr_t D_NF_800A5240;
extern intptr_t D_NF_80133170;
extern intptr_t func_ovl1_803903E0;
extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;

// GLOBALS

// 0x80133060
GObj *sMnDataCharactersGObj;

// 0x80133064
GObj *sMnDataVSRecordGObj;

// 0x80133068
GObj *sMnDataSoundTestGObj;

// 0x80133078
s32 sMnDataOption;

// 0x8013307C
GObj *sMnDataMenuGObj;

// 0x80133080
s32 sMnDataFirstAvailableOption;

// 0x80133084
s32 sMnDataLastAvailableOption;

// 0x80133088
sb32 sMnDataIsSoundTestUnlocked;

// 0x8013308C
sb32 sMnDataIsOptionSelected;

// 0x80133090
s32 sMnDataOptionChangeWait;

// 0x80133094
s32 sMnDataTotalTimeFrames;

// 0x80133098
s32 sMnDataReturnFrame;

// 0x8013309C - Padding?
s32 D_ovl61_8013309C;

// 0x801330A0
rdFileNode sMnDataStatusBuf[24];

// 0x80133160
void *sMnDataFiles[2];

// DATA

// 0x80132F20
u32 dMnDataFileIDs[/* */] = { 0x0, 0x5 };

// 0x80132F28
Lights1 dMnDataLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80132F40
Gfx dMnDataDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMnDataLights1),
    gsSPEndDisplayList()
};

// 0x80132F68
gsColorRGBPair dMnDataSelectedColors = { 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF };

// 0x80132F70
gsColorRGBPair dMnDataHighlightColors = { 0x82, 0x00 ,0x28, 0xFF, 0x00, 0x28 };

// 0x80132F78
gsColorRGBPair dMnDataNotColors = { 0x00, 0x00, 0x00, 0x82, 0x82, 0xAA };

// 0x80132F80
intptr_t D_ovl61_80132F80[/* */] = { 0x000006A8, 0x00000AC8, 0x000010C8 };

// 0x80132F8C
Vec2f D_ovl61_80132F8C[/* */] =
{
    { 105.0F, 194.0F },
    { 131.0F, 194.0F },
    { 113.0F, 194.0F }
};

// 0x80132FA4
GObj **dMnDataOptionGObjs[/* */] = { &sMnDataCharactersGObj, &sMnDataVSRecordGObj, &sMnDataSoundTestGObj };

// 0x80132FB0
scUnkDataBounds D_ovl61_80132FB0;

// 0x80132FCC
scRuntimeInfo D_ovl61_80132FCC;

// 0x80131B00
void mnDataAddLightsDisplayList(Gfx **display_list)
{
    gSPDisplayList(display_list[0]++, dMnDataDisplayList);
}

// 0x80131B24
sb32 mnDataCheckSoundTestUnlocked(void)
{
    if (gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_SOUNDTEST)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80131B4C
void mnDataUpdateOptionTabSObjs(GObj *gobj, s32 status)
{
    gsColorRGBPair selcolors = dMnDataSelectedColors;
    gsColorRGBPair hicolors  = dMnDataHighlightColors;
    gsColorRGBPair notcolors = dMnDataNotColors;
    gsColorRGBPair *colors;
    SObj *sobj;
    s32 i;

    switch (status)
    {
    case mnOptionTab_Status_Highlight:
        colors = &hicolors;
        break;

    case mnOptionTab_Status_Not:
        colors = &notcolors;
        break;

    case mnOptionTab_Status_Selected:
        colors = &selcolors;
        break;

    default:
        break; // WARNING: Undefined behavior. This will assign sp 0xC to colors which is uninitialized.
    }
    sobj = SObjGetStruct(gobj);

    for (i = 0; i < mnOptionTab_Status_EnumMax; i++)
    {
        sobj->shadow_color.r = colors->prim.r;
        sobj->shadow_color.g = colors->prim.g;
        sobj->shadow_color.b = colors->prim.b;

        sobj->sprite.red   = colors->env.r;
        sobj->sprite.green = colors->env.g;
        sobj->sprite.blue  = colors->env.b;

        sobj = sobj->next;
    }
}

// 0x80131C24
void mnDataMakeOptionTabSObjs(GObj *gobj, f32 posx, f32 posy, s32 lrs)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnDataFiles[0], &D_NF_000001E8));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx;
    sobj->pos.y = posy;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnDataFiles[0], &D_NF_00000330));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx + 16.0F;
    sobj->pos.y = posy;

    sobj->cmt = 0;
    sobj->cms = 0;

    sobj->maskt = 4;
    sobj->masks = 0;

    sobj->lrs = lrs * 8;
    sobj->lrt = 29;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnDataFiles[0], &D_NF_00000568));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx + 16.0F + (lrs * 8);
    sobj->pos.y = posy;
}

// 0x80131D54
void func_ovl61_80131D54(void)
{
    return;
}

// 0x80131D5C
void mnDataMakeCharactersSObj(void)
{
    GObj *gobj;
    SObj *sobj;
    s32 posx;
    s32 posy;

    if (sMnDataIsSoundTestUnlocked != FALSE)
    {
        posx = 133;
        posy = 42;
    }
    else
    {
        posx = 113;
        posy = 57;
    }

    sMnDataCharactersGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);

    mnDataMakeOptionTabSObjs(gobj, posx, posy, 16);

    mnDataUpdateOptionTabSObjs(gobj, sMnDataOption == mnData_Option_Characters);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnDataFiles[1], &lMnDataCharacterOptionSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx + 26;
    sobj->pos.y = posy + 4;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;
}

// 0x80131E90
void mnDataMakeVSRecordSObj(void)
{
    GObj *gobj;
    SObj *sobj;
    s32 posx;
    s32 posy;

    if (sMnDataIsSoundTestUnlocked != FALSE)
    {
        posx = 101;
        posy = 89;
    }
    else
    {
        posx = 81;
        posy = 126;
    }

    sMnDataVSRecordGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);

    mnDataMakeOptionTabSObjs(gobj, posx, posy, 16);

    mnDataUpdateOptionTabSObjs(gobj, sMnDataOption == mnData_Option_VSRecord);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnDataFiles[1], &lMnDataVSRecordOptionSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx + 27;
    sobj->pos.y = posy + 4;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;
}

// 0x80131FC8
void mnDataMakeSoundTestSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    sMnDataSoundTestGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);

    mnDataMakeOptionTabSObjs(gobj, 69.0F, 136.0F, 16);

    mnDataUpdateOptionTabSObjs(gobj, sMnDataOption == mnData_Option_SoundTest);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnDataFiles[1], &lMnDataSoundTestOptionSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->pos.x = 95.0F;
    sobj->pos.y = 140.0F;
}

// 0x801320A0 - Unused?
void func_ovl61_801320A0(SObj *sobj)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->shadow_color.r = 0x00;
    sobj->shadow_color.g = 0x00;
    sobj->shadow_color.b = 0x00;

    sobj->sprite.red   = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue  = 0xFF;
}

// 0x801320D4
void mnDataMakeMenuGObj(void)
{
    s32 unused[2];
    intptr_t sp34[ARRAY_COUNT(D_ovl61_80132F80)] = D_ovl61_80132F80;
    Vec2f sp1C[ARRAY_COUNT(D_ovl61_80132F8C)] = D_ovl61_80132F8C;

    sMnDataMenuGObj = omMakeGObjCommon(0, NULL, 5, 0x80000000);
}

// 0x80132164
void mnDataHeaderProcRender(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 160, 120, 20, 230);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 225, 143, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);

    func_ovl0_800CCEAC();
    func_ovl0_800CCF00(gobj);
}

// 0x801322A8
void mnDataMakeHeaderSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(0, NULL, 3, 0x80000000);

    omAddGObjRenderProc(gobj, mnDataHeaderProcRender, 1, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnDataFiles[0], &lMnCommonSmashLogoSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;

    sobj->pos.x = 235.0F;
    sobj->pos.y = 158.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnDataFiles[1], &lMnDataHeaderTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->pos.x = 206.0F;
    sobj->pos.y = 131.0F;
}

// 0x801323A0
void mnDataMakeDecalSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(0, NULL, 2, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnDataFiles[0], &lMnCommonCircleSprite));

    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnDataFiles[0], &lMnCommonPaperTearSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0xA0;
    sobj->sprite.green = 0x78;
    sobj->sprite.blue  = 0x14;

    sobj->pos.x = 140.0F;
    sobj->pos.y = 143.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnDataFiles[0], &lMnCommonPaperTearSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0xA0;
    sobj->sprite.green = 0x78;
    sobj->sprite.blue  = 0x14;

    sobj->pos.x = 225.0F;
    sobj->pos.y = 56.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnDataFiles[1], &lMnDataNotebookSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x99;
    sobj->sprite.green = 0x99;
    sobj->sprite.blue  = 0x99;

    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;
}

// 0x80132534
void func_ovl61_80132534(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(1, NULL, 1, 0x80000000, func_ovl0_800CD2CC, 0x14, 8, -1, 0, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801325D4
void func_ovl61_801325D4(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(1, NULL, 1, 0x80000000, func_ovl0_800CD2CC, 0x28, 4, -1, 0, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132674
void func_ovl61_80132674(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(1, NULL, 1, 0x80000000, func_ovl0_800CD2CC, 0x3C, 2, -1, 0, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132714
void func_ovl61_80132714(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(1, NULL, 1, 0x80000000, func_ovl0_800CD2CC, 0x50, 1, -1, 0, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801327B4
void mnDataInitVars(void)
{
    switch (gSceneData.scene_previous)
    {
    case scMajor_Kind_VSRecord:
        sMnDataOption = mnData_Option_VSRecord;
        break;

    case scMajor_Kind_SoundTest:
        sMnDataOption = mnData_Option_SoundTest;
        break;

    default:
        sMnDataOption = mnData_Option_Characters;
        break;
    }
    sMnDataFirstAvailableOption = mnData_Option_Characters;

    if (mnDataCheckSoundTestUnlocked() != FALSE)
    {
        sMnDataLastAvailableOption = mnData_Option_SoundTest;
        sMnDataIsSoundTestUnlocked = TRUE;
    }
    else
    {
        sMnDataLastAvailableOption = mnData_Option_VSRecord;
        sMnDataIsSoundTestUnlocked = FALSE;
    }
    sMnDataTotalTimeFrames = 0;
    sMnDataOptionChangeWait = 0;
    sMnDataIsOptionSelected = FALSE;
    sMnDataReturnFrame = sMnDataTotalTimeFrames + I_MIN_TO_FRAMES(5);
}

// 0x80132874
void mnDataMainProcUpdate(GObj *gobj)
{
    GObj *select_gobj;
    s32 stick_range;
    GObj **option_gobj[ARRAY_COUNT(dMnDataOptionGObjs)] = dMnDataOptionGObjs;
    sb32 is_button;

    sMnDataTotalTimeFrames++;

    if (sMnDataTotalTimeFrames >= 10)
    {
        if (sMnDataTotalTimeFrames == sMnDataReturnFrame)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_Title;

            func_80005C74();

            return;
        }
        if (func_ovl1_80390B7C() == 0)
        {
            sMnDataReturnFrame = sMnDataTotalTimeFrames + I_MIN_TO_FRAMES(5);
        }
        if (sMnDataIsOptionSelected != FALSE)
        {
            func_80005C74();

            return;
        }
        if (sMnDataOptionChangeWait != 0)
        {
            sMnDataOptionChangeWait--;
        }
        if
        (
            (func_ovl1_80390A04(-20, 20) != FALSE) &&
            (func_ovl1_80390AC0(-20, 20) != FALSE) &&
            (func_ovl1_80390804(U_JPAD | U_CBUTTONS) == FALSE) &&
            (func_ovl1_80390804(D_JPAD | D_CBUTTONS) == FALSE)
        )
        {
            sMnDataOptionChangeWait = 0;
        }
        if (func_ovl1_8039076C(A_BUTTON | START_BUTTON) != FALSE)
        {
            switch (sMnDataOption)
            {
            case mnData_Option_Characters:
                func_800269C0(alSound_SFX_MenuSelect);
                mnDataUpdateOptionTabSObjs(*option_gobj[sMnDataOption], mnOptionTab_Status_Selected);
                func_80020A74();

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = scMajor_Kind_Characters;
                sMnDataIsOptionSelected = TRUE;
                return;

            case mnData_Option_VSRecord:
                func_800269C0(alSound_SFX_MenuSelect);
                mnDataUpdateOptionTabSObjs(*option_gobj[sMnDataOption], mnOptionTab_Status_Selected);
                func_80020A74();

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = scMajor_Kind_VSRecord;
                sMnDataIsOptionSelected = TRUE;
                return;

            case mnData_Option_SoundTest:
                func_800269C0(alSound_SFX_MenuSelect);
                mnDataUpdateOptionTabSObjs(*option_gobj[sMnDataOption], mnOptionTab_Status_Selected);
                func_80020A74();

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = scMajor_Kind_SoundTest;
                sMnDataIsOptionSelected = TRUE;
                return;
            }
        }
        if (func_ovl1_8039076C(B_BUTTON) != FALSE)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_MainMenu;
            func_80005C74();
            return;
        }
        if
        (
            mnDataCheckGetOptionButtonInput(is_button, U_JPAD | U_CBUTTONS) ||
            mnDataCheckGetOptionStickInputUD(stick_range, 20, 1)
        )
        {
            func_800269C0(alSound_SFX_MenuScroll2);

            mnDataSetOptionChangeWaitP(is_button, stick_range, 7);

            mnDataUpdateOptionTabSObjs(*option_gobj[sMnDataOption], mnOptionTab_Status_Not);

            if (sMnDataOption == sMnDataFirstAvailableOption)
            {
                sMnDataOption = sMnDataLastAvailableOption;
            }
            else sMnDataOption--;

            mnDataUpdateOptionTabSObjs(*option_gobj[sMnDataOption], mnOptionTab_Status_Highlight);

            if (sMnDataOption == sMnDataFirstAvailableOption)
            {
                sMnDataOptionChangeWait += 8;
            }
            omEjectGObjCommon(sMnDataMenuGObj);
            mnDataMakeMenuGObj();
        }
        if
        (
            mnDataCheckGetOptionButtonInput(is_button, D_JPAD | D_CBUTTONS) ||
            mnDataCheckGetOptionStickInputUD(stick_range, -20, 0)
        )
        {
            func_800269C0(alSound_SFX_MenuScroll2);

            mnDataSetOptionChangeWaitN(is_button, stick_range, 7);

            mnDataUpdateOptionTabSObjs(*option_gobj[sMnDataOption], mnOptionTab_Status_Not);

            if (sMnDataOption == sMnDataLastAvailableOption)
            {
                sMnDataOption = sMnDataFirstAvailableOption;
            }
            else sMnDataOption++;

            mnDataUpdateOptionTabSObjs(*option_gobj[sMnDataOption], mnOptionTab_Status_Highlight);

            if (sMnDataOption == sMnDataLastAvailableOption)
            {
                sMnDataOptionChangeWait += 8;
            }
            omEjectGObjCommon(sMnDataMenuGObj);
            mnDataMakeMenuGObj();
        }
    }
}

// 0x80132D64
void mnDataInitMenuAll(void)
{
    rdSetup rldm_setup;

    rldm_setup.tableRomAddr = &D_NF_001AC870;
    rldm_setup.tableFileCount = &D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = sMnDataStatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(sMnDataStatusBuf);
    rldm_setup.forceBuf = NULL;
    rldm_setup.forceBufSize = 0;

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles(dMnDataFileIDs, ARRAY_COUNT(dMnDataFileIDs), sMnDataFiles, gsMemoryAlloc(rdManagerGetAllocSize(dMnDataFileIDs, ARRAY_COUNT(dMnDataFileIDs)), 0x10));
    omMakeGObjCommon(0, mnDataMainProcUpdate, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 0, 0);

    mnDataInitVars();
    func_ovl61_80132714();
    func_ovl61_80132674();
    func_ovl61_801325D4();
    func_ovl61_80132534();
    mnDataMakeDecalSObjs();
    mnDataMakeHeaderSObjs();
    mnDataMakeCharactersSObj();
    mnDataMakeVSRecordSObj();

    if (sMnDataIsSoundTestUnlocked != FALSE)
    {
        mnDataMakeSoundTestSObj();
    }
    mnDataMakeMenuGObj();

    if ((gSceneData.scene_previous == scMajor_Kind_VSRecord) || (gSceneData.scene_previous == scMajor_Kind_Characters) || (gSceneData.scene_previous == scMajor_Kind_SoundTest))
    {
        func_80020AB4(0, 0x2C);
    }
}

// 0x80132EC0
void mnDataStartScene(void)
{
    D_ovl61_80132FB0.unk_scdatabounds_0xC = ((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl61_80132FB0);
    D_ovl61_80132FCC.arena_size = ((uintptr_t)&func_ovl1_803903E0 - (uintptr_t)&D_NF_80133170);
    func_8000683C(&D_ovl61_80132FCC);
}
