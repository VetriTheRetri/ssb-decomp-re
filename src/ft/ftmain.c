#include <ft/fighter.h>
#include <wp/weapon.h>
#include <it/item.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <sys/thread6.h>

extern alSoundEffect* func_800269C0_275C0(u16);
extern void func_ovl0_800C9A38();

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80131180 - stage moving hazards
GRObstacle sFTMainGroundObstacles[2];

// 0x80131190 - stage environmental obstacles
GRHazard sFTMainGroundHazards[1];

// 0x80131198
s32 sFTMainGroundObstaclesNum;

// 0x8013119C
s32 sFTMainGroundHazardsNum;

// 0x801311A0
sb32 gFTMainIsHurtDetect[GMCOMMON_PLAYERS_MAX];

// 0x801311B0
sb32 gFTMainIsHitDetect[GMCOMMON_PLAYERS_MAX];

// 0x801311C0
s32 sFTMainHitlogID;

// 0x801311C4
s32 sFTMainPad0x801311C4;

// 0x801311C8 - 0x10 bytes of padding after this, for mpcoll .bss
FTHitlog sFTMainHitlogs[10];

// 0x801312E0
s32 sFTMainPad0x801312E0;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// Hitbox sound effects
// Rows = SFX type
// Columns = SFX level

// 0x80128D00
u16 dFTMainHitCollisionFGMs[/* */][nGMHitLevelEnumMax] =
{
    { nSYAudioFGMPunchS,             nSYAudioFGMPunchM,             nSYAudioFGMPunchL             },    // Punch
    { nSYAudioFGMKickS,              nSYAudioFGMKickM,              nSYAudioFGMKickL              },    // Kick
    { nSYAudioFGMMarioSpecialHiCoin, nSYAudioFGMMarioSpecialHiCoin, nSYAudioFGMMarioSpecialHiCoin },    // Coin
    { nSYAudioFGMBurnS,              nSYAudioFGMBurnM,              nSYAudioFGMBurnL              },    // Burn
    { nSYAudioFGMShockS,             nSYAudioFGMShockM,             nSYAudioFGMShockL             },    // Shock
    { nSYAudioFGMSlashS,             nSYAudioFGMSlashM,             nSYAudioFGMSlashL             },    // Slash
    { nSYAudioFGMHarisenHit,         nSYAudioFGMHarisenHit,         nSYAudioFGMHarisenHit         },    // Fan / Slap
    { nSYAudioFGMPunchM,             nSYAudioFGMPunchL,             nSYAudioFGMBatHit             }     // Bat
};

// 0x80128D30
GRHitCollision dFTMainGroundHitCollisionAttributes[/* */] =
{
    {  4,  1, 361, 100, 100, 0, nGMHitElementFire  },
    {  5, 10,  90, 100, 200, 0, nGMHitElementFire  },
    {  6, 10,  90, 100, 100, 0, nGMHitElementFire  },
    {  7, 10, 361, 100,  80, 0, nGMHitElementSlash },
    {  8,  1,  90, 100, 100, 0, nGMHitElementFire  },
    {  9,  1,  90, 100, 100, 0, nGMHitElementFire  }
};

/*
    Fighter status files order:
    1. Mario: 0x80129F08
    2. Donkey Kong: 0x80129FBC
    3. Fox: 0x8012A214
    4. Samus: 0x8012A41C
    5. Luigi: 0x8015A4F8
    6. Link: 0x8012A5AC
    7. Kirby: 0x8012A700
    9. Captain Falcon: 0x8012AD7C
    8. Yoshi: 0x8012AEF8
    10. Pikachu: 0x8012B010
    11. Jigglypuff: 0x8012B178
    12. Ness: 0x8012B2B8
    13. Master Hand: 0x8012B4AC
*/

#include <ft/ftcommon/ftcommonstatus.h>
#include <ft/ftchar/ftmario/ftmariostatus.h>
#include <ft/ftchar/ftdonkey/ftdonkeystatus.h>
#include <ft/ftchar/ftfox/ftfoxstatus.h>
#include <ft/ftchar/ftsamus/ftsamusstatus.h>
#include <ft/ftchar/ftluigi/ftluigistatus.h>
#include <ft/ftchar/ftlink/ftlinkstatus.h>
#include <ft/ftchar/ftkirby/ftkirbystatus.h>
#include <ft/ftchar/ftcaptain/ftcaptainstatus.h>
#include <ft/ftchar/ftyoshi/ftyoshistatus.h>
#include <ft/ftchar/ftpikachu/ftpikachustatus.h>
#include <ft/ftchar/ftpurin/ftpurinstatus.h>
#include <ft/ftchar/ftness/ftnessstatus.h>
#include <ft/ftchar/ftboss/ftbossstatus.h>

// 0x8012B740
FTStatusDesc *dFTMainSpecialStatusDescs[/* */] =
{
    dFTMarioSpecialStatusDescs,
    dFTFoxSpecialStatusDescs,
    dFTDonkeySpecialStatusDescs,
    dFTSamusSpecialStatusDescs,
    dFTLuigiSpecialStatusDescs,
    dFTLinkSpecialStatusDescs,
    dFTYoshiSpecialStatusDescs,
    dFTCaptainSpecialStatusDescs,
    dFTKirbySpecialStatusDescs,
    dFTPikachuSpecialStatusDescs,
    dFTPurinSpecialStatusDescs,
    dFTNessSpecialStatusDescs,
    dFTBossSpecialStatusDescs,
    dFTMarioSpecialStatusDescs,
    dFTMarioSpecialStatusDescs,
    dFTFoxSpecialStatusDescs,
    dFTDonkeySpecialStatusDescs,
    dFTSamusSpecialStatusDescs,
    dFTLuigiSpecialStatusDescs,
    dFTLinkSpecialStatusDescs,
    dFTYoshiSpecialStatusDescs,
    dFTCaptainSpecialStatusDescs,
    dFTKirbySpecialStatusDescs,
    dFTPikachuSpecialStatusDescs,
    dFTPurinSpecialStatusDescs,
    dFTNessSpecialStatusDescs,
    dFTDonkeySpecialStatusDescs
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800DF0F0
void ftMainParseMotionEvent(GObj *fighter_gobj, FTStruct *fp, FTMotionScript *ms, u32 ev_kind)
{
    s32 unused1;
    s32 effect_id;
    s32 i, j;
    s32 unused2;
    FTHitColl *ft_hitcoll;
    s32 hit_id;
    s32 group_id;
    u32 sfx_id;
    s32 joint_id;
    Vec3f effect_offset;
    Vec3f effect_scatter;
    u32 flag;
    Vec3f hurt_offset;
    Vec3f hurt_size;
    FTAttributes *attributes;
    FTMotionDamageScript *p_damage;
    s32 ft_kind;
    s32 script_id;
    s32 slope_contour;
    sb32 unused3;

    switch (ev_kind)
    {
    case nFTMotionEventKindEnd:
        ms->p_script = NULL;
        break;

    case nFTMotionEventKindSyncWait:
        ms->frame_timer += ftMotionEventCast(ms, FTMotionEventDefault)->value;

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindAsyncWait:
        ms->frame_timer = ftMotionEventCast(ms, FTMotionEventDefault)->value - fighter_gobj->anim_frame;

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindMakeHit:
    case nFTMotionEventKindMakeHitScaleOffset:
        if (fp->pl_kind != nFTPlayerKindDemo)
        {
            hit_id = ftMotionEventCast(ms, FTMotionEventMakeHit1)->hit_id;
            ft_hitcoll = &fp->hit_colls[hit_id];

            if ((ft_hitcoll->update_state == nGMHitUpdateDisable) || (ft_hitcoll->group_id != ftMotionEventCast(ms, FTMotionEventMakeHit1)->group_id))
            {
                ft_hitcoll->group_id = ftMotionEventCast(ms, FTMotionEventMakeHit1)->group_id;
                ft_hitcoll->update_state = nGMHitUpdateNew;
                fp->is_hitbox_active = TRUE;

                for (i = 0; i < ARRAY_COUNT(fp->hit_colls); i++)
                {
                    if ((i != hit_id) && (fp->hit_colls[i].update_state != nGMHitUpdateDisable) && (ft_hitcoll->group_id == fp->hit_colls[i].group_id))
                    {
                        for (j = 0; j < ARRAY_COUNT(ft_hitcoll->hit_records); j++)
                        {
                            ft_hitcoll->hit_records[j] = fp->hit_colls[i].hit_records[j];
                        }
                        break;
                    }
                }
                if (i == ARRAY_COUNT(fp->hit_colls))
                {
                    ftParamClearHitRecordID(fp, hit_id);
                }
            }
            ft_hitcoll->joint_id = ftParamGetJointID(fp, ftMotionEventCast(ms, FTMotionEventMakeHit1)->joint_id);
            ft_hitcoll->joint = fp->joints[ft_hitcoll->joint_id];
            ft_hitcoll->damage = ftMotionEventCast(ms, FTMotionEventMakeHit1)->damage;
            ft_hitcoll->can_rebound = ftMotionEventCast(ms, FTMotionEventMakeHit1)->can_rebound;
            ft_hitcoll->element = ftMotionEventCast(ms, FTMotionEventMakeHit1)->element;

            ftMotionEventAdvance(ms, FTMotionEventMakeHit1);

            ft_hitcoll->size = ftMotionEventCast(ms, FTMotionEventMakeHit2)->size * 0.5F;
            ft_hitcoll->offset.x = ftMotionEventCast(ms, FTMotionEventMakeHit2)->off_x;

            ftMotionEventAdvance(ms, FTMotionEventMakeHit2);

            ft_hitcoll->offset.y = ftMotionEventCast(ms, FTMotionEventMakeHit3)->off_y;
            ft_hitcoll->offset.z = ftMotionEventCast(ms, FTMotionEventMakeHit3)->off_z;

            ftMotionEventAdvance(ms, FTMotionEventMakeHit3);

            ft_hitcoll->angle = ftMotionEventCast(ms, FTMotionEventMakeHit4)->angle;
            ft_hitcoll->knockback_scale = ftMotionEventCast(ms, FTMotionEventMakeHit4)->knockback_scale;
            ft_hitcoll->knockback_weight = ftMotionEventCast(ms, FTMotionEventMakeHit4)->knockback_weight;

            ft_hitcoll->is_hit_air = ftMotionEventCast(ms, FTMotionEventMakeHit4)->is_hit_ground_air & 1;           // Why?
            ft_hitcoll->is_hit_ground = (ftMotionEventCast(ms, FTMotionEventMakeHit4)->is_hit_ground_air & 2) >> 1; // ???

            ftMotionEventAdvance(ms, FTMotionEventMakeHit4);

            ft_hitcoll->shield_damage = ftMotionEventCast(ms, FTMotionEventMakeHit5)->shield_damage;

            ft_hitcoll->sfx_level = ftMotionEventCast(ms, FTMotionEventMakeHit5)->sfx_level;
            ft_hitcoll->sfx_kind = ftMotionEventCast(ms, FTMotionEventMakeHit5)->sfx_kind;

            ft_hitcoll->knockback_base = ftMotionEventCast(ms, FTMotionEventMakeHit5)->knockback_base;

            ftMotionEventAdvance(ms, FTMotionEventMakeHit5);

            ft_hitcoll->is_scale_pos = (ev_kind == nFTMotionEventKindMakeHitScaleOffset) ? TRUE : FALSE;

            ft_hitcoll->attack_id = fp->attack_id;

            ft_hitcoll->motion_count = fp->motion_count;

            ft_hitcoll->damage = ftParamGetStaledDamage(fp->player, ft_hitcoll->damage, ft_hitcoll->attack_id, ft_hitcoll->motion_count);
        }
        else ftMotionEventAdvance(ms, FTMotionEventMakeHit);
        break;

    case nFTMotionEventKindSetHitOffset:
        hit_id = ftMotionEventCast(ms, FTMotionEventSetHitOffset1)->hit_id;

        ft_hitcoll = &fp->hit_colls[hit_id];

        ft_hitcoll->offset.x = ftMotionEventCast(ms, FTMotionEventSetHitOffset1)->off_x;

        ftMotionEventAdvance(ms, FTMotionEventSetHitOffset1);

        ft_hitcoll->offset.y = ftMotionEventCast(ms, FTMotionEventSetHitOffset2)->off_y;
        ft_hitcoll->offset.z = ftMotionEventCast(ms, FTMotionEventSetHitOffset2)->off_z;

        ftMotionEventAdvance(ms, FTMotionEventSetHitOffset2);
        break;

    case nFTMotionEventKindSetHitDamage:
        if (fp->pl_kind != nFTPlayerKindDemo)
        {
            hit_id = ftMotionEventCast(ms, FTMotionEventSetHitDamage)->hit_id;

            fp->hit_colls[hit_id].damage = ftMotionEventCast(ms, FTMotionEventSetHitDamage)->damage;

            ftMotionEventAdvance(ms, FTMotionEventSetHitDamage);

            fp->hit_colls[hit_id].damage = ftParamGetStaledDamage(fp->player, fp->hit_colls[hit_id].damage, fp->hit_colls[hit_id].attack_id, fp->hit_colls[hit_id].motion_count);
        }
        else ftMotionEventAdvance(ms, FTMotionEventSetHitDamage);
        break;

    case nFTMotionEventKindSetHitSize:
        hit_id = ftMotionEventCast(ms, FTMotionEventSetHitSize)->hit_id;

        fp->hit_colls[hit_id].size = ftMotionEventCast(ms, FTMotionEventSetHitSize)->size * 0.5F;

        ftMotionEventAdvance(ms, FTMotionEventSetHitSize);
        break;

    case nFTMotionEventKindSetHitSoundLevel:
        hit_id = ftMotionEventCast(ms, FTMotionEventSetHitSound)->hit_id;

        fp->hit_colls[hit_id].sfx_level = ftMotionEventCast(ms, FTMotionEventSetHitSound)->sfx_level;

        ftMotionEventAdvance(ms, FTMotionEventSetHitSound);
        break;

    case nFTMotionEventKindRefreshHitID:
        hit_id = ftMotionEventCast(ms, FTMotionEventDefault)->value;

        ftMotionEventAdvance(ms, FTMotionEventDefault);

        ftParamRefreshHitID(fighter_gobj, hit_id);
        break;

    case nFTMotionEventKindClearHitID:
        hit_id = ftMotionEventCast(ms, FTMotionEventDefault)->value;

        ftMotionEventAdvance(ms, FTMotionEventDefault);

        fp->hit_colls[hit_id].update_state = nGMHitUpdateDisable;
        break;

    case nFTMotionEventKindClearHitAll:
        ftParamClearHitAll(fighter_gobj);

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindSetThrow:
        ftMotionEventAdvance(ms, FTMotionEventSetThrow1);

        fp->fighter_throw = ftMotionEventCast(ms, FTMotionEventSetThrow2)->fighter_throw;

        ftMotionEventAdvance(ms, FTMotionEventSetThrow2);
        break;

    case nFTMotionEventKindPlaySFXStoreInfo:
        if (!(fp->is_playing_sfx))
        {
            fp->p_sfx = func_800269C0_275C0(ftMotionEventCastAdvance(ms, FTMotionEventDefault)->value);

            fp->sfx_id = (fp->p_sfx != NULL) ? fp->p_sfx->sfx_id : 0;
        }
        else ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindPlaySFX:
        if (!(fp->is_playing_sfx))
        {
            func_800269C0_275C0(ftMotionEventCastAdvance(ms, FTMotionEventDefault)->value);
        }
        else ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindPlayLoopSFXStoreInfo:
        if (!(fp->is_playing_sfx))
        {
            ftParamPlayLoopSFX(fp, ftMotionEventCastAdvance(ms, FTMotionEventDefault)->value);
        }
        else ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindStopLoopSFX:
        ftParamStopLoopSFX(fp), ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindPlayVoiceStoreInfo:
        if (!(fp->is_playing_sfx) && (fp->attributes->is_have_voice))
        {
            ftParamPlayVoice(fp, ftMotionEventCastAdvance(ms, FTMotionEventDefault)->value);
        }
        else ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindPlayLoopVoiceStoreInfo:
        if (!(fp->is_playing_sfx) && (fp->attributes->is_have_voice))
        {
            ftParamPlayLoopSFX(fp, ftMotionEventCastAdvance(ms, FTMotionEventDefault)->value);
        }
        else ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindPlaySmashVoice:
        if (!(fp->is_playing_sfx))
        {
            ftParamPlayVoice(fp, fp->attributes->smash_sfx[mtTrigGetRandomIntRange(ARRAY_COUNT(fp->attributes->smash_sfx))]);

            ftMotionEventAdvance(ms, FTMotionEventDefault);
        }
        else ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindSetAirJumpAdd:
        fp->ga = nMPKineticsAir;

        fp->physics.vel_air.z = DObjGetStruct(fighter_gobj)->translate.vec.f.z = 0.0F;

        fp->jumps_used++;

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindSetAirJumpMax:
        attributes = fp->attributes;

        fp->ga = nMPKineticsAir;

        fp->physics.vel_air.z = DObjGetStruct(fighter_gobj)->translate.vec.f.z = 0.0F;

        fp->jumps_used = attributes->jumps_max;

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindEffect:
    case nFTMotionEventKindEffectScaleOffset:
        if (!(fp->is_playing_effect))
        {
            joint_id = ftParamGetJointID(fp, ftMotionEventCast(ms, FTMotionEventMakeEffect1)->joint_id);
            effect_id = ftMotionEventCast(ms, FTMotionEventMakeEffect1)->effect_id;
            flag = ftMotionEventCast(ms, FTMotionEventMakeEffect1)->flag;

            ftMotionEventAdvance(ms, FTMotionEventMakeEffect1);

            effect_offset.x = ftMotionEventCast(ms, FTMotionEventMakeEffect2)->off_x;
            effect_offset.y = ftMotionEventCast(ms, FTMotionEventMakeEffect2)->off_y;

            ftMotionEventAdvance(ms, FTMotionEventMakeEffect2);

            effect_offset.z = ftMotionEventCast(ms, FTMotionEventMakeEffect3)->off_z;
            effect_scatter.x = ftMotionEventCast(ms, FTMotionEventMakeEffect3)->rng_x;

            ftMotionEventAdvance(ms, FTMotionEventMakeEffect3);

            effect_scatter.y = ftMotionEventCast(ms, FTMotionEventMakeEffect4)->rng_y;
            effect_scatter.z = ftMotionEventCast(ms, FTMotionEventMakeEffect4)->rng_z;

            ftMotionEventAdvance(ms, FTMotionEventMakeEffect4);

            ftParamMakeEffect(fighter_gobj, effect_id, joint_id, &effect_offset, &effect_scatter, fp->lr, (ev_kind == nFTMotionEventKindEffectScaleOffset) ? TRUE : FALSE, flag);
        }
        else ftMotionEventAdvance(ms, FTMotionEventMakeEffect);
        break;

    case nFTMotionEventKindSetHitStatusPartAll:
        ftParamSetHitStatusPartAll(fighter_gobj, ftMotionEventCast(ms, FTMotionEventDefault)->value);

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindSetHitStatusPartID:
        ftParamSetHitStatusPartID(fighter_gobj, ftParamGetJointID(fp, ftMotionEventCast(ms, FTMotionEventSetHitStatusPartID)->joint_id), ftMotionEventCast(ms, FTMotionEventSetHitStatusPartID)->hitstatus);

        ftMotionEventAdvance(ms, FTMotionEventSetHitStatusPartID);
        break;

    case nFTMotionEventKindSetHitStatusAll:
        ftParamSetHitStatusAll(fighter_gobj, ftMotionEventCast(ms, FTMotionEventDefault)->value);

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindResetHurtPartAll:
        ftParamResetFighterHurtPartAll(fighter_gobj);

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindSetHurtPartID:
        joint_id = ftParamGetJointID(fp, ftMotionEventCast(ms, FTMotionEventModifyHurtPartID1)->joint_id);

        ftMotionEventAdvance(ms, FTMotionEventModifyHurtPartID1);

        hurt_offset.x = ftMotionEventCast(ms, FTMotionEventModifyHurtPartID2)->off_x;
        hurt_offset.y = ftMotionEventCast(ms, FTMotionEventModifyHurtPartID2)->off_y;

        ftMotionEventAdvance(ms, FTMotionEventModifyHurtPartID2);

        hurt_offset.z = ftMotionEventCast(ms, FTMotionEventModifyHurtPartID3)->off_z;
        hurt_size.x = ftMotionEventCast(ms, FTMotionEventModifyHurtPartID3)->size_x;

        ftMotionEventAdvance(ms, FTMotionEventModifyHurtPartID3);

        hurt_size.y = ftMotionEventCast(ms, FTMotionEventModifyHurtPartID4)->size_y;
        hurt_size.z = ftMotionEventCast(ms, FTMotionEventModifyHurtPartID4)->size_z;

        ftMotionEventAdvance(ms, FTMotionEventModifyHurtPartID4);

        ftParamModifyFighterHurtPartID(fighter_gobj, joint_id, &hurt_offset, &hurt_size);
        break;

    case nFTMotionEventKindLoopBegin:
        ms->p_goto[ms->script_id] = (void*) ((uintptr_t)ms->p_script + sizeof(FTMotionEventDefault));

        ms->script_id++;

        ms->loop_count[ms->script_id++ - 1] = ftMotionEventCast(ms, FTMotionEventDefault)->value, ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindLoopEnd:
        if (--ms->loop_count[ms->script_id - 2] != 0)
        {
            ms->p_script = ms->p_goto[ms->script_id - 2];
        }
        else ftMotionEventAdvance(ms, FTMotionEventDefault), ms->script_id -= 2; // Seems fake, but also impossible to match otherwise???
        break;

    case nFTMotionEventKindSubroutine:
        ftMotionEventAdvance(ms, FTMotionEventSubroutine1);

        ms->p_goto[ms->script_id] = (void*) ((uintptr_t)ms->p_script + sizeof(FTMotionEventSubroutine2));

        ms->script_id++;

        ms->p_script = ftMotionEventCast(ms, FTMotionEventSubroutine2)->p_goto;
        break;

    case nFTMotionEventKindSetDamageThrown:
        if (fp->throw_gobj != NULL)
        {
            ft_kind = fp->throw_ft_kind;

            ftMotionEventAdvance(ms, FTMotionEventSetDamageThrown1);

            p_damage = ftMotionEventCast(ms, FTMotionEventSetDamageThrown2)->p_subroutine;

            if (p_damage->p_script[fp->status_vars.common.damage.script_id][ft_kind] != NULL)
            {
                ms->p_goto[ms->script_id] = (void*) ((uintptr_t)ms->p_script + sizeof(FTMotionEventSetDamageThrown2));

                ms->script_id++;

                ms->p_script = p_damage->p_script[fp->status_vars.common.damage.script_id][ft_kind];
            }
            else ftMotionEventAdvance(ms, FTMotionEventSetDamageThrown2);
        }
        else ftMotionEventAdvance(ms, FTMotionEventSetDamageThrown);
        break;

    case nFTMotionEventKindReturn:
        ms->p_script = ms->p_goto[--ms->script_id];
        break;

    case nFTMotionEventKindGoto:
        ftMotionEventAdvance(ms, FTMotionEventGoto1);

        ms->p_script = ftMotionEventCast(ms, FTMotionEventGoto2)->p_goto;
        break;

    case nFTMotionEventKindSetParallelScript:
        ftMotionEventAdvance(ms, FTMotionEventParallel1);

        if (fp->motion_script[0][1].p_script == NULL)
        {
            fp->motion_script[0][1].p_script = fp->motion_script[1][1].p_script = ftMotionEventCast(ms, FTMotionEventParallel2)->p_goto;

            fp->motion_script[0][1].frame_timer = fp->motion_script[1][1].frame_timer = DObjGetStruct(fighter_gobj)->anim_speed - fighter_gobj->anim_frame;

            fp->motion_script[0][1].script_id = fp->motion_script[1][1].script_id = 0;
        }
        ftMotionEventAdvance(ms, FTMotionEventParallel2);
        break;

    case nFTMotionEventKindPauseScript:
        ftMotionEventAdvance(ms, FTMotionEventDefault);

        ms->frame_timer = F32_MAX;
        break;

    case nFTMotionEventKindSetModelPartID:
        ftParamSetModelPartID
        (
            fighter_gobj, 
            ftParamGetJointID(fp, ftMotionEventCast(ms, FTMotionEventSetModelPartID)->joint_id), 
            ftMotionEventCast(ms, FTMotionEventSetModelPartID)->modelpart_id
        );
        ftMotionEventAdvance(ms, FTMotionEventSetModelPartID);
        break;

    case nFTMotionEventKindResetModelPartAll:
        ftParamResetModelPartAll(fighter_gobj);

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindHideModelPartAll:
        ftParamHideModelPartAll(fighter_gobj);

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindSetTexturePartID:
        ftParamSetTexturePartID
        (
            fighter_gobj, 
            ftMotionEventCast(ms, FTMotionEventSetTexturePartID)->texturepart_id, 
            ftMotionEventCast(ms, FTMotionEventSetTexturePartID)->frame
        );
        ftMotionEventAdvance(ms, FTMotionEventSetTexturePartID);
        break;

    case nFTMotionEventKindSetColAnim:
        ftParamCheckSetFighterColAnimID
        (
            fighter_gobj, 
            ftMotionEventCast(ms, FTMotionEventSetColAnimID)->colanim_id, 
            ftMotionEventCast(ms, FTMotionEventSetColAnimID)->length
        );
        ftMotionEventAdvance(ms, FTMotionEventSetColAnimID);
        break;

    case nFTMotionEventKindResetColAnim:
        ftParamResetStatUpdateColAnim(fighter_gobj);

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindSetFlag0:
        fp->command_vars.flags.flag0 = ftMotionEventCast(ms, FTMotionEventDefault)->value;

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindSetFlag1:
        fp->command_vars.flags.flag1 = ftMotionEventCast(ms, FTMotionEventDefault)->value;

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindSetFlag2:
        fp->command_vars.flags.flag2 = ftMotionEventCast(ms, FTMotionEventDefault)->value;

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindSetFlag3:
        fp->command_vars.flags.flag3 = ftMotionEventCast(ms, FTMotionEventDefault)->value;

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindSetSlopeContour:
        slope_contour = fp->slope_contour;

        fp->slope_contour = ftMotionEventCastAdvance(ms, FTMotionEventSetSlopeContour)->flags;

        if (!(slope_contour & fp->slope_contour & FTSLOPECONTOUR_FLAG_FULL))
        {
            DObjGetStruct(fighter_gobj)->rotate.vec.f.x = F_CLC_DTOR32(0.0F);
        }
        break;

    case nFTMotionEventKindHideItem:
        fp->is_show_item = ftMotionEventCast(ms, FTMotionEventDefault)->value;

        ftMotionEventAdvance(ms, FTMotionEventDefault);
        break;

    case nFTMotionEventKindSetAfterImage:
        fp->afterimage.is_itemswing = ftMotionEventCast(ms, FTMotionEventSetAfterImage)->is_itemswing;
        fp->afterimage.drawstatus = ftMotionEventCast(ms, FTMotionEventSetAfterImage)->drawstatus;

        ftMotionEventAdvance(ms, FTMotionEventSetAfterImage);
        break;

    case nFTMotionEventKindMakeRumble:
        if (fp->pl_kind != nFTPlayerKindDemo)
        {
            ftParamMakeRumble
            (
                fp, 
                ftMotionEventCast(ms, FTMotionEventMakeRumble)->rumble_id, 
                ftMotionEventCast(ms, FTMotionEventMakeRumble)->length
            );
        }
        ftMotionEventAdvance(ms, FTMotionEventMakeRumble);
        break;

    case nFTMotionEventKindStopRumble:
        if (fp->pl_kind != nFTPlayerKindDemo)
        {
            gmRumbleSetRumbleID(fp->player, ftMotionEventCast(ms, FTMotionEventStopRumble)->rumble_id);
        }
        ftMotionEventAdvance(ms, FTMotionEventStopRumble);
        break;
    }
}

// 0x800E02A8
void ftMainUpdateMotionEventsNoEffect(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    FTMotionScript *ms;
    u32 ev_kind;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->motion_script); i++)
    {
        ms = &fp->motion_script[0][i];

        if (ms->p_script != NULL)
        {
            if (ms->frame_timer != F32_MAX)
            {
                ms->frame_timer -= DObjGetStruct(fighter_gobj)->anim_speed;
            }
        loop:
            if (ms->p_script != NULL)
            {
                if (ms->frame_timer == F32_MAX)
                {
                    if ((DObjGetStruct(fighter_gobj)->anim_speed <= fighter_gobj->anim_frame)) 
                    {
                        continue;
                    }
                    else ms->frame_timer = -fighter_gobj->anim_frame;
                }
                else if (ms->frame_timer > 0.0F) 
                {
                    continue;
                }
                ev_kind = ftMotionEventCast(ms, FTMotionEventMakeEffect1)->opcode;

                if (((ev_kind == nFTMotionEventKindEffect) || (ev_kind == nFTMotionEventKindEffectScaleOffset)) && (fp->is_effect_interrupt))
                {
                    ftMotionEventAdvance(ms, FTMotionEventMakeEffect);
                }
                else ftMainParseMotionEvent(fighter_gobj, fp, ms, ev_kind);

                goto loop;
            }
        }
    }
    if (!(fp->is_effect_interrupt))
    {
        for (i = 0; i < ARRAY_COUNT(fp->motion_script); i++)
        {
            fp->motion_script[1][i] = fp->motion_script[0][i];
        }
    }
}

