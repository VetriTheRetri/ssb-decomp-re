#include <ft/fighter.h>
#include <it/item.h>
#include <gm/gmmatch.h>
#include <ft/chara/ftdonkey/ftdonkey.h>
#include <ft/chara/ftsamus/ftsamus.h>
#include <ft/chara/ftkirby/ftkirby.h>
#include <ft/chara/ftness/ftness.h>

extern s32 gMusicIndexCurrent; // Static (.bss)
extern s32 gMusicIndexDefault; // Static (.bss)

// 0x800E7AD0 - Get duration of special music in seconds
s32 ftSpecialItem_BGMGetDuration(s32 bgm_id)
{
    switch (bgm_id)
    {
    case ITHAMMER_BGM_ID:
        return ITHAMMER_BGM_DURATION;

    case ITSTAR_BGM_ID:
        return ITSTAR_BGM_DURATION;

    default:
        return 0;
    }
}

// 0x800E7AFC
void ftSpecialItem_BGMSetPlay(s32 bgm_id)
{
    if (ftSpecialItem_BGMGetDuration(bgm_id) >= ftSpecialItem_BGMGetDuration(gMusicIndexCurrent))
    {
        func_80020AB4(0, bgm_id);

        gMusicIndexCurrent = bgm_id;
    }
}

// 0x800E7B54
void ftSpecialItem_BGMCheckFighters(void)
{
    s32 bgm_play = gMusicIndexDefault;
    s32 duration = ftSpecialItem_BGMGetDuration(bgm_play);
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);
        s32 bgm_id = gMusicIndexDefault;
        s32 duration_new;

        if ((fp->item_hold != NULL) && (itGetStruct(fp->item_hold)->it_kind == It_Kind_Hammer))
        {
            bgm_id = ITHAMMER_BGM_ID;
        }
        if (fp->star_invincible_timer > ITSTAR_WARN_BEGIN_FRAME)
        {
            bgm_id = ITSTAR_BGM_ID;
        }
        duration_new = ftSpecialItem_BGMGetDuration(bgm_id);

        if (duration < duration_new)
        {
            duration = duration_new;
            bgm_play = bgm_id;
        }
        fighter_gobj = fighter_gobj->group_gobj_next;
    }
    if (bgm_play != gMusicIndexCurrent)
    {
        func_80020AB4(0, bgm_play);
        gMusicIndexCurrent = bgm_play;
    }
}

// 0x800E7C4C
void ftCommon_ClearPlayerMatchStats(s32 player_id, GObj *fighter_gobj)
{
    s32 i;

    gpBattleState->player_block[player_id].stock_count = 0;
    gpBattleState->player_block[player_id].falls = gpBattleState->player_block[player_id].score = 0;

    for (i = 0; i < GMMATCH_PLAYERS_MAX; i++)
    {
        gpBattleState->player_block[player_id].total_ko_player[i] = 0;
        gpBattleState->player_block[player_id].total_damage_player[i] = 0;
    }
    gpBattleState->player_block[player_id].unk_pblock_0x28 = gpBattleState->player_block[player_id].unk_pblock_0x2C = gpBattleState->player_block[player_id].total_self_destruct = 0;
    gpBattleState->player_block[player_id].total_damage_dealt = gpBattleState->player_block[player_id].total_damage_all = 0;
    gpBattleState->player_block[player_id].combo_damage_foe = gpBattleState->player_block[player_id].combo_count_foe = 0;

    gpBattleState->player_block[player_id].fighter_gobj = fighter_gobj;

    gpBattleState->player_block[player_id].stale_index = 0;

    for (i = 0; i < ARRAY_COUNT(gpBattleState->player_block[i].stale_flags); i++)
    {
        gpBattleState->player_block[player_id].stale_flags[i][0] = 0;
        gpBattleState->player_block[player_id].stale_flags[i][1] = 0;
    }
}

// 0x800E7ED4 - Get fighter GObj with player number
GObj* ftCommon_GetPlayerNumGObj(s32 player_number) 
{
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (player_number == fp->player_number)
        {
            return fighter_gobj;
        }
        else fighter_gobj = fighter_gobj->group_gobj_next;
    }
    return NULL;
}

// 0x800E7F14
void ftCommon_ResetControllerInputs(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->input.pl.button_hold = fp->input.pl.button_tap = fp->input.cp.button_inputs = 0;

    fp->input.pl.stick_range.x = fp->input.pl.stick_range.y = fp->input.pl.stick_prev.x = fp->input.pl.stick_prev.y = fp->input.cp.stick_range.x = fp->input.cp.stick_range.y = 0;

    fp->tap_stick_x = fp->tap_stick_y = fp->hold_stick_x = fp->hold_stick_y = U8_MAX - 1;

    fp->is_disable_control = TRUE;
}

void func_ovl2_800E7F68(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_disable_control = FALSE;
}

void func_ovl2_800E7F7C(GObj *fighter_gobj, s32 playertag_wait)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->playertag_wait = playertag_wait;
}

u8 ftCommon_ShuffleFrameIndexMax[2] = { 4, 3 };

// 0x800E7F88
void ftCommon_SetShuffleInfo(ftStruct *fp, bool32 is_electric, s32 damage, s32 status_id, f32 hitlag_mul)
{
    fp->shuffle_timer = gmCommon_DamageCalcHitLag(damage, status_id, hitlag_mul) * FTCOMMON_DAMAGE_SHUFFLE_MUL;
    fp->shuffle_frame_index = 0;
    fp->is_shuffle_electric = is_electric;
    fp->shuffle_index_max = ftCommon_ShuffleFrameIndexMax[is_electric];
}

// 0x800E8000
f32 ftCommon_GetStickAngleRadians(ftStruct *fp)
{
    return atan2f(fp->input.pl.stick_range.y, ABS(fp->input.pl.stick_range.x));
}

// 0x800E8044
void ftCommon_StickInputSetLR(ftStruct *fp)
{
    fp->lr = (fp->input.pl.stick_range.x >= 0) ? RIGHT : LEFT;
}

// 0x800E806C
void ftMain_MakeRumble(ftStruct *fp, s32 rumble_id, s32 duration)
{
    if (fp->status_info.pl_kind == Pl_Kind_Human)
    {
        func_ovl2_80115530(fp->player, rumble_id, duration);
    }
}

// 0x800E8098
void ftCommon_SetCaptureIgnoreMask(ftStruct *fp, u8 capture_ignore_mask)
{
    fp->capture_ignore_mask = capture_ignore_mask;
}

// 0x800E80A4
void ftCommon_SetCatchVars(ftStruct *fp, u8 catch_mask, void (*proc_catch)(GObj*), void (*proc_capture)(GObj*, GObj*))
{
    fp->is_catchstatus = TRUE;

    fp->catch_mask = catch_mask;
    fp->proc_catch = proc_catch;
    fp->proc_capture = proc_capture;
}

// 0x800E80C4 - Fetch data of throwing fighter: character ID, port ID, team, player number and GObj pointer
void ftCommon_ThrownUpdateEnemyInfo(ftStruct *this_fp, GObj *throw_gobj)
{
    ftStruct *throw_fp = ftGetStruct(throw_gobj); // Fighter throwing this player

    this_fp->throw_gobj = throw_gobj;
    this_fp->throw_ft_kind = throw_fp->ft_kind;
    this_fp->throw_player = throw_fp->player;
    this_fp->throw_player_number = throw_fp->player_number;
    this_fp->throw_team = throw_fp->team;
}

// 0x800E80F0
void ftCommon_PlayVoiceStoreInfo(ftStruct *fp, u16 voice_id)
{
    fp->p_voice = func_800269C0(voice_id);

    fp->voice_id = (fp->p_voice != NULL) ? fp->p_voice->sfx_id : 0;
}

// 0x800E8138
void ftCommon_StopVoice(ftStruct *fp)
{
    if (fp->p_voice != NULL)
    {
        if ((fp->p_voice->sfx_id != 0) && (fp->p_voice->sfx_id == fp->voice_id))
        {
            func_80026738(fp->p_voice);
        }
    }
    fp->p_voice = NULL;
    fp->voice_id = 0;
}

// 0x800E8190
void ftCommon_PlayLoopSFXStoreInfo(ftStruct *fp, u16 sfx_id)
{
    if (fp->p_loop_sfx == NULL)
    {
        fp->p_loop_sfx = func_800269C0(sfx_id);

        fp->loop_sfx_id = (fp->p_loop_sfx != NULL) ? fp->p_loop_sfx->sfx_id : 0;
    }
}

// 0x800E81E4
void ftCommon_StopLoopSFX(ftStruct *fp)
{
    if (fp->p_loop_sfx != NULL)
    {
        if ((fp->p_loop_sfx->sfx_id != 0) && (fp->p_loop_sfx->sfx_id == fp->loop_sfx_id))
        {
            func_80026738(fp->p_loop_sfx);
        }
    }
    fp->p_loop_sfx = NULL;
    fp->loop_sfx_id = 0;
}

// 0x800E823C
void ftCommon_ProcDamageStopVoice(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_StopVoice(fp);

    if (fp->proc_damage != NULL)
    {
        fp->proc_damage(fighter_gobj);
    }
}

// Update render priority? Runs when a fighter gets Screen KO'd
void func_ovl2_800E827C(GObj *fighter_gobj, u8 arg1)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    om_g_move_obj_dl(fighter_gobj, arg1, 0x80000000);

    fp->unk_0x16 = arg1;
}

