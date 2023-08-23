#ifndef _WPDEF_H_
#define _WPDEF_H_

// Enums
typedef enum wpKind
{
    Wp_Kind_Fireball,
    Wp_Kind_Blaster,
    Wp_Kind_ChargeShot,
    Wp_Kind_SamusBomb,
    Wp_Kind_Cutter,
    Wp_Kind_EggThrow,
    Wp_Kind_YoshiStar,
    Wp_Kind_Boomerang,
    Wp_Kind_SpinAttack,
    Wp_Kind_ThunderJoltAir,
    Wp_Kind_ThunderJoltGround,
    Wp_Kind_ThunderHead,
    Wp_Kind_ThunderTrail,
    Wp_Kind_PKFire,
    Wp_Kind_PKThunderHead,
    Wp_Kind_PKThunderTrail,
    Wp_Kind_YubiBulletNormal,
    Wp_Kind_YubiBulletHard,
    Wp_Kind_ArwingLaser2D,
    Wp_Kind_ArwingLaser3D,
    Wp_Kind_LGunAmmo,
    Wp_Kind_FFlowerFlame,
    Wp_Kind_StarRodStar,
    Wp_Kind_HitokageFlame = 0x1E,
    Wp_Kind_FushigibanaRazor

} wpKind;

// Structs
typedef struct wpStruct				wpStruct;
typedef struct wpAttributes			wpAttributes;
typedef struct wpCreateDesc			wpCreateDesc;
typedef struct wpHitPositions		wpHitPositions;
typedef struct wpHitbox				wpHitbox;

#endif