#ifndef _SC1PCONTINUE_H_
#define _SC1PCONTINUE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <PR/sp.h>
#include <sc/scdef.h>

extern void sc1PContinueProcLights(Gfx **dls);
extern s32 sc1PContinueGetPowerOf(s32 base, s32 exp);
extern void sc1PContinueScoreDigitInitSprite(SObj *sobj);
extern s32 sc1PContinueGetScoreDigitCount(s32 points, s32 digit_count_max);
extern Sprite* sc1PContinueScoreDigitGetSprite(s32 digit);
extern void sc1PContinueMakeScoreDigitSObjs
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
extern void sc1PContinueRoomFadeOutProcRender(GObj *gobj);
extern void sc1PContinueMakeRoomFadeOut(void);
extern void sc1PContinueRoomFadeInProcRender(GObj *gobj);
extern void sc1PContinueMakeRoomFadeIn(void);
extern void sc1PContinueSpotlightFadeProcRender(GObj *gobj);
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
extern void sc1PContinueProcRun(GObj *gobj);
extern void sc1PContinueProcStart(void);
extern void sc1PContinueStartScene(void);

#endif
