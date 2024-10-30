#include <ft/fighter.h>
#include <it/item.h>
#include <sc/scene.h>
#include <ft/ftcommondata.h>

extern alSoundEffect* func_800269C0_275C0(u16);

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012B7B0
u8 dFTParamShuffleFrameIndexMax[/* */] = { 4, 3 };

// 0x8012B7B4
s32 dFTParamSkeletonColAnimIDs[/* */] = 
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

// 0x8012B820
f32 dFTParamStaleTable[/* */] = 
{
    0.75F, 0.82F, 0.89F, 0.96F
};

// 0x8012B830
FTCostume dFTParamCostumeIDs[/* */] =
{
    { { 0, 1, 2, 3 }, { 0, 3, 4 }, 4 },     // Mario
    { { 0, 1, 2, 3 }, { 1, 2, 3 }, 3 },     // Fox
    { { 0, 1, 2, 3 }, { 2, 3, 4 }, 4 },     // Donkey Kong
    { { 0, 1, 2, 3 }, { 0, 4, 3 }, 4 },     // Samus
    { { 0, 1, 2, 3 }, { 3, 2, 0 }, 3 },     // Luigi
    { { 0, 2, 3, 1 }, { 2, 3, 0 }, 3 },     // Link
    { { 0, 1, 2, 3 }, { 1, 2, 0 }, 5 },     // Yoshi
    { { 0, 4, 1, 3 }, { 1, 5, 2 }, 5 },     // Captain Falcon
    { { 0, 1, 2, 3 }, { 3, 2, 4 }, 4 },     // Kirby
    { { 0, 1, 2, 3 }, { 1, 2, 3 }, 3 },     // Pikachu
    { { 0, 1, 2, 3 }, { 1, 2, 3 }, 3 },     // Jigglypuff
    { { 0, 1, 2, 3 }, { 0, 2, 3 }, 3 },     // Ness
    { { 0, 0, 0, 0 }, { 0, 0, 0 }, 0 },     // Master Hand
    { { 0, 0, 0, 0 }, { 0, 0, 0 }, 0 },     // Metal Mario
    { { 0, 0, 0, 0 }, { 0, 0, 0 }, 0 },     // Poly Mario
    { { 0, 0, 0, 0 }, { 0, 0, 0 }, 0 },     // Poly Fox
    { { 0, 0, 0, 0 }, { 0, 0, 0 }, 0 },     // Poly Donkey Kong
    { { 0, 0, 0, 0 }, { 0, 0, 0 }, 0 },     // Poly Samus
    { { 0, 0, 0, 0 }, { 0, 0, 0 }, 0 },     // Poly Luigi
    { { 0, 0, 0, 0 }, { 0, 0, 0 }, 0 },     // Poly Link
    { { 0, 0, 0, 0 }, { 0, 0, 0 }, 0 },     // Poly Yoshi
    { { 0, 0, 0, 0 }, { 0, 0, 0 }, 0 },     // Poly Captain Falcon
    { { 0, 0, 0, 0 }, { 0, 0, 0 }, 0 },     // Poly Kirby
    { { 0, 0, 0, 0 }, { 0, 0, 0 }, 0 },     // Poly Pikachu
    { { 0, 0, 0, 0 }, { 0, 0, 0 }, 0 },     // Poly Jigglypuff
    { { 0, 0, 0, 0 }, { 0, 0, 0 }, 0 },     // Poly Ness
    { { 0, 1, 2, 3 }, { 2, 3, 4 }, 4 }      // Giant Donkey Kong
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800E7AD0 - Get length of special music in seconds
s32 ftParamGetItemMusicLength(u32 bgm_id)
{
    switch (bgm_id)
    {
    case nSYAudioBGMStar:
        return ITHAMMER_BGM_DURATION;

    case nSYAudioBGMHammer:
        return ITSTAR_BGM_DURATION;

    default:
        return 0;
    }
}

// 0x800E7AFC
void ftParamTryPlayItemMusic(u32 bgm_id)
{
    if (ftParamGetItemMusicLength(bgm_id) >= ftParamGetItemMusicLength(gMPCollisionBGMCurrent))
    {
        auPlaySong(0, bgm_id);

        gMPCollisionBGMCurrent = bgm_id;
    }
}

// 0x800E7B54
void ftParamTryUpdateItemMusic(void)
{
    u32 bgm_play = gMPCollisionBGMDefault;
    s32 length = ftParamGetItemMusicLength(bgm_play);
    GObj *fighter_gobj = gGCCommonLinks[nGCCommonLinkIDFighter];

    while (fighter_gobj != NULL)
    {
        FTStruct *fp = ftGetStruct(fighter_gobj);
        u32 bgm_id = gMPCollisionBGMDefault;
        s32 length_new;

        if ((fp->item_gobj != NULL) && (itGetStruct(fp->item_gobj)->kind == nITKindHammer))
        {
            bgm_id = nSYAudioBGMHammer;
        }
        if (fp->star_invincible_tics > ITSTAR_WARN_BEGIN_FRAME)
        {
            bgm_id = nSYAudioBGMStar;
        }
        length_new = ftParamGetItemMusicLength(bgm_id);

        if (length < length_new)
        {
            length = length_new;
            bgm_play = bgm_id;
        }
        fighter_gobj = fighter_gobj->link_next;
    }
    if (bgm_play != gMPCollisionBGMCurrent)
    {
        auPlaySong(0, bgm_play);
        gMPCollisionBGMCurrent = bgm_play;
    }
}

// 0x800E7C4C
void ftParamInitPlayerBattleStats(s32 player, GObj *fighter_gobj)
{
    s32 i;

    gBattleState->players[player].placement = 0;
    gBattleState->players[player].falls = gBattleState->players[player].score = 0;

    for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
    {
        gBattleState->players[player].total_ko_player[i] = 0;
        gBattleState->players[player].total_damage_player[i] = 0;
    }
    gBattleState->players[player].unk_pblock_0x28 = gBattleState->players[player].unk_pblock_0x2C = gBattleState->players[player].total_self_destruct = 0;
    gBattleState->players[player].total_damage_dealt = gBattleState->players[player].total_damage_all = 0;
    gBattleState->players[player].combo_damage_foe = gBattleState->players[player].combo_count_foe = 0;

    gBattleState->players[player].fighter_gobj = fighter_gobj;

    gBattleState->players[player].stale_id = 0;

    for (i = 0; i < ARRAY_COUNT(gBattleState->players[i].stale_info); i++)
    {
        gBattleState->players[player].stale_info[i].attack_id = 0;
        gBattleState->players[player].stale_info[i].motion_count = 0;
    }
}

// 0x800E7ED4 - Get fighter GObj with player number
GObj* ftParamGetPlayerNumGObj(s32 player_number)
{
    GObj *fighter_gobj = gGCCommonLinks[nGCCommonLinkIDFighter];

    while (fighter_gobj != NULL)
    {
        FTStruct *fp = ftGetStruct(fighter_gobj);

        if (player_number == fp->player_number)
        {
            return fighter_gobj;
        }
        else fighter_gobj = fighter_gobj->link_next;
    }
    return NULL;
}

// 0x800E7F14
void ftParamLockPlayerControl(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    fp->input.pl.button_hold = fp->input.pl.button_tap = fp->input.cp.button_inputs = 0;

    fp->input.pl.stick_range.x = fp->input.pl.stick_range.y = fp->input.pl.stick_prev.x = fp->input.pl.stick_prev.y = fp->input.cp.stick_range.x = fp->input.cp.stick_range.y = 0;

    fp->tap_stick_x = fp->tap_stick_y = fp->hold_stick_x = fp->hold_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;

    fp->is_disable_control = TRUE;
}

// 0x800E7F68
void ftParamUnlockPlayerControl(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_disable_control = FALSE;
}

// 0x800E7F7C
void ftParamSetPlayerTagWait(GObj *fighter_gobj, s32 playertag_wait)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    fp->playertag_wait = playertag_wait;
}

// 0x800E7F88
void ftParamSetDamageShuffle(FTStruct *fp, sb32 is_electric, s32 damage, s32 status_id, f32 hitlag_mul)
{
    s32 shuffle_tics = ftParamGetHitLag(damage, status_id, hitlag_mul) * FTCOMMON_DAMAGE_SHUFFLE_MUL;

    fp->shuffle_tics = shuffle_tics;
    fp->shuffle_frame_index = 0;
    fp->is_shuffle_electric = is_electric;
    fp->shuffle_index_max = dFTParamShuffleFrameIndexMax[is_electric];
}

// 0x800E8000
f32 ftParamGetStickAngleRads(FTStruct *fp)
{
    return atan2f(fp->input.pl.stick_range.y, ABS(fp->input.pl.stick_range.x));
}

// 0x800E8044
void ftParamSetStickLR(FTStruct *fp)
{
    fp->lr = (fp->input.pl.stick_range.x >= 0) ? +1 : -1;
}

// 0x800E806C
void ftParamMakeRumble(FTStruct *fp, s32 rumble_id, s32 length)
{
    if (fp->pkind == nFTPlayerKindMan)
    {
        gmRumbleSetPlayerRumbleParams(fp->player, rumble_id, length);
    }
}

// 0x800E8098
void ftParamSetCaptureImmuneMask(FTStruct *fp, u8 capture_immune_mask)
{
    fp->capture_immune_mask = capture_immune_mask;
}

// 0x800E80A4
void ftParamSetCatchParams(FTStruct *fp, u8 catch_mask, void (*proc_catch)(GObj*), void (*proc_capture)(GObj*, GObj*))
{
    fp->is_catchstatus = TRUE;

    fp->catch_mask = catch_mask;
    fp->proc_catch = proc_catch;
    fp->proc_capture = proc_capture;
}

// 0x800E80C4 - Fetch data of throwing fighter: character ID, port ID, team, player number and GObj pointer
void ftParamSetThrowParams(FTStruct *this_fp, GObj *throw_gobj)
{
    FTStruct *throw_fp = ftGetStruct(throw_gobj); // Fighter throwing this player

    this_fp->throw_gobj = throw_gobj;
    this_fp->throw_fkind = throw_fp->fkind;
    this_fp->throw_player = throw_fp->player;
    this_fp->throw_player_number = throw_fp->player_number;
    this_fp->throw_team = throw_fp->team;
}

