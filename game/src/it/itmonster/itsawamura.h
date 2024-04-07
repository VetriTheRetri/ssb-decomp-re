#ifndef _ITSAWAMURA_H_
#define _ITSAWAMURA_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itSawamuraAFallProcUpdate(GObj *item_gobj);
extern sb32 itSawamuraAFallProcMap(GObj *item_gobj);
extern void itSawamuraAFallSetStatus(GObj *item_gobj);
extern sb32 itSawamuraGWaitProcUpdate(GObj *item_gobj);
extern sb32 itSawamuraGWaitProcMap(GObj *item_gobj);
extern void itSawamuraGWaitSetStatus(GObj *item_gobj);
extern sb32 itSawamuraNAttackProcUpdate(GObj *item_gobj);
extern void itSawamuraNAttackSetFollowPlayerLR(GObj *item_gobj, GObj *fighter_gobj);
extern void itSawamuraNAttackInitItemVars(GObj *item_gobj);
extern void itSawamuraNAttackSetStatus(GObj *item_gobj);
extern sb32 itSawamuraSDefaultProcUpdate(GObj *item_gobj);
extern sb32 itSawamuraSDefaultProcMap(GObj *item_gobj);
extern GObj* itSawamuraMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
