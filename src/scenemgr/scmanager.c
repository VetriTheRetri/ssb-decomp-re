#include "scene_manager.h"
#include <ft/fighter.h>
#include <wp/weapon.h>
#include <it/item.h>
#include "scenemgr/entries.h"
#include <sys/error.h>
#include <sys/dma.h>
#include <sys/taskman.h>
#include <sys/hal_audio.h>
#include <sys/video.h>
#include <sc/sctypes.h> // Temporarily, until ovl defines are fixed
#include <sys/controller.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x800A44D0
u8 sSCManagerPad0x800A44D0[16];

// 0x800A44E0
LBBackupData gSCManagerBackupData;

// 0x800A4AD0
SCCommonData gSCManagerSceneData;

// 0x800A4B18
SCBattleState gSCManager1PGameBattleState;

// 0x800A4D08
SCBattleState gSCManagerTransferBattleState;

// 0x800A4EF8
SCBattleState gSCManagerVSBattleState;

// 0x800A50E8
SCBattleState *gSCManagerBattleState;

// 0x800A50EC
u32 gSCManagerCIC;

// 0x800A50F0
s32 gSCManagerUnkown0x800A50F0;

// 0x800A50F8
FTFileSize gSCManagerFighterFileSizes[nFTKindEnumCount];

// 0x800A523C
s32 sSCManagerUnk0x800A523C;

// Forward declarations
extern void scManagerFuncPrint();

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x800A3070
SYOverlay dSCManagerOverlays[/* */] =
{
	GENERATE_OVERLAY_SECTION_DATA(0),
	GENERATE_OVERLAY_SECTION_DATA(1),
	GENERATE_OVERLAY_SECTION_DATA(2),
	GENERATE_OVERLAY_SECTION_DATA(3),
	GENERATE_OVERLAY_SECTION_DATA(4),
	GENERATE_OVERLAY_SECTION_DATA(5),
	GENERATE_OVERLAY_SECTION_DATA(6),
	GENERATE_OVERLAY_SECTION_DATA(7),
	GENERATE_OVERLAY_SECTION_DATA(8),
	GENERATE_OVERLAY_SECTION_DATA(9),
	GENERATE_OVERLAY_SECTION_DATA(10),
	GENERATE_OVERLAY_SECTION_DATA(11),
	GENERATE_OVERLAY_SECTION_DATA(12),
	GENERATE_OVERLAY_SECTION_DATA(13),
	GENERATE_OVERLAY_SECTION_DATA(14),
	GENERATE_OVERLAY_SECTION_DATA(15),
	GENERATE_OVERLAY_SECTION_DATA(16),
	GENERATE_OVERLAY_SECTION_DATA(17),
	GENERATE_OVERLAY_SECTION_DATA(18),
	GENERATE_OVERLAY_SECTION_DATA(19),
	GENERATE_OVERLAY_SECTION_DATA(20),
	GENERATE_OVERLAY_SECTION_DATA(21),
	GENERATE_OVERLAY_SECTION_DATA(22),
	GENERATE_OVERLAY_SECTION_DATA(23),
	GENERATE_OVERLAY_SECTION_DATA(24),
	GENERATE_OVERLAY_SECTION_DATA(25),
	GENERATE_OVERLAY_SECTION_DATA(26),
	GENERATE_OVERLAY_SECTION_DATA(27),
	GENERATE_OVERLAY_SECTION_DATA(28),
	GENERATE_OVERLAY_SECTION_DATA(29),
	GENERATE_OVERLAY_SECTION_DATA(30),
	GENERATE_OVERLAY_SECTION_DATA(31),
	GENERATE_OVERLAY_SECTION_DATA(32),
	GENERATE_OVERLAY_SECTION_DATA(33),
	GENERATE_OVERLAY_SECTION_DATA(34),
	GENERATE_OVERLAY_SECTION_DATA(35),
	GENERATE_OVERLAY_SECTION_DATA(36),
	GENERATE_OVERLAY_SECTION_DATA(37),
	GENERATE_OVERLAY_SECTION_DATA(38),
	GENERATE_OVERLAY_SECTION_DATA(39),
	GENERATE_OVERLAY_SECTION_DATA(40),
	GENERATE_OVERLAY_SECTION_DATA(41),
	GENERATE_OVERLAY_SECTION_DATA(42),
	GENERATE_OVERLAY_SECTION_DATA(43),
	GENERATE_OVERLAY_SECTION_DATA(44),
	GENERATE_OVERLAY_SECTION_DATA(45),
	GENERATE_OVERLAY_SECTION_DATA(46),
	GENERATE_OVERLAY_SECTION_DATA(47),
	GENERATE_OVERLAY_SECTION_DATA(48),
	GENERATE_OVERLAY_SECTION_DATA(49),
	GENERATE_OVERLAY_SECTION_DATA(50),
	GENERATE_OVERLAY_SECTION_DATA(51),
	GENERATE_OVERLAY_SECTION_DATA(52),
	GENERATE_OVERLAY_SECTION_DATA(53),
	GENERATE_OVERLAY_SECTION_DATA(54),
	GENERATE_OVERLAY_SECTION_DATA(55),
	GENERATE_OVERLAY_SECTION_DATA(56),
	GENERATE_OVERLAY_SECTION_DATA(57),
	GENERATE_OVERLAY_SECTION_DATA(58),
	GENERATE_OVERLAY_SECTION_DATA(59),
	GENERATE_OVERLAY_SECTION_DATA(60),
	GENERATE_OVERLAY_SECTION_DATA(61),
	GENERATE_OVERLAY_SECTION_DATA(62),
	GENERATE_OVERLAY_SECTION_DATA(63),
	GENERATE_OVERLAY_SECTION_DATA(64)
};

