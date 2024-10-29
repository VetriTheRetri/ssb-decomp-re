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
ITCreateDesc dITPippiItemDesc = 
{
    nITKindPippi,                           // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITPippiItemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCTransformTraRotRpyR,             // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
        0,                                  // ???
    },

    nGMAttackStateNew,                      // Hitbox Update State
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
ITStatusDesc dITPippiStatusDesc = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };

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
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    index = mtTrigGetRandomIntRange(ARRAY_COUNT(dITPippiStatusProcList));

    it_kind = index + nITKindMBallMonsterStart;

    if ((it_kind == nITKindSpear) || (it_kind == nITKindKamex))
    {
        if (mtTrigGetRandomIntRange(2) == 0)
        {
            dobj->rotate.vec.f.y = F_CST_DTOR32(180.0F);

            ip->lr = +1;
        }
        else ip->lr = -1;
    }
    if ((it_kind == nITKindPippi) || (it_kind == nITKindTosakinto) || (it_kind == nITKindMLucky))
    {
        ip->atk_coll.atk_state = nGMAttackStateOff;
    }
    if (it_kind == nITKindSawamura)
    {
        ip->multi = ITSAWAMURA_KICK_WAIT;
    }
    if ((it_kind == nITKindSawamura) || (it_kind == nITKindStarmie))
    {
        item_gobj->func_display = itPippiCommonMoveDLFuncDisplay;

        gcMoveGObjDLHead(item_gobj, 18, item_gobj->dl_link_order);
    }
    if (it_kind == nITKindLizardon)
    {
        ip->multi = ITLIZARDON_LIFETIME;
    }
    dITPippiStatusProcList[index](item_gobj);
}

// 0x80183344
void itPippiCommonFuncDisplay(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gSYTaskmanDLHeads[0]++);

    if (itDisplayCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == nDBDisplayModeMaster) || (ip->is_hold))
        {
            gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            gcDrawDObjTreeForGObj(item_gobj);
        }
        else if (ip->display_mode == nDBDisplayModeMapCollision)
        {
            gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            gcDrawDObjTreeForGObj(item_gobj);
            itDisplayMapCollisions(item_gobj);
        }
        else if ((ip->dmg_coll.hitstatus == nGMHitStatusNone) && (ip->atk_coll.atk_state == nGMAttackStateOff))
        {
            gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            gcDrawDObjTreeForGObj(item_gobj);
        }
        else itDisplayHitCollisions(item_gobj);
    }
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
}

// 0x801834A0 - Render routine of Hitmonlee / Starmie metronome abilities
void itPippiCommonMoveDLFuncDisplay(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gSYTaskmanDLHeads[0]++);

    if (itDisplayCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == nDBDisplayModeMaster) || (ip->is_hold))
        {
            gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            gcDrawDObjTreeForGObj(item_gobj);
        }
        else if (ip->display_mode == nDBDisplayModeMapCollision)
        {
            gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            gcDrawDObjTreeForGObj(item_gobj);
            itDisplayMapCollisions(item_gobj);
        }
        else if ((ip->dmg_coll.hitstatus == nGMHitStatusNone) && (ip->atk_coll.atk_state == nGMAttackStateOff))
        {
            gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            gcDrawDObjTreeForGObj(item_gobj);
        }
        else itDisplayHitCollisions(item_gobj);
    }
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
}

// 0x801835FC
sb32 itPippiCommonProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    if (ip->multi == 0)
    {
        ip->physics.vel_air.x = ip->physics.vel_air.y = 0.0F;

        itPippiCommonSelectMonster(item_gobj);
    }
    ip->multi--;

    return FALSE;
}

// 0x80183650
sb32 itPippiCommonProcMap(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_GROUND) != FALSE)
    {
        ip->physics.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x80183690
GObj* itPippiMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITPippiItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        ITStruct *ip = itGetStruct(item_gobj);

        ip->multi = ITMONSTER_RISE_STOP_WAIT;

        ip->physics.vel_air.x = ip->physics.vel_air.z = 0.0F;
        ip->physics.vel_air.y = ITMONSTER_RISE_VEL_Y;

        gcAddXObjForDObjFixed(dobj, 0x48, 0);

        dobj->translate.vec.f = *pos;

        dobj->translate.vec.f.y -= ip->attr->obj_coll_bottom;

        gcAddDObjAnimJoint(dobj, itGetMonsterAnimNode(ip, lITPippiDataStart), 0.0F); // Linker thing
        func_800269C0_275C0(nSYAudioVoiceMBallPippiAppear);

        item_gobj->func_display = itPippiCommonFuncDisplay;
    }
    return item_gobj;
}
