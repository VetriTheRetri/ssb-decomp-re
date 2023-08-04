#include <it/item.h>
#include <wp/weapon.h>
#include <gr/ground.h>

#include <sys/develop.h>
#include <sys/hal_gu.h>
#include <sys/obj_renderer.h>
#include <sys/obj.h>

#include <PR/gu.h>
#include <PR/mbi.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>

void func_ovl3_8017FDC0(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ap->item_vars.spear.spear_spawn_wait <= 0)
    {
        Vec3f pos = joint->translate;
        s32 unused;

        pos.y = ap->item_vars.spear.spear_spawn_pos_y;

        pos.y += (ITSPEAR_SPAWN_OFF_Y_MUL * lbRandom_GetFloat()) + ITSPEAR_SPAWN_OFF_Y_ADD;

        func_ovl3_80180608(item_gobj, &pos, ap->it_kind);

        ap->item_vars.spear.spear_spawn_count--;
        ap->item_vars.spear.spear_spawn_wait = lbRandom_GetIntRange(ITSPEAR_SPAWN_WAIT_RANDOM) + ITSPEAR_SPAWN_WAIT_CONST;
    }
}

bool32 func_ovl3_8017FE70(GObj *item_gobj)
{
    DObj *joint = DObjGetStruct(item_gobj);

    if (item_gobj->anim_frame == ITSPEAR_SWARM_CALL_WAIT)
    {
        joint->next->unk_dobj_0x70 = 0;

        func_ovl3_80180160(item_gobj);
    }
    return FALSE;
}

extern intptr_t D_NF_0000DF38;
extern intptr_t D_NF_0000DFFC;
extern intptr_t D_NF_0000E12C;

void func_ovl3_8017FEB8(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    ap->it_multi = 0;

    ap->phys_info.vel_air.y = 0;

    if (ap->it_kind == It_Kind_Spear)
    {
        void *s = itGetPData(ap, D_NF_0000DF38, D_NF_0000DFFC); // Linker thing
        s32 unused;

        func_8000BD1C(joint->next, s, 0.0F);

        s = itGetPData(ap, D_NF_0000DF38, D_NF_0000E12C); // Linker thing

        func_8000BD54(joint->next->mobj, s, 0.0F);
        func_8000DF34(item_gobj);
        func_800269C0(0x140U);
    }
}

extern itStatusDesc Article_Spear_Status[];

void func_ovl3_8017FF74(GObj *item_gobj)
{
    func_ovl3_8017FEB8(item_gobj);
    itMain_SetItemStatus(item_gobj, Article_Spear_Status, 0);
}

bool32 func_ovl3_8017FFA8(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ap, ITSPEAR_GRAVITY, ITSPEAR_T_VEL);

    ap->phys_info.vel_air.x += ITSPEAR_SWARM_CALL_VEL_X * ap->lr;

    if (ap->lr == RIGHT)
    {
        if ((gpGroundInfo->blastzone_right - ITSPEAR_SWARM_CALL_OFF_X) <= joint->translate.x)
        {
            ap->phys_info.vel_air.x = 0.0F;
            ap->phys_info.vel_air.y = 0.0F;

            if (ap->item_vars.spear.spear_spawn_count != 0)
            {
                func_ovl3_8017FDC0(item_gobj);
            }
            else return TRUE;

            ap->item_vars.spear.spear_spawn_wait--;
        }
    }
    if (ap->lr == LEFT)
    {
        if (joint->translate.x <= (gpGroundInfo->blastzone_left + ITSPEAR_SWARM_CALL_OFF_X))
        {
            ap->phys_info.vel_air.x = 0.0F;
            ap->phys_info.vel_air.y = 0.0F;

            if (ap->item_vars.spear.spear_spawn_count != 0)
            {
                func_ovl3_8017FDC0(item_gobj);
            }
            else return TRUE;

            ap->item_vars.spear.spear_spawn_wait--;
        }
    }
    return FALSE;
}

void func_ovl3_8018010C(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    ap->phys_info.vel_air.y = ITSPEAR_SWARM_CALL_VEL_Y;

    ap->item_vars.spear.spear_spawn_pos_y = DObjGetStruct(item_gobj)->translate.y;
    ap->item_vars.spear.spear_spawn_wait = 0;
    ap->item_vars.spear.spear_spawn_count = ITSPEAR_SPAWN_COUNT;

    if (ap->it_kind == It_Kind_Spear)
    {
        func_800269C0(0x141U);
    }
}

