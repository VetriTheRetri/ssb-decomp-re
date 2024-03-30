#ifndef _OBJ_H_
#define _OBJ_H_

#include "objtypes.h"

// Function headers
#include "objmanager.h"
#include "objdraw.h"

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