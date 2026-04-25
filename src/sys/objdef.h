#ifndef _OBJDEF_H_
#define _OBJDEF_H_

#include <macros.h> // GC_FIELDSET

typedef enum GObjKind
{
    nGCCommonKindFighter = 1000,            // 1000
    nGCCommonKindFighterParts,              // 1001
    nGCCommonKindMainCamera = 1002,         // 1002
    nGCCommonKindWallpaperCamera,           // 1003 - Used to render stage backgrounds?
    nGCCommonKindScissorCamera,             // 1004 - Camera scissor?
    nGCCommonKindPlayerMagnifyCamera,                // 1005 - ???
    nGCCommonKindPlayerArrowsCamera,                // 1006 - ???
    nGCCommonKindUnkCamera3,                // 1007
    nGCCommonKindWallpaper,                 // 1008 - Stage background?
    nGCCommonKindGroundDisplay,             // 1009 - Stage renderer?
    nGCCommonKindGround,                    // 1010
    nGCCommonKindEffect,                    // 1011
    nGCCommonKindWeapon,                    // 1012
    nGCCommonKindItem,                      // 1013
    nGCCommonKindMovie = 1015,              // 1015 - Opening movie?
    nGCCommonKindInterface,                 // 1016
    nGCCommonKindRumble,                    // 1017
    nGCCommonKindPublic,                    // 1018 - Audience reaction
    nGCCommonKindPauseMenu,                 // 1019
    nGCCommonKindShadow,                    // 1020
    nGCCommonKindTransition,                // 1021 - Screen fadeout actor?
    nGCCommonKindBossWallpaper = 1023,      // 1023
    nGCCommonKindPlayerSelect,              // 1024
    nGCCommonKindSceneCamera                // 1025

} GObjKind;

typedef enum GObjProcessKind
{
    nGCProcessKindThread,
    nGCProcessKindFunc,
    nGCProcessKindEnumCount

} GObjProcessKind;

typedef enum GObjObjKind
{
    nGCCommonAppendNone,
    nGCCommonAppendDObj,
    nGCCommonAppendSObj,
    nGCCommonAppendCamera,
    nGCCommonAppendEnumCount

} GObjObjKind;

typedef enum GObjEventKind
{
    nGCCommonEventShow,
    nGCCommonEventHide,
    nGCCommonEventResume,
    nGCCommonEventPause,
    nGCCommonEventEnd

} GObjEventKind;

typedef enum GObjLinkID
{
    // These assume that the scene has ovl3 loaded.
    // Scenes without ovl3 seem to not follow any consistent link indexing convention.

    // GObj link indexes with ID 1
    nGCCommonLinkIDGround = 1,          // ID 1: Stage object

    nGCCommonLinkIDGroundDisplay = 2,   // ID 2: Stage renderer?
    nGCCommonLinkIDItemActor = 2,       // ID 2: Item spawn actor
    nGCCommonLinkID02 = 2,              // ID 2: ???

    // GObj link indexes with ID 3
    nGCCommonLinkIDFighter = 3,         // ID 3: Fighter object
    nGCCommonLinkIDCreditsName = 3,     // ID 3: Credits staff roll name

    // GObj link indexes with ID 4
    nGCCommonLinkIDItem = 4,            // ID 4: Item object
    nGCCommonLinkIDCreditsJob = 4,      // ID 4: Credits staff roll job

    nGCCommonLinkIDWeapon = 5,          // ID 5: Weapon (projectile) object
    nGCCommonLinkIDEffect,              // ID 6: Effect type 1 object (other ID is 8 but idk what it does)
    nGCCommonLinkIDSpecialEffect = 8,   // ID 8: Effect type 2 object
    nGCCommonLinkIDHighlight = 9,       // ID 9: Credits shootout rectangles that zoom in on crosshair
    nGCCommonLinkIDCamera = 9,          // ID 9: Cameras?
    nGCCommonLinkIDInterfaceActor = 10, // ID 10: Traffic lamp on match start
    nGCCommonLinkIDInterface = 11,      // ID 11: HUD elements object
    nGCCommonLinkIDMagnify = 12,        // ID 12: HUD magnifying glass

    nGCCommonLinkIDMovie = 13,          // ID 13: Movie?
    nGCCommonLinkIDRumble = 13,         // ID 13: Rumble object?
    nGCCommonLinkIDWallpaper = 13,      // ID 13: Stage background object?
    nGCCommonLinkIDWallpaperEffect=13,  // ID 13: Stage background effect
    nGCCommonLinkIDFighterParts = 13,   // ID 13: FighterParts
    nGCCommonLinkIDShadow = 13,         // ID 13: Fighter shadows
    nGCCommonLinkIDTransition = 13,     // ID 13: Screen fadeout transition

    nGCCommonLinkIDPauseMenu = 14,      // ID 14: Pause menu object?
    nGCCommonLinkIDPlayerSelect = 15,   // ID 15: Player Select menu?
    nGCCommonLinkIDSceneCamera = 16     // ID 16: Scene camera?

} GObjLinkID;

