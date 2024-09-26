#include <ft/fighter.h>
#include <sc/scene.h>

extern intptr_t lSC1PStageCardNameMarioSprite;          // 0x00000138
extern intptr_t lSC1PStageCardNameFoxSprite;            // 0x00000258
extern intptr_t lSC1PStageCardNameDonkeySprite;         // 0x00000378
extern intptr_t lSC1PStageCardNameSamusSprite;          // 0x000004F8
extern intptr_t lSC1PStageCardNameLuigiSprite;          // 0x00000618
extern intptr_t lSC1PStageCardNameLinkSprite;           // 0x00000738
extern intptr_t lSC1PStageCardNameYoshiSprite;          // 0x00000858
extern intptr_t lSC1PStageCardNameCaptainSprite;        // 0x00000A38
extern intptr_t lSC1PStageCardNameKirbySprite;          // 0x00000BB8
extern intptr_t lSC1PStageCardNamePikachuSprite;        // 0x00000D38
extern intptr_t lSC1PStageCardNamePurinSprite;          // 0x00000F78
extern intptr_t lSC1PStageCardNameNessSprite;           // 0x00001098

extern intptr_t lSC1PStageCardVSNameYoshiTeamSprite;    // 0x00006938
extern intptr_t lSC1PStageCardVSNameFoxSprite;          // 0x00005988
extern intptr_t lSC1PStageCardVSNameMarioBrosSprite;    // 0x00005EC8
extern intptr_t lSC1PStageCardVSNameGDonkeySprite;      // 0x00005748
extern intptr_t lSC1PStageCardVSNameKirbyTeamSprite;    // 0x00005C88
extern intptr_t lSC1PStageCardVSNameSamusSprite;        // 0x00006638
extern intptr_t lSC1PStageCardVSNameMMarioSprite;       // 0x00005328
extern intptr_t lSC1PStageCardVSNameZakoSprite;         // 0x000063F8
extern intptr_t lSC1PStageCardVSNameBossSprite;         // 0x00005568

extern intptr_t lSC1PStageCardBonus1TaskSprite;         // 0x00003B08
extern intptr_t lSC1PStageCardBonus2TaskSprite;         // 0x00004388
extern intptr_t lSC1PStageCardBonus3TaskSprite;         // 0x00004AC8

extern intptr_t lSC1PStageCardNumber1Sprite;            // 0x00002018
extern intptr_t lSC1PStageCardNumber2Sprite;            // 0x00002118
extern intptr_t lSC1PStageCardNumber3Sprite;            // 0x00002218
extern intptr_t lSC1PStageCardNumber4Sprite;            // 0x00002318
extern intptr_t lSC1PStageCardNumber5Sprite;            // 0x00002418
extern intptr_t lSC1PStageCardNumber6Sprite;            // 0x00002518
extern intptr_t lSC1PStageCardNumber7Sprite;            // 0x00002618
extern intptr_t lSC1PStageCardNumber8Sprite;            // 0x00002718
extern intptr_t lSC1PStageCardNumber9Sprite;            // 0x00002818
extern intptr_t lSC1PStageCardNumber10Sprite;           // 0x000029B8

extern intptr_t lSC1PStageCardFigureLinkSprite;         // 0x000071D0
extern intptr_t lSC1PStageCardFigureYoshiSprite;        // 0x00007320
extern intptr_t lSC1PStageCardFigureFoxSprite;          // 0x00007470
extern intptr_t lSC1PStageCardFigureMarioBrosSprite;    // 0x000075C0
extern intptr_t lSC1PStageCardFigurePikachuSprite;      // 0x00007710
extern intptr_t lSC1PStageCardFigureGDonkeySprite;      // 0x00007860
extern intptr_t lSC1PStageCardFigureKirbySprite;        // 0x000079B0
extern intptr_t lSC1PStageCardFigureSamusSprite;        // 0x00007B00
extern intptr_t lSC1PStageCardFigureMMarioSprite;       // 0x00007C50
extern intptr_t lSC1PStageCardFigureZakoSprite;         // 0x00007D60
extern intptr_t lSC1PStageCardFigureBossSprite;         // 0x00007E70
extern intptr_t lSC1PStageCardFigureBonusSprite;        // 0x00007F40

