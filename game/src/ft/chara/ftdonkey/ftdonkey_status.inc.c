#ifndef _FTDONKEY_STATUS_INC_C_
#define _FTDONKEY_STATUS_INC_C_

#include <ft/fttypes.h>

// 0x80129FBC
ftStatusDesc ftStatus_SpecialDesc_Donkey[/* */] =
{
	// Status 220 (0xDC): AppearR
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_AppearR,				// Script ID
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
		ftMotion_Donkey_AppearL,				// Script ID
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
		ftMotion_Donkey_SpecialNStart,			// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_SpecialNStart_ProcUpdate,		// Proc Update
		ftDonkey_SpecialNStart_ProcInterrupt,	// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftDonkey_SpecialNStart_ProcMap			// Proc Map
	},

	// Status 223 (0xDF): SpecialAirNStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_SpecialAirNStart,		// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_SpecialAirNStart_ProcUpdate,	// Proc Update
		ftDonkey_SpecialNStart_ProcInterrupt,	// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,			// Proc Physics
		ftDonkey_SpecialAirNStart_ProcMap		// Proc Map
	},

	// Status 224 (0xE0): SpecialNLoop
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_SpecialNLoop,			// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_SpecialNLoop_ProcUpdate,		// Proc Update
		ftDonkey_SpecialNLoop_ProcInterrupt,	// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftDonkey_SpecialNLoop_ProcMap			// Proc Map
	},

	// Status 225 (0xE1): SpecialAirNLoop
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_SpecialAirNLoop,		// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_SpecialNLoop_ProcUpdate,		// Proc Update
		ftDonkey_SpecialNLoop_ProcInterrupt,	// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,			// Proc Physics
		ftDonkey_SpecialAirNLoop_ProcMap		// Proc Map
	},

	// Status 226 (0xE2): SpecialNEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_SpecialNEnd,			// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_SpecialNEnd_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftMap_CheckGroundStopEdgeFall			// Proc Map
	},

	// Status 227 (0xE3): SpecialAirNEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_SpecialAirNEnd,			// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_SpecialNEnd_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,			// Proc Physics
		ftDonkey_SpecialAirNEnd_ProcMap			// Proc Map
	},

	// Status 228 (0xE4): SpecialNFull
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_SpecialNFull,			// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_SpecialNEnd_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftMap_CheckGroundStopEdgeFall			// Proc Map
	},

	// Status 229 (0xE5): SpecialAirNFull
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_SpecialAirNFull,		// Script ID
		ftMotion_AttackIndex_SpecialN,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialN,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_SpecialNEnd_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelFriction,			// Proc Physics
		ftDonkey_SpecialAirNEnd_ProcMap			// Proc Map
	},

	// Status 230 (0xE6): SpecialHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_SpecialHi,				// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_SpecialHi_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftDonkey_SpecialHi_ProcPhysics,			// Proc Physics
		ftDonkey_SpecialHi_ProcMap				// Proc Map
	},

	// Status 231 (0xE7): SpecialAirHi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_SpecialAirHi,			// Script ID
		ftMotion_AttackIndex_SpecialHi,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Air,									// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialHi,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_SpecialAirHi_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftDonkey_SpecialAirHi_ProcPhysics,		// Proc Physics
		ftDonkey_SpecialAirHi_ProcMap			// Proc Map
	},

	// Status 232 (0xE8): SpecialLwStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_SpecialLwStart,			// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_SpecialLwStart_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftMap_CheckGroundStopEdgeFall			// Proc Map
	},

	// Status 233 (0xE9): SpecialLwLoop
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_SpecialLwLoop,			// Script ID
		ftMotion_AttackIndex_SpecialLw,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_SpecialLw,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_SpecialLwLoop_ProcUpdate,		// Proc Update
		ftDonkey_SpecialLwLoop_ProcInterrupt,	// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftMap_CheckGroundStopEdgeFall			// Proc Map
	},

	// Status 234 (0xEA): SpecialLwEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_SpecialLwEnd,			// Script ID
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
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftMap_CheckGroundStopEdgeFall			// Proc Map
	},

	// Status 235 (0xEB): ThrowFWait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_ThrowFWait,				// Script ID
		ftMotion_AttackIndex_ThrowF,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ThrowF,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftDonkey_ThrowFWait_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftDonkey_ThrowFCommon_ProcMap			// Proc Map
	},

	// Status 236 (0xEC): ThrowFWalkSlow
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_ThrowFWalkSlow,			// Script ID
		ftMotion_AttackIndex_ThrowF,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ThrowF,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftDonkey_ThrowFWalk_ProcInterrupt,		// Proc Interrupt
		ftCommon_Walk_ProcPhysics,				// Proc Physics
		ftDonkey_ThrowFCommon_ProcMap			// Proc Map
	},

	// Status 237 (0xED): ThrowFWalkMiddle
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_ThrowFWalkMiddle,		// Script ID
		ftMotion_AttackIndex_ThrowF,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ThrowF,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftDonkey_ThrowFWalk_ProcInterrupt,		// Proc Interrupt
		ftCommon_Walk_ProcPhysics,				// Proc Physics
		ftDonkey_ThrowFCommon_ProcMap			// Proc Map
	},

	// Status 238 (0xEE): ThrowFWalkFast
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_ThrowFWalkFast,			// Script ID
		ftMotion_AttackIndex_ThrowF,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ThrowF,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftDonkey_ThrowFWalk_ProcInterrupt,		// Proc Interrupt
		ftCommon_Walk_ProcPhysics,				// Proc Physics
		ftDonkey_ThrowFCommon_ProcMap			// Proc Map
	},

	// Status 239 (0xEF): ThrowFTurn
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_ThrowFTurn,				// Script ID
		ftMotion_AttackIndex_ThrowF,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ThrowF,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_ThrowFTurn_ProcUpdate,			// Proc Update
		ftDonkey_ThrowFTurn_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftDonkey_ThrowFCommon_ProcMap			// Proc Map
	},

	// Status 240 (0xF0): ThrowFKneeBend
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_ThrowFKneeBend,			// Script ID
		ftMotion_AttackIndex_ThrowF,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ThrowF,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_ThrowFKneeBend_ProcUpdate,		// Proc Update
		ftDonkey_ThrowFKneeBend_ProcInterrupt,	// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftDonkey_ThrowFCommon_ProcMap			// Proc Map
	},

	// Status 241 (0xF1): ThrowFFall
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_ThrowFFall,				// Script ID
		ftMotion_AttackIndex_ThrowF,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ThrowF,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftDonkey_ThrowFFall_ProcInterrupt,		// Proc Interrupt
		ftPhysics_ApplyAirVelDriftFastFall,		// Proc Physics
		ftDonkey_ThrowFFall_ProcMap				// Proc Map
	},

	// Status 242 (0xF2): ThrowFLanding
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_ThrowFLanding,			// Script ID
		ftMotion_AttackIndex_ThrowF,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ThrowF,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_ThrowFLanding_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftDonkey_ThrowFCommon_ProcMap			// Proc Map
	},

	// Status 243 (0xF3): ThrowFDamage
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_ThrowFDamage,			// Script ID
		ftMotion_AttackIndex_ThrowF,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ThrowF,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_ThrowFDamage_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_DamageCommon_ProcPhysics,		// Proc Physics
		ftMap_UpdateFighterGroundOrAir			// Proc Map
	},

	// Status 244 (0xF4): ThrowFF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_ThrowFF,				// Script ID
		ftMotion_AttackIndex_ThrowF,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ThrowF,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_ThrowFF_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyGroundVelFriction,		// Proc Physics
		ftDonkey_ThrowFF_ProcMap				// Proc Map
	},

	// Status 245 (0xF5): ThrowAirFF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Donkey_ThrowAirFF,				// Script ID
		ftMotion_AttackIndex_ThrowF,			// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ThrowF,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftDonkey_ThrowFF_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelDrift,				// Proc Physics
		ftDonkey_ThrowAirFF_ProcMap				// Proc Map
	},

	// Status 246 (0xF6): HeavyThrowF
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HeavyThrowF,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_ItemThrow_ProcPhysics,			// Proc Physics
		ftMap_UpdateFighterGroundOrAir			// Proc Map
	},

	// Status 247 (0xF7): HeavyThrowB
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HeavyThrowB,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_ItemThrow_ProcPhysics,			// Proc Physics
		ftMap_UpdateFighterGroundOrAir			// Proc Map
	},

	// Status 248 (0xF8): HeavyThrowF4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HeavyThrowF4,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_ItemThrow_ProcPhysics,			// Proc Physics
		ftMap_UpdateFighterGroundOrAir			// Proc Map
	},

	// Status 249 (0xF9): HeavyThrowB4
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_Common_HeavyThrowB4,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		TRUE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is projectile?
		ftStatus_AttackIndex_ItemThrow,			// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_ItemThrow_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftCommon_ItemThrow_ProcPhysics,			// Proc Physics
		ftMap_UpdateFighterGroundOrAir			// Proc Map
	}
};

#endif