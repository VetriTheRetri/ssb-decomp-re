#ifndef _FTLUIGI_STATUS_INC_C_
#define _FTLUIGI_STATUS_INC_C_

#include <ft/fttypes.h>

// 0x8012A4F8
ftStatusDesc ftStatus_SpecialDesc_Luigi[/* */] =
{
	// Status 220 (0xDC): Attack13
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Luigi_Attack13,				// Script ID
		ftMotion_AttackIndex_Attack13,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_Attack13,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,	    // Proc Physics
		ftMap_CheckGroundStopEdgeFall			// Proc Map
	},

	// Status 221 (0xDD): AppearR
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Luigi_AppearR,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Appear_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Appear_ProcPhysics,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 222 (0xDE): AppearL
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Luigi_AppearL,					// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Appear_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Appear_ProcPhysics,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 223 (0xDF): SpecialN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Luigi_SpecialN,				// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		TRUE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMario_SpecialN_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,	    // Proc Physics
		ftMario_SpecialN_ProcMap				// Proc Map
	},

	// Status 224 (0xE0): SpecialAirN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Luigi_SpecialAirN,				// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		TRUE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMario_SpecialN_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		ftMario_SpecialAirN_ProcMap				// Proc Map
	},

	// Status 225 (0xE1): SpecialHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Luigi_SpecialHi,				// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMario_SpecialHi_ProcUpdate,			// Proc Update
		ftMario_SpecialHi_ProcInterrupt,		// Proc Interrupt
		ftMario_SpecialHi_ProcPhysics,			// Proc Physics
		ftMario_SpecialHi_ProcMap				// Proc Map
	},

	// Status 226 (0xE2): SpecialAirHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Luigi_SpecialAirHi,			// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMario_SpecialHi_ProcUpdate,			// Proc Update
		ftMario_SpecialHi_ProcInterrupt,		// Proc Interrupt
		ftMario_SpecialHi_ProcPhysics,			// Proc Physics
		ftMario_SpecialHi_ProcMap				// Proc Map
	},

	// Status 227 (0xE3): SpecialLw
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Luigi_SpecialLw,				// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMario_SpecialLw_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftMario_SpecialLw_ProcPhysics,			// Proc Physics
		ftMario_SpecialLw_ProcMap				// Proc Map
	},

	// Status 228 (0xE4): SpecialAirLw
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Luigi_SpecialAirLw,			// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMario_SpecialAirLw_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftMario_SpecialAirLw_ProcPhysics,		// Proc Physics
		ftMario_SpecialAirLw_ProcMap			// Proc Map
	}
};

#endif