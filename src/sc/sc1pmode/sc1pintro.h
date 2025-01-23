#ifndef _SC1PSTAGECARD_H_
#define _SC1PSTAGECARD_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <sc/scdef.h>
#include <ft/ftdef.h>

extern intptr_t lSC1PIntroDecalVSSprite;                // 0x00001F10

extern intptr_t lSC1PIntroNameMarioSprite;              // 0x00000138
extern intptr_t lSC1PIntroNameFoxSprite;                // 0x00000258
extern intptr_t lSC1PIntroNameDonkeySprite;             // 0x00000378
extern intptr_t lSC1PIntroNameSamusSprite;              // 0x000004F8
extern intptr_t lSC1PIntroNameLuigiSprite;              // 0x00000618
extern intptr_t lSC1PIntroNameLinkSprite;               // 0x00000738
extern intptr_t lSC1PIntroNameYoshiSprite;              // 0x00000858
extern intptr_t lSC1PIntroNameCaptainSprite;            // 0x00000A38
extern intptr_t lSC1PIntroNameKirbySprite;              // 0x00000BB8
extern intptr_t lSC1PIntroNamePikachuSprite;            // 0x00000D38
extern intptr_t lSC1PIntroNamePurinSprite;              // 0x00000F78
extern intptr_t lSC1PIntroNameNessSprite;               // 0x00001098

extern intptr_t lSC1PIntroVSNameYoshiTeamSprite;        // 0x00006938
extern intptr_t lSC1PIntroVSNameFoxSprite;              // 0x00005988
extern intptr_t lSC1PIntroVSNameMarioBrosSprite;        // 0x00005EC8
extern intptr_t lSC1PIntroVSNameGDonkeySprite;          // 0x00005748
extern intptr_t lSC1PIntroVSNameKirbyTeamSprite;        // 0x00005C88
extern intptr_t lSC1PIntroVSNameSamusSprite;            // 0x00006638
extern intptr_t lSC1PIntroVSNameMMarioSprite;           // 0x00005328
extern intptr_t lSC1PIntroVSNameZakoSprite;             // 0x000063F8
extern intptr_t lSC1PIntroVSNameBossSprite;             // 0x00005568

extern intptr_t lSC1PIntroBonus1TaskSprite;             // 0x00003B08
extern intptr_t lSC1PIntroBonus2TaskSprite;             // 0x00004388
extern intptr_t lSC1PIntroBonus3TaskSprite;             // 0x00004AC8

extern intptr_t lSC1PIntroNumber1Sprite;                // 0x00002018
extern intptr_t lSC1PIntroNumber2Sprite;                // 0x00002118
extern intptr_t lSC1PIntroNumber3Sprite;                // 0x00002218
extern intptr_t lSC1PIntroNumber4Sprite;                // 0x00002318
extern intptr_t lSC1PIntroNumber5Sprite;                // 0x00002418
extern intptr_t lSC1PIntroNumber6Sprite;                // 0x00002518
extern intptr_t lSC1PIntroNumber7Sprite;                // 0x00002618
extern intptr_t lSC1PIntroNumber8Sprite;                // 0x00002718
extern intptr_t lSC1PIntroNumber9Sprite;                // 0x00002818
extern intptr_t lSC1PIntroNumber10Sprite;               // 0x000029B8

extern intptr_t lSC1PIntroFigureLinkSprite;             // 0x000071D0
extern intptr_t lSC1PIntroFigureYoshiSprite;            // 0x00007320
extern intptr_t lSC1PIntroFigureFoxSprite;              // 0x00007470
extern intptr_t lSC1PIntroFigureMarioBrosSprite;        // 0x000075C0
extern intptr_t lSC1PIntroFigurePikachuSprite;          // 0x00007710
extern intptr_t lSC1PIntroFigureGDonkeySprite;          // 0x00007860
extern intptr_t lSC1PIntroFigureKirbySprite;            // 0x000079B0
extern intptr_t lSC1PIntroFigureSamusSprite;            // 0x00007B00
extern intptr_t lSC1PIntroFigureMMarioSprite;           // 0x00007C50
extern intptr_t lSC1PIntroFigureZakoSprite;             // 0x00007D60
extern intptr_t lSC1PIntroFigureBossSprite;             // 0x00007E70
extern intptr_t lSC1PIntroFigureBonusSprite;            // 0x00007F40

extern intptr_t lSC1PIntroTextStageSprite;              // 0x00002E38
extern intptr_t lSC1PIntroTextBonusSprite;              // 0x000030F8
extern intptr_t lSC1PIntroTextFinalSprite;              // 0x00003320
extern intptr_t lSC1PIntroTextDashSprite;               // 0x000050E8
extern intptr_t lSC1PIntroTextVSSprite;                 // 0x000069F8
extern intptr_t lSC1PIntroTextAlly1Sprite;              // 0x00006B18
extern intptr_t lSC1PIntroTextAlly2Sprite;              // 0x00006C38

extern intptr_t lSC1PIntroBannerTopSprite;              // 0x0000C898
extern intptr_t lSC1PIntroBannerBottomSprite;           // 0x0000ED00
extern intptr_t lSC1PIntroSkySprite;                    // 0x00014BF0

extern intptr_t lSC1PIntroPictureBonus1Sprite;          // 0x0000E980
extern intptr_t lSC1PIntroPictureBonus2Sprite;          // 0x00027388
extern intptr_t lSC1PIntroPictureBonus3Sprite;          // 0x0001A658