typedef enum DObjVectorKind
{
    nGCDrawVectorKindNone,
    nGCDrawVectorKindTranslate,
    nGCDrawVectorKindRotate,
    nGCDrawVectorKindScale,
    nGCDrawVectorKindEnumCount

} DObjVectorKind;

typedef enum XObjTransformKind
{
    nGCMatrixKindNull,
    nGCMatrixKindPerspFastF = 3,     // Camera Fast FP perspective projection
    nGCMatrixKindPerspF,             // Camera FP perspective projection
    nGCMatrixKindOrtho,              // Camera Orthographic projection
    nGCMatrixKindLookAt,
    nGCMatrixKindTra = 18,           // DObj Translate
    nGCMatrixKindRotD,               // DObj Rotate degrees
    nGCMatrixKindTraRotD,            // DObj Translate + rotate degrees
    nGCMatrixKindRotRpyD,            // DObj Rotate Roll/Pitch/Yaw degrees
    nGCMatrixKindTraRotRpyD,         // DObj Translate + rotate Roll/Pitch/Yaw degrees
    nGCMatrixKindRotR,               // DObj Rotate radians (?)
    nGCMatrixKindTraRotR,            // DObj Translate + rotate radians
    nGCMatrixKindTraRotRSca,         // DObj Translate + rotate radians + scale
    nGCMatrixKindRotRpyR,            // DObj Rotate Roll/Pitch/Yaw radians
    nGCMatrixKindTraRotRpyR,         // DObj Translate + rotate Roll/Pitch/Yaw radians
    nGCMatrixKindTraRotRpyRSca,      // DObj Translate + rotate Roll/Pitch/Yaw radians + rowscale (?)
    nGCMatrixKindRotPyrR,            // DObj Rotate Pitch/Yaw/Roll radians (?)
    nGCMatrixKindTraRotPyrR,         // DObj Translate + rotate Pitch/Yaw/Roll radians (?)
    nGCMatrixKindTraRotPyrRSca,      // DObj Translate + rotate Pitch/Yaw/Roll radians (?) + scale
    nGCMatrixKindSca,                // DObj Scale
    nGCMatrixKindRecalcRotPyrR = 41, // MVP Recalc Pitch/Yaw/Roll radians (?)
    nGCMatrixKindRecalcRotRpyR,      // MVP Recalc Roll/Pitch/Yaw radians (?)
    nGCMatrixKindRecalcRotPyrRSca,   // MVP Recalc Pitch/Yaw/Roll radians + scale (?)
    nGCMatrixKindRecalcRotRpyRSca,   // MVP Recalc Roll/Pitch/Yaw radians + scale (?)
    nGCMatrixKind45,
    nGCMatrixKind46,
    nGCMatrixKind47,
    nGCMatrixKind48,
    nGCMatrixKind49,
    nGCMatrixKind50,
    nGCMatrixKindVecTra = 56,        // Standalone (?) vector translate
    nGCMatrixKindVecRotR,            // Standalone (?) vector rotate radians
    nGCMatrixKindVecRotRpyR,         // Standalone (?) vector rotate Roll/Pitch/Yaw radians
    nGCMatrixKindVecSca,             // Standalone (?) vector scale
    nGCMatrixKindVecTraRotR,         // Standalone (?) vector translate + rotate radians
    nGCMatrixKindVecTraRotRSca,      // Standalone (?) vector translate + rotate radians + rowscale (?)
    nGCMatrixKindVecTraRotRpyR,      // Standalone (?) vector translate + rotate Roll/Pitch/Yaw radians
    nGCMatrixKindVecTraRotRpyRSca    // Standalone (?) vector translate + rotate Roll/Pitch/Yaw radians + rowscale (?) 

} XObjTransformKind;

