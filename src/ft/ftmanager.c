/*

#include <ft/fighter.h>
#include <gm/battle.h>
#include <sys/develop.h>
#include <ovl0/reloc_data_mgr.h>

extern RldmFileSize D_800A50F8[nFTKindEnumMax];
extern intptr_t D_NF_00000854;
extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_000000A3;
extern intptr_t D_NF_000000C9;

// 0x80130D80
ftStruct *sFTManagerFighterAllocFree;

// 0x80130D84
ftStruct *sFTManagerFighterAllocBuf;

// 0x80130D88
ftParts *sFTManagerPartsAllocFree;

// 0x80130D8C
ftParts *sFTManagerPartsAllocBuf;

// 0x80130D90
u32 gFTManagerBattlePlayerNum;

// 0x80130D94
u16 gFTManagerMotionCount;

// 0x80130D96
u16 gFTManagerStatUpdateCount;

// 0x80130D98
void *gFTCommonFile;

// 0x80130D9C
size_t gFTAnimHeapSize;

// 0x80130DA0
rdFileNode sFTManagerForceBuf[7];

// 0x80116E10
ftData *dFTManagerDataFiles[] =
{
    D_ovl2_80117810,
    D_ovl2_801196F4,
    D_ovl2_8011AC8C,
    D_ovl2_8011CC78,
    D_ovl2_8011E0A0,
    D_ovl2_8011F520,
    D_ovl2_801209D0,
    D_ovl2_80121E98,
    D_ovl2_80123680,
    D_ovl2_80124CE4,
    D_ovl2_8012617C,
    D_ovl2_801276A0,
    D_ovl2_80128C7C,
    D_ovl2_80118220,
    D_ovl2_80118C30,
    D_ovl2_8011A1B4,
    D_ovl2_8011B76C,
    D_ovl2_8011D698,
    D_ovl2_8011EAB0,
    D_ovl2_8011FF90,
    D_ovl2_80121410,
    D_ovl2_80122918,
    D_ovl2_8012427C,
    D_ovl2_8012572C,
    D_ovl2_80126BCC,
    D_ovl2_80128170,
    D_ovl2_8011C24C
};

// 0x800D6FE0
void ftManagerSetupFileSize(void)
{
    s32 i, j;
    size_t largest_size;
    size_t current_anim_size;
    ftData *ft_data;
    RldmFileSize *rldm_size;
    rdSetup rldm_setup;
    ftScriptInfo *script_info;

    rldm_setup.tableRomAddr = &D_NF_001AC870;
    rldm_setup.tableFileCount = &D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = NULL;
    rldm_setup.statusBufSize = 0;
    rldm_setup.forceBuf = sFTManagerForceBuf;
    rldm_setup.forceBufSize = ARRAY_COUNT(sFTManagerForceBuf);

    rdManagerInitSetup(&rldm_setup);

    for (i = 0; i < ARRAY_COUNT(dFTManagerDataFiles); i++)
    {
        rldm_size = &D_800A50F8[i];
        ft_data = dFTManagerDataFiles[i];

        largest_size = 0;

        rldm_size->file_size = rdManagerGetFileSize(ft_data->file_main_id);

        for (j = 0; j < ft_data->battlemotion_array_count; j++)
        {
            script_info = &ft_data->battlemotion->script_info[j];

            current_anim_size = ft_data->battlemotion->script_info[j].anim_id;

            if (script_info->anim_id != 0)
            {
                if (!(script_info->anim_flags.flags.x19B_flag_b6))
                {
                    current_anim_size = rdManagerGetFileSize(script_info->anim_id);

                    if (largest_size < current_anim_size)
                    {
                        largest_size = current_anim_size;
                    }
                }
            }
        }
        rldm_size->largest_size1 = largest_size;

        for (j = 0; j < *ft_data->submotion_array_count; j++)
        {
            script_info = &ft_data->submotion->script_info[j];

            current_anim_size = ft_data->submotion->script_info[j].anim_id;

            if (script_info->anim_id != 0)
            {
                if (!(script_info->anim_flags.flags.x19B_flag_b6))
                {
                    current_anim_size = rdManagerGetFileSize(script_info->anim_id);

                    if (largest_size < current_anim_size)
                    {
                        largest_size = current_anim_size;
                    }
                }
            }
        }
        rldm_size->largest_size2 = largest_size;
    }
}

// 0x800D7194
void ftManagerAllocFighter(u32 data_flags, s32 alloc_count)
{
    size_t largest_size;
    s32 i;
    size_t current_size;
    ftData *ft_data;
    RldmFileSize *rldm_size;
    size_t heap_size;

    heap_size = 0;

    sFTManagerFighterAllocBuf = sFTManagerFighterAllocFree = gsMemoryAlloc(sizeof(ftStruct) * alloc_count, 0x8);

    _bzero(sFTManagerFighterAllocBuf, sizeof(ftStruct) * alloc_count);

    for (i = 0; i < (alloc_count - 1); i++)
    {
        sFTManagerFighterAllocBuf[i].alloc_next = &sFTManagerFighterAllocBuf[i + 1];
    }
    sFTManagerFighterAllocBuf[i].alloc_next = NULL;

    sFTManagerPartsAllocFree = sFTManagerPartsAllocBuf = gsMemoryAlloc(sizeof(ftParts) * alloc_count * FTPARTS_JOINT_NUM_MAX, 0x8);

    for (i = 0; i < ((alloc_count * FTPARTS_JOINT_NUM_MAX) - 1); i++)
    {
        sFTManagerPartsAllocBuf[i].alloc_next = &sFTManagerPartsAllocBuf[i + 1];
    }
    sFTManagerPartsAllocBuf[i].alloc_next = NULL;

    gFTManagerBattlePlayerNum = 1;
    gFTManagerMotionCount = 1;
    gFTManagerStatUpdateCount = 1;

    gFTCommonFile = rdManagerGetFileWithExternHeap((u32)&D_NF_000000A3, gsMemoryAlloc(rdManagerGetFileSize((u32)&D_NF_000000A3), 0x10));

    rdManagerGetFileWithExternHeap((u32)&D_NF_000000C9, gsMemoryAlloc(rdManagerGetFileSize((u32)&D_NF_000000C9), 0x10));

    for (i = 0; i < (ARRAY_COUNT(dFTManagerDataFiles) + ARRAY_COUNT(D_800A50F8)) / 2; i++)
    {
        ft_data = dFTManagerDataFiles[i];
        rldm_size = &D_800A50F8[i];

        largest_size = 0;

        *ft_data->p_file_main = NULL;

        ft_data->file_main_size = rldm_size->file_size;

        if (data_flags & FTDATA_FLAG_ANIM_GAME)
        {
            current_size = rldm_size->largest_size1;

            if (current_size != 0)
            {
                largest_size = current_size;
            }
        }
        if (data_flags & FTDATA_FLAG_ANIM_MOVIE)
        {
            current_size = rldm_size->largest_size2;

            if (largest_size < current_size)
            {
                largest_size = current_size;
            }
        }
        ft_data->file_anim_size = largest_size;

        if (heap_size < ft_data->file_anim_size)
        {
            heap_size = ft_data->file_anim_size;
        }
    }
    gFTAnimHeapSize = heap_size;

    if (data_flags & FTDATA_FLAG_ANIM_MOVIE)
    {
        func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);
    }
}

// 0x800D7594
ftStruct* ftManagerGetStructSetNextAlloc(void)
{
    ftStruct *current_fighter;
    ftStruct *next_fighter = sFTManagerFighterAllocFree;

    if (next_fighter == NULL)
    {
        while (TRUE)
        {
            gsFatalPrintF("couldn\'t get Fighter struct.\n");
            smRunPrintGObjStatus();
        }
    }
    else current_fighter = next_fighter;

    sFTManagerFighterAllocFree = next_fighter->alloc_next;

    return current_fighter;
}

// 0x800D75EC
void ftManagerSetPrevAlloc(ftStruct *fp)
{
    fp->alloc_next = sFTManagerFighterAllocFree;
    sFTManagerFighterAllocFree = fp;
}

// 0x800D7604
ftParts* ftManagerGetFighterPartsSetNextAlloc(void)
{
    ftParts *current_ftpart;
    ftParts *next_ftpart;

    next_ftpart = sFTManagerPartsAllocFree;

    if (next_ftpart == NULL)
    {
        while (TRUE)
        {
            gsFatalPrintF("couldn\'t get FighterParts struct.\n");
            smRunPrintGObjStatus();
        }
    }
    current_ftpart = next_ftpart;

    sFTManagerPartsAllocFree = next_ftpart->alloc_next;

    next_ftpart->transform_update_mode =
    next_ftpart->unk_dobjtrans_0x5 =
    next_ftpart->unk_dobjtrans_0x7 = 0;
    next_ftpart->unk_dobjtrans_0x6 = 0;

    next_ftpart->ftparts_gobj = NULL;
    next_ftpart->unk_dobjtrans_0xE = 0;

    return current_ftpart;
}

// 0x800D767C
void ftManagerSetFighterPartsPrevAlloc(ftParts *ft_parts)
{
    ft_parts->alloc_next = sFTManagerPartsAllocFree;
    sFTManagerPartsAllocFree = ft_parts;
}

// 0x800D7694
void ftManagerSetupDataMain(s32 ft_kind)
{
    ftData *ft_data = dFTManagerDataFiles[ft_kind];

    *ft_data->p_file_main = rdManagerGetFileWithExternHeap(ft_data->file_main_id, gsMemoryAlloc(rdManagerGetFileSize(ft_data->file_main_id), 0x10));

    if (ft_data->o_particles1 != 0)
    {
        *ft_data->p_particle = efAlloc_SetParticleBank(ft_data->o_particles1, ft_data->o_particles2, ft_data->o_particles3, ft_data->o_particles4);
    }
}

// 0x800D7710
void ftManagerSetupDataFiles(s32 ft_kind)
{
    ftData *ft_data = dFTManagerDataFiles[ft_kind];

    if (ft_data->file_battlemotion_id != 0)
    {
        *ft_data->p_file_battlemotion = rldm_get_file_standard(ft_data->file_battlemotion_id);
    }

    if (ft_data->file_submotion_id != 0)
    {
        *ft_data->p_file_submotion = rldm_get_file_standard(ft_data->file_submotion_id);
    }

    *ft_data->p_file_model = rldm_get_file_standard(ft_data->file_model_id);

    if (ft_data->file_shieldpose_id != 0)
    {
        ft_data->p_file_shieldpose = rldm_get_file_standard(ft_data->file_shieldpose_id);
    }
    if (ft_data->file_special1_id != 0)
    {
        *ft_data->p_file_special1 = rldm_get_file_standard(ft_data->file_special1_id);
    }
    if (ft_data->file_special2_id != 0)
    {
        *ft_data->p_file_special2 = rldm_get_file_standard(ft_data->file_special2_id);
    }
    if (ft_data->file_special3_id != 0)
    {
        *ft_data->p_file_special3 = rldm_get_file_standard(ft_data->file_special3_id);
    }
    if (ft_data->file_special4_id != 0)
    {
        *ft_data->p_file_special4 = rldm_get_file_standard(ft_data->file_special4_id);
    }
    if (ft_data->o_particles1 != 0)
    {
        *ft_data->p_particle = func_ovl2_801159B0(ft_data->o_particles1);
    }
}

// 0x800D782C
void ftManagerSetupDataPlayables(void)
{
    s32 i;

    for (i = 0; i <= nFTKindPlayableEnd; i++)
    {
        ftManagerSetupDataFiles(i);
    }
}

// 0x800D786C
void ftManagerSetupDataKind(s32 ft_kind)
{
    ftData *ft_data = dFTManagerDataFiles[ft_kind];

    if (*ft_data->p_file_main == NULL)
    {
        ftManagerSetupDataMain(ft_kind);
        ftManagerSetupDataFiles(ft_kind);
    }
}

// 0x800D78B4
void* ftManagerAllocAnimHeapKind(s32 ft_kind)
{
    ftData *ft_data = dFTManagerDataFiles[ft_kind];

    return gsMemoryAlloc(ft_data->file_anim_size, 0x10);
}

// 0x800D78E8
void ftManagerDestroyFighter(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 i;

    if (fp->is_attach_effect)
    {
        ftCommon_ProcStopGFX(fighter_gobj);
    }
    for (i = 0; i < ARRAY_COUNT(fp->joint); i++)
    {
        if (fp->joint[i] != NULL)
        {
            ftParts *ft_parts = fp->joint[i]->user_data.p;

            if (ft_parts->ftparts_gobj != NULL)
            {
                omEjectGObj(ft_parts->ftparts_gobj);
            }
            ftManagerSetFighterPartsPrevAlloc(ft_parts);
        }
    }
    ftManagerSetPrevAlloc(fp);
    omEjectGObj(fighter_gobj);
}

// 0x800D7994
void func_ovl2_800D7994(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    switch (fp->ft_kind)
    {
    case nFTKindKirby:
    case nFTKindPolyKirby:
        ftKirbyCopyLinkSpecialNDestroyBoomerang(fighter_gobj);
        break;

    case nFTKindLink:
    case nFTKindPolyLink:
        ftLinkSpecialNDestroyBoomerang(fighter_gobj);
        break;
    }
}

extern intptr_t lFTKirbySpecialNCopyData;
extern void *gFTDataKirbyBattleMotion; // Pointer to fighter files?

// 0x800D79F0
void ftManagerInitFighter(GObj *fighter_gobj, ftCreateDesc *spawn)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    f32 scale;

    fp->lr = spawn->lr_spawn;
    fp->percent_damage = spawn->damage;

    if (fp->status_info.pl_kind != nFTPlayerKindDemo)
    {
        gBattleState->players[fp->player].stock_damage_all = fp->percent_damage;
    }
    fp->shield_health = (fp->ft_kind == nFTKindYoshi) ? 55 : 55;

    fp->unk_ft_0x38 = 0.0F;
    fp->hitlag_timer = 0;
    fp->x192_flag_b6 = FALSE;

    ftPhysics_StopVelAll(fighter_gobj);

    fp->jumps_used = 0;
    fp->is_reflect = FALSE;
    fp->is_absorb = FALSE;
    fp->is_shield = FALSE;
    fp->is_attach_effect = FALSE;
    fp->is_ignore_jostle = FALSE;

    fp->cliffcatch_wait = 0;
    fp->time_since_last_z = 0;

    fp->acid_wait = fp->twister_wait = fp->tarucann_wait = fp->damagefloor_wait = 0;

    fp->unk_ft_0x7AC = 0;
    fp->attack_damage = 0;
    fp->attack_hit_count = 0;
    fp->attack_shield_push = 0;
    fp->shield_damage = 0;
    fp->damage_lag = 0;
    fp->damage_queue = 0;
    fp->damage_player = -1;
    fp->damage_object_class = 0;
    fp->damage_object_kind = 0;
    fp->damage_count = 0;
    fp->damage_kind = 0;
    fp->damage_heal = 0;
    fp->damage_joint_id = 0;
    fp->invincible_timer = 0;
    fp->intangible_timer = 0;
    fp->star_invincible_timer = 0;

    fp->hitstatus = nGMHitStatusNormal;
    fp->star_hitstatus = nGMHitStatusNormal;
    fp->special_hitstatus = nGMHitStatusNormal;

    fp->throw_gobj = NULL;
    fp->catch_gobj = NULL;
    fp->capture_gobj = NULL;
    fp->x192_flag_b3 = FALSE;

    fp->item_hold = NULL;

    fp->lr_reflect = LR_Center;
    fp->lr_absorb = LR_Center;

    fp->reflect_damage = 0;

    fp->special_hit = NULL;

    fp->attack1_followup_frames = 0.0F;
    fp->unk_ft_0x7A0 = 0.0F;
    fp->attack_knockback = 0.0F;
    fp->attack_rebound = 0.0F;
    fp->damage_stack = 0.0F;
    fp->knockback_resist_status = 0.0F;
    fp->knockback_resist_passive = 0.0F;
    fp->damage_knockback = 0.0F;
    fp->hitlag_mul = 1.0F;
    fp->shield_lifeup_wait = 10.0F;

    fp->is_fast_fall = FALSE;

    fp->player_number = gFTManagerBattlePlayerNum++;

    fp->publicity_knockback = 0.0F;

    fp->is_hitstun = FALSE;
    fp->is_parts_anim_lock = FALSE;

    fp->shuffle_frame_index = fp->shuffle_index_max = 0;

    fp->is_use_fogcolor = FALSE;

    fp->is_shuffle_electric = FALSE;
    fp->shuffle_timer = 0;

    fp->attack_id = nFTMotionAttackIDNone;
    fp->motion_count = 0;
    fp->stat_flags.stat_attack_id = nFTStatusAttackIDNone;
    fp->stat_flags.is_smash_attack = fp->stat_flags.is_ga = fp->stat_flags.is_projectile = FALSE;

    fp->stat_count = fp->damage_stat_count = 0;
    fp->damage_stat_flags = fp->stat_flags;

    fp->afterimage.desc_index = 0;

    DObjGetStruct(fighter_gobj)->translate.vec.f = spawn->pos;
    DObjGetStruct(fighter_gobj)->scale.vec.f.x = DObjGetStruct(fighter_gobj)->scale.vec.f.y = DObjGetStruct(fighter_gobj)->scale.vec.f.z = attributes->size_mul;

    if (fp->status_info.pl_kind != nFTPlayerKindDemo)
    {
        sb32 is_collide_ground = func_ovl2_800F9348(&DObjGetStruct(fighter_gobj)->translate.vec.f, &fp->coll_data.ground_line_id, &fp->coll_data.ground_dist, &fp->coll_data.ground_flags, &fp->coll_data.ground_angle.x);

        if (is_collide_ground == FALSE)
        {
            fp->coll_data.ground_line_id = -1;
        }
        if ((is_collide_ground != FALSE) && (fp->coll_data.ground_dist > -300.0F) && (fp->ft_kind != nFTKindMasterHand))
        {
            fp->ga = nMPKineticsGround;

            DObjGetStruct(fighter_gobj)->translate.vec.f.y += fp->coll_data.ground_dist;

            fp->coll_data.ground_dist = 0;
        }
        else
        {
            fp->ga = nMPKineticsAir;
            fp->jumps_used = 1;
        }
    }
    else
    {
        fp->ga = nMPKineticsAir;
        fp->jumps_used = 1;
    }

    fp->coll_data.pos_curr = DObjGetStruct(fighter_gobj)->translate.vec.f;

    switch (fp->ft_kind)
    {
    case nFTKindMetalMario:
        fp->knockback_resist_passive = 30.0F;

    case nFTKindMario:
    case nFTKindPolyMario:
        fp->fighter_vars.mario.is_expend_tornado = FALSE;
        break;

    case nFTKindGiantDonkey:
        fp->knockback_resist_passive = 48.0F;

    case nFTKindDonkey:
    case nFTKindPolyDonkey:
        fp->fighter_vars.donkey.charge_level = 0;
        break;

    case nFTKindSamus:
    case nFTKindPolySamus:
        fp->fighter_vars.samus.charge_level = 0;
        fp->fighter_vars.samus.charge_recoil = 0;
        break;

    case nFTKindLuigi:
    case nFTKindPolyLuigi:
        fp->fighter_vars.mario.is_expend_tornado = FALSE;
        break;

    case nFTKindCaptain:
    case nFTKindPolyCaptain:
        fp->fighter_vars.captain.falcon_punch_unk = 0;
        break;

    case nFTKindKirby:
    case nFTKindPolyKirby:
        fp->fighter_vars.kirby.copy_id = spawn->copy_kind;

        fp->fighter_vars.kirby.copysamus_charge_level = 0;
        fp->fighter_vars.kirby.copysamus_charge_recoil = 0;
        fp->fighter_vars.kirby.copydonkey_charge_level = 0;
        fp->fighter_vars.kirby.copycaptain_falcon_punch_unk = 0;
        fp->fighter_vars.kirby.copypurin_unk = 0;
        fp->fighter_vars.kirby.copylink_boomerang_gobj = NULL;

        if (spawn->copy_kind == nFTKindKirby)
        {
            fp->fighter_vars.kirby.is_ignore_losecopy = FALSE;
        }
        else fp->fighter_vars.kirby.is_ignore_losecopy = TRUE;

        if (fp->ft_kind == nFTKindKirby)
        {
            ftKirbyCopy *copy_data = (ftKirbyCopy*) ((uintptr_t)gFTDataKirbyBattleMotion + (intptr_t)&lFTKirbySpecialNCopyData);

            ftCommon_SetModelPartRenderStateIndex(fighter_gobj, 6, copy_data[fp->fighter_vars.kirby.copy_id].copy_hat_rs);
        }
        break;

    case nFTKindLink:
    case nFTKindPolyLink:
        fp->fighter_vars.link.boomerang_gobj = NULL;

        ftCommon_SetModelPartRenderStateIndex(fighter_gobj, 0x15, -1);
        ftCommon_SetModelPartRenderStateIndex(fighter_gobj, 0x13, 0);
        break;

    case nFTKindPurin:
    case nFTKindPolyPurin:
        fp->fighter_vars.purin.unk_0x0 = 0;
        break;

    case nFTKindMasterHand:
        fp->fighter_vars.boss.p = &fp->fighter_vars.boss.s;
        fp->fighter_vars.boss.p->wait_div = 1.0F;
        fp->fighter_vars.boss.p->status_index = -1;
        fp->fighter_vars.boss.p->status_index_random = -1;
        fp->fighter_vars.boss.p->status_index_guard = 0;

        if (fp->status_info.pl_kind != nFTPlayerKindDemo)
        {
            ftBoss_Common_SetNextAttackWait(fighter_gobj);
            ftBoss_Common_SetDefaultLineID(fighter_gobj);
        }
        break;
    }
    ftCommon_ClearHitAll(fighter_gobj);
    ftCommon_SetHitStatusPartAll(fighter_gobj, nGMHitStatusNormal);
    ftCommon_ResetColAnim(fighter_gobj);
}

// 0x800D7F3C
GObj* ftManagerMakeFighter(ftCreateDesc *spawn) // Create fighter
{
    ftStruct *fp;
    GObj *fighter_gobj;
    s32 i;
    ftParts *ftparts;
    ftAttributes *attributes;
    s32 unused;
    DObj *topn_joint;
    ftMesh *ftmesh;

    fighter_gobj = omMakeGObjSPAfter(nOMObjCommonKindFighter, NULL, GObj_LinkID_Fighter, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(fighter_gobj, spawn->proc_render, 9, GOBJ_DLLINKORDER_DEFAULT, -1);

    fp = ftManagerGetStructSetNextAlloc();

    fighter_gobj->user_data.p = fp;

    fp->status_info.pl_kind = spawn->pl_kind;
    fp->fighter_gobj = fighter_gobj;
    fp->ft_kind = spawn->ft_kind;
    fp->ft_data = dFTManagerDataFiles[fp->ft_kind];
    attributes = fp->attributes = (ftAttributes*) ((uintptr_t)*fp->ft_data->p_file_main + (intptr_t)fp->ft_data->o_attributes);
    fp->anim_load = spawn->anim_heap;
    fp->team = spawn->team;
    fp->player = spawn->player;
    fp->stock_count = spawn->stock_count;

    if (fp->status_info.pl_kind != nFTPlayerKindDemo)
    {
        gBattleState->players[fp->player].stock_count = spawn->stock_count;
    }
    fp->detail_current = fp->detail_default = spawn->model_lod;

    fp->costume = spawn->costume;
    fp->shade = spawn->shade;

    fp->shade_color.r = (attributes->shade_color[fp->shade - 1].r * attributes->shade_color[fp->shade - 1].a) / 0xFF;
    fp->shade_color.g = (attributes->shade_color[fp->shade - 1].g * attributes->shade_color[fp->shade - 1].a) / 0xFF;
    fp->shade_color.b = (attributes->shade_color[fp->shade - 1].b * attributes->shade_color[fp->shade - 1].a) / 0xFF;

    fp->handicap = spawn->handicap;
    fp->cp_level = spawn->cp_level;

    fp->unk_0x178 = 0;
    fp->x3C_unk = 0;
    fp->anim_flags.word = 0;

    fp->p_sfx = NULL;
    fp->sfx_id = 0;
    fp->p_voice = NULL;
    fp->voice_id = 0;
    fp->p_loop_sfx = NULL;
    fp->loop_sfx_id = 0;

    fp->effect_joint_array_id = 0;

    fp->is_invisible = FALSE;
    fp->x18E_flag_b0 = FALSE;

    fp->display_mode = nDBDisplayModeMaster;

    fp->is_playing_sfx = FALSE;
    fp->is_effect_interrupt = FALSE;

    fp->proc_status = NULL;

    fp->unk_ft_0x149 = spawn->unk_rebirth_0x1C;
    fp->team_order = spawn->team_order;
    fp->dl_link = 9;

    fp->is_ignore_magnify = spawn->is_skip_magnify;

    fp->status_info.status_time_spent = 0;

    fp->camera_zoom_frame = attributes->camera_zoom;
    fp->camera_zoom_range = 1.0F;

    fp->is_playertag_bossend = FALSE;
    fp->is_ignore_blastzone = FALSE;

    fp->is_have_translate_scale = (attributes->translate_scales != NULL) ? TRUE : FALSE;

    for (i = 0; i < ARRAY_COUNT(fp->joint); i++)
    {
        fp->joint[i] = NULL;
    }
    topn_joint = omAddDObjForGObj(fighter_gobj, NULL);
    fp->joint[nFTPartsJointTopN] = topn_joint;

    func_ovl0_800C89BC(topn_joint, 0x4B, 0, 0);

    fp->joint[nFTPartsJointTopN]->ommtx[0]->unk05 = spawn->unk_rebirth_0x1D;

    func_ovl0_800C8DB4(fighter_gobj->obj, attributes->dobj_desc_container, fp->detail_current, &fp->joint[nFTPartsJointEnumMax], attributes->unk_ftca_0x29C, 0x4B, 0, 0, fp->costume, fp->unk_ft_0x149);

    for (i = 0; i < ARRAY_COUNT(fp->joint); i++)
    {
        if (fp->joint[i] != NULL)
        {
            fp->joint[i]->user_data.p = ftManagerGetFighterPartsSetNextAlloc();

            ftparts = fp->joint[i]->user_data.p;
            ftparts->unk_0xC = attributes->dobj_desc_container->dobj_desc_array[fp->detail_current - 1].unk_dobjcontain_0xC;
            ftparts->joint_id = i;

            if (fp->costume != 0)
            {
                if ((attributes->mesh != NULL) && (i == attributes->mesh->joint_id))
                {
                    ftmesh = attributes->mesh;

                    ftparts->ftparts_gobj = omMakeGObjSPAfter(nOMObjCommonKindFighterParts, NULL, GObj_LinkID_FighterParts, GOBJ_LINKORDER_DEFAULT);

                    omAddDObjForGObj(ftparts->ftparts_gobj, ftmesh->dl);
                    func_ovl0_800C8CB8(ftparts->ftparts_gobj->obj, ftmesh->unk_ftdobj_0x8, ftmesh->unk_ftdobj_0xC, 0, fp->costume);
                }
            }
        }
    }
    for (i = nFTPartsJointEnumMax; i < ARRAY_COUNT(fp->joint); i++)
    {
        if (fp->joint[i] != NULL)
        {
            fp->joint_render_state[i - nFTPartsJointEnumMax].render_state_b0 = 
            fp->joint_render_state[i - nFTPartsJointEnumMax].render_state_b1 = (fp->joint[i]->display_ptr != NULL) ? 0 : -1;
        }
    }
    for (i = 0; i < ARRAY_COUNT(fp->texture_render_state); i++)
    {
        fp->texture_render_state[i].frame_index_default = fp->texture_render_state[i].frame_index_current = 0;
    }

    ftParamSetPartsAnimLock(fp);

    fp->input.pl.stick_range.x = fp->input.pl.stick_range.y = fp->input.pl.stick_prev.x = fp->input.pl.stick_prev.y = fp->input.cp.stick_range.x = fp->input.cp.stick_range.y = 0;
    fp->input.pl.button_hold = fp->input.pl.button_tap = fp->input.cp.button_inputs = 0;

    fp->input.controller = spawn->controller;

    fp->input.button_mask_a = spawn->button_mask_a;
    fp->input.button_mask_b = spawn->button_mask_b;
    fp->input.button_mask_z = spawn->button_mask_z;
    fp->input.button_mask_l = spawn->button_mask_l;

    fp->tap_stick_x = fp->tap_stick_y = fp->hold_stick_x = fp->hold_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hurt); i++)
    {
        if (attributes->fighter_hurt_desc[i].joint_id != -1)
        {
            fp->fighter_hurt[i].hitstatus = nGMHitStatusNormal;
            fp->fighter_hurt[i].joint_id = attributes->fighter_hurt_desc[i].joint_id;
            fp->fighter_hurt[i].joint = fp->joint[fp->fighter_hurt[i].joint_id];
            fp->fighter_hurt[i].placement = attributes->fighter_hurt_desc[i].placement;
            fp->fighter_hurt[i].is_grabbable = attributes->fighter_hurt_desc[i].is_grabbable;
            fp->fighter_hurt[i].offset = attributes->fighter_hurt_desc[i].offset;
            fp->fighter_hurt[i].size = attributes->fighter_hurt_desc[i].size;

            fp->fighter_hurt[i].size.x *= 0.5F;
            fp->fighter_hurt[i].size.y *= 0.5F;
            fp->fighter_hurt[i].size.z *= 0.5F;
        }
        else fp->fighter_hurt[i].hitstatus = nGMHitStatusNone;
    }
    fp->coll_data.p_translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;
    fp->coll_data.p_lr = &fp->lr;
    fp->coll_data.object_coll = attributes->object_coll;
    fp->coll_data.p_object_coll = &fp->coll_data.object_coll;
    fp->coll_data.cliffcatch_coll = attributes->cliffcatch_coll;
    fp->coll_data.ignore_line_id = -1;
    fp->coll_data.coll_update_frame = gMPCollUpdateFrame;
    fp->coll_data.coll_mask_curr = 0;

    if (fp->status_info.pl_kind != nFTPlayerKindDemo)
    {
        omAddGObjCommonProc(fighter_gobj, ftMainProcInterruptMain, 1, 5);
        omAddGObjCommonProc(fighter_gobj, ftMainProcPhysicsMapNormal, 1, 4);
        omAddGObjCommonProc(fighter_gobj, ftMainProcPhysicsMapCapture, 1, 3);
        omAddGObjCommonProc(fighter_gobj, ftMainProcSearchAllCatch, 1, 2);
        omAddGObjCommonProc(fighter_gobj, ftMainProcSearchAllHit, 1, 1);
        omAddGObjCommonProc(fighter_gobj, ftMainProcUpdateMain, 1, 0);
    }
    else omAddGObjCommonProc(fighter_gobj, func_ovl1_80390584, 1, 5);

    ftManagerInitFighter(fighter_gobj, spawn);

    if (fp->status_info.pl_kind == nFTPlayerKindCom)
    {
        func_unkmulti_8013A8A8(fighter_gobj);
    }
    if ((fp->status_info.pl_kind == nFTPlayerKindKey) || (fp->status_info.pl_kind == nFTPlayerKindGameKey))
    {
        fp->explain.input_seq = NULL;
        fp->explain.input_wait = 0;
    }
    switch (fp->status_info.pl_kind)
    {
    case nFTPlayerKindDemo:
        func_ovl1_803905CC(fighter_gobj, 0x10000);
        break;

    case nFTPlayerKindKey:
        ftMap_SetStatusWaitOrFall(fighter_gobj);
        break;

    default:
        if (spawn->is_skip_entry)
        {
            ftMap_SetStatusWaitOrFall(fighter_gobj);
            ftCommon_ResetControllerInputs(fighter_gobj);
        }
        else
        {
            ftCommon_Entry_SetStatus(fighter_gobj);
            ftCommon_ResetControllerInputs(fighter_gobj);
        }
        break;
    }
    if ((fp->status_info.pl_kind == nFTPlayerKindMan) || (fp->status_info.pl_kind == nFTPlayerKindCom))
    {
        func_unkmulti_8013AC00(fighter_gobj);
    }
    if ((fp->status_info.pl_kind != nFTPlayerKindDemo) && !(spawn->is_skip_shadow_setup))
    {
        ftShadowMakeShadowForFighter(fighter_gobj);
    }
    return fighter_gobj;
}

*/