extern intptr_t lSC1PIntroStageLinkCamAnimJoint;        // 0x00006FE0
extern intptr_t lSC1PIntroStageYoshiCamAnimJoint;       // 0x00006EF0
extern intptr_t lSC1PIntroStageFoxCamAnimJoint;         // 0x00006F80
extern intptr_t lSC1PIntroStageMarioCamAnimJoint;       // 0x00007040
extern intptr_t lSC1PIntroStagePikachuCamAnimJoint;     // 0x00006FB0
extern intptr_t lSC1PIntroStageDonkeyCamAnimJoint;      // 0x00007010
extern intptr_t lSC1PIntroStageKirbyCamAnimJoint;       // 0x00006EC0
extern intptr_t lSC1PIntroStageSamusCamAnimJoint;       // 0x00006F50
extern intptr_t lSC1PIntroStageMMarioCamAnimJoint;      // 0x00007070
extern intptr_t lSC1PIntroStageZakoCamAnimJoint;        // 0x000070A0
extern intptr_t lSC1PIntroStageBossCamAnimJoint;        // 0x00006F20

extern intptr_t lSC1PIntroFighterMarioCamAnimJoint;     // 0x00006C80
extern intptr_t lSC1PIntroFighterFoxCamAnimJoint;       // 0x00006CB0
extern intptr_t lSC1PIntroFighterDonkeyCamAnimJoint;    // 0x00006CE0
extern intptr_t lSC1PIntroFighterSamusCamAnimJoint;     // 0x00006D10
extern intptr_t lSC1PIntroFighterLuigiCamAnimJoint;     // 0x00006D40
extern intptr_t lSC1PIntroFighterLinkCamAnimJoint;      // 0x00006D70
extern intptr_t lSC1PIntroFighterYoshiCamAnimJoint;     // 0x00006DA0
extern intptr_t lSC1PIntroFighterCaptainCamAnimJoint;   // 0x00006DD0
extern intptr_t lSC1PIntroFighterKirbyCamAnimJoint;     // 0x00006E00
extern intptr_t lSC1PIntroFighterPikachuCamAnimJoint;   // 0x00006E30
extern intptr_t lSC1PIntroFighterPurinCamAnimJoint;     // 0x00006E60
extern intptr_t lSC1PIntroFighterNessCamAnimJoint;      // 0x00006E90

extern void sc1PIntroFuncLights(Gfx **dls);
extern void sc1PIntroMakeSky(void);
extern void sc1PIntroMakeBanners(void);
extern void func_ovl24_80131C58(GObj *gobj);
extern void sc1PIntroMakeVSDecal(void);
extern sb32 sc1PIntroCheckNotBonusStage(s32 stage);
extern void sc1PIntroMakeLabels(s32 stage);
extern void sc1PIntroMakeFigures(s32 stage);
extern void sc1PIntroMakeBonusTasks(s32 stage);
extern void sc1PIntroMakeVSName(s32 stage);
extern s32 sc1PIntroGetAlliesNum(s32 stage);
extern void sc1PIntroMakeName(s32 stage);
extern s32 sc1PIntroGetPlayerNameOffsetX(s32 stage);
extern s32 sc1PIntroGetVSNameOffsetX(s32 stage);
extern s32 sc1PIntroGetTotalNameOffsetX(s32 stage);
extern void sc1PIntroSetNamePositions(s32 stage);
extern void sc1PIntroMakeNameAll(s32 stage);
extern void sc1PIntroMakeStageInfo(s32 stage);
extern f32 sc1PIntroGetFighterVelocityZ(s32 card_anim_frame_id);
extern void sc1PIntroUpdateFighterPositionZ(GObj *fighter_gobj);
extern f32 sc1PIntroGetFighterPositionZ(s32 card_anim_frame_id);
extern void sc1PIntroMakeFighter(FTDemoDesc fighter, s32 card_anim_frame_id, void **figatree);
extern void sc1PIntroInitAllyTextParams(SObj *sobj);
extern void sc1PIntroMakeAllyText(s32 stage);
extern f32 sc1PIntroGetVSFighterVelocityZ(s32 stage, s32 fkind);
extern void sc1PIntroVSFighterProcUpdate(GObj *fighter_gobj);
extern void sc1PIntroSetKirbyTeamModelPartIDs(GObj *fighter_gobj, s32 fkind);
extern f32 sc1PIntroGetVSFighterPositionZ(s32 stage, s32 fkind);
extern void sc1PIntroVSFighterProcDisplay(GObj *fighter_gobj);
extern GObj* sc1PIntroMakeVSFighter(s32 fkind, s32 stage, s32 card_anim_frame_id, void **figatree, u8 dl_link);
extern void sc1PIntroMakeBonusPicture(s32 stage);
extern CObjDesc* sc1PIntroGetStageCObjDesc(CObjDesc *cobj_desc, s32 stage);
extern CObj* sc1PIntroMakeStageCamera(s32 stage, u32 dl_link);
extern sb32 sSC1PIntroCheckCostumeUsed(s32 stage, s32 fkind, s32 color);
extern void sc1PIntroInitVSFighters(s32 stage);
extern CObjDesc* sc1PIntroGetFighterCObjDesc(CObjDesc *cobj_desc, s32 fkind, s32 cobj_id);
extern void sc1PIntroMakeFighterCamera(s32 fkind, s32 cobj_id);
extern void sc1PIntroInitFighters(s32 stage);
extern void sc1PIntroMakeBannersCamera(void);
extern void sc1PIntroMakeDecalsCamera(void);
extern void sc1PIntroMakePicturesCamera(void);
extern s32 sc1PIntroGetFighterAllocsNum(s32 stage);
extern void sc1PIntroUpdateAnnounce(void);
extern void sc1PIntroInitVars(void);
extern void sc1PIntroProcRun(GObj *gobj);
extern void sc1PIntroSetupFighterFiles(s32 stage);
extern void sc1PIntroFuncStart(void);
extern void sc1PIntroStartScene(void);

#endif