// 0x800E80F0
void ftParamPlayVoice(FTStruct *fp, u16 voice_id)
{
    fp->p_voice = func_800269C0_275C0(voice_id);

    fp->voice_id = (fp->p_voice != NULL) ? fp->p_voice->sfx_id : 0;
}

// 0x800E8138
void ftParamStopVoice(FTStruct *fp)
{
    if (fp->p_voice != NULL)
    {
        if ((fp->p_voice->sfx_id != 0) && (fp->p_voice->sfx_id == fp->voice_id))
        {
            func_80026738_27338(fp->p_voice);
        }
    }
    fp->p_voice = NULL;
    fp->voice_id = 0;
}

// 0x800E8190
void ftParamPlayLoopSFX(FTStruct *fp, u16 sfx_id)
{
    if (fp->p_loop_sfx == NULL)
    {
        fp->p_loop_sfx = func_800269C0_275C0(sfx_id);

        fp->loop_sfx_id = (fp->p_loop_sfx != NULL) ? fp->p_loop_sfx->sfx_id : 0;
    }
}

// 0x800E81E4
void ftParamStopLoopSFX(FTStruct *fp)
{
    if (fp->p_loop_sfx != NULL)
    {
        if ((fp->p_loop_sfx->sfx_id != 0) && (fp->p_loop_sfx->sfx_id == fp->loop_sfx_id))
        {
            func_80026738_27338(fp->p_loop_sfx);
        }
    }
    fp->p_loop_sfx = NULL;
    fp->loop_sfx_id = 0;
}

// 0x800E823C
void ftParamStopVoiceRunProcDamage(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    ftParamStopVoice(fp);

    if (fp->proc_damage != NULL)
    {
        fp->proc_damage(fighter_gobj);
    }
}

// Update render priority? Runs when a fighter gets Screen KO'd
void ftParamMoveDLLink(GObj *fighter_gobj, u8 dl_link)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    gcMoveGObjDL(fighter_gobj, dl_link, GOBJ_DLLINKORDER_DEFAULT);

    fp->dl_link = dl_link;
}

// 0x800E82B8
void ftParamUpdateAnimKeys(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    DObj **p_joint = &fp->joints[nFTPartsJointTopN];
    DObj *joint;
    MObj *mobj;
    FTParts *parts;
    f32 anim_wait_bak;
    s32 i;

    if (fp->motion_id != -2)
    {
        if (fp->is_have_translate_scale)
        {
            Vec3f *translate_scales = fp->attr->translate_scales;

            for (i = 0; i < ARRAY_COUNT(fp->joints); i++, p_joint++, translate_scales++)
            {
                joint = *p_joint;

                if (joint != NULL)
                {
                    if (fp->anim_desc.flags.is_anim_joint)
                    {
                        gcParseDObjAnimJoint(joint);
                    }
                    else ftAnimParseDObjFigatree(joint);
                    
                    lbCommonPlayTranslateScaledDObjAnim(joint, translate_scales);

                    mobj = joint->mobj;

                    while (mobj != NULL)
                    {
                        gcParseMObjMatAnimJoint(mobj);
                        gcPlayMObjMatAnim(mobj);

                        mobj = mobj->next;
                    }
                }
            }
        }
        else for (i = 0; i < ARRAY_COUNT(fp->joints); i++, p_joint++)
        {
            joint = *p_joint;

            if (joint != NULL)
            {
                if (fp->anim_desc.flags.is_anim_joint)
                {
                    gcParseDObjAnimJoint(joint);
                }
                else ftAnimParseDObjFigatree(joint);
                
                gcPlayDObjAnim(joint);

                mobj = joint->mobj;

                while (mobj != NULL)
                {
                    gcParseMObjMatAnimJoint(mobj);
                    gcPlayMObjMatAnim(mobj);

                    mobj = mobj->next;
                }
            }
        }
    }
    else if (fp->is_have_translate_scale)
    {
        Vec3f *translate_scales = fp->attr->translate_scales;

        for (i = 0; i < ARRAY_COUNT(fp->joints); i++, p_joint++, translate_scales++)
        {
            joint = *p_joint;

            if (joint != NULL)
            {
                parts = ftGetParts(joint);

                if ((parts != NULL) && (parts->is_have_anim != FALSE))
                {
                    anim_wait_bak = joint->anim_wait;

                    joint->anim_wait = AOBJ_ANIM_END;

                    lbCommonPlayTranslateScaledDObjAnim(joint, translate_scales);

                    joint->anim_wait = anim_wait_bak;
                }
            }
        }
    }
    else for (i = 0; i < ARRAY_COUNT(fp->joints); i++, p_joint++)
    {
        joint = *p_joint;

        if (joint != NULL)
        {
            parts = ftGetParts(joint);

            if ((parts != NULL) && (parts->is_have_anim != FALSE))
            {
                anim_wait_bak = joint->anim_wait;

                joint->anim_wait = AOBJ_ANIM_END;

                gcPlayDObjAnim(joint);

                joint->anim_wait = anim_wait_bak;
            }
        }
    }
}

// 0x800E8518
void ftParamClearAtkAll(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->atk_colls); i++)
    {
        FTAttackColl *ft_atk_coll = &fp->atk_colls[i];

        ft_atk_coll->atk_state = nGMAttackStateOff;
    }
    fp->is_atk_active = FALSE;
}

// 0x800E853C
void ftParamClearAtkRecordID(FTStruct *fp, s32 atk_id)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->atk_colls[atk_id].atk_records); i++)
    {
        GMAttackRecord *record = &fp->atk_colls[atk_id].atk_records[i];

        record->victim_gobj = NULL;

        record->victim_flags.is_interact_hurt = record->victim_flags.is_interact_shield = FALSE;

        record->victim_flags.timer_rehit = 0;

        record->victim_flags.group_id = 7;
    }
}

// 0x800E8668
void ftParamRefreshAtkID(GObj *fighter_gobj, s32 atk_id)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    fp->atk_colls[atk_id].atk_state = nGMAttackStateNew;

    fp->is_atk_active = TRUE;

    ftParamClearAtkRecordID(fp, atk_id);
}

// 0x800E86B4
void ftParamSetCollDataVelPush(GObj *fighter_gobj, Vec3f *vel_push)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    fp->coll_data.vel_push = *vel_push;
}

// 0x800E86D4
s32 ftParamGetJointID(FTStruct *fp, s32 joint_id)
{
    if (joint_id == -2)
    {
        joint_id = fp->attr->joint_itemlight_id;
    }
    return joint_id;
}

// 0x800E86F0
void ftParamLinkResetShieldModelParts(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->fkind == nFTKindLink) || (fp->fkind == nFTKindNLink))
    {
        ftParamSetModelPartDefaultID(fighter_gobj, 0x15, 0);
        ftParamSetModelPartDefaultID(fighter_gobj, 0x13, -1);
    }
}

// 0x800E8744
void ftParamSetHammerParams(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->fkind == nFTKindLink) || (fp->fkind == nFTKindNLink))
    {
        ftParamSetModelPartDefaultID(fighter_gobj, 0x15, -1);
        ftParamSetModelPartDefaultID(fighter_gobj, 0x13, 0);
    }
    ftParamTryUpdateItemMusic();
}

// 0x800E87A0
void ftParamSetHitStatusColAnim(GObj *fighter_gobj, s32 hitstatus)
{
    switch (hitstatus)
    {
    case nGMHitStatusNormal:
        ftParamCheckSetFighterColAnimID(fighter_gobj, 2, 0);
        break;

    case nGMHitStatusInvincible:
        ftParamCheckSetFighterColAnimID(fighter_gobj, 4, 0);
        break;

    case nGMHitStatusIntangible:
        ftParamCheckSetFighterColAnimID(fighter_gobj, 3, 0);
        break;
    }
}

// 0x800E880C
void ftParamSetHitStatusPartAll(GObj *fighter_gobj, s32 hitstatus)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->dmg_colls); i++)
    {
        FTDamageColl *dmg_coll = &fp->dmg_colls[i];

        if (dmg_coll->hitstatus != nGMHitStatusNone)
        {
            dmg_coll->hitstatus = hitstatus;
        }
    }
    fp->is_hitstatus_nodamage = (hitstatus == nGMHitStatusNormal) ? FALSE : TRUE;

    ftParamSetHitStatusColAnim(fighter_gobj, hitstatus);
}

// 0x800E8884
void ftParamSetHitStatusPartID(GObj *fighter_gobj, s32 joint_id, s32 hitstatus)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->dmg_colls); i++)
    {
        FTDamageColl *dmg_coll = &fp->dmg_colls[i];

        if ((dmg_coll->hitstatus != nGMHitStatusNone) && (joint_id == dmg_coll->joint_id))
        {
            dmg_coll->hitstatus = hitstatus;

            if (dmg_coll->hitstatus != nGMHitStatusNormal)
            {
                fp->is_hitstatus_nodamage = TRUE;
            }
            /*
             * This approach means if there are multiple hurtboxes on the same bone/joint ID, only the first one is checked
             * Same issue as Melee with Mr. Game & Watch / Fox's nose hurtboxes
             */

            return;
        }
    }
}

// 0x800E8A24
void ftParamSetHitStatusAll(GObj *fighter_gobj, s32 hitstatus)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    fp->hitstatus = hitstatus;

    ftParamSetHitStatusColAnim(fighter_gobj, hitstatus);
}