typedef enum AObjAnimKind
{
    nGCAnimKindNone, 
    nGCAnimKindStep,
    nGCAnimKindLinear, 
    nGCAnimKindCubic,
    nGCAnimKindSpecial

} AObjAnimKind;

typedef enum AObjEvent16Kind
{
    nGCAnimEvent16End,
    nGCAnimEvent16Block,
    nGCAnimEvent16SetValBlock,
    nGCAnimEvent16SetVal,
    nGCAnimEvent16SetValRateBlock,
    nGCAnimEvent16SetValRate,
    nGCAnimEvent16SetTargetRate,
    nGCAnimEvent16SetVal0RateBlock,
    nGCAnimEvent16SetVal0Rate,
    nGCAnimEvent16SetValAfterBlock,
    nGCAnimEvent16SetValAfter,
    nGCAnimEvent1611,
    nGCAnimEvent16SetTranslateInterp,
    nGCAnimEvent16Loop,
    nGCAnimEvent16SetFlags

} AObjEvent16Kind;

typedef enum AObjEvent32Kind
{
    nGCAnimEvent32End,
    nGCAnimEvent32Jump,
    nGCAnimEvent32Wait,
    nGCAnimEvent32SetValBlock,
    nGCAnimEvent32SetVal,
    nGCAnimEvent32SetValRateBlock,
    nGCAnimEvent32SetValRate,
    nGCAnimEvent32SetTargetRate,
    nGCAnimEvent32SetVal0RateBlock,
    nGCAnimEvent32SetVal0Rate,
    nGCAnimEvent32SetValAfterBlock,
    nGCAnimEvent32SetValAfter,
    ANIM_CMD_12 = 12,
    nGCAnimEvent32SetInterp = 13,
    nGCAnimEvent32SetAnim,
    nGCAnimEvent32SetFlags,
    ANIM_CMD_16 = 16,
    ANIM_CMD_17 = 17,
    nGCAnimEvent32SetExtValAfterBlock,
    nGCAnimEvent32SetExtValAfter,
    nGCAnimEvent32SetExtValBlock,
    nGCAnimEvent32SetExtVal,
    ANIM_CMD_22 = 22,
    ANIM_CMD_23 = 23

} AObjEvent32Kind;

