#include "effect.h"
#include <ft/fighter.h>
#include <gm/gmmatch.h>

void *D_ovl2_801313B0;
void *D_ovl2_801313B4;
void *D_ovl2_801313B8;
efStruct *gpEffectStructCurrent;
s32 gEffectStructsFree;
s32 gEffectBankIndex;

extern intptr_t D_NF_00000053;
extern intptr_t D_NF_00000054;
extern intptr_t D_NF_00000055;

// To match this, rldm_get_file_with_external_heap and rldm_bytes_needed_to_load must take intptr_t or other int type as first argument
void efManager_AllocUserData(void)
{
    efStruct *ep;
    s32 i;
    s32 unused;

    gpEffectStructCurrent = ep = hal_alloc(sizeof(efStruct) * EFFECT_ALLOC_NUM, EFFECT_ALLOC_ALIGN);
    gEffectStructsFree = EFFECT_ALLOC_NUM;

    for (i = 0; i < (EFFECT_ALLOC_NUM - 1); i++)
    {
        ep[i].ep_alloc_next = &ep[i + 1];
    }
    if (ep != NULL)
    {
        ep[i].ep_alloc_next = NULL;
    }
    func_ovl2_800FCDEC();
    func_ovl2_800FCE6C();

    D_ovl2_801313B0 = rldm_get_file_with_external_heap(&D_NF_00000053, hal_alloc(rldm_bytes_needed_to_load(&D_NF_00000053), 0x10));
    D_ovl2_801313B4 = rldm_get_file_with_external_heap(&D_NF_00000054, hal_alloc(rldm_bytes_needed_to_load(&D_NF_00000054), 0x10));
    D_ovl2_801313B8 = rldm_get_file_with_external_heap(&D_NF_00000055, hal_alloc(rldm_bytes_needed_to_load(&D_NF_00000055), 0x10));

    func_ovl2_800FD18C();
}

// 0x800FD43C
efStruct* efManager_GetEffectStruct(bool32 is_force_return)
{
    efStruct *ep;

    if ((is_force_return == 0) && (gEffectStructsFree < 5))
    {
        return NULL;
    }
    ep = gpEffectStructCurrent;

    if (ep == NULL)
    {
        return NULL;
    }
    gpEffectStructCurrent = ep->ep_alloc_next;

    ep->fighter_gobj = NULL;
    ep->einfo = NULL;
    ep->is_pause_effect = FALSE;

    gEffectStructsFree--;

    return ep;
}

// 0x800FD4B8
efStruct* efManager_GetStructNoForceReturn(void)
{
    return efManager_GetEffectStruct(FALSE);
}

// 0x800FD4D8
efStruct* efManager_GetStructForceReturn(void)
{
    return efManager_GetEffectStruct(TRUE);
}

// 0x800FD4F8
void efManager_SetPrevAlloc(efStruct *ep)
{
    ep->ep_alloc_next = gpEffectStructCurrent;

    gpEffectStructCurrent = ep;

    gEffectStructsFree++;
}

// 0x800FD524
void func_ovl2_800FD524(GObj *effect_gobj)
{
    func_8000DF34(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        omEjectGObjCommon(effect_gobj);
    }
}

void func_ovl2_800FD568(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (!(ep->is_pause_effect))
    {
        func_8000DF34(effect_gobj);

        if (effect_gobj->anim_frame <= 0.0F)
        {
            efManager_SetPrevAlloc(efGetStruct(effect_gobj));

            omEjectGObjCommon(effect_gobj);
        }
    }
}

// New file? Unused
void func_ovl2_800FD5D0(void)
{
    return;
}

// 0x800FD5D8
void func_ovl2_800FD5D8(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (!(ep->is_pause_effect))
    {
        func_8000DF34(effect_gobj);
    }
}

void func_ovl2_800FD60C(GObj *effect_gobj)
{
    GObj *next_gobj;

    if (effect_gobj->unk_gobj_0x24 < -1000.0F)
    {
        next_gobj = effect_gobj->group_gobj_next;

        if (next_gobj->room != 2)
        {
            om_g_move_obj_dl(next_gobj, 2, 2);
        }
    }
    else
    {
        next_gobj = effect_gobj->group_gobj_next;

        if (next_gobj->room != 0x14)
        {
            om_g_move_obj_dl(next_gobj, 0x14, 2);
        }
    }
}

void func_ovl2_800FD68C(GObj *effect_gobj)
{
    GObj *next_gobj;

    if (effect_gobj->unk_gobj_0x24 > 1000.0F)
    {
        next_gobj = effect_gobj->group_gobj_next;

        if (next_gobj->room != 2)
        {
            om_g_move_obj_dl(next_gobj, 2, 2);
        }
    }
    else
    {
        next_gobj = effect_gobj->group_gobj_next;

        if (next_gobj->room != 0x14)
        {
            om_g_move_obj_dl(next_gobj, 0x14, 2);
        }
    }
}

// Another unused func
void func_ovl2_800FD70C(void)
{
    return;
}

void func_ovl2_800FD714(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (ep != NULL)
    {
        if (ep->proc_update != NULL)
        {
            omAddGObjCommonProc(effect_gobj, ep->proc_update, 1, 3);
        }
    }
    else omAddGObjCommonProc(effect_gobj, func_ovl2_800FD524, 1, 3);

    effect_gobj->call_unk = NULL;
}

// Return here, currently missing 0x800FD778
void func_ovl2_800FDAFC(void *arg0)
{
    func_ovl2_800FD778(arg0, 0);
}

// 0x800FDB1C
void func_ovl2_800FDB1C(void *arg0)
{
    func_ovl2_800FD778(arg0, 1);
}

// 0x800FDB3C - Destroy effect GObj and particle too if applicable
efParticle* efManager_DestroyParticleGObj(efParticle *efpart, GObj *effect_gobj)
{
    if (efpart != NULL)
    {
        func_ovl0_800CEA40(efpart);
    }
    if (efGetStruct(effect_gobj) != NULL)
    {
        efStruct *ep = efGetStruct(effect_gobj);

        efManager_SetPrevAlloc(ep);
    }
    omEjectGObjCommon(effect_gobj);

    return NULL;
}

// 0x800FDB88
void efTransform_Default_ProcDead(efTransform *eftrans)
{
    if (efGetStruct(eftrans->effect_gobj) != NULL)
    {
        efStruct *ep = efGetStruct(eftrans->effect_gobj);

        efManager_SetPrevAlloc(ep);
    }
    omEjectGObjCommon(eftrans->effect_gobj);
}

// 0x800FDBCC
void efParticle_Default_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    ep->effect_vars.basic2.eftrans->translate.x += ep->effect_vars.basic2.vel.x;
    ep->effect_vars.basic2.eftrans->translate.y += ep->effect_vars.basic2.vel.y;
}

extern u8 D_ovl2_8012DF20[GMMATCH_PLAYERS_MAX];

