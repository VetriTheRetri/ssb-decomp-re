#ifndef _GMDEF_H_
#define _GMDEF_H_

#define GMCOMMON_FIGHTERS_PLAYABLE_NUM 12
#define GMCOMMON_PLAYERS_MAX 4              				// Global limit for simultaneous players in a match

#define GMRUMBLE_ARRAY_COLS 3

#define GMCOMMON_PERCENT_DAMAGE_MAX 999

#define GMHITCOLLISION_FLAG_FIGHTER (1 << 0) // Can interact with fighters
#define GMHITCOLLISION_FLAG_WEAPON (1 << 1)	 // Can interact with weapons
#define GMHITCOLLISION_FLAG_ITEM (1 << 2)	 // Can interact with items

#define GMHITCOLLISION_FLAG_ALL (GMHITCOLLISION_FLAG_FIGHTER | GMHITCOLLISION_FLAG_WEAPON | GMHITCOLLISION_FLAG_ITEM)
#define GMHITRECORD_NUM_MAX 4

#define gmColEventAdvance(event, type) ((event) = (void*)((uintptr_t)event + sizeof(type)))

#define gmColEventCast(event, type) ((type*)(event))

// WARNING: Only advances 4 bytes at a time
#define gmColEventCastAdvance(event, type) ((type*)(event)++)

#define gmRumbleEventAdvance(event, type) ((event) = (void*)((uintptr_t)(event) + (sizeof(type))))

#define gmRumbleEventCast(event, type) ((type*)(event))

// WARNING: Only advances 2 bytes at a time
#define gmRumbleEventCastAdvance(event, type) ((type*)(event)++)

// Bleh. Don't know how HAL pulled it off, but ColAnim scripts are baked into
// .data, and with their wildly different structures, it's impossible to
// initialize them into an array of color command datatypes... at least in IDO.
// As such, we must either initialize the commands as raw u32, or pray that the
// compiler does not optimize out the initialized, sequential data as seen below.

// It works :) Thanks!
// (https://www.coranac.com/documents/working-with-bits-and-bitfields/)

// Now watch me make dollar store display list commands like a clown
#define gmColCommandEndS1() GC_FIELDSET(nGMColEventKindEnd, 26, 6)

#define gmColCommandWaitS1(frames) (GC_FIELDSET(nGMColEventKindWait, 26, 6) | GC_FIELDSET(frames, 0, 26))

#define gmColCommandGotoS1() GC_FIELDSET(nGMColEventKindGoto, 26, 6)
#define gmColCommandGotoS2(addr) ((uintptr_t)addr)

#define gmColCommandLoopBeginS1(count) (GC_FIELDSET(nGMColEventKindLoopBegin, 26, 6) | GC_FIELDSET(count, 0, 26))
#define gmColCommandLoopEndS1() GC_FIELDSET(nGMColEventKindLoopEnd, 26, 6)

#define gmColCommandSubroutineS1() GC_FIELDSET(nGMColEventKindSubroutine, 26, 6)
#define gmColCommandSubroutineS2(addr) ((uintptr_t)addr)

#define gmColCommandReturnS1() GC_FIELDSET(nGMColEventKindReturn, 26, 6)

#define gmColCommandParallelS1() GC_FIELDSET(nGMColEventKindSetParallelScript, 26, 6)
#define gmColCommandParallelS2(addr) ((uintptr_t)addr)

#define gmColCommandToggleColorOffS1() GC_FIELDSET(nGMColEventKindToggleColorOff, 26, 6)

#define gmColCommandSetColor1S1() GC_FIELDSET(nGMColEventKindSetColor1, 26, 6)
#define gmColCommandSetColor1S2(r, g, b, a)                                                                          \
	(GC_FIELDSET(r, 24, 8) | GC_FIELDSET(g, 16, 8) | GC_FIELDSET(b, 8, 8) | GC_FIELDSET(a, 0, 8))

#define gmColCommandBlendColor1S1(frames)                                                                            \
	(GC_FIELDSET(nGMColEventKindBlendColor1, 26, 6) | GC_FIELDSET(frames, 0, 26))
#define gmColCommandBlendColor1S2(r, g, b, a)                                                                        \
	(GC_FIELDSET(r, 24, 8) | GC_FIELDSET(g, 16, 8) | GC_FIELDSET(b, 8, 8) | GC_FIELDSET(a, 0, 8))

#define gmColCommandSetColor2S1() GC_FIELDSET(nGMColEventKindSetColor2, 26, 6)
#define gmColCommandSetColor2S2(r, g, b, a)                                                                          \
	(GC_FIELDSET(r, 24, 8) | GC_FIELDSET(g, 16, 8) | GC_FIELDSET(b, 8, 8) | GC_FIELDSET(a, 0, 8))

#define gmColCommandBlendColor2S1(frames)                                                                            \
	(GC_FIELDSET(nGMColEventKindBlendColor1, 26, 6) | GC_FIELDSET(frames, 0, 26))
