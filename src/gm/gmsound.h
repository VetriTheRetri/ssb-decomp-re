#ifndef _GMSOUND_H_
#define _GMSOUND_H_

#include <ssb_types.h>

typedef struct alSoundEffect
{
	void* unk_0x0;
	void* unk_0x4;
	void* unk_0x8;
	void* unk_0xC;
	u16 unk_0x10;
	u16 unk_0x12;
	u16 unk_0x14;
	u16 unk_0x16;
	u16 unk_0x18;
	u16 unk_0x1A;
	u16 unk_0x1C;
	u16 unk_0x1E;
	u16 unk_0x20;
	u16 unk_0x22;
	u16 unk_0x24;
	u16 sfx_id;
	u16 sfx_max; // End of SFX index list

} alSoundEffect;

typedef enum gmMusicID
{
	nSYAudioBGMPupupu,						// Dream Land
	nSYAudioBGMZebes,						// Planet Zebes
	nSYAudioBGMInishie,						// Mushroom Kingdom
	nSYAudioBGMInishieHurry,				// Mushroom Kingdom 20-second countdown warning
	nSYAudioBGMSector,						// Sector Z
	nSYAudioBGMJungle,						// Kongo Jungle
	nSYAudioBGMCastle,						// Peach's Castle
	nSYAudioBGMYamabuki,					// Saffron City
	nSYAudioBGMYoster,						// Yoshi's Island
	nSYAudioBGMHyrule,						// Hyrule Castle
	nSYAudioBGMMenuFGSelect,				// Character / Stage Select
	nSYAudioBGMUnusedClear,					// Unused fanfare?
	nSYAudioBGMWinMario,					// Mario Victory
	nSYAudioBGMWinSamus,					// Samus Victory
	nSYAudioBGMWinDonkey,					// Donkey Kong Victory
	nSYAudioBGMWinKirby,					// Kirby Victory
	nSYAudioBGMWinFox,						// Fox Victory
	nSYAudioBGMWinMother,					// Ness Victory
	nSYAudioBGMWinYoshi,					// Yoshi Victory
	nSYAudioBGMWinCaptain,					// Captain Falcon Victory
	nSYAudioBGMWinMonster,					// Pokémon Victory
	nSYAudioBGMWinZelda,					// Link Victory
	nSYAudioBGMResults,						// VS Mode Results Screen
	nSYAudioBGMBossStage,					// Final Stage Card (VS. Master Hand)
	nSYAudioBGMBossEntry,					// Master Hand Appears
	nSYAudioBGMLast,						// Final Destination
	nSYAudioBGMBonus,						// Bonus Stage
	nSYAudioBGMStageClear,					// 1P Game Stage Cleared
	nSYAudioBGMBonusClear,					// Bonus Stage Cleared
	nSYAudioBGMGameClear,					// Final Stage Cleared
	nSYAudioBGMBonusFailure,				// Bonus Stage Failed
	nSYAudioBGM1PGameEndChoice,				// Continue or Game Over?
	nSYAudioBGM1PGameOver,					// Game Over
	nSYAudioBGMOpening,						// Opening Movie
	nSYAudioBGMExplain,						// How to Play
	nSYAudioBGM1PGameStage,					// 1P Game Stage Cards
	nSYAudioBGMZako,						// Battlefield
	nSYAudioBGMMetal,						// Meta Crystal
	nSYAudioBGMEnding,						// Ending Movie
	nSYAudioBGMStaffRoll,					// Credits
	nSYAudioBGMSecret,						// Secret Found
	nSYAudioBGMChallengerStage,				// Challenger Approaching
	nSYAudioBGMTrainingMode,				// Training Mode
	nSYAudioBGMData,						// Character Data / VS Records
	nSYAudioBGMModeSelect,					// Main Menu
	nSYAudioBGMHammer,            			// Hammer
    nSYAudioBGMStarman,                   	// Star
	nSYAudioBGMEnd

} gmMusicID;

