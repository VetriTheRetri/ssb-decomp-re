#ifndef _EFFECT_H_
#define _EFFECT_H_

#include "eftypes.h"
#include "effunctions.h"

#define efGetStruct(effect_gobj) \
((efStruct*)(effect_gobj)->user_data.p) \

#endif
