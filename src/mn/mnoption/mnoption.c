#include <mn/menu.h>
#include <gm/gmsound.h>
#include <sc/scene.h>
#include <lb/library.h>
#include <sys/system_00.h>
#include <sys/thread6.h>

extern void* func_800269C0_275C0(u16);
extern void func_80007080(void*, f32, f32, f32, f32);

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

extern uintptr_t D_NF_00000000;
extern uintptr_t D_NF_00000004;
extern sb32 auSoundQuality;

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

// 0x801337B0 - Padding?
s32 sMNOptionPad0x801337B0[2];

// 0x801337B8
s32 sMNOptionOption;

// 0x801337BC - 0 = mono, 1 = stereo
sb32 sMNOptionSoundMonoOrStereo;

// 0x801337C0
sb32 sMNOptionIsScreenFlash;

// 0x801337C4
s32 sMNOptionPad0x801337C4;

// 0x801337C8
GObj *sMNOptionSoundOptionGObj;

// 0x801337CC
s32 sMNOptionPad0x801337CC;

// 0x801337D0
GObj *sMNOptionMenuGObj;

// 0x801337D4
GObj *D_ovl60_801337D4;

// 0x801337D8
s32 D_ovl60_801337D8;

// 0x801337DC
sb32 sMNOptionIsProceedScene;

// 0x801337E0
s32 sMNOptionOptionChangeWait;

// 0x801337E4
s32 sMNOptionTotalTimeTics;

// 0x801337E8
s32 sMNOptionReturnTic;

// 0x801337EC - Padding?
// s32 sMNOptionPad0x801337EC;

// 0x801337F0
lbFileNode sMNOptionStatusBuffer[24];

// 0x801338B0
void *sMNOptionFiles[2];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80133620
u32 dMNOptionFileIDs[/* */] = { &D_NF_00000000, &D_NF_00000004 };

// 0x80133628
Lights1 dMNOptionLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80133640
Gfx dMNOptionDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNOptionLights1),
    gsSPEndDisplayList()
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnOptionProcLights(Gfx **dls)
{
    gSPDisplayList(dls[0]++, dMNOptionDisplayList);
}

// 0x80131B24
void mnOptionSetOptionSpriteColors(GObj *gobj, s32 status)
{
    // 0x80133668
    syColorRGBPair selcolors = { { 0x00, 0x00, 0x00 }, { 0xFF, 0xFF, 0xFF } };

    // 0x80133670
    syColorRGBPair hicolors  = { { 0x82, 0x00, 0x28 }, { 0xFF, 0x00, 0x28 } };

    // 0x80133678
    syColorRGBPair notcolors = { { 0x00, 0x00, 0x00 }, { 0x82, 0x82, 0xAA } };

    syColorRGBPair *colors;
    SObj *sobj;
    s32 i;

    switch (status)
    {
    case nMNOptionTabStatusHighlight:
        colors = &hicolors;
        break;

    case nMNOptionTabStatusNot:
        colors = &notcolors;
        break;

    case nMNOptionTabStatusSelected:
        colors = &selcolors;
        break;

    default:
        break; // WARNING: Undefined behavior. This will assign sp 0xC to colors which is uninitialized.
    }
    sobj = SObjGetStruct(gobj);

    for (i = 0; i < 3; i++)
    {
        sobj->envcolor.r = colors->prim.r;
        sobj->envcolor.g = colors->prim.g;
        sobj->envcolor.b = colors->prim.b;

        sobj->sprite.red   = colors->env.r;
        sobj->sprite.green = colors->env.g;
        sobj->sprite.blue  = colors->env.b;

        sobj = sobj->next;
    }
}

// 0x80131BFC
void mnOptionMakeOptionTabs(GObj *gobj, f32 posx, f32 posy, s32 lrs)
{
    SObj *sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[0], &lMNCommonOptionTabLeftSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx;
    sobj->pos.y = posy;

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[0], &lMNCommonOptionTabMiddleSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx + 16.0F;
    sobj->pos.y = posy;

    sobj->cms = 0;
    sobj->cmt = 0;

    sobj->masks = 4;
    sobj->maskt = 0;

    sobj->lrs = lrs * 8;
    sobj->lrt = 29;

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[0], &lMNCommonOptionTabRightSprite));

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

    sMNOptionSoundOptionGObj = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[1], &lMNOptionMonoTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 179.0F;
    sobj->pos.y = 48.0F;

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[1], &lMNOptionStereoTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 236.0F;
    sobj->pos.y = 48.0F;

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[0], &lMNCommonTextSlashSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x32;
    sobj->sprite.green = 0x32;
    sobj->sprite.blue  = 0x32;

    sobj->pos.x = 229.0F;
    sobj->pos.y = 48.0F;

    mnOptionUpdateSoundOptionSObjs(gobj, sMNOptionSoundMonoOrStereo);
}

