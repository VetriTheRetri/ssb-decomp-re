#include <it/item.h>
#include <ft/fighter.h>
#include <gm/gmmatch.h>

void func_ovl3_80172310(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->rotate_step = (ip->attributes->spin_speed != 0) ? (ip->attributes->spin_speed * ITEM_SPIN_SPEED_FRACTION_DEFAULT * ITEM_SPIN_SPEED_MUL_DEFAULT) : 0.0F;

    if (ip->lr == LEFT)
    {
        ip->rotate_step = -ip->rotate_step;
    }
}

void func_ovl3_80172394(GObj *item_gobj, bool32 is_prev_spawn)
{
    // is_prev_spawn = whether article is newly spawned or previously spawned; 0 = new, 1 = old

    itStruct *ip = itGetStruct(item_gobj); // Ternary doesn't match here smh

    if (is_prev_spawn == FALSE)
    {
        if (ip->attributes->spin_speed != 0)
        {
            ip->rotate_step = ip->attributes->spin_speed * ITEM_SPIN_SPEED_FRACTION_DEFAULT * ITEM_SPIN_SPEED_MUL_NEW_SPAWN;
        }
        else ip->rotate_step = 0.0F;
    }
    else if (ip->attributes->spin_speed != 0)
    {
        ip->rotate_step = ip->attributes->spin_speed * ITEM_SPIN_SPEED_FRACTION_DEFAULT * ITEM_SPIN_SPEED_MUL_PREV_SPAWN;
    }
    else ip->rotate_step = 0.0F;
}

void func_ovl3_8017245C(GObj *item_gobj, f32 *spin_speed, bool32 is_smash_throw)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->rotate_step = (is_smash_throw != FALSE) ? ITEM_SPIN_SPEED_SET_SMASH_THROW : ITEM_SPIN_SPEED_SET_NORMAL_THROW;

    if (*spin_speed < 0) // Facing direction, sort of
    {
        ip->rotate_step = -ip->rotate_step;
    }
    ip->rotate_step = (ip->attributes->spin_speed != 0) ? (ip->attributes->spin_speed * ITEM_SPIN_SPEED_FRACTION_DEFAULT * ip->rotate_step) : 0.0F;
}

// 0x80172508
void itMain_VelSetRotateStepLR(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->lr = (ip->phys_info.vel_air.x >= 0.0F) ? RIGHT : LEFT;

    func_ovl3_80172310(item_gobj);
}

// 0x80172558
void itMain_UpdateGravityClampTVel(itStruct *ip, f32 gravity, f32 terminal_velocity)
{
    ip->phys_info.vel_air.y -= gravity;

    if (func_ovl0_800C7A84(&ip->phys_info.vel) > terminal_velocity)
    {
        func_ovl0_800C7A00(&ip->phys_info.vel);
        func_ovl0_800C7AE0(&ip->phys_info.vel, terminal_velocity);
    }
}

extern s32 gItemDisplayMode; // Static (.bss)

// 0x801725BC
void itMain_ResetPlayerVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->owner_gobj = NULL;
    ip->team = ITEM_TEAM_DEFAULT;
    ip->player = ITEM_PORT_DEFAULT;
    ip->handicap = ITEM_HANDICAP_DEFAULT;
    ip->player_number = 0;
    ip->item_hit.stale = ITEM_STALE_DEFAULT;

    ip->display_mode = gItemDisplayMode;
}

// 0x801725F8
void itMain_ClearHitRecord(itStruct *ip)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(ip->item_hit.hit_targets); i++)
    {
        gmHitCollisionRecord *targets = &ip->item_hit.hit_targets[i];

        targets->victim_gobj = NULL;

        targets->victim_flags.is_interact_hurt = targets->victim_flags.is_interact_shield = targets->victim_flags.is_interact_reflect = FALSE;

        targets->victim_flags.timer_rehit = 0;

        targets->victim_flags.interact_mask = GMHITCOLLISION_MASK_ALL;
    }
}