// 0x800A3994
LBBackupData dSCManagerDefaultBackupData =
{ 
	// VS Records
	{
		// Mario VS Records
		{
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// KO count on each character
			0,										// Time used
			0,										// Damage dealt
			0,										// Damage taken
			0,										// ???
			0,										// Self-destructs
			0,										// Games played with this character present
			0,										// Avg. player count of this character in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// Avg. player count with other characters in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }	// Number of times played against other characters
		},

		// Fox VS Records
		{
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// KO count on each character
			0,										// Time used
			0,										// Damage dealt
			0,										// Damage taken
			0,										// ???
			0,										// Self-destructs
			0,										// Games played with this character present
			0,										// Avg. player count of this character in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// Avg. player count with other characters in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }	// Number of times played against other characters
		},

		// Donkey Kong VS Records
		{
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// KO count on each character
			0,										// Time used
			0,										// Damage dealt
			0,										// Damage taken
			0,										// ???
			0,										// Self-destructs
			0,										// Games played with this character present
			0,										// Avg. player count of this character in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// Avg. player count with other characters in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }	// Number of times played against other characters
		},

		// Samus VS Records
		{
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// KO count on each character
			0,										// Time used
			0,										// Damage dealt
			0,										// Damage taken
			0,										// ???
			0,										// Self-destructs
			0,										// Games played with this character present
			0,										// Avg. player count of this character in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// Avg. player count with other characters in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }	// Number of times played against other characters
		},

		// Luigi VS Records
		{
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// KO count on each character
			0,										// Time used
			0,										// Damage dealt
			0,										// Damage taken
			0,										// ???
			0,										// Self-destructs
			0,										// Games played with this character present
			0,										// Avg. player count of this character in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// Avg. player count with other characters in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }	// Number of times played against other characters
		},

		// Link VS Records
		{
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// KO count on each character
			0,										// Time used
			0,										// Damage dealt
			0,										// Damage taken
			0,										// ???
			0,										// Self-destructs
			0,										// Games played with this character present
			0,										// Avg. player count of this character in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// Avg. player count with other characters in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }	// Number of times played against other characters
		},

		// Yoshi VS Records
		{
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// KO count on each character
			0,										// Time used
			0,										// Damage dealt
			0,										// Damage taken
			0,										// ???
			0,										// Self-destructs
			0,										// Games played with this character present
			0,										// Avg. player count of this character in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// Avg. player count with other characters in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }	// Number of times played against other characters
		},

		// Captain Falcon VS Records
		{
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// KO count on each character
			0,										// Time used
			0,										// Damage dealt
			0,										// Damage taken
			0,										// ???
			0,										// Self-destructs
			0,										// Games played with this character present
			0,										// Avg. player count of this character in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// Avg. player count with other characters in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }	// Number of times played against other characters
		},

		// Kirby VS Records
		{
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// KO count on each character
			0,										// Time used
			0,										// Damage dealt
			0,										// Damage taken
			0,										// ???
			0,										// Self-destructs
			0,										// Games played with this character present
			0,										// Avg. player count of this character in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// Avg. player count with other characters in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }	// Number of times played against other characters
		},

		// Pikachu VS Records
		{
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// KO count on each character
			0,										// Time used
			0,										// Damage dealt
			0,										// Damage taken
			0,										// ???
			0,										// Self-destructs
			0,										// Games played with this character present
			0,										// Avg. player count of this character in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// Avg. player count with other characters in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }	// Number of times played against other characters
		},

		// Jigglypuff VS Records
		{
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// KO count on each character
			0,										// Time used
			0,										// Damage dealt
			0,										// Damage taken
			0,										// ???
			0,										// Self-destructs
			0,										// Games played with this character present
			0,										// Avg. player count of this character in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// Avg. player count with other characters in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }	// Number of times played against other characters
		},

		// Ness VS Records
		{
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// KO count on each character
			0,										// Time used
			0,										// Damage dealt
			0,										// Damage taken
			0,										// ???
			0,										// Self-destructs
			0,										// Games played with this character present
			0,										// Avg. player count of this character in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	// Avg. player count with other characters in-game
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }	// Number of times played against other characters
		}
	},

	TRUE,											// Are screen flashes allowed?
	1, 												// 0 = Mono, 1 = Stereo
	0,												// Vertical screen adjust offset
	0,												// Horizontal screen adjust offset
	nFTKindMario,									// Last character viewed on Character Data menu
	0,												// Mask of unlocked features
	0,												// Mask of available characters
	nSC1PGameDifficultyEasy,						// Last 1P Game difficulty setting
	2,												// Last 1P Game stocks setting

	// 1P Records
	{
		// Mario 1P Records
		{
			0,										// 1P Game High-Score
			0,										// 1P Game number of continues used
			0,										// 1P Game humber of bonuses earned
			0,										// 1P Game highest difficulty cleared
			I_MIN_TO_TICS(60),						// Break the Targets best time
			0,										// Break the Targets number of targets broken
			I_MIN_TO_TICS(60),						// Board the Platforms best time
			0,										// Board the Platforms number of platforms boarded
			FALSE									// Has this character cleared 1P Game?
		},

		// Fox 1P Records
		{
			0,										// 1P Game High-Score
			0,										// 1P Game number of continues used
			0,										// 1P Game humber of bonuses earned
			0,										// 1P Game highest difficulty cleared
			I_MIN_TO_TICS(60),						// Break the Targets best time
			0,										// Break the Targets number of targets broken
			I_MIN_TO_TICS(60),						// Board the Platforms best time
			0,										// Board the Platforms number of platforms boarded
			FALSE									// Has this character cleared 1P Game?
		},

		// Donkey Kong 1P Records
		{
			0,										// 1P Game High-Score
			0,										// 1P Game number of continues used
			0,										// 1P Game humber of bonuses earned
			0,										// 1P Game highest difficulty cleared
			I_MIN_TO_TICS(60),						// Break the Targets best time
			0,										// Break the Targets number of targets broken
			I_MIN_TO_TICS(60),						// Board the Platforms best time
			0,										// Board the Platforms number of platforms boarded
			FALSE									// Has this character cleared 1P Game?
		},

		// Samus 1P Records
		{
			0,										// 1P Game High-Score
			0,										// 1P Game number of continues used
			0,										// 1P Game humber of bonuses earned
			0,										// 1P Game highest difficulty cleared
			I_MIN_TO_TICS(60),						// Break the Targets best time
			0,										// Break the Targets number of targets broken
			I_MIN_TO_TICS(60),						// Board the Platforms best time
			0,										// Board the Platforms number of platforms boarded
			FALSE									// Has this character cleared 1P Game?
		},

		// Luigi 1P Records
		{
			0,										// 1P Game High-Score
			0,										// 1P Game number of continues used
			0,										// 1P Game humber of bonuses earned
			0,										// 1P Game highest difficulty cleared
			I_MIN_TO_TICS(60),						// Break the Targets best time
			0,										// Break the Targets number of targets broken
			I_MIN_TO_TICS(60),						// Board the Platforms best time
			0,										// Board the Platforms number of platforms boarded
			FALSE									// Has this character cleared 1P Game?
		},

		// Link 1P Records
		{
			0,										// 1P Game High-Score
			0,										// 1P Game number of continues used
			0,										// 1P Game humber of bonuses earned
			0,										// 1P Game highest difficulty cleared
			I_MIN_TO_TICS(60),						// Break the Targets best time
			0,										// Break the Targets number of targets broken
			I_MIN_TO_TICS(60),						// Board the Platforms best time
			0,										// Board the Platforms number of platforms boarded
			FALSE									// Has this character cleared 1P Game?
		},

		// Yoshi 1P Records
		{
			0,										// 1P Game High-Score
			0,										// 1P Game number of continues used
			0,										// 1P Game humber of bonuses earned
			0,										// 1P Game highest difficulty cleared
			I_MIN_TO_TICS(60),						// Break the Targets best time
			0,										// Break the Targets number of targets broken
			I_MIN_TO_TICS(60),						// Board the Platforms best time
			0,										// Board the Platforms number of platforms boarded
			FALSE									// Has this character cleared 1P Game?
		},

		// Captain Falcon 1P Records
		{
			0,										// 1P Game High-Score
			0,										// 1P Game number of continues used
			0,										// 1P Game humber of bonuses earned
			0,										// 1P Game highest difficulty cleared
			I_MIN_TO_TICS(60),						// Break the Targets best time
			0,										// Break the Targets number of targets broken
			I_MIN_TO_TICS(60),						// Board the Platforms best time
			0,										// Board the Platforms number of platforms boarded
			FALSE									// Has this character cleared 1P Game?
		},

		// Kirby 1P Records
		{
			0,										// 1P Game High-Score
			0,										// 1P Game number of continues used
			0,										// 1P Game humber of bonuses earned
			0,										// 1P Game highest difficulty cleared
			I_MIN_TO_TICS(60),						// Break the Targets best time
			0,										// Break the Targets number of targets broken
			I_MIN_TO_TICS(60),						// Board the Platforms best time
			0,										// Board the Platforms number of platforms boarded
			FALSE									// Has this character cleared 1P Game?
		},

		// Pikachu 1P Records
		{
			0,										// 1P Game High-Score
			0,										// 1P Game number of continues used
			0,										// 1P Game humber of bonuses earned
			0,										// 1P Game highest difficulty cleared
			I_MIN_TO_TICS(60),						// Break the Targets best time
			0,										// Break the Targets number of targets broken
			I_MIN_TO_TICS(60),						// Board the Platforms best time
			0,										// Board the Platforms number of platforms boarded
			FALSE									// Has this character cleared 1P Game?
		},

		// Jigglypuff 1P Records
		{
			0,										// 1P Game High-Score
			0,										// 1P Game number of continues used
			0,										// 1P Game humber of bonuses earned
			0,										// 1P Game highest difficulty cleared
			I_MIN_TO_TICS(60),						// Break the Targets best time
			0,										// Break the Targets number of targets broken
			I_MIN_TO_TICS(60),						// Board the Platforms best time
			0,										// Board the Platforms number of platforms boarded
			FALSE									// Has this character cleared 1P Game?
		},

		// Ness 1P Records
		{
			0,										// 1P Game High-Score
			0,										// 1P Game number of continues used
			0,										// 1P Game humber of bonuses earned
			0,										// 1P Game highest difficulty cleared
			I_MIN_TO_TICS(60),						// Break the Targets best time
			0,										// Break the Targets number of targets broken
			I_MIN_TO_TICS(60),						// Board the Platforms best time
			0,										// Board the Platforms number of platforms boarded
			FALSE									// Has this character cleared 1P Game?
		}
	},

	0,												// Mask of unique stages played in VS Mode (for Mushroom Kingdom)
	0,												// Number of games played in VS Mode to unlock Item Switch
	0,												// Total number of games played in VS Mode
	0,												// Memory corruption mask? This is where the "penalties" are stored
	0,												// ???
	666,											// ???
	0,												// ???
	0,												// ???
	0												// Checksum of all previous save data struct members' values
};