extern intptr_t lSC1PStageCardStageTextSprite;          // 0x00002E38
extern intptr_t lSC1PStageCardBonusTextSprite;          // 0x000030F8
extern intptr_t lSC1PStageCardFinalTextSprite;          // 0x00003320
extern intptr_t lSC1PStageCardDashTextSprite;           // 0x000050E8
extern intptr_t lSC1PStageCardVSTextSprite;             // 0x000069F8
extern intptr_t lSC1PStageCardAlly1TextSprite;          // 0x00006B18
extern intptr_t lSC1PStageCardAlly2TextSprite;          // 0x00006C38

extern intptr_t lSC1PStageCardBannerTopSprite;          // 0x0000C898
extern intptr_t lSC1PStageCardBannerBottomSprite;       // 0x0000ED00
extern intptr_t lSC1PStageCardSkySprite;                // 0x00014BF0

extern intptr_t lSC1PStageCardPictureBonus1Sprite;      // 0x0000E980
extern intptr_t lSC1PStageCardPictureBonus2Sprite;      // 0x00027388
extern intptr_t lSC1PStageCardPictureBonus3Sprite;      // 0x0001A658

// 0x80135C28
s32 sSC1PStageCardStage;

// 0x80135C2C
GObj *sSC1PStageCardVSNameGObj;

// 0x80135C30
GObj *sSC1PStageCardNameGObj;

// 0x80135CC8
s32 sSC1PStageCardPlayerFighterKind;

// 0x80135CD8
s32 sSC1PStageCardAlly1FighterKind;

// 0x80135CE8
s32 sSC1PStageCardAlly2FighterKind;

// 0x80135CF8
s32 D_80135CF8_12F038;

// 0x80136058
void *sSC1PStageCardFiles[4];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80134DF0
u32 dSC1PStageCardFileIDs[/* */] = { 0xB, 0xC, 0xD, 0xE };

// 0x80134E00
Lights1 dSC1PStageCardLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80134E18
Gfx dSC1PStageCardDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dSC1PStageCardLights1),
    gsSPEndDisplayList()
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void sc1PStageCardProcLights(Gfx **dls)
{
    gSPDisplayList(dls[0]++, dSC1PStageCardDisplayList);
}

// 0x80131B24
void sc1PStageCardMakeSky(void)
{
    GObj *gobj;
    SObj *sobj;
    
    gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);
    
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 26, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], &lSC1PStageCardSkySprite));
    
    sobj->pos.x = 10.0F;
    sobj->pos.y = 59.0F;
}

// 0x80131BA8
void sc1PStageCardMakeBanners(void)
{
    GObj *gobj;
    SObj *sobj;
    
    gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 28, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], &lSC1PStageCardBannerTopSprite));
    
    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], &lSC1PStageCardBannerBottomSprite));
    sobj->pos.x = 10.0F;
    sobj->pos.y = 182.0F;
}

// 0x80131C58
void func_ovl24_80131C58(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x00, 0x00, 0x00, 0xFF);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 311, 59);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 182, 311, 231);
    
    if (sSC1PStageCardStage < 4)
    {
        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0x00, 0xFF);
    }
    else gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x7F, 0x7F, 0x7F, 0xFF);
    
    gDPFillRectangle(gDisplayListHead[0]++, 148, 31, 156, 39);
    
    if (sSC1PStageCardStage < 8)
    {
        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0x00, 0xFF);
    }
    else gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x7F, 0x7F, 0x7F, 0xFF);
    
    gDPFillRectangle(gDisplayListHead[0]++, 202, 31, 210, 39);
    
    if (sSC1PStageCardStage < 12)
    {
        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0x00, 0xFF);
    }
    else gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x7F, 0x7F, 0x7F, 0xFF);
    
    gDPFillRectangle(gDisplayListHead[0]++, 256, 31, 264, 39);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

    lbCommonClearExternSpriteParams();
}

// 0x80131ECC - unused?
void func_ovl24_80131ECC(void)
{
    return;
}

// 0x80131F6C
sb32 sc1PStageCardCheckNotBonusStage(s32 stage)
{
    switch (stage)
    {
    case nSC1PGameStageBonus1:
    case nSC1PGameStageBonus2:
    case nSC1PGameStageBonus3:
        return FALSE;

    default:
        return TRUE;
    }
}

