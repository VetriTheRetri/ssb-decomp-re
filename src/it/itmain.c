#include <it/item.h>
#include <ft/fighter.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITMainContainerVelocitiesY;  // 0x00000000
extern ub8 gGM1PGameBonusMewCatcher;

extern alSoundEffect* func_800269C0_275C0(u16);
extern void gcSetTransformVectorsAll();

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80189520
void (*dITMainProcDroppedList[/* */])(GObj*) =
{
    // Containers
    itBoxDroppedSetStatus,              // Box
    itTaruDroppedSetStatus,             // Barrel
    itCapsuleDroppedSetStatus,          // Capsule
    itEggDroppedSetStatus,              // Egg
    
    // Usable items
    itTomatoDroppedSetStatus,           // Maxim Tomato
    itHeartDroppedSetStatus,            // Heart Container
    NULL,                               // Star Man
    itSwordDroppedSetStatus,            // Beam Sword
    itBatDroppedSetStatus,              // Home Run Bat
    itHarisenDroppedSetStatus,          // Fan
    itStarRodDroppedSetStatus,          // Star Rod
    itLGunDroppedSetStatus,             // Ray Gun
    itFFlowerDroppedSetStatus,          // Fire Flower
    itHammerDroppedSetStatus,           // Hammer
    itMSBombDroppedSetStatus,           // Motion-sensor Bomb
    itBombHeiDroppedSetStatus,          // Bob-omb
    itNBumperDroppedSetStatus,          // Normal Bumper
    itGShellDroppedSetStatus,           // Green Shell
    itRShellDroppedSetStatus,           // Red Shell
    itMBallDroppedSetStatus,            // Poké Ball

    // Fighter items
    NULL,                               // Ness PK Fire
    itLinkBombDroppedSetStatus          // Link Bomb
};

// 0x80189578
void (*dITMainProcThrownList[/* */])(GObj*) =
{
    // Containers
    itBoxThrownSetStatus,               // Box
    itTaruThrownSetStatus,              // Barrel
    itCapsuleThrownSetStatus,           // Capsule
    itEggThrownSetStatus,               // Egg
    
    // Usable items
    NULL,                               // Maxim Tomato
    NULL,                               // Heart Container
    NULL,                               // Star Man
    itSwordThrownSetStatus,             // Beam Sword
    itBatThrownSetStatus,               // Home Run Bat
    itHarisenThrownSetStatus,           // Fan
    itStarRodThrownSetStatus,           // Star Rod
    itLGunThrownSetStatus,              // Ray Gun
    itFFlowerThrownSetStatus,           // Fire Flower
    itHammerThrownSetStatus,            // Hammer
    itMSBombThrownSetStatus,            // Motion-sensor Bomb
    itBombHeiThrownSetStatus,           // Bob-omb
    itNBumperThrownSetStatus,           // Normal Bumper
    itGShellThrownSetStatus,            // Green Shell
    itRShellThrownSetStatus,            // Red Shell
    itMBallThrownSetStatus,             // Poké Ball

    // Fighter items
    NULL,                               // Ness PK Fire
    itLinkBombThrownSetStatus           // Link Bomb
};

// 0x801895D0
void (*dITMainProcHoldList[/* */])(GObj*) =
{
    // Containers
    itBoxHoldSetStatus,                // Box
    itTaruHoldSetStatus,               // Barrel
    itCapsuleHoldSetStatus,            // Capsule
    itEggHoldSetStatus,                // Egg

    // Usable items
    NULL,                              // Maxim Tomato
    NULL,                              // Heart Container
    NULL,                              // Star Man
    itSwordHoldSetStatus,              // Beam Sword
    itBatHoldSetStatus,                // Home Run Bat
    itHarisenHoldSetStatus,            // Fan
    itStarRodHoldSetStatus,            // Star Rod
    itLGunHoldSetStatus,               // Ray Gun
    itFFlowerHoldSetStatus,            // Fire Flower
    itHammerHoldSetStatus,             // Hammer
    itMSBombHoldSetStatus,             // Motion-sensor Bomb
    itBombHeiHoldSetStatus,            // Bob-omb
    itNBumperHoldSetStatus,            // Normal Bumper
    itGShellHoldSetStatus,             // Green Shell
    itRShellHoldSetStatus,             // Red Shell
    itMBallHoldSetStatus,              // Poké Ball

    // Fighter items
    NULL,                              // Ness PK Fire
    itLinkBombHoldSetStatus            // Link Bomb
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

    if (ip->lr == nGMFacingL)
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

    ip->lr = (ip->phys_info.vel_air.x >= 0.0F) ? nGMFacingR : nGMFacingL;

    func_ovl3_80172310(item_gobj);
}

