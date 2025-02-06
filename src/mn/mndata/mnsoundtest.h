#ifndef _MNSOUNDTEST_H_
#define _MNSOUNDTEST_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern intptr_t lMNSoundTestDigit0Sprite;            // 0x00000148
extern intptr_t lMNSoundTestDigit1Sprite;            // 0x000002D8
extern intptr_t lMNSoundTestDigit2Sprite;            // 0x00000500
extern intptr_t lMNSoundTestDigit3Sprite;            // 0x00000698
extern intptr_t lMNSoundTestDigit4Sprite;            // 0x000008C0
extern intptr_t lMNSoundTestDigit5Sprite;            // 0x00000A58
extern intptr_t lMNSoundTestDigit6Sprite;            // 0x00000C80
extern intptr_t lMNSoundTestDigit7Sprite;            // 0x00000E18
extern intptr_t lMNSoundTestDigit8Sprite;            // 0x00001040
extern intptr_t lMNSoundTestDigit9Sprite;            // 0x00001270
extern intptr_t lMNSoundTestMusicTextSprite;         // 0x00000438
extern intptr_t lMNSoundTestAButtonSprite;           // 0x00000958
extern intptr_t lMNSoundTestSoundTextSprite;         // 0x000009C0
extern intptr_t lMNSoundTestBButtonSprite;           // 0x00000A88
extern intptr_t lMNSoundTestVoiceTextSprite;         // 0x00000E48
extern intptr_t lMNSoundTestOptionOutline;       // 0x00001138
extern intptr_t lMNSoundTestBFunctionTextSprite;     // 0x00001208
extern intptr_t lMNSoundTestStartFunctionTextSprite; // 0x00001348
extern intptr_t lMNSoundTestAFunctionTextSprite;     // 0x00001450
extern intptr_t lMNSoundTestHeaderTextSprite;        // 0x00001BB8
extern intptr_t lMNSoundTestStartButtonSprite;       // 0x00001D50

extern void mnSoundTestUpdateOptionColors(void);
extern void mnSoundTestUpdateControllerInputs(void);
extern void mnSoundTestUpdateFunctions(void);
extern void mnSoundTestProcRun(GObj *gobj);
extern void mnSoundTestSetupFiles(void);
extern SObj* mnSoundTestMakeHeaderSObjs(void);
extern void mnSoundTestOptionThreadUpdate(GObj *gobj);
extern void mnSoundTestMusicProcDisplay(GObj *gobj);
extern SObj* mnSoundTestMakeMusicSObjs(void);
extern void mnSoundTestSoundProcDisplay(GObj *gobj);
extern SObj* mnSoundTestMakeSoundSObjs(void);
extern void mnSoundTestVoiceProcDisplay(GObj *gobj);
extern SObj* mnSoundTestMakeVoiceSObjs(void);
extern SObj* mnSoundTestMakeAButtonSObj(GObj *gobj);
extern SObj* mnSoundTestMakeBButtonSObj(GObj *gobj);
extern SObj* mnSoundTestMakeStartButtonSObj(GObj *gobj);
extern SObj* mnSoundTestMakeAFunctionSObj(GObj *gobj);
extern SObj* mnSoundTestMakeStartFunctionSObj(GObj *gobj);
extern SObj* mnSoundTestMakeBFunctionSObj(GObj *gobj);
extern void mnSoundTestMakeButtonSObjs(void);
extern void mnSoundTestMakeNumberSObj(GObj *gobj);
extern void mnSoundTestUpdateNumberPositions(GObj *gobj, f32 width);
extern void mnSoundTestUpdateNumberSprites(GObj *gobj);
extern void mnSoundTestSelectIDThreadUpdate(GObj *gobj);
extern void mnSoundTestMakeSelectIDGObjs(void);
extern void mnSoundTestArrowsThreadUpdate(GObj *gobj);
extern void mnSoundTestMakeArrowSObjs(void);
extern void mnSoundTestMakeAllSObjs(void);
extern void mnSoundTestMakeCameras(void);
extern void mnSoundTestInitVars(void);
extern void mnSoundTestFuncStart(void);
extern void mnSoundTestFuncLights(Gfx **dls);
extern void mnSoundTestStartScene(void);

#endif
