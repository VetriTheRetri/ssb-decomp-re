#include <it/item.h>
#include <sys/develop.h>
#include <sys/hal_gu.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITPippiItemAttributes;     // 0x00000C74
extern intptr_t lITPippiDataStart;          // 0x00013598

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018B370
void (*dITPippiStatusProcList[/* */])(GObj*) =
{
    itIwarkAttackSetStatus, 
    itKabigonJumpSetStatus, 
    itTosakintoAppearSetStatus, 
    itNyarsAttackSetStatus,
    itLizardonFallSetStatus, 
    itSpearFlySetStatus, 
    itKamexAppearSetStatus, 
    itMLuckyAppearSetStatus,
    itStarmieNFollowSetStatus, 
    itSawamuraFallSetStatus, 
    itDogasAttackSetStatus, 
    itMewFlySetStatus
};

// 0x8018B3A0
itCreateDesc dITPippiItemDesc = 
{
    nITKindPippi,                           // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITPippiItemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformTraRotRpyR,             // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
        0,                                  // ???
    },

    nGMHitUpdateNew,                        // Hitbox Update State
    itPippiCommonProcUpdate,                // Proc Update
    itPippiCommonProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

#if !defined(DAIRANTOU_OPT0)

// 0x8018B3D4 - why
itStatusDesc dITPippiStatusDesc = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };

#endif

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80183210
void itPippiCommonSelectMonster(GObj *item_gobj)
{
    s32 it_kind;
    s32 index;
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    index = mtTrigGetRandomIntRange(ARRAY_COUNT(dITPippiStatusProcList));

    it_kind = index + nITKindMBallMonsterStart;

    if ((it_kind == nITKindSpear) || (it_kind == nITKindKamex))
    {
        if (mtTrigGetRandomIntRange(2) == 0)
        {
            dobj->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32

            ip->lr = nGMFacingR;
        }
        else ip->lr = nGMFacingL;
    }
    if ((it_kind == nITKindPippi) || (it_kind == nITKindTosakinto) || (it_kind == nITKindMLucky))
    {
        ip->item_hit.update_state = nGMHitUpdateDisable;
    }
    if (it_kind == nITKindSawamura)
    {
        ip->it_multi = ITSAWAMURA_KICK_WAIT;
    }
    if ((it_kind == nITKindSawamura) || (it_kind == nITKindStarmie))
    {
        item_gobj->proc_render = itPippiCommonMoveDLProcRender;

        omMoveGObjDLHead(item_gobj, 18, item_gobj->dl_link_order);
    }
    if (it_kind == nITKindLizardon)
    {
        ip->it_multi = ITLIZARDON_LIFETIME;
    }
    dITPippiStatusProcList[index](item_gobj);
}

// 0x80183344
void itPippiCommonProcRender(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    if (itRenderCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == nDBDisplayModeMaster) || (ip->is_hold))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else if (ip->display_mode == nDBDisplayModeMapCollision)
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            odRenderDObjTreeForGObj(item_gobj);
            itRenderMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == nGMHitStatusNone) && (ip->item_hit.update_state == nGMHitUpdateDisable))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else itRenderHitCollisions(item_gobj);
    }
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x801834A0 - Render routine of Hitmonlee / Starmie metronome abilities
void itPippiCommonMoveDLProcRender(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    if (itRenderCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == nDBDisplayModeMaster) || (ip->is_hold))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else if (ip->display_mode == nDBDisplayModeMapCollision)
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            odRenderDObjTreeForGObj(item_gobj);
            itRenderMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == nGMHitStatusNone) && (ip->item_hit.update_state == nGMHitUpdateDisable))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else itRenderHitCollisions(item_gobj);
    }
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x801835FC
sb32 itPippiCommonProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

        itPippiCommonSelectMonster(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80183650
sb32 itPippiCommonProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x80183690
GObj* itPippiMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITPippiItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        itStruct *ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        omAddOMMtxForDObjFixed(dobj, 0x48, 0);

        dobj->translate.vec.f = *pos;

        dobj->translate.vec.f.y -= ip->attributes->objcoll_bottom;

        gcAddDObjAnimJoint(dobj, itGetMonsterAnimNode(ip, lITPippiDataStart), 0.0F); // Linker thing
        func_800269C0_275C0(nGMSoundVoiceMBallPippiSpawn);

        item_gobj->proc_render = itPippiCommonProcRender;
    }
    return item_gobj;
}