// 0x80172558
void itMainApplyGravityClampTVel(itStruct *ip, f32 gravity, f32 terminal_velocity)
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

    ip->display_mode = gITManagerDisplayMode;
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

    ip->item_hit.update_state = nGMHitUpdateNew;

    itProcessUpdateHitPositions(item_gobj);
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

    if (((ip->it_kind == nITKindStarRod) || (ip->it_kind == nITKindLGun) || (ip->it_kind == nITKindFFlower)) && (ip->it_multi == 0))
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

        ftParamSetHammerParams(ip->owner_gobj);
    }
    else if ((ip->it_kind < nITKindGroundMonsterStart) || (ip->it_kind > nITKindGroundMonsterEnd))
    {
        efManagerDustExpandLargeMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);
    }
    if (ip->indicator_gobj != NULL)
    {
        gcEjectGObj(ip->indicator_gobj);
    }
    itManagerSetPrevStructAlloc(ip);
    gcEjectGObj(item_gobj);
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

    joint_id = (ip->weight == nITWeightHeavy) ? fp->attributes->joint_itemheavy_id : fp->attributes->joint_itemlight_id;

    gmCollisionGetFighterPartsWorldPosition(fp->joints[joint_id], &pos);

    DObjGetStruct(item_gobj)->translate.vec.f.x = pos.x;
    DObjGetStruct(item_gobj)->translate.vec.f.y = pos.y;
    DObjGetStruct(item_gobj)->translate.vec.f.z = 0.0F;

    mpCommonRunItemCollisionDefault(item_gobj, fp->coll_data.p_translate, &fp->coll_data);

    fp->item_hold = NULL;

    ip->is_hold = FALSE;

    ip->phys_info.vel_air = *vel;

    lbVector_Vec3fScale(&ip->phys_info.vel_air, ip->vel_scale);

    ip->times_thrown++;
    ip->is_thrown = TRUE;

    ip->item_hit.throw_mul = stale;

    ip->item_hit.stat_flags = *(gmStatFlags*)&stat_flags;
    ip->item_hit.stat_count = stat_count;

    ftParamSetHammerParams(fighter_gobj);
    itMainRefreshHit(item_gobj);
}

// 0x80172AEC
void itMainSetFighterDrop(GObj *item_gobj, Vec3f *vel, f32 stale)
{
    itStruct *ip = itGetStruct(item_gobj);
    GObj *owner_gobj = ip->owner_gobj;
    ftStruct *fp = ftGetStruct(owner_gobj);
    void (*proc_drop)(GObj*) = dITMainProcDroppedList[ip->it_kind];

    if (proc_drop != NULL)
    {
        proc_drop(item_gobj);
    }
    itMainSetFighterRelease(item_gobj, vel, stale, nFTStatusAttackIDItemThrow, fp->stat_count);

    func_800269C0_275C0(ip->drop_sfx);
}

