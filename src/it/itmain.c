#include <it/item.h>
#include <ft/fighter.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITContainerSpawnVelY;  // 0x00000000
extern ub8 g1PGameBonusStatMewCatcher;

extern alSoundEffect* func_800269C0_275C0(u16);
extern void func_8000F988();

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80189520
void (*dITDropProcList[/* */])(GObj*) =
{
    // Containers
    itBoxFDropSetStatus,                // Box
    itTaruFDropSetStatus,               // Barrel
    itCapsuleFDropSetStatus,            // Capsule
    itEggFDropSetStatus,                // Egg
    
    // Usable items
    itTomatoFDropSetStatus,             // Maxim Tomato
    itHeartFDropSetStatus,              // Heart Container
    NULL,                               // Star Man
    itSwordFDropSetStatus,              // Beam Sword
    itBatFDropSetStatus,                // Home Run Bat
    itHarisenFDropSetStatus,            // Fan
    itStarRodFDropSetStatus,            // Star Rod
    itLGunFDropSetStatus,               // Ray Gun
    itFFlowerFDropSetStatus,            // Fire Flower
    itHammerFDropSetStatus,             // Hammer
    itMSBombFDropSetStatus,             // Motion-sensor Bomb
    itBombHeiFDropSetStatus,            // Bob-omb
    itNBumperFDropSetStatus,            // Normal Bumper
    itGShellFDropSetStatus,             // Green Shell
    itRShellFDropSetStatus,             // Red Shell
    itMBallFDropSetStatus,              // Poké Ball

    // Fighter items
    NULL,                               // Ness PK Fire
    itLinkBombFDropSetStatus            // Link Bomb
};

// 0x80189578
void (*dITThrowProcList[/* */])(GObj*) =
{
    // Containers
    itBoxFThrowSetStatus,               // Box
    itTaruFThrowSetStatus,              // Barrel
    itCapsuleFThrowSetStatus,           // Capsule
    itEggFThrowSetStatus,               // Egg
    
    // Usable items
    NULL,                               // Maxim Tomato
    NULL,                               // Heart Container
    NULL,                               // Star Man
    itSwordFThrowSetStatus,             // Beam Sword
    itBatFThrowSetStatus,               // Home Run Bat
    itHarisenFThrowSetStatus,           // Fan
    itStarRodFThrowSetStatus,           // Star Rod
    itLGunFThrowSetStatus,              // Ray Gun
    itFFlowerFThrowSetStatus,           // Fire Flower
    itHammerFThrowSetStatus,            // Hammer
    itMSBombFThrowSetStatus,            // Motion-sensor Bomb
    itBombHeiFThrowSetStatus,           // Bob-omb
    itNBumperFThrowSetStatus,           // Normal Bumper
    itGShellFThrowSetStatus,            // Green Shell
    itRShellFThrowSetStatus,            // Red Shell
    itMBallFThrowSetStatus,             // Poké Ball

    // Fighter items
    NULL,                               // Ness PK Fire
    itLinkBombFThrowSetStatus           // Link Bomb
};

