#ifndef _OBJFUNCTIONS_H_
#define _OBJFUNCTIONS_H_

#include "objdef.h"
#include "ssb_types.h"

GObjProcess* omAddGObjCommonProc(GObj *gobj, void (*proc)(GObj*), u8 kind, u32 pri);
GObj* omMakeGObjCommon(u32 id, void (*proc_eject)(GObj*), u8 link, u32 order);

#endif