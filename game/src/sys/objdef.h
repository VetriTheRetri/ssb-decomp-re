#ifndef _OBJDEF_H_
#define _OBJDEF_H_

typedef enum omGObjKind
{
    GObj_Kind_Fighter = 1000,     // 1000
    GObj_Kind_FighterParts,       // 1001
    GObj_Kind_MainCamera = 1002,  // 1002
    GObj_Kind_WallpaperCamera,    // 1003 - Used to render stage backgrounds?
    GObj_Kind_ScissorCamera,      // 1004 - Camera scissor?
    GObj_Kind_UnkCamera1,         // 1005 - ???
    GObj_Kind_UnkCamera2,         // 1006 - ???
    GObj_Kind_UnkCamera3,         // 1007
    GObj_Kind_GrWallpaper = 1008, // 1008 - Stage background?
    GObj_Kind_GrRender,           // 1009 - Stage renderer?
    GObj_Kind_Ground,             // 1010
    GObj_Kind_Effect,             // 1011
    GObj_Kind_Weapon,             // 1012
    GObj_Kind_Item,               // 1013
    GObj_Kind_Interface = 1016,   // 1016
    GObj_Kind_Rumble,             // 1017
    GObj_Kind_Publicity,          // 1018 - Audience reaction
    GObj_Kind_PauseMenu = 1019,   // 1019
    GObj_Kind_BossWallpaper = 1023

} omGObjKind;

typedef enum GObjProcessKind
{
    GObjProcess_Kind_OSThread,
    GObjProcess_Kind_Proc,
    GObjProcess_Kind_EnumMax

} GObjProcessKind;

typedef enum GObjObjKind
{
    GObj_ObjKind_None,
    GObj_ObjKind_DObj,
    GObj_ObjKind_SObj,
    GObj_ObjKind_Camera,
    GObj_ObjKind_EnumMax

} GObjObjKind;

typedef enum omGObjLinkIndex
{
    GObj_LinkIndex_02 = 2,          // 2

    // GObj link indexes with ID 3
    GObj_LinkIndex_Fighter = 3,     // 3
    GObj_LinkIndex_CreditsName = 3, // 3

    // GObj link indexes with ID 4
    GObj_LinkIndex_Item = 4,        // 4
    GObj_LinkIndex_CreditsJob = 4,  // 4

    GObj_LinkIndex_Weapon,          // 5
    GObj_LinkIndex_Effect,          // 6
    GObj_LinkIndex_Highlight = 9,   // 9 - Credits shootout rectangles that zoom in on crosshair
    GObj_LinkIndex_Interface = 11,  // 11
    GObj_LinkIndex_Rumble = 13,     // 13
    GObj_LinkIndex_Background = 13, // 13 // Same index as rumble???
    GObj_LinkIndex_PauseMenu        // 14

} omGObjLinkIndex;

typedef enum OMMtxVecKind
{
    OMMtxVec_Kind_None,
    OMTransform_Kind_Translate,
    OMTransform_Kind_Rotate,
    OMTransform_Kind_Scale,
    OMMtxVec_Kind_EnumMax

} OMMtxVecKind;

typedef union  ATrack               ATrack;
typedef union  ACommand             ACommand;
typedef struct GObj                 GObj;
typedef struct GObjLink             GObjLink;
typedef struct _GObjProcess         GObjProcess;
typedef struct _GObjThread          GObjThread;
typedef struct _DObj                DObj;           // Some structs are temporarily prefixed with underscore to avoid conflict with types in om.h
typedef struct DObjDesc             DObjDesc;
typedef struct DObjRenderTypes      DObjRenderTypes;
typedef struct DObjDescArray        DObjDescArray;
typedef struct DObjDescContainer    DObjDescContainer;
typedef struct DObjDynamicStore     DObjDynamicStore;
typedef struct DObjDLLink           DObjDLLink;
typedef struct DObjMultiList        DObjMultiList;
typedef struct _AObj                AObj;
typedef union  AObjActor            AObjActor;
typedef struct _MObj                MObj;
typedef struct _MObjSub             MObjSub;
typedef struct _SObj                SObj;
typedef struct CameraVec            CameraVec;
typedef struct _Camera              Camera;
typedef struct _OMMtx               OMMtx;
typedef struct _Mtx6f               Mtx6f;
typedef struct _Mtx7f               Mtx7f;
typedef struct _OMThreadStackList   OMThreadStackList;
typedef struct _OMThreadStackNode   OMThreadStackNode;
typedef struct OMPerspective        OMPerspective;
typedef struct OMTranslate          OMTranslate;
typedef struct OMRotate             OMRotate;
typedef struct OMScale              OMScale;
typedef union  OMUserData           OMUserData;
typedef struct _OMSetup             OMSetup;

#endif