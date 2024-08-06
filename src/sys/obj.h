#ifndef _OBJ_H_
#define _OBJ_H_

#include <sys/objtypes.h>

// Function headers
#include <sys/objfunctions.h>

#define gcGetAnimFromFile(type, file, offset) \
((type) ((uintptr_t)(file) + (intptr_t)(offset)))

#define AObjAnimAdvance(script) \
((script)++)

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