// 0x800E0478 - Fast forward all fighter-specific events, update only core events (sync timer, async timer, goto, subroutine, etc.)
void ftMainUpdateMotionEventsDefault(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    FTMotionScript *ms;
    u32 ev_kind;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->motion_script); i++)
    {
        ms = &fp->motion_script[0][i];

        if (ms->p_script != NULL)
        {
            if (ms->frame_timer != F32_MAX)
            {
                ms->frame_timer -= DObjGetStruct(fighter_gobj)->anim_speed;
            }
        loop:
            if (ms->p_script != NULL)
            {
                if (ms->frame_timer == F32_MAX)
                {
                    if ((DObjGetStruct(fighter_gobj)->anim_speed <= fighter_gobj->anim_frame)) continue;

                    else ms->frame_timer = -fighter_gobj->anim_frame;
                }
                else if (ms->frame_timer > 0.0F) continue;

                ev_kind = ftMotionEventCast(ms, FTMotionEventDefault)->opcode;

                switch (ev_kind)
                {
                case nFTMotionEventKindClearHitID:
                case nFTMotionEventKindClearHitAll:
                case nFTMotionEventKindSetHitDamage:
                case nFTMotionEventKindSetHitSize:
                case nFTMotionEventKindSetHitSoundLevel:
                case nFTMotionEventKindRefreshHitID:
                case nFTMotionEventKindPlaySFX:
                case nFTMotionEventKindPlayLoopSFXStoreInfo:
                case nFTMotionEventKindStopLoopSFX:
                case nFTMotionEventKindPlayVoiceStoreInfo:
                case nFTMotionEventKindPlayLoopVoiceStoreInfo:
                case nFTMotionEventKindPlaySFXStoreInfo:
                case nFTMotionEventKindPlaySmashVoice:
                case nFTMotionEventKindSetFlag0:
                case nFTMotionEventKindSetFlag1:
                case nFTMotionEventKindSetFlag2:
                case nFTMotionEventKindSetAirJumpAdd:
                case nFTMotionEventKindSetAirJumpMax:
                case nFTMotionEventKindSetColAnim:
                case nFTMotionEventKindResetColAnim:
                case nFTMotionEventKindMakeRumble:
                case nFTMotionEventKindStopRumble:
                case nFTMotionEventKindSetAfterImage:
                    ftMotionEventAdvance(ms, FTMotionEventDefault);
                    break;

                case nFTMotionEventKindEffect:
                case nFTMotionEventKindEffectScaleOffset:
                    ftMotionEventAdvance(ms, FTMotionEventMakeEffect);
                    break;

                case nFTMotionEventKindMakeHit:
                case nFTMotionEventKindMakeHitScaleOffset:
                    ftMotionEventAdvance(ms, FTMotionEventMakeHit);
                    break;

                case nFTMotionEventKindSetHitOffset:
                    ftMotionEventAdvance(ms, FTMotionEventSetHitOffset);
                    break;

                default:
                    ftMainParseMotionEvent(fighter_gobj, fp, ms, ev_kind);
                    break;
                }
                goto loop;
            }
        }
    }
    for (i = 0; i < ARRAY_COUNT(fp->motion_script); i++)
    {
        fp->motion_script[1][i] = fp->motion_script[0][i];
    }
}

// 0x800E0654 - Update only standard events and GFX spawn
void ftMainUpdateMotionEventsDefaultEffect(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    FTMotionScript *ms;
    u32 ev_kind;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(fp->motion_script); i++)
    {
        ms = &fp->motion_script[1][i];

        if (ms->p_script != NULL)
        {
            if (ms->frame_timer != F32_MAX)
            {
                ms->frame_timer -= DObjGetStruct(fighter_gobj)->anim_speed;
            }
        loop:
            if (ms->p_script != NULL)
            {
                if (ms->frame_timer == F32_MAX)
                {
                    if ((DObjGetStruct(fighter_gobj)->anim_speed <= fighter_gobj->anim_frame)) continue;

                    else ms->frame_timer = -fighter_gobj->anim_frame;
                }
                else if (ms->frame_timer > 0.0F) continue;

                ev_kind = ftMotionEventCast(ms, FTMotionEventDefault)->opcode;

                switch (ev_kind)
                {
                case nFTMotionEventKindEnd:
                case nFTMotionEventKindSyncWait:
                case nFTMotionEventKindAsyncWait:
                case nFTMotionEventKindSetDamageThrown:
                case nFTMotionEventKindLoopBegin:
                case nFTMotionEventKindLoopEnd:
                case nFTMotionEventKindSubroutine:
                case nFTMotionEventKindReturn:
                case nFTMotionEventKindGoto:
                case nFTMotionEventKindPauseScript:
                case nFTMotionEventKindEffect:
                case nFTMotionEventKindEffectScaleOffset:
                    ftMainParseMotionEvent(fighter_gobj, fp, ms, ev_kind);
                    break;

                case nFTMotionEventKindMakeHit:
                case nFTMotionEventKindMakeHitScaleOffset:
                    ftMotionEventAdvance(ms, FTMotionEventMakeHit);
                    break;

                case nFTMotionEventKindSetHitOffset:
                case nFTMotionEventKindSetThrow:
                case nFTMotionEventKindSetParallelScript:
                    ftMotionEventAdvance(ms, FTMotionEventDouble);
                    break;

                case nFTMotionEventKindSetHurtPartID:
                    ftMotionEventAdvance(ms, FTMotionEventModifyHurtPartID);
                    break;

                default:
                    ftMotionEventAdvance(ms, FTMotionEventDefault);
                    break;
                }
                goto loop;
            }
        }
    }
}

// 0x800E07D4
void ftMainPlayAnim(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->anim_desc.flags.is_use_transn_joint)
    {
        fp->anim_vel = fp->joints[nFTPartsJointTransN]->translate.vec.f;
    }
    ftParamUpdateAnimKeys(fighter_gobj);
    func_ovl2_800EB648(fp->joints[nFTPartsJointTopN]);
}

// 0x800E0830
void ftMainPlayAnimNoEffect(GObj *fighter_gobj)
{
    ftMainPlayAnim(fighter_gobj);
    ftMainUpdateMotionEventsNoEffect(fighter_gobj);
}

// 0x800E0858
void ftMainPlayAnimDefault(GObj *fighter_gobj)
{
    ftMainPlayAnim(fighter_gobj);
    ftMainUpdateMotionEventsDefault(fighter_gobj);
}

