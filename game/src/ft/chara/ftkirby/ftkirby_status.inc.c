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

	// Status 235 (0xEB): CopyFoxSpecialN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyFox_SpecialN,				// Script ID
		ftMotion_AttackIndex_SpecialNCopyFox,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyFox,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopyFox_SpecialN_ProcUpdate,			// Proc Update
		ftKirby_CopyFox_SpecialN_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		func_ovl2_800DDF44								// Proc Map
	},

	// Status 236 (0xEC): CopyFoxSpecialAirN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyFox_SpecialAirN,				// Script ID
		ftMotion_AttackIndex_SpecialNCopyFox,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyFox,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopyFox_SpecialN_ProcUpdate,			// Proc Update
		ftKirby_CopyFox_SpecialN_ProcInterrupt,			// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,						// Proc Physics
		jtgt_ovl2_800DE934								// Proc Map
	},

	// Status 237 (0xED): CopySamusSpecialNStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopySamus_SpecialNStart,			// Script ID
		ftMotion_AttackIndex_SpecialNCopySamus,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopySamus,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopySamus_SpecialNStart_ProcUpdate,		// Proc Update
		ftKirby_CopySamus_SpecialNStart_ProcInterrupt,	// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		ftKirby_CopySamus_SpecialNStart_ProcMap			// Proc Map
	},

	// Status 238 (0xEE): CopySamusSpecialNLoop
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopySamus_SpecialNLoop,			// Script ID
		ftMotion_AttackIndex_SpecialNCopySamus,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopySamus,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopySamus_SpecialNLoop_ProcUpdate,		// Proc Update
		ftKirby_CopySamus_SpecialNLoop_ProcInterrupt,	// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		ftKirby_CopySamus_SpecialNLoop_ProcMap			// Proc Map
	},

	// Status 239 (0xEF): CopySamusSpecialNEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopySamus_SpecialNEnd,			// Script ID
		ftMotion_AttackIndex_SpecialNCopySamus,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopySamus,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopySamus_SpecialNEnd_ProcUpdate,		// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		ftKirby_CopySamus_SpecialNEnd_ProcMap			// Proc Map
	},

	// Status 240 (0xF0): CopySamusSpecialAirNStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopySamus_SpecialAirNStart,		// Script ID
		ftMotion_AttackIndex_SpecialNCopySamus,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopySamus,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopySamus_SpecialNStart_ProcUpdate,		// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,						// Proc Physics
		ftKirby_CopySamus_SpecialAirNStart_ProcMap		// Proc Map
	},

	// Status 241 (0xF1): CopySamusSpecialAirNEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopySamus_SpecialAirNEnd,		// Script ID
		ftMotion_AttackIndex_SpecialNCopySamus,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopySamus,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopySamus_SpecialNEnd_ProcUpdate,		// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,					// Proc Physics
		ftKirby_CopySamus_SpecialAirNEnd_ProcMap		// Proc Map
	},

	// Status 242 (0xF2): CopyDonkeySpecialNStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyDonkey_SpecialNStart,		// Script ID
		ftMotion_AttackIndex_SpecialNCopyDonkey,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyDonkey,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopyDonkey_SpecialNStart_ProcUpdate,	// Proc Update
		ftKirby_CopyDonkey_SpecialNStart_ProcInterrupt,	// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		ftKirby_CopyDonkey_SpecialNStart_ProcMap		// Proc Map
	},

	// Status 243 (0xF3): CopyDonkeySpecialAirNStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyDonkey_SpecialAirNStart,		// Script ID
		ftMotion_AttackIndex_SpecialNCopyDonkey,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyDonkey,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopyDonkey_SpecialAirNStart_ProcUpdate,	// Proc Update
		ftKirby_CopyDonkey_SpecialNStart_ProcInterrupt,	// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,					// Proc Physics
		ftKirby_CopyDonkey_SpecialAirNStart_ProcMap		// Proc Map
	},

	// Status 244 (0xF4): CopyDonkeySpecialNLoop
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyDonkey_SpecialNLoop,			// Script ID
		ftMotion_AttackIndex_SpecialNCopyDonkey,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyDonkey,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopyDonkey_SpecialNLoop_ProcUpdate,		// Proc Update
		ftKirby_CopyDonkey_SpecialNLoop_ProcInterrupt,	// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		ftKirby_CopyDonkey_SpecialNLoop_ProcMap			// Proc Map
	},

	// Status 245 (0xF5): CopyDonkeySpecialAirNLoop
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyDonkey_SpecialAirNLoop,		// Script ID
		ftMotion_AttackIndex_SpecialNCopyDonkey,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyDonkey,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopyDonkey_SpecialNLoop_ProcUpdate,		// Proc Update
		ftKirby_CopyDonkey_SpecialNLoop_ProcInterrupt,	// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,					// Proc Physics
		ftKirby_CopyDonkey_SpecialAirNLoop_ProcMap		// Proc Map
	},

	// Status 246 (0xF6): CopyDonkeySpecialNEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyDonkey_SpecialNEnd,			// Script ID
		ftMotion_AttackIndex_SpecialNCopyDonkey,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyDonkey,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopyDonkey_SpecialNEnd_ProcUpdate,		// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		func_ovl2_800DDF44								// Proc Map
	},

	// Status 247 (0xF7): CopyDonkeySpecialAirNEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyDonkey_SpecialAirNEnd,		// Script ID
		ftMotion_AttackIndex_SpecialNCopyDonkey,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyDonkey,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopyDonkey_SpecialNEnd_ProcUpdate,		// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,					// Proc Physics
		ftKirby_CopyDonkey_SpecialAirNEnd_ProcMap		// Proc Map
	},

	// Status 248 (0xF8): CopyDonkeySpecialNFull
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyDonkey_SpecialNFull,			// Script ID
		ftMotion_AttackIndex_SpecialNCopyDonkey,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyDonkey,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopyDonkey_SpecialNEnd_ProcUpdate,		// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		func_ovl2_800DDF44								// Proc Map
	},

	// Status 249 (0xF9): CopyDonkeySpecialAirNFull
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyDonkey_SpecialAirNFull,		// Script ID
		ftMotion_AttackIndex_SpecialNCopyDonkey,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyDonkey,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_CopyDonkey_SpecialNEnd_ProcUpdate,		// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,					// Proc Physics
		ftKirby_CopyDonkey_SpecialAirNEnd_ProcMap		// Proc Map
	},

	// Status 250 (0xFA): AppearR
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_AppearR,							// Script ID
		ftMotion_AttackIndex_None,						// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_None,						// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Appear_ProcUpdate,						// Proc Update
		NULL,											// Proc Interrupt
		ftCommon_Appear_ProcPhysics,					// Proc Physics
		func_ovl2_800DE348								// Proc Map
	},

	// Status 251 (0xFB): AppearL
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_AppearL,							// Script ID
		ftMotion_AttackIndex_None,						// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_None,						// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Appear_ProcUpdate,						// Proc Update
		NULL,											// Proc Interrupt
		ftCommon_Appear_ProcPhysics,					// Proc Physics
		func_ovl2_800DE348								// Proc Map
	},

	// Status 252 (0xFC): CopyPikachuSpecialN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyPikachu_SpecialN,			// Script ID
		ftMotion_AttackIndex_SpecialNCopyPikachu,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyPikachu,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,				// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		ftKirby_CopyPikachu_SpecialN_ProcMap			// Proc Map
	},

	// Status 253 (0xFD): CopyPikachuSpecialAirN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyPikachu_SpecialAirN,			// Script ID
		ftMotion_AttackIndex_SpecialNCopyPikachu,		// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyPikachu,		// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,				// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,					// Proc Physics
		ftKirby_CopyPikachu_SpecialAirN_ProcMap			// Proc Map
	},

	// Status 254 (0xFE): CopyNessSpecialN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyNess_SpecialN,				// Script ID
		ftMotion_AttackIndex_SpecialNCopyNess,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyNess,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusWait,				// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		ftKirby_CopyNess_SpecialN_ProcMap				// Proc Map
	},

	// Status 255 (0xFF): CopyNessSpecialAirN
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_CopyNess_SpecialAirN,			// Script ID
		ftMotion_AttackIndex_SpecialNCopyNess,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialNCopyNess,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,				// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,					// Proc Physics
		ftKirby_CopyNess_SpecialAirN_ProcMap			// Proc Map
	},

	// Status 256 (0x100): SpecialHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_SpecialHi,						// Script ID
		ftMotion_AttackIndex_SpecialHi,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialHi,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_SpecialHi_ProcUpdate,					// Proc Update
		NULL,											// Proc Interrupt
		ftKirby_SpecialHi_ProcPhysics,					// Proc Physics
		ftKirby_SpecialHi_ProcMap						// Proc Map
	},

	// Status 257 (0x101): SpecialHiLanding
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_SpecialHiLanding,				// Script ID
		ftMotion_AttackIndex_SpecialHi,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialHi,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_SpecialHiLanding_ProcUpdate,			// Proc Update
		NULL,											// Proc Interrupt
		ftKirby_SpecialHiLanding_ProcPhysics,			// Proc Physics
		jtgt_ovl2_800DDEC4								// Proc Map
	},

	// Status 258 (0x102): SpecialAirHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_SpecialAirHi,					// Script ID
		ftMotion_AttackIndex_SpecialHi,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialHi,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_SpecialHi_ProcUpdate,					// Proc Update
		NULL,											// Proc Interrupt
		ftKirby_SpecialAirHi_ProcPhysics,				// Proc Physics
		ftKirby_SpecialHi_ProcMap						// Proc Map
	},

	// Status 259 (0x103): SpecialAirHiFall
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_SpecialAirHiFall,				// Script ID
		ftMotion_AttackIndex_SpecialHi,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		TRUE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialHi,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,											// Proc Update
		NULL,											// Proc Interrupt
		ftKirby_SpecialAirHiFall_ProcPhysics,			// Proc Physics
		ftKirby_SpecialAirHiFall_ProcMap				// Proc Map
	},

	// Status 260 (0x104): SpecialLwStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_SpecialLwStart,					// Script ID
		ftMotion_AttackIndex_SpecialLw,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialLw,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_SpecialLwStart_ProcUpdate,				// Proc Update
		NULL,											// Proc Interrupt
		NULL,											// Proc Physics
		ftKirby_SpecialLwStart_ProcMap					// Proc Map
	},

	// Status 261 (0x105): SpecialLwUnk
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_SpecialLwUnk,					// Script ID
		ftMotion_AttackIndex_SpecialLw,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialLw,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_SpecialLwUnk_ProcUpdate,				// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,				// Proc Physics
		ftKirby_SpecialLwUnk_ProcMap					// Proc Map
	},

	// Status 262 (0x106): SpecialLwHold
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_SpecialLwHold,					// Script ID
		ftMotion_AttackIndex_SpecialLw,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialLw,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_SpecialLwHold_ProcUpdate,				// Proc Update
		NULL,											// Proc Interrupt
		ftKirby_SpecialLwHold_ProcPhysics,				// Proc Physics
		ftKirby_SpecialLwHold_ProcMap					// Proc Map
	},

	// Status 263 (0x107): SpecialLwEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_SpecialLwEnd,					// Script ID
		ftMotion_AttackIndex_SpecialLw,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Ground,										// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialLw,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,				// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,					// Proc Physics
		jtgt_ovl2_800DE934								// Proc Map
	},

	// Status 264 (0x108): SpecialAirLwStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_SpecialAirLwStart,				// Script ID
		ftMotion_AttackIndex_SpecialLw,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialLw,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_SpecialAirLwStart_ProcUpdate,			// Proc Update
		NULL,											// Proc Interrupt
		NULL,											// Proc Physics
		ftKirby_SpecialAirLwStart_ProcMap				// Proc Map
	},

	// Status 265 (0x109): SpecialAirLwHold
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_SpecialAirLwHold,				// Script ID
		ftMotion_AttackIndex_SpecialLw,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialLw,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_SpecialAirLwHold_ProcUpdate,			// Proc Update
		NULL,											// Proc Interrupt
		NULL,											// Proc Physics
		ftKirby_SpecialAirLwHold_ProcMap				// Proc Map
	},

	// Status 266 (0x10A): SpecialAirLwLanding
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_SpecialAirLwLanding,				// Script ID
		ftMotion_AttackIndex_SpecialLw,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialLw,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_SpecialLwHold_ProcUpdate,				// Proc Update
		NULL,											// Proc Interrupt
		ftKirby_SpecialLwHold_ProcPhysics,				// Proc Physics
		ftKirby_SpecialLwHold_ProcMap					// Proc Map
	},

	// Status 267 (0x10B): SpecialAirLwFall
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_SpecialAirLwFall,				// Script ID
		ftMotion_AttackIndex_SpecialLw,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialLw,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftKirby_SpecialAirLwFall_ProcUpdate,			// Proc Update
		NULL,											// Proc Interrupt
		NULL,											// Proc Physics
		ftKirby_SpecialAirLwHold_ProcMap				// Proc Map
	},

	// Status 268 (0x10C): SpecialAirLwEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Kirby_SpecialAirLwEnd,					// Script ID
		ftMotion_AttackIndex_SpecialLw,					// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,												// ??? (Might be 3 individual bits?)
		FALSE,											// Is Smash attack?
		GA_Air,											// Grounded or aerial attack?
		FALSE,											// Is Special attack?
		ftStatus_AttackIndex_SpecialLw,					// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftStatus_IfAnimEnd_SetStatusFall,				// Proc Update
		NULL,											// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,					// Proc Physics
		jtgt_ovl2_800DE934								// Proc Map
	},

	// Left off at: 0x8012AAD4
};

#endif