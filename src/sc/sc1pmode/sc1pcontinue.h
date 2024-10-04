#ifndef _SC1PCONTINUE_H_
#define _SC1PCONTINUE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <PR/sp.h>
#include <sc/scdef.h>

extern intptr_t lSC1PContinueTextScore;                 // 0x00000408
extern intptr_t lSC1PContinueTextContinue;              // 0x000018F0
extern intptr_t lSC1PContinueTextYes;                   // 0x00001E08
extern intptr_t lSC1PContinueTextNo;                    // 0x00002318
extern intptr_t lSC1PContinueCursor;                    // 0x00002DF8
extern intptr_t lSC1PContinueRoom;                      // 0x0001E3D8
extern intptr_t lSC1PContinueSpotlight;                 // 0x00021900
extern intptr_t lSC1PContinueShadow;                    // 0x000224F8

extern void sc1PContinueFuncLights(Gfx **dls);
extern s32 sc1PContinueGetPowerOf(s32 base, s32 exp);
extern void sc1PContinueScoreDigitInitSprite(SObj *sobj);
extern s32 sc1PContinueGetScoreDigitCount(s32 points, s32 digit_count_max);
extern Sprite* sc1PContinueScoreDigitGetSprite(s32 digit);
extern void sc1PContinueMakeScoreDigits
(
    GObj *gobj,
    s32 points,
    f32 x,
    f32 y,
    f32 offset_x,
    s32 sub,
    s32 digit_count,
    sb32 is_fixed_digit_count
);
extern void sc1PContinueMakeScoreDisplay(s32 points);
extern void sc1PContinueSetFighterScale(GObj *gobj, s32 ft_kind);
extern void sc1PContinueMakeFighter(s32 ft_kind);
extern void sc1PContinueRoomFadeOutProcDisplay(GObj *gobj);
extern void sc1PContinueMakeRoomFadeOut(void);
extern void sc1PContinueRoomFadeInProcDisplay(GObj *gobj);
extern void sc1PContinueMakeRoomFadeIn(void);
extern void sc1PContinueSpotlightFadeProcDisplay(GObj *gobj);
extern void sc1PContinueMakeSpotlightFadeSObjs(void);
extern void sc1PContinueMakeRoom(void);
extern void sc1PContinueMakeSpotlightSObjs(void);
extern void sc1PContinueMakeContinueSObj(void);
extern void sc1PContinueOptionSetHighlightColors(GObj *gobj, s32 option);
extern void sc1PContinueOptionProcUpdate(GObj *gobj);
extern void sc1PContinueMakeOptionSObjs(void);
extern void sc1PContinueCursorSetPosition(GObj *gobj, s32 option);
extern void sc1PContinueCursorProcUpdate(GObj *gobj);
extern void sc1PContinueMakeCursorSObj(void);
extern void sc1PContinueGameOverInitSprites(SObj *sobj);
extern void sc1PContinueGameOverStepColors(GObj *gobj);
extern void sc1PContinueMakeGameOverSObjs(void);
extern void sc1PContinueGameOverProcUpdate(GObj *gobj);
extern void sc1PContinueMakeGameOver(void);
extern void sc1PContinueMakeLink26Camera(void);
extern void sc1PContinueMakeLink31Camera(void);
extern void sc1PContinueMakeLink32Camera(void);
extern void sc1PContinueSetupCamera(Camera *cam);
extern void sc1PContinueMakeLinkMultiCamera(void);
extern void sc1PContinueMakeLink29Camera(void);
extern void sc1PContinueMakeLink30Camera(void);
extern void sc1PContinueMakeLink28Camera(void);
extern void sc1PContinueInitVars(void);
extern void sc1PContinueUnused0x80133990(void);
extern void sc1PContinueFuncRun(GObj *gobj);
extern void sc1PContinueFuncStart(void);
extern void sc1PContinueStartScene(void);

#endif
