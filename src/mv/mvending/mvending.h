#ifndef _MVENDING_H_
#define _MVENDING_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern intptr_t lMVEndingOperatorCamAnimJoint;          // 0x00000000

extern void mvEndingProcLights(Gfx **dls);
extern void mvEndingMakeRoomBackground(void);
extern void mvEndingMakeRoomDesk(void);
extern void mvEndingMakeRoomBooks(void);
extern void mvEndingMakeRoomPencils(void);
extern void mvEndingMakeRoomLamp(void);
extern void mvEndingMakeRoomTissues(void);
extern void mvEndingMakeFighter(s32 ft_kind);
extern void mvEndingRoomFadeInProcRender(GObj *gobj);
extern void mvEndingMakeRoomFadeIn(void);
extern void mvEndingMakeRoomFadeInCamera(void);
extern void mvEndingRoomLightProcRender(GObj *gobj);
extern void mvEndingMakeRoomLight(void);
extern void mvEndingMakeRoomLightCamera(void);
extern void mvEndingEjectRoomGObjs(void);
extern void mvEndingSetupOperatorCamera(GObj *gobj);
extern void mvEndingMakeMainCameras(void);
extern void mvEndingInitVars(void);
extern void mvEndingProcRun(GObj *gobj);
extern void mvEndingProcStart(void);
extern void mvEndingStartScene(void);

#endif
