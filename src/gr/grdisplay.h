#ifndef _GRGEOMETRY_H_
#define _GRGEOMETRY_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grDisplayLayer0PriFuncDisplay(GObj *ground_gobj);
extern void grDisplayLayer0SecFuncDisplay(GObj *ground_gobj);
extern void grDisplayLayer1PriFuncDisplay(GObj *ground_gobj);
extern void grDisplayLayer1SecFuncDisplay(GObj *ground_gobj);
extern void grDisplayLayer2PriFuncDisplay(GObj *ground_gobj);
extern void grDisplayLayer2SecFuncDisplay(GObj *ground_gobj);
extern void grDisplayLayer3PriFuncDisplay(GObj *ground_gobj);
extern void grDisplayLayer3SecFuncDisplay(GObj *ground_gobj);
extern void grDisplayDObjSetNoAnimMtx(GObj *ground_gobj, DObjDesc *dobjdesc);

#endif
