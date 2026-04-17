#ifndef _SCVSBATTLE_H_
#define _SCVSBATTLE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <sc/scdef.h>

extern void scVSBattleFuncUpdate();
extern s32 scVSBattleGetStartPlayerLR(s32 this_player);
extern void scVSBattleStartBattle();
extern sb32 scVSBattleSetScoreCheckSuddenDeath();
extern void scVSBattleStartSuddenDeath();
extern void scVSBattleFuncLights(Gfx **dls);
extern void scVSBattleStartScene();
extern void scVSBattleSetupFiles();

#endif