void func_ovl2_800E82B8(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj **p_joint = &fp->joint[ftParts_TopN_Joint];
    DObj *joint;
    MObj *mobj;
    UnkDObjData *temp_v0;
    Vec3f *p_0x324;
    Vec3f *p_0x324_2;
    f32 temp_f20;
    s32 i;

    if (fp->status_info.script_id != -2)
    {
        if (fp->x18F_flag_b5)
        {
            p_0x324 = fp->attributes->unk_0x324;

            for (i = 0; i < ARRAY_COUNT(fp->joint); i++, p_joint++, p_0x324++)
            {
                joint = *p_joint;

                if (joint != NULL)
                {
                    if (fp->anim_flags.flags.x19B_flag_b4)
                    {
                        func_8000BFE8(joint);
                    }
                    else
                    {
                        func_ovl2_800EC238(joint);
                    }
                    func_ovl0_800C9488(joint, p_0x324);

                    mobj = joint->mobj;

                    while (mobj != NULL)
                    {
                        func_8000CF6C(mobj);
                        func_8000DA40(mobj);

                        mobj = mobj->mobj_next;
                    }
                }
            }
        }
        else for (i = 0; i < ARRAY_COUNT(fp->joint); i++, p_joint++)
        {
            joint = *p_joint;

            if (joint != NULL)
            {
                if (fp->anim_flags.flags.x19B_flag_b4)
                {
                    func_8000BFE8(joint);
                }
                else
                {
                    func_ovl2_800EC238(joint);
                }
                func_8000CCBC(joint);

                mobj = joint->mobj;

                while (mobj != NULL)
                {
                    func_8000CF6C(mobj);
                    func_8000DA40(mobj);

                    mobj = mobj->mobj_next;
                }
            }
        }
    }
    else if (fp->x18F_flag_b5)
    {
        p_0x324_2 = fp->attributes->unk_0x324;

        for (i = 0; i < ARRAY_COUNT(fp->joint); i++, p_joint++, p_0x324_2++)
        {
            joint = *p_joint;

            if (joint != NULL)
            {
                temp_v0 = joint->unk_0x84;

                if ((temp_v0 != NULL) && (temp_v0->unk_dobjdata_0xE != 0))
                {
                    temp_f20 = joint->dobj_f0;

                    joint->dobj_f0 = -1.1342745e38F;

                    func_ovl0_800C9488(joint, p_0x324_2);

                    joint->dobj_f0 = temp_f20;
                }
            }
        }
    }
    else for (i = 0; i < ARRAY_COUNT(fp->joint); i++, p_joint++)
    {
        joint = *p_joint;

        if (joint != NULL)
        {
            temp_v0 = joint->unk_0x84;

            if ((temp_v0 != NULL) && (temp_v0->unk_dobjdata_0xE != 0))
            {
                temp_f20 = joint->dobj_f0;

                joint->dobj_f0 = -1.1342745e38F;

                func_8000CCBC(joint);

                joint->dobj_f0 = temp_f20;
            }
        }
    }
}

// 0x800E8518
void ftCommon_ClearHitAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
    {
        ftHitbox *ft_hit = &fp->fighter_hit[i];

        ft_hit->update_state = gmHitCollision_UpdateState_Disable;
    }
    fp->is_hitbox_active = FALSE;
}

// 0x800E853C
void ftCollision_ClearHitRecordIndex(ftStruct *fp, s32 hit_id)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hit[hit_id].hit_targets); i++)
    {
        gmHitCollisionRecord *targets = &fp->fighter_hit[hit_id].hit_targets[i];

        targets->victim_gobj = NULL;

        targets->victim_flags.is_interact_hurt = targets->victim_flags.is_interact_shield = FALSE;

        targets->victim_flags.timer_rehit = 0;

        targets->victim_flags.interact_mask = GMHITCOLLISION_MASK_ALL;
    }
}

// 0x800E8668
void ftCollision_RefreshHitIndex(GObj *fighter_gobj, s32 hit_id)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->fighter_hit[hit_id].update_state = gmHitCollision_UpdateState_New;

    fp->is_hitbox_active = TRUE;

    ftCollision_ClearHitRecordIndex(fp, hit_id);
}

// 0x800E86B4
void ftCommon_CollDataSetVelPush(GObj *fighter_gobj, Vec3f *vel_push)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->coll_data.vel_push = *vel_push;
}

// 0x800E86D4
s32 ftCommon_GetLightHoldJointIndex(ftStruct *fp, s32 joint_index)
{
    if (joint_index == -2)
    {
        joint_index = fp->attributes->joint_itemhold_light;
    }
    return joint_index;
}

// 0x800E86F0
void ftLink_SetModelPartHideShield(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->ft_kind == Ft_Kind_Link) || (fp->ft_kind == Ft_Kind_PolyLink))
    {
        ftCommon_SetModelPartRenderStateIndex(fighter_gobj, 0x15, 0);
        ftCommon_SetModelPartRenderStateIndex(fighter_gobj, 0x13, -1);
    }
}

// 0x800E8744
void ftCommon_GetHammerSetBGM(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->ft_kind == Ft_Kind_Link) || (fp->ft_kind == Ft_Kind_PolyLink))
    {
        ftCommon_SetModelPartRenderStateIndex(fighter_gobj, 0x15, -1);
        ftCommon_SetModelPartRenderStateIndex(fighter_gobj, 0x13, 0);
    }
    ftSpecialItem_BGMCheckFighters();
}

// 0x800E87A0
void ftCommon_HitStatusSetColAnim(GObj *fighter_gobj, s32 hitstatus)
{
    switch (hitstatus)
    {
    case gmHitCollision_HitStatus_Normal:
        ftColor_CheckSetColAnimIndex(fighter_gobj, 2, 0);
        break;

    case gmHitCollision_HitStatus_Invincible:
        ftColor_CheckSetColAnimIndex(fighter_gobj, 4, 0);
        break;

    case gmHitCollision_HitStatus_Intangible:
        ftColor_CheckSetColAnimIndex(fighter_gobj, 3, 0);
        break;
    }
}

// 0x800E880C
void ftCommon_SetHitStatusPartAll(GObj *fighter_gobj, s32 hitstatus)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hurt); i++)
    {
        ftHurtbox *ft_hurt = &fp->fighter_hurt[i];

        if (ft_hurt->hitstatus != gmHitCollision_HitStatus_None)
        {
            ft_hurt->hitstatus = hitstatus;
        }
    }
    fp->is_hitstatus_nodamage = (hitstatus == gmHitCollision_HitStatus_Normal) ? FALSE : TRUE;

    ftCommon_HitStatusSetColAnim(fighter_gobj, hitstatus);
}

// 0x800E8884
void ftCommon_SetHitStatusPart(GObj *fighter_gobj, s32 joint_index, s32 hitstatus)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hurt); i++)
    {
        ftHurtbox *ft_hurt = &fp->fighter_hurt[i];

        if ((ft_hurt->hitstatus != gmHitCollision_HitStatus_None) && (joint_index == ft_hurt->joint_index))
        {
            ft_hurt->hitstatus = hitstatus;

            if (ft_hurt->hitstatus != gmHitCollision_HitStatus_Normal)
            {
                fp->is_hitstatus_nodamage = TRUE;
            }
            return; // This means if there are multiple hurtboxes on the same bone/joint ID, only the first one is checked; same as Melee with Mr. Game & Watch / Fox's nose hurtboxes 
        }
    }
}

// 0x800E8A24
void ftCollision_SetHitStatusAll(GObj *fighter_gobj, s32 hitstatus)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->hitstatus = hitstatus;

    ftCommon_HitStatusSetColAnim(fighter_gobj, hitstatus);
}

// 0x800E8A48 - Get most effective bone collision state
s32 ftCommon_GetBestHitStatusPart(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 hitstatus_default = fp->hitstatus;
    s32 hitstatus_best = fp->fighter_hurt[0].hitstatus;
    s32 i;

    if (hitstatus_best != gmHitCollision_HitStatus_Normal)
    {
        for (i = 1; i < ARRAY_COUNT(fp->fighter_hurt); i++)
        {
            ftHurtbox *ft_hurt = &fp->fighter_hurt[i];

            if (ft_hurt->hitstatus == gmHitCollision_HitStatus_None) break;

            else if (ft_hurt->hitstatus < hitstatus_best)
            {
                hitstatus_best = ft_hurt->hitstatus;
            }
        }
    }
    if (hitstatus_default < hitstatus_best)
    {
        hitstatus_default = hitstatus_best;
    }
    return hitstatus_default;
}

// 0x800E8AAC - Get overall best collision state
s32 ftCommon_GetBestHitStatusAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 hitstatus_best = ftCommon_GetBestHitStatusPart(fighter_gobj);

    if (hitstatus_best < fp->star_hitstatus)
    {
        hitstatus_best = fp->star_hitstatus;
    }
    if (hitstatus_best < fp->special_hitstatus)
    {
        hitstatus_best = fp->special_hitstatus;
    }
    return hitstatus_best;
}

// 0x800E8B00
void ftCommon_InitFighterHurtParts(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftHurtbox *ft_hurt = &fp->fighter_hurt[0];
    ftHurtboxDesc *ft_hurt_desc = &fp->attributes->fighter_hurt_desc[0];
    s32 i;

    for (i = 0; i < FTPARTS_HURT_NUM_MAX; i++, ft_hurt++, ft_hurt_desc++)
    {
        if (ft_hurt_desc->joint_index != -1)
        {
            ft_hurt->joint_index = ft_hurt_desc->joint_index;
            ft_hurt->joint = fp->joint[ft_hurt->joint_index];

            ft_hurt->placement = ft_hurt_desc->placement;
            ft_hurt->is_grabbable = ft_hurt_desc->is_grabbable;

            ft_hurt->offset = ft_hurt_desc->offset;
            ft_hurt->size = ft_hurt_desc->size;

            ft_hurt->size.x *= 0.5F;
            ft_hurt->size.y *= 0.5F;
            ft_hurt->size.z *= 0.5F;
        }
    }
    fp->is_hurtbox_modify = FALSE;
}

// 0x800E8BC8
void ftCommon_UpdateFighterHurtPartIndex(GObj *fighter_gobj, s32 joint_index, Vec3f *offset, Vec3f *size)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hurt); i++)
    {
        ftHurtbox *ft_hurt = &fp->fighter_hurt[i];

        if (joint_index == ft_hurt->joint_index)
        {
            ft_hurt->offset = *offset;
            ft_hurt->size = *size;

            fp->fighter_hurt[i].size.x *= 0.5F;
            fp->fighter_hurt[i].size.y *= 0.5F;
            fp->fighter_hurt[i].size.z *= 0.5F;

            fp->is_hurtbox_modify = TRUE;

            return; // The same oversight as ftCommon_SetHitStatusPart except this time on hurtbox offset and size
        }
    }
}