// 0x800A3F80
SCCommonData dSCManagerDefaultSceneData =
{
	nSCKindStartup,										// Current scene
	nSCKindStartup,										// Previous scene

	// Queued unlock messages
	{
		nLBBackupUnlockEnumCount,
		nLBBackupUnlockEnumCount,
		nLBBackupUnlockEnumCount,
		nLBBackupUnlockEnumCount,
		nLBBackupUnlockEnumCount,
		nLBBackupUnlockEnumCount,
		nLBBackupUnlockEnumCount
	},

	nFTKindLuigi,									// Challanger approaching character
	0,												// Mask of previously demo'd characters
	nFTKindNull,									// First demo character?

	// Demo characters
	{
		nFTKindNull,
		nFTKindNull
	},

	nGRKindCastle,									// Stage selected

	FALSE,											// Is Sudden Death?
	FALSE,											// Has "continue" been selected?
	FALSE,											// Has A + B + Z + R been input?

	0,												// 1P Game player's port
	nFTKindNull,									// 1P Game player's character
	0,												// 1P Game player's costume
	5,												// 1P Game time limit (in seconds, 100 = infinite)
	0,												// 1P Game current stage
	
	// 1P Game ally characters
	{
		nFTKindMario,
		nFTKindMario
	},

	0,												// 1P Game time remaining (in seconds)
	0,												// 1P Game score
	0,												// 1P Game continues used
	0,												// 1P Game total bonuses acquired
	
	// Bonus masks
	{
		0,
		0,
		0
	},

	0,												// Bonus stage tasks completed
	nFTKindNull,									// Bonus stage character
	0,												// Bonus stage costume

	nFTKindNull,									// Training mode player's character
	0,												// Training mode player's costume
	nFTKindNull,									// Training mode player's character
	0,												// Training mode player's costume
	TRUE,											// Extend time until auto-demo starts?
	0,												// Auto-demo current stage order index
	nGRKindCastle,									// VS Mode stage selected
	nGRKindCastle,									// Training Mode stage selected
	0,												// Levels to subtract from challenger's CPU level
	FALSE											// Has the title screen animation been viewed?
};

