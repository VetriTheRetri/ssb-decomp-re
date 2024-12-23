#include "common.h"
#include "interpolation.h"

// Biquadrate; easier to make a symbol than quartic (QT looks familiar to me)
#define BIQUAD(x) ((x) * (x) * (x) * (x))

// Catmull-Rom cubic spline
#ifdef NON_MATCHING
void syInterpCatromCubicSpline(Vec3f *out, Vec3f *ctrl, f32 s, f32 t)
{
    #define BASIS1(t, s) ((-CUBE((t)) + 2.0F * SQUARE((t)) - (t)) * (s))
    #define BASIS2(t, s) ((2.0F - (s)) * CUBE((t)) + ((s)-3.0F) * SQUARE((t)) + 1.0F)
    #define BASIS3(t, s) (((s)-2.0F) * CUBE((t)) + (3.0F - 2.0F * (s)) * SQUARE((t)) + (s) * (t))
    #define BASIS4(t, s) ((CUBE((t)) - SQUARE((t))) * (s))

    f32 b1, b2, b3, b4;

    b1 = BASIS1(t, s);
    b2 = BASIS2(t, s);
    b3 = BASIS3(t, s);
    b4 = BASIS4(t, s);

    out->x = ctrl[0].x * BASIS1(t, s) + ctrl[1].x * BASIS2(t, s) + ctrl[2].x * BASIS3(t, s)
           + ctrl[3].x * BASIS4(t, s);

    out->y = ctrl[0].y * BASIS1(t, s) + ctrl[1].y * BASIS2(t, s) + ctrl[2].y * BASIS3(t, s)
           + ctrl[3].y * BASIS4(t, s);

    out->z = ctrl[0].z * BASIS1(t, s) + ctrl[1].z * BASIS2(t, s) + ctrl[2].z * BASIS3(t, s)
           + ctrl[3].z * BASIS4(t, s);

    #undef BASIS1
    #undef BASIS2
    #undef BASIS3
    #undef BASIS4
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/sys/interpolation/syInterpCatromCubicSpline.s")
#endif

// quadratic spline?
void syInterpQuadSpline(Vec3f *out, Vec3f *ctrl, f32 s, f32 t)
{
    f32 tSq;
    f32 b2;
    f32 b3;
    f32 b1;
    f32 temp;
    f32 other;

    tSq = t * t;
    b1 = ((((-3.0F) * tSq) + (4.0F * t)) - 1.0F) * s;
    temp = s - 3.0F;
    other = s;
    b2 = (((2.0F - other) * 3.0F) * tSq) + ((2.0F * temp) * t);
    temp = 3.0F - (2.0F * other);
    b3 = ((((other - 2.0F) * 3.0F) * tSq) + ((2.0F * temp) * t)) + other;
    other = ((3.0F * tSq) - (2.0F * t)) * other;

    out->x = (ctrl[0].x * b1) + (ctrl[1].x * b2) + (ctrl[2].x * b3) + (ctrl[3].x * other);
    out->y = (ctrl[0].y * b1) + (ctrl[1].y * b2) + (ctrl[2].y * b3) + (ctrl[3].y * other);
    out->z = (ctrl[0].z * b1) + (ctrl[1].z * b2) + (ctrl[2].z * b3) + (ctrl[3].z * other);
}

// some sort of bezier interpolation
#ifdef NON_MATCHING
#define BASIS1(t) ((1.0F / 6.0F) * (CUBE(1.0F - t)))
#define BASIS2(t) ((1.0F / 6.0F) * (((3.0F * CUBE(t)) - (6.0F * SQUARE(t))) + 4.0F))
#define BASIS3(t) ((1.0F / 6.0F) * ((((SQUARE(t) - CUBE(t)) + t) * 3.0F) + 1.0F))
#define BASIS4(t) ((1.0F / 6.0F) * CUBE(t))

void syInterpBezier3Points(Vec3f *out, Vec3f *ctrl, f32 t)
{
    f32 b1, b2, b3, b4;

    b4 = BASIS4(t);
    b1 = BASIS1(t);
    b2 = BASIS2(t);
    b3 = BASIS3(t);

    out->x = ctrl[0].x * b1 + ctrl[1].x * b2 + ctrl[2].x * b3 + ctrl[3].x * b4;
    out->y = ctrl[0].y * b1 + ctrl[1].y * b2 + ctrl[2].y * b3 + ctrl[3].y * b4;
    out->z = ctrl[0].z * b1 + ctrl[1].z * b2 + ctrl[2].z * b3 + ctrl[3].z * b4;
}

#undef BASIS1
#undef BASIS2
#undef BASIS3
#undef BASIS4
#else
#pragma GLOBAL_ASM("asm/nonmatchings/sys/interpolation/syInterpBezier3Points.s")
#endif

// quadratic bezier with four control points (not three?)
void syInterpBezier4Points(Vec3f* out, Vec3f* ctrl, f32 t)
{
    UNUSED s32 pad[2];
    f32 tSq;
    f32 mt;
    f32 b2;
    f32 b3;
    f32 b4;
    f32 b1;

    tSq = t * t;
    b1 = 1.0F - t;
    b4 = -0.5f * b1 * b1;
    mt = ((3.0F * tSq) - (4.0F * t)) * 0.5f;
    b2 = ((-3.0F * tSq) + (2.0F * t) + 1.0F) * 0.5f;
    b3 = 0.5f * tSq;

    out->x = (ctrl[0].x * b4) + (ctrl[1].x * mt) + (ctrl[2].x * b2) + (ctrl[3].x * b3);
    out->y = (ctrl[0].y * b4) + (ctrl[1].y * mt) + (ctrl[2].y * b2) + (ctrl[3].y * b3);
    out->z = (ctrl[0].z * b4) + (ctrl[1].z * mt) + (ctrl[2].z * b2) + (ctrl[3].z * b3);
}

// cubic bezier with scale factor of 3?
#ifdef NON_MATCHING
void syInterpCubicBezierScale(Vec3f *out, Vec3f *ctrl, f32 t)
{
    f32 mt;
    f32 tSq;
    f32 b1;
    f32 b2;
    f32 b3;
    f32 b4;

    tSq = SQUARE(t);
    mt  = 1.0F - t;

    b4 = CUBE(t);
    b1 = CUBE(mt);
    b2 = 3.0F * t * CUBE(mt);
    b3 = 3.0F * tSq * mt;

    out->x = (ctrl[3].x * b4) + ((ctrl[0].x * b1) + (ctrl[1].x * b2) + (ctrl[2].x * b3));
    out->y = (ctrl[3].y * b4) + ((ctrl[0].y * b1) + (ctrl[1].y * b2) + (ctrl[2].y * b3));
    out->z = (ctrl[3].z * b4) + ((ctrl[0].z * b1) + (ctrl[1].z * b2) + (ctrl[2].z * b3));
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/sys/interpolation/syInterpCubicBezierScale.s")
#endif

// four point quadratic bezier with scale of 3?
void syInterpQuadBezier4Points(Vec3f* out, Vec3f* ctrl, f32 t)
{
    f32 mt;
    f32 b1;
    f32 b2;
    f32 b3;
    f32 b4;

    mt = t - 1.0F;
    b4 = -3.0F * mt * mt;
    b1 = SQUARE(t);
    b1 = 3.0F * b1;
    b2 = ((1.0F - (4.0F * t)) + b1) * 3.0F;
    b3 = ((2.0F * t) - b1) * 3.0F;

    out->x = (ctrl[0].x * b4) + (ctrl[1].x * b2) + (ctrl[2].x * b3) + (ctrl[3].x * b1);
    out->y = (ctrl[0].y * b4) + (ctrl[1].y * b2) + (ctrl[2].y * b3) + (ctrl[3].y * b1);
    out->z = (ctrl[0].z * b4) + (ctrl[1].z * b2) + (ctrl[2].z * b3) + (ctrl[3].z * b1);
}


// arg1->points_num is total frames? elapsed frames?
// delta time cubic interpolation?
void syInterpCubicSplineTimeFrac(Vec3f *out, SYInterpDesc *desc, f32 t)
{
    s16 target_frame; // f10
    Vec3f *point;

    if ((t < 0.0F) || (t > 1.0F))
    {
        return;
    }
    else if (t < 1.0F)
    {
        // convert interval from [0,1] to [0,totalFrames]
        t *= (f32) (desc->points_num - 1);

        target_frame = t;

        // get only the rounding difference for interpolation?
        t -= target_frame;

        switch (desc->kind)
        {
        case nSYInterpKindLinear:
            point = &desc->points[target_frame];
            out->x = (point[1].x - point[0].x) * t + point[0].x;
            out->y = (point[1].y - point[0].y) * t + point[0].y;
            out->z = (point[1].z - point[0].z) * t + point[0].z;
            break;

        case nSYInterpKindBezierS3:
            syInterpCubicBezierScale(out, desc->points + target_frame * 3, t);
            break;
                
        case nSYInterpKindBezier:
            syInterpBezier3Points(out, desc->points + target_frame, t);
            break;

        case nSYInterpKindCatrom:
            syInterpCatromCubicSpline(out, desc->points + target_frame, desc->unk04, t);
            break;
        }
    }
    else
    {
        target_frame = desc->points_num - 1;

        switch (desc->kind)
        {
        case nSYInterpKindLinear:
            point  = &desc->points[target_frame];
            *out = *point;
            break;

        case nSYInterpKindBezierS3:
            point  = &desc->points[target_frame * 3];
            *out = *point;
            break;
                
        case nSYInterpKindBezier:
            syInterpBezier3Points(out, desc->points + (target_frame - 1), 1.0F);
            break;
        
        case nSYInterpKindCatrom:
            point  = &desc->points[target_frame + 1];
            *out = *point;
            break;
        }
    }
}

// quadratic interpolation
void func_8001E020(Vec3f *out, SYInterpDesc *desc, f32 t)
{
    s16 target_frame;
    f32 t_origin;
    Vec3f *point;

    if ((t < 0.0F) || (t > 1.0F))
    {
        return;
    }
    else
    {
        t_origin = t;
        t *= (f32) (desc->points_num - 1);

        target_frame = t;
        t = t - (f32) target_frame;

        switch (desc->kind)
        {
        case nSYInterpKindLinear:
            if (t_origin == 1.0F)
            {
                target_frame--;
            }
            point    = desc->points + target_frame;
            out->x = point[1].x - point[0].x;
            out->y = point[1].y - point[0].y;
            out->z = point[1].z - point[0].z;
            break;
           
        case nSYInterpKindBezierS3:
            syInterpQuadBezier4Points(out, desc->points + target_frame * 3, t);
            break;
            
        case nSYInterpKindBezier: syInterpBezier4Points(out, desc->points + target_frame, t); break;
        case nSYInterpKindCatrom:
            syInterpQuadSpline(out, desc->points + target_frame, desc->unk04, t);
            break;
        }
    }
}

// sqrt of quartic polynomial of x?
f32 func_8001E1A8(f32 x, f32 *cof)
{
    f32 sum = cof[0] * BIQUAD(x) + cof[1] * CUBE(x) + cof[2] * SQUARE(x) + cof[3] * x + cof[4];

    if ((sum < 0.0F) && (sum > -0.001F))
    {
        sum = 0.0F;
    }
    return sqrtf(sum);
}

f32 func_8001E240(f32 arg0, f32 arg1, f32 *cof)
{
    f32 sp4C = (arg1 - arg0) / 8;
    f32 f22 = 0.0F;
    f32 f20 = arg0 + sp4C;
    s32 i;

    for (i = 2; i < 9; i++)
    {
        if (!(i & 1))
        {
            f22 += 4.0F * func_8001E1A8(f20, cof);
        }
        else f22 += 2.0F * func_8001E1A8(f20, cof);
        
        f20 += sp4C;
    }
    return ((func_8001E1A8(arg0, cof) + f22 + func_8001E1A8(arg1, cof)) * sp4C) / 3.0F;
}

// something like get arg1 as fractional frames?
f32 func_8001E344(SYInterpDesc *desc, f32 arg1)
{
    f32 *point; // v0
    s32 id;
    f32 f28; // sp5C
    f32 f20;
    f32 min = 0.0F;
    f32 max = 1.0F;
    f32 res;
    f32 diff; // f24

    id = 0;
    point = desc->keyframes;

    while (point[1] < arg1)
    {
        id++;
        point++;
    }
    switch (desc->kind)
    {
    case nSYInterpKindLinear:
        f28 = (arg1 - desc->keyframes[id]) / (desc->keyframes[id + 1] - desc->keyframes[id]);
        break;

    case nSYInterpKindBezierS3:
    case nSYInterpKindBezier:
    case nSYInterpKindCatrom:
        f20 = (arg1 - desc->keyframes[id]) * desc->length;

        do
        {
            f28 = (min + max) / 2.0F;
            res = func_8001E240(min, f28, desc->quartics + (id * 5));

            if (f20 < (res + 0.00001F)) 
            {
                max = f28;
            }
            else
            {
                min = f28;
                f20 -= res;
            }
            diff = (min < max) ? -(min - max) : min - max;

            if (diff < 0.00001F)
            {
                break;
            }
        }
        while ((res + 0.00001F) < f20 || f20 < (res - 0.00001F));

        break;
    }
    return ((f32) id + f28) / ((f32) desc->points_num - 1.0F);
}

void syInterpCubic(Vec3f *out, SYInterpDesc *p, f32 t)
{
    syInterpCubicSplineTimeFrac(out, p, func_8001E344(p, t));
}

void syInterpQuad(Vec3f *out, SYInterpDesc *p, f32 t)
{
    func_8001E020(out, p, func_8001E344(p, t));
}
