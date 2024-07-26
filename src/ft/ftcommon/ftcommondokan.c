#include <ft/fighter.h>
#include <gr/ground.h>

extern f32 func_8000CA28_D628(f32, f32, f32, f32, f32, f32);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80141FF0
void ftCommonDokanStartUpdateModelPitch(ftStruct *fp)
{
    if (fp->status_vars.common.dokan.turn_stop_wait != 0)
    {
        fp->status_vars.common.dokan.turn_stop_wait--;

        fp->joint[ftParts_Joint_TopN]->rotate.vec.f.y += (-FTCOMMON_DOKAN_TURN_STEP * fp->lr);

        func_ovl2_800EB528(fp->joint[ftParts_Joint_TopN]);
    }
}

// 0x8014204C
void ftCommonDokanStartProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonDokanStartUpdateModelPitch(fp);
    ftStatusSetOnAnimEnd(fighter_gobj, ftCommonDokanWaitSetStatus);
}

// 0x80142080
void ftCommonDokanStartProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f dokan_pos;
    Vec3f *translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;
    s32 ground_line_id;

    mpCollisionGetMapObjIDsKind
    (
        (fp->status_vars.common.dokan.material == nMPMaterialDokanLeft) ? 
        nMPMapObjKindDokanL :
        nMPMapObjKindDokanR,
        &ground_line_id
    );
    mpCollisionGetMapObjPositionID(ground_line_id, &dokan_pos);

    if (translate->x > dokan_pos.x)
    {
        translate->x -= FTCOMMON_DOKAN_POS_ADJUST;

        if (translate->x <= dokan_pos.x)
        {
            translate->x = dokan_pos.x;
        }
    }
    else if (translate->x < dokan_pos.x)
    {
        translate->x += FTCOMMON_DOKAN_POS_ADJUST;

        if (translate->x >= dokan_pos.x)
        {
            translate->x = dokan_pos.x;
        }
    }
}

// 0x80142164
void ftCommonDokanStartSetStatus(GObj *fighter_gobj, s32 material)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 new_point_id;

    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusDokanStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->tap_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;

    ftPhysics_StopVelAll(fighter_gobj);

    fp->is_ignore_jostle = TRUE;

    fp->status_vars.common.dokan.material = material;

    mpCollisionGetMapObjIDsKind
    (
        (fp->status_vars.common.dokan.material == nMPMaterialDokanLeft) ? 
        nMPMapObjKindDokanL : 
        nMPMapObjKindDokanR,
        &new_point_id
    );
    mpCollisionGetMapObjPositionID(new_point_id, &fp->status_vars.common.dokan.pos_current);

    func_800269C0_275C0(alSound_SFX_MarioDokan);
    ftCommon_SetPlayerTagWait(fighter_gobj, 1);

    if
    (
        (fp->ft_kind == nFTKindMario) || (fp->ft_kind == nFTKindMetalMario) || (fp->ft_kind == nFTKindPolyMario) ||
        (fp->ft_kind == nFTKindLuigi) || (fp->ft_kind == nFTKindPolyLuigi)
    )
    {
        fp->status_vars.common.dokan.turn_stop_wait = 0;
    }
    else fp->status_vars.common.dokan.turn_stop_wait = FTCOMMON_DOKAN_TURN_STOP_WAIT_DEFAULT;

    ftCommonDokanStartUpdateModelPitch(fp);
    grInishiePakkunSetWaitFighter();
}