// 0x800A3FC8
SCBattleState dSCManagerDefaultBattleState =
{
	nSCBattleGameTypeDemo,							// Game type
	nGRKindCastle,									// Stage
	FALSE,											// Is team battle?
	SCBATTLE_GAMERULE_TIME,							// Game rule
	0,												// Total players in-game
	0,												// Total CPUs in-game
	3,												// Time limit (in seconds)
	2,												// Stocks
	nSCBattleHandicapOff,							// Handicap setting
	FALSE,											// Is team attack enabled?
	TRUE,											// Is stage select enabled?
	100,											// Damage ratio
	~0,												// Item Switch mask
	TRUE,											// ???
	nSCBattleGameStatusWait,						// Status of current match
	0,												// Time remaining (in tics)
	0,												// Time passed (in tics)
	nSCBattleItemSwitchMiddle,						// Item appearance rate
	TRUE,											// Display score?
	0,												// Shadow colors based on team or use default black?

	// Player Data
	{
		// Player 1
		{
			3,										// CPU level
			9,										// Handicap
			nFTPlayerKindNot,						// Player type
			nFTKindNull,							// Character
			0,										// Team
			0,										// Port
			0,										// Costume
			0,										// Shade
			0,										// Color
			TRUE,									// Is permanent stock icon?
			0,										// Player tag
			0,										// Stock count
			FALSE,									// Is a "VS [Character] Team" member?
			0,										// Placement
			0,										// Falls
			0,										// Score

			// Total number of KOs scored on each player
			{
				0, 0, 0, 0
			},

			0,										// ???
			0,										// ???

			0,										// Total number of self-destructs
			0,										// Total damage dealt
			0,										// Total damage taken from all sources

			// Total damage taken from each player
			{
				0, 0, 0, 0
			},

			0,										// Total damage taken on current stock
			0,										// Combo damage taken from foes
			0,										// Combo hits landed by foes
			NULL,									// Pointer to fighter GObj
			0,										// Current position in stale moves queue
			
			// Stale moves info
			{
				{ 0, 0 },
				{ 0, 0 },
				{ 0, 0 },
				{ 0, 0 },
				{ 0, 0 }
			}
		},

		// Player 2
		{
			3,										// CPU level
			9,										// Handicap
			nFTPlayerKindNot,						// Player type
			nFTKindNull,							// Character
			0,										// Team
			0,										// Port
			0,										// Costume
			0,										// Shade
			0,										// Color
			TRUE,									// Permanent stock icon?
			1,										// Player tag
			0,										// Stock count
			FALSE,									// Is a "VS [Character] Team" member?
			0,										// Placement
			0,										// Falls
			0,										// Score

			// Total number of KOs scored on each player
			{
				0, 0, 0, 0
			},

			0,										// ???
			0,										// ???

			0,										// Total number of self-destructs
			0,										// Total damage dealt
			0,										// Total damage taken from all sources

			// Total damage taken from each player
			{
				0, 0, 0, 0
			},

			0,										// Total damage taken on current stock
			0,										// Combo damage taken from foes
			0,										// Combo hits landed by foes
			NULL,									// Pointer to fighter GObj
			0,										// Current position in stale moves queue
			
			// Stale moves info
			{
				{ 0, 0 },
				{ 0, 0 },
				{ 0, 0 },
				{ 0, 0 },
				{ 0, 0 }
			}
		},

		// Player 3
		{
			3,										// CPU level
			9,										// Handicap
			nFTPlayerKindNot,						// Player type
			nFTKindNull,							// Character
			1,										// Team
			0,										// Port
			0,										// Costume
			0,										// Shade
			0,										// Color
			TRUE,									// Permanent stock icon?
			2,										// Player tag
			0,										// Stock count
			FALSE,									// Is a "VS [Character] Team" member?
			0,										// Placement
			0,										// Falls
			0,										// Score

			// Total number of KOs scored on each player
			{
				0, 0, 0, 0
			},

			0,										// ???
			0,										// ???

			0,										// Total number of self-destructs
			0,										// Total damage dealt
			0,										// Total damage taken from all sources

			// Total damage taken from each player
			{
				0, 0, 0, 0
			},

			0,										// Total damage taken on current stock
			0,										// Combo damage taken from foes
			0,										// Combo hits landed by foes
			NULL,									// Pointer to fighter GObj
			0,										// Current position in stale moves queue
			
			// Stale moves info
			{
				{ 0, 0 },
				{ 0, 0 },
				{ 0, 0 },
				{ 0, 0 },
				{ 0, 0 }
			}
		},

		// Player 4
		{
			3,										// CPU level
			9,										// Handicap
			nFTPlayerKindNot,						// Player type
			nFTKindNull,							// Character
			1,										// Team
			0,										// Port
			0,										// Costume
			0,										// Shade
			0,										// Color
			TRUE,									// Permanent stock icon?
			3,										// Player tag
			0,										// Stock count
			FALSE,									// Is a "VS [Character] Team" member?
			0,										// Placement
			0,										// Falls
			0,										// Score

			// Total number of KOs scored on each player
			{
				0, 0, 0, 0
			},

			0,										// ???
			0,										// ???

			0,										// Total number of self-destructs
			0,										// Total damage dealt
			0,										// Total damage taken from all sources

			// Total damage taken from each player
			{
				0, 0, 0, 0
			},

			0,										// Total damage taken on current stock
			0,										// Combo damage taken from foes
			0,										// Combo hits landed by foes
			NULL,									// Pointer to fighter GObj
			0,										// Current position in stale moves queue
			
			// Stale moves info
			{
				{ 0, 0 },
				{ 0, 0 },
				{ 0, 0 },
				{ 0, 0 },
				{ 0, 0 }
			}
		}
	}
};