// 0x800FDC04
efParticle* efParticle_DamageNormalLight_MakeEffect(Vec3f *pos, s32 player, s32 size, bool32 is_static)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data = ep;

    efpart = func_ovl0_800CE9E8(gEffectBankIndex, D_ovl2_8012DF20[player]);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efParticle_Default_ProcUpdate, 1, 3);

            ep->effect_vars.basic2.eftrans = eftrans;

            eftrans->translate = *pos;

            vel = (is_static != FALSE) ? 0.0F : ((lbRandom_GetFloat() * 38.0F) + 12.0F);

            angle = lbRandom_GetFloat() * DOUBLE_PI32;

            ep->effect_vars.basic2.vel.x = cosf(angle) * vel;
            ep->effect_vars.basic2.vel.y = __sinf(angle) * vel;

            scale = (size < 10) ? (((10 - size) * -0.05F) + 1.0F) : (((size - 10) * 0.13F) + 1.0F);

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = scale;
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FDE3C
void efTransform_DamageNormalHeavy_ProcDead(efTransform *eftrans)
{
    efStruct *ep = efGetStruct(eftrans->effect_gobj);
    Vec3f pos = eftrans->translate;

    efParticle_DamageNormalLight_MakeEffect(&pos, ep->effect_vars.damage_normal_heavy.player, ep->effect_vars.damage_normal_heavy.size, FALSE);
    efManager_SetPrevAlloc(efGetStruct(eftrans->effect_gobj));
    omEjectGObjCommon(eftrans->effect_gobj);
}

u8 efParticle_DamageNormalHeavy_Color1R[8] = { 255, 255, 255, 255, 255, 0, 0, 0 }; // 8 entires each?
u8 efParticle_DamageNormalHeavy_Color1G[8] = { 255, 255, 255, 255, 255, 0, 0, 0 };
u8 efParticle_DamageNormalHeavy_Color1B[8] = { 255, 255, 255, 255, 255, 0, 0, 0 };
u8 efParticle_DamageNormalHeavy_Color2R[8] = { 255, 255, 255, 255, 255, 0, 0, 0 };
u8 efParticle_DamageNormalHeavy_Color2G[8] = { 255, 255, 255, 255, 255, 0, 0, 0 };
u8 efParticle_DamageNormalHeavy_Color2B[8] = { 255, 255, 255, 255, 255, 0, 0, 0 };

// 0x800FDEAC
efParticle* efParticle_DamageNormalHeavy_MakeEffect(Vec3f *pos, s32 player, s32 size)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data = ep;

    efpart = func_ovl0_800CE9E8(gEffectBankIndex, 0x64);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_DamageNormalHeavy_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return FALSE;
            }
            ep->effect_vars.damage_normal_heavy.size = (s32) eftrans; // WHAT

            eftrans->translate = *pos;

            ep->effect_vars.damage_normal_heavy.pos = *pos;
            ep->effect_vars.damage_normal_heavy.player = player;
            ep->effect_vars.damage_normal_heavy.size = size;

            efpart->color1.r = efParticle_DamageNormalHeavy_Color1R[player];
            efpart->color1.g = efParticle_DamageNormalHeavy_Color1G[player];
            efpart->color1.b = efParticle_DamageNormalHeavy_Color1B[player];
            efpart->color1.a = 255;

            efpart->color2.r = efParticle_DamageNormalHeavy_Color2R[player];
            efpart->color2.g = efParticle_DamageNormalHeavy_Color2G[player];
            efpart->color2.b = efParticle_DamageNormalHeavy_Color2B[player];
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FE068
efParticle* func_ovl2_800FE068(Vec3f *pos, s32 size)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data = ep;

    efpart = func_ovl0_800CE9E8(gEffectBankIndex, 0x25);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efParticle_Default_ProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            vel = ((lbRandom_GetFloat() * 8.0F) + 2.0F);

            angle = lbRandom_GetFloat() * DOUBLE_PI32;

            ep->effect_vars.common.vel.x = cosf(angle) * vel;
            ep->effect_vars.common.vel.y = __sinf(angle) * vel;

            scale = (size < 10) ? (((10 - size) * -0.05F) + 1.0F) : (((size - 10) * 0.15F) + 1.0F);

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = scale;
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

void func_ovl2_800FE260(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    if (dobj->mobj->unk_mobj_0xA0 <= 0.0F)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObjCommon(effect_gobj);
    }
    else
    {
        dobj->translate.x += ep->effect_vars.common.vel.x;
        dobj->translate.y += ep->effect_vars.common.vel.y;
    }
}

// 0x800FE2F4
efParticle* efParticle_DamageFire_MakeEffect(Vec3f *pos, s32 size)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data = ep;

    efpart = func_ovl0_800CE9E8(gEffectBankIndex, 0x4D);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efParticle_Default_ProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            vel = ((lbRandom_GetFloat() * 18.0F) + 12.0F);

            angle = lbRandom_GetFloat() * DOUBLE_PI32;

            ep->effect_vars.common.vel.x = cosf(angle) * vel;
            ep->effect_vars.common.vel.y = __sinf(angle) * vel;

            scale = (size < 10) ? (((10 - size) * -0.05F) + 1.0F) : (((size - 10) * 0.15F) + 1.0F);

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = scale;
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FE4EC
efParticle* func_ovl2_800FE4EC(Vec3f *pos, s32 size)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data = ep;

    efpart = func_ovl0_800CE9E8(gEffectBankIndex, 0x53);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efParticle_Default_ProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            vel = (lbRandom_GetFloat() * 7.0F) + 3.0F;

            angle = lbRandom_GetFloat() * DOUBLE_PI32;

            ep->effect_vars.common.vel.x = cosf(angle) * vel;
            ep->effect_vars.common.vel.y = __sinf(angle) * vel;

            scale = (size < 5) ? (((5 - size) * -0.08F) + 1.0F) : (((size - 5) * 0.15F) + 1.0F);

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = scale;
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

extern void *D_ovl2_8012DF24[];

// 0x800FE6E4
GObj* efParticle_DamageSlash_MakeEffect(Vec3f *pos, s32 size, f32 rotate)
{
    GObj *effect_gobj;
    DObj *dobj;
    f32 scale;

    effect_gobj = func_ovl2_800FDAFC(D_ovl2_8012DF24);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate = *pos;

    dobj->rotate.z = rotate;

    scale = (size < 5) ? (((5 - size) * -0.08F) + 1.0F) : (((size - 5) * 0.18F) + 1.0F);

    dobj->scale.x = dobj->scale.y = scale;

    return effect_gobj;
}

