#include <mn/menu.h>
#include <gm/gmsound.h>
#include <sc/scene.h>
#include <ovl0/reloc_data_mgr.h>
#include <sys/system_00.h>
#include <sys/thread6.h>

extern void* func_800269C0_275C0(u16);
extern void func_80007080(void*, f32, f32, f32, f32);
extern GObj* func_8000B9FC();
extern GObj* func_8000B93C
(
	u32 id,
	void (*arg1)(GObj *),
	s32 link,
	u32 arg3,
	void (*arg4)(GObj *),
	u32 arg5,
	s64 arg7,
	s32 arg8,
	s32 arg9,
	s32 arg10,
	void *arg11,
	u32 arg12,
	s32 arg13
);
extern void func_ovl0_800CCF00(GObj*);
extern void func_ovl0_800CD2CC(GObj*);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_000000C5; 
extern uintptr_t D_NF_000000A4;
extern uintptr_t D_NF_00000020;
extern uintptr_t D_NF_00000000;
extern uintptr_t D_NF_000000C4;

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define mnSoundTestCheckGetOptionButtonInput(is_button, mask) \
mnCommonCheckGetOptionButtonInput(sMNSoundTestOptionChangeWait, is_button, mask)

#define mnSoundTestCheckGetOptionStickInputUD(stick_range, min, b) \
mnCommonCheckGetOptionStickInputUD(sMNSoundTestOptionChangeWait, stick_range, min, b)

#define mnSoundTestCheckGetOptionStickInputLR(stick_range, min, b) \
mnCommonCheckGetOptionStickInputLR(sMNSoundTestOptionChangeWait, stick_range, min, b)

#define mnSoundTestSetOptionChangeWaitP(is_button, stick_range, div) \
mnCommonSetOptionChangeWaitP(sMNSoundTestOptionChangeWait, is_button, stick_range, div)

#define mnSoundTestSetOptionChangeWaitN(is_button, stick_range, div) \
mnCommonSetOptionChangeWaitN(sMNSoundTestOptionChangeWait, is_button, stick_range, div)

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80134300
s32 sMNSoundTestPad0x80134300[2];

// 0x80134308
s32 sMNSoundTestOption;                                             // Sound Test option selected (0 = Music, 1 = Sound, 2 = Voice)

// 0x8013430C
s32 sMNSoundTestPad0x8013430C;

// 0x80134310
s32 sMNSoundTestOptionColorR[nMNSoundTestOptionEnumMax];            // R color value of sound test menu options

// 0x80134320
s32 sMNSoundTestOptionColorG[nMNSoundTestOptionEnumMax];            // G color value of sound test menu options

// 0x80134330
s32 sMNSoundTestOptionColorB[nMNSoundTestOptionEnumMax];            // B color value of sound test menu options

// 0x8013433C
s32 sMNSoundTestOptionChangeWait;                                   // Frames to wait before new sound test option can be selected

// 0x80134340                                                   
s32 sMNSoundTestDirectionInputKind;                                 // Type of directional input: 0 = none, 1 = left, 2 = right, 3 = up, 4 = down

// 0x80134344
s32 sMNSoundTestPad0x80134344;                                      // ???

// 0x80134348
s32 sMNSoundTestOptionSelectID[nMNSoundTestOptionEnumMax];          // Current selected ID of each option (e.g. Music is index 0 and holds a value from 0 to 44)

// 0x80134358
f32 sMNSoundTestSelectIDPositionsX[nMNSoundTestOptionEnumMax];      // X-Position of each selection ID

// 0x80134364
s32 sMNSoundTestFadeOutWait;                                        // Frames to wait until fadeout is complete

// 0x80134368
rdFileNode sMNSoundTestStatusBuf[32];

// 0x80134468
void *sMNSoundTestFiles[5];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x801339E0
u32 dMNSoundTestMusicIDs[/* */] =
{
    nSYAudioBGMOpening,
    nSYAudioBGMExplain,
    nSYAudioBGMData,
    nSYAudioBGMModeSelect,
    nSYAudioBGMCastle,
    nSYAudioBGMJungle,
    nSYAudioBGMHyrule,
    nSYAudioBGMZebes,
    nSYAudioBGMYoster,
    nSYAudioBGMPupupu,
    nSYAudioBGMSector,
    nSYAudioBGMYamabuki,
    nSYAudioBGMInishie,
    nSYAudioBGMInishieHurry,
    nSYAudioBGMWinMario,
    nSYAudioBGMWinDonkey,
    nSYAudioBGMWinZelda,
    nSYAudioBGMWinMetroid,
    nSYAudioBGMWinYoshi,
    nSYAudioBGMWinKirby,
    nSYAudioBGMWinFox,
    nSYAudioBGMWinMonster,
    nSYAudioBGMWinFZero,
    nSYAudioBGMWinMother,
    nSYAudioBGMResults,
    nSYAudioBGMHammer,
    nSYAudioBGMStar,
    nSYAudioBGMTrainingMode,
    nSYAudioBGM1PStageCard,
    nSYAudioBGMBossStage,
    nSYAudioBGMBossEntry,
    nSYAudioBGMLast,
    nSYAudioBGM1PBonusGame,
    nSYAudioBGM1PStageClear,
    nSYAudioBGM1PGameClear,
    nSYAudioBGM1PBonusGameClear,
    nSYAudioBGM1PBonusGameFailure,
    nSYAudioBGMZako,
    nSYAudioBGMMetal,
    nSYAudioBGMChallenger,
    nSYAudioBGMMessage,
    nSYAudioBGMEnding,
    nSYAudioBGM1PGameEndChoice,
    nSYAudioBGM1PGameOver,
    nSYAudioBGMStaffroll
};

