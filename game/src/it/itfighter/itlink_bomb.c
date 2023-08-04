#include <it/item.h>
#include <ft/fighter.h>

extern void *D_ovl2_80130FB0;

enum itLinkBombStatus
{
    itStatus_LinkBomb_GWait,
    itStatus_LinkBomb_AFall,
    itStatus_LinkBomb_FHold,
    itStatus_LinkBomb_FThrow,
    itStatus_LinkBomb_FDrop,
    itStatus_LinkBomb_NExplode,
    itStatus_LinkBomb_EnumMax
};

itCreateDesc itLink_Bomb_ItemDesc = 
{   
    It_Kind_LinkBomb,                       // Item Kind
    &D_ovl2_80130FB0,                       // Pointer to item file data?
    0x40,                                   // Offset of item attributes in file?
    0x12,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itLinkBomb_FHold_ProcUpdate,            // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itLink_Bomb_StatusDesc[itStatus_LinkBomb_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        itLinkBomb_GWait_ProcUpdate,        // Proc Update
        itLinkBomb_GWait_ProcMap,           // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itLinkBomb_SDefault_ProcDamage      // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itLinkBomb_AFall_ProcUpdate,        // Proc Update
        itLinkBomb_AFall_ProcMap,           // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itLinkBomb_SDefault_ProcDamage      // Proc Damage
    },

    // Status 2 (Fighter Hold)
    {
        itLinkBomb_FHold_ProcUpdate,        // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 3 (Fighter Throw)
    {
        itLinkBomb_AFall_ProcUpdate,        // Proc Update
        itLinkBomb_FThrow_ProcMap,          // Proc Map
        itLinkBomb_FThrow_ProcHit,          // Proc Hit
        itLinkBomb_SDefault_ProcShield,     // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        NULL,                               // Proc Set-Off
        itCommon_SDefault_ProcReflector,    // Proc Reflector
        itLinkBomb_SDefault_ProcDamage      // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itLinkBomb_FDrop_ProcUpdate,        // Proc Update
        itLinkBomb_FThrow_ProcMap,          // Proc Map
        itLinkBomb_FDrop_ProcHit,           // Proc Hit
        itLinkBomb_SDefault_ProcShield,     // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        NULL,                               // Proc Set-Off
        itCommon_SDefault_ProcReflector,    // Proc Reflector
        itLinkBomb_FDrop_ProcDamage         // Proc Damage
    },

    // Status 5 (Neutral Explosion)
    {
        itLinkBomb_NExplode_ProcUpdate,     // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

intptr_t itLink_Bomb_FileOffsetScale;

// 0x801859C0
void itLinkBomb_NExplodeWait_UpdateScale(GObj *item_gobj)
{
    DObj *joint = DObjGetStruct(item_gobj);
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.link_bomb.scale_int == 0)
    {
        f32 *p_scale = (f32*) ((uintptr_t)*itLink_Bomb_ItemDesc.p_file + (intptr_t)&itLink_Bomb_FileOffsetScale); // Linker thing

        s32 index = (ip->item_vars.link_bomb.scale_index >= ITLINKBOMB_SCALE_INDEX_REWIND) ? (ITLINKBOMB_SCALE_INDEX_MAX - ip->item_vars.link_bomb.scale_index) : ip->item_vars.link_bomb.scale_index;

        if (ip->is_hold)
        {
            joint->next->scale.x = joint->next->scale.y = p_scale[index];
        }
        else joint->scale.x = joint->scale.y = p_scale[index];
        
        ip->item_vars.link_bomb.scale_int = ITLINKBOMB_SCALE_INT;

        if (ip->item_vars.link_bomb.scale_index >= ITLINKBOMB_SCALE_INDEX_MAX)
        {
            ip->item_vars.link_bomb.scale_index = 0;
        }
        else ip->item_vars.link_bomb.scale_index += 1; // Doesn't match with "++" lol
    }
    ip->item_vars.link_bomb.scale_int--;
}

// 0x80185A80
void itLinkBomb_NExplode_CreateGFXGotoSetStatus(GObj *item_gobj)
{
    s32 unused;
    DObj *joint = DObjGetStruct(item_gobj);
    itStruct *ip = itGetStruct(item_gobj);
    efParticle *ep;

    itLinkBomb_SDefault_SetHitStatusNone(item_gobj);

    ep = efParticle_SparkleWhiteMultiExplode_MakeEffect(&joint->translate);

    if (ep != NULL)
    {
        ep->effect_info->scale.x = ITLINKBOMB_EXPLODE_GFX_SCALE;
        ep->effect_info->scale.y = ITLINKBOMB_EXPLODE_GFX_SCALE;
        ep->effect_info->scale.z = ITLINKBOMB_EXPLODE_GFX_SCALE;
    }
    efParticle_Quake_MakeEffect(1);

    DObjGetStruct(item_gobj)->unk_0x54 = 2;

    ip->item_hit.hit_sfx = gmSound_SFX_ExplodeL;

    itMain_RefreshHit(item_gobj);
    itLinkBomb_NExplode_SetStatus(item_gobj);
}

// 0x80185B18 - Called only by unused function
void func_ovl3_80185B18(GObj *item_gobj)
{
    s32 unused[5];
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *joint = DObjGetStruct(item_gobj);
    Vec3f pos = joint->translate;

    pos.y += attributes->objectcoll_bottom;

    efParticle_DustHeavyDouble_MakeEffect(&pos, ip->lr, 1.0F);
}

// 0x80185B84
bool32 itLinkBomb_SDefault_ProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->damage_queue >= ITLINKBOMB_HEALTH)
    {
        itLinkBomb_NExplode_InitItemVars(item_gobj);
    }
    else
    {
        ip->lr = -ip->lr_damage;

        ip->phys_info.vel_air.x = -ip->lr_damage * ITLINKBOMB_DAMAGE_RECOIL_VEL_X;
        ip->phys_info.vel_air.y = -ip->lr_damage * ITLINKBOMB_DAMAGE_RECOIL_VEL_Y;
    }
    return FALSE;
}

