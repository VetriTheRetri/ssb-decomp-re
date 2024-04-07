#include <it/item.h>
#include <ft/fighter.h>

extern void itMainSetFighterRelease(GObj*, Vec3f*, f32);

extern void* gFtDataLinkMain;

extern intptr_t lItLinkBombHitEvents;  // 0x00000088
extern intptr_t lItLinkBombBloatScale; // 0x000000A8
extern sb32 itLinkBombFHoldProcUpdate(GObj* item_gobj);

itCreateDesc dItLinkBombItemDesc = {
	It_Kind_LinkBomb, // Item Kind
	&gFtDataLinkMain, // Pointer to item file data?
	0x40,			  // Offset of item attributes in file?

	// DObj transformation struct
	{
		OMMtx_Transform_Tra,  // Main matrix transformations
		OMMtx_Transform_Null, // Secondary matrix transformations?
		0					  // ???
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

void itLinkBombSDefaultSetHitStatusNone(GObj* item_gobj);
void itLinkBombAFallSetStatus(GObj* item_gobj);

// 0x801859C0
void itLinkBombNExplodeWaitUpdateScale(GObj* item_gobj)
{
	DObj* dobj = DObjGetStruct(item_gobj);
	itStruct* ip = itGetStruct(item_gobj);

	if (ip->item_vars.link_bomb.scale_int == 0)
	{
		f32* scale = (f32*)((uintptr_t)*dItLinkBombItemDesc.p_file + (intptr_t)&lItLinkBombBloatScale); // Linker thing
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

// 0x80185A80
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
void efParticle_DustHeavyDouble_MakeEffect(Vec3f*, s32, f32);
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

// 0x80185B84
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

// 0x80185BFC
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

// 0x80185CD4
void itLinkBombSDefaultSetHitStatusNormal(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
}

// 0x80185CE4
void itLinkBombSDefaultSetHitStatusNone(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;
}

// 0x80185CF0
void itMainApplyGClampTVel(void*, f32, f32); /* extern */
sb32 itLinkBombAFallProcUpdate(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

	itMainApplyGClampTVel(ip, ITLINKBOMB_GRAVITY, ITLINKBOMB_T_VEL);

	if (ip->lifetime == 0)
	{
		itLinkBombNExplodeInitItemVars(item_gobj);
	}
	if (ip->lifetime == ITLINKBOMB_BLOAT_BEGIN)
	{
		itMainCheckSetColAnimID(item_gobj, ITLINKBOMB_BLOAT_COLANIM_ID, ITLINKBOMB_BLOAT_COLANIM_LENGTH);

		ip->item_vars.link_bomb.scale_index = 1;
	}
	if (ip->lifetime < ITLINKBOMB_BLOAT_BEGIN)
	{
		itLinkBombNExplodeWaitUpdateScale(item_gobj);
	}
	ip->lifetime--;

	itManagerUpdateSpin(item_gobj);

	return FALSE;
}

// 0x80185DCC
sb32 itLinkBombGWaitProcUpdate(GObj* item_gobj)
{
	itStruct* ip = itGetStruct(item_gobj);

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
		itLinkBombNExplodeInitItemVars(item_gobj);
	}
	if (ip->lifetime == ITLINKBOMB_BLOAT_BEGIN)
	{
		itMainCheckSetColAnimID(item_gobj, ITLINKBOMB_BLOAT_COLANIM_ID, ITLINKBOMB_BLOAT_COLANIM_LENGTH);

		ip->item_vars.link_bomb.scale_index = 1;
	}
	if (ip->lifetime < ITLINKBOMB_BLOAT_BEGIN)
	{
		itLinkBombNExplodeWaitUpdateScale(item_gobj);
	}
	ip->lifetime--;

	return FALSE;
}

// 0x80185F10
sb32 itLinkBombGWaitProcMap(GObj* item_gobj)
{
	itMapCheckLRWallProcGround(item_gobj, itLinkBombAFallSetStatus);

	return FALSE;
}