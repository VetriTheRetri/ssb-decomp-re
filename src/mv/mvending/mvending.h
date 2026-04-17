#ifndef _MVENDING_H_
#define _MVENDING_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvEndingFuncLights(Gfx **dls);
extern void mvEndingMakeRoomBackground();
extern void mvEndingMakeRoomDesk();
extern void mvEndingMakeRoomBooks();
extern void mvEndingMakeRoomPencils();
extern void mvEndingMakeRoomLamp();
extern void mvEndingMakeRoomTissues();
extern void mvEndingMakeFighter(s32 fkind);
extern void mvEndingRoomFadeInProcDisplay(GObj *gobj);
extern void mvEndingMakeRoomFadeIn();
extern void mvEndingMakeRoomFadeInCamera();
extern void mvEndingRoomLightProcDisplay(GObj *gobj);
extern void mvEndingMakeRoomLight();
extern void mvEndingMakeRoomLightCamera();
extern void mvEndingEjectRoomGObjs();
extern void mvEndingSetupOperatorCamera(GObj *gobj);
extern void mvEndingMakeMainCameras();
extern void mvEndingInitVars();
extern void mvEndingFuncRun(GObj *gobj);
extern void mvEndingFuncStart();
extern void mvEndingStartScene();

#endif
