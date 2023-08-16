#include <gr/ground.h>

extern grZebesAcid D_ovl2_8012EA60[];

// 0x80108020
void func_ovl2_80108020(void)
{
    gGroundStruct.zebes.acid_level_target = ((D_ovl2_8012EA60[gGroundStruct.zebes.acid_rise_index].acid_level + (lbRandom_GetFloat() * 250.0F)) - gGroundStruct.zebes.acid_level_current) / 240.0F;
}
