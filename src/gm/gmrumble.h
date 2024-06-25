#ifndef _GMRUMBLE_H_
#define _GMRUMBLE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gm/gmscript.h>

extern sb32 gmRumbleUpdateEventExecute(ub8 *is_active, gmRumbleEvent *p_event, s32 player);
extern sb32 gmRumbleUpdateEventQueue(ub8 *is_active, gmRumbleEvent *p_event);
extern void gmRumbleAddLinkAfter(gmRumblePlayer *rplayer, gmRumbleLink *rlink);
extern sb32 gmRumbleUpdateEventCheckEnd(gmRumbleEvent *p_event);
extern void gmRumbleUpdateEventLinks(gmRumblePlayer *rplayer);
extern sb32 gmRumbleGetMotorUpdateStatus(ub8 *is_active, gmRumbleEvent *p_event, s32 player);
extern void gmRumbleActorProcUpdate(GObj *rumble_gobj);
extern sb32 gmRumbleCheckSetEventID(gmRumblePlayer *rplayer, s32 index, s32 rumble_timer);
extern gmRumbleEvent* gmRumbleGetEventPriorityRelink(gmRumblePlayer *rplayer, s32 index);
extern void gmRumbleSetPlayerRumbleParams(s32 player, s32 index, s32 rumble_timer);
extern void func_ovl2_801155C4(s32 player);
extern void gmRumbleSetRumbleID(s32 player, s32 index);
extern void gmRumbleMakeActor(void);
extern void gmRumbleInitPlayers(void);
extern void func_ovl2_80115834(void);

#endif
