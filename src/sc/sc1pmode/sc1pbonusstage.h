#ifndef _SC1PBONUSSTAGE_H_
#define _SC1PBONUSSTAGE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <sc/scdef.h>

extern void *gSC1PBonusStageItemFile;

extern void sc1PBonusStageFuncUpdate();
extern void sc1PBonusStageInitVars();
extern void sc1PBonusStageBonus1LoadFile();
extern void sc1PBonusStageMakeTargets();
extern void sc1PBonusStageUpdateTargetInterface();
extern void sc1PBonusStageUpdateTargetCount();
extern void sc1PBonusStageMakeBonus1Ground();
extern void sc1PBonusStageBonus2LoadFile();
extern s32 sc1PBonusStageGetPlatformKind(s32 line_id);
extern void sc1PBonusStageInitPlatforms(s32 line_id);
extern void sc1PBonusStageMakePlatforms();
extern void sc1PBonusStageUpdatePlatformInterface();
extern void sc1PBonusStageUpdatePlatformCount(DObj *dobj);
extern void sc1PBonusStageBonus2ProcUpdate(GObj *ground_gobj);
extern void sc1PBonusStageMakeBonus2Ground();
extern void sc1PBonusStageMakeBumpers();
extern void sc1PBonusStageInitBonus2();
extern void sc1PBonusStageInterfaceThreadUpdate(GObj *interface_gobj);
extern void sc1PBonusStageMakeInterface();
extern void sc1PBonusStageInitCamera();
extern void sc1PBonusStageMakeTargetSprites();
extern void sc1PBonusStageMakePlatformSprites();
extern void sc1PBonusStageMakeTaskSprites();
extern void sc1PBonusStageGetPlayerStartPosition(Vec3f *pos);
extern void sc1PBonusStageTimerProcUpdate(GObj *interface_gobj);
extern void sc1PBonusStageSetTimeUp();
extern void sc1PBonusStageTimeUpProcUpdate(GObj *interface_gobj);
extern void sc1PBonusStageMakeTimeUp();
extern void sc1PBonusStageMakeTimer();
extern void sc1PBonusStageSetPlayerInterfacePositions();
extern void sc1PBonusStageFuncStart();
extern void sc1PBonusStageSetBonusStats(s32 tasks_remain);
extern void sc1PBonusStageWriteBackup(sb32 is_tasks_fail, s32 fkind);
extern void sc1PBonusStageFuncLights(Gfx **dls);
extern void sc1PBonusStageStartScene();

#endif