typedef enum AObjTrackKind
{
    // model
    nGCAnimTrackNone,
    nGCAnimTrackJointStart,                     // Start of joint tracks
    nGCAnimTrackRotX = nGCAnimTrackJointStart,  // Rotation X (Roll)
    nGCAnimTrackRotY,                           // Rotation Y (Pitch)
    nGCAnimTrackRotZ,                           // Rotation Z (Yaw)
    nGCAnimTrackTraI,                           // Translation cubic interpolation?
    nGCAnimTrackTraX,                           // Translation X 
    nGCAnimTrackTraY,                           // Translation Y
    nGCAnimTrackTraZ,                           // Translation Z
    nGCAnimTrackScaX,                           // Scale X
    nGCAnimTrackScaY,                           // Scale Y
    nGCAnimTrackScaZ,                           // Scale Z
    nGCAnimTrackJointEnd = nGCAnimTrackScaZ,    // End of joint tracks
    // texture
    nGCAnimTrackMaterialStart = 13,
    nGCAnimTrackTextureIDCurrent = nGCAnimTrackMaterialStart,
    nGCAnimTrackTraU,
    nGCAnimTrackTraV,
    nGCAnimTrackScaU,
    nGCAnimTrackScaV,
    nGCAnimTrackTextureIDNext,
    nGCAnimTrackScrU,
    nGCAnimTrackScrV,
    nGCAnimTrackSetLFrac,
    nGCAnimTrackPaletteID,
    nGCAnimTrackMaterialEnd = nGCAnimTrackPaletteID,
    // camera
    nGCAnimTrackCameraStart = 25,
    nGCAnimTrackEyeX = nGCAnimTrackCameraStart,
    nGCAnimTrackEyeY,
    nGCAnimTrackEyeZ,
    nGCAnimTrackEyeI,
    nGCAnimTrackAtX,
    nGCAnimTrackAtY,
    nGCAnimTrackAtZ,
    nGCAnimTrackAtI,
    nGCAnimTrackUpX,
    nGCAnimTrackFovY,
    nGCAnimTrackCameraEnd = nGCAnimTrackFovY,
    // texture extra
    nGCAnimTrackMaterialSubStart = 37,
    nGCAnimTrackPrimColor = nGCAnimTrackMaterialSubStart,
    nGCAnimTrackEnvColor,
    nGCAnimTrackBlendColor,
    nGCAnimTrackLight1Color,
    nGCAnimTrackLight2Color,
    nGCAnimTrackMaterialSubEnd = nGCAnimTrackLight2Color

} AObjTrackKind;

/*
 * AObjEvent32 command-word construction macros.
 *
 * The union's `command` struct is `{ u32 opcode:7; u32 flags:10; u32 payload:15; }`.
 * IDO packs MSB-first, so the encoded u32 is
 *   (opcode << 25) | (flags << 15) | (payload & 0x7FFF).
 *
 * These macros let relocData animation streams (CamAnimJoint / AnimJoint /
 * MatAnimJoint arrays) use readable opcode names instead of opaque hex u32
 * literals. Track bit helpers compose the 10-bit `flags` field by OR'ing
 * 1 << (nGCAnimTrack* - nGCAnimTrackJointStart).
 */
#define aobjEvent32(opcode, flags, payload) \
    (GC_FIELDSET((opcode), 25, 7) | GC_FIELDSET((flags), 15, 10) | GC_FIELDSET((payload), 0, 15))

/* Opcodes with no flags/payload */
#define aobjEvent32End()             aobjEvent32(nGCAnimEvent32End, 0, 0)

/* Jump to a different script address (payload is the low 15 bits of addr). */
#define aobjEvent32Jump(addr)        aobjEvent32(nGCAnimEvent32Jump, 0, 0), (u32)(addr)

/* Delay payload-many frames */
#define aobjEvent32Wait(frames)      aobjEvent32(nGCAnimEvent32Wait, 0, (frames))

/* SetVal variants take per-track values after the command word. `flags` is
 * a bitmask of nGCAnimTrack* entries (bit N = track N). The caller emits
 * the values as separate f32/u32 entries. */
