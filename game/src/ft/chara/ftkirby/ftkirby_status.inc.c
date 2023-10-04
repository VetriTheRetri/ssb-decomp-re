#ifndef _FTKIRBY_STATUS_INC_C_
#define _FTKIRBY_STATUS_INC_C_

#include <ft/fttypes.h>

// 0x8012A700
ftStatusDesc ftStatus_Kirby_SpecialDesc[/* */] =
{
	// Status 220 (0xDC): Attack100Start
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_Attack100Start,					// Script ID
		ftMotion_AttackIndex_Attack100,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_Attack100,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Attack100Start_ProcUpdate,				// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		func_ovl2_800DDF44								// Proc Map
	},

	// Status 221 (0xDD): Attack100Loop
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_Attack100Loop,					// Script ID
		ftMotion_AttackIndex_Attack100,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_Attack100,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Attack100Loop_ProcUpdate,				// Proc Update
		ftCommon_Attack100Loop_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		func_ovl2_800DDF44								// Proc Map
	},

	// Status 222 (0xDE): Attack100End
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_Attack100End,					// Script ID
		ftMotion_AttackIndex_Attack100,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_Attack100,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,				// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		func_ovl2_800DDF44								// Proc Map
	},

	// Status 223 (0xDF): JumpAerialF1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_JumpAerialF1,					// Script ID
		ftMotion_AttackIndex_None,						// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_None,						// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_JumpAerial_ProcUpdate,					// Proc Update
		ftCommon_JumpAerial_ProcInterrupt,				// Proc Interrupt
		ftCommon_JumpAerial_ProcPhysics,				// Proc Physics
		func_ovl2_800DE978								// Proc Map
	},

	// Status 224 (0xE0): JumpAerialF2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_JumpAerialF2,					// Script ID
		ftMotion_AttackIndex_None,						// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_None,						// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_JumpAerial_ProcUpdate,					// Proc Update
		ftCommon_JumpAerial_ProcInterrupt,				// Proc Interrupt
		ftCommon_JumpAerial_ProcPhysics,				// Proc Physics
		func_ovl2_800DE978								// Proc Map
	},

	// Status 225 (0xE1): JumpAerialF3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_JumpAerialF3,					// Script ID
		ftMotion_AttackIndex_None,						// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_None,						// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_JumpAerial_ProcUpdate,					// Proc Update
		ftCommon_JumpAerial_ProcInterrupt,				// Proc Interrupt
		ftCommon_JumpAerial_ProcPhysics,				// Proc Physics
		func_ovl2_800DE978								// Proc Map
	},

	// Status 226 (0xE2): JumpAerialF4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_JumpAerialF4,					// Script ID
		ftMotion_AttackIndex_None,						// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_None,						// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_JumpAerial_ProcUpdate,					// Proc Update
		ftCommon_JumpAerial_ProcInterrupt,				// Proc Interrupt
		ftCommon_JumpAerial_ProcPhysics,				// Proc Physics
		func_ovl2_800DE978								// Proc Map
	},

	// Status 227 (0xE3): JumpAerialF5
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_JumpAerialF5,					// Script ID
		ftMotion_AttackIndex_None,						// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_None,						// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_JumpAerial_ProcUpdate,					// Proc Update
		ftCommon_JumpAerial_ProcInterrupt,				// Proc Interrupt
		ftCommon_JumpAerial_ProcPhysics,				// Proc Physics
		func_ovl2_800DE978								// Proc Map
	},

	// Status 228 (0xE4): ThrowF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_ThrowFJump,						// Script ID
		ftMotion_AttackIndex_ThrowF,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_ThrowF,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_ThrowFJump_ProcUpdate,					// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,					// Proc Physics
		ftKirby_ThrowFJump_ProcMap						// Proc Map
	},

	// Status 229 (0xE5): ThrowFFall
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_ThrowFFall,						// Script ID
		ftMotion_AttackIndex_ThrowF,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_ThrowF,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,											// Proc Update
		NULL,											// Proc Interrupt
		NULL,											// Proc Physics
		ftKirby_ThrowFJump_ProcMap						// Proc Map
	},

	// Status 230 (0xE6): ThrowFLanding
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_ThrowFLanding,					// Script ID
		ftMotion_AttackIndex_ThrowF,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_ThrowF,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Throw_ProcUpdate,						// Proc Update
		NULL,											// Proc Interrupt
		ftKirby_ThrowFLanding_ProcPhysics,				// Proc Physics
		ftKirby_ThrowFLanding_ProcMap					// Proc Map
	},

	// Status 231 (0xE7): CopyMarioSpecialN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyMario_SpecialN,				// Script ID
		ftMotion_AttackIndex_SpecialNCopyMario,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyMario,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopyMario_SpecialN_ProcUpdate,			// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		ftKirby_CopyMario_SpecialN_ProcMap				// Proc Map
	},

	// Status 232 (0xE8): CopyMarioSpecialAirN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyMario_SpecialAirN,			// Script ID
		ftMotion_AttackIndex_SpecialNCopyMario,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyMario,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopyMario_SpecialN_ProcUpdate,			// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,						// Proc Physics
		ftKirby_CopyMario_SpecialAirN_ProcMap			// Proc Map
	},

	// Status 233 (0xE9): CopyLuigiSpecialN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyLuigi_SpecialN,				// Script ID
		ftMotion_AttackIndex_SpecialNCopyLuigi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyLuigi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopyMario_SpecialN_ProcUpdate,			// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		ftKirby_CopyMario_SpecialN_ProcMap				// Proc Map
	},

	// Status 234 (0xEA): CopyLuigiSpecialAirN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyLuigi_SpecialAirN,			// Script ID
		ftMotion_AttackIndex_SpecialNCopyLuigi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyLuigi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopyMario_SpecialN_ProcUpdate,			// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,						// Proc Physics
		ftKirby_CopyMario_SpecialAirN_ProcMap			// Proc Map
	},

	// Left off at: 0x8012A818
};

#endif