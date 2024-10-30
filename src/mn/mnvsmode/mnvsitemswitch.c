#include <mn/menu.h>
#include <it/item.h>
#include <sc/scene.h>
#include <gm/gmsound.h>
#include <sys/thread6.h>
#include <sys/video.h>

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

extern uintptr_t D_NF_00000008;

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define mnVSItemSwitchCheckGetOptionButtonInput(is_button, mask) \
mnCommonCheckGetOptionButtonInput(sMNVSItemSwitchOptionChangeWait, is_button, mask)

#define mnVSItemSwitchCheckGetOptionStickInputUD(stick_range, min, b) \
mnCommonCheckGetOptionStickInputUD(sMNVSItemSwitchOptionChangeWait, stick_range, min, b)

#define mnVSItemSwitchCheckGetOptionStickInputLR(stick_range, min, b) \
mnCommonCheckGetOptionStickInputLR(sMNVSItemSwitchOptionChangeWait, stick_range, min, b)

#define mnVSItemSwitchSetOptionChangeWaitP(is_button, stick_range, div) \
mnCommonSetOptionChangeWaitP(sMNVSItemSwitchOptionChangeWait, is_button, stick_range, div)

#define mnVSItemSwitchSetOptionChangeWaitN(is_button, stick_range, div) \
mnCommonSetOptionChangeWaitN(sMNVSItemSwitchOptionChangeWait, is_button, stick_range, div)

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801333D0
s32 sMNVSItemSwitchPad0x801333D0[2];

// 0x801333D8
s32 sMNVSItemSwitchOptionSelectID;

// 0x801333DC
GObj *sMNVSItemSwitchUnkGObj;

// 0x801333E0
GObj *sMNVSItemSwitchOptionGObjs[(nITKindUtilityEnd - nITKindUtilityStart) + 1];

// 0x80133420
sb32 sMNVSItemSwitchOptionStatuses[(nITKindUtilityEnd - nITKindUtilityStart) + 1];

// 0x80133460
GObj *sMNVSItemSwitchCursorGObj;

// 0x80133464
s32 sMNVSItemSwitchOptionChangeWait;

// 0x80133468
s32 sMNVSItemSwitchTotalTimeTics;

// 0x8013346C
s32 sMNVSItemSwitchReturnTic;

// 0x80133470
LBFileNode sMNVSItemSwitchStatusBuffer[24];

// 0x80133530
void *sMNVSItemSwitchFiles[1];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80133210
s32 dMNVSItemSwitchTogglesItemKinds[/* */] =
{
    0,
    nITKindSword,
    nITKindBat,
    nITKindHammer,
    nITKindHarisen,
    nITKindMSBomb,
    nITKindBombHei,
    nITKindNBumper,
    nITKindGShell,
    nITKindMBall,
    nITKindLGun,
    nITKindFFlower,
    nITKindStarRod,
    nITKindTomato,
    nITKindHeart,
    nITKindStar
};

// 0x80133250
u32 dMNVSItemSwitchFileIDs[/* */] = { &D_NF_00000008 };

// 0x80133258
Lights1 dMNVSItemSwitchLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80133270
Gfx dMNVSItemSwitchDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNVSItemSwitchLights1),
    gsSPEndDisplayList()
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnVSItemSwitchFuncLights(Gfx **dls)
{
    gSPDisplayList(dls[0]++, dMNVSItemSwitchDisplayList);
}

// 0x80131B24
void mnVSItemSwitchSetToggleSpriteColors(GObj *gobj, s32 status)
{
    SObj *sobj = SObjGetStruct(gobj);
    
    if (status != nMNOptionTabStatusOff)
    {
        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0x00;
        sobj->sprite.blue = 0x28;
        
        sobj->next->sprite.red = 0x32;
        sobj->next->sprite.green = 0x32;
        sobj->next->sprite.blue = 0x32;
    }
    else
    {
        sobj->sprite.red = 0x32;
        sobj->sprite.green = 0x32;
        sobj->sprite.blue = 0x32;
        
        sobj->next->sprite.red = 0xFF;
        sobj->next->sprite.green = 0x00;
        sobj->next->sprite.blue = 0x28;
    }
}

