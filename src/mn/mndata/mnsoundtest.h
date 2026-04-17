#ifndef _MNSOUNDTEST_H_
#define _MNSOUNDTEST_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnSoundTestUpdateOptionColors();
extern void mnSoundTestUpdateControllerInputs();
extern void mnSoundTestUpdateFunctions();
extern void mnSoundTestFuncRun(GObj *gobj);
extern void mnSoundTestSetupFiles();
extern SObj* mnSoundTestMakeHeaderSObjs();
extern void mnSoundTestOptionThreadUpdate(GObj *gobj);
extern void mnSoundTestMusicProcDisplay(GObj *gobj);
extern SObj* mnSoundTestMakeMusicSObjs();
extern void mnSoundTestSoundProcDisplay(GObj *gobj);
extern SObj* mnSoundTestMakeSoundSObjs();
extern void mnSoundTestVoiceProcDisplay(GObj *gobj);
extern SObj* mnSoundTestMakeVoiceSObjs();
extern SObj* mnSoundTestMakeAButtonSObj(GObj *gobj);
extern SObj* mnSoundTestMakeBButtonSObj(GObj *gobj);
extern SObj* mnSoundTestMakeStartButtonSObj(GObj *gobj);
extern SObj* mnSoundTestMakeAFunctionSObj(GObj *gobj);
extern SObj* mnSoundTestMakeStartFunctionSObj(GObj *gobj);
extern SObj* mnSoundTestMakeBFunctionSObj(GObj *gobj);
extern void mnSoundTestMakeButtonSObjs();
extern void mnSoundTestMakeNumberSObj(GObj *gobj);
extern void mnSoundTestUpdateNumberPositions(GObj *gobj, f32 width);
extern void mnSoundTestUpdateNumberSprites(GObj *gobj);
extern void mnSoundTestSelectIDThreadUpdate(GObj *gobj);
extern void mnSoundTestMakeSelectIDGObjs();
extern void mnSoundTestArrowsThreadUpdate(GObj *gobj);
extern void mnSoundTestMakeArrowSObjs();
extern void mnSoundTestMakeAllSObjs();
extern void mnSoundTestMakeCameras();
extern void mnSoundTestInitVars();
extern void mnSoundTestFuncStart();
extern void mnSoundTestFuncLights(Gfx **dls);
extern void mnSoundTestStartScene();

#endif