// 0x801895D0
void (*dITPickupProcList[/* */])(GObj*) =
{
    // Containers
    itBoxFHoldSetStatus,                // Box
    itTaruFHoldSetStatus,               // Barrel
    itCapsuleFHoldSetStatus,            // Capsule
    itEggFHoldSetStatus,                // Egg

    // Usable items
    NULL,                               // Maxim Tomato
    NULL,                               // Heart Container
    NULL,                               // Star Man
    itSwordFHoldSetStatus,              // Beam Sword
    itBatFHoldSetStatus,                // Home Run Bat
    itHarisenFHoldSetStatus,            // Fan
    itStarRodFHoldSetStatus,            // Star Rod
    itLGunFHoldSetStatus,               // Ray Gun
    itFFlowerFHoldSetStatus,            // Fire Flower
    itHammerFHoldSetStatus,             // Hammer
    itMSBombFHoldSetStatus,             // Motion-sensor Bomb
    itBombHeiFHoldSetStatus,            // Bob-omb
    itNBumperFHoldSetStatus,            // Normal Bumper
    itGShellFHoldSetStatus,             // Green Shell
    itRShellFHoldSetStatus,             // Red Shell
    itMBallFHoldSetStatus,              // Poké Ball

    // Fighter items
    NULL,                               // Ness PK Fire
    itLinkBombFHoldSetStatus            // Link Bomb
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80172310
void func_ovl3_80172310(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->rotate_step = (ip->attributes->spin_speed != 0) ? (ip->attributes->spin_speed * ITEM_SPIN_SPEED_FRACTION_DEFAULT * ITEM_SPIN_SPEED_MUL_DEFAULT) : 0.0F;

    if (ip->lr == LR_Left)
    {
        ip->rotate_step = -ip->rotate_step;
    }
}

// 0x80172394
void func_ovl3_80172394(GObj *item_gobj, sb32 is_prev_spawn)
{
    // is_prev_spawn = whether item is newly spawned or previously spawned; 0 = new, 1 = old

    itStruct *ip = itGetStruct(item_gobj);

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

// 0x8017245C
void func_ovl3_8017245C(GObj *item_gobj, Vec3f *vel, sb32 is_smash_throw)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->rotate_step = (is_smash_throw != FALSE) ? ITEM_SPIN_SPEED_SET_SMASH_THROW : ITEM_SPIN_SPEED_SET_NORMAL_THROW;

    if (vel->x < 0) // Facing direction, sort of
    {
        ip->rotate_step = -ip->rotate_step;
    }
    ip->rotate_step = (ip->attributes->spin_speed != 0) ? (ip->attributes->spin_speed * ITEM_SPIN_SPEED_FRACTION_DEFAULT * ip->rotate_step) : 0.0F;
}

// 0x80172508
void itMainVelSetRotateStepLR(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->lr = (ip->phys_info.vel_air.x >= 0.0F) ? LR_Right : LR_Left;

    func_ovl3_80172310(item_gobj);
}

// 0x80172558
void itMainApplyGClampTVel(itStruct *ip, f32 gravity, f32 terminal_velocity)
{
    ip->phys_info.vel_air.y -= gravity;

    if (func_ovl0_800C7A84(&ip->phys_info.vel_air) > terminal_velocity)
    {
        func_ovl0_800C7A00(&ip->phys_info.vel_air);
        func_ovl0_800C7AE0(&ip->phys_info.vel_air, terminal_velocity);
    }
}

// 0x801725BC
void itMainResetPlayerVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->owner_gobj = NULL;
    ip->team = ITEM_TEAM_DEFAULT;
    ip->player = ITEM_PORT_DEFAULT;
    ip->handicap = ITEM_HANDICAP_DEFAULT;
    ip->player_number = 0;
    ip->item_hit.throw_mul = ITEM_THROW_DEFAULT;

    ip->display_mode = gITDisplayMode;
}

// 0x801725F8
void itMainClearHitRecord(itStruct *ip)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(ip->item_hit.hit_targets); i++)
    {
        gmHitRecord *targets = &ip->item_hit.hit_targets[i];

        targets->victim_gobj = NULL;

        targets->victim_flags.is_interact_hurt = targets->victim_flags.is_interact_shield = targets->victim_flags.is_interact_reflect = FALSE;

        targets->victim_flags.timer_rehit = 0;

        targets->victim_flags.group_id = 7;
    }
}

// 0x8017275C
void itMainRefreshHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainClearHitRecord(ip);

    ip->item_hit.update_state = gmHitCollision_UpdateState_New;

    itManagerUpdateHitPositions(item_gobj);
}

// 0x8017279C
void itMainClearOwnerStats(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_damage_all = TRUE;

    ip->owner_gobj = NULL;

    ip->team = ITEM_TEAM_DEFAULT;
}

// 0x801727BC
void itMainCopyDamageStats(GObj *item_gobj)
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
s32 itMainGetDamageOutput(itStruct *ip)
{
    s32 damage;

    if (ip->is_thrown)
    {
        f32 mag = lbVector_Vec3fMagnitude(&ip->phys_info.vel_air) * 0.1F;

        damage = (ip->item_hit.damage + mag) * ip->item_hit.throw_mul;
    }
    else damage = ip->item_hit.damage;

    return (damage * ip->item_hit.stale) + 0.999F;
}