// 0x80131EF0
void mnOptionMakeSoundTextSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    sMNOptionSoundGObj = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);

    mnOptionMakeOptionTabs(gobj, 113.0F, 42.0F, 17);
    mnOptionSetOptionSpriteColors(gobj, sMNOptionOption == nMNOptionOptionSound);

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[1], &lMNOptionSoundTextSprite));

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

    sMNOptionScreenAdjustGObj = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);

    mnOptionMakeOptionTabs(gobj, 91.0F, 89.0F, 17);

    mnOptionSetOptionSpriteColors(gobj, sMNOptionOption == nMNOptionOptionScreenAdjust);

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[1], &lMNOptionScreenAdjustTextSprite));

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

    sMNOptionBackupClearGObj = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    mnOptionMakeOptionTabs(gobj, 69.0F, 136.0F, 17);
    mnOptionSetOptionSpriteColors(gobj, sMNOptionOption == nMNOptionOptionBackupClear);

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[1], &lMNOptionBackupClearTextSprite));

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

    sobj->envcolor.r = 0x00;
    sobj->envcolor.g = 0x00;
    sobj->envcolor.b = 0x00;

    sobj->sprite.red   = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue  = 0xFF;
}

// 0x801321A8
void mnOptionMakeMenuGObj(void)
{
    s32 unused[2];

    // 0x80133680
    intptr_t sp1C[/* */] = { 0x6A8, 0x1580, 0x1CF0 };

    // 0x8013368C
    Vec2f sp3C[/* */] = 
    {
        { 132.0F, 195.0F },
        { 104.0F, 195.0F },
        { 119.0F, 195.0F },
        { 103.0F, 195.0F }
    };

    sMNOptionMenuGObj = gcMakeGObjSPAfter(0, NULL, 5, GOBJ_LINKORDER_DEFAULT);
}

// 0x80132248
void mnOptionHeaderProcDisplay(GObj *gobj)
{
    gDPPipeSync(gSYTasklogDLHeads[0]++);
    gDPSetCycleType(gSYTasklogDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYTasklogDLHeads[0]++, 0, 0, 160, 120, 20, 230);
    gDPSetCombineMode(gSYTasklogDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gSYTasklogDLHeads[0]++, 225, 143, 310, 230);
    gDPPipeSync(gSYTasklogDLHeads[0]++);
    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gSYTasklogDLHeads[0]++, G_CYC_1CYCLE);

    lbCommonClearExternSpriteParams();
    lbCommonDrawSObjAttr(gobj);
}

// 0x8013238C
void mnOptionMakeHeaderSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, mnOptionHeaderProcDisplay, 1, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[0], &lMNCommonSmashLogoSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->pos.x = 235.0F;
    sobj->pos.y = 158.0F;

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[1], &lMNOptionHeaderTextSprite));

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

    gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[0], &lMNCommonWallpaperSprite));

    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[0], &lMNCommonDecalPaperSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0xA0;
    sobj->sprite.green = 0x78;
    sobj->sprite.blue  = 0x14;

    sobj->pos.x = 140.0F;
    sobj->pos.y = 143.0F;

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[0], &lMNCommonDecalPaperSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0xA0;
    sobj->sprite.green = 0x78;
    sobj->sprite.blue  = 0x14;

    sobj->pos.x = 225.0F;
    sobj->pos.y = 56.0F;

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNOptionFiles[1], &lMNOptionKnobSprite));

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
    gDPPipeSync(gSYTasklogDLHeads[0]++);
    gDPSetCycleType(gSYTasklogDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYTasklogDLHeads[0]++, 0, 0, 0x66, 0x4C, 0x0C, 0x66);
    gDPSetCombineMode(gSYTasklogDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gSYTasklogDLHeads[0]++, 27, 25, 185, 122);
    gDPPipeSync(gSYTasklogDLHeads[0]++);
    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gSYTasklogDLHeads[0]++, G_CYC_1CYCLE);
    lbCommonClearExternSpriteParams();
    lbCommonDrawSObjAttr(gobj);
}

// 0x8013275C
void func_ovl60_8013275C(void)
{
    if (D_ovl60_801337D4 != NULL)
    {
        gcEjectGObj(D_ovl60_801337D4);

        D_ovl60_801337D4 = NULL;
    }
}

