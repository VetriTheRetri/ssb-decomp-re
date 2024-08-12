#include <ft/fighter.h>
#include <it/item.h>
#include <sc/scene.h>
#include <gm/battle.h>
#include <ft/ftcommondata.h>

extern f32 func_ovl0_800C7B58();
extern alSoundEffect* func_800269C0_275C0(u16);
extern f32 bitmap_sinf(f32);
extern f32 bitmap_cosf(f32);
extern void func_ovl0_800C8CB8(void*, void*, void*, void*, f32);

// Mostly fighters though

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern u32 gGM1PGameBonusAttackIDCount[/* */];                              // Attack ID
extern u32 gGM1PGameBonusAttackIsSmashCount[/* */];                         // Index 0 = non-smash attack, index 1 = smash attack
extern u32 gGM1PGameBonusAttackGroundAirCount[/* */];                       // Index 0 = ground, index 1 = air
extern u32 gGM1PGameBonusAttackIsProjectileCount[/* */];                    // Index 0 = non-projectile, index 1 = projectile

extern u32 gGM1PGameBonusDefendIDCount[/* */];                              // Attacks successfully landed on opponent
extern u32 gGM1PGameBonusDefendIsSmashCount[/* */];                         // Smash Attacks successfully landed on opponent
extern u32 gGM1PGameBonusDefendGroundAirCount[/* */];                       // Grounded / Airborne attacks successfully landed on opponent
extern u32 gGM1PGameBonusDefendIsProjectileCount[/* */];                    // Special attacks successfully landed on opponent

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
ftCostume dFTParamCostumeIDs[/* */] =
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
    case nGMSoundBGMStarman:
        return ITHAMMER_BGM_DURATION;

    case nGMSoundBGMHammer:
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
    GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);
        u32 bgm_id = gMPCollisionBGMDefault;
        s32 length_new;

        if ((fp->item_hold != NULL) && (itGetStruct(fp->item_hold)->it_kind == nITKindHammer))
        {
            bgm_id = nGMSoundBGMHammer;
        }
        if (fp->star_invincible_timer > ITSTAR_WARN_BEGIN_FRAME)
        {
            bgm_id = nGMSoundBGMStarman;
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
    GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

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
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->input.pl.button_hold = fp->input.pl.button_tap = fp->input.cp.button_inputs = 0;

    fp->input.pl.stick_range.x = fp->input.pl.stick_range.y = fp->input.pl.stick_prev.x = fp->input.pl.stick_prev.y = fp->input.cp.stick_range.x = fp->input.cp.stick_range.y = 0;

    fp->tap_stick_x = fp->tap_stick_y = fp->hold_stick_x = fp->hold_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;

    fp->is_disable_control = TRUE;
}

// 0x800E7F68
void ftParamUnlockPlayerControl(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_disable_control = FALSE;
}

// 0x800E7F7C
void ftParamSetPlayerTagWait(GObj *fighter_gobj, s32 playertag_wait)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->playertag_wait = playertag_wait;
}

// 0x800E7F88
void ftParamSetDamageShuffle(ftStruct *fp, sb32 is_electric, s32 damage, s32 status_id, f32 hitlag_mul)
{
    s32 shuffle_timer = ftParamGetHitLag(damage, status_id, hitlag_mul) * FTCOMMON_DAMAGE_SHUFFLE_MUL;

    fp->shuffle_timer = shuffle_timer;
    fp->shuffle_frame_index = 0;
    fp->is_shuffle_electric = is_electric;
    fp->shuffle_index_max = dFTParamShuffleFrameIndexMax[is_electric];
}

// 0x800E8000
f32 ftParamGetStickAngleRads(ftStruct *fp)
{
    return atan2f(fp->input.pl.stick_range.y, ABS(fp->input.pl.stick_range.x));
}

// 0x800E8044
void ftParamSetStickLR(ftStruct *fp)
{
    fp->lr = (fp->input.pl.stick_range.x >= 0) ? nGMFacingR : nGMFacingL;
}

// 0x800E806C
void ftParamMakeRumble(ftStruct *fp, s32 rumble_id, s32 length)
{
    if (fp->status_info.pl_kind == nFTPlayerKindMan)
    {
        gmRumbleSetPlayerRumbleParams(fp->player, rumble_id, length);
    }
}

// 0x800E8098
void ftParamSetCaptureImmuneMask(ftStruct *fp, u8 capture_immune_mask)
{
    fp->capture_immune_mask = capture_immune_mask;
}

// 0x800E80A4
void ftParamSetCatchParams(ftStruct *fp, u8 catch_mask, void (*proc_catch)(GObj*), void (*proc_capture)(GObj*, GObj*))
{
    fp->is_catchstatus = TRUE;

    fp->catch_mask = catch_mask;
    fp->proc_catch = proc_catch;
    fp->proc_capture = proc_capture;
}

// 0x800E80C4 - Fetch data of throwing fighter: character ID, port ID, team, player number and GObj pointer
void ftParamSetThrowParams(ftStruct *this_fp, GObj *throw_gobj)
{
    ftStruct *throw_fp = ftGetStruct(throw_gobj); // Fighter throwing this player

    this_fp->throw_gobj = throw_gobj;
    this_fp->throw_ft_kind = throw_fp->ft_kind;
    this_fp->throw_player = throw_fp->player;
    this_fp->throw_player_number = throw_fp->player_number;
    this_fp->throw_team = throw_fp->team;
}

