#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t
lITHitokageItemAttributes;                  // 0x000001FC
extern intptr_t
lITHitokageWeaponFlameWeaponAttributes;     // 0x00000244

extern s32 dGRYamabukiMonsterAttackKind;

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

itCreateDesc dITHitokageItemDesc =
{
    nITKindHitokage,                       // Item Kind
    &gGRCommonStruct.yamabuki.item_head,      // Pointer to item file data?
    &lITHitokageItemAttributes,             // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformTraRotRpyR,         // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateNew,         // Hitbox Update State
    itHitokageSDefaultProcUpdate,           // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    itHitokageSDefaultProcDamage            // Proc Damage
};

itStatusDesc dITHitokageStatusDesc[/* */] =
{
    // Status 0 (Neutral Damage)
    {
        itHitokageNDamageProcUpdate,        // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

wpCreateDesc dITHitokageWeaponFlameWeaponDesc =
{
    0x00,                                   // Render flags?
    nWPKindHitokageFlame,                  // Weapon Kind
    &gGRCommonStruct.yamabuki.item_head,      // Pointer to character's loaded files?
    &lITHitokageWeaponFlameWeaponAttributes,// Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations?
        0                                   // ???
    },

    itHitokageWeaponFlameProcUpdate,        // Proc Update
    itHitokageWeaponFlameProcMap,           // Proc Map
    itHitokageWeaponFlameProcHit,           // Proc Hit
    itHitokageWeaponFlameProcHit,           // Proc Shield
    NULL,                                   // Proc Hop
    itHitokageWeaponFlameProcHit,           // Proc Set-Off
    itHitokageWeaponFlameProcReflector,     // Proc Reflector
    NULL                                    // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itHitokageStatus
{
    itStatus_Hitokage_NDamage,
    itStatus_Hitokage_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80183DA0
void itHitokageNDamageSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITHitokageStatusDesc, itStatus_Hitokage_NDamage);

    itGetStruct(item_gobj)->proc_dead = itHitokageNDamageProcDead;
}

// 0x80183DE0
sb32 itHitokageSDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    Vec3f pos;

    dobj->translate.vec.f.x += ip->item_vars.hitokage.offset.x;
    dobj->translate.vec.f.y += ip->item_vars.hitokage.offset.y;

    pos = dobj->translate.vec.f;

    pos.x += ITHITOKAGE_FLAME_SPAWN_OFF_X;

    if 
    (
        (ip->item_vars.hitokage.flags == GRYAMABUKI_MONSTER_WEAPON_INSTANT)                                                  ||
        ((ip->item_vars.hitokage.flags & GRYAMABUKI_MONSTER_WEAPON_WAIT) && (dobj->dobj_f2 >= ITHITOKAGE_FLAME_SPAWN_BEGIN)) &&
        (dobj->dobj_f2 <= ITHITOKAGE_FLAME_SPAWN_END)
    )
    {
        dobj->mobj->current_image_id = 1;

        if (ip->item_vars.hitokage.flame_spawn_wait <= 0)
        {
            itHitokageSDefaultMakeFlame(item_gobj, &pos);

            ip->item_vars.hitokage.flame_spawn_wait = ITHITOKAGE_FLAME_SPAWN_WAIT;
        }
        else ip->item_vars.hitokage.flame_spawn_wait--; 
    }
    else dobj->mobj->current_image_id = 0;

    if (dobj->dobj_f0 == AOBJ_FRAME_NULL)
    {
        grYamabukiGateSetClosedWait();

        return TRUE;
    }
    return FALSE;
}

// 0x80183F20
sb32 itHitokageNDamageProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj;

    itMainApplyGClampTVel(ip, ITHITOKAGE_GRAVITY, ITHITOKAGE_T_VEL);

    dobj = DObjGetStruct(item_gobj);

    dobj->rotate.vec.f.z -= (ITHITOKAGE_HIT_ROTATE_Z * ip->lr);

    return FALSE;
}

// 0x80183F88
sb32 itHitokageNDamageProcDead(GObj *item_gobj)
{
    return TRUE;
}

