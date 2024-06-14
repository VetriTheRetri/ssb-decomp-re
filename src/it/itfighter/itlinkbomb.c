#include <it/item.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

// WARNING: Intentionally erroneous declaration. Missing two u16 arguments after f32. HAL's mistake, not mine.
extern void itMainSetFighterRelease(GObj*, Vec3f*, f32);

extern intptr_t lITLinkBombItemAttributes;	   	// 0x00000040
extern intptr_t lITLinkBombHitEvents;  	// 0x00000088
extern intptr_t lITLinkBombBloatScale; 	// 0x000000A8

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dItLinkBombItemDesc =
{
	It_Kind_LinkBomb, 					// Item Kind
	&gFTDataLinkMain, 					// Pointer to item file data?
	&lITLinkBombItemAttributes,			// Offset of item attributes in file?

	// DObj transformation struct
	{
		OMMtx_Transform_Tra,  			// Main matrix transformations
		OMMtx_Transform_Null, 			// Secondary matrix transformations?
		0					  			// ???
	},

	gmHitCollision_UpdateState_Disable, // Hitbox Update State
	itLinkBombFHoldProcUpdate,			// Proc Update
	NULL,								// Proc Map
	NULL,								// Proc Hit
	NULL,								// Proc Shield
	NULL,								// Proc Hop
	NULL,								// Proc Set-Off
	NULL,								// Proc Reflector
	NULL								// Proc Damage
};

itStatusDesc dItLinkBombStatusDesc[/* */] = 
{
	// Status 0 (Ground Wait)
	{
		itLinkBombGWaitProcUpdate,	 // Proc Update
		itLinkBombGWaitProcMap,		 // Proc Map
		NULL,						 // Proc Hit
		NULL,						 // Proc Shield
		NULL,						 // Proc Hop
		NULL,						 // Proc Set-Off
		NULL,						 // Proc Reflector
		itLinkBombSDefaultProcDamage // Proc Damage
	},

	// Status 1 (Air Wait Fall)
	{
		itLinkBombAFallProcUpdate,	 // Proc Update
		itLinkBombAFallProcMap,		 // Proc Map
		NULL,						 // Proc Hit
		NULL,						 // Proc Shield
		NULL,						 // Proc Hop
		NULL,						 // Proc Set-Off
		NULL,						 // Proc Reflector
		itLinkBombSDefaultProcDamage // Proc Damage
	},

	// Status 2 (Fighter Hold)
	{
		itLinkBombFHoldProcUpdate, // Proc Update
		NULL,					   // Proc Map
		NULL,					   // Proc Hit
		NULL,					   // Proc Shield
		NULL,					   // Proc Hop
		NULL,					   // Proc Set-Off
		NULL,					   // Proc Reflector
		NULL					   // Proc Damage
	},

	// Status 3 (Fighter Throw)
	{
		itLinkBombAFallProcUpdate,	   // Proc Update
		itLinkBombFThrowProcMap,	   // Proc Map
		itLinkBombFThrowProcHit,	   // Proc Hit
		itLinkBombSDefaultProcShield,  // Proc Shield
		itMainSDefaultProcHop,	   // Proc Hop
		NULL,						   // Proc Set-Off
		itMainSDefaultProcReflector, // Proc Reflector
		itLinkBombSDefaultProcDamage   // Proc Damage
	},

	// Status 4 (Fighter Drop)
	{
		itLinkBombFDropProcUpdate,	   // Proc Update
		itLinkBombFThrowProcMap,	   // Proc Map
		itLinkBombFDropProcHit,		   // Proc Hit
		itLinkBombSDefaultProcShield,  // Proc Shield
		itMainSDefaultProcHop,	   // Proc Hop
		NULL,						   // Proc Set-Off
		itMainSDefaultProcReflector, // Proc Reflector
		itLinkBombFDropProcDamage	   // Proc Damage
	},

	// Status 5 (Neutral Explosion)
	{
		itLinkBombNExplodeProcUpdate, // Proc Update
		NULL,						  // Proc Map
		NULL,						  // Proc Hit
		NULL,						  // Proc Shield
		NULL,						  // Proc Hop
		NULL,						  // Proc Set-Off
		NULL,						  // Proc Reflector
		NULL						  // Proc Damage
	}
};

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

