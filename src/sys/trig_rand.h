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

extern void set_lcg_seed_ptr(s32 *seedptr);
extern u16 lbRandom_GetShort(void);
extern f32 lbRandom_GetFloat(void);
extern u32 lbRandom_GetIntRange(s32 range); // Does this actually return u32? Found a function that needs to cast this to s32, and assigning to a variable first would bump the stack
extern u8 lbRandom_GetTimeByte(void);
extern f32 lbRandom_GetTimeFloat(void);
extern s32 lbRandom_GetTimeByteRange(s32 range);

#endif /* SYS_TRIG_RAND_H */
