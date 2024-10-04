#ifndef _IFCOMMON_H_
#define _IFCOMMON_H_

#include <ssb_types.h>
#include <PR/gbi.h>
#include <sys/objdef.h>
#include <if/ifdef.h>
#include <ft/ftdef.h>
#include <it/itdef.h>

extern intptr_t lIFCommonPlayerArrowsDObjDesc;              // 0x00000188
extern intptr_t lIFCommonPlayerArrowsAnimJoint;             // 0x00000270

extern intptr_t lIFCommonPlayerMagnifyFrame;                // 0x000002C8
extern intptr_t lIFCommonPlayerMagnifyDisplayList;          // 0x00000030

extern intptr_t lIFCommonItemArrow;                         // 0x00000050

extern intptr_t lIFCommonTrafficRod;                        // 0x00020990
extern intptr_t lIFCommonTrafficFrame;                      // 0x00021760
extern intptr_t lIFCommonTrafficRodShadow;                  // 0x00021878
extern intptr_t lIFCommonTrafficLampRedDim;                 // 0x00021950
extern intptr_t lIFCommonTrafficLampYellowDim;              // 0x00021A10
extern intptr_t lIFCommonTrafficLampBlueDim;                // 0x00021BA8
extern intptr_t lIFCommonTrafficLampRedContour;             // 0x00023A28
extern intptr_t lIFCommonTrafficLampYellowContour;          // 0x00024620
extern intptr_t lIFCommonTrafficLampBlueContour;            // 0x00025290
extern intptr_t lIFCommonTrafficLampRedLight;               // 0x00022128
extern intptr_t lIFCommonTrafficLampYellowLight;            // 0x00022588
extern intptr_t lIFCommonTrafficLampBlueLight;              // 0x00022F18

extern intptr_t lIFCommonAnnounceGoLetterG;                 // 0x00004D78
extern intptr_t lIFCommonAnnounceGoLetterO;                 // 0x0000A730
extern intptr_t lIFCommonAnnounceGoSymbolExclaim;           // 0x0000C370

extern intptr_t lIFCommonAnnounceCommonLetterA;             // 0x000005E0
extern intptr_t lIFCommonAnnounceCommonLetterC;             // 0x00000D80
extern intptr_t lIFCommonAnnounceCommonLetterD;             // 0x00001268
extern intptr_t lIFCommonAnnounceCommonLetterE;             // 0x00001628
extern intptr_t lIFCommonAnnounceCommonLetterF;             // 0x00001A00
extern intptr_t lIFCommonAnnounceCommonLetterG;             // 0x00001F08
extern intptr_t lIFCommonAnnounceCommonLetterH;             // 0x00002408
extern intptr_t lIFCommonAnnounceCommonLetterI;             // 0x000026B8
extern intptr_t lIFCommonAnnounceCommonLetterL;             // 0x00003358
extern intptr_t lIFCommonAnnounceCommonLetterM;             // 0x00003980
extern intptr_t lIFCommonAnnounceCommonLetterN;             // 0x00003E88
extern intptr_t lIFCommonAnnounceCommonLetterO;             // 0x000044B0
extern intptr_t lIFCommonAnnounceCommonLetterP;             // 0x00004890
extern intptr_t lIFCommonAnnounceCommonLetterR;             // 0x00005418
extern intptr_t lIFCommonAnnounceCommonLetterS;             // 0x000057F0
extern intptr_t lIFCommonAnnounceCommonLetterT;             // 0x00005BD0
extern intptr_t lIFCommonAnnounceCommonLetterU;             // 0x000060D8
extern intptr_t lIFCommonAnnounceCommonLetterV;             // 0x000065D8
extern intptr_t lIFCommonAnnounceCommonSymbolExclaim;       // 0x00007D98

extern intptr_t lIFCommonAnnounceTimeUpLetterT;             // 0x0000E4A8
extern intptr_t lIFCommonAnnounceTimeUpLetterI;             // 0x0000F740
extern intptr_t lIFCommonAnnounceTimeUpLetterM;             // 0x000127E0
extern intptr_t lIFCommonAnnounceTimeUpLetterE;             // 0x000144E0
extern intptr_t lIFCommonAnnounceTimeUpLetterU;             // 0x00016EB8
extern intptr_t lIFCommonAnnounceTimeUpLetterP;             // 0x00018FE8