// 0x80131B98
void mnVSItemSwitchMakeToggle(GObj *gobj, f32 pos_x, f32 pos_y)
{
    SObj *sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSItemSwitchFiles[0], &lMNVSItemSwitchToggleOnSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = pos_x;
    sobj->pos.y = pos_y;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSItemSwitchFiles[0], &lMNVSItemSwitchToggleOffSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = pos_x + 21.0F + 5.0F;
    sobj->pos.y = pos_y;

    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSItemSwitchFiles[0], &lMNVSItemSwitchToggleSlashSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = pos_x + 21.0F;
    sobj->pos.y = pos_y;

    sobj->sprite.red = 0x32;
    sobj->sprite.green = 0x32;
    sobj->sprite.blue = 0x32;
}

// 0x80131CA4
void mnVSItemSwitchLabelsFuncDisplay(GObj *gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetCombineMode(gSYTaskmanDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x80, 0x80, 0x80, 0xFF);
    gDPFillRectangle(gSYTaskmanDLHeads[0]++, 79, 34, 310, 39);
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
    
    lbCommonClearExternSpriteParams();
    lbCommonDrawSObjAttr(gobj);
}

// 0x80131DE8
void mnVSItemSwitchMakeLabels(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, mnVSItemSwitchLabelsFuncDisplay, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSItemSwitchFiles[0], &lMNVSItemSwitchLabelVSOptionsSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->envcolor.r = 0x00;
    sobj->envcolor.g = 0x00;
    sobj->envcolor.b = 0x00;
    
    sobj->sprite.red = 0xF2;
    sobj->sprite.green = 0xC7;
    sobj->sprite.blue = 0x0D;
    
    sobj->pos.x = 84.0F;
    sobj->pos.y = 24.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSItemSwitchFiles[0], &lMNVSItemSwitchLabelItemSwitchSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
    
    sobj->pos.x = 222.0F;
    sobj->pos.y = 30.0F;
}

// 0x80131EFC
void func_ovl21_80131EFC(SObj *sobj)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->envcolor.r = 0x00;
    sobj->envcolor.g = 0x00;
    sobj->envcolor.b = 0x00;
    
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
}

// 0x80131F30
void func_ovl21_80131F30(s32 option_id)
{
    s32 unused1[2];
    
    // 0x80133298
    intptr_t sp38[/* */] =
    {
        0x65C0,
        0x67E0,
        0x6A00,
        0x6C20,
        0x7060,
        0x8B98,
        0x74A0,
        0x76C0,
        0x78E0,
        0x7B00,
        0x7D20,
        0x7F40,
        0x8160,
        0x8380,
        0x85A0,
        0x87C0
    };

    // 0x801332D8
    intptr_t sp20[/* */] =
    {
        0x9850,
        0x8DB0,
        0x8FD0,
        0x91F0,
        0x9410,
        0x9630
    };
    
    s32 unused2[2];
    
    sMNVSItemSwitchUnkGObj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);
}

// 0x80131FDC
void mnVSItemSwitchMakeDecal(void)
{
    GObj *gobj;
    SObj *sobj;
    
    gobj = gcMakeGObjSPAfter(0, NULL, 6, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 4, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSItemSwitchFiles[0], &lMNVSItemSwitchDecalButtonSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x48;
    sobj->sprite.green = 0x2A;
    sobj->sprite.blue = 0x23;
    
    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;
}

// 0x80132084
void mnVSItemSwitchMakeItemList(void)
{
    GObj *gobj;
    SObj *sobj;
    
    gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSItemSwitchFiles[0], &lMNVSItemSwitchItemListSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
    
    sobj->pos.x = 125.0F;
    sobj->pos.y = 48.0F;
}

// 0x8013212C
void mnVSItemSwitchSetCursorPosition(GObj *gobj, s32 option_id)
{
    SObj *sobj = SObjGetStruct(gobj);
    
    sobj->pos.x = 115.0F;
    
    if (option_id == 0)
    {
        sobj->pos.y = 47.0F;
    }
    else sobj->pos.y = (option_id * 10) + 51;
}

// 0x80132178
void mnVSItemSwitchMakeCursor(s32 off_y)
{
    GObj *gobj;
    SObj *sobj;

    sMNVSItemSwitchCursorGObj = gobj = gcMakeGObjSPAfter(0, NULL, 5, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 3, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSItemSwitchFiles[0], &lMNVSItemSwitchCursorSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xDE;
    sobj->sprite.blue = 0x00;
    
    mnVSItemSwitchSetCursorPosition(gobj, off_y);
}

// 0x80132224
void mnVSItemSwitchMakeAppearance(s32 rate)
{
    GObj *gobj;
    SObj *sobj;

    // 0x801332F0
    s32 pos_x[/* */] =
    {
        242,
        240,
        254,
        244,
        252,
        238
    };

    // 0x80133308
    intptr_t rate_offsets[/* */] =
    {
        &lMNVSItemSwitchAppearanceNoneSprite,
        &lMNVSItemSwitchAppearanceVeryLowSprite,
        &lMNVSItemSwitchAppearanceLowSprite,
        &lMNVSItemSwitchAppearanceMiddleSprite,
        &lMNVSItemSwitchAppearanceHighSprite,
        &lMNVSItemSwitchAppearanceVeryHighSprite
    };
        
    sMNVSItemSwitchOptionGObjs[0] = gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSItemSwitchFiles[0], rate_offsets[rate]));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = pos_x[rate];
    sobj->pos.y = 49.0F;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
}

