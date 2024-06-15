#ifndef _FIGHTER_H_
#define _FIGHTER_H_

#include "fttypes.h"
#include "ftfunctions.h"

// Globals

// 80130D6C
extern s32 g1PGameTotalDamageTaken; // 1P Game / Bonus damage total?

extern sb32 gFTMainIsHurtDetect[4];
extern sb32 gFTMainIsHitDetect[4];

extern s32 gFighterHitLogIndex;
extern ftHitCollisionLog gFighterHitLogTable[/* */];

// Data - 0x80116DD0
extern ftCreateDesc dFTDefaultFighterDesc;
extern f32 dFTMainMapSurfaceFrictions[/* */];
extern ftData *dFTManagerDataFiles[/* */];

#define ftGetStruct(fighter_gobj) ((ftStruct*)(fighter_gobj)->user_data.p)

#define ftSetupDropItem(fp)                                                                                            \
	{                                                                                                                  \
		Vec3f vel;                                                                                                     \
                                                                                                                       \
		vel.x = vel.y = vel.z = 0.0F;                                                                                  \
                                                                                                                       \
		itMain_SetFighterDrop((fp)->item_hold, &vel, 1.0F);                                                            \
	}

#define ftExplainCommandCast(input_seq, type) ((type*)(input_seq))

#define ftExplainGetCpButtons(input_seq) (*(ftExplainCommandCast((input_seq), u16)))

#define ftExplainGetCpStickRange(input_seq) (ftExplainCommandCast((input_seq), Vec2b))

// Macro to check if a move has been interrupted by any standard action
#define ftCheckInterruptAll(fighter_gobj)                                                                              \
	((ftCommonSpecialNCheckInterruptCommon(fighter_gobj) != FALSE)                                                   \
	 || (ftCommonSpecialHiCheckInterruptCommon(fighter_gobj) != FALSE)                                               \
	 || (ftCommonSpecialLwCheckInterruptCommon(fighter_gobj) != FALSE)                                               \
	 || (ftCommon_Catch_CheckInterruptCommon(fighter_gobj) != FALSE)                                                   \
	 || (ftCommon_AttackS4_CheckInterruptCommon(fighter_gobj) != FALSE)                                                \
	 || (ftCommon_AttackHi4_CheckInterruptCommon(fighter_gobj) != FALSE)                                               \
	 || (ftCommon_AttackLw4_CheckInterruptCommon(fighter_gobj) != FALSE)                                               \
	 || (ftCommon_AttackS3_CheckInterruptCommon(fighter_gobj) != FALSE)                                                \
	 || (ftCommon_AttackHi3_CheckInterruptCommon(fighter_gobj) != FALSE)                                               \
	 || (ftCommon_AttackLw3_CheckInterruptCommon(fighter_gobj) != FALSE)                                               \
	 || (ftCommon_Attack1_CheckInterruptCommon(fighter_gobj) != FALSE)                                                 \
	 || (ftCommon_GuardOn_CheckInterruptCommon(fighter_gobj) != FALSE)                                                 \
	 || (ftCommon_Appeal_CheckInterruptCommon(fighter_gobj) != FALSE)                                                  \
	 || (ftCommon_KneeBend_CheckInterruptCommon(fighter_gobj) != FALSE)                                                \
	 || (ftCommon_Dash_CheckInterruptCommon(fighter_gobj) != FALSE)                                                    \
	 || (ftCommon_Pass_CheckInterruptCommon(fighter_gobj) != FALSE)                                                    \
	 || (ftCommon_DokanStart_CheckInterruptCommon(fighter_gobj) != FALSE)                                              \
	 || (ftCommon_Squat_CheckInterruptCommon(fighter_gobj) != FALSE)                                                   \
	 || (ftCommon_Turn_CheckInterruptCommon(fighter_gobj) != FALSE)                                                    \
	 || (ftCommon_Walk_CheckInterruptCommon(fighter_gobj) != FALSE))

#define AttributesGetStruct(fp) ((ftAttributes*)fp->attributes)

#define FighterGetJoint(fp, id) ((DObj*)fp->joint[id])

#define FighterCalcLandingLag(anim_length, target_length) ((f32)anim_length / target_length)

#endif
