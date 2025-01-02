#include "common.h"
#include "utils.h"

#include <macros.h>
#include <string.h>

#include <PR/gu.h>
#include <PR/os.h>
#include <PR/ultratypes.h>
#include <PR/gu.h>

// Linear Congruential Generator based on values from Microsoft Visual/Quick C/C++
s32 sSYUtilsRandomSeed     = 1;
s32 *sSYUtilsRandomSeedPtr = &sSYUtilsRandomSeed;

s32 sSYUtilsQSortItemSize = 0;
s32 (*sSYUtilsQSortFuncCompare)(const void*, const void*) = NULL;

f32 syUtilsTan(f32 angle)
{
    return __sinf(angle) / __cosf(angle);
}

f32 syUtilsArcTan(f32 yDivX)
{
    f32 yDivX2;
    f32 result;
    s32 phi_v0;

    if (yDivX == 0.0F)
    {
        return 0.0F;
    }
    phi_v0 = 1;

    if (yDivX > 1.0F)
    {
        yDivX = 1.0F / yDivX;
    }
    else if (yDivX < -1.0F)
    {
        yDivX  = 1.0F / yDivX;
        phi_v0 = 2;
    }
    else phi_v0 = 0;
    
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

    switch (phi_v0)
    {
    case 0:
        return result;
    
    case 1:
        return M_DTOR_F(90) - result;
    
    case 2:
        return M_DTOR_F(-90) - result;

#ifdef AVOID_UB
    default:
        return result;
#endif
    }
}

f32 syUtilsArcTan2(f32 y, f32 x)
{
    f32 div;
    s32 sign;

    if (x > 0.0F)
    {
        return syUtilsArcTan(y / x);
    }
    else if (x < 0.0F)
    {
        div = y / x;
        sign = ((y < 0.0F) ? -1 : 1);

        return (M_PI_F - syUtilsArcTan(ABSF(div))) * sign;
    }
    else if (y != 0.0F)
    {
        return ((y < 0.0F) ? -1 : 1) * (M_PI_F / 2.0F);
    }
    else return 0.0F;
}

f32 syUtilsArcSin(f32 x)
{
    if (x > 0.99999F)
    {
        return M_PI_F / 2.0F;
    }
    else if (x < -0.99999F)
    {
        return -(M_PI_F / 2.0F);
    }
    else return syUtilsArcTan(x / sqrtf(1.0F - SQUARE(x)));
}

f32 syUtilsArcCos(f32 x)
{
    if (x > 0.99999F)
    {
        return 0.0F;
    }
    else if (x < -0.99999f)
    {
        return M_PI_F;
    }
    else return (M_PI_F / 2.0F) - syUtilsArcTan(x / sqrtf(1.0F - SQUARE(x)));
}

f32 syUtilsCsc(f32 x)
{
    return 1.0F / __sinf(x);
}

f32 syUtilsSec(f32 x)
{
    return 1.0F / __cosf(x);
}

f32 syUtilsCot(f32 x)
{
    return 1.0F / syUtilsTan(x);
}

void syUtilsSetRandomSeed(s32 seed)
{
    *sSYUtilsRandomSeedPtr = seed;
}

s32 syUtilsGetRandomSeed(void)
{
    return *sSYUtilsRandomSeedPtr;
}

/// An arg of NULL returns the seed ptr to the default seed
void syUtilsSetRandomSeedPtr(s32 *seedptr)
{
    if (seedptr == NULL)
    {
        sSYUtilsRandomSeedPtr = &sSYUtilsRandomSeed;
    }
    else sSYUtilsRandomSeedPtr = seedptr;
}

u16 syUtilsGetRandomUShort(void)
{
    s32 step = (*sSYUtilsRandomSeedPtr * 214013) + 2531011;

    *sSYUtilsRandomSeedPtr = step;

    return step >> 16;
}

// between 0..1
f32 syUtilsGetRandomFloat(void)
{
    s32 step = (*sSYUtilsRandomSeedPtr * 214013) + 2531011;
    *sSYUtilsRandomSeedPtr = step;

    return ((step >> 16) & 0xFFFF) / 65536.0F;
}

