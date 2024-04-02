#include <ovl0/reloc_data_mgr.h>

extern rdFileNode s1PGameStatusBuf[100];
extern rdFileNode s1PGameForceBuf[7];
extern u32 dCommonFileIDs[8];
extern void *gCommonFiles[/* */];

extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;

// 0x8018D0C0
void func_ovl65_8018D0C0(void)
{
    rdSetup rldm_setup;

    rldm_setup.tableRomAddr = (intptr_t)&D_NF_001AC870;
    rldm_setup.tableFileCount = (uintptr_t)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = s1PGameStatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(s1PGameStatusBuf);
    rldm_setup.forceBuf = s1PGameForceBuf;
    rldm_setup.forceBufSize = ARRAY_COUNT(s1PGameForceBuf);

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs), gCommonFiles, gsMemoryAlloc(rdManagerGetAllocSize(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs)), 0x10));
}