// 0x800E8C70
void ftCommon_SetModelPartRenderIndex(GObj *fighter_gobj, s32 joint_index, s32 render_state)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    DObjDescContainer *dobj_desc_container;
    ftModelPart *model_part;
    ftModelPartRenderState *joint_render_state;
    UnkDObjData *unk_dobj;
    DObj *joint;
    void *var_a2;
    s32 lod_index;
    void *sp38;

    joint = fp->joint[joint_index];
    dobj_desc_container = attributes->dobj_desc_container;
    joint_render_state = &fp->joint_render_state[joint_index - 4];
    unk_dobj = joint->unk_0x84;

    if (joint != NULL)
    {
        if (render_state != joint_render_state->render_state_b1)
        {
            joint_render_state->render_state_b1 = render_state;

            func_800091F4(joint);

            if (render_state != -1)
            {
                if (fp->attributes->model_parts->model_part_desc[joint_index - 4] != NULL)
                {
                    model_part = &fp->attributes->model_parts->model_part_desc[joint_index - 4]->model_part[render_state][fp->lod_current - 1];

                    joint->display_list = model_part->display_list;

                    func_ovl0_800C8CB8(joint, model_part->unk_modelpart_0x4, model_part->unk_modelpart_0x8, model_part->unk_modelpart_0xC, fp->costume);

                    unk_dobj->unk_0xC = model_part->unk_modelpart_0x10;
                }
                else
                {
                    if ((fp->lod_current == 1) || (dobj_desc_container->dobj_desc_array[1].dobj_desc[joint_index - 4].display_list == NULL))
                    {
                        lod_index = 0;
                    }
                    else lod_index = 1;

                    joint->display_list = dobj_desc_container->dobj_desc_array[lod_index].dobj_desc[joint_index - 4].display_list;

                    if (dobj_desc_container->dobj_desc_array[lod_index].d2 != NULL)
                    {
                        sp38 = dobj_desc_container->dobj_desc_array[lod_index].d2[joint_index - 4];
                    }
                    else sp38 = NULL;

                    if (dobj_desc_container->dobj_desc_array[lod_index].d3 != NULL)
                    {
                        var_a2 = dobj_desc_container->dobj_desc_array[lod_index].d3[joint_index - 4];
                    }
                    else var_a2 = NULL;

                    func_ovl0_800C8CB8(joint, sp38, var_a2, NULL, fp->costume);

                    unk_dobj->unk_0xC = dobj_desc_container->dobj_desc_array[lod_index].unk_dobjcontain_0xC;
                }
            }
            else joint->display_list = NULL;

            fp->is_modelpart_modify = TRUE;
        }
    }
}

void ftCommon_SetModelPartRenderStateIndex(GObj *fighter_gobj, s32 joint_index, s32 render_state)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->joint_render_state[joint_index - 4].render_state_b0 = render_state;

    fp->is_modelpart_modify = TRUE;
}

// 0x800E8ECC
void ftCommon_ResetModelPartRenderAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    DObjDescContainer *dobj_desc_container;
    ftModelPart *model_part;
    ftModelPartRenderState *joint_render_state;
    UnkDObjData *unk_dobj;
    DObj *joint;
    void *var_a2;
    s32 lod_index;
    void *sp38;
    s32 i;

    dobj_desc_container = attributes->dobj_desc_container;

    for (i = 0; i < ARRAY_COUNT(fp->joint) - 4; i++)
    {
        joint = fp->joint[i + 4];

        if (joint != NULL)
        {
            joint_render_state = &fp->joint_render_state[i];

            if (joint_render_state->render_state_b1 != joint_render_state->render_state_b0)
            {
                joint_render_state->render_state_b1 = joint_render_state->render_state_b0;

                func_800091F4(joint);

                if (joint_render_state->render_state_b1 == -1)
                {
                    joint->display_list = NULL;
                }
                else
                {
                    unk_dobj = joint->unk_0x84;

                    if (attributes->model_parts->model_part_desc[i] != NULL)
                    {
                        model_part = &attributes->model_parts->model_part_desc[i]->model_part[joint_render_state->render_state_b1][fp->lod_current - 1];

                        joint->display_list = model_part->display_list;

                        func_ovl0_800C8CB8(joint, model_part->unk_modelpart_0x4, model_part->unk_modelpart_0x8, model_part->unk_modelpart_0xC, fp->costume);

                        unk_dobj->unk_0xC = model_part->unk_modelpart_0x10;
                    }
                    else
                    {
                        if ((fp->lod_current == 1) || (dobj_desc_container->dobj_desc_array[1].dobj_desc[i].display_list == NULL))
                        {
                            lod_index = 0;
                        }
                        else lod_index = 1;

                        joint->display_list = dobj_desc_container->dobj_desc_array[lod_index].dobj_desc[i].display_list;

                        if (dobj_desc_container->dobj_desc_array[lod_index].d2 != NULL)
                        {
                            sp38 = dobj_desc_container->dobj_desc_array[lod_index].d2[i];
                        }
                        else sp38 = NULL;

                        if (dobj_desc_container->dobj_desc_array[lod_index].d3 != NULL)
                        {
                            var_a2 = dobj_desc_container->dobj_desc_array[lod_index].d3[i];
                        }
                        else var_a2 = NULL;

                        func_ovl0_800C8CB8(joint, sp38, var_a2, NULL, fp->costume);

                        unk_dobj->unk_0xC = dobj_desc_container->dobj_desc_array[lod_index].unk_dobjcontain_0xC;
                    }
                }
            }
        }
    }
    fp->is_modelpart_modify = FALSE;
}

// 0x800E90F8
void ftCommon_HideModelPartAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = 4; i < ARRAY_COUNT(fp->joint); i++)
    {
        DObj *joint = fp->joint[i];

        if (joint != NULL)
        {
            if (fp->joint_render_state[i - 4].render_state_b1 == -1) continue;

            else
            {
                fp->joint_render_state[i - 4].render_state_b1 = -1;

                func_800091F4(joint);

                joint->display_list = NULL;
            }
        }
    }
    fp->is_modelpart_modify = TRUE;
}

// 0x800E9198
void ftCommon_SetModelPartLevelDetailAll(GObj *fighter_gobj, u8 lod)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    if (lod != fp->lod_current)
    {
        fp->lod_current = lod;

        for (i = 4; i < ARRAY_COUNT(fp->joint); i++)
        {
            DObj *joint = fp->joint[i];

            if (joint != NULL)
            {
                s32 render_state = fp->joint_render_state[i - 4].render_state_b1;

                if (render_state == -1) continue;

                else
                {
                    fp->joint_render_state[i - 4].render_state_b1 = -1;

                    ftCommon_SetModelPartRenderIndex(fighter_gobj, i, render_state);
                }
            }
        }
        func_ovl2_800E9598(fighter_gobj);
    }
}

void func_ovl2_800E9248(GObj *fighter_gobj, s32 costume, s32 shade)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    DObj *joint;
    GObj *unk_gobj;
    UnkDObjData *unk_dobj;
    DObjDescContainer *dobj_desc_container;
    UnkFighterDObjData *unk_ftdobj;
    ftModelPartRenderState *joint_render_state;
    s32 lod_index;
    ftModelPart *model_part;
    void *var_a1;
    void *var_a2;
    s32 i;

    dobj_desc_container = attributes->dobj_desc_container;
    unk_ftdobj = attributes->unk_0x32C;

    for (i = 0; i < ARRAY_COUNT(fp->joint) - 4; i++)
    {
        joint = fp->joint[i + 4];

        if (joint != NULL)
        {
            func_800091F4(joint);

            joint_render_state = &fp->joint_render_state[i];

            if (joint_render_state->render_state_b1 != -1)
            {
                if (attributes->model_parts->model_part_desc[i] != 0)
                {
                    model_part = &attributes->model_parts->model_part_desc[i]->model_part[joint_render_state->render_state_b1][fp->lod_current - 1];

                    func_ovl0_800C8CB8(joint, model_part->unk_modelpart_0x4, model_part->unk_modelpart_0x8, model_part->unk_modelpart_0xC, costume);
                }
                else
                {
                    if ((fp->lod_current == 1) || (dobj_desc_container->dobj_desc_array[1].dobj_desc[i].display_list == NULL))
                    {
                        lod_index = 0;
                    }
                    else lod_index = 1;

                    if (dobj_desc_container->dobj_desc_array[lod_index].d2 != NULL)
                    {
                        var_a1 = dobj_desc_container->dobj_desc_array[lod_index].d2[i];
                    }
                    else var_a1 = NULL;

                    if (dobj_desc_container->dobj_desc_array[lod_index].d3 != NULL)
                    {
                        var_a2 = dobj_desc_container->dobj_desc_array[lod_index].d3[i];
                    }
                    else var_a2 = NULL;

                    func_ovl0_800C8CB8(joint, var_a1, var_a2, NULL, costume);
                }
            }
            if ((unk_ftdobj != NULL) && ((i + 4) == unk_ftdobj->joint_index))
            {
                unk_dobj = joint->unk_0x84;

                if (unk_dobj->unk_gobj != NULL)
                {
                    omEjectGObjCommon(unk_dobj->unk_gobj);

                    unk_dobj->unk_gobj = NULL;
                }
                if (costume != 0)
                {
                    unk_gobj = omMakeGObjCommon(0x3E9U, NULL, 0xDU, 0x80000000U);
                    unk_dobj->unk_gobj = unk_gobj;

                    func_800092D0(unk_gobj, unk_ftdobj->unk_ftdobj_0x4);

                    func_ovl0_800C8CB8(unk_dobj->unk_gobj->obj, unk_ftdobj->unk_ftdobj_0x8, unk_ftdobj->unk_ftdobj_0xC, NULL, costume);
                }
            }
        }
    }
    fp->costume = costume;
    fp->shade = shade;

    fp->costume_shade.r = ((attributes->shade_color[fp->shade - 1].r * attributes->shade_color[fp->shade - 1].a) / 255);
    fp->costume_shade.g = ((attributes->shade_color[fp->shade - 1].g * attributes->shade_color[fp->shade - 1].a) / 255);
    fp->costume_shade.b = ((attributes->shade_color[fp->shade - 1].b * attributes->shade_color[fp->shade - 1].a) / 255);

    func_ovl2_800E9598(fighter_gobj);
}

