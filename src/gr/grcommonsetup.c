#include <gr/ground.h>
#include <mp/map.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 801313E0
GObj *gGRCommonLayerGObjs[4];

// 801313F0
GRStruct gGRCommonStruct;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 80105600
void grCommonSetupInitAll()
{
	gGRCommonLayerGObjs[0] = grDisplayMakeGeometryLayer(&gMPCollisionGroundData->gr_desc[0], 0, NULL);
	gGRCommonLayerGObjs[1] = grDisplayMakeGeometryLayer(&gMPCollisionGroundData->gr_desc[1], 1, gMPCollisionYakumonoDObjs->dobjs);
	gGRCommonLayerGObjs[2] = grDisplayMakeGeometryLayer(&gMPCollisionGroundData->gr_desc[2], 2, NULL);
	gGRCommonLayerGObjs[3] = grDisplayMakeGeometryLayer(&gMPCollisionGroundData->gr_desc[3], 3, NULL);

	mpCollisionClearYakumonoAll();
	grMainSetupMakeGround();
	mpCollisionInitYakumonoAll();
	itManagerMakeAppearActor();
	efGroundMakeAppearActor();
}
