#ifndef _EFRENDER_H_
#define _EFRENDER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ef/efdef.h>

extern void efDisplayCLDFuncDisplay(GObj *effect_gobj);
extern void efDisplayXLUFuncDisplay(GObj *effect_gobj);
extern void efDisplayMakeCLD(void);
extern void efDisplayMakeXLU(void);
extern void efDisplayZPerspXLUFuncDisplay(GObj *effect_gobj);
extern void efDisplayZPerspCLDFuncDisplay(GObj *effect_gobj);
extern void efDisplayZPerspAAXLUFuncDisplay(GObj *effect_gobj);
extern void efDisplayInitAll(void);

#endif
