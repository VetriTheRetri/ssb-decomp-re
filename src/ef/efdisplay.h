#ifndef _EFRENDER_H_
#define _EFRENDER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ef/efdef.h>

extern void efDisplayFuncDisplayBlendCLD(GObj *effect_gobj);
extern void efDisplayFuncDisplayXLU(GObj *effect_gobj);
extern void efDisplayMakeBlendCLD(void);
extern void efDisplayMakeXLU(void);
extern void efDisplayFuncDisplayZPerspXLU(GObj *effect_gobj);
extern void efDisplayFuncDisplayZPerspCLD(GObj *effect_gobj);
extern void efDisplayFuncDisplayZPerspAAXLU(GObj *effect_gobj);
extern void efDisplayInitAll(void);

#endif