// 0x8017275C
void itMain_RefreshHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_ClearHitRecord(ip);

    ip->item_hit.update_state = gmHitCollision_UpdateState_New;

    itManager_UpdateHitPositions(item_gobj);
}

// 0x8017279C
void itMain_ClearOwnerStats(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_damage_all = TRUE;

    ip->owner_gobj = NULL;

    ip->team = ITEM_TEAM_DEFAULT;
}

// 0x801727BC
void itMain_CopyDamageStats(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->owner_gobj = ip->damage_gobj;
    ip->team = ip->damage_team;
    ip->player = ip->damage_port;
    ip->player_number = ip->player_number; // Could potentially cause a bug? Didn't they mean damage_player_number?
    ip->handicap = ip->damage_handicap;
    ip->display_mode = ip->damage_display_mode;
}

// 0x801727F4
s32 itMain_GetDamageOutput(itStruct *ip)
{
    s32 damage;

    if (ip->is_thrown)
    {
        f32 mag = vec3f_mag(&ip->phys_info.vel) * 0.1F;

        damage = (ip->item_hit.damage + mag) * ip->item_hit.stale;
    }
    else damage = ip->item_hit.damage;

    return (damage * ip->item_hit.throw_mul) + 0.999F;
}

// 0x80172890
bool32 itMain_CheckShootNoAmmo(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (((ip->it_kind == It_Kind_StarRod) || (ip->it_kind == It_Kind_LGun) || (ip->it_kind == It_Kind_FFlower)) && (ip->it_multi == 0))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x801728D4
void itMain_DestroyItem(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if ((ip->is_hold) && (ip->owner_gobj != NULL))
    {
        ftStruct *fp = ftGetStruct(ip->owner_gobj);

        fp->item_hold = NULL;

        ftCommon_GetHammerSetBGM(ip->owner_gobj);
    }
    else if ((ip->it_kind < It_Kind_GrMonsterStart) || (ip->it_kind > It_Kind_GrMonsterMax))
    {
        efParticle_DustExpandLarge_MakeEffect(&DObjGetStruct(item_gobj)->translate);
    }
    if (ip->indicator_gobj != NULL)
    {
        omEjectGObjCommon(ip->indicator_gobj);
    }
    itManager_SetPrevAlloc(ip);
    omEjectGObjCommon(item_gobj);
}

// 0x80172984
void itMain_SetFighterRelease(GObj *item_gobj, Vec3f *vel, f32 stale, u16 stat_flags, u16 stat_count) // Very high probability that Link's Bomb erroneously declares this without flag1 and flag2
{
    itStruct *ip = itGetStruct(item_gobj);
    GObj *fighter_gobj = ip->owner_gobj;
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    s32 joint_index;

    func_ovl0_800C9424(DObjGetStruct(item_gobj));

    pos.x = pos.y = pos.z = 0.0F;

    joint_index = (ip->weight == It_Weight_Heavy) ? fp->attributes->joint_itemhold_heavy : fp->attributes->joint_itemhold_light;

    func_ovl2_800EDF24(fp->joint[joint_index], &pos);

    DObjGetStruct(item_gobj)->translate.x = pos.x;
    DObjGetStruct(item_gobj)->translate.y = pos.y;
    DObjGetStruct(item_gobj)->translate.z = 0.0F;

    func_ovl2_800DF058(item_gobj, fp->coll_data.p_translate, &fp->coll_data);

    fp->item_hold = NULL;

    ip->is_hold = FALSE;

    ip->phys_info.vel = *vel;

    vec3f_scale(&ip->phys_info.vel, ip->vel_scale);

    ip->times_thrown++;
    ip->is_thrown = TRUE;

    ip->item_hit.stale = stale;

    ip->item_hit.stat_flags = *(gmStatFlags*)&stat_flags;
    ip->item_hit.stat_count = stat_count;

    ftCommon_GetHammerSetBGM(fighter_gobj);
    itMain_RefreshHit(item_gobj);
}

extern void (*itCommon_Drop_ProcList[It_Kind_EnumMax])(GObj*); // Assumed to contain 45 callbacks?

// 0x80172AEC
void itMain_SetFighterDrop(GObj *item_gobj, Vec3f *vel, f32 stale)
{
    itStruct *ip = itGetStruct(item_gobj);
    GObj *owner_gobj = ip->owner_gobj;
    ftStruct *fp = ftGetStruct(owner_gobj);
    void (*proc_drop)(GObj*) = itCommon_Drop_ProcList[ip->it_kind];

    if (proc_drop != NULL)
    {
        proc_drop(item_gobj);
    }
    itMain_SetFighterRelease(item_gobj, vel, stale, ftStatus_AttackIndex_ItemThrow, fp->stat_count);

    func_800269C0(ip->drop_sfx);
}

extern void (*itCommon_Throw_ProcList[It_Kind_EnumMax])(GObj*); 

// 0x80172B78
void itMain_SetFighterThrow(GObj *item_gobj, Vec3f *vel, f32 stale, bool32 is_smash_throw)
{
    itStruct *ip = itGetStruct(item_gobj);
    GObj *owner_gobj = ip->owner_gobj;
    ftStruct *fp = ftGetStruct(owner_gobj);
    void (*proc_throw)(GObj*);

    if (ip->weight == It_Weight_Light)
    {
        if (is_smash_throw != FALSE)
        {
            ftMain_MakeRumble(fp, 6, 0);
        }
    }
    else
    {
        ftMain_MakeRumble(fp, (is_smash_throw != FALSE) ? 9 : 6, 0);
    }
    proc_throw = itCommon_Throw_ProcList[ip->it_kind];

    if (proc_throw != NULL)
    {
        proc_throw(item_gobj);
    }
    itMain_SetFighterRelease(item_gobj, vel, stale, fp->stat_flags.halfword, fp->stat_count);

    efParticle_SparkleWhiteScale_MakeEffect(&DObjGetStruct(item_gobj)->translate, 1.0F);

    func_800269C0((is_smash_throw != FALSE) ? ip->throw_sfx : ip->drop_sfx);

    func_ovl3_8017245C(item_gobj, vel, is_smash_throw);
}

extern void (*itCommon_Pickup_ProcList[It_Kind_EnumMax])(GObj*);

// 0x80172CA4
void itMain_SetFighterHold(GObj *item_gobj, GObj *fighter_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *joint;
    void (*proc_pickup)(GObj*);
    Vec3f pos;
    s32 joint_index;

    fp->item_hold = item_gobj;
    ip->owner_gobj = fighter_gobj;

    ip->is_allow_pickup = FALSE;
    ip->is_hold = TRUE;

    ip->team = fp->team;
    ip->player = fp->player;
    ip->handicap = fp->handicap;
    ip->player_number = fp->player_number;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    ip->display_mode = fp->display_mode;

    itMap_SetAir(ip);

    joint = func_800092D0(item_gobj, NULL);

    joint->unk_0xC->unk_0x8 = NULL;
    joint->unk_0xC = NULL;
    joint->next = DObjGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->prev = joint;

    item_gobj->obj = joint;

    func_80008CC0(joint, 0x52, 0);

    joint_index = (ip->weight == It_Weight_Heavy) ? fp->attributes->joint_itemhold_heavy : fp->attributes->joint_itemhold_light;

    joint->unk_0x84 = fp->joint[joint_index];

    pos.x = 0.0F;
    pos.y = 0.0F;
    pos.z = 0.0F;

    func_ovl2_800EDF24(fp->joint[joint_index], &pos);

    func_ovl2_80104458(&pos);

    func_8000F988(item_gobj, ip->attributes->unk_0x0);

    proc_pickup = itCommon_Pickup_ProcList[ip->it_kind];

    if (proc_pickup != NULL)
    {
        proc_pickup(item_gobj);
    }
    ftLink_SetModelPartHideShield(fighter_gobj);

    if (ip->weight == It_Weight_Light)
    {
        func_800269C0(0x31U);
    }
    else if (fp->attributes->heavyget_sfx != 0x2B7)
    {
        func_800269C0(fp->attributes->heavyget_sfx);
    }
    
    ftMain_MakeRumble(fp, 6, 0);

    ip->pickup_wait = ITEM_PICKUP_WAIT_DEFAULT;
}

// 0x80172E74
void itMain_SetGroundAllowPickup(GObj *item_gobj) // Airborne item becomes grounded?
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

    ip->is_allow_pickup = TRUE;

    ip->times_landed = 0;

    itMain_ResetPlayerVars(item_gobj);
    itMap_SetGround(ip);
}

