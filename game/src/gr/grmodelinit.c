#include "ground.h"

// 0x80105760
void func_ovl2_80105760(GObj *gobj, DObjDesc *joint_desc, DObj **p_ptr_dobj, grDObjIndex *arg3)
{
    s32 i, index;
    DObj *joint, *dobj_array[18];

    for (i = 0; i < ARRAY_COUNT(dobj_array); i++)
    {
        dobj_array[i] = NULL;
    }
    for (i = 0; joint_desc->index != ARRAY_COUNT(dobj_array); i++, joint_desc++)
    {
        index = joint_desc->index & 0xFFF;

        if (index != 0)
        {
            joint = dobj_array[index] = func_800093F4(dobj_array[index - 1], joint_desc->display_list);
        }
        else
        {
            joint = dobj_array[0] = func_800092D0(gobj, joint_desc->display_list);
        }
        if (arg3[i].grdobj_id1 != 0)
        {
            func_80008CC0(joint, arg3[i].grdobj_id1, arg3[i].grdobj_id3);
        }
        if (arg3[i].grdobj_id2 != 0)
        {
            func_80008CC0(joint, arg3[i].grdobj_id2, 0);
        }
        joint->translate.vec.f = joint_desc->translate;
        joint->rotate.vec.f = joint_desc->rotate;
        joint->scale.vec.f = joint_desc->scale;

        if (p_ptr_dobj != NULL)
        {
            p_ptr_dobj[i] = joint;
        }
    }
}