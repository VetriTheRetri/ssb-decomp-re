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

#define GMSTAFFROLL_COLON_PARA_FONT_INDEX              0x34
#define GMSTAFFROLL_PERIOD_PARA_FONT_INDEX             0x3F
#define GMSTAFFROLL_DASH_PARA_FONT_INDEX               0x40
#define GMSTAFFROLL_COMMA_PARA_FONT_INDEX              0x41
#define GMSTAFFROLL_AMPERSAND_PARA_FONT_INDEX          0x42
#define GMSTAFFROLL_DOUBLE_QUOTES_PARA_FONT_INDEX      0x43
#define GMSTAFFROLL_SLASH_PARA_FONT_INDEX              0x44
#define GMSTAFFROLL_APOSTROPHE_PARA_FONT_INDEX         0x45
#define GMSTAFFROLL_QUESTION_MARK_PARA_FONT_INDEX      0x46
#define GMSTAFFROLL_OPEN_PARENTHESIS_PARA_FONT_INDEX   0x47
#define GMSTAFFROLL_CLOSE_PARENTHESIS_PARA_FONT_INDEX  0x48
#define GMSTAFFROLL_E_ACCENT_PARA_FONT_INDEX           0x49

// Both title and paragraph fonts use same indices for letters (A-Za-z)
#define GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX(c) ((c) > 'Z' ? ((c) - 0x47) : ((c) - 0x41))

// Only paragraph font has all ASCII numbers. Title font has only number 4 at 0x37
#define GMSTAFFROLL_ASCII_NUMBER_TO_PARA_FONT_INDEX(c) (0x35 + ('9' - (c)))

#define GMColEventAdvance(event, type) ((event) = (void*)((uintptr_t)event + sizeof(type)))

#define GMColEventCast(event, type) ((type*)(event))

// WARNING: Only advances 4 bytes at a time
#define GMColEventCastAdvance(event, type) ((type*)(event)++)

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

typedef enum GMHitStatus
{
	nGMHitStatusNone,		 	// User's hurtboxes are disabled
	nGMHitStatusNormal,	 		// User can be hit
	nGMHitStatusInvincible, 	// User can be hit, but is immune to damage
	nGMHitStatusIntangible	 	// User cannot be hit

} GMHitStatus;

typedef enum GMHitElement
{
	nGMHitElementNormal,
	nGMHitElementFire,
	nGMHitElementElectric,
	nGMHitElementSlash,
	nGMHitElementCoin,
	nGMHitElementFreezing,	// This is only speculation. It causes the screen to flash blue if knockback > 160.0
	nGMHitElementSleep,
	nGMHitElementUnk2

} GMHitElement;

typedef enum GMHitType 				// Hitbox types, this is universal but I don't
									// know where else to put it so both fighters
									// and items can see it without redefining it
									// for each
{
	nGMHitTypeDamage,
	nGMHitTypeShield,
	nGMHitTypeShieldRehit,
	nGMHitTypeAttack,
	nGMHitTypeDamageRehit, 			// Only used for specific articles? e.g.
								   	// Pirahna Plants dealing damage
	nGMHitTypeAbsorb,
	nGMHitTypeReflect

} GMHitType;

typedef enum GMAttackState
{
	nGMAttackStateOff,	   			// No active hitbox or updates
	nGMAttackStateNew,		   		// Initialize hitbox positions
	nGMAttackStateTransfer,   		// Transitions to interpolation mode, that's it
	nGMAttackStateInterpolate 		// Copies current position to previous

} GMAttackState;

typedef enum GMAttackSound
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

} GMAttackSound;

typedef enum GMAttackLevel
{
	nGMHitLevelWeak,
	nGMHitLevelMedium,
	nGMHitLevelStrong,
	nGMHitLevelEnumMax

} GMAttackLevel;

