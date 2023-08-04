#ifndef SSB64_TYPES_H
#define SSB64_TYPES_H

#include <PR/ultratypes.h>

// When building with IDO, define some stdint types
#ifdef __sgi
typedef u32 uintptr_t;
typedef s32 intptr_t;
#else
#include <stdint.h>
#endif /* __sgi */

// until there's a better place to put the math types...
typedef f32 Mtx4f[4][4];

typedef struct _Vec3h
{
    s16 x, y, z;

} Vec3h;

typedef struct Vec3i
{
    s32 x, y, z;

} Vec3i;

typedef struct Vec3f
{
    f32 x, y, z;

} Vec3f;

typedef struct _Vec2b
{
    s8 x, y;

} Vec2b;

typedef struct Vec2f 
{
    f32 x, y;

} Vec2f;

typedef struct _Vec2h 
{
    s16 x, y;

} Vec2h;

typedef struct _Vec2i
{
    s32 x, y;

} Vec2i;



// boolean quick types

typedef s32 bool32;

#endif /* SSB64_TYPES_H */
