#ifndef _IFDEF_H_
#define _IFDEF_H_

// Enums
typedef enum ifPauseKind
{
	nIFPauseKindPlayerNA, // Player not available (not within pause zoom range)
	nIFPauseKindDefault,  // Default
	nIFPauseKindBonus	   // Bonus games

} ifPauseKind;

typedef enum ifPlayerTagKind
{
	ifPlayerTag_Kind_1P,
	ifPlayerTag_Kind_2P,
	ifPlayerTag_Kind_3P,
	ifPlayerTag_Kind_4P,
	ifPlayerTag_Kind_CP,
	ifPlayerTag_Kind_Heart

} ifPlayerTagKind;

typedef enum ifPlayerArrowsKind
{
	nIFPlayerArrowKindLeft,
	nIFPlayerArrowKindRight

} ifPlayerArrowsKind;

// Structs
typedef struct ifPlayerCommon	ifPlayerCommon;
typedef struct ifDCharacter 	ifDCharacter;
typedef struct ifACharacter 	ifACharacter;
typedef struct ifPlayerDamage 	ifPlayerDamage;
typedef struct ifPlayerSteal 	ifPlayerSteal;
typedef struct ifPlayerMagnify 	ifPlayerMagnify;
typedef struct ifTraffic 		ifTraffic;
typedef struct ifPauseDecal 	ifPauseDecal;

#endif
