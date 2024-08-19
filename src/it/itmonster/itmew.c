#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITMewItemAttributes;       // 0x00000838
extern intptr_t lITMewDataStart;            // 0x0000BCC0

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AC40
itCreateDesc dITMewItemDesc =
{
    nITKindMew,                             // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITMewItemAttributes,                  // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformTraRotRpyRSca,          // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
        0,                                  // ???
    },

    nGMHitUpdateDisable,                    // Hitbox Update State
    itMewCommonProcUpdate,                  // Proc Update
    itMewCommonProcMap,                     // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AC74
itStatusDesc dITMewStatusDescs[/* */] =
{
    // Status 0 (Neutral FLy)
    {
        itMewFlyProcUpdate,                 // Proc Update
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
    nITMewStatusFly,
    nITMewStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017EBE0
sb32 itMewFlyProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    Vec3f pos = DObjGetStruct(item_gobj)->translate.vec.f;

    if (ip->it_multi == 0)
    {
        return TRUE;
    }
    if (ip->item_vars.mew.esper_gfx_int == 0)
    {
        ip->item_vars.mew.esper_gfx_int = ITMEW_EFFECT_SPAWN_INT;

        efManagerHealSparklesMakeEffect(&pos);
    }
    ip->item_vars.mew.esper_gfx_int--;

    ip->it_multi--;

    ip->phys_info.vel_air.y += ITMEW_FLY_ADD_VEL_Y;

    return FALSE;
}

// 0x8017EC84
void itMewFlyInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITMEW_LIFETIME;

    if (mtTrigGetRandomIntRange(2) != 0)
    {
        ip->phys_info.vel_air.x = ITMEW_STARTVEL_X;
    }
    else ip->phys_info.vel_air.x = -ITMEW_STARTVEL_X;
    
    ip->phys_info.vel_air.y = ITMEW_STARTVEL_Y;

    func_800269C0_275C0(nSYAudioFGMMewFly);

    if (ip->it_kind == nITKindMew)
    {
        func_800269C0_275C0(nSYAudioVoiceMBallMewAppear);
    }
    efManagerRippleMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

    ip->item_vars.mew.esper_gfx_int = 0;
}

// 0x8017ED20
void itMewFlySetStatus(GObj *item_gobj)
{
    itMewFlyInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITMewStatusDescs, nITMewStatusFly);
}

// 0x8017ED54
sb32 itMewCommonProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itMewFlySetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017EDA4
sb32 itMewCommonProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x8017EDE4
GObj* itMewMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITMewItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        itStruct *ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y; // Starting to think this is a macro

        dobj->translate.vec.f.y -= ip->attributes->objcoll_bottom;
            
        // This ptr stuff is likely also a macro
        gcAddDObjAnimJoint(dobj, itGetMonsterAnimNode(ip, lITMewDataStart), 0.0F); // Linker thing
    }
    return item_gobj;
}
