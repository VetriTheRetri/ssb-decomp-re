#include <wp/weapon.h>
#include <it/item.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x8018CFF0 - Points to next available weapon struct
WPStruct *sWPManagerStructsAllocFree;

// 0x8018CFF4
s32 sWPManagerDisplayMode;

// 0x8018CFF8
u32 sWPManagerGroupID;

// 0x8018CFFC
u8 sWPManagerPad0x8018CFFC[52];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801654B0
void wpManagerAllocWeapons(void)
{
    WPStruct *wp;
    s32 i;

    sWPManagerStructsAllocFree = wp = syTaskmanMalloc(sizeof(WPStruct) * WEAPON_ALLOC_MAX, 0x8);

    for (i = 0; i < (WEAPON_ALLOC_MAX - 1); i++)
    {
        wp[i].alloc_next = &wp[i + 1];
    }
    if (wp != NULL)
    {
        wp[i].alloc_next = NULL;
    }
    sWPManagerGroupID = 1;
    sWPManagerDisplayMode = nDBDisplayModeMaster;
}

// 0x80165558
WPStruct* wpManagerGetNextStructAlloc(void)
{
    WPStruct *new_weapon = sWPManagerStructsAllocFree;
    WPStruct *get_weapon;

    if (new_weapon == NULL)
    {
        return NULL;
    }
    get_weapon = new_weapon;

    sWPManagerStructsAllocFree = new_weapon->alloc_next;

    return get_weapon;
}

// 0x80165588
void wpManagerSetPrevStructAlloc(WPStruct *wp)
{
    wp->alloc_next = sWPManagerStructsAllocFree;

    sWPManagerStructsAllocFree = wp;
}

// 0x801655A0 - WARNING: Do NOT declare this with a void argument! PK Thunder passes unused arguments to this function.
u32 wpManagerGetGroupID()
{
    u32 group_id = sWPManagerGroupID++;

    if (sWPManagerGroupID == 0)
    {
        sWPManagerGroupID++;
    }
    return group_id;
}

