#include <gr/ground.h>
#include <mp/map.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801313E0 
void *sGRCommonFileNodes[4];

// 0x801313F0
grStruct gGRCommonStruct;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80105600
void grCommonSetupInitAll(void) // New file
{
    sGRCommonFileNodes[0] = grDisplayMakeGeometryLayer(&gMPCollisionGroundData->gr_desc[0], 0, NULL);
    sGRCommonFileNodes[1] = grDisplayMakeGeometryLayer(&gMPCollisionGroundData->gr_desc[1], 1, gMPCollisionYakumonoDObjs->yakumono_dobj);
    sGRCommonFileNodes[2] = grDisplayMakeGeometryLayer(&gMPCollisionGroundData->gr_desc[2], 2, NULL);
    sGRCommonFileNodes[3] = grDisplayMakeGeometryLayer(&gMPCollisionGroundData->gr_desc[3], 3, NULL);

    mpCollisionClearYakumonoAll();
    grMainSetupMakeGround();
    func_ovl2_800FBD14();
    itManagerMakeItemSpawnActor();
    efGroundMakeEffectSpawnActor();
}
