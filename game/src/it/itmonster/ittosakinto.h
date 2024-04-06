#ifndef _ITTOSAKINTO_H_
#define _ITTOSAKINTO_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itTosakintoNAppearProcUpdate(GObj *item_gobj);
extern sb32 itTosakintoNAppearProcMap(GObj *item_gobj);
extern void itTosakintoNAppearSetStatus(GObj *item_gobj);
extern sb32 itTosakintoNSplashProcUpdate(GObj *item_gobj);
extern sb32 itTosakintoNSplashProcMap(GObj *item_gobj);
extern void itTosakintoNSplashInitItemVars(GObj *item_gobj);
extern void itTosakintoNSplashSetStatus(GObj *item_gobj);
extern sb32 itTosakintoSDefaultProcUpdate(GObj *item_gobj);
extern sb32 itTosakintoSDefaultProcMap(GObj *item_gobj);
extern GObj* itTosakintoMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
