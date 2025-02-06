#ifndef _MN1PMODE_H_
#define _MN1PMODE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern intptr_t lMN1PModeOptionTabSprite;                   // 0x00001108
extern intptr_t lMN1PModeText1PGameSprite;                  // 0x00002A28
extern intptr_t lMN1PModeDecalControllerSprite;             // 0x000050F8
extern intptr_t lMN1PModeLabel1PSprite;                     // 0x00005338
extern intptr_t lMN1PModeTextTraningModeSprite;             // 0x00005AC8
extern intptr_t lMN1PModeTextBonus1PracticeSprite;          // 0x00005F28
extern intptr_t lMN1PModeTextBonus2PracticeSprite;          // 0x00006388

extern void mnPlayers1PGameModeFuncLights(Gfx **dls);
extern void mnPlayers1PGameModeSetOptionSpriteColors(GObj *gobj, s32 status, s32 option_id);
extern void mnPlayers1PGameModeMakeOptionTab(GObj *gobj, f32 pos_x, f32 pos_y, s32 lrs);
extern void mnPlayers1PGameModeMake1PGame(void);
extern void mnPlayers1PGameModeMakeTrainingMode(void);
extern void mnPlayers1PGameModeMakeBonus1Practice(void);
extern void mnPlayers1PGameModeMakeBonus2Practice(void);
extern void func_ovl18_80132208(SObj *sobj);
extern void func_ovl18_8013223C(void);
extern void mnPlayers1PGameModeLabelsProcDisplay(GObj *gobj);
extern void mnPlayers1PGameModeMakeLabels(void);
extern void mnPlayers1PGameModeMakeDecals(void);
extern void mnPlayers1PGameModeMakeLink3Camera(void);
extern void mnPlayers1PGameModeMakeOptionsCamera(void);
extern void mnPlayers1PGameModeMakeLabelsCamera(void);
extern void mnPlayers1PGameModeMakeDecalsCamera(void);
extern void mnPlayers1PGameModeInitVars(void);
extern void mnPlayers1PGameModeProcRun(GObj *gobj);
extern void mnPlayers1PGameModeFuncStart(void);
extern void mnPlayers1PGameModeStartScene(void);

#endif
