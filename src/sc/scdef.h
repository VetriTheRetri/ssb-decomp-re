#ifndef _SCDEF_H_
#define _SCDEF_H_

typedef enum scKind
{
	nSCKindNoController,      	// "No Controller" screen
	nSCKindTitle,             	// Title screen
	nSCKindDebugMPSel,      	// Debug stage select
	nSCKindDebugSystem,      	// Debug main menu?
	nSCKindDebugChrSel,       	// Debug character select
	nSCKindDebugResScreen,    	// Debug results screen
	nSCKindDebugPadTest,      	// Debug joystick test
	nSCKindMainMenu,          	// Main Menu
	nSCKind1PMode,            	// 1P mode menu
	nSCKindVSMode,        		// VS mode
	nSCKindVSOptions,         	// VS mode options
	nSCKindMessage = 12,		// Unlock message 
	nSCKindChallenger,   		// Challenger approaching
	nSCKind1PTitleCard,       	// 1P game "[character] VS [opponent(s)]" screen
	nSCKindScreenAdjust,      	// Screen adjust
	nSCKindVSChrSel,          	// VS mode character select
	nSCKindTrainingChrSel = 18, // Training mode character select
	nSCKindBonus1ChrSel,      	// Bonus 1 character select
	nSCKindBonus2ChrSel,      	// Bonus 2 character select
	nSCKindVSMapSel = 21,     	// VS mode map select
	nSCKindVSBattle,          	// VS mode in-game
	nSCKindVSResults = 24,    	// VS mode results
	nSCKindVSRecord,          	// Records screen
	nSCKindCharacters,        	// Character data screen
	nSCKindN64,               	// N64 logo
	nSCKindOpeningRoom,       	// Room with Master Hand and figures coming to life
	nSCKindBackupClear = 47,  	// Save data clear
	nSCKindEnding,            	// Ending cutscene
	nSCKind1PContinue,        	// "Continue?" screen
	nSCKind1PScoreUnk = 50,   	// Stage clear bonus thing?
	nSCKind1PStageClear, 		// Stage clear bonus score page 1?
	nSCKind1PGame,            	// 1P Game logic loop
	nSCKind1PBonusGame,       	// Bonus game in-game
	nSCKind1PTraining,    		// Training mode in-game
	nSCKind1PCongra,	 		// Congratulations screen
	nSCKindCredits,           	// Credits scene
	nSCKindOptions,           	// Options menu
	nSCKindData,              	// Data menu
	nSCKindSoundTest,        	// Sound Test
	nSCKindExplain,         	// How to Play
	nSCKindDemo              	// Auto-Demo

} scKind;

#endif