// 0x80172EC8
void itMain_SetItemStatus(GObj *item_gobj, itStatusDesc *status_desc, s32 status_id) // Change article state
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->proc_update    = status_desc[status_id].proc_update;
    ip->proc_map       = status_desc[status_id].proc_map;
    ip->proc_hit       = status_desc[status_id].proc_hit;
    ip->proc_shield    = status_desc[status_id].proc_shield;
    ip->proc_hop       = status_desc[status_id].proc_hop;
    ip->proc_setoff    = status_desc[status_id].proc_setoff;
    ip->proc_reflector = status_desc[status_id].proc_reflector;
    ip->proc_damage    = status_desc[status_id].proc_damage;

    ip->is_thrown = FALSE;

    ip->item_hit.stat_flags.attack_group_id = ftStatus_AttackIndex_Null;
    ip->item_hit.stat_flags.is_smash_attack = ip->item_hit.stat_flags.is_ground_or_air = ip->item_hit.stat_flags.is_special_attack = FALSE;

    ip->item_hit.stat_count = gmCommon_GetStatUpdateCountInc();
}

// 0x80172F98
bool32 itMain_CheckSetColAnimIndex(GObj *item_gobj, s32 colanim_id, s32 duration)
{
    itStruct *ip = itGetStruct(item_gobj);

    return caCheckSetColAnimIndex(&ip->colanim, colanim_id, duration);
}

