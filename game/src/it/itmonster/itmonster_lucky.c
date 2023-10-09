#include <it/item.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lLuckyDataStart;            // 0x00010000
extern intptr_t lLuckyAnimJoint;            // 0x000100BC

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AFB0
itCreateDesc itMonster_Lucky_ItemDesc = 
{
    It_Kind_MLucky,                         // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0xA84,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itMLucky_SDefault_ProcUpdate,           // Proc Update
    itMLucky_SDefault_ProcMap,              // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AFE4
itStatusDesc itMonster_Lucky_StatusDesc[/* */] =
{
    // Status 0 (Air Fall)
    {
        itMLucky_AFall_ProcUpdate,          // Proc Update
        itMLucky_AFall_ProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Neutral Appear)
    {
        itMLucky_NAppear_ProcUpdate,        // Proc Update
        itMLucky_NAppear_ProcMap,           // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Neutral Egg Spawn)
    {
        itMLucky_NSpawn_ProcUpdate,         // Proc Update
        itMLucky_NSpawn_ProcMap,            // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itMLucky_NSpawn_ProcDamage          // Proc Damage
    },

    // Status 3 (Neutral Disappear)
    {
        itMLucky_NDisappear_ProcUpdate,     // Proc Update
        itMLucky_NSpawn_ProcMap,            // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itMLuckyStatus
{
    itStatus_MLucky_AFall,
    itStatus_MLucky_NAppear,
    itStatus_MLucky_NSpawn,
    itStatus_MLucky_NDisappear,
    itStatus_MLucky_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80180FC0
void itMLucky_GSpawn_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ip->it_kind == It_Kind_MLucky)
    {
        omAddDObjAnimAll(joint->child, itGetPData(ip, lLuckyDataStart, lLuckyAnimJoint), 0.0F); // Linker thing
        func_8000DF34(item_gobj);
    }
    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    ip->item_vars.mlucky.egg_spawn_wait = ITMBLUCKY_EGG_SPAWN_WAIT_CONST;

    ip->it_multi = ITMBLUCKY_EGG_SPAWN_COUNT;
}

// 0x80181048
sb32 itMLucky_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_ApplyGravityClampTVel(ip, ITMBLUCKY_GRAVITY, ITMBLUCKY_T_VEL);

    return FALSE;
}

// 0x80181074
sb32 itMLucky_AFall_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    func_ovl3_80173680(item_gobj);

    if (ip->coll_data.update_mask_curr & MPCOLL_KIND_GROUND)
    {
        ip->phys_info.vel_air.y = 0.0F;

        if (ip->it_multi != 0)
        {
            itMLucky_NSpawn_SetStatus(item_gobj);
        }
        else itMLucky_NDisappear_SetStatus(item_gobj);
    }
    return FALSE;
}

// 0x801810E0
void itMLucky_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itMain_SetItemStatus(item_gobj, itMonster_Lucky_StatusDesc, itStatus_MLucky_AFall);
}

// 0x80181124
sb32 itMLucky_NAppear_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_ApplyGravityClampTVel(ip, ITMBLUCKY_GRAVITY, ITMBLUCKY_T_VEL);

    return FALSE;
}

// 0x80181150
sb32 itMLucky_NAppear_ProcMap(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    func_ovl3_80173680(item_gobj);

    if (ap->coll_data.update_mask_curr & MPCOLL_KIND_GROUND)
    {
        ap->phys_info.vel_air.y = 0.0F;

        itMLucky_NSpawn_SetStatus(item_gobj);

        itMLucky_GSpawn_InitItemVars(item_gobj);
    }
    return FALSE;
}

// 0x801811AC
void itMLucky_NAppear_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_kind == It_Kind_MLucky)
    {
        func_800269C0(alSound_Voice_MBallLuckySpawn);
    }
    itMain_SetItemStatus(item_gobj, itMonster_Lucky_StatusDesc, itStatus_MLucky_NAppear);
}

