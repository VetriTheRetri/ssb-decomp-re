#ifndef _GRINISHIE_H_
#define _GRINISHIE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grInishieScaleUpdateFighterStatsGA();
extern f32 grInishieScaleGetPressure(s32 line_id);
extern void grInishieScaleUpdateWait();
extern void grInishieScaleUpdateFall();
extern void grInishieScaleUpdateStep();
extern void grInishieScaleUpdateRetract();
extern void grInishieScaleProcUpdate(GObj *ground_gobj);
extern void grInishieMakeScale();
extern void grInishiePakkunSetWaitFighter();
extern void grInishieMakePakkun();
extern void grInishiePowerBlockUpdateWait();
extern void grInishiePowerBlockSetWait();
extern void grInishiePowerBlockUpdateMake();
extern void grInishiePowerBlockUpdateDamage();
extern void grInishiePowerBlockProcUpdate(GObj *ground_gobj);
extern void grInishieMakePowerBlock();
extern void grInishiePowerBlockSetDamage();
extern sb32 grInishiePowerBlockCheckGetDamageKind(GObj *item_gobj, GObj *fighter_gobj, GRAttackColl **gr_attack_coll, s32 *kind);
extern void grInishieInitHeaders();
extern GObj* grInishieMakeGround();
extern void grInishieScaleGetPlatformInfo(f32 *alt, f32 *accel);

#endif
