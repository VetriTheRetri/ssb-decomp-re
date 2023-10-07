#ifndef _FTMASTERHAND_FUNCTIONS_H_
#define _FTMASTERHAND_FUNCTIONS_H_

#include <ft/fttypes.h>

// Common
void ftMasterHand_Common_InvertLR(GObj *fighter_gobj);
void ftMasterHand_Common_CheckEdgeInvertLR(GObj *fighter_gobj);
void ftMasterHand_Common_CheckPlayerInvertLR(GObj *fighter_gobj);
void ftMasterHand_Common_GetRandomEdgeLR(s32 line_id, Vec3f *pos);
void ftMasterHand_Common_GotoTargetEdge(GObj *fighter_gobj, Vec3f *pos);
void ftMasterHand_Common_SetPosOffsetY(GObj *fighter_gobj, Vec3f *pos, f32 off_y);
void ftMasterHand_Common_SetPosAddVelPlayer(GObj *fighter_gobj, Vec3f *pos, f32 vel_x, f32 vel_y);
void ftMasterHand_Common_SetPosAddVelAuto(GObj *fighter_gobj, Vec3f *pos, f32 vel_x, f32 vel_y);
void ftMasterHand_Common_GetPositionCenter(s32 var, Vec3f *pos_input);
void ftMasterHand_Common_SetNextAttackWait(GObj *fighter_gobj);
void ftMasterHand_Common_UpdateFogColor(GObj *fighter_gobj);
void ftMasterHand_Common_SetUseFogColor(GObj *fighter_gobj);
void ftMasterHand_Common_SetDisableFogColor(GObj *fighter_gobj);
void ftMasterHand_Common_SetDefaultLineID(GObj *fighter_gobj);
void ftMasterHand_Common_UpdateDamageStats(GObj *fighter_gobj);

// Unk
void ftMasterHand_Default_ProcInterrupt(GObj *fighter_gobj);
void ftMasterHand_Default_SetStatus(GObj *fighter_gobj); // Unused

// Wait
void ftMasterHand_Wait_SetVelStickRange(GObj *fighter_gobj);
void ftMasterHand_Wait_DecideStatusPlayer(GObj *fighter_gobj);
void ftMasterHand_Wait_DecideStatusComputer(GObj *fighter_gobj);
void ftMasterHand_Wait_ProcInterrupt(GObj *fighter_gobj);
void ftMasterHand_Wait_ProcPhysics(GObj *fighter_gobj);
void ftMasterHand_Wait_SetStatus(GObj *fighter_gobj);

// Move
void ftMasterHand_Move_ProcPhysics(GObj *fighter_gobj);
void ftMasterHand_Move_ProcMap(GObj *fighter_gobj);
void ftMasterHand_Move_SetStatus(GObj *fighter_gobj, void (*proc_setstatus)(GObj*), Vec3f *vel);

// Hippataku
void ftMasterHand_Hippataku_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Hippataku_SetStatus(GObj *fighter_gobj);

// Harau
void ftMasterHand_Harau_ResetStatus(GObj *fighter_gobj);
void ftMasterHand_Harau_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Harau_ProcPhysics(GObj *fighter_gobj);
void ftMasterHand_Harau_SetStatus(GObj *fighter_gobj);

// Okuhikouki1
void ftMasterHand_Okuhikouki1_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Okuhikouki1_SetStatus(GObj *fighter_gobj);

// Okuhikouki2
void ftMasterHand_Okuhikouki2_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Okuhikouki2_ProcPhysics(GObj *fighter_gobj);
void ftMasterHand_Okuhikouki2_SetStatus(GObj *fighter_gobj);

// Okuhikouki3
void ftMasterHand_Okuhikouki3_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Okuhikouki3_SetStatus(GObj *fighter_gobj);

// Walk
void ftMasterHand_Walk_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Walk_SetStatus(GObj *fighter_gobj);

// WalkLoop
sb32 ftMasterHand_WalkLoop_CheckPlayerRange(GObj *fighter_gobj);
void ftMasterHand_WalkLoop_ProcPhysics(GObj *fighter_gobj);
void ftMasterHand_WalkLoop_ProcMap(GObj *fighter_gobj);
void ftMasterHand_WalkLoop_SetStatus(GObj *fighter_gobj);

