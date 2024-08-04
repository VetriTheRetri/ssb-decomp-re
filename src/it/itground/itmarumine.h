#ifndef _ITMARUMINE_H_
#define _ITMARUMINE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itMarumineExplodeNMakeEffectGotoSetStatus(GObj *item_gobj);
extern void itMarumineExplodeNUpdateHitEvent(GObj *item_gobj);
extern sb32 itMarumineCommonProcUpdate(GObj *item_gobj);
extern sb32 itMarumineExplodeNProcUpdate(GObj *item_gobj);
extern void itMarumineExplodeNSetStatus(GObj *item_gobj);
extern GObj* itMarumineMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
