#ifndef _WPRENDER_H_
#define _WPRENDER_H_

#include "wptypes.h"

// Display weapon hitboxes
void wpRenderHitCollisions(GObj* weapon_gobj);

// Display map collision diamond
void wpRenderMapCollisions(GObj* weapon_gobj);

// Unknown
void wpRenderDrawNormal();

// Unknown
void wpRenderDrawZBuffer();

// Unknown
void wpRenderMain(GObj* weapon_gobj, void (*proc_render)(GObj*));

// Unknown
void func_ovl3_801675D0(GObj* weapon_gobj);

// Unknown
void func_ovl3_801675F4(GObj* weapon_gobj);

// Unknown
void func_ovl3_80167618(GObj* weapon_gobj);

// Unknown
void func_ovl3_8016763C(GObj* weapon_gobj);

// Render PK Thunder specifically because life is short
void wpRenderPKThunder(GObj* weapon_gobj);

#endif