// WalkWait
void ftMasterHand_WalkWait_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_WalkWait_SetStatus(GObj *fighter_gobj);

// WalkShoot
void ftMasterHand_WalkShoot_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_WalkShoot_SetStatus(GObj *fighter_gobj);

// GootsubusuUp
void ftMasterHand_GootsubusuUp_ProcPhysics(GObj *fighter_gobj);
void ftMasterHand_GootsubusuUp_ProcMap(GObj *fighter_gobj);
void ftMasterHand_GootsubusuUp_SetStatus(GObj *fighter_gobj);

// GootsubusuWait
void ftMasterHand_GootsubusuWait_ProcPhysics(GObj *fighter_gobj);
void ftMasterHand_GootsubusuWait_ProcMap(GObj *fighter_gobj);
void ftMasterHand_GootsubusuWait_SetStatus(GObj *fighter_gobj);

// GootsubusuEnd
void ftMasterHand_GootsubusuEnd_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_GootsubusuEnd_SetStatus(GObj *fighter_gobj);

// GootsubusuDown
void ftMasterHand_GootsubusuDown_ProcMap(GObj *fighter_gobj);
void ftMasterHand_GootsubusuDown_SetStatus(GObj *fighter_gobj);

// Tsutsuku1
void ftMasterHand_Tsutsuku1_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Tsutsuku1_SetStatus(GObj *fighter_gobj);

// Tsutsuku2
void ftMasterHand_Tsutsuku2_ProcPhysics(GObj *fighter_gobj);
void ftMasterHand_Tsutsuku2_SetStatus(GObj *fighter_gobj);

// Tsutsuku3
void ftMasterHand_Tsutsuku3_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Tsutsuku3_SetStatus(GObj *fighter_gobj);

// Drill
void ftMasterHand_Drill_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Drill_ProcPhysics(GObj *fighter_gobj);
void ftMasterHand_Drill_ProcPhysicsFollow(GObj *fighter_gobj);
void ftMasterHand_Drill_ProcMap(GObj *fighter_gobj);
void ftMasterHand_Drill_SetStatus(GObj *fighter_gobj);

// Okukouki
void ftMasterHand_Okukouki_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Okukouki_SetStatus(GObj *fighter_gobj);

// Yubideppou1
void ftMasterHand_Yubideppou1_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Yubideppou1_SetStatus(GObj *fighter_gobj);

// Yubideppou2
void ftMasterHand_Yubideppou2_UpdatePosition(GObj *fighter_gobj);
void ftMasterHand_Yubideppou2_ProcPhysics(GObj *fighter_gobj);
void ftMasterHand_Yubideppou2_SetStatus(GObj *fighter_gobj);

// Yubideppou3
void ftMasterHand_Yubideppou3_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Yubideppou3_ProcPhysics(GObj *fighter_gobj);
void ftMasterHand_Yubideppou3_SetStatus(GObj *fighter_gobj);

// Okupunch1
void ftMasterHand_Okupunch1_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Okupunch1_SetStatus(GObj *fighter_gobj);

// Okupunch2
void ftMasterHand_Okupunch2_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Okupunch2_ProcPhysics(GObj *fighter_gobj);
void ftMasterHand_Okupunch2_SetStatus(GObj *fighter_gobj);

// Okupunch3
void ftMasterHand_Okupunch3_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Okupunch3_SetStatus(GObj *fighter_gobj);

// Okutsubushi
void ftMasterHand_Okutsubushi_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_Okutsubushi_ProcPhysics(GObj *fighter_gobj);
void ftMasterHand_Okutsubushi_SetStatus(GObj *fighter_gobj);

// OkutsubushiStart
void ftMasterHand_OkutsubushiStart_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_OkutsubushiStart_SetStatus(GObj *fighter_gobj);

// DeadLeft
void ftMasterHand_DeadLeft_ProcUpdate(GObj *fighter_gobj);
void ftMasterHand_DeadLeft_SetStatus(GObj *fighter_gobj);

// DeadCenter?
void ftMasterHand_DeadCenter_ProcPhysics(GObj *fighter_gobj);
void ftMasterHand_DeadCenter_SetStatus(GObj *fighter_gobj);

// DeadRight?
void ftMasterHand_DeadRight_SetStatus(GObj *fighter_gobj);

// Appear
void ftMasterHand_Appear_ProcPhysics(GObj *fighter_gobj);

#endif