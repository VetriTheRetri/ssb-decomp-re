#include <mn/menu.h>
#include <gm/gmsound.h>
#include <gm/battle.h>
#include <sys/obj_renderer.h>
#include <PR/gbi.h>
#include <PR/os.h>
#include <ovl0/reloc_data_mgr.h>

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define mnOptionCheckGetOptionButtonInput(is_button, mask) mnCommonCheckGetOptionButtonInput(sMNOptionOptionChangeWait, is_button, mask)
#define mnOptionCheckGetOptionStickInputUD(stick_range, min, b) mnCommonCheckGetOptionStickInputUD(sMNOptionOptionChangeWait, stick_range, min, b)
#define mnOptionCheckGetOptionStickInputLR(stick_range, min, b) mnCommonCheckGetOptionStickInputLR(sMNOptionOptionChangeWait, stick_range, min, b)
#define mnOptionSetOptionChangeWaitP(is_button, stick_range, div) mnCommonSetOptionChangeWaitP(sMNOptionOptionChangeWait, is_button, stick_range, div)
#define mnOptionSetOptionChangeWaitN(is_button, stick_range, div) mnCommonSetOptionChangeWaitN(sMNOptionOptionChangeWait, is_button, stick_range, div)

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;
extern intptr_t D_NF_800A5240;
extern intptr_t lMNOptionArenaLo;               // 0x801338C0
extern intptr_t func_ovl1_803903E0;
extern sb32 D_8003CB24;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801337A0
GObj *sMNOptionSoundGObj;

// 0x801337A4
GObj *sMNOptionScreenAdjustGObj;

// 0x801337A8
GObj *sMNOptionBackupClearGObj;

// 0x801337AC - Padding?
s32 D_ovl60_801337AC[3];

// 0x801337B8
s32 sMNOptionOption;

// 0x801337BC - 0 = mono, 1 = stereo
sb32 sMNOptionSoundIsMonoOrStereo;

// 0x801337C0
sb32 sMNOptionIsScreenFlash;

// 0x801337C8
GObj *sMNOptionSoundOptionGObj;

// 0x801337D0
GObj *sMNOptionMenuGObj;

// 0x801337D4
GObj *D_ovl60_801337D4;

// 0x801337D8
s32 D_ovl60_801337D8;

// 0x801337DC
s32 sMNOptionIsOptionSelected;

// 0x801337E0
s32 sMNOptionOptionChangeWait;

// 0x801337E4
s32 sMNOptionTotalTimeFrames;

// 0x801337E8
s32 sMNOptionReturnFrame;

// 0x801337EC - Padding?
s32 D_ovl60_801337EC;

// 0x801337F0
rdFileNode sMNOptionStatusBuf[24];

// 0x801338B0
void *sMNOptionFiles[2];

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80133620
u32 dMNOptionFileIDs[/* */] = { 0x0, 0x4 };

// 0x80133628
Lights1 dMNOptionLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80133640
Gfx dMNOptionDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNOptionLights1),
    gsSPEndDisplayList()
};

// 0x80133668
gsColorRGBPair dMNOptionSelectedColors = { 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF };

// 0x80133670
gsColorRGBPair dMNOptionHighlightColors = { 0x82, 0x00, 0x28, 0xFF, 0x00, 0x28 };

// 0x80133678
gsColorRGBPair dMNOptionNotColors = { 0x00, 0x00, 0x00, 0x82, 0x82, 0xAA };

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
GObj **sMNOptionOptionGObjs[/* */] = { &sMNOptionSoundGObj, &sMNOptionScreenAdjustGObj, &sMNOptionBackupClearGObj };

// 0x801336F8
scUnkDataBounds D_ovl60_801336F8;

// 0x80133714
scRuntimeInfo D_ovl60_80133714;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnOptionAddLightsDisplayList(Gfx **display_list)
{
    gSPDisplayList(display_list[0]++, dMNOptionDisplayList);
}