// 0x80133A94
u32 dMNSoundTestSoundIDs[/* */] =
{
    nSYAudioFGMWindAmbient1,
    nSYAudioFGMUnkWhirr3,
    nSYAudioFGMPublicityPrologue,
    nSYAudioFGMOpeningBatM,
    nSYAudioFGMAltitudeWarn,
    nSYAudioFGMMapBoundHitL,
    nSYAudioFGMMapBoundHitS,
    nSYAudioFGMKickL,
    nSYAudioFGMKickM,
    nSYAudioFGMKickS,
    nSYAudioFGMPunchL,
    nSYAudioFGMPunchM,
    nSYAudioFGMPunchS,
    nSYAudioFGMLightSwingL,
    nSYAudioFGMLightSwingM,
    nSYAudioFGMLightSwingS,
    nSYAudioFGMShockL,
    nSYAudioFGMShockS,
    nSYAudioFGMBurnL,
    nSYAudioFGMBurnS,
    nSYAudioFGMDonkeyLanding,
    nSYAudioFGMUnkGrind2,
    nSYAudioFGMKirbyPurinJump,
    nSYAudioFGMDonkeyFoot,
    nSYAudioFGMSamusFoot,
    nSYAudioFGMMMarioFoot,
    nSYAudioFGMNessDash,
    nSYAudioFGMGroundBrakeGrind,
    nSYAudioFGMGuardOn,
    nSYAudioFGMGuardOff,
    nSYAudioFGMShieldBreak,
    nSYAudioFGMDonkeyDeadSlam,
    nSYAudioFGMYoshiDownBounce,
    nSYAudioFGMCharacterUnkZip1,
    nSYAudioFGMHeavySwing1,
    nSYAudioFGMLightSwingLw1,
    nSYAudioFGMCatch,
    nSYAudioFGMDeadUpStar,
    nSYAudioFGMEscape,
    nSYAudioFGMMSBombAttach,
    nSYAudioFGMBombHeiFuse,
    nSYAudioFGMItemMapCollide,
    nSYAudioFGMBumperHit,
    nSYAudioFGMFireFlowerBurn,
    nSYAudioFGMItemGet,
    nSYAudioFGMHammerSwing,
    nSYAudioFGMHarisenHit,
    nSYAudioFGMBatHit,
    nSYAudioFGMStarMapCollide,
    nSYAudioFGMStarGet,
    nSYAudioFGMBombHeiWalkStart,
    nSYAudioFGMShellHit,
    nSYAudioFGMItemThrow,
    nSYAudioFGMItemSpawn1,
    nSYAudioFGMContainerSmash,
    nSYAudioFGMFireFlowerShoot,
    nSYAudioFGMLGunShoot,
    nSYAudioFGMLGunEmpty,
    nSYAudioFGMStarRodSwing4,
    nSYAudioFGMStarRodSwing1,
    nSYAudioFGMStarRodEmpty,
    nSYAudioFGMSwordSwing4,
    nSYAudioFGMSwordSwing1,
    nSYAudioFGMTaruBombHit,
    nSYAudioFGMTaruBombMap,
    nSYAudioFGMExplodeL,
    nSYAudioFGMFireShoot1,
    nSYAudioFGMShockML, // Left off at: 0x80133BA4
    nSYAudioFGMMarioAppealGrow,
    nSYAudioFGMMarioAppealShrink,
    nSYAudioFGMUnkDial1,
    nSYAudioFGMMarioSpecialN,
    nSYAudioFGMExplodeS,
    nSYAudioFGMMarioSpecialHiJump,
    nSYAudioFGMMarioSpecialHiCoin,
    nSYAudioFGMMarioUnkSwing1,
    nSYAudioFGMBossSlam,
    nSYAudioFGMBossUnk1,
    nSYAudioFGMBossUnk2,
    nSYAudioFGMDonkeyCharge,
    nSYAudioFGMLinkSpecialLwGet,
    nSYAudioFGMLinkSpecialNReturn,
    nSYAudioFGMLinkSpecialNShoot,
    nSYAudioFGMLinkSpecialNGet,
    nSYAudioFGMLinkSpecialHi,
    nSYAudioFGMLinkCatchHookshot,
    nSYAudioFGMLinkAppear,
    nSYAudioFGMBladeSwing4,
    nSYAudioFGMBladeSwing3,
    nSYAudioFGMBladeSwing1,
    nSYAudioFGMSlashL,
    nSYAudioFGMSlashM,
    nSYAudioFGMSlashS,
    nSYAudioFGMBladeDraw,
    nSYAudioFGMChargeShotAll,
    nSYAudioFGMUnkSmallPing1,
    nSYAudioFGMFoxBlaster,
    nSYAudioFGMSamusJump1,
    nSYAudioFGMSamusSpecialNShootL,
    nSYAudioFGMSamusSpecialNShootS,
    nSYAudioFGMSamusSpecialNCharge0,
    nSYAudioFGMSamusSpecialNCharge7,
    nSYAudioFGMSamusSpecialLw,
    nSYAudioFGMSamusCatchGrappleBeam,
    nSYAudioFGMSamusSpecialHi,
    nSYAudioFGMSamusUnkSwing,
    nSYAudioFGMSamusUnkCharge,
    nSYAudioFGMYoshiEggShatter1,
    nSYAudioFGMYoshiSpecialNTongue,
    nSYAudioFGMYoshiEggShatter3,
    nSYAudioFGMYoshiSpecialHiThrow,
    nSYAudioFGMYoshiEggLayShatter, // Left off at: 0x80133C54
    nSYAudioFGMUnkMechanical4,
    nSYAudioFGMUnkLongWind,
    nSYAudioFGMKirbySpecialLwLanding,
    nSYAudioFGMKirbyAttackAirHi,
    nSYAudioFGMKirbySpecialNThrow,
    nSYAudioFGMKirbySpecialNCopyEat,
    nSYAudioFGMKirbySpecialNCopyThrow,
    nSYAudioFGMKirbySpecialNCopyUnk,
    nSYAudioFGMKirbyStarPing2,
    nSYAudioFGMKirbySpecialLwStart,
    nSYAudioFGMKirbySpecialNStart,
    nSYAudioFGMKirbySpecialNLoseCopy,
    nSYAudioFGMFoxSpecialN,
    nSYAudioFGMFoxSpecialHiStart,
    nSYAudioFGMFoxSpecialHiFly,
    nSYAudioFGMFoxSpecialLwHit,
    nSYAudioFGMFoxSpecialLwStart,
    nSYAudioFGMFoxAttackAirLw,
    nSYAudioFGMFoxAppearArwing,
    nSYAudioFGMUnkShoot1,
    nSYAudioFGMPikachuElectric1,
    nSYAudioFGMPikachuElectric2,
    nSYAudioFGMPikachuElectric5,
    nSYAudioFGMPikachuElectricLoop,
    nSYAudioFGMPikachuSpecialHiStart,
    nSYAudioFGMPikachuSpecialLwThunder,
    nSYAudioFGMCaptainAppearCar1,
    nSYAudioFGMCaptainAppearCar2,
    nSYAudioFGMCaptainSpecialHi,
    nSYAudioFGMCaptainSpecialNStart,
    nSYAudioFGMCaptainSpecialNPunch,
    nSYAudioFGMCharacterUnk1,
    nSYAudioFGMNessPKThunderLoop,
    nSYAudioFGMNessSpecialLwStart,
    nSYAudioFGMCharacterUnk3,
    nSYAudioFGMUnkSwoosh1,
    nSYAudioFGMUnkGate1,
    nSYAudioFGMBossBullet,
    nSYAudioFGMSectorArwingLaser,
    nSYAudioFGMSectorAmbient1,
    nSYAudioFGMOptionsDataErase,
    nSYAudioFGMMagnify,
    nSYAudioFGMBonusComplete,
    nSYAudioFGMPlayerHeal,
    nSYAudioFGMYosterCloudVapor,
    nSYAudioFGMStockSteal,
    nSYAudioFGMBonus2PlatformLanding,
    nSYAudioFGMGamePause,
    nSYAudioFGMInishiePowerBlock,
    nSYAudioFGMBonus1TargetBreak,
    nSYAudioFGMJungleTaruCannShoot,
    nSYAudioFGMHyruleTwisterAppear,
    nSYAudioFGMHyruleTwisterTrapped,
    nSYAudioFGMPupupuWhispyWind,
    nSYAudioFGMFloorDamageBurn,
    nSYAudioFGMDogasSmog,
    nSYAudioFGMIwarkRockMake,
    nSYAudioFGMKabigonFall,
    nSYAudioFGMKabigonJump,
    nSYAudioFGMKamexHydro,
    nSYAudioFGMLizardonFlame,
    nSYAudioFGMMewFly,
    nSYAudioFGMNyarsCoin,
    nSYAudioFGMMBallOpen,
    nSYAudioFGMMonsterShoot,
    nSYAudioFGMTosakintoSplash,
    nSYAudioFGMUnkMechanical1,
    nSYAudioFGMTitlePressStart,
    nSYAudioFGMMenuSelect,
    nSYAudioFGMStageSelect,
    nSYAudioFGM1PGameContinue,
    nSYAudioFGMTrainingSel2,
    nSYAudioFGMMenuScroll1,
    nSYAudioFGMMenuScroll2,
    nSYAudioFGMMenuDenied,
    nSYAudioFGMPlayerGateClose,
    nSYAudioFGMPlayerGateWhoosh,
    nSYAudioFGMScoreDisplayBonus,
    nSYAudioFGMStageClearScoreRegister,
    nSYAudioFGMStageClearScoreDisplay,
    nSYAudioFGMDoorClose,
    nSYAudioFGMTrainingSel
};

