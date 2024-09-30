#ifndef _SCDEF_H_
#define _SCDEF_H_

#define SCBATTLE_TIMELIMIT_INFINITE 100
#define SCBATTLE_BONUSGAME_TASK_MAX 10

#define SC1PGAME_BONUS_MASK_CREATE(kind)    (1 << ((kind) - (((kind) / GS_BITCOUNT(u32, 1)) * GS_BITCOUNT(u32, 1))))

#define SCBATTLE_GAMERULE_TIME 	            (1 << nSCBattleGameRuleTime)	        // 0x1
#define SCBATTLE_GAMERULE_STOCK	            (1 << nSCBattleGameRuleStock)           // 0x2
#define SCBATTLE_GAMERULE_BONUS             (1 << nSCBattleGameRuleBonus) 	        // 0x4
#define SCBATTLE_GAMERULE_1PGAME            (1 << nSCBattleGameRule1PGame)          // 0x8

// First set of bonuses
#define SC1PGAME_BONUS_MASK0_CHEAPSHOT		(1 << nSC1PGameBonusCheapShot)          // One attack made up >= 35% of all attacks used
#define SC1PGAME_BONUS_MASK0_STARFINISH		(1 << nSC1PGameBonusStarFinish)	        // KO'd last enemy with a Star KO or Screen KO
#define SC1PGAME_BONUS_MASK0_NOITEM			(1 << nSC1PGameBonusNoItem)			    // Did not use any items
#define SC1PGAME_BONUS_MASK0_SHIELDBREAKER	(1 << nSC1PGameBonusShieldBreaker)      // Broke enemy's shield
#define SC1PGAME_BONUS_MASK0_JUDOWARRIOR	(1 << nSC1PGameBonusJudoWarrior)		// Only used throws
#define SC1PGAME_BONUS_MASK0_HAWK			(1 << nSC1PGameBonusHawk)		        // Only used aerials
#define SC1PGAME_BONUS_MASK0_SHOOTER		(1 << nSC1PGameBonusShooter)		    // Only used projectiles
#define SC1PGAME_BONUS_MASK0_HEAVYDAMAGE	(1 << nSC1PGameBonusHeavyDamage)		// Accumulated over 200% damage
#define SC1PGAME_BONUS_MASK0_ALLVARIATIONS	(1 << nSC1PGameBonusAllVariations)	    // Used all jabs, tilts, attacks and aerials
#define SC1PGAME_BONUS_MASK0_ITEMSTRIKE		(1 << nSC1PGameBonusItemStrike)		    // Only used items
#define SC1PGAME_BONUS_MASK0_DOUBLEKO		(1 << nSC1PGameBonusDoubleKO) 		    // Unused, translated from Japanese
#define SC1PGAME_BONUS_MASK0_TRICKSTER		(1 << nSC1PGameBonusTrickster)		    // KO'd every enemy of a team with a Star KO or Screen KO
#define SC1PGAME_BONUS_MASK0_GIANTIMPACT	(1 << nSC1PGameBonusGiantImpact)		// Unused, translated from Japanese
#define SC1PGAME_BONUS_MASK0_SPEEDSTER		(1 << nSC1PGameBonusSpeedster)		    // Cleared stage in less than 30 seconds
#define SC1PGAME_BONUS_MASK0_ITEMTHROW		(1 << nSC1PGameBonusItemThrow)		    // Threw or dropped all items, never used them in any other way
#define SC1PGAME_BONUS_MASK0_TRIPLEKO		(1 << nSC1PGameBonusTripleKO)		    // Unused, translated from Japanese
#define SC1PGAME_BONUS_MASK0_LASTCHANCE		(1 << nSC1PGameBonusLastChance)		    // Unused, translated from Japanese
#define SC1PGAME_BONUS_MASK0_PACIFIST		(1 << nSC1PGameBonusPacifist)		    // Cleared stage without dealing any damage
#define SC1PGAME_BONUS_MASK0_PERFECT		(1 << nSC1PGameBonusPerfect)		    // Cleared Bonus Stage with all targets broken or all platforms boarded
#define SC1PGAME_BONUS_MASK0_NOMISS			(1 << nSC1PGameBonusNoMiss)		        // Cleared stage without falling once throughout 1P Game progress; multiplied each time it is earned, lost after first fall
#define SC1PGAME_BONUS_MASK0_NODAMAGE		(1 << nSC1PGameBonusNoDamage)	        // Cleared stage without falling and taking any damage
#define SC1PGAME_BONUS_MASK0_FULLPOWER		(1 << nSC1PGameBonusFullPower)	        // Cleared stage with 0% damage (does not yield No Damage)
#define SC1PGAME_BONUS_MASK0_GAMECLEAR		(1 << nSC1PGameBonusGameClear)	        // Cleared Final Stage (number of bonus points depends on difficulty?)
#define SC1PGAME_BONUS_MASK0_NOMISSCLEAR	(1 << nSC1PGameBonusNoMissClear)	    // Cleared all stages without falling once (except Bonus Stages?)
#define SC1PGAME_BONUS_MASK0_NODAMAGECLEAR	(1 << nSC1PGameBonusNoDamageClear)	    // Cleared all stages without taking any damage
#define SC1PGAME_BONUS_MASK0_SPEEDKING		(1 << nSC1PGameBonusSpeedKing)	        // Cleared all stages in under 12 minutes (not earned if Speed Demon criteria is met)
#define SC1PGAME_BONUS_MASK0_SPEEDDEMON		(1 << nSC1PGameBonusSpeedDemon)	        // Cleared all stages in under 8 minutes
#define SC1PGAME_BONUS_MASK0_MEWCATCHER		(1 << nSC1PGameBonusMewCatcher)	        // Mew was released from player's Pok� Ball
#define SC1PGAME_BONUS_MASK0_STARCLEAR		(1 << nSC1PGameBonusStarClear)	        // Cleared stage while under the effect of Star Man
#define SC1PGAME_BONUS_MASK0_VEGETARIAN		(1 << nSC1PGameBonusVegetarian)	        // Consumed 3 or more Maxim Tomatoes
#define SC1PGAME_BONUS_MASK0_HEARTTHROB		(1 << nSC1PGameBonusHeartThrob)	        // Consumed 3 or more Hearts
#define SC1PGAME_BONUS_MASK0_THROWDOWN		(1 << nSC1PGameBonusThrowDown)	        // KO'd last enemy with a throw

