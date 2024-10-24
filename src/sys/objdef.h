#ifndef _OBJDEF_H_
#define _OBJDEF_H_

typedef enum GObjKind
{
    nGCCommonKindFighter = 1000,             // 1000
    nGCCommonKindFighterParts,               // 1001
    nGCCommonKindMainCamera = 1002,          // 1002
    nGCCommonKindWallpaperCamera,            // 1003 - Used to render stage backgrounds?
    nGCCommonKindScissorCamera,              // 1004 - Camera scissor?
    nGCCommonKindUnkCamera1,                 // 1005 - ???
    nGCCommonKindUnkCamera2,                 // 1006 - ???
    nGCCommonKindUnkCamera3,                 // 1007
    nGCCommonKindWallpaper = 1008,           // 1008 - Stage background?
    nGCCommonKindGrRender,                   // 1009 - Stage renderer?
    nGCCommonKindGround,                     // 1010
    nGCCommonKindEffect,                     // 1011
    nGCCommonKindWeapon,                     // 1012
    nGCCommonKindItem,                       // 1013
    nGCCommonKindMovie = 1015,               // 1015 - Opening movie?
    nGCCommonKindInterface = 1016,           // 1016
    nGCCommonKindRumble,                     // 1017
    nGCCommonKindPublicity,                  // 1018 - Audience reaction
    nGCCommonKindPauseMenu = 1019,           // 1019
    nGCCommonKindShadow,                     // 1020
    nGCCommonKindTransition,                 // 1021 - Screen fadeout actor?
    nGCCommonKindBossWallpaper = 1023,       // 1023
    nGCCommonKindSceneCamera = 1025          // 1025

} GObjKind;

typedef enum GObjProcessKind
{
    nGCProcessKindThread,
    nGCProcessKindProc,
    nGCProcessKindEnumMax

} GObjProcessKind;

typedef enum GObjObjKind
{
    nGCCommonAppendNone,
    nGCCommonAppendDObj,
    nGCCommonAppendSObj,
    nGCCommonAppendCamera,
    nGCCommonAppendEnumMax

} GObjObjKind;

typedef enum GObjLinkIndex
{
    // GObj link indexes with ID 1
    nGCCommonLinkIDGround = 1,         // ID 1: Stage object

    nGCCommonLinkIDGroundRender = 2,   // ID 2: Stage renderer?
    nGCCommonLinkIDItemActor = 2,      // ID 2: Item spawn actor
    nGCCommonLinkID02 = 2,             // ID 2: ???

    // GObj link indexes with ID 3
    nGCCommonLinkIDFighter = 3,        // ID 3: Fighter object
    nGCCommonLinkIDCreditsName = 3,    // ID 3: Credits staff roll name

    // GObj link indexes with ID 4
    nGCCommonLinkIDItem = 4,           // ID 4: Item object
    nGCCommonLinkIDCreditsJob = 4,     // ID 4: Credits staff roll job

    nGCCommonLinkIDWeapon = 5,         // ID 5: Weapon (projectile) object
    nGCCommonLinkIDEffect,             // ID 6: Effect type 1 object (other ID is 8 but idk what it does)
    nGCCommonLinkIDSpecialEffect = 8,  // ID 8: Effect type 2 object
    nGCCommonLinkIDHighlight = 9,      // ID 9: Credits shootout rectangles that zoom in on crosshair
    nGCCommonLinkIDCamera = 9,         // ID 9: Cameras?
    nGCCommonLinkIDInterfaceActor = 10,// ID 10: Traffic lamp on match start
    nGCCommonLinkIDInterface = 11,     // ID 11: HUD elements object
    nGCCommonLinkIDMagnify = 12,       // ID 12: HUD magnifying glass

    nGCCommonLinkIDRumble = 13,        // ID 13: Rumble object?
    nGCCommonLinkIDWallpaper = 13,     // ID 13: Stage background object?
    nGCCommonLinkIDWallpaperEffect=13, // ID 13: Stage background effect
    nGCCommonLinkIDFighterParts = 13,  // ID 13: FighterParts
    nGCCommonLinkIDShadow = 13,        // ID 13: Fighter shadows
    nGCCommonLinkIDTransition = 13,    // ID 13: Screen fadeout transition

    nGCCommonLinkIDPauseMenu           // ID 14: Pause menu object?

} GObjLinkIndex;

