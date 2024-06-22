#ifndef _EFFECT_H_
#define _EFFECT_H_

#include "eftypes.h"
#include "effunctions.h"

#define efGetStruct(effect_gobj) \
((efStruct*)(effect_gobj)->user_data.p) \

extern void *sEFTexturesFile1;
extern void *sEFTexturesFile2;
extern void *sEFTexturesFile3;

#endif
