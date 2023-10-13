#include <it/item.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

extern void *gCommonSpriteFiles[/* */];

extern intptr_t D_NF_00000854;
extern intptr_t D_NF_001AC870;

extern u32 D_ovl2_80116BD0[8];

RldmFileNode gOverlay6StatusBuf[100];
RldmFileNode gOverlay6ForceBuf[7];

// 0x8018ED70
void func_ovl6_8018ED70(void)
{
    RldmSetup rldm_setup;

    rldm_setup.tableRomAddr = &D_NF_001AC870;
    rldm_setup.tableFileCount = &D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = gOverlay6StatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(gOverlay6StatusBuf);
    rldm_setup.forceBuf = gOverlay6ForceBuf;
    rldm_setup.forceBufSize = ARRAY_COUNT(gOverlay6ForceBuf);

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