// 0x800E80F0
void ftParamPlayVoice(ftStruct *fp, u16 voice_id)
{
    fp->p_voice = func_800269C0_275C0(voice_id);

    fp->voice_id = (fp->p_voice != NULL) ? fp->p_voice->sfx_id : 0;
}

// 0x800E8138
void ftParamStopVoice(ftStruct *fp)
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
void ftParamPlayLoopSFX(ftStruct *fp, u16 sfx_id)
{
    if (fp->p_loop_sfx == NULL)
    {
        fp->p_loop_sfx = func_800269C0_275C0(sfx_id);

        fp->loop_sfx_id = (fp->p_loop_sfx != NULL) ? fp->p_loop_sfx->sfx_id : 0;
    }
}

// 0x800E81E4
void ftParamStopLoopSFX(ftStruct *fp)
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
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftParamStopVoice(fp);

    if (fp->proc_damage != NULL)
    {
        fp->proc_damage(fighter_gobj);
    }
}

// Update render priority? Runs when a fighter gets Screen KO'd
void ftParamMoveDLLink(GObj *fighter_gobj, u8 dl_link)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    gcMoveGObjDL(fighter_gobj, dl_link, GOBJ_DLLINKORDER_DEFAULT);

    fp->dl_link = dl_link;
}

// 0x800E82B8
void ftParamUpdateAnimKeys(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj **p_joint = &fp->joints[nFTPartsJointTopN];
    DObj *joint;
    MObj *mobj;
    ftParts *ft_parts;
    f32 anim_remain_bak;
    s32 i;

    if (fp->status_info.motion_id != -2)
    {
        if (fp->is_have_translate_scale)
        {
            Vec3f *translate_scales = fp->attributes->translate_scales;

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
                    
                    func_ovl0_800C9488(joint, translate_scales);

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
        Vec3f *translate_scales = fp->attributes->translate_scales;

        for (i = 0; i < ARRAY_COUNT(fp->joints); i++, p_joint++, translate_scales++)
        {
            joint = *p_joint;

            if (joint != NULL)
            {
                ft_parts = joint->user_data.p;

                if ((ft_parts != NULL) && (ft_parts->unk_dobjtrans_0xE != 0))
                {
                    anim_remain_bak = joint->anim_remain;

                    joint->anim_remain = AOBJ_ANIM_END;

                    func_ovl0_800C9488(joint, translate_scales);

                    joint->anim_remain = anim_remain_bak;
                }
            }
        }
    }
    else for (i = 0; i < ARRAY_COUNT(fp->joints); i++, p_joint++)
    {
        joint = *p_joint;

        if (joint != NULL)
        {
            ft_parts = joint->user_data.p;

            if ((ft_parts != NULL) && (ft_parts->unk_dobjtrans_0xE != 0))
            {
                anim_remain_bak = joint->anim_remain;

                joint->anim_remain = AOBJ_ANIM_END;

                gcPlayDObjAnim(joint);

                joint->anim_remain = anim_remain_bak;
            }
        }
    }
}

// 0x800E8518
void ftParamClearHitAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
    {
        ftHitbox *ft_hit = &fp->fighter_hit[i];

        ft_hit->update_state = nGMHitUpdateDisable;
    }
    fp->is_hitbox_active = FALSE;
}

// 0x800E853C
void ftParamClearHitRecordID(ftStruct *fp, s32 hit_id)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hit[hit_id].hit_targets); i++)
    {
        gmHitRecord *targets = &fp->fighter_hit[hit_id].hit_targets[i];

        targets->victim_gobj = NULL;

        targets->victim_flags.is_interact_hurt = targets->victim_flags.is_interact_shield = FALSE;

        targets->victim_flags.timer_rehit = 0;

        targets->victim_flags.group_id = 7;
    }
}

// 0x800E8668
void ftParamRefreshHitID(GObj *fighter_gobj, s32 hit_id)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->fighter_hit[hit_id].update_state = nGMHitUpdateNew;

    fp->is_hitbox_active = TRUE;

    ftParamClearHitRecordID(fp, hit_id);
}

// 0x800E86B4
void ftParamSetCollDataVelPush(GObj *fighter_gobj, Vec3f *vel_push)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->coll_data.vel_push = *vel_push;
}

// 0x800E86D4
s32 ftParamGetJointID(ftStruct *fp, s32 joint_id)
{
    if (joint_id == -2)
    {
        joint_id = fp->attributes->joint_itemlight_id;
    }
    return joint_id;
}

// 0x800E86F0
void ftParamLinkResetShieldModelParts(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->ft_kind == nFTKindLink) || (fp->ft_kind == nFTKindNLink))
    {
        ftParamSetModelPartDefaultID(fighter_gobj, 0x15, 0);
        ftParamSetModelPartDefaultID(fighter_gobj, 0x13, -1);
    }
}

