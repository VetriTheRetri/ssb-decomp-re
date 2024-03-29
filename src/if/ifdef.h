#ifndef _IFDEF_H_
#define _IFDEF_H_

// Enums
typedef enum ifPauseKind
{
	ifPause_Kind_PlayerNA, // Player not available (not within pause zoom range)
	ifPause_Kind_Default,  // Default
	ifPause_Kind_Bonus	   // Bonus games

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

// Structs
typedef struct ifDCharacter ifDCharacter;
typedef struct ifACharacter ifACharacter;
typedef struct ifPlayerDamage ifPlayerDamage;
typedef struct ifPlayerSteal ifPlayerSteal;
typedef struct ifPlayerMagnify ifPlayerMagnify;
typedef struct ifStartLamp ifStartLamp;
typedef struct ifPauseIcon ifPauseIcon;

#endif