// 0x80133D9C
u32 dMNSoundTestVoiceIDs[/* */] =
{
    // MARIO

    nSYAudioVoiceMarioSmash1,
    nSYAudioVoiceMarioSmash2,
    nSYAudioVoiceMarioSmash3,
    nSYAudioVoiceMarioSpecialLw,
    nSYAudioVoiceMarioDeadUp,
    nSYAudioVoiceMarioJump,
    nSYAudioVoiceMarioJumpAerial,
    nSYAudioVoiceMarioHeavyGet,
    nSYAudioVoiceMarioDead,
    nSYAudioVoiceMarioDamage,
    nSYAudioVoiceMarioHereWe,

    // DONKEY KONG

    nSYAudioVoiceDonkeyAppeal,
    nSYAudioVoiceDonkeySmash1,
    nSYAudioVoiceDonkeySmash2,
    nSYAudioVoiceDonkeySmash3,
    nSYAudioVoiceDonkeyDeadUp,
    nSYAudioVoiceDonkeyDamage,
    nSYAudioVoiceDonkeyDead1,
    nSYAudioVoiceDonkeyHeavyGet,
    nSYAudioVoiceDonkeyHeavyUnk,
    nSYAudioVoiceDonkeyDead2,
    
    // LINK

    nSYAudioVoiceLinkSmash1,
    nSYAudioVoiceLinkSmash2,
    nSYAudioVoiceLinkSmash3,
    nSYAudioVoiceLinkSpecialHi,
    nSYAudioVoiceLinkDeadUp,
    nSYAudioVoiceLinkDamage,
    nSYAudioVoiceLinkJump,
    nSYAudioVoiceLinkJumpAerial,
    nSYAudioVoiceLinkOttotto,
    nSYAudioVoiceLinkDead,
    nSYAudioVoiceLinkGrunt2,

    // YOSHI

    nSYAudioVoiceYoshiAppeal,
    nSYAudioVoiceYoshiSmash2,
    nSYAudioVoiceYoshiSmash3,
    nSYAudioVoiceYoshiCatch,
    nSYAudioVoiceYoshiDeadUp,
    nSYAudioVoiceYoshiDamage,
    nSYAudioVoiceYoshiJump,
    nSYAudioVoiceYoshiJumpAerial,
    nSYAudioVoiceYoshiFuraSleep,
    nSYAudioVoiceYoshiSpecialLwJump,
    nSYAudioVoiceYoshiSpecialLwFall,
    nSYAudioVoiceYoshiUnkGrunt2,
    nSYAudioVoiceYoshiThrow,
    nSYAudioVoiceYoshiUnkVocalize,

    // KIRBY

    nSYAudioVoiceKirbyAppeal,
    nSYAudioVoiceKirbySmash1,
    nSYAudioVoiceKirbySmash2,
    nSYAudioVoiceKirbySmash3,
    nSYAudioVoiceKirbyCopyLinkSpecialN,
    nSYAudioVoiceKirbyCopyPikachuSpecialN,
    nSYAudioVoiceKirbySpecialHi,
    nSYAudioVoiceKirbyCopyCaptainSpecialNFalcon,
    nSYAudioVoiceKirbyCopyCaptainSpecialNPunch,
    nSYAudioVoiceKirbyCopyDonkeySpecialN,
    nSYAudioVoiceKirbyCopyPurinSpecialN,
    nSYAudioVoiceKirbyDeadUp,
    nSYAudioVoiceKirbyFuraFura,
    nSYAudioVoiceKirbyDamage,
    nSYAudioVoiceKirbyHeavyGet,
    nSYAudioVoiceKirbyOttotto,
    nSYAudioVoiceKirbyCopyNessSpecialN,
    nSYAudioVoiceKirbyDead,
    nSYAudioVoiceKirbyFuraSleep,
    nSYAudioVoiceKirbySpecialLw,

    // FOX

    nSYAudioVoiceFoxDeadUp,
    nSYAudioVoiceFoxSpecialHi,
    nSYAudioVoiceFoxJumpAerial,
    nSYAudioVoiceFoxEscape,
    nSYAudioVoiceFoxSelected,
    nSYAudioVoiceFoxHeavyGet,
    nSYAudioVoiceFoxOttotto,
    nSYAudioVoiceFoxDead,
    nSYAudioVoiceFoxSmash1,
    nSYAudioVoiceFoxSmash2,
    nSYAudioVoiceFoxSmash3,
    nSYAudioVoiceFoxDamage,
    nSYAudioVoiceFoxFuraFura,

    // PIKACHU

    nSYAudioVoicePikachuAppeal,
    nSYAudioVoicePikachuSmash1,
    nSYAudioVoicePikachuSmash2,
    nSYAudioVoicePikachuSmash3,
    nSYAudioVoicePikachuSpecialN,
    nSYAudioVoicePikachuSpecialLw,
    nSYAudioVoicePikachuDeadUp,
    nSYAudioVoicePikachuDamage,
    nSYAudioVoicePikachuSpecialHi,
    nSYAudioVoicePikachuHeavyGet,
    nSYAudioVoicePikachuOttotto,
    nSYAudioVoicePikachuDead,
    nSYAudioVoicePikachuFuraSleep,

    // LUIGI
    
    nSYAudioVoiceLuigiSmash1,
    nSYAudioVoiceLuigiSmash2,
    nSYAudioVoiceLuigiSmash3,
    nSYAudioVoiceLuigiSpecialLw,
    nSYAudioVoiceLuigiDeadUp,
    nSYAudioVoiceLuigiFuraFura,
    nSYAudioVoiceLuigiDamage,
    nSYAudioVoiceLuigiJump,
    nSYAudioVoiceLuigiJumpAerial,
    nSYAudioVoiceLuigiHeavyGet,
    nSYAudioVoiceLuigiDead,
    nSYAudioVoiceLuigiHereWe,

    // CAPTAIN FALCON

    nSYAudioVoiceCaptainAppeal,
    nSYAudioVoiceCaptainSpecialHi,
    nSYAudioVoiceCaptainSmash1,
    nSYAudioVoiceCaptainSmash2,
    nSYAudioVoiceCaptainSmash3,
    nSYAudioVoiceCaptainSmash5,
    nSYAudioVoiceCaptainAttackS4,
    nSYAudioVoiceCaptainSpecialLw,
    nSYAudioVoiceCaptainSpecialNFalcon,
    nSYAudioVoiceCaptainSpecialNPunch,
    nSYAudioVoiceCaptainDeadUp,
    nSYAudioVoiceCaptainFuraFura,
    nSYAudioVoiceCaptainDamage,
    nSYAudioVoiceCaptainJumpAerial,
    nSYAudioVoiceCaptainHeavyGet,
    nSYAudioVoiceCaptainDead,
    nSYAudioVoiceCaptainFuraSleep,
    nSYAudioVoiceCaptainUnkQuick,

    // NESS

    nSYAudioVoiceNessAppeal,
    nSYAudioVoiceNessSmash1,
    nSYAudioVoiceNessSmash2,
    nSYAudioVoiceNessSmash3,
    nSYAudioVoiceNessUnkGrunt,
    nSYAudioVoiceNessDeadUp,
    nSYAudioVoiceNessFuraFura,
    nSYAudioVoiceNessDamage,
    nSYAudioVoiceNessHeavyGet,
    nSYAudioVoiceNessOttotto,
    nSYAudioVoiceNessSpecialN,
    nSYAudioVoiceNessSpecialHi,
    nSYAudioVoiceNessDead,
    nSYAudioVoiceNessFuraSleep,

    // JIGGLYPUFF

    nSYAudioVoicePurinAppeal,
    nSYAudioVoicePurinSmash1,
    nSYAudioVoicePurinSmash2,
    nSYAudioVoicePurinSmash3,
    nSYAudioVoicePurinSpecialN,
    nSYAudioVoicePurinDeadUp,
    nSYAudioVoicePurinFuraFura,
    nSYAudioVoicePurinDamage,
    nSYAudioVoicePurinUnkGrunt2,
    nSYAudioVoicePurinUnkGrunt3,
    nSYAudioVoicePurinUnkGrunt4,
    nSYAudioVoicePurinFuraSleep,
    nSYAudioVoicePurinSpecialLwSleep,
    nSYAudioVoicePurinSpecialLwWake,
    nSYAudioVoicePurinSpecialHi,

    // MASTER HAND
    
    nSYAudioVoiceBossAppear,
    nSYAudioVoiceBossDead,
    
    // ANNOUNCER
    
    nSYAudioVoiceAnnounceTitleWait,
    nSYAudioVoiceAnnounceMario,
    nSYAudioVoiceAnnounceDonkeyKong,
    nSYAudioVoiceAnnounceSamus,
    nSYAudioVoiceAnnounceFox,
    nSYAudioVoiceAnnounceYoshi,
    nSYAudioVoiceAnnounceLink,
    nSYAudioVoiceAnnouncePikachu,
    nSYAudioVoiceAnnounceKirby,
    nSYAudioVoiceAnnounceLuigi,
    nSYAudioVoiceAnnounceCaptain,
    nSYAudioVoiceAnnounceNess,
    nSYAudioVoiceAnnouncePurin,
    nSYAudioVoiceAnnounceRedTeam,
    nSYAudioVoiceAnnounceBlueTeam,
    nSYAudioVoiceAnnounceGreenTeam,
    nSYAudioVoiceAnnounceFreeForAll,
    nSYAudioVoiceAnnounceTeamBattle,
    nSYAudioVoiceAnnounceSelectPlayer,
    nSYAudioVoiceAnnounceContinue,
    nSYAudioVoiceAnnounceGameOver,
    nSYAudioVoiceAnnounceGo,
    nSYAudioVoiceAnnounceFive,
    nSYAudioVoiceAnnounceFour,
    nSYAudioVoiceAnnounceThree,
    nSYAudioVoiceAnnounceTwo,
    nSYAudioVoiceAnnounceOne,
    nSYAudioVoiceAnnounceSuddenDeath,
    nSYAudioVoiceAnnounceTimeUp,
    nSYAudioVoiceAnnounceGameSet,
    nSYAudioVoiceAnnounceWinnerIs,
    nSYAudioVoiceAnnounceNoContest,
    nSYAudioVoiceAnnouncePlayer1,
    nSYAudioVoiceAnnouncePlayer2,
    nSYAudioVoiceAnnouncePlayer3,
    nSYAudioVoiceAnnouncePlayer4,
    nSYAudioVoiceAnnounceComputerPlayer,
    nSYAudioVoiceAnnounceVersus,
    nSYAudioVoiceAnnounceYoshiTeam,
    nSYAudioVoiceAnnounceKirbyTeam,
    nSYAudioVoiceAnnounceGDonkey,
    nSYAudioVoiceAnnounceMarioBros,
    nSYAudioVoiceAnnounceBattleRoyal,
    nSYAudioVoiceAnnouncePolygonTeam,
    nSYAudioVoiceAnnounceBonusStage,
    nSYAudioVoiceAnnounceBreakTheTargets,
    nSYAudioVoiceAnnounceBoardThePlatforms,
    nSYAudioVoiceAnnounceComplete,
    nSYAudioVoiceAnnounceFailure,
    nSYAudioVoiceAnnounceNewRecord,
    nSYAudioVoiceAnnounceTrainingMode,
    nSYAudioVoiceAnnounceHowToPlay,

    // POKéBALL POKéMON

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

    // SAFFRON CITY POKéMON

    nSYAudioVoiceYamabukiFushigibana,
    nSYAudioVoiceYamabukiHitokage,
	nSYAudioVoiceYamabukiLucky,         // No Electrode?
	nSYAudioVoiceYamabukiPorygon,

    // AUDIENCE CHANTS

    nSYAudioVoicePublicityDonkey,
	nSYAudioVoicePublicityCaptain,
	nSYAudioVoicePublicityFox,
	nSYAudioVoicePublicityKirby,
	nSYAudioVoicePublicityLink,
	nSYAudioVoicePublicityLuigi,
	nSYAudioVoicePublicityMario,
	nSYAudioVoicePublicityNess,
	nSYAudioVoicePublicityPikachu,
	nSYAudioVoicePublicityPurin,
	nSYAudioVoicePublicitySamus,
	nSYAudioVoicePublicityYoshi,

    // AUDIENCE REACTIONS

    nSYAudioVoicePublicityGaspL,
    nSYAudioVoicePublicityGaspS,
    nSYAudioVoicePublicityCheer,
    nSYAudioVoicePublicityGaspClap,
    nSYAudioVoicePublicityDamageL,
    nSYAudioVoicePublicityDamageS,
    nSYAudioVoicePublicityAbsorb,
    nSYAudioVoicePublicityClapS
};