// 801859C0
void itLinkBombNExplodeWaitUpdateScale(GObj* item_gobj)
{
	DObj* dobj = DObjGetStruct(item_gobj);
	itStruct* ip = itGetStruct(item_gobj);

	if (ip->item_vars.link_bomb.scale_int == 0)
	{
		f32* scale = (f32*)((uintptr_t)*dItLinkBombItemDesc.p_file + (intptr_t)&lITLinkBombBloatScale); // Linker thing
		s32 index = (ip->item_vars.link_bomb.scale_index > ITLINKBOMB_SCALE_INDEX_REWIND)
						? (ITLINKBOMB_SCALE_INDEX_MAX - ip->item_vars.link_bomb.scale_index)
						: ip->item_vars.link_bomb.scale_index;

		if (ip->is_hold)
			dobj->child->scale.vec.f.x = dobj->child->scale.vec.f.y = scale[index];
		else
			dobj->scale.vec.f.x = dobj->scale.vec.f.y = scale[index];

		ip->item_vars.link_bomb.scale_int = ITLINKBOMB_SCALE_INT;

		if (ip->item_vars.link_bomb.scale_index >= ITLINKBOMB_SCALE_INDEX_MAX)
			ip->item_vars.link_bomb.scale_index = 0;
		else
			ip->item_vars.link_bomb.scale_index += 1; // Doesn't match with "++" lol
	}
	ip->item_vars.link_bomb.scale_int--;
}

// 80185A80
void itLinkBombNExplodeMakeEffectGotoSetStatus(GObj* item_gobj)
{
	s32 unused;
	DObj* dobj = DObjGetStruct(item_gobj);
	itStruct* ip = itGetStruct(item_gobj);
	efParticle* efpart;

	itLinkBombSDefaultSetHitStatusNone(item_gobj);

	efpart = efParticle_SparkleWhiteMultiExplode_MakeEffect(&dobj->translate.vec.f);

	if (efpart != NULL)
	{
		efpart->effect_info->scale.x = ITLINKBOMB_EXPLODE_GFX_SCALE;
		efpart->effect_info->scale.y = ITLINKBOMB_EXPLODE_GFX_SCALE;
		efpart->effect_info->scale.z = ITLINKBOMB_EXPLODE_GFX_SCALE;
	}
	efParticle_Quake_MakeEffect(1);

	DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_NORENDER;

	ip->item_hit.hit_sfx = alSound_SFX_ExplodeL;

	itMainRefreshHit(item_gobj);
	itLinkBombNExplodeSetStatus(item_gobj);
}

// 0x80185B18 - Called only by unused function
void func_ovl3_80185B18(GObj* item_gobj)
{
	s32 unused[5];
	itStruct* ip = itGetStruct(item_gobj);
	itAttributes* attributes = ip->attributes;
	DObj* dobj = DObjGetStruct(item_gobj);
	Vec3f pos = dobj->translate.vec.f;

	pos.y += attributes->objectcoll_bottom;

	efParticle_DustHeavyDouble_MakeEffect(&pos, ip->lr, 1.0F);
}

// 80185B84
sb32 itLinkBombSDefaultProcDamage(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	if (ip->damage_queue >= ITLINKBOMB_HEALTH)
		itLinkBombNExplodeInitItemVars(item_gobj);
	else
	{
		ip->lr = -ip->lr_damage;

		ip->phys_info.vel_air.x = -ip->lr_damage * ITLINKBOMB_DAMAGE_RECOIL_VEL_X;
		ip->phys_info.vel_air.y = -ip->lr_damage * ITLINKBOMB_DAMAGE_RECOIL_VEL_Y;
	}
	return FALSE;
}