// 0x80181200
sb32 itMLucky_NSpawn_ProcUpdate(GObj *lucky_gobj)
{
    itStruct *lucky_ip = itGetStruct(lucky_gobj), *egg_ip;
    DObj *joint = DObjGetStruct(lucky_gobj);
    GObj *egg_gobj;
    s32 unused;
    Vec3f pos;
    Vec3f vel;

    if (lucky_ip->it_multi == 0)
    {
        itMLucky_NDisappear_SetStatus(lucky_gobj);

        return FALSE;
    }
    else
    {
        if (!lucky_ip->item_vars.mlucky.egg_spawn_wait)
        {
            if ((gBattleState->item_toggles & ITEM_TOGGLE_MASK_KIND(It_Kind_Egg)) && (gBattleState->item_switch != gmMatch_ItemSwitch_None))
            {
                pos = joint->translate.vec.f;

                vel.x = (lbRandom_GetFloat() * ITMBLUCKY_EGG_SPAWN_BASE_VEL) + ITMBLUCKY_EGG_SPAWN_ADD_VEL_X;
                vel.y = (lbRandom_GetFloat() * ITMBLUCKY_EGG_SPAWN_BASE_VEL) + ITMBLUCKY_EGG_SPAWN_ADD_VEL_Y;
                vel.z = 0.0F;

                egg_gobj = itManager_MakeItemSetupCommon(lucky_gobj, It_Kind_Egg, &pos, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

                if (egg_gobj != NULL)
                {
                    egg_ip = itGetStruct(egg_gobj);

                    func_800269C0(alSound_SFX_KirbySpecialLwStart);

                    lucky_ip->item_vars.mlucky.egg_spawn_wait = ITMBLUCKY_EGG_SPAWN_WAIT_CONST;
                    lucky_ip->it_multi--;

                    efParticle_DustLight_MakeEffect(&pos, egg_ip->lr, 1.0F);
                }
            }
            else
            {
                lucky_ip->item_vars.mlucky.egg_spawn_wait = ITMBLUCKY_EGG_SPAWN_WAIT_CONST;
                lucky_ip->it_multi--;
            }
        }
        if (lucky_ip->item_vars.mlucky.egg_spawn_wait > 0)
        {
            lucky_ip->item_vars.mlucky.egg_spawn_wait--;
        }
    }
    return FALSE;
}

// 0x80181368
sb32 itMLucky_NSpawn_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itMLucky_AFall_SetStatus);

    return FALSE;
}

// 0x80181390
sb32 itMLucky_NSpawn_ProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.mlucky.egg_spawn_wait += ITMBLUCKY_EGG_SPAWN_WAIT_ADD;

    return FALSE;
}

// 0x801813A8
void itMLucky_NSpawn_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itMonster_Lucky_StatusDesc, itStatus_MLucky_NSpawn);
}

// 0x801813D0
sb32 itMLucky_NDisappear_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.mlucky.lifetime == 0)
    {
        return TRUE;
    }
    ip->item_vars.mlucky.lifetime--;

    return FALSE;
}

// 0x801813F8
void itMLucky_NDisappear_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.mlucky.lifetime = ITMBLUCKY_LIFETIME;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    itMain_SetItemStatus(item_gobj, itMonster_Lucky_StatusDesc, itStatus_MLucky_NDisappear);
}

// 0x80181430
sb32 itMLucky_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itMLucky_NAppear_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80181480
sb32 itMLucky_SDefault_ProcMap(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (func_ovl3_801737B8(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ap->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x801814C0
GObj* itMonster_Lucky_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itMonster_Lucky_ItemDesc, pos, vel, flags);
    DObj *joint;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);

        func_80008CC0(joint->child, 0x2C, 0);

        joint->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;
        
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        joint->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(joint->next, itGetPData(ip, lLuckyDataStart, lMonsterAnimBankStart), 0.0F); // Linker thing
    }
    return item_gobj;
}