// Second set of bonuses
#define SC1PGAME_BONUS_MASK1_SMASHMANIA		(1 << (nSC1PGameBonusSmashMania-32))    // Only used Smash Attacks
#define SC1PGAME_BONUS_MASK1_SMASHLESS		(1 << (nSC1PGameBonusSmashless-32))	    // Never used Smash Attacks
#define SC1PGAME_BONUS_MASK1_SPECIALMOVE	(1 << (nSC1PGameBonusSpecialMove-32))	// Only used Special Attacks
#define SC1PGAME_BONUS_MASK1_SINGLEMOVE		(1 << (nSC1PGameBonusSingleMove-32))    // Only used the same Special Attack
#define SC1PGAME_BONUS_MASK1_POKEMONFINISH	(1 << (nSC1PGameBonusPokemonFinish-32))	// KO'd last enemy with a Pok�mon (Saffron City Pok�mon projectiles also count, but not the Pok�mon themselves?)
#define SC1PGAME_BONUS_MASK1_BOOBYTRAP		(1 << (nSC1PGameBonusBoobyTrap-32))		// KO'd last enemy with a Motion Sensor Bomb
#define SC1PGAME_BONUS_MASK1_FIGHTERSTANCE	(1 << (nSC1PGameBonusFighterStance-32)) // Player was taunting as stage ended
#define SC1PGAME_BONUS_MASK1_MYSTIC			(1 << (nSC1PGameBonusMystic-32))		// Player fell as stage ended
#define SC1PGAME_BONUS_MASK1_COMETMYSTIC	(1 << (nSC1PGameBonusCometMystic-32))   // Player was getting Star KO'd as stage ended (Screen KOs do not count)
#define SC1PGAME_BONUS_MASK1_ACIDCLEAR		(1 << (nSC1PGameBonusAcidClear-32))		// Last enemy got KO'd by Acid
#define SC1PGAME_BONUS_MASK1_BUMPERCLEAR	(1 << (nSC1PGameBonusBumperClear-32))	// Last enemy got KO'd by Bumper
#define SC1PGAME_BONUS_MASK1_TORNADOCLEAR	(1 << (nSC1PGameBonusTornadoClear-32))  // Last enemy got KO'd by Tornado
#define SC1PGAME_BONUS_MASK1_ARWINGCLEAR	(1 << (nSC1PGameBonusArwingClear-32))	// Last enemy got KO'd by ARWING
#define SC1PGAME_BONUS_MASK1_COUNTERATTACK	(1 << (nSC1PGameBonusCounterAttack-32)) // Unused, translated from Japanese
#define SC1PGAME_BONUS_MASK1_METEORSMASH	(1 << (nSC1PGameBonusMeteorSmash-32))	// Unused, translated from Japanese
#define SC1PGAME_BONUS_MASK1_AERIAL			(1 << (nSC1PGameBonusAerial-32))		// Unused, translated from Japanese
#define SC1PGAME_BONUS_MASK1_LASTSECOND		(1 << (nSC1PGameBonusLastSecond-32))	// Cleared stage with 1 second left on the timer
#define SC1PGAME_BONUS_MASK1_LUCKY3			(1 << (nSC1PGameBonusLucky3-32))		// Cleared stage with 3:33 left on the timer
#define SC1PGAME_BONUS_MASK1_JACKPOT		(1 << (nSC1PGameBonusJackpot-32))		// Cleared stage with a damage % of two or three identical digits (e.g. 44% or 111%)
#define SC1PGAME_BONUS_MASK1_YOSHIRAINBOW	(1 << (nSC1PGameBonusYoshiRainbow-32))	// KO'd every member of Yoshi Team in the order they appeared
#define SC1PGAME_BONUS_MASK1_KIRBYRANKS		(1 << (nSC1PGameBonusKirbyRanks-32))	// KO'd every member of Kirby Team in the order they appeared
#define SC1PGAME_BONUS_MASK1_BROSCALAMITY	(1 << (nSC1PGameBonusBrosCalamity-32))	// KO'd Luigi before damaging Mario on VS Mario Bros. stage
#define SC1PGAME_BONUS_MASK1_DKDEFENDER		(1 << (nSC1PGameBonusDKDefender-32))	// Allies did not fall on VS. Giant Donkey Kong stage
#define SC1PGAME_BONUS_MASK1_DKPERFECT		(1 << (nSC1PGameBonusDKPerfect-32))	    // Allies did not fall and took no damage on VS. Giant Donkey Kong stage
#define SC1PGAME_BONUS_MASK1_GOODFRIEND		(1 << (nSC1PGameBonusGoodFriend-32))	// Ally did not fall on VS Mario Bros. stage
#define SC1PGAME_BONUS_MASK1_TRUEFRIEND		(1 << (nSC1PGameBonusTrueFriend-32))	// Ally did not fall and took no damage on VS Mario Bros. stage