extern intptr_t lIFCommonAnnounceGameSetLetterG;            // 0x00020788
extern intptr_t lIFCommonAnnounceGameSetLetterA;            // 0x0001DE68
extern intptr_t lIFCommonAnnounceGameSetLetterM;            // 0x000127E0
extern intptr_t lIFCommonAnnounceGameSetLetterE;            // 0x000144E0
extern intptr_t lIFCommonAnnounceGameSetLetterS;            // 0x0001B5F8
extern intptr_t lIFCommonAnnounceGameSetLetterT;            // 0x0000E4A8

extern intptr_t lIFCommonPlayerDamageDigit0;                // 0x00000148
extern intptr_t lIFCommonPlayerDamageDigit1;                // 0x000002D8
extern intptr_t lIFCommonPlayerDamageDigit2;                // 0x00000500
extern intptr_t lIFCommonPlayerDamageDigit3;                // 0x00000698
extern intptr_t lIFCommonPlayerDamageDigit4;                // 0x000008C0
extern intptr_t lIFCommonPlayerDamageDigit5;                // 0x00000A58
extern intptr_t lIFCommonPlayerDamageDigit6;                // 0x00000C80
extern intptr_t lIFCommonPlayerDamageDigit7;                // 0x00000E18
extern intptr_t lIFCommonPlayerDamageDigit8;                // 0x00001040
extern intptr_t lIFCommonPlayerDamageDigit9;                // 0x00001270
extern intptr_t lIFCommonPlayerDamageSymbolPercent;         // 0x00001458
extern intptr_t lIFCommonPlayerDamageSymbolHP;              // 0x000015D8

extern intptr_t lIFCommonTimerDigit0;                       // 0x00000138
extern intptr_t lIFCommonTimerDigit1;                       // 0x00000228
extern intptr_t lIFCommonTimerDigit2;                       // 0x000003A8
extern intptr_t lIFCommonTimerDigit3;                       // 0x00000528
extern intptr_t lIFCommonTimerDigit4;                       // 0x000006A8
extern intptr_t lIFCommonTimerDigit5;                       // 0x00000828
extern intptr_t lIFCommonTimerDigit6;                       // 0x000009A8
extern intptr_t lIFCommonTimerDigit7;                       // 0x00000B28
extern intptr_t lIFCommonTimerDigit8;                       // 0x00000CA8
extern intptr_t lIFCommonTimerDigit9;                       // 0x00000E28
extern intptr_t lIFCommonTimerSymbolColon;                  // 0x00000F08
extern intptr_t lIFCommonTimerSymbolSec;                    // 0x00001140
extern intptr_t lIFCommonTimerSymbolCSec;                   // 0x00001238

extern intptr_t lIFCommonPlayerStockDigit0;                 // 0x00000068
extern intptr_t lIFCommonPlayerStockDigit1;                 // 0x00000118
extern intptr_t lIFCommonPlayerStockDigit2;                 // 0x000001C8
extern intptr_t lIFCommonPlayerStockDigit3;                 // 0x00000278
extern intptr_t lIFCommonPlayerStockDigit4;                 // 0x00000328
extern intptr_t lIFCommonPlayerStockDigit5;                 // 0x000003D8
extern intptr_t lIFCommonPlayerStockDigit6;                 // 0x00000488
extern intptr_t lIFCommonPlayerStockDigit7;                 // 0x00000538
extern intptr_t lIFCommonPlayerStockDigit8;                 // 0x000005E8
extern intptr_t lIFCommonPlayerStockDigit9;                 // 0x00000698
extern intptr_t lIFCommonPlayerStockSymbolX;                // 0x00000828

extern intptr_t lIFCommonPlayerTag1P;                       // 0x00000258
extern intptr_t lIFCommonPlayerTag2P;                       // 0x000004F8
extern intptr_t lIFCommonPlayerTag3P;                       // 0x00000798
extern intptr_t lIFCommonPlayerTag4P;                       // 0x00000A38
extern intptr_t lIFCommonPlayerTagCP;                       // 0x00000CD8
extern intptr_t lIFCommonPlayerTagAlly;                     // 0x00000EB8

extern intptr_t lIFCommonBattlePausePlayerNum1P;            // 0x00000078
extern intptr_t lIFCommonBattlePausePlayerNum2P;            // 0x00000138
extern intptr_t lIFCommonBattlePausePlayerNum3P;            // 0x000001F8
extern intptr_t lIFCommonBattlePausePlayerNum4P;            // 0x000002B8

