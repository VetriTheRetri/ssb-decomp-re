#include <ovl0/reloc_data_mgr.h>

extern void *gCommonFiles[];

// 0x8018E500
extern rdFileNode gAutoDemoStatusBuf[100];

// 0x8018E820
extern rdFileNode gAutoDemoForceBuf[7];
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
    rldm_setup.statusBuf = gAutoDemoStatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(gAutoDemoStatusBuf);
    rldm_setup.forceBuf = gAutoDemoForceBuf;
    rldm_setup.forceBufSize = ARRAY_COUNT(gAutoDemoForceBuf);

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs), gCommonFiles, hlMemoryAlloc(rdManagerGetAllocSize(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs)), 0x10));
}