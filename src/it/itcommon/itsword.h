#ifndef _ITSWORD_H_
#define _ITSWORD_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itSwordAFallProcUpdate(GObj *item_gobj);
extern sb32 itSwordGWaitProcMap(GObj *item_gobj);
extern sb32 itSwordAFallProcMap(GObj *item_gobj);
extern void itSwordGWaitSetStatus(GObj *item_gobj);
extern void itSwordAFallSetStatus(GObj *item_gobj);
extern void itSwordFHoldSetStatus(GObj *item_gobj);
extern sb32 itSwordFThrowProcMap(GObj *item_gobj);
extern sb32 itSwordFThrowProcHit(GObj *item_gobj);
extern void itSwordFThrowSetStatus(GObj *item_gobj);
extern sb32 itSwordFDropProcMap(GObj *item_gobj);
extern void itSwordFDropSetStatus(GObj *item_gobj);
extern GObj* itSwordMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
