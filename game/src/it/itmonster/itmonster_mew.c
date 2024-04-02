#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lMewDataStart; // 0x0000BCC0

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AC40
itCreateDesc itMonster_Mew_ItemDesc =
{
    It_Kind_Mew,                            // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0x838,                                  // Offset of item attributes in file?
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itMew_SDefault_ProcUpdate,              // Proc Update
    itMew_SDefault_ProcMap,                 // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AC74
itStatusDesc itMonster_Mew_StatusDesc[/* */] =
{
    // Status 0 (Neutral FLy)
    {
        itMew_NFly_ProcUpdate,              // Proc Update
        NULL,                               // Proc Map
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

enum itMewStatus
{
    itStatus_Mew_NFly,
    itStatus_Mew_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017EBE0
sb32 itMew_NFly_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    Vec3f pos = DObjGetStruct(item_gobj)->translate.vec.f;

    if (ip->it_multi == 0)
    {
        return TRUE;
    }
    if (ip->item_vars.mew.esper_gfx_int == 0)
    {
        ip->item_vars.mew.esper_gfx_int = ITMEW_GFX_SPAWN_INT;

        efParticle_HealSparkles_MakeEffect(&pos);
    }
    ip->item_vars.mew.esper_gfx_int--;

    ip->it_multi--;

    ip->phys_info.vel_air.y += ITMEW_FLY_ADD_VEL_Y;

    return FALSE;
}

// 0x8017EC84
void itMew_NFly_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITMEW_LIFETIME;

    if (lbRandom_GetIntRange(2) != 0)
    {
        ip->phys_info.vel_air.x = ITMEW_START_VEL_X;
    }
    else ip->phys_info.vel_air.x = -ITMEW_START_VEL_X;
    
    ip->phys_info.vel_air.y = ITMEW_START_VEL_Y;

    func_800269C0(alSound_SFX_MewFly);

    if (ip->it_kind == It_Kind_Mew)
    {
        func_800269C0(alSound_Voice_MBallMewSpawn);
    }
    efParticle_Ripple_MakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

    ip->item_vars.mew.esper_gfx_int = 0;
}

// 0x8017ED20
void itMew_NFly_SetStatus(GObj *item_gobj)
{
    itMew_NFly_InitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, itMonster_Mew_StatusDesc, itStatus_Mew_NFly);
}

// 0x8017ED54
sb32 itMew_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itMew_NFly_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017EDA4
sb32 itMew_SDefault_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x8017EDE4
GObj* itMonster_Mew_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &itMonster_Mew_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        itStruct *ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y; // Starting to think this is a macro

        joint->translate.vec.f.y -= ip->attributes->objectcoll_bottom;
            
        // This ptr stuff is likely also a macro
        omAddDObjAnimAll(joint, itGetPData(ip, lMewDataStart, lMonsterAnimBankStart), 0.0F); // Linker thing
    }
    return item_gobj;
}