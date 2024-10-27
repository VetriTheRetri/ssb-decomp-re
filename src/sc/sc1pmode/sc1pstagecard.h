#ifndef _SC1PSTAGECARD_H_
#define _SC1PSTAGECARD_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <sc/scdef.h>
#include <ft/ftdef.h>

extern intptr_t lSC1PStageCardDecalVSSprite;                // 0x00001F10

extern intptr_t lSC1PStageCardNameMarioSprite;              // 0x00000138
extern intptr_t lSC1PStageCardNameFoxSprite;                // 0x00000258
extern intptr_t lSC1PStageCardNameDonkeySprite;             // 0x00000378
extern intptr_t lSC1PStageCardNameSamusSprite;              // 0x000004F8
extern intptr_t lSC1PStageCardNameLuigiSprite;              // 0x00000618
extern intptr_t lSC1PStageCardNameLinkSprite;               // 0x00000738
extern intptr_t lSC1PStageCardNameYoshiSprite;              // 0x00000858
extern intptr_t lSC1PStageCardNameCaptainSprite;            // 0x00000A38
extern intptr_t lSC1PStageCardNameKirbySprite;              // 0x00000BB8
extern intptr_t lSC1PStageCardNamePikachuSprite;            // 0x00000D38
extern intptr_t lSC1PStageCardNamePurinSprite;              // 0x00000F78
extern intptr_t lSC1PStageCardNameNessSprite;               // 0x00001098

extern intptr_t lSC1PStageCardVSNameYoshiTeamSprite;        // 0x00006938
extern intptr_t lSC1PStageCardVSNameFoxSprite;              // 0x00005988
extern intptr_t lSC1PStageCardVSNameMarioBrosSprite;        // 0x00005EC8
extern intptr_t lSC1PStageCardVSNameGDonkeySprite;          // 0x00005748
extern intptr_t lSC1PStageCardVSNameKirbyTeamSprite;        // 0x00005C88
extern intptr_t lSC1PStageCardVSNameSamusSprite;            // 0x00006638
extern intptr_t lSC1PStageCardVSNameMMarioSprite;           // 0x00005328
extern intptr_t lSC1PStageCardVSNameZakoSprite;             // 0x000063F8
extern intptr_t lSC1PStageCardVSNameBossSprite;             // 0x00005568

extern intptr_t lSC1PStageCardBonus1TaskSprite;             // 0x00003B08
extern intptr_t lSC1PStageCardBonus2TaskSprite;             // 0x00004388
extern intptr_t lSC1PStageCardBonus3TaskSprite;             // 0x00004AC8

extern intptr_t lSC1PStageCardNumber1Sprite;                // 0x00002018
extern intptr_t lSC1PStageCardNumber2Sprite;                // 0x00002118
extern intptr_t lSC1PStageCardNumber3Sprite;                // 0x00002218
extern intptr_t lSC1PStageCardNumber4Sprite;                // 0x00002318
extern intptr_t lSC1PStageCardNumber5Sprite;                // 0x00002418
extern intptr_t lSC1PStageCardNumber6Sprite;                // 0x00002518
extern intptr_t lSC1PStageCardNumber7Sprite;                // 0x00002618
extern intptr_t lSC1PStageCardNumber8Sprite;                // 0x00002718
extern intptr_t lSC1PStageCardNumber9Sprite;                // 0x00002818
extern intptr_t lSC1PStageCardNumber10Sprite;               // 0x000029B8