// 0x800E8A48 - Get most effective bone collision state
s32 ftParamGetBestHitStatusPart(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    s32 hitstatus_default = fp->hitstatus;
    s32 hitstatus_best = fp->dmg_colls[0].hitstatus;
    s32 i;

    if (hitstatus_best != nGMHitStatusNormal)
    {
        for (i = 1; i < ARRAY_COUNT(fp->dmg_colls); i++)
        {
            FTDamageColl *dmg_coll = &fp->dmg_colls[i];

            if (dmg_coll->hitstatus == nGMHitStatusNone) 
            {
                break;
            }
            else if (hitstatus_best > dmg_coll->hitstatus)
            {
                hitstatus_best = dmg_coll->hitstatus;
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
s32 ftParamGetBestHitStatusAll(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    s32 hitstatus_best = ftParamGetBestHitStatusPart(fighter_gobj);

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
void ftParamResetFighterDamagePartAll(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    FTDamageColl *dmg_coll = &fp->dmg_colls[0];
    FTDamageCollDesc *dmg_coll_desc = &fp->attr->dmg_colls_desc[0];
    s32 i;

    for (i = 0; i < FTPARTS_HURT_NUM_MAX; i++, dmg_coll++, dmg_coll_desc++)
    {
        if (dmg_coll_desc->joint_id != -1)
        {
            dmg_coll->joint_id = dmg_coll_desc->joint_id;
            dmg_coll->joint = fp->joints[dmg_coll->joint_id];

            dmg_coll->placement = dmg_coll_desc->placement;
            dmg_coll->is_grabbable = dmg_coll_desc->is_grabbable;

            dmg_coll->offset = dmg_coll_desc->offset;
            dmg_coll->size = dmg_coll_desc->size;

            dmg_coll->size.x *= 0.5F;
            dmg_coll->size.y *= 0.5F;
            dmg_coll->size.z *= 0.5F;
        }
    }
    fp->is_hurtbox_modify = FALSE;
}

// 0x800E8BC8
void ftParamModifyFighterDamagePartID(GObj *fighter_gobj, s32 joint_id, Vec3f *offset, Vec3f *size)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->dmg_colls); i++)
    {
        FTDamageColl *dmg_coll = &fp->dmg_colls[i];

        if (joint_id == dmg_coll->joint_id)
        {
            dmg_coll->offset = *offset;
            dmg_coll->size = *size;

            fp->dmg_colls[i].size.x *= 0.5F;
            fp->dmg_colls[i].size.y *= 0.5F;
            fp->dmg_colls[i].size.z *= 0.5F;

            fp->is_hurtbox_modify = TRUE;

            return; // The same oversight as ftParamSetHitStatusPartID except this time on hurtbox offset and size
        }
    }
}

// 0x800E8C70
void ftParamSetModelPartID(GObj *fighter_gobj, s32 joint_id, s32 modelpart_id)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    FTAttributes *attr = fp->attr;
    FTCommonPartContainer *commonparts_container;
    FTModelPart *modelpart;
    FTModelPartStatus *modelpart_status;
    FTParts *parts;
    DObj *joint;
    s32 detail_id;
    AObjEvent32 **costume_matanim_joints;
    MObjSub **mobjsubs;

    joint = fp->joints[joint_id];
    commonparts_container = attr->commonparts_container;
    modelpart_status = &fp->modelpart_status[joint_id - nFTPartsJointCommonStart];
    parts = ftGetParts(joint);

    if (joint != NULL)
    {
        if (modelpart_status->modelpart_id_current != modelpart_id)
        {
            modelpart_status->modelpart_id_current = modelpart_id;

            gcRemoveMObjAll(joint);

            if (modelpart_id != -1)
            {
                if (fp->attr->modelparts_container->modelparts_desc[joint_id - nFTPartsJointCommonStart] != NULL)
                {
                    modelpart = &fp->attr->modelparts_container->modelparts_desc[joint_id - nFTPartsJointCommonStart]->modelparts[modelpart_id][fp->detail_current - nFTPartsDetailStart];

                    joint->display_list = modelpart->display_list;

                    lbCommonAddMObjForFighterPartsDObj(joint, modelpart->mobjsubs, modelpart->costume_matanim_joints, modelpart->main_matanim_joints, fp->costume);

                    parts->flags = modelpart->flags;
                }
                else
                {
                    if ((fp->detail_current == nFTPartsDetailHigh) || (commonparts_container->commonparts[1].dobjdesc[joint_id - nFTPartsJointCommonStart].display_list == NULL))
                    {
                        detail_id = 0;
                    }
                    else detail_id = 1;

                    joint->display_list = commonparts_container->commonparts[detail_id].dobjdesc[joint_id - nFTPartsJointCommonStart].display_list;

                    if (commonparts_container->commonparts[detail_id].p_mobjsubs != NULL)
                    {
                        mobjsubs = commonparts_container->commonparts[detail_id].p_mobjsubs[joint_id - nFTPartsJointCommonStart];
                    }
                    else mobjsubs = NULL;

                    if (commonparts_container->commonparts[detail_id].p_costume_matanim_joints != NULL)
                    {
                        costume_matanim_joints = commonparts_container->commonparts[detail_id].p_costume_matanim_joints[joint_id - nFTPartsJointCommonStart];
                    }
                    else costume_matanim_joints = NULL;

                    lbCommonAddMObjForFighterPartsDObj(joint, mobjsubs, costume_matanim_joints, NULL, fp->costume);

                    parts->flags = commonparts_container->commonparts[detail_id].flags;
                }
            }
            else joint->display_list = NULL;

            fp->is_modelpart_modify = TRUE;
        }
    }
}

// 0x800E8EAC
void ftParamSetModelPartDefaultID(GObj *fighter_gobj, s32 joint_id, s32 modelpart_id)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    fp->modelpart_status[joint_id - nFTPartsJointCommonStart].modelpart_id_default = modelpart_id;

    fp->is_modelpart_modify = TRUE;
}

// 0x800E8ECC
void ftParamResetModelPartAll(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    FTAttributes *attr = fp->attr;
    FTCommonPartContainer *commonparts_container;
    FTModelPart *modelpart;
    FTModelPartStatus *modelpart_status;
    FTParts *parts;
    DObj *joint;
    s32 detail_id;
    AObjEvent32 **costume_matanim_joints;
    MObjSub **mobjsubs;
    s32 i;

    commonparts_container = attr->commonparts_container;

    for (i = 0; i < ARRAY_COUNT(fp->joints) - nFTPartsJointCommonStart; i++)
    {
        joint = fp->joints[i + nFTPartsJointCommonStart];

        if (joint != NULL)
        {
            modelpart_status = &fp->modelpart_status[i];

            if (modelpart_status->modelpart_id_current != modelpart_status->modelpart_id_default)
            {
                modelpart_status->modelpart_id_current = modelpart_status->modelpart_id_default;

                gcRemoveMObjAll(joint);

                if (modelpart_status->modelpart_id_current == -1)
                {
                    joint->display_list = NULL;
                }
                else
                {
                    parts = ftGetParts(joint);

                    if (attr->modelparts_container->modelparts_desc[i] != NULL)
                    {
                        modelpart = &attr->modelparts_container->modelparts_desc[i]->modelparts[modelpart_status->modelpart_id_current][fp->detail_current - nFTPartsDetailStart];

                        joint->display_list = modelpart->display_list;

                        lbCommonAddMObjForFighterPartsDObj(joint, modelpart->mobjsubs, modelpart->costume_matanim_joints, modelpart->main_matanim_joints, fp->costume);

                        parts->flags = modelpart->flags;
                    }
                    else
                    {
                        if ((fp->detail_current == nFTPartsDetailHigh) || (commonparts_container->commonparts[1].dobjdesc[i].display_list == NULL))
                        {
                            detail_id = 0;
                        }
                        else detail_id = 1;

                        joint->display_list = commonparts_container->commonparts[detail_id].dobjdesc[i].display_list;

                        if (commonparts_container->commonparts[detail_id].p_mobjsubs != NULL)
                        {
                            mobjsubs = commonparts_container->commonparts[detail_id].p_mobjsubs[i];
                        }
                        else mobjsubs = NULL;

                        if (commonparts_container->commonparts[detail_id].p_costume_matanim_joints != NULL)
                        {
                            costume_matanim_joints = commonparts_container->commonparts[detail_id].p_costume_matanim_joints[i];
                        }
                        else costume_matanim_joints = NULL;

                        lbCommonAddMObjForFighterPartsDObj(joint, mobjsubs, costume_matanim_joints, NULL, fp->costume);

                        parts->flags = commonparts_container->commonparts[detail_id].flags;
                    }
                }
            }
        }
    }
    fp->is_modelpart_modify = FALSE;
}

// 0x800E90F8
void ftParamHideModelPartAll(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = nFTPartsJointCommonStart; i < ARRAY_COUNT(fp->joints); i++)
    {
        DObj *joint = fp->joints[i];

        if (joint != NULL)
        {
            if (fp->modelpart_status[i - nFTPartsJointCommonStart].modelpart_id_current == -1) 
            {
                continue;
            }
            else
            {
                fp->modelpart_status[i - nFTPartsJointCommonStart].modelpart_id_current = -1;

                gcRemoveMObjAll(joint);

                joint->display_list = NULL;
            }
        }
    }
    fp->is_modelpart_modify = TRUE;
}

// 0x800E9198
void ftParamSetModelPartDetailAll(GObj *fighter_gobj, u8 detail)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    if (detail != fp->detail_current)
    {
        fp->detail_current = detail;

        for (i = nFTPartsJointCommonStart; i < ARRAY_COUNT(fp->joints); i++)
        {
            DObj *joint = fp->joints[i];

            if (joint != NULL)
            {
                s32 modelpart_id = fp->modelpart_status[i - nFTPartsJointCommonStart].modelpart_id_current;

                if (modelpart_id == -1) 
                {
                    continue;
                }
                else
                {
                    fp->modelpart_status[i - nFTPartsJointCommonStart].modelpart_id_current = -1;

                    ftParamSetModelPartID(fighter_gobj, i, modelpart_id);
                }
            }
        }
        ftParamInitTexturePartAll(fighter_gobj);
    }
}

