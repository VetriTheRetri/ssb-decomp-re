#include <it/item.h>
#include <gr/ground.h>

extern intptr_t lPorygonHitParty;

itCreateDesc itGround_Porygon_ItemDesc = 
{
    It_Kind_Porygon,                        // Item Kind
    &gGroundStruct.yamabuki.item_head,      // Pointer to item file data?
    0x16C,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itPorygon_SDefault_ProcUpdate,          // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x80183B10
void itPorygon_SDefault_UpdateHitParty(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itHitParty *hit_party = itGetHitParty(itGround_Porygon_ItemDesc, lPorygonHitParty); // (itHitParty*) ((uintptr_t)*itGround_Porygon_ItemDesc.p_file + (intptr_t)&Porygon_Event); // Linker thing

    if (ip->it_multi == hit_party[ip->item_event_index].timer)
    {
        ip->item_hit.angle            = hit_party[ip->item_event_index].angle;
        ip->item_hit.damage           = hit_party[ip->item_event_index].damage;
        ip->item_hit.size             = hit_party[ip->item_event_index].size;
        ip->item_hit.knockback_scale  = hit_party[ip->item_event_index].knockback_scale;
        ip->item_hit.knockback_weight = hit_party[ip->item_event_index].knockback_weight;
        ip->item_hit.knockback_base   = hit_party[ip->item_event_index].knockback_base;
        ip->item_hit.element          = hit_party[ip->item_event_index].element;
        ip->item_hit.can_setoff       = hit_party[ip->item_event_index].can_setoff;
        ip->item_hit.shield_damage    = hit_party[ip->item_event_index].shield_damage;
        ip->item_hit.hit_sfx          = hit_party[ip->item_event_index].hit_sfx;

        ip->item_event_index++;

        if (ip->item_event_index == 2)
        {
            ip->item_event_index = 1;
        }
    }
    ip->it_multi++;

    if (ip->it_multi == ITPORYGON_SHAKE_STOP_WAIT)
    {
        Vec3f pos = DObjGetStruct(item_gobj)->translate.vec.f;

        pos.y = 0.0F;

        efParticle_DustLight_MakeEffect(&pos, LR_Left, 1.0F);
    }
}

// 0x80183C84
sb32 itPorygon_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    joint->translate.vec.f.x += ip->item_vars.porygon.offset.x;
    joint->translate.vec.f.y += ip->item_vars.porygon.offset.y;

    itPorygon_SDefault_UpdateHitParty(item_gobj);

    if (joint->dobj_f0 == (f32)FLOAT_NEG_MAX)
    {
        grYamabuki_Gate_SetClosedWait();

        return TRUE;
    }
    else return FALSE;
}

// 0x80183D00
GObj* itGround_Porygon_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itGround_Porygon_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_vars.porygon.offset = *pos;

        ip->is_allow_knockback = TRUE;

        ip->it_multi = 0;

        ip->item_event_index = 0;

        func_800269C0(alSound_Voice_YamabukiPorygon);
    }
    return item_gobj;
}