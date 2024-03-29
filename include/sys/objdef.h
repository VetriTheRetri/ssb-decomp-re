#ifndef _OBJDEF_H_
#define _OBJDEF_H_

typedef enum GObjKind
{
	GObj_Kind_Fighter = 1000,	  // 1000
	GObj_Kind_FighterParts,		  // 1001
	GObj_Kind_MainCamera = 1002,  // 1002
	GObj_Kind_WallpaperCamera,	  // 1003 - Used to render stage backgrounds?
	GObj_Kind_ScissorCamera,	  // 1004 - Camera scissor?
	GObj_Kind_UnkCamera1,		  // 1005 - ???
	GObj_Kind_UnkCamera2,		  // 1006 - ???
	GObj_Kind_UnkCamera3,		  // 1007
	GObj_Kind_GrWallpaper = 1008, // 1008 - Stage background?
	GObj_Kind_GrRender,			  // 1009 - Stage renderer?
	GObj_Kind_Ground,			  // 1010
	GObj_Kind_Effect,			  // 1011
	GObj_Kind_Weapon,			  // 1012
	GObj_Kind_Item,				  // 1013
	GObj_Kind_Interface = 1016,	  // 1016
	GObj_Kind_Rumble,			  // 1017
	GObj_Kind_Publicity,		  // 1018 - Audience reaction
	GObj_Kind_PauseMenu = 1019,	  // 1019
	GObj_Kind_BossWallpaper = 1023

} GObjKind;

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

typedef enum GObjLinkIndex
{
	GObj_LinkID_02 = 2, // 2

	// GObj link indexes with ID 3
	GObj_LinkID_Fighter = 3,	 // 3
	GObj_LinkID_CreditsName = 3, // 3

	// GObj link indexes with ID 4
	GObj_LinkID_Item = 4,		// 4
	GObj_LinkID_CreditsJob = 4, // 4

	GObj_LinkID_Weapon,			 // 5
	GObj_LinkID_Effect,			 // 6
	GObj_LinkID_Highlight = 9,	 // 9 - Credits shootout rectangles that zoom in on crosshair
	GObj_LinkID_Interface = 11,	 // 11
	GObj_LinkID_Rumble = 13,	 // 13
	GObj_LinkID_Background = 13, // 13 // Same index as rumble???
	GObj_LinkID_PauseMenu		 // 14

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
	OMMtx_Transform_PerspFastF = 3,	 // Camera Fast FP perspective projection
	OMMtx_Transform_PerspF,			 // Camera FP perspective projection
	OMMtx_Transform_Ortho,			 // Camera Orthographic projection
	OMMtx_Transform_Tra = 18,		 // DObj Translate
	OMMtx_Transform_RotD,			 // DObj Rotate degrees
	OMMtx_Transform_TraRotD,		 // DObj Translate + rotate degrees
	OMMtx_Transform_RotRpyD,		 // DObj Rotate Roll/Pitch/Yaw degrees
	OMMtx_Transform_TraRotRpyD,		 // DObj Translate + rotate Roll/Pitch/Yaw degrees
	OMMtx_Transform_RotR,			 // DObj Rotate radians (?)
	OMMtx_Transform_TraRotR,		 // DObj Translate + rotate radians
	OMMtx_Transform_TraRotRSca,		 // DObj Translate + rotate radians + scale
	OMMtx_Transform_RotRpyR,		 // DObj Rotate Roll/Pitch/Yaw radians
	OMMtx_Transform_TraRotRpyR,		 // DObj Translate + rotate Roll/Pitch/Yaw radians
	OMMtx_Transform_TraRotRpyRSca,	 // DObj Translate + rotate Roll/Pitch/Yaw radians + rowscale (?)
	OMMtx_Transform_RotPyrR,		 // DObj Rotate Pitch/Yaw/Roll radians (?)
	OMMtx_Transform_TraRotPyrR,		 // DObj Translate + rotate Pitch/Yaw/Roll radians (?)
	OMMtx_Transform_TraRotPyrRSca,	 // DObj Translate + rotate Pitch/Yaw/Roll radians (?) + scale
	OMMtx_Transform_Sca,			 // DObj Scale
	OMMtx_Transform_VecTra = 56,	 // Standalone (?) vector translate
	OMMtx_Transform_VecRotR,		 // Standalone (?) vector rotate radians
	OMMtx_Transform_VecRotRpyR,		 // Standalone (?) vector rotate Roll/Pitch/Yaw radians
	OMMtx_Transform_VecSca,			 // Standalone (?) vector scale
	OMMtx_Transform_VecTraRotR,		 // Standalone (?) vector translate + rotate radians
	OMMtx_Transform_VecTraRotRSca,	 // Standalone (?) vector translate + rotate radians + rowscale (?)
	OMMtx_Transform_VecTraRotRpyR,	 // Standalone (?) vector translate + rotate Roll/Pitch/Yaw radians
	OMMtx_Transform_VecTraRotRpyRSca // Standalone (?) vector translate + rotate Roll/Pitch/Yaw radians + rowscale (?)

} OMMtxTransformKind;

typedef union ATrack ATrack;
typedef union ACommand ACommand;
typedef struct GObj GObj;
typedef struct GObjLink GObjLink;
typedef struct _GObjProcess GObjProcess;
typedef struct _GObjThread GObjThread;
typedef struct _DObj DObj; // Some structs are temporarily prefixed with underscore to avoid conflict with types in om.h
typedef struct DObjDesc DObjDesc;
typedef struct DObjTransformTypes DObjTransformTypes;
typedef struct DObjDescArray DObjDescArray;
typedef struct DObjDescContainer DObjDescContainer;
typedef struct DObjDynamicStore DObjDynamicStore;
typedef struct DObjDLLink DObjDLLink;
typedef struct DObjDistDL DObjDistDL;
typedef struct DObjDistDLLink DObjDistDLLink;
typedef struct DObjMultiList DObjMultiList;
typedef struct _AObj AObj;
typedef union AObjActor AObjActor;
typedef struct _MObj MObj;
typedef struct _MObjSub MObjSub;
typedef struct _SObj SObj;
typedef struct CameraVec CameraVec;
typedef struct _Camera Camera;
typedef struct _OMMtx OMMtx;
typedef struct OMGfxLink OMGfxLink;
typedef struct _OMThreadStackList OMThreadStackList;
typedef struct _OMThreadStackNode OMThreadStackNode;
typedef struct OMPersp OMPersp;
typedef struct OMFrustum OMFrustum;
typedef struct OMOrtho OMOrtho;
typedef struct OMTranslate OMTranslate;
typedef struct OMRotate OMRotate;
typedef struct OMScale OMScale;
typedef union OMUserData OMUserData;
typedef struct _OMSetup OMSetup;

#endif