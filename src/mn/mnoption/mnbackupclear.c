#include <mn/menu.h>
#include <sc/scene.h>
#include <gm/gmsound.h>
#include <sys/video.h>
#include <sys/thread6.h>

extern void* func_800269C0_275C0(u16);
extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define mnBackupClearCheckGetOptionButtonInput(is_button, mask) \
mnCommonCheckGetOptionButtonInput(sMNBackupClearOptionChangeWait, is_button, mask)

#define mnBackupClearCheckGetOptionStickInputUD(stick_range, min, b) \
mnCommonCheckGetOptionStickInputUD(sMNBackupClearOptionChangeWait, stick_range, min, b)

#define mnBackupClearCheckGetOptionStickInputLR(stick_range, min, b) \
mnCommonCheckGetOptionStickInputLR(sMNBackupClearOptionChangeWait, stick_range, min, b)

#define mnBackupClearSetOptionChangeWaitP(is_button, stick_range, div) \
mnCommonSetOptionChangeWaitP(sMNBackupClearOptionChangeWait, is_button, stick_range, div)

#define mnBackupClearSetOptionChangeWaitN(is_button, stick_range, div) \
mnCommonSetOptionChangeWaitN(sMNBackupClearOptionChangeWait, is_button, stick_range, div)

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
LBFileNode sMNBackupClearStatusBuffer[24];

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
void mnBackupClearFuncLights(Gfx **dls)
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
    sMNBackupClearUnusedGObj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_PRIORITY_DEFAULT);
}

// 0x80131BC8
void mnBackupClearMakeHeaderSObjs(void)
{
    GObj *gobj;
    SObj *sobj;
    
    gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_PRIORITY_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0, GOBJ_PRIORITY_DEFAULT, ~0);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNBackupClearFiles[2], &lMNBackupClearHeaderOptionSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x5F;
    sobj->sprite.green = 0x58;
    sobj->sprite.blue = 0x46;
    
    sobj->pos.x = 24.0F;
    sobj->pos.y = 17.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearHeaderBackupClearSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->envcolor.r = 0x00;
    sobj->envcolor.g = 0x00;
    sobj->envcolor.b = 0x00;
    
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
    SYColorRGB notcolors = { 0x7D, 0x45, 0x07 };

    // 0x80132F3C
    SYColorRGB hicolors = { 0xFF, 0xA8, 0x00 };

    SYColorRGB *colors;

    SObj *sobj = SObjGetStruct(gobj);

    colors = (status != nMNOptionTabStatusNot) ? &hicolors : &notcolors;
    
    sobj->sprite.red   = colors->r;
    sobj->sprite.green = colors->g;
    sobj->sprite.blue  = colors->b;
}

// 0x80131D44
void mnBackupClearSetOptionSpriteColors(void)
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
        *option_gobj[i] = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_PRIORITY_DEFAULT);

        gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_PRIORITY_DEFAULT, ~0);
        
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNBackupClearFiles[1], offsets[i]));

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
void mnBackupClearOptionConfirmFuncDisplay(GObj *gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_FILL);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gSYTaskmanDLHeads[0]++, syVideoGetFillColor(GPACK_RGBA8888(0x00, 0x00, 0xFF, 0xFF)));
    gDPFillRectangle(gSYTaskmanDLHeads[0]++, 58, 64, 262, 64);
    gDPFillRectangle(gSYTaskmanDLHeads[0]++, 58, 172, 262, 172);
    gDPFillRectangle(gSYTaskmanDLHeads[0]++, 58, 64, 58, 172);
    gDPFillRectangle(gSYTaskmanDLHeads[0]++, 262, 64, 262, 172);
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
    
    lbCommonClearExternSpriteParams();
    lbCommonDrawSObjAttr(gobj);
}

// 0x80132124
void mnBackupClearEjectOptionConfirmGObj(void)
{
    gcEjectGObj(sMNBackupClearOptionConfirmGObj);
}