// ...ewww...
// 0x800E9598
void func_ovl2_800E9598(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftTexturePartRenderState *texture_render_state;
    ftTexturePartContainer *texture_parts;
    ftTexturePartInfo *texture_info;
    DObj *joint;
    MObj *mobj;
    s32 lod;
    s32 i, j;

    for (i = 0, texture_render_state = &fp->texture_render_state[i], texture_info = &fp->attributes->texture_parts->texture_part_info[i]; i < ARRAY_COUNT(fp->texture_render_state); i++, texture_render_state++, texture_info++)
    {
        if (texture_render_state->frame_index_current != texture_render_state->frame_index_default)
        {
            joint = fp->joint[texture_info->joint_index];
            lod = texture_info->lod[fp->lod_current - 1];

            if (joint != NULL)
            {
                mobj = joint->mobj;

                j = 0;

            loop:
                if (mobj != NULL)
                {
                    if (j != lod)
                    {
                        mobj = mobj->mobj_next;

                        j++;

                        goto loop;
                    }
                    else mobj->index = texture_render_state->frame_index;
                }
            }
        }
    }
    fp->is_texturepart_modify = TRUE;
}

// 0x800E962C
void ftCommon_SetTexturePartIndex(GObj *fighter_gobj, s32 obj_index, s32 frame_index)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftTexturePartInfo *texture_part_info = &fp->attributes->texture_parts->texture_part_info[obj_index];
    s32 lod = texture_part_info->lod[fp->lod_current - 1];
    DObj *joint = fp->joint[texture_part_info->joint_index];

    if (joint != NULL)
    {
        MObj *mobj = joint->mobj;

        s32 i = 0;

    loop:
        if (mobj != NULL)
        {
            if (i != lod)
            {
                mobj = mobj->mobj_next;

                i++;

                goto loop;
            }
            mobj->index = frame_index;

            fp->texture_render_state[obj_index].frame_index_current = frame_index;

            fp->is_texturepart_modify = TRUE;
        }
    }
}

void func_ovl2_800E96B0(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftTexturePartRenderState *texture_render_state;
    ftTexturePartContainer *texture_parts;
    ftTexturePartInfo *texture_info;
    DObj *joint;
    MObj *mobj;
    s32 lod;
    s32 i, j;

    for (i = 0, texture_render_state = &fp->texture_render_state[i], texture_info = &fp->attributes->texture_parts->texture_part_info[i]; i < ARRAY_COUNT(fp->texture_render_state); i++, texture_render_state++, texture_info++)
    {
        if (texture_render_state->frame_index_current != texture_render_state->frame_index_default)
        {
            texture_render_state->frame_index_current = texture_render_state->frame_index_default;

            joint = fp->joint[texture_info->joint_index];
            lod = texture_info->lod[fp->lod_current - 1];

            if (joint != NULL)
            {
                mobj = joint->mobj;

                j = 0;

            loop:
                if (mobj != NULL)
                {
                    if (j != lod)
                    {
                        mobj = mobj->mobj_next;

                        j++;

                        goto loop;
                    }
                    else mobj->index = texture_render_state->frame_index_current;
                }
            }
        }
    }
    fp->is_texturepart_modify = FALSE;
}

extern ColAnimDesc caColorAnimDesc[]; // 0x8012DBD0

// 0x800E974C
bool32 caCheckSetColAnimIndex(caStruct *colanim, s32 colanim_id, s32 duration)
{
    if (caColorAnimDesc[colanim_id].unk_colanimdesc_0x4 >= caColorAnimDesc[colanim->colanim_id].unk_colanimdesc_0x4)
    {
        s32 i;

        colanim->colanim_id = colanim_id;
        colanim->duration = duration;
        colanim->cs[0].p_script = caColorAnimDesc[colanim_id].p_script;
        colanim->cs[0].color_event_timer = 0;
        colanim->cs[0].script_index = 0;

        for (i = 1; i < ARRAY_COUNT(colanim->cs); i++)
        {
            colanim->cs[i].p_script = NULL;
        }
        colanim->is_use_envcolor = colanim->is_use_light = colanim->is_use_blendcolor = colanim->unk_ca_0x60_b34 = 0;

        return TRUE;
    }
    return FALSE;
}

// 0x800E9814
bool32 ftColor_CheckSetColAnimIndex(GObj *fighter_gobj, s32 colanim_id, s32 duration)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return caCheckSetColAnimIndex(&fp->colanim, colanim_id, duration);
}

// 0x800E9838
void caResetColAnim(caStruct *colanim)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(colanim->cs); i++)
    {
        colanim->cs[i].p_script = NULL;
    }
    colanim->duration = 0;
    colanim->colanim_id = 0;

    colanim->is_use_envcolor = colanim->is_use_light = colanim->is_use_blendcolor = colanim->unk_ca_0x60_b34 = 0;
}

void ftCommon_ResetColAnim(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    caResetColAnim(&fp->colanim);
}

// 0x800E98D4
void ftCommon_ResetColAnimStatUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_ResetColAnim(fighter_gobj);

    switch (ftCommon_GetBestHitStatusPart(fighter_gobj))
    {
    case gmHitCollision_HitStatus_Invincible:
        ftColor_CheckSetColAnimIndex(fighter_gobj, 4, 0);
        break;

    case gmHitCollision_HitStatus_Intangible:
        ftColor_CheckSetColAnimIndex(fighter_gobj, 3, 0);
        break;
    }
    switch (fp->ft_kind)
    {
    case Ft_Kind_Donkey:
    case Ft_Kind_PolyDonkey:
    case Ft_Kind_GiantDonkey:
        if (fp->fighter_vars.donkey.charge_level == FTDONKEY_GIANTPUNCH_CHARGE_MAX)
        {
            ftColor_CheckSetColAnimIndex(fighter_gobj, FTDONKEY_GIANTPUNCH_CHARGE_COLANIM_ID, FTDONKEY_GIANTPUNCH_CHARGE_COLANIM_LENGTH);
        }
        break;

    case Ft_Kind_Samus:
    case Ft_Kind_PolySamus:
        if (fp->fighter_vars.samus.charge_level == FTSAMUS_CHARGE_MAX)
        {
            ftColor_CheckSetColAnimIndex(fighter_gobj, FTSAMUS_CHARGE_COLANIM_ID, FTSAMUS_CHARGE_COLANIM_LENGTH);
        }
        break;

    case Ft_Kind_Kirby:
        if ((fp->fighter_vars.kirby.copy_id == Ft_Kind_Samus) || (fp->fighter_vars.kirby.copy_id == Ft_Kind_PolySamus))
        {
            if (fp->fighter_vars.kirby.copysamus_charge_level == FTKIRBY_COPYSAMUS_CHARGE_MAX)
            {
                ftColor_CheckSetColAnimIndex(fighter_gobj, FTKIRBY_COPYSAMUS_CHARGE_COLANIM_ID, FTKIRBY_COPYSAMUS_CHARGE_COLANIM_LENGTH);
            }
        }
        if ((fp->fighter_vars.kirby.copy_id == Ft_Kind_Donkey) || (fp->fighter_vars.kirby.copy_id == Ft_Kind_PolyDonkey) || (fp->fighter_vars.kirby.copy_id == Ft_Kind_GiantDonkey))
        {
            if (fp->fighter_vars.kirby.copydonkey_charge_level == FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX)
            {
                ftColor_CheckSetColAnimIndex(fighter_gobj, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_COLANIM_ID, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_COLANIM_LENGTH);
            }
        }
        break;

    case Ft_Kind_Ness:
    case Ft_Kind_PolyNess:
        if (fp->is_absorb)
        {
            ftColor_CheckSetColAnimIndex(fighter_gobj, FTNESS_PSI_MAGNET_COLANIM_ID, FTNESS_PSI_MAGNET_COLANIM_LENGTH);
        }
        break;
    }
    if (fp->damage_heal != 0)
    {
        ftColor_CheckSetColAnimIndex(fighter_gobj, 9, 0);
    }
    if (fp->star_invincible_timer != 0)
    {
        ftColor_CheckSetColAnimIndex(fighter_gobj, 0x4A, 0);
    }
    if ((fp->invincible_timer != 0) || (fp->intangible_timer != 0))
    {
        ftColor_CheckSetColAnimIndex(fighter_gobj, 0xA, 0);
    }
    if (ftCommon_HammerCheckStatusID(fighter_gobj) != 0)
    {
        ftColor_CheckSetColAnimIndex(fighter_gobj, 0x49, 0);
    }
}

extern s32 Fighter_ColAnimIndex_Skeleton[Ft_Kind_EnumMax] = 
{
    0x14,
    0x14,
    0x14,
    0x1C,
    0x14,
    0x14,
    0x14,
    0x14,
    0x18,
    0x14,
    0x18,
    0x14,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10
};

bool32 func_ovl2_800E9AF4(GObj *fighter_gobj, s32 colanim_id)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return ftColor_CheckSetColAnimIndex(fighter_gobj, Fighter_ColAnimIndex_Skeleton[fp->ft_kind] + colanim_id, 0);
}

// 0x800E9B30 - Set How to Play input sequence
void ftCommon_SetHowToPlayInputSeq(GObj *fighter_gobj, void *p_inputseq)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->howtoplay_input_wait = 0;
    fp->p_howtoplay_input = p_inputseq;
}

