#ifndef _FTCAPTAIN_FUNCTIONS_H_
#define _FTCAPTAIN_FUNCTIONS_H_

#include <ft/ftdef.h>
#include <ssb_types.h>
#include <sys/objdef.h>

// Appear
void ftCaptainAppearStartProcUpdate(GObj* fighter_gobj);
void ftCaptainAppearEndSetStatus(GObj* fighter_gobj);

// SpecialN / SpecialAirN
void ftCaptainSpecialNUpdateGFX(GObj* fighter_gobj);
f32 ftCaptainSpecialNGetAngle(s32 stick_y);
void ftCaptainSpecialNProcPhysics(GObj* fighter_gobj);
void ftCaptainSpecialAirNProcPhysics(GObj* fighter_gobj);
void ftCaptainSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftCaptainSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftCaptainSpecialNProcMap(GObj* fighter_gobj);
void ftCaptainSpecialAirNProcMap(GObj* fighter_gobj);
void ftCaptainSpecialNInitStatusVars(GObj* fighter_gobj);
void func_ovl3_8015FB54();
void ftCaptainSpecialNSetStatus(GObj* fighter_gobj);
void ftCaptainSpecialAirNSetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftCaptainSpecialLwUpdateGFX(GObj* fighter_gobj);
void ftCaptainSpecialLwSetAir(GObj* fighter_gobj);
void func_ovl3_8015FCC8(GObj* fighter_gobj);
void ftCaptainSpecialLwDecideMapCollide(GObj* fighter_gobj);
void ftCaptainSpecialLwDecideSetEndStatus(GObj* fighter_gobj);
void ftCaptainSpecialLwProcUpdate(GObj* fighter_gobj);
void ftCaptainSpecialLwProcPhysics(GObj* fighter_gobj);
void ftCaptainSpecialLwLandingProcPhysics(GObj* fighter_gobj);
void ftCaptainSpecialAirLwProcPhysics(GObj* fighter_gobj);
void ftCaptainSpecialLwBoundProcPhysics(GObj* fighter_gobj);
sb32 ftCaptainSpecialLwBoundCheckMapCollideGoto(GObj* fighter_gobj);
sb32 ftCaptainSpecialLwAirCheckAirGoto(GObj* fighter_gobj);
void ftCaptainSpecialLwProcMap(GObj* fighter_gobj);
void ftCaptainSpecialLwAirProcMap(GObj* fighter_gobj);
void ftCaptainSpecialAirLwProcMap(GObj* fighter_gobj);
void ftCaptainSpecialLwProcHit(GObj* fighter_gobj);
void ftCaptainSpecialLwProcStatus(GObj* fighter_gobj);
void ftCaptainSpecialLwAirSetStatus(GObj* fighter_gobj);
void ftCaptainSpecialLwLandingSetStatus(GObj* fighter_gobj);
void ftCaptainSpecialLwSetStatus(GObj* fighter_gobj);
void jtgt_ovl3_801601A0(GObj* fighter_gobj);
void ftCaptainSpecialAirLwSetStatus(GObj* fighter_gobj);

// SpecialHi / SpecialAirHi
void ftCaptainSpecialHiInitCatchVars(ftStruct* fp);
void ftCaptainSpecialHiProcUpdate(GObj* fighter_gobj);
void ftCaptainSpecialHiCatchProcUpdate(GObj* fighter_gobj);
void ftCaptainSpecialHiProcInterrupt(GObj* fighter_gobj);
void ftCaptainSpecialHiProcPhysics(GObj* fighter_gobj);
void ftCaptainSpecialHiCatchProcPhysics(GObj* fighter_gobj);
void ftCaptainSpecialHiProcMap(GObj* fighter_gobj);
void ftCaptainSpecialHiProcStatus(GObj* fighter_gobj);
void ftCaptainSpecialHiSetStatus(GObj* fighter_gobj);
void ftCaptainSpecialHiProcCatch(GObj* fighter_gobj);
void ftCaptainSpecialHiThrowSetStatus(GObj* fighter_gobj);
void ftCaptainSpecialAirHiSetStatus(GObj* fighter_gobj);

#endif
