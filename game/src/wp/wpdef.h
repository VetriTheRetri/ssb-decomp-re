#ifndef _WPDEF_H_
#define _WPDEF_H_

// Enums
typedef enum wpKind
{
    Wp_Kind_Fireball,           // 0x00
    Wp_Kind_Blaster,            // 0x01
    Wp_Kind_ChargeShot,         // 0x02
    Wp_Kind_SamusBomb,          // 0x03
    Wp_Kind_Cutter,             // 0x04
    Wp_Kind_EggThrow,           // 0x05
    Wp_Kind_YoshiStar,          // 0x06
    Wp_Kind_Boomerang,          // 0x07
    Wp_Kind_SpinAttack,         // 0x08
    Wp_Kind_ThunderJoltAir,     // 0x09
    Wp_Kind_ThunderJoltGround,  // 0x0A
    Wp_Kind_ThunderHead,        // 0x0B
    Wp_Kind_ThunderTrail,       // 0x0C
    Wp_Kind_PKFire,             // 0x0D
    Wp_Kind_PKThunderHead,      // 0x0E
    Wp_Kind_PKThunderTrail,     // 0x0F
    Wp_Kind_YubiBulletNormal,   // 0x10
    Wp_Kind_YubiBulletHard,     // 0x11
    Wp_Kind_ArwingLaser2D,      // 0x12
    Wp_Kind_ArwingLaser3D,      // 0x13
    Wp_Kind_LGunAmmo,           // 0x14
    Wp_Kind_FFlowerFlame,       // 0x15
    Wp_Kind_StarRodStar,        // 0x16
    Wp_Kind_IwarkRock,          // 0x17
    Wp_Kind_NyarsCoin,          // 0x18
    Wp_Kind_LizardonFlame,      // 0x19
    Wp_Kind_SpearSwarm,         // 0x1A, at least I assume this one is it
    Wp_Kind_KamexHydro,         // 0x1B
    Wp_Kind_StarmieSwift,       // 0x1C, might be swapped with 0x1A
    Wp_Kind_DogasSmog,          // 0x1D
    Wp_Kind_HitokageFlame,      // 0x1E
    Wp_Kind_FushigibanaRazor    // 0x1F

} wpKind;

// Structs
typedef struct wpStruct				wpStruct;
typedef struct wpAttributes			wpAttributes;
typedef struct wpCreateDesc			wpCreateDesc;
typedef struct wpHitPositions		wpHitPositions;
typedef struct wpHitbox				wpHitbox;

#endif