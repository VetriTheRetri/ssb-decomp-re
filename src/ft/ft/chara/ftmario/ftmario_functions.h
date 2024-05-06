#ifndef _FTMARIO_FUNCTIONS_H_
#define _FTMARIO_FUNCTIONS_H_

#include <ft/ftdef.h>
#include <ssb_types.h>
#include <sys/objdef.h>

// SpecialN / SpecialAirN
void ftMario_SpecialN_ProcUpdate(GObj* fighter_gobj);
void ftMario_SpecialN_ProcAccessory(GObj* fighter_gobj);
void ftMario_SpecialN_ProcMap(GObj* fighter_gobj);
void ftMario_SpecialAirN_ProcMap(GObj* fighter_gobj);
void ftMario_SpecialAirN_SwitchStatusGround(GObj* fighter_gobj);
void ftMario_SpecialN_SwitchStatusAir(GObj* fighter_gobj);
void ftMario_SpecialN_InitStatusVars(GObj* fighter_gobj);
void ftMario_SpecialN_SetStatus(GObj* fighter_gobj);
void ftMario_SpecialAirN_SetStatus(GObj* fighter_gobj);

// SpecialHi / SpecialAirHi
void ftMario_SpecialHi_ProcUpdate(GObj* fighter_gobj);
void ftMario_SpecialHi_ProcInterrupt(GObj* fighter_gobj);
void ftMario_SpecialHi_ProcPhysics(GObj* fighter_gobj);
sb32 ftMario_SpecialHi_CheckIgnorePass(GObj* fighter_gobj);
void ftMario_SpecialHi_ProcMap(GObj* fighter_gobj);
void ftMario_SpecialHi_InitStatusVars(GObj* fighter_gobj);
void ftMario_SpecialHi_SetStatus(GObj* fighter_gobj);
void ftMario_SpecialAirHi_SetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftMario_SpecialLw_ProcUpdate(GObj* fighter_gobj);
void ftMario_SpecialAirLw_ProcUpdate(GObj* fighter_gobj);
f32 ftMario_SpecialLw_UpdateFriction(ftStruct* fp, f32 vel);
void ftMario_SpecialLw_ProcPhysics(GObj* fighter_gobj);
void ftMario_SpecialAirLw_ProcPhysics(GObj* fighter_gobj);
void ftMario_SpecialLw_ProcMap(GObj* fighter_gobj);
void ftMario_SpecialAirLw_ProcMap(GObj* fighter_gobj);
void ftMario_SpecialAirLw_SetDisableRise(GObj* fighter_gobj);
void ftMario_SpecialAirLw_SwitchStatusGround(GObj* fighter_gobj);
void ftMario_SpecialLw_SwitchStatusAir(GObj* fighter_gobj);
void ftMario_SpecialLw_InitStatusVars(GObj* fighter_gobj);
void ftMario_SpecialLw_SetStatus(GObj* fighter_gobj);
void ftMario_SpecialAirLw_SetStatus(GObj* fighter_gobj);

#endif
