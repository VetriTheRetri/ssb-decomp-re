#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80105760
void grModelSetupInitDObj(GObj *gobj, DObjDesc *dobj_desc, DObj **p_dobj, DObjTransformTypes *transform_types)
{
    s32 i, index;
    DObj *joint, *dobj_array[DOBJ_ARRAY_MAX];

    for (i = 0; i < ARRAY_COUNT(dobj_array); i++)
    {
        dobj_array[i] = NULL;
    }
    for (i = 0; dobj_desc->index != ARRAY_COUNT(dobj_array); i++, dobj_desc++)
    {
        index = dobj_desc->index & 0xFFF;

        if (index != 0)
        {
            joint = dobj_array[index] = omAddChildForDObj(dobj_array[index - 1], dobj_desc->display_list);
        }
        else joint = dobj_array[0] = omAddDObjForGObj(gobj, dobj_desc->display_list);
        
        if (transform_types[i].tk1 != OMMtx_Transform_Null)
        {
            omAddOMMtxForDObjFixed(joint, transform_types[i].tk1, transform_types[i].unk_dobjtransform_0x2);
        }
        if (transform_types[i].tk2 != OMMtx_Transform_Null)
        {
            omAddOMMtxForDObjFixed(joint, transform_types[i].tk2, 0);
        }
        joint->translate.vec.f = dobj_desc->translate;
        joint->rotate.vec.f = dobj_desc->rotate;
        joint->scale.vec.f = dobj_desc->scale;

        if (p_dobj != NULL)
        {
            p_dobj[i] = joint;
        }
    }
}
