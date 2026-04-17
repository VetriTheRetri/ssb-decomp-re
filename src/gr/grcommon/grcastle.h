#ifndef _GRCASTLE_H_
#define _GRCASTLE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grCastleBumperProcUpdate(GObj *ground_gobj);
extern void grCastleInitAll();
extern GObj* grCastleMakeGround();

#endif
