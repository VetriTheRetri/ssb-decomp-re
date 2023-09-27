#ifndef _FTLINK_FUNCTIONS_H_
#define _FTLINK_FUNCTIONS_H_

#include <ssb_types.h>
#include <ft/ftdef.h>
#include <sys/objdef.h>

// SpecialN / SpecialAirN
void ftLink_SpecialN_DestroyBoomerang(GObj *fighter_gobj);
void ftLink_SpecialN_CreateBoomerang(GObj *fighter_gobj);
void ftLink_SpecialN_ProcUpdate(GObj *fighter_gobj);
void ftLink_SpecialAirN_ProcUpdate(GObj *fighter_gobj);
void ftLink_SpecialN_ProcMap(GObj *fighter_gobj);
void ftLink_SpecialNEmpty_ProcMap(GObj *fighter_gobj);
void ftLink_SpecialAirN_ProcMap(GObj *fighter_gobj);
void ftLink_SpecialAirNEmpty_ProcMap(GObj *fighter_gobj);
void ftLink_SpecialN_ProcStatus(GObj *fighter_gobj);
void ftLink_SpecialN_SwitchStatusAir(GObj *fighter_gobj);
void ftLink_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj);
void ftLink_SpecialNEmpty_SwitchStatusAir(GObj *fighter_gobj);
void ftLink_SpecialAirNEmpty_SwitchStatusGround(GObj *fighter_gobj);
void ftLink_SpecialN_SetStatus(GObj *fighter_gobj);
void ftLink_SpecialAirN_SetStatus(GObj *fighter_gobj);
void ftLink_SpecialNReturn_SetStatus(GObj *fighter_gobj);

#endif