// 0x80142258
sb32 ftCommonDokanStartCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    s32 ground_line_id;
    f32 dist_x;

    if ((fp->input.pl.stick_range.y <= FTCOMMON_DOKAN_STICK_RANGE_MIN) && (fp->tap_stick_y < FTCOMMON_DOKAN_BUFFER_FRAMES_MAX))
    {
        if ((fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK) == nMPMaterialDokanLeft)
        {
            mpCollisionGetMapObjIDsKind(nMPMapObjKindDokanL, &ground_line_id);
            mpCollisionGetMapObjPositionID(ground_line_id, &pos);

            if (pos.x < DObjGetStruct(fighter_gobj)->translate.vec.f.x)
            {
                dist_x = -(pos.x - DObjGetStruct(fighter_gobj)->translate.vec.f.x);
            }
            else dist_x = pos.x - DObjGetStruct(fighter_gobj)->translate.vec.f.x;

            if (dist_x <= FTCOMMON_DOKAN_DETECT_WIDTH)
            {
                ftCommonDokanStartSetStatus(fighter_gobj, nMPMaterialDokanLeft);

                return TRUE;
            }
        }
        else if ((fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK) == nMPMaterialDokanRight)
        {
            mpCollisionGetMapObjIDsKind(nMPMapObjKindDokanR, &ground_line_id);
            mpCollisionGetMapObjPositionID(ground_line_id, &pos);

            if (pos.x < DObjGetStruct(fighter_gobj)->translate.vec.f.x)
            {
                dist_x = -(pos.x - DObjGetStruct(fighter_gobj)->translate.vec.f.x);
            }
            else dist_x = pos.x - DObjGetStruct(fighter_gobj)->translate.vec.f.x;

            if (dist_x <= FTCOMMON_DOKAN_DETECT_WIDTH)
            {
                ftCommonDokanStartSetStatus(fighter_gobj, nMPMaterialDokanRight);

                return TRUE;
            }
        }
    }
    return FALSE;
}

// 0x801423B4
void ftCommonDokanWaitProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.dokan.pos_adjust_wait++;

    if (fp->status_vars.common.dokan.pos_adjust_wait == FTCOMMON_DOKAN_POS_ADJUST_WAIT)
    {
        if (fp->status_vars.common.dokan.mapobj_kind == nMPMapObjKindDokanWall)
        {
            ftCommonDokanWalkSetStatus(fighter_gobj);
        }
        else ftCommonDokanEndSetStatus(fighter_gobj);
    }
}

// 0x80142424
void ftCommonDokanWaitProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    DObjGetStruct(fighter_gobj)->translate.vec.f.x = func_8000CA28_D628(0.033333335F, fp->status_vars.common.dokan.pos_adjust_wait, fp->status_vars.common.dokan.pos_current.x, fp->status_vars.common.dokan.pos_target.x, 0.0F, 0.0F);
    DObjGetStruct(fighter_gobj)->translate.vec.f.y = func_8000CA28_D628(0.033333335F, fp->status_vars.common.dokan.pos_adjust_wait, fp->status_vars.common.dokan.pos_current.y, fp->status_vars.common.dokan.pos_target.y, 0.0F, 0.0F);
}

// 0x801424BC
void ftCommonDokanWaitSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 pos_target_x;
    s32 line_id;

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusDokanWait, 0.0F, 1.0F, FTSTATUPDATE_HITSTATUS_PRESERVE);

    fp->is_invisible = TRUE;
    fp->is_playertag_hide = TRUE;
    fp->is_playing_gfx = TRUE;

    fp->status_vars.common.dokan.pos_adjust_wait = 0;

    fp->is_ignore_training_menu = TRUE;

    if (fp->status_vars.common.dokan.material == nMPMaterialDokanLeft)
    {
        fp->status_vars.common.dokan.mapobj_kind = nMPMapObjKindDokanR;
    }
    else fp->status_vars.common.dokan.mapobj_kind = nMPMapObjKindDokanL;

    mpCollisionGetMapObjIDsKind(fp->status_vars.common.dokan.mapobj_kind, &line_id);

    mpCollisionGetMapObjPositionID(line_id, &fp->status_vars.common.dokan.pos_target);

    if (mtTrigGetRandomFloat() <= 0.25F)
    {
        fp->status_vars.common.dokan.mapobj_kind = nMPMapObjKindDokanWall;

        mpCollisionGetMapObjIDsKind(nMPMapObjKindDokanWall, &line_id);
        mpCollisionGetMapObjPositionID(line_id, &fp->status_vars.common.dokan.pos_target);

        if (func_ovl2_800F9C30(&fp->status_vars.common.dokan.pos_target, NULL, &pos_target_x, NULL, NULL) != FALSE)
        {
            fp->status_vars.common.dokan.pos_target.x += pos_target_x + fp->coll_data.object_coll.width;
        }
    }
}