// 80185BFC
sb32 itLinkBombFThrowProcHit(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	if ((ABSF(ip->phys_info.vel_air.x) > ITLINKBOMB_EXPLODE_THRESHOLD_VEL_X)
		|| (ABSF(ip->phys_info.vel_air.y) > ITLINKBOMB_EXPLODE_THRESHOLD_VEL_Y))
	{
		itLinkBombNExplodeInitItemVars(item_gobj);
	}
	else
	{
		ip->lr = -ip->lr_attack;

		ip->phys_info.vel_air.x = -ip->lr_attack * ITLINKBOMB_HIT_RECOIL_VEL_X;
		ip->phys_info.vel_air.y = ITLINKBOMB_HIT_RECOIL_VEL_Y;

		itLinkBombAFallSetStatus(item_gobj);
	}
	return FALSE;
}

// 80185CD4
void itLinkBombSDefaultSetHitStatusNormal(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
}

// 80185CE4
void itLinkBombSDefaultSetHitStatusNone(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;
}

// 80185CF0
sb32 itLinkBombAFallProcUpdate(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	itMainApplyGClampTVel(ip, ITLINKBOMB_GRAVITY, ITLINKBOMB_T_VEL);

	if (ip->lifetime == 0)
		itLinkBombNExplodeInitItemVars(item_gobj);
	if (ip->lifetime == ITLINKBOMB_BLOAT_BEGIN)
	{
		itMainCheckSetColAnimID(item_gobj, ITLINKBOMB_BLOAT_COLANIM_ID, ITLINKBOMB_BLOAT_COLANIM_LENGTH);

		ip->item_vars.link_bomb.scale_index = 1;
	}
	if (ip->lifetime < ITLINKBOMB_BLOAT_BEGIN)
		itLinkBombNExplodeWaitUpdateScale(item_gobj);
	ip->lifetime--;

	itManagerUpdateSpin(item_gobj);

	return FALSE;
}

// 80185DCC
sb32 itLinkBombGWaitProcUpdate(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	if (ip->phys_info.vel_air.x != 0.0F)
		ip->phys_info.vel_air.x += (-1.0F) * ip->lr;
	if (ABSF(ip->phys_info.vel_air.x) < 1.0F)
		ip->phys_info.vel_air.x = 0;
	if (ip->lifetime == 0)
		itLinkBombNExplodeInitItemVars(item_gobj);
	if (ip->lifetime == ITLINKBOMB_BLOAT_BEGIN)
	{
		itMainCheckSetColAnimID(item_gobj, ITLINKBOMB_BLOAT_COLANIM_ID, ITLINKBOMB_BLOAT_COLANIM_LENGTH);

		ip->item_vars.link_bomb.scale_index = 1;
	}
	if (ip->lifetime < ITLINKBOMB_BLOAT_BEGIN)
		itLinkBombNExplodeWaitUpdateScale(item_gobj);
	ip->lifetime--;

	return FALSE;
}

// 80185F10
sb32 itLinkBombGWaitProcMap(GObj* item_gobj)
{
	itMapCheckLRWallProcGround(item_gobj, itLinkBombAFallSetStatus);

	return FALSE;
}

// 80185F38
sb32 itLinkBombAFallProcMap(GObj* item_gobj)
{
	itMapCheckMapCollideThrownLanding(item_gobj, 0.4F, 0.3F, itLinkBombGWaitSetStatus);

	return FALSE;
}

// 80185F70
void itLinkBombGWaitSetStatus(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

	ip->is_allow_pickup = TRUE;

	ip->times_landed = 0;

	ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

	itMapSetGround(ip);
	itLinkBombSDefaultSetHitStatusNormal(item_gobj);
	itMainSetItemStatus(item_gobj, dItLinkBombStatusDesc, itStatus_LinkBomb_GWait);
}

