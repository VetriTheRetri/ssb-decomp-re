#ifndef _SC1PGAMEBOSS_H_
#define _SC1PGAMEBOSS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <sc/scdef.h>

extern intptr_t D_NF_00004D48;

extern intptr_t lSC1PGameBossEffects0MObjSub;               // 0x000086D8
extern intptr_t lSC1PGameBossEffects0DObjDesc;              // 0x00008960
extern intptr_t lSC1PGameBossAnims0AnimJoint;               // 0x00008A40
extern intptr_t lSC1PGameBossAnims0MatAnimJoint;            // 0x00008C50

extern intptr_t lSC1PGameBossEffects1MObjSub;               // 0x000097B0
extern intptr_t lSC1PGameBossEffects1DObjDesc;              // 0x0000A188
extern intptr_t lSC1PGameBossAnims1AnimJoint;               // 0x0000A340
extern intptr_t lSC1PGameBossAnims1MatAnimJoint;            // 0x0000B1B0

extern intptr_t lSC1PGameBossEffects2MObjSub0;              // 0x0000D470
extern intptr_t lSC1PGameBossEffects2DObjDesc0;             // 0x0000DD90
extern intptr_t lSC1PGameBossEffects2MObjSub1;              // 0x00010788
extern intptr_t lSC1PGameBossEffects2DObjDesc1;             // 0x00011268

extern intptr_t lSC1PGameBossAnims2AnimJoint0;              // 0x0000DE70
extern intptr_t lSC1PGameBossAnims2MatAnimJoint0;           // 0x0000DEC0
extern intptr_t lSC1PGameBossAnims2MatAnimJoint1;           // 0x00011420

extern intptr_t lSC1PGameBossEffects3MObjSub0;              // 0x00010788
extern intptr_t lSC1PGameBossEffects3DObjDesc0;             // 0x00011268
extern intptr_t lSC1PGameBossEffects3DObjDesc1;             // 0x00012858

extern intptr_t lSC1PGameBossAnims3MatAnimJoint0;           // 0x000115C0
extern intptr_t lSC1PGameBossAnims3AnimJoint1;              // 0x000128E0

extern void func_ovl65_801910B0(void);
extern void sc1PGameBossSetChangeWallpaper(void);
extern void sc1PGameBossMakeCamera(void);
extern void SC1PGameBossWallpaper0FuncDisplay(GObj *gobj);
extern void SC1PGameBossWallpaper1FuncDisplay(GObj *gobj);
extern void SC1PGameBossWallpaper2FuncDisplay(GObj *gobj);
extern void SC1PGameBossWallpaper3FuncDisplay0(GObj *gobj);
extern void sc1PGameBossFuncDisplayFadeAlpha(GObj *gobj);
extern void sc1PGameBossFuncDisplayFadeColor(GObj *gobj);
extern void sc1PGameBossUpdateWallpaperColorID(void);
extern void SC1PGameBossWallpaper3ProcUpdate0(GObj *gobj);
extern void func_ovl65_80191B44(GObj *gobj);
extern void SC1PGameBossWallpaper0ProcUpdate(GObj *gobj);
extern void SC1PGameBossWallpaper1ProcUpdate(GObj *gobj);
extern void SC1PGameBossWallpaper2ProcUpdate0(GObj *gobj);
extern void SC1PGameBossWallpaper2ProcUpdate1(GObj *gobj);
extern void SC1PGameBossWallpaper3ProcUpdate1(GObj *gobj);
extern void sc1PGameBossSetupBackgroundDObjs(GObj *gobj, DObjDesc *dobjdesc, MObjSub ***p_mobjsubs, u8 transform_kind);
extern void sc1PGameBossSetWallpaperTranslate(GObj *gobj, s32 plan_id);
extern GObj* sc1PGameBossMakeWallpaperEffect(s32 effect_id, s32 anim_id, s32 plan_id);
extern void sc1PGameBossAdvanceWallpaper(void);
extern void SC1PGameBossWallpaperProcUpdate(GObj *gobj);
extern void sc1PGameBossSetBossPlayer(void);

#endif