// 0x80131F98
void sc1PStageCardMakeLabels(s32 stage)
{
    GObj *gobj;
    SObj *sobj;

    // 0x80134E40
    intptr_t number_offsets[/* */] =    
    {
        &lSC1PStageCardNumber1Sprite,
        &lSC1PStageCardNumber2Sprite,
        &lSC1PStageCardNumber3Sprite,
        &lSC1PStageCardNumber1Sprite,
        &lSC1PStageCardNumber4Sprite,
        &lSC1PStageCardNumber5Sprite,
        &lSC1PStageCardNumber6Sprite,
        &lSC1PStageCardNumber2Sprite,
        &lSC1PStageCardNumber7Sprite,
        &lSC1PStageCardNumber8Sprite,
        &lSC1PStageCardNumber9Sprite,
        &lSC1PStageCardNumber3Sprite,
        &lSC1PStageCardNumber10Sprite,
        0x0
    };
    
    gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    if (sc1PStageCardCheckNotBonusStage(stage) == FALSE)
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], &lSC1PStageCardBonusTextSprite));

        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
        
        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0xFF;
        sobj->sprite.blue = 0xFF;
        
        sobj->pos.x = 15.0F;
        sobj->pos.y = 18.0F;
    }
    if (stage == nSC1PGameStageBoss)
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], &lSC1PStageCardFinalTextSprite));
        
        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
        
        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0xFF;
        sobj->sprite.blue = 0xFF;
        
        sobj->pos.x = 15.0F;
        sobj->pos.y = 17.0F;
    }
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], &lSC1PStageCardStageTextSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
        
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
    
    sobj->pos.x = 23.0F;
    sobj->pos.y = 33.0F;
    
    if (stage != nSC1PGameStageBoss)
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], number_offsets[stage]));
        
        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
        
        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0xFF;
        sobj->sprite.blue = 0xFF;
        
        sobj->pos.x = 80.0F;
        sobj->pos.y = 33.0F;
    }
}

// 0x801321C0
void sc1PStageCardMakeFigures(s32 stage)
{
    GObj *gobj;
    SObj *sobj;
    s32 i;

    // 0x80134E78
    intptr_t figure_offsets[/* */] =
    {
        &lSC1PStageCardFigureLinkSprite,
        &lSC1PStageCardFigureYoshiSprite,
        &lSC1PStageCardFigureFoxSprite,
        &lSC1PStageCardFigureBonusSprite,
        &lSC1PStageCardFigureMarioBrosSprite,
        &lSC1PStageCardFigurePikachuSprite,
        &lSC1PStageCardFigureGDonkeySprite,
        &lSC1PStageCardFigureBonusSprite,
        &lSC1PStageCardFigureKirbySprite,
        &lSC1PStageCardFigureSamusSprite,
        &lSC1PStageCardFigureMMarioSprite,
        &lSC1PStageCardFigureBonusSprite,
        &lSC1PStageCardFigureZakoSprite,
        &lSC1PStageCardFigureBossSprite,
        0x0
    };

    // 0x80134EB4
    Vec2i figure_pos[/* */] =
    {
        // Link, Yoshi Team 
        {  99, 18 }, { 115, 26 },

        // Fox, Bonus Stage 1
        { 131, 18 }, { 148, 33 },

        // Mario Bros., Pikachu
        { 156, 26 }, { 172, 18 },

        // Giant DK, Bonus Stage 2
        { 189, 26 }, { 205, 33 },

        // Kirby Team, Samus
        { 212, 18 }, { 230, 26 },

        // Metal Mario, Bonus Stage 3
        { 246, 18 }, { 261, 33 },

        // Fighting Polygon Team, Final Stage
        { 270, 34 }, { 280, 23 }
    };

    gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_DLLINKORDER_DEFAULT, -1);

    for (i = nSC1PGameStageCommonStart; i <= nSC1PGameStageCommonEnd; i++)
    {
        if (i >= stage)
        {
            sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], figure_offsets[i]));

            sobj->sprite.attr &= ~SP_FASTCOPY;
            sobj->sprite.attr |= SP_TRANSPARENT;
            
            sobj->pos.x = figure_pos[i].x;
            sobj->pos.y = figure_pos[i].y;
        }
    }
}

// 0x80132354
void sc1PStageCardMakeBonusTasks(s32 stage)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    switch (stage)
    {
    case nSC1PGameStageBonus1:
        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], &lSC1PStageCardBonus1TaskSprite));

        sobj->pos.x = 160 - (sobj->sprite.width / 2);
        sobj->pos.y = 197.0F;
        break;
        
    case nSC1PGameStageBonus2:
        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], &lSC1PStageCardBonus2TaskSprite));
        
        sobj->pos.x = 160 - (sobj->sprite.width / 2);
        sobj->pos.y = 197.0F;
        break;
        
    case nSC1PGameStageBonus3:
        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], &lSC1PStageCardBonus3TaskSprite));
        
        sobj->pos.x = 160 - (sobj->sprite.width / 2);
        sobj->pos.y = 197.0F;
        break;

