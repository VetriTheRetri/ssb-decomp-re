#include <it/item.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

// WARNING: Intentionally erroneous declaration. Missing two u16 arguments after f32. HAL's mistake, not mine.
extern void itMainSetFighterRelease(GObj*, Vec3f*, f32);

extern intptr_t lITLinkBombItemAttributes;	// 0x00000040
extern intptr_t lITLinkBombHitEvents;  		// 0x00000088
extern intptr_t lITLinkBombBloatScales; 	// 0x000000A8

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dItLinkBombItemDesc =
{
	nITKindLinkBomb, 						// Item Kind
	&gFTDataLinkMain, 						// Pointer to item file data?
	&lITLinkBombItemAttributes,				// Offset of item attributes in file?

	// DObj transformation struct
	{
		nOMTransformTra,  					// Main matrix transformations
		nOMTransformNull, 					// Secondary matrix transformations?
		0					  				// ???
	},

	nGMHitUpdateDisable, 					// Hitbox Update State
	itLinkBombHoldProcUpdate,				// Proc Update
	NULL,									// Proc Map
	NULL,									// Proc Hit
	NULL,									// Proc Shield
	NULL,									// Proc Hop
	NULL,									// Proc Set-Off
	NULL,									// Proc Reflector
	NULL									// Proc Damage
};

