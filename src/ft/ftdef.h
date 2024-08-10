#ifndef _FTDEF_H_
#define _FTDEF_H_

// Enums
typedef enum ftStatusUpdateFlags
{
    nFTStatusPreserveHit,               // Preserve hitboxes between action states
    nFTStatusPreserveColAnim,           // Preserve color animation between action states
    nFTStatusPreserveEffect,            // Preserve GFX between action states
    nFTStatusPreserveFastFall,          // Preserve fastfall between action states
    nFTStatusPreserveHitStatus,         // Preserve hurtbox collision state between action states
    nFTStatusPreserveModelPart,         // Preserve modified model part display state between action states
    nFTStatusPreserveSlopeContour,      // Preserve inverse kinematics mode between action states
    nFTStatusPreserveTexturePart,       // Preserve modified texture part display state between action states
    nFTStatusPreservePlayerTag,         // Preserve player indicator wait timer
    nFTStatusPreserveThrowPointer,      // Preserve thrower's GObj pointer between action states; used to tell the game not to check thrower's collateral hitbox on thrown victim?  
    nFTStatusPreserveShuffleTime,       // Preserve model vibration frames from hitlag between action states
    nFTStatusPreserveLoopSFX,           // Preserve looping SFX
    nFTStatusPreserveDamagePlayer,      // Preserve damaging player's port ID if grounded?
    nFTStatusPreserveAfterImage,        // Preserve sword trail display state
    nFTStatusPreserveRumble             // Preserve rumble

} ftStatusUpdateFlags;

typedef enum ftCommonMotion
{
    nFTCommonMotionNull = -1,
    nFTCommonMotionEntryNull,
    nFTCommonMotionRebirthDown,
    nFTCommonMotionRebirthStand,
    nFTCommonMotionRebirthWait,
    nFTCommonMotionWait,
    nFTCommonMotionWalkSlow,
    nFTCommonMotionWalkMiddle,
    nFTCommonMotionWalkFast,
    nFTCommonMotionWalkEnd,
    nFTCommonMotionDash,
    nFTCommonMotionRun,
    nFTCommonMotionRunBrake,
    nFTCommonMotionTurn,
    nFTCommonMotionTurnRun,
    nFTCommonMotionKneeBend,
    nFTCommonMotionGuardKneeBend,
    nFTCommonMotionJumpF,
    nFTCommonMotionJumpB,
    nFTCommonMotionJumpAerialF,
    nFTCommonMotionJumpAerialB,
    nFTCommonMotionFall,
    nFTCommonMotionFallAerial,
    nFTCommonMotionSquat,
    nFTCommonMotionSquatWait,
    nFTCommonMotionSquatRv,
    nFTCommonMotionLandingLight,
    nFTCommonMotionLandingHeavy,
    nFTCommonMotionPass,
    nFTCommonMotionGuardPass,
    nFTCommonMotionOttottoWait,
    nFTCommonMotionOttotto,
    nFTCommonMotionDamageHi1,
    nFTCommonMotionDamageHi2,
    nFTCommonMotionDamageHi3,
    nFTCommonMotionDamageN1,
    nFTCommonMotionDamageN2,
    nFTCommonMotionDamageN3,
    nFTCommonMotionDamageLw1,
    nFTCommonMotionDamageLw2,
    nFTCommonMotionDamageLw3,
    nFTCommonMotionDamageAir1,
    nFTCommonMotionDamageAir2,
    nFTCommonMotionDamageAir3,
    nFTCommonMotionDamageE,
    nFTCommonMotionDamageFlyHi,
    nFTCommonMotionDamageFlyN,
    nFTCommonMotionDamageFlyLw,
    nFTCommonMotionDamageFlyTop,
    nFTCommonMotionDamageFlyRoll,
    nFTCommonMotionWallDamage,
    nFTCommonMotionDamageFall,
    nFTCommonMotionFallSpecial,
    nFTCommonMotionLandingFallSpecial,
    nFTCommonMotionTwister,
    nFTCommonMotionDokanStart,
    nFTCommonMotionDokanEnd,
    nFTCommonMotionDokanWalk,
    nFTCommonMotionStopCeil,
    nFTCommonMotionDownBounceD,
    nFTCommonMotionDownBounceU,
    nFTCommonMotionDownStandD,
    nFTCommonMotionDownStandU,
    nFTCommonMotionPassiveStandF,
    nFTCommonMotionPassiveStandB,
    nFTCommonMotionDownForwardD,
    nFTCommonMotionDownForwardU,
    nFTCommonMotionDownBackD,
    nFTCommonMotionDownBackU,
    nFTCommonMotionDownAttackD,
    nFTCommonMotionDownAttackU,
    nFTCommonMotionPassive,
    nFTCommonMotionRebound,
    nFTCommonMotionCliffCatch,
    nFTCommonMotionCliffWait,
    nFTCommonMotionCliffQuick,
    nFTCommonMotionCliffClimbQuick1,
    nFTCommonMotionCliffClimbQuick2,
    nFTCommonMotionCliffSlow,
    nFTCommonMotionCliffClimbSlow1,
    nFTCommonMotionCliffClimbSlow2,
    nFTCommonMotionCliffAttackQuick1,
    nFTCommonMotionCliffAttackQuick2,
    nFTCommonMotionCliffAttackSlow1,
    nFTCommonMotionCliffAttackSlow2,
    nFTCommonMotionCliffEscapeQuick1,
    nFTCommonMotionCliffEscapeQuick2,
    nFTCommonMotionCliffEscapeSlow1,
    nFTCommonMotionCliffEscapeSlow2,
    nFTCommonMotionLightGet,
    nFTCommonMotionHeavyGet,
    nFTCommonMotionLightThrowDrop,
    nFTCommonMotionLightThrowDash,
    nFTCommonMotionLightThrowF,
    nFTCommonMotionLightThrowB,
    nFTCommonMotionLightThrowHi,
    nFTCommonMotionLightThrowLw,
    nFTCommonMotionLightThrowF4,
    nFTCommonMotionLightThrowB4,
    nFTCommonMotionLightThrowHi4,
    nFTCommonMotionLightThrowLw4,
    nFTCommonMotionLightThrowAirF,
    nFTCommonMotionLightThrowAirB,
    nFTCommonMotionLightThrowAirHi,
    nFTCommonMotionLightThrowAirLw,
    nFTCommonMotionLightThrowAirF4,
    nFTCommonMotionLightThrowAirB4,
    nFTCommonMotionLightThrowAirHi4,
    nFTCommonMotionLightThrowAirLw4,
    nFTCommonMotionHeavyThrowF,
    nFTCommonMotionHeavyThrowB,
    nFTCommonMotionHeavyThrowF4,
    nFTCommonMotionHeavyThrowB4,
    nFTCommonMotionSwordSwing1,
    nFTCommonMotionSwordSwing3,
    nFTCommonMotionSwordSwing4,
    nFTCommonMotionSwordSwingDash,
    nFTCommonMotionBatSwing1,
    nFTCommonMotionBatSwing3,
    nFTCommonMotionBatSwing4,
    nFTCommonMotionBatSwingDash,
    nFTCommonMotionHarisenSwing1,
    nFTCommonMotionHarisenSwing3,
    nFTCommonMotionHarisenSwing4,
    nFTCommonMotionHarisenSwingDash,
    nFTCommonMotionStarRodSwing1,
    nFTCommonMotionStarRodSwing3,
    nFTCommonMotionStarRodSwing4,
    nFTCommonMotionStarRodSwingDash,
    nFTCommonMotionLGunShoot,
    nFTCommonMotionLGunShootAir,
    nFTCommonMotionFireFlowerShoot,
    nFTCommonMotionFireFlowerShootAir,
    nFTCommonMotionHammerWait,
    nFTCommonMotionHammerWalk,
    nFTCommonMotionGuardOn,
    nFTCommonMotionGuardOff,
    nFTCommonMotionEscapeF,
    nFTCommonMotionEscapeB,
    nFTCommonMotionShieldBreakFly,
    nFTCommonMotionShieldBreakFall,
    nFTCommonMotionShieldBreakDownD,
    nFTCommonMotionShieldBreakDownU,
    nFTCommonMotionShieldBreakStandD,
    nFTCommonMotionShieldBreakStandU,
    nFTCommonMotionFuraFura,
    nFTCommonMotionFuraSleep,
    nFTCommonMotionCatch,
    nFTCommonMotionCatchPull,
    nFTCommonMotionThrowF,
    nFTCommonMotionThrowB,
    nFTCommonMotionCapturePulled,
    nFTCommonMotionThrownKirbyStar,
    nFTCommonMotionThrownCopyStar,
    nFTCommonMotionYoshiEgg,
    nFTCommonMotionCaptureCaptain,
    nFTCommonMotionThrownDonkeyUnk,
    nFTCommonMotionThrownDonkeyF,
    nFTCommonMotionThrownMarioB1,
    nFTCommonMotionThrownUnk1,
    nFTCommonMotionShouldered,
    nFTCommonMotionThrownMarioB2,
    nFTCommonMotionThrownCommon,
    nFTCommonMotionThrownUnk2,
    nFTCommonMotionThrownUnk3,
    nFTCommonMotionAppeal,
    nFTCommonMotionAttack11,
    nFTCommonMotionAttack12,
    nFTCommonMotionAttackDash,
    nFTCommonMotionAttackS3Hi,
    nFTCommonMotionAttackS3HiS,
    nFTCommonMotionAttackS3,
    nFTCommonMotionAttackS3LwS,
    nFTCommonMotionAttackS3Lw,
    nFTCommonMotionAttackHi3F, // Forward-angled up tilt???
    nFTCommonMotionAttackHi3,
    nFTCommonMotionAttackHi3B, // Backward-angled up tilt???
    nFTCommonMotionAttackLw3,
    nFTCommonMotionAttackS4Hi,
    nFTCommonMotionAttackS4HiS,
    nFTCommonMotionAttackS4,
    nFTCommonMotionAttackS4LwS,
    nFTCommonMotionAttackS4Lw,
    nFTCommonMotionAttackHi4,
    nFTCommonMotionAttackLw4,
    nFTCommonMotionAttackAirN,
    nFTCommonMotionAttackAirF,
    nFTCommonMotionAttackAirB,
    nFTCommonMotionAttackAirHi,
    nFTCommonMotionAttackAirLw,
    nFTCommonMotionLandingAirN,
    nFTCommonMotionLandingAirF,
    nFTCommonMotionLandingAirB,
    nFTCommonMotionLandingAirHi,
    nFTCommonMotionLandingAirLw,
    nFTCommonMotionLandingAirNull,
    nFTCommonMotionSpecialStart

} ftCommonMotion;