// 80185FD8
void itLinkBombAFallSetStatus(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	ip->is_allow_pickup = FALSE;

	itMapSetAir(ip);
	itLinkBombSDefaultSetHitStatusNormal(item_gobj);
	itMainSetItemStatus(item_gobj, dItLinkBombStatusDesc, itStatus_LinkBomb_AFall);
}

// 80186024
sb32 itLinkBombFHoldProcUpdate(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);
	ftStruct* fp = ftGetStruct(ip->owner_gobj);

	if (fp->status_info.status_id == ftStatus_Common_DokanWait) // Odd but go off
		return FALSE;
	else
	{
		if (ip->lifetime == 0)
		{
			itMainSetFighterRelease(item_gobj, &ip->phys_info.vel_air,
									1.0F); // OK, WHAT? This function takes 5 arguments, but it doesn't match
										   // otherwise??? Did they actually redefine this? Passes pointer in a3
										   // instead of u16... Do we leave this out of the header and declare it
										   // separately to match? Update 3/23/2023: matches as variadic. No
										   // comment. Update  7/2/2023: variadic match confirmed fake, so does this
										   // file use an erroneous decleration?
			itMainClearOwnerStats(item_gobj);
			itLinkBombNExplodeInitItemVars(item_gobj);
		}
		if (ip->lifetime == ITLINKBOMB_BLOAT_BEGIN)
		{
			itMainCheckSetColAnimID(item_gobj, ITLINKBOMB_BLOAT_COLANIM_ID, ITLINKBOMB_BLOAT_COLANIM_LENGTH);

			ip->item_vars.link_bomb.scale_index = 1;
		}
		if (ip->lifetime < ITLINKBOMB_BLOAT_BEGIN)
			itLinkBombNExplodeWaitUpdateScale(item_gobj);
		ip->lifetime--;

		return FALSE;
	}
}

// 8018611C
void itLinkBombFHoldSetStatus(GObj* item_gobj)
{
	itLinkBombSDefaultSetHitStatusNone(item_gobj);
	itMainSetItemStatus(item_gobj, dItLinkBombStatusDesc, itStatus_LinkBomb_FHold);
}

// 80186150
sb32 itLinkBombFThrowProcMap(GObj* item_gobj)
{
	s32 unused;
	itStruct* ip = itGetStruct(item_gobj);
	Vec3f vel = ip->phys_info.vel_air;

	if (itMapCheckMapReboundProcAll(item_gobj, 0.4F, 0.3F, itLinkBombAFallSetStatus) != FALSE)
	{
		if ((ABSF(vel.x) > ITLINKBOMB_EXPLODE_THRESHOLD_VEL_X) || (ABSF(vel.y) > ITLINKBOMB_EXPLODE_THRESHOLD_VEL_Y))
			itLinkBombNExplodeInitItemVars(item_gobj);
	}
	return FALSE;
}

// 80186224
void itLinkBombFThrowSetStatus(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	itLinkBombSDefaultSetHitStatusNormal(item_gobj);

	ip->is_damage_all = TRUE;

	itMainSetItemStatus(item_gobj, dItLinkBombStatusDesc, itStatus_LinkBomb_FThrow);
}

// 80186270
sb32 itLinkBombFDropProcUpdate(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	if (ip->item_vars.link_bomb.drop_update_wait != 0)
		ip->item_vars.link_bomb.drop_update_wait--;
	else
		itLinkBombAFallProcUpdate(item_gobj);

	return FALSE;
}

// 801862AC
sb32 itLinkBombFDropProcHit(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	if (ip->item_vars.link_bomb.drop_update_wait == 0)
		itLinkBombFThrowProcHit(item_gobj);
	return FALSE;
}

// 801862E0
sb32 itLinkBombFDropProcDamage(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	if (ip->item_vars.link_bomb.drop_update_wait == 0)
		itLinkBombSDefaultProcDamage(item_gobj);
	return FALSE;
}

