#ifndef _FTDEF_H_
#define _FTDEF_H_

// Enums
typedef enum ftStatusUpdateFlags
{
    ftStatusUpdate_Hit_Preserve,            // Preserve hitboxes between action states
    ftStatusUpdate_ColAnim_Preserve,        // Preserve color animation between action states
    ftStatusUpdate_Effect_Preserve,         // Preserve GFX between action states
    ftStatusUpdate_FastFall_Preserve,       // Preserve fastfall between action states
    ftStatusUpdate_HitStatus_Preserve,      // Preserve hurtbox collision state between action states
    ftStatusUpdate_ModelPart_Preserve,      // Preserve modified model part display state between action states
    ftStatusUpdate_SlopeContour_Preserve,   // Preserve inverse kinematics mode between action states
    ftStatusUpdate_TexturePart_Preserve,    // Preserve modified texture part display state between action states
    ftStatusUpdate_PlayerTag_Preserve,      // Preserve player indicator wait timer
    ftStatusUpdate_ThrowGObj_Preserve,      // Preserve thrower's GObj pointer between action states; used to tell the game not to check thrower's collateral hitbox on thrown victim?  
    ftStatusUpdate_ShuffleTime_Preserve,    // Preserve model vibration frames from hitlag between action states
    ftStatusUpdate_LoopSFX_Preserve,        // Preserve looping SFX
    ftStatusUpdate_DamagePort_Preserve,     // Preserve damaging player's port ID if grounded?
    ftStatusUpdate_AfterImage_Preserve,     // Preserve sword trail display state
    ftStatusUpdate_Rumble_Preserve          // Preserve rumble

} ftStatusUpdateFlags;

