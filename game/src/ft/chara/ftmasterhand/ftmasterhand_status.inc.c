#ifndef _FTMASTERHAND_STATUS_INC_C_
#define _FTMASTERHAND_STATUS_INC_C_

#include <ft/fttypes.h>

// 0x8012B4AC
ftStatusDesc ftStatus_SpecialDesc_MasterHand[/* */] =
{
	// Status 220 (0xDC): Unk
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Default,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftMasterHand_Default_ProcInterrupt,		// Proc Interrupt
		NULL,									// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 221 (0xDD): Wait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Default,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftMasterHand_Wait_ProcInterrupt,		// Proc Interrupt
		ftMasterHand_Wait_ProcPhysics,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 222 (0xDE): Move
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Default,			// Script ID
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
		ftMasterHand_Move_ProcPhysics,			// Proc Physics
		ftMasterHand_Move_ProcMap				// Proc Map
	},

	// Status 223 (0xDF): Hippataku
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Hippataku,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Hippataku_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 224 (0xE0): Harau
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Harau,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Harau_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftMasterHand_Harau_ProcPhysics,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 225 (0xE1): Okuhikouki1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Okuhikouki1,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Okuhikouki1_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 226 (0xE2): Okuhikouki2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Okuhikouki2,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Okuhikouki2_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftMasterHand_Okuhikouki2_ProcPhysics,	// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 227 (0xE3): Okuhikouki3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Okuhikouki3,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Okuhikouki3_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 228 (0xE4): Walk
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Walk,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Walk_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		NULL									// Proc Map
	},

	// Status 229 (0xE5): WalkLoop
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_WalkLoop,			// Script ID
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
		ftMasterHand_WalkLoop_ProcPhysics,		// Proc Physics
		ftMasterHand_WalkLoop_ProcMap			// Proc Map
	},

	// Status 230 (0xE6): WalkWait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_WalkWait,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_WalkWait_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 231 (0xE7): WalkShoot
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_WalkShoot,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_WalkShoot_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 232 (0xE8): GootsubusuUp
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_GootsubusuUp,		// Script ID
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
		ftMasterHand_GootsubusuUp_ProcPhysics,	// Proc Physics
		ftMasterHand_GootsubusuUp_ProcMap		// Proc Map
	},

	// Status 233 (0xE9): GootsubusuWait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_GootsubusuWait,		// Script ID
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
		ftMasterHand_GootsubusuWait_ProcPhysics,// Proc Physics
		ftMasterHand_GootsubusuWait_ProcMap		// Proc Map
	},

	// Status 234 (0xEA): GootsubusuEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_GootsubusuEnd,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_GootsubusuEnd_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 235 (0xEB): GootsubusuDown
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_GootsubusuDown,		// Script ID
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
		ftMasterHand_GootsubusuDown_ProcMap		// Proc Map
	},

	// Status 236 (0xEC): Tsutsuku1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Tsutsuku1,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Tsutsuku1_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 237 (0xED): Tsutsuku3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Tsutsuku3,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Tsutsuku3_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 238 (0xEE): Tsutsuku2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Tsutsuku2,			// Script ID
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
		ftMasterHand_Tsutsuku2_ProcPhysics,		// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 239 (0xEF): Drill
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Drill,				// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Drill_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftMasterHand_Drill_ProcPhysics,			// Proc Physics
		ftMasterHand_Drill_ProcMap				// Proc Map
	},

	// Status 240 (0xF0): Okukouki
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Okukouki,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Okukouki_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 241 (0xF1): Yubideppou1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Yubideppou1,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Yubideppou1_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 242 (0xF2): Yubideppou3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Yubideppou3,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Yubideppou3_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftMasterHand_Yubideppou3_ProcPhysics,	// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 243 (0xF3): Yubideppou2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Yubideppou2,		// Script ID
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
		ftMasterHand_Yubideppou2_ProcPhysics,	// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 244 (0xF4): Okupunch1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Okupunch1,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Okupunch1_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNYZ,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 245 (0xF5): Okupunch2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Okupunch2,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Okupunch2_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftMasterHand_Okupunch2_ProcPhysics,		// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 246 (0xF6): Okupunch3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Okupunch3,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Okupunch3_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNYZ,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 247 (0xF7): Okutsubushi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Okutsubushi,		// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_Okutsubushi_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftMasterHand_Okutsubushi_ProcPhysics,	// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 248 (0xF8): OkutsubushiStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Okupunch1,			// Script ID - uses Okupunch1???
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_OkutsubushiStart_ProcUpdate,// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNYZ,			// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 249 (0xF9): DeadLeft
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_DeadLeft,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_DeadLeft_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		NULL									// Proc Map
	},

	// Status 250 (0xFA): DeadCenter (0x8012B704)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_DeadCenter,			// Script ID
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
		ftMasterHand_DeadCenter_ProcPhysics,	// Proc Physics
		func_ovl2_800DE348						// Proc Map
	},

	// Status 251 (0xFB): DeadRight
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_DeadRight,			// Script ID
		ftMotion_AttackIndex_None,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		GA_Ground,								// Grounded or aerial attack?
		FALSE,									// Is Special attack?
		ftStatus_AttackIndex_None,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftMasterHand_DeadLeft_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		NULL									// Proc Map
	},

	// Status 252 (0xFC): Appear
	{
		/////////////////////////// Motion Info ////////////////////////////////
		ftMotion_MasterHand_Appear,				// Script ID
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
		ftMasterHand_Appear_ProcPhysics,		// Proc Physics
		func_ovl2_800DE348						// Proc Map
	}
};

#endif