// 0x800E0880
sb32 ftMainUpdateColAnim(GMColAnim *colanim, GObj *fighter_gobj, sb32 is_playing_sfx, sb32 is_playing_effect)
{
    s32 i, j;
    FTStruct *fp;
    GMColScript *cs;
    void *p_script;
    s32 effect_id;
    s32 joint_id;
    u32 flag;
    GMColEventDefault *def;
    Vec3f effect_offset;
    Vec3f effect_scatter;
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
            ev_kind = GMColEventCast(colanim->cs[i].p_script, GMColEventDefault)->opcode;

            switch (ev_kind)
            {
            case nGMColEventKindEnd:
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

            case nGMColEventKindWait:
                colanim->cs[i].color_event_timer = GMColEventCast(colanim->cs[i].p_script, GMColEventDefault)->value, GMColEventAdvance(colanim->cs[i].p_script, GMColEventDefault);
                break;

            case nGMColEventKindGoto:
                GMColEventAdvance(colanim->cs[i].p_script, GMColEventGoto1);

                colanim->cs[i].p_script = GMColEventCast(colanim->cs[i].p_script, GMColEventGoto2)->p_goto;
                break;

            case nGMColEventKindLoopBegin:
                colanim->cs[i].p_subroutine[colanim->cs[i].script_id++] = (void*) ((uintptr_t)colanim->cs[i].p_script + sizeof(GMColEventDefault));
                colanim->cs[i].p_subroutine[colanim->cs[i].script_id++] = GMColEventCast(colanim->cs[i].p_script, GMColEventDefault)->value, GMColEventAdvance(colanim->cs[i].p_script, GMColEventDefault);
                break;

            case nGMColEventKindLoopEnd:
                if (--colanim->cs[i].loop_count[colanim->cs[i].script_id - 2] != 0)
                {
                    colanim->cs[i].p_script = colanim->cs[i].p_subroutine[colanim->cs[i].script_id - 2];
                }
                else GMColEventAdvance(colanim->cs[i].p_script, GMColEventDefault), colanim->cs[i].script_id -= 2;
                break;

            case nGMColEventKindSubroutine:
                GMColEventAdvance(colanim->cs[i].p_script, GMColEventSubroutine1);

                colanim->cs[i].p_subroutine[colanim->cs[i].script_id++] = (void*) ((uintptr_t)colanim->cs[i].p_script + sizeof(GMColEventSubroutine1));

                colanim->cs[i].p_script = GMColEventCast(colanim->cs[i].p_script, GMColEventSubroutine2)->p_subroutine;
                break;

            case nGMColEventKindReturn:
                colanim->cs[i].p_script = colanim->cs[i].p_subroutine[--colanim->cs[i].script_id];
                break;

            case nGMColEventKindSetParallelScript:
                GMColEventAdvance(colanim->cs[i].p_script, GMColEventParallel1);

                if (colanim->cs[1].p_script == NULL)
                {
                    colanim->cs[1].p_script = GMColEventCast(colanim->cs[i].p_script, GMColEventParallel2)->p_script;
                    colanim->cs[1].color_event_timer = 0;
                    colanim->cs[1].script_id = 0;
                }
                GMColEventAdvance(colanim->cs[i].p_script, GMColEventParallel2);
                break;

            case nGMColEventKindToggleColorOff:
                colanim->is_use_maincolor = colanim->is_use_blendcolor = colanim->skeleton_id = 0;

                GMColEventAdvance(colanim->cs[i].p_script, GMColEventDefault);
                break;

            case nGMColEventKindSetColor1:
                colanim->is_use_maincolor = TRUE;

                GMColEventAdvance(colanim->cs[i].p_script, GMColEventSetRGBA1);

                colanim->maincolor.r = GMColEventCast(colanim->cs[i].p_script, GMColEventSetRGBA2)->r;
                colanim->maincolor.g = GMColEventCast(colanim->cs[i].p_script, GMColEventSetRGBA2)->g;
                colanim->maincolor.b = GMColEventCast(colanim->cs[i].p_script, GMColEventSetRGBA2)->b;
                colanim->maincolor.a = GMColEventCast(colanim->cs[i].p_script, GMColEventSetRGBA2)->a;

                colanim->maincolor.ir = colanim->maincolor.ig = colanim->maincolor.ib = colanim->maincolor.ia = 0;

                GMColEventAdvance(colanim->cs[i].p_script, GMColEventSetRGBA2);
                break;

            case nGMColEventKindSetColor2:
                colanim->is_use_blendcolor = TRUE;

                GMColEventAdvance(colanim->cs[i].p_script, GMColEventSetRGBA1);

                colanim->blendcolor.r = GMColEventCast(colanim->cs[i].p_script, GMColEventSetRGBA2)->r;
                colanim->blendcolor.g = GMColEventCast(colanim->cs[i].p_script, GMColEventSetRGBA2)->g;
                colanim->blendcolor.b = GMColEventCast(colanim->cs[i].p_script, GMColEventSetRGBA2)->b;
                colanim->blendcolor.a = GMColEventCast(colanim->cs[i].p_script, GMColEventSetRGBA2)->a;

                colanim->blendcolor.ir = colanim->blendcolor.ig = colanim->blendcolor.ib = colanim->blendcolor.ia = 0;

                GMColEventAdvance(colanim->cs[i].p_script, GMColEventSetRGBA2);
                break;

            case nGMColEventKindBlendColor1:
                blend_frames = GMColEventCast(colanim->cs[i].p_script, GMColEventBlendRGBA1)->blend_frames;

                GMColEventAdvance(colanim->cs[i].p_script, GMColEventBlendRGBA1);

                colanim->maincolor.ir = (s32)(GMColEventCast(colanim->cs[i].p_script, GMColEventBlendRGBA2)->r - colanim->maincolor.r) / blend_frames;
                colanim->maincolor.ig = (s32)(GMColEventCast(colanim->cs[i].p_script, GMColEventBlendRGBA2)->g - colanim->maincolor.g) / blend_frames;
                colanim->maincolor.ib = (s32)(GMColEventCast(colanim->cs[i].p_script, GMColEventBlendRGBA2)->b - colanim->maincolor.b) / blend_frames;
                colanim->maincolor.ia = (s32)(GMColEventCast(colanim->cs[i].p_script, GMColEventBlendRGBA2)->a - colanim->maincolor.a) / blend_frames;

                GMColEventAdvance(colanim->cs[i].p_script, GMColEventBlendRGBA2);
                break;

            case nGMColEventKindBlendColor2:
                blend_frames = GMColEventCast(colanim->cs[i].p_script, GMColEventBlendRGBA1)->blend_frames;

                GMColEventAdvance(colanim->cs[i].p_script, GMColEventBlendRGBA1);

                colanim->blendcolor.ir = (s32)(GMColEventCast(colanim->cs[i].p_script, GMColEventBlendRGBA2)->r - colanim->blendcolor.r) / blend_frames;
                colanim->blendcolor.ig = (s32)(GMColEventCast(colanim->cs[i].p_script, GMColEventBlendRGBA2)->g - colanim->blendcolor.g) / blend_frames;
                colanim->blendcolor.ib = (s32)(GMColEventCast(colanim->cs[i].p_script, GMColEventBlendRGBA2)->b - colanim->blendcolor.b) / blend_frames;
                colanim->blendcolor.ia = (s32)(GMColEventCast(colanim->cs[i].p_script, GMColEventBlendRGBA2)->a - colanim->blendcolor.a) / blend_frames;

                GMColEventAdvance(colanim->cs[i].p_script, GMColEventBlendRGBA2);
                break;

            case nGMColEventKindEffect:
            case nGMColEventKindEffectScaleOffset:
                if (is_playing_effect == FALSE)
                {
                    fp = ftGetStruct(fighter_gobj);

                    joint_id = ftParamGetJointID(fp, GMColEventCast(colanim->cs[i].p_script, GMColEventMakeEffect1)->joint_id);
                    effect_id = GMColEventCast(colanim->cs[i].p_script, GMColEventMakeEffect1)->effect_id;
                    flag = GMColEventCast(colanim->cs[i].p_script, GMColEventMakeEffect1)->flag;

                    GMColEventAdvance(colanim->cs[i].p_script, GMColEventMakeEffect1);

                    effect_offset.x = GMColEventCast(colanim->cs[i].p_script, GMColEventMakeEffect2)->off_x;
                    effect_offset.y = GMColEventCast(colanim->cs[i].p_script, GMColEventMakeEffect2)->off_y;

                    GMColEventAdvance(colanim->cs[i].p_script, GMColEventMakeEffect2);

                    effect_offset.z = GMColEventCast(colanim->cs[i].p_script, GMColEventMakeEffect3)->off_z;
                    effect_scatter.x = GMColEventCast(colanim->cs[i].p_script, GMColEventMakeEffect3)->rng_x;

                    GMColEventAdvance(colanim->cs[i].p_script, GMColEventMakeEffect3);

                    effect_scatter.y = GMColEventCast(colanim->cs[i].p_script, GMColEventMakeEffect4)->rng_y;
                    effect_scatter.z = GMColEventCast(colanim->cs[i].p_script, GMColEventMakeEffect4)->rng_z;

                    GMColEventAdvance(colanim->cs[i].p_script, GMColEventMakeEffect4);

                    ftParamMakeEffect(fighter_gobj, effect_id, joint_id, &effect_offset, &effect_scatter, fp->lr, (ev_kind == nGMColEventKindEffectScaleOffset) ? TRUE : FALSE, flag);
                }
                else GMColEventAdvance(colanim->cs[i].p_script, GMColEventMakeEffect);
                break;

            case nGMColEventKindSetLight:
                colanim->is_use_light = TRUE;

                colanim->light_angle_x = GMColEventCast(colanim->cs[i].p_script, GMColEventSetLight)->light1;
                colanim->light_angle_y = GMColEventCast(colanim->cs[i].p_script, GMColEventSetLight)->light2;

                GMColEventAdvance(colanim->cs[i].p_script, GMColEventSetLight);
                break;

            case nGMColEventKindToggleLightOff:
                colanim->is_use_light = FALSE;

                GMColEventAdvance(colanim->cs[i].p_script, GMColEventDefault);
                break;

            case nGMColEventKindPlaySFX:
                if (is_playing_sfx == FALSE)
                {
                    func_800269C0_275C0(GMColEventCastAdvance(colanim->cs[i].p_script, GMColEventDefault)->value);
                }
                else GMColEventAdvance(colanim->cs[i].p_script, GMColEventDefault);
                break;

            case nGMColEventKindSetSkeletonID:
                colanim->skeleton_id = GMColEventCastAdvance(colanim->cs[i].p_script, GMColEventDefault)->value;
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
    if (colanim->length != 0)
    {
        colanim->length--;

        if (colanim->length == 0)
        {
            return TRUE;
        }
    }
    return FALSE;
}

// 0x800E11C8
void ftMainRunUpdateColAnim(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    while (ftMainUpdateColAnim(&fp->colanim, fighter_gobj, fp->is_playing_sfx, fp->is_playing_effect) != FALSE)
    {
        ftParamResetStatUpdateColAnim(fighter_gobj);
    }
}

// 0x800E1260
void ftMainProcInterruptMain(GObj *fighter_gobj)
{
    FTStruct *this_fp = ftGetStruct(fighter_gobj);
    FTStruct *other_fp;
    FTAttributes *this_attributes;
    FTAttributes *other_attributes;
    FTPlayerInput *pl;
    FTComputerInput *cp;
    gsController *controller;
    GObj *other_gobj;
    f32 jostle_dist_x;
    f32 dist_z;
    sb32 is_check_self;
    sb32 is_jostle;
    u16 button_tap_mask;
    u16 button_hold;
    u16 button_hold_com;
    f32 this_jostle;

    if (!(this_fp->is_disable_control))
    {
        this_fp->status_total_tics++;
    }
    if (!(this_fp->is_disable_control))
    {
        this_fp->input.pl.stick_prev.x = this_fp->input.pl.stick_range.x;
        this_fp->input.pl.stick_prev.y = this_fp->input.pl.stick_range.y;

        switch (this_fp->pl_kind)
        {
        default:
            pl = &this_fp->input.pl;
            break;

        case nFTPlayerKindMan:
            controller = this_fp->input.controller;
            pl = &this_fp->input.pl;

            button_hold = controller->button_hold;

            if (button_hold & R_TRIG)
            {
                button_hold |= (A_BUTTON | Z_TRIG);
            }

            pl->stick_range.x = controller->stick_range.x;
            pl->stick_range.y = controller->stick_range.y;

            button_tap_mask = (button_hold ^ pl->button_hold) & button_hold;

            pl->button_tap = (this_fp->hitlag_tics != 0) ? pl->button_tap | button_tap_mask : button_tap_mask;

            button_tap_mask = (button_hold ^ pl->button_hold) & pl->button_hold;

            pl->button_tap_prev = (this_fp->hitlag_tics != 0) ? pl->button_tap_prev | button_tap_mask : button_tap_mask;

            pl->button_hold = button_hold;

            break;

        case nFTPlayerKindCom:
            FTComputerProcessAll(fighter_gobj);
            goto next;

        case nFTPlayerKindKey:
        case nFTPlayerKindGameKey:
            FTKeyProcessInputSequence(fighter_gobj);

        next:
            cp = &this_fp->input.cp;
            pl = &this_fp->input.pl;

            button_hold_com = this_fp->input.cp.button_inputs;

            if (button_hold_com & R_TRIG)
            {
                button_hold_com |= (A_BUTTON | Z_TRIG);
            }

            pl->stick_range.x = cp->stick_range.x;
            pl->stick_range.y = cp->stick_range.y;

            button_tap_mask = (button_hold_com ^ pl->button_hold) & button_hold_com;

            pl->button_tap = (this_fp->hitlag_tics != 0) ? pl->button_tap | button_tap_mask : button_tap_mask;

            button_tap_mask = (button_hold_com ^ pl->button_hold) & pl->button_hold;

            pl->button_tap_prev = (this_fp->hitlag_tics != 0) ? pl->button_tap_prev | button_tap_mask : button_tap_mask;

            pl->button_hold = button_hold_com;

            break;
        }
        if (pl->stick_range.x > I_CONTROLLER_RANGE_MAX)
        {
            pl->stick_range.x = I_CONTROLLER_RANGE_MAX;
        }
        if (pl->stick_range.x < -I_CONTROLLER_RANGE_MAX)
        {
            pl->stick_range.x = -I_CONTROLLER_RANGE_MAX;
        }
        if (pl->stick_range.y > I_CONTROLLER_RANGE_MAX)
        {
            pl->stick_range.y = I_CONTROLLER_RANGE_MAX;
        }
        if (pl->stick_range.y < -I_CONTROLLER_RANGE_MAX)
        {
            pl->stick_range.y = -I_CONTROLLER_RANGE_MAX;
        }
        if (gSaveData.error_flags & LBBACKUP_ERROR_HALFSTICKRANGE)
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
    if (this_fp->tics_since_last_z < FTINPUT_ZTRIGLAST_FRAMES_MAX)
    {
        this_fp->tics_since_last_z++;
    }
    if (this_fp->input.pl.button_tap & this_fp->input.button_mask_z)
    {
        this_fp->tics_since_last_z = 0;
    }
    if (this_fp->hitlag_tics != 0)
    {
        this_fp->hitlag_tics--;

        if (this_fp->hitlag_tics == 0)
        {
            this_fp->x192_flag_b6 = FALSE;

            if (this_fp->proc_lagend != NULL)
            {
                this_fp->proc_lagend(fighter_gobj);
            }
        }
    }
    this_fp->is_effect_interrupt = TRUE;

    if (this_fp->hitlag_tics == 0)
    {
        ftMainPlayAnimNoEffect(fighter_gobj);
    }
    ftMainRunUpdateColAnim(fighter_gobj);

    if (this_fp->intangible_tics != 0)
    {
        this_fp->intangible_tics--;

        if (this_fp->intangible_tics == 0)
        {
            this_fp->special_hitstatus = (this_fp->invincible_tics != FALSE) ? nGMHitStatusInvincible : nGMHitStatusNormal;

            if (this_fp->colanim.colanim_id == 0xA)
            {
                ftParamResetStatUpdateColAnim(fighter_gobj);
            }
        }
    }
    if (this_fp->invincible_tics != 0)
    {
        this_fp->invincible_tics--;

        if ((this_fp->invincible_tics == 0) && (this_fp->intangible_tics == 0))
        {
            this_fp->special_hitstatus = nGMHitStatusNormal;

            if (this_fp->colanim.colanim_id == 0xA)
            {
                ftParamResetStatUpdateColAnim(fighter_gobj);
            }
        }
    }
    if (this_fp->star_invincible_tics != 0)
    {
        this_fp->star_invincible_tics--;

        if (this_fp->star_invincible_tics == 0)
        {
            this_fp->star_hitstatus = nGMHitStatusNormal;

            if (this_fp->colanim.colanim_id == 0x4A)
            {
                ftParamResetStatUpdateColAnim(fighter_gobj);
            }
        }
        else if (this_fp->star_invincible_tics == ITSTAR_WARN_BEGIN_FRAME)
        {
            ftParamTryUpdateItemMusic();
        }
    }
    if (this_fp->damage_heal != 0)
    {
        this_fp->damage_heal--;

        if (this_fp->percent_damage != 0)
        {
            this_fp->percent_damage--;

            func_800269C0_275C0(nSYAudioFGMPlayerHeal);

            gBattleState->players[this_fp->player].stock_damage_all = this_fp->percent_damage;
        }
        if (this_fp->percent_damage == 0)
        {
            this_fp->damage_heal = 0;
        }
        if ((this_fp->damage_heal == 0) && (this_fp->colanim.colanim_id == 0x9))
        {
            ftParamResetStatUpdateColAnim(fighter_gobj);
        }
    }
    if ((this_fp->item_hold != NULL) && (this_fp->status_id != nFTCommonStatusLightGet) && (itGetStruct(this_fp->item_hold)->it_kind == nITKindHammer))
    {
        ftHammerUpdateStats(fighter_gobj);
    }
    if (this_fp->shuffle_tics != 0)
    {
        this_fp->shuffle_tics--;

        this_fp->shuffle_frame_index++;

        if (this_fp->shuffle_frame_index == this_fp->shuffle_index_max)
        {
            this_fp->shuffle_frame_index = 0;
        }
    }
    if (this_fp->proc_effect != NULL)
    {
        this_fp->proc_effect(fighter_gobj);
    }
    if (this_fp->hitlag_tics == 0)
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
            gBattleState->players[this_fp->player].combo_damage_foe = 0;
            gBattleState->players[this_fp->player].combo_count_foe = 0;
        }
        is_jostle = FALSE;

        this_fp->physics.vel_jostle_x = this_fp->physics.vel_jostle_z = 0.0F;

        if ((this_fp->ga == nMPKineticsGround) && !(this_fp->is_ignore_jostle))
        {
            other_gobj = gGCCommonLinks[nGCCommonLinkIDFighter];

            is_check_self = FALSE;

            while (other_gobj != NULL)
            {
                other_fp = ftGetStruct(other_gobj);

                if ((fighter_gobj != other_gobj) && (other_fp->capture_gobj == NULL))
                {
                    if ((other_fp->ga == nMPKineticsGround) && (this_fp->coll_data.ground_line_id == other_fp->coll_data.ground_line_id))
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
                                this_fp->physics.vel_jostle_x += (6.75F * ((is_check_self != FALSE) ? -1 : 1));
                            }
                            else this_fp->physics.vel_jostle_x += (6.75F * ((jostle_dist_x < 0.0F) ? -1 : 1));

                            dist_z = DObjGetStruct(fighter_gobj)->translate.vec.f.z - DObjGetStruct(other_gobj)->translate.vec.f.z;

                            if (dist_z == 0.0F)
                            {
                                if (jostle_dist_x == 0.0F)
                                {
                                    this_fp->physics.vel_jostle_z += (3.0F * ((is_check_self != FALSE) ? -1 : 1));
                                }
                                else this_fp->physics.vel_jostle_z += (3.0F * ((jostle_dist_x < 0.0F) ? 1 : -1));
                            }
                            else this_fp->physics.vel_jostle_z += (3.0F * ((dist_z < 0.0F) ? -1 : 1));
                        }
                    }
                }
                else is_check_self = TRUE;

                other_gobj = other_gobj->link_next;
            }
            if ((is_jostle == FALSE) && (DObjGetStruct(fighter_gobj)->translate.vec.f.z != 0.0F))
            {
                this_fp->physics.vel_jostle_z = ((DObjGetStruct(fighter_gobj)->translate.vec.f.z < 0.0F) ? nGMFacingR : nGMFacingL) * 3.0F;
            }
        }
    }
    this_fp->coll_data.vel_push.x = this_fp->coll_data.vel_push.y = this_fp->coll_data.vel_push.z = 0.0F;
}

// 0x800E1CF0
void ftMainClearGroundElementsAll(void)
{
    s32 i;

    sFTMainGroundObstaclesNum = sFTMainGroundHazardsNum = 0;

    for (i = 0; i < ARRAY_COUNT(sFTMainGroundObstacles); i++)
    {
        sFTMainGroundObstacles[i].gobj = NULL;
    }
    for (i = 0; i < ARRAY_COUNT(sFTMainGroundHazards); i++)
    {
        sFTMainGroundHazards[i].gobj = NULL;
    }
}

// 0x800E1D48
sb32 ftMainCheckAddGroundObstacle(GObj *gobj, sb32(*proc_update)(GObj*, GObj*, s32*))
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(sFTMainGroundObstacles); i++)
    {
        if (sFTMainGroundObstacles[i].gobj == NULL)
        {
            sFTMainGroundObstacles[i].gobj = gobj;
            sFTMainGroundObstacles[i].proc_update = proc_update;
            sFTMainGroundObstaclesNum++;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800E1D9C
void ftMainClearGroundObstacle(GObj *gobj)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(sFTMainGroundObstacles); i++)
    {
        if (sFTMainGroundObstacles[i].gobj == gobj)
        {
            sFTMainGroundObstacles[i].gobj = NULL;
            sFTMainGroundObstaclesNum--;

            break;
        }
    }
}

// 0x800E1DE8
sb32 ftMainCheckAddGroundHazard(GObj *gobj, sb32(*proc_update)(GObj*, GObj*, GRHitCollision**, s32*))
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(sFTMainGroundHazards); i++)
    {
        if (sFTMainGroundHazards[i].gobj == NULL)
        {
            sFTMainGroundHazards[i].gobj = gobj;
            sFTMainGroundHazards[i].proc_update = proc_update;

            sFTMainGroundHazardsNum++;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800E1E3C - Remove map environment object by GObj pointer match
void ftMainClearHazard(GObj *gobj)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(sFTMainGroundHazards); i++)
    {
        if (sFTMainGroundHazards[i].gobj == gobj)
        {
            sFTMainGroundHazards[i].gobj = NULL;
            sFTMainGroundHazardsNum--;

            break;
        }
    }
}

// 0x800E1E88
void ftMainSetHitHazard(GObj *gobj, GObj *fighter_gobj, FTStruct *fp, s32 kind)
{
    switch (kind)
    {
    case nGMHitEnvironmentTwister:
        ftCommonTwisterSetStatus(fighter_gobj, gobj);
        break;

    case nGMHitEnvironmentTaruCann:
        ftCommonTaruCannSetStatus(fighter_gobj, gobj);
        break;
    }
}

// 0x800E1EE8
void ftMainSearchHitHazard(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    GRObstacle *gh = &sFTMainGroundObstacles[0];

    if (!fp->is_nullstatus)
    {
        s32 i;

        if (!fp->hitlag_tics)
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
        for (i = 0; i < sFTMainGroundObstaclesNum; i++, gh++)
        {
            if (gh->gobj != NULL)
            {
                s32 kind;

                if (gh->proc_update(gh->gobj, fighter_gobj, &kind) != FALSE)
                {
                    ftMainSetHitHazard(gh->gobj, fighter_gobj, fp, kind);
                }
            }
        }
    }
}

// 0x800E1FE0
void ftMainUpdateVelDamageGround(FTStruct *fp, f32 move)
{
    if (fp->physics.vel_damage_ground < 0.0F)
    {
        fp->physics.vel_damage_ground += move;

        if (fp->physics.vel_damage_ground > 0.0F)
        {
            fp->physics.vel_damage_ground = 0.0F;
        }
    }
    else
    {
        fp->physics.vel_damage_ground -= move;

        if (fp->physics.vel_damage_ground < 0.0F)
        {
            fp->physics.vel_damage_ground = 0.0F;
        }
    }
}

