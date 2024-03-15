#include <mn/menu.h>
#include <gm/gmsound.h>
#include <gm/battle.h>
#include <sys/obj_renderer.h>
#include <PR/gbi.h>
#include <PR/os.h>
#include <ovl0/reloc_data_mgr.h>

#define mnOptionCheckGetOptionButtonInput(is_button, mask) mnCommonCheckGetOptionButtonInput(gMnOptionOptionChangeWait, is_button, mask)

#define mnOptionCheckGetOptionStickInputUD(stick_range, min, b) mnCommonCheckGetOptionStickInputUD(gMnOptionOptionChangeWait, stick_range, min, b)

#define mnOptionCheckGetOptionStickInputLR(stick_range, min, b) mnCommonCheckGetOptionStickInputLR(gMnOptionOptionChangeWait, stick_range, min, b)

#define mnOptionSetOptionChangeWaitP(is_button, stick_range, div) mnCommonSetOptionChangeWaitP(gMnOptionOptionChangeWait, is_button, stick_range, div)

#define mnOptionSetOptionChangeWaitN(is_button, stick_range, div) mnCommonSetOptionChangeWaitN(gMnOptionOptionChangeWait, is_button, stick_range, div)

// EXTERN

extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;
extern intptr_t D_NF_800A5240;
extern intptr_t D_NF_801338C0;
extern intptr_t func_ovl1_803903E0;
extern sb32 D_8003CB24;

// GLOBALS

// 0x801337A0
GObj *gMnOptionSoundGObj;

// 0x801337A4
GObj *gMnOptionScreenAdjustGObj;

// 0x801337A8
GObj *gMnOptionBackupClearGObj;

// 0x801337AC - Padding?
s32 D_ovl60_801337AC[3];

// 0x801337B8
s32 gMnOptionOption;

// 0x801337BC - 0 = mono, 1 = stereo
sb32 gMnOptionSoundIsMonoOrStereo;

// 0x801337C0
sb32 gMnOptionIsScreenFlash;

// 0x801337C8
GObj *gMnOptionSoundOptionGObj;

// 0x801337D0
GObj *gMnOptionMenuGObj;

// 0x801337D4
GObj *D_ovl60_801337D4;

// 0x801337D8
s32 D_ovl60_801337D8;

// 0x801337DC
s32 gMnOptionIsOptionSelected;

// 0x801337E0
s32 gMnOptionOptionChangeWait;

// 0x801337E4
s32 gMnOptionTotalTimeFrames;

// 0x801337E8
s32 gMnOptionReturnFrame;

// 0x801337EC - Padding?
s32 D_ovl60_801337EC;

// 0x801337F0
rdFileNode gMnOptionStatusBuf[24];

// 0x801338B0
void *gMnOptionFiles[2];

// DATA

// 0x80133620
u32 dMnOptionFileIDs[/* */] = { 0x0, 0x4 };

// 0x80133628
Lights1 dMnOptionLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80133640
Gfx dMnOptionDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMnOptionLights1),
    gsSPEndDisplayList()
};

// 0x80133668
GfxColorPair dMnOptionSelectedColors = { 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF };

// 0x80133670
GfxColorPair dMnOptionHighlightColors = { 0x82, 0x00, 0x28, 0xFF, 0x00, 0x28 };

// 0x80133678
GfxColorPair dMnOptionNotColors = { 0x00, 0x00, 0x00, 0x82, 0x82, 0xAA };

// 0x80133680
intptr_t D_ovl60_80133680[/* */] = { 0x6A8, 0x1580, 0x1CF0 };

// 0x8013368C
Vec2f D_ovl60_8013368C[/* */] = 
{
    { 132.0F, 195.0F },
    { 104.0F, 195.0F },
    { 119.0F, 195.0F },
    { 103.0F, 195.0F }
};

// 0x801336AC
u32 D_ovl60_801336AC[/* */][4] =
{
    { 233,  64, 273,  64 },
    { 179,  64, 225,  64 }
};

