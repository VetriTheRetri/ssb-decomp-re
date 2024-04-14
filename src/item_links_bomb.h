#ifndef _ITEM_LINKS_BOMB_H_
#define _ITEM_LINKS_BOMB_H_

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


// WARNING: Intentionally erroneous declaration. Missing two u16 arguments after f32. HAL's mistake, not mine.
extern void itMainSetFighterRelease(GObj*, Vec3f*, f32);

extern void* gFtDataLinkMain;

extern intptr_t D_NF_00000088; // 0x00000088
extern intptr_t D_NF_000000A8; // 0x000000A8

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

itStatusDesc dItLinkBombStatusDesc[/* */] = {
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
		itCommonSDefaultProcHop,	   // Proc Hop
		NULL,						   // Proc Set-Off
		itCommonSDefaultProcReflector, // Proc Reflector
		itLinkBombSDefaultProcDamage   // Proc Damage
	},

	// Status 4 (Fighter Drop)
	{
		itLinkBombFDropProcUpdate,	   // Proc Update
		itLinkBombFThrowProcMap,	   // Proc Map
		itLinkBombFDropProcHit,		   // Proc Hit
		itLinkBombSDefaultProcShield,  // Proc Shield
		itCommonSDefaultProcHop,	   // Proc Hop
		NULL,						   // Proc Set-Off
		itCommonSDefaultProcReflector, // Proc Reflector
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

#endif