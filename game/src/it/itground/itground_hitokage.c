#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

enum itHitokageStatus
{
    itStatus_Hitokage_NDamage,
    itStatus_Hitokage_EnumMax
};

extern void *D_ovl2_801313F4;

itCreateDesc itGround_Hitokage_ItemDesc =
{
    It_Kind_Hitokage,                       // Item Kind
    &D_ovl2_801313F4,                       // Pointer to item file data?
    0x1FC,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itHitokage_SDefault_ProcUpdate,         // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    itHitokage_SDefault_ProcDamage          // Proc Damage
};

itStatusDesc itGround_Hitokage_StatusDesc[itStatus_Hitokage_EnumMax] = 
{
    // Status 0 (Neutral Damage)
    {
        itHitokage_NDamage_ProcUpdate,      // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

wpCreateDesc wpHitokage_Flame_WeaponDesc =
{
    0,                                      // Render flags?
    Wp_Kind_HitokageFlame,                  // Weapon Kind
    &D_ovl2_801313F4,                       // Pointer to character's loaded files?
    0x244,                                  // Offset of weapon attributes in loaded files
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    wpHitokage_Flame_ProcUpdate,            // Proc Update
    wpHitokage_Flame_ProcMap,               // Proc Map
    wpHitokage_Flame_ProcHit,               // Proc Hit
    wpHitokage_Flame_ProcHit,               // Proc Shield
    NULL,                                   // Proc Hop
    wpHitokage_Flame_ProcHit,               // Proc Set-Off
    wpHitokage_Flame_ProcReflector,         // Proc Reflector
    NULL                                    // Proc Absorb
};

// 0x80183DA0
void itHitokage_NDamage_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itGround_Hitokage_StatusDesc, itStatus_Hitokage_NDamage);

    itGetStruct(item_gobj)->proc_dead = itHitokage_NDamage_ProcDead;
}

// 0x80183DE0
bool32 itHitokage_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    Vec3f pos;

    joint->translate.x += ip->item_vars.hitokage.offset.x;
    joint->translate.y += ip->item_vars.hitokage.offset.y;

    pos = joint->translate;

    pos.x += ITHITOKAGE_FLAME_SPAWN_OFF_X;

    if 
    (
        (ip->item_vars.hitokage.flags == ITYCITYMONSTER_WEAPON_INSTANT) || ( (ip->item_vars.hitokage.flags & ITYCITYMONSTER_WEAPON_WAIT) && (joint->dobj_f2 >= ITHITOKAGE_FLAME_SPAWN_BEGIN) ) &&
        (joint->dobj_f2 <= ITHITOKAGE_FLAME_SPAWN_END)
    )
    {
        joint->mobj->index = 1;

        if (ip->item_vars.hitokage.flame_spawn_wait <= 0)
        {
            itHitokage_SDefault_CreateFlame(item_gobj, &pos);

            ip->item_vars.hitokage.flame_spawn_wait = ITHITOKAGE_FLAME_SPAWN_WAIT;
        }
        else ip->item_vars.hitokage.flame_spawn_wait--; 
    }
    else joint->mobj->index = 0;
    

    if (joint->dobj_f0 == (f32)FLOAT_NEG_MAX)
    {
        func_ovl2_8010B0B8();

        return TRUE;
    }
    return FALSE;
}

// 0x80183F20
bool32 itHitokage_NDamage_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint;

    itMain_UpdateGravityClampTVel(ip, ITHITOKAGE_GRAVITY, ITHITOKAGE_T_VEL);

    joint = DObjGetStruct(item_gobj);

    joint->rotate.z -= (ITHITOKAGE_HIT_ROTATE_Z * ip->lr);

    return FALSE;
}

// 0x80183F88
bool32 itHitokage_NDamage_ProcDead(GObj *item_gobj)
{
    return TRUE;
}

// 0x80183F94
bool32 itHitokage_SDefault_ProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ip->damage_knockback >= ITHITOKAGE_NDAMAGE_KNOCKBACK_MIN)
    {
        f32 angle = gmCommon_Damage_GetKnockbackAngle(ip->damage_angle, ip->ground_or_air, ip->damage_knockback);

        ip->phys_info.vel_air.x = cosf(angle) * ip->damage_knockback * -ip->lr_damage;
        ip->phys_info.vel_air.y = __sinf(angle) * ip->damage_knockback;

        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;
        ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

        joint->dobj_f0 = (f32)FLOAT_NEG_MAX;

        func_ovl2_8010B0AC();
        itHitokage_NDamage_SetStatus(item_gobj);
    }
    return FALSE;
}

