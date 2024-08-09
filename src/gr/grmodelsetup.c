#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80105760
void grModelSetupGroundDObjs(GObj *gobj, DObjDesc *dobj_desc, DObj **dobjs, DObjTransformTypes *transform_types)
{
    s32 i, id;
    DObj *dobj, *array_dobjs[DOBJ_ARRAY_MAX];

    for (i = 0; i < ARRAY_COUNT(array_dobjs); i++)
    {
        array_dobjs[i] = NULL;
    }
    for (i = 0; dobj_desc->index != ARRAY_COUNT(array_dobjs); i++, dobj_desc++)
    {
        id = dobj_desc->index & 0xFFF;

        if (id != 0)
        {
            dobj = array_dobjs[id] = omAddChildForDObj(array_dobjs[id - 1], dobj_desc->display_list);
        }
        else dobj = array_dobjs[0] = omAddDObjForGObj(gobj, dobj_desc->display_list);
        
        if (transform_types[i].tk1 != nOMTransformNull)
        {
            omAddOMMtxForDObjFixed(dobj, transform_types[i].tk1, transform_types[i].tk3);
        }
        if (transform_types[i].tk2 != nOMTransformNull)
        {
            omAddOMMtxForDObjFixed(dobj, transform_types[i].tk2, 0);
        }
        dobj->translate.vec.f = dobj_desc->translate;
        dobj->rotate.vec.f = dobj_desc->rotate;
        dobj->scale.vec.f = dobj_desc->scale;

        if (dobjs != NULL)
        {
            dobjs[i] = dobj;
        }
    }
}
