#ifndef _RUMBLE_H_
#define _RUMBLE_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>

#include "gmscript.h"

// The global rumble access struct is effectively a 2D array, but HAL decided
// to make it a 1D array so we must parkour around it. The layout would be
// rumble[GMMATCH_PLAYERS_MAX][GRUMBLE_PLAYER_ARRAY3]; instead, it's
// rumble[GMMATCH_PLAYERS_MAX * GMRUMBLE_ARRAY_COLS]
#define GMRUMBLE_ARRAY_COLS 3

typedef struct gmRumbleLink gmRumbleLink;

struct gmRumbleLink
{
	gmRumbleEvent* p_event;
	gmRumbleLink* rnext;
	gmRumbleLink* rprev;
	gmRumbleLink* unk_grumble_0xC;
	gmRumbleLink* unk_grumble_0x10;
};

typedef struct gmRumblePlayer
{
	u8 is_active;
	gmRumbleLink* rlink;

} gmRumblePlayer;

#endif