// 0x800A41B8
s32 dSCManagerPad0x800A41B8[/* */] = { 0, 0 };

// 0x800A41C0 (.rodata) - use { __DATE__ " " __TIME__ } in a real setting
char dSCManagerBuildDate[/* */] = { "Mar 16 1999 18:26:57" };

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800A1980
void scManagerRunLoop(sb32 arg)
{
	u16 *framebuffer;
	uintptr_t end;

	syControllerSetStatusDelay(60);

	syErrorSetFuncPrint(scManagerFuncPrint);
	syErrorStartRmonThread5Hang();

	syDmaLoadOverlay(&dSCManagerOverlays[0]);
	syDmaLoadOverlay(&dSCManagerOverlays[2]);
	syDmaLoadOverlay(&dSCManagerOverlays[1]);

	gSCManagerBackupData = dSCManagerDefaultBackupData;
	gSCManagerSceneData = dSCManagerDefaultSceneData;

	gSCManager1PGameBattleState   = 
	gSCManagerTransferBattleState =
	gSCManagerVSBattleState       = dSCManagerDefaultBattleState;

	ftManagerSetupFileSize();
	D_8003CB6D = 72;

	func_8002102C();

	while (func_8002103C() != FALSE)
	{
		continue;
	}
	auSetReverbType(6);

	while (func_80021048() != FALSE)
	{
		continue;
	}
	lbBackupIsSramValid();
	lbBackupApplyOptions();

	framebuffer = (u16*) gSYFramebufferSets;
	end = 0x80400000;

	while ((uintptr_t)framebuffer < end)
	{
		*framebuffer++ = GPACK_RGBA5551(0x00, 0x00, 0x00, 0x01);
	}
	if (gSYControllerConnectedNum == 0)
	{
		gSCManagerSceneData.scene_curr = nSCKindNoController;
	}
	while (TRUE)
	{
		switch (gSCManagerSceneData.scene_curr)
		{
			case nSCKindNoController:
				syDmaLoadOverlay(&dSCManagerOverlays[11]);
				mnNoControllerStartScene();
				break;

			case nSCKindTitle:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[10]);
				syDmaLoadOverlay(&dSCManagerOverlays[8]);
				syDmaLoadOverlay(&dSCManagerOverlays[9]);
				mnTitleStartScene();
				break;

			case nSCKindDebugMaps:
				syDmaLoadOverlay(&dSCManagerOverlays[12]);
				syDmaLoadOverlay(&dSCManagerOverlays[8]);
				syDmaLoadOverlay(&dSCManagerOverlays[9]);
				dbMapsStartScene();
				break;

			case nSCKindDebugCube:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[13]);
				syDmaLoadOverlay(&dSCManagerOverlays[8]);
				syDmaLoadOverlay(&dSCManagerOverlays[9]);
				dbCubeStartScene();
				break;

			case nSCKindDebugBattle:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[14]);
				syDmaLoadOverlay(&dSCManagerOverlays[8]);
				syDmaLoadOverlay(&dSCManagerOverlays[9]);
				dbBattleStartScene();
				break;

			case nSCKindDebugFalls:
				syDmaLoadOverlay(&dSCManagerOverlays[15]);
				dbFallsStartScene();
				break;

			case nSCKindDebugUnknown:
				syDmaLoadOverlay(&dSCManagerOverlays[16]);
				mnUnusedFightersStartScene();
				break;

			case nSCKindModeSelect:
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[17]);
				mnModeSelectStartScene();
				break;

			case 8:
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[18]);
				mn1PModeStartScene();
				break;

			case nSCKindOption:
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[60]);
				mnOptionStartScene();
				break;

			case nSCKindData:
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[61]);
				mnDataStartScene();
				break;

			case nSCKindVSMode:
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[19]);
				mnVSModeStartScene();
				break;

			case nSCKindVSOptions:
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[20]);
				mnVSOptionsStartScene();
				break;

			case nSCKindVSItemSwitch:
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[21]);
				mnVSItemSwitchStartScene();
				break;

			case nSCKindMessage:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[22]);
				mnMessageStartScene();
				break;

			case nSCKind1PChallenger:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[23]);
				sc1PChallengerStartScene();
				break;

			case nSCKind1PIntro:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[24]);
				sc1PIntroStartScene();
				break;

			case nSCKindScreenAdjust:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[25]);
				mnScreenAdjustStartScene();
				break;

			case nSCKindVSPlayers:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[26]);
				mnVSPlayersStartScene();
				break;

			case nSCKindMaps:
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[30]);
				mnMapsStartScene();
				break;

			case nSCKindVSBattle:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[3]);
				syDmaLoadOverlay(&dSCManagerOverlays[4]);
				scVSBattleStartScene();
				break;

			case nSCKindUnknownMario:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[3]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[5]);
				mvUnknownMarioStartScene();
				break;

			case nSCKind1PGame:
				sc1PManagerUpdateScene();
				break;

			case nSCKind1PBonusStage:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[3]);
				syDmaLoadOverlay(&dSCManagerOverlays[6]);
				sc1PBonusStageStartScene();
				break;

			case nSCKind1PTrainingMode:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[3]);
				syDmaLoadOverlay(&dSCManagerOverlays[7]);
				sc1PTrainingModeStartScene();
				break;

			case nSCKindVSResults:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[31]);
				vs_results_entry();
				break;

			case nSCKindVSRecord:
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[32]);
				mnVSRecordStartScene();
				break;

			case nSCKindCharacters:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[33]);
				mnCharactersStartScene();
				break;

			case nSCKindStartup:
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[58]);
				mnStartupStartScene();
				break;

			case nSCKindOpeningRoom:
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[34]);
				mvOpeningRoomStartScene();
				break;

			case nSCKindOpeningPortraits:
				syDmaLoadOverlay(&dSCManagerOverlays[35]);
				mvOpeningPortraitsStartScene();
				break;

			case nSCKindOpeningMario:
				syDmaLoadOverlay(&dSCManagerOverlays[3]);
				syDmaLoadOverlay(&dSCManagerOverlays[36]);
				mvOpeningMarioStartScene();
				break;

			case nSCKindOpeningDonkey:
				syDmaLoadOverlay(&dSCManagerOverlays[37]);
				mvOpeningDonkeyStartScene();
				break;

			case nSCKindOpeningSamus:
				syDmaLoadOverlay(&dSCManagerOverlays[38]);
				mvOpeningSamusStartScene();
				break;

			case nSCKindOpeningFox:
				syDmaLoadOverlay(&dSCManagerOverlays[39]);
				mvOpeningFoxStartScene();
				break;

			case nSCKindOpeningLink:
				syDmaLoadOverlay(&dSCManagerOverlays[40]);
				mvOpeningLinkStartScene();
				break;

			case nSCKindOpeningYoshi:
				syDmaLoadOverlay(&dSCManagerOverlays[41]);
				mvOpeningYoshiStartScene();
				break;

			case nSCKindOpeningPikachu:
				syDmaLoadOverlay(&dSCManagerOverlays[42]);
				mvOpeningPikachuStartScene();
				break;

			case nSCKindOpeningKirby:
				syDmaLoadOverlay(&dSCManagerOverlays[43]);
				mvOpeningKirbyStartScene();
				break;

			case nSCKindOpeningRun:
				syDmaLoadOverlay(&dSCManagerOverlays[44]);
				mvOpeningRunStartScene();
				break;
				
			case nSCKindOpeningYoster:
				syDmaLoadOverlay(&dSCManagerOverlays[45]);
				mvOpeningYosterStartScene();
				break;

			case nSCKindOpeningCliff:
				syDmaLoadOverlay(&dSCManagerOverlays[46]);
				mvOpeningCliffStartScene();
				break;

			case nSCKindOpeningStandoff:
				syDmaLoadOverlay(&dSCManagerOverlays[47]);
				mvOpeningStandoffStartScene();
				break;

			case nSCKindOpeningYamabuki:
				syDmaLoadOverlay(&dSCManagerOverlays[48]);
				mvOpeningYamabukiStartScene();
				break;

			case nSCKindOpeningClash:
				syDmaLoadOverlay(&dSCManagerOverlays[49]);
				mvOpeningClashStartScene();
				break;

			case nSCKindOpeningSector:
				syDmaLoadOverlay(&dSCManagerOverlays[50]);
				mvOpeningSectorStartScene();
				break;

			case nSCKindOpeningJungle:
				syDmaLoadOverlay(&dSCManagerOverlays[3]);
				syDmaLoadOverlay(&dSCManagerOverlays[51]);
				mvOpeningJungleStartScene();
				break;

			case nSCKindOpeningNewcomers:
				syDmaLoadOverlay(&dSCManagerOverlays[52]);
				mvOpeningNewcomersStartScene();
				break;

			case nSCKind1PGamePlayers:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[27]);
				mn1PGamePlayersStartScene();
				break;

			case nSCKind1PTrainingModePlayers:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[28]);
				mn1PTrainingPlayersStartScene();
				break;
				
			case nSCKind1PBonus1Players:
