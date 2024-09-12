#ifndef _GMRUMBLE_H_
#define _GMRUMBLE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gm/gmdef.h>

extern sb32 gmRumbleUpdateEventExecute(ub8 *is_active, gmRumbleScript *p_script, s32 player);
extern sb32 gmRumbleUpdateEventQueue(ub8 *is_active, gmRumbleScript *p_script);
extern void gmRumbleAddLinkAfter(gmRumblePlayer *rplayer, gmRumbleLink *rlink);
extern sb32 gmRumbleUpdateEventCheckEnd(gmRumbleScript *p_script);
extern void gmRumbleUpdateEventLinks(gmRumblePlayer *rplayer);
extern sb32 gmRumbleGetMotorUpdateStatus(ub8 *is_active, gmRumbleScript *p_script, s32 player);
extern void gmRumbleActorProcUpdate(GObj *rumble_gobj);
extern sb32 gmRumbleCheckSetEventID(gmRumblePlayer *rplayer, s32 index, s32 rumble_timer);
extern gmRumbleScript* gmRumbleGetEventPriorityRelink(gmRumblePlayer *rplayer, s32 index);
extern void gmRumbleSetPlayerRumbleParams(s32 player, s32 index, s32 rumble_timer);
extern void func_ovl2_801155C4(s32 player);
extern void gmRumbleSetRumbleID(s32 player, s32 index);
extern void gmRumbleMakeActor(void);
extern void gmRumbleInitPlayers(void);
extern void gmRumbleResumeProcessAll(void);

#endif