// "DAMAGE", "COMBO", "ENEMY", "SPEED" text
#define SCTRAINING_STATDISPLAY_TEXT_COUNT 4
#define SCTRAINING_STATDISPLAY_CHARACTER_COUNT 39

#define SCTRAINING_DAMAGEDISPLAY_DIGIT_COUNT 3

#define SCTRAINING_COMBODISPLAY_DIGIT_COUNT 2

// Total menu description text sprite count
#define SCTRAINING_MENULABELS_SPRITE_COUNT 10

// Text describing what each option is for (orange text)
#define SCTRAINING_MENULABELS_TEXT_COUNT 6

// Wait this many frames before magnifying glass is shown again after changing
// back from Close-Up view
#define SCTRAINING_VIEW_MAGNIFY_WAIT 180

#define SCTRAINING_GENERAL_SCROLL_WAIT_NORMAL 30
#define SCTRAINING_GENERAL_SCROLL_WAIT_FAST 5

#define SCTRAINING_ITEMSPAWN_MAX 4
#define SCTRAINING_ITEMSPAWN_WAIT 8
#define SCTRAINING_ITEMSPAWN_VEL_Y 30.0F
#define SCTRAINING_ITEMSPAWN_OFF_Y 200.0F

#define SCTRAINING_INPUT_STICK_RANGE_MIN (I_CONTROLLER_RANGE_MAX / 2)

