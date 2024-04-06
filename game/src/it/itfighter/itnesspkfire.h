#ifndef _ITNESSPKFIRE_H_
#define _ITNESSPKFIRE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itNessPKFireSDefaultProcUpdate(GObj *item_gobj);
extern sb32 itNessPKFireSDefaultUpdateAllCheckDestroy(GObj *item_gobj);
extern sb32 itNessPKFireGWaitProcUpdate(GObj *item_gobj);
extern sb32 itNessPKFireAFallProcUpdate(GObj *item_gobj);
extern sb32 itNessPKFireGWaitProcMap(GObj *item_gobj);
extern sb32 itNessPKFireAFallProcMap(GObj *item_gobj);
extern sb32 itNessPKFireSDefaultProcDamage(GObj *item_gobj);
extern void itNessPKFireGWaitSetStatus(GObj *item_gobj);
extern void itNessPKFireAFallSetStatus(GObj *item_gobj);
extern GObj* itNessPKFireMakeItem(GObj *weapon_gobj, Vec3f *pos, Vec3f *vel);

#endif