// 0x800E9248
void ftParamInitModelTexturePartsAll(GObj *fighter_gobj, s32 costume, s32 shade)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    FTAttributes *attr = fp->attr;
    DObj *joint;
    GObj *parts_gobj;
    FTParts *parts;
    FTCommonPartContainer *commonparts_container;
    FTMesh *ft_mesh;
    FTModelPartStatus *modelpart_status;
    s32 detail_id;
    FTModelPart *modelpart;
    MObjSub **mobjsubs;
    AObjEvent32 **costume_matanim_joints;
    s32 i;

    commonparts_container = attr->commonparts_container;
    ft_mesh = attr->mesh;

    for (i = 0; i < ARRAY_COUNT(fp->joints) - nFTPartsJointCommonStart; i++)
    {
        joint = fp->joints[i + nFTPartsJointCommonStart];

        if (joint != NULL)
        {
            gcRemoveMObjAll(joint);

            modelpart_status = &fp->modelpart_status[i];

            if (modelpart_status->modelpart_id_current != -1)
            {
                if (attr->modelparts_container->modelparts_desc[i] != NULL)
                {
                    modelpart = &attr->modelparts_container->modelparts_desc[i]->modelparts[modelpart_status->modelpart_id_current][fp->detail_current - nFTPartsDetailStart];

                    lbCommonAddMObjForFighterPartsDObj(joint, modelpart->mobjsubs, modelpart->costume_matanim_joints, modelpart->main_matanim_joints, costume);
                }
                else
                {
                    if ((fp->detail_current == nFTPartsDetailHigh) || (commonparts_container->commonparts[1].dobjdesc[i].display_list == NULL))
                    {
                        detail_id = 0;
                    }
                    else detail_id = 1;

                    if (commonparts_container->commonparts[detail_id].p_mobjsubs != NULL)
                    {
                        mobjsubs = commonparts_container->commonparts[detail_id].p_mobjsubs[i];
                    }
                    else mobjsubs = NULL;

                    if (commonparts_container->commonparts[detail_id].p_costume_matanim_joints != NULL)
                    {
                        costume_matanim_joints = commonparts_container->commonparts[detail_id].p_costume_matanim_joints[i];
                    }
                    else costume_matanim_joints = NULL;

                    lbCommonAddMObjForFighterPartsDObj(joint, mobjsubs, costume_matanim_joints, NULL, costume);
                }
            }
            if ((ft_mesh != NULL) && ((i + nFTPartsJointCommonStart) == ft_mesh->joint_id))
            {
                parts = ftGetParts(joint);

                if (parts->gobj != NULL)
                {
                    gcEjectGObj(parts->gobj);

                    parts->gobj = NULL;
                }
                if (costume != 0)
                {
                    parts_gobj = gcMakeGObjSPAfter(nGCCommonKindFighterParts, NULL, nGCCommonLinkIDFighterParts, GOBJ_LINKORDER_DEFAULT);
                    parts->gobj = parts_gobj;

                    gcAddDObjForGObj(parts_gobj, ft_mesh->dl);

                    lbCommonAddMObjForFighterPartsDObj(DObjGetStruct(parts->gobj), ft_mesh->mobjsubs, ft_mesh->costume_matanim_joints, NULL, costume);
                }
            }
        }
    }
    fp->costume = costume;
    fp->shade = shade;

    fp->shade_color.r = ((attr->shade_color[fp->shade - 1].r * attr->shade_color[fp->shade - 1].a) / 0xFF);
    fp->shade_color.g = ((attr->shade_color[fp->shade - 1].g * attr->shade_color[fp->shade - 1].a) / 0xFF);
    fp->shade_color.b = ((attr->shade_color[fp->shade - 1].b * attr->shade_color[fp->shade - 1].a) / 0xFF);

    ftParamInitTexturePartAll(fighter_gobj);
}

// ...ewww...
// 0x800E9598
void ftParamInitTexturePartAll(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    FTTexturePartStatus *texturepart_status;
    FTTexturePart *texturepart;
    DObj *joint;
    MObj *mobj;
    s32 detail;
    s32 i, j;

    for (i = 0, texturepart_status = &fp->texturepart_status[i], texturepart = &fp->attr->textureparts_container->textureparts[i]; i < ARRAY_COUNT(fp->texturepart_status); i++, texturepart_status++, texturepart++)
    {
        if (texturepart_status->texture_id_current != texturepart_status->texture_id_default)
        {
            joint = fp->joints[texturepart->joint_id];
            detail = texturepart->detail[fp->detail_current - nFTPartsDetailStart];

            if (joint != NULL)
            {
                mobj = joint->mobj;

                j = 0;

            loop:
                if (mobj != NULL)
                {
                    if (j != detail)
                    {
                        mobj = mobj->next;

                        j++;

                        goto loop;
                    }
                    else mobj->texture_id_current = texturepart_status->texture_id_current;
                }
            }
        }
    }
    fp->is_texturepart_modify = TRUE;
}

// 0x800E962C
void ftParamSetTexturePartID(GObj *fighter_gobj, s32 texturepart_id, s32 texture_id)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    FTTexturePart *texturepart = &fp->attr->textureparts_container->textureparts[texturepart_id];
    s32 detail = texturepart->detail[fp->detail_current - nFTPartsDetailStart];
    DObj *joint = fp->joints[texturepart->joint_id];

    if (joint != NULL)
    {
        MObj *mobj = joint->mobj;

        s32 i = 0;

    loop:
        if (mobj != NULL)
        {
            if (i != detail)
            {
                mobj = mobj->next;

                i++;

                goto loop;
            }
            mobj->texture_id_current = texture_id;

            fp->texturepart_status[texturepart_id].texture_id_current = texture_id;

            fp->is_texturepart_modify = TRUE;
        }
    }
}

// 0x800E96B0
void ftParamResetTexturePartAll(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    FTTexturePartStatus *texturepart_status;
    FTTexturePart *texturepart;
    DObj *joint;
    MObj *mobj;
    s32 detail;
    s32 i, j;

    for (i = 0, texturepart_status = &fp->texturepart_status[i], texturepart = &fp->attr->textureparts_container->textureparts[i]; i < ARRAY_COUNT(fp->texturepart_status); i++, texturepart_status++, texturepart++)
    {
        if (texturepart_status->texture_id_current != texturepart_status->texture_id_default)
        {
            texturepart_status->texture_id_current = texturepart_status->texture_id_default;

            joint = fp->joints[texturepart->joint_id];
            detail = texturepart->detail[fp->detail_current - nFTPartsDetailStart];

            if (joint != NULL)
            {
                mobj = joint->mobj;

                j = 0;

            loop:
                if (mobj != NULL)
                {
                    if (j != detail)
                    {
                        mobj = mobj->next;

                        j++;

                        goto loop;
                    }
                    else mobj->texture_id_current = texturepart_status->texture_id_current;
                }
            }
        }
    }
    fp->is_texturepart_modify = FALSE;
}

// 0x800E974C
sb32 ftParamCheckSetColAnimID(GMColAnim *colanim, s32 colanim_id, s32 length)
{
    if (dFTCommonDataColAnimDescs[colanim_id].priority >= dFTCommonDataColAnimDescs[colanim->colanim_id].priority)
    {
        s32 i;

        colanim->colanim_id = colanim_id;
        colanim->length = length;
        colanim->cs[0].p_script = dFTCommonDataColAnimDescs[colanim_id].p_script;
        colanim->cs[0].color_event_timer = 0;
        colanim->cs[0].script_id = 0;

        for (i = 1; i < ARRAY_COUNT(colanim->cs); i++)
        {
            colanim->cs[i].p_script = NULL;
        }
        colanim->is_use_maincolor = colanim->is_use_light = colanim->is_use_blendcolor = colanim->skeleton_id = 0;

        return TRUE;
    }
    return FALSE;
}

// 0x800E9814
sb32 ftParamCheckSetFighterColAnimID(GObj *fighter_gobj, s32 colanim_id, s32 length)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    return ftParamCheckSetColAnimID(&fp->colanim, colanim_id, length);
}

// 0x800E9838
void ftParamResetColAnim(GMColAnim *colanim)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(colanim->cs); i++)
    {
        colanim->cs[i].p_script = NULL;
    }
    colanim->length = 0;
    colanim->colanim_id = 0;

    colanim->is_use_maincolor = colanim->is_use_light = colanim->is_use_blendcolor = colanim->skeleton_id = 0;
}

// 0x800E98B0
void ftParamResetFighterColAnim(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    ftParamResetColAnim(&fp->colanim);
}

// 0x800E98D4
void ftParamResetStatUpdateColAnim(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    ftParamResetFighterColAnim(fighter_gobj);

    switch (ftParamGetBestHitStatusPart(fighter_gobj))
    {
    case nGMHitStatusInvincible:
        ftParamCheckSetFighterColAnimID(fighter_gobj, 4, 0);
        break;

    case nGMHitStatusIntangible:
        ftParamCheckSetFighterColAnimID(fighter_gobj, 3, 0);
        break;
    }
    switch (fp->fkind)
    {
    case nFTKindDonkey:
    case nFTKindNDonkey:
    case nFTKindGDonkey:
        if (fp->fighter_vars.donkey.charge_level == FTDONKEY_GIANTPUNCH_CHARGE_MAX)
        {
            ftParamCheckSetFighterColAnimID(fighter_gobj, FTDONKEY_GIANTPUNCH_CHARGE_COLANIM_ID, FTDONKEY_GIANTPUNCH_CHARGE_COLANIM_LENGTH);
        }
        break;

    case nFTKindSamus:
    case nFTKindNSamus:
        if (fp->fighter_vars.samus.charge_level == FTSAMUS_CHARGE_MAX)
        {
            ftParamCheckSetFighterColAnimID(fighter_gobj, FTSAMUS_CHARGE_COLANIM_ID, FTSAMUS_CHARGE_COLANIM_LENGTH);
        }
        break;

    case nFTKindKirby:
        if ((fp->fighter_vars.kirby.copy_id == nFTKindSamus) || (fp->fighter_vars.kirby.copy_id == nFTKindNSamus))
        {
            if (fp->fighter_vars.kirby.copysamus_charge_level == FTKIRBY_COPYSAMUS_CHARGE_MAX)
            {
                ftParamCheckSetFighterColAnimID(fighter_gobj, FTKIRBY_COPYSAMUS_CHARGE_COLANIM_ID, FTKIRBY_COPYSAMUS_CHARGE_COLANIM_LENGTH);
            }
        }
        if ((fp->fighter_vars.kirby.copy_id == nFTKindDonkey) || (fp->fighter_vars.kirby.copy_id == nFTKindNDonkey) || (fp->fighter_vars.kirby.copy_id == nFTKindGDonkey))
        {
            if (fp->fighter_vars.kirby.copydonkey_charge_level == FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX)
            {
                ftParamCheckSetFighterColAnimID(fighter_gobj, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_COLANIM_ID, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_COLANIM_LENGTH);
            }
        }
        break;

    case nFTKindNess:
    case nFTKindNNess:
        if (fp->is_absorb)
        {
            ftParamCheckSetFighterColAnimID(fighter_gobj, FTNESS_PSYCHICMAGNET_COLANIM_ID, FTNESS_PSYCHICMAGNET_COLANIM_LENGTH);
        }
        break;
    }
    if (fp->damage_heal != 0)
    {
        ftParamCheckSetFighterColAnimID(fighter_gobj, 9, 0);
    }
    if (fp->star_invincible_tics != 0)
    {
        ftParamCheckSetFighterColAnimID(fighter_gobj, 0x4A, 0);
    }
    if ((fp->invincible_tics != 0) || (fp->intangible_tics != 0))
    {
        ftParamCheckSetFighterColAnimID(fighter_gobj, 0xA, 0);
    }
    if (ftHammerCheckStatusHammerAll(fighter_gobj) != 0)
    {
        ftParamCheckSetFighterColAnimID(fighter_gobj, 0x49, 0);
    }
}