#define aobjEvent32SetVal(flags_mask, dur)         aobjEvent32(nGCAnimEvent32SetVal, (flags_mask), (dur))
#define aobjEvent32SetValBlock(flags_mask, dur)    aobjEvent32(nGCAnimEvent32SetValBlock, (flags_mask), (dur))
#define aobjEvent32SetValRate(flags_mask, dur)     aobjEvent32(nGCAnimEvent32SetValRate, (flags_mask), (dur))
#define aobjEvent32SetValRateBlock(flags_mask, d)  aobjEvent32(nGCAnimEvent32SetValRateBlock, (flags_mask), (d))
#define aobjEvent32SetVal0Rate(flags_mask, dur)    aobjEvent32(nGCAnimEvent32SetVal0Rate, (flags_mask), (dur))
#define aobjEvent32SetVal0RateBlock(flags_mask, d) aobjEvent32(nGCAnimEvent32SetVal0RateBlock, (flags_mask), (d))
#define aobjEvent32SetValAfter(flags_mask, dur)    aobjEvent32(nGCAnimEvent32SetValAfter, (flags_mask), (dur))
#define aobjEvent32SetValAfterBlock(flags_mask, d) aobjEvent32(nGCAnimEvent32SetValAfterBlock, (flags_mask), (d))
#define aobjEvent32SetTargetRate(flags_mask, dur)  aobjEvent32(nGCAnimEvent32SetTargetRate, (flags_mask), (dur))
#define aobjEvent32SetInterp(kind, flags_mask)     aobjEvent32(nGCAnimEvent32SetInterp, (flags_mask), (kind))
#define aobjEvent32SetAnim(flags_mask, payload)    aobjEvent32(nGCAnimEvent32SetAnim, (flags_mask), (payload))
#define aobjEvent32SetFlags(flags_mask, payload)   aobjEvent32(nGCAnimEvent32SetFlags, (flags_mask), (payload))
#define aobjEvent32SetExtVal(flags_mask, dur)         aobjEvent32(nGCAnimEvent32SetExtVal, (flags_mask), (dur))
#define aobjEvent32SetExtValBlock(flags_mask, dur)    aobjEvent32(nGCAnimEvent32SetExtValBlock, (flags_mask), (dur))
#define aobjEvent32SetExtValAfter(flags_mask, dur)    aobjEvent32(nGCAnimEvent32SetExtValAfter, (flags_mask), (dur))
#define aobjEvent32SetExtValAfterBlock(flags_mask,d)  aobjEvent32(nGCAnimEvent32SetExtValAfterBlock, (flags_mask), (d))

/* Numbered AObjEvent32 commands the runtime dispatches on but which have
 * no semantic shorthand (yet). All take raw flags / payload args so any
 * non-zero bits round-trip exactly. Behavior summary from objanim.c:
 *   Cmd12 - track-length accumulator (reads payload from this word, flags
 *           from the NEXT word -- AObjAnimAdvance pattern). 0 follow-up
 *           f-payload words.
 *   Cmd16 - func_anim(dobj, flags >> 8, (u8)flags) hook. 0 follow-up words.
 *   Cmd17 - multi-track func_anim via flags[4..13]; consumes one f-payload
 *           per set bit in that range.
 *   Cmd22 / Cmd23 - reserved (no runtime case yet, falls to default).
 */
#define aobjEvent32Cmd12(flags_val, payload_val)  aobjEvent32(ANIM_CMD_12, (flags_val), (payload_val))
#define aobjEvent32Cmd16(flags_val, payload_val)  aobjEvent32(ANIM_CMD_16, (flags_val), (payload_val))
#define aobjEvent32Cmd17(flags_val, payload_val)  aobjEvent32(ANIM_CMD_17, (flags_val), (payload_val))
#define aobjEvent32Cmd22(flags_val, payload_val)  aobjEvent32(ANIM_CMD_22, (flags_val), (payload_val))
#define aobjEvent32Cmd23(flags_val, payload_val)  aobjEvent32(ANIM_CMD_23, (flags_val), (payload_val))

/* Fallback variants for End / Jump / Wait whose shorthand macros above
 * hardcode flags (and, for End/Jump, payload) to 0. Real ROM bytes
 * sometimes carry non-zero values in those slots -- runtime don't-cares,
 * but we need byte-identity. The decoder emits these when the simpler
 * shorthand can't round-trip. */
#define aobjEvent32EndRaw(flags_val, payload_val)  aobjEvent32(nGCAnimEvent32End, (flags_val), (payload_val))
#define aobjEvent32JumpRaw(flags_val, payload_val, addr) \
    aobjEvent32(nGCAnimEvent32Jump, (flags_val), (payload_val)), (u32)(addr)