typedef enum ftCommonStatus
{
    nFTCommonStatusDeadDown,
    nFTCommonStatusDeadLeftRight,
    nFTCommonStatusDeadUpStar,
    nFTCommonStatusDeadUpFall,
    nFTCommonStatusSleep,
    nFTCommonStatusEntry,

    nFTCommonStatusActionStart,    // Start of uh... I don't know a better name for this.
    nFTCommonStatusEntryNull = nFTCommonStatusActionStart,
    nFTCommonStatusRebirthDown,
    nFTCommonStatusRebirthStand,
    nFTCommonStatusRebirthWait,

    nFTCommonStatusControlStart,    // Start of (mostly) actionable (or rather player-influenced) moves
    nFTCommonStatusWait = nFTCommonStatusControlStart,
    nFTCommonStatusWalkSlow,
    nFTCommonStatusWalkMiddle,
    nFTCommonStatusWalkFast,
    nFTCommonStatusWalkEnd,
    nFTCommonStatusDash,
    nFTCommonStatusRun,
    nFTCommonStatusRunBrake,
    nFTCommonStatusTurn,
    nFTCommonStatusTurnRun,
    nFTCommonStatusKneeBend,
    nFTCommonStatusGuardKneeBend,
    nFTCommonStatusJumpF,
    nFTCommonStatusJumpB,
    nFTCommonStatusJumpAerialF,
    nFTCommonStatusJumpAerialB,
    nFTCommonStatusFall,
    nFTCommonStatusFallAerial,
    nFTCommonStatusSquat,
    nFTCommonStatusSquatWait,
    nFTCommonStatusSquatRv,
    nFTCommonStatusLandingLight,
    nFTCommonStatusLandingHeavy,
    nFTCommonStatusPass,
    nFTCommonStatusGuardPass,
    nFTCommonStatusOttottoWait,
    nFTCommonStatusOttotto,

    nFTCommonStatusDamageStart,
    nFTCommonStatusDamageHi1 = nFTCommonStatusDamageStart,
    nFTCommonStatusDamageHi2,
    nFTCommonStatusDamageHi3,
    nFTCommonStatusDamageN1,
    nFTCommonStatusDamageN2,
    nFTCommonStatusDamageN3,
    nFTCommonStatusDamageLw1,
    nFTCommonStatusDamageLw2,
    nFTCommonStatusDamageLw3,
    nFTCommonStatusDamageAir1,
    nFTCommonStatusDamageAir2,
    nFTCommonStatusDamageAir3,
    nFTCommonStatusDamageE1,       // Eletric damage weak
    nFTCommonStatusDamageE2,       // Eletric damage strong
    nFTCommonStatusDamageFlyHi,
    nFTCommonStatusDamageFlyN,
    nFTCommonStatusDamageFlyLw,
    nFTCommonStatusDamageFlyTop,
    nFTCommonStatusDamageFlyRoll,
    nFTCommonStatusWallDamage,
    nFTCommonStatusDamageEnd = nFTCommonStatusWallDamage,

    nFTCommonStatusDamageFall,
    nFTCommonStatusFallSpecial,
    nFTCommonStatusLandingFallSpecial,
    nFTCommonStatusTwister,        // Hyrule Tornado
    nFTCommonStatusTaruCann,       // DK Barrel
    nFTCommonStatusDokanStart,     // Enter pipe
    nFTCommonStatusDokanWait,      // In pipe
    nFTCommonStatusDokanEnd,       // Exit pipe
    nFTCommonStatusDokanWalk,      // Exit horizontal pipe
    nFTCommonStatusStopCeil,       // Bump head into ceiling
    nFTCommonStatusDownBounceD,
    nFTCommonStatusDownBounceU,
    nFTCommonStatusDownWaitD,
    nFTCommonStatusDownWaitU,
    nFTCommonStatusDownStandD,
    nFTCommonStatusDownStandU,
    nFTCommonStatusPassiveStandF,
    nFTCommonStatusPassiveStandB,
    nFTCommonStatusDownForwardD,
    nFTCommonStatusDownForwardU,
    nFTCommonStatusDownBackD,
    nFTCommonStatusDownBackU,
    nFTCommonStatusDownAttackD,
    nFTCommonStatusDownAttackU,
    nFTCommonStatusPassive,
    nFTCommonStatusReboundWait,
    nFTCommonStatusRebound,
    nFTCommonStatusCliffCatch,
    nFTCommonStatusCliffWait,
    nFTCommonStatusCliffQuick,
    nFTCommonStatusCliffClimbQuick1,
    nFTCommonStatusCliffClimbQuick2,
    nFTCommonStatusCliffSlow,
    nFTCommonStatusCliffClimbSlow1,
    nFTCommonStatusCliffClimbSlow2,
    nFTCommonStatusCliffAttackQuick1,
    nFTCommonStatusCliffAttackQuick2,
    nFTCommonStatusCliffAttackSlow1,
    nFTCommonStatusCliffAttackSlow2,
    nFTCommonStatusCliffEscapeQuick1,
    nFTCommonStatusCliffEscapeQuick2,
    nFTCommonStatusCliffEscapeSlow1,
    nFTCommonStatusCliffEscapeSlow2,
    nFTCommonStatusLightGet,
    nFTCommonStatusHeavyGet,
    nFTCommonStatusLiftWait,
    nFTCommonStatusLiftTurn,

    nFTCommonStatusLightThrowStart,                                    // Start of Light Throw action states
    nFTCommonStatusLightThrowDrop = nFTCommonStatusLightThrowStart,
    nFTCommonStatusLightThrowDash,
    nFTCommonStatusLightThrowF,
    nFTCommonStatusLightThrowB,
    nFTCommonStatusLightThrowHi,
    nFTCommonStatusLightThrowLw,
    nFTCommonStatusLightThrowF4,
    nFTCommonStatusLightThrowB4,
    nFTCommonStatusLightThrowHi4,
    nFTCommonStatusLightThrowLw4,
    nFTCommonStatusLightThrowAirF,
    nFTCommonStatusLightThrowAirB,
    nFTCommonStatusLightThrowAirHi,
    nFTCommonStatusLightThrowAirLw,
    nFTCommonStatusLightThrowAirF4,
    nFTCommonStatusLightThrowAirB4,
    nFTCommonStatusLightThrowAirHi4,
    nFTCommonStatusLightThrowAirLw4,
    nFTCommonStatusLightThrowEnd = nFTCommonStatusLightThrowAirLw4,   // End of Light Throw action states

    nFTCommonStatusHeavyThrowStart,                                    // Start of Heavy Throw action states
    nFTCommonStatusHeavyThrowF = nFTCommonStatusHeavyThrowStart,
    nFTCommonStatusHeavyThrowB,
    nFTCommonStatusHeavyThrow4Start,                                   // Start of Heavy Throw Smash action states
    nFTCommonStatusHeavyThrowF4 = nFTCommonStatusHeavyThrow4Start, 
    nFTCommonStatusHeavyThrowB4,
    nFTCommonStatusHeavyThrow4End = nFTCommonStatusHeavyThrowB4,      // End of Heavy Throw Smash action states
    nFTCommonStatusHeavyThrowEnd = nFTCommonStatusHeavyThrow4End,     // End of Heavy Throw action states

    nFTCommonStatusItemSwingStart,                                     // Start of Item Swing action states
    nFTCommonStatusSwordSwing1 = nFTCommonStatusItemSwingStart,
    nFTCommonStatusSwordSwing3,
    nFTCommonStatusSwordSwing4,
    nFTCommonStatusSwordSwingDash,
    nFTCommonStatusBatSwing1,
    nFTCommonStatusBatSwing3,
    nFTCommonStatusBatSwing4,
    nFTCommonStatusBatSwingDash,
    nFTCommonStatusHarisenSwing1,
    nFTCommonStatusHarisenSwing3,
    nFTCommonStatusHarisenSwing4,
    nFTCommonStatusHarisenSwingDash,
    nFTCommonStatusStarRodSwing1,
    nFTCommonStatusStarRodSwing3,
    nFTCommonStatusStarRodSwing4,
    nFTCommonStatusStarRodSwingDash,
    nFTCommonStatusItemSwingEnd = nFTCommonStatusStarRodSwingDash,    // End of Item Swing action states

    nFTCommonStatusLGunShoot,
    nFTCommonStatusLGunShootAir,
    nFTCommonStatusFireFlowerShoot,
    nFTCommonStatusFireFlowerShootAir,

    nFTCommonStatusHammerStart,                                        // Start of Hammer action states
    nFTCommonStatusHammerWait = nFTCommonStatusHammerStart,
    nFTCommonStatusHammerWalk,
    nFTCommonStatusHammerTurn,
    nFTCommonStatusHammerKneeBend,
    nFTCommonStatusHammerFall,                                         // Pretty much any aerial Hammer state
    nFTCommonStatusHammerLanding,
    nFTCommonStatusHammerEnd = nFTCommonStatusHammerLanding,          // End of Hammer action states

    nFTCommonStatusGuardStart,                                         // Start of Shield action states
    nFTCommonStatusGuardOn = nFTCommonStatusGuardStart,
    nFTCommonStatusGuard,
    nFTCommonStatusGuardOff,
    nFTCommonStatusGuardSetOff,
    nFTCommonStatusGuardEnd = nFTCommonStatusGuardSetOff,             // End of Shield action states  

    nFTCommonStatusEscapeF,
    nFTCommonStatusEscapeB,
    nFTCommonStatusShieldBreakFly,
    nFTCommonStatusShieldBreakFall,
    nFTCommonStatusShieldBreakDownD,
    nFTCommonStatusShieldBreakDownU,
    nFTCommonStatusShieldBreakStandD,
    nFTCommonStatusShieldBreakStandU,
    nFTCommonStatusFuraFura,
    nFTCommonStatusFuraSleep,
    nFTCommonStatusCatch,
    nFTCommonStatusCatchPull,
    nFTCommonStatusCatchWait,
    nFTCommonStatusThrowF,
    nFTCommonStatusThrowB,
    nFTCommonStatusCapturePulled,
    nFTCommonStatusCaptureWait,
    nFTCommonStatusCaptureKirby,
    nFTCommonStatusCaptureWaitKirby,
    nFTCommonStatusThrownKirbyStar,
    nFTCommonStatusThrownCopyStar,
    nFTCommonStatusCaptureYoshi,
    nFTCommonStatusYoshiEgg,
    nFTCommonStatusCaptureCaptain,
    nFTCommonStatusThrownDonkeyUnk, // Related to DK throws?

    nFTCommonStatusThrownStart,
    nFTCommonStatusThrownDonkeyF = nFTCommonStatusThrownStart,
    nFTCommonStatusThrownMarioB1,
    nFTCommonStatusThrownUnk1,
    nFTCommonStatusShouldered,
    nFTCommonStatusThrownMarioB2,
    nFTCommonStatusThrownCommon,
    nFTCommonStatusThrownUnk2,
    nFTCommonStatusThrownUnk3,
    nFTCommonStatusThrownEnd = nFTCommonStatusThrownUnk3,

    nFTCommonStatusAppeal,
    nFTCommonStatusAttack11,
    nFTCommonStatusAttack12,
    nFTCommonStatusAttackDash,
    nFTCommonStatusAttackS3Hi,
    nFTCommonStatusAttackS3HiS,
    nFTCommonStatusAttackS3,
    nFTCommonStatusAttackS3LwS,
    nFTCommonStatusAttackS3Lw,
    nFTCommonStatusAttackHi3F, // Forward-angled up tilt???
    nFTCommonStatusAttackHi3,
    nFTCommonStatusAttackHi3B, // Backward-angled up tilt???
    nFTCommonStatusAttackLw3,
    nFTCommonStatusAttackS4Hi,
    nFTCommonStatusAttackS4HiS,
    nFTCommonStatusAttackS4,
    nFTCommonStatusAttackS4LwS,
    nFTCommonStatusAttackS4Lw,
    nFTCommonStatusAttackHi4,
    nFTCommonStatusAttackLw4,
    nFTCommonStatusAttackAirN,
    nFTCommonStatusAttackAirF,
    nFTCommonStatusAttackAirB,
    nFTCommonStatusAttackAirHi,
    nFTCommonStatusAttackAirLw,

    nFTCommonStatusLandingAirStart,
    nFTCommonStatusLandingAirN = nFTCommonStatusLandingAirStart,
    nFTCommonStatusLandingAirF,
    nFTCommonStatusLandingAirB,
    nFTCommonStatusLandingAirHi,
    nFTCommonStatusLandingAirLw,
    nFTCommonStatusLandingAirNull,
    nFTCommonStatusLandingAirEnd = nFTCommonStatusLandingAirNull,

    nFTCommonStatusSpecialStart // Start of special move table

} ftCommonStatus;

