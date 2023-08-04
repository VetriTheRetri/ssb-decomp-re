#include <it/item.h>

enum itMarumineStatus
{
    itStatus_Marumine_NExplode,
    itStatus_Marumine_EnumMax
};

extern intptr_t Marumine_Event;

extern void *D_ovl2_801313F4;

itCreateDesc itGround_Marumine_ItemDesc = 
{
    It_Kind_Marumine,                       // Item Kind
    &D_ovl2_801313F4,                       // Pointer to item file data?
    0x104,                                  // Offset of item attributes in file?
    0x12,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itMarumine_SDefault_ProcUpdate,         // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itGround_Marumine_StatusDesc[itStatus_Marumine_EnumMax] = 
{
    // Status 0 (Neutral Explosion)
    {
        itMarumine_NExplode_ProcUpdate,     // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x801837A0
void itMarumine_NExplode_CreateGFXGotoSetStatus(GObj *item_gobj)
{
    s32 unused;
    efParticle *ep;
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    ep = efParticle_SparkleWhiteMultiExplode_MakeEffect(&joint->translate);

    if (ep != NULL)
    {
        ep->effect_info->scale.x = ITMARUMINE_EXPLODE_GFX_SCALE;
        ep->effect_info->scale.y = ITMARUMINE_EXPLODE_GFX_SCALE;
        ep->effect_info->scale.z = ITMARUMINE_EXPLODE_GFX_SCALE;
    }
    efParticle_Quake_MakeEffect(1);

    DObjGetStruct(item_gobj)->unk_0x54 = 2;

    ip->item_hit.hit_sfx = gmSound_SFX_ExplodeL;

    itMain_RefreshHit(item_gobj);
    itMarumine_NExplode_SetStatus(item_gobj);
}


// 0x80183830
void itMarumine_NExplode_UpdateHitEvent(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itHitEvent *ev = itGetHitEvent(itGround_Marumine_ItemDesc, Marumine_Event); // (itHitEvent*) ((uintptr_t)*itGround_Marumine_ItemDesc.p_file + (intptr_t)&Marumine_Event); // Linker thing

    if (ip->it_multi == ev[ip->item_event_index].timer)
    {
        ip->item_hit.angle  = ev[ip->item_event_index].angle;
        ip->item_hit.damage = ev[ip->item_event_index].damage;
        ip->item_hit.size   = ev[ip->item_event_index].size;

        ip->item_hit.can_reflect = FALSE;
        ip->item_hit.can_shield = FALSE;

        ip->item_hit.element = gmHitCollision_Element_Fire;

        ip->item_hit.rebound = FALSE;

        ip->item_event_index++;

        if (ip->item_event_index == 4)
        {
            ip->item_event_index = 3;
        }
    }
}

// 0x80183914
bool32 itMarumine_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    joint->translate.x += ip->item_vars.marumine.offset.x;
    joint->translate.y += ip->item_vars.marumine.offset.y;

    if (joint->dobj_f0 == (f32)FLOAT_NEG_MAX)
    {
        itMain_RefreshHit(item_gobj);
        itMain_ClearOwnerStats(item_gobj);

        ip->item_vars.marumine.offset.x = 0.0F;
        ip->item_vars.marumine.offset.y = 0.0F;

        itMarumine_NExplode_CreateGFXGotoSetStatus(item_gobj);
        func_800269C0(gmSound_SFX_ExplodeL);
    }
    return FALSE;
}

// 0x801839A8
bool32 itMarumine_NExplode_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    joint->translate.x += ip->item_vars.marumine.offset.x;
    joint->translate.y += ip->item_vars.marumine.offset.y;

    itMarumine_NExplode_UpdateHitEvent(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITMARUMINE_EXPLODE_LIFETIME)
    {
        func_ovl2_8010B0B8();

        return TRUE;
    }
    else return FALSE;
}

// 0x80183A20
void itMarumine_NExplode_SetStatus(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    ap->it_multi = 0;

    ap->item_hit.stale = ITEM_STALE_DEFAULT;

    ap->item_event_index = 0;

    itMarumine_NExplode_UpdateHitEvent(item_gobj);
    itMain_SetItemStatus(item_gobj, itGround_Marumine_StatusDesc, itStatus_Marumine_NExplode);
}

// 0x80183A74
GObj* itGround_Marumine_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itGround_Marumine_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ap = itGetStruct(item_gobj);
        DObj *joint = DObjGetStruct(item_gobj);

        ap->item_vars.marumine.offset = *pos;

        ap->is_allow_knockback = TRUE;

        func_80008CC0(joint, 0x46, 0);
        func_800269C0(gmSound_Voice_YCityMarumine);
    }
    return item_gobj;
}