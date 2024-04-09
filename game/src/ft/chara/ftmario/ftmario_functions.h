#ifndef _FTMARIO_FUNCTIONS_H_
#define _FTMARIO_FUNCTIONS_H_

#include <ft/ftdef.h>
#include <ssb_types.h>
#include <sys/objdef.h>

// SpecialN / SpecialAirN
void ftMarioSpecialNProcUpdate(GObj *fighter_gobj);
void ftMarioSpecialNProcAccessory(GObj *fighter_gobj);
void ftMarioSpecialNProcMap(GObj *fighter_gobj);
void ftMarioSpecialAirNProcMap(GObj *fighter_gobj);
void ftMarioSpecialAirNSwitchStatusGround(GObj *fighter_gobj);
void ftMarioSpecialNSwitchStatusAir(GObj *fighter_gobj);
void ftMarioSpecialNInitStatusVars(GObj *fighter_gobj);
void ftMarioSpecialNSetStatus(GObj *fighter_gobj);
void ftMarioSpecialAirNSetStatus(GObj *fighter_gobj);

// SpecialHi / SpecialAirHi
void ftMarioSpecialHiProcUpdate(GObj *fighter_gobj);
void ftMarioSpecialHiProcInterrupt(GObj *fighter_gobj);
void ftMarioSpecialHiProcPhysics(GObj *fighter_gobj);
sb32 ftMarioSpecialHiCheckIgnorePass(GObj *fighter_gobj);
void ftMarioSpecialHiProcMap(GObj *fighter_gobj);
void ftMarioSpecialHiInitStatusVars(GObj *fighter_gobj);
void ftMarioSpecialHiSetStatus(GObj *fighter_gobj);
void ftMarioSpecialAirHiSetStatus(GObj *fighter_gobj);

// SpecialLw / SpecialAirLw
void ftMarioSpecialLwProcUpdate(GObj *fighter_gobj);
void ftMarioSpecialAirLwProcUpdate(GObj *fighter_gobj);
f32 ftMarioSpecialLwUpdateFriction(ftStruct *fp, f32 vel);
void ftMarioSpecialLwProcPhysics(GObj *fighter_gobj);
void ftMarioSpecialAirLwProcPhysics(GObj *fighter_gobj);
void ftMarioSpecialLwProcMap(GObj *fighter_gobj);
void ftMarioSpecialAirLwProcMap(GObj *fighter_gobj);
void ftMarioSpecialAirLwSetDisableRise(GObj *fighter_gobj);
void ftMarioSpecialAirLwSwitchStatusGround(GObj *fighter_gobj);
void ftMarioSpecialLwSwitchStatusAir(GObj *fighter_gobj);
void ftMarioSpecialLwInitStatusVars(GObj *fighter_gobj);
void ftMarioSpecialLwSetStatus(GObj *fighter_gobj);
void ftMarioSpecialAirLwSetStatus(GObj *fighter_gobj);

#endif