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
typedef f32 Mtx44f[4][4]; // Same thing as above but I'm terrible at matrices and I need it to be extra specific

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

typedef  s8  sb8;
typedef s16 sb16;
typedef s32 bool32;

typedef u8   ub8;
typedef u16 ub16;
typedef u32 ub32;

// Gfx color types

enum GfxColorIndex
{
    GfxColorIndexR,
    GfxColorIndexG,
    GfxColorIndexB,
    GfxColorIndexA
};

typedef struct GfxColor
{
    u8 r, g, b;

} GfxColor;

typedef struct GfxColorAlpha
{
    u8 r, g, b, a;

} GfxColorAlpha;

typedef struct GfxRectangle
{
    s32 ulx, uly;
    s32 lrx, lry;

} GfxRectangle;

#endif /* SSB64_TYPES_H */
