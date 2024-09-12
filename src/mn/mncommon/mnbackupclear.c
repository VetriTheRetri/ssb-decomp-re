#include <mn/menu.h>
#include <sc/scene.h>
#include <gm/gmsound.h>
#include <sys/system_00.h>
#include <sys/thread6.h>
#include <ovl0/reloc_data_mgr.h>

extern void* func_800269C0_275C0(u16);
extern void func_80007080(void*, f32, f32, f32, f32);

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define mnBackupClearCheckGetOptionButtonInput(is_button, mask) mnCommonCheckGetOptionButtonInput(sMNBackupClearOptionChangeWait, is_button, mask)
#define mnBackupClearCheckGetOptionStickInputUD(stick_range, min, b) mnCommonCheckGetOptionStickInputUD(sMNBackupClearOptionChangeWait, stick_range, min, b)
#define mnBackupClearCheckGetOptionStickInputLR(stick_range, min, b) mnCommonCheckGetOptionStickInputLR(sMNBackupClearOptionChangeWait, stick_range, min, b)
#define mnBackupClearSetOptionChangeWaitP(is_button, stick_range, div) mnCommonSetOptionChangeWaitP(sMNBackupClearOptionChangeWait, is_button, stick_range, div)
#define mnBackupClearSetOptionChangeWaitN(is_button, stick_range, div) mnCommonSetOptionChangeWaitN(sMNBackupClearOptionChangeWait, is_button, stick_range, div)

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_00000000;
extern uintptr_t D_NF_0000004D;
extern uintptr_t D_NF_0000004E;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801330A0
GObj *sMNBackupClearOptionNewcomersGObj;

// 0x801330A4
GObj *sMNBackupClearOption1PHighScoreGObj;

// 0x801330A8
GObj *sMNBackupClearOptionBonusStageTimeGObj;

// 0x801330AC
GObj *sMNBackupClearOptionVSRecordGObj;

// 0x801330B0
GObj *sMNBackupClearOptionPrizeGObj;

// 0x801330B4
GObj *sMNBackupClearOptionAllDataClearGObj;

// 0x801330B8
s32 sMNBackupPad0x801330B8[2];

// 0x801330C0
s32 sMNBackupClearOption;

// 0x801330C4
GObj *sMNBackupClearUnusedGObj;

// 0x801330C8
GObj *sMNBackupClearOptionConfirmGObj;

// 0x801330CC
sb32 sMNBackupClearOptionConfirmYesOrNo;

// 0x801330D0
s32 sMNBackupClearOptionMenuKind;

// 0x801330D4
int *sMNBackupClearOptionConfirmLUTOrigin;

// 0x801330D8
s32 sMNBackupClearPad0x801330D8;

// 0x801330DC
s32 sMNBackupClearOptionChangeWait;

// 0x801330E0
s32 sMNBackupClearTotalTimeTics;

// 0x801330E4
s32 sMNBackupClearUpdateWait;

// 0x801330E8
s32 sMNBackupClearOptionConfirmAnimLength;

// 0x801330EC
s32 sMNBackupClearReturnTic;

// 0x801330F0
rdFileNode sMNBackupClearStatusBuf[24];

// 0x801331B0
void *sMNBackupClearFiles[3];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80132E80
u32 dMNBackupClearFileIDs[/* */] =
{
    &D_NF_00000000,
    &D_NF_0000004D,
    &D_NF_0000004E
};

// 0x80132E8C
u16 dMNBackupClearUnused0x80132E8C[/* */] =
{
    0x0000, 0xFFFF,
    0xFFFF, 0xFFFF,
    0xFFFF, 0xFFFF,
    0xFFFF, 0xFFFF,
    0xFFFF, 0xFFFF,
    0xFFFF, 0xFFFF,
    0xFFFF, 0xFFFF,
    0xFFFF, 0xFFFF,
    0x0000, 0x0000
};

// 0x80132EB0
Lights1 dMNBackupClearLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80132EC8
Gfx dMNBackupClearDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNBackupClearLights1),
    gsSPEndDisplayList()
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnBackupClearProcLights(Gfx **dls)
{
    gSPDisplayList(dls[0]++, dMNBackupClearDisplayList);
}

