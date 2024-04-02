#include <ovl0/reloc_data_mgr.h>

extern void *gCommonFiles[/* */];

extern intptr_t D_NF_00000854;
extern intptr_t D_NF_001AC870;

extern u32 dCommonFileIDs[8];

// 0x80190C40
rdFileNode gOverlay7StatusBuf[100];

// 0x80190F60
rdFileNode gOverlay7ForceBuf[7];

// 0x801906D0
void func_ovl7_801906D0(void)
{
    rdSetup rldm_setup;

    rldm_setup.tableRomAddr = &D_NF_001AC870;
    rldm_setup.tableFileCount = &D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = gOverlay7StatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(gOverlay7StatusBuf);
    rldm_setup.forceBuf = gOverlay7ForceBuf;
    rldm_setup.forceBufSize = ARRAY_COUNT(gOverlay7ForceBuf);

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