#define SCMANAGER_OVERLAY_DEFINE(OVL_NUM) 		\
{												\
	(uintptr_t)&_ovl##OVL_NUM##SegRomStart, 	\
	(uintptr_t)&_ovl##OVL_NUM##SegRomEnd,		\
	(uintptr_t)&_ovl##OVL_NUM##SegStart, 		\
	(uintptr_t)&_ovl##OVL_NUM##TextStart, 		\
	(uintptr_t)&_ovl##OVL_NUM##TextEnd, 		\
	(uintptr_t)&_ovl##OVL_NUM##DataStart,		\
	(uintptr_t)&_ovl##OVL_NUM##DataEnd,			\
	(uintptr_t)&_ovl##OVL_NUM##SegNoloadStart,	\
	(uintptr_t)&_ovl##OVL_NUM##SegNoloadEnd		\
}

/*
#define SCMANAGER_OVERLAY_DEFINE(OVL_NUM) 		\
{												\
	(uintptr_t)&ovl##OVL_NUM##_ROM_START, 		\
	(uintptr_t)&ovl##OVL_NUM##_ROM_END,			\
	(uintptr_t)&ovl##OVL_NUM##_VRAM, 			\
	(uintptr_t)&ovl##OVL_NUM##_TEXT_START, 		\
	(uintptr_t)&ovl##OVL_NUM##_TEXT_END, 		\
	(uintptr_t)&ovl##OVL_NUM##_DATA_START,		\
	(uintptr_t)&ovl##OVL_NUM##_RODATA_END,		\
	(uintptr_t)&ovl##OVL_NUM##_BSS_START,		\
	(uintptr_t)&ovl##OVL_NUM##_BSS_END			\
}
*/

typedef enum scKind
{
	nSCKindNoController,      	  // "No Controller" screen
	nSCKindTitle,             	  // Title screen
	nSCKindDebugMaps,      	  	  // Debug stage select
	nSCKindDebugSystem,      	  // Debug main menu?
	nSCKindDebugFighters,      	  // Debug character select
	nSCKindDebugVSResults,    	  // Debug results screen
	nSCKindDebugPadTest,      	  // Debug joystick test
	nSCKindModeSelect,            // Main Menu
	nSCKind1PMode,            	  // 1P mode menu
	nSCKindVSMode,        		  // VS mode
	nSCKindVSOptions,         	  // VS mode options
	nSCKindVSItemSwitch,		  // VS mode item switch
	nSCKindMessage,		  	      // Unlock message 
	nSCKind1PChallenger,   		  // Challenger approaching
	nSCKind1PStageCard,       	  // 1P game "[player] VS [opponent]" screen
	nSCKindScreenAdjust,      	  // Screen adjust
	nSCKindVSFighters,            // VS mode character select
	nSCKind1PGameFighters,		  // 1P game character select
	nSCKind1PTrainingFighters,    // Training mode character select
	nSCKind1PBonus1Fighters,      // Bonus 1 practice character select
	nSCKind1PBonus2Fighters,      // Bonus 2 practice character select
	nSCKindVSMaps,     	  		  // VS mode map select
	nSCKindVSBattle,          	  // VS mode in-game
	nSCKindVSResults = 24,    	  // VS mode results
	nSCKindVSRecord,          	  // Records screen
	nSCKindCharacters,        	  // Character data screen
	nSCKindN64,               	  // N64 logo
	nSCKindOpeningRoom,       	  // Room with Master Hand and figures coming to life
	nSCKindOpeningYoster = 39,	  // Yoshis in nest with eggs on Yoshi's Island
	nSCKindOpeningStandoff = 41,  // Dark plains with Mario and Kirby in a standoff
	nSCKindOpeningYamabuki,  	  // Pikachu rocking on Poké Ball
	nSCKindOpeningClash,          // Characters clashing with each other, doing Neutral Aerials
	nSCKindOpeningSector,		  // Great Fox, Arwings and Fox scene
	nSCKindOpeningJungle,	      // DK VS Samus scene
	nSCKindOpeningNewcomers,      // Last intro scene with hidden characters
	nSCKindBackupClear,  	      // Save data clear
	nSCKindEnding,            	  // Ending cutscene
	nSCKind1PContinue,        	  // "Continue?" screen
	nSCKind1PScoreUnk,   	  	  // Stage clear bonus thing?
	nSCKind1PStageClear, 		  // Stage clear bonus score
	nSCKind1PGame,            	  // 1P Game logic loop
	nSCKind1PBonusGame,       	  // Bonus game in-game
	nSCKind1PTraining,    		  // Training mode in-game
	nSCKindCongra,	 		  	  // Congratulations screen
	nSCKindStaffroll,             // Credits scene
	nSCKindOptions,           	  // Options menu
	nSCKindData,              	  // Data menu
	nSCKindSoundTest,        	  // Sound Test
	nSCKindExplain,         	  // How to Play
	nSCKindAutoDemo               // Auto-Demo

} scKind;