// 0x800E8744
void ftParamSetHammerParams(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->ft_kind == nFTKindLink) || (fp->ft_kind == nFTKindNLink))
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
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hurt); i++)
    {
        ftHurtbox *ft_hurt = &fp->fighter_hurt[i];

        if (ft_hurt->hitstatus != nGMHitStatusNone)
        {
            ft_hurt->hitstatus = hitstatus;
        }
    }
    fp->is_hitstatus_nodamage = (hitstatus == nGMHitStatusNormal) ? FALSE : TRUE;

    ftParamSetHitStatusColAnim(fighter_gobj, hitstatus);
}

// 0x800E8884
void ftParamSetHitStatusPartID(GObj *fighter_gobj, s32 joint_id, s32 hitstatus)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hurt); i++)
    {
        ftHurtbox *ft_hurt = &fp->fighter_hurt[i];

        if ((ft_hurt->hitstatus != nGMHitStatusNone) && (joint_id == ft_hurt->joint_id))
        {
            ft_hurt->hitstatus = hitstatus;

            if (ft_hurt->hitstatus != nGMHitStatusNormal)
            {
                fp->is_hitstatus_nodamage = TRUE;
            }
            return; // This means if there are multiple hurtboxes on the same bone/joint ID, only the first one is checked; same as Melee with Mr. Game & Watch / Fox's nose hurtboxes 
        }
    }
}

// 0x800E8A24
void ftParamSetHitStatusAll(GObj *fighter_gobj, s32 hitstatus)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->hitstatus = hitstatus;

    ftParamSetHitStatusColAnim(fighter_gobj, hitstatus);
}

// 0x800E8A48 - Get most effective bone collision state
s32 ftParamGetBestHitStatusPart(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 hitstatus_default = fp->hitstatus;
    s32 hitstatus_best = fp->fighter_hurt[0].hitstatus;
    s32 i;

    if (hitstatus_best != nGMHitStatusNormal)
    {
        for (i = 1; i < ARRAY_COUNT(fp->fighter_hurt); i++)
        {
            ftHurtbox *ft_hurt = &fp->fighter_hurt[i];

            if (ft_hurt->hitstatus == nGMHitStatusNone) 
            {
                break;
            }
            else if (hitstatus_best > ft_hurt->hitstatus)
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
s32 ftParamGetBestHitStatusAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
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
void ftParamResetFighterHurtPartAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftHurtbox *ft_hurt = &fp->fighter_hurt[0];
    ftHurtboxDesc *ft_hurt_desc = &fp->attributes->fighter_hurt_desc[0];
    s32 i;

    for (i = 0; i < FTPARTS_HURT_NUM_MAX; i++, ft_hurt++, ft_hurt_desc++)
    {
        if (ft_hurt_desc->joint_id != -1)
        {
            ft_hurt->joint_id = ft_hurt_desc->joint_id;
            ft_hurt->joint = fp->joints[ft_hurt->joint_id];

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
void ftParamModifyFighterHurtPartID(GObj *fighter_gobj, s32 joint_id, Vec3f *offset, Vec3f *size)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hurt); i++)
    {
        ftHurtbox *ft_hurt = &fp->fighter_hurt[i];

        if (joint_id == ft_hurt->joint_id)
        {
            ft_hurt->offset = *offset;
            ft_hurt->size = *size;

            fp->fighter_hurt[i].size.x *= 0.5F;
            fp->fighter_hurt[i].size.y *= 0.5F;
            fp->fighter_hurt[i].size.z *= 0.5F;

            fp->is_hurtbox_modify = TRUE;

            return; // The same oversight as ftParamSetHitStatusPartID except this time on hurtbox offset and size
        }
    }
}

// 0x800E8C70
void ftParamSetModelPartID(GObj *fighter_gobj, s32 joint_id, s32 drawstatus)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    ftCommonPartContainer *commonparts_container;
    ftModelPart *modelpart;
    ftModelPartStatus *modelpart_status;
    ftParts *ft_parts;
    DObj *joint;
    s32 detail_id;
    void **costume_matanim_joints;
    MObjSub **mobjsubs;

    joint = fp->joints[joint_id];
    commonparts_container = attributes->commonparts_container;
    modelpart_status = &fp->modelpart_status[joint_id - nFTPartsJointCommonStart];
    ft_parts = joint->user_data.p;

    if (joint != NULL)
    {
        if (modelpart_status->drawstatus_current != drawstatus)
        {
            modelpart_status->drawstatus_current = drawstatus;

            gcRemoveMObjFromDObj(joint);

            if (drawstatus != -1)
            {
                if (fp->attributes->modelparts_container->modelparts_desc[joint_id - nFTPartsJointCommonStart] != NULL)
                {
                    modelpart = &fp->attributes->modelparts_container->modelparts_desc[joint_id - nFTPartsJointCommonStart]->modelparts[drawstatus][fp->detail_current - nFTPartsDetailStart];

                    joint->display_list = modelpart->display_list;

                    func_ovl0_800C8CB8(joint, modelpart->mobjsubs, modelpart->costume_matanim_joints, modelpart->main_matanim_joint, fp->costume);

                    ft_parts->flags = modelpart->flags;
                }
                else
                {
                    if ((fp->detail_current == nFTPartsDetailHigh) || (commonparts_container->commonparts[1].dobj_desc[joint_id - nFTPartsJointCommonStart].display_list == NULL))
                    {
                        detail_id = 0;
                    }
                    else detail_id = 1;

                    joint->display_list = commonparts_container->commonparts[detail_id].dobj_desc[joint_id - nFTPartsJointCommonStart].display_list;

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

                    func_ovl0_800C8CB8(joint, mobjsubs, costume_matanim_joints, NULL, fp->costume);

                    ft_parts->flags = commonparts_container->commonparts[detail_id].flags;
                }
            }
            else joint->display_list = NULL;

            fp->is_modelpart_modify = TRUE;
        }
    }
}

// 0x800E8EAC
void ftParamSetModelPartDefaultID(GObj *fighter_gobj, s32 joint_id, s32 drawstatus)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->modelpart_status[joint_id - nFTPartsJointCommonStart].drawstatus_default = drawstatus;

    fp->is_modelpart_modify = TRUE;
}

