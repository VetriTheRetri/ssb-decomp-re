#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern alSoundEffect* func_800269C0_275C0(u16);

extern intptr_t
lITFushigibanaItemAttributes;                   // 0x00000278
extern intptr_t 
lITFushigibanaHitParties;                       // 0x000002C0
extern intptr_t
lITFushigibanaWeaponRazorWeaponAttributes;      // 0x00000308

extern s32 dGRYamabukiMonsterAttackKind;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITFushigibanaItemDesc =
{
    nITKindFushigibana,                         // Item Kind
    &gGRCommonStruct.yamabuki.item_head,        // Pointer to item file data?
    &lITFushigibanaItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformTraRotRpyR,                 // Main matrix transformations
        nOMTransformNull,                       // Secondary matrix transformations?
        0                                       // ???
    },

    nGMHitUpdateNew,                            // Hitbox Update State
    itFushigibanaCommonProcUpdate,              // Proc Update
    NULL,                                       // Proc Map
    NULL,                                       // Proc Hit
    NULL,                                       // Proc Shield
    NULL,                                       // Proc Hop
    NULL,                                       // Proc Set-Off
    NULL,                                       // Proc Reflector
    NULL                                        // Proc Damage
};

wpCreateDesc dITFushigibanaWeaponRazorWeaponDesc =
{
    0x03,                                       // Render flags?
    nWPKindFushigibanaRazor,                    // Weapon Kind
    &gGRCommonStruct.yamabuki.item_head,        // Pointer to item's loaded files?
    &lITFushigibanaWeaponRazorWeaponAttributes, // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nOMTransformTraRotRpyRSca,              // Main matrix transformations
        nOMTransformNull,                       // Secondary matrix transformations?
        0                                       // ???
    },

    itFushigibanaWeaponRazorProcUpdate,         // Proc Update
    NULL,                                       // Proc Map
    itFushigibanaWeaponRazorProcHit,            // Proc Hit
    itFushigibanaWeaponRazorProcHit,            // Proc Shield
    itFushigibanaWeaponRazorProcHop,            // Proc Hop
    itFushigibanaWeaponRazorProcHit,            // Proc Set-Off
    itFushigibanaWeaponRazorProcReflector,      // Proc Reflector
    itFushigibanaWeaponRazorProcHit             // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80184440
void itFushigibanaCommonUpdateHitParty(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itHitParty *hit_party = itGetHitParty(dITFushigibanaItemDesc, lITFushigibanaHitParties); // (itHitParty*) ((uintptr_t)*dITFushigibanaItemDesc.p_file + (intptr_t)&Fushigibana_Event); // Linker thing

    if (ip->it_multi == hit_party[ip->item_event_id].timer)
    {
        ip->item_hit.angle            = hit_party[ip->item_event_id].angle;
        ip->item_hit.damage           = hit_party[ip->item_event_id].damage;
        ip->item_hit.size             = hit_party[ip->item_event_id].size;
        ip->item_hit.knockback_scale  = hit_party[ip->item_event_id].knockback_scale;
        ip->item_hit.knockback_weight = hit_party[ip->item_event_id].knockback_weight;
        ip->item_hit.knockback_base   = hit_party[ip->item_event_id].knockback_base;
        ip->item_hit.element          = hit_party[ip->item_event_id].element;
        ip->item_hit.can_setoff       = hit_party[ip->item_event_id].can_setoff;
        ip->item_hit.shield_damage    = hit_party[ip->item_event_id].shield_damage;
        ip->item_hit.hit_sfx          = hit_party[ip->item_event_id].hit_sfx;

        ip->item_event_id++;

        if (ip->item_event_id == 2)
        {
            ip->item_event_id = 1;
        }
    }
    ip->it_multi++;

    if (ip->it_multi == ITFUSHIGIBANA_RETURN_WAIT)
    {
        Vec3f pos = DObjGetStruct(item_gobj)->translate.vec.f;

        pos.y = 0.0F;

        efManagerDustLightMakeEffect(&pos, nGMFacingL, 1.0F);
    }
}