typedef enum scBattlePlayerColor
{
	nSCBattlePlayerColorRed,
	nSCBattlePlayerColorBlue,
	nSCBattlePlayerColorYellow,
	nSCBattlePlayerColorGreen,
	nSCBattlePlayerColorCP

} scBattlePlayerColor;

typedef enum scBattleTeamID
{
    nSCBattleTeamIDRed,
    nSCBattleTeamIDBlue,
    nSCBattleTeamIDGreen,
    nSCBattleTeamIDCom

} scBattleTeamID;

typedef enum scBattleGameStatus
{
	nSCBattleGameStatusWait,	   // Match not yet started
	nSCBattleGameStatusGo,		   // Ongoing match
	nSCBattleGameStatusPause,	   // Player paused
	nSCBattleGameStatusUnpause,	   // Player unpaused
	nSCBattleGameStatusEnd = 5,	   // Normal match end
	nSCBattleGameStatusBossDefeat, // Master Hand defeated
	nSCBattleGameStatusSet		   // Player has input A + B + Z + R / 1P Game Stage End?

} scBattleGameStatus;

typedef enum scBattleItemSwitch
{
	nSCBattleItemSwitchNone,
	nSCBattleItemSwitchVeryLow,
	nSCBattleItemSwitchLow,
	nSCBattleItemSwitchMiddle,
	nSCBattleItemSwitchHigh,
	nSCBattleItemSwitchVeryHigh,
	nSCBattleItemSwitchEnumMax

} scBattleItemSwitch;

typedef enum scBattleGameRules
{
	nSCBattleGameRuleTime,
	nSCBattleGameRuleStock,
	nSCBattleGameRuleBonus,
	nSCBattleGameRule1PGame

} scBattleGameRules;

typedef enum scBattleGameType
{
	nSCBattleGameTypeDemo,          // 0x0
	nSCBattleGameTypeRoyal,        	// 0x1
	nSCBattleGameTypeBonus,         // 0x2
	nSCBattleGameTypeExplain,       // 0x3
	nSCBattleGameTypeOpening,       // 0x4
	nSCBattleGameType1PGame,        // 0x5
	nSCBattleGameTypeUnk6,          // 0x6
	nSCBattleGameTypeTraining   	// 0x7

} scBattleGameType;

typedef enum sc1PGameDifficulty
{
	nSC1PGameDifficultyVeryEasy,
	nSC1PGameDifficultyEasy,
	nSC1PGameDifficultyNormal,
	nSC1PGameDifficultyHard,
	nSC1PGameDifficultyVeryHard

} sc1PGameDifficulty;

