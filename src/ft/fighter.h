#ifndef _FIGHTER_H_
#define _FIGHTER_H_

#include "fttypes.h"
#include "ftfunctions.h"
#include "ftcommondata.h"

// Globals

// 80130D6C
extern s32 g1PGameTotalDamageTaken; // 1P Game / Bonus damage total?

extern void *gFTManagerCommonFile;

extern sb32 gFTMainIsHurtDetect[4];
extern sb32 gFTMainIsHitDetect[4];

extern s32 gFighterHitLogIndex;
extern ftHitlog gFighterHitLogTable[/* */];

extern u16 gFTManagerMotionCount;
extern u16 gFTManagerStatUpdateCount; // Updated each time an entity's status is changed? e.g. PK Fire pillar increments this twice, desyncing it from gFTManagerMotionCount

// Data - 0x80116DD0
extern ftCreateDesc dFTManagerDefaultFighterDesc;
extern f32 dMPCollisionMaterialFrictions[/* */];
extern ftData *dFTManagerDataFiles[/* */];

extern Gfx dFTRenderMainHurtCollisionCuboidDL[/* */];
extern Gfx dFTRenderMainHitCollisionEdgeDL[/* */];
extern Gfx dFTRenderMainHitCollisionBlendDL[/* */];
extern Gfx dFTRenderMainHitCollisionCubeDL[/* */];
extern Gfx dFTRenderMainMapCollisionBottomDL[/* */];
extern Gfx dFTRenderMainMapCollisionTopDL[/* */];

extern ftOpeningDesc *D_ovl1_80390D20[/* */];
extern ftOpeningDesc D_ovl1_80390BE8;

#define ftGetStruct(fighter_gobj) ((ftStruct*)(fighter_gobj)->user_data.p)

#define ftSetupDropItem(fp)                          	\
{                                                     	\
	Vec3f vel;                                        	\
                                                        \
	vel.x = vel.y = vel.z = 0.0F;                       \
                                                        \
	itMainSetFighterDrop((fp)->item_hold, &vel, 1.0F);	\
}

#define ftExplainCommandCast(input_seq, type) ((type*)(input_seq))

#define ftExplainGetCpButtons(input_seq) (*(ftExplainCommandCast((input_seq), u16)))

#define ftExplainGetCpStickRange(input_seq) (ftExplainCommandCast((input_seq), Vec2b))

#define ftGetComTargetFighter(ft_com) \
((ftStruct*)(ft_com)->target_user)

#define ftGetComTargetWeapon(ft_com) \
((wpStruct*)(ft_com)->target_user)

#define ftGetComTargetItem(ft_com) \
((itStruct*)(ft_com)->target_user)

// Macro to check if a move has been interrupted by any standard action
#define ftCommonGroundCheckInterrupt(fighter_gobj)                    	\
(																		\
	(ftCommonSpecialNCheckInterruptCommon(fighter_gobj) != FALSE)  	|| 	\
	(ftCommonSpecialHiCheckInterruptCommon(fighter_gobj) != FALSE) 	||  \
	(ftCommonSpecialLwCheckInterruptCommon(fighter_gobj) != FALSE) 	||	\
	(ftCommonCatchCheckInterruptCommon(fighter_gobj) != FALSE) 		||  \
	(ftCommonAttackS4CheckInterruptCommon(fighter_gobj) != FALSE) 	|| 	\
	(ftCommonAttackHi4CheckInterruptCommon(fighter_gobj) != FALSE) 	|| 	\
	(ftCommonAttackLw4CheckInterruptCommon(fighter_gobj) != FALSE)	|| 	\
	(ftCommonAttackS3CheckInterruptCommon(fighter_gobj) != FALSE) 	||  \
	(ftCommonAttackHi3CheckInterruptCommon(fighter_gobj) != FALSE) 	||  \
	(ftCommonAttackLw3CheckInterruptCommon(fighter_gobj) != FALSE) 	||  \
	(ftCommonAttack1CheckInterruptCommon(fighter_gobj) != FALSE) 	|| 	\
	(ftCommonGuardOnCheckInterruptCommon(fighter_gobj) != FALSE) 	|| 	\
	(ftCommonAppealCheckInterruptCommon(fighter_gobj) != FALSE) 	|| 	\
	(ftCommonKneeBendCheckInterruptCommon(fighter_gobj) != FALSE) 	|| 	\
	(ftCommonDashCheckInterruptCommon(fighter_gobj) != FALSE) 		|| 	\
	(ftCommonPassCheckInterruptCommon(fighter_gobj) != FALSE) 		|| 	\
	(ftCommonDokanStartCheckInterruptCommon(fighter_gobj) != FALSE) || 	\
	(ftCommonSquatCheckInterruptCommon(fighter_gobj) != FALSE) 		|| 	\
	(ftCommonTurnCheckInterruptCommon(fighter_gobj) != FALSE) 		|| 	\
	(ftCommonWalkCheckInterruptCommon(fighter_gobj) != FALSE) 			\
)

#define AttributesGetStruct(fp) ((ftAttributes*)fp->attributes)

#define FighterGetJoint(fp, id) ((DObj*)fp->joint[id])

#define FighterCalcLandingLag(anim_length, target_length) ((f32)anim_length / target_length)

#endif