// 0x800FE9B4
efParticle* efParticle_FlameLR_MakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data = ep;

    efpart = func_ovl0_800CE9E8(gEffectBankIndex, 0x12);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efParticle_Default_ProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            eftrans->translate.x += ((lbRandom_GetFloat() * EFPART_FLAMELR_OFF_X_BASE) + EFPART_FLAMELR_OFF_X_ADD);
            eftrans->translate.y += ((lbRandom_GetFloat() * EFPART_FLAMELR_OFF_Y_BASE) + EFPART_FLAMELR_OFF_Y_ADD);

            angle = lbRandom_GetFloat() * HALF_PI32;

            ep->effect_vars.common.vel.x = cosf(angle) * EFPART_FLAMELR_VEL_BASE * -lr;
            ep->effect_vars.common.vel.y = __sinf(angle) * EFPART_FLAMELR_VEL_BASE;

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = (lbRandom_GetFloat() * 1) + 1.0F;
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FE9B4
efParticle* efParticle_FlameRandom_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data = ep;

    efpart = func_ovl0_800CE9E8(gEffectBankIndex, 0x55);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efParticle_Default_ProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            angle = (lbRandom_GetFloat() * EFPART_FLAMERANDOM_ANGLE_BASE) + EFPART_FLAMERANDOM_ANGLE_ADD;

            ep->effect_vars.common.vel.x = cosf(angle) * EFPART_FLAMERANDOM_VEL_BASE;
            ep->effect_vars.common.vel.y = __sinf(angle) * EFPART_FLAMERANDOM_VEL_BASE;

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = (lbRandom_GetFloat() * 1) + 1.0F;
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FEB58
efParticle* efParticle_FlameStatic_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data = ep;

    efpart = func_ovl0_800CE9E8(gEffectBankIndex, 0x55);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efParticle_Default_ProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            ep->effect_vars.common.vel.x = 0.0F;
            ep->effect_vars.common.vel.y = 0.0F;

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = (lbRandom_GetFloat() * 1) + 1.0F;
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FECBC - Called only by Venusaur and Link's Boomerang?
efParticle* efParticle_DustCollision_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data = ep;

    efpart = func_ovl0_800CE9E8(gEffectBankIndex, 0x55);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efParticle_Default_ProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            eftrans->translate.x += ((lbRandom_GetFloat() * EFPART_DUSTCOLL_OFF_BASE) + EFPART_DUSTCOLL_OFF_ADD);
            eftrans->translate.y += ((lbRandom_GetFloat() * EFPART_DUSTCOLL_OFF_BASE) + EFPART_DUSTCOLL_OFF_ADD);

            angle = (lbRandom_GetFloat() * EFPART_DUSTCOLL_ANGLE_BASE) + EFPART_DUSTCOLL_ANGLE_ADD; // HALF_PI32, QUART_PI32

            ep->effect_vars.common.vel.x = cosf(angle) * EFPART_DUSTCOLL_VEL_BASE;
            ep->effect_vars.common.vel.y = __sinf(angle) * EFPART_DUSTCOLL_VEL_BASE;

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = (lbRandom_GetFloat() * 1) + 1.0F;
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

extern void *D_ovl2_8012DF4C[];

// 0x800FEEB0
GObj* efParticle_ShockSmall_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;
    efStruct *ep;
    f32 scale;
    f32 angle;

    effect_gobj = func_ovl2_800FDAFC(D_ovl2_8012DF4C);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);
    ep = efGetStruct(effect_gobj);

    pos->x += (lbRandom_GetFloat() * EFPART_SHOCKSMALL_OFF_BASE) + EFPART_SHOCKSMALL_OFF_ADD;
    pos->y += (lbRandom_GetFloat() * EFPART_SHOCKSMALL_OFF_BASE) + EFPART_SHOCKSMALL_OFF_ADD;

    dobj->translate = *pos;

    angle = lbRandom_GetFloat() * F_DEG_TO_RAD(360.0F); // DOUBLE_PI32

    cosf(angle);

    ep->effect_vars.common.vel.x = 0.0F;

    __sinf(angle);

    ep->effect_vars.common.vel.y = 0.0F; // Remember to get rid of the wasteful math here for the performance build

    scale = (lbRandom_GetFloat() * EFPART_SHOCKSMALL_SCALE_BASE) + EFPART_SHOCKSMALL_SCALE_ADD;

    dobj->scale.x = dobj->scale.y = scale;

    dobj->rotate.z = lbRandom_GetFloat() * F_DEG_TO_RAD(360.0F); // DOUBLE_PI32

    return effect_gobj;
}

// 0x800FEFE0
void efParticle_DustLight_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    ep->effect_vars.dust_light.eftrans->translate.x += ep->effect_vars.dust_light.vel1.x;
    ep->effect_vars.dust_light.eftrans->translate.y += ep->effect_vars.dust_light.vel1.y;

    if (ep->effect_vars.dust_light.lifetime != 0)
    {
        ep->effect_vars.dust_light.lifetime--;

        ep->effect_vars.dust_light.vel1.x += ep->effect_vars.dust_light.vel2.x;
        ep->effect_vars.dust_light.vel1.y += ep->effect_vars.dust_light.vel2.y;
    }
}

// 0x800FF048
efParticle* efParticle_DustLight_MakeEffect(Vec3f *pos, bool32 is_invert_vel, f32 f_index)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data = ep;

    efpart = (f_index == 2.0F) ? func_ovl0_800CE9E8(gEffectBankIndex | 8, 0x56) : func_ovl0_800CE9E8(gEffectBankIndex | 8, 0x55);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efParticle_DustLight_ProcUpdate, 1, 3);

            ep->effect_vars.dust_light.eftrans = eftrans;

            eftrans->translate = *pos;

            eftrans->translate.y += EFPART_DUSTNORMAL_OFF_Y;

            eftrans->rotate.z = lbRandom_GetFloat() * F_DEG_TO_RAD(360.0F); // DOUBLE_PI32

            angle = (lbRandom_GetFloat() * EFPART_DUSTNORMAL_ANGLE_BASE) + EFPART_DUSTNORMAL_ANGLE_ADD;

            ep->effect_vars.dust_light.vel1.x = cosf(angle) * EFPART_DUSTNORMAL_VEL_BASE;

            if (is_invert_vel == TRUE)
            {
                ep->effect_vars.dust_light.vel1.x = -ep->effect_vars.dust_light.vel1.x;
            }
            ep->effect_vars.dust_light.vel1.y = __sinf(angle) * EFPART_DUSTNORMAL_VEL_BASE;

            ep->effect_vars.dust_light.lifetime = EFPART_DUSTNORMAL_LIFETIME;

            ep->effect_vars.dust_light.vel2.x = -ep->effect_vars.dust_light.vel1.x * EFPART_DUSTNORMAL_SCATTER;
            ep->effect_vars.dust_light.vel2.y = -ep->effect_vars.dust_light.vel1.y * EFPART_DUSTNORMAL_SCATTER;
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FF278
efParticle* efParticle_DustHeavy_MakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    effect_gobj->user_data = NULL;

    efpart = func_ovl0_800CE9E8(gEffectBankIndex | 8, 0x58);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;

            eftrans->translate = *pos;

            eftrans->translate.y += EFPART_DUSTHEAVY_OFF_Y;

            if (lr == -1)
            {
                eftrans->rotate.y = F_DEG_TO_RAD(180.0F); // PI32
            }
            eftrans->proc_dead = efTransform_Default_ProcDead;
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FF384
void efParticle_DustHeavyDouble_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    s32 unused;

    ep->effect_vars.dust_heavy.anim_frame++;

    if (ep->effect_vars.dust_heavy.anim_frame == 2)
    {
        Vec3f pos = ep->effect_vars.dust_heavy.eftrans->translate;

        pos.y -= 126.0F;

        efParticle_DustHeavy_MakeEffect(&pos, -ep->effect_vars.dust_heavy.lr);
    }
}