itStatusDesc dItLinkBombStatusDescs[/* */] = 
{
	// Status 0 (Ground Wait)
	{
		itLinkBombWaitProcUpdate,	 		// Proc Update
		itLinkBombWaitProcMap,		 		// Proc Map
		NULL,						 		// Proc Hit
		NULL,						 		// Proc Shield
		NULL,						 		// Proc Hop
		NULL,						 		// Proc Set-Off
		NULL,						 		// Proc Reflector
		itLinkBombCommonProcDamage 			// Proc Damage
	},

	// Status 1 (Air Wait Fall)
	{
		itLinkBombFallProcUpdate,	 		// Proc Update
		itLinkBombFallProcMap,		 		// Proc Map
		NULL,						 		// Proc Hit
		NULL,						 		// Proc Shield
		NULL,						 		// Proc Hop
		NULL,						 		// Proc Set-Off
		NULL,						 		// Proc Reflector
		itLinkBombCommonProcDamage 			// Proc Damage
	},

	// Status 2 (Fighter Hold)
	{
		itLinkBombHoldProcUpdate, 			// Proc Update
		NULL,					   			// Proc Map
		NULL,					   			// Proc Hit
		NULL,					   			// Proc Shield
		NULL,					   			// Proc Hop
		NULL,					   			// Proc Set-Off
		NULL,					   			// Proc Reflector
		NULL					   			// Proc Damage
	},

	// Status 3 (Fighter Throw)
	{
		itLinkBombFallProcUpdate,	   		// Proc Update
		itLinkBombThrownProcMap,	   		// Proc Map
		itLinkBombThrownProcHit,	   		// Proc Hit
		itLinkBombCommonProcShield,  		// Proc Shield
		itMainCommonProcHop,	   			// Proc Hop
		NULL,						   		// Proc Set-Off
		itMainCommonProcReflector, 			// Proc Reflector
		itLinkBombCommonProcDamage   		// Proc Damage
	},

	// Status 4 (Fighter Drop)
	{
		itLinkBombDroppedProcUpdate,	   	// Proc Update
		itLinkBombThrownProcMap,	   		// Proc Map
		itLinkBombDroppedProcHit,		   	// Proc Hit
		itLinkBombCommonProcShield,  		// Proc Shield
		itMainCommonProcHop,	  		 	// Proc Hop
		NULL,						   		// Proc Set-Off
		itMainCommonProcReflector, 			// Proc Reflector
		itLinkBombDroppedProcDamage	   		// Proc Damage
	},

	// Status 5 (Neutral Explosion)
	{
		itLinkBombExplodeProcUpdate,  		// Proc Update
		NULL,						  		// Proc Map
		NULL,						  		// Proc Hit
		NULL,						  		// Proc Shield
		NULL,						  		// Proc Hop
		NULL,						  		// Proc Set-Off
		NULL,						  		// Proc Reflector
		NULL						  		// Proc Damage
	}
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itLinkBombStatus
{
	nITLinkBombStatusWait,
	nITLinkBombStatusFall,
	nITLinkBombStatusHold,
	nITLinkBombStatusThrown,
	nITLinkBombStatusDropped,
	nITLinkBombStatusExplode,
	nITLinkBombStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 801859C0
void itLinkBombExplodeWaitUpdateScale(GObj *item_gobj)
{
	DObj *dobj = DObjGetStruct(item_gobj);
	itStruct *ip = itGetStruct(item_gobj);

	if (ip->item_vars.link_bomb.scale_int == 0)
	{
		f32 *scales = (f32*) ((uintptr_t)*dItLinkBombItemDesc.p_file + (intptr_t)&lITLinkBombBloatScales); // Linker thing
		s32 scale_id = (ip->item_vars.link_bomb.scale_id > ITLINKBOMB_SCALE_INDEX_REWIND) ?
					      (ITLINKBOMB_SCALE_INDEX_MAX - ip->item_vars.link_bomb.scale_id) :
					   								    ip->item_vars.link_bomb.scale_id;

		if (ip->is_hold)
		{
			dobj->child->scale.vec.f.x = dobj->child->scale.vec.f.y = scales[scale_id];
		}
		else dobj->scale.vec.f.x = dobj->scale.vec.f.y = scales[scale_id];

		ip->item_vars.link_bomb.scale_int = ITLINKBOMB_SCALE_INT;

		if (ip->item_vars.link_bomb.scale_id >= ITLINKBOMB_SCALE_INDEX_MAX)
		{
			ip->item_vars.link_bomb.scale_id = 0;
		}
		else ip->item_vars.link_bomb.scale_id += 1; // Doesn't match with "++" lol
	}
	ip->item_vars.link_bomb.scale_int--;
}

// 80185A80
void itLinkBombExplodeMakeEffectGotoSetStatus(GObj *item_gobj)
{
	s32 unused;
	DObj *dobj = DObjGetStruct(item_gobj);
	itStruct *ip = itGetStruct(item_gobj);
	lbParticle *ptcl;

	itLinkBombCommonSetHitStatusNone(item_gobj);

	ptcl = efManagerSparkleWhiteMultiExplodeMakeEffect(&dobj->translate.vec.f);

	if (ptcl != NULL)
	{
		ptcl->tfrm->scale.x = ITLINKBOMB_EXPLODE_EFFECT_SCALE;
		ptcl->tfrm->scale.y = ITLINKBOMB_EXPLODE_EFFECT_SCALE;
		ptcl->tfrm->scale.z = ITLINKBOMB_EXPLODE_EFFECT_SCALE;
	}
	efManagerQuakeMakeEffect(1);

	DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_HIDDEN;

	ip->item_hit.hit_sfx = nSYAudioFGMExplodeL;

	itMainRefreshHit(item_gobj);
	itLinkBombExplodeSetStatus(item_gobj);
}

// 0x80185B18 - Called only by unused function
void func_ovl3_80185B18(GObj *item_gobj)
{
	s32 unused[5];
	itStruct *ip = itGetStruct(item_gobj);
	itAttributes *attributes = ip->attributes;
	DObj *dobj = DObjGetStruct(item_gobj);
	Vec3f pos = dobj->translate.vec.f;

	pos.y += attributes->objcoll_bottom;

	efManagerDustHeavyDoubleMakeEffect(&pos, ip->lr, 1.0F);
}

// 80185B84
sb32 itLinkBombCommonProcDamage(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	if (ip->damage_queue >= ITLINKBOMB_HEALTH)
		itLinkBombExplodeInitItemVars(item_gobj);
	else
	{
		ip->lr = -ip->lr_damage;

		ip->phys_info.vel_air.x = -ip->lr_damage  *ITLINKBOMB_DAMAGE_RECOIL_VEL_X;
		ip->phys_info.vel_air.y = -ip->lr_damage  *ITLINKBOMB_DAMAGE_RECOIL_VEL_Y;
	}
	return FALSE;
}

// 80185BFC
sb32 itLinkBombThrownProcHit(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	if 
	(
		(ABSF(ip->phys_info.vel_air.x) > ITLINKBOMB_EXPLODE_THRESHOLD_VEL_X) || 
		(ABSF(ip->phys_info.vel_air.y) > ITLINKBOMB_EXPLODE_THRESHOLD_VEL_Y)
	)
	{
		itLinkBombExplodeInitItemVars(item_gobj);
	}
	else
	{
		ip->lr = -ip->lr_attack;

		ip->phys_info.vel_air.x = -ip->lr_attack * ITLINKBOMB_HIT_RECOIL_VEL_X;
		ip->phys_info.vel_air.y = ITLINKBOMB_HIT_RECOIL_VEL_Y;

		itLinkBombFallSetStatus(item_gobj);
	}
	return FALSE;
}

// 80185CD4
void itLinkBombCommonSetHitStatusNormal(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	ip->item_hurt.hitstatus = nGMHitStatusNormal;
}

// 80185CE4
void itLinkBombCommonSetHitStatusNone(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	ip->item_hurt.hitstatus = nGMHitStatusNone;
}

// 80185CF0
sb32 itLinkBombFallProcUpdate(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	itMainApplyGravityClampTVel(ip, ITLINKBOMB_GRAVITY, ITLINKBOMB_TVEL);

	if (ip->lifetime == 0)
	{
		itLinkBombExplodeInitItemVars(item_gobj);
	}
	if (ip->lifetime == ITLINKBOMB_BLOAT_BEGIN)
	{
		itMainCheckSetColAnimID(item_gobj, ITLINKBOMB_BLOAT_COLANIM_ID, ITLINKBOMB_BLOAT_COLANIM_LENGTH);

		ip->item_vars.link_bomb.scale_id = 1;
	}
	if (ip->lifetime < ITLINKBOMB_BLOAT_BEGIN)
	{
		itLinkBombExplodeWaitUpdateScale(item_gobj);
	}
	ip->lifetime--;

	itVisualsUpdateSpin(item_gobj);

	return FALSE;
}

// 80185DCC
sb32 itLinkBombWaitProcUpdate(GObj *item_gobj)
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
		itLinkBombExplodeInitItemVars(item_gobj);
	}
	if (ip->lifetime == ITLINKBOMB_BLOAT_BEGIN)
	{
		itMainCheckSetColAnimID(item_gobj, ITLINKBOMB_BLOAT_COLANIM_ID, ITLINKBOMB_BLOAT_COLANIM_LENGTH);

		ip->item_vars.link_bomb.scale_id = 1;
	}
	if (ip->lifetime < ITLINKBOMB_BLOAT_BEGIN)
	{
		itLinkBombExplodeWaitUpdateScale(item_gobj);
	}
	ip->lifetime--;

	return FALSE;
}

