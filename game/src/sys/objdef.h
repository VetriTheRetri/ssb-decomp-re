#ifndef _OBJDEF_H_
#define _OBJDEF_H_

typedef enum omGObjKind
{
    omGObj_Kind_Fighter = 1000,     // 1000
    omGObj_Kind_FighterParts,       // 1001
    omGObj_Kind_MainCamera = 1002,  // 1002
    omGObj_Kind_WallpaperCamera,    // 1003 - Used to render stage backgrounds?
    omGObj_Kind_ScissorCamera,      // 1004 - Camera scissor?
    omGObj_Kind_UnkCamera1,         // 1005 - ???
    omGObj_Kind_UnkCamera2,         // 1006 - ???
    omGObj_Kind_UnkCamera3,         // 1007
    omGObj_Kind_GrWallpaper = 1008, // 1008 - Stage background?
    omGObj_Kind_GrRender,           // 1009 - Stage renderer?
    omGObj_Kind_Ground,             // 1010
    omGObj_Kind_Effect,             // 1011
    omGObj_Kind_Weapon,             // 1012
    omGObj_Kind_Item,               // 1013
    omGObj_Kind_Interface = 1016,   // 1016
    omGObj_Kind_Rumble,             // 1017
    omGObj_Kind_Publicity,          // 1018 - Audience reaction
    omGObj_Kind_PauseMenu = 1019,   // 1019
    omGObj_Kind_BossWallpaper = 1023

} omGObjKind;

typedef enum omGObjLinkIndex
{
    omGObj_LinkIndex_02 = 2,          // 2

    // GObj link indexes with ID 3
    omGObj_LinkIndex_Fighter = 3,     // 3
    omGObj_LinkIndex_CreditsName = 3,  // 3

    // GObj link indexes with ID 4
    omGObj_LinkIndex_Item = 4,        // 4
    omGObj_LinkIndex_CreditsJob = 4,

    omGObj_LinkIndex_Weapon,          // 5
    omGObj_LinkIndex_Effect,          // 6
    omGObj_LinkIndex_Highlight = 9,   // 9 - Credits shootout rectangles that zoom in on crosshair
    omGObj_LinkIndex_Interface = 11,  // 11
    omGObj_LinkIndex_Rumble = 13,     // 13
    omGObj_LinkIndex_Background = 13, // 13 // Same index as rumble???
    omGObj_LinkIndex_PauseMenu        // 14

} omGObjLinkIndex;

typedef union  ATrack               ATrack;
typedef union  ACommand             ACommand;
typedef struct GObj                 GObj;
typedef struct _GObjProcess         GObjProcess;
typedef struct _DObj                DObj;           // Some structs are temporarily prefixed with underscore to avoid conflict with types in om.h
typedef struct DObjDesc             DObjDesc;
typedef struct DObjRenderTypes      DObjRenderTypes;
typedef struct DObjDescArray        DObjDescArray;
typedef struct DObjDescContainer    DObjDescContainer;
typedef struct DObjMultiList        DObjMultiList;
typedef struct _AObj                AObj;
typedef struct _MObj                MObj;
typedef struct _MObjSub             MObjSub;
typedef struct _SObj                SObj;
typedef struct _OMMtx               OMMtx;
typedef struct _Mtx6f               Mtx6f;
typedef struct _Mtx7f               Mtx7f;
typedef struct OMPerspective        OMPerspective;
typedef struct OMMtxVec3            OMMtxVec3;
typedef struct OMMtxVec4            OMMtxVec4;
typedef struct OMCameraVec          OMCameraVec;
typedef struct _OMCamera            OMCamera;
typedef union  OMUserData           OMUserData;

#endif