// 0x800E9B40 - Check if How to Play input sequence exists
bool32 ftCommon_CheckHowToPlayInputSeq(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->p_howtoplay_input != NULL)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800E9B64
void efRunProc(GObj *fighter_gobj, void (*proc)(GObj*, efStruct*))
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->is_persist_effect)
    {
        GObj *effect_gobj = gOMObjCommonLinks[gOMObjLinkIndexEffect];

        while (effect_gobj != NULL)
        {
            efStruct *ep = efGetStruct(effect_gobj);

            GObj *next_effect = effect_gobj->group_gobj_next;

            if ((ep != NULL) && (fighter_gobj == ep->fighter_gobj))
            {
                proc(effect_gobj, ep);
            }
            effect_gobj = next_effect;
        }
    }
}

// 0x800E9BE8
void efDestroyGFX(GObj *effect_gobj, efStruct *ep)
{
    efTransform *einfo = ep->einfo;

    if (einfo != NULL)
    {
        func_ovl0_800D39D4(einfo->unk_effect_0xB8, ep->unk_effectstruct_0x8 >> 3);
    }
    efManager_SetPrevAlloc(ep);
    omEjectGObjCommon(effect_gobj);
}

// 0x800E9C3C
void ftCommon_ProcStopGFX(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    efRunProc(fighter_gobj, efDestroyGFX);

    fp->is_persist_effect = FALSE;
}

// 0x800E9C78
void efPauseGFX(GObj *effect_gobj, efStruct *ep)
{
    ep->is_pause_effect = TRUE;
}

// 0x800E9C78
void ftCommon_ProcPauseGFX(GObj *effect_gobj)
{
    efRunProc(effect_gobj, efPauseGFX);
}

// 0x800E9CB0
void efResumeGFX(GObj *effect_gobj, efStruct *ep)
{
    ep->is_pause_effect = FALSE;
}

// 0x800E9CC4
void ftCommon_ProcResumeGFX(GObj *fighter_gobj)
{
    efRunProc(fighter_gobj, efResumeGFX);
}

// 0x800E9CE8
void ftCommon_VelDamageTransferGround(ftStruct *fp)
{
    if (fp->ground_or_air == GA_Ground)
    {
        Vec3f *ground_angle = &fp->coll_data.ground_angle;

        if (fp->phys_info.vel_damage_ground == 0.0F)
        {
            fp->phys_info.vel_damage_ground = fp->phys_info.vel_damage_air.x;

            if (fp->phys_info.vel_damage_ground > 250.0F)
            {
                fp->phys_info.vel_damage_ground = 250.0F;
            }
            if (fp->phys_info.vel_damage_ground < -250.0F)
            {
                fp->phys_info.vel_damage_ground = -250.0F;
            }
            fp->phys_info.vel_damage_air.x = ground_angle->y * fp->phys_info.vel_damage_ground;
            fp->phys_info.vel_damage_air.y = -ground_angle->x * fp->phys_info.vel_damage_ground;
        }
    }
}

/*
3F0CCCCD 3FE8BA2E 3F19999A 3FD55555
3F333333 3FB6DB6E 3F400000 3FAAAAAB
3F4CCCCD 3FA00000 3F666666 3F8E38E4
3F733333 3F86BCA2 3F800000 3F800000
3F8B851F 3F6ADCC5 3F000000 40A00000
3F0CCCCD 40800000 3F19999A 40555555
3F266666 4036DB6E 3F333333 40200000
3F400000 3FE8BA2E 3F4CCCCD 3FD8F2FC
3F59999A 3FCB2CB3 3F666666 3FBF0B76
3F733333 3FB4481D 3F266666 40555555
3F333333 4036DB6E 3F3D70A4 40200000
3F451EB8 400E38E4 3F4CCCCD 40000000
3F800000 3F124925 3F866666 3F09A269
3F8CCCCD 3F034834 3F933333 3EF3CF3E
3F9D70A4 3EE6A171 3F866666 3EDE9BD4
3F8CCCCD 3ECCCCCD 3F933333 3EBDA12F
3F99999A 3EB6DB6E 3FA00000 3EAAAAAB
3F666666 3F800000 3F800000 3F800000
3F8CCCCD 3F800000 3F9C28F6 3F800000
3FC00000 3F800000 3F8A3D71 3F6D097B
*/

f32 ftDamage_HandicapDesc[40][2] = 
{
    { 0.55F,  16.363636363636F / 9.0F },
    {  0.6F,             15.0F / 9.0F },
    {  0.7F,   12.85714316367F / 9.0F },
    { 0.75F,             12.0F / 9.0F },
    {  0.8F,            11.25F / 9.0F },
    {  0.9F,             10.0F / 9.0F },
    { 0.95F,    9.47368454931F / 9.0F },
    {  1.0F,              9.0F / 9.0F },
    { 1.09F,   8.256880581381F / 9.0F },
    {  0.5F,             45.0F / 9.0F },
    { 0.55F,             36.0F / 9.0F },
    {  0.6F,             30.0F / 9.0F },
    { 0.65F,    25.7142863268F / 9.0F },
    {  0.7F,             22.5F / 9.0F },
    { 0.75F,  16.363636363636F / 9.0F },
    {  0.8F,  15.254237651824F / 9.0F },
    { 0.85F,  14.285714507102F / 9.0F },
    {  0.9F,  13.432835340495F / 9.0F },
    { 0.95F,  12.676056504246F / 9.0F },
    { 0.65F,             30.0F / 9.0F },
    {  0.7F,  25.714286327358F / 9.0F },
    { 0.74F,             22.5F / 9.0F },
    { 0.77F,             20.0F / 9.0F },
    {  0.8F,             18.0F / 9.0F },
    {  1.0F,   5.142857372757F / 9.0F },
    { 1.05F,   4.838709890842F / 9.0F },
    {  1.1F,   4.615384340286F / 9.0F },
    { 1.15F,   4.285714566707F / 9.0F },
    { 1.23F,   4.054054054054F / 9.0F },
    { 1.05F,   3.913043618196F / 9.0F },
    {  1.1F,              3.6F / 9.0F },
    { 1.15F,   3.333333333333F / 9.0F },
    {  1.2F,   3.214285790920F / 9.0F },
    { 1.25F,              3.0F / 9.0F },
    {  0.9F,              9.0F / 9.0F },
    {  1.0F,              9.0F / 9.0F },
    {  1.1F,              9.0F / 9.0F },
    { 1.22F,              9.0F / 9.0F },
    {  1.5F,              9.0F / 9.0F },
    { 1.08F,   8.333333333333F / 9.0F }
};

// 0x800E9D78
f32 gmCommonObject_DamageCalcKnockback(s32 percent_damage, s32 recent_damage, s32 hit_damage, s32 knockback_weight, s32 knockback_scale, s32 knockback_base, f32 weight, s32 attack_handicap, s32 defend_handicap) 
{
    f32 knockback;

    if (knockback_weight != 0)
    {
        knockback = ( ( ( ( ( ( 1 + ( 10.0F * knockback_weight * 0.05F ) ) * weight * 1.4F ) + 18.0F ) * ( knockback_scale * 0.01F ) ) + knockback_base ) * ( gpBattleState->damage_ratio * 0.01F ) * ftDamage_HandicapDesc[attack_handicap - 1][0] ) * ftDamage_HandicapDesc[defend_handicap - 1][1];
    } 
    else 
    {
        f32 damage_add = percent_damage + recent_damage;

        knockback = ( ( ( ( ( ( ( damage_add * 0.1F ) + ( damage_add * hit_damage * 0.05F ) ) * weight * 1.4F ) + 18.0F ) * ( knockback_scale * 0.01F ) ) + knockback_base ) * ( gpBattleState->damage_ratio * 0.01F ) * ftDamage_HandicapDesc[attack_handicap - 1][0] ) * ftDamage_HandicapDesc[defend_handicap - 1][1];
    }
    if (knockback >= 2500.0F)
    {
        knockback = 2500.0F;
    }
    if (gSaveData.mprotect_fail & GMSAVE_PROTECTFAIL_RANDOMKNOCKBACK)
    {
        knockback = lbRandom_GetFloat() * 200.0F;
    }
    return knockback;
}

// 0x800E9FC0 - Used by Barrel Cannon on Kongo Jungle
f32 grMapObject_DamageCalcKnockback(s32 percent_damage, s32 recent_damage, s32 hit_damage, s32 knockback_weight, s32 knockback_scale, s32 knockback_base, f32 weight, s32 attack_handicap, s32 defend_handicap)
{
    f32 knockback;

    if (knockback_weight != 0)
    {
        knockback = ( ( ( ( ( ( 1 + ( 10.0F * knockback_weight * 0.05F ) ) * weight * 1.4F ) + 18.0F ) * ( knockback_scale * 0.01F ) ) + knockback_base ) * 1 * ftDamage_HandicapDesc[attack_handicap - 1][0] ) * ftDamage_HandicapDesc[defend_handicap - 1][1];
    }
    else
    {
        f32 damage_add = percent_damage + recent_damage;

        knockback = ( ( ( ( ( ( ( damage_add * 0.1F ) + ( damage_add * hit_damage * 0.05F ) ) * weight * 1.4F ) + 18.0F ) * ( knockback_scale * 0.01F ) ) + knockback_base) * 1 * ftDamage_HandicapDesc[attack_handicap - 1][0] ) * ftDamage_HandicapDesc[defend_handicap - 1][1];
    }
    if (knockback >= 2500.0F)
    {
        knockback = 2500.0F;
    }
    if (gSaveData.mprotect_fail & GMSAVE_PROTECTFAIL_RANDOMKNOCKBACK)
    {
        knockback = lbRandom_GetFloat() * 200.0F;
    }
    return knockback;
}

// 0x800EA1B0
f32 ftCommon_DamageCalcHitStun(f32 knockback)
{
    return knockback / 1.875F;
}

// 0x800EA1C0
s32 gmCommon_DamageCalcHitLag(s32 damage, s32 status_id, f32 hitlag_mul)
{
    s32 hitlag_timer = (s32) ((damage * 0.33333333F) + 5.0F) * hitlag_mul;

    if ((status_id == ftStatus_Common_Squat) || (status_id == ftStatus_Common_SquatWait))
    {
        hitlag_timer *= 0.66666667F;
    }
    return hitlag_timer;
}

