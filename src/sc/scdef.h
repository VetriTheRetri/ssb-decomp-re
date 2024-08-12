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

typedef enum scBattlePlayerColor
{
	nSCBattlePlayerColorRed,
	nSCBattlePlayerColorBlue,
	nSCBattlePlayerColorYellow,
	nSCBattlePlayerColorGreen,
	nSCBattlePlayerColorCP

} scBattlePlayerColor;

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
	nSCBattleItemSwitchVeryHigh

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
	nSC1PGameStageMetal,									// VS Metal Mario
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
	nSCTrainingMenuOptionSpriteCursor, // Red orb + underline

	nSCTrainingMenuOptionSpriteEnumMax

} nSCTrainingMenuOptionSprites;

typedef struct sc1PGameComputer				sc1PGameComputer;
typedef struct sc1PGameStage				sc1PGameStage;
typedef struct sc1PGameFighter				sc1PGameFighter;
typedef struct sc1PGameStats				sc1PGameStats;
typedef struct sc1PStageClearStats			sc1PStageClearStats;
typedef struct sc1PStageClearScore			sc1PStageClearScore;
typedef struct scTrainingSprites			scTrainingSprites;
typedef struct scTrainingFiles				scTrainingFiles;
typedef struct scAutoDemoProc				scAutoDemoProc;
typedef struct scBattleResults				scBattleResults;
typedef struct scPlayerData					scPlayerData;
typedef struct scBattleState				scBattleState;
typedef struct scCommonData					scCommonData;

#endif
