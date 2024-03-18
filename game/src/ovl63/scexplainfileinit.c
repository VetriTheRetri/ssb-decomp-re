#include <ovl0/reloc_data_mgr.h>

extern void *gCommonFiles[];

// 0x8018EA30
extern rdFileNode sExplainStatusBuf[50];

// 0x8018EBC0
extern rdFileNode sExplainForceBuf[7];

extern u32 dCommonFileIDs[8];

extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;

// 0x8018E640
void func_ovl63_8018E640(void)
{
    rdSetup rldm_setup;

    rldm_setup.tableRomAddr = (intptr_t)&D_NF_001AC870;
    rldm_setup.tableFileCount = (uintptr_t)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = sExplainStatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(sExplainStatusBuf);
    rldm_setup.forceBuf = sExplainForceBuf;
    rldm_setup.forceBufSize = ARRAY_COUNT(sExplainForceBuf);

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs), gCommonFiles, hlMemoryAlloc(rdManagerGetAllocSize(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs)), 0x10));
}