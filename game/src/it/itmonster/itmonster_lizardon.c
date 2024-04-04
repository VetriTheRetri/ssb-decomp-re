#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lLizardonDataStart;     // 0x0000D5C0
extern intptr_t lLizardonAnimJoint;     // 0x0000D658
extern intptr_t lLizardonMatAnimJoint;  // 0x0000D688

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AD30
itCreateDesc itMonster_Lizardon_ItemDesc = 
{
    It_Kind_Lizardon,                       // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0x8FC,                                  // Offset of item attributes in file?
    0,                                      // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itLizardon_SDefault_ProcUpdate,         // Proc Update
    itLizardon_SDefault_ProcMap,            // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AD64
itStatusDesc itMonster_Lizardon_StatusDesc[/* */] = 
{
    // Status 0 (Unused Fall)
    {
        itLizardon_UFall_ProcUpdate,        // Proc Update
        itLizardon_UFall_ProcMap,           // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Fall)
    {
        itLizardon_AFall_ProcUpdate,        // Proc Update
        itLizardon_AFall_ProcMap,           // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Neutral Attack)
    {
        itLizardon_NAttack_ProcUpdate,      // Proc Update
        itLizardon_NAttack_ProcMap,         // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x8018ADC4
wpCreateDesc wpLizardon_Flame_WeaponDesc = 
{
    0,                                      // Render flags?
    Wp_Kind_LizardonFlame,                  // Weapon Kind
    &gItemFileData,                         // Pointer to character's loaded files?
    0x944,                                  // Offset of weapon attributes in loaded files
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    wpLizardon_Flame_ProcUpdate,            // Proc Update
    wpLizardon_Flame_ProcMap,               // Proc Map
    wpLizardon_Flame_ProcHit,               // Proc Hit
    wpLizardon_Flame_ProcHit,               // Proc Shield
    NULL,                                   // Proc Hop
    wpLizardon_Flame_ProcHit,               // Proc Set-Off
    wpLizardon_Flame_ProcReflector,         // Proc Reflector
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
sb32 itLizardon_UFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITLIZARDON_GRAVITY, ITLIZARDON_T_VEL);

    return FALSE;
}

// 0x8017F49C
sb32 itLizardon_UFall_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapCheckMapCollideLanding(item_gobj, 0.2F, 1.0F, itLizardon_NAttack_SetStatus);

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x8017F49C
sb32 itLizardon_UFall_SetStatus(GObj *item_gobj) // Unused
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, itMonster_Lizardon_StatusDesc, itStatus_Lizardon_UFall);
}

// 0x8017F53C
sb32 itLizardon_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITLIZARDON_GRAVITY, ITLIZARDON_T_VEL);

    return FALSE;
}

// 0x8017F568
sb32 itLizardon_AFall_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapTestAllCheckCollEnd(item_gobj);

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itLizardon_NAttack_SetStatus(item_gobj);
        itLizardon_NAttack_InitItemVars(item_gobj);
    }
    return FALSE;
}

// 0x8017F5C4
void itLizardon_AFall_SetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, itMonster_Lizardon_StatusDesc, itStatus_Lizardon_AFall);
}

// 0x8017F5EC
sb32 itLizardon_NAttack_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    Vec3f pos = joint->translate.vec.f;

    if (ip->it_kind == It_Kind_Lizardon)
    {
        pos.y += ITLIZARDON_LIZARDON_FLAME_OFF_Y;

        pos.x += (ITLIZARDON_LIZARDON_FLAME_OFF_X * ip->lr);
    }
    else pos.x += (ITLIZARDON_OTHER_FLAME_OFF_X * ip->lr);
    
    if (ip->item_vars.lizardon.flame_spawn_wait == 0)
    {
        itLizardon_NAttack_MakeFlame(item_gobj, &pos, ip->lr);

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

        pos = joint->translate.vec.f;

        pos.y += ip->attributes->objectcoll_bottom;

        pos.x += (ip->attributes->objectcoll_width + ITLIZARDON_DUST_GFX_OFF_X) * -ip->lr;

        efParticle_DustHeavy_MakeEffect(&pos, -ip->lr);

        if (ip->it_kind == It_Kind_Pippi)
        {
            joint->rotate.vec.f.y += F_DEG_TO_RAD(180.0F);
        }
    }
    ip->item_vars.lizardon.turn_wait--;

    ip->it_multi--;

    return FALSE;
}

// 0x8017F7E8
sb32 itLizardon_NAttack_ProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itLizardon_AFall_SetStatus);

    return FALSE;
}

