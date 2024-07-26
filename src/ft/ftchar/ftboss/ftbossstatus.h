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
		ftBossDefault_ProcInterrupt,		// Proc Interrupt
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
		ftBossWait_ProcInterrupt,		// Proc Interrupt
		ftBossWait_ProcPhysics,			// Proc Physics
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
		ftBossMove_ProcPhysics,			// Proc Physics
		ftBossMove_ProcMap				// Proc Map
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
		ftBossHippataku_ProcUpdate,		// Proc Update
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
		ftBossHarau_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftBossHarau_ProcPhysics,			// Proc Physics
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
		ftBossOkuhikouki1_ProcUpdate,	// Proc Update
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
		ftBossOkuhikouki2_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftBossOkuhikouki2_ProcPhysics,	// Proc Physics
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
		ftBossOkuhikouki3_ProcUpdate,	// Proc Update
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
		ftBossWalk_ProcUpdate,			// Proc Update
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
		ftBossWalkLoop_ProcPhysics,		// Proc Physics
		ftBossWalkLoop_ProcMap			// Proc Map
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
		ftBossWalkWait_ProcUpdate,		// Proc Update
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
		ftBossWalkShoot_ProcUpdate,		// Proc Update
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
		ftBossGootsubusuUp_ProcPhysics,	// Proc Physics
		ftBossGootsubusuUp_ProcMap		// Proc Map
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
		ftBossGootsubusuWait_ProcPhysics,// Proc Physics
		ftBossGootsubusuWait_ProcMap		// Proc Map
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
		ftBossGootsubusuEnd_ProcUpdate,	// Proc Update
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
		ftBossGootsubusuDown_ProcMap		// Proc Map
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
		ftBossTsutsuku1_ProcUpdate,		// Proc Update
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
		ftBossTsutsuku3_ProcUpdate,		// Proc Update
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
		ftBossTsutsuku2_ProcPhysics,		// Proc Physics
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
		ftBossDrill_ProcUpdate,			// Proc Update
		NULL,									// Proc Interrupt
		ftBossDrill_ProcPhysics,			// Proc Physics
		ftBossDrill_ProcMap				// Proc Map
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
		ftBossOkukouki_ProcUpdate,		// Proc Update
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
		ftBossYubideppou1_ProcUpdate,	// Proc Update
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
		ftBossYubideppou3_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftBossYubideppou3_ProcPhysics,	// Proc Physics
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
		ftBossYubideppou2_ProcPhysics,	// Proc Physics
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
		ftBossOkupunch1_ProcUpdate,		// Proc Update
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
		ftBossOkupunch2_ProcUpdate,		// Proc Update
		NULL,									// Proc Interrupt
		ftBossOkupunch2_ProcPhysics,		// Proc Physics
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
		ftBossOkupunch3_ProcUpdate,		// Proc Update
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
		ftBossOkutsubushi_ProcUpdate,	// Proc Update
		NULL,									// Proc Interrupt
		ftBossOkutsubushi_ProcPhysics,	// Proc Physics
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
		ftBossOkutsubushiStart_ProcUpdate,// Proc Update
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
		ftBossDeadLeft_ProcUpdate,		// Proc Update
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
		ftBossDeadCenter_ProcPhysics,	// Proc Physics
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
		ftBossDeadLeft_ProcUpdate,		// Proc Update
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
		ftBossAppear_ProcPhysics,		// Proc Physics
		ftMap_UpdateProjectGroundID				// Proc Map
	}
};

#endif