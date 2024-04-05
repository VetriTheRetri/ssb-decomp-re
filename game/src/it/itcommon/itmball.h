#ifndef _ITMBALL_H_
#define _ITMBALL_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itMBallGOpenAddAnim(GObj *item_gobj);
extern void itMBallGOpenClearAnim(GObj *item_gobj);
extern sb32 itMBallAFallProcUpdate(GObj *item_gobj);
extern sb32 itMBallGWaitProcMap(GObj *item_gobj);
extern sb32 itMBallAFallProcMap(GObj *item_gobj);
extern void itMBallGWaitSetStatus(GObj *item_gobj);
extern void itMBallAFallSetStatus(GObj *item_gobj);
extern void itMBallFHoldSetStatus(GObj *item_gobj);
extern sb32 itMBallFThrowProcUpdate(GObj *item_gobj);
extern sb32 itMBallFThrowProcMap(GObj *item_gobj);
extern sb32 itMBallSDefaultProcHit(GObj *item_gobj);
extern sb32 itMBallSDefaultProcReflector(GObj *item_gobj);
extern void itMBallFThrowSetStatus(GObj *item_gobj);
extern void itMBallFDropSetStatus(GObj *item_gobj);
extern sb32 itMBallGOpenProcUpdate(GObj *m_ball_gobj);
extern sb32 itMBallGOpenProcMap(GObj *item_gobj);
extern void itMBallGOpenInitItemVars(GObj *item_gobj);
extern void itMBallGOpenSetStatus(GObj *item_gobj);
extern sb32 itMBallAOpenProcUpdate(GObj *m_ball_gobj);
extern sb32 itMBallAOpenProcMap(GObj *item_gobj);
extern GObj* itMBallMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
