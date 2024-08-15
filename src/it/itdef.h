#ifndef _ITDEF_H_
#define _ITDEF_H_

// Macros
#define ITEM_ALLOC_MAX 16

#define ITEM_FLAG_COLLPROJECT (1 << 31) // Perform initial collision check when spawning item?

#define ITEM_FLAG_PARENT_FIGHTER 0 // Item spawned by fighter
#define ITEM_FLAG_PARENT_GROUND 1  // Item spawned by stage
#define ITEM_FLAG_PARENT_WEAPON 2  // Item spawned by weapon
#define ITEM_FLAG_PARENT_ITEM 3	  // Item spawned by another item
#define ITEM_FLAG_PARENT_DEFAULT 4

#define ITEM_FLAG_PARENT_ALL 0xF // Mask all GObj classes that can spawn items?

#define ITEM_TEAM_DEFAULT 4 // Item is teamless; deals damage to any eligible target
#define ITEM_PORT_DEFAULT GMCOMMON_PLAYERS_MAX
#define ITEM_HANDICAP_DEFAULT 9 // Handicap?
#define ITEM_STALE_DEFAULT 1.0F
#define ITEM_THROW_DEFAULT 1.0F

#define ITEM_PICKUP_WAIT_DEFAULT 1400 // "Lifetime" while item is not being carried

#define ITEM_REFLECT_MAX_DEFAULT 100   // Maximum damage cap for reflected items
#define ITEM_REFLECT_MUL_DEFAULT 1.8F  // Universal reflect damage multiplier
#define ITEM_REFLECT_ADD_DEFAULT 0.99F // Added after multiplying item's hitbox damage

#define ITEM_DESPAWN_FLASH_BEGIN_DEFAULT                                                                               \
	180U // Item starts flashing rapidly once its pickup duration drops below
		 // this value
#define ITEM_ARROW_FLASH_INT_DEFAULT                                                                                   \
	45 // Red arrow pointing downward at article "blinks" at this frequency (45
	   // frames visible, 45 frames invisible)

#define ITEM_REHIT_TIME_DEFAULT 16
#define ITEM_HITBOX_NUM_MAX 2

#define ITEM_HOP_ANGLE_DEFAULT F_CST_DTOR32(135.0F) // 2.3561945F

#define ITEM_SPIN_SPEED_MUL_DEFAULT F_CST_DTOR32(18.0F)	   // 0.31415927F
#define ITEM_SPIN_SPEED_MUL_NEW_SPAWN F_CLC_DTOR32(10.0F)  // 0.17453294F, F_CLC_DTOR32 angle might actually be incorrect
#define ITEM_SPIN_SPEED_MUL_PREV_SPAWN F_CST_DTOR32(16.0F) // 0.27925268F

#define ITEM_SPIN_SPEED_SET_SMASH_THROW F_CST_DTOR32(-21.0F)  // -0.36651915F
#define ITEM_SPIN_SPEED_SET_NORMAL_THROW F_CLC_DTOR32(-10.0F) // -0.17453294F

#define ITEM_SPIN_SPEED_FRACTION_DEFAULT 0.01F // Also multiplies spin speed

#define ITEM_TOGGLE_MASK_KIND(it_kind) (1 << (it_kind))

#define ITEM_THROW_NUM_MAX                                                                                             \
	4 /* Maximum number of times item can be thrown/dropped before it is                                               \
	  guaranteed to despawn; default is 4 and caps at 7 due to being 3 bits                                            \
	  wide */

#define ITEM_THROW_DESPAWN_RANDOM                                                                                      \
	4 // Random chance for item to despawn when landing after being
	  // thrown/dropped; guaranteed despawn after ITEM_THROW_NUM_MAX
#define ITEM_LANDING_DESPAWN_CHECK 1
#define ITEM_LANDING_NUM_MAX 2