// 0x80172890
sb32 itMainCheckShootNoAmmo(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (((ip->it_kind == It_Kind_StarRod) || (ip->it_kind == It_Kind_LGun) || (ip->it_kind == It_Kind_FFlower)) && (ip->it_multi == 0))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x801728D4
void itMainDestroyItem(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if ((ip->is_hold) && (ip->owner_gobj != NULL))
    {
        ftStruct *fp = ftGetStruct(ip->owner_gobj);

        fp->item_hold = NULL;

        ftCommon_GetHammerSetBGM(ip->owner_gobj);
    }
    else if ((ip->it_kind < It_Kind_GrMonsterStart) || (ip->it_kind > It_Kind_GrMonsterEnd))
    {
        efParticle_DustExpandLarge_MakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);
    }
    if (ip->indicator_gobj != NULL)
    {
        omEjectGObj(ip->indicator_gobj);
    }
    itManagerSetPrevAlloc(ip);
    omEjectGObj(item_gobj);
}

// 0x80172984
void itMainSetFighterRelease(GObj *item_gobj, Vec3f *vel, f32 stale, u16 stat_flags, u16 stat_count) // Very high probability that Link's Bomb erroneously declares this without flag1 and flag2
{
    itStruct *ip = itGetStruct(item_gobj);
    GObj *fighter_gobj = ip->owner_gobj;
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    s32 joint_id;

    func_ovl0_800C9424(DObjGetStruct(item_gobj));

    pos.x = pos.y = pos.z = 0.0F;

    joint_id = (ip->weight == It_Weight_Heavy) ? fp->attributes->joint_itemhold_heavy : fp->attributes->joint_itemhold_light;

    ftParts_GetDObjWorldPosition(fp->joint[joint_id], &pos);

    DObjGetStruct(item_gobj)->translate.vec.f.x = pos.x;
    DObjGetStruct(item_gobj)->translate.vec.f.y = pos.y;
    DObjGetStruct(item_gobj)->translate.vec.f.z = 0.0F;

    itMapRunCollisionDefault(item_gobj, fp->coll_data.p_translate, &fp->coll_data);

    fp->item_hold = NULL;

    ip->is_hold = FALSE;

    ip->phys_info.vel_air = *vel;

    lbVector_Vec3fScale(&ip->phys_info.vel_air, ip->vel_scale);

    ip->times_thrown++;
    ip->is_thrown = TRUE;

    ip->item_hit.throw_mul = stale;

    ip->item_hit.stat_flags = *(gmStatFlags*)&stat_flags;
    ip->item_hit.stat_count = stat_count;

    ftCommon_GetHammerSetBGM(fighter_gobj);
    itMainRefreshHit(item_gobj);
}

// 0x80172AEC
void itMainSetFighterDrop(GObj *item_gobj, Vec3f *vel, f32 stale)
{
    itStruct *ip = itGetStruct(item_gobj);
    GObj *owner_gobj = ip->owner_gobj;
    ftStruct *fp = ftGetStruct(owner_gobj);
    void (*proc_drop)(GObj*) = dITDropProcList[ip->it_kind];

    if (proc_drop != NULL)
    {
        proc_drop(item_gobj);
    }
    itMainSetFighterRelease(item_gobj, vel, stale, ftStatus_AttackIndex_ItemThrow, fp->stat_count);

    func_800269C0_275C0(ip->drop_sfx);
}

