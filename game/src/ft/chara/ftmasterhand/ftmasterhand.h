#ifndef _FTMASTERHAND_H_
#define _FTMASTERHAND_H_

#include <ft/fttypes.h>

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

typedef struct ftMasterHand_FighterVars
{
    ftBossInfo *boss;
    ftBossInfo s;

} ftMasterHand_FighterVars;

typedef struct ftMasterHand_Wait_StatusVars
{
    Vec3f pos;

} ftMasterHand_Wait_StatusVars;

typedef struct ftMasterHand_Move_StatusVars
{
    void (*proc_setstatus)(GObj*);
    Vec3f vel;
    f32 magnitude;

} ftMasterHand_Move_StatusVars;

typedef struct ftMasterHand_Okhuikouki_StatusVars
{
    Vec3f pos;

} ftMasterHand_Okuhikouki_StatusVars;

typedef struct ftMasterHand_Gootsubu_StatusVars
{
    s16 wait_timer;
    f32 edgeleft_pos_x;
    f32 edgeright_pos_x;

} ftMasterHand_Gootsubu_StatusVars;

typedef struct ftMasterHand_Tsutsuku_StatusVars
{
    s16 wait_timer;

} ftMasterHand_Tsutsuku_StatusVars;

typedef struct ftMasterHand_Drill_StatusVars
{
    s16 follow_timer; // Follow player for this many frames?
    f32 edgeleft_pos_x;
    f32 edgeright_pos_x;

} ftMasterHand_Drill_StatusVars;

typedef struct ftMasterHand_Yubideppou_StatusVars
{
    s16 wait_timer;
    s16 bullet_count;
    u8 shoot_timer;

} ftMasterHand_Yubideppou_StatusVars;

typedef struct ftMasterHand_Okupunch_StatusVars
{
    Vec3f pos;

} ftMasterHand_Okupunch_StatusVars;

typedef struct ftMasterHand_Okutsubushi_StatusVars
{
    Vec3f pos;
    u16 follow_timer;

} ftMasterHand_Okutsubushi_StatusVars;

typedef struct ftMasterHand_Dead_StatusVars
{
    s16 dead_timer;

} ftMasterHand_Dead_StatusVars;

typedef union ftMasterHand_StatusVars
{
    ftMasterHand_Wait_StatusVars wait;
    ftMasterHand_Move_StatusVars move;
    ftMasterHand_Okuhikouki_StatusVars okuhikouki;
    ftMasterHand_Gootsubu_StatusVars gootsubu;
    ftMasterHand_Drill_StatusVars drill;
    ftMasterHand_Yubideppou_StatusVars yubideppou;
    ftMasterHand_Okupunch_StatusVars okupunch;
    ftMasterHand_Okutsubushi_StatusVars okutsubushi;
    ftMasterHand_Dead_StatusVars dead;

} ftMasterHand_StatusVars;

#endif