// 80185F10
sb32 itLinkBombWaitProcMap(GObj *item_gobj)
{
	itMapCheckLRWallProcGround(item_gobj, itLinkBombFallSetStatus);

	return FALSE;
}

// 80185F38
sb32 itLinkBombFallProcMap(GObj *item_gobj)
{
	itMapCheckDestroyDropped(item_gobj, ITLINKBOMB_MAP_REBOUND_COMMON, ITLINKBOMB_MAP_REBOUND_GROUND, itLinkBombWaitSetStatus);

	return FALSE;
}

// 80185F70
void itLinkBombWaitSetStatus(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	ip->item_hit.update_state = nGMHitUpdateDisable;

	ip->is_allow_pickup = TRUE;

	ip->times_landed = 0;

	ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

	itMapSetGround(ip);
	itLinkBombCommonSetHitStatusNormal(item_gobj);
	itMainSetItemStatus(item_gobj, dItLinkBombStatusDescs, nITLinkBombStatusWait);
}

// 80185FD8
void itLinkBombFallSetStatus(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	ip->is_allow_pickup = FALSE;

	itMapSetAir(ip);
	itLinkBombCommonSetHitStatusNormal(item_gobj);
	itMainSetItemStatus(item_gobj, dItLinkBombStatusDescs, nITLinkBombStatusFall);
}