// 0x80185BFC
bool32 itLinkBomb_FThrow_ProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if ((ABSF(ip->phys_info.vel_air.x) > ITLINKBOMB_EXPLODE_THRESHOLD_VEL_X) || (ABSF(ip->phys_info.vel_air.y) > ITLINKBOMB_EXPLODE_THRESHOLD_VEL_Y))
    {
        itLinkBomb_NExplode_InitItemVars(item_gobj);
    }
    else
    {
        ip->lr = -ip->lr_attack;

        ip->phys_info.vel_air.x = -ip->lr_attack * ITLINKBOMB_HIT_RECOIL_VEL_X;
        ip->phys_info.vel_air.y = ITLINKBOMB_HIT_RECOIL_VEL_Y;

        itLinkBomb_AFall_SetStatus(item_gobj);
    }
    return FALSE;
}

// 0x80185CD4
void itLinkBomb_SDefault_SetHitStatusNormal(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
}

// 0x80185CE4
void itLinkBomb_SDefault_SetHitStatusNone(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;
}

// 0x80185CF0
bool32 itLinkBomb_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITLINKBOMB_GRAVITY, ITLINKBOMB_T_VEL);

    if (ip->lifetime == 0)
    {
        itLinkBomb_NExplode_InitItemVars(item_gobj);
    }
    if (ip->lifetime == ITLINKBOMB_BLOAT_BEGIN)
    {
        itMain_CheckSetColAnimIndex(item_gobj, ITLINKBOMB_BLOAT_COLANIM_ID, ITLINKBOMB_BLOAT_COLANIM_LENGTH);

        ip->item_vars.link_bomb.scale_index = 1;
    }
    if (ip->lifetime < ITLINKBOMB_BLOAT_BEGIN)
    {
        itLinkBomb_NExplodeWait_UpdateScale(item_gobj);
    }
    ip->lifetime--;

    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x80185DCC
bool32 itLinkBomb_GWait_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->phys_info.vel_air.x != 0.0F)
    {
        ip->phys_info.vel_air.x += (-1.0F) * ip->lr;
    }
    if (ABSF(ip->phys_info.vel_air.x) < 1.0F)
    {
        ip->phys_info.vel_air.x = 0;
    }
    if (ip->lifetime == 0)
    {
        itLinkBomb_NExplode_InitItemVars(item_gobj);
    }
    if (ip->lifetime == ITLINKBOMB_BLOAT_BEGIN)
    {
        itMain_CheckSetColAnimIndex(item_gobj, ITLINKBOMB_BLOAT_COLANIM_ID, ITLINKBOMB_BLOAT_COLANIM_LENGTH);

        ip->item_vars.link_bomb.scale_index = 1;
    }
    if (ip->lifetime < ITLINKBOMB_BLOAT_BEGIN)
    {
        itLinkBomb_NExplodeWait_UpdateScale(item_gobj);
    }
    ip->lifetime--;

    return FALSE;
}