// 0x80172FBC
void itMain_ResetColAnim(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    caResetColAnim(&ip->colanim);
}

// 0x80172FE0
void itMain_VelSetRebound(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x *= -0.06F;

    ip->phys_info.vel_air.y = (ip->phys_info.vel_air.y * -0.3F) + 25.0F;
}

 // Oh my...

typedef struct Unk_8017301C_Halfword // CODE RED, return to this later (it matches but NEEDS cleanup)
{
    u16 unk_0x0[1];

} Unk_8017301C_Halfword;

typedef struct ItemSettingsUnk
{
    s32 unk_0x0;
    s32 unk_0x4;
    u8 unk_0x8;
    s32 unk_0xC;
    u16 unk_0x10;
    Unk_8017301C_Halfword *unk_0x14;

} ItemSettingsUnk;

s32 func_ovl3_8017301C(s32 arg0, Unk_8018D048 *arg1, s32 arg2, u32 arg3) // Recursive!
{
    u32 temp_v0; s32 temp_v1;
    Unk_8017301C_Halfword *temp_t0;

    if (arg3 == (arg2 + 1)) return arg2;

    temp_v1 = (arg2 + arg3) / 2;

    if (arg0 < arg1->unk_0x14[temp_v1])
    {
        func_ovl3_8017301C(arg0, arg1, arg2, temp_v1);
    }
    else if (arg0 < arg1->unk_0x14[temp_v1 + 1])
    {
        return temp_v1;
    }
    else func_ovl3_8017301C(arg0, arg1, temp_v1, arg3);
}

u8 func_ovl3_80173090(Unk_8018D048 *arg0) // Might actually be raw u8
{
    return *(u8*)(func_ovl3_8017301C(lbRandom_GetIntRange((s32)arg0->unk_0x10), arg0, 0, arg0->unk_0x8) + arg0->unk_0xC);
}

extern intptr_t hal_ld_article_floats;

static Unk_8018D048 D_ovl3_8018D048;

