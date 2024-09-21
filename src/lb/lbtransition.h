#ifndef _LBTRANSITION_H_
#define _LBTRANSITION_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <lb/lbdef.h>

extern GObj* lbTransitionMakeCamera(u32 id, s32 link, u32 link_order, u64 cam_mask);
extern void lbTransitionProcDraw(GObj *gobj);
extern void lbTransitionProcUpdate(GObj *gobj);
extern GObj* lbTransitionMakeTransition(s32 transition_id, u32 id, s32 link, void (*proc_draw)(GObj*), u8 dl_link_id, void (*proc_common)(GObj*));
extern void lbTransitionSetupTransition(void);

#endif
