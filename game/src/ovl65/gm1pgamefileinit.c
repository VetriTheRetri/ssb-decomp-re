#include <ovl0/reloc_data_mgr.h>

extern RldmFileNode g1PGameStatusBuf[100];
extern RldmFileNode g1PGameForceBuf[7];
extern u32 D_ovl2_80116BD0[8];
extern void *gCommonSpriteFiles[/* */];

extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;

// 0x8018D0C0
void func_ovl65_8018D0C0(void)
{
    RldmSetup rldm_setup;

    rldm_setup.tableRomAddr = (intptr_t)&D_NF_001AC870;
    rldm_setup.tableFileCount = (uintptr_t)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = g1PGameStatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(g1PGameStatusBuf);
    rldm_setup.forceBuf = g1PGameForceBuf;
    rldm_setup.forceBufSize = ARRAY_COUNT(g1PGameForceBuf);

    rldm_initialize(&rldm_setup);
    rldm_load_files_into(D_ovl2_80116BD0, ARRAY_COUNT(D_ovl2_80116BD0), gCommonSpriteFiles, hal_alloc(rldm_bytes_need_to_load(D_ovl2_80116BD0, ARRAY_COUNT(D_ovl2_80116BD0)), 0x10));
}