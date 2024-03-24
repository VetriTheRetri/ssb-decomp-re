#include <ft/fighter.h>

#include <sys/ml.h>

extern mlBumpAllocRegion gGraphicsHeap;

// 0x800FCB70
void ftRender_Lights_DisplayLightReflect(Gfx **display_list, f32 arg1, f32 arg2)
{
    Vec3f vec;

    vec.y = -bitmap_sinf(-F_DEG_TO_RAD(arg2));
    vec.z = bitmap_cosf(-F_DEG_TO_RAD(arg2));
    vec.x = bitmap_sinf(F_DEG_TO_RAD(arg1)) * vec.z;
    vec.z *= bitmap_cosf(F_DEG_TO_RAD(arg1));

    ((Light*)gGraphicsHeap.ptr)->l.dir[0] = vec.x * 100.0F;
    ((Light*)gGraphicsHeap.ptr)->l.dir[1] = vec.y * 100.0F;
    ((Light*)gGraphicsHeap.ptr)->l.dir[2] = vec.z * 100.0F;

    gSPNumLights(display_list[0]++, 1);
    gSPLight(display_list[0]++, gGraphicsHeap.ptr, 1);

    gGraphicsHeap.ptr = (Light*)gGraphicsHeap.ptr + 1;
}