// 0x800E9AF4
sb32 ftParamCheckSetSkeletonColAnimID(GObj *fighter_gobj, s32 colanim_id)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    return ftParamCheckSetFighterColAnimID(fighter_gobj, dFTParamSkeletonColAnimIDs[fp->fkind] + colanim_id, 0);
}

// 0x800E9B30 - Set automatic input sequence
void ftParamSetKey(GObj *fighter_gobj, FTKeyCommand *input_seq)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    fp->key.input_wait = 0;
    fp->key.input_seq = input_seq;
}

// 0x800E9B40 - Check if automatic input sequence exists
sb32 ftParamCheckHaveKey(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->key.input_seq != NULL)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800E9B64
void ftParamRunProcEffect(GObj *fighter_gobj, void (*proc)(GObj*, EFStruct*))
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->is_attach_effect)
    {
        GObj *effect_gobj = gGCCommonLinks[nGCCommonLinkIDEffect];

        while (effect_gobj != NULL)
        {
            EFStruct *ep = efGetStruct(effect_gobj);

            GObj *next_effect_gobj = effect_gobj->link_next;

            if ((ep != NULL) && (fighter_gobj == ep->fighter_gobj))
            {
                proc(effect_gobj, ep);
            }
            effect_gobj = next_effect_gobj;
        }
    }
}

// 0x800E9BE8
void ftParamStopEffect(GObj *effect_gobj, EFStruct *ep)
{
    LBTransform *einfo = ep->tfrm;

    if (einfo != NULL)
    {
        lbParticleEjectStructID(einfo->generator_id, ep->bank_id >> 3);
    }
    efManagerSetPrevStructAlloc(ep);
    gcEjectGObj(effect_gobj);
}

// 0x800E9C3C
void ftParamProcStopEffect(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    ftParamRunProcEffect(fighter_gobj, ftParamStopEffect);

    fp->is_attach_effect = FALSE;
}

// 0x800E9C78
void ftParamPauseEffect(GObj *effect_gobj, EFStruct *ep)
{
    ep->is_pause_effect = TRUE;
}

// 0x800E9C78
void ftParamProcPauseEffect(GObj *effect_gobj)
{
    ftParamRunProcEffect(effect_gobj, ftParamPauseEffect);
}

// 0x800E9CB0
void ftParamResumeEffect(GObj *effect_gobj, EFStruct *ep)
{
    ep->is_pause_effect = FALSE;
}

// 0x800E9CC4
void ftParamProcResumeEffect(GObj *fighter_gobj)
{
    ftParamRunProcEffect(fighter_gobj, ftParamResumeEffect);
}

// 0x800E9CE8
void ftParamVelDamageTransferGround(FTStruct *fp)
{
    if (fp->ga == nMPKineticsGround)
    {
        Vec3f *ground_angle = &fp->coll_data.ground_angle;

        if (fp->physics.vel_damage_ground == 0.0F)
        {
            fp->physics.vel_damage_ground = fp->physics.vel_damage_air.x;

            if (fp->physics.vel_damage_ground > 250.0F)
            {
                fp->physics.vel_damage_ground = 250.0F;
            }
            if (fp->physics.vel_damage_ground < -250.0F)
            {
                fp->physics.vel_damage_ground = -250.0F;
            }
            fp->physics.vel_damage_air.x = ground_angle->y * fp->physics.vel_damage_ground;
            fp->physics.vel_damage_air.y = -ground_angle->x * fp->physics.vel_damage_ground;
        }
    }
}

// 0x800E9D78
f32 ftParamGetCommonKnockback(s32 percent_damage, s32 recent_damage, s32 hit_damage, s32 knockback_weight, s32 knockback_scale, s32 knockback_base, f32 weight, s32 attack_handicap, s32 defend_handicap)
{
    f32 knockback;

    if (knockback_weight != 0)
    {
        knockback = ( ( ( ( ( ( 1 + ( 10.0F * knockback_weight * 0.05F ) ) * weight * 1.4F ) + 18.0F ) * ( knockback_scale * 0.01F ) ) + knockback_base ) * ( gBattleState->damage_ratio * 0.01F ) * dFTCommonDataHandicapTable[attack_handicap - 1][0] ) * dFTCommonDataHandicapTable[defend_handicap - 1][1];
    } 
    else 
    {
        f32 damage_add = percent_damage + recent_damage;

        knockback = ( ( ( ( ( ( ( damage_add * 0.1F ) + ( damage_add * hit_damage * 0.05F ) ) * weight * 1.4F ) + 18.0F ) * ( knockback_scale * 0.01F ) ) + knockback_base ) * ( gBattleState->damage_ratio * 0.01F ) * dFTCommonDataHandicapTable[attack_handicap - 1][0] ) * dFTCommonDataHandicapTable[defend_handicap - 1][1];
    }
    if (knockback >= 2500.0F)
    {
        knockback = 2500.0F;
    }
    if (gSaveData.error_flags & LBBACKUP_ERROR_RANDOMKNOCKBACK)
    {
        knockback = mtTrigGetRandomFloat() * 200.0F;
    }
    return knockback;
}

// 0x800E9FC0 - Used by Barrel Cannon on Kongo Jungle
f32 ftParamGetGroundHazardKnockback(s32 percent_damage, s32 recent_damage, s32 hit_damage, s32 knockback_weight, s32 knockback_scale, s32 knockback_base, f32 weight, s32 attack_handicap, s32 defend_handicap)
{
    f32 knockback;

    if (knockback_weight != 0)
    {
        knockback = ( ( ( ( ( ( 1 + ( 10.0F * knockback_weight * 0.05F ) ) * weight * 1.4F ) + 18.0F ) * ( knockback_scale * 0.01F ) ) + knockback_base ) * 1 * dFTCommonDataHandicapTable[attack_handicap - 1][0] ) * dFTCommonDataHandicapTable[defend_handicap - 1][1];
    }
    else
    {
        f32 damage_add = percent_damage + recent_damage;

        knockback = ( ( ( ( ( ( ( damage_add * 0.1F ) + ( damage_add * hit_damage * 0.05F ) ) * weight * 1.4F ) + 18.0F ) * ( knockback_scale * 0.01F ) ) + knockback_base) * 1 * dFTCommonDataHandicapTable[attack_handicap - 1][0] ) * dFTCommonDataHandicapTable[defend_handicap - 1][1];
    }
    if (knockback >= 2500.0F)
    {
        knockback = 2500.0F;
    }
    if (gSaveData.error_flags & LBBACKUP_ERROR_RANDOMKNOCKBACK)
    {
        knockback = mtTrigGetRandomFloat() * 200.0F;
    }
    return knockback;
}

// 0x800EA1B0
f32 ftParamGetHitStun(f32 knockback)
{
    return knockback / 1.875F;
}

// 0x800EA1C0
s32 ftParamGetHitLag(s32 damage, s32 status_id, f32 hitlag_mul)
{
    s32 hitlag_tics = (s32) ( (damage * (1.0F / 3.0F) ) + 5.0F ) * hitlag_mul;

    if ((status_id == nFTCommonStatusSquat) || (status_id == nFTCommonStatusSquatWait))
    {
        hitlag_tics *= (2.0F / 3.0F);
    }
    return hitlag_tics;
}

// 0x800EA248
void ftParamUpdateDamage(FTStruct *fp, s32 damage)
{
    fp->percent_damage += damage;

    gBattleState->players[fp->player].total_damage_all += damage;

    if (fp->percent_damage > 999)
    {
        fp->percent_damage = 999;
    }
    gBattleState->players[fp->player].stock_damage_all = fp->percent_damage;

    if (fp->item_gobj != NULL)
    {
        if ((fp->damage_knockback != 0.0F) && ((fp->hitlag_tics == 0) || !(fp->is_knockback_paused) || !(fp->damage_knockback < (fp->damage_stack + 30.0F))))
        {
            ITStruct *ip = itGetStruct(fp->item_gobj);

            if ((ip->weight != nITWeightHeavy) || (fp->fkind != nFTKindDonkey) && (fp->fkind != nFTKindNDonkey) && (fp->fkind != nFTKindGDonkey))
            {
                if ((damage > mtTrigGetRandomIntRange(60)) || ((itMainCheckShootNoAmmo(fp->item_gobj) != FALSE) && (mtTrigGetRandomIntRange(2) == 0)))
                {
                    ftSetupDropItem(fp);
                }
            }
        }
    }
}

// 0x800EA3D4
void ftParamSetHealDamage(FTStruct *fp, s32 heal)
{
    fp->damage_heal += heal;

    ftParamCheckSetFighterColAnimID(fp->fighter_gobj, 9, 0);
}

// 0x800EA40C - If fighter is grabbed, halve damage received
s32 ftParamGetCapturedDamage(FTStruct *fp, s32 damage)
{
    if (fp->capture_gobj != NULL)
    {
        damage = (damage * 0.5F) + 0.999F;
    }
    return (damage * fp->damage_mul) + 0.999F;
}

// 0x800EA470
f32 ftParamGetStale(s32 player, s32 attack_id, u16 motion_count)
{
    s32 stale_id;
    s32 start_array_id;
    s32 current_array_id;
    s32 i;

    stale_id = gBattleState->players[player].stale_id;

    if (attack_id != nFTMotionAttackIDNone)
    {
        current_array_id = start_array_id = (stale_id != 0) ? stale_id - 1 : ARRAY_COUNT(gBattleState->players[player].stale_info) - 1;

        for (i = 0; i < ARRAY_COUNT(dFTParamStaleTable); i++)
        {
            if (attack_id == gBattleState->players[player].stale_info[current_array_id].attack_id)
            {
                if (motion_count != gBattleState->players[player].stale_info[current_array_id].motion_count)
                {
                    return dFTParamStaleTable[i];
                }
                else if (current_array_id == start_array_id)
                {
                    i--;
                }
            }
            current_array_id = (current_array_id != 0) ? current_array_id - 1 : ARRAY_COUNT(gBattleState->players[player].stale_info) - 1;
        }
    }
    return 1.0F;
}

