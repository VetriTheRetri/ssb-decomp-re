#include <ovl0/reloc_data_mgr.h>

extern void *gCommonFiles[/* */];

extern intptr_t D_NF_00000854;
extern intptr_t D_NF_001AC870;

extern u32 dCommonFileIDs[8];

rdFileNode gOverlay6StatusBuf[100];
rdFileNode gOverlay6ForceBuf[7];

// 0x8018ED70
void func_ovl6_8018ED70(void)
{
    rdSetup rldm_setup;

    rldm_setup.tableRomAddr = &D_NF_001AC870;
    rldm_setup.tableFileCount = &D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = gOverlay6StatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(gOverlay6StatusBuf);
    rldm_setup.forceBuf = gOverlay6ForceBuf;
    rldm_setup.forceBufSize = ARRAY_COUNT(gOverlay6ForceBuf);

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles
    (
        dCommonFileIDs,
        ARRAY_COUNT(dCommonFileIDs),
        gCommonFiles,
        gsMemoryAlloc
        (
            rdManagerGetAllocSize(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs)),
            0x10
        )
    );
}