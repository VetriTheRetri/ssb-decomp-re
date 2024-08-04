#ifndef _ITDEF_H_
#define _ITDEF_H_

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
