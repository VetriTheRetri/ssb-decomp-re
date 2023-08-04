#include "sys/trig_rand.h"

#include <macros.h>
#include <string.h>

#include <PR/gu.h>
#include <PR/os.h>
#include <PR/ultratypes.h>

// Linear Congruential Generator based on values from Microsoft Visual/Quick C/C++
s32 sLcgSeed     = 1;
s32 *sLcgSeedPtr = &sLcgSeed;

s32 D_8003B948                = 0;
s32 (*D_8003B94C)(u8 *, u8 *) = NULL;

f32 tanf(f32 angle) {
    return sinf(angle) / cosf(angle);
}

f32 atanf(f32 yDivX) {
    f32 yDivX2;
    f32 result;
    s32 phi_v0;

    if (yDivX == 0.0f) { return 0.0f; }

    phi_v0 = 1;

    if (yDivX > 1.0f) {
        yDivX = 1.0f / yDivX;
    } else if (yDivX < -1.0f) {
        yDivX  = 1.0f / yDivX;
        phi_v0 = 2;
    } else {
        phi_v0 = 0;
    }
    yDivX2 = yDivX * yDivX;
    result =
        (yDivX2
             / (yDivX2
                    / (yDivX2
                           / (yDivX2
                                  / (yDivX2 / ((yDivX2 / -0.10810675f) + -44.57192f) + -0.1619081f)
                              + -15.774018f)
                       + -0.55556977f)
                + -3.000003f)
         + 1)
        * yDivX;
    switch (phi_v0) {
        case 0: return result;
        case 1: return M_DTOR_F(90) - result;
        case 2: return M_DTOR_F(-90) - result;
#ifdef AVOID_UB
        default: return result;
#endif
    }
}

f32 atan2f(f32 y, f32 x) {
    f32 yDivX;
    s32 ySign;

    if (0.0f < x) { return atanf(y / x); }
    if (x < 0.0f) {
        yDivX = y / x;
        ySign = ((y < 0.0f) ? -1 : 1);

        return (M_PI_F - atanf(ABSF(yDivX))) * ySign;
    }
    if (y != 0.0f) {
        return ((y < 0.0f) ? -1 : 1) * (M_PI_F / 2.0f);
    } else {
        return 0.0f;
    }
}

f32 asinf(f32 x) {
    if (x > 0.99999f) { return M_PI_F / 2.0f; }
    if (x < -0.99999f) { return -(M_PI_F / 2.0f); }

    return atanf(x / sqrtf(1.0f - SQUARE(x)));
}

f32 acosf(f32 x) {
    if (x > 0.99999f) { return 0.0f; }
    if (x < -0.99999f) { return M_PI_F; }

    return (M_PI_F / 2.0f) - atanf(x / sqrtf(1.0f - SQUARE(x)));
}

f32 cscf(f32 x) {
    return 1.0f / sinf(x);
}

f32 secf(f32 x) {
    return 1.0f / cosf(x);
}

f32 cotf(f32 x) {
    return 1.0f / tanf(x);
}

void set_lcg_seed(s32 seed) {
    *sLcgSeedPtr = seed;
}

s32 get_lcg_seed(void) {
    return *sLcgSeedPtr;
}

/// An arg of NULL returns the seed ptr to the default seed
void set_lcg_seed_ptr(s32 *seedptr) {
    if (seedptr == NULL) {
        sLcgSeedPtr = &sLcgSeed;
    } else {
        sLcgSeedPtr = seedptr;
    }
}

u16 lbRandom_GetShort(void) {
    s32 step;

    step         = (*sLcgSeedPtr * 214013) + 2531011;
    *sLcgSeedPtr = step;

    return step >> 16;
}

// between 0..1
f32 lbRandom_GetFloat(void) {
    s32 step;

    step         = (*sLcgSeedPtr * 214013) + 2531011;
    *sLcgSeedPtr = step;

    return ((step >> 16) & 0xFFFF) / ((f32)65536.0f);
}

u32 lbRandom_GetIntRange(s32 range) {
    return lbRandom_GetShort() * range / 0x10000;
}

u8 lbRandom_GetTimeByte(void) {
    return osGetTime();
}

f32 lbRandom_GetTimeFloat(void) {
    return (osGetTime() & 0xFF) / 256.0f;
}

