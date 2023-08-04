#include <ft/fighter.h>
#include <gm/gmmatch.h>
#include <gr/ground.h>

extern ftSpawnInfo D_ovl2_80116DD0;
extern f32 ftCommon_Rebirth_OffsetX[GMMATCH_PLAYERS_MAX];

// 0x8013CF60
void ftCommon_RebirthDown_SetStatus(GObj *this_gobj)
{
    ftStruct *this_fp = ftGetStruct(this_gobj);
    ftSpawnInfo rebirth_vars = D_ovl2_80116DD0;
    GObj *other_gobj;
    ftStruct *other_fp;
    s32 halo_number;
    s32 sp3C;
    Vec3f halo_spawn_pos;

    rebirth_vars.lr_spawn = this_fp->lr;
    rebirth_vars.unk_rebirth_0x24 = 0;

    func_ovl2_800FC814(0x20, &sp3C);
    func_ovl2_800FC894(sp3C, &halo_spawn_pos);

    halo_number = 0;

loop: // This makes no sense
    other_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

    while (other_gobj != NULL)
    {
        if (other_gobj != this_gobj)
        {
            other_fp = ftGetStruct(other_gobj);

            if ((other_fp->status_info.status_id >= ftStatus_Common_RebirthDown) && (other_fp->status_info.status_id <= ftStatus_Common_RebirthWait))
            {
                if (halo_number == other_fp->status_vars.common.rebirth.halo_number)
                {
                    halo_number++;

                    goto loop;
                }
            }
            else goto next_gobj;
        }
    next_gobj:
        other_gobj = other_gobj->group_gobj_next;
    }
    rebirth_vars.pos.x = ftCommon_Rebirth_OffsetX[halo_number] + halo_spawn_pos.x;
    rebirth_vars.pos.y = gpGroundInfo->blastzone_top;
    rebirth_vars.pos.z = 0.0F;

    func_ovl2_800D79F0(this_gobj, &rebirth_vars);
    func_ovl2_8010F840(this_fp);
    ftMap_SetGround(this_fp);

    this_fp->coll_data.ground_line_id = -2;
    this_fp->coll_data.ground_flags = MPCOLL_MASK_NONSOLID;
    this_fp->coll_data.ground_angle.y = 1.0F;
    this_fp->coll_data.ground_angle.x = 0.0F;
    this_fp->coll_data.ground_angle.z = 0.0F;

    ftStatus_Update(this_gobj, ftStatus_Common_RebirthDown, 100.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(this_gobj);
    func_ovl2_800D9444(this_gobj);

    this_fp->status_vars.common.rebirth.halo_lower_wait = FTCOMMON_REBIRTH_HALO_LOWER_WAIT;
    this_fp->status_vars.common.rebirth.halo_despawn_wait = FTCOMMON_REBIRTH_HALO_DESPAWN_WAIT;
    this_fp->status_vars.common.rebirth.pos = DObjGetStruct(this_gobj)->translate;
    this_fp->status_vars.common.rebirth.halo_offset.x = ftCommon_Rebirth_OffsetX[halo_number] + halo_spawn_pos.x;
    this_fp->status_vars.common.rebirth.halo_offset.y = halo_spawn_pos.y;
    this_fp->status_vars.common.rebirth.halo_offset.z = 0.0F;

    this_fp->x191_flag_b3 = TRUE;
    this_fp->is_nullstatus = TRUE;
    this_fp->x18E_flag_b0 = TRUE;
    this_fp->x18E_flag_b1 = TRUE;
    this_fp->x191_flag_b4567 = 1;

    this_fp->status_vars.common.rebirth.halo_number = halo_number;

    this_fp->fighter_cam_zoom_range = 0.6F;

    if (func_ovl2_80104068(this_gobj, this_fp->attributes->unk_0xEC) != NULL)
    {
        this_fp->is_persist_effect = TRUE;
    }
    ftColor_CheckSetColAnimIndex(this_gobj, 0xB, 0);
    func_ovl2_800E7F7C(this_gobj, 1);
}

// 0x8013D1D4
void ftCommon_RebirthCommon_DecHaloTimers(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.rebirth.halo_despawn_wait != 0)
    {
        fp->status_vars.common.rebirth.halo_despawn_wait--;
    }
    if (fp->status_vars.common.rebirth.halo_lower_wait != 0)
    {
        fp->status_vars.common.rebirth.halo_lower_wait--;
    }
}

// 0x8013D200
void ftCommon_RebirthDown_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_RebirthCommon_DecHaloTimers(fighter_gobj);

    if (fp->status_vars.common.rebirth.halo_despawn_wait == (FTCOMMON_REBIRTH_HALO_DESPAWN_WAIT - FTCOMMON_REBIRTH_HALO_UNK_WAIT))
    {
        fp->x191_flag_b4567 = 0;
    }
    if (fp->status_vars.common.rebirth.halo_despawn_wait == (FTCOMMON_REBIRTH_HALO_DESPAWN_WAIT - FTCOMMON_REBIRTH_HALO_STAND_WAIT))
    {
        ftCommon_RebirthStand_SetStatus(fighter_gobj);
    }
}

// 0x8013D264
void ftCommon_RebirthCommon_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    DObjGetStruct(fighter_gobj)->translate.y = (((fp->status_vars.common.rebirth.pos.y - fp->status_vars.common.rebirth.halo_offset.y) / 8100.0F) *
                                               SQUARE(fp->status_vars.common.rebirth.halo_lower_wait)) + fp->status_vars.common.rebirth.halo_offset.y;
}

// 0x8013D2AC
void ftCommon_RebirthStand_ProcUpdate(GObj *fighter_gobj)
{
    ftCommon_RebirthCommon_DecHaloTimers(fighter_gobj);
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_RebirthWait_SetStatus);
}

// 0x8013D2DC
void ftCommon_RebirthStand_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_RebirthStand, 0.0F, 1.0F, (FTSTATUPDATE_PLAYERTAG_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftAnim_Update(fighter_gobj);

    fp->x191_flag_b3 = TRUE;
    fp->is_nullstatus = TRUE;
    fp->x18E_flag_b0 = TRUE;
    fp->x18E_flag_b1 = TRUE;

    fp->fighter_cam_zoom_range = 0.6F;
}

// 0x8013D358
void ftCommon_RebirthWait_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_RebirthCommon_DecHaloTimers(fighter_gobj);

    if (fp->status_vars.common.rebirth.halo_despawn_wait == 0)
    {
        ftCommon_ApplyInvincibleTimer(fp, FTCOMMON_REBIRTH_INVINCIBLE_FRAMES);
        ftCommon_Fall_SetStatus(fighter_gobj);
    }
}

// 0x8013D3A4
void ftCommon_RebirthWait_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCheckInterruptAll(fighter_gobj))
    {
        ftCommon_ApplyInvincibleTimer(fp, FTCOMMON_REBIRTH_INVINCIBLE_FRAMES);
    }
}

// 0x8013D518
void ftCommon_RebirthWait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_RebirthWait, 0.0F, 1.0F, (FTSTATUPDATE_PLAYERTAG_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));

    fp->is_nullstatus = TRUE;
    fp->x18E_flag_b0 = TRUE;
    fp->x18E_flag_b1 = TRUE;

    fp->fighter_cam_zoom_range = 0.6F;
}