#ifndef _EFFECT_H_
#define _EFFECT_H_

#include "eftypes.h"
#include "effunctions.h"

#define efGetStruct(effect_gobj) \
((EFStruct*)(effect_gobj)->user_data.p) \

extern void *sEFManagerTexturesFile1;
extern void *sEFManagerTexturesFile2;
extern void *sEFManagerTexturesFile3;

extern s32 gEFManagerParticleBankID;

#endif