extern s32 grYamabuki_MonsterFlag_Prev;

// 0x80184058
GObj* itGround_Hitokage_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itGround_Hitokage_ItemDesc, pos, vel, flags);
    s32 unused;
    DObj *joint;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        ip = itGetStruct(item_gobj);
        joint = DObjGetStruct(item_gobj);

        ip->item_vars.hitokage.flame_spawn_wait = 0;
        ip->item_vars.hitokage.offset = *pos;

        ip->is_allow_knockback = TRUE;

        ip->item_vars.hitokage.flags = lbRandom_GetIntRange(ITYCITYMONSTER_WEAPON_ALL + 1);

        if ((grYamabuki_MonsterFlag_Prev == ip->item_vars.hitokage.flags) || (ip->item_vars.hitokage.flags & grYamabuki_MonsterFlag_Prev))
        {
            ip->item_vars.hitokage.flags++;

            ip->item_vars.hitokage.flags &= ITYCITYMONSTER_WEAPON_ALL;
        }
        if (ip->item_vars.hitokage.flags == ITYCITYMONSTER_WEAPON_INSTANT)
        {
            joint->mobj->index = 1;
        }
        grYamabuki_MonsterFlag_Prev = ip->item_vars.hitokage.flags;

        func_800269C0(gmSound_Voice_YCityHitokage);
    }
    return item_gobj;
}

// 0x8018415C
bool32 wpHitokage_Flame_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80184188
bool32 wpHitokage_Flame_ProcMap(GObj *weapon_gobj)
{
    if (func_ovl3_80167C04(weapon_gobj) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

// 0x801841CC
bool32 wpHitokage_Flame_ProcHit(GObj *weapon_gobj)
{
    func_800269C0(gmSound_SFX_ExplodeS);
    efParticle_SparkleWhite_MakeEffect(&DObjGetStruct(weapon_gobj)->translate);

    return FALSE;
}

extern s32 D_ovl3_8018D044;

// 0x80184204
bool32 wpHitokage_Flame_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);
    Vec3f *translate;

    wp->lifetime = ITHITOKAGE_FLAME_LIFETIME;

    wpMain_ReflectorSetLR(wp, fp);

    translate = &DObjGetStruct(weapon_gobj)->translate;

    func_ovl0_800CE8C0(D_ovl3_8018D044 | 8, 2, translate->x, translate->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);
    func_ovl0_800CE8C0(D_ovl3_8018D044 | 8, 0, translate->x, translate->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);

    return FALSE;
}

// 0x801842C8
GObj* wpHitokage_Flame_MakeWeapon(GObj *item_gobj, Vec3f *pos, Vec3f *vel)
{
    GObj *weapon_gobj = wpManager_MakeWeapon(item_gobj, &wpHitokage_Flame_WeaponDesc, pos, WEAPON_MASK_SPAWN_ITEM);
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel = *vel;

    wp->lifetime = ITHITOKAGE_FLAME_LIFETIME;

    wp->lr = LEFT;

    func_ovl0_800CE8C0(D_ovl3_8018D044 | 8, 2, pos->x, pos->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);
    func_ovl0_800CE8C0(D_ovl3_8018D044 | 8, 0, pos->x, pos->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);

    return weapon_gobj;
}

// 0x801843C4
void itHitokage_SDefault_CreateFlame(GObj *item_gobj, Vec3f *pos)
{
    itStruct *ip;
    Vec3f vel;

    vel.x = cosf(ITHITOKAGE_FLAME_SPAWN_ANGLE) * -ITHITOKAGE_FLAME_VEL_BASE;
    vel.y = __sinf(ITHITOKAGE_FLAME_SPAWN_ANGLE) * ITHITOKAGE_FLAME_VEL_BASE;
    vel.z = 0.0F;

    wpHitokage_Flame_MakeWeapon(item_gobj, pos, &vel);

    func_800269C0(gmSound_SFX_LizardonFlame);
}