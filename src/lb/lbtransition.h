#ifndef _LBTRANSITION_H_
#define _LBTRANSITION_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <lb/lbdef.h>

extern void lbTransitionProcUpdate(GObj *gobj);
extern void lbTransitionProcDraw(GObj *gobj);
extern void lbTransitionMakeActor(u32 id, s32 link, u32 link_order, syColorRGBA *color, s32 fade_length, sb32 is_eject_gobj, sb32 *is_proceed_scene);

#endif