// 80186314
void itLinkBombFDropSetStatus(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	itLinkBombSDefaultSetHitStatusNormal(item_gobj);

	ip->item_vars.link_bomb.drop_update_wait = 10;

	ip->is_damage_all = TRUE;

	itMainSetItemStatus(item_gobj, dItLinkBombStatusDesc, itStatus_LinkBomb_FDrop);
}

void itLinkBombNExplodeInitItemVars(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

	itMainClearOwnerStats(item_gobj);
	itLinkBombNExplodeMakeEffectGotoSetStatus(item_gobj);
	func_800269C0_275C0(alSound_SFX_ExplodeL);
}

// 801863AC
void itLinkBombNExplodeUpdateHitEvent(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);
	itHitEvent* ev = itGetHitEvent(dItLinkBombItemDesc, lITLinkBombHitEvents);

	if (ip->it_multi == ev[ip->item_event_index].timer)
	{
		ip->item_hit.angle = ev[ip->item_event_index].angle;
		ip->item_hit.damage = ev[ip->item_event_index].damage;
		ip->item_hit.size = ev[ip->item_event_index].size;

		ip->item_hit.can_rehit_item = TRUE;
		ip->item_hit.can_hop = FALSE;
		ip->item_hit.can_reflect = FALSE;
		ip->item_hit.can_setoff = FALSE;

		ip->item_hit.element = gmHitCollision_Element_Fire;

		ip->item_event_index++;

		if (ip->item_event_index == 4)
			ip->item_event_index = 3;
	}
}

// 80186498
sb32 itLinkBombSDefaultProcShield(GObj* item_gobj)
{
	itMainVelSetRebound(item_gobj);

	return FALSE;
}

// 801864BC
sb32 func_ovl3_801864BC(GObj* item_gobj) // Unused
{
	func_ovl3_80185B18(item_gobj);
	itLinkBombNExplodeInitItemVars(item_gobj);

	return FALSE;
}

// 801864E8
void itLinkBombNExplodeInitHitbox(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	ip->it_multi = 0;
	ip->item_event_index = 0;

	ip->item_hit.throw_mul = 1.0F;

	itLinkBombNExplodeUpdateHitEvent(item_gobj);
}

// 80186524
sb32 itLinkBombNExplodeProcUpdate(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	itLinkBombNExplodeUpdateHitEvent(item_gobj);

	ip->it_multi++;

	if (ip->it_multi == ITLINKBOMB_EXPLODE_LIFETIME)
		return TRUE;
	else
		return FALSE;
}

// 8018656C
void itLinkBombNExplodeSetStatus(GObj* item_gobj)
{
	itLinkBombNExplodeInitHitbox(item_gobj);
	itMainSetItemStatus(item_gobj, dItLinkBombStatusDesc, itStatus_LinkBomb_NExplode);
}

// 801865A0
GObj* itLinkBombMakeItem(GObj* fighter_gobj, Vec3f* pos, Vec3f* vel)
{
	GObj* item_gobj = itManagerMakeItem(fighter_gobj, &dItLinkBombItemDesc, pos, vel, ITEM_MASK_SPAWN_FIGHTER);
	DObj* dobj;
	itStruct* ip;

	if (item_gobj != NULL)
	{
		ip = itGetStruct(item_gobj);
		dobj = DObjGetStruct(item_gobj);

		omAddOMMtxForDObjFixed(dobj, 0x2E, 0);
		omAddOMMtxForDObjFixed(dobj->child, 0x2E, 0);

		ip->it_multi = 0;

		ip->lifetime = ITLINKBOMB_LIFETIME;

		ip->item_vars.link_bomb.scale_index = 0;
		ip->item_vars.link_bomb.scale_int = ITLINKBOMB_SCALE_INT;

		ip->item_hit.can_rehit_shield = TRUE;

		ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

		itMainSetFighterHold(item_gobj, fighter_gobj);
	}
	return item_gobj;
}
