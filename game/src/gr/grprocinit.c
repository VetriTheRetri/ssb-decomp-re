#include "ground.h"

#include <gm/gmmatch.h>

void (*grManager_ProcInit[Gr_Kind_VSEnd + 1])(void) = 
{
    jtgt_ovl2_8010B4AC,
    grCommon_Sector_MakeGround,
    jtgt_ovl2_80109FB4,
    grCommon_Zebes_MakeGround,
    jtgt_ovl2_8010AB20,
    jtgt_ovl2_80108C80,
    grCommon_Pupupu_MakeGround,
    jtgt_ovl2_8010B2EC,
    jtgt_ovl2_80109C0C
};

void func_ovl2_801056C0(void) // New file
{
    if (gBattleState->gr_kind <= Gr_Kind_VSEnd)
    {
        grManager_ProcInit[gBattleState->gr_kind]();
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