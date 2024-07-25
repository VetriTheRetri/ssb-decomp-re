#ifndef _EFRENDER_H_
#define _EFRENDER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ef/efdef.h>

extern void efRenderProcRenderBlendCLD(GObj *effect_gobj);
extern void efRenderProcRenderXLU(GObj *effect_gobj);
extern void efRenderMakeBlendCLD(void);
extern void efRenderMakeXLU(void);
extern void efRenderProcRenderZPerspXLU(GObj *effect_gobj);
extern void efRenderProcRenderZPerspCLD(GObj *effect_gobj);
extern void efRenderProcRenderZPerspAAXLU(GObj *effect_gobj);
extern void efRenderInitAll(void);

#endif
