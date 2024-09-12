#ifndef _EFRENDER_H_
#define _EFRENDER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ef/efdef.h>

extern void efDisplayProcDrawBlendCLD(GObj *effect_gobj);
extern void efDisplayProcDrawXLU(GObj *effect_gobj);
extern void efDisplayMakeBlendCLD(void);
extern void efDisplayMakeXLU(void);
extern void efDisplayProcDrawZPerspXLU(GObj *effect_gobj);
extern void efDisplayProcDrawZPerspCLD(GObj *effect_gobj);
extern void efDisplayProcDrawZPerspAAXLU(GObj *effect_gobj);
extern void efDisplayInitAll(void);

#endif
