#include <ft/fighter.h>
#include <wp/weapon.h>
#include <it/item.h>
#include <gr/ground.h>
#include <gm/battle.h>
#include "thread6.h"

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// Hitbox sound effects
// Rows = SFX type
// Columns = SFX level

// 0x80128D00
u16 ftMain_HitCollision_SoundEffects[/* */][gmHitCollision_SoundLevel_EnumMax] =
{
    { alSound_SFX_PunchS,             alSound_SFX_PunchM,             alSound_SFX_PunchL             }, // Punch
    { alSound_SFX_KickS,              alSound_SFX_KickM,              alSound_SFX_KickL              }, // Kick
    { alSound_SFX_MarioSpecialHiCoin, alSound_SFX_MarioSpecialHiCoin, alSound_SFX_MarioSpecialHiCoin }, // Coin
    { alSound_SFX_BurnS,              alSound_SFX_BurnM,              alSound_SFX_BurnL              }, // Burn
    { alSound_SFX_ShockS,             alSound_SFX_ShockM,             alSound_SFX_ShockL             }, // Shock
    { alSound_SFX_SlashS,             alSound_SFX_SlashM,             alSound_SFX_SlashL             }, // Slash
    { alSound_SFX_HarisenHit,         alSound_SFX_HarisenHit,         alSound_SFX_HarisenHit         }, // Fan / Slap
    { alSound_SFX_PunchM,             alSound_SFX_PunchL,             alSound_SFX_BatHit             }  // Bat
};

// 0x80128D30
grHitbox ftMain_HitCollision_GroundHitbox[/* */] =
{
    {  4,  1, 361, 100, 100, 0, gmHitCollision_Element_Fire  },
    {  5, 10,  90, 100, 200, 0, gmHitCollision_Element_Fire  },
    {  6, 10,  90, 100, 100, 0, gmHitCollision_Element_Fire  },
    {  7, 10, 361, 100,  80, 0, gmHitCollision_Element_Slash },
    {  8,  1,  90, 100, 100, 0, gmHitCollision_Element_Fire  },
    {  9,  1,  90, 100, 100, 0, gmHitCollision_Element_Fire  }
};

// 0x8012C4E0
f32 ftMap_SurfaceMaterials_Friction[/* */] = { 4.0F, 3.0F, 3.0F, 1.0F, 2.0F, 2.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F };

// 0x800DF0F0
void ftScript_ProcessScriptEvent(GObj *fighter_gobj, ftStruct *fp, ftMotionEvent *p_event, u32 ev_kind)
{
    ftScriptPointer *p_goto;
    s32 gfx_id;
    s32 i, j;
    sb32 var_v0;
    ftHitbox *ft_hit;
    s32 hit_id;
    s32 group_id;
    u32 sfx_id;
    s32 joint_index;
    Vec3f gfx_offset;
    Vec3f gfx_scatter;
    u32 flag;
    Vec3f hurt_offset;
    Vec3f hurt_size;
    ftAttributes *attributes;
    ftMotionEventDamage *p_damage;
    s32 ft_kind;
    s32 script_index;
    s32 flag2;
    ftMotionEventPlaySFX *plswork;

    switch (ev_kind)
    {
    case ftMotionEvent_Kind_End:
        p_event->p_script = NULL;

        break;

    case ftMotionEvent_Kind_SyncWait:
        p_event->frame_timer += ftMotionEventCast(p_event, ftMotionEventWait)->frames;

        ftMotionEventAdvance(p_event, ftMotionEventWait);

        break;

    case ftMotionEvent_Kind_AsyncWait:
        p_event->frame_timer = ftMotionEventCast(p_event, ftMotionEventWait)->frames - fighter_gobj->anim_frame;

        ftMotionEventAdvance(p_event, ftMotionEventWait);

        break;

    case ftMotionEvent_Kind_MakeHit:
    case ftMotionEvent_Kind_MakeHitScaleOffset:
        if (fp->status_info.pl_kind != Pl_Kind_Result)
        {
            hit_id = ftMotionEventCast(p_event, ftMotionEventMakeHit1)->hit_id;
            ft_hit = &fp->fighter_hit[hit_id];

            if ((ft_hit->update_state == gmHitCollision_UpdateState_Disable) || (ft_hit->group_id != ftMotionEventCast(p_event, ftMotionEventMakeHit1)->group_id))
            {
                ft_hit->group_id = ftMotionEventCast(p_event, ftMotionEventMakeHit1)->group_id;
                ft_hit->update_state = gmHitCollision_UpdateState_New;
                fp->is_hitbox_active = TRUE;

                for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
                {
                    if ((i != hit_id) && (fp->fighter_hit[i].update_state != gmHitCollision_UpdateState_Disable) && (ft_hit->group_id == fp->fighter_hit[i].group_id))
                    {
                        for (j = 0; j < ARRAY_COUNT(ft_hit->hit_targets); j++)
                        {
                            ft_hit->hit_targets[j] = fp->fighter_hit[i].hit_targets[j];
                        }
                        break;
                    }
                }
                if (i == ARRAY_COUNT(fp->fighter_hit))
                {
                    ftCollision_ClearHitRecordIndex(fp, hit_id);
                }
            }
            ft_hit->joint_index = ftParts_GetJointCheckLightHold(fp, ftMotionEventCast(p_event, ftMotionEventMakeHit1)->joint_index);
            ft_hit->joint = fp->joint[ft_hit->joint_index];
            ft_hit->damage = ftMotionEventCast(p_event, ftMotionEventMakeHit1)->damage;
            ft_hit->rebound = ftMotionEventCast(p_event, ftMotionEventMakeHit1)->rebound;
            ft_hit->element = ftMotionEventCast(p_event, ftMotionEventMakeHit1)->element;

            ftMotionEventAdvance(p_event, ftMotionEventMakeHit1);

            ft_hit->size = ftMotionEventCast(p_event, ftMotionEventMakeHit2)->size * 0.5F;
            ft_hit->offset.x = ftMotionEventCast(p_event, ftMotionEventMakeHit2)->off_x;

            ftMotionEventAdvance(p_event, ftMotionEventMakeHit2);

            ft_hit->offset.y = ftMotionEventCast(p_event, ftMotionEventMakeHit3)->off_y;
            ft_hit->offset.z = ftMotionEventCast(p_event, ftMotionEventMakeHit3)->off_z;

            ftMotionEventAdvance(p_event, ftMotionEventMakeHit3);

            ft_hit->angle = ftMotionEventCast(p_event, ftMotionEventMakeHit4)->angle;
            ft_hit->knockback_scale = ftMotionEventCast(p_event, ftMotionEventMakeHit4)->knockback_scale;
            ft_hit->knockback_weight = ftMotionEventCast(p_event, ftMotionEventMakeHit4)->knockback_weight;

            ft_hit->is_hit_air = ftMotionEventCast(p_event, ftMotionEventMakeHit4)->is_hit_ground_air & 1;           // Why?
            ft_hit->is_hit_ground = (ftMotionEventCast(p_event, ftMotionEventMakeHit4)->is_hit_ground_air & 2) >> 1; // ???

            ftMotionEventAdvance(p_event, ftMotionEventMakeHit4);

            ft_hit->shield_damage = ftMotionEventCast(p_event, ftMotionEventMakeHit5)->shield_damage;

            ft_hit->sfx_level = ftMotionEventCast(p_event, ftMotionEventMakeHit5)->sfx_level;
            ft_hit->sfx_kind = ftMotionEventCast(p_event, ftMotionEventMakeHit5)->sfx_kind;

            ft_hit->knockback_base = ftMotionEventCast(p_event, ftMotionEventMakeHit5)->knockback_base;

            ftMotionEventAdvance(p_event, ftMotionEventMakeHit5);

            ft_hit->is_scale_pos = (ev_kind == ftMotionEvent_Kind_MakeHitScaleOffset) ? TRUE : FALSE;

            ft_hit->attack_id = fp->attack_id;

            ft_hit->motion_count = fp->motion_count;

            ft_hit->damage = gmCommon_DamageApplyStale(fp->player, ft_hit->damage, ft_hit->attack_id, ft_hit->motion_count);
        }
        else ftMotionEventAdvance(p_event, ftMotionEventMakeHit);

        break;

    case ftMotionEvent_Kind_SetHitOffset:
        hit_id = ftMotionEventCast(p_event, ftMotionEventSetHitOffset1)->hit_id;

        ft_hit = &fp->fighter_hit[hit_id];

        ft_hit->offset.x = ftMotionEventCast(p_event, ftMotionEventSetHitOffset1)->off_x;

        ftMotionEventAdvance(p_event, ftMotionEventSetHitOffset1);

        ft_hit->offset.y = ftMotionEventCast(p_event, ftMotionEventSetHitOffset2)->off_y;
        ft_hit->offset.z = ftMotionEventCast(p_event, ftMotionEventSetHitOffset2)->off_z;

        ftMotionEventAdvance(p_event, ftMotionEventSetHitOffset2);

        break;

    case ftMotionEvent_Kind_SetHitDamage:
        if (fp->status_info.pl_kind != Pl_Kind_Result)
        {
            hit_id = ftMotionEventCast(p_event, ftMotionEventSetHitDamage)->hit_id;

            fp->fighter_hit[hit_id].damage = ftMotionEventCast(p_event, ftMotionEventSetHitDamage)->damage;

            ftMotionEventAdvance(p_event, ftMotionEventSetHitDamage);

            fp->fighter_hit[hit_id].damage = gmCommon_DamageApplyStale(fp->player, fp->fighter_hit[hit_id].damage, fp->fighter_hit[hit_id].attack_id, fp->fighter_hit[hit_id].motion_count);
        }
        else ftMotionEventAdvance(p_event, ftMotionEventSetHitDamage);

        break;

    case ftMotionEvent_Kind_SetHitSize:
        hit_id = ftMotionEventCast(p_event, ftMotionEventSetHitSize)->hit_id;

        fp->fighter_hit[hit_id].size = ftMotionEventCast(p_event, ftMotionEventSetHitSize)->size * 0.5F;

        ftMotionEventAdvance(p_event, ftMotionEventSetHitSize);

        break;

    case ftMotionEvent_Kind_SetHitSoundLevel:
        hit_id = ftMotionEventCast(p_event, ftMotionEventSetHitSound)->hit_id;

        fp->fighter_hit[hit_id].sfx_level = ftMotionEventCast(p_event, ftMotionEventSetHitSound)->sfx_level;

        ftMotionEventAdvance(p_event, ftMotionEventSetHitSound);

        break;

    case ftMotionEvent_Kind_RefreshHitIndex:
        hit_id = ftMotionEventCast(p_event, ftMotionEventRefreshHitIndex)->hit_id;

        ftMotionEventAdvance(p_event, ftMotionEventRefreshHitIndex);

        ftCollision_RefreshHitIndex(fighter_gobj, hit_id);

        break;

    case ftMotionEvent_Kind_ClearHitIndex:
        hit_id = ftMotionEventCast(p_event, ftMotionEventClearHitIndex)->hit_id;

        ftMotionEventAdvance(p_event, ftMotionEventClearHitIndex);

        fp->fighter_hit[hit_id].update_state = gmHitCollision_UpdateState_Disable;

        break;

    case ftMotionEvent_Kind_ClearHitAll:
        ftCommon_ClearHitAll(fighter_gobj);

        ftMotionEventAdvance(p_event, ftMotionEventClearHitAll);

        break;

    case ftMotionEvent_Kind_SetFighterThrow:
        ftMotionEventAdvance(p_event, ftMotionEventSetFighterThrow1);

        fp->fighter_throw = ftMotionEventCast(p_event, ftMotionEventSetFighterThrow2)->fighter_throw;

        ftMotionEventAdvance(p_event, ftMotionEventSetFighterThrow2);

        break;

    case ftMotionEvent_Kind_PlaySFXStoreInfo:
        if (!(fp->is_playing_sfx))
        {
            fp->p_sfx = func_800269C0(ftMotionEventCastAdvance(p_event, ftMotionEventPlaySFX)->sfx_id);

            fp->sfx_id = (fp->p_sfx != NULL) ? fp->p_sfx->sfx_id : 0;
        }
        else ftMotionEventAdvance(p_event, ftMotionEventPlaySFX);

        break;

    case ftMotionEvent_Kind_PlaySFX:
        if (!(fp->is_playing_sfx))
        {
            func_800269C0(ftMotionEventCastAdvance(p_event, ftMotionEventPlaySFX)->sfx_id);
        }
        else ftMotionEventAdvance(p_event, ftMotionEventPlaySFX);

        break;

    case ftMotionEvent_Kind_PlayLoopSFXStoreInfo:

        if (!(fp->is_playing_sfx))
        {
            ftCommon_PlayLoopSFXStoreInfo(fp, ftMotionEventCastAdvance(p_event, ftMotionEventPlaySFX)->sfx_id);
        }
        else ftMotionEventAdvance(p_event, ftMotionEventPlaySFX);

        break;

    case ftMotionEvent_Kind_StopLoopSFX:
        ftCommon_StopLoopSFX(fp), ftMotionEventAdvance(p_event, ftMotionEventPlaySFX);

        break;

    case ftMotionEvent_Kind_PlayVoiceStoreInfo:
        if (!(fp->is_playing_sfx) && (fp->attributes->is_have_voice))
        {
            ftCommon_PlayVoiceStoreInfo(fp, ftMotionEventCastAdvance(p_event, ftMotionEventPlaySFX)->sfx_id);
        }
        else ftMotionEventAdvance(p_event, ftMotionEventPlaySFX);

        break;

    case ftMotionEvent_Kind_PlayLoopVoiceStoreInfo:
        if (!(fp->is_playing_sfx) && (fp->attributes->is_have_voice))
        {
            ftCommon_PlayLoopSFXStoreInfo(fp, ftMotionEventCastAdvance(p_event, ftMotionEventPlaySFX)->sfx_id);
        }
        else ftMotionEventAdvance(p_event, ftMotionEventPlaySFX);

        break;

    case ftMotionEvent_Kind_PlaySmashVoice:
        if (!(fp->is_playing_sfx))
        {
            ftCommon_PlayVoiceStoreInfo(fp, fp->attributes->smash_sfx[lbRandom_GetIntRange(ARRAY_COUNT(fp->attributes->smash_sfx))]);

            ftMotionEventAdvance(p_event, ftMotionEventPlaySFX);
        }
        else ftMotionEventAdvance(p_event, ftMotionEventPlaySFX);

        break;

    case ftMotionEvent_Kind_SetAirJumpAdd:
        fp->ground_or_air = GA_Air;

        fp->phys_info.vel_air.z = DObjGetStruct(fighter_gobj)->translate.vec.f.z = 0.0F;

        fp->jumps_used++;

        ftMotionEventAdvance(p_event, ftMotionEventDefault);

        break;

    case ftMotionEvent_Kind_SetAirJumpMax:
        attributes = fp->attributes;

        fp->ground_or_air = GA_Air;

        fp->phys_info.vel_air.z = DObjGetStruct(fighter_gobj)->translate.vec.f.z = 0.0F;

        fp->jumps_used = attributes->jumps_max;

        ftMotionEventAdvance(p_event, ftMotionEventDefault);

        break;

    case ftMotionEvent_Kind_Effect:
    case ftMotionEvent_Kind_EffectScaleOffset:
        if (!(fp->is_playing_gfx))
        {
            joint_index = ftParts_GetJointCheckLightHold(fp, ftMotionEventCast(p_event, ftMotionEventMakeGFX1)->joint_index);
            gfx_id = ftMotionEventCast(p_event, ftMotionEventMakeGFX1)->gfx_id;
            flag = ftMotionEventCast(p_event, ftMotionEventMakeGFX1)->flag;

            ftMotionEventAdvance(p_event, ftMotionEventMakeGFX1);

            gfx_offset.x = ftMotionEventCast(p_event, ftMotionEventMakeGFX2)->off_x;
            gfx_offset.y = ftMotionEventCast(p_event, ftMotionEventMakeGFX2)->off_y;

            ftMotionEventAdvance(p_event, ftMotionEventMakeGFX2);

            gfx_offset.z = ftMotionEventCast(p_event, ftMotionEventMakeGFX3)->off_z;
            gfx_scatter.x = ftMotionEventCast(p_event, ftMotionEventMakeGFX3)->rng_x;

            ftMotionEventAdvance(p_event, ftMotionEventMakeGFX3);

            gfx_scatter.y = ftMotionEventCast(p_event, ftMotionEventMakeGFX4)->rng_y;
            gfx_scatter.z = ftMotionEventCast(p_event, ftMotionEventMakeGFX4)->rng_z;

            ftMotionEventAdvance(p_event, ftMotionEventMakeGFX4);

            ftParticle_MakeEffectKind(fighter_gobj, gfx_id, joint_index, &gfx_offset, &gfx_scatter, fp->lr, (ev_kind == ftMotionEvent_Kind_EffectScaleOffset) ? TRUE : FALSE, flag);
        }
        else ftMotionEventAdvance(p_event, ftMotionEventMakeGFX);

        break;

    case ftMotionEvent_Kind_SetHitStatusPartAll:
        ftCommon_SetHitStatusPartAll(fighter_gobj, ftMotionEventCast(p_event, ftMotionEventSetHitStatusAll)->hitstatus);

        ftMotionEventAdvance(p_event, ftMotionEventSetHitStatusAll);

        break;

    case ftMotionEvent_Kind_SetHitStatusPart:
        ftCommon_SetHitStatusPart(fighter_gobj, ftParts_GetJointCheckLightHold(fp, ftMotionEventCast(p_event, ftMotionEventSetHitStatusPart)->joint_index), ftMotionEventCast(p_event, ftMotionEventSetHitStatusPart)->hitstatus);

        ftMotionEventAdvance(p_event, ftMotionEventSetHitStatusPart);

        break;

    case ftMotionEvent_Kind_SetHitStatusAll:
        ftCollision_SetHitStatusAll(fighter_gobj, ftMotionEventCast(p_event, ftMotionEventSetHitStatusAll)->hitstatus);

        ftMotionEventAdvance(p_event, ftMotionEventSetHitStatusAll);

        break;

    case ftMotionEvent_Kind_ResetHurtAll:
        ftCommon_InitFighterHurtParts(fighter_gobj);

        ftMotionEventAdvance(p_event, ftMotionEventDefault);

        break;

    case ftMotionEvent_Kind_SetHurtPart:
        joint_index = ftParts_GetJointCheckLightHold(fp, ftMotionEventCast(p_event, ftMotionEventSetHurtPart1)->joint_index);

        ftMotionEventAdvance(p_event, ftMotionEventSetHurtPart1);

        hurt_offset.x = ftMotionEventCast(p_event, ftMotionEventSetHurtPart2)->off_x;
        hurt_offset.y = ftMotionEventCast(p_event, ftMotionEventSetHurtPart2)->off_y;

        ftMotionEventAdvance(p_event, ftMotionEventSetHurtPart2);

        hurt_offset.z = ftMotionEventCast(p_event, ftMotionEventSetHurtPart3)->off_z;
        hurt_size.x = ftMotionEventCast(p_event, ftMotionEventSetHurtPart3)->size_x;

        ftMotionEventAdvance(p_event, ftMotionEventSetHurtPart3);

        hurt_size.y = ftMotionEventCast(p_event, ftMotionEventSetHurtPart4)->size_y;
        hurt_size.z = ftMotionEventCast(p_event, ftMotionEventSetHurtPart4)->size_z;

        ftMotionEventAdvance(p_event, ftMotionEventSetHurtPart4);

        ftCommon_UpdateFighterHurtPartIndex(fighter_gobj, joint_index, &hurt_offset, &hurt_size);

        break;

    case ftMotionEvent_Kind_LoopBegin:
        p_event->p_goto[p_event->script_index] = (void*) ((uintptr_t)p_event->p_script + sizeof(ftMotionEventLoopBegin));

        p_event->script_index++;

        p_event->loop_count[p_event->script_index++ - 1] = ftMotionEventCast(p_event, ftMotionEventLoopBegin)->loop_count, ftMotionEventAdvance(p_event, ftMotionEventLoopBegin);

        break;

    case ftMotionEvent_Kind_LoopEnd:
        if (--p_event->loop_count[p_event->script_index - 2] != 0)
        {
            p_event->p_script = p_event->p_goto[p_event->script_index - 2];
        }
        else ftMotionEventAdvance(p_event, ftMotionEventDefault), p_event->script_index -= 2; // Seems fake, but also impossible to match otherwise???

        break;

    case ftMotionEvent_Kind_Subroutine:
        ftMotionEventAdvance(p_event, ftMotionEventSubroutine1);

        p_event->p_goto[p_event->script_index] = (void*) ((uintptr_t)p_event->p_script + sizeof(ftMotionEventSubroutine2));

        p_event->script_index++;

        p_event->p_script = ftMotionEventCast(p_event, ftMotionEventSubroutine2)->p_goto;

        break;

    case ftMotionEvent_Kind_SubroutineThrown:
        if (fp->throw_gobj != NULL)
        {
            ft_kind = fp->throw_ft_kind;

            ftMotionEventAdvance(p_event, ftMotionEventSubroutineThrown1);

            p_damage = ftMotionEventCast(p_event, ftMotionEventSubroutineThrown2)->p_subroutine;

            if (p_damage->p_script[fp->status_vars.common.damage.script_index][ft_kind] != NULL)
            {
                p_event->p_goto[p_event->script_index] = (void*) ((uintptr_t)p_event->p_script + sizeof(ftMotionEventSubroutineThrown2));

                p_event->script_index++;

                p_event->p_script = p_damage->p_script[fp->status_vars.common.damage.script_index][ft_kind];
            }
            else ftMotionEventAdvance(p_event, ftMotionEventSubroutineThrown2);
        }
        else ftMotionEventAdvance(p_event, ftMotionEventSubroutineThrown);

        break;

    case ftMotionEvent_Kind_Return:
        p_event->p_script = p_event->p_goto[--p_event->script_index];

        break;

    case ftMotionEvent_Kind_Goto:
        ftMotionEventAdvance(p_event, ftMotionEventGoto1);

        p_event->p_script = ftMotionEventCast(p_event, ftMotionEventGoto2)->p_goto;
        break;

    case ftMotionEvent_Kind_SetParallelScript:
        ftMotionEventAdvance(p_event, ftMotionEventParallel1);

        if (fp->motion_event[0][1].p_script == NULL)
        {
            fp->motion_event[0][1].p_script = fp->motion_event[1][1].p_script = ftMotionEventCast(p_event, ftMotionEventParallel2)->p_goto;

            fp->motion_event[0][1].frame_timer = fp->motion_event[1][1].frame_timer = DObjGetStruct(fighter_gobj)->dobj_f1 - fighter_gobj->anim_frame;

            fp->motion_event[0][1].script_index = fp->motion_event[1][1].script_index = 0;
        }
        ftMotionEventAdvance(p_event, ftMotionEventParallel2);

        break;

    case ftMotionEvent_Kind_ScriptPause:
        ftMotionEventAdvance(p_event, ftMotionEventDefault);

        p_event->frame_timer = (f32)FLOAT_MAX;
        break;

    case ftMotionEvent_Kind_SetModelPart:
        ftCommon_SetModelPartRenderIndex(fighter_gobj, ftParts_GetJointCheckLightHold(fp, ftMotionEventCast(p_event, ftMotionEventSetModelPart)->joint_index), ftMotionEventCast(p_event, ftMotionEventSetModelPart)->mode);

        ftMotionEventAdvance(p_event, ftMotionEventSetModelPart);
        break;

    case ftMotionEvent_Kind_ResetModelPartAll:
        ftCommon_ResetModelPartRenderAll(fighter_gobj);

        ftMotionEventAdvance(p_event, ftMotionEventDefault);
        break;

    case ftMotionEvent_Kind_HideModelPartAll:
        ftCommon_HideModelPartAll(fighter_gobj);

        ftMotionEventAdvance(p_event, ftMotionEventDefault);
        break;

    case ftMotionEvent_Kind_SetTexturePart:
        ftCommon_SetTexturePartIndex(fighter_gobj, ftMotionEventCast(p_event, ftMotionEventSetTexturePart)->obj_index, ftMotionEventCast(p_event, ftMotionEventSetTexturePart)->frame);

        ftMotionEventAdvance(p_event, ftMotionEventSetTexturePart);
        break;

    case ftMotionEvent_Kind_SetColAnim:
        ftColor_CheckSetColAnimIndex(fighter_gobj, ftMotionEventCast(p_event, ftMotionEventSetColAnim)->colanim_id, ftMotionEventCast(p_event, ftMotionEventSetColAnim)->duration);

        ftMotionEventAdvance(p_event, ftMotionEventSetColAnim);
        break;

    case ftMotionEvent_Kind_ResetColAnim:
        ftCommon_ResetColAnimStatUpdate(fighter_gobj);

        ftMotionEventAdvance(p_event, ftMotionEventDefault);
        break;

    case ftMotionEvent_Kind_SetFlag0:
        fp->command_vars.flags.flag0 = ftMotionEventCast(p_event, ftMotionEventSetFlag)->flag;

        ftMotionEventAdvance(p_event, ftMotionEventSetFlag);
        break;

    case ftMotionEvent_Kind_SetFlag1:
        fp->command_vars.flags.flag1 = ftMotionEventCast(p_event, ftMotionEventSetFlag)->flag;

        ftMotionEventAdvance(p_event, ftMotionEventSetFlag);
        break;

    case ftMotionEvent_Kind_SetFlag2:
        fp->command_vars.flags.flag2 = ftMotionEventCast(p_event, ftMotionEventSetFlag)->flag;

        ftMotionEventAdvance(p_event, ftMotionEventSetFlag);
        break;

    case ftMotionEvent_Kind_SetFlag3:
        fp->command_vars.flags.flag3 = ftMotionEventCast(p_event, ftMotionEventSetFlag)->flag;

        ftMotionEventAdvance(p_event, ftMotionEventSetFlag);
        break;

    case ftMotionEvent_Kind_SlopeContour:
        flag2 = fp->slope_contour;

        fp->slope_contour = ftMotionEventCastAdvance(p_event, ftMotionEventSlopeContour)->mode;

        if (!(flag2 & fp->slope_contour & 4))
        {
            DObjGetStruct(fighter_gobj)->rotate.vec.f.x = F_DEG_TO_RAD(0.0F);
        }
        break;

    case ftMotionEvent_Kind_HideItem:
        fp->is_show_item = ftMotionEventCast(p_event, ftMotionEventShowItem)->flag;

        ftMotionEventAdvance(p_event, ftMotionEventDefault);
        break;

    case ftMotionEvent_Kind_AfterImage:
        fp->afterimage.is_itemswing = ftMotionEventCast(p_event, ftMotionEventAfterImage)->is_itemswing;
        fp->afterimage.render_state = ftMotionEventCast(p_event, ftMotionEventAfterImage)->render_state;

        ftMotionEventAdvance(p_event, ftMotionEventAfterImage);
        break;

    case ftMotionEvent_Kind_MakeRumble:
        if (fp->status_info.pl_kind != Pl_Kind_Result)
        {
            ftMain_MakeRumble(fp, ftMotionEventCast(p_event, ftMotionEventMakeRumble)->rumble_id, ftMotionEventCast(p_event, ftMotionEventMakeRumble)->duration);
        }
        ftMotionEventAdvance(p_event, ftMotionEventMakeRumble);
        break;

    case ftMotionEvent_Kind_StopRumble:
        if (fp->status_info.pl_kind != Pl_Kind_Result)
        {
            func_ovl2_80115630(fp->player, ftMotionEventCast(p_event, ftMotionEventStopRumble)->rumble_id);
        }
        ftMotionEventAdvance(p_event, ftMotionEventStopRumble);
        break;
    }
}

