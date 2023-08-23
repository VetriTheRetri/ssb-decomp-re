#include <it/item.h>

#include <sys/develop.h>
#include <sys/hal_gu.h>
#include <sys/obj_renderer.h>
#include <sys/obj.h>

#include <PR/gu.h>
#include <PR/mbi.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>

extern void func_ovl3_8017DA60(GObj*);
extern void func_ovl3_8017E648(GObj*);
extern void func_ovl3_8017E828(GObj*);
extern void func_ovl3_8017EFC4(GObj*);
extern void func_ovl3_8017F5C4(GObj*);
extern void func_ovl3_80180160(GObj*);
extern void func_ovl3_80180964(GObj*);
extern void func_ovl3_801811AC(GObj*);
extern void func_ovl3_801821E8(GObj*);
extern void func_ovl3_801826A8(GObj*);
extern void itDogas_NActive_SetStatus(GObj*);
extern void func_ovl3_8017ED20(GObj*);

void (*itMonster_Pippi_ProcStatus[/* */])(GObj *) =
{
    func_ovl3_8017DA60, func_ovl3_8017E648, func_ovl3_8017E828, func_ovl3_8017EFC4,
    func_ovl3_8017F5C4, func_ovl3_80180160, func_ovl3_80180964, func_ovl3_801811AC,
    func_ovl3_801821E8, func_ovl3_801826A8, itDogas_NActive_SetStatus, func_ovl3_8017ED20,
};

// 0x80183210
void func_ovl3_80183210(GObj *item_gobj)
{
    s32 it_kind;
    s32 index;
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    index = lbRandom_GetIntRange(It_Kind_MbMonsterMax - It_Kind_MbMonsterStart);

    it_kind = index + It_Kind_MbMonsterStart;

    if ((index == (It_Kind_Spear - It_Kind_MbMonsterStart)) || (it_kind == It_Kind_Kamex))
    {
        if (lbRandom_GetIntRange(2) == 0)
        {
            joint->rotate.y = F_DEG_TO_RAD(180.0F); // PI32

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
        item_gobj->renderer = func_ovl3_801834A0;

        om_g_move_obj_dl_head(item_gobj, 0x12U, item_gobj->room_order);
    }
    if (it_kind == It_Kind_Lizardon)
    {
        ip->it_multi = ITLIZARDON_LIFETIME;
    }
    itMonster_Pippi_ProcStatus[index](item_gobj);
}

void func_ovl3_80183344(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    if (func_ovl3_80171C10(ip) != FALSE)
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
        else
        {
            itRender_DisplayHitCollisions(item_gobj);
        }
    }
    gDPPipeSync(gDisplayListHead[0]++);
}

void func_ovl3_80183344(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    if (func_ovl3_80171C10(ip) != FALSE)
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
        else
        {
            itRender_DisplayHitCollisions(item_gobj);
        }
    }
    gDPPipeSync(gDisplayListHead[0]++);
}

bool32 jtgt_ovl3_801835FC(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (ap->it_multi == 0)
    {
        ap->phys_info.vel_air.y = 0.0F;
        ap->phys_info.vel_air.x = 0.0F;

        func_ovl3_80183210(item_gobj);
    }
    ap->it_multi--;

    return FALSE;
}

bool32 jtgt_ovl3_80183650(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (func_ovl3_801737B8(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

extern intptr_t D_NF_00013598;
extern intptr_t D_NF_00013624;
extern itCreateDesc Article_Pippi_Data;

GObj* jtgt_ovl3_80183690(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &Article_Pippi_Data, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        itStruct *ap = itGetStruct(item_gobj);

        ap->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ap->phys_info.vel_air.x = 0.0F;
        ap->phys_info.vel_air.z = 0.0F;
        ap->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        func_80008CC0(joint, 0x48U, 0U);

        joint->translate = *pos;

        joint->translate.y -= ap->attributes->objectcoll_bottom;

        omAddDObjAnimAll(joint, itGetPData(ap, D_NF_00013598, D_NF_00013624), 0.0F); // Linker thing
        func_800269C0(alSound_Voice_MBallPippiSpawn);

        item_gobj->renderer = func_ovl3_80183344;
    }
    return item_gobj;
}