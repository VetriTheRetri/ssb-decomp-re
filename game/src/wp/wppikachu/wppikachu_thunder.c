#include <wp/weapon.h>
#include <ft/fighter.h>

extern void *D_ovl2_801310B0;

wpCreateDesc wpPikachu_ThunderHead_WeaponDesc =
{
    0,                                          // Render flags?
    Wp_Kind_ThunderHead,                        // Weapon Kind
    &D_ovl2_801310B0,                           // Pointer to character's loaded files?
    0xC,                                        // Offset of weapon attributes in loaded files
    0x1C,                                       // ???
    0,                                          // ???
    0,                                          // ???
    wpPikachu_ThunderHead_ProcUpdate,           // Proc Update
    wpPikachu_ThunderHead_ProcMap,              // Proc Map
    NULL,                                       // Proc Hit
    NULL,                                       // Proc Shield
    NULL,                                       // Proc Hop
    NULL,                                       // Proc Set-Off
    NULL,                                       // Proc Reflector
    NULL                                        // Proc Absorb
};

wpCreateDesc wpPikachu_ThunderTrail_WeaponDesc =
{
    2,                                          // Render flags?
    Wp_Kind_ThunderTrail,                       // Weapon Kind
    &D_ovl2_801310B0,                           // Pointer to character's loaded files?
    0x40,                                       // Offset of weapon attributes in loaded files
    0x1C,                                       // ???
    0,                                          // ???
    0,                                          // ???
    wpPikachu_ThunderTrail_ProcUpdate,          // Proc Update
    NULL,                                       // Proc Map
    wpPikachu_ThunderTrail_ProcHit,             // Proc Hit
    wpPikachu_ThunderTrail_ProcHit,             // Proc Shield
    NULL,                                       // Proc Hop
    wpPikachu_ThunderTrail_ProcHit,             // Proc Set-Off
    NULL,                                       // Proc Reflector
    wpPikachu_ThunderTrail_ProcHit              // Proc Absorb
};

// 0x8016A640
void wpPikachu_ThunderHead_SetDestroy(GObj *weapon_gobj, bool32 is_destroy)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (!(wp->weapon_vars.thunder.thunder_state & wpPikachuThunder_Status_Destroy))
    {
        ftStruct *fp = ftGetStruct(wp->owner_gobj);

        if (fp->player_number == wp->player_number) // Check number of player that spawned Thunder
        {
            fp->fighter_vars.pikachu.is_thunder_destroy |= is_destroy;
        }
    }
}

void func_ovl3_8016A680(GObj *weapon_gobj, s32 arg1)
{
    s32 unused;
    Vec3f pos;

    pos.x = DObjGetStruct(weapon_gobj)->translate.x;
    pos.y = DObjGetStruct(weapon_gobj)->translate.y;
    pos.z = 0.0F;

    if (arg1 == 3)
    {
        func_ovl2_80101B88(&pos, 0xA, 3);
    }
    else if (arg1 == -1)
    {
        func_ovl2_80101B88(&pos, 6, 0);
    }
    else wpPikachu_ThunderTrail_MakeWeapon(weapon_gobj, &pos);
}

// 0x8016A700
bool32 wpPikachu_ThunderHead_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->weapon_vars.thunder.thunder_state == wpPikachuThunder_Status_Collide)
    {
        func_ovl3_8016A680(weapon_gobj, 3);

        return TRUE;
    }
    else if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
        wpPikachu_ThunderHead_SetDestroy(weapon_gobj, TRUE);
        func_ovl3_8016A680(weapon_gobj, 3);

        return TRUE;
    }
    else func_ovl3_8016A680(weapon_gobj, 0);

    return FALSE;
}

// 0x8016A794
bool32 wpPikachu_ThunderHead_ProcMap(GObj *weapon_gobj)
{
    if (func_ovl3_80167C04(weapon_gobj) != FALSE)
    {
        wpPikachu_ThunderHead_SetDestroy(weapon_gobj, TRUE);
        efParticle_Quake_MakeEffect(1);
        efParticle_SparkleWhite_MakeEffect(&DObjGetStruct(weapon_gobj)->translate);

        return TRUE;
    }
    return FALSE;
}

// 0x8016A7E8
bool32 wpPikachu_ThunderHead_ProcDead(GObj *weapon_gobj)
{
    wpPikachu_ThunderHead_SetDestroy(weapon_gobj, TRUE);

    return TRUE;
}

// 0x8016A80C
GObj* wpPikachu_ThunderHead_MakeWeapon(GObj *fighter_gobj, Vec3f *pos, Vec3f *vel)
{
    s32 unused;
    GObj *weapon_gobj = wpManager_MakeWeapon(fighter_gobj, &wpPikachu_ThunderHead_WeaponDesc, pos, WEAPON_MASK_SPAWN_FIGHTER);
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }

    wp = wpGetStruct(weapon_gobj);

    wp->proc_dead = wpPikachu_ThunderHead_ProcDead;

    wp->lifetime = WPPIKACHUTHUNDER_SPAWN_LIFETIME;

    wp->phys_info.vel = *vel;

    wp->weapon_hit.update_state = gmHitCollision_UpdateState_Disable;
    wp->weapon_vars.thunder.thunder_state = wpPikachuThunder_Status_Active;

    wp->group_id = wpManager_GetGroupIndexInc();

    DObjGetStruct(weapon_gobj)->mobj->index = 3;

    DObjGetStruct(weapon_gobj)->scale.x = 0.5F;
    DObjGetStruct(weapon_gobj)->scale.y = 0.5F;
    DObjGetStruct(weapon_gobj)->scale.z = 0.5F;

    return weapon_gobj;
}

// 0x8016A8D8
bool32 wpPikachu_ThunderTrail_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else if (wp->lifetime < WPPIKACHUTHUNDER_EXPIRE)
    {
        func_ovl3_8016A680(weapon_gobj, -1);

        return TRUE;
    }
    else DObjGetStruct(weapon_gobj)->mobj->index = lbRandom_GetIntRange(WPPIKACHUTHUNDER_TEXTURE_COUNT - 1);

    return FALSE;
}

// 0x8016A950
bool32 wpPikachu_ThunderTrail_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_ovl2_800FE068(&DObjGetStruct(weapon_gobj)->translate, wp->weapon_hit.damage);

    return FALSE;
}

// 0x8016A980
GObj* wpPikachu_ThunderTrail_MakeWeapon(GObj *weapon_gobj, Vec3f *pos)
{
    s32 unused[2];
    wpStruct *spawn_wp = wpGetStruct(weapon_gobj);
    GObj *chain_gobj = wpManager_MakeWeapon(weapon_gobj, &wpPikachu_ThunderTrail_WeaponDesc, pos, WEAPON_MASK_SPAWN_WEAPON);
    wpStruct *chain_wp;
    s32 i;

    if (chain_gobj == NULL)
    {
        return NULL;
    }
    chain_wp = wpGetStruct(chain_gobj);

    chain_wp->lifetime = WPPIKACHUTHUNDER_CHAIN_LIFETIME;
    chain_wp->group_id = spawn_wp->group_id;

    for (i = 0; i < ARRAY_COUNT(spawn_wp->weapon_hit.hit_targets); i++)
    {
        chain_wp->weapon_hit.hit_targets[i] = spawn_wp->weapon_hit.hit_targets[i];
    }

    DObjGetStruct(chain_gobj)->scale.x = 0.5F;
    DObjGetStruct(chain_gobj)->scale.y = 0.5F;
    DObjGetStruct(chain_gobj)->scale.z = 0.5F;

    return chain_gobj;
}