s32 syUtilsGetRandomIntRange(s32 range)
{
    return syUtilsGetRandomUShort() * range / 65536;
}

u8 syUtilsGetRandomTimeUChar(void)
{
    return osGetTime();
}

f32 syUtilsGetRandomTimeFloat(void)
{
    return (osGetTime() & 0xFF) / 256.0F;
}

s32 syUtilsGetRandomTimeUCharRange(s32 range)
{
    return ((s32)(osGetTime() & 0xFF) * range) / 256.0F;
}

void syUtilsSwapMem(u8 *buf1, u8 *buf2, s32 len)
{
    while (len--)
    {
        u8 temp = *buf1;

        *buf1++ = *buf2;
        *buf2++ = temp;
    }
}

void syUtilsQSortIntern(u8 *arg0, u8 *arg1)
{
    u8 *s0 = arg0;
    u8 *s1 = arg1 + sSYUtilsQSortItemSize;

    while (arg0 < arg1)
    {
    restart:
        do
        {
            s0 += sSYUtilsQSortItemSize;
            if (s0 >= arg1)
            {
                break;
            }
        }
        while (sSYUtilsQSortFuncCompare(s0, arg0) <= 0);

        do
        {
            s1 -= sSYUtilsQSortItemSize;
            if (arg0 >= s1)
            {
                break;
            }
        }
        while (sSYUtilsQSortFuncCompare(s1, arg0) >= 0);

        if (s0 < s1)
        {
            syUtilsSwapMem(s0, s1, sSYUtilsQSortItemSize);
            goto restart;
        }
        syUtilsSwapMem(arg0, s1, sSYUtilsQSortItemSize);

        if (s1 - arg0 >= arg1 - s1)
        {
            syUtilsQSortIntern(s1 + sSYUtilsQSortItemSize, arg1);
            arg1 = s1 - sSYUtilsQSortItemSize;
            s0   = arg0;
        }
        else
        {
            syUtilsQSortIntern(arg0, s1 - sSYUtilsQSortItemSize);
            arg0 = s1 + sSYUtilsQSortItemSize;
            s0   = arg0;
            s1   = arg1 + sSYUtilsQSortItemSize;
        }
    }
}

// 0x80018C14
void syUtilsQSort2(void *_base, u32 count, u32 itemSize, s32 (*compare)(const void*, const void*))
{
    u8 *curr, *next;
    s32 s0;
    s32 foundInversion;
    s32 nv = 1; // required to match

    u8* base = (u8*)_base;

    curr = base;
    next = base + itemSize;
    foundInversion = FALSE;

    if (count)
    {
        s0 = count - nv;

        do
        { // required to match
            while (s0--)
            {
                if (compare(curr, next) > 0)
                {
                    foundInversion = TRUE;
                    break;
                }
                curr = next;
                next += itemSize;
            }
        }
        while (FALSE);
    }

    if (foundInversion)
    {
        sSYUtilsQSortItemSize = itemSize;
        sSYUtilsQSortFuncCompare = compare;
        syUtilsQSortIntern(base, base + ((count - 1) * sSYUtilsQSortItemSize));
    }
}

// 0x80018CEC
u8* find(u8 *value, u8 *array, u32 count, s32 itemSize, s32 (*compare)(u8*, u8*))
{
    s32 newvar = (count - 1) * itemSize;
    u8* low = array;
    u8* high = array + newvar;

    while (low <= high)
    {
        u32 midIndex = count >> 1;
        u32 parity = count & 1;

        if (midIndex != 0)
        {
            u8 *mid = low + (parity ? midIndex : midIndex - 1) * itemSize;
            s32 ret = compare(value, mid);

            if (ret == 0)
            {
                return mid;
            }
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
            {
                break;
            }
            return compare(value, low) ? NULL : low;
        }
    }
    return NULL;
}

u8* unref_80018E1C(u8 *dst, u8 *src, u32 *srcs_num, u32 src_len, s32 (*checker)(u8*, u8*))
{
    u32 i;

    for (i = 0; i < *srcs_num; i++, src += src_len)
    {
        if (checker(dst, src) == 0)
        {
            return src;
        }
    }
    memcpy(dst, src, src_len);

    *srcs_num += 1;

    return src;
}