// 0x800EA54C
s32 ftParamGetStaledDamage(s32 player, s32 damage, s32 attack_id, u16 motion_count)
{
    f32 stale = ftParamGetStale(player, attack_id, motion_count);

    if (stale != 1.0F)
    {
        damage = (damage * stale) + 0.999F;
    }
    return damage;
}

// 0x800EA5BC
u16 ftParamGetMotionCount(void)
{
    u16 motion_count = gFTManagerMotionCount++;

    if (gFTManagerMotionCount == 0)
    {
        gFTManagerMotionCount = 1;
    }
    return motion_count;
}

// 0x800EA5E8
void ftParamSetMotionID(FTStruct *fp, s32 attack_id)
{
    fp->attack_id = attack_id;
    fp->motion_count = ftParamGetMotionCount();
}

// 0x800EA614
void ftParamUpdateStaleQueue(s32 attack_player, s32 defend_player, s32 attack_id, u16 motion_count)
{
    if ((attack_player != ARRAY_COUNT(gBattleState->players)) && (attack_player != defend_player))
    {
        s32 i, stale_id = gBattleState->players[attack_player].stale_id;

        for (i = 0; i < ARRAY_COUNT(gBattleState->players[attack_player].stale_info); i++)
        {
            if
            (
                (attack_id    == gBattleState->players[attack_player].stale_info[i].attack_id) && 
                (motion_count == gBattleState->players[attack_player].stale_info[i].motion_count)
            )
            {
                return;
            }
        }
        gBattleState->players[attack_player].stale_info[stale_id].attack_id    = attack_id;
        gBattleState->players[attack_player].stale_info[stale_id].motion_count = motion_count;

        if (stale_id == (ARRAY_COUNT(gBattleState->players[attack_player].stale_info) - 1))
        {
            gBattleState->players[attack_player].stale_id = 0;
        }
        else gBattleState->players[attack_player].stale_id = stale_id + 1;
    }
}

// 0x800EA74C
u16 ftParamGetStatUpdateCount(void)
{
    u16 update_count = gFTManagerStatUpdateCount++; 

    if (gFTManagerStatUpdateCount == 0)
    {
        gFTManagerStatUpdateCount = 1;
    }
    return update_count;
}

// 0x800EA778
void ftParamSetStatUpdate(FTStruct *fp, u16 flags)
{
    fp->stat_flags = *(GMStatFlags*)&flags;
    fp->stat_count = ftParamGetStatUpdateCount();
}

// 0x800EA7B0
void ftParamUpdate1PGameAttackStats(FTStruct *fp, u16 flags)
{
    GMStatFlags stat_flags = *(GMStatFlags*)&flags;

    if ((fp->pkind != nFTPlayerKindDemo) && (gBattleState->game_type == nSCBattleGameType1PGame) && (fp->player == gSceneData.spgame_player))
    {
        if ((fp->stat_flags.stat_attack_id != nFTStatusAttackIDNone) && (fp->stat_flags.stat_attack_id != stat_flags.stat_attack_id))
        {
            gSC1PGameBonusAttackIDCount[fp->stat_flags.stat_attack_id]++;

            gSC1PGameBonusAttackIsSmashCount[fp->stat_flags.is_smash_attack]++;

            gSC1PGameBonusAttackGroundAirCount[fp->stat_flags.ga]++;

            gSC1PGameBonusAttackIsProjectileCount[fp->stat_flags.is_projectile]++;
        }
    }
}

// 0x800EA8B0
void ftParamSetStarHitStatusInvincible(FTStruct *fp, s32 star_invincible_tics)
{
    fp->star_hitstatus = nGMHitStatusInvincible;
    fp->star_invincible_tics = star_invincible_tics;

    ftParamCheckSetFighterColAnimID(fp->fighter_gobj, ITSTAR_COLANIM_ID, ITSTAR_COLANIM_LENGTH);
}

// 0x800EA8EC
void ftParamSetTimedHitStatusInvincible(FTStruct *fp, s32 invincible_tics)
{
    if (fp->invincible_tics < invincible_tics)
    {
        fp->invincible_tics = invincible_tics;
    }
    if (fp->intangible_tics != 0)
    {
        fp->special_hitstatus = nGMHitStatusIntangible;
    }
    else fp->special_hitstatus = nGMHitStatusInvincible;

    ftParamCheckSetFighterColAnimID(fp->fighter_gobj, 0xA, 0);
}

// 0x800EA948
void ftParamSetTimedHitStatusIntangible(FTStruct *fp, s32 intangible_tics)
{
    if (fp->intangible_tics < intangible_tics)
    {
        fp->intangible_tics = intangible_tics;
    }
    fp->special_hitstatus = nGMHitStatusIntangible;

    ftParamCheckSetFighterColAnimID(fp->fighter_gobj, 0xA, 0);
}

// 0x800EA98C
void ftParamUpdatePlayerBattleStats(s32 attack_player, s32 defend_player, s32 attack_damage)
{
    if ((attack_player != GMCOMMON_PLAYERS_MAX) && (attack_player != defend_player))
    {
        gBattleState->players[attack_player].total_damage_dealt += attack_damage;

        gBattleState->players[defend_player].total_damage_player[attack_player] += attack_damage;
        gBattleState->players[defend_player].combo_damage_foe += attack_damage;
        gBattleState->players[defend_player].combo_count_foe++;
    }
}

// 0x800EAA2C
void ftParamUpdate1PGameDamageStats(FTStruct *fp, s32 damage_player, s32 damage_object_class, s32 damage_object_kind, u16 flags, u16 damage_stat_count)
{
    fp->damage_player = damage_player;
    fp->damage_object_class = damage_object_class;
    fp->damage_object_kind = damage_object_kind;
    fp->damage_count++;

    if (!(damage_stat_count) || (fp->damage_stat_count != damage_stat_count))
    {
        fp->damage_stat_flags = *(GMStatFlags*)&flags;
        fp->damage_stat_count = damage_stat_count;

        if (gBattleState->game_type == nSCBattleGameType1PGame)
        {
            if ((gSceneData.spgame_player == damage_player) && (fp->damage_stat_flags.stat_attack_id != nFTStatusAttackIDNone))
            {
                gSC1PGameBonusDefendIDCount[fp->damage_stat_flags.stat_attack_id]++;
                gSC1PGameBonusDefendIsSmashCount[fp->damage_stat_flags.is_smash_attack]++;
                gSC1PGameBonusDefendGroundAirCount[fp->damage_stat_flags.ga]++;
                gSC1PGameBonusDefendIsProjectileCount[fp->damage_stat_flags.is_projectile]++;
            }
        }
    }
}

// 0x800EAB40
void ftParamGetEffectJointPosition(FTStruct *fp, Vec3f *pos)
{
    FTAttributes *attr = fp->attr;

    fp->effect_joint_array_id++;

    if (fp->effect_joint_array_id == ARRAY_COUNT(attr->effect_joint_ids))
    {
        fp->effect_joint_array_id = 0;
    }
    pos->x = pos->y = pos->z = 0.0F;

    gmCollisionGetFighterPartsWorldPosition(fp->joints[attr->effect_joint_ids[fp->effect_joint_array_id]], pos);
}