// 0x800EA248
void ftDamageUpdateCheckDropItem(ftStruct *fp, s32 damage)
{
    fp->percent_damage += damage;
    gpBattleState->player_block[fp->player].total_damage_all += damage;

    if (fp->percent_damage > 999)
    {
        fp->percent_damage = 999;
    }
    gpBattleState->player_block[fp->player].stock_damage_all = fp->percent_damage;

    if (fp->item_hold != NULL)
    {
        if ((fp->damage_knockback != 0.0F) && ((fp->hitlag_timer == 0) || !(fp->x192_flag_b6) || !(fp->damage_knockback < (fp->damage_stack + 30.0F))))
        {
            itStruct *ip = itGetStruct(fp->item_hold);

            if ((ip->weight != It_Weight_Heavy) || (fp->ft_kind != Ft_Kind_Donkey) && (fp->ft_kind != Ft_Kind_PolyDonkey) && (fp->ft_kind != Ft_Kind_GiantDonkey))
            {
                if ((damage > (s32)lbRandom_GetIntRange(60)) || ((itMain_CheckShootNoAmmo(fp->item_hold) != FALSE) && (lbRandom_GetIntRange(2) == 0)))
                {
                    ftSetupDropItem(fp);
                }
            }
        }
    }
}

// 0x800EA3D4
void ftCommon_ApplyDamageHeal(ftStruct *fp, s32 heal)
{
    fp->damage_heal += heal;
    ftColor_CheckSetColAnimIndex(fp->fighter_gobj, 9, 0);
}

// 0x800EA40C - If fighter is grabbed, halve damage received
s32 ftCommon_DamageAdjustCapture(ftStruct *fp, s32 damage)
{
    if (fp->capture_gobj != NULL)
    {
        damage = (damage * 0.5F) + 0.999F;
    }
    return (damage * fp->damage_mul) + 0.999F;
}

// 0x8012B820
f32 gmCommon_DamageStaleTable[4] = 
{
    0.75F, 0.82F, 0.89F, 0.96F
};

// 0x800EA470
f32 gmCommon_DamageGetStaleMul(s32 player, s32 attack_id, u16 motion_count)
{
    s32 stale_index;
    s32 start_array_id;
    s32 current_array_id;
    s32 i;

    stale_index = gpBattleState->player_block[player].stale_index;

    if (attack_id != 0)
    {
        current_array_id = start_array_id = (stale_index != 0) ? stale_index - 1 : ARRAY_COUNT(gpBattleState->player_block[player].stale_info) - 1;

        for (i = 0; i < ARRAY_COUNT(gmCommon_DamageStaleTable); i++)
        {
            if (attack_id == gpBattleState->player_block[player].stale_info[current_array_id].attack_id)
            {
                if (motion_count != gpBattleState->player_block[player].stale_info[current_array_id].motion_count)
                {
                    return gmCommon_DamageStaleTable[i];
                }
                else if (current_array_id == start_array_id)
                {
                    i--;
                }
            }
            current_array_id = (current_array_id != 0) ? current_array_id-- : ARRAY_COUNT(gpBattleState->player_block[player].stale_info) - 1;
        }
    }
    return 1.0F;
}

s32 gmCommon_DamageApplyStale(s32 player, s32 damage, s32 attack_id, u16 flags)
{
    f32 stale = gmCommon_DamageGetStaleMul(player, attack_id, flags);

    if (stale != 1.0F)
    {
        damage = (damage * stale) + 0.999F;
    }
    return damage;
}

extern u16 gEntityMotionCount; // Updated each time a new move is used? Includes non-attacks.

// 0x800EA5BC
u16 gmCommon_GetMotionCountInc(void)
{
    u16 motion_count = gEntityMotionCount++;

    if (gEntityMotionCount == 0)
    {
        gEntityMotionCount = 1;
    }
    return motion_count;
}

// 0x800EA5E8
void ftCommon_MotionCountIncSetAttackID(ftStruct *fp, s32 attack_id)
{
    fp->attack_id = attack_id;
    fp->motion_count = gmCommon_GetMotionCountInc();
}

// 0x800EA614
void ftAttackAddStaleQueue(s32 attack_player, s32 defend_player, s32 attack_id, u16 motion_count)
{
    if ((attack_player != GMMATCH_PLAYERS_MAX) && (attack_player != defend_player))
    {
        s32 i, stale_index = gpBattleState->player_block[attack_player].stale_index;

        for (i = 0; i < ARRAY_COUNT(gpBattleState->player_block[attack_player].stale_flags); i++)
        {
            if ((attack_id == gpBattleState->player_block[attack_player].stale_info[i].attack_id) && (motion_count == gpBattleState->player_block[attack_player].stale_info[i].motion_count))
            {
                return;
            }
        }
        gpBattleState->player_block[attack_player].stale_info[stale_index].attack_id    = attack_id;
        gpBattleState->player_block[attack_player].stale_info[stale_index].motion_count = motion_count;

        if (stale_index == (ARRAY_COUNT(gpBattleState->player_block[attack_player].stale_info) - 1))
        {
            gpBattleState->player_block[attack_player].stale_index = 0;
        }
        else gpBattleState->player_block[attack_player].stale_index = stale_index + 1;
    }
}

extern u16 gEntityStatUpdateCount; // Updated each time an entity's status is changed? e.g. PK Fire pillar increments this twice, desyncing it from gEntityMotionCount

// 0x800EA74C
u16 gmCommon_GetStatUpdateCountInc(void)
{
    u16 update_count = gEntityStatUpdateCount++; 

    if (gEntityStatUpdateCount == 0)
    {
        gEntityStatUpdateCount = 1;
    }
    return update_count;
}

// 0x800EA778
void ftCommon_StatUpdateCountIncSetFlags(ftStruct *fp, u16 flags)
{
    fp->stat_flags = *(gmStatFlags*)&flags;
    fp->stat_count = gmCommon_GetStatUpdateCountInc();
}

extern s32 gmBonusStat_Attacker_AttackGroupIndex_Count[];    // Index of attack groups
extern s32 gmBonusStat_Attacker_IsSmashAttack_Count[2];      // Index 0 = non-smash attack, index 1 = smash attack
extern s32 gmBonusStat_Attacker_GroundOrAirAttack_Count[2];  // Index 0 = ground, index 1 = air
extern s32 gmBonusStat_Attacker_IsSpecialAttack_Count[2];    // Index 0 = non-special attack, index 1 = special attack

// 0x800EA7B0
void ftCommon_Update1PGameAttackStats(ftStruct *fp, u16 flags)
{
    gmStatFlags stat_flags = *(gmStatFlags*)&flags;

    if ((fp->status_info.pl_kind != Pl_Kind_Result) && (gpBattleState->game_type == gmMatch_GameType_1PGame) && (fp->player == gSceneData.player_port))
    {
        if ((fp->stat_flags.attack_group_id != 0) && (fp->stat_flags.attack_group_id != stat_flags.attack_group_id))
        {
            gmBonusStat_Attacker_AttackGroupIndex_Count[fp->stat_flags.attack_group_id]++;

            gmBonusStat_Attacker_IsSmashAttack_Count[fp->stat_flags.is_smash_attack]++;

            gmBonusStat_Attacker_GroundOrAirAttack_Count[fp->stat_flags.is_ground_or_air]++;

            gmBonusStat_Attacker_IsSpecialAttack_Count[fp->stat_flags.is_special_attack]++;
        }
    }
}

// 0x800EA8B0
void ftCommon_ApplyStarInvincibleTimer(ftStruct *fp, s32 star_invincible_timer)
{
    fp->star_hitstatus = gmHitCollision_HitStatus_Invincible;
    fp->star_invincible_timer = star_invincible_timer;

    ftColor_CheckSetColAnimIndex(fp->fighter_gobj, ITSTAR_COLANIM_ID, ITSTAR_COLANIM_LENGTH);
}

// 0x800EA8EC
void ftCommon_ApplyInvincibleTimer(ftStruct *fp, s32 invincible_timer)
{
    if (fp->invincible_timer < invincible_timer)
    {
        fp->invincible_timer = invincible_timer;
    }
    if (fp->intangible_timer != 0)
    {
        fp->special_hitstatus = gmHitCollision_HitStatus_Intangible;
    }
    else fp->special_hitstatus = gmHitCollision_HitStatus_Invincible;

    ftColor_CheckSetColAnimIndex(fp->fighter_gobj, 0xA, 0);
}

// 0x800EA948
void ftCommon_ApplyIntangibleTimer(ftStruct *fp, s32 intangible_timer)
{
    if (fp->intangible_timer < intangible_timer)
    {
        fp->intangible_timer = intangible_timer;
    }
    fp->special_hitstatus = gmHitCollision_HitStatus_Intangible;

    ftColor_CheckSetColAnimIndex(fp->fighter_gobj, 0xA, 0);
}

// 0x800EA98C
void ftAttackUpdateMatchStats(s32 attack_player, s32 defend_player, s32 attack_damage)
{
    if ((attack_player != GMMATCH_PLAYERS_MAX) && (attack_player != defend_player))
    {
        gpBattleState->player_block[attack_player].total_damage_dealt += attack_damage;

        gpBattleState->player_block[defend_player].total_damage_player[attack_player] += attack_damage;
        gpBattleState->player_block[defend_player].combo_damage_foe += attack_damage;
        gpBattleState->player_block[defend_player].combo_count_foe++;
    }
}

extern s32 gmBonusStat_Defender_AttackGroupIndex_Count[];   // Attacks successfully landed on opponent
extern s32 gmBonusStat_Defender_IsSmashAttack_Count[2];     // Smash Attacks successfully landed on opponent
extern s32 gmBonusStat_Defender_GroundOrAirAttack_Count[2]; // Grounded / Airborne attacks successfully landed on opponent
extern s32 gmBonusStat_Defender_IsSpecialAttack_Count[2];   // Special attacks successfully landed on opponent

