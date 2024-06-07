#include <ovl0/reloc_data_mgr.h>

extern void *gGMCommonFiles[];
extern uintptr_t D_NF_00000854;
extern uintptr_t D_NF_001AC870;
extern u32 dCommonFileIDs[8];

rdFileNode D_ovl4_8018E480[100];
rdFileNode D_ovl4_8018E7A0[7];

// 0x8018E330
void func_ovl4_8018E330(void)
{
    rdSetup rldm_setup;

    rldm_setup.tableRomAddr = (s32)&D_NF_001AC870;
    rldm_setup.tableFileCount = (u32)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = D_ovl4_8018E480;
    rldm_setup.statusBufSize = ARRAY_COUNT(D_ovl4_8018E480);
    rldm_setup.forceBuf = D_ovl4_8018E7A0;
    rldm_setup.forceBufSize = ARRAY_COUNT(D_ovl4_8018E7A0);

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs), gGMCommonFiles, gsMemoryAlloc(rdManagerGetAllocSize(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs)), 0x10));
}