// 0x80172B78
void itMainSetFighterThrow(GObj *item_gobj, Vec3f *vel, f32 stale, sb32 is_smash_throw)
{
    itStruct *ip = itGetStruct(item_gobj);
    GObj *owner_gobj = ip->owner_gobj;
    ftStruct *fp = ftGetStruct(owner_gobj);
    void (*proc_throw)(GObj*);

    if (ip->weight == nITWeightLight)
    {
        if (is_smash_throw != FALSE)
        {
            ftParamMakeRumble(fp, 6, 0);
        }
    }
    else ftParamMakeRumble(fp, (is_smash_throw != FALSE) ? 9 : 6, 0);
    
    proc_throw = dITMainProcThrownList[ip->it_kind];

    if (proc_throw != NULL)
    {
        proc_throw(item_gobj);
    }
    itMainSetFighterRelease(item_gobj, vel, stale, fp->stat_flags.halfword, fp->stat_count);

    efManagerSparkleWhiteScaleMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f, 1.0F);

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

    joint = gcAddDObjForGObj(item_gobj, NULL);

    joint->sib_prev->sib_next = NULL;
    joint->sib_prev = NULL;
    joint->child = DObjGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->parent = joint;

    item_gobj->obj = joint;

    gcAddOMMtxForDObjFixed(joint, 0x52, 0);

    joint_id = (ip->weight == nITWeightHeavy) ? fp->attributes->joint_itemheavy_id : fp->attributes->joint_itemlight_id;

    joint->user_data.p = fp->joints[joint_id];

    pos.x = 0.0F;
    pos.y = 0.0F;
    pos.z = 0.0F;

    gmCollisionGetFighterPartsWorldPosition(fp->joints[joint_id], &pos);

    efManagerItemGetSwirlProcUpdate(&pos);

    gcSetTransformVectorsAll(item_gobj, ip->attributes->dobj_setup);

    proc_pickup = dITMainProcHoldList[ip->it_kind];

    if (proc_pickup != NULL)
    {
        proc_pickup(item_gobj);
    }
    ftParamLinkResetShieldModelParts(fighter_gobj);

    if (ip->weight == nITWeightLight)
    {
        func_800269C0_275C0(nGMSoundFGMItemPickup);
    }
    else if (fp->attributes->heavyget_sfx != nGMSoundFGMVoiceEnd)
    {
        func_800269C0_275C0(fp->attributes->heavyget_sfx);
    }
    
    ftParamMakeRumble(fp, 6, 0);

    ip->pickup_wait = ITEM_PICKUP_WAIT_DEFAULT;
}

// 0x80172E74
void itMainSetGroundAllowPickup(GObj *item_gobj) // Airborne item becomes grounded?
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = nGMHitUpdateDisable;

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

    ip->item_hit.stat_flags.stat_attack_id = nFTStatusAttackIDNull;
    ip->item_hit.stat_flags.is_smash_attack = ip->item_hit.stat_flags.ga = ip->item_hit.stat_flags.is_projectile = FALSE;

    ip->item_hit.stat_count = ftParamGetStatUpdateCount();
}

// 0x80172F98
sb32 itMainCheckSetColAnimID(GObj *item_gobj, s32 colanim_id, s32 duration)
{
    itStruct *ip = itGetStruct(item_gobj);

    return ftParamCheckSetColAnimID(&ip->colanim, colanim_id, duration);
}

// 0x80172FBC
void itMainClearColAnim(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ftParamResetColAnim(&ip->colanim);
}

// 0x80172FE0
void itMainVelSetRebound(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x *= -0.06F;
    ip->phys_info.vel_air.y = (ip->phys_info.vel_air.y * -0.3F) + 25.0F;
}

// 0x8017301C - Binary search function to get item ID for container drop?
s32 itMainSearchWeightedItemKind(s32 random, itRandomWeights *weights, u32 min, u32 max) // Recursive!
{
    s32 avg;

    if (max == (min + 1))
    {
        return min;
    }
    avg = (s32) (min + max) / 2;

    if (random < weights->item_totals[avg])
    {
        itMainSearchWeightedItemKind(random, weights, min, avg);
    }
    else if (random < weights->item_totals[avg + 1])
    {
        return avg;
    }
    else itMainSearchWeightedItemKind(random, weights, avg, max);
}

// 0x80173090
s32 itMainGetWeightedItemKind(itRandomWeights *weights)
{
    return weights->item_kinds[itMainSearchWeightedItemKind(mtTrigGetRandomIntRange(weights->item_num), weights, 0, weights->item_count)];
}

