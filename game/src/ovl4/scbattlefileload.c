#include <ovl0/reloc_data_mgr.h>

extern void *gCommonSpriteFiles[];
extern uintptr_t D_NF_00000854;
extern uintptr_t D_NF_001AC870;
extern u32 D_ovl2_80116BD0[8];

RldmFileNode D_ovl4_8018E480[100];
RldmFileNode D_ovl4_8018E7A0[7];

// 0x8018E330
void func_ovl4_8018E330(void)
{
    RldmSetup rldm_setup;

    rldm_setup.tableRomAddr = (s32)&D_NF_001AC870;
    rldm_setup.tableFileCount = (u32)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = D_ovl4_8018E480;
    rldm_setup.statusBufSize = ARRAY_COUNT(D_ovl4_8018E480);
    rldm_setup.forceBuf = D_ovl4_8018E7A0;
    rldm_setup.forceBufSize = ARRAY_COUNT(D_ovl4_8018E7A0);

    rldm_initialize(&rldm_setup);
    rldm_load_files_into(D_ovl2_80116BD0, ARRAY_COUNT(D_ovl2_80116BD0), gCommonSpriteFiles, hal_alloc(rldm_bytes_need_to_load(D_ovl2_80116BD0, ARRAY_COUNT(D_ovl2_80116BD0)), 0x10));
}
