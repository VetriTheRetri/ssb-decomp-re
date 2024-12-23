#ifndef _SYINTERP_H_
#define _SYINTERP_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>

typedef struct SYInterpDesc
{
    u8 kind;
    s16 points_num;
    f32 unk04;          // CR scale? count?
    Vec3f *points;
    f32 length;
    f32 *keyframes;     // maybe keyframes as fraction t?
    f32 *quartics;      // quartic coef

} SYInterpDesc;

typedef enum SYInterpKind
{
    nSYInterpKindLinear,
    nSYInterpKindBezierS3,
    nSYInterpKindBezier,
    nSYInterpKindCatrom

} SYInterpKind;

extern void syInterpCatromCubicSpline(Vec3f *out, Vec3f *ctrl, f32 s, f32 t);
extern void syInterpQuadSpline(Vec3f *out, Vec3f *ctrl, f32 s, f32 t);
extern void syInterpBezier3Points(Vec3f *out, Vec3f *ctrl, f32 t);
extern void syInterpBezier4Points(Vec3f* out, Vec3f* ctrl, f32 t);
extern void syInterpCubicBezierScale(Vec3f *out, Vec3f *ctrl, f32 t);
extern void syInterpQuadBezier4Points(Vec3f* out, Vec3f* ctrl, f32 t);
extern void syInterpCubicSplineTimeFrac(Vec3f *out, SYInterpDesc *desc, f32 t);
extern void func_8001E020(Vec3f *out, SYInterpDesc *desc, f32 t);
extern f32 func_8001E1A8(f32 x, f32 *cof);
extern f32 func_8001E240(f32 arg0, f32 arg1, f32 *cof);
extern f32 func_8001E344(SYInterpDesc *desc, f32 arg1);
extern void syInterpCubic(Vec3f *out, SYInterpDesc *desc, f32 t);
extern void syInterpQuad(Vec3f *out, SYInterpDesc *desc, f32 t);

#endif
