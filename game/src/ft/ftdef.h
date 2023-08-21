#ifndef _FTDEF_H_
#define _FTDEF_H_

// Enums
typedef enum ftStatusUpdateFlags
{
    ftStatusUpdate_Hit_Preserve,            // Preserve hitboxes between action states
    ftStatusUpdate_ColAnim_Preserve,        // Preserve color animation between action states
    ftStatusUpdate_GFX_Preserve,            // Preserve GFX between action states
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

typedef enum ftCommonAction
{
    ftStatus_Common_DeadDown,
    ftStatus_Common_DeadLeftRight,
    ftStatus_Common_DeadUpStar,
    ftStatus_Common_DeadUpFall,
    ftStatus_Common_Sleep,
    ftStatus_Common_Entry,
    ftStatus_Common_EntryNull,
    ftStatus_Common_RebirthDown,
    ftStatus_Common_RebirthStand,
    ftStatus_Common_RebirthWait,
    ftStatus_Common_Wait,
    ftStatus_Common_WalkSlow,
    ftStatus_Common_WalkMiddle,
    ftStatus_Common_WalkFast,
    ftStatus_Common_WalkEnd,
    ftStatus_Common_Dash,
    ftStatus_Common_Run,
    ftStatus_Common_RunBrake,
    ftStatus_Common_Turn,
    ftStatus_Common_TurnRun,
    ftStatus_Common_KneeBend,
    ftStatus_Common_GuardKneeBend,
    ftStatus_Common_JumpF,
    ftStatus_Common_JumpB,
    ftStatus_Common_JumpAerialF,
    ftStatus_Common_JumpAerialB,
    ftStatus_Common_Fall,
    ftStatus_Common_FallAerial,
    ftStatus_Common_Squat,
    ftStatus_Common_SquatWait,
    ftStatus_Common_SquatRv,
    ftStatus_Common_LandingLight,
    ftStatus_Common_LandingHeavy,
    ftStatus_Common_Pass,
    ftStatus_Common_GuardPass,
    ftStatus_Common_OttottoWait,
    ftStatus_Common_Ottotto,
    ftStatus_Common_DamageHi1,
    ftStatus_Common_DamageHi2,
    ftStatus_Common_DamageHi3,
    ftStatus_Common_DamageN1,
    ftStatus_Common_DamageN2,
    ftStatus_Common_DamageN3,
    ftStatus_Common_DamageLw1,
    ftStatus_Common_DamageLw2,
    ftStatus_Common_DamageLw3,
    ftStatus_Common_DamageAir1,
    ftStatus_Common_DamageAir2,
    ftStatus_Common_DamageAir3,
    ftStatus_Common_DamageElec1,
    ftStatus_Common_DamageElec2,
    ftStatus_Common_DamageFlyHi,
    ftStatus_Common_DamageFlyN,
    ftStatus_Common_DamageFlyLw,
    ftStatus_Common_DamageFlyTop,
    ftStatus_Common_DamageFlyRoll,
    ftStatus_Common_WallDamage,
    ftStatus_Common_DamageFall,
    ftStatus_Common_FallSpecial,
    ftStatus_Common_LandingFallSpecial,
    ftStatus_Common_Twister,
    ftStatus_Common_TaruCann, // DK Barrel
    ftStatus_Common_DokanStart, // Enter pipe
    ftStatus_Common_DokanWait, // In pipe
    ftStatus_Common_DokanEnd, // Exit pipe
    ftStatus_Common_DokanEndWalk, // Exit horizontal pipe
    ftStatus_Common_StopCeil, // Bump head into ceiling
    ftStatus_Common_DownBounceD,
    ftStatus_Common_DownBounceU,
    ftStatus_Common_DownWaitD,
    ftStatus_Common_DownWaitU,
    ftStatus_Common_DownStandD,
    ftStatus_Common_DownStandU,
    ftStatus_Common_PassiveStandF,
    ftStatus_Common_PassiveStandB,
    ftStatus_Common_DownForwardD,
    ftStatus_Common_DownForwardU,
    ftStatus_Common_DownBackD,
    ftStatus_Common_DownBackU,
    ftStatus_Common_DownAttackD,
    ftStatus_Common_DownAttackU,
    ftStatus_Common_Passive,
    ftStatus_Common_ReboundWait,
    ftStatus_Common_Rebound,
    ftStatus_Common_CliffCatch,
    ftStatus_Common_CliffWait,
    ftStatus_Common_CliffQuick,
    ftStatus_Common_CliffClimbQuick1,
    ftStatus_Common_CliffClimbQuick2,
    ftStatus_Common_CliffSlow,
    ftStatus_Common_CliffClimbSlow1,
    ftStatus_Common_CliffClimbSlow2,
    ftStatus_Common_CliffAttackQuick1,
    ftStatus_Common_CliffAttackQuick2,
    ftStatus_Common_CliffAttackSlow1,
    ftStatus_Common_CliffAttackSlow2,
    ftStatus_Common_CliffEscapeQuick1,
    ftStatus_Common_CliffEscapeQuick2,
    ftStatus_Common_CliffEscapeSlow1,
    ftStatus_Common_CliffEscapeSlow2,
    ftStatus_Common_LightGet,
    ftStatus_Common_HeavyGet,
    ftStatus_Common_LiftWait,
    ftStatus_Common_LiftTurn,
    ftStatus_Common_LightThrowDrop,
    ftStatus_Common_LightThrowDash,
    ftStatus_Common_LightThrowF,
    ftStatus_Common_LightThrowB,
    ftStatus_Common_LightThrowHi,
    ftStatus_Common_LightThrowLw,
    ftStatus_Common_LightThrowF4,
    ftStatus_Common_LightThrowB4,
    ftStatus_Common_LightThrowHi4,
    ftStatus_Common_LightThrowLw4,
    ftStatus_Common_LightThrowAirF,
    ftStatus_Common_LightThrowAirB,
    ftStatus_Common_LightThrowAirHi,
    ftStatus_Common_LightThrowAirLw,
    ftStatus_Common_LightThrowAirF4,
    ftStatus_Common_LightThrowAirB4,
    ftStatus_Common_LightThrowAirHi4,
    ftStatus_Common_LightThrowAirLw4,
    ftStatus_Common_HeavyThrowF,
    ftStatus_Common_HeavyThrowB,
    ftStatus_Common_HeavyThrowF4,
    ftStatus_Common_HeavyThrowB4,
    ftStatus_Common_SwordSwing1,
    ftStatus_Common_SwordSwing3,
    ftStatus_Common_SwordSwing4,
    ftStatus_Common_SwordSwingDash,
    ftStatus_Common_BatSwing1,
    ftStatus_Common_BatSwing3,
    ftStatus_Common_BatSwing4,
    ftStatus_Common_BatSwingDash,
    ftStatus_Common_HarisenSwing1,
    ftStatus_Common_HarisenSwing3,
    ftStatus_Common_HarisenSwing4,
    ftStatus_Common_HarisenSwingDash,
    ftStatus_Common_StarRodSwing1,
    ftStatus_Common_StarRodSwing3,
    ftStatus_Common_StarRodSwing4,
    ftStatus_Common_StarRodSwingDash,
    ftStatus_Common_LGunShoot,
    ftStatus_Common_LGunShootAir,
    ftStatus_Common_FireFlowerShoot,
    ftStatus_Common_FireFlowerShootAir,
    ftStatus_Common_HammerWait,
    ftStatus_Common_HammerWalk,
    ftStatus_Common_HammerTurn,
    ftStatus_Common_HammerKneeBend,
    ftStatus_Common_HammerFall, // Pretty much any aerial Hammer state
    ftStatus_Common_HammerLanding,
    ftStatus_Common_GuardOn,
    ftStatus_Common_Guard,
    ftStatus_Common_GuardOff,
    ftStatus_Common_GuardSetOff,
    ftStatus_Common_EscapeF,
    ftStatus_Common_EscapeB,
    ftStatus_Common_ShieldBreakFly,
    ftStatus_Common_ShieldBreakFall,
    ftStatus_Common_ShieldBreakDownD,
    ftStatus_Common_ShieldBreakDownU,
    ftStatus_Common_ShieldBreakStandD,
    ftStatus_Common_ShieldBreakStandU,
    ftStatus_Common_FuraFura,
    ftStatus_Common_FuraSleep,
    ftStatus_Common_Catch,
    ftStatus_Common_CatchPull,
    ftStatus_Common_CatchWait,
    ftStatus_Common_ThrowF,
    ftStatus_Common_ThrowB,
    ftStatus_Common_CapturePulled,
    ftStatus_Common_CaptureWait,
    ftStatus_Common_CaptureKirby,
    ftStatus_Common_CaptureWaitKirby,
    ftStatus_Common_ThrownKirbyStar,
    ftStatus_Common_ThrownCopyStar,
    ftStatus_Common_CaptureYoshi,
    ftStatus_Common_YoshiEgg,
    ftStatus_Common_CaptureCaptain,
    ftStatus_Common_ThrownDonkeyUnk, // Related to DK throws?
    ftStatus_Common_ThrownDonkeyF,
    ftStatus_Common_ThrownMarioB,
    ftStatus_Common_ThrownFoxF,
    ftStatus_Common_Shouldered,
    ftStatus_Common_ThrownF,
    ftStatus_Common_ThrownB,
    ftStatus_Common_ThrownUnk,
    ftStatus_Common_ThrownFoxB,
    ftStatus_Common_Appeal,
    ftStatus_Common_Attack11,
    ftStatus_Common_Attack12,
    ftStatus_Common_AttackDash,
    ftStatus_Common_AttackS3Hi,
    ftStatus_Common_AttackS3HiS,
    ftStatus_Common_AttackS3,
    ftStatus_Common_AttackS3LwS,
    ftStatus_Common_AttackS3Lw,
    ftStatus_Common_AttackHi3F, // Forward-angled up tilt???
    ftStatus_Common_AttackHi3,
    ftStatus_Common_AttackHi3B, // Backward-angled up tilt???
    ftStatus_Common_AttackLw3,
    ftStatus_Common_AttackS4Hi,
    ftStatus_Common_AttackS4HiS,
    ftStatus_Common_AttackS4,
    ftStatus_Common_AttackS4LwS,
    ftStatus_Common_AttackS4Lw,
    ftStatus_Common_AttackHi4,
    ftStatus_Common_AttackLw4,
    ftStatus_Common_AttackAirN,
    ftStatus_Common_AttackAirF,
    ftStatus_Common_AttackAirB,
    ftStatus_Common_AttackAirHi,
    ftStatus_Common_AttackAirLw,
    ftStatus_Common_LandingAirN,
    ftStatus_Common_LandingAirF,
    ftStatus_Common_LandingAirB,
    ftStatus_Common_LandingAirHi,
    ftStatus_Common_LandingAirLw,
    ftStatus_Common_LandingAirNull,
    ftStatus_Common_SpecialStart // Start of special move table

} ftCommonAction;

typedef enum ftMotionAttackIndex
{
    ftMotion_AttackIndex_None,
    ftMotion_AttackIndex_Attack11,
    ftMotion_AttackIndex_Attack12,
    ftMotion_AttackIndex_Attack13,
    ftMotion_AttackIndex_Attack100Loop,
    ftMotion_AttackIndex_AttackDash,
    ftMotion_AttackIndex_AttackS3,
    ftMotion_AttackIndex_AttackHi3,
    ftMotion_AttackIndex_AttackLw3,
    ftMotion_AttackIndex_AttackS4,
    ftMotion_AttackIndex_AttackHi4,
    ftMotion_AttackIndex_AttackLw4,
    ftMotion_AttackIndex_AttackAirN,
    ftMotion_AttackIndex_AttackAirF,
    ftMotion_AttackIndex_AttackAirB,
    ftMotion_AttackIndex_AttackAirHi,
    ftMotion_AttackIndex_AttackAirLw,
    ftMotion_AttackIndex_SpecialHi,
    ftMotion_AttackIndex_SpecialN,
    ftMotion_AttackIndex_SpecialNCopyMario,
    ftMotion_AttackIndex_SpecialNCopyLuigi,
    ftMotion_AttackIndex_SpecialNCopyFox,
    ftMotion_AttackIndex_SpecialNCopySamus,
    ftMotion_AttackIndex_SpecialNCopyDonkey,
    ftMotion_AttackIndex_SpecialNCopyPikachu,
    ftMotion_AttackIndex_SpecialNCopyNess,
    ftMotion_AttackIndex_SpecialNCopyLink,
    ftMotion_AttackIndex_SpecialNCopyPurin,
    ftMotion_AttackIndex_SpecialNCopyCaptain,
    ftMotion_AttackIndex_SpecialNCopyYoshi,
    ftMotion_AttackIndex_SpecialLw,
    ftMotion_AttackIndex_DownAttackD,
    ftMotion_AttackIndex_DownAttackU,
    ftMotion_AttackIndex_CliffAttackQuick,
    ftMotion_AttackIndex_CliffAttackSlow,
    ftMotion_AttackIndex_ThrowF,
    ftMotion_AttackIndex_ThrowB,
    ftMotion_AttackIndex_SwordSwing1,
    ftMotion_AttackIndex_SwordSwing3,
    ftMotion_AttackIndex_SwordSwing4,
    ftMotion_AttackIndex_SwordSwingDash,
    ftMotion_AttackIndex_BatSwing1,
    ftMotion_AttackIndex_BatSwing3,
    ftMotion_AttackIndex_BatSwing4,
    ftMotion_AttackIndex_BatSwingDash,
    ftMotion_AttackIndex_HarisenSwing1,
    ftMotion_AttackIndex_HarisenSwing3,
    ftMotion_AttackIndex_HarisenSwing4,
    ftMotion_AttackIndex_HarisenSwingDash,
    ftMotion_AttackIndex_StarRodSwing1,
    ftMotion_AttackIndex_StarRodSwing3,
    ftMotion_AttackIndex_StarRodSwing4,
    ftMotion_AttackIndex_StarRodSwingDash,
    ftMotion_AttackIndex_LGunShoot,
    ftMotion_AttackIndex_FireFlowerShoot,
    ftMotion_AttackIndex_Hammer,
    ftMotion_AttackIndex_ItemThrow,
    ftMotion_AttackIndex_Null

} ftMotionAttackIndex;

typedef enum ftStatusAttackIndex
{
    ftStatus_AttackIndex_None,
    ftStatus_AttackIndex_Attack11,
    ftStatus_AttackIndex_AttackDash,
    ftStatus_AttackIndex_AttackS3,
    ftStatus_AttackIndex_AttackHi3,
    ftStatus_AttackIndex_AttackLw3,
    ftStatus_AttackIndex_AttackS4,
    ftStatus_AttackIndex_AttackHi4,
    ftStatus_AttackIndex_AttackLw4,
    ftStatus_AttackIndex_AttackAirN,
    ftStatus_AttackIndex_AttackAirF,
    ftStatus_AttackIndex_AttackAirB,
    ftStatus_AttackIndex_AttackAirHi,
    ftStatus_AttackIndex_AttackAirLw,
    ftStatus_AttackIndex_Attack12,
    ftStatus_AttackIndex_Attack13,
    ftStatus_AttackIndex_Attack100Loop,
    ftStatus_AttackIndex_SpecialHi,
    ftStatus_AttackIndex_SpecialN,
    ftStatus_AttackIndex_SpecialNCopyMario,
    ftStatus_AttackIndex_SpecialNCopyLuigi,
    ftStatus_AttackIndex_SpecialNCopyFox,
    ftStatus_AttackIndex_SpecialNCopySamus,
    ftStatus_AttackIndex_SpecialNCopyDonkey,
    ftStatus_AttackIndex_SpecialNCopyPikachu,
    ftStatus_AttackIndex_SpecialNCopyNess,
    ftStatus_AttackIndex_SpecialNCopyLink,
    ftStatus_AttackIndex_SpecialNCopyPurin,
    ftStatus_AttackIndex_SpecialNCopyCaptain,
    ftStatus_AttackIndex_SpecialNCopyYoshi,
    ftStatus_AttackIndex_SpecialLw,
    ftStatus_AttackIndex_DownAttackD,
    ftStatus_AttackIndex_DownAttackU,
    ftStatus_AttackIndex_CliffAttackQuick,
    ftStatus_AttackIndex_CliffAttackSlow,
    ftStatus_AttackIndex_ThrowF,
    ftStatus_AttackIndex_ThrowB,
    ftStatus_AttackIndex_SwordSwing1,
    ftStatus_AttackIndex_SwordSwing3,
    ftStatus_AttackIndex_SwordSwing4,
    ftStatus_AttackIndex_SwordSwingDash,
    ftStatus_AttackIndex_BatSwing1,
    ftStatus_AttackIndex_BatSwing3,
    ftStatus_AttackIndex_BatSwing4,
    ftStatus_AttackIndex_BatSwingDash,
    ftStatus_AttackIndex_HarisenSwing1,
    ftStatus_AttackIndex_HarisenSwing3,
    ftStatus_AttackIndex_HarisenSwing4,
    ftStatus_AttackIndex_HarisenSwingDash,
    ftStatus_AttackIndex_StarRodSwing1,
    ftStatus_AttackIndex_StarRodSwing3,
    ftStatus_AttackIndex_StarRodSwing4,
    ftStatus_AttackIndex_StarRodSwingDash,
    ftStatus_AttackIndex_LGunShoot,
    ftStatus_AttackIndex_FireFlowerShoot,
    ftStatus_AttackIndex_Hammer,
    ftStatus_AttackIndex_ItemThrow,
    ftStatus_AttackIndex_Null

} ftStatusAttackIndex;

typedef enum ftCatchKind
{
    ftCatch_Kind_SpecialNYoshi,             // Yoshi's Egg Lay, also used for Kirby's copy ability version of it
    ftCatch_Kind_SpecialNKirby,             // Kirby's Inhale
    ftCatch_Kind_TaruCann,                  // Barrel Cannon
    ftCatch_Kind_Twister,                   // Tornado
    ftCatch_Kind_CatchCommon,               // Common grab
    ftCatch_Kind_SpecialHiCaptain           // Captain Falcon's Falcon Dive

} ftCatchKind;

typedef enum ftPartsJointLabels
{
    ftParts_Joint_TopN,
    ftParts_Joint_TransN,
    ftParts_Joint_XRotN,
    ftParts_Joint_YRotN,
    ftParts_Joint_EnumMax

} ftPartsJointLabels;

typedef enum ftKind
{
    Ft_Kind_Mario,
    Ft_Kind_Fox,
    Ft_Kind_Donkey,
    Ft_Kind_Samus,
    Ft_Kind_Luigi,
    Ft_Kind_Link,
    Ft_Kind_Yoshi,
    Ft_Kind_Captain,
    Ft_Kind_Kirby,
    Ft_Kind_Pikachu,
    Ft_Kind_Purin,
    Ft_Kind_Ness,
    Ft_Kind_MasterHand,
    Ft_Kind_MetalMario,
    Ft_Kind_PolyMario,
    Ft_Kind_PolyFox,
    Ft_Kind_PolyDonkey,
    Ft_Kind_PolySamus,
    Ft_Kind_PolyLuigi,
    Ft_Kind_PolyLink,
    Ft_Kind_PolyYoshi,
    Ft_Kind_PolyCaptain,
    Ft_Kind_PolyKirby,
    Ft_Kind_PolyPikachu,
    Ft_Kind_PolyPurin,
    Ft_Kind_PolyNess,
    Ft_Kind_GiantDonkey,
    Ft_Kind_EnumMax

} ftKind;

typedef enum plKind
{
    Pl_Kind_Human,
    Pl_Kind_CPU,
    Pl_Kind_Unk1,
    Pl_Kind_Result,
    Pl_Kind_Intro,
    Pl_Kind_HowToPlay

} plKind;

typedef enum ftComputerInput
{
    ftComputer_Input_ButtonAPress,
    ftComputer_Input_ButtonARelease,
    ftComputer_Input_ButtonBPress,
    ftComputer_Input_ButtonBRelease,
    ftComputer_Input_ButtonZPress,
    ftComputer_Input_ButtonZRelease,
    ftComputer_Input_ButtonLPress,
    ftComputer_Input_ButtonLRelease,
    ftComputer_Input_ButtonStartPress,
    ftComputer_Input_ButtonStartRelease,
    ftComputer_Input_StickXTilt,
    ftComputer_Input_StickYTilt,
    ftComputer_Input_FoxSpecialHi,
    ftComputer_Input_StickXVar,
    ftComputer_Input_StickYVar,
    ftComputer_Input_EnumMax

} ftComputerInput;

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
typedef struct ftAnimFlags				ftAnimFlags;
typedef struct ftStatusDescFlags		ftStatusDescFlags;
typedef struct ftStatusDesc				ftStatusDesc;
typedef struct ftIntroStatusDesc		ftIntroStatusDesc;
typedef struct ftThrowHitDesc			ftThrowHitDesc;
typedef struct ftThrowReleaseDesc		ftThrowReleaseDesc;
typedef struct ftSpawnInfo				ftSpawnInfo;
typedef struct ftHitbox					ftHitbox;
typedef struct ftHurtboxDesc			ftHurtboxDesc;
typedef struct ftHurtbox				ftHurtbox;
typedef struct ftHitCollisionLog		ftHitCollisionLog;
typedef struct ftItemThrow				ftItemThrow;
typedef struct ftItemSwing				ftItemSwing;
typedef struct ftPartIndex				ftPartIndex;
typedef struct ftPartsUnkIndexTable		ftPartsUnkIndexTable;
typedef struct ftAfterImage				ftAfterImage;
typedef struct ftCamera                 ftCamera;
typedef struct ftComputer				ftComputer;
typedef struct ftAttributes				ftAttributes;
typedef struct UnkFighterDObjData		UnkFighterDObjData;

#endif