#include <gr/ground.h>
#include <gm/gmmatch.h>

GObj* (*grManager_ProcMake[/* */])(void) =
{
    grCommon_Castle_MakeGround,
    grCommon_Sector_MakeGround,
    grCommon_Jungle_MakeGround,
    grCommon_Zebes_MakeGround,
    grCommon_Hyrule_MakeGround,
    grCommon_Yoster_MakeGround,
    grCommon_Pupupu_MakeGround,
    grCommon_Yamabuki_MakeGround,
    grCommon_Inishie_MakeGround
};

// 0x801056C0
void grProcInit_MakeGround(void) // New file
{
    if (gBattleState->gr_kind <= Gr_Kind_VSEnd)
    {
        grManager_ProcMake[gBattleState->gr_kind]();
    }
    else if (gBattleState->gr_kind == Gr_Kind_Bonus3)
    {
        func_ovl2_8010B7C8();
    }
    else if (gBattleState->gr_kind >= Gr_Kind_Bonus2Start)
    {
        func_unkmulti_8018DC38();
    }
    else if (gBattleState->gr_kind >= Gr_Kind_Bonus1Start)
    {
        func_unkmulti_8018D5C8();
    }
}