// 0x800E8ECC
void ftParamResetModelPartAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    ftCommonPartContainer *commonparts_container;
    ftModelPart *modelpart;
    ftModelPartStatus *modelpart_status;
    ftParts *ft_parts;
    DObj *joint;
    s32 detail_id;
    AObjAnimJoint **costume_matanim_joints;
    MObjSub **mobjsubs;
    s32 i;

    commonparts_container = attributes->commonparts_container;

    for (i = 0; i < ARRAY_COUNT(fp->joints) - nFTPartsJointCommonStart; i++)
    {
        joint = fp->joints[i + nFTPartsJointCommonStart];

        if (joint != NULL)
        {
            modelpart_status = &fp->modelpart_status[i];

            if (modelpart_status->drawstatus_current != modelpart_status->drawstatus_default)
            {
                modelpart_status->drawstatus_current = modelpart_status->drawstatus_default;

                gcRemoveMObjFromDObj(joint);

                if (modelpart_status->drawstatus_current == -1)
                {
                    joint->display_list = NULL;
                }
                else
                {
                    ft_parts = joint->user_data.p;

                    if (attributes->modelparts_container->modelparts_desc[i] != NULL)
                    {
                        modelpart = &attributes->modelparts_container->modelparts_desc[i]->modelparts[modelpart_status->drawstatus_current][fp->detail_current - nFTPartsDetailStart];

                        joint->display_list = modelpart->display_list;

                        func_ovl0_800C8CB8(joint, modelpart->mobjsubs, modelpart->costume_matanim_joints, modelpart->main_matanim_joint, fp->costume);

                        ft_parts->flags = modelpart->flags;
                    }
                    else
                    {
                        if ((fp->detail_current == nFTPartsDetailHigh) || (commonparts_container->commonparts[1].dobj_desc[i].display_list == NULL))
                        {
                            detail_id = 0;
                        }
                        else detail_id = 1;

                        joint->display_list = commonparts_container->commonparts[detail_id].dobj_desc[i].display_list;

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

                        func_ovl0_800C8CB8(joint, mobjsubs, costume_matanim_joints, NULL, fp->costume);

                        ft_parts->flags = commonparts_container->commonparts[detail_id].flags;
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
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    for (i = nFTPartsJointCommonStart; i < ARRAY_COUNT(fp->joints); i++)
    {
        DObj *joint = fp->joints[i];

        if (joint != NULL)
        {
            if (fp->modelpart_status[i - nFTPartsJointCommonStart].drawstatus_current == -1) 
            {
                continue;
            }
            else
            {
                fp->modelpart_status[i - nFTPartsJointCommonStart].drawstatus_current = -1;

                gcRemoveMObjFromDObj(joint);

                joint->display_list = NULL;
            }
        }
    }
    fp->is_modelpart_modify = TRUE;
}

// 0x800E9198
void ftParamSetModelPartDetailAll(GObj *fighter_gobj, u8 detail)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    if (detail != fp->detail_current)
    {
        fp->detail_current = detail;

        for (i = nFTPartsJointCommonStart; i < ARRAY_COUNT(fp->joints); i++)
        {
            DObj *joint = fp->joints[i];

            if (joint != NULL)
            {
                s32 drawstatus = fp->modelpart_status[i - nFTPartsJointCommonStart].drawstatus_current;

                if (drawstatus == -1) 
                {
                    continue;
                }
                else
                {
                    fp->modelpart_status[i - nFTPartsJointCommonStart].drawstatus_current = -1;

                    ftParamSetModelPartID(fighter_gobj, i, drawstatus);
                }
            }
        }
        ftParamInitTexturePartAll(fighter_gobj);
    }
}

// 0x800E9248
void ftParamInitModelTexturePartsAll(GObj *fighter_gobj, s32 costume, s32 shade)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    DObj *joint;
    GObj *ft_parts_gobj;
    ftParts *ft_parts;
    ftCommonPartContainer *commonparts_container;
    ftMesh *ft_mesh;
    ftModelPartStatus *modelpart_status;
    s32 detail_id;
    ftModelPart *modelpart;
    MObjSub **mobjsubs;
    AObjAnimJoint **costume_matanim_joints;
    s32 i;

    commonparts_container = attributes->commonparts_container;
    ft_mesh = attributes->mesh;

    for (i = 0; i < ARRAY_COUNT(fp->joints) - nFTPartsJointCommonStart; i++)
    {
        joint = fp->joints[i + nFTPartsJointCommonStart];

        if (joint != NULL)
        {
            gcRemoveMObjFromDObj(joint);

            modelpart_status = &fp->modelpart_status[i];

            if (modelpart_status->drawstatus_current != -1)
            {
                if (attributes->modelparts_container->modelparts_desc[i] != NULL)
                {
                    modelpart = &attributes->modelparts_container->modelparts_desc[i]->modelparts[modelpart_status->drawstatus_current][fp->detail_current - nFTPartsDetailStart];

                    func_ovl0_800C8CB8(joint, modelpart->mobjsubs, modelpart->costume_matanim_joints, modelpart->main_matanim_joint, costume);
                }
                else
                {
                    if ((fp->detail_current == nFTPartsDetailHigh) || (commonparts_container->commonparts[1].dobj_desc[i].display_list == NULL))
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

                    func_ovl0_800C8CB8(joint, mobjsubs, costume_matanim_joints, NULL, costume);
                }
            }
            if ((ft_mesh != NULL) && ((i + nFTPartsJointCommonStart) == ft_mesh->joint_id))
            {
                ft_parts = joint->user_data.p;

                if (ft_parts->gobj != NULL)
                {
                    gcEjectGObj(ft_parts->gobj);

                    ft_parts->gobj = NULL;
                }
                if (costume != 0)
                {
                    ft_parts_gobj = gcMakeGObjSPAfter(nOMObjCommonKindFighterParts, NULL, nOMObjCommonLinkIDFighterParts, GOBJ_LINKORDER_DEFAULT);
                    ft_parts->gobj = ft_parts_gobj;

                    gcAddDObjForGObj(ft_parts_gobj, ft_mesh->dl);

                    func_ovl0_800C8CB8(DObjGetStruct(ft_parts->gobj), ft_mesh->mobjsubs, ft_mesh->costume_matanim_joints, NULL, costume);
                }
            }
        }
    }
    fp->costume = costume;
    fp->shade = shade;

    fp->shade_color.r = ((attributes->shade_color[fp->shade - 1].r * attributes->shade_color[fp->shade - 1].a) / 0xFF);
    fp->shade_color.g = ((attributes->shade_color[fp->shade - 1].g * attributes->shade_color[fp->shade - 1].a) / 0xFF);
    fp->shade_color.b = ((attributes->shade_color[fp->shade - 1].b * attributes->shade_color[fp->shade - 1].a) / 0xFF);

    ftParamInitTexturePartAll(fighter_gobj);
}

// ...ewww...
// 0x800E9598
void ftParamInitTexturePartAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftTexturePartStatus *texturepart_status;
    ftTexturePart *texturepart;
    DObj *joint;
    MObj *mobj;
    s32 detail;
    s32 i, j;

    for (i = 0, texturepart_status = &fp->texturepart_status[i], texturepart = &fp->attributes->textureparts_container->textureparts[i]; i < ARRAY_COUNT(fp->texturepart_status); i++, texturepart_status++, texturepart++)
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
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftTexturePart *texturepart = &fp->attributes->textureparts_container->textureparts[texturepart_id];
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
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftTexturePartStatus *texturepart_status;
    ftTexturePart *texturepart;
    DObj *joint;
    MObj *mobj;
    s32 detail;
    s32 i, j;

    for (i = 0, texturepart_status = &fp->texturepart_status[i], texturepart = &fp->attributes->textureparts_container->textureparts[i]; i < ARRAY_COUNT(fp->texturepart_status); i++, texturepart_status++, texturepart++)
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
sb32 ftParamCheckSetColAnimID(gmColAnim *colanim, s32 colanim_id, s32 length)
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
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return ftParamCheckSetColAnimID(&fp->colanim, colanim_id, length);
}

// 0x800E9838
void ftParamResetColAnim(gmColAnim *colanim)
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
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftParamResetColAnim(&fp->colanim);
}

