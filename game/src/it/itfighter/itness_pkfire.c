#include <it/item.h>
#include <wp/weapon.h>

extern void *D_ovl2_8013113C;

enum itPKFireStatus
{
    itStatus_PKFire_GWait,
    itStatus_PKFire_AFall,
    itStatus_PKFire_EnumMax
};

itCreateDesc itNess_PKFire_ItemDesc = 
{
    It_Kind_PKFire,                         // Item Kind
    &D_ovl2_8013113C,                       // Pointer to item file data?
    0x34,                                   // Offset of item attributes in file?
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itPKFire_NCreate_ProcUpdate,            // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itNess_PKFire_StatusDesc[itStatus_PKFire_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        itPKFire_GWait_ProcUpdate,          // Proc Update
        itPKFire_GWait_ProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itPKFire_SDefault_ProcDamage        // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itPKFire_AFall_ProcUpdate,          // Proc Update
        itPKFire_AFall_ProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itPKFire_SDefault_ProcDamage        // Proc Damage
    }
};

// 0x80185350
bool32 itPKFire_NCreate_ProcUpdate(GObj *item_gobj)
{
    itPKFire_AFall_SetStatus(item_gobj);

    return FALSE;
}

// 0x80185374
bool32 itNess_SDefault_UpdateAllCheckDestroy(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes;
    f32 unused;
    f32 half = 0.5;
    f32 lifetime_scale = ((ip->lifetime * half) / 100.0F) + half;
    efTransform *effect = ip->item_vars.pkfire.effect;

    DObjGetStruct(item_gobj)->scale.x = DObjGetStruct(item_gobj)->scale.y = DObjGetStruct(item_gobj)->scale.z = lifetime_scale;

    attributes = ip->attributes;

    ip->item_hit.offset[0].x = attributes->hit_offset1_x * lifetime_scale;
    ip->item_hit.offset[0].y = attributes->hit_offset1_y * lifetime_scale;
    ip->item_hit.offset[0].z = attributes->hit_offset1_z * lifetime_scale;
    ip->item_hit.offset[1].x = attributes->hit_offset2_x * lifetime_scale;
    ip->item_hit.offset[1].y = attributes->hit_offset2_y * lifetime_scale;
    ip->item_hit.offset[1].z = attributes->hit_offset2_z * lifetime_scale;

    ip->item_hit.size = attributes->size * 0.5F * lifetime_scale;

    ip->item_hurt.offset.x = attributes->hurt_offset.x * lifetime_scale;
    ip->item_hurt.offset.y = attributes->hurt_offset.y * lifetime_scale;
    ip->item_hurt.offset.z = attributes->hurt_offset.z * lifetime_scale;
    ip->item_hurt.size.x = attributes->hurt_size.x * 0.5F * lifetime_scale;
    ip->item_hurt.size.y = attributes->hurt_size.y * 0.5F * lifetime_scale;
    ip->item_hurt.size.z = attributes->hurt_size.z * 0.5F * lifetime_scale;

    if (effect != NULL)
    {
        effect->scale.x = DObjGetStruct(item_gobj)->scale.x;
        effect->scale.y = DObjGetStruct(item_gobj)->scale.y;
        effect->scale.z = DObjGetStruct(item_gobj)->scale.z;

        effect->translate = DObjGetStruct(item_gobj)->translate;
    }
    ip->lifetime--;

    if (ip->lifetime < 0)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(item_gobj)->translate, 1.0F);

        if (effect != NULL)
        {
            func_ovl0_800D39D4(effect->unk_effect_0xB8, 0);
        }
        return TRUE;
    }
    else return FALSE;
}

// 0x801855E4
bool32 itPKFire_GWait_ProcUpdate(GObj *item_gobj)
{
    if (itNess_SDefault_UpdateAllCheckDestroy(item_gobj) == TRUE)
    {
        return TRUE;
    }
    return FALSE;
}

// 0x80185614
bool32 itPKFire_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itNess_SDefault_UpdateAllCheckDestroy(item_gobj) == TRUE)
    {
        return TRUE;
    }
    else itMain_UpdateGravityClampTVel(ip, ITPKFIRE_GRAVITY, ITPKFIRE_T_VEL);

    return FALSE;
}

