#ifndef _FTMASTERHAND_FUNCTIONS_H_
#define _FTMASTERHAND_FUNCTIONS_H_

#include <ft/fttypes.h>

// Common
void ftMasterHandCommonInvertLR(GObj* fighter_gobj);
void ftMasterHandCommonCheckEdgeInvertLR(GObj* fighter_gobj);
void ftMasterHandCommonCheckPlayerInvertLR(GObj* fighter_gobj);
void ftMasterHandCommonGetRandomEdgeLR(s32 line_id, Vec3f* pos);
void ftMasterHandCommonGotoTargetEdge(GObj* fighter_gobj, Vec3f* pos);
void ftMasterHandCommonSetPosOffsetY(GObj* fighter_gobj, Vec3f* pos, f32 off_y);
void ftMasterHandCommonSetPosAddVelPlayer(GObj* fighter_gobj, Vec3f* pos, f32 vel_x, f32 vel_y);
void ftMasterHandCommonSetPosAddVelAuto(GObj* fighter_gobj, Vec3f* pos, f32 vel_x, f32 vel_y);
void ftMasterHandCommonGetPositionCenter(s32 var, Vec3f* pos_input);
void ftMasterHandCommonSetNextAttackWait(GObj* fighter_gobj);
void ftMasterHandCommonUpdateFogColor(GObj* fighter_gobj);
void ftMasterHandCommonSetUseFogColor(GObj* fighter_gobj);
void ftMasterHandCommonSetDisableFogColor(GObj* fighter_gobj);
void ftMasterHandCommonSetDefaultLineID(GObj* fighter_gobj);
void ftMasterHandCommonUpdateDamageStats(GObj* fighter_gobj);

// Unk
void ftMasterHandDefaultProcInterrupt(GObj* fighter_gobj);
void ftMasterHandDefaultSetStatus(GObj* fighter_gobj); // Unused

// Wait
void ftMasterHandWaitSetVelStickRange(GObj* fighter_gobj);
void ftMasterHandWaitDecideStatusPlayer(GObj* fighter_gobj);
void ftMasterHandWaitDecideStatusComputer(GObj* fighter_gobj);
void ftMasterHandWaitProcInterrupt(GObj* fighter_gobj);
void ftMasterHandWaitProcPhysics(GObj* fighter_gobj);
void ftMasterHandWaitSetStatus(GObj* fighter_gobj);

// Move
void ftMasterHandMoveProcPhysics(GObj* fighter_gobj);
void ftMasterHandMoveProcMap(GObj* fighter_gobj);
void ftMasterHandMoveSetStatus(GObj* fighter_gobj, void (*proc_setstatus)(GObj*), Vec3f* vel);

// Hippataku
void ftMasterHandHippatakuProcUpdate(GObj* fighter_gobj);
void ftMasterHandHippatakuSetStatus(GObj* fighter_gobj);

// Harau
void ftMasterHandHarauResetStatus(GObj* fighter_gobj);
void ftMasterHandHarauProcUpdate(GObj* fighter_gobj);
void ftMasterHandHarauProcPhysics(GObj* fighter_gobj);
void ftMasterHandHarauSetStatus(GObj* fighter_gobj);

// Okuhikouki1
void ftMasterHandOkuhikouki1ProcUpdate(GObj* fighter_gobj);
void ftMasterHandOkuhikouki1SetStatus(GObj* fighter_gobj);

// Okuhikouki2
void ftMasterHandOkuhikouki2ProcUpdate(GObj* fighter_gobj);
void ftMasterHandOkuhikouki2ProcPhysics(GObj* fighter_gobj);
void ftMasterHandOkuhikouki2SetStatus(GObj* fighter_gobj);

// Okuhikouki3
void ftMasterHandOkuhikouki3ProcUpdate(GObj* fighter_gobj);
void ftMasterHandOkuhikouki3SetStatus(GObj* fighter_gobj);

// Walk
void ftMasterHandWalkProcUpdate(GObj* fighter_gobj);
void ftMasterHandWalkSetStatus(GObj* fighter_gobj);

// WalkLoop
sb32 ftMasterHandWalkLoopCheckPlayerRange(GObj* fighter_gobj);
void ftMasterHandWalkLoopProcPhysics(GObj* fighter_gobj);
void ftMasterHandWalkLoopProcMap(GObj* fighter_gobj);
void ftMasterHandWalkLoopSetStatus(GObj* fighter_gobj);

// WalkWait
void ftMasterHandWalkWaitProcUpdate(GObj* fighter_gobj);
void ftMasterHandWalkWaitSetStatus(GObj* fighter_gobj);

// WalkShoot
void ftMasterHandWalkShootProcUpdate(GObj* fighter_gobj);
void ftMasterHandWalkShootSetStatus(GObj* fighter_gobj);

