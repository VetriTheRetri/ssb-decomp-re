#include <ef/effect.h>
#include <gr/ground.h>

grEffect gGroundEffectGenerator;
void *D_ovl2_80131AEC;

// 0x80115E80
sb32 func_ovl2_80115E80(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    if (ep->effect_vars.ground_effect.lr == LR_Left)
    {
        if (dobj->translate.vec.f.x <= (gGroundInfo->blastzone_left + 500.0F))
        {
            efManager_SetPrevAlloc(ep);
            omEjectGObj(effect_gobj);

            return FALSE;
        }
    }
    else if (dobj->translate.vec.f.x >= (gGroundInfo->blastzone_right - 500.0F))
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObj(effect_gobj);

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

        if (child_dobj->dobj_f0 == AOBJ_FRAME_NULL)
        {
            if ((ep->effect_vars.ground_effect.groundeffect__0xC == -1) || (ep->effect_vars.ground_effect.groundeffect__0xC != 0))
            {
                Vec3f pos = child_dobj->translate.vec.f;

                if (ep->effect_vars.ground_effect.lr == LR_Left)
                {
                    root_dobj->translate.vec.f.x += (pos.x * root_dobj->scale.vec.f.x);
                }
                else root_dobj->translate.vec.f.x -= (pos.x * root_dobj->scale.vec.f.x);

                root_dobj->translate.vec.f.y += (pos.y * root_dobj->scale.vec.f.y);

                child_dobj->translate.vec.f.x = 0.0F;
                child_dobj->translate.vec.f.y = 0.0F;

                func_ovl0_800C88AC(child_dobj, ep->effect_vars.ground_effect.groundeffect__0x18, ep->effect_vars.ground_effect.groundeffect__0x1C, 0.0F);
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

    if (ep->effect_vars.ground_effect.lr == LR_Right)
    {
        DObj *child_dobj = root_dobj->child->child;

        child_dobj->rotate.vec.f.z = -child_dobj->rotate.vec.f.z;
    }
}

// 0x801160E8
void func_ovl2_801160E8(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    func_ovl2_80115F5C(effect_gobj);

    if
    (
        ((ep->effect_vars.ground_effect.lr == LR_Right) && (ep->effect_vars.ground_effect.pos.x <= dobj->translate.vec.f.x)) ||
        ((ep->effect_vars.ground_effect.lr == LR_Left)  && (ep->effect_vars.ground_effect.pos.x >= dobj->translate.vec.f.x))
    )
    {
        ep->effect_vars.ground_effect.scale_step = 0.0F;
    }
    dobj->scale.vec.f.x += ep->effect_vars.ground_effect.scale_step;
    dobj->scale.vec.f.y += ep->effect_vars.ground_effect.scale_step;
    dobj->scale.vec.f.z += ep->effect_vars.ground_effect.scale_step;
}

// 0x801161A0
void func_ovl2_801161A0(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);
    f32 step_div;

    if (ep->effect_vars.ground_effect.lr == LR_Right)
    {
        step_div = 1000.0F - dobj->translate.vec.f.x;
        ep->effect_vars.ground_effect.pos.x = 1000.0F;
    }
    else
    {
        step_div = 1000.0F + dobj->translate.vec.f.x;
        ep->effect_vars.ground_effect.pos.x = -1000.0F;
    }
    ep->effect_vars.ground_effect.scale_step = (dobj->scale.vec.f.x * 10.0F) / step_div;
}

// 0x80116204
void func_ovl2_80116204(GObj *effect_gobj, s32 index)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f.z = gGroundEffectGenerator.effect_vars->effect_data[index].pos.z;

    dobj->translate.vec.f.y =

    ((gGroundEffectGenerator.effect_vars->effect_data[index].pos.x - gGroundEffectGenerator.effect_vars->effect_data[index].pos.y) * lbRandom_GetFloat()) +

    gGroundEffectGenerator.effect_vars->effect_data[index].pos.y;

    dobj->scale.vec.f.x = dobj->scale.vec.f.y = dobj->scale.vec.f.z = gGroundEffectGenerator.effect_vars->effect_data[index].unk_ovl2efvec_scale;

    if (ep->effect_vars.ground_effect.lr == LR_Right)
    {
        dobj->rotate.vec.f.y = F_DEG_TO_RAD(180.0F);
        dobj->translate.vec.f.x = gGroundInfo->blastzone_left + 500.0F;
    }
    else dobj->translate.vec.f.x = gGroundInfo->blastzone_right - 500.0F;

    if (gGroundEffectGenerator.effect_vars->effect_data[index].unk_ovl2efvec_proc != NULL)
    {
        gGroundEffectGenerator.effect_vars->effect_data[index].unk_ovl2efvec_proc(effect_gobj);
    }
}

