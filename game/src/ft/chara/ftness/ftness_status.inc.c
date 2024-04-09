#ifndef _FTNESS_STATUS_INC_C_
#define _FTNESS_STATUS_INC_C_

#include <ft/fttypes.h>

// 0x8012B2B8
ftStatusDesc ftStatus_SpecialDesc_Ness[/* */] =
{
	// Status 220 (0xDC): Attack13
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_Attack13,					// Script ID
		ftMotion_AttackIndex_Attack13,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_Attack13,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,	    // Proc Physics
		ftMap_CheckGroundStopEdgeFall			// Proc Map
	},

	// Status 221 (0xDD): AppearRStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_AppearRStart,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNess_AppearStart_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Appear_ProcPhysics,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 222 (0xDE): AppearLStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_AppearLStart,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNess_AppearStart_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Appear_ProcPhysics,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 223 (0xDF): AppearWait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_AppearWait,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNess_AppearWait_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Appear_ProcPhysics,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 224 (0xE0): AppearREnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_AppearREnd,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Appear_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Appear_ProcPhysics,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 225 (0xE1): AppearLEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_AppearLEnd,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Appear_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Appear_ProcPhysics,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 226 (0xE2): SpecialN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialN,					// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,	    // Proc Physics
		ftNessSpecialNProcMap					// Proc Map
	},

	// Status 227 (0xE3): SpecialAirN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialAirN,				// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,			// Proc Physics
		ftNessSpecialAirNProcMap				// Proc Map
	},

	// Status 228 (0xE4): SpecialHiStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialHiStart,			// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessSpecialHiStartProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftNessSpecialHiProcPhysics,			// Proc Physics
		ftNessSpecialHiStartProcMap			// Proc Map
	},

	// Status 229 (0xE5): SpecialHiHold
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialHiHold,			// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessSpecialHiHoldProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,	    // Proc Physics
		ftNessSpecialHiHoldProcMap			// Proc Map
	},

	// Status 230 (0xE6): SpecialHiEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialHiEnd,				// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,	    // Proc Physics
		ftNessSpecialHiEndProcMap				// Proc Map
	},

	// Status 231 (0xE7): SpecialHi (PK Thunder Self-Hit / PK Jibaku)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialHi,				// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessJibakuProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftNessJibakuProcPhysics,				// Proc Physics
		ftNessJibakuProcMap					// Proc Map
	},

	// Status 232 (0xE8): SpecialAirHiStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialAirHiStart,		// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessSpecialAirHiStartProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftNessSpecialAirHiProcPhysics,		// Proc Physics
		ftNessSpecialAirHiStartProcMap		// Proc Map
	},

	// Status 233 (0xE9): SpecialAirHiHold
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialAirHiHold,			// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessSpecialAirHiHoldProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftNessSpecialAirHiProcPhysics,		// Proc Physics
		ftNessSpecialAirHiHoldProcMap			// Proc Map
	},

	// Status 234 (0xEA): SpecialAirHiEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialAirHiEnd,			// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessSpecialAirHiEndProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftNessSpecialAirHiProcPhysics,		// Proc Physics
		ftNessSpecialAirHiEndProcMap			// Proc Map
	},

	// Status 235 (0xEB): SpecialAirHiBound (PK Thunder Wall-Hit / PK Jibaku Wall-Hit)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialAirHiBound,		// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessJibakuAirBoundProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,			// Proc Physics
		ftNessJibakuAirBoundProcMap			// Proc Map
	},

	// Status 236 (0xEC): SpecialAirHi (PK Thunder Self-Hit / PK Jibaku)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialAirHi,				// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessJibakuAirProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftNessJibakuAirProcPhysics,			// Proc Physics
		ftNessJibakuAirProcMap				// Proc Map
	},

	// Status 237 (0xED): SpecialLwStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialLwStart,			// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessSpecialLwStartProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftNessSpecialLwProcPhysics,			// Proc Physics
		ftNessSpecialLwStartProcMap			// Proc Map
	},

	// Status 238 (0xEE): SpecialLwHold
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialLwHold,			// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessSpecialLwHoldProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,	    // Proc Physics
		ftNessSpecialLwHoldProcMap			// Proc Map
	},

	// Status 239 (0xEF): SpecialLwHit
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialLwHit,				// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessSpecialLwHitProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,	    // Proc Physics
		ftNessSpecialLwHitProcMap				// Proc Map
	},

	// Status 240 (0xF0): SpecialLwEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialLwEnd,				// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,	    // Proc Physics
		ftNessSpecialLwEndProcMap				// Proc Map
	},

	// Status 241 (0xF1): SpecialAirLwStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialAirLwStart,		// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessSpecialAirLwStartProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftNessSpecialAirLwProcPhysics,		// Proc Physics
		ftNessSpecialAirLwStartProcMap		// Proc Map
	},

	// Status 242 (0xF2): SpecialAirLwHold
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialAirLwHold,			// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessSpecialAirLwHoldProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftNessSpecialAirLwProcPhysics,		// Proc Physics
		ftNessSpecialAirLwHoldProcMap			// Proc Map
	},

	// Status 243 (0xF3): SpecialAirLwHit
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialAirLwHit,			// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessSpecialAirLwHitProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftNessSpecialAirLwProcPhysics,		// Proc Physics
		ftNessSpecialAirLwHitProcMap			// Proc Map
	},

	// Status 244 (0xF4): SpecialAirLwEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Ness_SpecialAirLwEnd,			// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftNessSpecialAirLwEndProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftNessSpecialAirLwProcPhysics,		// Proc Physics
		ftNessSpecialAirLwEndProcMap			// Proc Map
	}
};

#endif