typedef enum ftMotionAttackIndex
{
    nFTMotionAttackIDNone,

    nFTMotionAttackIDBaseStart,                                 // Start of moves that are part of the character's base moveset
    nFTMotionAttackIDAttack11 = nFTMotionAttackIDBaseStart,
    nFTMotionAttackIDAttack12,
    nFTMotionAttackIDAttack13,
    nFTMotionAttackIDAttack100,
    nFTMotionAttackIDAttackDash,
    nFTMotionAttackIDAttackS3,
    nFTMotionAttackIDAttackHi3,
    nFTMotionAttackIDAttackLw3,
    nFTMotionAttackIDAttackS4,
    nFTMotionAttackIDAttackHi4,
    nFTMotionAttackIDAttackLw4,
    nFTMotionAttackIDAttackAirN,
    nFTMotionAttackIDAttackAirF,
    nFTMotionAttackIDAttackAirB,
    nFTMotionAttackIDAttackAirHi,
    nFTMotionAttackIDAttackAirLw,
    nFTMotionAttackIDSpecialHi,
    nFTMotionAttackIDSpecialN,
    nFTMotionAttackIDSpecialNCopyMario,
    nFTMotionAttackIDSpecialNCopyLuigi,
    nFTMotionAttackIDSpecialNCopyFox,
    nFTMotionAttackIDSpecialNCopySamus,
    nFTMotionAttackIDSpecialNCopyDonkey,
    nFTMotionAttackIDSpecialNCopyPikachu,
    nFTMotionAttackIDSpecialNCopyNess,
    nFTMotionAttackIDSpecialNCopyLink,
    nFTMotionAttackIDSpecialNCopyPurin,
    nFTMotionAttackIDSpecialNCopyCaptain,
    nFTMotionAttackIDSpecialNCopyYoshi,
    nFTMotionAttackIDSpecialLw,
    nFTMotionAttackIDDownAttackD,
    nFTMotionAttackIDDownAttackU,
    nFTMotionAttackIDCliffAttackQuick,
    nFTMotionAttackIDCliffAttackSlow,
    nFTMotionAttackIDThrowF,
    nFTMotionAttackIDThrowB,
    nFTMotionAttackIDBaseEnd = nFTMotionAttackIDThrowB,

    nFTMotionAttackIDItemStart,
    nFTMotionAttackIDSwordSwing1 = nFTMotionAttackIDItemStart,
    nFTMotionAttackIDSwordSwing3,
    nFTMotionAttackIDSwordSwing4,
    nFTMotionAttackIDSwordSwingDash,
    nFTMotionAttackIDBatSwing1,
    nFTMotionAttackIDBatSwing3,
    nFTMotionAttackIDBatSwing4,
    nFTMotionAttackIDBatSwingDash,
    nFTMotionAttackIDHarisenSwing1,
    nFTMotionAttackIDHarisenSwing3,
    nFTMotionAttackIDHarisenSwing4,
    nFTMotionAttackIDHarisenSwingDash,
    nFTMotionAttackIDStarRodSwing1,
    nFTMotionAttackIDStarRodSwing3,
    nFTMotionAttackIDStarRodSwing4,
    nFTMotionAttackIDStarRodSwingDash,
    nFTMotionAttackIDLGunShoot,
    nFTMotionAttackIDFireFlowerShoot,
    nFTMotionAttackIDHammer,
    nFTMotionAttackIDItemThrow,
    nFTMotionAttackIDItemEnd = nFTMotionAttackIDItemThrow,

    nFTMotionAttackIDNull,
    nFTMotionAttackIDEnumMax

} ftMotionAttackIndex;