#ifdef AVOID_UB
    // WARNING: sobj is uninitialized in the default case, but still accessed outside of the switch.
    default:
        sobj = NULL;
        break;
#endif
    }

#ifdef AVOID_UB
    // Make sure sobj is a valid pointer...
    if (sobj != NULL)
    {
        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
    
        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0xFF;
        sobj->sprite.blue = 0xFF;
    }
#else
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
#endif
}

// 0x801324EC
void sc1PStageCardMakeVSName(s32 stage)
{
    GObj *gobj;
    SObj *sobj;

    // 0x80134F24
    intptr_t opponent_offsets[/* */] =
    {
        &lSC1PStageCardNameLinkSprite,
        &lSC1PStageCardVSNameYoshiTeamSprite,
        &lSC1PStageCardVSNameFoxSprite,
        0x0,
        &lSC1PStageCardVSNameMarioBrosSprite,
        &lSC1PStageCardNamePikachuSprite,
        &lSC1PStageCardVSNameGDonkeySprite,
        0x0,
        &lSC1PStageCardVSNameKirbyTeamSprite,
        &lSC1PStageCardVSNameSamusSprite,
        &lSC1PStageCardVSNameMMarioSprite,
        0x0,
        &lSC1PStageCardVSNameZakoSprite,
        &lSC1PStageCardVSNameBossSprite,
        0x0
    };
    sSC1PStageCardVSNameGObj = gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], &lSC1PStageCardVSTextSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
    
    if ((stage == nSC1PGameStageLink) || (stage == nSC1PGameStagePikachu))
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[1], opponent_offsets[stage]));
    }
    else sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], opponent_offsets[stage]));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
}

// 0x80132634
s32 sc1PStageCardGetAlliesNum(s32 stage)
{
    switch (stage)
    {
    case nSC1PGameStageMario:
        return 1;
        
    case nSC1PGameStageDonkey:
        return 2;
        
    default:
        return 0;
    }
}

// 0x80132668
void sc1PStageCardMakeName(s32 stage)
{
    GObj *gobj;
    SObj *sobj;
    
    // 0x80134F60
    intptr_t name_offsets[/* */] =
    {
        &lSC1PStageCardNameMarioSprite,
        &lSC1PStageCardNameFoxSprite,
        &lSC1PStageCardNameDonkeySprite,
        &lSC1PStageCardNameSamusSprite,
        &lSC1PStageCardNameLuigiSprite,
        &lSC1PStageCardNameLinkSprite,
        &lSC1PStageCardNameYoshiSprite,
        &lSC1PStageCardNameCaptainSprite,
        &lSC1PStageCardNameKirbySprite,
        &lSC1PStageCardNamePikachuSprite,
        &lSC1PStageCardNamePurinSprite,
        &lSC1PStageCardNameNessSprite
    };

    sSC1PStageCardNameGObj = gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[1], name_offsets[sSC1PStageCardPlayerFighterKind]));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
    
    if (sc1PStageCardGetAlliesNum(stage) != 0)
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], &lSC1PStageCardDashTextSprite));
        
        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
    
        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0xFF;
        sobj->sprite.blue = 0xFF;
        
        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[1], name_offsets[sSC1PStageCardAlly1FighterKind]));
        
        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
    
        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0xFF;
        sobj->sprite.blue = 0xFF;
        
        if (sc1PStageCardGetAlliesNum(stage) == 2)
        {
            sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[1], name_offsets[sSC1PStageCardAlly2FighterKind]));
            
            sobj->sprite.attr &= ~SP_FASTCOPY;
            sobj->sprite.attr |= SP_TRANSPARENT;
    
            sobj->sprite.red = 0xFF;
            sobj->sprite.green = 0xFF;
            sobj->sprite.blue = 0xFF;
        }
    }
}

// 0x8013283C
s32 sc1PStageCardGetPlayerNameOffsetX(s32 stage)
{
    s32 allies_num = sc1PStageCardGetAlliesNum(stage);
    s32 ally1_name_width;
    s32 max_name_width;
    SObj *sobj;
    
    if (allies_num != 0)
    {
        if (allies_num == 1)
        {
            sobj = SObjGetStruct(sSC1PStageCardNameGObj);

            return sobj->sprite.width + sobj->next->sprite.width + sobj->next->next->sprite.width + 10;
        }
        else
        {
            sobj = SObjGetStruct(sSC1PStageCardNameGObj);

            ally1_name_width = sobj->next->next->sprite.width;

            if (ally1_name_width > sobj->next->next->next->sprite.width)
            {
                max_name_width = sobj->next->next->sprite.width;
            }
            else max_name_width = sobj->next->next->next->sprite.width;
            
            return sobj->sprite.width + sobj->next->sprite.width + max_name_width + 10;
        }
    }
    else return SObjGetStruct(sSC1PStageCardNameGObj)->sprite.width + 10;
}

