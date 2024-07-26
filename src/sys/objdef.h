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
    nOMObjProcessKindOSThread,
    nOMObjProcessKindProc,
    nOMObjProcessKindEnumMax

} GObjProcessKind;

typedef enum GObjObjKind
{
    GObj_ObjKind_None,
    GObj_ObjKind_DObj,
    GObj_ObjKind_SObj,
    GObj_ObjKind_Camera,
    GObj_ObjKind_EnumMax

} GObjObjKind;

typedef enum GObjLinkIndex
{
    // GObj link indexes with ID 1
    nOMObjCommonLinkIDGround = 1,         // ID 1: Stage object

    nOMObjCommonLinkIDGroundRender = 2,   // ID 2: Stage renderer?
    nOMObjCommonLinkID02 = 2,             // ID 2: ???

    // GObj link indexes with ID 3
    nOMObjCommonLinkIDFighter = 3,        // ID 3: Fighter object
    nOMObjCommonLinkIDCreditsName = 3,    // ID 3: Credits staff roll name

    // GObj link indexes with ID 4
    nOMObjCommonLinkIDItem = 4,           // ID 4: Item object
    nOMObjCommonLinkIDCreditsJob = 4,     // ID 4: Credits staff roll job

    nOMObjCommonLinkIDWeapon,             // ID 5: Weapon (projectile) object
    nOMObjCommonLinkIDEffect,             // ID 6: Effect type 1 object (other ID is 8 but idk what it does)
    nOMObjCommonLinkIDSpecialEffect = 8,  // ID 8: Effect type 2 object
    nOMObjCommonLinkIDHighlight = 9,      // ID 9: Credits shootout rectangles that zoom in on crosshair
    nOMObjCommonLinkIDBattleCamera = 9,   // ID 9: Primary in-game cameras (?)
    nOMObjCommonLinkIDInterfaceActor = 10,// ID 10: Traffic lamp on match start
    nOMObjCommonLinkIDInterface = 11,     // ID 11: HUD elements object
    nOMObjCommonLinkIDMagnify = 12,       // ID 12: HUD magnifying glass

    nOMObjCommonLinkIDRumble = 13,        // ID 13: Rumble object?
    nOMObjCommonLinkIDWallpaper = 13,     // ID 13: Stage background object?
    nOMObjCommonLinkIDFighterParts = 13,  // ID 13: FighterParts
    nOMObjCommonLinkIDShadow = 13,        // ID 13: Fighter shadows

    nOMObjCommonLinkIDPauseMenu           // ID 14: Pause menu object?

} GObjLinkIndex;

typedef enum DObjVecKind
{
    DObjVec_Kind_None,
    DObjVec_Kind_Translate,
    DObjVec_Kind_Rotate,
    DObjVec_Kind_Scale,
    DObjVec_Kind_EnumMax

} DObjVecKind;

typedef enum OMMtxTransformKind
{
    OMMtx_Transform_Null,
    OMMtx_Transform_PerspFastF = 3,     // Camera Fast FP perspective projection
    OMMtx_Transform_PerspF,             // Camera FP perspective projection
    OMMtx_Transform_Ortho,              // Camera Orthographic projection
    OMMtx_Transform_Tra = 18,           // DObj Translate
    OMMtx_Transform_RotD,               // DObj Rotate degrees
    OMMtx_Transform_TraRotD,            // DObj Translate + rotate degrees
    OMMtx_Transform_RotRpyD,            // DObj Rotate Roll/Pitch/Yaw degrees
    OMMtx_Transform_TraRotRpyD,         // DObj Translate + rotate Roll/Pitch/Yaw degrees
    OMMtx_Transform_RotR,               // DObj Rotate radians (?)
    OMMtx_Transform_TraRotR,            // DObj Translate + rotate radians
    OMMtx_Transform_TraRotRSca,         // DObj Translate + rotate radians + scale
    OMMtx_Transform_RotRpyR,            // DObj Rotate Roll/Pitch/Yaw radians
    OMMtx_Transform_TraRotRpyR,         // DObj Translate + rotate Roll/Pitch/Yaw radians
    OMMtx_Transform_TraRotRpyRSca,      // DObj Translate + rotate Roll/Pitch/Yaw radians + rowscale (?)
    OMMtx_Transform_RotPyrR,            // DObj Rotate Pitch/Yaw/Roll radians (?)
    OMMtx_Transform_TraRotPyrR,         // DObj Translate + rotate Pitch/Yaw/Roll radians (?)
    OMMtx_Transform_TraRotPyrRSca,      // DObj Translate + rotate Pitch/Yaw/Roll radians (?) + scale
    OMMtx_Transform_Sca,                // DObj Scale
    OMMtx_Transform_VecTra = 56,        // Standalone (?) vector translate
    OMMtx_Transform_VecRotR,            // Standalone (?) vector rotate radians
    OMMtx_Transform_VecRotRpyR,         // Standalone (?) vector rotate Roll/Pitch/Yaw radians
    OMMtx_Transform_VecSca,             // Standalone (?) vector scale
    OMMtx_Transform_VecTraRotR,         // Standalone (?) vector translate + rotate radians
    OMMtx_Transform_VecTraRotRSca,      // Standalone (?) vector translate + rotate radians + rowscale (?)
    OMMtx_Transform_VecTraRotRpyR,      // Standalone (?) vector translate + rotate Roll/Pitch/Yaw radians
    OMMtx_Transform_VecTraRotRpyRSca    // Standalone (?) vector translate + rotate Roll/Pitch/Yaw radians + rowscale (?) 

} OMMtxTransformKind;

typedef union  ATrack               ATrack;
typedef union  ACommand             ACommand;
typedef struct GObj                 GObj;
typedef struct GObjLink             GObjLink;
typedef struct _GObjProcess         GObjProcess;
typedef struct _GObjThread          GObjThread;
typedef struct _DObj                DObj;           // Some structs are temporarily prefixed with underscore to avoid conflict with types in om.h
typedef struct DObjDesc             DObjDesc;
typedef struct DObjTransformTypes   DObjTransformTypes;
typedef struct DObjDescArray        DObjDescArray;
typedef struct DObjDescContainer    DObjDescContainer;
typedef struct DObjDynamicStore     DObjDynamicStore;
typedef struct DObjDLLink           DObjDLLink;
typedef struct DObjDistDL           DObjDistDL;
typedef struct DObjDistDLLink       DObjDistDLLink;
typedef struct DObjMultiList        DObjMultiList;
typedef struct _AObj                AObj;
typedef union  AObjActor            AObjActor;
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