typedef enum ftStatusAttackIndex
{
    nFTStatusAttackIDNone,

    nFTStatusAttackIDAttackStart,

    nFTStatusAttackIDNormalStart = nFTStatusAttackIDAttackStart,
    nFTStatusAttackIDAttack11 = nFTStatusAttackIDNormalStart,
    nFTStatusAttackIDAttackDash,
    nFTStatusAttackIDAttackS3,
    nFTStatusAttackIDAttackHi3,
    nFTStatusAttackIDAttackLw3,
    nFTStatusAttackIDAttackS4,
    nFTStatusAttackIDAttackHi4,
    nFTStatusAttackIDAttackLw4,
    nFTStatusAttackIDAttackAirN,
    nFTStatusAttackIDAttackAirF,
    nFTStatusAttackIDAttackAirB,
    nFTStatusAttackIDAttackAirHi,
    nFTStatusAttackIDAttackAirLw,
    nFTStatusAttackIDNormalEnd = nFTStatusAttackIDAttackAirLw,

    nFTStatusAttackIDJabStart,
    nFTStatusAttackIDAttack12 = nFTStatusAttackIDJabStart,
    nFTStatusAttackIDAttack13,
    nFTStatusAttackIDAttack100,
    nFTStatusAttackIDJabEnd = nFTStatusAttackIDAttack100,

    nFTStatusAttackIDSpecialStart,
    nFTStatusAttackIDSpecialHi = nFTStatusAttackIDSpecialStart,
    nFTStatusAttackIDSpecialN,
    nFTStatusAttackIDSpecialNCopyMario,
    nFTStatusAttackIDSpecialNCopyLuigi,
    nFTStatusAttackIDSpecialNCopyFox,
    nFTStatusAttackIDSpecialNCopySamus,
    nFTStatusAttackIDSpecialNCopyDonkey,
    nFTStatusAttackIDSpecialNCopyPikachu,
    nFTStatusAttackIDSpecialNCopyNess,
    nFTStatusAttackIDSpecialNCopyLink,
    nFTStatusAttackIDSpecialNCopyPurin,
    nFTStatusAttackIDSpecialNCopyCaptain,
    nFTStatusAttackIDSpecialNCopyYoshi,
    nFTStatusAttackIDSpecialLw,
    nFTStatusAttackIDSpecialEnd = nFTStatusAttackIDSpecialLw,

    nFTStatusAttackIDDownAttackD,
    nFTStatusAttackIDDownAttackU,
    nFTStatusAttackIDCliffAttackQuick,
    nFTStatusAttackIDCliffAttackSlow,
    nFTStatusAttackIDThrowF,
    nFTStatusAttackIDThrowB,

    nFTStatusAttackIDItemStart,
    nFTStatusAttackIDSwordSwing1 = nFTStatusAttackIDItemStart,
    nFTStatusAttackIDSwordSwing3,
    nFTStatusAttackIDSwordSwing4,
    nFTStatusAttackIDSwordSwingDash,
    nFTStatusAttackIDBatSwing1,
    nFTStatusAttackIDBatSwing3,
    nFTStatusAttackIDBatSwing4,
    nFTStatusAttackIDBatSwingDash,
    nFTStatusAttackIDHarisenSwing1,
    nFTStatusAttackIDHarisenSwing3,
    nFTStatusAttackIDHarisenSwing4,
    nFTStatusAttackIDHarisenSwingDash,
    nFTStatusAttackIDStarRodSwing1,
    nFTStatusAttackIDStarRodSwing3,
    nFTStatusAttackIDStarRodSwing4,
    nFTStatusAttackIDStarRodSwingDash,
    nFTStatusAttackIDLGunShoot,
    nFTStatusAttackIDFireFlowerShoot,
    nFTStatusAttackIDHammer,
    nFTStatusAttackIDItemThrow,
    nFTStatusAttackIDItemEnd = nFTStatusAttackIDItemThrow,

    nFTStatusAttackIDNull,
    nFTStatusAttackIDEnumMax

} ftStatusAttackIndex;