// 0x80183F94
sb32 itHitokageSDefaultProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->damage_knockback >= ITHITOKAGE_NDAMAGE_KNOCKBACK_MIN)
    {
        f32 angle = ftCommonDamageGetKnockbackAngle(ip->damage_angle, ip->ga, ip->damage_knockback);

        ip->phys_info.vel_air.x = __cosf(angle) * ip->damage_knockback * -ip->lr_damage;
        ip->phys_info.vel_air.y = __sinf(angle) * ip->damage_knockback;

        ip->item_hit.update_state = nGMHitUpdateDisable;
        ip->item_hurt.hitstatus = nGMHitStatusNone;

        dobj->dobj_f0 = AOBJ_FRAME_NULL;

        grYamabukiGateClearMonsterGObj();
        itHitokageNDamageSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x80184058
GObj* itHitokageMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITHitokageItemDesc, pos, vel, flags);
    s32 unused;
    DObj *dobj;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        ip = itGetStruct(item_gobj);
        dobj = DObjGetStruct(item_gobj);

        ip->item_vars.hitokage.flame_spawn_wait = 0;
        ip->item_vars.hitokage.offset = *pos;

        ip->is_allow_knockback = TRUE;

        ip->item_vars.hitokage.flags = mtTrigGetRandomIntRange(GRYAMABUKI_MONSTER_WEAPON_MAX);

        if ((dGRYamabukiMonsterAttackKind == ip->item_vars.hitokage.flags) || (ip->item_vars.hitokage.flags & dGRYamabukiMonsterAttackKind))
        {
            ip->item_vars.hitokage.flags++;

            ip->item_vars.hitokage.flags %= GRYAMABUKI_MONSTER_WEAPON_MAX;
        }
        if (ip->item_vars.hitokage.flags == GRYAMABUKI_MONSTER_WEAPON_INSTANT)
        {
            dobj->mobj->current_image_id = 1;
        }
        dGRYamabukiMonsterAttackKind = ip->item_vars.hitokage.flags;

        func_800269C0_275C0(alSound_Voice_YamabukiHitokage);
    }
    return item_gobj;
}

// 0x8018415C
sb32 itHitokageWeaponFlameProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80184188
sb32 itHitokageWeaponFlameProcMap(GObj *weapon_gobj)
{
    if (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

// 0x801841CC
sb32 itHitokageWeaponFlameProcHit(GObj *weapon_gobj)
{
    func_800269C0_275C0(alSound_SFX_ExplodeS);
    efManagerSparkleWhiteMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return FALSE;
}

// 0x80184204
sb32 itHitokageWeaponFlameProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);
    Vec3f *translate;

    wp->lifetime = ITHITOKAGE_FLAME_LIFETIME;

    wpMainReflectorSetLR(wp, fp);

    translate = &DObjGetStruct(weapon_gobj)->translate.vec.f;

    func_ovl0_800CE8C0(gITManagerParticleBankID | 8, 2, translate->x, translate->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);
    func_ovl0_800CE8C0(gITManagerParticleBankID | 8, 0, translate->x, translate->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);

    return FALSE;
}

// 0x801842C8
GObj* itHitokageWeaponFlameMakeWeapon(GObj *item_gobj, Vec3f *pos, Vec3f *vel)
{
    GObj *weapon_gobj = wpManagerMakeWeapon(item_gobj, &dITHitokageWeaponFlameWeaponDesc, pos, WEAPON_MASK_SPAWN_ITEM);
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air = *vel;

    wp->lifetime = ITHITOKAGE_FLAME_LIFETIME;

    wp->lr = nGMDirectionL;

    func_ovl0_800CE8C0(gITManagerParticleBankID | 8, 2, pos->x, pos->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);
    func_ovl0_800CE8C0(gITManagerParticleBankID | 8, 0, pos->x, pos->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);

    return weapon_gobj;
}

// 0x801843C4
void itHitokageSDefaultMakeFlame(GObj *item_gobj, Vec3f *pos)
{
    itStruct *ip;
    Vec3f vel;

    vel.x = __cosf(ITHITOKAGE_FLAME_SPAWN_ANGLE) * -ITHITOKAGE_FLAME_VEL_BASE;
    vel.y = __sinf(ITHITOKAGE_FLAME_SPAWN_ANGLE) * ITHITOKAGE_FLAME_VEL_BASE;
    vel.z = 0.0F;

    itHitokageWeaponFlameMakeWeapon(item_gobj, pos, &vel);

    func_800269C0_275C0(alSound_SFX_LizardonFlame);
}