// 80186024
sb32 itLinkBombHoldProcUpdate(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);
	ftStruct *fp = ftGetStruct(ip->owner_gobj);

	if (fp->status_info.status_id == nFTCommonStatusDokanWait) // Kind of odd but sure
	{
		return FALSE;
	}
	else
	{
		if (ip->lifetime == 0)
		{
			/* OK, WHAT? This function takes 5 arguments, but it doesn't match
			 * otherwise??? Did they actually redefine this? Passes pointer in a3
			 * instead of u16... Do we leave this out of the header and declare it
			 * erroneously in this file to match? 
			 */
			
			// Update 3/23/2023: itMainSetFighterRelease matches as variadic. No comment.
			// Update  7/2/2023: variadic match confirmed fake, so does this file really use an erroneous decleration?

			itMainSetFighterRelease(item_gobj, &ip->phys_info.vel_air, 1.0F);
			itMainClearOwnerStats(item_gobj);
			itLinkBombExplodeInitItemVars(item_gobj);
		}
		if (ip->lifetime == ITLINKBOMB_BLOAT_BEGIN)
		{
			itMainCheckSetColAnimID(item_gobj, ITLINKBOMB_BLOAT_COLANIM_ID, ITLINKBOMB_BLOAT_COLANIM_LENGTH);

			ip->item_vars.link_bomb.scale_id = 1;
		}
		if (ip->lifetime < ITLINKBOMB_BLOAT_BEGIN)
		{
			itLinkBombExplodeWaitUpdateScale(item_gobj);
		}
		ip->lifetime--;

		return FALSE;
	}
}

// 8018611C
void itLinkBombHoldSetStatus(GObj *item_gobj)
{
	itLinkBombCommonSetHitStatusNone(item_gobj);
	itMainSetItemStatus(item_gobj, dItLinkBombStatusDescs, nITLinkBombStatusHold);
}

// 80186150
sb32 itLinkBombThrownProcMap(GObj *item_gobj)
{
	s32 unused;
	itStruct *ip = itGetStruct(item_gobj);
	Vec3f vel = ip->phys_info.vel_air;

	if (itMapCheckMapReboundProcAll(item_gobj, 0.4F, 0.3F, itLinkBombFallSetStatus) != FALSE)
	{
		if ((ABSF(vel.x) > ITLINKBOMB_EXPLODE_THRESHOLD_VEL_X) || (ABSF(vel.y) > ITLINKBOMB_EXPLODE_THRESHOLD_VEL_Y))
		{
			itLinkBombExplodeInitItemVars(item_gobj);
		}
	}
	return FALSE;
}

// 80186224
void itLinkBombThrownSetStatus(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	itLinkBombCommonSetHitStatusNormal(item_gobj);

	ip->is_damage_all = TRUE;

	itMainSetItemStatus(item_gobj, dItLinkBombStatusDescs, nITLinkBombStatusThrown);
}

// 80186270
sb32 itLinkBombDroppedProcUpdate(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	if (ip->item_vars.link_bomb.drop_update_wait != 0)
	{
		ip->item_vars.link_bomb.drop_update_wait--;
	}
	else itLinkBombFallProcUpdate(item_gobj);

	return FALSE;
}

// 801862AC
sb32 itLinkBombDroppedProcHit(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	if (ip->item_vars.link_bomb.drop_update_wait == 0)
	{
		itLinkBombThrownProcHit(item_gobj);
	}
	return FALSE;
}

// 801862E0
sb32 itLinkBombDroppedProcDamage(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	if (ip->item_vars.link_bomb.drop_update_wait == 0)
	{
		itLinkBombCommonProcDamage(item_gobj);
	}
	return FALSE;
}

