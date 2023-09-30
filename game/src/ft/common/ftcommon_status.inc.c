#ifndef _FTCOMMON_STATUS_INC_C_
#define _FTCOMMON_STATUS_INC_C_

#include <ft/fttypes.h>

// 0x80128DD8
ftStatusDesc ftStatus_Common_DeadDesc[/* */] =
{
	// Status 0 (0x0): DeadDown
	{
		/////////////////////////// Motion Info ////////////////////////////////
		-1,										// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DeadCommon_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		NULL									// Proc Map
	},

	// Status 1 (0x1): DeadLeft / DeadRight
	{
		/////////////////////////// Motion Info ////////////////////////////////
		-1,										// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DeadCommon_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		NULL									// Proc Map
	},

	// Status 2 (0x2): DeadUpStar
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageFall,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DeadUpStar_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		NULL									// Proc Map
	},

	// Status 3 (0x3): DeadUpFall
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageFall,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DeadUpFall_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		NULL									// Proc Map
	},

	// Status 4 (0x4): Sleep
	{
		/////////////////////////// Motion Info ////////////////////////////////
		-1,										// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Sleep_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		NULL									// Proc Map
	},

	// Status 5 (0x5): Entry
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Wait,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		NULL									// Proc Map
	}
};

// 0x80128E50
ftStatusDesc ftStatus_Common_MovesetDesc[/* */] =
{
	// Status 6 (0x6): EntryNull
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Wait,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_EntryNull_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		NULL									// Proc Map
	},

	// Status 7 (0x7): RebirthDown
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_RebirthDown,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_RebirthDown_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		ftCommon_RebirthCommon_ProcMap			// Proc Map
	},

	// Status 8 (0x8): RebirthStand
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_RebirthStand,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_RebirthStand_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		ftCommon_RebirthCommon_ProcMap			// Proc Map
	},

	// Status 9 (0x9): RebirthWait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_RebirthWait,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_RebirthWait_ProcUpdate,		// Proc Update
		ftCommon_RebirthWait_ProcInterrupt,		// Proc Interrupt
		NULL,									// Proc Physics
		ftCommon_RebirthCommon_ProcMap			// Proc Map
	},

	// Status 10 (0xA): Wait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Wait,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_Wait_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	},

	// Status 11 (0xB): WalkSlow
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_WalkSlow,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_Walk_ProcInterrupt,			// Proc Interrupt
		ftCommon_Walk_ProcPhysics,				// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	},

	// Status 12 (0xC): WalkMiddle
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_WalkMiddle,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_Walk_ProcInterrupt,			// Proc Interrupt
		ftCommon_Walk_ProcPhysics,				// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	},

	// Status 13 (0xD): WalkFast
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_WalkFast,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_Walk_ProcInterrupt,			// Proc Interrupt
		ftCommon_Walk_ProcPhysics,				// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	},

	// Status 14 (0xE): WalkEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_WalkEnd,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		NULL									// Proc Map
	},

	// Status 15 (0xF): Dash
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Dash,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Dash_ProcUpdate,				// Proc Update
		ftCommon_Dash_ProcInterrupt,			// Proc Interrupt
		ftCommon_Dash_ProcPhysics,				// Proc Physics
		ftCommon_Dash_ProcMap					// Proc Map
	},

	// Status 16 (0x10): Run
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Run,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_Run_ProcInterrupt,				// Proc Interrupt
		ftPhysics_ApplyGroundVelTransferAir,	// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 17 (0x11): RunBrake
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_RunBrake,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		ftCommon_RunBrake_ProcInterrupt,		// Proc Interrupt
		ftCommon_RunBrake_ProcPhysics,			// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	},

	// Status 18 (0x12): Turn
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Turn,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Turn_ProcUpdate,				// Proc Update
		ftCommon_Turn_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 19 (0x13): TurnRun
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_TurnRun,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_TurnRun_ProcUpdate,			// Proc Update
		ftCommon_TurnRun_ProcInterrupt,			// Proc Interrupt
		ftPhysics_SetGroundVelTrasnN,			// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 20 (0x14): KneeBend
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_KneeBend,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_KneeBend_ProcUpdate,			// Proc Update
		ftCommon_KneeBend_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 21 (0x15): GuardKneeBend
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_GuardKneeBend,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_KneeBend_ProcUpdate,			// Proc Update
		ftCommon_KneeBend_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 22 (0x16): JumpF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_JumpF,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,		// Proc Update
		ftCommon_Jump_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyAirVelDriftFastFall,		// Proc Physics
		jtgt_ovl2_800DE99C						// Proc Map
	},

	// Status 23 (0x17): JumpB
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_JumpB,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,		// Proc Update
		ftCommon_Jump_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyAirVelDriftFastFall,		// Proc Physics
		jtgt_ovl2_800DE99C						// Proc Map
	},

	// Status 24 (0x18): JumpAerialF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_JumpAerialF,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_JumpAerial_ProcUpdate,			// Proc Update
		ftCommon_JumpAerial_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyAirVelDriftFastFall,		// Proc Physics
		jtgt_ovl2_800DE99C						// Proc Map
	},

	// Status 25 (0x19): JumpAerialB
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_JumpAerialB,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_JumpAerial_ProcUpdate,			// Proc Update
		ftCommon_JumpAerial_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyAirVelDriftFastFall,		// Proc Physics
		jtgt_ovl2_800DE99C						// Proc Map
	},

	// Status 26 (0x1A): Fall
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Fall,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_Fall_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyAirVelDriftFastFall,		// Proc Physics
		jtgt_ovl2_800DE99C						// Proc Map
	},

	// Status 27 (0x1B): FallAerial
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Fall,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_Fall_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyAirVelDriftFastFall,		// Proc Physics
		jtgt_ovl2_800DE99C						// Proc Map
	},

	// Status 28 (0x1C): Squat
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Squat,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Squat_ProcUpdate,				// Proc Update
		ftCommon_Squat_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 29 (0x1D): SquatWait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_SquatWait,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_SquatWait_ProcUpdate,			// Proc Update
		ftCommon_SquatWait_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 30 (0x1E): SquatRv
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_SquatRv,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		ftCommon_SquatRv_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 31 (0x1F): LandingLight
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LandingLight,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		ftCommon_Landing_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	},

	// Status 32 (0x20): LandingHeavy
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LandingHeavy,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		ftCommon_Landing_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	},

	// Status 33 (0x21): Pass
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Pass,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,		// Proc Update
		ftCommon_Pass_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyAirVelDriftFastFall,		// Proc Physics
		jtgt_ovl2_800DE99C						// Proc Map
	},

	// Status 34 (0x22): GuardPass
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_GuardPass,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,		// Proc Update
		ftCommon_Pass_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyAirVelDriftFastFall,		// Proc Physics
		jtgt_ovl2_800DE99C						// Proc Map
	},

	// Status 35 (0x23): OttottoWait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_OttottoWait,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_Ottotto_ProcInterrupt,			// Proc Interrupt
		NULL,									// Proc Physics
		ftCommon_Ottotto_ProcMap				// Proc Map
	},

	// Status 36 (0x24): Ottotto
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Ottotto,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Ottotto_ProcUpdate,			// Proc Update
		ftCommon_Ottotto_ProcInterrupt,			// Proc Interrupt
		NULL,									// Proc Physics
		ftCommon_Ottotto_ProcMap				// Proc Map
	},

	// Status 37 (0x25): DamageHi1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageHi1,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageCommon_ProcUpdate,		// Proc Update
		ftCommon_DamageCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		func_ovl2_800DEDF0						// Proc Map
	},

	// Status 38 (0x26): DamageHi2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageHi2,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageCommon_ProcUpdate,		// Proc Update
		ftCommon_DamageCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		func_ovl2_800DEDF0						// Proc Map
	},

	// Status 39 (0x27): DamageHi3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageHi3,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageCommon_ProcUpdate,		// Proc Update
		ftCommon_DamageCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		func_ovl2_800DEDF0						// Proc Map
	},

	// Status 40 (0x28): DamageN1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageN1,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageCommon_ProcUpdate,		// Proc Update
		ftCommon_DamageCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		func_ovl2_800DEDF0						// Proc Map
	},

	// Status 41 (0x29): DamageN2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageN2,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageCommon_ProcUpdate,		// Proc Update
		ftCommon_DamageCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		func_ovl2_800DEDF0						// Proc Map
	},

	// Status 42 (0x2A): DamageN3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageN3,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageCommon_ProcUpdate,		// Proc Update
		ftCommon_DamageCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		func_ovl2_800DEDF0						// Proc Map
	},

	// Status 43 (0x2B): DamageLw1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageLw1,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageCommon_ProcUpdate,		// Proc Update
		ftCommon_DamageCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		func_ovl2_800DEDF0						// Proc Map
	},

	// Status 44 (0x2C): DamageLw2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageLw2,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageCommon_ProcUpdate,		// Proc Update
		ftCommon_DamageCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		func_ovl2_800DEDF0						// Proc Map
	},

	// Status 45 (0x2D): DamageLw3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageLw3,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageCommon_ProcUpdate,		// Proc Update
		ftCommon_DamageCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		func_ovl2_800DEDF0						// Proc Map
	},

	// Status 46 (0x2E): DamageAir1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageAir1,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageCommon_ProcUpdate,		// Proc Update
		ftCommon_DamageCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		func_ovl2_800DEDF0						// Proc Map
	},

	// Status 47 (0x2F): DamageAir2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageAir2,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageCommon_ProcUpdate,		// Proc Update
		ftCommon_DamageCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		func_ovl2_800DEDF0						// Proc Map
	},

	// Status 48 (0x30): DamageAir3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageAir3,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageCommon_ProcUpdate,		// Proc Update
		ftCommon_DamageCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		func_ovl2_800DEDF0						// Proc Map
	},

	// Status 49 (0x31): DamageE1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageE,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageCommon_ProcUpdate,		// Proc Update
		ftCommon_DamageCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		func_ovl2_800DEDF0						// Proc Map
	},

	// Status 50 (0x32): DamageE2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageE,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageAirCommon_ProcUpdate,	// Proc Update
		ftCommon_DamageAirCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		ftCommon_DamageAirCommon_ProcMap		// Proc Map
	},

	// Status 51 (0x33): DamageFlyHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageFlyHi,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageAirCommon_ProcUpdate,	// Proc Update
		ftCommon_DamageAirCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		ftCommon_DamageAirCommon_ProcMap		// Proc Map
	},

	// Status 52 (0x34): DamageFlyN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageFlyN,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageAirCommon_ProcUpdate,	// Proc Update
		ftCommon_DamageAirCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		ftCommon_DamageAirCommon_ProcMap		// Proc Map
	},

	// Status 53 (0x35): DamageFlyLw
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageFlyLw,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageAirCommon_ProcUpdate,	// Proc Update
		ftCommon_DamageAirCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		ftCommon_DamageAirCommon_ProcMap		// Proc Map
	},

	// Status 54 (0x36): DamageFlyTop
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageFlyTop,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageAirCommon_ProcUpdate,	// Proc Update
		ftCommon_DamageAirCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		ftCommon_DamageAirCommon_ProcMap		// Proc Map
	},

	// Status 55 (0x37): DamageFlyRoll
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageFlyRoll,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DamageAirCommon_ProcUpdate,	// Proc Update
		ftCommon_DamageAirCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		ftCommon_DamageAirCommon_ProcMap		// Proc Map
	},

	// Status 56 (0x38): WallDamage
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_WallDamage,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_WallDamage_ProcUpdate,			// Proc Update
		ftCommon_DamageAirCommon_ProcInterrupt,	// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		ftCommon_DamageAirCommon_ProcMap		// Proc Map
	},

	// Status 57 (0x39): DamageFall
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DamageFall,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_DamageFall_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyAirVelDriftFastFall,		// Proc Physics
		ftCommon_DamageFall_ProcMap				// Proc Map
	},

	// Status 58 (0x3A): FallSpecial
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_FallSpecial,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_FallSpecial_ProcInterrupt,		// Proc Interrupt
		ftCommon_FallSpecial_ProcPhysics,		// Proc Physics
		ftCommon_FallSpecial_ProcMap			// Proc Map
	},

	// Status 59 (0x3B): LandingFallSpecial
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LandingFallSpecial,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		ftCommon_Landing_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	},

	// Status 60 (0x3C): Twister
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Twister,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Twister_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Twister_ProcPhysics,			// Proc Physics
		func_ovl2_800DE958						// Proc Map
	},

	// Status 61 (0x3D): TaruCann
	{
		/////////////////////////// Motion Info ////////////////////////////////
		-1,										// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_TaruCann_ProcUpdate,			// Proc Update
		ftCommon_TaruCann_ProcInterrupt,		// Proc Interrupt
		ftCommon_TaruCann_ProcPhysics,			// Proc Physics
		func_ovl2_800DE958						// Proc Map
	},

	// Status 62 (0x3E): TaruCann
	{
		/////////////////////////// Motion Info ////////////////////////////////
		-1,										// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_TaruCann_ProcUpdate,			// Proc Update
		ftCommon_TaruCann_ProcInterrupt,		// Proc Interrupt
		ftCommon_TaruCann_ProcPhysics,			// Proc Physics
		func_ovl2_800DE958						// Proc Map
	},
};

#endif