typedef enum sc1PGameStageKind
{
	nSC1PGameStageCommonStart,
	nSC1PGameStageLink = nSC1PGameStageCommonStart,			// VS Link
	nSC1PGameStageYoshi,									// VS Yoshi Team
	nSC1PGameStageFox,										// VS Fox
	nSC1PGameStageBonus1,									// Break the Targets
	nSC1PGameStageMario,									// VS Mario Bros.
	nSC1PGameStagePikachu, 									// VS Pikachu
	nSC1PGameStageDonkey,									// VS Giant Donkey Kong
	nSC1PGameStageBonus2,									// Board the Platforms
	nSC1PGameStageKirby,									// VS Kirby Team
	nSC1PGameStageSamus,									// VS Samus
	nSC1PGameStageMMario,									// VS Metal Mario
	nSC1PGameStageBonus3,									// Race to the Finish
	nSC1PGameStageZako,										// VS Fighting Polygon Team
	nSC1PGameStageBoss,										// VS Master Hand
	nSC1PGameStageCommonEnd = nSC1PGameStageBoss,

	nSC1PGameStageChallengerStart,						   	// Start of unlockable character stages
	nSC1PGameStageLuigi = nSC1PGameStageChallengerStart, 	// Challenger Approaching: Luigi
	nSC1PGameStageNess,								   		// Challenger Approaching: Ness
	nSC1PGameStagePurin,								   	// Challenger Approaching: Jigglypuff
	nSC1PGameStageCaptain,								   	// Challenger Approaching: Captain Falcon
	nSC1PGameStageChallengerEnd = nSC1PGameStageCaptain  	// End of unlockable character stages

} sc1PGameStageKind;

typedef enum sc1PGameBonus
{
	nSC1PGameBonusCheapShot,
	nSC1PGameBonusStarFinish,
	nSC1PGameBonusNoItem,
	nSC1PGameBonusShieldBreaker,
	nSC1PGameBonusJudoWarrior,
	nSC1PGameBonusHawk,
	nSC1PGameBonusShooter,
	nSC1PGameBonusHeavyDamage,
	nSC1PGameBonusAllVariations,
	nSC1PGameBonusItemStrike,
	nSC1PGameBonusDoubleKO,
	nSC1PGameBonusTrickster,
	nSC1PGameBonusGiantImpact,
	nSC1PGameBonusSpeedster,
	nSC1PGameBonusItemThrow,
	nSC1PGameBonusTripleKO,
	nSC1PGameBonusLastChance,
	nSC1PGameBonusPacifist,
	nSC1PGameBonusPerfect,
	nSC1PGameBonusNoMiss,
	nSC1PGameBonusNoDamage,
	nSC1PGameBonusFullPower,
	nSC1PGameBonusGameClear,
	nSC1PGameBonusNoMissClear,
	nSC1PGameBonusNoDamageClear,
	nSC1PGameBonusSpeedKing,
	nSC1PGameBonusSpeedDemon,
	nSC1PGameBonusMewCatcher,
	nSC1PGameBonusStarClear,
	nSC1PGameBonusVegetarian,
	nSC1PGameBonusHeartThrob,
	nSC1PGameBonusThrowDown,
	nSC1PGameBonusSmashMania,
	nSC1PGameBonusSmashless,
	nSC1PGameBonusSpecialMove,
	nSC1PGameBonusSingleMove,
	nSC1PGameBonusPokemonFinish,
	nSC1PGameBonusBoobyTrap,
	nSC1PGameBonusFighterStance,
	nSC1PGameBonusMystic,
	nSC1PGameBonusCometMystic,
	nSC1PGameBonusAcidClear,
	nSC1PGameBonusBumperClear,
	nSC1PGameBonusTornadoClear,
	nSC1PGameBonusArwingClear,
	nSC1PGameBonusCounterAttack,
	nSC1PGameBonusMeteorSmash,
	nSC1PGameBonusAerial,
	nSC1PGameBonusLastSecond,
	nSC1PGameBonusLucky3,
	nSC1PGameBonusJackpot,
	nSC1PGameBonusYoshiRainbow,
	nSC1PGameBonusKirbyRanks,
	nSC1PGameBonusBrosCalamity,
	nSC1PGameBonusDKDefender,
	nSC1PGameBonusDKPerfect,
	nSC1PGameBonusGoodFriend,
	nSC1PGameBonusTrueFriend,
	nSC1PGameBonusEnumMax

} sc1PGameBonus;