typedef enum ftCommonMotion
{
    nFTCommonMotionNull = -1,
    nFTCommonMotionRebirthDown = 0x1,
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

    nFTCommonStatusMovesetStart,    // Start of uh... I don't know a better name for this.
    nFTCommonStatusEntryNull = nFTCommonStatusMovesetStart,
    nFTCommonStatusRebirthDown,
    nFTCommonStatusRebirthStand,
    nFTCommonStatusRebirthWait,

    nFTCommonStatusActionStart,    // Start of (mostly) actionable (or rather player-influenced) moves
    nFTCommonStatusWait = nFTCommonStatusActionStart,
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

typedef enum ftCameraModes
{
    nFTCameraModeDefault,
    nFTCameraModeRebirth,
    nFTCameraModeDeadUpStar,
    nFTCameraModeEntry,
    nFTCameraModeExplain

} ftCameraModes;

typedef enum ftItemSwingKind
{
    ftItemSwing_Kind_Sword,
    ftItemSwing_Kind_Bat,
    ftItemSwing_Kind_Harisen,
    ftItemSwing_Kind_StarRod,
    ftItemSwing_Kind_EnumMax

} ftItemSwingKind;

typedef enum ftItemSwingType
{
    ftItemSwing_Type_Attack1,
    ftItemSwing_Type_Attack3,
    ftItemSwing_Type_Attack4,
    ftItemSwing_Type_AttackDash,
    ftItemSwing_Type_EnumMax
	
} ftItemSwingType;

typedef enum ftCatchKind
{
    ftCatch_Kind_SpecialNYoshi,             // Yoshi's Egg Lay, also used for Kirby's copy ability version of it
    ftCatch_Kind_SpecialNKirby,             // Kirby's Inhale
    ftCatch_Kind_TaruCann,                  // Barrel Cannon
    ftCatch_Kind_Twister,                   // Tornado
    ftCatch_Kind_CatchCommon,               // Common grab
    ftCatch_Kind_SpecialHiCaptain           // Captain Falcon's Falcon Dive

} ftCatchKind;

typedef enum ftHurtboxPlacement
{
    ftHurtbox_Placement_Low,
    ftHurtbox_Placement_Middle,
    ftHurtbox_Placement_High

} ftHurtboxPlacement;

typedef enum ftPartsJointLabels
{
    ftParts_Joint_TopN,
    ftParts_Joint_TransN,
    ftParts_Joint_XRotN,
    ftParts_Joint_YRotN,
    ftParts_Joint_EnumMax

} ftPartsJointLabels;

typedef enum ftPartsLevelDetail
{
    ftParts_LOD_None,       // Unused?
    ftParts_LOD_HighPoly,   // Hi-poly
    ftParts_LOD_LowPoly     // Lo-poly
        
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

    nFTKindMasterHand,
    nFTKindMetalMario,

    nFTKindPolyStart,
    nFTKindPolyMario = nFTKindPolyStart,
    nFTKindPolyFox,
    nFTKindPolyDonkey,
    nFTKindPolySamus,
    nFTKindPolyLuigi,
    nFTKindPolyLink,
    nFTKindPolyYoshi,
    nFTKindPolyCaptain,
    nFTKindPolyKirby,
    nFTKindPolyPikachu,
    nFTKindPolyPurin,
    nFTKindPolyNess,
    nFTKindPolyEnd = nFTKindPolyNess,

    nFTKindGiantDonkey,
    nFTKindEnumMax,
    nFTKindNull        // NONE

} ftKind;

typedef enum plKind
{
    Pl_Kind_Man,        // Player-controlled
    Pl_Kind_Com,        // CPU-controlled
    Pl_Kind_Not,        // N/A
    Pl_Kind_Demo,       // Results Screen / Auto-Demo?
    Pl_Kind_Key,        // Intro movie?
    Pl_Kind_GameKey     // How to Play?

} plKind;

typedef enum ftComputerCommandKind
{
    ftComputer_Command_ButtonAPress,
    ftComputer_Command_ButtonARelease,
    ftComputer_Command_ButtonBPress,
    ftComputer_Command_ButtonBRelease,
    ftComputer_Command_ButtonZPress,
    ftComputer_Command_ButtonZRelease,
    ftComputer_Command_ButtonLPress,
    ftComputer_Command_ButtonLRelease,
    ftComputer_Command_ButtonStartPress,
    ftComputer_Command_ButtonStartRelease,
    ftComputer_Command_StickX,
    ftComputer_Command_StickY,
    ftComputer_Command_MoveAuto,
    ftComputer_Command_StickXVar,
    ftComputer_Command_StickYVar,
    ftComputer_Command_EnumMax

} ftComputerCommandKind;

typedef enum ftComputerInputKind
{
    ftComputer_Input_StickN,                                                // Reset stick to neutral
    ftComputer_Input_MoveAuto,                                              // Move towards target (all directions)
    ftComputer_Input_StickTiltAutoX,                                        // Move towards target (horizontally)
    ftComputer_Input_StickNMoveAuto,                                        // Reset stick to neutral for one frame, then more towards target (all directions)
    ftComputer_Input_MoveAutoStickTiltHiReleaseZ,                           // Used for many moves that involve slightly tilting the stick?
    ftComputer_Input_StickTiltAutoXButtonA,                                 // Used for Forward Tilt
    ftComputer_Input_StickTiltAutoXD5NButtonA,                              // Move towards target (horiztonally) for a duration of 5 frames then reset stick to neutral and press A
    ftComputer_Input_MoveAutoButtonA,                                       // Move towards target (all directions) and press A
    ftComputer_Input_StickSmashAutoXButtonA,                                // Move towards target's direction and press A (no Stick Y-Axis change)
    ftComputer_Input_StickSmashAutoXButtonB,                                // Use Neutral Special in target's direction
    ftComputer_Input_StickTiltAutoXNYD5SmashAutoXButtonB,                   // Move towards target for a duration of 5 frames then smash stick in target's direction and press B
    ftComputer_Input_StickTiltAutoXNYD1ButtonB,                             // Move towards target for a duration of 1 frame then reset X-Axis to neutral and press B
    ftComputer_Input_ButtonZ1,                                              // Used for ledge roll (and more I suppose)
    ftComputer_Input_StickSmashHiButtonB,                                   // Used for Up Special
    ftCOmputer_Input_StickTiltAutoXD5SmashSButtonB,                         // Move towards target for a duration of 5 frames at half range, then do full range + B button
    ftComputer_Input_StickNButtonL,                                         // Used for taunt
    ftComputer_Input_ButtonZ2,                                              // Why is this here again?
    ftComputer_Input_StickTiltAutoXD5,                                      // Move towards target for a duration of 5 frames then end script 
    ftComputer_Input_StickTiltAutoXD1,                                      // Move towards target for a duration of 1 frame then end script
    ftComputer_Input_StickNButtonA,                                         // Used for Jab and Neutral Aerial
    ftComputer_Input_StickTiltAutoXD5ButtonA,                               // Move towards target for a duration of 5 frames then press A
    ftComputer_Input_StickSmashAutoXNYButtonA,                              // Used for Forward Smash, Forward Aerial and Back Aerial
    ftComputer_Input_StickTiltAutoXD1SmashSButtonA,                         // Move towards target at half stick range for a duration of 1 frame, then do full range + A button and end script
    ftComputer_Input_StickTiltHiButtonA,                                    // Used for Up Tilt
    ftComputer_Input_StickTiltAutoXD5TiltAutoYButtonA,                      // Move towards target for a duration of 5 frames then do tilt attack in their Y direction
    ftComputer_Input_StickSmashHiButtonA,                                   // Used for Up Smash and Up Aerial
    ftComputer_Input_StickTiltAutoXD5SmashAutoYButtonA,                     // Move towards target for a duration of 5 frames then do smash attack in their Y direction
    ftComputer_Input_StickSmashLwButtonB,                                   // Used for Down Special
    ftComputer_Input_StickNButtonZButtonA,                                  // Used for grab
    ftComputer_Input_StickTiltAutoXD5ButtonZButtonA,                        // Move towards target for a duration of 5 frames then use grab
    ftComputer_Input_StickSmashL,                                           // Used for Throws
    ftComputer_Input_StickSmashR,                                           // Used for Throws
    ftComputer_Input_StickTiltLwButtonA,                                    // Used for Down Tilt
    ftComputer_Input_StickTiltAutoXD5TiltLwButtonA,                         // Move towards target for a duration of 5 frames then use Down Tilt
    ftComputer_Input_StickSmashLwButtonA,                                   // Used for Down Smash and Down Aerial
    ftComputer_Input_StickNButtonZHold,                                     // Used to shield
    ftComputer_Input_ButtonZRelease,                                        // Used to let go of shield
    ftComputer_Input_StickNXSmashLwButtonBReleaseBHold,                     // Used to repeatedly tap Down Special, is this Donkey Kong's Hand Slap move?
    ftComputer_Input_StickNButtonBRelease,                                  // Let go of B button
    ftComputer_Input_StickND1MoveAutoSmashLw,                               // Let go of control stick for a duration of 1 frame then do full range down; fast fall?
    ftComputer_Input_StickNButtonBZReleaseAPress,                           // Used for ledge attack?
    ftComputer_Input_StickTiltAutoXButtonBZReleaseAPress,                   // ???
    ftComputer_Input_ThrowItemImmediate,                                    // Throw item after a short wait?
    ftComputer_Input_ThrowItemWait,                                         // Throw item after a long wait?
    ftComputer_Input_Wiggle,                                                // Wiggle out of grab type moves (Cargo Throw, Inhale, Egg Lay)
    ftComputer_Input_EscapeL,                                               // Roll left
    ftComputer_Input_EscapeR,                                               // Roll right
    ftComputer_Input_YoshiSpecialHiAim,                                     // Yoshi Up Special
    ftComputer_Input_NessSpecialHiAim                                       // Ness Up Special

} ftComputerInputKind;

// The CPUs' "personality traits," overriding behavior if present (mostly 1P Game?)
typedef enum ftComputerTraitKind
{
    ftComputer_Trait_Default,           // "? Used in VS and for some 1P Game characters"
    ftComputer_Trait_Link,              // Wait around for a while (1P Game Link)
    ftComputer_Trait_YoshiTeam,         // Yoshi Team
    ftComputer_Trait_KirbyTeam,         // Kirby (Is this specifically 1P Game Kirby Team?)
    ftComputer_Trait_PolyTeam,          // Fighting Polygon Team (1P Game)
    ftComputer_Trait_MarioBros,         // Mario & Luigi (1P Game)
    ftComputer_Trait_GiantDonkey,       // Giant Donkey Kong (1P Game)
    ftComputer_Trait_Unk1,              // Unknown
    ftComputer_Trait_Bonus3,            // Race to the Finish Fighting Polygons
    ftComputer_Trait_Ally,              // Ally fighter in 1P Game
    ftComputer_Trait_None               // No overriding behavior (Training Mode)

} ftComputerTraitKind;

typedef enum ftComputerBehaviorKind
{
    ftComputer_Behavior_Default,
    ftComputer_Behavior_Unk1,
    ftComputer_Behavior_Unk2,
    ftComputer_Behavior_Ally,
    ftComputer_Behavior_Captain,
    ftComputer_Behavior_Unk3,
    ftComputer_Behavior_Unk4,
    ftComputer_Behavior_YoshiTeam,
    ftComputer_Behavior_KirbyTeam,
    ftComputer_Behavior_PolyTeam,
    ftComputer_Behavior_Unused1,
    ftComputer_Behavior_Unused2,
    ftComputer_Behavior_Unused3,
    ftComputer_Behavior_Bonus3,
    ftComputer_Behavior_Unused4,
    ftComputer_Behavior_Stand,
    ftComputer_Behavior_Walk,
    ftComputer_Behavior_Evade,
    ftComputer_Behavior_Jump,
    ftComputer_Behavior_Unk5

} ftComputerBehaviorKind;

typedef enum ftComputerObjectiveKind
{
    ftComputer_Objective_Stand,         // CPU player will idle (?)
    ftComputer_Objective_Walk,          // CPU player will walk around (?)
    ftComputer_Objective_Attack,        // CPU player will try to attack its target position
    ftComputer_Objective_Evade,         // CPU player will try to avoid contact with its target
    ftComputer_Objective_Recover,       // CPU player will try to recover when offstage
    ftComputer_Objective_TrackItem,     // CPU player will try to navigate to its target item and pick it up
    ftComputer_Objective_UseItem,       // CPU player will try to use shootable, throwable or ground (?) item
    ftComputer_Objective_CounterAttack, // CPU player will try to act just before landing from DamageFall? According to Smash Remix, this causes them to spam shield?
    ftComputer_Objective_Unknown1,      // ???
    ftComputer_Objective_Ally,          // ???
    ftComputer_Objective_Patrol,        // CPU player will walk around and attack opposing bystanders (not ally behavior, used in Kirby Team)
    ftComputer_Objective_Rush           // CPU player will try to relentlessly target opponents (Race to the Finish)

} ftComputerObjectiveKind;

typedef enum ftExplainCommandKind
{
    ftExplain_Command_End,
    ftExplain_Command_Button,
    ftExplain_Command_Stick

} ftExplainCommandKind;

// Structs
typedef struct ftStruct					ftStruct;
typedef struct ftSpecialHit				ftSpecialHit;
typedef struct ftItemPickup				ftItemPickup;
typedef struct ftThrownStatus			ftThrownStatus;
typedef struct ftThrownStatusArray		ftThrownStatusArray;
typedef struct ftDataUnkContainer3		ftDataUnkContainer3;
typedef struct ftScriptInfo				ftScriptInfo;
typedef struct ftScriptInfoArray		ftScriptInfoArray;
typedef struct ftData					ftData;
typedef struct ftModelPart				ftModelPart;
typedef struct ftModelPartDesc			ftModelPartDesc;
typedef struct ftModelPartContainer		ftModelPartContainer;
typedef struct ftModelPartRenderState	ftModelPartRenderState;
typedef struct ftTexturePartInfo		ftTexturePartInfo;
typedef struct ftTexturePartContainer	ftTexturePartContainer;
typedef struct ftTexturePartRenderState ftTexturePartRenderState;
typedef union  ftAnimFlags				ftAnimFlags;
typedef struct ftMotionFlags		    ftMotionFlags;
typedef struct ftStatusDesc				ftStatusDesc;
typedef struct ftIntroStatusDesc		ftIntroStatusDesc;
typedef struct ftThrowHitDesc			ftThrowHitDesc;
typedef struct ftThrowReleaseDesc		ftThrowReleaseDesc;
typedef struct ftCreateDesc				ftCreateDesc;
typedef struct ftHitMatrix              ftHitMatrix;
typedef struct ftHitbox					ftHitbox;
typedef struct ftHurtboxDesc			ftHurtboxDesc;
typedef struct ftHurtbox				ftHurtbox;
typedef struct ftHitCollisionLog		ftHitCollisionLog;
typedef struct ftItemThrow				ftItemThrow;
typedef struct ftItemSwing				ftItemSwing;
typedef struct ftParts                  ftParts;
typedef struct ftPartIndex				ftPartIndex;
typedef struct ftPartsUnkIndexTable		ftPartsUnkIndexTable;
typedef struct ftShadow                 ftShadow;
typedef struct ftCostumeIndex           ftCostumeIndex;
typedef struct ftSkeleton               ftSkeleton;
typedef struct ftAfterImage				ftAfterImage;
typedef struct ftCamera                 ftCamera;
typedef struct ftSprites                ftSprites;
typedef struct ftComputer				ftComputer;
typedef struct ftPlayerInput            ftPlayerInput;
typedef struct ftComputerInput          ftComputerInput;
typedef struct ftComputerAttack         ftComputerAttack;
typedef union  ftExplainCommand         ftExplainCommand;
typedef struct ftExplainInput           ftExplainInput;
typedef struct ftAttributes				ftAttributes;
typedef struct ftMesh		            ftMesh;

#endif
