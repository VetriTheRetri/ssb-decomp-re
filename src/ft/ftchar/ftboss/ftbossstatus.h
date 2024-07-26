#ifndef _FTBOSS_STATUS_H_
#define _FTBOSS_STATUS_H_

#include <ft/fighter.h>

// 0x8012B4AC
ftStatusDesc dFTBossSpecialStatusDesc[/* */] =
{
	// Status 220 (0xDC): Unk
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionDefault,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftBoss_Default_ProcInterrupt,		// Proc Interrupt
		NULL,									// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 221 (0xDD): Wait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionDefault,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		ftBoss_Wait_ProcInterrupt,		// Proc Interrupt
		ftBoss_Wait_ProcPhysics,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 222 (0xDE): Move
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionDefault,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		NULL,									// Proc Interrupt
		ftBoss_Move_ProcPhysics,			// Proc Physics
		ftBoss_Move_ProcMap				// Proc Map
	},

	// Status 223 (0xDF): Hippataku
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionHippataku,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Hippataku_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 224 (0xE0): Harau
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionHarau,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Harau_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftBoss_Harau_ProcPhysics,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 225 (0xE1): Okuhikouki1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionOkuhikouki1,		// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Okuhikouki1_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 226 (0xE2): Okuhikouki2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionOkuhikouki2,		// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Okuhikouki2_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftBoss_Okuhikouki2_ProcPhysics,	// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 227 (0xE3): Okuhikouki3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionOkuhikouki3,		// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Okuhikouki3_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 228 (0xE4): Walk
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionWalk,				// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Walk_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		NULL									// Proc Map
	},

	// Status 229 (0xE5): WalkLoop
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionWalkLoop,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		NULL,									// Proc Interrupt
		ftBoss_WalkLoop_ProcPhysics,		// Proc Physics
		ftBoss_WalkLoop_ProcMap			// Proc Map
	},

	// Status 230 (0xE6): WalkWait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionWalkWait,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_WalkWait_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 231 (0xE7): WalkShoot
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionWalkShoot,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_WalkShoot_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 232 (0xE8): GootsubusuUp
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionGootsubusuUp,		// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		NULL,									// Proc Interrupt
		ftBoss_GootsubusuUp_ProcPhysics,	// Proc Physics
		ftBoss_GootsubusuUp_ProcMap		// Proc Map
	},

	// Status 233 (0xE9): GootsubusuWait
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionGootsubusuWait,		// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		NULL,									// Proc Interrupt
		ftBoss_GootsubusuWait_ProcPhysics,// Proc Physics
		ftBoss_GootsubusuWait_ProcMap		// Proc Map
	},

	// Status 234 (0xEA): GootsubusuEnd
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionGootsubusuEnd,		// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_GootsubusuEnd_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 235 (0xEB): GootsubusuDown
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionGootsubusuDown,		// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		ftBoss_GootsubusuDown_ProcMap		// Proc Map
	},

	// Status 236 (0xEC): Tsutsuku1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionTsutsuku1,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Tsutsuku1_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 237 (0xED): Tsutsuku3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionTsutsuku3,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Tsutsuku3_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 238 (0xEE): Tsutsuku2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionTsutsuku2,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		NULL,									// Proc Interrupt
		ftBoss_Tsutsuku2_ProcPhysics,		// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 239 (0xEF): Drill
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionDrill,				// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Drill_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftBoss_Drill_ProcPhysics,			// Proc Physics
		ftBoss_Drill_ProcMap				// Proc Map
	},

	// Status 240 (0xF0): Okukouki
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionOkukouki,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Okukouki_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 241 (0xF1): Yubideppou1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionYubideppou1,		// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Yubideppou1_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNAll,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 242 (0xF2): Yubideppou3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionYubideppou3,		// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Yubideppou3_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftBoss_Yubideppou3_ProcPhysics,	// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 243 (0xF3): Yubideppou2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionYubideppou2,		// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		NULL,									// Proc Interrupt
		ftBoss_Yubideppou2_ProcPhysics,	// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 244 (0xF4): Okupunch1
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionOkupunch1,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Okupunch1_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNYZ,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 245 (0xF5): Okupunch2
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionOkupunch2,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Okupunch2_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftBoss_Okupunch2_ProcPhysics,		// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 246 (0xF6): Okupunch3
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionOkupunch3,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Okupunch3_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNYZ,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 247 (0xF7): Okutsubushi
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionOkutsubushi,		// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_Okutsubushi_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftBoss_Okutsubushi_ProcPhysics,	// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 248 (0xF8): OkutsubushiStart
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionOkupunch1,			// Script ID - uses Okupunch1???
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_OkutsubushiStart_ProcUpdate,// Proc Update
		NULL,									// Proc Interrupt
		ftPhysics_ApplyAirVelTransNYZ,			// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 249 (0xF9): DeadLeft
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionDeadLeft,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_DeadLeft_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		NULL									// Proc Map
	},

	// Status 250 (0xFA): DeadCenter (0x8012B704)
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionDeadCenter,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		NULL,									// Proc Update
		NULL,									// Proc Interrupt
		ftBoss_DeadCenter_ProcPhysics,	// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	},

	// Status 251 (0xFB): DeadRight
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionDeadRight,			// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftBoss_DeadLeft_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		NULL,									// Proc Physics
		NULL									// Proc Map
	},

	// Status 252 (0xFC): Appear
	{
		/////////////////////////// Motion Info ////////////////////////////////
		nFTBossMotionAppear,				// Script ID
		nFTMotionAttackIDNone,				// Motion attack ID

		/////////////////////////// Status Info ////////////////////////////////
		0,										// ??? (Might be 3 individual bits?)
		FALSE,									// Is Smash attack?
		nMPKineticsGround,						// Grounded or aerial attack?
		FALSE,									// Is projectile?
		nFTStatusAttackIDNone,				// Status attack ID

		//////////////////////// Process Callbacks /////////////////////////////
		ftCommon_Appear_ProcUpdate,				// Proc Update
		NULL,									// Proc Interrupt
		ftBoss_Appear_ProcPhysics,		// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	}
};

#endif