typedef enum DObjVecKind
{
    nGCDrawVecKindNone,
    nGCDrawVecKindTranslate,
    nGCDrawVecKindRotate,
    nGCDrawVecKindScale,
    nGCDrawVecKindEnumMax

} DObjVecKind;

typedef enum GCMatrixTransformKind
{
    nGCTransformNull,
    nGCTransformPerspFastF = 3,     // Camera Fast FP perspective projection
    nGCTransformPerspF,             // Camera FP perspective projection
    nGCTransformOrtho,              // Camera Orthographic projection
    nGCTransformLookAt,
    nGCTransformTra = 18,           // DObj Translate
    nGCTransformRotD,               // DObj Rotate degrees
    nGCTransformTraRotD,            // DObj Translate + rotate degrees
    nGCTransformRotRpyD,            // DObj Rotate Roll/Pitch/Yaw degrees
    nGCTransformTraRotRpyD,         // DObj Translate + rotate Roll/Pitch/Yaw degrees
    nGCTransformRotR,               // DObj Rotate radians (?)
    nGCTransformTraRotR,            // DObj Translate + rotate radians
    nGCTransformTraRotRSca,         // DObj Translate + rotate radians + scale
    nGCTransformRotRpyR,            // DObj Rotate Roll/Pitch/Yaw radians
    nGCTransformTraRotRpyR,         // DObj Translate + rotate Roll/Pitch/Yaw radians
    nGCTransformTraRotRpyRSca,      // DObj Translate + rotate Roll/Pitch/Yaw radians + rowscale (?)
    nGCTransformRotPyrR,            // DObj Rotate Pitch/Yaw/Roll radians (?)
    nGCTransformTraRotPyrR,         // DObj Translate + rotate Pitch/Yaw/Roll radians (?)
    nGCTransformTraRotPyrRSca,      // DObj Translate + rotate Pitch/Yaw/Roll radians (?) + scale
    nGCTransformSca,                // DObj Scale
    nGCTransformRecalcRotPyrR = 41, // MVP Recalc Pitch/Yaw/Roll radians (?)
    nGCTransformRecalcRotRpyR,      // MVP Recalc Roll/Pitch/Yaw radians (?)
    nGCTransformRecalcRotPyrRSca,   // MVP Recalc Pitch/Yaw/Roll radians + scale (?)
    nGCTransformRecalcRotRpyRSca,   // MVP Recalc Roll/Pitch/Yaw radians + scale (?)
    nGCTransform45,
    nGCTransform46,
    nGCTransform47,
    nGCTransform48,
    nGCTransform49,
    nGCTransform50,
    nGCTransformVecTra = 56,        // Standalone (?) vector translate
    nGCTransformVecRotR,            // Standalone (?) vector rotate radians
    nGCTransformVecRotRpyR,         // Standalone (?) vector rotate Roll/Pitch/Yaw radians
    nGCTransformVecSca,             // Standalone (?) vector scale
    nGCTransformVecTraRotR,         // Standalone (?) vector translate + rotate radians
    nGCTransformVecTraRotRSca,      // Standalone (?) vector translate + rotate radians + rowscale (?)
    nGCTransformVecTraRotRpyR,      // Standalone (?) vector translate + rotate Roll/Pitch/Yaw radians
    nGCTransformVecTraRotRpyRSca    // Standalone (?) vector translate + rotate Roll/Pitch/Yaw radians + rowscale (?) 

} GCMatrixTransformKind;

typedef enum AObjAnimKind
{
    nGCAnimKindNone, 
    nGCAnimKindStep,
    nGCAnimKindLinear, 
    nGCAnimKindCubic,
    nGCAnimKindSpecial

} AObjAnimKind;

