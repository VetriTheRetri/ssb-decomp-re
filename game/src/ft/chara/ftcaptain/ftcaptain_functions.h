#ifndef _FTCAPTAIN_FUNCTIONS_H_
#define _FTCAPTAIN_FUNCTIONS_H_

#include <ft/ftdef.h>
#include <ssb_types.h>
#include <sys/objdef.h>

// Appear
void ftCaptain_AppearStart_ProcUpdate(GObj *fighter_gobj);
void ftCaptain_AppearEnd_SetStatus(GObj *fighter_gobj);

// SpecialN / SpecialAirN
void ftCaptain_SpecialN_UpdateGFX(GObj *fighter_gobj);
f32 ftCaptain_SpecialN_GetAngle(s32 stick_y);
void ftCaptain_SpecialN_ProcPhysics(GObj *fighter_gobj);
void ftCaptain_SpecialAirN_ProcPhysics(GObj *fighter_gobj);
void ftCaptain_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj);
void ftCaptain_SpecialN_SwitchStatusAir(GObj *fighter_gobj);
void ftCaptain_SpecialN_ProcMap(GObj *fighter_gobj);
void ftCaptain_SpecialAirN_ProcMap(GObj *fighter_gobj);
void ftCaptain_SpecialN_InitStatusVars(GObj *fighter_gobj);
void func_ovl3_8015FB54();
void ftCaptain_SpecialN_SetStatus(GObj *fighter_gobj);
void ftCaptain_SpecialAirN_SetStatus(GObj *fighter_gobj);

// SpecialLw / SpecialAirLw
void ftCaptain_SpecialLw_UpdateGFX(GObj *fighter_gobj);
void ftCaptain_SpecialLw_SetAir(GObj *fighter_gobj);
void func_ovl3_8015FCC8(GObj *fighter_gobj);
void ftCaptain_SpecialLw_DecideMapCollide(GObj *fighter_gobj);
void ftCaptain_SpecialLw_DecideSetEndStatus(GObj *fighter_gobj);
void ftCaptain_SpecialLw_ProcUpdate(GObj *fighter_gobj);
void ftCaptain_SpecialLw_ProcPhysics(GObj *fighter_gobj);
void ftCaptain_SpecialLwLanding_ProcPhysics(GObj *fighter_gobj);
void ftCaptain_SpecialAirLw_ProcPhysics(GObj *fighter_gobj);
void ftCaptain_SpecialLwBound_ProcPhysics(GObj *fighter_gobj);
bool32 ftCaptain_SpecialLwBound_CheckMapCollideGoto(GObj *fighter_gobj);
bool32 ftCaptain_SpecialLwAir_CheckAirGoto(GObj *fighter_gobj);
void ftCaptain_SpecialLw_ProcMap(GObj *fighter_gobj);
void ftCaptain_SpecialLwAir_ProcMap(GObj *fighter_gobj);
void ftCaptain_SpecialAirLw_ProcMap(GObj *fighter_gobj);
void ftCaptain_SpecialLw_ProcHit(GObj *fighter_gobj);
void ftCaptain_SpecialLw_ProcStatus(GObj *fighter_gobj);
void ftCaptain_SpecialLwAir_SetStatus(GObj *fighter_gobj);
void ftCaptain_SpecialLwLanding_SetStatus(GObj *fighter_gobj);
void ftCaptain_SpecialLw_SetStatus(GObj *fighter_gobj);
void jtgt_ovl3_801601A0(GObj *fighter_gobj);
void ftCaptain_SpecialAirLw_SetStatus(GObj *fighter_gobj);

// SpecialHi / SpecialAirHi
void ftCaptain_SpecialHi_InitCatchVars(ftStruct *fp);
void ftCaptain_SpecialHi_ProcUpdate(GObj *fighter_gobj);
void ftCaptain_SpecialHiCatch_ProcUpdate(GObj *fighter_gobj);
void ftCaptain_SpecialHi_ProcInterrupt(GObj *fighter_gobj);
void ftCaptain_SpecialHi_ProcPhysics(GObj *fighter_gobj);
void ftCaptain_SpecialHiCatch_ProcPhysics(GObj *fighter_gobj);
void ftCaptain_SpecialHi_ProcMap(GObj *fighter_gobj);
void ftCaptain_SpecialHi_ProcStatus(GObj *fighter_gobj);
void ftCaptain_SpecialHi_SetStatus(GObj *fighter_gobj);
void ftCaptain_SpecialHi_ProcCatch(GObj *fighter_gobj);
void ftCaptain_SpecialHiThrow_SetStatus(GObj *fighter_gobj);
void ftCaptain_SpecialAirHi_SetStatus(GObj *fighter_gobj);

#endif