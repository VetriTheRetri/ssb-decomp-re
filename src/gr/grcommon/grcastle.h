#ifndef _GRCASTLE_H_
#define _GRCASTLE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern intptr_t lGRCastleMapHead;               // 0x00000000

extern void grCastleBumperProcUpdate(GObj *ground_gobj);
extern void grCastleInitAll(void);
extern GObj* grCastleMakeGround(void);

#endif
