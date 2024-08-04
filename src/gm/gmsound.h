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
	nGMSoundBGMPupupu,						// Dream Land
	nGMSoundBGMZebes,						// Planet Zebes
	nGMSoundBGMInishie,						// Mushroom Kingdom
	nGMSoundBGMInishieHurry,				// Mushroom Kingdom 20-second countdown warning
	nGMSoundBGMSector,						// Sector Z
	nGMSoundBGMJungle,						// Kongo Jungle
	nGMSoundBGMCastle,						// Peach's Castle
	nGMSoundBGMYamabuki,					// Saffron City
	nGMSoundBGMYoster,						// Yoshi's Island
	nGMSoundBGMHyrule,						// Hyrule Castle
	nGMSoundBGMMenuFGSelect,				// Character / Stage Select
	nGMSoundBGMUnusedClear,					// Unused fanfare?
	nGMSoundBGMWinMario,					// Mario Victory
	nGMSoundBGMWinSamus,					// Samus Victory
	nGMSoundBGMWinDonkey,					// Donkey Kong Victory
	nGMSoundBGMWinKirby,					// Kirby Victory
	nGMSoundBGMWinFox,						// Fox Victory
	nGMSoundBGMWinMother,					// Ness Victory
	nGMSoundBGMWinYoshi,					// Yoshi Victory
	nGMSoundBGMWinCaptain,					// Captain Falcon Victory
	nGMSoundBGMWinMonster,					// Pokémon Victory
	nGMSoundBGMWinZelda,					// Link Victory
	nGMSoundBGMResults,						// VS Mode Results Screen
	nGMSoundBGMBossStage,					// Final Stage Card (VS. Master Hand)
	nGMSoundBGMBossEntry,					// Master Hand Appears
	nGMSoundBGMLast,						// Final Destination
	nGMSoundBGMBonus,						// Bonus Stage
	nGMSoundBGMStageClear,					// 1P Game Stage Cleared
	nGMSoundBGMBonusClear,					// Bonus Stage Cleared
	nGMSoundBGMGameClear,					// Final Stage Cleared
	nGMSoundBGMBonusFailure,				// Bonus Stage Failed
	nGMSoundBGM1PGameEndChoice,				// Continue or Game Over?
	nGMSoundBGM1PGameOver,					// Game Over
	nGMSoundBGMOpening,						// Opening Movie
	nGMSoundBGMExplain,						// How to Play
	nGMSoundBGM1PGameStage,					// 1P Game Stage Cards
	nGMSoundBGMZako,						// Battlefield
	nGMSoundBGMMetal,						// Meta Crystal
	nGMSoundBGMEnding,						// Ending Movie
	nGMSoundBGMStaffRoll,					// Credits
	nGMSoundBGMSecret,						// Secret Found
	nGMSoundBGMChallengerStage,				// Challenger Approaching
	nGMSoundBGMTrainingMode,				// Training Mode
	nGMSoundBGMData,						// Character Data / VS Records
	nGMSoundBGMModeSelect,					// Main Menu
	nGMSoundBGMHammer,            			// Hammer
    nGMSoundBGMStarman,                   	// Star
	nGMSoundBGMEnd

} gmMusicID;

