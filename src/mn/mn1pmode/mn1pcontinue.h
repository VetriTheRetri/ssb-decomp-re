#ifndef _MN1PCONTINUE_H_
#define _MN1PCONTINUE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <PR/sp.h>
#include <mn/mndef.h>

extern intptr_t lMN1PContinueTextScore;                 // 0x00000408
extern intptr_t lMN1PContinueTextContinue;              // 0x000018F0
extern intptr_t lMN1PContinueTextYes;                   // 0x00001E08
extern intptr_t lMN1PContinueTextNo;                    // 0x00002318
extern intptr_t lMN1PContinueCursor;                    // 0x00002DF8
extern intptr_t lMN1PContinueRoom;                      // 0x0001E3D8
extern intptr_t lMN1PContinueSpotlight;                 // 0x00021900
extern intptr_t lMN1PContinueShadow;                    // 0x000224F8

extern void mn1PContinueFuncLights(Gfx **dls);
extern s32 mn1PContinueGetPowerOf(s32 base, s32 exp);
extern void mn1PContinueScoreDigitInitSprite(SObj *sobj);
extern s32 mn1PContinueGetScoreDigitCount(s32 points, s32 digit_count_max);
extern Sprite* mn1PContinueScoreDigitGetSprite(s32 digit);
extern void mn1PContinueMakeScoreDigits
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
extern void mn1PContinueMakeScoreDisplay(s32 points);
extern void mn1PContinueSetFighterScale(GObj *gobj, s32 fkind);
extern void mn1PContinueMakeFighter(s32 fkind);
extern void mn1PContinueRoomFadeOutProcDisplay(GObj *gobj);
extern void mn1PContinueMakeRoomFadeOut(void);
extern void mn1PContinueRoomFadeInProcDisplay(GObj *gobj);
extern void mn1PContinueMakeRoomFadeIn(void);
extern void mn1PContinueSpotlightFadeProcDisplay(GObj *gobj);
extern void mn1PContinueMakeSpotlightFade(void);
extern void mn1PContinueMakeRoom(void);
extern void mn1PContinueMakeSpotlight(void);
extern void mn1PContinueMakeContinue(void);
extern void MN1PContinueOptionSetHighlightColors(GObj *gobj, s32 option);
extern void MN1PContinueOptionProcUpdate(GObj *gobj);
extern void mn1PContinueMakeOptions(void);
extern void mn1PContinueCursorSetPosition(GObj *gobj, s32 option);
extern void mn1PContinueCursorProcUpdate(GObj *gobj);
extern void mn1PContinueMakeCursor(void);
extern void mn1PContinueGameOverInitSprites(SObj *sobj);
extern void mn1PContinueGameOverTextStepColors(GObj *gobj);
extern void mn1PContinueMakeGameOverText(void);
extern void mn1PContinueGameOverProcUpdate(GObj *gobj);
extern void mn1PContinueMakeGameOver(void);
extern void mn1PContinueMakeRoomFadeInCamera(void);
extern void mn1PContinueMakeSpotlightFadeCamera(void);
extern void mn1PContinueMakeRoomFadeOutCamera(void);
extern void mn1PContinueSetupCamera(CObj *cobj);
extern void mn1PContinueMakeMainCamera(void);
extern void mn1PContinueMakeRoomCamera(void);
extern void mn1PContinueMakeSpotlightCamera(void);
extern void mn1PContinueMakeTextCamera(void);
extern void mn1PContinueInitVars(void);
extern void mn1PContinueUnused0x80133990(void);
extern void mn1PContinueProcRun(GObj *gobj);
extern void mn1PContinueFuncStart(void);
extern void mn1PContinueStartScene(void);

#endif
