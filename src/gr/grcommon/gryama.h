#ifndef _GRYAMA_H_
#define _GRYAMA_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grYamaGateUpdateSleep(void);
extern sb32 grYamaGateCheckPlayersNear(void);
extern void grYamaGateMakeMonster(void);
extern void grYamaGateSetPositionFar(void);
extern void grYamaGateSetPositionNear(void);
extern void grYamaGateAddAnimOffset(intptr_t offset);
extern void grYamaGateAddAnimOpen(void);
extern void grYamaGateAddAnimClose(void);
extern void grYamaGateAddAnimOpenEntry(void);
extern void grYamaGateUpdateWait(void);
extern void grYamaGateUpdateOpen(void);
extern void grYamaGateClearMonsterGObj(void);
extern void grYamaGateSetClosedWait(void);
extern void grYamaGateUpdateYakumonoPos(void);
extern void grYamaGateProcUpdate(GObj *ground_gobj);
extern void grYamaMakeGate(void);
extern void grYamaInitGroundVars(void);
extern GObj* grYamaMakeGround(void);

#endif