// 0x800EAA2C
void ftCommon_Update1PGameDamageStats(ftStruct *fp, s32 damage_player, s32 damage_object_class, s32 damage_object_kind, u16 flags, u16 damage_stat_count)
{
    fp->damage_player = damage_player;
    fp->damage_object_class = damage_object_class;
    fp->damage_object_kind = damage_object_kind;
    fp->damage_count++;

    if (!(damage_stat_count) || (fp->damage_stat_count != damage_stat_count))
    {
        fp->damage_stat_flags = *(gmStatFlags*)&flags;
        fp->damage_stat_count = damage_stat_count;

        if (gpBattleState->game_type == gmMatch_GameType_1PGame)
        {
            if ((gSceneData.player_port == damage_player) && (fp->damage_stat_flags.attack_group_id != 0))
            {
                gmBonusStat_Defender_AttackGroupIndex_Count[fp->damage_stat_flags.attack_group_id]++;
                gmBonusStat_Defender_IsSmashAttack_Count[fp->damage_stat_flags.is_smash_attack]++;
                gmBonusStat_Defender_GroundOrAirAttack_Count[fp->damage_stat_flags.is_ground_or_air]++;
                gmBonusStat_Defender_IsSpecialAttack_Count[fp->damage_stat_flags.is_special_attack]++;
            }
        }
    }
}

// 0x800EAB40
void ftCommon_GFXJointCycle(ftStruct *fp, Vec3f *pos)
{
    ftAttributes *attributes = fp->attributes;

    fp->joint_cycle_array_index++;

    if (fp->joint_cycle_array_index == ARRAY_COUNT(attributes->gfx_joint_cycle_index))
    {
        fp->joint_cycle_array_index = 0;
    }
    pos->x = pos->y = pos->z = 0.0F;

    func_ovl2_800EDF24(fp->joint[attributes->gfx_joint_cycle_index[fp->joint_cycle_array_index]], pos);
}

// 0x800EABDC
void* ftCommon_GFXSpawn(GObj *fighter_gobj, s32 gfx_id, s32 joint_index, Vec3f *gfx_pos, Vec3f *gfx_scatter, s32 lr, bool32 is_scale_pos, u32 arg7)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f gfx_pos_mod;
    void *p_effect;
    f32 scale;
    efParticle *efpart;

    p_effect = NULL;

    switch (gfx_id)
    {
    case Ef_Kind_ChargeSparkle:
        switch (fp->ft_kind)
        {
        case Ft_Kind_Samus:
            joint_index = 0x10;

            gfx_pos_mod.z = gfx_pos_mod.y = 0.0F;
            gfx_pos_mod.x = 180.0F;

            gfx_pos = &gfx_pos_mod;
            break;

        case Ft_Kind_Donkey:
            joint_index = 0x10;

            gfx_pos_mod.z = gfx_pos_mod.y = 0.0F;
            gfx_pos_mod.x = 100.0F;

            gfx_pos = &gfx_pos_mod;
            break;

        case Ft_Kind_Kirby:
            joint_index = 0x10;

            gfx_pos_mod.z = gfx_pos_mod.y = 0.0F;
            gfx_pos_mod.x = 50.0F;

            gfx_pos = &gfx_pos_mod;
            break;

        case Ft_Kind_GiantDonkey:
            joint_index = 0x10;

            gfx_pos_mod.z = gfx_pos_mod.y = 0.0F;
            gfx_pos_mod.x = 100.0F;

        default: // Falthrough for final case; gfx_pos becomes uninitialized data if jumping straight to default
            gfx_pos = &gfx_pos_mod;
            break;
        }
        break;

    default:
        break;
    }
    if (joint_index != -1)
    {
        if (gfx_pos != NULL)
        {
            pos = *gfx_pos;
        }
        else pos.x = pos.y = pos.z = 0.0F;

        if (gfx_scatter != NULL)
        {
            if (gfx_scatter->x != 0)
            {
                pos.x += (lbRandom_GetFloat() - 0.5F) * (gfx_scatter->x * 2.0F);
            }
            if (gfx_scatter->y != 0)
            {
                pos.y += (lbRandom_GetFloat() - 0.5F) * (gfx_scatter->y * 2.0F);
            }
            if (gfx_scatter->z != 0)
            {
                pos.z += (lbRandom_GetFloat() - 0.5F) * (gfx_scatter->z * 2.0F);
            }
        }
        if (is_scale_pos != FALSE)
        {
            scale = 1.0F / fp->attributes->size_mul;

            pos.x *= scale;
            pos.y *= scale;
            pos.z *= scale;
        }
        func_ovl2_800EDF24(fp->joint[joint_index], &pos);
    }
    switch (gfx_id)
    {
    case Ef_Kind_DamageNormal:
        ftCommon_GFXJointCycle(fp, &pos);
        p_effect = efParticle_DamageNormalLight_MakeEffect(&pos, fp->player, 10, FALSE);
        break;

    case Ef_Kind_FlameLR:
        ftCommon_GFXJointCycle(fp, &pos);
        p_effect = efParticle_FlameLR_MakeEffect(&pos, lr);
        break;

    case Ef_Kind_FlameRandom:
        ftCommon_GFXJointCycle(fp, &pos);
        p_effect = efParticle_FlameRandom_MakeEffect(&pos);
        break;

    case Ef_Kind_FlameStatic:
        ftCommon_GFXJointCycle(fp, &pos);
        p_effect = efParticle_FlameStatic_MakeEffect(&pos);
        break;

    case Ef_Kind_ShockSmall:
        ftCommon_GFXJointCycle(fp, &pos);
        p_effect = efParticle_ShockSmall_MakeEffect(&pos);
        break;

    case Ef_Kind_DustLight:
        p_effect = efParticle_DustLight_MakeEffect(&pos, lr, 1.0F);
        break;

    case Ef_Kind_DustLightRapid:
        p_effect = efParticle_DustLight_MakeEffect(&pos, lr, 2.0F);
        break;

    case Ef_Kind_DustHeavyDouble:
        p_effect = efParticle_DustHeavyDouble_MakeEffect(&pos, lr, 1.0F);
        break;

    case Ef_Kind_DustHeavyDoubleRapid:
        p_effect = efParticle_DustHeavyDouble_MakeEffect(&pos, lr, 1.7F);
        break;

    case Ef_Kind_DustHeavy:
        p_effect = efParticle_DustHeavy_MakeEffect(&pos, lr);
        break;

    case Ef_Kind_DustHeavyReverse:
        p_effect = efParticle_DustHeavy_MakeEffect(&pos, -lr);
        break;

    case Ef_Kind_DustExpandLarge:
        pos.x += ((lbRandom_GetFloat() * 160.0F) - 80.0F);
        pos.y += ((lbRandom_GetFloat() * 160.0F) - 80.0F);

        p_effect = efParticle_DustExpandLarge_MakeEffect(&pos);
        break;

    case Ef_Kind_DustExpandSmall:
        p_effect = efParticle_DustExpandSmall_MakeEffect(&pos, 1.0F);
        break;

    case Ef_Kind_DustDashSmall:
        p_effect = efParticle_DustDash_MakeEffect(&pos, lr, 1.0F);
        break;

    case Ef_Kind_DustDashLarge:
        p_effect = efParticle_DustDash_MakeEffect(&pos, lr, 1.5F);
        break;

    case Ef_Kind_DamageFlyOrbs:
        p_effect = efParticle_DamageSpawnOrbs_MakeEffect(&pos);
        break;

    case Ef_Kind_ImpactSW:
        if ((fp->ground_or_air == GA_Ground) && (fp->coll_data.ground_line_id != -1) && (fp->coll_data.ground_line_id != -2))
        {
            p_effect = efParticle_ImpactSW_MakeEffect(&pos, 4, atan2f(-fp->coll_data.ground_angle.x, fp->coll_data.ground_angle.y));
        }
        else p_effect = efParticle_ImpactAirSW_MakeEffect(&pos, 4);
        break;

    case Ef_Kind_StarRodSpark:
        p_effect = efParticle_StarRodSpark_MakeEffect(&pos, -lr);
        break;

    case Ef_Kind_DamageFlySparks:
        p_effect = efParticle_DamageSpawnSparks_MakeEffect(&pos, lr);
        break;

    case Ef_Kind_DamageFlySparksReverse:
        p_effect = efParticle_DamageSpawnSparks_MakeEffect(&pos, -lr);
        break;

    case Ef_Kind_DamageFlyMDust:
        p_effect = efParticle_DamageSpawnMDust_MakeEffect(&pos, lr);
        break;

    case Ef_Kind_DamageFlyMDustReverse:
        p_effect = efParticle_DamageSpawnMDust_MakeEffect(&pos, -lr);
        break;

    case Ef_Kind_SparkleWhite:
        p_effect = efParticle_SparkleWhite_MakeEffect(&pos);
        break;

    case Ef_Kind_SparkleWhiteMultiExplode:
        p_effect = efParticle_SparkleWhiteMultiExplode_MakeEffect(&pos);
        break;

    case Ef_Kind_SparkleWhiteMulti:
        p_effect = efParticle_SparkleWhiteMulti_MakeEffect(&pos);
        break;

    case Ef_Kind_SparkleWhiteScale:
        p_effect = efParticle_SparkleWhiteScale_MakeEffect(&pos, 1.0F);
        break;

    case Ef_Kind_QuakeM0:
        if (fp->status_info.pl_kind != Pl_Kind_Result)
        {
            p_effect = efParticle_Quake_MakeEffect(0);
        }
        break;

    case Ef_Kind_QuakeM1:
        if (fp->status_info.pl_kind != Pl_Kind_Result)
        {
            p_effect = efParticle_Quake_MakeEffect(1);
        }
        break;

    case Ef_Kind_QuakeM2:
        if (fp->status_info.pl_kind != Pl_Kind_Result)
        {
            p_effect = efParticle_Quake_MakeEffect(2);
        }
        break;

    case Ef_Kind_Psionic:
        p_effect = efParticle_Psionic_MakeEffect(&pos);
        break;

    case Ef_Kind_FlashSmall:
        p_effect = efParticle_FlashSmall_MakeEffect(&pos);
        break;

    case Ef_Kind_FlashMiddle:
        p_effect = efParticle_FlashMiddle_MakeEffect(&pos);
        break;

    case Ef_Kind_FlashLarge:
        p_effect = efParticle_FlashLarge_MakeEffect(&pos);
        break;

    case Ef_Kind_FuraSparkle:
        p_effect = efParticle_FuraSparkle_MakeEffect(&pos);
        break;

    case 0x36:
        p_effect = func_ovl2_80102018(&pos);
        break;

    case Ef_Kind_CrashTheGame:
        p_effect = func_ovl2_8010183C(&pos, arg7);
        break;

    case Ef_Kind_ChargeSparkle:
        efpart = efParticle_SparkleWhiteScale_MakeEffect(&pos, 0.7F);

        if (efpart != NULL)
        {
            efpart->color1.a = 0xC0;
        }
        break;

    case Ef_Kind_ThunderHit:
        p_effect = efParticle_ThunderHit_MakeEffect(&pos);
        break;

    case Ef_Kind_Ripple:
        p_effect = efGenerator_Ripple_MakeEffect(&pos);
        break;

    case 0x4C:
        p_effect = func_ovl2_801031E0(&pos);
        break;

    case 0x4D:
        p_effect = func_ovl2_80103280(&pos);
        break;

    case 0x4A:
        p_effect = func_ovl2_80102E90(&pos);
        break;

    case 0x2E:
        efParticle_BoxSmash_MakeEffect(&pos);
        break;

    case 0x5A:
        func_ovl2_801039D4(&pos);
        break;

    case 0x5B:
        func_ovl2_801041A0(&pos);
        break;

    case 0x57:
        if (fp->ft_kind == Ft_Kind_Yoshi)
        {
            func_ovl2_80103150(fighter_gobj);
        }
        break;

    case Ef_Kind_FireSpark:
        efParticle_FireSpark_MakeEffect(fighter_gobj);
        break;
    }
    return p_effect;
}