// 0x80132148 - 0 = yes, 1 = no
void mnBackupClearMakeOptionConfirm(sb32 confirm_kind, sb32 yes_or_no)
{
    GObj *gobj;
    SObj *sobj;

    sMNBackupClearOptionConfirmGObj = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_PRIORITY_DEFAULT);
    
    gcAddGObjDisplay(gobj, mnBackupClearOptionConfirmFuncDisplay, 2, GOBJ_PRIORITY_DEFAULT, ~0);
    
    if (yes_or_no == 0)
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearOptionYesSprite));
        sobj->sprite.LUT = lbRelocGetFileData(int*, sMNBackupClearFiles[1], &lMNBackupClearOptionYesHighlightPalette);
    }
    else
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearOptionYesSprite));
        sobj->sprite.LUT = lbRelocGetFileData(int*, sMNBackupClearFiles[1], &lMNBackupClearOptionYesNotPalette);
    }
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 189.0F;
    sobj->pos.y = 106.0F;
    
    if (yes_or_no == 0)
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearOptionNoSprite));
        sobj->sprite.LUT = lbRelocGetFileData(int*, sMNBackupClearFiles[1], &lMNBackupClearOptionNoNotPalette);
    }
    else
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearOptionNoSprite));
        sobj->sprite.LUT = lbRelocGetFileData(int*, sMNBackupClearFiles[1], &lMNBackupClearOptionNoHighlightPalette);
    }
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 83.0F;
    sobj->pos.y = 106.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearOptionCircleSprite));
    
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
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearTextIsOkaySprite));
        
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
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNBackupClearFiles[1], &lMNBackupClearTextAreYouSureSprite));
        
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
void mnBackupClearMakeMainCamera(void)
{
    CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_PRIORITY_DEFAULT,
            lbCommonDrawSprite,
            80,
            COBJ_MASK_DLLINK(2) |
            COBJ_MASK_DLLINK(1) |
            COBJ_MASK_DLLINK(0),
            -1,
            FALSE,
            nGCProcessKindFunc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
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
    sMNBackupClearReturnTic = sMNBackupClearTotalTimeTics + I_MIN_TO_TICS(5);
}

// 0x8013251C
void mnBackupClearApplyOptionID(s32 option)
{
    switch (option)
    {
    case nMNBackupClearOptionNewcomers:
        lbBackupClearNewcomers();
        break;
        
    case nMNBackupClearOption1PHighScore:
        lbBackupClear1PHighScore();
        break;
        
    case nMNBackupClearOptionVSRecord:
        lbBackupClearVSRecord();
        break;
        
    case nMNBackupClearOptionBonusStageTime:
        lbBackupClearBonusStageTime();
        break;
        
    case nMNBackupClearOptionPrize:
        lbBackupClearPrize();
        break;
        
    case nMNBackupClearOptionAllDataClear:
        lbBackupClearAllData();
        lbBackupApplyOptions();
        break;
    }
    lbBackupCorrectErrors();
    lbBackupWrite();
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

            mnBackupClearMakeOptionConfirm(1, sMNBackupClearOptionConfirmYesOrNo);

            sMNBackupClearUpdateWait = 10;
            return;
        }
    }
    if (scSubsysControllerGetPlayerTapButtons(B_BUTTON) != FALSE)
    {
        gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
        gSCManagerSceneData.scene_curr = nSCKindOption;

        func_ovl53_801325CC();
        syTaskmanSetLoadScene();
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
                mnBackupClearMakeOptionConfirm(2, sMNBackupClearOptionConfirmYesOrNo);

                sMNBackupClearUpdateWait = 10;
            }
            else
            {
                sMNBackupClearOptionConfirmLUTOrigin = SObjGetStruct(sMNBackupClearOptionConfirmGObj)->sprite.LUT;
                SObjGetStruct(sMNBackupClearOptionConfirmGObj)->sprite.LUT = lbRelocGetFileData
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
            mnBackupClearSetOptionSpriteColors();
            sMNBackupClearUpdateWait = 10;
            return;
        }
    }
    if (scSubsysControllerGetPlayerTapButtons(B_BUTTON) != FALSE)
    {
        sMNBackupClearOptionMenuKind = 0;
        mnBackupClearEjectOptionConfirmGObj();
        mnBackupClearSetOptionSpriteColors();
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
            mnBackupClearMakeOptionConfirm(confirm_kind, sMNBackupClearOptionConfirmYesOrNo);
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
            mnBackupClearMakeOptionConfirm(confirm_kind, sMNBackupClearOptionConfirmYesOrNo);
        }
    }
}