// 0x80185F10
bool32 itLinkBomb_GWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itLinkBomb_AFall_SetStatus);

    return FALSE;
}

// 0x80185F38
bool32 itLinkBomb_AFall_ProcMap(GObj *item_gobj)
{
    itMap_CheckMapCollideThrownLanding(item_gobj, 0.4F, 0.3F, itLinkBomb_GWait_SetStatus);

    return FALSE;
}

// 0x80185F70
void itLinkBomb_GWait_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->is_allow_pickup = TRUE;

    ip->times_landed = 0;

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

    itMap_SetGround(ip);
    itLinkBomb_SDefault_SetHitStatusNormal(item_gobj);
    itMain_SetItemStatus(item_gobj, itLink_Bomb_StatusDesc, itStatus_LinkBomb_GWait);
}

// 0x80185FD8
void itLinkBomb_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itLinkBomb_SDefault_SetHitStatusNormal(item_gobj);
    itMain_SetItemStatus(item_gobj, itLink_Bomb_StatusDesc, itStatus_LinkBomb_AFall);
}

// 0x80186024
bool32 itLinkBomb_FHold_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);

    if (fp->status_info.status_id == ftStatus_Common_DokanWait) // Odd but go off
    {
        return FALSE;
    }
    else
    {
        if (ip->lifetime == 0)
        {
            itMain_SetFighterRelease(item_gobj, &ip->phys_info.vel, 1.0F);  // Ok, WHAT? This function takes 5 arguments, but it doesn't match otherwise???
                                                                            // Did they actually redefine this? Passes pointer in a3 instead of u16...
                                                                            // Do we leave this out of the header and declare it separately to match?
                                                                            // Update 3/23/2023: matches as variadic. No comment.
                                                                            // Update  7/2/2023: variadic match confirmed fake, so does this file use an erroneous decleration?
            itMain_ClearOwnerStats(item_gobj);
            itLinkBomb_NExplode_InitItemVars(item_gobj);
        }
        if (ip->lifetime == ITLINKBOMB_BLOAT_BEGIN)
        {
            itMain_CheckSetColAnimIndex(item_gobj, ITLINKBOMB_BLOAT_COLANIM_ID, ITLINKBOMB_BLOAT_COLANIM_LENGTH);

            ip->item_vars.link_bomb.scale_index = 1;
        }
        if (ip->lifetime < ITLINKBOMB_BLOAT_BEGIN)
        {
            itLinkBomb_NExplodeWait_UpdateScale(item_gobj);
        }
        ip->lifetime--;

        return FALSE;
    }
}

// 0x8018611C
void itLinkBomb_FHold_SetStatus(GObj *item_gobj)
{
    itLinkBomb_SDefault_SetHitStatusNone(item_gobj);
    itMain_SetItemStatus(item_gobj, itLink_Bomb_StatusDesc, itStatus_LinkBomb_FHold);
}

// 0x80186150
bool32 itLinkBomb_FThrow_ProcMap(GObj *item_gobj)
{
    s32 unused;
    itStruct *ip = itGetStruct(item_gobj);
    Vec3f vel = ip->phys_info.vel;

    if (itMap_CheckMapCollideAny(item_gobj, 0.4F, 0.3F, itLinkBomb_AFall_SetStatus) != FALSE)
    {
        if ((ABSF(vel.x) > ITLINKBOMB_EXPLODE_THRESHOLD_VEL_X) || (ABSF(vel.y) > ITLINKBOMB_EXPLODE_THRESHOLD_VEL_Y))
        {
            itLinkBomb_NExplode_InitItemVars(item_gobj);
        }
    }
    return FALSE;
}

// 0x80186224
void itLinkBomb_FThrow_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itLinkBomb_SDefault_SetHitStatusNormal(item_gobj);

    ip->is_damage_all = TRUE;

    itMain_SetItemStatus(item_gobj, itLink_Bomb_StatusDesc, itStatus_LinkBomb_FThrow);
}

// 0x80186270
bool32 itLinkBomb_FDrop_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.link_bomb.drop_update_wait != 0)
    {
        ip->item_vars.link_bomb.drop_update_wait--;
    }
    else itLinkBomb_AFall_ProcUpdate(item_gobj);

    return FALSE;
}