typedef enum GMHitEnvironment
{
	nGMHitEnvironmentAcid,
	nGMHitEnvironmentPowerBlock,
	nGMHitEnvironmentTwister,
	nGMHitEnvironmentTaruCann

} GMHitEnvironment;

typedef enum GMColEventKind
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

} GMColEventKind;

typedef enum GMRumbleEventKind
{
	nGMRumbleEventKindEnd,
	nGMRumbleEventKindStartRumble,
	nGMRumbleEventKindStopRumble,
	nGMRumbleEventKindLoopBegin,
	nGMRumbleEventKindLoopEnd

} GMRumbleEventKind;

typedef enum GMStaffrollCompany
{
	nGMStaffrollCompanyNull = -1,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyCreatures,
	nGMStaffrollCompanyGAMEFREAK,
	nGMStaffrollCompanyRare,
	nGMStaffrollCompanyMickeys,
	nGMStaffrollCompanyKENProd,
	nGMStaffrollCompanyAONIProd,
	nGMStaffrollCompanyARTSVISION,
	nGMStaffrollCompanyEZAKIProd,
	nGMStaffrollCompanyNOA

} GMStaffrollCompany;

typedef struct GMHitFlags          			GMHitFlags;
typedef struct GMHitRecord                  GMHitRecord;
typedef union  GMStatFlags                  GMStatFlags;
typedef struct GMColScript                  GMColScript;
typedef struct GMColKeys                    GMColKeys;
typedef struct GMColAnim                    GMColAnim;
typedef struct GMColDesc                    GMColDesc;
typedef struct GMColEventDefault            GMColEventDefault;
typedef struct GMColEventGoto1              GMColEventGoto1;
typedef struct GMColEventGoto2              GMColEventGoto2;
typedef struct GMColEventGoto               GMColEventGoto;
typedef struct GMColEventSubroutine1        GMColEventSubroutine1;
typedef struct GMColEventSubroutine2        GMColEventSubroutine2;
typedef struct GMColEventSubroutine         GMColEventSubroutine;
typedef struct GMColEventParallel1          GMColEventParallel1;
typedef struct GMColEventParallel2          GMColEventParallel2;
typedef struct GMColEventParallel           GMColEventParallel;
typedef struct GMColEventSetRGBA1           GMColEventSetRGBA1;
typedef struct GMColEventSetRGBA2           GMColEventSetRGBA2;
typedef struct GMColEventSetRGBA            GMColEventSetRGBA;
typedef struct GMColEventBlendRGBA1         GMColEventBlendRGBA1;
typedef struct GMColEventBlendRGBA2         GMColEventBlendRGBA2;
typedef struct GMColEventBlendRGBA          GMColEventBlendRGBA;
typedef struct GMColEventMakeEffect1        GMColEventMakeEffect1;
typedef struct GMColEventMakeEffect2        GMColEventMakeEffect2;
typedef struct GMColEventMakeEffect3        GMColEventMakeEffect3;
typedef struct GMColEventMakeEffect4        GMColEventMakeEffect4;
typedef struct GMColEventMakeEffect         GMColEventMakeEffect;
typedef struct GMColEventSetLight           GMColEventSetLight;
typedef union  GMColEventAll                GMColEventAll;
typedef struct GMRumbleEventDefault         GMRumbleEventDefault;
typedef struct GMRumbleScript               GMRumbleScript;
typedef struct GMRumbleLink                 GMRumbleLink;
typedef struct GMRumblePlayer               GMRumblePlayer;
typedef struct GMStaffrollMatrix			GMStaffrollMatrix;
typedef struct GMStaffrollText				GMStaffrollText;
typedef struct GMStaffrollSprite			GMStaffrollSprite;
typedef struct GMStaffrollStaff				GMStaffrollStaff;
typedef struct GMStaffrollName				GMStaffrollName;
typedef struct GMStaffrollJob				GMStaffrollJob;
typedef struct GMStaffrollSetup				GMStaffrollSetup;
typedef struct GMStaffrollProjection		GMStaffrollProjection;

#endif
