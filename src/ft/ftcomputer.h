#ifndef _FTCOMPUTER_H_
#define _FTCOMPUTER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ft/ftdef.h>
#include <wp/wpdef.h>

extern WPStruct* FTComputerGetOwnWeapon(FTStruct *fp);
extern Vec3f* FTComputerGetOwnWeaponPositionKind(FTStruct *fp, s32 wp_kind);
extern void FTComputerSetControlPKThunder(FTStruct *fp);
extern void FTComputerUpdateInputs(FTStruct *this_fp);
extern void FTComputerSetCommandWaitShort(FTStruct *fp, s32 index);
extern void FTComputerSetCommandImmediate(FTStruct *fp, s32 index);
extern void FTComputerSetCommandWaitLong(FTStruct *fp, s32 index);
extern sb32 FTComputerCheckFindTarget(FTStruct *this_fp);
extern sb32 FTComputerCheckEvadeDistance(FTStruct *this_fp);
extern FTStruct* FTComputerWaitGetTarget(FTStruct *this_fp);
extern void func_ovl3_80132EC0(void);
extern sb32 FTComputerCheckDetectTarget(FTStruct *this_fp, f32 detect_range_base);
extern sb32 FTComputerCheckSetTargetEdgeRight(FTStruct *fp, sb32 is_find_edge_target);
extern sb32 FTComputerCheckSetTargetEdgeLeft(FTStruct *fp, sb32 is_find_edge_target);
extern void func_ovl3_801346D4(FTStruct *fp);
extern void func_ovl3_80134964(FTStruct *fp);
extern sb32 FTComputerCheckTargetItemOrTwister(FTStruct *fp);
extern void FTComputerFollowObjectiveWalk(FTStruct *fp);
extern sb32 func_ovl3_80135B78(FTStruct *this_fp);
extern void func_ovl3_801361BC(FTStruct *fp);
extern sb32 FTComputerCheckFindItem(FTStruct *fp);
extern sb32 FTComputerCheckTargetItemInRange(FTStruct *fp);
extern sb32 FTComputerCheckSetEvadeTarget(FTStruct *this_fp);
extern sb32 FTComputerCheckTryChargeSpecialN(FTStruct *fp);
extern sb32 FTComputerCheckTryCancelSpecialN(FTStruct *fp);
extern s32 FTComputerGetObjectiveStatus(GObj *this_gobj);
extern s32 FTComputerProcDefault(GObj *fighter_gobj);
extern s32 FTComputerProcStand(GObj *fighter_gobj);
extern s32 FTComputerProcWalk(GObj *fighter_gobj);
extern s32 FTComputerProcEvade(GObj *fighter_gobj);
extern s32 FTComputerProcJump(GObj *fighter_gobj);
extern s32 func_ovl3_80137E70(GObj *fighter_gobj);
extern void FTComputerFollowObjectiveRecover(FTStruct *fp);
extern void FTComputerFollowObjectiveCounterAttack(FTStruct *fp);
extern void FTComputerFollowObjectiveTrackItem(FTStruct *fp);
extern void FTComputerFollowObjectiveUseItem(FTStruct *fp);
extern void FTComputerFollowObjectiveEvade(FTStruct *fp);
extern s32 func_ovl3_8013837C(FTStruct *this_fp);
extern void func_ovl3_8013877C(FTStruct *this_fp);
extern sb32 func_ovl3_80138AA8(FTStruct *this_fp, sb32 is_delay);
extern sb32 func_ovl3_80138EE4(FTStruct *fp);
extern void FTComputerFollowObjectiveAttack(FTStruct *fp);
extern void func_ovl3_801397F4(FTStruct *fp);
extern void FTComputerFollowObjectiveAlly(FTStruct *fp);
extern void FTComputerFollowObjectivePatrol(FTStruct *fp);
extern void FTComputerFollowObjectiveRush(FTStruct *fp);
extern void FTComputerProcessObjective(FTStruct *fp);
extern void FTComputerProcessBehavior(FTStruct *fp);
extern void FTComputerProcessTrait(FTStruct *fp);
extern void FTComputerProcessAll(GObj *fighter_gobj);
extern void FTComputerSetupAll(GObj *fighter_gobj);
extern void FTComputerSetFighterHurtboxSizeInfo(GObj *fighter_gobj);

#endif