// 0x800FF3F4
efParticle* efParticle_DustHeavyDouble_MakeEffect(Vec3f *pos, s32 lr, f32 f_index)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data = ep;

    efpart = (f_index == 1.7F) ? func_ovl0_800CE9E8(gEffectBankIndex | 8, 0x59) : func_ovl0_800CE9E8(gEffectBankIndex | 8, 0x58); // Why such a specific check when a bool could've worked?

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            omAddGObjCommonProc(effect_gobj, efParticle_DustHeavyDouble_ProcUpdate, 1, 3);

            eftrans->effect_gobj = effect_gobj;

            ep->effect_vars.dust_heavy.eftrans = eftrans;

            eftrans->translate = *pos;

            eftrans->translate.y += EFPART_DUSTHEAVY_OFF_Y;

            ep->effect_vars.dust_heavy.pos = *pos;

            ep->effect_vars.dust_heavy.anim_frame = 0;

            ep->effect_vars.dust_heavy.lr = lr;

            if (lr == -1)
            {
                eftrans->rotate.y = F_DEG_TO_RAD(180.0F); // PI32
            }
            eftrans->proc_dead = efTransform_Default_ProcDead;
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FF590
efParticle* efParticle_DustExpandLarge_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(gEffectBankIndex | 8, 0x57);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;

            eftrans->scale.x = EFPART_DUSTEXPANDLARGE_SCALE;
            eftrans->scale.y = EFPART_DUSTEXPANDLARGE_SCALE;
            eftrans->scale.z = EFPART_DUSTEXPANDLARGE_SCALE;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x800FF648
efParticle* efParticle_DustExpandSmall_MakeEffect(Vec3f *pos, f32 f_index)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data = ep;

    efpart = (f_index == 2.0F) ? func_ovl0_800CE9E8(gEffectBankIndex | 8, 0x56) : func_ovl0_800CE9E8(gEffectBankIndex | 8, 0x55);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efParticle_Default_ProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            ep->effect_vars.common.vel.y = EFPART_DUSTEXPANDSMALL_VEL_Y;
            ep->effect_vars.common.vel.x = EFPART_DUSTEXPANDSMALL_VEL_X;
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FF7D8
efParticle* efParticle_DustDash_MakeEffect(Vec3f *pos, s32 lr, f32 scale)
{
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;

    efpart = func_ovl0_800CE9E8(gEffectBankIndex | 8, 0x5A);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;

            eftrans->scale.x = scale;
            eftrans->scale.y = scale;
            eftrans->scale.z = scale;

            eftrans->translate.y += EFPART_DUSTDASH_OFF_Y;

            if (lr == -1)
            {
                eftrans->rotate.y = F_DEG_TO_RAD(180.0F); // PI32
            }
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x800FF8C0
void efParticle_DamageFlyOrbs_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    ep->effect_vars.damage_fly_orbs.lifetime--;

    if (ep->effect_vars.damage_fly_orbs.lifetime < 0)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObjCommon(effect_gobj);
    }
    else
    {
        dobj->translate.x += ep->effect_vars.damage_fly_orbs.vel.x;
        dobj->translate.y += ep->effect_vars.damage_fly_orbs.vel.y;

        ep->effect_vars.damage_fly_orbs.vel.y -= EFPART_DAMAGEFLYORBS_VEL_SUB;
    }
}

extern void *D_ovl2_8012DF74[];

// 0x800FF95C
void efParticle_DamageSpawnOrbs_ProcUpdate(GObj *this_gobj)
{
    GObj *new_gobj;
    DObj *dobj;
    efStruct *this_ep;
    efStruct *new_ep;
    f32 vel;
    f32 angle;

    this_ep = efGetStruct(this_gobj);

    if (!(this_ep->effect_vars.damage_spawn_orbs.lifetime % EFPART_DAMAGESPAWNORBS_LIFETIME_RANDOM_MOD))
    {
        new_gobj = func_ovl2_800FDAFC(D_ovl2_8012DF74);

        if (new_gobj != NULL)
        {
            dobj = DObjGetStruct(new_gobj);
            new_ep = efGetStruct(new_gobj);

            dobj->translate = this_ep->effect_vars.damage_spawn_orbs.pos;

            dobj->scale.x = dobj->scale.y = (lbRandom_GetFloat() * EFPART_DAMAGESPAWNORBS_SCALE_BASE) + EFPART_DAMAGESPAWNORBS_SCALE_ADD;

            vel = (lbRandom_GetFloat() * EFPART_DAMAGESPAWNORBS_VEL_BASE) + EFPART_DAMAGESPAWNORBS_VEL_ADD;

            angle = (lbRandom_GetFloat() * EFPART_DAMAGESPAWNORBS_ANGLE_BASE) + EFPART_DAMAGESPAWNORBS_ANGLE_ADD1 + EFPART_DAMAGESPAWNORBS_ANGLE_ADD2;

            new_ep->effect_vars.damage_fly_orbs.vel.x = cosf(angle) * vel;
            new_ep->effect_vars.damage_fly_orbs.vel.y = __sinf(angle) * vel;
            new_ep->effect_vars.damage_fly_orbs.lifetime = lbRandom_GetIntRange(EFPART_DAMAGESPAWNORBS_LIFETIME_RANDOM_MOD) + EFPART_DAMAGESPAWNORBS_LIFETIME_ADD;
        }
    }
    this_ep->effect_vars.damage_spawn_orbs.lifetime--;

    if (this_ep->effect_vars.damage_spawn_orbs.lifetime < 0)
    {
        efManager_SetPrevAlloc(this_ep);
        omEjectGObjCommon(this_gobj);
    }
}

extern void *D_ovl2_8012DF9C[];

// 0x800FFAB8
GObj* efParticle_DamageSpawnOrbs_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efStruct *ep;

    effect_gobj = func_ovl2_800FDAFC(D_ovl2_8012DF9C);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->effect_vars.damage_spawn_orbs.pos = *pos;

    ep->effect_vars.damage_spawn_orbs.lifetime = (lbRandom_GetIntRange(3) * 4) + 4;

    return effect_gobj;
}

// 0x800FFB38
GObj* efParticle_DamageSpawnOrbs_CheckRandomMakeEffect(Vec3f *pos)
{
    if (lbRandom_GetIntRange(4) != 0)
    {
        return NULL;
    }
    else return efParticle_DamageSpawnOrbs_MakeEffect(pos);
}

u8 efParticle_ImpactSW_PrimColorR[8] = { 255,   0,   0, 255, 255,   0,   0,   0 };
u8 efParticle_ImpactSW_PrimColorG[8] = {   0, 255,   0, 255, 255,   0,   0,   0 };
u8 efParticle_ImpactSW_PrimColorB[8] = {   0,   0, 255,   0, 255,   0,   0,   0 };
u8 efParticle_ImpactSW_EnvColorR[8]  = {   0,   0,   0,   0,   0,   0,   0,   0 };
u8 efParticle_ImpactSW_EnvColorG[8]  = {   0,   0,   0,   0,   0,   0,   0,   0 };
u8 efParticle_ImpactSW_EnvColorB[8]  = {   0,   0,   0,   0,   0,   0,   0,   0 };