// 0x80172B78
void itMainSetFighterThrow(GObj *item_gobj, Vec3f *vel, f32 stale, sb32 is_smash_throw)
{
    itStruct *ip = itGetStruct(item_gobj);
    GObj *owner_gobj = ip->owner_gobj;
    ftStruct *fp = ftGetStruct(owner_gobj);
    void (*proc_throw)(GObj*);

    if (ip->weight == It_Weight_Light)
    {
        if (is_smash_throw != FALSE)
        {
            ftMainMakeRumble(fp, 6, 0);
        }
    }
    else ftMainMakeRumble(fp, (is_smash_throw != FALSE) ? 9 : 6, 0);
    
    proc_throw = dITThrowProcList[ip->it_kind];

    if (proc_throw != NULL)
    {
        proc_throw(item_gobj);
    }
    itMainSetFighterRelease(item_gobj, vel, stale, fp->stat_flags.halfword, fp->stat_count);

    efParticle_SparkleWhiteScale_MakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f, 1.0F);

    func_800269C0_275C0((is_smash_throw != FALSE) ? ip->smash_sfx : ip->throw_sfx);

    func_ovl3_8017245C(item_gobj, vel, is_smash_throw);
}

// 0x80172CA4
void itMainSetFighterHold(GObj *item_gobj, GObj *fighter_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *joint;
    void (*proc_pickup)(GObj*);
    Vec3f pos;
    s32 joint_id;

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

    itMapSetAir(ip);

    joint = omAddDObjForGObj(item_gobj, NULL);

    joint->sib_prev->sib_next = NULL;
    joint->sib_prev = NULL;
    joint->child = DObjGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->parent = joint;

    item_gobj->obj = joint;

    omAddOMMtxForDObjFixed(joint, 0x52, 0);

    joint_id = (ip->weight == It_Weight_Heavy) ? fp->attributes->joint_itemhold_heavy : fp->attributes->joint_itemhold_light;

    joint->user_data.p = fp->joint[joint_id];

    pos.x = 0.0F;
    pos.y = 0.0F;
    pos.z = 0.0F;

    ftParts_GetDObjWorldPosition(fp->joint[joint_id], &pos);

    efParticle_ItemPickupSwirl_ProcUpdate(&pos);

    func_8000F988(item_gobj, ip->attributes->model_desc);

    proc_pickup = dITPickupProcList[ip->it_kind];

    if (proc_pickup != NULL)
    {
        proc_pickup(item_gobj);
    }
    ftLink_SetModelPartHideShield(fighter_gobj);

    if (ip->weight == It_Weight_Light)
    {
        func_800269C0_275C0(alSound_SFX_ItemPickup);
    }
    else if (fp->attributes->heavyget_sfx != 0x2B7)
    {
        func_800269C0_275C0(fp->attributes->heavyget_sfx);
    }
    
    ftMainMakeRumble(fp, 6, 0);

    ip->pickup_wait = ITEM_PICKUP_WAIT_DEFAULT;
}

// 0x80172E74
void itMainSetGroundAllowPickup(GObj *item_gobj) // Airborne item becomes grounded?
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

    ip->is_allow_pickup = TRUE;

    ip->times_landed = 0;

    itMainResetPlayerVars(item_gobj);
    itMapSetGround(ip);
}

// 0x80172EC8
void itMainSetItemStatus(GObj *item_gobj, itStatusDesc *status_desc, s32 status_id) // Change item state
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

    ip->item_hit.stat_flags.stat_attack_id = ftStatus_AttackIndex_Null;
    ip->item_hit.stat_flags.is_smash_attack = ip->item_hit.stat_flags.is_ground_or_air = ip->item_hit.stat_flags.is_projectile = FALSE;

    ip->item_hit.stat_count = gmCommon_GetStatUpdateCountInc();
}

// 0x80172F98
sb32 itMainCheckSetColAnimID(GObj *item_gobj, s32 colanim_id, s32 duration)
{
    itStruct *ip = itGetStruct(item_gobj);

    return caCheckSetColAnimIndex(&ip->colanim, colanim_id, duration);
}

// 0x80172FBC
void itMainClearColAnim(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    caResetColAnim(&ip->colanim);
}

// 0x80172FE0
void itMainVelSetRebound(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x *= -0.06F;
    ip->phys_info.vel_air.y = (ip->phys_info.vel_air.y * -0.3F) + 25.0F;
}