// 0x8013416C
u32 dMNSoundTestFileIDs[/* */] = 
{ 
    &D_NF_000000C5,
    &D_NF_000000A4,
    &D_NF_00000020,
    &D_NF_00000000,
    &D_NF_000000C4
};

// 0x80134180
f32 dMNSoundTestArrowSpritePositions[/* */] =
{
    162.0F,  73.0F, 224.0F,
    181.0F, 121.0F, 243.0F,
    201.0F, 168.0F, 263.0F
};

// 0x801341A4
intptr_t dMNSoundTestDigitSpriteOffsets[/* */] =
{
    &lMNSoundTestDigit0Sprite,
    &lMNSoundTestDigit1Sprite,
    &lMNSoundTestDigit2Sprite,
    &lMNSoundTestDigit3Sprite,
    &lMNSoundTestDigit4Sprite,
    &lMNSoundTestDigit5Sprite,
    &lMNSoundTestDigit6Sprite,
    &lMNSoundTestDigit7Sprite,
    &lMNSoundTestDigit8Sprite,
    &lMNSoundTestDigit9Sprite
};

// 0x801341CC
s32 dMNSoundTestDigitSpriteWidths[/* */] = { 14, 9, 15, 14, 15, 13, 15, 14, 15, 15, 17, 20 };

// 0x80134200
Lights1 dMNSoundTestLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 0x80134218
Gfx dMNSoundTestDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNSoundTestLights1),
    gsSPEndDisplayList()
};