// 0x80132B9C
void mnBackupClearFuncRun(GObj *gobj)
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
            
            if (sobj->sprite.LUT == lbRelocGetFileData(int*, sMNBackupClearFiles[1], &lMNBackupClearOptionConfirmPalette))
            {
                sobj->sprite.LUT = sMNBackupClearOptionConfirmLUTOrigin;
            }
            else sobj->sprite.LUT = lbRelocGetFileData(int*, sMNBackupClearFiles[1], &lMNBackupClearOptionConfirmPalette);
        }
        if (sMNBackupClearOptionConfirmAnimLength == 0)
        {
            mnBackupClearEjectOptionConfirmGObj();
            mnBackupClearSetOptionSpriteColors();
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
void mnBackupClearFuncStart(void)
{
    LBRelocSetup rl_setup;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sMNBackupClearStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sMNBackupClearStatusBuffer);
    rl_setup.force_status_buffer = NULL;
    rl_setup.force_status_buffer_size = 0;
    
    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dMNBackupClearFileIDs,
        ARRAY_COUNT(dMNBackupClearFileIDs),
        sMNBackupClearFiles,
        syTaskmanMalloc
        (
            lbRelocGetAllocSize
            (
                dMNBackupClearFileIDs,
                ARRAY_COUNT(dMNBackupClearFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mnBackupClearFuncRun, 0, GOBJ_PRIORITY_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_FILLCOLOR, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
    mnBackupClearInitVars();
    mnBackupClearMakeMainCamera();
    mnBackupClearMakeHeaderSObjs();
    mnBackupClearMakeUnused(sMNBackupClearOption);
    mnBackupClearSetOptionSpriteColors();
}

// 0x80132FB8
Vec2f dMNBackupClearUnused0x80132FB8[/* */] = { { 193.0F, 110.0F }, { 87.0F, 110.0F } };

// 0x80132FC8
SYVideoSetup dMNBackupClearVideoSetup = SYVIDEO_DEFINE_DEFAULT();

// 0x80132FE4
SYTaskmanSetup dMNBackupClearTaskmanSetup =
{
    // Task Manager Buffer Setup
    {
        0,                          // ???
        gcRunAll,              		// Update function
        gcDrawAll,                  // Frame draw function
        &ovl53_BSS_END,             // Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        sizeof(Gfx) * 7500,         // Display List Buffer 0 Size
        0,                          // Display List Buffer 1 Size
        0,                          // Display List Buffer 2 Size
        0,                          // Display List Buffer 3 Size
        0x8000,                     // Graphics Heap Size
        2,                          // ???
        0xC000,                     // RDP Output Buffer Size
        mnBackupClearFuncLights,    // Pre-render function
        update_contdata,            // Controller I/O function
    },

    0,                              // Number of GObjThreads
    sizeof(u64) * 192,              // Thread stack size
    0,                              // Number of thread stacks
    0,                              // ???
    0,                              // Number of GObjProcesses
    0,                              // Number of GObjs
    sizeof(GObj),                   // GObj size
    0,                              // Number of Object Manager Matrices
    NULL,                           // Matrix function list
    NULL,                           // Function for ejecting DObjVec?
    0,                              // Number of AObjs
    0,                              // Number of MObjs
    0,                              // Number of DObjs
    sizeof(DObj),                   // DObj size
    0,                              // Number of SObjs
    sizeof(SObj),                   // SObj size
    0,                              // Number of Cameras
    sizeof(CObj),                 	// CObj size
    
    mnBackupClearFuncStart          // Task start function
};

// 0x80132E28
void mnBackupClearStartScene(void)
{
    dMNBackupClearVideoSetup.zbuffer = syVideoGetZBuffer(6400);
    syVideoInit(&dMNBackupClearVideoSetup);
    
    dMNBackupClearTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl53_BSS_END);
    syTaskmanRun(&dMNBackupClearTaskmanSetup);
}
