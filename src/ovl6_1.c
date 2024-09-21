#include <sys/objtypes.h>
#include <lb/reloc_data_mgr.h>
#include <sys/objdef.h>
#include <sys/obj.h>
#include <gm/gmsound.h>
#include <it/item.h>

extern u32 dGMCommonFileIDs[8];
extern void* gGMCommonFiles[/* */];
extern void* gBonusGameFileData[/* */];

sb32 itTargetCommonProcDamage(GObj* item_gobj);

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
	itTargetCommonProcDamage			// Proc Damage
};

// 8018F3B0
rdFileNode gOverlay6StatusBuf[100];

// 8018F6D0
rdFileNode gOverlay6ForceBuf[7];

// 8018ED70
void func_ovl6_8018ED70()
{
	rdSetup rldm_setup;

	rldm_setup.table_addr = &lRDManagerTableAddr;
	rldm_setup.table_files_num = &lRDManagerTableFilesNum;
	rldm_setup.file_heap = NULL;
	rldm_setup.file_heap_size = 0;
	rldm_setup.status_buf = gOverlay6StatusBuf;
	rldm_setup.status_buf_size = ARRAY_COUNT(gOverlay6StatusBuf);
	rldm_setup.force_buf = gOverlay6ForceBuf;
	rldm_setup.force_buf_size = ARRAY_COUNT(gOverlay6ForceBuf);

	rdManagerInitSetup(&rldm_setup);
	rdManagerLoadFiles(dGMCommonFileIDs, ARRAY_COUNT(dGMCommonFileIDs), gGMCommonFiles,
						 gsMemoryAlloc(rdManagerGetAllocSize(dGMCommonFileIDs, ARRAY_COUNT(dGMCommonFileIDs)), 0x10));
}

// 8018EE10
sb32 itTargetCommonProcDamage(GObj* item_gobj)
{
	efManagerShieldBreakMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);
	efManagerFireGrindMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

	func_800269C0_275C0(nSYAudioFGMBonus1TargetBreak);

	scBonusGame_UpdateBonus1TargetCount();

	return TRUE;
}

// 8018EE5C
GObj* itTargetMakeItem(GObj* parent_gobj, Vec3f* pos, Vec3f* vel, u32 flags)
{
	GObj* item_gobj = itManagerMakeItem(parent_gobj, &dItTargetItemDesc, pos, vel, flags);

	if (item_gobj != NULL)
	{
		itStruct* ip = itGetStruct(item_gobj);

		ip->ga = nMPKineticsGround;
		ip->coll_data.ground_line_id = -1;
	}
	return item_gobj;
}