// 0x801730D4
sb32 itMainMakeContainerItem(GObj *parent_gobj)
{
    s32 unused;
    s32 item_kind;
    Vec3f vel; // Item's spawn velocity when falling out of a container

    if (gITManagerRandomWeights.item_num != 0)
    {
        item_kind = itMainGetWeightedItemKind(&gITManagerRandomWeights);

        if (item_kind <= nITKindCommonEnd)
        {
            vel.x = 0.0F;
            vel.y = *(f32*) ((intptr_t)&lITMainContainerVelocitiesY + ((uintptr_t) &((u32*)gITManagerFileData)[item_kind])); // Linker thing; quite ridiculous especially since lITMainContainerVelocitiesY is 0
            vel.z = 0;

            if (itManagerMakeItemSetupCommon(parent_gobj, item_kind, &DObjGetStruct(parent_gobj)->translate.vec.f, &vel, (ITEM_FLAG_COLLPROJECT | ITEM_FLAG_PARENT_ITEM)) != NULL)
            {
                func_ovl3_80172394(parent_gobj, TRUE);
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

    if (ip->it_multi == ev[ip->item_event_id].timer)
    {
        ip->item_hit.angle  = ev[ip->item_event_id].angle;
        ip->item_hit.damage = ev[ip->item_event_id].damage;
        ip->item_hit.size   = ev[ip->item_event_id].size;

        ip->item_event_id++;

        if (ip->item_event_id == 4)
        {
            ip->item_event_id = 3;
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
    if ((gSaveData.unlock_mask & GMBACKUP_UNLOCK_MASK_NEWCOMERS) && (mtTrigGetRandomIntRange(151) == 0) && (gITManagerMonsterData.monster_curr != nITKindMew) && (gITManagerMonsterData.monster_prev != nITKindMew))
    {
        index = nITKindMew;
    }
    else
    {
        for (i = j = nITKindMBallCommonStart; i <= nITKindMBallCommonEnd; i++) // Pokémon IDs
        {
            if ((i != gITManagerMonsterData.monster_curr) && (i != gITManagerMonsterData.monster_prev))
            {
                gITManagerMonsterData.monster_id[j - nITKindMBallMonsterStart] = i;
                j++;
            }
        }
        index = gITManagerMonsterData.monster_id[mtTrigGetRandomIntRange(gITManagerMonsterData.monster_count)];
    }
    if (gITManagerMonsterData.monster_count != 10)
    {
        gITManagerMonsterData.monster_count--;
    }
    gITManagerMonsterData.monster_prev = gITManagerMonsterData.monster_curr;
    gITManagerMonsterData.monster_curr = index;

    monster_gobj = itManagerMakeItemKind(item_gobj, index, &DObjGetStruct(item_gobj)->translate.vec.f, &vel, (ITEM_FLAG_COLLPROJECT | ITEM_FLAG_PARENT_ITEM));

    if (monster_gobj != NULL)
    {
        mp = itGetStruct(monster_gobj);

        mp->owner_gobj = ip->owner_gobj;
        mp->team = ip->team;
        mp->player = ip->player;
        mp->handicap = ip->handicap;
        mp->player_number = ip->player_number;
        mp->display_mode = ip->display_mode;

        if (gBattleState->game_type == nGMBattleGameType1PGame)
        {
            if ((mp->player == gSceneData.spgame_player) && (mp->it_kind == nITKindMew))
            {
                gGM1PGameBonusMewCatcher = TRUE;
            }
        }
    }
    return monster_gobj;
}

// 0x801733E4
sb32 itMainCommonProcHop(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    func_80019438(&ip->phys_info.vel_air, &ip->shield_collide_vec, ip->shield_collide_angle * 2);
    itMainVelSetRotateStepLR(item_gobj);

    return FALSE;
}

// 0x80173434
sb32 itMainCommonProcReflector(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);

    if ((ip->phys_info.vel_air.x * fp->lr) < 0.0F)
    {
        ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;
    }
    return FALSE;
}