// 0x801328F4
s32 sc1PStageCardGetVSNameOffsetX(s32 stage)
{
    SObj *sobj = SObjGetStruct(sSC1PStageCardVSNameGObj);
    
    return sobj->sprite.width + sobj->next->sprite.width + 10;
}

// 0x8013291C
s32 sc1PStageCardGetTotalNameOffsetX(s32 stage)
{
    return sc1PStageCardGetPlayerNameOffsetX(stage) + sc1PStageCardGetVSNameOffsetX(stage);
}

// 0x8013294C
void sc1PStageCardSetNamePositions(s32 stage)
{
    s32 total_offset;
    s32 allies_num;
    SObj *sobj, *next_sobj;
    
    total_offset = 160 - (sc1PStageCardGetTotalNameOffsetX(stage) / 2);

    sobj = SObjGetStruct(sSC1PStageCardNameGObj);

    sobj->pos.x = total_offset;
    sobj->pos.y = 196.0F;

    allies_num = sc1PStageCardGetAlliesNum(stage);
    
    if (allies_num != 0)
    {
        sobj->next->pos.x = sobj->pos.x + sobj->sprite.width;
        sobj->next->pos.y = 196.0F;
        
        if (allies_num == 1)
        {
            next_sobj = sobj->next;
            
            next_sobj->next->pos.x = next_sobj->pos.x + next_sobj->sprite.width;
            next_sobj->next->pos.y = 196.0F;
        }
        else
        {
            next_sobj = sobj->next;
            
            next_sobj->next->pos.x = next_sobj->pos.x + next_sobj->sprite.width;
            next_sobj->next->pos.y = 188.0F;
            
            next_sobj->next->next->pos.x = next_sobj->pos.x + next_sobj->sprite.width;
            next_sobj->next->next->pos.y = 204.0F;
        }
    }
    sobj = SObjGetStruct(sSC1PStageCardVSNameGObj);

    sobj->pos.x = sc1PStageCardGetPlayerNameOffsetX(stage) + total_offset;
    sobj->pos.y = 196.0F;

    sobj->next->pos.x = sobj->pos.x + sobj->sprite.width + 10.0F;
    sobj->next->pos.y = (stage == nSC1PGameStageZako) ? 190.0F : 196.0F;
}

// 0x80132B10
void sc1PStageCardMakeNameAll(s32 stage)
{
    sc1PStageCardMakeName(stage);
    sc1PStageCardMakeVSName(stage);
    sc1PStageCardSetNamePositions(stage);
}

// 0x80132B40
void sc1PStageCardMakeStageInfo(s32 stage)
{
    if (sc1PStageCardCheckNotBonusStage(stage) != FALSE)
    {
        sc1PStageCardMakeNameAll(stage);
    }
    else sc1PStageCardMakeBonusTasks(stage);
}

// 0x80132B80
f32 sc1PStageCardGetFighterVelocityZ(s32 card_anim_frame_id)
{
    // 0x80134F90
    f32 vel_z[/* */] =
    {
        30.0F,
        40.0F,
        40.0F,
        50.0F,
        50.0F,
        50.0F
    };
    return vel_z[card_anim_frame_id];
}

// 0x80132BD4
void sc1PStageCardUpdateFighterPositionZ(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *dobj = DObjGetStruct(fighter_gobj);
    s32 id = fp->card_anim_frame_id;
    
    if (dobj->translate.vec.f.z < 0.0F)
    {
        dobj->translate.vec.f.z += sc1PStageCardGetFighterVelocityZ(id);
        
        if (dobj->translate.vec.f.z > 0.0F)
        {
            dobj->translate.vec.f.z = 0.0F;
        }
    }
}

// 0x80132C44
f32 sc1PStageCardGetFighterPositionZ(s32 card_anim_frame_id)
{
    // 0x80134FA8
    f32 pos_z[/* */] =
    {
         -500.0F,
         -600.0F,
         -800.0F,
         -700.0F,
         -900.0F,
        -1100.0F
    };
    return pos_z[card_anim_frame_id];
}