// 0x800E98D4
void ftParamResetStatUpdateColAnim(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

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
    switch (fp->ft_kind)
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
    if (fp->star_invincible_timer != 0)
    {
        ftParamCheckSetFighterColAnimID(fighter_gobj, 0x4A, 0);
    }
    if ((fp->invincible_timer != 0) || (fp->intangible_timer != 0))
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
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return ftParamCheckSetFighterColAnimID(fighter_gobj, dFTParamSkeletonColAnimIDs[fp->ft_kind] + colanim_id, 0);
}

// 0x800E9B30 - Set How to Play input sequence
void ftParamSetExplainInputSeq(GObj *fighter_gobj, ftExplainCommand *p_inputseq)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->explain.input_wait = 0;
    fp->explain.input_seq = p_inputseq;
}

// 0x800E9B40 - Check if How to Play input sequence exists
sb32 ftParamCheckExplainInputSeq(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->explain.input_seq != NULL)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800E9B64
void ftParamRunProcEffect(GObj *fighter_gobj, void (*proc)(GObj*, efStruct*))
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->is_attach_effect)
    {
        GObj *effect_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDEffect];

        while (effect_gobj != NULL)
        {
            efStruct *ep = efGetStruct(effect_gobj);

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
void ftParamStopEffect(GObj *effect_gobj, efStruct *ep)
{
    efTransform *einfo = ep->eftrans;

    if (einfo != NULL)
    {
        func_ovl0_800D39D4(einfo->unk_effect_0xB8, ep->unk_effectstruct_0x8 >> 3);
    }
    efManagerSetPrevStructAlloc(ep);
    gcEjectGObj(effect_gobj);
}

// 0x800E9C3C
void ftParamProcStopEffect(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftParamRunProcEffect(fighter_gobj, ftParamStopEffect);

    fp->is_attach_effect = FALSE;
}

// 0x800E9C78
void ftParamPauseEffect(GObj *effect_gobj, efStruct *ep)
{
    ep->is_pause_effect = TRUE;
}

// 0x800E9C78
void ftParamProcPauseEffect(GObj *effect_gobj)
{
    ftParamRunProcEffect(effect_gobj, ftParamPauseEffect);
}

// 0x800E9CB0
void ftParamResumeEffect(GObj *effect_gobj, efStruct *ep)
{
    ep->is_pause_effect = FALSE;
}

// 0x800E9CC4
void ftParamProcResumeEffect(GObj *fighter_gobj)
{
    ftParamRunProcEffect(fighter_gobj, ftParamResumeEffect);
}

// 0x800E9CE8
void ftParamVelDamageTransferGround(ftStruct *fp)
{
    if (fp->ga == nMPKineticsGround)
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
    if (gSaveData.error_flags & GMBACKUP_ERROR_RANDOMKNOCKBACK)
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
    if (gSaveData.error_flags & GMBACKUP_ERROR_RANDOMKNOCKBACK)
    {
        knockback = mtTrigGetRandomFloat() * 200.0F;
    }
    return knockback;
}

// 0x800EA1B0
f32 ftPararmGetHitStun(f32 knockback)
{
    return knockback / 1.875F;
}

// 0x800EA1C0
s32 ftParamGetHitLag(s32 damage, s32 status_id, f32 hitlag_mul)
{
    s32 hitlag_timer = (s32) ( (damage * (1.0F / 3.0F) ) + 5.0F ) * hitlag_mul;

    if ((status_id == nFTCommonStatusSquat) || (status_id == nFTCommonStatusSquatWait))
    {
        hitlag_timer *= (2.0F / 3.0F);
    }
    return hitlag_timer;
}

// 0x800EA248
void ftParamUpdateDamage(ftStruct *fp, s32 damage)
{
    fp->percent_damage += damage;

    gBattleState->players[fp->player].total_damage_all += damage;

    if (fp->percent_damage > 999)
    {
        fp->percent_damage = 999;
    }
    gBattleState->players[fp->player].stock_damage_all = fp->percent_damage;

    if (fp->item_hold != NULL)
    {
        if ((fp->damage_knockback != 0.0F) && ((fp->hitlag_timer == 0) || !(fp->x192_flag_b6) || !(fp->damage_knockback < (fp->damage_stack + 30.0F))))
        {
            itStruct *ip = itGetStruct(fp->item_hold);

            if ((ip->weight != nITWeightHeavy) || (fp->ft_kind != nFTKindDonkey) && (fp->ft_kind != nFTKindNDonkey) && (fp->ft_kind != nFTKindGDonkey))
            {
                if ((damage > mtTrigGetRandomIntRange(60)) || ((itMainCheckShootNoAmmo(fp->item_hold) != FALSE) && (mtTrigGetRandomIntRange(2) == 0)))
                {
                    ftSetupDropItem(fp);
                }
            }
        }
    }
}

// 0x800EA3D4
void ftParamSetHealDamage(ftStruct *fp, s32 heal)
{
    fp->damage_heal += heal;

    ftParamCheckSetFighterColAnimID(fp->fighter_gobj, 9, 0);
}

// 0x800EA40C - If fighter is grabbed, halve damage received
s32 ftParamGetCapturedDamage(ftStruct *fp, s32 damage)
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
void ftParamSetMotionID(ftStruct *fp, s32 attack_id)
{
    fp->attack_id = attack_id;
    fp->motion_count = ftParamGetMotionCount();
}

// 0x800EA614
void ftParamUpdateStaleQueue(s32 attack_player, s32 defend_player, s32 attack_id, u16 motion_count)
{
    if ((attack_player != SCBATTLE_PLAYERS_MAX) && (attack_player != defend_player))
    {
        s32 i, stale_id = gBattleState->players[attack_player].stale_id;

        for (i = 0; i < ARRAY_COUNT(gBattleState->players[attack_player].stale_info); i++)
        {
            if ((attack_id == gBattleState->players[attack_player].stale_info[i].attack_id) && (motion_count == gBattleState->players[attack_player].stale_info[i].motion_count))
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
void ftParamSetStatUpdate(ftStruct *fp, u16 flags)
{
    fp->stat_flags = *(gmStatFlags*)&flags;
    fp->stat_count = ftParamGetStatUpdateCount();
}

// 0x800EA7B0
void ftParamUpdate1PGameAttackStats(ftStruct *fp, u16 flags)
{
    gmStatFlags stat_flags = *(gmStatFlags*)&flags;

    if ((fp->status_info.pl_kind != nFTPlayerKindDemo) && (gBattleState->game_type == nSCBattleGameType1PGame) && (fp->player == gSceneData.spgame_player))
    {
        if ((fp->stat_flags.stat_attack_id != nFTStatusAttackIDNone) && (fp->stat_flags.stat_attack_id != stat_flags.stat_attack_id))
        {
            gGM1PGameBonusAttackIDCount[fp->stat_flags.stat_attack_id]++;

            gGM1PGameBonusAttackIsSmashCount[fp->stat_flags.is_smash_attack]++;

            gGM1PGameBonusAttackGroundAirCount[fp->stat_flags.ga]++;

            gGM1PGameBonusAttackIsProjectileCount[fp->stat_flags.is_projectile]++;
        }
    }
}

// 0x800EA8B0
void ftParamSetStarHitStatusInvincible(ftStruct *fp, s32 star_invincible_timer)
{
    fp->star_hitstatus = nGMHitStatusInvincible;
    fp->star_invincible_timer = star_invincible_timer;

    ftParamCheckSetFighterColAnimID(fp->fighter_gobj, ITSTAR_COLANIM_ID, ITSTAR_COLANIM_LENGTH);
}

// 0x800EA8EC
void ftParamSetTimedHitStatusInvincible(ftStruct *fp, s32 invincible_timer)
{
    if (fp->invincible_timer < invincible_timer)
    {
        fp->invincible_timer = invincible_timer;
    }
    if (fp->intangible_timer != 0)
    {
        fp->special_hitstatus = nGMHitStatusIntangible;
    }
    else fp->special_hitstatus = nGMHitStatusInvincible;

    ftParamCheckSetFighterColAnimID(fp->fighter_gobj, 0xA, 0);
}

// 0x800EA948
void ftParamSetTimedHitStatusIntangible(ftStruct *fp, s32 intangible_timer)
{
    if (fp->intangible_timer < intangible_timer)
    {
        fp->intangible_timer = intangible_timer;
    }
    fp->special_hitstatus = nGMHitStatusIntangible;

    ftParamCheckSetFighterColAnimID(fp->fighter_gobj, 0xA, 0);
}

// 0x800EA98C
void ftParamUpdateBattleStats(s32 attack_player, s32 defend_player, s32 attack_damage)
{
    if ((attack_player != SCBATTLE_PLAYERS_MAX) && (attack_player != defend_player))
    {
        gBattleState->players[attack_player].total_damage_dealt += attack_damage;

        gBattleState->players[defend_player].total_damage_player[attack_player] += attack_damage;
        gBattleState->players[defend_player].combo_damage_foe += attack_damage;
        gBattleState->players[defend_player].combo_count_foe++;
    }
}

// 0x800EAA2C
void ftParamUpdate1PGameDamageStats(ftStruct *fp, s32 damage_player, s32 damage_object_class, s32 damage_object_kind, u16 flags, u16 damage_stat_count)
{
    fp->damage_player = damage_player;
    fp->damage_object_class = damage_object_class;
    fp->damage_object_kind = damage_object_kind;
    fp->damage_count++;

    if (!(damage_stat_count) || (fp->damage_stat_count != damage_stat_count))
    {
        fp->damage_stat_flags = *(gmStatFlags*)&flags;
        fp->damage_stat_count = damage_stat_count;

        if (gBattleState->game_type == nSCBattleGameType1PGame)
        {
            if ((gSceneData.spgame_player == damage_player) && (fp->damage_stat_flags.stat_attack_id != nFTStatusAttackIDNone))
            {
                gGM1PGameBonusDefendIDCount[fp->damage_stat_flags.stat_attack_id]++;
                gGM1PGameBonusDefendIsSmashCount[fp->damage_stat_flags.is_smash_attack]++;
                gGM1PGameBonusDefendGroundAirCount[fp->damage_stat_flags.ga]++;
                gGM1PGameBonusDefendIsProjectileCount[fp->damage_stat_flags.is_projectile]++;
            }
        }
    }
}

// 0x800EAB40
void ftParamGetEffectJointPosition(ftStruct *fp, Vec3f *pos)
{
    ftAttributes *attributes = fp->attributes;

    fp->effect_joint_array_id++;

    if (fp->effect_joint_array_id == ARRAY_COUNT(attributes->effect_joint_ids))
    {
        fp->effect_joint_array_id = 0;
    }
    pos->x = pos->y = pos->z = 0.0F;

    gmCollisionGetFighterPartsWorldPosition(fp->joints[attributes->effect_joint_ids[fp->effect_joint_array_id]], pos);
}

// 0x800EABDC
void* ftParamMakeEffect(GObj *fighter_gobj, s32 effect_id, s32 joint_id, Vec3f *effect_pos, Vec3f *effect_scatter, s32 lr, sb32 is_scale_pos, u32 arg7)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f effect_pos_mod;
    void *effect;
    f32 scale;
    efParticle *efpart;

    effect = NULL;

    switch (effect_id)
    {
    case nEFKindChargeSparkle:
        switch (fp->ft_kind)
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
            scale = 1.0F / fp->attributes->size_mul;

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
        if (fp->status_info.pl_kind != nFTPlayerKindDemo)
        {
            effect = efManagerQuakeMakeEffect(0);
        }
        break;

    case nEFKindQuakeMag1:
        if (fp->status_info.pl_kind != nFTPlayerKindDemo)
        {
            effect = efManagerQuakeMakeEffect(1);
        }
        break;

    case nEFKindQuakeMag2:
        if (fp->status_info.pl_kind != nFTPlayerKindDemo)
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
        efpart = efManagerSparkleWhiteScaleMakeEffect(&pos, 0.7F);

        if (efpart != NULL)
        {
            efpart->color1.a = 0xC0;
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
        if (fp->ft_kind == nFTKindYoshi)
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
    ftStruct *fp = ftGetStruct(fighter_gobj);
    u16 coll_mask = (fp->coll_data.coll_mask_prev ^ fp->coll_data.coll_mask_curr) & fp->coll_data.coll_mask_curr & MPCOLL_KIND_MAIN_MASK;
    Vec3f pos;

    if (coll_mask)
    {
        if (coll_mask & MPCOLL_KIND_LWALL)
        {
            pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

            pos.x += fp->coll_data.objcoll.width;
            pos.y += fp->coll_data.objcoll.center;

            efManagerKirbyStarMakeEffect(&pos);
        }
        if (coll_mask & MPCOLL_KIND_RWALL)
        {
            pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

            pos.x -= fp->coll_data.objcoll.width;
            pos.y += fp->coll_data.objcoll.center;

            efManagerKirbyStarMakeEffect(&pos);
        }
        if (coll_mask & MPCOLL_KIND_CEIL)
        {
            pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

            pos.y += fp->coll_data.objcoll.top;

            efManagerKirbyStarMakeEffect(&pos);
        }
        if (coll_mask & MPCOLL_KIND_GROUND)
        {
            pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

            pos.y += fp->coll_data.objcoll.bottom;

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
    ftParts *temp_v1;
    ftParts *temp_v1_5;

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
    ftParts *temp_v1;

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
void ftParamSetAnimLocks(ftStruct *fp)
{
    u32 flags0;         // First set of 32-bit mask of joint IDs to avoid animating
    u32 flags1;         // Second set of 32-bit mask of joint IDs to avoid animating
    u32 current_flags;
    ftParts *ft_parts;
    s32 i;
    u32 *animlock;
    ftAttributes *attributes = fp->attributes;

    animlock = attributes->animlock;
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
                ft_parts = fp->joints[i]->user_data.p;

                if (ft_parts != NULL)
                {
                    gmCollisionTransformMatrixAll(fp->joints[i], ft_parts, ft_parts->unk_dobjtrans_0x10);
                    ft_parts->transform_update_mode = 3;
                    fp->joints[i]->ommtx[0]->unk05 = 1;
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
void ftParamClearAnimLocks(ftStruct *fp)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->joints); i++)
    {
        if (fp->joints[i] != NULL)
        {
            ftParts *ft_parts = fp->joints[i]->user_data.p;

            if (ft_parts != NULL)
            {
                if (ft_parts->transform_update_mode == 3)
                {
                    ft_parts->transform_update_mode = 0;

                    fp->joints[i]->ommtx[0]->unk05 = 0;
                }
            }
        }
    }
}

// 0x800EB924
void func_ovl2_800EB924(Camera *cam, Mtx44f mtx, Vec3f *vec, f32 *rx, f32 *ry)
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

    *rx = (cam->viewport.vp.vscale[0] / 4) * (tempx * scale);
    *ry = (cam->viewport.vp.vscale[1] / 4) * (tempy * scale);
}

// 0x800EBA6C
f32 func_ovl2_800EBA6C(Vec3f *arg0, Vec3f *arg1)
{
    Vec3f sp1C = *arg1;
    f32 scale;

    lbVector_Vec3fNormalize(&sp1C);

    scale = (arg0->x * sp1C.x) + (sp1C.y * arg0->y) + (sp1C.z * arg0->z);

    lbVector_Vec3fScale(&sp1C, scale);

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
    else func_ovl0_800CD5AC(arg0, arg1, &sp1C);

    if (func_ovl0_800C7B58(&sp1C, arg2) < 0.0F)
    {
        return -lbVector_Vec3fAngleDiff(arg1, arg0);
    }
    else return lbVector_Vec3fAngleDiff(arg1, arg0);
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

    lbVector_Vec3fNormalizedCross(&sp50, &sp2C, &sp44);

    attach_dobj = dobj->child->user_data.p;

    sp38.x = attach_dobj->rotate.vec.f.x;
    sp38.y = attach_dobj->rotate.vec.f.y;
    sp38.z = attach_dobj->rotate.vec.f.z;

    lbVector_Vec3fNormalize(&sp44);
    lbVector_Vec3fNormalize(&sp38);
    lbVector_Vec3fNormalize(&sp50);

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

    sin_arg3 = bitmap_sinf(arg3);

    cos_arg3 = bitmap_cosf(arg3);

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
s32 ftParamGetCostumeRoyalID(s32 ft_kind, s32 color)
{
    return dFTParamCostumeIDs[ft_kind].royal[color];
}

// 0x800EC104
s32 ftParamGetCostumeTeamID(s32 ft_kind, s32 color)
{
    return dFTParamCostumeIDs[ft_kind].team[color];
}

// 0x800EC11C
s32 ftParamGetCostumeDevelop(s32 ft_kind)
{
    return dFTParamCostumeIDs[ft_kind].develop;
}

// 0x800EC130
void ftParamGameSet(void)
{
    ftMainClearGroundElementsAll();
    ifCommonBattleInitPlacement();
}
