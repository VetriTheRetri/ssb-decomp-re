#ifndef _FTPIKACHU_STATUS_INC_C_
#define _FTPIKACHU_STATUS_INC_C_

#include <ft/fttypes.h>

// NOTE: Scuffed attack IDs, SpecialHi and SpecialLw are swapped

// 0x8012B010
ftStatusDesc dFTPikachuSpecialStatusDesc[/* */] = 
{
	// Status 220 (0xDC): AppearR
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_AppearR,				// Script ID
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

	// Status 221 (0xDD): AppearL
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_AppearL,				// Script ID
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

	// Status 222 (0xDE): SpecialN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_SpecialN,				// Script ID
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
		ftPikachuSpecialNProcMap				// Proc Map
	},

	// Status 223 (0xDF): SpecialAirN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_SpecialAirN,			// Script ID
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
		ftPikachuSpecialAirNProcMap			// Proc Map
	},

	// Status 224 (0xE0): SpecialLwStart (wrong attack IDs)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_SpecialLwStart,		// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftPikachuSpecialLwStartProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,	    // Proc Physics
		ftPikachuSpecialLwStartProcMap		// Proc Map
	},

	// Status 225 (0xE1): SpecialLwLoop (wrong attack IDs)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_SpecialLwLoop,			// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftPikachuSpecialLwLoopProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,	    // Proc Physics
		ftPikachuSpecialLwLoopProcMap			// Proc Map
	},

	// Status 226 (0xE2): SpecialLwHit (wrong attack IDs)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_SpecialLwHit,			// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftPikachuSpecialLwHitProcUpdate,		// Proc Update
		TRUE,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,	    // Proc Physics
		ftPikachuSpecialLwHitProcMap			// Proc Map
	},

	// Status 227 (0xE3): SpecialLwHit (wrong attack IDs)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_SpecialLwEnd,			// Script ID
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
		ftPikachuSpecialLwEndProcMap			// Proc Map
	},

	// Status 228 (0xE4): SpecialAirLwStart (wrong attack IDs)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_SpecialAirLwStart,		// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftPikachuSpecialAirLwStartProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,			// Proc Physics
		ftPikachuSpecialAirLwStartProcMap		// Proc Map
	},

	// Status 229 (0xE5): SpecialAirLwLoop (wrong attack IDs)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_SpecialAirLwLoop,		// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftPikachuSpecialAirLwLoopProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,			// Proc Physics
		ftPikachuSpecialAirLwLoopProcMap		// Proc Map
	},

	// Status 230 (0xE6): SpecialAirLwHit (wrong attack IDs)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_SpecialAirLwHit,		// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftPikachuSpecialAirLwHitProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPikachuSpecialAirLwHitProcPhysics,	// Proc Physics
		ftPikachuSpecialAirLwHitProcMap		// Proc Map
	},

	// Status 231 (0xE7): SpecialAirLwEnd (wrong attack IDs)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_SpecialAirLwEnd,		// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftPikachuSpecialAirLwEndProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,			// Proc Physics
		ftPikachuSpecialAirLwEndProcMap		// Proc Map
	},

	// Status 232 (0xE8): SpecialHiStart (wrong attack IDs)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		-1,										// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftPikachuSpecialHiStartProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,	    // Proc Physics
		ftPikachuSpecialHiStartProcMap		// Proc Map
	},

	// Status 233 (0xE9): SpecialHi (wrong attack IDs)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_SpecialHi,				// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftPikachuSpecialHiProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPikachuSpecialHiProcPhysics,	    // Proc Physics
		ftPikachuSpecialHiProcMap				// Proc Map
	},

	// Status 234 (0xEA): SpecialHiEnd (wrong attack IDs)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_SpecialHiEnd,			// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftPikachuSpecialHiEndProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPikachuSpecialHiEndProcPhysics,	    // Proc Physics
		ftPikachuSpecialHiEndProcMap			// Proc Map
	},

	// Status 235 (0xEB): SpecialAirHiStart (wrong attack IDs, not marked as airborne)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		-1,										// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftPikachuSpecialAirHiStartProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPikachuSpecialAirHiStartProcPhysics,// Proc Physics
		ftPikachuSpecialAirHiStartProcMap		// Proc Map
	},

	// Status 236 (0xEC): SpecialAirHi (wrong attack IDs)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_SpecialAirHi,			// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftPikachuSpecialAirHiProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPikachuSpecialAirHiProcPhysics,		// Proc Physics
		ftPikachuSpecialAirHiProcMap			// Proc Map
	},

	// Status 237 (0xED): SpecialAirHiEnd (wrong attack IDs)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Pikachu_SpecialAirHiEnd,		// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftPikachuSpecialAirHiEndProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPikachuSpecialAirHiEndProcPhysics,	// Proc Physics
		ftPikachuSpecialAirHiEndProcMap		// Proc Map
	}
};

#endif