// 0x80132794 - Unused?
void func_ovl60_80132794(GObj *gobj)
{
    if (sMNOptionTotalTimeTics == D_ovl60_801337D8)
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
void mnOptionSoundUnderlineProcDisplay(GObj *gobj)
{
    // 0x801336AC
    syRectangle rect[/* */] =
    {
        { 233,  64, 273,  64 },
        { 179,  64, 225,  64 }
    };

    // 0x801336CC
    syRectangle unused[/* */] =
    {
        {  0xE9,  0x5E, 0x106,  0x5E },
        {  0xC8,  0x5E,  0xE2,  0x5E }
    };

    gDPPipeSync(gSYTasklogDLHeads[0]++);
    gDPSetCycleType(gSYTasklogDLHeads[0]++, G_CYC_FILL);
    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gSYTasklogDLHeads[0]++, syDisplayGetFillColor(GPACK_RGBA8888(0xFF, 0xFF, 0xFF, 0xFF)));

    if (sMNOptionOption == nMNOptionOptionSound)
    {
        gDPFillRectangle
        (
            gSYTasklogDLHeads[0]++,
            rect[sMNOptionSoundMonoOrStereo].ulx,
            rect[sMNOptionSoundMonoOrStereo].uly,
            rect[sMNOptionSoundMonoOrStereo].lrx,
            rect[sMNOptionSoundMonoOrStereo].lry
        );
    }
    gDPPipeSync(gSYTasklogDLHeads[0]++);
    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gSYTasklogDLHeads[0]++, G_CYC_1CYCLE);
    lbCommonClearExternSpriteParams();
}

// 0x801329F4
void mnOptionMakeSoundUnderlineGObj(void)
{
    gcAddGObjDisplay
    (
        gcMakeGObjSPAfter
        (
            0,
            NULL,
            5,
            GOBJ_LINKORDER_DEFAULT
        ),
        mnOptionSoundUnderlineProcDisplay,
        3,
        GOBJ_DLLINKORDER_DEFAULT,
        GOBJ_CAMTAG_DEFAULT
    );
}

// 0x80132A40
void mnOptionMakeLink3Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            20,
            CAMERA_MASK_DLLINK(3),
            -1,
            0,
            1,
            0,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132AE0
void mnOptionMakeLink4Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            10,
            CAMERA_MASK_DLLINK(4),
            -1,
            0,
            1,
            0,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132B80
void mnOptionMakeLink2Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            40,
            CAMERA_MASK_DLLINK(2),
            -1,
            0,
            1,
            0,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132C20
void mnOptionMakeLink1Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            60,
            CAMERA_MASK_DLLINK(1),
            -1,
            0,
            1,
            0,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132CC0
void mnOptionMakeLink0Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            80,
            CAMERA_MASK_DLLINK(0),
            -1,
            0,
            1,
            0,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132D60
void mnOptionInitVars(void)
{
    switch (gSceneData.scene_previous)
    {
    case nSCKindScreenAdjust:
        sMNOptionOption = nMNOptionOptionScreenAdjust;
        break;

    case nSCKindBackupClear:
        sMNOptionOption = nMNOptionOptionBackupClear;
        break;

    default:
        sMNOptionOption = nMNOptionOptionSound;
        break;
    }
    sMNOptionOptionChangeWait = 0;

    sMNOptionSoundMonoOrStereo = (auSoundQuality == 1) ? 1 : 0;

    sMNOptionIsScreenFlash = gSaveData.is_allow_screenflash;
    sMNOptionTotalTimeTics = 0;
    D_ovl60_801337D4 = NULL;
    sMNOptionIsProceedScene = FALSE;
    sMNOptionReturnTic = sMNOptionTotalTimeTics + I_MIN_TO_TICS(5);
}

// 0x80132E10
void mnOptionWriteBackup(void)
{
    gSaveData.is_allow_screenflash = sMNOptionIsScreenFlash;
    gSaveData.sound_mono_or_stereo = sMNOptionSoundMonoOrStereo;

    lbBackupWrite();
}