// 0x80131B24
void mnOptionUpdateOptionTabSObjs(GObj *gobj, s32 status)
{
    gsColorRGBPair selcolors = dMNOptionSelectedColors;
    gsColorRGBPair hicolors  = dMNOptionHighlightColors;
    gsColorRGBPair notcolors = dMNOptionNotColors;
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

// 0x80131BFC
void mnOptionMakeOptionTabSObjs(GObj *gobj, f32 posx, f32 posy, s32 lrs)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[0], &D_NF_000001E8));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx;
    sobj->pos.y = posy;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[0], &D_NF_00000330));

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

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[0], &D_NF_00000568));

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

    sMNOptionSoundOptionGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[1], &lMNOptionMonoTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 179.0F;
    sobj->pos.y = 48.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[1], &lMNOptionStereoTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 236.0F;
    sobj->pos.y = 48.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[0], &lMNOptionSoundSlashSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x32;
    sobj->sprite.green = 0x32;
    sobj->sprite.blue  = 0x32;

    sobj->pos.x = 229.0F;
    sobj->pos.y = 48.0F;

    mnOptionUpdateSoundOptionSObjs(gobj, sMNOptionSoundIsMonoOrStereo);
}

// 0x80131EF0
void mnOptionMakeSoundTextSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    sMNOptionSoundGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);

    mnOptionMakeOptionTabSObjs(gobj, 113.0F, 42.0F, 17);

    mnOptionUpdateOptionTabSObjs(gobj, sMNOptionOption == mnOption_Option_Sound);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[1], &lMNOptionSoundTextSprite));

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

    sMNOptionScreenAdjustGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);

    mnOptionMakeOptionTabSObjs(gobj, 91.0F, 89.0F, 17);

    mnOptionUpdateOptionTabSObjs(gobj, sMNOptionOption == mnOption_Option_ScreenAdjust);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[1], &lMNOptionScreenAdjustTextSprite));

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

    sMNOptionBackupClearGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);
    mnOptionMakeOptionTabSObjs(gobj, 69.0F, 136.0F, 17);
    mnOptionUpdateOptionTabSObjs(gobj, sMNOptionOption == mnOption_Option_BackupClear);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[1], &lMNOptionBackupClearTextSprite));

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

    sMNOptionMenuGObj = omMakeGObjCommon(0, NULL, 5, 0x80000000);
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

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[0], &lMNCommonSmashLogoSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->pos.x = 235.0F;
    sobj->pos.y = 158.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[1], &lMNOptionHeaderTextSprite);

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

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[0], &lMNCommonCircleSprite));

    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[0], &lMNCommonPaperTearSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0xA0;
    sobj->sprite.green = 0x78;
    sobj->sprite.blue  = 0x14;

    sobj->pos.x = 140.0F;
    sobj->pos.y = 143.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[0], &lMNCommonPaperTearSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0xA0;
    sobj->sprite.green = 0x78;
    sobj->sprite.blue  = 0x14;

    sobj->pos.x = 225.0F;
    sobj->pos.y = 56.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMNOptionFiles[1], &lMNOptionKnobSprite));

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
    if (sMNOptionTotalTimeFrames == D_ovl60_801337D8)
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
    gDPSetFillColor(gDisplayListHead[0]++, gsGetFillColor(GPACK_RGBA8888(0xFF, 0xFF, 0xFF, 0xFF)));

    if (sMNOptionOption == mnOption_Option_Sound)
    {
        gDPFillRectangle
        (
            gDisplayListHead[0]++,
            rect[sMNOptionSoundIsMonoOrStereo][0],
            rect[sMNOptionSoundIsMonoOrStereo][1],
            rect[sMNOptionSoundIsMonoOrStereo][2],
            rect[sMNOptionSoundIsMonoOrStereo][3]
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
    Camera *cam = CameraGetStruct(func_8000B93C(1, NULL, 1, 0x80000000, func_ovl0_800CD2CC, 0x14, 8, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132AE0
void func_ovl60_80132AE0(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(1, NULL, 1, 0x80000000, func_ovl0_800CD2CC, 0xA, 16, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132B80
void func_ovl60_80132B80(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(1, NULL, 1, 0x80000000, func_ovl0_800CD2CC, 0x28, 4, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132C20
void func_ovl60_80132C20(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(1, NULL, 1, 0x80000000, func_ovl0_800CD2CC, 0x3C, 2, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132CC0
void func_ovl60_80132CC0(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(1, NULL, 1, 0x80000000, func_ovl0_800CD2CC, 0x50, 1, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132D60
void mnOptionInitVars(void)
{
    switch (gSceneData.scene_previous)
    {
    case scMajor_Kind_ScreenAdjust:
        sMNOptionOption = mnOption_Option_ScreenAdjust;
        break;

    case scMajor_Kind_BackupClear:
        sMNOptionOption = mnOption_Option_BackupClear;
        break;

    default:
        sMNOptionOption = mnOption_Option_Sound;
        break;
    }
    sMNOptionOptionChangeWait = 0;

    sMNOptionSoundIsMonoOrStereo = (D_8003CB24 == 1) ? 1 : 0;

    sMNOptionIsScreenFlash = gSaveData.is_allow_screenflash;
    sMNOptionTotalTimeFrames = 0;
    D_ovl60_801337D4 = NULL;
    sMNOptionIsOptionSelected = FALSE;
    sMNOptionReturnFrame = sMNOptionTotalTimeFrames + I_MIN_TO_FRAMES(5);
}

// 0x80132E10
void mnOptionSaveDataToSRAM(void)
{
    gSaveData.is_allow_screenflash = sMNOptionIsScreenFlash;
    gSaveData.sound_mono_or_stereo = sMNOptionSoundIsMonoOrStereo;

    lbMemory_SaveData_WriteSRAM();
}

// 0x80132E4C
void mnOptionMainProcUpdate(GObj *gobj)
{
    GObj *select_gobj;
    sb32 stick_range;
    GObj **option_gobj[ARRAY_COUNT(sMNOptionOptionGObjs)] = sMNOptionOptionGObjs;
    s32 is_button;

    sMNOptionTotalTimeFrames++;

    if (sMNOptionTotalTimeFrames >= 10)
    {
        if (sMNOptionTotalTimeFrames == sMNOptionReturnFrame)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_Title;

            mnOptionSaveDataToSRAM();
            func_80005C74();
            return;
        }
        if (func_ovl1_80390B7C() == FALSE)
        {
            sMNOptionReturnFrame = sMNOptionTotalTimeFrames + I_MIN_TO_FRAMES(5);
        }
        if (sMNOptionIsOptionSelected != FALSE)
        {
            func_80005C74();
        }
        if (sMNOptionOptionChangeWait != 0)
        {
            sMNOptionOptionChangeWait--;
        }
        if
        (
            (func_ovl1_80390A04(-20, 20) != FALSE) &&
            (func_ovl1_80390AC0(-20, 20) != FALSE) &&
            (func_ovl1_80390804(U_JPAD | U_CBUTTONS) == FALSE) &&
            (func_ovl1_80390804(D_JPAD | D_CBUTTONS) == FALSE)
        )
        {
            sMNOptionOptionChangeWait = 0;
        }
        if (func_ovl1_8039076C(A_BUTTON | START_BUTTON) != FALSE)
        {
            switch (sMNOptionOption)
            {
            case mnOption_Option_ScreenAdjust:
                mnOptionSaveDataToSRAM();

                func_800269C0(alSound_SFX_MenuSelect);

                mnOptionUpdateOptionTabSObjs(*option_gobj[sMNOptionOption], mnOptionTab_Status_Selected);

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = scMajor_Kind_ScreenAdjust;

                sMNOptionIsOptionSelected = TRUE;
                return;

            case mnOption_Option_BackupClear:
                mnOptionSaveDataToSRAM();

                func_800269C0(alSound_SFX_MenuSelect);

                mnOptionUpdateOptionTabSObjs(*option_gobj[sMNOptionOption], mnOptionTab_Status_Selected);

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = scMajor_Kind_BackupClear;

                sMNOptionIsOptionSelected = TRUE;
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

            mnOptionUpdateOptionTabSObjs(*option_gobj[sMNOptionOption], mnOptionTab_Status_Not);

            if (sMNOptionOption == mnOption_Option_Start)
            {
                sMNOptionOption = mnOption_Option_End;
            }
            else sMNOptionOption--;

            mnOptionUpdateOptionTabSObjs(*option_gobj[sMNOptionOption], mnOptionTab_Status_Highlight);
            omEjectGObjCommon(sMNOptionMenuGObj);
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

            if (sMNOptionOption == mnOption_Option_ScreenAdjust)
            {
                sMNOptionOptionChangeWait += 8;
            }
            mnOptionUpdateOptionTabSObjs(*option_gobj[sMNOptionOption], mnOptionTab_Status_Not);

            if (sMNOptionOption == mnOption_Option_End)
            {
                sMNOptionOption = mnOption_Option_Start;
            }
            else sMNOptionOption++;

            mnOptionUpdateOptionTabSObjs(*option_gobj[sMNOptionOption], mnOptionTab_Status_Highlight);
            omEjectGObjCommon(sMNOptionMenuGObj);
            mnOptionMakeMenuGObj();
        }
        if (sMNOptionOption == mnOption_Option_Sound)
        {
            if
            (
                (func_ovl1_8039076C(L_JPAD | L_TRIG | L_CBUTTONS) != FALSE) ||
                (mnOptionCheckGetOptionStickInputLR(stick_range, -20, 0))
            )
            {
                if (sMNOptionSoundIsMonoOrStereo == 0)
                {
                    func_800269C0(alSound_SFX_MenuScroll1);

                    sMNOptionSoundIsMonoOrStereo = 1;

                    omEjectGObjCommon(sMNOptionSoundOptionGObj);
                    mnOptionMakeSoundOptionSObjs();

                    sMNOptionOptionChangeWait = mnCommonGetOptionChangeWaitN(stick_range, 7);

                    omEjectGObjCommon(sMNOptionMenuGObj);
                    mnOptionMakeMenuGObj();
                    func_80020A34(sMNOptionSoundIsMonoOrStereo);
                }
            }
            if
            (
                (func_ovl1_8039076C(R_JPAD | R_TRIG | R_CBUTTONS) != FALSE) ||
                (mnOptionCheckGetOptionStickInputLR(stick_range, 20, 1))
            )
            {
                if (sMNOptionSoundIsMonoOrStereo == 1)
                {
                    func_800269C0(alSound_SFX_MenuScroll1);

                    sMNOptionSoundIsMonoOrStereo = 0;

                    omEjectGObjCommon(sMNOptionSoundOptionGObj);
                    mnOptionMakeSoundOptionSObjs();

                    sMNOptionOptionChangeWait = mnCommonGetOptionChangeWaitP(stick_range, 7);

                    omEjectGObjCommon(sMNOptionMenuGObj);
                    mnOptionMakeMenuGObj();
                    func_80020A34(sMNOptionSoundIsMonoOrStereo);
                }
            }
            if (func_ovl1_8039076C(A_BUTTON) != FALSE)
            {
                func_800269C0(alSound_SFX_MenuScroll1);

                if (sMNOptionSoundIsMonoOrStereo == 1)
                {
                    sMNOptionSoundIsMonoOrStereo = 0;
                }
                else sMNOptionSoundIsMonoOrStereo = 1;

                omEjectGObjCommon(sMNOptionSoundOptionGObj);
                mnOptionMakeSoundOptionSObjs();
                omEjectGObjCommon(sMNOptionMenuGObj);
                mnOptionMakeMenuGObj();
                func_80020A34(sMNOptionSoundIsMonoOrStereo);
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
    rldm_setup.statusBuf = sMNOptionStatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(sMNOptionStatusBuf);
    rldm_setup.forceBuf = NULL;
    rldm_setup.forceBufSize = 0;

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles(dMNOptionFileIDs, ARRAY_COUNT(dMNOptionFileIDs), sMNOptionFiles, gsMemoryAlloc(rdManagerGetAllocSize(dMNOptionFileIDs, ARRAY_COUNT(dMNOptionFileIDs)), 0x10));
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
    D_ovl60_80133714.arena_size = ((uintptr_t)&func_ovl1_803903E0 - (uintptr_t)&lMNOptionArenaLo);
    func_8000683C(&D_ovl60_80133714);
}