// 0x800E2048
void ftMainProcPhysicsMap(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *topn_translate = &fp->joints[nFTPartsJointTopN]->translate.vec.f;
    Vec3f *coll_translate = &fp->coll_data.pos_current;
    Vec3f *ground_angle = &fp->coll_data.ground_angle;
    Vec3f *vel_damage_air;
    s32 unused[2];
    f32 size_mul;
    f32 tan;
    f32 damage_angle;
    Vec2f vel_damage_new;
    s32 i;

    *coll_translate = *topn_translate;

    if (fp->hitlag_tics == 0)
    {
        if (fp->cliffcatch_wait != 0)
        {
            fp->cliffcatch_wait--;
        }
        if (fp->proc_physics != NULL)
        {
            fp->proc_physics(fighter_gobj);
        }
        vel_damage_air = &fp->physics.vel_damage_air;

        if ((fp->physics.vel_damage_air.x != 0.0F) || (vel_damage_air->y != 0.0F))
        {
            if (fp->ga == nMPKineticsAir)
            {
                damage_angle = atan2f(vel_damage_air->y, vel_damage_air->x);
                vel_damage_new.y = vel_damage_air->x;
                vel_damage_new.x = vel_damage_air->y;

                vel_damage_air->x -= (1.7F * __cosf(damage_angle));
                vel_damage_air->y -= (1.7F * __sinf(damage_angle));

                if (((vel_damage_air->x * vel_damage_new.y) < 0.0F) || ((vel_damage_air->y * vel_damage_new.x) < 0.0F))
                {
                    vel_damage_air->x = vel_damage_air->y = 0.0F;
                }
                fp->physics.vel_damage_ground = 0.0F;
            }
            else
            {
                if (fp->physics.vel_damage_ground == 0.0F)
                {
                    fp->physics.vel_damage_ground = fp->physics.vel_damage_air.x;
                }
                ftMainUpdateVelDamageGround(fp, dMPCollisionMaterialFrictions[fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK] * fp->attributes->traction * 0.25F);

                vel_damage_air->x = (ground_angle->y * fp->physics.vel_damage_ground);
                vel_damage_air->y = (-ground_angle->x * fp->physics.vel_damage_ground);
            }
        }
        syVectorAdd3D(topn_translate, &fp->physics.vel_air);

        topn_translate->x += vel_damage_air->x;
        topn_translate->y += vel_damage_air->y;
    }
    if (fp->proc_lagupdate != NULL)
    {
        fp->proc_lagupdate(fighter_gobj);
    }
    syVectorDiff3D(&fp->coll_data.pos_correct, topn_translate, coll_translate);

    if ((fp->ga == nMPKineticsGround) && (fp->coll_data.ground_line_id != -1) && (fp->coll_data.ground_line_id != -2) && (mpCollisionCheckExistLineID(fp->coll_data.ground_line_id) != FALSE))
    {
        mpCollisionGetSpeedLineID(fp->coll_data.ground_line_id, &fp->coll_data.pos_speed);
        syVectorAdd3D(topn_translate, &fp->coll_data.pos_speed);
    }
    else fp->coll_data.pos_speed.x = fp->coll_data.pos_speed.y = fp->coll_data.pos_speed.z = 0.0F;

    ftCommonDeadCheckInterruptCommon(fighter_gobj);

    if ((fp->coll_data.pos_current.y >= gMPCollisionGroundData->alt_warning) && (topn_translate->y < gMPCollisionGroundData->alt_warning) && (fp->ft_kind != nFTKindBoss))
    {
        func_800269C0_275C0(nSYAudioFGMAltitudeWarn);
    }
    if (fp->publicity_knockback != 0)
    {
        if ((fp->joints[nFTPartsJointTopN]->translate.vec.f.x > (gMPCollisionEdgeBounds.d2.left + 450.0F)) && (fp->joints[nFTPartsJointTopN]->translate.vec.f.x < (gMPCollisionEdgeBounds.d2.right - 450.0F)))
        {
            fp->publicity_knockback = 0.0F;
        }
    }
    if (fp->proc_map != NULL)
    {
        fp->coll_data.coll_mask_prev = fp->coll_data.coll_mask_current;
        fp->coll_data.coll_mask_current = 0;
        fp->coll_data.is_coll_end = FALSE;
        fp->coll_data.coll_mask_stat = 0;
        fp->coll_data.coll_mask_unk = 0;

        fp->proc_map(fighter_gobj);

        if (fp->ft_kind == nFTKindKirby)
        {
            ftParamKirbyTryMakeMapStarEffect(fighter_gobj);
        }
    }
    if (fp->proc_slope != NULL)
    {
        fp->proc_slope(fighter_gobj);
    }
    func_ovl2_800EB528(fp->joints[nFTPartsJointTopN]);

    if (fp->hitlag_tics == 0)
    {
        ftMainUpdateMotionEventsDefaultEffect(fighter_gobj);
    }
    if (fp->hitlag_tics == 0)
    {
        if (fp->proc_accessory != NULL)
        {
            fp->proc_accessory(fighter_gobj);
        }
    }
    fp->is_effect_interrupt = FALSE;

    for (i = 0; i < ARRAY_COUNT(fp->hit_colls); i++)
    {
        FTHitColl *ft_hitcoll = &fp->hit_colls[i];

        switch (ft_hitcoll->update_state)
        {
        case nGMHitUpdateDisable:
            break;

        case nGMHitUpdateNew:
            ft_hitcoll->pos = ft_hitcoll->offset;

            if (ft_hitcoll->is_scale_pos)
            {
                size_mul = 1.0F / fp->attributes->size_mul;

                ft_hitcoll->pos.x *= size_mul;
                ft_hitcoll->pos.y *= size_mul;
                ft_hitcoll->pos.z *= size_mul;
            }
            gmCollisionGetFighterPartsWorldPosition(ft_hitcoll->joint, &ft_hitcoll->pos);

            ft_hitcoll->update_state = nGMHitUpdateTransfer;

            ft_hitcoll->hit_matrix.unk_fthitmtx_0x0 = FALSE;
            ft_hitcoll->hit_matrix.unk_fthitmtx_0x44 = 0.0F;
            break;

        case nGMHitUpdateTransfer:
            ft_hitcoll->update_state = nGMHitUpdateInterpolate;

            /* fallthrough */

        case nGMHitUpdateInterpolate:
            ft_hitcoll->pos_prev = ft_hitcoll->pos;
            ft_hitcoll->pos = ft_hitcoll->offset;

            if (ft_hitcoll->is_scale_pos)
            {
                size_mul = 1.0F / fp->attributes->size_mul;

                ft_hitcoll->pos.x *= size_mul;
                ft_hitcoll->pos.y *= size_mul;
                ft_hitcoll->pos.z *= size_mul;
            }
            gmCollisionGetFighterPartsWorldPosition(ft_hitcoll->joint, &ft_hitcoll->pos);

            ft_hitcoll->hit_matrix.unk_fthitmtx_0x0 = FALSE;
            ft_hitcoll->hit_matrix.unk_fthitmtx_0x44 = 0.0F;

            break;
        }
    }
}

// 0x800E2604
void ftMainProcPhysicsMapDefault(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if (((fp->capture_gobj == NULL) || (fp->x192_flag_b3)) && ((fp->catch_gobj == NULL) || !(fp->x192_flag_b3)))
    {
        ftMainProcPhysicsMap(fighter_gobj);
    }
}

// 0x800E2660
void ftMainProcPhysicsMapCapture(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if (((fp->capture_gobj != NULL) && !(fp->x192_flag_b3)) || ((fp->catch_gobj != NULL) && (fp->x192_flag_b3)))
    {
        ftMainProcPhysicsMap(fighter_gobj);
    }
}

// 0x800E26BC
void ftMainSetHitInteractStats(FTStruct *fp, u32 attack_group_id, GObj *victim_gobj, s32 hitbox_type, u32 victim_group_id, sb32 ignore_damage_or_hit)
{
    s32 i, j;

    for (i = 0; i < ARRAY_COUNT(fp->hit_colls); i++)
    {
        if (i == ARRAY_COUNT(fp->hit_colls)); // WAT

        if ((fp->hit_colls[i].update_state != nGMHitUpdateDisable) && (attack_group_id == fp->hit_colls[i].group_id))
        {
            for (j = 0; j < ARRAY_COUNT(fp->hit_colls[i].hit_records); j++)
            {
                if (victim_gobj == fp->hit_colls[i].hit_records[j].victim_gobj)
                {
                    switch (hitbox_type)
                    {
                    case nGMHitTypeDamage:
                        fp->hit_colls[i].hit_records[j].victim_flags.is_interact_hurt = TRUE;
                        break;

                    case nGMHITTypeShield:
                        fp->hit_colls[i].hit_records[j].victim_flags.is_interact_shield = TRUE;
                        break;

                    case nGMHITTypeHit:
                        fp->hit_colls[i].hit_records[j].victim_flags.group_id = victim_group_id;
                        break;

                    default:
                        break;
                    }
                    break;
                }
            }
            if (j == ARRAY_COUNT(fp->hit_colls[i].hit_records))
            {
                for (j = 0; j < ARRAY_COUNT(fp->hit_colls[i].hit_records); j++)
                {
                    if (fp->hit_colls[i].hit_records[j].victim_gobj == NULL) break;
                }
                if (j == ARRAY_COUNT(fp->hit_colls[i].hit_records)) j = 0;

                fp->hit_colls[i].hit_records[j].victim_gobj = victim_gobj;

                switch (hitbox_type)
                {
                case nGMHitTypeDamage:
                    fp->hit_colls[i].hit_records[j].victim_flags.is_interact_hurt = TRUE;
                    break;

                case nGMHITTypeShield:
                    fp->hit_colls[i].hit_records[j].victim_flags.is_interact_shield = TRUE;
                    break;

                case nGMHITTypeHit:
                    fp->hit_colls[i].hit_records[j].victim_flags.group_id = victim_group_id;
                    break;

                default:
                    break;
                }
            }
            if (ignore_damage_or_hit == 0)
            {
                gFTMainIsHurtDetect[i] = FALSE;
            }
            else gFTMainIsHitDetect[i] = FALSE;
        }
    }
}

// 0x800E287C
void ftMainSetHitRebound(GObj *attacker_gobj, FTStruct *fp, FTHitColl *ft_hitcoll, GObj *victim_gobj)
{
    if (fp->attack_shield_push < ft_hitcoll->damage)
    {
        fp->attack_shield_push = ft_hitcoll->damage;

        if ((ft_hitcoll->can_rebound) && (fp->ga == nMPKineticsGround))
        {
            fp->attack_rebound = (fp->attack_shield_push * 1.62F) + 4.0F;

            fp->attack_lr = (DObjGetStruct(attacker_gobj)->translate.vec.f.x < DObjGetStruct(victim_gobj)->translate.vec.f.x) ? nGMFacingR : nGMFacingL;
        }
    }
}

// 0x800E2910
void ftMainUpdateAttackStatFighter(FTStruct *other_fp, FTHitColl *other_hit, FTStruct *this_fp, FTHitColl *this_hit, GObj *other_gobj, GObj *this_gobj)
{
    Vec3f impact_pos;

    gmCollisionGetFighterHitFighterHitPosition(&impact_pos, this_hit, other_hit);

    if ((this_hit->damage - 10) < other_hit->damage)
    {
        ftMainSetHitInteractStats(this_fp, this_hit->group_id, other_gobj, nGMHITTypeHit, other_hit->group_id, 1);
        ftMainSetHitRebound(this_gobj, this_fp, this_hit, other_gobj);
        efManagerSetOffMakeEffect(&impact_pos, this_hit->damage);

        if ((gBattleState->game_type == nSCBattleGameType1PGame) && (this_hit->damage >= 20) && (other_fp->player == gSceneData.spgame_player))
        {
            gSC1PGameBonusGiantImpact = TRUE;
        }
    }
    if ((other_hit->damage - 10) < this_hit->damage)
    {
        ftMainSetHitInteractStats(other_fp, other_hit->group_id, this_gobj, nGMHITTypeHit, this_hit->group_id, 0);
        ftMainSetHitRebound(other_gobj, other_fp, other_hit, this_gobj);
        efManagerSetOffMakeEffect(&impact_pos, other_hit->damage);

        if ((gBattleState->game_type == nSCBattleGameType1PGame) && (other_hit->damage >= 20) && (this_fp->player == gSceneData.spgame_player))
        {
            gSC1PGameBonusGiantImpact = TRUE;
        }
    }
}

// 0x800E2A90
void ftMainUpdateShieldStatFighter(FTStruct *attacker_fp, FTHitColl *attacker_hit, FTStruct *victim_fp, GObj *attacker_gobj, GObj *victim_gobj)
{
    Vec3f impact_pos;

    ftMainSetHitInteractStats(attacker_fp, attacker_hit->group_id, victim_gobj, nGMHITTypeShield, 0, 0);

    if (attacker_fp->attack_shield_push < attacker_hit->damage)
    {
        attacker_fp->attack_shield_push = attacker_hit->damage;
    }
    victim_fp->shield_damage_total += (attacker_hit->damage + attacker_hit->shield_damage);

    if (victim_fp->shield_damage < attacker_hit->damage)
    {
        victim_fp->shield_damage = attacker_hit->damage;

        victim_fp->shield_lr = (DObjGetStruct(victim_gobj)->translate.vec.f.x < DObjGetStruct(attacker_gobj)->translate.vec.f.x) ? nGMFacingR : nGMFacingL;

        victim_fp->shield_player = attacker_fp->player;
    }
    gmCollisionGetFighterHitShieldPosition(&impact_pos, attacker_hit, victim_gobj, victim_fp->joints[nFTPartsJointYRotN]);
    efManagerSetOffMakeEffect(&impact_pos, attacker_hit->damage);
}

// 0x800E2B88
void ftMainUpdateCatchStatFighter(FTStruct *attacker_fp, FTHitColl *attacker_hit, FTStruct *victim_fp, GObj *attacker_gobj, GObj *victim_gobj)
{
    f32 dist;

    ftMainSetHitInteractStats(attacker_fp, attacker_hit->group_id, victim_gobj, nGMHitTypeDamage, 0, 1);

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
void ftMainPlayHitSFX(FTStruct *fp, FTHitColl *ft_hitcoll)
{
    if ((fp->p_sfx != NULL) && (fp->p_sfx->sfx_id != 0) && (fp->p_sfx->sfx_id == fp->sfx_id))
    {
        func_80026738_27338(fp->p_sfx);
    }
    fp->p_sfx = NULL, fp->sfx_id = 0;

    lbCommonMakePositionFGM(dFTMainHitCollisionFGMs[ft_hitcoll->sfx_kind][ft_hitcoll->sfx_level], fp->joints[nFTPartsJointTopN]->translate.vec.f.x);
}

// 0x800E2CC0
sb32 ftMainCheckGetUpdateDamage(FTStruct *fp, s32 *damage)
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
void ftMainUpdateDamageStatFighter(FTStruct *attacker_fp, FTHitColl *attacker_hit, FTStruct *victim_fp, FTDamageColl *victim_hurt, GObj *attacker_gobj, GObj *victim_gobj)
{
    s32 damage;
    s32 attacker_player;
    s32 attacker_player_number;
    s32 unused;
    Vec3f impact_pos;

    ftMainSetHitInteractStats(attacker_fp, attacker_hit->group_id, victim_gobj, nGMHitTypeDamage, 0, FALSE);

    damage = ftParamGetCapturedDamage(victim_fp, attacker_hit->damage);

    if (attacker_fp->attack_damage < damage)
    {
        attacker_fp->attack_damage = damage;
    }
    if
    (
        (victim_fp->special_hitstatus == nGMHitStatusNormal) &&
        (victim_fp->star_hitstatus == nGMHitStatusNormal)    &&
        (victim_fp->hitstatus == nGMHitStatusNormal)         &&
        (victim_hurt->hitstatus == nGMHitStatusNormal)
    )
    {
        if (ftMainCheckGetUpdateDamage(victim_fp, &damage) != FALSE)
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
            if (sFTMainHitlogID < ARRAY_COUNT(sFTMainHitlogs))
            {
                FTHitlog *hitlog = &sFTMainHitlogs[sFTMainHitlogID];

                hitlog->attacker_object_class = nFTHitlogObjectFighter;
                hitlog->attacker_hit = attacker_hit;
                hitlog->attacker_gobj = attacker_gobj;
                hitlog->victim_hurt = victim_hurt;
                hitlog->attacker_player = attacker_player;
                hitlog->attacker_player_number = attacker_player_number;

                sFTMainHitlogID++;
            }
            ftParamUpdatePlayerBattleStats(attacker_player, victim_fp->player, damage);
            ftParamUpdateStaleQueue(attacker_player, victim_fp->player, attacker_hit->attack_id, attacker_hit->motion_count);
        }
        else
        {
            gmCollisionGetFighterHitFighterHurtPosition(&impact_pos, attacker_hit, victim_hurt);
            efManagerSetOffMakeEffect(&impact_pos, damage);
        }
    }
    else
    {
        gmCollisionGetFighterHitFighterHurtPosition(&impact_pos, attacker_hit, victim_hurt);
        efManagerSetOffMakeEffect(&impact_pos, damage);
    }
    ftMainPlayHitSFX(attacker_fp, attacker_hit);
}

// 0x800E2F04
void ftMainUpdateAttackStatWeapon(WPStruct *ip, WPHitColl *wp_atkcoll, s32 index, FTStruct *fp, FTHitColl *ft_hitcoll, GObj *weapon_gobj, GObj *fighter_gobj)
{
    s32 damage = wpMainGetStaledDamage(ip);
    Vec3f impact_pos;

    gmCollisionGetWeaponHitFighterHitPosition(&impact_pos, wp_atkcoll, index, ft_hitcoll);

    if ((ft_hitcoll->damage - 10) < damage)
    {
        ftMainSetHitInteractStats(fp, ft_hitcoll->group_id, weapon_gobj, nGMHITTypeHit, 0, TRUE);
        ftMainSetHitRebound(fighter_gobj, fp, ft_hitcoll, weapon_gobj);
        efManagerSetOffMakeEffect(&impact_pos, ft_hitcoll->damage);
    }

    if ((damage - 10) < ft_hitcoll->damage)
    {
        wpProcessUpdateHitInteractStatsGroupID(ip, wp_atkcoll, fighter_gobj, nGMHITTypeHit, ft_hitcoll->group_id);

        if (ip->hit_attack_damage < damage)
        {
            ip->hit_attack_damage = damage;
        }
        efManagerSetOffMakeEffect(&impact_pos, damage);

        if ((gBattleState->game_type == nSCBattleGameType1PGame) && ((damage - 10) >= 10) && (fp->player == gSceneData.spgame_player))
        {
            gSC1PGameBonusGiantImpact = TRUE;
        }
    }
}

// 0x800E3048
void ftMainUpdateShieldStatWeapon(WPStruct *wp, WPHitColl *wp_atkcoll, s32 hitbox_id, FTStruct *fp, GObj *weapon_gobj, GObj *fighter_gobj, f32 angle, Vec3f *vec)
{
    s32 damage = wpMainGetStaledDamage(wp);
    Vec3f impact_pos;

    wpProcessUpdateHitInteractStatsGroupID(wp, wp_atkcoll, fighter_gobj, (wp_atkcoll->can_rehit_shield) ? nGMHITTypeShieldRehit : nGMHITTypeShield, 0);

    if (wp->hit_shield_damage < damage)
    {
        wp->hit_shield_damage = damage;

        wp->shield_collide_angle = angle;

        wp->shield_collide_vec.x = 0.0F;
        wp->shield_collide_vec.y = 0.0F;

        wp->shield_collide_vec.z = (fp->lr == nGMFacingR) ? -vec->x : vec->x;

        syVectorNorm3D(&wp->shield_collide_vec);
    }
    fp->shield_damage_total += damage + wp_atkcoll->shield_damage;

    if (fp->shield_damage < damage)
    {
        fp->shield_damage = damage;

        fp->shield_lr = (wp->physics.vel_air.x < 0.0F) ? nGMFacingR : nGMFacingL;

        fp->shield_player = wp->player;
    }
    gmCollisionGetWeaponHitShieldPosition(&impact_pos, wp_atkcoll, hitbox_id, fighter_gobj, fp->joints[nFTPartsJointYRotN]);
    efManagerSetOffMakeEffect(&impact_pos, wp_atkcoll->shield_damage + damage);
}

// 0x800E31B4
void ftMainUpdateReflectorStatWeapon(WPStruct *wp, WPHitColl *wp_atkcoll, FTStruct *fp, GObj *fighter_gobj)
{
    s32 damage = wpMainGetStaledDamage(wp);

    wpProcessUpdateHitInteractStatsGroupID(wp, wp_atkcoll, fighter_gobj, nGMHITTypeReflect, 0);

    if (fp->special_coll->damage_resist < damage)
    {
        if (wp_atkcoll->can_rehit_fighter)
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

        fp->reflect_lr = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(wp->weapon_gobj)->translate.vec.f.x) ? nGMFacingR : nGMFacingL;
    }
    else
    {
        wp->reflect_gobj = fighter_gobj;

        wp->reflect_stat_flags = fp->stat_flags;
        wp->reflect_stat_count = fp->stat_count;

        fp->reflect_lr = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(wp->weapon_gobj)->translate.vec.f.x) ? nGMFacingR : nGMFacingL;
    }
}

// 0x800E3308
void ftMainUpdateAbsorbStatWeapon(WPStruct *ip, WPHitColl *wp_atkcoll, FTStruct *fp, GObj *fighter_gobj)
{
    s32 damage = wpMainGetStaledDamage(ip);

    wpProcessUpdateHitInteractStatsGroupID(ip, wp_atkcoll, fighter_gobj, nGMHITTypeAbsorb, 0);

    ip->absorb_gobj = fighter_gobj;

    fp->absorb_lr = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(ip->weapon_gobj)->translate.vec.f.x) ? nGMFacingR : nGMFacingL;

    if (!(wp_atkcoll->can_not_heal))
    {
        fp->percent_damage -= (s32)(damage * 2.0F);

        if (fp->percent_damage < 0)
        {
            fp->percent_damage = 0;
        }
        gBattleState->players[fp->player].stock_damage_all = fp->percent_damage;
    }
}

// 0x800E3418
void ftMainUpdateDamageStatWeapon(WPStruct *wp, WPHitColl *wp_atkcoll, s32 hitbox_id, FTStruct *fp, FTDamageColl *ft_dmgcoll, GObj *weapon_gobj, GObj *fighter_gobj)
{
    s32 temp_damage = wpMainGetStaledDamage(wp);
    s32 damage;

    wpProcessUpdateHitInteractStatsGroupID(wp, wp_atkcoll, fighter_gobj, (wp_atkcoll->can_rehit_fighter) ? nGMHitTypeDamageRehit : nGMHitTypeDamage, 0);

    damage = ftParamGetCapturedDamage(fp, temp_damage);

    if (wp_atkcoll->can_rehit_fighter)
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
        (fp->special_hitstatus == nGMHitStatusNormal) &&
        (fp->star_hitstatus == nGMHitStatusNormal)    &&
        (fp->hitstatus == nGMHitStatusNormal)         &&
        (ft_dmgcoll->hitstatus == nGMHitStatusNormal)    &&
        (ftMainCheckGetUpdateDamage(fp, &damage) != FALSE)
    )
    {
        if (sFTMainHitlogID < ARRAY_COUNT(sFTMainHitlogs))
        {
            FTHitlog *hitlog = &sFTMainHitlogs[sFTMainHitlogID];

            hitlog->attacker_object_class = nFTHitlogObjectWeapon;
            hitlog->attacker_hit = wp_atkcoll;
            hitlog->hitbox_id = hitbox_id;
            hitlog->attacker_gobj = weapon_gobj;
            hitlog->victim_hurt = ft_dmgcoll;
            hitlog->attacker_player = wp->player;
            hitlog->attacker_player_number = wp->player_number;

            sFTMainHitlogID++;
        }
        ftParamUpdatePlayerBattleStats(wp->player, fp->player, damage);
        ftParamUpdateStaleQueue(wp->player, fp->player, wp_atkcoll->attack_id, wp_atkcoll->motion_count);
    }
    func_800269C0_275C0(wp_atkcoll->hit_sfx);
}