// 0x800FFB74
void efParticle_ImpactSW_ProcRender(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    s32 index = ep->effect_vars.impact_sw.index;

    gDPPipeSync(gpDisplayListHead[0]++);

    gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    gDPSetPrimColor(gpDisplayListHead[0]++, 0, 0, efParticle_ImpactSW_PrimColorR[index], efParticle_ImpactSW_PrimColorG[index], efParticle_ImpactSW_PrimColorB[index], (s32)ep->effect_vars.impact_sw.alpha);

    gDPSetEnvColor(gpDisplayListHead[0]++, efParticle_ImpactSW_EnvColorR[index], efParticle_ImpactSW_EnvColorG[index], efParticle_ImpactSW_EnvColorB[index], 255);

    func_80013E68(effect_gobj);
}

// 0x800FFCA4
void efParticle_ImpactSW_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        efManager_SetPrevAlloc(efGetStruct(effect_gobj));
        omEjectGObjCommon(effect_gobj);
    }
    else
    {
        ep->effect_vars.impact_sw.alpha -= ep->effect_vars.impact_sw.decay;

        if (ep->effect_vars.impact_sw.alpha > 255)
        {
            ep->effect_vars.impact_sw.alpha = 255;
        }
        else if (ep->effect_vars.impact_sw.alpha < 0)
        {
            ep->effect_vars.impact_sw.alpha = 0;
        }
    }
}

// 0x800FFD58
GObj* efParticle_ImpactSW_MakeEffect(Vec3f *pos, s32 index, f32 rotate)
{
    GObj *effect_gobj = func_ovl2_800FDAFC(D_ovl2_8012DFC4);
    DObj *dobj;
    efStruct *ep;

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);
    ep = efGetStruct(effect_gobj);

    dobj->translate = *pos;

    dobj->rotate.z = rotate;

    ep->effect_vars.impact_sw.index = index;
    ep->effect_vars.impact_sw.alpha = 255.0F;
    ep->effect_vars.impact_sw.decay = 127.0F / 11.0F;

    return effect_gobj;
}

// 0x800FFDE8
GObj* efParticle_ImpactAirSW_MakeEffect(Vec3f *pos, s32 index)
{
    return efParticle_ImpactSW_MakeEffect(pos, index, 0.0F);
}

// 0x800FFE08
void efParticle_StarRodSpark_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObjCommon(effect_gobj);

        return;
    }
    else
    {
        if (ep->effect_vars.star_rod_spark.add_timer != 0)
        {
            ep->effect_vars.star_rod_spark.add_timer--;

            ep->effect_vars.star_rod_spark.vel.x += ep->effect_vars.star_rod_spark.add.x;
        }
        DObjGetStruct(effect_gobj)->translate.x += ep->effect_vars.star_rod_spark.vel.x;
    }
}

extern void *D_ovl2_8012DFEC[];

// 0x800FFEA4
GObj* efParticle_StarRodSpark_MakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    DObj *dobj;
    efStruct *ep;

    effect_gobj = func_ovl2_800FDAFC(D_ovl2_8012DFEC);

    if (effect_gobj != NULL)
    {
        dobj = DObjGetStruct(effect_gobj);
        ep = efGetStruct(effect_gobj);

        dobj->translate = *pos;

        dobj->rotate.z = lbRandom_GetFloat() * F_DEG_TO_RAD(360.0F); // DOUBLE_PI32

        dobj->scale.x = EFPART_STARRODSPARK_SCALE;
        dobj->scale.y = EFPART_STARRODSPARK_SCALE;

        ep->effect_vars.star_rod_spark.vel.x = lr * EFPART_STARRODSPARK_VEL_BASE;
        ep->effect_vars.star_rod_spark.add.x = lr * EFPART_STARRODSPARK_VEL_ADD;
        ep->effect_vars.star_rod_spark.add_timer = EFPART_STARRODSPARK_ADD_TIMER;
    }
    return effect_gobj;
}

// 0x800FFF74
void efParticle_DamageFlySparks_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObjCommon(effect_gobj);
    }
    else
    {
        DObj *dobj = DObjGetStruct(effect_gobj);

        dobj->translate.x += ep->effect_vars.damage_fly_sparks.vel.x;
        dobj->translate.y += ep->effect_vars.damage_fly_sparks.vel.y;

        if (ep->effect_vars.damage_fly_sparks.add_timer != 0)
        {
            ep->effect_vars.damage_fly_sparks.add_timer--;

            ep->effect_vars.damage_fly_sparks.vel.x += ep->effect_vars.damage_fly_sparks.add.x;
            ep->effect_vars.damage_fly_sparks.vel.y += ep->effect_vars.damage_fly_sparks.add.y;
        }
    }
}

// Offset shenanigans, the assembler thinks this begins at 0x8012DE88, but it really starts at 0x8012DE80; the +2 from the index is absorbed into the absolute address
f32 efParticle_DamageSpawnSparks_Angles[3] = { 18.0F, 0.0F -18.0F }; 
extern void *D_ovl2_8012E014[];

// 0x80100030
void efParticle_DamageSpawnSparks_ProcUpdate(GObj *effect_gobj)
{
    efStruct *this_ep;
    DObj *dobj;
    efStruct *new_ep;
    GObj *new_gobj;
    s32 lifetime;
    f32 angle;
    f32 var;
    f32 unused;

    this_ep = efGetStruct(effect_gobj);
    lifetime = this_ep->effect_vars.damage_spawn_sparks.lifetime;

    if (!(lifetime % EFPART_DAMAGESPAWNSPARK_LIFETIME_MOD))
    {
        new_gobj = func_ovl2_800FDAFC(D_ovl2_8012E014);

        if (new_gobj != NULL)
        {
            dobj = DObjGetStruct(new_gobj);
            new_ep = efGetStruct(new_gobj);

            dobj->translate = this_ep->effect_vars.damage_spawn_sparks.pos;

            dobj->rotate.z = lbRandom_GetFloat() * F_DEG_TO_RAD(360.0F);

            var = efParticle_DamageSpawnSparks_Angles[ -(lifetime / EFPART_DAMAGESPAWNSPARK_LIFETIME_MOD) + (EFPART_DAMAGESPAWNSPARK_LIFETIME_MOD / 2) ];

            angle = F_DEG_TO_RAD(var);

            new_ep->effect_vars.damage_fly_sparks.vel.x = cosf(angle) * EFPART_DAMAGESPAWNSPARK_VEL_BASE * this_ep->effect_vars.damage_spawn_sparks.lr;
            new_ep->effect_vars.damage_fly_sparks.vel.y = __sinf(angle) * EFPART_DAMAGESPAWNSPARK_VEL_BASE;

            new_ep->effect_vars.damage_fly_sparks.add.x = -new_ep->effect_vars.damage_fly_sparks.vel.x * EFPART_DAMAGESPAWNSPARK_VEL_ADD;
            new_ep->effect_vars.damage_fly_sparks.add.y = -new_ep->effect_vars.damage_fly_sparks.vel.y * EFPART_DAMAGESPAWNSPARK_VEL_ADD;

            new_ep->effect_vars.damage_fly_sparks.add_timer = EFPART_DAMAGESPAWNSPARK_ADD_TIMER;
        }
    }
    this_ep->effect_vars.damage_spawn_sparks.lifetime--;

    if (this_ep->effect_vars.damage_spawn_sparks.lifetime < 0)
    {
        efManager_SetPrevAlloc(this_ep);
        omEjectGObjCommon(effect_gobj);
    }
}