typedef enum ftMotionEventKind
{
	nFTMotionEventKindEnd,
	nFTMotionEventKindSyncWait,
	nFTMotionEventKindAsyncWait,
	nFTMotionEventKindMakeHit,
	nFTMotionEventKindMakeHitScaleOffset,
	nFTMotionEventKindClearHitID,
	nFTMotionEventKindClearHitAll,
	nFTMotionEventKindSetHitOffset,
	nFTMotionEventKindSetHitDamage,
	nFTMotionEventKindSetHitSize,
	nFTMotionEventKindSetHitSoundLevel,
	nFTMotionEventKindRefreshHitID,
	nFTMotionEventKindSetThrow,
	nFTMotionEventKindSetDamageThrown,
	nFTMotionEventKindPlaySFX,
	nFTMotionEventKindPlayLoopSFXStoreInfo,
	nFTMotionEventKindStopLoopSFX,
	nFTMotionEventKindPlayVoiceStoreInfo,
	nFTMotionEventKindPlayLoopVoiceStoreInfo,
	nFTMotionEventKindPlaySFXStoreInfo,
	nFTMotionEventKindPlaySmashVoice,
	nFTMotionEventKindSetFlag0,
	nFTMotionEventKindSetFlag1,
	nFTMotionEventKindSetFlag2,
	nFTMotionEventKindSetFlag3,
	nFTMotionEventKindSetAirJumpAdd,
	nFTMotionEventKindSetAirJumpMax,
	nFTMotionEventKindSetHitStatusPartAll,
	nFTMotionEventKindSetHitStatusPartID,
	nFTMotionEventKindSetHitStatusAll,
	nFTMotionEventKindResetHurtPartAll,
	nFTMotionEventKindSetHurtPartID,
	nFTMotionEventKindLoopBegin,
	nFTMotionEventKindLoopEnd,
	nFTMotionEventKindSubroutine,
	nFTMotionEventKindReturn,
	nFTMotionEventKindGoto,
	nFTMotionEventKindPauseScript,
	nFTMotionEventKindEffect,
	nFTMotionEventKindEffectScaleOffset, // ???
	nFTMotionEventKindSetModelPartID,
	nFTMotionEventKindResetModelPartAll,
	nFTMotionEventKindHideModelPartAll,
	nFTMotionEventKindSetTexturePartID,
	nFTMotionEventKindSetColAnim,
	nFTMotionEventKindResetColAnim,
	nFTMotionEventKindSetParallelScript, // What
	nFTMotionEventKindSetSlopeContour,
	nFTMotionEventKindHideItem,
	nFTMotionEventKindMakeRumble,
	nFTMotionEventKindStopRumble,
	nFTMotionEventKindSetAfterImage // Sword Trail

} ftMotionEventKind;

typedef enum ftCameraModes
{
    nFTCameraModeDefault,
    nFTCameraModeRebirth,
    nFTCameraModeDeadUpStar,
    nFTCameraModeEntry,
    nFTCameraModeExplain

} ftCameraModes;

typedef enum ftSlopeContours
{
    nFTSlopeContourLFoot,
    nFTSlopeContourRFoot,
    nFTSlopeContourFull

} ftSlopeContours;

typedef enum ftHitlogObjectKind
{
	nFTHitlogObjectNone,
	nFTHitlogObjectFighter,
	nFTHitlogObjectWeapon,
	nFTHitlogObjectItem,
	nFTHitlogObjectGround

} ftHitlogObjectKind;