extern intptr_t lIFCommonBattlePauseDecalPause;             // 0x00000438
extern intptr_t lIFCommonBattlePauseDecalAButton;           // 0x00000958
extern intptr_t lIFCommonBattlePauseDecalBButton;           // 0x00000A88
extern intptr_t lIFCommonBattlePauseDecalZTrigger;          // 0x00000BD8
extern intptr_t lIFCommonBattlePauseDecalRTrigger;          // 0x00000CF8
extern intptr_t lIFCommonBattlePauseDecalPlus;              // 0x000004D8
extern intptr_t lIFCommonBattlePauseDecalReset;             // 0x00000610
extern intptr_t lIFCommonBattlePauseDecalSmashBall;         // 0x000006D8
extern intptr_t lIFCommonBattlePauseDecalArrows;            // 0x00001538
extern intptr_t lIFCommonBattlePauseDecalControlStick;      // 0x000017A8
extern intptr_t lIFCommonBattlePauseDecalLTrigger;          // 0x000018C8
extern intptr_t lIFCommonBattlePauseDecalRetry;             // 0x00000828

extern void ifCommonPlayerDamageSetShowInterface(void);
extern s32 ifCommonPlayerDamageGetSpecialArrayID(s32 damage, u8 *digits);
extern s32 ifCommonPlayerDamageGetPercentArrayID(s32 damage, u8 *digits);
extern s32 ifCommonPlayerDamageGetHitPointsArrayID(s32 damage, u8 *digits);
extern s32 ifCommonPlayerDamageGetDigitOffset(s32 digit_count, u8 *digit_ids);
extern void ifCommonPlayerDamageUpdateDigits(GObj *interface_gobj);
extern void ifCommonPlayerDamageUpdateAnim(GObj *interface_gobj);
extern void ifCommonPlayerDamageProcUpdate(GObj *interface_gobj);
extern void ifCommonPlayerDamageProcDisplay(GObj *interface_gobj);
extern void ifCommonPlayerDamageSetDigitAttr(void);
extern void ifCommonPlayerDamageSetDigitPositions(void);
extern void ifCommonPlayerDamageInitInterface(void);
extern void ifCommonPlayerDamageStartBreakAnim(ftStruct *fp);
extern void ifCommonPlayerDamageStopBreakAnim(ftStruct *fp);
extern void ifCommonPlayerStockMultiProcDisplay(GObj *interface_gobj);
extern void ifCommonPlayerStockSetIconAttr(void);
extern void ifCommonPlayerStockMultiMakeInterface(s32 player);
extern void ifCommonPlayerStockSingleProcDisplay(GObj *interface_gobj);
extern void ifCommonPlayerStockSetLUT(s32 player, s32 lut_id, ftAttributes *attributes);
extern void ifCommonPlayerStockSingleMakeInterface(s32 player);
extern void ifCommonPlayerStockStealProcUpdate(GObj *interface_gobj);
extern void ifCommonPlayerStockStealMakeInterface(s32 thief, s32 stolen);
extern void ifCommonPlayerStockInitInterface(void);
extern void ifCommonPlayerMagnifyGetPosition(f32 player_pos_x, f32 player_pos_y, Vec2f *magnify_pos);
extern void ifCommonPlayerMagnifyUpdateRender(Gfx **dls, s32 color_id, f32 ulx, f32 uly);
extern void ifCommonPlayerMagnifyUpdateViewport(Gfx **dls, ftStruct *fp);
extern void ifCommonPlayerMagnifyProcDisplay(ftStruct *fp);
extern void ifCommonPlayerMagnifyMakeInterface(void);
extern void ifCommonPlayerArrowsLeftProcDisplay(GObj *interface_gobj);
extern void ifCommonPlayerArrowsRightProcDisplay(GObj *interface_gobj);
extern void ifCommonPlayerArrowsAddAnim(GObj *interface_gobj);
extern void ifCommonPlayerArrowsLeftProcUpdate(GObj *interface_gobj);
extern void ifCommonPlayerArrowsRightProcUpdate(GObj *interface_gobj);
extern GObj* ifCommonPlayerArrowsMakeInterface(void (*proc_display)(GObj*), void (*proc_update)(GObj*));
extern void ifCommonPlayerArrowsFuncRun(GObj *interface_gobj);
extern void ifCommonPlayerArrowsMainProcDisplay(GObj *interface_gobj);
extern void ifCommonPlayerArrowsInitInterface(void);
extern void ifCommonPlayerArrowsUpdateFlags(f32 x, f32 y);
extern void ifCommonPlayerTagProcDisplay(GObj *interface_gobj);
extern void ifCommonPlayerTagMakeInterface(void);
extern void ifCommonItemArrowProcDisplay(GObj *interface_gobj);
extern GObj* ifCommonItemArrowMakeInterface(itStruct *ip);
extern void ifCommonItemArrowSetAttr(void);
extern void ifCommonAnnounceThread(GObj *interface_gobj);
extern void ifCommonAnnounceSetAttr(GObj *interface_gobj, s32 file_id, ifACharacter *character, s32 sprite_count);
extern void ifCommonAnnounceGoMakeInterface(void);
extern void ifCommonAnnounceGoSetStatus(void);
extern SObj* ifCommonTrafficMakeSObj(GObj *interface_gobj, s32 id);
extern void ifCommonCountdownThread(GObj *interface_gobj);
extern SObj* ifCommonCountdownMakeInterface(void);
extern GObj* ifCommonAnnounceTimeUpMakeInterface(void);
extern void ifCommonEntryFocusThread(GObj *interface_gobj);
extern void ifCommonEntryFocusMakeInterface(s32 id);
extern void ifCommonEntryAllThread(GObj *interface_gobj);
extern void ifCommonEntryAllMakeInterface(void);
extern void ifCommonSuddenDeathThread(GObj *interface_gobj);
extern void ifCommonAnnounceSetColors(GObj *interface_gobj, syColorRGBPair *colors);
extern void ifCommonSuddenDeathMakeInterface(void);
extern void ifCommonTimerProcDisplay(GObj *interface_gobj);
extern void ifCommonTimerSetAttr(void);
extern void ifCommonTimerInitAnnouncedSeconds(void);
extern SObj* ifCommonTimerMakeDigits(void);
extern void ifCommonTimerFuncRun(GObj *interface_gobj);
extern void ifCommonTimerMakeInterface(void (*proc)(void));
extern GObj* ifCommonAnnounceGameSetMakeInterface(void);
extern void ifCommonBattleInitPlacement(void);
extern void func_ovl2_80113638(GObj *interface_gobj, u32 unused);
extern void func_ovl2_8011366C(GObj *interface_gobj, u32 unused);
extern void ifCommonBattleInterfaceProcUpdate(void);
extern void ifCommonBattleEndInitSoundNum(void);
extern void ifCommonBattleEndPlaySoundQueue(void);
extern void ifCommonBattleEndAddSoundQueueID(u16 sfx_id);
extern void ifCommonBattleEndSetBossDefeat(void);
extern void ifCommonBattleUpdateScoreStocks(ftStruct *fp);
extern void ifCommonBattlePauseProcDisplay(GObj *interface_gobj);
extern void ifCommonBattlePausePlayerNumMakeSObj(GObj *interface_gobj, s32 player);
extern void ifCommonBattlePauseDecalMakeSObjID(GObj *interface_gobj, s32 id);
extern void ifCommonBattlePauseMakeSObjsAll(GObj *interface_gobj);
extern void ifCommonBattlePauseMakeInterface(s32 player);
extern void ifCommonBattlePauseEjectGObjs(void);
extern void ifCommonInterfaceSetGObjFlagsAll(u32 flags);
extern void ifCommonBattlePauseSetGObjFlagsAll(u32 flags);
extern void ifCommonBattlePauseInitInterface(s32 player);
extern void ifCommonBattleGoUpdateInterface(void);
extern void ifCommonBattleInterfaceProcSet(void);
extern void ifCommonBattlePauseUpdateInterface(void);
extern void ifCommonBattlePauseRestoreInterfaceAll(void);
extern void ifCommonBattleEndUpdateInterface(void);
extern void ifCommonBattleBossDefeatUpdateInterface(void);
extern void ifCommonBattleSetUpdateInterface(void);
extern void ifCommonSetMaxNumGObj(void);
extern void ifCommonBattleUpdateInterfaceAll(void);
extern void ifCommonBattleSetGameStatusWait(void);
extern void ifCommonPlayerInterfaceAddToViewport(ftStruct *fp);
extern void ifCommonPlayerScoreMakeEffect(ftStruct *fp, s32 score);
extern GObj* ifCommonAnnounceFailureMakeInterface(void);
extern GObj* ifCommonAnnounceCompleteMakeInterface(void);
extern void ifCommonBonusInterfaceProcUpdate(void);
extern void ifCommonBattleSetInterface(void (*proc_update)(void), void (*proc_set)(void), u16 sfx_id, u16 restore_wait);
extern void ifCommonBattleBossDefeatSetGameStatus(void);
extern void ifCommon1PGameInterfaceProcSet(void);
extern void ifCommonAnnounceEndMessage(void);
extern void ifCommonAnnounceCompleteInitInterface(u16 sfx_id);
extern void ifCommonAnnounceTimeUpInitInterface(void);
extern void ifCommonAnnounceFailureInitInterface(void);

#endif