// 0x800E02A8
void ftScript_UpdateAllEventsInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftMotionEvent *p_event;
    u32 ev_kind;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->motion_event); i++)
    {
        p_event = &fp->motion_event[0][i];

        if (p_event->p_script != NULL)
        {
            if (p_event->frame_timer != (f32)FLOAT_MAX)
            {
                p_event->frame_timer -= DObjGetStruct(fighter_gobj)->dobj_f1;
            }
        loop:
            if (p_event->p_script != NULL)
            {
                if (p_event->frame_timer == (f32)FLOAT_MAX)
                {
                    if ((DObjGetStruct(fighter_gobj)->dobj_f1 <= fighter_gobj->anim_frame)) continue;

                    else p_event->frame_timer = -fighter_gobj->anim_frame;
                }
                else if (p_event->frame_timer > 0.0F) continue;

                ev_kind = ftMotionEventCast(p_event, ftMotionEventMakeGFX1)->opcode;

                if (((ev_kind == ftMotionEvent_Kind_Effect) || (ev_kind == ftMotionEvent_Kind_EffectScaleOffset)) && (fp->is_effect_interrupt))
                {
                    ftMotionEventAdvance(p_event, ftMotionEventMakeGFX);
                }
                else ftScript_ProcessScriptEvent(fighter_gobj, fp, p_event, ev_kind);

                goto loop;
            }
        }
    }
    if (!(fp->is_effect_interrupt))
    {
        for (i = 0; i < ARRAY_COUNT(fp->motion_event); i++)
        {
            fp->motion_event[1][i] = fp->motion_event[0][i];
        }
    }
}

// 0x800E0478 - Fast forward all fighter-specific events, update only core events (sync timer, async timer, goto, subroutine, etc.)
void ftScript_UpdateDefaultEvents(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftMotionEvent *p_event;
    u32 ev_kind;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->motion_event); i++)
    {
        p_event = &fp->motion_event[0][i];

        if (p_event->p_script != NULL)
        {
            if (p_event->frame_timer != (f32)FLOAT_MAX)
            {
                p_event->frame_timer -= DObjGetStruct(fighter_gobj)->dobj_f1;
            }
        loop:
            if (p_event->p_script != NULL)
            {
                if (p_event->frame_timer == (f32)FLOAT_MAX)
                {
                    if ((DObjGetStruct(fighter_gobj)->dobj_f1 <= fighter_gobj->anim_frame)) continue;

                    else p_event->frame_timer = -fighter_gobj->anim_frame;
                }
                else if (p_event->frame_timer > 0.0F) continue;

                ev_kind = ftMotionEventCast(p_event, ftMotionEventDefault)->opcode;

                switch (ev_kind)
                {
                case ftMotionEvent_Kind_ClearHitIndex:
                case ftMotionEvent_Kind_ClearHitAll:
                case ftMotionEvent_Kind_SetHitDamage:
                case ftMotionEvent_Kind_SetHitSize:
                case ftMotionEvent_Kind_SetHitSoundLevel:
                case ftMotionEvent_Kind_RefreshHitIndex:
                case ftMotionEvent_Kind_PlaySFX:
                case ftMotionEvent_Kind_PlayLoopSFXStoreInfo:
                case ftMotionEvent_Kind_StopLoopSFX:
                case ftMotionEvent_Kind_PlayVoiceStoreInfo:
                case ftMotionEvent_Kind_PlayLoopVoiceStoreInfo:
                case ftMotionEvent_Kind_PlaySFXStoreInfo:
                case ftMotionEvent_Kind_PlaySmashVoice:
                case ftMotionEvent_Kind_SetFlag0:
                case ftMotionEvent_Kind_SetFlag1:
                case ftMotionEvent_Kind_SetFlag2:
                case ftMotionEvent_Kind_SetAirJumpAdd:
                case ftMotionEvent_Kind_SetAirJumpMax:
                case ftMotionEvent_Kind_SetColAnim:
                case ftMotionEvent_Kind_ResetColAnim:
                case ftMotionEvent_Kind_MakeRumble:
                case ftMotionEvent_Kind_StopRumble:
                case ftMotionEvent_Kind_AfterImage:
                    ftMotionEventAdvance(p_event, ftMotionEventDefault);
                    break;

                case ftMotionEvent_Kind_Effect:
                case ftMotionEvent_Kind_EffectScaleOffset:
                    ftMotionEventAdvance(p_event, ftMotionEventMakeGFX);
                    break;

                case ftMotionEvent_Kind_MakeHit:
                case ftMotionEvent_Kind_MakeHitScaleOffset:
                    ftMotionEventAdvance(p_event, ftMotionEventMakeHit);
                    break;

                case ftMotionEvent_Kind_SetHitOffset:
                    ftMotionEventAdvance(p_event, ftMotionEventSetHitOffset);
                    break;

                default:
                    ftScript_ProcessScriptEvent(fighter_gobj, fp, p_event, ev_kind);
                    break;
                }
                goto loop;
            }
        }
    }
    for (i = 0; i < ARRAY_COUNT(fp->motion_event); i++)
    {
        fp->motion_event[1][i] = fp->motion_event[0][i];
    }
}

// 0x800E0654 - Update only standard events and GFX spawn
void ftScript_UpdateDefaultEventsGFX(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftMotionEvent *p_event;
    u32 ev_kind;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->motion_event); i++)
    {
        p_event = &fp->motion_event[1][i];

        if (p_event->p_script != NULL)
        {
            if (p_event->frame_timer != (f32)FLOAT_MAX)
            {
                p_event->frame_timer -= DObjGetStruct(fighter_gobj)->dobj_f1;
            }
        loop:
            if (p_event->p_script != NULL)
            {
                if (p_event->frame_timer == (f32)FLOAT_MAX)
                {
                    if ((DObjGetStruct(fighter_gobj)->dobj_f1 <= fighter_gobj->anim_frame)) continue;

                    else p_event->frame_timer = -fighter_gobj->anim_frame;
                }
                else if (p_event->frame_timer > 0.0F) continue;

                ev_kind = ftMotionEventCast(p_event, ftMotionEventDefault)->opcode;

                switch (ev_kind)
                {
                case ftMotionEvent_Kind_End:
                case ftMotionEvent_Kind_SyncWait:
                case ftMotionEvent_Kind_AsyncWait:
                case ftMotionEvent_Kind_SubroutineThrown:
                case ftMotionEvent_Kind_LoopBegin:
                case ftMotionEvent_Kind_LoopEnd:
                case ftMotionEvent_Kind_Subroutine:
                case ftMotionEvent_Kind_Return:
                case ftMotionEvent_Kind_Goto:
                case ftMotionEvent_Kind_ScriptPause:
                case ftMotionEvent_Kind_Effect:
                case ftMotionEvent_Kind_EffectScaleOffset:
                    ftScript_ProcessScriptEvent(fighter_gobj, fp, p_event, ev_kind);
                    break;

                case ftMotionEvent_Kind_MakeHit:
                case ftMotionEvent_Kind_MakeHitScaleOffset:
                    ftMotionEventAdvance(p_event, ftMotionEventMakeHit);
                    break;

                case ftMotionEvent_Kind_SetHitOffset:
                case ftMotionEvent_Kind_SetFighterThrow:
                case ftMotionEvent_Kind_SetParallelScript:
                    ftMotionEventAdvance(p_event, ftMotionEventDouble);
                    break;

                case ftMotionEvent_Kind_SetHurtPart:
                    ftMotionEventAdvance(p_event, ftMotionEventSetHurtPart);
                    break;

                default:
                    ftMotionEventAdvance(p_event, ftMotionEventDefault);
                    break;
                }
                goto loop;
            }
        }
    }
}

// 0x800E07D4
void ftMain_UpdateTransNJoint(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->anim_flags.flags.is_use_transn_joint)
    {
        fp->anim_vel = fp->joint[ftParts_Joint_TransN]->translate.vec.f;
    }
    func_ovl2_800E82B8(fighter_gobj);
    func_ovl2_800EB648(fp->joint[ftParts_Joint_TopN]);
}

// 0x800E0830
void ftMain_UpdateAnimCheckInterrupt(GObj *fighter_gobj)
{
    ftMain_UpdateTransNJoint(fighter_gobj);
    ftScript_UpdateAllEventsInterrupt(fighter_gobj);
}

// 0x800E0858
void ftMain_UpdateAnimAllEvents(GObj *fighter_gobj)
{
    ftMain_UpdateTransNJoint(fighter_gobj);
    ftScript_UpdateDefaultEvents(fighter_gobj);
}

// 0x800E0880
sb32 ftMain_UpdateColAnim(caStruct *colanim, GObj *fighter_gobj, sb32 is_playing_sfx, sb32 is_playing_gfx)
{
    s32 i, j;
    ftStruct *fp;
    caScript *cs;
    void *p_script;
    s32 gfx_id;
    s32 joint_index;
    u32 flag;
    caColorEventDefault *def;
    Vec3f gfx_offset;
    Vec3f gfx_scatter;
    u32 ev_kind;
    s32 blend_frames;

    for (i = 0; i < ARRAY_COUNT(colanim->cs); i++)
    {
        cs = &colanim->cs[i]; // What's the point bruh

        if ((colanim->cs[i].p_script != NULL) && (colanim->cs[i].color_event_timer != 0))
        {
            colanim->cs[i].color_event_timer--;
        }
        while ((colanim->cs[i].p_script != NULL) && (cs->color_event_timer == 0))
        {
            ev_kind = caColorEventCast(colanim->cs[i].p_script, caColorEventDefault)->opcode;

            switch (ev_kind)
            {
            case caColorEvent_Kind_End:
                for (j = 0; j < ARRAY_COUNT(colanim->cs); j++)
                {
                    if ((j != i) && (colanim->cs[j].p_script != NULL)) break;
                }

                if (j == ARRAY_COUNT(colanim->cs))
                {
                    return TRUE;
                }
                else colanim->cs[i].p_script = NULL;
                break;

            case caColorEvent_Kind_Wait:
                colanim->cs[i].color_event_timer = caColorEventCast(colanim->cs[i].p_script, caColorEventDefault)->value1, caColorEventAdvance(colanim->cs[i].p_script, caColorEventDefault);
                break;

            case caColorEvent_Kind_Goto:
                caColorEventAdvance(colanim->cs[i].p_script, caColorEventGoto1);

                colanim->cs[i].p_script = caColorEventCast(colanim->cs[i].p_script, caColorEventGoto2)->p_goto;
                break;

            case caColorEvent_Kind_LoopBegin:
                colanim->cs[i].p_subroutine[colanim->cs[i].script_index++] = (void*) ((uintptr_t)colanim->cs[i].p_script + sizeof(caColorEventLoopBegin));
                colanim->cs[i].p_subroutine[colanim->cs[i].script_index++] = caColorEventCast(colanim->cs[i].p_script, caColorEventLoopBegin)->loop_count, caColorEventAdvance(colanim->cs[i].p_script, caColorEventLoopBegin);
                break;

            case caColorEvent_Kind_LoopEnd:
                if (--colanim->cs[i].loop_count[colanim->cs[i].script_index - 2] != 0)
                {
                    colanim->cs[i].p_script = colanim->cs[i].p_subroutine[colanim->cs[i].script_index - 2];
                }
                else caColorEventAdvance(colanim->cs[i].p_script, caColorEventDefault), colanim->cs[i].script_index -= 2;
                break;

            case caColorEvent_Kind_Subroutine:
                caColorEventAdvance(colanim->cs[i].p_script, caColorEventSubroutine1);

                colanim->cs[i].p_subroutine[colanim->cs[i].script_index++] = (void*) ((uintptr_t)colanim->cs[i].p_script + sizeof(caColorEventSubroutine1));

                colanim->cs[i].p_script = caColorEventCast(colanim->cs[i].p_script, caColorEventSubroutine2)->p_subroutine;
                break;

            case caColorEvent_Kind_Return:
                colanim->cs[i].p_script = colanim->cs[i].p_subroutine[--colanim->cs[i].script_index];
                break;

            case caColorEvent_Kind_SetParallelScript:
                caColorEventAdvance(colanim->cs[i].p_script, caColorEventParallel1);

                if (colanim->cs[1].p_script == NULL)
                {
                    colanim->cs[1].p_script = caColorEventCast(colanim->cs[i].p_script, caColorEventParallel2)->p_script;
                    colanim->cs[1].color_event_timer = 0;
                    colanim->cs[1].script_index = 0;
                }
                caColorEventAdvance(colanim->cs[i].p_script, caColorEventParallel2);
                break;

            case caColorEvent_Kind_ToggleColorOff:
                colanim->is_use_maincolor = colanim->is_use_blendcolor = colanim->skeleton_id = 0;

                caColorEventAdvance(colanim->cs[i].p_script, caColorEventDefault);
                break;

            case caColorEvent_Kind_SetColor1:
                colanim->is_use_maincolor = TRUE;

                caColorEventAdvance(colanim->cs[i].p_script, caColorEventSetRGBA1);

                colanim->maincolor.r = caColorEventCast(colanim->cs[i].p_script, caColorEventSetRGBA2)->r;
                colanim->maincolor.g = caColorEventCast(colanim->cs[i].p_script, caColorEventSetRGBA2)->g;
                colanim->maincolor.b = caColorEventCast(colanim->cs[i].p_script, caColorEventSetRGBA2)->b;
                colanim->maincolor.a = caColorEventCast(colanim->cs[i].p_script, caColorEventSetRGBA2)->a;

                colanim->maincolor.ir = colanim->maincolor.ig = colanim->maincolor.ib = colanim->maincolor.ia = 0;

                caColorEventAdvance(colanim->cs[i].p_script, caColorEventSetRGBA2);
                break;

            case caColorEvent_Kind_SetColor2:
                colanim->is_use_blendcolor = TRUE;

                caColorEventAdvance(colanim->cs[i].p_script, caColorEventSetRGBA1);

                colanim->blendcolor.r = caColorEventCast(colanim->cs[i].p_script, caColorEventSetRGBA2)->r;
                colanim->blendcolor.g = caColorEventCast(colanim->cs[i].p_script, caColorEventSetRGBA2)->g;
                colanim->blendcolor.b = caColorEventCast(colanim->cs[i].p_script, caColorEventSetRGBA2)->b;
                colanim->blendcolor.a = caColorEventCast(colanim->cs[i].p_script, caColorEventSetRGBA2)->a;

                colanim->blendcolor.ir = colanim->blendcolor.ig = colanim->blendcolor.ib = colanim->blendcolor.ia = 0;

                caColorEventAdvance(colanim->cs[i].p_script, caColorEventSetRGBA2);
                break;

            case caColorEvent_Kind_BlendColor1:
                blend_frames = caColorEventCast(colanim->cs[i].p_script, caColorEventBlendRGBA1)->blend_frames;

                caColorEventAdvance(colanim->cs[i].p_script, caColorEventBlendRGBA1);

                colanim->maincolor.ir = (s32)(caColorEventCast(colanim->cs[i].p_script, caColorEventBlendRGBA2)->r - colanim->maincolor.r) / blend_frames;
                colanim->maincolor.ig = (s32)(caColorEventCast(colanim->cs[i].p_script, caColorEventBlendRGBA2)->g - colanim->maincolor.g) / blend_frames;
                colanim->maincolor.ib = (s32)(caColorEventCast(colanim->cs[i].p_script, caColorEventBlendRGBA2)->b - colanim->maincolor.b) / blend_frames;
                colanim->maincolor.ia = (s32)(caColorEventCast(colanim->cs[i].p_script, caColorEventBlendRGBA2)->a - colanim->maincolor.a) / blend_frames;

                caColorEventAdvance(colanim->cs[i].p_script, caColorEventBlendRGBA2);
                break;

            case caColorEvent_Kind_BlendColor2:
                blend_frames = caColorEventCast(colanim->cs[i].p_script, caColorEventBlendRGBA1)->blend_frames;

                caColorEventAdvance(colanim->cs[i].p_script, caColorEventBlendRGBA1);

                colanim->blendcolor.ir = (s32)(caColorEventCast(colanim->cs[i].p_script, caColorEventBlendRGBA2)->r - colanim->blendcolor.r) / blend_frames;
                colanim->blendcolor.ig = (s32)(caColorEventCast(colanim->cs[i].p_script, caColorEventBlendRGBA2)->g - colanim->blendcolor.g) / blend_frames;
                colanim->blendcolor.ib = (s32)(caColorEventCast(colanim->cs[i].p_script, caColorEventBlendRGBA2)->b - colanim->blendcolor.b) / blend_frames;
                colanim->blendcolor.ia = (s32)(caColorEventCast(colanim->cs[i].p_script, caColorEventBlendRGBA2)->a - colanim->blendcolor.a) / blend_frames;

                caColorEventAdvance(colanim->cs[i].p_script, caColorEventBlendRGBA2);
                break;

            case caColorEvent_Kind_Effect:
            case caColorEvent_Kind_EffectScaleOffset:
                if (is_playing_gfx == FALSE)
                {
                    fp = ftGetStruct(fighter_gobj);

                    joint_index = ftParts_GetJointCheckLightHold(fp, caColorEventCast(colanim->cs[i].p_script, caColorEventCreateGFX1)->joint_index);
                    gfx_id = caColorEventCast(colanim->cs[i].p_script, caColorEventCreateGFX1)->gfx_id;
                    flag = caColorEventCast(colanim->cs[i].p_script, caColorEventCreateGFX1)->flag;

                    caColorEventAdvance(colanim->cs[i].p_script, caColorEventCreateGFX1);

                    gfx_offset.x = caColorEventCast(colanim->cs[i].p_script, caColorEventCreateGFX2)->off_x;
                    gfx_offset.y = caColorEventCast(colanim->cs[i].p_script, caColorEventCreateGFX2)->off_y;

                    caColorEventAdvance(colanim->cs[i].p_script, caColorEventCreateGFX2);

                    gfx_offset.z = caColorEventCast(colanim->cs[i].p_script, caColorEventCreateGFX3)->off_z;
                    gfx_scatter.x = caColorEventCast(colanim->cs[i].p_script, caColorEventCreateGFX3)->rng_x;

                    caColorEventAdvance(colanim->cs[i].p_script, caColorEventCreateGFX3);

                    gfx_scatter.y = caColorEventCast(colanim->cs[i].p_script, caColorEventCreateGFX4)->rng_y;
                    gfx_scatter.z = caColorEventCast(colanim->cs[i].p_script, caColorEventCreateGFX4)->rng_z;

                    caColorEventAdvance(colanim->cs[i].p_script, caColorEventCreateGFX4);

                    ftParticle_MakeEffectKind(fighter_gobj, gfx_id, joint_index, &gfx_offset, &gfx_scatter, fp->lr, (ev_kind == caColorEvent_Kind_EffectScaleOffset) ? TRUE : FALSE, flag);
                }
                else caColorEventAdvance(colanim->cs[i].p_script, caColorEventCreateGFX);
                break;

            case caColorEvent_Kind_SetLight:
                colanim->is_use_light = TRUE;

                colanim->light_angle1 = caColorEventCast(colanim->cs[i].p_script, caColorEventSetLight)->light1;
                colanim->light_angle2 = caColorEventCast(colanim->cs[i].p_script, caColorEventSetLight)->light2;

                caColorEventAdvance(colanim->cs[i].p_script, caColorEventSetLight);
                break;

            case caColorEvent_Kind_ToggleLightOff:
                colanim->is_use_light = FALSE;

                caColorEventAdvance(colanim->cs[i].p_script, caColorEventDefault);
                break;

            case caColorEvent_Kind_PlaySFX:
                if (is_playing_sfx == FALSE)
                {
                    func_800269C0(caColorEventCastAdvance(colanim->cs[i].p_script, caColorEventPlaySFX)->sfx_id);
                }
                else caColorEventAdvance(colanim->cs[i].p_script, caColorEventDefault);
                break;

            case caColorEvent_Kind_SetSkeletonID:
                colanim->skeleton_id = caColorEventCastAdvance(colanim->cs[i].p_script, caColorEventDefault)->value1;
                break;

            default:
                break;
            }
        }
    }
    if (colanim->is_use_maincolor)
    {
        colanim->maincolor.r += colanim->maincolor.ir;
        colanim->maincolor.g += colanim->maincolor.ig;
        colanim->maincolor.b += colanim->maincolor.ib;
        colanim->maincolor.a += colanim->maincolor.ia;
    }
    if (colanim->is_use_blendcolor)
    {
        colanim->blendcolor.r += colanim->blendcolor.ir;
        colanim->blendcolor.g += colanim->blendcolor.ig;
        colanim->blendcolor.b += colanim->blendcolor.ib;
        colanim->blendcolor.a += colanim->blendcolor.ia;
    }
    if (colanim->duration != 0)
    {
        colanim->duration--;

        if (colanim->duration == 0)
        {
            return TRUE;
        }
    }
    return FALSE;
}