typedef enum ftItemSwingKind
{
    nFTItemSwingKindSword,
    nFTItemSwingKindBat,
    nFTItemSwingKindHarisen,
    nFTItemSwingKindStarRod,
    nFTItemSwingKindEnumMax

} ftItemSwingKind;

typedef enum ftItemSwingType
{
    nFTItemSwingTypeAttack1,
    nFTItemSwingTypeAttack3,
    nFTItemSwingTypeAttack4,
    nFTItemSwingTypeAttackDash,
    nFTItemSwingTypeEnumMax
	
} ftItemSwingType;

typedef enum ftSpecialHitKind
{
    nFTSpecialHitKindFoxReflector,
    nFTSpecialHitKindNessAbsorb,
    nFTSpecialHitKindNessReflector

} ftSpecialHitKind;

typedef enum ftCatchKind
{
    nFTCatchKindYoshiSpecialN,              // Yoshi's Egg Lay, also used for Kirby's copy ability version of it
    nFTCatchKindKirbySpecialN,              // Kirby's Inhale
    nFTCatchKindTaruCann,                   // Barrel Cannon
    nFTCatchKindTwister,                    // Tornado
    nFTCatchKindCommon,                     // Common grab
    nFTCatchKindCaptainSpecialHi            // Captain Falcon's Falcon Dive

} ftCatchKind;

typedef enum ftPartsPlacement
{
    nFTPartsPlacementLow,
    nFTPartsPlacementMiddle,
    nFTPartsPlacementHigh

} ftPartsPlacement;

typedef enum ftPartsJointLabels
{
    nFTPartsJointTopN,
    nFTPartsJointTransN,
    nFTPartsJointXRotN,
    nFTPartsJointYRotN,
    nFTPartsJointCommonStart

} ftPartsJointLabels;

typedef enum ftPartsLevelDetail
{
    nFTPartsDetailNone,                         // Unused?
    nFTPartsDetailStart,                        // Start of actual detail values
    nFTPartsDetailHigh = nFTPartsDetailStart,   // Hi-poly
    nFTPartsDetailLow                           // Lo-poly
        
} ftPartsLevelDetail;

typedef enum ftKind
{
    nFTKindPlayableStart,
    nFTKindMario = nFTKindPlayableStart,
    nFTKindFox,
    nFTKindDonkey,
    nFTKindSamus,
    nFTKindLuigi,
    nFTKindLink,
    nFTKindYoshi,
    nFTKindCaptain,
    nFTKindKirby,
    nFTKindPikachu,
    nFTKindPurin,
    nFTKindNess,
    nFTKindPlayableEnd = nFTKindNess,

    nFTKindBoss,
    nFTKindMMario,

    nFTKindNStart,
    nFTKindNMario = nFTKindNStart,
    nFTKindNFox,
    nFTKindNDonkey,
    nFTKindNSamus,
    nFTKindNLuigi,
    nFTKindNLink,
    nFTKindNYoshi,
    nFTKindNCaptain,
    nFTKindNKirby,
    nFTKindNPikachu,
    nFTKindNPurin,
    nFTKindNNess,
    nFTKindNEnd = nFTKindNNess,

    nFTKindGDonkey,
    nFTKindEnumMax,
    nFTKindNull        // NONE

} ftKind;

typedef enum ftPlayerKind
{
    nFTPlayerKindMan,        // Player-controlled
    nFTPlayerKindCom,        // CPU-controlled
    nFTPlayerKindNot,        // N/A
    nFTPlayerKindDemo,       // Results Screen / Auto-Demo?
    nFTPlayerKindKey,        // Intro movie?
    nFTPlayerKindGameKey     // How to Play?

} ftPlayerKind;

typedef enum ftComputerCommandKind
{
    nFTComputerCommandButtonAPress,
    nFTComputerCommandButtonARelease,
    nFTComputerCommandButtonBPress,
    nFTComputerCommandButtonBRelease,
    nFTComputerCommandButtonZPress,
    nFTComputerCommandButtonZRelease,
    nFTComputerCommandButtonLPress,
    nFTComputerCommandButtonLRelease,
    nFTComputerCommandButtonStartPress,
    nFTComputerCommandButtonStartRelease,
    nFTComputerCommandStickX,
    nFTComputerCommandStickY,
    nFTComputerCommandMoveAuto,
    nFTComputerCommandStickXVar,
    nFTComputerCommandStickYVar,
    nFTComputerCommandEnumMax

} ftComputerCommandKind;

