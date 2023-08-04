#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

extern s32 grYamabuki_MonsterFlag_Prev;
extern intptr_t Fushigibana_Event;
extern void *D_ovl2_801313F4;

itCreateDesc itGround_Fushigibana_ItemDesc =
{
    It_Kind_Fushigibana,                    // Item Kind
    &D_ovl2_801313F4,                       // Pointer to item file data?
    0x278,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itFushigibana_SDefault_ProcUpdate,      // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

wpCreateDesc wpFushigibana_Razor_WeaponDesc =
{
    3,                                      // Render flags?
    Wp_Kind_FushigibanaRazor,               // Weapon Kind
    &D_ovl2_801313F4,                       // Pointer to character's loaded files?
    0x308,                                  // Offset of weapon attributes in loaded files
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    wpFushigibana_Razor_ProcUpdate,         // Proc Update
    NULL,                                   // Proc Map
    wpFushigibana_Razor_ProcHit,            // Proc Hit
    wpFushigibana_Razor_ProcHit,            // Proc Shield
    wpFushigibana_Razor_ProcHop,            // Proc Hop
    wpFushigibana_Razor_ProcHit,            // Proc Set-Off
    wpFushigibana_Razor_ProcReflector,      // Proc Reflector
    wpFushigibana_Razor_ProcHit             // Proc Absorb
};

// 0x80184440
void itFushigibana_SDefault_UpdateHitParty(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itHitParty *hit_party = itGetHitParty(itGround_Fushigibana_ItemDesc, Fushigibana_Event); // (itHitParty*) ((uintptr_t)*itGround_Fushigibana_ItemDesc.p_file + (intptr_t)&Fushigibana_Event); // Linker thing

    if (ip->it_multi == hit_party[ip->item_event_index].timer)
    {
        ip->item_hit.angle            = hit_party[ip->item_event_index].angle;
        ip->item_hit.damage           = hit_party[ip->item_event_index].damage;
        ip->item_hit.size             = hit_party[ip->item_event_index].size;
        ip->item_hit.knockback_scale  = hit_party[ip->item_event_index].knockback_scale;
        ip->item_hit.knockback_weight = hit_party[ip->item_event_index].knockback_weight;
        ip->item_hit.knockback_base   = hit_party[ip->item_event_index].knockback_base;
        ip->item_hit.element          = hit_party[ip->item_event_index].element;
        ip->item_hit.rebound          = hit_party[ip->item_event_index].rebound;
        ip->item_hit.shield_damage    = hit_party[ip->item_event_index].shield_damage;
        ip->item_hit.hit_sfx          = hit_party[ip->item_event_index].hit_sfx;

        ip->item_event_index++;

        if (ip->item_event_index == 2)
        {
            ip->item_event_index = 1;
        }
    }
    ip->it_multi++;

    if (ip->it_multi == ITFUSHIGIBANA_RETURN_WAIT)
    {
        Vec3f pos = DObjGetStruct(item_gobj)->translate;

        pos.y = 0.0F;

        efParticle_DustLight_MakeEffect(&pos, LEFT, 1.0F);
    }
}

// 0x801845B4
bool32 itFushigibana_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    Vec3f pos;

    joint->translate.x += ip->item_vars.fushigibana.offset.x;
    joint->translate.y += ip->item_vars.fushigibana.offset.y;

    itFushigibana_SDefault_UpdateHitParty(item_gobj);

    pos = joint->translate;

    pos.x += ITFUSHIGIBANA_RAZOR_SPAWN_OFF_X;

    if 
    (
        (ip->item_vars.fushigibana.flags == ITYCITYMONSTER_WEAPON_INSTANT) || ( (ip->item_vars.fushigibana.flags & ITYCITYMONSTER_WEAPON_WAIT) && (joint->dobj_f2 >= ITFUSHIGIBANA_RAZOR_SPAWN_BEGIN) ) &&
        (joint->dobj_f2 <= ITFUSHIGIBANA_RAZOR_SPAWN_END)
    )
    {
        joint->mobj->index = 1;

        if (!ip->item_vars.fushigibana.razor_spawn_wait)
        {
            wpFushigibana_Razor_MakeWeapon(item_gobj, &pos);

            ip->item_vars.fushigibana.razor_spawn_wait = ITFUSHIGIBANA_RAZOR_SPAWN_WAIT;

            func_800269C0(gmSound_SFX_MonsterWeapon);

            efParticle_DustCollision_MakeEffect(&pos);
        }
        if (ip->item_vars.fushigibana.razor_spawn_wait > 0)
        {
            ip->item_vars.fushigibana.razor_spawn_wait--;
        }
    }
    else joint->mobj->index = 0;

    if (joint->dobj_f0 == (f32)FLOAT_NEG_MAX)
    {
        func_ovl2_8010B0B8();

        return TRUE;
    }
    return FALSE;
}

