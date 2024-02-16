#ifndef _FTSAMUS_STATUS_INC_C_
#define _FTSAMUS_STATUS_INC_C_

#include <ft/fttypes.h>

// 0x8012A41C
ftStatusDesc ftStatus_SpecialDesc_Samus[/* */] = 
{
	// Status 220 (0xDC): AppearR
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Samus_AppearR,					// Script ID
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
		ftMotion_Samus_AppearL,					// Script ID
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

	// Status 222 (0xDE): SpecialNStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Samus_SpecialNStart,			// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftSamus_SpecialNStart_ProcUpdate,		// Proc Update
		ftSamus_SpecialNStart_ProcInterrupt,	// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftSamus_SpecialNStart_ProcMap			// Proc Map
	},

	// Status 223 (0xDF): SpecialNLoop
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Samus_SpecialNLoop,			// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftSamus_SpecialNLoop_ProcUpdate,		// Proc Update
		ftSamus_SpecialNLoop_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftSamus_SpecialNLoop_ProcMap			// Proc Map
	},

	// Status 224 (0xE0): SpecialNEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Samus_SpecialNEnd,				// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftSamus_SpecialNEnd_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftSamus_SpecialNEnd_ProcMap				// Proc Map
	},

	// Status 225 (0xE1): SpecialAirNStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Samus_SpecialAirNStart,		// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftSamus_SpecialNStart_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		ftSamus_SpecialAirNStart_ProcMap		// Proc Map
	},

	// Status 226 (0xE2): SpecialAirNEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Samus_SpecialAirNEnd,			// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftSamus_SpecialNEnd_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,			// Proc Physics
		ftSamus_SpecialAirNEnd_ProcMap			// Proc Map
	},

	// Status 227 (0xE3): SpecialHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Samus_SpecialHi,				// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftSamus_SpecialHi_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftSamus_SpecialHi_ProcPhysics,			// Proc Physics
		ftSamus_SpecialHi_ProcMap				// Proc Map
	},

	// Status 228 (0xE4): SpecialAirHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Samus_SpecialAirHi,			// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftSamus_SpecialHi_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftSamus_SpecialAirHi_ProcPhysics,		// Proc Physics
		ftSamus_SpecialHi_ProcMap				// Proc Map
	},

	// Status 229 (0xE5): SpecialLw
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Samus_SpecialLw,				// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftSamus_SpecialLw_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftSamus_SpecialLw_ProcPhysics,			// Proc Physics
		ftSamus_SpecialLw_ProcMap				// Proc Map
	},

	// Status 230 (0xE6): SpecialAirLw
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Samus_SpecialAirLw,			// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftSamus_SpecialAirLw_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftSamus_SpecialAirLw_ProcPhysics,		// Proc Physics
		ftSamus_SpecialAirLw_ProcMap			// Proc Map
	}
};

#endif