typedef enum sc1PContinueOption
{
    nSC1PContinueOptionYes,
    nSC1PContinueOptionNo,
    nSC1PContinueOptionEnumMax

} sc1PContinueOption;

typedef enum sc1PStageClearKind
{
	nSC1PStageClearKindStage,        // Normal stage clear
	nSC1PStageClearKindGame,         // Final stage clear
	nSC1PStageClearKindResult        // Bonus stage results

} sc1PStageClearKind;

typedef enum scTrainingMain
{
	nSCTrainingMenuMainEnumStart,

	nSCTrainingMenuMainCP = nSCTrainingMenuMainEnumStart,

	nSCTrainingMenuMainScrollStart = nSCTrainingMenuMainCP,
	nSCTrainingMenuMainItem,
	nSCTrainingMenuMainSpeed,
	nSCTrainingMenuMainView,
	nSCTrainingMenuMainScrollEnd = nSCTrainingMenuMainView,

	nSCTrainingMenuMainReset,
	nSCTrainingMenuMainExit,

	nSCTrainingMenuMainEnumMax

} scTrainingMain;

typedef enum scTrainingCP
{
	nSCTrainingMenuCPEnumStart,
	nSCTrainingMenuCPStand = nSCTrainingMenuCPEnumStart,
	nSCTrainingMenuCPWalk,
	nSCTrainingMenuCPEvade,
	nSCTrainingMenuCPJump,
	nSCTrainingMenuCPAttack,
	nSCTrainingMenuCPEnumMax

} scTrainingCP;

typedef enum scTrainingIT
{
	nSCTrainingMenuItemEnumStart,
	nSCTrainingMenuItemNone = nSCTrainingMenuItemEnumStart,
	nSCTrainingMenuItemMaximTomato,
	nSCTrainingMenuItemHeart,
	nSCTrainingMenuItemStar,
	nSCTrainingMenuItemBeamSword,
	nSCTrainingMenuItemHomeRunBat,
	nSCTrainingMenuItemFan,
	nSCTrainingMenuItemStarRod,
	nSCTrainingMenuItemRayGun,
	nSCTrainingMenuItemFireFlower,
	nSCTrainingMenuItemHammer,
	nSCTrainingMenuItemMotionSensorBomb,
	nSCTrainingMenuItemBobomb,
	nSCTrainingMenuItemBumper,
	nSCTrainingMenuItemGreenShell,
	nSCTrainingMenuItemRedShell,
	nSCTrainingMenuItemPokeBall,
	nSCTrainingMenuItemEnumMax

} scTrainingIT;

typedef enum scTrainingSpeed
{
	nSCTrainingMenuSpeedEnumStart,
	nSCTrainingMenuSpeedFull = nSCTrainingMenuSpeedEnumStart,
	nSCTrainingMenuSpeed2Thirds,
	nSCTrainingMenuSpeedHalf,
	nSCTrainingMenuSpeedQuarter,
	nSCTrainingMenuSpeedEnumMax

} scTrainingSpeed;

typedef enum scTrainingView
{
	nSCTrainingMenuViewEnumStart,
	nSCTrainingMenuViewCloseUp = nSCTrainingMenuViewEnumStart,
	nSCTrainingMenuViewNormal,
	nSCTrainingMenuViewEnumMax

} scTrainingView;

