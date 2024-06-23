#ifndef _FTCOMPUTER_H_
#define _FTCOMPUTER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ft/ftdef.h>
#include <wp/wpdef.h>

extern wpStruct* ftComputerGetOwnWeapon(ftStruct *fp);
extern Vec3f* ftComputerGetOwnWeaponPositionKind(ftStruct *fp, s32 wp_kind);
extern void ftComputerSetControlPKThunder(ftStruct *fp);
extern void ftComputerUpdateInputs(ftStruct *this_fp);
extern void ftComputerSetCommandWaitShort(ftStruct *fp, s32 index);
extern void ftComputerSetCommandImmediate(ftStruct *fp, s32 index);
extern void ftComputerSetCommandWaitLong(ftStruct *fp, s32 index);
extern sb32 ftComputerCheckFindTarget(ftStruct *this_fp);
extern sb32 ftComputerCheckEvadeDistance(ftStruct *this_fp);
extern ftStruct* ftComputerWaitGetTarget(ftStruct *this_fp);
extern void func_ovl3_80132EC0(void);
extern sb32 ftComputerCheckDetectTarget(ftStruct *this_fp, f32 detect_range_base);
extern sb32 ftComputerCheckSetTargetEdgeRight(ftStruct *fp, sb32 is_find_edge_target);
extern sb32 ftComputerCheckSetTargetEdgeLeft(ftStruct *fp, sb32 is_find_edge_target);
extern void func_ovl3_801346D4(ftStruct *fp);
extern void func_ovl3_80134964(ftStruct *fp);
extern sb32 ftComputerCheckTargetItemOrTwister(ftStruct *fp);
extern void ftComputerFollowObjectiveWalk(ftStruct *fp);
extern sb32 func_ovl3_80135B78(ftStruct *this_fp);
extern void func_ovl3_801361BC(ftStruct *fp);
extern sb32 ftComputerCheckFindItem(ftStruct *fp);
extern sb32 ftComputerCheckTargetItemInRange(ftStruct *fp);
extern sb32 ftComputerCheckSetEvadeTarget(ftStruct *this_fp);
extern sb32 ftComputerCheckTryChargeSpecialN(ftStruct *fp);
extern sb32 ftComputerCheckTryCancelSpecialN(ftStruct *fp);
extern s32 ftComputerGetObjectiveStatus(GObj *this_gobj);
extern s32 ftComputerProcDefault(GObj *fighter_gobj);
extern s32 ftComputerProcStand(GObj *fighter_gobj);
extern s32 ftComputerProcWalk(GObj *fighter_gobj);
extern s32 ftComputerProcEvade(GObj *fighter_gobj);
extern s32 ftComputerProcJump(GObj *fighter_gobj);
extern s32 func_ovl3_80137E70(GObj *fighter_gobj);
extern void ftComputerFollowObjectiveRecover(ftStruct *fp);
extern void ftComputerFollowObjectiveCounterAttack(ftStruct *fp);
extern void ftComputerFollowObjectiveTrackItem(ftStruct *fp);
extern void ftComputerFollowObjectiveUseItem(ftStruct *fp);
extern void ftComputerFollowObjectiveEvade(ftStruct *fp);
extern s32 func_ovl3_8013837C(ftStruct *this_fp);
extern void func_ovl3_8013877C(ftStruct *this_fp);
extern sb32 func_ovl3_80138AA8(ftStruct *this_fp, sb32 is_delay);
extern sb32 func_ovl3_80138EE4(ftStruct *fp);
extern void ftComputerFollowObjectiveAttack(ftStruct *fp);
extern void func_ovl3_801397F4(ftStruct *fp);
extern void ftComputerFollowObjectiveAlly(ftStruct *fp);
extern void ftComputerFollowObjectivePatrol(ftStruct *fp);
extern void ftComputerFollowObjectiveRush(ftStruct *fp);
extern void ftComputerProcessObjective(ftStruct *fp);
extern void ftComputerProcessBehavior(ftStruct *fp);
extern void ftComputerProcessTrait(ftStruct *fp);
extern void ftComputerProcessAll(GObj *fighter_gobj);
extern void ftComputerSetupAll(GObj *fighter_gobj);
extern void ftComputerSetFighterHurtboxSizeInfo(GObj *fighter_gobj);

#endif