// 0x800EB39C - Check to spawn Kirby star GFX on stage collision
void ftKirby_MapCheckSpawnStarGFX(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    u16 coll_mask = (fp->coll_data.coll_mask_prev ^ fp->coll_data.coll_mask) & fp->coll_data.coll_mask & MPCOLL_MASK_MAIN_ALL;
    Vec3f pos;

    if (coll_mask)
    {
        if (coll_mask & MPCOLL_MASK_RWALL)
        {
            pos = DObjGetStruct(fighter_gobj)->translate;

            pos.x += fp->coll_data.object_coll.width;
            pos.y += fp->coll_data.object_coll.center;

            func_ovl2_80102018(&pos);
        }
        if (coll_mask & MPCOLL_MASK_LWALL)
        {
            pos = DObjGetStruct(fighter_gobj)->translate;

            pos.x -= fp->coll_data.object_coll.width;
            pos.y += fp->coll_data.object_coll.center;

            func_ovl2_80102018(&pos);
        }
        if (coll_mask & MPCOLL_MASK_CEIL)
        {
            pos = DObjGetStruct(fighter_gobj)->translate;

            pos.y += fp->coll_data.object_coll.top;

            func_ovl2_80102018(&pos);
        }
        if (coll_mask & MPCOLL_MASK_GROUND)
        {
            pos = DObjGetStruct(fighter_gobj)->translate;

            pos.y += fp->coll_data.object_coll.bottom;

            func_ovl2_80102018(&pos);
        }
    }
}

void func_ovl2_800EB528(DObj *arg0)
{
    DObj *temp_a1;
    DObj *temp_a1_2;
    DObj *temp_v1_2;
    DObj *temp_v1_3;
    DObj *temp_v1_4;
    DObj *temp_v1_6;
    DObj *temp_v1_7;
    DObj *temp_v1_8;
    DObj *var_v0;
    DObj *var_v0_2;
    UnkDObjData *temp_v1;
    UnkDObjData *temp_v1_5;

    var_v0 = arg0;
    temp_v1 = arg0->unk_0x84;

    if (temp_v1 != NULL)
    {
        if (temp_v1->unk_dobjdata_0x0 == 1)
        {
            temp_v1->unk_dobjdata_0x0 = 0;
        }
        temp_v1->unk_dobjdata_0x4 = 0;
    }
    temp_v1_2 = arg0->next;

    if (temp_v1_2 != NULL)
    {
        var_v0_2 = temp_v1_2;
    }
    else if (var_v0 == arg0)
    {
        var_v0_2 = NULL;
    }
    else
    {
        temp_v1_3 = arg0->unk_0x8;

        if (temp_v1_3 != NULL)
        {
            var_v0_2 = temp_v1_3;
        }
        else
        {
        loop_10:
            temp_v1_4 = var_v0->prev;

            if (arg0 == temp_v1_4)
            {
                var_v0_2 = NULL;
            }
            else
            {
                temp_a1 = temp_v1_4->unk_0x8;
                if (temp_a1 != NULL)
                {
                    var_v0_2 = temp_a1;
                }
                else
                {
                    var_v0 = temp_v1_4;

                    goto loop_10;
                }
            }
        }
    }
    while (var_v0_2 != NULL)
    {
        temp_v1_5 = var_v0_2->unk_0x84;

        if (temp_v1_5 != NULL)
        {
            temp_v1_5->unk_dobjdata_0x4 = 0;
        }
        temp_v1_6 = var_v0_2->next;

        if (temp_v1_6 != NULL)
        {
            var_v0_2 = temp_v1_6;
        }
        else if (var_v0_2 == arg0)
        {
            var_v0_2 = NULL;
        }
        else
        {
            temp_v1_7 = var_v0_2->unk_0x8;

            if (temp_v1_7 != NULL)
            {
                var_v0_2 = temp_v1_7;
            }
            else
            {
            loop_24:
                temp_v1_8 = var_v0_2->prev;

                if (arg0 == temp_v1_8)
                {
                    var_v0_2 = NULL;
                }
                else
                {
                    temp_a1_2 = temp_v1_8->unk_0x8;

                    if (temp_a1_2 != NULL)
                    {
                        var_v0_2 = temp_a1_2;
                    }
                    else
                    {
                        var_v0_2 = temp_v1_8;

                        goto loop_24;
                    }
                }
            }
        }
    }
}

void func_ovl2_800EB648(DObj *arg0)
{
    DObj *temp_a1;
    DObj *temp_v1_2;
    DObj *temp_v1_3;
    DObj *temp_v1_4;
    DObj *var_v0;
    UnkDObjData *temp_v1;

    var_v0 = arg0;

    while (var_v0 != NULL)
    {

        temp_v1 = var_v0->unk_0x84;

        if (temp_v1 != NULL)
        {
            if (temp_v1->unk_dobjdata_0x0 == 1)
            {
                temp_v1->unk_dobjdata_0x0 = 0;
            }
            temp_v1->unk_dobjdata_0x4 = 0;
        }
        temp_v1_2 = var_v0->next;

        if (temp_v1_2 != NULL)
        {
            var_v0 = temp_v1_2;
        }
        else if (var_v0 == arg0)
        {
            var_v0 = NULL;
        }
        else
        {
            temp_v1_3 = var_v0->unk_0x8;

            if (temp_v1_3 != NULL)
            {
                var_v0 = temp_v1_3;
            }
            else
            {
            loop_12:
                temp_v1_4 = var_v0->prev;

                if (arg0 == temp_v1_4)
                {
                    var_v0 = NULL;
                }
                else
                {
                    temp_a1 = temp_v1_4->unk_0x8;

                    if (temp_a1 != NULL)
                    {
                        var_v0 = temp_a1;
                    }
                    else
                    {
                        var_v0 = temp_v1_4;

                        goto loop_12;
                    }
                }
            }
        }
    }
}

void func_ovl2_800EB6EC(ftStruct *fp)
{
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    UnkDObjData *temp_s0;
    s32 i;
    ftPartsUnkIndexTable *temp_v0;
    ftAttributes *attributes = fp->attributes;

    var_s2 = 4;
    temp_v0 = attributes->unk_ftca_0x2A0;
    var_s3 = temp_v0->unk_ftpartunkindex_0x0;
    var_s4 = temp_v0->unk_ftpartunkindex_0x4;

    for (i = 4; ((var_s3 != 0) || (var_s4 != 0)); i++)
    {
        if (i < ARRAY_COUNT(fp->joint) - 1)
        {
            var_v0 = var_s3;
        }
        else var_v0 = var_s4;

        if (var_v0 & 0x80000000)
        {
            if (fp->joint[i] != NULL)
            {
                temp_s0 = fp->joint[i]->unk_0x84;

                if (temp_s0 != NULL)
                {
                    func_ovl2_800ECDE4(fp->joint[i], temp_s0, &temp_s0->filler_0x10[0]); // filler_0x10[0] is VERY fake but I don't know what this struct is
                    temp_s0->unk_dobjdata_0x0 = 3;
                    fp->joint[i]->om_mtx[0]->unk05 = 1;
                }
            }
        }
        if (i < ARRAY_COUNT(fp->joint) - 1)
        {
            var_s3 <<= 1;
        }
        else var_s4 <<= 1;
    }
}

void func_ovl2_800EB7F4(ftStruct *fp)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->joint); i++)
    {
        if (fp->joint[i] != NULL)
        {
            UnkDObjData *unk_dobj = fp->joint[i]->unk_0x84;

            if (unk_dobj != NULL)
            {
                if (unk_dobj->unk_dobjdata_0x0 == 3)
                {
                    unk_dobj->unk_dobjdata_0x0 = 0;

                    fp->joint[i]->om_mtx[0]->unk05 = 0;
                }
            }
        }
    }
}

// MISSING: func_ovl2_800EB924 through ftCommon_HammerUpdateStats; lots of new files, but I don't feel like I can do these at the moment