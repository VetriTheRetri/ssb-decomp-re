#ifndef _FTBOSS_H_
#define _FTBOSS_H_

#include "ftbossfunctions.h"

#define FTBOSS_ATTACK_WAIT_MAX 120				// Master Hand will wait at most this many frames before initiating his next attack
#define FTBOSS_ATTACK_WAIT_LEVEL_DIV 100			// Divide this value by CPU level

#define FTBOSS_HARAU_VEL_X 50.0F					// Velocity of sweep ("shooing") attack?

#define FTBOSS_OKUHIKOUKI_VEL_ADD 40.0F	

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
	ftStatus_Boss_Default = ftStatus_Common_SpecialStart,
	ftStatus_Boss_Wait,
	ftStatus_Boss_Move,
	ftStatus_Boss_Hippataku,	// Horizontal slap
	ftStatus_Boss_Harau,		// Sweep
	ftStatus_Boss_Okuhikouki1,
	ftStatus_Boss_Okuhikouki2,
	ftStatus_Boss_Okuhikouki3,
	ftStatus_Boss_Walk,
	ftStatus_Boss_WalkLoop,
	ftStatus_Boss_WalkWait,
	ftStatus_Boss_WalkShoot,	// Finger walk hit
	ftStatus_Boss_GootsubusuUp,	// Fist slam 
	ftStatus_Boss_GootsubusuWait,
	ftStatus_Boss_GootsubusuEnd,
	ftStatus_Boss_GootsubusuDown,
	ftStatus_Boss_Tsutsuku1,	// Pointer poke
	ftStatus_Boss_Tsutsuku3,
	ftStatus_Boss_Tsutsuku2,
	ftStatus_Boss_Drill,
	ftStatus_Boss_Okukouki,
	ftStatus_Boss_Yubideppou1, // Finger gun
	ftStatus_Boss_Yubideppou3,
	ftStatus_Boss_Yubideppou2,
	ftStatus_Boss_Okupunch1,	// Fist rocket
	ftStatus_Boss_Okupunch2,
	ftStatus_Boss_Okupunch3,
	ftStatus_Boss_Okutsubushi, // Vertical hand slap
	ftStatus_Boss_OkutsubushiStart,
	ftStatus_Boss_DeadLeft,
	ftStatus_Boss_DeadCenter,
	ftStatus_Boss_DeadRight,
	ftStatus_Boss_Appear

} ftBossStatus;

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

typedef struct ftBossFighterVars
{
    ftBossInfo *p, s;

} ftBossFighterVars;

typedef struct ftBoss_WaitStatusVars
{
    Vec3f pos;

} ftBoss_WaitStatusVars;

typedef struct ftBoss_MoveStatusVars
{
    void (*proc_setstatus)(GObj*);
    Vec3f vel;
    f32 magnitude;

} ftBoss_MoveStatusVars;

typedef struct ftBoss_OkhuikoukiStatusVars
{
    Vec3f pos;

} ftBoss_OkuhikoukiStatusVars;

typedef struct ftBoss_GootsubusuStatusVars
{
    s16 wait_timer;
    f32 edgeleft_pos_x;
    f32 edgeright_pos_x;

} ftBoss_GootsubusuStatusVars;

typedef struct ftBoss_TsutsukuStatusVars
{
    s16 wait_timer;

} ftBoss_TsutsukuStatusVars;

typedef struct ftBoss_DrillStatusVars
{
    s16 follow_timer; // Follow player for this many frames?
    f32 edgeleft_pos_x;
    f32 edgeright_pos_x;

} ftBoss_DrillStatusVars;

typedef struct ftBoss_YubideppouStatusVars
{
    s16 wait_timer;
    s16 bullet_count;
    u8 shoot_timer;

} ftBoss_YubideppouStatusVars;

typedef struct ftBoss_OkupunchStatusVars
{
    Vec3f pos;

} ftBoss_OkupunchStatusVars;

typedef struct ftBoss_OkutsubushiStatusVars
{
    Vec3f pos;
    u16 follow_timer;

} ftBoss_OkutsubushiStatusVars;

typedef struct ftBoss_DeadStatusVars
{
    s16 dead_timer;

} ftBoss_DeadStatusVars;

typedef union ftBossStatusVars
{
    ftBoss_WaitStatusVars wait;
    ftBoss_MoveStatusVars move;
    ftBoss_OkuhikoukiStatusVars okuhikouki;
    ftBoss_GootsubusuStatusVars gootsubu;
	ftBoss_TsutsukuStatusVars tsutsuku;
    ftBoss_DrillStatusVars drill;
    ftBoss_YubideppouStatusVars yubideppou;
    ftBoss_OkupunchStatusVars okupunch;
    ftBoss_OkutsubushiStatusVars okutsubushi;
    ftBoss_DeadStatusVars dead;

} ftBossStatusVars;

#endif