// 0x80132368
void mnVSItemSwitchInitToggles(void)
{
    s32 i;
    GObj *gobj;
    
    mnVSItemSwitchMakeAppearance(sMNVSItemSwitchOptionStatuses[0]);
    
    for (i = 1; i < (ARRAY_COUNT(sMNVSItemSwitchOptionGObjs) + ARRAY_COUNT(sMNVSItemSwitchOptionStatuses)) / 2; i++)
    {
        sMNVSItemSwitchOptionGObjs[i] = gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);

        gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
        mnVSItemSwitchMakeToggle(gobj, 244.0F, i * 10 + 54);
        mnVSItemSwitchSetToggleSpriteColors(gobj, sMNVSItemSwitchOptionStatuses[i]);
    }
}

// 0x80132468
void mnVSItemSwitchMakeCursorCamera(void)
{
    CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            30,
            COBJ_MASK_DLLINK(3),
            -1,
            FALSE,
            nGCProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132508
void mnVSItemSwitchMakeLabelsCamera(void)
{
    CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            40,
            COBJ_MASK_DLLINK(1),
            -1,
            FALSE,
            nGCProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801325A8 - unused?
void func_ovl21_801325A8(void)
{
    return;
}

// 0x801325B0
void mnVSItemSwitchMakeDecalCamera(void)
{
    CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            60,
            COBJ_MASK_DLLINK(4),
            -1,
            FALSE,
            nGCProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132650
void mnVSItemSwitchGetItemSettings(void)
{
    s32 i;
    
    sMNVSItemSwitchOptionStatuses[0] = gTransferBattleState.item_appearance_rate;

    for (i = 1; i < (ARRAY_COUNT(dMNVSItemSwitchTogglesItemKinds) + ARRAY_COUNT(sMNVSItemSwitchOptionStatuses)) / 2; i++)
    {
        if ((1 << dMNVSItemSwitchTogglesItemKinds[i]) & gTransferBattleState.item_toggles)
        {
            sMNVSItemSwitchOptionStatuses[i] = nMNOptionTabStatusOn;
        }
        else sMNVSItemSwitchOptionStatuses[i] = nMNOptionTabStatusOff;
    }
}

// 0x801327B8
void mnVSItemSwitchSetItemSettings(void)
{
    s32 i;

    gTransferBattleState.item_appearance_rate = sMNVSItemSwitchOptionStatuses[0];

    for (i = 1; i < (ARRAY_COUNT(dMNVSItemSwitchTogglesItemKinds) + ARRAY_COUNT(sMNVSItemSwitchOptionStatuses)) / 2; i++)
    {
        if (sMNVSItemSwitchOptionStatuses[i] != nMNOptionTabStatusOff)
        {
            gTransferBattleState.item_toggles |= (1 << dMNVSItemSwitchTogglesItemKinds[i]);

            if (dMNVSItemSwitchTogglesItemKinds[i] == nITKindGShell)
            {
                gTransferBattleState.item_toggles |= (1 << nITKindRShell);
            }
        }
        else
        {
            gTransferBattleState.item_toggles &= ~(1 << dMNVSItemSwitchTogglesItemKinds[i]);

            if (dMNVSItemSwitchTogglesItemKinds[i] == nITKindGShell)
            {
                gTransferBattleState.item_toggles &= ~(1 << nITKindRShell);
            }
        }
    }
}

// 0x80132948
void mnVSItemSwitchInitVars(void)
{
    sMNVSItemSwitchOptionSelectID = 0;
    
    mnVSItemSwitchGetItemSettings();
    
    sMNVSItemSwitchOptionChangeWait = 0;
    sMNVSItemSwitchTotalTimeTics = 0;
    
    sMNVSItemSwitchReturnTic = sMNVSItemSwitchTotalTimeTics + I_MIN_TO_TICS(5);
}

// 0x80132988
sb32 mnVSItemSwitchCheckAllTogglesOff(void)
{
    s32 i;
    
    for (i = 1; i < ARRAY_COUNT(sMNVSItemSwitchOptionStatuses); i++)
    {
        if (sMNVSItemSwitchOptionStatuses[i] != nMNOptionTabStatusOff)
        {
            return FALSE;
        }
    }
    return TRUE;
}

// 0x80132A44
void mnVSItemSwitchSetItemToggles(void)
{
    if (mnVSItemSwitchCheckAllTogglesOff() != FALSE)
    {
        gTransferBattleState.item_toggles = 0;
    }
    else
    {
        mnVSItemSwitchSetItemSettings();

        gTransferBattleState.item_toggles |= ((1 << nITKindEgg) | (1 << nITKindCapsule) | (1 << nITKindTaru) | (1 << nITKindBox));
    }
}

// 0x80132A94
void mnVSItemSwitchUpdateOption(s32 option_id, s32 rate)
{
    if (option_id == 0)
    {
        gcEjectGObj(sMNVSItemSwitchOptionGObjs[option_id]);
        mnVSItemSwitchMakeAppearance(rate);
    }
    else mnVSItemSwitchSetToggleSpriteColors(sMNVSItemSwitchOptionGObjs[option_id], rate);
}

// 0x80132AF0
void mnVSItemSwitchFuncRun(GObj *gobj)
{
    s32 unused;
    s32 stick_range;
    sb32 is_button;
    
    sMNVSItemSwitchTotalTimeTics++;
    
    if (sMNVSItemSwitchTotalTimeTics >= 10)
    {
        if (sMNVSItemSwitchOptionChangeWait != 0)
        {
            sMNVSItemSwitchOptionChangeWait--;
        }
        if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-20, 20) != FALSE)                                         &&
            (scSubsysControllerGetPlayerStickInRangeUD(-20, 20) != FALSE)                                         &&
            (scSubsysControllerGetPlayerHoldButtons(U_JPAD | R_JPAD | R_TRIG | U_CBUTTONS | R_CBUTTONS) == FALSE) &&
            (scSubsysControllerGetPlayerHoldButtons(D_JPAD | L_JPAD | L_TRIG | D_CBUTTONS | L_CBUTTONS) == FALSE)
        )
        {
            sMNVSItemSwitchOptionChangeWait = 0;
        }
        if (scSubsysControllerGetPlayerTapButtons(B_BUTTON) != FALSE)
        {
            gSceneData.scene_prev = gSceneData.scene_curr;
            gSceneData.scene_curr = nSCKindVSOptions;
            
            mnVSItemSwitchSetItemToggles();
            syTaskmanSetLoadScene();
        }
        if
        (
            mnVSItemSwitchCheckGetOptionButtonInput(is_button, U_JPAD | U_CBUTTONS) ||
            mnVSItemSwitchCheckGetOptionStickInputUD(stick_range, 20, 1)
        )
        {
            func_800269C0_275C0(nSYAudioFGMMenuScroll2);
                
            mnVSItemSwitchSetOptionChangeWaitP(is_button, stick_range, 7);
            
            if (sMNVSItemSwitchOptionSelectID == 0)
            {
                sMNVSItemSwitchOptionSelectID = (ARRAY_COUNT(sMNVSItemSwitchOptionGObjs) - 1);
            }
            else sMNVSItemSwitchOptionSelectID--;
    
            if (sMNVSItemSwitchOptionSelectID == 0)
            {
                sMNVSItemSwitchOptionChangeWait += 8;
            }
            mnVSItemSwitchSetCursorPosition(sMNVSItemSwitchCursorGObj, sMNVSItemSwitchOptionSelectID);
            
            gcEjectGObj(sMNVSItemSwitchUnkGObj);
            func_ovl21_80131F30(sMNVSItemSwitchOptionSelectID);
        }
        if
        (
            mnVSItemSwitchCheckGetOptionButtonInput(is_button, D_JPAD | D_CBUTTONS) ||
            mnVSItemSwitchCheckGetOptionStickInputUD(stick_range, -20, 0)
        )
        {
            func_800269C0_275C0(nSYAudioFGMMenuScroll2);
                
            mnVSItemSwitchSetOptionChangeWaitN(is_button, stick_range, 7);
            
            if (sMNVSItemSwitchOptionSelectID == (ARRAY_COUNT(sMNVSItemSwitchOptionGObjs) - 1))
            {
                sMNVSItemSwitchOptionSelectID = 0;
            }
            else sMNVSItemSwitchOptionSelectID++;
    
            if (sMNVSItemSwitchOptionSelectID == (ARRAY_COUNT(sMNVSItemSwitchOptionGObjs) - 1))
            {
                sMNVSItemSwitchOptionChangeWait += 8;
            }
            mnVSItemSwitchSetCursorPosition(sMNVSItemSwitchCursorGObj, sMNVSItemSwitchOptionSelectID);
            
            gcEjectGObj(sMNVSItemSwitchUnkGObj);
            func_ovl21_80131F30(sMNVSItemSwitchOptionSelectID);
        }
        if
        (
            mnVSItemSwitchCheckGetOptionButtonInput(is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
            mnVSItemSwitchCheckGetOptionStickInputLR(stick_range, -20, 0)
        )
        {
            if (sMNVSItemSwitchOptionSelectID == 0)
            {
                func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                
                if (sMNVSItemSwitchOptionStatuses[0] > nSCBattleItemSwitchNone)
                {
                    sMNVSItemSwitchOptionStatuses[0]--;
                }
                else sMNVSItemSwitchOptionStatuses[0] = nSCBattleItemSwitchVeryHigh;
                
                mnVSItemSwitchUpdateOption(sMNVSItemSwitchOptionSelectID, sMNVSItemSwitchOptionStatuses[0]);
                
                gcEjectGObj(sMNVSItemSwitchUnkGObj);
                func_ovl21_80131F30(sMNVSItemSwitchOptionSelectID);
            }
            else if (sMNVSItemSwitchOptionStatuses[sMNVSItemSwitchOptionSelectID] == nMNOptionTabStatusOff)
            {
                func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                
                sMNVSItemSwitchOptionStatuses[sMNVSItemSwitchOptionSelectID] = nMNOptionTabStatusOn;
                
                mnVSItemSwitchUpdateOption(sMNVSItemSwitchOptionSelectID, sMNVSItemSwitchOptionStatuses[sMNVSItemSwitchOptionSelectID]);
            }
            mnVSItemSwitchSetOptionChangeWaitN(is_button, stick_range, 7);
        }
        if
        (
            mnVSItemSwitchCheckGetOptionButtonInput(is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
            mnVSItemSwitchCheckGetOptionStickInputLR(stick_range, 20, 1)
        )
        {
            if (sMNVSItemSwitchOptionSelectID == 0)
            {
                func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                
                if (sMNVSItemSwitchOptionStatuses[0] < nSCBattleItemSwitchVeryHigh)
                {
                    sMNVSItemSwitchOptionStatuses[0]++;
                }
                else sMNVSItemSwitchOptionStatuses[0] = nSCBattleItemSwitchNone;
                
                mnVSItemSwitchUpdateOption(sMNVSItemSwitchOptionSelectID, sMNVSItemSwitchOptionStatuses[0]);
                
                gcEjectGObj(sMNVSItemSwitchUnkGObj);
                func_ovl21_80131F30(sMNVSItemSwitchOptionSelectID);
            }
            else if (sMNVSItemSwitchOptionStatuses[sMNVSItemSwitchOptionSelectID] == nMNOptionTabStatusOn)
            {
                func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                
                sMNVSItemSwitchOptionStatuses[sMNVSItemSwitchOptionSelectID] = nMNOptionTabStatusOff;
                
                mnVSItemSwitchUpdateOption(sMNVSItemSwitchOptionSelectID, sMNVSItemSwitchOptionStatuses[sMNVSItemSwitchOptionSelectID]);
            }
            mnVSItemSwitchSetOptionChangeWaitP(is_button, stick_range, 7);
        }
        if (scSubsysControllerGetPlayerTapButtons(A_BUTTON) != FALSE)
        {
            if (sMNVSItemSwitchOptionSelectID == 0)
            {
                func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                
                if (sMNVSItemSwitchOptionStatuses[0] < nSCBattleItemSwitchVeryHigh)
                {
                    sMNVSItemSwitchOptionStatuses[0]++;
                }
                else sMNVSItemSwitchOptionStatuses[0] = nSCBattleItemSwitchNone;
                
                mnVSItemSwitchUpdateOption(sMNVSItemSwitchOptionSelectID, sMNVSItemSwitchOptionStatuses[0]);
                
                gcEjectGObj(sMNVSItemSwitchUnkGObj);
                func_ovl21_80131F30(sMNVSItemSwitchOptionSelectID);
            }
            else
            {
                func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                
                if (sMNVSItemSwitchOptionStatuses[sMNVSItemSwitchOptionSelectID] == nMNOptionTabStatusOff)
                {
                    sMNVSItemSwitchOptionStatuses[sMNVSItemSwitchOptionSelectID] = nMNOptionTabStatusOn;
                }
                else sMNVSItemSwitchOptionStatuses[sMNVSItemSwitchOptionSelectID] = nMNOptionTabStatusOff;
                
                mnVSItemSwitchUpdateOption(sMNVSItemSwitchOptionSelectID, sMNVSItemSwitchOptionStatuses[sMNVSItemSwitchOptionSelectID]);
            }
        }
    }
}

// 0x80133090
void mnVSItemSwitchFuncStart(void)
{
    LBRelocSetup rl_setup;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sMNVSItemSwitchStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sMNVSItemSwitchStatusBuffer);
    rl_setup.force_status_buffer = NULL;
    rl_setup.force_status_buffer_size = 0;
    
    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dMNVSItemSwitchFileIDs,
        ARRAY_COUNT(dMNVSItemSwitchFileIDs),
        sMNVSItemSwitchFiles,
        syTaskmanMalloc
        (
            lbRelocGetAllocSize
            (
                dMNVSItemSwitchFileIDs,
                ARRAY_COUNT(dMNVSItemSwitchFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mnVSItemSwitchFuncRun, 0, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, COBJ_FLAG_FILLCOLOR | COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
    
    mnVSItemSwitchInitVars();
    mnVSItemSwitchMakeCursorCamera();
    mnVSItemSwitchMakeLabelsCamera();
    mnVSItemSwitchMakeDecalCamera();
    mnVSItemSwitchMakeLabels();
    mnVSItemSwitchMakeDecal();
    mnVSItemSwitchMakeItemList();
    mnVSItemSwitchMakeCursor(sMNVSItemSwitchOptionSelectID);
    mnVSItemSwitchInitToggles();

    func_ovl21_80131F30(sMNVSItemSwitchOptionSelectID);
}

// 0x80133320
SYVideoSetup dMNVSItemSwitchVideoSetup = SYVIDEO_DEFINE_DEFAULT();

// 0x8013333C
SYTaskmanSetup dMNVSItemSwitchTaskmanSetup =
{
    // Task Logic Buffer Setup
    {
        0,                          // ???
        func_8000A5E4,              // Update function
        func_8000A340,              // Frame draw function
        &ovl21_BSS_END,             // Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        sizeof(Gfx) * 2500,         // Display List Buffer 0 Size
        0,                          // Display List Buffer 1 Size
        0,                          // Display List Buffer 2 Size
        0,                          // Display List Buffer 3 Size
        0x8000,                     // Graphics Heap Size
        2,                          // ???
        0xC000,                     // RDP Output Buffer Size
        mnVSItemSwitchFuncLights,   // Pre-render function
        update_contdata,            // Controller I/O function
    },

    8,                              // Number of GObjThreads
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
    
    mnVSItemSwitchFuncStart         // Task start function
};

// 0x801331B0
void mnVSItemSwitchStartScene(void)
{
    dMNVSItemSwitchVideoSetup.zbuffer = syVideoGetZBuffer(6400);
    syVideoInit(&dMNVSItemSwitchVideoSetup);
    
    dMNVSItemSwitchTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl21_BSS_END);
    syTaskmanInit(&dMNVSItemSwitchTaskmanSetup);
}
