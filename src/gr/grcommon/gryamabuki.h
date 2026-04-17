#ifndef _GRYAMABUKI_H_
#define _GRYAMABUKI_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grYamabukiGateUpdateSleep();
extern sb32 grYamabukiGateCheckPlayersNear();
extern void grYamabukiGateMakeMonster();
extern void grYamabukiGateSetPositionFar();
extern void grYamabukiGateSetPositionNear();
extern void grYamabukiGateAddAnimOffset(intptr_t offset);
extern void grYamabukiGateAddAnimOpen();
extern void grYamabukiGateAddAnimClose();
extern void grYamabukiGateAddAnimOpenEntry();
extern void grYamabukiGateUpdateWait();
extern void grYamabukiGateUpdateOpen();
extern void grYamabukiGateClearMonsterGObj();
extern void grYamabukiGateSetClosedWait();
extern void grYamabukiGateUpdateYakumonoPos();
extern void grYamabukiGateProcUpdate(GObj *ground_gobj);
extern void grYamabukiMakeGate();
extern void grYamabukiInitGroundVars();
extern GObj* grYamabukiMakeGround();

#endif