// 0x801425E4
void ftCommonDokanEndUpdateModelPitch(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame >= FTCOMMON_DOKAN_EXIT_WAIT)
    {
        if (fp->status_vars.common.dokan.turn_stop_wait != 0)
        {
            fp->status_vars.common.dokan.turn_stop_wait--;

            fp->joint[ftParts_Joint_TopN]->rotate.vec.f.y += (FTCOMMON_DOKAN_TURN_STEP * fp->lr);

            func_ovl2_800EB528(fp->joint[ftParts_Joint_TopN]);
        }
    }
}

// 0x80142660
void ftCommonDokanEndUpdatePlayerTag(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.dokan.playertag_wait != 0)
    {
        fp->status_vars.common.dokan.playertag_wait--;

        if (fp->status_vars.common.dokan.playertag_wait == 0)
        {
            ftCommon_SetPlayerTagWait(fighter_gobj, 1);
        }
    }
}

// 0x80142698
void ftCommonDokanEndProcUpdate(GObj *fighter_gobj)
{
    ftCommonDokanEndUpdatePlayerTag(fighter_gobj);
    ftCommonDokanEndUpdateModelPitch(fighter_gobj);
    ftStatusSetOnAnimEnd(fighter_gobj, ftMap_SetStatusWaitOrFall);
}

// 0x801426D0
void ftCommonDokanEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusDokanEnd, 0.0F, 1.0F, FTSTATUPDATE_HITSTATUS_PRESERVE);

    DObjGetStruct(fighter_gobj)->translate.vec.f = fp->status_vars.common.dokan.pos_target;

    func_ovl2_800F9348(&DObjGetStruct(fighter_gobj)->translate.vec.f, &fp->coll_data.ground_line_id, &fp->coll_data.ground_dist, &fp->coll_data.ground_flags, &fp->coll_data.ground_angle);

    fp->is_ignore_jostle = TRUE;
    fp->status_vars.common.dokan.playertag_wait = FTCOMMON_DOKAN_PLAYERTAG_WAIT;

    if ((fp->ft_kind != nFTKindMario) && (fp->ft_kind != nFTKindMetalMario) && (fp->ft_kind != nFTKindPolyMario) && (fp->ft_kind != nFTKindLuigi) && (fp->ft_kind != nFTKindPolyLuigi))
    {
        fp->status_vars.common.dokan.turn_stop_wait = FTCOMMON_DOKAN_TURN_STOP_WAIT_DEFAULT;
        fp->joint[ftParts_Joint_TopN]->rotate.vec.f.y = 0.0F;

        func_ovl2_800EB528(fp->joint[ftParts_Joint_TopN]);
    }
    else fp->status_vars.common.dokan.turn_stop_wait = 0;

    func_800269C0_275C0(alSound_SFX_MarioDokan);
}

// 0x801427CC
void ftCommonDokanWalkSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);

    fp->lr = LR_Right;

    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusDokanWalk, 0.0F, 1.0F, FTSTATUPDATE_HITSTATUS_PRESERVE);

    DObjGetStruct(fighter_gobj)->translate.vec.f = fp->status_vars.common.dokan.pos_target;

    fp->status_vars.common.dokan.playertag_wait = FTCOMMON_DOKAN_PLAYERTAG_WAIT;

    func_800269C0_275C0(alSound_SFX_MarioDokan);
}
