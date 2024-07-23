#ifndef _GRGEOMETRY_H_
#define _GRGEOMETRY_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grGeometryLayer0ProcRenderPri(GObj *ground_gobj);
extern void grGeometryLayer0ProcRenderSec(GObj *ground_gobj);
extern void grGeometryLayer1ProcRenderPri(GObj *ground_gobj);
extern void grGeometryLayer1ProcRenderSec(GObj *ground_gobj);
extern void grGeometryLayer2ProcRenderPri(GObj *ground_gobj);
extern void grGeometryLayer2ProcRenderSec(GObj *ground_gobj);
extern void grGeometryLayer3ProcRenderPri(GObj *ground_gobj);
extern void grGeometryLayer3ProcRenderSec(GObj *ground_gobj);
extern void grGeometryDObjSetNoAnimMtx(GObj *ground_gobj, DObjDesc *dobj_desc);

#endif
