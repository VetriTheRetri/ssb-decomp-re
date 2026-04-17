#ifndef _GRZEBES_H_
#define _GRZEBES_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grZebesAcidSetLevelStep();
extern void grZebesAcidSetRandomWait();
extern GObj* grZebesMakeAcid();
extern void grZebesAcidUpdateWait();
extern void grZebesAcidUpdateRumble();
extern void grZebesAcidUpdateNormal();
extern void grZebesAcidUpdateShake();
extern void grZebesAcidUpdateRise();
extern void grZebesProcUpdate(GObj *ground_gobj);
extern GObj* grZebesMakeGround();
extern sb32 grZebesAcidCheckGetDamageKind(GObj *ground_gobj, GObj *fighter_gobj, GRAttackColl **gr_attack_coll, s32 *kind);
extern void grZebesAcidGetLevelInfo(f32 *current, f32 *step);

#endif