// 80186314
void itLinkBombDroppedSetStatus(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	itLinkBombCommonSetHitStatusNormal(item_gobj);

	ip->item_vars.link_bomb.drop_update_wait = 10;

	ip->is_damage_all = TRUE;

	itMainSetItemStatus(item_gobj, dItLinkBombStatusDescs, nITLinkBombStatusDropped);
}

void itLinkBombExplodeInitItemVars(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

	itMainClearOwnerStats(item_gobj);
	itLinkBombExplodeMakeEffectGotoSetStatus(item_gobj);
	func_800269C0_275C0(nSYAudioFGMExplodeL);
}

// 801863AC
void itLinkBombExplodeUpdateHitEvent(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);
	itHitEvent *ev = itGetHitEvent(dItLinkBombItemDesc, lITLinkBombHitEvents);

	if (ip->it_multi == ev[ip->item_event_id].timer)
	{
		ip->item_hit.angle = ev[ip->item_event_id].angle;
		ip->item_hit.damage = ev[ip->item_event_id].damage;
		ip->item_hit.size = ev[ip->item_event_id].size;

		ip->item_hit.can_rehit_item = TRUE;
		ip->item_hit.can_hop = FALSE;
		ip->item_hit.can_reflect = FALSE;
		ip->item_hit.can_setoff = FALSE;

		ip->item_hit.element = nGMHitElementFire;

		ip->item_event_id++;

		if (ip->item_event_id == 4)
			ip->item_event_id = 3;
	}
}

// 80186498
sb32 itLinkBombCommonProcShield(GObj *item_gobj)
{
	itMainVelSetRebound(item_gobj);

	return FALSE;
}

// 801864BC
sb32 func_ovl3_801864BC(GObj *item_gobj) // Unused
{
	func_ovl3_80185B18(item_gobj);
	itLinkBombExplodeInitItemVars(item_gobj);

	return FALSE;
}

// 801864E8
void itLinkBombExplodeInitHitbox(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	ip->it_multi = 0;
	ip->item_event_id = 0;

	ip->item_hit.throw_mul = 1.0F;

	itLinkBombExplodeUpdateHitEvent(item_gobj);
}

// 80186524
sb32 itLinkBombExplodeProcUpdate(GObj *item_gobj)
{
	itStruct *ip = itGetStruct(item_gobj);

	itLinkBombExplodeUpdateHitEvent(item_gobj);

	ip->it_multi++;

	if (ip->it_multi == ITLINKBOMB_EXPLODE_LIFETIME)
	{
		return TRUE;
	}
	else return FALSE;
}

// 8018656C
void itLinkBombExplodeSetStatus(GObj *item_gobj)
{
	itLinkBombExplodeInitHitbox(item_gobj);
	itMainSetItemStatus(item_gobj, dItLinkBombStatusDescs, nITLinkBombStatusExplode);
}

// 801865A0
GObj *itLinkBombMakeItem(GObj *fighter_gobj, Vec3f *pos, Vec3f *vel)
{
	GObj *item_gobj = itManagerMakeItem(fighter_gobj, &dItLinkBombItemDesc, pos, vel, ITEM_FLAG_PARENT_FIGHTER);
	DObj *dobj;
	itStruct *ip;

	if (item_gobj != NULL)
	{
		ip = itGetStruct(item_gobj);
		dobj = DObjGetStruct(item_gobj);

		gcAddOMMtxForDObjFixed(dobj, 0x2E, 0);
		gcAddOMMtxForDObjFixed(dobj->child, 0x2E, 0);

		ip->it_multi = 0;

		ip->lifetime = ITLINKBOMB_LIFETIME;

		ip->item_vars.link_bomb.scale_id = 0;
		ip->item_vars.link_bomb.scale_int = ITLINKBOMB_SCALE_INT;

		ip->item_hit.can_rehit_shield = TRUE;

		ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

		itMainSetFighterHold(item_gobj, fighter_gobj);
	}
	return item_gobj;
}
