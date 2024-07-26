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
	nFTBossMotionDefault = nFTCommonMotionSpecialStart,
	nFTBossMotionHippataku,	// Horizontal slap
	nFTBossMotionHarau,		// Sweep
	nFTBossMotionOkuhikouki1,
	nFTBossMotionOkuhikouki2,
	nFTBossMotionOkuhikouki3,
	nFTBossMotionWalk,
	nFTBossMotionWalkLoop,
	nFTBossMotionWalkWait,
	nFTBossMotionWalkShoot,	// Finger walk hit
	nFTBossMotionGootsubusuUp,	// Fist slam 
	nFTBossMotionGootsubusuWait,
	nFTBossMotionGootsubusuEnd,
	nFTBossMotionGootsubusuDown,
	nFTBossMotionTsutsuku1,	// Pointer poke
	nFTBossMotionTsutsuku3,
	nFTBossMotionTsutsuku2,
	nFTBossMotionDrill,
	nFTBossMotionOkukouki,
	nFTBossMotionYubideppou1, // Finger gun
	nFTBossMotionYubideppou3,
	nFTBossMotionYubideppou2,
	nFTBossMotionOkupunch1,	// Fist rocket
	nFTBossMotionOkupunch2,
	nFTBossMotionOkupunch3,
	nFTBossMotionOkutsubushi, // Vertical hand slap
	nFTBossMotionDeadLeft,
	nFTBossMotionDeadCenter,
	nFTBossMotionDeadRight,
	nFTBossMotionAppear

} ftBossMotion;

typedef enum ftBossStatus
{
	nFTBossStatusDefault = nFTCommonStatusSpecialStart,
	nFTBossStatusWait,
	nFTBossStatusMove,
	nFTBossStatusHippataku,	// Horizontal slap
	nFTBossStatusHarau,		// Sweep
	nFTBossStatusOkuhikouki1,
	nFTBossStatusOkuhikouki2,
	nFTBossStatusOkuhikouki3,
	nFTBossStatusWalk,
	nFTBossStatusWalkLoop,
	nFTBossStatusWalkWait,
	nFTBossStatusWalkShoot,	// Finger walk hit
	nFTBossStatusGootsubusuUp,	// Fist slam 
	nFTBossStatusGootsubusuWait,
	nFTBossStatusGootsubusuEnd,
	nFTBossStatusGootsubusuDown,
	nFTBossStatusTsutsuku1,	// Pointer poke
	nFTBossStatusTsutsuku3,
	nFTBossStatusTsutsuku2,
	nFTBossStatusDrill,
	nFTBossStatusOkukouki,
	nFTBossStatusYubideppou1, // Finger gun
	nFTBossStatusYubideppou3,
	nFTBossStatusYubideppou2,
	nFTBossStatusOkupunch1,	// Fist rocket
	nFTBossStatusOkupunch2,
	nFTBossStatusOkupunch3,
	nFTBossStatusOkutsubushi, // Vertical hand slap
	nFTBossStatusOkutsubushiStart,
	nFTBossStatusDeadLeft,
	nFTBossStatusDeadCenter,
	nFTBossStatusDeadRight,
	nFTBossStatusAppear

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
