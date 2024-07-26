#include <sys/objtypes.h>
#include <ovl0/reloc_data_mgr.h>
#include <sys/objdef.h>
#include <sys/obj.h>
#include <gm/gmsound.h>
#include <it/item.h>

extern intptr_t D_NF_00000854;
extern intptr_t D_NF_001AC870;
extern u32 dCommonFileIDs[8];
extern void* gGMCommonFiles[/* */];
extern void* gBonusGameFileData[/* */];

sb32 itTargetSDefaultProcDamage(GObj* item_gobj);

// 8018F130
itCreateDesc dItTargetItemDesc = {
	nITKindTarget,			// Item Kind
	&gBonusGameFileData[0], // Pointer to item file data?
	0,						// Offset of item attributes in file?

	// DObj transformation struct
	{
		nOMTransformTraRotRpyRSca, // Main matrix transformations
		nOMTransformNull,		   // Secondary matrix transformations?
		0							   // ???
	},

	nGMHitUpdateDisable, // Hitbox Update State
	NULL,								// Proc Update
	NULL,								// Proc Map
	NULL,								// Proc Hit
	NULL,								// Proc Shield
	NULL,								// Proc Hop
	NULL,								// Proc Set-Off
	NULL,								// Proc Reflector
	itTargetSDefaultProcDamage			// Proc Damage
};

// 8018F3B0
rdFileNode gOverlay6StatusBuf[100];

// 8018F6D0
rdFileNode gOverlay6ForceBuf[7];

// 8018ED70
void func_ovl6_8018ED70()
{
	rdSetup rldm_setup;

	rldm_setup.tableRomAddr = &D_NF_001AC870;
	rldm_setup.tableFileCount = &D_NF_00000854;
	rldm_setup.fileHeap = NULL;
	rldm_setup.fileHeapSize = 0;
	rldm_setup.statusBuf = gOverlay6StatusBuf;
	rldm_setup.statusBufSize = ARRAY_COUNT(gOverlay6StatusBuf);
	rldm_setup.forceBuf = gOverlay6ForceBuf;
	rldm_setup.forceBufSize = ARRAY_COUNT(gOverlay6ForceBuf);

	rdManagerInitSetup(&rldm_setup);
	rdManagerLoadFiles(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs), gGMCommonFiles,
						 gsMemoryAlloc(rdManagerGetAllocSize(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs)), 0x10));
}

// 8018EE10
sb32 itTargetSDefaultProcDamage(GObj* item_gobj)
{
	efManagerShieldBreakMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);
	efManagerFireGrindMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

	func_800269C0_275C0(alSound_SFX_Bonus1TargetBreak);

	scBonusGame_UpdateBonus1TargetCount();

	return TRUE;
}

// 8018EE5C
GObj* itTargetMakeItem(GObj* spawn_gobj, Vec3f* pos, Vec3f* vel, u32 flags)
{
	GObj* item_gobj = itManagerMakeItem(spawn_gobj, &dItTargetItemDesc, pos, vel, flags);

	if (item_gobj != NULL)
	{
		itStruct* ip = itGetStruct(item_gobj);

		ip->ga = nMPKineticsGround;
		ip->coll_data.ground_line_id = -1;
	}
	return item_gobj;
}
