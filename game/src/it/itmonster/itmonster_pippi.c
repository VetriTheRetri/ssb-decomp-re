#include <it/item.h>
#include <sys/develop.h>
#include <sys/hal_gu.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lPippiDataStart; // 0x00013598

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

extern void itIwark_NAttack_SetStatus(GObj*);
extern void itKabigon_NJump_SetStatus(GObj*);
extern void itTosakinto_NAppear_SetStatus(GObj*);
extern void itNyars_NAttack_SetStatus(GObj*);
extern void itLizardon_AFall_SetStatus(GObj*);
extern void itSpear_NFly_SetStatus(GObj*);
extern void itKamex_NAppear_SetStatus(GObj*);
extern void itMLucky_NAppear_SetStatus(GObj*);
extern void itStarmie_NFollow_SetStatus(GObj*);
extern void itSawamura_AFall_SetStatus(GObj*);
extern void itDogas_NAttack_SetStatus(GObj*);
extern void itMew_NFly_SetStatus(GObj*);

// 0x8018B370
void (*itMonster_Pippi_ProcStatus[/* */])(GObj*) =
{
    itIwark_NAttack_SetStatus, 
    itKabigon_NJump_SetStatus, 
    itTosakinto_NAppear_SetStatus, 
    itNyars_NAttack_SetStatus,
    itLizardon_AFall_SetStatus, 
    itSpear_NFly_SetStatus, 
    itKamex_NAppear_SetStatus, 
    itMLucky_NAppear_SetStatus,
    itStarmie_NFollow_SetStatus, 
    itSawamura_AFall_SetStatus, 
    itDogas_NAttack_SetStatus, 
    itMew_NFly_SetStatus
};

// 0x8018B3A0
itCreateDesc itMonster_Pippi_ItemDesc = 
{
    It_Kind_Pippi,                          // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0xC74,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itPippi_SDefault_ProcUpdate,            // Proc Update
    itPippi_SDefault_ProcMap,               // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80183210
void itPippi_NMetro_SelectMonster(GObj *item_gobj)
{
    s32 it_kind;
    s32 index;
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    index = lbRandom_GetIntRange(It_Kind_MbMonsterEnd - It_Kind_MbMonsterStart);

    it_kind = index + It_Kind_MbMonsterStart;

    if ((it_kind == It_Kind_Spear) || (it_kind == It_Kind_Kamex))
    {
        if (lbRandom_GetIntRange(2) == 0)
        {
            joint->rotate.vec.f.y = F_DEG_TO_RAD(180.0F); // PI32

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
        item_gobj->proc_render = itPippi_NSawaStar_ProcRender;

        omMoveGObjDLHead(item_gobj, 0x12, item_gobj->dl_link_order);
    }
    if (it_kind == It_Kind_Lizardon)
    {
        ip->it_multi = ITLIZARDON_LIFETIME;
    }
    itMonster_Pippi_ProcStatus[index](item_gobj);
}

// 0x80183344
void itPippi_SDefault_ProcRender(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    if (itRender_CheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == dbObject_DisplayMode_Master) || (ip->is_hold))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            func_80014038(item_gobj);
        }
        else if (ip->display_mode == dbObject_DisplayMode_MapCollision)
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            func_80014038(item_gobj);
            itRender_DisplayMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) && (ip->item_hit.update_state == gmHitCollision_UpdateState_Disable))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            func_80014038(item_gobj);
        }
        else itRender_DisplayHitCollisions(item_gobj);
    }
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x801834A0 - Render routine of Hitmonlee / Starmie metronome abilities
void itPippi_NSawaStar_ProcRender(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    if (itRender_CheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == dbObject_DisplayMode_Master) || (ip->is_hold))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            func_80014038(item_gobj);
        }
        else if (ip->display_mode == dbObject_DisplayMode_MapCollision)
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            func_80014038(item_gobj);
            itRender_DisplayMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) && (ip->item_hit.update_state == gmHitCollision_UpdateState_Disable))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            func_80014038(item_gobj);
        }
        else itRender_DisplayHitCollisions(item_gobj);
    }
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x801835FC
sb32 itPippi_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

        itPippi_NMetro_SelectMonster(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80183650
sb32 itPippi_SDefault_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x80183690
GObj* itMonster_Pippi_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itMonster_Pippi_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        itStruct *ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        omAddOMMtxForDObjFixed(joint, 0x48, 0);

        joint->translate.vec.f = *pos;

        joint->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(joint, itGetPData(ip, lPippiDataStart, lMonsterAnimBankStart), 0.0F); // Linker thing
        func_800269C0(alSound_Voice_MBallPippiSpawn);

        item_gobj->proc_render = itPippi_SDefault_ProcRender;
    }
    return item_gobj;
}