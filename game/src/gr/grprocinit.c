#include <gr/ground.h>
#include <gm/gmmatch.h>

GObj* (*grManager_ProcMake[/* */])(void) =
{
    jtgt_ovl2_8010B4AC,
    grCommon_Sector_MakeGround,
    grCommon_Jungle_MakeGround,
    grCommon_Zebes_MakeGround,
    jtgt_ovl2_8010AB20,
    grCommon_Yoster_MakeGround,
    grCommon_Pupupu_MakeGround,
    jtgt_ovl2_8010B2EC,
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