#define aobjEvent32WaitRaw(flags_val, payload_val) \
    aobjEvent32(nGCAnimEvent32Wait, (flags_val), (payload_val))

/* Track-flag bitmask helpers (for the `flags_mask` argument above). The
 * flags field is 10 bits, covering the joint-track range from RotX (bit 0)
 * to ScaZ (bit 9). Material and camera tracks use extended variants. */
#define AOBJ_JOINT_BIT(track) (1u << ((track) - nGCAnimTrackJointStart))
#define AOBJ_FLAG_ROTX   AOBJ_JOINT_BIT(nGCAnimTrackRotX)
#define AOBJ_FLAG_ROTY   AOBJ_JOINT_BIT(nGCAnimTrackRotY)
#define AOBJ_FLAG_ROTZ   AOBJ_JOINT_BIT(nGCAnimTrackRotZ)
#define AOBJ_FLAG_TRAI   AOBJ_JOINT_BIT(nGCAnimTrackTraI)
#define AOBJ_FLAG_TRAX   AOBJ_JOINT_BIT(nGCAnimTrackTraX)
#define AOBJ_FLAG_TRAY   AOBJ_JOINT_BIT(nGCAnimTrackTraY)
#define AOBJ_FLAG_TRAZ   AOBJ_JOINT_BIT(nGCAnimTrackTraZ)
#define AOBJ_FLAG_SCAX   AOBJ_JOINT_BIT(nGCAnimTrackScaX)
#define AOBJ_FLAG_SCAY   AOBJ_JOINT_BIT(nGCAnimTrackScaY)
#define AOBJ_FLAG_SCAZ   AOBJ_JOINT_BIT(nGCAnimTrackScaZ)

typedef enum GCStatus
{
    nGCStatusSystem,
    nGCStatusRunning,               // Processing current GObj's func_run
    nGCStatusProcessing,            // Processing current GObjProcess
    nGCStatusCapturing,             // Processing current CObj's viewport?
    nGCStatusDisplaying             // Processing current CObj and DObj's rendering?

} GCStatus;

typedef enum GCRunStatus
{
    nGCRunStatusDefault,
    nGCRunStatusEnd,
    nGCRunStatusEject
    
} GCRunStatus;

typedef union  AObjEvent16          AObjEvent16;
typedef union  AObjEvent32          AObjEvent32;
typedef union  AObjScript           AObjScript;
typedef struct GObj                 GObj;
typedef struct GObjScript           GObjScript;
typedef struct GObjProcess          GObjProcess;
typedef struct GObjThread           GObjThread;
typedef struct GObjThreadStack      GObjThreadStack;
typedef struct GObjStack            GObjStack;
typedef struct DObj                 DObj;
typedef struct DObjDesc             DObjDesc;
typedef struct DObjTraDesc          DObjTraDesc;
typedef struct DObjTransformTypes   DObjTransformTypes;
typedef struct DObjVec              DObjVec;
typedef struct DObjDLLink           DObjDLLink;
typedef struct DObjDistDL           DObjDistDL;
typedef struct DObjDistDLLink       DObjDistDLLink;
typedef struct DObjMultiList        DObjMultiList;
typedef struct AObj                 AObj;
typedef struct MObj                 MObj;
typedef struct MObjSub              MObjSub;
typedef struct SObj                 SObj;
typedef struct CObj                 CObj;
typedef struct CObjVec              CObjVec;
typedef struct CObjDesc             CObjDesc;
typedef struct XObj                 XObj;
typedef struct GCGfxLink            GCGfxLink;
typedef struct GCPersp              GCPersp;
typedef struct GCFrustum            GCFrustum;
typedef struct GCOrtho              GCOrtho;
typedef struct GCTranslate          GCTranslate;
typedef struct GCRotate             GCRotate;
typedef struct GCScale              GCScale;
typedef union  GCUserData           GCUserData;
typedef struct GCSetup              GCSetup;

#endif
