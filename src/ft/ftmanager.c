#include <ft/fighter.h>
#include <gm/battle.h>
#include <sys/develop.h>
#include <ovl0/reloc_data_mgr.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern ftFileSize D_800A50F8[nFTKindEnumMax];

extern intptr_t D_NF_000000A3;
extern intptr_t D_NF_000000C9;

extern void func_ovl0_800C8CB8(void*, void*, void*, void*, f32);
extern void func_ovl0_800C8DB4(void*, void*, u8, void*, s32, s32, s32, s32, f32, s32);

extern void func_ovl1_80390584(GObj*);
extern void func_ovl1_803904E0(f32, f32, u8, u8, u8, u8);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80130D80
ftStruct *sFTManagerStructsAllocFree;

// 0x80130D84
ftStruct *sFTManagerStructsAllocBuf;

// 0x80130D88
ftParts *sFTManagerPartsAllocFree;

// 0x80130D8C
ftParts *sFTManagerPartsAllocBuf;

// 0x80130D90
u32 gFTManagerPlayersNum;

// 0x80130D94
u16 gFTManagerMotionCount;

// 0x80130D96
u16 gFTManagerStatUpdateCount;

// 0x80130D98
void *gFTManagerCommonFile;

// 0x80130D9C
size_t gFTManagerAnimHeapSize;

// 0x80130DA0
rdFileNode sFTManagerForceBuf[7];

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x80116E10
extern ftData *dFTManagerDataFiles[nFTKindEnumMax];

/*
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

*/

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800D6FE0
void ftManagerSetupFileSize(void)
{
    s32 i, j;
    size_t largest_size;
    size_t current_anim_size;
    ftData *ft_data;
    ftFileSize *ft_size;
    rdSetup rd_setup;
    ftScriptInfo *script_info;

    rd_setup.table_addr = &lRDManagerTableAddr;
    rd_setup.table_files_num = &lRDManagerTableFilesNum;
    rd_setup.file_heap = NULL;
    rd_setup.file_heap_size = 0;
    rd_setup.status_buf = NULL;
    rd_setup.status_buf_size = 0;
    rd_setup.force_buf = sFTManagerForceBuf;
    rd_setup.force_buf_size = ARRAY_COUNT(sFTManagerForceBuf);

    rdManagerInitSetup(&rd_setup);

    for (i = 0; i < ARRAY_COUNT(dFTManagerDataFiles); i++)
    {
        ft_size = &D_800A50F8[i];
        ft_data = dFTManagerDataFiles[i];

        largest_size = 0;

        ft_size->main = rdManagerGetFileSize(ft_data->file_main_id);

        for (j = 0; j < ft_data->gamemotion_array_count; j++)
        {
            script_info = &ft_data->gamemotion->script_info[j];

            current_anim_size = ft_data->gamemotion->script_info[j].anim_file_id;

            if (script_info->anim_file_id != 0)
            {
                if (!(script_info->anim_flags.flags.is_use_shieldpose))
                {
                    current_anim_size = rdManagerGetFileSize(script_info->anim_file_id);

                    if (largest_size < current_anim_size)
                    {
                        largest_size = current_anim_size;
                    }
                }
            }
        }
        ft_size->gamemotion_largest_anim = largest_size;

        for (j = 0; j < *ft_data->moviemotion_array_count; j++)
        {
            script_info = &ft_data->moviemotion->script_info[j];

            current_anim_size = ft_data->moviemotion->script_info[j].anim_file_id;

            if (script_info->anim_file_id != 0)
            {
                if (!(script_info->anim_flags.flags.is_use_shieldpose))
                {
                    current_anim_size = rdManagerGetFileSize(script_info->anim_file_id);

                    if (largest_size < current_anim_size)
                    {
                        largest_size = current_anim_size;
                    }
                }
            }
        }
        ft_size->moviemotion_largest_anim = largest_size;
    }
}

