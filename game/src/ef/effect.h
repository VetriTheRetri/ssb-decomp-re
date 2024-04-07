#ifndef _EFFECT_H_
#define _EFFECT_H_

#include "eftypes.h"

#define efGetStruct(effect_gobj) \
((efStruct*)(effect_gobj)->user_data.p) \

#endif