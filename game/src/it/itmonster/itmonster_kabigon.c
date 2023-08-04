#include <it/item.h>
#include <gr/ground.h>

#include <sys/develop.h>
#include <sys/hal_gu.h>
#include <sys/obj_renderer.h>
#include <sys/obj.h>

#include <PR/gu.h>
#include <PR/mbi.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>

bool32 func_ovl3_8017E070(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ap->item_vars.kabigon.rumble_wait == 0)
    {
        efParticle_Quake_MakeEffect(0);

        ap->item_vars.kabigon.rumble_wait = ITKABIGON_RUMBLE_WAIT;
    }
    ap->item_vars.kabigon.rumble_wait--;

    if (joint->translate.y < (gpGroundInfo->blastzone_bottom + ITKABIGON_MAP_OFF_Y))
    {
        return TRUE;
    }
    else return FALSE;
}

extern Gfx *gpDisplayListHead[4];

void func_ovl3_8017E100(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    gDPPipeSync(gpDisplayListHead[0]++);

    if (func_ovl3_80171C10(ap) != FALSE)
    {
        if ((ap->display_mode == dbObject_DisplayMode_Master) || (ap->is_hold))
        {
            gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            func_80014038(item_gobj);
        }
        else if (ap->display_mode == dbObject_DisplayMode_MapCollision)
        {
            gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            func_80014038(item_gobj);
            itRender_DisplayMapCollisions(item_gobj);
        }
        else if ((ap->item_hurt.hitstatus == gmHitCollision_HitStatus_None) && (ap->item_hit.update_state == gmHitCollision_UpdateState_Disable))
        {
            gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            func_80014038(item_gobj);
        }
        else
        {
            itRender_DisplayHitCollisions(item_gobj);
        }
    }

    gDPPipeSync(gpDisplayListHead[0]++);
}

void func_ovl3_8017E25C(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    ap->phys_info.vel_air.y = ITKABIGON_DROP_VEL_Y;

    joint->translate.x += ((ITKABIGON_DROP_OFF_X_MUL * lbRandom_GetFloat()) + ITKABIGON_DROP_OFF_X_ADD);

    itMain_RefreshHit(item_gobj);

    ap->item_vars.kabigon.rumble_wait = 0;

    func_800269C0(0x85U);

    if (ap->it_kind == It_Kind_Kabigon)
    {
        func_800269C0(0x137U);

        joint->scale.y = ITKABIGON_DROP_SIZE_KABIGON;
        joint->scale.x = ITKABIGON_DROP_SIZE_KABIGON;

        ap->item_hit.size *= ITKABIGON_DROP_SIZE_KABIGON;
    }
    else
    {
        joint->scale.y = ITKABIGON_DROP_SIZE_OTHER;
        joint->scale.x = ITKABIGON_DROP_SIZE_OTHER;

        ap->item_hit.size *= ITKABIGON_DROP_SIZE_OTHER;
    }
    item_gobj->renderer = func_ovl3_8017E100;

    om_g_move_obj_dl_head(item_gobj, 0x12, item_gobj->room_order);
}

extern itStatusDesc Article_Kabigon_Status[];

void func_ovl3_8017E350(GObj *item_gobj)
{
    func_ovl3_8017E25C(item_gobj);
    itMain_SetItemStatus(item_gobj, Article_Kabigon_Status, 1);
}

bool32 func_ovl3_8017E384(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if ((gpGroundInfo->blastzone_top - ITKABIGON_MAP_OFF_Y) <= joint->translate.y)
    {
        ap->it_multi--;

        ap->phys_info.vel_air.y = 0.0F;

        if (ap->it_multi == 0)
        {
            func_ovl3_8017E350(item_gobj);
        }
    }

    if (ap->item_vars.kabigon.dust_gfx_int == 0)
    {
        Vec3f pos = joint->translate;

        pos.x += (lbRandom_GetFloat() * ITKABIGON_JUMP_GFX_MUL_OFF) - ITKABIGON_JUMP_GFX_SUB_OFF;
        pos.y += (lbRandom_GetFloat() * ITKABIGON_JUMP_GFX_MUL_OFF) - ITKABIGON_JUMP_GFX_SUB_OFF;

        efParticle_DustExpandLarge_MakeEffect(&pos);

        ap->item_vars.kabigon.dust_gfx_int = ITKABIGON_GFX_SPAWN_INT;
    }
    ap->item_vars.kabigon.dust_gfx_int--;

    return FALSE;
}

void func_ovl3_8017E4A4(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    gDPPipeSync(gpDisplayListHead[0]++);

    if (func_ovl3_80171C10(ap) != FALSE)
    {
        if ((ap->display_mode == dbObject_DisplayMode_Master) || (ap->is_hold))
        {
            gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            func_80014038(item_gobj);
        }
        else if (ap->display_mode == dbObject_DisplayMode_MapCollision)
        {
            gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            func_80014038(item_gobj);
            itRender_DisplayMapCollisions(item_gobj);
        }
        else if ((ap->item_hurt.hitstatus == gmHitCollision_HitStatus_None) && (ap->item_hit.update_state == gmHitCollision_UpdateState_Disable))
        {
            gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            func_80014038(item_gobj);
        }
        else
        {
            itRender_DisplayHitCollisions(item_gobj);
        }
    }
    gDPPipeSync(gpDisplayListHead[0]++);
}

void func_ovl3_8017E600(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    func_800269C0(0x86U);

    ap->it_multi = ITKABIGON_DROP_WAIT;

    ap->item_vars.kabigon.dust_gfx_int = ITKABIGON_GFX_SPAWN_INT;

    ap->phys_info.vel_air.y = ITKABIGON_JUMP_VEL_Y;
}

void func_ovl3_8017E648(GObj *item_gobj)
{
    func_ovl3_8017E600(item_gobj);
    itMain_SetItemStatus(item_gobj, Article_Kabigon_Status, 0);
}

bool32 func_ovl3_8017E67C(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (ap->it_multi == 0)
    {
        func_ovl3_8017E648(item_gobj);
    }
    ap->it_multi--;

    return FALSE;
}

extern intptr_t D_NF_0000B158;
extern intptr_t D_NF_00013624;
extern itCreateDesc Article_Kabigon_Data;

GObj* jtgt_ovl3_8017E6C0(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &Article_Kabigon_Data, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        itStruct *ap = itGetStruct(item_gobj);

        ap->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ap->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;

        ap->phys_info.vel_air.z = 0.0F;
        ap->phys_info.vel_air.x = 0.0F;
        ap->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        func_8000BD1C(joint, itGetPData(ap, D_NF_0000B158, D_NF_00013624), 0.0F); // Linker thing

        if (ap->it_kind == It_Kind_Kabigon)
        {
            func_800269C0(0x138U);
        }
        item_gobj->renderer = func_ovl3_8017E4A4;
    }
    return item_gobj;
}