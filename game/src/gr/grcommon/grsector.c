#include <gr/ground.h>

// 0x80106730
void func_ovl2_80106730(DObj *arg0, Vec3f *vec1, Vec3f *vec2, Vec3f *vec3)
{
    DObj *sp54 = gGroundStruct.sector.unk_sector_dobj;
    AObj *aobj = arg0->aobj;
    f32 vlen;

    while (aobj != NULL)
    {
        if ((aobj->unk_aobj_0x5 != 0) && !(arg0->parent_gobj->obj_renderflags & 2) && (aobj->unk_aobj_0x4 == 4))
        {
            vlen = func_8000CB94(aobj);

            if (vlen < 0.0F)
            {
                vlen = 0.0F;
            }
            else if (vlen > 1.0F)
            {
                vlen = 1.0F;
            }
            hal_interpolation_quadratic(vec1, aobj->interpolate, vlen);
        }
        aobj = aobj->next;
    }
    if ((sp54->dobj_f0 != (f32)FLOAT_NEG_MAX) && (gGroundStruct.sector.unk_sector_0x55 == 0))
    {
        aobj = sp54->aobj;

        while (aobj != NULL)
        {
            if ((aobj->unk_aobj_0x5 != 0) && !(arg0->parent_gobj->obj_renderflags & 2) && (aobj->unk_aobj_0x4 == 4))
            {
                hal_interpolation_cubic(vec3, aobj->interpolate, vlen);
            }
            aobj = aobj->next;
        }
        lbVector_Vec3fNormalize(vec3);
    }
    func_ovl0_800CD5AC(vec3, vec1, vec2);
    func_ovl0_800CD5AC(vec1, vec2, vec3);
    lbVector_Vec3fNormalize(vec1);
    lbVector_Vec3fNormalize(vec2);
    lbVector_Vec3fNormalize(vec3);
}