extern void *D_ovl2_8012E03C[];

// 0x801001A8
GObj* efParticle_DamageSpawnSparks_MakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    efStruct *ep;

    effect_gobj = func_ovl2_800FDAFC(D_ovl2_8012E03C);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->effect_vars.damage_spawn_sparks.pos = *pos;
    ep->effect_vars.damage_spawn_sparks.lifetime = EFPART_DAMAGESPAWNSPARK_LIFETIME;
    ep->effect_vars.damage_spawn_sparks.lr = lr;

    return effect_gobj;
}

// 0x80100218
GObj* efParticle_DamageSpawnSparks_CheckRandomMakeEffect(Vec3f *pos, s32 lr)
{
    if (lbRandom_GetIntRange(4) != 0)
    {
        return NULL;
    }
    else return efParticle_DamageSpawnSparks_MakeEffect(pos, lr);
}

f32 efParticle_DamageSpawnMDust_Angles[3] = { 18.0F, 0.0F, -18.0F };
void *D_ovl2_8012E064[];

// 0x80100258
void efParticle_DamageSpawnMDust_ProcUpdate(GObj *effect_gobj)
{
    efStruct *this_ep;
    DObj *dobj;
    efStruct *new_ep;
    GObj *new_gobj;
    s32 lifetime;
    f32 angle;
    f32 var;
    f32 unused;

    this_ep = efGetStruct(effect_gobj);
    lifetime = this_ep->effect_vars.damage_spawn_mdust.lifetime;

    if (!(lifetime % EFPART_DAMAGESPAWNMDUST_LIFETIME_MOD))
    {
        new_gobj = func_ovl2_800FDAFC(D_ovl2_8012E064);

        if (new_gobj != NULL)
        {
            dobj = DObjGetStruct(new_gobj);
            new_ep = efGetStruct(new_gobj);

            dobj->translate = this_ep->effect_vars.damage_spawn_mdust.pos;

            dobj->rotate.z = lbRandom_GetFloat() * F_DEG_TO_RAD(360.0F);

            var = efParticle_DamageSpawnMDust_Angles[ -(lifetime / EFPART_DAMAGESPAWNMDUST_LIFETIME_MOD) + (EFPART_DAMAGESPAWNMDUST_LIFETIME_MOD / 2) ];

            angle = F_DEG_TO_RAD(var);

            new_ep->effect_vars.damage_fly_mdust.vel.x = cosf(angle) * EFPART_DAMAGESPAWNMDUST_VEL_BASE * this_ep->effect_vars.damage_spawn_mdust.lr;
            new_ep->effect_vars.damage_fly_mdust.vel.y = __sinf(angle) * EFPART_DAMAGESPAWNMDUST_VEL_BASE;

            new_ep->effect_vars.damage_fly_mdust.add.x = -new_ep->effect_vars.damage_fly_mdust.vel.x * EFPART_DAMAGESPAWNMDUST_VEL_ADD;
            new_ep->effect_vars.damage_fly_mdust.add.y = -new_ep->effect_vars.damage_fly_mdust.vel.y * EFPART_DAMAGESPAWNMDUST_VEL_ADD;

            new_ep->effect_vars.damage_fly_mdust.add_timer = EFPART_DAMAGESPAWNMDUST_ADD_TIMER;
        }
    }
    this_ep->effect_vars.damage_spawn_mdust.lifetime--;

    if (this_ep->effect_vars.damage_spawn_mdust.lifetime < 0)
    {
        efManager_SetPrevAlloc(this_ep);
        omEjectGObjCommon(effect_gobj);
    }
}

extern void *D_ovl2_8012E08C[];

// 0x801003D0
GObj* efParticle_DamageSpawnMDust_MakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    efStruct *ep;

    effect_gobj = func_ovl2_800FDAFC(D_ovl2_8012E08C);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->effect_vars.damage_spawn_mdust.pos = *pos;
    ep->effect_vars.damage_spawn_mdust.lifetime = EFPART_DAMAGESPAWNMDUST_LIFETIME;
    ep->effect_vars.damage_spawn_mdust.lr = lr;

    return effect_gobj;
}

// 0x80100440
GObj* efParticle_DamageSpawnMDust_CheckRandomMakeEffect(Vec3f *pos, s32 lr)
{
    if (lbRandom_GetIntRange(4) != 0)
    {
        return NULL;
    }
    else return efParticle_DamageSpawnMDust_MakeEffect(pos, lr);
}

// 0x80100480
efParticle* efParticle_SparkleWhite_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(gEffectBankIndex | 8, 0x73);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x80100524
efParticle* efParticle_SparkleWhiteMulti_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(gEffectBankIndex | 8, 0x1A);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x801005C8
efParticle* efParticle_SparkleWhiteMultiExplode_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(gEffectBankIndex | 8, 0x22);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x8010066C
efParticle* efParticle_SparkleWhiteScale_MakeEffect(Vec3f *pos, f32 scale)
{
    efParticle *efpart = func_ovl0_800CE9E8(gEffectBankIndex, 0x5B);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;

            eftrans->scale.x = scale;
            eftrans->scale.y = scale;
            eftrans->scale.z = scale;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x80100720 - Plays when a fighter is Star KO'd
efParticle* efParticle_SparkleWhiteDead_MakeEffect(Vec3f *pos, f32 scale)
{
    efParticle *efpart = func_ovl0_800CE9E8(gEffectBankIndex | 0x10, 0x5C);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;

            eftrans->scale.x = scale;
            eftrans->scale.y = scale;
            eftrans->scale.z = scale;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x801007D8
void efParticle_Quake_ProcUpdate(GObj *effect_gobj)
{
    DObj *dobj;
    Vec3f sub;
    Vec3f pos;
    OMCamera *cam;
    f32 mag;

    func_8000DF34(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        efManager_SetPrevAlloc(efGetStruct(effect_gobj));
        omEjectGObjCommon(effect_gobj);
    }
    else
    {
        cam = OMCameraGetStruct(gpCameraGObj);

        dobj = DObjGetStruct(effect_gobj);

        vec3f_sub(&sub, &cam->pan, &cam->rotate);

        mag = vec3f_mag(&sub);

        if (mag > EFPART_QUAKE_MAGNITUDE)
        {
            mag = mag / EFPART_QUAKE_MAGNITUDE;

            pos.x = dobj->translate.z * mag;
            pos.y = dobj->translate.y * mag;
        }
        else
        {
            pos.x = dobj->translate.z;
            pos.y = dobj->translate.y;
        }
        pos.z = 0.0F;

        func_ovl2_8010D128(&pos);
    }
}

// 0x801008B8
void efParticle_Quake_AddProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    omAddGObjCommonProc(effect_gobj, efParticle_Quake_ProcUpdate, 1, ep->effect_vars.quake.priority);

    effect_gobj->call_unk = NULL;
}

extern intptr_t D_NF_0000CBC0;
extern intptr_t D_NF_0000CC20;
extern intptr_t D_NF_0000CCF0;
extern intptr_t D_NF_0000CDC0;
extern void *D_ovl2_801313B0;

// 0x801008F4
GObj* efParticle_Quake_MakeEffect(s32 magnitude) // Linker things here
{
    s32 unused[2];
    efStruct *ep;
    GObj *effect_gobj;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, efParticle_Quake_AddProcUpdate, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    effect_gobj->user_data = ep;

    func_80008CC0(func_800092D0(effect_gobj, NULL), 0x12U, 0U);

    switch (magnitude)
    {
    case 0:
        func_8000BD8C(effect_gobj, (intptr_t)D_ovl2_801313B0 + (intptr_t)&D_NF_0000CBC0, 0.0F);
        break;

    case 1:
        func_8000BD8C(effect_gobj, (intptr_t)D_ovl2_801313B0 + (intptr_t)&D_NF_0000CC20, 0.0F);
        break;

    case 2:
        func_8000BD8C(effect_gobj, (intptr_t)D_ovl2_801313B0 + (intptr_t)&D_NF_0000CCF0, 0.0F);
        break;

    case 3: // Used by POW Block 
        func_8000BD8C(effect_gobj, (intptr_t)D_ovl2_801313B0 + (intptr_t)&D_NF_0000CDC0, 0.0F);
        break;

    default:
        break;
    }
    func_8000DF34(effect_gobj);

    ep->effect_vars.quake.priority = 3 - magnitude;

    return effect_gobj;
}

// 0x80100A58
void efTransform_DamageCoin_ProcDead(efTransform *eftrans)
{
    Vec3f pos = eftrans->translate;

    pos.y += 200.0F;

    efParticle_DustExpandSmall_MakeEffect(&pos, 2.0F);
    efManager_SetPrevAlloc(efGetStruct(eftrans->effect_gobj));
    omEjectGObjCommon(eftrans->effect_gobj);
}

// 0x80100ACC
efParticle* efParticle_DamageCoin_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }

    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data = ep;

    efpart = func_ovl0_800CE9E8(gEffectBankIndex, 0x60);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_DamageCoin_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x80100BF0
