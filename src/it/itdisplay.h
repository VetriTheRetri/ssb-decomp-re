#ifndef _ITRENDER_H_
#define _ITRENDER_H_

#include "ittypes.h"

// Display item hitboxes and hurtboxes
void itDisplayHitCollisions(GObj* item_gobj);

// Display map collision diamond
void itDisplayMapCollisions(GObj* item_gobj);

// Check whether item should be rendered
sb32 itDisplayCheckItemVisible(itStruct* ip);

// Render item with opacity flag
void itDisplayProcDrawOPA(GObj* item_gobj);

// Render item with transparency flag
void itDisplayProcDrawXLU(GObj* item_gobj);

// Display item's ColAnim with opacity flag
void itDisplayColAnimOPA(GObj* item_gobj);

// Render item with ColAnim and opacity flag
void itDisplayProcDrawColAnimOPA(GObj* item_gobj);

// Display item's ColAnim with transparency flag
void itDisplayColAnimXLU(GObj* item_gobj);

// Render item's ColAnim with transparency flag
void itDisplayProcDrawColAnimXLU(GObj* item_gobj);

#endif
