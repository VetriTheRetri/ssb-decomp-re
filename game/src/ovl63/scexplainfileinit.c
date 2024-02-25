#include <ovl0/reloc_data_mgr.h>

extern void *gCommonSpriteFiles[];
extern RldmFileNode D_ovl63_8018EBC0[7];
extern RldmFileNode D_ovl63_8018EA30[50];
extern u32 D_ovl2_80116BD0[8];

extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;

// 0x8018E640
void func_ovl63_8018E640(void)
{
    RldmSetup rldm_setup;

    rldm_setup.tableRomAddr = (intptr_t)&D_NF_001AC870;
    rldm_setup.tableFileCount = (uintptr_t)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = D_ovl63_8018EA30;
    rldm_setup.statusBufSize = ARRAY_COUNT(D_ovl63_8018EA30);
    rldm_setup.forceBuf = D_ovl63_8018EBC0;
    rldm_setup.forceBufSize = ARRAY_COUNT(D_ovl63_8018EBC0);

    rldm_initialize(&rldm_setup);
    rldm_load_files_into(D_ovl2_80116BD0, ARRAY_COUNT(D_ovl2_80116BD0), gCommonSpriteFiles, hal_alloc(rldm_bytes_need_to_load(D_ovl2_80116BD0, ARRAY_COUNT(D_ovl2_80116BD0)), 0x10));
}