bool32 jtgt_ovl3_80180194(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (ap->it_multi == 0)
    {
        func_ovl3_8017FF74(item_gobj);
    }
    ap->it_multi--;

    return FALSE;
}

bool32 jtgt_ovl3_801801D8(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (func_ovl3_801737B8(item_gobj, MPCOLL_MASK_GROUND) != FALSE)
    {
        ap->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

extern intptr_t D_NF_00013624;
extern itCreateDesc Article_Spear_Data;

GObj *jtgt_ovl3_80180218(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &Article_Spear_Data, pos, vel, flags);
    DObj *joint;
    itStruct *ap;

    if (item_gobj != NULL)
    {
        ap = itGetStruct(item_gobj);

        itMain_ClearOwnerStats(item_gobj);

        joint = DObjGetStruct(item_gobj);

        func_80008CC0(joint->next, 0x48U, 0U);

        joint->translate = *pos;

        if (lbRandom_GetIntRange(2) == 0)
        {
            joint->next->rotate.y = PI32;

            ap->lr = LEFT;

        }
        else ap->lr = RIGHT;

        ap->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ap->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;

        ap->phys_info.vel_air.z = 0.0F;
        ap->phys_info.vel_air.x = 0.0F;
        ap->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        joint->translate.y -= ap->attributes->objectcoll_bottom;

        func_8000BD1C(joint->next, itGetPData(ap, D_NF_0000DF38, D_NF_00013624), 0.0F);
    }
    return item_gobj;
}

bool32 func_ovl3_80180354(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);
    DObj *joint = DObjGetStruct(weapon_gobj);

    if ((ip->lr == RIGHT) && ((gpGroundInfo->blastzone_right - ITSPEAR_SWARM_CALL_OFF_X) <= joint->translate.x))
    {
        return TRUE;
    }
    else if ((ip->lr == LEFT) && (joint->translate.x <= (gpGroundInfo->blastzone_left + ITSPEAR_SWARM_CALL_OFF_X)))
    {
        return TRUE;
    }
    else return FALSE;
}

extern Gfx *gpDisplayListHead[4];

void func_ovl3_80180400(GObj *item_gobj)
{
    gDPPipeSync(gpDisplayListHead[0]++);

    gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    func_80014038(item_gobj);

    gDPPipeSync(gpDisplayListHead[0]++);
}

void func_ovl3_80180480(GObj *item_gobj)
{
    func_ovl3_80167520(item_gobj, func_ovl3_80180400);
}

extern wpCreateDesc Item_Spear_Swarm_Data;
extern wpCreateDesc Item_Pippi_Swarm_Data;

GObj *func_ovl3_801804A4(GObj *item_gobj, Vec3f *pos, s32 it_kind)
{
    itStruct *ap = itGetStruct(item_gobj);
    GObj *weapon_gobj = wpManager_MakeWeapon(item_gobj, ((it_kind == It_Kind_Spear) ? &Item_Spear_Swarm_Data : &Item_Pippi_Swarm_Data), pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *joint;
    s32 unused;
    wpStruct *ip;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    ip = wpGetStruct(weapon_gobj);

    ip->lr = -ap->lr;

    ip->phys_info.vel_air.x = ip->lr * ITSPEAR_SWARM_FLY_VEL_X;

    joint = DObjGetStruct(weapon_gobj);

    if (it_kind == It_Kind_Spear)
    {
        func_80008CC0(joint->next->next, 0x48U, 0U);

        if (ip->lr == LEFT)
        {
            joint->next->next->rotate.y = PI32;
        }
    }
    else
    {
        weapon_gobj->renderer = func_ovl3_80180480;

        func_80008CC0(joint->next, 0x48U, 0U);

        if (ip->lr == RIGHT)
        {
            joint->next->rotate.y = PI32;
        }
    }
    joint->translate = *pos;

    ip->is_hitlag_victim = TRUE;

    return weapon_gobj;
}

void func_ovl3_80180608(GObj *item_gobj, Vec3f *pos, s32 it_kind)
{
    func_ovl3_801804A4(item_gobj, pos, it_kind);
}