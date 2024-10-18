#include <sys/develop.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <lb/library.h>
#include <sys/video.h>

// Externs
extern s32 gMNNoControllerFiles[];
extern u32 D_ovl11_800D67D8[];
extern lbFileNode D_ovl11_800D6AF8;

// Data
u32 D_ovl11_800D67B0[1] = { 0x00A9 };

// 0x800D6660
void mnNoControllerLoadFiles()
{
	lbRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = (lbFileNode*) &D_ovl11_800D67D8;
	rl_setup.status_buffer_size = 0x64;
	rl_setup.force_status_buffer = (lbFileNode*) &D_ovl11_800D6AF8;
	rl_setup.force_status_buffer_size = 7;
	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl11_800D67B0, ARRAY_COUNT(D_ovl11_800D67B0), gMNNoControllerFiles, syTaskmanMalloc(lbRelocGetAllocSize(D_ovl11_800D67B0, ARRAY_COUNT(D_ovl11_800D67B0)), 0x10U));
}