#include <ft/fighter.h>

#include <sys/ml.h>

extern mlBumpAllocRegion gMatrixHeap;

void func_ovl2_800FCB70(Gfx **display_list, f32 arg1, f32 arg2)
{
    Vec3f vec;

    vec.y = -bitmap_sinf(-F_DEG_TO_RAD(arg2));
    vec.z = func_ovl0_800C78B8(-F_DEG_TO_RAD(arg2));
    vec.x = bitmap_sinf(F_DEG_TO_RAD(arg1)) * vec.z;
    vec.z *= func_ovl0_800C78B8(F_DEG_TO_RAD(arg1));

    ((Light*)gMatrixHeap.ptr)->l.dir[0] = vec.x * 100.0F;
    ((Light*)gMatrixHeap.ptr)->l.dir[1] = vec.y * 100.0F;
    ((Light*)gMatrixHeap.ptr)->l.dir[2] = vec.z * 100.0F;

    gSPNumLights(display_list[0]++, 1);
    gSPLight(display_list[0]++, gMatrixHeap.ptr, 1);

    gMatrixHeap.ptr = (Light*)gMatrixHeap.ptr + 1;
}