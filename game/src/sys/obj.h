#ifndef _OBJ_H_
#define _OBJ_H_

#include "objtypes.h"
#include "objfunctions.h"

#define DOBJ_PARENT_NULL ((void*)1)

#define ACommandAdvance(acommand) \
((acommand)++) \

#define DObjGetStruct(gobj) \
((DObj*)(gobj)->obj) \

#define SObjGetStruct(gobj) \
((SObj*)(gobj)->obj) \

#define CameraGetStruct(gobj) \
((Camera*)(gobj)->obj) \

#define SObjGetSprite(sobj) \
((Sprite*)&(sobj)->sprite) \

#define SObjGetPrev(sobj) \
((SObj*)(sobj)->prev) \

#define SObjGetNext(sobj) \
((SObj*)(sobj)->next) \

#endif