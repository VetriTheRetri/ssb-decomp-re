#ifndef _SCAUTODEMO_H_
#define _SCAUTODEMO_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <sc/scdef.h>

extern intptr_t lSCAutoDemoNameMarioSprite;  	// 0x00000138
extern intptr_t lSCAutoDemoNameFoxSprite;     	// 0x00000258
extern intptr_t lSCAutoDemoNameDonkeySprite;  	// 0x00000378
extern intptr_t lSCAutoDemoNameSamusSprite;   	// 0x000004F8
extern intptr_t lSCAutoDemoNameLuigiSprite;   	// 0x00000618
extern intptr_t lSCAutoDemoNameLinkSprite;    	// 0x00000738
extern intptr_t lSCAutoDemoNameYoshiSprite;   	// 0x00000858
extern intptr_t lSCAutoDemoNameCaptainSprite; 	// 0x00000A38
extern intptr_t lSCAutoDemoNameKirbySprite;   	// 0x00000BB8
extern intptr_t lSCAutoDemoNamePikachuSprite; 	// 0x00000D38
extern intptr_t lSCAutoDemoNamePurinSprite;   	// 0x00000F78
extern intptr_t lSCAutoDemoNameNessSprite;    	// 0x00001098

extern void scAutoDemoFuncUpdate(void);
extern void scAutoDemoStartBattle(void);
extern void scAutoDemoDetectExit(void);
extern void scAutoDemoMakeFade(void);
extern sb32 scAutoDemoCheckStopFocusPlayer(ftStruct *fp);
extern void scAutoDemoSetFocusPlayer1(void);
extern void scAutoDemoProcFocusPlayer1(void);
extern void scAutoDemoSetFocusPlayer2(void);
extern void scAutoDemoProcFocusPlayer2(void);
extern void scAutoDemoResetFocusPlayerAll(void);
extern void scAutoDemoSetMagnifyDisplayOn(void);
extern void scAutoDemoExit(void);
extern void scAutoDemoChangeFocus(void);
extern void scAutoDemoUpdateFocus(void);
extern void scAutoDemoFuncRun(GObj *gobj);
extern GObj* scAutoDemoMakeFocusInterface(void);
extern void scAutoDemoGetPlayerSpawnPosition(s32 mapobj_kind, Vec3f *mapobj_pos);
extern s32 scAutoDemoGetFighterKindsNum(u16 flag);
extern s32 scAutoDemoGetShuffledFighterKind(u16 this_mask, u16 prev_mask, s32 random);
extern s32 scAutoDemoGetPlayerDamage(s32 player);
extern void scAutoDemoInitDemo(void);
extern void scAutoDemoInitSObjs(void);
extern void scAutoDemoFuncStart(void);
extern void scAutoDemoFuncLights(Gfx **dls);
extern void scAutoDemoStartScene(void);

// Other file but it's not worth making another header for this one function
extern void scAutoDemoSetupFiles(void);

#endif