// 0x8011633C
void func_ovl2_8011633C(GObj *effect_gobj, DObjDesc *dobj_desc, DObj **p_ptr_dobj, u8 arg3, u8 arg4, u8 arg5, s32 arg6)
{
    efStruct *ep;
    DObj *effect_dobj;
    s32 i;
    s32 j;
    s32 index;
    DObj *current_dobj;
    DObj *setup_dobj[18];
    f32 rotate_step;
    s32 index2;

    rotate_step = 0.0F;

    ep = efGetStruct(effect_gobj);
    current_dobj = NULL;

    effect_dobj = DObjGetStruct(effect_gobj);

    for (i = 0; i < ARRAY_COUNT(setup_dobj); i++)
    {
        setup_dobj[i] = NULL;
    }

    while (dobj_desc->index != ARRAY_COUNT(setup_dobj))
    {
        index = dobj_desc->index & 0xFFF;

        if (index != 0)
        {
            current_dobj = setup_dobj[index] = omAddChildForDObj(setup_dobj[index - 1], dobj_desc->display_list);
        }
        else current_dobj = setup_dobj[0] = omAddChildForDObj(effect_dobj, dobj_desc->display_list);

        func_8000F2FC(current_dobj, arg3, arg4, arg5);

        index2 = dobj_desc->index & 0xF000;

        if (index2 != 0)
        {
            if (ep->effect_vars.ground_effect.groundeffect__0x20 != 0)
            {
                omAddOMMtxForDObjFixed(current_dobj, 0x2E, 0);
            }
            else omAddOMMtxForDObjFixed(current_dobj, 0x48, 0);

            if (arg6 == 1)
            {
                rotate_step = F_DEG_TO_RAD(180.0F);
            }
        }
        current_dobj->translate.vec.f = dobj_desc->translate;
        current_dobj->rotate.vec.f = dobj_desc->rotate;
        current_dobj->rotate.vec.f.y += rotate_step;
        current_dobj->scale.vec.f = dobj_desc->scale;

        if (p_ptr_dobj != NULL)
        {
            *p_ptr_dobj++ = current_dobj;
        }
        dobj_desc++;
    }
}