typedef enum gmFGMVoiceID
{
	nSYAudioFGMExplodeS,
	nSYAudioFGMExplodeL,
	nSYAudioFGMFireShoot1,
	nSYAudioFGMUnkShoot1,
	nSYAudioFGMUnkDial1,
	nSYAudioFGMChargeShotAll,
	nSYAudioFGMUnkSmallPing1,
	nSYAudioFGMBlaster,
	nSYAudioFGMSamusJump1,
	nSYAudioFGMDonkeySlap1,
	nSYAudioFGMDonkeySlap2,
	nSYAudioFGMEscape,		// Roll
	nSYAudioFGMDeadUpStar, // Star KO spark
	nSYAudioFGMGuardOn,	// Put up shield
	nSYAudioFGMGuardOff,
	nSYAudioFGMShieldBreak,
	nSYAudioFGMShieldBreakPitchLw,
	nSYAudioFGMHeavySwing1,
	nSYAudioFGMLightSwingLw1,
	nSYAudioFGMCatch, // Grab
	nSYAudioFGMDoorClose,
	nSYAudioFGMTrainingSel,
	nSYAudioFGMShockL,
	nSYAudioFGMShockM,
	nSYAudioFGMShockS,
	nSYAudioFGMBurnL,
	nSYAudioFGMBurnE, // Burn empty (empty Fire Flower)
	nSYAudioFGMBurnM,
	nSYAudioFGMBurnS,
	nSYAudioFGMShockML,
	nSYAudioFGMFirefox,
	nSYAudioFGMKickL,
	nSYAudioFGMKickM,
	nSYAudioFGMDeadFall, // Plays when dying in a blast zone?
	nSYAudioFGMKickS,
	nSYAudioFGMUnkTap1,
	nSYAudioFGMFireShoot2,
	nSYAudioFGMPunchL,
	nSYAudioFGMPunchM,
	nSYAudioFGMUnkSlam1,
	nSYAudioFGMPunchS,
	nSYAudioFGMLightSwingL,
	nSYAudioFGMLightSwingM,
	nSYAudioFGMLightSwingS,
	nSYAudioFGMMSBombAttach,
	nSYAudioFGMBombHeiFuse,
	nSYAudioFGMItemMapCollide, // Item falls on ground
	nSYAudioFGMBumperHit,
	nSYAudioFGMFireFlowerBurn,
	nSYAudioFGMItemPickup,
	nSYAudioFGMHammerSwing,
	nSYAudioFGMHarisenHit,
	nSYAudioFGMBatHit,
	nSYAudioFGMStarMapCollide,
	nSYAudioFGMStarCollect,
	nSYAudioFGMBombHeiWalkStart,
	nSYAudioFGMShellHit,
	nSYAudioFGMItemThrow,
	nSYAudioFGMItemSpawn1,
	nSYAudioFGMContainerSmash,
	nSYAudioFGMFireFlowerShoot,
	nSYAudioFGMLGunShoot,
	nSYAudioFGMLGunEmpty,
	nSYAudioFGMStarRodSwing4,
	nSYAudioFGMStarRodSwing3,
	nSYAudioFGMStarRodSwing1,
	nSYAudioFGMStarRodEmpty,
	nSYAudioFGMSwordSwing4,
	nSYAudioFGMSwordSwing3,
	nSYAudioFGMSwordSwing1,
	nSYAudioFGMTaruBombHit, // Hit entity?
	nSYAudioFGMTaruBombMap, // Collide with wall?
	nSYAudioFGMFootstep1,
	nSYAudioFGMFootstep2,
	nSYAudioFGMFootstep3,
	nSYAudioFGMFootstep4,
	nSYAudioFGMFootstep5,
	nSYAudioFGMFootstep6,
	nSYAudioFGMFootstep7,
	nSYAudioFGMFootstep8,
	nSYAudioFGMFootstep9,
	nSYAudioFGMSamusLandingClick,
	nSYAudioFGMFootstep10,
	nSYAudioFGMUnkGrind2,
	nSYAudioFGMUnkGrind3,
	nSYAudioFGMUnkGrind4,
	nSYAudioFGMInflateJump1,
	nSYAudioFGMUnkGrind5,
	nSYAudioFGMSamusJump2,
	nSYAudioFGMUnkNessPSI,
	nSYAudioFGMInflateJump2,
	nSYAudioFGMInflateJump3,
	nSYAudioFGMSamusJumpAerial,
	nSYAudioFGMInflateJump4,
	nSYAudioFGMKirbyPurinJump,
	nSYAudioFGMGroundGrind1,
	nSYAudioFGMGroundGrind2,
	nSYAudioFGMInflateJump5,
	nSYAudioFGMGroundGrind3,
	nSYAudioFGMInflateJump6,
	nSYAudioFGMNessJump,
	nSYAudioFGMInflateJump7,
	nSYAudioFGMInflateJump8,
	nSYAudioFGMGroundGrind4,
	nSYAudioFGMInflateJump9,
	nSYAudioFGMDonkeyFoot, // Might be footsteps? They are very quiet
	nSYAudioFGMCaptainFoot,
	nSYAudioFGMFoxFoot,
	nSYAudioFGMKirbyFoot,
	nSYAudioFGMLinkFoot,
	nSYAudioFGMMarioFoot,				// Also Luigi
	nSYAudioFGMNessFoot,
	nSYAudioFGMPikachuFoot,
	nSYAudioFGMPurinFoot,
	nSYAudioFGMSamusFoot,
	nSYAudioFGMYoshiFoot,
	nSYAudioFGMDonkeyDash,
	nSYAudioFGMCaptainDash,
	nSYAudioFGMFoxDash,
	nSYAudioFGMKirbyDash,
	nSYAudioFGMLinkDash,
	nSYAudioFGMMarioDash,				// Also Luigi
	nSYAudioFGMMMarioFoot,				// Metal Mario footstep
	nSYAudioFGMMMarioDash, 				// Unconfirmed, Metal Mario uses the above ID 122 for all foot sounds
	nSYAudioFGMNessDash,
	nSYAudioFGMPikachuDash,
	nSYAudioFGMPurinDash,
	nSYAudioFGMSamusDash,
	nSYAudioFGMGroundBrakeGrind,
	nSYAudioFGMUnkEchoHit1,
	nSYAudioFGMYoshiDash,
	nSYAudioFGMDogasSmog,
	nSYAudioFGMIwarkRockCreate,
	nSYAudioFGMKabigonFall,
	nSYAudioFGMKabigonJump, // ???
	nSYAudioFGMKamexHydro,
	nSYAudioFGMLizardonFlame,
	nSYAudioFGMMewFly,
	nSYAudioFGMNyarsCoin,
	nSYAudioFGMMBallOpen,
	nSYAudioFGMMonsterShoot, // Venusaur and Starmie firing sound effect
	nSYAudioFGMTosakintoSplash,
	nSYAudioFGMDairantouKickL,
	nSYAudioFGMDairantouKickM,
	nSYAudioFGMDairantouKickS,
	nSYAudioFGMDairantouPunchL,
	nSYAudioFGMDairantouPunchM,
	nSYAudioFGMDairantouPunchS,
	nSYAudioFGMWindAmbient1,
	nSYAudioFGMUnkWhirr3,
	nSYAudioFGMPublicCheer1,
	nSYAudioFGMUnkBatS,
	nSYAudioFGMUnkBatM,
	nSYAudioFGMDeadPortalLw,	// Bottom map_bound warning sound?
	nSYAudioFGMMapBoundHitL, 	// One of many sounds that play when entering the blast zones
	nSYAudioFGMMapBoundHitS,
	nSYAudioFGMUnkMechanical1, 	// Menu sound?
	nSYAudioFGMTitlePressStart,
	nSYAudioFGMMenuSelect,
	nSYAudioFGMMapSelect,
	nSYAudioFGM1PGameContinue,
	nSYAudioFGM1PGameContinueMulti,
	nSYAudioFGMTrainingSel2,
	nSYAudioFGMMenuScroll1, 		// Scroll vertically?
	nSYAudioFGMMenuScroll2, 		// Scroll horizontally / vertically in Training Mode
	nSYAudioFGMMenuDenied,
	nSYAudioFGMPlayerGateClose,  	// Plays when player's character portrait is closed on the CSS?
	nSYAudioFGMPlayerGateWhoosh, 	// Might be unrelated
	nSYAudioFGMUnkMetallic2,
	nSYAudioFGMStageClearScoreRegister,
	nSYAudioFGMStageClearScoreDisplay,
	nSYAudioFGMUnkSwoosh1,
	nSYAudioFGMBossDefeatL,
	nSYAudioFGMUnkGate1,
	nSYAudioFGMBossYubi,
	nSYAudioFGMBossSlam,
	nSYAudioFGMBossUnk1,
	nSYAudioFGMBossUnk2,
	nSYAudioFGMDonkeySpin,	  		// Spinning kong swing sound effect
	nSYAudioFGMDonkeyCharge, 		// These two might be swapped
	nSYAudioFGMCaptainAppearCar1,
	nSYAudioFGMCaptainAppearCar2,
	nSYAudioFGMCaptainSpecialHi,
	nSYAudioFGMCaptainSpecialNStart,
	nSYAudioFGMCaptainSpecialNPunch,
	nSYAudioFGMFoxSpecialN, 		// Blaster again???
	nSYAudioFGMFoxSpecialHiStart,
	nSYAudioFGMFoxSpecialHiFly,
	nSYAudioFGMFoxSpecialLwHit,
	nSYAudioFGMFoxSpecialLwStart,
	nSYAudioFGMFoxAttackAirLw,
	nSYAudioFGMFoxAppearArwing,
	nSYAudioFGMUnkMechanical4,
	nSYAudioFGMUnkLongWind,
	nSYAudioFGMKirbySpecialLwLanding,
	nSYAudioFGMKirbyAttackAirHi,
	nSYAudioFGMKirbySpecialNThrow,
	nSYAudioFGMKirbySpecialNCopyEat,
	nSYAudioFGMKirbySpecialNCopyThrow,
	nSYAudioFGMKirbySpecialNCopyUnk,
	nSYAudioFGMKirbyStarPing1,
	nSYAudioFGMKirbyStarPing2,
	nSYAudioFGMKirbySpecialLwStart,
	nSYAudioFGMKirbySpecialNStart,
	nSYAudioFGMKirbySpecialNLoseCopy,
	nSYAudioFGMLinkSpecialLwGet,
	nSYAudioFGMLinkSpecialNThrow,
	nSYAudioFGMLinkSpecialNDraw,
	nSYAudioFGMLinkSpecialNReturn,
	nSYAudioFGMLinkSpecialHi,
	nSYAudioFGMLinkCatchHookshot,
	nSYAudioFGMLinkAppear,
	nSYAudioFGMMarioAppealGrow,
	nSYAudioFGMMarioAppealShrink,
	nSYAudioFGMMarioDokan,
	nSYAudioFGMMarioSpecialN,
	nSYAudioFGMMarioSpecialHiCoin,
	nSYAudioFGMMarioSpecialHiJump,
	nSYAudioFGMMarioUnkSwing1, 		// Down air or down special?
	nSYAudioFGMMarioUnkSwing2,
	nSYAudioFGMCharacterUnk1,
	nSYAudioFGMNessPKThunderLoop,
	nSYAudioFGMNessPSI,
	nSYAudioFGMNessPSIAgain, 		// Huh
	nSYAudioFGMNessSpecialLwStart,
	nSYAudioFGMNessSpecialHiCrack1, // Might be Pikachu's Thunder Jolt
	nSYAudioFGMNessSpecialHiCrack2,
	nSYAudioFGMNessSpecialHiCrack3,
	nSYAudioFGMNessSpecialHiCrack4,
	nSYAudioFGMNessSpecialHiCrack5,
	nSYAudioFGMNessSpecialHiCrackLoop,
	nSYAudioFGMPikachuSpecialHiStart,
	nSYAudioFGMPikachuSpecialLwThunder,
	nSYAudioFGMCharacterUnk2,
	nSYAudioFGMCharacterUnk3,
	nSYAudioFGMSamusSpecialNShootF,
	nSYAudioFGMSamusSpecialNShootL,
	nSYAudioFGMSamusSpecialNShootM,
	nSYAudioFGMSamusSpecialNShootS,
	nSYAudioFGMSamusSpecialNCharge0,
	nSYAudioFGMSamusSpecialNCharge1,
	nSYAudioFGMSamusSpecialNCharge2,
	nSYAudioFGMSamusSpecialNCharge3,
	nSYAudioFGMSamusSpecialNCharge4,
	nSYAudioFGMSamusSpecialNCharge5,
	nSYAudioFGMSamusSpecialNCharge6,
	nSYAudioFGMSamusSpecialNCharge7,
	nSYAudioFGMSamusSpecialLw,
	nSYAudioFGMSamusCatchGrappleBeam,
	nSYAudioFGMSamusSpecialHi,
	nSYAudioFGMSamusUnkSwing,
	nSYAudioFGMSamusUnkCharge,
	nSYAudioFGMYoshiEggShatter1,
	nSYAudioFGMYoshiEggShatter2,
	nSYAudioFGMYoshiSpecialNTongue,
	nSYAudioFGMYoshiEggShatter3,
	nSYAudioFGMYoshiSpecialHiThrow,
	nSYAudioFGMYoshiEggLayShatter,
	nSYAudioFGMBladeSwing4,
	nSYAudioFGMBladeSwing3,
	nSYAudioFGMBladeSwing1,
	nSYAudioFGMSlashL,
	nSYAudioFGMSlashM,
	nSYAudioFGMSlashS,
	nSYAudioFGMBladeDraw,
	nSYAudioFGMSectorArwingLaser,
	nSYAudioFGMSectorAmbient1,
	nSYAudioFGMSectorAmbient2,
	nSYAudioFGMSectorAmbient3,
	nSYAudioFGMOptionsDataErase,
	nSYAudioFGMYamabukiGate, 				// Empty?
	nSYAudioFGMMagnify,
	nSYAudioFGMShinePingUnk,
	nSYAudioFGMBonusComplete,
	nSYAudioFGMPlayerHeal, 					// High-pitched short click, sped up Mario Fireball?
	nSYAudioFGMYosterCloudVapor,
	nSYAudioFGMStockSteal,
	nSYAudioFGMBonus2PlatformLanding, 		// Land on Bonus 2 platform
	nSYAudioFGMGamePause,
	nSYAudioFGMInishiePowerBlock, 			// POW Block
	nSYAudioFGMBonus1TargetBreak, 			// Break Bonus 1 target
    nSYAudioFGMJungleTaruCannShoot,
    nSYAudioFGMJungleTaruCannEnter,
	nSYAudioFGMHyruleTwisterSpawn,
	nSYAudioFGMHyruleTwisterTrapped,
	nSYAudioFGMPupupuWhispyWind, 			// Despawn?
	nSYAudioFGMFloorDamageBurn,
	nSYAudioFGMDonkeyDeadSlam,		  		// 0x11F
	nSYAudioFGMCaptainDeadSlam,		  		// 0x120
	nSYAudioFGMFoxDeadSlam,			  		// 0x121
	nSYAudioFGMKirbyDeadSlam,		  		// 0x122
	nSYAudioFGMLinkDeadSlam,			  	// 0x123
	nSYAudioFGMMarioDeadSlam,		  		// 0x124
	nSYAudioFGMNessDeadSlam,			  	// 0x125
	nSYAudioFGMPikachuDeadSlam,		  		// 0x126
	nSYAudioFGMPurinDeadSlam,		  		// 0x127
	nSYAudioFGMSamusDeadSlam,		  		// 0x128
	nSYAudioFGMYoshiDeadSlam,		  		// 0x129
	nSYAudioFGMDonkeyDownBounce,			// 0x12A
	nSYAudioFGMCaptainDownBounce,		  	// 0x12B
	nSYAudioFGMFoxDownBounce,			  	// 0x12C
	nSYAudioFGMKirbyDownBounce,		  		// 0x12D
	nSYAudioFGMLinkDownBounce,			  	// 0x12E
	nSYAudioFGMMarioDownBounce,		  		// 0x12F
	nSYAudioFGMNessDownBounce,			  	// 0x130
	nSYAudioFGMPikachuDownBounce,		  	// 0x131
	nSYAudioFGMPurinDownBounce,		  		// 0x132
	nSYAudioFGMSamusDownBounce,		  		// 0x133
	nSYAudioFGMYoshiDownBounce,		  		// 0x134
	nSYAudioVoiceMBallDogasAppear,
	nSYAudioVoiceMBallIwarkAppear,
	nSYAudioVoiceMBallKabigonFall,
	nSYAudioVoiceMBallKabigonAppear,
	nSYAudioVoiceMBallKamexAppear,
	nSYAudioVoiceMBallLuckyAppear,
	nSYAudioVoiceMBallMewAppear,
	nSYAudioVoiceMBallPippiAppear,
	nSYAudioVoiceMBallLizardonAppear,
	nSYAudioVoiceMBallSawamuraAppear,
	nSYAudioVoiceMBallSawamuraKick,
	nSYAudioVoiceMBallSpearAppear,
	nSYAudioVoiceMBallSpearSwarm,
	nSYAudioVoiceMBallStarmieAppear,
	nSYAudioVoiceMBallTosakintoAppear,
	nSYAudioVoiceDonkeyFuraSleep,
	nSYAudioVoiceDonkeyAppeal,
	nSYAudioVoiceDonkeySmash1,
	nSYAudioVoiceDonkeySmash2,
	nSYAudioVoiceDonkeySmash3,
	nSYAudioVoiceDonkeySpecialNPunch,
	nSYAudioVoiceDonkeyDeadUp,
	nSYAudioVoiceDonkeyFuraFura,
	nSYAudioVoiceDonkeyDamage,
	nSYAudioVoiceDonkeyDead1,
	nSYAudioVoiceDonkeyHeavyGet,
	nSYAudioVoiceDonkeyHeavyUnk,
	nSYAudioVoiceDonkeyDead2,
	nSYAudioVoiceCaptainAppeal,
	nSYAudioVoiceCaptainYes,
	nSYAudioVoiceCaptainSmash1,
	nSYAudioVoiceCaptainSmash2,
	nSYAudioVoiceCaptainSmash3,
	nSYAudioVoiceCaptainSmash4,
	nSYAudioVoiceCaptainFinalComeOn,
	nSYAudioVoiceCaptainSmash5, 		// Same as Smash 3 or 4?
	nSYAudioVoiceCaptainAttackS4,
	nSYAudioVoiceCaptainSpecialLw,
	nSYAudioVoiceCaptainSpecialNPunch,
	nSYAudioVoiceCaptainSpecialNFalcon,
	nSYAudioVoiceCaptainDeadUp,
	nSYAudioVoiceCaptainFuraFura,
	nSYAudioVoiceCaptainDamage,
	nSYAudioVoiceCaptainUnkPing1,
	nSYAudioVoiceCaptainJumpAerial, 	// ??? Same as Captain Falcon's airdodge in Melee
	nSYAudioVoiceCaptainHeavyGet,
	nSYAudioVoiceCaptainDead,
	nSYAudioVoiceCaptainFuraSleep,
	nSYAudioVoiceCaptainUnkQuick,
	nSYAudioVoiceCaptainUnkPing2,
	nSYAudioVoiceCaptainUnkPing3,
	nSYAudioVoiceFoxDeadUp,
	nSYAudioVoiceFoxAppeal,
	nSYAudioVoiceFoxSpecialHiFire,
	nSYAudioVoiceFoxJumpAerial,
	nSYAudioVoiceFoxEscape,
	nSYAudioVoiceFoxSelected,
	nSYAudioVoiceFoxFinalIke,
	nSYAudioVoiceFoxUnkGrunt,
	nSYAudioVoiceFoxResult, 			// Same as Appeal and Selected
	nSYAudioVoiceFoxGrunt2,
	nSYAudioVoiceFoxDead,
	nSYAudioVoiceFoxFuraSleep,
	nSYAudioVoiceFoxSmash1,
	nSYAudioVoiceFoxSmash2,
	nSYAudioVoiceFoxSmash3,
	nSYAudioVoiceFoxDamage,
	nSYAudioVoiceFoxFuraFura,
	nSYAudioVoiceKirbyAppeal,
	nSYAudioVoiceKirbySmash1,
	nSYAudioVoiceKirbySmash2,
	nSYAudioVoiceKirbySmash3,
	nSYAudioVoiceAnnounceComplete = 0x1CB,
	nSYAudioVoiceAnnounceNewRecord = 0x1D0,
	nSYAudioVoiceYamabukiFushigibana = 0x228,
	nSYAudioVoiceYamabukiHitokage,
	nSYAudioVoiceYamabukiLucky,
	nSYAudioVoiceYamabukiMarumine,
	nSYAudioVoiceYamabukiPorygon,
	nSYAudioVoicePublicityDonkey = 0x25B,	// 0x25B
	nSYAudioVoicePublicityCaptain,		  	// 0x25C
	nSYAudioVoicePublicityFox,			  	// 0x25D
	nSYAudioVoicePublicityKirby,		  	// 0x25E
	nSYAudioVoicePublicityLink,		  	// 0x25F
	nSYAudioVoicePublicityLuigi,			// 0x260
	nSYAudioVoicePublicityMario,		  	// 0x261
	nSYAudioVoicePublicityNess,			// 0x262
	nSYAudioVoicePublicityPikachu,		  	// 0x263
	nSYAudioVoicePublicityPurin,		 	// 0x264
	nSYAudioVoicePublicitySamus,		 	// 0x265
	nSYAudioVoicePublicityYoshi,		  	// 0x266
	nSYAudioFGMVoiceEnd = 0x2B7,
	nSYAudioFGMEnumMax = 0x2B7

} gmFGMVoiceID;

#endif