// 0x80131B24
void mnBackupClearMakeUnused(s32 option)
{
    s32 unused[2];
    
    // 0x80132EF0
    intptr_t sp48[/* */] =
    {
        0x000011E0,
        0x00001770,
        0x000033B0,
        0x00001B98,
        0x00002890,
        0x00002D30
    };

    // 0x80132F08
    Vec2f sp18[/* */] =
    {
        { 111.0F, 197.0F },
        { 117.0F, 197.0F },
        { 110.0F, 197.0F },
        { 132.0F, 197.0F },
        { 119.0F, 197.0F },
        { 126.0F, 197.0F }
    };
    sMNBackupClearUnusedGObj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);
}

// 0x80131BC8
void mnBackupClearMakeHeaderSObjs(void)
{
    GObj *gobj;
    SObj *sobj;
    
    gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    
    sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sMNBackupClearFiles[2], &lMNBackupClearHeaderOptionSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x5F;
    sobj->sprite.green = 0x58;
    sobj->sprite.blue = 0x46;
    
    sobj->pos.x = 24.0F;
    sobj->pos.y = 17.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearHeaderBackupClearSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->env_color.r = 0x00;
    sobj->env_color.g = 0x00;
    sobj->env_color.b = 0x00;
    
    sobj->sprite.red = 0xF2;
    sobj->sprite.green = 0xC7;
    sobj->sprite.blue = 0x0D;
    
    sobj->pos.x = 133.0F;
    sobj->pos.y = 22.0F;
}

// 0x80131CE4
void mnBackupClearUpdateOptionTabColors(GObj *gobj, s32 status)
{
    // 0x80132F38
    syColorRGB notcolors = { 0x7D, 0x45, 0x07 };

    // 0x80132F3C
    syColorRGB hicolors = { 0xFF, 0xA8, 0x00 };

    syColorRGB *colors;

    SObj *sobj = SObjGetStruct(gobj);

    colors = (status != nMNOptionTabStatusNot) ? &hicolors : &notcolors;
    
    sobj->sprite.red   = colors->r;
    sobj->sprite.green = colors->g;
    sobj->sprite.blue  = colors->b;
}

// 0x80131D44
void mnBackupClearUpdateOptionTabSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    // 0x80132F40
    GObj **option_gobj[/* */] =
    {
        &sMNBackupClearOptionNewcomersGObj,
        &sMNBackupClearOption1PHighScoreGObj,
        &sMNBackupClearOptionBonusStageTimeGObj,
        &sMNBackupClearOptionVSRecordGObj,
        &sMNBackupClearOptionPrizeGObj,
        &sMNBackupClearOptionAllDataClearGObj
    };

    // 0x80132F58
    intptr_t offsets[/* */] =
    {
        &lMNBackupClearOptionNewcomersSprite,
        &lMNBackupClearOption1PHighScoreSprite,
        &lMNBackupClearOptionBonusStageTimeSprite,
        &lMNBackupClearOptionVSRecordSprite,
        &lMNBackupClearOptionPrizeSprite,
        &lMNBackupClearOptionAllDataClearSprite
    };

    // 0x80132F70
    Vec2f pos[/* */] =
    {
        { 95.0F,  54.0F },
        { 95.0F,  81.0F },
        { 95.0F, 108.0F },
        { 95.0F, 135.0F },
        { 95.0F, 162.0F },
        { 95.0F, 189.0F }
    };

    s32 i;

    for (i = 0; i < (ARRAY_COUNT(option_gobj) + ARRAY_COUNT(offsets) + ARRAY_COUNT(pos)) / 3; i++)
    {
        *option_gobj[i] = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);

        gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
        
        sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sMNBackupClearFiles[1], offsets[i]));

        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
        
        sobj->pos.x = pos[i].x;
        sobj->pos.y = pos[i].y;
        
        if (i == sMNBackupClearOption)
        {
            mnBackupClearUpdateOptionTabColors(gobj, nMNOptionTabStatusHighlight);
        }
        else mnBackupClearUpdateOptionTabColors(gobj, nMNOptionTabStatusNot);
    }
}

// 0x80131F38
void mnBackupClearEjectOptionGObjs(void)
{
    gcEjectGObj(sMNBackupClearOptionNewcomersGObj);
    gcEjectGObj(sMNBackupClearOption1PHighScoreGObj);
    gcEjectGObj(sMNBackupClearOptionVSRecordGObj);
    gcEjectGObj(sMNBackupClearOptionBonusStageTimeGObj);
    gcEjectGObj(sMNBackupClearOptionPrizeGObj);
    gcEjectGObj(sMNBackupClearOptionAllDataClearGObj);
}