// 0x8011652C
GObj* func_ovl2_8011652C(efCreateDesc *effect_desc, s32 arg1)
{
    GObj *effect_gobj;
    DObj *other_dobj;
    DObj *main_dobj;
    efStruct *ep;
    s32 unused[2];
    DObjTransformTypes *rtypes1;
    DObjTransformTypes *rtypes2;
    u8 effect_flags;
    uintptr_t addr;
    uintptr_t sp44;
    uintptr_t sp40;
    uintptr_t sp3C;

    effect_flags = effect_desc->flags;

    if (effect_flags & 2)
    {
        ep = efManager_GetStructNoForceReturn();

        if (ep == NULL)
        {
            return NULL;
        }
        ep->proc_update = effect_desc->proc_update;
    }
    else ep = NULL;

    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, efManagerProcRun, 6, 0x80000000U);

    if (effect_gobj == NULL)
    {
        if (ep != NULL)
        {
            efManager_SetPrevAlloc(ep);
        }
        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ep->effect_vars.ground_effect.groundeffect__0x20 = (arg1 != -3 && arg1 != 3) ? FALSE : TRUE;

    if (effect_desc->proc_render == NULL)
    {
        return effect_gobj;
    }
    else
    {
        omAddGObjRenderProc(effect_gobj, effect_desc->proc_render, effect_desc->dl_link, 2, -1);
        omMoveGObjDLHead(effect_gobj, effect_desc->dl_link, 0x80000000);

        sp44 = effect_desc->o_mobjsub;
        sp40 = effect_desc->o_anim_joint;
        sp3C = effect_desc->o_matanim_joint;

        addr = *(uintptr_t*)effect_desc->file_head;

        rtypes1 = &effect_desc->transform_types1;

        if (effect_flags & 1)
        {
            main_dobj = omAddDObjForGObj(effect_gobj, NULL);

            func_ovl0_800C89BC(main_dobj, rtypes1->tk1, rtypes1->tk2, rtypes1->unk_dobjtransform_0x2);

            rtypes2 = &effect_desc->transform_types2;

            if (effect_flags & 4)
            {
                func_ovl2_8011633C(effect_gobj, (void*) (addr + effect_desc->o_dobjsetup), NULL, rtypes2->tk1, rtypes2->tk2, rtypes2->unk_dobjtransform_0x2, arg1);

                main_dobj = main_dobj->child;
            }
            else
            {
                main_dobj = omAddChildForDObj(main_dobj, (void*) (addr + effect_desc->o_dobjsetup));

                func_ovl0_800C89BC(main_dobj, rtypes2->t1, rtypes2->t2, rtypes2->t3);
            }
            if (sp44 != 0)
            {
                func_ovl0_800C9228(main_dobj, (void*) (addr + sp44));
            }
            if ((sp40 != 0) || (sp3C != 0))
            {
                func_ovl0_800C88AC(main_dobj, (sp40 != 0) ? (void*) (addr + sp40) : NULL, (sp3C != 0) ? (void*) (addr + sp3C) : NULL, 0.0F);
                func_8000DF34(effect_gobj);
            }
        }
    }
    return effect_gobj;
}

// 0x8011677C
void func_ovl2_8011677C(s32 index)
{
    GObj *effect_gobj;
    efStruct *ep;
    uintptr_t addr;

    gGroundEffectGenerator.effect_vars->effect_data[index].effect_desc.file_head = &D_ovl2_80131AEC;
    effect_gobj = func_ovl2_8011652C(&gGroundEffectGenerator.effect_vars->effect_data[index].effect_desc, gGroundEffectGenerator.lr);

    if (effect_gobj != NULL)
    {
        ep = efGetStruct(effect_gobj);
        ep->effect_vars.ground_effect.groundeffect__0xC = gGroundEffectGenerator.effect_vars->effect_data[index].unk_ovl2efvec_0x10;

        addr = *(uintptr_t*)gGroundEffectGenerator.effect_vars->effect_data[index].effect_desc.file_head;

        if (gGroundEffectGenerator.effect_vars->effect_data[index].effect_desc.o_anim_joint != 0)
        {
            ep->effect_vars.ground_effect.groundeffect__0x18 = (void*) (gGroundEffectGenerator.effect_vars->effect_data[index].effect_desc.o_anim_joint + addr);
        }
        else ep->effect_vars.ground_effect.groundeffect__0x18 = NULL;

        if (gGroundEffectGenerator.effect_vars->effect_data[index].effect_desc.o_matanim_joint != 0)
        {
            ep->effect_vars.ground_effect.groundeffect__0x1C = (void*) (gGroundEffectGenerator.effect_vars->effect_data[index].effect_desc.o_matanim_joint + addr);
        }
        else ep->effect_vars.ground_effect.groundeffect__0x1C = NULL;

        ep->effect_vars.ground_effect.lr = gGroundEffectGenerator.lr;

        switch (ep->effect_vars.ground_effect.lr)
        {
        case -3:
            ep->effect_vars.ground_effect.lr = LR_Left;
            break;

        case 3:
            ep->effect_vars.ground_effect.lr = LR_Right;
            break;
        }
        func_ovl2_80116204(effect_gobj, index);
    }
    if (gGroundEffectGenerator.reset_wait == 0)
    {
        gGroundEffectGenerator.spawn_wait = lbRandom_GetIntRange(10000) + 6000;
    }
    else gGroundEffectGenerator.spawn_wait = 30;
}