// 0x800D7194
void ftManagerAllocFighter(u32 data_flags, s32 allocs_num)
{
    size_t largest_size;
    s32 i;
    size_t current_size;
    ftData *ft_data;
    ftFileSize *ft_size;
    size_t heap_size;

    heap_size = 0;

    sFTManagerStructsAllocBuf = sFTManagerStructsAllocFree = gsMemoryAlloc(sizeof(ftStruct) * allocs_num, 0x8);

    bzero(sFTManagerStructsAllocBuf, sizeof(ftStruct) * allocs_num);

    for (i = 0; i < (allocs_num - 1); i++)
    {
        sFTManagerStructsAllocBuf[i].alloc_next = &sFTManagerStructsAllocBuf[i + 1];
    }
    sFTManagerStructsAllocBuf[i].alloc_next = NULL;

    sFTManagerPartsAllocFree = sFTManagerPartsAllocBuf = gsMemoryAlloc(sizeof(ftParts) * allocs_num * FTPARTS_JOINT_NUM_MAX, 0x8);

    for (i = 0; i < ((allocs_num * FTPARTS_JOINT_NUM_MAX) - 1); i++)
    {
        sFTManagerPartsAllocBuf[i].alloc_next = &sFTManagerPartsAllocBuf[i + 1];
    }
    sFTManagerPartsAllocBuf[i].alloc_next = NULL;

    gFTManagerPlayersNum = 1;
    gFTManagerMotionCount = 1;
    gFTManagerStatUpdateCount = 1;

    gFTManagerCommonFile = rdManagerGetFileWithExternHeap((rdFileID)&D_NF_000000A3, gsMemoryAlloc(rdManagerGetFileSize((rdFileID)&D_NF_000000A3), 0x10));

    rdManagerGetFileWithExternHeap((rdFileID)&D_NF_000000C9, gsMemoryAlloc(rdManagerGetFileSize((rdFileID)&D_NF_000000C9), 0x10));

    for (i = 0; i < (ARRAY_COUNT(dFTManagerDataFiles) + ARRAY_COUNT(D_800A50F8)) / 2; i++)
    {
        ft_data = dFTManagerDataFiles[i];
        ft_size = &D_800A50F8[i];

        largest_size = 0;

        *ft_data->p_file_main = NULL;

        ft_data->file_main_size = ft_size->main;

        if (data_flags & FTDATA_FLAG_ANIM_GAME)
        {
            current_size = ft_size->gamemotion_largest_anim;

            if (current_size != 0)
            {
                largest_size = current_size;
            }
        }
        if (data_flags & FTDATA_FLAG_ANIM_MOVIE)
        {
            current_size = ft_size->moviemotion_largest_anim;

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
    gFTManagerAnimHeapSize = heap_size;

    if (data_flags & FTDATA_FLAG_ANIM_MOVIE)
    {
        func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);
    }
}

// 0x800D7594
ftStruct* ftManagerGetNextStructAlloc(void)
{
    ftStruct *current_fighter;
    ftStruct *new_fighter = sFTManagerStructsAllocFree;

    if (new_fighter == NULL)
    {
        while (TRUE)
        {
            gsFatalPrintF("couldn\'t get Fighter struct.\n");
            smRunPrintGObjStatus();
        }
    }
    else current_fighter = new_fighter;

    sFTManagerStructsAllocFree = new_fighter->alloc_next;

    return current_fighter;
}

// 0x800D75EC
void ftManagerSetPrevStructAlloc(ftStruct *fp)
{
    fp->alloc_next = sFTManagerStructsAllocFree;
    sFTManagerStructsAllocFree = fp;
}

// 0x800D7604
ftParts* ftManagerGetNextPartsAlloc(void)
{
    ftParts *current_part;
    ftParts *new_part;

    new_part = sFTManagerPartsAllocFree;

    if (new_part == NULL)
    {
        while (TRUE)
        {
            gsFatalPrintF("couldn\'t get FighterParts struct.\n");
            smRunPrintGObjStatus();
        }
    }
    current_part = new_part;

    sFTManagerPartsAllocFree = new_part->alloc_next;

    new_part->transform_update_mode =
    new_part->unk_dobjtrans_0x5 =
    new_part->unk_dobjtrans_0x7 = 0;
    new_part->unk_dobjtrans_0x6 = 0;

    new_part->gobj = NULL;
    new_part->unk_dobjtrans_0xE = 0;

    return current_part;
}

// 0x800D767C
void ftManagerSetPrevPartsAlloc(ftParts *ft_parts)
{
    ft_parts->alloc_next = sFTManagerPartsAllocFree;
    sFTManagerPartsAllocFree = ft_parts;
}

// 0x800D7694
void ftManagerSetupFilesMainKind(s32 ft_kind)
{
    ftData *ft_data = dFTManagerDataFiles[ft_kind];

    *ft_data->p_file_main = rdManagerGetFileWithExternHeap(ft_data->file_main_id, gsMemoryAlloc(rdManagerGetFileSize(ft_data->file_main_id), 0x10));

    if (ft_data->particles_header_lo != 0)
    {
        *ft_data->p_particle = efAllocGetAddParticleBankID
        (
            ft_data->particles_header_lo, 
            ft_data->particles_header_hi, 
            ft_data->particles_texture_lo, 
            ft_data->particles_texture_hi
        );
    }
}

// 0x800D7710
void ftManagerSetupFilesKind(s32 ft_kind)
{
    ftData *ft_data = dFTManagerDataFiles[ft_kind];

    if (ft_data->file_gamemotion_id != 0)
    {
        *ft_data->p_file_gamemotion = rldm_get_file_standard(ft_data->file_gamemotion_id);
    }
    if (ft_data->file_moviemotion_id != 0)
    {
        *ft_data->p_file_moviemotion = rldm_get_file_standard(ft_data->file_moviemotion_id);
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
    if (ft_data->particles_header_lo != 0)
    {
        *ft_data->p_particle = efAllocGetParticleBankID(ft_data->particles_header_lo);
    }
}

// 0x800D782C
void ftManagerSetupFilesPlayablesAll(void)
{
    s32 i;

    for (i = 0; i <= nFTKindPlayableEnd; i++)
    {
        ftManagerSetupFilesKind(i);
    }
}

// 0x800D786C
void ftManagerSetupFilesAllKind(s32 ft_kind)
{
    ftData *ft_data = dFTManagerDataFiles[ft_kind];

    if (*ft_data->p_file_main == NULL)
    {
        ftManagerSetupFilesMainKind(ft_kind);
        ftManagerSetupFilesKind(ft_kind);
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
        ftParamProcStopEffect(fighter_gobj);
    }
    for (i = 0; i < ARRAY_COUNT(fp->joint); i++)
    {
        if (fp->joint[i] != NULL)
        {
            ftParts *ft_parts = fp->joint[i]->user_data.p;

            if (ft_parts->gobj != NULL)
            {
                omEjectGObj(ft_parts->gobj);
            }
            ftManagerSetPrevPartsAlloc(ft_parts);
        }
    }
    ftManagerSetPrevStructAlloc(fp);
    omEjectGObj(fighter_gobj);
}

// 0x800D7994
void ftManagerDestroyFighterWeapons(GObj *fighter_gobj)
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

// 0x800D79F0
void ftManagerInitFighter(GObj *fighter_gobj, ftCreateDesc *ft_desc)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    f32 scale;

    fp->lr = ft_desc->lr_spawn;
    fp->percent_damage = ft_desc->damage;

    if (fp->status_info.pl_kind != nFTPlayerKindDemo)
    {
        gBattleState->players[fp->player].stock_damage_all = fp->percent_damage;
    }
    fp->shield_health = (fp->ft_kind == nFTKindYoshi) ? 55 : 55;

    fp->unk_ft_0x38 = 0.0F;
    fp->hitlag_timer = 0;
    fp->x192_flag_b6 = FALSE;

    ftPhysicsStopVelAll(fighter_gobj);

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

    fp->lr_reflect = nGMDirectionC;
    fp->lr_absorb = nGMDirectionC;

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

    fp->player_number = gFTManagerPlayersNum++;

    fp->publicity_knockback = 0.0F;

    fp->is_hitstun = FALSE;
    fp->is_use_anim_locks = FALSE;

    fp->shuffle_frame_index = fp->shuffle_index_max = 0;

    fp->is_use_fogcolor = FALSE;

    fp->is_shuffle_electric = FALSE;
    fp->shuffle_timer = 0;

    fp->attack_id = nFTMotionAttackIDNone;
    fp->motion_count = 0;
    fp->stat_flags.stat_attack_id = nFTStatusAttackIDNone;
    fp->stat_flags.is_smash_attack = fp->stat_flags.ga = fp->stat_flags.is_projectile = 0;

    fp->stat_count = fp->damage_stat_count = 0;
    fp->damage_stat_flags = fp->stat_flags;

    fp->afterimage.desc_index = 0;

    DObjGetStruct(fighter_gobj)->translate.vec.f = ft_desc->pos;
    DObjGetStruct(fighter_gobj)->scale.vec.f.x = DObjGetStruct(fighter_gobj)->scale.vec.f.y = DObjGetStruct(fighter_gobj)->scale.vec.f.z = attributes->size_mul;

    if (fp->status_info.pl_kind != nFTPlayerKindDemo)
    {
        sb32 is_collide_ground = func_ovl2_800F9348(&DObjGetStruct(fighter_gobj)->translate.vec.f, &fp->coll_data.ground_line_id, &fp->coll_data.ground_dist, &fp->coll_data.ground_flags, &fp->coll_data.ground_angle);

        if (is_collide_ground == FALSE)
        {
            fp->coll_data.ground_line_id = -1;
        }
        if ((is_collide_ground != FALSE) && (fp->coll_data.ground_dist > -300.0F) && (fp->ft_kind != nFTKindBoss))
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
        fp->fighter_vars.kirby.copy_id = ft_desc->copy_kind;

        fp->fighter_vars.kirby.copysamus_charge_level = 0;
        fp->fighter_vars.kirby.copysamus_charge_recoil = 0;
        fp->fighter_vars.kirby.copydonkey_charge_level = 0;
        fp->fighter_vars.kirby.copycaptain_falcon_punch_unk = 0;
        fp->fighter_vars.kirby.copypurin_unk = 0;
        fp->fighter_vars.kirby.copylink_boomerang_gobj = NULL;

        if (ft_desc->copy_kind == nFTKindKirby)
        {
            fp->fighter_vars.kirby.is_ignore_losecopy = FALSE;
        }
        else fp->fighter_vars.kirby.is_ignore_losecopy = TRUE;

        if (fp->ft_kind == nFTKindKirby)
        {
            ftKirbyCopy *copy_data = (ftKirbyCopy*) ((uintptr_t)gFTDataKirbyBattleMotion + (intptr_t)&lFTKirbySpecialNCopyData);

            ftParamSetModelPartDefaultID(fighter_gobj, FTKIRBY_COPY_MODELPARTS_JOINT, copy_data[fp->fighter_vars.kirby.copy_id].copy_drawstatus);
        }
        break;

    case nFTKindLink:
    case nFTKindPolyLink:
        fp->fighter_vars.link.boomerang_gobj = NULL;

        ftParamSetModelPartDefaultID(fighter_gobj, 0x15, -1);
        ftParamSetModelPartDefaultID(fighter_gobj, 0x13, 0);
        break;

    case nFTKindPurin:
    case nFTKindPolyPurin:
        fp->fighter_vars.purin.unk_0x0 = 0;
        break;

    case nFTKindBoss:
        fp->fighter_vars.boss.p = &fp->fighter_vars.boss.s;
        fp->fighter_vars.boss.p->wait_div = 1.0F;
        fp->fighter_vars.boss.p->status_index = -1;
        fp->fighter_vars.boss.p->status_index_random = -1;
        fp->fighter_vars.boss.p->status_index_guard = 0;

        if (fp->status_info.pl_kind != nFTPlayerKindDemo)
        {
            ftBossCommonSetNextAttackWait(fighter_gobj);
            ftBossCommonSetDefaultLineID(fighter_gobj);
        }
        break;
    }
    ftParamClearHitAll(fighter_gobj);
    ftParamSetHitStatusPartAll(fighter_gobj, nGMHitStatusNormal);
    ftParamResetFighterColAnim(fighter_gobj);
}

// 0x800D7F3C
GObj* ftManagerMakeFighter(ftCreateDesc *ft_desc) // Create fighter
{
    ftStruct *fp;
    GObj *fighter_gobj;
    s32 i;
    ftParts *ft_parts;
    ftAttributes *attributes;
    s32 unused;
    DObj *topn_joint;
    ftMesh *ft_mesh;

    fighter_gobj = omMakeGObjSPAfter(nOMObjCommonKindFighter, NULL, nOMObjCommonLinkIDFighter, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(fighter_gobj, ft_desc->proc_render, FTRENDER_DLLINK_DEFAULT, GOBJ_DLLINKORDER_DEFAULT, -1);

    fp = ftManagerGetNextStructAlloc();

    fighter_gobj->user_data.p = fp;

    fp->status_info.pl_kind = ft_desc->pl_kind;
    fp->fighter_gobj = fighter_gobj;
    fp->ft_kind = ft_desc->ft_kind;
    fp->ft_data = dFTManagerDataFiles[fp->ft_kind];
    attributes = fp->attributes = (ftAttributes*) ((uintptr_t)*fp->ft_data->p_file_main + (intptr_t)fp->ft_data->o_attributes);
    fp->anim_load = ft_desc->anim_heap;
    fp->team = ft_desc->team;
    fp->player = ft_desc->player;
    fp->stock_count = ft_desc->stock_count;

    if (fp->status_info.pl_kind != nFTPlayerKindDemo)
    {
        gBattleState->players[fp->player].stock_count = ft_desc->stock_count;
    }
    fp->detail_current = fp->detail_default = ft_desc->model_lod;

    fp->costume = ft_desc->costume;
    fp->shade = ft_desc->shade;

    fp->shade_color.r = (attributes->shade_color[fp->shade - 1].r * attributes->shade_color[fp->shade - 1].a) / 0xFF;
    fp->shade_color.g = (attributes->shade_color[fp->shade - 1].g * attributes->shade_color[fp->shade - 1].a) / 0xFF;
    fp->shade_color.b = (attributes->shade_color[fp->shade - 1].b * attributes->shade_color[fp->shade - 1].a) / 0xFF;

    fp->handicap = ft_desc->handicap;
    fp->cp_level = ft_desc->cp_level;

    fp->unk_ft_0x178 = 0;
    fp->unk_ft_0x3C = 0;
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

    fp->unk_ft_0x149 = ft_desc->unk_rebirth_0x1C;
    fp->team_order = ft_desc->team_order;
    fp->dl_link = FTRENDER_DLLINK_DEFAULT;

    fp->is_ignore_magnify = ft_desc->is_skip_magnify;

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

    fp->joint[nFTPartsJointTopN]->ommtx[0]->unk05 = ft_desc->unk_rebirth_0x1D;

    func_ovl0_800C8DB4(DObjGetStruct(fighter_gobj), attributes->common_parts_container, fp->detail_current, &fp->joint[nFTPartsJointEnumMax], attributes->unk_ftca_0x29C, 0x4B, 0, 0, fp->costume, fp->unk_ft_0x149);

    for (i = 0; i < ARRAY_COUNT(fp->joint); i++)
    {
        if (fp->joint[i] != NULL)
        {
            fp->joint[i]->user_data.p = ftManagerGetNextPartsAlloc();

            ft_parts = fp->joint[i]->user_data.p;
            ft_parts->flags = attributes->common_parts_container->common_parts[fp->detail_current - 1].flags;
            ft_parts->joint_id = i;

            if (fp->costume != 0)
            {
                if ((attributes->mesh != NULL) && (i == attributes->mesh->joint_id))
                {
                    ft_mesh = attributes->mesh;

                    ft_parts->gobj = omMakeGObjSPAfter(nOMObjCommonKindFighterParts, NULL, nOMObjCommonLinkIDFighterParts, GOBJ_LINKORDER_DEFAULT);

                    omAddDObjForGObj(ft_parts->gobj, ft_mesh->dl);
                    func_ovl0_800C8CB8(DObjGetStruct(ft_parts->gobj), ft_mesh->mobjsub, ft_mesh->costume_matanim_joint, NULL, fp->costume);
                }
            }
        }
    }
    for (i = nFTPartsJointEnumMax; i < ARRAY_COUNT(fp->joint); i++)
    {
        if (fp->joint[i] != NULL)
        {
            fp->joint_drawstatus[i - nFTPartsJointEnumMax].drawstatus_default = 
            fp->joint_drawstatus[i - nFTPartsJointEnumMax].drawstatus_current = (fp->joint[i]->display_ptr != NULL) ? 0 : -1;
        }
    }
    for (i = 0; i < ARRAY_COUNT(fp->texture_drawstatus); i++)
    {
        fp->texture_drawstatus[i].drawstatus_default = fp->texture_drawstatus[i].drawstatus_current = 0;
    }
    ftParamSetAnimLocks(fp);

    fp->input.pl.stick_range.x = fp->input.pl.stick_range.y = fp->input.pl.stick_prev.x = fp->input.pl.stick_prev.y = fp->input.cp.stick_range.x = fp->input.cp.stick_range.y = 0;
    fp->input.pl.button_hold = fp->input.pl.button_tap = fp->input.cp.button_inputs = 0;

    fp->input.controller = ft_desc->controller;

    fp->input.button_mask_a = ft_desc->button_mask_a;
    fp->input.button_mask_b = ft_desc->button_mask_b;
    fp->input.button_mask_z = ft_desc->button_mask_z;
    fp->input.button_mask_l = ft_desc->button_mask_l;

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
    fp->coll_data.coll_update_frame = gMPCollisionUpdateFrame;
    fp->coll_data.coll_mask_curr = 0;

    if (fp->status_info.pl_kind != nFTPlayerKindDemo)
    {
        omAddGObjCommonProc(fighter_gobj, ftMainProcInterruptMain, nOMObjProcessKindProc, 5);
        omAddGObjCommonProc(fighter_gobj, ftMainProcPhysicsMapDefault, nOMObjProcessKindProc, 4);
        omAddGObjCommonProc(fighter_gobj, ftMainProcPhysicsMapCapture, nOMObjProcessKindProc, 3);
        omAddGObjCommonProc(fighter_gobj, ftMainProcSearchAllCatch, nOMObjProcessKindProc, 2);
        omAddGObjCommonProc(fighter_gobj, ftMainProcSearchAllHit, nOMObjProcessKindProc, 1);
        omAddGObjCommonProc(fighter_gobj, ftMainProcUpdateMain, nOMObjProcessKindProc, 0);
    }
    else omAddGObjCommonProc(fighter_gobj, func_ovl1_80390584, nOMObjProcessKindProc, 5);

    ftManagerInitFighter(fighter_gobj, ft_desc);

    if (fp->status_info.pl_kind == nFTPlayerKindCom)
    {
        ftComputerSetupAll(fighter_gobj);
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
        mpCommonSetFighterWaitOrFall(fighter_gobj);
        break;

    default:
        if (ft_desc->is_skip_entry)
        {
            mpCommonSetFighterWaitOrFall(fighter_gobj);
            ftParamLockPlayerControl(fighter_gobj);
        }
        else
        {
            ftCommonEntrySetStatus(fighter_gobj);
            ftParamLockPlayerControl(fighter_gobj);
        }
        break;
    }
    if ((fp->status_info.pl_kind == nFTPlayerKindMan) || (fp->status_info.pl_kind == nFTPlayerKindCom))
    {
        ftComputerSetFighterHurtboxSizeInfo(fighter_gobj);
    }
    if ((fp->status_info.pl_kind != nFTPlayerKindDemo) && !(ft_desc->is_skip_shadow_setup))
    {
        ftShadowMakeShadow(fighter_gobj);
    }
    return fighter_gobj;
}
