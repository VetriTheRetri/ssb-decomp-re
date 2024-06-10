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
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018B370
void (*dITPippiStatusProcList[/* */])(GObj*) =
{
    itIwarkNAttackSetStatus, 
    itKabigonNJumpSetStatus, 
    itTosakintoNAppearSetStatus, 
    itNyarsNAttackSetStatus,
    itLizardonAFallSetStatus, 
    itSpearNFlySetStatus, 
    itKamexNAppearSetStatus, 
    itMLuckyNAppearSetStatus,
    itStarmieNFollowSetStatus, 
    itSawamuraAFallSetStatus, 
    itDogasNAttackSetStatus, 
    itMewNFlySetStatus
};

// 0x8018B3A0
itCreateDesc dITPippiItemDesc = 
{
    It_Kind_Pippi,                          // Item Kind
    &gITFileData,                         // Pointer to item file data?
    &lITPippiItemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itPippiSDefaultProcUpdate,              // Proc Update
    itPippiSDefaultProcMap,                 // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

#if !defined(DAIRANTOU_OPT1)

// 0x8018B3D4 - why
itStatusDesc dITPippiStatusDesc = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };

#endif

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80183210
void itPippiSDefaultSelectMonster(GObj *item_gobj)
{
    s32 it_kind;
    s32 index;
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    index = lbRandom_GetIntRange(ARRAY_COUNT(dITPippiStatusProcList));

    it_kind = index + It_Kind_MbMonsterStart;

    if ((it_kind == It_Kind_Spear) || (it_kind == It_Kind_Kamex))
    {
        if (lbRandom_GetIntRange(2) == 0)
        {
            dobj->rotate.vec.f.y = F_DTOR32(180.0F); // PI32

            ip->lr = LR_Right;
        }
        else ip->lr = LR_Left;
    }
    if ((it_kind == It_Kind_Pippi) || (it_kind == It_Kind_Tosakinto) || (it_kind == It_Kind_MLucky))
    {
        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;
    }
    if (it_kind == It_Kind_Sawamura)
    {
        ip->it_multi = ITSAWAMURA_KICK_WAIT;
    }
    if ((it_kind == It_Kind_Sawamura) || (it_kind == It_Kind_Starmie))
    {
        item_gobj->proc_render = itPippiSDefaultMoveDLProcRender;

        omMoveGObjDLHead(item_gobj, 0x12, item_gobj->dl_link_order);
    }
    if (it_kind == It_Kind_Lizardon)
    {
        ip->it_multi = ITLIZARDON_LIFETIME;
    }
    dITPippiStatusProcList[index](item_gobj);
}

// 0x80183344
void itPippiSDefaultProcRender(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    if (itRenderCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == dbObject_DisplayMode_Master) || (ip->is_hold))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else if (ip->display_mode == dbObject_DisplayMode_MapCollision)
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            odRenderDObjTreeForGObj(item_gobj);
            itRenderMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) && (ip->item_hit.update_state == gmHitCollision_UpdateState_Disable))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else itRenderHitCollisions(item_gobj);
    }
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x801834A0 - Render routine of Hitmonlee / Starmie metronome abilities
void itPippiSDefaultMoveDLProcRender(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    if (itRenderCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == dbObject_DisplayMode_Master) || (ip->is_hold))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else if (ip->display_mode == dbObject_DisplayMode_MapCollision)
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            odRenderDObjTreeForGObj(item_gobj);
            itRenderMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) && (ip->item_hit.update_state == gmHitCollision_UpdateState_Disable))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else itRenderHitCollisions(item_gobj);
    }
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x801835FC
sb32 itPippiSDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

        itPippiSDefaultSelectMonster(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80183650
sb32 itPippiSDefaultProcMap(GObj *item_gobj)
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

        dobj->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(dobj, itGetMonsterAnimNode(ip, lITPippiDataStart), 0.0F); // Linker thing
        func_800269C0_275C0(alSound_Voice_MBallPippiSpawn);

        item_gobj->proc_render = itPippiSDefaultProcRender;
    }
    return item_gobj;
}
