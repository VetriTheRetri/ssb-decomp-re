#ifndef _WPRENDER_H_
#define _WPRENDER_H_

#include "wptypes.h"

// Display weapon hitboxes
void		wpRenderHitCollisions		(GObj *weapon_gobj);


// Display map collision diamond
void		wpRenderMapCollisions		(GObj *weapon_gobj);


// Unknown
void		wpRenderDrawNormal					(void);


// Unknown
void		wpRenderDrawZBuffer				(void);


// Unknown
void		wpRenderMain					(GObj *weapon_gobj, void(*proc_render)(GObj*));


// Unknown
void		wpRenderDLHead1					(GObj *weapon_gobj);


// Unknown
void		wpRenderDObjDLLinks					(GObj *weapon_gobj);


// Unknown
void		func_ovl3_80167618					(GObj *weapon_gobj);


// Unknown
void		wpRenderDObjTreeDLLinks					(GObj *weapon_gobj);


// Render PK Thunder specifically because life is short
void		wpRenderPKThunder			(GObj *weapon_gobj);

#endif