// 0x80185660
bool32 itPKFire_GWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itPKFire_AFall_SetStatus);

    return FALSE;
}

// 0x80185688
bool32 itPKFire_AFall_ProcMap(GObj *item_gobj)
{
    itMap_CheckMapCollideLanding(item_gobj, 0.2F, 0.5F, itPKFire_GWait_SetStatus);

    return FALSE;
}

// 0x801856BC
bool32 itPKFire_SDefault_ProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->lifetime > 0)
    {
        ip->lifetime -= ip->damage_highest * ITPKFIRE_HURT_DAMAGE_MUL;
    }
    if (itNess_SDefault_UpdateAllCheckDestroy(item_gobj) == TRUE)
    {
        return TRUE;
    }
    return FALSE;
}

// 0x80185710
void itPKFire_GWait_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    gmStatFlags stat_flags;
    u16 stat_count;

    itMap_SetGround(ip);

    ip->phys_info.vel_ground = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.x = 0.0F;

    stat_flags = ip->item_hit.stat_flags;
    stat_count = ip->item_hit.stat_count;

    itMain_SetItemStatus(item_gobj, itNess_PKFire_StatusDesc, itStatus_PKFire_GWait);

    ip->item_hit.stat_flags = stat_flags;
    ip->item_hit.stat_count = stat_count;
}

// 0x8018579C
void itPKFire_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    gmStatFlags stat_flags;
    u16 stat_count;

    itMap_SetAir(ip);

    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.x = 0.0F;

    stat_flags = ip->item_hit.stat_flags;
    stat_count = ip->item_hit.stat_count;

    itMain_SetItemStatus(item_gobj, itNess_PKFire_StatusDesc, itStatus_PKFire_AFall);

    ip->item_hit.stat_flags = stat_flags;
    ip->item_hit.stat_count = stat_count;
}

extern s32 D_ovl2_80131148;

// 0x80185824
GObj* itNess_PKFire_MakeItem(GObj *weapon_gobj, Vec3f *pos, Vec3f *vel)
{
    GObj *item_gobj;
    wpStruct *wp = wpGetStruct(weapon_gobj);
    itStruct *ip;
    efParticle *effect_unk;
    efTransform *effect_info;

    item_gobj = itManager_MakeItem(weapon_gobj, &itNess_PKFire_ItemDesc, pos, vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

    if (item_gobj == NULL)
    {
        return NULL;
    }
    ip = itGetStruct(item_gobj);

    ip->owner_gobj = wp->owner_gobj;

    ip->is_allow_pickup = FALSE;
    ip->is_hold = FALSE;

    ip->team = wp->team;
    ip->player = wp->player;
    ip->handicap = wp->handicap;
    ip->player_number = wp->player_number;

    ip->item_hit.can_rehit_shield = TRUE;
    ip->item_hit.throw_mul = wp->weapon_hit.stale;
    ip->item_hit.attack_id = wp->weapon_hit.attack_id;
    ip->item_hit.motion_count = wp->weapon_hit.motion_count;
    ip->item_hit.stat_flags = wp->weapon_hit.stat_flags;
    ip->item_hit.stat_count = wp->weapon_hit.stat_count;

    itMap_SetAir(ip);
    itManager_UpdateHitPositions(item_gobj);

    ip->lifetime = ITPKFIRE_LIFETIME;

    effect_unk = func_ovl0_800CE9E8(D_ovl2_80131148, 0);

    if (effect_unk != NULL)
    {
        effect_info = func_ovl0_800CE1DC(effect_unk, 0);

        if (effect_info != NULL)
        {
            ip->item_vars.pkfire.effect = effect_info;

            func_ovl0_800CEA14(effect_unk);

            if (effect_info->unk_effect_0x2A == 0)
            {
                ip->item_vars.pkfire.effect = NULL;
            }
            else effect_info->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(effect_unk);

            ip->item_vars.pkfire.effect = NULL;
        }
    }
    else
    {
        ip->item_vars.pkfire.effect = NULL;
    }
    return item_gobj;
}