// 0x8017F810
void itLizardon_NAttack_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    s32 unused[2];
    void *addr;
    Vec3f pos;

    ip->item_vars.lizardon.turn_wait = ITLIZARDON_TURN_WAIT;

    pos = joint->translate.vec.f;

    ip->item_vars.lizardon.pos = pos;

    ip->item_vars.lizardon.flame_spawn_wait = 0;

    ip->lr = LR_Left;

    if (ip->it_kind == It_Kind_Lizardon)
    {
        addr = (void*) ((uintptr_t)ip->attributes->model_desc - (intptr_t)&lLizardonDataStart); // Linker thing

        omAddDObjAnimAll(joint, (void*) ((uintptr_t)addr + (intptr_t)&lLizardonAnimJoint), 0.0F); // Linker thing
        omAddMObjAnimAll(joint->mobj, (void*) ((uintptr_t)addr + (intptr_t)&lLizardonMatAnimJoint), 0.0F); // Linker thing
        func_8000DF34(item_gobj);
    }
}

// 0x8017F8E4
void itLizardon_NAttack_SetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, itMonster_Lizardon_StatusDesc, itStatus_Lizardon_NAttack);
}

// 0x8017F90C
sb32 itLizardon_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->it_multi = ITLIZARDON_LIFETIME;

        ip->phys_info.vel_air.y = 0.0F;

        if (ip->it_kind == It_Kind_Lizardon)
        {
            func_800269C0(alSound_Voice_MBallLizardonSpawn);
        }
        itLizardon_AFall_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017F98C
sb32 itLizardon_SDefault_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x8017F9CC
GObj* itMonster_Lizardon_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &itMonster_Lizardon_ItemDesc, pos, vel, flags);
    DObj *joint;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);

        omAddOMMtxForDObjFixed(joint, 0x1B, 0);
        omAddOMMtxForDObjFixed(joint, 0x48, 0);

        joint->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        joint->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(joint, itGetPData(ip, lLizardonDataStart, lMonsterAnimBankStart), 0.0F);
    }
    return item_gobj;
}

// 0x8017FACC
sb32 wpLizardon_Flame_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8017FAF8
sb32 wpLizardon_Flame_ProcMap(GObj *weapon_gobj)
{
    if (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

// 0x8017FB3C
sb32 wpLizardon_Flame_ProcHit(GObj *weapon_gobj)
{
    func_800269C0(alSound_SFX_ExplodeS);
    efParticle_SparkWhiteLarge_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return FALSE;
}

// 0x8017FB74
sb32 wpLizardon_Flame_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);
    Vec3f *translate;

    wp->lifetime = ITLIZARDON_FLAME_LIFETIME;

    wpMainReflectorSetLR(wp, fp);

    translate = &DObjGetStruct(weapon_gobj)->translate.vec.f;

    func_ovl0_800CE8C0(gItemEffectBank | 8, 2, translate->x, translate->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);
    func_ovl0_800CE8C0(gItemEffectBank | 8, 0, translate->x, translate->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);

    return FALSE;
}

// 0x8017FC38
GObj* wpLizardon_Flame_MakeWeapon(GObj *item_gobj, Vec3f *pos, Vec3f *vel)
{
    GObj *weapon_gobj = wpManagerMakeWeapon(item_gobj, &wpLizardon_Flame_WeaponDesc, pos, WEAPON_MASK_SPAWN_ITEM);
    wpStruct *ip;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    ip = wpGetStruct(weapon_gobj);

    ip->phys_info.vel = *vel;

    ip->lifetime = ITLIZARDON_FLAME_LIFETIME;

    func_ovl0_800CE8C0(gItemEffectBank | 8, 2, pos->x, pos->y, 0.0F, ip->phys_info.vel_air.x, ip->phys_info.vel_air.y, 0.0F); // This needs to something in v0 to match
    func_ovl0_800CE8C0(gItemEffectBank | 8, 0, pos->x, pos->y, 0.0F, ip->phys_info.vel_air.x, ip->phys_info.vel_air.y, 0.0F);

    return weapon_gobj;
}

// 0x8017FD2C
void itLizardon_NAttack_MakeFlame(GObj *item_gobj, Vec3f *pos, s32 lr)
{
    itStruct *ip = itGetStruct(item_gobj);
    Vec3f vel;

    vel.x = cosf(ITLIZARDON_FLAME_SPAWN_ANGLE) * ITLIZARDON_FLAME_VEL_XY * lr;
    vel.y = __sinf(ITLIZARDON_FLAME_SPAWN_ANGLE) * ITLIZARDON_FLAME_VEL_XY;
    vel.z = 0.0F;

    wpLizardon_Flame_MakeWeapon(item_gobj, pos, &vel);

    func_800269C0(alSound_SFX_LizardonFlame);
}