// 0x800E35BC
void ftMainUpdateAttackStatItem(ITStruct *ip, ITHitColl *it_atkcoll, s32 hitbox_id, FTStruct *fp, FTHitColl *ft_hitcoll, GObj *item_gobj, GObj *fighter_gobj)
{
    s32 damage = itMainGetDamageOutput(ip);
    Vec3f impact_pos;

    gmCollisionGetItemHitFighterHitPosition(&impact_pos, it_atkcoll, hitbox_id, ft_hitcoll);

    if ((ft_hitcoll->damage - 10) < damage)
    {
        ftMainSetHitInteractStats(fp, ft_hitcoll->group_id, item_gobj, nGMHITTypeHit, 0, 1);
        ftMainSetHitRebound(fighter_gobj, fp, ft_hitcoll, item_gobj);
        efManagerSetOffMakeEffect(&impact_pos, ft_hitcoll->damage);
    }
    if ((damage - 10) < ft_hitcoll->damage)
    {
        itProcessSetHitInteractStats(it_atkcoll, fighter_gobj, nGMHITTypeHit, ft_hitcoll->group_id);

        if (ip->hit_attack_damage < damage)
        {
            ip->hit_attack_damage = damage;
        }
        efManagerSetOffMakeEffect(&impact_pos, damage);

        if ((gBattleState->game_type == nSCBattleGameType1PGame) && ((damage - 10) >= 10) && (fp->player == gSceneData.spgame_player))
        {
            gSC1PGameBonusGiantImpact = TRUE;
        }
    }
}

// 0x800E36F8
void ftMainUpdateShieldStatItem(ITStruct *ip, ITHitColl *it_atkcoll, s32 hitbox_id, FTStruct *fp, GObj *item_gobj, GObj *fighter_gobj, f32 angle, Vec3f *vec)
{
    s32 damage = itMainGetDamageOutput(ip);
    Vec3f impact_pos;

    itProcessSetHitInteractStats(it_atkcoll, fighter_gobj, (it_atkcoll->can_rehit_shield) ? nGMHITTypeShieldRehit : nGMHITTypeShield, 0);

    if (ip->hit_shield_damage < damage)
    {
        ip->hit_shield_damage = damage;

        ip->shield_collide_angle = angle;

        ip->shield_collide_vec.x = 0.0F;
        ip->shield_collide_vec.y = 0.0F;

        ip->shield_collide_vec.z = (fp->lr == nGMFacingR) ? -vec->x : vec->x;

        syVectorNorm3D(&ip->shield_collide_vec);
    }
    fp->shield_damage_total += damage + it_atkcoll->shield_damage;

    if (fp->shield_damage < damage)
    {
        fp->shield_damage = damage;

        fp->shield_lr = (ip->physics.vel_air.x < 0.0F) ? nGMFacingR : nGMFacingL;

        fp->shield_player = ip->player;
    }
    gmCollisionGetItemHitShieldPosition(&impact_pos, it_atkcoll, hitbox_id, fighter_gobj, fp->joints[nFTPartsJointYRotN]);
    efManagerSetOffMakeEffect(&impact_pos, it_atkcoll->shield_damage + damage);
}

// 0x800E3860
void ftMainUpdateReflectorStatItem(ITStruct *ip, ITHitColl *it_atkcoll, FTStruct *fp, GObj *fighter_gobj)
{
    s32 damage = itMainGetDamageOutput(ip);

    itProcessSetHitInteractStats(it_atkcoll, fighter_gobj, nGMHITTypeReflect, 0);

    if (fp->special_coll->damage_resist < damage)
    {
        if (it_atkcoll->can_rehit_fighter)
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

        fp->reflect_lr = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(ip->item_gobj)->translate.vec.f.x) ? nGMFacingR : nGMFacingL;
    }
    else
    {
        ip->reflect_gobj = fighter_gobj;

        ip->reflect_stat_flags = fp->stat_flags;
        ip->reflect_stat_count = fp->stat_count;

        fp->reflect_lr = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(ip->item_gobj)->translate.vec.f.x) ? nGMFacingR : nGMFacingL;
    }
}

// 0x800E39B0
void ftMainUpdateDamageStatItem(ITStruct *ip, ITHitColl *it_atkcoll, s32 hitbox_id, FTStruct *fp, FTDamageColl *ft_dmgcoll, GObj *item_gobj, GObj *fighter_gobj)
{
    s32 damage_temp = itMainGetDamageOutput(ip);
    s32 damage;
    s32 attack_lr;

    itProcessSetHitInteractStats(it_atkcoll, fighter_gobj, (it_atkcoll->can_rehit_fighter) ? nGMHitTypeDamageRehit : nGMHitTypeDamage, 0);

    if (ip->type == nITTypeTouch)
    {
        switch (ip->it_kind)
        {
        case nITKindStar:
            it_atkcoll->update_state = nGMHitUpdateDisable;
            ip->hit_normal_damage = 1;

            ftParamSetStarHitStatusInvincible(fp, ITSTAR_INVINCIBLE_TIME);
            ftParamTryPlayItemMusic(nSYAudioBGMStar);
            func_800269C0_275C0(nSYAudioFGMStarGet);

            if ((gBattleState->game_type == nSCBattleGameType1PGame) && (fp->player == gSceneData.spgame_player) && (gSC1PGameBonusStarCount < U8_MAX))
            {
                gSC1PGameBonusStarCount++;
            }
            break;

        case nITKindGLucky:
            ftParamSetHealDamage(fp, it_atkcoll->damage);
            break;
        }
    }
    else
    {
        damage = ftParamGetCapturedDamage(fp, damage_temp);

        if (it_atkcoll->can_rehit_fighter)
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
        if (ABSF(ip->physics.vel_air.x) < 5.0F)
        {
            ip->attack_lr = attack_lr = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(item_gobj)->translate.vec.f.x) ? nGMFacingL : nGMFacingR;
        }
        else
        {
            attack_lr = (ip->physics.vel_air.x < 0) ? nGMFacingL : nGMFacingR;

            ip->attack_lr = attack_lr;
        }
        if 
        (
            (fp->special_hitstatus == nGMHitStatusNormal) &&
            (fp->star_hitstatus == nGMHitStatusNormal)    &&
            (fp->hitstatus == nGMHitStatusNormal)         &&
            (ft_dmgcoll->hitstatus == nGMHitStatusNormal)    &&
            (ftMainCheckGetUpdateDamage(fp, &damage) != FALSE)
        )
        {
            if (sFTMainHitlogID < ARRAY_COUNT(sFTMainHitlogs))
            {
                FTHitlog *hitlog = &sFTMainHitlogs[sFTMainHitlogID];

                hitlog->attacker_object_class = nFTHitlogObjectItem;
                hitlog->attacker_hit = it_atkcoll;
                hitlog->hitbox_id = hitbox_id;
                hitlog->attacker_gobj = item_gobj;
                hitlog->victim_hurt = ft_dmgcoll;
                hitlog->attacker_player = ip->player;
                hitlog->attacker_player_number = ip->player_number;

                sFTMainHitlogID++;
            }
            ftParamUpdatePlayerBattleStats(ip->player, fp->player, damage);
            ftParamUpdateStaleQueue(ip->player, fp->player, it_atkcoll->attack_id, it_atkcoll->motion_count);
        }
        func_800269C0_275C0(it_atkcoll->hit_sfx);
    }
}

// 0x800E3CAC
void ftMainUpdateDamageStatGround(GObj *special_gobj, GObj *fighter_gobj, FTStruct *fp, GRHitCollision *gr_hitcoll, s32 kind)
{
    s32 damage = ftParamGetCapturedDamage(fp, gr_hitcoll->damage);
    sb32 is_take_damage = ftMainCheckGetUpdateDamage(fp, &damage);

    if ((is_take_damage != FALSE) && (sFTMainHitlogID < ARRAY_COUNT(sFTMainHitlogs)))
    {
        FTHitlog *hitlog = &sFTMainHitlogs[sFTMainHitlogID];

        hitlog->attacker_object_class = nFTHitlogObjectGround;
        hitlog->attacker_hit = gr_hitcoll;
        hitlog->attacker_gobj = special_gobj;

        sFTMainHitlogID++;
    }
    switch (kind)
    {
    case nGMHitEnvironmentAcid:
        fp->acid_wait = 30;

        func_800269C0_275C0(nSYAudioFGMFloorDamageBurn);
        break;

    case nGMHitEnvironmentPowerBlock:
        if (is_take_damage != FALSE)
        {
            ftParamUpdatePlayerBattleStats(itGetStruct(special_gobj)->damage_port, fp->player, damage);
        }
        break;

    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        fp->damagefloor_wait = 16;

        if (kind == 7)
        {
            func_800269C0_275C0(nSYAudioFGMShockML);
        }
        else func_800269C0_275C0(nSYAudioFGMFloorDamageBurn);
        break;

    default:
        break;
    }
}

// 0x800E3DD0
void ftMainGetBumperDamageAngle(GObj *fighter_gobj, GObj *attacker_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->damage_angle == 362)
    {
        f32 dist_x = DObjGetStruct(fighter_gobj)->translate.vec.f.x - DObjGetStruct(attacker_gobj)->translate.vec.f.x;
        f32 dist_y;

        fp->damage_lr = (dist_x < 0) ? nGMFacingR : nGMFacingL;

        if (dist_x < 0.0F)
        {
            dist_x = -dist_x;
        }
        dist_y = (DObjGetStruct(fighter_gobj)->translate.vec.f.y + fp->coll_data.object_coll.center) - DObjGetStruct(attacker_gobj)->translate.vec.f.y;

        fp->damage_angle = (dist_x == 0) ? 0 : F_CLC_RTOD32(atanf(dist_y / dist_x));
    }
}

// 0x800E3EBC
void ftMainProcessHitCollisionStatsMain(GObj *fighter_gobj)
{
    FTStruct *this_fp = ftGetStruct(fighter_gobj);
    FTStruct *attacker_fp;
    WPStruct *wp;
    ITStruct *ip;
    FTAttributes *attributes = this_fp->attributes;
    FTHitlog *hitlog;
    s32 i, j;
    f32 knockback_temp;
    f32 knockback;
    FTHitColl *ft_hitcoll;
    WPHitColl *wp_atkcoll;
    ITHitColl *it_atkcoll;
    GRHitCollision *gr_hitcoll;
    Vec3f pos;
    s32 damage;
    u8 gr_handicap;
    GObj *attacker_gobj;
    s32 damage_lr;

    knockback = -1.0F;

    for (i = 0; i < sFTMainHitlogID; i++)
    {
        hitlog = &sFTMainHitlogs[i];

        switch (hitlog->attacker_object_class)
        {
        case nFTHitlogObjectFighter:
            ft_hitcoll = hitlog->attacker_hit;
            attacker_fp = ftGetStruct(hitlog->attacker_gobj);

            knockback_temp = ftParamGetCommonKnockback
            (
                this_fp->percent_damage, 
                this_fp->damage_queue, ft_hitcoll->damage, 
                ft_hitcoll->knockback_weight, 
                ft_hitcoll->knockback_scale, 
                ft_hitcoll->knockback_base, 
                attributes->weight, 
                attacker_fp->handicap, 
                this_fp->handicap
            );

            gmCollisionGetFighterHitFighterHurtPosition(&pos, ft_hitcoll, hitlog->victim_hurt);

            switch (ft_hitcoll->element)
            {
            case nGMHitElementFire:
                efManagerDamageFireMakeEffect(&pos, ft_hitcoll->damage);
                break;

            case nGMHitElementElectric:
                efManagerDamageElectricMakeEffect(&pos, ft_hitcoll->damage);
                break;

            case nGMHitElementCoin:
                efManagerDamageCoinMakeEffect(&pos);
                break;

            case nGMHitElementSlash:
                efManagerDamageSlashMakeEffect(&pos, ft_hitcoll->damage, gmCollisionGetDamageSlashRotation(attacker_fp, ft_hitcoll));
                break;

            default:
                if (knockback_temp < 180.0F)
                {
                    efManagerDamageNormalLightMakeEffect(&pos, hitlog->attacker_player, ft_hitcoll->damage, 0);
                }
                else efManagerDamageNormalHeavyMakeEffect(&pos, hitlog->attacker_player, ft_hitcoll->damage);

                if (ft_hitcoll->sfx_level > 0) // Changed this to > 0 for now, makes a bit more sense to me since it only does this on moves with hit SFX levels greater than weak (0)
                {
                    efManagerDamageSpawnOrbsRandgcMakeEffect(&pos);

                    switch (this_fp->attributes->is_metallic)
                    {
                    case FALSE:
                        efManagerDamageSpawnSparksRandgcMakeEffect(&pos, this_fp->lr);
                        break;

                    case TRUE:
                        efManagerDamageSpawnMDustRandgcMakeEffect(&pos, this_fp->lr);
                        break;

                    /* default: break; // This might not be necessary */
                    }
                }
                break;
            }
            break;

        case nFTHitlogObjectWeapon:
            wp_atkcoll = hitlog->attacker_hit;
            wp = wpGetStruct(hitlog->attacker_gobj);
            damage = wpMainGetStaledDamage(wp);

            knockback_temp = ftParamGetCommonKnockback(this_fp->percent_damage, this_fp->damage_queue, damage, wp_atkcoll->knockback_weight, wp_atkcoll->knockback_scale, wp_atkcoll->knockback_base, attributes->weight, wp->handicap, this_fp->handicap);

            if (wp->is_hitlag_victim)
            {
                gmCollisionGetWeaponHitFighterHurtPosition(&pos, wp_atkcoll, hitlog->hitbox_id, hitlog->victim_hurt);

                switch (wp_atkcoll->element)
                {
                case nGMHitElementFire:
                    efManagerDamageFireMakeEffect(&pos, damage);
                    break;

                case nGMHitElementElectric:
                    efManagerDamageElectricMakeEffect(&pos, damage);
                    break;

                case nGMHitElementCoin:
                    efManagerDamageCoinMakeEffect(&pos);
                    break;

                default:
                    if (knockback_temp < 180.0F)
                    {
                        efManagerDamageNormalLightMakeEffect(&pos, hitlog->attacker_player, damage, NULL);
                    }
                    else efManagerDamageNormalHeavyMakeEffect(&pos, hitlog->attacker_player, damage);
                    break;
                }
            }
            break;

        case nFTHitlogObjectItem:
            it_atkcoll = hitlog->attacker_hit;
            ip = itGetStruct(hitlog->attacker_gobj);

            damage = itMainGetDamageOutput(ip);

            knockback_temp = ftParamGetCommonKnockback(this_fp->percent_damage, this_fp->damage_queue, damage, it_atkcoll->knockback_weight, it_atkcoll->knockback_scale, it_atkcoll->knockback_base, attributes->weight, ip->handicap, this_fp->handicap);

            if (ip->is_hitlag_victim)
            {
                gmCollisionGetItemHitFighterHurtPosition(&pos, it_atkcoll, hitlog->hitbox_id, hitlog->victim_hurt);

                switch (it_atkcoll->element)
                {
                case nGMHitElementFire:
                    efManagerDamageFireMakeEffect(&pos, damage);
                    break;

                case nGMHitElementElectric:
                    efManagerDamageElectricMakeEffect(&pos, damage);
                    break;

                case nGMHitElementCoin:
                    efManagerDamageCoinMakeEffect(&pos);
                    break;

                default:
                    if (knockback_temp < 180.0F)
                    {
                        efManagerDamageNormalLightMakeEffect(&pos, hitlog->attacker_player, damage, NULL);
                    }
                    else efManagerDamageNormalHeavyMakeEffect(&pos, hitlog->attacker_player, damage);
                    break;
                }
            }
            break;

        case nFTHitlogObjectGround:
            gr_hitcoll = hitlog->attacker_hit;

            if (gr_hitcoll->kind == nGMHitEnvironmentPowerBlock) // POW Block?
            {
                gr_handicap = itGetStruct(hitlog->attacker_gobj)->damage_handicap;
            }
            else gr_handicap = 9;

            knockback_temp = ftParamGetCommonKnockback(this_fp->percent_damage, this_fp->damage_queue, gr_hitcoll->damage, gr_hitcoll->knockback_weight, gr_hitcoll->knockback_scale, gr_hitcoll->knockback_base, attributes->weight, gr_handicap, this_fp->handicap);
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
    hitlog = &sFTMainHitlogs[j];
    attacker_gobj = hitlog->attacker_gobj;

    switch (hitlog->attacker_object_class)
    {
    case nFTHitlogObjectFighter:
        ft_hitcoll = hitlog->attacker_hit;
        attacker_fp = ftGetStruct(attacker_gobj);
        this_fp->damage_angle = ft_hitcoll->angle;
        this_fp->damage_element = ft_hitcoll->element;

        this_fp->damage_lr = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(attacker_gobj)->translate.vec.f.x) ? nGMFacingR : nGMFacingL;

        this_fp->damage_player_number = hitlog->attacker_player_number;

        ftParamUpdate1PGameDamageStats(this_fp, hitlog->attacker_player, hitlog->attacker_object_class, attacker_fp->ft_kind, attacker_fp->stat_flags.halfword & ~0x400, attacker_fp->stat_count);

        this_fp->damage_joint_id = hitlog->victim_hurt->joint_id;
        this_fp->damage_index = hitlog->victim_hurt->placement;

        if (this_fp->damage_element == nGMHitElementElectric)
        {
            attacker_fp->hitlag_mul = 1.5F;
        }
        break;

    case nFTHitlogObjectWeapon:
        wp_atkcoll = hitlog->attacker_hit;
        wp = wpGetStruct(attacker_gobj);
        this_fp->damage_angle = wp_atkcoll->angle;
        this_fp->damage_element = wp_atkcoll->element;

        if (ABSF(wp->physics.vel_air.x) < 5.0F)
        {
            this_fp->damage_lr = damage_lr = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(attacker_gobj)->translate.vec.f.x) ? nGMFacingR : nGMFacingL;
        }
        else
        {
            damage_lr = (wp->physics.vel_air.x < 0) ? nGMFacingR : nGMFacingL;

            this_fp->damage_lr = damage_lr;
        }
        if (this_fp->player == hitlog->attacker_player)
        {
            this_fp->damage_player_number = 0;

            ftParamUpdate1PGameDamageStats(this_fp, GMCOMMON_PLAYERS_MAX, hitlog->attacker_object_class, wp->wp_kind, 0, 0);
        }
        else
        {
            this_fp->damage_player_number = hitlog->attacker_player_number;

            ftParamUpdate1PGameDamageStats(this_fp, hitlog->attacker_player, hitlog->attacker_object_class, wp->wp_kind, wp_atkcoll->stat_flags.halfword, wp_atkcoll->stat_count);
        }
        this_fp->damage_joint_id = hitlog->victim_hurt->joint_id;
        this_fp->damage_index = hitlog->victim_hurt->placement;

        ftMainGetBumperDamageAngle(fighter_gobj, attacker_gobj);
        break;

    case nFTHitlogObjectItem:
        it_atkcoll = hitlog->attacker_hit;
        ip = itGetStruct(attacker_gobj);

        this_fp->damage_angle = it_atkcoll->angle;
        this_fp->damage_element = it_atkcoll->element;

        if (ABSF(ip->physics.vel_air.x) < 5.0F)
        {
            this_fp->damage_lr = damage_lr = (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(attacker_gobj)->translate.vec.f.x) ? nGMFacingR : nGMFacingL;
        }
        else
        {
            damage_lr = (ip->physics.vel_air.x < 0) ? nGMFacingR : nGMFacingL;

            this_fp->damage_lr = damage_lr;
        }

        if (this_fp->player == hitlog->attacker_player)
        {
            this_fp->damage_player_number = 0;

            ftParamUpdate1PGameDamageStats(this_fp, GMCOMMON_PLAYERS_MAX, hitlog->attacker_object_class, ip->it_kind, 0, 0);
        }
        else
        {
            this_fp->damage_player_number = hitlog->attacker_player_number;
            ftParamUpdate1PGameDamageStats(this_fp, hitlog->attacker_player, hitlog->attacker_object_class, ip->it_kind, it_atkcoll->stat_flags.halfword, it_atkcoll->stat_count);
        }
        this_fp->damage_joint_id = hitlog->victim_hurt->joint_id;
        this_fp->damage_index = hitlog->victim_hurt->placement;

        ftMainGetBumperDamageAngle(fighter_gobj, attacker_gobj);
        break;

    case nFTHitlogObjectGround:
        gr_hitcoll = hitlog->attacker_hit;

        this_fp->damage_angle = gr_hitcoll->angle;
        this_fp->damage_element = gr_hitcoll->element;

        this_fp->damage_lr = this_fp->lr;

        switch (gr_hitcoll->kind)
        {
        case nGMHitEnvironmentAcid:
            this_fp->damage_player_number = 0;

            if (this_fp->damage_player == -1)
            {
                this_fp->damage_player = GMCOMMON_PLAYERS_MAX;
            }
            ftParamUpdate1PGameDamageStats(this_fp, this_fp->damage_player, hitlog->attacker_object_class, gr_hitcoll->kind, 0, 0);
            break;

        case nGMHitEnvironmentPowerBlock:
            ip = itGetStruct(attacker_gobj);

            this_fp->damage_player_number = ip->damage_player_number;

            ftParamUpdate1PGameDamageStats(this_fp, ip->damage_port, hitlog->attacker_object_class, gr_hitcoll->kind, 0, 0);

            break;

        default:
            this_fp->damage_player_number = 0;

            ftParamUpdate1PGameDamageStats(this_fp, GMCOMMON_PLAYERS_MAX, hitlog->attacker_object_class, gr_hitcoll->kind, 0, 0);
            break;
        }
        this_fp->damage_joint_id = 0;
        this_fp->damage_index = 0;

        break;

    default:
        break;
    }
    this_fp->damage_knockback = knockback;

    if (this_fp->damage_element == nGMHitElementElectric)
    {
        this_fp->hitlag_mul = 1.5F;
    }
}