extern intptr_t lSC1PStageCardFigureLinkSprite;             // 0x000071D0
extern intptr_t lSC1PStageCardFigureYoshiSprite;            // 0x00007320
extern intptr_t lSC1PStageCardFigureFoxSprite;              // 0x00007470
extern intptr_t lSC1PStageCardFigureMarioBrosSprite;        // 0x000075C0
extern intptr_t lSC1PStageCardFigurePikachuSprite;          // 0x00007710
extern intptr_t lSC1PStageCardFigureGDonkeySprite;          // 0x00007860
extern intptr_t lSC1PStageCardFigureKirbySprite;            // 0x000079B0
extern intptr_t lSC1PStageCardFigureSamusSprite;            // 0x00007B00
extern intptr_t lSC1PStageCardFigureMMarioSprite;           // 0x00007C50
extern intptr_t lSC1PStageCardFigureZakoSprite;             // 0x00007D60
extern intptr_t lSC1PStageCardFigureBossSprite;             // 0x00007E70
extern intptr_t lSC1PStageCardFigureBonusSprite;            // 0x00007F40

extern intptr_t lSC1PStageCardTextStageSprite;              // 0x00002E38
extern intptr_t lSC1PStageCardTextBonusSprite;              // 0x000030F8
extern intptr_t lSC1PStageCardTextFinalSprite;              // 0x00003320
extern intptr_t lSC1PStageCardTextDashSprite;               // 0x000050E8
extern intptr_t lSC1PStageCardTextVSSprite;                 // 0x000069F8
extern intptr_t lSC1PStageCardTextAlly1Sprite;              // 0x00006B18
extern intptr_t lSC1PStageCardTextAlly2Sprite;              // 0x00006C38

extern intptr_t lSC1PStageCardBannerTopSprite;              // 0x0000C898
extern intptr_t lSC1PStageCardBannerBottomSprite;           // 0x0000ED00
extern intptr_t lSC1PStageCardSkySprite;                    // 0x00014BF0

extern intptr_t lSC1PStageCardPictureBonus1Sprite;          // 0x0000E980
extern intptr_t lSC1PStageCardPictureBonus2Sprite;          // 0x00027388
extern intptr_t lSC1PStageCardPictureBonus3Sprite;          // 0x0001A658

extern intptr_t lSC1PStageCardStageLinkCamAnimJoint;        // 0x00006FE0
extern intptr_t lSC1PStageCardStageYoshiCamAnimJoint;       // 0x00006EF0
extern intptr_t lSC1PStageCardStageFoxCamAnimJoint;         // 0x00006F80
extern intptr_t lSC1PStageCardStageMarioCamAnimJoint;       // 0x00007040
extern intptr_t lSC1PStageCardStagePikachuCamAnimJoint;     // 0x00006FB0
extern intptr_t lSC1PStageCardStageDonkeyCamAnimJoint;      // 0x00007010
extern intptr_t lSC1PStageCardStageKirbyCamAnimJoint;       // 0x00006EC0
extern intptr_t lSC1PStageCardStageSamusCamAnimJoint;       // 0x00006F50
extern intptr_t lSC1PStageCardStageMMarioCamAnimJoint;      // 0x00007070
extern intptr_t lSC1PStageCardStageZakoCamAnimJoint;        // 0x000070A0
extern intptr_t lSC1PStageCardStageBossCamAnimJoint;        // 0x00006F20

extern intptr_t lSC1PStageCardFighterMarioCamAnimJoint;     // 0x00006C80
extern intptr_t lSC1PStageCardFighterFoxCamAnimJoint;       // 0x00006CB0
extern intptr_t lSC1PStageCardFighterDonkeyCamAnimJoint;    // 0x00006CE0
extern intptr_t lSC1PStageCardFighterSamusCamAnimJoint;     // 0x00006D10
extern intptr_t lSC1PStageCardFighterLuigiCamAnimJoint;     // 0x00006D40
extern intptr_t lSC1PStageCardFighterLinkCamAnimJoint;      // 0x00006D70
extern intptr_t lSC1PStageCardFighterYoshiCamAnimJoint;     // 0x00006DA0
extern intptr_t lSC1PStageCardFighterCaptainCamAnimJoint;   // 0x00006DD0
extern intptr_t lSC1PStageCardFighterKirbyCamAnimJoint;     // 0x00006E00
extern intptr_t lSC1PStageCardFighterPikachuCamAnimJoint;   // 0x00006E30
extern intptr_t lSC1PStageCardFighterPurinCamAnimJoint;     // 0x00006E60
extern intptr_t lSC1PStageCardFighterNessCamAnimJoint;      // 0x00006E90

