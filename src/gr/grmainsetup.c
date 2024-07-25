#include <gr/ground.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x8012E840
GObj* (*dGRMainSetupProcMakeList[/* */])(void) =
{
    grCastleMakeGround,
    grSectorMakeGround,
    grJungleMakeGround,
    grZebesMakeGround,
    grHyruleMakeGround,
    grYosterMakeGround,
    grPupupuMakeGround,
    grYamabukiMakeGround,
    grInishieMakeGround
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801056C0
void grMainSetupMakeGround(void) // New file
{
    if (gBattleState->gr_kind <= Gr_Kind_BattleEnd)
    {
        dGRMainSetupProcMakeList[gBattleState->gr_kind]();
    }
    else if (gBattleState->gr_kind == Gr_Kind_Bonus3)
    {
        grBonus3MakeGround();
    }
    else if (gBattleState->gr_kind >= Gr_Kind_Bonus2Start)
    {
        func_ovl6_8018DC38();
    }
    else if (gBattleState->gr_kind >= Gr_Kind_Bonus1Start)
    {
        func_ovl6_8018D5C8();
    }
}