efParticle* efParticle_DamageShieldImpact_MakeEffect(Vec3f *pos, s32 size)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 vel;
    f32 angle;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6, 0x80000000);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data = ep;

    efpart = func_ovl0_800CE9E8(gEffectBankIndex | 8, 0x65);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efParticle_Default_ProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            vel = (lbRandom_GetFloat() * 18.0F) + 12.0F;
            angle = lbRandom_GetFloat() * F_DEG_TO_RAD(360.0F); // DOUBLE_PI32

            ep->effect_vars.common.vel.x = cosf(angle) * vel;
            ep->effect_vars.common.vel.y = __sinf(angle) * vel;

            scale = (size < 10) ? (((10 - size) * -0.05F) + 1.0F) : (((size - 10) * 0.15F) + 1.0F);

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = scale;
        }
        else efpart = efManager_DestroyParticleGObj(efpart, effect_gobj);
    }
    else efManager_DestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

extern intptr_t D_NF_00002040;
extern void *D_ovl2_8012E0B4[];
extern void *D_ovl2_801313B4;

// 0x80100DEC
GObj* efParticle_FireSpark_MakeEffect(GObj *fighter_gobj) // I really have no idea where this effect is used; it can only be created by script
{
    ftStruct *fp;
    efStruct *ep;
    GObj *effect_gobj;
    DObj *dobj;

    fp = ftGetStruct(fighter_gobj);

    effect_gobj = func_ovl2_800FDAFC(D_ovl2_8012E0B4);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    fp->is_persist_effect = TRUE;

    ep = efGetStruct(effect_gobj);
    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.y = 160.0F;
    dobj->attach_dobj = fp->joint[16];

    func_ovl0_800C9314(dobj->next, (uintptr_t)D_ovl2_801313B4 + (intptr_t)&D_NF_00002040, effect_gobj); // Linker thing

    return effect_gobj;
}

extern intptr_t D_ovl2_8012E0DC[4];
extern void *D_ovl2_80130EA0;

// 0x80100E84
void efTransform_Reflector_SetImageIndex(GObj *effect_gobj, s32 index)
{
    efStruct *ep = efGetStruct(effect_gobj);

    ep->effect_vars.reflector.index = index;

    func_8000BD8C(effect_gobj, (uintptr_t)D_ovl2_80130EA0 + (intptr_t)D_ovl2_8012E0DC[index], 0.0F);
    func_8000DF34(effect_gobj);
}

// 0x80100ED4
void efParticle_Reflector_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        switch (ep->effect_vars.reflector.index)
        {
        case 1:
            break;

        case 0:
        case 2:
            efTransform_Reflector_SetImageIndex(effect_gobj, 1);
            break;

        case 3:
            efManager_SetPrevAlloc(ep);
            omEjectGObjCommon(effect_gobj);
            return;
        }
    }
    if (ep->effect_vars.reflector.status != 4)
    {
        efTransform_Reflector_SetImageIndex(effect_gobj, ep->effect_vars.reflector.status);

        ep->effect_vars.reflector.status = 4;
    }
}

extern void *D_ovl2_8012E0EC[];

// 0x80100FA4
GObj* efParticle_Reflector_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj = func_ovl2_800FDB1C(D_ovl2_8012E0EC);
    efStruct *ep;

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    DObjGetStruct(effect_gobj)->attach_dobj = ftGetStruct(fighter_gobj)->joint[0];

    ep->effect_vars.reflector.index = 0;
    ep->effect_vars.reflector.status = 4;

    return effect_gobj;
}

// 0x80101008
void jtgt_ovl2_80101008(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (ep->effect_vars.shield.is_damage_shield != FALSE)
    {
        ep->effect_vars.shield.is_damage_shield = FALSE;
    }
}

GfxColor efParticle_Shield_GfxColors[GMMATCH_PLAYERS_MAX + 1][2] = 
{
    { { 0xFF, 0xFF, 0xFF }, { 0xFF, 0x00, 0x00 } }, // Player 1
    { { 0xFF, 0xFF, 0xFF }, { 0x00, 0xFF, 0x00 } }, // Player 2
    { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0xFF } }, // Player 3
    { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0x00 } }, // Player 4 / CPU
    { { 0xFF, 0xFF, 0xFF }, { 0xC0, 0xC0, 0xC0 } }  // Shield Damage
};

// 0x80101024
void efParticle_Shield_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    s32 index = (ep->effect_vars.shield.is_damage_shield != FALSE) ? GMMATCH_PLAYERS_MAX : ep->effect_vars.shield.player;

    gDPPipeSync(gpDisplayListHead[1]++);

    gDPSetPrimColor(gpDisplayListHead[1]++, 0, 0, efParticle_Shield_GfxColors[index][0].r, efParticle_Shield_GfxColors[index][0].g, efParticle_Shield_GfxColors[index][0].b, 0xC0);
    gDPSetEnvColor(gpDisplayListHead[1]++, efParticle_Shield_GfxColors[index][1].r, efParticle_Shield_GfxColors[index][1].g, efParticle_Shield_GfxColors[index][1].b, 0xC0);

    func_80014768(effect_gobj);
}

void *D_ovl2_8012E134[];