// 0x800E4870 - My brain hurts
void ftMainSearchFighterHit(GObj *this_gobj)
{
    GObj *other_gobj;
    FTStruct *this_fp;
    FTStruct *other_fp;
    s32 i, j, k, l, m, n;
    GMHitFlags those_flags;
    GMHitFlags these_flags;
    FTHitColl *this_ft_hitcoll;
    f32 angle;
    FTHitColl *other_ft_hitcoll;
    FTDamageColl *ft_dmgcoll;
    sb32 is_check_self;

    this_fp = ftGetStruct(this_gobj);
    other_gobj = gGCCommonLinks[nGCCommonLinkIDFighter];
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

                for (i = 0; i < ARRAY_COUNT(other_fp->hit_colls); i++)
                {
                    other_ft_hitcoll = &other_fp->hit_colls[i];

                    if (other_ft_hitcoll->update_state != nGMHitUpdateDisable)
                    {
                        if ((this_fp->ga == nMPKineticsAir) && (other_ft_hitcoll->is_hit_air) || (this_fp->ga == nMPKineticsGround) && (other_ft_hitcoll->is_hit_ground))
                        {
                            these_flags.is_interact_hurt = these_flags.is_interact_shield = FALSE;

                            these_flags.group_id = 7;

                            for (m = 0; m < ARRAY_COUNT(other_ft_hitcoll->hit_records); m++)
                            {
                                if (this_gobj == other_ft_hitcoll->hit_records[m].victim_gobj)
                                {
                                    these_flags = other_ft_hitcoll->hit_records[m].victim_flags;

                                    break;
                                }
                            }
                            if ((!(these_flags.is_interact_hurt)) && (!(these_flags.is_interact_shield)) && (these_flags.group_id == 7))
                            {
                                gFTMainIsHurtDetect[i] = TRUE;

                                k++;

                                continue;
                            }
                        }
                    }
                    gFTMainIsHurtDetect[i] = FALSE;
                }
                if (k == 0) goto next_gobj;

                else
                {
                    k = 0;

                    if ((is_check_self != FALSE) && (this_gobj != other_fp->capture_gobj) && (other_fp->ga == nMPKineticsGround) && (this_fp->ga == nMPKineticsGround) && !(this_fp->is_catchstatus))
                    {
                        if ((this_fp->throw_gobj == NULL) || (other_gobj != this_fp->throw_gobj) && (((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE)) || (((other_fp->throw_gobj != NULL) ? other_fp->throw_team : other_fp->team) != this_fp->throw_team)))
                        {
                            l = 0;

                            for (i = 0; i < ARRAY_COUNT(this_fp->hit_colls); i++)
                            {
                                this_ft_hitcoll = &this_fp->hit_colls[i];

                                if (this_ft_hitcoll->update_state != nGMHitUpdateDisable)
                                {
                                    if ((other_fp->ga == nMPKineticsAir) && (this_ft_hitcoll->is_hit_air) || (other_fp->ga == nMPKineticsGround) && (this_ft_hitcoll->is_hit_ground))
                                    {
                                        those_flags.is_interact_hurt = those_flags.is_interact_shield = FALSE;

                                        those_flags.group_id = 7;

                                        for (n = 0; n < ARRAY_COUNT(this_ft_hitcoll->hit_records); n++)
                                        {
                                            if (other_gobj == this_ft_hitcoll->hit_records[n].victim_gobj)
                                            {
                                                those_flags = this_ft_hitcoll->hit_records[n].victim_flags;

                                                break;
                                            }
                                        }
                                        if ((!(those_flags.is_interact_hurt)) && (!(those_flags.is_interact_shield)) && (those_flags.group_id == 7))
                                        {
                                            gFTMainIsHitDetect[i] = TRUE;

                                            l++;

                                            continue;
                                        }
                                    }
                                }
                                gFTMainIsHitDetect[i] = FALSE;
                            }
                            if (l != 0)
                            {
                                for (i = 0; i < ARRAY_COUNT(other_fp->hit_colls); i++)
                                {
                                    other_ft_hitcoll = &other_fp->hit_colls[i];

                                    if (gFTMainIsHurtDetect[i] == FALSE) 
                                    {
                                        continue;
                                    }
                                    else for (j = 0; j < ARRAY_COUNT(this_fp->hit_colls); j++)
                                    {
                                        this_ft_hitcoll = &this_fp->hit_colls[j];

                                        if (gFTMainIsHitDetect[j] == FALSE) 
                                        {
                                            continue;
                                        }
                                        else if (gmCollisionCheckFighterHitFighterHitCollide(other_ft_hitcoll, this_ft_hitcoll) != FALSE)
                                        {
                                            ftMainUpdateAttackStatFighter(other_fp, other_ft_hitcoll, this_fp, this_ft_hitcoll, other_gobj, this_gobj);

                                            if (gFTMainIsHurtDetect[i] == FALSE)
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
                    for (i = 0; i < ARRAY_COUNT(other_fp->hit_colls); i++)
                    {
                        other_ft_hitcoll = &other_fp->hit_colls[i];

                        if (gFTMainIsHurtDetect[i] == FALSE) 
                        {
                            continue;
                        }
                        gFTMainIsHurtDetect[i] = gmCollisionCheckFighterInFighterRange(other_ft_hitcoll, this_gobj);

                        if (gFTMainIsHurtDetect[i] != FALSE) 
                        {
                            k++;
                        }
                    }
                    if (k != 0)
                    {
                        if (this_fp->is_shield)
                        {
                            for (i = 0; i < ARRAY_COUNT(other_fp->hit_colls); i++)
                            {
                                other_ft_hitcoll = &other_fp->hit_colls[i];

                                if (gFTMainIsHurtDetect[i] == FALSE) 
                                {
                                    continue;
                                }
                                else if (gmCollisionCheckFighterHitShieldCollide(other_ft_hitcoll, this_gobj, this_fp->joints[nFTPartsJointYRotN], &angle) != FALSE)
                                {
                                    ftMainUpdateShieldStatFighter(other_fp, other_ft_hitcoll, this_fp, other_gobj, this_gobj);
                                }
                            }
                        }
                        if ((this_fp->special_hitstatus != nGMHitStatusIntangible) && (this_fp->star_hitstatus != nGMHitStatusIntangible) && (this_fp->hitstatus != nGMHitStatusIntangible))
                        {
                            for (i = 0; i < ARRAY_COUNT(other_fp->hit_colls); i++)
                            {
                                other_ft_hitcoll = &other_fp->hit_colls[i];

                                if (gFTMainIsHurtDetect[i] == FALSE) 
                                {
                                    continue;
                                }
                                else for (j = 0; j < ARRAY_COUNT(this_fp->damage_colls); j++)
                                {
                                    ft_dmgcoll = &this_fp->damage_colls[j];

                                    if (ft_dmgcoll->hitstatus == nGMHitStatusNone) 
                                    {
                                        break;
                                    }
                                    if (ft_dmgcoll->hitstatus != nGMHitStatusIntangible)
                                    {
                                        if (gmCollisionCheckFighterHitFighterHurtCollide(other_ft_hitcoll, ft_dmgcoll) != FALSE)
                                        {
                                            ftMainUpdateDamageStatFighter(other_fp, other_ft_hitcoll, this_fp, ft_dmgcoll, other_gobj, this_gobj);

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
        other_gobj = other_gobj->link_next;
    }
}

// 0x800E4ED4
void ftMainSearchWeaponHit(GObj *fighter_gobj)
{
    GObj *weapon_gobj;
    s32 i, j, k, l, m, n;
    GMHitFlags fighter_flags;
    GMHitFlags item_flags;
    FTStruct *fp;
    WPStruct *wp;
    WPHitColl *wp_atkcoll;
    f32 angle;
    Vec3f vec;
    FTDamageColl *ft_dmgcoll;
    FTHitColl *ft_hitcoll;
    s32 unused1;

    fp = ftGetStruct(fighter_gobj);
    weapon_gobj = gGCCommonLinks[nGCCommonLinkIDWeapon];

    while (weapon_gobj != NULL)
    {
        wp = wpGetStruct(weapon_gobj);
        wp_atkcoll = &wp->hit_coll;

        if ((fighter_gobj != wp->owner_gobj) && ((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE) || (fp->team != wp->team)) && (wp_atkcoll->update_state != nGMHitUpdateDisable))
        {
            if (wp_atkcoll->interact_mask & GMHITCOLLISION_FLAG_FIGHTER)
            {
                item_flags.is_interact_hurt = item_flags.is_interact_shield = item_flags.is_interact_reflect = item_flags.is_interact_absorb = FALSE;

                item_flags.group_id = 7;

                for (m = 0; m < ARRAY_COUNT(wp_atkcoll->hit_records); m++)
                {
                    if (fighter_gobj == wp_atkcoll->hit_records[m].victim_gobj)
                    {
                        item_flags = wp_atkcoll->hit_records[m].victim_flags;

                        break;
                    }
                }
                if (!(item_flags.is_interact_hurt) && !(item_flags.is_interact_shield) && !(item_flags.is_interact_reflect) && !(item_flags.is_interact_absorb) && (item_flags.group_id == 7))
                {
                    if ((wp_atkcoll->can_setoff) && !(fp->is_catchstatus) && ((fp->throw_gobj == NULL) || (fp->throw_gobj != wp->owner_gobj) && ((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE) || (fp->throw_team != wp->team))))
                    {

                        if (!(fp->is_reflect) || !(wp_atkcoll->can_reflect))
                        {
                            k = 0;

                            for (i = 0; i < ARRAY_COUNT(fp->hit_colls); i++)
                            {
                                ft_hitcoll = &fp->hit_colls[i];

                                if ((ft_hitcoll->update_state != nGMHitUpdateDisable) && ((wp->ga == nMPKineticsAir) && (ft_hitcoll->is_hit_air) || (wp->ga == nMPKineticsGround) && (ft_hitcoll->is_hit_ground)))
                                {
                                    fighter_flags.group_id = 7;

                                    for (n = 0; n < ARRAY_COUNT(ft_hitcoll->hit_records); n++)
                                    {
                                        if (weapon_gobj == ft_hitcoll->hit_records[n].victim_gobj)
                                        {
                                            fighter_flags = ft_hitcoll->hit_records[n].victim_flags;

                                            break;
                                        }
                                    }
                                    if (fighter_flags.group_id == 7)
                                    {
                                        gFTMainIsHitDetect[i] = TRUE;

                                        k++;

                                        continue;
                                    }
                                }
                                gFTMainIsHitDetect[i] = FALSE;
                            }
                            if (k != 0)
                            {
                                for (i = 0; i < wp_atkcoll->hit_count; i++)
                                {
                                    for (j = 0; j < ARRAY_COUNT(fp->hit_colls); j++)
                                    {
                                        ft_hitcoll = &fp->hit_colls[j];

                                        if (gFTMainIsHitDetect[j] == FALSE) 
                                        {
                                            continue;
                                        }
                                        else if (gmCollisionCheckWeaponHitFighterHitCollide(wp_atkcoll, i, ft_hitcoll) != FALSE)
                                        {
                                            ftMainUpdateAttackStatWeapon(wp, wp_atkcoll, i, fp, ft_hitcoll, weapon_gobj, fighter_gobj);

                                            if (wp->hit_attack_damage != 0) 
                                            {
                                                goto next_gobj;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                    }
                    for (i = 0, l = 0; i < wp_atkcoll->hit_count; i++)
                    {
                        gFTMainIsHurtDetect[i] = gmCollisionCheckWeaponInFighterRange(wp_atkcoll, i, fighter_gobj);

                        if (gFTMainIsHurtDetect[i] != FALSE)
                        {
                            l++;
                        }
                    }
                    if (l != 0)
                    {
                        if ((fp->is_reflect) && (wp_atkcoll->can_reflect))
                        {
                            for (i = 0; i < wp_atkcoll->hit_count; i++)
                            {
                                if (gFTMainIsHurtDetect[i] == FALSE) continue;

                                else if (gmCollisionCheckWeaponHitSpecialCollide(wp_atkcoll, i, fp, fp->special_coll) != FALSE)
                                {
                                    ftMainUpdateReflectorStatWeapon(wp, wp_atkcoll, fp, fighter_gobj);

                                    goto next_gobj;
                                }
                            }
                        }
                        if ((fp->is_absorb) && (wp_atkcoll->can_absorb))
                        {
                            for (i = 0; i < wp_atkcoll->hit_count; i++)
                            {
                                if (gFTMainIsHurtDetect[i] == FALSE) 
                                {
                                    continue;
                                }
                                else if (gmCollisionCheckWeaponHitSpecialCollide(wp_atkcoll, i, fp, fp->special_coll) != FALSE)
                                {
                                    ftMainUpdateAbsorbStatWeapon(wp, wp_atkcoll, fp, fighter_gobj);

                                    goto next_gobj;
                                }
                            }
                        }
                        if ((fp->is_shield) && (wp_atkcoll->can_shield))
                        {
                            for (i = 0; i < wp_atkcoll->hit_count; i++)
                            {
                                if (gFTMainIsHurtDetect[i] == FALSE) 
                                {
                                    continue;
                                }
                                else if (gmCollisionCheckWeaponHitShieldCollide(wp_atkcoll, i, fighter_gobj, fp->joints[nFTPartsJointYRotN], &angle, &vec) != FALSE)
                                {
                                    ftMainUpdateShieldStatWeapon(wp, wp_atkcoll, i, fp, weapon_gobj, fighter_gobj, angle, &vec);

                                    goto next_gobj;
                                }
                            }
                        }
                        if ((fp->special_hitstatus != nGMHitStatusIntangible) && (fp->star_hitstatus != nGMHitStatusIntangible) && (fp->hitstatus != nGMHitStatusIntangible))
                        {
                            for (i = 0; i < wp_atkcoll->hit_count; i++)
                            {
                                if (gFTMainIsHurtDetect[i] == FALSE) 
                                {
                                    continue;
                                }
                                else for (j = 0; j < ARRAY_COUNT(fp->damage_colls); j++)
                                {
                                    ft_dmgcoll = &fp->damage_colls[j];

                                    if (ft_dmgcoll->hitstatus == nGMHitStatusNone) break;

                                    if (ft_dmgcoll->hitstatus != nGMHitStatusIntangible)
                                    {
                                        if (gmCollisionCheckWeaponHitFighterHurtCollide(wp_atkcoll, i, ft_dmgcoll) != FALSE)
                                        {
                                            ftMainUpdateDamageStatWeapon(wp, wp_atkcoll, i, fp, ft_dmgcoll, weapon_gobj, fighter_gobj);

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
        weapon_gobj = weapon_gobj->link_next;
    }
}

// 0x800E55DC
void ftMainSearchItemHit(GObj *fighter_gobj)
{
    GObj *item_gobj;
    s32 i, j, k, l, m, n;
    GMHitFlags fighter_flags;
    GMHitFlags article_flags;
    FTStruct *fp;
    ITStruct *ip;
    ITHitColl *it_atkcoll;
    f32 angle;
    Vec3f vec;
    FTDamageColl *ft_dmgcoll;
    FTHitColl *ft_hitcoll;
    s32 unused1;

    fp = ftGetStruct(fighter_gobj);
    item_gobj = gGCCommonLinks[nGCCommonLinkIDItem];

    while (item_gobj != NULL)
    {
        ip = itGetStruct(item_gobj);
        it_atkcoll = &ip->hit_coll;

        if ((fighter_gobj != ip->owner_gobj) && ((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE) || (fp->team != ip->team)) && (it_atkcoll->update_state != nGMHitUpdateDisable))
        {
            if (it_atkcoll->interact_mask & GMHITCOLLISION_FLAG_FIGHTER)
            {
                article_flags.is_interact_hurt = article_flags.is_interact_shield = article_flags.is_interact_reflect = FALSE;

                article_flags.group_id = 7;

                for (m = 0; m < ARRAY_COUNT(it_atkcoll->hit_records); m++)
                {
                    if (fighter_gobj == it_atkcoll->hit_records[m].victim_gobj)
                    {
                        article_flags = it_atkcoll->hit_records[m].victim_flags;

                        break;
                    }
                }
                if (!(article_flags.is_interact_hurt) && !(article_flags.is_interact_shield) && !(article_flags.is_interact_reflect) && (article_flags.group_id == 7))
                {
                    if ((it_atkcoll->can_setoff) && !(fp->is_catchstatus) && ((fp->throw_gobj == NULL) || (fp->throw_gobj != ip->owner_gobj) && ((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE) || (fp->throw_team != ip->team))))
                    {
                        if (!(fp->is_reflect) || !(it_atkcoll->can_reflect))
                        {
                            k = 0;

                            for (i = 0; i < ARRAY_COUNT(fp->hit_colls); i++)
                            {
                                ft_hitcoll = &fp->hit_colls[i];

                                if ((ft_hitcoll->update_state != nGMHitUpdateDisable) && ((ip->ga == nMPKineticsAir) && (ft_hitcoll->is_hit_air) || (ip->ga == nMPKineticsGround) && (ft_hitcoll->is_hit_ground)))
                                {
                                    fighter_flags.group_id = 7;

                                    for (n = 0; n < ARRAY_COUNT(ft_hitcoll->hit_records); n++)
                                    {
                                        if (item_gobj == ft_hitcoll->hit_records[n].victim_gobj)
                                        {
                                            fighter_flags = ft_hitcoll->hit_records[n].victim_flags;

                                            break;
                                        }
                                    }
                                    if (fighter_flags.group_id == 7)
                                    {
                                        gFTMainIsHitDetect[i] = TRUE;

                                        k++;

                                        continue;
                                    }
                                }
                                gFTMainIsHitDetect[i] = FALSE;
                            }
                            if (k != 0)
                            {
                                for (i = 0; i < it_atkcoll->hit_count; i++)
                                {
                                    for (j = 0; j < ARRAY_COUNT(fp->hit_colls); j++)
                                    {
                                        ft_hitcoll = &fp->hit_colls[j];

                                        if (gFTMainIsHitDetect[j] == FALSE) 
                                        {
                                            continue;
                                        }
                                        else if (gmCollisionCheckItemHitFighterHitCollide(it_atkcoll, i, ft_hitcoll) != FALSE)
                                        {
                                            ftMainUpdateAttackStatItem(ip, it_atkcoll, i, fp, ft_hitcoll, item_gobj, fighter_gobj);

                                            if (ip->hit_attack_damage != 0) goto next_gobj;
                                        }
                                    }
                                }
                            }
                        }

                    }
                    for (i = 0, l = 0; i < it_atkcoll->hit_count; i++)
                    {
                        gFTMainIsHurtDetect[i] = gmCollisionCheckItemInFighterRange(it_atkcoll, i, fighter_gobj);

                        if (gFTMainIsHurtDetect[i] != FALSE)
                        {
                            l++;
                        }
                    }
                    if (l != 0)
                    {
                        if ((fp->is_reflect) && (it_atkcoll->can_reflect))
                        {
                            for (i = 0; i < it_atkcoll->hit_count; i++)
                            {
                                if (gFTMainIsHurtDetect[i] == FALSE) 
                                {
                                    continue;
                                }
                                else if (gmCollisionCheckItemHitSpecialCollide(it_atkcoll, i, fp, fp->special_coll) != FALSE)
                                {
                                    ftMainUpdateReflectorStatItem(ip, it_atkcoll, fp, fighter_gobj);

                                    goto next_gobj;
                                }
                            }
                        }
                        if ((fp->is_shield) && (it_atkcoll->can_shield))
                        {
                            for (i = 0; i < it_atkcoll->hit_count; i++)
                            {
                                if (gFTMainIsHurtDetect[i] == FALSE) continue;

                                else if (gmCollisionCheckItemHitShieldCollide(it_atkcoll, i, fighter_gobj, fp->joints[nFTPartsJointYRotN], &angle, &vec) != FALSE)
                                {
                                    ftMainUpdateShieldStatItem(ip, it_atkcoll, i, fp, item_gobj, fighter_gobj, angle, &vec);

                                    goto next_gobj;
                                }
                            }
                        }
                        if ((fp->special_hitstatus != nGMHitStatusIntangible) && (fp->star_hitstatus != nGMHitStatusIntangible) && (fp->hitstatus != nGMHitStatusIntangible))
                        {
                            for (i = 0; i < it_atkcoll->hit_count; i++)
                            {
                                if (gFTMainIsHurtDetect[i] == FALSE) 
                                {
                                    continue;
                                }
                                else for (j = 0; j < ARRAY_COUNT(fp->damage_colls); j++)
                                {
                                    ft_dmgcoll = &fp->damage_colls[j];

                                    if (ft_dmgcoll->hitstatus == nGMHitStatusNone) 
                                    {
                                        break;
                                    }
                                    if (ft_dmgcoll->hitstatus != nGMHitStatusIntangible)
                                    {
                                        if (gmCollisionCheckItemHitFighterHurtCollide(it_atkcoll, i, ft_dmgcoll) != FALSE)
                                        {
                                            ftMainUpdateDamageStatItem(ip, it_atkcoll, i, fp, ft_dmgcoll, item_gobj, fighter_gobj);

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
        item_gobj = item_gobj->link_next;
    }
}

// 0x800E5C30
sb32 ftMainGetGroundHitObstacle(FTStruct *fp, GRHitCollision **p_gr_hitcoll)
{
    if ((fp->damagefloor_wait == 0) && (fp->ga == nMPKineticsGround) && (fp->coll_data.ground_line_id != -1) && (fp->coll_data.ground_line_id != -2))
    {
        switch (fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK)
        {
        case nMPMaterialFireWeakHz1:
            *p_gr_hitcoll = &dFTMainGroundHitCollisionAttributes[0];
            return TRUE;

        case nMPMaterialFireStrongVt1:
            *p_gr_hitcoll = &dFTMainGroundHitCollisionAttributes[1];
            return TRUE;

        case nMPMaterialFireWeakVt1:
            *p_gr_hitcoll = &dFTMainGroundHitCollisionAttributes[2];
            return TRUE;

        case nMPMaterialSpikeStrongHz1:
            *p_gr_hitcoll = &dFTMainGroundHitCollisionAttributes[3];
            return TRUE;

        case nMPMaterialFireWeakVt2:
            *p_gr_hitcoll = &dFTMainGroundHitCollisionAttributes[4];
            return TRUE;

        case nMPMaterialFireWeakVt3:
            *p_gr_hitcoll = &dFTMainGroundHitCollisionAttributes[5];
            return TRUE;

        default:
            return FALSE;
        }
    }
    else return FALSE;
}

// 0x800E5D20
void ftMainSearchGroundHit(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    GRHazard *ge = &sFTMainGroundHazards[0];
    s32 i;
    GRHitCollision *gr_hitcoll;
    s32 kind;

    if (fp->hitlag_tics == 0)
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
    if (ftParamGetBestHitStatusAll(fighter_gobj) == nGMHitStatusNormal)
    {
        for (i = 0; i < sFTMainGroundHazardsNum; i++, ge++)
        {
            if ((ge->gobj != NULL) && (ge->proc_update(ge->gobj, fighter_gobj, &gr_hitcoll, &kind) != FALSE))
            {
                ftMainUpdateDamageStatGround(ge->gobj, fighter_gobj, fp, gr_hitcoll, kind);
            }
        }
        if (ftMainGetGroundHitObstacle(fp, &gr_hitcoll) != FALSE)
        {
            ftMainUpdateDamageStatGround(NULL, fighter_gobj, fp, gr_hitcoll, gr_hitcoll->kind);
        }
    }
}

// 0x800E5E58 - Meth
void ftMainSearchFighterCatch(GObj *this_gobj)
{
    GObj *other_gobj;
    FTStruct *this_fp;
    FTStruct *other_fp;
    s32 i, j, m;
    FTDamageColl *ft_dmgcoll;
    GMHitFlags catch_mask;
    FTHitColl *ft_hitcoll;

    this_fp = ftGetStruct(this_gobj);

    this_fp->search_gobj = NULL;
    this_fp->search_gobj_dist = F32_MAX;

    other_gobj = gGCCommonLinks[nGCCommonLinkIDFighter];

    while (other_gobj != NULL)
    {
        if (other_gobj == this_gobj) 
        {
            goto next_gobj;
        }
        other_fp = ftGetStruct(other_gobj);

        if (other_fp->is_nullstatus) 
        {
            goto next_gobj;
        }
        if (other_fp->ft_kind == nFTKindBoss)
        {
            goto next_gobj;
        }
        if ((gBattleState->is_team_battle == TRUE) && (gBattleState->is_team_attack == FALSE) && (this_fp->team == other_fp->team)) 
        {
            goto next_gobj;
        }
        if (other_fp->capture_immune_mask & this_fp->catch_mask)
        {
            goto next_gobj;
        }
        if ((other_fp->special_hitstatus != nGMHitStatusNormal) || (other_fp->star_hitstatus != nGMHitStatusNormal) || (other_fp->hitstatus != nGMHitStatusNormal)) 
        {
            goto next_gobj;
        }
        for (i = 0; i < ARRAY_COUNT(this_fp->hit_colls) ^ 0; i++) // XOR 0 ???
        {
            ft_hitcoll = &this_fp->hit_colls[i];

            if (ft_hitcoll->update_state == nGMHitUpdateDisable) 
            {
                continue;
            }
            if ((other_fp->ga == nMPKineticsAir) && !(ft_hitcoll->is_hit_air) || (other_fp->ga == nMPKineticsGround) && !(ft_hitcoll->is_hit_ground)) 
            {
                continue;
            }
            catch_mask.is_interact_hurt = catch_mask.is_interact_shield = FALSE;

            catch_mask.group_id = 7;

            for (m = 0; m < ARRAY_COUNT(ft_hitcoll->hit_records); m++)
            {
                if (other_gobj == ft_hitcoll->hit_records[m].victim_gobj)
                {
                    catch_mask = ft_hitcoll->hit_records[m].victim_flags;

                    break;
                }
            }
            if ((catch_mask.is_interact_hurt) || (catch_mask.is_interact_shield) || (catch_mask.group_id != 7)) continue;

            for (j = 0; j < ARRAY_COUNT(other_fp->damage_colls); j++)
            {
                ft_dmgcoll = &other_fp->damage_colls[j];

                if (ft_dmgcoll->hitstatus == nGMHitStatusNone) 
                {
                    break;
                }
                if ((ft_dmgcoll->hitstatus != nGMHitStatusIntangible) && (ft_dmgcoll->hitstatus != nGMHitStatusInvincible))
                {
                    if ((ft_dmgcoll->is_grabbable != FALSE) && (gmCollisionCheckFighterHitFighterHurtCollide(ft_hitcoll, ft_dmgcoll) != FALSE))
                    {
                        ftMainUpdateCatchStatFighter(this_fp, ft_hitcoll, other_fp, this_gobj, other_gobj);

                        goto next_gobj;
                    }
                }
            }        
        }
    next_gobj:
        other_gobj = other_gobj->link_next;
    }
}

// 0x800E6100
void ftMainProcSearchAllCatch(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSearchHitHazard(fighter_gobj);

    if (fp->is_catchstatus)
    {
        ftMainSearchFighterCatch(fighter_gobj);

        if (fp->search_gobj != NULL)
        {
            fp->proc_catch(fighter_gobj);
            fp->proc_capture(fp->search_gobj, fighter_gobj);
        }
    }
}

// 0x800E6178
void ftMainProcSearchAllHit(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->is_nullstatus))
    {
        sFTMainHitlogID = 0;

        ftMainSearchFighterHit(fighter_gobj);
        ftMainSearchItemHit(fighter_gobj);
        ftMainSearchWeaponHit(fighter_gobj);
        ftMainSearchGroundHit(fighter_gobj);

        if (sFTMainHitlogID != 0)
        {
            ftMainProcessHitCollisionStatsMain(fighter_gobj);
        }
    }
}

// 0x800E61EC
void ftMainProcUpdateMain(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    s32 damage;
    s32 status_id;
    f32 knockback_resist;
    sb32 is_shieldbreak;
    u32 hitlag_tics;
    s32 sp84;
    s32 element;

    damage = 0;
    is_shieldbreak = FALSE;
    status_id = fp->status_id;
    hitlag_tics = fp->hitlag_tics;
    sp84 = 0;

    if (fp->unk_ft_0x7AC != 0)
    {
        fp->unk_ft_0x3C += fp->unk_ft_0x7AC;
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
        fp->shield_health = (fp->ft_kind == nFTKindYoshi) ? 30 : 30;

        is_shieldbreak = TRUE;
    }
    if (fp->damage_knockback != 0.0F)
    {
        if ((fp->status_id == nFTCommonStatusSquat) || (fp->status_id == nFTCommonStatusSquatWait))
        {
            fp->damage_knockback *= (2.0F / 3.0F);
        }
        if (fp->status_id == nFTCommonStatusTwister)
        {
            fp->damage_kind = nGMHitEnvironmentTwister;
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
        ftParamUpdateDamage(fp, fp->damage_queue);

        if (fp->proc_trap != NULL)
        {
            fp->proc_trap(fighter_gobj);
        }
        if (fp->ft_kind != nFTKindBoss)
        {
            switch (fp->damage_kind)
            {
            case 4:
                break;

            case nGMHitEnvironmentPowerBlock:
                ftParamStopVoiceRunProcDamage(fighter_gobj);
                ftCommonDamageGotoDamageStatus(fighter_gobj);
                break;

            case nGMHitEnvironmentTwister:
                ftCommonDamageSetDamageColAnim(fighter_gobj);
                break;

            case nGMHitEnvironmentTaruCann:
                ftParamStopVoiceRunProcDamage(fighter_gobj);
                ftCommonDamageUpdateCatchResist(fighter_gobj);
                break;

            default:
                ftCommonDamageUpdateMain(fighter_gobj);
                break;
            }
        }
        else
        {
            ftCommonDamageSetDamageColAnim(fighter_gobj);
            ftBossCommonUpdateDamageStats(fighter_gobj);
        }
        damage = fp->damage_lag;
        sp84 = 1;

        ftParamSetDamageShuffle(fp, (fp->damage_element == nGMHitElementElectric) ? TRUE : FALSE, damage, status_id, fp->hitlag_mul);

        if ((s32)((fp->damage_queue * 0.75F) + 4.0F) > 0)
        {
            ftParamMakeRumble(fp, 0, (s32)((fp->damage_queue * 0.75F) + 4.0F));
        }
    }
    else if (fp->shield_damage != 0)
    {
        if (is_shieldbreak != FALSE)
        {
            ftCommonShieldBreakFlyCommonSetStatus(fighter_gobj);
        }
        else ftCommonGuardSetOffSetStatus(fighter_gobj);

        damage = fp->shield_damage;
    }
    else if (fp->attack_shield_push != 0)
    {
        if (fp->proc_shield != NULL)
        {
            fp->proc_shield(fighter_gobj);
        }
        if ((fp->attack_rebound != 0) && (fp->catch_gobj == NULL) && (fp->capture_gobj == NULL))
        {
            ftParamStopVoiceRunProcDamage(fighter_gobj);
            ftCommonReboundWaitSetStatus(fighter_gobj);
        }
        damage = fp->attack_shield_push;
    }
    else if (fp->attack_damage != 0)
    {
        if (fp->proc_hit != NULL)
        {
            fp->proc_hit(fighter_gobj);
        }
        damage = fp->attack_damage;

        if (fp->stat_flags.stat_attack_id == nFTStatusAttackIDBatSwing4)
        {
            ftParamMakeRumble(fp, 10, 0);
        }
        else if ((s32) ((fp->attack_damage * 0.5F) + 2.0F) > 0)
        {
            ftParamMakeRumble(fp, 5, (s32)((fp->attack_damage * 0.5F) + 2.0F));
        }
    }
    else if (fp->reflect_damage != 0)
    {
        ftCommonShieldBreakFlyReflectorSetStatus(fighter_gobj);
    }
    else if (fp->reflect_lr != nGMFacingC)
    {
        switch (fp->special_coll->kind)
        {
        case nFTSpecialHITKindFoxReflector:
            ftFoxSpecialLwHitSetStatus(fighter_gobj);
            break;

        case nFTSpecialHITKindNessReflector:
            func_800269C0_275C0(nSYAudioFGMBatHit);
            break;
        }
    }
    else if (fp->absorb_lr != nGMFacingC)
    {
        ftNessSpecialLwProcAbsorb(fighter_gobj);
    }
    if (damage != 0)
    {
        fp->hitlag_tics = ftParamGetHitLag(damage, status_id, fp->hitlag_mul);

        if ((fp->hitlag_tics != 0) && (sp84 != 0))
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
    fp->attack_shield_push = 0;
    fp->shield_damage = 0;
    fp->shield_damage_total = 0;
    fp->damage_lag = 0;
    fp->damage_queue = 0;
    fp->damage_kind = 0;

    fp->reflect_lr = nGMFacingC;
    fp->reflect_damage = 0;
    fp->absorb_lr = nGMFacingC;

    fp->unk_ft_0x7A0 = 0;
    fp->attack_rebound = 0;
    fp->damage_knockback = 0;
    fp->hitlag_mul = 1.0F;

    if ((hitlag_tics == 0) && (fp->afterimage.drawstatus != -1))
    {
        switch (fp->afterimage.is_itemswing)
        {
        case FALSE:
            if ((fp->ft_kind == nFTKindLink) && (fp->modelpart_status[11 - nFTPartsJointCommonStart].modelpart_id_current == 0))
            {
                FTParts *ft_parts = fp->joints[11]->user_data.p;

                func_ovl2_800EDBA4(fp->joints[11]);

                fp->afterimage.desc[fp->afterimage.desc_index].translate_x = ft_parts->mtx_translate[3][0];
                fp->afterimage.desc[fp->afterimage.desc_index].translate_y = ft_parts->mtx_translate[3][1];
                fp->afterimage.desc[fp->afterimage.desc_index].translate_z = ft_parts->mtx_translate[3][2];
                fp->afterimage.desc[fp->afterimage.desc_index].vec.x = ft_parts->mtx_translate[2][0];
                fp->afterimage.desc[fp->afterimage.desc_index].vec.y = ft_parts->mtx_translate[2][1];
                fp->afterimage.desc[fp->afterimage.desc_index].vec.z = ft_parts->mtx_translate[2][2];

                if (fp->afterimage.desc_index == 2)
                {
                    fp->afterimage.desc_index = 0;
                }
                else fp->afterimage.desc_index++;

                if (fp->afterimage.drawstatus <= 2)
                {
                    fp->afterimage.drawstatus++;
                }
            }
            break;

        case TRUE:
            if ((fp->item_hold != NULL) && (fp->is_show_item) && (itGetStruct(fp->item_hold)->it_kind == nITKindSword))
            {
                s32 unused;
                Mtx44f mtx;

                func_ovl0_800C9A38(mtx, fp->joints[fp->attributes->joint_itemlight_id]);

                fp->afterimage.desc[fp->afterimage.desc_index].translate_x = mtx[3][0];
                fp->afterimage.desc[fp->afterimage.desc_index].translate_y = mtx[3][1];
                fp->afterimage.desc[fp->afterimage.desc_index].translate_z = mtx[3][2];
                fp->afterimage.desc[fp->afterimage.desc_index].vec.x = mtx[1][0];
                fp->afterimage.desc[fp->afterimage.desc_index].vec.y = mtx[1][1];
                fp->afterimage.desc[fp->afterimage.desc_index].vec.z = mtx[1][2];

                syVectorNorm3D(&fp->afterimage.desc[fp->afterimage.desc_index].vec);

                if (fp->afterimage.desc_index == 2)
                {
                    fp->afterimage.desc_index = 0;
                }
                else fp->afterimage.desc_index++;

                if (fp->afterimage.drawstatus <= 2)
                {
                    fp->afterimage.drawstatus++;
                }
            }
            break;
        }
    }
}

// 0x800E69C4
void ftMainUpdateWithheldPartID(FTStruct *fp, s32 withheld_part_id)
{
    FTWithheldPart *withheld_part;
    void *dl;
    DObj *root_joint;
    DObj *child_joint;
    DObj *sibling_joint;
    FTAttributes *attributes;
    FTCommonPart *commonpart;
    DObj *parent_joint;
    FTParts *ft_parts;

    attributes = fp->attributes;
    withheld_part = &attributes->withheld_parts[withheld_part_id];

    if (withheld_part->root_joint_id >= nFTPartsJointCommonStart)
    {
        if (fp->detail_current == nFTPartsDetailHigh)
        {
            commonpart = &fp->attributes->commonparts_container->commonparts[0];
        }
        else if (attributes->commonparts_container->commonparts[1].dobjdesc[withheld_part->root_joint_id - nFTPartsJointCommonStart].display_list != NULL)
        {
            commonpart = &attributes->commonparts_container->commonparts[1];
        }
        else commonpart = &attributes->commonparts_container->commonparts[0];
    }
    else commonpart = NULL;

    dl = (commonpart != NULL) ? commonpart->dobjdesc[withheld_part->root_joint_id - nFTPartsJointCommonStart].display_list : NULL;

    root_joint = gcAddDObjForGObj(fp->fighter_gobj, dl);
    root_joint->sib_prev->sib_next = NULL;
    root_joint->sib_prev = NULL;

    if (dl != NULL)
    {
        lbCommonAddMObjForFighterPartsDObj(root_joint, commonpart->p_mobjsubs[withheld_part->root_joint_id - nFTPartsJointCommonStart], commonpart->p_costume_matanim_joints[withheld_part->root_joint_id - nFTPartsJointCommonStart], NULL, fp->costume);
    }
    if (commonpart != NULL)
    {
        fp->modelpart_status[withheld_part->root_joint_id - nFTPartsJointCommonStart].modelpart_id_default = fp->modelpart_status[withheld_part->root_joint_id - nFTPartsJointCommonStart].modelpart_id_current = (dl != NULL) ? 0 : -1;
    }
    parent_joint = fp->joints[withheld_part->parent_joint_id];

    switch (withheld_part->joint_kind)
    {
    case 0:
        if (parent_joint->child != NULL)
        {
            sibling_joint = parent_joint->child->sib_next;
            child_joint = parent_joint->child;

            while (sibling_joint != NULL)
            {
                child_joint = sibling_joint;
                sibling_joint = sibling_joint->sib_next;
            }
            child_joint->sib_next = root_joint;
            root_joint->sib_prev = child_joint;
        }
        else parent_joint->child = root_joint;
        root_joint->parent = parent_joint;
        break;

    case 1:
        if (parent_joint->child != NULL)
        {
            child_joint = parent_joint->child;
            child_joint->sib_prev = root_joint;
            root_joint->sib_next = child_joint;
        }
        parent_joint->child = root_joint;
        root_joint->parent = parent_joint;
        break;

    case 2:
        child_joint = parent_joint->child->sib_next;
        child_joint->sib_prev = root_joint;
        root_joint->sib_next = child_joint;
        child_joint = parent_joint->child;
        child_joint->sib_next = root_joint;
        root_joint->parent = parent_joint;
        root_joint->sib_prev = child_joint;
        break;

    case 3:
        if (parent_joint->child != NULL)
        {
            child_joint = parent_joint->child;
            root_joint->child = child_joint;

            do
            {
                child_joint->parent = root_joint;
                child_joint = child_joint->sib_next;
            }
            while (child_joint != NULL);
        }
        parent_joint->child = root_joint;

        root_joint->parent = parent_joint;
        break;
    }
    fp->joints[withheld_part->root_joint_id] = root_joint;

    root_joint->user_data.p = ft_parts = ftManagerGetNextPartsAlloc();

    ft_parts->flags = attributes->commonparts_container->commonparts[fp->detail_current - nFTPartsDetailStart].flags;
    ft_parts->joint_id = withheld_part->root_joint_id;

    if (withheld_part->partindex_0x8 != 0)
    {
        lbCommonInitDObj(root_joint, 0x4B, 0, 0, fp->unk_ft_0x149);
    }
}

// 0x800E6CE0
void ftMainAddWithheldPartID(FTStruct *fp, s32 withheld_part_id)
{
    DObj *new_parent_joint;
    DObj *sibling_joint;
    FTWithheldPart *withheld_part;
    DObj *root_joint;
    DObj *child_joint;
    DObj *new_child_joint;
    DObj *parent_joint;

    withheld_part = &fp->attributes->withheld_parts[withheld_part_id];
    root_joint = fp->joints[withheld_part->root_joint_id];

    if (withheld_part->root_joint_id == nFTPartsJointTransN)
    {
        parent_joint = root_joint->parent;
        child_joint = root_joint->child;
        new_parent_joint = parent_joint;
        new_child_joint = child_joint;

        if (new_child_joint != NULL)
        {
            sibling_joint = root_joint->sib_prev;

            new_child_joint = child_joint;
            child_joint = sibling_joint;

            if (sibling_joint == NULL)
            {
                new_parent_joint->child = new_child_joint;
            }
            else
            {
                child_joint->sib_next = new_child_joint;
                new_child_joint->sib_prev = root_joint->sib_prev;
            }
            child_joint = new_child_joint->sib_next;
            new_child_joint->parent = new_parent_joint;

            while (child_joint != NULL)
            {
                new_child_joint = child_joint;
                child_joint->parent = new_parent_joint;
                child_joint = child_joint->sib_next;
            }

            new_child_joint->sib_next = root_joint->sib_next;
            new_parent_joint = root_joint->sib_next;

            if (new_parent_joint != NULL)
            {
                new_parent_joint->sib_prev = new_child_joint;
            }
        }
        else
        {
            sibling_joint = root_joint->sib_prev;

            if (sibling_joint == NULL)
            {
                new_parent_joint->child = root_joint->sib_next;
            }
            else sibling_joint->sib_next = root_joint->sib_next;

            new_parent_joint = root_joint->sib_next;

            if (new_parent_joint != NULL)
            {
                new_parent_joint->sib_prev = root_joint->sib_prev;
            }
        }
        root_joint->child = NULL;
        root_joint->sib_prev = NULL;
        root_joint->sib_next = NULL;
        root_joint->parent = NULL;

        new_parent_joint = fp->joints[withheld_part->parent_joint_id];

        if (new_parent_joint->child != NULL)
        {
            new_child_joint = new_parent_joint->child;
            root_joint->child = new_parent_joint->child;

            do
            {
                new_child_joint->parent = root_joint;
                new_child_joint = new_child_joint->sib_next;
            } 
            while (new_child_joint != NULL);
        }
        new_parent_joint->child = root_joint;
        root_joint->parent = new_parent_joint;
    }
}

// 0x800E6E00
void ftMainEjectWithheldPartID(FTStruct *fp, s32 withheld_part_id)
{
    FTWithheldPart *withheld_part = &fp->attributes->withheld_parts[withheld_part_id];
    DObj *root_joint = fp->joints[withheld_part->root_joint_id];
    DObj *parent_joint;
    DObj *child_joint;
    DObj *sibling_joint;
    DObj *new_sibling_joint;

    ftManagerSetPrevPartsAlloc(root_joint->user_data.p);

    child_joint = root_joint->child;
    parent_joint = root_joint->parent;

    if (child_joint != NULL)
    {
        sibling_joint = child_joint;

        if (root_joint->sib_prev == NULL)
        {
            parent_joint->child = child_joint;
        }
        else
        {
            root_joint->sib_prev->sib_next = sibling_joint;
            sibling_joint->sib_prev = (child_joint = root_joint)->sib_prev;
        }
        new_sibling_joint = sibling_joint->sib_next;
        sibling_joint->parent = parent_joint;

        while (new_sibling_joint != NULL)
        {
            sibling_joint = new_sibling_joint;
            new_sibling_joint->parent = parent_joint;
            new_sibling_joint = new_sibling_joint->sib_next;
        }
        sibling_joint->sib_next = root_joint->sib_next;
        new_sibling_joint = root_joint->sib_next;

        if (new_sibling_joint != NULL)
        {
            new_sibling_joint->sib_prev = sibling_joint;
        }
    }
    else
    {
        if (root_joint->sib_prev == NULL)
        {
            parent_joint->child = root_joint->sib_next;
        }
        else root_joint->sib_prev->sib_next = root_joint->sib_next;
        
        if (root_joint->sib_next != NULL)
        {
            root_joint->sib_next->sib_prev = root_joint->sib_prev;
        }
    }
    fp->joints[withheld_part->root_joint_id] = NULL;
    root_joint->sib_next = NULL;
    root_joint->sib_prev = NULL;
    root_joint->child = NULL;

    gcEjectDObj(root_joint);
}

// 0x800E6F24
void ftMainSetFighterStatus(GObj *fighter_gobj, s32 status_id, f32 frame_begin, f32 anim_speed, u32 flags)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    intptr_t event_file_head;
    FTAttributes *attributes = fp->attributes;
    FTStatusDesc *status_struct;
    FTOpeningDesc *opening_struct;
    f32 anim_frame;
    s32 status_struct_id;
    s32 anim_desc_update;
    s32 anim_desc_bak;
    s32 unused1;
    GMStatFlags status_flags;
    GMStatFlags attack_flags;
    s32 unused2;
    s32 motion_id;
    void *event_script_ptr;
    DObjDesc *dobjdesc;
    s32 unused3;
    FTStatusDesc *status_desc;
    FTMotionDescArray *script_array;
    FTMotionDesc *script_info;
    DObj *joint;
    DObj *transn_parent;                // Parent of TrasnN_Joint
    DObj *transn_child;                 // Child of TransN_Joint
    s32 i;

    status_struct = NULL;
    opening_struct = NULL;

    status_flags = fp->stat_flags;

    if (fp->is_effect_interrupt)
    {
        ftMainUpdateMotionEventsDefaultEffect(fighter_gobj);

        if (fp->proc_accessory != NULL)
        {
            fp->proc_accessory(fighter_gobj);
        }
    }
    fp->status_id = status_id;

    if (fp->detail_current != fp->detail_default)
    {
        ftParamSetModelPartDetailAll(fighter_gobj, fp->detail_default);
        
        fp->detail_current = fp->detail_default;
    }
    if (!(flags & FTSTATUS_PRESERVE_HIT) && (fp->is_hitbox_active))
    {
        ftParamClearHitAll(fighter_gobj);
    }
    if (!(flags & FTSTATUS_PRESERVE_THROWPOINTER))
    {
        fp->throw_gobj = NULL;
    }
    if (!(flags & FTSTATUS_PRESERVE_HITSTATUS))
    {
        if (fp->is_hitstatus_nodamage)
        {
            ftParamSetHitStatusPartAll(fighter_gobj, nGMHitStatusNormal);
        }
        if (fp->hitstatus != nGMHitStatusNormal)
        {
            ftParamSetHitStatusAll(fighter_gobj, nGMHitStatusNormal);
        }
    }
    if (fp->is_hurtbox_modify)
    {
        ftParamResetFighterHurtPartAll(fighter_gobj);
    }
    if (!(flags & FTSTATUS_PRESERVE_MODELPART) && (fp->is_modelpart_modify))
    {
        ftParamResetModelPartAll(fighter_gobj);
    }
    if (!(flags & FTSTATUS_PRESERVE_TEXTUREPART) && (fp->is_texturepart_modify))
    {
        ftParamResetTexturePartAll(fighter_gobj);
    }
    if (!(flags & FTSTATUS_PRESERVE_COLANIM) && (dFTCommonDataColAnimDescs[fp->colanim.colanim_id].is_unlocked != FALSE))
    {
        ftParamResetStatUpdateColAnim(fighter_gobj);
    }
    if (!(flags & FTSTATUS_PRESERVE_EFFECT) && (fp->is_attach_effect))
    {
        ftParamProcStopEffect(fighter_gobj);
    }
    fp->is_reflect = FALSE;
    fp->is_absorb = FALSE;
    fp->is_shield = FALSE;

    if (!(flags & FTSTATUS_PRESERVE_FASTFALL))
    {
        fp->is_fast_fall = FALSE;
    }

    fp->is_invisible = FALSE;
    fp->is_hide_shadow = FALSE;
    fp->is_rebirth = FALSE;
    fp->is_playertag_hide = FALSE;
    fp->is_playing_effect = FALSE; // Not sure exactly what this is, but it prevents certain ColAnim events from running if true?

    if (fp->pl_kind != nFTPlayerKindDemo)
    {
        gmRumbleSetRumbleID(fp->player, 2);
        gmRumbleSetRumbleID(fp->player, 3);

        if (!(flags & FTSTATUS_PRESERVE_RUMBLE))
        {
            gmRumbleSetRumbleID(fp->player, 7);
        }
        fp->joints[nFTPartsJointTopN]->rotate.vec.f.y = fp->lr * F_CLC_DTOR32(90.0F); // HALF_PI32

        DObjGetStruct(fighter_gobj)->rotate.vec.f.z = 0.0F;

        fp->joints[nFTPartsJointTopN]->rotate.vec.f.x = DObjGetStruct(fighter_gobj)->rotate.vec.f.z;

        fp->physics.vel_air.z = 0.0F;
        fp->physics.vel_ground.z = 0.0F;
    }

    fp->is_ignore_jostle = FALSE;
    fp->is_hitstun = FALSE;

    fp->damage_mul = 1.0F;

    if ((fp->ga == nMPKineticsGround) && !(flags & FTSTATUS_PRESERVE_DAMAGEPLAYER))
    {
        fp->damage_player = -1;
    }
    if (!(flags & FTSTATUS_PRESERVE_SLOPECONTOUR))
    {
        fp->slope_contour = 0;
    }
    fp->coll_data.ignore_line_id = -1;

    fp->is_show_item = TRUE;
    fp->is_cliff_hold = FALSE;

    ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_NONE);

    fp->is_nullstatus = FALSE;
    fp->is_damage_resist = FALSE;
    fp->is_ignore_training_menu = FALSE;

    if (fp->camera_mode != 3)
    {
        fp->camera_mode = 0;
    }
    fp->camera_zoom_range = 1.0F;

    if (!(flags & FTSTATUS_PRESERVE_PLAYERTAG))
    {
        fp->playertag_wait = 0;
    }
    fp->is_special_interrupt = FALSE;
    fp->is_catchstatus = FALSE;
    fp->is_ignore_dead = FALSE;

    if (!(flags & FTSTATUS_PRESERVE_SHUFFLETIME))
    {
        fp->shuffle_tics = 0;
    }
    if (!(flags & FTSTATUS_PRESERVE_LOOPSFX))
    {
        ftParamStopLoopSFX(fp);
    }
    fp->knockback_resist_status = 0.0F;
    fp->damage_stack = 0.0F;

    if (!(flags & FTSTATUS_PRESERVE_AFTERIMAGE))
    {
        fp->afterimage.drawstatus = -1;
    }
    if ((status_id != nFTCommonStatusWait) && (status_id != nFTCommonStatusWalkSlow) && (status_id != nFTCommonStatusWalkMiddle) && (status_id != nFTCommonStatusWalkFast))
    {
        fp->attack1_followup_frames = 0.0F;
    }
    if ((fp->pl_kind != nFTPlayerKindDemo) && (fp->dl_link != FTRENDER_DLLINK_DEFAULT))
    {
        ftParamMoveDLLink(fighter_gobj, 9);
    }
    fp->status_total_tics = 0;

    if (status_id >= FTSTAT_CHARDATA_START) // Check if Character Data status ID
    {
        status_id -= FTSTAT_CHARDATA_START;
    }
    if (status_id >= FTSTAT_OPENING1_START) // Check if Opening status ID 1
    {
        opening_struct = D_ovl1_80390D20[fp->ft_kind];
        status_struct_id = status_id - FTSTAT_OPENING1_START;
    }
    else if (status_id >= FTSTAT_OPENING2_START) // Check if Opening status ID 2
    {
        opening_struct = &D_ovl1_80390BE8;
        status_struct_id = status_id - FTSTAT_OPENING2_START;
    }
    else if (status_id >= nFTCommonStatusSpecialStart)
    {
        status_struct = dFTMainSpecialStatusDescs[fp->ft_kind];
        status_struct_id = status_id - nFTCommonStatusSpecialStart;
    }
    else if (status_id >= nFTCommonStatusActionStart)
    {
        status_struct = dFTCommonActionStatusDescs;
        status_struct_id = status_id - nFTCommonStatusActionStart;
    }
    else
    {
        status_struct = dFTCommonNullStatusDescs;
        status_struct_id = status_id;
    }
    status_desc = &status_struct[status_struct_id];

    if (fp->pl_kind != nFTPlayerKindDemo)
    {
        if ((status_struct[status_struct_id].mflags.motion_attack_id == nFTMotionAttackIDNone) || (status_struct[status_struct_id].mflags.motion_attack_id != fp->attack_id))
        {
            ftParamSetMotionID(fp, status_struct[status_struct_id].mflags.motion_attack_id);
        }
        attack_flags = status_desc->sflags;

        if ((attack_flags.stat_attack_id == nFTStatusAttackIDNone) || (attack_flags.stat_attack_id != fp->stat_flags.stat_attack_id))
        {
            ftParamSetStatUpdate(fp, status_struct[status_struct_id].sflags.halfword);
        }
    }
    if (fp->proc_status != NULL)
    {
        fp->proc_status(fighter_gobj);
        fp->proc_status = NULL;
    }
    ftParamUpdate1PGameAttackStats(fp, status_flags.halfword);

    if (status_struct != NULL)
    {
        motion_id = status_struct[status_struct_id].mflags.motion_id;
        fp->motion_id = motion_id;
        script_array = fp->ft_data->mainmotion;
    }
    else
    {
        motion_id = opening_struct[status_struct_id].motion_id - 0x10000;
        fp->motion_id = motion_id;
        script_array = fp->ft_data->submotion;
    }
    if ((motion_id != -1) && (motion_id != -2))
    {
        script_info = &script_array->script_info[motion_id];

        if (script_info->anim_desc.flags.is_use_shieldpose)
        {
            fp->figatree = (void*)((intptr_t)script_info->anim_file_id + (uintptr_t)fp->ft_data->p_file_shieldpose);
        }
        else if (script_info->anim_file_id != 0)
        {
            lbRelocGetFileExternForceStatusBufferHeap(script_info->anim_file_id, (void*)fp->figatree_heap);
            fp->figatree = fp->figatree_heap;
        }
        else fp->figatree = NULL;
        
        if (fp->figatree != NULL)
        {
            anim_desc_bak = fp->anim_desc.word & 0xFFFFFFE0;
            fp->anim_desc.word = script_info->anim_desc.word;
            anim_desc_update = fp->anim_desc.word & 0xFFFFFFE0;

            for (i = 0; ((anim_desc_bak != 0) || (anim_desc_update != 0)); i++, anim_desc_update <<= 1, anim_desc_bak <<= 1)
            {
                if (!(anim_desc_bak & (1 << 31)))
                {
                    if (anim_desc_update & (1 << 31))
                    {
                        ftMainUpdateWithheldPartID(fp, i);
                    }
                }
                else if (anim_desc_update & (1 << 31))
                {
                    ftMainAddWithheldPartID(fp, i);
                }
                else ftMainEjectWithheldPartID(fp, i);
            }

            dobjdesc = attributes->commonparts_container->commonparts[fp->detail_current - nFTPartsDetailStart].dobjdesc;

            for (i = nFTPartsJointCommonStart; dobjdesc->index != DOBJ_ARRAY_MAX; i++, dobjdesc++)
            {
                joint = fp->joints[i];

                if (joint != NULL)
                {
                    joint->translate.vec.f = dobjdesc->translate;

                    joint->rotate.vec.f = dobjdesc->rotate;

                    joint->scale.vec.f = dobjdesc->scale;

                    joint->flags = DOBJ_FLAG_NONE;
                }
            }
            if (fp->anim_desc.flags.is_use_transn_joint)
            {
                joint = fp->joints[nFTPartsJointTransN];
                
                joint->translate.vec.f.x = joint->translate.vec.f.y = joint->translate.vec.f.z = 0.0F;

                joint->rotate.vec.f.z = 0.0F;

                joint->flags = DOBJ_FLAG_NONE;
            }
            if (fp->anim_desc.flags.is_use_xrotn_joint)
            {
                joint = fp->joints[nFTPartsJointXRotN];

                joint->translate.vec.f.x = joint->translate.vec.f.y = joint->translate.vec.f.z = 0.0F;
                
                joint->rotate.vec.f.x = joint->rotate.vec.f.y = joint->rotate.vec.f.z = 0.0F; 
                
                joint->scale.vec.f.x = joint->scale.vec.f.y = joint->scale.vec.f.z = 1.0F;

                joint->flags = DOBJ_FLAG_NONE;
            }
            if (fp->anim_desc.flags.is_use_yrotn_joint)
            {
                joint = fp->joints[nFTPartsJointYRotN];

                joint->translate.vec.f.x = joint->translate.vec.f.y = joint->translate.vec.f.z = 0.0F;

                joint->rotate.vec.f.x = joint->rotate.vec.f.y = joint->rotate.vec.f.z = 0.0F;

                joint->scale.vec.f.x = joint->scale.vec.f.y = joint->scale.vec.f.z = 1.0F;

                joint->flags = DOBJ_FLAG_NONE;
            }
            lbCommonAddFighterPartsFigatree(fp->joints[nFTPartsJointTopN]->child, fp->figatree, frame_begin);

            if (anim_speed != DObjGetStruct(fighter_gobj)->anim_speed)
            {
                gcSetAnimSpeed(fighter_gobj, anim_speed);
            }
            if (fp->anim_desc.flags.is_use_transn_joint)
            {
                joint = fp->joints[nFTPartsJointTransN];

                transn_parent = joint->parent;
                transn_child = joint->child;
                transn_parent->child = transn_child;
                transn_child->parent = transn_parent;
                transn_child->sib_next = joint;
                joint->sib_prev = transn_child;
                joint->parent = transn_child->parent;
                joint->child = NULL;
            }

            if (fp->is_use_animlocks)
            {
                if (!(fp->anim_desc.flags.is_use_animlocks))
                {
                    ftParamSetAnimLocks(fp);
                }
            }
            else if (fp->anim_desc.flags.is_use_animlocks)
            {
                ftParamClearAnimLocks(fp);
            }
            fp->is_use_animlocks = fp->anim_desc.flags.is_use_animlocks;

            if (attributes->translate_scales != NULL)
            {
                if (fp->anim_desc.flags.is_have_translate_scale)
                {
                    fp->is_have_translate_scale = FALSE;
                }
                else fp->is_have_translate_scale = TRUE;
            }
        }
        if (status_struct != NULL)
        {
            if (script_info->offset != 0x80000000)
            {
                // Actually subaction scripts?
                if (fp->anim_desc.flags.is_use_submotion_script)
                {
                    event_file_head = *fp->ft_data->p_file_submotion;

                    event_script_ptr = (void*)((intptr_t)script_info->offset + (intptr_t)event_file_head);
                }
                else
                {
                    event_file_head = *fp->ft_data->p_file_mainmotion;

                    event_script_ptr = (void*)((intptr_t)script_info->offset + (intptr_t)event_file_head);
                }
            }
            else event_script_ptr = NULL;

            fp->motion_script[0][0].p_script = fp->motion_script[1][0].p_script = event_script_ptr;
        }
        else
        {
            if (script_info->offset != 0x80000000)
            {
                event_script_ptr = (void*)script_info->offset;
            }
            else event_script_ptr = NULL;

            fp->motion_script[0][0].p_script = fp->motion_script[1][0].p_script = event_script_ptr;
        }
        anim_frame = DObjGetStruct(fighter_gobj)->anim_speed - frame_begin;

        fp->motion_script[0][0].frame_timer = fp->motion_script[1][0].frame_timer = anim_frame;

        fp->motion_script[0][0].script_id = fp->motion_script[1][0].script_id = 0;

        for (i = 1; i < ARRAY_COUNT(fp->motion_script); i++)
        {
            fp->motion_script[0][i].p_script = fp->motion_script[1][i].p_script = NULL;
        }

        if (frame_begin != 0.0F)
        {
            ftMainPlayAnimDefault(fighter_gobj);
        }
        else
        {
            ftMainPlayAnimNoEffect(fighter_gobj);
            ftMainRunUpdateColAnim(fighter_gobj);
        }
    }
    else for (i = 0; i < ARRAY_COUNT(fp->motion_script); i++)
    {
        fp->motion_script[0][i].p_script = fp->motion_script[1][i].p_script = NULL;
    }
    if (fp->pl_kind != nFTPlayerKindDemo)
    {
        fp->proc_update = status_struct[status_struct_id].proc_update;
        fp->proc_interrupt = status_struct[status_struct_id].proc_interrupt;
        fp->proc_physics = status_struct[status_struct_id].proc_physics;
        fp->proc_map = status_struct[status_struct_id].proc_map;
        fp->proc_slope = mpCommonUpdateFighterSlopeContour;
        fp->proc_accessory = NULL;
        fp->proc_damage = NULL;
        fp->proc_trap = NULL;
        fp->proc_hit = NULL;
        fp->proc_shield = NULL;
        fp->proc_effect = NULL;
        fp->proc_lagupdate = NULL;
        fp->proc_lagstart = NULL;
        fp->proc_lagend = NULL;
    }
    else if (opening_struct != NULL)
    {
        fp->proc_update = opening_struct[status_struct_id].proc_update;
    }
    else fp->proc_update = NULL;
}
