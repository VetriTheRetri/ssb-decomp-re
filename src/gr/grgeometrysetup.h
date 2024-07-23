#ifndef _GRGEOMETRY_H_
#define _GRGEOMETRY_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grGeometrySetupLayer0ProcRenderPri(GObj *ground_gobj);
extern void grGeometrySetupLayer0ProcRenderSec(GObj *ground_gobj);
extern void grGeometrySetupLayer1ProcRenderPri(GObj *ground_gobj);
extern void grGeometrySetupLayer1ProcRenderSec(GObj *ground_gobj);
extern void grGeometrySetupLayer2ProcRenderPri(GObj *ground_gobj);
extern void grGeometrySetupLayer2ProcRenderSec(GObj *ground_gobj);
extern void grGeometrySetupLayer3ProcRenderPri(GObj *ground_gobj);
extern void grGeometrySetupLayer3ProcRenderSec(GObj *ground_gobj);
extern void grGeometrySetupDObjSetNoAnimMtx(GObj *ground_gobj, DObjDesc *dobj_desc);

#endif
