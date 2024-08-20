#ifndef _OBJDEF_H_
#define _OBJDEF_H_

typedef enum GObjKind
{
    nOMObjCommonKindFighter = 1000,     // 1000
    nOMObjCommonKindFighterParts,       // 1001
    nOMObjCommonKindMainCamera = 1002,  // 1002
    nOMObjCommonKindWallpaperCamera,    // 1003 - Used to render stage backgrounds?
    nOMObjCommonKindScissorCamera,      // 1004 - Camera scissor?
    nOMObjCommonKindUnkCamera1,         // 1005 - ???
    nOMObjCommonKindUnkCamera2,         // 1006 - ???
    nOMObjCommonKindUnkCamera3,         // 1007
    nOMObjCommonKindWallpaper = 1008,   // 1008 - Stage background?
    nOMObjCommonKindGrRender,           // 1009 - Stage renderer?
    nOMObjCommonKindGround,             // 1010
    nOMObjCommonKindEffect,             // 1011
    nOMObjCommonKindWeapon,             // 1012
    nOMObjCommonKindItem,               // 1013
    nOMObjCommonKindInterface = 1016,   // 1016
    nOMObjCommonKindRumble,             // 1017
    nOMObjCommonKindPublicity,          // 1018 - Audience reaction
    nOMObjCommonKindPauseMenu = 1019,   // 1019
    nOMObjCommonKindShadow,             // 1020
    nOMObjCommonKindBossWallpaper = 1023

} GObjKind;

typedef enum GObjProcessKind
{
    nOMObjProcessKindThread,
    nOMObjProcessKindProc,
    nOMObjProcessKindEnumMax

} GObjProcessKind;

typedef enum GObjObjKind
{
    nOMObjCommonAppendNone,
    nOMObjCommonAppendDObj,
    nOMObjCommonAppendSObj,
    nOMObjCommonAppendCamera,
    nOMObjCommonAppendEnumMax

} GObjObjKind;

typedef enum GObjLinkIndex
{
    // GObj link indexes with ID 1
    nOMObjCommonLinkIDGround = 1,         // ID 1: Stage object

    nOMObjCommonLinkIDGroundRender = 2,   // ID 2: Stage renderer?
    nOMObjCommonLinkIDItemActor = 2,      // ID 2: Item spawn actor
    nOMObjCommonLinkID02 = 2,             // ID 2: ???

    // GObj link indexes with ID 3
    nOMObjCommonLinkIDFighter = 3,        // ID 3: Fighter object
    nOMObjCommonLinkIDCreditsName = 3,    // ID 3: Credits staff roll name

    // GObj link indexes with ID 4
    nOMObjCommonLinkIDItem = 4,           // ID 4: Item object
    nOMObjCommonLinkIDCreditsJob = 4,     // ID 4: Credits staff roll job

    nOMObjCommonLinkIDWeapon = 5,         // ID 5: Weapon (projectile) object
    nOMObjCommonLinkIDEffect,             // ID 6: Effect type 1 object (other ID is 8 but idk what it does)
    nOMObjCommonLinkIDSpecialEffect = 8,  // ID 8: Effect type 2 object
    nOMObjCommonLinkIDHighlight = 9,      // ID 9: Credits shootout rectangles that zoom in on crosshair
    nOMObjCommonLinkIDCamera = 9,         // ID 9: Cameras?
    nOMObjCommonLinkIDInterfaceActor = 10,// ID 10: Traffic lamp on match start
    nOMObjCommonLinkIDInterface = 11,     // ID 11: HUD elements object
    nOMObjCommonLinkIDMagnify = 12,       // ID 12: HUD magnifying glass

    nOMObjCommonLinkIDRumble = 13,        // ID 13: Rumble object?
    nOMObjCommonLinkIDWallpaper = 13,     // ID 13: Stage background object?
    nOMObjCommonLinkIDWallpaperEffect=13, // ID 13: Stage background effect
    nOMObjCommonLinkIDFighterParts = 13,  // ID 13: FighterParts
    nOMObjCommonLinkIDShadow = 13,        // ID 13: Fighter shadows

    nOMObjCommonLinkIDPauseMenu           // ID 14: Pause menu object?

} GObjLinkIndex;

typedef enum DObjVecKind
{
    nOMObjDrawVecKindNone,
    nOMObjDrawVecKindTranslate,
    nOMObjDrawVecKindRotate,
    nOMObjDrawVecKindScale,
    nOMObjDrawVecKindEnumMax

} DObjVecKind;

