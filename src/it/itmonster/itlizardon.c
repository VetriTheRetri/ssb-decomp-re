#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t 
lITLizardonItemAttributes;                  // 0x000008FC
extern intptr_t
lITLizardonWeaponFlameWeaponAttributes;     // 0x00000944
extern intptr_t
lITLizardonDataStart;                       // 0x0000D5C0
extern intptr_t 
lITLizardonAnimJoint;                       // 0x0000D658
extern intptr_t 
lITLizardonMatAnimJoint;                    // 0x0000D688

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x8018AD30
itCreateDesc dITLizardonItemDesc = 
{
    It_Kind_Lizardon,                       // Item Kind
    &gITManagerFileData,                           // Pointer to item file data?
    &lITLizardonItemAttributes,             // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itLizardonSDefaultProcUpdate,           // Proc Update
    itLizardonSDefaultProcMap,              // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AD64
itStatusDesc dITLizardonStatusDesc[/* */] = 
{
    // Status 0 (Unused Fall)
    {
        itLizardonUFallProcUpdate,          // Proc Update
        itLizardonUFallProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Fall)
    {
        itLizardonAFallProcUpdate,          // Proc Update
        itLizardonAFallProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Neutral Attack)
    {
        itLizardonNAttackProcUpdate,        // Proc Update
        itLizardonNAttackProcMap,           // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x8018ADC4
wpCreateDesc dITLizardonWeaponFlameWeaponDesc = 
{
    0x00,                                   // Render flags?
    Wp_Kind_LizardonFlame,                  // Weapon Kind
    &gITManagerFileData,                           // Pointer to character's loaded files?
    &lITLizardonWeaponFlameWeaponAttributes,// Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    itLizardonWeaponFlameProcUpdate,        // Proc Update
    itLizardonWeaponFlameProcMap,           // Proc Map
    itLizardonWeaponFlameProcHit,           // Proc Hit
    itLizardonWeaponFlameProcHit,           // Proc Shield
    NULL,                                   // Proc Hop
    itLizardonWeaponFlameProcHit,           // Proc Set-Off
    itLizardonWeaponFlameProcReflector,     // Proc Reflector
    NULL                                    // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itLizardonStatus
{
    itStatus_Lizardon_UFall,    // Unused
    itStatus_Lizardon_AFall,
    itStatus_Lizardon_NAttack,
    itStatus_Lizardon_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017F470
sb32 itLizardonUFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITLIZARDON_GRAVITY, ITLIZARDON_T_VEL);

    return FALSE;
}

// 0x8017F49C
sb32 itLizardonUFallProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapCheckMapCollideLanding(item_gobj, 0.2F, 1.0F, itLizardonNAttackSetStatus);

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x8017F49C
sb32 itLizardonUFallSetStatus(GObj *item_gobj) // Unused
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITLizardonStatusDesc, itStatus_Lizardon_UFall);
}

// 0x8017F53C
sb32 itLizardonAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITLIZARDON_GRAVITY, ITLIZARDON_T_VEL);

    return FALSE;
}

// 0x8017F568
sb32 itLizardonAFallProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapTestAllCheckCollEnd(item_gobj);

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itLizardonNAttackSetStatus(item_gobj);
        itLizardonNAttackInitItemVars(item_gobj);
    }
    return FALSE;
}

// 0x8017F5C4
void itLizardonAFallSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITLizardonStatusDesc, itStatus_Lizardon_AFall);
}

// 0x8017F5EC
sb32 itLizardonNAttackProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    Vec3f pos = dobj->translate.vec.f;

    if (ip->it_kind == It_Kind_Lizardon)
    {
        pos.y += ITLIZARDON_LIZARDON_FLAME_OFF_Y;

        pos.x += (ITLIZARDON_LIZARDON_FLAME_OFF_X * ip->lr);
    }
    else pos.x += (ITLIZARDON_OTHER_FLAME_OFF_X * ip->lr);
    
    if (ip->item_vars.lizardon.flame_spawn_wait == 0)
    {
        itLizardonNAttackMakeFlame(item_gobj, &pos, ip->lr);

        ip->item_vars.lizardon.flame_spawn_wait = ITLIZARDON_FLAME_SPAWN_WAIT;
    }
    ip->item_vars.lizardon.flame_spawn_wait--;

    if (ip->it_multi == 0)
    {
        return TRUE;
    }
    if (ip->item_vars.lizardon.turn_wait == 0)
    {
        ip->item_vars.lizardon.turn_wait = ITLIZARDON_TURN_WAIT;

        ip->lr = -ip->lr;

        pos = dobj->translate.vec.f;

        pos.y += ip->attributes->objectcoll_bottom;

        pos.x += (ip->attributes->objectcoll_width + ITLIZARDON_DUST_GFX_OFF_X) * -ip->lr;

        efManagerDustHeavyMakeEffect(&pos, -ip->lr);

        if (ip->it_kind == It_Kind_Pippi)
        {
            dobj->rotate.vec.f.y += F_CST_DTOR32(180.0F);
        }
    }
    ip->item_vars.lizardon.turn_wait--;

    ip->it_multi--;

    return FALSE;
}

