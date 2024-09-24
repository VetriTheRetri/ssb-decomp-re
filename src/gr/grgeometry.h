#ifndef _GRGEOMETRY_H_
#define _GRGEOMETRY_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grGeometryLayer0ProcDisplayPri(GObj *ground_gobj);
extern void grGeometryLayer0ProcDisplaySec(GObj *ground_gobj);
extern void grGeometryLayer1ProcDisplayPri(GObj *ground_gobj);
extern void grGeometryLayer1ProcDisplaySec(GObj *ground_gobj);
extern void grGeometryLayer2ProcDisplayPri(GObj *ground_gobj);
extern void grGeometryLayer2ProcDisplaySec(GObj *ground_gobj);
extern void grGeometryLayer3ProcDisplayPri(GObj *ground_gobj);
extern void grGeometryLayer3ProcDisplaySec(GObj *ground_gobj);
extern void grGeometryDObjSetNoAnimMtx(GObj *ground_gobj, DObjDesc *dobj_desc);

#endif
