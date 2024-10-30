#include <sys/objtypes.h>
#include <lb/library.h>
#include <sys/objdef.h>
#include <sys/obj.h>
#include <gm/gmsound.h>
#include <it/item.h>

extern u32 dGMCommonFileIDs[8];
extern void* gGMCommonFiles[/* */];
extern void* gBonusGameFileData[/* */];

sb32 itTargetCommonProcDamage(GObj* item_gobj);

// 0x8018F130
ITCreateDesc dItTargetItemDesc = {
	nITKindTarget,			// Item Kind
	&gBonusGameFileData[0], // Pointer to item file data?
	0,						// Offset of item attributes in file?

	// DObj transformation struct
	{
		nGCMatrixKindTraRotRpyRSca, // Main matrix transformations
		nGCMatrixKindNull,		   // Secondary matrix transformations?
		0							   // ???
	},

	nGMAttackStateOff, // Hitbox Update State
	NULL,								// Proc Update
	NULL,								// Proc Map
	NULL,								// Proc Hit
	NULL,								// Proc Shield
	NULL,								// Proc Hop
	NULL,								// Proc Set-Off
	NULL,								// Proc Reflector
	itTargetCommonProcDamage			// Proc Damage
};

// 0x8018F3B0
LBFileNode gOverlay6StatusBuffer[100];

// 0x8018F6D0
LBFileNode gOverlay6ForceStatusBuffer[7];

// 0x8018ED70
void func_ovl6_8018ED70()
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = gOverlay6StatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(gOverlay6StatusBuffer);
	rl_setup.force_status_buffer = gOverlay6ForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(gOverlay6ForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(dGMCommonFileIDs, ARRAY_COUNT(dGMCommonFileIDs), gGMCommonFiles,
						 syTaskmanMalloc(lbRelocGetAllocSize(dGMCommonFileIDs, ARRAY_COUNT(dGMCommonFileIDs)), 0x10));
}

// 0x8018EE10
sb32 itTargetCommonProcDamage(GObj* item_gobj)
{
	efManagerShieldBreakMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);
	efManagerFireGrindMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

	func_800269C0_275C0(nSYAudioFGMBonus1TargetBreak);

	scBonusGame_UpdateBonus1TargetCount();

	return TRUE;
}

// 0x8018EE5C
GObj* itTargetMakeItem(GObj* parent_gobj, Vec3f* pos, Vec3f* vel, u32 flags)
{
	GObj* item_gobj = itManagerMakeItem(parent_gobj, &dItTargetItemDesc, pos, vel, flags);

	if (item_gobj != NULL)
	{
		ITStruct* ip = itGetStruct(item_gobj);

		ip->ga = nMPKineticsGround;
		ip->coll_data.ground_line_id = -1;
	}
	return item_gobj;
}