#define gmColCommandBlendColor2S2(r, g, b, a)                                                                        \
	(GC_FIELDSET(r, 24, 8) | GC_FIELDSET(g, 16, 8) | GC_FIELDSET(b, 8, 8) | GC_FIELDSET(a, 0, 8))

#define gmColCommandEffectS1(joint, effect_id, flag)                                                                    \
	(GC_FIELDSET(nGMColEventKindEffect, 26, 6) | GC_FIELDSET(joint, 19, 7) | GC_FIELDSET(effect_id, 10, 9)             \
	 | GC_FIELDSET(flag, 0, 10))
#define gmColCommandEffectS2(off_x, off_y) (GC_FIELDSET(off_x, 16, 16) | GC_FIELDSET(off_y, 0, 16))
#define gmColCommandEffectS3(off_z, rng_x) (GC_FIELDSET(off_z, 16, 16) | GC_FIELDSET(rng_x, 0, 16))
#define gmColCommandEffectS4(rng_y, rng_z) (GC_FIELDSET(rng_y, 16, 16) | GC_FIELDSET(rng_z, 0, 16))

#define gmColCommandEffectScaleS1(joint, effect_id, flag)                                                               \
	(GC_FIELDSET(nGMColEventKindEffectScaleOffset, 26, 6) | GC_FIELDSET(joint, 19, 7) | GC_FIELDSET(effect_id, 10, 9)  \
	 | GC_FIELDSET(flag, 0, 10))
#define gmColCommandEffectScaleS2(off_x, off_y) (GC_FIELDSET(off_x, 16, 16) | GC_FIELDSET(off_y, 0, 16))
#define gmColCommandEffectScaleS3(off_z, rng_x) (GC_FIELDSET(off_z, 16, 16) | GC_FIELDSET(rng_x, 0, 16))
#define gmColCommandEffectSScale4(rng_y, rng_z) (GC_FIELDSET(rng_y, 16, 16) | GC_FIELDSET(rng_z, 0, 16))

#define gmColCommandSetLightS1(angle1, angle2)                                                                       \
	(GC_FIELDSET(nGMColEventKindSetLight, 26, 6) | GC_FIELDSET(angle1, 13, 13) | GC_FIELDSET(angle2, 0, 13))

#define gmColCommandToggleLightOff() GC_FIELDSET(nGMColEventKindToggleLightOff, 26, 6)

#define gmColCommandPlaySFX(sfx_id) (GC_FIELDSET(nGMColEventKindPlaySFX, 26, 6) | GC_FIELDSET(sfx_id, 0, 26))

#define gmColCommandSetSkeletonID(skeleton_id)                                                                       \
	(GC_FIELDSET(nGMColEventKindSetSkeletonID, 26, 6) | GC_FIELDSET(skeleton_id, 0, 26))

typedef enum scBackupUnlock
{
	nSCBackupUnlockLuigi,	 	// Luigi
	nSCBackupUnlockNess,		// Ness
	nSCBackupUnlockCaptain,	 	// Captain Falcon
	nSCBackupUnlockPurin,	 	// Jigglypuff
	nSCBackupUnlockInishie,	 	// Mushroom Kingdom
	nSCBackupUnlockSoundTest, 	// Sound Test menu
	nSCBackupUnlockItemSwitch, 	// Item Switch menu
	nSCBackupUnlockEnumMax

} scBackupUnlock;

typedef enum scBackupErrors
{
	nSCBackupErrorRandomKnockback,
	nSCBackupErrorHalfStickRange,
	nSCBackupError1PGameMario,
	nSCBackupErrorBattleCastle

} scBackupErrors;

typedef enum gmDirectionSign
{
	nGMFacingL = -1,
	nGMFacingD = -1,
	nGMFacingC = 0,
	nGMFacingR = 1,
	nGMFacingU = 1,
	nGMFacingWallU = 2,    	// Exclusive to Pikachu's Thunder Jolt for riding walls up?
	nGMFacingWallD = 3     	// Exclusive to Pikachu's Thunder Jolt for riding walls down?

} gmDirectionSign;

typedef enum gmHitCollisionStatus
{
	nGMHitStatusNone,		 	// User's hurtboxes are disabled
	nGMHitStatusNormal,	 		// User can be hit
	nGMHitStatusInvincible, 	// User can be hit, but is immune to damage
	nGMHitStatusIntangible	 	// User cannot be hit

} gmHitCollisionStatus;

typedef enum gmHitCollisionElement
{
	nGMHitElementNormal,
	nGMHitElementFire,
	nGMHitElementElectric,
	nGMHitElementSlash,
	nGMHitElementCoin,
	nGMHitElementFreezing,	// This is only speculation. It causes the screen to flash blue if knockback > 160.0
	nGMHitElementSleep,
	nGMHitElementUnk2

} gmHitCollisionElement;

typedef enum gmHitCollisionType 	// Hitbox types, this is universal but I don't
									// know where else to put it so both fighters
									// and items can see it without redefining it
									// for each
{
	nGMHitTypeHurt,
	nGMHitTypeShield,
	nGMHitTypeShieldRehit,
	nGMHitTypeHit,
	nGMHitTypeHurtRehit, 			// Only used for specific articles? e.g.
								   	// Pirahna Plants dealing damage
	nGMHitTypeAbsorb,
	nGMHitTypeReflect

} gmHitCollisionType;

