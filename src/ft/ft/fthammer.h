#ifndef _FTHAMMER_H_
#define _FTHAMMER_H_

#include "ftdef.h"
#include <ssb_types.h>
#include <sys/objdef.h>

void ftHammer_UpdateStats(GObj* fighter_gobj);
sb32 ftHammer_CheckItemHold(GObj* fighter_gobj);
sb32 ftHammer_CheckStatusHammerAll(GObj* fighter_gobj);
sb32 ftHammer_CheckMotionWaitOrWalk(GObj* fighter_gobj);
f32 ftHammer_GetAnimFrame(GObj* fighter_gobj);
u32 ftHammer_GetStatUpdateFlags(GObj* fighter_gobj);
void ftHammer_CheckSetColAnim(GObj* fighter_gobj);
void ftHammer_ProcInterrupt(GObj* fighter_gobj);
void ftHammer_ProcMap(GObj* fighter_gobj);
void ftHammer_SetStatusHammerWait(GObj* fighter_gobj);
sb32 ftHammer_CheckGotoHammerWait(GObj* fighter_gobj);

#endif