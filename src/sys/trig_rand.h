#ifndef SYS_TRIG_RAND_H
#define SYS_TRIG_RAND_H

#include <PR/ultratypes.h>

extern f32 tanf(f32 angle);
extern f32 atanf(f32 yDivX);
extern f32 atan2f(f32 y, f32 x);
extern f32 asinf(f32 x);
extern f32 acosf(f32 x);
extern f32 cscf(f32 x);
extern f32 secf(f32 x);
extern f32 cotf(f32 x);
extern f32 __sinf(f32);
extern f32 __cosf(f32);

extern void set_lcg_seed_ptr(s32 *seedptr);
extern u16 mtTrigGetRandomUShort(void);
extern f32 mtTrigGetRandomFloat(void);
extern s32 mtTrigGetRandomIntRange(s32 range); // Does this actually return u32? Found a function that needs to cast this to s32, and assigning to a variable first would bump the stack
extern u8 mtTrigGetRandomTimeUChar(void);
extern f32 mtTrigGetRandomTimeFloat(void);
extern s32 mtTrigGetRandomTimeUCharRange(s32 range);

#endif /* SYS_TRIG_RAND_H */
