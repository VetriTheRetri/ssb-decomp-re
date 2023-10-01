#ifndef _FTCAPTAIN_STATUS_INC_C_
#define _FTCAPTAIN_STATUS_INC_C_

#include <ft/fttypes.h>

// 0x8012AD7C
ftStatusDesc ftStatus_Captain_SpecialDesc[/* */] =
{
	// Status 220 (0xDC): Attack13
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_Attack13,				// Script ID
		ftMotion_AttackIndex_Attack13,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_Attack13,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Attack13_ProcUpdate,			// Proc Update
		ftCommon_Attack13_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 221 (0xDD): Attack100Start
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_Attack100Start,		// Script ID
		ftMotion_AttackIndex_Attack100,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_Attack100,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Attack100Start_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 222 (0xDE): Attack100Loop
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_Attack100Loop,			// Script ID
		ftMotion_AttackIndex_Attack100,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_Attack100,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Attack100Loop_ProcUpdate,		// Proc Update
		ftCommon_Attack100Loop_ProcInterrupt,	// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 223 (0xDF): Attack100End
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_Attack100End,			// Script ID
		ftMotion_AttackIndex_Attack100,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_Attack100,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelTransN,			// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 224 (0xE0): AppearRStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_AppearRStart,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCaptain_AppearStart_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Appear_ProcPhysics,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 225 (0xE1): AppearLStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_AppearLStart,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCaptain_AppearStart_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Appear_ProcPhysics,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 226 (0xE2): AppearREnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_AppearREnd,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Appear_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Appear_ProcPhysics,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 227 (0xE3): AppearLEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_AppearLEnd,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Appear_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_Appear_ProcPhysics,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 228 (0xE4): SpecialN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_SpecialN,				// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftCaptain_SpecialN_ProcPhysics,			// Proc Physics
		ftCaptain_SpecialN_ProcMap				// Proc Map
	},

	// Status 229 (0xE5): SpecialAirN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_SpecialAirN,			// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,		// Proc Update
		NULL,									// Proc Interrupt
		ftCaptain_SpecialAirN_ProcPhysics,		// Proc Physics
		ftCaptain_SpecialAirN_ProcMap			// Proc Map
	},

	// Status 230 (0xE6): SpecialLw
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_SpecialLw,				// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCaptain_SpecialLw_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftCaptain_SpecialLw_ProcPhysics,		// Proc Physics
		ftCaptain_SpecialLw_ProcMap				// Proc Map
	},

	// Status 231 (0xE7): SpecialLwAir
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftStatus_Captain_SpecialLwAir,			// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCaptain_SpecialLw_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftCaptain_SpecialLw_ProcPhysics,		// Proc Physics
		ftCaptain_SpecialLwAir_ProcMap			// Proc Map
	},

	// Status 232 (0xE8): SpecialLwLanding
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftStatus_Captain_SpecialLwLanding,		// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,		// Proc Update
		NULL,									// Proc Interrupt
		ftCaptain_SpecialLwLanding_ProcPhysics,	// Proc Physics
		func_ovl2_800DDF44						// Proc Map
	},

	// Status 233 (0xE9): SpecialAirLw
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_SpecialAirLw,			// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,		// Proc Update
		NULL,									// Proc Interrupt
		ftCaptain_SpecialAirLw_ProcPhysics,		// Proc Physics
		ftCaptain_SpecialAirLw_ProcMap			// Proc Map
	},

	// Status 234 (0xEA): SpecialLwBound
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_SpecialLwBound,		// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,		// Proc Update
		NULL,									// Proc Interrupt
		ftCaptain_SpecialLwBound_ProcPhysics,	// Proc Physics
		jtgt_ovl2_800DE934						// Proc Map
	},

	// Status 235 (0xEB): SpecialHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_SpecialHi,				// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCaptain_SpecialHi_ProcUpdate,			// Proc Update
		ftCaptain_SpecialHi_ProcInterrupt,		// Proc Interrupt
		ftCaptain_SpecialHi_ProcPhysics,		// Proc Physics
		ftCaptain_SpecialHi_ProcMap				// Proc Map
	},

	// Status 236 (0xEC): SpecialHiCatch
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_SpecialHiCatch,		// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCaptain_SpecialHiCatch_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftCaptain_SpecialHiCatch_ProcPhysics,	// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 237 (0xED): SpecialHiThrow
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_SpecialHiThrow,		// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCaptain_SpecialHiCatch_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftCaptain_SpecialHiCatch_ProcPhysics,	// Proc Physics
		jtgt_ovl2_800DE934						// Proc Map
	},

	// Status 238 (0xEE): SpecialAirHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Captain_SpecialAirHi,			// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftMotion_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCaptain_SpecialHi_ProcUpdate,			// Proc Update
		ftCaptain_SpecialHi_ProcInterrupt,		// Proc Interrupt
		ftCaptain_SpecialHi_ProcPhysics,		// Proc Physics
		ftCaptain_SpecialHi_ProcMap				// Proc Map
	}
};

#endif