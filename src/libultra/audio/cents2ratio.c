#include "common.h"

#ifndef IDO_53
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/cents2ratio/alCents2Ratio.s")
#else
// This only matches when compiled with IDO 5.3. So just leave it commented out for now.

/*
 * alCents2Ratio()
 *
 * Calculates the pitch shift ratio from the number of cents according to
 *      ratio = 2^(cents/1200)
 *
 * This is accurate to within one cent for ratios up and octave and down
 * two ocataves.
 */

#include <libaudio.h>


f32 alCents2Ratio(s32 cents) 
{
    f32 x;
    f32 ratio = 1.0f;
    
    if (cents >= 0) {
        x = 1.00057779f;         /* 2^(1/1200) */
    } else {
        x = 0.9994225441f;       /* 2^(-1/1200) */
        cents = -cents;
    }
    
    while (cents) {
        if (cents & 1)
            ratio *= x;
        x *= x;
        cents >>= 1;
    }

    return ratio;
}
#endif