// 0x800E11C8
void ftMain_UpdateColAnim(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    while (ftMain_UpdateColAnim(&fp->colanim, fighter_gobj, fp->is_playing_sfx, fp->is_playing_gfx) != FALSE)
    {
        ftCommon_ResetColAnimStatUpdate(fighter_gobj);
    }
}

// 0x800E1260
void ftMain_ProcInterruptMain(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    ftStruct *other_fp;
    ftAttributes *this_attributes;
    ftAttributes *other_attributes;
    ftPlayerInput *pl;
    ftComputerInput *cp;
    gmController *p_controller;
    GObj *other_gobj;
    f32 jostle_dist_x;
    f32 dist_z;
    sb32 is_check_self;
    sb32 is_jostle;
    u16 button_tap_mask;
    u16 button_press;
    u16 button_press_com;
    f32 this_jostle;

    if (!(this_fp->is_disable_control))
    {
        this_fp->status_info.status_time_spent++;
    }
    if (!(this_fp->is_disable_control))
    {
        this_fp->input.pl.stick_prev.x = this_fp->input.pl.stick_range.x;
        this_fp->input.pl.stick_prev.y = this_fp->input.pl.stick_range.y;

        switch (this_fp->status_info.pl_kind)
        {
        default:
            pl = &this_fp->input.pl;
            break;

        case Pl_Kind_Human:
            p_controller = this_fp->input.p_controller;
            pl = &this_fp->input.pl;

            button_press = p_controller->button_press;

            if (button_press & HAL_BUTTON_R)
            {
                button_press |= (HAL_BUTTON_A | HAL_BUTTON_Z);
            }

            pl->stick_range.x = p_controller->stick_range.x;
            pl->stick_range.y = p_controller->stick_range.y;

            button_tap_mask = (button_press ^ pl->button_hold) & button_press;

            pl->button_tap = (this_fp->hitlag_timer != 0) ? pl->button_tap | button_tap_mask : button_tap_mask;

            button_tap_mask = (button_press ^ pl->button_hold) & pl->button_hold;

            pl->button_tap_prev = (this_fp->hitlag_timer != 0) ? pl->button_tap_prev | button_tap_mask : button_tap_mask;

            pl->button_hold = button_press;

            break;

        case Pl_Kind_CPU:
            func_unkmulti_8013A834(fighter_gobj);
            goto next;

        case Pl_Kind_Intro:
        case Pl_Kind_Explain:
            ftExplain_ProcessInputSequence(fighter_gobj);

        next:
            cp = &this_fp->input.cp;
            pl = &this_fp->input.pl;

            button_press_com = this_fp->input.cp.button_inputs;

            if (button_press_com & HAL_BUTTON_R)
            {
                button_press_com |= (HAL_BUTTON_A | HAL_BUTTON_Z);
            }

            pl->stick_range.x = cp->stick_range.x;
            pl->stick_range.y = cp->stick_range.y;

            button_tap_mask = (button_press_com ^ pl->button_hold) & button_press_com;

            pl->button_tap = (this_fp->hitlag_timer != 0) ? pl->button_tap | button_tap_mask : button_tap_mask;

            button_tap_mask = (button_press_com ^ pl->button_hold) & pl->button_hold;

            pl->button_tap_prev = (this_fp->hitlag_timer != 0) ? pl->button_tap_prev | button_tap_mask : button_tap_mask;

            pl->button_hold = button_press_com;

            break;
        }
        if (pl->stick_range.x > GCONTROLLER_RANGE_MAX_I)
        {
            pl->stick_range.x = GCONTROLLER_RANGE_MAX_I;
        }
        if (pl->stick_range.x < -GCONTROLLER_RANGE_MAX_I)
        {
            pl->stick_range.x = -GCONTROLLER_RANGE_MAX_I;
        }
        if (pl->stick_range.y > GCONTROLLER_RANGE_MAX_I)
        {
            pl->stick_range.y = GCONTROLLER_RANGE_MAX_I;
        }
        if (pl->stick_range.y < -GCONTROLLER_RANGE_MAX_I)
        {
            pl->stick_range.y = -GCONTROLLER_RANGE_MAX_I;
        }
        if (gSaveData.mprotect_fail & GMSAVE_PROTECTFAIL_HALFSTICKRANGE)
        {
            pl->stick_range.x *= 0.5F;
            pl->stick_range.y *= 0.5F;
        }
        if (pl->stick_range.x >= 20)
        {
            if (pl->stick_prev.x >= 20)
            {
                this_fp->tap_stick_x++, this_fp->hold_stick_x++;
            }
            else this_fp->tap_stick_x = this_fp->hold_stick_x = 1;
        }
        else if (pl->stick_range.x <= -20)
        {
            if (pl->stick_prev.x <= -20)
            {
                this_fp->tap_stick_x++, this_fp->hold_stick_x++;
            }
            else this_fp->tap_stick_x = this_fp->hold_stick_x = 1;
        }
        else this_fp->tap_stick_x = this_fp->hold_stick_x = FTINPUT_STICKBUFFER_FRAMES_MAX;

        if (this_fp->tap_stick_x > FTINPUT_STICKBUFFER_FRAMES_MAX)
        {
            this_fp->tap_stick_x = FTINPUT_STICKBUFFER_FRAMES_MAX;
        }
        if (this_fp->hold_stick_x > FTINPUT_STICKBUFFER_FRAMES_MAX)
        {
            this_fp->hold_stick_x = FTINPUT_STICKBUFFER_FRAMES_MAX;
        }
        if (pl->stick_range.y >= 20)
        {
            if (pl->stick_prev.y >= 20)
            {
                this_fp->tap_stick_y++, this_fp->hold_stick_y++;
            }
            else this_fp->tap_stick_y = this_fp->hold_stick_y = 1;
        }
        else if (pl->stick_range.y <= -20)
        {
            if (pl->stick_prev.y <= -20)
            {
                this_fp->tap_stick_y++, this_fp->hold_stick_y++;
            }
            else this_fp->tap_stick_y = this_fp->hold_stick_y = 1;
        }
        else this_fp->tap_stick_y = this_fp->hold_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;

        if (this_fp->tap_stick_y > FTINPUT_STICKBUFFER_FRAMES_MAX)
        {
            this_fp->tap_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;
        }
        if (this_fp->hold_stick_y > FTINPUT_STICKBUFFER_FRAMES_MAX)
        {
            this_fp->hold_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;
        }
    }
    if (this_fp->time_since_last_z < FTINPUT_ZBUTTONLAST_FRAMES_MAX)
    {
        this_fp->time_since_last_z++;
    }
    if (this_fp->input.pl.button_tap & this_fp->input.button_mask_z)
    {
        this_fp->time_since_last_z = 0;
    }
    if (this_fp->hitlag_timer != 0)
    {
        this_fp->hitlag_timer--;

        if (this_fp->hitlag_timer == 0)
        {
            this_fp->x192_flag_b6 = FALSE;

            if (this_fp->proc_lagend != NULL)
            {
                this_fp->proc_lagend(fighter_gobj);
            }
        }
    }
    this_fp->is_effect_interrupt = TRUE;

    if (this_fp->hitlag_timer == 0)
    {
        ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
    }
    ftMain_UpdateColAnim(fighter_gobj);

    if (this_fp->intangible_timer != 0)
    {
        this_fp->intangible_timer--;

        if (this_fp->intangible_timer == 0)
        {
            this_fp->special_hitstatus = (this_fp->invincible_timer != FALSE) ? gmHitCollision_HitStatus_Invincible : gmHitCollision_HitStatus_Normal;

            if (this_fp->colanim.colanim_id == 0xA)
            {
                ftCommon_ResetColAnimStatUpdate(fighter_gobj);
            }
        }
    }
    if (this_fp->invincible_timer != 0)
    {
        this_fp->invincible_timer--;

        if ((this_fp->invincible_timer == 0) && (this_fp->intangible_timer == 0))
        {
            this_fp->special_hitstatus = gmHitCollision_HitStatus_Normal;

            if (this_fp->colanim.colanim_id == 0xA)
            {
                ftCommon_ResetColAnimStatUpdate(fighter_gobj);
            }
        }
    }
    if (this_fp->star_invincible_timer != 0)
    {
        this_fp->star_invincible_timer--;

        if (this_fp->star_invincible_timer == 0)
        {
            this_fp->star_hitstatus = gmHitCollision_HitStatus_Normal;

            if (this_fp->colanim.colanim_id == 0x4A)
            {
                ftCommon_ResetColAnimStatUpdate(fighter_gobj);
            }
        }
        else if (this_fp->star_invincible_timer == ITSTAR_WARN_BEGIN_FRAME)
        {
            ftSpecialItem_BGMCheckFighters();
        }
    }
    if (this_fp->damage_heal != 0)
    {
        this_fp->damage_heal--;

        if (this_fp->percent_damage != 0)
        {
            this_fp->percent_damage--;

            func_800269C0(alSound_SFX_PlayerHeal);

            gBattleState->player_block[this_fp->player].stock_damage_all = this_fp->percent_damage;
        }
        if (this_fp->percent_damage == 0)
        {
            this_fp->damage_heal = 0;
        }
        if ((this_fp->damage_heal == 0) && (this_fp->colanim.colanim_id == 0x9))
        {
            ftCommon_ResetColAnimStatUpdate(fighter_gobj);
        }
    }
    if ((this_fp->item_hold != NULL) && (this_fp->status_info.status_id != ftStatus_Common_LightGet) && (itGetStruct(this_fp->item_hold)->it_kind == It_Kind_Hammer))
    {
        ftHammer_UpdateStats(fighter_gobj);
    }
    if (this_fp->shuffle_timer != 0)
    {
        this_fp->shuffle_timer--;

        this_fp->shuffle_frame_index++;

        if (this_fp->shuffle_frame_index == this_fp->shuffle_index_max)
        {
            this_fp->shuffle_frame_index = 0;
        }
    }
    if (this_fp->proc_gfx != NULL)
    {
        this_fp->proc_gfx(fighter_gobj);
    }
    if (this_fp->hitlag_timer == 0)
    {
        if ((this_fp->playertag_wait > 1) && !(this_fp->is_disable_control))
        {
            this_fp->playertag_wait--;
        }
        if (this_fp->proc_update != NULL)
        {
            this_fp->proc_update(fighter_gobj);
        }
        if (this_fp->proc_interrupt != NULL)
        {
            this_fp->proc_interrupt(fighter_gobj);
        }
        if (!(this_fp->is_hitstun))
        {
            gBattleState->player_block[this_fp->player].combo_damage_foe = 0;
            gBattleState->player_block[this_fp->player].combo_count_foe = 0;
        }
        is_jostle = FALSE;

        this_fp->phys_info.vel_jostle_x = this_fp->phys_info.vel_jostle_z = 0.0F;

        if ((this_fp->ground_or_air == GA_Ground) && !(this_fp->x18F_flag_b4))
        {
            other_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];

            is_check_self = FALSE;

            while (other_gobj != NULL)
            {
                other_fp = ftGetStruct(other_gobj);

                if ((fighter_gobj != other_gobj) && (other_fp->capture_gobj == NULL))
                {
                    if ((other_fp->ground_or_air == GA_Ground) && (this_fp->coll_data.ground_line_id == other_fp->coll_data.ground_line_id))
                    {
                        this_attributes = this_fp->attributes;
                        other_attributes = other_fp->attributes;

                        this_jostle = this_fp->attributes->jostle_width;

                        jostle_dist_x = (DObjGetStruct(fighter_gobj)->translate.vec.f.x + (this_attributes->jostle_x * this_fp->lr)) - (DObjGetStruct(other_gobj)->translate.vec.f.x + (other_attributes->jostle_x * other_fp->lr));

                        if (ABS(jostle_dist_x) < (this_jostle + other_attributes->jostle_width))
                        {
                            is_jostle = TRUE;

                            if (jostle_dist_x == 0.0F)
                            {
                                this_fp->phys_info.vel_jostle_x += (6.75F * ((is_check_self != FALSE) ? -1 : 1));
                            }
                            else this_fp->phys_info.vel_jostle_x += (6.75F * ((jostle_dist_x < 0.0F) ? -1 : 1));

                            dist_z = DObjGetStruct(fighter_gobj)->translate.vec.f.z - DObjGetStruct(other_gobj)->translate.vec.f.z;

                            if (dist_z == 0.0F)
                            {
                                if (jostle_dist_x == 0.0F)
                                {
                                    this_fp->phys_info.vel_jostle_z += (3.0F * ((is_check_self != FALSE) ? -1 : 1));
                                }
                                else this_fp->phys_info.vel_jostle_z += (3.0F * ((jostle_dist_x < 0.0F) ? 1 : -1));
                            }
                            else this_fp->phys_info.vel_jostle_z += (3.0F * ((dist_z < 0.0F) ? -1 : 1));
                        }
                    }
                }
                else is_check_self = TRUE;

                other_gobj = other_gobj->group_gobj_next;
            }
            if ((is_jostle == FALSE) && (DObjGetStruct(fighter_gobj)->translate.vec.f.z != 0.0F))
            {
                this_fp->phys_info.vel_jostle_z = ((DObjGetStruct(fighter_gobj)->translate.vec.f.z < 0.0F) ? LR_Right : LR_Left) * 3.0F;
            }
        }
    }
    this_fp->coll_data.vel_push.x = this_fp->coll_data.vel_push.y = this_fp->coll_data.vel_push.z = 0.0F;
}

// 0x800E1CF0
void ftMain_ClearMapElementsAll(void)
{
    s32 i;

    gMapObjectCount = gMapEnvironmentCount = 0;

    for (i = 0; i < ARRAY_COUNT(gMapObjects); i++)
    {
        gMapObjects[i].ogobj = NULL;
    }
    for (i = 0; i < ARRAY_COUNT(gMapEnvironments); i++)
    {
        gMapEnvironments[i].egobj = NULL;
    }
}

// 0x800E1D48
sb32 ftMain_CheckSetMapObjectGObj(GObj *ogobj, sb32(*proc_update)(GObj*, GObj*, s32*))
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gMapObjects); i++)
    {
        if (gMapObjects[i].ogobj == NULL)
        {
            gMapObjects[i].ogobj = ogobj;
            gMapObjects[i].proc_update = proc_update;
            gMapObjectCount++;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800E1D9C
void ftMain_ClearMapObjectGObj(GObj *ogobj)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gMapObjects); i++)
    {
        if (gMapObjects[i].ogobj == ogobj)
        {
            gMapObjects[i].ogobj = NULL;
            gMapObjectCount--;

            break;
        }
    }
}

// 0x800E1DE8
sb32 ftMain_CheckSetMapEnvironmentGObj(GObj *egobj, sb32(*proc_update)(GObj*, GObj*, grHitbox**, s32*))
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gMapEnvironments); i++)
    {
        if (gMapEnvironments[i].egobj == NULL)
        {
            gMapEnvironments[i].egobj = egobj;
            gMapEnvironments[i].proc_update = proc_update;

            gMapEnvironmentCount++;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800E1E3C - Remove map environment object by GObj pointer match
void ftMain_ClearMapEnvironmentGObj(GObj *egobj)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gMapEnvironments); i++)
    {
        if (gMapEnvironments[i].egobj == egobj)
        {
            gMapEnvironments[i].egobj = NULL;
            gMapEnvironmentCount--;

            break;
        }
    }
}

// 0x800E1E88
void ftMain_SetHitMapObject(GObj *ogobj, GObj *fighter_gobj, ftStruct *fp, s32 kind)
{
    switch (kind)
    {
    case 2:
        ftCommon_Twister_SetStatus(fighter_gobj, ogobj);
        break;

    case 3:
        ftCommon_TaruCann_SetStatus(fighter_gobj, ogobj);
        break;
    }
}

// 0x800E1EE8
void ftMain_SearchHitMapObject(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    grMapObject *mo = &gMapObjects[0];
    s32 i;

    if (!fp->is_nullstatus)
    {
        if (!fp->hitlag_timer)
        {
            if (fp->twister_wait)
            {
                fp->twister_wait--;
            }
            if (fp->tarucann_wait)
            {
                fp->tarucann_wait--;
            }
        }
        for (i = 0; i < gMapObjectCount; i++, mo++)
        {
            if (mo->ogobj != NULL)
            {
                s32 okind;

                if (mo->proc_update(mo->ogobj, fighter_gobj, &okind) != FALSE)
                {
                    ftMain_SetHitMapObject(mo->ogobj, fighter_gobj, fp, okind);
                }
            }
        }
    }
}

// 0x800E1FE0
void ftMain_UpdateVelDamageGround(ftStruct *fp, f32 move)
{
    if (fp->phys_info.vel_damage_ground < 0.0F)
    {
        fp->phys_info.vel_damage_ground += move;

        if (fp->phys_info.vel_damage_ground > 0.0F)
        {
            fp->phys_info.vel_damage_ground = 0.0F;
        }
    }
    else
    {
        fp->phys_info.vel_damage_ground -= move;

        if (fp->phys_info.vel_damage_ground < 0.0F)
        {
            fp->phys_info.vel_damage_ground = 0.0F;
        }
    }
}

