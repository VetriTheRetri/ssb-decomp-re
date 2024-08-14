#ifndef _IFDEF_H_
#define _IFDEF_H_

#define IFCOMMON_PLAYERARROWS_MASK_LEFT  	(1 << nIFPlayerArrowKindLeft)
#define IFCOMMON_PLAYERARROWS_MASK_RIGHT 	(1 << nIFPlayerArrowKindRight)

// Enums
typedef enum ifPauseKind
{
	nIFPauseKindPlayerNA, // Player not available (not within pause zoom range)
	nIFPauseKindDefault,  // Default
	nIFPauseKindBonus	   // Bonus games

} ifPauseKind;

typedef enum ifPlayerTagKind
{
	nIFPlayerTagKind1P,
	nIFPlayerTagKind2P,
	nIFPlayerTagKind3P,
	nIFPlayerTagKind4P,
	nIFPlayerTagKindCP,
	nIFPlayerTagKindHeart

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
