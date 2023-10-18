#include <ovl0/reloc_data_mgr.h>

extern void *gCommonSpriteFiles[/* */];

extern intptr_t D_NF_00000854;
extern intptr_t D_NF_001AC870;

extern u32 D_ovl2_80116BD0[8];

// 0x80190C40
RldmFileNode gOverlay7StatusBuf[100];

// 0x80190F60
RldmFileNode gOverlay7ForceBuf[7];

// 0x801906D0
void func_ovl7_801906D0(void)
{
    RldmSetup rldm_setup;

    rldm_setup.tableRomAddr = &D_NF_001AC870;
    rldm_setup.tableFileCount = &D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = gOverlay7StatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(gOverlay7StatusBuf);
    rldm_setup.forceBuf = gOverlay7ForceBuf;
    rldm_setup.forceBufSize = ARRAY_COUNT(gOverlay7ForceBuf);

    rldm_initialize(&rldm_setup);
    rldm_load_files_into
    (
        D_ovl2_80116BD0,
        ARRAY_COUNT(D_ovl2_80116BD0),
        gCommonSpriteFiles,
        hal_alloc
        (
            rldm_bytes_need_to_load(D_ovl2_80116BD0, ARRAY_COUNT(D_ovl2_80116BD0)),
            0x10
        )
    );
}