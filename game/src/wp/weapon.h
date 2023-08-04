#ifndef _WEAPON_H_
#define _WEAPON_H_

#include "wptypes.h"
#include "wpfunctions.h"

#define wpGetStruct(weapon_gobj) \
((wpStruct*) (weapon_gobj)->user_data) \

#endif