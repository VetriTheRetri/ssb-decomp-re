#ifndef _LIBRARY_H_
#define _LIBRARY_H_

#include "lbfunctions.h"

#define LBPARTICLE_BANKS_NUM_MAX        8
#define LBPARTICLE_ATTACH_DOBJ_NUM_MAX  8

// Flag bitfield is 16-bits; 1 bit used for toggling attach DObj, 3-bits for attach DObj ID and the remaining is for other flags

#define LBPARTICLE_FLAG_GRAVITY         0x1         // Particle has gravity?
#define LBPARTICLE_FLAG_FRICTION        0x2         // Particle has friction?
#define LBPARTICLE_FLAG_0x4             0x4         // Some generator lifetime thing
#define LBPARTICLE_FLAG_MASKS           0x20        // Use S-Axis mask
#define LBPARTICLE_FLAG_MASKT           0x40        // Use T-Axis mask
#define LBPARTICLE_FLAG_ENVCOLOR        0x80        // Use environment color
#define LBPARTICLE_FLAG_NOISE           0x100       // Use noise as source in color combiner?
#define LBPARTICLE_FLAG_ALPHABLEND      0x200       // Use environment color's alpha value for blending
#define LBPARTICLE_FLAG_DITHER          0x400       // Use dithering
#define LBPARTICLE_FLAG_PAUSE           0x800       // Skip parsing this particle's bytecode?
#define LBPARTICLE_FLAG_ATTACH          0x8000      // Particle is fixed to a DObj?

#define LBPARTICLE_SET_ATTACH_ID(id)    (LBPARTICLE_FLAG_ATTACH | ((id) << 0xC))
#define LBPARTICLE_GET_ATTACH_ID(id)    (((id) & 0x7000) >> 0xC)

#define lbGetSinCosUShort(sin, cos, angle, id)        \
{                                                     \
    id = SINTABLE_RAD_TO_ID(angle) & 0xFFF;           \
                                                      \
    sin = gSinTable[id & SINTABLE_MASK_ID];           \
                                                      \
    if (id & 0x800)                                   \
    {                                                 \
        sin = -sin;                                   \
    }                                                 \
    id += 0x400;                                      \
                                                      \
    cos = gSinTable[id & SINTABLE_MASK_ID];           \
                                                      \
    if (id & 0x800)                                   \
    {                                                 \
        cos = -cos;                                   \
    }                                                 \
}

#endif
