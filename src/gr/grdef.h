#ifndef _GRDEF_H_
#define _GRDEF_H_

typedef enum grKind
{
	Gr_Kind_CommonStart,

	Gr_Kind_VSStart = Gr_Kind_CommonStart,
	Gr_Kind_Castle = Gr_Kind_VSStart, // Peach's Castle
	Gr_Kind_Sector,
	Gr_Kind_Jungle,
	Gr_Kind_Zebes,
	Gr_Kind_Hyrule,
	Gr_Kind_Yoster,	  // Yoshi's Island
	Gr_Kind_Pupupu,	  // Dream Land
	Gr_Kind_Yamabuki, // Saffron City
	Gr_Kind_Inishie,  // Mushroom Kingdom
	Gr_Kind_VSEnd = Gr_Kind_Inishie,

	Gr_Kind_PPPTest1,
	Gr_Kind_PPPTest2,
	Gr_Kind_Explain,  // How to Play
	Gr_Kind_Yoster1P, // Small Yoshi's Island
	Gr_Kind_Crystal,  // Meta Crystal
	Gr_Kind_Duel,	  // Duel Zone
	Gr_Kind_Bonus3,	  // Race to the Finish
	Gr_Kind_Last,	  // Final Destination
	Gr_Kind_CommonEnd = Gr_Kind_Last,

	Gr_Kind_BonusGameStart,
	Gr_Kind_Bonus1Start = Gr_Kind_BonusGameStart, // Start of Target Test stages
	Gr_Kind_Bonus1Mario = Gr_Kind_Bonus1Start,
	Gr_Kind_Bonus1Fox,
	Gr_Kind_Bonus1Donkey,
	Gr_Kind_Bonus1Samus,
	Gr_Kind_Bonus1Luigi,
	Gr_Kind_Bonus1Link,
	Gr_Kind_Bonus1Yoshi,
	Gr_Kind_Bonus1Captain,
	Gr_Kind_Bonus1Kirby,
	Gr_Kind_Bonus1Pikachu,
	Gr_Kind_Bonus1Purin,
	Gr_Kind_Bonus1Ness,
	Gr_Kind_Bonus1End = Gr_Kind_Bonus1Ness,

	Gr_Kind_Bonus2Start, // Start of Board the Platforms stages
	Gr_Kind_Bonus2Mario = Gr_Kind_Bonus2Start,
	Gr_Kind_Bonus2Fox,
	Gr_Kind_Bonus2Donkey,
	Gr_Kind_Bonus2Samus,
	Gr_Kind_Bonus2Luigi,
	Gr_Kind_Bonus2Link,
	Gr_Kind_Bonus2Yoshi,
	Gr_Kind_Bonus2Captain,
	Gr_kind_Bonus2Kirby,
	Gr_Kind_Bonus2Pikachu,
	Gr_Kind_Bonus2Purin,
	Gr_Kind_Bonus2Ness,
	Gr_Kind_Bonus2End = Gr_Kind_Bonus2Ness,
	Gr_Kind_BonusGameEnd = Gr_Kind_Bonus2End

} grKind;

typedef struct grCreateDesc grCreateDesc;
typedef struct grRenderDesc grRenderDesc;
typedef struct grHitbox grHitbox;
typedef struct grMapObject grMapObject;
typedef struct grMapEnvironment grMapEnvironment;
typedef struct grItemWeights grItemWeights;
typedef struct grFileInfo grFileInfo;
typedef struct gmGroundInfo gmGroundInfo;
typedef union  grStruct grStruct;

#endif