typedef enum gmFGMVoiceID
{
	nGMSoundFGMExplodeS,
	nGMSoundFGMExplodeL,
	nGMSoundFGMFireShoot1,
	nGMSoundFGMUnkShoot1,
	nGMSoundFGMUnkDial1,
	nGMSoundFGMChargeShotAll,
	nGMSoundFGMUnkSmallPing1,
	nGMSoundFGMBlaster,
	nGMSoundFGMSamusJump1,
	nGMSoundFGMDonkeySlap1,
	nGMSoundFGMDonkeySlap2,
	nGMSoundFGMEscape,		// Roll
	nGMSoundFGMDeadUpStar, // Star KO spark
	nGMSoundFGMGuardOn,	// Put up shield
	nGMSoundFGMGuardOff,
	nGMSoundFGMShieldBreak,
	nGMSoundFGMShieldBreakPitchLw,
	nGMSoundFGMHeavySwing1,
	nGMSoundFGMLightSwingLw1,
	nGMSoundFGMCatch, // Grab
	nGMSoundFGMDoorClose,
	nGMSoundFGMTModeSel,
	nGMSoundFGMShockL,
	nGMSoundFGMShockM,
	nGMSoundFGMShockS,
	nGMSoundFGMBurnL,
	nGMSoundFGMBurnE, // Burn empty (empty Fire Flower)
	nGMSoundFGMBurnM,
	nGMSoundFGMBurnS,
	nGMSoundFGMShockML,
	nGMSoundFGMFirefox,
	nGMSoundFGMKickL,
	nGMSoundFGMKickM,
	nGMSoundFGMDeadFall, // Plays when dying in a blast zone?
	nGMSoundFGMKickS,
	nGMSoundFGMUnkTap1,
	nGMSoundFGMFireShoot2,
	nGMSoundFGMPunchL,
	nGMSoundFGMPunchM,
	nGMSoundFGMUnkSlam1,
	nGMSoundFGMPunchS,
	nGMSoundFGMLightSwingL,
	nGMSoundFGMLightSwingM,
	nGMSoundFGMLightSwingS,
	nGMSoundFGMMSBombAttach,
	nGMSoundFGMBombHeiFuse,
	nGMSoundFGMItemMapCollide, // Item falls on ground
	nGMSoundFGMBumperHit,
	nGMSoundFGMFireFlowerBurn,
	nGMSoundFGMItemPickup,
	nGMSoundFGMHammerSwing,
	nGMSoundFGMHarisenHit,
	nGMSoundFGMBatHit,
	nGMSoundFGMStarMapCollide,
	nGMSoundFGMStarCollect,
	nGMSoundFGMBombHeiWalkStart,
	nGMSoundFGMShellHit,
	nGMSoundFGMItemThrow,
	nGMSoundFGMItemSpawn1,
	nGMSoundFGMContainerSmash,
	nGMSoundFGMFireFlowerShoot,
	nGMSoundFGMLGunShoot,
	nGMSoundFGMLGunEmpty,
	nGMSoundFGMStarRodSwing4,
	nGMSoundFGMStarRodSwing3,
	nGMSoundFGMStarRodSwing1,
	nGMSoundFGMStarRodEmpty,
	nGMSoundFGMSwordSwing4,
	nGMSoundFGMSwordSwing3,
	nGMSoundFGMSwordSwing1,
	nGMSoundFGMTaruBombHit, // Hit entity?
	nGMSoundFGMTaruBombMap, // Collide with wall?
	nGMSoundFGMFootstep1,
	nGMSoundFGMFootstep2,
	nGMSoundFGMFootstep3,
	nGMSoundFGMFootstep4,
	nGMSoundFGMFootstep5,
	nGMSoundFGMFootstep6,
	nGMSoundFGMFootstep7,
	nGMSoundFGMFootstep8,
	nGMSoundFGMFootstep9,
	nGMSoundFGMSamusLandingClick,
	nGMSoundFGMFootstep10,
	nGMSoundFGMUnkGrind2,
	nGMSoundFGMUnkGrind3,
	nGMSoundFGMUnkGrind4,
	nGMSoundFGMInflateJump1,
	nGMSoundFGMUnkGrind5,
	nGMSoundFGMSamusJump2,
	nGMSoundFGMUnkNessPSI,
	nGMSoundFGMInflateJump2,
	nGMSoundFGMInflateJump3,
	nGMSoundFGMSamusJumpAerial,
	nGMSoundFGMInflateJump4,
	nGMSoundFGMKirbyPurinJump,
	nGMSoundFGMGroundGrind1,
	nGMSoundFGMGroundGrind2,
	nGMSoundFGMInflateJump5,
	nGMSoundFGMGroundGrind3,
	nGMSoundFGMInflateJump6,
	nGMSoundFGMNessJump,
	nGMSoundFGMInflateJump7,
	nGMSoundFGMInflateJump8,
	nGMSoundFGMGroundGrind4,
	nGMSoundFGMInflateJump9,
	nGMSoundFGMFootstep11, // Might be footsteps? They are very quiet
	nGMSoundFGMFootstep12,
	nGMSoundFGMFootstep13,
	nGMSoundFGMFootstep14,
	nGMSoundFGMFootstep15,
	nGMSoundFGMFootstep16,
	nGMSoundFGMFootstep17,
	nGMSoundFGMFootstep18,
	nGMSoundFGMFootstep19,
	nGMSoundFGMFootstep20,
	nGMSoundFGMFootstep21,
	nGMSoundFGMFootstep22,
	nGMSoundFGMMMarioFoot = 0x7A,
	nGMSoundFGMMMarioLanding, // Unconfirmed
	nGMSoundFGMSamusTurnClick = 0x7F,
	nGMSoundFGMGroundBrakeGrind,
	nGMSoundFGMUnkEchoHit1,
	nGMSoundFGMDogasSmog = 0x83,
	nGMSoundFGMIwarkRockCreate,
	nGMSoundFGMKabigonFall,
	nGMSoundFGMKabigonJump, // ???
	nGMSoundFGMKamexHydro,
	nGMSoundFGMLizardonFlame,
	nGMSoundFGMMewFly,
	nGMSoundFGMNyarsCoin,
	nGMSoundFGMMBallOpen,
	nGMSoundFGMMonsterShoot, // Venusaur and Starmie firing sound effect
	nGMSoundFGMTosakintoSplash,
	nGMSoundFGMJKickL,
	nGMSoundFGMJKickM,
	nGMSoundFGMJKickS,
	nGMSoundFGMJPunchL,
	nGMSoundFGMJPunchM,
	nGMSoundFGMJPunchS,
	nGMSoundFGMWindAmbient1,
	nGMSoundFGMUnkWhirr3,
	nGMSoundFGMPublicCheer1,
	nGMSoundFGMUnkBatS,
	nGMSoundFGMUnkBatM,
	nGMSoundFGMDeadPortalLw,	// Bottom blastzone warning sound?
	nGMSoundFGMDeadPortalHitL, // One of many sounds that play when hitting
								// the blastzone
	nGMSoundFGMDeadPortalHitS,
	nGMSoundFGMUnkMechanical1, // Menu sound?
	nGMSoundFGMTitlePressStart,
	nGMSoundFGMMenuSelect,
	nGMSoundFGMMapSelect,
	nGMSoundFGM1PGameContinue,
	nGMSoundFGM1PGameContinueMulti,
	nGMSoundFGMTModeSel2,
	nGMSoundFGMMenuScroll1, // Scroll vertically?
	nGMSoundFGMMenuScroll2, // Scroll horizontally / vertically in Training Mode
	nGMSoundFGMMenuDenied,
	nGMSoundFGMPlayerGateClose,  // Plays when player's character portrait is
								  // closed on the CSS?
	nGMSoundFGMPlayerGateWhoosh, // Might be unrelated
	nGMSoundFGMUnkMetallic2,
	nGMSoundFGMUnkSoftPing1,
	nGMSoundFGMUnkClick1, // Samus?
	nGMSoundFGMUnkSwoosh1,
	nGMSoundFGMUnkHeavyLaser,
	nGMSoundFGMUnkGate1,
	nGMSoundFGMMasterHandYubi,
	nGMSoundFGMMasterHandSlam,
	nGMSoundFGMMasterHandUnk1,
	nGMSoundFGMMasterHandUnk2,
	nGMSoundFGMDonkeySpin,	  // Spinning kong swing sound effect
	nGMSoundFGMDonkeyCharge, // These two might be swapped
	nGMSoundFGMCaptainAppearCar1,
	nGMSoundFGMCaptainAppearCar2,
	nGMSoundFGMCaptainSpecialHi,
	nGMSoundFGMCaptainSpecialNStart,
	nGMSoundFGMCaptainSpecialNPunch,
	nGMSoundFGMFoxSpecialN, // Blaster again???
	nGMSoundFGMFoxSpecialHiStart,
	nGMSoundFGMFoxSpecialHiFly,
	nGMSoundFGMFoxSpecialLwHit,
	nGMSoundFGMFoxSpecialLwStart,
	nGMSoundFGMFoxAttackAirLw,
	nGMSoundFGMFoxAppearArwing,
	nGMSoundFGMUnkMechanical4,
	nGMSoundFGMUnkLongWind,
	nGMSoundFGMKirbySpecialLwLanding,
	nGMSoundFGMKirbyAttackAirHi,
	nGMSoundFGMKirbySpecialNThrow,
	nGMSoundFGMKirbySpecialNCopyEat,
	nGMSoundFGMKirbySpecialNCopyThrow,
	nGMSoundFGMKirbySpecialNCopyUnk,
	nGMSoundFGMKirbyStarPing1,
	nGMSoundFGMKirbyStarPing2,
	nGMSoundFGMKirbySpecialLwStart,
	nGMSoundFGMKirbySpecialNStart,
	nGMSoundFGMKirbySpecialNLoseCopy,
	nGMSoundFGMLinkSpecialLwGet,
	nGMSoundFGMLinkSpecialNThrow,
	nGMSoundFGMLinkSpecialNDraw,
	nGMSoundFGMLinkSpecialNReturn,
	nGMSoundFGMLinkSpecialHi,
	nGMSoundFGMLinkCatchHookshot,
	nGMSoundFGMLinkAppear,
	nGMSoundFGMMarioAppealGrow,
	nGMSoundFGMMarioAppealShrink,
	nGMSoundFGMMarioDokan,
	nGMSoundFGMMarioSpecialN,
	nGMSoundFGMMarioSpecialHiCoin,
	nGMSoundFGMMarioSpecialHiJump,
	nGMSoundFGMMarioUnkSwing1, // Down air or down special?
	nGMSoundFGMMarioUnkSwing2,
	nGMSoundFGMCharacterUnk1,
	nGMSoundFGMNessPKThunderLoop,
	nGMSoundFGMNessPSI,
	nGMSoundFGMNessPSIAgain, // Huh
	nGMSoundFGMNessSpecialLwStart,
	nGMSoundFGMNessSpecialHiCrack1, // Might be Pikachu's Thunder Jolt
	nGMSoundFGMNessSpecialHiCrack2,
	nGMSoundFGMNessSpecialHiCrack3,
	nGMSoundFGMNessSpecialHiCrack4,
	nGMSoundFGMNessSpecialHiCrack5,
	nGMSoundFGMNessSpecialHiCrackLoop,
	nGMSoundFGMPikachuSpecialHiStart,
	nGMSoundFGMPikachuSpecialLwThunder,
	nGMSoundFGMCharacterUnk2,
	nGMSoundFGMCharacterUnk3,
	nGMSoundFGMSamusSpecialNShootF,
	nGMSoundFGMSamusSpecialNShootL,
	nGMSoundFGMSamusSpecialNShootM,
	nGMSoundFGMSamusSpecialNShootS,
	nGMSoundFGMSamusSpecialNCharge0,
	nGMSoundFGMSamusSpecialNCharge1,
	nGMSoundFGMSamusSpecialNCharge2,
	nGMSoundFGMSamusSpecialNCharge3,
	nGMSoundFGMSamusSpecialNCharge4,
	nGMSoundFGMSamusSpecialNCharge5,
	nGMSoundFGMSamusSpecialNCharge6,
	nGMSoundFGMSamusSpecialNCharge7,
	nGMSoundFGMSamusSpecialLw,
	nGMSoundFGMSamusCatchGrappleBeam,
	nGMSoundFGMSamusSpecialHi,
	nGMSoundFGMSamusUnkSwing,
	nGMSoundFGMSamusUnkCharge,
	nGMSoundFGMYoshiEggShatter1,
	nGMSoundFGMYoshiEggShatter2,
	nGMSoundFGMYoshiSpecialNTongue,
	nGMSoundFGMYoshiEggShatter3,
	nGMSoundFGMYoshiSpecialHiThrow,
	nGMSoundFGMYoshiEggLayShatter,
	nGMSoundFGMBladeSwing4,
	nGMSoundFGMBladeSwing3,
	nGMSoundFGMBladeSwing1,
	nGMSoundFGMSlashL,
	nGMSoundFGMSlashM,
	nGMSoundFGMSlashS,
	nGMSoundFGMBladeDraw,
	nGMSoundFGMSectorArwingLaser,
	nGMSoundFGMSectorAmbient1,
	nGMSoundFGMSectorAmbient2,
	nGMSoundFGMSectorAmbient3,
	nGMSoundFGMOptionsDataErase,
	nGMSoundFGMYamabukiGate, // Empty?
	nGMSoundFGMMagnify,
	nGMSoundFGMShinePingUnk,
	nGMSoundFGMBonusComplete,
	nGMSoundFGMPlayerHeal, // High-pitched short click, sped up Mario Fireball?
	nGMSoundFGMYosterCloudVapor,
	nGMSoundFGMStockSteal,
	nGMSoundFGMBonus2PlatformLanding, // Land on Bonus 2 platform
	nGMSoundFGMGamePause,
	nGMSoundFGMInishiePowerBlock, // POW Block
	nGMSoundFGMBonus1TargetBreak, // Break Bonus 1 target
    nGMSoundFGMJungleTaruCannShoot,
    nGMSoundFGMJungleTaruCannEnter,
	nGMSoundFGMHyruleTwisterSpawn,
	nGMSoundFGMHyruleTwisterTrapped,
	nGMSoundFGMPupupuWhispyWind, // Despawn?
	nGMSoundFGMFloorDamageBurn,
	nGMSoundFGMFighterBodySlamL,		  // This continues until 0x12A
	nGMSoundFGMDownBounceDonkey = 0x12A, // 0x12A; This continues until 0x135
	nGMSoundFGMDownBounceCaptain,		  // 0x12B
	nGMSoundFGMDownBounceFox,			  // 0x12C
	nGMSoundFGMDownBounceKirby,		  // 0x12D
	nGMSoundFGMDownBounceLink,			  // 0x12E
	nGMSoundFGMDownBounceMario,		  // 0x12F
	nGMSoundFGMDownBounceNess,			  // 0x130
	nGMSoundFGMDownBouncePikachu,		  // 0x131
	nGMSoundFGMDownBouncePurin,		  // 0x132
	nGMSoundFGMDownBounceSamus,		  // 0x133
	nGMSoundFGMDownBounceYoshi,		  // 0x134
	nGMSoundVoiceMBallDogasSpawn,
	nGMSoundVoiceMBallIwarkSpawn,
	nGMSoundVoiceMBallKabigonFall,
	nGMSoundVoiceMBallKabigonSpawn,
	nGMSoundVoiceMBallKamexSpawn,
	nGMSoundVoiceMBallLuckySpawn,
	nGMSoundVoiceMBallMewSpawn,
	nGMSoundVoiceMBallPippiSpawn,
	nGMSoundVoiceMBallLizardonSpawn,
	nGMSoundVoiceMBallSawamuraSpawn,
	nGMSoundVoiceMBallSawamuraKick,
	nGMSoundVoiceMBallSpearSpawn,
	nGMSoundVoiceMBallSpearSwarm,
	nGMSoundVoiceMBallStarmieSpawn,
	nGMSoundVoiceMBallTosakintoSpawn,
	nGMSoundVoiceDonkeyFuraSleep,
	nGMSoundVoiceDonkeyAppeal,
	nGMSoundVoiceDonkeySmash1,
	nGMSoundVoiceDonkeySmash2,
	nGMSoundVoiceDonkeySmash3,
	nGMSoundVoiceDonkeySpecialNPunch,
	nGMSoundVoiceDonkeyDeadUp,
	nGMSoundVoiceDonkeyFuraFura,
	nGMSoundVoiceDonkeyDamage,
	nGMSoundVoiceDonkeyDead1,
	nGMSoundVoiceDonkeyHeavyGet,
	nGMSoundVoiceDonkeyHeavyUnk,
	nGMSoundVoiceDonkeyDead2,
	nGMSoundVoiceCaptainAppeal,
	nGMSoundVoiceCaptainYes,
	nGMSoundVoiceCaptainSmash1,
	nGMSoundVoiceCaptainSmash2,
	nGMSoundVoiceCaptainSmash3,
	nGMSoundVoiceCaptainSmash4,
	nGMSoundVoiceCaptainFinalComeOn,
	nGMSoundVoiceCaptainSmash5, // Same as Smash 3 or 4?
	nGMSoundVoiceCaptainAttackS4,
	nGMSoundVoiceCaptainSpecialLw,
	nGMSoundVoiceCaptainSpecialNPunch,
	nGMSoundVoiceCaptainSpecialNFalcon,
	nGMSoundVoiceCaptainDeadUp,
	nGMSoundVoiceCaptainFuraFura,
	nGMSoundVoiceCaptainDamage,
	nGMSoundVoiceCaptainUnkPing1,
	nGMSoundVoiceCaptainJumpAerial, // ??? Same as Captain Falcon's airdodge
									 // in Melee
	nGMSoundVoiceCaptainHeavyGet,
	nGMSoundVoiceCaptainDead,
	nGMSoundVoiceCaptainFuraSleep,
	nGMSoundVoiceCaptainUnkQuick,
	nGMSoundVoiceCaptainUnkPing2,
	nGMSoundVoiceCaptainUnkPing3,
	nGMSoundVoiceFoxDeadUp,
	nGMSoundVoiceFoxAppeal,
	nGMSoundVoiceFoxSpecialHiFire,
	nGMSoundVoiceFoxJumpAerial,
	nGMSoundVoiceFoxEscape,
	nGMSoundVoiceFoxSelected,
	nGMSoundVoiceFoxFinalIke,
	nGMSoundVoiceFoxUnkGrunt,
	nGMSoundVoiceFoxResult, // Same as Appeal and Selected
	nGMSoundVoiceFoxGrunt2,
	nGMSoundVoiceFoxDead,
	nGMSoundVoiceFoxFuraSleep,
	nGMSoundVoiceFoxSmash1,
	nGMSoundVoiceFoxSmash2,
	nGMSoundVoiceFoxSmash3,
	nGMSoundVoiceFoxDamage,
	nGMSoundVoiceFoxFuraFura,
	nGMSoundVoiceKirbyAppeal,
	nGMSoundVoiceKirbySmash1,
	nGMSoundVoiceKirbySmash2,
	nGMSoundVoiceKirbySmash3,
	nGMSoundVoiceAnnounceComplete = 0x1CB,
	nGMSoundVoiceAnnounceNewRecord = 0x1D0,
	nGMSoundVoiceYamabukiFushigibana = 0x228,
	nGMSoundVoiceYamabukiHitokage,
	nGMSoundVoiceYamabukiLucky,
	nGMSoundVoiceYamabukiMarumine,
	nGMSoundVoiceYamabukiPorygon,
	nGMSoundVoicePublicityDonkey = 0x25B,	// 0x25B
	nGMSoundVoicePublicityCaptain,		  	// 0x25C
	nGMSoundVoicePublicityFox,			  	// 0x25D
	nGMSoundVoicePublicityKirby,		  	// 0x25E
	nGMSoundVoicePublicityLink,		  	// 0x25F
	nGMSoundVoicePublicityLuigi,			// 0x260
	nGMSoundVoicePublicityMario,		  	// 0x261
	nGMSoundVoicePublicityNess,			// 0x262
	nGMSoundVoicePublicityPikachu,		  	// 0x263
	nGMSoundVoicePublicityPurin,		 	// 0x264
	nGMSoundVoicePublicitySamus,		 	// 0x265
	nGMSoundVoicePublicityYoshi,		  	// 0x266
	nGMSoundFGMVoiceEnd = 0x2B7

} gmFGMVoiceID;

#endif
