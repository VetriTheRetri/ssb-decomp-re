#ifndef _FTMASTERHAND_H_
#define _FTMASTERHAND_H_

#include <ft/fighter.h>
#include <wp/weapon.h>
#include <gm/gmmatch.h>

#define FTMASTERHAND_ATTACK_WAIT_MAX 120				// Master Hand will wait at most this many frames before initiating his next attack
#define FTMASTERHAND_ATTACK_WAIT_LEVEL_DIV 100			// Divide this value by CPU level

#define FTMASTERHAND_HARAU_VEL_X 50.0F					// Velocity of sweep ("shooing") attack?

#define FTMASTERHAND_OKUHIKOUKI_VEL_ADD 40.0F			

typedef enum ftMasterHandAction
{
	ftStatus_MasterHand_Unk = ftStatus_Common_SpecialStart,
	ftStatus_MasterHand_Wait,
	ftStatus_MasterHand_Move,
	ftStatus_MasterHand_Hippataku,	// Horizontal slap
	ftStatus_MasterHand_Harau,		// Sweep
	ftStatus_MasterHand_Okuhikouki1,
	ftStatus_MasterHand_Okuhikouki2,
	ftStatus_MasterHand_Okuhikouki3,
	ftStatus_MasterHand_Walk,
	ftStatus_MasterHand_WalkLoop,
	ftStatus_MasterHand_WalkWait,
	ftStatus_MasterHand_WalkShoot,	// Finger walk hit
	ftStatus_MasterHand_GootsubuUp,	// Fist slam 
	ftStatus_MasterHand_GootsubuWait,
	ftStatus_MasterHand_GootsubuDown,
	ftStatus_MasterHand_GootsubuLanding,
	ftStatus_MasterHand_Tsutsuku1,	// Pointer poke
	ftStatus_MasterHand_Tsutsuku3,
	ftStatus_MasterHand_Tsutsuku2,
	ftStatus_MasterHand_Drill,
	ftStatus_MasterHand_Okukouki,
	ftStatus_MasterHand_Yubideppou1, // Finger gun
	ftStatus_MasterHand_Yubideppou3,
	ftStatus_MasterHand_Yubideppou2,
	ftStatus_MasterHand_Okupunch1,	// Fist rocket
	ftStatus_MasterHand_Okupunch2,
	ftStatus_MasterHand_Okupunch3,
	ftStatus_MasterHand_Okutsubushi, // Vertical hand slap
	ftStatus_MasterHand_OkutsubushiStart,
	ftStatus_MasterHand_Dead1,
	ftStatus_MasterHand_Dead2,
	ftStatus_MasterHand_Dead3,
	ftStatus_MasterHand_Appear

} ftMasterHandAction;

typedef struct ftMasterHandRandom
{
	u8 r1, r2;

} ftMasterHandRandom;

#endif