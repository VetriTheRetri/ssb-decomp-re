#include <ft/fighter.h>
#include <gr/ground.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x80188490
f32 dFTCommonRebirthOffsetsX[/* */] = { 0.0F, -1000.0F, 1000.0F, -2000.0F };

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8013CF60
void ftCommonRebirthDownSetStatus(GObj *this_gobj)
{
    ftStruct *this_fp = ftGetStruct(this_gobj);
    ftCreateDesc rebirth_vars = dFTDefaultFighterDesc;
    GObj *other_gobj;
    ftStruct *other_fp;
    s32 halo_number;
    s32 halo_mpoint;
    Vec3f halo_spawn_pos;

    rebirth_vars.lr_spawn = this_fp->lr;
    rebirth_vars.damage = 0;

    mpCollision_GetMPointIDsKind(mpMPoint_Kind_Rebirth, &halo_mpoint);
    mpCollision_GetMPointPositionID(halo_mpoint, &halo_spawn_pos);

    halo_number = 0;

loop: // This makes no sense
    other_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

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
        other_gobj = other_gobj->link_next;
    }
    rebirth_vars.pos.x = dFTCommonRebirthOffsetsX[halo_number] + halo_spawn_pos.x;
    rebirth_vars.pos.y = gGroundInfo->blastzone_top;
    rebirth_vars.pos.z = 0.0F;

    ftManagerInitFighter(this_gobj, &rebirth_vars);
    ifCommonPlayerDamageStopBreakAnim(this_fp);
    ftMap_SetGround(this_fp);

    this_fp->coll_data.ground_line_id = -2;
    this_fp->coll_data.ground_flags = MPCOLL_VERTEX_CLL_PASS;
    this_fp->coll_data.ground_angle.y = 1.0F;
    this_fp->coll_data.ground_angle.x = 0.0F;
    this_fp->coll_data.ground_angle.z = 0.0F;

    ftMainSetFighterStatus(this_gobj, ftStatus_Common_RebirthDown, 100.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(this_gobj);
    ftPhysics_StopVelAll(this_gobj);

    this_fp->status_vars.common.rebirth.halo_lower_wait = FTCOMMON_REBIRTH_HALO_LOWER_WAIT;
    this_fp->status_vars.common.rebirth.halo_despawn_wait = FTCOMMON_REBIRTH_HALO_DESPAWN_WAIT;
    this_fp->status_vars.common.rebirth.pos = DObjGetStruct(this_gobj)->translate.vec.f;
    this_fp->status_vars.common.rebirth.halo_offset.x = dFTCommonRebirthOffsetsX[halo_number] + halo_spawn_pos.x;
    this_fp->status_vars.common.rebirth.halo_offset.y = halo_spawn_pos.y;
    this_fp->status_vars.common.rebirth.halo_offset.z = 0.0F;

    this_fp->is_ignore_training_menu = TRUE;
    this_fp->is_nullstatus = TRUE;
    this_fp->x18E_flag_b0 = TRUE;
    this_fp->x18E_flag_b1 = TRUE;
    this_fp->camera_mode = 1;

    this_fp->status_vars.common.rebirth.halo_number = halo_number;

    this_fp->cam_zoom_range = 0.6F;

    if (efManagerRebirthHaloMakeEffect(this_gobj, this_fp->attributes->halo_size) != NULL)
    {
        this_fp->is_attach_effect = TRUE;
    }
    ftColor_CheckSetColAnimIndex(this_gobj, 0xB, 0);
    ftCommon_SetPlayerTagWait(this_gobj, 1);
}

// 0x8013D1D4
void ftCommonRebirthCommonUpdateHaloWait(GObj *fighter_gobj)
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
void ftCommonRebirthDownProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonRebirthCommonUpdateHaloWait(fighter_gobj);

    if (fp->status_vars.common.rebirth.halo_despawn_wait == (FTCOMMON_REBIRTH_HALO_DESPAWN_WAIT - FTCOMMON_REBIRTH_HALO_UNK_WAIT))
    {
        fp->camera_mode = 0;
    }
    if (fp->status_vars.common.rebirth.halo_despawn_wait == (FTCOMMON_REBIRTH_HALO_DESPAWN_WAIT - FTCOMMON_REBIRTH_HALO_STAND_WAIT))
    {
        ftCommonRebirthStandSetStatus(fighter_gobj);
    }
}

// 0x8013D264
void ftCommonRebirthCommonProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    DObjGetStruct(fighter_gobj)->translate.vec.f.y = (((fp->status_vars.common.rebirth.pos.y - fp->status_vars.common.rebirth.halo_offset.y) / 8100.0F) *
                                               SQUARE(fp->status_vars.common.rebirth.halo_lower_wait)) + fp->status_vars.common.rebirth.halo_offset.y;
}

// 0x8013D2AC
void ftCommonRebirthStandProcUpdate(GObj *fighter_gobj)
{
    ftCommonRebirthCommonUpdateHaloWait(fighter_gobj);
    ftStatusSetOnAnimEnd(fighter_gobj, ftCommonRebirthWaitSetStatus);
}

// 0x8013D2DC
void ftCommonRebirthStandSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_RebirthStand, 0.0F, 1.0F, (FTSTATUPDATE_PLAYERTAG_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->is_ignore_training_menu = TRUE;
    fp->is_nullstatus = TRUE;
    fp->x18E_flag_b0 = TRUE;
    fp->x18E_flag_b1 = TRUE;

    fp->cam_zoom_range = 0.6F;
}

// 0x8013D358
void ftCommonRebirthWaitProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonRebirthCommonUpdateHaloWait(fighter_gobj);

    if (fp->status_vars.common.rebirth.halo_despawn_wait == 0)
    {
        ftCommon_ApplyInvincibleTimer(fp, FTCOMMON_REBIRTH_INVINCIBLE_FRAMES);
        ftCommonFallSetStatus(fighter_gobj);
    }
}

// 0x8013D3A4
void ftCommonRebirthWaitProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommonGroundCheckInterrupt(fighter_gobj))
    {
        ftCommon_ApplyInvincibleTimer(fp, FTCOMMON_REBIRTH_INVINCIBLE_FRAMES);
    }
}

// 0x8013D518
void ftCommonRebirthWaitSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_RebirthWait, 0.0F, 1.0F, (FTSTATUPDATE_PLAYERTAG_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));

    fp->is_nullstatus = TRUE;
    fp->x18E_flag_b0 = TRUE;
    fp->x18E_flag_b1 = TRUE;

    fp->cam_zoom_range = 0.6F;
}