// 0x801336CC
u32 D_ovl60_801336CC[/* */][4] =
{
    {  0xE9,  0x5E, 0x106,  0x5E },
    {  0xC8,  0x5E,  0xE2,  0x5E }
};

// 0x801336EC
GObj **gMnOptionOptionGObjs[/* */] = { &gMnOptionSoundGObj, &gMnOptionScreenAdjustGObj, &gMnOptionBackupClearGObj };

// 0x801336F8
scUnkDataBounds D_ovl60_801336F8;

// 0x80133714
scRuntimeInfo D_ovl60_80133714;

// 0x80131B00
void mnOptionAddLightsDisplayList(Gfx **display_list)
{
    gSPDisplayList(display_list[0]++, dMnOptionDisplayList);
}

// 0x80131B24
void mnOptionUpdateOptionTabSObjs(GObj *gobj, s32 status)
{
    GfxColorPair selcolors = dMnOptionSelectedColors;
    GfxColorPair hicolors  = dMnOptionHighlightColors;
    GfxColorPair notcolors = dMnOptionNotColors;
    GfxColorPair *colors;
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

// 0x80131BFC
void mnOptionMakeOptionTabSObjs(GObj *gobj, f32 posx, f32 posy, s32 lrs)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[0], &D_NF_000001E8));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx;
    sobj->pos.y = posy;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[0], &D_NF_00000330));

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

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[0], &D_NF_00000568));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx + 16.0F + (lrs * 8);
    sobj->pos.y = posy;
}

// 0x80131D2C
void mnOptionUpdateSoundOptionSObjs(GObj *gobj, sb32 mono_or_stereo)
{
    SObj *sobj = SObjGetStruct(gobj);

    if (mono_or_stereo != 0)
    {
        sobj->sprite.red   = 0xFF;
        sobj->sprite.green = 0xFF;
        sobj->sprite.blue  = 0xFF;

        sobj->next->sprite.red   = 0x32;
        sobj->next->sprite.green = 0x32;
        sobj->next->sprite.blue  = 0x32;
    }
    else
    {
        sobj->sprite.red   = 0x32;
        sobj->sprite.green = 0x32;
        sobj->sprite.blue  = 0x32;

        sobj->next->sprite.red   = 0xFF;
        sobj->next->sprite.green = 0xFF;
        sobj->next->sprite.blue  = 0xFF;
    }
}

// 0x80131D98
void mnOptionMakeSoundOptionSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gMnOptionSoundOptionGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[1], &lMnOptionMonoTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 179.0F;
    sobj->pos.y = 48.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[1], &lMnOptionStereoTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 236.0F;
    sobj->pos.y = 48.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[0], &lMnOptionSoundSlashSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x32;
    sobj->sprite.green = 0x32;
    sobj->sprite.blue  = 0x32;

    sobj->pos.x = 229.0F;
    sobj->pos.y = 48.0F;

    mnOptionUpdateSoundOptionSObjs(gobj, gMnOptionSoundIsMonoOrStereo);
}

// 0x80131EF0
void mnOptionMakeSoundTextSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    gMnOptionSoundGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);

    mnOptionMakeOptionTabSObjs(gobj, 113.0F, 42.0F, 17);

    mnOptionUpdateOptionTabSObjs(gobj, gMnOptionOption == mnOption_Option_Sound);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[1], &lMnOptionSoundTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->pos.x = 116.0F;
    sobj->pos.y = 46.0F;
}

// 0x80131FC4
void mnOptionMakeScreenAdjustSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    gMnOptionScreenAdjustGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);

    mnOptionMakeOptionTabSObjs(gobj, 91.0F, 89.0F, 17);

    mnOptionUpdateOptionTabSObjs(gobj, gMnOptionOption == mnOption_Option_ScreenAdjust);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[1], &lMnOptionScreenAdjustTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->pos.x = 103.0F;
    sobj->pos.y = 92.0F;
}