typedef enum OMMtxTransformKind
{
    nOMTransformNull,
    nOMTransformPerspFastF = 3,     // Camera Fast FP perspective projection
    nOMTransformPerspF,             // Camera FP perspective projection
    nOMTransformOrtho,              // Camera Orthographic projection
    nOMTransformTra = 18,           // DObj Translate
    nOMTransformRotD,               // DObj Rotate degrees
    nOMTransformTraRotD,            // DObj Translate + rotate degrees
    nOMTransformRotRpyD,            // DObj Rotate Roll/Pitch/Yaw degrees
    nOMTransformTraRotRpyD,         // DObj Translate + rotate Roll/Pitch/Yaw degrees
    nOMTransformRotR,               // DObj Rotate radians (?)
    nOMTransformTraRotR,            // DObj Translate + rotate radians
    nOMTransformTraRotRSca,         // DObj Translate + rotate radians + scale
    nOMTransformRotRpyR,            // DObj Rotate Roll/Pitch/Yaw radians
    nOMTransformTraRotRpyR,         // DObj Translate + rotate Roll/Pitch/Yaw radians
    nOMTransformTraRotRpyRSca,      // DObj Translate + rotate Roll/Pitch/Yaw radians + rowscale (?)
    nOMTransformRotPyrR,            // DObj Rotate Pitch/Yaw/Roll radians (?)
    nOMTransformTraRotPyrR,         // DObj Translate + rotate Pitch/Yaw/Roll radians (?)
    nOMTransformTraRotPyrRSca,      // DObj Translate + rotate Pitch/Yaw/Roll radians (?) + scale
    nOMTransformSca,                // DObj Scale
    nOMTransformRecalcRotPyrR = 41, // MVP Recalc Pitch/Yaw/Roll radians (?)
    nOMTransformRecalcRotRpyR,      // MVP Recalc Roll/Pitch/Yaw radians (?)
    nOMTransformRecalcRotPyrRSca,   // MVP Recalc Pitch/Yaw/Roll radians + scale (?)
    nOMTransformRecalcRotRpyRSca,   // MVP Recalc Roll/Pitch/Yaw radians + scale (?)
    nOMTransform45,
    nOMTransform46,
    nOMTransform47,
    nOMTransform48,
    nOMTransform49,
    nOMTransform50,
    nOMTransformVecTra = 56,        // Standalone (?) vector translate
    nOMTransformVecRotR,            // Standalone (?) vector rotate radians
    nOMTransformVecRotRpyR,         // Standalone (?) vector rotate Roll/Pitch/Yaw radians
    nOMTransformVecSca,             // Standalone (?) vector scale
    nOMTransformVecTraRotR,         // Standalone (?) vector translate + rotate radians
    nOMTransformVecTraRotRSca,      // Standalone (?) vector translate + rotate radians + rowscale (?)
    nOMTransformVecTraRotRpyR,      // Standalone (?) vector translate + rotate Roll/Pitch/Yaw radians
    nOMTransformVecTraRotRpyRSca    // Standalone (?) vector translate + rotate Roll/Pitch/Yaw radians + rowscale (?) 

} OMMtxTransformKind;

typedef enum AObjAnimKind
{
    nOMObjAnimKindNone, 
    nOMObjAnimKindStep,
    nOMObjAnimKindLinear, 
    nOMObjAnimKindCubic,
    nOMObjAnimKindSpecial

} AObjAnimKind;

typedef enum AObjCommandKind
{
    nOMObjAnimCommandEnd,
    nOMObjAnimCommandJump,
    nOMObjAnimCommandWait,
    nOMObjAnimCommandSetValBlock,
    nOMObjAnimCommandSetVal,
    nOMObjAnimCommandSetValRateBlock,
    nOMObjAnimCommandSetValRate,
    nOMObjAnimCommandSetTargetRate,
    nOMObjAnimCommandSetVal0RateBlock,
    nOMObjAnimCommandSetVal0Rate,
    nOMObjAnimCommandSetValAfterBlock,
    nOMObjAnimCommandSetValAfter,
    ANIM_CMD_12 = 12,
    nOMObjAnimCommandSetInterp = 13,
    nOMObjAnimCommandSetAnim,
    nOMObjAnimCommandSetFlags,
    ANIM_CMD_16 = 16,
    ANIM_CMD_17 = 17,
    nOMObjAnimCommandSetExtValAfterBlock,
    nOMObjAnimCommandSetExtValAfter,
    nOMObjAnimCommandSetExtValBlock,
    nOMObjAnimCommandSetExtVal,
    ANIM_CMD_22 = 22,
    ANIM_CMD_23 = 23

} AObjCommandKind;

