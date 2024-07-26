#ifndef _WPDEF_H_
#define _WPDEF_H_

// Enums
typedef enum wpKind
{
	nWPKindFireball,		   // 0x00
	nWPKindBlaster,		   // 0x01
	nWPKindChargeShot,		   // 0x02
	nWPKindSamusBomb,		   // 0x03
	nWPKindCutter,			   // 0x04
	nWPKindEggThrow,		   // 0x05
	nWPKindYoshiStar,		   // 0x06
	nWPKindBoomerang,		   // 0x07
	nWPKindSpinAttack,		   // 0x08
	nWPKindThunderJoltAir,	   // 0x09
	nWPKindThunderJoltGround, // 0x0A
	nWPKindThunderHead,	   // 0x0B
	nWPKindThunderTrail,	   // 0x0C
	nWPKindPKFire,			   // 0x0D
	nWPKindPKThunderHead,	   // 0x0E
	nWPKindPKThunderTrail,	   // 0x0F
	nWPKindBulletNormal,  	   // 0x10
	nWPKindBulletHard,	   	   // 0x11
	nWPKindArwingLaser2D,	   // 0x12
	nWPKindArwingLaser3D,	   // 0x13
	nWPKindLGunAmmo,		   // 0x14
	nWPKindFFlowerFlame,	   // 0x15
	nWPKindStarRodStar,	   // 0x16

	nWPKindMonsterStart,						  // 0x17
	nWPKindIwarkRock = nWPKindMonsterStart,	  // 0x17
	nWPKindNyarsCoin,							  // 0x18
	nWPKindLizardonFlame,						  // 0x19
	nWPKindSpearSwarm,							  // 0x1A
	nWPKindKamexHydro,							  // 0x1B
	nWPKindStarmieSwift,						  // 0x1C
	nWPKindDogasSmog,							  // 0x1D
	nWPKindHitokageFlame,						  // 0x1E
	nWPKindFushigibanaRazor,					  // 0x1F
	nWPKindMonsterEnd = nWPKindFushigibanaRazor // 0x1F

} wpKind;

// Structs
typedef struct wpStruct wpStruct;
typedef struct wpAttributes wpAttributes;
typedef struct wpCreateDesc wpCreateDesc;
typedef struct wpHitPositions wpHitPositions;
typedef struct wpHitbox wpHitbox;

#endif
