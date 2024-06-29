#include <ovl0/reloc_data_mgr.h>

extern intptr_t D_NF_00000854;
extern intptr_t D_NF_001AC870;
extern u32 dCommonFileIDs[8];
extern void *gCommonSpriteFiles[];

// 8018E500
rdFileNode sAutoDemoStatusBuf[100];

// 8018E820
rdFileNode sAutoDemoForceBuf[7];

void func_ovl64_8018E0C0()
{
	rdSetup rldm_setup;

	rldm_setup.tableRomAddr = (intptr_t)&D_NF_001AC870;
	rldm_setup.tableFileCount = (uintptr_t)&D_NF_00000854;
	rldm_setup.fileHeap = NULL;
	rldm_setup.fileHeapSize = 0;
	rldm_setup.statusBuf = sAutoDemoStatusBuf;
	rldm_setup.statusBufSize = ARRAY_COUNT(sAutoDemoStatusBuf);
	rldm_setup.forceBuf = sAutoDemoForceBuf;
	rldm_setup.forceBufSize = ARRAY_COUNT(sAutoDemoForceBuf);

	rdManagerInitSetup(&rldm_setup);
	rdManagerLoadFiles(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs), gCommonSpriteFiles, gsMemoryAlloc(rdManagerGetAllocSize(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs)), 0x10));
}