// 0x800EABDC
void* ftParamMakeEffect(GObj *fighter_gobj, s32 effect_id, s32 joint_id, Vec3f *effect_pos, Vec3f *effect_scatter, s32 lr, sb32 is_scale_pos, u32 arg7)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f effect_pos_mod;
    void *effect;
    f32 scale;
    LBParticle *ptcl;

    effect = NULL;

    switch (effect_id)
    {
    case nEFKindChargeSparkle:
        switch (fp->fkind)
        {
        case nFTKindSamus:
            joint_id = FTSAMUS_CHARGE_EFFECT_JOINT;

            effect_pos_mod.z = effect_pos_mod.y = 0.0F;
            effect_pos_mod.x = 180.0F;

            effect_pos = &effect_pos_mod;
            break;

        case nFTKindDonkey:
            joint_id = FTDONKEY_CHARGE_EFFECT_JOINT;

            effect_pos_mod.z = effect_pos_mod.y = 0.0F;
            effect_pos_mod.x = 100.0F;

            effect_pos = &effect_pos_mod;
            break;

        case nFTKindKirby:
            joint_id = FTKIRBY_CHARGE_EFFECT_JOINT;

            effect_pos_mod.z = effect_pos_mod.y = 0.0F;
            effect_pos_mod.x = 50.0F;

            effect_pos = &effect_pos_mod;
            break;

        case nFTKindGDonkey:
            joint_id = FTDONKEY_CHARGE_EFFECT_JOINT;

            effect_pos_mod.z = effect_pos_mod.y = 0.0F;
            effect_pos_mod.x = 100.0F;

        default: // Falthrough for final case; effect_pos becomes uninitialized data if jumping straight to default
        #if !defined (AVOID_UB)
            effect_pos = &effect_pos_mod;
        #endif
            break;
        }
        break;

    default:
        break;
    }
    if (joint_id != -1)
    {
        if (effect_pos != NULL)
        {
            pos = *effect_pos;
        }
        else pos.x = pos.y = pos.z = 0.0F;

        if (effect_scatter != NULL)
        {
            if (effect_scatter->x != 0)
            {
                pos.x += (mtTrigGetRandomFloat() - 0.5F) * (effect_scatter->x * 2.0F);
            }
            if (effect_scatter->y != 0)
            {
                pos.y += (mtTrigGetRandomFloat() - 0.5F) * (effect_scatter->y * 2.0F);
            }
            if (effect_scatter->z != 0)
            {
                pos.z += (mtTrigGetRandomFloat() - 0.5F) * (effect_scatter->z * 2.0F);
            }
        }
        if (is_scale_pos != FALSE)
        {
            scale = 1.0F / fp->attr->size_mul;

            pos.x *= scale;
            pos.y *= scale;
            pos.z *= scale;
        }
        gmCollisionGetFighterPartsWorldPosition(fp->joints[joint_id], &pos);
    }
    switch (effect_id)
    {
    case nEFKindDamageNormal:
        ftParamGetEffectJointPosition(fp, &pos);
        effect = efManagerDamageNormalLightMakeEffect(&pos, fp->player, 10, FALSE);
        break;

    case nEFKindFlameLR:
        ftParamGetEffectJointPosition(fp, &pos);
        effect = efManagerFlameLRMakeEffect(&pos, lr);
        break;

    case nEFKindFlameRandom:
        ftParamGetEffectJointPosition(fp, &pos);
        effect = efManagerFlameRandgcMakeEffect(&pos);
        break;

    case nEFKindFlameStatic:
        ftParamGetEffectJointPosition(fp, &pos);
        effect = efManagerFlameStaticMakeEffect(&pos);
        break;

    case nEFKindShockSmall:
        ftParamGetEffectJointPosition(fp, &pos);
        effect = efManagerShockSmallMakeEffect(&pos);
        break;

    case nEFKindDustLight:
        effect = efManagerDustLightMakeEffect(&pos, lr, 1.0F);
        break;

    case nEFKindDustLightRapid:
        effect = efManagerDustLightMakeEffect(&pos, lr, 2.0F);
        break;

    case nEFKindDustHeavyDouble:
        effect = efManagerDustHeavyDoubleMakeEffect(&pos, lr, 1.0F);
        break;

    case nEFKindDustHeavyDoubleRapid:
        effect = efManagerDustHeavyDoubleMakeEffect(&pos, lr, 1.7F);
        break;

    case nEFKindDustHeavy:
        effect = efManagerDustHeavyMakeEffect(&pos, lr);
        break;

    case nEFKindDustHeavyReverse:
        effect = efManagerDustHeavyMakeEffect(&pos, -lr);
        break;

    case nEFKindDustExpandLarge:
        pos.x += ((mtTrigGetRandomFloat() * 160.0F) - 80.0F);
        pos.y += ((mtTrigGetRandomFloat() * 160.0F) - 80.0F);

        effect = efManagerDustExpandLargeMakeEffect(&pos);
        break;

    case nEFKindDustExpandSmall:
        effect = efManagerDustExpandSmallMakeEffect(&pos, 1.0F);
        break;

    case nEFKindDustDashSmall:
        effect = efManagerDustDashMakeEffect(&pos, lr, 1.0F);
        break;

    case nEFKindDustDashLarge:
        effect = efManagerDustDashMakeEffect(&pos, lr, 1.5F);
        break;

    case nEFKindDamageFlyOrbs:
        effect = efManagerDamageSpawnOrbsMakeEffect(&pos);
        break;

    case nEFKindImpactWave:
        if ((fp->ga == nMPKineticsGround) && (fp->coll_data.ground_line_id != -1) && (fp->coll_data.ground_line_id != -2))
        {
            effect = efManagerImpactWaveMakeEffect(&pos, 4, atan2f(-fp->coll_data.ground_angle.x, fp->coll_data.ground_angle.y));
        }
        else effect = efManagerImpactAirWaveMakeEffect(&pos, 4);
        break;

    case nEFKindStarRodSpark:
        effect = efManagerStarRodSparkMakeEffect(&pos, -lr);
        break;

    case nEFKindDamageFlySparks:
        effect = efManagerDamageSpawnSparksMakeEffect(&pos, lr);
        break;

    case nEFKindDamageFlySparksReverse:
        effect = efManagerDamageSpawnSparksMakeEffect(&pos, -lr);
        break;

    case nEFKindDamageFlyMDust:
        effect = efManagerDamageSpawnMDustMakeEffect(&pos, lr);
        break;

    case nEFKindDamageFlyMDustReverse:
        effect = efManagerDamageSpawnMDustMakeEffect(&pos, -lr);
        break;

    case nEFKindSparkleWhite:
        effect = efManagerSparkleWhiteMakeEffect(&pos);
        break;

    case nEFKindSparkleWhiteMultiExplode:
        effect = efManagerSparkleWhiteMultiExplodeMakeEffect(&pos);
        break;

    case nEFKindSparkleWhiteMulti:
        effect = efManagerSparkleWhiteMultiMakeEffect(&pos);
        break;

    case nEFKindSparkleWhiteScale:
        effect = efManagerSparkleWhiteScaleMakeEffect(&pos, 1.0F);
        break;

    case nEFKindQuakeMag0:
        if (fp->pkind != nFTPlayerKindDemo)
        {
            effect = efManagerQuakeMakeEffect(0);
        }
        break;

    case nEFKindQuakeMag1:
        if (fp->pkind != nFTPlayerKindDemo)
        {
            effect = efManagerQuakeMakeEffect(1);
        }
        break;

    case nEFKindQuakeMag2:
        if (fp->pkind != nFTPlayerKindDemo)
        {
            effect = efManagerQuakeMakeEffect(2);
        }
        break;

    case nEFKindPsionic:
        effect = efManagerPsionicMakeEffect(&pos);
        break;

    case nEFKindFlashSmall:
        effect = efManagerFlashSmallMakeEffect(&pos);
        break;

    case nEFKindFlashMiddle:
        effect = efManagerFlashMiddleMakeEffect(&pos);
        break;

    case nEFKindFlashLarge:
        effect = efManagerFlashLargeMakeEffect(&pos);
        break;

    case nEFKindFuraSparkle:
        effect = efManagerFuraSparkleMakeEffect(&pos);
        break;

    case nEFKindKirbyStar:
        effect = efManagerKirbyStarMakeEffect(&pos);
        break;

    case nEFKindCrashTheGame:
        effect = func_ovl2_8010183C(&pos, arg7);
        break;

    case nEFKindChargeSparkle:
        ptcl = efManagerSparkleWhiteScaleMakeEffect(&pos, 0.7F);

        if (ptcl != NULL)
        {
            ptcl->primcolor.a = 0xC0;
        }
        break;

    case nEFKindThunderAmp:
        effect = efManagerThunderAmpMakeEffect(&pos);
        break;

    case nEFKindRipple:
        effect = efManagerRippleMakeEffect(&pos);
        break;

    case 0x4C:
        effect = func_ovl2_801031E0(&pos);
        break;

    case 0x4D:
        effect = func_ovl2_80103280(&pos);
        break;

    case nEFKindHealSparkles:
        effect = efManagerHealSparklesMakeEffect(&pos);
        break;

    case nEFKindBoxSmash:
        itBoxContainerSmashMakeEffect(&pos);
        break;

    case nEFKindMusicNote:
        efManagerMusicNoteMakeEffect(&pos);
        break;

    case nEFKindEggBreak:
        efManagerEggBreakMakeEffect(&pos);
        break;

    case nEFKindYoshiEggEscape:
        if (fp->fkind == nFTKindYoshi)
        {
            efManagerYoshiEggEscapeMakeEffect(fighter_gobj);
        }
        break;

    case nEFKindFireSpark:
        efManagerFireSparkMakeEffect(fighter_gobj);
        break;
    }
    return effect;
}

// 0x800EB39C - Check to spawn Kirby star GFX on stage collision
void ftParamKirbyTryMakeMapStarEffect(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    u16 coll_mask = (fp->coll_data.coll_mask_prev ^ fp->coll_data.coll_mask_current) & fp->coll_data.coll_mask_current & MPCOLL_FLAG_MAIN_MASK;
    Vec3f pos;

    if (coll_mask)
    {
        if (coll_mask & MPCOLL_FLAG_LWALL)
        {
            pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

            pos.x += fp->coll_data.obj_coll.width;
            pos.y += fp->coll_data.obj_coll.center;

            efManagerKirbyStarMakeEffect(&pos);
        }
        if (coll_mask & MPCOLL_FLAG_RWALL)
        {
            pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

            pos.x -= fp->coll_data.obj_coll.width;
            pos.y += fp->coll_data.obj_coll.center;

            efManagerKirbyStarMakeEffect(&pos);
        }
        if (coll_mask & MPCOLL_FLAG_CEIL)
        {
            pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

            pos.y += fp->coll_data.obj_coll.top;

            efManagerKirbyStarMakeEffect(&pos);
        }
        if (coll_mask & MPCOLL_FLAG_GROUND)
        {
            pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

            pos.y += fp->coll_data.obj_coll.bottom;

            efManagerKirbyStarMakeEffect(&pos);
        }
    }
}