// 0x80132C98
void sc1PStageCardMakeFighter(s32 ft_kind, s32 costume, s32 shade, s32 card_anim_frame_id, void **figatree)
{
    ftStruct *fp;
    GObj *fighter_gobj;
    ftCreateDesc ft_desc = dFTManagerDefaultFighterDesc;
    
    // 0x80134FC0
    s32 dl_links[/* */] =
    {
        31,
        31,
        30,
        31,
        30,
        29
    };
    
    ft_desc.ft_kind = ft_kind;

    ft_desc.costume = costume;
    ft_desc.shade = shade;
    
    ft_desc.figatree_heap = *figatree;
    
    ft_desc.player = 0;
    
    fighter_gobj = ftManagerMakeFighter(&ft_desc);
    
    scSubsysFighterSetStatus(fighter_gobj, 0x1000D);
    
    fp = ftGetStruct(fighter_gobj);
    
    fp->card_anim_frame_id = card_anim_frame_id;
    
    gcMoveGObjDL(fighter_gobj, dl_links[card_anim_frame_id], GOBJ_DLLINKORDER_DEFAULT);
    gcAddGObjProcess(fighter_gobj, sc1PStageCardUpdateFighterPositionZ, nOMObjProcessKindProc, 1);
    
    DObjGetStruct(fighter_gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(fighter_gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(fighter_gobj)->translate.vec.f.z = sc1PStageCardGetFighterPositionZ(card_anim_frame_id);
    
    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0F;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0F;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0F;

    // ...what
    if (ft_kind);
    if (costume);
    if (shade);
}

// 0x80132E04
void sc1PStageCardInitAllyTextParams(SObj *sobj)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
}

// 0x80132E2C
void sc1PStageCardMakeAllyText(s32 stage)
{
    GObj *gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    if (stage == nSC1PGameStageMario)
    {
        SObj *sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], &lSC1PStageCardAlly1TextSprite));
        
        sobj->pos.x = 80.0F;
        sobj->pos.y = 80.0F;
        
        sc1PStageCardInitAllyTextParams(sobj);
    }
    else
    {
        SObj *sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], &lSC1PStageCardAlly2TextSprite));
        
        sobj->pos.x = 80.0F;
        sobj->pos.y = 70.0F;
        
        sc1PStageCardInitAllyTextParams(sobj);
        
        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[0], &lSC1PStageCardAlly1TextSprite));
        
        sobj->pos.x = 90.0F;
        sobj->pos.y = 100.0F;
        
        sc1PStageCardInitAllyTextParams(sobj);
    }
}

// 0x80132F40
f32 sc1PStageCardGetVSFighterVelocityZ(s32 stage, s32 ft_kind)
{
    if (stage == nSC1PGameStageMario)
    {
        if (ft_kind == nFTKindMario)
        {
            return 40.0F;
        }
        else return 40.0F;
    }
    else return 30.0F;
}

// 0x80132F84
void sc1PStageCardZakoFighterProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *dobj = DObjGetStruct(fighter_gobj);
    s32 id = fp->card_anim_frame_id;
    
    switch (sSC1PStageCardStage)
    {
    case nSC1PGameStageYoshi:
        fighter_gobj->flags = ((id * 3) < D_80135CF8_12F038) ? GOBJ_FLAG_NONE : GOBJ_FLAG_NORENDER;
        break;
        
    case nSC1PGameStageKirby:
        fighter_gobj->flags = ((id * 10) < D_80135CF8_12F038) ? GOBJ_FLAG_NONE : GOBJ_FLAG_NORENDER;
        break;

    case nSC1PGameStageZako:
        break;

    default:
        if (dobj->translate.vec.f.z < 0.0F)
        {
            dobj->translate.vec.f.z += sc1PStageCardGetVSFighterVelocityZ(sSC1PStageCardStage, fp->ft_kind);
            
            if (dobj->translate.vec.f.z > 0.0F)
            {
                dobj->translate.vec.f.z = 0.0F;
            }
        }
        break;
    }
}

// 0x80133080
void sc1PStageCardSetKirbyTeamModelPartIDs(GObj *fighter_gobj, s32 ft_kind)
{
    // 0x80134FD8
    s32 modelpart_ids[/* */] =
    {
        13,
        5,
        10,
        4,
        7,
        12,
        6,
        8
    };

    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 id = fp->card_anim_frame_id;
    
    if (ft_kind == nFTKindKirby)
    {
        s32 modelpart_id = modelpart_ids[id];
        
        if (modelpart_id == 13)
        {
            ftParamSetModelPartID(fighter_gobj, 6, gSC1PManagerKirbyTeamModelPartID);
        }
        else ftParamSetModelPartID(fighter_gobj, 6, modelpart_id);
    }
}