s32 lbRandom_GetTimeByteRange(s32 range) {
    return (f32)((s32)(osGetTime() & 0xFF) * range) / 256.0f;
}

void swap_mem(u8 *buf1, u8 *buf2, s32 len) {
    while (len--) {
        u8 temp = *buf1;

        *buf1++ = *buf2;
        *buf2++ = temp;
    }
}

void func_80018AB8(u8 *arg0, u8 *arg1) {
    u8 *s0;
    u8 *s1;

    s0 = arg0;
    s1 = arg1 + D_8003B948;

    while (arg0 < arg1) {
    restart:
        do {
            s0 += D_8003B948;
            if (s0 >= arg1) { break; }
        } while (D_8003B94C(s0, arg0) <= 0);

        do {
            s1 -= D_8003B948;
            if (arg0 >= s1) { break; }
        } while (D_8003B94C(s1, arg0) >= 0);

        if (s0 < s1) {
            swap_mem(s0, s1, D_8003B948);
            goto restart;
        }

        swap_mem(arg0, s1, D_8003B948);
        if (s1 - arg0 >= arg1 - s1) {
            func_80018AB8(s1 + D_8003B948, arg1);
            arg1 = s1 - D_8003B948;
            s0   = arg0;
        } else {
            func_80018AB8(arg0, s1 - D_8003B948);
            arg0 = s1 + D_8003B948;
            s0   = arg0;
            s1   = arg1 + D_8003B948;
        }
    }
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

void unref_80018C14(u8 *arg0, s32 arg1, s32 arg2, s32 (*arg3)(u8 *, u8 *));
#ifdef NON_MATCHING
// nonmatching: regalloc around the while(s0--)
void unref_80018C14(u8 *arg0, s32 arg1, s32 arg2, s32 (*arg3)(u8 *, u8 *)) {
    u8 *s2, *s1;
    s32 s0;
    s32 sp30;

    s2   = arg0;
    s1   = arg0 + arg2;
    sp30 = FALSE;

    if (arg1) {
        s0 = arg1 - 1;
        while (s0--) {
            if (arg3(s2, s1) > 0) {
                sp30 = TRUE;
                break;
            }
            s2 = s1;
            s1 += arg2;
        }
    }
    // L80018C8C
    if (sp30) {
        D_8003B948 = arg2;
        D_8003B94C = arg3;
        func_80018AB8(arg0, arg0 + ((arg1 - 1) * D_8003B948));
    }
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_06/unref_80018C14.s")
#endif

#ifdef NON_MATCHING
// nonmatching: too lazy to match; this seems to be doing something with pointers...
u32 unref_80018CEC(s32 arg0, u32 arg1, u32 arg2, s32 arg3, s32 (*arg4)(u32, u32, u32)) {
    u32 s6;
    u32 s1;
    u32 s0;
    u32 a2;
    s32 ret;

    s6 = arg1 + ((arg2 - 1) * arg3);
    while (s6 >= arg1) {
        s1 = arg2 >> 1;
        if (s1) {
            s0  = (arg2 & 1 ? s1 : s1 - 1) * arg3 + arg1;
            ret = arg4(arg0, s0, arg2);
            a2  = s1;
            if (ret == 0) { return s0; }
            // L80018D8C
            if (ret < 0) {
                s6 = s0 - arg3;
                if (arg2 & 1) {
                    a2 = s1;
                } else {
                    a2 = s1 - 1;
                }
            } else {
                // L80018DAC
                arg1 = s0 + arg3;
            }
        } else {
            // L80018DB4
            if (arg2 == 0) { break; }

            if (arg4(arg0, arg1, arg2)) {
                return 0;
            } else {
                return arg1; // s5
            }
        }
        // L80018DDC
    }
    // L80018DE8
    return 0;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_06/unref_80018CEC.s")
#endif

#pragma GCC diagnostic pop

u8 *unref_80018E1C(u8 *dst, u8 *src, u32 *numSrcs, u32 lenSrc, s32 (*checker)(u8 *, u8 *)) {
    u32 i;

    for (i = 0; i < *numSrcs; i++, src += lenSrc) {
        if (checker(dst, src) == 0) { return src; }
    }

    memcpy(dst, src, lenSrc);
    *numSrcs += 1;

    return src;
}