// 0x800E2048
void ftMain_ProcPhysicsMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *topn_translate = &fp->joint[ftParts_Joint_TopN]->translate.vec.f;
    Vec3f *coll_translate = &fp->coll_data.pos_curr;
    Vec3f *ground_angle = &fp->coll_data.ground_angle;
    Vec3f *vel_damage_air;
    s32 unused[2];
    f32 size_mul;
    f32 tan;
    Vec3f vel_damage_new;
    s32 i;

    *coll_translate = *topn_translate;

    if (fp->hitlag_timer == 0)
    {
        if (fp->cliffcatch_wait != 0)
        {
            fp->cliffcatch_wait--;
        }
        if (fp->proc_physics != NULL)
        {
            fp->proc_physics(fighter_gobj);
        }
        vel_damage_air = &fp->phys_info.vel_damage_air;

        if ((fp->phys_info.vel_damage_air.x != 0.0F) || (vel_damage_air->y != 0.0F))
        {
            if (fp->ground_or_air == GA_Air)
            {
                vel_damage_new.z = atan2f(vel_damage_air->y, vel_damage_air->x);
                vel_damage_new.y = vel_damage_air->x;
                vel_damage_new.x = vel_damage_air->y;

                vel_damage_air->x -= (1.7F * cosf(vel_damage_new.z));
                vel_damage_air->y -= (1.7F * __sinf(vel_damage_new.z));

                if (((vel_damage_air->x * vel_damage_new.y) < 0.0F) || ((vel_damage_air->y * vel_damage_new.x) < 0.0F))
                {
                    vel_damage_air->x = vel_damage_air->y = 0.0F;
                }
                fp->phys_info.vel_damage_ground = 0.0F;
            }
            else
            {
                if (fp->phys_info.vel_damage_ground == 0.0F)
                {
                    fp->phys_info.vel_damage_ground = fp->phys_info.vel_damage_air.x;
                }
                ftMain_UpdateVelDamageGround(fp, ftMap_SurfaceMaterials_Friction[fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK] * fp->attributes->traction * 0.25F);

                vel_damage_air->x = (ground_angle->y * fp->phys_info.vel_damage_ground);
                vel_damage_air->y = (-ground_angle->x * fp->phys_info.vel_damage_ground);
            }
        }
        lbVector_Vec3fAddTo(topn_translate, &fp->phys_info.vel_air);

        topn_translate->x += vel_damage_air->x;
        topn_translate->y += vel_damage_air->y;
    }
    if (fp->proc_lagupdate != NULL)
    {
        fp->proc_lagupdate(fighter_gobj);
    }
    lbVector_Vec3fSubtract(&fp->coll_data.pos_correct, topn_translate, coll_translate);

    if ((fp->ground_or_air == GA_Ground) && (fp->coll_data.ground_line_id != -1) && (fp->coll_data.ground_line_id != -2) && (mpCollision_CheckExistLineID(fp->coll_data.ground_line_id) != FALSE))
    {
        mpCollision_GetSpeedLineID(fp->coll_data.ground_line_id, &fp->coll_data.pos_speed);
        lbVector_Vec3fAddTo(topn_translate, &fp->coll_data.pos_speed);
    }
    else fp->coll_data.pos_speed.x = fp->coll_data.pos_speed.y = fp->coll_data.pos_speed.z = 0.0F;

    ftCommon_Dead_CheckInterruptCommon(fighter_gobj);

    if ((gGroundInfo->unk_groundinfo_0x88 <= fp->coll_data.pos_curr.y) && (topn_translate->y < gGroundInfo->unk_groundinfo_0x88) && (fp->ft_kind != Ft_Kind_MasterHand))
    {
        func_800269C0(0x99U);
    }
    if (fp->publicity_knockback != 0)
    {
        if (((gMapEdgeBounds.d2.left + 450.0F) < fp->joint[ftParts_Joint_TopN]->translate.vec.f.x) && (fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < (gMapEdgeBounds.d2.right - 450.0F)))
        {
            fp->publicity_knockback = 0.0F;
        }
    }
    if (fp->proc_map != NULL)
    {
        fp->coll_data.coll_mask_prev = fp->coll_data.coll_mask_curr;
        fp->coll_data.coll_mask_curr = 0U;
        fp->coll_data.is_coll_complete = FALSE;
        fp->coll_data.coll_mask_stat = 0;
        fp->coll_data.coll_mask_unk = 0;

        fp->proc_map(fighter_gobj);

        if (fp->ft_kind == Ft_Kind_Kirby)
        {
            ftKirby_MapCheckSpawnStarGFX(fighter_gobj);
        }
    }
    if (fp->proc_slope != NULL)
    {
        fp->proc_slope(fighter_gobj);
    }
    func_ovl2_800EB528(fp->joint[ftParts_Joint_TopN]);

    if (fp->hitlag_timer == 0)
    {
        ftScript_UpdateDefaultEventsGFX(fighter_gobj);
    }
    if (fp->hitlag_timer == 0)
    {
        if (fp->proc_accessory != NULL)
        {
            fp->proc_accessory(fighter_gobj);
        }
    }
    fp->is_effect_interrupt = FALSE;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
    {
        ftHitbox *ft_hit = &fp->fighter_hit[i];

        switch (ft_hit->update_state)
        {
        case gmHitCollision_UpdateState_Disable:
            break;

        case gmHitCollision_UpdateState_New:
            ft_hit->pos = ft_hit->offset;

            if (ft_hit->is_scale_pos)
            {
                size_mul = 1.0F / fp->attributes->size_mul;

                ft_hit->pos.x *= size_mul;
                ft_hit->pos.y *= size_mul;
                ft_hit->pos.z *= size_mul;
            }
            ftParts_GetDObjWorldPosition(ft_hit->joint, &ft_hit->pos);

            ft_hit->update_state = gmHitCollision_UpdateState_Transfer;

            ft_hit->hit_matrix.unk_fthitmtx_0x0 = FALSE;
            ft_hit->hit_matrix.unk_fthitmtx_0x44 = 0.0F;

            break;

        case gmHitCollision_UpdateState_Transfer:
            ft_hit->update_state = gmHitCollision_UpdateState_Interpolate;

        case gmHitCollision_UpdateState_Interpolate:
            ft_hit->pos_prev = ft_hit->pos;
            ft_hit->pos = ft_hit->offset;

            if (ft_hit->is_scale_pos)
            {
                size_mul = 1.0F / fp->attributes->size_mul;

                ft_hit->pos.x *= size_mul;
                ft_hit->pos.y *= size_mul;
                ft_hit->pos.z *= size_mul;
            }
            ftParts_GetDObjWorldPosition(ft_hit->joint, &ft_hit->pos);

            ft_hit->hit_matrix.unk_fthitmtx_0x0 = FALSE;
            ft_hit->hit_matrix.unk_fthitmtx_0x44 = 0.0F;

            break;
        }
    }
}

// 0x800E2604
void ftMain_ProcPhysicsMapNormal(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (((fp->capture_gobj == NULL) || (fp->x192_flag_b3)) && ((fp->catch_gobj == NULL) || !(fp->x192_flag_b3)))
    {
        ftMain_ProcPhysicsMap(fighter_gobj);
    }
}

// 0x800E2660
void ftMain_ProcPhysicsMapCapture(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (((fp->capture_gobj != NULL) && !(fp->x192_flag_b3)) || ((fp->catch_gobj != NULL) && (fp->x192_flag_b3)))
    {
        ftMain_ProcPhysicsMap(fighter_gobj);
    }
}

// 0x800E26BC
void ftMain_SetHitVictimInteractStats(ftStruct *fp, u32 attack_group_id, GObj *victim_gobj, s32 hitbox_type, u32 victim_group_id, sb32 ignore_hurt_or_hit)
{
    s32 i, j;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
    {
        if (i == ARRAY_COUNT(fp->fighter_hit)); // WAT

        if ((fp->fighter_hit[i].update_state != gmHitCollision_UpdateState_Disable) && (attack_group_id == fp->fighter_hit[i].group_id))
        {
            for (j = 0; j < ARRAY_COUNT(fp->fighter_hit[i].hit_targets); j++)
            {
                if (victim_gobj == fp->fighter_hit[i].hit_targets[j].victim_gobj)
                {
                    switch (hitbox_type)
                    {
                    case gmHitCollision_Type_Hurt:
                        fp->fighter_hit[i].hit_targets[j].victim_flags.is_interact_hurt = TRUE;
                        break;

                    case gmHitCollision_Type_Shield:
                        fp->fighter_hit[i].hit_targets[j].victim_flags.is_interact_shield = TRUE;
                        break;

                    case gmHitCollision_Type_Hit:
                        fp->fighter_hit[i].hit_targets[j].victim_flags.group_id = victim_group_id;
                        break;

                    default:
                        break;
                    }
                    break;
                }
            }
            if (j == ARRAY_COUNT(fp->fighter_hit[i].hit_targets))
            {
                for (j = 0; j < ARRAY_COUNT(fp->fighter_hit[i].hit_targets); j++)
                {
                    if (fp->fighter_hit[i].hit_targets[j].victim_gobj == NULL) break;
                }
                if (j == ARRAY_COUNT(fp->fighter_hit[i].hit_targets)) j = 0;

                fp->fighter_hit[i].hit_targets[j].victim_gobj = victim_gobj;

                switch (hitbox_type)
                {
                case gmHitCollision_Type_Hurt:
                    fp->fighter_hit[i].hit_targets[j].victim_flags.is_interact_hurt = TRUE;
                    break;

                case gmHitCollision_Type_Shield:
                    fp->fighter_hit[i].hit_targets[j].victim_flags.is_interact_shield = TRUE;
                    break;

                case gmHitCollision_Type_Hit:
                    fp->fighter_hit[i].hit_targets[j].victim_flags.group_id = victim_group_id;
                    break;

                default:
                    break;
                }
            }
            if (ignore_hurt_or_hit == 0)
            {
                gFighterIsHurtDetect[i] = FALSE;
            }
            else gFighterIsHitDetect[i] = FALSE;
        }
    }
}

