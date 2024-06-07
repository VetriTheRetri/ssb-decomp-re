#include <ovl0/reloc_data_mgr.h>

extern void *gGMCommonFiles[];

// 0x8018E500
extern rdFileNode sAutoDemoStatusBuf[100];

// 0x8018E820
extern rdFileNode sAutoDemoForceBuf[7];
extern u32 dCommonFileIDs[8];

extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;

// FUNCTIONS
void func_ovl65_8018D0C0(void)
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
    rdManagerLoadFiles(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs), gGMCommonFiles, gsMemoryAlloc(rdManagerGetAllocSize(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs)), 0x10));
}