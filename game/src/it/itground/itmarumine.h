#ifndef _ITMARUMINE_H_
#define _ITMARUMINE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itMarumineNExplodeMakeEffectGotoSetStatus(GObj *item_gobj);
extern void itMarumineNExplodeUpdateHitEvent(GObj *item_gobj);
extern sb32 itMarumineSDefaultProcUpdate(GObj *item_gobj);
extern sb32 itMarumineNExplodeProcUpdate(GObj *item_gobj);
extern void itMarumineNExplodeSetStatus(GObj *item_gobj);
extern GObj* itMarumineMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