#ifdef DAIRANTOU_OPT0
			case nSCKind1PBonus2Players:
#endif
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[29]);
				mn1PBonusPlayersStartScene();
				break;

#ifndef DAIRANTOU_OPT0
			case nSCKind1PBonus2Players:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[29]);
				mn1PBonusPlayersStartScene();
				break;
#endif
			case nSCKindBackupClear:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[53]);
				mnBackupClearStartScene();
				break;

			case nSCKindEnding:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[54]);
				mvEndingStartScene();
				break;

			case nSCKind1PContinue:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[55]);
				sc1PContinueStartScene();
				break;

			case nSCKind1PScoreUnk:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[56]);
				sc1PStageClearStartScene();
				break;

			case nSCKind1PStageClear:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[56]);
				sc1PStageClearStartScene();
				break;

			case nSCKindStaffroll:
				syDmaLoadOverlay(&dSCManagerOverlays[59]);
				scStaffrollStartScene();
				break;

			case nSCKindCongra:
				syDmaLoadOverlay(&dSCManagerOverlays[57]);
				mnCongraStartScene();
				break;

			case nSCKindSoundTest:
				syDmaLoadOverlay(&dSCManagerOverlays[1]);
				syDmaLoadOverlay(&dSCManagerOverlays[62]);
				mnSoundTestStartScene();
				break;

			case nSCKindExplain:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[3]);
				syDmaLoadOverlay(&dSCManagerOverlays[63]);
				scExplainStartScene();
				break;

			case nSCKindAutoDemo:
				syDmaLoadOverlay(&dSCManagerOverlays[2]);
				syDmaLoadOverlay(&dSCManagerOverlays[3]);
				syDmaLoadOverlay(&dSCManagerOverlays[64]);
				scAutoDemoStartScene();
				break;
		}
	}
}

