#ifndef _MN_TITLE_H_
#define _MN_TITLE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern uintptr_t lMNTitleParticleScriptBankLo; 	// 0x00B22C30
extern uintptr_t lMNTitleParticleScriptBankHi; 	// 0x00B22D40
extern uintptr_t lMNTitleParticleTextureBankLo; 	// 0x00B22D40
extern uintptr_t lMNTitleParticleTextureBankHi; 	// 0x00B277B0

extern intptr_t lMNTitleLogoAnimJoint;              // 0x000251D0
extern intptr_t lMNTitleLabelsAnimJoint;            // 0x00025350
extern intptr_t lMNTitlePressStartAnimJoint;        // 0x000258D0
extern intptr_t lMNTitleSlashAnimJoint;             // 0x00025E70
extern intptr_t lMNTitleSlashMatAnimJoint;          // 0x00025F60
extern intptr_t lMNTitleLogoDObjDesc;               // 0x00026020
extern intptr_t lMNTitleLabelsDObjDesc;             // 0x00026130
extern intptr_t lMNTitlePressStartDObjDesc;         // 0x000262C0
extern intptr_t lMNTitleSlashMObjSub;               // 0x000287D8
extern intptr_t lMNTitleSlashDObjDesc;              // 0x00028DA8
extern intptr_t lMNLogoFireDObjDesc;                // 0x00028EB0
extern intptr_t lMNLogoFireAnimJoint;               // 0x00029010

extern intptr_t lMNTitleLogoAnimCutoutSprite;		// 0x00008FC8
extern intptr_t lMNTitleLogoAnimStrikeVSprite;		// 0x000097E8
extern intptr_t lMNTitleLogoAnimStrikeHSprite;		// 0x00009B48
extern intptr_t lMNTitleLogoAnimFullSprite;			// 0x0000BBB0
extern intptr_t lMNTitleBorderUpperSprite;			// 0x0000C208
extern intptr_t lMNTitleTMSprite;					// 0x0000F398
extern intptr_t lMNTitleCutoutSprite;				// 0x00011988
extern intptr_t lMNTitleTMUnkSprite;				// 0x00011AA8
extern intptr_t lMNTitleCopyrightSprite;			// 0x00015320
extern intptr_t lMNTitlePressStartSprite;			// 0x00015A48
extern intptr_t lMNTitleSuperSprite;				// 0x00016728
extern intptr_t lMNTitleSmashSprite;				// 0x000245C8
extern intptr_t lMNTitleBrosSprite;					// 0x00025188

extern intptr_t lMNTitleFireAnimFrame1Sprite;		// 0x00001018
extern intptr_t lMNTitleFireAnimFrame2Sprite;		// 0x00002078
extern intptr_t lMNTitleFireAnimFrame3Sprite;		// 0x000030D8
extern intptr_t lMNTitleFireAnimFrame4Sprite;		// 0x00004138
extern intptr_t lMNTitleFireAnimFrame5Sprite;		// 0x00005198
extern intptr_t lMNTitleFireAnimFrame6Sprite;		// 0x000061F8
extern intptr_t lMNTitleFireAnimFrame7Sprite;		// 0x00007258
extern intptr_t lMNTitleFireAnimFrame8Sprite;		// 0x000082B8
extern intptr_t lMNTitleFireAnimFrame9Sprite;		// 0x00009318
extern intptr_t lMNTitleFireAnimFrame10Sprite;		// 0x0000A378
extern intptr_t lMNTitleFireAnimFrame11Sprite;		// 0x0000B3D8
extern intptr_t lMNTitleFireAnimFrame12Sprite;		// 0x0000C438
extern intptr_t lMNTitleFireAnimFrame13Sprite;		// 0x0000D498
extern intptr_t lMNTitleFireAnimFrame14Sprite;		// 0x0000E4F8
extern intptr_t lMNTitleFireAnimFrame15Sprite;		// 0x0000F558
extern intptr_t lMNTitleFireAnimFrame16Sprite;		// 0x000105B8
extern intptr_t lMNTitleFireAnimFrame17Sprite;		// 0x00011618
extern intptr_t lMNTitleFireAnimFrame18Sprite;		// 0x00012678
extern intptr_t lMNTitleFireAnimFrame19Sprite;		// 0x000136D8
extern intptr_t lMNTitleFireAnimFrame20Sprite;		// 0x00014738
extern intptr_t lMNTitleFireAnimFrame21Sprite;		// 0x00015798
extern intptr_t lMNTitleFireAnimFrame22Sprite;		// 0x000167F8
extern intptr_t lMNTitleFireAnimFrame23Sprite;		// 0x00017858
extern intptr_t lMNTitleFireAnimFrame24Sprite;		// 0x000188B8
extern intptr_t lMNTitleFireAnimFrame25Sprite;		// 0x00019918
extern intptr_t lMNTitleFireAnimFrame26Sprite;		// 0x0001A978
extern intptr_t lMNTitleFireAnimFrame27Sprite;		// 0x0001B9D8
extern intptr_t lMNTitleFireAnimFrame28Sprite;		// 0x0001CA38
extern intptr_t lMNTitleFireAnimFrame29Sprite;		// 0x0001DA98
extern intptr_t lMNTitleFireAnimFrame30Sprite;		// 0x0001EAF8

