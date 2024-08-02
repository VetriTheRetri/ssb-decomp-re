#include <ovl0/reloc_data_mgr.h>

extern void *gGMCommonFiles[];
extern u32 dCommonFileIDs[8];

rdFileNode D_ovl4_8018E480[100];
rdFileNode D_ovl4_8018E7A0[7];

// 8018E330
void func_ovl4_8018E330(void)
{
	rdSetup rldm_setup;

	rldm_setup.table_addr = (s32)&lRDManagerTableAddr;
	rldm_setup.table_files_num = (u32)&lRDManagerTableFilesNum;
	rldm_setup.file_heap = NULL;
	rldm_setup.file_heap_size = 0;
	rldm_setup.status_buf = D_ovl4_8018E480;
	rldm_setup.status_buf_size = ARRAY_COUNT(D_ovl4_8018E480);
	rldm_setup.force_buf = D_ovl4_8018E7A0;
	rldm_setup.force_buf_size = ARRAY_COUNT(D_ovl4_8018E7A0);

	rdManagerInitSetup(&rldm_setup);
	rdManagerLoadFiles(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs), gGMCommonFiles, gsMemoryAlloc(rdManagerGetAllocSize(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs)), 0x10));
}