// 0x80131F98
void mnBackupClearOptionConfirmProcDraw(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gDisplayListHead[0]++, syDisplayGetFillColor(GPACK_RGBA8888(0x00, 0x00, 0xFF, 0xFF)));
    gDPFillRectangle(gDisplayListHead[0]++, 58, 64, 262, 64);
    gDPFillRectangle(gDisplayListHead[0]++, 58, 172, 262, 172);
    gDPFillRectangle(gDisplayListHead[0]++, 58, 64, 58, 172);
    gDPFillRectangle(gDisplayListHead[0]++, 262, 64, 262, 172);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    
    lbCommonClearExternSpriteParams();
    lbCommonDrawSObjAttr(gobj);
}

// 0x80132124
void mnBackupClearEjectOptionConfirmGObj(void)
{
    gcEjectGObj(sMNBackupClearOptionConfirmGObj);
}

// 0x80132148 - 0 = yes, 1 = no
void mnBackupClearMakeOptionConfirmSObjs(sb32 confirm_kind, sb32 yes_or_no)
{
    GObj *gobj;
    SObj *sobj;

    sMNBackupClearOptionConfirmGObj = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    
    gcAddGObjDisplay(gobj, mnBackupClearOptionConfirmProcDraw, 2, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    
    if (yes_or_no == 0)
    {
        sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearOptionYesSprite));
        sobj->sprite.LUT = gcGetDataFromFile(int*, sMNBackupClearFiles[1], &lMNBackupClearOptionYesHighlightPalette);
    }
    else
    {
        sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearOptionYesSprite));
        sobj->sprite.LUT = gcGetDataFromFile(int*, sMNBackupClearFiles[1], &lMNBackupClearOptionYesNotPalette);
    }
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 189.0F;
    sobj->pos.y = 106.0F;
    
    if (yes_or_no == 0)
    {
        sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearOptionNoSprite));
        sobj->sprite.LUT = gcGetDataFromFile(int*, sMNBackupClearFiles[1], &lMNBackupClearOptionNoNotPalette);
    }
    else
    {
        sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearOptionNoSprite));
        sobj->sprite.LUT = gcGetDataFromFile(int*, sMNBackupClearFiles[1], &lMNBackupClearOptionNoHighlightPalette);
    }
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 83.0F;
    sobj->pos.y = 106.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearOptionCircleSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    if (yes_or_no == 0)
    {
        sobj->pos.x = 193.0F;
        sobj->pos.y = 110.0F;
    }
    else
    {
        sobj->pos.x = 87.0F;
        sobj->pos.y = 110.0F;
    }
    sobj->sprite.red = 0xEF;
    sobj->sprite.green = 0x9D;
    sobj->sprite.blue = 0x00;
    
    if (confirm_kind == 1)
    {
        sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearTextIsOkaySprite));
        
        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
        
        sobj->sprite.red = 0xEF;
        sobj->sprite.green = 0x9D;
        sobj->sprite.blue = 0x00;
        
        sobj->pos.x = 59.0F;
        sobj->pos.y = 83.0F;
    }
    else
    {
        sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearTextAreYouSureSprite));
        
        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
        
        sobj->sprite.red = 0xEF;
        sobj->sprite.green = 0x9D;
        sobj->sprite.blue = 0x00;
        
        sobj->pos.x = 59.0F;
        sobj->pos.y = 83.0F;
    }
}

// 0x80132430
void mnBackupClearMakeCamera(void)
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
            CAMERA_MASK_DLLINK(2) |
            CAMERA_MASK_DLLINK(1) |
            CAMERA_MASK_DLLINK(0),
            -1,
            0,
            1,
            NULL,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801324D0
void mnBackupClearInitVars(void)
{
    sMNBackupClearOptionMenuKind = 0;
    sMNBackupClearOption = nMNBackupClearOptionStart;
    sMNBackupClearOptionChangeWait = 0;
    sMNBackupClearTotalTimeTics = 0;
    sMNBackupClearUpdateWait = 10;
    sMNBackupClearOptionConfirmAnimLength = 0;
    sMNBackupClearReturnTic = sMNBackupClearTotalTimeTics + I_MIN_TO_FRAMES(5);
}

