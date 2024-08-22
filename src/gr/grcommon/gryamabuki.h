#ifndef _GRYAMABUKI_H_
#define _GRYAMABUKI_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern intptr_t lGRYamabukiGateOpenAnimJoint;           // 0x000009B0
extern intptr_t lGRYamabukiGateCloseAnimJoint;          // 0x00000A20
extern intptr_t lGRYamabukiItemHead;                    // 0x00000014
extern intptr_t lGRYamabukiMapHead;                     // 0x000008A0

extern void grYamabukiGateUpdateSleep(void);
extern sb32 grYamabukiGateCheckPlayersNear(void);
extern void grYamabukiGateMakeMonster(void);
extern void grYamabukiGateSetPositionFar(void);
extern void grYamabukiGateSetPositionNear(void);
extern void grYamabukiGateAddAnimOffset(intptr_t offset);
extern void grYamabukiGateAddAnimOpen(void);
extern void grYamabukiGateAddAnimClose(void);
extern void grYamabukiGateAddAnimOpenEntry(void);
extern void grYamabukiGateUpdateWait(void);
extern void grYamabukiGateUpdateOpen(void);
extern void grYamabukiGateClearMonsterGObj(void);
extern void grYamabukiGateSetClosedWait(void);
extern void grYamabukiGateUpdateYakumonoPos(void);
extern void grYamabukiGateProcUpdate(GObj *ground_gobj);
extern void grYamabukiMakeGate(void);
extern void grYamabukiInitGroundVars(void);
extern GObj* grYamabukiMakeGround(void);

#endif