typedef enum gmHitCollisionUpdateState
{
	nGMHitUpdateDisable,	   		// No active hitbox or updates
	nGMHitUpdateNew,		   		// Initialize hitbox positions
	nGMHitUpdateTransfer,   		// Transitions to interpolation mode, that's it
	nGMHitUpdateInterpolate 		// Copies current position to previous

} gmHitCollisionUpdateState;

typedef enum gmHitCollisionSoundEffect
{
	nGMHitSoundPunch,
	nGMHitSoundKick,
	nGMHitSoundCoin,
	nGMHitSoundBurn,
	nGMHitSoundZap,
	nGMHitSoundSlash,
	nGMHitSoundFan,
	nGMHitSoundBat,
	nGMHitSoundEnumMax

} gmHitCollisionSoundEffect;

typedef enum gmHitCollisionSoundLevel
{
	nGMHitLevelWeak,
	nGMHitLevelMedium,
	nGMHitLevelStrong,
	nGMHitLevelEnumMax

} gmHitCollisionSoundLevel;

typedef enum gmHitCollisionEnvironment
{
	nGMHitEnvironmentAcid,
	nGMHitEnvironmentPowerBlock,
	nGMHitEnvironmentTwister,
	nGMHitEnvironmentTaruCann

} gmHitCollisionEnvironment;

typedef enum gmColEventKind
{
	nGMColEventKindEnd,
	nGMColEventKindWait,
	nGMColEventKindGoto,
	nGMColEventKindLoopBegin,
	nGMColEventKindLoopEnd,
	nGMColEventKindSubroutine,
	nGMColEventKindReturn,
	nGMColEventKindSetParallelScript,
	nGMColEventKindToggleColorOff,
	nGMColEventKindSetColor1,
	nGMColEventKindBlendColor1,
	nGMColEventKindSetColor2,
	nGMColEventKindBlendColor2,
	nGMColEventKindEffect,
	nGMColEventKindEffectScaleOffset, // ???
	nGMColEventKindSetLight,
	nGMColEventKindToggleLightOff,
	nGMColEventKindPlaySFX,
	nGMColEventKindSetSkeletonID

} gmColEventKind;

typedef enum gmRumbleEventKind
{
	nGMRumbleEventKindEnd,
	nGMRumbleEventKindStartRumble,
	nGMRumbleEventKindStopRumble,
	nGMRumbleEventKindLoopBegin,
	nGMRumbleEventKindLoopEnd

} gmRumbleEventKind;

typedef struct gmHitCollisionFlags          gmHitCollisionFlags;
typedef struct gmHitRecord                  gmHitRecord;
typedef union  gmStatFlags                  gmStatFlags;
typedef struct gmColScript                  gmColScript;
typedef struct gmColKeys                    gmColKeys;
typedef struct gmColAnim                    gmColAnim;
typedef struct gmColDesc                    gmColDesc;
typedef struct gmColEventDefault            gmColEventDefault;
typedef struct gmColEventGoto1              gmColEventGoto1;
typedef struct gmColEventGoto2              gmColEventGoto2;
typedef struct gmColEventGoto               gmColEventGoto;
typedef struct gmColEventSubroutine1        gmColEventSubroutine1;
typedef struct gmColEventSubroutine2        gmColEventSubroutine2;
typedef struct gmColEventSubroutine         gmColEventSubroutine;
typedef struct gmColEventParallel1          gmColEventParallel1;
typedef struct gmColEventParallel2          gmColEventParallel2;
typedef struct gmColEventParallel           gmColEventParallel;
typedef struct gmColEventSetRGBA1           gmColEventSetRGBA1;
typedef struct gmColEventSetRGBA2           gmColEventSetRGBA2;
typedef struct gmColEventSetRGBA            gmColEventSetRGBA;
typedef struct gmColEventBlendRGBA1         gmColEventBlendRGBA1;
typedef struct gmColEventBlendRGBA2         gmColEventBlendRGBA2;
typedef struct gmColEventBlendRGBA          gmColEventBlendRGBA;
typedef struct gmColEventMakeEffect1        gmColEventMakeEffect1;
typedef struct gmColEventMakeEffect2        gmColEventMakeEffect2;
typedef struct gmColEventMakeEffect3        gmColEventMakeEffect3;
typedef struct gmColEventMakeEffect4        gmColEventMakeEffect4;
typedef struct gmColEventMakeEffect         gmColEventMakeEffect;
typedef struct gmColEventSetLight           gmColEventSetLight;
typedef union  gmColEventAll                gmColEventAll;
typedef struct gmRumbleEventDefault         gmRumbleEventDefault;
typedef struct gmRumbleScript               gmRumbleScript;
typedef struct gmRumbleLink                 gmRumbleLink;
typedef struct gmRumblePlayer               gmRumblePlayer;

#endif
