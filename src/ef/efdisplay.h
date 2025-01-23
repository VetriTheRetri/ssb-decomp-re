#ifndef _EFRENDER_H_
#define _EFRENDER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ef/efdef.h>

extern void efDisplayCLDProcDisplay(GObj *effect_gobj);
extern void efDisplayXLUProcDisplay(GObj *effect_gobj);
extern void efDisplayMakeCLD(void);
extern void efDisplayMakeXLU(void);
extern void efDisplayZPerspXLUProcDisplay(GObj *effect_gobj);
extern void efDisplayZPerspCLDProcDisplay(GObj *effect_gobj);
extern void efDisplayZPerspAAXLUProcDisplay(GObj *effect_gobj);
extern void efDisplayInitAll(void);

#endif