// 0x800A2698
void scManagerFuncUpdate(SYTaskmanSetup *arg)
{
	syTaskmanRun(arg);
}

// 0x800A26B8
void scManagerFuncDraw(void)
{
	gcDrawAll();
}

// 0x800A26D8
void scManagerMeterFuncDisplay(GObj *gobj)
{
	s32 width;
	s32 unused;
	s32 pos_y = 203;

	func_80016338(gSYTaskmanDLHeads, CObjGetStruct(gobj), 0);

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_FILL);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_NOOP, G_RM_NOOP2);

	width = ((gLBParticleStructsUsedNum / 112.0F) * 256.0F);

	if (width < 0)
	{
		width = 0;
	}
	if (width > 256)
	{
		width = 256;
	}
	gDPSetFillColor(gSYTaskmanDLHeads[0]++, syVideoGetFillColor(GPACK_RGBA8888(0x00, 0x00, 0xFF, 0xFF)));
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 30, pos_y, width + 30, pos_y + 1);

	pos_y += 2;

	gDPPipeSync(gSYTaskmanDLHeads[0]++);

	width = ((gLBParticleGeneratorsUsedNum / 24.0F) * 256.0F);

	if (width < 0)
	{
		width = 0;
	}
	if (width > 256)
	{
		width = 256;
	}
	gDPSetFillColor(gSYTaskmanDLHeads[0]++, syVideoGetFillColor(GPACK_RGBA8888(0xFF, 0x40, 0x00, 0xFF)));
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 30, pos_y, width + 30, pos_y + 1);

	pos_y += 2;

	gDPPipeSync(gSYTaskmanDLHeads[0]++);

	width = ((gLBParticleTransformsUsedNum / 80.0F) * 256.0F);

	if (width < 0)
	{
		width = 0;
	}
	if (width > 256)
	{
		width = 256;
	}
	gDPSetFillColor(gSYTaskmanDLHeads[0]++, syVideoGetFillColor(GPACK_RGBA8888(0xFF, 0xFF, 0xFF, 0xFF)));
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 30, pos_y, width + 30, pos_y + 1);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);

	// this needs to be in its own block to match. macro?
	// could explain the double sync
	{
		size_t mem_free = (size_t) ((uintptr_t)gSYTaskmanGeneralHeap.end - (uintptr_t)gSYTaskmanGeneralHeap.ptr);

		gDPSetFillColor(gSYTaskmanDLHeads[0]++, syVideoGetFillColor(GPACK_RGBA8888(0xFF, 0xFF, 0xFF, 0xFF)));
		func_800218E0(0x14, 0x14, mem_free, 7, 1);
		gDPPipeSync(gSYTaskmanDLHeads[0]++);
	}
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800A2B18
GObj* scManagerMakeMeterCamera(s32 link, u32 link_priority, u32 dl_link_priority)
{
	if (gcFindGObjByID(~0x10000000) != NULL)
	{
		return NULL;
	}
	else return gcMakeCameraGObj
	(
		~0x10000000,
		NULL,
		link,
		link_priority,
		scManagerMeterFuncDisplay,
		dl_link_priority,
		0,
		0,
		FALSE,
		nGCProcessKindThread,
		NULL,
		0,
		FALSE
	);
}

