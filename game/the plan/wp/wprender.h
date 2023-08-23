#ifndef _WPRENDER_H_
#define _WPRENDER_H_

#include "wptypes.h"

// Display weapon hitboxes
void		wpRender_DisplayHitCollisions		(GObj *weapon_gobj);


// Display map collision diamond
void		wpRender_DisplayMapCollisions		(GObj *weapon_gobj);


// Unknown
void		wpRender_DrawMaster					(void);


// Unknown
void		wpRender_DrawZBuffer				(void);


// Unknown
void		func_ovl3_80167520					(GObj *weapon_gobj, void(*proc_render)(GObj*));


// Unknown
void		func_ovl3_801675D0					(GObj *weapon_gobj);


// Unknown
void		func_ovl3_801675F4					(GObj *weapon_gobj);


// Unknown
void		func_ovl3_80167618					(GObj *weapon_gobj);


// Unknown
void		func_ovl3_8016763C					(GObj *weapon_gobj);


// Render PK Thunder specifically because life is short
void		wpRender_DisplayPKThunder			(GObj *weapon_gobj);

#endif