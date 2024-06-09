#ifndef _FTPURIN_FUNCTIONS_H_
#define _FTPURIN_FUNCTIONS_H_

#include <ssb_types.h>
#include <ft/ftdef.h>
#include <sys/objdef.h>

// SpecialN / SpecialAirN
void ftPurinSpecialNInitStatusVars(GObj* fighter_gobj);
f32 ftPurinSpecialNGetAngle(s32 stick_y);
void ftPurinSpecialAirNProcPhysics(GObj* fighter_gobj);
void ftPurinSpecialNProcMap(GObj* fighter_gobj);
void ftPurinSpecialAirNProcMap(GObj* fighter_gobj);
void ftPurinSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftPurinSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftPurin_SpecialN_SetStatus(GObj* fighter_gobj);
void ftPurin_SpecialAirN_SetStatus(GObj* fighter_gobj);

// SpecialHi / SpecialAirHi
void ftPurinSpecialHiProcUpdate(GObj* fighter_gobj);
void ftPurinSpecialAirHiProcMap(GObj* fighter_gobj);
void ftPurinSpecialHiProcMap(GObj* fighter_gobj);
void ftPurinSpecialAirHiSwitchStatusGround(GObj* fighter_gobj);
void ftPurinSpecialHiSwitchStatusAir(GObj* fighter_gobj);
void ftPurin_SpecialHi_SetStatus(GObj* fighter_gobj);
void ftPurin_SpecialAirHi_SetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftPurinSpecialLwProcMap(GObj* fighter_gobj);
void ftPurinSpecialAirLwProcMap(GObj* fighter_gobj);
void ftPurinSpecialAirLwSwitchStatusGround(GObj* fighter_gobj);
void ftPurinSpecialLwSwitchStatusAir(GObj* fighter_gobj);
void ftPurin_SpecialLw_SetStatus(GObj* fighter_gobj);
void ftPurin_SpecialAirLw_SetStatus(GObj* fighter_gobj);

#endif
