#ifndef _FTMARIO_STATUS_H_
#define _FTMARIO_STATUS_H_

#include <ft/fttypes.h>

ftStatusDesc ftStatus_Mario_SpecialDesc[/* */] =
{
	// Status 220 (0xDC): Attack13
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Mario_Attack13,				// Script ID
		ftMotion_AttackIndex_Attack13,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_Attack13,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		func_ovl2_800D8BB4,						// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 221 (0xDD): AppearR
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Mario_AppearR,					// Script ID
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
		func_ovl2_800DE348						// Proc Map
	},

	// Status 222 (0xDE): AppearL
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Mario_AppearL,					// Script ID
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
		func_ovl2_800DE348						// Proc Map
	},

	// Status 223 (0xDF): SpecialN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Mario_SpecialN,				// Script ID
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
		func_ovl2_800D8BB4,						// Proc Physics
		ftMario_SpecialN_ProcMap				// Proc Map
	},

	// Status 224 (0xE0): SpecialAirN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Mario_SpecialAirN,				// Script ID
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
		jtgt_ovl2_800D90E0,						// Proc Physics
		ftMario_SpecialAirN_ProcMap				// Proc Map
	},

	// Status 225 (0xE1): SpecialHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Mario_SpecialHi,				// Script ID
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
		ftMotion_Mario_SpecialAirHi,			// Script ID
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
		ftMotion_Mario_SpecialLw,				// Script ID
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
		ftMotion_Mario_SpecialAirLw,			// Script ID
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