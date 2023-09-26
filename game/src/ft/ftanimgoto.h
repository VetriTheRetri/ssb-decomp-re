#ifndef _FTANIMGOTO_H_
#define _FTANIMGOTO_H_

#include "ftdef.h"
#include <sys/obj.h>

bool32 ftAnim_IfAnimEnd_ProcStatus(GObj *fighter_gobj, void (*proc_status)(GObj*));
void ftCommon_IfAnimEnd_SetStatusWait(GObj *fighter_gobj);
void ftCommon_IfAnimEnd_SetStatusFall(GObj *fighter_gobj);

#endif