// 0x8018470C
GObj* itGround_Fushigibana_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itGround_Fushigibana_ItemDesc, pos, vel, flags);
    s32 unused;
    DObj *joint;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        ip = itGetStruct(item_gobj);
        joint = DObjGetStruct(item_gobj);

        ip->item_event_index = 0;

        ip->it_multi = 0;

        ip->item_vars.fushigibana.razor_spawn_wait = 0;
        ip->item_vars.fushigibana.offset = *pos;

        ip->is_allow_knockback = TRUE;

        ip->item_vars.hitokage.flags = rand_u16_range(ITYCITYMONSTER_WEAPON_ALL + 1);

        if ((grYamabuki_MonsterFlag_Prev == ip->item_vars.fushigibana.flags) || (ip->item_vars.fushigibana.flags & grYamabuki_MonsterFlag_Prev))
        {
            ip->item_vars.fushigibana.flags++;

            ip->item_vars.fushigibana.flags &= ITYCITYMONSTER_WEAPON_ALL;
        }
        if (ip->item_vars.fushigibana.flags == ITYCITYMONSTER_WEAPON_INSTANT)
        {
            joint->mobj->index = 1;
        }
        grYamabuki_MonsterFlag_Prev = ip->item_vars.fushigibana.flags;

        func_800269C0(gmSound_Voice_YCityFushigibana);
    }
    return item_gobj;
}

// 0x80184820
bool32 wpFushigibana_Razor_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air.x += ITFUSHIGIBANA_RAZOR_ADD_VEL_X * wp->lr;

    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80184874
bool32 wpFushigibana_Razor_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efParticle_DamageSlash_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, wp->weapon_hit.damage, wp->lr);

    return TRUE;
}

// 0x801848BC
bool32 wpFushigibana_Razor_ProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x) + F_DEG_TO_RAD(180.0F); // PI32
    DObjGetStruct(weapon_gobj)->scale.x = 1.0F;

    if (wp->phys_info.vel_air.x > 0.0F)
    {
        wp->lr = RIGHT;
    }
    else wp->lr = LEFT;

    return FALSE;
}

// 0x80184970
bool32 wpFushigibana_Razor_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMain_ReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x) + F_DEG_TO_RAD(180.0F); // PI32
    DObjGetStruct(weapon_gobj)->scale.x = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

// 0x801849EC
GObj* wpFushigibana_Razor_MakeWeapon(GObj *item_gobj, Vec3f *pos)
{
    GObj *weapon_gobj = wpManager_MakeWeapon(item_gobj, &wpFushigibana_Razor_WeaponDesc, pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *joint;
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lr = LEFT;

    wp->phys_info.vel_air.x = ITFUSHIGIBANA_RAZOR_VEL_X;

    joint = DObjGetStruct(weapon_gobj);

    joint->translate = *pos;

    wp->lifetime = ITFUSHIGIBANA_RAZOR_LIFETIME;

    return weapon_gobj;
}