// 0x8017301C - Binary search function to get item ID for container drop?
s32 itMainSearchWeightedItemID(s32 random, itRandomWeights *weights, u32 min, u32 max) // Recursive!
{
    s32 avg;

    if (max == (min + 1))
    {
        return min;
    }
    avg = (s32) (min + max) / 2;

    if (random < weights->item_totals[avg])
    {
        itMainSearchWeightedItemID(random, weights, min, avg);
    }
    else if (random < weights->item_totals[avg + 1])
    {
        return avg;
    }
    else itMainSearchWeightedItemID(random, weights, avg, max);
}

// 0x80173090
s32 itMainGetWeightedItemID(itRandomWeights *weights)
{
    return weights->item_ids[itMainSearchWeightedItemID(mtTrigGetRandomIntRange(weights->item_num), weights, 0, weights->item_count)];
}

// 0x801730D4
sb32 itMainMakeContainerItem(GObj *spawn_gobj)
{
    s32 unused;
    s32 index;
    Vec3f vel; // Item's spawn velocity when falling out of a container

    if (gITRandomWeights.item_num != 0)
    {
        index = itMainGetWeightedItemID(&gITRandomWeights);

        if (index <= It_Kind_CommonEnd)
        {
            vel.x = 0.0F;
            vel.y = *(f32*) ((intptr_t)&lITContainerSpawnVelY + ((uintptr_t) &((u32*)gITFileData)[index])); // Linker thing; quite ridiculous especially since lITContainerSpawnVelY is 0
            vel.z = 0;

            if (itManagerMakeItemSetupCommon(spawn_gobj, index, &DObjGetStruct(spawn_gobj)->translate.vec.f, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM)) != NULL)
            {
                func_ovl3_80172394(spawn_gobj, TRUE);
            }
            return TRUE;
        }
    }
    return FALSE;
}

// 0x80173180
void itMainUpdateHitEvent(GObj *item_gobj, itHitEvent *ev)
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

// 0x80173228
GObj* itMainMakeMonster(GObj *item_gobj)
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
    if ((gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_NEWCOMERS) && (mtTrigGetRandomIntRange(151) == 0) && (gITMonsterData.monster_curr != It_Kind_Mew) && (gITMonsterData.monster_prev != It_Kind_Mew))
    {
        index = It_Kind_Mew;
    }
    else
    {
        for (i = j = It_Kind_MbMonsterStart; i < It_Kind_MbMonsterEnd; i++) // Pokémon IDs
        {
            if ((i != gITMonsterData.monster_curr) && (i != gITMonsterData.monster_prev))
            {
                gITMonsterData.monster_index[j - It_Kind_MbMonsterStart] = i;
                j++;
            }
        }
        index = gITMonsterData.monster_index[mtTrigGetRandomIntRange(gITMonsterData.monster_count)];
    }
    if (gITMonsterData.monster_count != 10)
    {
        gITMonsterData.monster_count--;
    }
    gITMonsterData.monster_prev = gITMonsterData.monster_curr;
    gITMonsterData.monster_curr = index;

    monster_gobj = itManagerMakeItemID(item_gobj, index, &DObjGetStruct(item_gobj)->translate.vec.f, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

    if (monster_gobj != NULL)
    {
        mp = itGetStruct(monster_gobj);

        mp->owner_gobj = ip->owner_gobj;
        mp->team = ip->team;
        mp->player = ip->player;
        mp->handicap = ip->handicap;
        mp->player_number = ip->player_number;
        mp->display_mode = ip->display_mode;

        if (gBattleState->game_type == gmMatch_GameType_1PGame)
        {
            if ((mp->player == gSceneData.spgame_player) && (mp->it_kind == It_Kind_Mew))
            {
                g1PGameBonusStatMewCatcher = TRUE;
            }
        }
    }
    return monster_gobj;
}

// 0x801733E4
sb32 itMainSDefaultProcHop(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    func_80019438(&ip->phys_info.vel_air, &ip->shield_collide_vec, ip->shield_collide_angle * 2);
    itMainVelSetRotateStepLR(item_gobj);

    return FALSE;
}

// 0x80173434
sb32 itMainSDefaultProcReflector(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);

    if ((ip->phys_info.vel_air.x * fp->lr) < 0.0F)
    {
        ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;
    }
    return FALSE;
}
