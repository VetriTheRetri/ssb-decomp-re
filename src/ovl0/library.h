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

#define LBPARTICLE_OPCODE_SETPOS        0x80        // Set particle position
#define LBPARTICLE_OPCODE_ADDPOS        0x88        // Add to particle position
#define LBPARTICLE_OPCODE_SETVEL        0x90        // Set particle velocity
#define LBPARTICLE_OPCODE_ADDVEL        0x98        // Add to particle velocity

#define LBPARTICLE_OPCODE_SETFLAG       0xA1        // Set particle flag, only 8-bit though...?
#define LBPARTICLE_OPCODE_SETGRAVITY    0xA2        // Set gravity and particle flag based on whether gravity is 0.0 or not
#define LBPARTICLE_OPCODE_SETFRICTION   0xA3        // Set friction and particle flag based on whether friction is 1.0 or not
#define LBPARTICLE_OPCODE_MAKESCRIPT    0xA4        // Make new particle from script with spawning particle as parent?'
#define LBPARTICLE_OPCODE_MAKEGENERATOR 0xA5        // Make new generator
#define LBPARTICLE_OPCODE_SETLIFERAND   0xA6        // Set fixed minimum lifetime + randomized maximum lifetime
#define LBPARTICLE_OPCODE_TRYDEADRAND   0xA7        // Check given % value against random chance, destroy if value >= random chance
#define LBPARTICLE_OPCODE_ADDVELRAND    0xA8        // Add base velocity * random velocity to each position axis
#define LBPARTICLE_OPCODE_SETVELANGLE   0xA9        // Set new angle for particle's velocity
#define LBPARTICLE_OPCODE_MAKERAND      0xAA        // Make particle from script between base ID and random ID
#define LBPARTICLE_OPCODE_MULVELUFORM   0xAB        // Multiply each velocity axis by one shared, uniform multiplier
#define LBPARTICLE_OPCODE_ENVCOLOR      0xAD        // Set LBPARTICLE_FLAG_ENVCOLOR flag
#define LBPARTICLE_OPCODE_NOMASKST      0xAE        // Clear LBPARTICLE_FLAG_MASKS and LBPARTICLE_FLAG_MASKT flags
#define LBPARTICLE_OPCODE_MASKS         0xAF        // Clear LBPARTICLE_FLAG_MASKT and set LBPARTICLE_FLAG_MASKS flags
#define LBPARTICLE_OPCODE_MASKT         0xB0        // Clear LBPARTICLE_FLAG_MASKS and set LBPARTICLE_FLAG_MASKT flags
#define LBPARTICLE_OPCODE_MASKST        0xB1        // Set LBPARTICLE_FLAG_MASKS and LBPARTICLE_FLAG_MASKT flags
#define LBPARTICLE_OPCODE_ALPHABLEND    0xB2        // Set LBPARTICLE_FLAG_ALPHABLEND flag
#define LBPARTICLE_OPCODE_NODITHER      0xB3        // Clear LBPARTICLE_FLAG_DITHER flag
#define LBPARTICLE_OPCODE_DITHER        0xB4        // Set LBPARTICLE_FLAG_DITHER flag
#define LBPARTICLE_OPCODE_NONOISE       0xB5        // Clear LBPARTICLE_FLAG_NOISE flag
#define LBPARTICLE_OPCODE_NOISE         0xB6        // Set LBPARTICLE_FLAG_NOISE flag
#define LBPARTICLE_OPCODE_SETDISTVEL    0xB7        // Set particle velocity to magnitude of distance between particle and target DObj?
#define LBPARTICLE_OPCODE_ADDDISTVELMAG 0xB8        // Add magnitude of distance between particle and target DObj to particle velocity?
#define LBPARTICLE_OPCODE_MAKEID        0xB9        // Make particle of script ID
#define LBPARTICLE_OPCODE_PRIMBLENDRAND 0xBA        // Set primitive blend color values to base * random
#define LBPARTICLE_OPCODE_ENVBLENDRAND  0xBB        // Set environment blend color values to base * random
#define LBPARTICLE_OPCODE_SETVELMAG     0xBD        // Set velocity to base value + random value in range, then clamp to current velocity's magnitude and apply
#define LBPARTICLE_OPCODE_MULVELAXIS    0xBE        // Multiply each velocity axis by a unique multiplier for each
#define LBPARTICLE_OPCODE_SETATTACHID   0xBF        // Set attach DObj array ID

#define LBPARTICLE_OPCODE_SETPRIMBLEND  0xC0        // Set primitive blend color and length; immediately set primitive color to blend color struct if length is 1
#define LBPARTICLE_OPCODE_SETENVBLEND   0xD0        // Set environment blend color and length; immediately set primitive color to blend color struct if length is 1

#define LBPARTICLE_OPCODE_SETLOOP       0xFA        // Initialize loop
#define LBPARTICLE_OPCODE_LOOP          0xFB        // Decrement loop and set bytecode cursor to loop start if not over yet
#define LBPARTICLE_OPCODE_SETRETURN     0xFC        // Initialize current bytecode position as anchor to jump back to
#define LBPARTICLE_OPCODE_RETURN        0xFD        // Return to bytecode position anchor
#define LBPARTICLE_OPCODE_DEAD          0xFE        // Destroy particle
#define LBPARTICLE_OPCODE_END           0xFF        // Same as LBPARTICLE_OPCODE_DEAD

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