typedef enum nSCTrainingMenuOptionSprites
{
	nSCTrainingMenuOptionSpriteItemStart,
	nSCTrainingMenuOptionSpriteItemNone = nSCTrainingMenuOptionSpriteItemStart,
	nSCTrainingMenuOptionSpriteItemMaximTomato,
	nSCTrainingMenuOptionSpriteItemHeart,
	nSCTrainingMenuOptionSpriteItemStar,
	nSCTrainingMenuOptionSpriteItemBeamSword,
	nSCTrainingMenuOptionSpriteItemHomeRunBat,
	nSCTrainingMenuOptionSpriteItemFan,
	nSCTrainingMenuOptionSpriteItemStarRod,
	nSCTrainingMenuOptionSpriteItemRayGun,
	nSCTrainingMenuOptionSpriteItemFireFlower,
	nSCTrainingMenuOptionSpriteItemHammer,
	nSCTrainingMenuOptionSpriteItemMotionSensorBomb,
	nSCTrainingMenuOptionSpriteItemBobomb,
	nSCTrainingMenuOptionSpriteItemBumper,
	nSCTrainingMenuOptionSpriteItemGreenShell,
	nSCTrainingMenuOptionSpriteItemRedShell,
	nSCTrainingMenuOptionSpriteItemPokeBall,
	nSCTrainingMenuOptionSpriteItemEnd = nSCTrainingMenuOptionSpriteItemPokeBall,

	nSCTrainingMenuOptionSpriteSpeedStart,
	nSCTrainingMenuOptionSpriteSpeedFull = nSCTrainingMenuOptionSpriteSpeedStart,
	nSCTrainingMenuOptionSpriteSpeed2Thirds,
	nSCTrainingMenuOptionSpriteSpeedHalf,
	nSCTrainingMenuOptionSpriteSpeedQuarter,
	nSCTrainingMenuOptionSpriteSpeedEnd = nSCTrainingMenuOptionSpriteSpeedQuarter,

	nSCTrainingMenuOptionSpriteCPStart,
	nSCTrainingMenuOptionSpriteCPStand = nSCTrainingMenuOptionSpriteCPStart,
	nSCTrainingMenuOptionSpriteCPWalk,
	nSCTrainingMenuOptionSpriteCPEvade,
	nSCTrainingMenuOptionSpriteCPJump,
	nSCTrainingMenuOptionSpriteCPAttack,
	nSCTrainingMenuOptionSpriteCPEnd = nSCTrainingMenuOptionSpriteCPAttack,

	nSCTrainingMenuOptionSpriteViewStart,
	nSCTrainingMenuOptionSpriteViewNormal = nSCTrainingMenuOptionSpriteViewStart,
	nSCTrainingMenuOptionSpriteViewCloseUp,
	nSCTrainingMenuOptionSpriteViewEnd = nSCTrainingMenuOptionSpriteViewCloseUp,

	nSCTrainingMenuOptionSpriteIndicatorStart,
	nSCTrainingMenuOptionSpriteLeftArrow = nSCTrainingMenuOptionSpriteIndicatorStart,
	nSCTrainingMenuOptionSpriteRightArrow,
	nSCTrainingMenuOptionSpriteCursor, 	// Red orb + underline

	nSCTrainingMenuOptionSpriteEnumMax

} nSCTrainingMenuOptionSprites;

typedef struct sc1PGameComputer				sc1PGameComputer;
typedef struct sc1PGameStage				sc1PGameStage;
typedef struct sc1PGameFighter				sc1PGameFighter;
typedef struct sc1PGameStats				sc1PGameStats;
typedef struct sc1PGameBossPlan				sc1PGameBossPlan;
typedef struct sc1PGameBossAnim				sc1PGameBossAnim;
typedef struct sc1PGameBossEffect			sc1PGameBossEffect;
typedef struct sc1PGameBossWallpaper		sc1PGameBossWallpaper;
typedef struct sc1PGameBossMain				sc1PGameBossMain;
typedef struct sc1PStageClearStats			sc1PStageClearStats;
typedef struct sc1PStageClearScore			sc1PStageClearScore;
typedef struct sc1PStageCardFighter			sc1PStageCardFighter;
typedef struct scTrainingSprites			scTrainingSprites;
typedef struct scTrainingFiles				scTrainingFiles;
typedef struct scExplainMain				scExplainMain;
typedef struct scExplainArgs				scExplainArgs;
typedef struct scExplainPhase				scExplainPhase;
typedef struct scAutoDemoProc				scAutoDemoProc;
typedef struct scBattleResults				scBattleResults;
typedef struct scPlayerData					scPlayerData;
typedef struct scBattleState				scBattleState;
typedef struct scCommonData					scCommonData;

#endif