// 0x80132E4C
void mnOptionProcRun(GObj *gobj)
{
    GObj *select_gobj;
    sb32 stick_range;

    // 0x801336EC
    GObj **option_gobj[/* */] = { &sMNOptionSoundGObj, &sMNOptionScreenAdjustGObj, &sMNOptionBackupClearGObj };

    s32 is_button;

    sMNOptionTotalTimeTics++;

    if (sMNOptionTotalTimeTics >= 10)
    {
        if (sMNOptionTotalTimeTics == sMNOptionReturnTic)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

            mnOptionWriteBackup();

            syTasklogSetLoadScene();
            return;
        }
        if (scSubsysControllerCheckNoInputAll() == FALSE)
        {
            sMNOptionReturnTic = sMNOptionTotalTimeTics + I_MIN_TO_TICS(5);
        }
        if (sMNOptionIsProceedScene != FALSE)
        {
            syTasklogSetLoadScene();
        }
        if (sMNOptionOptionChangeWait != 0)
        {
            sMNOptionOptionChangeWait--;
        }
        if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-20, 20) != FALSE)           &&
            (scSubsysControllerGetPlayerStickInRangeUD(-20, 20) != FALSE)           &&
            (scSubsysControllerGetPlayerHoldButtons(U_JPAD | U_CBUTTONS) == FALSE)  &&
            (scSubsysControllerGetPlayerHoldButtons(D_JPAD | D_CBUTTONS) == FALSE)
        )
        {
            sMNOptionOptionChangeWait = 0;
        }
        if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | START_BUTTON) != FALSE)
        {
            switch (sMNOptionOption)
            {
            case nMNOptionOptionScreenAdjust:
                mnOptionWriteBackup();

                func_800269C0_275C0(nSYAudioFGMMenuSelect);

                mnOptionSetOptionSpriteColors(*option_gobj[sMNOptionOption], nMNOptionTabStatusSelected);

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = nSCKindScreenAdjust;

                sMNOptionIsProceedScene = TRUE;
                return;

            case nMNOptionOptionBackupClear:
                mnOptionWriteBackup();

                func_800269C0_275C0(nSYAudioFGMMenuSelect);

                mnOptionSetOptionSpriteColors(*option_gobj[sMNOptionOption], nMNOptionTabStatusSelected);

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = nSCKindBackupClear;

                sMNOptionIsProceedScene = TRUE;
                return;
            }
        }

        if (scSubsysControllerGetPlayerTapButtons(B_BUTTON) != FALSE)
        {
            mnOptionWriteBackup();

            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindModeSelect;

            syTasklogSetLoadScene();
        }
        if
        (
            mnOptionCheckGetOptionButtonInput(is_button, U_JPAD | U_CBUTTONS) ||
            mnOptionCheckGetOptionStickInputUD(stick_range, 20, 1)
        )
        {
            func_800269C0_275C0(nSYAudioFGMMenuScroll2);

            mnOptionSetOptionChangeWaitP(is_button, stick_range, 7);

            mnOptionSetOptionSpriteColors(*option_gobj[sMNOptionOption], nMNOptionTabStatusNot);

            if (sMNOptionOption == nMNOptionOptionStart)
            {
                sMNOptionOption = nMNOptionOptionEnd;
            }
            else sMNOptionOption--;

            mnOptionSetOptionSpriteColors(*option_gobj[sMNOptionOption], nMNOptionTabStatusHighlight);
            gcEjectGObj(sMNOptionMenuGObj);
            mnOptionMakeMenuGObj();
        }
        if
        (
            mnOptionCheckGetOptionButtonInput(is_button, D_JPAD | D_CBUTTONS) ||
            mnOptionCheckGetOptionStickInputUD(stick_range, -20, 0)
        )
        {
            func_800269C0_275C0(nSYAudioFGMMenuScroll2);

            mnOptionSetOptionChangeWaitN(is_button, stick_range, 7);

            if (sMNOptionOption == nMNOptionOptionScreenAdjust)
            {
                sMNOptionOptionChangeWait += 8;
            }
            mnOptionSetOptionSpriteColors(*option_gobj[sMNOptionOption], nMNOptionTabStatusNot);

            if (sMNOptionOption == nMNOptionOptionEnd)
            {
                sMNOptionOption = nMNOptionOptionStart;
            }
            else sMNOptionOption++;

            mnOptionSetOptionSpriteColors(*option_gobj[sMNOptionOption], nMNOptionTabStatusHighlight);
            gcEjectGObj(sMNOptionMenuGObj);
            mnOptionMakeMenuGObj();
        }
        if (sMNOptionOption == nMNOptionOptionSound)
        {
            if
            (
                (scSubsysControllerGetPlayerTapButtons(L_JPAD | L_TRIG | L_CBUTTONS) != FALSE) ||
                (mnOptionCheckGetOptionStickInputLR(stick_range, -20, 0))
            )
            {
                if (sMNOptionSoundMonoOrStereo == 0)
                {
                    func_800269C0_275C0(nSYAudioFGMMenuScroll1);

                    sMNOptionSoundMonoOrStereo = 1;

                    gcEjectGObj(sMNOptionSoundOptionGObj);
                    mnOptionMakeSoundOptionSObjs();

                    sMNOptionOptionChangeWait = mnCommonGetOptionChangeWaitN(stick_range, 7);

                    gcEjectGObj(sMNOptionMenuGObj);
                    mnOptionMakeMenuGObj();
                    auSetSoundQuality(sMNOptionSoundMonoOrStereo);
                }
            }
            if
            (
                (scSubsysControllerGetPlayerTapButtons(R_JPAD | R_TRIG | R_CBUTTONS) != FALSE) ||
                (mnOptionCheckGetOptionStickInputLR(stick_range, 20, 1))
            )
            {
                if (sMNOptionSoundMonoOrStereo == 1)
                {
                    func_800269C0_275C0(nSYAudioFGMMenuScroll1);

                    sMNOptionSoundMonoOrStereo = 0;

                    gcEjectGObj(sMNOptionSoundOptionGObj);
                    mnOptionMakeSoundOptionSObjs();

                    sMNOptionOptionChangeWait = mnCommonGetOptionChangeWaitP(stick_range, 7);

                    gcEjectGObj(sMNOptionMenuGObj);
                    mnOptionMakeMenuGObj();
                    auSetSoundQuality(sMNOptionSoundMonoOrStereo);
                }
            }
            if (scSubsysControllerGetPlayerTapButtons(A_BUTTON) != FALSE)
            {
                func_800269C0_275C0(nSYAudioFGMMenuScroll1);

                if (sMNOptionSoundMonoOrStereo == 1)
                {
                    sMNOptionSoundMonoOrStereo = 0;
                }
                else sMNOptionSoundMonoOrStereo = 1;

                gcEjectGObj(sMNOptionSoundOptionGObj);
                mnOptionMakeSoundOptionSObjs();
                gcEjectGObj(sMNOptionMenuGObj);
                mnOptionMakeMenuGObj();
                auSetSoundQuality(sMNOptionSoundMonoOrStereo);
            }
        }
    }
}