// 0x801655C8
GObj* wpManagerMakeWeapon(GObj *parent_gobj, WPCreateDesc *wp_desc, Vec3f *spawn_pos, u32 flags)
{
    GObj *weapon_gobj;
    void (*func_display)(GObj*);
    WPAttributes *attributes;
    WPStruct *wp;
    WPStruct *owner_wp;
    ITStruct *ip;
    FTStruct *fp;
    s32 unused[7];

    wp = wpManagerGetNextStructAlloc();

    if (wp == NULL)
    {
        return NULL;
    }
    weapon_gobj = gcMakeGObjSPAfter(nGCCommonKindWeapon, NULL, nGCCommonLinkIDWeapon, GOBJ_LINKORDER_DEFAULT);

    if (weapon_gobj == NULL)
    {
        wpManagerSetPrevStructAlloc(wp);
        return NULL;
    }
    attributes = lbRelocGetDataFromFile(WPAttributes*, *wp_desc->p_weapon, wp_desc->o_attributes); // I hope this is correct?
    weapon_gobj->user_data.p = wp;
    wp->weapon_gobj = weapon_gobj;
    wp->wp_kind = wp_desc->wp_kind;

    switch (flags & WEAPON_MASK_PARENT)
    {
    case WEAPON_FLAG_PARENT_FIGHTER: // Weapons spawned by fighters
        fp = ftGetStruct(parent_gobj);
        wp->owner_gobj = parent_gobj;
        wp->team = fp->team;
        wp->player = fp->player;
        wp->handicap = fp->handicap;
        wp->player_number = fp->player_number;
        wp->lr = fp->lr;

        wp->display_mode = fp->display_mode;

        wp->hit_coll.stale = ftParamGetStale(fp->player, fp->attack_id, fp->motion_count);
        wp->hit_coll.attack_id = fp->attack_id;
        wp->hit_coll.motion_count = fp->motion_count;
        wp->hit_coll.stat_flags = fp->stat_flags;
        wp->hit_coll.stat_count = fp->stat_count;
        break;

    case WEAPON_FLAG_PARENT_WEAPON: // Weapons spawned by other weapons
        owner_wp = wpGetStruct(parent_gobj);
        wp->owner_gobj = owner_wp->owner_gobj;
        wp->team = owner_wp->team;
        wp->player = owner_wp->player;
        wp->handicap = owner_wp->handicap;
        wp->player_number = owner_wp->player_number;
        wp->lr = owner_wp->lr;

        wp->display_mode = owner_wp->display_mode;

        wp->hit_coll.stale = owner_wp->hit_coll.stale;
        wp->hit_coll.attack_id = owner_wp->hit_coll.attack_id;
        wp->hit_coll.motion_count = owner_wp->hit_coll.motion_count;
        wp->hit_coll.stat_flags = owner_wp->hit_coll.stat_flags;
        wp->hit_coll.stat_count = owner_wp->hit_coll.stat_count;
        break;

    case WEAPON_FLAG_PARENT_ITEM: // Weapons spawned by items
        ip = itGetStruct(parent_gobj);
        wp->owner_gobj = ip->owner_gobj;
        wp->team = ip->team;
        wp->player = ip->player;
        wp->handicap = ip->handicap;
        wp->player_number = ip->player_number;
        wp->lr = ip->lr;

        wp->display_mode = ip->display_mode;

        wp->hit_coll.stale = ip->hit_coll.stale;
        wp->hit_coll.attack_id = ip->hit_coll.attack_id;
        wp->hit_coll.motion_count = ip->hit_coll.motion_count;
        wp->hit_coll.stat_flags = ip->hit_coll.stat_flags;
        wp->hit_coll.stat_count = ip->hit_coll.stat_count;
        break;

    default: // Weapons spawned independently 
    case WEAPON_FLAG_PARENT_GROUND:
        wp->owner_gobj = NULL;
        wp->team = WEAPON_TEAM_DEFAULT;
        wp->player = WEAPON_PORT_DEFAULT;
        wp->handicap = WEAPON_HANDICAP_DEFAULT;
        wp->player_number = 0;
        wp->lr = nGMFacingR;

        wp->display_mode = sWPManagerDisplayMode;

        wp->hit_coll.attack_id = nFTMotionAttackIDNone;
        wp->hit_coll.stale = WEAPON_STALE_DEFAULT;
        wp->hit_coll.motion_count = ftParamGetMotionCount();
        wp->hit_coll.stat_flags.stat_attack_id = nFTStatusAttackIDNone;
        wp->hit_coll.stat_flags.is_smash_attack = wp->hit_coll.stat_flags.ga = wp->hit_coll.stat_flags.is_projectile = 0;
        wp->hit_coll.stat_count = ftParamGetStatUpdateCount();
        break;
    }
    wp->hit_coll.update_state = nGMHitUpdateNew;
    
    wp->physics.vel_air.x = wp->physics.vel_air.y = wp->physics.vel_air.z = 0.0F;

    wp->physics.vel_ground = 0.0F;

    wp->hit_coll.damage = attributes->damage;

    wp->hit_coll.element = attributes->element;

    wp->hit_coll.offset[0].x = attributes->offset[0].x;
    wp->hit_coll.offset[0].y = attributes->offset[0].y;
    wp->hit_coll.offset[0].z = attributes->offset[0].z;
    wp->hit_coll.offset[1].x = attributes->offset[1].x;
    wp->hit_coll.offset[1].y = attributes->offset[1].y;
    wp->hit_coll.offset[1].z = attributes->offset[1].z;

    wp->hit_coll.size = attributes->size * 0.5F;

    wp->hit_coll.angle = attributes->angle;

    wp->hit_coll.knockback_scale = attributes->knockback_scale;
    wp->hit_coll.knockback_weight = attributes->knockback_weight;
    wp->hit_coll.knockback_base = attributes->knockback_base;

    wp->hit_coll.can_setoff = attributes->can_setoff;

    wp->hit_coll.shield_damage = attributes->shield_damage;

    wp->hit_coll.hit_sfx = attributes->sfx;

    wp->hit_coll.priority = attributes->priority;

    wp->hit_coll.can_rehit_item = attributes->can_rehit_item;
    wp->hit_coll.can_rehit_fighter = attributes->can_rehit_fighter;
    wp->hit_coll.can_rehit_shield = FALSE;

    wp->hit_coll.can_hop = attributes->can_hop;
    wp->hit_coll.can_reflect = attributes->can_reflect;
    wp->hit_coll.can_absorb = attributes->can_absorb;
    wp->hit_coll.can_not_heal = FALSE;
    wp->hit_coll.can_shield = attributes->can_shield;
    
    wp->hit_coll.hit_count = attributes->hit_count;

    wp->hit_coll.interact_mask = GMHITCOLLISION_FLAG_ALL;

    wpMainClearHitRecord(wp);

    wp->hit_normal_damage = 0;
    wp->hit_refresh_damage = 0;
    wp->hit_attack_damage = 0;
    wp->hit_shield_damage = 0;
    wp->reflect_gobj = NULL;
    wp->absorb_gobj = NULL;

    wp->is_hitlag_victim = FALSE;
    wp->is_hitlag_weapon = FALSE;
    wp->is_camera_follow = FALSE;

    wp->group_id = 0;

    wp->is_static_damage = FALSE;

    wp->p_sfx = NULL;
    wp->sfx_id = 0;

    wp->shield_collide_angle = 0.0F;

    wp->shield_collide_vec.x = wp->shield_collide_vec.y = wp->shield_collide_vec.z = 0.0F;

    if (wp_desc->flags & WEAPON_FLAG_DOBJSETUP)
    {
        gcSetupCustomDObjs(weapon_gobj, attributes->dobj_setup, NULL, wp_desc->transform_types.tk1, wp_desc->transform_types.tk2, wp_desc->transform_types.tk3);

        func_display = (wp_desc->flags & WEAPON_FLAG_DOBJLINKS) ? wpDisplayDObjTreeDLLinks : func_ovl3_80167618;
    }
    else
    {
        lbCommonInitDObjTriTransform(gcAddDObjForGObj(weapon_gobj, attributes->dobj_setup), wp_desc->transform_types.tk1, wp_desc->transform_types.tk2, wp_desc->transform_types.tk3);

        func_display = (wp_desc->flags & WEAPON_FLAG_DOBJLINKS) ? wpDisplayDObjDLLinks : wpDisplayDLHead1;
    }
    gcAddGObjDisplay(weapon_gobj, func_display, 14, GOBJ_DLLINKORDER_DEFAULT, -1);

    if (attributes->p_mobjsubs != NULL)
    {
        gcAddMObjAll(weapon_gobj, attributes->p_mobjsubs);
    }
    if ((attributes->anim_joints != NULL) || (attributes->p_matanim_joints != NULL))
    {
        gcAddAnimAll(weapon_gobj, attributes->anim_joints, attributes->p_matanim_joints, 0.0F);
    }
    wp->coll_data.p_translate = &DObjGetStruct(weapon_gobj)->translate.vec.f;
    wp->coll_data.p_lr = &wp->lr;

    wp->coll_data.object_coll.top = attributes->object_coll_top;
    wp->coll_data.object_coll.center = attributes->object_coll_center;
    wp->coll_data.object_coll.bottom = attributes->object_coll_bottom;
    wp->coll_data.object_coll.width = attributes->object_coll_width;
    wp->coll_data.p_object_coll = &wp->coll_data.object_coll;

    wp->coll_data.ignore_line_id = -1;
    wp->coll_data.ground_line_id = -1;
    wp->coll_data.ceil_line_id = -1;
    wp->coll_data.lwall_line_id = -1;
    wp->coll_data.rwall_line_id = -1;

    wp->coll_data.coll_update_frame = gMPCollisionUpdateFrame;
    wp->coll_data.coll_mask_current = 0;

    wp->coll_data.vel_push.x = 0.0F;
    wp->coll_data.vel_push.y = 0.0F;
    wp->coll_data.vel_push.z = 0.0F;

    gcAddGObjProcess(weapon_gobj, wpProcessProcWeaponMain, nGCProcessKindProc, 3);
    gcAddGObjProcess(weapon_gobj, wpProcessProcSearchHitWeapon, nGCProcessKindProc, 1);
    gcAddGObjProcess(weapon_gobj, wpProcessProcHitCollisions, nGCProcessKindProc, 0);

    wp->proc_update    = wp_desc->proc_update;
    wp->proc_map       = wp_desc->proc_map;
    wp->proc_hit       = wp_desc->proc_hit;
    wp->proc_shield    = wp_desc->proc_shield;
    wp->proc_hop       = wp_desc->proc_hop;
    wp->proc_setoff    = wp_desc->proc_setoff;
    wp->proc_reflector = wp_desc->proc_reflector;
    wp->proc_absorb    = wp_desc->proc_absorb;
    wp->proc_dead      = NULL;

    wp->coll_data.pos_current = DObjGetStruct(weapon_gobj)->translate.vec.f = *spawn_pos;

    if (flags & WEAPON_FLAG_COLLPROJECT)
    {
        switch (flags & WEAPON_MASK_PARENT)
        {
        default:
        case WEAPON_FLAG_PARENT_GROUND:
            break;

        case WEAPON_FLAG_PARENT_FIGHTER:
            mpCommonRunWeaponCollisionDefault(weapon_gobj, ftGetStruct(parent_gobj)->coll_data.p_translate, &ftGetStruct(parent_gobj)->coll_data);
            break;

        case WEAPON_FLAG_PARENT_WEAPON:
            mpCommonRunWeaponCollisionDefault(weapon_gobj, wpGetStruct(parent_gobj)->coll_data.p_translate, &wpGetStruct(parent_gobj)->coll_data);
            break;

        case WEAPON_FLAG_PARENT_ITEM:
            mpCommonRunWeaponCollisionDefault(weapon_gobj, itGetStruct(parent_gobj)->coll_data.p_translate, &itGetStruct(parent_gobj)->coll_data);
            break;
        }
    }
    wp->ga = nMPKineticsAir;

    wpProcessUpdateHitPositions(weapon_gobj);

    return weapon_gobj;
}
