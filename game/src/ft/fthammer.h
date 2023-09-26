#ifndef _FTHAMMER_H_
#define _FTHAMMER_H_

#include "ftdef.h"
#include <ssb_types.h>
#include <sys/objdef.h>

void ftCommon_HammerUpdateStats(GObj *fighter_gobj);
bool32 ftCommon_HammerCheckHold(GObj *fighter_gobj);
bool32 ftCommon_HammerCheckStatusID(GObj *fighter_gobj);
bool32 ftCommon_HammerCheckScriptID(GObj *fighter_gobj);
f32 ftCommon_HammerGetAnimFrame(GObj *fighter_gobj);
u32 ftCommon_HammerGetStatUpdateFlags(GObj *fighter_gobj);
void ftCommon_HammerCheckSetColAnim(GObj *fighter_gobj);
void ftCommon_HammerProcInterrupt(GObj *fighter_gobj);
void ftCommon_HammerCommon_ProcMap(GObj *fighter_gobj);
void ftCommon_HammerWait_SetStatus(GObj *fighter_gobj);
bool32 ftCommon_HammerWaitCheckSetStatus(GObj *fighter_gobj);

#endif