// 0x80134240
syDisplaySetup dMNSoundTestDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x8013425C
scRuntimeInfo dMNSoundTestGtlSetup =
{
    0x00000000,
    func_8000A5E4,
    func_8000A340,
    &ovl62_BSS_END,
    0,
    1,
    1,
    0x4000,
    0x400,
    0,
    0,
    0x1000,
    0x20000,
    0x1000,
    mnSoundTestProcLights,
    update_contdata,
    0x10,
    0x600,
    0x10,
    0,
    0x40,
    0x40,
    0x88,
    0x100,
    0,
    0,
    0x20,
    0x10,
    0x400,
    0x88,
    0x100,
    0x6C,
    0x8,
    0x90,
    mnSoundTestProcStart
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnSoundTestUpdateOptionColors(void)
{
    s32 i;

    for 
    (
        i = 0;
        i <
        (
            ARRAY_COUNT(sMNSoundTestOptionColorR) + 
            ARRAY_COUNT(sMNSoundTestOptionColorG) + 
            ARRAY_COUNT(sMNSoundTestOptionColorB)
        ) / 3;
        i++
    )
    {
        if (i == sMNSoundTestOption)
        {
            sMNSoundTestOptionColorR[i] = 0xFF;
            sMNSoundTestOptionColorG[i] = 0xA8;
            sMNSoundTestOptionColorB[i] = 0x00;
        }
        else
        {
            sMNSoundTestOptionColorR[i] = 0x7D;
            sMNSoundTestOptionColorG[i] = 0x45;
            sMNSoundTestOptionColorB[i] = 0x07;
        }
    }
}

// 0x80131B80
void mnSoundTestUpdateControllerInputs(void)
{
    s32 stick_range;// Stick axis range
    sb32 is_button; // Is option being selected with a button?

    if (sMNSoundTestOptionChangeWait != 0)
    {
        sMNSoundTestOptionChangeWait--;
    }
    if
    (
        (scSubsysControllerGetPlayerStickInRangeLR(-32, 32) != FALSE) &&
        (scSubsysControllerGetPlayerStickInRangeUD(-32, 32) != FALSE) &&
        (scSubsysControllerGetPlayerHoldButtons(U_JPAD | R_JPAD | R_TRIG | U_CBUTTONS | R_CBUTTONS) == FALSE) &&
        (scSubsysControllerGetPlayerHoldButtons(D_JPAD | L_JPAD | L_TRIG | D_CBUTTONS | L_CBUTTONS) == FALSE)
    )
    {
        sMNSoundTestOptionChangeWait = 0;
        sMNSoundTestDirectionInputKind = 0;
    }
    if
    (
        mnSoundTestCheckGetOptionButtonInput(is_button, U_JPAD | U_CBUTTONS) ||
        mnSoundTestCheckGetOptionStickInputUD(stick_range, 32, 1)
    )
    {
        func_800269C0_275C0(nSYAudioFGMMenuScroll2);

        mnSoundTestSetOptionChangeWaitP(is_button, stick_range, 8);

        sMNSoundTestOption--;

        if (sMNSoundTestOption < nMNSoundTestOptionStart)
        {
            sMNSoundTestOption = nMNSoundTestOptionEnd;
        }
        if (sMNSoundTestOption == nMNSoundTestOptionStart)
        {
            sMNSoundTestOptionChangeWait += 10;
        }
        sMNSoundTestDirectionInputKind = 3;
    }
    if
    (
        mnSoundTestCheckGetOptionButtonInput(is_button, D_JPAD | D_CBUTTONS) ||
        mnSoundTestCheckGetOptionStickInputUD(stick_range, -32, 0)
    )
    {
        func_800269C0_275C0(nSYAudioFGMMenuScroll2);

        mnSoundTestSetOptionChangeWaitN(is_button, stick_range, 8);

        sMNSoundTestOption++;

        if (sMNSoundTestOption > nMNSoundTestOptionEnd)
        {
            sMNSoundTestOption = nMNSoundTestOptionStart;
        }
        if (sMNSoundTestOption == nMNSoundTestOptionEnd)
        {
            sMNSoundTestOptionChangeWait += 10;
        }
        sMNSoundTestDirectionInputKind = 4;
    }
    if
    (
        mnSoundTestCheckGetOptionButtonInput(is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
        mnSoundTestCheckGetOptionStickInputLR(stick_range, -32, 0)
    )
    {
        mnSoundTestSetOptionChangeWaitN(is_button, stick_range, 16);

        sMNSoundTestOptionSelectID[sMNSoundTestOption]--;

        switch (sMNSoundTestOption)
        {
        case nMNSoundTestOptionMusic:
            if (sMNSoundTestOptionSelectID[sMNSoundTestOption] < 0)
            {
                sMNSoundTestOptionSelectID[sMNSoundTestOption] = (ARRAY_COUNT(dMNSoundTestMusicIDs) - 1);
            }
            if (sMNSoundTestOptionSelectID[sMNSoundTestOption] == 0)
            {
                sMNSoundTestOptionChangeWait += 20;
            }
            break;

        case nMNSoundTestOptionSound:
            if (sMNSoundTestOptionSelectID[sMNSoundTestOption] < 0)
            {
                sMNSoundTestOptionSelectID[sMNSoundTestOption] = (ARRAY_COUNT(dMNSoundTestSoundIDs) - 1);
            }
            if (sMNSoundTestOptionSelectID[sMNSoundTestOption] == 0)
            {
                sMNSoundTestOptionChangeWait += 20;
            }
            break;

        case nMNSoundTestOptionVoice:
            if (sMNSoundTestOptionSelectID[sMNSoundTestOption] < 0)
            {
                sMNSoundTestOptionSelectID[sMNSoundTestOption] = (ARRAY_COUNT(dMNSoundTestVoiceIDs) - 1);
            }
            if (sMNSoundTestOptionSelectID[sMNSoundTestOption] == 0)
            {
                sMNSoundTestOptionChangeWait += 20;
            }
            break;
        }
        if (sMNSoundTestDirectionInputKind != 1)
        {
            sMNSoundTestOptionChangeWait *= 2;
        }
        sMNSoundTestDirectionInputKind = 1;
    }
    if
    (
        mnSoundTestCheckGetOptionButtonInput(is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
        mnSoundTestCheckGetOptionStickInputLR(stick_range, 32, 1)
    )
    {
        mnSoundTestSetOptionChangeWaitP(is_button, stick_range, 16);

        sMNSoundTestOptionSelectID[sMNSoundTestOption]++;

        switch (sMNSoundTestOption)
        {
        case nMNSoundTestOptionMusic:
            if (sMNSoundTestOptionSelectID[sMNSoundTestOption] > (ARRAY_COUNT(dMNSoundTestMusicIDs) - 1))
            {
                sMNSoundTestOptionSelectID[sMNSoundTestOption] = 0;
            }
            if (sMNSoundTestOptionSelectID[sMNSoundTestOption] == (ARRAY_COUNT(dMNSoundTestMusicIDs) - 1))
            {
                sMNSoundTestOptionChangeWait += 20;
            }
            break;

        case nMNSoundTestOptionSound:
            if (sMNSoundTestOptionSelectID[sMNSoundTestOption] > (ARRAY_COUNT(dMNSoundTestSoundIDs) - 1))
            {
                sMNSoundTestOptionSelectID[sMNSoundTestOption] = 0;
            }
            if (sMNSoundTestOptionSelectID[sMNSoundTestOption] == (ARRAY_COUNT(dMNSoundTestSoundIDs) - 1))
            {
                sMNSoundTestOptionChangeWait += 20;
            }
            break;

        case nMNSoundTestOptionVoice:
            if (sMNSoundTestOptionSelectID[sMNSoundTestOption] > (ARRAY_COUNT(dMNSoundTestVoiceIDs) - 1))
            {
                sMNSoundTestOptionSelectID[sMNSoundTestOption] = 0;
            }
            if (sMNSoundTestOptionSelectID[sMNSoundTestOption] == (ARRAY_COUNT(dMNSoundTestVoiceIDs) - 1))
            {
                sMNSoundTestOptionChangeWait += 20;
            }
            break;
        }
        if (sMNSoundTestDirectionInputKind != 2)
        {
            sMNSoundTestOptionChangeWait *= 2;
        }
        sMNSoundTestDirectionInputKind = 2;
    }
}

// 0x801320B4
void mnSoundTestUpdateFunctions(void)
{
    if (sMNSoundTestFadeOutWait != -1)
    {
        if (sMNSoundTestFadeOutWait != 0)
        {
            sMNSoundTestFadeOutWait--;
        }
        else
        {
            auStopBGM();
            sMNSoundTestFadeOutWait = -1;
        }
    }
    else auSetBGMVolume(0, 0x7000);

    if (scSubsysControllerGetPlayerTapButtons(A_BUTTON) != FALSE)
    {
        switch (sMNSoundTestOption)
        {
        case nMNSoundTestOptionMusic:
            if (sMNSoundTestFadeOutWait > 0)
            {
                sMNSoundTestFadeOutWait = -1;
            }
            auStopBGM();
            auPlaySong(0, dMNSoundTestMusicIDs[sMNSoundTestOptionSelectID[nMNSoundTestOptionMusic]]);
            break;

        case nMNSoundTestOptionSound:
            func_800266A0_272A0();
            func_800269C0_275C0(dMNSoundTestSoundIDs[sMNSoundTestOptionSelectID[nMNSoundTestOptionSound]]);
            break;

        case nMNSoundTestOptionVoice:
            func_800266A0_272A0();
            func_800269C0_275C0(dMNSoundTestVoiceIDs[sMNSoundTestOptionSelectID[nMNSoundTestOptionVoice]]);
            break;
        }
    }
    else if (scSubsysControllerGetPlayerTapButtons(Z_TRIG) != FALSE)
    {
        auStopBGM();
        func_800266A0_272A0();
    }
    else if (scSubsysControllerGetPlayerTapButtons(START_BUTTON) != FALSE)
    {
        auSetBGMVolumeSmooth(0, 0, 120);
        sMNSoundTestFadeOutWait = 120;
        func_800266A0_272A0();
    }
}

// 0x80132244
void mnSoundTestProcRun(GObj *gobj)
{
    mnSoundTestUpdateOptionColors();

    if (scSubsysControllerGetPlayerTapButtons(B_BUTTON) != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = nSCKindData;

        auStopBGM();
        func_800266A0_272A0();
        auSetBGMVolume(0, 0x7000);
        leoInitUnit_atten();
    }
    mnSoundTestUpdateControllerInputs();
    mnSoundTestUpdateFunctions();
}

// 0x801322B8
void mnSoundTestSetupFiles(void)
{
    rdSetup rd_setup;

    rd_setup.table_addr = (uintptr_t)&lRDManagerTableAddr;
    rd_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
    rd_setup.file_heap = NULL;
    rd_setup.file_heap_size = 0;
    rd_setup.status_buf = sMNSoundTestStatusBuf;
    rd_setup.status_buf_size = ARRAY_COUNT(sMNSoundTestStatusBuf);
    rd_setup.force_buf = NULL;
    rd_setup.force_buf_size = 0;

    rdManagerInitSetup(&rd_setup);
    rdManagerLoadFiles
    (
        dMNSoundTestFileIDs,
        ARRAY_COUNT(dMNSoundTestFileIDs),
        sMNSoundTestFiles,
        gsMemoryAlloc
        (
            rdManagerGetAllocSize
            (
                dMNSoundTestFileIDs,
                ARRAY_COUNT(dMNSoundTestFileIDs)
            ),
            0x10
        )
    );
}

// 0x8013234C
SObj* mnSoundTestMakeHeaderSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(1, NULL, 2, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 1, GOBJ_DLLINKORDER_DEFAULT, -1);

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[2], &lMNSoundTestDataTextSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x5F;
    sobj->sprite.green = 0x58;
    sobj->sprite.blue  = 0x46;
    
    sobj->pos.x = 23.0F;
    sobj->pos.y = 17.0F;

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[4], &lMNSoundTestHeaderTextSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0xF2;
    sobj->sprite.green = 0xC7;
    sobj->sprite.blue  = 0x0D;

    sobj->shadow_color.r = 0x00;
    sobj->shadow_color.g = 0x00;
    sobj->shadow_color.b = 0x00;

    sobj->pos.x = 152.0F;
    sobj->pos.y = 23.0F;

    return sobj;
}

// 0x80132450
void mnSoundTestOptionThreadUpdate(GObj *gobj)
{
    s32 color_id = gobj->user_data.s;
    SObj *sobj = SObjGetStruct(gobj);

    while (TRUE)
    {
        sobj->next->sprite.red   = sobj->sprite.red   = sMNSoundTestOptionColorR[color_id];
        sobj->next->sprite.green = sobj->sprite.green = sMNSoundTestOptionColorG[color_id];
        sobj->next->sprite.blue  = sobj->sprite.blue  = sMNSoundTestOptionColorB[color_id];

        gcStopCurrentProcess(1);
    }
}

// 0x801324FC
void mnSoundTestMusicProcRender(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor
    (
        gDisplayListHead[0]++, 
        GCOMBINE32_RGBA5551
        (
            GCONVERT5551_RGBA8888
            (
                GCOMBINE32_RGBA8888
                (
                    sMNSoundTestOptionColorR[nMNSoundTestOptionMusic],
                    sMNSoundTestOptionColorG[nMNSoundTestOptionMusic],
                    sMNSoundTestOptionColorB[nMNSoundTestOptionMusic],
                    0xFF
                )
            )
        )
    );
    gDPFillRectangle(gDisplayListHead[0]++, 10, 56, 112, 57);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 95, 112, 96);
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x80132638
SObj* mnSoundTestMakeMusicSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(1, NULL, 3, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 1, GOBJ_DLLINKORDER_DEFAULT, -1);

    gobj->user_data.s = nMNSoundTestOptionMusic;

    gcAddGObjProcess(gobj, mnSoundTestOptionThreadUpdate, nOMObjProcessKindThread, 1);
    gcAddGObjDisplay
    (
        gcMakeGObjSPAfter
        (
            1,
            NULL,
            3,
            GOBJ_LINKORDER_DEFAULT
        ), 
        mnSoundTestMusicProcRender,
        2,
        GOBJ_DLLINKORDER_DEFAULT,
        -1
    );
    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[4], &lMNSoundTestMusicTextSprite));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 55.0F;
    sobj->pos.y = 61.0F;

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[4], &lMNSoundTestOptionRoundCorner));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 112.0F;
    sobj->pos.y = 56.0F;

    return sobj;
}