// 0x8013209C
void mnOptionMakeBackupClearSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    gMnOptionBackupClearGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);
    mnOptionMakeOptionTabSObjs(gobj, 69.0F, 136.0F, 17);
    mnOptionUpdateOptionTabSObjs(gobj, gMnOptionOption == mnOption_Option_BackupClear);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[1], &lMnOptionBackupClearTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->pos.x = 86.0F;
    sobj->pos.y = 140.0F;
}

// 0x80132174 - Unused?
void func_ovl60_80132174(SObj *sobj)
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

// 0x801321A8
void mnOptionMakeMenuGObj(void)
{
    s32 unused[2];
    intptr_t sp1C[ARRAY_COUNT(D_ovl60_80133680)] = D_ovl60_80133680;
    Vec2f sp3C[ARRAY_COUNT(D_ovl60_8013368C)] = D_ovl60_8013368C;

    gMnOptionMenuGObj = omMakeGObjCommon(0, NULL, 5, 0x80000000);
}

// 0x80132248
void mnOptionHeaderProcRender(GObj *gobj)
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

// 0x8013238C
void mnOptionMakeHeaderSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(0, NULL, 3, 0x80000000);

    omAddGObjRenderProc(gobj, mnOptionHeaderProcRender, 1, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[0], &lMnCommonSmashLogoSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->pos.x = 235.0F;
    sobj->pos.y = 158.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[1], &lMnOptionHeaderTextSprite);

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->pos.x = 201.0F;
    sobj->pos.y = 120.0F;
}

// 0x80132484
void mnOptionMakeDecalSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(0, NULL, 2, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[0], &lMnCommonCircleSprite));

    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[0], &lMnCommonPaperTearSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0xA0;
    sobj->sprite.green = 0x78;
    sobj->sprite.blue  = 0x14;

    sobj->pos.x = 140.0F;
    sobj->pos.y = 143.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[0], &lMnCommonPaperTearSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0xA0;
    sobj->sprite.green = 0x78;
    sobj->sprite.blue  = 0x14;

    sobj->pos.x = 225.0F;
    sobj->pos.y = 56.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gMnOptionFiles[1], &lMnOptionKnobSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x99;
    sobj->sprite.green = 0x99;
    sobj->sprite.blue  = 0x99;

    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;
}

// 0x80132618 - Unused?
void func_ovl60_80132618(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x66, 0x4C, 0x0C, 0x66);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 27, 25, 185, 122);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    func_ovl0_800CCEAC();
    func_ovl0_800CCF00(gobj);
}

// 0x8013275C
void func_ovl60_8013275C(void)
{
    if (D_ovl60_801337D4 != NULL)
    {
        omEjectGObjCommon(D_ovl60_801337D4);

        D_ovl60_801337D4 = NULL;
    }
}

// 0x80132794 - Unused?
void func_ovl60_80132794(GObj *gobj)
{
    if (gMnOptionTotalTimeFrames == D_ovl60_801337D8)
    {
        func_ovl60_8013275C();
    }
}

// 0x801327CC - Unused?
void func_ovl60_801327CC(void)
{
    return;
}

// 0x801327D4
void mnOptionSoundUnderlineProcRender(GObj *gobj)
{
    u32 rect[2][4] = D_ovl60_801336AC;
    u32 sp40[2][4] = D_ovl60_801336CC;

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gDisplayListHead[0]++, rgba32_to_fill_color(GPACK_RGBA8888(0xFF, 0xFF, 0xFF, 0xFF)));

    if (gMnOptionOption == mnOption_Option_Sound)
    {
        gDPFillRectangle
        (
            gDisplayListHead[0]++,
            rect[gMnOptionSoundIsMonoOrStereo][0],
            rect[gMnOptionSoundIsMonoOrStereo][1],
            rect[gMnOptionSoundIsMonoOrStereo][2],
            rect[gMnOptionSoundIsMonoOrStereo][3]
        );
    }
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    func_ovl0_800CCEAC();
}