// 0x8013251C
void mnBackupClearApplyOptionID(s32 option)
{
    switch (option)
    {
    case nMNBackupClearOptionNewcomers:
        scBackupClearNewcomers();
        break;
        
    case nMNBackupClearOption1PHighScore:
        scBackupClear1PHighScore();
        break;
        
    case nMNBackupClearOptionVSRecord:
        scBackupClearVSRecord();
        break;
        
    case nMNBackupClearOptionBonusStageTime:
        scBackupClearBonusStageTime();
        break;
        
    case nMNBackupClearOptionPrize:
        scBackupClearPrize();
        break;
        
    case nMNBackupClearOptionAllDataClear:
        scBackupClearAllData();
        scBackupApplyOptions();
        break;
    }
    scBackupCorrectErrors();
    scBackupWrite();
    func_800269C0_275C0(nSYAudioFGMOptionBackupClear);
}

// 0x801325CC - unused?
func_ovl53_801325CC(void)
{
    return;
}

// 0x801325D4
void mnBackupClearUpdateOptionMainMenu(void)
{
    s32 stick_range;

    // 0x80132FA0
    GObj **option_gobj[/* */] =
    {
        &sMNBackupClearOptionNewcomersGObj,
        &sMNBackupClearOption1PHighScoreGObj,
        &sMNBackupClearOptionBonusStageTimeGObj,
        &sMNBackupClearOptionVSRecordGObj,
        &sMNBackupClearOptionPrizeGObj,
        &sMNBackupClearOptionAllDataClearGObj
    };
    sb32 is_button;

    if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | START_BUTTON) != FALSE)
    {
        switch (sMNBackupClearOption)
        {
        case nMNBackupClearOptionNewcomers:
        case nMNBackupClearOption1PHighScore:
        case nMNBackupClearOptionBonusStageTime:
        case nMNBackupClearOptionVSRecord:
        case nMNBackupClearOptionPrize:
        case nMNBackupClearOptionAllDataClear:
            func_800269C0_275C0(nSYAudioFGMMenuSelect);
            mnBackupClearEjectOptionGObjs();

            sMNBackupClearOptionMenuKind = 1;
            sMNBackupClearOptionConfirmYesOrNo = 1;

            mnBackupClearMakeOptionConfirmSObjs(1, sMNBackupClearOptionConfirmYesOrNo);

            sMNBackupClearUpdateWait = 10;
            return;
        }
    }
    if (scSubsysControllerGetPlayerTapButtons(B_BUTTON) != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = nSCKindOptions;

        func_ovl53_801325CC();
        leoInitUnit_atten();
        return;
    }
    if
    (
        mnBackupClearCheckGetOptionButtonInput(is_button, U_JPAD | U_CBUTTONS) ||
        mnBackupClearCheckGetOptionStickInputUD(stick_range, 20, 1)
    )
    {
        func_800269C0_275C0(nSYAudioFGMMenuScroll2);

        mnBackupClearSetOptionChangeWaitP(is_button, stick_range, 7);
        mnBackupClearUpdateOptionTabColors(*option_gobj[sMNBackupClearOption], nMNOptionTabStatusNot);

        if (sMNBackupClearOption == nMNBackupClearOptionStart)
        {
            sMNBackupClearOption = nMNBackupClearOptionEnd;
        }
        else sMNBackupClearOption--;

        if (sMNBackupClearOption == nMNBackupClearOptionStart)
        {
            sMNBackupClearOptionChangeWait += 8;
        }
        gcEjectGObj(sMNBackupClearUnusedGObj);
        mnBackupClearMakeUnused(sMNBackupClearOption);
        mnBackupClearUpdateOptionTabColors(*option_gobj[sMNBackupClearOption], nMNOptionTabStatusHighlight);
    }
    else if
    (
        mnBackupClearCheckGetOptionButtonInput(is_button, D_JPAD | D_CBUTTONS) ||
        mnBackupClearCheckGetOptionStickInputUD(stick_range, -20, 0)
    )
    {
        func_800269C0_275C0(nSYAudioFGMMenuScroll2);

        mnBackupClearSetOptionChangeWaitN(is_button, stick_range, 7);
        mnBackupClearUpdateOptionTabColors(*option_gobj[sMNBackupClearOption], nMNOptionTabStatusNot);

        if (sMNBackupClearOption == nMNBackupClearOptionEnd)
        {
            sMNBackupClearOption = nMNBackupClearOptionStart;
        }
        else sMNBackupClearOption++;

        if (sMNBackupClearOption == nMNBackupClearOptionEnd)
        {
            sMNBackupClearOptionChangeWait += 8;
        }
        gcEjectGObj(sMNBackupClearUnusedGObj);
        mnBackupClearMakeUnused(sMNBackupClearOption);
        mnBackupClearUpdateOptionTabColors(*option_gobj[sMNBackupClearOption], nMNOptionTabStatusHighlight);
    }
}

