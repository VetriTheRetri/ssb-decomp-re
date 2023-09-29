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
		ftMotion_Common_DeadUpStar,				// Script ID
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
		ftMotion_Common_DeadUpStar,				// Script ID
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
};

#endif