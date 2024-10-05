#include "common.h"
#include "trig_rand.h"

#include <macros.h>
#include <string.h>

#include <PR/gu.h>
#include <PR/os.h>
#include <PR/ultratypes.h>
#include <PR/gu.h>

// Linear Congruential Generator based on values from Microsoft Visual/Quick C/C++
s32 sLcgSeed     = 1;
s32 *sLcgSeedPtr = &sLcgSeed;

s32 qsortItemSize                = 0;
s32 (*qsortCompareFunc)(const void*, const void*) = NULL;

f32 tanf(f32 angle) {
    return __sinf(angle) / __cosf(angle);
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
    return 1.0f / __sinf(x);
}

f32 secf(f32 x) {
    return 1.0f / __cosf(x);
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

u16 mtTrigGetRandomUShort(void) {
    s32 step;

    step         = (*sLcgSeedPtr * 214013) + 2531011;
    *sLcgSeedPtr = step;

    return step >> 16;
}

// between 0..1
f32 mtTrigGetRandomFloat(void) {
    s32 step;

    step         = (*sLcgSeedPtr * 214013) + 2531011;
    *sLcgSeedPtr = step;

    return ((step >> 16) & 0xFFFF) / ((f32)65536.0f);
}

s32 mtTrigGetRandomIntRange(s32 range) {
    return mtTrigGetRandomUShort() * range / 0x10000;
}

u8 mtTrigGetRandomTimeUChar(void) {
    return osGetTime();
}

f32 mtTrigGetRandomTimeFloat(void) {
    return (osGetTime() & 0xFF) / 256.0f;
}

s32 mtTrigGetRandomTimeUCharRange(s32 range) {
    return (f32)((s32)(osGetTime() & 0xFF) * range) / 256.0f;
}

void swap_mem(u8 *buf1, u8 *buf2, s32 len) {
    while (len--) {
        u8 temp = *buf1;

        *buf1++ = *buf2;
        *buf2++ = temp;
    }
}

void qsortInternal(u8 *arg0, u8 *arg1) {
    u8 *s0;
    u8 *s1;

    s0 = arg0;
    s1 = arg1 + qsortItemSize;

    while (arg0 < arg1) {
    restart:
        do {
            s0 += qsortItemSize;
            if (s0 >= arg1) { break; }
        } while (qsortCompareFunc(s0, arg0) <= 0);

        do {
            s1 -= qsortItemSize;
            if (arg0 >= s1) { break; }
        } while (qsortCompareFunc(s1, arg0) >= 0);

        if (s0 < s1) {
            swap_mem(s0, s1, qsortItemSize);
            goto restart;
        }

        swap_mem(arg0, s1, qsortItemSize);
        if (s1 - arg0 >= arg1 - s1) {
            qsortInternal(s1 + qsortItemSize, arg1);
            arg1 = s1 - qsortItemSize;
            s0   = arg0;
        } else {
            qsortInternal(arg0, s1 - qsortItemSize);
            arg0 = s1 + qsortItemSize;
            s0   = arg0;
            s1   = arg1 + qsortItemSize;
        }
    }
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// 0x80018C14
void qsort2(void* _base, u32 count, u32 itemSize, s32 (*compare)(const void*, const void*)) {
    u8 *curr, *next;
    s32 s0;
    s32 foundInversion;
    s32 nv = 1; // required to match

    u8* base = (u8*) _base;

    curr = base;
    next = base + itemSize;
    foundInversion = FALSE;

    if (count)
    {
        s0 = count - nv;
        do { // required to match
            while (s0--) {
                if (compare(curr, next) > 0) {
                    foundInversion = TRUE;
                    break;
                }
                curr = next;
                next += itemSize;
            }
        } while (FALSE);
    }

    if (foundInversion)
    {
        qsortItemSize = itemSize;
        qsortCompareFunc = compare;
        qsortInternal(base, base + ((count - 1) * qsortItemSize));
    }
}

// 0x80018CEC
u8* find(u8* value, u8* array, u32 count, s32 itemSize, s32 (*compare)(u8*, u8*)) {
    s32 newvar = (count - 1) * itemSize;
    u8* low = array;
    u8* high = array + newvar;

    while (low <= high)
    {
        u32 midIndex = count >> 1;
        u32 parity = count & 1;

        if (midIndex != 0)
        {
            u8* mid = low + (parity ? midIndex : midIndex - 1) * itemSize;
            s32 ret = compare(value, mid);

            if (ret == 0)
                return mid;
            else if (ret < 0)
            {
                high = mid - itemSize;
                count = parity ? midIndex : midIndex - 1;
            }
            else
            {
                low = mid + itemSize;
                count = midIndex;
            }
        }
        else
        {
            if (count == 0)
                break;

            return compare(value, low) ? NULL : low;
        }
    }
    return NULL;
}

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
