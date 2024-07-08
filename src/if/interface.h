#ifndef _INTERFACE_H_
#define _INTERFACE_H_

#include "iftypes.h"
#include "iffunctions.h"

// extern s32 ifPlayerDamageDigitWidths[/* */];
// extern u8 ifPlayerDamageDigitColorsR[/* */];
// extern u8 ifPlayerDamageDigitColorsG[/* */];
// extern u8 ifPlayerDamageDigitColorsB[/* */];

extern ifPlayerCommon gIFPlayerCommonInterface;

#define ifGetPlayer(interface_gobj) ((interface_gobj)->user_data.s)

#define ifSetPlayer(interface_gobj, player) ((interface_gobj)->user_data.s = player)

#define ifGetSObj(interface_gobj) ((SObj*)(interface_gobj)->user_data.p)

#define ifSetSObj(interface_gobj, sobj) ((interface_gobj)->user_data.p = (void*)(sobj))

#define ifGetProc(interface_gobj) ((void (*)())(interface_gobj)->user_data.p)

#define ifSetProc(interface_gobj, proc) ((interface_gobj)->user_data.p = (void*)(proc))

#endif
