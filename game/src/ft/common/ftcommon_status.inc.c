#ifndef _FTCOMMON_STATUS_INC_C_
#define _FTCOMMON_STATUS_INC_C_

#include <ft/fttypes.h>

// 0x80128DD8
ftStatusDesc ftStatus_CommonDesc_Dead[/* */] =
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
ftStatusDesc ftStatus_CommonDesc_Moveset[/* */] =
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
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
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
		ftMotion_Common_FallSpecial,			// Script ID
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

	// Status 62 (0x3E): DokanStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DokanStart,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DokanStart_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_DokanStart_ProcPhysics,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 63 (0x3F): DokanWait
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
		ftCommon_DokanWait_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		ftCommon_DokanWait_ProcMap				// Proc Map
	},

	// Status 64 (0x40): DokanEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DokanEnd,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DokanEnd_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 65 (0x41): DokanWalk
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DokanWalk,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DokanEnd_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 66 (0x42): StopCeil
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_StopCeil,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,		// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		jtgt_ovl2_800DE99C						// Proc Map
	},

	// Status 67 (0x43): DownBounceD
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DownBounceD,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DownBounce_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 68 (0x44): DownBounceU
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DownBounceU,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DownBounce_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 69 (0x45): DownWaitD
	{
		/////////////////////////// Motion Info ////////////////////////////////
		-2,										// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DownWait_ProcUpdate,			// Proc Update
		ftCommon_DownWait_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 70 (0x46): DownWaitU
	{
		/////////////////////////// Motion Info ////////////////////////////////
		-2,										// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_DownWait_ProcUpdate,			// Proc Update
		ftCommon_DownWait_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 71 (0x47): DownStandD
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DownStandD,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		ftCommon_DownStand_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 72 (0x48): DownStandU
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DownStandU,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		ftCommon_DownStand_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 73 (0x49): PassiveStandF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_PassiveStandF,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 74 (0x4A): PassiveStandB
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_PassiveStandB,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 75 (0x4B): DownForwardD
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DownForwardD,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 76 (0x4C): DownForwardU
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DownForwardU,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 77 (0x4D): DownBackD
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DownBackD,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 78 (0x4E): DownBackU
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DownBackU,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 79 (0x4F): DownAttackD
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DownAttackD,			// Script ID
		ftMotion_AttackIndex_DownAttackD,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_DownAttackD,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 80 (0x50): DownAttackU
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_DownAttackU,			// Script ID
		ftMotion_AttackIndex_DownAttackU,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_DownAttackU,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 81 (0x51): Passive
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Passive,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 82 (0x52): ReboundWait
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
		ftCommon_ReboundWait_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 83 (0x53): Rebound
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Rebound,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Rebound_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 84 (0x54): CliffCatch
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffCatch,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffCatch_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon_ProcPhysics,		// Proc Physics
		ftCommon_CliffCommon_ProcMap			// Proc Map
	},

	// Status 85 (0x55): CliffWait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffWait,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_CliffWait_ProcInterrupt,		// Proc Interrupt
		ftCommon_CliffCommon_ProcPhysics,		// Proc Physics
		ftCommon_CliffCommon_ProcMap			// Proc Map
	},

	// Status 86 (0x56): CliffQuick
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffQuick,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffQuick_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon_ProcPhysics,		// Proc Physics
		ftCommon_CliffCommon_ProcMap			// Proc Map
	},

	// Status 87 (0x57): CliffClimbQuick1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffClimbQuick1,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffClimbQuick1_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon_ProcPhysics,		// Proc Physics
		ftCommon_CliffCommon_ProcMap			// Proc Map
	},

	// Status 88 (0x58): CliffClimbQuick2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffClimbQuick2,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffCommon2_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon2_ProcPhysics,		// Proc Physics
		ftCommon_CliffClimbCommon2_ProcMap		// Proc Map
	},

	// Status 89 (0x59): CliffSlow
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffSlow,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffSlow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon_ProcPhysics,		// Proc Physics
		ftCommon_CliffCommon_ProcMap			// Proc Map
	},

	// Status 90 (0x5A): CliffClimbSlow1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffClimbSlow1,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffClimbSlow1_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon_ProcPhysics,		// Proc Physics
		ftCommon_CliffCommon_ProcMap			// Proc Map
	},

	// Status 91 (0x5B): CliffClimbSlow2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffClimbSlow2,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffCommon2_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon2_ProcPhysics,		// Proc Physics
		ftCommon_CliffClimbCommon2_ProcMap		// Proc Map
	},

	// Status 92 (0x5C): CliffAttackQuick1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffAttackQuick1,		// Script ID
		ftMotion_AttackIndex_CliffAttackQuick,	// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_CliffAttackQuick,	// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffAttackQuick1_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon_ProcPhysics,		// Proc Physics
		ftCommon_CliffCommon_ProcMap			// Proc Map
	},

	// Status 93 (0x5D): CliffAttackQuick2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffAttackQuick2,		// Script ID
		ftMotion_AttackIndex_CliffAttackQuick,	// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_CliffAttackQuick,	// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffCommon2_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon2_ProcPhysics,		// Proc Physics
		ftCommon_CliffAttackEscape2_ProcMap		// Proc Map
	},

	// Status 94 (0x5E): CliffAttackSlow1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffAttackSlow1,		// Script ID
		ftMotion_AttackIndex_CliffAttackSlow,	// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_CliffAttackSlow,	// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffAttackSlow1_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon_ProcPhysics,		// Proc Physics
		ftCommon_CliffCommon_ProcMap			// Proc Map
	},

	// Status 95 (0x5F): CliffAttackSlow2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffAttackSlow2,		// Script ID
		ftMotion_AttackIndex_CliffAttackSlow,	// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_CliffAttackSlow,	// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffCommon2_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon2_ProcPhysics,		// Proc Physics
		ftCommon_CliffAttackEscape2_ProcMap		// Proc Map
	},

	// Status 96 (0x60): CliffEscapeQuick1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffEscapeQuick1,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffEscapeQuick1_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon_ProcPhysics,		// Proc Physics
		ftCommon_CliffCommon_ProcMap			// Proc Map
	},

	// Status 97 (0x61): CliffEscapeQuick2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffEscapeQuick2,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffCommon2_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon2_ProcPhysics,		// Proc Physics
		ftCommon_CliffAttackEscape2_ProcMap		// Proc Map
	},

	// Status 98 (0x62): CliffEscapeSlow1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffEscapeSlow1,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffEscapeSlow1_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon_ProcPhysics,		// Proc Physics
		ftCommon_CliffCommon_ProcMap			// Proc Map
	},

	// Status 99 (0x63): CliffEscapeSlow2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CliffEscapeSlow2,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CliffCommon2_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_CliffCommon2_ProcPhysics,		// Proc Physics
		ftCommon_CliffAttackEscape2_ProcMap		// Proc Map
	},

	// Status 100 (0x64): LightGet
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightGet,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Get_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftCommon_LightGet_ProcMap				// Proc Map
	},

	// Status 101 (0x65): HeavyGet
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HeavyGet,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Get_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftCommon_HeavyGet_ProcMap				// Proc Map
	},

	// Status 102 (0x66): LiftWait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		-2,										// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_LiftWait_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftCommon_HeavyGet_ProcMap				// Proc Map
	},

	// Status 103 (0x67): LiftTurn
	{
		/////////////////////////// Motion Info ////////////////////////////////
		-2,										// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_LiftTurn_ProcUpdate,			// Proc Update
		ftCommon_LiftTurn_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftCommon_HeavyGet_ProcMap				// Proc Map
	},

	// Status 104 (0x68): LightThrowDrop
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowDrop,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 105 (0x69): LightThrowDash
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowDash,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 106 (0x6A): LightThrowF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowF,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 107 (0x6B): LightThrowB
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowB,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 108 (0x6C): LightThrowHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowHi,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 109 (0x6D): LightThrowLw
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowLw,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 110 (0x6E): LightThrowF4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowF4,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 111 (0x6F): LightThrowB4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowB4,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 112 (0x70): LightThrowHi4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowHi4,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 113 (0x71): LightThrowLw4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowLw4,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 114 (0x72): LightThrowAirF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowAirF,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		jtgt_ovl2_800DE934						// Proc Map
	},

	// Status 115 (0x73): LightThrowAirB
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowAirB,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		jtgt_ovl2_800DE934						// Proc Map
	},

	// Status 116 (0x74): LightThrowAirHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowAirHi,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		jtgt_ovl2_800DE934						// Proc Map
	},

	// Status 117 (0x75): LightThrowAirLw
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowAirLw,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		jtgt_ovl2_800DE934						// Proc Map
	},

	// Status 118 (0x76): LightThrowAirF4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowAirF4,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		jtgt_ovl2_800DE934						// Proc Map
	},

	// Status 119 (0x77): LightThrowAirB4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowAirB4,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		jtgt_ovl2_800DE934						// Proc Map
	},

	// Status 120 (0x78): LightThrowAirHi4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowAirHi4,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		jtgt_ovl2_800DE934						// Proc Map
	},

	// Status 121 (0x79): LightThrowAirLw4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LightThrowAirLw4,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		jtgt_ovl2_800DE934						// Proc Map
	},

	// Status 122 (0x7A): HeavyThrowF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HeavyThrowF,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftCommon_HeavyThrow_ProcMap				// Proc Map
	},

	// Status 123 (0x7B): HeavyThrowB
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HeavyThrowB,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftCommon_HeavyThrow_ProcMap				// Proc Map
	},

	// Status 124 (0x7C): HeavyThrowF4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HeavyThrowF4,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftCommon_HeavyThrow_ProcMap				// Proc Map
	},

	// Status 125 (0x7D): HeavyThrowB4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HeavyThrowB4,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftCommon_HeavyThrow_ProcMap				// Proc Map
	},

	// Status 126 (0x7E): SwordSwing1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_SwordSwing1,			// Script ID
		ftMotion_AttackIndex_SwordSwing1,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_SwordSwing1,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 127 (0x7F): SwordSwing3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_SwordSwing3,			// Script ID
		ftMotion_AttackIndex_SwordSwing3,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_SwordSwing3,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 128 (0x80): SwordSwing4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_SwordSwing4,			// Script ID
		ftMotion_AttackIndex_SwordSwing4,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_SwordSwing4,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 129 (0x81): SwordSwingDash
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_SwordSwingDash,			// Script ID
		ftMotion_AttackIndex_SwordSwingDash,	// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_SwordSwingDash,	// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 130 (0x82): BatSwing1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_BatSwing1,				// Script ID
		ftMotion_AttackIndex_BatSwing1,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_BatSwing1,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 131 (0x83): BatSwing3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_BatSwing3,				// Script ID
		ftMotion_AttackIndex_BatSwing3,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_BatSwing3,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 132 (0x84): BatSwing4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_BatSwing4,				// Script ID
		ftMotion_AttackIndex_BatSwing4,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_BatSwing4,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 133 (0x85): BatSwingDash
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_BatSwingDash,			// Script ID
		ftMotion_AttackIndex_BatSwingDash,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_BatSwingDash,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 134 (0x86): HarisenSwing1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HarisenSwing1,			// Script ID
		ftMotion_AttackIndex_HarisenSwing1,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_HarisenSwing1,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_HarisenSwing_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 135 (0x87): HarisenSwing3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HarisenSwing3,			// Script ID
		ftMotion_AttackIndex_HarisenSwing3,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_HarisenSwing3,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_HarisenSwing_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 136 (0x88): HarisenSwing4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HarisenSwing4,			// Script ID
		ftMotion_AttackIndex_HarisenSwing4,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_HarisenSwing4,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_HarisenSwing_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 137 (0x89): HarisenSwingDash
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HarisenSwingDash,		// Script ID
		ftMotion_AttackIndex_HarisenSwingDash,	// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_HarisenSwingDash,	// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_HarisenSwing_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 138 (0x8A): StarRodSwing1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_StarRodSwing1,			// Script ID
		ftMotion_AttackIndex_StarRodSwing1,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_StarRodSwing1,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_StarRodSwing_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 139 (0x8B): StarRodSwing3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_StarRodSwing3,			// Script ID
		ftMotion_AttackIndex_StarRodSwing3,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is Special attack?
		ftStatus_AttackIndex_StarRodSwing3,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_StarRodSwing_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 140 (0x8C): StarRodSwing4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_StarRodSwing4,			// Script ID
		ftMotion_AttackIndex_StarRodSwing4,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is Special attack?
		ftStatus_AttackIndex_StarRodSwing4,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_StarRodSwing_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 141 (0x8D): StarRodSwingDash
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_StarRodSwingDash,		// Script ID
		ftMotion_AttackIndex_StarRodSwingDash,	// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_StarRodSwingDash,	// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_StarRodSwing_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 142 (0x8E): LGunShoot
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LGunShoot,				// Script ID
		ftMotion_AttackIndex_LGunShoot,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is Special attack?
		ftStatus_AttackIndex_LGunShoot,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_LGunShoot_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftCommon_LGunShoot_ProcMap				// Proc Map
	},

	// Status 143 (0x8F): LGunShootAir
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LGunShootAir,			// Script ID
		ftMotion_AttackIndex_LGunShoot,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is Special attack?
		ftStatus_AttackIndex_LGunShoot,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_LGunShoot_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		ftCommon_LGunShootAir_ProcMap			// Proc Map
	},

	// Status 144 (0x90): FireFlowerShoot
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_FireFlowerShoot,		// Script ID
		ftMotion_AttackIndex_FireFlowerShoot,	// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is Special attack?
		ftStatus_AttackIndex_FireFlowerShoot,	// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_FireFlowerShoot_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftCommon_FireFlowerShoot_ProcMap		// Proc Map
	},

	// Status 145 (0x91): FireFlowerShootAir
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_FireFlowerShootAir,		// Script ID
		ftMotion_AttackIndex_FireFlowerShoot,	// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is Special attack?
		ftStatus_AttackIndex_FireFlowerShoot,	// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_FireFlowerShoot_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		ftCommon_FireFlowerShootAir_ProcMap		// Proc Map
	},

	// Status 146 (0x92): HammerWait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HammerWait,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_Hammer,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftHammer_ProcInterrupt,					// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftHammer_ProcMap						// Proc Map
	},

	// Status 147 (0x93): HammerWalk
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HammerWalk,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_Hammer,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_HammerWalk_ProcInterrupt,		// Proc Interrupt
		ftCommon_Walk_ProcPhysics,				// Proc Physics
		ftHammer_ProcMap						// Proc Map
	},

	// Status 148 (0x94): HammerTurn
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HammerWalk,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_Hammer,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_HammerTurn_ProcUpdate,			// Proc Update
		ftCommon_HammerTurn_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftHammer_ProcMap						// Proc Map
	},

	// Status 149 (0x95): HammerKneeBend
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HammerWalk,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_Hammer,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_HammerKneeBend_ProcUpdate,		// Proc Update
		ftCommon_HammerKneeBend_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftHammer_ProcMap						// Proc Map
	},

	// Status 150 (0x96): HammerFall
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HammerWalk,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_Hammer,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_HammerFall_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyAirVelDriftFastFall,		// Proc Physics
		ftCommon_HammerFall_ProcMap				// Proc Map
	},

	// Status 151 (0x97): HammerLanding
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HammerWalk,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_Hammer,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_HammerLanding_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftHammer_ProcMap						// Proc Map
	},

	// Status 152 (0x98): GuardOn
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_GuardOn,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_GuardOn_ProcUpdate,			// Proc Update
		ftCommon_GuardCommon_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 153 (0x99): Guard
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
		ftCommon_Guard_ProcUpdate,				// Proc Update
		ftCommon_GuardCommon_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 154 (0x9A): GuardOff
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_GuardOff,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_GuardOff_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 155 (0x9B): GuardSetOff
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
		ftCommon_GuardSetOff_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 156 (0x9C): EscapeF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_EscapeF,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Escape_ProcUpdate,				// Proc Update
		ftCommon_Escape_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 157 (0x9D): EscapeB
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_EscapeB,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Escape_ProcUpdate,				// Proc Update
		ftCommon_Escape_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 158 (0x9E): ShieldBreakFly
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ShieldBreakFly,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ShieldBreakFly_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,			// Proc Physics
		ftCommon_ShieldBreakFly_ProcMap			// Proc Map
	},

	// Status 159 (0x9F): ShieldBreakFall
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ShieldBreakFall,		// Script ID
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
		ftPhysics_ApplyAirVelFriction,			// Proc Physics
		ftCommon_ShieldBreakFall_ProcMap		// Proc Map
	},

	// Status 160 (0xA0): ShieldBreakDownD
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ShieldBreakDownD,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ShieldBreakDown_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 161 (0xA1): ShieldBreakDownU
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ShieldBreakDownU,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ShieldBreakDown_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 162 (0xA2): ShieldBreakStandD
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ShieldBreakStandD,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ShieldBreakStand_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 163 (0xA3): ShieldBreakStandU
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ShieldBreakStandU,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ShieldBreakStand_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 164 (0xA4): FuraFura
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_FuraFura,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_FuraFura_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 165 (0xA5): FuraSleep
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_FuraSleep,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_FuraFura_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEC4						// Proc Map
	},

	// Status 166 (0xA6): Catch
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Catch,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Catch_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftCommon_Catch_ProcMap					// Proc Map
	},

	// Status 167 (0xA7): CatchPull
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CatchPull,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_CatchPull_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftCommon_Catch_ProcMap					// Proc Map
	},

	// Status 168 (0xA8): CatchWait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		-2,										// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_CatchWait_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftCommon_Catch_ProcMap					// Proc Map
	},

	// Status 169 (0xA9): ThrowF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ThrowF,					// Script ID
		ftMotion_AttackIndex_ThrowF,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ThrowF,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Throw_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		ftCommon_Catch_ProcMap					// Proc Map
	},

	// Status 170 (0xAA): ThrowB
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ThrowB,					// Script ID
		ftMotion_AttackIndex_ThrowB,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_ThrowB,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Throw_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		ftCommon_Catch_ProcMap					// Proc Map
	},

	// Status 171 (0xAB): CapturePulled
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CapturePulled,			// Script ID
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
		ftCommon_Capture_ProcPhysics,			// Proc Physics
		ftCommon_CapturePulled_ProcMap			// Proc Map
	},

	// Status 172 (0xAC): CaptureWait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		-2,										// Script ID
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
		ftCommon_Capture_ProcPhysics,			// Proc Physics
		ftCommon_CaptureWait_ProcMap			// Proc Map
	},

	// Status 173 (0xAD): CaptureKirby
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
		NULL,									// Proc Interrupt
		ftCommon_CaptureKirby_ProcPhysics,		// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 174 (0xAE): CaptureWaitKirby
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
		NULL,									// Proc Update
		ftCommon_CaptureWaitKirby_ProcInterrupt,// Proc Interrupt
		NULL,									// Proc Physics
		ftCommon_CaptureWaitKirby_ProcMap		// Proc Map
	},

	// Status 175 (0xAF): ThrownKirbyStar
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ThrownKirbyStar,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ThrownKirbyStar_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_ThrownKirbyStar_ProcPhysics,	// Proc Physics
		ftCommon_ThrownCommonStar_ProcMap		// Proc Map
	},

	// Status 176 (0xB0): ThrownCopyStar
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ThrownCopyStar,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ThrownCopyStar_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_ThrownCopyStar_ProcPhysics,	// Proc Physics
		ftCommon_ThrownCommonStar_ProcMap		// Proc Map
	},

	// Status 177 (0xB1): CaptureYoshi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CapturePulled,			// Script ID
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
		ftCommon_CaptureYoshi_ProcPhysics,		// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 178 (0xB2): YoshiEgg
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_YoshiEgg,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_YoshiEgg_ProcUpdate,			// Proc Update
		ftCommon_YoshiEgg_ProcInterrupt,		// Proc Interrupt
		ftCommon_YoshiEgg_ProcPhysics,			// Proc Physics
		ftCommon_YoshiEgg_ProcMap				// Proc Map
	},

	// Status 179 (0xB3): CaptureCaptain
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_CaptureCaptain,			// Script ID
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
		ftCommon_CaptureCaptain_ProcPhysics,	// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 180 (0xB4): ThrownDonkeyUnk
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ThrownDonkeyUnk,		// Script ID
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

	// Status 181 (0xB5): ThrownDonkeyF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ThrownDonkeyF,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Thrown_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Thrown_ProcPhysics,			// Proc Physics
		ftCommon_Thrown_ProcMap					// Proc Map
	},

	// Status 182 (0xB6): ThrownMarioB1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ThrownMarioB1,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Thrown_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Thrown_ProcPhysics,			// Proc Physics
		ftCommon_Thrown_ProcMap					// Proc Map
	},

	// Status 183 (0xB7): ThrownUnk1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ThrownUnk1,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Thrown_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Thrown_ProcPhysics,			// Proc Physics
		ftCommon_Thrown_ProcMap					// Proc Map
	},

	// Status 184 (0xB8): Shouldered
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Shouldered,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftCommon_Shouldered_ProcInterrupt,		// Proc Interrupt
		ftCommon_Thrown_ProcPhysics,			// Proc Physics
		ftCommon_Thrown_ProcMap					// Proc Map
	},
		
	// Status 185 (0xB9): ThrownMarioB2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ThrownMarioB2,			// Script ID
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
		ftCommon_Thrown_ProcPhysics,			// Proc Physics
		ftCommon_Thrown_ProcMap					// Proc Map
	},

	// Status 186 (0xBA): ThrownCommon
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ThrownCommon,			// Script ID
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
		ftCommon_Thrown_ProcPhysics,			// Proc Physics
		ftCommon_Thrown_ProcMap					// Proc Map
	},

	// Status 187 (0xBB): ThrownUnk2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ThrownUnk2,				// Script ID
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
		ftCommon_Thrown_ProcPhysics,			// Proc Physics
		ftCommon_Thrown_ProcMap					// Proc Map
	},

	// Status 188 (0xBC): ThrownUnk3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_ThrownUnk3,				// Script ID
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
		ftCommon_Thrown_ProcPhysics,			// Proc Physics
		ftCommon_Thrown_ProcMap					// Proc Map
	},

	// Status 189 (0xBD): Appeal
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Appeal,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		ftCommon_Appeal_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	},

	// Status 190 (0xBE): Attack11
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Attack11,				// Script ID
		ftMotion_AttackIndex_Attack11,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_Attack11,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Attack11_ProcUpdate,			// Proc Update
		ftCommon_Attack11_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 191 (0xBF): Attack12
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_Attack12,				// Script ID
		ftMotion_AttackIndex_Attack12,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_Attack12,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Attack12_ProcUpdate,			// Proc Update
		ftCommon_Attack12_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 192 (0xC0): AttackDash
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackDash,				// Script ID
		ftMotion_AttackIndex_AttackDash,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackDash,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 193 (0xC1): AttackS3Hi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackS3Hi,				// Script ID
		ftMotion_AttackIndex_AttackS3,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackS3,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 194 (0xC2): AttackS3HiS
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackS3HiS,			// Script ID
		ftMotion_AttackIndex_AttackS3,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackS3,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 195 (0xC3): AttackS3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackS3,				// Script ID
		ftMotion_AttackIndex_AttackS3,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackS3,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 196 (0xC4): AttackS3LwS
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackS3LwS,			// Script ID
		ftMotion_AttackIndex_AttackS3,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackS3,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 197 (0xC5): AttackS3Lw
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackS3Lw,				// Script ID
		ftMotion_AttackIndex_AttackS3,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackS3,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 198 (0xC6): AttackHi3F
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackHi3F,				// Script ID
		ftMotion_AttackIndex_AttackHi3,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackHi3,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 199 (0xC7): AttackHi3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackHi3,				// Script ID
		ftMotion_AttackIndex_AttackHi3,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackHi3,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 200 (0xC8): AttackHi3B
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackHi3B,				// Script ID
		ftMotion_AttackIndex_AttackHi3,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackHi3,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 201 (0xC9): AttackLw3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackLw3,				// Script ID
		ftMotion_AttackIndex_AttackLw3,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackLw3,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_AttackLw3_ProcUpdate,			// Proc Update
		ftCommon_AttackLw3_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 202 (0xCA): AttackS4Hi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackS4Hi,				// Script ID
		ftMotion_AttackIndex_AttackS4,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackS4,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_AttackS4_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 203 (0xCB): AttackS4HiS
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackS4HiS,			// Script ID
		ftMotion_AttackIndex_AttackS4,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackS4,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_AttackS4_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 204 (0xCC): AttackS4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackS4,				// Script ID
		ftMotion_AttackIndex_AttackS4,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackS4,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_AttackS4_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 205 (0xCD): AttackS4LwS
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackS4LwS,			// Script ID
		ftMotion_AttackIndex_AttackS4,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackS4,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_AttackS4_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 206 (0xCE): AttackS4Lw
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackS4Lw,				// Script ID
		ftMotion_AttackIndex_AttackS4,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackS4,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_AttackS4_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 207 (0xCF): AttackHi4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackHi4,				// Script ID
		ftMotion_AttackIndex_AttackHi4,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackHi4,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundFrictionOrTransN,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 208 (0xD0): AttackLw4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackLw4,				// Script ID
		ftMotion_AttackIndex_AttackLw4,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackLw4,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 209 (0xD1): AttackAirN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackAirN,				// Script ID
		ftMotion_AttackIndex_AttackAirN,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackAirN,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		ftCommon_AttackAir_ProcMap				// Proc Map
	},

	// Status 210 (0xD2): AttackAirF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackAirF,				// Script ID
		ftMotion_AttackIndex_AttackAirF,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackAirF,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		ftCommon_AttackAir_ProcMap				// Proc Map
	},

	// Status 211 (0xD3): AttackAirB
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackAirB,				// Script ID
		ftMotion_AttackIndex_AttackAirB,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackAirB,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		ftCommon_AttackAir_ProcMap				// Proc Map
	},

	// Status 212 (0xD4): AttackAirHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackAirHi,			// Script ID
		ftMotion_AttackIndex_AttackAirHi,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackAirHi,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		ftCommon_AttackAir_ProcMap				// Proc Map
	},

	// Status 213 (0xD5): AttackAirLw
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_AttackAirLw,			// Script ID
		ftMotion_AttackIndex_AttackAirLw,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackAirLw,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_AttackAirLw_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		ftCommon_AttackAir_ProcMap				// Proc Map
	},

	// Status 214 (0xD6): LandingAirN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LandingAirN,			// Script ID
		ftMotion_AttackIndex_AttackAirN,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackAirN,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	},

	// Status 215 (0xD7): LandingAirF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LandingAirF,			// Script ID
		ftMotion_AttackIndex_AttackAirF,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackAirF,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	},

	// Status 216 (0xD8): LandingAirB
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LandingAirB,			// Script ID
		ftMotion_AttackIndex_AttackAirB,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackAirB,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	},

	// Status 217 (0xD9): LandingAirHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LandingAirHi,			// Script ID
		ftMotion_AttackIndex_AttackAirHi,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackAirHi,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	},

	// Status 218 (0xDA): LandingAirLw
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LandingAirLw,			// Script ID
		ftMotion_AttackIndex_AttackAirLw,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_AttackAirLw,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	},

	// Status 219 (0xDB): LandingAirNull
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_LandingAirNull,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		jtgt_ovl2_800DDEE8						// Proc Map
	}
};

#endif