// 0x800E287C
void ftMain_SetHitCollisionRebound(GObj *attacker_gobj, ftStruct *fp, ftHitbox *ft_hit, GObj *victim_gobj)
{
    if (fp->shield_attack_damage < ft_hit->damage)
    {
        fp->shield_attack_damage = ft_hit->damage;

        if ((ft_hit->rebound) && (fp->ground_or_air == GA_Ground))
        {
            fp->attack_rebound = (fp->shield_attack_damage * 1.62F) + 4.0F;

            fp->lr_attack = (DObjGetStruct(attacker_gobj)->translate.vec.f.x < DObjGetStruct(victim_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;
        }
    }
}

extern s8 D_ovl65_801936AC;

// 0x800E2910
void ftMain_UpdateAttackStatFighter(ftStruct *other_fp, ftHitbox *other_hit, ftStruct *this_fp, ftHitbox *this_hit, GObj *other_gobj, GObj *this_gobj)
{
    Vec3f impact_pos;

    ftCollision_GetFighterHitImpactPosition(&impact_pos, this_hit, other_hit);

    if ((this_hit->damage - 10) < other_hit->damage)
    {
        ftMain_SetHitVictimInteractStats(this_fp, this_hit->group_id, other_gobj, gmHitCollision_Type_Hit, other_hit->group_id, 1);
        ftMain_SetHitCollisionRebound(this_gobj, this_fp, this_hit, other_gobj);
        efParticle_SetOff_MakeEffect(&impact_pos, this_hit->damage);

        if ((gBattleState->game_type == gmMatch_GameType_1PGame) && (this_hit->damage >= 20) && (other_fp->player == gSceneData.player_port))
        {
            D_ovl65_801936AC = TRUE;
        }
    }
    if ((other_hit->damage - 10) < this_hit->damage)
    {
        ftMain_SetHitVictimInteractStats(other_fp, other_hit->group_id, this_gobj, gmHitCollision_Type_Hit, this_hit->group_id, 0);
        ftMain_SetHitCollisionRebound(other_gobj, other_fp, other_hit, this_gobj);
        efParticle_SetOff_MakeEffect(&impact_pos, other_hit->damage);

        if ((gBattleState->game_type == gmMatch_GameType_1PGame) && (other_hit->damage >= 20) && (this_fp->player == gSceneData.player_port))
        {
            D_ovl65_801936AC = TRUE;
        }
    }
}

// 0x800E2A90
void ftMain_UpdateShieldStatFighter(ftStruct *attacker_fp, ftHitbox *attacker_hit, ftStruct *victim_fp, GObj *attacker_gobj, GObj *victim_gobj)
{
    Vec3f impact_pos;

    ftMain_SetHitVictimInteractStats(attacker_fp, attacker_hit->group_id, victim_gobj, gmHitCollision_Type_Shield, 0, FALSE);

    if (attacker_fp->shield_attack_damage < attacker_hit->damage)
    {
        attacker_fp->shield_attack_damage = attacker_hit->damage;
    }
    victim_fp->shield_damage_total += (attacker_hit->damage + attacker_hit->shield_damage);

    if (victim_fp->shield_damage < attacker_hit->damage)
    {
        victim_fp->shield_damage = attacker_hit->damage;

        victim_fp->lr_shield = (DObjGetStruct(victim_gobj)->translate.vec.f.x < DObjGetStruct(attacker_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;

        victim_fp->shield_player = attacker_fp->player;
    }
    ftCollision_GetShieldImpactPosition(&impact_pos, attacker_hit, victim_gobj, victim_fp->joint[ftParts_Joint_YRotN]);
    efParticle_SetOff_MakeEffect(&impact_pos, attacker_hit->damage);
}

// 0x800E2B88
void ftMain_UpdateCatchStatFighter(ftStruct *attacker_fp, ftHitbox *attacker_hit, ftStruct *victim_fp, GObj *attacker_gobj, GObj *victim_gobj)
{
    f32 dist;

    ftMain_SetHitVictimInteractStats(attacker_fp, attacker_hit->group_id, victim_gobj, gmHitCollision_Type_Hurt, 0, TRUE);

    if (DObjGetStruct(victim_gobj)->translate.vec.f.x < DObjGetStruct(attacker_gobj)->translate.vec.f.x)
    {
        dist = -(DObjGetStruct(victim_gobj)->translate.vec.f.x - DObjGetStruct(attacker_gobj)->translate.vec.f.x);
    }
    else dist = DObjGetStruct(victim_gobj)->translate.vec.f.x - DObjGetStruct(attacker_gobj)->translate.vec.f.x;

    if (dist < attacker_fp->search_gobj_dist)
    {
        attacker_fp->search_gobj_dist = dist;
        attacker_fp->search_gobj = victim_gobj;
    }
}

// 0x800E2C24
void func_ovl2_800E2C24(ftStruct *fp, ftHitbox *ft_hit)
{
    if ((fp->p_sfx != NULL) && (fp->p_sfx->sfx_id != 0) && (fp->p_sfx->sfx_id == fp->sfx_id))
    {
        func_80026738(fp->p_sfx);
    }
    fp->p_sfx = NULL, fp->sfx_id = 0;

    func_ovl0_800C8654(ftMain_HitCollision_SoundEffects[ft_hit->sfx_kind][ft_hit->sfx_level], fp->joint[ftParts_Joint_TopN]->translate.vec.f.x);
}

// 0x800E2CC0
sb32 ftMain_CheckGetUpdateDamage(ftStruct *fp, s32 *damage)
{
    if (fp->is_damage_resist)
    {
        fp->damage_resist -= *damage;

        if (fp->damage_resist <= 0)
        {
            fp->is_damage_resist = FALSE;

            *damage = -fp->damage_resist;
        }
    }
    if (!(fp->is_damage_resist))
    {
        fp->damage_queue += *damage;

        if (fp->damage_lag < *damage)
        {
            fp->damage_lag = *damage;
        }
        return TRUE;
    }
    else return FALSE;
}

// 0x800E2D44
void ftMain_UpdateDamageStatFighter(ftStruct *attacker_fp, ftHitbox *attacker_hit, ftStruct *victim_fp, ftHurtbox *victim_hurt, GObj *attacker_gobj, GObj *victim_gobj)
{
    s32 damage;
    s32 attacker_player;
    s32 attacker_player_number;
    s32 unused;
    Vec3f impact_pos;

    ftMain_SetHitVictimInteractStats(attacker_fp, attacker_hit->group_id, victim_gobj, gmHitCollision_Type_Hurt, 0, FALSE);

    damage = ftCommon_DamageAdjustCapture(victim_fp, attacker_hit->damage);

    if (attacker_fp->attack_damage < damage)
    {
        attacker_fp->attack_damage = damage;
    }
    if
    (
        (victim_fp->special_hitstatus == gmHitCollision_HitStatus_Normal) &&
        (victim_fp->star_hitstatus == gmHitCollision_HitStatus_Normal)    &&
        (victim_fp->hitstatus == gmHitCollision_HitStatus_Normal)         &&
        (victim_hurt->hitstatus == gmHitCollision_HitStatus_Normal)
    )
    {
        if (ftMain_CheckGetUpdateDamage(victim_fp, &damage) != FALSE)
        {
            if (attacker_fp->throw_gobj != NULL)
            {
                attacker_player = attacker_fp->throw_player;
                attacker_player_number = attacker_fp->throw_player_number;
            }
            else
            {
                attacker_player = attacker_fp->player;
                attacker_player_number = attacker_fp->player_number;
            }
            if (ftHitCollisionLogIndex < ARRAY_COUNT(ftHitCollisionLogTable))
            {
                ftHitCollisionLog *hitlog = &ftHitCollisionLogTable[ftHitCollisionLogIndex];

                hitlog->attacker_object_class = ftHitlog_ObjectClass_Fighter;
                hitlog->attacker_hit = attacker_hit;
                hitlog->attacker_gobj = attacker_gobj;
                hitlog->victim_hurt = victim_hurt;
                hitlog->attacker_player = attacker_player;
                hitlog->attacker_player_number = attacker_player_number;

                ftHitCollisionLogIndex++;
            }
            ftAttackUpdateMatchStats(attacker_player, victim_fp->player, damage);
            ftAttackAddStaleQueue(attacker_player, victim_fp->player, attacker_hit->attack_id, attacker_hit->flags_hi.halfword);
        }
        else
        {
            ftCollision_GetHurtImpactPosition(&impact_pos, attacker_hit, victim_hurt);
            efParticle_SetOff_MakeEffect(&impact_pos, damage);
        }
    }
    else
    {
        ftCollision_GetHurtImpactPosition(&impact_pos, attacker_hit, victim_hurt);
        efParticle_SetOff_MakeEffect(&impact_pos, damage);
    }
    func_ovl2_800E2C24(attacker_fp, attacker_hit);
}

// 0x800E2F04
void ftMain_UpdateAttackStatWeapon(wpStruct *ip, wpHitbox *wp_hit, s32 index, ftStruct *fp, ftHitbox *ft_hit, GObj *weapon_gobj, GObj *fighter_gobj)
{
    s32 damage = wpMain_GetDamageOutput(ip);
    Vec3f impact_pos;

    wpCollision_GetFighterHitImpactPosition(&impact_pos, wp_hit, index, ft_hit);

    if ((ft_hit->damage - 10) < damage)
    {
        ftMain_SetHitVictimInteractStats(fp, ft_hit->group_id, weapon_gobj, gmHitCollision_Type_Hit, 0, TRUE);
        ftMain_SetHitCollisionRebound(fighter_gobj, fp, ft_hit, weapon_gobj);
        efParticle_SetOff_MakeEffect(&impact_pos, ft_hit->damage);
    }

    if ((damage - 10) < ft_hit->damage)
    {
        wpManager_UpdateInteractStatsGroupID(ip, wp_hit, fighter_gobj, gmHitCollision_Type_Hit, ft_hit->group_id);

        if (ip->hit_attack_damage < damage)
        {
            ip->hit_attack_damage = damage;
        }
        efParticle_SetOff_MakeEffect(&impact_pos, damage);

        if ((gBattleState->game_type == gmMatch_GameType_1PGame) && ((damage - 10) >= 10) && (fp->player == gSceneData.player_port))
        {
            D_ovl65_801936AC = TRUE;
        }
    }
}

// 0x800E3048
void ftMain_UpdateShieldStatWeapon(wpStruct *wp, wpHitbox *wp_hit, s32 hitbox_id, ftStruct *fp, GObj *weapon_gobj, GObj *fighter_gobj, f32 angle, Vec3f *vec)
{
    s32 damage = wpMain_GetDamageOutput(wp);
    Vec3f impact_pos;

    wpManager_UpdateInteractStatsGroupID(wp, wp_hit, fighter_gobj, (wp_hit->can_rehit_shield) ? gmHitCollision_Type_ShieldRehit : gmHitCollision_Type_Shield, 0);

    if (wp->hit_shield_damage < damage)
    {
        wp->hit_shield_damage = damage;

        wp->shield_collide_angle = angle;

        wp->shield_collide_vec.x = 0.0F;
        wp->shield_collide_vec.y = 0.0F;

        wp->shield_collide_vec.z = (fp->lr == LR_Right) ? -vec->x : vec->x;

        lbVector_Vec3fNormalize(&wp->shield_collide_vec);
    }
    fp->shield_damage_total += damage + wp_hit->shield_damage;

    if (fp->shield_damage < damage)
    {
        fp->shield_damage = damage;

        fp->lr_shield = (wp->phys_info.vel_air.x < 0.0F) ? LR_Right : LR_Left;

        fp->shield_player = wp->player;
    }
    wpCollision_GetShieldImpactPosition(&impact_pos, wp_hit, hitbox_id, fighter_gobj, fp->joint[ftParts_Joint_YRotN]);
    efParticle_SetOff_MakeEffect(&impact_pos, wp_hit->shield_damage + damage);
}

// 0x800E31B4
void ftMain_UpdateReflectorStatWeapon(wpStruct *wp, wpHitbox *wp_hit, ftStruct *fp, GObj *fighter_gobj)
{
    s32 damage = wpMain_GetDamageOutput(wp);

    wpManager_UpdateInteractStatsGroupID(wp, wp_hit, fighter_gobj, gmHitCollision_Type_Reflect, 0);

    if (fp->special_hit->damage_resist < damage)
    {
        if (wp_hit->can_rehit_fighter)
        {
            if (wp->hit_refresh_damage < damage)
            {
                wp->hit_refresh_damage = damage;
            }
        }
        else if (wp->hit_normal_damage < damage)
        {
            wp->hit_normal_damage = damage;
        }
        fp->reflect_damage = damage;

        fp->lr_reflect = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(wp->weapon_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;
    }
    else
    {
        wp->reflect_gobj = fighter_gobj;

        wp->reflect_stat_flags = fp->stat_flags;
        wp->reflect_stat_count = fp->stat_count;

        fp->lr_reflect = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(wp->weapon_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;
    }
}

// 0x800E3308
void ftMain_UpdateAbsorbStatWeapon(wpStruct *ip, wpHitbox *wp_hit, ftStruct *fp, GObj *fighter_gobj)
{
    s32 damage = wpMain_GetDamageOutput(ip);

    wpManager_UpdateInteractStatsGroupID(ip, wp_hit, fighter_gobj, gmHitCollision_Type_Absorb, 0);

    ip->absorb_gobj = fighter_gobj;

    fp->lr_absorb = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(ip->weapon_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;

    if (!(wp_hit->noheal))
    {
        fp->percent_damage -= (s32)(damage * 2.0F);

        if (fp->percent_damage < 0)
        {
            fp->percent_damage = 0;
        }
        gBattleState->player_block[fp->player].stock_damage_all = fp->percent_damage;
    }
}

// 0x800E3418
void ftMain_UpdateDamageStatWeapon(wpStruct *wp, wpHitbox *wp_hit, s32 hitbox_id, ftStruct *fp, ftHurtbox *ft_hurt, GObj *weapon_gobj, GObj *fighter_gobj)
{
    s32 temp_damage = wpMain_GetDamageOutput(wp);
    s32 damage;

    wpManager_UpdateInteractStatsGroupID(wp, wp_hit, fighter_gobj, (wp_hit->can_rehit_fighter) ? gmHitCollision_Type_HurtRehit : gmHitCollision_Type_Hurt, 0);

    damage = ftCommon_DamageAdjustCapture(fp, temp_damage);

    if (wp_hit->can_rehit_fighter)
    {
        if (wp->hit_refresh_damage < damage)
        {
            wp->hit_refresh_damage = damage;
        }
    }
    else if (wp->hit_normal_damage < damage)
    {
        wp->hit_normal_damage = damage;
    }
    if
    (
        (fp->special_hitstatus == gmHitCollision_HitStatus_Normal) &&
        (fp->star_hitstatus == gmHitCollision_HitStatus_Normal)    &&
        (fp->hitstatus == gmHitCollision_HitStatus_Normal)         &&
        (ft_hurt->hitstatus == gmHitCollision_HitStatus_Normal)    &&
        (ftMain_CheckGetUpdateDamage(fp, &damage) != FALSE)
    )
    {
        if (ftHitCollisionLogIndex < ARRAY_COUNT(ftHitCollisionLogTable))
        {
            ftHitCollisionLog *hitlog = &ftHitCollisionLogTable[ftHitCollisionLogIndex];

            hitlog->attacker_object_class = ftHitlog_ObjectClass_Weapon;
            hitlog->attacker_hit = wp_hit;
            hitlog->hitbox_id = hitbox_id;
            hitlog->attacker_gobj = weapon_gobj;
            hitlog->victim_hurt = ft_hurt;
            hitlog->attacker_player = wp->player;
            hitlog->attacker_player_number = wp->player_number;

            ftHitCollisionLogIndex++;
        }
        ftAttackUpdateMatchStats(wp->player, fp->player, damage);
        ftAttackAddStaleQueue(wp->player, fp->player, wp_hit->attack_id, wp_hit->motion_count);
    }
    func_800269C0(wp_hit->hit_sfx);
}

// 0x800E35BC
void ftMain_UpdateAttackStatItem(itStruct *ip, itHitbox *it_hit, s32 hitbox_id, ftStruct *fp, ftHitbox *ft_hit, GObj *item_gobj, GObj *fighter_gobj)
{
    s32 damage = itMain_GetDamageOutput(ip);
    Vec3f impact_pos;

    itCollision_GetFighterHitImpactPosition(&impact_pos, it_hit, hitbox_id, ft_hit);

    if ((ft_hit->damage - 10) < damage)
    {
        ftMain_SetHitVictimInteractStats(fp, ft_hit->group_id, item_gobj, gmHitCollision_Type_Hit, 0, 0);
        ftMain_SetHitCollisionRebound(fighter_gobj, fp, ft_hit, item_gobj);
        efParticle_SetOff_MakeEffect(&impact_pos, ft_hit->damage);
    }
    if ((damage - 10) < ft_hit->damage)
    {
        itManager_SetHitVictimInteractStats(it_hit, fighter_gobj, gmHitCollision_Type_Hit, ft_hit->group_id);

        if (ip->hit_attack_damage < damage)
        {
            ip->hit_attack_damage = damage;
        }
        efParticle_SetOff_MakeEffect(&impact_pos, damage);

        if ((gBattleState->game_type == gmMatch_GameType_1PGame) && ((damage - 10) >= 10) && (fp->player == gSceneData.player_port))
        {
            D_ovl65_801936AC = TRUE;
        }
    }
}

// 0x800E36F8
void ftMain_UpdateShieldStatItem(itStruct *ip, itHitbox *it_hit, s32 hitbox_id, ftStruct *fp, GObj *item_gobj, GObj *fighter_gobj, f32 angle, Vec3f *vec)
{
    s32 damage = itMain_GetDamageOutput(ip);
    Vec3f impact_pos;

    itManager_SetHitVictimInteractStats(it_hit, fighter_gobj, (it_hit->can_rehit_shield) ? gmHitCollision_Type_ShieldRehit : gmHitCollision_Type_Shield, 0);

    if (ip->hit_shield_damage < damage)
    {
        ip->hit_shield_damage = damage;

        ip->shield_collide_angle = angle;

        ip->shield_collide_vec.x = 0.0F;
        ip->shield_collide_vec.y = 0.0F;

        ip->shield_collide_vec.z = (fp->lr == LR_Right) ? -vec->x : vec->x;

        lbVector_Vec3fNormalize(&ip->shield_collide_vec);
    }
    fp->shield_damage_total += damage + it_hit->shield_damage;

    if (fp->shield_damage < damage)
    {
        fp->shield_damage = damage;

        fp->lr_shield = (ip->phys_info.vel_air.x < 0.0F) ? LR_Right : LR_Left;

        fp->shield_player = ip->player;
    }
    itCollision_GetShieldImpactPosition(&impact_pos, it_hit, hitbox_id, fighter_gobj, fp->joint[ftParts_Joint_YRotN]);
    efParticle_SetOff_MakeEffect(&impact_pos, it_hit->shield_damage + damage);
}

// 0x800E3860
void ftMain_UpdateReflectorStatItem(itStruct *ip, itHitbox *it_hit, ftStruct *fp, GObj *fighter_gobj)
{
    s32 damage = itMain_GetDamageOutput(ip);

    itManager_SetHitVictimInteractStats(it_hit, fighter_gobj, gmHitCollision_Type_Reflect, 0);

    if (fp->special_hit->damage_resist < damage)
    {
        if (it_hit->can_rehit_fighter)
        {
            if (ip->hit_refresh_damage < damage)
            {
                ip->hit_refresh_damage = damage;
            }
        }
        else if (ip->hit_normal_damage < damage)
        {
            ip->hit_normal_damage = damage;
        }
        fp->reflect_damage = damage;

        fp->lr_reflect = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(ip->item_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;
    }
    else
    {
        ip->reflect_gobj = fighter_gobj;

        ip->reflect_stat_flags = fp->stat_flags;
        ip->reflect_stat_count = fp->stat_count;

        fp->lr_reflect = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(ip->item_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;
    }
}

extern u8 D_ovl65_801936AA;

// 0x800E39B0
void ftMain_UpdateDamageStatItem(itStruct *ip, itHitbox *it_hit, s32 hitbox_id, ftStruct *fp, ftHurtbox *ft_hurt, GObj *item_gobj, GObj *fighter_gobj)
{
    s32 damage_temp = itMain_GetDamageOutput(ip);
    s32 damage;
    s32 lr_attack;

    itManager_SetHitVictimInteractStats(it_hit, fighter_gobj, (it_hit->can_rehit_fighter) ? gmHitCollision_Type_HurtRehit : gmHitCollision_Type_Hurt, 0);

    if (ip->type == It_Type_Touch)
    {
        switch (ip->it_kind)
        {
        case It_Kind_Star:

            it_hit->update_state = gmHitCollision_UpdateState_Disable;
            ip->hit_normal_damage = 1;

            ftCommon_ApplyStarInvincibleTimer(fp, ITSTAR_INVINCIBLE_TIME);
            ftSpecialItem_BGMSetPlay(0x2E);
            func_800269C0(alSound_SFX_StarCollect);

            if ((gBattleState->game_type == gmMatch_GameType_1PGame) && (fp->player == gSceneData.player_port) && (D_ovl65_801936AA < U8_MAX))
            {
                D_ovl65_801936AA++;
            }
            break;

        case It_Kind_GLucky:
            ftCommon_ApplyDamageHeal(fp, it_hit->damage);
            break;
        }
    }
    else
    {
        damage = ftCommon_DamageAdjustCapture(fp, damage_temp);

        if (it_hit->can_rehit_fighter)
        {
            if (ip->hit_refresh_damage < damage)
            {
                ip->hit_refresh_damage = damage;
            }
        }
        else if (ip->hit_normal_damage < damage)
        {
            ip->hit_normal_damage = damage;
        }
        if (ABSF(ip->phys_info.vel_air.x) < 5.0F)
        {
            ip->lr_attack = lr_attack = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(item_gobj)->translate.vec.f.x) ? LR_Left : LR_Right;
        }
        else
        {
            lr_attack = (ip->phys_info.vel_air.x < 0) ? LR_Left : LR_Right;

            ip->lr_attack = lr_attack;
        }
        if 
        (
            (fp->special_hitstatus == gmHitCollision_HitStatus_Normal) &&
            (fp->star_hitstatus == gmHitCollision_HitStatus_Normal)    &&
            (fp->hitstatus == gmHitCollision_HitStatus_Normal)         &&
            (ft_hurt->hitstatus == gmHitCollision_HitStatus_Normal)    &&
            (ftMain_CheckGetUpdateDamage(fp, &damage) != FALSE)
        )
        {
            if (ftHitCollisionLogIndex < ARRAY_COUNT(ftHitCollisionLogTable))
            {
                ftHitCollisionLog *hitlog = &ftHitCollisionLogTable[ftHitCollisionLogIndex];

                hitlog->attacker_object_class = ftHitlog_ObjectClass_Item;
                hitlog->attacker_hit = it_hit;
                hitlog->hitbox_id = hitbox_id;
                hitlog->attacker_gobj = item_gobj;
                hitlog->victim_hurt = ft_hurt;
                hitlog->attacker_player = ip->player;
                hitlog->attacker_player_number = ip->player_number;

                ftHitCollisionLogIndex++;
            }
            ftAttackUpdateMatchStats(ip->player, fp->player, damage);
            ftAttackAddStaleQueue(ip->player, fp->player, it_hit->attack_id, it_hit->stat_count);
        }
        func_800269C0(it_hit->hit_sfx);
    }
}

// 0x800E3CAC
void ftMain_UpdateDamageStatGround(GObj *special_gobj, GObj *fighter_gobj, ftStruct *fp, grHitbox *gr_hit, s32 target_kind)
{
    s32 damage = ftCommon_DamageAdjustCapture(fp, gr_hit->damage);
    sb32 is_take_damage = ftMain_CheckGetUpdateDamage(fp, &damage);

    if ((is_take_damage != FALSE) && (ftHitCollisionLogIndex < ARRAY_COUNT(ftHitCollisionLogTable)))
    {
        ftHitCollisionLog *hitlog = &ftHitCollisionLogTable[ftHitCollisionLogIndex];

        hitlog->attacker_object_class = ftHitlog_ObjectClass_Ground;
        hitlog->attacker_hit = gr_hit;
        hitlog->attacker_gobj = special_gobj;

        ftHitCollisionLogIndex++;
    }
    switch (target_kind)
    {
    case 0:
        fp->acid_wait = 30;

        func_800269C0(alSound_SFX_FloorDamageBurn);
        break;

    case 1:
        if (is_take_damage != FALSE)
        {
            ftAttackUpdateMatchStats(itGetStruct(special_gobj)->damage_port, fp->player, damage);
        }
        break;

    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        fp->damagefloor_wait = 16;

        if (target_kind == 7)
        {
            func_800269C0(alSound_SFX_ShockML);
        }
        else func_800269C0(alSound_SFX_FloorDamageBurn);
        break;

    default:
        break;
    }
}

// 0x800E3DD0
void ftMain_GetBumperDamageAngle(GObj *fighter_gobj, GObj *attacker_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->damage_angle == 362)
    {
        f32 dist_x = DObjGetStruct(fighter_gobj)->translate.vec.f.x - DObjGetStruct(attacker_gobj)->translate.vec.f.x;
        f32 dist_y;

        fp->lr_damage = (dist_x < 0) ? LR_Right : LR_Left;

        if (dist_x < 0.0F)
        {
            dist_x = -dist_x;
        }
        dist_y = (DObjGetStruct(fighter_gobj)->translate.vec.f.y + fp->coll_data.object_coll.center) - DObjGetStruct(attacker_gobj)->translate.vec.f.y;

        fp->damage_angle = (dist_x == 0) ? 0 : F_RAD_TO_DEG(atanf(dist_y / dist_x));
    }
}

// 0x800E3EBC
void ftMain_ProcessHitCollisionStatsMain(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    ftStruct *attacker_fp;
    wpStruct *ip;
    itStruct *ap;
    ftAttributes *attributes = this_fp->attributes;
    ftHitCollisionLog *hitlog;
    s32 i, j;
    f32 knockback_temp;
    f32 knockback;
    ftHitbox *ft_hit;
    wpHitbox *wp_hit;
    itHitbox *it_hit;
    grHitbox *gr_hit;
    Vec3f pos;
    s32 damage;
    u8 gr_handicap;
    GObj *attacker_gobj;
    s32 lr_damage;

    knockback = -1.0F;

    for (i = 0; i < ftHitCollisionLogIndex; i++)
    {
        hitlog = &ftHitCollisionLogTable[i];

        switch (hitlog->attacker_object_class)
        {
        case ftHitlog_ObjectClass_Fighter:
            ft_hit = hitlog->attacker_hit;
            attacker_fp = ftGetStruct(hitlog->attacker_gobj);
            knockback_temp = gmCommonObject_DamageCalcKnockback(this_fp->percent_damage, this_fp->damage_queue, ft_hit->damage, ft_hit->knockback_weight, ft_hit->knockback_scale, ft_hit->knockback_base, attributes->weight, attacker_fp->handicap, this_fp->handicap);

            ftCollision_GetHurtImpactPosition(&pos, ft_hit, hitlog->victim_hurt);

            switch (ft_hit->element)
            {
            case gmHitCollision_Element_Fire:
                efParticle_DamageFire_MakeEffect(&pos, ft_hit->damage);
                break;

            case gmHitCollision_Element_Electric:
                func_ovl2_800FE4EC(&pos, ft_hit->damage);
                break;

            case gmHitCollision_Element_Coin:
                efParticle_DamageCoin_MakeEffect(&pos);
                break;

            case gmHitCollision_Element_Slash:
                efParticle_DamageSlash_MakeEffect(&pos, ft_hit->damage, ftCollision_GetDamageSlashRotation(attacker_fp, ft_hit));
                break;

            default:
                if (knockback_temp < 180.0F)
                {
                    efParticle_DamageNormalLight_MakeEffect(&pos, hitlog->attacker_player, ft_hit->damage, 0);
                }
                else efParticle_DamageNormalHeavy_MakeEffect(&pos, hitlog->attacker_player, ft_hit->damage);

                if (ft_hit->sfx_level > 0) // Changed this to > 0 for now, makes a bit more sense to me since it only does this on moves with hit SFX levels greater than weak (0)
                {
                    efParticle_DamageSpawnOrbs_CheckRandomMakeEffect(&pos);

                    switch (this_fp->attributes->is_metallic)
                    {
                    case FALSE:
                        efParticle_DamageSpawnSparks_CheckRandomMakeEffect(&pos, this_fp->lr);
                        break;

                    case TRUE:
                        efParticle_DamageSpawnMDust_CheckRandomMakeEffect(&pos, this_fp->lr);
                        break;

                    // default: break; // This might not be necessary
                    }
                }
                break;
            }
            break;

        case ftHitlog_ObjectClass_Weapon:
            wp_hit = hitlog->attacker_hit;
            ip = wpGetStruct(hitlog->attacker_gobj);
            damage = wpMain_GetDamageOutput(ip);

            knockback_temp = gmCommonObject_DamageCalcKnockback(this_fp->percent_damage, this_fp->damage_queue, damage, wp_hit->knockback_weight, wp_hit->knockback_scale, wp_hit->knockback_base, attributes->weight, ip->handicap, this_fp->handicap);

            if (ip->is_hitlag_victim)
            {
                wpCollision_GetFighterHurtImpactPosition(&pos, wp_hit, hitlog->hitbox_id, hitlog->victim_hurt);

                switch (wp_hit->element)
                {
                case gmHitCollision_Element_Fire:
                    efParticle_DamageFire_MakeEffect(&pos, damage);
                    break;

                case gmHitCollision_Element_Electric:
                    func_ovl2_800FE4EC(&pos, damage);
                    break;

                case gmHitCollision_Element_Coin:
                    efParticle_DamageCoin_MakeEffect(&pos);
                    break;

                default:
                    if (knockback_temp < 180.0F)
                    {
                        efParticle_DamageNormalLight_MakeEffect(&pos, hitlog->attacker_player, damage, NULL);
                    }
                    else efParticle_DamageNormalHeavy_MakeEffect(&pos, hitlog->attacker_player, damage);

                    break;
                }
            }
            break;

        case ftHitlog_ObjectClass_Item:
            it_hit = hitlog->attacker_hit;
            ap = itGetStruct(hitlog->attacker_gobj);

            damage = itMain_GetDamageOutput(ap);

            knockback_temp = gmCommonObject_DamageCalcKnockback(this_fp->percent_damage, this_fp->damage_queue, damage, it_hit->knockback_weight, it_hit->knockback_scale, it_hit->knockback_base, attributes->weight, ap->handicap, this_fp->handicap);

            if (ap->is_hitlag_victim)
            {
                itCollision_GetFighterHurtImpactPosition(&pos, it_hit, hitlog->hitbox_id, hitlog->victim_hurt);

                switch (it_hit->element)
                {
                case gmHitCollision_Element_Fire:
                    efParticle_DamageFire_MakeEffect(&pos, damage);
                    break;

                case gmHitCollision_Element_Electric:
                    func_ovl2_800FE4EC(&pos, damage);
                    break;

                case gmHitCollision_Element_Coin:
                    efParticle_DamageCoin_MakeEffect(&pos);
                    break;

                default:
                    if (knockback_temp < 180.0F)
                    {
                        efParticle_DamageNormalLight_MakeEffect(&pos, hitlog->attacker_player, damage, NULL);
                    }
                    else efParticle_DamageNormalHeavy_MakeEffect(&pos, hitlog->attacker_player, damage);
                    break;
                }
            }
            break;

        case ftHitlog_ObjectClass_Ground:
            gr_hit = hitlog->attacker_hit;

            if (gr_hit->env_kind == 1) // POW Block?
            {
                gr_handicap = itGetStruct(hitlog->attacker_gobj)->damage_handicap;
            }
            else gr_handicap = 9;

            knockback_temp = gmCommonObject_DamageCalcKnockback(this_fp->percent_damage, this_fp->damage_queue, gr_hit->damage, gr_hit->knockback_weight, gr_hit->knockback_scale, gr_hit->knockback_base, attributes->weight, gr_handicap, this_fp->handicap);

            break;

        default:
            break;
        }
        if (knockback < knockback_temp)
        {
            knockback = knockback_temp;

            j = i;
        }
    }
    hitlog = &ftHitCollisionLogTable[j];
    attacker_gobj = hitlog->attacker_gobj;

    switch (hitlog->attacker_object_class)
    {
    case ftHitlog_ObjectClass_Fighter:
        ft_hit = hitlog->attacker_hit;
        attacker_fp = ftGetStruct(attacker_gobj);
        this_fp->damage_angle = ft_hit->angle;
        this_fp->damage_element = ft_hit->element;

        this_fp->lr_damage = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(attacker_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;

        this_fp->damage_player_number = hitlog->attacker_player_number;

        ftCommon_Update1PGameDamageStats(this_fp, hitlog->attacker_player, hitlog->attacker_object_class, attacker_fp->ft_kind, attacker_fp->stat_flags.halfword & ~0x400, attacker_fp->stat_count);

        this_fp->damage_joint_index = hitlog->victim_hurt->joint_index;
        this_fp->damage_index = hitlog->victim_hurt->placement;

        if (this_fp->damage_element == gmHitCollision_Element_Electric)
        {
            attacker_fp->hitlag_mul = 1.5F;
        }
        break;

    case ftHitlog_ObjectClass_Weapon:
        wp_hit = hitlog->attacker_hit;
        ip = wpGetStruct(attacker_gobj);
        this_fp->damage_angle = wp_hit->angle;
        this_fp->damage_element = wp_hit->element;

        if (ABSF(ip->phys_info.vel_air.x) < 5.0F)
        {
            this_fp->lr_damage = lr_damage = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(attacker_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;
        }
        else
        {
            lr_damage = (ip->phys_info.vel_air.x < 0) ? LR_Right : LR_Left;

            this_fp->lr_damage = lr_damage;
        }
        if (this_fp->player == hitlog->attacker_player)
        {
            this_fp->damage_player_number = 0;

            ftCommon_Update1PGameDamageStats(this_fp, GMMATCH_PLAYERS_MAX, hitlog->attacker_object_class, ip->wp_kind, 0, 0);
        }
        else
        {
            this_fp->damage_player_number = hitlog->attacker_player_number;

            ftCommon_Update1PGameDamageStats(this_fp, hitlog->attacker_player, hitlog->attacker_object_class, ip->wp_kind, wp_hit->stat_flags.halfword, wp_hit->stat_count);
        }
        this_fp->damage_joint_index = hitlog->victim_hurt->joint_index;
        this_fp->damage_index = hitlog->victim_hurt->placement;

        ftMain_GetBumperDamageAngle(fighter_gobj, attacker_gobj);
        break;

    case ftHitlog_ObjectClass_Item:
        it_hit = hitlog->attacker_hit;
        ap = itGetStruct(attacker_gobj);

        this_fp->damage_angle = it_hit->angle;
        this_fp->damage_element = it_hit->element;

        if (ABSF(ap->phys_info.vel_air.x) < 5.0F)
        {
            this_fp->lr_damage = lr_damage = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(attacker_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;
        }
        else
        {
            lr_damage = (ap->phys_info.vel_air.x < 0) ? LR_Right : LR_Left;

            this_fp->lr_damage = lr_damage;
        }

        if (this_fp->player == hitlog->attacker_player)
        {
            this_fp->damage_player_number = 0;

            ftCommon_Update1PGameDamageStats(this_fp, GMMATCH_PLAYERS_MAX, hitlog->attacker_object_class, ap->it_kind, 0, 0);
        }
        else
        {
            this_fp->damage_player_number = hitlog->attacker_player_number;
            ftCommon_Update1PGameDamageStats(this_fp, hitlog->attacker_player, hitlog->attacker_object_class, ap->it_kind, it_hit->stat_flags.halfword, it_hit->stat_count);
        }
        this_fp->damage_joint_index = hitlog->victim_hurt->joint_index;
        this_fp->damage_index = hitlog->victim_hurt->placement;

        ftMain_GetBumperDamageAngle(fighter_gobj, attacker_gobj);
        break;

    case ftHitlog_ObjectClass_Ground:
        gr_hit = hitlog->attacker_hit;

        this_fp->damage_angle = gr_hit->angle;
        this_fp->damage_element = gr_hit->element;

        this_fp->lr_damage = this_fp->lr;

        switch (gr_hit->env_kind)
        {
        case 0:
            this_fp->damage_player_number = 0;

            if (this_fp->damage_player == -1)
            {
                this_fp->damage_player = GMMATCH_PLAYERS_MAX;
            }
            ftCommon_Update1PGameDamageStats(this_fp, this_fp->damage_player, hitlog->attacker_object_class, gr_hit->env_kind, 0, 0);
            break;

        case 1:
            ap = itGetStruct(attacker_gobj);

            this_fp->damage_player_number = ap->damage_player_number;

            ftCommon_Update1PGameDamageStats(this_fp, ap->damage_port, hitlog->attacker_object_class, gr_hit->env_kind, 0, 0);

            break;

        default:
            this_fp->damage_player_number = 0;

            ftCommon_Update1PGameDamageStats(this_fp, GMMATCH_PLAYERS_MAX, hitlog->attacker_object_class, gr_hit->env_kind, 0, 0);
            break;
        }
        this_fp->damage_joint_index = 0;
        this_fp->damage_index = 0;

        break;

    default:
        break;
    }
    this_fp->damage_knockback = knockback;

    if (this_fp->damage_element == gmHitCollision_Element_Electric)
    {
        this_fp->hitlag_mul = 1.5F;
    }
}

// 0x800E4870 - My brain hurts
void ftMain_SearchFighterHit(GObj *this_gobj)
{
    GObj *other_gobj;
    ftStruct *this_fp;
    ftStruct *other_fp;
    s32 i, j, k, l, m, n;
    gmHitCollisionFlags those_flags;
    gmHitCollisionFlags these_flags;
    ftHitbox *this_ft_hit;
    f32 angle;
    ftHitbox *other_ft_hit;
    ftHurtbox *ft_hurt;
    sb32 is_check_self;

    this_fp = ftGetStruct(this_gobj);
    other_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];
    is_check_self = FALSE;

    while (other_gobj != NULL)
    {
        if (other_gobj == this_gobj)
        {
            is_check_self = TRUE;

            goto next_gobj;
        }
        else if (other_gobj == this_fp->capture_gobj) goto next_gobj;

        other_fp = ftGetStruct(other_gobj);

        if (((gBattleState->is_team_battle == TRUE) && (gBattleState->is_team_attack == FALSE)) && (((other_fp->throw_gobj != NULL) ? other_fp->throw_team : other_fp->team) == this_fp->team))
        {
            goto next_gobj;
        }
        if (!(other_fp->is_catchstatus))
        {
            if ((other_fp->throw_gobj != NULL) && (this_gobj == other_fp->throw_gobj))
            {
                goto next_gobj;
            }
            else
            {
                k = 0;

                for (i = 0; i < ARRAY_COUNT(other_fp->fighter_hit); i++)
                {
                    other_ft_hit = &other_fp->fighter_hit[i];

                    if (other_ft_hit->update_state != gmHitCollision_UpdateState_Disable)
                    {
                        if ((this_fp->ground_or_air == GA_Air) && (other_ft_hit->is_hit_air) || (this_fp->ground_or_air == GA_Ground) && (other_ft_hit->is_hit_ground))
                        {
                            these_flags.is_interact_hurt = these_flags.is_interact_shield = FALSE;

                            these_flags.group_id = 7;

                            for (m = 0; m < ARRAY_COUNT(other_ft_hit->hit_targets); m++)
                            {
                                if (this_gobj == other_ft_hit->hit_targets[m].victim_gobj)
                                {
                                    these_flags = other_ft_hit->hit_targets[m].victim_flags;

                                    break;
                                }
                            }
                            if ((!(these_flags.is_interact_hurt)) && (!(these_flags.is_interact_shield)) && (these_flags.group_id == 7))
                            {
                                gFighterIsHurtDetect[i] = TRUE;

                                k++;

                                continue;
                            }
                        }
                    }
                    gFighterIsHurtDetect[i] = FALSE;
                }
                if (k == 0) goto next_gobj;

                else
                {
                    k = 0;

                    if ((is_check_self != FALSE) && (this_gobj != other_fp->capture_gobj) && (other_fp->ground_or_air == GA_Ground) && (this_fp->ground_or_air == GA_Ground) && !(this_fp->is_catchstatus))
                    {
                        if ((this_fp->throw_gobj == NULL) || (other_gobj != this_fp->throw_gobj) && (((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE)) || (((other_fp->throw_gobj != NULL) ? other_fp->throw_team : other_fp->team) != this_fp->throw_team)))
                        {
                            l = 0;

                            for (i = 0; i < ARRAY_COUNT(this_fp->fighter_hit); i++)
                            {
                                this_ft_hit = &this_fp->fighter_hit[i];

                                if (this_ft_hit->update_state != gmHitCollision_UpdateState_Disable)
                                {
                                    if ((other_fp->ground_or_air == GA_Air) && (this_ft_hit->is_hit_air) || (other_fp->ground_or_air == GA_Ground) && (this_ft_hit->is_hit_ground))
                                    {
                                        those_flags.is_interact_hurt = those_flags.is_interact_shield = FALSE;

                                        those_flags.group_id = 7;

                                        for (n = 0; n < ARRAY_COUNT(this_ft_hit->hit_targets); n++)
                                        {
                                            if (other_gobj == this_ft_hit->hit_targets[n].victim_gobj)
                                            {
                                                those_flags = this_ft_hit->hit_targets[n].victim_flags;

                                                break;
                                            }
                                        }
                                        if ((!(those_flags.is_interact_hurt)) && (!(those_flags.is_interact_shield)) && (those_flags.group_id == 7))
                                        {
                                            gFighterIsHitDetect[i] = TRUE;

                                            l++;

                                            continue;
                                        }
                                    }
                                }
                                gFighterIsHitDetect[i] = FALSE;
                            }
                            if (l != 0)
                            {
                                for (i = 0; i < ARRAY_COUNT(other_fp->fighter_hit); i++)
                                {
                                    other_ft_hit = &other_fp->fighter_hit[i];

                                    if (gFighterIsHurtDetect[i] == FALSE) continue;

                                    else for (j = 0; j < ARRAY_COUNT(this_fp->fighter_hit); j++)
                                    {
                                        this_ft_hit = &this_fp->fighter_hit[j];

                                        if (gFighterIsHitDetect[j] == FALSE) continue;

                                        else if (ftCollision_CheckFighterHitFighterHitIntersect(other_ft_hit, this_ft_hit) != FALSE)
                                        {
                                            ftMain_UpdateAttackStatFighter(other_fp, other_ft_hit, this_fp, this_ft_hit, other_gobj, this_gobj);

                                            if (gFighterIsHurtDetect[i] == FALSE)
                                            {
                                                break;
                                            }
                                            else continue;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    for (i = 0; i < ARRAY_COUNT(other_fp->fighter_hit); i++)
                    {
                        other_ft_hit = &other_fp->fighter_hit[i];

                        if (gFighterIsHurtDetect[i] == FALSE) continue;

                        gFighterIsHurtDetect[i] = ftCollision_CheckFighterHitInRange(other_ft_hit, this_gobj);

                        if (gFighterIsHurtDetect[i] != FALSE) k++;
                    }
                    if (k != 0)
                    {
                        if (this_fp->is_shield)
                        {
                            for (i = 0; i < ARRAY_COUNT(other_fp->fighter_hit); i++)
                            {
                                other_ft_hit = &other_fp->fighter_hit[i];

                                if (gFighterIsHurtDetect[i] == FALSE) continue;

                                else if (ftCollision_CheckFighterHitShieldIntersect(other_ft_hit, this_gobj, this_fp->joint[ftParts_Joint_YRotN], &angle) != FALSE)
                                {
                                    ftMain_UpdateShieldStatFighter(other_fp, other_ft_hit, this_fp, other_gobj, this_gobj);
                                }
                            }
                        }
                        if ((this_fp->special_hitstatus != gmHitCollision_HitStatus_Intangible) && (this_fp->star_hitstatus != gmHitCollision_HitStatus_Intangible) && (this_fp->hitstatus != gmHitCollision_HitStatus_Intangible))
                        {
                            for (i = 0; i < ARRAY_COUNT(other_fp->fighter_hit); i++)
                            {
                                other_ft_hit = &other_fp->fighter_hit[i];

                                if (gFighterIsHurtDetect[i] == FALSE) continue;

                                else for (j = 0; j < ARRAY_COUNT(this_fp->fighter_hurt); j++)
                                {
                                    ft_hurt = &this_fp->fighter_hurt[j];

                                    if (ft_hurt->hitstatus == gmHitCollision_HitStatus_None) break;

                                    if (ft_hurt->hitstatus != gmHitCollision_HitStatus_Intangible)
                                    {
                                        if (ftCollision_CheckFighterHitFighterHurtIntersect(other_ft_hit, ft_hurt) != FALSE)
                                        {
                                            ftMain_UpdateDamageStatFighter(other_fp, other_ft_hit, this_fp, ft_hurt, other_gobj, this_gobj);

                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    next_gobj:
        other_gobj = other_gobj->group_gobj_next;
    }
}

// 0x800E4ED4
void ftMain_SearchWeaponHit(GObj *fighter_gobj)
{
    GObj *weapon_gobj;
    s32 i, j, k, l, m, n;
    gmHitCollisionFlags fighter_flags;
    gmHitCollisionFlags item_flags;
    ftStruct *fp;
    wpStruct *ip;
    wpHitbox *wp_hit;
    f32 angle;
    Vec3f vec;
    ftHurtbox *ft_hurt;
    ftHitbox *ft_hit;
    s32 unused1;

    fp = ftGetStruct(fighter_gobj);
    weapon_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Weapon];

    while (weapon_gobj != NULL)
    {
        ip = wpGetStruct(weapon_gobj);
        wp_hit = &ip->weapon_hit;

        if ((fighter_gobj != ip->owner_gobj) && ((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE) || (fp->team != ip->team)) && (wp_hit->update_state != gmHitCollision_UpdateState_Disable))
        {
            if (wp_hit->interact_mask & GMHITCOLLISION_MASK_FIGHTER)
            {
                item_flags.is_interact_hurt = item_flags.is_interact_shield = item_flags.is_interact_reflect = item_flags.is_interact_absorb = FALSE;

                item_flags.group_id = 7;

                for (m = 0; m < ARRAY_COUNT(wp_hit->hit_targets); m++)
                {
                    if (fighter_gobj == wp_hit->hit_targets[m].victim_gobj)
                    {
                        item_flags = wp_hit->hit_targets[m].victim_flags;

                        break;
                    }
                }
                if (!(item_flags.is_interact_hurt) && !(item_flags.is_interact_shield) && !(item_flags.is_interact_reflect) && !(item_flags.is_interact_absorb) && (item_flags.group_id == 7))
                {
                    if ((wp_hit->rebound) && !(fp->is_catchstatus) && ((fp->throw_gobj == NULL) || (fp->throw_gobj != ip->owner_gobj) && ((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE) || (fp->throw_team != ip->team))))
                    {

                        if (!(fp->is_reflect) || !(wp_hit->can_reflect))
                        {
                            k = 0;

                            for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
                            {
                                ft_hit = &fp->fighter_hit[i];

                                if ((ft_hit->update_state != gmHitCollision_UpdateState_Disable) && ((ip->ground_or_air == GA_Air) && (ft_hit->is_hit_air) || (ip->ground_or_air == GA_Ground) && (ft_hit->is_hit_ground)))
                                {
                                    fighter_flags.group_id = 7;

                                    for (n = 0; n < ARRAY_COUNT(ft_hit->hit_targets); n++)
                                    {
                                        if (weapon_gobj == ft_hit->hit_targets[n].victim_gobj)
                                        {
                                            fighter_flags = ft_hit->hit_targets[n].victim_flags;

                                            break;
                                        }
                                    }
                                    if (fighter_flags.group_id == 7)
                                    {
                                        gFighterIsHitDetect[i] = TRUE;

                                        k++;

                                        continue;
                                    }
                                }
                                gFighterIsHitDetect[i] = FALSE;
                            }
                            if (k != 0)
                            {
                                for (i = 0; i < wp_hit->hitbox_count; i++)
                                {
                                    for (j = 0; j < ARRAY_COUNT(fp->fighter_hit); j++)
                                    {
                                        ft_hit = &fp->fighter_hit[j];

                                        if (gFighterIsHitDetect[j] == FALSE) continue;

                                        else if (wpCollision_CheckWeaponHitFighterHitIntersect(wp_hit, i, ft_hit) != FALSE)
                                        {
                                            ftMain_UpdateAttackStatWeapon(ip, wp_hit, i, fp, ft_hit, weapon_gobj, fighter_gobj);

                                            if (ip->hit_attack_damage != 0) goto next_gobj;
                                        }
                                    }
                                }
                            }
                        }

                    }
                    for (i = 0, l = 0; i < wp_hit->hitbox_count; i++)
                    {
                        gFighterIsHurtDetect[i] = ftCollision_CheckWeaponHitInRange(wp_hit, i, fighter_gobj);

                        if (gFighterIsHurtDetect[i] != FALSE)
                        {
                            l++;
                        }
                    }
                    if (l != 0)
                    {
                        if ((fp->is_reflect) && (wp_hit->can_reflect))
                        {
                            for (i = 0; i < wp_hit->hitbox_count; i++)
                            {
                                if (gFighterIsHurtDetect[i] == FALSE) continue;

                                else if (wpCollision_CheckWeaponHitSpecialIntersect(wp_hit, i, fp, fp->special_hit) != FALSE)
                                {
                                    ftMain_UpdateReflectorStatWeapon(ip, wp_hit, fp, fighter_gobj);

                                    goto next_gobj;
                                }
                            }
                        }
                        if ((fp->is_absorb) && (wp_hit->can_absorb))
                        {
                            for (i = 0; i < wp_hit->hitbox_count; i++)
                            {
                                if (gFighterIsHurtDetect[i] == FALSE) continue;

                                else if (wpCollision_CheckWeaponHitSpecialIntersect(wp_hit, i, fp, fp->special_hit) != FALSE)
                                {
                                    ftMain_UpdateAbsorbStatWeapon(ip, wp_hit, fp, fighter_gobj);

                                    goto next_gobj;
                                }
                            }
                        }
                        if ((fp->is_shield) && (wp_hit->can_shield))
                        {
                            for (i = 0; i < wp_hit->hitbox_count; i++)
                            {
                                if (gFighterIsHurtDetect[i] == FALSE) continue;

                                else if (wpCollision_CheckWeaponHitShieldIntersect(wp_hit, i, fighter_gobj, fp->joint[ftParts_Joint_YRotN], &angle, &vec) != FALSE)
                                {
                                    ftMain_UpdateShieldStatWeapon(ip, wp_hit, i, fp, weapon_gobj, fighter_gobj, angle, &vec);

                                    goto next_gobj;
                                }
                            }
                        }
                        if ((fp->special_hitstatus != gmHitCollision_HitStatus_Intangible) && (fp->star_hitstatus != gmHitCollision_HitStatus_Intangible) && (fp->hitstatus != gmHitCollision_HitStatus_Intangible))
                        {
                            for (i = 0; i < wp_hit->hitbox_count; i++)
                            {
                                if (gFighterIsHurtDetect[i] == FALSE) continue;

                                else for (j = 0; j < ARRAY_COUNT(fp->fighter_hurt); j++)
                                {
                                    ft_hurt = &fp->fighter_hurt[j];

                                    if (ft_hurt->hitstatus == gmHitCollision_HitStatus_None) break;

                                    if (ft_hurt->hitstatus != gmHitCollision_HitStatus_Intangible)
                                    {
                                        if (wpCollision_CheckWeaponHitFighterHurtIntersect(wp_hit, i, ft_hurt) != FALSE)
                                        {
                                            ftMain_UpdateDamageStatWeapon(ip, wp_hit, i, fp, ft_hurt, weapon_gobj, fighter_gobj);

                                            goto next_gobj;
                                        }
                                    }
                                }
                            }
                        }

                    }
                }
            }
        }
    next_gobj:
        weapon_gobj = weapon_gobj->group_gobj_next;
    }
}

// 0x800E55DC
void ftMain_SearchItemHit(GObj *fighter_gobj)
{
    GObj *item_gobj;
    s32 i, j, k, l, m, n;
    gmHitCollisionFlags fighter_flags;
    gmHitCollisionFlags article_flags;
    ftStruct *fp;
    itStruct *ap;
    itHitbox *it_hit;
    f32 angle;
    Vec3f vec;
    ftHurtbox *ft_hurt;
    ftHitbox *ft_hit;
    s32 unused1;

    fp = ftGetStruct(fighter_gobj);
    item_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Item];

    while (item_gobj != NULL)
    {
        ap = itGetStruct(item_gobj);
        it_hit = &ap->item_hit;

        if ((fighter_gobj != ap->owner_gobj) && ((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE) || (fp->team != ap->team)) && (it_hit->update_state != gmHitCollision_UpdateState_Disable))
        {
            if (it_hit->interact_mask & GMHITCOLLISION_MASK_FIGHTER)
            {
                article_flags.is_interact_hurt = article_flags.is_interact_shield = article_flags.is_interact_reflect = FALSE;

                article_flags.group_id = 7;

                for (m = 0; m < ARRAY_COUNT(it_hit->hit_targets); m++)
                {
                    if (fighter_gobj == it_hit->hit_targets[m].victim_gobj)
                    {
                        article_flags = it_hit->hit_targets[m].victim_flags;

                        break;
                    }
                }
                if (!(article_flags.is_interact_hurt) && !(article_flags.is_interact_shield) && !(article_flags.is_interact_reflect) && (article_flags.group_id == 7))
                {
                    if ((it_hit->rebound) && !(fp->is_catchstatus) && ((fp->throw_gobj == NULL) || (fp->throw_gobj != ap->owner_gobj) && ((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE) || (fp->throw_team != ap->team))))
                    {
                        if (!(fp->is_reflect) || !(it_hit->can_reflect))
                        {
                            k = 0;

                            for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
                            {
                                ft_hit = &fp->fighter_hit[i];

                                if ((ft_hit->update_state != gmHitCollision_UpdateState_Disable) && ((ap->ground_or_air == GA_Air) && (ft_hit->is_hit_air) || (ap->ground_or_air == GA_Ground) && (ft_hit->is_hit_ground)))
                                {
                                    fighter_flags.group_id = 7;

                                    for (n = 0; n < ARRAY_COUNT(ft_hit->hit_targets); n++)
                                    {
                                        if (item_gobj == ft_hit->hit_targets[n].victim_gobj)
                                        {
                                            fighter_flags = ft_hit->hit_targets[n].victim_flags;

                                            break;
                                        }
                                    }
                                    if (fighter_flags.group_id == 7)
                                    {
                                        gFighterIsHitDetect[i] = TRUE;

                                        k++;

                                        continue;
                                    }
                                }
                                gFighterIsHitDetect[i] = FALSE;
                            }
                            if (k != 0)
                            {
                                for (i = 0; i < it_hit->hitbox_count; i++)
                                {
                                    for (j = 0; j < ARRAY_COUNT(fp->fighter_hit); j++)
                                    {
                                        ft_hit = &fp->fighter_hit[j];

                                        if (gFighterIsHitDetect[j] == FALSE) continue;

                                        else if (itCollision_CheckItemHitFighterHitIntersect(it_hit, i, ft_hit) != FALSE)
                                        {
                                            ftMain_UpdateAttackStatItem(ap, it_hit, i, fp, ft_hit, item_gobj, fighter_gobj);

                                            if (ap->hit_attack_damage != 0) goto next_gobj;
                                        }
                                    }
                                }
                            }
                        }

                    }
                    for (i = 0, l = 0; i < it_hit->hitbox_count; i++)
                    {
                        gFighterIsHurtDetect[i] = ftCollision_CheckItemHitInRange(it_hit, i, fighter_gobj);

                        if (gFighterIsHurtDetect[i] != FALSE)
                        {
                            l++;
                        }
                    }
                    if (l != 0)
                    {
                        if ((fp->is_reflect) && (it_hit->can_reflect))
                        {
                            for (i = 0; i < it_hit->hitbox_count; i++)
                            {
                                if (gFighterIsHurtDetect[i] == FALSE) continue;

                                else if (itCollision_CheckItemHitSpecialIntersect(it_hit, i, fp, fp->special_hit) != FALSE)
                                {
                                    ftMain_UpdateReflectorStatItem(ap, it_hit, fp, fighter_gobj);

                                    goto next_gobj;
                                }
                            }
                        }
                        if ((fp->is_shield) && (it_hit->can_shield))
                        {
                            for (i = 0; i < it_hit->hitbox_count; i++)
                            {
                                if (gFighterIsHurtDetect[i] == FALSE) continue;

                                else if (itCollision_CheckItemHitShieldIntersect(it_hit, i, fighter_gobj, fp->joint[ftParts_Joint_YRotN], &angle, &vec) != FALSE)
                                {
                                    ftMain_UpdateShieldStatItem(ap, it_hit, i, fp, item_gobj, fighter_gobj, angle, &vec);

                                    goto next_gobj;
                                }
                            }
                        }
                        if ((fp->special_hitstatus != gmHitCollision_HitStatus_Intangible) && (fp->star_hitstatus != gmHitCollision_HitStatus_Intangible) && (fp->hitstatus != gmHitCollision_HitStatus_Intangible))
                        {
                            for (i = 0; i < it_hit->hitbox_count; i++)
                            {
                                if (gFighterIsHurtDetect[i] == FALSE) continue;

                                else for (j = 0; j < ARRAY_COUNT(fp->fighter_hurt); j++)
                                {
                                    ft_hurt = &fp->fighter_hurt[j];

                                    if (ft_hurt->hitstatus == gmHitCollision_HitStatus_None) break;

                                    if (ft_hurt->hitstatus != gmHitCollision_HitStatus_Intangible)
                                    {
                                        if (itCollision_CheckItemHitFighterHurtIntersect(it_hit, i, ft_hurt) != FALSE)
                                        {
                                            ftMain_UpdateDamageStatItem(ap, it_hit, i, fp, ft_hurt, item_gobj, fighter_gobj);

                                            goto next_gobj;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    next_gobj:
        item_gobj = item_gobj->group_gobj_next;
    }
}

// 0x800E5C30
sb32 ftMain_GetGroundHitboxPointer(ftStruct *fp, grHitbox **p_gr_hit)
{
    if ((fp->damagefloor_wait == 0) && (fp->ground_or_air == GA_Ground) && (fp->coll_data.ground_line_id != -1) && (fp->coll_data.ground_line_id != -2))
    {
        switch (fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK)
        {
        case mpCollision_Material_FireWeakHz1:
            *p_gr_hit = &ftMain_HitCollision_GroundHitbox[0];
            return TRUE;

        case mpCollision_Material_FireStrongVt1:
            *p_gr_hit = &ftMain_HitCollision_GroundHitbox[1];
            return TRUE;

        case mpCollision_Material_FireWeakVt1:
            *p_gr_hit = &ftMain_HitCollision_GroundHitbox[2];
            return TRUE;

        case mpCollision_Material_SpikeStrongHz1:
            *p_gr_hit = &ftMain_HitCollision_GroundHitbox[3];
            return TRUE;

        case mpCollision_Material_FireWeakVt2:
            *p_gr_hit = &ftMain_HitCollision_GroundHitbox[4];
            return TRUE;

        case mpCollision_Material_FireWeakVt3:
            *p_gr_hit = &ftMain_HitCollision_GroundHitbox[5];
            return TRUE;

        default:
            return FALSE;
        }
    }
    else return FALSE;
}

// 0x800E5D20
void ftMain_SearchGroundHit(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    grMapEnvironment *me = &gMapEnvironments[0];
    s32 i;
    grHitbox *gr_hit;
    s32 sp44;

    if (fp->hitlag_timer == 0)
    {
        if (fp->acid_wait != 0)
        {
            fp->acid_wait--;
        }
        if (fp->damagefloor_wait != 0)
        {
            fp->damagefloor_wait--;
        }
    }
    if (ftCommon_GetBestHitStatusAll(fighter_gobj) == gmHitCollision_HitStatus_Normal)
    {
        for (i = 0; i < gMapEnvironmentCount; i++, me++)
        {
            if ((me->egobj != NULL) && (me->proc_update(me->egobj, fighter_gobj, &gr_hit, &sp44) != FALSE))
            {
                ftMain_UpdateDamageStatGround(me->egobj, fighter_gobj, fp, gr_hit, sp44);
            }
        }
        if (ftMain_GetGroundHitboxPointer(fp, &gr_hit) != FALSE)
        {
            ftMain_UpdateDamageStatGround(NULL, fighter_gobj, fp, gr_hit, gr_hit->env_kind);
        }
    }
}

// 0x800E5E58 - Meth
void ftMain_SearchFighterCatch(GObj *this_gobj)
{
    GObj *other_gobj;
    ftStruct *this_fp;
    ftStruct *other_fp;
    s32 i, j, m;
    ftHurtbox *ft_hurt;
    gmHitCollisionFlags catch_mask;
    ftHitbox *ft_hit;

    this_fp = ftGetStruct(this_gobj);

    this_fp->search_gobj = NULL;
    this_fp->search_gobj_dist = (f32)FLOAT_MAX;

    other_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];

    while (other_gobj != NULL)
    {
        if (other_gobj == this_gobj) goto next_gobj;

        other_fp = ftGetStruct(other_gobj);

        if (other_fp->is_nullstatus) goto next_gobj;

        if (other_fp->ft_kind == Ft_Kind_MasterHand) goto next_gobj;

        if ((gBattleState->is_team_battle == TRUE) && (gBattleState->is_team_attack == FALSE) && (this_fp->team == other_fp->team)) goto next_gobj;

        if (other_fp->capture_ignore_mask & this_fp->catch_mask) goto next_gobj;

        if ((other_fp->special_hitstatus != gmHitCollision_HitStatus_Normal) || (other_fp->star_hitstatus != gmHitCollision_HitStatus_Normal) || (other_fp->hitstatus != gmHitCollision_HitStatus_Normal)) goto next_gobj;

        for (i = 0; i < ARRAY_COUNT(this_fp->fighter_hit) ^ 0; i++) // XOR 0 ???
        {
            ft_hit = &this_fp->fighter_hit[i];

            if (ft_hit->update_state == gmHitCollision_UpdateState_Disable) continue;
            
            if ((other_fp->ground_or_air == GA_Air) && !(ft_hit->is_hit_air) || (other_fp->ground_or_air == GA_Ground) && !(ft_hit->is_hit_ground)) continue;

            catch_mask.is_interact_hurt = catch_mask.is_interact_shield = FALSE;

            catch_mask.interact_mask = GMHITCOLLISION_MASK_ALL;

            for (m = 0; m < ARRAY_COUNT(ft_hit->hit_targets); m++)
            {
                if (other_gobj == ft_hit->hit_targets[m].victim_gobj)
                {
                    catch_mask = ft_hit->hit_targets[m].victim_flags;

                    break;
                }
            }
            if ((catch_mask.is_interact_hurt) || (catch_mask.is_interact_shield) || (catch_mask.interact_mask != GMHITCOLLISION_MASK_ALL)) continue;

            for (j = 0; j < ARRAY_COUNT(other_fp->fighter_hurt); j++)
            {
                ft_hurt = &other_fp->fighter_hurt[j];

                if (ft_hurt->hitstatus == gmHitCollision_HitStatus_None) break;

                if ((ft_hurt->hitstatus != gmHitCollision_HitStatus_Intangible) && (ft_hurt->hitstatus != gmHitCollision_HitStatus_Invincible))
                {
                    if ((ft_hurt->is_grabbable != FALSE) && (ftCollision_CheckFighterHitFighterHurtIntersect(ft_hit, ft_hurt) != FALSE))
                    {
                        ftMain_UpdateCatchStatFighter(this_fp, ft_hit, other_fp, this_gobj, other_gobj);

                        goto next_gobj;
                    }
                }
            }        
        }
    next_gobj:
        other_gobj = other_gobj->group_gobj_next;
    }
}

// 0x800E6100
void ftMain_ProcSearchAllCatch(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SearchHitMapObject(fighter_gobj);

    if (fp->is_catchstatus)
    {
        ftMain_SearchFighterCatch(fighter_gobj);

        if (fp->search_gobj != NULL)
        {
            fp->proc_catch(fighter_gobj);
            fp->proc_capture(fp->search_gobj, fighter_gobj);
        }
    }
}

// 0x800E6178
void ftMain_ProcSearchAllHit(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->is_nullstatus))
    {
        ftHitCollisionLogIndex = 0;

        ftMain_SearchFighterHit(fighter_gobj);
        ftMain_SearchItemHit(fighter_gobj);
        ftMain_SearchWeaponHit(fighter_gobj);
        ftMain_SearchGroundHit(fighter_gobj);

        if (ftHitCollisionLogIndex != 0)
        {
            ftMain_ProcessHitCollisionStatsMain(fighter_gobj);
        }
    }
}

// 0x800E61EC
void ftMain_ProcUpdateMain(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 damage;
    s32 status_id;
    f32 knockback_resist;
    sb32 is_shieldbreak;
    u32 hitlag_timer;
    s32 sp84;
    s32 element;

    damage = 0;
    is_shieldbreak = FALSE;
    status_id = fp->status_info.status_id;
    hitlag_timer = fp->hitlag_timer;
    sp84 = 0;

    if (fp->unk_ft_0x7AC != 0)
    {
        fp->x3C_unk += fp->unk_ft_0x7AC;
    }
    if (!(fp->is_shield) && (fp->shield_health < 55))
    {
        fp->shield_lifeup_wait--;

        if (fp->shield_lifeup_wait == 0.0F)
        {
            fp->shield_health++;

            fp->shield_lifeup_wait = 10.0F;
        }
    }
    fp->shield_health -= fp->shield_damage_total;

    if (fp->shield_health <= 0)
    {
        fp->shield_health = (fp->ft_kind == Ft_Kind_Yoshi) ? 30 : 30;

        is_shieldbreak = TRUE;
    }
    if (fp->damage_knockback != 0.0F)
    {
        if ((fp->status_info.status_id == ftStatus_Common_Squat) || (fp->status_info.status_id == ftStatus_Common_SquatWait))
        {
            fp->damage_knockback *= (2.0F / 3.0F);
        }
        if (fp->status_info.status_id == ftStatus_Common_Twister)
        {
            fp->damage_kind = 2;
        }
        if (fp->knockback_resist_status < fp->knockback_resist_passive)
        {
            knockback_resist = fp->knockback_resist_passive;
        }
        else knockback_resist = fp->knockback_resist_status;

        fp->damage_knockback -= knockback_resist;

        if (fp->damage_knockback <= 0)
        {
            fp->damage_knockback = 0;
        }
        ftDamageUpdateCheckDropItem(fp, fp->damage_queue);

        if (fp->proc_trap != NULL)
        {
            fp->proc_trap(fighter_gobj);
        }
        if (fp->ft_kind != Ft_Kind_MasterHand)
        {
            switch (fp->damage_kind)
            {
            case 4:
                break;

            case 1:
                ftCommon_ProcDamageStopVoice(fighter_gobj);
                ftCommon_Damage_GotoDamageStatus(fighter_gobj);
                break;

            case 2:
                ftCommon_Damage_SetDamageColAnim(fighter_gobj);
                break;

            case 3:
                ftCommon_ProcDamageStopVoice(fighter_gobj);
                func_ovl3_80140E2C(fighter_gobj);
                break;

            default:
                ftCommon_Damage_UpdateMain(fighter_gobj);
                break;
            }
        }
        else
        {
            ftCommon_Damage_SetDamageColAnim(fighter_gobj);
            ftMasterHand_Common_UpdateDamageStats(fighter_gobj);
        }
        damage = fp->damage_lag;
        sp84 = 1;

        ftCommon_SetShuffleInfo(fp, (fp->damage_element == gmHitCollision_Element_Electric) ? TRUE : FALSE, damage, status_id, fp->hitlag_mul);

        if ((s32)((fp->damage_queue * 0.75F) + 4.0F) > 0)
        {
            ftMain_MakeRumble(fp, 0, (s32)((fp->damage_queue * 0.75F) + 4.0F));
        }
    }
    else if (fp->shield_damage != 0)
    {
        if (is_shieldbreak != FALSE)
        {
            ftCommon_ShieldBreakFly_UpdateVarsSetStatus(fighter_gobj);
        }
        else ftCommon_GuardSetOff_SetStatus(fighter_gobj);

        damage = fp->shield_damage;
    }
    else if (fp->shield_attack_damage != 0)
    {
        if (fp->proc_shield != NULL)
        {
            fp->proc_shield(fighter_gobj);
        }
        if ((fp->attack_rebound != 0) && (fp->catch_gobj == NULL) && (fp->capture_gobj == NULL))
        {
            ftCommon_ProcDamageStopVoice(fighter_gobj);
            ftCommon_ReboundWait_SetStatus(fighter_gobj);
        }
        damage = fp->shield_attack_damage;
    }
    else if (fp->attack_damage != 0)
    {
        if (fp->proc_hit != NULL)
        {
            fp->proc_hit(fighter_gobj);
        }
        damage = fp->attack_damage;

        if (fp->stat_flags.stat_attack_id == ftStatus_AttackIndex_BatSwing4)
        {
            ftMain_MakeRumble(fp, 10, 0);
        }
        else if ((s32)((fp->attack_damage * 0.5F) + 2.0F) > 0)
        {
            ftMain_MakeRumble(fp, 5, (s32)((fp->attack_damage * 0.5F) + 2.0F));
        }
    }
    else if (fp->reflect_damage != 0)
    {
        ftCommon_ShieldBreakFlyReflector_SetStatus(fighter_gobj);
    }
    else if (fp->lr_reflect != LR_Center)
    {
        switch (fp->special_hit->hit_type)
        {
        case 0:
            ftFox_SpecialLwHit_SetStatus(fighter_gobj);
            break;

        case 2:
            func_800269C0(alSound_SFX_BatHit);
            break;
        }
    }
    else if (fp->lr_absorb != LR_Center)
    {
        ftNess_SpecialLw_ProcAbsorb(fighter_gobj);
    }
    if (damage != 0)
    {
        fp->hitlag_timer = gmCommon_DamageCalcHitLag(damage, status_id, fp->hitlag_mul);

        if ((fp->hitlag_timer != 0) && (sp84 != 0))
        {
            fp->x192_flag_b6 = TRUE;
        }
        fp->input.pl.button_tap = fp->input.pl.button_tap_prev = 0;

        if (fp->proc_lagstart != NULL)
        {
            fp->proc_lagstart(fighter_gobj);
        }
    }
    fp->unk_ft_0x7AC = 0;
    fp->attack_damage = 0;
    fp->shield_attack_damage = 0;
    fp->shield_damage = 0;
    fp->shield_damage_total = 0;
    fp->damage_lag = 0;
    fp->damage_queue = 0;
    fp->damage_kind = 0;

    fp->lr_reflect = LR_Center;
    fp->reflect_damage = 0;
    fp->lr_absorb = LR_Center;

    fp->unk_ft_0x7A0 = 0;
    fp->attack_rebound = 0;
    fp->damage_knockback = 0;
    fp->hitlag_mul = 1.0F;

    if ((hitlag_timer == 0) && (fp->afterimage.render_state != -1))
    {
        switch (fp->afterimage.is_itemswing)
        {
        case FALSE:
            if ((fp->ft_kind == Ft_Kind_Link) && (fp->joint_render_state[11 - ftParts_Joint_EnumMax].render_state_b1 == 0))
            {
                ftParts *unk_dobj = fp->joint[11]->unk_0x84;

                func_ovl2_800EDBA4(fp->joint[11]);

                fp->afterimage.desc[fp->afterimage.desc_index].unk_afid_0x0 = unk_dobj->unk_dobjtrans_0x50[3][0];
                fp->afterimage.desc[fp->afterimage.desc_index].unk_afid_0x2 = unk_dobj->unk_dobjtrans_0x50[3][1];
                fp->afterimage.desc[fp->afterimage.desc_index].unk_afid_0x4 = unk_dobj->unk_dobjtrans_0x50[3][2];
                fp->afterimage.desc[fp->afterimage.desc_index].vec.x = unk_dobj->unk_dobjtrans_0x50[2][0];
                fp->afterimage.desc[fp->afterimage.desc_index].vec.y = unk_dobj->unk_dobjtrans_0x50[2][1];
                fp->afterimage.desc[fp->afterimage.desc_index].vec.z = unk_dobj->unk_dobjtrans_0x50[2][2];

                if (fp->afterimage.desc_index == 2)
                {
                    fp->afterimage.desc_index = 0;
                }
                else fp->afterimage.desc_index++;

                if (fp->afterimage.render_state <= 2)
                {
                    fp->afterimage.render_state++;
                }
            }
            break;

        case TRUE:

            if ((fp->item_hold != NULL) && (fp->is_show_item) && (itGetStruct(fp->item_hold)->it_kind == It_Kind_Sword))
            {
                s32 unused;
                Mtx44f mtx;

                func_ovl0_800C9A38(mtx, fp->joint[fp->attributes->joint_itemhold_light]);

                fp->afterimage.desc[fp->afterimage.desc_index].unk_afid_0x0 = mtx[3][0];
                fp->afterimage.desc[fp->afterimage.desc_index].unk_afid_0x2 = mtx[3][1];
                fp->afterimage.desc[fp->afterimage.desc_index].unk_afid_0x4 = mtx[3][2];
                fp->afterimage.desc[fp->afterimage.desc_index].vec.x = mtx[1][0];
                fp->afterimage.desc[fp->afterimage.desc_index].vec.y = mtx[1][1];
                fp->afterimage.desc[fp->afterimage.desc_index].vec.z = mtx[1][2];

                lbVector_Vec3fNormalize(&fp->afterimage.desc[fp->afterimage.desc_index].vec);

                if (fp->afterimage.desc_index == 2)
                {
                    fp->afterimage.desc_index = 0;
                }
                else fp->afterimage.desc_index++;

                if (fp->afterimage.render_state <= 2)
                {
                    fp->afterimage.render_state++;
                }
            }
            break;
        }
    }
}

void func_ovl2_800E69C4(ftStruct *fp, s32 index)
{
    ftPartIndex *part_index;
    void *sp38;
    DObj *joint;
    DObj *j2;
    DObj *j1;
    ftAttributes *attributes;
    DObjDescArray *container;
    DObj *part_joint;
    ftParts *unk_dobj;

    attributes = fp->attributes;
    part_index = &attributes->p_ftpart_lookup[index];

    if (part_index->partindex_0x0 > 3)
    {
        if (fp->lod_current == 1)
        {
            container = &fp->attributes->dobj_desc_container->dobj_desc_array[0];
        }
        else if (attributes->dobj_desc_container->dobj_desc_array[1].dobj_desc[part_index->partindex_0x0 - 4].display_list != NULL)
        {
            container = &attributes->dobj_desc_container->dobj_desc_array[1];
        }
        else container = &attributes->dobj_desc_container->dobj_desc_array[0];
    }
    else container = NULL;

    sp38 = (container != NULL) ? container->dobj_desc[part_index->partindex_0x0 - 4].display_list : NULL;

    joint = func_800092D0(fp->fighter_gobj, sp38);
    joint->unk_0xC->unk_0x8 = NULL;
    joint->unk_0xC = NULL;

    if (sp38 != NULL)
    {
        func_ovl0_800C8CB8(joint, container->d2[part_index->partindex_0x0 - 4], container->d3[part_index->partindex_0x0 - 4], 0, fp->costume);
    }
    if (container != NULL)
    {
        fp->joint_render_state[part_index->partindex_0x0 - 4].render_state_b0 = fp->joint_render_state[part_index->partindex_0x0 - 4].render_state_b1 = (sp38 != NULL) ? 0 : -1;
    }
    part_joint = fp->joint[part_index->partindex_0x4];

    switch (part_index->partindex_0xC)
    {
    case 0:
        if (part_joint->next != NULL)
        {
            j1 = part_joint->next->unk_0x8;
            j2 = part_joint->next;

            while (j1 != NULL)
            {
                j2 = j1;
                j1 = j1->unk_0x8;
            }
            j2->unk_0x8 = joint;
            joint->unk_0xC = j2;
        }
        else part_joint->next = joint;

        joint->prev = part_joint;

        break;

    case 1:
        if (part_joint->next != NULL)
        {
            j2 = part_joint->next;
            j2->unk_0xC = joint;
            joint->unk_0x8 = j2;
        }
        part_joint->next = joint;

        joint->prev = part_joint;

        break;

    case 2:
        j2 = part_joint->next->unk_0x8;
        j2->unk_0xC = joint;
        joint->unk_0x8 = j2;
        j2 = part_joint->next;
        j2->unk_0x8 = joint;
        joint->prev = part_joint;
        joint->unk_0xC = j2;

        break;

    case 3:
        if (part_joint->next != NULL)
        {
            j2 = part_joint->next;
            joint->next = j2;

            do
            {
                j2->prev = joint;
                j2 = j2->unk_0x8;
            } while (j2 != NULL);
        }
        part_joint->next = joint;

        joint->prev = part_joint;

        break;
    }
    fp->joint[part_index->partindex_0x0] = joint;

    joint->unk_0x84 = unk_dobj = ftManager_GetFighterPartsSetNextAlloc();

    unk_dobj->unk_0xC = attributes->dobj_desc_container->dobj_desc_array[fp->lod_current - 1].unk_dobjcontain_0xC;
    unk_dobj->unk_0xD = part_index->partindex_0x0;

    if (part_index->partindex_0x8 != 0)
    {
        func_ovl0_800C8A58(joint, 0x4B, 0, 0, fp->unk_ft_0x149);
    }
}

void func_ovl2_800E6CE0(ftStruct *fp, s32 index)
{
    DObj *temp_a1;
    DObj *temp_t0;
    ftPartIndex *part_index;
    DObj *joint;
    DObj *var_a2;
    DObj *var_a3;
    DObj *new_var;

    part_index = &fp->attributes->p_ftpart_lookup[index];
    joint = fp->joint[part_index->partindex_0x0];

    if (part_index->partindex_0x0 == 1)
    {
        new_var = joint->prev;
        var_a2 = joint->next;
        temp_a1 = new_var;
        var_a3 = var_a2;

        if (var_a3 != NULL)
        {
            temp_t0 = joint->unk_0xC;

            var_a3 = var_a2;
            var_a2 = temp_t0;

            if (temp_t0 == NULL)
            {
                temp_a1->next = var_a3;
            }
            else
            {
                var_a2->unk_0x8 = var_a3;
                var_a3->unk_0xC = joint->unk_0xC;
            }
            var_a2 = var_a3->unk_0x8;
            var_a3->prev = temp_a1;

            while (var_a2 != NULL)
            {
                var_a3 = var_a2;
                var_a2->prev = temp_a1;
                var_a2 = var_a2->unk_0x8;
            }

            var_a3->unk_0x8 = joint->unk_0x8;
            temp_a1 = joint->unk_0x8;

            if (temp_a1 != NULL)
            {
                temp_a1->unk_0xC = var_a3;
            }
        }
        else
        {
            temp_t0 = joint->unk_0xC;

            if (temp_t0 == NULL)
            {
                temp_a1->next = joint->unk_0x8;
            }
            else temp_t0->unk_0x8 = joint->unk_0x8;

            temp_a1 = joint->unk_0x8;

            if (temp_a1 != NULL)
            {
                temp_a1->unk_0xC = joint->unk_0xC;
            }
        }
        joint->next = NULL;
        joint->unk_0xC = NULL;
        joint->unk_0x8 = NULL;
        joint->prev = NULL;

        temp_a1 = fp->joint[part_index->partindex_0x4];

        if (temp_a1->next != NULL)
        {
            var_a3 = temp_a1->next;
            joint->next = temp_a1->next;

            do
            {
                var_a3->prev = joint;
                var_a3 = var_a3->unk_0x8;
            } 
            while (var_a3 != NULL);
        }
        temp_a1->next = joint;
        joint->prev = temp_a1;
    }
}

void func_ovl2_800E6E00(ftStruct *fp, s32 index)
{
    ftPartIndex *part_index;
    DObj *joint;
    DObj *temp_a0;
    DObj *temp_a1;
    DObj *var_v1;
    DObj *var_v0;

    part_index = &fp->attributes->p_ftpart_lookup[index];
    joint = fp->joint[part_index->partindex_0x0];

    ftManager_SetFighterPartsPrevAlloc(joint->unk_0x84);

    temp_a1 = joint->next;
    temp_a0 = joint->prev;

    if (temp_a1 != NULL)
    {
        var_v1 = temp_a1;

        if (joint->unk_0xC == NULL)
        {
            temp_a0->next = temp_a1;
        }
        else
        {
            joint->unk_0xC->unk_0x8 = var_v1;
            var_v1->unk_0xC = (temp_a1 = joint)->unk_0xC;
        }
        var_v0 = var_v1->unk_0x8;
        var_v1->prev = temp_a0;

        while (var_v0 != NULL)
        {
            var_v1 = var_v0;
            var_v0->prev = temp_a0;
            var_v0 = var_v0->unk_0x8;
        }
        var_v1->unk_0x8 = joint->unk_0x8;
        var_v0 = joint->unk_0x8;

        if (var_v0 != NULL)
        {
            var_v0->unk_0xC = var_v1;
        }
    }
    else
    {
        if (joint->unk_0xC == NULL)
        {
            temp_a0->next = joint->unk_0x8;
        }
        else
        {
            joint->unk_0xC->unk_0x8 = joint->unk_0x8;
        }
        if (joint->unk_0x8 != NULL)
        {
            joint->unk_0x8->unk_0xC = joint->unk_0xC;
        }
    }
    fp->joint[part_index->partindex_0x0] = NULL;
    joint->unk_0x8 = NULL;
    joint->unk_0xC = NULL;
    joint->next = NULL;

    func_8000948C(joint);
}

extern ftIntroStatusDesc *D_ovl1_80390D20[];
extern ftIntroStatusDesc D_ovl1_80390BE8;

/*
    Order:
    1. Mario: 0x80129F08
    2. Donkey: 0x80129FBC
    3. Fox: 0x8012A214
    4. Samus: 0x8012A41C
    5. Luigi: 0x8015A4F8
    6. Link: 0x8012A5AC
    7. Kirby: 0x8012A700
    9. Captain: 0x8012AD7C
    8. Yoshi: 0x8012AEF8
    10. Pikachu: 0x8012B010
    11. Purin: 0x8012B178
    12. Ness: 0x8012B2B8
    13. MasterHand: 0x8012B4AC
*/

#include <ft/common/ftcommon_status.inc.c>
#include <ft/chara/ftmario/ftmario_status.inc.c>
#include <ft/chara/ftdonkey/ftdonkey_status.inc.c>
#include <ft/chara/ftfox/ftfox_status.inc.c>
#include <ft/chara/ftsamus/ftsamus_status.inc.c>
#include <ft/chara/ftluigi/ftluigi_status.inc.c>
#include <ft/chara/ftlink/ftlink_status.inc.c>
#include <ft/chara/ftkirby/ftkirby_status.inc.c>
#include <ft/chara/ftcaptain/ftcaptain_status.inc.c>
#include <ft/chara/ftyoshi/ftyoshi_status.inc.c>
#include <ft/chara/ftpikachu/ftpikachu_status.inc.c>
#include <ft/chara/ftpurin/ftpurin_status.inc.c>
#include <ft/chara/ftness/ftness_status.inc.c>
#include <ft/chara/ftmasterhand/ftmasterhand_status.inc.c>

// 0x8012B740
ftStatusDesc *ftStatus_Characters_SpecialDescPointers[/* */] =
{
    ftStatus_SpecialDesc_Mario,
    ftStatus_SpecialDesc_Fox,
    ftStatus_SpecialDesc_Donkey,
    ftStatus_SpecialDesc_Samus,
    ftStatus_SpecialDesc_Luigi,
    ftStatus_SpecialDesc_Link,
    ftStatus_SpecialDesc_Yoshi,
    ftStatus_SpecialDesc_Captain,
    ftStatus_SpecialDesc_Kirby,
    ftStatus_SpecialDesc_Pikachu,
    ftStatus_SpecialDesc_Purin,
    ftStatus_SpecialDesc_Ness,
    ftStatus_SpecialDesc_MasterHand,
    ftStatus_SpecialDesc_Mario,
    ftStatus_SpecialDesc_Mario,
    ftStatus_SpecialDesc_Fox,
    ftStatus_SpecialDesc_Donkey,
    ftStatus_SpecialDesc_Samus,
    ftStatus_SpecialDesc_Luigi,
    ftStatus_SpecialDesc_Link,
    ftStatus_SpecialDesc_Yoshi,
    ftStatus_SpecialDesc_Captain,
    ftStatus_SpecialDesc_Kirby,
    ftStatus_SpecialDesc_Pikachu,
    ftStatus_SpecialDesc_Purin,
    ftStatus_SpecialDesc_Ness,
    ftStatus_SpecialDesc_Donkey
};

extern ColAnimDesc caColorAnimDesc[]; // The disassembler thinks this is 0x8012DBD5, actually starts at 0x8012DBD0

// 0x800E6F24
void ftMain_SetFighterStatus(GObj *fighter_gobj, s32 status_id, f32 frame_begin, f32 anim_rate, u32 flags)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 event_ptr;
    ftAttributes *attributes = fp->attributes;
    ftStatusDesc *status_struct;
    ftIntroStatusDesc *unk_callback;
    f32 anim_frame;
    s32 status_struct_id;
    s32 anim_flags_update;
    s32 anim_flags_bak;
    s32 var_s0_2;
    gmStatFlags status_flags;
    gmStatFlags attack_flags;
    s32 var_v0;
    s32 motion_id;
    void *event_script_ptr;
    DObjDesc *dobj_desc;
    s32 temp_t8;
    ftStatusDesc *status_desc;
    ftScriptInfoArray *script_array;
    ftScriptInfo *script_info;
    DObj *joint;
    DObj *transn_parent;    // Parent of TrasnN_Joint
    DObj *transn_child;     // Child of TransN_Joint
    s32 i;

    status_struct = NULL;
    unk_callback = NULL;

    status_flags = fp->stat_flags;

    if (fp->is_effect_interrupt)
    {
        ftScript_UpdateDefaultEventsGFX(fighter_gobj);

        if (fp->proc_accessory != NULL)
        {
            fp->proc_accessory(fighter_gobj);
        }
    }
    fp->status_info.status_id = status_id;

    if (fp->lod_current != fp->lod_match)
    {
        ftCommon_SetModelPartLevelDetailAll(fighter_gobj, fp->lod_match);
        fp->lod_current = fp->lod_match;
    }
    if (!(flags & FTSTATUPDATE_HIT_PRESERVE) && (fp->is_hitbox_active))
    {
        ftCommon_ClearHitAll(fighter_gobj);
    }
    if (!(flags & FTSTATUPDATE_THROWPOINTER_PRESERVE))
    {
        fp->throw_gobj = NULL;
    }
    if (!(flags & FTSTATUPDATE_HITSTATUS_PRESERVE))
    {
        if (fp->is_hitstatus_nodamage)
        {
            ftCommon_SetHitStatusPartAll(fighter_gobj, gmHitCollision_HitStatus_Normal);
        }
        if (fp->hitstatus != gmHitCollision_HitStatus_Normal)
        {
            ftCollision_SetHitStatusAll(fighter_gobj, gmHitCollision_HitStatus_Normal);
        }
    }
    if (fp->is_hurtbox_modify)
    {
        ftCommon_InitFighterHurtParts(fighter_gobj);
    }
    if (!(flags & FTSTATUPDATE_MODELPART_PRESERVE) && (fp->is_modelpart_modify))
    {
        ftCommon_ResetModelPartRenderAll(fighter_gobj);
    }
    if (!(flags & FTSTATUPDATE_TEXTUREPART_PRESERVE) && (fp->is_texturepart_modify))
    {
        func_ovl2_800E96B0(fighter_gobj);
    }
    if (!(flags & FTSTATUPDATE_COLANIM_PRESERVE) && (caColorAnimDesc[fp->colanim.colanim_id].unk_colanimdesc_0x5 != FALSE))
    {
        ftCommon_ResetColAnimStatUpdate(fighter_gobj);
    }
    if (!(flags & FTSTATUPDATE_GFX_PRESERVE) && (fp->is_attach_effect))
    {
        ftCommon_ProcStopGFX(fighter_gobj);
    }
    fp->is_reflect = FALSE;
    fp->is_absorb = FALSE;
    fp->is_shield = FALSE;

    if (!(flags & FTSTATUPDATE_FASTFALL_PRESERVE))
    {
        fp->is_fast_fall = FALSE;
    }

    fp->is_invisible = FALSE;
    fp->x18E_flag_b0 = FALSE;
    fp->x18E_flag_b1 = FALSE;
    fp->is_playertag_hide = FALSE;
    fp->is_playing_gfx = FALSE; // Not sure exactly what this is, but it prevents certain ColAnim events from running if true?

    if (fp->status_info.pl_kind != Pl_Kind_Result)
    {
        func_ovl2_80115630(fp->player, 2);
        func_ovl2_80115630(fp->player, 3);

        if (!(flags & FTSTATUPDATE_RUMBLE_PRESERVE))
        {
            func_ovl2_80115630(fp->player, 7);
        }
        fp->joint[ftParts_Joint_TopN]->rotate.vec.f.y = fp->lr * F_DEG_TO_RAD(90.0F); // HALF_PI32

        DObjGetStruct(fighter_gobj)->rotate.vec.f.z = 0.0F;

        fp->joint[ftParts_Joint_TopN]->rotate.vec.f.x = DObjGetStruct(fighter_gobj)->rotate.vec.f.z;

        fp->phys_info.vel_air.z = 0.0F;
        fp->phys_info.vel_ground.z = 0.0F;
    }

    fp->x18F_flag_b4 = FALSE;
    fp->is_hitstun = FALSE;

    fp->damage_mul = 1.0F;

    if ((fp->ground_or_air == GA_Ground) && !(flags & FTSTATUPDATE_DAMAGEPORT_PRESERVE))
    {
        fp->damage_player = -1;
    }
    if (!(flags & FTSTATUPDATE_SLOPECONTOUR_PRESERVE))
    {
        fp->slope_contour = 0;
    }
    fp->coll_data.ignore_line_id = -1;

    fp->is_show_item = TRUE;
    fp->x190_flag_b7 = FALSE;

    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_NONE);

    fp->is_nullstatus = FALSE;
    fp->is_damage_resist = FALSE;
    fp->is_ignore_startbutton = FALSE;

    if (fp->camera_mode != 3)
    {
        fp->camera_mode = 0;
    }
    fp->fighter_cam_zoom_range = 1.0F;

    if (!(flags & FTSTATUPDATE_PLAYERTAG_PRESERVE))
    {
        fp->playertag_wait = 0;
    }
    fp->is_special_interrupt = FALSE;
    fp->is_catchstatus = FALSE;
    fp->x192_flag_b1 = FALSE;

    if (!(flags & FTSTATUPDATE_SHUFFLETIME_PRESERVE))
    {
        fp->shuffle_timer = 0;
    }
    if (!(flags & FTSTATUPDATE_LOOPSFX_PRESERVE))
    {
        ftCommon_StopLoopSFX(fp);
    }
    fp->knockback_resist_status = 0.0F;
    fp->damage_stack = 0.0F;

    if (!(flags & FTSTATUPDATE_AFTERIMAGE_PRESERVE))
    {
        fp->afterimage.render_state = -1;
    }

    if ((status_id != ftStatus_Common_Wait) && (status_id != ftStatus_Common_WalkSlow) && (status_id != ftStatus_Common_WalkMiddle) && (status_id != ftStatus_Common_WalkFast))
    {
        fp->attack1_followup_frames = 0.0F;
    }
    if ((fp->status_info.pl_kind != Pl_Kind_Result) && (fp->unk_0x16 != 9))
    {
        func_ovl2_800E827C(fighter_gobj, 9);
    }
    fp->status_info.status_time_spent = 0;

    if (status_id >= FTSTAT_CHARDATA_START) // Check if Character Data status ID
    {
        status_id -= FTSTAT_CHARDATA_START;
    }
    if (status_id >= FTSTAT_OPENING1_START) // Check if Opening status ID 1
    {
        unk_callback = D_ovl1_80390D20[fp->ft_kind];
        status_struct_id = status_id - FTSTAT_OPENING1_START;
    }
    else if (status_id >= FTSTAT_OPENING2_START) // Check if Opening status ID 2
    {
        unk_callback = &D_ovl1_80390BE8;
        status_struct_id = status_id - FTSTAT_OPENING2_START;
    }
    else if (status_id >= ftStatus_Common_SpecialStart)
    {
        status_struct = ftStatus_Characters_SpecialDescPointers[fp->ft_kind];
        status_struct_id = status_id - ftStatus_Common_SpecialStart;
    }
    else if (status_id >= ftStatus_Common_MovesetStart)
    {
        status_struct = ftStatus_CommonDesc_Moveset;
        status_struct_id = status_id - ftStatus_Common_MovesetStart;
    }
    else
    {
        status_struct = ftStatus_CommonDesc_Dead;
        status_struct_id = status_id;
    }
    status_desc = &status_struct[status_struct_id];

    if (fp->status_info.pl_kind != Pl_Kind_Result)
    {
        if ((status_struct[status_struct_id].mflags.motion_attack_id == ftMotion_AttackIndex_None) || (status_struct[status_struct_id].mflags.motion_attack_id != fp->attack_id))
        {
            ftCommon_MotionCountIncSetAttackID(fp, status_struct[status_struct_id].mflags.motion_attack_id);
        }
        attack_flags = status_desc->sflags;

        if ((attack_flags.stat_attack_id == ftStatus_AttackIndex_None) || (attack_flags.stat_attack_id != fp->stat_flags.stat_attack_id))
        {
            ftCommon_StatUpdateCountIncSetFlags(fp, status_struct[status_struct_id].sflags.halfword);
        }
    }
    if (fp->proc_status != NULL)
    {
        fp->proc_status(fighter_gobj);
        fp->proc_status = NULL;
    }
    ftCommon_Update1PGameAttackStats(fp, status_flags.halfword);

    if (status_struct != NULL)
    {
        motion_id = status_struct[status_struct_id].flags_h.motion_id;
        fp->status_info.motion_id = motion_id;
        script_array = fp->ft_data->battlemotion;
    }
    else
    {
        motion_id = unk_callback[status_struct_id].motion_id - 0x10000;
        fp->status_info.motion_id = motion_id;
        script_array = fp->ft_data->demoscript;
    }
    if ((motion_id != -1) && (motion_id != -2))
    {
        script_info = &script_array->script_info[motion_id];

        if (script_info->anim_flags.flags.x19B_flag_b6)
        {
            fp->anim_bank = (void*)((intptr_t)script_info->anim_id + (uintptr_t)fp->ft_data->p_file_shieldpose);
        }
        else if (script_info->anim_id != 0)
        {
            rldm_get_file_external_force(script_info->anim_id, fp->anim_load);
            fp->anim_bank = fp->anim_load;
        }
        else fp->anim_bank = NULL;
        
        if (fp->anim_bank != NULL)
        {
            anim_flags_bak = fp->anim_flags.word & 0xFFFFFFE0;
            fp->anim_flags.word = script_info->anim_flags.word;
            anim_flags_update = fp->anim_flags.word & 0xFFFFFFE0;

            for (i = 0; ((anim_flags_bak != 0) || (anim_flags_update != 0)); i++, anim_flags_update <<= 1, anim_flags_bak <<= 1)
            {
                if (!(anim_flags_bak & (1 << 31)))
                {
                    if (anim_flags_update & (1 << 31))
                    {
                        func_ovl2_800E69C4(fp, i);
                    }
                }
                else if (anim_flags_update & (1 << 31))
                {
                    func_ovl2_800E6CE0(fp, i);
                }
                else func_ovl2_800E6E00(fp, i);
            }

            dobj_desc = attributes->dobj_desc_container->dobj_desc_array[fp->lod_current - 1].dobj_desc;

            for (i = ftParts_Joint_EnumMax; dobj_desc->index != 0x12; i++, dobj_desc++)
            {
                joint = fp->joint[i];

                if (joint != NULL)
                {
                    joint->translate.vec.f = dobj_desc->translate;

                    joint->rotate.vec.f = dobj_desc->rotate;

                    joint->scale.vec.f = dobj_desc->scale;

                    joint->flags = DOBJ_RENDERFLAG_NONE;
                }
            }
            if (fp->anim_flags.flags.is_use_transn_joint)
            {
                joint = fp->joint[ftParts_Joint_TransN];
                
                joint->translate.vec.f.x = joint->translate.vec.f.y = joint->translate.vec.f.z = 0.0F;

                joint->rotate.vec.f.z = 0.0F;

                joint->flags = DOBJ_RENDERFLAG_NONE;
            }
            if (fp->anim_flags.flags.is_use_xrotn_joint)
            {
                joint = fp->joint[ftParts_Joint_XRotN];

                joint->translate.vec.f.x = joint->translate.vec.f.y = joint->translate.vec.f.z = 0.0F;
                
                joint->rotate.vec.f.x = joint->rotate.vec.f.y = joint->rotate.vec.f.z = 0.0F; 
                
                joint->scale.vec.f.x = joint->scale.vec.f.y = joint->scale.vec.f.z = 1.0F;

                joint->flags = DOBJ_RENDERFLAG_NONE;
            }
            if (fp->anim_flags.flags.is_use_yrotn_joint)
            {
                joint = fp->joint[ftParts_Joint_YRotN];

                joint->translate.vec.f.x = joint->translate.vec.f.y = joint->translate.vec.f.z = 0.0F;

                joint->rotate.vec.f.x = joint->rotate.vec.f.y = joint->rotate.vec.f.z = 0.0F;

                joint->scale.vec.f.x = joint->scale.vec.f.y = joint->scale.vec.f.z = 1.0F;

                joint->flags = DOBJ_RENDERFLAG_NONE;
            }
            func_ovl0_800C87F4(fp->joint[ftParts_Joint_TopN]->child, fp->anim_bank, frame_begin);

            if (anim_rate != DObjGetStruct(fighter_gobj)->dobj_f1)
            {
                omSetGObjAnimPlaybackRate(fighter_gobj, anim_rate);
            }
            if (fp->anim_flags.flags.is_use_transn_joint)
            {
                joint = fp->joint[ftParts_Joint_TransN];

                transn_parent = joint->parent;
                transn_child = joint->child;
                transn_parent->child = transn_child;
                transn_child->parent = transn_parent;
                transn_child->sib_next = joint;
                joint->sib_prev = transn_child;
                joint->parent = transn_child->parent;
                joint->child = NULL;
            }

            if (fp->x190_flag_b3)
            {
                if (!(fp->anim_flags.flags.x19B_flag_b7))
                {
                    func_ovl2_800EB6EC(fp);
                }
            }
            else if (fp->anim_flags.flags.x19B_flag_b7)
            {
                func_ovl2_800EB7F4(fp);
            }

            fp->x190_flag_b3 = fp->anim_flags.flags.x19B_flag_b7;

            if (attributes->unk_0x324 != NULL)
            {
                if (fp->anim_flags.flags.x19B_flag_b5)
                {
                    fp->x18F_flag_b5 = FALSE;
                }
                else fp->x18F_flag_b5 = TRUE;
            }
        }
        if (status_struct != NULL)
        {
            if (script_info->offset != 0x80000000)
            {
                // Actually subaction scripts?
                if (fp->anim_flags.flags.x19B_flag_b3)
                {
                    event_ptr = *fp->ft_data->p_file_demoscript;

                    event_script_ptr = (void*)((intptr_t)script_info->offset + (uintptr_t)event_ptr);
                }
                else
                {
                    event_ptr = *fp->ft_data->p_file_battlemotion;

                    event_script_ptr = (void*)((intptr_t)script_info->offset + (uintptr_t)event_ptr);
                }
            }
            else event_script_ptr = NULL;

            fp->motion_event[0][0].p_script = fp->motion_event[1][0].p_script = event_script_ptr;
        }
        else
        {
            if (script_info->offset != 0x80000000)
            {
                event_script_ptr = (void*)script_info->offset;
            }
            else event_script_ptr = NULL;

            fp->motion_event[0][0].p_script = fp->motion_event[1][0].p_script = event_script_ptr;
        }
        anim_frame = DObjGetStruct(fighter_gobj)->dobj_f1 - frame_begin;

        fp->motion_event[0][0].frame_timer = fp->motion_event[1][0].frame_timer = anim_frame;

        fp->motion_event[0][0].script_index = fp->motion_event[1][0].script_index = 0;

        for (i = 1; i < ARRAY_COUNT(fp->motion_event); i++)
        {
            fp->motion_event[0][i].p_script = fp->motion_event[1][i].p_script = NULL;
        }

        if (frame_begin != 0.0F)
        {
            ftMain_UpdateAnimAllEvents(fighter_gobj);
        }
        else
        {
            func_ovl2_800E0830(fighter_gobj);
            ftMain_UpdateColAnim(fighter_gobj);
        }
    }
    else for (i = 0; i < ARRAY_COUNT(fp->motion_event); i++)
    {
        fp->motion_event[0][i].p_script = fp->motion_event[1][i].p_script = NULL;
    }
    if (fp->status_info.pl_kind != Pl_Kind_Result)
    {
        fp->proc_update = status_struct[status_struct_id].proc_update;
        fp->proc_interrupt = status_struct[status_struct_id].proc_interrupt;
        fp->proc_physics = status_struct[status_struct_id].proc_physics;
        fp->proc_map = status_struct[status_struct_id].proc_map;
        fp->proc_slope = ftMap_UpdateSlopeContour;
        fp->proc_accessory = NULL;
        fp->proc_damage = NULL;
        fp->proc_trap = NULL;
        fp->proc_hit = NULL;
        fp->proc_shield = NULL;
        fp->proc_gfx = NULL;
        fp->proc_lagupdate = NULL;
        fp->proc_lagstart = NULL;
        fp->proc_lagend = NULL;
    }
    else if (unk_callback != NULL)
    {
        fp->proc_update = unk_callback[status_struct_id].proc_update;
    }
    else fp->proc_update = NULL;
}