// 0x8013312C
f32 sc1PStageCardGetVSFighterPositionZ(s32 stage, s32 ft_kind)
{
    if (stage == nSC1PGameStageMario)
    {
        if (ft_kind == nFTKindMario)
        {
            return -600.0F;
        }
        else return -800.0F;
    }
    else return -500.0F;
}

// 0x80133170
void sc1PStageCardZakoFighterProcDisplay(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_2CYCLE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_PASS, G_RM_AA_ZB_OPA_SURF2);
    gDPSetEnvColor(gDisplayListHead[0]++, 0xFF, 0xFF, 0xFF, 0x00);
    
    if (sSC1PStageCardStage == 12)
    {
        if (((fp->ft_kind * 2) - 28) < D_80135CF8_12F038)
        {
            ftMainSetFighterStatus(fighter_gobj, 0x1000E, 0.0F, 0.0F, FTSTATUS_PRESERVE_NONE);
            gcPlayAnimAll(fighter_gobj);
            gcEndProcessAll(fighter_gobj);
            ftDisplayMainProcDisplay(fighter_gobj);
        }
        if (((fp->ft_kind * 2) - 8) < D_80135CF8_12F038)
        {
            ftMainSetFighterStatus(fighter_gobj, 0x1000E, 1.0F, 0.0F, FTSTATUS_PRESERVE_NONE);
            gcPlayAnimAll(fighter_gobj);
            gcEndProcessAll(fighter_gobj);
            ftDisplayMainProcDisplay(fighter_gobj);
        }
        if (((fp->ft_kind * 2) + 12) < D_80135CF8_12F038)
        {
            ftMainSetFighterStatus(fighter_gobj, 0x1000E, 2.0F, 0.0F, FTSTATUS_PRESERVE_NONE);
            gcPlayAnimAll(fighter_gobj);
            gcEndProcessAll(fighter_gobj);
            ftDisplayMainProcDisplay(fighter_gobj);
        }
    }
    else ftDisplayMainProcDisplay(fighter_gobj);
    
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80133398
GObj* sc1PStageCardMakeZakoFighter(s32 ft_kind, s32 stage, s32 card_anim_frame_id, void **figatree, u8 dl_link)
{
    GObj *fighter_gobj;
    ftStruct *fp;
    ftCreateDesc ft_desc = dFTManagerDefaultFighterDesc;

    ft_desc.ft_kind = ft_kind;
    ft_desc.costume = ftParamGetCostumeCommonID(ft_kind, 0);
    ft_desc.figatree_heap = *figatree;
    ft_desc.proc_display = sc1PStageCardZakoFighterProcDisplay;
    ft_desc.player = 0;
    ft_desc.unk_rebirth_0x1C = 4;
    ft_desc.unk_rebirth_0x1D = 4;
    
    if ((stage == nSC1PGameStageYoshi) || (stage == nSC1PGameStageZako))
    {
        ft_desc.detail = nFTPartsDetailLow;
    }
    fighter_gobj = ftManagerMakeFighter(&ft_desc);
    ftMainSetFighterStatus(fighter_gobj, 0x1000E, card_anim_frame_id, 0.0F, 0);
    gcPlayAnimAll(fighter_gobj);
    gcEndProcessAll(fighter_gobj);
    
    fp = ftGetStruct(fighter_gobj);
    fp->card_anim_frame_id = card_anim_frame_id;
    
    gcMoveGObjDL(fighter_gobj, dl_link, GOBJ_DLLINKORDER_DEFAULT);
    gcAddGObjProcess(fighter_gobj, sc1PStageCardZakoFighterProcUpdate, nOMObjProcessKindProc, 1);
    
    DObjGetStruct(fighter_gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(fighter_gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(fighter_gobj)->translate.vec.f.z = 0.0F;

    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0F;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0F;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0F;
    
    if ((stage != nSC1PGameStageKirby) && (stage != nSC1PGameStageYoshi) && (stage != nSC1PGameStageZako))
    {
        DObjGetStruct(fighter_gobj)->translate.vec.f.z = sc1PStageCardGetVSFighterPositionZ(stage, ft_kind);
    }
    if (stage == nSC1PGameStageBoss)
    {
        fp->colanim.is_use_light = TRUE;
        
        fp->colanim.light_angle_x = -20.0F;
        fp->colanim.light_angle_y = -30.0F;
    }
    return fighter_gobj;
}

// 0x8013357C
void sc1PStageCardMakeBonusPicture(s32 stage)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 26, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    switch (stage)
    {
    case nSC1PGameStageBonus1:
        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[2], &lSC1PStageCardPictureBonus1Sprite));
        
        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
        
        sobj->pos.x = 103.0F;
        sobj->pos.y = 63.0F;
        break;
        
    case nSC1PGameStageBonus2:
        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[3], &lSC1PStageCardPictureBonus2Sprite));
        
        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
        
        sobj->pos.x = 45.0F;
        sobj->pos.y = 55.0F;
        break;
        
    case nSC1PGameStageBonus3:
        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PStageCardFiles[2], &lSC1PStageCardPictureBonus3Sprite));
        
        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
        
        sobj->pos.x = 10.0F;
        sobj->pos.y = 55.0F;
        break;
    }
}

