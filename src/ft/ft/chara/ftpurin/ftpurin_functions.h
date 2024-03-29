#ifndef _FTPURIN_FUNCTIONS_H_
#define _FTPURIN_FUNCTIONS_H_

#include <ssb_types.h>
#include <ft/ftdef.h>
#include <sys/objdef.h>

// SpecialN / SpecialAirN
void ftPurin_SpecialN_InitStatusVars(GObj* fighter_gobj);
f32 ftPurin_SpecialN_GetAngle(s32 stick_y);
void ftPurin_SpecialAirN_ProcPhysics(GObj* fighter_gobj);
void ftPurin_SpecialN_ProcMap(GObj* fighter_gobj);
void ftPurin_SpecialAirN_ProcMap(GObj* fighter_gobj);
void ftPurin_SpecialAirN_SwitchStatusGround(GObj* fighter_gobj);
void ftPurin_SpecialN_SwitchStatusAir(GObj* fighter_gobj);
void ftPurin_SpecialN_SetStatus(GObj* fighter_gobj);
void ftPurin_SpecialAirN_SetStatus(GObj* fighter_gobj);

// SpecialHi / SpecialAirHi
void ftPurin_SpecialHi_ProcUpdate(GObj* fighter_gobj);
void ftPurin_SpecialAirHi_ProcMap(GObj* fighter_gobj);
void ftPurin_SpecialHi_ProcMap(GObj* fighter_gobj);
void ftPurin_SpecialAirHi_SwitchStatusGround(GObj* fighter_gobj);
void ftPurin_SpecialHi_SwitchStatusAir(GObj* fighter_gobj);
void ftPurin_SpecialHi_SetStatus(GObj* fighter_gobj);
void ftPurin_SpecialAirHi_SetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftPurin_SpecialLw_ProcMap(GObj* fighter_gobj);
void ftPurin_SpecialAirLw_ProcMap(GObj* fighter_gobj);
void ftPurin_SpecialAirLw_SwitchStatusGround(GObj* fighter_gobj);
void ftPurin_SpecialLw_SwitchStatusAir(GObj* fighter_gobj);
void ftPurin_SpecialLw_SetStatus(GObj* fighter_gobj);
void ftPurin_SpecialAirLw_SetStatus(GObj* fighter_gobj);

#endif