// 0x8013346C
void mnOptionProcStart(void)
{
    lbRelocSetup rl_setup;

    rl_setup.table_addr = &lLBRelocTableAddr;
    rl_setup.table_files_num = &lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sMNOptionStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sMNOptionStatusBuffer);
    rl_setup.force_status_buffer = NULL;
    rl_setup.force_status_buffer_size = 0;

    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dMNOptionFileIDs,
        ARRAY_COUNT(dMNOptionFileIDs),
        sMNOptionFiles,
        syTasklogMalloc
        (
            lbRelocGetAllocSize
            (
                dMNOptionFileIDs,
                ARRAY_COUNT(dMNOptionFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mnOptionProcRun, 0, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));
    mnOptionInitVars();
    mnOptionMakeLink0Camera();
    mnOptionMakeLink1Camera();
    mnOptionMakeLink2Camera();
    mnOptionMakeLink3Camera();
    mnOptionMakeLink4Camera();
    mnOptionMakeDecalSObjs();
    mnOptionMakeHeaderSObjs();
    mnOptionMakeSoundTextSObj();
    mnOptionMakeSoundOptionSObjs();
    mnOptionMakeScreenAdjustSObj();
    mnOptionMakeBackupClearSObj();
    mnOptionMakeSoundUnderlineGObj();
    mnOptionMakeMenuGObj();

    if (gSceneData.scene_previous == nSCKindScreenAdjust)
    {
        auPlaySong(0, nSYAudioBGMModeSelect);
    }
}

// 0x801336F8
syDisplaySetup dMNOptionDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x80133714
scRuntimeInfo dMNOptionTasklogSetup =
{
    0x00000000,
    func_8000A5E4,
    func_8000A340,
    &ovl60_BSS_END,
    0,
    1,
    2,
    0xEA60,
    0,
    0,
    0,
    0x8000,
    0x20000,
    0xC000,
    mnOptionProcLights,
    update_contdata,
    0,
    0x600,
    0,
    0,
    0,
    0,
    0x88,
    0,
    0,
    0,
    0,
    0,
    0,
    0x88,
    0,
    0x6C,
    0,
    0x90,
    mnOptionProcStart
};

// 0x801335C0
void mnOptionStartScene(void)
{
    dMNOptionDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    func_80007024(&dMNOptionDisplaySetup);

    dMNOptionTasklogSetup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl60_BSS_END);
    syTasklogInit(&dMNOptionTasklogSetup);
}