// 0x80101108
GObj* efParticle_Shield_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;

    fp = ftGetStruct(fighter_gobj);

    effect_gobj = func_ovl2_800FDB1C(D_ovl2_8012E134);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    fp->is_persist_effect = TRUE;

    DObjGetStruct(effect_gobj)->attach_dobj = fp->joint[ftParts_YRotN_Joint];

    ep->effect_vars.shield.player = fp->player;
    ep->effect_vars.shield.is_shield_damage = FALSE;

    return effect_gobj;
}

// 0x80101180
void efParticle_YoshiShield_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    ftStruct *fp = ftGetStruct(ep->fighter_gobj);
    f32 blend = 1.0F - (fp->shield_health / 55.0F);
    u8 color[3];

    if (blend < 0.0F)
    {
        blend = 0.0F;
    }
    color[GfxColorIndexR] = 174 * blend;
    color[GfxColorIndexG] = 214 * blend;
    color[GfxColorIndexB] = 214 * blend;

    gDPPipeSync(gpDisplayListHead[1]++);

    gDPSetEnvColor(gpDisplayListHead[1]++, color[GfxColorIndexR], color[GfxColorIndexG], color[GfxColorIndexB], 0x00);

    func_80013E8C(effect_gobj);

    func_ovl2_800FCCC0(effect_gobj);
}

extern void *D_ovl2_8012E15C[];

// 0x80101374
GObj* efParticle_YoshiShield_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;

    fp = ftGetStruct(fighter_gobj);

    effect_gobj = func_ovl2_800FDB1C(D_ovl2_8012E15C);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    fp->is_persist_effect = TRUE;

    DObjGetStruct(effect_gobj)->attach_dobj = fp->joint[ftParts_YRotN_Joint];
    DObjGetStruct(effect_gobj)->scale.x = DObjGetStruct(effect_gobj)->scale.y = 1.5F;

    ep->effect_vars.shield.player = fp->player;
    ep->effect_vars.shield.is_shield_damage = FALSE;

    return effect_gobj;
}

// 0x80101408
efParticle* efParticle_ThunderHit_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(gEffectBankIndex, 0x74);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x801014A8
efGenerator* efGenerator_Ripple_MakeEffect(Vec3f *pos)
{
    efGenerator *efgen = func_ovl0_800D35DC(gEffectBankIndex, 0x61);

    if (efgen != NULL)
    {
        efgen->pos.x = pos->x;
        efgen->pos.y = pos->y;
        efgen->pos.z = pos->z;
    }
    return efgen;
}

extern void *D_ovl2_8012E184[];

// 0x80101500
GObj* efParticle_CatchSwirl_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = func_ovl2_800FDAFC(D_ovl2_8012E184);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate = *pos;

    return effect_gobj;
}

extern void *D_ovl2_8012E1AC[];

// 0x8010155C
GObj* efParticle_ReflectBreak_MakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = func_ovl2_800FDAFC(D_ovl2_8012E1AC);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate = *pos;

    if (lr == -1)
    {
        dobj->rotate.y = F_DEG_TO_RAD(180.0F);
    }
    return effect_gobj;
}

// 0x801015D4
efParticle* efParticle_FuraSparkle_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE870(gEffectBankIndex | 8, 0);

    if (efpart != NULL)
    {
        efpart->pos.x = pos->x;
        efpart->pos.y = pos->y;
        efpart->pos.z = pos->z;
    }
    return efpart;
}

// 0x80101630
efParticle* efParticle_Psionic_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE870(gEffectBankIndex, 7);

    if (efpart != NULL)
    {
        efpart->pos.x = pos->x;
        efpart->pos.y = pos->y;
        efpart->pos.z = pos->z;
    }
    return efpart;
}

// 0x80101688
efParticle* efParticle_FlashSmall_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE870(gEffectBankIndex, 4);

    if (efpart != NULL)
    {
        efpart->pos.x = pos->x;
        efpart->pos.y = pos->y;
        efpart->pos.z = pos->z;
    }
    return efpart;
}

// 0x801016E0
efParticle* efParticle_FlashMiddle_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE870(gEffectBankIndex, 5);

    if (efpart != NULL)
    {
        efpart->pos.x = pos->x;
        efpart->pos.y = pos->y;
        efpart->pos.z = pos->z;
    }
    return efpart;
}

// 0x80101738
efParticle* efParticle_FlashLarge_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE870(gEffectBankIndex, 6);

    if (efpart != NULL)
    {
        efpart->pos.x = pos->x;
        efpart->pos.y = pos->y;
        efpart->pos.z = pos->z;
    }
    return efpart;
}

// 0x80101790
efGenerator* efParticle_ShieldBreak_MakeEffect(Vec3f *pos)
{
    efGenerator *efgen = func_ovl0_800D35DC(gEffectBankIndex, 3);

    if (efgen != NULL)
    {
        efgen->pos.x = pos->x;
        efgen->pos.y = pos->y;
        efgen->pos.z = pos->z;
    }
    return efgen;
}

// 0x801017E8
void func_ovl2_801017E8(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    if (ep->effect_vars.unknown1.efvars_unk1_0x0 == 0)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObjCommon(effect_gobj);
    }
    else ep->effect_vars.unknown1.efvars_unk1_0x0--;
}

extern efCreateDesc D_ovl2_8012E1D4;

// 0x8010183C
GObj* func_ovl2_8010183C(Vec3f *pos, s32 arg1)
{
    GObj *effect_gobj;
    efStruct *ep;
    DObj *dobj;

    effect_gobj = func_ovl2_800FDAFC(&D_ovl2_8012E1D4);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->effect_vars.unknown1.efvars_unk1_0x0 = arg1;

    dobj = DObjGetStruct(effect_gobj);
    dobj->translate = *pos;

    return effect_gobj;
}

extern intptr_t D_NF_00001850;
extern intptr_t D_NF_00001970;
extern intptr_t D_NF_00001AC0;
extern intptr_t D_NF_00001B10;
extern efCreateDesc D_ovl2_8012E1FC;
extern void *D_ovl2_801310C0;

// 0x801018A8
GObj* efParticle_ThunderShock_MakeEffect(GObj *fighter_gobj, Vec3f *pos, s32 frame)
{
    GObj *effect_gobj;
    efStruct *ep;
    DObj *dobj;

    effect_gobj = func_ovl2_800FDAFC(&D_ovl2_8012E1FC);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);
    dobj->attach_dobj = ftGetStruct(fighter_gobj)->joint[ftParts_TopN_Joint];

    dobj->next->translate = *pos;

    dobj->next->translate.x = (ftGetStruct(fighter_gobj)->lr == -1) ? -pos->x : pos->x;

    func_80008CC0(dobj->next->next, 0x2E, 0);

    switch (frame)
    {
    case 1:
        func_8000BED8(effect_gobj, (uintptr_t)D_ovl2_801310C0 + (intptr_t)&D_NF_00001850, (uintptr_t)D_ovl2_801310C0 + (intptr_t)&D_NF_00001AC0, 0.0F); // Linker thing
        func_8000DF34(effect_gobj);
        break;

    case 2:
        func_8000BED8(effect_gobj, (uintptr_t)D_ovl2_801310C0 + (intptr_t)&D_NF_00001970, (uintptr_t)D_ovl2_801310C0 + (intptr_t)&D_NF_00001B10, 0.0F); // Linker thing
        func_8000DF34(effect_gobj);
        break;
    }
    return effect_gobj;
}