// 0x800EB528
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
    FTParts *temp_v1;
    FTParts *temp_v1_5;

    var_v0 = arg0;
    temp_v1 = arg0->user_data.p;

    if (temp_v1 != NULL)
    {
        if (temp_v1->transform_update_mode == 1)
        {
            temp_v1->transform_update_mode = 0;
        }
        temp_v1->unk_dobjtrans_word = 0;
    }
    temp_v1_2 = arg0->child;

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
        temp_v1_3 = arg0->sib_next;

        if (temp_v1_3 != NULL)
        {
            var_v0_2 = temp_v1_3;
        }
        else
        {
        loop_10:
            temp_v1_4 = var_v0->parent;

            if (arg0 == temp_v1_4)
            {
                var_v0_2 = NULL;
            }
            else
            {
                temp_a1 = temp_v1_4->sib_next;

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
        temp_v1_5 = var_v0_2->user_data.p;

        if (temp_v1_5 != NULL)
        {
            temp_v1_5->unk_dobjtrans_word = 0;
        }
        temp_v1_6 = var_v0_2->child;

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
            temp_v1_7 = var_v0_2->sib_next;

            if (temp_v1_7 != NULL)
            {
                var_v0_2 = temp_v1_7;
            }
            else
            {
            loop_24:
                temp_v1_8 = var_v0_2->parent;

                if (arg0 == temp_v1_8)
                {
                    var_v0_2 = NULL;
                }
                else
                {
                    temp_a1_2 = temp_v1_8->sib_next;

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

// 0x800EB648
void func_ovl2_800EB648(DObj *arg0)
{
    DObj *temp_a1;
    DObj *temp_v1_2;
    DObj *temp_v1_3;
    DObj *temp_v1_4;
    DObj *var_v0;
    FTParts *temp_v1;

    var_v0 = arg0;

    while (var_v0 != NULL)
    {
        temp_v1 = var_v0->user_data.p;

        if (temp_v1 != NULL)
        {
            if (temp_v1->transform_update_mode == 1)
            {
                temp_v1->transform_update_mode = 0;
            }
            temp_v1->unk_dobjtrans_word = 0;
        }
        temp_v1_2 = var_v0->child;

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
            temp_v1_3 = var_v0->sib_next;

            if (temp_v1_3 != NULL)
            {
                var_v0 = temp_v1_3;
            }
            else
            {
            loop_12:
                temp_v1_4 = var_v0->parent;

                if (arg0 == temp_v1_4)
                {
                    var_v0 = NULL;
                }
                else
                {
                    temp_a1 = temp_v1_4->sib_next;

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

// 0x800EB6EC
void ftParamSetAnimLocks(FTStruct *fp)
{
    u32 flags0;         // First set of 32-bit mask of joint IDs to avoid animating
    u32 flags1;         // Second set of 32-bit mask of joint IDs to avoid animating
    u32 current_flags;
    FTParts *parts;
    s32 i;
    u32 *animlock;
    FTAttributes *attr = fp->attr;

    animlock = attr->animlock;
    flags0 = animlock[0];
    flags1 = animlock[1];

    for (i = nFTPartsJointCommonStart; ((flags0 != 0) || (flags1 != 0)); i++)
    {
        if (i < (ARRAY_COUNT(fp->joints) - 1))
        {
            current_flags = flags0;
        }
        else current_flags = flags1;

        if (current_flags & (1 << 31))
        {
            if (fp->joints[i] != NULL)
            {
                parts = fp->joints[i]->user_data.p;

                if (parts != NULL)
                {
                    gmCollisionTransformMatrixAll(fp->joints[i], parts, parts->unk_dobjtrans_0x10);
                    parts->transform_update_mode = 3;
                    fp->joints[i]->xobjs[0]->unk05 = 1;
                }
            }
        }
        if (i < ARRAY_COUNT(fp->joints) - 1)
        {
            flags0 <<= 1;
        }
        else flags1 <<= 1;
    }
}

// 0x800EB7F4
void ftParamClearAnimLocks(FTStruct *fp)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->joints); i++)
    {
        if (fp->joints[i] != NULL)
        {
            FTParts *parts = fp->joints[i]->user_data.p;

            if (parts != NULL)
            {
                if (parts->transform_update_mode == 3)
                {
                    parts->transform_update_mode = 0;

                    fp->joints[i]->xobjs[0]->unk05 = 0;
                }
            }
        }
    }
}

// 0x800EB924
void func_ovl2_800EB924(CObj *cobj, Mtx44f mtx, Vec3f *vec, f32 *rx, f32 *ry)
{
    // My math doodoo but ChatGPT says this is projecting a 3D view onto a 2D screen
    f32 x = vec->x;
    f32 y = vec->y;
    f32 z = vec->z;
    f32 tempx = ((mtx[0][0] * x) + (mtx[1][0] * y) + (mtx[2][0] * z)) + mtx[3][0];
    f32 tempy = ((mtx[0][1] * x) + (mtx[1][1] * y) + (mtx[2][1] * z)) + mtx[3][1];
    f32 scale = ((mtx[0][3] * x) + (mtx[1][3] * y) + (mtx[2][3] * z)) + mtx[3][3];

    if (ABSF(scale) < 0.1F)
    {
        scale = (scale < 0.0F) ? -0.1F : 0.1F;
    }
    scale = 1.0F / scale;

    *rx = (cobj->viewport.vp.vscale[0] / 4) * (tempx * scale);
    *ry = (cobj->viewport.vp.vscale[1] / 4) * (tempy * scale);
}

// 0x800EBA6C
f32 func_ovl2_800EBA6C(Vec3f *arg0, Vec3f *arg1)
{
    Vec3f sp1C = *arg1;
    f32 scale;

    syVectorNorm3D(&sp1C);

    scale = (arg0->x * sp1C.x) + (sp1C.y * arg0->y) + (sp1C.z * arg0->z);

    syVectorScale3D(&sp1C, scale);

    arg0->x -= sp1C.x;
    arg0->y -= sp1C.y;
    arg0->z -= sp1C.z;

    return SQUARE(arg0->x) + SQUARE(arg0->y) + SQUARE(arg0->z);
}

// 0x800EBB3C
f32 func_ovl2_800EBB3C(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2)
{
    Vec3f sp1C;

    if (func_ovl2_800EBA6C(arg0, arg2) < 0.0004F)
    {
        return 0.0F;
    }
    else if (func_ovl2_800EBA6C(arg1, arg2) < 0.0004F)
    {
        return 0.0F;
    }
    else lbCommonCross3D(arg0, arg1, &sp1C);

    if (lbCommonSim3D(&sp1C, arg2) < 0.0F)
    {
        return -syVectorAngleDiff3D(arg1, arg0);
    }
    else return syVectorAngleDiff3D(arg1, arg0);
}

// 0x800EBC0C
void func_ovl2_800EBC0C(s32 arg0, Vec3f *arg1, f32 *arg2, f32 arg3, DObj *dobj)
{
    s32 unused1[2];
    DObj *attach_dobj;
    Vec3f sp50;
    Vec3f sp44;
    Vec3f sp38;
    Vec3f sp2C;
    s32 unused2[2];

    sp50.z = 0.0F;
    sp50.y = 0.0F;
    sp50.x = arg3;

    gmCollisionGetFighterPartsWorldPosition(dobj->child->child, &sp50);

    *arg1 = sp50;

    func_ovl2_800EE018(dobj, &sp50);

    sp2C.z = 0.0F;
    sp2C.x = 0.0F;
    sp2C.y = 1.0F;

    syVectorNormCross3D(&sp50, &sp2C, &sp44);

    attach_dobj = dobj->child->user_data.p;

    sp38.x = attach_dobj->rotate.vec.f.x;
    sp38.y = attach_dobj->rotate.vec.f.y;
    sp38.z = attach_dobj->rotate.vec.f.z;

    syVectorNorm3D(&sp44);
    syVectorNorm3D(&sp38);
    syVectorNorm3D(&sp50);

    *arg2 = func_ovl2_800EBB3C(&sp44, &sp38, &sp50);
}

// 0x800EBD08
void func_ovl2_800EBD08(DObj *root_dobj, f32 arg1, Vec3f *vec, f32 arg3)
{
    // I feel like this is kind of a fakematch (as in, matching stack allocation is achieved by nonsense) but I hate this function so I'll take it
    DObj *child1_dobj;
    DObj *child2_dobj;
    f32 sqrtxyz;
    f32 unused;
    f32 sin_arg3;
    f32 cos_arg3;
    f32 sp38;
    f32 normal;
    f32 trax;
    f32 zmulnorm;
    f32 new_var;
    f32 square_xy;
    f32 imbadatmathhelp;
    f32 inverse_xy;
    f32 inverse_xy_2;
    f32 inverse_xy_3;
    f32 zmul;
    f32 square_arg1;
    f32 xmul;
    f32 sp58;
    f32 ymul;
    f32 sp50;
    f32 inverse_xyz;
    f32 square_trax;

    child1_dobj = root_dobj->child;
    child2_dobj = child1_dobj->child;
    trax = child2_dobj->translate.vec.f.x;

    square_xy = SQUARE(vec->x) + SQUARE(vec->y);

    sqrtxyz = sqrtf((vec->z * vec->z) + square_xy);

    square_xy = sqrtf(square_xy);

    sin_arg3 = lbCommonSin(arg3);

    cos_arg3 = lbCommonCos(arg3);

    sp50 = sqrtxyz * sqrtxyz;

    square_trax = SQUARE(trax);

    square_arg1 = SQUARE(arg1);

    normal = ((SQUARE(sqrtxyz) + square_trax) - square_arg1) / (2.0F * sqrtxyz * trax);

    if (normal < 0.0F)
    {
        normal = 0.0F;
    }
    if (normal > 1.0F)
    {
        normal = 1.0F;
    }
    sp38 = -sqrtf(1.0F - SQUARE(normal));

    if (sqrtxyz == 0.0F)
    {
        sqrtxyz = 0.00000001F;
    }
    inverse_xy_3 = normal;

    inverse_xyz = 1.0F / sqrtxyz;

    if (square_xy == 0.0F)
    {
        square_xy = 0.00000001F;
    }
    inverse_xy = 1.0F / square_xy;

    xmul = vec->x * inverse_xyz;
    ymul = vec->y * inverse_xyz;
    zmul = vec->z * inverse_xyz;

    sp58 = (-xmul * vec->z * sin_arg3 * inverse_xy) - (vec->y * cos_arg3 * inverse_xy);

    zmulnorm = zmul * inverse_xy_3;

    sp50 = (-ymul * vec->z * sin_arg3 * inverse_xy) + (vec->x * cos_arg3 * inverse_xy);

    imbadatmathhelp = square_xy * sin_arg3 * inverse_xyz;

    new_var = imbadatmathhelp * sp38;

    inverse_xy_2 = (zmulnorm + new_var);

    if ((inverse_xy_2 == -1.0F) || (inverse_xy_2 == 1.0F))
    {
        if (inverse_xy_2 == -1.0F)
        {
            child1_dobj->rotate.vec.f.y = F_CLC_DTOR32(90.0F);

            child1_dobj->rotate.vec.f.x = atan2f((-sp38 * xmul) + (sp58 * normal), (-sp38 * ymul) + (sp50 * normal));
        }
        else
        {
            child1_dobj->rotate.vec.f.y = F_CLC_DTOR32(-90.0F);

            child1_dobj->rotate.vec.f.x = atan2f(-((-sp38 * xmul) + (sp58 * normal)), (-sp38 * ymul) + (sp50 * normal));
        }
        child1_dobj->rotate.vec.f.z = 0.0F;
    }
    else
    {
        child1_dobj->rotate.vec.f.y = asinf(-inverse_xy_2);
        child1_dobj->rotate.vec.f.x = atan2f((-sp38 * zmul) + (imbadatmathhelp * normal), square_xy * cos_arg3 * inverse_xyz);
        child1_dobj->rotate.vec.f.z = atan2f((ymul * normal) + (sp50 * sp38), (xmul * normal) + (sp58 * sp38));
    }
    child2_dobj->rotate.vec.f.z = acosf(((SQUARE(sqrtxyz) - square_trax) - square_arg1) / (2.0F * trax * arg1));

    func_ovl2_800EB528(child1_dobj);
    func_ovl2_800EB528(child2_dobj);
}

// 0x800EC0EC
s32 ftParamGetCostumeCommonID(s32 fkind, s32 color)
{
    return dFTParamCostumeIDs[fkind].royal[color];
}

// 0x800EC104
s32 ftParamGetCostumeTeamID(s32 fkind, s32 color)
{
    return dFTParamCostumeIDs[fkind].team[color];
}

// 0x800EC11C
s32 ftParamGetCostumeDevelop(s32 fkind)
{
    return dFTParamCostumeIDs[fkind].develop;
}

// 0x800EC130
void ftParamInitGame(void)
{
    ftMainClearGroundElementsAll();
    ifCommonBattleInitPlacement();
}
