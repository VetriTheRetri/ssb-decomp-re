#ifndef _ITMBALL_H_
#define _ITMBALL_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itMBallGOpenAddAnim(GObj *item_gobj);
extern void itMBallGOpenClearAnim(GObj *item_gobj);
extern sb32 itMBallFallProcUpdate(GObj *item_gobj);
extern sb32 itMBallWaitProcMap(GObj *item_gobj);
extern sb32 itMBallFallProcMap(GObj *item_gobj);
extern void itMBallWaitSetStatus(GObj *item_gobj);
extern void itMBallFallSetStatus(GObj *item_gobj);
extern void itMBallHoldSetStatus(GObj *item_gobj);
extern sb32 itMBallThrownProcUpdate(GObj *item_gobj);
extern sb32 itMBallThrownProcMap(GObj *item_gobj);
extern sb32 itMBallCommonProcHit(GObj *item_gobj);
extern sb32 itMBallCommonProcReflector(GObj *item_gobj);
extern void itMBallThrownSetStatus(GObj *item_gobj);
extern void itMBallDroppedSetStatus(GObj *item_gobj);
extern sb32 itMBallGOpenProcUpdate(GObj *m_ball_gobj);
extern sb32 itMBallGOpenProcMap(GObj *item_gobj);
extern void itMBallGOpenInitItemVars(GObj *item_gobj);
extern void itMBallGOpenSetStatus(GObj *item_gobj);
extern sb32 itMBallAOpenProcUpdate(GObj *m_ball_gobj);
extern sb32 itMBallAOpenProcMap(GObj *item_gobj);
extern void itMBallAOpenSetStatus(GObj *item_gobj);
extern GObj* itMBallMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