// 0x80132758
void mnSoundTestSoundProcRender(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor
    (
        gDisplayListHead[0]++,
        GCOMBINE32_RGBA5551
        (
            GCONVERT5551_RGBA8888
            (
                GCOMBINE32_RGBA8888
                (
                    sMNSoundTestOptionColorR[nMNSoundTestOptionSound],
                    sMNSoundTestOptionColorG[nMNSoundTestOptionSound],
                    sMNSoundTestOptionColorB[nMNSoundTestOptionSound],
                    0xFF
                )
            )
        )
    );
    gDPFillRectangle(gDisplayListHead[0]++, 10, 104, 132, 105);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 143, 132, 144);
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x80132894
SObj* mnSoundTestMakeSoundSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(1, NULL, 3, GOBJ_DLLINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddGObjProcess(gobj, mnSoundTestOptionThreadUpdate, nOMObjProcessKindThread, 1);

    gobj->user_data.s = nMNSoundTestOptionSound;

    gcAddGObjDisplay
    (
        gcMakeGObjSPAfter
        (
            1,
            NULL,
            3,
            GOBJ_LINKORDER_DEFAULT
        ),
        mnSoundTestSoundProcRender,
        2,
        GOBJ_DLLINKORDER_DEFAULT,
        -1
    );
    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[4], &lMNSoundTestSoundTextSprite));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 64.0F;
    sobj->pos.y = 108.0F;

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[4], &lMNSoundTestOptionRoundCorner));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 132.0F;
    sobj->pos.y = 104.0F;

    return sobj;
}