typedef enum ftComputerInputKind
{
    nFTComputerInputStickN,                                                // Reset stick to neutral
    nFTComputerInputMoveAuto,                                              // Move towards target (all directions)
    nFTComputerInputStickTiltAutoX,                                        // Move towards target (horizontally)
    nFTComputerInputStickNMoveAuto,                                        // Reset stick to neutral for one frame, then more towards target (all directions)
    nFTComputerInputMoveAutoStickTiltHiReleaseZ,                           // Used for many moves that involve slightly tilting the stick?
    nFTComputerInputStickTiltAutoXButtonA,                                 // Used for Forward Tilt
    nFTComputerInputStickTiltAutoXD5NButtonA,                              // Move towards target (horiztonally) for a duration of 5 frames then reset stick to neutral and press A
    nFTComputerInputMoveAutoButtonA,                                       // Move towards target (all directions) and press A
    nFTComputerInputStickSmashAutoXButtonA,                                // Move towards target's direction and press A (no Stick Y-Axis change)
    nFTComputerInputStickSmashAutoXButtonB,                                // Use Neutral Special in target's direction
    nFTComputerInputStickTiltAutoXNYD5SmashAutoXButtonB,                   // Move towards target for a duration of 5 frames then smash stick in target's direction and press B
    nFTComputerInputStickTiltAutoXNYD1ButtonB,                             // Move towards target for a duration of 1 frame then reset X-Axis to neutral and press B
    nFTComputerInputButtonZ1,                                              // Used for ledge roll (and more I suppose)
    nFTComputerInputStickSmashHiButtonB,                                   // Used for Up Special
    nFTComputerInputStickTiltAutoXD5SmashSButtonB,                         // Move towards target for a duration of 5 frames at half range, then do full range + B button
    nFTComputerInputStickNButtonL,                                         // Used for taunt
    nFTComputerInputButtonZ2,                                              // Why is this here again?
    nFTComputerInputStickTiltAutoXD5,                                      // Move towards target for a duration of 5 frames then end script 
    nFTComputerInputStickTiltAutoXD1,                                      // Move towards target for a duration of 1 frame then end script
    nFTComputerInputStickNButtonA,                                         // Used for Jab and Neutral Aerial
    nFTComputerInputStickTiltAutoXD5ButtonA,                               // Move towards target for a duration of 5 frames then press A
    nFTComputerInputStickSmashAutoXNYButtonA,                              // Used for Forward Smash, Forward Aerial and Back Aerial
    nFTComputerInputStickTiltAutoXD1SmashSButtonA,                         // Move towards target at half stick range for a duration of 1 frame, then do full range + A button and end script
    nFTComputerInputStickTiltHiButtonA,                                    // Used for Up Tilt
    nFTComputerInputStickTiltAutoXD5TiltAutoYButtonA,                      // Move towards target for a duration of 5 frames then do tilt attack in their Y direction
    nFTComputerInputStickSmashHiButtonA,                                   // Used for Up Smash and Up Aerial
    nFTComputerInputStickTiltAutoXD5SmashAutoYButtonA,                     // Move towards target for a duration of 5 frames then do smash attack in their Y direction
    nFTComputerInputStickSmashLwButtonB,                                   // Used for Down Special
    nFTComputerInputStickNButtonZButtonA,                                  // Used for grab
    nFTComputerInputStickTiltAutoXD5ButtonZButtonA,                        // Move towards target for a duration of 5 frames then use grab
    nFTComputerInputStickSmashL,                                           // Used for Throws
    nFTComputerInputStickSmashR,                                           // Used for Throws
    nFTComputerInputStickTiltLwButtonA,                                    // Used for Down Tilt
    nFTComputerInputStickTiltAutoXD5TiltLwButtonA,                         // Move towards target for a duration of 5 frames then use Down Tilt
    nFTComputerInputStickSmashLwButtonA,                                   // Used for Down Smash and Down Aerial
    nFTComputerInputStickNButtonZHold,                                     // Used to shield
    nFTComputerInputButtonZRelease,                                        // Used to let go of shield
    nFTComputerInputStickNXSmashLwButtonBReleaseBHold,                     // Used to repeatedly tap Down Special, is this Donkey Kong's Hand Slap move?
    nFTComputerInputStickNButtonBRelease,                                  // Let go of B button
    nFTComputerInputStickND1MoveAutoSmashLw,                               // Let go of control stick for a duration of 1 frame then do full range down; fast fall?
    nFTComputerInputStickNButtonBZReleaseAPress,                           // Used for ledge attack?
    nFTComputerInputStickTiltAutoXButtonBZReleaseAPress,                   // ???
    nFTComputerInputThrowItemImmediate,                                    // Throw item after a short wait?
    nFTComputerInputThrowItemWait,                                         // Throw item after a long wait?
    nFTComputerInputWiggle,                                                // Wiggle out of grab type moves (Cargo Throw, Inhale, Egg Lay)
    nFTComputerInputEscapeL,                                               // Roll left
    nFTComputerInputEscapeR,                                               // Roll right
    nFTComputerInputYoshiSpecialHiAim,                                     // Yoshi Up Special
    nFTComputerInputNessSpecialHiAim                                       // Ness Up Special

} ftComputerInputKind;

// The CPUs' "personality traits," overriding behavior if present (mostly 1P Game?)
typedef enum ftComputerTraitKind
{
    nFTComputerTraitDefault,           // "? Used in VS and for some 1P Game characters"
    nFTComputerTraitLink,              // Wait around for a while (1P Game Link)
    nFTComputerTraitYoshiTeam,         // Yoshi Team
    nFTComputerTraitKirbyTeam,         // Kirby (Is this specifically 1P Game Kirby Team?)
    nFTComputerTraitPolyTeam,          // Fighting Polygon Team (1P Game)
    nFTComputerTraitMarioBros,         // Mario & Luigi (1P Game)
    nFTComputerTraitGDonkey,       // Giant Donkey Kong (1P Game)
    nFTComputerTraitUnk1,              // Unknown
    nFTComputerTraitBonus3,            // Race to the Finish Fighting Polygons
    nFTComputerTraitAlly,              // Ally fighter in 1P Game
    nFTComputerTraitNone               // No overriding behavior (Training Mode)

} ftComputerTraitKind;

typedef enum ftComputerBehaviorKind
{
    nFTComputerBehaviorDefault,
    nFTComputerBehaviorUnk1,
    nFTComputerBehaviorUnk2,
    nFTComputerBehaviorAlly,
    nFTComputerBehaviorCaptain,
    nFTComputerBehaviorUnk3,
    nFTComputerBehaviorUnk4,
    nFTComputerBehaviorYoshiTeam,
    nFTComputerBehaviorKirbyTeam,
    nFTComputerBehaviorPolyTeam,
    nFTComputerBehaviorUnused1,
    nFTComputerBehaviorUnused2,
    nFTComputerBehaviorUnused3,
    nFTComputerBehaviorBonus3,
    nFTComputerBehaviorUnused4,
    nFTComputerBehaviorStand,
    nFTComputerBehaviorWalk,
    nFTComputerBehaviorEvade,
    nFTComputerBehaviorJump,
    nFTComputerBehaviorUnk5

} ftComputerBehaviorKind;

typedef enum ftComputerObjectiveKind
{
    nFTComputerObjectiveStand,         // CPU player will idle (?)
    nFTComputerObjectiveWalk,          // CPU player will walk around (?)
    nFTComputerObjectiveAttack,        // CPU player will try to attack its target position
    nFTComputerObjectiveEvade,         // CPU player will try to avoid contact with its target
    nFTComputerObjectiveRecover,       // CPU player will try to recover when offstage
    nFTComputerObjectiveTrackItem,     // CPU player will try to navigate to its target item and pick it up
    nFTComputerObjectiveUseItem,       // CPU player will try to use shootable, throwable or ground (?) item
    nFTComputerObjectiveCounterAttack, // CPU player will try to act just before landing from DamageFall? According to Smash Remix, this causes them to spam shield?
    nFTComputerObjectiveUnknown1,      // ???
    nFTComputerObjectiveAlly,          // ???
    nFTComputerObjectivePatrol,        // CPU player will walk around and attack opposing bystanders (not ally behavior, used in Kirby Team)
    nFTComputerObjectiveRush           // CPU player will try to relentlessly target opponents (Race to the Finish)

} ftComputerObjectiveKind;

typedef enum ftExplainCommandKind
{
    nFTExplainCommandEnd,
    nFTExplainCommandButton,
    nFTExplainCommandStick

} ftExplainCommandKind;

typedef enum ftAnimCommandKind
{
    nFTFigatreeCommandEnd,
    nFTFigatreeCommandBlock,
    nFTFigatreeCommandSetValBlock,
    nFTFigatreeCommandSetVal,
    nFTFigatreeCommandSetValRateBlock,
    nFTFigatreeCommandSetValRate,
    nFTFigatreeCommandSetTargetRate,
    nFTFigatreeCommandSetVal0RateBlock,
    nFTFigatreeCommandSetVal0Rate,
    nFTFigatreeCommandSetValAfterBlock,
    nFTFigatreeCommandSetValAfter,
    nFTFigatreeCommand11,
    nFTFigatreeCommandSetTranslateInterp,
    nFTFigatreeCommandLoop,
    nFTFigatreeCommandSetFlags

} ftAnimCommandKind;

