#ifndef _INTERFACE_H_
#define _INTERFACE_H_

#include "iftypes.h"

#define ifGetPlayer(interface_gobj) \
((s32)(interface_gobj)->user_data)  \

#define ifSetPlayer(interface_gobj, player)     \
((interface_gobj)->user_data = (void*)(player)) \

#define ifGetSObj(interface_gobj)    \
((SObj*)(interface_gobj)->user_data) \

#define ifSetSObj(interface_gobj, sobj)       \
((interface_gobj)->user_data = (SObj*)(sobj)) \

#define ifGetProc(interface_gobj)			   \
((void (*)(void)) (interface_gobj)->user_data) \

#define ifSetProc(interface_gobj, proc)					\
((interface_gobj)->user_data = (void (*)(void)) (proc)) \

#endif