// 0x801862AC
bool32 itLinkBomb_FDrop_ProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.link_bomb.drop_update_wait == 0)
    {
        itLinkBomb_FThrow_ProcHit(item_gobj);
    }
    return FALSE;
}

// 0x801862E0
bool32 itLinkBomb_FDrop_ProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.link_bomb.drop_update_wait == 0)
    {
        itLinkBomb_SDefault_ProcDamage(item_gobj);
    }
    return FALSE;
}

// 0x80186314
void itLinkBomb_FDrop_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itLinkBomb_SDefault_SetHitStatusNormal(item_gobj);

    ip->item_vars.link_bomb.drop_update_wait = 10;

    ip->is_damage_all = TRUE;

    itMain_SetItemStatus(item_gobj, itLink_Bomb_StatusDesc, itStatus_LinkBomb_FDrop);
}

void itLinkBomb_NExplode_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

    itMain_ClearOwnerStats(item_gobj);
    itLinkBomb_NExplode_CreateGFXGotoSetStatus(item_gobj);
    func_800269C0(gmSound_SFX_ExplodeL);
}

intptr_t Link_Bomb_Event;

// 0x801863AC
void itLinkBomb_NExplode_UpdateHitEvent(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itHitEvent *ev = itGetHitEvent(itLink_Bomb_ItemDesc, Link_Bomb_Event); // (itHitEvent*) ((uintptr_t)*itLink_Bomb_ItemDesc.p_file + (intptr_t)&Link_Bomb_Event); Linker thing

    if (ip->it_multi == ev[ip->item_event_index].timer)
    {
        ip->item_hit.angle = ev[ip->item_event_index].angle;
        ip->item_hit.damage = ev[ip->item_event_index].damage;
        ip->item_hit.size = ev[ip->item_event_index].size;

        ip->item_hit.can_rehit_item = TRUE;
        ip->item_hit.can_hop = FALSE;
        ip->item_hit.can_reflect = FALSE;
        ip->item_hit.rebound = FALSE;

        ip->item_hit.element = gmHitCollision_Element_Fire;

        ip->item_event_index++;

        if (ip->item_event_index == 4)
        {
            ip->item_event_index = 3;
        }
    }
}

// 0x80186498
bool32 itLinkBomb_SDefault_ProcShield(GObj *item_gobj)
{
    itMain_VelSetRebound(item_gobj);

    return FALSE;
}

bool32 func_ovl3_801864BC(GObj *item_gobj) // Unused
{
    func_ovl3_80185B18(item_gobj);
    itLinkBomb_NExplode_InitItemVars(item_gobj);

    return FALSE;
}

// 0x801864E8
void itLinkBomb_NExplode_InitHitbox(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;
    ip->item_event_index = 0;

    ip->item_hit.stale = ITEM_STALE_DEFAULT;

    itLinkBomb_NExplode_UpdateHitEvent(item_gobj);
}

// 0x80186524
bool32 itLinkBomb_NExplode_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itLinkBomb_NExplode_UpdateHitEvent(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITLINKBOMB_EXPLODE_LIFETIME)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8018656C
void itLinkBomb_NExplode_SetStatus(GObj *item_gobj)
{
    itLinkBomb_NExplode_InitHitbox(item_gobj);
    itMain_SetItemStatus(item_gobj, itLink_Bomb_StatusDesc, itStatus_LinkBomb_NExplode);
}

// 0x801865A0
GObj* itLink_Bomb_MakeItem(GObj *fighter_gobj, Vec3f *pos, Vec3f *vel)
{
    GObj *item_gobj = itManager_MakeItem(fighter_gobj, &itLink_Bomb_ItemDesc, pos, vel, 0);
    DObj *joint;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        ip = itGetStruct(item_gobj);
        joint = DObjGetStruct(item_gobj);

        func_80008CC0(joint, 0x2E, 0);
        func_80008CC0(joint->next, 0x2E, 0);

        ip->it_multi = 0;

        ip->lifetime = ITLINKBOMB_LIFETIME;

        ip->item_vars.link_bomb.scale_index = 0;
        ip->item_vars.link_bomb.scale_int = ITLINKBOMB_SCALE_INT;

        ip->item_hit.can_rehit_shield = TRUE;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

        itMain_SetFighterHold(item_gobj, fighter_gobj);
    }
    return item_gobj;
}