// 0x80132928
void func_ovl53_80132928(void)
{
    return;
}

// 0x80132930
void mnBackupClearUpdateOptionConfirmMenu(sb32 confirm_kind)
{
    s32 stick_range;
    sb32 is_button;

    if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | START_BUTTON) != FALSE)
    {
        switch (sMNBackupClearOptionConfirmYesOrNo)
        {
        case 0:
            func_800269C0_275C0(nSYAudioFGMMenuSelect);
            if ((confirm_kind == 1) && (sMNBackupClearOption == nMNBackupClearOptionAllDataClear))
            {
                sMNBackupClearOptionMenuKind = 2;
                sMNBackupClearOptionConfirmYesOrNo = 1;

                mnBackupClearEjectOptionConfirmGObj();
                mnBackupClearMakeOptionConfirmSObjs(2, sMNBackupClearOptionConfirmYesOrNo);

                sMNBackupClearUpdateWait = 10;
            }
            else
            {
                sMNBackupClearOptionConfirmLUTOrigin = SObjGetStruct(sMNBackupClearOptionConfirmGObj)->sprite.LUT;
                SObjGetStruct(sMNBackupClearOptionConfirmGObj)->sprite.LUT = gcGetDataFromFile
                (
                    int*,
                    sMNBackupClearFiles[1],
                    &lMNBackupClearOptionConfirmPalette
                );
                sMNBackupClearOptionMenuKind = 0;
                sMNBackupClearOptionConfirmAnimLength = 60;

                mnBackupClearApplyOptionID(sMNBackupClearOption);
            }
            return;

        case 1:
            sMNBackupClearOptionMenuKind = 0;
            mnBackupClearEjectOptionConfirmGObj();
            mnBackupClearUpdateOptionTabSObjs();
            sMNBackupClearUpdateWait = 10;
            return;
        }
    }
    if (scSubsysControllerGetPlayerTapButtons(B_BUTTON) != FALSE)
    {
        sMNBackupClearOptionMenuKind = 0;
        mnBackupClearEjectOptionConfirmGObj();
        mnBackupClearUpdateOptionTabSObjs();
        sMNBackupClearUpdateWait = 10;
    }
    else if
    (
        ((scSubsysControllerGetPlayerTapButtons(R_JPAD | R_CBUTTONS) != FALSE)) ||
        (mnBackupClearCheckGetOptionStickInputLR(stick_range, 20, 1))
    )
    {
        sMNBackupClearOptionChangeWait = mnCommonGetOptionChangeWaitN(stick_range, 7);

        if (sMNBackupClearOptionConfirmYesOrNo == 1)
        {
            func_800269C0_275C0(nSYAudioFGMMenuScroll2);

            sMNBackupClearOptionConfirmYesOrNo = 0;

            mnBackupClearEjectOptionConfirmGObj();
            mnBackupClearMakeOptionConfirmSObjs(confirm_kind, sMNBackupClearOptionConfirmYesOrNo);
        }
    }
    else if
    (
        (scSubsysControllerGetPlayerTapButtons(L_JPAD | L_CBUTTONS) != FALSE) ||
        (mnBackupClearCheckGetOptionStickInputLR(stick_range, -20, 0))
    )
    {
        if (sMNBackupClearOptionConfirmYesOrNo == 0)
        {
            func_800269C0_275C0(nSYAudioFGMMenuScroll2);

            sMNBackupClearOptionConfirmYesOrNo = 1;

            sMNBackupClearOptionChangeWait = mnCommonGetOptionChangeWaitN(stick_range, 7);

            mnBackupClearEjectOptionConfirmGObj();
            mnBackupClearMakeOptionConfirmSObjs(confirm_kind, sMNBackupClearOptionConfirmYesOrNo);
        }
    }
}