// 0x801329B8
void mnSoundTestVoiceProcRender(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor
    (
        gDisplayListHead[0]++, 
        GCOMBINE32_RGBA5551
        (
            GCONVERT5551_RGBA8888
            (
                GCOMBINE32_RGBA8888
                (
                    sMNSoundTestOptionColorR[nMNSoundTestOptionVoice],
                    sMNSoundTestOptionColorG[nMNSoundTestOptionVoice],
                    sMNSoundTestOptionColorB[nMNSoundTestOptionVoice],
                    0xFF
                )
            )
        )
    );
    gDPFillRectangle(gDisplayListHead[0]++, 10, 152, 152, 153);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 191, 152, 192);
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x80132AF4
SObj* mnSoundTestMakeVoiceSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(1, NULL, 3, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddGObjProcess(gobj, mnSoundTestOptionThreadUpdate, nOMObjProcessKindThread, 1);

    gobj->user_data.s = nMNSoundTestOptionVoice;

    gcAddGObjDisplay
    (
        gcMakeGObjSPAfter
        (
            1,
            NULL,
            3,
            GOBJ_LINKORDER_DEFAULT
        ),
        mnSoundTestVoiceProcRender,
        2,
        GOBJ_DLLINKORDER_DEFAULT,
        -1
    );
    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[4], &lMNSoundTestVoiceTextSprite));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 94.0F;
    sobj->pos.y = 156.0F;

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[4], &lMNSoundTestOptionRoundCorner));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 152.0F;
    sobj->pos.y = 152.0F;

    return sobj;
}

// 0x80132C10
SObj* mnSoundTestMakeAButtonSObj(GObj *gobj)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[0], &lMNSoundTestAButtonSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x6E;
    sobj->sprite.green = 0x77;
    sobj->sprite.blue  = 0x75;

    sobj->shadow_color.r = 0x21;
    sobj->shadow_color.g = 0x40;
    sobj->shadow_color.b = 0x3A;

    sobj->pos.x = 55.0F;
    sobj->pos.y = 205.0F;

    return sobj;
}

// 0x80132C90
SObj* mnSoundTestMakeBButtonSObj(GObj *gobj)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[0], &lMNSoundTestBButtonSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x6E;
    sobj->sprite.green = 0x77;
    sobj->sprite.blue  = 0x5D;

    sobj->shadow_color.r = 0x29;
    sobj->shadow_color.g = 0x37;
    sobj->shadow_color.b = 0x16;

    sobj->pos.x = 218.0F;
    sobj->pos.y = 205.0F;

    return sobj;
}

// 0x80132D10
SObj* mnSoundTestMakeStartButtonSObj(GObj *gobj)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[4], &lMNSoundTestStartButtonSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x81;
    sobj->sprite.green = 0x6A;
    sobj->sprite.blue  = 0x62;

    sobj->shadow_color.r = 0x3B;
    sobj->shadow_color.g = 0x20;
    sobj->shadow_color.b = 0x16;

    sobj->pos.x = 121.0F;
    sobj->pos.y = 205.0F;

    return sobj;
}

// 0x80132D90
SObj* mnSoundTestMakeAFunctionSObj(GObj *gobj)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[4], &lMNSoundTestAFunctionTextSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x73;
    sobj->sprite.green = 0x6B;
    sobj->sprite.blue  = 0x59;

    sobj->pos.x = 72.0F;
    sobj->pos.y = 208.0F;

    return sobj;
}

// 0x80132DF8
SObj* mnSoundTestMakeStartFunctionSObj(GObj *gobj)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[4], &lMNSoundTestStartFunctionTextSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x73;
    sobj->sprite.green = 0x6B;
    sobj->sprite.blue  = 0x59;

    sobj->pos.x = 148.0F;
    sobj->pos.y = 208.0F;

    return sobj;
}

// 0x80132E60
SObj* mnSoundTestMakeBFunctionSObj(GObj *gobj)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[4], &lMNSoundTestBFunctionTextSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x73;
    sobj->sprite.green = 0x6B;
    sobj->sprite.blue  = 0x59;

    sobj->pos.x = 235.0F;
    sobj->pos.y = 208.0F;

    return sobj;
}

// 0x80132EC8
void mnSoundTestMakeButtonSObjs(void)
{
    GObj *gobj = gcMakeGObjSPAfter(1, NULL, 3, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    mnSoundTestMakeAButtonSObj(gobj);
    mnSoundTestMakeBButtonSObj(gobj);
    mnSoundTestMakeStartButtonSObj(gobj);
    mnSoundTestMakeAFunctionSObj(gobj);
    mnSoundTestMakeStartFunctionSObj(gobj);
    mnSoundTestMakeBFunctionSObj(gobj);
}

// 0x80132F50
void mnSoundTestMakeNumberSObj(GObj *gobj)
{
    s32 i;

    for (i = 0; i < nMNSoundTestOptionEnumMax; i++)
    {
        SObj *sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[1], dMNSoundTestDigitSpriteOffsets[0]));

        sobj->sprite.attr = SP_HIDDEN;

        switch (gobj->user_data.s)
        {
        case nMNSoundTestOptionMusic:
            sobj->pos.y = 67.0F;
            break;

        case nMNSoundTestOptionSound:
            sobj->pos.y = 115.0F;
            break;

        case nMNSoundTestOptionVoice:
            sobj->pos.y = 163.0F;
            break;
        }
    }
}

// 0x80133058
void mnSoundTestUpdateNumberPositions(GObj *gobj, f32 width)
{
    f32 unused[4];
    f32 pos_x = 0.0F;
    s32 option = gobj->user_data.s;
    SObj *sobj = SObjGetStruct(gobj);
    SObj *rewind_sobj;

    while ((sobj != NULL) && (sobj->sprite.attr != SP_HIDDEN))
    {
        rewind_sobj = sobj;

        sobj = sobj->next;
    }
    sobj = rewind_sobj;

    while (sobj != NULL)
    {
        f32 uf = sobj->user_data.s;

        sobj->user_data.s = pos_x;

        pos_x += uf;

        sobj = sobj->prev;
    }
    sobj = SObjGetStruct(gobj);

    pos_x = sMNSoundTestSelectIDPositionsX[option] - (width * 0.5F);

    while ((sobj != NULL) && (sobj->sprite.attr != SP_HIDDEN))
    {
        sobj->pos.x = pos_x + sobj->user_data.s + 
        ((option == nMNSoundTestOptionMusic) ? 171.0F : ((option == nMNSoundTestOptionSound) ? 190.0F : 210.0F));

        sobj = sobj->next;
    }
}

// 0x80133194
void mnSoundTestUpdateNumberSprites(GObj *gobj)
{
    SObj *sobj = SObjGetStruct(gobj);
    f32 width = 0.0F;
    s32 option = gobj->user_data.s;
    s32 number = sMNSoundTestOptionSelectID[option] + 1;

    while (sobj != NULL)
    {
        sobj->sprite.attr = SP_HIDDEN;
        sobj = sobj->next;
    }
    sobj = SObjGetStruct(gobj);

    do
    {
        sobj->sprite = *gcGetDataFromFile(Sprite*, sMNSoundTestFiles[1], dMNSoundTestDigitSpriteOffsets[number % 10]);

        sobj->user_data.s = dMNSoundTestDigitSpriteWidths[number % 10];

        sobj->sprite.attr = SP_TRANSPARENT;

        sobj->sprite.red   = 0xFF;
        sobj->sprite.green = 0x00;
        sobj->sprite.blue  = 0x00;

        sobj->shadow_color.r = 0x00;
        sobj->shadow_color.g = 0x00;
        sobj->shadow_color.b = 0x00;

        width += sobj->user_data.s;

        number *= 0.1F;

        if (number != 0)
        {
            sobj = sobj->next;
        }
    } 
    while (number != 0);

    mnSoundTestUpdateNumberPositions(gobj, width);
}