extern s32 mnTitleGetFighterKindsNum(u16 mask);
extern s32 mnTitleGetShuffledFighterKind(u16 this_mask, u16 prev_mask, s32 random);
extern s32 mnTitleSetDemoFighterKinds(void);
extern void mnTitleInitVars(void);
extern void mnTitleSetEndLogoPosition(void);
extern void mnTitleSetEndLayout(void);
extern void mnTitleProceedDemoNext(void);
extern void mnTitleProceedModeSelect(void);
extern void mnTitleProcRun(GObj *gobj);
extern void mnTitleUpdateFireVars(void);
extern void mnTitleTransitionFromFireLogo(void);
extern void mnTitleShowGObjLinkID(s32 link_id);
extern void mnTitleAdvanceLayout(void);
extern void mnTitleSetAllowProceedWait(void);
extern void mnTitleTransitionsProcRun(GObj *gobj);
extern void mnTitlePlayAnim(GObj *gobj);
extern void mnTitlePressStartProcUpdate(GObj *gobj);
extern void mnTitleProcUpdate(GObj *gobj);
extern void mnTitleUpdateLabelsPosition(GObj *gobj);
extern void mnTitleSetPosition(DObj *dobj, SObj *sobj, s32 kind);
extern void mnTitleSetColors(SObj *sobj, s32 kind);
extern void mnTitleFireProcDisplay(GObj *gobj);
extern void mnTitleFireProcRun(GObj *gobj);
extern void mnTitleShowFire(GObj *gobj);
extern void mnTitleUpdateFireSprite(SObj *sobj, sb32 is_next);
extern void mnTitleFireProcUpdate(GObj *gobj);
extern void mnTitleMakeFire(void);
extern void mnTitleLogoProcUpdate(GObj *gobj);
extern void mnTitleLogoProcDisplay(GObj *gobj);
extern void mnTitleFadeOutLogoProcRun(GObj *gobj);
extern void mnTitleMakeLogoNoOpening(void);
extern void mnTitleMakeLogo(void);
extern void mnTitleMakeSprites(void);
extern void mnTitleMakeLabels(void);
extern void mnTitleMakePressStart(void);
extern void func_ovl10_80133634(void);
extern void mnTitleSlashProcUpdate(GObj *gobj);
extern void mnTitleMakeSlash(void);
extern void mnTitleFireCameraProcUpdate(GObj *gobj);
extern s32 mnTitleMakeCameras(void);
extern void mnTitleLogoFireProcDisplay(GObj *gobj);
extern void mnTitleMakeLogoFire(void);
extern void mnTitleMakeLogoFireParticles(void);
extern void mnTitleMakeActors(void);
extern void mnTitleFuncStart(void);
extern void mnTitleFuncLights(Gfx **dls);
extern void mnTitleFuncUpdate(void);
extern void mnTitleStartScene(void);
extern void mnTitleLoadFiles(void);

#endif