// 0x80132B9C
void mnBackupClearProcRun(GObj *gobj)
{
    sMNBackupClearTotalTimeTics++;
    
    if (sMNBackupClearUpdateWait != 0)
    {
        sMNBackupClearUpdateWait--;
    }
    else if (sMNBackupClearOptionConfirmAnimLength != 0)
    {
        sMNBackupClearOptionConfirmAnimLength--;

        if ((sMNBackupClearOptionConfirmAnimLength % 10) == 0)
        {
            SObj *sobj = SObjGetStruct(sMNBackupClearOptionConfirmGObj);
            
            if (sobj->sprite.LUT == gcGetDataFromFile(int*, sMNBackupClearFiles[1], &lMNBackupClearOptionConfirmPalette))
            {
                sobj->sprite.LUT = sMNBackupClearOptionConfirmLUTOrigin;
            }
            else sobj->sprite.LUT = gcGetDataFromFile(int*, sMNBackupClearFiles[1], &lMNBackupClearOptionConfirmPalette);
        }
        if (sMNBackupClearOptionConfirmAnimLength == 0)
        {
            mnBackupClearEjectOptionConfirmGObj();
            mnBackupClearUpdateOptionTabSObjs();
        }
    }
    else
    {
        if (sMNBackupClearOptionChangeWait != 0)
        {
            sMNBackupClearOptionChangeWait--;
        }
        if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-20, 20) != FALSE)         &&
            (scSubsysControllerGetPlayerStickInRangeUD(-20, 20) != FALSE)         &&
            (scSubsysControllerGetPlayerHoldButtons(U_JPAD | U_CBUTTONS) == FALSE)&&
            (scSubsysControllerGetPlayerHoldButtons(D_JPAD | D_CBUTTONS) == FALSE)
        )
        {
            sMNBackupClearOptionChangeWait = 0;
        }
        switch (sMNBackupClearOptionMenuKind)
        {
        case 0:
            mnBackupClearUpdateOptionMainMenu();
            break;
            
        case 1:
            mnBackupClearUpdateOptionConfirmMenu(1);
            break;
            
        case 2:
            mnBackupClearUpdateOptionConfirmMenu(2);
            break;
        }
    }
}

// 0x80132D34
void mnBackupClearProcStart(void)
{
    rdSetup rd_setup;

    rd_setup.table_addr = (uintptr_t)&lRDManagerTableAddr;
    rd_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
    rd_setup.file_heap = NULL;
    rd_setup.file_heap_size = 0;
    rd_setup.status_buf = sMNBackupClearStatusBuf;
    rd_setup.status_buf_size = ARRAY_COUNT(sMNBackupClearStatusBuf);
    rd_setup.force_buf = NULL;
    rd_setup.force_buf_size = 0;
    
    rdManagerInitSetup(&rd_setup);
    rdManagerLoadFiles
    (
        dMNBackupClearFileIDs,
        ARRAY_COUNT(dMNBackupClearFileIDs),
        sMNBackupClearFiles,
        gsMemoryAlloc
        (
            rdManagerGetAllocSize
            (
                dMNBackupClearFileIDs,
                ARRAY_COUNT(dMNBackupClearFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mnBackupClearProcRun, 0, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
    mnBackupClearInitVars();
    mnBackupClearMakeCamera();
    mnBackupClearMakeHeaderSObjs();
    mnBackupClearMakeUnused(sMNBackupClearOption);
    mnBackupClearUpdateOptionTabSObjs();
}

// 0x80132FB8
Vec2f dMNBackupClearUnused0x80132FB8[/* */] = { { 193.0F, 110.0F }, { 87.0F, 110.0F } };

// 0x80132FC8
syDisplaySetup dMNBackupClearDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x80132FE4
scRuntimeInfo dMNBackupClearGtlSetup =
{
    0x00000000,
    func_8000A5E4,
    func_8000A340,
    &ovl53_BSS_END,
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
    mnBackupClearProcLights,
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
    mnBackupClearProcStart
};

// 0x80132E28
void mnBackupClearStartScene(void)
{
    dMNBackupClearDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    func_80007024(&dMNBackupClearDisplaySetup);
    
    dMNBackupClearGtlSetup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl53_BSS_END);
    gsGTLSceneInit(&dMNBackupClearGtlSetup);
}