// 0x801168CC
void func_ovl2_801168CC(s32 arg0)
{
    s32 index;
    s32 random;
    grEffectParam *p;
    s32 effect_id;
    grEffectParam *ptr;

    if (gGroundEffectGenerator.spawn_wait == 0)
    {
        effect_id = gGroundEffectGenerator.effect_id;

        if (gGroundEffectGenerator.reset_wait == 0)
        {
            index = lbRandom_GetIntRange(gGroundEffectGenerator.unk_ovl2efmain_0x8);

            index = gGroundEffectGenerator.unk_ovl2efmain_0xC[index];

            ptr = gGroundEffectGenerator.effect_vars->unk_ovl2efsub_0x4;

            effect_id = gGroundEffectGenerator.effect_id = (ptr + index)->effect_id; // Any other solution results in a regswap or gGroundEffectGenerator getting duplicated???

            gGroundEffectGenerator.lr = (ptr + index)->lr;

            if (gGroundEffectGenerator.lr == LR_Center)
            {
                gGroundEffectGenerator.lr = (lbRandom_GetIntRange(2) == 0) ? LR_Left : LR_Right;
            }
            gGroundEffectGenerator.reset_wait = (ptr + index)->reset_wait;

            if (gGroundEffectGenerator.reset_wait != 0)
            {
                gGroundEffectGenerator.reset_wait += lbRandom_GetIntRange(2);
            }
        }
        else gGroundEffectGenerator.reset_wait--;

        func_ovl2_8011677C(effect_id);
    }
    gGroundEffectGenerator.spawn_wait--;
}

// 0x801169CC
void func_ovl2_801169CC(void)
{
    u8 *bytes;
    u8 j, i, k;
    u8 var_a3;
    grEffectParam *ptr;

    ptr = gGroundEffectGenerator.effect_vars->unk_ovl2efsub_0x4;

    for (j = i = 0; i < gGroundEffectGenerator.effect_vars->unk_ovl2efsub_0x0; i++)
    {
        j += (ptr + i)->unk_ovl2efptr_0x8;
    }
    gGroundEffectGenerator.unk_ovl2efmain_0xC = bytes = gsMemoryAlloc(j * sizeof(u8), 0x0);
    gGroundEffectGenerator.unk_ovl2efmain_0x8 = j;

    var_a3 = ptr->unk_ovl2efptr_0x8;

    for (i = k = 0; i < j; i++, bytes++)
    {
        if (var_a3 == i)
        {
            k++;

            var_a3 += (ptr + k)->unk_ovl2efptr_0x8;
        }
        *bytes = k;
    }
}

extern grEffectVars D_ovl2_8012F840[];

// 0x80116AD0
void func_ovl2_80116AD0(void)
{
    GObj *effect_gobj;

    if ((gBattleState->gr_kind <= Gr_Kind_VSEnd) && (gSceneData.scene_current != 0x36) && (D_ovl2_8012F840[gBattleState->gr_kind].unk_ovl2efsub_0x4 != NULL))
    {
        effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, 7, 0x80000000U);

        if (effect_gobj != NULL)
        {
            omAddGObjCommonProc(effect_gobj, func_ovl2_801168CC, 1, 1);

            effect_gobj->user_data.p = &gGroundEffectGenerator;

            gGroundEffectGenerator.spawn_wait = lbRandom_GetIntRange(10000) + 6000;
            gGroundEffectGenerator.effect_id = 0;
            gGroundEffectGenerator.effect_vars = (void*) &D_ovl2_8012F840[gBattleState->gr_kind];

            gGroundEffectGenerator.unk_ovl2efmain_0x14 = (void*) ((uintptr_t)gGroundInfo->gr_desc[1].dobj_desc - (intptr_t)D_ovl2_8012F840[gBattleState->gr_kind].unk_ovl2efsub_0x8);
            gGroundEffectGenerator.reset_wait = 0;

            func_ovl2_801169CC();
        }
    }
}
