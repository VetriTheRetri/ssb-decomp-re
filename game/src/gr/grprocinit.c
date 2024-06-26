#include <gr/ground.h>
#include <gm/battle.h>

GObj* (*grManager_ProcMake[/* */])(void) =
{
    grCommon_Castle_MakeGround,
    grCommon_Sector_MakeGround,
    grCommon_Jungle_MakeGround,
    grCommon_Zebes_MakeGround,
    grCommon_Hyrule_MakeGround,
    grCommon_Yoster_MakeGround,
    grCommon_Pupupu_MakeGround,
    grYamabukiMakeGround,
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
        grBonus_Bonus3_MakeGround();
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