// 0x80133304
void mnSoundTestSelectIDThreadUpdate(GObj *gobj)
{
    s32 option = gobj->user_data.s;
    s32 number = -1;

    mnSoundTestMakeNumberSObj(gobj);

    while (TRUE)
    {
        if (number != sMNSoundTestOptionSelectID[option])
        {
            number = sMNSoundTestOptionSelectID[option];

            mnSoundTestUpdateNumberSprites(gobj);
        }
        gcStopCurrentProcess(1);
    }
}

// 0x80133398
void mnSoundTestMakeSelectIDGObjs(void)
{
    GObj *gobj = gcMakeGObjSPAfter(1, NULL, 5, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddGObjProcess(gobj, mnSoundTestSelectIDThreadUpdate, nOMObjProcessKindThread, 1);

    gobj->user_data.s = nMNSoundTestOptionMusic;

    gobj = gcMakeGObjSPAfter(1, NULL, 6, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddGObjProcess(gobj, mnSoundTestSelectIDThreadUpdate, nOMObjProcessKindThread, 1);

    gobj->user_data.s = nMNSoundTestOptionSound;

    gobj = gcMakeGObjSPAfter(1, NULL, 7, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddGObjProcess(gobj, mnSoundTestSelectIDThreadUpdate, nOMObjProcessKindThread, 1);

    gobj->user_data.s = nMNSoundTestOptionVoice;
}

// 0x801334BC
void mnSoundTestArrowsThreadUpdate(GObj *gobj)
{
    SObj *sobj = SObjGetStruct(gobj);
    s32 arrow_toggle_wait = 30;
    s32 option = sMNSoundTestOption;
    s32 id;

    while (TRUE)
    {
        if (option != sMNSoundTestOption)
        {
            option = sMNSoundTestOption;

            arrow_toggle_wait = 30;

            gobj->flags = GOBJ_FLAG_NONE;
        }
        if (arrow_toggle_wait == 0)
        {
            arrow_toggle_wait = 30;

            gobj->flags ^= GOBJ_FLAG_NORENDER;
        }
        arrow_toggle_wait--;

        id = sMNSoundTestOption * nMNSoundTestOptionEnumMax; // Really?

        sobj->pos.x = dMNSoundTestArrowSpritePositions[id + 0];
        sobj->pos.y = dMNSoundTestArrowSpritePositions[id + 1];
        sobj->next->pos.x = dMNSoundTestArrowSpritePositions[id + 2];
        sobj->next->pos.y = dMNSoundTestArrowSpritePositions[id + 1];

        gcStopCurrentProcess(1);
    }
}

// 0x801335C8
void mnSoundTestMakeArrowSObjs(void)
{
    GObj *gobj = gcMakeGObjSPAfter(1, NULL, 2, GOBJ_LINKORDER_DEFAULT);
    SObj *sobj;

    gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcAddGObjProcess(gobj, mnSoundTestArrowsThreadUpdate, nOMObjProcessKindThread, 1);

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[3], &lMNSoundTestLeftArrowSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->pos.x = dMNSoundTestArrowSpritePositions[nMNSoundTestOptionStart + 0];
    sobj->pos.y = dMNSoundTestArrowSpritePositions[nMNSoundTestOptionStart + 1];

    sobj->sprite.red   = 0xFF;
    sobj->sprite.green = 0xC3;
    sobj->sprite.blue  = 0x26;

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNSoundTestFiles[3], &lMNSoundTestRightArrowSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->pos.x = dMNSoundTestArrowSpritePositions[nMNSoundTestOptionStart + 2];
    sobj->pos.y = dMNSoundTestArrowSpritePositions[nMNSoundTestOptionStart + 3];

    sobj->sprite.red   = 0xFF;
    sobj->sprite.green = 0xC3;
    sobj->sprite.blue  = 0x26;
}

// 0x801336D8
void mnSoundTestMakeAllSObjs(void)
{
    mnSoundTestMakeHeaderSObjs();
    mnSoundTestMakeMusicSObjs();
    mnSoundTestMakeSoundSObjs();
    mnSoundTestMakeVoiceSObjs();
    mnSoundTestMakeSelectIDGObjs();
    mnSoundTestMakeArrowSObjs();
    mnSoundTestMakeButtonSObjs();
}

// 0x80133728
void mnSoundTestMakeCameras(void)
{
    Camera *cam = CameraGetStruct
    (
        func_8000B93C
        (
            2,
            NULL,
            4,
            GOBJ_LINKORDER_DEFAULT,
            func_ovl0_800CD2CC,
            30, 
            CAMERA_MASK_DLLINK(1),
            -1,
            0,
            1,
            0,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 630.0F, 470.0F);

    cam = CameraGetStruct
    (
        func_8000B93C
        (
            2,
            NULL,
            4,
            GOBJ_LINKORDER_DEFAULT,
            func_80017EC0,
            50, 
            CAMERA_MASK_DLLINK(2),
            -1,
            0,
            1,
            0,
            1,
            0
        )
    );

    func_80007080(&cam->viewport, 10.0F, 10.0F, 630.0F, 470.0F);
}

// 0x80133858
void mnSoundTestInitVars(void)
{
    sMNSoundTestOptionColorR[nMNSoundTestOptionMusic] = sMNSoundTestOptionColorR[nMNSoundTestOptionSound] = sMNSoundTestOptionColorR[nMNSoundTestOptionVoice] = 0x7D;
    sMNSoundTestOptionColorG[nMNSoundTestOptionMusic] = sMNSoundTestOptionColorG[nMNSoundTestOptionSound] = sMNSoundTestOptionColorG[nMNSoundTestOptionVoice] = 0x45;
    sMNSoundTestOptionColorB[nMNSoundTestOptionMusic] = sMNSoundTestOptionColorB[nMNSoundTestOptionSound] = sMNSoundTestOptionColorB[nMNSoundTestOptionVoice] = 0x07;

    sMNSoundTestOption = 0;
    sMNSoundTestOptionChangeWait = 0;
    sMNSoundTestDirectionInputKind = 0;

    sMNSoundTestOptionSelectID[nMNSoundTestOptionMusic] = sMNSoundTestOptionSelectID[nMNSoundTestOptionSound] = sMNSoundTestOptionSelectID[nMNSoundTestOptionVoice] = 0;

    sMNSoundTestSelectIDPositionsX[nMNSoundTestOptionMusic] = 26.5F;
    sMNSoundTestSelectIDPositionsX[nMNSoundTestOptionSound] = 26.5F;
    sMNSoundTestSelectIDPositionsX[nMNSoundTestOptionVoice] = 26.5F;

    sMNSoundTestFadeOutWait = -1;
}

// 0x801338F8
void mnSoundTestProcStart(void)
{
    gcMakeGObjSPAfter(0, mnSoundTestProcRun, 1, GOBJ_LINKORDER_DEFAULT);
    func_8000B9FC(4, 0x80000000, 0x64, 2, 0xFF);
    mnSoundTestSetupFiles();
    mnSoundTestInitVars();
    mnSoundTestMakeAllSObjs();
    mnSoundTestMakeCameras();
}

// 0x80133964
void mnSoundTestProcLights(Gfx **dls)
{
    gSPDisplayList(dls[0]++, dMNSoundTestDisplayList);
}

// 0x80133988
void mnSoundTestStartScene(void)
{
    dMNSoundTestDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    func_80007024(&dMNSoundTestDisplaySetup);
    dMNSoundTestGtlSetup.arena_size = (size_t) ((uintptr_t)&ovl1_TEXT_START - (uintptr_t)&ovl62_BSS_END);
    gsGTLSceneInit(&dMNSoundTestGtlSetup);
}