// 0x801329F4
void mnOptionMakeSoundUnderlineGObj(void)
{
    omAddGObjRenderProc(omMakeGObjCommon(0, NULL, 5, 0x80000000), mnOptionSoundUnderlineProcRender, 3, 0x80000000, -1);
}

// 0x80132A40
void func_ovl60_80132A40(void)
{
    OMCamera *cam = OMCameraGetStruct(func_8000B93C(1, NULL, 1, 0x80000000, func_ovl0_800CD2CC, 0x14, 8, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132AE0
void func_ovl60_80132AE0(void)
{
    OMCamera *cam = OMCameraGetStruct(func_8000B93C(1, NULL, 1, 0x80000000, func_ovl0_800CD2CC, 0xA, 16, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132B80
void func_ovl60_80132B80(void)
{
    OMCamera *cam = OMCameraGetStruct(func_8000B93C(1, NULL, 1, 0x80000000, func_ovl0_800CD2CC, 0x28, 4, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132C20
void func_ovl60_80132C20(void)
{
    OMCamera *cam = OMCameraGetStruct(func_8000B93C(1, NULL, 1, 0x80000000, func_ovl0_800CD2CC, 0x3C, 2, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132CC0
void func_ovl60_80132CC0(void)
{
    OMCamera *cam = OMCameraGetStruct(func_8000B93C(1, NULL, 1, 0x80000000, func_ovl0_800CD2CC, 0x50, 1, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132D60
void mnOptionInitVars(void)
{
    switch (gSceneData.scene_previous)
    {
    case scMajor_Kind_ScreenAdjust:
        gMnOptionOption = mnOption_Option_ScreenAdjust;
        break;

    case scMajor_Kind_BackupClear:
        gMnOptionOption = mnOption_Option_BackupClear;
        break;

    default:
        gMnOptionOption = mnOption_Option_Sound;
        break;
    }
    gMnOptionOptionChangeWait = 0;

    gMnOptionSoundIsMonoOrStereo = (D_8003CB24 == 1) ? 1 : 0;

    gMnOptionIsScreenFlash = gSaveData.is_allow_screenflash;
    gMnOptionTotalTimeFrames = 0;
    D_ovl60_801337D4 = NULL;
    gMnOptionIsOptionSelected = FALSE;
    gMnOptionReturnFrame = gMnOptionTotalTimeFrames + I_MIN_TO_FRAMES(5);
}

// 0x80132E10
void mnOptionSaveDataToSRAM(void)
{
    gSaveData.is_allow_screenflash = gMnOptionIsScreenFlash;
    gSaveData.sound_mono_or_stereo = gMnOptionSoundIsMonoOrStereo;

    lbMemory_SaveData_WriteSRAM();
}

// 0x80132E4C
void mnOptionMainProcUpdate(GObj *gobj)
{
    GObj *select_gobj;
    sb32 stick_range;
    GObj **option_gobj[ARRAY_COUNT(gMnOptionOptionGObjs)] = gMnOptionOptionGObjs;
    s32 is_button;

    gMnOptionTotalTimeFrames++;

    if (gMnOptionTotalTimeFrames >= 10)
    {
        if (gMnOptionTotalTimeFrames == gMnOptionReturnFrame)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_Title;

            mnOptionSaveDataToSRAM();
            func_80005C74();
            return;
        }
        if (func_ovl1_80390B7C() == FALSE)
        {
            gMnOptionReturnFrame = gMnOptionTotalTimeFrames + I_MIN_TO_FRAMES(5);
        }
        if (gMnOptionIsOptionSelected != FALSE)
        {
            func_80005C74();
        }
        if (gMnOptionOptionChangeWait != 0)
        {
            gMnOptionOptionChangeWait--;
        }
        if
        (
            (func_ovl1_80390A04(-20, 20) != FALSE) &&
            (func_ovl1_80390AC0(-20, 20) != FALSE) &&
            (func_ovl1_80390804(U_JPAD | U_CBUTTONS) == FALSE) &&
            (func_ovl1_80390804(D_JPAD | D_CBUTTONS) == FALSE)
        )
        {
            gMnOptionOptionChangeWait = 0;
        }
        if (func_ovl1_8039076C(A_BUTTON | START_BUTTON) != FALSE)
        {
            switch (gMnOptionOption)
            {
            case mnOption_Option_ScreenAdjust:
                mnOptionSaveDataToSRAM();

                func_800269C0(alSound_SFX_MenuSelect);

                mnOptionUpdateOptionTabSObjs(*option_gobj[gMnOptionOption], mnOptionTab_Status_Selected);

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = scMajor_Kind_ScreenAdjust;

                gMnOptionIsOptionSelected = TRUE;
                return;

            case mnOption_Option_BackupClear:
                mnOptionSaveDataToSRAM();

                func_800269C0(alSound_SFX_MenuSelect);

                mnOptionUpdateOptionTabSObjs(*option_gobj[gMnOptionOption], mnOptionTab_Status_Selected);

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = scMajor_Kind_BackupClear;

                gMnOptionIsOptionSelected = TRUE;
                return;
            }
        }

        if (func_ovl1_8039076C(B_BUTTON) != FALSE)
        {
            mnOptionSaveDataToSRAM();
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_MainMenu;
            func_80005C74();
        }
        if
        (
            mnOptionCheckGetOptionButtonInput(is_button, U_JPAD | U_CBUTTONS) ||
            mnOptionCheckGetOptionStickInputUD(stick_range, 20, 1)
        )
        {
            func_800269C0(alSound_SFX_MenuScroll2);

            mnOptionSetOptionChangeWaitP(is_button, stick_range, 7);

            mnOptionUpdateOptionTabSObjs(*option_gobj[gMnOptionOption], mnOptionTab_Status_Not);

            if (gMnOptionOption == mnOption_Option_Start)
            {
                gMnOptionOption = mnOption_Option_End;
            }
            else gMnOptionOption--;

            mnOptionUpdateOptionTabSObjs(*option_gobj[gMnOptionOption], mnOptionTab_Status_Highlight);
            omEjectGObjCommon(gMnOptionMenuGObj);
            mnOptionMakeMenuGObj();
        }
        if
        (
            mnOptionCheckGetOptionButtonInput(is_button, D_JPAD | D_CBUTTONS) ||
            mnOptionCheckGetOptionStickInputUD(stick_range, -20, 0)
        )
        {
            func_800269C0(alSound_SFX_MenuScroll2);

            mnOptionSetOptionChangeWaitN(is_button, stick_range, 7);

            if (gMnOptionOption == mnOption_Option_ScreenAdjust)
            {
                gMnOptionOptionChangeWait += 8;
            }
            mnOptionUpdateOptionTabSObjs(*option_gobj[gMnOptionOption], mnOptionTab_Status_Not);

            if (gMnOptionOption == mnOption_Option_End)
            {
                gMnOptionOption = mnOption_Option_Start;
            }
            else gMnOptionOption++;

            mnOptionUpdateOptionTabSObjs(*option_gobj[gMnOptionOption], mnOptionTab_Status_Highlight);
            omEjectGObjCommon(gMnOptionMenuGObj);
            mnOptionMakeMenuGObj();
        }
        if (gMnOptionOption == mnOption_Option_Sound)
        {
            if
            (
                (func_ovl1_8039076C(L_JPAD | L_TRIG | L_CBUTTONS) != FALSE) ||
                (mnOptionCheckGetOptionStickInputLR(stick_range, -20, 0))
            )
            {
                if (gMnOptionSoundIsMonoOrStereo == 0)
                {
                    func_800269C0(alSound_SFX_MenuScroll1);

                    gMnOptionSoundIsMonoOrStereo = 1;

                    omEjectGObjCommon(gMnOptionSoundOptionGObj);
                    mnOptionMakeSoundOptionSObjs();

                    gMnOptionOptionChangeWait = mnCommonGetOptionChangeWaitN(stick_range, 7);

                    omEjectGObjCommon(gMnOptionMenuGObj);
                    mnOptionMakeMenuGObj();
                    func_80020A34(gMnOptionSoundIsMonoOrStereo);
                }
            }
            if
            (
                (func_ovl1_8039076C(R_JPAD | R_TRIG | R_CBUTTONS) != FALSE) ||
                (mnOptionCheckGetOptionStickInputLR(stick_range, 20, 1))
            )
            {
                if (gMnOptionSoundIsMonoOrStereo == 1)
                {
                    func_800269C0(alSound_SFX_MenuScroll1);

                    gMnOptionSoundIsMonoOrStereo = 0;

                    omEjectGObjCommon(gMnOptionSoundOptionGObj);
                    mnOptionMakeSoundOptionSObjs();

                    gMnOptionOptionChangeWait = mnCommonGetOptionChangeWaitP(stick_range, 7);

                    omEjectGObjCommon(gMnOptionMenuGObj);
                    mnOptionMakeMenuGObj();
                    func_80020A34(gMnOptionSoundIsMonoOrStereo);
                }
            }
            if (func_ovl1_8039076C(A_BUTTON) != FALSE)
            {
                func_800269C0(alSound_SFX_MenuScroll1);

                if (gMnOptionSoundIsMonoOrStereo == 1)
                {
                    gMnOptionSoundIsMonoOrStereo = 0;
                }
                else gMnOptionSoundIsMonoOrStereo = 1;

                omEjectGObjCommon(gMnOptionSoundOptionGObj);
                mnOptionMakeSoundOptionSObjs();
                omEjectGObjCommon(gMnOptionMenuGObj);
                mnOptionMakeMenuGObj();
                func_80020A34(gMnOptionSoundIsMonoOrStereo);
            }
        }
    }
}

// 0x8013346C
void func_ovl60_8013346C(void)
{
    rdSetup rldm_setup;

    rldm_setup.tableRomAddr = (uintptr_t)&D_NF_001AC870;
    rldm_setup.tableFileCount = (uintptr_t)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = gMnOptionStatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(gMnOptionStatusBuf);
    rldm_setup.forceBuf = NULL;
    rldm_setup.forceBufSize = 0;

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles(dMnOptionFileIDs, ARRAY_COUNT(dMnOptionFileIDs), gMnOptionFiles, hlMemoryAlloc(rdManagerGetAllocSize(dMnOptionFileIDs, ARRAY_COUNT(dMnOptionFileIDs)), 0x10));
    omMakeGObjCommon(0, mnOptionMainProcUpdate, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 0, 0);
    mnOptionInitVars();
    func_ovl60_80132CC0();
    func_ovl60_80132C20();
    func_ovl60_80132B80();
    func_ovl60_80132A40();
    func_ovl60_80132AE0();
    mnOptionMakeDecalSObjs();
    mnOptionMakeHeaderSObjs();
    mnOptionMakeSoundTextSObj();
    mnOptionMakeSoundOptionSObjs();
    mnOptionMakeScreenAdjustSObj();
    mnOptionMakeBackupClearSObj();
    mnOptionMakeSoundUnderlineGObj();
    mnOptionMakeMenuGObj();

    if (gSceneData.scene_previous == scMajor_Kind_ScreenAdjust)
    {
        func_80020AB4(0, 0x2C);
    }
}

// 0x801335C0
void mnOptionStartScene(void)
{
    D_ovl60_801336F8.unk_scdatabounds_0xC = ((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl60_801336F8);
    D_ovl60_80133714.arena_size = ((uintptr_t)&func_ovl1_803903E0 - (uintptr_t)&D_NF_801338C0);
    func_8000683C(&D_ovl60_80133714);
}