// 0x801845B4
sb32 itFushigibanaCommonProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    Vec3f pos;

    dobj->translate.vec.f.x += ip->item_vars.fushigibana.offset.x;
    dobj->translate.vec.f.y += ip->item_vars.fushigibana.offset.y;

    itFushigibanaCommonUpdateHitParty(item_gobj);

    pos = dobj->translate.vec.f;

    pos.x += ITFUSHIGIBANA_RAZOR_SPAWN_OFF_X;

    if 
    (
        (ip->item_vars.fushigibana.flags == GRYAMABUKI_MONSTER_WEAPON_INSTANT)                                                     || 
        ((ip->item_vars.fushigibana.flags & GRYAMABUKI_MONSTER_WEAPON_WAIT) && (dobj->anim_frame >= ITFUSHIGIBANA_RAZOR_SPAWN_BEGIN)) &&
        (dobj->anim_frame <= ITFUSHIGIBANA_RAZOR_SPAWN_END)
    )
    {
        dobj->mobj->texture_id_current = 1;

        if (!ip->item_vars.fushigibana.razor_spawn_wait)
        {
            itFushigibanaWeaponRazorMakeWeapon(item_gobj, &pos);

            ip->item_vars.fushigibana.razor_spawn_wait = ITFUSHIGIBANA_RAZOR_SPAWN_WAIT;

            func_800269C0_275C0(nGMSoundFGMMonsterShoot);

            efManagerDustCollideMakeEffect(&pos);
        }
        if (ip->item_vars.fushigibana.razor_spawn_wait > 0)
        {
            ip->item_vars.fushigibana.razor_spawn_wait--;
        }
    }
    else dobj->mobj->texture_id_current = 0;

    if (dobj->anim_remain == AOBJ_ANIM_NULL)
    {
        grYamabukiGateSetClosedWait();

        return TRUE;
    }
    return FALSE;
}

// 0x8018470C
GObj* itFushigibanaMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITFushigibanaItemDesc, pos, vel, flags);
    s32 unused;
    DObj *dobj;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        ip = itGetStruct(item_gobj);
        dobj = DObjGetStruct(item_gobj);

        ip->item_event_id = 0;

        ip->it_multi = 0;

        ip->item_vars.fushigibana.razor_spawn_wait = 0;
        ip->item_vars.fushigibana.offset = *pos;

        ip->is_allow_knockback = TRUE;

        ip->item_vars.fushigibana.flags = mtTrigGetRandomIntRange(GRYAMABUKI_MONSTER_WEAPON_MAX);

        if ((dGRYamabukiMonsterAttackKind == ip->item_vars.fushigibana.flags) || (ip->item_vars.fushigibana.flags & dGRYamabukiMonsterAttackKind))
        {
            ip->item_vars.fushigibana.flags++;

            ip->item_vars.fushigibana.flags %= GRYAMABUKI_MONSTER_WEAPON_MAX;
        }
        if (ip->item_vars.fushigibana.flags == GRYAMABUKI_MONSTER_WEAPON_INSTANT)
        {
            dobj->mobj->texture_id_current = 1;
        }
        dGRYamabukiMonsterAttackKind = ip->item_vars.fushigibana.flags;

        func_800269C0_275C0(nGMSoundVoiceYamabukiFushigibana);
    }
    return item_gobj;
}

// 0x80184820
sb32 itFushigibanaWeaponRazorProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air.x += ITFUSHIGIBANA_RAZOR_ADD_VEL_X * wp->lr;

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80184874
sb32 itFushigibanaWeaponRazorProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efManagerDamageSlashMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage, wp->lr);

    return TRUE;
}

// 0x801848BC
sb32 itFushigibanaWeaponRazorProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel_air, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x) + F_CLC_DTOR32(180.0F); // PI32
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    if (wp->phys_info.vel_air.x > 0.0F)
    {
        wp->lr = nGMFacingR;
    }
    else wp->lr = nGMFacingL;

    return FALSE;
}

// 0x80184970
sb32 itFushigibanaWeaponRazorProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMainReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x) + F_CLC_DTOR32(180.0F); // PI32
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

// 0x801849EC
GObj* itFushigibanaWeaponRazorMakeWeapon(GObj *item_gobj, Vec3f *pos)
{
    GObj *weapon_gobj = wpManagerMakeWeapon(item_gobj, &dITFushigibanaWeaponRazorWeaponDesc, pos, WEAPON_FLAG_PARENT_ITEM);
    DObj *dobj;
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lr = nGMFacingL;

    wp->phys_info.vel_air.x = ITFUSHIGIBANA_RAZOR_VEL_X;

    dobj = DObjGetStruct(weapon_gobj);

    dobj->translate.vec.f = *pos;

    wp->lifetime = ITFUSHIGIBANA_RAZOR_LIFETIME;

    return weapon_gobj;
}