// 0x801336CC
CameraDesc* sc1PStageCardGetCameraDesc(CameraDesc *cam_desc, s32 stage)
{
    // 0x80134FF8
    CameraDesc cam_descs[/* */] =
    {
        // VS Link
        { { 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F }, 0.0F },

        // VS Yoshi Team
        { { 2069.77F, 487.31F, 843.2F }, { -138.97F, 345.57F, 842.82F }, 0.0F },

        // VS Fox
        { { 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F }, 0.0F },

        // Break the Targets
        { { 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F }, 0.0F },

        // VS Mario Bros.
        { { 1053.95F, 404.97F, 364.82F }, { -311.21F, 309.63F, 45.02F }, 0.0F },

        // VS Pikachu
        { { 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F }, 0.0F },

        // VS Giant DK
        { { 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F }, 0.0F },

        // Board the Platforms
        { { 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F }, 0.0F },

        // VS Kirby Team
        { { 3940.63F, 1402.99F, 44.52F }, { -403.2F, 486.08F, 45.02F }, 0.0F },

        // VS Samus
        { { 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F }, 0.0F },

        // VS Metal Mario
        { { 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F }, 0.0F },

        // Race to the Finish
        { { 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F }, 0.0F },

        // VS Fighting Polygon Team
        { { 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F }, 0.0F },

        // VS Master Hand
        { { 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F }, 0.0F }
    };

    *cam_desc = cam_descs[stage];
    
    return cam_desc;
}

// 0x8013376C
Camera* func_ovl24_8013376C(s32 stage, u32 dl_link)
{
    GObj *gobj;
    Camera *cam;
    CameraDesc cam_desc;

    // 0x80135180
    intptr_t camanim_joints[/* */] =
    {
        0x6FE0,
        0x6EF0,
        0x6F80,
        0x0,
        0x7040,
        0x6FB0,
        0x7010,
        0x0,
        0x6EC0,
        0x6F50,
        0x7070,
        0x0,
        0x70A0,
        0x6F20
    };
    
    gobj = gcMakeCameraGObj
    (
        0x401,
        NULL,
        16,
        GOBJ_LINKORDER_DEFAULT,
        func_80017EC0,
        40,
        CAMERA_MASK_DLLINK(dl_link),
        -1,
        FALSE,
        nOMObjProcessKindProc,
        NULL,
        1,
        FALSE
    );
    gcAddOMMtxForCamera(CameraGetStruct(gobj), nOMTransformPerspFastF, 0);
    gcAddOMMtxForCamera(CameraGetStruct(gobj), 15, 0);
    
    cam = CameraGetStruct(gobj);
    
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    gcAddCameraCamAnimJoint(cam, lbGetDataFromFile(AObjEvent32*, sSC1PStageCardFiles[0], camanim_joints[stage]), 0.0F);
    gcPlayCamAnim(gobj);
    
    switch (stage)
    {
    case nSC1PGameStageMario:
        sc1PStageCardGetCameraDesc(&cam_desc, stage);
        
        cam->vec.eye.x = cam_desc.eye.x;
        cam->vec.eye.y = cam_desc.eye.y;
        cam->vec.eye.z = cam_desc.eye.z;
        cam->vec.at.x = cam_desc.at.x;
        cam->vec.at.y = cam_desc.at.y;
        cam->vec.at.z = cam_desc.at.z;
        break;
    }
    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;
    
    return cam;
}