typedef enum AObjTrackKind
{
    // model
    nOMObjAnimTrackNone,
    nOMObjAnimTrackJointStart,                      // Start of joint tracks
    nOMObjAnimTrackRotX = nOMObjAnimTrackJointStart,// Rotation X (Roll)
    nOMObjAnimTrackRotY,                            // Rotation Y (Pitch)
    nOMObjAnimTrackRotZ,                            // Rotation Z (Yaw)
    nOMObjAnimTrackTraI,                            // Translation cubic interpolation?
    nOMObjAnimTrackTraX,                            // Translation X 
    nOMObjAnimTrackTraY,                            // Translation Y
    nOMObjAnimTrackTraZ,                            // Translation Z
    nOMObjAnimTrackScaX,                            // Scale X
    nOMObjAnimTrackScaY,                            // Scale Y
    nOMObjAnimTrackScaZ,                            // Scale Z
    nOMObjAnimTrackJointEnd = nOMObjAnimTrackScaZ,  // End of joint tracks
    // texture
    nOMObjAnimTrackMaterialStart = 13,
    nOMObjAnimTrackSetTextureIDCurrent = nOMObjAnimTrackMaterialStart,
    nOMObjAnimTrackTexture14,
    nOMObjAnimTrackTexture15,
    nOMObjAnimTrackTexture16,
    nOMObjAnimTrackTexture17,
    nOMObjAnimTrackSetTextureIDNext,
    nOMObjAnimTrackTexture19,
    nOMObjAnimTrackTexture20,
    nOMObjAnimTrackSetLFrac,
    nOMObjAnimTrackSetTextureFrame,
    nOMObjAnimTrackMaterialEnd = nOMObjAnimTrackSetTextureFrame,
    // camera
    nOMObjAnimTrackCameraStart = 25,
    nOMObjAnimTrackEyeX = nOMObjAnimTrackCameraStart,
    nOMObjAnimTrackEyeY,
    nOMObjAnimTrackEyeZ,
    nOMObjAnimTrackEyeI,
    nOMObjAnimTrackAtX,
    nOMObjAnimTrackAtY,
    nOMObjAnimTrackAtZ,
    nOMObjAnimTrackAtI,
    nOMObjAnimTrackUpX,
    nOMObjAnimTrackFovY,
    nOMObjAnimTrackCameraEnd = nOMObjAnimTrackFovY,
    // texture extra
    nOMObjAnimTrackMaterialSubStart = 37,
    nOMObjAnimTrackPrimColor = nOMObjAnimTrackMaterialSubStart,
    nOMObjAnimTrackEnvColor,
    nOMObjAnimTrackBlendColor,
    nOMObjAnimTrackLight1Color,
    nOMObjAnimTrackLight2Color,
    nOMObjAnimTrackMaterialSubEnd = nOMObjAnimTrackLight2Color

} AObjTrackKind;

typedef union  AObjFigatree         AObjFigatree;
typedef union  AObjStream        AObjStream;
typedef struct GObj                 GObj;
typedef struct GObjLink             GObjLink;
typedef struct _GObjProcess         GObjProcess;
typedef struct _GObjThread          GObjThread;
typedef struct _DObj                DObj;           // Some structs are temporarily prefixed with underscore to avoid conflict with types in om.h
typedef struct DObjDesc             DObjDesc;
typedef struct DObjTransformTypes   DObjTransformTypes;
typedef struct DObjDynamicStore     DObjDynamicStore;
typedef struct DObjDLLink           DObjDLLink;
typedef struct DObjDistDL           DObjDistDL;
typedef struct DObjDistDLLink       DObjDistDLLink;
typedef struct DObjMultiList        DObjMultiList;
typedef struct _AObj                AObj;
typedef struct _MObj                MObj;
typedef struct _MObjSub             MObjSub;
typedef struct _SObj                SObj;
typedef struct CameraVec            CameraVec;
typedef struct _Camera              Camera;
typedef struct _OMMtx               OMMtx;
typedef struct OMGfxLink            OMGfxLink;
typedef struct _OMThreadStackList   OMThreadStackList;
typedef struct _OMThreadStackNode   OMThreadStackNode;
typedef struct OMPersp              OMPersp;
typedef struct OMFrustum            OMFrustum;
typedef struct OMOrtho              OMOrtho;
typedef struct OMTranslate          OMTranslate;
typedef struct OMRotate             OMRotate;
typedef struct OMScale              OMScale;
typedef union  OMUserData           OMUserData;
typedef struct _OMSetup             OMSetup;

#endif
