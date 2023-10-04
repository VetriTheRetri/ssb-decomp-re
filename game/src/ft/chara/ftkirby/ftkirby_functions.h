#ifndef _FTKIRBY_FUNCTIONS_H_
#define _FTKIRBY_FUNCTIONS_H_

#include <ft/ftdef.h>
#include <ssb_types.h>
#include <sys/objdef.h>

// SpecialHi / SpecialAirHi
void ftKirby_SpecialHi_UpdateGFX(GObj *fighter_gobj);
void ftKirby_SpecialHi_ProcUpdate(GObj *fighter_gobj);
void ftKirby_SpecialHiLanding_ProcUpdate(GObj *fighter_gobj);
void ftKirby_SpecialHi_ProcPhysics(GObj *fighter_gobj);
void ftKirby_SpecialHiLanding_ProcPhysics(GObj *fighter_gobj);
void ftKirby_SpecialAirHi_ProcPhysics(GObj *fighter_gobj);
void ftKirby_SpecialAirHiFall_ProcPhysics(GObj *fighter_gobj);
void ftKirby_SpecialHi_ProcMap(GObj *fighter_gobj);
void ftKirby_SpecialAirHiFall_ProcMap(GObj *fighter_gobj);
void ftKirby_SpecialHi_ProcStatus(GObj *fighter_gobj);
void ftKirby_SpecialHi_SetStatus(GObj *fighter_gobj);
void ftKirby_SpecialHiLanding_SetStatus(GObj *fighter_gobj);
void ftKirby_SpecialAirHi_SetStatus(GObj *fighter_gobj);
void ftKirby_SpecialAirHiFall_SetStatus(GObj *fighter_gobj);

// CopyMarioSpecialN
void ftKirby_CopyMario_SpecialN_ProcUpdate(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialN_ProcAccessory(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialN_ProcMap(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialAirN_ProcMap(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialN_SwitchStatusAir(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialN_InitStatusVars(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialN_SetStatus(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialAirN_SetStatus(GObj *fighter_gobj);

#endif