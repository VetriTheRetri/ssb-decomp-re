#include <gr/ground.h>
#include <mp/mpcoll.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801313E0 
void *sGRFileNodes[4];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80105600
void grCommonSetupInitAll(void) // New file
{
    sGRFileNodes[0] = grGeometrySetupMakeGeometryLayer(&gGroundInfo->gr_desc[0], 0, NULL);
    sGRFileNodes[1] = grGeometrySetupMakeGeometryLayer(&gGroundInfo->gr_desc[1], 1, gMPRooms->room_dobj);
    sGRFileNodes[2] = grGeometrySetupMakeGeometryLayer(&gGroundInfo->gr_desc[2], 2, NULL);
    sGRFileNodes[3] = grGeometrySetupMakeGeometryLayer(&gGroundInfo->gr_desc[3], 3, NULL);

    mpCollision_ClearYakumonoAll();
    grMainSetupMakeGround();
    func_ovl2_800FBD14();
    itManagerMakeItemSpawnActor();
    efGroundMakeEffectSpawnActor();
}