// 0x800A2BA8
void scManagerMakeDebugCameras(s32 link, u32 link_priority, s32 dl_link_priority)
{
	GObj *gobj = gcFindGObjByID(~0x1);

	if (gobj != NULL)
	{
		gcEjectGObj(gobj);
	}
	else syErrorMakeControllerCamera(link, link_priority, dl_link_priority);

	gobj = gcFindGObjByID(~0x10000000);

	if (gobj != NULL)
	{
		gcEjectGObj(gobj);
	}
	else scManagerMakeMeterCamera(link, link_priority, dl_link_priority);
}

// 0x800A2C30
void scManagerInspectGObj(GObj *gobj)
{
    FTStruct *fp;
    WPStruct *wp;
    ITStruct *ip;
    EFStruct *ep;

    syErrorDebugPrintf("gobj id:%d:", gobj->id);

    switch (gobj->id)
    {
    case nGCCommonKindFighter:
        fp = ftGetStruct(gobj);

        syErrorDebugPrintf("fighter\n");
        syErrorDebugPrintf("kind:%d, player:%d, pkind:%d\n", fp->fkind, fp->player, fp->pkind);
        syErrorDebugPrintf("stat:%d, mstat:%d\n", fp->status_id, fp->motion_id);
        syErrorDebugPrintf("ga:%d\n", fp->ga);
        break;

    case nGCCommonKindWeapon:
        wp = wpGetStruct(gobj);

        syErrorDebugPrintf("weapon\n");
        syErrorDebugPrintf("kind:%d, player:%d\n", wp->kind, wp->player);
        syErrorDebugPrintf("atk stat:%d\n", wp->attack_coll.attack_state);
        syErrorDebugPrintf("ga:%d\n", wp->ga);
        break;

    case nGCCommonKindItem:
        ip = itGetStruct(gobj);

        syErrorDebugPrintf("item\n");
        syErrorDebugPrintf("kind:%d, player:%d\n", ip->kind, ip->player);
        syErrorDebugPrintf("atk stat:%d\n", ip->attack_coll.attack_state);
        syErrorDebugPrintf("ga:%d\n", ip->ga);
        syErrorDebugPrintf("proc update:%x\n", ip->proc_update);
        syErrorDebugPrintf("proc map:%x\n", ip->proc_map);
        syErrorDebugPrintf("proc hit:%x\n", ip->proc_hit);
        syErrorDebugPrintf("proc shield:%x\n", ip->proc_shield);
        syErrorDebugPrintf("proc hop:%x\n", ip->proc_hop);
        syErrorDebugPrintf("proc setoff:%x\n", ip->proc_setoff);
        syErrorDebugPrintf("proc reflector:%x\n", ip->proc_reflector);
        syErrorDebugPrintf("proc damage:%x\n", ip->proc_damage);
        break;

    case nGCCommonKindEffect:
        ep = efGetStruct(gobj);

        // Check if address is within base RDRAM + expansion pak bounds (why though!?)
        if (((uintptr_t)ep >= 0x80000000) && ((uintptr_t)ep < 0x80800000))
        {
            syErrorDebugPrintf("effect\n");
            syErrorDebugPrintf("fgobj:%x", ep->fighter_gobj);
            syErrorDebugPrintf("proc func:%x\n", ep->proc_update);
        }
        else syErrorDebugPrintf("\n");
        break;

    default:
        syErrorDebugPrintf("\n");
        break;
    }
}

// 0x800A2E84
void scManagerFuncPrint(void)
{
	switch (dGCCurrentStatus)
	{
	case nGCStatusSystem:
		syErrorDebugPrintf("SYS\n");
		break;

	case nGCStatusRunning:
		syErrorDebugPrintf("BF\n");

		if (gGCCurrentCommon != NULL)
		{
			syErrorDebugPrintf("addr:%x\n", gGCCurrentCommon->func_run);
			scManagerInspectGObj(gGCCurrentCommon);
		}
		break;

	case nGCStatusProcessing:
		syErrorDebugPrintf("GP\n");

		if (gGCCurrentCommon != NULL)
		{
			if (gGCCurrentProcess != NULL)
			{
				switch (gGCCurrentProcess->kind)
				{
				case nGCProcessKindThread:
					syErrorDebugPrintf("thread:%x\n", gGCCurrentProcess->exec.gobjthread->thread.context.pc);
					break;

				case nGCProcessKindFunc:
					syErrorDebugPrintf("func:%x\n", gGCCurrentProcess->exec.func);
					break;
				}
			}
			scManagerInspectGObj(gGCCurrentCommon);
		}
		break;

	case nGCStatusCapturing:
		syErrorDebugPrintf("DFC\n");

		if (gGCCurrentCamera != NULL)
		{
			syErrorDebugPrintf("addr:%x\n", gGCCurrentCamera->func_display);
			scManagerInspectGObj(gGCCurrentCamera);
		}
		break;
		
	case nGCStatusDisplaying:
		syErrorDebugPrintf("DFO\n");

		if (gGCCurrentCamera != NULL)
		{
			syErrorDebugPrintf("cam addr:%x\n", gGCCurrentCamera->func_display);
		}
		if (gGCCurrentDisplay != NULL)
		{
			syErrorDebugPrintf("disp addr:%x\n", gGCCurrentDisplay->func_display);
			scManagerInspectGObj(gGCCurrentDisplay);
		}
		break;
	}
}

// 0x800A3040
void scManagerRunPrintGObjStatus(void)
{
	syErrorRunFuncPrint(scManagerFuncPrint);
}
