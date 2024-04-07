#ifndef _ITRENDER_H_
#define _ITRENDER_H_

#include "ittypes.h"

// Display item hitboxes and hurtboxes
void itRenderHitCollisions(GObj* item_gobj);

// Display map collision diamond
void itRenderMapCollisions(GObj* item_gobj);

// Check whether item should be rendered
sb32 itRenderCheckItemVisible(itStruct* ip);

// Render item with opacity flag
void itRenderProcRenderOPA(GObj* item_gobj);

// Render item with transparency flag
void itRenderProcRenderXLU(GObj* item_gobj);

// Display item's ColAnim with opacity flag
void itRenderColAnimOPA(GObj* item_gobj);

// Render item with ColAnim and opacity flag
void itRenderProcRenderColAnimOPA(GObj* item_gobj);

// Display item's ColAnim with transparency flag
void itRenderColAnimXLU(GObj* item_gobj);

// Render item's ColAnim with transparency flag
void itRenderProcRenderColAnimXLU(GObj* item_gobj);

#endif