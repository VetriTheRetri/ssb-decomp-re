#include <ft/fighter.h>
#include <sys/ml.h>

extern f32 lbMathSin(f32);
extern f32 lbMathCos(f32);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern mlRegion gSYGtlGraphicsHeap;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800FCB70
void ftRenderLightsDrawReflect(Gfx **display_list, f32 arg1, f32 arg2)
{
    Vec3f vec;

    vec.y = -lbMathSin(-F_CLC_DTOR32(arg2));
    vec.z = lbMathCos(-F_CLC_DTOR32(arg2));
    vec.x = lbMathSin(F_CLC_DTOR32(arg1)) * vec.z;
    vec.z *= lbMathCos(F_CLC_DTOR32(arg1));

    ((Light*)gSYGtlGraphicsHeap.ptr)->l.dir[0] = vec.x * 100.0F;
    ((Light*)gSYGtlGraphicsHeap.ptr)->l.dir[1] = vec.y * 100.0F;
    ((Light*)gSYGtlGraphicsHeap.ptr)->l.dir[2] = vec.z * 100.0F;

    gSPNumLights(display_list[0]++, 1);
    gSPLight(display_list[0]++, gSYGtlGraphicsHeap.ptr, 1);

    gSYGtlGraphicsHeap.ptr = (Light*)gSYGtlGraphicsHeap.ptr + 1;
}