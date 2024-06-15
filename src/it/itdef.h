#ifndef _ITDEF_H_
#define _ITDEF_H_

// Enums
typedef enum itKind
{
	// Common items
	It_Kind_CommonStart, // Start of common item IDs

	It_Kind_ContainerStart = It_Kind_CommonStart, // Start of container items
	It_Kind_Box = It_Kind_ContainerStart,		  // Crate
	It_Kind_Taru,								  // Barrel
	It_Kind_Capsule,							  // Capsule
	It_Kind_Egg,								  // Egg
	It_Kind_ContainerEnd = It_Kind_Egg,			  // End of container items

	It_Kind_UtilityStart, // Start of utility items (or items that can be spawned in training mode / toggled)
	It_Kind_Tomato = It_Kind_UtilityStart, // Maxim Tomato
	It_Kind_Heart,						   // Heart
	It_Kind_Star,						   // Star Man
	It_Kind_Sword,						   // Beam Sword
	It_Kind_Bat,						   // Home-Run Bat
	It_Kind_Harisen,					   // Fan
	It_Kind_StarRod,					   // Star Rod
	It_Kind_LGun,						   // Ray Gun
	It_Kind_FFlower,					   // Fire Flower
	It_Kind_Hammer,						   // Hammer
	It_Kind_MSBomb,						   // Motion-Sensor Bomb
	It_Kind_BombHei,					   // Bob-Omb
	It_Kind_NBumper,					   // Bumper (Item)
	It_Kind_GShell,						   // Green Shell
	It_Kind_RShell,						   // Red Shell
	It_Kind_MBall,						   // Poké Ball
	It_Kind_UtilityEnd = It_Kind_MBall,	   // End of utility items

	It_Kind_CommonEnd = It_Kind_UtilityEnd, // End of common item IDs

	// Fighter items
	It_Kind_FighterStart,					   // Start of fighter item IDs
	It_Kind_NessPKFire = It_Kind_FighterStart, // PK Fire pillar
	It_Kind_LinkBomb,						   // Link's Bomb
	It_Kind_FighterEnd = It_Kind_LinkBomb,	   // End of fighter item IDs

	// Stage items
	It_Kind_GroundStart, // Start of stage hazard IDs

	It_Kind_PowerBlock = It_Kind_GroundStart, // POW block
	It_Kind_GBumper,						  // Bumper (Stage Hazard)
	It_Kind_Pakkun,							  // Pirahna Plant
	It_Kind_Target,							  // Target
	It_Kind_RBomb,							  // Race to the Finish bomb

	It_Kind_GrMonsterStart,					 // Start of stage Pokémon
	It_Kind_GLucky = It_Kind_GrMonsterStart, // Chansey (Saffron City)
	It_Kind_Marumine,						 // Electrode
	It_Kind_Hitokage,						 // Charmander
	It_Kind_Fushigibana,					 // Venusaur
	It_Kind_Porygon,						 // Porygon
	It_Kind_GrMonsterEnd = It_Kind_Porygon,	 // End of stage Pokémon IDs

	It_Kind_GroundEnd = It_Kind_GrMonsterEnd, // End of stage hazard IDs

	// Pokémon
	It_Kind_MbMonsterStart,					// Start of Pokémon item IDs
	It_Kind_Iwark = It_Kind_MbMonsterStart, // Onix
	It_Kind_Kabigon,						// Snorlax
	It_Kind_Tosakinto,						// Goldeen
	It_Kind_Nyars,							// Meowth
	It_Kind_Lizardon,						// Charizard
	It_Kind_Spear,							// Beedrill
	It_Kind_Kamex,							// Blastoise
	It_Kind_MLucky,							// Chansey (Poké Ball)
	It_Kind_Starmie,						// Starmie
	It_Kind_Sawamura,						// Hitmonlee
	It_Kind_Dogas,							// Koffing
	It_Kind_Pippi,							// Clefairy
	It_Kind_Mew,							// Mew
	It_Kind_MbMonsterEnd = It_Kind_Mew,		// End of Pokémon item IDs

	It_Kind_EnumMax // End of all item IDs

} itKind;

typedef enum itType
{
	It_Type_Damage,	 // Item has a hurtbox that can be damaged (?)
	It_Type_Swing,	 // Item can be thrown and swung
	It_Type_Shoot,	 // Item can be fired
	It_Type_Throw,	 // Item can only be thrown
	It_Type_Touch,	 // Item has special properties on hitbox interaction
	It_Type_Consume, // Hammer, Heart and Maxim Tomato?
	It_Type_Fighter	 // Item spawned by fighter's weapon?

} itType;

typedef enum itWeight
{
	It_Weight_Heavy, // Crate and barrel
	It_Weight_Light	 // Everything else lol

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
