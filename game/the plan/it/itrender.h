#ifndef _ITRENDER_H_
#define _ITRENDER_H_

#include "ittypes.h"

// Display item hitboxes and hurtboxes
void		itRender_DisplayHitCollisions		(GObj *item_gobj);


// Display map collision diamond
void		itRender_DisplayMapCollisions		(GObj *item_gobj);


// Check whether item should be rendered
bool32		itRender_CheckItemVisible			(itStruct *ip);


// Render item with opacity flag
void		itRender_ProcRenderOPA				(GObj *item_gobj);


// Render item with transparency flag
void		itRender_ProcRenderXLU				(GObj *item_gobj);


// Display item's ColAnim with opacity flag
void		itRender_DisplayColAnimOPA			(GObj *item_gobj);


// Render item with ColAnim and opacity flag
void		itRender_ProcRenderColAnimOPA		(GObj *item_gobj);


// Display item's ColAnim with transparency flag
void		itRender_DisplayColAnimXLU			(GObj *item_gobj);


// Render item's ColAnim with transparency flag
void		itRender_ProcRenderColAnimXLU		(GObj *item_gobj);

#endif