typedef enum AObjCommandKind
{
    nGCAnimCommandEnd,
    nGCAnimCommandJump,
    nGCAnimCommandWait,
    nGCAnimCommandSetValBlock,
    nGCAnimCommandSetVal,
    nGCAnimCommandSetValRateBlock,
    nGCAnimCommandSetValRate,
    nGCAnimCommandSetTargetRate,
    nGCAnimCommandSetVal0RateBlock,
    nGCAnimCommandSetVal0Rate,
    nGCAnimCommandSetValAfterBlock,
    nGCAnimCommandSetValAfter,
    ANIM_CMD_12 = 12,
    nGCAnimCommandSetInterp = 13,
    nGCAnimCommandSetAnim,
    nGCAnimCommandSetFlags,
    ANIM_CMD_16 = 16,
    ANIM_CMD_17 = 17,
    nGCAnimCommandSetExtValAfterBlock,
    nGCAnimCommandSetExtValAfter,
    nGCAnimCommandSetExtValBlock,
    nGCAnimCommandSetExtVal,
    ANIM_CMD_22 = 22,
    ANIM_CMD_23 = 23

} AObjCommandKind;

typedef enum AObjTrackKind
{
    // model
    nGCAnimTrackNone,
    nGCAnimTrackJointStart,                      // Start of joint tracks
    nGCAnimTrackRotX = nGCAnimTrackJointStart,// Rotation X (Roll)
    nGCAnimTrackRotY,                            // Rotation Y (Pitch)
    nGCAnimTrackRotZ,                            // Rotation Z (Yaw)
    nGCAnimTrackTraI,                            // Translation cubic interpolation?
    nGCAnimTrackTraX,                            // Translation X 
    nGCAnimTrackTraY,                            // Translation Y
    nGCAnimTrackTraZ,                            // Translation Z
    nGCAnimTrackScaX,                            // Scale X
    nGCAnimTrackScaY,                            // Scale Y
    nGCAnimTrackScaZ,                            // Scale Z
    nGCAnimTrackJointEnd = nGCAnimTrackScaZ,  // End of joint tracks
    // texture
    nGCAnimTrackMaterialStart = 13,
    nGCAnimTrackSetTextureIDCurrent = nGCAnimTrackMaterialStart,
    nGCAnimTrackTexture14,
    nGCAnimTrackTexture15,
    nGCAnimTrackTexture16,
    nGCAnimTrackTexture17,
    nGCAnimTrackSetTextureIDNext,
    nGCAnimTrackTexture19,
    nGCAnimTrackTexture20,
    nGCAnimTrackSetLFrac,
    nGCAnimTrackSetTextureFrame,
    nGCAnimTrackMaterialEnd = nGCAnimTrackSetTextureFrame,
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

typedef union  AObjEvent16          AObjEvent16;
typedef union  AObjEvent32          AObjEvent32;
typedef union  AObjScript           AObjScript;
typedef struct GObj                 GObj;
typedef struct GObjLink             GObjLink;
typedef struct GObjProcess          GObjProcess;
typedef struct GObjThread           GObjThread;
typedef struct DObj                 DObj;
typedef struct DObjDesc             DObjDesc;
typedef struct DObjTraDesc          DObjTraDesc;
typedef struct DObjTransformTypes   DObjTransformTypes;
typedef struct DObjDynamicStore     DObjDynamicStore;
typedef struct DObjDLLink           DObjDLLink;
typedef struct DObjDistDL           DObjDistDL;
typedef struct DObjDistDLLink       DObjDistDLLink;
typedef struct DObjMultiList        DObjMultiList;
typedef struct AObj                 AObj;
typedef struct MObj                 MObj;
typedef struct MObjSub              MObjSub;
typedef struct SObj                 SObj;
typedef struct CameraVec            CameraVec;
typedef struct CameraDesc           CameraDesc;
typedef struct Camera               Camera;
typedef struct GCMatrix             GCMatrix;
typedef struct GCGfxLink            GCGfxLink;
typedef struct GCThreadStackList    GCThreadStackList;
typedef struct GCThreadStackNode    GCThreadStackNode;
typedef struct GCPersp              GCPersp;
typedef struct GCFrustum            GCFrustum;
typedef struct GCOrtho              GCOrtho;
typedef struct GCTranslate          GCTranslate;
typedef struct GCRotate             GCRotate;
typedef struct GCScale              GCScale;
typedef union  GCUserData           GCUserData;
typedef struct GCSetup              GCSetup;

#endif
