#ifndef _RUMBLE_H_
#define _RUMBLE_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>

#include "gmscript.h"

typedef struct gmRumbleGlobal gmRumbleGlobal;

struct gmRumbleGlobal
{
    gmRumbleEvent *p_event;
    gmRumbleGlobal *grumble_next;
    gmRumbleGlobal *grumble_prev;
    gmRumbleGlobal *unk_grumble_0xC;
    gmRumbleGlobal *unk_grumble_0x10;
};

typedef struct gmRumblePlayer
{
    u8 is_active;
    gmRumbleGlobal *unk_prumble_0x4;

} gmRumblePlayer;

#endif