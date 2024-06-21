#ifndef _FTANIMGOTO_H_
#define _FTANIMGOTO_H_

#include "ftdef.h"
#include <sys/obj.h>

sb32 ftStatusSetOnAnimEnd(GObj* fighter_gobj, void (*proc_status)(GObj*));
void ftStatusWaitOnAnimEnd(GObj* fighter_gobj);
void ftStatusFallOnAnimEnd(GObj* fighter_gobj);

#endif
