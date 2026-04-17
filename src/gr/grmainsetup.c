#include <gr/ground.h>
#include <sc/scene.h>

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 8012E840
GObj* (*dGRMainSetupProcMakeList[])(void) =
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

// 801056C0
void grMainSetupMakeGround()
{
	if (gSCManagerBattleState->gkind <= nGRKindBattleEnd)
	{
		dGRMainSetupProcMakeList[gSCManagerBattleState->gkind]();
	}
	else if (gSCManagerBattleState->gkind == nGRKindBonus3)
	{
		grBonus3MakeGround();
	}
	else if (gSCManagerBattleState->gkind >= nGRKindBonus2Start)
	{
		sc1PBonusStageInitBonus2();
	}
	else if (gSCManagerBattleState->gkind >= nGRKindBonus1Start)
	{
		sc1PBonusStageMakeBonus1Ground();
	}
}
