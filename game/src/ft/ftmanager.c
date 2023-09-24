#include <ft/fighter.h>
#include <sys/develop.h>
#include <ovl0/reloc_data_mgr.h>

extern RldmFileSize D_800A50F8[Ft_Kind_EnumMax];
extern intptr_t D_NF_00000854;
extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_000000A3;
extern intptr_t D_NF_000000C9;

ftStruct *gMainFighterStructCurrent;
ftStruct *gFighterStructCurrent;
ftParts *gMainFighterPartsCurrent;
ftParts *gFighterPartsCurrent;
void *D_ovl2_80130D98;

u32 D_ovl2_80130D9C;
u32 gBattlePlayerCount;
u16 gEntityMotionCount;
u16 gEntityStatUpdateCount;

RldmFileNode D_ovl2_80130DA0;

// 0x80116E10
ftData *ftManager_FighterData_FilePointers[/* */] =
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
void func_ovl2_800D6FE0(void)
{
    s32 i, j;
    u32 largest_size;
    u32 current_anim_size;
    ftData *ft_data;
    RldmFileSize *rldm_size;
    RldmSetup rldm_setup;
    ftScriptInfo *script_info;

    rldm_setup.tableRomAddr = (s32)&D_NF_001AC870;
    rldm_setup.tableFileCount = (u32)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = NULL;
    rldm_setup.statusBufSize = 0;
    rldm_setup.forceBuf = &D_ovl2_80130DA0;
    rldm_setup.forceBufSize = 7;

    rldm_initialize(&rldm_setup);

    for (i = 0; i < ARRAY_COUNT(ftManager_FighterData_FilePointers); i++)
    {
        rldm_size = &D_800A50F8[i];
        ft_data = ftManager_FighterData_FilePointers[i];

        largest_size = 0;

        rldm_size->file_size = rldm_bytes_needed_to_load(ft_data->file_main_id);

        for (j = 0; j < ft_data->battlescript_array_count; j++)
        {
            script_info = &ft_data->battlescript->script_info[j];

            current_anim_size = ft_data->battlescript->script_info[j].anim_id;

            if (script_info->anim_id != 0)
            {
                if (!(script_info->anim_flags.flags.x19B_flag_b6))
                {
                    current_anim_size = rldm_bytes_needed_to_load(script_info->anim_id);

                    if (largest_size < current_anim_size)
                    {
                        largest_size = current_anim_size;
                    }
                }
            }
        }
        rldm_size->largest_size1 = largest_size;

        for (j = 0; j < *ft_data->demoscript_array_count; j++)
        {
            script_info = &ft_data->demoscript->script_info[j];

            current_anim_size = ft_data->demoscript->script_info[j].anim_id;

            if (script_info->anim_id != 0)
            {
                if (!(script_info->anim_flags.flags.x19B_flag_b6))
                {
                    current_anim_size = rldm_bytes_needed_to_load(script_info->anim_id);

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
void ftManager_AllocFighterData(u32 data_flags, s32 alloc_count)
{
    u32 largest_size;
    s32 i;
    u32 temp;
    ftData *ft_data;
    RldmFileSize *rldm_size;
    u32 var_t2;

    var_t2 = 0;

    gFighterStructCurrent = gMainFighterStructCurrent = hal_alloc(sizeof(ftStruct) * alloc_count, 0x8);

    _bzero(gFighterStructCurrent, sizeof(ftStruct) * alloc_count);

    for (i = 0; i < (alloc_count - 1); i++)
    {
        gFighterStructCurrent[i].fp_alloc_next = &gFighterStructCurrent[i + 1];
    }
    gFighterStructCurrent[i].fp_alloc_next = NULL;

    gMainFighterPartsCurrent = gFighterPartsCurrent = hal_alloc(sizeof(ftParts) * alloc_count * FTPARTS_JOINT_NUM_MAX, 0x8);

    for (i = 0; i < ((alloc_count * FTPARTS_JOINT_NUM_MAX) - 1); i++)
    {
        gFighterPartsCurrent[i].unk_dobjtrans_alloc_next = &gFighterPartsCurrent[i + 1];
    }
    gFighterPartsCurrent[i].unk_dobjtrans_alloc_next = NULL;

    gBattlePlayerCount = 1;
    gEntityMotionCount = 1;
    gEntityStatUpdateCount = 1;

    D_ovl2_80130D98 = rldm_get_file_with_external_heap((u32)&D_NF_000000A3, hal_alloc(rldm_bytes_needed_to_load((u32)&D_NF_000000A3), 0x10));

    rldm_get_file_with_external_heap((u32)&D_NF_000000C9, hal_alloc(rldm_bytes_needed_to_load((u32)&D_NF_000000C9), 0x10));

    for (i = 0; i < (ARRAY_COUNT(ftManager_FighterData_FilePointers) + ARRAY_COUNT(D_800A50F8)) / 2; i++)
    {
        ft_data = ftManager_FighterData_FilePointers[i];
        rldm_size = &D_800A50F8[i];

        largest_size = 0;

        *ft_data->p_file_main = NULL;

        ft_data->file_size_total = rldm_size->file_size;

        if (data_flags & 2)
        {
            temp = rldm_size->largest_size1;

            if (temp != 0)
            {
                largest_size = temp;
            }
        }
        if (data_flags & 1)
        {
            temp = rldm_size->largest_size2;

            if (largest_size < temp)
            {
                largest_size = temp;
            }
        }
        ft_data->anim_file_size = largest_size;

        if (var_t2 < largest_size)
        {
            var_t2 = largest_size;
        }

        // gzburger
        if (ft_data && ft_data && TRUE)
        {

        }
    }
    D_ovl2_80130D9C = var_t2;

    if (data_flags & 1)
    {
        func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);
    }
}

// 0x800D7594
ftStruct* ftManager_GetStructSetNextAlloc(void)
{
    ftStruct *current_fighter;
    ftStruct *next_fighter = gMainFighterStructCurrent;

    if (next_fighter == NULL)
    {
        while (TRUE)
        {
            fatal_printf("couldn\'t get Fighter struct.\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    else current_fighter = next_fighter;

    gMainFighterStructCurrent = next_fighter->fp_alloc_next;

    return current_fighter;
}

// 0x800D75EC
void ftManager_SetPrevAlloc(ftStruct *fp)
{
    fp->fp_alloc_next = gMainFighterStructCurrent;
    gMainFighterStructCurrent = fp;
}

// 0x800D7604
ftParts* ftManager_GetFighterPartsSetNextAlloc(void)
{
    ftParts *current_ftpart;
    ftParts *next_ftpart;

    next_ftpart = gMainFighterPartsCurrent;

    if (next_ftpart == NULL)
    {
        while (TRUE)
        {
            fatal_printf("couldn\'t get FighterParts struct.\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    current_ftpart = next_ftpart;

    gMainFighterPartsCurrent = next_ftpart->unk_dobjtrans_alloc_next;

    next_ftpart->transform_update_mode =
    next_ftpart->unk_dobjtrans_0x5 =
    next_ftpart->unk_dobjtrans_0x7 = 0;
    next_ftpart->unk_dobjtrans_0x6 = 0;

    next_ftpart->unk_gobj = NULL;
    next_ftpart->unk_dobjtrans_0xE = 0;

    return current_ftpart;
}

// 0x800D767C
void ftManager_SetFighterPartsPrevAlloc(ftParts *ft_parts)
{
    ft_parts->unk_dobjtrans_alloc_next = gMainFighterPartsCurrent;
    gMainFighterPartsCurrent = ft_parts;
}

// 0x800D7694
void ftManager_SetMainFileData(s32 ft_kind)
{
    ftData *ft_data = ftManager_FighterData_FilePointers[ft_kind];

    *ft_data->p_file_main = rldm_get_file_with_external_heap(ft_data->file_main_id, hal_alloc(rldm_bytes_needed_to_load(ft_data->file_main_id), 0x10));

    if (ft_data->o_particles1 != 0)
    {
        *ft_data->p_particle = efAlloc_SetParticleBank(ft_data->o_particles1, ft_data->o_particles2, ft_data->o_particles3, ft_data->o_particles4);
    }
}

// 0x800D7710
void func_ovl2_800D7710(s32 ft_kind)
{
    ftData *ft_data = ftManager_FighterData_FilePointers[ft_kind];

    if (ft_data->file_battlescript_id != 0)
    {
        *ft_data->p_file_battlescript = rldm_get_file_standard(ft_data->file_battlescript_id);
    }

    if (ft_data->file_demoscript_id != 0)
    {
        *ft_data->p_file_demoscript = rldm_get_file_standard(ft_data->file_demoscript_id);
    }

    *ft_data->p_file_model = rldm_get_file_standard(ft_data->file_model_id);

    if (ft_data->file_shieldpose_id != 0)
    {
        ft_data->p_file_shieldpose = rldm_get_file_standard(ft_data->file_shieldpose_id);
    }
    if (ft_data->file_extra1_id != 0)
    {
        *ft_data->p_file_extra1 = rldm_get_file_standard(ft_data->file_extra1_id);
    }
    if (ft_data->file_extra2_id != 0)
    {
        *ft_data->p_file_extra2 = rldm_get_file_standard(ft_data->file_extra2_id);
    }
    if (ft_data->file_extra3_id != 0)
    {
        *ft_data->p_file_extra3 = rldm_get_file_standard(ft_data->file_extra3_id);
    }
    if (ft_data->file_extra4_id != 0)
    {
        *ft_data->p_file_extra4 = rldm_get_file_standard(ft_data->file_extra4_id);
    }
    if (ft_data->o_particles1 != 0)
    {
        *ft_data->p_particle = func_ovl2_801159B0(ft_data->o_particles1);
    }
}

// 0x800D782C
void ftManager_SetFileDataPlayables(void)
{
    s32 i;

    for (i = 0; i < Ft_Kind_MasterHand; i++)
    {
        func_ovl2_800D7710(i);
    }
}

// 0x800D786C
void ftManager_SetFileDataKind(s32 ft_kind)
{
    ftData *ft_data = ftManager_FighterData_FilePointers[ft_kind];

    if (*ft_data->p_file_main == NULL)
    {
        ftManager_SetMainFileData(ft_kind);
        func_ovl2_800D7710(ft_kind);
    }
}

// 0x800D78B4
void* ftManager_AllocAnimHeapKind(s32 ft_kind)
{
    ftData *ft_data = ftManager_FighterData_FilePointers[ft_kind];

    return hal_alloc(ft_data->anim_file_size, 0x10);
}

// 0x800D78E8
void func_ovl2_800D78E8(GObj *fighter_gobj)
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
            ftParts *ft_parts = fp->joint[i]->unk_0x84;

            if (ft_parts->unk_gobj != NULL)
            {
                omEjectGObjCommon(ft_parts->unk_gobj);
            }
            ftManager_SetFighterPartsPrevAlloc(ft_parts);
        }
    }
    ftManager_SetPrevAlloc(fp);
    omEjectGObjCommon(fighter_gobj);
}

void func_ovl2_800D7994(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    switch (fp->ft_kind)
    {
    case Ft_Kind_Kirby:
    case Ft_Kind_PolyKirby:
        ftKirby_CopyLink_SpecialN_DestroyBoomerang(fighter_gobj);
        break;

    case Ft_Kind_Link:
    case Ft_Kind_PolyLink:
        ftLink_SpecialN_DestroyBoomerang(fighter_gobj);
        break;
    }
}

extern intptr_t ftKirby_LoadedFiles_SpecialNData;
extern s32 gBattlePlayerCount;
extern void *D_ovl2_80131074; // Pointer to fighter files?

void func_ovl2_800D79F0(GObj *fighter_gobj, ftSpawnInfo *spawn)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    f32 scale;

    fp->lr = spawn->lr_spawn;
    fp->percent_damage = spawn->damage;

    if (fp->status_info.pl_kind != Pl_Kind_Result)
    {
        gBattleState->player_block[fp->player].stock_damage_all = fp->percent_damage;
    }
    fp->shield_health = (fp->ft_kind == Ft_Kind_Yoshi) ? 55 : 55;

    fp->unk_ft_0x38 = 0.0F;
    fp->hitlag_timer = 0;
    fp->x192_flag_b6 = FALSE;

    func_ovl2_800D9444(fighter_gobj);

    fp->jumps_used = 0;
    fp->is_reflect = FALSE;
    fp->is_absorb = FALSE;
    fp->is_shield = FALSE;
    fp->is_attach_effect = FALSE;
    fp->x18F_flag_b4 = FALSE;

    fp->cliffcatch_wait = 0;
    fp->time_since_last_z = 0;

    fp->acid_wait = fp->twister_wait = fp->tarucann_wait = fp->damagefloor_wait = 0;

    fp->unk_ft_0x7AC = 0;
    fp->attack_damage = 0;
    fp->attack_hit_count = 0;
    fp->shield_attack_damage = 0;
    fp->shield_damage = 0;
    fp->damage_lag = 0;
    fp->damage_queue = 0;
    fp->damage_player = -1;
    fp->damage_object_class = 0;
    fp->damage_object_kind = 0;
    fp->damage_count = 0;
    fp->damage_kind = 0;
    fp->damage_heal = 0;
    fp->damage_joint_index = 0;
    fp->invincible_timer = 0;
    fp->intangible_timer = 0;
    fp->star_invincible_timer = 0;

    fp->hitstatus = gmHitCollision_HitStatus_Normal;
    fp->star_hitstatus = gmHitCollision_HitStatus_Normal;
    fp->special_hitstatus = gmHitCollision_HitStatus_Normal;

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

    fp->player_number = gBattlePlayerCount++;

    fp->publicity_knockback = 0.0F;

    fp->is_hitstun = FALSE;
    fp->x190_flag_b3 = FALSE;

    fp->shuffle_frame_index = fp->shuffle_index_max = 0;

    fp->x192_flag_b4 = FALSE;

    fp->is_shuffle_electric = FALSE;
    fp->shuffle_timer = 0;

    fp->attack_id = ftMotion_AttackIndex_None;
    fp->motion_count = 0;
    fp->stat_flags.stat_attack_id = ftStatus_AttackIndex_None;
    fp->stat_flags.is_smash_attack = fp->stat_flags.is_ground_or_air = fp->stat_flags.is_special_attack = FALSE;

    fp->stat_count = fp->damage_stat_count = 0;
    fp->damage_stat_flags = fp->stat_flags;

    fp->afterimage.desc_index = 0;

    DObjGetStruct(fighter_gobj)->translate.vec.f = spawn->pos;
    DObjGetStruct(fighter_gobj)->scale.vec.f.x = DObjGetStruct(fighter_gobj)->scale.vec.f.y = DObjGetStruct(fighter_gobj)->scale.vec.f.z = attributes->size_mul;

    if (fp->status_info.pl_kind != Pl_Kind_Result)
    {
        bool32 is_collide_ground = func_ovl2_800F9348(&DObjGetStruct(fighter_gobj)->translate, &fp->coll_data.ground_line_id, &fp->coll_data.ground_dist, &fp->coll_data.ground_flags, &fp->coll_data.ground_angle.x);

        if (is_collide_ground == FALSE)
        {
            fp->coll_data.ground_line_id = -1;
        }
        if ((is_collide_ground != 0) && (fp->coll_data.ground_dist > -300.0F) && (fp->ft_kind != Ft_Kind_MasterHand))
        {
            fp->ground_or_air = GA_Ground;

            DObjGetStruct(fighter_gobj)->translate.vec.f.y += fp->coll_data.ground_dist;

            fp->coll_data.ground_dist = 0;
        }
        else
        {
            fp->ground_or_air = GA_Air;
            fp->jumps_used = 1;
        }
    }
    else
    {
        fp->ground_or_air = GA_Air;
        fp->jumps_used = 1;
    }

    fp->coll_data.pos_curr = DObjGetStruct(fighter_gobj)->translate;

    switch (fp->ft_kind)
    {
    case Ft_Kind_MetalMario:
        fp->knockback_resist_passive = 30.0F;

    case Ft_Kind_Mario:
    case Ft_Kind_PolyMario:
        fp->fighter_vars.mario.is_expend_tornado = FALSE;
        break;

    case Ft_Kind_GiantDonkey:
        fp->knockback_resist_passive = 48.0F;

    case Ft_Kind_Donkey:
    case Ft_Kind_PolyDonkey:
        fp->fighter_vars.donkey.charge_level = 0;
        break;

    case Ft_Kind_Samus:
    case Ft_Kind_PolySamus:
        fp->fighter_vars.samus.charge_level = 0;
        fp->fighter_vars.samus.charge_recoil = 0;
        break;

    case Ft_Kind_Luigi:
    case Ft_Kind_PolyLuigi:
        fp->fighter_vars.mario.is_expend_tornado = FALSE;
        break;

    case Ft_Kind_Captain:
    case Ft_Kind_PolyCaptain:
        fp->fighter_vars.captain.falcon_punch_unk = 0;
        break;

    case Ft_Kind_Kirby:
    case Ft_Kind_PolyKirby:
        fp->fighter_vars.kirby.copy_id = spawn->copy_kind;

        fp->fighter_vars.kirby.copysamus_charge_level = 0;
        fp->fighter_vars.kirby.copysamus_charge_recoil = 0;
        fp->fighter_vars.kirby.copydonkey_charge_level = 0;
        fp->fighter_vars.kirby.copycaptain_falcon_punch_unk = 0;
        fp->fighter_vars.kirby.copypurin_unk = 0;
        fp->fighter_vars.kirby.copylink_boomerang_gobj = NULL;

        if (spawn->copy_kind == Ft_Kind_Kirby)
        {
            fp->fighter_vars.kirby.is_ignore_losecopy = FALSE;
        }
        else fp->fighter_vars.kirby.is_ignore_losecopy = TRUE;

        if (fp->ft_kind == Ft_Kind_Kirby)
        {
            ftKirbyCopy *copy_data = (ftKirbyCopy*) ((uintptr_t)D_ovl2_80131074 + (intptr_t)&ftKirby_LoadedFiles_SpecialNData);

            ftCommon_SetModelPartRenderStateIndex(fighter_gobj, 6, copy_data[fp->fighter_vars.kirby.copy_id].copy_hat_rs);
        }
        break;

    case Ft_Kind_Link:
    case Ft_Kind_PolyLink:
        fp->fighter_vars.link.boomerang_gobj = NULL;

        ftCommon_SetModelPartRenderStateIndex(fighter_gobj, 0x15, -1);
        ftCommon_SetModelPartRenderStateIndex(fighter_gobj, 0x13, 0);
        break;

    case Ft_Kind_Purin:
    case Ft_Kind_PolyPurin:
        fp->fighter_vars.purin.unk_0x0 = 0;
        break;

    case Ft_Kind_MasterHand:
        fp->fighter_vars.masterhand.boss = &fp->fighter_vars.masterhand.s;
        fp->fighter_vars.masterhand.boss->wait_div = 1.0F;
        fp->fighter_vars.masterhand.boss->status_index = -1;
        fp->fighter_vars.masterhand.boss->status_index_random = -1;
        fp->fighter_vars.masterhand.boss->status_index_guard = 0;

        if (fp->status_info.pl_kind != Pl_Kind_Result)
        {
            ftMasterHand_Common_SetNextAttackWait(fighter_gobj);
            func_ovl3_80158634(fighter_gobj);
        }
        break;
    }
    ftCommon_ClearHitAll(fighter_gobj);
    ftCommon_SetHitStatusPartAll(fighter_gobj, gmHitCollision_HitStatus_Normal);
    ftCommon_ResetColAnim(fighter_gobj);
}

extern u16 gMapCollUpdateFrame;

GObj* ftManager_MakeFighter(ftSpawnInfo *spawn) // Create fighter
{
    ftStruct *fp;
    GObj *fighter_gobj;
    s32 i;
    ftParts *dobj_unk;
    ftAttributes *attributes;
    GObj *unk_dobj_gobj;
    DObj *topn_joint;
    UnkFighterDObjData *unk_ft_dobj;

    fighter_gobj = omMakeGObjCommon(omGObj_Kind_Fighter, NULL, 3U, 0x80000000U);

    func_80009DF4(fighter_gobj, spawn->unk_rebirth_0x3C, 9, 0x80000000, -1);

    fp = ftManager_GetStructSetNextAlloc();

    fighter_gobj->user_data = fp;

    fp->status_info.pl_kind = spawn->pl_kind;
    fp->fighter_gobj = fighter_gobj;
    fp->ft_kind = spawn->ft_kind;
    fp->ft_data = ftManager_FighterData_FilePointers[fp->ft_kind];
    attributes = fp->attributes = (ftAttributes*) ((uintptr_t)*fp->ft_data->p_file_main + (intptr_t)fp->ft_data->o_attributes);
    fp->anim_load = spawn->unk_rebirth_0x38;
    fp->team = spawn->team;
    fp->player = spawn->player;
    fp->stock_count = spawn->stock_count;

    if (fp->status_info.pl_kind != Pl_Kind_Result)
    {
        gBattleState->player_block[fp->player].stock_count = spawn->stock_count;
    }
    fp->lod_current = fp->lod_match = spawn->model_lod;

    fp->costume = spawn->costume;
    fp->shade = spawn->shade;

    fp->costume_shade.r = (attributes->shade_color[fp->shade - 1].r * attributes->shade_color[fp->shade - 1].a) / 0xFF;
    fp->costume_shade.g = (attributes->shade_color[fp->shade - 1].g * attributes->shade_color[fp->shade - 1].a) / 0xFF;
    fp->costume_shade.b = (attributes->shade_color[fp->shade - 1].b * attributes->shade_color[fp->shade - 1].a) / 0xFF;

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

    fp->joint_cycle_array_index = 0;

    fp->is_invisible = FALSE;
    fp->x18E_flag_b0 = FALSE;

    fp->display_mode = dbObject_DisplayMode_Master;

    fp->is_playing_sfx = FALSE;
    fp->x191_flag_b0 = FALSE;

    fp->proc_status = NULL;

    fp->unk_ft_0x149 = spawn->unk_rebirth_0x1C;
    fp->unk_0x15 = spawn->unk_rebirth_0x1E;
    fp->unk_0x16 = 9;

    fp->x18E_flag_b2 = spawn->unk_rebirth_0x1F_b2;

    fp->status_info.status_time_spent = 0;

    fp->fighter_cam_zoom_frame = attributes->cam_zoom;
    fp->fighter_cam_zoom_range = 1.0F;

    fp->x18E_flag_b4 = FALSE;
    fp->is_check_blastzone = FALSE;

    fp->x18F_flag_b5 = (attributes->unk_0x324 != NULL) ? TRUE : FALSE;

    for (i = 0; i < ARRAY_COUNT(fp->joint); i++)
    {
        fp->joint[i] = NULL;
    }
    topn_joint = func_800092D0(fighter_gobj, NULL);
    fp->joint[ftParts_Joint_TopN] = topn_joint;
    func_ovl0_800C89BC(topn_joint, 0x4B, 0, 0);
    fp->joint[ftParts_Joint_TopN]->om_mtx[0]->unk05 = spawn->unk_rebirth_0x1D;

    func_ovl0_800C8DB4(fighter_gobj->obj, attributes->dobj_desc_container, fp->lod_current, &fp->joint[ftParts_Joint_EnumMax], attributes->unk_ftca_0x29C, 0x4B, 0, 0, fp->costume, fp->unk_ft_0x149);

    for (i = 0; i < ARRAY_COUNT(fp->joint); i++)
    {
        if (fp->joint[i] != NULL)
        {
            fp->joint[i]->unk_0x84 = ftManager_GetFighterPartsSetNextAlloc();

            dobj_unk = fp->joint[i]->unk_0x84;
            dobj_unk->unk_0xC = attributes->dobj_desc_container->dobj_desc_array[fp->lod_current - 1].unk_dobjcontain_0xC;
            dobj_unk->unk_0xD = i;

            if (fp->costume != 0)
            {
                if ((attributes->unk_0x32C != NULL) && (i == attributes->unk_0x32C->joint_index))
                {
                    unk_ft_dobj = attributes->unk_0x32C;

                    dobj_unk->unk_gobj = omMakeGObjCommon(omGObj_Kind_FighterParts, NULL, 0xDU, 0x80000000U);

                    func_800092D0(dobj_unk->unk_gobj, unk_ft_dobj->unk_ftdobj_0x4);
                    func_ovl0_800C8CB8(dobj_unk->unk_gobj->obj, unk_ft_dobj->unk_ftdobj_0x8, unk_ft_dobj->unk_ftdobj_0xC, 0, fp->costume);
                }
            }
        }
    }
    for (i = ftParts_Joint_EnumMax; i < ARRAY_COUNT(fp->joint); i++)
    {
        if (fp->joint[i] != NULL)
        {
            fp->joint_render_state[i - ftParts_Joint_EnumMax].render_state_b0 = 
            fp->joint_render_state[i - ftParts_Joint_EnumMax].render_state_b1 = (fp->joint[i]->display_list != NULL) ? 0 : -1;
        }
    }
    for (i = 0; i < ARRAY_COUNT(fp->texture_render_state); i++)
    {
        fp->texture_render_state[i].frame_index_default = fp->texture_render_state[i].frame_index_current = 0;
    }

    func_ovl2_800EB6EC(fp);

    fp->input.pl.stick_range.x = fp->input.pl.stick_range.y = fp->input.pl.stick_prev.x = fp->input.pl.stick_prev.y = fp->input.cp.stick_range.x = fp->input.cp.stick_range.y = 0;
    fp->input.pl.button_hold = fp->input.pl.button_tap = fp->input.cp.button_inputs = 0;

    fp->input.p_controller = spawn->p_controller;

    fp->input.button_mask_a = spawn->button_mask_a;
    fp->input.button_mask_b = spawn->button_mask_b;
    fp->input.button_mask_z = spawn->button_mask_z;
    fp->input.button_mask_l = spawn->button_mask_l;

    fp->tap_stick_x = fp->tap_stick_y = fp->hold_stick_x = fp->hold_stick_y = U8_MAX - 1;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hurt); i++)
    {
        if (attributes->fighter_hurt_desc[i].joint_index != -1)
        {
            fp->fighter_hurt[i].hitstatus = gmHitCollision_HitStatus_Normal;
            fp->fighter_hurt[i].joint_index = attributes->fighter_hurt_desc[i].joint_index;
            fp->fighter_hurt[i].joint = fp->joint[fp->fighter_hurt[i].joint_index];
            fp->fighter_hurt[i].placement = attributes->fighter_hurt_desc[i].placement;
            fp->fighter_hurt[i].is_grabbable = attributes->fighter_hurt_desc[i].is_grabbable;
            fp->fighter_hurt[i].offset = attributes->fighter_hurt_desc[i].offset;
            fp->fighter_hurt[i].size = attributes->fighter_hurt_desc[i].size;

            fp->fighter_hurt[i].size.x *= 0.5F;
            fp->fighter_hurt[i].size.y *= 0.5F;
            fp->fighter_hurt[i].size.z *= 0.5F;
        }
        else fp->fighter_hurt[i].hitstatus = gmHitCollision_HitStatus_None;
    }
    fp->coll_data.p_translate = &DObjGetStruct(fighter_gobj)->translate;
    fp->coll_data.p_lr = &fp->lr;
    fp->coll_data.object_coll = attributes->object_coll;
    fp->coll_data.p_object_coll = &fp->coll_data.object_coll;
    fp->coll_data.cliffcatch_coll = attributes->cliffcatch_coll;
    fp->coll_data.ignore_line_id = -1;
    fp->coll_data.coll_update_frame = gMapCollUpdateFrame;
    fp->coll_data.coll_mask = 0;

    if (fp->status_info.pl_kind != Pl_Kind_Result)
    {
        omAddGObjCommonProc(fighter_gobj, ftManager_ProcInterruptMain, 1, 5);
        omAddGObjCommonProc(fighter_gobj, ftManager_ProcPhysicsMapNormal, 1, 4);
        omAddGObjCommonProc(fighter_gobj, ftManager_ProcPhysicsMapCapture, 1, 3);
        omAddGObjCommonProc(fighter_gobj, ftManager_ProcSearchAllCatch, 1, 2);
        omAddGObjCommonProc(fighter_gobj, ftManager_ProcSearchAllHit, 1, 1);
        omAddGObjCommonProc(fighter_gobj, ftManager_ProcUpdateMain, 1, 0);
    }
    else omAddGObjCommonProc(fighter_gobj, func_ovl1_80390584, 1, 5);

    func_ovl2_800D79F0(fighter_gobj, spawn);

    if (fp->status_info.pl_kind == Pl_Kind_CPU)
    {
        func_unkmulti_8013A8A8(fighter_gobj);
    }
    if ((fp->status_info.pl_kind == Pl_Kind_Intro) || (fp->status_info.pl_kind == Pl_Kind_Explain))
    {
        fp->explain.input_seq = NULL;
        fp->explain.input_wait = 0;
    }
    switch (fp->status_info.pl_kind)
    {
    case Pl_Kind_Result:
        func_ovl1_803905CC(fighter_gobj, 0x10000);
        break;

    case Pl_Kind_Intro:
        func_ovl2_800DEE54(fighter_gobj);
        break;

    default:
        if (spawn->unk_rebirth_0x1F_b0)
        {
            func_ovl2_800DEE54(fighter_gobj);
            ftCommon_ResetControllerInputs(fighter_gobj);
        }
        else
        {
            ftCommon_Entry_SetStatus(fighter_gobj);
            ftCommon_ResetControllerInputs(fighter_gobj);
        }
        break;
    }
    if ((fp->status_info.pl_kind == Pl_Kind_Human) || (fp->status_info.pl_kind == Pl_Kind_CPU))
    {
        func_unkmulti_8013AC00(fighter_gobj);
    }
    if ((fp->status_info.pl_kind != Pl_Kind_Result) && !(spawn->unk_rebirth_0x1F_b1))
    {
        func_unkmulti_8013BB88(fighter_gobj);
    }
    return fighter_gobj;
}

