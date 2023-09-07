#include <ef/effect.h>
#include <gr/ground.h>

// 0x80115E80
bool32 func_ovl2_80115E80(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    if (ep->effect_vars.misc_unk1.lr == LR_Left)
    {
        if (dobj->translate.vec.f.x <= (gGroundInfo->blastzone_left + 500.0F))
        {
            efManager_SetPrevAlloc(ep);
            omEjectGObjCommon(effect_gobj);

            return FALSE;
        }
    }
    else if (dobj->translate.vec.f.x >= (gGroundInfo->blastzone_right - 500.0F))
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObjCommon(effect_gobj);

        return FALSE;
    }
    return TRUE;
}

// 0x80115F5C
void func_ovl2_80115F5C(GObj *effect_gobj)
{
    DObj *root_dobj = DObjGetStruct(effect_gobj);
    DObj *child_dobj = root_dobj->child;
    efStruct *ep = efGetStruct(effect_gobj);

    if (func_ovl2_80115E80(effect_gobj) != FALSE)
    {
        func_8000DF34(effect_gobj);

        if (child_dobj->dobj_f0 == (f32)FLOAT_NEG_MAX)
        {
            if ((ep->effect_vars.misc_unk1.unk_miscunk1_0xC == -1) || (ep->effect_vars.misc_unk1.unk_miscunk1_0xC != 0))
            {
                Vec3f pos = child_dobj->translate.vec.f;

                if (ep->effect_vars.misc_unk1.lr == LR_Left)
                {
                    root_dobj->translate.vec.f.x += (pos.x * root_dobj->scale.vec.f.x);
                }
                else root_dobj->translate.vec.f.x -= (pos.x * root_dobj->scale.vec.f.x);

                root_dobj->translate.vec.f.y += (pos.y * root_dobj->scale.vec.f.y);

                child_dobj->translate.vec.f.x = 0.0F;
                child_dobj->translate.vec.f.y = 0.0F;

                func_ovl0_800C88AC(child_dobj, ep->effect_vars.misc_unk1.unk_miscunk1_0x18, ep->effect_vars.misc_unk1.unk_miscunk1_0x1C, 0.0F);
                func_8000DF34(effect_gobj);
            }
        }
    }
}

// 0x80116090
void func_ovl2_80116090(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *root_dobj = DObjGetStruct(effect_gobj);

    func_ovl2_80115F5C(effect_gobj);

    if (ep->effect_vars.misc_unk1.lr == LR_Right)
    {
        DObj *child_dobj = root_dobj->child->child;

        child_dobj->rotate.vec.f.z = -child_dobj->rotate.vec.f.z;
    }
}
