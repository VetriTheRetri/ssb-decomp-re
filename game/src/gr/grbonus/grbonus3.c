#include <gr/ground.h>

extern intptr_t D_NF_00000000;
extern intptr_t D_NF_00000000_other;

void func_ovl2_8010B4D0(void)
{
    gGroundStruct.bonus3.map_head = (void*) ((uintptr_t)gGroundInfo->map_nodes - (intptr_t)&D_NF_00000000);
    gGroundStruct.bonus3.item_head = (void*) ((uintptr_t)gGroundInfo - (intptr_t)&D_NF_00000000_other);
}