// Structs
typedef struct ftStruct					        ftStruct;
typedef struct ftSpecialHit				        ftSpecialHit;
typedef struct ftItemPickup				        ftItemPickup;
typedef struct ftThrownStatus			        ftThrownStatus;
typedef struct ftThrownStatusArray		        ftThrownStatusArray;
typedef struct ftMotionDesc				        ftMotionDesc;
typedef struct ftMotionDescArray		        ftMotionDescArray;
typedef struct ftFileSize                       ftFileSize;
typedef struct ftData					        ftData;
typedef struct ftCommonPart                     ftCommonPart;
typedef struct ftCommonPartContainer            ftCommonPartContainer;
typedef struct ftModelPart				        ftModelPart;
typedef struct ftModelPartDesc			        ftModelPartDesc;
typedef struct ftModelPartContainer		        ftModelPartContainer;
typedef struct ftModelPartStatus	            ftModelPartStatus;
typedef struct ftTexturePart		            ftTexturePart;
typedef struct ftTexturePartContainer	        ftTexturePartContainer;
typedef struct ftTexturePartStatus              ftTexturePartStatus;
typedef union  ftAnimDesc				        ftAnimDesc;
typedef struct ftMotionFlags		            ftMotionFlags;
typedef struct ftMotionScript                   ftMotionScript;
typedef struct ftMotionEventDefault             ftMotionEventDefault;
typedef struct ftMotionEventDouble              ftMotionEventDouble;
typedef struct ftMotionEventMakeHit1            ftMotionEventMakeHit1;
typedef struct ftMotionEventMakeHit2            ftMotionEventMakeHit2;
typedef struct ftMotionEventMakeHit3            ftMotionEventMakeHit3;
typedef struct ftMotionEventMakeHit4            ftMotionEventMakeHit4;
typedef struct ftMotionEventMakeHit5            ftMotionEventMakeHit5;
typedef struct ftMotionEventMakeHit             ftMotionEventMakeHit;
typedef struct ftMotionEventSetHitOffset1       ftMotionEventSetHitOffset1;
typedef struct ftMotionEventSetHitOffset2       ftMotionEventSetHitOffset2;
typedef struct ftMotionEventSetHitOffset        ftMotionEventSetHitOffset;
typedef struct ftMotionEventSetHitDamage        ftMotionEventSetHitDamage;
typedef struct ftMotionEventSetHitSize          ftMotionEventSetHitSize;
typedef struct ftMotionEventSetHitSound         ftMotionEventSetHitSound;
typedef struct ftMotionEventSetThrow1           ftMotionEventSetThrow1;
typedef struct ftMotionEventSetThrow2           ftMotionEventSetThrow2;
typedef struct ftMotionEventSetThrow            ftMotionEventSetThrow;
typedef struct ftMotionEventMakeEffect1         ftMotionEventMakeEffect1;
typedef struct ftMotionEventMakeEffect2         ftMotionEventMakeEffect2;
typedef struct ftMotionEventMakeEffect3         ftMotionEventMakeEffect3;
typedef struct ftMotionEventMakeEffect4         ftMotionEventMakeEffect4;
typedef struct ftMotionEventMakeEffect          ftMotionEventMakeEffect;
typedef struct ftMotionEventSetHitStatusPartID  ftMotionEventSetHitStatusPartID;
typedef struct ftMotionEventModifyHurtPartID1   ftMotionEventModifyHurtPartID1;
typedef struct ftMotionEventModifyHurtPartID2   ftMotionEventModifyHurtPartID2;
typedef struct ftMotionEventModifyHurtPartID3   ftMotionEventModifyHurtPartID3;
typedef struct ftMotionEventModifyHurtPartID4   ftMotionEventModifyHurtPartID4;
typedef struct ftMotionEventModifyHurtPartID    ftMotionEventModifyHurtPartID;
typedef struct ftMotionEventSubroutine1         ftMotionEventSubroutine1;
typedef struct ftMotionEventSubroutine2         ftMotionEventSubroutine2;
typedef struct ftMotionEventSubroutine          ftMotionEventSubroutine;
typedef struct ftMotionEventSetDamageThrown1    ftMotionEventSetDamageThrown1;
typedef struct ftMotionEventSetDamageThrown2    ftMotionEventSetDamageThrown2;
typedef struct ftMotionEventSetDamageThrown     ftMotionEventSetDamageThrown;
typedef struct ftMotionDamageScript             ftMotionDamageScript;
typedef struct ftMotionEventGoto1               ftMotionEventGoto1;
typedef struct ftMotionEventGoto2               ftMotionEventGoto2;
typedef struct ftMotionEventGoto                ftMotionEventGoto;
typedef struct ftMotionEventParallel1           ftMotionEventParallel1;
typedef struct ftMotionEventParallel2           ftMotionEventParallel2;
typedef struct ftMotionEventParallel            ftMotionEventParallel;
typedef struct ftMotionEventSetModelPartID      ftMotionEventSetModelPartID;
typedef struct ftMotionEventSetTexturePartID    ftMotionEventSetTexturePartID;
typedef struct ftMotionEventSetColAnimID        ftMotionEventSetColAnimID;
typedef struct ftMotionEventSetSlopeContour     ftMotionEventSetSlopeContour;
typedef struct ftMotionEventSetAfterImage       ftMotionEventSetAfterImage;
typedef struct ftMotionEventMakeRumble          ftMotionEventMakeRumble;
typedef struct ftMotionEventStopRumble          ftMotionEventStopRumble;
typedef struct ftStatusDesc				        ftStatusDesc;
typedef struct ftOpeningDesc		            ftOpeningDesc;
typedef struct ftThrowHitDesc			        ftThrowHitDesc;
typedef struct ftThrowReleaseDesc		        ftThrowReleaseDesc;
typedef struct ftCreateDesc				        ftCreateDesc;
typedef struct ftHitMatrix                      ftHitMatrix;
typedef struct ftHitbox					        ftHitbox;
typedef struct ftHurtboxDesc			        ftHurtboxDesc;
typedef struct ftHurtbox				        ftHurtbox;
typedef struct ftHitlog		                    ftHitlog;
typedef struct ftItemThrow				        ftItemThrow;
typedef struct ftItemSwing				        ftItemSwing;
typedef struct ftParts                          ftParts;
typedef struct ftWithheldPart			        ftWithheldPart;
typedef struct ftShadow                         ftShadow;
typedef struct ftCostume                        ftCostume;
typedef struct ftSkeleton                       ftSkeleton;
typedef struct ftAfterImage				        ftAfterImage;
typedef struct ftCamera                         ftCamera;
typedef struct ftSprites                        ftSprites;
typedef struct ftComputer				        ftComputer;
typedef struct ftPlayerInput                    ftPlayerInput;
typedef struct ftComputerInput                  ftComputerInput;
typedef struct ftComputerAttack                 ftComputerAttack;
typedef union  ftExplainCommand                 ftExplainCommand;
typedef struct ftExplainInput                   ftExplainInput;
typedef struct ftAttributes				        ftAttributes;
typedef struct ftMesh		                    ftMesh;

#endif
