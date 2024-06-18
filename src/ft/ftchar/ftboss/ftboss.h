#ifndef _FTMASTERHAND_H_
#define _FTMASTERHAND_H_

#include <ft/fttypes.h>

#include "ftbossfunctions.h"

#define FTMASTERHAND_ATTACK_WAIT_MAX 120				// Master Hand will wait at most this many frames before initiating his next attack
#define FTMASTERHAND_ATTACK_WAIT_LEVEL_DIV 100			// Divide this value by CPU level

#define FTMASTERHAND_HARAU_VEL_X 50.0F					// Velocity of sweep ("shooing") attack?

#define FTMASTERHAND_OKUHIKOUKI_VEL_ADD 40.0F	

extern ftStatusDesc dFTBossSpecialStatusDesc[/* */];

extern void *gFTDataBossMain;
extern void *gFTDataBossBattleMotion;
extern void *gFTDataBossModel;
extern u32 gFTDataBossParticleBankID;

typedef enum ftBossMotion
{
	ftMotion_MasterHand_Default = ftMotion_Common_SpecialStart,
	ftMotion_MasterHand_Hippataku,	// Horizontal slap
	ftMotion_MasterHand_Harau,		// Sweep
	ftMotion_MasterHand_Okuhikouki1,
	ftMotion_MasterHand_Okuhikouki2,
	ftMotion_MasterHand_Okuhikouki3,
	ftMotion_MasterHand_Walk,
	ftMotion_MasterHand_WalkLoop,
	ftMotion_MasterHand_WalkWait,
	ftMotion_MasterHand_WalkShoot,	// Finger walk hit
	ftMotion_MasterHand_GootsubusuUp,	// Fist slam 
	ftMotion_MasterHand_GootsubusuWait,
	ftMotion_MasterHand_GootsubusuEnd,
	ftMotion_MasterHand_GootsubusuDown,
	ftMotion_MasterHand_Tsutsuku1,	// Pointer poke
	ftMotion_MasterHand_Tsutsuku3,
	ftMotion_MasterHand_Tsutsuku2,
	ftMotion_MasterHand_Drill,
	ftMotion_MasterHand_Okukouki,
	ftMotion_MasterHand_Yubideppou1, // Finger gun
	ftMotion_MasterHand_Yubideppou3,
	ftMotion_MasterHand_Yubideppou2,
	ftMotion_MasterHand_Okupunch1,	// Fist rocket
	ftMotion_MasterHand_Okupunch2,
	ftMotion_MasterHand_Okupunch3,
	ftMotion_MasterHand_Okutsubushi, // Vertical hand slap
	ftMotion_MasterHand_DeadLeft,
	ftMotion_MasterHand_DeadCenter,
	ftMotion_MasterHand_DeadRight,
	ftMotion_MasterHand_Appear

} ftBossMotion;

typedef enum ftBossStatus
{
	ftStatus_MasterHand_Default = ftStatus_Common_SpecialStart,
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
	ftStatus_MasterHand_GootsubusuUp,	// Fist slam 
	ftStatus_MasterHand_GootsubusuWait,
	ftStatus_MasterHand_GootsubusuEnd,
	ftStatus_MasterHand_GootsubusuDown,
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
	ftStatus_MasterHand_DeadLeft,
	ftStatus_MasterHand_DeadCenter,
	ftStatus_MasterHand_DeadRight,
	ftStatus_MasterHand_Appear

} ftBossStatus;

typedef struct ftBossRandom
{
	u8 r1, r2;

} ftBossRandom;

typedef struct ftBossInfo
{
    GObj *target_gobj; // (Fighter) GObj pointer of Master Hand's target
    s32 current_line_id;
    s32 default_line_id;
    f32 wait_div;
    u32 wait_timer; // Wait this many frames until next attack
    s8 status_index;
    u8 status_index_random;
    u8 status_index_guard; // Struct probably ends here

} ftBossInfo;

typedef struct ftBoss_FighterVars
{
    ftBossInfo *boss, s;

} ftBoss_FighterVars;

typedef struct ftBoss_Wait_StatusVars
{
    Vec3f pos;

} ftBoss_Wait_StatusVars;

typedef struct ftBoss_Move_StatusVars
{
    void (*proc_setstatus)(GObj*);
    Vec3f vel;
    f32 magnitude;

} ftBoss_Move_StatusVars;

typedef struct ftBoss_Okhuikouki_StatusVars
{
    Vec3f pos;

} ftBoss_Okuhikouki_StatusVars;

typedef struct ftBoss_Gootsubusu_StatusVars
{
    s16 wait_timer;
    f32 edgeleft_pos_x;
    f32 edgeright_pos_x;

} ftBoss_Gootsubusu_StatusVars;

typedef struct ftBoss_Tsutsuku_StatusVars
{
    s16 wait_timer;

} ftBoss_Tsutsuku_StatusVars;

typedef struct ftBoss_Drill_StatusVars
{
    s16 follow_timer; // Follow player for this many frames?
    f32 edgeleft_pos_x;
    f32 edgeright_pos_x;

} ftBoss_Drill_StatusVars;

typedef struct ftBoss_Yubideppou_StatusVars
{
    s16 wait_timer;
    s16 bullet_count;
    u8 shoot_timer;

} ftBoss_Yubideppou_StatusVars;

typedef struct ftBoss_Okupunch_StatusVars
{
    Vec3f pos;

} ftBoss_Okupunch_StatusVars;

typedef struct ftBoss_Okutsubushi_StatusVars
{
    Vec3f pos;
    u16 follow_timer;

} ftBoss_Okutsubushi_StatusVars;

typedef struct ftBoss_Dead_StatusVars
{
    s16 dead_timer;

} ftBoss_Dead_StatusVars;

typedef union ftBoss_StatusVars
{
    ftBoss_Wait_StatusVars wait;
    ftBoss_Move_StatusVars move;
    ftBoss_Okuhikouki_StatusVars okuhikouki;
    ftBoss_Gootsubusu_StatusVars gootsubu;
    ftBoss_Drill_StatusVars drill;
    ftBoss_Yubideppou_StatusVars yubideppou;
    ftBoss_Okupunch_StatusVars okupunch;
    ftBoss_Okutsubushi_StatusVars okutsubushi;
    ftBoss_Dead_StatusVars dead;

} ftBoss_StatusVars;

#endif