// 0x801730D4
bool32 func_ovl3_801730D4(GObj *gobj)
{
    s32 unused;
    s32 index;
    Vec3f vel; // Item's spawn velocity when falling out of a container

    if (D_ovl3_8018D048.unk_0x10 != 0)
    {
        index = func_ovl3_80173090(&D_ovl3_8018D048);

        if (index < It_Kind_CommonMax)
        {
            vel.x = 0.0F;
            vel.y = *(f32*)((intptr_t)&hal_ld_article_floats + ((uintptr_t)&gpItemFileData->spawn_vel_y[index])); // Linker thing
            vel.z = 0;

            if (itManager_MakeItemSetupCommon(gobj, index, &DObjGetStruct(gobj)->translate, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM)) != NULL)
            {
                func_ovl3_80172394(gobj, TRUE);
            }
            return TRUE;
        }
    }
    return FALSE;
}

// 0x80173180
void itMain_UpdateHitEvent(GObj *item_gobj, itHitEvent *ev)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == ev[ip->item_event_index].timer)
    {
        ip->item_hit.angle  = ev[ip->item_event_index].angle;
        ip->item_hit.damage = ev[ip->item_event_index].damage;
        ip->item_hit.size   = ev[ip->item_event_index].size;

        ip->item_event_index++;

        if (ip->item_event_index == 4)
        {
            ip->item_event_index = 3;
        }
    }
}

extern s8 gmBonusStat_MewCatcher;

// 0x80173328
GObj* itMain_CreateMonster(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    GObj *monster_gobj;
    itStruct *mp;
    s32 i, j;
    s32 index;
    s32 unused;
    Vec3f vel;

    vel.x = 0.0F;
    vel.y = 16.0F;
    vel.z = 0.0F;

    // Is this checking to spawn Mew? Can only spawn once at least one character has been unlocked.
    if ((gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_NEWCOMERS) && (lbRandom_GetIntRange(151) == 0) && (gMonsterData.monster_curr != It_Kind_Mew) && (gMonsterData.monster_prev != It_Kind_Mew))
    {
        index = It_Kind_Mew;
    }
    else
    {
        for (i = j = It_Kind_MbMonsterStart; i < It_Kind_MbMonsterMax; i++) // Pokémon IDs
        {
            if ((i != gMonsterData.monster_curr) && (i != gMonsterData.monster_prev))
            {
                gMonsterData.monster_index[j - It_Kind_MbMonsterStart] = i;
                j++;
            }
        }
        index = gMonsterData.monster_index[lbRandom_GetIntRange(gMonsterData.monster_count)];
    }
    if (gMonsterData.monster_count != 10)
    {
        gMonsterData.monster_count--;
    }
    gMonsterData.monster_prev = gMonsterData.monster_curr;
    gMonsterData.monster_curr = index;

    monster_gobj = itManager_MakeItemIndex(item_gobj, index, &DObjGetStruct(item_gobj)->translate, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

    if (monster_gobj != NULL)
    {
        mp = itGetStruct(monster_gobj);

        mp->owner_gobj = ip->owner_gobj;
        mp->team = ip->team;
        mp->player = ip->player;
        mp->handicap = ip->handicap;
        mp->player_number = ip->player_number;
        mp->display_mode = ip->display_mode;

        if (gpBattleState->game_type == gmMatch_GameType_1PGame)
        {
            if ((mp->player == gSceneData.player_port) && (mp->it_kind == It_Kind_Mew))
            {
                gmBonusStat_MewCatcher = TRUE;
            }
        }
    }
    return monster_gobj;
}

// 0x801733E4
bool32 itCommon_SDefault_ProcHop(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    func_80019438(&ip->phys_info.vel, &ip->shield_collide_vec, ip->shield_collide_angle * 2);
    itMain_VelSetRotateStepLR(item_gobj);

    return FALSE;
}

// 0x80173434
bool32 itCommon_SDefault_ProcReflector(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);

    if ((ip->phys_info.vel_air.x * fp->lr) < 0.0F)
    {
        ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;
    }
    return FALSE;
}