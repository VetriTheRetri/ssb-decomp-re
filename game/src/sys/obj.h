#ifndef _OBJ_H_
#define _OBJ_H_

#include "objtypes.h"
#include "objfunctions.h"

extern s32 D_8003B874;
extern OMPersp dOMPerspDefault;
extern OMOrtho dOMOrthoDefault;
extern CameraVec dCameraVecDefault;
extern OMTranslate dOMTranslateDefault;
extern OMRotate dOMRotateDefaultAXYZ;
extern OMRotate dOMRotateDefaultRPY;
extern OMScale dOMScaleDefault;

extern GObj *gOMObjCommonLinks[OM_COMMON_MAX_LINKS];
extern GObj *gOMObjCommonDLLinks[OM_COMMON_MAX_DL_LINKS];
extern GObj *D_80046A54; // Something to do with an initial object to be passed to a new GObjProcess
extern GObj *gOMObjCurrentRendering; // Is this exclusively a camera GObj?
extern GObj *D_80046A5C;
extern GObj *D_80046A60;
extern OSMesgQueue gOMMesgQueue;
extern OMGfxLink D_80046A88[64];

#define ACommandAdvance(acommand) \
((acommand)++)

#define DObjGetStruct(gobj) \
((DObj*)(gobj)->obj)

#define DObjGetChild(dobj) \
((DObj*)(dobj)->child)

#define SObjGetStruct(gobj) \
((SObj*)(gobj)->obj)

#define CameraGetStruct(gobj) \
((Camera*)(gobj)->obj)

#define SObjGetSprite(sobj) \
((Sprite*)&(sobj)->sprite)

#define SObjGetPrev(sobj) \
((SObj*)(sobj)->prev)

#define SObjGetNext(sobj) \
((SObj*)(sobj)->next)

#endif