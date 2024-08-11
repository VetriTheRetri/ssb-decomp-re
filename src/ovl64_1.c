#include <ovl0/reloc_data_mgr.h>

extern u32 dGMCommonFileIDs[8];
extern void *gGMCommonFiles[];

// 8018E500
rdFileNode sAutoDemoStatusBuf[100];

// 8018E820
rdFileNode sAutoDemoForceBuf[7];

void func_ovl64_8018E0C0()
{
	rdSetup rldm_setup;

	rldm_setup.table_addr = (intptr_t)&lRDManagerTableAddr;
	rldm_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
	rldm_setup.file_heap = NULL;
	rldm_setup.file_heap_size = 0;
	rldm_setup.status_buf = sAutoDemoStatusBuf;
	rldm_setup.status_buf_size = ARRAY_COUNT(sAutoDemoStatusBuf);
	rldm_setup.force_buf = sAutoDemoForceBuf;
	rldm_setup.force_buf_size = ARRAY_COUNT(sAutoDemoForceBuf);

	rdManagerInitSetup(&rldm_setup);
	rdManagerLoadFiles(dGMCommonFileIDs, ARRAY_COUNT(dGMCommonFileIDs), gGMCommonFiles, gsMemoryAlloc(rdManagerGetAllocSize(dGMCommonFileIDs, ARRAY_COUNT(dGMCommonFileIDs)), 0x10));
}