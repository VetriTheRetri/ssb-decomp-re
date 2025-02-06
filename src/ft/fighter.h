#ifndef _FIGHTER_H_
#define _FIGHTER_H_

#include "fttypes.h"
#include "ftfunctions.h"
#include "ftcommondata.h"

extern u32 lFTEmblemSpritesFileID;							// 0x00000014
extern u32 lFTStocksZakoFileID;								// 0x00000019
extern u32 lFTEmblemModelsFileID;							// 0x00000023

extern intptr_t lFTEmblemSpritesMarioSprite;				// 0x00000618
extern intptr_t lFTEmblemSpritesDonkeySprite;				// 0x00000C78
extern intptr_t lFTEmblemSpritesFoxSprite;					// 0x00001938
extern intptr_t lFTEmblemSpritesKirbySprite;				// 0x00001F98
extern intptr_t lFTEmblemSpritesMetroidSprite;				// 0x000012D8
extern intptr_t lFTEmblemSpritesZeldaSprite;				// 0x000025F8
extern intptr_t lFTEmblemSpritesYoshiSprite;				// 0x00002C58
extern intptr_t lFTEmblemSpritesFZeroSprite;				// 0x000032B8
extern intptr_t lFTEmblemSpritesPMonstersSprite;			// 0x00003918
extern intptr_t lFTEmblemSpritesMotherSprite;				// 0x00003F78

extern intptr_t lFTStocksZakoSprite;						// 0x00000080

extern intptr_t lFTEmblemModelsMarioMObjSub;				// 0x00000000
extern intptr_t lFTEmblemModelsMarioDObjDesc;				// 0x00000990
extern intptr_t lFTEmblemModelsMarioMatAnimJoint;			// 0x00000A14
extern intptr_t lFTEmblemModelsFoxMObjSub;					// 0x00001940
extern intptr_t lFTEmblemModelsFoxDObjDesc;					// 0x000021D0
extern intptr_t lFTEmblemModelsFoxMatAnimJoint;				// 0x00002254
extern intptr_t lFTEmblemModelsDonkeyMObjSub;				// 0x00000B00
extern intptr_t lFTEmblemModelsDonkeyDObjDesc;				// 0x00001348
extern intptr_t lFTEmblemModelsDonkeyMatAnimJoint;			// 0x000013CC
extern intptr_t lFTEmblemModelsMetroidMObjSub;				// 0x00001470
extern intptr_t lFTEmblemModelsMetroidDObjDesc;				// 0x00001860
extern intptr_t lFTEmblemModelsMetroidMatAnimJoint;			// 0x000018E4
extern intptr_t lFTEmblemModelsZeldaMObjSub;				// 0x000022B0
extern intptr_t lFTEmblemModelsZeldaDObjDesc;				// 0x00002520
extern intptr_t lFTEmblemModelsZeldaMatAnimJoint;			// 0x000025A4
extern intptr_t lFTEmblemModelsYoshiMObjSub;				// 0x00002690
extern intptr_t lFTEmblemModelsYoshiDObjDesc;				// 0x00002F10
extern intptr_t lFTEmblemModelsYoshiMatAnimJoint;			// 0x00002F94
extern intptr_t lFTEmblemModelsFZeroMObjSub;				// 0x00002FF0
extern intptr_t lFTEmblemModelsFZeroDObjDesc;				// 0x00003828
extern intptr_t lFTEmblemModelsFZeroMatAnimJoint;			// 0x000038AC
extern intptr_t lFTEmblemModelsKirbyMObjSub;				// 0x00003900
extern intptr_t lFTEmblemModelsKirbyDObjDesc;				// 0x00003E68
extern intptr_t lFTEmblemModelsKirbyMatAnimJoint;			// 0x00003EEC
extern intptr_t lFTEmblemModelsPMonstersMObjSub;			// 0x00003F40
extern intptr_t lFTEmblemModelsPMonstersDObjDesc;			// 0x00004710
extern intptr_t lFTEmblemModelsPMonstersMatAnimJoint;		// 0x00004794
extern intptr_t lFTEmblemModelsMotherMObjSub;				// 0x00004840
extern intptr_t lFTEmblemModelsMotherDObjDesc;				// 0x00005A00
extern intptr_t lFTEmblemModelsMotherMatAnimJoint;			// 0x00005A84

extern sb32 gFTMainIsDamageDetect[4];
extern sb32 gFTMainIsAttackDetect[4];

extern Gfx dFTDisplayMainHurtCollisionCuboidDL[/* */];
extern Gfx dFTDisplayMainHitCollisionEdgeDL[/* */];
extern Gfx dFTDisplayMainHitCollisionBlendDL[/* */];
extern Gfx dFTDisplayMainHitCollisionCubeDL[/* */];
extern Gfx dFTDisplayMainMapCollisionBottomDL[/* */];
extern Gfx dFTDisplayMainMapCollisionTopDL[/* */];

extern FTOpeningDesc *D_ovl1_80390D20[/* */];
extern FTOpeningDesc D_ovl1_80390BE8;

#define ftGetStruct(fighter_gobj) 	((FTStruct*)(fighter_gobj)->user_data.p)
#define ftGetParts(fighter_dobj) 	((FTParts *)(fighter_dobj)->user_data.p)

#define ftSetupDropItem(fp)                          	\
{                                                     	\
	Vec3f vel;                                        	\
	vel.x = vel.y = vel.z = 0.0F;                       \
	itMainSetFighterDrop((fp)->item_gobj, &vel, 1.0F);	\
}

#define ftKeyEventCast(script, type) ((type*)(script))

#define ftKeyGetButtons(script) (*(ftKeyEventCast((script), u16)))

#define ftKeyGetStickRange(script) (ftKeyEventCast((script), Vec2b))

#define ftGetComTargetFighter(com) \
((FTStruct*)(com)->target_user)

#define ftGetComTargetWeapon(com) \
((WPStruct*)(com)->target_user)

#define ftGetComTargetItem(com) \
((ITStruct*)(com)->target_user)

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

#endif