extern void sc1PStageCardFuncLights(Gfx **dls);
extern void sc1PStageCardMakeSky(void);
extern void sc1PStageCardMakeBanners(void);
extern void func_ovl24_80131C58(GObj *gobj);
extern void sc1PStageCardMakeVSDecal(void);
extern sb32 sc1PStageCardCheckNotBonusStage(s32 stage);
extern void sc1PStageCardMakeLabels(s32 stage);
extern void sc1PStageCardMakeFigures(s32 stage);
extern void sc1PStageCardMakeBonusTasks(s32 stage);
extern void sc1PStageCardMakeVSName(s32 stage);
extern s32 sc1PStageCardGetAlliesNum(s32 stage);
extern void sc1PStageCardMakeName(s32 stage);
extern s32 sc1PStageCardGetPlayerNameOffsetX(s32 stage);
extern s32 sc1PStageCardGetVSNameOffsetX(s32 stage);
extern s32 sc1PStageCardGetTotalNameOffsetX(s32 stage);
extern void sc1PStageCardSetNamePositions(s32 stage);
extern void sc1PStageCardMakeNameAll(s32 stage);
extern void sc1PStageCardMakeStageInfo(s32 stage);
extern f32 sc1PStageCardGetFighterVelocityZ(s32 card_anim_frame_id);
extern void sc1PStageCardUpdateFighterPositionZ(GObj *fighter_gobj);
extern f32 sc1PStageCardGetFighterPositionZ(s32 card_anim_frame_id);
extern void sc1PStageCardMakeFighter(FTDemoDesc fighter, s32 card_anim_frame_id, void **figatree);
extern void sc1PStageCardInitAllyTextParams(SObj *sobj);
extern void sc1PStageCardMakeAllyText(s32 stage);
extern f32 sc1PStageCardGetVSFighterVelocityZ(s32 stage, s32 ft_kind);
extern void sc1PStageCardVSFighterProcUpdate(GObj *fighter_gobj);
extern void sc1PStageCardSetKirbyTeamModelPartIDs(GObj *fighter_gobj, s32 ft_kind);
extern f32 sc1PStageCardGetVSFighterPositionZ(s32 stage, s32 ft_kind);
extern void sc1PStageCardVSFighterFuncDisplay(GObj *fighter_gobj);
extern GObj* sc1PStageCardMakeVSFighter(s32 ft_kind, s32 stage, s32 card_anim_frame_id, void **figatree, u8 dl_link);
extern void sc1PStageCardMakeBonusPicture(s32 stage);
extern CObjDesc* sc1PStageCardGetStageCObjDesc(CObjDesc *cobj_desc, s32 stage);
extern CObj* sc1PStageCardMakeStageCamera(s32 stage, u32 dl_link);
extern sb32 sSC1PStageCardCheckCostumeUsed(s32 stage, s32 ft_kind, s32 color);
extern void sc1PStageCardInitVSFighters(s32 stage);
extern CObjDesc* sc1PStageCardGetFighterCObjDesc(CObjDesc *cobj_desc, s32 ft_kind, s32 cobj_id);
extern void sc1PStageCardMakeFighterCamera(s32 ft_kind, s32 cobj_id);
extern void sc1PStageCardInitFighters(s32 stage);
extern void sc1PStageCardMakeBannersCamera(void);
extern void sc1PStageCardMakeDecalsCamera(void);
extern void sc1PStageCardMakePicturesCamera(void);
extern s32 sc1PStageCardGetFighterAllocsNum(s32 stage);
extern void sc1PStageCardUpdateAnnounce(void);
extern void sc1PStageCardInitVars(void);
extern void sc1PStageCardFuncRun(GObj *gobj);
extern void sc1PStageCardSetupFighterFiles(s32 stage);
extern void sc1PStageCardFuncStart(void);
extern void sc1PStageCardStartScene(void);

#endif
