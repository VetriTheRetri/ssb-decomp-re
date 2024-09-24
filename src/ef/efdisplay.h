#ifndef _EFRENDER_H_
#define _EFRENDER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ef/efdef.h>

extern void efDisplayProcDisplayBlendCLD(GObj *effect_gobj);
extern void efDisplayProcDisplayXLU(GObj *effect_gobj);
extern void efDisplayMakeBlendCLD(void);
extern void efDisplayMakeXLU(void);
extern void efDisplayProcDisplayZPerspXLU(GObj *effect_gobj);
extern void efDisplayProcDisplayZPerspCLD(GObj *effect_gobj);
extern void efDisplayProcDisplayZPerspAAXLU(GObj *effect_gobj);
extern void efDisplayInitAll(void);

#endif
