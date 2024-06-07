#include "ground.h"

#include <mp/mpcoll.h>

extern mpRoomDObj *gMPRooms;

extern void *D_ovl2_801313E0;
extern void *D_ovl2_801313E4;
extern void *D_ovl2_801313E8;
extern void *D_ovl2_801313EC;

// 0x80105600
void grNodeInit_SetGroundFiles(void) // New file
{
    D_ovl2_801313E0 = func_ovl2_8010547C(&gGroundInfo->gr_desc[0], 0, NULL);
    D_ovl2_801313E4 = func_ovl2_8010547C(&gGroundInfo->gr_desc[1], 1, gMPRooms->room_dobj);
    D_ovl2_801313E8 = func_ovl2_8010547C(&gGroundInfo->gr_desc[2], 2, NULL);
    D_ovl2_801313EC = func_ovl2_8010547C(&gGroundInfo->gr_desc[3], 3, NULL);

    mpCollision_ClearYakumonoAll();
    grProcInit_MakeGround();
    func_ovl2_800FBD14();
    itManagerMakeItemSpawnActor();
    func_ovl2_80116AD0();
}