// GootsubusuUp
void ftMasterHandGootsubusuUpProcPhysics(GObj* fighter_gobj);
void ftMasterHandGootsubusuUpProcMap(GObj* fighter_gobj);
void ftMasterHandGootsubusuUpSetStatus(GObj* fighter_gobj);

// GootsubusuWait
void ftMasterHandGootsubusuWaitProcPhysics(GObj* fighter_gobj);
void ftMasterHandGootsubusuWaitProcMap(GObj* fighter_gobj);
void ftMasterHandGootsubusuWaitSetStatus(GObj* fighter_gobj);

// GootsubusuEnd
void ftMasterHandGootsubusuEndProcUpdate(GObj* fighter_gobj);
void ftMasterHandGootsubusuEndSetStatus(GObj* fighter_gobj);

// GootsubusuDown
void ftMasterHandGootsubusuDownProcMap(GObj* fighter_gobj);
void ftMasterHandGootsubusuDownSetStatus(GObj* fighter_gobj);

// Tsutsuku1
void ftMasterHandTsutsuku1ProcUpdate(GObj* fighter_gobj);
void ftMasterHandTsutsuku1SetStatus(GObj* fighter_gobj);

// Tsutsuku2
void ftMasterHandTsutsuku2ProcPhysics(GObj* fighter_gobj);
void ftMasterHandTsutsuku2SetStatus(GObj* fighter_gobj);

// Tsutsuku3
void ftMasterHandTsutsuku3ProcUpdate(GObj* fighter_gobj);
void ftMasterHandTsutsuku3SetStatus(GObj* fighter_gobj);

// Drill
void ftMasterHandDrillProcUpdate(GObj* fighter_gobj);
void ftMasterHandDrillProcPhysics(GObj* fighter_gobj);
void ftMasterHandDrillProcPhysicsFollow(GObj* fighter_gobj);
void ftMasterHandDrillProcMap(GObj* fighter_gobj);
void ftMasterHandDrillSetStatus(GObj* fighter_gobj);

// Okukouki
void ftMasterHandOkukoukiProcUpdate(GObj* fighter_gobj);
void ftMasterHandOkukoukiSetStatus(GObj* fighter_gobj);

// Yubideppou1
void ftMasterHandYubideppou1ProcUpdate(GObj* fighter_gobj);
void ftMasterHandYubideppou1SetStatus(GObj* fighter_gobj);

// Yubideppou2
void ftMasterHandYubideppou2UpdatePosition(GObj* fighter_gobj);
void ftMasterHandYubideppou2ProcPhysics(GObj* fighter_gobj);
void ftMasterHandYubideppou2SetStatus(GObj* fighter_gobj);

// Yubideppou3
void ftMasterHandYubideppou3ProcUpdate(GObj* fighter_gobj);
void ftMasterHandYubideppou3ProcPhysics(GObj* fighter_gobj);
void ftMasterHandYubideppou3SetStatus(GObj* fighter_gobj);

// Okupunch1
void ftMasterHandOkupunch1ProcUpdate(GObj* fighter_gobj);
void ftMasterHandOkupunch1SetStatus(GObj* fighter_gobj);

// Okupunch2
void ftMasterHandOkupunch2ProcUpdate(GObj* fighter_gobj);
void ftMasterHandOkupunch2ProcPhysics(GObj* fighter_gobj);
void ftMasterHandOkupunch2SetStatus(GObj* fighter_gobj);

// Okupunch3
void ftMasterHandOkupunch3ProcUpdate(GObj* fighter_gobj);
void ftMasterHandOkupunch3SetStatus(GObj* fighter_gobj);

// Okutsubushi
void ftMasterHandOkutsubushiProcUpdate(GObj* fighter_gobj);
void ftMasterHandOkutsubushiProcPhysics(GObj* fighter_gobj);
void ftMasterHandOkutsubushiSetStatus(GObj* fighter_gobj);

// OkutsubushiStart
void ftMasterHandOkutsubushiStartProcUpdate(GObj* fighter_gobj);
void ftMasterHandOkutsubushiStartSetStatus(GObj* fighter_gobj);

// DeadLeft
void ftMasterHandDeadLeftProcUpdate(GObj* fighter_gobj);
void ftMasterHandDeadLeftSetStatus(GObj* fighter_gobj);

// DeadCenter?
void ftMasterHandDeadCenterProcPhysics(GObj* fighter_gobj);
void ftMasterHandDeadCenterSetStatus(GObj* fighter_gobj);

// DeadRight?
void ftMasterHandDeadRightSetStatus(GObj* fighter_gobj);

// Appear
void ftMasterHandAppearProcPhysics(GObj* fighter_gobj);

#endif