// Enums
typedef enum itKind
{
	// Common items
	nITKindCommonStart, // Start of common item IDs

	nITKindContainerStart = nITKindCommonStart, 		// Start of container items
	nITKindBox = nITKindContainerStart,		  			// Crate
	nITKindTaru,										// Barrel
	nITKindCapsule,							  			// Capsule
	nITKindEgg,								  			// Egg
	nITKindContainerEnd = nITKindEgg,					// End of container items

	nITKindUtilityStart, 								// Start of utility items (or items that can be spawned in training mode / toggled)
	nITKindTomato = nITKindUtilityStart, 				// Maxim Tomato
	nITKindHeart,						   				// Heart
	nITKindStar,						   				// Star Man
	nITKindSword,						   				// Beam Sword
	nITKindBat,						   					// Home-Run Bat
	nITKindHarisen,					   					// Fan
	nITKindStarRod,					   					// Star Rod
	nITKindLGun,						   				// Ray Gun
	nITKindFFlower,					   					// Fire Flower
	nITKindHammer,						  	 			// Hammer
	nITKindMSBomb,						   				// Motion-Sensor Bomb
	nITKindBombHei,					   					// Bob-Omb
	nITKindNBumper,					   					// Bumper (Item)
	nITKindGShell,						   				// Green Shell
	nITKindRShell,						   				// Red Shell
	nITKindMBall,						   				// Poké Ball
	nITKindUtilityEnd = nITKindMBall,	   				// End of utility items

	nITKindCommonEnd = nITKindUtilityEnd, 				// End of common item IDs

	// Fighter items
	nITKindFighterStart,					   			// Start of fighter item IDs
	nITKindNessPKFire = nITKindFighterStart, 			// Ness PK Fire pillar
	nITKindLinkBomb,						   			// Link's Bomb
	nITKindFighterEnd = nITKindLinkBomb,	   			// End of fighter item IDs

	// Stage items
	nITKindGroundoundStart, 							// Start of stage hazard IDs

	nITKindPowerBlock = nITKindGroundoundStart, 		// POW block
	nITKindGBumper,						  				// Bumper (Stage Hazard)
	nITKindPakkun,							  			// Pirahna Plant
	nITKindTarget,							  			// Target
	nITKindTaruBomb,							  		// Race to the Finish bomb

	nITKindGroundMonsterStart,					 		// Start of stage Pokémon
	nITKindGLucky = nITKindGroundMonsterStart, 			// Chansey (Saffron City)
	nITKindMarumine,						 			// Electrode
	nITKindHitokage,						 			// Charmander
	nITKindFushigibana,					 				// Venusaur
	nITKindPorygon,						 				// Porygon
	nITKindGroundMonsterEnd = nITKindPorygon,	 		// End of stage Pokémon IDs

	nITKindGroundoundEnd = nITKindGroundMonsterEnd, 	// End of stage hazard IDs

	// Pokémon
	nITKindMBallMonsterStart,							// Start of Pokémon item IDs
	nITKindMBallCommonStart = nITKindMBallMonsterStart, // Start of Pokémon with a common appearance rate
	nITKindIwark = nITKindMBallMonsterStart, 			// Onix
	nITKindKabigon,										// Snorlax
	nITKindTosakinto,									// Goldeen
	nITKindNyars,										// Meowth
	nITKindLizardon,									// Charizard
	nITKindSpear,										// Beedrill
	nITKindKamex,										// Blastoise
	nITKindMLucky,										// Chansey (Poké Ball)
	nITKindStarmie,										// Starmie
	nITKindSawamura,									// Hitmonlee
	nITKindDogas,										// Koffing
	nITKindPippi,										// Clefairy
	nITKindMBallCommonEnd = nITKindPippi,				// End of Pokémon with a common appearance rate
	nITKindMew,											// Mew
	nITKindMBallMonsterEnd = nITKindMew,				// End of Pokémon item IDs

	nITKindEnumMax 										// End of all item IDs

} itKind;

typedef enum itType
{
	nITTypeDamage,	 // Item has a hurtbox that can be damaged (?)
	nITTypeSwing,	 // Item can be thrown and swung
	nITTypeShoot,	 // Item can be fired
	nITTypeThrow,	 // Item can only be thrown
	nITTypeTouch,	 // Item has special properties on hitbox interaction
	nITTypeConsume, // Hammer, Heart and Maxim Tomato?
	nITTypeFighter	 // Item spawned by fighter's weapon?

} itType;

typedef enum itWeight
{
	nITWeightHeavy, // Crate and barrel
	nITWeightLight	 // Everything else lol

} itWeight;

// Structs
typedef struct itStruct itStruct; // Main item struct
typedef struct itAttributes itAttributes;
typedef struct itMonsterInfo itMonsterInfo; // Info specific to Pokémon
typedef struct itFileData itFileData;
typedef struct itCreateDesc itCreateDesc;
typedef struct itStatusDesc itStatusDesc;
typedef struct itSpawnActor itSpawnActor;
typedef struct itRandomWeights itRandomWeights;
typedef struct itHitPositions itHitPositions;
typedef struct itHitbox itHitbox;
typedef struct itHitEvent itHitEvent;
typedef struct itHitParty itHitParty;
typedef struct itHurtbox itHurtbox;

#endif