// 0x8017F7E8
sb32 itLizardonNAttackProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itLizardonAFallSetStatus);

    return FALSE;
}

// 0x8017F810
void itLizardonNAttackInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    s32 unused[2];
    void *addr;
    Vec3f pos;

    ip->item_vars.lizardon.turn_wait = ITLIZARDON_TURN_WAIT;

    pos = dobj->translate.vec.f;

    ip->item_vars.lizardon.pos = pos;

    ip->item_vars.lizardon.flame_spawn_wait = 0;

    ip->lr = LR_Left;

    if (ip->it_kind == It_Kind_Lizardon)
    {
        addr = (void*) ((uintptr_t)ip->attributes->model_desc - (intptr_t)&lITLizardonDataStart); // Linker thing

        omAddDObjAnimAll(dobj, (void*) ((uintptr_t)addr + (intptr_t)&lITLizardonAnimJoint), 0.0F); // Linker thing
        omAddMObjAnimAll(dobj->mobj, (void*) ((uintptr_t)addr + (intptr_t)&lITLizardonMatAnimJoint), 0.0F); // Linker thing
        func_8000DF34_EB34(item_gobj);
    }
}

// 0x8017F8E4
void itLizardonNAttackSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITLizardonStatusDesc, itStatus_Lizardon_NAttack);
}

// 0x8017F90C
sb32 itLizardonSDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->it_multi = ITLIZARDON_LIFETIME;

        ip->phys_info.vel_air.y = 0.0F;

        if (ip->it_kind == It_Kind_Lizardon)
        {
            func_800269C0_275C0(alSound_Voice_MBallLizardonSpawn);
        }
        itLizardonAFallSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017F98C
sb32 itLizardonSDefaultProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x8017F9CC
GObj* itLizardonMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITLizardonItemDesc, pos, vel, flags);
    DObj *dobj;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        dobj = DObjGetStruct(item_gobj);

        omAddOMMtxForDObjFixed(dobj, OMMtx_Transform_TraRotRpyR, 0);
        omAddOMMtxForDObjFixed(dobj, 0x48, 0);

        dobj->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        dobj->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(dobj, itGetMonsterAnimNode(ip, lITLizardonDataStart), 0.0F);
    }
    return item_gobj;
}

// 0x8017FACC
sb32 itLizardonWeaponFlameProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8017FAF8
sb32 itLizardonWeaponFlameProcMap(GObj *weapon_gobj)
{
    if (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

// 0x8017FB3C
sb32 itLizardonWeaponFlameProcHit(GObj *weapon_gobj)
{
    func_800269C0_275C0(alSound_SFX_ExplodeS);
    efManagerSparkleWhiteMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return FALSE;
}

// 0x8017FB74
sb32 itLizardonWeaponFlameProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);
    Vec3f *translate;

    wp->lifetime = ITLIZARDON_FLAME_LIFETIME;

    wpMainReflectorSetLR(wp, fp);

    translate = &DObjGetStruct(weapon_gobj)->translate.vec.f;

    func_ovl0_800CE8C0(gITManagerParticleBankID | 8, 2, translate->x, translate->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);
    func_ovl0_800CE8C0(gITManagerParticleBankID | 8, 0, translate->x, translate->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);

    return FALSE;
}

// 0x8017FC38
GObj* itLizardonWeaponFlameMakeWeapon(GObj *item_gobj, Vec3f *pos, Vec3f *vel)
{
    GObj *weapon_gobj = wpManagerMakeWeapon(item_gobj, &dITLizardonWeaponFlameWeaponDesc, pos, WEAPON_MASK_SPAWN_ITEM);
    wpStruct *ip;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    ip = wpGetStruct(weapon_gobj);

    ip->phys_info.vel_air = *vel;

    ip->lifetime = ITLIZARDON_FLAME_LIFETIME;

    func_ovl0_800CE8C0(gITManagerParticleBankID | 8, 2, pos->x, pos->y, 0.0F, ip->phys_info.vel_air.x, ip->phys_info.vel_air.y, 0.0F); // This needs to return something in v0 to match
    func_ovl0_800CE8C0(gITManagerParticleBankID | 8, 0, pos->x, pos->y, 0.0F, ip->phys_info.vel_air.x, ip->phys_info.vel_air.y, 0.0F);

    return weapon_gobj;
}

// 0x8017FD2C
void itLizardonNAttackMakeFlame(GObj *item_gobj, Vec3f *pos, s32 lr)
{
    itStruct *ip = itGetStruct(item_gobj);
    Vec3f vel;

    vel.x = __cosf(ITLIZARDON_FLAME_SPAWN_ANGLE) * ITLIZARDON_FLAME_VEL_XY * lr;
    vel.y = __sinf(ITLIZARDON_FLAME_SPAWN_ANGLE) * ITLIZARDON_FLAME_VEL_XY;
    vel.z = 0.0F;

    itLizardonWeaponFlameMakeWeapon(item_gobj, pos, &vel);

    func_800269C0_275C0(alSound_SFX_LizardonFlame);
}
