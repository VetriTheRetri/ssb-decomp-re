#ifndef _GRGEOMETRY_H_
#define _GRGEOMETRY_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grGeometryLayer0ProcDrawPri(GObj *ground_gobj);
extern void grGeometryLayer0ProcDrawSec(GObj *ground_gobj);
extern void grGeometryLayer1ProcDrawPri(GObj *ground_gobj);
extern void grGeometryLayer1ProcDrawSec(GObj *ground_gobj);
extern void grGeometryLayer2ProcDrawPri(GObj *ground_gobj);
extern void grGeometryLayer2ProcDrawSec(GObj *ground_gobj);
extern void grGeometryLayer3ProcDrawPri(GObj *ground_gobj);
extern void grGeometryLayer3ProcDrawSec(GObj *ground_gobj);
extern void grGeometryDObjSetNoAnimMtx(GObj *ground_gobj, DObjDesc *dobj_desc);

#endif
